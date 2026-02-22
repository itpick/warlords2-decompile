#!/usr/bin/env python3
"""
Dump full-resolution pixel maps of road tiles from PICT 30021
to understand their exact shapes and connection patterns.
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"


def load_pict_pixels(pict_data):
    """Parse PICT and return pixel array. Returns (pixels_2d, width, height, palette)."""
    if len(pict_data) < 10:
        return None

    top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
    width = right - left
    height = bottom - top

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

        if opcode == 0x0C00:
            offset += 24
            continue
        if opcode == 0x001E:
            continue
        if opcode == 0x0001:
            rgnSize = struct.unpack_from('>H', pict_data, offset)[0]
            offset += rgnSize
            continue

        # Handle various no-data/fixed-size opcodes
        if opcode == 0x0000:
            continue
        if opcode in (0x0003, 0x0004, 0x0005, 0x000D, 0x0008, 0x0015, 0x0016):
            offset += 2
            continue
        if opcode == 0x0007:
            offset += 4
            continue
        if opcode in (0x0009, 0x000A):
            offset += 8
            continue
        if opcode == 0x000B:
            offset += 4
            continue
        if opcode == 0x001A:
            continue
        if opcode in (0x0018, 0x0019):
            offset += 6
            continue
        if opcode in (0x0020,):
            offset += 8
            continue
        if opcode in (0x0021,):
            offset += 4
            continue
        if opcode in (0x0028, 0x0029, 0x002A, 0x002B, 0x002C, 0x002D, 0x002E):
            offset += 6
            continue
        if opcode in (0x0030, 0x0031, 0x0032, 0x0033, 0x0034):
            offset += 8
            continue
        if opcode in (0x0038, 0x0039, 0x003A, 0x003B):
            continue

        if opcode == 0x0098 or opcode == 0x0099:
            rowBytes_raw = struct.unpack_from('>H', pict_data, offset)[0]
            is_pixmap = (rowBytes_raw & 0x8000) != 0
            rowBytes = rowBytes_raw & 0x3FFF

            pm_top, pm_left, pm_bottom, pm_right = struct.unpack_from('>hhhh', pict_data, offset + 2)
            pm_width = pm_right - pm_left
            pm_height = pm_bottom - pm_top

            if is_pixmap:
                pixelSize = struct.unpack_from('>H', pict_data, offset + 28)[0]
                offset += 46

                ct_seed = struct.unpack_from('>I', pict_data, offset)[0]
                ct_flags = struct.unpack_from('>H', pict_data, offset + 4)[0]
                ct_size = struct.unpack_from('>H', pict_data, offset + 6)[0]
                num_colors = ct_size + 1
                offset += 8

                palette = []
                for i in range(num_colors):
                    val = struct.unpack_from('>H', pict_data, offset)[0]
                    r = struct.unpack_from('>H', pict_data, offset + 2)[0] >> 8
                    g = struct.unpack_from('>H', pict_data, offset + 4)[0] >> 8
                    b = struct.unpack_from('>H', pict_data, offset + 6)[0] >> 8
                    palette.append((r, g, b))
                    offset += 8
            else:
                pixelSize = 1
                palette = [(255, 255, 255), (0, 0, 0)]
                offset += 10

            src_rect = struct.unpack_from('>hhhh', pict_data, offset)
            offset += 8
            dst_rect = struct.unpack_from('>hhhh', pict_data, offset)
            offset += 8
            mode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

            if opcode == 0x0099:
                rgn_size = struct.unpack_from('>H', pict_data, offset)[0]
                offset += rgn_size

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
                elif pixelSize == 4:
                    for x in range(pm_width):
                        byte_idx = x // 2
                        if byte_idx < len(unpacked):
                            if x % 2 == 0:
                                pixels[row][x] = (unpacked[byte_idx] >> 4) & 0x0F
                            else:
                                pixels[row][x] = unpacked[byte_idx] & 0x0F

            return pixels, pm_width, pm_height, palette

        if opcode == 0x00FF or opcode == 0xFFFF:
            break

        if version == 2 and opcode >= 0x0100:
            data_len = (opcode >> 8) * 2
            offset += data_len
        elif opcode == 0x00A1:
            offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
        elif opcode == 0x00A0:
            offset += 2
        else:
            break

    return None


def dump_tile(pixels, palette, tile_idx, tile_w=40, tile_h=40, bg_idx=146):
    """Dump a single tile's pixels in ASCII art."""
    cols_per_tile = len(pixels[0]) // tile_w
    tile_col = tile_idx % cols_per_tile
    tile_row = tile_idx // cols_per_tile

    x0 = tile_col * tile_w
    y0 = tile_row * tile_h

    # Determine which edges have road pixels
    edge_pixels = {'N': 0, 'E': 0, 'S': 0, 'W': 0}

    for y in range(tile_h):
        for x in range(tile_w):
            px = pixels[y0 + y][x0 + x]
            if px != bg_idx:
                if y < 5: edge_pixels['N'] += 1
                if y >= tile_h - 5: edge_pixels['S'] += 1
                if x < 5: edge_pixels['W'] += 1
                if x >= tile_w - 5: edge_pixels['E'] += 1

    edges = []
    for d in 'NESW':
        if edge_pixels[d] > 10:
            edges.append(d)

    print(f"  Edge pixel counts: N={edge_pixels['N']}, E={edge_pixels['E']}, "
          f"S={edge_pixels['S']}, W={edge_pixels['W']}  →  {''.join(edges) if edges else 'none'}")

    # Print condensed (2x2 blocks → single char)
    for y in range(0, tile_h, 2):
        row = ""
        for x in range(0, tile_w, 2):
            count = 0
            for dy in range(2):
                for dx in range(2):
                    if y0 + y + dy < len(pixels) and x0 + x + dx < len(pixels[0]):
                        if pixels[y0 + y + dy][x0 + x + dx] != bg_idx:
                            count += 1
            if count == 0:
                row += "."
            elif count <= 2:
                row += "+"
            else:
                row += "#"
        print(f"  {row}")


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

    # Map from RD value to meaning (confirmed from scenario analysis)
    rd_meanings = {
        1: "E+W (horizontal)",
        2: "N+S (vertical)",
        3: "N+E+S+W (crossroad)",
        4: "E+S+W (T-south)",
        5: "N+S+W (T-west)",
        6: "N+E+W (T-north)",
        7: "N+E+S (T-east)",
        8: "S+W (corner SW)",
        9: "N+W (corner NW)",
        10: "N+E (corner NE)",
        11: "E+S (corner SE)",
        12: "W (dead-end W)",
        13: "S (dead-end S)",
        14: "E (dead-end E)",
        15: "N (dead-end N)",
        16: "E+W variant",
        17: "N+S variant",
    }

    for rd_val in range(1, 18):
        tile_idx = rd_val - 1
        meaning = rd_meanings.get(rd_val, "?")
        print(f"\n--- RD {rd_val} → Tile {tile_idx}: {meaning} ---")
        dump_tile(pixels, palette, tile_idx, bg_idx=bg_idx)


if __name__ == '__main__':
    main()
