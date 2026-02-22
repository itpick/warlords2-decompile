#!/usr/bin/env python3
"""
Analyze ALL opcodes in PICT 30022 to see if it really has content at y=160.
Also count packbits image records and their destination rects.
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

for pict_id in [30022]:
    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == pict_id:
            pict_data = r.data
            break
    if not pict_data:
        print(f"PICT {pict_id} not found")
        continue

    # Parse PICT header
    size = struct.unpack_from('>H', pict_data, 0)[0]
    top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
    print(f"PICT {pict_id}: size_field={size}, frame=({left},{top},{right},{bottom}) = {right-left}x{bottom-top}")
    print(f"  Data length: {len(pict_data)} bytes")

    offset = 10
    version = 1
    opcode_count = 0
    packbits_count = 0

    while offset < len(pict_data) - 1:
        if version == 1:
            opcode = pict_data[offset]
            offset += 1
        else:
            if offset % 2:
                offset += 1
            if offset + 2 > len(pict_data):
                break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

        opcode_count += 1

        if opcode == 0x11:  # Version
            ver = pict_data[offset]
            offset += 1
            if ver == 2:
                version = 2
                offset += 1
            print(f"  [{opcode_count}] opcode 0x{opcode:02X}: Version {ver}")
            continue

        if opcode == 0x0C00:  # HeaderOp
            offset += 24
            print(f"  [{opcode_count}] opcode 0x{opcode:04X}: HeaderOp")
            continue

        if opcode == 0x1E:  # DefHilite
            print(f"  [{opcode_count}] opcode 0x{opcode:02X}: DefHilite")
            continue

        if opcode == 1:  # Clip
            clip_size = struct.unpack_from('>H', pict_data, offset)[0]
            clip_data = pict_data[offset:offset+clip_size]
            if clip_size >= 10:
                ct, cl, cb, cr = struct.unpack_from('>hhhh', clip_data, 2)
                print(f"  [{opcode_count}] opcode 0x{opcode:02X}: Clip region size={clip_size}, rect=({cl},{ct},{cr},{cb})")
            else:
                print(f"  [{opcode_count}] opcode 0x{opcode:02X}: Clip region size={clip_size}")
            offset += clip_size
            continue

        if opcode == 0:  # NOP
            continue

        if opcode in (3, 4, 5, 0xD, 8, 0x15, 0x16):
            offset += 2
            print(f"  [{opcode_count}] opcode 0x{opcode:02X}: 2-byte op")
            continue

        if opcode == 7:
            offset += 4
            continue

        if opcode in (9, 0xA):
            offset += 8
            continue

        if opcode == 0xB:
            offset += 4
            continue

        if opcode == 0x1A:
            continue

        if opcode in (0x18, 0x19):
            offset += 6
            continue

        if opcode == 0x20:
            offset += 8
            continue

        if opcode == 0x21:
            offset += 4
            continue

        if opcode in range(0x28, 0x2F):
            offset += 6
            continue

        if opcode in range(0x30, 0x35):
            offset += 8
            continue

        if opcode in range(0x38, 0x3C):
            continue

        if opcode in (0x98, 0x99):
            packbits_count += 1
            rr = struct.unpack_from('>H', pict_data, offset)[0]
            rb = rr & 0x3FFF
            t, l, b, r = struct.unpack_from('>hhhh', pict_data, offset + 2)
            pw, ph = r - l, b - t
            has_ctable = bool(rr & 0x8000)

            # Read destination rect (after pixmap header)
            if has_ctable:
                pm_offset = offset + 46
                nc = struct.unpack_from('>H', pict_data, pm_offset + 6)[0] + 1
                pm_offset += 8 + nc * 8
            else:
                pm_offset = offset + 10

            # Source rect (part of the opcode data, after pixmap)
            src_t, src_l, src_b, src_r = struct.unpack_from('>hhhh', pict_data, pm_offset)
            dst_t, dst_l, dst_b, dst_r = struct.unpack_from('>hhhh', pict_data, pm_offset + 8)
            mode = struct.unpack_from('>H', pict_data, pm_offset + 16)[0]

            print(f"  [{opcode_count}] opcode 0x{opcode:04X}: PackBitsRect #{packbits_count}")
            print(f"       pixmap: rowBytes={rb}, bounds=({l},{t},{r},{b}) = {pw}x{ph}, ctable={has_ctable}")
            print(f"       srcRect=({src_l},{src_t},{src_r},{src_b}), dstRect=({dst_l},{dst_t},{dst_r},{dst_b}), mode={mode}")

            # Skip the rest of this opcode (we need to parse pixel data)
            # Just count through the pixel data
            if has_ctable:
                pdata_offset = offset + 46
                nc = struct.unpack_from('>H', pict_data, pdata_offset + 6)[0] + 1
                pdata_offset += 8 + nc * 8
            else:
                pdata_offset = offset + 10

            pdata_offset += 18  # Skip src/dst rects and mode

            if opcode == 0x99:
                # maskRgn
                mask_size = struct.unpack_from('>H', pict_data, pdata_offset)[0]
                pdata_offset += mask_size

            # Parse pixel rows
            for row in range(ph):
                if rb > 250:
                    bc = struct.unpack_from('>H', pict_data, pdata_offset)[0]
                    pdata_offset += 2
                else:
                    bc = pict_data[pdata_offset]
                    pdata_offset += 1
                pdata_offset += bc

            offset = pdata_offset
            continue

        if opcode in (0xFF, 0xFFFF):
            print(f"  [{opcode_count}] opcode 0x{opcode:04X}: EndOfPicture")
            break

        # Unknown opcode handling
        if version == 2 and opcode >= 0x100:
            skip = (opcode >> 8) * 2
            print(f"  [{opcode_count}] opcode 0x{opcode:04X}: Unknown v2 opcode, skip {skip}")
            offset += skip
        elif opcode == 0xA1:
            skip = 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
            print(f"  [{opcode_count}] opcode 0x{opcode:02X}: LongComment, skip {skip}")
            offset += skip
        elif opcode == 0xA0:
            offset += 2
            print(f"  [{opcode_count}] opcode 0x{opcode:02X}: ShortComment")
        else:
            print(f"  [{opcode_count}] opcode 0x{opcode:04X}: UNKNOWN, stopping")
            break

    print(f"\n  Total opcodes: {opcode_count}, PackBitsRect images: {packbits_count}")
    if packbits_count == 1:
        print("  WARNING: Only 1 image record! Content at y=160 will be BLANK (erased).")
    elif packbits_count > 1:
        print(f"  Multiple image records found - may have content at y=160.")
