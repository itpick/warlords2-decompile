#!/usr/bin/env python3
"""
Parse a Mac OS Classic resource fork binary and catalog all resources.
Decodes interesting types (STR#, STR, MENU, CMNU, ALRT, DITL, DLOG, CARD, DESC, etc.)
into human-readable form for Warlords II reverse engineering.
"""

import struct
import sys
import os
from collections import defaultdict


# --- Mac Roman decoding ---
MAC_ROMAN_MAP = {
    0x80: '\u00C4', 0x81: '\u00C5', 0x82: '\u00C7', 0x83: '\u00C9',
    0x84: '\u00D1', 0x85: '\u00D6', 0x86: '\u00DC', 0x87: '\u00E1',
    0x88: '\u00E0', 0x89: '\u00E2', 0x8A: '\u00E4', 0x8B: '\u00E3',
    0x8C: '\u00E5', 0x8D: '\u00E7', 0x8E: '\u00E9', 0x8F: '\u00E8',
    0x90: '\u00EA', 0x91: '\u00EB', 0x92: '\u00ED', 0x93: '\u00EC',
    0x94: '\u00EE', 0x95: '\u00EF', 0x96: '\u00F1', 0x97: '\u00F3',
    0x98: '\u00F2', 0x99: '\u00F4', 0x9A: '\u00F6', 0x9B: '\u00F5',
    0x9C: '\u00FA', 0x9D: '\u00F9', 0x9E: '\u00FB', 0x9F: '\u00FC',
    0xA0: '\u2020', 0xA1: '\u00B0', 0xA2: '\u00A2', 0xA3: '\u00A3',
    0xA4: '\u00A7', 0xA5: '\u2022', 0xA6: '\u00B6', 0xA7: '\u00DF',
    0xA8: '\u00AE', 0xA9: '\u00A9', 0xAA: '\u2122', 0xAB: '\u00B4',
    0xAC: '\u00A8', 0xAD: '\u2260', 0xAE: '\u00C6', 0xAF: '\u00D8',
    0xB0: '\u221E', 0xB1: '\u00B1', 0xB2: '\u2264', 0xB3: '\u2265',
    0xB4: '\u00A5', 0xB5: '\u00B5', 0xB6: '\u2202', 0xB7: '\u2211',
    0xB8: '\u220F', 0xB9: '\u03C0', 0xBA: '\u222B', 0xBB: '\u00AA',
    0xBC: '\u00BA', 0xBD: '\u03A9', 0xBE: '\u00E6', 0xBF: '\u00F8',
    0xC0: '\u00BF', 0xC1: '\u00A1', 0xC2: '\u00AC', 0xC3: '\u221A',
    0xC4: '\u0192', 0xC5: '\u2248', 0xC6: '\u2206', 0xC7: '\u00AB',
    0xC8: '\u00BB', 0xC9: '\u2026', 0xCA: '\u00A0', 0xCB: '\u00C0',
    0xCC: '\u00C3', 0xCD: '\u00D5', 0xCE: '\u0152', 0xCF: '\u0153',
    0xD0: '\u2013', 0xD1: '\u2014', 0xD2: '\u201C', 0xD3: '\u201D',
    0xD4: '\u2018', 0xD5: '\u2019', 0xD6: '\u00F7', 0xD7: '\u25CA',
    0xD8: '\u00FF', 0xD9: '\u0178', 0xDA: '\u2044', 0xDB: '\u20AC',
    0xDC: '\u2039', 0xDD: '\u203A', 0xDE: '\uFB01', 0xDF: '\uFB02',
    0xE0: '\u2021', 0xE1: '\u00B7', 0xE2: '\u201A', 0xE3: '\u201E',
    0xE4: '\u2030', 0xE5: '\u00C2', 0xE6: '\u00CA', 0xE7: '\u00C1',
    0xE8: '\u00CB', 0xE9: '\u00C8', 0xEA: '\u00CD', 0xEB: '\u00CE',
    0xEC: '\u00CF', 0xED: '\u00CC', 0xEE: '\u00D3', 0xEF: '\u00D4',
    0xF0: '\uF8FF', 0xF1: '\u00D2', 0xF2: '\u00DA', 0xF3: '\u00DB',
    0xF4: '\u00D9', 0xF5: '\u0131', 0xF6: '\u02C6', 0xF7: '\u02DC',
    0xF8: '\u00AF', 0xF9: '\u02D8', 0xFA: '\u02D9', 0xFB: '\u02DA',
    0xFC: '\u00B8', 0xFD: '\u02DD', 0xFE: '\u02DB', 0xFF: '\u02C7',
}

