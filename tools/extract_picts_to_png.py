#!/usr/bin/env python3
"""
Extract ALL PICT resources from a Warlords II resource fork file and save them
as PNG images viewable in macOS Preview.

Decodes PackBitsRect (opcodes 0x98/0x99) image data, composites multiple image
records within a single PICT onto one canvas, and maps palette indices to RGB.

Usage:
    python3 extract_picts_to_png.py [resource_fork_path] [--output DIR] [--ids ID1,ID2,...]

Examples:
    # Extract all PICTs from the Grasslands terrain file (default)
    python3 extract_picts_to_png.py

    # Extract from the main game resource fork
    python3 extract_picts_to_png.py "/path/to/Warlords II/Warlords II/..namedfork/rsrc"

    # Extract only specific PICT IDs
    python3 extract_picts_to_png.py --ids 30021,30022,30023

    # Specify output directory
    python3 extract_picts_to_png.py --output /tmp/picts
"""

import argparse
import os
import struct
import sys

# Import the project's resource fork parser from the parent directory
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

try:
    from PIL import Image
except ImportError:
    print("ERROR: Pillow is required. Install with: pip3 install Pillow")
    sys.exit(1)

# Default resource fork paths
DEFAULT_TERRAIN = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "Warlords II", "Terrain", "Grasslands", "..namedfork", "rsrc"
)
DEFAULT_GAME = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "Warlords II", "Warlords II.app", "..namedfork", "rsrc"
)


def extract_all_packbits_images(pict_data):
    """Extract ALL PackBitsRect records from a PICT.

    Returns a list of tuples: (pixels_2d, width, height, top, left, palette)
    where pixels_2d is a list of rows, each row a list of palette index values.
    """
    if len(pict_data) < 10:
        return []

    images = []
    offset = 10  # skip PICT header (size word + frame rect)
    version = 1

    while offset < len(pict_data) - 1:
        # Read opcode
        if version == 1:
            opcode = pict_data[offset]
            offset += 1
        else:
            # V2 opcodes are word-aligned
            if offset % 2:
                offset += 1
            if offset + 2 > len(pict_data):
                break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2

        # --- Skip known non-image opcodes ---
        if opcode == 0x11:  # Version
            ver = pict_data[offset]
            offset += 1
            if ver == 2:
                version = 2
                offset += 1  # skip 0xFF sub-version byte
            continue

        if opcode == 0x0C00:  # HeaderOp (v2 extended header)
            offset += 24
            continue

        if opcode == 0x1E:  # DefHilite - 0 data bytes
            continue

        if opcode == 1:  # Clip region
            region_size = struct.unpack_from('>H', pict_data, offset)[0]
            offset += region_size
            continue

        if opcode == 0:  # NOP
            continue

        # Fixed-size small opcodes
        if opcode in (3, 4, 5, 0xD, 8, 0x15, 0x16):
            offset += 2
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
        if opcode == 0x1A:  # RGBFgCol - 0 extra after the opcode? Actually 6 bytes
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
        if 0x28 <= opcode <= 0x2E:
            offset += 6
            continue
        if 0x30 <= opcode <= 0x34:
            offset += 8
            continue
        if 0x38 <= opcode <= 0x3B:
            continue

        # --- PackBitsRect (0x98) and PackBitsRgn (0x99) ---
        if opcode in (0x98, 0x99):
            saved_offset = offset
            try:
                img = _parse_packbits_record(pict_data, offset, opcode)
                if img is not None:
                    images.append(img[0])
                    offset = img[1]
                    continue
            except (struct.error, IndexError, ValueError):
                # If parsing fails, stop
                break

        # --- End of picture ---
        if opcode in (0xFF, 0xFFFF):
            break

        # --- Unknown opcodes: try to skip ---
        if version == 2 and opcode >= 0x100:
            skip = (opcode >> 8) * 2
            offset += skip
        elif opcode == 0xA1:  # LongComment
            offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
        elif opcode == 0xA0:  # ShortComment
            offset += 2
        else:
            # Can't determine size; stop parsing
            break

    return images


