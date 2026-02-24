#!/usr/bin/env python3
"""
verify_blr_functions.py — Verify the 28 four-byte PPC functions are byte-identical.

For each function:
  1. Extract expected bytes from original warlords2_ppc.pef
  2. Compile a stub with Retro68 and extract compiled bytes
  3. Compare — report PASS / FAIL

Run from repo root:
    python3 tools/verify_blr_functions.py
"""

import os, re, struct, subprocess, tempfile, glob

REPO_ROOT   = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PEF_PATH    = os.path.join(REPO_ROOT, "tools", "ppc_verification", "warlords2_ppc.pef")
PPC_GCC     = "/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin/powerpc-apple-macos-gcc"
PPC_OBJDUMP = "/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin/powerpc-apple-macos-objdump"
VERIFIED_FILE = os.path.join(REPO_ROOT, "tools", "byte_verified_count.txt")

BLR = b"\x4e\x80\x00\x20"
PEF_CODE_SECTION_OFFSET = 0x2e10   # containerOffset of code section (kind=0)
PEF_LOAD_BASE           = 0x10000000

# The 28 four-byte PPC functions
BLR_FUNCTIONS = [
    ("PPC_0001", "FUN_100099cc", 0x100099cc),
    ("PPC_0001", "FUN_10025f94", 0x10025f94),
    ("PPC_0001", "FUN_10026568", 0x10026568),
    ("PPC_0001", "FUN_10026df0", 0x10026df0),
    ("PPC_0002", "FUN_1003a5f8", 0x1003a5f8),
    ("PPC_0002", "FUN_10049624", 0x10049624),
    ("PPC_0002", "FUN_10051d60", 0x10051d60),
    ("PPC_0002", "FUN_10059d2c", 0x10059d2c),
    ("PPC_0003", "FUN_10078a2c", 0x10078a2c),
    ("PPC_0003", "FUN_10091334", 0x10091334),
    ("PPC_0004", "FUN_100b0384", 0x100b0384),
    ("PPC_0004", "FUN_100b0574", 0x100b0574),
    ("PPC_0004", "FUN_100b0578", 0x100b0578),
    ("PPC_0004", "FUN_100b1c84", 0x100b1c84),
    ("PPC_0004", "FUN_100b2264", 0x100b2264),
    ("PPC_0004", "FUN_100b2268", 0x100b2268),
    ("PPC_0006", "FUN_100d6b74", 0x100d6b74),
    ("PPC_0006", "FUN_100d6e64", 0x100d6e64),
    ("PPC_0006", "FUN_100d95c4", 0x100d95c4),
    ("PPC_0006", "FUN_100dac54", 0x100dac54),
    ("PPC_0007", "FUN_100eb918", 0x100eb918),
    ("PPC_0007", "FUN_100ee648", 0x100ee648),
    ("PPC_0008", "FUN_100f5100", 0x100f5100),
    ("PPC_0008", "FUN_100f5104", 0x100f5104),
    ("PPC_0008", "FUN_100f5274", 0x100f5274),
    ("PPC_0008", "FUN_100f535c", 0x100f535c),
    ("PPC_0008", "FUN_10105d28", 0x10105d28),
    ("PPC_0008", "FUN_101088b0", 0x101088b0),
]

# ── 1. Extract bytes from original PEF ────────────────────────────────────────
pef_data = open(PEF_PATH, "rb").read()

print("Checking original PEF bytes:")
pef_results = {}
for chunk, name, vaddr in BLR_FUNCTIONS:
    file_off = PEF_CODE_SECTION_OFFSET + (vaddr - PEF_LOAD_BASE)
    raw = pef_data[file_off : file_off + 4]
    ok = raw == BLR
    pef_results[name] = (ok, raw.hex())
    status = "OK " if ok else "FAIL"
    print(f"  {status}  {name}  @ 0x{vaddr:08x}  bytes={raw.hex()}")

pef_ok = sum(v[0] for v in pef_results.values())
print(f"\n  PEF: {pef_ok}/{len(BLR_FUNCTIONS)} are blr (0x4e800020)")

# ── 2. Compile stubs and verify Retro68 output ────────────────────────────────
print("\nCompiling stubs with Retro68 and verifying output:")

# Write a C file with all 28 functions
c_src = "/* Auto-generated: 28 blr-only void functions */\n"
for _, name, _ in BLR_FUNCTIONS:
    c_src += f"\nvoid {name}(void) {{ return; }}\n"

compile_results = {}
with tempfile.TemporaryDirectory() as tmpdir:
    src_path = os.path.join(tmpdir, "blr_test.c")
    obj_path = os.path.join(tmpdir, "blr_test.o")
    open(src_path, "w").write(c_src)

    result = subprocess.run(
        [PPC_GCC, "-O2", "-c", src_path, "-o", obj_path],
        capture_output=True, text=True
    )
    if result.returncode != 0:
        print(f"  COMPILE ERROR: {result.stderr}")
        exit(1)

    # Disassemble and parse
    dasm = subprocess.run(
        [PPC_OBJDUMP, "-d", obj_path],
        capture_output=True, text=True
    )

    # Parse objdump output: look for each function symbol and its first instruction
    # Format: "NNNNNNNN <.FUN_...>:" then "   0:  4e 80 00 20  blr"
    func_re = re.compile(r'^[0-9a-f]+ <\.?(\w+)>:')
    instr_re = re.compile(r'^\s+[0-9a-f]+:\s+((?:[0-9a-f]{2} )+)')
    current_func = None
    first_instr = {}
    for line in dasm.stdout.splitlines():
        fm = func_re.match(line)
        if fm:
            current_func = fm.group(1)
            continue
        if current_func and current_func not in first_instr:
            im = instr_re.match(line)
            if im:
                bytes_str = im.group(1).strip()
                first_instr[current_func] = bytes.fromhex(bytes_str.replace(" ", ""))

    for _, name, _ in BLR_FUNCTIONS:
        got = first_instr.get(name, b"")
        ok = got[:4] == BLR
        compile_results[name] = (ok, got[:4].hex() if got else "missing")
        status = "OK " if ok else "FAIL"
        print(f"  {status}  {name}  compiled={got[:4].hex() if got else 'missing'}")

compile_ok = sum(v[0] for v in compile_results.values())
print(f"\n  Compiled: {compile_ok}/{len(BLR_FUNCTIONS)} produce blr")

# ── 3. Final verdict ──────────────────────────────────────────────────────────
all_pass = all(pef_results[n][0] and compile_results[n][0] for _, n, _ in BLR_FUNCTIONS)
print(f"\n{'='*60}")
if all_pass:
    print(f"  ALL {len(BLR_FUNCTIONS)} FUNCTIONS VERIFIED  ✓")
    # Read current count and increment
    cur = 0
    if os.path.exists(VERIFIED_FILE):
        try:
            cur = int(open(VERIFIED_FILE).read().strip().splitlines()[0])
        except (ValueError, IndexError):
            pass
    new_count = cur + len(BLR_FUNCTIONS)
    open(VERIFIED_FILE, "w").write(f"{new_count}\n")
    print(f"  byte_verified_count.txt updated: {cur} → {new_count}")
else:
    failed = [n for _, n, _ in BLR_FUNCTIONS
              if not (pef_results[n][0] and compile_results[n][0])]
    print(f"  FAILED: {failed}")
print(f"{'='*60}")
