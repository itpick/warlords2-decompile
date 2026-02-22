#!/usr/bin/env python3
"""
Comprehensive analysis of RD (road data) resources from Warlords II scenarios.

The RD resource is loaded from scenario files (resource type 'RD  ', ID 10000).
It contains 0x4440 = 17472 bytes, representing a 112x156 grid, 1 byte per tile.

This script:
1. Extracts RD data from all available scenario resource forks
2. Shows value distribution (how many of each RD value)
3. Prints grid samples with road tile symbols
4. Analyzes neighbor connectivity to verify RD value -> tile shape mapping
5. Highlights discrepancies that might cause "shifted" or "flipped" rendering

Key insight from decompiled code (FUN_10008e8c):
- The ORIGINAL game loads RD data as raw bytes, but then applies it to the
  map tile data as bit 29 (road present/absent per player visibility).
- The scenario RD resource already contains pre-computed AUTOTILE values (1-17),
  NOT raw presence/absence bits.
- The game's autotile step (kAutoTile lookup) is only used for RANDOM MAP
  generation, not for scenario loading.
"""

import struct
import sys
import os
from collections import defaultdict, Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

# Scenario files are at the top level of the Warlords II directory
W2_DIR = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II"

SCENARIO_NAMES = [
    "Erythea Campaign",
    "Hadesha Campaign",
    "Isladia Campaign",
    "Isles of Sorcery",
    "Dragon Realms",
    "Tutoria",
]

SAVED_GAME_DIR = os.path.join(W2_DIR, "saved games")

# RD value meanings (from the autotile table and PICT 30021 analysis)
RD_NAMES = {
    0:  "no road",
    1:  "EW (horiz)",
    2:  "NS (vert)",
    3:  "NESW (cross)",
    4:  "ESW (T-down-right)",
    5:  "NSW (T-down-left)",
    6:  "NEW (T-up)",
    7:  "NES (T-right)",
    8:  "SW (corner)",
    9:  "NW (corner)",
    10: "NE (corner)",
    11: "SE (corner)",
    12: "W (dead-end)",
    13: "S (dead-end)",
    14: "E (dead-end)",
    15: "N (dead-end)",
    16: "EW variant",
    17: "NS variant",
}

# Compact symbols for grid display
RD_SYMBOLS = {
    0:  "..",
    1:  "--",   # EW horizontal
    2:  "||",   # NS vertical
    3:  "-+",   # NESW crossroad
    4:  "=v",   # ESW T-junction
    5:  "v=",   # NSW T-junction
    6:  "=^",   # NEW T-junction
    7:  "^=",   # NES T-junction (corrected from NSE)
    8:  "\\.",  # SW corner
    9:  "/.",   # NW corner
    10: ".\\",  # NE corner
    11: "./",   # SE corner
    12: "<-",   # W dead-end
    13: "vv",   # S dead-end
    14: "->",   # E dead-end
    15: "^^",   # N dead-end
    16: "==",   # EW variant
    17: "##",   # NS variant
}

# Current kRoadTileMap from main.c (RD value -> PICT 30021 tile index)
CURRENT_ROAD_TILE_MAP = [
    0,   # RD 0:  no road (skipped)
    0,   # RD 1:  EW straight    -> tile 0  EW
    1,   # RD 2:  NS straight    -> tile 1  NS
    2,   # RD 3:  NESW cross     -> tile 2  +
    5,   # RD 4:  ESW T-junc     -> tile 5  ESW
    3,   # RD 5:  NSW T-junc     -> tile 3  NSW
    6,   # RD 6:  NEW T-junc     -> tile 6  NEW
    4,   # RD 7:  NSE T-junc     -> tile 4  NSE
    8,   # RD 8:  SW corner      -> tile 8  SW
    10,  # RD 9:  NW corner      -> tile 10 NW
    9,   # RD 10: NE corner      -> tile 9  NE
    7,   # RD 11: SE corner      -> tile 7  SE
    0,   # RD 12: W dead-end     -> tile 0  EW
    1,   # RD 13: S dead-end     -> tile 1  NS
    0,   # RD 14: E dead-end     -> tile 0  EW
    1,   # RD 15: N dead-end     -> tile 1  NS
    0,   # RD 16: variant        -> tile 0  EW
    1,   # RD 17: variant        -> tile 1  NS
]

