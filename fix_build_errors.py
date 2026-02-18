#!/usr/bin/env python3
"""Fix build errors: remove forward declarations that conflict with calls,
and fix void functions whose return values are assigned."""

import re, subprocess, os

SRC_DIR = 'src'
ALL_FILES = [
    'stubs/wave2_tvect.c', 'stubs/wave2_game1.c', 'stubs/wave2_game2.c',
    'stubs/wave2_macapp1.c', 'stubs/wave2_macapp2.c',
    'stubs/wave2_macapp3.c', 'stubs/wave2_macapp4.c',
    'stubs/recovered_stubs.c',
]

CFLAGS = [
    'cc', '-O2', '-Wall',
    '-Wno-int-to-pointer-cast', '-Wno-pointer-to-int-cast',
    '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
    '-Wno-implicit-function-declaration', '-Wno-deprecated-non-prototype',
    '-I' + SRC_DIR + '/include', '-DMODERN_BUILD=1',
    '-fsyntax-only', '-ferror-limit=0'
]

for iteration in range(10):
    any_fix = False
    for wf in ALL_FILES:
        filepath = os.path.join(SRC_DIR, wf)
        if not os.path.exists(filepath):
            continue
        result = subprocess.run(CFLAGS + [filepath], capture_output=True, text=True)

        with open(filepath) as f:
            lines = f.readlines()

        # Collect functions with errors
        arg_funs = set()  # too many/too few args
        conflict_funs = set()  # conflicting types
        void_assign_funs = set()  # assigning from void

        for line in result.stderr.split('\n'):
            m = re.match(re.escape(filepath) + r':(\d+):', line)
            if not m:
                continue
            lineno = int(m.group(1))
            if lineno > len(lines):
                continue
            src = lines[lineno - 1]
            fns = re.findall(r'FUN_[0-9a-f]+', src)

            if 'too many arguments' in line or 'too few arguments' in line:
                arg_funs.update(fns)
            elif 'conflicting types' in line:
                conflict_funs.update(fns)
            elif "incompatible type 'void'" in line:
                void_assign_funs.update(fns)

        to_remove_fwd = arg_funs | conflict_funs
        if not to_remove_fwd and not void_assign_funs:
            continue

        with open(filepath) as f:
            content = f.read()

        changed = False
        # Remove forward declarations for arg-count and conflicting type functions
        for fname in to_remove_fwd:
            # Only remove the forward declaration, not the definition
            pattern = re.compile(
                r'^([\w\s\*]+\s+' + re.escape(fname) + r'\s*\([^)]*\)\s*;)\n',
                re.MULTILINE
            )
            new_content = pattern.sub('', content, count=1)
            if new_content != content:
                content = new_content
                changed = True

        # Fix void functions whose return values are assigned:
        # Only change the forward declaration and stub, not real implementations
        for fname in void_assign_funs:
            # Fix forward declaration: void FUN_xxx(...); -> int FUN_xxx(...);
            fwd_pat = re.compile(r'^void\s+(' + re.escape(fname) + r'\s*\([^)]*\)\s*;)', re.MULTILINE)
            new_content = fwd_pat.sub(r'int \1', content, count=1)
            if new_content != content:
                content = new_content
                changed = True

            # Fix stub: void FUN_xxx() { return; } -> int FUN_xxx() { return 0; }
            stub_pat = re.compile(
                r'^/\* Address: stubbed.*\n(void)\s+(' + re.escape(fname) + r'\s*\([^)]*\)\s*\{)\s*return;\s*\}',
                re.MULTILINE
            )
            m = stub_pat.search(content)
            if m:
                old = m.group(0)
                new = old.replace('void ' + fname, 'int ' + fname, 1).replace('return;', 'return 0;', 1)
                content = content.replace(old, new, 1)
                changed = True

        if changed:
            with open(filepath, 'w') as f:
                f.write(content)
            any_fix = True
            print(f'  iter {iteration}: {wf}: removed {len(to_remove_fwd)} fwd decls, '
                  f'fixed {len(void_assign_funs)} void->int')

    if not any_fix:
        print(f'Converged after {iteration} iterations')
        break

print('Done')
