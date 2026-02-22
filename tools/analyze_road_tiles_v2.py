#!/usr/bin/env python3
"""
Pixel-level analysis of PICT 30021 road tiles - V2.
Separates ROAD pixels (orange/brown/gray road surface) from DECORATION pixels (trees, buildings, etc.)
to get accurate exit direction detection.

Road pixel palette indices (from tile analysis):
  2=RGB(143,143,143) gray
  3=RGB(111,111,111) gray
  4=RGB(79,79,79) dark gray
  8=RGB(255,127,0) orange
  13=RGB(163,83,0) brown
  14=RGB(115,51,0) dark brown

Non-road decoration indices appearing in some tiles:
  0=RGB(255,255,255) white (buildings)
  5=RGB(67,191,255) light blue (water?)
  6=RGB(0,83,207) blue (water?)
  7=RGB(255,223,31) yellow
  9=RGB(195,27,0) red
  10=RGB(79,171,27) green (trees)
  11=RGB(0,139,0) green (trees)
  12=RGB(0,87,0) dark green (trees)
  64-78: various greens/browns (forest)
  99-105: browns (terrain)
  255=RGB(1,1,1) near-black
"""
import struct, sys, os
from collections import deque

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
TILE_W, TILE_H = 40, 40
BG_INDEX = 146

# Road surface palette indices (grays + oranges/browns that form the actual road)
ROAD_INDICES = {2, 3, 4, 8, 13, 14}

def extract_all_packbits_images(pict_data):
    """Extract ALL PackBitsRect records from a PICT."""
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
            offset += 18
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

# Load resource
with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)
pict_data_21 = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data_21 = r.data
        break

images = extract_all_packbits_images(pict_data_21)
px_img, img_w, img_h, img_top, img_left, palette = images[0]
px = px_img
canvas_w, canvas_h = img_w, img_h
num_cols = canvas_w // TILE_W
num_rows = canvas_h // TILE_H
total_tiles = num_cols * num_rows

print(f"PICT 30021: {canvas_w}x{canvas_h}, {num_cols}x{num_rows} = {total_tiles} tiles")
print(f"Road indices: {sorted(ROAD_INDICES)}")
print(f"Background: index {BG_INDEX}")
print()

DIR_NAMES = {0: "NONE", 1: "N", 2: "E", 4: "S", 8: "W",
             3: "NE", 5: "NS", 9: "NW", 6: "ES", 10: "EW", 12: "SW",
             7: "NES", 11: "NEW", 13: "NSW", 14: "ESW", 15: "NESW"}

