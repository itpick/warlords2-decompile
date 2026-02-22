#!/usr/bin/env python3
"""
Extract zoomed-in detail strips from the ABITS sprite sheet for exact icon identification.
Saves to ~/Desktop/abits_icons/ with grid overlay annotations.
"""

import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

# Import the already-working extraction functions from extract_abits
from tools.extract_abits import (
    parse_pict_and_extract_pixels, pixels_to_rgb, crop_region, save_bmp
)
from parse_resource_fork import parse_resource_fork

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Warlords II.app/..namedfork/rsrc"
OUTPUT_DIR = os.path.expanduser("~/Desktop/abits_icons")


def scale_up(rgb_rows, factor):
    """Scale an image up by integer factor (nearest neighbor)."""
    scaled = []
    for row in rgb_rows:
        new_row = []
        for px in row:
            new_row.extend([px] * factor)
        for _ in range(factor):
            scaled.append(list(new_row))
    return scaled


def add_grid_lines(rgb_rows, cell_w, cell_h, scale, color=(200, 0, 0)):
    """Draw grid lines on scaled image."""
    h = len(rgb_rows)
    w = len(rgb_rows[0]) if h > 0 else 0

    # Vertical lines every cell_w pixels (in original coords)
    for cx in range(0, w // scale + 1, cell_w):
        sx = cx * scale
        if sx < w:
            for y in range(h):
                rgb_rows[y][sx] = color

    # Horizontal lines every cell_h pixels
    for cy in range(0, h // scale + 1, cell_h):
        sy = cy * scale
        if sy < h:
            for x in range(w):
                rgb_rows[sy][x] = color

    return rgb_rows


def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)

    with open(RSRC_PATH, 'rb') as f:
        rsrc_data = f.read()

    resources = parse_resource_fork(rsrc_data)

    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == 10004:
            pict_data = r.data
            break

    if pict_data is None:
        print("ERROR: PICT 10004 not found!")
        sys.exit(1)

    result = parse_pict_and_extract_pixels(pict_data)
    if result is None:
        print("ERROR: Failed to extract pixels")
        sys.exit(1)

    pixels, clut = result
    rgb_rows = pixels_to_rgb(pixels, clut)
    height = len(rgb_rows)
    width = len(rgb_rows[0]) if height > 0 else 0
    print(f"Full image: {width}x{height}")

    # Save detail strips at 4x scale with grid overlay
    SCALE = 4

    # Strip 1: The icon area (pixels 320-420, full height)
    strip1 = crop_region(rgb_rows, 320, 0, 100, height)
    strip1_scaled = scale_up(strip1, SCALE)
    add_grid_lines(strip1_scaled, 16, 20, SCALE)
    save_bmp(os.path.join(OUTPUT_DIR, "detail_320_420.bmp"), 100 * SCALE, height * SCALE, strip1_scaled)

    # Strip 2: Wider view of icon area (pixels 280-440, full height)
    strip2 = crop_region(rgb_rows, 280, 0, 160, height)
    strip2_scaled = scale_up(strip2, SCALE)
    add_grid_lines(strip2_scaled, 16, 20, SCALE)
    save_bmp(os.path.join(OUTPUT_DIR, "detail_280_440.bmp"), 160 * SCALE, height * SCALE, strip2_scaled)

    # Strip 3: The far right area where current code reads from (440-544)
    strip3 = crop_region(rgb_rows, 440, 0, 104, height)
    strip3_scaled = scale_up(strip3, SCALE)
    add_grid_lines(strip3_scaled, 16, 20, SCALE)
    save_bmp(os.path.join(OUTPUT_DIR, "detail_440_544.bmp"), 104 * SCALE, height * SCALE, strip3_scaled)

    # Now save labeled candidate icons at specific pixel positions
    # These are the icons I identified visually:
    candidates = [
        ("candidate_cities_352_0",  352, 0,  16, 20, "Castle/city icon at (352,0)"),
        ("candidate_chest_352_20",  352, 20, 16, 20, "Treasure chest at (352,20)"),
        ("candidate_coins_384_0",   384, 0,  16, 20, "Gold coins at (384,0)"),
        ("candidate_coins2_384_20", 384, 20, 16, 20, "Coins alternate at (384,20)"),
        ("candidate_boot_400_0",    400, 0,  16, 20, "Boot/shoe at (400,0)"),
        ("candidate_hand_400_20",   400, 20, 16, 20, "Hand/fist at (400,20)"),
        # Also try some non-grid-aligned positions
        ("candidate_flag_336_0",    336, 0,  16, 20, "Flag? at (336,0)"),
        ("candidate_bag_336_20",    336, 20, 16, 20, "Bag? at (336,20)"),
        ("candidate_346_0",         346, 0,  16, 20, "346,0"),
        ("candidate_346_20",        346, 20, 16, 20, "346,20"),
        # Current wrong positions for comparison
        ("CURRENT_cities_448_0",    448, 0,  16, 20, "CURRENT cities (WRONG) at (448,0)"),
        ("CURRENT_chest_448_20",    448, 20, 16, 20, "CURRENT chest (WRONG) at (448,20)"),
        ("CURRENT_coins_464_0",     464, 0,  16, 20, "CURRENT coins (WRONG) at (464,0)"),
        ("CURRENT_hand_464_20",     464, 20, 16, 20, "CURRENT hand (WRONG) at (464,20)"),
    ]

    print("\n=== Candidate icons (4x scale) ===")
    for name, x, y, w, h, desc in candidates:
        region = crop_region(rgb_rows, x, y, w, h)
        if region:
            scaled = scale_up(region, SCALE)
            save_bmp(os.path.join(OUTPUT_DIR, f"{name}.bmp"), w * SCALE, h * SCALE, scaled)
            print(f"  {desc}")

    # Convert all to PNG
    print("\nConverting BMPs to PNGs...")
    import subprocess
    for f in os.listdir(OUTPUT_DIR):
        if f.endswith('.bmp') and (f.startswith('detail_') or f.startswith('candidate_') or f.startswith('CURRENT_')):
            bmp_path = os.path.join(OUTPUT_DIR, f)
            png_path = os.path.join(OUTPUT_DIR, f.replace('.bmp', '.png'))
            subprocess.run(['sips', '-s', 'format', 'png', bmp_path, '--out', png_path],
                         capture_output=True)

    print(f"\nAll detail files saved to: {OUTPUT_DIR}")


if __name__ == '__main__':
    main()
