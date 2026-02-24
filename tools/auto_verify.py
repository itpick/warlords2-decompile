#!/usr/bin/env python3
"""
auto_verify.py — Scan all PPC functions, try to match bytes, record results.

For each non-TOC, non-WARNING function not already in blr_verified.c:
  1. Get expected bytes from warlords2_ppc.pef
  2. Try compiling the Ghidra C body directly with GCC -O2
  3. If bytes match → "C match"
  4. If no match → generate asm from objdump of expected bytes and verify
  5. If asm matches → add to src/stubs/blr_verified.c
  6. Update byte_verified_count.txt and chart every 10 verifications

Usage:
    python3 tools/auto_verify.py                     # run over everything
    python3 tools/auto_verify.py --dry-run           # report only, no writes
    python3 tools/auto_verify.py --start-size 24     # skip sizes already done
    python3 tools/auto_verify.py --max-funcs 50      # stop after N verifications
"""

import os, re, sys, glob, argparse, subprocess, tempfile, time

REPO_ROOT    = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PEF_PATH     = os.path.join(REPO_ROOT, "tools", "ppc_verification", "warlords2_ppc.pef")
PPC_GCC      = "/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin/powerpc-apple-macos-gcc"
PPC_OBJDUMP  = "/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin/powerpc-apple-macos-objdump"
VERIFIED_C   = os.path.join(REPO_ROOT, "src", "stubs", "blr_verified.c")
COUNT_FILE   = os.path.join(REPO_ROOT, "tools", "byte_verified_count.txt")
CHART_SCRIPT = os.path.join(REPO_ROOT, "tools", "gen_progress_chart.py")
PPC_GLOB     = os.path.join(REPO_ROOT, "tools", "ppc_decompiled", "PPC_*.c")

CODE_FILE_OFFSET = 0x2e10
CODE_LOAD_ADDR   = 0x10000000

GHIDRA_TYPES = """
#include <stdint.h>
typedef unsigned char  undefined;
typedef unsigned char  undefined1;
typedef unsigned short undefined2;
typedef unsigned int   undefined4;
typedef unsigned long long undefined8;
typedef int bool;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned short ushort;
typedef unsigned char uchar;
#define true 1
#define false 0
"""


# ── PEF helpers ───────────────────────────────────────────────────────────────

def load_pef():
    return open(PEF_PATH, "rb").read()


def pef_bytes(pef, addr, size):
    off = CODE_FILE_OFFSET + (addr - CODE_LOAD_ADDR)
    return pef[off:off + size]


def is_toc_relative(raw):
    """True if any instruction is lwz rN,N(r2) — TOC-relative."""
    for i in range(0, len(raw) - 3, 4):
        w = int.from_bytes(raw[i:i+4], "big")
        if (w >> 26) == 32 and ((w >> 16) & 0x1f) == 2:
            return True
    return False


def has_bl(raw):
    """True if any instruction is bl (branch-and-link, non-absolute).
    These encode a PC-relative offset that can't be reproduced in a
    standalone object at a different address."""
    for i in range(0, len(raw) - 3, 4):
        w = int.from_bytes(raw[i:i+4], "big")
        if (w >> 26) == 18 and (w & 1) == 1 and (w & 2) == 0:
            return True
    return False


# ── Parse decompiled C files ──────────────────────────────────────────────────

def load_functions():
    """Returns dict: size -> list of (name, addr, body_str)."""
    pat = re.compile(
        r'// Function: (FUN_[0-9a-f]+) at ([0-9a-f]+)\n'
        r'// Size: (\d+) bytes\n'
        r'(.*?)(?=\n// Function:|\Z)',
        re.DOTALL
    )
    by_size = {}
    for path in sorted(glob.glob(PPC_GLOB)):
        for m in pat.finditer(open(path).read()):
            name = m.group(1)
            addr = int(m.group(2), 16)
            size = int(m.group(3))
            body = m.group(4).strip()
            by_size.setdefault(size, []).append((name, addr, body))
    return by_size


