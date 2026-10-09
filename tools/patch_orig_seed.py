#!/usr/bin/env python3
"""patch_orig_seed.py - a copy of the ORIGINAL Warlords II whose launch seed is fixed.

The original seeds QuickDraw's randSeed once, at launch, from GetDateTime
(PPC FUN_1005f32c, the only write of randSeed in the binary); every random
number after that is a Dice roll on that stream.  Two runs with the same
seed and the same input therefore play the same game, and the remake built
with `make PLATFORM=powerpc FIXED_SEED=<seed>` starts from the same point.

FUN_1005f32c at 0x1005f344.. (PEF data fork offset 0x62154..):
    4bfa25c5  bl    GetDateTime glue     ->  3c60HHHH  lis  r3,HI(seed)
    80410014  lwz   r2,20(r1)  (TOC)     ->  6063LLLL  ori  r3,r3,LO(seed)
    807f0000  lwz   r3,0(r31)  (secs)    ->  60000000  nop
    8082ff50  lwz   r4,-0xb0(r2)  qd     (kept)
    9064004c  stw   r3,0x4c(r4)  randSeed (kept)
Without the call r2 is never switched, so dropping the TOC reload is safe.

Usage:
    patch_orig_seed.py SEED [SRC_APP] [DST_APP]
SRC_APP defaults to "Warlords II/Warlords II.app"; DST_APP to
"Warlords II/Warlords II seed<SEED>.app".  The copy keeps the resource fork
(macOS `ditto`); only the data fork is patched, after the expected bytes
are verified.
"""
import os
import shutil
import struct
import subprocess
import sys

SITE = 0x62154
EXPECT = bytes.fromhex("4bfa25c5" "80410014" "807f0000" "8082ff50" "9064004c")


def patch_bytes(data, seed):
    """-> patched copy of a PEF data fork; ValueError if the site differs"""
    if data[SITE:SITE + len(EXPECT)] != EXPECT:
        raise ValueError("unexpected bytes at 0x%x: %s (not the PPC 1.0.7 build?)"
                         % (SITE, data[SITE:SITE + len(EXPECT)].hex()))
    seed &= 0xFFFFFFFF
    hi, lo = seed >> 16, seed & 0xFFFF
    new = struct.pack(">III", 0x3C600000 | hi, 0x60630000 | lo, 0x60000000)
    return data[:SITE] + new + data[SITE + 12:]


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 2
    seed = int(argv[1], 0)
    src = argv[2] if len(argv) > 2 else "Warlords II/Warlords II.app"
    dst = argv[3] if len(argv) > 3 else os.path.join(os.path.dirname(src), "Warlords II seed%d.app" % seed)
    data = open(src, "rb").read()
    out = patch_bytes(data, seed)
    if shutil.which("ditto"):
        subprocess.run(["ditto", src, dst], check=True)     # keeps the resource fork
    else:
        shutil.copyfile(src, dst)
    with open(dst, "r+b") as f:
        f.write(out)
    print("%s: randSeed fixed at %d (0x%08x)" % (dst, seed, seed & 0xFFFFFFFF))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
