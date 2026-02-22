#!/usr/bin/env python3
"""
Extract ALL 3 image records from PICT 30022 and analyze the road tiles at y=160.
Compare with PICT 30021 road tiles.
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

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

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

# Get PICT 30022
pict_data_22 = None
pict_data_21 = None
for r in resources:
    if r.type_str == 'PICT' and r.res_id == 30022:
        pict_data_22 = r.data
    if r.type_str == 'PICT' and r.res_id == 30021:
        pict_data_21 = r.data

print("=== PICT 30022 (Terrain) ===")
images = extract_all_packbits_images(pict_data_22)
print(f"Found {len(images)} image records:")
for i, (px, w, h, top, left, pal) in enumerate(images):
    bg = px[0][0]
    bg_color = pal[bg] if bg < len(pal) else (0,0,0)
    print(f"  Image {i}: {w}x{h} at ({left},{top}), bg_idx={bg}, bg_color={bg_color}")

# Combine into full 640x240 canvas
full_w, full_h = 640, 240
full_px = [[0] * full_w for _ in range(full_h)]
full_pal = images[0][5] if images else []

for px, w, h, top, left, pal in images:
    for y in range(h):
        for x in range(w):
            if top + y < full_h and left + x < full_w:
                full_px[top + y][left + x] = px[y][x]

# Analyze road tiles at y=160
print(f"\n=== Road tiles at y=160-199 (row 4) ===")
road_bg = full_px[160][0]
road_bg_color = full_pal[road_bg] if road_bg < len(full_pal) else (0,0,0)
print(f"Background at (0,160): idx={road_bg}, color={road_bg_color}")

# Check each 40x40 tile position in row y=160
TILE_W, TILE_H = 40, 40
for col in range(640 // TILE_W):
    x0 = col * TILE_W
    y0 = 160
    total = sum(1 for y in range(TILE_H) for x in range(TILE_W)
                if full_px[y0+y][x0+x] != road_bg)
    if total > 0:
        # Analyze edges
        n_cols = sorted(set(x - x0 for y in range(2) for x in range(x0, x0 + TILE_W)
                           if full_px[y0+y][x] != road_bg))
        s_cols = sorted(set(x - x0 for y in range(TILE_H-2, TILE_H) for x in range(x0, x0 + TILE_W)
                           if full_px[y0+y][x] != road_bg))
        e_rows = sorted(set(y - y0 for y in range(y0, y0 + TILE_H) for x in range(x0 + TILE_W - 2, x0 + TILE_W)
                           if full_px[y][x] != road_bg))
        w_rows = sorted(set(y - y0 for y in range(y0, y0 + TILE_H) for x in range(x0, x0 + 2)
                           if full_px[y][x] != road_bg))

        n = f"cols[{min(n_cols)}-{max(n_cols)}]" if n_cols else "none"
        s = f"cols[{min(s_cols)}-{max(s_cols)}]" if s_cols else "none"
        e = f"rows[{min(e_rows)}-{max(e_rows)}]" if e_rows else "none"
        w = f"rows[{min(w_rows)}-{max(w_rows)}]" if w_rows else "none"

        # Determine directions
        dirs = ""
        if n_cols: dirs += "N"
        if e_rows: dirs += "E"
        if s_cols: dirs += "S"
        if w_rows: dirs += "W"

        print(f"  Tile {col:2d} (x={x0:3d}): {total:4d}px  dirs={dirs:<5}  N:{n:<18} S:{s:<18} E:{e:<18} W:{w}")

# Also check y=200-239 (row 5)
print(f"\n=== Tiles at y=200-239 (row 5) ===")
road_bg5 = full_px[200][0] if 200 < full_h else 0
for col in range(640 // TILE_W):
    x0 = col * TILE_W
    y0 = 200
    if y0 + TILE_H > full_h: break
    total = sum(1 for y in range(TILE_H) for x in range(TILE_W)
                if full_px[y0+y][x0+x] != road_bg)
    if total > 0:
        n_cols = sorted(set(x - x0 for y in range(2) for x in range(x0, x0 + TILE_W)
                           if full_px[y0+y][x] != road_bg))
        s_cols = sorted(set(x - x0 for y in range(TILE_H-2, TILE_H) for x in range(x0, x0 + TILE_W)
                           if full_px[y0+y][x] != road_bg))
        e_rows = sorted(set(y - y0 for y in range(y0, y0 + TILE_H) for x in range(x0 + TILE_W - 2, x0 + TILE_W)
                           if full_px[y][x] != road_bg))
        w_rows = sorted(set(y - y0 for y in range(y0, y0 + TILE_H) for x in range(x0, x0 + 2)
                           if full_px[y][x] != road_bg))

        n = f"cols[{min(n_cols)}-{max(n_cols)}]" if n_cols else "none"
        s = f"cols[{min(s_cols)}-{max(s_cols)}]" if s_cols else "none"
        e = f"rows[{min(e_rows)}-{max(e_rows)}]" if e_rows else "none"
        w = f"rows[{min(w_rows)}-{max(w_rows)}]" if w_rows else "none"

        dirs = ""
        if n_cols: dirs += "N"
        if e_rows: dirs += "E"
        if s_cols: dirs += "S"
        if w_rows: dirs += "W"

        print(f"  Tile {col:2d} (x={x0:3d}): {total:4d}px  dirs={dirs:<5}  N:{n:<18} S:{s:<18} E:{e:<18} W:{w}")

# Now compare with PICT 30021
print(f"\n=== PICT 30021 (Road sprite) for comparison ===")
images21 = extract_all_packbits_images(pict_data_21)
if images21:
    px21, w21, h21, _, _, pal21 = images21[0]
    bg21 = px21[0][0]
    print(f"Size: {w21}x{h21}, bg_idx={bg21}")

    # Check edges for row 0 tiles
    for col in range(w21 // TILE_W):
        x0 = col * TILE_W
        total = sum(1 for y in range(TILE_H) for x in range(TILE_W)
                    if px21[y][x0+x] != bg21)
        if total > 0:
            n_cols = sorted(set(x for y in range(2) for x in range(TILE_W) if px21[y][x0+x] != bg21))
            s_cols = sorted(set(x for y in range(TILE_H-2, TILE_H) for x in range(TILE_W) if px21[y][x0+x] != bg21))
            e_rows = sorted(set(y for y in range(TILE_H) for x in range(TILE_W-2, TILE_W) if px21[y][x0+x] != bg21))
            w_rows = sorted(set(y for y in range(TILE_H) for x in range(2) if px21[y][x0+x] != bg21))

            dirs = ""
            if n_cols: dirs += "N"
            if e_rows: dirs += "E"
            if s_cols: dirs += "S"
            if w_rows: dirs += "W"

            n = f"cols[{min(n_cols)}-{max(n_cols)}]" if n_cols else "none"
            s = f"cols[{min(s_cols)}-{max(s_cols)}]" if s_cols else "none"
            e = f"rows[{min(e_rows)}-{max(e_rows)}]" if e_rows else "none"
            w = f"rows[{min(w_rows)}-{max(w_rows)}]" if w_rows else "none"

            print(f"  Tile {col:2d}: {total:4d}px  dirs={dirs:<5}  N:{n:<18} S:{s:<18} E:{e:<18} W:{w}")
