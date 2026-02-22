#!/usr/bin/env python3
"""
Comprehensive analysis of PICT 30021 (road sprite sheet).
Determines:
1. Exact tile layout (16x2 vs 13x2 or other)
2. Which tiles have actual road content vs empty
3. Edge connectivity for each tile
4. Complete tile map
"""
import struct, sys, os
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def load_pict_pixels_with_palette(pict_data):
    """Parse PICT and return (pixels, width, height, palette)."""
    if len(pict_data) < 10:
        return None
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
            t,l,b,r = struct.unpack_from('>hhhh', pict_data, offset+2)
            pw, ph = r-l, b-t
            if rr & 0x8000:
                pixelSize = struct.unpack_from('>H', pict_data, offset+28)[0]
                offset += 46
                nc = struct.unpack_from('>H', pict_data, offset+6)[0]+1
                offset += 8
                palette = []
                for i in range(nc):
                    cr = struct.unpack_from('>H', pict_data, offset+2)[0] >> 8
                    cg = struct.unpack_from('>H', pict_data, offset+4)[0] >> 8
                    cb = struct.unpack_from('>H', pict_data, offset+6)[0] >> 8
                    palette.append((cr, cg, cb))
                    offset += 8
            else:
                pixelSize = 1
                palette = [(255,255,255),(0,0,0)]
                offset += 10
            offset += 18
            if opcode == 0x99: offset += struct.unpack_from('>H', pict_data, offset)[0]
            px = [[0]*pw for _ in range(ph)]
            for row in range(ph):
                if rb > 250: bc = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2
                else: bc = pict_data[offset]; offset += 1
                re = offset + bc; un = bytearray()
                while offset < re:
                    f = struct.unpack_from('>b', pict_data, offset)[0]; offset += 1
                    if f >= 0: c = f+1; un.extend(pict_data[offset:offset+c]); offset += c
                    elif f != -128: c = -f+1; v = pict_data[offset]; offset += 1; un.extend([v]*c)
                if pixelSize == 8:
                    for x in range(min(pw, len(un))): px[row][x] = un[x]
            return px, pw, ph, palette
        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None


# Load resource
with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

pict_data = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data = r.data
        break

if not pict_data:
    print("ERROR: PICT 30021 not found!")
    sys.exit(1)

# Parse PICT header
size_field = struct.unpack_from('>H', pict_data, 0)[0]
top, left, bottom, right = struct.unpack_from('>hhhh', pict_data, 2)
print("=" * 80)
print("PICT 30021 COMPREHENSIVE ROAD TILE ANALYSIS")
print("=" * 80)
print(f"\nPICT header: frame=({left},{top},{right},{bottom}) = {right-left}x{bottom-top}")

result = load_pict_pixels_with_palette(pict_data)
if not result:
    print("ERROR: Failed to parse PICT pixels!")
    sys.exit(1)

pixels, width, height, palette = result
print(f"Decoded image: {width}x{height}")
print(f"Palette entries: {len(palette)}")

# Determine background
bg_idx = pixels[0][0]
bg_color = palette[bg_idx] if bg_idx < len(palette) else (0,0,0)
print(f"Background index (from pixel 0,0): {bg_idx} = RGB({bg_color[0]:02X},{bg_color[1]:02X},{bg_color[2]:02X})")

# Also check corner pixel at (520, 0) as suggested
if width > 520:
    corner_idx = pixels[0][520]
    corner_color = palette[corner_idx] if corner_idx < len(palette) else (0,0,0)
    print(f"Pixel at (520,0): index={corner_idx} = RGB({corner_color[0]:02X},{corner_color[1]:02X},{corner_color[2]:02X})")
    # Also check other potential bg spots
    for x in [520, 560, 600, 620, 639]:
        if x < width:
            idx = pixels[0][x]
            print(f"  Pixel at ({x},0): index={idx}")

# Check if background is uniform in corners
print(f"\nBackground verification (expected all = {bg_idx}):")
corners = [(0,0), (width-1,0), (0,height-1), (width-1,height-1), (520,0), (520,79)]
for cx, cy in corners:
    if cx < width and cy < height:
        v = pixels[cy][cx]
        match = "OK" if v == bg_idx else f"DIFFERENT! got {v}"
        print(f"  ({cx},{cy}): index={v} {match}")

