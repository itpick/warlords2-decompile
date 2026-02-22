#!/usr/bin/env python3
"""
Compare road tiles from PICT 30022 (terrain, y=160 row) vs PICT 30021 (road sprite sheet).
Extract tiles, analyze edge directions, save 3x-zoom PNGs for visual inspection.
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

try:
    from PIL import Image
except ImportError:
    print("Installing Pillow...")
    import subprocess
    subprocess.check_call([sys.executable, "-m", "pip", "install", "Pillow", "-q"])
    from PIL import Image

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
OUTPUT_DIR = "/Users/lucaspick/workspace/itpick/warlords2-decompile/tools/output/terrain_road_tiles"
TILE_W, TILE_H = 40, 40
ZOOM = 3
EDGE_STRIP = 5  # pixels from edge to check for exits

# Expected autotile mapping from original game
EXPECTED_AUTOTILE = {
    0: ("EW", "horizontal"),
    1: ("NS", "vertical"),
    2: ("NESW", "crossroad"),
    3: ("ESW", "T-junction south"),
    4: ("NSW", "T-junction west"),
    5: ("NEW", "T-junction north"),
    6: ("NES", "T-junction east"),
    7: ("SW", "corner SW"),
    8: ("NW", "corner NW"),
    9: ("NE", "corner NE"),
    10: ("SE", "corner SE"),
    11: ("W", "dead-end west"),
    12: ("S", "dead-end south"),
    13: ("E", "dead-end east"),
    14: ("N", "dead-end north"),
}


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


def analyze_tile_edges(pixels, x0, y0, tw, th, bg_idx, strip=EDGE_STRIP):
    """Analyze a tile's edge exits. Returns dict with N/S/E/W boolean and pixel counts."""
    # North edge: top `strip` rows
    n_pixels = sum(1 for y in range(strip) for x in range(tw)
                   if pixels[y0 + y][x0 + x] != bg_idx)
    # South edge: bottom `strip` rows
    s_pixels = sum(1 for y in range(th - strip, th) for x in range(tw)
                   if pixels[y0 + y][x0 + x] != bg_idx)
    # East edge: right `strip` columns
    e_pixels = sum(1 for y in range(th) for x in range(tw - strip, tw)
                   if pixels[y0 + y][x0 + x] != bg_idx)
    # West edge: left `strip` columns
    w_pixels = sum(1 for y in range(th) for x in range(strip)
                   if pixels[y0 + y][x0 + x] != bg_idx)
    # Total non-bg
    total = sum(1 for y in range(th) for x in range(tw)
                if pixels[y0 + y][x0 + x] != bg_idx)

    return {
        'N': n_pixels > 0, 'S': s_pixels > 0,
        'E': e_pixels > 0, 'W': w_pixels > 0,
        'n_px': n_pixels, 's_px': s_pixels,
        'e_px': e_pixels, 'w_px': w_pixels,
        'total': total,
    }


def edge_dirs_str(info):
    """Return direction string like 'NESW' from edge info."""
    dirs = ""
    if info['N']: dirs += "N"
    if info['E']: dirs += "E"
    if info['S']: dirs += "S"
    if info['W']: dirs += "W"
    return dirs if dirs else "none"


def save_tile_png(pixels, x0, y0, tw, th, palette, filename, zoom=ZOOM):
    """Save a single tile as a zoomed PNG."""
    img = Image.new('RGB', (tw * zoom, th * zoom))
    for y in range(th):
        for x in range(tw):
            idx = pixels[y0 + y][x0 + x]
            color = palette[idx] if idx < len(palette) else (0, 0, 0)
            for zy in range(zoom):
                for zx in range(zoom):
                    img.putpixel((x * zoom + zx, y * zoom + zy), color)
    img.save(filename)