def decode_mac_roman(data):
    """Decode Mac Roman encoded bytes to a Python string."""
    if isinstance(data, str):
        return data
    result = []
    for b in data:
        if b == 0:
            result.append('\\x00')
        elif b < 0x80:
            result.append(chr(b))
        elif b in MAC_ROMAN_MAP:
            result.append(MAC_ROMAN_MAP[b])
        else:
            result.append(f'\\x{b:02x}')
    return ''.join(result)


def type_code_to_str(code):
    """Convert a 4-byte type code to a printable string."""
    b = struct.pack('>I', code)
    chars = []
    for byte in b:
        if 0x20 <= byte < 0x7F:
            chars.append(chr(byte))
        else:
            chars.append(f'\\x{byte:02x}')
    return ''.join(chars)


def read_pstring(data, offset):
    """Read a Pascal string (length-prefixed) from data at offset.
    Returns (string_bytes, new_offset)."""
    if offset >= len(data):
        return b'', offset
    length = data[offset]
    s = data[offset + 1:offset + 1 + length]
    return s, offset + 1 + length


# --- Resource fork parser ---

class ResourceEntry:
    def __init__(self):
        self.type_code = 0
        self.type_str = ''
        self.res_id = 0
        self.name = ''
        self.attributes = 0
        self.data_offset = 0
        self.data_size = 0
        self.data = b''


def parse_resource_fork(data):
    """Parse a raw resource fork binary and return list of ResourceEntry objects."""
    if len(data) < 16:
        raise ValueError("Resource fork too small for header")

    # Header
    data_offset, map_offset, data_len, map_len = struct.unpack_from('>IIII', data, 0)

    if map_offset + map_len > len(data):
        raise ValueError(f"Resource map extends beyond file: map_offset={map_offset}, map_len={map_len}, file_size={len(data)}")
    if data_offset + data_len > len(data):
        raise ValueError(f"Resource data extends beyond file: data_offset={data_offset}, data_len={data_len}, file_size={len(data)}")

    # Resource map
    # At map_offset: copy of header (16 bytes), next_map_handle(4), file_ref(2), attributes(2)
    # type_list_offset(2), name_list_offset(2)
    map_base = map_offset
    _next_map = struct.unpack_from('>I', data, map_base + 16)[0]
    _file_ref = struct.unpack_from('>H', data, map_base + 20)[0]
    map_attrs = struct.unpack_from('>H', data, map_base + 22)[0]
    type_list_offset = struct.unpack_from('>H', data, map_base + 24)[0]
    name_list_offset = struct.unpack_from('>H', data, map_base + 26)[0]

    type_list_base = map_base + type_list_offset
    name_list_base = map_base + name_list_offset

    # Type list: first 2 bytes = num_types - 1
    num_types_m1 = struct.unpack_from('>H', data, type_list_base)[0]
    # Handle 0xFFFF meaning 0 types
    if num_types_m1 == 0xFFFF:
        return []
    num_types = num_types_m1 + 1

    resources = []

    for i in range(num_types):
        # Each type entry: type(4), count-1(2), ref_list_offset(2)
        # ref_list_offset is relative to type_list_base
        entry_offset = type_list_base + 2 + i * 8
        res_type = struct.unpack_from('>I', data, entry_offset)[0]
        count_m1 = struct.unpack_from('>H', data, entry_offset + 4)[0]
        ref_offset = struct.unpack_from('>H', data, entry_offset + 6)[0]
        count = count_m1 + 1
        type_str = type_code_to_str(res_type)

        for j in range(count):
            # Reference list entry: id(2), name_offset(2), attributes(1), data_offset(3), reserved(4)
            ref_base = type_list_base + ref_offset + j * 12
            res_id = struct.unpack_from('>h', data, ref_base)[0]  # signed
            name_off = struct.unpack_from('>H', data, ref_base + 2)[0]
            attrs = data[ref_base + 4]
            # data_offset is 3 bytes (24-bit), relative to data section start
            d_off_bytes = data[ref_base + 5:ref_base + 8]
            d_off = (d_off_bytes[0] << 16) | (d_off_bytes[1] << 8) | d_off_bytes[2]

            # Get name
            name = ''
            if name_off != 0xFFFF:
                name_abs = name_list_base + name_off
                if name_abs < len(data):
                    name_bytes, _ = read_pstring(data, name_abs)
                    name = decode_mac_roman(name_bytes)

            # Get data
            abs_data_offset = data_offset + d_off
            if abs_data_offset + 4 <= len(data):
                res_data_len = struct.unpack_from('>I', data, abs_data_offset)[0]
                res_data = data[abs_data_offset + 4:abs_data_offset + 4 + res_data_len]
            else:
                res_data_len = 0
                res_data = b''

            entry = ResourceEntry()
            entry.type_code = res_type
            entry.type_str = type_str
            entry.res_id = res_id
            entry.name = name
            entry.attributes = attrs
            entry.data_offset = abs_data_offset
            entry.data_size = res_data_len
            entry.data = res_data
            resources.append(entry)

    return resources