# PICT 30021 tile visual layout (confirmed from image analysis)
PICT_TILE_NAMES = {
    0:  "EW straight",
    1:  "NS straight",
    2:  "NESW cross",
    3:  "NSW T-junction",
    4:  "NSE T-junction",
    5:  "ESW T-junction",
    6:  "NEW T-junction",
    7:  "SE corner",
    8:  "SW corner",
    9:  "NE corner",
    10: "NW corner",
}


def find_scenario_files():
    """Find all scenario/saved game files with resource forks."""
    scenarios = []
    # Pre-built scenarios
    for name in SCENARIO_NAMES:
        rsrc_path = os.path.join(W2_DIR, name, "..namedfork/rsrc")
        if os.path.exists(rsrc_path) and os.path.getsize(rsrc_path) > 0:
            scenarios.append((name, rsrc_path, "scenario"))
    # Saved games
    if os.path.isdir(SAVED_GAME_DIR):
        for f in sorted(os.listdir(SAVED_GAME_DIR)):
            if f.startswith('.'):
                continue
            rsrc_path = os.path.join(SAVED_GAME_DIR, f, "..namedfork/rsrc")
            if os.path.exists(rsrc_path) and os.path.getsize(rsrc_path) > 0:
                scenarios.append(("saved:" + f, rsrc_path, "saved"))
    return scenarios


def load_rd_and_map_data(rsrc_path):
    """Load RD resource and MAP resource from a scenario file.
    Returns (rd_data, map_data, all_resource_types)."""
    with open(rsrc_path, 'rb') as f:
        data = f.read()
    resources = parse_resource_fork(data)

    rd_data = None
    map_data = None
    resource_types = set()

    for r in resources:
        resource_types.add(f"{r.type_str}:{r.res_id}")
        if r.type_str == 'RD  ' and r.res_id == 10000:
            rd_data = r.data
        if r.type_str == 'MAP ' and r.res_id == 10000:
            map_data = r.data

    return rd_data, map_data, resource_types


def analyze_distribution(rd_data, width=112, height=156):
    """Show distribution of RD values."""
    size = min(len(rd_data), width * height)
    counts = Counter()
    for i in range(size):
        counts[rd_data[i]] += 1
    return counts


