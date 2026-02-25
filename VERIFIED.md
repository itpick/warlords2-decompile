# Byte-Verified Functions

Functions confirmed **byte-for-byte identical** to the original Warlords II binary.
A function is byte-verified when compiling its reassembled disassembly produces
the exact same machine code as the original binary.

## Counts

| Architecture | Verified | Total    | % |
|---|---|---|---|
| PPC (main binary) | 969 | 4,717 | 20.5% |
| 68k (original Mac binary) | 1,753 | ~18,000 | ~9.7% |

The PPC and 68k binaries were compiled from the **same source code**, so the 68k
verified list is also a behavioral ground-truth for PPC reconstruction.

## Files

| File | Contents |
|---|---|
| `src/stubs/blr_verified.c` | 152 PPC byte-verified functions (asm blocks) |
| `src/stubs/blr_verified_68k.c` | 1,348 68k byte-verified functions (asm blocks) |
| `tools/byte_verified_count.txt` | PPC verified count (for chart generation) |
| `tools/68k_verified_count.txt` | 68k verified count |

## Tools

- `tools/auto_verify.py` — PPC auto-verification (scans PPC Ghidra decompilations)
- `tools/68k_auto_verify.py` — 68k auto-verification (scans 68k Ghidra decompilations)
- `tools/gen_progress_chart.py` — regenerates `docs/progress_chart.png`

## What's Verified

Most verified functions are trivial (stubs, prologue-only functions):

**PPC examples**: `blr`, `li r0,0 / blr`, two-instruction utilities
**68k examples**: `rts`, `linkw %fp,#0 / unlk %fp / rts`, register save/restore stubs

Functions with calls (PPC `bl`, 68k `bsr`/`jsr`) are skipped because their
call targets encode position-dependent addresses that can't be reproduced in
a standalone object file.

## Cross-Architecture Usage

Since both binaries came from the same source, when implementing a PPC function:
1. Find the matching 68k function in `tools/68k_binary/decompiled/CODE_*.c`
2. Use the 68k Ghidra C decompilation as the behavioral reference
3. The 68k byte-verified functions confirm the decompilation is accurate
