#!/usr/bin/env python3
"""
Analyze road tile edges from PICT 30021 to determine which directions
each tile connects (N, E, S, W) by checking for non-background pixels
near each edge.
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def load_pict_pixels(pict_data):
    """Load PICT resource into pixel data using Python.
    For 8-bit indexed, returns palette indices.
    Returns (pixels_2d, width, height, palette) or None."""
    # PICT format: 2-byte size, 8-byte frame rect, then opcodes
    if len(pict_data) < 10:
        return None

    size = struct.unpack_from('>H', pict_data, 0)[0]
    top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
    width = right - left
    height = bottom - top

    print(f"PICT frame: {width}x{height} (top={top}, left={left})")

    # Parse opcodes to find PackBitsRect/DirectBitsRect
    offset = 10
    version = 1

    while offset < len(pict_data) - 1:
        if version == 1:
            opcode = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
        else:
            # Version 2: align to word boundary
            if offset % 2 != 0:
                offset += 1
            if offset + 2 > len(pict_data):
                break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

        if opcode == 0x0011:  # Version
            ver = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
            if ver == 2:
                version = 2
                offset += 1  # skip 0xFF
            continue

        if opcode == 0x0C00:  # HeaderOp (version 2 extended)
            offset += 24
            continue

        if opcode == 0x001E:  # DefHilite
            continue

        if opcode == 0x0001:  # Clip region
            rgnSize = struct.unpack_from('>H', pict_data, offset)[0]
            offset += rgnSize
            continue

        if opcode == 0x0098 or opcode == 0x0099:
            # PackBitsRect (0x0098) or PackBitsRgn (0x0099)
            # PixMap starts here
            pm_offset = offset

            # Skip baseAddr (not in PICT PixMap for packed)
            # Actually for opcode 0x0098, format is:
            # PixMap (without baseAddr for packed): rowBytes(2), bounds(8), ...
            rowBytes_raw = struct.unpack_from('>H', pict_data, offset)[0]
            is_pixmap = (rowBytes_raw & 0x8000) != 0
            rowBytes = rowBytes_raw & 0x3FFF

            pm_top, pm_left, pm_bottom, pm_right = struct.unpack_from('>hhhh', pict_data, offset + 2)
            pm_width = pm_right - pm_left
            pm_height = pm_bottom - pm_top

            if is_pixmap:
                # Full PixMap header after rowBytes+bounds
                # pmVersion(2), packType(2), packSize(4), hRes(4), vRes(4),
                # pixelType(2), pixelSize(2), cmpCount(2), cmpSize(2),
                # planeBytes(4), pmTable(4), pmReserved(4)
                # PixMap fields after rowBytes(2)+bounds(8):
                # pmVersion(2), packType(2), packSize(4), hRes(4), vRes(4),
                # pixelType(2), pixelSize(2), cmpCount(2), cmpSize(2),
                # planeBytes(4), pmTable(4), pmReserved(4)
                # pixelSize is at +26 from start of PixMap, which is offset+28 from rowBytes
                pixelSize = struct.unpack_from('>H', pict_data, offset + 28)[0]
                offset += 46  # rowBytes(2) + bounds(8) + rest of PixMap(36)

                # Color table
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

                print(f"PixMap: {pm_width}x{pm_height}, {pixelSize}-bit, {num_colors} colors, rowBytes={rowBytes}")
            else:
                pixelSize = 1
                palette = [(255,255,255), (0,0,0)]
                offset += 10  # rowBytes(2) + bounds(8)

            # Source rect, dest rect
            src_rect = struct.unpack_from('>hhhh', pict_data, offset)
            offset += 8
            dst_rect = struct.unpack_from('>hhhh', pict_data, offset)
            offset += 8

            # Transfer mode
            mode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

            if opcode == 0x0099:
                # Skip mask region
                rgn_size = struct.unpack_from('>H', pict_data, offset)[0]
                offset += rgn_size

            # Now read pixel data (PackBits compressed)
            pixels = [[0] * pm_width for _ in range(pm_height)]

            for row in range(pm_height):
                if rowBytes > 250:
                    byteCount = struct.unpack_from('>H', pict_data, offset)[0]
                    offset += 2
                else:
                    byteCount = struct.unpack_from('>B', pict_data, offset)[0]
                    offset += 1

                row_end = offset + byteCount
                col = 0
                unpacked = bytearray()

                while offset < row_end:
                    flag = struct.unpack_from('>b', pict_data, offset)[0]
                    offset += 1

                    if flag >= 0:
                        # Copy next (flag+1) bytes literally
                        count = flag + 1
                        unpacked.extend(pict_data[offset:offset+count])
                        offset += count
                    elif flag != -128:
                        # Repeat next byte (-flag+1) times
                        count = -flag + 1
                        val = pict_data[offset]
                        offset += 1
                        unpacked.extend([val] * count)

                # Convert unpacked bytes to pixel values
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

        # Handle known no-data/fixed-size opcodes
        if opcode == 0x0000:  # NOP
            continue
        elif opcode in (0x0003, 0x0004):  # TxFont, TxFace
            offset += 2
            continue
        elif opcode == 0x0005:  # TxMode
            offset += 2
            continue
        elif opcode in (0x0007, 0x0008):  # PnSize, PnMode
            offset += 2 if opcode == 0x0008 else 4
            continue
        elif opcode == 0x0009:  # PnPat
            offset += 8
            continue
        elif opcode == 0x000D:  # TxSize
            offset += 2
            continue
        elif opcode in (0x000A, 0x000B):  # FillPat, OvSize
            offset += 8 if opcode == 0x000A else 4
            continue
        elif opcode in (0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 0x001A):
            # PnLocHFrac, ChExtra, reserved, RGBFgCol, RGBBkCol, HiliteMode
            if opcode == 0x0015: offset += 2
            elif opcode == 0x0016: offset += 2
            elif opcode == 0x001A: pass  # HiliteMode - no data
            elif opcode in (0x0018, 0x0019): offset += 6  # RGBFgCol/RGBBkCol
            continue
        elif opcode in (0x0020, 0x0021):  # Line, LineFrom
            offset += 8 if opcode == 0x0020 else 4
            continue
        elif opcode in (0x0028, 0x0029, 0x002A, 0x002B, 0x002C, 0x002D, 0x002E):
            # ShortLine
            offset += 6
            continue
        elif opcode in (0x0030, 0x0031, 0x0032, 0x0033, 0x0034):
            # frameRect, paintRect, eraseRect, invertRect, fillRect
            offset += 8
            continue
        elif opcode in (0x0038, 0x0039, 0x003A, 0x003B):
            # frameSameRect, paintSameRect, eraseSameRect, invertSameRect
            continue

        # Skip unknown opcodes
        if version == 2 and opcode >= 0x0100:
            data_len = (opcode >> 8) * 2
            offset += data_len
        elif opcode == 0x00A1:  # LongComment
            kind = struct.unpack_from('>H', pict_data, offset)[0]
            data_len = struct.unpack_from('>H', pict_data, offset + 2)[0]
            offset += 4 + data_len
        elif opcode == 0x00A0:  # ShortComment
            offset += 2
        else:
            print(f"  Unknown opcode 0x{opcode:04X} at offset {offset}")
            break

    return None


def analyze_tile_edges(pixels, palette, tile_x, tile_y, tile_w=40, tile_h=40, bg_idx=None):
    """Analyze a single tile to determine which edges have road content.
    Returns (has_north, has_east, has_south, has_west) booleans."""

    x0 = tile_x * tile_w
    y0 = tile_y * tile_h

    # Find background index if not specified
    if bg_idx is None:
        # Use corner pixel as background reference
        bg_idx = pixels[y0][x0]

    edge_depth = 5  # Check 5 pixels in from each edge
    center_band = 10  # Middle portion of each edge to check

    def has_road_pixels(x_range, y_range, threshold=3):
        """Check if there are non-bg pixels in the given region."""
        count = 0
        for y in y_range:
            for x in x_range:
                if 0 <= x < len(pixels[0]) and 0 <= y < len(pixels):
                    if pixels[y][x] != bg_idx:
                        count += 1
        return count >= threshold

    # Check center portion of each edge
    cx = x0 + tile_w // 2
    cy = y0 + tile_h // 2
    half_band = center_band // 2

    # North edge: top rows, center columns
    has_n = has_road_pixels(
        range(cx - half_band, cx + half_band),
        range(y0, y0 + edge_depth))

    # South edge: bottom rows, center columns
    has_s = has_road_pixels(
        range(cx - half_band, cx + half_band),
        range(y0 + tile_h - edge_depth, y0 + tile_h))

    # West edge: left columns, center rows
    has_w = has_road_pixels(
        range(x0, x0 + edge_depth),
        range(cy - half_band, cy + half_band))

    # East edge: right columns, center rows
    has_e = has_road_pixels(
        range(x0 + tile_w - edge_depth, x0 + tile_w),
        range(cy - half_band, cy + half_band))

    return has_n, has_e, has_s, has_w


def main():
    # Load terrain resource file
    with open(TERRAIN_FILE, 'rb') as f:
        data = f.read()
    resources = parse_resource_fork(data)

    # Find PICT 30021 (road sprite sheet)
    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 30021:
            pict_data = r.data
            break

    if pict_data is None:
        print("PICT 30021 not found!")
        return

    print(f"PICT 30021: {len(pict_data)} bytes")

    result = load_pict_pixels(pict_data)
    if result is None:
        print("Failed to parse PICT pixel data")
        return

    pixels, width, height, palette = result

    # Find background color index (top-left corner pixel)
    bg_idx = pixels[0][0]
    bg_color = palette[bg_idx] if bg_idx < len(palette) else (0,0,0)
    print(f"Background: palette[{bg_idx}] = RGB({bg_color[0]}, {bg_color[1]}, {bg_color[2]})")

    # Expected connections per RD value based on kAutoTile mapping:
    # kAutoTile maps mask→RD, so we invert to get RD→mask
    kAutoTile = [1, 15, 14, 10, 13, 2, 11, 7, 12, 9, 1, 6, 8, 5, 4, 3]
    # index is mask (0-15), value is RD value

    rd_to_mask = {}
    for mask, rd in enumerate(kAutoTile):
        if rd not in rd_to_mask:
            rd_to_mask[rd] = mask
        # For duplicates (RD 1 appears for mask 0 and 10), keep the more connected one
        elif bin(mask).count('1') > bin(rd_to_mask[rd]).count('1'):
            rd_to_mask[rd] = mask

    # Tile grid: 16 columns x 2 rows
    cols = width // 40
    rows = height // 40
    print(f"\nTile grid: {cols}x{rows} ({cols * rows} tiles)")

    print(f"\n{'RD':>3} {'Tile':>4} {'Edges':>10} {'Mask':>4} {'Expected':>12} {'Match':>5}")
    print("-" * 50)

    for rd_val in range(1, 18):
        tile_idx = rd_val - 1
        tile_col = tile_idx % cols
        tile_row = tile_idx // cols

        has_n, has_e, has_s, has_w = analyze_tile_edges(
            pixels, palette, tile_col, tile_row, 40, 40, bg_idx)

        # Build actual mask from detected edges
        actual_mask = 0
        if has_n: actual_mask |= 1
        if has_e: actual_mask |= 2
        if has_s: actual_mask |= 4
        if has_w: actual_mask |= 8

        dirs = ""
        if has_n: dirs += "N"
        if has_e: dirs += "E"
        if has_s: dirs += "S"
        if has_w: dirs += "W"
        if not dirs: dirs = "none"

        # Expected mask from kAutoTile table
        expected_mask = rd_to_mask.get(rd_val, -1)
        exp_dirs = ""
        if expected_mask >= 0:
            if expected_mask & 1: exp_dirs += "N"
            if expected_mask & 2: exp_dirs += "E"
            if expected_mask & 4: exp_dirs += "S"
            if expected_mask & 8: exp_dirs += "W"
            if not exp_dirs: exp_dirs = "none"
        else:
            exp_dirs = "???"

        match = "OK" if actual_mask == expected_mask else "WRONG"

        print(f"{rd_val:>3} {tile_idx:>4}   {dirs:>8} 0x{actual_mask:X}  {exp_dirs:>10}    {match}")

    # Also show a pixel dump for a few tiles to verify parsing
    print("\n--- Pixel sample: tile 0 (RD 1, should be E-W horizontal) ---")
    for y in [0, 10, 19, 20, 29, 39]:
        row = ""
        for x in range(0, 40, 2):
            idx = pixels[y][x]
            if idx == bg_idx:
                row += "."
            else:
                row += "#"
        print(f"  row {y:2d}: {row}")

    print("\n--- Pixel sample: tile 2 (RD 3) ---")
    for y in range(0, 40, 2):
        row = ""
        for x in range(0, 40, 2):
            idx = pixels[y][80 + x]  # tile 2 starts at x=80
            if idx == bg_idx:
                row += "."
            else:
                row += "#"
        print(f"  row {y:2d}: {row}")


if __name__ == '__main__':
    main()
