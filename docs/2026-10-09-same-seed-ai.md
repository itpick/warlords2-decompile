# Same-seed run 2: the random streams and the AI (9-10 Oct 2026)

Follow-up to `docs/2026-10-09-same-seed-run.md`. Same setup: Erythea, the
default options, side 0 (Sirians) human with no moves, sides 1-7 Knights,
seed 715183689. Both games now record their random streams, and both
states can be read live (`docs/testing.md` section 4a), so the comparison
goes call by call and unit by unit instead of pixel by pixel. Rows 1-9
below are from 9 Oct (agreement through round 6); rows 10-19 from 10 Oct
(every roll through round 16).

## Method

- The original: `tools/patch_orig_rnglog.py` builds a seeded copy whose
  `Random()` calls are logged (the return address of Dice's caller and the
  die), with notes for every battle (units, values, hit points) and for
  FUN_10018b14 / FUN_10018800 (which city expands and with which units).
- The remake: a `FIXED_SEED` build logs every `Dice` call and notes
  battles and the AI's expansion choices.
- `tools/rng_log_diff.py` finds the first call whose die differs;
  `tools/state_diff.py` compares every unit (owner, tile, type, strength,
  unit-table index), each side's gold and every city's owner at a human
  turn.

## Root causes found

In the order they showed up. Each was confirmed against the original's log,
then fixed against the PPC code.

