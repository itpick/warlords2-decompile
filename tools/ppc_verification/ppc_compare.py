#!/usr/bin/env python3
"""Detailed PPC comparison for Warlords II function verification."""

import struct
from capstone import *

BASE_ADDR = 0x10000000

def load_binary(path="/tmp/wl2_code.bin"):
    with open(path, "rb") as f:
        return f.read()

def disasm_range(data, start_addr, end_addr):
    """Disassemble a range and return instruction list."""
    offset = start_addr - BASE_ADDR
    size = end_addr - start_addr
    if offset < 0 or offset + size > len(data):
        return []

    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
    md.detail = True
    chunk = data[offset:offset + size]
    return list(md.disasm(chunk, start_addr))

def analyze(insns):
    """Return analysis stats dict."""
    stats = {
        'total': len(insns),
        'calls': 0, 'cond_br': 0, 'uncond_br': 0,
        'loads': 0, 'stores': 0, 'compares': 0,
        'call_targets': [], 'li_values': [],
        'has_fp': False,
    }
    for i in insns:
        mn = i.mnemonic
        # Function calls
        if mn == 'bl':
            stats['calls'] += 1
            stats['call_targets'].append(int(i.op_str, 16) if i.op_str.startswith('0x') else i.op_str)
        # Conditional branches
        elif mn in ('beq','bne','blt','bgt','ble','bge','beq+','bne+','blt+','bgt+','ble+','bge+',
                     'beq-','bne-','blt-','bgt-','ble-','bge-','bdnz','bdnz+','bdnz-','bdz','bdz+','bdz-'):
            stats['cond_br'] += 1
        elif mn.startswith('b') and mn not in ('bl','blr','b','blrl','bctr','bctrl'):
            if 'lr' not in mn and 'ctr' not in mn:
                stats['cond_br'] += 1
        # Unconditional branches
        elif mn == 'b':
            stats['uncond_br'] += 1
        # Loads
        if mn in ('lwz','lbz','lhz','lha','lfs','lfd','lwzx','lbzx','lhzx','lhax','lwzu','lmw','lbzu','lhau'):
            stats['loads'] += 1
        # Stores
        if mn in ('stw','stb','sth','stfs','stfd','stwx','stbx','sthx','stwu','stmw','stbu','sthu'):
            stats['stores'] += 1
        # Compares
        if mn in ('cmpw','cmpwi','cmplw','cmplwi','cmpd','cmpdi','cmpi','cmp','cmpl'):
            stats['compares'] += 1
        # FP instructions
        if mn.startswith('f') or mn.startswith('lfd') or mn.startswith('lfs') or mn.startswith('stf'):
            stats['has_fp'] = True
        # li/lis values
        if mn == 'li':
            try:
                val = int(i.op_str.split(',')[-1].strip(), 0)
                stats['li_values'].append(val)
            except:
                pass
    return stats

def disasm_func_auto(data, start_addr, max_bytes=8000):
    """Auto-detect function end by looking for blr followed by a prologue."""
    offset = start_addr - BASE_ADDR
    if offset < 0 or offset + 4 > len(data):
        return []

    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
    md.detail = True
    chunk = data[offset:offset + max_bytes]
    insns = []
    for insn in md.disasm(chunk, start_addr):
        insns.append(insn)
        if insn.mnemonic == 'blr':
            # Check next instruction
            next_off = (insn.address + 4) - BASE_ADDR
            if next_off + 4 <= len(data):
                next_word = struct.unpack('>I', data[next_off:next_off+4])[0]
                next_op = (next_word >> 26) & 0x3f
                # mfspr=31 with mflr variant, stwu=37, stmw=47, or 0 padding
                if next_op in (31, 37, 47) or next_word == 0:
                    break
    return insns


data = load_binary()

# Function definitions: (addr, known_size_bytes, name)
functions = [
    # RandomRange: from FUNCTION_MAP "252 bytes" noted in utils.c
    (0x1005f230, 0x1005f32c - 0x1005f230, "RandomRange"),
    # CalcDistance: 212 bytes noted in utils.c
    (0x1000a884, None, "CalcDistance"),
    # CalcArmyStrength: 336 bytes noted in combat.c -> next func is 0x1000ffe0
    (0x1000fe90, 0x1000ffe0 - 0x1000fe90, "CalcArmyStrength (DetermineIdealCombatSize)"),
    # CalculateFightOrder: 1868 bytes noted -> 0x1000ffe0, next is ~0x1001072c
    (0x1000ffe0, 0x1001072c - 0x1000ffe0, "CalculateFightOrder"),
    # AI_ArmyManagement: 2468 bytes noted -> 0x10010b30 to ~0x100114c0+
    (0x10010b30, 0x100114d4 - 0x10010b30, "AI_ArmyManagement"),
    # AI_StrategicAssessment: 0x10011804
    (0x10011804, None, "AI_StrategicAssessment"),
    # ProcessCityProduction: 344 bytes -> 0x1001c6fc
    (0x1001c6fc, 344, "ProcessCityProduction"),
    # CheckVictoryConditions: 1096 bytes -> 0x1003d094
    (0x1003d094, 1096, "CheckVictoryConditions"),
    # DijkstraFloodFill: 1884 bytes -> 0x10043248
    (0x10043248, 1884, "DijkstraFloodFill"),
]

