# First same-seed run: original vs remake (9 Oct 2026, tasklist D15/D16)

> **Follow-up:** `docs/2026-10-09-same-seed-ai.md` explains both
> divergences below. The hill pool is the scenario's PICT 10001, which the
> original draws without rolling. The AI captures came from the setup order,
> the unit-table order and five other causes. The two games now agree on
> every roll and unit through turn 7.

Setup:
- Erythea, default setup, human = Sirians (side 0), sides 1-7 computer.
- Launch seed randSeed = 715183689 (0x2AA0D649) on both.
  - Original: the PPC 1.0.7 app patched by `tools/patch_orig_seed.py`, run
    from the emulator's disk (bridge :3200).
  - Remake: HEAD of `feat/tasklist-and-tests` built with
    `FIXED_SEED=715183689` (bridge :3201).
- Same clicks on both: pick Erythea, Start, hire the offered hero, close
  the city window, then End Turn each round with no other human moves.

## What agrees

| check | original | remake |
|---|---|---|
| hero offered on turn 1 (`PickHeroName`, a Dice roll) | Sir Abellius | Sir Abellius |
| turn-1 info area: cities / treasury / income / upkeep | 1 / 254 / 38 / 4 | 1 / 254 / 38 / 4 |
| round 2 treasury | 268 | 268 |
| round 3 treasury | 302 | 302 |
| rounds 4, 5 treasury | 336, 370 | 336, 370 |
| overview city shields after round 1's AI turns | — | same as the original (only the ruin dots differ, 6 px) |

The remake launched without a fixed seed (the same session, earlier)
showed 230 / 38 / 8 on turn 1. With the seed pinned, the starting slot
jitter (FUN_1003b9f8), the hero roll and the human side's economy all
match. Until the hero offer, the two streams have used the same number of
rolls.

## First divergences

1. **The overview's hill pool, before turn 1.** `BuildOverviewBase`,
   FUN_10063af8: 256 × Dice(1,3,1). On the turn-1 overview every
   differing pixel is one of the three hill greys (#717171, #8F8F8F,
   #ABABAB, about 4,700 px, 6.7% of the overview). Nothing else differs.
   The pool is taken from a different point of the stream in the remake
   than in the original, but the number of rolls before the hero offer is
   the same (the name matches). Likely cause: the original rolls the pool
   at another moment of the start-up sequence.
   **Next step:** recover the original's pool from its overview pixels.
   The read order is the remake's loop over the hill tiles (sprites
   80..95 with no road). Search the Park-Miller stream for that sequence,
   and compare its offset with the remake's.
2. **The AI's city captures, during round 2's AI turns.** On the round-3
   overview the original's green side (owner 4) holds the east-island
   city at overview pixels (209..221, 105..117), and the remake's does
   not. By round 5 there are five differing cities:
   - green: 2 captures on the east island in the original, none in the
     remake;
   - light blue: 1 capture in the remake that the original doesn't have;
   - yellow: a different southern city in each game.

   Ignoring hill pixels, the overviews differ by 6, 6, 40, 142 and 176 px
   for rounds 1-5.
   This can be a consequence of (1), if any computer decision before then
   reads the stream at a different offset. It can also be a separate
   difference in the planner.

Evidence: screenshots `.devloop/shots/3200/sd_*.png` and
`.devloop/shots/3201/sd_*.png` (not tracked); the round-5 overview pair is
`docs/2026-10-09-same-seed-overview-r5.png` (original left, remake right,
differing cities boxed).

## Seen in passing (not numbers)

- Behind the next turn banner, the remake's info area still shows the
  last computer side's name and flag strip. The original's is blank
  marble.
- With the city window open on turn 1, the remake's button bar shows the
  hero / city / shield buttons enabled. The original's are greyed out.

## How to repeat

See `docs/testing.md` section 4.
