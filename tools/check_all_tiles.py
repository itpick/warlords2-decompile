#!/usr/bin/env python3
"""Check ALL 32 tile positions in PICT 30021 to find S dead-end and other tiles."""
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
print(f"Sheet: {width}x{height}, bg={bg}")
print(f"Tiles: {width//40} cols x {height//40} rows = {(width//40)*(height//40)} positions")

TW, TH = 40, 40
cols = width // TW

for idx in range(32):
    tc = idx % cols; tr = idx // cols
    x0 = tc * TW; y0 = tr * TH
    if y0 + TH > height: break

    # Count non-bg pixels total and per edge (3px strips)
    total = 0
    n_strip = s_strip = e_strip = w_strip = 0
    for y in range(TH):
        for x in range(TW):
            if pixels[y0+y][x0+x] != bg:
                total += 1
                if y < 3: n_strip += 1
                if y >= TH-3: s_strip += 1
                if x >= TW-3: e_strip += 1
                if x < 3: w_strip += 1

    # Determine connections using threshold 15
    t = 15
    n = n_strip >= t; s = s_strip >= t; e = e_strip >= t; w = w_strip >= t
    dirs = ""
    if n: dirs += "N"
    if e: dirs += "E"
    if s: dirs += "S"
    if w: dirs += "W"
    if not dirs: dirs = "none"

    status = "EMPTY" if total == 0 else f"{total:4d}px"
    print(f"  Tile {idx:2d} ({tc},{tr}): {status}  N={n_strip:3d} E={e_strip:3d} S={s_strip:3d} W={w_strip:3d}  → {dirs}")

# Now print pixel center analysis for tile 8 specifically
print("\n\nDetailed tile 8 (SW candidate):")
x0, y0 = (8 % cols) * TW, (8 // cols) * TH
print("Row-by-row non-bg pixel counts:")
for y in range(TH):
    count = sum(1 for x in range(TW) if pixels[y0+y][x0+x] != bg)
    positions = [x for x in range(TW) if pixels[y0+y][x0+x] != bg]
    pos_str = f" at cols {positions}" if positions and count < 20 else ""
    bar = "#" * count + "." * (TW - count)
    print(f"  row {y:2d}: {count:2d} {bar}{pos_str}")

# Also check tile 3 (potential S dead-end)
print("\n\nDetailed tile 3 (bridge? candidate):")
x0, y0 = (3 % cols) * TW, (3 // cols) * TH
print("Row-by-row non-bg pixel counts:")
for y in range(TH):
    count = sum(1 for x in range(TW) if pixels[y0+y][x0+x] != bg)
    positions = [x for x in range(TW) if pixels[y0+y][x0+x] != bg]
    pos_str = f" at cols {positions}" if positions and count < 20 else ""
    bar = "#" * count + "." * (TW - count)
    print(f"  row {y:2d}: {count:2d} {bar}{pos_str}")
