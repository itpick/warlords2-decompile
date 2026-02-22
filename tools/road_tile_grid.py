#!/usr/bin/env python3
"""
Analyze PICT 30021 (road sprite sheet) from the Grasslands resource fork.
Check each 40x40 tile cell in a 16x2 grid to determine which cells contain
actual road content vs. background-only (index 146) pixels.

Also provides a mini-summary of each non-empty tile's visual pattern.
"""

import struct
import sys
import os
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
BACKGROUND_INDEX = 146
TILE_W = 40
TILE_H = 40
GRID_COLS = 16
GRID_ROWS = 2


def unpack_packbits_row(data, offset, row_bytes):
    """Unpack a PackBits compressed row. Returns (unpacked_bytes, new_offset)."""
    result = bytearray()
    while len(result) < row_bytes and offset < len(data):
        flag = data[offset]
        offset += 1
        if flag < 128:
            count = flag + 1
            result.extend(data[offset:offset + count])
            offset += count
        elif flag > 128:
            count = 257 - flag
            if offset < len(data):
                result.extend([data[offset]] * count)
                offset += 1
        # flag == 128: NOP
    return bytes(result[:row_bytes]), offset


def extract_pixel_data(pict_data):
    """Extract decompressed 8-bit pixel rows from a PICT resource.
    Returns (rows, width, height, clut) where rows is a list of bytes objects."""

    data = pict_data
    # Bounding rect
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 2)
    img_w = right - left
    img_h = bottom - top

    # Find the PackBitsRect (0x0098) opcode
    packbits_offset = None
    for search_off in range(0x30, min(len(data) - 2, 0x300)):
        test_op = struct.unpack_from('>H', data, search_off)[0]
        if test_op == 0x0098:
            packbits_offset = search_off
            break

    if packbits_offset is None:
        raise ValueError("PackBitsRect opcode (0x0098) not found in PICT data")

    offset = packbits_offset + 2  # skip opcode

    # Parse PixMap header
    rowbytes_raw = struct.unpack_from('>H', data, offset)[0]
    rowbytes = rowbytes_raw & 0x3FFF
    is_pixmap = bool(rowbytes_raw & 0x8000)

    bounds_top, bounds_left, bounds_bottom, bounds_right = struct.unpack_from('>hhhh', data, offset + 2)
    width = bounds_right - bounds_left
    height = bounds_bottom - bounds_top

    if not is_pixmap:
        raise ValueError("Expected PixMap, got BitMap")

    pixel_size = struct.unpack_from('>H', data, offset + 28)[0]
    if pixel_size != 8:
        raise ValueError(f"Expected 8-bit pixels, got {pixel_size}-bit")

    offset += 46  # skip full pixmap record

    # Parse color table
    ct_seed = struct.unpack_from('>I', data, offset)[0]
    ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
    ct_size = struct.unpack_from('>H', data, offset + 6)[0]
    num_entries = ct_size + 1

    clut = []
    off = offset + 8
    for i in range(num_entries):
        val = struct.unpack_from('>H', data, off)[0]
        r = struct.unpack_from('>H', data, off + 2)[0]
        g = struct.unpack_from('>H', data, off + 4)[0]
        b = struct.unpack_from('>H', data, off + 6)[0]
        clut.append((r >> 8, g >> 8, b >> 8))
        off += 8

    offset = off

    # Skip src rect (8), dst rect (8), transfer mode (2)
    offset += 8 + 8 + 2

    # Decompress all rows
    rows = []
    for row in range(height):
        if rowbytes > 250:
            if offset + 2 > len(data):
                break
            packed_bytes = struct.unpack_from('>H', data, offset)[0]
            offset += 2
        else:
            if offset >= len(data):
                break
            packed_bytes = data[offset]
            offset += 1

        if offset + packed_bytes > len(data):
            break

        unpacked, _ = unpack_packbits_row(data[offset:offset + packed_bytes + 128], 0, rowbytes)
        rows.append(unpacked)
        offset += packed_bytes

    return rows, width, height, clut


def analyze_tile(rows, tile_col, tile_row, img_width):
    """Analyze a single tile cell. Returns dict with analysis results."""
    x0 = tile_col * TILE_W
    y0 = tile_row * TILE_H

    non_bg_count = 0
    total_pixels = 0
    non_bg_positions = []  # list of (local_x, local_y)
    pixel_indices = Counter()

    for dy in range(TILE_H):
        y = y0 + dy
        if y >= len(rows):
            continue
        row = rows[y]
        for dx in range(TILE_W):
            x = x0 + dx
            if x >= len(row):
                continue
            total_pixels += 1
            idx = row[x]
            pixel_indices[idx] += 1
            if idx != BACKGROUND_INDEX:
                non_bg_count += 1
                non_bg_positions.append((dx, dy))

    is_empty = (non_bg_count == 0)

    result = {
        'is_empty': is_empty,
        'non_bg_count': non_bg_count,
        'total_pixels': total_pixels,
        'non_bg_positions': non_bg_positions,
        'pixel_indices': pixel_indices,
    }

    if not is_empty and non_bg_positions:
        result['description'] = classify_tile_pattern(non_bg_positions)
    else:
        result['description'] = 'empty'

    return result