LABEL_MAP = {
    0: "blank",
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

def is_road(val):
    return val in ROAD_INDICES

def is_nonbg(val):
    return val != BG_INDEX

# ======================================================================
# Analysis with THREE detection methods:
# 1. Narrow: center 2px at edge, any non-bg
# 2. Broad: any non-bg in 3px edge strip
# 3. Road-only: center 4px at edge, road indices only (ignoring decorations)
# ======================================================================

print("=" * 100)
print("TILE ANALYSIS: Three detection methods")
print("  Narrow = center 2x2 at edge, any non-bg")
print("  Broad  = any non-bg in 3px edge strip")
print("  Road   = road-palette pixels in center 6px band at edge, extended 5px deep")
print("=" * 100)

results = []

for tile_idx in range(total_tiles):
    row = tile_idx // num_cols
    col = tile_idx % num_cols
    x0 = col * TILE_W
    y0 = row * TILE_H

    # Count pixels
    road_count = 0
    nonbg_count = 0
    decor_count = 0
    for ty in range(TILE_H):
        for tx in range(TILE_W):
            v = px[y0+ty][x0+tx]
            if v != BG_INDEX:
                nonbg_count += 1
                if v in ROAD_INDICES:
                    road_count += 1
                else:
                    decor_count += 1

    # --- Method 1: Narrow (center 2px at edge boundary) ---
    def check_narrow(edge):
        """Check center 2 pixels right at the edge boundary."""
        if edge == 'N':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(2) for tx in range(19, 21))
        elif edge == 'E':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(19, 21) for tx in range(38, 40))
        elif edge == 'S':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(38, 40) for tx in range(19, 21))
        elif edge == 'W':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(19, 21) for tx in range(2))

    narrow_mask = 0
    if check_narrow('N'): narrow_mask |= 1
    if check_narrow('E'): narrow_mask |= 2
    if check_narrow('S'): narrow_mask |= 4
    if check_narrow('W'): narrow_mask |= 8

    # --- Method 2: Broad (any non-bg in 3px edge strip) ---
    def check_broad(edge):
        if edge == 'N':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(3) for tx in range(TILE_W))
        elif edge == 'E':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(TILE_H) for tx in range(37, 40))
        elif edge == 'S':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(37, 40) for tx in range(TILE_W))
        elif edge == 'W':
            return any(is_nonbg(px[y0+ty][x0+tx]) for ty in range(TILE_H) for tx in range(3))

    broad_mask = 0
    if check_broad('N'): broad_mask |= 1
    if check_broad('E'): broad_mask |= 2
    if check_broad('S'): broad_mask |= 4
    if check_broad('W'): broad_mask |= 8

    # --- Method 3: Road-only (road palette in center 6px band, 5px deep from edge) ---
    def check_road_exit(edge):
        """Check for road-colored pixels in the center band near the edge."""
        # Center band: columns 17-22 for N/S, rows 17-22 for E/W
        # Depth: 5 pixels from edge
        if edge == 'N':
            return any(is_road(px[y0+ty][x0+tx]) for ty in range(5) for tx in range(17, 23))
        elif edge == 'E':
            return any(is_road(px[y0+ty][x0+tx]) for ty in range(17, 23) for tx in range(35, 40))
        elif edge == 'S':
            return any(is_road(px[y0+ty][x0+tx]) for ty in range(35, 40) for tx in range(17, 23))
        elif edge == 'W':
            return any(is_road(px[y0+ty][x0+tx]) for ty in range(17, 23) for tx in range(5))

    road_mask = 0
    if check_road_exit('N'): road_mask |= 1
    if check_road_exit('E'): road_mask |= 2
    if check_road_exit('S'): road_mask |= 4
    if check_road_exit('W'): road_mask |= 8

    results.append({
        'idx': tile_idx, 'row': row, 'col': col,
        'nonbg': nonbg_count, 'road': road_count, 'decor': decor_count,
        'narrow': narrow_mask, 'broad': broad_mask, 'road_exit': road_mask,
    })

# Print results
print(f"\n{'Tile':>4} {'Pos':>5} {'NonBG':>5} {'Road':>5} {'Decor':>5}  {'Narrow':>6} {'Broad':>6} {'RoadExit':>8}  Label")
print("-" * 90)
for r in results:
    n_str = DIR_NAMES.get(r['narrow'], '?')
    b_str = DIR_NAMES.get(r['broad'], '?')
    re_str = DIR_NAMES.get(r['road_exit'], '?')
    label = LABEL_MAP.get(r['road_exit'], f"unknown({r['road_exit']})")

    # Flag if methods disagree
    flag = ""
    if r['narrow'] != r['road_exit']:
        flag = " *"

    print(f"{r['idx']:4d} r{r['row']}c{r['col']:>2d} {r['nonbg']:5d} {r['road']:5d} {r['decor']:5d}  "
          f"{n_str:>6} {b_str:>6} {re_str:>8}  {label}{flag}")

# ======================================================================
# Road-exit based connectivity analysis
# ======================================================================
print()
print("=" * 80)
print("CONNECTIVITY: Road-pixel paths between exits (8-connected, road pixels only)")
print("=" * 80)

