#!/usr/bin/env python3
"""
Check the background pixel of ATRANS2 (30010) and terrain tiles (30000)
to see if they also use index 146 / 0xEF gray or something else for transparency.
"""
import struct
import sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def unpack_packbits_row(data, offset, row_bytes):
    result = bytearray()
    while len(result) < row_bytes and offset < len(data):
        flag = data[offset]
        offset += 1
        if flag < 128:
            count = flag + 1
            result.extend(data[offset:offset + count])
            offset += count
        elif flag > 128:
            count = 257 - flag
            if offset < len(data):
                result.extend([data[offset]] * count)
                offset += 1
    return bytes(result[:row_bytes]), offset

with open(RSRC_PATH, 'rb') as f:
    rsrc_data = f.read()

resources = parse_resource_fork(rsrc_data)

# Check ATRANS2 (30010) and A0 (30000 - base terrain tiles)
for target_id in [30010, 30000, 30009]:
    target = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == target_id:
            target = r
            break

    if not target:
        print(f"PICT {target_id} not found")
        continue

    data = target.data
    print(f"\n{'='*70}")
    print(f"PICT {target_id} ({target.name}) - {target.data_size} bytes")
    print(f"{'='*70}")

    # Get bounding rect
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 2)
    print(f"Bounding rect: ({left},{top},{right},{bottom}) = {right-left}x{bottom-top}")

    # Find PackBitsRect opcode
    for search_off in range(0x30, min(len(data) - 2, 0x200)):
        test_op = struct.unpack_from('>H', data, search_off)[0]
        if test_op == 0x0098:
            offset = search_off + 2

            # Parse PixMap
            rowbytes_raw = struct.unpack_from('>H', data, offset)[0]
            rowbytes = rowbytes_raw & 0x3FFF
            is_pixmap = bool(rowbytes_raw & 0x8000)

            bounds_top, bounds_left, bounds_bottom, bounds_right = struct.unpack_from('>hhhh', data, offset + 2)
            width = bounds_right - bounds_left
            height = bounds_bottom - bounds_top

            if is_pixmap:
                pixel_size = struct.unpack_from('>H', data, offset + 28)[0]
                offset += 46  # skip pixmap

                # Parse CLUT
                ct_seed = struct.unpack_from('>I', data, offset)[0]
                ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
                ct_size = struct.unpack_from('>H', data, offset + 6)[0]
                num_entries = ct_size + 1

                print(f"PixMap: {width}x{height}, {pixel_size}-bit, rowBytes={rowbytes}")
                print(f"CLUT: {num_entries} entries, seed=0x{ct_seed:08X}")

                # Read CLUT
                clut = []
                off = offset + 8
                for i in range(num_entries):
                    val = struct.unpack_from('>H', data, off)[0]
                    r = struct.unpack_from('>H', data, off + 2)[0]
                    g = struct.unpack_from('>H', data, off + 4)[0]
                    b = struct.unpack_from('>H', data, off + 6)[0]
                    clut.append((r, g, b))
                    off += 8

                offset = off

                # Skip src rect, dst rect, mode
                offset += 8 + 8 + 2

                # Decompress first few rows
                rows = []
                for row in range(min(height, 5)):
                    if rowbytes > 250:
                        packed = struct.unpack_from('>H', data, offset)[0]
                        offset += 2
                    else:
                        packed = data[offset]
                        offset += 1

                    unpacked, _ = unpack_packbits_row(data[offset:offset + packed + 128], 0, rowbytes)
                    rows.append(unpacked)
                    offset += packed

                if rows:
                    # Sample corners
                    for px, py, desc in [(0, 0, "top-left"), (width-1, 0, "top-right")]:
                        if py < len(rows) and px < len(rows[py]):
                            idx = rows[py][px]
                            if idx < len(clut):
                                r, g, b = clut[idx]
                                r8, g8, b8 = r >> 8, g >> 8, b >> 8
                                print(f"  Pixel ({px},{py}) [{desc}]: index={idx} -> RGB8=({r8:02X},{g8:02X},{b8:02X})")

                    # Check if index 146 exists and what color it is
                    if pixel_size == 8 and len(clut) > 146:
                        r, g, b = clut[146]
                        r8, g8, b8 = r >> 8, g >> 8, b >> 8
                        print(f"  CLUT[146]: RGB8=({r8:02X},{g8:02X},{b8:02X})")

                    # Check index 15 (magenta?)
                    if len(clut) > 15:
                        r, g, b = clut[15]
                        r8, g8, b8 = r >> 8, g >> 8, b >> 8
                        print(f"  CLUT[15]: RGB8=({r8:02X},{g8:02X},{b8:02X})")

                    # Count most common in row 0
                    from collections import Counter
                    if pixel_size == 8:
                        c = Counter(rows[0][:width])
                        most = c.most_common(3)
                        print(f"  Most common pixels in row 0:")
                        for val, count in most:
                            if val < len(clut):
                                r, g, b = clut[val]
                                r8, g8, b8 = r >> 8, g >> 8, b >> 8
                                print(f"    Index {val}: {count} pixels -> RGB8=({r8:02X},{g8:02X},{b8:02X})")
                    elif pixel_size == 4:
                        # 4-bit: 2 pixels per byte
                        pixels = []
                        for byte in rows[0][:rowbytes]:
                            pixels.append((byte >> 4) & 0x0F)
                            pixels.append(byte & 0x0F)
                        pixels = pixels[:width]
                        c = Counter(pixels)
                        most = c.most_common(3)
                        print(f"  Most common pixels in row 0 ({pixel_size}-bit):")
                        for val, count in most:
                            if val < len(clut):
                                r, g, b = clut[val]
                                r8, g8, b8 = r >> 8, g >> 8, b >> 8
                                print(f"    Index {val}: {count} pixels -> RGB8=({r8:02X},{g8:02X},{b8:02X})")
            else:
                # 1-bit bitmap
                print(f"1-bit bitmap: {width}x{height}, rowBytes={rowbytes}")
                offset += 10 + 8 + 8 + 2  # pixmap + src + dst + mode

            break
