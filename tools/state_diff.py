#!/usr/bin/env python3
"""state_diff.py - the remake's and the original's game state side by side, read live.

Same-seed runs (docs/testing.md section 4): the remake's FIXED_SEED build on
--remake-port publishes where its state lives (main.c sRngState, magic
'WL2STATE'); the original's is found through its TOC: the qd global (its
randSeed is the Park-Miller state after --rolls calls, or found by --seed
scan), the TOC slot that holds &qd sits at r2-0xb0, and r2-1348 / r2-1344
hold the game state and the 1000-unit table (PPC FUN_10021434).

Prints every unit as (owner, x, y, type, strength) on both sides, each
side's units the other lacks, and the cities whose owner differs.

  state_diff.py [--remake-port 3201] [--orig-port 3202] [--owner N]
"""
import argparse, collections, struct, sys, urllib.request

SEED = 715183689


def get(port, path):
    return urllib.request.urlopen(f'http://127.0.0.1:{port}{path}', timeout=600).read().decode().strip()


def mem(port, a, n):
    return bytes.fromhex(get(port, f'/mem?a={a}&n={n}'))


def u32(port, a):
    return struct.unpack('>I', mem(port, a, 4))[0]


def remake_state(port):
    hits = [int(x) for x in get(port, '/memfind?hex=574c325354415445').split() if x]
    for h in hits:
        gs, armies, cities, ccount, uids = struct.unpack('>IIIII', mem(port, h + 8, 20))
        if gs:
            break
    else:
        sys.exit('remake: no WL2STATE (not a FIXED_SEED build, or no Dice call yet)')
    g = mem(port, gs, 0x2FCC)
    n = struct.unpack('>h', g[0x1602:0x1604])[0]
    raw = mem(port, armies, n * 0x42)
    uraw = mem(port, uids, n * 8) if uids else bytes(n * 8)
    units, index = [], {}
    for i in range(n):
        a = raw[i * 0x42:(i + 1) * 0x42]
        x, y = struct.unpack('>hh', a[:4])
        for k in range(4):
            t = a[0x16 + k]
            if t != 0xFF:
                u = (a[0x15], x, y, t, a[0x1e + k])
                units.append(u)
                index.setdefault(u, []).append(struct.unpack('>h', uraw[i * 8 + k * 2:i * 8 + k * 2 + 2])[0])
    cc = struct.unpack('>h', mem(port, ccount, 2))[0]
    craw = mem(port, cities, cc * 0x20)
    cities_ = {}
    for i in range(cc):
        c = craw[i * 0x20:(i + 1) * 0x20]
        if c[0x17] < 2:
            x, y, o = struct.unpack('>hhh', c[:6])
            cities_[(x, y)] = o
    return g, units, cities_, index


def orig_state(port, turn_hint=None):
    # the qd global: randSeed is at qd+0x4c; find any randSeed-looking word
    # via the RNG log's count (patch_orig_rnglog.py) when present
    hits = [int(x) for x in get(port, f'/memfind?hex={b"WL2ORIGL".hex()}').split() if x]
    count = 0
    for h in hits:
        c, ert = struct.unpack('>II', mem(port, h + 8, 8))
        if ert:
            count = c
    s = SEED
    for _ in range(count):
        s = (s * 16807) % 2147483647
    rs = [int(x) for x in get(port, f'/memfind?hex={s:08x}').split() if x]
    for r in rs:
        qd = r - 0x4c
        for slot in [int(x) for x in get(port, f'/memfind?hex={qd:08x}').split() if x]:
            r2 = slot + 0xb0
            try:
                gsp = u32(port, u32(port, r2 - 1348))
                up = u32(port, u32(port, r2 - 1344))
            except Exception:
                continue
            if not (0x1000 < gsp < 0x20000000 and 0x1000 < up < 0x20000000):
                continue
            g = mem(port, gsp, 0x2FCC)
            if g[:7] != b'Sirians' and not g[0:1].isalpha():
                continue
            nunits = struct.unpack('>h', g[0x182:0x184])[0]
            if not (0 < nunits <= 1000):
                continue
            raw = mem(port, up, nunits * 0x16)
            units, index = [], {}
            for i in range(nunits):
                u = raw[i * 0x16:(i + 1) * 0x16]
                x, y = struct.unpack('>hh', u[:4])
                if u[5] == 0xFF:
                    continue
                t = (u[5], x, y, u[4], u[8])
                units.append(t)
                index.setdefault(t, []).append(i)
            nc = struct.unpack('>h', g[0x1602:0x1604])[0]
            cities_ = {}
            for i in range(nc):
                c = g[0x1604 + i * 0x42:0x1604 + (i + 1) * 0x42]
                x, y = struct.unpack('>hh', c[:4])
                cities_[(x, y)] = c[0x15]
            return g, units, cities_, index
    sys.exit('original: game state not found (is patch_orig_rnglog.py\'s build running a game?)')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--remake-port', default='3201')
    ap.add_argument('--orig-port', default='3202')
    ap.add_argument('--owner', type=int, default=None)
    ap.add_argument('--all', action='store_true', help='list every unit, not just the differences')
    a = ap.parse_args()
    rg, ru, rc, ri = remake_state(a.remake_port)
    og, ou, oc, oi = orig_state(a.orig_port)
    print(f'turn remake {struct.unpack(">h", rg[0x136:0x138])[0]}  original {struct.unpack(">h", og[0x136:0x138])[0]}')
    for p in range(8):
        print(f'side {p}: gold {struct.unpack(">h", rg[0x186 + p * 0x14:0x188 + p * 0x14])[0]:6} '
              f'{struct.unpack(">h", og[0x186 + p * 0x14:0x188 + p * 0x14])[0]:6}')
    keyed = lambda us: collections.Counter(u for u in us if a.owner is None or u[0] == a.owner)
    R, O = keyed(ru), keyed(ou)
    only_r, only_o = R - O, O - R
    print(f'units: remake {sum(R.values())}, original {sum(O.values())}; differing remake {sum(only_r.values())}, original {sum(only_o.values())}')
    for u in sorted(only_r.elements()):
        print('  remake only  ', 'owner %2d (%3d,%3d) type %2d str %d' % u)
    for u in sorted(only_o.elements()):
        print('  original only', 'owner %2d (%3d,%3d) type %2d str %d' % u)
    badidx = [(u, sorted(ri.get(u, [])), sorted(oi.get(u, []))) for u in sorted(set(ri) & set(oi))
              if sorted(ri.get(u, [])) != sorted(oi.get(u, []))]
    print(f'units whose unit-table index differs: {len(badidx)}')
    for u, r, o in badidx[:40]:
        print('  owner %2d (%3d,%3d) type %2d str %d' % u, f'remake {r} original {o}')
    diffc = [(xy, rc.get(xy), oc.get(xy)) for xy in sorted(set(rc) | set(oc)) if rc.get(xy) != oc.get(xy)]
    print(f'cities with another owner: {len(diffc)}')
    for xy, r, o in diffc:
        print(f'  {xy}: remake {r} original {o}')
    if a.all:
        for u in sorted(R.elements()):
            print('  R', u)
        for u in sorted(O.elements()):
            print('  O', u)
    return 1 if (only_r or only_o or diffc) else 0


if __name__ == '__main__':
    sys.exit(main())
