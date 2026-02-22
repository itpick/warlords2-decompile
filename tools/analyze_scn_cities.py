#!/usr/bin/env python3
"""
Parse the SCN resource binary to extract city records and cross-reference with RD roads.
The SCN resource contains game state including faction names, per-player stats, and city/ruin records.
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

    if not scn_data:
        print("No SCN resource!")
        return

    d = scn_data
    print(f"SCN size: {len(d)} bytes")

    # The SCN contains faction names at offset 0x00 (8 x 20 bytes = 160 bytes)
    print("\n=== FACTION NAMES (offset 0x00, 8 x 20 bytes) ===")
    for i in range(8):
        off = i * 20
        name = d[off:off+20]
        # Find null terminator
        null_pos = name.find(0)
        if null_pos >= 0:
            name = name[:null_pos]
        print(f"  Faction {i}: '{name.decode('mac_roman', errors='replace')}'")

    # Now scan for city name strings to locate the city table
    # From the text parse, we know city names like "Mirea", "Axbridge" etc. appear
    # Let's find them in the binary

    print("\n=== SEARCHING FOR CITY RECORDS ===")

    # Search for known city name "Mirea" in the binary
    search_names = [b'Mirea', b'Axbridge', b'Kuuria', b'Skullport', b'Pyre']
    for name in search_names:
        pos = 0
        while True:
            idx = d.find(name, pos)
            if idx < 0:
                break
            # Show context around this name
            start = max(0, idx - 32)
            end = min(len(d), idx + 32)
            ctx = d[start:end]
            # Look for city x,y coords before the name
            # City record format: x(2), y(2), owner(2), defense(2), income(2), ..., name at some offset
            print(f"\n  '{name.decode()}' found at offset 0x{idx:04x}")
            # Check if there are coord-like values before it
            for lookback in [2, 4, 8, 12, 16, 20, 24, 28, 32]:
                if idx - lookback >= 0:
                    check_off = idx - lookback
                    cx = struct.unpack_from('>h', d, check_off)[0]
                    cy = struct.unpack_from('>h', d, check_off + 2)[0]
                    if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                        rd_val = rd_data[cy * MAP_W + cx] if rd_data else -1
                        print(f"    At offset 0x{check_off:04x} (-{lookback} from name): x={cx}, y={cy}, RD={rd_val}")

            # Hex dump around the name
            print(f"    Context hex (0x{start:04x}-0x{end:04x}):")
            for row_off in range(start, end, 16):
                h = ' '.join(f'{d[row_off+j]:02x}' for j in range(min(16, end - row_off)))
                a = ''.join(chr(d[row_off+j]) if 32 <= d[row_off+j] < 127 else '.' for j in range(min(16, end - row_off)))
                print(f"      {row_off:04x}: {h:<48s}  {a}")

            pos = idx + len(name)

    # Now that we can see the structure, let's try to identify the city record format
    # From the SCN text output, cities seem to start around offset where names appear
    # Look for a region with many city-name-like strings

    print("\n=== IDENTIFYING CITY TABLE STRUCTURE ===")

    # Find all occurrences of 16-byte name fields followed by more data
    # From the hex dumps we can reverse-engineer the record structure

    # Let's look at the region around the first city name we find
    first_name_off = d.find(b'Mirea')
    if first_name_off > 0:
        # Look back further to find the start of the city records
        # Dump a larger region before Mirea
        print(f"\n  Region around 'Mirea' (at 0x{first_name_off:04x}):")
        start = max(0, first_name_off - 128)
        end = min(len(d), first_name_off + 64)
        for row_off in range(start, end, 16):
            h = ' '.join(f'{d[row_off+j]:02x}' for j in range(min(16, end - row_off)))
            a = ''.join(chr(d[row_off+j]) if 32 <= d[row_off+j] < 127 else '.' for j in range(min(16, end - row_off)))
            print(f"    {row_off:04x}: {h:<48s}  {a}")

    # Try to find the city table by looking for a block of records with names
    # at a regular stride
    print("\n=== TRYING TO FIND CITY TABLE BY NAME STRIDE ===")

    # Find all name positions
    name_positions = []
    for search_name in [b'Kuuria', b'Mirea', b'Axbridge', b'Marspray', b'Myre',
                        b'Deathwater', b'Skullport', b'Edgefen', b'Celebrin']:
        idx = d.find(search_name)
        if idx >= 0:
            name_positions.append((idx, search_name.decode()))

    name_positions.sort()
    print(f"\n  City name positions in SCN:")
    for pos, name in name_positions:
        print(f"    0x{pos:04x} ({pos:>5}): {name}")

    if len(name_positions) >= 2:
        # Calculate strides between consecutive names
        print(f"\n  Strides between consecutive names:")
        for i in range(len(name_positions) - 1):
            stride = name_positions[i+1][0] - name_positions[i][0]
            print(f"    {name_positions[i][1]} -> {name_positions[i+1][1]}: {stride} bytes (0x{stride:02x})")

    # Let's try: the city records in the SCN file might use a different layout
    # Each city record might have: name(16), x(2), y(2), owner(2), etc.
    # Or x(2), y(2), ... , name(16)
    # Look at what's before and after the first name

    if name_positions:
        first_pos = name_positions[0][0]
        # Dump from -32 to +48
        print(f"\n  First city record region (around '{name_positions[0][1]}' at 0x{first_pos:04x}):")
        start = max(0, first_pos - 48)
        end = min(len(d), first_pos + 64)
        for row_off in range(start, end, 16):
            cols = min(16, end - row_off)
            h = ' '.join(f'{d[row_off+j]:02x}' for j in range(cols))
            a = ''.join(chr(d[row_off+j]) if 32 <= d[row_off+j] < 127 else '.' for j in range(cols))
            marker = " <-- NAME" if first_pos <= row_off < first_pos + 16 else ""
            print(f"    {row_off:04x}: {h:<48s}  {a}{marker}")

    # Try interpreting with name at known position and checking for coords
    # The typical record size we computed: ~50 bytes between consecutive names
    if len(name_positions) >= 3:
        typical_stride = name_positions[1][0] - name_positions[0][0]
        record_start = name_positions[0][0]

        # Try name at different offsets within the record
        for name_off in range(0, min(typical_stride, 32), 2):
            base = record_start - name_off
            if base < 0:
                continue

            # Try reading coords at offset 0 within the record
            valid = 0
            entries = []
            for ci in range(min(10, (len(d) - base) // typical_stride)):
                rec = base + ci * typical_stride
                cx = struct.unpack_from('>h', d, rec)[0]
                cy = struct.unpack_from('>h', d, rec + 2)[0]
                if 0 <= cx < MAP_W and 0 <= cy < MAP_H:
                    valid += 1
                    # Get name from this record
                    name_start = rec + name_off
                    ndata = d[name_start:name_start+16]
                    null_pos = ndata.find(0)
                    if null_pos > 0:
                        ndata = ndata[:null_pos]
                    nm = ndata.decode('mac_roman', errors='replace')
                    entries.append((cx, cy, nm))

            if valid >= 3:
                print(f"\n  MATCH: name_offset={name_off}, stride={typical_stride}, base=0x{base:04x}")
                print(f"  Valid coords: {valid}/10")
                for cx, cy, nm in entries:
                    rd_val = rd_data[cy * MAP_W + cx] if (rd_data and 0 <= cy * MAP_W + cx < len(rd_data)) else -1
                    print(f"    ({cx:>3}, {cy:>3}) name='{nm}' RD={rd_val}")


if __name__ == '__main__':
    main()
