I have everything I need; no further lookups required. Here is the report.

# Warlords II AI — remake vs original: differences and faithful port spec

All original references are `tools/ppc_decompiled/PPC_0001.c` (PPC 1.0.7) unless marked `68k`. Remake references are `src/main.c`. Confidence: **[H]** verified in decompile + cross-checked (68k or data), **[M]** decompile reading with one unresolved detail, **[L]** inference.

## 0. Name map (original globals → meaning)

| Ghidra name | Meaning |
|---|---|
| `_DAT_4bffe775` | game state `gs`; `gs+0x110` current player; `gs+0x136` turn; `gs+0x138+p*2` alive; `gs+0xd0+p*2` 0=human; `gs+0xc0+p*2` AI level 0/1/2; `gs+0x186+p*0x14` player block (+0 gold, +0x0e/+0x10 home city xy); `gs+0x1582+me*0x10+p*2` diplomacy (bits 28-29 of the long: 2 = war; bits 26-27 read as `>>0x1a&3` = other side's state) |
| `gs+0x1602`, `gs+0x1604+i*0x42` | **city** count/array (in the remake this array holds armies). City fields used by the AI: +0 x, +2 y, +0x15 owner (0xF neutral), +0x16..19 slot types, +0x1a..1d slot turns, +0x1e..21 slot strength, +0x22..25 slot moves, +0x26..29 slot cost, +0x2c current slot, +0x2d turns left (0 = idle), +0x2f original owner, +0x32 vectoring on, +0x34/36 vector target xy |
| `_DAT_60000000`, `gs+0x182` | **unit** array, 0x16 bytes/unit: +0 x, +2 y (-1 = dead), +4 type (0x1C hero), +5 owner, +6 max moves, +7 moves left, +8 strength, +9 home city, +0xc u32 **AI orders** (bits 0-6 target index, bit 5 0x20 "released", bit 6 0x40 "stuck", bit 7 0x80 "capture-and-continue", bit 8 0x100 "hero expedition", bit 9 0x200 "done this turn", bits 9-11 `>>9&7` front id+1, bits 12-15 `>>12&0xf` order type 0 none/1 city/2 item/3 ruin/4 free-roam), +0x10 home city, +0x11 group id, +0x12/+0x14 dest xy |
| `_DAT_3be00000` | **per-player AI block** (0x42C bytes, 8 handles, saved in 'AI  ' 10000). See §3 |
| `_DAT_2c030000` | city neighbour table: 100×6 bytes neighbour city idx, +600: 100×6 bytes path distance |
| `_DAT_281f0000` | 6-byte per unit-type AI flags, built in `FUN_10025f98` (19172-19195): [0]=stat16 fly, [1]=stat17, [2]=stat18, [3]=stat19, [4]=stat13 (**used as "naval/boat"**), [5]=stat15 (**class 1/2/3**) |
| `_DAT_38800000` | map, `(y*0xE0 + x*2)` u32 view: `>>24` terrain idx → `gs+0x711[idx]` type (10 city, 11 ruin, 2 water, 3 shore); `>>16&0xF` tile owner; bit 20 "occupied marker"; bit 22 ruin searched |
| `_DAT_807f0004 + y*0x70 + x` | explored bitmap (`>>0x1d&1`) |
| `DAT_409e0034[8]`, `_DAT_817f0000`, `_DAT_918a0000`, `_DAT_7f8be040` | current stack (unit pointers), lead unit, stack min moves, stack size (set by `FUN_1001ec20`) |
| `DAT_3bc00000[p]` / `DAT_2c9d0000[p]` | income / upkeep |
| `FUN_1005f230(1,n,base)` | random: `base + rnd(n)`; `(1,n,0)` = 1..n, `(1,n,-1)` = 0..n-1 |
| `FUN_1000a884(x1,y1,x2,y2)` | Euclidean distance, truncated (5113-5139) **[H]** |
| `FUN_1000fc38(unit,redraw)` | **disband unit** (`FUN_100214e8` 17742 sets x=y=-1, type/owner 0xFF); hero → `FUN_1002e5c0` drops items **[H]** |

Note the ambiguity flagged in the task: the AI-type flag [4] comes from **stat[13]** (`FUN_10025f98` writes `buf+48`→[4]; `FUN_10020f94` 17488 refuses to buy types with stat[13]≠0). The remake's `UTE_STAT_NAVAL` is stat[19]. Verify against the DAT which one boats carry **[M]**.

## 1. The most important behavioural differences

Remake `ExecuteAITurn` (24157-24830) is a single per-army greedy loop. Everything below is missing or materially different:

1. **No city roles, no fronts, no "AI block" state at all.** The original is a 20-step planner driven by per-city roles (`+0x56`), per-city flags (`+0x11e`), turns-owned (`+0xba`) and 1/2/4 fronts (`+0x24c`). The remake's only persistent AI state is the fortify byte.
2. **Garrison/strike-group separation (step 8, `FUN_10010b30`).** The original sorts every city's units each turn into a *strike group* (hero + best fast units, size from a table) on one city quadrant and a *pool* on another, and keeps per-city unit counts. The remake merges all same-tile AI armies (`TryMergeArmies` loop 24712-24725) and then fortifies whatever is left, so the "6-8 unit hero stacks" can never form; the hero wanders alone toward ruins.
3. **Expansion cascade (step 9, `FUN_1001aa9c`/`FUN_1001a864`/`FUN_10018b14`/`FUN_10018800`).** Original: every city with neutral neighbours sends stacks (sorted by max moves, up to 8, beyond a reserve) to the neutral neighbour with the best `rnd(10)+dist+10·visits+…−winEst` score, only if win estimate ≥ 75 %, then *immediately re-runs* for cities captured during the pass (up to 10 passes). This is why the original grabs neutrals fast. Remake: each army picks one target by `dist+defStr*4` and walks; no cascading, no win estimate, no stack formation.
4. **Win estimate `FUN_1001eff8` (16428-16450) is the attack gate everywhere** (≥75 % neutrals/attack groups, ≥85 % neighbour raids, ≥51 % re-check on arrival, ≥95 % hero with <3 units). It is a Monte-Carlo of the real combat routine (10 runs). Remake has no estimate; it uses crude strength sums and a "flee if 3× stronger" rule the original does not have.
5. **Attack groups / fronts (steps 4/13, `FUN_1001d014`, `FUN_1000f410`).** Original opens fronts against a scored target player, picks a staging city via Dijkstra over the city graph, 6 targets, 4 feeder cities vectoring production to the staging city, launches 8-stacks from the staging quadrant when `winEst>75 || stack==8`, continues through neighbours after capture, razes/pillages/sacks by personality. Remake has none of this; "primaryEnemy" only filters target cities.
6. **Hero AI (step 1, `FUN_100164e4`).** Original: per hero, choose temple / ruin / ground item / enemy city (≤20 tiles, winEst≥75) by `100+rnd(20)(+20)−dist`, taking the whole strike group (units at hero tile with ≥12 MP). Hero+flyer "expeditions" to ruins ≤40 away (step 3). Remake: hero goes to the nearest unsearched ruin within 15, alone.
7. **Production by role (step 17, `FUN_1000d384` + `68k CODE_098`).** Original picks a scoring *mode* per role (fast/cheap for expansion cities, flyers-only for roles 2/11/13, **stop producing** in role-8 "full" cities, buy a flyer slot in role 2/13 cities) and vectors feeder production to staging. Remake uses one formula and never stops/vectors.
8. **Disbanding (`FUN_1000fc38`).** Original disbands weak idle units (str<3 or moves<8), stacks with no reachable target, >24 units in a city, and surplus garrison in long-held cities (`FUN_1001072c`). Remake never disbands → upkeep bleeds gold, so AI gold stays low and `AIBuyProduction` rarely fires.
9. **Movement model.** Original stacks (up to 8 units, min-moves limited, hero leads) move via `FUN_10018180` and on arrival at an enemy city re-check the odds and may redirect (`FUN_1001f48c`). Remake moves 4-unit records individually.
10. **Diplomacy / target player (`FUN_10011804`, `FUN_1000df58`).** Different scoring (see §4.1); the remake's clears-all-to-peace-then-recompute is not the original.
11. **City reserve rule** ported in the remake (24300-24435) is correct in isolation (`FUN_10018b14` reserve R) but is applied to *every* army loop iteration rather than inside the expansion step, and the "+min(citiesLostToAttacks,2)" term is missing.
12. **Gating flags.** Original gates exploration/release logic on `gs+0x124` (bit0 "unexplored" city flags, explored-bitmap checks). The remake stores Hidden Map at `gs+0x116` and View-Production at `gs+0x124`. The port should use the remake's hidden-map flag wherever the spec below says `HIDDEN` **[M]**.

## 2. Turn structure (dispatcher, 5940-6560) — verified order

| step | cmd | wrapper | body | progress |
|---|---|---|---|---|
| 0 | 0x3fd | `FUN_1000c9c8` | reset diplomacy memory bits, `FUN_1000c7b4` (neighbour table), `FUN_1000c844` (role 13/11 → 4 if turn<5 else 8; on turn 1 with `gs+0x128` & `HIDDEN` roles 13/11) | 10 |
| 1 | 0x3fe | `FUN_1000cafc` | `FUN_10011804` diplomacy + `FUN_100164e4` heroes | 15 |
| 2 | 0x3ff | `FUN_1000cb54` | `if HIDDEN FUN_10013774` release units | 20 |
| 3 | 0x400 | `FUN_1000cbb8` | `FUN_10014214` hero+flyer expeditions | 25 |
| 4 | 0x401 | `FUN_1000cc08` | `FUN_1001d014` attack groups | 30 |
| 5 | 0x402 | `FUN_1000cc58` | `FUN_10013484` execute moves | 40 |
| 6 | 0x403 | `FUN_1000cca8` | `FUN_1001497c` re-dispatch idle stacks | 45 |
| 7 | 0x404 | `FUN_1000ccf8` | `FUN_1001f9e4` roles | 50 |
| 8 | 0x405 | `FUN_1000cd54` | `FUN_100114d4` garrisons | 55 |
| 9 | 0x406 | `FUN_1000cda4` | `FUN_1001aa9c` defence/expansion | 60 |
| 10 | 0x407 | `FUN_1000cdf4` | `FUN_10013484` execute moves again | 65 |
| 11 | 0x408 | `FUN_1000ce44` | `FUN_10013040` neighbour raids (not Knight) | — |
| 12 | 0x409 | `FUN_1000ce88` | `if HIDDEN FUN_10020ec4` role 2→3 | — |
| 13 | 0x40a | `FUN_1000ced8` | `FUN_1000f410` open front | 70 |
| 14 | 0x40b | `FUN_1000cf28` | `FUN_10014d14` hero cities → role 13 | 75 |
| 15 | 0x40c | `FUN_1000d2e8` | `FUN_1000d1a4` buy production | 80 |
| 16 | 0x40d | `FUN_1000d334` | `FUN_10014bcc` re-dispatch | 85 |
| 17 | 0x40e | `FUN_1000d654` | `FUN_1000d384` production | 90 |
| 18 | 0x40f | `FUN_1000d7bc` | `FUN_1000d6a0` vectoring | 95 |
| 19 | — | `FUN_1000d808` | cleanup | 100 |

## 3. Data structures to add (per AI player, mirrors `_DAT_3be00000`)

```c
typedef struct {            /* one per front, 0x5C in original (+0x24c + f*0x5c) */
  short active;             /* +0x00 0 = unused, else age (incremented each successful step 4) */
  short targetPlayer;       /* +0x02 */
  short staging;            /* +0x04 city idx */
  short feeders[4];         /* +0x06 (0x252) role-6 cities vectoring here */
  short targets[6];         /* +0x0e (0x25a) target-player cities */
  short targetDist[6];      /* +0x26 (0x272) city-graph distance */
  short targetNeigh[6];     /* +0x32 (0x27e) #neighbours of target owned by targetPlayer */
  short stacks[4];          /* +0x3e (0x28a) representative unit of each attack stack */
  short visited[6];         /* +0x46 (0x292) captured/visited cities */
  short minMoves;           /* +0x58 (0x2a4) 8 */
  unsigned short flags;     /* +0x5a (0x2a6) 1 raze 2 pillage 4 sack; 8/0x10/0x20 feeder class B/C/A */
} AIFront;

typedef struct {
  short rolesPassCount;     /* +0x00 incremented by step 7 when own cities>0; gates steps 4,13 */
  short ownCities, enemyCities, neutralCities, enemyUnexplored; /* +0x02..+0x08 */
  short pPersonality;       /* +0x0a 30/20/10 */
  short flags;              /* +0x0c bit0 "may ally" (Lord/Warlord) */
  short heroCount;          /* +0x0e */
  short lastBoughtType;     /* +0x10 */
  short biasA, biasB, biasC, biasD;   /* +0x18,+0x1a,+0x1c,+0x1e random 1..4/1..8 */
  short winSamples;         /* +0x20 = 10 */
  short releasedLand, releasedOther;  /* +0x22,+0x24 (step 2 counters; +0x24 also "flyers released" cap 5) */
  short pRaze, pPillage, pSack, pMulCity, pLv0, pLv1, pLv2, pHuman, pPoor; /* +0x26..+0x36 */
  short allyHumans;         /* +0x38 Warlord=1 */
  short minSlotStr, clsAcnt, clsBcnt, clsCcnt;  /* +0x3a..+0x40 */
  short warlordRaze;        /* +0x42 */
  short dominancePct;       /* +0x44 80/35/35 */
  short questCity;          /* +0x46 excluded city (quest target), -1 */
  short passive;            /* +0x48 Knight=1 */
  unsigned char role[100];      /* +0x56  */
  unsigned char turnsOwned[100];/* +0xba  */
  unsigned char cflags[100];    /* +0x11e bit0 unexplored, bit1 produces flyers, bit2 garrison done, bit3 clsC, bit4 naval present, bit5 hero present, bit6 clsA, bit7 clsB */
  unsigned char unitCount[100]; /* +0x182 */
  unsigned char poolCount[100]; /* +0x1e6 units placed on the pool quadrant */
  short frontCount;         /* +0x24a 1/2/4 */
  AIFront fronts[4];        /* +0x24c */
  short battleMem[8][6];    /* +0x3bc.. per attacker: heroes, units, battles, wins, cityBattles, cityWins */
} AIBlock;
```
Plus per-unit **orders** (the u32 at unit+0xc, dest xy, group id, home city). In the remake, "unit" = one slot of a 4-slot record; recommend an order record **per army record** (the record is the movement unit anyway) and define *stack* = all own records on a tile with equal (frontId, orderType) exactly as `FUN_1001ee88` (16364) does for units; cap 8 units = 2 records; `SplitUnitsOff` already exists for the 8/strike-group splits. `TryMergeArmies` must stop merging AI records across the quadrant separation (merge only within the same quadrant tile — the quadrants are distinct map tiles anyway, so the current "same tile" test is fine once units are placed per quadrant).

City roles (**[H]** from steps 7/8/9/11/17 + 68k switch): 0 not ours · 1 just acquired · 2 interior, no (explored) neutral neighbours · 3 expansion (has neutral neighbours) · 4 under-garrisoned (<2 units or no neutral neighbours yet thin) · 5 below ideal garrison · 6 feeder (vectoring) · 7 staging · 8 full garrison (surplus available; **production stopped**) · 11 (0xb) flyer-release city · 13 (0xd) hero city (flyer production).

Personality `FUN_10020640` (17187-17300) **[H]**:

| field | Knight (0) | Lord (1) | Warlord (2) |
|---|---|---|---|
| +0x0a | 30 | 20 | 10 |
| +0x48 passive | 1 | 0 | 0 |
| biases | +0x18,+0x1e,+0x1a = rnd1..4 | +0x18,+0x1e rnd1..4, +0x1c rnd1..8, flags\|=1 | +0x18 rnd(1..?), +0x1a rnd1..8, +0x1c rnd1..6, flags\|=1 |
| fronts +0x24a | 1 | 2 | 4 |
| +0x38 allyHumans | 0 | 0 | 1 |
| +0x26/+0x28/+0x2a raze/pillage/sack | 0/0/0 | 5/10/20 | 5/10/20 |
| +0x2c mulCity | 0 | 1 | 5 |
| +0x2e/+0x30/+0x32/+0x34 | 0 | 5/0/0/0 | 50/0/0/0 |
| +0x36 poor bonus | 0 | 0 | 50 |
| +0x42 | 0 | 0 | 1 |
| +0x44 dominance % | 80 | 35 | 35 |

Init `FUN_10020ae8` (17309-17400): winSamples=10, all roles = (`gs+0x128`? 4 : 0), turnsOwned 0, cflags = (`HIDDEN`? 1 : 0), fronts cleared, battleMem cleared; personality from `gs+0xc0+p*2` (humans driven by AI → Warlord).

## 4. Step specs

### 4.1 Step 1 diplomacy `FUN_10011804` (8902-9198) and target player `FUN_1000df58` (6815-7120) **[M]**
Only when `gs+0x11c` (diplomacy on). Per player p: counts `citiesOf[p]`, `exploredCitiesOf[p]`, `takenFromMe[p]` (cities p owns whose original owner +0x2f is me, or mine whose original owner is p). Proposal rule (both loops 9020-9090): `k = 2*(allied[p]−atWar[p])`; if `takenFromMe[p] >= k+4` → set **war** (bits 28-29 = 1 → `|0x10000000`); else if `takenFromMe[p] < k+8`… → **peace** (`|0x20000000`); second pass uses aggression memory `mem.wins[p] + 4*mem.cityWins[p] + 2*mem.heroes[p]` with thresholds `k+5` (war) / `k+10` (peace, keeps ≥1). Then: war with the player returned by `FUN_1000df58`, war with every active front's target, peace with all when a player is dominant (`cities[p]*100/totalCities > dominancePct` (humans: 50)) except war with that one. Lord/Warlord may ally with humans (`+0x38`, `FUN_10011734`). Finally fronts whose target is now at peace are reset (`FUN_1001ae14(f,0x14)`).

`FUN_1000df58` score per player p (6958-6975, exact): `2*cityWins + 2*cityBattles + 2*wins + battles + units + 4*heroes` (battleMem[p]) `+ 6*borderCities[p]` (my cities with a neighbour owned by p whose original owner is me) `+ 4*takenFrom[p] + 15*(I hold p's capital) + 20*(p holds my capital) + rnd(1..10) + bias(level) + |my0x1122 − p0x1122|/8 + |myCities − pCities|/4`. Zeroed if: p human-allied rules (`gs+0x116`), `FUN_10011734`, I'm at war with someone and p is at peace with me, no fronts and p has no explored cities, turn < (intense? 4 : 8) and p never fought me, or p already targeted by ≥ cities[p]/4 fronts. Highest wins; fallback: holder of my capital; must have explored cities.

### 4.2 Step 1 heroes `FUN_100164e4` (11549-11650) **[M]** (switch after `FUN_100161fc` lost by Ghidra; cases inferred from callees)
For each own hero (≤6, `FUN_10014e44` 10680): search the ruin it stands on (`FUN_100151e8`); garrison its city with `fromFront=1`; quest handling; if ordered to a ruin, validate `FUN_10015030`: allowed if `dist < 2*turn+10` (+22 for temples; Knight: `2*turn`), explored, terrain 11, unsearched — else clear the orders of all units at the tile with that order type. If hero MP > 3:
- `FUN_100159c8`: nearest temple (type 1) within `min(range,11)` when quests on and no quest; nearest unsearched ruin within 25 (5 if already ordered) not targeted by another hero → (idx, dist) ×2.
- `FUN_10015dc8`: if hero holds <3 items, nearest ground item within 25 (5 if ordered), reachable (`FUN_10015c48`).
- `FUN_10015f98`: stack = own units at hero tile, same front/order, **MP ≥ 12** (`FUN_1001ee88(...,0xc)`); if ≥1: candidate enemy cities (at war, explored, within 20 or current target): `winEst` (+20 if current target) must be ≥ (stack<3 ? 95 : 75); best by winEst, tie by distance.
- `FUN_100161fc` scores: temple `100+rnd(1..20)+20−dist`, ruin same, city `100+rnd(1..20)−dist` (only if hero's city has >4 units or hero not in a city), item `100+rnd(1..20)−dist`. Winner → `FUN_10015554` (temple/ruin/item: stack = hero + one flyer if present, else hero alone if nearest enemy ≥15) or `FUN_10016344` (city: don't strip a city whose whole garrison is this stack when nearest enemy < (turn<6 ? 10 : 15)).

### 4.3 Step 2 release `FUN_10013774` (9948-10040) **[H]** (HIDDEN only)
Units with flag 0x20: heroes first, others second. If (hero and a staging city exists) or (flyer and `releasedOther > 7` and str < 4) → clear orders/flag. Else `FUN_1001a348(unit,-1)` (free-roam type 4, move toward nearest enemy city/ruin/unexplored, `FUN_10019174`) and count land/other.

### 4.4 Step 3 expeditions `FUN_10014214`/`FUN_10013d0c` (10110-10330) **[H]**
Heroes with flag 0x100, MP ≥ 3: stack = [hero, first flyer]; flyer's orders copied to hero. Ruin score: `d ≤ 14 → 215−d; d < 40 → 90−d` (ruin: explored, terrain 11, not type 1, unsearched, no other hero ordered there). Own city score: `d' = d − (role 7 ? 80 : 0); d' ≤ 14 → 115−d'; d' < 40 → 40−d'`. Best overall; ruin → order type 3 + flag 0x100 + move + `FUN_10013a10` search; city (if d ≥ 3) → order 1 + move. Loop while result==2, position changed and MP left.

### 4.5 Step 4 attack groups `FUN_1001d014` (15249-15290) **[H]/[M]**
Skip if `rolesPassCount == 0`. `FUN_1001fcc0` (16923-17180): clear cflags bits 3/6/7; per own non-staging city with a good best slot (`FUN_1001f648`): best slot strength (+2 if class 1) → top-8 list → `minSlotStr = max(min(top8), 4)`; class A (bit6, only with 4 fronts): produces fly-flag unit with str>4; class B (bit7, ≥3 fronts): best slot str ≥ minSlotStr (or class 1) and moves > 15; class C (bit3, ≥2 fronts): same with moves > 11 (>15 if B count ≥ 8); keep ≤4 extra per class (counts mod 4). Tail (a switch on the front, disassembled 0x100204b4-0x10020604; corrected Oct 2026, the old note "every front `minMoves = 8`" was wrong): every active front `minMoves = 8`, then front 0 `minMoves = 12` when more than 7 class-C slots qualified (str/class test and moves ≥ 12, counted per slot); front 1 flag 0x10 and `minMoves = 12` when class-C cities > 3; front 2 flag 0x08 and `minMoves = 16` when class-B cities > 3; front 3 flag 0x20 and `minMoves = 12` when class-A cities > 3 (each flag cleared first). Then all role-7 → 8; for each active front: staging role 7, `FUN_1001cd68(f)` ok → `active++`.

`FUN_1001cd68` (15157-15245): if my capital is held by an enemy no front targets → `FUN_1001aea0` (reset oldest front) return. `FUN_1001af38` (validate targets; add target-player neighbours of staging, dist weight; 0 → reset). `FUN_1001b198`, `FUN_1001b35c` (re-pick staging if shared/lost: nearest own non-staging neighbour by `FUN_1000a884`). `FUN_1001c854` (move existing attack stacks, §4.5c). Garrison staging (`FUN_10010b30(staging,1)`). `FUN_1001cb24` launches a new stack (§4.5b); then `FUN_1001bdc8` (visited cities with no enemy neighbour within 25: garrison, and if >3 units with MP ≥ minMoves at (x+1,y) send them to staging).

(b) `FUN_1001cb24` (15020-15150) **[H]**: stack = own units at **(staging.x+1, staging.y)** ≤8. Per target t: `turns = dist[t] / max(stackMinMoves−2,1) + 1`; `score = max(0,10−turns) + winEst(t) + targetNeigh[t] + rnd(1..4) + (turns==1 ? 100 : 0)`; eligible if `winEst > 75 || stackSize ≥ 8`. Register the strongest non-hero as `stacks[k]`, set front id bits on all units, `FUN_1001c2dc`.

(c) `FUN_1001c2dc` (14800-14960) **[H]**: order type 1 to target; `FUN_10018180(...,1)`; result 1 (no path) → **disband stack** (`FUN_1000fccc`), return 3. If target captured: enemy capital → stop; else if `#targets < 2 || !(flags&1)`: pillage (flags&2 → `FUN_1001ba60`) or sack (flags&4 → `FUN_1001b8e0`), stop; else raze (`FUN_1001bbf0(city,0)`: refused if ≥3 own cities within 45; needs `gs+0x114`; sack value < 900) and continue to nearest remaining target. On stop `FUN_1001bfa0`: garrison new city, remove from targets, compare pressure counts (target-player neighbours within 10/20/30/50 → +1 each) of new city vs staging; new city becomes staging (role 7) if higher; no pressure at either → reset front. Raze/pillage/sack flags chosen at front creation `FUN_1000f064` (7431-7490): `base = ownCities*pMulCity + level term (+pPoor if gold<100)`; raze if `rnd(1..1000) < pRaze+base`, else pillage if `< pPillage+base`, else sack if `< pSack+base`. Pillage/sack only if level≠Warlord or city's original owner is human or coin-flip with value ≥300/900 (`FUN_1001b8e0`/`ba60`); both add `gs+0x1122[me] += rnd` (notoriety).

`FUN_1001c854` (15080-15150): for each registered stack: rebuild from tile (same front/order), flood 15, `FUN_1001c6fc`: nearest target-player city with path < 50 and < stackMinMoves and winEst > 75; `FUN_1001b584` (14300-14420): enemy stacks in the field within 15 tiles (owner nibble = target player, bit 20 set, not city/water/shore, path ≤ minMoves−1, explored) with `winEst > 75 && ((count>2 && str>10) || hero)` → order type 4, move, re-order to the city afterwards.

### 4.6 Step 5/10 execute `FUN_10013484` (9870-9945) **[H]**
Mark units with MP < 2 done (0x200). For each own unit with orders, not done, dest set, MP > 1: invalid order (type 1 to non-city/excluded/out-of-range) → clear whole stack's orders, set 0x40. Else if `!(flags&0x80) || FUN_10013150()`: own-city target → dest = **(x+1,y+1)**; move `FUN_10018180`. `FUN_10013150` (9740-9860): after capture, choose next neutral neighbour (of the captured city) with winEst > 74 (if `gs+0x11a`), nearest; none & HIDDEN & turn<10 → release units.

Movement `FUN_10018180`→`FUN_10017cb4` (12329): path (`FUN_100445a8`); none → 1; arrival → 4; battle `FUN_10017ddc` (12380-12500): neutral → fight; enemy city → `FUN_1001f48c` (16560-16640): allowed if neutral/at-war, **or owner human and rnd(0..3)==0**; if not allowed or `winEst(target) < 51` → `FUN_1001f220` (16520): within path 15: own city → cost+20, est 15; others est=winEst; `score = (est<51 || cost ≥ minMoves) ? (est<11 ? −2 : 5*est−cost+100) : 10*est−cost+400`; best; redirect stack. Fight = `FUN_10030490(x,y,1)`.

### 4.7 Step 6/16 re-dispatch `FUN_1001497c` (10538-10595), `FUN_10014bcc` (10596) **[H]**
Own units **not on a city tile** with `maxMoves ≤ movesLeft` (step 6) or `maxMoves+2 ≤ movesLeft` (step 16): clear stale type-1 orders to non-cities; if no 0x20 flag and type 0 → `FUN_100145c8(unit)` (10410-10535):
- `weak = str<3 || maxMoves<8`; land & weak → **disband**.
- stack = ≤8 own units at tile; drop units with MP < 8; if stack has flyers, heroes and land → drop land non-heroes (hero+flyer); <2 left & weak → disband.
- flood radius `limit = min(distToNearestOwnCity+10, hero? 50 : (str/2)*10)`; `FUN_100143b8(n)` (10337-10405): cities (terrain 10, not questCity, explored) owned by neutral/me/at-war: path cost via `FUN_10020d88` (min over city tiles, cap 100); own city: `cost + (role7 ? 10 : 30) (+100 if n>3)`; foreign: require `winEst ≥ 75`; min cost wins. −1 → **disband whole stack**; else order type 1, move.

### 4.8 Step 7 roles `FUN_1001f9e4` (16839-16920) **[H]**
`FUN_1001f758` (bit1 = any slot type with fly flag), `FUN_1001f958` (HIDDEN: clear bit0 when any tile in [x−1..x+2]×[y−1..y+2] explored). Counters; own city: `turnsOwned++`, role 0→1; other: role 0, turnsOwned 0. If own>0: role 8 && enemyUnexplored>0 && `releasedOther<5` && bit1 → role 11; role 1 → (`FUN_10018574(c)` neutral neighbours > 0 ? 3 : 5). `rolesPassCount++`. `FUN_10018574` (12581-12650): neighbours that are city tiles, owner 0xF, not questCity, and (first found or slot<2 or dist<20).

### 4.9 Step 8 garrisons `FUN_100114d4` → `FUN_10010b30(city,0)` (8458-8780) **[H]**, ideal `FUN_1000fe90` (7999-8055) **[H]**
Ideal = 8 if any foreign (non-neutral, non-me) city neighbour is at war with me; else 4 if ≥2 foreign neighbours; 3 if 1; 2 if none.

`FUN_10010b30(city, fromFront)`:
1. Collect units in the 2×2; non-own → removed; `unitCount`; units ordered *to this city* (type 1, target==city) get orders cleared; count still-ordered `sOrd`; heroes (≤8), flyers, boats (type[4]); ≤32 listed, rest **disbanded**.
2. Hero present → item pickup (`FUN_100169c0`), >1 hero → `FUN_10016df0`. cflags bit5/bit4.
3. `if (sOrd > 2 && role != 7) return` (units passing through). `if (!fromFront && no hero && count unchanged && upkeep<income && rnd(1..6)!=0 && tile(x+1,y+1) bit20 clear) return` (perf skip).
4. roles 4/5/8 → `count<2 ? 4 : count<ideal ? 5 : 8`.
5. `kept = FUN_1000ffe0(city,count,list,out)` (8060-8300) **[H]**: `g = count<13 ? T[count] : 8` with **T = {0,0,0,0,3,3,4,5,5,6,7,7,7}** (PEF data 0xad08; alternative alignment 0xad0c gives {3,3,4,5,5,6,7,7,7,0,0,0,0} — the first is semantically consistent **[M]**); `free = 3 − turnsOwned/3; if 0<free<count && count−g<free → g = count−free`. For role 7: `moveThr` = front minMoves/12/16 by flags, and `bVar4` (enough strong land+heroes: ≥4 with count<17 or ≥3 with count<9, or flags&0x20) → land non-heroes count as "slow". Per pick (until g fast picked): score = str + 1000 hero (one), +900 fly (one), else if moves ≥ thr: +800 class2, +700 class3, +600 boat, +500 class1, +400 flag[1], +300 flag[2] (each class once, then the second of a kind scores 1/2); pick fast (moves ≥ thr) first else slow; output in pick order; return `min(g, fastPicked)`.
6. `if (!fromFront && turnsOwned>8 && role∈{4,5,6,8}) FUN_1001072c` (8301-8455) **[H]**: `ideal' = ideal + (nearest enemy unit <10 ? 4 : 0)`, poor → `max(ideal−4, 2)`, boats → `≥4`; only if no hero or count>15; while count > ideal': disband the lowest `str + buyability bonuses (price>399/799, moves>11/15, abilities) − (turns>5/10/15) + rnd(1..2)` land non-boat non-hero unit with str<4 (any if poor).
7. Units beyond 24 disbanded. `if (!(gs+0x128 && turn<3) && count<2) role = 4`.
8. HIDDEN && role 11 && releasedOther<5: release `max(1, 2−(count−flyers))` flyers (flag 0x20, free-roam), counter++.
9. **Placement**: quadrant tables (PEF 0xad18/0xad20, matching 68k `0x15f32`/`0x15f3a`) dy={0,0,1,1}, dx={1,0,0,1} → q0=(x+1,y) **strike**, q1=(x,y) **pool**, q2=(x,y+1), q3=(x+1,y+1) **[M]**. Roles 2/3: start at q1, 8 per quadrant (no strike group). Others: first `kept` → q0 (`poolCount` not incremented), then 8 per quadrant from q1. Each placed unit: dest −1, group 0, front bits 0, home=city, clear 0x40, tile bit 20 set.
Consumers confirm the split: strike tile (x+1,y) read by `FUN_1001cb24`, `FUN_10012cc8`, `FUN_1001bdc8`, `FUN_10014d14`; pool tile (x,y) by `FUN_10018b14`/`FUN_1001a470`; hero stack = hero's tile.

### 4.10 Step 9 defence/expansion `FUN_1001aa9c` (13875-13912) **[H]**
`ordered[c]` = own units with type-1 orders per city. For pass = 0..9: `FUN_1001a864(pass, ordered)` until it returns 0. Pass 0: all own cities (role 1 → garrison(fromFront=1), role 3 first); pass ≥1: **only role-1 cities** (captured during this step → cascade). Per city: no neutral neighbours → roles 2/3 become 4 (and if `gs+0x128==0 && role5 && turn<6` still expand); else `n++`, `FUN_10018b14(city)`:
- `FUN_10018b14` (12795-12920) **[H]**: `R = (nearestEnemyUnit<5 ? 2:0) + (<15 ? 1:0) + (passive ? 2:0) + min(Σ battleMem.cityWins, 2)`; stacks of ≤ (`gs+0x11a` ? 8 : 1) from units at **(x,y)** with no orders/front/0x40, skipping the first R, sorted by maxMoves desc; each → `FUN_10018800` (12660-12790): candidates = neutral neighbours (explored) with `ordered[c] < 3`; `winEst > 74` (if `gs+0x11a`, else 100); `score = rnd(1..10) + dist + 10*ordered[c] + (dist≥41 ? 10:0) + (dist≥51 ? 30:0) − winEst + 100`; min; `ordered[c] += stackSize`; order type 1 + flag 0x80; move; after capture continue unless passive or nearest enemy unit < 10. Returns nonzero only if HIDDEN and no candidates.
- nonzero → `FUN_1001a470(city, turn>10)` (release remaining pool units beyond R as free-roamers, flyers only after turn 10) and role 2; else `FUN_1001a0a0` (a neutral neighbour with <3 ordered) → role 3, none → 4.

### 4.11 Step 11 raids `FUN_10013040` (9701-9740) / `FUN_10012cc8` (9579-9700) **[H]** (Lord/Warlord)
Own cities with role ∈ **{5,8,6,4,14,7}** (PEF 0xad28 / 68k `DAT_00015f16`) and `unitCount ≥ 4`: stack = ≤8 units at (x+1,y) (role 7: (x,y) and needs ≥12 units); require `size ≥ 4 || role ∉ {6,7}`. Per neighbour (not mine, city tile, not questCity, neutral or at war; 68k also: human owner when `gs+0x116`): `w = winEst`; `w==0 && ((size<4 && dist<25) || (size<6 && dist<15))` → abort (threat); `w ≥ (poor ? 65 : 85)`: `turns = dist/max(minMoves−2,1)+1`; min turns, tie max w. Send.

### 4.12 Step 12 `FUN_10020ec4` (17447): HIDDEN: role 2 → 3 if any explored neutral neighbour. Step 17 pre-pass `FUN_1001ab94` (13916): role 3 → 2 if none.

### 4.13 Step 13 open front `FUN_1000f410` (7580-7680) **[H]**
Need `rolesPassCount>0`, `#activeFronts < frontCount`, `S = #(role 5|8 cities) > 0`, and (`active==0 || S>2`). Target = `FUN_1000df58`. `FUN_1000ed34` (7306-7430): seed = target's city with most same-owner neighbours (`FUN_1000e938`, tie coin); Dijkstra on the city graph (`FUN_1000ea7c`, dist = Σ neighbour byte distances); staging = my city with role ∈ **{5,8,6,4,14}** (PEF 0xace8) of min graph distance, else same list by Euclid (0xacf8) with targets=[seed],dist 100; then Dijkstra from staging → up to 6 target-player explored cities (`FUN_1000ec04`). Set front: active 1, player, staging (role 7), policy flags (`FUN_1000f064`), **declare war**, remove staging from feeders (`FUN_1000f258`), `targetNeigh` (`FUN_1000f308`), `FUN_1001fcc0`.

### 4.14 Step 14 `FUN_10014d14` (10637): own cities with a hero (bit5), not staging, where the (x+1,y) stack has hero but no flyer and the city is idle → role 13.

### 4.15 Step 15 buy production `FUN_1000d1a4` (6326-6360) — remake has it (24088). Differences: original requires `heroCount>0` from step 1, budget `rnd(1..10)>7 ? 1500 : 800` ✓, `FUN_1000cf78` picks the city **with max turnsOwned** (not random) among own, role≠2, slot-weak (`FUN_1001f648==0`) cities lacking the type; `FUN_1000d0c0` sets the new slot current with turns from `FUN_1001e9d0` (weakest slot), role 5. Minor.

### 4.16 Step 17 production `FUN_1000d384` (6395-6460) + `68k CODE_098.c:10-80` **[H]**
`FUN_1000fac4` (7818): all role 6 → 8, vectoring off; per active front `FUN_1000f7bc(f)` (7700-7815): candidates = own cities not staging anywhere, role 5/8 (or 6), matching class bits (flags 0x10→bit3, 8→bit7, 0x20→bit6; no class → bits 6/7 clear), good best slot with moves ≥ thr (8/12/16); top 4 by slot strength → role 6, `feeders[]`. HIDDEN: `FUN_1001ab94`. Then per own city: vectoring cleared; if not producing (`FUN_1001e4b0`: turnsLeft==0 or slot changed): `gold<40 && income<upkeep → stop all`; mode by role: **2 → buy flyer slot if bit1 clear (`FUN_1001eaa4`: first fly&&!boat type with price+30 ≤ gold replaces weakest slot) then mode 4; 3 → (`gs+0x11a` ? 2 : 1); 4 → 2; 5,6,7 → 3; 8 → turnsLeft = 0 (stop); 11 → 4; 13 → like 2; default → 3.** `FUN_1001e794(city,mode,-1,0)` (16076-16180): per slot: `s = min(str + (gs+0xf0[p] ? 2:0), 9) + (class1 ? 2:0)`; `t = turns + (s<3 && mode≠6 ? 1:0)`, cap 10; mode 4 only fly types; `score = (10−t)*Wtime[mode] + s*Wstr[mode] + moves*Wmove[mode]/2`; **Wmove={0,1,1,1,1,1,10,0}, Wstr={0,4,10,10,10,10,1,0}, Wtime={0,10,10,5,5,5,10,0}** (PEF 0xadd0/0xade0/0xadf0 **[H]**); `FUN_1001e674`: refuse if `gold < cost+30 && turn>5`; set slot & turns.

### 4.17 Step 18 vectoring `FUN_1000d6a0` (6462-6500) **[H]**: per active front with own staging: staging role 7; each feeder still role 6 → `FUN_1001e564(feeder, staging)`: vectoring on, target = staging xy (idx<100).

### 4.18 Win estimate `FUN_1001eff8` (16428-16450) **[H]**
`wins=0; for i<max(winSamples,1): r = FUN_10030490(x,y,0) /*simulate, no UI*/; if r.defendersLeft==0 wins++; return wins*100/N`. Attacker = current stack (`DAT_409e0034`), defender = everything on tile (x,y) with city/terrain bonuses. Remake: factor `ResolveCombat` into a pure `SimulateBattle(attIdx[], defTile)` on copied records (it already has `sBattleQuiet`), N=10.

### 4.19 Neighbour table `FUN_1001d66c`/`FUN_1001d27c` (15336-15600) **[H]**
Per city (computed once, as player 0 owning everything, saved): flood 45 (retry 60) → candidates all other cities with path cost `FUN_10020d88`; pick 6 lowest where a candidate gets +50 if already 3 chosen on its side (x<,x>,y<,y>). Store idx + cost byte.

## 5. Port plan (order that gives the biggest fidelity gain first)
1. Add `AIBlock`, per-army orders, neighbour table, `SimulateBattle` (win estimate), Euclid/path-cost helpers, disband helper. Stop the blanket `TryMergeArmies`/fortify in `ExecuteAITurn`.
2. Steps 7, 8 (roles, garrison + quadrant placement with table T, ideal garrison, surplus disband), 9 (expansion cascade with `FUN_10018b14` reserve — move the existing reserve code there), 5/10 (execute orders with on-arrival re-check) and 6/16. This alone yields hero strike groups, 4-8 garrisons and aggressive neutral capture.
3. Step 17/18 production modes, stop-in-role-8, feeders/vectoring; step 15 tweak.
4. Step 1 hero AI, step 3 expeditions, step 11 raids, step 14.
5. Steps 13/4 fronts, raze/pillage/sack, step 1 diplomacy/target scoring, step 2/12 hidden-map logic, personality table.

Open items to verify before coding: quadrant table order (§4.9 step 9) and garrison table alignment (both from PEF data adjacency; 68k globals dump is compressed so unavailable); which option is `gs+0x124` in the original (treat as Hidden Map); naval flag stat[13] vs stat[19].