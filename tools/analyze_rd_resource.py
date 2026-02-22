#!/usr/bin/env python3
"""
Analyze the 'RD  ' resource from Warlords II scenario files.
Determine: road tile indices OR fog-of-war data?
"""

import struct
import sys
import os
from collections import defaultdict, Counter

# Add parent dir to path so we can import the parser
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork, type_code_to_str

SCENARIO_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Erythea Campaign/..namedfork/rsrc"
MAP_W = 112
MAP_H = 156
RD_SIZE = MAP_W * MAP_H  # 17472

def main():
    print("=" * 80)
    print("RD RESOURCE ANALYSIS: Road Data vs Fog-of-War")
    print("=" * 80)
    print()

    # Load resource fork
    with open(SCENARIO_PATH, 'rb') as f:
        data = f.read()
    print(f"Loaded resource fork: {len(data)} bytes")

    resources = parse_resource_fork(data)
    print(f"Total resources found: {len(resources)}")
    print()

    # =========================================================================
    # STEP 1: List ALL resource types and IDs
    # =========================================================================
    print("=" * 80)
    print("STEP 1: ALL RESOURCE TYPES AND IDS IN SCENARIO FILE")
    print("=" * 80)
    by_type = defaultdict(list)
    for r in resources:
        by_type[r.type_str].append(r)

    print(f"\n{'Type':<8} {'Count':>5}  {'Total Size':>10}  IDs")
    print(f"{'----':<8} {'-----':>5}  {'----------':>10}  ---")
    for type_str in sorted(by_type.keys()):
        entries = by_type[type_str]
        total_size = sum(r.data_size for r in entries)
        ids = sorted(r.res_id for r in entries)
        id_list = ', '.join(str(i) for i in ids[:20])
        if len(ids) > 20:
            id_list += f" ... (+{len(ids)-20} more)"
        print(f"{type_str:<8} {len(entries):>5}  {total_size:>10,}  {id_list}")

    # =========================================================================
    # STEP 2: Find and extract the RD resource
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 2: EXTRACT 'RD  ' RESOURCE")
    print("=" * 80)

    rd_resource = None
    for r in resources:
        if r.type_str == 'RD  ':
            print(f"  Found: RD   ID={r.res_id}, size={r.data_size} bytes")
            if r.res_id == 10000:
                rd_resource = r

    if rd_resource is None:
        # Try without exact match
        for r in resources:
            if r.type_str == 'RD  ':
                rd_resource = r
                break

    if rd_resource is None:
        print("  ERROR: No 'RD  ' resource found!")
        print("  Looking for similar types...")
        for r in resources:
            ts = r.type_str.lower().strip()
            if 'rd' in ts or 'road' in ts or 'fog' in ts:
                print(f"    Found: {r.type_str} ID={r.res_id}, size={r.data_size}")
        return

    rd_data = rd_resource.data
    print(f"\n  RD resource size: {len(rd_data)} bytes")
    print(f"  Expected for {MAP_W}x{MAP_H} grid: {RD_SIZE} bytes")
    print(f"  Match: {'YES' if len(rd_data) == RD_SIZE else 'NO - size=' + str(len(rd_data))}")

    if len(rd_data) < RD_SIZE:
        print(f"  WARNING: Truncated! Only {len(rd_data)} of {RD_SIZE} bytes")

    # =========================================================================
    # STEP 3a: Value frequency distribution
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 3a: VALUE FREQUENCY DISTRIBUTION")
    print("=" * 80)

    freq = Counter(rd_data[:RD_SIZE])
    total_cells = min(len(rd_data), RD_SIZE)
    nonzero_count = total_cells - freq.get(0, 0)

    print(f"\n  Total cells: {total_cells}")
    print(f"  Zero cells: {freq.get(0, 0)} ({freq.get(0,0)*100/total_cells:.1f}%)")
    print(f"  Non-zero cells: {nonzero_count} ({nonzero_count*100/total_cells:.1f}%)")
    print()

    print(f"  {'Value':>5} {'Count':>6} {'Pct':>6}  Notes")
    print(f"  {'-----':>5} {'-----':>6} {'---':>6}  -----")
    for val in sorted(freq.keys()):
        count = freq[val]
        pct = count * 100 / total_cells
        notes = ""
        if val == 0:
            notes = "no road / unexplored"
        elif val <= 17:
            notes = "valid road tile index"
        elif val <= 31:
            notes = "5-bit range (still possible road data)"
        elif val == 32:
            notes = "bit 5 only - possible fog bit"
        elif val == 64:
            notes = "bit 6 only - possible fog bit"
        elif val == 128:
            notes = "bit 7 only - possible fog bit"
        elif val == 255:
            notes = "all bits set - possible 'all players explored'"
        elif val > 17:
            # Check if it's a combination of fog bits
            bits_set = bin(val).count('1')
            notes = f"{bits_set} bits set, binary={val:08b}"
        print(f"  {val:>5} {count:>6} {pct:>5.1f}%  {notes}")

    # =========================================================================
    # STEP 3b: KEY DECISION POINT - values > 17?
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 3b: KEY DECISION - VALUES > 17 (MAX ROAD INDEX)?")
    print("=" * 80)

    max_val = max(freq.keys())
    vals_over_17 = sum(count for val, count in freq.items() if val > 17)
    unique_over_17 = [val for val in sorted(freq.keys()) if val > 17]

    print(f"\n  Maximum value in RD data: {max_val}")
    print(f"  Cells with value > 17: {vals_over_17}")
    print(f"  Unique values > 17: {unique_over_17}")

    if max_val <= 17:
        print(f"\n  >>> STRONG EVIDENCE: ALL values are 0-17. This is ROAD TILE INDEX DATA.")
        print(f"  >>> Maximum road tile index = 17 (for 18 tiles: 0=none, 1-17=road)")
    elif max_val > 17 and max_val <= 31:
        print(f"\n  >>> POSSIBLE road data with extended range, OR corrupt data")
    else:
        print(f"\n  >>> VALUES EXCEED 31. This CANNOT be pure road tile indices.")
        print(f"  >>> Checking fog-of-war hypothesis...")

        # Check bit patterns
        print(f"\n  Bit pattern analysis of values > 17:")
        for val in unique_over_17[:30]:
            print(f"    {val:>3} = {val:08b}  (bits: {', '.join(str(i) for i in range(8) if val & (1<<i))})")

    # =========================================================================
    # STEP 3c: Spatial analysis - check for linear paths vs circles
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 3c: SPATIAL PATTERN ANALYSIS")
    print("=" * 80)

    # Build 2D grid
    grid = [[0]*MAP_W for _ in range(MAP_H)]
    for y in range(min(MAP_H, len(rd_data)//MAP_W)):
        for x in range(MAP_W):
            idx = y * MAP_W + x
            if idx < len(rd_data):
                grid[y][x] = rd_data[idx]

    # Check connectivity - do non-zero cells form lines or blobs?
    # Count how many non-zero neighbors each non-zero cell has
    neighbor_counts = Counter()
    for y in range(MAP_H):
        for x in range(MAP_W):
            if grid[y][x] == 0:
                continue
            n = 0
            for dy, dx in [(-1,0),(1,0),(0,-1),(0,1)]:
                ny, nx = y+dy, x+dx
                if 0 <= ny < MAP_H and 0 <= nx < MAP_W and grid[ny][nx] != 0:
                    n += 1
            neighbor_counts[n] += 1

    print(f"\n  Adjacency analysis of non-zero cells:")
    print(f"  (Road paths should have mostly 1-2 neighbors; fog blobs should have 3-4)")
    for n in sorted(neighbor_counts.keys()):
        count = neighbor_counts[n]
        pct = count * 100 / max(nonzero_count, 1)
        bar = '#' * int(pct/2)
        label = ""
        if n == 0: label = "isolated"
        elif n == 1: label = "dead-end"
        elif n == 2: label = "path segment"
        elif n == 3: label = "T-junction"
        elif n == 4: label = "crossroad/blob"
        print(f"    {n} neighbors: {count:>5} ({pct:>5.1f}%) {bar}  ({label})")

    # Check linearity: for cells with exactly 2 neighbors, are they roughly collinear?
    # (roads tend to be more linear than fog)

    # =========================================================================
    # STEP 4: Extract city locations and cross-reference
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 4: CITY LOCATIONS AND CROSS-REFERENCE WITH RD DATA")
    print("=" * 80)

    # Look for game state resource - typically stored in the scenario
    # Game state is usually in a resource like 'GS  ' or similar
    # Let's check what large resources exist that could contain game state
    print("\n  Looking for game state data...")

    # The game state in SCN files: cities are at gs+0x812
    # City count at gs+0x810 (short)
    # Each city = 0x20 bytes: +0=x(short), +2=y(short), +4=owner(short), +0x18=site_type

    # Find the main game state resource
    gs_resource = None
    for r in resources:
        # The main scenario data is often the largest resource or has a specific type
        if r.type_str in ('GS  ', 'GSTA', 'STAT', 'War2', 'DATA'):
            print(f"    Candidate: {r.type_str} ID={r.res_id}, size={r.data_size}")
            if r.data_size > 2000:
                gs_resource = r

    # If not found by name, look for the resource that contains 0x2FCC bytes
    # or any resource large enough to contain city data at offset 0x812
    if gs_resource is None:
        print("  No named GS resource found. Looking for large data resources...")
        for r in resources:
            if r.data_size >= 0x812 + 0x20:  # At least enough for one city
                # Check if this could be game state
                # Peek at offset 0x810 for city count
                if len(r.data) >= 0x812:
                    city_count_maybe = struct.unpack_from('>H', r.data, 0x810)[0]
                    if 0 < city_count_maybe <= 80:  # Reasonable city count
                        print(f"    Possible GS: {r.type_str} ID={r.res_id}, size={r.data_size}, "
                              f"city_count@0x810={city_count_maybe}")
                        # Verify by checking if city coords are in valid range
                        valid = True
                        for ci in range(min(city_count_maybe, 5)):
                            off = 0x812 + ci * 0x20
                            if off + 4 <= len(r.data):
                                cx = struct.unpack_from('>h', r.data, off)[0]
                                cy = struct.unpack_from('>h', r.data, off+2)[0]
                                if not (0 <= cx < MAP_W and 0 <= cy < MAP_H):
                                    valid = False
                                    break
                        if valid:
                            gs_resource = r
                            print(f"    >>> Using this as game state")
                            break

    cities = []
    if gs_resource is not None:
        gs = gs_resource.data
        city_count = struct.unpack_from('>H', gs, 0x810)[0]
        print(f"\n  City count: {city_count}")
        print(f"\n  {'#':>3} {'X':>3} {'Y':>3} {'Owner':>5} {'Def':>4} {'Inc':>4} {'Type':>4}  RD_val")
        print(f"  {'---':>3} {'---':>3} {'---':>3} {'-----':>5} {'----':>4} {'----':>4} {'----':>4}  ------")

        for ci in range(min(city_count, 80)):
            off = 0x812 + ci * 0x20
            if off + 0x20 > len(gs):
                break
            cx = struct.unpack_from('>h', gs, off + 0x00)[0]
            cy = struct.unpack_from('>h', gs, off + 0x02)[0]
            owner = struct.unpack_from('>h', gs, off + 0x04)[0]
            defense = struct.unpack_from('>h', gs, off + 0x06)[0]
            income = struct.unpack_from('>h', gs, off + 0x08)[0]
            site_type = gs[off + 0x18]

            rd_val = 0
            if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                rd_idx = cy * MAP_W + cx
                if rd_idx < len(rd_data):
                    rd_val = rd_data[rd_idx]

            type_name = {0: 'city', 1: 'ruin', 2: 'temple', 3: 'port'}.get(site_type, f'?{site_type}')
            cities.append((cx, cy, owner, site_type, type_name))
            print(f"  {ci:>3} {cx:>3} {cy:>3} {owner:>5} {defense:>4} {income:>4} {type_name:>6}  {rd_val}")

        # Check: do non-zero RD values appear near cities?
        print(f"\n  Cross-reference: non-zero RD values within 3 tiles of cities:")
        city_set = set()
        for cx, cy, _, _, _ in cities:
            for dy in range(-3, 4):
                for dx in range(-3, 4):
                    nx, ny = cx+dx, cy+dy
                    if 0 <= nx < MAP_W and 0 <= ny < MAP_H:
                        city_set.add((nx, ny))

        near_city_nonzero = 0
        far_from_city_nonzero = 0
        for y in range(MAP_H):
            for x in range(MAP_W):
                if grid[y][x] != 0:
                    if (x, y) in city_set:
                        near_city_nonzero += 1
                    else:
                        far_from_city_nonzero += 1

        print(f"    Non-zero cells within 3 tiles of a city: {near_city_nonzero}")
        print(f"    Non-zero cells far from any city: {far_from_city_nonzero}")
        if nonzero_count > 0:
            print(f"    Percentage near cities: {near_city_nonzero*100/nonzero_count:.1f}%")
    else:
        print("  Could not find game state resource!")

    # =========================================================================
    # STEP 5: Check for road connectivity between cities
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 5: DO NON-ZERO CELLS FORM PATHS BETWEEN CITIES?")
    print("=" * 80)

    if cities:
        # For each pair of cities, check if there's a connected path of non-zero cells
        city_locs = [(cx, cy) for cx, cy, _, st, _ in cities if st == 0]  # Only actual cities
        print(f"\n  Checking connectivity between {len(city_locs)} cities...")

        # BFS from each city to find connected non-zero cells
        # Check if roads connect to other cities
        connected_pairs = 0
        checked_pairs = 0
        for i in range(min(len(city_locs), 10)):
            for j in range(i+1, min(len(city_locs), 10)):
                cx1, cy1 = city_locs[i]
                cx2, cy2 = city_locs[j]

                # BFS from city1 along non-zero cells to see if we reach city2
                visited = set()
                queue = [(cx1, cy1)]
                visited.add((cx1, cy1))
                found = False

                while queue and not found:
                    qx, qy = queue.pop(0)
                    if qx == cx2 and qy == cy2:
                        found = True
                        break
                    for dy, dx in [(-1,0),(1,0),(0,-1),(0,1),(-1,-1),(-1,1),(1,-1),(1,1)]:
                        nx, ny = qx+dx, qy+dy
                        if (nx, ny) not in visited and 0 <= nx < MAP_W and 0 <= ny < MAP_H:
                            if grid[ny][nx] != 0:
                                visited.add((nx, ny))
                                queue.append((nx, ny))

                checked_pairs += 1
                if found:
                    connected_pairs += 1

        print(f"    Checked {checked_pairs} city pairs (first 10 cities)")
        print(f"    Connected by non-zero path: {connected_pairs}/{checked_pairs}")
        if checked_pairs > 0:
            pct = connected_pairs * 100 / checked_pairs
            if pct > 50:
                print(f"    >>> High connectivity ({pct:.0f}%) suggests ROAD NETWORK")
            else:
                print(f"    >>> Low connectivity ({pct:.0f}%) suggests NOT road data")

    # =========================================================================
    # STEP 6: ASCII VISUAL MAP
    # =========================================================================
    print()
    print("=" * 80)
    print("STEP 6: ASCII MAP (non-zero RD cells)")
    print("  Legend: . = 0 (no data), 0-9/a-f = hex value, C = city, R = ruin")
    print("=" * 80)
    print()

    # Build city position lookup
    city_pos = {}
    for cx, cy, owner, st, name in cities:
        if st == 0:
            city_pos[(cx, cy)] = 'C'
        elif st == 1:
            city_pos[(cx, cy)] = 'R'
        elif st == 2:
            city_pos[(cx, cy)] = 'T'
        else:
            city_pos[(cx, cy)] = 'P'

    # Print header with column markers every 10
    header = "     "
    for x in range(MAP_W):
        if x % 10 == 0:
            header += str(x // 10 % 10)
        else:
            header += " "
    print(header)

    for y in range(MAP_H):
        row = f"{y:>4} "
        for x in range(MAP_W):
            val = grid[y][x]
            if (x, y) in city_pos:
                row += city_pos[(x, y)]
            elif val == 0:
                row += '.'
            elif val <= 9:
                row += str(val)
            elif val <= 15:
                row += chr(ord('a') + val - 10)
            elif val <= 35:
                row += chr(ord('A') + val - 16)
            else:
                row += '*'  # values > 35
        print(row)

    # =========================================================================
    # STEP 7: FINAL VERDICT
    # =========================================================================
    print()
    print("=" * 80)
    print("FINAL VERDICT")
    print("=" * 80)

    evidence_road = 0
    evidence_fog = 0

    if max_val <= 17:
        print("  [ROAD] All values 0-17: consistent with road tile indices")
        evidence_road += 3
    elif max_val <= 31:
        print("  [ROAD?] Values up to 31: possibly extended road set")
        evidence_road += 1
    else:
        print(f"  [FOG] Values up to {max_val}: too high for road tile indices (max 17)")
        evidence_fog += 3

    # Check for power-of-2 patterns (fog indicator)
    power_of_2_vals = [v for v in freq.keys() if v > 0 and (v & (v-1)) == 0]
    if len(power_of_2_vals) > 4:
        print(f"  [FOG] Many power-of-2 values: {power_of_2_vals} (per-player bits)")
        evidence_fog += 2

    if nonzero_count > 0:
        # Roads typically cover < 10% of map, fog covers > 30%
        coverage = nonzero_count * 100 / total_cells
        if coverage < 15:
            print(f"  [ROAD] Coverage {coverage:.1f}%: sparse, consistent with road network")
            evidence_road += 1
        elif coverage > 30:
            print(f"  [FOG] Coverage {coverage:.1f}%: dense, consistent with explored area")
            evidence_fog += 1
        else:
            print(f"  [??] Coverage {coverage:.1f}%: ambiguous")

    if neighbor_counts.get(2, 0) > neighbor_counts.get(4, 0) * 2:
        print(f"  [ROAD] Mostly 2-neighbor cells (paths), not 4-neighbor (blobs)")
        evidence_road += 2
    elif neighbor_counts.get(4, 0) > neighbor_counts.get(2, 0):
        print(f"  [FOG] Many 4-neighbor cells (blobs), not paths")
        evidence_fog += 2

    print()
    if evidence_road > evidence_fog:
        print(f"  ==> CONCLUSION: 'RD  ' contains ROAD TILE INDEX DATA")
        print(f"      (Road evidence: {evidence_road}, Fog evidence: {evidence_fog})")
    elif evidence_fog > evidence_road:
        print(f"  ==> CONCLUSION: 'RD  ' contains FOG-OF-WAR DATA")
        print(f"      (Road evidence: {evidence_road}, Fog evidence: {evidence_fog})")
    else:
        print(f"  ==> INCONCLUSIVE (Road: {evidence_road}, Fog: {evidence_fog})")

    # =========================================================================
    # BONUS: Check first 64 bytes raw hex for visual inspection
    # =========================================================================
    print()
    print("=" * 80)
    print("BONUS: RAW HEX DUMP OF FIRST 4 ROWS (112 bytes each)")
    print("=" * 80)
    for row in range(4):
        offset = row * MAP_W
        hex_str = ' '.join(f'{rd_data[offset+i]:02x}' for i in range(min(MAP_W, len(rd_data) - offset)))
        print(f"  Row {row}: {hex_str}")

    # Also show a few rows in the middle
    print(f"\n  ... middle rows ...")
    for row in [MAP_H//4, MAP_H//2, 3*MAP_H//4]:
        offset = row * MAP_W
        if offset + MAP_W <= len(rd_data):
            nonzero_in_row = sum(1 for i in range(MAP_W) if rd_data[offset+i] != 0)
            hex_str = ' '.join(f'{rd_data[offset+i]:02x}' for i in range(MAP_W))
            print(f"  Row {row} ({nonzero_in_row} non-zero): {hex_str}")


if __name__ == '__main__':
    main()
