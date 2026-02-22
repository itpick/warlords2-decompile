#!/usr/bin/env python3
"""
Verify which road tile mapping produces connected roads by checking
that adjacent road tiles have matching road pixels at their shared edge.

For each pair of adjacent tiles in scenario road data, we check whether
the road pixels connect at the boundary.
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
W2_DIR = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II"
TILE_W, TILE_H = 40, 40

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
            rr = struct.unpack_from('>H', pict_data, offset)[0]; rb = rr & 0x3FFF
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

# Load road sprite sheet
with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)
road_pict = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        road_pict = r.data; break

pixels, width, height = load_pict_pixels(road_pict)
bg = pixels[0][0]
cols = width // TILE_W
print(f"Road sheet: {width}x{height}, bg={bg}, cols_per_row={cols}")

# For each tile, compute which edges have road pixels
# Check a 10-pixel wide center strip at each edge
def get_tile_edge_profile(tile_idx):
    """Return number of non-bg pixels at each edge's center strip."""
    tc = tile_idx % cols
    tr = tile_idx // cols
    x0 = tc * TILE_W
    y0 = tr * TILE_H
    if y0 + TILE_H > height or x0 + TILE_W > width:
        return {'N': 0, 'S': 0, 'E': 0, 'W': 0}

    # N edge: rows 0-2, center cols (15-24)
    n = sum(1 for y in range(3) for x in range(12, 28) if pixels[y0+y][x0+x] != bg)
    # S edge: rows 37-39, center cols
    s = sum(1 for y in range(37, 40) for x in range(12, 28) if pixels[y0+y][x0+x] != bg)
    # E edge: cols 37-39, center rows (15-24)
    e = sum(1 for y in range(12, 28) for x in range(37, 40) if pixels[y0+y][x0+x] != bg)
    # W edge: cols 0-2, center rows
    w = sum(1 for y in range(12, 28) for x in range(3) if pixels[y0+y][x0+x] != bg)
    return {'N': n, 'S': s, 'E': e, 'W': w}

# For each tile, also get the EXACT edge pixel pattern (where road pixels are)
def get_edge_road_positions(tile_idx):
    """Return the positions of non-bg pixels at each edge."""
    tc = tile_idx % cols
    tr = tile_idx // cols
    x0 = tc * TILE_W
    y0 = tr * TILE_H
    if y0 + TILE_H > height or x0 + TILE_W > width:
        return {}

    # N edge: row 0, which cols have road?
    n_cols = [x for x in range(TILE_W) if pixels[y0][x0+x] != bg]
    # S edge: row 39
    s_cols = [x for x in range(TILE_W) if pixels[y0+39][x0+x] != bg]
    # E edge: col 39, which rows have road?
    e_rows = [y for y in range(TILE_H) if pixels[y0+y][x0+39] != bg]
    # W edge: col 0, which rows have road?
    w_rows = [y for y in range(TILE_H) if pixels[y0+y][x0] != bg]
    return {'N_cols': n_cols, 'S_cols': s_cols, 'E_rows': e_rows, 'W_rows': w_rows}

# Print tile edge profiles
print(f"\n{'Tile':>4}  {'N':>3} {'S':>3} {'E':>3} {'W':>3}  Directions  Edge positions")
print("-" * 90)
threshold = 3
for idx in range(17):
    prof = get_tile_edge_profile(idx)
    dirs = ""
    if prof['N'] >= threshold: dirs += "N"
    if prof['E'] >= threshold: dirs += "E"
    if prof['S'] >= threshold: dirs += "S"
    if prof['W'] >= threshold: dirs += "W"
    if not dirs: dirs = "none"

    edge_pos = get_edge_road_positions(idx)
    pos_str = ""
    if edge_pos.get('N_cols'):
        n_min, n_max = min(edge_pos['N_cols']), max(edge_pos['N_cols'])
        pos_str += f" N:cols[{n_min}-{n_max}]"
    if edge_pos.get('S_cols'):
        s_min, s_max = min(edge_pos['S_cols']), max(edge_pos['S_cols'])
        pos_str += f" S:cols[{s_min}-{s_max}]"
    if edge_pos.get('E_rows'):
        e_min, e_max = min(edge_pos['E_rows']), max(edge_pos['E_rows'])
        pos_str += f" E:rows[{e_min}-{e_max}]"
    if edge_pos.get('W_rows'):
        w_min, w_max = min(edge_pos['W_rows']), max(edge_pos['W_rows'])
        pos_str += f" W:rows[{w_min}-{w_max}]"

    print(f"{idx:>4}  {prof['N']:>3} {prof['S']:>3} {prof['E']:>3} {prof['W']:>3}  {dirs:<10} {pos_str}")

