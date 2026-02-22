#!/usr/bin/env python3
"""
Quick check: is PICT 30021 tile position 0 (pixels 0-39 x 0-39) empty or has road content?
Also verify the raw PICT data to check for PixMap origin offset.
"""
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

# Parse to find PixMap bounds
print(f"PICT size: {len(pict_data)} bytes")
frame = struct.unpack_from('>hhhh', pict_data, 2)
print(f"PICT frame: top={frame[0]}, left={frame[1]}, bottom={frame[2]}, right={frame[3]}")

# Walk opcodes to find PackBitsRect
offset = 10
version = 1
while offset < len(pict_data) - 1:
    if version == 1:
        opcode = pict_data[offset]
        offset += 1
    else:
        if offset % 2: offset += 1
        opcode = struct.unpack_from('>H', pict_data, offset)[0]
        offset += 2

    if opcode == 0x11:
        ver = pict_data[offset]; offset += 1
        if ver == 2: version = 2; offset += 1
        continue
    if opcode == 0x0C00: offset += 24; continue
    if opcode == 0x1E: continue
    if opcode == 0x01:
        offset += struct.unpack_from('>H', pict_data, offset)[0]; continue
    if opcode == 0x00: continue
    if opcode in (3,4,5,0xD,8,0x15,0x16): offset += 2; continue
    if opcode == 7: offset += 4; continue
    if opcode in (9,0xA): offset += 8; continue
    if opcode == 0xB: offset += 4; continue
    if opcode == 0x1A: continue
    if opcode in (0x18, 0x19): offset += 6; continue

    if opcode == 0x98:
        print(f"\nPackBitsRect at offset {offset}")
        rowBytes_raw = struct.unpack_from('>H', pict_data, offset)[0]
        rowBytes = rowBytes_raw & 0x3FFF
        is_pixmap = (rowBytes_raw & 0x8000) != 0
        print(f"rowBytes: {rowBytes} (raw 0x{rowBytes_raw:04X}), isPixmap: {is_pixmap}")

        bounds = struct.unpack_from('>hhhh', pict_data, offset + 2)
        print(f"PixMap bounds: top={bounds[0]}, left={bounds[1]}, bottom={bounds[2]}, right={bounds[3]}")
        pm_width = bounds[3] - bounds[1]
        pm_height = bounds[2] - bounds[0]
        print(f"PixMap size: {pm_width}x{pm_height}")

        if is_pixmap:
            pixelSize = struct.unpack_from('>H', pict_data, offset + 28)[0]
            print(f"pixelSize: {pixelSize}")
            offset += 46

            ct_size = struct.unpack_from('>H', pict_data, offset + 6)[0]
            num_colors = ct_size + 1
            print(f"CLUT: {num_colors} colors")
            offset += 8 + num_colors * 8

        src = struct.unpack_from('>hhhh', pict_data, offset)
        print(f"srcRect: {src}")
        offset += 8
        dst = struct.unpack_from('>hhhh', pict_data, offset)
        print(f"dstRect: {dst}")
        offset += 8
        mode = struct.unpack_from('>H', pict_data, offset)[0]
        print(f"mode: {mode}")
        offset += 2

        # Now decompress first row to check pixel 0
        if rowBytes > 250:
            byteCount = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2
        else:
            byteCount = pict_data[offset]
            offset += 1

        row_end = offset + byteCount
        unpacked = bytearray()
        while offset < row_end:
            flag = struct.unpack_from('>b', pict_data, offset)[0]
            offset += 1
            if flag >= 0:
                count = flag + 1
                unpacked.extend(pict_data[offset:offset+count])
                offset += count
            elif flag != -128:
                count = -flag + 1
                val = pict_data[offset]
                offset += 1
                unpacked.extend([val] * count)

        print(f"\nRow 0 first 80 pixels (palette indices):")
        print(f"  Tile 0 area (cols 0-39):  {list(unpacked[0:40])}")
        print(f"  Tile 1 area (cols 40-79): {list(unpacked[40:80])}")

        bg = unpacked[0]
        print(f"\nBackground index: {bg}")

        # Count non-bg pixels in first two tiles
        tile0_road = sum(1 for p in unpacked[0:40] if p != bg)
        tile1_road = sum(1 for p in unpacked[40:80] if p != bg)
        print(f"Row 0 - Tile 0 non-bg pixels: {tile0_road}")
        print(f"Row 0 - Tile 1 non-bg pixels: {tile1_road}")

        # Decompress remaining rows and check center rows (14-23) for horizontal road
        for skip_row in range(1, 40):
            if rowBytes > 250:
                bc = struct.unpack_from('>H', pict_data, offset)[0]
                offset += 2
            else:
                bc = pict_data[offset]
                offset += 1

            re = offset + bc
            un = bytearray()
            while offset < re:
                flag = struct.unpack_from('>b', pict_data, offset)[0]
                offset += 1
                if flag >= 0:
                    count = flag + 1
                    un.extend(pict_data[offset:offset+count])
                    offset += count
                elif flag != -128:
                    count = -flag + 1
                    val = pict_data[offset]
                    offset += 1
                    un.extend([val] * count)

            if skip_row in (15, 16, 17, 18, 19, 20):
                t0 = sum(1 for p in un[0:40] if p != bg)
                t1 = sum(1 for p in un[40:80] if p != bg)
                print(f"Row {skip_row:2d} - Tile 0 non-bg: {t0:3d}, Tile 1 non-bg: {t1:3d}  "
                      f"(tile0 first 10: {list(un[0:10])}, tile1 first 10: {list(un[40:50])})")

        break

    if opcode in (0xFF, 0xFFFF): break
    if version == 2 and opcode >= 0x100:
        offset += (opcode >> 8) * 2; continue
    if opcode == 0xA1:
        offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]; continue
    if opcode == 0xA0:
        offset += 2; continue
    break
