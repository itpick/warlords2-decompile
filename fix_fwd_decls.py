#!/usr/bin/env python3
"""Regenerate forward declarations in wave2 files.

Removes ALL content between the macro #endif block and the extern/address
sections, then inserts fresh forward declarations.
"""

import re
import os

SRC_DIR = 'src'
wave2_files = [
    'stubs/wave2_tvect.c',
    'stubs/wave2_game1.c', 'stubs/wave2_game2.c',
    'stubs/wave2_macapp1.c', 'stubs/wave2_macapp2.c',
    'stubs/wave2_macapp3.c', 'stubs/wave2_macapp4.c',
]

for wf in wave2_files:
    filepath = os.path.join(SRC_DIR, wf)
    with open(filepath) as f:
        content = f.read()

    # Find the end of the macro section (last #endif in the header area)
    # The macros end with #endif for SUB42
    macro_end = content.find('#endif\n', content.find('#ifndef SUB42'))
    if macro_end == -1:
        print(f'{wf}: cannot find macro section end')
        continue
    macro_end = content.index('\n', macro_end) + 1  # include the newline

    # Find the start of real content (extern declarations or function definitions)
    # Look for either "/* Extern declarations" or "/* Address:" - whichever comes first
    extern_start = content.find('/* Extern declarations for Ghidra globals */', macro_end)
    address_start = content.find('/* Address:', macro_end)

    if extern_start == -1 and address_start == -1:
        print(f'{wf}: cannot find content start')
        continue

    if extern_start == -1:
        content_start = address_start
    elif address_start == -1:
        content_start = extern_start
    else:
        content_start = min(extern_start, address_start)

    # Remove broken .debug::__start function if present
    content = re.sub(
        r'// Function: __start.*?\n\}',
        '/* __start removed - PEF entry point */\n',
        content,
        flags=re.DOTALL
    )

    # Find ALL function definitions (real + stubbed)
    # Only look in the content AFTER the insertion point
    func_sigs = []
    seen = set()
    search_content = content[content_start:]
    for m in re.finditer(r'^(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\s*\(([^)]*)\)\s*[\n{]', search_content, re.MULTILINE):
        ret_type = m.group(1).strip()
        name = m.group(2)
        params = m.group(3).strip()
        if name not in seen:
            seen.add(name)
            func_sigs.append(f'{ret_type} {name}({params});')

    # Build new content: macros + forward decls + rest
    fwd_block = '\n/* Forward declarations to avoid conflicting types */\n'
    for sig in func_sigs:
        fwd_block += sig + '\n'
    fwd_block += '\n'

    new_content = content[:macro_end] + fwd_block + content[content_start:]
    with open(filepath, 'w') as f:
        f.write(new_content)
    print(f'{wf}: {len(func_sigs)} forward declarations')
