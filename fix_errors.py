#!/usr/bin/env python3
"""
Fix compilation errors in wave2 files by replacing error-causing functions
with stub implementations while preserving functions that compile.
"""

import re
import subprocess
import os

SRC_DIR = '/Users/lucaspick/workspace/itpick/warlords2-decompile/src'
CFLAGS = [
    'cc', '-O2', '-Wall',
    '-Wno-int-to-pointer-cast', '-Wno-pointer-to-int-cast',
    '-Wno-incompatible-pointer-types', '-Wno-int-conversion',
    '-Wno-implicit-function-declaration',
    f'-I{SRC_DIR}/include', '-DMODERN_BUILD=1',
    '-fsyntax-only', '-ferror-limit=0'
]

def get_error_lines(filepath):
    """Get line numbers that have errors."""
    result = subprocess.run(
        CFLAGS + [filepath],
        capture_output=True, text=True
    )
    error_lines = set()
    for line in result.stderr.split('\n'):
        m = re.match(rf'{re.escape(filepath)}:(\d+):\d+: error:', line)
        if m:
            error_lines.add(int(m.group(1)))
    return error_lines

def parse_functions_from_file(filepath):
    """Parse function boundaries in a generated wave2 file."""
    with open(filepath) as f:
        content = f.read()
        lines = content.split('\n')

    functions = []
    i = 0
    while i < len(lines):
        # Look for function start marker (both real and stubbed)
        if lines[i].startswith('/* Address:'):
            start_line = i + 1  # 1-indexed
            # Find the function signature (next non-empty line)
            func_start = i + 1
            # Find the opening brace
            brace_depth = 0
            found_open = False
            func_end = func_start
            for j in range(func_start, len(lines)):
                if '{' in lines[j]:
                    brace_depth += lines[j].count('{')
                    found_open = True
                if '}' in lines[j]:
                    brace_depth -= lines[j].count('}')
                if found_open and brace_depth == 0:
                    func_end = j
                    break

            # Extract function name
            for k in range(func_start, min(func_start + 3, len(lines))):
                m = re.search(r'(FUN_[0-9a-f]+)\s*\(', lines[k])
                if m:
                    func_name = m.group(1)
                    # Get return type
                    sig_line = lines[k]
                    ret_type = sig_line[:sig_line.index(func_name)].strip()
                    # Get params
                    params_match = re.search(r'\(([^)]*)\)', sig_line)
                    params = params_match.group(1) if params_match else 'void'

                    functions.append({
                        'name': func_name,
                        'ret_type': ret_type,
                        'params': params,
                        'comment_line': i,    # 0-indexed
                        'start_line': i + 1,  # 1-indexed for compiler errors
                        'end_line': func_end + 1,  # 1-indexed
                        'start_idx': i,       # 0-indexed
                        'end_idx': func_end,  # 0-indexed
                    })
                    break
            i = func_end + 1
        else:
            i += 1

    return functions, lines

def fix_file(filepath):
    """Replace error-causing functions with stubs."""
    error_lines = get_error_lines(filepath)
    if not error_lines:
        print(f"  {os.path.basename(filepath)}: No errors!")
        return 0

    functions, lines = parse_functions_from_file(filepath)

    # Find which functions have errors
    error_functions = set()
    for func in functions:
        for eline in error_lines:
            if func['start_line'] <= eline <= func['end_line']:
                error_functions.add(func['name'])
                break

    # Replace error functions with stubs
    replaced = 0
    for func in functions:
        if func['name'] in error_functions:
            # Generate stub - simplify params to just types for stub
            ret = func['ret_type'] if func['ret_type'] else 'int'
            if ret == 'void':
                stub = f'void {func["name"]}() {{ }}'
            else:
                stub = f'{ret} {func["name"]}() {{ return 0; }}'

            # Replace in lines array
            lines[func['start_idx']] = f'/* Address: stubbed - had compile errors on 64-bit */'
            lines[func['start_idx'] + 1] = stub
            for j in range(func['start_idx'] + 2, func['end_idx'] + 1):
                lines[j] = ''
            replaced += 1

    # Write back
    with open(filepath, 'w') as f:
        f.write('\n'.join(lines) + '\n')

    print(f"  {os.path.basename(filepath)}: {replaced}/{len(functions)} functions stubbed, {len(functions) - replaced} kept real")
    return replaced

def main():
    wave2_files = [
        'stubs/wave2_tvect.c',
        'stubs/wave2_game1.c',
        'stubs/wave2_game2.c',
        'stubs/wave2_macapp1.c',
        'stubs/wave2_macapp2.c',
        'stubs/wave2_macapp3.c',
        'stubs/wave2_macapp4.c',
        'stubs/recovered_stubs.c',
    ]

    total_stubbed = 0
    for f in wave2_files:
        filepath = os.path.join(SRC_DIR, f)
        if os.path.exists(filepath):
            total_stubbed += fix_file(filepath)

    print(f"\nTotal: {total_stubbed} functions replaced with stubs")

if __name__ == '__main__':
    main()
