#!/usr/bin/env python3
"""Fix build errors using make output directly (much faster than per-file compilation).

Iterates: build → parse errors → fix forward decls/stubs → rebuild until clean.
"""
import re, subprocess, os

SRC_DIR = 'src'

def build():
    result = subprocess.run(
        ['make', '-C', SRC_DIR, 'PLATFORM=modern'],
        capture_output=True, text=True, timeout=120
    )
    return result.stderr

def parse_errors(stderr):
    """Parse build errors into categorized fixes per file."""
    fixes = {}  # filepath -> {arg_funs, conflict_funs, void_funs}

    for line in stderr.split('\n'):
        if 'error:' not in line or 'fatal' in line:
            continue

        # Parse filepath:lineno: error: message
        m = re.match(r'([^:]+):(\d+):\d+: error: (.+)', line)
        if not m:
            continue

        filepath = m.group(1)
        lineno = int(m.group(2))
        msg = m.group(3)

        # Make paths relative to SRC_DIR for reading
        full_path = os.path.join(SRC_DIR, filepath) if not filepath.startswith(SRC_DIR) else filepath
        if not os.path.exists(full_path):
            continue

        if full_path not in fixes:
            fixes[full_path] = {'arg_funs': set(), 'conflict_funs': set(), 'void_funs': set()}

        # Read the source line
        try:
            with open(full_path) as f:
                lines = f.readlines()
            if lineno > len(lines):
                continue
            src = lines[lineno - 1]
        except:
            continue

        fns = re.findall(r'FUN_[0-9a-f]+', src)

        if 'too many arguments' in msg or 'too few arguments' in msg:
            fixes[full_path]['arg_funs'].update(fns)
        elif 'conflicting types' in msg:
            fixes[full_path]['conflict_funs'].update(fns)
        elif "incompatible type 'void'" in msg or "type 'void'" in msg:
            fixes[full_path]['void_funs'].update(fns)

    return fixes

def apply_fixes(filepath, arg_funs, conflict_funs, void_funs):
    """Apply fixes to a single file."""
    with open(filepath) as f:
        content = f.read()

    changed = False

    # Fix arg-count mismatches: change forward declaration to ()
    for fname in arg_funs:
        # Fix forward declaration params -> ()
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

        # Fix stub definition: void -> int, return; -> return 0;
        stub_pat = re.compile(
            r'^void\s+(' + re.escape(fname) + r'\s*\([^)]*\)\s*\n\s*\{)',
            re.MULTILINE
        )
        m = stub_pat.search(content)
        if m:
            old = m.group(0)
            new = 'int ' + m.group(1)
            content = content.replace(old, new, 1)
            # Also fix return; -> return 0; in this function
            # Find the function body end
            start = content.find(new)
            if start >= 0:
                # Find the closing brace
                brace_count = 0
                i = content.index('{', start)
                for j in range(i, len(content)):
                    if content[j] == '{':
                        brace_count += 1
                    elif content[j] == '}':
                        brace_count -= 1
                        if brace_count == 0:
                            # Replace bare "return;" with "return 0;" in this function body
                            body = content[i:j+1]
                            new_body = re.sub(r'\breturn\s*;', 'return 0;', body)
                            if new_body != body:
                                content = content[:i] + new_body + content[j+1:]
                            break
            changed = True

    if changed:
        with open(filepath, 'w') as f:
            f.write(content)

    return changed

for iteration in range(20):
    print(f'=== Build iteration {iteration} ===')
    stderr = build()

    # Count errors
    error_lines = [l for l in stderr.split('\n') if 'error:' in l and 'fatal' not in l]
    print(f'  {len(error_lines)} errors')

    if not error_lines:
        print(f'Clean build after {iteration} iterations!')
        break

    fixes = parse_errors(stderr)
    any_fix = False

    for filepath, fsets in fixes.items():
        if not fsets['arg_funs'] and not fsets['conflict_funs'] and not fsets['void_funs']:
            continue

        if apply_fixes(filepath, fsets['arg_funs'], fsets['conflict_funs'], fsets['void_funs']):
            any_fix = True
            print(f'  {filepath}: {len(fsets["arg_funs"])} arg, '
                  f'{len(fsets["conflict_funs"])} conflict, {len(fsets["void_funs"])} void')

    if not any_fix:
        print(f'No more auto-fixable errors after {iteration} iterations')
        # Print remaining errors
        for e in error_lines[:20]:
            print(f'  REMAINING: {e}')
        break

print('Done')
