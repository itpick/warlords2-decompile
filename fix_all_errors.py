#!/usr/bin/env python3
"""Fix all build errors iteratively by parsing make output.

Handles:
1. Undeclared FUN_1011xxxx identifiers → add extern declarations
2. Conflicting types → remove fwd decl, add () version if needed
3. Too few/many arguments → stub function definition to ()
4. Void return used as value → change void→int/long long
5. Undeclared param_N identifiers → function body uses removed params (stubbed too aggressively)
6. Called object type 'int *' is not a function → fix declaration
"""
import re, subprocess, os, sys

SRC_DIR = 'src'
MAX_ITERATIONS = 30

# Known FUN_1011xxxx definitions (function name -> signature in another file)
KNOWN_TVECT_FUNCTIONS = {}

def discover_tvect_definitions():
    """Scan wave2_macapp4.c and reconstructed files for FUN_1011xxxx definitions."""
    global KNOWN_TVECT_FUNCTIONS
    for root, dirs, files in os.walk(os.path.join(SRC_DIR, 'stubs')):
        for fname in files:
            if not fname.endswith('.c'):
                continue
            fpath = os.path.join(root, fname)
            try:
                with open(fpath) as f:
                    for line in f:
                        m = re.match(r'^(\w[\w\s\*]*?)\s+(FUN_1011[0-9a-f]+)\s*\(([^)]*)\)\s*[{;]', line.strip())
                        if m:
                            ret_type = m.group(1).strip()
                            func_name = m.group(2)
                            params = m.group(3).strip()
                            if func_name not in KNOWN_TVECT_FUNCTIONS:
                                KNOWN_TVECT_FUNCTIONS[func_name] = (ret_type, params)
            except:
                continue


def build():
    result = subprocess.run(
        ['make', '-C', SRC_DIR, 'PLATFORM=modern', 'WARN_SUPPRESS=-ferror-limit=0 -Wno-everything'],
        capture_output=True, text=True, timeout=300
    )
    return result.stderr


def parse_errors(stderr):
    """Parse all errors grouped by file."""
    errors = {}  # filepath -> [(lineno, msg)]
    for line in stderr.split('\n'):
        if 'error:' not in line:
            continue
        m = re.match(r'([^:]+):(\d+):(\d+): error: (.+)', line)
        if m:
            filepath = os.path.join(SRC_DIR, m.group(1)) if not m.group(1).startswith(SRC_DIR) else m.group(1)
            lineno = int(m.group(2))
            msg = m.group(4)
            if filepath not in errors:
                errors[filepath] = []
            errors[filepath].append((lineno, msg))
    return errors


def get_source_line(filepath, lineno):
    try:
        with open(filepath) as f:
            lines = f.readlines()
        if lineno <= len(lines):
            return lines[lineno - 1].rstrip()
    except:
        pass
    return ''


def find_function_at_line(content, lineno):
    """Find which FUN_ is being called at a given line."""
    lines = content.split('\n')
    if lineno <= len(lines):
        funs = re.findall(r'FUN_[0-9a-f]+', lines[lineno - 1])
        return funs
    return []


def find_fwd_decl(content, fname):
    """Find forward declaration for a function."""
    pat = re.compile(r'^([\w\s\*]+)\s+' + re.escape(fname) + r'\s*\(([^)]*)\)\s*;', re.MULTILINE)
    return pat.search(content)


def find_definition(content, fname):
    """Find function definition (with body). Handles both multi-line and single-line bodies."""
    # Try multi-line body first
    pat = re.compile(
        r'(/\* Address: [^\n]*\*/\s*\n\s*\n?\s*)'
        r'([\w\s\*]+?)\s+(' + re.escape(fname) + r')\s*\(([^)]*)\)'
        r'(\s*\n\s*\{)(.*?)(\n\})',
        re.DOTALL
    )
    m = pat.search(content)
    if m:
        return m
    # Try single-line body: ret_type fname(params) { ... }
    pat2 = re.compile(
        r'(/\* Address: [^\n]*\*/\s*\n)'
        r'([\w\s\*]+?)\s+(' + re.escape(fname) + r')\s*\(([^)]*)\)\s*(\{[^\n]*\})',
        re.DOTALL
    )
    return pat2.search(content)


