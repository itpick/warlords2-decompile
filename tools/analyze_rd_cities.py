#!/usr/bin/env python3
"""
Cross-reference RD road data with city locations from the CTY resource.
"""

import struct
import sys
import os
from collections import defaultdict

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

SCENARIO_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Erythea Campaign/..namedfork/rsrc"
MAP_W = 112
MAP_H = 156

def main():
    with open(SCENARIO_PATH, 'rb') as f:
        data = f.read()

    resources = parse_resource_fork(data)

    by_type = {}
    for r in resources:
        by_type.setdefault(r.type_str, []).append(r)

    # Get RD data
    rd_data = None
    for r in resources:
        if r.type_str.startswith('RD'):
            rd_data = r.data
            break

    if rd_data is None:
        print("No RD resource found!")
        return

    # Try all large resources to find city data
    print("=" * 80)
    print("EXPLORING ALL RESOURCES FOR CITY DATA")
    print("=" * 80)

    for r in resources:
        print(f"\n--- {r.type_str} ID={r.res_id}, size={r.data_size} ---")
        if r.data_size < 32:
            print(f"  (too small, skipping)")
            continue

        # For CTY resource specifically
        if r.type_str == 'CTY ':
            print(f"  CTY resource found! Size = {r.data_size}")
            d = r.data
            # Try to figure out the format
            # Could be: count(2) + city_records
            # Or could be raw city records

            # Try interpreting first 2 bytes as count
            count_maybe = struct.unpack_from('>H', d, 0)[0]
            print(f"  First 2 bytes as count: {count_maybe}")

            # Each city in SCN is 0x20 bytes. 5236 / 0x20 = 163.625
            # With 2-byte count: (5236-2) / 0x20 = 163.5625
            # Try different record sizes
            for rec_size in [0x20, 0x1E, 0x22, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x5C]:
                without_header = (r.data_size - 2) / rec_size
                raw = r.data_size / rec_size
                print(f"    rec_size=0x{rec_size:02X}: with_count={without_header:.2f}, raw={raw:.2f}")

            # Try to find city coordinates - scan for plausible x,y pairs
            print(f"\n  Scanning for city coords (x in 0-111, y in 0-155):")

            # Theory 1: 2-byte count header, then 0x20-byte records
            if count_maybe <= 80:
                print(f"\n  Theory: count={count_maybe}, then 0x20-byte records starting at offset 2:")
                valid = 0
                for ci in range(min(count_maybe, 40)):
                    off = 2 + ci * 0x20
                    if off + 0x20 > len(d):
                        break
                    cx = struct.unpack_from('>h', d, off + 0)[0]
                    cy = struct.unpack_from('>h', d, off + 2)[0]
                    if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                        valid += 1
                        rd_val = rd_data[cy * MAP_W + cx] if cy * MAP_W + cx < len(rd_data) else -1
                        print(f"    City {ci}: x={cx}, y={cy}, rd_val={rd_val}, bytes: {' '.join(f'{d[off+i]:02x}' for i in range(0x20))}")
                print(f"  Valid coords: {valid}/{min(count_maybe, 40)}")

            # Theory 2: no header, raw records
            raw_count = r.data_size // 0x20
            print(f"\n  Theory: raw 0x20-byte records, count={raw_count}:")
            valid = 0
            for ci in range(min(raw_count, 10)):
                off = ci * 0x20
                cx = struct.unpack_from('>h', d, off + 0)[0]
                cy = struct.unpack_from('>h', d, off + 2)[0]
                if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                    valid += 1
                rd_val = -1
                if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                    rd_val = rd_data[cy * MAP_W + cx] if cy * MAP_W + cx < len(rd_data) else -1
                print(f"    City {ci}: x={cx}, y={cy}, rd_val={rd_val}")
            print(f"  Valid coords: {valid}/{min(raw_count, 10)}")

            # Theory 3: Different offsets within the record
            print(f"\n  Trying different offsets for x,y within first record:")
            for xoff in range(0, 16, 2):
                cx = struct.unpack_from('>h', d, xoff)[0]
                cy = struct.unpack_from('>h', d, xoff + 2)[0]
                inrange = "OK" if (0 <= cx < MAP_W and 0 <= cy < MAP_H) else "OUT"
                print(f"    offset +{xoff}: x={cx}, y={cy} [{inrange}]")

            # Hex dump first 128 bytes
            print(f"\n  Raw hex (first 128 bytes):")
            for row in range(min(4, (len(d)+31)//32)):
                off = row * 32
                h = ' '.join(f'{d[off+i]:02x}' for i in range(min(32, len(d)-off)))
                print(f"    {off:04x}: {h}")

    # Also try the SCN resource
    for r in resources:
        if r.type_str == 'SCN ':
            d = r.data
            print(f"\n--- SCN resource, size={r.data_size} ---")

            # Try city data at offset 0x812
            if len(d) >= 0x814:
                city_count = struct.unpack_from('>H', d, 0x810)[0]
                print(f"  city_count at 0x810 = {city_count}")

                for ci in range(min(city_count, 40)):
                    off = 0x812 + ci * 0x20
                    if off + 0x20 > len(d):
                        break
                    cx = struct.unpack_from('>h', d, off + 0)[0]
                    cy = struct.unpack_from('>h', d, off + 2)[0]
                    owner = struct.unpack_from('>h', d, off + 4)[0]
                    defense = struct.unpack_from('>h', d, off + 6)[0]
                    income = struct.unpack_from('>h', d, off + 8)[0]
                    site_type = d[off + 0x18]

                    rd_val = -1
                    if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                        rd_idx = cy * MAP_W + cx
                        if rd_idx < len(rd_data):
                            rd_val = rd_data[rd_idx]

                    type_name = {0:'city', 1:'ruin', 2:'temple', 3:'port'}.get(site_type, f'?{site_type}')
                    flag = " <<< ROAD!" if rd_val > 0 else ""
                    print(f"    City {ci:>2}: ({cx:>3},{cy:>3}) owner={owner} def={defense} inc={income} type={type_name} RD={rd_val}{flag}")

                # Now check: are road paths connecting these cities?
                cities_only = []
                for ci in range(min(city_count, 80)):
                    off = 0x812 + ci * 0x20
                    if off + 0x20 > len(d):
                        break
                    cx = struct.unpack_from('>h', d, off + 0)[0]
                    cy = struct.unpack_from('>h', d, off + 2)[0]
                    site_type = d[off + 0x18]
                    if site_type == 0 and 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                        cities_only.append((cx, cy, ci))

                print(f"\n  Road connectivity check between {len(cities_only)} cities:")

                # BFS from each city
                grid = [[0]*MAP_W for _ in range(MAP_H)]
                for y in range(MAP_H):
                    for x in range(MAP_W):
                        idx = y * MAP_W + x
                        if idx < len(rd_data):
                            grid[y][x] = rd_data[idx]

                connected = 0
                total_pairs = 0
                for i in range(len(cities_only)):
                    cx1, cy1, ci1 = cities_only[i]
                    # BFS from city i along non-zero cells
                    visited = set()
                    queue = [(cx1, cy1)]
                    visited.add((cx1, cy1))

                    while queue:
                        qx, qy = queue.pop(0)
                        for dy, dx in [(-1,0),(1,0),(0,-1),(0,1),(-1,-1),(-1,1),(1,-1),(1,1)]:
                            nx, ny = qx+dx, qy+dy
                            if (nx, ny) not in visited and 0 <= nx < MAP_W and 0 <= ny < MAP_H:
                                if grid[ny][nx] != 0:
                                    visited.add((nx, ny))
                                    queue.append((nx, ny))

                    # How many other cities did we reach?
                    for j in range(i+1, len(cities_only)):
                        cx2, cy2, ci2 = cities_only[j]
                        total_pairs += 1
                        if (cx2, cy2) in visited:
                            connected += 1

                print(f"    Connected city pairs: {connected}/{total_pairs}")

                # Print the ASCII map with city markers
                print(f"\n  ASCII MAP WITH CITIES (C=city, R=ruin, T=temple):")
                city_map = {}
                for ci in range(min(city_count, 80)):
                    off = 0x812 + ci * 0x20
                    if off + 0x20 > len(d):
                        break
                    cx = struct.unpack_from('>h', d, off + 0)[0]
                    cy = struct.unpack_from('>h', d, off + 2)[0]
                    site_type = d[off + 0x18]
                    if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                        city_map[(cx, cy)] = {0:'C', 1:'R', 2:'T', 3:'P'}.get(site_type, '?')

                # Print compact - only rows with non-zero data or cities
                for y in range(MAP_H):
                    has_data = False
                    for x in range(MAP_W):
                        if grid[y][x] != 0 or (x, y) in city_map:
                            has_data = True
                            break
                    if not has_data:
                        continue

                    row = f"{y:>4} "
                    for x in range(MAP_W):
                        if (x, y) in city_map:
                            row += city_map[(x, y)]
                        elif grid[y][x] == 0:
                            row += '.'
                        elif grid[y][x] <= 9:
                            row += str(grid[y][x])
                        else:
                            row += chr(ord('a') + grid[y][x] - 10)

                    print(row)


if __name__ == '__main__':
    main()
