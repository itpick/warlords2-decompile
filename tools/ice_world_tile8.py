#!/usr/bin/env python3
"""Quick check of Ice World tile 8 to understand the 1600px tiles."""
import struct, sys, os
from collections import Counter
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

rsrc_path = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Ice World/..namedfork/rsrc"

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
                offset += 8
                palette = []
                for i in range(nc):
                    cr = struct.unpack_from('>H', pict_data, offset+2)[0] >> 8
                    cg = struct.unpack_from('>H', pict_data, offset+4)[0] >> 8
                    cb = struct.unpack_from('>H', pict_data, offset+6)[0] >> 8
                    palette.append((cr, cg, cb))
                    offset += 8
            else: palette = []; offset += 10
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
            return px, pw, ph, palette
        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None

with open(rsrc_path, 'rb') as f:
    data = f.read()
for r in parse_resource_fork(data):
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data = r.data; break

pixels, width, height, palette = load_pict_pixels(pict_data)
bg = pixels[0][0]
print(f"Ice World PICT 30021: {width}x{height}, bg index={bg}")
print(f"Palette has {len(palette)} entries")
if bg < len(palette):
    print(f"Palette[{bg}] = {palette[bg]}")
else:
    print(f"Palette[{bg}] = OUT OF RANGE")

# Check what value tile 8 has (should be all one value)
TW, TH = 40, 40
for tile_idx in [0, 7, 8, 15, 16, 22, 23]:
    tc = tile_idx % 16
    tr = tile_idx // 16
    x0 = tc * TW
    y0 = tr * TH
    counts = Counter()
    for y in range(TH):
        for x in range(TW):
            counts[pixels[y0+y][x0+x]] += 1
    print(f"\nTile {tile_idx} ({tc},{tr}):")
    for v, c in counts.most_common(5):
        pct = 100*c/1600
        color = palette[v] if v < len(palette) else (0,0,0)
        print(f"  idx={v}: {c} px ({pct:.0f}%) color=RGB({color[0]:02X},{color[1]:02X},{color[2]:02X})")