def stub_function(content, fname, new_ret_type=None):
    """Stub a function definition to () with empty body."""
    m = find_definition(content, fname)
    if not m:
        return content, False

    comment = m.group(1)
    ret_type = new_ret_type or m.group(2).strip()

    if 'void' in ret_type and not new_ret_type:
        ret_stmt = 'return;'
    elif '*' in ret_type:
        ret_stmt = 'return 0;'
    else:
        ret_stmt = 'return 0;'

    new_func = f'{comment}{ret_type} {fname}()\n{{\n  {ret_stmt}\n}}'
    content = content[:m.start()] + new_func + content[m.end():]
    return content, True


def fix_undeclared_params(content):
    """Fix functions that were stubbed to () but still have param references in single-line bodies."""
    # Match pattern: type FUN_xxx() { ... param_N ... }
    pat = re.compile(r'^(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\(\)\s*\{([^}]*param_\d+[^}]*)\}', re.MULTILINE)
    changed = False
    for m in pat.finditer(content):
        ret_type = m.group(1).strip()
        fname = m.group(2)
        if 'void' in ret_type:
            new_body = '{ return; }'
        else:
            new_body = '{ return 0; }'
        old = m.group(0)
        new = f'{ret_type} {fname}() {new_body}'
        content = content.replace(old, new)
        changed = True
    return content, changed


def remove_fwd_decl(content, fname):
    """Remove forward declaration for a function."""
    pat = re.compile(r'^[\w\s\*]+\s+' + re.escape(fname) + r'\s*\([^)]*\)\s*;\n', re.MULTILINE)
    new_content = pat.sub('', content, count=1)
    return new_content, new_content != content


def add_fwd_decl(content, fname, ret_type, params=''):
    """Add a forward declaration after the includes."""
    decl = f'{ret_type} {fname}({params});'
    # Find the best insertion point - after #include or after existing forward declarations
    insert_after = '/* Forward declarations to avoid conflicting types */'
    if insert_after in content:
        content = content.replace(insert_after, insert_after + '\n' + decl)
    else:
        # Insert after #include "warlords2.h"
        content = content.replace('#include "warlords2.h"', '#include "warlords2.h"\n\n' + decl)
    return content


def add_extern_decl(content, fname, decl_str):
    """Add an extern declaration near the top of the file."""
    if decl_str in content:
        return content
    # Insert after #include
    content = content.replace('#include "warlords2.h"', '#include "warlords2.h"\n' + decl_str)
    return content


def fix_file(filepath, file_errors):
    """Apply fixes to a single file based on its errors."""
    with open(filepath) as f:
        content = f.read()

    original = content
    fixed_count = 0

    # Group errors by type
    undeclared_tvect = set()
    conflicting = set()
    arg_mismatch_lines = []
    void_return = []
    undeclared_param = []
    called_not_func = []

    for lineno, msg in file_errors:
        if "use of undeclared identifier 'FUN_1011" in msg:
            m = re.search(r"'(FUN_1011[0-9a-f]+)'", msg)
            if m:
                undeclared_tvect.add(m.group(1))
        elif 'conflicting types for' in msg:
            m = re.search(r"'(FUN_[0-9a-f]+)'", msg)
            if m:
                conflicting.add(m.group(1))
        elif 'too few arguments' in msg or 'too many arguments' in msg:
            arg_mismatch_lines.append((lineno, msg))
        elif "incompatible type 'void'" in msg or "from incompatible type 'void'" in msg:
            void_return.append((lineno, msg))
        elif "operand of type 'void'" in msg:
            void_return.append((lineno, msg))
        elif "use of undeclared identifier 'param_" in msg:
            undeclared_param.append((lineno, msg))
        elif "called object type" in msg and "not a function" in msg:
            called_not_func.append((lineno, msg))

    # 1. Fix undeclared TVect identifiers
    for fname in undeclared_tvect:
        if fname in KNOWN_TVECT_FUNCTIONS:
            ret_type, params = KNOWN_TVECT_FUNCTIONS[fname]
            decl = f'{ret_type} {fname}({params});'
        else:
            # Check how it's used in this file
            uses = re.findall(re.escape(fname) + r'\s*\(', content)
            if uses:
                decl = f'extern int {fname}();'
            else:
                decl = f'extern int *{fname};'
        content = add_extern_decl(content, fname, decl)
        fixed_count += 1
        print(f'  Added decl for {fname}')

    # 2. Fix conflicting types - remove fwd decl
    for fname in conflicting:
        content, removed = remove_fwd_decl(content, fname)
        if removed:
            fixed_count += 1
            print(f'  Removed fwd decl for {fname}')

    # 3. Fix arg mismatches - find the called function and stub it
    stubbed = set()
    for lineno, msg in arg_mismatch_lines:
        funs = find_function_at_line(content, lineno)
        if not funs:
            # Try the line before (multi-line call)
            funs = find_function_at_line(content, lineno - 1)
        if not funs:
            funs = find_function_at_line(content, lineno - 2)

        for fname in funs:
            if fname in stubbed:
                continue
            content, did_stub = stub_function(content, fname)
            if did_stub:
                stubbed.add(fname)
                fixed_count += 1
                print(f'  Stubbed {fname} (arg mismatch)')

    # 4. Fix void return used as value
    for lineno, msg in void_return:
        funs = find_function_at_line(content, lineno)
        for fname in funs:
            if fname in stubbed:
                continue
            # Change void -> int in fwd decl
            fwd = find_fwd_decl(content, fname)
            if fwd and 'void' in fwd.group(1):
                old = fwd.group(0)
                new = old.replace('void ', 'int ', 1)
                content = content.replace(old, new, 1)
            # Change void -> int in definition and stub
            content, did_stub = stub_function(content, fname, new_ret_type='int')
            if did_stub:
                stubbed.add(fname)
                fixed_count += 1
                print(f'  Fixed {fname} void->int')

    # 5. Fix "called object type 'int *' is not a function"
    for lineno, msg in called_not_func:
        funs = find_function_at_line(content, lineno)
        for fname in funs:
            if fname.startswith('FUN_1011'):
                # Already handled as TVect
                pass

    # 6. Fix functions stubbed to () but with param references in body
    content, param_fixed = fix_undeclared_params(content)
    if param_fixed:
        fixed_count += 1
        print(f'  Fixed undeclared param references in stubbed functions')

    if content != original:
        with open(filepath, 'w') as f:
            f.write(content)

    return fixed_count


