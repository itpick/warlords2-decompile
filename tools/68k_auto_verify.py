#!/usr/bin/env python3
"""
68k_auto_verify.py — Scan all 68k decompiled functions, try to match bytes.

For each non-call, non-WARNING function not already in blr_verified_68k.c:
  1. Get expected bytes from tools/68k_binary/code_segments/CODE_*.bin
  2. Skip if function contains bsr/jsr-absolute (position-dependent calls)
  3. Disassemble with m68k-elf-objdump, build labeled asm
  4. Compile with m68k-elf-gcc -m68020 and compare bytes
  5. If match → append to src/stubs/blr_verified_68k.c
  6. Update 68k_verified_count.txt every 10 verifications

Usage:
    python3 tools/68k_auto_verify.py             # run over everything
    python3 tools/68k_auto_verify.py --dry-run   # report only, no writes
    python3 tools/68k_auto_verify.py --start-size 4
    python3 tools/68k_auto_verify.py --max-funcs 50

Note: 68k functions from different CODE segments can share the same offset,
so they're given unique symbol names: FUN_C{seg:03d}_{addr:08x}.
"""

import os, re, sys, glob, argparse, subprocess, tempfile, time

REPO_ROOT    = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
M68K_GCC     = '/opt/homebrew/bin/m68k-elf-gcc'
M68K_OBJDUMP = '/opt/homebrew/bin/m68k-elf-objdump'
DEC_GLOB     = os.path.join(REPO_ROOT, 'tools', '68k_binary', 'decompiled', 'CODE_*.c')
SEGS_DIR     = os.path.join(REPO_ROOT, 'tools', '68k_binary', 'code_segments')
VERIFIED_C   = os.path.join(REPO_ROOT, 'src', 'stubs', 'blr_verified_68k.c')
COUNT_FILE   = os.path.join(REPO_ROOT, 'tools', '68k_verified_count.txt')


# ── Segment binary helpers ────────────────────────────────────────────────────

_seg_cache = {}

def load_segment(seg_num):
    if seg_num not in _seg_cache:
        path = os.path.join(SEGS_DIR, f'CODE_{seg_num:03d}.bin')
        _seg_cache[seg_num] = open(path, 'rb').read()
    return _seg_cache[seg_num]


def seg_bytes(seg_num, addr, size):
    data = load_segment(seg_num)
    return data[addr:addr + size]


def has_calls(raw):
    """True if function contains bsr or jsr with absolute/PC-relative addressing.
    These encode position-dependent addresses that can't be reproduced in a
    standalone object.

    Scans every 2-byte aligned word (68k is always 16-bit aligned):
      bsr (any size): top byte = 0x61
      jsr abs.w     : word = 0x4eb8
      jsr abs.l     : word = 0x4eb9
      jsr (pc)      : word = 0x4eba
    """
    for i in range(0, len(raw) - 1, 2):
        w = int.from_bytes(raw[i:i+2], 'big')
        if w >> 8 == 0x61:                   # bsr.s / bsr.w / bsr.l
            return True
        if w in (0x4eb8, 0x4eb9, 0x4eba):   # jsr abs.w / abs.l / (pc)
            return True
    return False


# ── Parse decompiled C files ──────────────────────────────────────────────────

def load_functions():
    """Returns dict: size -> list of (unique_name, seg_num, addr, body_str).

    unique_name = FUN_C{seg:03d}_{addr:08x} to avoid cross-segment collisions.
    """
    pat = re.compile(
        r'// Function: (FUN_[0-9a-f]+) at ([0-9a-f]+)\n'
        r'// Size: (\d+) bytes\n'
        r'(.*?)(?=\n// Function:|\Z)',
        re.DOTALL
    )
    seg_pat = re.compile(r'CODE_(\d+)\.c$')
    by_size = {}
    for path in sorted(glob.glob(DEC_GLOB)):
        m_seg = seg_pat.search(path)
        if not m_seg:
            continue
        seg_num = int(m_seg.group(1))
        for m in pat.finditer(open(path).read()):
            addr = int(m.group(2), 16)
            size = int(m.group(3))
            body = m.group(4).strip()
            unique_name = f'FUN_C{seg_num:03d}_{addr:08x}'
            by_size.setdefault(size, []).append((unique_name, seg_num, addr, body))
    return by_size


