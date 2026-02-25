# Original Compiler: Metrowerks CodeWarrior

Warlords II (April 1996 CD release) was compiled with **Metrowerks CodeWarrior**,
the dominant Mac development environment of the mid-1990s. The retail binary is a
**fat binary** containing both a 68k and a PowerPC (CFM) code image compiled from
the same C++ source.

---

## Compiler Identification

- **Macro**: `__MWERKS__` is always defined in CodeWarrior. Value encoding:
  - Pre-CW7: value is `1`
  - CW7+: value is `0xVRPP` (V=major, R=minor, PP=patch). E.g. CW 2.0 → `0x2000`
- **Not defined**: `__GNUC__`, `__MPW__`
- **Version estimate for Warlords II**: CodeWarrior Gold 7 (1995) or CW 8/9 (1996),
  since the game shipped April 1996.

---

## 68k ABI

### Integer sizes (default)

| Type | Size |
|---|---|
| `char` | 1 byte |
| `short` | 2 bytes |
| `int` | **2 bytes** (CodeWarrior 68k default — unlike MPW/GCC where `int` = 4) |
| `long` | 4 bytes |
| `pointer` | 4 bytes |

> **Critical for Ghidra analysis**: Ghidra may infer 4-byte `int` but CodeWarrior
> used 2-byte `int` by default. Check `move.w` vs `move.l` patterns in the
> disassembly to determine actual field widths.

### Struct alignment

| Pragma | Effect |
|---|---|
| `#pragma options align=mac68k` | 2-byte aligned fields (default for Toolbox structs) |
| `#pragma options align=power` | Natural PPC alignment |
| `#pragma options align=packed` | 1-byte packed |
| `#pragma options align=reset` | Restore previous setting |

Universal Headers wrap all Toolbox structs in `mac68k`/`reset` pairs.

### Calling convention (C)

- **Stack**: grows downward; A7 = SP
- **Frame pointer**: A6 (set by `LINK A6,#-N` / `UNLK A6`)
- **Global world pointer**: A5 (negative offsets = app globals, positive = jump table)
- **Parameters**: pushed right-to-left, 2-byte aligned (byte params padded to word)
- **Caller cleans stack** (C convention)
- **Return values**:
  - Integer ≤32-bit → **D0**
  - **Pointer → A0** (CodeWarrior convention; MPW/Retro68 use D0)
  - FP value → FP0 (when 68881 inline code generated)

> **Important**: Ghidra may show pointer returns in A0 — this is correct CodeWarrior
> behaviour, not a Ghidra error. MPW and Retro68 use D0 instead.

### Register save/restore

| Register | Role |
|---|---|
| D0, D1 | Caller-saved (scratch). D0 = integer return value. |
| A0, A1 | Caller-saved (scratch). A0 = pointer return value (CW). |
| D2–D7 | **Callee-saved** (preserved by called function) |
| A2–A6 | **Callee-saved**. A6 = frame pointer. |
| A7 | Stack pointer |
| A5 | Global world pointer (always preserved) |

### Inter-segment calls (CODE jump table)

- `CODE 0` resource = jump table header (not executable)
- Jump table entry: 8 bytes — `MOVE.W #seg_num, -(SP)` + `_LoadSeg` (unloaded)
  or `JMP absolute_address` (loaded)
- **Intra-segment**: direct `JSR` to function address
- **Inter-segment**: `JSR offset(A5)` — offsets A5 = positive → jump table
- Ghidra labels inter-segment calls as `func_0x0000XXXX` where XXXX is the
  jump table offset (not an absolute address)

---

## PowerPC ABI (CFM)

### Code structure

- PPC code lives in the **data fork** as a Code Fragment Manager (CFM) container
- 68k code lives in the **resource fork** (CODE resources)
- Fat binary: both in one file; OS picks the appropriate image at launch
- **RTOC (R2)**: Table of Contents pointer — equivalent to A5 for 68k. Points to
  the fragment's global data. Must be preserved across CFM inter-fragment calls.

### Calling convention