| # | Where | Evidence | Fix |
|---|---|---|---|
| 1 | Overview hill pool | The original's turn-1 overview equals Erythea's PICT 10001 pixel for pixel. Its hill pixels are the pool from randSeed 0x2AA0D649 at offset 0, the scenario author's seed. The original's log has no FUN_10063af8 call. The remake rolled 256 dice at its first overview draw (calls 1204-1459). | FUN_1002869c draws the scenario's PICT 10001. Only a map without one, a random map, rolls the pool. |
| 2 | Start | The original's calls 1-24 are FUN_10020640, 3 per side, sides 7..0 (Knight 1d4 x3, then the human side as a Warlord: 1d10 1d8 1d6). The remake rolled these at each side's first turn, so the sites, items, slot jitter and zones all used other numbers. Its site setup (simulated in Python from the PPC FUN_1003956c) reproduces the original's hidden sites and item placement only from offset 27. | `NewGameComputerBlocks()` at the top of `BeginNewGame` (FUN_1005a6ac -> FUN_1000c67c). |
| 3 | Turn music | The remake rolled `Dice(1,8,-1)` for the turn tune before the turn-1 banner. The original rolls nothing there: FUN_10029ac0, which the remake cited, is the saved-game loader. | No tune at game start. At a human turn start the order is FUN_10065d24's: quest check and helmet comment (phase -1), then the hero offer, then FUN_10092484(4) if a hero was offered, else FUN_10092484(1) with its roll. |
| 4 | Unit order | Round 2: side 4 sent its hero to the city at (106,54). The original sent the type-26 unit, which is index 43 in its unit table; the hero is 84 and the type 12 is 88. FUN_10018b14 walks the table from the last index down and keeps the first R units as a reserve. The remake walked records and slots. | Every unit slot carries the original's unit-table index (`sArmyUid`; FUN_10021434 gives the lowest free one). The expansion, the pool release, the garrison sort and the hero list walk in that order. |
| 5 | Packed records | Round 3: side 4's hero step estimated a battle of 3 attackers (12, 12, hero) where the original's had 1 (the hero). `AIRegroup` had packed a quadrant's units into one record, so the hero moved and fought with them. | `AIRegroup` makes one record per unit, as the original's per-unit table. |
| 6 | Neighbour table | Round 4: side 5 scored 5 neutral neighbours where the original scored 4. FUN_1001db60 loads the scenario's 'AI  ' 10000 as the city neighbour table. It computes one (FUN_1001d66c) only when that resource is missing, and every shipped scenario has one. | `AINeighbourEnsure` copies the resource. |
| 7 | Battle memory | FUN_1000dc4c records the defender's losses: heroes killed, units killed, battles, battles lost outright, and the same for city battles. The remake recorded the attacker's survivors. FUN_10018b14's reserve reads the city-lost count. | `AIBattleMemory` takes the defender's losses. |
| 8 | Unit order in stacks | FUN_1001ee88 / FUN_1001ed3c gather a tile's units from the last table index down. | `AIStackAt` / `AIStackAtAny` walk `sArmyUid` order. |
| 9 | The original's uninitialised unit table | Round 5: the original kept side 4's new unit 90 home; the remake sent it out. The original was frozen at that roll (bridge `/break`) and its table read: unit 90's +0x0C word is 0x02010600, front bits 9-11 = 3. FUN_1003c368 allocates the 1000-unit table without clearing it, and FUN_10021434 keeps bits 7-11 of a new unit's word, so the first unit in each index inherits the heap's bits. FUN_10018b14 then skips the unit as a front member. The bits are the same at every launch in the devloop emulator. | Same-seed (`FIXED_SEED`) builds give a new unit the leftover front of its index from `src/orig_unit_front_bits.inc` (`sUidStale`, `AIRecFront`). A garrison placement or a front assignment clears it, as the original's writes do. Normal builds stay clean, because the bits belong to that heap, not to the game. |
| 10 | The flood's mode | Round 7, roll 7336: side 1's redispatch (FUN_100145c8: FUN_100448e4(20, 47, 110) then FUN_100143b8) estimated the city at (52,88) in the original only. Both games were stopped where the flood had just been built (function breaks, `docs/testing.md` 4a) and their grids read: the original had flooded in mode 2 (flying), the remake on foot. `AIFloodForStack` built the mode from the lead record alone (`PathBuildStack(lead, lead == sSelectedArmy)`), a hero whose flyer sits in another record. FUN_10041de8 selects the whole list first. | `AIFloodForStack` takes the mode of every record of the stack (`PathBuildMovers`). |
| 11 | The flood itself | With the mode right, 1823 of the 17472 cells still differed (1641 by one, 165 reached only by the remake, 17 by two). The remake searched shortest paths from cost 0 out to the radius. FUN_10043248 with the flood flag 0x10 sweeps rings: the start is -1 (cost 1); pass r expands the open (<= 0) cells within r of the start, x-major; it stops before pass `radius`, so it expands to radius-1 and labels to radius; a cell labelled after its scan keeps the dearer label; open cells stay negative and FUN_10003768 (abs) reads them; 30000 is unreached. A Python transcription reproduced all 17472 cells of the original's grid, and so does the C. | `AIFloodRun` is the ring sweep and leaves the original's grid; `AICityReachCost` and `AIFieldAttack` read \|v\| (30000 / 30001 never qualify). |
| 12 | The hero offer's block | Round 7, roll 8607: side 3's hero offer rolled three role dice in the remake (FUN_1000db10: Dice(1,100,100/50/0) for its role 7/2/3 cities), none in the original. FUN_10032a24 runs at the turn start, before FUN_1000c9c8 locks the side's AI block, so `_DAT_3be00000` still points at the previous computer side's block, which has no roles for this side's cities. | `sAIBlockInstalled` (set at step 0); `AIHeroOffer` reads its roles. |
| 13 | The hero offer's place | Round 8, roll 9612: side 1 had 395 gold at its hero step in the remake, 357 in the original; side 7's round-7 hero was unit 113 in the remake, 111 in the original, its cities' new units 111 and 112 against 113 and 114. The computer's turn start runs FUN_10032a24 / FUN_10033548 first, then the level-ups FUN_10033b4c, the income FUN_10064e84, the vectoring and the production. | `ProcessStartOfTurn` makes the computer's offer before its level-ups; the turn music moved ahead of `ProcessStartOfTurn` so the rolls keep their order. |
| 14 | The order loop's start | Round 8, roll 9616: side 1's order step (FUN_10013484) moved the unit at (38,116) first in the remake, the hero's stack at (41,115) in the original. FUN_1005619c takes the unit nearest the last one it took, and FUN_100558f8 puts that position at the side's capital (pstat+0x04/06) at every turn start; the remake kept wherever the previous side had stopped. | Step 3d of `ProcessStartOfTurn` sets `sAILastX/Y` and clears the side's stuck / done flags; `AINextOrdered` breaks ties by the highest unit index. |
| 15 | The defenders' order | Round 8, roll 11111: side 7's estimate at (29,49) fought defenders valued 6, 5 in the remake, 5, 6 in the original. FUN_100ac0cc gathers the defenders walking the unit table from the last index down, and the fight-order sort is stable; the remake walked records. | `BattleAddDefenders` (estimates and real battles). |
| 16 | Allies' indices | Round 9, roll 11635: side 2's hero found two allies in a ruin. The remake indexed new units only at the next `UidSync`, so its hero step gathered both into the hero's group; the original's group had index 21 and left 117 out (its leftover front 7, row 9). FUN_10053838 allocates each ally's entry as it places it. | `AddAlliesToStack` indexes each ally at once. |
| 17 | The original's uninitialised AI blocks | Round 12, roll 21631: side 2's garrison placement (FUN_10010b30) rolled its 1d6 for city 54 in the remake only. Both games stopped at roll 21627 and their blocks read: the income and upkeep equal (139 / 75), but the original's count for city 54 was 44, the remake's 0. FUN_10020ae8 sets a block's roles, turns owned and city flags, never its unit counts (+0x182) or pool counts (+0x1e6): a city keeps the heap's bytes until its first placement, and the placement rolls only when the old count equals the new one. The bytes were the same at turn 1 of another launch and, for cities never placed, still there at round 12. | Same-seed builds start every block's unit and pool counts from `src/orig_ai_block_bits.inc` (read at turn 1); normal builds start at 0. |
| 18 | The income and upkeep the AI reads | Found while checking row 17 (no divergence of its own seen yet): the AI reads DAT_3bc00000 / DAT_2c9d0000, which FUN_1002bcd8 / FUN_1002bbd4 fill at a turn start's income (FUN_10064e84, before the production) and after every battle (FUN_1002e7d4); the remake took live totals after the production. | `AITotalsRecompute` at the turn start's income and after every real battle; `AIIncome` / `AIUpkeep` read its arrays. |
| 19 | A front's stack slots | Round 14, roll 34897: the original's step 4 (FUN_1001d014 -> FUN_1001c854) sent side 7's front-0 stack on (flood 15 at (20,32), FUN_1001c6fc, the estimate at (24,34)); the remake's sent nothing. Both games stopped at that roll: the same front, the same slot value 189. FUN_1001ca30 stores the stack's unit-table index; the remake had stored a record number, and records below it had been removed since (the unit was record 185), so its validation dropped the slot. | `fronts[].stacks` hold unit-table indices; `AIFrontValidateStacks` and `AIFrontMoveStacks` find the unit's record (`AIRecOfUid`). |