# --- Decoders for specific resource types ---

def decode_STR_hash(data):
    """Decode STR# resource: count(2), then count Pascal strings."""
    if len(data) < 2:
        return ["(empty or invalid STR# resource)"]
    count = struct.unpack_from('>H', data, 0)[0]
    strings = []
    offset = 2
    for i in range(count):
        if offset >= len(data):
            strings.append(f"  [{i+1}] (truncated)")
            break
        s, offset = read_pstring(data, offset)
        strings.append(f"  [{i+1}] \"{decode_mac_roman(s)}\"")
    return strings


def decode_STR(data):
    """Decode STR resource: a single Pascal string."""
    if len(data) < 1:
        return "(empty)"
    s, _ = read_pstring(data, 0)
    return f"\"{decode_mac_roman(s)}\""


def decode_MENU(data):
    """Decode MENU resource."""
    if len(data) < 14:
        return ["(too short)"]
    menu_id = struct.unpack_from('>H', data, 0)[0]
    # bytes 2-3: width, 4-5: height, 6-7: resource ID of MDEF
    # 8-9: placeholder, 10-13: enable flags
    enable_flags = struct.unpack_from('>I', data, 10)[0]

    offset = 14
    # Menu title (Pascal string)
    title_bytes, offset = read_pstring(data, offset)
    title = decode_mac_roman(title_bytes)

    lines = [f"  Menu ID: {menu_id}, Title: \"{title}\", EnableFlags: 0x{enable_flags:08X}"]

    item_num = 0
    while offset < len(data):
        item_bytes, offset = read_pstring(data, offset)
        if len(item_bytes) == 0:
            break  # End of menu items
        item_num += 1
        item_name = decode_mac_roman(item_bytes)

        # After each item name: icon_num(1), key_equiv(1), mark_char(1), style(1)
        if offset + 4 <= len(data):
            icon_num = data[offset]
            key_equiv = data[offset + 1]
            mark_char = data[offset + 2]
            style = data[offset + 3]
            offset += 4
            extras = []
            if key_equiv:
                extras.append(f"key='{chr(key_equiv)}'")
            if icon_num:
                extras.append(f"icon={icon_num}")
            if mark_char:
                extras.append(f"mark='{chr(mark_char)}'")
            if style:
                extras.append(f"style={style}")
            extra_str = f" ({', '.join(extras)})" if extras else ""
            lines.append(f"    [{item_num}] \"{item_name}\"{extra_str}")
        else:
            lines.append(f"    [{item_num}] \"{item_name}\"")

    return lines


