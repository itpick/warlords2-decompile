#!/usr/bin/env python3
"""
Analyze PICT 30021 (road sprite sheet) from the Grasslands resource fork.
Determine the exact background/transparency color, CLUT, and pixel format.
"""

import struct
import sys
import os

# Add parent dir to path so we can import parse_resource_fork
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def parse_pict_opcodes(data):
    """Parse PICT v2 opcodes and extract pixel data info."""
    if len(data) < 12:
        print(f"  PICT data too short: {len(data)} bytes")
        return

    # PICT header
    # Bytes 0-1: size (v1) or 0x0000 (v2)
    size_field = struct.unpack_from('>H', data, 0)[0]
    print(f"  Size field: 0x{size_field:04X} ({size_field})")

    # Bytes 2-9: bounding rect (top, left, bottom, right)
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 2)
    print(f"  Bounding rect: top={top}, left={left}, bottom={bottom}, right={right}")
    print(f"  Image dimensions: {right - left} x {bottom - top}")

    offset = 10

    # Check for PICT v2 header
    if offset + 2 <= len(data):
        op = struct.unpack_from('>H', data, offset)[0]
        if op == 0x0011:  # Version opcode
            offset += 2
            if offset + 2 <= len(data):
                version = struct.unpack_from('>H', data, offset)[0]
                print(f"  Version opcode: 0x0011, version = 0x{version:04X}")
                if version == 0x02FF:
                    print(f"  -> PICT Version 2")
                    offset += 2
                else:
                    print(f"  -> PICT Version 1 (version byte: {version})")
                    offset += 2
        else:
            print(f"  First opcode: 0x{op:04X} (not version opcode)")

    # Now walk through opcodes looking for pixel data
    clut_found = False
    pixel_data_found = False
    opcode_count = 0
    max_opcodes = 500

    while offset < len(data) - 1 and opcode_count < max_opcodes:
        # PICT v2 opcodes are word-aligned
        if offset % 2 != 0:
            offset += 1  # pad byte

        if offset + 2 > len(data):
            break

        op = struct.unpack_from('>H', data, offset)[0]
        opcode_count += 1

        if op == 0x00FF:
            print(f"  [offset 0x{offset:04X}] OpEndPic (0x00FF)")
            break

        elif op == 0x0C00:
            print(f"  [offset 0x{offset:04X}] HeaderOp (0x0C00)")
            if offset + 26 <= len(data):
                hdr_version = struct.unpack_from('>H', data, offset + 2)[0]
                # Reserved1(2), hRes(4), vRes(4), srcRect(8), reserved2(4)
                print(f"    Header version: 0x{hdr_version:04X}")
                if offset + 26 <= len(data):
                    hres = struct.unpack_from('>I', data, offset + 6)[0]
                    vres = struct.unpack_from('>I', data, offset + 10)[0]
                    ot, ol, ob, ore = struct.unpack_from('>hhhh', data, offset + 14)
                    print(f"    hRes: 0x{hres:08X} ({hres / 65536.0:.1f} dpi)")
                    print(f"    vRes: 0x{vres:08X} ({vres / 65536.0:.1f} dpi)")
                    print(f"    Optimal src rect: ({ol},{ot},{ore},{ob})")
            offset += 26

        elif op == 0x001E:
            print(f"  [offset 0x{offset:04X}] DefHilite (0x001E)")
            offset += 2

        elif op == 0x0001:
            # Clip region
            if offset + 4 <= len(data):
                rgn_size = struct.unpack_from('>H', data, offset + 2)[0]
                print(f"  [offset 0x{offset:04X}] Clip (0x0001) region size={rgn_size}")
                if rgn_size >= 10 and offset + 4 + 8 <= len(data):
                    ct, cl, cb, cr = struct.unpack_from('>hhhh', data, offset + 4)
                    print(f"    Clip rect: ({cl},{ct},{cr},{cb})")
                offset += 2 + rgn_size
            else:
                offset += 2

        elif op == 0x0098:
            # PackBitsRect - 8-bit indexed color with CLUT
            print(f"  [offset 0x{offset:04X}] PackBitsRect (0x0098) - INDEXED COLOR with CLUT")
            offset = parse_packbits_rect(data, offset)
            pixel_data_found = True

        elif op == 0x0099:
            # PackBitsRgn - same but with region
            print(f"  [offset 0x{offset:04X}] PackBitsRgn (0x0099) - INDEXED COLOR with CLUT + region")
            offset = parse_packbits_rect(data, offset, has_region=True)
            pixel_data_found = True

        elif op == 0x009A:
            # DirectBitsRect - 16/32-bit direct color
            print(f"  [offset 0x{offset:04X}] DirectBitsRect (0x009A) - DIRECT COLOR")
            offset = parse_directbits_rect(data, offset)
            pixel_data_found = True

        elif op == 0x009B:
            # DirectBitsRgn - direct color with region
            print(f"  [offset 0x{offset:04X}] DirectBitsRgn (0x009B) - DIRECT COLOR + region")
            offset = parse_directbits_rect(data, offset, has_region=True)
            pixel_data_found = True

        elif op == 0x0090:
            # BitsRect (1-bit)
            print(f"  [offset 0x{offset:04X}] BitsRect (0x0090) - 1-bit bitmap")
            offset = parse_bits_rect(data, offset)
            pixel_data_found = True

        elif op == 0x0091:
            # BitsRgn (1-bit with region)
            print(f"  [offset 0x{offset:04X}] BitsRgn (0x0091) - 1-bit bitmap + region")
            offset = parse_bits_rect(data, offset, has_region=True)
            pixel_data_found = True

        elif op == 0x00A1:
            # LongComment
            if offset + 6 <= len(data):
                kind = struct.unpack_from('>H', data, offset + 2)[0]
                dlen = struct.unpack_from('>H', data, offset + 4)[0]
                print(f"  [offset 0x{offset:04X}] LongComment (0x00A1) kind={kind} len={dlen}")
                offset += 6 + dlen
                if offset % 2 != 0:
                    offset += 1
            else:
                offset += 2

        elif op == 0x00A0:
            # ShortComment
            if offset + 4 <= len(data):
                kind = struct.unpack_from('>H', data, offset + 2)[0]
                print(f"  [offset 0x{offset:04X}] ShortComment (0x00A0) kind={kind}")
                offset += 4
            else:
                offset += 2

        elif op == 0x0000:
            # NOP
            offset += 2

        elif op == 0x001F:
            # OpColor
            if offset + 8 <= len(data):
                r, g, b = struct.unpack_from('>HHH', data, offset + 2)
                print(f"  [offset 0x{offset:04X}] OpColor (0x001F) RGB=({r:04X},{g:04X},{b:04X})")
                offset += 8
            else:
                offset += 2

        elif op == 0x001A:
            # RGBFgCol
            if offset + 8 <= len(data):
                r, g, b = struct.unpack_from('>HHH', data, offset + 2)
                print(f"  [offset 0x{offset:04X}] RGBFgCol (0x001A) RGB=({r:04X},{g:04X},{b:04X})")
                offset += 8
            else:
                offset += 2

        elif op == 0x001B:
            # RGBBkCol
            if offset + 8 <= len(data):
                r, g, b = struct.unpack_from('>HHH', data, offset + 2)
                print(f"  [offset 0x{offset:04X}] RGBBkCol (0x001B) RGB=({r:04X},{g:04X},{b:04X})")
                offset += 8
            else:
                offset += 2

        elif op == 0x0002:
            # BkPat
            print(f"  [offset 0x{offset:04X}] BkPat (0x0002)")
            offset += 2 + 8

        elif op == 0x0003:
            # TxFont
            if offset + 4 <= len(data):
                font = struct.unpack_from('>H', data, offset + 2)[0]
                print(f"  [offset 0x{offset:04X}] TxFont (0x0003) font={font}")
            offset += 4

        elif op == 0x0004:
            # TxFace
            print(f"  [offset 0x{offset:04X}] TxFace (0x0004)")
            offset += 4

        elif op == 0x0005:
            # TxMode
            print(f"  [offset 0x{offset:04X}] TxMode (0x0005)")
            offset += 4

        elif op == 0x0006:
            # SpExtra
            print(f"  [offset 0x{offset:04X}] SpExtra (0x0006)")
            offset += 6

        elif op == 0x0007:
            # PnSize
            print(f"  [offset 0x{offset:04X}] PnSize (0x0007)")
            offset += 6

        elif op == 0x0008:
            # PnMode
            print(f"  [offset 0x{offset:04X}] PnMode (0x0008)")
            offset += 4

        elif op == 0x0009:
            # PnPat
            print(f"  [offset 0x{offset:04X}] PnPat (0x0009)")
            offset += 2 + 8

        elif op == 0x000A:
            # FillPat
            print(f"  [offset 0x{offset:04X}] FillPat (0x000A)")
            offset += 2 + 8

        elif op == 0x000B:
            # OvSize
            print(f"  [offset 0x{offset:04X}] OvSize (0x000B)")
            offset += 6

        elif op == 0x000D:
            # TxSize
            print(f"  [offset 0x{offset:04X}] TxSize (0x000D)")
            offset += 4

        elif op == 0x0010:
            # TxRatio
            print(f"  [offset 0x{offset:04X}] TxRatio (0x0010)")
            offset += 10

        elif op == 0x0028:
            # LongText
            if offset + 6 <= len(data):
                pt_v, pt_h = struct.unpack_from('>hh', data, offset + 2)
                tlen = data[offset + 6]
                print(f"  [offset 0x{offset:04X}] LongText (0x0028) at ({pt_h},{pt_v}) len={tlen}")
                offset += 7 + tlen
            else:
                offset += 2

        elif 0x0020 <= op <= 0x002F:
            # Line/text drawing opcodes
            print(f"  [offset 0x{offset:04X}] Drawing opcode 0x{op:04X}")
            # These have variable lengths, try to skip
            offset += 2

        else:
            # Unknown opcode - try to report and skip
            if op < 0x0100:
                print(f"  [offset 0x{offset:04X}] Unknown opcode 0x{op:04X}")
                # For safety, just advance by 2
                offset += 2
            elif op < 0x8000:
                # Extended opcode with word length
                if offset + 4 <= len(data):
                    dlen = struct.unpack_from('>H', data, offset + 2)[0]
                    print(f"  [offset 0x{offset:04X}] Extended opcode 0x{op:04X} len={dlen}")
                    offset += 4 + dlen
                else:
                    print(f"  [offset 0x{offset:04X}] Extended opcode 0x{op:04X} (truncated)")
                    break
            else:
                # Reserved opcodes >= 0x8000 have long length
                if offset + 6 <= len(data):
                    dlen = struct.unpack_from('>I', data, offset + 2)[0]
                    print(f"  [offset 0x{offset:04X}] Reserved opcode 0x{op:04X} len={dlen}")
                    offset += 6 + dlen
                else:
                    print(f"  [offset 0x{offset:04X}] Reserved opcode 0x{op:04X} (truncated)")
                    break

    if not pixel_data_found:
        print("  WARNING: No pixel data opcode found!")


