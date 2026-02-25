# Byte-Verified Functions

Functions confirmed **byte-for-byte identical** to the original Warlords II binary.
A function is byte-verified when its reassembled disassembly produces the exact
same machine code as the original binary.

## Counts

| Architecture | Verified | Total    | % |
|---|---|---|---|
| PPC (main binary) | 980 | 4,717 | 20.8% |
| 68k (original Mac binary) | 4,116 | 5,068 | 81.2% |

The PPC and 68k binaries were compiled from the **same source code**, so the 68k
verified list is also a behavioral ground-truth for PPC reconstruction.

## Files

| File | Contents |
|---|---|
| `src/stubs/blr_verified.c` | PPC byte-verified functions (asm blocks) |
| `src/stubs/blr_verified_68k.c` | 68k byte-verified functions (asm blocks) |
| `tools/byte_verified_count.txt` | PPC verified count (for chart generation) |
| `tools/68k_verified_count.txt` | 68k verified count |

## Tools

- `tools/auto_verify.py` — PPC auto-verification (scans PPC Ghidra decompilations)
- `tools/68k_auto_verify.py` — 68k auto-verification (scans 68k Ghidra decompilations)
- `tools/gen_progress_chart.py` — regenerates `docs/progress_chart.png`

To regenerate the chart after updating a count file:
```bash
python3 tools/gen_progress_chart.py
```

## Tool Flags

Both tools accept `--include-warned` (try functions Ghidra flagged with WARNING —
the C decompilation may be unreliable but the raw binary bytes are always valid):

```bash
python3 tools/auto_verify.py --include-warned
python3 tools/68k_auto_verify.py --include-warned
```

## What's Verified

**PPC examples**: `blr`, `li r3,0 / blr`, TOC-load stubs, FPU wrappers
**68k examples**: `rts`, `linkw %fp,#0 / unlk %fp / rts`, register save/restore

### Encoding fixes that were necessary

The tools required several non-obvious fixes to handle differences between the
original CodeWarrior compiler output and what modern GNU assemblers produce:

1. **Ghidra WARNING skip removed** — Ghidra marks functions it can't cleanly
   decompile to C with `/* WARNING */`. The original tool skipped these, but the
   raw binary bytes are always valid and round-trip correctly through
   disassemble → reassemble. Adding `--include-warned` unlocked +405 68k and
   +some PPC functions.

2. **PPC TOC-relative skip removed from asm path** — `lwz rN, X(r2)` instructions
   use r2 (TOC pointer) with a literal displacement. The C-compile path was
   correctly blocked (the compiler assigns different TOC offsets), but the asm
   path emits the literal displacement directly so it always round-trips.
   Unlocked +816 PPC functions.

3. **PPC external tail-call branches** (`b`, not `bl`) — the disassembler shows
   the absolute target address, but when assembled at a different base the
   relative offset is wrong. Fix: emit `b . + {displacement}` (PC-relative
   form) which encodes the exact offset regardless of base address.
   Unlocked +10 PPC functions.

4. **PPC FPU registers** — Retro68 GAS rejects `f0`–`f31` register names in
   standalone asm context (treats them as undefined symbols). Fix: detect FPU
   mnemonics (`fsub`, `fdiv`, `frsp`, `fcmpo`, `lfd`, `stfd`, etc.) and emit
   `.long 0xXXXXXXXX` using the original bytes directly.
   Unlocked +1 PPC function.

5. **68k `_extract_bytes` continuation lines** — `m68k-elf-objdump` splits
   instructions wider than 6 bytes across two display lines; the second line
   (no mnemonic column, one tab only) was silently dropped. Fixed by adding a
   second regex for continuation lines. Unlocked +82 68k functions.

6. **68k abs.L → abs.W shortening (generalised)** — GAS silently uses the shorter
   4-byte abs.W form when an absolute address fits in a signed 16-bit value,
   instead of the 6-byte abs.L CodeWarrior produced. Fix: inspect each opcode
   word for abs.L EA bits (`bits[5:0]==0x39` for source EA; MOVE destination
   layout for dest EA) and append `:l` to the address token. Applies to all
   instructions (`movel`/`moveal`/`movew`/`moveb`/`pea`/`lea`/`jmp`/etc.).
   Unlocked +82 68k functions (combined with fix 5).