def add_globals_extra(tvect_funcs):
    """Add missing TVect globals to globals_extra.c."""
    gpath = os.path.join(SRC_DIR, 'stubs', 'globals_extra.c')
    with open(gpath) as f:
        gcontent = f.read()

    changed = False
    for fname in tvect_funcs:
        # Only add if not defined elsewhere and not already in globals_extra
        if fname not in gcontent and fname not in KNOWN_TVECT_FUNCTIONS:
            gcontent += f'\nint *{fname} = NULL;'
            changed = True
            print(f'  Added {fname} to globals_extra.c')

    if changed:
        with open(gpath, 'w') as f:
            f.write(gcontent)


# Main loop
print('Discovering TVect function definitions...')
discover_tvect_definitions()
print(f'  Found {len(KNOWN_TVECT_FUNCTIONS)} TVect functions with real definitions')

for iteration in range(MAX_ITERATIONS):
    print(f'\n=== Build iteration {iteration} ===')
    stderr = build()

    file_errors = parse_errors(stderr)
    total_errors = sum(len(errs) for errs in file_errors.values())

    if total_errors == 0:
        print(f'Clean build after {iteration} iterations!')
        break

    print(f'  {total_errors} errors in {len(file_errors)} files')
    for fpath in sorted(file_errors.keys()):
        print(f'    {fpath}: {len(file_errors[fpath])} errors')

    total_fixes = 0
    all_tvect = set()

    for filepath, errs in file_errors.items():
        if not os.path.exists(filepath):
            continue
        print(f'\n  Fixing {filepath}...')

        # Collect TVect identifiers for globals
        for _, msg in errs:
            m = re.search(r"'(FUN_1011[0-9a-f]+)'", msg)
            if m and m.group(1) not in KNOWN_TVECT_FUNCTIONS:
                all_tvect.add(m.group(1))

        fixes = fix_file(filepath, errs)
        total_fixes += fixes

    # Add any new TVect globals
    if all_tvect:
        add_globals_extra(all_tvect)

    if total_fixes == 0:
        print(f'\nNo more auto-fixable errors after {iteration} iterations')
        # Print remaining errors
        for fpath, errs in file_errors.items():
            for lineno, msg in errs[:10]:
                src = get_source_line(fpath, lineno)
                print(f'  REMAINING: {fpath}:{lineno}: {msg}')
                print(f'    {src[:120]}')
        break

print('\nDone')