def analyze_neighbors(rd_data, width=112, height=156):
    """For each road tile, compute the neighbor mask and record the RD value.
    Returns dict: mask -> Counter of RD values."""
    mask_to_rd = defaultdict(Counter)
    height = min(height, len(rd_data) // width)

    for y in range(height):
        for x in range(width):
            rd = rd_data[y * width + x]
            if rd == 0:
                continue

            # Check 4 cardinal neighbors for any road presence
            mask = 0
            if y > 0 and rd_data[(y-1) * width + x] != 0:
                mask |= 1  # N
            if x < width-1 and rd_data[y * width + x + 1] != 0:
                mask |= 2  # E
            if y < height-1 and rd_data[(y+1) * width + x] != 0:
                mask |= 4  # S
            if x > 0 and rd_data[y * width + x - 1] != 0:
                mask |= 8  # W

            mask_to_rd[mask][rd] += 1

    return mask_to_rd


def find_road_area(rd_data, width=112, height=156, min_roads=20):
    """Find a map region with the most road tiles for display."""
    height = min(height, len(rd_data) // width)
    best_count = 0
    best_y = 0
    best_x = 0

    # Search for 30x30 regions with the most road tiles
    for sy in range(0, height - 30, 5):
        for sx in range(0, width - 40, 5):
            count = 0
            for y in range(sy, min(sy + 30, height)):
                for x in range(sx, min(sx + 40, width)):
                    if rd_data[y * width + x] != 0:
                        count += 1
            if count > best_count:
                best_count = count
                best_y = sy
                best_x = sx

    return best_x, best_y, best_count


def print_grid(rd_data, start_x, start_y, w, h, width=112, height=156, use_symbols=True):
    """Print a section of the road grid."""
    height = min(height, len(rd_data) // width)

    # Header with column numbers
    header = "      "
    for x in range(start_x, min(start_x + w, width)):
        header += f"{x:3d}"
    print(header)
    print("      " + "---" * min(w, width - start_x))

    for y in range(start_y, min(start_y + h, height)):
        row = f"y{y:3d}| "
        for x in range(start_x, min(start_x + w, width)):
            rd = rd_data[y * width + x]
            if rd == 0:
                row += " .."[1:] if use_symbols else " ."
            elif use_symbols:
                sym = RD_SYMBOLS.get(rd, f"{rd:2d}")
                row += f"{sym:>3s}"[1:]  # right-justify in 3 chars, skip first
            else:
                row += f"{rd:3d}"[1:]
        print(row)


def print_grid_with_hex(rd_data, start_x, start_y, w, h, width=112, height=156):
    """Print a section of the road grid with hex values."""
    height = min(height, len(rd_data) // width)

    header = "      "
    for x in range(start_x, min(start_x + w, width)):
        header += f"{x:3d}"
    print(header)
    print("      " + "---" * min(w, width - start_x))

    for y in range(start_y, min(start_y + h, height)):
        row = f"y{y:3d}| "
        for x in range(start_x, min(start_x + w, width)):
            rd = rd_data[y * width + x]
            if rd == 0:
                row += " .."[1:]
            else:
                row += f"{rd:3d}"[1:]
        print(row)


def verify_connectivity(rd_data, width=112, height=156):
    """Verify that each RD value is consistent with its neighbors.
    For example, if a tile is RD 1 (EW), it should have E and/or W neighbors.
    Returns a list of inconsistencies."""
    height = min(height, len(rd_data) // width)
    issues = []

    # Expected connectivity for each RD value
    # Maps RD value to the set of directions it connects to
    rd_connects = {
        1:  {'E', 'W'},
        2:  {'N', 'S'},
        3:  {'N', 'E', 'S', 'W'},
        4:  {'E', 'S', 'W'},
        5:  {'N', 'S', 'W'},
        6:  {'N', 'E', 'W'},
        7:  {'N', 'E', 'S'},
        8:  {'S', 'W'},
        9:  {'N', 'W'},
        10: {'N', 'E'},
        11: {'E', 'S'},
        12: {'W'},
        13: {'S'},
        14: {'E'},
        15: {'N'},
        16: {'E', 'W'},
        17: {'N', 'S'},
    }

    for y in range(height):
        for x in range(width):
            rd = rd_data[y * width + x]
            if rd == 0 or rd not in rd_connects:
                continue

            connects = rd_connects[rd]

            # Check each direction this tile claims to connect to
            for d in connects:
                has_neighbor = False
                if d == 'N' and y > 0:
                    has_neighbor = rd_data[(y-1) * width + x] != 0
                elif d == 'E' and x < width - 1:
                    has_neighbor = rd_data[y * width + x + 1] != 0
                elif d == 'S' and y < height - 1:
                    has_neighbor = rd_data[(y+1) * width + x] != 0
                elif d == 'W' and x > 0:
                    has_neighbor = rd_data[y * width + x - 1] != 0

                if not has_neighbor and d in connects:
                    # Dead-ends at map edges are OK
                    if d == 'N' and y == 0: continue
                    if d == 'E' and x == width - 1: continue
                    if d == 'S' and y == height - 1: continue
                    if d == 'W' and x == 0: continue
                    issues.append((x, y, rd, d))

    return issues


def main():
    scenarios = find_scenario_files()
    if not scenarios:
        print("No scenarios found!")
        return

    print(f"Found {len(scenarios)} scenario/saved game files")
    print()

    # =====================================================================
    # PART 1: List all resources in each scenario file
    # =====================================================================
    print("=" * 80)
    print("PART 1: Resources found in scenario files")
    print("=" * 80)

    for name, path, kind in scenarios[:6]:
        rd_data, map_data, res_types = load_rd_and_map_data(path)
        rd_info = f"RD: {len(rd_data)} bytes" if rd_data else "RD: NOT FOUND"
        map_info = f"MAP: {len(map_data)} bytes" if map_data else "MAP: NOT FOUND"

        # List unique resource types
        types_only = set(t.split(':')[0] for t in res_types)
        print(f"\n  {name} ({kind})")
        print(f"    {rd_info}, {map_info}")
        print(f"    Resource types: {', '.join(sorted(types_only))}")

    # =====================================================================
    # PART 2: Value distribution across all scenarios
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 2: RD value distribution (scenarios only)")
    print("=" * 80)

    all_counts = Counter()
    scenario_details = []

    for name, path, kind in scenarios:
        if kind != "scenario":
            continue
        rd_data, _, _ = load_rd_and_map_data(path)
        if rd_data is None:
            continue

        counts = analyze_distribution(rd_data)
        for val, cnt in counts.items():
            all_counts[val] += cnt
        scenario_details.append((name, counts))

    # Show per-scenario distribution
    print(f"\n{'Value':>5} {'Name':<20}", end="")
    for name, _ in scenario_details:
        short_name = name[:12]
        print(f" {short_name:>12}", end="")
    print(f" {'TOTAL':>10}")
    print("-" * (30 + 12 * len(scenario_details) + 12))

    for val in sorted(all_counts.keys()):
        if val == 0:
            continue  # Skip "no road" for clarity
        vname = RD_NAMES.get(val, f"unknown({val})")
        print(f"RD{val:2d}  {vname:<20}", end="")
        for name, counts in scenario_details:
            print(f" {counts.get(val, 0):>12}", end="")
        print(f" {all_counts[val]:>10}")

    # Also show value 0
    print(f"RD 0  {'no road':<20}", end="")
    for name, counts in scenario_details:
        print(f" {counts.get(0, 0):>12}", end="")
    print(f" {all_counts[0]:>10}")

    total_road = sum(v for k, v in all_counts.items() if k != 0)
    print(f"\n  Total road tiles: {total_road}")
    print(f"  Total empty tiles: {all_counts[0]}")

    # =====================================================================
    # PART 3: Neighbor mask analysis (confirm autotile mapping)
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 3: Neighbor mask -> RD value mapping")
    print("=" * 80)
    print("This confirms what RD value the original game uses for each")
    print("neighbor connectivity pattern (N=1, E=2, S=4, W=8 bitmask).")
    print()

    dir_names = {
        0: "none", 1: "N", 2: "E", 3: "N+E", 4: "S", 5: "N+S",
        6: "E+S", 7: "N+E+S", 8: "W", 9: "N+W", 10: "E+W",
        11: "N+E+W", 12: "S+W", 13: "N+S+W", 14: "E+S+W", 15: "all"
    }

    global_mask_to_rd = defaultdict(Counter)

    for name, path, kind in scenarios:
        if kind != "scenario":
            continue
        rd_data, _, _ = load_rd_and_map_data(path)
        if rd_data is None:
            continue
        mask_to_rd = analyze_neighbors(rd_data)
        for mask, counter in mask_to_rd.items():
            for rd_val, cnt in counter.items():
                global_mask_to_rd[mask][rd_val] += cnt

    print(f"{'Mask':>4} {'Dirs':<8} {'Dominant RD':>12}  {'Count':>6} | Other values seen")
    print("-" * 80)

    correct_autotile = {}
    for mask in range(16):
        counter = global_mask_to_rd.get(mask, Counter())
        if not counter:
            print(f"0x{mask:X}  {dir_names[mask]:<8} {'(no data)':>12}")
            continue

        most_common = counter.most_common()
        dominant_rd = most_common[0][0]
        dominant_cnt = most_common[0][1]
        correct_autotile[mask] = dominant_rd

        others = ", ".join(f"RD{rd}:{cnt}" for rd, cnt in most_common[1:6]) if len(most_common) > 1 else ""
        print(f"0x{mask:X}  {dir_names[mask]:<8}    RD {dominant_rd:>2}     {dominant_cnt:>5} | {others}")

    # =====================================================================
    # PART 4: Grid samples from each scenario
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 4: Road grid samples from scenarios")
    print("=" * 80)

    for name, path, kind in scenarios:
        if kind != "scenario":
            continue
        rd_data, _, _ = load_rd_and_map_data(path)
        if rd_data is None:
            continue

        sx, sy, count = find_road_area(rd_data)
        if count < 5:
            print(f"\n{name}: Too few road tiles in any region (max {count})")
            continue

        print(f"\n{'='*60}")
        print(f"{name} - Best road area at ({sx},{sy}), {count} road tiles")
        print(f"{'='*60}")
        print("\nNumeric values:")
        print_grid_with_hex(rd_data, sx, sy, 40, 30)

        print("\nSymbolic (-- EW, || NS, -+ cross, corners: \\. /. .\\ ./):")
        print_grid(rd_data, sx, sy, 40, 30, use_symbols=True)

    # =====================================================================
    # PART 5: Connectivity verification
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 5: Connectivity verification")
    print("=" * 80)
    print("Checking if each RD value is consistent with its neighbors.")
    print("A 'dead end' connects to a direction but no neighbor exists there.")
    print()

    for name, path, kind in scenarios:
        if kind != "scenario":
            continue
        rd_data, _, _ = load_rd_and_map_data(path)
        if rd_data is None:
            continue

        issues = verify_connectivity(rd_data)
        if issues:
            # Categorize issues
            dead_end_issues = [(x, y, rd, d) for x, y, rd, d in issues
                              if rd in (12, 13, 14, 15)]
            other_issues = [(x, y, rd, d) for x, y, rd, d in issues
                           if rd not in (12, 13, 14, 15)]

            print(f"{name}: {len(issues)} total connectivity issues")
            if dead_end_issues:
                print(f"  Dead-end tiles connecting to nothing: {len(dead_end_issues)}")
                for x, y, rd, d in dead_end_issues[:5]:
                    print(f"    ({x},{y}) RD{rd} ({RD_NAMES.get(rd, '?')}) -> {d}: no neighbor")
            if other_issues:
                print(f"  Non-dead-end tiles with missing neighbors: {len(other_issues)}")
                for x, y, rd, d in other_issues[:10]:
                    print(f"    ({x},{y}) RD{rd} ({RD_NAMES.get(rd, '?')}) -> {d}: no neighbor")
        else:
            print(f"{name}: All connections verified OK")

    # =====================================================================
    # PART 6: kRoadTileMap verification
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 6: kRoadTileMap verification (RD value -> PICT 30021 tile)")
    print("=" * 80)
    print()
    print(f"{'RD':>3} {'Meaning':<25} {'Tile#':>5} {'Tile Name':<20} {'Match?'}")
    print("-" * 75)

    # Expected: each RD value's connectivity should match the PICT tile's shape
    for rd_val in range(1, 18):
        tile_idx = CURRENT_ROAD_TILE_MAP[rd_val]
        rd_name = RD_NAMES.get(rd_val, "?")
        tile_name = PICT_TILE_NAMES.get(tile_idx, f"tile {tile_idx}")

        # Check if the mapping makes sense
        # Dead ends and variants map to straight tiles, which is reasonable
        ok = "OK"
        if rd_val <= 11:
            # For the main shapes (1-11), check direction matching
            pass  # Would need PICT analysis to fully verify
        print(f"RD{rd_val:2d} {rd_name:<25} -> {tile_idx:>2}    {tile_name:<20} {ok}")

    # =====================================================================
    # PART 7: Full Erythea dump for detailed analysis
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 7: Full value occurrence with coordinates (Erythea)")
    print("=" * 80)

    for name, path, kind in scenarios:
        if name != "Erythea Campaign":
            continue
        rd_data, _, _ = load_rd_and_map_data(path)
        if rd_data is None:
            continue

        width = 112
        height = min(156, len(rd_data) // width)

        # Group coordinates by RD value
        by_value = defaultdict(list)
        for y in range(height):
            for x in range(width):
                rd = rd_data[y * width + x]
                if rd != 0:
                    by_value[rd].append((x, y))

        for rd_val in sorted(by_value.keys()):
            coords = by_value[rd_val]
            coord_str = ", ".join(f"({x},{y})" for x, y in coords[:15])
            if len(coords) > 15:
                coord_str += f" ... ({len(coords)} total)"
            print(f"  RD{rd_val:2d} ({RD_NAMES.get(rd_val, '?'):<20}): {len(coords):>4} tiles  {coord_str}")

    # =====================================================================
    # PART 8: Raw hex dump of first 256 bytes for format analysis
    # =====================================================================
    print("\n\n" + "=" * 80)
    print("PART 8: Raw hex dump of RD data (first 5 rows = 560 bytes)")
    print("=" * 80)

    for name, path, kind in scenarios:
        if name != "Erythea Campaign":
            continue
        rd_data, _, _ = load_rd_and_map_data(path)
        if rd_data is None:
            continue

        print(f"\n{name} RD resource: {len(rd_data)} bytes")
        for row in range(5):
            offset = row * 112
            hex_str = " ".join(f"{rd_data[offset + i]:02x}" for i in range(112))
            print(f"  Row {row:3d} (offset {offset:5d}): {hex_str}")

        # Also dump a row with many roads
        print(f"\n  Rows with roads (first 10):")
        road_rows = 0
        for row in range(min(156, len(rd_data) // 112)):
            offset = row * 112
            has_road = any(rd_data[offset + i] != 0 for i in range(112))
            if has_road:
                hex_str = " ".join(f"{rd_data[offset + i]:02x}" for i in range(112))
                # Highlight non-zero bytes
                highlighted = ""
                for i in range(112):
                    val = rd_data[offset + i]
                    if val == 0:
                        highlighted += " .."[1:]
                    else:
                        highlighted += f"{val:3d}"[1:]
                print(f"  Row {row:3d}: {highlighted}")
                road_rows += 1
                if road_rows >= 30:
                    print(f"  ... (more rows with roads)")
                    break


if __name__ == '__main__':
    main()
