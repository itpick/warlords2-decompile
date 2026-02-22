#!/usr/bin/env python3
"""
Precisely determine road tile connections by examining the middle section
of each edge. For hand-drawn roads, the road center may not be exactly
where expected, so we use adaptive detection.

For each tile, check:
- N edge: full-width strip of rows 0-2
- S edge: full-width strip of rows 37-39
- E edge: full-height strip of cols 37-39
- W edge: full-height strip of cols 0-2

Then also check mid-sections at the expected road position:
- N/S edges: check cols where vertical roads are (around cols 18-28 center, and 24-34 right-shifted)
- E/W edges: check rows where horizontal roads are (around rows 15-24)
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def load_pict_pixels(pict_data):
    if len(pict_data) < 10:
        return None
    offset = 10
    version = 1
    while offset < len(pict_data) - 1:
        if version == 1:
            opcode = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
        else:
            if offset % 2 != 0: offset += 1
            if offset + 2 > len(pict_data): break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2
        if opcode == 0x0011:
            ver = struct.unpack_from('>B', pict_data, offset)[0]; offset += 1
            if ver == 2: version = 2; offset += 1
            continue
        if opcode == 0x0C00: offset += 24; continue
        if opcode == 0x001E: continue
        if opcode == 0x0001: offset += struct.unpack_from('>H', pict_data, offset)[0]; continue
        if opcode == 0x0000: continue
        if opcode in (3,4,5,0xD,8,0x15,0x16): offset += 2; continue
        if opcode == 7: offset += 4; continue
        if opcode in (9,0xA): offset += 8; continue
        if opcode == 0xB: offset += 4; continue
        if opcode == 0x1A: continue
        if opcode in (0x18,0x19): offset += 6; continue
        if opcode == 0x20: offset += 8; continue
        if opcode == 0x21: offset += 4; continue
        if opcode in range(0x28,0x2F): offset += 6; continue
        if opcode in range(0x30,0x35): offset += 8; continue
        if opcode in range(0x38,0x3C): continue
        if opcode in (0x98, 0x99):
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
                palette = [(255,255,255),(0,0,0)]
                offset += 10
            offset += 8 + 8 + 2
            if opcode == 0x99: offset += struct.unpack_from('>H', pict_data, offset)[0]
            pixels = [[0]*pm_width for _ in range(pm_height)]
            for row in range(pm_height):
                if rowBytes > 250:
                    bc = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2
                else:
                    bc = pict_data[offset]; offset += 1
                re = offset + bc
                un = bytearray()
                while offset < re:
                    flag = struct.unpack_from('>b', pict_data, offset)[0]; offset += 1
                    if flag >= 0:
                        count = flag + 1; un.extend(pict_data[offset:offset+count]); offset += count
                    elif flag != -128:
                        count = -flag + 1; val = pict_data[offset]; offset += 1; un.extend([val]*count)
                if pixelSize == 8:
                    for x in range(min(pm_width, len(un))): pixels[row][x] = un[x]
            return pixels, pm_width, pm_height, palette
        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None


with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)
pict_data = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data = r.data
        break

result = load_pict_pixels(pict_data)
pixels, width, height, palette = result
bg_idx = pixels[0][0]
print(f"Road sheet: {width}x{height}, bg_idx={bg_idx}")

TILE_W, TILE_H = 40, 40
cols = width // TILE_W

# For each tile, count non-bg pixels in edge strips
# Use narrow strips (3 pixels deep) at each edge
print(f"\n{'Tile':>4} {'N-strip':>8} {'S-strip':>8} {'E-strip':>8} {'W-strip':>8} | {'N':>1}{'E':>1}{'S':>1}{'W':>1} | Detected")
print("-" * 70)

tile_dirs = {}

for idx in range(17):
    tc = idx % cols
    tr = idx // cols
    x0 = tc * TILE_W
    y0 = tr * TILE_H

    # Count non-bg pixels in each edge strip (3 pixels deep, full width/height)
    n_count = 0
    for y in range(3):
        for x in range(TILE_W):
            if pixels[y0+y][x0+x] != bg_idx: n_count += 1

    s_count = 0
    for y in range(TILE_H-3, TILE_H):
        for x in range(TILE_W):
            if pixels[y0+y][x0+x] != bg_idx: s_count += 1

    e_count = 0
    for y in range(TILE_H):
        for x in range(TILE_W-3, TILE_W):
            if pixels[y0+y][x0+x] != bg_idx: e_count += 1

    w_count = 0
    for y in range(TILE_H):
        for x in range(3):
            if pixels[y0+y][x0+x] != bg_idx: w_count += 1

    # Use very low threshold: any 5+ non-bg pixels in a 3-pixel edge strip
    threshold = 5
    dirs = ""
    has_n = n_count >= threshold
    has_e = e_count >= threshold
    has_s = s_count >= threshold
    has_w = w_count >= threshold
    if has_n: dirs += "N"
    if has_e: dirs += "E"
    if has_s: dirs += "S"
    if has_w: dirs += "W"

    tile_dirs[idx] = dirs if dirs else "none"

    print(f"{idx:>4}  {n_count:>4}/{3*TILE_W:<4} {s_count:>4}/{3*TILE_W:<4} "
          f"{e_count:>4}/{3*TILE_H:<4} {w_count:>4}/{3*TILE_H:<4} | "
          f"{'Y' if has_n else '.'}{'Y' if has_e else '.'}{'Y' if has_s else '.'}{'Y' if has_w else '.'} | "
          f"{dirs if dirs else 'none'}")

# Now: what RD value should each tile index represent?
# The kAutoTile table gives us: neighbor_mask → RD_value
# We need: RD_value → tile_index

# Expected RD directions (from kAutoTile, confirmed by scenario data):
rd_dirs = {
    1: "EW", 2: "NS", 3: "NESW", 4: "ESW", 5: "NSW",
    6: "NEW", 7: "NES", 8: "SW", 9: "NW", 10: "NE",
    11: "ES", 12: "W", 13: "S", 14: "E", 15: "N",
    16: "EW", 17: "NS"
}

print("\n\n" + "=" * 70)
print("MATCHING: Expected RD directions → Best matching tile")
print("=" * 70)
print(f"{'RD':>3} {'Expected':>8} {'rd-1 tile':>10} {'rd-1 dirs':>10} {'Best tile':>10} {'Best dirs':>10} {'Match?'}")
print("-" * 70)

def dirs_match(expected, detected):
    """Check if detected directions match expected."""
    return set(expected) == set(detected)

# For each RD value, find the best matching tile
rd_to_tile = {}
for rd in range(1, 18):
    expected = rd_dirs[rd]

    # What does rd-1 mapping give?
    rd_minus1_tile = rd - 1
    rd_minus1_dirs = tile_dirs.get(rd_minus1_tile, "?")

    # Find best match among all tiles
    best_tile = -1
    best_score = -1
    for tidx in range(17):
        detected = tile_dirs[tidx]
        if detected == "none":
            continue
        # Score: count matching direction letters
        expected_set = set(expected)
        detected_set = set(detected)
        matches = len(expected_set & detected_set)
        mismatches = len(expected_set ^ detected_set)
        score = matches * 2 - mismatches
        if score > best_score:
            best_score = score
            best_tile = tidx

    rd_to_tile[rd] = best_tile
    match = "OK" if rd_minus1_dirs == expected else "WRONG"
    best_dirs = tile_dirs.get(best_tile, "?")
    best_match = "OK" if best_dirs == expected else "~" if set(best_dirs) & set(expected) else "WRONG"

    print(f"{rd:>3} {expected:>8}   tile {rd_minus1_tile:>2} ({rd_minus1_dirs:>6})  tile {best_tile:>2} ({best_dirs:>6})  {match}")

# Print the detailed per-tile pixel view for problematic tiles
print("\n\n" + "=" * 70)
print("DETAILED EDGE ANALYSIS for tiles 2-15")
print("=" * 70)

for idx in range(17):
    tc = idx % cols
    tr = idx // cols
    x0 = tc * TILE_W
    y0 = tr * TILE_H

    # Check center of each edge more precisely
    # N: row 0, cols 10-29 (center 20 pixels)
    n_center = sum(1 for x in range(10, 30) if pixels[y0][x0+x] != bg_idx)
    n_row1 = sum(1 for x in range(10, 30) if pixels[y0+1][x0+x] != bg_idx)
    # S: row 39, cols 10-29
    s_center = sum(1 for x in range(10, 30) if pixels[y0+39][x0+x] != bg_idx)
    s_row38 = sum(1 for x in range(10, 30) if pixels[y0+38][x0+x] != bg_idx)
    # E: col 39, rows 10-29
    e_center = sum(1 for y in range(10, 30) if pixels[y0+y][x0+39] != bg_idx)
    e_col38 = sum(1 for y in range(10, 30) if pixels[y0+y][x0+38] != bg_idx)
    # W: col 0, rows 10-29
    w_center = sum(1 for y in range(10, 30) if pixels[y0+y][x0] != bg_idx)
    w_col1 = sum(1 for y in range(10, 30) if pixels[y0+y][x0+1] != bg_idx)

    print(f"\nTile {idx}: edge center analysis (out of 20 pixels each):")
    print(f"  N: row0={n_center}, row1={n_row1}")
    print(f"  S: row39={s_center}, row38={s_row38}")
    print(f"  E: col39={e_center}, col38={e_col38}")
    print(f"  W: col0={w_center}, col1={w_col1}")

    # Determine connections based on center analysis
    # Threshold: 3+ non-bg pixels in center 20 at the edge row/col
    t = 3
    n = n_center >= t or n_row1 >= t
    s = s_center >= t or s_row38 >= t
    e = e_center >= t or e_col38 >= t
    w = w_center >= t or w_col1 >= t

    dirs = ""
    if n: dirs += "N"
    if e: dirs += "E"
    if s: dirs += "S"
    if w: dirs += "W"
    print(f"  → {dirs if dirs else 'none'}")
