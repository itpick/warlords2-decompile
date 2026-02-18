#!/usr/bin/env python3
"""Fix forward declarations in recovered_stubs.c"""
import re

with open("src/stubs/recovered_stubs.c") as f:
    content = f.read()

fwd_start = content.find("/* Forward declarations */")
if fwd_start == -1:
    print("No forward declarations section found")
    exit(1)

impl_start = content.find("/* Address:", fwd_start + 1)
if impl_start == -1:
    print("No implementations section found")
    exit(1)

search_content = content[impl_start:]
func_sigs = []
seen = set()
for m in re.finditer(r"^(\w[\w\s\*]*?)\s+(FUN_[0-9a-f]+)\s*\(([^)]*)\)\s*\{", search_content, re.MULTILINE):
    n = m.group(2)
    if n not in seen:
        seen.add(n)
        func_sigs.append(f"{m.group(1).strip()} {n}({m.group(3).strip()});")

fwd_block = "/* Forward declarations */\n" + "\n".join(func_sigs) + "\n\n"
new_content = content[:fwd_start] + fwd_block + content[impl_start:]
with open("src/stubs/recovered_stubs.c", "w") as f:
    f.write(new_content)
print(f"recovered_stubs.c: {len(func_sigs)} forward declarations")
