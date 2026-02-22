#!/usr/bin/env python3
"""Analyze PICT 30021 opcodes specifically."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

pict_data = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data = r.data
        break

if not pict_data:
    print("PICT 30021 not found!")
    sys.exit(1)

print(f"PICT 30021: {len(pict_data)} bytes")
size_field = struct.unpack_from('>H', pict_data, 0)[0]
top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
print(f"Size field: {size_field}")
print(f"Frame: ({left},{top},{right},{bottom}) = {right-left}x{bottom-top}")

offset = 10
version = 1
opcode_count = 0
while offset < len(pict_data) - 1:
    if version == 1:
        opcode = pict_data[offset]; offset += 1
    else:
        if offset % 2: offset += 1
        if offset + 2 > len(pict_data): break
        opcode = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2

    opcode_count += 1
    if opcode == 0x11:
        ver = pict_data[offset]; offset += 1
        if ver == 2: version = 2; offset += 1
        print(f"  [{opcode_count}] Version {ver}")
        continue
    if opcode == 0x0C00:
        hdr_ver = struct.unpack_from('>H', pict_data, offset)[0]
        print(f"  [{opcode_count}] HeaderOp ver={hdr_ver}")
        offset += 24
        continue
    if opcode == 0x1E:
        print(f"  [{opcode_count}] DefHilite")
        continue
    if opcode == 1:
        clip_size = struct.unpack_from('>H', pict_data, offset)[0]
        if clip_size >= 10:
            ct, cl, cb, cr = struct.unpack_from('>hhhh', pict_data, offset+2)
            print(f"  [{opcode_count}] Clip size={clip_size} rect=({cl},{ct},{cr},{cb})")
        offset += clip_size
        continue
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
        has_ct = bool(rr & 0x8000)
        t,l,b,r = struct.unpack_from('>hhhh', pict_data, offset+2)
        pw, ph = r-l, b-t

        if has_ct:
            pxSize = struct.unpack_from('>H', pict_data, offset+28)[0]
            pm_off = offset + 46
            nc = struct.unpack_from('>H', pict_data, pm_off+6)[0]+1
            pm_off += 8 + nc*8
        else:
            pxSize = 1
            pm_off = offset + 10

        st,sl,sb,sr = struct.unpack_from('>hhhh', pict_data, pm_off)
        dt,dl,db,dr = struct.unpack_from('>hhhh', pict_data, pm_off+8)
        mode = struct.unpack_from('>H', pict_data, pm_off+16)[0]

        print(f"  [{opcode_count}] PackBits{'Rgn' if opcode==0x99 else 'Rect'} (0x{opcode:04X})")
        print(f"    rowBytes={rb}, has_ctable={has_ct}, pixelSize={pxSize}")
        print(f"    bounds=({l},{t},{r},{b}) = {pw}x{ph}")
        print(f"    srcRect=({sl},{st},{sr},{sb})")
        print(f"    dstRect=({dl},{dt},{dr},{db})")
        print(f"    mode={mode}")
        if has_ct:
            print(f"    CLUT entries: {nc}")

        # Skip pixel data
        skip_off = pm_off + 18
        if opcode == 0x99:
            rgn_size = struct.unpack_from('>H', pict_data, skip_off)[0]
            skip_off += rgn_size
        for row in range(ph):
            if rb > 250:
                bc = struct.unpack_from('>H', pict_data, skip_off)[0]; skip_off += 2
            else:
                bc = pict_data[skip_off]; skip_off += 1
            skip_off += bc
        offset = skip_off
        continue

    if opcode in (0xFF, 0xFFFF):
        print(f"  [{opcode_count}] EndOfPicture")
        break

    if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
    elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
    elif opcode == 0xA0: offset += 2
    else:
        print(f"  [{opcode_count}] UNKNOWN 0x{opcode:04X}, stopping")
        break

print(f"\nTotal opcodes: {opcode_count}")
