#!/usr/bin/env python3
"""rng_log_diff.py - the first place the remake's Random() stream leaves the original's.

Reads both logs live (tools/rng_log.py: the remake's FIXED_SEED build on
--remake-port, the original patched by patch_orig_rnglog.py on --orig-port)
and walks them call by call.  The two sides name callers differently (main.c
functions against PPC FUN_ addresses), so the walk learns the pairing as it
goes.  It reports the first call whose die (sides, add) differs; with
--strict also the first where the caller changes on one side only (main.c
inlines several PPC functions, so that check has false alarms).  A short context of
both logs is printed around it.

  rng_log_diff.py [--from K] [--remake-port 3201] [--orig-port 3202] [--context 12]
"""
import argparse, os, subprocess, sys

HERE = os.path.dirname(os.path.abspath(__file__))


def calls(args):
    out = subprocess.run([sys.executable, os.path.join(HERE, 'rng_log.py')] + args,
                         capture_output=True, text=True, check=True).stdout.splitlines()
    rows = []
    for l in out:
        if l.startswith('#') or not l.strip():
            continue
        p = l.split()
        die = l[l.index('Dice('):].split(')')[0][5:].split(',') if 'Dice(' in l else ['?', '?', '?']
        rows.append((int(p[0]), p[1].split('+')[0], ' '.join(p[1:]), (die[1], die[2])))
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--from', dest='lo', type=int, default=0)
    ap.add_argument('--remake-port', default='3201')
    ap.add_argument('--orig-port', default='3202')
    ap.add_argument('--context', type=int, default=12)
    ap.add_argument('--strict', action='store_true')
    a = ap.parse_args()
    r = calls(['--port', a.remake_port, '--from', str(a.lo)])
    o = calls(['--orig', '--port', a.orig_port, '--from', str(a.lo)])
    n = min(len(r), len(o))
    pair = {}
    bad = None
    for i in range(n):
        rf, of = r[i][1], o[i][1]
        if r[i][3] != o[i][3]:
            bad = i
            break
        if a.strict and i > 0:
            rchg, ochg = rf != r[i - 1][1], of != o[i - 1][1]
            if rchg != ochg and not (rchg and pair.get(rf) == of):
                bad = i
                break
        if a.strict and pair.get(rf, of) != of and of not in pair.values():
            bad = i
            break
        pair.setdefault(rf, of)
    print(f'remake {len(r)} calls, original {len(o)} calls from {a.lo}')
    if bad is None:
        print('no divergence in the common part' + ('' if len(r) == len(o) else ' (lengths differ)'))
        return 0
    print(f'first divergence at call {r[bad][0]}')
    for i in range(max(0, bad - a.context), min(n, bad + a.context)):
        mark = '>>' if i == bad else '  '
        print(f'{mark} {r[i][2]:55.55} | {o[i][2]}')
    return 1


if __name__ == '__main__':
    sys.exit(main())
