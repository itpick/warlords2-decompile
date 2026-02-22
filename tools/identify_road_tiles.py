#!/usr/bin/env python3
"""
Precisely identify each road tile's connection directions by checking
road pixels at the EXACT positions where adjacent tile roads would be.

Vertical roads center at ~cols 24-31 (from tile 1 analysis).
Horizontal roads center at ~rows 14-23 (from tile 0 analysis).

For each tile position in PICT 30021, check which edges have road pixels
at these positions.
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"


def load_pict_pixels(pict_data):
    """Parse PICT and return pixel array."""
    if len(pict_data) < 10:
        return None

    offset = 10
    version = 1

    while offset < len(pict_data) - 1:
        if version == 1:
            opcode = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
        else:
            if offset % 2 != 0:
                offset += 1
            if offset + 2 > len(pict_data):
                break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

        if opcode == 0x0011:
            ver = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
            if ver == 2:
                version = 2
                offset += 1
            continue
        if opcode == 0x0C00: offset += 24; continue
        if opcode == 0x001E: continue
        if opcode == 0x0001:
            offset += struct.unpack_from('>H', pict_data, offset)[0]; continue
        if opcode == 0x0000: continue
        if opcode in (0x0003, 0x0004, 0x0005, 0x000D, 0x0008, 0x0015, 0x0016):
            offset += 2; continue
        if opcode == 0x0007: offset += 4; continue
        if opcode in (0x0009, 0x000A): offset += 8; continue
        if opcode == 0x000B: offset += 4; continue
        if opcode == 0x001A: continue
        if opcode in (0x0018, 0x0019): offset += 6; continue
        if opcode == 0x0020: offset += 8; continue
        if opcode == 0x0021: offset += 4; continue
        if opcode in range(0x0028, 0x002F): offset += 6; continue
        if opcode in range(0x0030, 0x0035): offset += 8; continue
        if opcode in range(0x0038, 0x003C): continue

        if opcode == 0x0098 or opcode == 0x0099:
            rowBytes_raw = struct.unpack_from('>H', pict_data, offset)[0]
            rowBytes = rowBytes_raw & 0x3FFF
            pm_top, pm_left, pm_bottom, pm_right = struct.unpack_from('>hhhh', pict_data, offset + 2)
            pm_width = pm_right - pm_left
            pm_height = pm_bottom - pm_top

            if rowBytes_raw & 0x8000:
                pixelSize = struct.unpack_from('>H', pict_data, offset + 28)[0]
                offset += 46
                ct_size = struct.unpack_from('>H', pict_data, offset + 6)[0]
                num_colors = ct_size + 1
                offset += 8
                palette = []
                for i in range(num_colors):
                    r = struct.unpack_from('>H', pict_data, offset + 2)[0] >> 8
                    g = struct.unpack_from('>H', pict_data, offset + 4)[0] >> 8
                    b = struct.unpack_from('>H', pict_data, offset + 6)[0] >> 8
                    palette.append((r, g, b))
                    offset += 8
            else:
                pixelSize = 1
                palette = [(255, 255, 255), (0, 0, 0)]
                offset += 10

            offset += 8 + 8 + 2  # src_rect + dst_rect + mode
            if opcode == 0x0099:
                offset += struct.unpack_from('>H', pict_data, offset)[0]

            pixels = [[0] * pm_width for _ in range(pm_height)]
            for row in range(pm_height):
                if rowBytes > 250:
                    byteCount = struct.unpack_from('>H', pict_data, offset)[0]
                    offset += 2
                else:
                    byteCount = struct.unpack_from('>B', pict_data, offset)[0]
                    offset += 1
                row_end = offset + byteCount
                unpacked = bytearray()
                while offset < row_end:
                    flag = struct.unpack_from('>b', pict_data, offset)[0]
                    offset += 1
                    if flag >= 0:
                        count = flag + 1
                        unpacked.extend(pict_data[offset:offset + count])
                        offset += count
                    elif flag != -128:
                        count = -flag + 1
                        val = pict_data[offset]
                        offset += 1
                        unpacked.extend([val] * count)
                if pixelSize == 8:
                    for x in range(min(pm_width, len(unpacked))):
                        pixels[row][x] = unpacked[x]

            return pixels, pm_width, pm_height, palette

        if opcode in (0x00FF, 0xFFFF): break
        if version == 2 and opcode >= 0x0100:
            offset += (opcode >> 8) * 2
        elif opcode == 0x00A1:
            offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
        elif opcode == 0x00A0:
            offset += 2
        else:
            break

    return None


def main():
    with open(TERRAIN_FILE, 'rb') as f:
        data = f.read()
    resources = parse_resource_fork(data)

    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 30021:
            pict_data = r.data
            break

    if pict_data is None:
        print("PICT 30021 not found!")
        return

    result = load_pict_pixels(pict_data)
    if result is None:
        print("Failed to parse PICT")
        return

    pixels, width, height, palette = result
    bg_idx = pixels[0][0]

    print(f"Road sheet: {width}x{height}, bg=palette[{bg_idx}]")

    # From tile 0 (horizontal road): road center at rows 16-22 (checked visually)
    # From tile 1 (vertical road): road center at cols 24-30

    # Precise edge positions for connection detection:
    # N edge: check rows 0-4 at cols 20-34 (wide band around vertical center)
    # S edge: check rows 35-39 at cols 20-34
    # E edge: check cols 35-39 at rows 12-27 (wide band around horizontal center)
    # W edge: check cols 0-4 at rows 12-27

    def count_road_pixels(x0, y0, x_range, y_range):
        count = 0
        total = 0
        for y in y_range:
            for x in x_range:
                ax = x0 + x
                ay = y0 + y
                if 0 <= ay < height and 0 <= ax < width:
                    total += 1
                    if pixels[ay][ax] != bg_idx:
                        count += 1
        return count, total

    # Try every possible tile → direction mapping
    tile_w, tile_h = 40, 40
    cols = width // tile_w
    rows = height // tile_h

    # For each tile, determine connections
    tile_connections = {}

    # Threshold: at least 20% of the edge band filled with road pixels
    threshold_pct = 0.15

    print(f"\n{'Pos':>3} {'N-count':>8} {'E-count':>8} {'S-count':>8} {'W-count':>8} {'Dirs':>6}")
    print("-" * 55)

    for idx in range(17):  # tiles 0-16
        tc = idx % cols
        tr = idx // cols
        x0 = tc * tile_w
        y0 = tr * tile_h

        # Check each edge
        n_count, n_total = count_road_pixels(x0, y0, range(20, 35), range(0, 5))
        s_count, s_total = count_road_pixels(x0, y0, range(20, 35), range(35, 40))
        e_count, e_total = count_road_pixels(x0, y0, range(35, 40), range(12, 28))
        w_count, w_total = count_road_pixels(x0, y0, range(0, 5), range(12, 28))

        dirs = ""
        mask = 0
        if n_total > 0 and n_count / n_total > threshold_pct:
            dirs += "N"; mask |= 1
        if e_total > 0 and e_count / e_total > threshold_pct:
            dirs += "E"; mask |= 2
        if s_total > 0 and s_count / s_total > threshold_pct:
            dirs += "S"; mask |= 4
        if w_total > 0 and w_count / w_total > threshold_pct:
            dirs += "W"; mask |= 8

        tile_connections[idx] = (mask, dirs if dirs else "none")

        print(f"{idx:>3}  {n_count:>3}/{n_total:<4} {e_count:>3}/{e_total:<4} "
              f"{s_count:>3}/{s_total:<4} {w_count:>3}/{w_total:<4}  {dirs if dirs else 'none'}")

    # Expected: RD value → mask (from kAutoTile, confirmed correct)
    rd_to_mask = {
        1: 0xA,   # E+W
        2: 0x5,   # N+S
        3: 0xF,   # NESW
        4: 0xE,   # ESW
        5: 0xD,   # NSW
        6: 0xB,   # NEW
        7: 0x7,   # NES
        8: 0xC,   # SW
        9: 0x9,   # NW
        10: 0x3,  # NE
        11: 0x6,  # ES
        12: 0x8,  # W
        13: 0x4,  # S
        14: 0x2,  # E
        15: 0x1,  # N
        16: 0xA,  # EW variant
        17: 0x5,  # NS variant
    }

    dir_names = {0: "none", 1: "N", 2: "E", 3: "NE", 4: "S", 5: "NS", 6: "ES",
                 7: "NES", 8: "W", 9: "NW", 0xA: "EW", 0xB: "NEW", 0xC: "SW",
                 0xD: "NSW", 0xE: "ESW", 0xF: "NESW"}

    # Now try to find the correct tile mapping
    # For each RD value, find which tile position best matches its expected mask
    print("\n\nMATCHING: Find best tile for each RD value")
    print("=" * 60)

    # Build reverse map: for each expected mask, which tiles match?
    mask_to_tiles = {}
    for idx, (mask, dirs) in tile_connections.items():
        if mask not in mask_to_tiles:
            mask_to_tiles[mask] = []
        mask_to_tiles[mask].append(idx)

    print(f"\n{'RD':>3} {'Expected':>8} {'Current tile':>12} {'Best tile':>10} {'Match':>6}")
    print("-" * 50)

    new_mapping = {}
    for rd in range(1, 18):
        expected_mask = rd_to_mask[rd]
        expected_dirs = dir_names.get(expected_mask, "?")
        current_tile = rd - 1
        current_mask = tile_connections.get(current_tile, (0, "?"))[0]

        # Find tiles with matching mask
        matching_tiles = mask_to_tiles.get(expected_mask, [])
        best_tile = matching_tiles[0] if matching_tiles else -1

        match = "OK" if current_mask == expected_mask else "WRONG"

        new_mapping[rd] = best_tile if best_tile >= 0 else current_tile

        print(f"{rd:>3} {expected_dirs:>8}  tile {current_tile:>2} ({dir_names.get(current_mask, '?'):>5})  "
              f"tile {best_tile:>2}     {match}")

    # Print proposed lookup table
    print("\n\nPROPOSED LOOKUP TABLE (RD value → tile index):")
    print("static const short kRoadTileMap[18] = {")
    print(f"    /* RD 0 (unused) */ 0,")
    for rd in range(1, 18):
        tile = new_mapping.get(rd, rd - 1)
        expected_dirs = dir_names.get(rd_to_mask[rd], "?")
        print(f"    /* RD {rd:2d} ({expected_dirs:>5}) */ {tile},")
    print("};")

    # Also check: are any tiles duplicated or missing in the mapping?
    used_tiles = set(new_mapping.values())
    all_tiles = set(range(17))
    unused = all_tiles - used_tiles
    print(f"\nUsed tiles: {sorted(used_tiles)}")
    print(f"Unused tiles: {sorted(unused)}")
    if len(used_tiles) < 17:
        print("WARNING: Some RD values couldn't be matched to a tile!")


if __name__ == '__main__':
    main()