def _parse_packbits_record(pict_data, offset, opcode):
    """Parse a single PackBitsRect/PackBitsRgn record starting at offset.

    Returns ((pixels, width, height, top, left, palette), new_offset) or None.
    """
    # PixMap or BitMap header starts here
    row_bytes_raw = struct.unpack_from('>H', pict_data, offset)[0]
    row_bytes = row_bytes_raw & 0x3FFF
    has_color_table = bool(row_bytes_raw & 0x8000)

    # Bounds rect
    top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, offset + 2)
    pw = right - left
    ph = bottom - top

    if pw <= 0 or ph <= 0 or pw > 4096 or ph > 4096:
        return None

    if has_color_table:
        # PixMap header: rowBytes(2) + bounds(8) + pmVersion(2) + packType(2) +
        # packSize(4) + hRes(4) + vRes(4) + pixelType(2) + pixelSize(2) +
        # cmpCount(2) + cmpSize(2) + planeBytes(4) + pmTable(4) + pmReserved(4)
        # = 46 bytes total from rowBytes
        # pixelSize is at byte 28 within the PixMap record:
        #   rowBytes(2) + bounds(8) + pmVersion(2) + packType(2) + packSize(4)
        #   + hRes(4) + vRes(4) + pixelType(2) + pixelSize(2) = offset+28
        pixel_size = struct.unpack_from('>H', pict_data, offset + 28)[0]
        offset += 46

        # Color table: seed(4) + flags(2) + count(2) + entries(count+1 * 8)
        ct_count = struct.unpack_from('>H', pict_data, offset + 6)[0] + 1
        offset += 8
        palette = []
        for i in range(ct_count):
            # Each entry: index(2) + red(2) + green(2) + blue(2)
            r_val = struct.unpack_from('>H', pict_data, offset + 2)[0] >> 8
            g_val = struct.unpack_from('>H', pict_data, offset + 4)[0] >> 8
            b_val = struct.unpack_from('>H', pict_data, offset + 6)[0] >> 8
            palette.append((r_val, g_val, b_val))
            offset += 8
    else:
        # BitMap: rowBytes(2) + bounds(8) = 10 bytes
        pixel_size = 1
        palette = [(255, 255, 255), (0, 0, 0)]
        offset += 10

    # Source rect (8 bytes) + destination rect (8 bytes) + transfer mode (2 bytes) = 18
    offset += 18

    # For PackBitsRgn (0x99), skip the mask region
    if opcode == 0x99:
        mask_size = struct.unpack_from('>H', pict_data, offset)[0]
        offset += mask_size

    # Decode PackBits pixel data row by row
    pixels = [[0] * pw for _ in range(ph)]

    if pixel_size <= 8:
        pixels_per_byte = 8 // pixel_size if pixel_size > 0 else 8
        mask = (1 << pixel_size) - 1
    else:
        pixels_per_byte = 1
        mask = 0xFF

    for row in range(ph):
        # Read byte count for this row
        if row_bytes > 250:
            byte_count = struct.unpack_from('>H', pict_data, offset)[0]
            offset += 2
        else:
            byte_count = pict_data[offset]
            offset += 1

        row_end = offset + byte_count
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

        # Map unpacked bytes to pixel indices
        if pixel_size == 8:
            for x in range(min(pw, len(unpacked))):
                pixels[row][x] = unpacked[x]
        elif pixel_size < 8:
            px_idx = 0
            for byte_val in unpacked:
                for bit_pos in range(pixels_per_byte - 1, -1, -1):
                    if px_idx >= pw:
                        break
                    pixels[row][px_idx] = (byte_val >> (bit_pos * pixel_size)) & mask
                    px_idx += 1
                if px_idx >= pw:
                    break
        else:
            # pixel_size > 8 (e.g. 16 or 32 bit direct color) - store raw bytes
            for x in range(min(pw, len(unpacked))):
                pixels[row][x] = unpacked[x]

    return (pixels, pw, ph, top, left, palette), offset


def get_pict_frame(pict_data):
    """Extract the frame rectangle from a PICT header.

    Returns (top, left, bottom, right) or None.
    """
    if len(pict_data) < 10:
        return None
    top = struct.unpack_from('>h', pict_data, 2)[0]
    left = struct.unpack_from('>h', pict_data, 4)[0]
    bottom = struct.unpack_from('>h', pict_data, 6)[0]
    right = struct.unpack_from('>h', pict_data, 8)[0]
    return (top, left, bottom, right)


def composite_images(images, frame):
    """Composite multiple image records onto a single canvas.

    Args:
        images: list of (pixels_2d, width, height, top, left, palette)
        frame: (top, left, bottom, right) from PICT header

    Returns:
        (PIL.Image, palette_used) or (None, None) if no images.
    """
    if not images:
        return None, None

    # Determine canvas size from the PICT frame rectangle
    if frame:
        frame_top, frame_left, frame_bottom, frame_right = frame
        canvas_w = frame_right - frame_left
        canvas_h = frame_bottom - frame_top
        origin_x = frame_left
        origin_y = frame_top
    else:
        # Fall back to bounding box of all images
        min_x = min(img[4] for img in images)
        min_y = min(img[3] for img in images)
        max_x = max(img[4] + img[1] for img in images)
        max_y = max(img[3] + img[2] for img in images)
        canvas_w = max_x - min_x
        canvas_h = max_y - min_y
        origin_x = min_x
        origin_y = min_y

    if canvas_w <= 0 or canvas_h <= 0:
        return None, None

    # Use the palette from the first image (all images in a PICT typically
    # share the same palette)
    palette = images[0][5]

    # Create canvas initialized to palette index 0
    canvas = [[0] * canvas_w for _ in range(canvas_h)]

    # Composite each image record onto the canvas at its destination position
    for pixels, w, h, top, left, pal in images:
        for y in range(h):
            cy = top - origin_y + y
            if cy < 0 or cy >= canvas_h:
                continue
            for x in range(w):
                cx = left - origin_x + x
                if cx < 0 or cx >= canvas_w:
                    continue
                canvas[cy][cx] = pixels[y][x]

    # Convert to PIL Image
    img = Image.new('RGB', (canvas_w, canvas_h))
    img_pixels = img.load()

    for y in range(canvas_h):
        for x in range(canvas_w):
            idx = canvas[y][x]
            if idx < len(palette):
                img_pixels[x, y] = palette[idx]
            else:
                # Out-of-range index: render as magenta to flag it
                img_pixels[x, y] = (255, 0, 255)

    return img, palette