def parse_pixmap(data, offset):
    """Parse a PixMap record starting at offset. Returns (info_dict, new_offset)."""
    info = {}

    # PixMap structure (from Inside Mac):
    #   baseAddr (4) - pointer, ignored in PICT
    #   rowBytes (2) - has high bit set for PixMap (vs BitMap)
    #   bounds (8) - rect: top, left, bottom, right
    #   pmVersion (2)
    #   packType (2)
    #   packSize (4)
    #   hRes (4) - fixed point
    #   vRes (4) - fixed point
    #   pixelType (2)
    #   pixelSize (2)
    #   cmpCount (2)
    #   cmpSize (2)
    #   planeBytes (4)
    #   pmTable (4) - handle, ignored
    #   pmReserved (4)
    # Total: 50 bytes

    if offset + 46 > len(data):  # 46 = 50 - 4 (baseAddr not always present in PICT)
        print(f"    PixMap truncated at offset 0x{offset:04X}")
        return info, offset

    rowbytes_raw = struct.unpack_from('>H', data, offset)[0]
    info['rowBytes'] = rowbytes_raw & 0x3FFF
    info['isPixMap'] = bool(rowbytes_raw & 0x8000)

    top, left, bottom, right = struct.unpack_from('>hhhh', data, offset + 2)
    info['bounds'] = (top, left, bottom, right)
    info['width'] = right - left
    info['height'] = bottom - top

    if info['isPixMap']:
        info['pmVersion'] = struct.unpack_from('>H', data, offset + 10)[0]
        info['packType'] = struct.unpack_from('>H', data, offset + 12)[0]
        info['packSize'] = struct.unpack_from('>I', data, offset + 14)[0]
        info['hRes'] = struct.unpack_from('>I', data, offset + 18)[0]
        info['vRes'] = struct.unpack_from('>I', data, offset + 22)[0]
        info['pixelType'] = struct.unpack_from('>H', data, offset + 26)[0]
        info['pixelSize'] = struct.unpack_from('>H', data, offset + 28)[0]
        info['cmpCount'] = struct.unpack_from('>H', data, offset + 30)[0]
        info['cmpSize'] = struct.unpack_from('>H', data, offset + 32)[0]
        info['planeBytes'] = struct.unpack_from('>I', data, offset + 34)[0]
        info['pmTable'] = struct.unpack_from('>I', data, offset + 38)[0]
        info['pmReserved'] = struct.unpack_from('>I', data, offset + 42)[0]
        new_offset = offset + 46
    else:
        # BitMap: just rowBytes + bounds = 10 bytes
        new_offset = offset + 10

    return info, new_offset