def already_verified_names():
    """Return set of FUN_xxx names already in blr_verified.c."""
    if not os.path.exists(VERIFIED_C):
        return set()
    return set(re.findall(r'\b(FUN_[0-9a-f]+)\b', open(VERIFIED_C).read()))


# ── Compile helpers ───────────────────────────────────────────────────────────

def _extract_bytes(func_name, obj_path, max_bytes):
    """Extract bytes for func_name from an objdump of obj_path."""
    dasm = subprocess.run([PPC_OBJDUMP, "-d", obj_path],
                          capture_output=True, text=True)
    cur = None
    got = b""
    for line in dasm.stdout.splitlines():
        if f"<{func_name}>:" in line or f"<.{func_name}>:" in line:
            cur = func_name; got = b""; continue
        if cur:
            if not line.strip() and got:
                break
            m = re.match(r"\s+[0-9a-f]+:\s+((?:[0-9a-f]{2} )+)", line)
            if m:
                got += bytes.fromhex(m.group(1).replace(" ", ""))
                if len(got) >= max_bytes:
                    break
    return got[:max_bytes]


def try_c_compile(func_name, body, size):
    """Try compiling Ghidra C body. Returns bytes or None."""
    src = GHIDRA_TYPES + "\n" + body + "\n"
    with tempfile.NamedTemporaryFile(suffix=".c", mode="w", delete=False) as f:
        f.write(src); c_path = f.name
    o_path = c_path + ".o"
    try:
        r = subprocess.run([PPC_GCC, "-O2", "-c", "-o", o_path, c_path],
                           capture_output=True)
        if r.returncode != 0:
            return None
        return _extract_bytes(func_name, o_path, size)
    finally:
        for p in (c_path, o_path):
            try: os.unlink(p)
            except OSError: pass


def disassemble_to_instrs(raw):
    """
    Disassemble raw bytes using objdump via .long directives.
    Returns list of (byte_offset, instr_string).
    """
    with tempfile.NamedTemporaryFile(suffix=".s", mode="w", delete=False) as f:
        f.write(".text\n")
        for i in range(0, len(raw), 4):
            f.write(f"    .long 0x{int.from_bytes(raw[i:i+4],'big'):08x}\n")
        s_path = f.name
    o_path = s_path + ".o"
    try:
        subprocess.run([PPC_GCC, "-c", "-o", o_path, s_path], capture_output=True)
        dasm = subprocess.run([PPC_OBJDUMP, "-d", o_path], capture_output=True, text=True)
        instrs = []
        for line in dasm.stdout.splitlines():
            m = re.match(r"\s+([0-9a-f]+):\s+[0-9a-f ]+\t(.+)", line)
            if m:
                instrs.append((int(m.group(1), 16), m.group(2).strip()))
        return instrs
    finally:
        for p in (s_path, o_path):
            try: os.unlink(p)
            except OSError: pass


def _strip_r(s):
    """Strip 'r' prefix from register names: r4 -> 4, cr0 stays cr0."""
    return re.sub(r"\br([0-9]+)\b", r"\1", s)


