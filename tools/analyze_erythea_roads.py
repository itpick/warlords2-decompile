#!/usr/bin/env python3
"""
Analyze road connectivity in the Erythea scenario's RD resource.

Reads the RD resource ('RD  ' ID 10000) from the Erythea scenario resource fork,
finds a road-dense region, displays the grid, and verifies connectivity.

RD byte layout: bits 0-4 = road tile index (0=no road, 1-17=road type)
Map dimensions: 112 wide x 156 tall, 1 byte per tile.

Autotile lookup: kAutoTile[16] = {1, 15, 14, 10, 13, 2, 11, 7, 12, 9, 1, 6, 8, 5, 4, 3}
Where neighbor mask bits: N=1, E=2, S=4, W=8.
"""

import struct
import sys
import os
from collections import defaultdict, Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Erythea Campaign/..namedfork/rsrc"
MAP_WIDTH = 112
MAP_HEIGHT = 156

# Autotile lookup table: index = neighbor mask (N=1, E=2, S=4, W=8), value = RD value
kAutoTile = [1, 15, 14, 10, 13, 2, 11, 7, 12, 9, 1, 6, 8, 5, 4, 3]

# RD value -> directions it connects to
RD_CONNECTS = {
    1:  {'E', 'W'},        # EW horizontal
    2:  {'N', 'S'},        # NS vertical
    3:  {'N', 'E', 'S', 'W'},  # crossroads
    4:  {'E', 'S', 'W'},   # ESW T-junction
    5:  {'N', 'S', 'W'},   # NSW T-junction
    6:  {'N', 'E', 'W'},   # NEW T-junction
    7:  {'N', 'E', 'S'},   # NES T-junction
    8:  {'S', 'W'},        # SW corner
    9:  {'N', 'W'},        # NW corner
    10: {'N', 'E'},        # NE corner
    11: {'E', 'S'},        # SE corner
    12: {'W'},             # W dead-end
    13: {'S'},             # S dead-end
    14: {'E'},             # E dead-end
    15: {'N'},             # N dead-end
    16: {'E', 'W'},        # EW variant (bridge)
    17: {'N', 'S'},        # NS variant (bridge)
}

# RD value names
RD_NAMES = {
    0:  "none",
    1:  "EW",    2:  "NS",    3:  "NESW",
    4:  "ESW",   5:  "NSW",   6:  "NEW",   7:  "NES",
    8:  "SW",    9:  "NW",    10: "NE",    11: "SE",
    12: "W",     13: "S",     14: "E",     15: "N",
    16: "EW-br", 17: "NS-br",
}

# Direction offsets: (dx, dy)
DIR_DELTA = {
    'N': (0, -1),
    'E': (1, 0),
    'S': (0, 1),
    'W': (-1, 0),
}

# Opposite direction
DIR_OPPOSITE = {'N': 'S', 'S': 'N', 'E': 'W', 'W': 'E'}


def load_rd_data():
    """Load RD resource from Erythea scenario."""
    with open(RSRC_PATH, 'rb') as f:
        data = f.read()
    resources = parse_resource_fork(data)
    for r in resources:
        if r.type_str == 'RD  ' and r.res_id == 10000:
            return r.data
    raise RuntimeError("RD resource not found!")


def get_rd(rd_data, x, y):
    """Get masked RD value (bits 0-4) at position."""
    if 0 <= x < MAP_WIDTH and 0 <= y < MAP_HEIGHT:
        return rd_data[y * MAP_WIDTH + x] & 0x1F
    return 0


def get_rd_raw(rd_data, x, y):
    """Get raw RD byte at position."""
    if 0 <= x < MAP_WIDTH and 0 <= y < MAP_HEIGHT:
        return rd_data[y * MAP_WIDTH + x]
    return 0


def get_neighbor_mask(rd_data, x, y):
    """Compute 4-bit neighbor mask: N=1, E=2, S=4, W=8."""
    mask = 0
    if get_rd(rd_data, x, y - 1) != 0:
        mask |= 1  # N
    if get_rd(rd_data, x + 1, y) != 0:
        mask |= 2  # E
    if get_rd(rd_data, x, y + 1) != 0:
        mask |= 4  # S
    if get_rd(rd_data, x - 1, y) != 0:
        mask |= 8  # W
    return mask


