#!/usr/bin/env python3
"""
Pixel-level analysis of PICT 30021 road tiles from Grasslands terrain.
PICT 30021 is 640x80, organized as 16 cols x 2 rows of 40x40 tiles (32 tiles total).
Background is palette index 146.
"""
import struct, sys, os
from collections import deque

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
TILE_W, TILE_H = 40, 40
BG_INDEX = 146

def extract_all_packbits_images(pict_data):
    """Extract ALL PackBitsRect records from a PICT, returning list of (pixels, w, h, top, left, palette)."""
    if len(pict_data) < 10:
        return []

    images = []
    offset = 10
    version = 1

    while offset < len(pict_data) - 1:
        if version == 1:
            opcode = pict_data[offset]; offset += 1
        else:
            if offset % 2: offset += 1
            if offset + 2 > len(pict_data): break
            opcode = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2

        if opcode == 0x11:
            ver = pict_data[offset]; offset += 1
            if ver == 2: version = 2; offset += 1
            continue
        if opcode == 0x0C00: offset += 24; continue
        if opcode == 0x1E: continue
        if opcode == 1: offset += struct.unpack_from('>H', pict_data, offset)[0]; continue
        if opcode == 0: continue
        if opcode in (3,4,5,0xD,8,0x15,0x16): offset += 2; continue
        if opcode == 7: offset += 4; continue
        if opcode in (9,0xA): offset += 8; continue
        if opcode == 0xB: offset += 4; continue
        if opcode == 0x1A: continue
        if opcode in (0x18,0x19): offset += 6; continue
        if opcode == 0x20: offset += 8; continue
        if opcode == 0x21: offset += 4; continue
        if opcode in range(0x28,0x2F): offset += 6; continue
        if opcode in range(0x30,0x35): offset += 8; continue
        if opcode in range(0x38,0x3C): continue

        if opcode in (0x98, 0x99):
            rr = struct.unpack_from('>H', pict_data, offset)[0]
            rb = rr & 0x3FFF
            t, l, b, r = struct.unpack_from('>hhhh', pict_data, offset + 2)
            pw, ph = r - l, b - t

            if rr & 0x8000:
                offset += 46
                nc = struct.unpack_from('>H', pict_data, offset + 6)[0] + 1
                offset += 8
                pal = []
                for i in range(nc):
                    cr = struct.unpack_from('>H', pict_data, offset + 2)[0] >> 8
                    cg = struct.unpack_from('>H', pict_data, offset + 4)[0] >> 8
                    cb = struct.unpack_from('>H', pict_data, offset + 6)[0] >> 8
                    pal.append((cr, cg, cb))
                    offset += 8
            else:
                pal = [(255,255,255), (0,0,0)]
                offset += 10

            offset += 18  # src/dst rects + mode

            if opcode == 0x99:
                offset += struct.unpack_from('>H', pict_data, offset)[0]

            px = [[0] * pw for _ in range(ph)]
            for row in range(ph):
                if rb > 250:
                    bc = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2
                else:
                    bc = pict_data[offset]; offset += 1
                re = offset + bc
                un = bytearray()
                while offset < re:
                    f = struct.unpack_from('>b', pict_data, offset)[0]; offset += 1
                    if f >= 0:
                        c = f + 1; un.extend(pict_data[offset:offset+c]); offset += c
                    elif f != -128:
                        c = -f + 1; v = pict_data[offset]; offset += 1; un.extend([v]*c)
                for x in range(min(pw, len(un))):
                    px[row][x] = un[x]

            images.append((px, pw, ph, t, l, pal))
            continue

        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset + 2)[0]
        elif opcode == 0xA0: offset += 2
        else: break

    return images


# Load the resource fork and find PICT 30021
with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

pict_data_21 = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data_21 = r.data
        break

if not pict_data_21:
    print("ERROR: PICT 30021 not found!")
    sys.exit(1)

images = extract_all_packbits_images(pict_data_21)
if not images:
    print("ERROR: No image records found in PICT 30021!")
    sys.exit(1)

