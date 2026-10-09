#!/usr/bin/env python3
"""patch_orig_rnglog.py - a seeded copy of the ORIGINAL that logs every Random() call.

Same-seed runs (docs/testing.md section 4) compare the original with the
remake on what is visible.  This patch adds what the original lacks, a
record of its random stream: every Toolbox Random() call, made only by
Dice (PPC FUN_1005f230, the single `bl` to the Random glue at 0x1005f268),
writes the return address of Dice's caller into a ring buffer, which the
devloop bridge reads out of the emulator's memory (tools/rng_log.py
--orig).

The PEF data fork is changed in three places (the resource fork, whose
cfrg says "the whole data fork", is kept):
  - the launch seed, as tools/patch_orig_seed.py does;
  - the code section (section 0) is copied to the end of the file, followed
    by a 16-byte-aligned cave and the buffer, and its section header points
    there with the new lengths (code needs no relocations, so the copy runs
    as is at any address);
  - `bl Random-glue` in Dice becomes `bl cave`; the cave logs and then
    branches to the glue with Dice's return address still in LR, so the
    glue returns into Dice as before (r0, r11, r12 are volatile across the
    call).

Buffer: header at H = cave + 0x60: 'WL2O' 'RIGL' count entries_runtime,
then 65536 entries of 8 bytes: the caller's return address, then the die's
sides (high half) and add (low half), which Dice keeps in r28 and r27
from its prologue on; call n (1-based) goes in slot n & 0xffff.  entries_runtime lets the reader rebase the runtime
addresses onto the Ghidra ones (code section at 0x10000000).

Usage: patch_orig_rnglog.py SEED [SRC_APP] DST_APP
"""
import os
import shutil
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import patch_orig_seed  # noqa: E402

GHIDRA_BASE = 0x10000000
DICE_RANDOM_CALL = 0x1005F268          # bl 0x10002970 (Random glue) in FUN_1005f230
RANDOM_GLUE = 0x10002970
ENTRIES = 65536
MAGIC = b'WL2ORIGL'


def bl(frm, to, link=True):
    off = (to - frm) & 0x3FFFFFC
    return 0x48000000 | off | (1 if link else 0)


BATTLE_ROUNDS = 0x1002D654     # FUN_1002d654, starts with mflr r0
NOTE_ENTRIES = 16384
NOTE_MAGIC = b'WL2ONOTE'


def D(op, rt, ra, d):
    return (op << 26) | (rt << 21) | (ra << 16) | (d & 0xFFFF)


def add_battle_notes(code, E):
    """A second cave on FUN_1002d654's first instruction (mflr r0 becomes a
    branch to it): it notes every battle, real or the AI's simulations, with
    the Random() count at that moment, the unit counts and the first four
    values and hit points of each side, read where FUN_1002d654 reads them
    (TOC slots: attackers -976 count, -264 values, -284 hp; defenders -968,
    -256, -276).  It then does the mflr r0 itself and branches back.  r0,
    r9-r12 are free at a function's entry.  Notes: header 'WL2ONOTE' count
    0, then 16384 entries of 32 bytes: Random count, tag 1, nAtt nDef 0 0,
    att values[4], att hp[4], def values[4], def hp[4], caller."""
    BA = GHIDRA_BASE + ((len(code) + 15) & ~15)
    NH = BA + 0xA0
    NE = NH + 16
    rand_count = E - 8
    words = [
        0x7C0802A6,                             # mflr  r0     (caller's return, as the original)
        bl(BA + 4, BA + 8),                     # bl    .+4
        0x7D6802A6,                             # mflr  r11    (= BA+8)
        0x7C0803A6,                             # mtlr  r0
        D(14, 11, 11, NE - (BA + 8)),           # addi  r11,r11,NE-(BA+8)
        D(32, 12, 11, -8),                      # lwz   r12,-8(r11)
        D(14, 12, 12, 1),                       # addi  r12,r12,1
        D(36, 12, 11, -8),                      # stw   r12,-8(r11)
        0x54000000 | (12 << 21) | (10 << 16) | (5 << 11) | (13 << 6) | (26 << 1),  # rlwinm r10,r12,5,13,26 (slot*32)
    ]
    hi = (rand_count - NE + 0x8000) >> 16
    lo = (rand_count - NE) - (hi << 16)
    words += [
        D(15, 9, 11, hi),                       # addis r9,r11,hi
        D(32, 9, 9, lo),                        # lwz   r9,lo(r9)   (Random count)
        0x7D6B5214,                             # add   r11,r11,r10
        D(36, 9, 11, 0),                        # stw   r9,0(r11)
        D(14, 9, 0, 1),                         # li    r9,1
        D(36, 9, 11, 4),                        # stw   r9,4(r11)
        D(32, 9, 2, -976), D(34, 9, 9, 0), D(38, 9, 11, 8),     # nAtt
        D(32, 9, 2, -968), D(34, 9, 9, 0), D(38, 9, 11, 9),     # nDef
        D(32, 9, 2, -264), D(32, 9, 9, 0), D(36, 9, 11, 12),    # att values
        D(32, 9, 2, -284), D(32, 9, 9, 0), D(36, 9, 11, 16),    # att hp
        D(32, 9, 2, -256), D(32, 9, 9, 0), D(36, 9, 11, 20),    # def values
        D(32, 9, 2, -276), D(32, 9, 9, 0), D(36, 9, 11, 24),    # def hp
        D(36, 0, 11, 28),                       # stw   r0,28(r11) (caller)
    ]
    words.append(bl(BA + 4 * len(words), BATTLE_ROUNDS + 4, link=False))  # b FUN_1002d654+4
    cave = b''.join(struct.pack('>I', w) for w in words)
    assert len(cave) <= 0xA0, len(cave)
    site = BATTLE_ROUNDS - GHIDRA_BASE
    if struct.unpack('>I', code[site:site + 4])[0] != 0x7C0802A6:
        raise ValueError('FUN_1002d654 does not start with mflr r0')
    code[site:site + 4] = struct.pack('>I', bl(BATTLE_ROUNDS, BA, link=False))
    code += bytes(BA - GHIDRA_BASE - len(code)) + cave + bytes(0xA0 - len(cave))
    code += NOTE_MAGIC + bytes(8) + bytes(32 * NOTE_ENTRIES)


