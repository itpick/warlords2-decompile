#!/usr/bin/env python3
"""
Render a section of Erythea Campaign's road data using the actual sprite sheet tiles,
applying the kRoadTileMap lookup table. Output a BMP for visual inspection.
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"
W2_DIR = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II"
OUTPUT = os.path.expanduser("~/Desktop/road_render_test.bmp")

# The lookup table from main.c
kRoadTileMap = [0, 0,1,14,4,5,6,7,8,10,9,12,15,16,13,11,3,2]

# Alternative: rd-1 mapping
kRdMinus1 = [0] + list(range(17))  # [0, 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]

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
                offset += 8
                pal = []
                for i in range(nc):
                    cr = struct.unpack_from('>H', pict_data, offset+2)[0]>>8
                    cg = struct.unpack_from('>H', pict_data, offset+4)[0]>>8
                    cb = struct.unpack_from('>H', pict_data, offset+6)[0]>>8
                    pal.append((cr,cg,cb)); offset += 8
            else:
                pal = [(255,255,255),(0,0,0)]; offset += 10
            offset += 18
            if opcode == 0x99: offset += struct.unpack_from('>H', pict_data, offset)[0]
            px = [[0]*pw for _ in range(ph)]
            for row in range(ph):
                if rb > 250: bc = struct.unpack_from('>H', pict_data, offset)[0]; offset += 2
                else: bc = pict_data[offset]; offset += 1
                re = offset + bc; un = bytearray()
                while offset < re:
                    f = struct.unpack_from('>b', pict_data, offset)[0]; offset += 1
                    if f >= 0: c=f+1; un.extend(pict_data[offset:offset+c]); offset += c
                    elif f != -128: c=-f+1; v=pict_data[offset]; offset+=1; un.extend([v]*c)
                for x in range(min(pw, len(un))): px[row][x] = un[x]
            return px, pw, ph, pal
        if opcode in (0xFF,0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode>>8)*2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None

def write_bmp(filename, fb, w, h):
    rs = (w*3+3)&~3
    with open(filename,'wb') as f:
        f.write(b'BM')
        f.write(struct.pack('<I',54+rs*h))
        f.write(struct.pack('<HH',0,0))
        f.write(struct.pack('<I',54))
        f.write(struct.pack('<IiiHHIIiiII',40,w,h,1,24,0,rs*h,2835,2835,0,0))
        for y in range(h-1,-1,-1):
            row = bytearray()
            for x in range(w):
                r,g,b = fb[y][x]; row.extend([b,g,r])
            while len(row)<rs: row.append(0)
            f.write(row)

# Load terrain sprite sheet
with open(TERRAIN_FILE,'rb') as f: data = f.read()
resources = parse_resource_fork(data)
road_pict = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30021:
        road_pict = r.data; break

road_px, rpw, rph, palette = load_pict_pixels(road_pict)
bg_idx = road_px[0][0]
bg_color = palette[bg_idx] if bg_idx < len(palette) else (200,200,200)
print(f"Road sheet: {rpw}x{rph}, bg_idx={bg_idx}, bg_color={bg_color}")

# Load Erythea RD data
erythea_path = os.path.join(W2_DIR, "Erythea Campaign", "..namedfork/rsrc")
with open(erythea_path,'rb') as f: edata = f.read()
rd_data = None
for r in parse_resource_fork(edata):
    if r.type_str == 'RD  ' and r.res_id == 10000:
        rd_data = r.data; break

# Find a good area with road corners/junctions
# Search for a T-junction
WIDTH, HEIGHT = 112, 156
best_area = None
best_count = 0
for sy in range(HEIGHT-15):
    for sx in range(WIDTH-15):
        count = 0
        for dy in range(15):
            for dx in range(15):
                rd = rd_data[(sy+dy)*WIDTH+(sx+dx)]
                if rd > 0 and rd <= 17:
                    count += 1
        if count > best_count:
            best_count = count
            best_area = (sx, sy)

sx, sy = best_area
print(f"Best road area at ({sx},{sy}) with {best_count} road tiles in 15x15")

# Render this area using both mappings
TILE_W, TILE_H = 40, 40
VIEW_W, VIEW_H = 15, 15
IMG_W = VIEW_W * TILE_W * 2 + 20  # Two renderings side by side
IMG_H = VIEW_H * TILE_H + 60  # Extra space for labels

# Green background
green = (60, 140, 40)
fb = [[green for _ in range(IMG_W)] for _ in range(IMG_H)]

# Draw labels
def put_text(fb, x, y, text, color=(255,255,255)):
    # Very simple - just mark positions
    pass

road_cols = rpw // TILE_W

for mapping_idx, (mapping, label) in enumerate([(kRoadTileMap, "kRoadTileMap"), (kRdMinus1, "rd-1")]):
    x_offset = mapping_idx * (VIEW_W * TILE_W + 20)

    for ty in range(VIEW_H):
        for tx in range(VIEW_W):
            mx = sx + tx
            my = sy + ty
            if mx >= WIDTH or my >= HEIGHT: continue
            rd = rd_data[my * WIDTH + mx]
            if rd == 0 or rd > 17: continue

            tile_idx = mapping[rd]
            src_col = tile_idx % road_cols
            src_row = tile_idx // road_cols
            src_x0 = src_col * TILE_W
            src_y0 = src_row * TILE_H

            dst_x0 = x_offset + tx * TILE_W
            dst_y0 = 30 + ty * TILE_H  # 30px for label

            for py in range(TILE_H):
                for px in range(TILE_W):
                    pidx = road_px[src_y0+py][src_x0+px]
                    if pidx != bg_idx and pidx < len(palette):
                        fb[dst_y0+py][dst_x0+px] = palette[pidx]

# Also print the RD grid for this area
print(f"\nRD grid at ({sx},{sy}):")
for dy in range(VIEW_H):
    row = ""
    for dx in range(VIEW_W):
        rd = rd_data[(sy+dy)*WIDTH+(sx+dx)]
        if rd == 0:
            row += " ."
        else:
            row += f"{rd:2d}"
    print(f"  y{sy+dy:3d}: {row}")

# Print tile mapping comparison for non-zero values in this area
print(f"\nTile mapping comparison for this area:")
seen_rds = set()
for dy in range(VIEW_H):
    for dx in range(VIEW_W):
        rd = rd_data[(sy+dy)*WIDTH+(sx+dx)]
        if rd > 0 and rd <= 17 and rd not in seen_rds:
            seen_rds.add(rd)
for rd in sorted(seen_rds):
    print(f"  RD {rd:2d}: kRoadTileMap → tile {kRoadTileMap[rd]:2d},  rd-1 → tile {kRdMinus1[rd]:2d}")

write_bmp(OUTPUT, fb, IMG_W, IMG_H)
print(f"\nRendered to {OUTPUT}")
