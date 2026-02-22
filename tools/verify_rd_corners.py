#!/usr/bin/env python3
"""
Find specific road patterns in scenario data (corners, T-junctions) and
verify what RD values are stored there. This gives ground truth for the
RD value → tile direction mapping.
"""
import sys, os
from collections import defaultdict, Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

W2_DIR = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II"
SCENARIOS = ["Erythea Campaign", "Hadesha Campaign", "Isles of Sorcery",
             "Dragon Realms", "Tutoria"]
WIDTH = 112
HEIGHT = 156


def load_rd(name):
    path = os.path.join(W2_DIR, name, "..namedfork/rsrc")
    if not os.path.exists(path):
        return None
    with open(path, 'rb') as f:
        data = f.read()
    for r in parse_resource_fork(data):
        if r.type_str == 'RD  ' and r.res_id == 10000:
            return r.data
    return None


def get_neighbor_mask(rd_data, x, y):
    """Compute actual neighbor connectivity mask for position (x,y)."""
    mask = 0
    if y > 0 and (rd_data[(y-1) * WIDTH + x] & 0x1F) > 0:
        mask |= 1  # N
    if x < WIDTH-1 and (rd_data[y * WIDTH + x + 1] & 0x1F) > 0:
        mask |= 2  # E
    if y < HEIGHT-1 and (rd_data[(y+1) * WIDTH + x] & 0x1F) > 0:
        mask |= 4  # S
    if x > 0 and (rd_data[y * WIDTH + x - 1] & 0x1F) > 0:
        mask |= 8  # W
    return mask


dir_names = {
    0: "none", 1: "N", 2: "E", 3: "NE", 4: "S", 5: "NS",
    6: "ES", 7: "NES", 8: "W", 9: "NW", 0xA: "EW", 0xB: "NEW",
    0xC: "SW", 0xD: "NSW", 0xE: "ESW", 0xF: "NESW"
}


# For each neighbor mask, collect all RD values found at those positions
mask_to_rd = defaultdict(Counter)

for name in SCENARIOS:
    rd_data = load_rd(name)
    if rd_data is None:
        continue
    print(f"\n{name}: {len(rd_data)} bytes")

    for y in range(HEIGHT):
        for x in range(WIDTH):
            rd = rd_data[y * WIDTH + x] & 0x1F
            if rd == 0 or rd > 17:
                continue
            mask = get_neighbor_mask(rd_data, x, y)
            mask_to_rd[mask][rd] += 1

# Print results: for each neighbor mask, what RD value is most common?
print("\n" + "=" * 70)
print("Ground truth: Neighbor mask → RD value (from scenario analysis)")
print("=" * 70)
print(f"{'Mask':>4} {'Hex':>4} {'Dirs':<8} {'RD value':>10} {'Count':>6}  {'All RD values'}")
print("-" * 70)

rd_for_mask = {}
for mask in range(16):
    counts = mask_to_rd.get(mask)
    if not counts:
        print(f"{mask:>4} 0x{mask:X}  {dir_names[mask]:<8} {'(no data)':>10}")
        continue
    most_common = counts.most_common(5)
    best_rd = most_common[0][0]
    best_count = most_common[0][1]
    rd_for_mask[mask] = best_rd

    all_str = ", ".join(f"RD{rd}:{c}" for rd, c in most_common)
    print(f"{mask:>4} 0x{mask:X}  {dir_names[mask]:<8} RD {best_rd:>2}  {best_count:>6}  {all_str}")

# Now: which tile should each RD value map to?
# Build reverse: RD value → which neighbor mask(s) it represents
print("\n" + "=" * 70)
print("RD value → What direction pattern it represents → Needed tile")
print("=" * 70)

rd_to_mask = {}
for mask, rd in rd_for_mask.items():
    if rd not in rd_to_mask:
        rd_to_mask[rd] = mask

print(f"{'RD':>3} {'Mask':>5} {'Dirs':<8} {'tile(rd-1)':>10} {'tile(rd)':>8}")
print("-" * 50)
for rd in range(1, 18):
    mask = rd_to_mask.get(rd, -1)
    dirs = dir_names.get(mask, "?") if mask >= 0 else "?"
    print(f"{rd:>3}  0x{mask:X} if mask >= 0 else '?' : {dirs:<8} tile {rd-1:>2}      tile {rd:>2}")

# Also show first 5 examples of each road corner/junction
print("\n" + "=" * 70)
print("Example positions for each corner/junction type")
print("=" * 70)

for name in SCENARIOS[:2]:
    rd_data = load_rd(name)
    if rd_data is None:
        continue
    print(f"\n--- {name} ---")

    examples = defaultdict(list)
    for y in range(HEIGHT):
        for x in range(WIDTH):
            rd = rd_data[y * WIDTH + x] & 0x1F
            if rd == 0 or rd > 17:
                continue
            mask = get_neighbor_mask(rd_data, x, y)
            key = (mask, rd)
            if len(examples[key]) < 3:
                examples[key].append((x, y))

    # Show corners and T-junctions
    for mask in [0xC, 0x9, 0x3, 0x6,  # corners: SW, NW, NE, ES
                 0xE, 0xD, 0xB, 0x7,  # T-junctions: ESW, NSW, NEW, NES
                 0xF]:                  # crossroad: NESW
        for (m, rd), positions in sorted(examples.items()):
            if m == mask:
                pos_str = ", ".join(f"({x},{y})" for x, y in positions)
                print(f"  mask=0x{m:X} ({dir_names[m]:>4}) RD={rd:2d} at {pos_str}")

                # Show 3x3 neighborhood for first example
                if positions:
                    ex, ey = positions[0]
                    print(f"    Neighborhood at ({ex},{ey}):")
                    for dy in range(-1, 2):
                        row = ""
                        for dx in range(-1, 2):
                            nx, ny = ex + dx, ey + dy
                            if 0 <= nx < WIDTH and 0 <= ny < HEIGHT:
                                nrd = rd_data[ny * WIDTH + nx] & 0x1F
                                row += f" {nrd:2d}"
                            else:
                                row += " --"
                        print(f"      {row}")
