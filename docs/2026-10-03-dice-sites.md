# Dice sites: remake vs PPC 1.0.7 (X-1 follow-up, Oct 3 2026)

In the original, the only caller of Toolbox `Random()` (the import glue at
FUN_10002970) is FUN_1005f230, `Dice(n, sides, add)`. A scan of the code
section for `bl 0x10002970` finds exactly one site, at 0x1005f268. So every
random number in the original is a Dice roll. There are 264 `bl 0x1005f230`
sites in the binary. Ghidra shows 255 of them; the other 9 are in
FUN_1004b11c (the quest picker, read from the disassembly) and in an
undecompiled function at 0x100357ec (the quest-allies type).

The original also makes rolls through FUN_1005f50c(table, group, idx): with
`idx == -1` it picks a random string of the DAT group with
`Dice(1, count, -1)`. That includes groups that hold a single line, so a
1-line group still uses up one `Random()`.

main.c now has one generator, `Dice()` (main.c, after `IsSpecialItemTV`).
`AIRnd(n, base)` is a thin wrapper for `Dice(1, n, base)`. `RollDie`, the
`RND` macro and every direct `Random()` outside `Dice` are gone. The
launch-time seeding (FUN_1005f32c) is unchanged.

## Counts

| old form | sites | now |
|---|---|---|
| `(unsigned short)Random() % N` and `Random() & 1`, gameplay | 40 | Dice with the original's (n, sides, add); 6 of them removed (see below) |
| `SLOT_D100()` macro (`Random() % 100 + 1`) in `JitterCitySlotStats` | 8 uses | `Dice(1,100,0)` |
| `RollDie(n)` | 5 + the AIRnd body | Dice / removed |
| `AIRnd(n, base)` = `base + RollDie(n)` | 34 calls | `Dice(1, n, base)` |
| `RND(n)` macro (music) | 4 | `Dice(1, n, -1)`, plus the original's extra rolls |
| `GenerateRandomMap`, `Random() % N` | 41 | `Dice(1, N, -1)` (no counterpart, see the last section) |
| `BuildOverviewBase` private LCG (fixed seed 0x2AA0D649) | 256 values | 256 × `Dice(1,3,1)` on the game stream |

## Site table

"Order" means the sequence of `Random()` calls along that path.