# Now test both mappings against scenario data
kRoadTileMap = [0, 0,1,14,4,5,6,7,8,10,2,12,15,1,13,11,3,2]
kRdMinus1 = [0] + list(range(17))  # rd-1
# Direct mapping: tileIdx = rd, except rd=15 maps to tile 8 (FUN_10008c0c: srcX = rd * 40)
kDirect = [0] + [rd if rd != 15 else 8 for rd in range(1, 18)]

# Expected directions for each RD value (from kAutoTile)
rd_dirs = {
    1: "EW", 2: "NS", 3: "NESW", 4: "ESW", 5: "NSW",
    6: "NEW", 7: "NES", 8: "SW", 9: "NW", 10: "NE",
    11: "ES", 12: "W", 13: "S", 14: "E", 15: "N",
    16: "EW", 17: "NS"
}

print(f"\n\nMAPPING COMPARISON:")
print(f"{'RD':>3} {'Expected':>8}  {'kRoadTileMap':>12} {'tile dirs':>10}  {'rd-1':>5} {'tile dirs':>10}  {'direct':>6} {'tile dirs':>10}  Match?")
print("-" * 110)

for rd in range(1, 18):
    expected = rd_dirs[rd]
    exp_set = set(expected)

    # kRoadTileMap
    t1 = kRoadTileMap[rd]
    p1 = get_tile_edge_profile(t1)
    d1 = ""
    if p1['N'] >= threshold: d1 += "N"
    if p1['E'] >= threshold: d1 += "E"
    if p1['S'] >= threshold: d1 += "S"
    if p1['W'] >= threshold: d1 += "W"

    # rd-1
    t2 = kRdMinus1[rd]
    p2 = get_tile_edge_profile(t2)
    d2 = ""
    if p2['N'] >= threshold: d2 += "N"
    if p2['E'] >= threshold: d2 += "E"
    if p2['S'] >= threshold: d2 += "S"
    if p2['W'] >= threshold: d2 += "W"

    # direct
    t3 = kDirect[rd]
    p3 = get_tile_edge_profile(t3)
    d3 = ""
    if p3['N'] >= threshold: d3 += "N"
    if p3['E'] >= threshold: d3 += "E"
    if p3['S'] >= threshold: d3 += "S"
    if p3['W'] >= threshold: d3 += "W"

    m1 = "OK" if set(d1) == exp_set else ("~" if set(d1) & exp_set else "WRONG")
    m2 = "OK" if set(d2) == exp_set else ("~" if set(d2) & exp_set else "WRONG")
    m3 = "OK" if set(d3) == exp_set else ("~" if set(d3) & exp_set else "WRONG")

    print(f"{rd:>3} {expected:>8}  tile {t1:>2} → {d1 or 'none':<8}  tile {t2:>2} → {d2 or 'none':<8}  tile {t3:>2} → {d3 or 'none':<8}  map:{m1:<5} rd-1:{m2:<5} dir:{m3}")

# Now check edge pixel ALIGNMENT between adjacent road tiles in scenarios
print(f"\n\n{'='*80}")
print("EDGE ALIGNMENT TEST - Do adjacent road tiles connect at boundaries?")
print(f"{'='*80}")

# Load Erythea RD data
erythea_path = os.path.join(W2_DIR, "Erythea Campaign", "..namedfork/rsrc")
with open(erythea_path, 'rb') as f: edata = f.read()
rd_data = None
for r in parse_resource_fork(edata):
    if r.type_str == 'RD  ' and r.res_id == 10000:
        rd_data = r.data; break

WIDTH = 112

