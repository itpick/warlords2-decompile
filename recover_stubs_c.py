#!/usr/bin/env python3
"""Recover stubs from stubs.c by testing with PPC32 and host, then appending to recovered_stubs.c."""

from extract_functions import parse_decompiled, clean_types
import re, subprocess, os
from concurrent.futures import ProcessPoolExecutor, as_completed

SRC_DIR = '/Users/lucaspick/workspace/itpick/warlords2-decompile/src'
PPC32_SYSROOT = '/tmp/ppc32-sysroot'

PPC32_CFLAGS = [
    'clang', '-target', 'powerpc-unknown-linux',
    '-nostdinc', f'-isystem{PPC32_SYSROOT}/include',
    '-fsyntax-only', '-ferror-limit=1',
    '-Wno-int-to-pointer-cast', '-Wno-pointer-to-int-cast',
    '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
    '-Wno-implicit-function-declaration',
    f'-I{SRC_DIR}/include', '-DMODERN_BUILD=1',
]

HOST_CFLAGS = [
    'cc', '-fsyntax-only', '-ferror-limit=1',
    '-Wno-int-to-pointer-cast', '-Wno-pointer-to-int-cast',
    '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
    '-Wno-implicit-function-declaration',
    f'-I{SRC_DIR}/include', '-DMODERN_BUILD=1',
]

MACRO_GLOBALS = {
    'iRam1011762c', 'iRam10117630',
    'piRam1011734c', 'piRam10117350', 'piRam10117354', 'piRam10117358',
    'piRam1011735c', 'piRam10117360', 'piRam10117364', 'piRam10117368',
    'piRam10117370', 'piRam101176bc', 'piRam101176e0', 'psRam101176fc',
}

def get_externs(body):
    lines = []
    seen = set()
    for g in re.findall(r'\b(piRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern int *{g};'); seen.add(g)
    for g in re.findall(r'\b(puRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern unsigned int *{g};'); seen.add(g)
    for g in re.findall(r'\b(psRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern short *{g};'); seen.add(g)
    for g in re.findall(r'\b(pbRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern unsigned char *{g};'); seen.add(g)
    for g in re.findall(r'\b(pcRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern char *{g};'); seen.add(g)
    for g in re.findall(r'\b(iRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern long {g};'); seen.add(g)
    for g in re.findall(r'\b(uRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern unsigned int {g};'); seen.add(g)
    for g in re.findall(r'\b(pdRam[0-9a-f]+)\b', body):
        if g not in seen and g not in MACRO_GLOBALS: lines.append(f'extern double {g};'); seen.add(g)
    return '\n'.join(lines)

def test_one(args):
    """Test if function compiles on host compiler."""
    fname, body = args
    externs = get_externs(body)
    src = f'#include "warlords2.h"\n{externs}\n\n{body}\n'
    tmppath = f'/tmp/wl2_stub_{fname}.c'
    with open(tmppath, 'w') as tf:
        tf.write(src)
    result = subprocess.run(HOST_CFLAGS + [tmppath], capture_output=True, text=True)
    os.unlink(tmppath)
    has_error = any('error:' in l for l in result.stderr.split('\n'))
    return (fname, not has_error)

def main():
    print("Parsing decompiled source...")
    functions = parse_decompiled('/Users/lucaspick/workspace/itpick/warlords2-decompile/warlords2_decompiled.c')

    with open('src/stubs/stubs.c') as f:
        content = f.read()

    # Check which functions are already in recovered_stubs.c
    with open('src/stubs/recovered_stubs.c') as f:
        existing = f.read()
    already = set(re.findall(r'(FUN_[0-9a-f]+)\s*\(', existing))

    # Find all stub functions in stubs.c
    stubs = {}
    for m in re.finditer(r'^\w[\w\s\*]*?\s+(FUN_[0-9a-f]+)\([^)]*\)\s*\{[^}]*\}', content, re.MULTILINE):
        fname = m.group(1)
        if fname in functions and fname not in already:
            body = clean_types(functions[fname]['body'])
            stubs[fname] = body

    print(f"{len(stubs)} stubs with decompiled bodies (not already recovered)")

    if not stubs:
        print("Nothing to recover")
        return

    # Test on host compiler in parallel
    print("Testing compilability on host...")
    test_args = [(fname, body) for fname, body in stubs.items()]
    compilable = {}

    with ProcessPoolExecutor(max_workers=8) as executor:
        futures = {executor.submit(test_one, args): args[0] for args in test_args}
        done = 0
        for future in as_completed(futures):
            fname, ok = future.result()
            if ok:
                compilable[fname] = stubs[fname]
            done += 1
            if done % 50 == 0:
                print(f"  tested {done}/{len(test_args)}, {len(compilable)} compilable...")

    print(f"\n{len(compilable)}/{len(stubs)} compile OK on host")

    if not compilable:
        print("Nothing new to recover from stubs.c")
        return

    # Append to recovered_stubs.c
    with open('src/stubs/recovered_stubs.c', 'a') as f:
        f.write('\n/* === Recovered from stubs.c === */\n\n')
        for fname in sorted(compilable):
            size = functions[fname]['size']
            f.write(f'/* Address: 0x{fname[4:]} Size: {size} bytes */\n')
            f.write(compilable[fname])
            f.write('\n\n')

    # Remove from stubs.c
    lines = content.split('\n')
    new_lines = []
    i = 0
    removed = 0
    while i < len(lines):
        m = re.match(r'^\w[\w\s\*]*?\s+(FUN_[0-9a-f]+)\([^)]*\)\s*\{', lines[i])
        if m and m.group(1) in compilable:
            removed += 1
            i += 1
            continue
        new_lines.append(lines[i])
        i += 1
    with open('src/stubs/stubs.c', 'w') as f:
        f.write('\n'.join(new_lines))

    print(f"Appended {len(compilable)} to recovered_stubs.c, removed {removed} from stubs.c")

if __name__ == '__main__':
    main()