def patch(data, seed):
    data = bytearray(patch_orig_seed.patch_bytes(bytes(data), seed))
    if data[:12] != b'Joy!peffpwpc':
        raise ValueError('not a PEF container')
    nsec = struct.unpack('>H', data[32:34])[0]
    sh = 40                                     # section 0 header
    _, _, total, unpacked, clen, coff, kind = struct.unpack('>iIIIIIB', data[sh:sh + 25])
    if kind != 0 or not (total == unpacked == clen):
        raise ValueError('section 0 is not plain code')
    code = bytearray(data[coff:coff + clen])
    site = DICE_RANDOM_CALL - GHIDRA_BASE
    if struct.unpack('>I', code[site:site + 4])[0] != bl(DICE_RANDOM_CALL, RANDOM_GLUE):
        raise ValueError('Dice does not call the Random glue at 0x%x' % DICE_RANDOM_CALL)
    cave_off = (len(code) + 15) & ~15
    A = GHIDRA_BASE + cave_off                  # cave address (Ghidra numbering)
    H = A + 0x60                                # header
    E = H + 16                                  # entries
    words = [
        0x7C0802A6,                             # mflr  r0          (return into Dice)
        bl(A + 4, A + 8),                       # bl    .+4
        0x7D6802A6,                             # mflr  r11         (= A+8, runtime)
        0x7C0803A6,                             # mtlr  r0
        0x396B0000 | (E - (A + 8)),             # addi  r11,r11,E-(A+8)
        0x916BFFFC,                             # stw   r11,-4(r11)  (entries_runtime)
        0x818BFFF8,                             # lwz   r12,-8(r11)  (count)
        0x398C0001,                             # addi  r12,r12,1
        0x918BFFF8,                             # stw   r12,-8(r11)
        0x54000000 | (12 << 21) | (0 << 16) | (3 << 11) | (13 << 6) | (28 << 1),  # rlwinm r0,r12,3,13,28
        0x7D6B0214,                             # add   r11,r11,r0
        0x81810000,                             # lwz   r12,0(r1)   (Dice's back chain)
        0x818C0008,                             # lwz   r12,8(r12)  (Dice's saved LR)
        0x918B0000,                             # stw   r12,0(r11)
        0x54000000 | (27 << 21) | (12 << 16) | (0 << 11) | (16 << 6) | (31 << 1),  # rlwinm r12,r27,0,16,31 (add)
        0x50000000 | (28 << 21) | (12 << 16) | (16 << 11) | (0 << 6) | (15 << 1),  # rlwimi r12,r28,16,0,15 (sides)
        0x918B0004,                             # stw   r12,4(r11)
    ]
    words.append(bl(A + 4 * len(words), RANDOM_GLUE, link=False))   # b Random glue
    cave = b''.join(struct.pack('>I', w) for w in words)
    assert len(cave) <= 0x60
    code[site:site + 4] = struct.pack('>I', bl(DICE_RANDOM_CALL, A))
    code += bytes(cave_off - len(code)) + cave + bytes(0x60 - len(cave))
    code += MAGIC + bytes(8) + bytes(8 * ENTRIES)
    add_battle_notes(code, E)
    new_off = (len(data) + 15) & ~15
    data += bytes(new_off - len(data)) + code
    struct.pack_into('>IIII', data, sh + 8, len(code), len(code), len(code), new_off)
    return bytes(data), E


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 2
    seed = int(argv[1], 0)
    src = argv[2] if len(argv) > 3 else 'Warlords II/Warlords II.app'
    dst = argv[-1]
    out, E = patch(open(src, 'rb').read(), seed)
    if shutil.which('ditto'):
        subprocess.run(['ditto', src, dst], check=True)
    else:
        shutil.copyfile(src, dst)
    with open(dst, 'wb') as f:
        f.write(out)
    print('%s: randSeed %d, Random() log entries at 0x%08x (Ghidra numbering)' % (dst, seed, E))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
