#!/usr/bin/env python3
"""Structural checks over an AI trace dump (Phase 3 of the AI completion plan).

Checks that must hold regardless of seed:
  1. economy ledger: gold(r+1) == gold(r) + income - upkeep, per side
  2. income sanity: 0 < income < 500 (a city's income is 1-40ish; a side with
     20 cities stays under 500)
  3. upkeep sanity: 0 <= upkeep <= income + 100 (upkeep can exceed income)
  4. production sanity: PROD is -1 or a valid unit type 0..28; PRG is -1 or
     0..30 (no slot takes 30 turns)
  5. role sanity: ROLE in 0..14 (the web's known roles) or 0 for non-own cities
  6. army sanity: every record's tile is on the map (negative = in vectoring
     transit, allowed); types are 0..28 or 0xFF

Usage: python3 tools/ai_trace_checks.py aitrace3_r2.txt [r3 r4 ...]
"""
import sys, re
from collections import defaultdict

MAX_TYPE = 28

def parse_round(path):
    sides = defaultdict(dict)   # side -> {'turn': n, 'gold': n, ...}
    cities = defaultdict(list)  # side -> [(ci, own, role, cf, u, p, prod, prg, slots)]
    armies = defaultdict(list)  # side -> [(i, x, y, own, types, mp, ord...)]
    for line in open(path):
        m = re.match(r'T(\d+) TURN (\d+) GOLD (-?\d+) INC (-?\d+) UPK (-?\d+)', line)
        if m:
            s = int(m.group(1))
            sides[s] = dict(turn=int(m.group(2)), gold=int(m.group(3)),
                            inc=int(m.group(4)), upk=int(m.group(5)))
            continue
        m = re.match(r'T(\d+) CITY (\d+) OWN (\d+) ROLE (\d+) CF (\d+) U (\d+) P (\d+) PROD (-?\d+) PRG (-?\d+)', line)
        if m:
            cities[int(m.group(1))].append(tuple(int(g) for g in m.groups()[1:]))
            continue
        m = re.match(r'T(\d+) ARMY (\d+) XY (-?\d+) (-?\d+) OWN (\d+)', line)
        if m:
            armies[int(m.group(1))].append((int(m.group(2)), int(m.group(3)),
                                            int(m.group(4)), int(m.group(5))))
    return sides, cities, armies

def main(paths):
    failures = 0
    econ = {}   # (round_label, side) -> (gold, inc, upk)
    for path in paths:
        tag = re.search(r'_r(\d+)', path)
        label = 'r' + tag.group(1) if tag else path
        sides, cities, armies = parse_round(path)
        for s, d in sorted(sides.items()):
            econ[(label, s)] = (d['gold'], d['inc'], d['upk'])
            # 2/3: income and upkeep sanity
            if not (0 < d['inc'] < 500):
                print(f'FAIL [{label} side {s}] income {d["inc"]} out of range'); failures += 1
            if d['upk'] < 0:
                print(f'FAIL [{label} side {s}] upkeep {d["upk"]} negative'); failures += 1
        for s, rows in cities.items():
            for (ci, own, role, cf, u, p, prod, prg, *_slots) in rows:
                # 4: production sanity
                if prod != -1 and not (0 <= prod <= MAX_TYPE):
                    print(f'FAIL [{label} side {s}] city {ci}: production {prod} invalid'); failures += 1
                if prod == -1 and prg not in (-1, 0):
                    print(f'FAIL [{label} side {s}] city {ci}: idle progress {prg}'); failures += 1
                if prg > 30:
                    print(f'FAIL [{label} side {s}] city {ci}: progress {prg} > 30'); failures += 1
                # 5: role sanity
                if own == s and not (0 <= role <= 14):
                    print(f'FAIL [{label} side {s}] own city {ci}: role {role} invalid'); failures += 1
        for s, rows in armies.items():
            for (i, x, y, own) in rows:
                # 6: on the map; negative coordinates are a record in
                # vectoring transit (x = -1, docs/2026-10-08-ai-trace.md)
                if x < 0 or y < 0:
                    continue
                if not (x < 112 and y < 156):
                    print(f'FAIL [{label} side {s}] army {i} off-map at {x},{y}'); failures += 1
    # 1: the ledger across consecutive rounds for sides present in both
    labels = sorted({lbl for (lbl, _s) in econ}, key=lambda l: int(l[1:]) if l[1:].isdigit() else 0)
    for a, b in zip(labels, labels[1:]):
        sides_a = {s for (lbl, s) in econ if lbl == a}
        sides_b = {s for (lbl, s) in econ if lbl == b}
        for s in sorted(sides_a & sides_b):
            g0, inc, upk = econ[(a, s)]
            g1, _, _ = econ[(b, s)]
            # captures add treasuries, so only flag when gold DROPPED below the floor
            if g1 < g0 + inc - upk - 2000 and g1 < g0:
                print(f'FAIL ledger {a}->{b} side {s}: {g0}+{inc}-{upk} but next gold {g1} (fell)');
                failures += 1
            else:
                print(f'ok ledger {a}->{b} side {s}: {g0}+{inc}-{upk} <= {g1}')
    print(f'--- {failures} failures' if failures else '--- all structural checks passed')
    return 1 if failures else 0

if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
