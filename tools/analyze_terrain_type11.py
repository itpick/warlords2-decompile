#!/usr/bin/env python3
"""
Analyze terrain data in the Erythea scenario.

1. Extract MAP resource to get tile data (2 bytes per tile)
2. Extract gs+0x711 terrain type table from the SCN resource
3. Find all tiles whose terrain type = 11
4. Dump ruin/site records from gs+0x812 region
5. Cross-reference terrain type 11 tiles with ruin records

Terrain types (from DAT 30030 in Grasslands terrain file):
  0=Road, 1=Bridge, 2=Water, 3=Shore, 4=Forest,
  5=Hills, 6=Mountains, 7=Plains, 8=Marsh, 9=Tower(Sea),
  10=City, 11=Ruin/Temple
"""

import struct
import sys
import os
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from parse_resource_fork import parse_resource_fork

RSRC_PATH = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                         "Warlords II", "Erythea Campaign", "..namedfork", "rsrc")
MAP_W = 112
MAP_H = 156

TERRAIN_NAMES = {
    0: "Road", 1: "Bridge", 2: "Water", 3: "Shore", 4: "Forest",
    5: "Hills", 6: "Mountains", 7: "Plains", 8: "Marsh", 9: "Sea/Tower",
    10: "City", 11: "Ruin/Temple"
}


def scan_ruin_records(scn_data, start_off, end_off):
    """Scan for ruin/site records by looking for X 00 Y 00 Name patterns."""
    records = []
    d = scn_data
    for off in range(start_off, min(end_off, len(d)) - 24):
        x = d[off]
        if x >= MAP_W:
            continue
        if d[off + 1] != 0:
            continue
        y = d[off + 2]
        if y >= MAP_H:
            continue
        if d[off + 3] != 0:
            continue
        first_char = d[off + 4]
        if first_char < 0x41 or first_char > 0x7A:
            continue
        name_end = off + 4
        while name_end < off + 24 and name_end < len(d) and d[name_end] != 0:
            name_end += 1
        name = d[off + 4:name_end].decode('mac_roman', errors='replace')
        if len(name) < 2:
            continue
        # Site type: byte at +24 (after 4 coord bytes + 20 name bytes)
        stype_off = off + 24
        stype = d[stype_off] if stype_off < len(d) else -1
        records.append((off, x, y, name, stype))
    return records