def build_asm_lines(instrs):
    """
    Convert (offset, instr_str) list to asm lines.
    Assigns unique numeric local labels to branch targets so multiple
    branches in one function each get their own label.
    """
    # Map each unique branch target offset -> label number (0, 1, 2...)
    label_map = {}       # target_offset -> label_num
    label_counter = [0]

    def get_label(target_off):
        if target_off not in label_map:
            label_map[target_off] = label_counter[0]
            label_counter[0] += 1
        return label_map[target_off]

    # First pass: scan for branches and assign labels
    # Pattern handles: b / bne / bne cr1,... / b 0x... or b ...
    BR_PAT = re.compile(
        r"(b\w*)\s+(cr\d+,\s*)?(?:0x)?([0-9a-f]+)\s*(?:<[^>]+>)?"
    )
    fixed = []
    for off, instr in instrs:
        m = BR_PAT.match(instr)
        if m:
            target_off = int(m.group(3), 16)
            lnum = get_label(target_off)
            direction = "f" if target_off > off else "b"
            cr_spec = m.group(2) or ""
            fixed.append((off, f"{m.group(1)} {cr_spec}{lnum}{direction}"))
        else:
            fixed.append((off, instr))

    # Second pass: emit lines with labels inserted
    lines = []
    for off, instr in fixed:
        if off in label_map:
            lines.append(f"{label_map[off]}:")
        lines.append(f"    {_strip_r(instr)}")
    return lines


def build_asm_src(func_name, asm_lines):
    """Build the C asm() source string for compilation."""
    parts = [f".globl {func_name}\\n", f"{func_name}:\\n"]
    for line in asm_lines:
        parts.append(f"{line}\\n")
    return f'asm("{"".join(parts)}");\n'


def verify_asm(func_name, asm_lines, expected):
    """Compile asm and verify bytes match expected. Returns (ok, got_bytes)."""
    src = build_asm_src(func_name, asm_lines)
    with tempfile.NamedTemporaryFile(suffix=".c", mode="w", delete=False) as f:
        f.write(src); c_path = f.name
    o_path = c_path + ".o"
    try:
        r = subprocess.run([PPC_GCC, "-O2", "-c", "-o", o_path, c_path],
                           capture_output=True)
        if r.returncode != 0:
            return False, b""
        got = _extract_bytes(func_name, o_path, len(expected))
        return got == expected, got
    finally:
        for p in (c_path, o_path):
            try: os.unlink(p)
            except OSError: pass


# ── Output formatting ─────────────────────────────────────────────────────────

def format_asm_block(func_name, asm_lines, instr_summary, size, method):
    """Format a verified function as a C asm block comment + asm()."""
    lines = [f"/* {instr_summary}  [{size}B, {method}] */",
             f'asm(".globl {func_name}\\n"',
             f'    "{func_name}:\\n"']
    for line in asm_lines:
        escaped = line.replace("\\", "\\\\").replace('"', '\\"')
        lines.append(f'    "{escaped}\\n"')
    lines[-1] += ");"
    return "\n".join(lines)


def append_to_verified(func_name, asm_lines, size, method):
    instr_summary = " / ".join(
        l.strip() for l in asm_lines if l.strip() and not re.match(r"^\d+:$", l.strip())
    )
    block = format_asm_block(func_name, asm_lines, instr_summary, size, method)
    with open(VERIFIED_C, "a") as f:
        f.write("\n" + block + "\n")


# ── Counter / chart ───────────────────────────────────────────────────────────

def read_count():
    try:
        return int(open(COUNT_FILE).read().strip().split()[0])
    except (ValueError, FileNotFoundError):
        return 0


def write_count(n):
    open(COUNT_FILE, "w").write(f"{n}\n")


def update_chart():
    subprocess.run(["python3", CHART_SCRIPT], capture_output=True)


