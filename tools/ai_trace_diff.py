#!/usr/bin/env python3
"""ai_trace_diff.py - compare a remake AI trace (aitrace.txt) against the
original's visible numbers, field by field (Phase 2 of the completion plan).

The reference side is text: lines of `round,side,field,value` (CSV or the
same form copied out of a log).  Fields understood:
    gold, income, upkeep, cities
The trace side supplies gold / income / upkeep from `T<s> TURN` lines and
the city count from `T<s> CITY` lines whose owner matches the side.

Usage:
    python3 tools/ai_trace_diff.py aitrace.txt reference.csv
    echo "3,2,gold,726" | python3 tools/ai_trace_diff.py aitrace.txt -

Reference line format: round,side,field,value  e.g.
    3,2,gold,726
    4,5,income,98
    7,1,cities,4

Output: for every reference row, the trace's value for that round+side and
MATCH / MISMATCH; the first mismatch of each round is flagged as the place
the runs diverged.  Text only - no screenshots involved.
"""

import sys
from collections import defaultdict


def parse_trace(path):
    """-> dict[(round, side)] = {gold, income, upkeep, cities}"""
    snaps = defaultdict(lambda: {"gold": None, "income": None,
                                 "upkeep": None, "cities": None})
    cur_round = None
    with open(path, "r", errors="replace") as f:
        for line in f:
            line = line.strip()
            if line.startswith("R") and " BEGIN" in line:
                try:
                    cur_round = int(line[1:].split()[0])
                except ValueError:
                    cur_round = None
                continue
            if not line.startswith("T"):
                continue
            parts = line.split()
            # T<s> TURN <n> GOLD <g> INC <i> UPK <u> SEED <seed>
            if len(parts) >= 9 and parts[1] == "TURN":
                side = int(parts[0][1:])
                rnd = int(parts[2])
                snap = snaps[(rnd, side)]
                snap["gold"] = int(parts[4])
                snap["income"] = int(parts[6])
                snap["upkeep"] = int(parts[8])
            # T<s> CITY <ci> OWN <o> ...
            elif len(parts) >= 5 and parts[1] == "CITY":
                if cur_round is None:
                    continue
                side = int(parts[0][1:])
                owner = int(parts[4])
                if owner == side:
                    key = (cur_round, side)
                    if key in snaps:
                        prev = snaps[key]["cities"]
                        snaps[key]["cities"] = 1 if prev is None else prev + 1
    return snaps


def parse_reference(path):
    rows = []
    src = sys.stdin if path == "-" else open(path, "r")
    for raw in src:
        raw = raw.strip()
        if not raw or raw.startswith("#"):
            continue
        # tolerate CSV with or without spaces; ignore a header row
        cells = [c.strip() for c in raw.split(",")]
        if len(cells) != 4 or cells[0] in ("round", "turn"):
            continue
        try:
            rnd, side, field, value = (int(cells[0]), int(cells[1]),
                                       cells[2].lower(), int(cells[3]))
        except ValueError:
            continue
        rows.append((rnd, side, field, value))
    if path != "-":
        src.close()
    return rows


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        return 2
    trace_path, ref_path = sys.argv[1], sys.argv[2]
    snaps = parse_trace(trace_path)
    rows = parse_reference(ref_path)
    if not rows:
        print("no reference rows parsed")
        return 2

    first_bad = {}
    bad = 0
    for rnd, side, field, want in rows:
        got = snaps.get((rnd, side), {}).get(field)
        ok = got is not None and got == want
        if not ok:
            bad += 1
            first_bad.setdefault(rnd, (side, field, want, got))
        print("round %2d side %d %-6s original %-6s remake %-6s %s"
              % (rnd, side, field, want,
                 "?" if got is None else got,
                 "MATCH" if ok else "MISMATCH"))

    print()
    if bad:
        for rnd in sorted(first_bad):
            side, field, want, got = first_bad[rnd]
            print("first divergence, round %d: side %d %s "
                  "(original %s, remake %s)"
                  % (rnd, side, field, want,
                     "?" if got is None else got))
        print("%d of %d checks mismatched" % (bad, len(rows)))
        return 1
    print("all %d checks matched" % len(rows))
    return 0


if __name__ == "__main__":
    sys.exit(main())
