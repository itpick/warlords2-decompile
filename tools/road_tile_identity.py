#!/usr/bin/env python3
"""
Definitive road tile identification.
For each tile, render a detailed ASCII art and determine what road pattern it shows.
Focus on tiles 8-15 (row 0) and row 1 tiles to distinguish road types from diagonal/bridge variants.
"""
import struct, sys, os
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def load_pict_pixels(pict_data):
    if len(pict_data) < 10: return None
    offset = 10; version = 1
    while offset < len(pict_data) - 1:
        if version == 1: opcode = pict_data[offset]; offset += 1
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
                offset += 46
                nc = struct.unpack_from('>H', pict_data, offset+6)[0]+1
                offset += 8 + nc*8
            else: offset += 10
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
                for x in range(min(pw, len(un))): px[row][x] = un[x]
            return px, pw, ph
        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
for r in parse_resource_fork(data):
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data = r.data; break

pixels, width, height = load_pict_pixels(pict_data)
bg = pixels[0][0]

TW, TH = 40, 40
COLS = width // TW

print("=" * 80)
print("DEFINITIVE ROAD TILE ANALYSIS - PICT 30021")
print("=" * 80)
print(f"Image: {width}x{height}, bg index={bg}")
print(f"Grid: {COLS} columns x {height//TH} rows\n")

# For each tile, compute:
# 1. Edge pixel density at each edge (for connectivity)
# 2. Center of mass (to understand road path direction)
# 3. Quadrant pixel counts (to understand road geometry)

def analyze_tile(x0, y0):
    """Full analysis of a single tile."""
    result = {}

    # Total non-bg pixels
    non_bg = 0
    sum_x = 0
    sum_y = 0
    for y in range(TH):
        for x in range(TW):
            if pixels[y0+y][x0+x] != bg:
                non_bg += 1
                sum_x += x
                sum_y += y

    result['non_bg'] = non_bg
    if non_bg > 0:
        result['cx'] = sum_x / non_bg
        result['cy'] = sum_y / non_bg
    else:
        result['cx'] = result['cy'] = 0

    # Edge connectivity - check 5-pixel strips
    edges = {}
    for direction, y_range, x_range in [
        ('N', range(0, 5), range(TW)),
        ('S', range(TH-5, TH), range(TW)),
        ('E', range(TH), range(TW-5, TW)),
        ('W', range(TH), range(0, 5)),
    ]:
        count = sum(1 for y in y_range for x in x_range if pixels[y0+y][x0+x] != bg)
        edges[direction] = count

    # Also check 1px edge at the very border
    edges_1px = {}
    for direction, y_range, x_range in [
        ('N', range(0, 1), range(TW)),
        ('S', range(TH-1, TH), range(TW)),
        ('E', range(TH), range(TW-1, TW)),
        ('W', range(TH), range(0, 1)),
    ]:
        count = sum(1 for y in y_range for x in x_range if pixels[y0+y][x0+x] != bg)
        edges_1px[direction] = count

    result['edges_5px'] = edges
    result['edges_1px'] = edges_1px

    # Quadrant counts (excluding edges)
    # TL: rows 0-19, cols 0-19
    # TR: rows 0-19, cols 20-39
    # BL: rows 20-39, cols 0-19
    # BR: rows 20-39, cols 20-39
    quads = {}
    for name, yr, xr in [
        ('TL', range(0, 20), range(0, 20)),
        ('TR', range(0, 20), range(20, 40)),
        ('BL', range(20, 40), range(0, 20)),
        ('BR', range(20, 40), range(20, 40)),
    ]:
        quads[name] = sum(1 for y in yr for x in xr if pixels[y0+y][x0+x] != bg)
    result['quads'] = quads

    # Diagonal analysis: does the road go NW-SE or NE-SW?
    # Count pixels along each diagonal band
    diag_nwse = 0  # near the x=y line
    diag_nesw = 0  # near the x=(39-y) line
    for y in range(TH):
        for x in range(TW):
            if pixels[y0+y][x0+x] != bg:
                # Distance to NW-SE diagonal (y = x)
                d1 = abs(y - x)
                # Distance to NE-SW diagonal (y = 39-x)
                d2 = abs(y - (39 - x))
                if d1 <= 10:
                    diag_nwse += 1
                if d2 <= 10:
                    diag_nesw += 1
    result['diag_nwse'] = diag_nwse
    result['diag_nesw'] = diag_nesw

    return result


# Analyze all tiles
print(f"{'Tile':>4} {'Pos':>5} {'Px':>4} {'CX':>5} {'CY':>5} | "
      f"{'N5':>3} {'S5':>3} {'E5':>3} {'W5':>3} | "
      f"{'N1':>3} {'S1':>3} {'E1':>3} {'W1':>3} | "
      f"{'TL':>3} {'TR':>3} {'BL':>3} {'BR':>3} | "
      f"{'NW-SE':>5} {'NE-SW':>5} | Conn | Type")
print("-" * 120)

