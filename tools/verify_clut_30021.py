#!/usr/bin/env python3
"""
Verify the CLUT parsing for PICT 30021, and dump all 256 entries with sequential indices.
Also print what CLUT entry 15 (magenta) and 146 (background) look like.
"""
import struct
import sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

with open(RSRC_PATH, 'rb') as f:
    rsrc_data = f.read()

resources = parse_resource_fork(rsrc_data)
target = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        target = r
        break

data = target.data

# Find the CLUT - it starts after the PackBitsRect opcode + pixmap
# From the previous run, PackBitsRect is at offset 0x0042
# opcode(2) + pixmap(46) = offset 0x0042 + 2 + 46 = 0x0072
# CLUT starts there

# Let's find it more carefully
# The PackBitsRect opcode is at offset 0x42 in the PICT data
offset = 0x42
op = struct.unpack_from('>H', data, offset)[0]
print(f"Opcode at 0x{offset:04X}: 0x{op:04X}")
assert op == 0x0098, f"Expected 0x0098, got 0x{op:04X}"

offset += 2  # skip opcode

# PixMap: rowBytes(2) + bounds(8) + pixmap fields(36) = 46
rowbytes_raw = struct.unpack_from('>H', data, offset)[0]
print(f"rowBytes raw: 0x{rowbytes_raw:04X} -> rowBytes={rowbytes_raw & 0x3FFF}, isPixMap={bool(rowbytes_raw & 0x8000)}")

# Skip the full pixmap (46 bytes)
offset += 46
print(f"CLUT starts at offset 0x{offset:04X}")

# Parse CLUT header
ct_seed = struct.unpack_from('>I', data, offset)[0]
ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
ct_size = struct.unpack_from('>H', data, offset + 6)[0]
num_entries = ct_size + 1

print(f"CLUT seed: 0x{ct_seed:08X}")
print(f"CLUT flags: 0x{ct_flags:04X}")
print(f"  bit 15 (device table): {bool(ct_flags & 0x8000)}")
print(f"  -> If device table, 'value' field = sequence index, color is at that position")
print(f"  -> If NOT device table, 'value' field = pixel value that maps to this color")
print(f"CLUT size: {ct_size} (= {num_entries} entries)")

# Dump raw bytes of first few and key entries
off = offset + 8
print(f"\n{'='*80}")
print(f"FULL COLOR TABLE ({num_entries} entries)")
print(f"{'='*80}")
print(f"{'Seq':>4} {'Value':>6}  {'R16':>6} {'G16':>6} {'B16':>6}  {'R8':>4} {'G8':>4} {'B8':>4}  Note")
print(f"{'---':>4} {'-----':>6}  {'---':>6} {'---':>6} {'---':>6}  {'--':>4} {'--':>4} {'--':>4}  ----")

clut_colors = []  # sequential list of (r16, g16, b16)

for i in range(num_entries):
    entry_off = off + i * 8
    val = struct.unpack_from('>H', data, entry_off)[0]
    r = struct.unpack_from('>H', data, entry_off + 2)[0]
    g = struct.unpack_from('>H', data, entry_off + 4)[0]
    b = struct.unpack_from('>H', data, entry_off + 6)[0]
    r8 = r >> 8
    g8 = g >> 8
    b8 = b >> 8
    clut_colors.append((r, g, b))

    note = ""
    if r == 0xFFFF and g == 0xFFFF and b == 0xFFFF:
        note = "WHITE"
    elif r == 0 and g == 0 and b == 0:
        note = "BLACK"
    elif r == 0xFFFF and g == 0 and b == 0xFFFF:
        note = "MAGENTA (classic transparency key!)"
    elif r8 == 0xEF and g8 == 0xEF and b8 == 0xEF:
        note = "LIGHT GRAY 0xEF ** BACKGROUND **"
    elif r == g == b:
        note = f"gray-{r8}"

    print(f"{i:4d} {val:6d}  {r:6X} {g:6X} {b:6X}  0x{r8:02X} 0x{g8:02X} 0x{b8:02X}  {note}")

# Highlight key findings
print(f"\n{'='*80}")
print("KEY FINDINGS")
print(f"{'='*80}")
print(f"Entry  0 (index 0): RGB8 = ({clut_colors[0][0]>>8:02X}, {clut_colors[0][1]>>8:02X}, {clut_colors[0][2]>>8:02X})")
print(f"Entry 15 (index 15): RGB8 = ({clut_colors[15][0]>>8:02X}, {clut_colors[15][1]>>8:02X}, {clut_colors[15][2]>>8:02X})")
print(f"Entry 146 (index 146): RGB8 = ({clut_colors[146][0]>>8:02X}, {clut_colors[146][1]>>8:02X}, {clut_colors[146][2]>>8:02X})")
print(f"Entry 255 (index 255): RGB8 = ({clut_colors[255][0]>>8:02X}, {clut_colors[255][1]>>8:02X}, {clut_colors[255][2]>>8:02X})")

# Also check the other PICT resources to see if they use the same background
print(f"\n{'='*80}")
print("CHECKING BACKGROUND OF OTHER PICTs FOR COMPARISON")
print(f"{'='*80}")

for r in sorted(resources, key=lambda x: x.res_id):
    if r.type_str != 'PICT':
        continue
    if r.res_id not in [30000, 30009, 30010, 30011, 30022]:
        continue

    pdata = r.data
    # Quick check: find PackBitsRect
    for search_off in range(0x30, min(len(pdata) - 2, 0x100)):
        test_op = struct.unpack_from('>H', pdata, search_off)[0]
        if test_op == 0x0098:
            # Found it - skip opcode + pixmap (48 bytes) to get to CLUT
            clut_off = search_off + 2 + 46
            if clut_off + 8 <= len(pdata):
                cs = struct.unpack_from('>I', pdata, clut_off)[0]
                cf = struct.unpack_from('>H', pdata, clut_off + 4)[0]
                csz = struct.unpack_from('>H', pdata, clut_off + 6)[0]
                print(f"  PICT {r.res_id} ({r.name}): CLUT seed=0x{cs:08X} flags=0x{cf:04X} entries={csz+1}")

                # Check if same seed
                if cs == ct_seed:
                    print(f"    -> SAME CLUT seed as PICT 30021!")
                else:
                    print(f"    -> Different CLUT seed")
            break
