#!/usr/bin/env python3
"""
apply_renames.py - Apply function renames across the Warlords II decompilation codebase.

Parses docs/function_rename_list.md for FUN_XXXXXXXX -> NewName mappings,
then replaces all occurrences in src/**/*.c and src/**/*.h files using
word-boundary matching to avoid partial replacements.

Key design decisions:
  - Macro collisions with mac_compat.h are avoided by appending _Thunk.
  - Header conflicts with pre-existing declarations are avoided by appending _Dispatch.
  - Duplicate target names for different FUN_ addresses are disambiguated with suffixes.
  - Function DEFINITIONS in stub files are NOT renamed when doing so would create
    duplicate symbols at link time. Only when a non-stub file provides a non-static
    definition of the same symbol do we skip the stub definition rename.
"""

import re
import os
import sys
from collections import Counter, defaultdict


# Manual overrides for names that collide with macros, existing declarations,
# or other renamed functions.
NAME_OVERRIDES = {
    # Macro collisions with mac_compat.h
    "FUN_100002a0": "ReleaseResource_Thunk",
    "FUN_10001e78": "BlockMoveData_Thunk",
    "FUN_10002ad8": "DisposeHandle_Thunk",

    # Signature conflict with pre-existing ResourceRead in wl2_functions.h
    "FUN_10117884": "ResourceRead_Dispatch",

    # Duplicate target: both FUN_10001290 and FUN_10000b70 -> HLock_Thunk
    "FUN_10000b70": "HLock_Thunk_Sound",

    # Duplicate target: both FUN_10001c98 and FUN_100ef510 -> ReleaseHandle
    "FUN_10001c98": "ReleaseHandle_Sound",
    "FUN_100ef510": "ReleaseHandle_Mapgen",
}

STUB_DIRS = {"stubs"}


def parse_rename_list(md_path):
    """Parse the markdown table to extract FUN_xxx -> NewName mappings."""
    renames = {}
    with open(md_path, 'r') as f:
        for line in f:
            m = re.match(r'\|\s*`(FUN_[0-9a-f]+)`\s*\|\s*`(\w+)`\s*\|', line)
            if m:
                old_name = m.group(1)
                new_name = m.group(2)
                if old_name in NAME_OVERRIDES:
                    new_name = NAME_OVERRIDES[old_name]
                renames[old_name] = new_name
    return renames


def find_source_files(src_dir):
    """Find all .c and .h files under src/."""
    source_files = []
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if fname.endswith('.c') or fname.endswith('.h'):
                source_files.append(os.path.join(root, fname))
    return sorted(source_files)


def is_stub_file(filepath, src_dir):
    """Check if a file is in the stubs directory."""
    relpath = os.path.relpath(filepath, src_dir)
    parts = relpath.split(os.sep)
    return len(parts) > 1 and parts[0] in STUB_DIRS


def is_protected_header(filepath, src_dir):
    """Headers that should NOT have their pre-existing names modified."""
    relpath = os.path.relpath(filepath, src_dir)
    return relpath in (
        os.path.join("include", "mac_compat.h"),
        os.path.join("include", "wl2_functions.h"),
        os.path.join("include", "wl2_types.h"),
        os.path.join("include", "wl2_globals.h"),
        os.path.join("include", "warlords2.h"),
    )


def build_replacement_regex(names):
    """Build a compiled regex matching any name at word boundaries."""
    sorted_names = sorted(names, key=len, reverse=True)
    escaped = [re.escape(name) for name in sorted_names]
    pattern = r'\b(' + '|'.join(escaped) + r')\b'
    return re.compile(pattern)