def find_bg_index(pixels, x0, y0, tw, th):
    """Find the most common pixel index in a tile (assumed to be background)."""
    from collections import Counter
    counts = Counter()
    for y in range(th):
        for x in range(tw):
            counts[pixels[y0 + y][x0 + x]] += 1
    return counts.most_common(1)[0][0]


# ============================================================================
# MAIN
# ============================================================================
os.makedirs(OUTPUT_DIR, exist_ok=True)

print("=" * 80)
print("ROAD TILE COMPARISON: PICT 30022 (terrain) vs PICT 30021 (road sprite sheet)")
print("=" * 80)

# Load resource fork
with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

pict_data_22 = None
pict_data_21 = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30022:
        pict_data_22 = r.data
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data_21 = r.data

if not pict_data_22:
    print("ERROR: PICT 30022 not found!")
    sys.exit(1)
if not pict_data_21:
    print("ERROR: PICT 30021 not found!")
    sys.exit(1)

# ============================================================================
# PART 1: PICT 30022 - Multi-record terrain sheet (640x240)
# ============================================================================
print("\n" + "=" * 80)
print("PART 1: PICT 30022 - Terrain Sheet (multiple PackBitsRect records)")
print("=" * 80)

images22 = extract_all_packbits_images(pict_data_22)
print(f"\nFound {len(images22)} PackBitsRect image records:")
for i, (px, w, h, top, left, pal) in enumerate(images22):
    print(f"  Record {i}: {w}x{h} placed at ({left}, {top})")
    print(f"    Palette entries: {len(pal)}")
    # Show first few palette entries
    for j in range(min(5, len(pal))):
        print(f"      [{j}] = RGB({pal[j][0]}, {pal[j][1]}, {pal[j][2]})")

# Composite into full 640x240 canvas
full_w, full_h = 640, 240
full_px = [[0] * full_w for _ in range(full_h)]
# Use first image's palette as the master palette
master_pal = images22[0][5] if images22 else []

for px, w, h, top, left, pal in images22:
    for y in range(h):
        for x in range(w):
            dy, dx = top + y, left + x
            if 0 <= dy < full_h and 0 <= dx < full_w:
                full_px[dy][dx] = px[y][x]

# Save full composited image
print(f"\nComposited terrain image: {full_w}x{full_h}")
full_img = Image.new('RGB', (full_w, full_h))
for y in range(full_h):
    for x in range(full_w):
        idx = full_px[y][x]
        color = master_pal[idx] if idx < len(master_pal) else (0, 0, 0)
        full_img.putpixel((x, y), color)
full_img.save(os.path.join(OUTPUT_DIR, "pict30022_full_composited.png"))
print(f"  Saved: pict30022_full_composited.png")

# ============================================================================
# PART 2: Analyze y=160 row from PICT 30022
# ============================================================================
print("\n" + "=" * 80)
print("PART 2: PICT 30022 tiles at y=160 (row 4)")
print("=" * 80)

# Determine background index at y=160
# Check corner pixel and also find most common value
bg_160 = find_bg_index(full_px, 0, 160, full_w, TILE_H)
corner_idx = full_px[160][0]
print(f"\nBackground analysis for y=160 row:")
print(f"  Corner pixel (0,160): index={corner_idx}, color={master_pal[corner_idx] if corner_idx < len(master_pal) else 'N/A'}")
print(f"  Most common index in row: {bg_160}, color={master_pal[bg_160] if bg_160 < len(master_pal) else 'N/A'}")

# Use the most common index as background
bg_22 = bg_160

print(f"\nAll 16 tiles at y=160 (using bg_idx={bg_22}):")
print(f"{'Tile':>4} {'X':>5} {'Total':>6} {'Dirs':>6}  {'N_px':>5} {'E_px':>5} {'S_px':>5} {'W_px':>5}  Description")
print("-" * 80)

