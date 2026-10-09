#!/usr/bin/env python3
"""Read the remake's Random() call log out of the running emulator.

A FIXED_SEED build (src/Makefile, main.c WL2_FIXED_SEED) records every
Random() call made through Dice(): the caller's return address and the
(n, sides, add) of the Dice call.  The devloop bridge (bridge.mjs /memfind,
/mem) reads the emulator's memory; this tool finds the log by its magic,
rebases the return addresses onto the linked image (src/warlords2_ppc) and
names the calling function.

  rng_log.py [--port 3201] [--from K] [--to K] [--summary] [--elf src/warlords2_ppc]
  rng_log.py --orig [--port 3202] ...   the original patched by patch_orig_rnglog.py

--orig reads the original's log instead: return addresses only (FUN_1005f230's
caller), rebased to Ghidra addresses and named by the PPC function that
contains them (tools/ppc_decompiled).

--summary prints one line per run of consecutive calls from the same caller
(k range, count, function, n/sides/add).  The k of an entry is its index
in the stream: entry k is the (k+1)-th Random() since the launch seed."""
import argparse, bisect, os, struct, subprocess, sys, urllib.request

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
MAGIC = '574c32524e474c47'
NOTES_MAGIC = '574c324e4f544553'
ENTRY = 12
ORIG_MAGIC = b'WL2ORIGL'.hex()
ORIG_ENTRIES_GHIDRA = 0x10117910          # patch_orig_rnglog.py: cave + 0x60 + 16


def get(port, path):
    return urllib.request.urlopen(f'http://127.0.0.1:{port}{path}', timeout=600).read().decode().strip()


def mem(port, a, n):
    out = bytearray()
    while n > 0:
        k = min(n, 1 << 22)
        out += bytes.fromhex(get(port, f'/mem?a={a}&n={k}'))
        a += k; n -= k
    return bytes(out)


def symbols(elf):
    tc = os.path.expanduser('~/workspace/itpick/Retro68/build/toolchain/bin/powerpc-apple-macos-nm')
    lines = subprocess.run([tc, elf], capture_output=True, text=True, check=True).stdout.splitlines()
    syms = []
    for l in lines:
        p = l.split()
        if len(p) == 3 and p[1] in 'tT' and p[2].startswith('.'):
            syms.append((int(p[0], 16), p[2][1:]))
    syms.sort()
    return syms


def ppc_functions():
    import glob, re
    starts = []
    for f in sorted(glob.glob(os.path.join(HERE, 'ppc_decompiled', 'PPC_*.c'))):
        for line in open(f, errors='replace'):
            m = re.match(r'// Function: (\S+) at ([0-9a-f]+)', line)
            if m:
                starts.append((int(m.group(2), 16), m.group(1)))
    starts.sort()
    return starts


