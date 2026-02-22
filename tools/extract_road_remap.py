#!/usr/bin/env python3
"""
Extract road tile remap tables from MAPCOLOR (DAT 30020).
The MAPCOLOR resource contains road tile index lookup tables starting at byte offset 1024 (row 64).
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

dat_data = None
for r in resources:
    if r.type_str == 'DAT ' and r.res_id == 30020:
        dat_data = r.data
        break

if dat_data is None:
    print("DAT 30020 not found!")
    sys.exit(1)

print(f"DAT 30020 (MAPCOLOR): {len(dat_data)} bytes")
print(f"  = {len(dat_data) // 16} rows of 16 bytes")

# Dump ALL bytes from offset 1024 onwards (rows 64+)
print("\nRaw hex dump from offset 1024 (row 64):")
for row in range(64, min(75, len(dat_data) // 16)):
    offset = row * 16
    if offset + 16 > len(dat_data):
        break
    bytes_hex = ' '.join(f'{dat_data[offset+i]:02X}' for i in range(16))
    bytes_dec = ' '.join(f'{dat_data[offset+i]:3d}' for i in range(16))
    print(f"  Row {row} (offset {offset:4d}): {bytes_hex}")
    print(f"                          {bytes_dec}")

# Try interpreting as road tile remap tables
# Agent said: 3 tables of 16 entries, as byte pairs [tile_index, 0]
print("\n\nInterpreting as road tile remap tables:")
for table_idx in range(3):
    base = 1024 + table_idx * 32  # 16 entries × 2 bytes each = 32 bytes per table
    if base + 32 > len(dat_data):
        print(f"  Table {table_idx}: out of bounds")
        continue
    print(f"\n  Table {table_idx} (offset {base}):")
    entries = []
    for i in range(16):
        val = dat_data[base + i * 2]
        pad = dat_data[base + i * 2 + 1]
        entries.append(val)
        print(f"    [{i:2d}] = {val:3d} (pad={pad})")
    print(f"  Values: {entries}")

# Also try as single-byte entries
print("\n\nAlternate: Single-byte entries starting at offset 1024:")
for table_idx in range(6):
    base = 1024 + table_idx * 16
    if base + 16 > len(dat_data):
        break
    entries = list(dat_data[base:base+16])
    print(f"  Row {64+table_idx} (offset {base}): {entries}")

# Also try interpreting the whole region 1024-1200 as potential tables
print("\n\nFull region 1024-1199 as 16-byte rows:")
for off in range(1024, min(1200, len(dat_data)), 16):
    row = list(dat_data[off:off+16])
    print(f"  Offset {off:4d}: {row}")

# Check if RD values 1-17 appear in these tables
print("\n\nSearching for a table mapping positions 0-16 to values 0-17...")
for start in range(1024, len(dat_data) - 17):
    vals = list(dat_data[start:start+18])
    # Check if all values are in range 0-31
    if all(v <= 31 for v in vals):
        # Check if it has some variety (not all same)
        if len(set(vals)) > 8:
            print(f"  Candidate at offset {start}: {vals}")