## How far the two games now agree

Each line below is the state at a human turn, after that round's computer
turns (`state_diff.py` at every turn of the 10 Oct run). Calls are counted
from the launch seed.

| turn | Random() calls agreeing | units (owner, tile, type, strength) | unit-table indices | gold, 8 sides | city owners |
|---|---|---|---|---|---|
| 1 | 1214 / 1214 | 81 = 81 | equal | equal | equal |
| 2 | 1548 | 88 = 88 | equal | equal | equal |
| 3 | 2056 | 88 = 88 | equal | equal | equal |
| 4 | 2740 | 89 = 89 | equal | equal | equal |
| 5 | 3871 | 91 = 91 | equal | equal | equal |
| 6 | 5182 | 97 = 97 | equal | equal | equal |
| 7 | 7329 | 98 = 98 | equal | equal | equal |
| 8 | 9610 | 116 = 116 | equal | equal | equal |
| 9 | 11502 | 115 = 115 | equal | equal | equal |
| 10 | 13355 | 123 = 123 | equal | equal | equal |
| 11 | 15876 | 137 = 137 | equal | equal | equal |
| 12 | 20102 | 158 = 158 | equal | equal | equal |
| 13 | 26589 | 165 = 165 | equal | equal | equal |
| 14 | 31909 | 191 = 191 | equal | equal | equal |
| 15 | 35354 | 220 = 220 | equal | equal | equal |
| 16 | 41228 | 243 = 243, 4 differ: side 4's stack (3 x type 12, type 26) at (104,51) in the remake, (108,53) in the original | equal | equal | equal |
| 17 | 53662 | 265 = 265, 5 differ (the same stack and one more side-4 unit) | equal | equal | equal |
| 18 | past the remake's log (65536 calls) | 272 = 272, 4 differ | | | |