def decode_CMNU(data):
    """Decode CMNU (color menu) resource. Same structure as MENU but may have color table appended."""
    return decode_MENU(data)


def decode_ALRT(data):
    """Decode ALRT resource: bounds rect(8), DITL ID(2), stages(4)."""
    if len(data) < 14:
        return f"(too short: {len(data)} bytes)"
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 0)
    ditl_id = struct.unpack_from('>H', data, 8)[0]
    # Stages: 4 bytes, each nibble pair defines a stage
    stages = struct.unpack_from('>I', data, 10)[0]
    return f"  Rect: ({left},{top},{right},{bottom}), DITL ID: {ditl_id}, Stages: 0x{stages:08X}"


def decode_DLOG(data):
    """Decode DLOG resource: bounds rect(8), procID(2), visible(2), goAway(2), refCon(4), DITL ID(2), title."""
    if len(data) < 22:
        return [f"(too short: {len(data)} bytes)"]
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 0)
    proc_id = struct.unpack_from('>H', data, 8)[0]
    visible = struct.unpack_from('>H', data, 10)[0]
    go_away = struct.unpack_from('>H', data, 12)[0]
    ref_con = struct.unpack_from('>I', data, 14)[0]
    ditl_id = struct.unpack_from('>H', data, 18)[0]
    title_bytes, _ = read_pstring(data, 20)
    title = decode_mac_roman(title_bytes)

    lines = [
        f"  Rect: ({left},{top},{right},{bottom}), ProcID: {proc_id}",
        f"  Visible: {visible}, GoAway: {go_away}, RefCon: {ref_con}",
        f"  DITL ID: {ditl_id}, Title: \"{title}\""
    ]
    return lines


def decode_DITL(data):
    """Decode DITL resource: count-1(2), then items."""
    if len(data) < 2:
        return ["(too short)"]
    count_m1 = struct.unpack_from('>H', data, 0)[0]
    count = count_m1 + 1
    lines = [f"  {count} item(s):"]

    DITL_TYPES = {
        0: "UserItem",
        4: "Button",
        5: "CheckBox",
        6: "RadioButton",
        7: "Control",
        8: "StaticText",
        16: "EditText",
        32: "Icon",
        64: "QuickDraw Picture",
        128: "ResourceControl",
    }

    offset = 2
    for i in range(count):
        if offset + 14 > len(data):
            lines.append(f"    [{i}] (truncated)")
            break
        # placeholder(4), rect(8), type_byte(1), then data depends on type
        _placeholder = struct.unpack_from('>I', data, offset)[0]
        top, left, bottom, right = struct.unpack_from('>hhhh', data, offset + 4)
        item_type_byte = data[offset + 12]
        # bit 7 = enabled flag, bits 0-6 = item type
        enabled = bool(item_type_byte & 0x80)
        item_type = item_type_byte & 0x7F

        type_name = DITL_TYPES.get(item_type, f"Unknown({item_type})")
        offset += 13

        # Item data: length(1 or 2 bytes depending on type)
        # For most items, it's a Pascal string or a 2-byte resource ID
        if item_type in (32, 64, 7, 128):
            # Resource-based: 2 bytes for resource ID
            if offset + 2 <= len(data):
                res_id = struct.unpack_from('>h', data, offset)[0]
                data_len = 2
                item_info = f"ResID={res_id}"
            else:
                data_len = 0
                item_info = "(truncated)"
        else:
            # Text-based: Pascal string
            if offset < len(data):
                str_len = data[offset]
                str_data = data[offset + 1:offset + 1 + str_len]
                data_len = 1 + str_len
                item_info = f"\"{decode_mac_roman(str_data)}\"" if str_len > 0 else "(empty)"
            else:
                data_len = 0
                item_info = "(truncated)"

        # Pad to even
        if data_len % 2 == 1:
            data_len += 1
        offset += data_len

        enabled_str = "enabled" if enabled else "disabled"
        lines.append(f"    [{i}] {type_name} ({enabled_str}) at ({left},{top},{right},{bottom}): {item_info}")

    return lines