def is_definition_line(lines, start_idx, func_name):
    """Check if the given line defines func_name (has function body).

    A function definition is: [qualifiers] [return_type] func_name(params...) {
    NOT preceded by 'extern' and NOT a call inside another statement.

    Returns (is_def, is_static) tuple.
    """
    stripped = lines[start_idx].strip()

    # The function name must appear followed by '(' with only optional whitespace
    # and must NOT be inside a function call context (i.e., preceded by '=', ',', '(')
    match = re.search(r'\b' + re.escape(func_name) + r'\s*\(', stripped)
    if not match:
        return False, False

    # Check what comes before the function name on this line
    prefix = stripped[:match.start()].strip()

    # If there's no prefix or the prefix is only type qualifiers/specifiers,
    # this could be a definition. Skip if it's:
    # - an extern declaration
    # - a typedef
    # - inside an expression (has = or , or ( before)
    if prefix.startswith('extern'):
        return False, False
    if prefix.startswith('typedef'):
        return False, False

    # If the prefix is empty, it could be a definition (K&R style) or a call.
    # If the prefix contains type-like words, it's likely a definition.
    # For a call statement, there would be no type prefix.
    type_words = {'void', 'int', 'short', 'long', 'char', 'unsigned', 'signed',
                  'static', 'const', 'volatile', 'inline', 'struct', 'enum',
                  'float', 'double', 'byte', 'uint', 'ushort', 'undefined',
                  'undefined1', 'undefined2', 'undefined4', 'undefined8',
                  'bool', 'longlong', 'ulonglong',
                  # Mac OS / project-specific typedefs
                  'Boolean', 'OSErr', 'OSType', 'Size', 'Handle', 'Ptr',
                  'ComponentResult', 'Fixed', 'ResType', 'ScriptCode',
                  'SndChannelPtr', 'GWorldPtr', 'GrafPtr', 'CGrafPtr',
                  'WindowPtr', 'CWindowPtr', 'PicHandle', 'CIconHandle',
                  'int8', 'Byte', 'SignedByte'}

    if prefix:
        # Check if prefix looks like a return type
        prefix_tokens = re.findall(r'\b\w+\b', prefix)
        # All tokens in prefix should be type words or pointer/qualifier stuff
        if not all(t in type_words or t == '*' for t in prefix_tokens):
            return False, False  # prefix has non-type tokens -> likely a call
    else:
        # No prefix - could be a definition only if line starts with func_name
        # (some decompilers emit definitions without explicit return type)
        if not stripped.startswith(func_name):
            return False, False

    # Check if it's a definition (has { before ;)
    is_def = False
    for j in range(start_idx, min(start_idx + 5, len(lines))):
        check = lines[j].strip()
        if '{' in check:
            is_def = True
            break
        if ';' in check:
            break

    if not is_def:
        return False, False

    # Check if it's static
    is_static = 'static' in prefix.split() if prefix else False
    return True, is_static


def scan_definitions(source_files, renames, src_dir):
    """Scan all files for function definitions, both FUN_xxx and already-named.

    Returns:
      definition_map: new_name -> [(filepath, is_static)]
    """
    definition_map = defaultdict(list)
    all_new_names = set(renames.values())

    for filepath in source_files:
        if is_protected_header(filepath, src_dir):
            continue
        with open(filepath, 'r') as f:
            content = f.read()

        lines = content.split('\n')
        for i, line in enumerate(lines):
            stripped = line.strip()

            # Check for FUN_xxx definitions
            for fun_name, new_name in renames.items():
                if fun_name not in stripped:
                    continue
                is_def, is_static = is_definition_line(lines, i, fun_name)
                if is_def:
                    entry = (filepath, is_static)
                    if entry not in definition_map[new_name]:
                        definition_map[new_name].append(entry)

            # Check for already-named definitions (in reconstructed modules)
            for new_name in all_new_names:
                if new_name not in stripped:
                    continue
                is_def, is_static = is_definition_line(lines, i, new_name)
                if is_def:
                    entry = (filepath, is_static)
                    if entry not in definition_map[new_name]:
                        definition_map[new_name].append(entry)

    return definition_map


def compute_skip_set(definition_map, src_dir):
    """Decide which definitions in stub files to skip renaming.

    A stub definition should be skipped only if a non-stub file provides a
    NON-STATIC definition of the same symbol (meaning the non-stub version
    will satisfy the linker).

    Returns: skip_rename_defs: filepath -> set of new_names to NOT rename defs
    """
    skip_rename_defs = defaultdict(set)
    duplicated_count = 0

    for new_name, entries in definition_map.items():
        if len(entries) <= 1:
            continue

        # Separate by stub vs non-stub and static vs non-static
        non_stub_nonstatic = [(f, s) for f, s in entries
                               if not is_stub_file(f, src_dir) and not s]
        stub_entries = [(f, s) for f, s in entries if is_stub_file(f, src_dir)]

        if non_stub_nonstatic:
            # A non-stub file provides a non-static definition.
            # Skip renaming the definition in ALL stub files (they'd be duplicates).
            duplicated_count += 1
            for sf, _ in stub_entries:
                skip_rename_defs[sf].add(new_name)
        else:
            # No non-stub non-static definition. Check for stub-to-stub duplicates.
            stub_nonstatic = [(f, s) for f, s in stub_entries if not s]
            if len(stub_nonstatic) > 1:
                # Multiple non-static definitions in stubs. Keep first, skip rest.
                duplicated_count += 1
                for sf, _ in stub_nonstatic[1:]:
                    skip_rename_defs[sf].add(new_name)

    return skip_rename_defs, duplicated_count