def main():
    parser = argparse.ArgumentParser(
        description="Extract PICT resources from a Mac resource fork and save as PNG.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""\
Known resource fork locations:
  Terrain:  "Warlords II/Terrain/Grasslands/..namedfork/rsrc"
  Game:     "Warlords II/Warlords II.app/..namedfork/rsrc"

Output files are named PICT_<ID>.png in the output directory.
"""
    )
    parser.add_argument(
        "resource_fork",
        nargs="?",
        default=DEFAULT_TERRAIN,
        help="Path to the resource fork file (default: Grasslands terrain)"
    )
    parser.add_argument(
        "--output", "-o",
        default=None,
        help="Output directory for PNG files (default: output/ next to this script)"
    )
    parser.add_argument(
        "--ids",
        default=None,
        help="Comma-separated list of PICT IDs to extract (default: all)"
    )
    args = parser.parse_args()

    # Resolve output directory
    if args.output:
        output_dir = args.output
    else:
        output_dir = os.path.join(os.path.dirname(os.path.abspath(__file__)), "output")

    os.makedirs(output_dir, exist_ok=True)

    # Parse ID filter
    id_filter = None
    if args.ids:
        id_filter = set(int(x.strip()) for x in args.ids.split(","))

    # Read resource fork
    rsrc_path = args.resource_fork
    if not os.path.exists(rsrc_path):
        print(f"ERROR: Resource fork not found: {rsrc_path}")
        sys.exit(1)

    print(f"Reading resource fork: {rsrc_path}")
    with open(rsrc_path, 'rb') as f:
        data = f.read()
    print(f"  File size: {len(data):,} bytes")

    resources = parse_resource_fork(data)

    # Filter to PICT resources
    picts = [r for r in resources if r.type_str == 'PICT']
    if id_filter:
        picts = [r for r in picts if r.res_id in id_filter]
    picts.sort(key=lambda r: r.res_id)

    if not picts:
        print("No PICT resources found.")
        sys.exit(0)

    print(f"  Found {len(picts)} PICT resource(s)")
    print()

    # Process each PICT
    extracted = 0
    skipped = 0
    errors = 0
    summary_lines = []

    for r in picts:
        pict_id = r.res_id
        pict_data = r.data
        frame = get_pict_frame(pict_data)

        if frame:
            frame_w = frame[3] - frame[1]
            frame_h = frame[2] - frame[0]
        else:
            frame_w = frame_h = 0

        print(f"  PICT {pict_id}: {len(pict_data):,} bytes, frame {frame_w}x{frame_h}", end="")

        try:
            images = extract_all_packbits_images(pict_data)
        except Exception as e:
            print(f"  -> ERROR parsing: {e}")
            errors += 1
            summary_lines.append(f"  PICT {pict_id:>6}: ERROR - {e}")
            continue

        if not images:
            print(f"  -> no PackBitsRect records found, skipping")
            skipped += 1
            summary_lines.append(
                f"  PICT {pict_id:>6}: skipped (no image data)"
            )
            continue

        print(f", {len(images)} image record(s)", end="")

        # Log image record details
        for i, (px, w, h, top, left, pal) in enumerate(images):
            if len(images) > 1:
                print(f"\n    record {i}: {w}x{h} at ({left},{top}), {len(pal)} colors", end="")

        # Composite and save
        img, palette = composite_images(images, frame)
        if img is None:
            print(f"  -> composite failed, skipping")
            skipped += 1
            summary_lines.append(
                f"  PICT {pict_id:>6}: skipped (composite failed)"
            )
            continue

        out_name = f"PICT_{pict_id}.png"
        out_path = os.path.join(output_dir, out_name)
        img.save(out_path)
        extracted += 1
        print(f"  -> {out_name} ({img.width}x{img.height})")
        summary_lines.append(
            f"  PICT {pict_id:>6}: {img.width:>4}x{img.height:<4}  "
            f"{len(images)} record(s)  {len(pict_data):>8,} bytes  -> {out_name}"
        )

    # Print summary
    print()
    print("=" * 60)
    print("SUMMARY")
    print("=" * 60)
    print(f"  Output directory: {output_dir}")
    print(f"  Extracted: {extracted}")
    print(f"  Skipped:   {skipped}")
    print(f"  Errors:    {errors}")
    print()
    for line in summary_lines:
        print(line)
    print()


if __name__ == '__main__':
    main()