print("=" * 80)
print("  WARLORDS II - PPC Binary vs Reconstructed Source Comparison")
print("=" * 80)

for addr, size, name in functions:
    if size is not None:
        insns = disasm_range(data, addr, addr + size)
    else:
        insns = disasm_func_auto(data, addr)

    stats = analyze(insns)
    func_size = (insns[-1].address - insns[0].address + 4) if insns else 0

    print(f"\n{'─'*70}")
    print(f"  {name}")
    print(f"  Address: 0x{addr:08x}  Size: {func_size} bytes  ({func_size//4} instructions)")
    print(f"{'─'*70}")
    print(f"  Instructions:       {stats['total']:4d}")
    print(f"  Function calls:     {stats['calls']:4d}")
    print(f"  Conditional branch: {stats['cond_br']:4d}")
    print(f"  Uncond. branch:     {stats['uncond_br']:4d}")
    print(f"  Memory loads:       {stats['loads']:4d}")
    print(f"  Memory stores:      {stats['stores']:4d}")
    print(f"  Compares:           {stats['compares']:4d}")
    print(f"  Uses FP:            {stats['has_fp']}")

    if stats['call_targets']:
        print(f"  Call targets ({len(stats['call_targets'])}):")
        # Deduplicate
        targets = {}
        for t in stats['call_targets']:
            if isinstance(t, int):
                targets[t] = targets.get(t, 0) + 1
            else:
                targets[t] = targets.get(t, 0) + 1
        for t, count in sorted(targets.items()):
            suffix = f" x{count}" if count > 1 else ""
            if isinstance(t, int):
                print(f"    0x{t:08x}{suffix}")
            else:
                print(f"    {t}{suffix}")

    # Check for specific constants
    notable_consts = [c for c in stats['li_values'] if c not in (0, 1, -1, 2, 3, 4, 5, 6, 7, 8)]
    if notable_consts:
        print(f"  Notable constants: {', '.join(f'0x{c&0xFFFF:x}' for c in notable_consts[:10])}")

    print()

# Now do a more detailed comparison for specific functions
print("\n" + "=" * 80)
print("  DETAILED BRANCH ANALYSIS")
print("=" * 80)

# RandomRange detailed
print("\n--- RandomRange (0x1005f230) ---")
insns = disasm_range(data, 0x1005f230, 0x1005f32c)
print(f"Original PPC: {len(insns)} instructions, {(insns[-1].address - insns[0].address + 4)} bytes")
print("Branch structure:")
for i in insns:
    if i.mnemonic.startswith('b') and i.mnemonic not in ('blr',):
        print(f"  0x{i.address:08x}: {i.mnemonic:6s} {i.op_str}")
print("Source reconstruction has:")
print("  - 1 call to Random() -> original: bl 0x10002970 (Random TVect)")
print("  - 1 if(dieSize==0) check")
print("  - 1 if(numDice>0) check")
print("  - 1 do-while loop (i < numDice)")
print("  - 1 return (total + bonus)")
print()

# CalcArmyStrength detailed
print("\n--- CalcArmyStrength/DetermineIdealCombatSize (0x1000fe90) ---")
insns = disasm_range(data, 0x1000fe90, 0x1000ffe0)
print(f"Original PPC: {len(insns)} instructions, {0x1000ffe0-0x1000fe90} bytes")
calls_in_orig = [i for i in insns if i.mnemonic == 'bl']
cond_in_orig = [i for i in insns if i.mnemonic.startswith('b') and i.mnemonic not in ('b','bl','blr','blrl','bctr','bctrl')]
uncond_in_orig = [i for i in insns if i.mnemonic == 'b']
cmps_in_orig = [i for i in insns if i.mnemonic.startswith('cmp')]
print(f"  Calls: {len(calls_in_orig)} -> {[f'0x{int(i.op_str,16):08x}' for i in calls_in_orig]}")
print(f"  Conditional branches: {len(cond_in_orig)}")
print(f"  Unconditional branches: {len(uncond_in_orig)}")
print(f"  Compares: {len(cmps_in_orig)}")
print()
print("Source reconstruction analysis:")
print("  - 1 call to GetAdjacentArmies (FUN_1000da14)")
print("  - do-while loop (i=5..0) with 6 iterations")
print("  - Inside loop: 3-4 conditional checks (adjIdx != 0xFF, owner != 0x0F, owner != current, terrain)")
print("  - After loop: 3 conditional returns (warEnemyCount, enemyCount>=2, enemyCount==1)")

