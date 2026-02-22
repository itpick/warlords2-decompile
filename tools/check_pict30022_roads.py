#!/usr/bin/env python3
"""
Check PICT 30022 and 30023 (640x240 terrain sheets) for road tiles
at the position LoadTerrainSet references: source (80, 160), size (384, 40).
Also check PICT 30021 layout more carefully.
"""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

TERRAIN_FILE = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def load_pict_pixels_with_palette(pict_data):
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
                    if f >= 0: c = f+1; un.extend(pict_data[offset:offset+c]); offset += c
                    elif f != -128: c = -f+1; v = pict_data[offset]; offset += 1; un.extend([v]*c)
                for x in range(min(pw, len(un))): px[row][x] = un[x]
            return px, pw, ph, pal
        if opcode in (0xFF, 0xFFFF): break
        if version == 2 and opcode >= 0x100: offset += (opcode >> 8) * 2
        elif opcode == 0xA1: offset += 4 + struct.unpack_from('>H', pict_data, offset+2)[0]
        elif opcode == 0xA0: offset += 2
        else: break
    return None

with open(TERRAIN_FILE, 'rb') as f:
    data = f.read()
resources = parse_resource_fork(data)

# Check PICTs 30021, 30022, 30023
for pict_id in [30021, 30022, 30023]:
    pict_data = None
    for r in resources:
        if r.type_str == 'PICT' and r.res_id == pict_id:
            pict_data = r.data; break
    if not pict_data:
        print(f"\nPICT {pict_id}: NOT FOUND")
        continue

    result = load_pict_pixels_with_palette(pict_data)
    if not result:
        print(f"\nPICT {pict_id}: Failed to parse")
        continue

    pixels, width, height, palette = result
    bg = pixels[0][0]
    print(f"\nPICT {pict_id}: {width}x{height}, bg_idx={bg}")
    if bg < len(palette):
        print(f"  bg_color=({palette[bg][0]},{palette[bg][1]},{palette[bg][2]})")

    # For PICT 30022, check the area at (80, 160) that LoadTerrainSet reads for roads
    if pict_id == 30022 and height > 200:
        print(f"\n  Road area analysis at (80, 160), size (384, 40):")
        # Check for non-bg pixels in this region
        for tile_idx in range(10):  # Check 10 potential tile positions
            tx = 80 + tile_idx * 40
            if tx + 40 > width: break
            count = 0
            for y in range(160, min(200, height)):
                for x in range(tx, min(tx + 40, width)):
                    if pixels[y][x] != bg:
                        count += 1
            print(f"    Position ({tx},{160}): {count} non-bg pixels")

        # Also check road tiles at different rows
        print(f"\n  Checking ALL 40px rows for road-like content:")
        for row_start in range(0, height, 40):
            total_nonbg = 0
            for y in range(row_start, min(row_start + 40, height)):
                for x in range(width):
                    if pixels[y][x] != bg:
                        total_nonbg += 1
            if total_nonbg > 0:
                tiles_with_content = 0
                for tc in range(width // 40):
                    count = 0
                    for y in range(row_start, min(row_start + 40, height)):
                        for x in range(tc * 40, min((tc+1) * 40, width)):
                            if pixels[y][x] != bg:
                                count += 1
                    if count > 0:
                        tiles_with_content += 1
                print(f"    Row y={row_start}: {total_nonbg} non-bg pixels, {tiles_with_content} tiles with content")

    # For PICT 30021, show edge analysis for each tile position
    if pict_id == 30021:
        TILE_W, TILE_H = 40, 40
        cols = width // TILE_W
        print(f"\n  Edge connectivity analysis (road exits at each edge):")
        for idx in range(32):
            tc = idx % cols
            tr = idx // cols
            x0 = tc * TILE_W
            y0 = tr * TILE_H
            if y0 + TILE_H > height: break

            # Count total non-bg
            total = sum(1 for y in range(TILE_H) for x in range(TILE_W) if pixels[y0+y][x0+x] != bg)
            if total == 0: continue

            # Check edge strips (first/last 2 rows/cols)
            n_cols = sorted(set(x for y in range(2) for x in range(TILE_W) if pixels[y0+y][x0+x] != bg))
            s_cols = sorted(set(x for y in range(TILE_H-2, TILE_H) for x in range(TILE_W) if pixels[y0+y][x0+x] != bg))
            e_rows = sorted(set(y for y in range(TILE_H) for x in range(TILE_W-2, TILE_W) if pixels[y0+y][x0+x] != bg))
            w_rows = sorted(set(y for y in range(TILE_H) for x in range(2) if pixels[y0+y][x0+x] != bg))

            n_range = f"cols[{min(n_cols)}-{max(n_cols)}]" if n_cols else "none"
            s_range = f"cols[{min(s_cols)}-{max(s_cols)}]" if s_cols else "none"
            e_range = f"rows[{min(e_rows)}-{max(e_rows)}]" if e_rows else "none"
            w_range = f"rows[{min(w_rows)}-{max(w_rows)}]" if w_rows else "none"

            print(f"    Tile {idx:2d}: {total:4d}px  N:{n_range:<18} S:{s_range:<18} E:{e_range:<18} W:{w_range}")