def apply_renames_to_content(content, regex, renames, skip_definitions=None):
    """Replace all matching FUN_xxx occurrences in content.

    skip_definitions: set of (line_number, new_name) where definition lines
    should NOT be renamed.

    Returns (new_content, count).
    """
    if skip_definitions is None:
        skip_definitions = set()

    skip_at_lines = defaultdict(set)
    for (line_num, name) in skip_definitions:
        skip_at_lines[line_num].add(name)

    lines = content.split('\n')
    total_count = 0
    new_lines = []

    for line_num, line in enumerate(lines):
        count_in_line = 0

        def replacer(match):
            nonlocal count_in_line
            old = match.group(0)
            if old not in renames:
                return old
            new = renames[old]
            if old == new:
                return old
            if line_num in skip_at_lines and new in skip_at_lines[line_num]:
                return old
            count_in_line += 1
            return new

        new_line = regex.sub(replacer, line)
        new_lines.append(new_line)
        total_count += count_in_line

    return '\n'.join(new_lines), total_count


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    md_path = os.path.join(script_dir, 'docs', 'function_rename_list.md')
    src_dir = os.path.join(script_dir, 'src')

    if not os.path.isfile(md_path):
        print(f"ERROR: Rename list not found at {md_path}")
        sys.exit(1)
    if not os.path.isdir(src_dir):
        print(f"ERROR: Source directory not found at {src_dir}")
        sys.exit(1)

    # ---- Phase 1: Revert any previously applied renames ----
    raw_renames = {}
    with open(md_path, 'r') as f:
        for line in f:
            m = re.match(r'\|\s*`(FUN_[0-9a-f]+)`\s*\|\s*`(\w+)`\s*\|', line)
            if m:
                raw_renames[m.group(1)] = m.group(2)

    # Build reverse map including overrides
    reverse_map = {}
    for old, new in raw_renames.items():
        reverse_map[new] = old
    for old, new in NAME_OVERRIDES.items():
        reverse_map[new] = old

    source_files = find_source_files(src_dir)

    # Check if renames were previously applied
    sample = ""
    for f in source_files[:5]:
        with open(f) as fh:
            sample += fh.read()

    already_applied = False
    for old, new in raw_renames.items():
        if re.search(r'\b' + re.escape(new) + r'\b', sample):
            if not re.search(r'\b' + re.escape(old) + r'\b', sample):
                already_applied = True
                break

    if already_applied:
        print("Detected previously applied renames. Reverting...")
        revert_regex = build_replacement_regex(list(reverse_map.keys()))
        total_reverted = 0
        for filepath in source_files:
            if is_protected_header(filepath, src_dir):
                continue
            with open(filepath, 'r') as f:
                content = f.read()
            c = [0]
            def make_reverter(counter):
                def reverter(match):
                    old = match.group(0)
                    if old in reverse_map:
                        counter[0] += 1
                        return reverse_map[old]
                    return old
                return reverter
            reverter = make_reverter(c)
            new_content = revert_regex.sub(reverter, content)
            if c[0] > 0:
                with open(filepath, 'w') as f:
                    f.write(new_content)
                total_reverted += c[0]
        print(f"  Reverted {total_reverted} replacements.")
        print()

    # ---- Phase 2: Parse corrected rename list ----
    print("Parsing rename list with collision overrides...")
    renames = parse_rename_list(md_path)
    print(f"Parsed {len(renames)} function renames")

    name_counts = Counter(renames.values())
    for name, cnt in name_counts.items():
        if cnt > 1:
            addrs = [a for a, n in renames.items() if n == name]
            print(f"WARNING: Duplicate target name '{name}' for: {addrs}")

    # ---- Phase 3: Scan for function definitions ----
    print("Scanning for function definitions...")
    source_files = find_source_files(src_dir)
    definition_map = scan_definitions(source_files, renames, src_dir)

    skip_rename_defs, dup_count = compute_skip_set(definition_map, src_dir)
    skip_total = sum(len(v) for v in skip_rename_defs.values())
    print(f"  Found {dup_count} names with conflicting definitions")
    print(f"  Will skip renaming {skip_total} function definitions in stub files")

    # ---- Phase 4: Apply renames ----
    regex = build_replacement_regex(list(renames.keys()))
    print(f"Found {len(source_files)} source files under src/")
    print()

    total_replacements = 0
    files_modified = 0

    for filepath in source_files:
        if is_protected_header(filepath, src_dir):
            continue

        with open(filepath, 'r') as f:
            content = f.read()

        names_to_skip = skip_rename_defs.get(filepath, set())
        skip_defs = set()

        if names_to_skip:
            lines = content.split('\n')
            for i, line in enumerate(lines):
                stripped = line.strip()
                for fun_name, new_name in renames.items():
                    if new_name not in names_to_skip:
                        continue
                    if fun_name not in stripped:
                        continue
                    is_def, is_static = is_definition_line(lines, i, fun_name)
                    if is_def and not is_static:
                        skip_defs.add((i, new_name))

        new_content, count = apply_renames_to_content(
            content, regex, renames, skip_definitions=skip_defs
        )

        if count > 0:
            with open(filepath, 'w') as f:
                f.write(new_content)
            rel_path = os.path.relpath(filepath, script_dir)
            print(f"  {rel_path}: {count} replacements")
            total_replacements += count
            files_modified += 1

    # Summary
    print()
    print("=" * 60)
    print("SUMMARY")
    print(f"  Total renames in list:    {len(renames)}")
    print(f"  Source files scanned:     {len(source_files)}")
    print(f"  Files modified:           {files_modified}")
    print(f"  Total replacements made:  {total_replacements}")
    print(f"  Definitions preserved:    {skip_total}")
    print("=" * 60)


if __name__ == '__main__':
    main()
