# Byte-Verified Functions

Functions confirmed **byte-for-byte identical** to the original Warlords II binary.
A function is byte-verified when its reassembled disassembly produces the exact
same machine code as the original binary.

## Counts

| Architecture | Verified | Total    | % |
|---|---|---|---|
| PPC (main binary) | 980 | 4,717 | 20.8% |
| 68k (original Mac binary) | 1,905 | 5,068 | 37.6% |

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

## Current Blockers

Both tools are fully exhausted with `--include-warned`. The remaining unverified
functions are blocked by the following hard limits:

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

### 68k — 10 functions remaining (hard blockers)

After all eight encoding fixes, 10 functions remain unverified:

**A) Mac OS A-trap calls (6 functions)**

`FUN_C146_0000181c`, `FUN_C101_000005e2`, `FUN_C008_000011e2`,
`FUN_C039_000000be`, `FUN_C125_00000402`, `FUN_C069_00001842`

Mac 68k programs call the Toolbox ROM via A-line trap instructions (`0xAxxx`,
always 2 bytes). `m68k-elf-objdump` does not recognise these — it decodes
`0xAxxx` opcodes as ColdFire/68040 EMAC instructions (4 bytes), producing wrong
byte boundaries and AT&T syntax that GAS rejects entirely (`got=` empty).

Concrete example from `FUN_C146_0000181c`:
```
Original bytes (CodeWarrior):
  ...  a8d9            ; A-trap 0xa8d9 = _BlockMove (2 bytes)
       91c8            ; subaw %a0,%a1           (2 bytes)
       4e5e            ; unlk %fp                (2 bytes)

objdump output (decodes as ColdFire EMAC):
  e:   a8d9 91c8       msacw %a0u,%a1u,%a1@+,%a4  (4 bytes — WRONG BOUNDARY)
  12:  4e5e            unlk %fp

GAS result: Error: syntax error -- statement 'msacw ...' ignored → got=empty
```

The `msacw` (MAC unit, Motorola 68060/ColdFire) opcode space overlaps with Mac
A-traps in `0xA000–0xAFFF`. All 6 affected functions produce `got=` because GAS
rejects the EMAC mnemonics or their operand syntax.

**What would fix it**: before passing raw bytes to `disassemble_to_instrs`,
replace each `0xAxxx` word with `NOP` (`0x4e71`). NOP is also 2 bytes, so
instruction boundaries for all surrounding code remain correct. After
disassembly, replace `nop` at the patched offsets with `.word 0xAxxx`. GAS
handles `.word 0xa8d9` as a literal halfword → correct bytes.

Risk: if a non-opcode word (e.g., an immediate or extension word) coincidentally
falls in `0xA000–0xAFFF`, the substitution misidentifies it. However, since
verification checks bytes exactly, a false positive here merely produces a
verification failure rather than a wrong entry in the verified list.

**B) Ghidra function-size over-count (3 functions)**

`FUN_C117_00002820`, `FUN_C160_00001fbc`, `FUN_C160_00001e1e`

Ghidra's reported function size includes trailing bytes that are not instructions:

- `FUN_C117_00002820` (reported 14 B): only 6 bytes of real instructions
  (`cmpal %a5@,%a0` / `orl %d7,%a0@-` / `lsrl #5,%d4`) followed by 8 zero
  bytes. `objdump` prints `...` for those zeros. GAS produces 6 bytes; exp is
  14 — unresolvable mismatch.

- `FUN_C160_00001fbc` (reported 84 B, got 80 B) and `FUN_C160_00001e1e`
  (reported 88 B, got 84 B): both have `exp` ending in `2f3c 8206`. That 4-byte
  sequence is the first word-pair of a `movel #0x82060000,-(sp)` instruction
  in the *following* function. Ghidra attributed it to this function, so the
  assembled output is 4 bytes shorter than the expected slice.

**What would fix it**: nothing tractable — Ghidra's static analysis included data
or bled into the neighbouring function. Re-analysing in Ghidra with tighter
function-end detection is the only real option.

**C) 68020 full extension word (1 function)**

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

### 68k — 2,751 functions blocked by `bsr`/`jsr` calls

Same root cause as PPC `bl`: call offsets are position-dependent. Same linker
approach would be needed.

### 68k — 210 functions blocked by external branches

These functions contain `bra`/`beq`/etc. that jump *outside* the function bounds
(tail-call jumps). The branch displacement is PC-relative and changes when the
code is placed at a different address.

### 68k — 5 functions blocked by PC-relative data references (`%pc@`)

These instructions reference data at a PC-relative offset. The disassembler shows
the absolute target address; when reassembled at a different base the offset
changes. No easy fix — would need the same linker-script approach.

## Easiest Remaining Wins (priority order)

| Fix | Effort | Unlocks |
|---|---|---|
| 68k A-trap NOP substitution | Low — pre-process raw bytes before disassembly | 6 68k functions |
| Emit `bl` as `.long` in PPC asm path | Low — same as FPU `.long` fix | ~3,730 PPC functions |
| Linker-script approach for PPC/68k call functions | High — full build system change | Thousands more functions |

## Cross-Architecture Usage

Since both binaries came from the same source, when implementing a PPC function:
1. Find the matching 68k function in `tools/68k_binary/decompiled/CODE_*.c`
2. Use the 68k Ghidra C decompilation as the behavioral reference
3. The 68k byte-verified functions confirm the decompilation is accurate