def decode_WIND(data):
    """Decode WIND resource: bounds rect(8), procID(2), visible(2), goAway(2), refCon(4), title."""
    if len(data) < 18:
        return f"(too short: {len(data)} bytes)"
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 0)
    proc_id = struct.unpack_from('>H', data, 8)[0]
    visible = struct.unpack_from('>H', data, 10)[0]
    go_away = struct.unpack_from('>H', data, 12)[0]
    ref_con = struct.unpack_from('>I', data, 14)[0]
    title = ''
    if len(data) > 18:
        title_bytes, _ = read_pstring(data, 18)
        title = decode_mac_roman(title_bytes)
    return f"  Rect: ({left},{top},{right},{bottom}), ProcID: {proc_id}, Visible: {visible}, GoAway: {go_away}, RefCon: {ref_con}, Title: \"{title}\""


def decode_CNTL(data):
    """Decode CNTL resource."""
    if len(data) < 22:
        return f"(too short: {len(data)} bytes)"
    top, left, bottom, right = struct.unpack_from('>hhhh', data, 0)
    value = struct.unpack_from('>h', data, 8)[0]
    visible = struct.unpack_from('>H', data, 10)[0]
    max_val = struct.unpack_from('>h', data, 12)[0]
    min_val = struct.unpack_from('>h', data, 14)[0]
    proc_id = struct.unpack_from('>H', data, 16)[0]
    ref_con = struct.unpack_from('>I', data, 18)[0]
    title_bytes, _ = read_pstring(data, 22)
    title = decode_mac_roman(title_bytes)
    return f"  Rect: ({left},{top},{right},{bottom}), Val: {value}, Min: {min_val}, Max: {max_val}, ProcID: {proc_id}, RefCon: {ref_con}, Title: \"{title}\""


def decode_SIZE(data):
    """Decode SIZE resource."""
    if len(data) < 10:
        return f"(too short: {len(data)} bytes)"
    flags = struct.unpack_from('>H', data, 0)[0]
    preferred_size = struct.unpack_from('>I', data, 2)[0]
    minimum_size = struct.unpack_from('>I', data, 6)[0]

    flag_names = []
    if flags & 0x8000: flag_names.append("acceptSuspendResumeEvents")
    if flags & 0x4000: flag_names.append("canBackground")
    if flags & 0x2000: flag_names.append("doesActivateOnFGSwitch")
    if flags & 0x1000: flag_names.append("onlyBackground")
    if flags & 0x0800: flag_names.append("getFrontClicks")
    if flags & 0x0400: flag_names.append("acceptDiedEvents")
    if flags & 0x0200: flag_names.append("is32BitClean")
    if flags & 0x0100: flag_names.append("isHighLevelEventAware")
    if flags & 0x0002: flag_names.append("isMultiFinderAware")

    return f"  PreferredSize: {preferred_size}, MinimumSize: {minimum_size}, Flags: 0x{flags:04X} [{', '.join(flag_names)}]"


def decode_vers(data):
    """Decode vers resource."""
    if len(data) < 7:
        return f"(too short: {len(data)} bytes)"
    major = data[0]
    minor = data[1]  # BCD
    dev_stage = data[2]
    pre_release = data[3]
    region = struct.unpack_from('>H', data, 4)[0]
    short_str, offset = read_pstring(data, 6)
    long_str, _ = read_pstring(data, offset)

    stage_names = {0x20: 'dev', 0x40: 'alpha', 0x60: 'beta', 0x80: 'release'}
    stage = stage_names.get(dev_stage, f'0x{dev_stage:02x}')

    return f"  Version: {major}.{minor >> 4}.{minor & 0xF} {stage} r{pre_release}, Region: {region}, Short: \"{decode_mac_roman(short_str)}\", Long: \"{decode_mac_roman(long_str)}\""


def hex_dump_short(data, max_bytes=64):
    """Short hex dump for binary data."""
    if len(data) <= max_bytes:
        return ' '.join(f'{b:02x}' for b in data)
    return ' '.join(f'{b:02x}' for b in data[:max_bytes]) + f' ... ({len(data)} bytes total)'