px_img, img_w, img_h, img_top, img_left, palette = images[0]
print(f"PICT 30021: {img_w}x{img_h} at ({img_left},{img_top})")
print(f"Palette size: {len(palette)} entries")
if BG_INDEX < len(palette):
    print(f"Background index {BG_INDEX} = RGB{palette[BG_INDEX]}")
print()

# If the image is smaller than expected, check for multiple image records
if img_h < 80 and len(images) > 1:
    print(f"Multiple image records found ({len(images)}), compositing...")
    # Composite all images into a single 640x80 canvas
    full_px = [[BG_INDEX] * 640 for _ in range(80)]
    for pxi, w, h, top, left, pal in images:
        for y in range(h):
            for x in range(w):
                if top + y < 80 and left + x < 640:
                    full_px[top + y][left + x] = pxi[y][x]
    px = full_px
    canvas_w, canvas_h = 640, 80
else:
    px = px_img
    canvas_w, canvas_h = img_w, img_h

num_cols = canvas_w // TILE_W
num_rows = canvas_h // TILE_H
total_tiles = num_cols * num_rows
print(f"Canvas: {canvas_w}x{canvas_h}, Grid: {num_cols} cols x {num_rows} rows = {total_tiles} tiles")
print()

# Direction labels for bitmask
DIR_NAMES = {0: "NONE", 1: "N", 2: "E", 4: "S", 8: "W",
             3: "NE", 5: "NS", 9: "NW", 6: "ES", 10: "EW", 12: "SW",
             7: "NES", 11: "NEW", 13: "NSW", 14: "ESW", 15: "NESW"}

print("=" * 120)
print(f"{'Tile':>4} {'Row':>3} {'Col':>3} {'NonBG':>6} {'Dirs':>5} {'Narrow':>8} {'Broad':>8} {'N-exit pixels':20} {'E-exit pixels':20} {'S-exit pixels':20} {'W-exit pixels':20}")
print("=" * 120)

tile_info = []

for tile_idx in range(total_tiles):
    row = tile_idx // num_cols
    col = tile_idx % num_cols
    x0 = col * TILE_W
    y0 = row * TILE_H

    # Count total non-bg pixels
    non_bg_count = 0
    for ty in range(TILE_H):
        for tx in range(TILE_W):
            if px[y0 + ty][x0 + tx] != BG_INDEX:
                non_bg_count += 1

    # --- Narrow check: middle columns/rows at edges ---
    # NORTH: middle cols (19-20) at top rows (0-1)
    n_narrow_pixels = []
    for ty in range(2):
        for tx in range(19, 21):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                n_narrow_pixels.append((tx, ty, val))

    # EAST: middle rows (19-20) at right cols (38-39)
    e_narrow_pixels = []
    for ty in range(19, 21):
        for tx in range(38, 40):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                e_narrow_pixels.append((tx, ty, val))

    # SOUTH: middle cols (19-20) at bottom rows (38-39)
    s_narrow_pixels = []
    for ty in range(38, 40):
        for tx in range(19, 21):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                s_narrow_pixels.append((tx, ty, val))

    # WEST: middle rows (19-20) at left cols (0-1)
    w_narrow_pixels = []
    for ty in range(19, 21):
        for tx in range(2):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                w_narrow_pixels.append((tx, ty, val))

    narrow_mask = 0
    if n_narrow_pixels: narrow_mask |= 1
    if e_narrow_pixels: narrow_mask |= 2
    if s_narrow_pixels: narrow_mask |= 4
    if w_narrow_pixels: narrow_mask |= 8

    # --- Broad check: any non-bg pixel in top/bottom 3 rows, left/right 3 cols ---
    n_broad_pixels = []
    for ty in range(3):
        for tx in range(TILE_W):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                n_broad_pixels.append((tx, ty, val))

    e_broad_pixels = []
    for ty in range(TILE_H):
        for tx in range(37, 40):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                e_broad_pixels.append((tx, ty, val))

    s_broad_pixels = []
    for ty in range(37, 40):
        for tx in range(TILE_W):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                s_broad_pixels.append((tx, ty, val))

    w_broad_pixels = []
    for ty in range(TILE_H):
        for tx in range(3):
            val = px[y0 + ty][x0 + tx]
            if val != BG_INDEX:
                w_broad_pixels.append((tx, ty, val))

    broad_mask = 0
    if n_broad_pixels: broad_mask |= 1
    if e_broad_pixels: broad_mask |= 2
    if s_broad_pixels: broad_mask |= 4
    if w_broad_pixels: broad_mask |= 8

    # Format exit pixel info
    def fmt_pixels(pxlist, max_show=5):
        if not pxlist:
            return "none"
        coords = [f"({p[0]},{p[1]})" for p in pxlist[:max_show]]
        s = " ".join(coords)
        if len(pxlist) > max_show:
            s += f" +{len(pxlist)-max_show}more"
        return s

    narrow_str = DIR_NAMES.get(narrow_mask, f"?{narrow_mask}")
    broad_str = DIR_NAMES.get(broad_mask, f"?{broad_mask}")

    print(f"{tile_idx:4d} {row:3d} {col:3d} {non_bg_count:6d} {narrow_str:>5} {narrow_str:>8} {broad_str:>8}  "
          f"N:{fmt_pixels(n_narrow_pixels):18s}  E:{fmt_pixels(e_narrow_pixels):18s}  "
          f"S:{fmt_pixels(s_narrow_pixels):18s}  W:{fmt_pixels(w_narrow_pixels):18s}")

    tile_info.append({
        'idx': tile_idx, 'row': row, 'col': col,
        'non_bg': non_bg_count,
        'narrow_mask': narrow_mask, 'broad_mask': broad_mask,
        'narrow_str': narrow_str, 'broad_str': broad_str,
    })