# DijkstraFloodFill detailed
print("\n\n--- DijkstraFloodFill (0x10043248) ---")
insns = disasm_range(data, 0x10043248, 0x10043248 + 1884)
stats = analyze(insns)
print(f"Original PPC: {stats['total']} instructions, 1884 bytes")
print(f"  Calls: {stats['calls']}")
print(f"  Conditional branches: {stats['cond_br']}")
print(f"  Unconditional branches: {stats['uncond_br']}")
print(f"  Loads: {stats['loads']}")
print(f"  Stores: {stats['stores']}")
print(f"  Compares: {stats['compares']}")

# Check loop structures by looking at backward branches
back_branches = []
for i in insns:
    if i.mnemonic.startswith('b') and i.mnemonic not in ('bl','blr','blrl','bctr','bctrl'):
        try:
            target = int(i.op_str.split(',')[-1].strip(), 16)
            if target < i.address:
                back_branches.append((i.address, target, i.mnemonic))
        except:
            pass

print(f"  Backward branches (loops): {len(back_branches)}")
for addr, target, mn in back_branches:
    print(f"    0x{addr:08x} -> 0x{target:08x} ({mn}), span = {addr-target} bytes")

print()
print("Source reconstruction has:")
print("  - Outer do-while (main expansion loop) with convergence check")
print("  - Inner for-x loop over scan columns")
print("  - Inner for-y loop over scan rows")
print("  - Inner while loop over neighbors")
print("  - Multiple mode checks (flying, naval, normal)")
print("  - Neighbor pattern selection (10-way: corners, edges, interior)")

# ProcessCityProduction
print("\n\n--- ProcessCityProduction (0x1001c6fc) ---")
insns = disasm_range(data, 0x1001c6fc, 0x1001c6fc + 344)
stats = analyze(insns)
print(f"Original PPC: {stats['total']} instructions, 344 bytes")
print(f"  Calls: {stats['calls']}")
print(f"  Cond branches: {stats['cond_br']}")
print(f"  Uncond branches: {stats['uncond_br']}")
print(f"  Loads: {stats['loads']}")
print(f"  Stores: {stats['stores']}")

calls_in_orig = [i for i in insns if i.mnemonic == 'bl']
print(f"  Call targets: {[f'0x{int(i.op_str,16):08x}' for i in calls_in_orig]}")
print()
print("Source reconstruction has:")
print("  - While loop counting down armyCount")
print("  - CalcDistance call per army")
print("  - CalcPathCost call per matching army")
print("  - CreateProducedUnit call (commented out)")
print("  - AssignProducedToArmy call (commented out)")

# AI_ArmyManagement
print("\n\n--- AI_ArmyManagement (0x10010b30) ---")
insns = disasm_range(data, 0x10010b30, 0x100114d4)
stats = analyze(insns)
print(f"Original PPC: {stats['total']} instructions, {0x100114d4-0x10010b30} bytes")
print(f"  Calls: {stats['calls']}")
print(f"  Cond branches: {stats['cond_br']}")
print(f"  Uncond branches: {stats['uncond_br']}")
print(f"  Loads: {stats['loads']}")
print(f"  Stores: {stats['stores']}")
print(f"  Compares: {stats['compares']}")
calls_in_orig = [i for i in insns if i.mnemonic == 'bl']
targets = {}
for c in calls_in_orig:
    t = c.op_str
    targets[t] = targets.get(t, 0) + 1
print(f"  Unique call targets ({len(targets)}):")
for t, count in sorted(targets.items()):
    suffix = f" x{count}" if count > 1 else ""
    print(f"    bl {t}{suffix}")

# CheckVictoryConditions
print("\n\n--- CheckVictoryConditions (0x1003d094) ---")
insns = disasm_range(data, 0x1003d094, 0x1003d094 + 1096)
stats = analyze(insns)
print(f"Original PPC: {stats['total']} instructions, 1096 bytes")
print(f"  Calls: {stats['calls']}")
print(f"  Cond branches: {stats['cond_br']}")
print(f"  Uncond branches: {stats['uncond_br']}")
print(f"  Loads: {stats['loads']}")
print(f"  Stores: {stats['stores']}")
print(f"  Compares: {stats['compares']}")
calls_in_orig = [i for i in insns if i.mnemonic == 'bl']
targets = {}
for c in calls_in_orig:
    t = c.op_str
    targets[t] = targets.get(t, 0) + 1
print(f"  Call targets:")
for t, count in sorted(targets.items()):
    suffix = f" x{count}" if count > 1 else ""
    print(f"    bl {t}{suffix}")
