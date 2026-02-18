#!/usr/bin/env python3
"""Remove duplicate function definitions based on priority order."""

import re, os

SRC_DIR = 'src'

PRIORITY = [
    'combat/combat.c', 'ai/ai.c', 'movement/movement.c',
    'economy/economy.c', 'rendering/rendering.c', 'sound/sound.c',
    'serialization/serialization.c', 'mapgen/mapgen.c', 'framework/framework.c',
    'core/globals.c', 'core/utils.c',
    'stubs/reconstructed_1.c', 'stubs/reconstructed_2.c',
    'stubs/reconstructed_4.c', 'stubs/reconstructed_5.c',
    'stubs/reconstructed_named.c',
    'stubs/reconstructed_batch_a.c', 'stubs/reconstructed_batch_b.c',
    'stubs/reconstructed_batch_c.c',
    'stubs/wave2_tvect.c', 'stubs/wave2_game1.c', 'stubs/wave2_game2.c',
    'stubs/wave2_macapp1.c', 'stubs/wave2_macapp2.c',
    'stubs/wave2_macapp3.c', 'stubs/wave2_macapp4.c',
    'stubs/recovered_stubs.c',
    'stubs/stubs.c',
]

def find_func_defs(lines):
    """Find all function definition line ranges."""
    defs = {}
    i = 0
    while i < len(lines):
        line = lines[i].rstrip()
        # Match function sig - may or may not have { on this line
        m = re.match(r'^(\w[\w *]*?)\s+(FUN_[0-9a-f]+)\s*\(', line)
        if m:
            fname = m.group(2)
            # Skip extern declarations (not definitions)
            if line.lstrip().startswith('extern'):
                i += 1
                continue
            # Check if this is a forward declaration (ends with ;)
            # Strip trailing comments first: "int foo(int); /* comment */" -> "int foo(int);"
            stripped = re.sub(r'/\*.*?\*/', '', line).rstrip()
            if stripped.endswith(';'):
                i += 1
                continue

            start = i
            # Include preceding comment
            if i > 0 and ('/* Address:' in lines[i-1] or 'stubbed' in lines[i-1]):
                start = i - 1

            # Find the opening brace (might be on same line or later)
            j = i
            found_open = False
            depth = 0
            while j < len(lines):
                depth += lines[j].count('{') - lines[j].count('}')
                if '{' in lines[j]:
                    found_open = True
                if found_open and depth == 0:
                    defs[fname] = (start, j)
                    i = j + 1
                    break
                j += 1
            else:
                i += 1
        else:
            i += 1

    return defs

def main():
    owner = {}
    all_defs = {}
    all_lines = {}

    for f in PRIORITY:
        path = os.path.join(SRC_DIR, f)
        if not os.path.exists(path):
            continue
        with open(path) as fh:
            lines = fh.readlines()
        defs = find_func_defs(lines)
        all_defs[f] = defs
        all_lines[f] = lines
        for fname in defs:
            if fname not in owner:
                owner[fname] = f

    total = 0
    for f in PRIORITY:
        if f not in all_defs:
            continue
        defs = all_defs[f]
        lines = all_lines[f]
        to_remove = {fname: rng for fname, rng in defs.items() if owner.get(fname) != f}

        if not to_remove:
            continue

        skip = set()
        for fname, (start, end) in to_remove.items():
            for j in range(start, end + 1):
                skip.add(j)

        new_lines = [lines[i] for i in range(len(lines)) if i not in skip]

        path = os.path.join(SRC_DIR, f)
        with open(path, 'w') as fh:
            fh.writelines(new_lines)

        print(f"  {f}: removed {len(to_remove)} duplicates")
        total += len(to_remove)

    print(f"\nTotal: removed {total} duplicates")

if __name__ == '__main__':
    main()