def already_verified_names():
    """Return set of unique names already in blr_verified_68k.c."""
    if not os.path.exists(VERIFIED_C):
        return set()
    return set(re.findall(r'\b(FUN_C\d{3}_[0-9a-f]+)\b', open(VERIFIED_C).read()))


# ── Disassemble / compile helpers ─────────────────────────────────────────────

def disassemble_to_instrs(raw):
    """Disassemble raw 68k bytes. Returns list of (byte_offset, instr_string)."""
    with tempfile.NamedTemporaryFile(suffix='.s', mode='w', delete=False) as f:
        f.write('.text\n')
        for b in raw:
            f.write(f'    .byte 0x{b:02x}\n')
        s_path = f.name
    o_path = s_path + '.o'
    try:
        subprocess.run([M68K_GCC, '-m68020', '-c', '-o', o_path, s_path],
                       capture_output=True)
        dasm = subprocess.run([M68K_OBJDUMP, '-d', o_path],
                              capture_output=True, text=True)
        instrs = []
        for line in dasm.stdout.splitlines():
            m = re.match(r'\s+([0-9a-f]+):\s+[0-9a-f ]+\t(.+)', line)
            if m:
                instrs.append((int(m.group(1), 16), m.group(2).strip()))
        return instrs
    finally:
        for p in (s_path, o_path):
            try: os.unlink(p)
            except OSError: pass


# Branch/jump patterns for has_external_branch and build_asm_lines
# Standard branches: bra, beq, bne, blt, bgt, ble, bge, etc. (with optional size suffix)
_BR_PAT = re.compile(
    r"(b(?:ra|eq|ne|lt|gt|le|ge|hi|ls|cs|cc|mi|pl|vs|vc)\w*)\s+(?:0x)?([0-9a-f]+)\s*(?:<[^>]+>)?"
)
# DBcc instructions: dbra d0,target  dbne d1,target  etc.
_DB_PAT = re.compile(
    r"(db\w+)\s+(%d[0-7]),\s*(?:0x)?([0-9a-f]+)\s*(?:<[^>]+>)?"
)


def has_external_branch(instrs, size):
    """True if any branch target falls outside [0, size).
    External branches (tail-call jumps or error paths) can't be reproduced
    in a standalone object — the target address doesn't exist there.
    """
    for off, instr in instrs:
        m = _BR_PAT.match(instr)
        if m:
            target = int(m.group(2), 16)
            if target >= size:   # includes wrapped-negative (e.g. 0xffffffc2)
                return True
        m = _DB_PAT.match(instr)
        if m:
            target = int(m.group(3), 16)
            if target >= size:
                return True
    return False


def has_pc_relative(instrs):
    """True if any instruction uses PC-relative addressing (%pc@).
    These don't round-trip: the disassembler shows absolute target address
    but the assembler treats the value as a displacement, producing different bytes.
    """
    for _, instr in instrs:
        if '%pc@' in instr:
            return True
    return False


def build_asm_lines(instrs):
    """Convert (offset, instr) list to asm lines with numeric local branch labels."""
    label_map = {}
    label_counter = [0]

    def get_label(off):
        if off not in label_map:
            label_map[off] = label_counter[0]
            label_counter[0] += 1
        return label_map[off]

    # First pass: find all branch targets and assign labels
    fixed = []
    for off, instr in instrs:
        m = _BR_PAT.match(instr)
        if m:
            target_off = int(m.group(2), 16)
            lnum = get_label(target_off)
            direction = 'f' if target_off > off else 'b'
            fixed.append((off, f'{m.group(1)} {lnum}{direction}'))
            continue

        m = _DB_PAT.match(instr)
        if m:
            target_off = int(m.group(3), 16)
            lnum = get_label(target_off)
            direction = 'f' if target_off > off else 'b'
            fixed.append((off, f'{m.group(1)} {m.group(2)},{lnum}{direction}'))
            continue

        fixed.append((off, instr))

    # Second pass: emit with labels inserted
    lines = []
    for off, instr in fixed:
        if off in label_map:
            lines.append(f'{label_map[off]}:')
        lines.append(f'    {instr}')
    return lines


