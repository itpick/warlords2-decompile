#!/usr/bin/env python3
"""
Compare shield cicn color tables from different resource files
to determine which has the correct colors for the game.
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

SHIELD_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Shields/Elemental Shields/..namedfork/rsrc"
TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
APP_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Warlords II.app/..namedfork/rsrc"

OUTPUT_DIR = os.path.expanduser("~/Desktop/shield_compare")


def parse_cicn_clut(data):
    """Parse a cicn resource and extract its embedded CLUT colors.
    Returns list of (r, g, b) tuples (8-bit per channel)."""
    if len(data) < 50:
        return None, None

    # cicn structure:
    # PixMap (50 bytes): baseAddr(4), rowBytes(2), bounds(8), pmVersion(2),
    #   packType(2), packSize(4), hRes(4), vRes(4), pixelType(2),
    #   pixelSize(2), cmpCount(2), cmpSize(2), planeBytes(4), pmTable(4), pmReserved(4)
    # Then: maskBitMap header, bwBitMap header, iconData handle(4)
    # Then: maskData, bwData, CLUT, pixelData

    offset = 0

    # PixMap
    row_bytes_raw = struct.unpack_from('>H', data, 4)[0]
    row_bytes = row_bytes_raw & 0x3FFF
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 6)
    width = right - left
    height = bottom - top
    pixel_size = struct.unpack_from('>H', data, 28)[0]

    # Mask BitMap (14 bytes): baseAddr(4), rowBytes(2), bounds(8)
    offset = 50
    mask_row_bytes = struct.unpack_from('>H', data, offset + 4)[0] & 0x3FFF
    mask_top, mask_left, mask_bottom, mask_right = struct.unpack_from('>hhhh', data, offset + 6)
    mask_height = mask_bottom - mask_top
    offset += 14

    # BW BitMap (14 bytes)
    bw_row_bytes = struct.unpack_from('>H', data, offset + 4)[0] & 0x3FFF
    bw_top, bw_left, bw_bottom, bw_right = struct.unpack_from('>hhhh', data, offset + 6)
    bw_height = bw_bottom - bw_top
    offset += 14

    # iconData handle (4 bytes)
    offset += 4

    # Mask data
    mask_data_size = mask_row_bytes * mask_height
    offset += mask_data_size

    # BW data
    bw_data_size = bw_row_bytes * bw_height
    offset += bw_data_size

    # Now at CLUT
    if offset + 8 > len(data):
        return None, (width, height, pixel_size)

    ct_seed = struct.unpack_from('>I', data, offset)[0]
    ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
    ct_size = struct.unpack_from('>H', data, offset + 6)[0]
    num_colors = ct_size + 1
    offset += 8

    colors = []
    for i in range(num_colors):
        if offset + 8 > len(data):
            break
        val = struct.unpack_from('>H', data, offset)[0]
        r = struct.unpack_from('>H', data, offset + 2)[0]
        g = struct.unpack_from('>H', data, offset + 4)[0]
        b = struct.unpack_from('>H', data, offset + 6)[0]
        offset += 8
        colors.append((r >> 8, g >> 8, b >> 8))

    return colors, (width, height, pixel_size)


def parse_pltt(data):
    """Parse a pltt (palette) resource. Returns list of (r, g, b) tuples."""
    if len(data) < 8:
        return None
    num_entries = struct.unpack_from('>H', data, 0)[0]
    # Skip reserved bytes (6 bytes after count)
    offset = 8
    colors = []
    for i in range(num_entries):
        if offset + 16 > len(data):
            break
        r = struct.unpack_from('>H', data, offset)[0]
        g = struct.unpack_from('>H', data, offset + 2)[0]
        b = struct.unpack_from('>H', data, offset + 4)[0]
        # Skip usage(2), tolerance(2), privateFlags(2), reserved(4) = 10 bytes
        offset += 16
        colors.append((r >> 8, g >> 8, b >> 8))
    return colors


def find_nearest_palette(color, palette):
    """Find nearest palette color by Euclidean distance. Returns (index, palette_color, distance)."""
    best_dist = float('inf')
    best_idx = 0
    r, g, b = color
    for i, (pr, pg, pb) in enumerate(palette):
        dist = (r - pr) ** 2 + (g - pg) ** 2 + (b - pb) ** 2
        if dist < best_dist:
            best_dist = dist
            best_idx = i
    return best_idx, palette[best_idx], best_dist


def save_color_swatch(filename, colors, swatch_w=20, swatch_h=20):
    """Save a BMP showing color swatches."""
    cols = min(len(colors), 16)
    rows = (len(colors) + cols - 1) // cols
    width = cols * swatch_w
    height = rows * swatch_h

    # BMP
    row_stride = ((width * 3 + 3) // 4) * 4
    pixel_data = bytearray()
    for row in range(height - 1, -1, -1):
        for col_px in range(width):
            ci = (row // swatch_h) * cols + (col_px // swatch_w)
            if ci < len(colors):
                r, g, b = colors[ci]
            else:
                r, g, b = 0, 0, 0
            pixel_data.extend([b, g, r])
        pixel_data.extend([0] * (row_stride - width * 3))

    file_size = 54 + len(pixel_data)
    header = struct.pack('<2sIHHI', b'BM', file_size, 0, 0, 54)
    info = struct.pack('<IIIHHIIIIII', 40, width, height, 1, 24, 0,
                       len(pixel_data), 2835, 2835, 0, 0)

    with open(filename, 'wb') as f:
        f.write(header)
        f.write(info)
        f.write(pixel_data)


def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)

    faction_names = ["Sirians", "Storm Giants", "Grey Dwarves",
                     "Orcs of Kor", "Elvallie", "Horse Lords",
                     "Selentines", "Dark Elves"]

    # Load all resource files
    sources = {}
    for name, path in [("Shields", SHIELD_FILE), ("Grasslands", TERRAIN_FILE), ("App", APP_FILE)]:
        try:
            with open(path, 'rb') as f:
                data = f.read()
            resources = parse_resource_fork(data)
            sources[name] = resources
            print(f"Loaded {name}: {len(resources)} resources")
        except Exception as e:
            print(f"Failed to load {name}: {e}")

    # Extract pltt 1000 from app resource fork
    palette = None
    if "App" in sources:
        for r in sources["App"]:
            if r.type_str == 'pltt' and r.res_id == 1000:
                palette = parse_pltt(r.data)
                if palette:
                    print(f"\nGame palette (pltt 1000): {len(palette)} colors")
                break

    # Compare cicn 30600-30607 across files
    print("\n" + "=" * 80)
    print("SHIELD cicn COLOR COMPARISON")
    print("=" * 80)

    for faction in range(8):
        cicn_id = 30600 + faction
        print(f"\n--- cicn {cicn_id} ({faction_names[faction]}) ---")

        for source_name in ["Shields", "Grasslands"]:
            if source_name not in sources:
                continue

            cicn_data = None
            for r in sources[source_name]:
                if r.type_str == 'cicn' and r.res_id == cicn_id:
                    cicn_data = r.data
                    break

            if cicn_data is None:
                print(f"  {source_name}: NOT FOUND")
                continue

            colors, info = parse_cicn_clut(cicn_data)
            if colors is None:
                print(f"  {source_name}: CLUT parse failed")
                continue

            w, h, depth = info
            print(f"  {source_name}: {w}x{h} {depth}-bit, {len(colors)} CLUT entries, {len(cicn_data)} bytes")

            # Save color swatch
            swatch_file = os.path.join(OUTPUT_DIR, f"clut_{source_name.lower()}_cicn{cicn_id}.bmp")
            save_color_swatch(swatch_file, colors)

            # Show dominant non-bg colors (skip white/black/gray)
            significant = [(r, g, b) for r, g, b in colors
                          if not (r == g == b) or (r > 0 and r < 255)]
            # Show first 5 significant colors
            for i, (cr, cg, cb) in enumerate(significant[:8]):
                hex_col = f"#{cr:02x}{cg:02x}{cb:02x}"
                if palette:
                    pidx, pcol, pdist = find_nearest_palette((cr, cg, cb), palette)
                    phex = f"#{pcol[0]:02x}{pcol[1]:02x}{pcol[2]:02x}"
                    print(f"    color {i}: {hex_col} → palette[{pidx}] {phex} (dist={pdist})")
                else:
                    print(f"    color {i}: {hex_col}")

    # Also check built-in cicn 3020-3027
    if "App" in sources:
        print(f"\n--- Built-in fallback cicn 3020-3027 ---")
        for faction in range(8):
            cicn_id = 3020 + faction
            for r in sources["App"]:
                if r.type_str == 'cicn' and r.res_id == cicn_id:
                    colors, info = parse_cicn_clut(r.data)
                    if colors and info:
                        w, h, depth = info
                        print(f"  cicn {cicn_id}: {w}x{h} {depth}-bit, {len(colors)} colors, {len(r.data)} bytes")
                    break

    print(f"\nColor swatches saved to: {OUTPUT_DIR}")


if __name__ == '__main__':
    main()