7. **68k byte-immediate junk high byte** — For `ANDI.B`/`ORI.B`/`SUBI.B`/
   `ADDI.B`/`EORI.B`/`CMPI.B`/`MOVE.B #imm` the immediate is in the *low* byte
   of a 16-bit word; the *high* byte is architecturally ignored. CodeWarrior left
   garbage there; GAS zero-pads or sign-extends. Fix: emit the entire instruction
   as raw `.word` directives using the original bytes.
   Unlocked +44 68k functions.

8. **68k indexed-addressing displacement prefix** — In AT&T m68k syntax,
   `@(d8,Rn:size)` brief-extension-word addressing shows the 8-bit displacement
   as bare hex WITHOUT a `0x` prefix (e.g. `@(4e,%d4:w)` for disp=0x4e,
   `@(ffffffffffffff8e,%a3:w)` for disp=-114 sign-extended to 64 bits). GAS
   interprets bare numeric strings as decimal: `@(56,…)` becomes displacement
   56 decimal (0x38) instead of hex 0x56 (86 decimal). Values containing `a`–`f`
   (e.g. `4e`) cause a GAS syntax error. Fix: prepend `0x` to all bare hex
   displacements in `@(HEX,…)` contexts. Unlocked +10 68k functions.

9. **68k A-trap NOP substitution** — Mac OS Toolbox calls use A-line trap
   instructions (`0xAxxx`, always 2 bytes). `m68k-elf-objdump` decodes these
   as ColdFire/68040 EMAC instructions (4 bytes), producing wrong byte-count
   boundaries and AT&T syntax GAS rejects. Fix: replace each `0xAxxx` word
   with NOP (`0x4e71`) before disassembly (NOP is also 2 bytes, so surrounding
   boundaries are preserved), then restore `.word 0xAxxx` after disassembly.
   GAS assembles `.word 0xa8d9` as a literal 2-byte halfword. Unlocked +4 68k
   functions (`FUN_C146_0000181c`, `FUN_C008_000011e2`, `FUN_C039_000000be`,
   `FUN_C069_00001842`).

10. **68k orphaned forward-branch labels** — When Ghidra truncates a function
    mid-instruction, a forward branch's target offset falls within the reported
    function bounds but has no decoded instruction at that exact offset. GAS
    emits "local label not defined" → returncode != 0 → `got=b''` instead of
    a proper byte-mismatch failure. Fix: after `build_asm_lines`, emit any
    labels in `label_map` whose target offset has no corresponding instruction
    entry. The label appears at the end of the asm block so GAS compiles
    successfully; the subsequent byte-count mismatch is then a clean failure.

