# AI trace run — first results (8 Oct 2026)

Build: AI_TRACE=1 at the buffered per-round publish (one file per round, created
lazily at its first record). Scenario: Erythea, 8 sides, the endturns_12 script
(12 rounds, side 0 human-driven, sides 1-7 AI).

## What came out

- `aitrace3_r2..r5.txt` in .devloop/pulled/: rounds 2-5 complete-ish (r5 has side
  2 only — the shared fs freezes a file after its first download; rounds 2-4 are
  complete for all 6 AI sides).
- Round 1 came through earlier (aitrace3.txt, 1617 lines, all sides).

## What it proves (the trace's internal consistency)

1. **The economy ledger is exact.** For every AI side, gold(r+1) == gold(r) +
   income - upkeep holds to the unit across rounds 2→3→4 (checked all sides).
   Windfalls (side 5's 1324 gp at round 4) are city-capture treasuries.
2. **The AIs expand.** Neutral cities (owner 15) fall 504 → 484 → 463 → 442 over
   rounds 2-5; side 2 grows 7 → 26 cities, sides 1,3,4,5,7 to 14-21. Income
   jumps (34 → 50-60) exactly when the captures land.
3. **Production is alive and role-driven.** 111 of ~190 owned cities producing at
   round 5; different types per side (modes per role working); no stuck -1/-2.
4. **The original's order machinery is in use.** Side 2's hero record carries
   flag 0x280 = done-this-turn + AIO_CONTINUE (capture-and-continue), MP values
   coherent with the terrain.
5. **Roles classify.** Side 2's new cities hold role 3 (expansion) at round 5.

## Known trace-harness limitations (documented, not game bugs)

- The shared fs downloads each Uploads path once (worker ns() marks a path done
  at first sight); a file's later appends never re-publish. Per-round files
  limit the loss to the current round; the last round in a run is often partial.
- The dump walks min(cityCount,140) slots; Erythea's 120 city+site slots all fit.

## Next

- Same-seed same-script runs of the ORIGINAL (bridge :3200) and the remake, then
  tools/ai_trace_diff.py for the field-by-field comparison (tasklist item 16).
- A longer overnight soak (30+ rounds) once the per-round freeze is tolerable or
  fixed (publish-once-per-round is the current mitigation).