def find_best_10x10(rd_data):
    """Find the 10x10 region with the most road tiles, preferring junctions/corners."""
    best_score = 0
    best_x, best_y = 0, 0
    for sy in range(MAP_HEIGHT - 10):
        for sx in range(MAP_WIDTH - 10):
            score = 0
            for dy in range(10):
                for dx in range(10):
                    rd = get_rd(rd_data, sx + dx, sy + dy)
                    if rd != 0:
                        score += 1
                        # Bonus for junctions and corners
                        if rd in (3, 4, 5, 6, 7):  # junctions
                            score += 3
                        elif rd in (8, 9, 10, 11):  # corners
                            score += 2
            if score > best_score:
                best_score = score
                best_x, best_y = sx, sy
    return best_x, best_y, best_score


def print_section(title):
    """Print a section separator."""
    print()
    print("=" * 80)
    print(title)
    print("=" * 80)


def main():
    print("Loading RD resource from Erythea scenario...")
    rd_data = load_rd_data()
    print(f"  RD data size: {len(rd_data)} bytes (expected {MAP_WIDTH * MAP_HEIGHT} = {MAP_WIDTH}x{MAP_HEIGHT})")

    # =========================================================================
    # PART 1: Overall statistics
    # =========================================================================
    print_section("PART 1: RD Value Distribution (after & 0x1F masking)")

    counts = Counter()
    raw_counts = Counter()
    for y in range(MAP_HEIGHT):
        for x in range(MAP_WIDTH):
            raw = get_rd_raw(rd_data, x, y)
            masked = raw & 0x1F
            counts[masked] += 1
            raw_counts[raw] += 1

    print(f"\n{'RD':>4} {'Name':<10} {'Count':>6}")
    print("-" * 25)
    for val in sorted(counts.keys()):
        if val == 0:
            continue
        print(f"  {val:2d}  {RD_NAMES.get(val, '?'):<10} {counts[val]:>6}")
    print(f"   0  {'none':<10} {counts[0]:>6}")
    print(f"\n  Total road tiles: {sum(v for k, v in counts.items() if k != 0)}")

    # Check if upper bits are used
    upper_bits_used = any(raw != (raw & 0x1F) for raw in raw_counts if raw != 0)
    if upper_bits_used:
        print("\n  WARNING: Upper bits (5-7) are set on some tiles:")
        for raw in sorted(raw_counts.keys()):
            if raw != 0 and raw != (raw & 0x1F):
                masked = raw & 0x1F
                bits = f"b5={int(bool(raw & 0x20))} b6={int(bool(raw & 0x40))} b7={int(bool(raw & 0x80))}"
                print(f"    raw=0x{raw:02X} masked={masked:2d} ({RD_NAMES.get(masked, '?')}) {bits}: {raw_counts[raw]} tiles")
    else:
        print("\n  No upper bits (5-7) are set on any road tiles.")

    # =========================================================================
    # PART 2: Find best 10x10 region with roads
    # =========================================================================
    print_section("PART 2: Best 10x10 Region with Roads (junctions/corners weighted)")

    bx, by, bscore = find_best_10x10(rd_data)
    print(f"\n  Best region at ({bx},{by}) with weighted score {bscore}")

    # Print the 10x10 grid - numeric values
    print(f"\n  Numeric RD values (masked & 0x1F):")
    print(f"       ", end="")
    for dx in range(10):
        print(f"  x={bx+dx:<3d}", end="")
    print()
    print(f"       ", end="")
    print("-------" * 10)

    for dy in range(10):
        y = by + dy
        print(f"  y={y:3d}|", end="")
        for dx in range(10):
            x = bx + dx
            rd = get_rd(rd_data, x, y)
            if rd == 0:
                print(f"   .  ", end="")
            else:
                print(f"  {rd:2d}   ", end="")
        print()

    # Print the 10x10 grid - symbolic names
    print(f"\n  Road type names:")
    print(f"       ", end="")
    for dx in range(10):
        print(f"  x={bx+dx:<3d}", end="")
    print()
    print(f"       ", end="")
    print("-------" * 10)

    for dy in range(10):
        y = by + dy
        print(f"  y={y:3d}|", end="")
        for dx in range(10):
            x = bx + dx
            rd = get_rd(rd_data, x, y)
            name = RD_NAMES.get(rd, '?')
            if rd == 0:
                print(f"   .  ", end="")
            else:
                print(f" {name:^5s}", end="")
        print()

    # =========================================================================
    # PART 3: Connectivity check for the 10x10 region
    # =========================================================================
    print_section("PART 3: Connectivity Analysis for the 10x10 Region")
    print()
    print("For each road tile, check if claimed connections match neighbors.")
    print("'OK' = neighbor has a road. 'MISSING' = claims connection but neighbor is empty.")
    print("'ORPHAN' = neighbor has road but this tile does not connect toward it.")
    print()

    for dy in range(10):
        for dx in range(10):
            x, y = bx + dx, by + dy
            rd = get_rd(rd_data, x, y)
            if rd == 0:
                continue

            connects = RD_CONNECTS.get(rd, set())
            neighbor_mask = get_neighbor_mask(rd_data, x, y)
            expected_rd = kAutoTile[neighbor_mask]

            issues = []
            # Check each claimed direction
            for d in ['N', 'E', 'S', 'W']:
                ddx, ddy = DIR_DELTA[d]
                nx, ny = x + ddx, y + ddy
                nrd = get_rd(rd_data, nx, ny)

                if d in connects:
                    if nrd == 0:
                        issues.append(f"  -> {d}: MISSING (connects {d} but neighbor at ({nx},{ny}) has no road)")
                    else:
                        # Also check if neighbor connects back
                        n_connects = RD_CONNECTS.get(nrd, set())
                        opp = DIR_OPPOSITE[d]
                        if opp not in n_connects:
                            issues.append(f"  -> {d}: MISMATCH (this tile connects {d}, but neighbor ({nx},{ny}) RD={nrd} ({RD_NAMES.get(nrd,'?')}) does NOT connect {opp})")
                else:
                    if nrd != 0:
                        # Neighbor has road but we don't connect to it
                        n_connects = RD_CONNECTS.get(nrd, set())
                        opp = DIR_OPPOSITE[d]
                        if opp in n_connects:
                            issues.append(f"  -> {d}: ORPHAN (neighbor ({nx},{ny}) RD={nrd} ({RD_NAMES.get(nrd,'?')}) connects {opp} toward us, but we don't connect {d})")

            status = "OK" if not issues else "ISSUES"
            match_str = f"matches autotile" if rd == expected_rd else f"DIFFERS from autotile (expected RD {expected_rd} ({RD_NAMES.get(expected_rd, '?')}))"
            print(f"  ({x:3d},{y:3d}) RD={rd:2d} ({RD_NAMES.get(rd, '?'):5s}) nbr_mask={neighbor_mask:04b} ({neighbor_mask:2d}) -> autotile would give RD {expected_rd:2d} ({RD_NAMES.get(expected_rd, '?'):5s}) : {match_str}  [{status}]")
            for issue in issues:
                print(f"    {issue}")

    # =========================================================================
    # PART 4: Autotile table verification across entire map
    # =========================================================================
    print_section("PART 4: Autotile Table Verification (Full Map)")
    print()
    print("For each neighbor mask, what RD values actually appear in the scenario data?")
    print("kAutoTile[mask] is the expected value for random maps.")
    print("Scenario data uses pre-computed values which should match (mostly).")
    print()

    mask_to_rd = defaultdict(Counter)
    for y in range(MAP_HEIGHT):
        for x in range(MAP_WIDTH):
            rd = get_rd(rd_data, x, y)
            if rd == 0:
                continue
            mask = get_neighbor_mask(rd_data, x, y)
            mask_to_rd[mask][rd] += 1

    dir_labels = {
        0: "none", 1: "N", 2: "E", 3: "NE", 4: "S", 5: "NS",
        6: "ES", 7: "NES", 8: "W", 9: "NW", 10: "EW",
        11: "NEW", 12: "SW", 13: "NSW", 14: "ESW", 15: "NESW"
    }

    print(f"{'Mask':>4} {'Bits':>4} {'Dirs':<5} {'kAutoTile':>10} {'Actual dominant':>16} {'Match?':>7}  Other values")
    print("-" * 100)

    mismatches = 0
    for mask in range(16):
        counter = mask_to_rd.get(mask, Counter())
        expected_rd = kAutoTile[mask]
        expected_name = RD_NAMES.get(expected_rd, '?')

        if not counter:
            print(f"  {mask:2d} {mask:04b} {dir_labels[mask]:<5}   RD {expected_rd:2d} ({expected_name:5s})  {'(no data)':>16}")
            continue

        most_common = counter.most_common()
        dominant_rd = most_common[0][0]
        dominant_cnt = most_common[0][1]
        dominant_name = RD_NAMES.get(dominant_rd, '?')

        match = "YES" if dominant_rd == expected_rd else "NO"
        if dominant_rd != expected_rd:
            mismatches += 1

        others = ", ".join(f"RD{rd}({RD_NAMES.get(rd,'?')}):{cnt}" for rd, cnt in most_common[1:5])
        print(f"  {mask:2d} {mask:04b} {dir_labels[mask]:<5}   RD {expected_rd:2d} ({expected_name:5s})  RD {dominant_rd:2d} ({dominant_name:5s}) x{dominant_cnt:<4d}  {match:>5}  {others}")

    print(f"\n  Autotile mismatches: {mismatches} out of 16 masks")

    # =========================================================================
    # PART 5: Full-map connectivity issues
    # =========================================================================
    print_section("PART 5: Full Map Connectivity Issues")
    print()
    print("Tiles where claimed connection direction has no road neighbor.")
    print("Dead-ends (RD 12-15) connecting to nothing are expected. Others are bugs.")
    print()

    missing_issues = []  # tile claims direction but neighbor empty
    mismatch_issues = []  # tile connects but neighbor doesn't connect back
    orphan_issues = []  # neighbor connects toward us but we don't connect back

    for y in range(MAP_HEIGHT):
        for x in range(MAP_WIDTH):
            rd = get_rd(rd_data, x, y)
            if rd == 0 or rd not in RD_CONNECTS:
                continue

            connects = RD_CONNECTS[rd]
            for d in ['N', 'E', 'S', 'W']:
                ddx, ddy = DIR_DELTA[d]
                nx, ny = x + ddx, y + ddy

                if not (0 <= nx < MAP_WIDTH and 0 <= ny < MAP_HEIGHT):
                    continue  # edge of map, skip

                nrd = get_rd(rd_data, nx, ny)

                if d in connects:
                    if nrd == 0:
                        missing_issues.append((x, y, rd, d, nx, ny, nrd))
                    elif nrd in RD_CONNECTS:
                        opp = DIR_OPPOSITE[d]
                        if opp not in RD_CONNECTS[nrd]:
                            mismatch_issues.append((x, y, rd, d, nx, ny, nrd))
                else:
                    if nrd != 0 and nrd in RD_CONNECTS:
                        opp = DIR_OPPOSITE[d]
                        if opp in RD_CONNECTS[nrd]:
                            orphan_issues.append((x, y, rd, d, nx, ny, nrd))

    print(f"  MISSING connections (tile claims dir but neighbor empty): {len(missing_issues)}")
    if missing_issues:
        # Separate dead-end missing from non-dead-end missing
        dead_end_missing = [(x, y, rd, d, nx, ny, nrd) for x, y, rd, d, nx, ny, nrd in missing_issues if rd in (12, 13, 14, 15)]
        non_dead_end_missing = [(x, y, rd, d, nx, ny, nrd) for x, y, rd, d, nx, ny, nrd in missing_issues if rd not in (12, 13, 14, 15)]
        print(f"    Dead-end tiles with missing neighbor: {len(dead_end_missing)}")
        for x, y, rd, d, nx, ny, nrd in dead_end_missing[:10]:
            print(f"      ({x},{y}) RD={rd} ({RD_NAMES[rd]}) -> {d}: neighbor ({nx},{ny}) empty")
        if len(dead_end_missing) > 10:
            print(f"      ... and {len(dead_end_missing)-10} more")
        print(f"    Non-dead-end tiles with missing neighbor: {len(non_dead_end_missing)}")
        for x, y, rd, d, nx, ny, nrd in non_dead_end_missing[:20]:
            print(f"      ({x},{y}) RD={rd} ({RD_NAMES[rd]}) -> {d}: neighbor ({nx},{ny}) empty")
        if len(non_dead_end_missing) > 20:
            print(f"      ... and {len(non_dead_end_missing)-20} more")

    print(f"\n  MISMATCH (tile connects dir but neighbor doesn't connect back): {len(mismatch_issues)}")
    for x, y, rd, d, nx, ny, nrd in mismatch_issues[:20]:
        print(f"    ({x},{y}) RD={rd} ({RD_NAMES[rd]}) -> {d}: neighbor ({nx},{ny}) RD={nrd} ({RD_NAMES.get(nrd,'?')}) doesn't connect {DIR_OPPOSITE[d]}")
    if len(mismatch_issues) > 20:
        print(f"    ... and {len(mismatch_issues)-20} more")

    print(f"\n  ORPHAN (neighbor connects toward us but we don't connect back): {len(orphan_issues)}")
    for x, y, rd, d, nx, ny, nrd in orphan_issues[:20]:
        print(f"    ({x},{y}) RD={rd} ({RD_NAMES[rd]}) doesn't connect {d}: but neighbor ({nx},{ny}) RD={nrd} ({RD_NAMES.get(nrd,'?')}) connects {DIR_OPPOSITE[d]}")
    if len(orphan_issues) > 20:
        print(f"    ... and {len(orphan_issues)-20} more")

    # =========================================================================
    # PART 6: Autotile table mapping display
    # =========================================================================
    print_section("PART 6: Autotile Table Reference")
    print()
    print("kAutoTile[mask] table: neighbor mask -> RD value")
    print("Mask bits: N=bit0, E=bit1, S=bit2, W=bit3")
    print()
    print(f"{'Index':>5} {'Binary':>6} {'Neighbors':<10} {'RD Value':>8} {'Road Type':<10} {'Connects':<15}")
    print("-" * 60)
    for i in range(16):
        rd = kAutoTile[i]
        dirs = []
        if i & 1: dirs.append('N')
        if i & 2: dirs.append('E')
        if i & 4: dirs.append('S')
        if i & 8: dirs.append('W')
        dir_str = '+'.join(dirs) if dirs else 'none'
        connects = RD_CONNECTS.get(rd, set())
        conn_str = '+'.join(sorted(connects)) if connects else 'none'
        print(f"  {i:3d}  {i:04b}  {dir_str:<10}     {rd:2d}    {RD_NAMES.get(rd, '?'):<10} {conn_str}")

    # Verify that the autotile table produces correct connectivity
    print()
    print("Verification: Does kAutoTile[mask] produce a tile that connects toward all")
    print("neighbors indicated by the mask?")
    print()
    all_ok = True
    for mask in range(16):
        rd = kAutoTile[mask]
        connects = RD_CONNECTS.get(rd, set())

        expected_dirs = set()
        if mask & 1: expected_dirs.add('N')
        if mask & 2: expected_dirs.add('E')
        if mask & 4: expected_dirs.add('S')
        if mask & 8: expected_dirs.add('W')

        missing = expected_dirs - connects
        extra = connects - expected_dirs

        if missing or extra:
            all_ok = False
            print(f"  mask={mask:2d} ({mask:04b}): RD {rd} ({RD_NAMES.get(rd, '?')})")
            if missing:
                print(f"    MISSING: tile should connect {missing} but doesn't")
            if extra:
                print(f"    EXTRA: tile connects {extra} but mask doesn't indicate neighbor there")

    if all_ok:
        print("  All 16 entries produce tiles with correct directional connectivity.")

    print()
    print("Done.")


if __name__ == '__main__':
    main()
