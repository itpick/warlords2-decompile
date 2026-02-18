#!/usr/bin/env python3
"""Recover stubs from stubs.c by replacing with real implementations."""

from extract_functions import parse_decompiled, clean_types
import re, subprocess, os
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
    lines = []
    seen = set()
    for g in re.findall(r'\b(piRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern int *{g};'); seen.add(g)
    for g in re.findall(r'\b(puRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern unsigned int *{g};'); seen.add(g)
    for g in re.findall(r'\b(psRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern short *{g};'); seen.add(g)
    for g in re.findall(r'\b(pbRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern unsigned char *{g};'); seen.add(g)
    for g in re.findall(r'\b(iRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern long {g};'); seen.add(g)
    for g in re.findall(r'\b(uRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern unsigned int {g};'); seen.add(g)
    for g in re.findall(r'\b(pcRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern char *{g};'); seen.add(g)
    for g in re.findall(r'\b(pdRam[0-9a-f]+)\b', body):
        if g not in seen: lines.append(f'extern double {g};'); seen.add(g)
    return '\n'.join(lines)

def test_one(args):
    fname, body = args
    externs = get_externs(body)
    src = f'#include "warlords2.h"\n{externs}\n\n{body}\n'
    tmppath = f'/tmp/wl2_stub_{fname}.c'
    with open(tmppath, 'w') as tf:
        tf.write(src)
    result = subprocess.run(CFLAGS + [tmppath], capture_output=True, text=True)
    os.unlink(tmppath)
    has_error = any('error:' in l for l in result.stderr.split('\n'))
    return (fname, not has_error)

def main():
    print("Parsing decompiled source...")
    functions = parse_decompiled('/Users/lucaspick/workspace/itpick/warlords2-decompile/warlords2_decompiled.c')

    with open('src/stubs/stubs.c') as f:
        content = f.read()

    # Find all stub functions
    stubs = {}
    for m in re.finditer(r'^(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\(\)\s*\{[^}]*\}', content, re.MULTILINE):
        fname = m.group(2)
        if fname in functions:
            body = clean_types(functions[fname]['body'])
            stubs[fname] = body

    print(f"{len(stubs)} stubs with decompiled bodies")

    # Test in parallel
    print("Testing compilability...")
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
            if done % 100 == 0:
                print(f"  tested {done}/{len(test_args)}, {len(compilable)} compilable...")

    print(f"\n{len(compilable)}/{len(stubs)} compile OK")

    if not compilable:
        return

    # Write compilable functions to a new file
    outpath = os.path.join(SRC_DIR, 'stubs', 'recovered_stubs.c')
    with open(outpath, 'w') as f:
        f.write('/*\n')
        f.write(' * recovered_stubs.c - Recovered stub implementations\n')
        f.write(' * Auto-recovered from Ghidra decompilation.\n')
        f.write(' */\n\n')
        f.write('#include "warlords2.h"\n\n')
        f.write('#ifndef CONCAT22\n')
        f.write('#define CONCAT22(hi, lo) ((int)(((unsigned int)(unsigned short)(hi) << 16) | (unsigned short)(lo)))\n')
        f.write('#endif\n')
        f.write('#ifndef CONCAT44\n')
        f.write('#define CONCAT44(hi, lo) ((long long)(((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo)))\n')
        f.write('#endif\n')
        f.write('#ifndef ZEXT48\n')
        f.write('#define ZEXT48(x) ((unsigned long long)(unsigned int)(x))\n')
        f.write('#endif\n')
        f.write('#ifndef SUB41\n')
        f.write('#define SUB41(x, n) ((char)((x) >> ((n) * 8)))\n')
        f.write('#endif\n')
        f.write('#ifndef SUB42\n')
        f.write('#define SUB42(x, n) ((short)((x) >> ((n) * 8)))\n')
        f.write('#endif\n\n')

        # Extern declarations for all globals
        all_globals = set()
        for body in compilable.values():
            for g in re.findall(r'\b([piu][cisdub]?Ram[0-9a-f]+)\b', body):
                all_globals.add(g)

        f.write('/* Extern declarations */\n')
        for g in sorted(all_globals):
            if g.startswith('piRam'):
                f.write(f'extern int *{g};\n')
            elif g.startswith('puRam'):
                f.write(f'extern unsigned int *{g};\n')
            elif g.startswith('psRam'):
                f.write(f'extern short *{g};\n')
            elif g.startswith('pbRam'):
                f.write(f'extern unsigned char *{g};\n')
            elif g.startswith('pcRam'):
                f.write(f'extern char *{g};\n')
            elif g.startswith('pdRam'):
                f.write(f'extern double {g};\n')
            elif g.startswith('iRam'):
                f.write(f'extern long {g};\n')
            elif g.startswith('uRam'):
                f.write(f'extern unsigned int {g};\n')
        f.write('\n')

        for fname in sorted(compilable):
            size = functions[fname]['size']
            f.write(f'/* Address: 0x{fname[4:]} Size: {size} bytes */\n')
            f.write(compilable[fname])
            f.write('\n\n')

    print(f"Wrote {len(compilable)} functions to {outpath}")

    # Remove recovered stubs from stubs.c
    removed = 0
    lines = content.split('\n')
    new_lines = []
    skip_until_close = False
    i = 0
    while i < len(lines):
        line = lines[i]
        # Check if this is a stub function we recovered
        m = re.match(r'^(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\(\)\s*\{', line)
        if m and m.group(2) in compilable:
            # Skip this stub (single line)
            removed += 1
            i += 1
            continue
        new_lines.append(line)
        i += 1

    with open(os.path.join(SRC_DIR, 'stubs', 'stubs.c'), 'w') as f:
        f.write('\n'.join(new_lines))

    print(f"Removed {removed} stubs from stubs.c")

if __name__ == '__main__':
    main()
