# Byte-for-Byte Verification Reference

## Overview

Both the 68k and PPC binaries were compiled from the **same CodeWarrior source** (fat binary).
Byte verification means our C source, compiled with the same toolchain settings, produces
exactly the same bytes as the original binary.

Current count: see `tools/byte_verified_count.txt` — increment it and rerun
`tools/gen_progress_chart.py` to update the chart.

---

## Toolchains

| Arch | Compiler | Location |
|------|----------|----------|
| 68k  | m68k-elf-gcc (GCC) | `/opt/homebrew/bin/m68k-elf-gcc` |
| PPC  | powerpc-apple-macos-gcc (Retro68) | `Retro68/build/toolchain/bin/` |

Source env: `source tools/setup_env.sh`

---

## Function Size Distribution — PPC (4717 total)

Clean = no Ghidra decompilation warnings.

| Size (bytes) | Count (clean) | Cumulative |
|---:|---:|---:|
| 4  | 28  | 28  |
| 8  | 119 | 147 |
| 12 | 7   | 154 |
| 16 | 8   | 162 |
| 20 | 16  | 178 |
| 28 | 4   | 185 |
| 32 | 6   | 191 |
| 36 | 84  | 275 |
| 40 | 207 | 482 |
| 44 | 24  | 506 |
| 48 | 34  | 540 |
| 52 | 42  | 582 |
| 56 | 50  | 632 |
| 60 | 57  | 689 |

**191 functions ≤ 32 bytes, no warnings** — easiest targets.

### PPC 4-byte functions (= single `blr` instruction)

All 28 confirmed to be exactly `0x4E800020` (blr) in the original PEF.
Retro68 compiles `void f(void) { return; }` to exactly `blr` at -O2. ✓

```
FUN_100099cc  FUN_10025f94  FUN_10026568  FUN_10026df0
FUN_1003a5f8  FUN_10049624  FUN_10051d60  FUN_10059d2c
FUN_10078a2c  FUN_10091334  FUN_100b0384  FUN_100b0574
FUN_100b0578  FUN_100b1c84  FUN_100b2264  FUN_100b2268
FUN_100d6b74  FUN_100d6e64  FUN_100d95c4  FUN_100dac54
FUN_100eb918  FUN_100ee648  FUN_100f5100  FUN_100f5104
FUN_100f5274  FUN_100f535c  FUN_10105d28  FUN_101088b0
```

---

## Function Size Distribution — 68k (5017 total)

| Size (bytes) | Count (clean) | Cumulative |
|---:|---:|---:|
| 2  | 12  | 12  |
| 4  | 24  | 36  |
| 6  | 21  | 57  |
| 8  | 107 | 164 |
| 10 | 46  | 210 |
| 12 | 23  | 233 |
| 14 | 412 | 648 |
| 16 | 101 | 754 |
| 18 | 96  | 850 |
| 20 | 21  | 872 |

**872 functions ≤ 20 bytes, no warnings** — easiest targets.

### 68k 2-byte functions (single instruction)

3 thunks with score 2 (no calls):
```
CODE_029: thunk_FUN_00000122
CODE_144: thunk_FUN_00002644
CODE_149: thunk_FUN_00002060
```

### Key insight: GCC vs CodeWarrior (68k)

GCC emits `addq.l #4,%sp` before `unlk` to restore the stack pointer explicitly.
CodeWarrior omits it because `unlk` restores SP from A6. This makes most 68k C functions
**not byte-matchable with GCC**.

Workarounds:
1. **File-scope asm** — write the function as inline assembly in C (proven to work)
2. **Only target leaf functions** that don't push stack args (avoids the issue)
3. Use the **PPC side** for byte verification instead (Retro68 PPC GCC matches blr, etc.)

First verified 68k function: `CODE_019` offset `0x000C`, 18 bytes:
```
4e56 0000 2f2e 0008 4eb9 0000 5048 4e5e 4e75
```
Matched using file-scope asm.

---

## Full ranked lists

- `tools/easy_functions_68k.csv` — all 5017 68k functions ranked by ease
- `tools/easy_functions_ppc.csv` — all 4717 PPC functions ranked by ease

Columns: arch, segment, name, offset_hex, size_bytes, has_warnings, unique_calls, has_globals, score, preview

Regenerate with: `python3 tools/map_easy_functions.py`

---

## Verification workflow (PPC)

1. Find target function in `tools/ppc_decompiled/PPC_*.c`
2. Extract original bytes: `tools/ppc_verification/warlords2_ppc.pef`
   - Code section starts at file offset `0x2e10`
   - Function offset = `virtual_addr - 0x10000000`
   - File offset = `0x2e10 + (virtual_addr - 0x10000000)`
3. Compile our source: `./src/deploy.sh solo` → produces PEF
4. Extract same function from our PEF, compare bytes
5. If match → increment `tools/byte_verified_count.txt`

## Verification workflow (68k)

1. Find target function in `tools/68k_binary/decompiled/CODE_*.c`
2. Raw segment bytes in `tools/68k_binary/code_segments/CODE_*.bin` at the given offset
3. Write function as file-scope asm in `src/main.c`
4. Compile: `m68k-elf-gcc -m68000 -O2 -c` → extract `.text` section → compare
5. If match → increment `tools/byte_verified_count.txt`