def orig_log(a):
    hits = [int(x) for x in get(a.port, f'/memfind?hex={ORIG_MAGIC}').split() if x]
    best = None
    for h in hits:
        cnt, ert = struct.unpack('>II', mem(a.port, h + 8, 8))
        if ert and (best is None or cnt >= best[1]):
            best = (h, cnt, ert)
    if best is None:
        sys.exit('no original RNG log in memory (patch_orig_rnglog.py build not running, or no roll yet)')
    h, count, ert = best
    raw = mem(a.port, h + 16, 8 * 65536)
    notes = {}
    if a.notes:
        for nh in [int(x) for x in get(a.port, f'/memfind?hex={b"WL2ONOTE".hex()}').split() if x]:
            ncount = struct.unpack('>I', mem(a.port, nh + 8, 4))[0]
            if ncount == 0:
                continue
            nraw = mem(a.port, nh + 16, 32 * 16384)
            for n in range(max(1, ncount - 16383), ncount + 1):
                e = nraw[(n & 0x3FFF) * 32:(n & 0x3FFF) * 32 + 32]
                k, tag, na, nd = struct.unpack('>IIBB', e[:10])
                av, ah, dv, dh = e[12:16], e[16:20], e[20:24], e[24:28]
                notes.setdefault(k, []).append(f'NOTE {tag} att {na}: ' + ' '.join(f'{av[i]}/{ah[i]}' for i in range(min(na, 4)))
                                               + f' def {nd}: ' + ' '.join(f'{dv[i]}/{dh[i]}' for i in range(min(nd, 4))))
    funcs = ppc_functions()
    addrs = [f[0] for f in funcs]
    hi = count if a.hi is None else min(a.hi, count)
    lo = max(a.lo, count - 65535)
    print(f'# original log at host {h:#x}: {count} calls')
    run = None
    for k in range(lo, hi):
        slot = (k + 1) & 0xFFFF
        ra, sides, add = struct.unpack('>Ihh', raw[slot * 8:slot * 8 + 8])
        ra = ra - ert + ORIG_ENTRIES_GHIDRA
        i = bisect.bisect_right(addrs, ra) - 1
        who = f'{funcs[i][1]}+{ra - funcs[i][0]:#x}' if i >= 0 else hex(ra)
        if k in notes:
            for t in notes[k]: print(f'{"":6} {t}')
        if not a.summary:
            print(f'{k:6} {who:40} Dice(?,{sides},{add})')
            continue
        key = (who.split('+')[0], sides, add)
        if run and run[0] == key:
            run[2] = k
        else:
            if run: print(f'{run[1]:6}-{run[2]:6} x{run[2] - run[1] + 1:5}  {run[0][0]:32} Dice(?,{run[0][1]},{run[0][2]})')
            run = [key, k, k]
    if run: print(f'{run[1]:6}-{run[2]:6} x{run[2] - run[1] + 1:5}  {run[0][0]:32} Dice(?,{run[0][1]},{run[0][2]})')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--port', default='3201')
    ap.add_argument('--elf', default=os.path.join(REPO, 'src', 'warlords2_ppc'))
    ap.add_argument('--from', dest='lo', type=int, default=0)
    ap.add_argument('--to', dest='hi', type=int, default=None)
    ap.add_argument('--summary', action='store_true')
    ap.add_argument('--orig', action='store_true')
    ap.add_argument('--notes', action='store_true', help='interleave the remake\'s notes (battle units)')
    a = ap.parse_args()
    if a.orig:
        if a.port == '3201':
            a.port = '3202'
        return orig_log(a)
    hits = [int(x) for x in get(a.port, f'/memfind?hex={MAGIC}').split() if x]
    if not hits:
        sys.exit('no RNG log in memory (not a FIXED_SEED build?)')
    # the PEF loader's packed data image can hold the magic too: take the
    # live copy, the one whose Dice entry address is set
    base, count, code = None, 0, 0
    for h in hits:
        c, d = struct.unpack('>ii', mem(a.port, h + 8, 8))
        if d != 0 and c >= count:
            base, count, code = h, c, d
    if base is None:
        sys.exit('RNG log found but empty (no Dice call yet)')
    syms = symbols(a.elf)
    dice = dict((n, ad) for ad, n in syms)['Dice']
    hi = min(count, 65536) if a.hi is None else min(a.hi, count, 65536)
    raw = mem(a.port, base + 16 + a.lo * ENTRY, max(0, hi - a.lo) * ENTRY)
    addrs = [s[0] for s in syms]
    notes = {}
    nh = [int(x) for x in get(a.port, f'/memfind?hex={NOTES_MAGIC}').split() if x]
    for h in nh:
        ncount = struct.unpack('>i', mem(a.port, h + 8, 4))[0]
        if ncount <= 0:
            continue
        nraw = mem(a.port, h + 12, min(ncount, 16384) * 12)
        for i in range(min(ncount, 16384)):
            k, tag, x, y, z = struct.unpack('>ihhhh', nraw[i * 12:(i + 1) * 12])
            notes.setdefault(k, []).append(f'NOTE {tag} {x} {y} {z}')

    def name(ra):
        e = ra - code + dice
        i = bisect.bisect_right(addrs, e) - 1
        return f'{syms[i][1]}+{e - syms[i][0]:#x}' if i >= 0 else hex(e)

    print(f'# log at host {base:#x}: {count} calls, Dice code {code:#x}')
    run = None
    for i in range(hi - a.lo):
        ra, n, sides, add, r = struct.unpack('>ihhhh', raw[i * ENTRY:(i + 1) * ENTRY])
        k = a.lo + i
        who = name(ra)
        if a.notes and k in notes:
            for t in notes[k]: print(f'{"":6} {t}')
        if not a.summary:
            print(f'{k:6} {who:40} Dice({n},{sides},{add}) r={r}')
            continue
        key = (who.split('+')[0], n, sides, add)
        if run and run[0] == key:
            run[2] = k
        else:
            if run: print(f'{run[1]:6}-{run[2]:6} x{run[2] - run[1] + 1:5}  {run[0][0]:32} Dice({run[0][1]},{run[0][2]},{run[0][3]})')
            run = [key, k, k]
    if run: print(f'{run[1]:6}-{run[2]:6} x{run[2] - run[1] + 1:5}  {run[0][0]:32} Dice({run[0][1]},{run[0][2]},{run[0][3]})')


if __name__ == '__main__':
    main()
