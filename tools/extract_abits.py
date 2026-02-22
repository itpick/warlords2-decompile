#!/usr/bin/env python3
"""
Extract PICT 10004 (ABITS sprite sheet) from the Warlords II resource fork,
decode it, and save cropped icon regions to the Desktop for visual confirmation.

ABITS is a 544x40 sprite sheet: 34 cols x 2 rows of 16x20 cells.
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Warlords II.app/..namedfork/rsrc"
OUTPUT_DIR = os.path.expanduser("~/Desktop/abits_icons")


def unpack_bits(data, offset, row_bytes, height):
    """Decode PackBits compressed pixel data.
    Returns list of rows, each a bytearray of row_bytes length."""
    rows = []
    for _row in range(height):
        row = bytearray()
        # For row_bytes > 250, the byte count is a 2-byte value
        if row_bytes > 250:
            if offset + 2 > len(data):
                break
            byte_count = struct.unpack_from('>H', data, offset)[0]
            offset += 2
        else:
            if offset >= len(data):
                break
            byte_count = data[offset]
            offset += 1

        end_of_packed = offset + byte_count
        while offset < end_of_packed and len(row) < row_bytes:
            if offset >= len(data):
                break
            flag = data[offset]
            offset += 1
            if flag < 128:
                # Literal run: copy flag+1 bytes
                count = flag + 1
                row.extend(data[offset:offset + count])
                offset += count
            elif flag > 128:
                # Repeated run: repeat next byte (257-flag) times
                count = 257 - flag
                if offset < len(data):
                    val = data[offset]
                    offset += 1
                    row.extend([val] * count)
            # flag == 128: no-op

        # Pad row if needed
        while len(row) < row_bytes:
            row.append(0)
        rows.append(row[:row_bytes])
        offset = end_of_packed  # Ensure we're aligned

    return rows, offset


def parse_pict_and_extract_pixels(pict_data):
    """Parse PICT v2 opcodes and extract pixel data + CLUT.
    Returns (width, height, pixels_2d, clut) or None on failure."""

    if len(pict_data) < 12:
        print(f"  PICT data too short: {len(pict_data)} bytes")
        return None

    # PICT header: size(2), bounding rect(8)
    top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
    img_w = right - left
    img_h = bottom - top
    print(f"  Bounding rect: ({left},{top})-({right},{bottom}) = {img_w}x{img_h}")

    offset = 10
    clut = None
    pixels = None

    # Check for version opcode
    if offset + 2 <= len(pict_data):
        op = struct.unpack_from('>H', pict_data, offset)[0]
        if op == 0x0011:  # Version
            offset += 2
            ver = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2
            if ver == 0x02FF:
                # PICT v2: skip HeaderOp (0x0C00) + 24 bytes of v2 header
                if offset + 2 <= len(pict_data):
                    hop = struct.unpack_from('>H', pict_data, offset)[0]
                    if hop == 0x0C00:
                        offset += 2 + 24  # skip header op + 24-byte extended header

    # Walk opcodes
    max_opcodes = 500
    for _i in range(max_opcodes):
        if offset >= len(pict_data) - 1:
            break

        # Word-align
        if offset % 2 != 0:
            offset += 1

        op = struct.unpack_from('>H', pict_data, offset)[0]
        offset += 2

        if op == 0x00FF:  # EndOfPicture
            break
        elif op == 0x0001:  # Clip region
            rgn_size = struct.unpack_from('>H', pict_data, offset)[0]
            offset += rgn_size
        elif op == 0x0000:  # NOP
            pass
        elif op == 0x001E:  # DefHilite
            pass
        elif op == 0x0098:  # PackBitsRect (indexed)
            result = parse_packbits_rect(pict_data, offset, indexed=True)
            if result:
                pixels, clut, offset = result
            else:
                break
        elif op == 0x0099:  # PackBitsRgn (indexed)
            result = parse_packbits_rect(pict_data, offset, indexed=True, has_region=True)
            if result:
                pixels, clut, offset = result
            else:
                break
        elif op == 0x009A:  # DirectBitsRect (16/32-bit direct)
            result = parse_direct_bits_rect(pict_data, offset)
            if result:
                pixels, clut, offset = result
            else:
                break
        elif op == 0x009B:  # DirectBitsRgn
            result = parse_direct_bits_rect(pict_data, offset, has_region=True)
            if result:
                pixels, clut, offset = result
            else:
                break
        elif op == 0x000A:  # FillPat
            offset += 8
        elif op == 0x000B:  # OvSize
            offset += 4
        elif op == 0x0010:  # TxRatio
            offset += 8
        elif op == 0x0011:  # Version
            offset += 1
        elif op == 0x0015:  # PnLocHFrac
            offset += 2
        elif op == 0x001A:  # RGBFgCol
            offset += 6
        elif op == 0x001B:  # RGBBkCol
            offset += 6
        elif op == 0x001C:  # HiliteMode
            pass
        elif op == 0x001D:  # HiliteColor
            offset += 6
        elif op == 0x001F:  # OpColor
            offset += 6
        elif op == 0x0020:  # Line
            offset += 8
        elif op == 0x0021:  # LineFrom
            offset += 4
        elif op == 0x0022:  # ShortLine
            offset += 6
        elif op == 0x0023:  # ShortLineFrom
            offset += 2
        elif op == 0x0028:  # LongText
            offset += 4  # point
            tl = data[offset] if offset < len(pict_data) else 0
            offset += 1 + tl
        elif op == 0x002C:  # fontName
            dl = struct.unpack_from('>H', pict_data, offset)[0]
            offset += dl
        elif op == 0x002E:  # glyphState
            dl = struct.unpack_from('>H', pict_data, offset)[0]
            offset += dl
        elif op == 0x0030:  # frameRect
            offset += 8
        elif op == 0x0031:  # paintRect
            offset += 8
        elif op == 0x0032:  # eraseRect
            offset += 8
        elif op == 0x0033:  # invertRect
            offset += 8
        elif op == 0x0034:  # fillRect
            offset += 8
        elif op == 0x0040:  # frameRRect
            offset += 8
        elif op == 0x0048:  # frameSameRRect
            pass
        elif op == 0x0070:  # poly
            sz = struct.unpack_from('>H', pict_data, offset)[0]
            offset += sz
        elif op == 0x0071:  # paintPoly
            sz = struct.unpack_from('>H', pict_data, offset)[0]
            offset += sz
        elif op == 0x0080:  # frameRgn
            sz = struct.unpack_from('>H', pict_data, offset)[0]
            offset += sz
        elif op == 0x0081:  # paintRgn
            sz = struct.unpack_from('>H', pict_data, offset)[0]
            offset += sz
        elif op == 0x0090:  # BitsRect (uncompressed indexed)
            result = parse_bits_rect(pict_data, offset)
            if result:
                pixels, clut, offset = result
            else:
                break
        elif op == 0x0091:  # BitsRgn
            result = parse_bits_rect(pict_data, offset, has_region=True)
            if result:
                pixels, clut, offset = result
            else:
                break
        elif op == 0x00A0:  # ShortComment
            offset += 2
        elif op == 0x00A1:  # LongComment
            offset += 2  # kind
            dl = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2 + dl
        elif (op & 0xFF00) == 0x0000 and op >= 0x0002 and op <= 0x000F:
            # Variable length data for opcodes 0x0002-0x000F
            if op == 0x0003:  # TxFont
                offset += 2
            elif op == 0x0004:  # TxFace
                offset += 1
            elif op == 0x0005:  # TxMode
                offset += 2
            elif op == 0x0006:  # SpExtra
                offset += 4
            elif op == 0x0007:  # PnSize
                offset += 4
            elif op == 0x0008:  # PnMode
                offset += 2
            elif op == 0x0009:  # PnPat
                offset += 8
            elif op == 0x000D:  # TxSize
                offset += 2
            elif op == 0x000E:  # FgColor
                offset += 4
            elif op == 0x000F:  # BkColor
                offset += 4
            else:
                offset += 2
        elif op >= 0x8000 and op <= 0x80FF:
            # Compressed QuickTime image
            dl = struct.unpack_from('>I', pict_data, offset)[0]
            offset += 4 + dl
        else:
            print(f"  Unknown opcode 0x{op:04X} at offset {offset-2}, stopping")
            break

    if pixels is not None:
        return pixels, clut
    return None


def parse_packbits_rect(data, offset, indexed=True, has_region=False):
    """Parse PackBitsRect/PackBitsRgn opcode data."""
    start = offset

    # PixMap record (minus baseAddr which is already consumed by opcode)
    # baseAddr is a "fake" pointer in PICTs - skip 4 bytes
    # Actually for PackBitsRect, the data starts with the full PixMap minus baseAddr
    # rowBytes(2), bounds(8), version(2), packType(2), packSize(4),
    # hRes(4), vRes(4), pixelType(2), pixelSize(2), cmpCount(2), cmpSize(2),
    # planeBytes(4), pmTable(4), pmReserved(4)

    row_bytes_raw = struct.unpack_from('>H', data, offset)[0]
    offset += 2

    # If high bit set, it's a PixMap; otherwise it's a BitMap
    is_pixmap = bool(row_bytes_raw & 0x8000)
    row_bytes = row_bytes_raw & 0x3FFF

    # Bounds rect
    top, left, bottom, right = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    width = right - left
    height = bottom - top
    print(f"  PackBitsRect: rowBytes={row_bytes} (pixmap={is_pixmap}), bounds=({left},{top})-({right},{bottom}), {width}x{height}")

    clut = None

    if is_pixmap:
        # Rest of PixMap fields
        pm_version = struct.unpack_from('>H', data, offset)[0]
        pack_type = struct.unpack_from('>H', data, offset + 2)[0]
        pack_size = struct.unpack_from('>I', data, offset + 4)[0]
        h_res = struct.unpack_from('>I', data, offset + 8)[0]
        v_res = struct.unpack_from('>I', data, offset + 12)[0]
        pixel_type = struct.unpack_from('>H', data, offset + 16)[0]
        pixel_size = struct.unpack_from('>H', data, offset + 18)[0]
        cmp_count = struct.unpack_from('>H', data, offset + 20)[0]
        cmp_size = struct.unpack_from('>H', data, offset + 22)[0]
        offset += 26  # skip planeBytes(4) + pmTable(4) + reserved(4) = already in the 26
        # Actually let me recount: version(2)+packType(2)+packSize(4)+hRes(4)+vRes(4)+
        # pixelType(2)+pixelSize(2)+cmpCount(2)+cmpSize(2)+planeBytes(4)+pmTable(4)+pmReserved(4)
        # = 2+2+4+4+4+2+2+2+2+4+4+4 = 36
        offset = start + 2 + 8 + 36  # rowBytes + bounds + pixmap fields

        print(f"  PixMap: pixelSize={pixel_size}, cmpCount={cmp_count}, cmpSize={cmp_size}")

        # Color table
        ct_seed = struct.unpack_from('>I', data, offset)[0]
        ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
        ct_size = struct.unpack_from('>H', data, offset + 6)[0]
        offset += 8
        num_colors = ct_size + 1
        print(f"  ColorTable: seed=0x{ct_seed:08X}, flags=0x{ct_flags:04X}, {num_colors} entries")

        clut = []
        for i in range(num_colors):
            val = struct.unpack_from('>H', data, offset)[0]
            r = struct.unpack_from('>H', data, offset + 2)[0]
            g = struct.unpack_from('>H', data, offset + 4)[0]
            b = struct.unpack_from('>H', data, offset + 6)[0]
            offset += 8
            # When ct_flags & 0x8000, entries are sequential; use position as index
            idx = i if (ct_flags & 0x8000) else val
            clut.append((idx, r >> 8, g >> 8, b >> 8))

        # Source and dest rects
        src_rect = struct.unpack_from('>hhhh', data, offset)
        offset += 8
        dst_rect = struct.unpack_from('>hhhh', data, offset)
        offset += 8
        # Transfer mode
        mode = struct.unpack_from('>H', data, offset)[0]
        offset += 2

        if has_region:
            rgn_size = struct.unpack_from('>H', data, offset)[0]
            offset += rgn_size

        # Decode pixel data
        if pixel_size <= 8:
            rows, offset = unpack_bits(data, offset, row_bytes, height)

            # Convert to pixel indices
            pixels = []
            ppb = 8 // pixel_size  # pixels per byte
            mask = (1 << pixel_size) - 1
            for row in rows:
                pixel_row = []
                for byte_val in row:
                    for shift in range(ppb - 1, -1, -1):
                        pixel_row.append((byte_val >> (shift * pixel_size)) & mask)
                pixels.append(pixel_row[:width])

            return pixels, clut, offset
    else:
        # BitMap (1-bit)
        src_rect = struct.unpack_from('>hhhh', data, offset)
        offset += 8
        dst_rect = struct.unpack_from('>hhhh', data, offset)
        offset += 8
        mode = struct.unpack_from('>H', data, offset)[0]
        offset += 2

        if has_region:
            rgn_size = struct.unpack_from('>H', data, offset)[0]
            offset += rgn_size

        rows, offset = unpack_bits(data, offset, row_bytes, height)
        pixels = []
        for row in rows:
            pixel_row = []
            for byte_val in row:
                for bit in range(7, -1, -1):
                    pixel_row.append((byte_val >> bit) & 1)
            pixels.append(pixel_row[:width])

        clut = [(0, 255, 255, 255), (1, 0, 0, 0)]
        return pixels, clut, offset

    return None


def parse_direct_bits_rect(data, offset, has_region=False):
    """Parse DirectBitsRect (16/32-bit) opcode."""
    # baseAddr (4, ignored) + rowBytes(2) + bounds(8) + pixmap fields(36)
    base_addr = struct.unpack_from('>I', data, offset)[0]
    offset += 4

    row_bytes_raw = struct.unpack_from('>H', data, offset)[0]
    row_bytes = row_bytes_raw & 0x3FFF
    offset += 2

    top, left, bottom, right = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    width = right - left
    height = bottom - top

    # PixMap fields after bounds
    pm_version = struct.unpack_from('>H', data, offset)[0]
    pack_type = struct.unpack_from('>H', data, offset + 2)[0]
    pack_size = struct.unpack_from('>I', data, offset + 4)[0]
    h_res = struct.unpack_from('>I', data, offset + 8)[0]
    v_res = struct.unpack_from('>I', data, offset + 12)[0]
    pixel_type = struct.unpack_from('>H', data, offset + 16)[0]
    pixel_size = struct.unpack_from('>H', data, offset + 18)[0]
    cmp_count = struct.unpack_from('>H', data, offset + 20)[0]
    cmp_size = struct.unpack_from('>H', data, offset + 22)[0]
    offset += 36  # all pixmap fields after bounds

    print(f"  DirectBits: rowBytes={row_bytes}, {width}x{height}, pixelSize={pixel_size}, cmpCount={cmp_count}")

    # No color table for direct pixels
    # Source rect, dest rect, mode
    src_rect = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    dst_rect = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    mode = struct.unpack_from('>H', data, offset)[0]
    offset += 2

    if has_region:
        rgn_size = struct.unpack_from('>H', data, offset)[0]
        offset += rgn_size

    # Decode pixel data
    if pixel_size == 16:
        rows, offset = unpack_bits(data, offset, row_bytes, height)
        pixels = []
        for row in rows:
            pixel_row = []
            for j in range(0, len(row) - 1, 2):
                val = (row[j] << 8) | row[j + 1]
                r = ((val >> 10) & 0x1F) * 255 // 31
                g = ((val >> 5) & 0x1F) * 255 // 31
                b = (val & 0x1F) * 255 // 31
                pixel_row.append((r, g, b))
            pixels.append(pixel_row[:width])
        return pixels, None, offset
    elif pixel_size == 32:
        # Pack type 1 or 2 means no packing, 3+ means PackBits per component
        if pack_type in (1, 2) or row_bytes < 8:
            # No compression
            for _r in range(height):
                offset += row_bytes
        else:
            rows, offset = unpack_bits(data, offset, row_bytes, height)
            # 32-bit packed: each row has cmpCount components interleaved
            pixels = []
            for row in rows:
                pixel_row = []
                comp_len = width
                if cmp_count == 3:
                    for x in range(width):
                        r = row[x] if x < len(row) else 0
                        g = row[comp_len + x] if comp_len + x < len(row) else 0
                        b = row[2 * comp_len + x] if 2 * comp_len + x < len(row) else 0
                        pixel_row.append((r, g, b))
                elif cmp_count == 4:
                    for x in range(width):
                        # a = row[x]
                        r = row[comp_len + x] if comp_len + x < len(row) else 0
                        g = row[2 * comp_len + x] if 2 * comp_len + x < len(row) else 0
                        b = row[3 * comp_len + x] if 3 * comp_len + x < len(row) else 0
                        pixel_row.append((r, g, b))
                pixels.append(pixel_row[:width])
            return pixels, None, offset

    return None


def parse_bits_rect(data, offset, has_region=False):
    """Parse BitsRect (uncompressed 1-bit bitmap) opcode."""
    row_bytes = struct.unpack_from('>H', data, offset)[0]
    offset += 2

    is_pixmap = bool(row_bytes & 0x8000)
    if is_pixmap:
        # Redirect to PackBitsRect handler (same structure minus compression)
        return parse_packbits_rect(data, offset - 2, indexed=True, has_region=has_region)

    row_bytes = row_bytes & 0x3FFF

    top, left, bottom, right = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    width = right - left
    height = bottom - top

    src_rect = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    dst_rect = struct.unpack_from('>hhhh', data, offset)
    offset += 8
    mode = struct.unpack_from('>H', data, offset)[0]
    offset += 2

    if has_region:
        rgn_size = struct.unpack_from('>H', data, offset)[0]
        offset += rgn_size

    # Read uncompressed rows
    pixels = []
    for _r in range(height):
        row = data[offset:offset + row_bytes]
        offset += row_bytes
        pixel_row = []
        for byte_val in row:
            for bit in range(7, -1, -1):
                pixel_row.append((byte_val >> bit) & 1)
        pixels.append(pixel_row[:width])

    clut = [(0, 255, 255, 255), (1, 0, 0, 0)]
    return pixels, clut, offset


def save_bmp(filename, width, height, rgb_rows):
    """Save a BMP file from RGB row data.
    rgb_rows: list of rows, each row is list of (r,g,b) tuples."""
    # BMP row stride must be multiple of 4
    row_stride = ((width * 3 + 3) // 4) * 4
    padding = row_stride - width * 3
    pixel_data = bytearray()

    # BMP stores rows bottom-to-top
    for row in reversed(rgb_rows):
        for r, g, b in row:
            pixel_data.extend([b, g, r])  # BGR
        pixel_data.extend([0] * padding)

    file_size = 54 + len(pixel_data)
    header = struct.pack('<2sIHHI', b'BM', file_size, 0, 0, 54)
    info = struct.pack('<IIIHHIIIIII', 40, width, height, 1, 24, 0,
                       len(pixel_data), 2835, 2835, 0, 0)

    with open(filename, 'wb') as f:
        f.write(header)
        f.write(info)
        f.write(pixel_data)
    print(f"  Saved: {filename} ({width}x{height})")


def pixels_to_rgb(pixels, clut):
    """Convert indexed pixels to RGB using CLUT."""
    # Build lookup by index
    lut = {}
    if clut:
        for entry in clut:
            idx, r, g, b = entry
            lut[idx] = (r, g, b)

    rgb_rows = []
    for row in pixels:
        rgb_row = []
        for px in row:
            if isinstance(px, tuple):
                rgb_row.append(px)  # Already RGB
            else:
                rgb_row.append(lut.get(px, (255, 0, 255)))  # Magenta for missing
        rgb_rows.append(rgb_row)
    return rgb_rows


def crop_region(rgb_rows, x, y, w, h):
    """Crop a rectangular region from RGB rows."""
    cropped = []
    for row_idx in range(y, min(y + h, len(rgb_rows))):
        row = rgb_rows[row_idx]
        cropped.append(row[x:x + w])
    return cropped


def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)

    print(f"Reading resource fork: {RSRC_PATH}")
    with open(RSRC_PATH, 'rb') as f:
        rsrc_data = f.read()
    print(f"  Size: {len(rsrc_data)} bytes")

    resources = parse_resource_fork(rsrc_data)
    print(f"  Found {len(resources)} resources")

    # Find PICT 10004
    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 10004:
            pict_data = r.data
            print(f"  Found PICT 10004: {len(pict_data)} bytes, name='{r.name}'")
            break

    if pict_data is None:
        print("ERROR: PICT 10004 not found!")
        sys.exit(1)

    print("\nParsing PICT 10004...")
    result = parse_pict_and_extract_pixels(pict_data)
    if result is None:
        print("ERROR: Failed to extract pixels from PICT 10004")
        sys.exit(1)

    pixels, clut = result
    height = len(pixels)
    width = len(pixels[0]) if height > 0 else 0
    print(f"\n  Decoded image: {width}x{height}")
    if clut:
        print(f"  CLUT: {len(clut)} entries")
        # Print first few and last few colors
        for i, (idx, r, g, b) in enumerate(clut[:5]):
            print(f"    [{idx}] = ({r},{g},{b})")
        if len(clut) > 10:
            print(f"    ...")
            for i, (idx, r, g, b) in enumerate(clut[-3:]):
                print(f"    [{idx}] = ({r},{g},{b})")

    # Convert to RGB
    rgb_rows = pixels_to_rgb(pixels, clut)

    # Save full sprite sheet
    save_bmp(os.path.join(OUTPUT_DIR, "abits_full.bmp"), width, height, rgb_rows)

    # Save each 16x20 cell as a separate file for the full grid
    cell_w, cell_h = 16, 20
    cols = width // cell_w
    rows_count = height // cell_h
    print(f"\n  Grid: {cols} cols x {rows_count} rows of {cell_w}x{cell_h} cells")

    # Save the specific cells used in the status bar
    status_cells = [
        ("cities_pennant_c28r0", 28, 0, "Cities pennant (current: col 28 row 0)"),
        ("income_chest_c28r1", 28, 1, "Income chest (current: col 28 row 1)"),
        ("gold_coins_c29r0", 29, 0, "Gold coins (current: col 29 row 0)"),
        ("armies_hand_c29r1", 29, 1, "Armies hand (current: col 29 row 1)"),
    ]

    print("\n=== Current status bar icon mappings ===")
    for name, col, row, desc in status_cells:
        x = col * cell_w
        y = row * cell_h
        region = crop_region(rgb_rows, x, y, cell_w, cell_h)
        if region:
            save_bmp(os.path.join(OUTPUT_DIR, f"{name}.bmp"), cell_w, cell_h, region)
            print(f"  {desc}: pixel ({x},{y})")

    # Save ALL cells for visual inspection
    print("\n=== All cells ===")
    for col in range(cols):
        for row in range(rows_count):
            x = col * cell_w
            y = row * cell_h
            region = crop_region(rgb_rows, x, y, cell_w, cell_h)
            if region:
                fname = f"cell_c{col:02d}_r{row}.bmp"
                save_bmp(os.path.join(OUTPUT_DIR, fname), cell_w, cell_h, region)

    # Save wider strips for context: last 8 columns
    strip_x = max(0, (cols - 8)) * cell_w
    strip_w = min(8 * cell_w, width - strip_x)
    strip = crop_region(rgb_rows, strip_x, 0, strip_w, height)
    if strip:
        save_bmp(os.path.join(OUTPUT_DIR, "last_8_cols.bmp"), strip_w, height, strip)
        print(f"\n  Saved last 8 columns strip: x={strip_x}, w={strip_w}")

    print(f"\nAll files saved to: {OUTPUT_DIR}")
    print("Open Finder and check ~/Desktop/abits_icons/")


if __name__ == '__main__':
    main()
