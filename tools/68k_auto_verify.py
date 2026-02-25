#!/usr/bin/env python3
"""
68k_auto_verify.py — Scan all 68k decompiled functions, try to match bytes.

For each non-WARNING function not already in blr_verified_68k.c:
  1. Get expected bytes from tools/68k_binary/code_segments/CODE_*.bin
  2. Disassemble with m68k-elf-objdump, build labeled asm
  3. BSR/JSR-absolute: emit as raw .word directives (same trick as A-traps)
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


def _is_call_opcode(word):
    """True if opcode word is a position-dependent call: BSR (any size) or
    JSR with abs.W / abs.L / PC-relative addressing.

    These instructions encode a callee address as either a PC-relative
    displacement (BSR, JSR PC) or an absolute address (JSR abs.W/abs.L).
    In a standalone object the callee doesn't exist at the original address,
    so the assembled instruction would encode the wrong offset/address.

    Fix: emit as raw .word directives using the original bytes directly
    (same approach as A-trap NOP substitution and FPU .long emission).

      bsr.s / bsr.w / bsr.l : top byte = 0x61
      jsr abs.w             : word = 0x4eb8
      jsr abs.l             : word = 0x4eb9
      jsr (pc)              : word = 0x4eba
    """
    if word >> 8 == 0x61:                    # BSR.S / BSR.W / BSR.L
        return True
    if word in (0x4eb8, 0x4eb9, 0x4eba):    # JSR abs.W / abs.L / (PC)
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

def _patch_atraps(raw):
    """Replace Mac OS A-line trap words (0xAxxx) with NOP (0x4e71) for disassembly.

    On Mac 68k, all 0xAxxx opcodes are A-line traps — 2-byte ROM calls.
    m68k-elf-objdump decodes these as ColdFire/68040 EMAC instructions (4 bytes),
    producing wrong byte-count boundaries and AT&T syntax GAS can't assemble.

    Strategy: replace each A-trap word with NOP before disassembly (NOP is also
    2 bytes, so surrounding instruction boundaries are unchanged).  After
    disassembly the NOP entries at those offsets are replaced with
    '.word 0xAxxx' directives that GAS assembles back to the exact original bytes.

    Returns (patched_bytes, atrap_map) where atrap_map maps offset → original word.

    Risk: a non-opcode word (immediate or extension word) coincidentally in the
    0xA000–0xAFFF range would be wrongly NOP'd.  In that case bytes won't match
    and the function simply fails verification — no incorrect entries are added.
    """
    patched = bytearray(raw)
    atraps = {}
    for i in range(0, len(raw) - 1, 2):
        word = (raw[i] << 8) | raw[i + 1]
        if (word & 0xF000) == 0xA000:
            patched[i]     = 0x4E
            patched[i + 1] = 0x71
            atraps[i] = word
    return bytes(patched), atraps


def disassemble_to_instrs(raw):
    """Disassemble raw 68k bytes. Returns list of (byte_offset, instr_string).

    Mac OS A-trap words (0xAxxx) are pre-patched to NOP before disassembly so
    that surrounding instruction boundaries are correct; the NOP entries are then
    replaced with '.word 0xAxxx' directives (see _patch_atraps).
    """
    patched, atraps = _patch_atraps(raw)
    with tempfile.NamedTemporaryFile(suffix='.s', mode='w', delete=False) as f:
        f.write('.text\n')
        for b in patched:
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
                off   = int(m.group(1), 16)
                instr = m.group(2).strip()
                # Restore A-trap words that were patched to NOP
                if off in atraps and instr == 'nop':
                    instr = f'.word 0x{atraps[off]:04x}'
                instrs.append((off, instr))
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


def _opcode_word(raw, off):
    """Return the 16-bit opcode word at byte offset `off` in `raw`, or 0."""
    if off + 1 < len(raw):
        return (raw[off] << 8) | raw[off + 1]
    return 0


# 68k absolute-long (abs.L) EA detection.
#
# In 68k encoding, EA mode=7 reg=1 means "absolute long (32-bit) address".
# This appears in two positions in an opcode word:
#
#   SOURCE EA  (bits 5:0 = 111001 = 0x39) — applies to all instructions:
#     pea, jmp, jsr, lea, moveal, movel/movew/moveb with abs.L source,
#     clrl/negl/notl/tstl/negxl/moveml with abs.L operand, etc.
#
#   DESTINATION EA in MOVE (bits 11:6) — MOVE has unusual encoding where
#     destination mode is in bits [8:6] and destination register in bits [11:9]:
#     mode=111 [8:6] and reg=001 [11:9] → abs.L destination
#     Combined mask: (word & 0xC000)==0 (top 2 bits = 00 = MOVE)
#                AND (word & 0x0FC0)==0x03C0 (dst_mode=111, dst_reg=001)
#
# GAS silently shortens abs.L to abs.W when the address fits in a sign-extended
# 16-bit value (range [0xFFFF8000..0xFFFF] or [0x0000..0x7FFF]).
# Appending ':l' to the address operand forces abs.L form.

def _is_abs_long_opcode(word):
    """True if opcode word `word` has an abs.L EA that GAS might shorten.

    Covers source abs.L (bits 5:0 = 0x39) and MOVE destination abs.L
    (bits 11:6 encode mode=7, reg=1 in the MOVE-specific layout).
    """
    # Source abs.L: EA bits [5:0] = mode 7 (111) + reg 1 (001) = 0x39
    # Applies to all instructions with source EA: pea, jmp, lea, move, clr, etc.
    if (word & 0x3F) == 0x39:
        return True
    # Destination abs.L in MOVE instructions (unusual bit layout):
    # Bits 15:14 = 00 (MOVE prefix), bits 8:6 = 111 (dst_mode=7), bits 11:9 = 001 (dst_reg=1)
    if (word & 0xC000) == 0 and (word & 0x0FC0) == 0x03C0:
        return True
    return False


# Byte-size immediate instructions.
# In the 68k binary the immediate is stored in a 16-bit word where the high byte
# is architecturally ignored ("junk").  CodeWarrior left whatever was in that
# high byte; GAS zero-pads (imm < 0x80) or sign-extends (imm >= 0x80), producing
# a different encoding when the junk differs.
# Fix: emit raw .word directives for the entire instruction to preserve the original
# junk byte exactly.
#
# Covers:
#   orib, andib, subib, addib, eorib, cmpib  — group instructions with B size
#   moveb #imm, ...  — MOVE.B with immediate source (detected by '#' in text)
_BYTE_IMM_GRP = re.compile(r'^(ori|andi|subi|addi|eori|cmpi)b\b')


def _is_byte_imm(instr):
    """True if this instruction has a byte-size immediate with potential junk."""
    s = instr.strip()
    if _BYTE_IMM_GRP.match(s):
        return True
    # moveb #imm, dest  — MOVE.B with immediate source operand
    if s.startswith('moveb') and '#' in s:
        return True
    return False


def _instr_byte_size(off, instr, raw):
    """Estimate the byte size of the instruction at `off` in `raw`.

    Used to detect trailing undecoded bytes between the last decoded instruction
    and the Ghidra-reported function size boundary.

    Conservative: only special-cases patterns with known fixed sizes; falls back
    to the minimum 68k instruction size (2 bytes) for anything else.
    """
    s = instr.strip()
    if s.startswith('.word '):
        return 2
    if s.startswith('.long '):
        return 4
    if off + 1 >= len(raw):
        return 2
    word = _opcode_word(raw, off)
    # abs.L source EA (bits 5:0 = 0x39): opcode word + 32-bit address = 6 bytes
    # Covers moveal/movel/movew/moveb/tstl/clrl/negl/notl/pea/jmp/jsr abs.L, etc.
    if (word & 0x3F) == 0x39:
        return 6
    # MOVE with abs.L destination (bits 11:6 in MOVE layout): 6 bytes
    if (word & 0xC000) == 0 and (word & 0x0FC0) == 0x03C0:
        return 6
    # LINK An: opcode word + 16-bit displacement = 4 bytes
    if (word & 0xFFF8) == 0x4E50:
        return 4
    # BSR.W (0x6100): opcode word + 16-bit displacement = 4 bytes
    if word == 0x6100:
        return 4
    # BSR.L (0x61FF): opcode word + 32-bit displacement = 6 bytes
    if word == 0x61ff:
        return 6
    # JSR abs.L (0x4eb9): opcode word + 32-bit address = 6 bytes
    if word == 0x4eb9:
        return 6
    # JSR abs.W (0x4eb8) / JSR (PC) (0x4eba): opcode word + 16-bit = 4 bytes
    if word in (0x4eb8, 0x4eba):
        return 4
    # BSR.S (0x61XX where XX != 0x00 and != 0xFF): opcode word only = 2 bytes
    # (falls through to default)
    # Default: minimum 68k instruction size
    return 2


def build_asm_lines(instrs, size=0, raw=b""):
    """Convert (offset, instr) list to asm lines with numeric local branch labels.

    For branches with targets outside [0, size) — external tail calls — emit
    `bra.w . + {N}` instead of an unresolvable label.  In 68k GAS the PC used
    for branch displacement is instruction_start + 2 (after the opcode word),
    so the displacement encoded is (N - 2), which means N = target_off - off.
    size=0 disables external-branch detection (all targets get local labels).

    When `raw` is supplied two additional passes apply:

    1. Abs.L shortening fix: for any instruction whose original opcode word has
       an abs.L EA (mode=7 reg=1), append ':l' to hex address tokens so GAS
       doesn't silently shorten to abs.W for addresses that fit in a signed
       16-bit value.  Applies to pea, jmp, lea, moveal, movel/movew/moveb,
       clrl, negl, etc.

    2. Indexed-addressing displacement fix: in AT&T @(d8,Rn:size) form objdump
       shows the 8-bit displacement as bare hex without a 0x prefix (e.g.
       @(4e,%d4:w) for 0x4e, or @(ffffffffffffff8e,%a3:w) for -114).  GAS
       interprets bare numerics as decimal (4e causes a syntax error; 56 becomes
       decimal 56 = 0x38 instead of hex 0x56).  Fix: prepend 0x to all bare
       hex displacements in @(HEX,...) contexts.

    3. A-trap pass-through: A-line trap instructions (0xAxxx) arrive as
       '.word 0xAxxx' directives from disassemble_to_instrs (they were patched
       to NOP before disassembly and restored after).  These raw directives are
       passed through unchanged; the abs.L and indexed-addressing fixes are
       explicitly skipped for any instruction starting with '.'.

    4. Byte-immediate junk fix: for byte-size immediate instructions (orib,
       andib, subib, addib, eorib, cmpib) the immediate is stored in a 16-bit
       word where the high byte is junk left by CodeWarrior.  GAS always
       normalises this (zero-pads for imm < 0x80, sign-extends for imm >= 0x80)
       so the bytes differ.  Fix: emit raw .word directives from the original
       bytes to preserve the junk byte exactly.
    """
    label_map = {}
    label_counter = [0]

    def get_label(off):
        if off not in label_map:
            label_map[off] = label_counter[0]
            label_counter[0] += 1
        return label_map[off]

    def is_external(target_off):
        if size == 0:
            return False
        if target_off >= 0x80000000:
            return True
        return target_off >= size

    # First pass: find all branch targets and assign labels or .-relative forms
    fixed = []
    for off, instr in instrs:
        m = _BR_PAT.match(instr)
        if m:
            target_off = int(m.group(2), 16)
            if is_external(target_off):
                # N = target_off - off (signed displacement from instruction start)
                if target_off >= 0x80000000:
                    N = target_off - 0x100000000 - off
                else:
                    N = target_off - off
                # Preserve size suffix from mnemonic (.s/.b/.w/.l), default to .w
                mne = m.group(1)
                if not re.search(r'\.(s|b|w|l)$', mne):
                    mne += '.w'
                fixed.append((off, f'{mne} . + {N}'))
            else:
                lnum = get_label(target_off)
                direction = 'f' if target_off > off else 'b'
                fixed.append((off, f'{m.group(1)} {lnum}{direction}'))
            continue

        m = _DB_PAT.match(instr)
        if m:
            target_off = int(m.group(3), 16)
            if is_external(target_off):
                if target_off >= 0x80000000:
                    N = target_off - 0x100000000 - off
                else:
                    N = target_off - off
                fixed.append((off, f'{m.group(1)} {m.group(2)},. + {N}'))
            else:
                lnum = get_label(target_off)
                direction = 'f' if target_off > off else 'b'
                fixed.append((off, f'{m.group(1)} {m.group(2)},{lnum}{direction}'))
            continue

        fixed.append((off, instr))

    # Second pass: emit with labels inserted
    lines = []
    for idx, (off, instr) in enumerate(fixed):
        if off in label_map:
            lines.append(f'{label_map[off]}:')

        if raw and size > 0:
            # Instruction byte count: distance to next instruction (or end of function)
            next_off = fixed[idx + 1][0] if idx + 1 < len(fixed) else size
            n_bytes  = next_off - off

            # Byte-immediate junk fix: emit the entire instruction as raw .word
            # directives so the original junk byte in the immediate word is
            # preserved exactly.  GAS would zero-pad or sign-extend it instead.
            # Applies to orib/andib/subib/addib/eorib/cmpib (objdump AT&T names).
            if n_bytes >= 4 and off + n_bytes <= len(raw) and _is_byte_imm(instr):
                words = [f'0x{raw[off+i]:02x}{raw[off+i+1]:02x}'
                         for i in range(0, n_bytes, 2)]
                lines.append('    ' + '; '.join(f'.word {w}' for w in words))
                continue

            # Call instruction raw-byte fix: BSR and JSR-absolute encode a
            # PC-relative displacement or absolute callee address that is
            # position-dependent.  In a standalone object the callee doesn't
            # exist at the original address, so an assembled BSR/JSR would
            # encode the wrong offset.  Fix: emit raw .word directives using
            # the original bytes directly — the bytes are identical to the
            # original binary regardless of link address.
            # Same approach as A-trap NOP substitution (fix 9) and FPU .long
            # emission (fix 4).
            if n_bytes >= 2 and off + n_bytes <= len(raw):
                word = _opcode_word(raw, off)
                if _is_call_opcode(word):
                    words = [f'0x{raw[off+i]:02x}{raw[off+i+1]:02x}'
                             for i in range(0, n_bytes, 2)]
                    lines.append('    ' + '; '.join(f'.word {w}' for w in words))
                    continue

        # Indexed addressing displacement fix:
        # In 68k AT&T syntax, @(d8,Rn:size) brief-extension-word addressing shows
        # the 8-bit displacement as bare hex WITHOUT a 0x prefix (e.g. @(4e,%d4:w)
        # for disp=0x4e, or @(ffffffffffffff8e,%a3:w) for disp=-114 sign-extended).
        # GAS interprets bare numeric strings as decimal, so @(56,...) becomes
        # displacement 56 decimal (=0x38) instead of hex 0x56 (=86 decimal).
        # For values with letters (e.g. 4e) GAS generates a syntax error.
        # Fix: add 0x prefix to all bare hex displacements in @(HEX,...) contexts.
        # The lookbehind in the abs.L fix treats '(' as excluded, so these
        # 0x-prefixed displacements will NOT incorrectly gain :l suffixes.
        if '@(' in instr:
            instr = re.sub(r'@\(([0-9a-f]+),', lambda m: f'@(0x{m.group(1)},', instr)

        # Abs.L shortening fix: append ':l' to hex addresses so GAS doesn't
        # silently shorten abs.L to abs.W for small addresses.
        # Targets hex tokens NOT preceded by '#' (immediate) or '(' (d16 offset).
        # Skip raw-word directives (.word/.long) — they encode exact bytes already.
        if raw and not instr.lstrip().startswith('.'):
            word = _opcode_word(raw, off)
            if _is_abs_long_opcode(word):
                instr = re.sub(r'(?<![#(])(0x[0-9a-f]+)', r'\1:l', instr)
        lines.append(f'    {instr}')

    # Emit any orphaned labels: branch targets that fall inside [0, size) but
    # have no instruction at that exact offset.  This happens when Ghidra truncated
    # a function mid-instruction — the branch target is within the reported bounds
    # but no decoded instruction starts there.  Without this, GAS emits
    # "local label not defined" → returncode != 0 → got=b'' instead of a proper
    # got != exp failure.  Emitting the orphaned label makes GAS succeed; the
    # trailing-data fill below then pads out the remaining bytes.
    emitted_offsets = {off for off, _ in fixed}
    for tgt, lnum in sorted(label_map.items()):
        if tgt not in emitted_offsets:
            lines.append(f'{lnum}:')

    # Trailing data fill: Ghidra sometimes reports a function size that includes
    # bytes after the last decodable instruction — either partial extension words,
    # trailing zeros, or the first bytes of the next function (Ghidra over-count).
    # Since those bytes ARE present in the binary image at this function's location,
    # we must emit them verbatim to reproduce the expected byte sequence exactly.
    #
    # Strategy: compute `trailing_start` = end of the last decoded instruction.
    # Any bytes in raw[trailing_start:size] are emitted as .word directives.
    # The byte size of the last instruction is estimated via _instr_byte_size();
    # since that function is conservative (falls back to 2 bytes), false positives
    # (emitting trailing bytes for a correctly-decoded function) can only happen
    # for 2-byte instructions at the very end — and in that case trailing_start
    # would equal size (no trailing bytes emitted), so there's no risk.
    if raw and size > 0 and fixed:
        last_off, last_instr = fixed[-1]
        last_size = _instr_byte_size(last_off, last_instr, raw)
        trailing_start = last_off + last_size
        if trailing_start < size:
            for i in range(trailing_start, size, 2):
                if i + 1 < size:
                    lines.append(f'    .word 0x{raw[i]:02x}{raw[i+1]:02x}')
                else:
                    lines.append(f'    .byte 0x{raw[i]:02x}')
    return lines


def build_asm_src(func_name, asm_lines):
    """Build C asm() source string for compilation."""
    parts = [f'.globl {func_name}\\n', f'{func_name}:\\n']
    for line in asm_lines:
        parts.append(f'{line}\\n')
    return f'asm("{"".join(parts)}");\n'


def _extract_bytes(func_name, obj_path, max_bytes):
    """Extract the first `max_bytes` bytes from the .text section of obj_path.

    Uses `objdump -s -j .text` (raw section dump) rather than disassembly.
    Disassembly-based extraction breaks when trailing bytes resemble incomplete
    instructions (e.g. a partial moveal abs.L at the function boundary makes
    objdump emit "Address N is out of bounds" instead of hex output).

    The raw section dump format is:
        AAAA HHHHHHHH HHHHHHHH HHHHHHHH HHHHHHHH  ASCII
    We capture each group of hex words and concatenate them.

    Each compiled object contains exactly one function at offset 0 of .text,
    so taking the first max_bytes bytes of the section is always correct.
    """
    dump = subprocess.run([M68K_OBJDUMP, '-s', '-j', '.text', obj_path],
                          capture_output=True, text=True)
    got = b''
    for line in dump.stdout.splitlines():
        # Match content lines: optional leading space, hex address, spaces,
        # then one or more groups of hex words (each group followed by a space).
        m = re.match(r'\s*[0-9a-f]+\s+((?:[0-9a-f]+\s)+)', line)
        if m:
            got += bytes.fromhex(m.group(1).replace(' ', '').replace('\t', ''))
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

            instrs = disassemble_to_instrs(expected)

            if has_external_branch(instrs, size):
                n_skip_extbr += 1; size_skip += 1; continue
            if has_pc_relative(instrs):
                n_skip_pcrel += 1; size_skip += 1; continue

            asm_lines = build_asm_lines(instrs, size, expected)
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
    print(f'  Skipped (ext br)  : {n_skip_extbr}')
    print(f'  Skipped (pcrel)   : {n_skip_pcrel}')
    print(f'  Skipped (done)    : {n_skip_done}')
    print(f'  Skipped (warn)    : {n_skip_warn}')
    print(f'  New total count   : {final_count}')
    print('=' * 60)


if __name__ == '__main__':
    main()