| Register | Role |
|---|---|
| R1 | Stack pointer (always valid) |
| R2 | RTOC — global data pointer (CFM fragment) |
| R3–R10 | First 8 integer/pointer arguments; R3 = return value |
| R11–R12 | Scratch |
| R13 | Reserved (system) |
| R14–R31 | **Non-volatile** (callee-saved) |
| FP0–FP13 | Volatile |
| FP14–FP31 | Non-volatile |

- Stack **16-byte aligned** before every `bl`
- Minimum **32-byte parameter save area** always allocated
- Saved LR stored at **SP+8** in caller's frame

### PPC function prolog/epilog pattern

```asm
; Prolog
stwu  r1, -N(r1)      ; allocate frame + save old SP
mflr  r0              ; move LR to r0
stw   r0, N+8(r1)     ; save LR at caller's SP+8

; Epilog
lwz   r0, N+8(r1)     ; restore LR
mtlr  r0
addi  r1, r1, N       ; deallocate frame
blr                   ; return
```

---

## Mixed Mode (68k ↔ PPC interop)

- **Universal Procedure Pointer (UPP)**: on 68k = plain `ProcPtr`; on PPC = pointer
  to a `RoutineDescriptor` heap block (~32 bytes)
- `NewRoutineDescriptor()` / `BUILD_ROUTINE_DESCRIPTOR()` create descriptors
- `CallUniversalProc()` executes a UPP, performing mode switch automatically
- Mixed Mode Manager marshals parameters between PPC registers and 68k stack
- GPR1 = both PPC stack pointer and 68k A7 in the 68k emulator

---

## Key Differences vs MPW / GCC / Retro68

| Topic | CodeWarrior (68k Mac) | MPW / GCC / Retro68 |
|---|---|---|
| Pointer return register | **A0** | D0 |
| Default `int` size | **2 bytes** | 4 bytes |
| Struct alignment default | mac68k (2-byte) | varies |
| Jump table calls | `JSR offset(A5)` | same (Mac-specific) |
| Pascal UPP constant | `kThinkCStackBased` | `kCStackBased` |
| Compiler ID macro | `__MWERKS__` | `__GNUC__` / `__MPW__` |

---

## Implications for This Decompilation

1. **Byte-junk in byte-size immediates**: `ANDI.B #imm` stores immediate in the
   low byte of a 16-bit word; the high byte is architecturally ignored. CodeWarrior
   left garbage in that byte; modern GAS zero-pads. Fix: emit raw `.word` for those
   instructions (fix #7 in `tools/68k_auto_verify.py`).

2. **A-trap encoding**: CodeWarrior emits `0xAxxx` words directly for Toolbox calls.
   Modern `m68k-elf-objdump` misidentifies them as ColdFire EMAC (4-byte). Fix:
   NOP substitution before disassembly (fix #9).

3. **abs.L vs abs.W**: CodeWarrior always emits abs.L (6-byte) form for absolute
   addresses, even those that fit in 16-bit abs.W. GAS silently shortens. Fix:
   append `:l` to address tokens (fix #6).

4. **Pointer returns in A0**: when Ghidra shows a function with return value through
   A0, that is a pointer return per CodeWarrior convention — correct behaviour.

5. **2-byte `int`**: struct fields that Ghidra shows as `short` may actually be
   declared `int` in the original source; the binary is the same.

6. **CFM TOC offsets**: PPC byte verification skips the C-compile path for
   `lwz rN, X(r2)` (TOC-relative loads) because the compiler assigns different
   offsets. The asm path emits the original literal displacement directly.

---

## References

- Apple Developer Docs — *Porting to the Power Macintosh*
- Apple — *Mac OS Runtime Architectures* (PDF)
- Retro68 project — `pointers_in_D0` vs `pointers_in_A0` commit
- Metrowerks `__MWERKS__` macro encoding (SourceForge predef wiki)
- *Variations on the 68000 ABI* (Bumbershoot Software)
- Mixed Mode Manager technical note (MIT mirror of Apple DevDocs)