def check_road_connectivity(px, y0, x0, exit_mask):
    """BFS through road pixels from one exit to another."""
    # Build road pixel set
    road_pixels = set()
    for ty in range(TILE_H):
        for tx in range(TILE_W):
            if is_road(px[y0+ty][x0+tx]):
                road_pixels.add((tx, ty))

    if not road_pixels:
        return False, "no road pixels"

    # Define exit seed regions (road pixels in the edge zone)
    exits = []
    if exit_mask & 1:  # N
        zone = {(tx,ty) for tx in range(17,23) for ty in range(5) if (tx,ty) in road_pixels}
        if zone: exits.append(('N', zone))
    if exit_mask & 2:  # E
        zone = {(tx,ty) for tx in range(35,40) for ty in range(17,23) if (tx,ty) in road_pixels}
        if zone: exits.append(('E', zone))
    if exit_mask & 4:  # S
        zone = {(tx,ty) for tx in range(17,23) for ty in range(35,40) if (tx,ty) in road_pixels}
        if zone: exits.append(('S', zone))
    if exit_mask & 8:  # W
        zone = {(tx,ty) for tx in range(5) for ty in range(17,23) if (tx,ty) in road_pixels}
        if zone: exits.append(('W', zone))

    if len(exits) < 2:
        return True, f"single exit ({exits[0][0] if exits else '?'})"

    # BFS from first exit, check connectivity to all others
    visited = set()
    queue = deque()
    for p in exits[0][1]:
        queue.append(p)
        visited.add(p)

    while queue:
        cx, cy = queue.popleft()
        for dx in (-1, 0, 1):
            for dy in (-1, 0, 1):
                if dx == 0 and dy == 0: continue
                nx, ny = cx + dx, cy + dy
                if (nx, ny) in road_pixels and (nx, ny) not in visited:
                    visited.add((nx, ny))
                    queue.append((nx, ny))

    # Check if all other exits were reached
    unreached = []
    for name, zone in exits[1:]:
        if not zone & visited:
            unreached.append(name)

    if unreached:
        return False, f"disconnected from {','.join(unreached)} (reached {len(visited)}/{len(road_pixels)} road px)"
    return True, f"all exits connected ({len(visited)}/{len(road_pixels)} road px)"

for r in results:
    mask = r['road_exit']
    nbits = bin(mask).count('1')
    if nbits >= 1 and r['road'] > 0:
        ok, msg = check_road_connectivity(px, r['row']*TILE_H, r['col']*TILE_W, mask)
        status = "OK  " if ok else "FAIL"
        re_str = DIR_NAMES.get(mask, '?')
        print(f"  Tile {r['idx']:2d} ({re_str:>5}): {status} {msg}")

# ======================================================================
# Final mapping summary with autotile correlation
# ======================================================================
print()
print("=" * 80)
print("AUTOTILE MAPPING: tile index -> direction bitmask (N=1,E=2,S=4,W=8)")
print("Uses road-exit detection method")
print("=" * 80)

# Build the mapping
print(f"\n{'Tile':>4} {'Mask':>4} {'Dirs':>5} {'Label':20} {'Road px':>7} {'Decor px':>8}")
print("-" * 65)
for r in results:
    mask = r['road_exit']
    dirs = DIR_NAMES.get(mask, '?')
    label = LABEL_MAP.get(mask, '?')
    print(f"{r['idx']:4d}   {mask:2d}   {dirs:>5} {label:20} {r['road']:7d} {r['decor']:8d}")

# ASCII visualization with road vs decoration distinction
print()
print("=" * 80)
print("ASCII: Road (R) vs Decoration (D) vs Background (.)")
print("Showing tiles with mixed content")
print("=" * 80)

# Show tiles where decoration pixels are present
for r in results:
    if r['decor'] > 0 and r['road'] > 0:
        tile_idx = r['idx']
        row, col = r['row'], r['col']
        x0 = col * TILE_W
        y0 = row * TILE_H
        re_str = DIR_NAMES.get(r['road_exit'], '?')
        print(f"\nTile {tile_idx} (r{row}c{col}) {re_str} - {r['road']} road, {r['decor']} decor:")
        for ty in range(0, TILE_H, 2):
            line = ""
            for tx in range(TILE_W):
                v = px[y0+ty][x0+tx]
                if v == BG_INDEX:
                    line += "."
                elif v in ROAD_INDICES:
                    line += "R"
                else:
                    line += "D"
            print(f"  {ty:2d}| {line}")

# Also show pure road tiles
print()
print("=" * 80)
print("ASCII: Pure road tiles (no decoration)")
print("=" * 80)
for r in results:
    if r['decor'] == 0 and r['road'] > 0:
        tile_idx = r['idx']
        row, col = r['row'], r['col']
        x0 = col * TILE_W
        y0 = row * TILE_H
        re_str = DIR_NAMES.get(r['road_exit'], '?')
        print(f"\nTile {tile_idx} (r{row}c{col}) {re_str} - {r['road']} road pixels:")
        for ty in range(0, TILE_H, 2):
            line = ""
            for tx in range(TILE_W):
                v = px[y0+ty][x0+tx]
                if v == BG_INDEX:
                    line += "."
                else:
                    line += "#"
            print(f"  {ty:2d}| {line}")
