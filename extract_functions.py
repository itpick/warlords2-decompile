#!/usr/bin/env python3
"""
Extract unimplemented functions from Ghidra decompiled output and generate
reconstructed C source files with proper type cleanup.
"""

import re
import sys
import os

def read_function_list(path):
    """Read list of function names from a file."""
    with open(path) as f:
        return set(line.strip() for line in f if line.strip())

def parse_decompiled(path):
    """Parse the decompiled C file into individual functions."""
    with open(path) as f:
        content = f.read()

    # Split on function headers
    pattern = r'// Function: (FUN_[0-9a-f]+) at [0-9a-f]+\n// Size: (\d+) bytes\n\n'
    parts = re.split(pattern, content)

    functions = {}
    i = 1  # Skip the preamble
    while i + 2 < len(parts):
        name = parts[i]
        size = int(parts[i + 1])
        body = parts[i + 2]

        # Body ends at the next function header or EOF
        # Find where the actual function body ends (double newline before next comment)
        body = body.rstrip()

        functions[name] = {
            'size': size,
            'body': body,
        }
        i += 3

    return functions

def clean_types(code):
    """Apply Ghidra type transformations to make valid C."""
    # Type replacements - order matters!
    code = re.sub(r'\bundefined8\b', 'long long', code)
    code = re.sub(r'\bundefined4\b', 'int', code)
    code = re.sub(r'\bundefined2\b', 'short', code)
    code = re.sub(r'\bundefined1\b', 'char', code)
    code = re.sub(r'\bundefined\b', 'int', code)  # catch-all for remaining 'undefined'
    code = re.sub(r'\bulonglong\b', 'unsigned long long', code)
    code = re.sub(r'\blonglong\b', 'long long', code)
    code = re.sub(r'\bushort\b', 'unsigned short', code)
    code = re.sub(r'\buint\b', 'unsigned int', code)
    code = re.sub(r'\bbool\b', 'int', code)
    code = re.sub(r'\bbyte\b', 'unsigned char', code)
    code = re.sub(r'\bdword\b', 'unsigned int', code)

    # Fix _uStackXXXX / _sStackXXXX Ghidra pseudo-variables (stack slot references)
    # Convert to local int variables by declaring them
    stack_vars = set(re.findall(r'\b(_[us]Stack[0-9a-f]+)\b', code))
    if stack_vars:
        # Find the opening brace of the function and add declarations after it
        brace_pos = code.find('{')
        if brace_pos != -1:
            decls = '\n'.join(f'  int {v};' for v in sorted(stack_vars))
            code = code[:brace_pos+1] + '\n' + decls + code[brace_pos+1:]

    # Fix _FUN_XXXXX references (function addresses used as values, not calls)
    # These are global function pointers. Replace _FUN_ with FUN_ since they refer to the same thing
    code = re.sub(r'\b_FUN_(1[0-9a-f]+)\b', r'FUN_\1', code)

    # Remove register0xXXXX references (Ghidra register pseudo-vars)
    # Replace with a dummy local var
    reg_vars = set(re.findall(r'\b(register0x[0-9a-f]+)\b', code))
    if reg_vars:
        brace_pos = code.find('{')
        if brace_pos != -1:
            decls = '\n'.join(f'  int {v};' for v in sorted(reg_vars))
            code = code[:brace_pos+1] + '\n' + decls + code[brace_pos+1:]

    # Fix PEF_Debug references (debug symbols)
    # Must handle member access BEFORE replacing with 0, to avoid "0.type" etc.
    # PEF_Debug_0x..._ADDR.member -> 0 (the whole expression becomes 0)
    code = re.sub(r'\bPEF_Debug_0x[0-9a-f_]+(?:\.\w+(?:\._\d+_\d+_)?)*\b', '0', code)
    # Catch any remaining bare PEF_Debug references
    code = re.sub(r'\bPEF_Debug_0x[0-9a-f_]+\b', '0', code)

    # Fix _DAT_ references (data labels)
    code = re.sub(r'\b_DAT_([0-9a-f]+)\b', r'(*(int*)0x\1)', code)

    # Fix function pointer casts: (*(code *)expr)() -> ((void (*)(void))expr)()
    # Also handle: (*(code *)*puRamXXXX)(args)
    code = re.sub(r'\(\*\(code \*\)(\*?[a-zA-Z_][a-zA-Z0-9_]*)\)\(([^)]*)\)',
                  r'((void (*)())\1)(\2)', code)

    # Remove Ghidra artifacts
    code = re.sub(r'\s*int \*\*ppuStack[0-9a-f]+;\s*\n', '\n', code)
    code = re.sub(r'\s*ppuStack[0-9a-f]+ = &\.TVect::OCECToRString;\s*\n', '\n', code)
    code = re.sub(r'\s*/\* WARNING:.*?\*/\s*\n', '\n', code)
    code = re.sub(r'&\.TVect::OCECToRString', '0 /* TVect base */', code)

    # Fix ppuVar declarations from Ghidra
    code = re.sub(r'\bint \*\*(ppuVar\d+)\b', r'int *\1', code)
    # Fix remaining ppuVar usage: &ppuVar[-0xNNN] -> macro
    code = re.sub(r'(ppuVar\d+)\[-0x([0-9a-f]+)\]', r'(*(int*)((char*)\1 - 0x\2))', code)

    # Clean up stack variable names
    # &stack0xNNN references need to be replaced with (char*)0 or a local var
    # The pattern &stack0x00000000 means "address of the stack frame base"
    code = re.sub(r'&stack0x00000000', '((char*)0)', code)
    code = re.sub(r'&stack0x([0-9a-f]+)', r'((char*)0 + 0x\1)', code)

    # Fix (*(code *)...) function pointer calls
    code = re.sub(r'\(\*\(void \*\)', '((void (*)(void))', code)

    # === Fix Ghidra bitfield sub-field accessors: var._OFFSET_SIZE_ ===
    # Ghidra generates e.g. local_34._0_2_ meaning "2 bytes at offset 0 in local_34"
    # For assignments: local_34._0_2_ = expr  -> (handled by CONCAT22 usage)
    # For reads: local_34._0_2_ -> ((short)((unsigned int)local_34 >> 16))  [offset 0, size 2 of a 4-byte int = high 16 bits]
    #           local_34._2_2_ -> ((short)(local_34))  [offset 2, size 2 of a 4-byte int = low 16 bits]
    # Generalized: ._0_2_ -> high short, ._2_2_ -> low short, ._0_1_ -> highest byte, etc.
    # We convert writes to no-ops (the value gets reconstructed via CONCAT22 on the next line)
    # For reads, extract the appropriate portion
    def replace_bitfield(m):
        var = m.group(1)
        offset = int(m.group(2))
        size = int(m.group(3))
        if size == 2 and offset == 0:
            return f'((short)((unsigned int){var} >> 16))'
        elif size == 2 and offset == 2:
            return f'((short){var})'
        elif size == 1 and offset == 0:
            return f'((char)((unsigned int){var} >> 24))'
        elif size == 1 and offset == 1:
            return f'((char)((unsigned int){var} >> 16))'
        elif size == 1 and offset == 2:
            return f'((char)((unsigned int){var} >> 8))'
        elif size == 1 and offset == 3:
            return f'((char){var})'
        elif size == 4 and offset == 0:
            return var  # whole value
        else:
            # Generic: shift right by (4-offset-size)*8 bits, mask to size
            shift = (4 - offset - size) * 8
            if shift > 0:
                return f'(({var} >> {shift}) & {"0xFF" if size==1 else "0xFFFF" if size==2 else "0xFFFFFFFF"})'
            else:
                return f'({var} & {"0xFF" if size==1 else "0xFFFF" if size==2 else "0xFFFFFFFF"})'

    # Handle assignment pattern: var._N_N_ = expr  -> (void)0; /* bitfield write */
    # These are always followed by a CONCAT that reconstructs the full value
    code = re.sub(r'(\w+)\._(\d+)_(\d+)_\s*=\s*([^;]+);',
                  r'/* \1._\2_\3_ = \4; */', code)
    # Handle read pattern: var._N_N_ -> extracted portion
    code = re.sub(r'(\w+)\._(\d+)_(\d+)_', replace_bitfield, code)

    # === PPC32 -> 64-bit: fix struct member access on int/long long types ===
    # Ghidra generates: var->field_0xHH (struct member access via ->)
    # When var is 'int' (PPC32 pointer), this fails on 64-bit.
    # Convert to explicit pointer arithmetic: *(int*)((char*)(long)var + 0xHH)
    # Pattern handles: simple vars, pointer deref, and nested expressions
    # field_0xHH -> offset 0xHH, assuming int-sized field
    code = re.sub(
        r'(\w+)->field_0x([0-9a-f]+)',
        r'(*(int*)((char*)(long)\1 + 0x\2))',
        code
    )
    # Also handle: (*expr)->field_0xHH patterns
    code = re.sub(
        r'\(\*(\w+)\)->field_0x([0-9a-f]+)',
        r'(*(int*)((char*)(long)(*\1) + 0x\2))',
        code
    )
    # Handle field_N (decimal) patterns: var->field0_0xHH or var->fieldN
    code = re.sub(
        r'(\w+)->field(\d+)',
        r'(*(int*)((char*)(long)\1 + \2))',
        code
    )

    # Fix (void) params -> () for Ghidra functions
    # Ghidra often decompiles functions with (void) but other code calls them with args
    # In C, () means unspecified params (accepts any), (void) means exactly zero
    code = re.sub(r'(FUN_[0-9a-f]+)\(void\)', r'\1()', code)

    # Fix _local_XX Ghidra pseudo-variables (similar to _uStack)
    local_vars = set(re.findall(r'\b(_local_[0-9a-f]+)\b', code))
    if local_vars:
        brace_pos = code.find('{')
        if brace_pos != -1:
            decls = '\n'.join(f'  int {v};' for v in sorted(local_vars))
            code = code[:brace_pos+1] + '\n' + decls + code[brace_pos+1:]

    # Fix ram0xXXXX references (raw RAM addresses from Ghidra)
    code = re.sub(r'\bram(0x[0-9a-f]+)\b', r'(*(int*)\1)', code)

    # Fix ___start reference
    code = re.sub(r'\b___start\b', '0 /* __start */', code)

    # Fix .glue::FUN_xxx() Ghidra artifacts (glue code references)
    code = re.sub(r'\.glue::(FUN_[0-9a-f]+)', r'\1', code)

    # Fix 0.unknown floating constants (Ghidra artifact for unknown float values)
    code = re.sub(r'\b(\d+)\.unknown\b', r'\1.0', code)

    # Fix FLOAT_xxx constants (Ghidra floating point representations)
    code = re.sub(r'\bFLOAT_[0-9a-f]+\b', '0.0f', code)

    return code