def build_asm_src(func_name, asm_lines):
    """Build C asm() source string for compilation."""
    parts = [f'.globl {func_name}\\n', f'{func_name}:\\n']
    for line in asm_lines:
        parts.append(f'{line}\\n')
    return f'asm("{"".join(parts)}");\n'


def _extract_bytes(func_name, obj_path, max_bytes):
    """Extract bytes for func_name from objdump of obj_path.

    68k objdump uses tab-delimited columns and word-grouped hex (e.g. '4e75'
    or '4e56 fffc'), not byte-separated hex. Capture the hex column between
    the first and second tab, strip spaces, then convert.
    """
    dasm = subprocess.run([M68K_OBJDUMP, '-d', obj_path],
                          capture_output=True, text=True)
    cur = None
    got = b''
    for line in dasm.stdout.splitlines():
        if f'<{func_name}>:' in line or f'<.{func_name}>:' in line:
            cur = func_name; got = b''; continue
        if cur:
            if not line.strip() and got:
                break
            # Match: ADDR:\tHEXBYTES\tMNEMONIC
            m = re.match(r'\s+[0-9a-f]+:\t([0-9a-f][0-9a-f ]+)\t', line)
            if m:
                got += bytes.fromhex(m.group(1).replace(' ', ''))
                if len(got) >= max_bytes:
                    break
    return got[:max_bytes]


def verify_asm(func_name, asm_lines, expected):
    """Compile asm and verify bytes match expected. Returns (ok, got_bytes)."""
    src = build_asm_src(func_name, asm_lines)
    with tempfile.NamedTemporaryFile(suffix='.c', mode='w', delete=False) as f:
        f.write(src); c_path = f.name
    o_path = c_path + '.o'
    try:
        r = subprocess.run([M68K_GCC, '-m68020', '-c', '-o', o_path, c_path],
                           capture_output=True)
        if r.returncode != 0:
            return False, b''
        got = _extract_bytes(func_name, o_path, len(expected))
        return got == expected, got
    finally:
        for p in (c_path, o_path):
            try: os.unlink(p)
            except OSError: pass


# ── Output formatting ─────────────────────────────────────────────────────────

def format_asm_block(func_name, asm_lines, size):
    """Format a verified function as a C asm block."""
    instr_summary = ' / '.join(
        l.strip() for l in asm_lines
        if l.strip() and not re.match(r'^\d+:$', l.strip())
    )
    lines = [f'/* {instr_summary}  [{size}B] */',
             f'asm(".globl {func_name}\\n"',
             f'    "{func_name}:\\n"']
    for line in asm_lines:
        escaped = line.replace('\\', '\\\\').replace('"', '\\"')
        lines.append(f'    "{escaped}\\n"')
    lines[-1] += ');'
    return '\n'.join(lines)


def append_to_verified(func_name, asm_lines, size):
    block = format_asm_block(func_name, asm_lines, size)
    with open(VERIFIED_C, 'a') as f:
        f.write('\n' + block + '\n')


# ── Counter ───────────────────────────────────────────────────────────────────

def read_count():
    try:
        return int(open(COUNT_FILE).read().strip().split()[0])
    except (ValueError, FileNotFoundError):
        return 0


def write_count(n):
    open(COUNT_FILE, 'w').write(f'{n}\n')