for idx in range(32):
    tc = idx % COLS
    tr = idx // COLS
    x0 = tc * TW
    y0 = tr * TH
    if y0 + TH > height:
        break

    a = analyze_tile(x0, y0)

    if a['non_bg'] == 0:
        print(f"{idx:>4}  ({tc},{tr}) {'EMPTY':>4}")
        continue

    # Determine connectivity
    # Use threshold: 5px strip needs 15+ pixels, OR 1px edge needs 4+ pixels
    dirs = ""
    for d in 'NESW':
        if a['edges_5px'][d] >= 15 or a['edges_1px'][d] >= 4:
            dirs += d
    if not dirs:
        # Lower threshold
        for d in 'NESW':
            if a['edges_5px'][d] >= 8 or a['edges_1px'][d] >= 2:
                dirs += d
    if not dirs:
        dirs = "isol"

    # Determine type based on geometry
    tile_type = ""
    if a['non_bg'] < 15:
        tile_type = "edge-artifact"
    elif dirs == "EW" and a['cy'] > 10 and a['cy'] < 30:
        tile_type = "STRAIGHT-EW"
    elif dirs == "NS" and a['cx'] > 10 and a['cx'] < 30:
        tile_type = "STRAIGHT-NS"
    elif 'N' in dirs and 'E' in dirs and 'S' in dirs and 'W' in dirs:
        tile_type = "CROSS"
    elif len(dirs) == 3:
        tile_type = "T-" + dirs
    elif len(dirs) == 2:
        # Could be a corner/curve or a diagonal
        if a['diag_nwse'] > a['non_bg'] * 0.6:
            tile_type = "DIAG-NWSE"
        elif a['diag_nesw'] > a['non_bg'] * 0.6:
            tile_type = "DIAG-NESW"
        else:
            tile_type = "CURVE-" + dirs
    elif len(dirs) == 1:
        tile_type = "DEAD-END-" + dirs
    else:
        tile_type = "ISOLATED"

    print(f"{idx:>4}  ({tc},{tr}) {a['non_bg']:>4} {a['cx']:>5.1f} {a['cy']:>5.1f} | "
          f"{a['edges_5px']['N']:>3} {a['edges_5px']['S']:>3} {a['edges_5px']['E']:>3} {a['edges_5px']['W']:>3} | "
          f"{a['edges_1px']['N']:>3} {a['edges_1px']['S']:>3} {a['edges_1px']['E']:>3} {a['edges_1px']['W']:>3} | "
          f"{a['quads']['TL']:>3} {a['quads']['TR']:>3} {a['quads']['BL']:>3} {a['quads']['BR']:>3} | "
          f"{a['diag_nwse']:>5} {a['diag_nesw']:>5} | {dirs:>4} | {tile_type}")


# Now: key insight - tiles 0-12 in row 0 are the "straight/T/cross/curve" road tiles
# Tiles 13+ might be diagonal road segments
# Tiles in row 1 include bridge/variant tiles

# Let's check if tiles 8-12 form a diagonal road sequence
print("\n\n" + "=" * 80)
print("DIAGONAL ROAD ANALYSIS (tiles 8-12)")
print("=" * 80)

for idx in [8, 9, 10, 11, 12]:
    tc = idx % COLS
    tr = idx // COLS
    x0 = tc * TW
    y0 = tr * TH

    print(f"\nTile {idx} (col={tc}, row={tr}) - 20x20 block view:")
    # Show as 20x20 (2x2 averaging)
    for by in range(20):
        line = "  "
        for bx in range(20):
            count = 0
            for dy in range(2):
                for dx in range(2):
                    if pixels[y0+by*2+dy][x0+bx*2+dx] != bg:
                        count += 1
            if count == 0: line += "."
            elif count <= 1: line += ":"
            elif count <= 2: line += "o"
            elif count <= 3: line += "O"
            else: line += "#"
        print(line)


# Look at tiles 14-15 (row 0) which span the boundary
print("\n\n" + "=" * 80)
print("TILES 14-15 (row 0 cols 14-15) COMBINED VIEW")
print("=" * 80)
print("These two tiles together form an 80x40 region:")
for by in range(20):
    line = "  "
    for tile_offset in [14, 15]:
        x0 = tile_offset * TW
        y0 = 0
        for bx in range(20):
            count = 0
            for dy in range(2):
                for dx in range(2):
                    if pixels[y0+by*2+dy][x0+bx*2+dx] != bg:
                        count += 1
            if count == 0: line += "."
            elif count <= 1: line += ":"
            elif count <= 2: line += "o"
            elif count <= 3: line += "O"
            else: line += "#"
        line += "|"
    print(line)


# Combined view of tiles 13+14+15+16 (the RD 14-17 area under both hypotheses)
print("\n\n" + "=" * 80)
print("TILES 13-15 (row0) + 16 (row1 col0) COMBINED VIEW")
print("=" * 80)
for tile_idx in [13, 14, 15, 16]:
    tc = tile_idx % COLS
    tr = tile_idx // COLS
    x0 = tc * TW
    y0 = tr * TH
    print(f"\n  Tile {tile_idx} (col={tc}, row={tr}) - 20x20 block view:")
    for by in range(20):
        line = "    "
        for bx in range(20):
            count = 0
            for dy in range(2):
                for dx in range(2):
                    if pixels[y0+by*2+dy][x0+bx*2+dx] != bg:
                        count += 1
            if count == 0: line += "."
            elif count <= 1: line += ":"
            elif count <= 2: line += "o"
            elif count <= 3: line += "O"
            else: line += "#"
        print(line)


# Row 1 tiles analysis (bridges/variants)
print("\n\n" + "=" * 80)
print("ROW 1 TILES (potential bridge/special variants)")
print("=" * 80)

for idx in range(16, 30):
    tc = idx % COLS
    tr = idx // COLS
    x0 = tc * TW
    y0 = tr * TH
    if y0 + TH > height: break

    a = analyze_tile(x0, y0)
    print(f"\n  Tile {idx} (col={tc}, row={tr}): {a['non_bg']} px, center=({a['cx']:.1f},{a['cy']:.1f}) - 10x10 block view:")
    for by in range(10):
        line = "    "
        for bx in range(10):
            count = 0
            for dy in range(4):
                for dx in range(4):
                    if pixels[y0+by*4+dy][x0+bx*4+dx] != bg:
                        count += 1
            if count == 0: line += "."
            elif count <= 3: line += ":"
            elif count <= 7: line += "o"
            elif count <= 11: line += "O"
            else: line += "#"
        print(line)
