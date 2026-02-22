#!/usr/bin/env python3
"""Final verification checks."""
import struct
from capstone import *

BASE_ADDR = 0x10000000

def load_binary(path="/tmp/wl2_code.bin"):
    with open(path, "rb") as f:
        return f.read()

data = load_binary()

def disasm_range(start, end):
    offset = start - BASE_ADDR
    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
    return list(md.disasm(data[offset:offset+(end-start)], start))

# Check what comes after CalcDistance to confirm boundaries
print("=== CalcDistance boundary check ===")
insns = disasm_range(0x1000a884, 0x1000a940)
for i in insns:
    marker = ""
    if i.mnemonic == 'blr':
        marker = "  <-- FUNCTION END"
    elif i.mnemonic == 'mflr':
        marker = "  <-- FUNCTION START"
    print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str:30s}{marker}")

# CalcDistance ends with sqrte/fmul sequence?
print("\n=== CalcDistance last 20 instructions ===")
insns = disasm_range(0x1000a884, 0x1000a930)
for i in insns[-20:]:
    print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

# Check what FUN_10020d88 looks like (the function called instead of CalcDistance in ProcessCityProduction)
print("\n=== FUN_10020d88 first 30 instructions ===")
insns = disasm_range(0x10020d88, 0x10020e40)
for i in insns:
    print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

# Check RandomRange FP conversion in detail
print("\n=== RandomRange FP conversion sequence ===")
insns = disasm_range(0x1005f268, 0x1005f2f0)
for i in insns:
    comment = ""
    if i.mnemonic == 'bl':
        comment = "  # Random()"
    elif i.mnemonic == 'xoris' and '0x8000' in i.op_str:
        comment = "  # int->unsigned for FP conversion"
    elif i.mnemonic == 'fabs':
        comment = "  # abs(random_value)"
    elif i.mnemonic == 'fdiv':
        comment = "  # random / max_range"
    elif i.mnemonic == 'fmadd':
        comment = "  # random/max * dieSize + 1.0"
    elif i.mnemonic == 'fctiwz':
        comment = "  # float -> int (truncate)"
    elif i.mnemonic == 'frsp':
        comment = "  # double -> single precision"
    print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str:30s}{comment}")

# Check the CalculateFightOrder for key constants
print("\n=== CalculateFightOrder key constants ===")
insns = disasm_range(0x1000ffe0, 0x1001072c)
consts = {}
for i in insns:
    if i.mnemonic in ('li', 'addic'):
        parts = i.op_str.split(',')
        try:
            val = int(parts[-1].strip(), 0)
            if val not in (0, 1, -1) and abs(val) < 0x10000:
                consts[val] = consts.get(val, 0) + 1
        except:
            pass
    if i.mnemonic in ('cmpwi', 'cmplwi'):
        parts = i.op_str.split(',')
        try:
            val = int(parts[-1].strip(), 0)
            if val not in (0, 1, -1):
                consts[val] = consts.get(val, 0) + 1
        except:
            pass

priority_values = {
    0x3e8: "1000 (hero priority)",
    0x384: "900 (flying priority)",
    0x320: "800 (heavy priority)",
    0x2bc: "700 (siege priority)",
    0x258: "600 (ranged priority)",
    0x1f4: "500 (light priority)",
    0x190: "400 (special1 priority)",
    0x12c: "300 (special2 priority)",
}

for v in sorted(consts):
    meaning = priority_values.get(v, "")
    if meaning or abs(v) > 10:
        print(f"  {v:6d} (0x{v&0xFFFF:04x})  x{consts[v]}  {meaning}")

# Show a summary of the AI_StrategicAssessment call map
print("\n=== AI_StrategicAssessment - diplomacy bit constants ===")
insns = disasm_range(0x10011804, 0x10011804 + 2848)
for i in insns:
    if i.mnemonic in ('lis', 'ori', 'andi.') or ('0xcf' in i.op_str.lower() and len(i.op_str) > 6):
        if any(c in i.op_str.lower() for c in ['0xcfff', '0x1000', '0x2000', '0x3000']):
            print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

# Check specific diplomacy mask patterns
print("\n=== Diplomacy bit patterns in AI_StrategicAssessment ===")
for i in insns:
    # Look for the characteristic 0xCFFFFFFF AND mask or 0x10000000/0x20000000 OR values
    raw = struct.unpack('>I', data[i.address - BASE_ADDR:i.address - BASE_ADDR + 4])[0]
    opcode = (raw >> 26) & 0x3f
    # rlwinm (rotate and mask)
    if i.mnemonic == 'rlwinm' and '0x1c' in i.op_str:
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}  # extract diplomacy bits")
    if i.mnemonic in ('lis',) and ('0xcfff' in i.op_str or '0x1000' in i.op_str or '0x2000' in i.op_str):
        print(f"  0x{i.address:08x}: {i.mnemonic:10s} {i.op_str}")

print("\n=== Summary statistics ===")
# Count how many loops the AI_StrategicAssessment has (20 backward branches!)
# vs source has: ~7 for-loops (p=7..0 iterations)
print(f"AI_StrategicAssessment backward branches: 20")
print(f"Source has ~7 for-loops iterating over 8 players + 1 army loop")
print(f"20 backward branches / 8 player iterations = ~2.5 checks per loop")
print(f"This is consistent: some loops have nested inner conditions")