def main():
    with open(RSRC_PATH, 'rb') as f:
        data = f.read()
    resources = parse_resource_fork(data)

    map_data = scn_data = None
    for r in resources:
        if r.type_str == 'MAP ':
            map_data = r.data
        elif r.type_str == 'SCN ':
            scn_data = r.data

    if not map_data or not scn_data:
        print("ERROR: Missing MAP or SCN resource")
        return

    # =========================================================================
    # Part 1: Terrain type table summary
    # =========================================================================
    print("=" * 80)
    print("TERRAIN TYPE TABLE (gs+0x711 in SCN)")
    print("=" * 80)

    idx_counts = Counter()
    for y in range(MAP_H):
        for x in range(MAP_W):
            off = y * 0xE0 + x * 2
            idx_counts[map_data[off]] += 1

    max_idx = max(idx_counts.keys())
    print(f"\nTile indices in use: {len(idx_counts)}, range 0..{max_idx}")
    print(f"Map size: {MAP_W}x{MAP_H} = {MAP_W * MAP_H} tiles\n")

    # Terrain type distribution
    type_counts = Counter()
    for y in range(MAP_H):
        for x in range(MAP_W):
            off = y * 0xE0 + x * 2
            tidx = map_data[off]
            ttype = scn_data[0x711 + tidx]
            type_counts[ttype] += 1

    print("Map tile counts by terrain type:")
    for tt in sorted(type_counts.keys()):
        print(f"  Type {tt:2d} ({TERRAIN_NAMES.get(tt, '?'):15s}): {type_counts[tt]:>6} tiles")

    # =========================================================================
    # Part 2: Type 11 analysis
    # =========================================================================
    print("\n" + "=" * 80)
    print("TERRAIN TYPE 11 (Ruin/Temple) ANALYSIS")
    print("=" * 80)

    type11_indices = [idx for idx in range(max_idx + 1) if scn_data[0x711 + idx] == 11]
    print(f"\nTile indices mapped to type 11: {type11_indices}")
    for idx in type11_indices:
        cnt = idx_counts.get(idx, 0)
        print(f"  Index {idx:3d}: {cnt:5d} map tiles")

    type11_tiles = []
    for y in range(MAP_H):
        for x in range(MAP_W):
            off = y * 0xE0 + x * 2
            tidx = map_data[off]
            b2 = map_data[off + 1]
            if scn_data[0x711 + tidx] == 11:
                type11_tiles.append((x, y, tidx, b2))

    print(f"\nTotal type-11 tiles: {len(type11_tiles)}")
    print(f"  Tile index  9: {sum(1 for _, _, ti, _ in type11_tiles if ti == 9)} tiles (generic ground)")
    print(f"  Tile index 10: {sum(1 for _, _, ti, _ in type11_tiles if ti == 10)} tiles (ruin graphic)")
    print(f"  Tile index 11: {sum(1 for _, _, ti, _ in type11_tiles if ti == 11)} tiles (unused)")

    print(f"\nNOTE: Tile index 9 is the 2nd most common tile ({idx_counts[9]} uses),")
    print(f"forming a checkerboard with index 31 ({idx_counts[31]} uses).")
    print(f"Despite type-11 classification, index 9 is generic ground terrain.")

    # =========================================================================
    # Part 3: Ruin/site records
    # =========================================================================
    print("\n" + "=" * 80)
    print("RUIN/SITE RECORDS (gs+0x810 region)")
    print("=" * 80)

    ruin_count = struct.unpack_from('>H', scn_data, 0x810)[0]
    print(f"\nCount at gs+0x810 (BE): {ruin_count}")

    # Scan the full ruin region (0x800 to 0xD00 covers all records)
    all_records = scan_ruin_records(scn_data, 0x800, 0xD00)

    # Filter out (0,0) sentinel/standard records
    valid_records = [(off, x, y, name, st) for off, x, y, name, st in all_records
                     if x > 0 or y > 0]

    print(f"Found {len(valid_records)} ruin/site records with valid coordinates:\n")
    print(f"{'#':>3} {'X':>4} {'Y':>4} {'SType':>6} {'Type':>8} Name")
    print("-" * 65)
    for i, (off, x, y, name, stype) in enumerate(valid_records):
        stype_name = {0: "city", 1: "temple", 2: "ruin"}.get(stype, f"?({stype})")
        print(f"  {i:2d}  {x:3d}  {y:3d}  {stype:5d}  {stype_name:>8}  {name}")

    # =========================================================================
    # Part 4: Hex dump of each ruin record (first 32 bytes)
    # =========================================================================
    print("\n" + "=" * 80)
    print("RAW HEX DUMP OF RUIN RECORDS (32 bytes each)")
    print("=" * 80)

    for i, (off, x, y, name, stype) in enumerate(valid_records):
        rec = scn_data[off:off + 32]
        hex_str = " ".join(f"{b:02x}" for b in rec)
        asc_str = "".join(chr(b) if 32 <= b < 127 else "." for b in rec)
        print(f"\n  #{i:2d} (0x{off:04X}): {name}")
        print(f"    X={x}, Y={y}, siteType={stype}")
        print(f"    hex: {hex_str}")
        print(f"    asc: {asc_str}")

    # =========================================================================
    # Part 5: Cross-reference with MAP terrain
    # =========================================================================
    print("\n" + "=" * 80)
    print("RUIN/SITE RECORDS vs MAP TERRAIN")
    print("=" * 80)

    print(f"\n{'#':>3} {'X':>4} {'Y':>4} {'TileIdx':>8} {'TerrType':>9} Name")
    print("-" * 70)
    ruin_terrain = Counter()
    for i, (off, x, y, name, stype) in enumerate(valid_records):
        moff = y * 0xE0 + x * 2
        tidx = map_data[moff]
        ttype = scn_data[0x711 + tidx]
        tname = TERRAIN_NAMES.get(ttype, "?")
        ruin_terrain[ttype] += 1
        print(f"  {i:2d}  {x:3d}  {y:3d}  {tidx:7d}  {ttype:2d} ({tname:10s})  {name}")

    print(f"\nRuin underlying terrain types:")
    for tt, cnt in ruin_terrain.most_common():
        print(f"  Type {tt:2d} ({TERRAIN_NAMES.get(tt, '?'):15s}): {cnt} ruins")

    # =========================================================================
    # Part 6: Tile index 10 cross-reference
    # =========================================================================
    print("\n" + "=" * 80)
    print("TILE INDEX 10 LOCATIONS (ruin graphic tile)")
    print("=" * 80)

    ruin_set = set((x, y) for _, x, y, _, _ in valid_records)
    idx10_tiles = []
    for y in range(MAP_H):
        for x in range(MAP_W):
            off = y * 0xE0 + x * 2
            if map_data[off] == 10:
                idx10_tiles.append((x, y))

    at_ruin = sum(1 for x, y in idx10_tiles if (x, y) in ruin_set)
    not_at_ruin = sum(1 for x, y in idx10_tiles if (x, y) not in ruin_set)

    print(f"\nTotal tile index 10 tiles: {len(idx10_tiles)}")
    print(f"  At ruin record locations: {at_ruin}")
    print(f"  NOT at ruin record locations: {not_at_ruin}")

    for x, y in idx10_tiles:
        is_ruin = (x, y) in ruin_set
        rname = ""
        if is_ruin:
            for _, rx, ry, name, _ in valid_records:
                if rx == x and ry == y:
                    rname = f" = {name}"
                    break
        label = "(RUIN)" if is_ruin else "(no ruin record)"
        print(f"  ({x:3d},{y:3d}) {label}{rname}")

    # =========================================================================
    # Summary
    # =========================================================================
    print("\n" + "=" * 80)
    print("SUMMARY")
    print("=" * 80)
    print(f"\n  Terrain type 11 covers {type_counts[11]} map tiles")
    print(f"    - {idx_counts.get(9, 0)} are tile index 9 (generic ground, NOT ruins)")
    print(f"    - {idx_counts.get(10, 0)} are tile index 10 (ruin graphic)")
    print(f"  {len(valid_records)} ruin/site records found in SCN data:")
    temples = sum(1 for _, _, _, _, st in valid_records if st == 1)
    ruins = sum(1 for _, _, _, _, st in valid_records if st == 2)
    print(f"    - {temples} temples (siteType=1)")
    print(f"    - {ruins} ruins (siteType=2)")
    print(f"  {sum(1 for _, _, _, _, st in valid_records if scn_data[0x711 + map_data[_[1] * 0xE0 + _[0] * 2]] == 11) if False else ruin_terrain.get(11, 0)} ruins sit on ruin terrain (tile index 10)")
    print(f"  {ruin_terrain.get(8, 0)} ruins sit on marsh terrain (tile index 12)")
    print(f"  Ruins are identified by RECORDS, not terrain type alone")


if __name__ == "__main__":
    main()