TW, TH = 40, 40
max_cols = width // TW
max_rows = height // TH
print(f"\nGrid: {max_cols} cols x {max_rows} rows = {max_cols * max_rows} tile positions")

print("\n" + "=" * 80)
print("SECTION 1: NON-BACKGROUND PIXEL COUNT PER TILE")
print("=" * 80)
print(f"\n{'Pos':>3} {'Col':>3} {'Row':>3} {'X0':>4} {'Y0':>4} {'Total':>6} {'Unique':>6} {'Status'}")
print("-" * 65)

tile_data = []

for idx in range(max_cols * max_rows):
    tc = idx % max_cols
    tr = idx // max_cols
    x0 = tc * TW
    y0 = tr * TH

    if y0 + TH > height:
        break

    # Count non-bg pixels
    non_bg = 0
    unique_values = set()
    for y in range(TH):
        for x in range(TW):
            v = pixels[y0 + y][x0 + x]
            if v != bg_idx:
                non_bg += 1
                unique_values.add(v)

    status = "ARTWORK" if non_bg > 10 else ("sparse" if non_bg > 0 else "EMPTY")
    tile_data.append({
        'idx': idx, 'col': tc, 'row': tr,
        'x0': x0, 'y0': y0,
        'non_bg': non_bg, 'unique': len(unique_values),
        'status': status
    })
    print(f"{idx:>3}  {tc:>3}  {tr:>3}  {x0:>4}  {y0:>4}  {non_bg:>6}  {len(unique_values):>6}  {status}")

# Summary
artwork_count = sum(1 for t in tile_data if t['status'] == 'ARTWORK')
empty_count = sum(1 for t in tile_data if t['status'] == 'EMPTY')
sparse_count = sum(1 for t in tile_data if t['status'] == 'sparse')
print(f"\nSummary: {artwork_count} tiles with artwork, {sparse_count} sparse, {empty_count} empty")

# Determine if it's a 16-col or 13-col layout
print(f"\nRow 0 artwork tiles (cols): {[t['col'] for t in tile_data if t['row'] == 0 and t['status'] == 'ARTWORK']}")
print(f"Row 1 artwork tiles (cols): {[t['col'] for t in tile_data if t['row'] == 1 and t['status'] == 'ARTWORK']}")
row0_last = max([t['col'] for t in tile_data if t['row'] == 0 and t['status'] == 'ARTWORK'], default=-1)
row1_last = max([t['col'] for t in tile_data if t['row'] == 1 and t['status'] == 'ARTWORK'], default=-1)
print(f"Row 0 last artwork column: {row0_last}")
print(f"Row 1 last artwork column: {row1_last}")

# Check boundary between different layouts
print(f"\n--- Checking columns 12-15 in row 0 for content ---")
for col in range(12, 16):
    x0 = col * TW
    non_bg = 0
    for y in range(TH):
        for x in range(TW):
            v = pixels[y][x0 + x]
            if v != bg_idx:
                non_bg += 1
    print(f"  Column {col}: {non_bg} non-bg pixels")

print(f"\n--- Checking columns 0-5 in row 1 for content ---")
for col in range(min(6, max_cols)):
    x0 = col * TW
    non_bg = 0
    for y in range(TH, TH * 2):
        if y >= height: break
        for x in range(TW):
            v = pixels[y][x0 + x]
            if v != bg_idx:
                non_bg += 1
    print(f"  Column {col}: {non_bg} non-bg pixels")


print("\n" + "=" * 80)
print("SECTION 2: EDGE CONNECTIVITY ANALYSIS")
print("=" * 80)

# For each tile with artwork, analyze which edges have road pixels
# Use multiple detection strategies

