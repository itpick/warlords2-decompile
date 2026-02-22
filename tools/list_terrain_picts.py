#!/usr/bin/env python3
"""List all PICT resources in the Grasslands terrain file and show their dimensions."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def get_pict_dimensions(pict_data):
    """Extract dimensions from PICT header."""
    if len(pict_data) < 10:
        return None
    # PICT frame is at bytes 2-9 (top, left, bottom, right)
    top = struct.unpack_from('>h', pict_data, 2)[0]
    left = struct.unpack_from('>h', pict_data, 4)[0]
    bottom = struct.unpack_from('>h', pict_data, 6)[0]
    right = struct.unpack_from('>h', pict_data, 8)[0]
    return (right - left, bottom - top)

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()

resources = parse_resource_fork(data)

print("All resources in Grasslands terrain file:")
print(f"{'Type':>6} {'ID':>6} {'Name':>20} {'Size':>8} {'Dimensions':>15}")
print("-" * 70)

pict_resources = []
for r in sorted(resources, key=lambda x: (x.type_str, x.res_id)):
    extra = ""
    if r.type_str == 'PICT':
        dims = get_pict_dimensions(r.data)
        if dims:
            extra = f"{dims[0]}x{dims[1]}"
        pict_resources.append(r)
    print(f"{r.type_str:>6} {r.res_id:>6} {'':>20} {len(r.data):>8} {extra:>15}")

# For each PICT, try to identify what it contains based on size/dimensions
print("\n\nPICT Analysis:")
print(f"{'ID':>6} {'W':>5} {'H':>5} {'Tiles(40px)':>12} {'DataSize':>10}")
print("-" * 50)
for r in pict_resources:
    dims = get_pict_dimensions(r.data)
    if dims:
        w, h = dims
        tcols = w // 40
        trows = h // 40
        total_tiles = tcols * trows
        print(f"{r.res_id:>6} {w:>5} {h:>5} {tcols}x{trows}={total_tiles:<4} {len(r.data):>10}")
