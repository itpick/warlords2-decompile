#!/usr/bin/env python3
"""
Warlords II Resource Viewer
============================

Parse Mac resource forks and extract/display image resources (PICT, cicn, etc.)
as PNG files viewable on a modern Mac.

Uses parse_resource_fork.py from the project root for resource fork parsing,
and the PICT decoder from extract_picts_to_png.py for PICT image extraction.

Usage:
    # List all resources in a file
    python3 view_resources.py terrain

    # Extract all PICT resources from terrain file
    python3 view_resources.py terrain --type PICT

    # Extract specific PICT by ID
    python3 view_resources.py terrain --type PICT --id 30021

    # Extract all cicn (color icons) from terrain
    python3 view_resources.py terrain --type cicn

    # Extract shield icons from all sources
    python3 view_resources.py shields --type cicn

    # Extract from a custom resource fork path
    python3 view_resources.py /path/to/resource/fork --type PICT

    # Extract everything (all image types) from terrain
    python3 view_resources.py terrain --type all

    # Use --open to open output directory in Finder when done
    python3 view_resources.py terrain --type cicn --open

Shortcuts:
    terrain     -> Warlords II/Terrain/Grasslands/..namedfork/rsrc
    iceworld    -> Warlords II/Terrain/Ice World/..namedfork/rsrc
    mudflats    -> Warlords II/Terrain/Mudflats/..namedfork/rsrc
    app         -> Warlords II/Warlords II.app/..namedfork/rsrc
    shields     -> Warlords II/Shields/Elemental Shields/..namedfork/rsrc
"""

import argparse
import os
import struct
import sys
from collections import defaultdict

# Set up import path for project modules
PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, PROJECT_ROOT)
TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))

from parse_resource_fork import parse_resource_fork

try:
    from PIL import Image
except ImportError:
    print("ERROR: Pillow is required. Install with: pip3 install Pillow")
    sys.exit(1)

# Import the PICT decoder from extract_picts_to_png
sys.path.insert(0, TOOLS_DIR)
from extract_picts_to_png import (
    extract_all_packbits_images,
    get_pict_frame,
    composite_images,
)

# ---------------------------------------------------------------------------
# Known resource fork path shortcuts
# ---------------------------------------------------------------------------
RESOURCE_SHORTCUTS = {
    "terrain": os.path.join(PROJECT_ROOT, "Warlords II", "Terrain", "Grasslands", "..namedfork", "rsrc"),
    "grasslands": os.path.join(PROJECT_ROOT, "Warlords II", "Terrain", "Grasslands", "..namedfork", "rsrc"),
    "iceworld": os.path.join(PROJECT_ROOT, "Warlords II", "Terrain", "Ice World", "..namedfork", "rsrc"),
    "mudflats": os.path.join(PROJECT_ROOT, "Warlords II", "Terrain", "Mudflats", "..namedfork", "rsrc"),
    "app": os.path.join(PROJECT_ROOT, "Warlords II", "Warlords II.app", "..namedfork", "rsrc"),
    "shields": os.path.join(PROJECT_ROOT, "Warlords II", "Shields", "Elemental Shields", "..namedfork", "rsrc"),
}

# Image resource types we know how to extract
IMAGE_TYPES = {"PICT", "cicn", "ICN#", "ICON", "crsr", "CURS", "ppat"}

# Default output directory
DEFAULT_OUTPUT = os.path.join(TOOLS_DIR, "viewer_output")


# ===========================================================================
# cicn (Color Icon) parser
# ===========================================================================

