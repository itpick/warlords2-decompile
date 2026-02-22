#!/usr/bin/env python3
"""PPC Disassembler for Warlords II code verification.
Reads /tmp/wl2_code.bin and disassembles PPC instructions at given Ghidra addresses.
Offset mapping: file_offset = ghidra_address - 0x10000000
"""

import struct
import sys
from capstone import *

BASE_ADDR = 0x10000000

def load_binary(path="/tmp/wl2_code.bin"):
    with open(path, "rb") as f:
        return f.read()

def disassemble_function(data, ghidra_addr, max_instructions=200, label=None):
    """Disassemble PPC code starting at ghidra_addr.
    Stops at blr (return) or after max_instructions.
    """
    offset = ghidra_addr - BASE_ADDR
    if offset < 0 or offset >= len(data):
        print(f"ERROR: offset 0x{offset:x} out of range (file size 0x{len(data):x})")
        return []

    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
    md.detail = True

    # Extract a generous chunk
    chunk = data[offset:offset + max_instructions * 4]

    if label:
        print(f"\n{'='*70}")
        print(f"  {label}")
        print(f"  Ghidra addr: 0x{ghidra_addr:08x}  File offset: 0x{offset:x}")
        print(f"{'='*70}")

    instructions = []
    blr_count = 0
    for insn in md.disasm(chunk, ghidra_addr):
        instructions.append(insn)
        print(f"  0x{insn.address:08x}:  {insn.bytes.hex():12s}  {insn.mnemonic:10s} {insn.op_str}")

        # Stop at blr (branch to link register = function return)
        if insn.mnemonic == 'blr':
            blr_count += 1
            # Most functions end with blr; some have multiple returns
            # Use heuristic: stop if we see blr and the next instruction looks like a prologue
            if blr_count >= 1:
                # Check if next 4 bytes look like a function prologue (mflr/stwu/stw)
                next_off = (insn.address + 4) - BASE_ADDR
                if next_off + 4 <= len(data):
                    next_word = struct.unpack('>I', data[next_off:next_off+4])[0]
                    next_opcode = (next_word >> 26) & 0x3f
                    # mfspr (mflr) = 31, stwu = 37, stw = 36
                    if next_opcode in (31, 37, 36) or next_word == 0:
                        break

    return instructions

def analyze_function(instructions):
    """Analyze a disassembled function and return statistics."""
    stats = {
        'total_instructions': len(instructions),
        'branches': 0,
        'conditional_branches': 0,
        'function_calls': 0,
        'loads': 0,
        'stores': 0,
        'compares': 0,
        'call_targets': [],
        'branch_targets': [],
    }

    for insn in instructions:
        mn = insn.mnemonic

        # Branches
        if mn.startswith('b'):
            if mn == 'bl':
                stats['function_calls'] += 1
                stats['call_targets'].append(insn.op_str)
            elif mn == 'blr':
                pass  # return
            elif mn in ('beq', 'bne', 'blt', 'bgt', 'ble', 'bge', 'beq+', 'bne+', 'blt+', 'bgt+', 'ble+', 'bge+',
                        'beq-', 'bne-', 'blt-', 'bgt-', 'ble-', 'bge-',
                        'bdnz', 'bdnz+', 'bdnz-', 'bdz', 'bdz+', 'bdz-'):
                stats['conditional_branches'] += 1
                stats['branch_targets'].append(insn.op_str)
            elif mn == 'b':
                stats['branches'] += 1
                stats['branch_targets'].append(insn.op_str)
            else:
                # Other branch variants
                if 'lr' not in mn:
                    if mn.startswith('bc') or mn.startswith('bt') or mn.startswith('bf'):
                        stats['conditional_branches'] += 1
                    else:
                        stats['branches'] += 1

        # Loads
        if mn.startswith('l') and not mn.startswith('li') and mn not in ('blr', 'bl'):
            if mn in ('lwz', 'lbz', 'lhz', 'lha', 'lfs', 'lfd', 'lwzx', 'lbzx', 'lhzx', 'lwzu', 'lmw'):
                stats['loads'] += 1
        elif mn in ('li', 'lis'):
            pass  # immediate loads, not memory

        # Stores
        if mn in ('stw', 'stb', 'sth', 'stfs', 'stfd', 'stwx', 'stbx', 'sthx', 'stwu', 'stmw'):
            stats['stores'] += 1

        # Compares
        if mn in ('cmpw', 'cmpwi', 'cmplw', 'cmplwi', 'cmpd', 'cmpdi', 'cmpi', 'cmp', 'cmpl'):
            stats['compares'] += 1

    return stats

def print_stats(stats, label=""):
    """Print function statistics."""
    if label:
        print(f"\n--- Analysis: {label} ---")
    print(f"  Total instructions:     {stats['total_instructions']}")
    print(f"  Function calls (bl):    {stats['function_calls']}")
    print(f"  Conditional branches:   {stats['conditional_branches']}")
    print(f"  Unconditional branches: {stats['branches']}")
    print(f"  Memory loads:           {stats['loads']}")
    print(f"  Memory stores:          {stats['stores']}")
    print(f"  Compares:               {stats['compares']}")

    if stats['call_targets']:
        print(f"  Call targets:")
        for t in stats['call_targets'][:20]:
            print(f"    bl {t}")
        if len(stats['call_targets']) > 20:
            print(f"    ... and {len(stats['call_targets'])-20} more")

def disasm_range(data, start_addr, end_addr, label=None):
    """Disassemble a specific address range."""
    offset = start_addr - BASE_ADDR
    size = end_addr - start_addr

    if offset < 0 or offset + size > len(data):
        print(f"ERROR: range out of bounds")
        return []

    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
    md.detail = True

    chunk = data[offset:offset + size]

    if label:
        print(f"\n{'='*70}")
        print(f"  {label}")
        print(f"  Range: 0x{start_addr:08x} - 0x{end_addr:08x} ({size} bytes, {size//4} instructions)")
        print(f"{'='*70}")

    instructions = []
    for insn in md.disasm(chunk, start_addr):
        instructions.append(insn)
        print(f"  0x{insn.address:08x}:  {insn.bytes.hex():12s}  {insn.mnemonic:10s} {insn.op_str}")

    return instructions


if __name__ == "__main__":
    data = load_binary()
    print(f"Loaded {len(data)} bytes from /tmp/wl2_code.bin")

    # Define functions to analyze
    functions = [
        # (ghidra_addr, name, optional_end_addr)
        (0x1005f230, "RandomRange (core/utils.c)"),
        (0x1000a884, "CalcDistance (core/utils.c)"),
        (0x1000fe90, "CalcArmyStrength (combat/combat.c)"),
        (0x10010b30, "AI_ArmyManagement (ai/ai.c)"),
        (0x10011804, "AI_StrategicAssessment (ai/ai.c)"),
        (0x1001c6fc, "ProcessCityProduction (economy/economy.c)"),
        (0x1003d094, "CheckVictoryConditions (economy/economy.c)"),
        (0x10043248, "DijkstraFloodFill (movement/movement.c)"),
    ]

    for addr, name in functions:
        insns = disassemble_function(data, addr, max_instructions=300, label=name)
        stats = analyze_function(insns)
        print_stats(stats, name)
        print()