terrain_tiles_160 = []
for col in range(full_w // TILE_W):
    x0 = col * TILE_W
    info = analyze_tile_edges(full_px, x0, 160, TILE_W, TILE_H, bg_22)
    dirs = edge_dirs_str(info)
    terrain_tiles_160.append((col, x0, info, dirs))

    # Determine if this looks like it matches an expected autotile
    desc = ""
    for ati, (expected_dirs, label) in EXPECTED_AUTOTILE.items():
        if dirs == expected_dirs:
            desc = f"matches autotile[{ati}] = {label}"
            break

    print(f"{col:4d} {x0:5d} {info['total']:6d} {dirs:>6}  {info['n_px']:5d} {info['e_px']:5d} {info['s_px']:5d} {info['w_px']:5d}  {desc}")

    # Save tile as 3x-zoom PNG
    fname = os.path.join(OUTPUT_DIR, f"pict30022_y160_tile{col:02d}_x{x0}.png")
    save_tile_png(full_px, x0, 160, TILE_W, TILE_H, master_pal, fname)

# ============================================================================
# PART 3: Focus on 9 tiles starting at x=80 (what LoadTerrainSet copies)
# ============================================================================
print("\n" + "=" * 80)
print("PART 3: LoadTerrainSet road tiles from PICT 30022 (x=80..440, y=160)")
print("  The original game copies from source rect (80, 160, 384+80, 160+40)")
print("  That is: (80, 160) to (464, 200) = 384 pixels wide = 9.6 tiles")
print("  Likely 9 complete 40x40 tiles at x=80,120,160,200,240,280,320,360,400")
print("=" * 80)

print(f"\n{'Idx':>3} {'X':>5} {'Total':>6} {'Dirs':>6}  {'N_px':>5} {'E_px':>5} {'S_px':>5} {'W_px':>5}  Expected              Match?")
print("-" * 95)

terrain_road_tiles = []
for i in range(10):  # Check 10 tiles to be safe
    x0 = 80 + i * TILE_W
    if x0 + TILE_W > full_w:
        break
    info = analyze_tile_edges(full_px, x0, 160, TILE_W, TILE_H, bg_22)
    dirs = edge_dirs_str(info)
    terrain_road_tiles.append((i, x0, info, dirs))

    expected = EXPECTED_AUTOTILE.get(i, ("?", "unknown"))
    match = "YES" if dirs == expected[0] else "NO"
    print(f"{i:3d} {x0:5d} {info['total']:6d} {dirs:>6}  {info['n_px']:5d} {info['e_px']:5d} {info['s_px']:5d} {info['w_px']:5d}  [{i:2d}]={expected[0]:<6} {expected[1]:<16} {match}")

    fname = os.path.join(OUTPUT_DIR, f"pict30022_road_tile{i:02d}_x{x0}.png")
    save_tile_png(full_px, x0, 160, TILE_W, TILE_H, master_pal, fname)

# ============================================================================
# PART 4: PICT 30021 - Road sprite sheet (640x80)
# ============================================================================
print("\n" + "=" * 80)
print("PART 4: PICT 30021 - Road Sprite Sheet")
print("=" * 80)

images21 = extract_all_packbits_images(pict_data_21)
if not images21:
    print("ERROR: Could not parse PICT 30021!")
    sys.exit(1)

px21, w21, h21, top21, left21, pal21 = images21[0]
print(f"\nPICT 30021: {w21}x{h21}, placed at ({left21},{top21})")
print(f"  Palette entries: {len(pal21)}")

# Find background index for PICT 30021
bg_21 = find_bg_index(px21, 0, 0, w21, h21)
corner_21 = px21[0][0]
print(f"  Corner pixel (0,0): index={corner_21}, color={pal21[corner_21] if corner_21 < len(pal21) else 'N/A'}")
print(f"  Most common index: {bg_21}, color={pal21[bg_21] if bg_21 < len(pal21) else 'N/A'}")

# Use bg from the corner area (first tile should have bg as dominant in non-road area)
# Actually let's use the most common pixel as bg
bg_for_21 = bg_21

cols21 = w21 // TILE_W
rows21 = h21 // TILE_H
print(f"\n  Grid: {cols21} cols x {rows21} rows = {cols21 * rows21} possible tiles")

print(f"\n{'Idx':>3} {'Row':>3} {'Col':>3} {'X':>5} {'Y':>5} {'Total':>6} {'Dirs':>6}  {'N_px':>5} {'E_px':>5} {'S_px':>5} {'W_px':>5}  Expected              Match?")
print("-" * 105)

pict21_tiles = []
for idx in range(cols21 * rows21):
    col = idx % cols21
    row = idx // cols21
    x0 = col * TILE_W
    y0 = row * TILE_H
    if y0 + TILE_H > h21:
        break

    info = analyze_tile_edges(px21, x0, y0, TILE_W, TILE_H, bg_for_21)
    dirs = edge_dirs_str(info)
    pict21_tiles.append((idx, x0, y0, info, dirs))

    expected = EXPECTED_AUTOTILE.get(idx, ("?", "unknown"))
    match = "YES" if dirs == expected[0] else "NO"
    if info['total'] == 0:
        match = "EMPTY"

    print(f"{idx:3d} {row:3d} {col:3d} {x0:5d} {y0:5d} {info['total']:6d} {dirs:>6}  {info['n_px']:5d} {info['e_px']:5d} {info['s_px']:5d} {info['w_px']:5d}  [{idx:2d}]={expected[0]:<6} {expected[1]:<16} {match}")

    fname = os.path.join(OUTPUT_DIR, f"pict30021_tile{idx:02d}_r{row}c{col}.png")
    save_tile_png(px21, x0, y0, TILE_W, TILE_H, pal21, fname)

# ============================================================================
# PART 5: Side-by-side comparison
# ============================================================================
print("\n" + "=" * 80)
print("PART 5: SIDE-BY-SIDE COMPARISON")
print("  Comparing PICT 30022 (terrain y=160 x=80+) vs PICT 30021 (road sheet)")
print("=" * 80)

print(f"\n{'Tile':>4}  {'30022_dirs':>10} {'30022_px':>8}  {'30021_dirs':>10} {'30021_px':>8}  {'Expected':>8}  Same?  Match30022  Match30021")
print("-" * 105)

for i in range(min(len(terrain_road_tiles), len(pict21_tiles), 15)):
    _, _, info22, dirs22 = terrain_road_tiles[i]
    _, _, _, info21, dirs21 = pict21_tiles[i]
    expected = EXPECTED_AUTOTILE.get(i, ("?", "unknown"))

    same = "YES" if dirs22 == dirs21 else "NO"
    match22 = "YES" if dirs22 == expected[0] else "NO"
    match21 = "YES" if dirs21 == expected[0] else "NO"

    if info22['total'] == 0:
        match22 = "EMPTY"
    if info21['total'] == 0:
        match21 = "EMPTY"

    print(f"{i:4d}  {dirs22:>10} {info22['total']:>8}  {dirs21:>10} {info21['total']:>8}  {expected[0]:>8}  {same:<6} {match22:<11} {match21}")

# ============================================================================
# PART 6: Check if PICT 30022 has road content at y=160 at ALL
# ============================================================================
print("\n" + "=" * 80)
print("PART 6: DETAILED PIXEL ANALYSIS of PICT 30022 y=160 row")
print("=" * 80)

# Show unique pixel indices in the y=160 area
from collections import Counter
y160_indices = Counter()
for y in range(160, min(200, full_h)):
    for x in range(full_w):
        y160_indices[full_px[y][x]] += 1

print(f"\nUnique palette indices in y=160..199 region:")
for idx, count in y160_indices.most_common(20):
    color = master_pal[idx] if idx < len(master_pal) else (0,0,0)
    pct = count / (full_w * 40) * 100
    print(f"  idx={idx:3d}  count={count:6d} ({pct:5.1f}%)  RGB=({color[0]:3d},{color[1]:3d},{color[2]:3d})")

# Check specifically the LoadTerrainSet region: (80,160) to (464,200)
print(f"\nUnique palette indices in LoadTerrainSet region x=80..463, y=160..199:")
lt_indices = Counter()
for y in range(160, min(200, full_h)):
    for x in range(80, min(464, full_w)):
        lt_indices[full_px[y][x]] += 1

for idx, count in lt_indices.most_common(20):
    color = master_pal[idx] if idx < len(master_pal) else (0,0,0)
    pct = count / (384 * 40) * 100
    print(f"  idx={idx:3d}  count={count:6d} ({pct:5.1f}%)  RGB=({color[0]:3d},{color[1]:3d},{color[2]:3d})")

# ============================================================================
# PART 7: Which image record covers y=160?
# ============================================================================
print("\n" + "=" * 80)
print("PART 7: Which PackBitsRect record covers y=160?")
print("=" * 80)

for i, (px, w, h, top, left, pal) in enumerate(images22):
    covers = top <= 160 < top + h
    print(f"  Record {i}: y={top}..{top+h-1} (height={h})  {'** COVERS y=160 **' if covers else ''}")
    if covers:
        # Check if there's actual road content at y=160 in THIS record
        local_y = 160 - top
        local_bg = px[local_y][0]
        nonbg = sum(1 for x in range(w) if px[local_y][x] != local_bg)
        print(f"    Local y={local_y}, bg_at_start={local_bg}, non-bg pixels in first row: {nonbg}")
        # Check full 40-row strip
        total_nonbg = 0
        for dy in range(40):
            if local_y + dy < h:
                for x in range(w):
                    if px[local_y + dy][x] != local_bg:
                        total_nonbg += 1
        print(f"    Total non-bg pixels in y=160..199 strip: {total_nonbg}")

# ============================================================================
# PART 8: Save comparison strip image
# ============================================================================
print("\n" + "=" * 80)
print("PART 8: Saving comparison images")
print("=" * 80)

# Save the y=160 row strip from PICT 30022
strip_img = Image.new('RGB', (full_w * ZOOM, TILE_H * ZOOM))
for y in range(TILE_H):
    for x in range(full_w):
        idx = full_px[160 + y][x]
        color = master_pal[idx] if idx < len(master_pal) else (0, 0, 0)
        for zy in range(ZOOM):
            for zx in range(ZOOM):
                strip_img.putpixel((x * ZOOM + zx, y * ZOOM + zy), color)
strip_img.save(os.path.join(OUTPUT_DIR, "pict30022_y160_full_strip.png"))
print(f"  Saved: pict30022_y160_full_strip.png (full y=160 row, {ZOOM}x zoom)")

# Save PICT 30021 full at zoom
img21 = Image.new('RGB', (w21 * ZOOM, h21 * ZOOM))
for y in range(h21):
    for x in range(w21):
        idx = px21[y][x]
        color = pal21[idx] if idx < len(pal21) else (0, 0, 0)
        for zy in range(ZOOM):
            for zx in range(ZOOM):
                img21.putpixel((x * ZOOM + zx, y * ZOOM + zy), color)
img21.save(os.path.join(OUTPUT_DIR, "pict30021_full_zoomed.png"))
print(f"  Saved: pict30021_full_zoomed.png (full PICT 30021, {ZOOM}x zoom)")

# Save side-by-side comparison of first 15 tiles
comparison_w = 15 * TILE_W * ZOOM
comparison_h = 2 * TILE_H * ZOOM + 20  # 20px gap between rows
comp_img = Image.new('RGB', (comparison_w, comparison_h), (40, 40, 40))

# Top row: PICT 30022 road tiles (x=80+, y=160)
for i in range(min(15, len(terrain_road_tiles))):
    _, x0_22, _, _ = terrain_road_tiles[i]
    for y in range(TILE_H):
        for x in range(TILE_W):
            idx = full_px[160 + y][x0_22 + x]
            color = master_pal[idx] if idx < len(master_pal) else (0, 0, 0)
            for zy in range(ZOOM):
                for zx in range(ZOOM):
                    comp_img.putpixel((i * TILE_W * ZOOM + x * ZOOM + zx, y * ZOOM + zy), color)

# Bottom row: PICT 30021 tiles
for i in range(min(15, len(pict21_tiles))):
    _, x0_21, y0_21, _, _ = pict21_tiles[i]
    for y in range(TILE_H):
        for x in range(TILE_W):
            idx = px21[y0_21 + y][x0_21 + x]
            color = pal21[idx] if idx < len(pal21) else (0, 0, 0)
            for zy in range(ZOOM):
                for zx in range(ZOOM):
                    comp_img.putpixel((i * TILE_W * ZOOM + x * ZOOM + zx, TILE_H * ZOOM + 20 + y * ZOOM + zy), color)

comp_img.save(os.path.join(OUTPUT_DIR, "comparison_30022_vs_30021.png"))
print(f"  Saved: comparison_30022_vs_30021.png (top=30022 road tiles, bottom=30021 tiles)")

# ============================================================================
# SUMMARY
# ============================================================================
print("\n" + "=" * 80)
print("SUMMARY")
print("=" * 80)

# Count how many PICT 30022 road tiles match expected
matches_22 = sum(1 for i in range(min(15, len(terrain_road_tiles)))
                 if terrain_road_tiles[i][3] == EXPECTED_AUTOTILE.get(i, ("?",))[0])
empty_22 = sum(1 for i in range(min(15, len(terrain_road_tiles)))
               if terrain_road_tiles[i][2]['total'] == 0)

matches_21 = sum(1 for i in range(min(15, len(pict21_tiles)))
                 if pict21_tiles[i][4] == EXPECTED_AUTOTILE.get(i, ("?",))[0])
empty_21 = sum(1 for i in range(min(15, len(pict21_tiles)))
               if pict21_tiles[i][3]['total'] == 0)

print(f"\nPICT 30022 (terrain y=160, x=80+):")
print(f"  Tiles matching expected autotile: {matches_22}/15")
print(f"  Empty tiles (no road content): {empty_22}/15")
total_road_px_22 = sum(terrain_road_tiles[i][2]['total'] for i in range(min(15, len(terrain_road_tiles))))
print(f"  Total road pixels in first 15 tiles: {total_road_px_22}")

print(f"\nPICT 30021 (road sprite sheet):")
print(f"  Tiles matching expected autotile: {matches_21}/15")
print(f"  Empty tiles (no road content): {empty_21}/15")
total_road_px_21 = sum(pict21_tiles[i][3]['total'] for i in range(min(15, len(pict21_tiles))))
print(f"  Total road pixels in first 15 tiles: {total_road_px_21}")

if total_road_px_22 == 0 and total_road_px_21 > 0:
    print(f"\n** CONCLUSION: PICT 30022 y=160 row has NO road tiles.")
    print(f"   The road tiles are ONLY in PICT 30021. Continue using PICT 30021.")
elif total_road_px_22 > 0 and total_road_px_21 > 0:
    if matches_22 > matches_21:
        print(f"\n** CONCLUSION: PICT 30022 has BETTER road tiles. Consider switching.")
    elif matches_21 > matches_22:
        print(f"\n** CONCLUSION: PICT 30021 has BETTER road tiles. Keep using PICT 30021.")
    else:
        print(f"\n** CONCLUSION: Both sources have road tiles. Compare visually.")
elif total_road_px_22 > 0 and total_road_px_21 == 0:
    print(f"\n** CONCLUSION: Road tiles are in PICT 30022, not PICT 30021. SWITCH needed!")
else:
    print(f"\n** CONCLUSION: Neither source has obvious road tiles at these positions!")

print(f"\nAll tile PNGs saved to: {OUTPUT_DIR}/")
print("Done.")
