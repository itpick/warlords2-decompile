#!/usr/bin/env python3
"""
Cross-reference RD road data with city locations.
From the record dumps, the city record layout in the SCN (stride 0x41 = 65 bytes):
  +0x00 to +0x0D: zeros/padding or data
  +0x0E (14): x coordinate (single byte, preceded by 0x00)
  +0x10 (16): y coordinate (single byte, preceded by 0x00)
  +0x12 (18): 0x00 byte
  +0x13 (19): name start (16 bytes)

Wait, let me re-examine. With name_off=19 and examining the data:
  Record 0 (Kuuria):   +12=0x50(80), +14=0x11(17), +16=0x07(7), +18=0x4B('K'), +19=name
  Record 1 (Mirea):    +14=0x56(86), +16=0x08(8), +18=0x4D('M'), +19=name
  Record 2 (Axbridge): +14=0x46(70), +16=0x0C(12), +18=0x41('A'), +19=name

It appears the name is at offset +19 for name_off=19, but actually the name starts at the
byte *after* the supposed +18 offset. Looking more carefully:

For Kuuria with name_off=19:
  bytes at +12,+13 = 00,50 -> uint16 = 80
  bytes at +14,+15 = 00,11 -> uint16 = 17
  bytes at +16,+17 = 00,07 -> uint16 = 7
  bytes at +18,+19 = 00,4B -> first byte of name is actually 'K' = 0x4B

So with name_off=18 (not 19), the name would start at +18 and include byte 0x00 + 'K' which is wrong.
Actually, the padding is part of the record, and the name starting byte is at +19.

But wait - for Kuuria with name_off=19, +18 = 0x4B = 'K'. That means the name actually starts at +18!
Let me look again: in the name_off=19 dump, +18 shows uint=0x004B = 75, and the NAME tag starts at +20.

Actually I think the issue is the name_off is slightly wrong. Let me just directly read the bytes
at the known offsets and decode properly.
"""

import struct
import sys
import os
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

SCENARIO_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Erythea Campaign/..namedfork/rsrc"
MAP_W = 112
MAP_H = 156