def classify_tile_pattern(positions):
    """Classify a tile's pattern based on where non-background pixels are.
    Returns a string description like 'horizontal line', 'vertical line', etc."""

    if not positions:
        return "empty"

    xs = [p[0] for p in positions]
    ys = [p[1] for p in positions]

    min_x, max_x = min(xs), max(xs)
    min_y, max_y = min(ys), max(ys)
    span_x = max_x - min_x + 1
    span_y = max_y - min_y + 1
    center_x = (min_x + max_x) / 2
    center_y = (min_y + max_y) / 2

    n = len(positions)

    # Calculate density in quadrants (for determining corners/intersections)
    mid_x = TILE_W / 2
    mid_y = TILE_H / 2
    q_tl = sum(1 for x, y in positions if x < mid_x and y < mid_y)
    q_tr = sum(1 for x, y in positions if x >= mid_x and y < mid_y)
    q_bl = sum(1 for x, y in positions if x < mid_x and y >= mid_y)
    q_br = sum(1 for x, y in positions if x >= mid_x and y >= mid_y)

    # Calculate density along axes through center
    horiz_band = sum(1 for x, y in positions if abs(y - mid_y) < 8)
    vert_band = sum(1 for x, y in positions if abs(x - mid_x) < 8)

    # Edges: pixels touching each edge
    top_edge = sum(1 for x, y in positions if y < 5)
    bot_edge = sum(1 for x, y in positions if y >= TILE_H - 5)
    left_edge = sum(1 for x, y in positions if x < 5)
    right_edge = sum(1 for x, y in positions if x >= TILE_W - 5)

    edges_touched = []
    if top_edge > 3:
        edges_touched.append('N')
    if bot_edge > 3:
        edges_touched.append('S')
    if left_edge > 3:
        edges_touched.append('W')
    if right_edge > 3:
        edges_touched.append('E')

    edge_code = ''.join(sorted(edges_touched))

    # Classify based on which edges are connected
    edge_count = len(edges_touched)

    if edge_count == 0:
        # No edges - could be a dot or isolated feature
        return f"isolated ({n}px, center ~{center_x:.0f},{center_y:.0f})"

    if edge_count == 1:
        return f"dead-end from {edge_code}"

    if edge_count == 2:
        if set(edges_touched) == {'N', 'S'}:
            return "vertical (N-S)"
        elif set(edges_touched) == {'E', 'W'}:
            return "horizontal (E-W)"
        elif set(edges_touched) == {'N', 'E'}:
            return "corner NE"
        elif set(edges_touched) == {'N', 'W'}:
            return "corner NW"
        elif set(edges_touched) == {'S', 'E'}:
            return "corner SE"
        elif set(edges_touched) == {'S', 'W'}:
            return "corner SW"
        else:
            return f"2-way {edge_code}"

    if edge_count == 3:
        missing = {'N', 'S', 'E', 'W'} - set(edges_touched)
        missing_dir = missing.pop() if missing else '?'
        return f"T-junction (no {missing_dir})"

    if edge_count == 4:
        return "4-way intersection (NSEW)"

    return f"complex ({edge_code}, {n}px)"