def parse_color_table(data, offset):
    """Parse a ColorTable at offset. Returns (clut_entries, new_offset)."""
    if offset + 8 > len(data):
        print(f"    Color table truncated at offset 0x{offset:04X}")
        return [], offset

    ct_seed = struct.unpack_from('>I', data, offset)[0]
    ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
    ct_size = struct.unpack_from('>H', data, offset + 6)[0]  # num entries - 1
    num_entries = ct_size + 1

    print(f"    Color Table: seed=0x{ct_seed:08X}, flags=0x{ct_flags:04X}, entries={num_entries}")

    clut = []
    off = offset + 8
    for i in range(num_entries):
        if off + 8 > len(data):
            print(f"    CLUT truncated at entry {i}")
            break
        idx = struct.unpack_from('>H', data, off)[0]
        r = struct.unpack_from('>H', data, off + 2)[0]
        g = struct.unpack_from('>H', data, off + 4)[0]
        b = struct.unpack_from('>H', data, off + 6)[0]
        clut.append((idx, r, g, b))
        off += 8

    return clut, off


def unpack_packbits_row(data, offset, row_bytes):
    """Unpack a PackBits compressed row. Returns (unpacked_bytes, new_offset)."""
    result = bytearray()
    bytes_read = 0
    start_offset = offset

    while len(result) < row_bytes and offset < len(data):
        flag = data[offset]
        offset += 1

        if flag < 128:
            # 0-127: copy next (flag+1) bytes literally
            count = flag + 1
            result.extend(data[offset:offset + count])
            offset += count
        elif flag > 128:
            # 129-255: repeat next byte (257-flag) times
            count = 257 - flag
            if offset < len(data):
                result.extend([data[offset]] * count)
                offset += 1
        # flag == 128: NOP

    return bytes(result[:row_bytes]), offset