def analyze_edges(pixels, x0, y0, bg_idx, TW=40, TH=40):
    """Analyze edge connectivity using multiple strategies."""
    results = {}

    # Strategy 1: 3-pixel deep edge strips, full width/height
    for name, y_range, x_range in [
        ('N_strip3', range(0, 3), range(TW)),
        ('S_strip3', range(TH-3, TH), range(TW)),
        ('E_strip3', range(TH), range(TW-3, TW)),
        ('W_strip3', range(TH), range(0, 3)),
    ]:
        count = sum(1 for y in y_range for x in x_range if pixels[y0+y][x0+x] != bg_idx)
        results[name] = count

    # Strategy 2: Center of edge (where road would cross), 1 pixel deep
    # Road center expected at cols ~20-30 for N/S, rows ~14-25 for E/W
    for name, y_range, x_range in [
        ('N_center1', range(0, 1), range(15, 35)),
        ('S_center1', range(TH-1, TH), range(15, 35)),
        ('E_center1', range(10, 30), range(TW-1, TW)),
        ('W_center1', range(10, 30), range(0, 1)),
    ]:
        count = sum(1 for y in y_range for x in x_range if pixels[y0+y][x0+x] != bg_idx)
        results[name] = count

    # Strategy 3: 2-pixel edge, center 20 pixels only
    for name, y_range, x_range in [
        ('N_mid2', range(0, 2), range(10, 30)),
        ('S_mid2', range(TH-2, TH), range(10, 30)),
        ('E_mid2', range(10, 30), range(TW-2, TW)),
        ('W_mid2', range(10, 30), range(0, 2)),
    ]:
        count = sum(1 for y in y_range for x in x_range if pixels[y0+y][x0+x] != bg_idx)
        results[name] = count

    return results


print(f"\n{'Pos':>3} | {'N_s3':>4} {'S_s3':>4} {'E_s3':>4} {'W_s3':>4} | {'N_c1':>4} {'S_c1':>4} {'E_c1':>4} {'W_c1':>4} | Dirs(strip3) | Dirs(center)")
print("-" * 95)

tile_connections = {}

for td in tile_data:
    if td['status'] == 'EMPTY':
        tile_connections[td['idx']] = {'dirs': 'EMPTY', 'mask': 0}
        continue

    edges = analyze_edges(pixels, td['x0'], td['y0'], bg_idx)

    # Determine directions using strip3 (threshold 8)
    t1 = 8
    n1 = edges['N_strip3'] >= t1
    s1 = edges['S_strip3'] >= t1
    e1 = edges['E_strip3'] >= t1
    w1 = edges['W_strip3'] >= t1
    dirs1 = ""
    if n1: dirs1 += "N"
    if e1: dirs1 += "E"
    if s1: dirs1 += "S"
    if w1: dirs1 += "W"
    if not dirs1: dirs1 = "island"

    # Determine directions using center1 (threshold 3)
    t2 = 3
    n2 = edges['N_center1'] >= t2
    s2 = edges['S_center1'] >= t2
    e2 = edges['E_center1'] >= t2
    w2 = edges['W_center1'] >= t2
    dirs2 = ""
    if n2: dirs2 += "N"
    if e2: dirs2 += "E"
    if s2: dirs2 += "S"
    if w2: dirs2 += "W"
    if not dirs2: dirs2 = "island"

    mask = 0
    if n1 or n2: mask |= 1
    if e1 or e2: mask |= 2
    if s1 or s2: mask |= 4
    if w1 or w2: mask |= 8

    dirs_combined = ""
    if mask & 1: dirs_combined += "N"
    if mask & 2: dirs_combined += "E"
    if mask & 4: dirs_combined += "S"
    if mask & 8: dirs_combined += "W"
    if not dirs_combined: dirs_combined = "island"

    tile_connections[td['idx']] = {'dirs': dirs_combined, 'mask': mask}

    print(f"{td['idx']:>3} | {edges['N_strip3']:>4} {edges['S_strip3']:>4} {edges['E_strip3']:>4} {edges['W_strip3']:>4} "
          f"| {edges['N_center1']:>4} {edges['S_center1']:>4} {edges['E_center1']:>4} {edges['W_center1']:>4} "
          f"| {dirs1:>12} | {dirs2}")


print("\n" + "=" * 80)
print("SECTION 3: VISUAL TILE MAP")
print("=" * 80)