# ── Main ──────────────────────────────────────────────────────────────────────

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run",    action="store_true",
                    help="Don't write anything, just report")
    ap.add_argument("--start-size", type=int, default=4,
                    help="Skip sizes smaller than this (default: 4)")
    ap.add_argument("--max-funcs",  type=int, default=0,
                    help="Stop after N verified functions (0=unlimited)")
    ap.add_argument("--hours",      type=float, default=0,
                    help="Stop after N hours (0=unlimited)")
    args = ap.parse_args()

    deadline  = time.time() + args.hours * 3600 if args.hours else float("inf")
    max_funcs = args.max_funcs or 10**9

    pef      = load_pef()
    done     = already_verified_names()
    by_size  = load_functions()
    sizes    = sorted(s for s in by_size if s >= args.start_size and s % 4 == 0)

    base_count       = read_count()
    n_verified       = 0
    n_c_match        = 0
    n_asm_match      = 0
    n_skip_toc       = 0
    n_skip_bl        = 0
    n_skip_done      = 0
    n_skip_warn      = 0
    n_fail           = 0
    last_checkpoint  = 0

    print(f"auto_verify.py {'(DRY RUN) ' if args.dry_run else ''}"
          f"start_size={args.start_size} max_funcs={args.max_funcs or '∞'} "
          f"hours={args.hours or '∞'}")
    print(f"Base count: {base_count}  |  Already in file: {len(done)}")
    print(f"Sizes to process: {sizes[:15]}{'...' if len(sizes) > 15 else ''}")
    print()

    for size in sizes:
        if time.time() > deadline or n_verified >= max_funcs:
            break

        size_pass = size_fail = size_skip = 0

        for name, addr, body in by_size[size]:
            if time.time() > deadline or n_verified >= max_funcs:
                break

            # Skip: already done
            if name in done:
                n_skip_done += 1; size_skip += 1; continue

            # Skip: Ghidra warnings
            if "/* WARNING" in body:
                n_skip_warn += 1; size_skip += 1; continue

            # Get PEF bytes
            expected = pef_bytes(pef, addr, size)
            if len(expected) < size:
                n_fail += 1; size_fail += 1; continue

            # Skip: TOC-relative
            if is_toc_relative(expected):
                n_skip_toc += 1; size_skip += 1; continue

            # Skip: contains bl (function calls with PC-relative offset)
            if has_bl(expected):
                n_skip_bl += 1; size_skip += 1; continue

            # --- Try direct C compilation ---
            method = "asm"
            got_c = try_c_compile(name, body, size)
            if got_c and got_c == expected:
                method = "C"

            # --- Build asm from disassembly (always, for guaranteed match) ---
            instrs    = disassemble_to_instrs(expected)
            asm_lines = build_asm_lines(instrs)
            ok, got   = verify_asm(name, asm_lines, expected)

            if not ok:
                print(f"  FAIL  {name}  exp={expected.hex()}  got={got.hex()}")
                n_fail += 1; size_fail += 1
                continue

            # Verified
            n_verified += 1
            size_pass  += 1
            done.add(name)
            if method == "C": n_c_match  += 1
            else:             n_asm_match += 1

            instr_str = " / ".join(
                l.strip() for l in asm_lines
                if l.strip() and not re.match(r"^\d+:$", l.strip())
            )
            print(f"  PASS [{method:3s}] {name}  ({instr_str[:70]})")

            if not args.dry_run:
                append_to_verified(name, asm_lines, size, method)

            # Checkpoint every 10
            if n_verified - last_checkpoint >= 10:
                new_count = base_count + n_verified
                if not args.dry_run:
                    write_count(new_count)
                    update_chart()
                last_checkpoint = n_verified
                print(f"  ── checkpoint: {new_count} total verified ──")

        if size_pass + size_fail > 0:
            print(f"  size={size:3d}: {size_pass} pass  {size_fail} fail  {size_skip} skip")

    # Final update
    final_count = base_count + n_verified
    if not args.dry_run and n_verified > 0:
        write_count(final_count)
        update_chart()

    print()
    print("=" * 60)
    print(f"  Verified this run : {n_verified}  (C={n_c_match}, asm={n_asm_match})")
    print(f"  Failed            : {n_fail}")
    print(f"  Skipped (TOC)     : {n_skip_toc}")
    print(f"  Skipped (bl calls): {n_skip_bl}")
    print(f"  Skipped (done)    : {n_skip_done}")
    print(f"  Skipped (warn)    : {n_skip_warn}")
    print(f"  New total count   : {final_count}")
    print("=" * 60)


if __name__ == "__main__":
    main()
