#!/usr/bin/env python3
"""Check if tiles 14+15 form a single NS road pair spanning the boundary."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def load_pict_pixels(pict_data):
    if len(pict_data) < 10: return None
    offset = 10; version = 1
    while offset < len(pict_data) - 1:
        if version == 1: opcode = pict_data[offset]; offset += 1
        else:
            if offset % 2: offset += 1
            if offset + 2 > len(pict_data): break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2
        if opcode == 0x11:
            ver = pict_data[offset]; offset += 1
            if ver == 2: version = 2; offset += 1
            continue
        if opcode == 0x0C00: offset += 24; continue
        if opcode == 0x1E: continue
        if opcode == 1: offset += struct.unpack_from('>H', pict_data, offset)[0]; continue
        if opcode == 0: continue
        if opcode in (3,4,5,0xD,8,0x15,0x16): offset += 2; continue
        if opcode == 7: offset += 4; continue
        if opcode in (9,0xA): offset += 8; continue
        if opcode == 0xB: offset += 4; continue
        if opcode == 0x1A: continue
        if opcode in (0x18,0x19): offset += 6; continue
        if opcode == 0x20: offset += 8; continue
        if opcode == 0x21: offset += 4; continue
        if opcode in range(0x28,0x2F): offset += 6; continue
        if opcode in range(0x30,0x35): offset += 8; continue
        if opcode in range(0x38,0x3C): continue
        if opcode in (0x98, 0x99):
            rr = struct.unpack_from('>H', pict_data, offset)[0]
            rb = rr & 0x3FFF
            t,l,b,r = struct.unpack_from('>hhhh', pict_data, offset+2)
            pw, ph = r-l, b-t
            if rr & 0x8000:
                offset += 46
                nc = struct.unpack_from('>H', pict_data, offset+6)[0]+1
                offset += 8 + nc*8
            else: offset += 10
            offset += 18
            if opcode == 0x99: offset += struct.unpack_from('>H', pict_data, offset)[0]
            px = [[0]*pw for _ in range(ph)]
            for row in range(ph):
                if rb > 250: bc = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2
                else: bc = pict_data[offset]; offset += 1
                re = offset + bc; un = bytearray()
                while offset < re:
                    f = struct.unpack_from('>b', pict_data, offset)[0]; offset += 1
                    if f >= 0: c = f+1; un.extend(pict_data[offset:offset+c]); offset += c
                    elif f != -128: c = -f+1; v = pict_data[offset]; offset += 1; un.extend([v]*c)
                for x in range(min(pw, len(un))): px[row][x] = un[x]
            return px, pw, ph
        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
for r in parse_resource_fork(data):
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data = r.data; break

pixels, width, height = load_pict_pixels(pict_data)
bg = pixels[0][0]

# Look at pixel column 39 of tile 14 (x=599) and column 0 of tile 15 (x=600)
# to see if road content is continuous across the boundary
print("Checking pixels at x=599 (last col of tile 14) and x=600 (first col of tile 15):")
print()
print(f"{'Row':>3}  x=596 x=597 x=598 x=599 | x=600 x=601 x=602 x=603")
for y in range(40):
    vals = []
    for x in [596, 597, 598, 599, 600, 601, 602, 603]:
        v = pixels[y][x]
        vals.append(f" {v:>3} " if v != bg else "  .  ")
    print(f"{y:>3}  {''.join(vals[:4])} | {''.join(vals[4:])}")

# Also check: is tile 14 (col=14) an NS road with some W connection?
# Let's look at its right edge (should have road pixels all the way down)
print("\nTile 14 right edge (x=599):")
r_edge = [pixels[y][599] for y in range(40)]
non_bg_rows = [y for y in range(40) if r_edge[y] != bg]
print(f"  Non-bg rows: {non_bg_rows}")
print(f"  Count: {len(non_bg_rows)} / 40")

# And tile 15 left edge (x=600)
print("\nTile 15 left edge (x=600):")
l_edge = [pixels[y][600] for y in range(40)]
non_bg_rows = [y for y in range(40) if l_edge[y] != bg]
print(f"  Non-bg rows: {non_bg_rows}")
print(f"  Count: {len(non_bg_rows)} / 40")

# Check tile 14 left edge (x=560) for W connection
print("\nTile 14 left edge (x=560):")
l_edge14 = [pixels[y][560] for y in range(40)]
non_bg_rows = [y for y in range(40) if l_edge14[y] != bg]
print(f"  Non-bg rows: {non_bg_rows}")
print(f"  Count: {len(non_bg_rows)} / 40")

# Key question: is tile 14 a standalone road (NS + small W artifact)?
# Or is tile 14+15 together forming a single road?
print("\n\nTile 14 internal structure:")
print("  Columns with consistent road content (vertically):")
for x in range(40):
    abs_x = 560 + x
    col_vals = [pixels[y][abs_x] for y in range(40)]
    non_bg = sum(1 for v in col_vals if v != bg)
    if non_bg > 20:
        print(f"    col {x} (abs {abs_x}): {non_bg}/40 non-bg")

print("\nTile 15 internal structure:")
print("  Columns with ANY road content:")
for x in range(40):
    abs_x = 600 + x
    col_vals = [pixels[y][abs_x] for y in range(40)]
    non_bg = sum(1 for v in col_vals if v != bg)
    if non_bg > 0:
        print(f"    col {x} (abs {abs_x}): {non_bg}/40 non-bg")

# Final check: combined horizontal pixel density for tile 14+15 as one 80x40 tile
print("\n\nHorizontal pixel density across tile 14+15 (80 columns):")
for y in [0, 5, 10, 13, 15, 17, 19, 20, 25, 30, 35, 39]:
    line = ""
    for x in range(560, 640):
        v = pixels[y][x]
        line += "#" if v != bg else "."
    print(f"  row {y:2d}: {line}")