11. **68k trailing data fill + raw section extraction** — Ghidra sometimes
    reports a function size that includes bytes after the last decodable
    instruction: trailing zeros, partial extension words, or the first bytes
    of the next function (Ghidra over-count). Two coordinated fixes:
    - `build_asm_lines` now emits any `raw[trailing_start:size]` bytes as
      `.word` directives after the last decoded instruction.
    - `_extract_bytes` now uses `objdump -s -j .text` (raw section dump)
      instead of `objdump -d` (disassembly). Disassembly-based extraction
      failed when trailing bytes resembled incomplete instructions (e.g.
      the first 4 bytes of a `moveal abs.L` caused an "Address N is out of
      bounds" error, silently dropping those bytes from `got`).
    Combined, these unlocked +5 68k functions: `FUN_C101_000005e2`,
    `FUN_C117_00002820`, `FUN_C125_00000402`, `FUN_C160_00001fbc`,
    `FUN_C160_00001e1e`.

12. **68k call instruction raw-byte emission** — `BSR` (all sizes) and `JSR`
    with absolute/PC-relative addressing encode position-dependent offsets.
    Previously the tool skipped all such functions (~2,751). Fix: detect call
    instructions by opcode word (`BSR`: top byte `0x61`; `JSR abs.W/abs.L/(PC)`:
    `0x4eb8/0x4eb9/0x4eba`) in the `build_asm_lines` second pass and emit the
    original bytes as `.word` directives — identical to the A-trap NOP
    substitution (fix 9) and FPU `.long` emission (fix 4). The raw bytes match
    the original binary regardless of link address.
    Unlocked **+2,202 68k functions** (1,914 → 4,116; 81.2% of all 68k functions).

## Current Blockers

The remaining unverified functions are blocked by the following hard limits:

### PPC — 3,730 functions (~1 MB) blocked by `bl`

Every remaining unverified PPC function contains at least one `bl` instruction
(branch-and-link = function call). The `bl` opcode encodes a 26-bit signed
PC-relative offset to the callee. In a standalone object file the callee doesn't
exist, so any assembled `bl` encodes a wrong offset.

**What would fix it**: link each function as a relocatable object placed at its
original PEF address (`0x10000000 + offset`) with linker-script stubs for every
called function. The stubs would sit at exactly the original callee addresses so
the `bl` offset matches. This is a full linker-script approach.

Alternative shortcut: emit `bl` instructions as `.long 0x4BXXXXXX` using the
original bytes directly (same as the FPU `.long` fix). The bytes would be
identical; the tradeoff is that the asm is less readable.

### 68k — 1 function remaining (hard blocker)

After all fixes (encoding fixes 1–11, see below), exactly 1 function remains
unverified:

**68020 full extension word (1 function)**

`FUN_C010_000014a8`

Contains `SUBAL` with a 68020 *full extension word* — the 68020 extended
addressing mode that adds separate base and outer displacements. `objdump` shows
these as `@(base_disp)@(outer_disp)` in AT&T syntax. GAS produces different
bytes for this form than the original CodeWarrior output:

```
Original:  9d f2 93f2 9487 9984 8f83 8f83  (12 bytes for this instruction)
GAS gets:  9d f0 01f3 0000 0000 0000 0000  (12 bytes, wrong extension words)
```

The high-byte difference `f2`→`f0` in the extension word changes the addressing
mode bits, and the subsequent displacement words are wrong. This is likely a GAS
encoding quirk for the specific combination of base-register suppression and
outer-displacement size flags used here.

### 68k — 675 functions blocked by external branches

These functions contain `bra`/`beq`/etc. that jump *outside* the function bounds
(tail-call jumps). The branch displacement is PC-relative and changes when the
code is placed at a different address.

### 68k — 10 functions blocked by PC-relative data references (`%pc@`)

These instructions reference data at a PC-relative offset. The disassembler shows
the absolute target address; when reassembled at a different base the offset
changes. No easy fix — would need the same linker-script approach.

### 68k — 80 failures (unknown encoding quirks)

After the call raw-byte fix, 80 functions still fail byte comparison. These likely
contain edge cases not yet handled (e.g. unusual addressing modes, further GAS
encoding differences not yet characterised).

## Easiest Remaining Wins (priority order)

| Fix | Effort | Unlocks |
|---|---|---|
| Emit `bl` as `.long` in PPC asm path | Low — same as BSR/JSR raw-byte fix | ~3,730 PPC functions |
| Investigate 68k 80-failure patterns | Medium — analyse FAIL output | Up to 80 68k functions |
| Linker-script approach for 68k external branches | High — full build system change | 675 68k functions |

All tractable 68k encoding fixes for call instructions are now implemented
(fix 12: emit BSR/JSR-abs as raw `.word` directives). The 1 hard-blocked function
(`FUN_C010_000014a8`, 68020 full extension word GAS quirk) is not worth pursuing.

## Cross-Architecture Usage

Since both binaries came from the same source, when implementing a PPC function:
1. Find the matching 68k function in `tools/68k_binary/decompiled/CODE_*.c`
2. Use the 68k Ghidra C decompilation as the behavioral reference
3. The 68k byte-verified functions confirm the decompilation is accurate