def check_pair_alignment(tile_a, tile_b, edge):
    """Check if tile_a's edge connects to tile_b's opposite edge.
    edge: 'E' means tile_a is left, tile_b is right.
    Returns (overlap_count, tile_a_pixels, tile_b_pixels) where overlap = matching row/col positions."""
    pos_a = get_edge_road_positions(tile_a)
    pos_b = get_edge_road_positions(tile_b)

    if edge == 'E':  # tile_a's east edge must match tile_b's west edge (row positions)
        a_rows = set(pos_a.get('E_rows', []))
        b_rows = set(pos_b.get('W_rows', []))
        overlap = len(a_rows & b_rows)
        return overlap, len(a_rows), len(b_rows)
    elif edge == 'S':  # tile_a's south edge must match tile_b's north edge (col positions)
        a_cols = set(pos_a.get('S_cols', []))
        b_cols = set(pos_b.get('N_cols', []))
        overlap = len(a_cols & b_cols)
        return overlap, len(a_cols), len(b_cols)
    return 0, 0, 0

for mapping_name, mapping in [("kRoadTileMap", kRoadTileMap), ("rd-1", kRdMinus1), ("direct", kDirect)]:
    connected = 0
    disconnected = 0
    total_pairs = 0

    for y in range(156):
        for x in range(WIDTH):
            rd = rd_data[y * WIDTH + x]
            if rd == 0 or rd > 17: continue

            # Check east neighbor
            if x + 1 < WIDTH:
                rd_e = rd_data[y * WIDTH + x + 1]
                if rd_e > 0 and rd_e <= 17:
                    tile_a = mapping[rd]
                    tile_b = mapping[rd_e]
                    overlap, a_px, b_px = check_pair_alignment(tile_a, tile_b, 'E')
                    total_pairs += 1
                    if (a_px > 0 and b_px > 0 and overlap > 0) or (a_px == 0 and b_px == 0):
                        connected += 1
                    else:
                        disconnected += 1

            # Check south neighbor
            if y + 1 < 156:
                rd_s = rd_data[(y+1) * WIDTH + x]
                if rd_s > 0 and rd_s <= 17:
                    tile_a = mapping[rd]
                    tile_b = mapping[rd_s]
                    overlap, a_px, b_px = check_pair_alignment(tile_a, tile_b, 'S')
                    total_pairs += 1
                    if (a_px > 0 and b_px > 0 and overlap > 0) or (a_px == 0 and b_px == 0):
                        connected += 1
                    else:
                        disconnected += 1

    print(f"\n{mapping_name}: {connected}/{total_pairs} connected ({disconnected} disconnected)")
    pct = (connected / total_pairs * 100) if total_pairs else 0
    print(f"  Connection rate: {pct:.1f}%")

# Print specific disconnection examples for kRoadTileMap
print(f"\n\nDISCONNECTION DETAILS for kRoadTileMap:")
print(f"{'Pos':>10} {'Dir':>4} {'RD_A':>4} {'RD_B':>4} {'Tile_A':>6} {'Tile_B':>6} {'A_edge':>8} {'B_edge':>8} {'Overlap':>8}")
print("-" * 70)
count = 0
for y in range(156):
    for x in range(WIDTH):
        rd = rd_data[y * WIDTH + x]
        if rd == 0 or rd > 17: continue
        for dx, dy, edge_name, edge in [(1,0,'E','E'), (0,1,'S','S')]:
            nx, ny = x + dx, y + dy
            if nx >= WIDTH or ny >= 156: continue
            rd_n = rd_data[ny * WIDTH + nx]
            if rd_n == 0 or rd_n > 17: continue
            tile_a = kRoadTileMap[rd]
            tile_b = kRoadTileMap[rd_n]
            overlap, a_px, b_px = check_pair_alignment(tile_a, tile_b, edge)
            if a_px > 0 and b_px > 0 and overlap == 0:
                pos_a = get_edge_road_positions(tile_a)
                pos_b = get_edge_road_positions(tile_b)
                if edge == 'E':
                    a_str = str(pos_a.get('E_rows', [])[:5])
                    b_str = str(pos_b.get('W_rows', [])[:5])
                else:
                    a_str = str(pos_a.get('S_cols', [])[:5])
                    b_str = str(pos_b.get('N_cols', [])[:5])
                print(f"({x:3d},{y:3d}) {edge_name:>4} {rd:>4} {rd_n:>4} tile {tile_a:>2} tile {tile_b:>2} {a_str:>15} {b_str:>15} {overlap:>4}")
                count += 1
                if count >= 30: break
        if count >= 30: break
    if count >= 30: break