def main():
    print("=" * 78)
    print("PICT 30021 Road Sprite Sheet - Tile Grid Analysis")
    print("=" * 78)
    print()

    # Read resource fork
    with open(RSRC_PATH, 'rb') as f:
        rsrc_data = f.read()

    resources = parse_resource_fork(rsrc_data)

    # Find PICT 30021
    target = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 30021:
            target = r
            break

    if not target:
        print("ERROR: PICT 30021 not found!")
        return

    print(f"PICT 30021: {target.data_size} bytes, name='{target.name}'")

    # Extract pixel data
    rows, width, height, clut = extract_pixel_data(target.data)
    print(f"Image dimensions: {width} x {height}")
    print(f"Decompressed rows: {len(rows)}")
    print(f"Row length: {len(rows[0]) if rows else 0} bytes")
    print(f"Background index: {BACKGROUND_INDEX} -> RGB=({clut[BACKGROUND_INDEX][0]:02X},{clut[BACKGROUND_INDEX][1]:02X},{clut[BACKGROUND_INDEX][2]:02X})")
    print(f"Grid: {GRID_COLS} cols x {GRID_ROWS} rows of {TILE_W}x{TILE_H} tiles")
    print(f"Expected sheet size: {GRID_COLS * TILE_W} x {GRID_ROWS * TILE_H} = {GRID_COLS * TILE_W}x{GRID_ROWS * TILE_H}")
    print()

    # Analyze each tile cell
    grid = []
    total_road_tiles = 0

    for row in range(GRID_ROWS):
        row_results = []
        for col in range(GRID_COLS):
            result = analyze_tile(rows, col, row, width)
            row_results.append(result)
            if not result['is_empty']:
                total_road_tiles += 1
        grid.append(row_results)

    # Print grid summary
    print("=" * 78)
    print("TILE GRID - CONTENT MAP")
    print("=" * 78)
    print()

    for row_idx, row_results in enumerate(grid):
        labels = []
        for col_idx, result in enumerate(row_results):
            if result['is_empty']:
                labels.append('[empty]')
            else:
                labels.append('[ROAD] ')
        print(f"Row {row_idx}: {''.join(labels)}")

    print()
    print(f"Total road tiles with content: {total_road_tiles}")
    print(f"Total empty tiles: {GRID_COLS * GRID_ROWS - total_road_tiles}")
    print()

    # Print count per row
    for row_idx, row_results in enumerate(grid):
        road_count = sum(1 for r in row_results if not r['is_empty'])
        empty_count = sum(1 for r in row_results if r['is_empty'])
        print(f"Row {row_idx}: {road_count} road tiles, {empty_count} empty")

    print()

    # Detailed tile analysis
    print("=" * 78)
    print("DETAILED TILE ANALYSIS")
    print("=" * 78)
    print()

    for row_idx, row_results in enumerate(grid):
        for col_idx, result in enumerate(row_results):
            tile_index = row_idx * GRID_COLS + col_idx
            status = "ROAD" if not result['is_empty'] else "EMPTY"
            non_bg = result['non_bg_count']
            total = result['total_pixels']
            pct = 100.0 * non_bg / total if total > 0 else 0

            desc = result['description']

            if result['is_empty']:
                print(f"  Tile [{row_idx},{col_idx}] (index {tile_index:2d}): EMPTY (all background)")
            else:
                top_colors = result['pixel_indices'].most_common(5)
                color_str = ", ".join(
                    f"idx {idx}={cnt}px ({clut[idx][0]:02X}{clut[idx][1]:02X}{clut[idx][2]:02X})"
                    for idx, cnt in top_colors if idx != BACKGROUND_INDEX
                )
                print(f"  Tile [{row_idx},{col_idx}] (index {tile_index:2d}): ROAD  {non_bg:4d}/{total} non-bg pixels ({pct:.1f}%) - {desc}")
                if color_str:
                    print(f"    Top non-bg colors: {color_str}")

    print()

    # Final summary
    print("=" * 78)
    print("CONCLUSION")
    print("=" * 78)
    print()

    row0_road = sum(1 for r in grid[0] if not r['is_empty'])
    row1_road = sum(1 for r in grid[1] if not r['is_empty'])

    if row0_road == 13 and row1_road <= 13:
        print(f"CONFIRMED: 13 tiles per row layout")
        print(f"  Row 0: {row0_road} road tiles (columns 0-12), columns 13-15 are empty")
        print(f"  Row 1: {row1_road} road tiles")
        print(f"  Total: {total_road_tiles} road tiles in a 13+N arrangement")
    elif row0_road == 16:
        print(f"CONFIRMED: 16 tiles per row layout (full width)")
        print(f"  Row 0: {row0_road} road tiles")
        print(f"  Row 1: {row1_road} road tiles")
        print(f"  Total: {total_road_tiles} road tiles")
    else:
        print(f"LAYOUT: {row0_road} tiles in row 0, {row1_road} tiles in row 1")
        print(f"  Total: {total_road_tiles} road tiles")
        if row0_road + row1_road == 17:
            print(f"  This matches the expected 17 road tile variants")

    # Print an ASCII representation of the grid with tile descriptions
    print()
    print("=" * 78)
    print("ROAD TILE MAP WITH DESCRIPTIONS")
    print("=" * 78)
    print()
    for row_idx, row_results in enumerate(grid):
        print(f"Row {row_idx}:")
        for col_idx, result in enumerate(row_results):
            tile_index = row_idx * GRID_COLS + col_idx
            if result['is_empty']:
                print(f"  [{col_idx:2d}] ---")
            else:
                print(f"  [{col_idx:2d}] {result['description']}")
        print()


if __name__ == '__main__':
    main()
