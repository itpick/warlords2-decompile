# The remake AI — finishing it to match the original

Date: 2026-10-08. Goal: the remake's AI (src/main.c, `ExecuteAITurn` and its ~50
helpers) behaves exactly like the PPC 1.0.7 original, verified by a same-seed
number comparison over a full game.

## Where it stands (verified at HEAD 899fe8e, 8 Oct 2026)

The 20-step dispatcher is complete and all major structures exist (AIBlock,
per-army `sAIOrd`, the neighbour table `AINeighbourBuild`/`AINbPick`, the win
estimate `AIWinEstimate` on a quiet `sBattleSim`, quests on the real
`gs+0x1142` record, hero AI incl. the disassembled choice switch, fronts with
the B3 minMoves/feeder-flag tail, raids, expansion cascade, production modes,
vectoring). The three reviews (`docs/2026-10-02-review-ai-phase1.md`,
`docs/2026-10-03-review-heroes-quests-ai2.md`, the Isles replay log) drive
what is left.

## Work queue

### Phase 1 — close the review findings in code (HIGH first)

Confirm each against current HEAD before changing (several are fixed):
A1-1 group/done in AIStepExecute (looks fixed: AIStackGroup marks all), A1-2
AIRetarget (exists), A1-3 AIExpandCity returns 0 (exists), A1-4 slot stats in
AIChooseProduction/AIWeakestSlot/AICityGoodSlot/AISetProduction (looks fixed),
A1-5 re-dispatch per-slot disband + MP>=8 count, A1-6 AIReleasePool
rules (R skip, cap 8, sort by max moves, the <15 enemy return, AISeparateUnits
before AIFreeRoam), A1-7/AIAfterBattle raze/pillage FUN_10012324, A1-8 AIIsCity
terrain test (exists), A1-9 cached income/upkeep (AITurnTotals exists — verify
AIIncome/AIUpkeep are gone), A1-12 AIStackLead fight order, A1-20 personality
ranges vs PEF, A1-22 buy re-sort/defence (AICityDefence + FinalizeCitySlots
exist in AIBuyFlyerSlot — check AIStepBuyProduction's set path too).
Then B-items: B1 (fixed — the loop exists), B2 AIFrontMoveStacks r=0/r=2
(looks fixed — verify the r=0 continuation targets `sAIOrd[last].target` via
FUN_1001c2dc and the r=2 repeat is unguarded like the original), B3 (fixed),
B4 computer quests (QREC exists — verify FUN_10015324's 1/2-unit minimum and
FUN_10012a8c's forced raze for type 5), B5 (fixed: AINeutralsStrong),
B6 AIRuinValid +22 for SITE_HARD not temples, B7 the computer sage
FUN_100126a4 (AISageRevealRect exists — verify items/gold/reveal order), B8
kind-5 ally release, B9 frontTgt[f] == holder, B10 turnsOwned[99] fallback,
B11 field-attack abs() cost, B12 hand-over phases (no >=2 rule, no receiver
extension), B13 pillage/sack reset defence via FUN_10048c90, B14 history
events in the convergence, B18 roam passability `t != 6 || flying`, B19
invalid-ruin clear across fronts.

### Phase 2 — the number-comparison harness (tasklist item 16)

The M4 plan's missing evidence. Add to main.c a per-turn AI dump compiled in
only with `#ifdef AI_TRACE` (or behind a debug flag): for each AI side per
turn — gold, income, upkeep, per-city {owner, role, production, progress,
unitCount, slots}, per-army {x, y, types, mp, order word}, the diplomacy
bytes, and the RNG state (randSeed). Write it as text to a file.
Run the SAME scenario+seed through the original (InfiniteMac or the recorded
movies) and diff field by field; the first divergence names the turn and the
field. The Isles movies (.devloop/movies/fullgame_orig.mp4, wingame_orig.mp4)
are the reference recordings; the info panel gives gold/income/upkeep/cities
per round for a manual spot-diff even without a full dump from the original.

### Phase 3 — verification loop

1. Same-seed hot-seat Erythea, 10 rounds: remake dump vs the original's
   visible numbers.
2. AI-only game to turn 50: compare city counts, capture order, garrison
   sizes, stack sizes, notoriety.
3. Fix what diverges (the dump names the step), rebuild, repeat.

## Constraints

- PPC is the authority; main.c comments cite FUN_100xxxx.
- The reviews' line numbers are stale (they cite 6b4b1a5/3b60499) — re-locate
  each finding at HEAD before judging it fixed.
- RNG order matters: the reviews' "RNG call order" list is the check-sheet for
  every touched function.
- No AI attribution in commits; descriptive sentences citing PPC names.
- Keep the Isles replay path working: rebuild via the build.log command, and
  the launch scripts in .devloop/launch_remake must still work.