The overview also agrees from turn 1 on. The hill pixels are identical,
since both show PICT 10001. 6 pixels still differ: the ruin dots noted in
the first run, a drawing difference with no game effect.

Every roll agrees through round 16, 52462 calls after turn 1's 1200 (the
remake's log holds 65536 calls, so round 17's could not be compared).

Before these fixes the first divergence was at call 1204, before turn 1;
after the first nine, at call 7778 in round 7 (turn 8 in the old table's
numbering, which counted the state after the round).

## What still differs

- **Round 15, side 4's stack.** At turn 16 every roll still agrees, but
  side 4's stack of three type-12 units and a type 26 stands at (104,51) in
  the remake and at (108,53) in the original; every other unit, index, the
  gold and the cities agree. No roll told them apart, so the difference is
  a move: the destination the AI gave the stack, or where its path
  stopped (the path code and the order steps make no rolls). Best
  hypothesis: another kept record number (row 19's kind) or a stop rule on
  the way. Next step: note FUN_10018180's destination and the stack's
  units per move in both games (tags 15 / 26 exist) and stop at round 15.
  The remake's log should also become a ring (as the original's) to go
  past 65536 calls.
- **Heap-dependent behaviour.** The original's uninitialised unit table
  (row 9) and AI blocks (row 17) make its AI depend on what the heap held.
  Only the same-seed builds reproduce them, from bytes read in the devloop
  emulator. On another machine the original itself would behave
  differently.
- **Speed.** See the next section.

## Speed

Profiled first: a same-seed build with every AI step, the path and flood
code, the battle simulation and the map drawing wrapped in timebase
(`mftb`) timers.  The AI's own work was under 2 % of a computer turn; 90 %
was `DrawMapInWindow`, run once per step of every computer stack shown
moving (`AIAnimateStep`, `AIShowStack`): about 400 terrain `CopyBits`,
the roads and anchors, then the whole buffer to the window.  Two changes,
neither touches a roll:

- The ground layers (terrain, roads, port anchors) are drawn into a cache
  that covers the view and 8 tiles round it (`DrawGroundLayers`,
  `sGroundGW`), and the view's part is copied into the map buffer.  The
  cache is redrawn when the view creeps out of it or one of its tiles'
  MAP / road bytes changes; a view that jumped is drawn directly.  Up to
  round 9, 849 of 920 map drawings used it.
- A computer stack's step invalidates only its old and new tiles (a tile
  of margin) when the view did not scroll; inside that update the cached
  ground is copied only over the update region.

Banner screenshots of rounds 1-8 are pixel-identical to the previous
build's (the menu-bar clock aside).

| round | before (s) | after (s) | original (s) |
|---|---|---|---|
| 3 | 77-82 | 57-62 | 22 |
| 5 | 92-97 | 62-67 | 22 |
| 7 | 138-153 | 92-99 | 22 |
| 8 | 132 (run E, partial fixes) | 107-108 | 22-27 |

A whole same-seed run to round 12 now takes about 55 minutes.  The rest is
still the map: every step that scrolls the view redraws and copies the
whole window, which the emulator does at about 0.15 s a time.

## The web port (warlords2-web, src/engine)

Read only; nothing was changed there. It has these same bugs:

