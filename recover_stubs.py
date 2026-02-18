#!/usr/bin/env python3
"""Recover stubbed functions that actually compile OK when given proper externs.

Phase 1: Test all stubbed functions in parallel batches to find compilable ones.
Phase 2: Replace stubs with real implementations.
Phase 3: Rebuild forward declarations.
"""

from extract_functions import parse_decompiled, clean_types
import re, subprocess, tempfile, os, sys
from concurrent.futures import ProcessPoolExecutor, as_completed

SRC_DIR = '/Users/lucaspick/workspace/itpick/warlords2-decompile/src'
CFLAGS = [
    'cc', '-fsyntax-only', '-ferror-limit=1',
    '-Wno-int-to-pointer-cast', '-Wno-pointer-to-int-cast',
    '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
    '-Wno-implicit-function-declaration',
    f'-I{SRC_DIR}/include', '-DMODERN_BUILD=1',
]

def get_externs(body):
    """Generate extern declarations for all globals referenced in body."""
    lines = []
    seen = set()
    for g in re.findall(r'\b(piRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern int *{g};'); seen.add(g)
    for g in re.findall(r'\b(puRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern unsigned int *{g};'); seen.add(g)
    for g in re.findall(r'\b(psRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern short *{g};'); seen.add(g)
    for g in re.findall(r'\b(iRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern long {g};'); seen.add(g)
    for g in re.findall(r'\b(uRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern unsigned int {g};'); seen.add(g)
    for g in re.findall(r'\b(pbRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern unsigned char *{g};'); seen.add(g)
    for g in re.findall(r'\b(pcRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern char *{g};'); seen.add(g)
    for g in re.findall(r'\b(pdRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern double {g};'); seen.add(g)
    return '\n'.join(lines)

def test_one(args):
    """Test if a single function compiles. Returns (fname, True/False)."""
    fname, body = args
    externs = get_externs(body)
    src = f'#include "warlords2.h"\n{externs}\n\n{body}\n'

    tmppath = f'/tmp/wl2_test_{fname}.c'
    with open(tmppath, 'w') as tf:
        tf.write(src)

    result = subprocess.run(
        CFLAGS + [tmppath],
        capture_output=True, text=True
    )
    os.unlink(tmppath)
    has_error = any('error:' in l for l in result.stderr.split('\n'))
    return (fname, not has_error)

def main():
    print("Phase 1: Parsing decompiled source...")
    functions = parse_decompiled('/Users/lucaspick/workspace/itpick/warlords2-decompile/warlords2_decompiled.c')
    print(f"  {len(functions)} functions loaded")

    wave2_files = [
        'stubs/wave2_tvect.c', 'stubs/wave2_game1.c', 'stubs/wave2_game2.c',
        'stubs/wave2_macapp1.c', 'stubs/wave2_macapp2.c',
        'stubs/wave2_macapp3.c', 'stubs/wave2_macapp4.c',
    ]

    # Collect all stubbed functions with their cleaned bodies
    stubbed = {}  # fname -> (wf, ret_type, cleaned_body)
    for wf in wave2_files:
        filepath = os.path.join(SRC_DIR, wf)
        with open(filepath) as f:
            content = f.read()
        for m in re.finditer(r'stubbed.*?\n(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\(\)', content):
            fname = m.group(2)
            ret_type = m.group(1)
            if fname in functions:
                body = clean_types(functions[fname]['body'])
                stubbed[fname] = (wf, ret_type, body)

    print(f"  {len(stubbed)} stubbed functions found")

    # Phase 2: Test all in parallel
    print("Phase 2: Testing compilability in parallel...")
    test_args = [(fname, info[2]) for fname, info in stubbed.items()]

    compilable = set()
    with ProcessPoolExecutor(max_workers=8) as executor:
        futures = {executor.submit(test_one, args): args[0] for args in test_args}
        done = 0
        for future in as_completed(futures):
            fname, ok = future.result()
            if ok:
                compilable.add(fname)
            done += 1
            if done % 50 == 0:
                print(f"  tested {done}/{len(test_args)}, {len(compilable)} compilable so far...")

    print(f"  {len(compilable)}/{len(stubbed)} compile OK")

    # Phase 3: Replace stubs with real implementations
    print("Phase 3: Replacing stubs with real implementations...")
    total_recovered = 0

    for wf in wave2_files:
        filepath = os.path.join(SRC_DIR, wf)
        with open(filepath) as f:
            lines = f.read().split('\n')

        recovered = 0
        i = 0
        while i < len(lines):
            if 'stubbed - had compile errors' in lines[i]:
                stub_line = lines[i + 1] if i + 1 < len(lines) else ''
                m = re.match(r'(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\(\)', stub_line)
                if m and m.group(2) in compilable:
                    fname = m.group(2)
                    _, _, body = stubbed[fname]
                    size = functions[fname]['size']
                    lines[i] = f'/* Address: 0x{fname[4:]} Size: {size} bytes */'
                    lines[i + 1] = body
                    recovered += 1
            i += 1

        if recovered > 0:
            with open(filepath, 'w') as f:
                f.write('\n'.join(lines))

        total_stubbed = sum(1 for l in lines if 'stubbed - had compile errors' in l)
        print(f"  {wf}: recovered {recovered}, {total_stubbed} still stubbed")
        total_recovered += recovered

    print(f"\nTotal recovered: {total_recovered}")

if __name__ == '__main__':
    main()