def generate_c_file(functions, func_names, output_path, batch_name):
    """Generate a .c file with the extracted functions."""

    # Collect all referenced external functions and globals
    extern_funs = set()
    extern_globals = set()

    for name in sorted(func_names):
        if name not in functions:
            continue
        body = functions[name]['body']
        # Find FUN_ references
        for ref in re.findall(r'FUN_[0-9a-f]+', body):
            if ref != name and ref not in func_names:
                extern_funs.add(ref)
        # Find global references
        for ref in re.findall(r'[piu]Ram[0-9a-f]+', body):
            extern_globals.add(ref)
        for ref in re.findall(r'p[isu]Ram[0-9a-f]+', body):
            extern_globals.add(ref)

    # Read wl2_globals.h to find macro-defined names (must skip extern for these)
    macro_globals = set()
    globals_h_path = os.path.join(os.path.dirname(output_path), '..', 'include', 'wl2_globals.h')
    if os.path.exists(globals_h_path):
        with open(globals_h_path) as gh:
            for line in gh:
                m = re.match(r'#define\s+([a-z][a-zA-Z0-9_]*Ram[0-9a-f]+)', line)
                if m:
                    macro_globals.add(m.group(1))

    # Also scan cleaned bodies for globals
    all_globals = set()
    for name in sorted(func_names):
        if name not in functions:
            continue
        body = clean_types(functions[name]['body'])
        # Find all global references: piRam, puRam, psRam, iRam, uRam, pdRam, pcRam, pbRam
        for ref in re.findall(r'\b([piu][cisdub]?Ram[0-9a-f]+)\b', body):
            if ref not in macro_globals:  # Skip macro-defined globals
                all_globals.add(ref)

    with open(output_path, 'w') as f:
        f.write(f'/*\n')
        f.write(f' * {os.path.basename(output_path)} - Reconstructed functions ({batch_name})\n')
        f.write(f' *\n')
        f.write(f' * Auto-extracted from Ghidra decompilation with type cleanup.\n')
        f.write(f' * {len(func_names)} functions in address range {batch_name}\n')
        f.write(f' */\n\n')
        f.write(f'#include "warlords2.h"\n\n')

        # Helper macros
        f.write('/* Helper macros for Ghidra patterns */\n')
        f.write('#ifndef CONCAT11\n')
        f.write('#define CONCAT11(hi, lo) ((unsigned short)(((unsigned short)(unsigned char)(hi) << 8) | (unsigned char)(lo)))\n')
        f.write('#endif\n')
        f.write('#ifndef CONCAT13\n')
        f.write('#define CONCAT13(hi, lo) ((unsigned int)(((unsigned int)(unsigned char)(hi) << 24) | ((unsigned int)(lo) & 0x00FFFFFF)))\n')
        f.write('#endif\n')
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

        # Write extern declarations for all referenced globals
        if all_globals:
            f.write('/* Extern declarations for Ghidra globals */\n')
            for g in sorted(all_globals):
                if g.startswith('piRam'):
                    f.write(f'extern pint *{g};\n')
                elif g.startswith('puRam'):
                    f.write(f'extern unsigned int *{g};\n')
                elif g.startswith('psRam'):
                    f.write(f'extern short *{g};\n')
                elif g.startswith('pdRam'):
                    f.write(f'extern double {g};\n')
                elif g.startswith('pbRam'):
                    f.write(f'extern unsigned char *{g};\n')
                elif g.startswith('pcRam'):
                    f.write(f'extern char *{g};\n')
                elif g.startswith('iRam'):
                    f.write(f'extern long {g};\n')
                elif g.startswith('uRam'):
                    f.write(f'extern unsigned int {g};\n')
                else:
                    f.write(f'extern int {g};\n')
            f.write('\n')

        # Write function implementations
        implemented = 0
        for name in sorted(func_names):
            if name not in functions:
                continue

            func = functions[name]
            body = clean_types(func['body'])

            f.write(f'/* Address: 0x{name[4:]} Size: {func["size"]} bytes */\n')
            f.write(body)
            f.write('\n\n')
            implemented += 1

        return implemented

