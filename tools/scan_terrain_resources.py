#!/usr/bin/env python3
"""
Scan ALL resources in the Grasslands terrain resource fork.
Focus on PICTs, DATs, and potential road tile mapping tables.
"""

import sys
import os
import struct

sys.path.insert(0, "/Users/lucaspick/workspace/itpick/warlords2-decompile")
from parse_resource_fork import parse_resource_fork, hex_dump_short, decode_generic_text

RSRC_PATH = "/Users/lucaspick/workspace/itpick/warlords2-decompile/Warlords II/Terrain/Grasslands/..namedfork/rsrc"

def decode_pict_dimensions(data):
    """Try to extract dimensions from a PICT resource header."""
    if len(data) < 10:
        return None
    # PICT format: size(2), frame rect top(2), left(2), bottom(2), right(2)
    size = struct.unpack_from('>H', data, 0)[0]
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 2)
    width = right - left
    height = bottom - top
    return (width, height, top, left, bottom, right)

def analyze_as_lookup_table(data):
    """Analyze binary data to see if it could be a lookup table."""
    if len(data) == 0:
        return None

    results = []

    # Check if it's a sequence of bytes
    if len(data) <= 1024:
        unique_vals = set(data)
        max_val = max(data)
        min_val = min(data)
        results.append(f"    Byte analysis: {len(data)} bytes, values {min_val}-{max_val}, {len(unique_vals)} unique values")

        # Check for sequential patterns
        is_sequential = all(data[i] <= data[i+1] for i in range(len(data)-1))
        if is_sequential:
            results.append(f"    ** Monotonically increasing sequence detected!")

        # Check if values are indices (0-based or 1-based, small range)
        if max_val < 64 and len(data) > 4:
            results.append(f"    ** Possible index table (values 0-{max_val}, could be tile indices)")

        # Check for repeating patterns
        for period in [2, 4, 8, 16, 32]:
            if len(data) >= period * 2 and len(data) % period == 0:
                chunks = [data[i:i+period] for i in range(0, len(data), period)]
                # Count unique chunks
                unique_chunks = len(set(bytes(c) for c in chunks))
                if unique_chunks < len(chunks) * 0.5:
                    results.append(f"    Repeating pattern with period {period}: {unique_chunks} unique/{len(chunks)} total chunks")

    # Check if it could be 16-bit words
    if len(data) % 2 == 0 and len(data) <= 2048:
        words = struct.unpack(f'>{len(data)//2}H', data)
        unique_words = set(words)
        max_word = max(words)
        min_word = min(words)
        results.append(f"    Word (16-bit) analysis: {len(words)} words, values {min_word}-{max_word}, {len(unique_words)} unique")

        if max_word < 256 and len(words) > 4:
            results.append(f"    ** Possible 16-bit index table (values 0-{max_word})")

    return results if results else None