| fix | web port |
|---|---|
| 1 hill pool | `init.ts:117-118` rolls the 256-value pool on every new game. |
| 2 AI blocks at Start | `initAIBlock` is called only from `aiTurn` (`ai.ts:2143`), at each side's first turn. Human sides never get a block, so `aiBattleMemory` skips them (`attack.ts:176`). |
| 3 turn music | `turn.ts:140-151` makes no music or helmet rolls at all, so its stream drifts by one or more rolls at every human turn. |
| 4, 8 unit order | No unit-table index. `poolUnits` (`aiExpand.ts:222-233`) and `heroList` (`aiHeroes.ts:41`) walk records down and slots up. |
| 5 packed records | A hero that shares a record with other units moves and fights with them (`aiHeroes.ts:227,233`). |
| 6 neighbour table | `aiNeighbourBuild` (`aiNb.ts:91-115`) always floods. It never loads 'AI  ' 10000. |
| 7 battle memory | `attack.ts:167-183,212-213` counts the attacker's survivors. |
| 9 leftover fronts | Not modelled. It is needed only for same-seed runs. |
| 10, 11 flood | Not read this time (see the next section for what a port needs): the AI flood must be FUN_10043248's ring sweep with the whole stack's mode. |
| 12-19 | Not read this time; the next section lists what each needs. |

What the fixes of 10 Oct need in a TypeScript port (by C function):

- `AIFloodForStack` / `AIFloodRun` (rows 10, 11): flood with the mode of
  every record of the stack (lead first); the grid is the original's:
  start -1, passes r = 0 .. radius-1 over the cells within r of the start,
  x-major then y, clamped to start +/- radius; a pass expands every cell
  <= 0 (it becomes -v) and relaxes its neighbours to -(|v| + cost) when that
  beats |label|; stop early after a pass that expands nothing; 30000
  unlabelled, 30001 blocked.  Readers take |v| (`AICityReachCost`: < cap;
  `AIFieldAttack`: <= MP-1, 30000 never).
- `AIHeroOffer` (row 12): FUN_1000db10's role dice read the roles of the
  block of the computer side whose step 0 ran last (`sAIBlockInstalled`).
- `ProcessStartOfTurn` (row 13): a computer side's turn start is music,
  hero offer, level-ups, income, vectoring, production, MP reset; the
  offer must see the gold before the income.
- `ProcessStartOfTurn` step 3d and `AINextOrdered` (row 14): the order
  loop's last position is the side's capital at every turn start; the
  stuck / done flags clear; ties go to the highest unit-table index.
- `BattleAddDefenders` (row 15): defenders in descending unit-table index
  before the stable fight-order sort, in estimates and real battles.
- `AddAlliesToStack` (row 16): an ally takes its unit-table index (the
  lowest free) when placed.  A port without unit-table indices (rows 4, 8)
  needs those first.
- `AIInitBlock` (row 17): only for same-seed runs, the blocks' unit and
  pool counts start from the original's heap bytes.
- `AITotalsRecompute` (row 18): the AI's income / upkeep are every side's
  totals as of the last turn-start income (before the production) or the
  last real battle, not live values.
- `AIFrontValidateStacks` / `AIFrontMoveStacks` / `AIFrontRegisterStack`
  (row 19): a front's four stack slots hold unit-table indices; any record
  number kept across a turn goes stale when records shift.

## Fixes in the code

- `src/main.c`, cited per fix above. `tests/host/t_samegame.c` pins each
  one: the PICT overview spends no roll, the 24 personality rolls (the
  original's dice), the lowest-free unit index, the unit-table walk and the
  leftover fronts, one unit per regrouped record, the scenario's neighbour
  table; and from 10 Oct the ring sweep's values on a walled map (a cell 21
  where a shortest path costs 15), the stack's flood mode, the hero
  offer's block and its place before the income, the order loop from the
  capital, the defenders' order, allies indexed at placement.
- The tools: `tools/patch_orig_rnglog.py`, `tools/rng_log.py`,
  `tools/rng_log_diff.py`, `tools/state_diff.py`, and the bridge's
  `/mem /memfind /seedscan /poke /break` (`docs/testing.md` section 4a).
