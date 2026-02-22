#!/usr/bin/env python3
"""
Parse city records from the SCN resource and cross-reference with RD road data.
City record stride = 0x41 (65 bytes).
Record format (deduced from hex dumps):
  +0x00: unknown (varies, some are 0x00, some nonzero)
  ...
  +0x0A or similar: x (byte or short)
  +0x0C: y (byte or short)
  +0x0E: name (16 bytes, null-padded)
  ...
"""

import struct
import sys
import os

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

    # From the hex dumps, we can see the city table structure:
    # At offset 0x1579 (just before Kuuria at 0x1581):
    #   00 50 00 11 00 07 00 4B 75 75 72 69 61 ...
    # At offset 0x15ba (just before Mirea at 0x15c2):
    #   00 00 00 00 56 00 08 00 4D 69 72 65 61 ...
    # At offset 0x15fb (just before Axbridge at 0x1603):
    #   00 00 00 00 00 46 00 0c 00 41 78 62 72 69 64 67 65 ...

    # Let me examine the pattern more carefully
    # Kuuria: name at 0x1581, preceding bytes at 0x1579: 00 50 00 11 00 07 00
    #   If stride is 0x41, record starts at 0x1581 - offset_of_name_in_record
    #   Mirea name at 0x15c2 = 0x1581 + 0x41 -> confirmed stride 0x41

    # Look at the bytes before each name:
    # Before Kuuria (0x1581): 0x1579: 00 50 00 11 00 07 00  (8 bytes before name)
    #   0x50=80, 0x11=17, 0x07=7
    # Before Mirea (0x15c2): 0x15bc: 56 00 08 00  (but need to check more)
    #   Let me look at: 0x15b8: 00 00 00 00 56 00 08 00  -> 0x56=86, 0x08=8

    # These look like: ... x_lo ... y_lo ... or something else
    # Let's look at the known record at consistent offsets

    # The record starting positions:
    # Kuuria at 0x1581 - if name is at +0x08 in the record, start = 0x1579
    # But name is 16 bytes long, and the record is 0x41=65 bytes

    # Let's try: the record is 0x41 bytes, Kuuria name is at offset 0x1581
    # The record for Kuuria starts at 0x1581 - name_offset_in_record
    # Next record (Mirea) name at 0x15c2 = 0x1581 + 0x41

    # So the record base for Kuuria = name_pos - name_offset
    # Let me examine: if name is at the start of the record, then:
    #   record[0] = 'K', record[0x41] = 'M', etc.
    # But we need x,y coords somewhere.

    # Looking at hex before Kuuria name (0x1581):
    # 0x1579: 00 50 00 11 00 07 00 4B ('K')
    # So 8 bytes before name: 00 50 00 11 00 07 00
    # 0x50 = 80 decimal. Is this y? x?
    # From the map, Kuuria is described as "in the northern Doomlands"

    # Before Mirea name (0x15c2):
    # 0x15be: 56 00 08 00 4D ('M')  -- 4 bytes before, not 8?
    # Wait, let me recheck...

    # From the hex dump:
    # 15b2: 00 00 00 00 00 00 00 00 00 00 00 00 56 00 08 00
    # 15c2: 4d 69 72 65 61 ...
    # So at 0x15be: 56 00 08 00
    #   0x56 = 86 decimal
    #   But looking again: the 4 bytes before name are at 0x15be-0x15c1

    # Let me be precise. Each record is 0x41 bytes.
    # Record for city 0 (Kuuria): starts at some base.
    # Name 'Kuuria' at 0x1581, Name 'Mirea' at 0x15c2 (0x1581 + 0x41 = 0x15c2). Confirmed.

    # So each record is 0x41 bytes. The question is: where do x,y live?

    # Let's look at the full record for each city:
    print("=== FULL CITY RECORDS (stride 0x41 = 65 bytes) ===\n")

    # We need to figure out the record base.
    # If the name is at a fixed offset within the record, we can compute the base.
    # Let's try name_offset = 0 (name at start of record)
    # Then Kuuria record = 0x1581, full bytes:

    kuuria_start = 0x1581

    # But wait - look above. Before Kuuria at 0x1579 we see: 00 50 00 11 00 07 00
    # And the Kuuria name starts at 0x1581.
    # If the name is at offset +8 in the record, record starts at 0x1579.
    # But 0x1579 + 0x41 = 0x15ba, and Mirea name should be at 0x15ba + 8 = 0x15c2. YES! That works!

    # So: record starts at name_position - 8
    # Record for Kuuria: base = 0x1579

    # But what about before Kuuria? The previous record ends at 0x1579.
    # The record before Kuuria: base = 0x1579 - 0x41 = 0x1538
    # And the name of that record would be at 0x1538 + 8 = 0x1540

    # Let me check what's at 0x1540:
    name_at_0x1540 = d[0x1540:0x1550]
    print(f"Name at 0x1540: {name_at_0x1540.hex()} = {''.join(chr(b) if 32<=b<127 else '.' for b in name_at_0x1540)}")

    # Hmm, 0x1540 might be all zeros (before the first city record)

    # Let me try a different approach: the name offset might vary
    # Actually, looking more carefully at the hex dump for the region before Kuuria:
    #
    # 1572: 00 00 00 00 00 00 00 00 00 50 00 11 00 07 00 4B   .........P.....K
    # 1582: 75 75 72 69 61 00 ...
    #
    # So the bytes before Kuuria's name 'K' at 0x1581 are:
    # At -1: 00 (padding)
    # At -2: 07
    # At -3: 00
    # At -4: 11 (=17)
    # At -5: 00
    # At -6: 50 (=80)
    # At -7: 00
    # At -8: 09 or some value
    # Let me re-read more carefully:
    # 0x1579 = 00
    # 0x157a = 50 (=80)
    # 0x157b = 00
    # 0x157c = 11 (=17)
    # 0x157d = 00
    # 0x157e = 07 (=7)
    # 0x157f = 00
    # 0x1580 = 4b ('K')

    # Wait, name starts at 0x1581 not 0x1580. Let me recount.
    # From dump: "1572: 00 00 00 00 00 00 00 00 00 50 00 11 00 07 00 4b"
    # offset     1572 73 74 75 76 77 78 79 7a 7b 7c 7d 7e 7f 80 81

    # Ah! So 0x157b is 0x50 (=80), 0x157d is 0x11 (=17), 0x157f is 0x07 (=7)
    # And 0x1581 is 'K' (0x4b)

    # Before 'Mirea':
    # 15b2: 00 00 00 00 00 00 00 00 00 00 00 00 56 00 08 00
    # 15c2: 4d 69 72 65 ...
    # 0x15be = 0x56 (=86), 0x15c0 = 0x08 (=8)
    # But wait: 0x15be is at position 15b2 + 0x0c = 0x15be
    # So before Mirea: ... 56 00 08 00 4d ...
    # At offset -4 from 'M': 0x08
    # At offset -6 from 'M': 0x56 = 86

    # Hmm, those look like they could be x,y coords but the scale isn't matching
    # 0x50=80, 0x11=17, 0x07=7 for Kuuria
    # 0x56=86, 0x08=8 for Mirea

    # Actually! Let me reconsider: these might be BIG-ENDIAN shorts:
    # Before Kuuria: 00 50 00 11 00 07
    #   = 0x0050 (=80), 0x0011 (=17), 0x0007 (=7)
    # Before Mirea: 00 56 00 08
    #   = 0x0056 (=86), 0x0008 (=8)

    # What if: defense=80, x=17, y=7 for Kuuria?
    # Or: ?, x=80, y=17 for Kuuria?

    # Wait - 80 would be a valid x (0-111) and 17 a valid y (0-155)!
    # For Mirea: x=86, y=8? Also valid!

    # Let me check RD values at these positions:
    print("\nChecking RD values for candidate coords:")
    tests = [
        ("Kuuria", 80, 17),
        ("Kuuria", 17, 7),
        ("Mirea", 86, 8),
        ("Mirea", 8, 0),
    ]
    for name, x, y in tests:
        if 0 <= x < MAP_W and 0 <= y < MAP_H:
            rd_val = rd_data[y * MAP_W + x]
            print(f"  {name}: ({x}, {y}) -> RD={rd_val}")

    # Now let me systematically decode all records
    # Record stride: 0x41 = 65 bytes
    # Name at offset +8 in record (checked: name_pos - record_base = 8)
    # But let me re-verify: Kuuria name at 0x1581
    # If record stride is 0x41, and name_offset_in_record = N
    # Then kuuria_record_base = 0x1581 - N
    # And mirea_record_base = 0x1581 - N + 0x41
    # Mirea name should be at (0x1581 - N + 0x41) + N = 0x15c2 YES

    # So we need to find N such that the x,y values make sense for all cities
    # Let me try different name offsets

    # From the data pattern above, before each name we have:
    # ... 00 XX 00 YY 00 ZZ 00 <name>
    # where XX=80, YY=17, ZZ=7 for Kuuria

    # With big-endian shorts: the 3 shorts before the name are at offsets -6, -4, -2
    # (relative to name). So in the record, if name is at offset N:
    # short at N-6, N-4, N-2

    # Let me try: short at N-4 = x, short at N-2 = y
    # Kuuria: x=17, y=7 ? That seems too small for "northern Doomlands"
    # Kuuria: x=7? Hmm.

    # Let me try the other way: N-6 = ?, N-4 = x, N-2 = y
    # Kuuria: 80 = ?, 17 = x, 7 = y
    # But the map is 112 wide, and Kuuria in northern Doomlands...

    # Actually wait, let me also check Axbridge:
    # 15fb: 00 00 00 00 00 46 00 0c 00 41 ('A')
    # Before Axbridge name at 0x1603:
    # 0x15fd = 0x46 (=70), 0x15ff = 0x0c (=12), 0x1601 = 0x00, 0x1602 = 0x00
    # Hmm, that doesn't work the same way.

    # Let me re-examine byte by byte:
    print("\n=== BYTE-BY-BYTE ANALYSIS OF CITY RECORDS ===\n")

    # Known name positions
    names = [
        (0x1581, "Kuuria"),
        (0x15c2, "Mirea"),
        (0x1603, "Axbridge"),
    ]

    for name_pos, name in names:
        print(f"\n{name} (name at 0x{name_pos:04x}):")
        # Show 16 bytes before and 32 bytes after name
        for i in range(-16, 48):
            off = name_pos + i
            if 0 <= off < len(d):
                val = d[off]
                char = chr(val) if 32 <= val < 127 else '.'
                marker = " <-- NAME START" if i == 0 else ""
                if i < 0:
                    print(f"  [{i:>3}] 0x{off:04x}: 0x{val:02x} ({val:>3}) '{char}'{marker}")
                elif i < 16:
                    pass  # Skip name bytes
                else:
                    print(f"  [+{i:>2}] 0x{off:04x}: 0x{val:02x} ({val:>3}) '{char}'{marker}")

    # Let me be more systematic: dump the full 65-byte record for each city
    print("\n=== FULL 65-BYTE RECORDS ===\n")

    # The record base: if name is at position P in the file, and the
    # name is at offset NAME_OFF within the record, then
    # record_base = P - NAME_OFF
    # We need to try different NAME_OFF values

    # From the data, the stride is 0x41 = 65.
    # Kuuria name at 0x1581, Mirea name at 0x15c2 = 0x1581 + 0x41.
    # The question is where within the 65-byte record the name starts.

    # Let's look at what makes the records align with meaningful data.
    # I'll dump bytes at consistent positions relative to Kuuria record.

    # Actually, the simplest approach: the first city (Kuuria, index 0) likely
    # starts at a fixed offset in the SCN. Let me find the city table start.

    # The SCN is 12001 bytes. The first part is game state.
    # Faction names: 0x00-0x9F (8 * 20 = 160 bytes)
    # Then per-player stats, etc.

    # Kuuria name at 0x1581. The city table might start at 0x1579 (8 bytes before name).
    # Or the record might start right at the name.

    # Let me check: if name_offset = 0 (name is at start of record):
    #   Record 0 base = 0x1581
    #   Record bytes 0-15 = name
    #   After name (offset 16-64) = city data
    # But then what are the bytes before the name?

    # If name_offset > 0:
    #   Record 0 base = 0x1581 - name_offset
    #   Bytes 0 to name_offset-1 = pre-name data (coords?)
    #   Bytes name_offset to name_offset+15 = name
    #   Bytes name_offset+16 to 64 = post-name data

    # Let me figure this out by looking at the structure around Balor's Pit
    # (a ruin/site, not a city, found at 0x0837)

    # The region before the main city table has sites:
    # 0827: 00 00 01 00 00 00 00 00 00 36 00 0d 00 42 61 6c
    #                                 54   13     Bal
    # 0837: 6f 72 27 73 20 50 69 74 00 ...
    #        or's Pit
    # 0847: 00 02 00 00 00 00 00 63 00 0e 00 4f 6c 64 20
    #                              99   14     Old
    # 0857: 4d 61 72 73 70 72 61 79 ...
    #        Marspray

    # Before "Balor's Pit" at 0x0837:
    #   0x0833: 36 (=54)
    #   0x0835: 0d (=13)
    # Before "Old Marspray" at 0x084f (or 0x0853):
    #   Let me recheck. "Old " starts at 0x084f? No...

    # Wait, the second entry: from 0x0847:
    # 00 02 00 00 00 00 00 63 00 0e 00 4f 6c 64 20 4d
    # The name "Old Marspray" starts at 0x0853? Let me count:
    # 0x0847: 00
    # 0x0848: 02
    # 0x0849: 00
    # 0x084a: 00
    # 0x084b: 00
    # 0x084c: 00
    # 0x084d: 00
    # 0x084e: 63 (=99)
    # 0x084f: 00
    # 0x0850: 0e (=14)
    # 0x0851: 00
    # 0x0852: 4f ('O')
    # So "Old Marspray" starts at 0x0852.

    # Stride between "Balor's Pit" at 0x0837 and "Old Marspray" at 0x0852 = 0x1b = 27
    # That's a different stride! These are different kinds of records (ruins/sites).

    # Let me focus on the main city table with stride 0x41.
    # The city table contains the actual cities with full data.

    # Let me try name_offset = 8 (coords are 8 bytes before name)
    NAME_OFF = 8
    STRIDE = 0x41

    # Record 0 base for Kuuria = 0x1581 - 8 = 0x1579
    base0 = 0x1581 - NAME_OFF

    # But we need to know how many cities to go backwards to find city 0
    # Kuuria is described as city #000 in the CTY text, so it's the first city
    city_base = base0

    # Number of cities: the CTY resource has 80 entries (#000 to #079)
    num_cities = 80

    # But that would make the city table extend to 0x1579 + 80 * 0x41 = 0x1579 + 0x2080 = 0x35f9
    # But SCN is only 12001 bytes = 0x2EE1. So 0x1579 + 0x2080 = 0x35f9 > 0x2EE1.
    # Max cities that fit: (0x2EE1 - 0x1579) / 0x41 = 0x1968 / 0x41 = 98. OK, 80 fits.

    print(f"\nCity table: base=0x{city_base:04x}, stride=0x{STRIDE:02x}, name_off={NAME_OFF}")
    print(f"{'#':>3} {'Offset':>6} Name             Bytes before name (offsets 0-7)                        x    y  RD")
    print("-" * 100)

    cities = []
    for ci in range(80):
        rec_off = city_base + ci * STRIDE
        if rec_off + STRIDE > len(d):
            break

        # Get name (at offset +8, 16 bytes)
        name_bytes = d[rec_off + NAME_OFF:rec_off + NAME_OFF + 16]
        null_pos = name_bytes.find(0)
        if null_pos > 0:
            name_bytes = name_bytes[:null_pos]
        name = name_bytes.decode('mac_roman', errors='replace')

        # Get the 8 bytes before name
        pre = d[rec_off:rec_off + NAME_OFF]

        # Try different interpretations of pre-name bytes
        # From looking at Kuuria: pre = 00 50 00 11 00 07 00 4b
        # Wait that's 8 bytes but the last byte is 'K' = part of name
        # If NAME_OFF = 7: 00 50 00 11 00 07 00 ... then name = 4b ...

        # Let me just try NAME_OFF values from 4 to 16
        # Actually let me just dump all bytes and figure it out visually

        pre_hex = ' '.join(f'{b:02x}' for b in d[rec_off:rec_off + NAME_OFF])

        # Try reading shorts at various positions
        # The pattern seems to be: at offsets -6, -4, -2 from name
        # Let's try: defense/income at rec+0, x at rec+2, y at rec+4, owner at rec+6
        # Or: owner at rec+0, defense at rec+2, x at rec+4, y at rec+6

        # For Kuuria (ci=0): pre bytes (0-7) = ?
        # From hex: 0x1579: 00 50 00 11 00 07 00 4b
        # But 4b is 'K', so NAME_OFF should be 7 not 8!

        # Hmm, let me recount more carefully
        pass

    # Let me just do a raw dump of the exact bytes at each position
    print("\n=== RAW DUMP: 10 records starting at Kuuria ===\n")

    # Name "Kuuria" = K=0x4b at 0x1581
    # Let me try different NAME_OFF values and see which gives valid coordinates

    for name_off_try in range(0, 20):
        base_try = 0x1581 - name_off_try
        valid = 0
        for ci in range(5):
            rec = base_try + ci * STRIDE
            if rec + STRIDE > len(d):
                break
            # Check if the name position has ASCII text
            nm = d[rec + name_off_try:rec + name_off_try + 8]
            if all(32 <= b < 127 or b == 0 for b in nm) and any(65 <= b <= 122 for b in nm[:4]):
                valid += 1

        if valid >= 4:
            print(f"  name_off={name_off_try}: {valid}/5 records have valid names at that offset")

            # Now try to find x,y coords
            # Try reading all shorts in the pre-name area
            for ci in range(3):
                rec = base_try + ci * STRIDE
                nm = d[rec + name_off_try:rec + name_off_try + 16]
                null_pos = nm.find(0)
                if null_pos > 0:
                    nm = nm[:null_pos]
                nm_str = nm.decode('mac_roman', errors='replace')

                # Dump ALL bytes of the record
                print(f"\n    Record {ci} ('{nm_str}'):")
                full_rec = d[rec:rec + STRIDE]
                # Show as hex with annotations
                for j in range(0, STRIDE, 2):
                    if j + 1 < STRIDE:
                        val = struct.unpack_from('>H', full_rec, j)[0]
                        sval = struct.unpack_from('>h', full_rec, j)[0]
                        b1, b2 = full_rec[j], full_rec[j+1]
                        c1 = chr(b1) if 32 <= b1 < 127 else '.'
                        c2 = chr(b2) if 32 <= b2 < 127 else '.'
                        in_name = " <NAME>" if name_off_try <= j < name_off_try + 16 else ""
                        valid_xy = ""
                        if 0 < sval < MAP_W:
                            valid_xy = f"  [valid x or y]"
                        elif sval == 0:
                            valid_xy = f"  [zero]"
                        print(f"      +{j:>2}: {b1:02x} {b2:02x}  uint={val:>5}  int={sval:>6}  '{c1}{c2}'{in_name}{valid_xy}")

    # After all this analysis, let me just try the simplest approach:
    # The bytes at offset (name_pos - 6) and (name_pos - 4) for each known city
    print("\n\n=== FINAL COORD EXTRACTION ===")
    print("Trying: x at (name_pos - 4), y at (name_pos - 2)")

    known_names = [
        (0x1581, "Kuuria"),
        (0x15c2, "Mirea"),
        (0x1603, "Axbridge"),
        (0x1685, "Myre"),
        (0x16c6, "Deathwater"),
        (0x1748, "Skullport"),
    ]

    for npos, name in known_names:
        for dx, dy in [(-6,-4), (-4,-2), (-8,-6), (-10,-8)]:
            x = struct.unpack_from('>H', d, npos + dx)[0]
            y = struct.unpack_from('>H', d, npos + dy)[0]
            if 0 <= x < MAP_W and 0 <= y < MAP_H:
                rd_val = rd_data[y * MAP_W + x] if rd_data else -1
                print(f"  {name:15s}: offsets ({dx},{dy}) -> ({x:>3},{y:>3}) RD={rd_val}")

    # Also try single bytes
    print("\nTrying single bytes: x at (name_pos - 2), y at (name_pos - 1)")
    for npos, name in known_names:
        for dx, dy in [(-2,-1), (-3,-2), (-4,-3), (-5,-4), (-6,-5), (-7,-6)]:
            x = d[npos + dx]
            y = d[npos + dy]
            if 0 < x < MAP_W and 0 < y < MAP_H:
                rd_val = rd_data[y * MAP_W + x] if rd_data else -1
                print(f"  {name:15s}: offsets ({dx},{dy}) -> ({x:>3},{y:>3}) RD={rd_val}")


if __name__ == '__main__':
    main()