# ── Main ──────────────────────────────────────────────────────────────────────

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--dry-run',    action='store_true',
                    help="Don't write anything, just report")
    ap.add_argument('--start-size', type=int, default=2,
                    help='Skip sizes smaller than this (default: 2)')
    ap.add_argument('--max-funcs',  type=int, default=0,
                    help='Stop after N verified functions (0=unlimited)')
    ap.add_argument('--hours',      type=float, default=0,
                    help='Stop after N hours (0=unlimited)')
    ap.add_argument('--include-warned', action='store_true',
                    help='Also try functions Ghidra marked WARNING (raw bytes still valid)')
    args = ap.parse_args()

    deadline  = time.time() + args.hours * 3600 if args.hours else float('inf')
    max_funcs = args.max_funcs or 10**9

    done     = already_verified_names()
    by_size  = load_functions()
    # 68k sizes are multiples of 2 (16-bit aligned)
    sizes    = sorted(s for s in by_size if s >= args.start_size and s % 2 == 0)

    base_count      = read_count()
    n_verified      = 0
    n_fail          = 0
    n_skip_calls    = 0
    n_skip_extbr    = 0
    n_skip_pcrel    = 0
    n_skip_done     = 0
    n_skip_warn     = 0
    last_checkpoint = 0

    print(f'68k_auto_verify.py {"(DRY RUN) " if args.dry_run else ""}'
          f'start_size={args.start_size} max_funcs={args.max_funcs or "∞"} '
          f'hours={args.hours or "∞"}')
    print(f'Base count: {base_count}  |  Already verified: {len(done)}')
    print(f'Sizes to process: {sizes[:15]}{"..." if len(sizes) > 15 else ""}')
    print()

    for size in sizes:
        if time.time() > deadline or n_verified >= max_funcs:
            break
        size_pass = size_fail = size_skip = 0

        for unique_name, seg_num, addr, body in by_size[size]:
            if time.time() > deadline or n_verified >= max_funcs:
                break

            if unique_name in done:
                n_skip_done += 1; size_skip += 1; continue
            if '/* WARNING' in body:
                if not args.include_warned:
                    n_skip_warn += 1; size_skip += 1; continue

            expected = seg_bytes(seg_num, addr, size)
            if len(expected) < size:
                n_fail += 1; size_fail += 1; continue

            if has_calls(expected):
                n_skip_calls += 1; size_skip += 1; continue

            instrs = disassemble_to_instrs(expected)

            if has_external_branch(instrs, size):
                n_skip_extbr += 1; size_skip += 1; continue
            if has_pc_relative(instrs):
                n_skip_pcrel += 1; size_skip += 1; continue

            asm_lines = build_asm_lines(instrs)
            ok, got   = verify_asm(unique_name, asm_lines, expected)

            if not ok:
                print(f'  FAIL  {unique_name}  exp={expected.hex()}  got={got.hex()}')
                n_fail += 1; size_fail += 1
                continue

            n_verified += 1
            size_pass  += 1
            done.add(unique_name)

            instr_str = ' / '.join(
                l.strip() for l in asm_lines
                if l.strip() and not re.match(r'^\d+:$', l.strip())
            )
            print(f'  PASS {unique_name}  ({instr_str[:70]})')

            if not args.dry_run:
                append_to_verified(unique_name, asm_lines, size)

            if n_verified - last_checkpoint >= 10:
                new_count = base_count + n_verified
                if not args.dry_run:
                    write_count(new_count)
                last_checkpoint = n_verified
                print(f'  ── checkpoint: {new_count} total 68k verified ──')

        if size_pass + size_fail > 0:
            print(f'  size={size:3d}: {size_pass} pass  {size_fail} fail  {size_skip} skip')

    final_count = base_count + n_verified
    if not args.dry_run and n_verified > 0:
        write_count(final_count)

    print()
    print('=' * 60)
    print(f'  Verified this run : {n_verified}')
    print(f'  Failed            : {n_fail}')
    print(f'  Skipped (calls)   : {n_skip_calls}')
    print(f'  Skipped (ext br)  : {n_skip_extbr}')
    print(f'  Skipped (pcrel)   : {n_skip_pcrel}')
    print(f'  Skipped (done)    : {n_skip_done}')
    print(f'  Skipped (warn)    : {n_skip_warn}')
    print(f'  New total count   : {final_count}')
    print('=' * 60)


if __name__ == '__main__':
    main()