def parse_cicn(data):
    """Parse a cicn (color icon) resource into an RGBA PIL Image.

    cicn structure:
        PixMap header       (50 bytes)
        Mask BitMap header  (14 bytes)
        BW BitMap header    (14 bytes)
        iconData handle     (4 bytes)
        Mask bitmap data    (mask_rowBytes * height)
        BW bitmap data      (bw_rowBytes * height)
        Color table (CLUT)  (8 + numColors*8 bytes)
        Pixel data          (pixmap_rowBytes * height)

    Returns (PIL.Image in RGBA mode, info_dict) or (None, info_dict).
    """
    if len(data) < 82:
        return None, {"error": "too short"}

    info = {}

    # -- PixMap header (50 bytes) --
    row_bytes_raw = struct.unpack_from('>H', data, 4)[0]
    row_bytes = row_bytes_raw & 0x3FFF
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 6)
    width = right - left
    height = bottom - top
    pixel_size = struct.unpack_from('>H', data, 32)[0]

    info["width"] = width
    info["height"] = height
    info["pixel_size"] = pixel_size
    info["row_bytes"] = row_bytes

    if width <= 0 or height <= 0 or width > 1024 or height > 1024:
        return None, {**info, "error": f"invalid dimensions {width}x{height}"}

    offset = 50

    # -- Mask BitMap header (14 bytes) --
    mask_rb = struct.unpack_from('>H', data, offset + 4)[0] & 0x3FFF
    mt, ml, mb, mr = struct.unpack_from('>hhhh', data, offset + 6)
    mask_h = mb - mt
    mask_w = mr - ml
    offset += 14

    # -- BW BitMap header (14 bytes) --
    bw_rb = struct.unpack_from('>H', data, offset + 4)[0] & 0x3FFF
    bt, bl, bb, br = struct.unpack_from('>hhhh', data, offset + 6)
    bw_h = bb - bt
    offset += 14

    # -- iconData handle (4 bytes) --
    offset += 4

    # -- Mask data --
    mask_data_size = mask_rb * mask_h
    mask_data = data[offset:offset + mask_data_size]
    offset += mask_data_size

    # -- BW data --
    bw_data_size = bw_rb * bw_h
    offset += bw_data_size

    # -- Color table (CLUT) --
    if offset + 8 > len(data):
        return None, {**info, "error": "truncated before CLUT"}

    ct_seed = struct.unpack_from('>I', data, offset)[0]
    ct_flags = struct.unpack_from('>H', data, offset + 4)[0]
    ct_size = struct.unpack_from('>H', data, offset + 6)[0]
    num_colors = ct_size + 1
    offset += 8

    palette = []
    for i in range(num_colors):
        if offset + 8 > len(data):
            break
        idx = struct.unpack_from('>H', data, offset)[0]
        r = struct.unpack_from('>H', data, offset + 2)[0] >> 8
        g = struct.unpack_from('>H', data, offset + 4)[0] >> 8
        b = struct.unpack_from('>H', data, offset + 6)[0] >> 8
        palette.append((r, g, b))
        offset += 8

    info["num_colors"] = len(palette)

    # -- Pixel data --
    pixel_data_size = row_bytes * height
    if offset + pixel_data_size > len(data):
        return None, {**info, "error": "truncated pixel data"}

    pixel_data = data[offset:offset + pixel_data_size]

    # -- Build RGBA image --
    img = Image.new('RGBA', (width, height), (0, 0, 0, 0))
    pixels = img.load()

    if pixel_size == 8:
        # 8-bit indexed color
        for y in range(height):
            row_start = y * row_bytes
            for x in range(width):
                idx = pixel_data[row_start + x]
                if idx < len(palette):
                    r, g, b = palette[idx]
                else:
                    r, g, b = 255, 0, 255  # magenta for out-of-range

                # Apply mask
                alpha = 255
                if mask_data and y < mask_h and x < mask_w:
                    mask_byte = mask_data[y * mask_rb + (x // 8)]
                    bit = 7 - (x % 8)
                    if not (mask_byte & (1 << bit)):
                        alpha = 0

                pixels[x, y] = (r, g, b, alpha)

    elif pixel_size == 4:
        # 4-bit indexed color
        for y in range(height):
            row_start = y * row_bytes
            for x in range(width):
                byte_offset = row_start + (x // 2)
                if x % 2 == 0:
                    idx = (pixel_data[byte_offset] >> 4) & 0x0F
                else:
                    idx = pixel_data[byte_offset] & 0x0F

                if idx < len(palette):
                    r, g, b = palette[idx]
                else:
                    r, g, b = 255, 0, 255

                alpha = 255
                if mask_data and y < mask_h and x < mask_w:
                    mask_byte = mask_data[y * mask_rb + (x // 8)]
                    bit = 7 - (x % 8)
                    if not (mask_byte & (1 << bit)):
                        alpha = 0

                pixels[x, y] = (r, g, b, alpha)

    elif pixel_size == 2:
        # 2-bit indexed color
        for y in range(height):
            row_start = y * row_bytes
            for x in range(width):
                byte_offset = row_start + (x // 4)
                shift = 6 - 2 * (x % 4)
                idx = (pixel_data[byte_offset] >> shift) & 0x03

                if idx < len(palette):
                    r, g, b = palette[idx]
                else:
                    r, g, b = 255, 0, 255

                alpha = 255
                if mask_data and y < mask_h and x < mask_w:
                    mask_byte = mask_data[y * mask_rb + (x // 8)]
                    bit = 7 - (x % 8)
                    if not (mask_byte & (1 << bit)):
                        alpha = 0

                pixels[x, y] = (r, g, b, alpha)

    elif pixel_size == 1:
        # 1-bit indexed color
        for y in range(height):
            row_start = y * row_bytes
            for x in range(width):
                byte_offset = row_start + (x // 8)
                bit = 7 - (x % 8)
                idx = (pixel_data[byte_offset] >> bit) & 0x01

                if idx < len(palette):
                    r, g, b = palette[idx]
                else:
                    r, g, b = 255, 0, 255

                alpha = 255
                if mask_data and y < mask_h and x < mask_w:
                    mask_byte = mask_data[y * mask_rb + (x // 8)]
                    mbit = 7 - (x % 8)
                    if not (mask_byte & (1 << mbit)):
                        alpha = 0

                pixels[x, y] = (r, g, b, alpha)
    else:
        return None, {**info, "error": f"unsupported pixel depth {pixel_size}"}

    return img, info


# ===========================================================================
# ICN# (Icon with mask) parser - 1-bit 32x32
# ===========================================================================

def parse_icn_hash(data):
    """Parse ICN# resource: 32x32 1-bit icon + 32x32 1-bit mask = 256 bytes.

    Returns (PIL.Image in RGBA, info_dict) or (None, info_dict).
    """
    info = {"width": 32, "height": 32, "pixel_size": 1}

    if len(data) < 256:
        return None, {**info, "error": f"too short ({len(data)} bytes, need 256)"}

    icon_data = data[0:128]    # 32 rows * 4 bytes
    mask_data = data[128:256]  # 32 rows * 4 bytes

    img = Image.new('RGBA', (32, 32), (0, 0, 0, 0))
    pixels = img.load()

    for y in range(32):
        for x in range(32):
            byte_idx = y * 4 + (x // 8)
            bit = 7 - (x % 8)

            icon_bit = (icon_data[byte_idx] >> bit) & 1
            mask_bit = (mask_data[byte_idx] >> bit) & 1

            if mask_bit:
                if icon_bit:
                    pixels[x, y] = (0, 0, 0, 255)
                else:
                    pixels[x, y] = (255, 255, 255, 255)
            else:
                pixels[x, y] = (0, 0, 0, 0)

    return img, info


# ===========================================================================
# ICON parser - 1-bit 32x32, no mask
# ===========================================================================

def parse_icon(data):
    """Parse ICON resource: 32x32 1-bit icon = 128 bytes.

    Returns (PIL.Image in RGBA, info_dict) or (None, info_dict).
    """
    info = {"width": 32, "height": 32, "pixel_size": 1}

    if len(data) < 128:
        return None, {**info, "error": f"too short ({len(data)} bytes, need 128)"}

    img = Image.new('RGBA', (32, 32), (255, 255, 255, 255))
    pixels = img.load()

    for y in range(32):
        for x in range(32):
            byte_idx = y * 4 + (x // 8)
            bit = 7 - (x % 8)
            icon_bit = (data[byte_idx] >> bit) & 1

            if icon_bit:
                pixels[x, y] = (0, 0, 0, 255)
            else:
                pixels[x, y] = (255, 255, 255, 255)

    return img, info


# ===========================================================================
# CURS parser - 1-bit 16x16 cursor with mask
# ===========================================================================

def parse_curs(data):
    """Parse CURS resource: 16x16 cursor (32 bytes) + 16x16 mask (32 bytes) + hotspot (4 bytes).

    Returns (PIL.Image in RGBA, info_dict) or (None, info_dict).
    """
    info = {"width": 16, "height": 16, "pixel_size": 1}

    if len(data) < 68:
        return None, {**info, "error": f"too short ({len(data)} bytes, need 68)"}

    cursor_data = data[0:32]
    mask_data = data[32:64]
    hotspot_y, hotspot_x = struct.unpack_from('>hh', data, 64)
    info["hotspot"] = (hotspot_x, hotspot_y)

    img = Image.new('RGBA', (16, 16), (0, 0, 0, 0))
    pixels = img.load()

    for y in range(16):
        for x in range(16):
            byte_idx = y * 2 + (x // 8)
            bit = 7 - (x % 8)

            cursor_bit = (cursor_data[byte_idx] >> bit) & 1
            mask_bit = (mask_data[byte_idx] >> bit) & 1

            if mask_bit:
                if cursor_bit:
                    pixels[x, y] = (0, 0, 0, 255)
                else:
                    pixels[x, y] = (255, 255, 255, 255)
            else:
                pixels[x, y] = (0, 0, 0, 0)

    return img, info


# ===========================================================================
# crsr (color cursor) parser
# ===========================================================================

def parse_crsr(data):
    """Parse crsr (color cursor) resource.

    Layout:
        0:  crsrType (2)  = 0x8001 for color cursor
        2:  crsrMap  (4)  = offset to PixMap data within this resource
        6:  crsrData (4)  = offset to pixel data within this resource
        10: crsrXData (4) = expanded cursor data (ignored)
        14: crsrXValid (2) = expanded depth
        16: crsrXHandle (4) = reserved
        20: crsr1Data (32) = 1-bit cursor image
        52: crsrMask (32)  = 1-bit cursor mask
        84: crsrHotSpot (4) = hotspot (v, h)
        88: crsrXTable (4) = offset to color table (or 0)
        92: crsrID (4)     = cursor resource ID
        96: PixMap (50 bytes)
        pixmap_offset + 50: ... then pixel data at crsrData offset
        after pixel data: CLUT (color table with indexed entries)

    Returns (PIL.Image in RGBA, info_dict) or (None, info_dict).
    """
    info = {"width": 16, "height": 16}

    if len(data) < 88:
        return None, {**info, "error": "too short for crsr header"}

    crsr_type = struct.unpack_from('>H', data, 0)[0]
    info["crsr_type"] = crsr_type

    pixmap_offset = struct.unpack_from('>I', data, 2)[0]
    pixdata_offset = struct.unpack_from('>I', data, 6)[0]

    cursor_1bit = data[20:52]
    mask_1bit = data[52:84]
    hotspot_y, hotspot_x = struct.unpack_from('>hh', data, 84)
    info["hotspot"] = (hotspot_x, hotspot_y)

    # Try to parse the color pixmap if present
    if pixmap_offset > 0 and pixmap_offset + 50 <= len(data):
        pm_offset = pixmap_offset
        pm_row_bytes_raw = struct.unpack_from('>H', data, pm_offset + 4)[0]
        pm_row_bytes = pm_row_bytes_raw & 0x3FFF
        pm_top, pm_left, pm_bottom, pm_right = struct.unpack_from('>hhhh', data, pm_offset + 6)
        pm_w = pm_right - pm_left
        pm_h = pm_bottom - pm_top
        pm_pixel_size = struct.unpack_from('>H', data, pm_offset + 32)[0]

        info["width"] = pm_w
        info["height"] = pm_h
        info["pixel_size"] = pm_pixel_size

        # In crsr resources, pixel data starts at pixdata_offset (crsrData),
        # and the CLUT follows immediately after the pixel data.
        pixel_data_size = pm_row_bytes * pm_h

        if pixdata_offset > 0 and pixdata_offset + pixel_data_size <= len(data):
            pixel_data = data[pixdata_offset:pixdata_offset + pixel_data_size]

            # CLUT follows pixel data (indexed color table with sparse entries)
            ct_start = pixdata_offset + pixel_data_size
            palette = {}  # sparse: maps index -> (r, g, b)

            if ct_start + 8 <= len(data):
                ct_seed = struct.unpack_from('>I', data, ct_start)[0]
                ct_flags = struct.unpack_from('>H', data, ct_start + 4)[0]
                ct_size = struct.unpack_from('>H', data, ct_start + 6)[0]
                num_entries = ct_size + 1
                ct_off = ct_start + 8

                for i in range(num_entries):
                    if ct_off + 8 > len(data):
                        break
                    idx = struct.unpack_from('>H', data, ct_off)[0]
                    r = struct.unpack_from('>H', data, ct_off + 2)[0] >> 8
                    g = struct.unpack_from('>H', data, ct_off + 4)[0] >> 8
                    b = struct.unpack_from('>H', data, ct_off + 6)[0] >> 8
                    palette[idx] = (r, g, b)
                    ct_off += 8

            info["num_colors"] = len(palette)

            # Render pixel data using the indexed palette
            img = Image.new('RGBA', (pm_w, pm_h), (0, 0, 0, 0))
            pixels = img.load()

            for y in range(pm_h):
                for x in range(pm_w):
                    if pm_pixel_size == 8:
                        pd_idx = y * pm_row_bytes + x
                        idx = pixel_data[pd_idx] if pd_idx < len(pixel_data) else 0
                    elif pm_pixel_size == 4:
                        pd_idx = y * pm_row_bytes + (x // 2)
                        if pd_idx < len(pixel_data):
                            idx = (pixel_data[pd_idx] >> 4) & 0x0F if x % 2 == 0 else pixel_data[pd_idx] & 0x0F
                        else:
                            idx = 0
                    elif pm_pixel_size == 2:
                        pd_idx = y * pm_row_bytes + (x // 4)
                        shift = 6 - 2 * (x % 4)
                        idx = (pixel_data[pd_idx] >> shift) & 0x03 if pd_idx < len(pixel_data) else 0
                    else:
                        pd_idx = y * pm_row_bytes + (x // 8)
                        bit = 7 - (x % 8)
                        idx = (pixel_data[pd_idx] >> bit) & 0x01 if pd_idx < len(pixel_data) else 0

                    if idx in palette:
                        r, g, b = palette[idx]
                    else:
                        r, g, b = 255, 0, 255  # unmapped index

                    # Use 1-bit mask for alpha
                    alpha = 255
                    if y < 16 and x < 16:
                        mask_byte_idx = y * 2 + (x // 8)
                        if mask_byte_idx < len(mask_1bit):
                            mbit = 7 - (x % 8)
                            if not (mask_1bit[mask_byte_idx] & (1 << mbit)):
                                alpha = 0
                    pixels[x, y] = (r, g, b, alpha)

            return img, info

    # Fall back to 1-bit rendering
    info["pixel_size"] = 1
    img = Image.new('RGBA', (16, 16), (0, 0, 0, 0))
    pixels = img.load()

    for y in range(16):
        for x in range(16):
            byte_idx = y * 2 + (x // 8)
            bit = 7 - (x % 8)
            cursor_bit = (cursor_1bit[byte_idx] >> bit) & 1
            mask_bit = (mask_1bit[byte_idx] >> bit) & 1
            if mask_bit:
                if cursor_bit:
                    pixels[x, y] = (0, 0, 0, 255)
                else:
                    pixels[x, y] = (255, 255, 255, 255)

    return img, info


# ===========================================================================
# ppat (pixel pattern) parser
# ===========================================================================

def parse_ppat(data):
    """Parse ppat (pixel pattern) resource.

    Returns (PIL.Image, info_dict) or (None, info_dict).
    """
    info = {}

    if len(data) < 70:
        return None, {"error": "too short"}

    pat_type = struct.unpack_from('>H', data, 0)[0]
    info["pat_type"] = pat_type

    # Old-style 1-bit pattern at offset 2 (8 bytes)
    # PixMap data offset at 10 (4 bytes)
    # PixData offset at 14 (4 bytes)
    pixmap_offset = struct.unpack_from('>I', data, 10)[0]
    pixdata_offset = struct.unpack_from('>I', data, 14)[0]

    if pat_type == 1 and pixmap_offset > 0 and pixmap_offset + 50 <= len(data):
        # Color pattern
        pm = pixmap_offset
        rb_raw = struct.unpack_from('>H', data, pm + 4)[0]
        rb = rb_raw & 0x3FFF
        top, left, bottom, right = struct.unpack_from('>hhhh', data, pm + 6)
        w = right - left
        h = bottom - top
        ps = struct.unpack_from('>H', data, pm + 32)[0]

        info["width"] = w
        info["height"] = h
        info["pixel_size"] = ps

        # CLUT follows pixmap header
        ct_off = pm + 50
        if ct_off + 8 <= len(data):
            ct_size_val = struct.unpack_from('>H', data, ct_off + 6)[0]
            nc = ct_size_val + 1
            ct_off += 8

            palette = []
            for i in range(nc):
                if ct_off + 8 > len(data):
                    break
                r = struct.unpack_from('>H', data, ct_off + 2)[0] >> 8
                g = struct.unpack_from('>H', data, ct_off + 4)[0] >> 8
                b = struct.unpack_from('>H', data, ct_off + 6)[0] >> 8
                palette.append((r, g, b))
                ct_off += 8

            if pixdata_offset > 0 and pixdata_offset < len(data):
                pd = data[pixdata_offset:]
                img = Image.new('RGB', (w, h))
                pixels = img.load()

                for y in range(h):
                    for x in range(w):
                        if ps == 8:
                            pi = y * rb + x
                            idx = pd[pi] if pi < len(pd) else 0
                        elif ps == 4:
                            pi = y * rb + (x // 2)
                            if pi < len(pd):
                                idx = (pd[pi] >> 4) & 0x0F if x % 2 == 0 else pd[pi] & 0x0F
                            else:
                                idx = 0
                        else:
                            idx = 0

                        if idx < len(palette):
                            pixels[x, y] = palette[idx]
                        else:
                            pixels[x, y] = (255, 0, 255)

                return img, info

    # Fall back to 1-bit pattern (8x8)
    info["width"] = 8
    info["height"] = 8
    info["pixel_size"] = 1
    pat_1bit = data[2:10]

    if len(pat_1bit) < 8:
        return None, {**info, "error": "truncated 1-bit pattern"}

    img = Image.new('RGB', (8, 8))
    pixels = img.load()
    for y in range(8):
        for x in range(8):
            bit = 7 - (x % 8)
            if (pat_1bit[y] >> bit) & 1:
                pixels[x, y] = (0, 0, 0)
            else:
                pixels[x, y] = (255, 255, 255)

    return img, info


# ===========================================================================
# PICT extraction (wraps the existing extract_picts_to_png decoder)
# ===========================================================================

def extract_pict(pict_data):
    """Extract a PICT resource into a PIL Image.

    Returns (PIL.Image, info_dict) or (None, info_dict).
    """
    info = {}
    frame = get_pict_frame(pict_data)
    if frame:
        fw = frame[3] - frame[1]
        fh = frame[2] - frame[0]
        info["frame_width"] = fw
        info["frame_height"] = fh
    else:
        info["frame_width"] = 0
        info["frame_height"] = 0

    try:
        images = extract_all_packbits_images(pict_data)
    except Exception as e:
        return None, {**info, "error": str(e)}

    if not images:
        return None, {**info, "error": "no PackBitsRect records found"}

    info["num_records"] = len(images)
    if images:
        info["palette_size"] = len(images[0][5])

    img, palette = composite_images(images, frame)
    if img is None:
        return None, {**info, "error": "composite failed"}

    info["width"] = img.width
    info["height"] = img.height
    return img, info


# ===========================================================================
# Resource summary / listing
# ===========================================================================

def print_resource_summary(resources, source_name):
    """Print a summary table of all resources in a file."""
    by_type = defaultdict(list)
    for r in resources:
        by_type[r.type_str].append(r)

    print()
    print("=" * 76)
    print(f"  RESOURCE SUMMARY: {source_name}")
    print("=" * 76)
    print(f"  Total resources: {len(resources)}")
    print()
    print(f"  {'Type':<8} {'Count':>6}  {'Total Size':>12}  {'ID Range':<24}  Image?")
    print(f"  {'----':<8} {'-----':>6}  {'----------':>12}  {'--------':<24}  ------")

    for type_str in sorted(by_type.keys()):
        entries = by_type[type_str]
        total_size = sum(e.data_size for e in entries)
        ids = sorted(e.res_id for e in entries)
        if len(ids) == 1:
            id_range = str(ids[0])
        elif len(ids) <= 4:
            id_range = ", ".join(str(i) for i in ids)
        else:
            id_range = f"{ids[0]}..{ids[-1]} ({len(ids)} items)"

        is_image = "YES" if type_str in IMAGE_TYPES else ""
        print(f"  {type_str:<8} {len(entries):>6}  {total_size:>12,}  {id_range:<24}  {is_image}")

    print()

    # Detailed listing for image types
    for type_str in sorted(by_type.keys()):
        if type_str not in IMAGE_TYPES:
            continue
        entries = sorted(by_type[type_str], key=lambda e: e.res_id)
        print(f"  --- {type_str} resources ({len(entries)}) ---")
        for r in entries:
            name_part = f'  "{r.name}"' if r.name else ""
            extra = ""
            if type_str == "PICT":
                frame = get_pict_frame(r.data)
                if frame:
                    fw = frame[3] - frame[1]
                    fh = frame[2] - frame[0]
                    extra = f"  frame={fw}x{fh}"
            elif type_str == "cicn":
                if len(r.data) >= 34:
                    top, left, bottom, right = struct.unpack_from('>hhhh', r.data, 6)
                    ps = struct.unpack_from('>H', r.data, 32)[0]
                    extra = f"  {right-left}x{bottom-top} {ps}-bit"
            print(f"    ID {r.res_id:>6}: {r.data_size:>8,} bytes{name_part}{extra}")
        print()


# ===========================================================================
# Extraction dispatcher
# ===========================================================================

def extract_resource_image(res):
    """Dispatch to the appropriate parser based on resource type.

    Returns (PIL.Image, info_dict) or (None, info_dict).
    """
    t = res.type_str
    if t == "PICT":
        return extract_pict(res.data)
    elif t == "cicn":
        return parse_cicn(res.data)
    elif t == "ICN#":
        return parse_icn_hash(res.data)
    elif t == "ICON":
        return parse_icon(res.data)
    elif t == "CURS":
        return parse_curs(res.data)
    elif t == "crsr":
        return parse_crsr(res.data)
    elif t == "ppat":
        return parse_ppat(res.data)
    else:
        return None, {"error": f"unsupported type '{t}'"}


def safe_type_str(type_str):
    """Make a type string safe for use in filenames (replace special chars)."""
    return type_str.replace('#', '_hash').replace(' ', '_').replace('/', '_')


# ===========================================================================
# Contact sheet builder
# ===========================================================================

def build_contact_sheet(images_with_labels, title, columns=8, padding=4,
                        label_height=16, bg_color=(200, 200, 200)):
    """Build a contact sheet image from a list of (PIL.Image, label_str) tuples.

    Returns a PIL.Image or None if no images.
    """
    if not images_with_labels:
        return None

    # Determine cell size from the largest image
    max_w = max(img.width for img, _ in images_with_labels)
    max_h = max(img.height for img, _ in images_with_labels)
    cell_w = max_w + padding * 2
    cell_h = max_h + padding * 2 + label_height

    rows = (len(images_with_labels) + columns - 1) // columns
    sheet_w = columns * cell_w + padding
    sheet_h = rows * cell_h + padding + label_height  # extra for title

    sheet = Image.new('RGBA', (sheet_w, sheet_h), bg_color + (255,))

    # Draw checkerboard background for transparency
    checker_size = 8
    for y in range(sheet_h):
        for x in range(sheet_w):
            if ((x // checker_size) + (y // checker_size)) % 2:
                sheet.putpixel((x, y), (180, 180, 180, 255))

    for i, (img, label) in enumerate(images_with_labels):
        col = i % columns
        row = i // columns
        x_pos = padding + col * cell_w + (cell_w - img.width) // 2
        y_pos = label_height + padding + row * cell_h

        # Paste the image (use alpha composite if RGBA)
        if img.mode == 'RGBA':
            sheet.paste(img, (x_pos, y_pos), img)
        else:
            sheet.paste(img, (x_pos, y_pos))

    return sheet


# ===========================================================================
# Main
# ===========================================================================

def main():
    parser = argparse.ArgumentParser(
        description="Warlords II Resource Viewer - extract and display image resources as PNGs.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""\
Resource file shortcuts:
  terrain / grasslands  -> Terrain/Grasslands resource fork
  iceworld              -> Terrain/Ice World resource fork
  mudflats              -> Terrain/Mudflats resource fork
  app                   -> Main Warlords II.app resource fork
  shields               -> Shields/Elemental Shields resource fork

Resource types that can be extracted as images:
  PICT   - QuickDraw pictures (sprite sheets, backgrounds, etc.)
  cicn   - Color icons (shields, army icons, UI elements)
  ICN#   - 1-bit icons with mask (32x32)
  ICON   - 1-bit icons without mask (32x32)
  crsr   - Color cursors
  CURS   - 1-bit cursors (16x16)
  ppat   - Pixel patterns
  all    - Extract all image types

Examples:
  %(prog)s terrain                    # List all resources in terrain file
  %(prog)s terrain --type PICT        # Extract all PICTs from terrain
  %(prog)s terrain --type cicn        # Extract all cicn from terrain
  %(prog)s app --type cicn --id 3020-3027   # Extract shield cicns from app
  %(prog)s shields --type all         # Extract all images from shields file
  %(prog)s terrain --type PICT --id 30021   # Extract single PICT
  %(prog)s app --type cicn --sheet    # Create contact sheet of all cicns
"""
    )
    parser.add_argument(
        "resource_file",
        help="Path to resource fork file, or a shortcut name (terrain, app, shields, etc.)"
    )
    parser.add_argument(
        "--type", "-t",
        dest="res_type",
        default=None,
        help="Resource type to extract (PICT, cicn, ICN#, ICON, crsr, CURS, ppat, or 'all'). "
             "Omit to just list resources."
    )
    parser.add_argument(
        "--id", "-i",
        dest="res_id",
        default=None,
        help="Resource ID(s) to extract. Single ID, comma-separated list, or range "
             "(e.g. '30021', '3020,3021,3022', '3020-3027')"
    )
    parser.add_argument(
        "--output", "-o",
        default=None,
        help=f"Output directory (default: {DEFAULT_OUTPUT})"
    )
    parser.add_argument(
        "--scale", "-s",
        type=int,
        default=1,
        help="Scale factor for output images (default: 1, try 2-4 for small icons)"
    )
    parser.add_argument(
        "--sheet",
        action="store_true",
        help="Also create a contact sheet combining all extracted images"
    )
    parser.add_argument(
        "--open",
        action="store_true",
        help="Open the output directory in Finder when done (macOS only)"
    )
    args = parser.parse_args()

    # Resolve resource fork path
    rsrc_input = args.resource_file
    if rsrc_input.lower() in RESOURCE_SHORTCUTS:
        rsrc_path = RESOURCE_SHORTCUTS[rsrc_input.lower()]
        source_name = rsrc_input.lower()
    else:
        rsrc_path = rsrc_input
        source_name = os.path.basename(os.path.dirname(rsrc_path))

    if not os.path.exists(rsrc_path):
        print(f"ERROR: Resource fork not found: {rsrc_path}")
        print()
        print("Available shortcuts:")
        for name, path in sorted(RESOURCE_SHORTCUTS.items()):
            exists = "(exists)" if os.path.exists(path) else "(NOT FOUND)"
            print(f"  {name:<14} -> {path}  {exists}")
        sys.exit(1)

    # Resolve output directory
    output_dir = args.output or DEFAULT_OUTPUT
    os.makedirs(output_dir, exist_ok=True)

    # Parse ID filter
    id_filter = None
    if args.res_id:
        id_filter = set()
        for part in args.res_id.split(","):
            part = part.strip()
            if "-" in part:
                lo, hi = part.split("-", 1)
                for rid in range(int(lo), int(hi) + 1):
                    id_filter.add(rid)
            else:
                id_filter.add(int(part))

    # Read and parse resource fork
    print(f"Reading resource fork: {rsrc_path}")
    with open(rsrc_path, 'rb') as f:
        data = f.read()
    print(f"  File size: {len(data):,} bytes")

    resources = parse_resource_fork(data)
    print(f"  Resources found: {len(resources)}")

    # If no type specified, just print summary and exit
    if args.res_type is None:
        print_resource_summary(resources, source_name)
        return

    # Determine which types to extract
    if args.res_type.lower() == "all":
        target_types = IMAGE_TYPES
    else:
        target_types = {args.res_type}

    # Filter resources
    filtered = [r for r in resources if r.type_str in target_types]
    if id_filter:
        filtered = [r for r in filtered if r.res_id in id_filter]
    filtered.sort(key=lambda r: (r.type_str, r.res_id))

    if not filtered:
        print(f"\nNo matching resources found (type={args.res_type}, id={args.res_id})")
        print_resource_summary(resources, source_name)
        return

    print(f"\nExtracting {len(filtered)} resource(s) to: {output_dir}")
    print()

    # Extract each resource
    extracted = 0
    skipped = 0
    errors = 0
    sheet_images = []

    for r in filtered:
        type_safe = safe_type_str(r.type_str)
        label = f"{r.type_str} {r.res_id}"
        name_part = f' "{r.name}"' if r.name else ""
        print(f"  {r.type_str} {r.res_id:>6}{name_part} ({r.data_size:,} bytes)", end="")

        img, info = extract_resource_image(r)

        if img is None:
            err = info.get("error", "unknown error")
            print(f"  -> SKIP: {err}")
            if "error" in info:
                errors += 1
            else:
                skipped += 1
            continue

        # Apply scale
        if args.scale > 1:
            new_w = img.width * args.scale
            new_h = img.height * args.scale
            img = img.resize((new_w, new_h), Image.NEAREST)

        # Save
        out_name = f"{type_safe}_{r.res_id}.png"
        out_path = os.path.join(output_dir, out_name)
        img.save(out_path)
        extracted += 1

        w = info.get("width", img.width)
        h = info.get("height", img.height)
        extra = ""
        if "num_colors" in info:
            extra += f", {info['num_colors']} colors"
        if "pixel_size" in info:
            extra += f", {info['pixel_size']}-bit"
        if "num_records" in info:
            extra += f", {info['num_records']} record(s)"

        print(f"  -> {out_name} ({w}x{h}{extra})")

        # Collect for contact sheet (use un-scaled version)
        if args.sheet:
            # Re-extract without scale for the sheet
            if args.scale > 1:
                sheet_img, _ = extract_resource_image(r)
            else:
                sheet_img = img
            if sheet_img:
                sheet_images.append((sheet_img, label))

    # Build contact sheet if requested
    if args.sheet and sheet_images:
        print()
        sheet = build_contact_sheet(sheet_images, f"{source_name} - {args.res_type}")
        if sheet:
            sheet_name = f"sheet_{source_name}_{safe_type_str(args.res_type or 'all')}.png"
            sheet_path = os.path.join(output_dir, sheet_name)
            sheet.save(sheet_path)
            print(f"  Contact sheet: {sheet_name} ({sheet.width}x{sheet.height})")

    # Summary
    print()
    print("=" * 60)
    print(f"  Output directory: {output_dir}")
    print(f"  Extracted: {extracted}")
    print(f"  Skipped:   {skipped}")
    print(f"  Errors:    {errors}")
    print("=" * 60)

    # Open in Finder if requested
    if args.open and sys.platform == "darwin":
        os.system(f'open "{output_dir}"')


if __name__ == "__main__":
    main()