def parse_packbits_rect(data, offset, has_region=False):
    """Parse PackBitsRect (0x0098) or PackBitsRgn (0x0099) opcode data."""
    start = offset
    offset += 2  # skip opcode

    # PixMap data
    pixmap, offset = parse_pixmap(data, offset)

    print(f"    PixMap: rowBytes={pixmap.get('rowBytes',0)}, isPixMap={pixmap.get('isPixMap',False)}")
    print(f"    Bounds: {pixmap.get('bounds', 'N/A')}")
    print(f"    Dimensions: {pixmap.get('width','?')} x {pixmap.get('height','?')}")

    if pixmap.get('isPixMap'):
        print(f"    pixelSize: {pixmap.get('pixelSize','?')}")
        print(f"    pixelType: {pixmap.get('pixelType','?')}")
        print(f"    cmpCount: {pixmap.get('cmpCount','?')}")
        print(f"    cmpSize: {pixmap.get('cmpSize','?')}")
        print(f"    packType: {pixmap.get('packType','?')}")

        # Parse color table
        clut, offset = parse_color_table(data, offset)

        # Print first/last entries and any notable ones
        if clut:
            print(f"    CLUT has {len(clut)} entries:")
            # Print all entries for analysis
            for i, (idx, r, g, b) in enumerate(clut):
                r8 = r >> 8
                g8 = g >> 8
                b8 = b >> 8
                note = ""
                if r == 0xFFFF and g == 0xFFFF and b == 0xFFFF:
                    note = " <-- WHITE"
                elif r == 0 and g == 0 and b == 0:
                    note = " <-- BLACK"
                elif r == g == b:
                    note = f" <-- GRAY ({r8})"
                elif r8 == 0xEF and g8 == 0xEF and b8 == 0xEF:
                    note = " <-- LIGHT GRAY (0xEF)"
                elif r8 == 0xCC and g8 == 0xCC and b8 == 0xCC:
                    note = " <-- 0xCC GRAY"

                # Only print interesting entries + first 10 + last 5
                if i < 10 or i >= len(clut) - 5 or note or r8 > 0xE0 and g8 > 0xE0 and b8 > 0xE0:
                    print(f"      [{i:3d}] idx={idx:3d} RGB16=({r:04X},{g:04X},{b:04X}) RGB8=({r8:02X},{g8:02X},{b8:02X}){note}")

            # Specifically check for common transparency colors
            print(f"\n    Looking for potential background colors:")
            for i, (idx, r, g, b) in enumerate(clut):
                r8 = r >> 8
                g8 = g >> 8
                b8 = b >> 8
                # Check for whites, light grays, and magenta (common transparency)
                if (r8 >= 0xE0 and g8 >= 0xE0 and b8 >= 0xE0) or (r8 >= 0xF0 and b8 >= 0xF0 and g8 < 0x20):
                    print(f"      CLUT[{i}] idx={idx}: RGB8=({r8:02X},{g8:02X},{b8:02X}) RGB16=({r:04X},{g:04X},{b:04X})")
    else:
        print(f"    (This is a 1-bit BitMap, no color table)")

    # Source rect
    if offset + 8 <= len(data):
        st, sl, sb, sr = struct.unpack_from('>hhhh', data, offset)
        print(f"    Src rect: ({sl},{st},{sr},{sb})")
        offset += 8

    # Dest rect
    if offset + 8 <= len(data):
        dt, dl, db, dr = struct.unpack_from('>hhhh', data, offset)
        print(f"    Dst rect: ({dl},{dt},{dr},{db})")
        offset += 8

    # Transfer mode
    if offset + 2 <= len(data):
        mode = struct.unpack_from('>H', data, offset)[0]
        mode_names = {0: 'srcCopy', 1: 'srcOr', 2: 'srcXor', 3: 'srcBic',
                      4: 'notSrcCopy', 5: 'notSrcOr', 6: 'notSrcXor', 7: 'notSrcBic',
                      32: 'blend', 33: 'addPin', 34: 'addOver', 35: 'subPin',
                      36: 'transparent', 37: 'adMax', 38: 'subOver', 39: 'adMin',
                      40: 'ditherCopy'}
        mode_name = mode_names.get(mode, f'unknown({mode})')
        print(f"    Transfer mode: {mode} ({mode_name})")
        offset += 2

    # Region (if PackBitsRgn)
    if has_region:
        if offset + 2 <= len(data):
            rgn_size = struct.unpack_from('>H', data, offset)[0]
            print(f"    Mask region size: {rgn_size}")
            offset += rgn_size

    # Now decompress the pixel data and sample corners
    height = pixmap.get('height', 0)
    width = pixmap.get('width', 0)
    row_bytes = pixmap.get('rowBytes', 0)
    pixel_size = pixmap.get('pixelSize', 1)

    if height > 0 and row_bytes > 0:
        print(f"\n    Decompressing {height} rows of {row_bytes} bytes each...")
        rows = []
        for row in range(height):
            if row_bytes > 250:
                # Byte count is a 16-bit value
                if offset + 2 > len(data):
                    print(f"    Row {row}: truncated (need byte count)")
                    break
                packed_bytes = struct.unpack_from('>H', data, offset)[0]
                offset += 2
            else:
                # Byte count is an 8-bit value
                if offset >= len(data):
                    print(f"    Row {row}: truncated (need byte count)")
                    break
                packed_bytes = data[offset]
                offset += 1

            if offset + packed_bytes > len(data):
                print(f"    Row {row}: truncated (need {packed_bytes} packed bytes, have {len(data) - offset})")
                break

            unpacked, _ = unpack_packbits_row(data[offset:offset + packed_bytes + 128], 0, row_bytes)
            rows.append(unpacked)
            offset += packed_bytes

        print(f"    Successfully decompressed {len(rows)} rows")

        if len(rows) > 0 and pixel_size == 8 and clut:
            # Sample pixels at various positions
            print(f"\n    === PIXEL SAMPLING (8-bit indexed) ===")

            sample_points = [
                (0, 0, "top-left corner"),
                (width - 1, 0, "top-right corner"),
                (0, height - 1, "bottom-left corner"),
                (width - 1, height - 1, "bottom-right corner"),
                (1, 1, "near top-left"),
                (width // 2, 0, "top-center"),
                (0, height // 2, "left-center"),
                # Additional points likely in background
                (5, 0, "row 0, col 5"),
                (10, 0, "row 0, col 10"),
                (width - 5, 0, "row 0, col W-5"),
                (0, 5, "row 5, col 0"),
                (width - 1, 5, "row 5, col W-1"),
            ]

            # Build index-to-color map from CLUT
            clut_map = {}
            for idx, r, g, b in clut:
                clut_map[idx] = (r, g, b)
            # Also build a sequential map in case indices don't match
            clut_seq = [(r, g, b) for _, r, g, b in clut]

            for px, py, desc in sample_points:
                if py < len(rows) and px < len(rows[py]):
                    palette_idx = rows[py][px]

                    # Try indexed lookup first, then sequential
                    if palette_idx in clut_map:
                        r16, g16, b16 = clut_map[palette_idx]
                    elif palette_idx < len(clut_seq):
                        r16, g16, b16 = clut_seq[palette_idx]
                    else:
                        r16, g16, b16 = (0, 0, 0)

                    r8 = r16 >> 8
                    g8 = g16 >> 8
                    b8 = b16 >> 8
                    print(f"      Pixel ({px},{py}) [{desc}]: index={palette_idx} -> RGB8=({r8:02X},{g8:02X},{b8:02X}) RGB16=({r16:04X},{g16:04X},{b16:04X})")
                else:
                    print(f"      Pixel ({px},{py}) [{desc}]: OUT OF RANGE")

            # Scan the first row to find the most common pixel value (likely background)
            if len(rows) > 0:
                from collections import Counter

                # Count occurrences in first row
                row0_counts = Counter(rows[0])
                print(f"\n    First row pixel value distribution (top {10}):")
                for val, count in row0_counts.most_common(10):
                    if val in clut_map:
                        r16, g16, b16 = clut_map[val]
                    elif val < len(clut_seq):
                        r16, g16, b16 = clut_seq[val]
                    else:
                        r16, g16, b16 = (0, 0, 0)
                    r8, g8, b8 = r16 >> 8, g16 >> 8, b16 >> 8
                    print(f"      Index {val:3d}: {count:4d} pixels -> RGB8=({r8:02X},{g8:02X},{b8:02X})")

                # Count across ALL rows
                all_counts = Counter()
                for row in rows:
                    all_counts.update(row)

                print(f"\n    Overall pixel value distribution (top {10}):")
                for val, count in all_counts.most_common(10):
                    if val in clut_map:
                        r16, g16, b16 = clut_map[val]
                    elif val < len(clut_seq):
                        r16, g16, b16 = clut_seq[val]
                    else:
                        r16, g16, b16 = (0, 0, 0)
                    r8, g8, b8 = r16 >> 8, g16 >> 8, b16 >> 8
                    pct = 100.0 * count / (len(rows) * len(rows[0]))
                    print(f"      Index {val:3d}: {count:6d} pixels ({pct:5.1f}%) -> RGB8=({r8:02X},{g8:02X},{b8:02X})")

                # Check the "border" pixels (edges likely to be background)
                border_counts = Counter()
                # Top and bottom rows
                if len(rows) >= 2:
                    border_counts.update(rows[0])
                    border_counts.update(rows[-1])
                # Left and right columns
                for row in rows:
                    if len(row) > 0:
                        border_counts[row[0]] += 1
                        border_counts[row[-1]] += 1

                print(f"\n    Border pixels distribution (top {5}):")
                for val, count in border_counts.most_common(5):
                    if val in clut_map:
                        r16, g16, b16 = clut_map[val]
                    elif val < len(clut_seq):
                        r16, g16, b16 = clut_seq[val]
                    else:
                        r16, g16, b16 = (0, 0, 0)
                    r8, g8, b8 = r16 >> 8, g16 >> 8, b16 >> 8
                    print(f"      Index {val:3d}: {count:4d} border pixels -> RGB8=({r8:02X},{g8:02X},{b8:02X})")

        elif len(rows) > 0 and pixel_size in (16, 32):
            print(f"\n    === PIXEL SAMPLING ({pixel_size}-bit direct color) ===")
            for py in [0, height - 1]:
                if py < len(rows):
                    row_data = rows[py]
                    for px in [0, width - 1]:
                        if pixel_size == 16 and px * 2 + 2 <= len(row_data):
                            pix = struct.unpack_from('>H', row_data, px * 2)[0]
                            r5 = (pix >> 10) & 0x1F
                            g5 = (pix >> 5) & 0x1F
                            b5 = pix & 0x1F
                            r8 = (r5 << 3) | (r5 >> 2)
                            g8 = (g5 << 3) | (g5 >> 2)
                            b8 = (b5 << 3) | (b5 >> 2)
                            print(f"      Pixel ({px},{py}): raw=0x{pix:04X} RGB555=({r5},{g5},{b5}) RGB8=({r8:02X},{g8:02X},{b8:02X})")
                        elif pixel_size == 32 and px * 4 + 4 <= len(row_data):
                            pix = struct.unpack_from('>I', row_data, px * 4)[0]
                            a = (pix >> 24) & 0xFF
                            r = (pix >> 16) & 0xFF
                            g = (pix >> 8) & 0xFF
                            b = pix & 0xFF
                            print(f"      Pixel ({px},{py}): raw=0x{pix:08X} ARGB=({a:02X},{r:02X},{g:02X},{b:02X})")

    return offset


def parse_directbits_rect(data, offset, has_region=False):
    """Parse DirectBitsRect (0x009A) or DirectBitsRgn (0x009B)."""
    start = offset
    offset += 2  # skip opcode

    # For direct bits, baseAddr is 0x000000FF (placeholder)
    if offset + 4 <= len(data):
        base_addr = struct.unpack_from('>I', data, offset)[0]
        print(f"    baseAddr: 0x{base_addr:08X}")
        offset += 4

    # Then PixMap
    pixmap, offset = parse_pixmap(data, offset)

    print(f"    PixMap: rowBytes={pixmap.get('rowBytes',0)}, isPixMap={pixmap.get('isPixMap',False)}")
    print(f"    Bounds: {pixmap.get('bounds', 'N/A')}")
    print(f"    Dimensions: {pixmap.get('width','?')} x {pixmap.get('height','?')}")
    print(f"    pixelSize: {pixmap.get('pixelSize','?')}")
    print(f"    pixelType: {pixmap.get('pixelType','?')}")
    print(f"    cmpCount: {pixmap.get('cmpCount','?')}")
    print(f"    cmpSize: {pixmap.get('cmpSize','?')}")
    print(f"    packType: {pixmap.get('packType','?')}")

    # No color table for direct bits

    # Source rect, dest rect, mode
    if offset + 8 <= len(data):
        st, sl, sb, sr = struct.unpack_from('>hhhh', data, offset)
        print(f"    Src rect: ({sl},{st},{sr},{sb})")
        offset += 8

    if offset + 8 <= len(data):
        dt, dl, db, dr = struct.unpack_from('>hhhh', data, offset)
        print(f"    Dst rect: ({dl},{dt},{dr},{db})")
        offset += 8

    if offset + 2 <= len(data):
        mode = struct.unpack_from('>H', data, offset)[0]
        print(f"    Transfer mode: {mode}")
        offset += 2

    if has_region:
        if offset + 2 <= len(data):
            rgn_size = struct.unpack_from('>H', data, offset)[0]
            print(f"    Mask region size: {rgn_size}")
            offset += rgn_size

    # Decompress pixel data for direct bits
    height = pixmap.get('height', 0)
    row_bytes = pixmap.get('rowBytes', 0)
    pixel_size = pixmap.get('pixelSize', 16)
    cmp_count = pixmap.get('cmpCount', 3)
    width = pixmap.get('width', 0)
    pack_type = pixmap.get('packType', 0)

    if height > 0 and row_bytes > 0:
        print(f"\n    Decompressing {height} rows...")
        rows = []

        for row in range(height):
            if pack_type == 1 or (pack_type == 0 and pixel_size == 16 and row_bytes < 8):
                # No packing
                if offset + row_bytes <= len(data):
                    rows.append(data[offset:offset + row_bytes])
                    offset += row_bytes
                else:
                    break
            else:
                # PackBits compression
                if row_bytes > 250:
                    if offset + 2 > len(data):
                        break
                    packed_bytes = struct.unpack_from('>H', data, offset)[0]
                    offset += 2
                else:
                    if offset >= len(data):
                        break
                    packed_bytes = data[offset]
                    offset += 1

                if offset + packed_bytes > len(data):
                    break

                if cmp_count == 3 and pixel_size == 32:
                    # For 32-bit, packbits is applied per component plane
                    unpacked, _ = unpack_packbits_row(data[offset:offset + packed_bytes + 128], 0, row_bytes)
                    rows.append(unpacked)
                else:
                    unpacked, _ = unpack_packbits_row(data[offset:offset + packed_bytes + 128], 0, row_bytes)
                    rows.append(unpacked)

                offset += packed_bytes

        print(f"    Decompressed {len(rows)} rows")

        if len(rows) > 0:
            print(f"\n    === PIXEL SAMPLING ({pixel_size}-bit direct) ===")
            sample_points = [
                (0, 0, "top-left"),
                (width - 1, 0, "top-right"),
                (0, height - 1, "bottom-left"),
                (width - 1, height - 1, "bottom-right"),
            ]

            for px, py, desc in sample_points:
                if py < len(rows):
                    row_data = rows[py]
                    if pixel_size == 16 and px * 2 + 2 <= len(row_data):
                        pix = struct.unpack_from('>H', row_data, px * 2)[0]
                        r5 = (pix >> 10) & 0x1F
                        g5 = (pix >> 5) & 0x1F
                        b5 = pix & 0x1F
                        r8 = (r5 << 3) | (r5 >> 2)
                        g8 = (g5 << 3) | (g5 >> 2)
                        b8 = (b5 << 3) | (b5 >> 2)
                        print(f"      ({px},{py}) [{desc}]: raw=0x{pix:04X} RGB8=({r8:02X},{g8:02X},{b8:02X})")
                    elif pixel_size == 32:
                        # 32-bit rows might be stored as separate planes
                        bytes_per_component = width
                        if len(row_data) >= cmp_count * bytes_per_component:
                            if cmp_count == 3:
                                r = row_data[px]
                                g = row_data[bytes_per_component + px]
                                b = row_data[2 * bytes_per_component + px]
                                print(f"      ({px},{py}) [{desc}]: RGB=({r:02X},{g:02X},{b:02X})")
                            elif cmp_count == 4:
                                a = row_data[px]
                                r = row_data[bytes_per_component + px]
                                g = row_data[2 * bytes_per_component + px]
                                b = row_data[3 * bytes_per_component + px]
                                print(f"      ({px},{py}) [{desc}]: ARGB=({a:02X},{r:02X},{g:02X},{b:02X})")

    return offset


def parse_bits_rect(data, offset, has_region=False):
    """Parse BitsRect (0x0090) or BitsRgn (0x0091) - 1-bit bitmaps."""
    offset += 2  # skip opcode

    rowbytes = struct.unpack_from('>H', data, offset)[0]
    top, left, bottom, right = struct.unpack_from('>hhhh', data, offset + 2)
    print(f"    BitMap: rowBytes={rowbytes}, bounds=({left},{top},{right},{bottom})")
    offset += 10

    # Src rect, dst rect, mode
    if offset + 8 <= len(data):
        st, sl, sb, sr = struct.unpack_from('>hhhh', data, offset)
        print(f"    Src rect: ({sl},{st},{sr},{sb})")
        offset += 8
    if offset + 8 <= len(data):
        dt, dl, db, dr = struct.unpack_from('>hhhh', data, offset)
        print(f"    Dst rect: ({dl},{dt},{dr},{db})")
        offset += 8
    if offset + 2 <= len(data):
        mode = struct.unpack_from('>H', data, offset)[0]
        print(f"    Mode: {mode}")
        offset += 2

    if has_region:
        if offset + 2 <= len(data):
            rgn_size = struct.unpack_from('>H', data, offset)[0]
            offset += rgn_size

    # Pixel data
    height = bottom - top
    for row in range(height):
        if rowbytes > 250:
            if offset + 2 > len(data):
                break
            packed = struct.unpack_from('>H', data, offset)[0]
            offset += 2 + packed
        elif rowbytes > 8:
            if offset >= len(data):
                break
            packed = data[offset]
            offset += 1 + packed
        else:
            offset += rowbytes

    return offset


def main():
    print("=" * 70)
    print("PICT 30021 Analysis - Road Sprite Sheet Background Color")
    print("=" * 70)
    print()

    # Read resource fork
    with open(RSRC_PATH, 'rb') as f:
        rsrc_data = f.read()

    print(f"Resource fork size: {len(rsrc_data)} bytes")

    # Parse resources
    resources = parse_resource_fork(rsrc_data)

    # Find PICT resources
    pict_resources = [r for r in resources if r.type_str == 'PICT']
    print(f"Found {len(pict_resources)} PICT resources")

    # List all PICT IDs
    print("\nAll PICT resource IDs:")
    for r in sorted(pict_resources, key=lambda x: x.res_id):
        print(f"  PICT {r.res_id}: {r.data_size} bytes  name='{r.name}'")

    # Find PICT 30021
    target = None
    for r in pict_resources:
        if r.res_id == 30021:
            target = r
            break

    if not target:
        print("\nERROR: PICT 30021 not found!")
        # Try nearby IDs
        for r in pict_resources:
            if 30000 <= r.res_id <= 30100:
                print(f"  Nearby: PICT {r.res_id} ({r.data_size} bytes)")
        return

    print(f"\nFound PICT 30021: {target.data_size} bytes")

    # Dump first 64 bytes for inspection
    print(f"\nFirst 128 bytes of PICT data:")
    for i in range(0, min(128, len(target.data)), 16):
        hex_part = ' '.join(f'{b:02x}' for b in target.data[i:i+16])
        ascii_part = ''.join(chr(b) if 32 <= b < 127 else '.' for b in target.data[i:i+16])
        print(f"  {i:04X}: {hex_part:<48s}  {ascii_part}")

    print(f"\n{'=' * 70}")
    print("PICT OPCODE PARSING")
    print(f"{'=' * 70}")

    parse_pict_opcodes(target.data)

    # Also save raw PICT data for external analysis
    out_path = "/tmp/pict_30021_raw.dat"
    with open(out_path, 'wb') as f:
        f.write(target.data)
    print(f"\nRaw PICT data saved to: {out_path}")

    print("\n" + "=" * 70)
    print("ANALYSIS COMPLETE")
    print("=" * 70)


if __name__ == '__main__':
    main()
