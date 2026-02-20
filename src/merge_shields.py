#!/usr/bin/env python3
"""
merge_shields.py - Merge shield cicn resources from Elemental Shields into app resource fork.

Usage: python3 merge_shields.py <shields_rsrc_path> <app_rsrc_path>

Reads cicn resources (IDs 30600-30607) from the Shields resource fork
and appends them to the app's resource fork.
"""

import struct
import sys


def read_resource_fork(path):
    """Parse a Mac resource fork binary into a structured dict."""
    with open(path, 'rb') as f:
        data = f.read()

    data_off = struct.unpack('>I', data[0:4])[0]
    map_off = struct.unpack('>I', data[4:8])[0]
    data_len = struct.unpack('>I', data[8:12])[0]
    map_len = struct.unpack('>I', data[12:16])[0]

    # Parse resource map
    type_list_off = struct.unpack('>H', data[map_off + 24:map_off + 26])[0]
    name_list_off = struct.unpack('>H', data[map_off + 26:map_off + 28])[0]
    num_types = struct.unpack('>h', data[map_off + type_list_off:map_off + type_list_off + 2])[0] + 1

    resources = {}  # {(type, id): bytes}
    pos = map_off + type_list_off + 2

    for t in range(num_types):
        rtype = data[pos:pos + 4]
        count = struct.unpack('>H', data[pos + 4:pos + 6])[0] + 1
        ref_off = struct.unpack('>H', data[pos + 6:pos + 8])[0]

        for r in range(count):
            rpos = map_off + type_list_off + ref_off + r * 12
            rid = struct.unpack('>h', data[rpos:rpos + 2])[0]
            attrs_data = struct.unpack('>I', data[rpos + 4:rpos + 8])[0]
            rdata_off = attrs_data & 0x00FFFFFF
            attrs = (attrs_data >> 24) & 0xFF

            # Resource data: 4-byte length prefix at data_off + rdata_off
            abs_off = data_off + rdata_off
            rlen = struct.unpack('>I', data[abs_off:abs_off + 4])[0]
            rdata = data[abs_off + 4:abs_off + 4 + rlen]

            resources[(rtype, rid)] = rdata

        pos += 8

    return data, resources


def build_resource_fork(resources_list):
    """
    Build a Mac resource fork binary from a list of (type, id, data) tuples.
    Returns the complete resource fork bytes.
    """
    # Group by type
    by_type = {}
    for rtype, rid, rdata in resources_list:
        if rtype not in by_type:
            by_type[rtype] = []
        by_type[rtype].append((rid, rdata))

    # Build data section
    data_section = b''
    data_offsets = {}  # (type, id) -> offset within data section
    for rtype in sorted(by_type.keys()):
        for rid, rdata in sorted(by_type[rtype]):
            data_offsets[(rtype, rid)] = len(data_section)
            data_section += struct.pack('>I', len(rdata)) + rdata
            # Align to 4 bytes (not strictly required but good practice)

    # Build resource map
    # Map header: 16 bytes (copy of fork header) + 4 bytes (next map handle) + 2 bytes (file ref)
    # + 2 bytes (attributes) + 2 bytes (type list offset) + 2 bytes (name list offset)
    # = 28 bytes before type list

    types = sorted(by_type.keys())
    num_types = len(types)

    # Type list starts at offset 28 from map start
    type_list_rel = 28  # offset from map start to type list

    # Type list: 2 bytes (num_types - 1) + num_types * 8 bytes
    type_list_size = 2 + num_types * 8

    # Reference lists follow type list
    ref_list_start = type_list_size  # relative to type_list start

    # Build reference lists
    ref_lists = b''
    type_entries = []
    for rtype in types:
        items = sorted(by_type[rtype])
        ref_offset = ref_list_start + len(ref_lists)
        type_entries.append((rtype, len(items) - 1, ref_offset))

        for rid, rdata in items:
            d_off = data_offsets[(rtype, rid)]
            # Reference entry: 2 bytes ID, 2 bytes name offset (-1=none),
            # 1 byte attrs + 3 bytes data offset, 4 bytes reserved
            ref_lists += struct.pack('>hh', rid, -1)
            ref_lists += struct.pack('>I', d_off & 0x00FFFFFF)  # attrs=0
            ref_lists += struct.pack('>I', 0)  # reserved

    # Name list (empty - no names)
    name_list_rel = type_list_rel + type_list_size + len(ref_lists)
    name_list = b''

    # Build type list
    type_list = struct.pack('>h', num_types - 1)
    for rtype, count_minus1, ref_offset in type_entries:
        type_list += rtype + struct.pack('>HH', count_minus1, ref_offset)

    # Build map
    map_attrs = 0
    # We'll fill in the map header after we know offsets
    map_body = type_list + ref_lists + name_list

    # Resource fork layout:
    # Offset 0: header (256 bytes, data starts at 256)
    # Offset 256: data section
    # After data: map section

    data_start = 256
    map_start = data_start + len(data_section)
    # Pad to align if needed
    map_size = 28 + len(map_body)

    # Build fork header
    header = struct.pack('>IIII', data_start, map_start, len(data_section), map_size)
    header += b'\x00' * (256 - len(header))

    # Build map header
    map_header = struct.pack('>IIII', data_start, map_start, len(data_section), map_size)
    map_header += struct.pack('>I', 0)  # next resource map handle
    map_header += struct.pack('>H', 0)  # file reference number
    map_header += struct.pack('>H', map_attrs)
    map_header += struct.pack('>H', type_list_rel)  # type list offset from map start
    map_header += struct.pack('>H', name_list_rel)  # name list offset from map start

    return header + data_section + map_header + map_body


def main():
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <shields_rsrc> <app_rsrc>")
        sys.exit(1)

    shields_path = sys.argv[1]
    app_path = sys.argv[2]

    # Read both resource forks
    _, shields_resources = read_resource_fork(shields_path)
    _, app_resources = read_resource_fork(app_path)

    # Collect all resources: start with app resources
    all_resources = []
    for (rtype, rid), rdata in app_resources.items():
        all_resources.append((rtype, rid, rdata))

    # Add shield cicn resources (30600-30607)
    added = 0
    for rid in range(30600, 30608):
        key = (b'cicn', rid)
        if key in shields_resources:
            # Check if already in app
            if key not in app_resources:
                all_resources.append((b'cicn', rid, shields_resources[key]))
                added += 1
                print(f"  Added cicn {rid} ({len(shields_resources[key])} bytes)")
            else:
                print(f"  cicn {rid} already in app, skipping")

    if added == 0:
        print("No new shield resources to add.")
        return

    # Also add SHL resource if present
    for (rtype, rid), rdata in shields_resources.items():
        if rtype == b'SHL ' and (rtype, rid) not in app_resources:
            all_resources.append((rtype, rid, rdata))
            print(f"  Added SHL {rid} ({len(rdata)} bytes)")

    # Build merged resource fork
    merged = build_resource_fork(all_resources)

    # Write back
    with open(app_path, 'wb') as f:
        f.write(merged)

    print(f"Merged {added} shield cicn resources into app resource fork.")
    print(f"New resource fork size: {len(merged)} bytes")


if __name__ == '__main__':
    main()