def main():
    with open(RSRC_PATH, 'rb') as f:
        data = f.read()

    print(f"Resource fork: {RSRC_PATH}")
    print(f"Size: {len(data):,} bytes")
    print()

    resources = parse_resource_fork(data)
    print(f"Total resources found: {len(resources)}")
    print()

    # ================================================================
    # SECTION 1: Complete resource listing sorted by type
    # ================================================================
    print("=" * 80)
    print("SECTION 1: ALL RESOURCES IN GRASSLANDS TERRAIN FILE")
    print("=" * 80)

    # Group by type
    by_type = {}
    for r in resources:
        if r.type_str not in by_type:
            by_type[r.type_str] = []
        by_type[r.type_str].append(r)

    # Summary table
    print()
    print(f"{'Type':<8} {'Count':>6}  {'Total Size':>12}  {'ID Range':<20}  Notes")
    print(f"{'----':<8} {'-----':>6}  {'----------':>12}  {'--------':<20}  -----")

    known_types = {'PICT', 'clut', 'pltt', 'STR#', 'STR ', 'MENU', 'ALRT', 'DITL', 'DLOG',
                   'WIND', 'CNTL', 'SIZE', 'vers', 'MBAR', 'CMNU', 'cfrg', 'CODE', 'DATA',
                   'cicn', 'icl8', 'ICN#', 'ics#', 'ics8', 'ICON', 'BNDL', 'FREF',
                   'snd ', 'CURS', 'crsr', 'PAT ', 'PAT#', 'ppat', 'FONT', 'NFNT'}

    for type_str in sorted(by_type.keys()):
        entries = by_type[type_str]
        total_size = sum(e.data_size for e in entries)
        ids = sorted(e.res_id for e in entries)
        if len(ids) == 1:
            id_range = str(ids[0])
        elif len(ids) <= 5:
            id_range = ', '.join(str(i) for i in ids)
        else:
            id_range = f"{ids[0]}..{ids[-1]}"

        notes = ""
        if type_str == 'PICT':
            notes = "*** SPRITE SHEETS / IMAGES ***"
        elif type_str in ('DAT ', 'DAT'):
            notes = "*** GAME DATA ***"
        elif type_str not in known_types:
            notes = "*** UNKNOWN/CUSTOM TYPE ***"

        print(f"{type_str:<8} {len(entries):>6}  {total_size:>12,}  {id_range:<20}  {notes}")

    # ================================================================
    # SECTION 2: Detailed PICT listing
    # ================================================================
    print()
    print("=" * 80)
    print("SECTION 2: ALL PICT RESOURCES (potential sprite sheets)")
    print("=" * 80)

    picts = by_type.get('PICT', [])
    if picts:
        print(f"\nFound {len(picts)} PICT resource(s):\n")
        print(f"  {'ID':<8} {'Name':<30} {'Size':>10}  {'Dimensions':<20}  Notes")
        print(f"  {'--':<8} {'----':<30} {'----':>10}  {'----------':<20}  -----")

        for r in sorted(picts, key=lambda x: x.res_id):
            name_str = f'"{r.name}"' if r.name else "(unnamed)"
            dims = decode_pict_dimensions(r.data)
            if dims:
                w, h, top, left, bottom, right = dims
                dim_str = f"{w}x{h}"
                notes = ""
                # Check if this could be a tile grid
                if w > 0 and h > 0:
                    for tile_size in [40, 32, 24, 20, 16, 8]:
                        cols = w // tile_size
                        rows = h // tile_size
                        if w % tile_size == 0 and h % tile_size == 0 and cols > 1:
                            notes += f" [{cols}x{rows} grid of {tile_size}x{tile_size}]"
                # Flag road-related
                if r.res_id == 30021:
                    notes += " <<<< ROAD TILES"
                if 30000 <= r.res_id <= 30099:
                    notes += " (terrain range)"
            else:
                dim_str = "?"
                notes = ""

            print(f"  {r.res_id:<8} {name_str:<30} {r.data_size:>10,}  {dim_str:<20}  {notes}")
    else:
        print("\n  No PICT resources found!")

    # ================================================================
    # SECTION 3: DAT and other game data resources
    # ================================================================
    print()
    print("=" * 80)
    print("SECTION 3: DAT AND OTHER CUSTOM DATA RESOURCES")
    print("=" * 80)

    # Check for DAT with various spacings
    for type_key in ['DAT ', 'DAT', 'RD  ', 'ROAD', 'TILE', 'TMAP', 'MAP ', 'TBL ']:
        if type_key in by_type:
            print(f"\n  Found {type_key!r} resources:")
            for r in sorted(by_type[type_key], key=lambda x: x.res_id):
                name_str = f'"{r.name}"' if r.name else "(unnamed)"
                print(f"    ID={r.res_id:<6} {name_str:<30} size={r.data_size}")
                analysis = analyze_as_lookup_table(r.data)
                if analysis:
                    for line in analysis:
                        print(line)
                # Show hex dump for small resources
                if r.data_size <= 256:
                    print(f"    Full hex: {hex_dump_short(r.data, 256)}")
                else:
                    print(f"    First 128 bytes: {hex_dump_short(r.data, 128)}")

    # ================================================================
    # SECTION 4: Unknown/custom resource types with data analysis
    # ================================================================
    print()
    print("=" * 80)
    print("SECTION 4: ALL NON-PICT RESOURCES WITH POTENTIAL LOOKUP TABLE DATA")
    print("=" * 80)

    for type_str in sorted(by_type.keys()):
        if type_str == 'PICT':
            continue
        for r in sorted(by_type[type_str], key=lambda x: x.res_id):
            # Flag resources that could be lookup tables
            # Small size, binary data, values in a reasonable range
            if r.data_size > 0 and r.data_size <= 4096:
                analysis = analyze_as_lookup_table(r.data)
                if analysis:
                    # Check if any line has "**" (meaning it flagged as potentially interesting)
                    has_flag = any("**" in line for line in analysis)
                    if has_flag or r.data_size <= 512:
                        name_str = f'"{r.name}"' if r.name else "(unnamed)"
                        print(f"\n  {type_str} ID={r.res_id} {name_str} ({r.data_size} bytes):")
                        for line in analysis:
                            print(line)
                        if r.data_size <= 128:
                            print(f"    Full hex: {hex_dump_short(r.data, 128)}")
                        elif r.data_size <= 512:
                            print(f"    First 128 bytes: {hex_dump_short(r.data, 128)}")

    # ================================================================
    # SECTION 5: Resources in road-related ID ranges
    # ================================================================
    print()
    print("=" * 80)
    print("SECTION 5: ALL RESOURCES WITH IDs NEAR 30021 (ROAD PICT)")
    print("=" * 80)
    print("Looking for resources with IDs 30000-30100 or matching 'road' patterns...\n")

    for r in sorted(resources, key=lambda x: x.res_id):
        if 30000 <= r.res_id <= 30100:
            name_str = f'"{r.name}"' if r.name else "(unnamed)"
            print(f"  {r.type_str} ID={r.res_id:<6} {name_str:<30} size={r.data_size}")
            if r.type_str == 'PICT':
                dims = decode_pict_dimensions(r.data)
                if dims:
                    w, h = dims[0], dims[1]
                    print(f"    Dimensions: {w}x{h}")
        # Also check for resources with 'road' in name
        if r.name and 'road' in r.name.lower():
            name_str = f'"{r.name}"'
            print(f"  {r.type_str} ID={r.res_id:<6} {name_str:<30} size={r.data_size}")

    # ================================================================
    # SECTION 6: Detailed hex dump of small non-PICT resources
    # ================================================================
    print()
    print("=" * 80)
    print("SECTION 6: DETAILED DUMP OF SMALL NON-PICT RESOURCES (< 256 bytes)")
    print("=" * 80)

    for r in sorted(resources, key=lambda x: (x.type_str, x.res_id)):
        if r.type_str == 'PICT':
            continue
        if 0 < r.data_size <= 256:
            name_str = f'"{r.name}"' if r.name else "(unnamed)"
            print(f"\n  {r.type_str} ID={r.res_id} {name_str} ({r.data_size} bytes):")

            # Try text decode
            text = decode_generic_text(r.data)
            if text and len(text.strip()) > 0:
                for line in text.strip().split('\r'):
                    for subline in line.split('\n'):
                        print(f"    TEXT: {subline}")

            # Always show hex for small resources
            print(f"    HEX:  {hex_dump_short(r.data, 256)}")

            # Show as byte array for very small
            if r.data_size <= 64:
                print(f"    BYTES: {list(r.data)}")


if __name__ == '__main__':
    main()