def main():
    with open(SCENARIO_PATH, 'rb') as f:
        data = f.read()

    resources = parse_resource_fork(data)

    rd_data = None
    scn_data = None

    for r in resources:
        if r.type_str.startswith('RD'):
            rd_data = r.data
        elif r.type_str == 'SCN ':
            scn_data = r.data

    d = scn_data

    # From the analysis with name_off=18:
    # Record 0 (Kuuria), name_off=18, record starts at 0x1581 - 18 = 0x156F
    # +12: 00 (+13: 00) -> short = 0
    # +14: 00 50 -> short = 80  (this is X!)
    # +16: 00 11 -> short = 17  (this is Y!)
    # +18: 00 07 -> but wait, 0x07 is not 'K'

    # Hmm. Let me just re-read the raw bytes at Kuuria name position.
    # Kuuria name 'K' = 0x4B is at file offset 0x1581.
    # The bytes surrounding it:
    # 0x157a: 00
    # 0x157b: 50 = 80
    # 0x157c: 00
    # 0x157d: 11 = 17
    # 0x157e: 00
    # 0x157f: 07 = 7
    # 0x1580: 00
    # 0x1581: 4B = 'K' (start of name)

    # For Mirea name at 0x15c2:
    # 0x15be: 56 = 86
    # 0x15bf: 00
    # 0x15c0: 08 = 8
    # 0x15c1: 00
    # 0x15c2: 4D = 'M'

    # Wait! The byte pattern is different. For Kuuria: 50 00 11 00 07 00 <name>
    # For Mirea: 56 00 08 00 <name>

    # Kuuria has 3 values before name: 80, 17, 7
    # Mirea has 2 values: 86, 8
    # But the stride is fixed at 0x41. The difference must be that record fields
    # have different lengths.

    # Actually, the name has a fixed position. Let me re-examine:
    # Kuuria name at 0x1581, stride 0x41, so record base = 0x1581 - name_offset
    # Mirea name at 0x15c2 = 0x1581 + 0x41

    # The bytes between end of previous record data and name start:
    # Before Kuuria (at 0x1581):
    #   0x1579: 00 00 50 00 11 00 07 00 4B (K)
    #   That's at offsets: -8 -7 -6 -5 -4 -3 -2 -1 0 from name

    # Before Mirea (at 0x15c2):
    #   0x15b8: 00 00 00 00 00 00 00 00 00 00 56 00 08 00 4D (M)
    #   At offsets: -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 but that's too many zeros

    # Let me look at what's between them.
    # Kuuria record data after the name ends at some point, then zeros, then Mirea data.
    # Let me look at the full 0x41 bytes starting at 0x1581:
    # 0x1581-0x15c1 = bytes of "Kuuria record from name to end"
    # Then 0x15c2 = start of Mirea name

    # Key insight: the records DON'T have a fixed name offset!
    # Instead, the record is 0x41 bytes, and the name position VARIES.

    # Actually wait. Let me recount. Stride 0x41 between names implies fixed layout.
    # Kuuria: 0x1581 + 0x41 = 0x15c2 (Mirea). This ONLY works if the name is at
    # the SAME offset within every record. So the name offset is fixed.

    # Record base for Kuuria = 0x1581 - X (where X = name offset)
    # Record base for Mirea = 0x15c2 - X = (0x1581 + 0x41) - X = kuuria_base + 0x41
    # So the stride is correct regardless of name offset.

    # Let me figure out name_offset by looking at the data pattern.
    # Kuuria pre-name bytes at (-6): 0x50=80
    # Mirea pre-name bytes at (-4): 0x56=86
    # Axbridge pre-name bytes at (-4): 0x46=70

    # For Kuuria at (-4): 0x11=17, at (-2): 0x07=7
    # For Mirea at (-4): is 56, not right. At (-2): 0x08=8
    # For Axbridge at (-2): 0x0C=12

    # Let me just read the exact byte values right before each name
    print("Bytes before each city name (positions -8 to -1 from name start):\n")
    name_positions = []

    # Find all city names
    city_names_from_cty = [
        "Kuuria", "Mirea", "Axbridge", "Marspray", "Myre",
        "Deathwater", "The Pit", "Skullport", "Sacrifice",
        "Edgefen", "Celebrin",
        "Heruhn", "Osterlin Abbey", "Calmirie", "Gurnoth",
        "Framsburg", "Magreth", "Torbarg",
        "Pyre", "Eldaron", "Darksword", "Passmor", "Rendul", "Starfire",
        "Pitchflame", "Firn", "Berik", "Jalhir", "Drog",
        "New Mirea", "Moraj", "Xanyrin", "Jagrin", "Gar Lake"
    ]

    # Find them starting after the faction names
    search_start = 0x1500  # Around where city table starts

    found = []
    for name in city_names_from_cty:
        name_bytes = name.encode('mac_roman')
        idx = d.find(name_bytes, search_start)
        if idx >= 0:
            found.append((idx, name))

    found.sort()

    # The stride should be 0x41 for main cities
    # But some entries might have different strides (ruins vs cities)
    print(f"{'Offset':>6} {'Name':<20} Stride  Pre-name bytes (-8 to -1)")
    print("-" * 80)

    prev_off = None
    for i, (off, name) in enumerate(found):
        stride = off - prev_off if prev_off else 0
        pre = d[off-8:off]
        pre_hex = ' '.join(f'{b:02x}' for b in pre)
        # Also show as decimals where nonzero
        pre_dec = [f'{b}' if b > 0 else '.' for b in pre]
        pre_dec_str = ' '.join(f'{s:>2}' for s in pre_dec)
        print(f"0x{off:04x} {name:<20} {stride:>5}  hex: {pre_hex}")
        print(f"       {'':20} {'':5}  dec: {pre_dec_str}")
        prev_off = off

    # Now I can see the pattern. Let me extract x,y from the consistent positions.
    # Looking at the hex dumps:
    # Kuuria at 0x1581:  pre = 00 00 50 00 11 00 07 00
    #   Offsets -6,-5,-4,-3,-2,-1 = 50 00 11 00 07 00
    #   Interpretation: -6=80, -4=17, -2=7  (as single bytes)
    #   Or: BE shorts at -6,-4,-2 = 0x5000(nope), 0x1100(nope), 0x0700(nope)
    #   Or: LE shorts at -6,-4,-2 = 0x0050=80, 0x0011=17, 0x0007=7 <-- little-endian!?
    #   Or: single bytes at -7,-5,-3 = 00,00,00 (no)
    #   Or: single bytes at -6,-4,-2 = 80,17,7

    # Mirea at 0x15c2: pre bytes...
    print("\n\n=== COORDINATES WITH BYTE POSITIONS ===\n")
    for off, name in found:
        # The value at (off-6) seems to be one coordinate and (off-4) seems to be another
        # Check positions -6, -4, -2
        v6 = d[off-6]
        v4 = d[off-4]
        v2 = d[off-2]

        # Also check as big-endian shorts
        s6 = struct.unpack_from('>H', d, off-6)[0]
        s4 = struct.unpack_from('>H', d, off-4)[0]
        s2 = struct.unpack_from('>H', d, off-2)[0]

        rd_at_v6_v4 = rd_data[v4 * MAP_W + v6] if (0 <= v6 < MAP_W and 0 <= v4 < MAP_H) else -1
        rd_at_v4_v2 = rd_data[v2 * MAP_W + v4] if (0 <= v4 < MAP_W and 0 <= v2 < MAP_H) else -1

        print(f"  {name:<20} [-6]={v6:>3} [-4]={v4:>3} [-2]={v2:>3}   "
              f"x={v6},y={v4}->RD={rd_at_v6_v4}   x={v4},y={v2}->RD={rd_at_v4_v2}")

    # Now let me try: the byte at -6 from name = x, byte at -4 = y
    # This makes geographic sense for Erythea:
    # Kuuria: x=80, y=17 (northern part of the map, right side)
    # Mirea:  x=86, y=8  (even more north and east)

    # Or maybe the byte at offset (-4) = x, (-2) = y
    # Kuuria: x=17, y=7  (northwest, which is also "northern Doomlands")

    print("\n\n=== FINAL CROSS-REFERENCE: CITIES ON ROAD MAP ===\n")

    # Build RD grid
    grid = [[0]*MAP_W for _ in range(MAP_H)]
    for y in range(MAP_H):
        for x in range(MAP_W):
            idx = y * MAP_W + x
            if idx < len(rd_data):
                grid[y][x] = rd_data[idx]

    # Try interpretation: x = byte at (-6), y = byte at (-4)
    print("Interpretation A: x=[-6], y=[-4]")
    city_positions_a = []
    for off, name in found:
        x = d[off-6]
        y = d[off-4]
        if 0 <= x < MAP_W and 0 <= y < MAP_H:
            rd_val = grid[y][x]
            city_positions_a.append((x, y, name, rd_val))
            print(f"  {name:<20} ({x:>3},{y:>3}) RD={rd_val}")

    # Check: how many city positions are near a road?
    near_road_a = 0
    for x, y, name, rd_val in city_positions_a:
        # Check 3x3 neighborhood for road
        for dy in range(-2, 3):
            for dx in range(-2, 3):
                nx, ny = x+dx, y+dy
                if 0 <= nx < MAP_W and 0 <= ny < MAP_H and grid[ny][nx] != 0:
                    near_road_a += 1
                    break
            else:
                continue
            break
    print(f"\n  Cities near road (within 2 tiles): {near_road_a}/{len(city_positions_a)}")

    print()
    print("Interpretation B: x=[-4], y=[-2]")
    city_positions_b = []
    for off, name in found:
        x = d[off-4]
        y = d[off-2]
        if 0 <= x < MAP_W and 0 <= y < MAP_H:
            rd_val = grid[y][x]
            city_positions_b.append((x, y, name, rd_val))
            print(f"  {name:<20} ({x:>3},{y:>3}) RD={rd_val}")

    near_road_b = 0
    for x, y, name, rd_val in city_positions_b:
        for dy in range(-2, 3):
            for dx in range(-2, 3):
                nx, ny = x+dx, y+dy
                if 0 <= nx < MAP_W and 0 <= ny < MAP_H and grid[ny][nx] != 0:
                    near_road_b += 1
                    break
            else:
                continue
            break
    print(f"\n  Cities near road (within 2 tiles): {near_road_b}/{len(city_positions_b)}")

    # Choose the interpretation with more cities near roads
    if near_road_a >= near_road_b:
        city_positions = city_positions_a
        print(f"\n>>> Using interpretation A (x=[-6], y=[-4]): {near_road_a} cities near roads")
    else:
        city_positions = city_positions_b
        print(f"\n>>> Using interpretation B (x=[-4], y=[-2]): {near_road_b} cities near roads")

    # Print combined map showing cities + roads
    print("\n\n=== COMBINED MAP: ROADS + CITIES ===")
    print("  Legend: . = empty, 0-9/a-h = road tile, @ = city on road, # = city off road\n")

    city_map = {}
    for x, y, name, rd_val in city_positions:
        city_map[(x, y)] = name

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
                if grid[y][x] != 0:
                    row += '@'
                else:
                    row += '#'
            elif grid[y][x] == 0:
                row += '.'
            elif grid[y][x] <= 9:
                row += str(grid[y][x])
            else:
                row += chr(ord('a') + grid[y][x] - 10)

        print(row)


if __name__ == '__main__':
    main()
