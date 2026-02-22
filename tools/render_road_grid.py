#!/usr/bin/env python3
"""
Render all 17 road tiles (RD values 1-17) from PICT 30021 as an annotated
grid BMP image for visual verification.

Layout: 4 columns x 5 rows, each cell 80x100 pixels.
  - 20px label area above tile ("Tile N")
  - 40x40 tile centered horizontally (20px padding each side)
  - 20px label area below tile ("RD N+1")
  - 20px bottom margin

Output: ~/Desktop/road_tile_grid.bmp
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
OUTPUT_FILE = os.path.expanduser("~/Desktop/road_tile_grid.bmp")

# Cell dimensions
CELL_W = 80
CELL_H = 100
TILE_W = 40
TILE_H = 40
COLS = 4
ROWS = 5
LABEL_TOP_H = 24    # space for "Tile N" label above
LABEL_BOT_H = 20    # space for "RD N" label below
TILE_PAD_X = (CELL_W - TILE_W) // 2  # 20px each side

IMG_W = CELL_W * COLS   # 320
IMG_H = CELL_H * ROWS   # 500

# Background color for the output image (light gray)
BG_COLOR = (200, 200, 200)
# Label text color (black)
TEXT_COLOR = (0, 0, 0)
# Border color around tiles
BORDER_COLOR = (100, 100, 100)


# ---- Minimal bitmap font (5x7 pixels per glyph) ----
# Each glyph is 5 columns wide, 7 rows tall, stored as 7 bytes (each byte = 5-bit row, MSB=left)
FONT_5x7 = {
    ' ': [0b00000, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000],
    '0': [0b01110, 0b10001, 0b10011, 0b10101, 0b11001, 0b10001, 0b01110],
    '1': [0b00100, 0b01100, 0b00100, 0b00100, 0b00100, 0b00100, 0b01110],
    '2': [0b01110, 0b10001, 0b00001, 0b00010, 0b00100, 0b01000, 0b11111],
    '3': [0b01110, 0b10001, 0b00001, 0b00110, 0b00001, 0b10001, 0b01110],
    '4': [0b00010, 0b00110, 0b01010, 0b10010, 0b11111, 0b00010, 0b00010],
    '5': [0b11111, 0b10000, 0b11110, 0b00001, 0b00001, 0b10001, 0b01110],
    '6': [0b00110, 0b01000, 0b10000, 0b11110, 0b10001, 0b10001, 0b01110],
    '7': [0b11111, 0b00001, 0b00010, 0b00100, 0b01000, 0b01000, 0b01000],
    '8': [0b01110, 0b10001, 0b10001, 0b01110, 0b10001, 0b10001, 0b01110],
    '9': [0b01110, 0b10001, 0b10001, 0b01111, 0b00001, 0b00010, 0b01100],
    'T': [0b11111, 0b00100, 0b00100, 0b00100, 0b00100, 0b00100, 0b00100],
    'i': [0b00000, 0b00100, 0b00000, 0b00100, 0b00100, 0b00100, 0b00100],
    'l': [0b01100, 0b00100, 0b00100, 0b00100, 0b00100, 0b00100, 0b01110],
    'e': [0b00000, 0b00000, 0b01110, 0b10001, 0b11111, 0b10000, 0b01110],
    'R': [0b11110, 0b10001, 0b10001, 0b11110, 0b10100, 0b10010, 0b10001],
    'D': [0b11100, 0b10010, 0b10001, 0b10001, 0b10001, 0b10010, 0b11100],
}

GLYPH_W = 5
GLYPH_H = 7
GLYPH_SPACING = 1  # 1px between glyphs


def draw_char(framebuf, img_w, ch, x0, y0, color, scale=1):
    """Draw a single character into the framebuffer at (x0, y0)."""
    glyph = FONT_5x7.get(ch)
    if glyph is None:
        return
    for row_idx, row_bits in enumerate(glyph):
        for col_idx in range(GLYPH_W):
            if row_bits & (1 << (GLYPH_W - 1 - col_idx)):
                for sy in range(scale):
                    for sx in range(scale):
                        px = x0 + col_idx * scale + sx
                        py = y0 + row_idx * scale + sy
                        if 0 <= px < img_w and 0 <= py < len(framebuf):
                            framebuf[py][px] = color


def draw_text(framebuf, img_w, text, x0, y0, color, scale=1):
    """Draw a string of text into the framebuffer, centered at y0."""
    total_w = len(text) * (GLYPH_W * scale + GLYPH_SPACING) - GLYPH_SPACING
    # x0 is the left edge; we draw from there
    cx = x0
    for ch in text:
        draw_char(framebuf, img_w, ch, cx, y0, color, scale=scale)
        cx += GLYPH_W * scale + GLYPH_SPACING


def text_width(text, scale=1):
    """Calculate width of rendered text in pixels."""
    if not text:
        return 0
    return len(text) * (GLYPH_W * scale + GLYPH_SPACING) - GLYPH_SPACING


def load_pict_pixels(pict_data):
    """Parse PICT and return pixel array. Returns (pixels_2d, width, height, palette).
    Reused from dump_road_pixels.py."""
    if len(pict_data) < 10:
        return None

    top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
    width = right - left
    height = bottom - top

    offset = 10
    version = 1

    while offset < len(pict_data) - 1:
        if version == 1:
            opcode = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
        else:
            if offset % 2 != 0:
                offset += 1
            if offset + 2 > len(pict_data):
                break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

        if opcode == 0x0011:
            ver = struct.unpack_from('>B', pict_data, offset)[0]
            offset += 1
            if ver == 2:
                version = 2
                offset += 1
            continue

        if opcode == 0x0C00:
            offset += 24
            continue
        if opcode == 0x001E:
            continue
        if opcode == 0x0001:
            rgnSize = struct.unpack_from('>H', pict_data, offset)[0]
            offset += rgnSize
            continue

        if opcode == 0x0000:
            continue
        if opcode in (0x0003, 0x0004, 0x0005, 0x000D, 0x0008, 0x0015, 0x0016):
            offset += 2
            continue
        if opcode == 0x0007:
            offset += 4
            continue
        if opcode in (0x0009, 0x000A):
            offset += 8
            continue
        if opcode == 0x000B:
            offset += 4
            continue
        if opcode == 0x001A:
            continue
        if opcode in (0x0018, 0x0019):
            offset += 6
            continue
        if opcode in (0x0020,):
            offset += 8
            continue
        if opcode in (0x0021,):
            offset += 4
            continue
        if opcode in (0x0028, 0x0029, 0x002A, 0x002B, 0x002C, 0x002D, 0x002E):
            offset += 6
            continue
        if opcode in (0x0030, 0x0031, 0x0032, 0x0033, 0x0034):
            offset += 8
            continue
        if opcode in (0x0038, 0x0039, 0x003A, 0x003B):
            continue

        if opcode == 0x0098 or opcode == 0x0099:
            rowBytes_raw = struct.unpack_from('>H', pict_data, offset)[0]
            is_pixmap = (rowBytes_raw & 0x8000) != 0
            rowBytes = rowBytes_raw & 0x3FFF

            pm_top, pm_left, pm_bottom, pm_right = struct.unpack_from('>hhhh', pict_data, offset + 2)
            pm_width = pm_right - pm_left
            pm_height = pm_bottom - pm_top

            if is_pixmap:
                pixelSize = struct.unpack_from('>H', pict_data, offset + 28)[0]
                offset += 46

                ct_seed = struct.unpack_from('>I', pict_data, offset)[0]
                ct_flags = struct.unpack_from('>H', pict_data, offset + 4)[0]
                ct_size = struct.unpack_from('>H', pict_data, offset + 6)[0]
                num_colors = ct_size + 1
                offset += 8

                palette = []
                for i in range(num_colors):
                    val = struct.unpack_from('>H', pict_data, offset)[0]
                    r = struct.unpack_from('>H', pict_data, offset + 2)[0] >> 8
                    g = struct.unpack_from('>H', pict_data, offset + 4)[0] >> 8
                    b = struct.unpack_from('>H', pict_data, offset + 6)[0] >> 8
                    palette.append((r, g, b))
                    offset += 8
            else:
                pixelSize = 1
                palette = [(255, 255, 255), (0, 0, 0)]
                offset += 10

            src_rect = struct.unpack_from('>hhhh', pict_data, offset)
            offset += 8
            dst_rect = struct.unpack_from('>hhhh', pict_data, offset)
            offset += 8
            mode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

            if opcode == 0x0099:
                rgn_size = struct.unpack_from('>H', pict_data, offset)[0]
                offset += rgn_size

            pixels = [[0] * pm_width for _ in range(pm_height)]

            for row in range(pm_height):
                if rowBytes > 250:
                    byteCount = struct.unpack_from('>H', pict_data, offset)[0]
                    offset += 2
                else:
                    byteCount = struct.unpack_from('>B', pict_data, offset)[0]
                    offset += 1

                row_end = offset + byteCount
                unpacked = bytearray()

                while offset < row_end:
                    flag = struct.unpack_from('>b', pict_data, offset)[0]
                    offset += 1

                    if flag >= 0:
                        count = flag + 1
                        unpacked.extend(pict_data[offset:offset + count])
                        offset += count
                    elif flag != -128:
                        count = -flag + 1
                        val = pict_data[offset]
                        offset += 1
                        unpacked.extend([val] * count)

                if pixelSize == 8:
                    for x in range(min(pm_width, len(unpacked))):
                        pixels[row][x] = unpacked[x]
                elif pixelSize == 4:
                    for x in range(pm_width):
                        byte_idx = x // 2
                        if byte_idx < len(unpacked):
                            if x % 2 == 0:
                                pixels[row][x] = (unpacked[byte_idx] >> 4) & 0x0F
                            else:
                                pixels[row][x] = unpacked[byte_idx] & 0x0F

            return pixels, pm_width, pm_height, palette

        if opcode == 0x00FF or opcode == 0xFFFF:
            break

        if version == 2 and opcode >= 0x0100:
            data_len = (opcode >> 8) * 2
            offset += data_len
        elif opcode == 0x00A1:
            offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
        elif opcode == 0x00A0:
            offset += 2
        else:
            break

    return None


def write_bmp(filename, framebuf, img_w, img_h):
    """Write a 24-bit BMP file from framebuf[y][x] = (r,g,b).
    BMP stores rows bottom-to-top, pixels as BGR."""
    row_size = (img_w * 3 + 3) & ~3  # pad to 4-byte boundary
    pixel_data_size = row_size * img_h
    file_size = 54 + pixel_data_size  # 14 (file header) + 40 (info header) + data

    with open(filename, 'wb') as f:
        # BITMAPFILEHEADER (14 bytes)
        f.write(b'BM')
        f.write(struct.pack('<I', file_size))
        f.write(struct.pack('<HH', 0, 0))  # reserved
        f.write(struct.pack('<I', 54))  # pixel data offset

        # BITMAPINFOHEADER (40 bytes)
        f.write(struct.pack('<I', 40))  # header size
        f.write(struct.pack('<i', img_w))
        f.write(struct.pack('<i', img_h))
        f.write(struct.pack('<HH', 1, 24))  # planes, bits per pixel
        f.write(struct.pack('<I', 0))  # compression (none)
        f.write(struct.pack('<I', pixel_data_size))
        f.write(struct.pack('<i', 2835))  # X pixels per meter (~72 dpi)
        f.write(struct.pack('<i', 2835))  # Y pixels per meter
        f.write(struct.pack('<I', 0))  # colors used
        f.write(struct.pack('<I', 0))  # important colors

        # Pixel data (bottom-to-top)
        for y in range(img_h - 1, -1, -1):
            row_bytes = bytearray()
            for x in range(img_w):
                r, g, b = framebuf[y][x]
                row_bytes.extend([b, g, r])  # BGR
            # Pad to 4-byte boundary
            while len(row_bytes) < row_size:
                row_bytes.append(0)
            f.write(row_bytes)


def main():
    # Load resource fork and find PICT 30021
    print(f"Loading resource fork: {TERRAIN_FILE}")
    with open(TERRAIN_FILE, 'rb') as f:
        data = f.read()
    resources = parse_resource_fork(data)

    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 30021:
            pict_data = r.data
            break

    if pict_data is None:
        print("ERROR: PICT 30021 not found in resource fork!")
        sys.exit(1)

    print(f"Found PICT 30021 ({len(pict_data)} bytes)")

    # Parse PICT pixels
    result = load_pict_pixels(pict_data)
    if result is None:
        print("ERROR: Failed to parse PICT pixel data!")
        sys.exit(1)

    pixels, pict_w, pict_h, palette = result
    print(f"PICT dimensions: {pict_w}x{pict_h}, palette: {len(palette)} colors")
    print(f"Grid: {pict_w // TILE_W} columns x {pict_h // TILE_H} rows of {TILE_W}x{TILE_H} tiles")

    # Create output framebuffer
    framebuf = [[BG_COLOR for _ in range(IMG_W)] for _ in range(IMG_H)]

    # RD value descriptions for reference
    rd_meanings = {
        1: "E+W",    2: "N+S",    3: "NESW",   4: "ESW",
        5: "NSW",    6: "NEW",    7: "NES",     8: "SW",
        9: "NW",    10: "NE",    11: "ES",     12: "W",
       13: "S",     14: "E",     15: "N",      16: "EW2",
       17: "NS2",
    }

    cols_per_row = pict_w // TILE_W  # Should be 16

    for tile_idx in range(17):
        rd_val = tile_idx + 1
        grid_col = tile_idx % COLS
        grid_row = tile_idx // COLS

        # Cell top-left in output image
        cell_x = grid_col * CELL_W
        cell_y = grid_row * CELL_H

        # Draw "Tile N" label centered above tile
        tile_label = f"Tile {tile_idx}"
        tw = text_width(tile_label)
        label_x = cell_x + (CELL_W - tw) // 2
        label_y = cell_y + (LABEL_TOP_H - GLYPH_H) // 2
        draw_text(framebuf, IMG_W, tile_label, label_x, label_y, TEXT_COLOR)

        # Source tile coordinates in PICT
        src_col = tile_idx % cols_per_row
        src_row = tile_idx // cols_per_row
        src_x0 = src_col * TILE_W
        src_y0 = src_row * TILE_H

        # Destination tile position (centered in cell, below top label)
        dst_x0 = cell_x + TILE_PAD_X
        dst_y0 = cell_y + LABEL_TOP_H

        # Draw 1px border around tile area
        for bx in range(TILE_W + 2):
            # Top border
            if dst_y0 - 1 >= 0:
                framebuf[dst_y0 - 1][dst_x0 - 1 + bx] = BORDER_COLOR
            # Bottom border
            if dst_y0 + TILE_H < IMG_H:
                framebuf[dst_y0 + TILE_H][dst_x0 - 1 + bx] = BORDER_COLOR
        for by in range(TILE_H + 2):
            # Left border
            if dst_x0 - 1 >= 0:
                framebuf[dst_y0 - 1 + by][dst_x0 - 1] = BORDER_COLOR
            # Right border
            if dst_x0 + TILE_W < IMG_W:
                framebuf[dst_y0 - 1 + by][dst_x0 + TILE_W] = BORDER_COLOR

        # Copy tile pixels, converting palette indices to RGB
        for ty in range(TILE_H):
            for tx in range(TILE_W):
                sy = src_y0 + ty
                sx = src_x0 + tx
                if sy < pict_h and sx < pict_w:
                    idx = pixels[sy][sx]
                    if idx < len(palette):
                        color = palette[idx]
                    else:
                        color = (255, 0, 255)  # magenta for out-of-range
                    framebuf[dst_y0 + ty][dst_x0 + tx] = color

        # Draw "RD N" label centered below tile
        rd_label = f"RD {rd_val}"
        rw = text_width(rd_label)
        rd_label_x = cell_x + (CELL_W - rw) // 2
        rd_label_y = dst_y0 + TILE_H + (LABEL_BOT_H - GLYPH_H) // 2 + 2
        draw_text(framebuf, IMG_W, rd_label, rd_label_x, rd_label_y, TEXT_COLOR)

        print(f"  Tile {tile_idx:2d} (RD {rd_val:2d}): {rd_meanings.get(rd_val, '?'):5s}  "
              f"src=({src_x0},{src_y0})-({src_x0+TILE_W},{src_y0+TILE_H})")

    # Fill remaining cells (17, 18, 19) with a lighter gray to indicate empty
    for tile_idx in range(17, COLS * ROWS):
        grid_col = tile_idx % COLS
        grid_row = tile_idx // COLS
        cell_x = grid_col * CELL_W
        cell_y = grid_row * CELL_H
        for y in range(CELL_H):
            for x in range(CELL_W):
                if cell_y + y < IMG_H and cell_x + x < IMG_W:
                    framebuf[cell_y + y][cell_x + x] = (220, 220, 220)

    # Write BMP
    print(f"\nWriting BMP: {OUTPUT_FILE} ({IMG_W}x{IMG_H})")
    write_bmp(OUTPUT_FILE, framebuf, IMG_W, IMG_H)
    print("Done!")


if __name__ == '__main__':
    main()