# --- Part 3: Connectivity check for corner tiles (exactly 2 exits) ---
print()
print("=" * 80)
print("CONNECTIVITY CHECK: Tiles with exactly 2 exits (narrow check)")
print("=" * 80)

def count_bits(n):
    c = 0
    while n:
        c += n & 1
        n >>= 1
    return c

def check_connectivity(px, y0, x0, bg, exit_mask):
    """
    BFS from one exit zone to the other through non-bg pixels.
    Returns True if connected.
    """
    # Define exit zones based on mask
    exit_zones = []
    if exit_mask & 1:  # N
        zone = set()
        for ty in range(3):
            for tx in range(TILE_W):
                if px[y0+ty][x0+tx] != bg:
                    zone.add((tx, ty))
        if zone: exit_zones.append(zone)
    if exit_mask & 2:  # E
        zone = set()
        for ty in range(TILE_H):
            for tx in range(37, 40):
                if px[y0+ty][x0+tx] != bg:
                    zone.add((tx, ty))
        if zone: exit_zones.append(zone)
    if exit_mask & 4:  # S
        zone = set()
        for ty in range(37, 40):
            for tx in range(TILE_W):
                if px[y0+ty][x0+tx] != bg:
                    zone.add((tx, ty))
        if zone: exit_zones.append(zone)
    if exit_mask & 8:  # W
        zone = set()
        for ty in range(TILE_H):
            for tx in range(3):
                if px[y0+ty][x0+tx] != bg:
                    zone.add((tx, ty))
        if zone: exit_zones.append(zone)

    if len(exit_zones) < 2:
        return False, "insufficient exit zones"

    # Build set of all non-bg pixels
    all_nonbg = set()
    for ty in range(TILE_H):
        for tx in range(TILE_W):
            if px[y0+ty][x0+tx] != bg:
                all_nonbg.add((tx, ty))

    # BFS from first exit zone, check if we reach second exit zone
    start_zone = exit_zones[0]
    target_zone = exit_zones[1]

    visited = set()
    queue = deque()
    for p in start_zone:
        queue.append(p)
        visited.add(p)

    while queue:
        cx, cy = queue.popleft()
        if (cx, cy) in target_zone:
            return True, "connected"
        # 8-connectivity
        for dx in (-1, 0, 1):
            for dy in (-1, 0, 1):
                if dx == 0 and dy == 0: continue
                nx, ny = cx + dx, cy + dy
                if (nx, ny) in all_nonbg and (nx, ny) not in visited:
                    visited.add((nx, ny))
                    queue.append((nx, ny))

    return False, f"disconnected (reached {len(visited)} of {len(all_nonbg)} non-bg pixels)"