print("\nTile layout in grid form:")
print(f"  {'':>6}", end="")
for c in range(max_cols):
    print(f"  col{c:>2}", end="")
print()

for r in range(max_rows):
    print(f"  row{r}: ", end="")
    for c in range(max_cols):
        idx = r * max_cols + c
        if idx < len(tile_data):
            td = tile_data[idx]
            if td['status'] == 'EMPTY':
                print(f"  {'---':>5}", end="")
            else:
                conn = tile_connections.get(idx, {})
                dirs = conn.get('dirs', '?')
                print(f"  {dirs:>5}", end="")
        else:
            print(f"  {'???':>5}", end="")
    print()


print("\n" + "=" * 80)
print("SECTION 4: ASCII ART VISUALIZATION OF EACH TILE")
print("=" * 80)

for td in tile_data:
    if td['status'] == 'EMPTY':
        continue

    print(f"\n--- Tile {td['idx']} (col={td['col']}, row={td['row']}) ---")
    conn = tile_connections.get(td['idx'], {})
    print(f"    Detected: {conn.get('dirs', '?')}")
    print(f"    Non-bg pixels: {td['non_bg']}")

    # Print 40x40 tile as 10x10 blocks (4x4 averaging)
    x0, y0 = td['x0'], td['y0']
    block = 4  # 4x4 pixels per character
    for by in range(TH // block):
        row_str = "    "
        for bx in range(TW // block):
            count = 0
            for dy in range(block):
                for dx in range(block):
                    py = y0 + by * block + dy
                    px = x0 + bx * block + dx
                    if py < height and px < width and pixels[py][px] != bg_idx:
                        count += 1
            # Map count 0-16 to character
            if count == 0:
                row_str += "."
            elif count <= 4:
                row_str += ":"
            elif count <= 8:
                row_str += "o"
            elif count <= 12:
                row_str += "O"
            else:
                row_str += "#"
        print(row_str)


print("\n" + "=" * 80)
print("SECTION 5: ROW-BY-ROW PIXEL ANALYSIS FOR KEY TILES")
print("=" * 80)

# Show detailed per-row analysis for tiles at the boundary (cols 12-15 in row 0)
for td in tile_data:
    if td['row'] == 0 and td['col'] >= 12:
        if td['status'] == 'EMPTY':
            print(f"\nTile {td['idx']} (col={td['col']}, row=0): EMPTY")
            continue
        print(f"\nTile {td['idx']} (col={td['col']}, row=0): {td['non_bg']} non-bg pixels")
        x0, y0 = td['x0'], td['y0']
        for y in range(TH):
            cols_with_content = [x for x in range(TW) if pixels[y0+y][x0+x] != bg_idx]
            if cols_with_content:
                bar = ""
                for x in range(TW):
                    bar += "#" if pixels[y0+y][x0+x] != bg_idx else "."
                print(f"  row {y:2d}: {len(cols_with_content):2d} px  {bar}")

# Also show detailed for first 4 tiles in row 1
for td in tile_data:
    if td['row'] == 1 and td['col'] <= 3:
        if td['status'] == 'EMPTY':
            print(f"\nTile {td['idx']} (col={td['col']}, row=1): EMPTY")
            continue
        print(f"\nTile {td['idx']} (col={td['col']}, row=1): {td['non_bg']} non-bg pixels")
        x0, y0 = td['x0'], td['y0']
        for y in range(TH):
            cols_with_content = [x for x in range(TW) if pixels[y0+y][x0+x] != bg_idx]
            if cols_with_content:
                bar = ""
                for x in range(TW):
                    bar += "#" if pixels[y0+y][x0+x] != bg_idx else "."
                print(f"  row {y:2d}: {len(cols_with_content):2d} px  {bar}")


print("\n" + "=" * 80)
print("SECTION 6: RD VALUE MAPPING")
print("=" * 80)

# Expected road directions from kAutoTile
rd_expected = {
    1: ("EW",    0xA),
    2: ("NS",    0x5),
    3: ("NESW",  0xF),
    4: ("ESW",   0xE),
    5: ("NSW",   0xD),
    6: ("NEW",   0xB),
    7: ("NES",   0x7),
    8: ("SW",    0xC),
    9: ("NW",    0x9),
    10: ("NE",   0x3),
    11: ("ES",   0x6),
    12: ("W",    0x8),
    13: ("S",    0x4),
    14: ("E",    0x2),
    15: ("N",    0x1),
    16: ("EW*",  0xA),  # bridge variant
    17: ("NS*",  0x5),  # bridge variant
}

print("\nIf 16-column layout (tile_index = rd_value - 1):")
print(f"{'RD':>3} {'Expected':>7} {'Tile':>4} {'Detected':>10} {'Match':>6}")
print("-" * 40)
for rd in range(1, 18):
    exp_dirs, exp_mask = rd_expected[rd]
    tile_idx = rd - 1
    tc = tile_idx % max_cols
    tr = tile_idx // max_cols
    conn = tile_connections.get(tile_idx, {'dirs': '?', 'mask': 0})
    match = "OK" if conn['dirs'] == exp_dirs.rstrip('*') else "WRONG"
    print(f"{rd:>3}  {exp_dirs:>7}  {tile_idx:>4}  {conn['dirs']:>10}  {match}")

print("\nIf 13-column layout (tiles wrap at col 13):")
print(f"{'RD':>3} {'Expected':>7} {'Tile_16':>6} {'Col13':>5} {'Row13':>5} {'Detected':>10} {'Match':>6}")
print("-" * 60)
for rd in range(1, 18):
    exp_dirs, exp_mask = rd_expected[rd]
    tile_16 = rd - 1  # position in 16-col layout
    # In 13-col layout, the position changes for tiles >= 13
    # Tile 0-12 stay same; tile 13+ wrap to row 1
    if tile_16 < 13:
        col13 = tile_16
        row13 = 0
    else:
        col13 = tile_16 - 13
        row13 = 1
    idx_in_16 = row13 * max_cols + col13
    conn = tile_connections.get(idx_in_16, {'dirs': '?', 'mask': 0})
    match = "OK" if conn['dirs'] == exp_dirs.rstrip('*') else "WRONG"
    print(f"{rd:>3}  {exp_dirs:>7}  {tile_16:>6}  {col13:>5}  {row13:>5}  {conn['dirs']:>10}  {match}")


print("\n" + "=" * 80)
print("SECTION 7: UNIQUE PALETTE INDICES PER TILE")
print("=" * 80)

for td in tile_data:
    if td['status'] == 'EMPTY':
        continue
    x0, y0 = td['x0'], td['y0']
    counts = Counter()
    for y in range(TH):
        for x in range(TW):
            v = pixels[y0+y][x0+x]
            if v != bg_idx:
                counts[v] += 1
    top_vals = counts.most_common(5)
    val_str = ", ".join(f"idx={v}({c}px)" for v, c in top_vals)
    print(f"  Tile {td['idx']:>2}: {val_str}")


print("\n" + "=" * 80)
print("FINAL DETERMINATION")
print("=" * 80)

# Count artwork tiles per row
row0_artwork = [t for t in tile_data if t['row'] == 0 and t['status'] == 'ARTWORK']
row1_artwork = [t for t in tile_data if t['row'] == 1 and t['status'] == 'ARTWORK']
print(f"\nRow 0: {len(row0_artwork)} tiles with artwork, cols: {[t['col'] for t in row0_artwork]}")
print(f"Row 1: {len(row1_artwork)} tiles with artwork, cols: {[t['col'] for t in row1_artwork]}")
print(f"Total artwork tiles: {len(row0_artwork) + len(row1_artwork)}")

if len(row0_artwork) <= 13:
    print(f"\n>>> LAYOUT: 13-column (row 0 has {len(row0_artwork)} tiles, row 1 has {len(row1_artwork)})")
    print(f"    Tiles in row 0 cols 13-15 are EMPTY, confirming 13-column layout")
elif len(row0_artwork) > 13:
    print(f"\n>>> LAYOUT: 16-column (row 0 has {len(row0_artwork)} tiles extending past col 12)")
    print(f"    RD values 14-17 are at row 0 cols 13-15")

print("\nDone.")