def decode_generic_text(data):
    """Try to decode as text if it looks like it might be text."""
    try:
        text = decode_mac_roman(data)
        # Check if it's mostly printable
        printable = sum(1 for c in text if c.isprintable() or c in '\n\r\t')
        if len(text) > 0 and printable / len(text) > 0.8:
            return text
    except:
        pass
    return None


def attr_flags_str(attrs):
    """Decode resource attribute flags."""
    flags = []
    if attrs & 0x01: flags.append("compressed")
    if attrs & 0x04: flags.append("changed")
    if attrs & 0x08: flags.append("preload")
    if attrs & 0x10: flags.append("protected")
    if attrs & 0x20: flags.append("locked")
    if attrs & 0x40: flags.append("purgeable")
    if attrs & 0x80: flags.append("sysHeap")
    return ','.join(flags) if flags else '-'


def main():
    rsrc_path = '/tmp/wl2_rsrc.bin'
    output_path = '/Users/lucaspick/workspace/itpick/warlords2-decompile/resource_catalog.txt'

    with open(rsrc_path, 'rb') as f:
        data = f.read()

    print(f"Parsing resource fork: {rsrc_path} ({len(data)} bytes)")
    resources = parse_resource_fork(data)
    print(f"Found {len(resources)} resources")

    # Group by type
    by_type = defaultdict(list)
    for r in resources:
        by_type[r.type_str].append(r)

    lines = []
    lines.append("=" * 80)
    lines.append("WARLORDS II - RESOURCE FORK CATALOG")
    lines.append(f"Source: {rsrc_path} ({len(data)} bytes)")
    lines.append(f"Total resources: {len(resources)}")
    lines.append("=" * 80)

    # Summary table
    lines.append("")
    lines.append("-" * 60)
    lines.append("RESOURCE TYPE SUMMARY")
    lines.append("-" * 60)
    lines.append(f"{'Type':<8} {'Count':>6}  {'Total Size':>12}  ID Range")
    lines.append(f"{'----':<8} {'-----':>6}  {'----------':>12}  --------")
    for type_str in sorted(by_type.keys()):
        entries = by_type[type_str]
        total_size = sum(e.data_size for e in entries)
        ids = sorted(e.res_id for e in entries)
        if len(ids) == 1:
            id_range = str(ids[0])
        else:
            id_range = f"{ids[0]}..{ids[-1]}"
        lines.append(f"{type_str:<8} {len(entries):>6}  {total_size:>12,}  {id_range}")

    lines.append("")

    # Full catalog
    lines.append("=" * 80)
    lines.append("FULL RESOURCE CATALOG")
    lines.append("=" * 80)

    for type_str in sorted(by_type.keys()):
        entries = sorted(by_type[type_str], key=lambda e: e.res_id)
        lines.append("")
        lines.append(f"--- {type_str} ({len(entries)} resource(s)) ---")
        lines.append("")

        for r in entries:
            name_part = f'  name="{r.name}"' if r.name else ""
            attrs_part = f"  attrs=[{attr_flags_str(r.attributes)}]" if r.attributes else ""
            lines.append(f"  {type_str} ID={r.res_id:<6}{name_part}  size={r.data_size}{attrs_part}")

    # Detailed decoded content for interesting types
    lines.append("")
    lines.append("=" * 80)
    lines.append("DECODED RESOURCE CONTENT")
    lines.append("=" * 80)

    # ---- STR# ----
    if 'STR#' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("STR# (String Lists) -- used by GetSTRValueAt()")
        lines.append("=" * 70)
        for r in sorted(by_type['STR#'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"STR# ID={r.res_id}{name_part} ({r.data_size} bytes):")
            decoded = decode_STR_hash(r.data)
            for s in decoded:
                lines.append(s)

    # ---- STR ----
    if 'STR ' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("STR (Single Strings)")
        lines.append("=" * 70)
        for r in sorted(by_type['STR '], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            decoded = decode_STR(r.data)
            lines.append(f"  STR  ID={r.res_id}{name_part}: {decoded}")

    # ---- MENU ----
    if 'MENU' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("MENU (Menu Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['MENU'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"MENU ID={r.res_id}{name_part}:")
            decoded = decode_MENU(r.data)
            for s in decoded:
                lines.append(s)

    # ---- CMNU ----
    if 'CMNU' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("CMNU (Color Menu Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['CMNU'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"CMNU ID={r.res_id}{name_part}:")
            decoded = decode_CMNU(r.data)
            for s in decoded:
                lines.append(s)

    # ---- ALRT ----
    if 'ALRT' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("ALRT (Alert Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['ALRT'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"ALRT ID={r.res_id}{name_part}:")
            decoded = decode_ALRT(r.data)
            if isinstance(decoded, list):
                for s in decoded:
                    lines.append(s)
            else:
                lines.append(decoded)

    # ---- DITL ----
    if 'DITL' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("DITL (Dialog Item List Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['DITL'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"DITL ID={r.res_id}{name_part}:")
            decoded = decode_DITL(r.data)
            for s in decoded:
                lines.append(s)

    # ---- DLOG ----
    if 'DLOG' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("DLOG (Dialog Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['DLOG'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"DLOG ID={r.res_id}{name_part}:")
            decoded = decode_DLOG(r.data)
            if isinstance(decoded, list):
                for s in decoded:
                    lines.append(s)
            else:
                lines.append(decoded)

    # ---- WIND ----
    if 'WIND' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("WIND (Window Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['WIND'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"WIND ID={r.res_id}{name_part}:")
            decoded = decode_WIND(r.data)
            if isinstance(decoded, list):
                for s in decoded:
                    lines.append(s)
            else:
                lines.append(decoded)

    # ---- CNTL ----
    if 'CNTL' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("CNTL (Control Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['CNTL'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"CNTL ID={r.res_id}{name_part}:")
            decoded = decode_CNTL(r.data)
            if isinstance(decoded, list):
                for s in decoded:
                    lines.append(s)
            else:
                lines.append(decoded)

    # ---- SIZE ----
    if 'SIZE' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("SIZE (Application Size Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['SIZE'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"  SIZE ID={r.res_id}{name_part}: {decode_SIZE(r.data)}")

    # ---- vers ----
    if 'vers' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("vers (Version Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['vers'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"  vers ID={r.res_id}{name_part}: {decode_vers(r.data)}")

    # ---- CARD ----
    if 'CARD' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("CARD (Card Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['CARD'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"CARD ID={r.res_id}{name_part} ({r.data_size} bytes):")
            # Try to decode as text, otherwise show hex
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- DESC ----
    if 'DESC' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("DESC (Description Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['DESC'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"DESC ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- MBAR ----
    if 'MBAR' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("MBAR (Menu Bar Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['MBAR'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            if len(r.data) >= 2:
                count = struct.unpack_from('>H', r.data, 0)[0]
                menu_ids = []
                for i in range(count):
                    if 2 + i*2 + 2 <= len(r.data):
                        mid = struct.unpack_from('>H', r.data, 2 + i*2)[0]
                        menu_ids.append(str(mid))
                lines.append(f"  MBAR ID={r.res_id}{name_part}: {count} menus: [{', '.join(menu_ids)}]")

    # ---- DAT (game-specific data) ----
    if 'DAT ' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("DAT  (Game-specific Data Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['DAT '], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"DAT  ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- HLP (help text) ----
    if 'HLP ' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("HLP  (Help Text Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['HLP '], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"HLP  ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- NAME ----
    if 'NAME' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("NAME (Name Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['NAME'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            text = decode_generic_text(r.data)
            if text:
                lines.append(f"  NAME ID={r.res_id}{name_part}: \"{text.strip()}\"")
            else:
                lines.append(f"  NAME ID={r.res_id}{name_part}: {hex_dump_short(r.data, 64)}")

    # ---- Head (game-specific) ----
    if 'Head' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("Head (Header Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['Head'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"Head ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- Shor (game-specific) ----
    if 'Shor' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("Shor (Short Description Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['Shor'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            text = decode_generic_text(r.data)
            if text:
                lines.append(f"  Shor ID={r.res_id}{name_part}: \"{text.strip()}\"")
            else:
                lines.append(f"  Shor ID={r.res_id}{name_part}: {hex_dump_short(r.data, 64)}")

    # ---- Roll (game-specific) ----
    if 'Roll' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("Roll (Roll/Credits Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['Roll'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"Roll ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- War2 (game-specific) ----
    if 'War2' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("War2 (Warlords II Specific Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['War2'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"War2 ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- errs ----
    if 'errs' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("errs (Error String Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['errs'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"")
            lines.append(f"errs ID={r.res_id}{name_part} ({r.data_size} bytes):")
            text = decode_generic_text(r.data)
            if text:
                for line in text.split('\r'):
                    for subline in line.split('\n'):
                        lines.append(f"    {subline}")
            else:
                lines.append(f"    {hex_dump_short(r.data, 128)}")

    # ---- View (game-specific) ----
    if 'View' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("View (View Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['View'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"  View ID={r.res_id}{name_part} ({r.data_size} bytes): {hex_dump_short(r.data, 64)}")

    # ---- SHLD (game-specific) ----
    if 'SHLD' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("SHLD (Shield Resources -- game-specific)")
        lines.append("=" * 70)
        for r in sorted(by_type['SHLD'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"  SHLD ID={r.res_id}{name_part} ({r.data_size} bytes): {hex_dump_short(r.data, 64)}")

    # ---- cfrg (code fragment) ----
    if 'cfrg' in by_type:
        lines.append("")
        lines.append("=" * 70)
        lines.append("cfrg (Code Fragment Resources)")
        lines.append("=" * 70)
        for r in sorted(by_type['cfrg'], key=lambda e: e.res_id):
            name_part = f' "{r.name}"' if r.name else ""
            lines.append(f"  cfrg ID={r.res_id}{name_part} ({r.data_size} bytes): {hex_dump_short(r.data, 128)}")

    # ---- Remaining types with text content ----
    text_types_already_shown = {
        'STR#', 'STR ', 'MENU', 'CMNU', 'ALRT', 'DITL', 'DLOG', 'WIND',
        'CNTL', 'SIZE', 'vers', 'CARD', 'DESC', 'MBAR', 'DAT ', 'HLP ',
        'NAME', 'Head', 'Shor', 'Roll', 'War2', 'errs', 'View', 'SHLD',
        'cfrg',
    }

    remaining_text_types = []
    for type_str in sorted(by_type.keys()):
        if type_str not in text_types_already_shown:
            # Check if any resources of this type look like text
            for r in by_type[type_str]:
                text = decode_generic_text(r.data)
                if text and len(text) > 4:
                    remaining_text_types.append(type_str)
                    break

    if remaining_text_types:
        lines.append("")
        lines.append("=" * 70)
        lines.append("OTHER TYPES WITH READABLE TEXT CONTENT")
        lines.append("=" * 70)
        for type_str in remaining_text_types:
            for r in sorted(by_type[type_str], key=lambda e: e.res_id):
                text = decode_generic_text(r.data)
                if text and len(text) > 4:
                    name_part = f' "{r.name}"' if r.name else ""
                    lines.append(f"")
                    lines.append(f"{type_str} ID={r.res_id}{name_part} ({r.data_size} bytes):")
                    for line in text.split('\r'):
                        for subline in line.split('\n'):
                            lines.append(f"    {subline}")

    # Write output
    output = '\n'.join(lines) + '\n'
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(output)

    print(f"Catalog written to: {output_path}")
    print(f"Output size: {len(output)} bytes, {len(lines)} lines")

    # Print quick summary to stdout
    print()
    print("Resource type summary:")
    for type_str in sorted(by_type.keys()):
        entries = by_type[type_str]
        total_size = sum(e.data_size for e in entries)
        print(f"  {type_str:<8} {len(entries):>4} resources  {total_size:>10,} bytes")


if __name__ == '__main__':
    main()