| remake site (main.c function) | original | old form | new form |
|---|---|---|---|
| `LoadAndPlayMusic`, human turn | FUN_10092484(1): FUN_1005f6b0(10,-1) | `kTurn[RND(8)]` | `kTurn[Dice(1,8,-1)]` |
| `LoadAndPlayMusic`, computer turn | FUN_10092484(2): with no live human, `Dice(1,100,0)` <6 group 12 / <53 group 11 / else group 10; otherwise group 11 | `kAI[RND(5)]` | same branches; each group pick is `Dice(1,count,-1)` (group 12 has 1 line, still rolled) |
| `LoadAndPlayMusic`, victory | FUN_10092484(3): group 9, -1 | `kWon[RND(3)]` | `kWon[Dice(1,3,-1)]` |
| `LoadAndPlayMusic`, temple | (5): group 13, -1 | `RND(2) ? 8 : 1` | `Dice(1,2,-1) ? 8 : 1` (index 0 = INT1) |
| `LoadAndPlayMusic`, sage | (6): group 14, -1 (1 line) | no roll | `(void)Dice(1,1,-1)` |
| `GameInit` Quick Start handout | FUN_1003c068: `Dice(1,10,-1) < 5` → back to the capital | `RollDie(10) <= 5` | `Dice(1,10,-1) < 5` |
| `GameInit` starting armies and garrisons | FUN_1002cbbc: cities from LAST to first; neutral with gs+0x11a > 0: `k = Dice(1,4,ns-2)` capped at 3; then `Dice(1,4,0)` units with Quick Start; slot by FUN_1001e794 with weight set {1,6,2,3}[k] | three loops: neutrals forward (`RollDie(4)` with Quick Start), capitals (`RollDie(4)`), Quick Start cities (`RollDie(4)`); every slot scored with set 3 | one reverse loop with the original's two rolls; `BestCitySlotTypeW(ci, set)` with the weight tables read from data+0xadd0/0xade0/0xadf0 (move {0,1,1,1,1,1,10,0}, strength {0,4,10,10,10,10,1,0}, turns {0,10,10,5,5,5,10,0}); a city of a side not in play becomes neutral (FUN_1003c068) |
| `JitterCitySlotStats` | FUN_1003b9f8: 8 × `Dice(1,100,0)` per slot | `Random()%100+1` | `Dice(1,100,0)` (same order) |
| Begin Game turn order | FUN_1003c838: 20 × (`Dice(1,8,-1)`, `Dice(1,8,-1)`) | `Random()%8` ×2 | `Dice(1,8,-1)` ×2 (the second copy in the campaign path already used Dice) |
| Begin Game notoriety | FUN_1003c368: `Dice(1,8,0)` per side | `RollDie(8)` | `Dice(1,8,0)` |
| `BreakTreaty` | FUN_100300e8: Peace `Dice(1,100,0)+100`, Hostile `Dice(1,15,0)+10` | `%100+101`, `%15+11` | Dice as listed |
| `ShowEliminationNotification` | FUN_1003cb84: FUN_1005f678(0xc,-1), group of 5 | `206 + %5` | `206 + Dice(1,5,-1)` |
| Victory window, lines 2 and 3 | FUN_100472f4: FUN_1005f678(0x43,-1), then (0x44,-1) | `370+%4`, `374+%3` | `Dice(1,4,-1)`, `Dice(1,3,-1)`, same order |
| `ApplyVictoryChoice` Pillage | FUN_10046d7c: `+Dice(1,5,0)` | `1 + %5` | `Dice(1,5,0)` |
| `ApplyVictoryChoice` Sack | FUN_1004702c: `+Dice(1,10,0)+5` | `6 + %10` | `Dice(1,10,0)+5` |
| `ApplyVictoryChoice` Raze | FUN_10047190: `+Dice(1,15,?)+10` (Ghidra lost the add; 0 fits the 11-25 range) | `11 + %15` | `Dice(1,15,0)+10` |
| City window Raze | FUN_1004f664: `+Dice(1,25,0)+100` | `101 + %25` | `Dice(1,25,0)+100` |
| Medal window | FUN_1002f194: FUN_1005f678(0x9f,-1), then (0xa1,-1) | `773+%7`, `781+%4` | `Dice(1,7,-1)`, `Dice(1,4,-1)` |
| Battle advisor | FUN_10030e90: FUN_1005f678(0x7d,-1), (0x7e,-1), after FUN_10030e0c, which makes no roll | `631+%5`, `636+%5` | `Dice(1,5,-1)` ×2 |
| Battle result "garrison fled" | FUN_1002f97c: FUN_1005f678(0x8e,-1) | `743+%4` | `Dice(1,4,-1)` |
| `PickHeroName` | FUN_1003302c: k-th '#', `Dice(1,8,0)` on turn 1, else `Dice(1,100,0)` (the HERONAM lists hold 100) | `Random()%count+1`, capped at 8 on turn 1 | as the original; a roll past the list gives no name (falls back) |
| `ShowHeroHire` name index | none (the built-in 20 names are a fallback) | `Random()%20` ×2 | removed; deterministic fallback `player % 20` |
| `ShowHeroHire` order | FUN_10032a24: cost, `Dice(1,30,0)`, `Dice(1,cities,0)` city; the name (FUN_1003302c) comes later, in the hire dialog | name before city | city first, then `PickHeroName` |
| `ShowHeroHire` city | FUN_10032a24: `Dice(1, cities, 0)` | `Random()%n+1` | `Dice(1,n,0)` (0 cities: no roll, no offer) |
| `HeroAllyType` | FUN_10032d4c: `Dice(1,n,-1)` | `Random()%n` | `Dice(1,n,-1)` |
| `HeroBringsAllies` | FUN_10032e2c: type, then `Dice(1,100,0)` | `Random()%100+1` | `Dice(1,100,0)` |
| `AddAlliesToStack` (hero, ruin and quest allies) | FUN_10053838, once per ally: a tile with < 8 units that is the side's or empty, else a random walk of (`Dice(1,3,-2)`, `Dice(1,3,-2)`), 10 tries | no roll; always the hero's tile, past 8 units | as the original (new rolls only when the tile is full or foreign) |
| `AIGiveInitialHero`, `AIHeroOffer` name | FUN_10033548 → FUN_1003302c | `Random()%20` from the built-in pool | `PickHeroName` (HERONAM, Dice) |
| `ShowVoiceAdvisor` | FUN_10092c5c(5): every line is FUN_1005f6b0(0x28..0x3a, -1); between, `Dice(1,5,0) == 1` for vmess | `Random()&1` ×2, `%5`, `%4`; no roll for 1-line groups | `Dice(1,1,-1)` for vlose / vwin10-35 / vgold00 / vhero00 / vhero01; `Dice(1,2,-1)` vwin05/05a and vgold01/01a (0 = the plain one); `Dice(1,5,0)==1` then `Dice(1,4,-1)` |
| `HelmetVoice` blink counter | FUN_10092c5c: `Dice(1,30,10)` (every mode, after the 0..5 jump table) | `11 + %30` | `Dice(1,30,10)` |
| `ShowSageDialog` money | FUN_10054824: `Dice(3,500,500)` | `503 + %500 ×3` | `Dice(3,500,500)` |
| `ShowSageDialog` map | FUN_10054af4: `Dice(1,5,8)` left, `Dice(1,5,8)` up, `Dice(1,10,15)` wide, `Dice(1,10,15)` high; corner clamped to 0, size to 0x6f/0x9b | w, h, x, y order (`16+%10`, `9+%5`) | the original's order and clamps |
| ruin "rewardType 3" reveal block | none (dead code: rewardType is never 3) | 4 × `Random()` | removed |
| `BuildOverviewBase` hill pool | FUN_10063af8: 256 × `Dice(1,3,1)` from the game stream | private Park-Miller LCG, fixed seed 0x2AA0D649, `|r|*3/32768` | 256 × `Dice(1,3,1)` once per map (the sage refresh reuses the pool) |
| AI (34 `AIRnd` calls: FUN_10020640, FUN_1001f220, FUN_1001072c, FUN_10010b30, FUN_10018800, FUN_10020f94, FUN_1000d1a4, FUN_10019f14, FUN_10019174, FUN_100161fc, FUN_1000f064, FUN_1000e938, FUN_1001b8e0/ba60/bbf0, FUN_1001cb24, ...) | `FUN_1005f230(1,n,base)` | `base + Random()%n + 1` | `Dice(1,n,base)` (n = 0: `base`, no roll) |
| `GenerateRandomMap` (41 sites) | none: the remake's own generator. The original's is the FUN_100a1e50 family, ported but not wired in src/mapgen/mapgen.c | `Random() % N` | `Dice(1,N,-1)` (the original's die mapping, same ranges) |

These sites were already Dice and are unchanged: the item and site setup
(FUN_1003956c / FUN_10038fb8 / FUN_10039180), the battle rounds
(FUN_1002d654), medals (FUN_1002f194), XP, the guardian fight
(FUN_1005310c), ruin gold and allies (FUN_100539e8), the quest picker
(FUN_1004b11c; the disassembly's 10 rolls match), quest rewards
(FUN_1004dc94), the quest-allies type (0x100357ec, `QuestAllyType`), the AI
hero offer and FUN_1000db10, the computer's sage (FUN_100126a4 /
FUN_10054af4), and the quick-start shuffle in the campaign path.

## Item pool (ITM 10000 / DAT 1011)

- `sItemTable` is now a writable pool of up to 50 entries. Its fallback
  contents are the 39 entries in the original's order: 7 battle, 7 command
  (Crown, Sceptre, Orb of Loriel, Crimson Banner, Horn of Ages, Ring of
  Power, Staff of Ruling), 10 battle (Tome of War .. Armour of Gods),
  5 flying, 5 movement, 5 gold.
- `LoadItemPool(Handle)` reads it the way FUN_10039180 does:
  - a 2-digit count, then 2 bytes skipped;
  - 26-byte entries, each a name[20] (at most 19 characters; it ends at the
    first ' ', and '_' becomes ' '), 1 byte skipped, type = char - '0',
    1 byte skipped, value = char - '0', 2 bytes skipped.
- `LoadScenarioItemPool()` reads the scenario's 'ITM ' 10000 while the
  scenario file is open, in both scenario loaders, and falls back to DAT
  1011.
- `LoadDATItemDefs()` loads the app's DAT 1011 at start-up, which is the
  pool for random maps. All six shipped scenarios' ITM 10000 is byte-equal
  to DAT 1011, checked with a Python parse of the resources.
- The record picks for items 8-21 now roll `Dice(1, sItemPoolCount, -1)`
  over this pool, so a given roll picks the same item as in the original.
- Ruin rewards and quest item rewards already indexed the game item
  records (gs+0xD12) the way the original does (`SITE_ITEM`;
  FUN_1004dc94's k-th unowned special record), so they needed no change.

## Not converted / ambiguous

- These original rolls have no remake counterpart yet, so the remake's
  stream drifts from the original on those paths:
  - FUN_10064498: the per-tile overview repaint makes 4 × `Dice(1,3,1)` for
    hill tiles. It runs per site at new game when gs+0x11e is set, and on
    later tile changes.
  - FUN_1004a350 with param 2 ≠ 0: a random tile `Dice(1,3,-2)` ×2 when the
    city's 4 tiles hold 8 or more units. The remake's callers use mode 0.
  - FUN_100577f0, FUN_1009f2a4, FUN_1009f350, FUN_100a01e8, FUN_10051e1c:
    the end/intro animation and random-map helpers.
  - The random-map generator FUN_100a1e50..FUN_100ab368.
- The remake can draw the overview before the game (the picker). That would
  roll the 256-value pool once more than the original, which reads the
  scenario's PICT 10001 there.
- The Raze notoriety add (FUN_10047190) is `FUN_1005f230(1,0xf)` in Ghidra.
  I assumed `add = 0`, which matches the documented 11-25 range.
- `ShowEliminationNotification` rolls for every fallen side, as the
  original does (it picks the line before testing for a human). The remake
  also shows the window for a fallen computer side; that is not a dice
  question and is left as is.

## Follow-up (Oct 3 2026, later)

- New-game order now follows FUN_1003e13c: `BeginNewGame()` (main.c,
  after GameInit) runs after the helmet's 'vbegin' and once the army set is
  in: FUN_1003c838 (turn order) -> FUN_1003d4dc (the first living side in
  the order moves first, a computer side included) -> FUN_1003956c (sites,
  items) -> FUN_1003c068 (capitals, Quick Start handout by FUN_1000a884
  distance, then FUN_1003b9f8's sort/base/jitter) -> FUN_1001db60
  (`AISetupZones`: city+0x2f zones = `sAIOrigOwner`, round-robin with
  `Dice(1,10,-1) < 5` hops; `Dice(1,100,0)` per side only with no computer
  side) -> FUN_1002cbbc (armies; `BestCitySlotTypeW` now scores the city's
  own sorted, jittered slots with the gs+0xF0 and stat-15 +2 terms and set
  4's flying test) -> notoriety `Dice(1,8,0)` (+400).
- FUN_10027448: `NotorietyOnStanceDrop` at the end of every turn (human:
  AdvanceToNextPlayer; computer: ExecuteAITurn step 19).
- FUN_1005b938: 'sele' rolls `Dice(1, count-1, 0)` per playing computer
  side (count = the app's DESC K/L/W000.. resources, 9) into gs+0xE0.
- Each computer side's free turn-1 hero comes at the start of its own first
  turn (FUN_100651cc -> FUN_10032a24 -> FUN_10033548), not all at game start.