def main():
    decompiled_path = '/Users/lucaspick/workspace/itpick/warlords2-decompile/warlords2_decompiled.c'
    src_dir = '/Users/lucaspick/workspace/itpick/warlords2-decompile/src/stubs'

    print("Parsing decompiled source...")
    functions = parse_decompiled(decompiled_path)
    print(f"Found {len(functions)} functions in decompiled source")

    # Read unimplemented function list
    unimplemented = read_function_list('/tmp/unimplemented_funs.txt')
    print(f"{len(unimplemented)} functions to implement")

    # Split into batches by address range using integer comparison
    batches = {
        'wave2_tvect': [],      # 0x10000000-0x1000FFFF (TVect trampolines)
        'wave2_game1': [],      # 0x10010000-0x1003FFFF (game logic)
        'wave2_game2': [],      # 0x10040000-0x1007FFFF (game logic)
        'wave2_macapp1': [],    # 0x10080000-0x100AFFFF (MacApp)
        'wave2_macapp2': [],    # 0x100B0000-0x100DFFFF (MacApp)
        'wave2_macapp3': [],    # 0x100E0000-0x100FFFFF (MacApp)
        'wave2_macapp4': [],    # 0x10100000+ (MacApp)
    }

    for name in sorted(unimplemented):
        addr_int = int(name[4:], 16)  # Parse hex address

        if addr_int < 0x10010000:
            batches['wave2_tvect'].append(name)
        elif addr_int < 0x10040000:
            batches['wave2_game1'].append(name)
        elif addr_int < 0x10080000:
            batches['wave2_game2'].append(name)
        elif addr_int < 0x100B0000:
            batches['wave2_macapp1'].append(name)
        elif addr_int < 0x100E0000:
            batches['wave2_macapp2'].append(name)
        elif addr_int < 0x10100000:
            batches['wave2_macapp3'].append(name)
        else:
            batches['wave2_macapp4'].append(name)

    total_implemented = 0
    for batch_name, func_list in sorted(batches.items()):
        if not func_list:
            continue
        output_path = os.path.join(src_dir, f'{batch_name}.c')
        count = generate_c_file(functions, set(func_list), output_path, batch_name)
        total_implemented += count
        print(f"  {batch_name}: {count}/{len(func_list)} functions -> {output_path}")

    print(f"\nTotal: {total_implemented} functions generated")

if __name__ == '__main__':
    main()
