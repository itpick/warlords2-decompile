#!/usr/bin/env python3
"""Check PICT 30021 in Ice World and Mudflats terrain sets for comparison."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

BASE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain"

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

TW, TH = 40, 40

for terrain in ["Grasslands", "Ice World", "Mudflats"]:
    rsrc_path = f"{BASE}/{terrain}/..namedfork/rsrc"
    try:
        with open(rsrc_path, 'rb') as f:
            data = f.read()
    except FileNotFoundError:
        print(f"\n{terrain}: file not found")
        continue

    resources = parse_resource_fork(data)
    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 30021:
            pict_data = r.data
            break

    if not pict_data:
        print(f"\n{terrain}: PICT 30021 not found")
        continue

    result = load_pict_pixels(pict_data)
    if not result:
        print(f"\n{terrain}: failed to parse")
        continue

    pixels, width, height = result
    bg = pixels[0][0]
    max_cols = width // TW
    max_rows = height // TH

    print(f"\n{'='*60}")
    print(f"{terrain}: {width}x{height}, bg={bg}")
    print(f"{'='*60}")

    for idx in range(max_cols * max_rows):
        tc = idx % max_cols
        tr = idx // max_cols
        x0 = tc * TW
        y0 = tr * TH
        if y0 + TH > height: break

        non_bg = sum(1 for y in range(TH) for x in range(TW) if pixels[y0+y][x0+x] != bg)
        status = "ART" if non_bg > 10 else ("sparse" if non_bg > 0 else "EMPTY")

        # Quick edge check
        n = sum(1 for y in range(3) for x in range(TW) if pixels[y0+y][x0+x] != bg)
        s = sum(1 for y in range(TH-3, TH) for x in range(TW) if pixels[y0+y][x0+x] != bg)
        e = sum(1 for y in range(TH) for x in range(TW-3, TW) if pixels[y0+y][x0+x] != bg)
        w = sum(1 for y in range(TH) for x in range(3) if pixels[y0+y][x0+x] != bg)

        t = 8
        dirs = ""
        if n >= t: dirs += "N"
        if e >= t: dirs += "E"
        if s >= t: dirs += "S"
        if w >= t: dirs += "W"
        if not dirs and non_bg > 10: dirs = "isol"

        print(f"  Tile {idx:>2} ({tc},{tr}): {non_bg:>4}px {status:>6}  N={n:>3} E={e:>3} S={s:>3} W={w:>3}  {dirs}")
