#!/usr/bin/env python3
"""Fix arg-count mismatches and void-return assignments in wave2 files.

For each file:
1. Compile with -ferror-limit=0 to get ALL errors
2. For 'too many/few arguments': change the function's fwd decl AND stub to ()
3. For 'conflicting types': remove the forward declaration
4. For 'assigning from void': change void -> int in fwd decl and stub
Iterate until no errors remain.
"""
import re, subprocess, os, sys

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

for iteration in range(20):
    any_fix = False
    for wf in ALL_FILES:
        filepath = os.path.join(SRC_DIR, wf)
        if not os.path.exists(filepath):
            continue

        result = subprocess.run(CFLAGS + [filepath], capture_output=True, text=True, timeout=60)
        errors = [l for l in result.stderr.split('\n') if 'error:' in l and 'fatal' not in l]
        if not errors:
            continue

        with open(filepath) as f:
            lines = f.readlines()
            content = ''.join(lines)

        arg_funs = set()      # too many/few args - change to ()
        conflict_funs = set()  # conflicting types - remove fwd decl
        void_funs = set()      # assigning from void - change void -> int

        for err in errors:
            m = re.match(re.escape(filepath) + r':(\d+):', err)
            if not m: continue
            lineno = int(m.group(1))
            if lineno > len(lines): continue
            src = lines[lineno - 1]
            fns = re.findall(r'FUN_[0-9a-f]+', src)

            if 'too many arguments' in err or 'too few arguments' in err:
                arg_funs.update(fns)
            elif 'conflicting types' in err:
                conflict_funs.update(fns)
            elif "incompatible type 'void'" in err or "from incompatible type 'void'" in err:
                void_funs.update(fns)

        changed = False

        # Fix arg-count mismatches: find fwd decl with params, change to ()
        # Also find stub definitions with params, change to ()
        for fname in arg_funs:
            # Fix forward declaration
            pat = re.compile(
                r'^([\w\s\*]+)\s+' + re.escape(fname) + r'\s*\([^)]+\)\s*;',
                re.MULTILINE
            )
            m = pat.search(content)
            if m:
                ret = m.group(1).strip()
                old = m.group(0)
                new = f'{ret} {fname}();'
                content = content.replace(old, new, 1)
                changed = True

            # Fix stub definition (with specific params)
            pat = re.compile(
                r'^([\w\s\*]+)\s+' + re.escape(fname) + r'\s*\([^)]+\)\s*\{\s*(return\s+[^;]*;|)\s*\}',
                re.MULTILINE
            )
            m = pat.search(content)
            if m:
                ret = m.group(1).strip()
                body = m.group(2).strip() or ('return 0;' if ret != 'void' else '')
                old = m.group(0)
                new = f'{ret} {fname}() {{ {body} }}'
                content = content.replace(old, new, 1)
                changed = True

        # Fix conflicting types: remove forward declaration
        for fname in conflict_funs:
            pat = re.compile(
                r'^[\w\s\*]+\s+' + re.escape(fname) + r'\s*\([^)]*\)\s*;\n',
                re.MULTILINE
            )
            new_content = pat.sub('', content, count=1)
            if new_content != content:
                content = new_content
                changed = True

        # Fix void return used in assignment: change void -> int
        for fname in void_funs:
            # Fix forward declaration
            fwd_pat = re.compile(
                r'^(void)\s+(' + re.escape(fname) + r'\s*\([^)]*\)\s*;)',
                re.MULTILINE
            )
            m = fwd_pat.search(content)
            if m:
                content = content[:m.start()] + 'int ' + m.group(2) + content[m.end():]
                changed = True

            # Fix stub definition
            stub_pat = re.compile(
                r'(void)\s+(' + re.escape(fname) + r'\s*\([^)]*\)\s*\{)\s*return;\s*\}',
            )
            m = stub_pat.search(content)
            if m:
                old = m.group(0)
                new = 'int ' + m.group(2) + ' return 0; }'
                content = content.replace(old, new, 1)
                changed = True

        if changed:
            with open(filepath, 'w') as f:
                f.write(content)
            any_fix = True
            total = len(arg_funs) + len(conflict_funs) + len(void_funs)
            print(f'  iter {iteration}: {wf}: {len(arg_funs)} arg, {len(conflict_funs)} conflict, {len(void_funs)} void ({total} total)')

    if not any_fix:
        print(f'Converged after {iteration} iterations')
        break

print('Done')
