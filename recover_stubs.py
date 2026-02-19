#!/usr/bin/env python3
"""Recover stubbed function bodies from git history.

Reads the recoverable_stubs.txt list, extracts original bodies from commit 317efa4,
and replaces current empty stubs with original bodies.

Strategy:
- Keep () signature (no params) to avoid arg-count build errors
- Add original params as local variables so body code can reference param_1, param_2, etc.
- Handle return type changes (some were changed from void->int during error fixing)
"""
import re, subprocess, os, sys

SRC_DIR = 'src'
RECOVERY_COMMIT = '317efa4'


def get_old_file_content(filename):
    """Get file content from the recovery commit."""
    filepath = f'src/stubs/{filename}'
    try:
        result = subprocess.run(
            ['git', 'show', f'{RECOVERY_COMMIT}:{filepath}'],
            capture_output=True, text=True, cwd='.'
        )
        if result.returncode == 0:
            return result.stdout
        print(f'  WARNING: Could not get {filepath} from {RECOVERY_COMMIT}: {result.stderr.strip()}')
    except Exception as e:
        print(f'  ERROR: {e}')
    return None


def find_func_line(lines, func_name):
    """Find the line index where func_name is defined (with params and body).
    Returns (line_idx, is_definition) or (None, None).
    Uses simple string search - no regex backtracking.
    """
    target = func_name + '('
    for i, line in enumerate(lines):
        if target not in line:
            continue
        stripped = line.strip()
        # Skip comments
        if stripped.startswith('/*') or stripped.startswith('//') or stripped.startswith('*'):
            continue
        # Skip extern declarations
        if stripped.startswith('extern'):
            continue
        # Skip forward declarations (ending with ;)
        if stripped.endswith(';'):
            continue
        # Skip call sites (no return type, or starts with func name)
        pos = stripped.find(func_name)
        if pos <= 0:
            continue
        # Check the char before func_name is whitespace or * (return type)
        before = stripped[:pos].rstrip()
        if not before:
            continue
        # Make sure func_name is followed by (
        after_name = stripped[pos + len(func_name):]
        if not after_name.startswith('('):
            continue
        return i, True
    return None, None


def extract_function_body_lines(lines, func_name):
    """Extract function definition from lines.
    Returns (return_type, params_str, body_lines_str) or None.
    Handles multi-line parameter lists.
    """
    line_idx, is_def = find_func_line(lines, func_name)
    if line_idx is None:
        return None

    # Parse the signature - may span multiple lines
    line = lines[line_idx].strip()
    fname_pos = line.find(func_name)
    ret_type = line[:fname_pos].strip()

    # Collect full signature (params may span multiple lines)
    paren_start = line.find('(', fname_pos)
    if paren_start == -1:
        return None

    # Join lines until we find the closing paren
    sig_text = line[paren_start:]
    sig_end_line = line_idx
    while ')' not in sig_text and sig_end_line < min(line_idx + 10, len(lines) - 1):
        sig_end_line += 1
        sig_text += ' ' + lines[sig_end_line].strip()

    paren_end = sig_text.find(')')
    if paren_end == -1:
        return None
    params = sig_text[1:paren_end].strip()

    # Now find the opening brace - might be on same line or next lines
    brace_line = sig_end_line
    found_brace = False
    for j in range(sig_end_line, min(sig_end_line + 5, len(lines))):
        if '{' in lines[j]:
            brace_line = j
            found_brace = True
            break

    if not found_brace:
        return None

    # Find matching closing brace by counting
    depth = 0
    body_end = None
    for j in range(brace_line, len(lines)):
        for ch in lines[j]:
            if ch == '{':
                depth += 1
            elif ch == '}':
                depth -= 1
                if depth == 0:
                    body_end = j
                    break
        if body_end is not None:
            break

    if body_end is None:
        return None

    # Extract body as string (from opening { to closing })
    body_lines = lines[brace_line:body_end + 1]
    body_str = '\n'.join(body_lines)

    # If the opening brace is on the same line as other content, trim to just the body
    first_brace = body_str.find('{')
    body_str = body_str[first_brace:]

    return (ret_type, params, body_str)


def find_stub_range(lines, func_name):
    """Find the current stubbed function definition range.
    Returns (start_line, end_line, ret_type) or None.
    The stub has () empty params and a simple body like { return 0; }
    """
    target_empty = func_name + '()'
    for i, line in enumerate(lines):
        if target_empty not in line:
            continue
        stripped = line.strip()
        # Skip comments, externs, forward declarations
        if stripped.startswith('/*') or stripped.startswith('//') or stripped.startswith('*'):
            continue
        if stripped.startswith('extern'):
            continue
        # Check if it's a forward declaration (ends with ;)
        if stripped.endswith(';'):
            continue

        # Extract return type
        fname_pos = stripped.find(func_name)
        if fname_pos <= 0:
            continue
        ret_type = stripped[:fname_pos].strip()
        if not ret_type:
            continue

        # Find the body braces
        depth = 0
        body_end = None
        for j in range(i, min(i + 20, len(lines))):
            for ch in lines[j]:
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
                    if depth == 0:
                        body_end = j
                        break
            if body_end is not None:
                break

        if body_end is None:
            continue

        return (i, body_end, ret_type)

    return None


