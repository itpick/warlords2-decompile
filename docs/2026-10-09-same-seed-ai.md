# Same-seed run 2: the random streams and the AI (9 Oct 2026)

Follow-up to `docs/2026-10-09-same-seed-run.md`. Same setup: Erythea, the
default options, side 0 (Sirians) human with no moves, sides 1-7 Knights,
seed 715183689. Both games now record their random streams, and both
states can be read live (`docs/testing.md` section 4a), so the comparison
goes call by call and unit by unit instead of pixel by pixel.

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

## How far the two games now agree

Each line below is the state at a human turn, after that round's computer
turns. Calls are counted from the launch seed. The state was not read at
turns 5 and 6 of the final run, but every roll agreed through them and the
full state agreed again at turn 7.

| turn | Random() calls agreeing | units (owner, tile, type, strength) | unit-table indices | gold, 8 sides | city owners |
|---|---|---|---|---|---|
| 1 | 1214 / 1214 | 81 = 81 | equal | equal | equal |
| 2 | 1548 | 88 = 88 | equal | equal | equal |
| 3 | 2056 | 88 = 88 | equal | equal | equal |
| 4 | 2740 | 89 = 89 | equal | equal | equal |
| 5 | 3871 | not read | | | |
| 6 | 5182 | not read | | | |
| 7 | 7329 | 98 = 98 | equal | equal | equal |
| 8 | first divergence at call 7778 | differs | | | |

The overview also agrees from turn 1 on. The hill pixels are identical,
since both show PICT 10001. 6 pixels still differ: the ruin dots noted in
the first run, a drawing difference with no game effect.

Before these fixes the first divergence was at call 1204, before turn 1.

## What still differs

- **Round 8, call 7778, side 1.** Side 1's stack (a type-9 unit and its
  hero) re-checks its target (FUN_1001f48c -> FUN_1001f220). Both games
  estimate the battle against the cities at (40,93) and (30,92), ten
  identical simulations each. The original then also estimates the city at
  (52,88), which belongs to side 2, at war with side 1 in both games. The
  remake skips that city and gives the stack its orders. FUN_1001f220 takes
  a city when FUN_10020d88 finds a labelled ring tile in the flood
  FUN_1001f48c builds (FUN_100448e4 with 15). So the remake's flood
  (`AIFloodForStack`) or its reach test does not label what the original's
  does around (52,88). Both games were frozen at roll 7716 and their flood
  grids read: the original's is the path grid at *(r2-776) (30000
  unlabelled, 30001 blocked), the remake's `sAIFloodCost`. At that roll
  neither grid held the re-check's flood, so the next step is to stop
  inside FUN_1001f220 itself (an entry hook with a break) and compare the
  two grids cell by cell.
- **Heap-dependent behaviour.** The original's uninitialised unit table
  (row 9) makes its AI depend on what the heap held. Only the same-seed
  builds reproduce it, from the bits read in the devloop emulator. On
  another machine the original itself would behave differently.
- **Speed.** The remake's computer turns take 2-3 minutes per round by
  round 8. The original takes under 30 s. Same-seed runs have to wait for
  the slower game.

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

## Fixes in the code

- `src/main.c`, cited per fix above. `tests/host/t_samegame.c` pins each
  one: the PICT overview spends no roll, the 24 personality rolls (the
  original's dice), the lowest-free unit index, the unit-table walk and the
  leftover fronts, one unit per regrouped record, the scenario's neighbour
  table.
- The tools: `tools/patch_orig_rnglog.py`, `tools/rng_log.py`,
  `tools/rng_log_diff.py`, `tools/state_diff.py`, and the bridge's
  `/mem /memfind /seedscan /poke /break` (`docs/testing.md` section 4a).