for info in tile_info:
    mask = info['narrow_mask']
    if count_bits(mask) == 2:
        connected, msg = check_connectivity(px, info['row'] * TILE_H, info['col'] * TILE_W, BG_INDEX, mask)
        status = "OK" if connected else "FAIL"
        print(f"  Tile {info['idx']:2d} ({info['narrow_str']:>3}): {status} - {msg}")

# Also check tiles with broad_mask having exactly 2 exits where narrow disagrees
print()
print("Tiles where broad check differs from narrow check:")
for info in tile_info:
    if info['narrow_mask'] != info['broad_mask']:
        print(f"  Tile {info['idx']:2d}: narrow={info['narrow_str']:>5}, broad={info['broad_str']:>5}")

# --- Part 4: Summary mapping ---
print()
print("=" * 80)
print("SUMMARY: Tile direction mapping")
print("=" * 80)
print(f"{'Tile':>4} {'Index':>5} {'Narrow':>8} {'Broad':>8} {'NonBG':>6} {'Label'}")
print("-" * 60)

LABEL_MAP = {
    0: "blank/no road",
    1: "N dead-end",
    2: "E dead-end",
    4: "S dead-end",
    8: "W dead-end",
    3: "NE corner",
    5: "NS straight",
    9: "NW corner",
    6: "SE corner",
    10: "EW straight",
    12: "SW corner",
    7: "NES T-junction",
    11: "NEW T-junction",
    13: "NSW T-junction",
    14: "ESW T-junction",
    15: "NESW crossroads",
}

for info in tile_info:
    narrow = info['narrow_mask']
    broad = info['broad_mask']
    label = LABEL_MAP.get(narrow, f"unknown({narrow})")
    marker = ""
    if narrow != broad:
        marker = f"  ** broad={info['broad_str']}"
    print(f"{info['idx']:4d} r{info['row']}c{info['col']:>2d}  {info['narrow_str']:>8} {info['broad_str']:>8} {info['non_bg']:6d}  {label}{marker}")

# --- Detailed pixel dump for first few interesting tiles ---
print()
print("=" * 80)
print("DETAILED: Unique palette indices used per tile")
print("=" * 80)
for info in tile_info:
    row = info['row']
    col = info['col']
    x0 = col * TILE_W
    y0 = row * TILE_H
    indices_used = set()
    for ty in range(TILE_H):
        for tx in range(TILE_W):
            val = px[y0+ty][x0+tx]
            if val != BG_INDEX:
                indices_used.add(val)
    if indices_used:
        idx_list = sorted(indices_used)
        colors = [f"{i}=RGB{palette[i]}" if i < len(palette) else f"{i}=?" for i in idx_list]
        print(f"  Tile {info['idx']:2d} ({info['narrow_str']:>5}): {len(indices_used)} unique indices: {', '.join(colors)}")
    else:
        print(f"  Tile {info['idx']:2d} ({info['narrow_str']:>5}): all background")

# --- Visual ASCII dump of a few key tiles ---
print()
print("=" * 80)
print("ASCII VISUALIZATION: Key tiles (. = bg, # = road)")
print("=" * 80)

# Show tiles 0-5 and a few interesting ones
interesting = list(range(min(6, total_tiles)))
# Also add one of each direction type if not already shown
seen_masks = set()
for info in tile_info:
    if info['narrow_mask'] not in seen_masks and info['idx'] not in interesting:
        interesting.append(info['idx'])
    seen_masks.add(info['narrow_mask'])
interesting.sort()

for tidx in interesting:
    info = tile_info[tidx]
    row = info['row']
    col = info['col']
    x0 = col * TILE_W
    y0 = row * TILE_H

    print(f"\nTile {tidx} (r{row}c{col}) - {info['narrow_str']} ({LABEL_MAP.get(info['narrow_mask'], '?')}), {info['non_bg']} non-bg pixels:")

    # Print every 2nd row for compactness
    for ty in range(0, TILE_H, 2):
        line = ""
        for tx in range(0, TILE_W, 1):
            val = px[y0+ty][x0+tx]
            if val == BG_INDEX:
                line += "."
            else:
                line += "#"
        print(f"  {ty:2d}| {line}")