def parse_params(params_str):
    """Parse parameter string into list of (type, name) tuples."""
    if not params_str or params_str == 'void':
        return []

    params = []
    for p in params_str.split(','):
        p = p.strip()
        if not p:
            continue
        m = re.match(r'(.*?)(\bparam_\d+)\s*$', p)
        if m:
            ptype = m.group(1).strip()
            pname = m.group(2)
            params.append((ptype, pname))
    return params


def make_local_var_decls(params):
    """Create local variable declarations for function params."""
    decls = []
    for ptype, pname in params:
        decls.append(f'  {ptype} {pname} = 0;')
    return decls


def recover_function(lines, func_name, old_lines, old_name=None):
    """Recover a single function body.
    Returns (new_lines, success_bool).
    old_name: the FUN_xxx name to search for in old content (may differ from current name).
    """
    search_name = old_name or func_name
    old_func = extract_function_body_lines(old_lines, search_name)
    if old_func is None:
        print(f'    Could not extract old body for {func_name}')
        return lines, False

    old_ret_type, old_params, old_body = old_func

    stub = find_stub_range(lines, func_name)
    if stub is None:
        print(f'    Could not find current stub for {func_name}')
        return lines, False

    stub_start, stub_end, current_ret_type = stub
    ret_type = current_ret_type

    # Parse old params and create local var declarations
    params = parse_params(old_params)
    local_decls = make_local_var_decls(params)

    # Build the new function
    if local_decls:
        # Insert local var declarations after the opening brace
        inner = old_body[old_body.find('{')+1:]
        if inner.endswith('}'):
            inner = inner[:-1]
        decl_block = '\n'.join(local_decls)
        new_body = '{\n' + decl_block + '\n' + inner + '\n}'
    else:
        new_body = old_body

    new_func_str = f'{ret_type} {func_name}()\n{new_body}'
    new_func_lines = new_func_str.split('\n')

    # Replace stub lines with recovered function
    lines = lines[:stub_start] + new_func_lines + lines[stub_end + 1:]
    return lines, True


def parse_recoverable_list(path):
    """Parse the recoverable_stubs.txt file.
    Returns list of (filename, current_name, old_name).
    old_name is the FUN_xxx name from the old signature (for searching old content).
    """
    functions = []
    current_file = None

    with open(path) as f:
        for line in f:
            line = line.rstrip()
            m = re.match(r'^--- (\S+\.c) \(', line)
            if m:
                current_file = m.group(1)
                continue

            if current_file and re.match(r'^\s+\S+\s+0x[0-9a-f]+\s+\d+', line):
                parts = line.split()
                if len(parts) >= 4:
                    func_name = parts[0]
                    # Extract FUN_xxx from the old signature (last columns)
                    # Format: "... Old signature" where signature contains original func name
                    old_fun_match = re.search(r'(FUN_[0-9a-f]+)\s*\(', line)
                    old_name = old_fun_match.group(1) if old_fun_match else func_name
                    functions.append((current_file, func_name, old_name))

    return functions


def main():
    recoverable_path = '/tmp/recoverable_stubs.txt'
    if not os.path.exists(recoverable_path):
        print(f'ERROR: {recoverable_path} not found')
        sys.exit(1)

    functions = parse_recoverable_list(recoverable_path)
    print(f'Parsed {len(functions)} recoverable functions')

    # Group by file
    by_file = {}
    for filename, func_name, old_name in functions:
        if filename not in by_file:
            by_file[filename] = []
        by_file[filename].append((func_name, old_name))

    # Cache old file contents (as lines)
    old_contents = {}

    total_recovered = 0
    total_failed = 0

    for filename in sorted(by_file.keys()):
        funcs = by_file[filename]
        filepath = os.path.join(SRC_DIR, 'stubs', filename)

        if not os.path.exists(filepath):
            print(f'  WARNING: {filepath} not found, skipping')
            continue

        print(f'\n  Processing {filename} ({len(funcs)} functions)...')

        if filename not in old_contents:
            old_content = get_old_file_content(filename)
            old_contents[filename] = old_content.split('\n') if old_content else None
        old_lines = old_contents[filename]

        if old_lines is None:
            print(f'  WARNING: Could not get old content for {filename}')
            total_failed += len(funcs)
            continue

        with open(filepath) as f:
            lines = f.read().split('\n')

        original_len = len(lines)
        file_recovered = 0

        for func_name, old_name in funcs:
            lines, success = recover_function(lines, func_name, old_lines, old_name)
            if success:
                file_recovered += 1
                total_recovered += 1
            else:
                total_failed += 1

        if len(lines) != original_len or file_recovered > 0:
            with open(filepath, 'w') as f:
                f.write('\n'.join(lines))
            print(f'  Recovered {file_recovered}/{len(funcs)} functions in {filename}')
        else:
            print(f'  No changes to {filename}')

    print(f'\n=== Summary ===')
    print(f'Recovered: {total_recovered}')
    print(f'Failed: {total_failed}')
    print(f'Total: {total_recovered + total_failed}')


if __name__ == '__main__':
    main()
