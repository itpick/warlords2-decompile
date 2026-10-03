# Fidelity review: movement and pathfinding, map controls, save/load, invented gameplay

Date: 2026-10-03 (review of HEAD 3b60499, `src/main.c` 36,865 lines).
Reference: the PPC 1.0.7 decompile (`tools/ppc_decompiled/PPC_000N.c`), with the 68k build as a cross-check. Where Ghidra truncated a function, I disassembled `tools/ppc_verification/wl2_code.bin` (load base 0x10000000) with capstone.
Scope: review only. No code was changed and no emulator was run.

Severity scale: **Critical** means data is lost or the game cannot be played. **High** means a gameplay rule or number differs on a common path. **Medium** means it differs in a reachable but narrower case. **Low** means an edge case or cosmetic difference.

A finding marked *verify* rests on decompile reading only and should be confirmed in the original.

---

## Part A: Movement, pathfinding and map controls

### A1 — High: a human's path attacks at its last tile, but the original never attacks from a path
- **Original.** Several commands run through `FUN_100419b0` (PPC_0002.c:5228): a cursor-6 click, a drag release, Orders > Move Group, Move All (`FUN_10041cf8`) and the step keys (`FUN_100a0b08`). That function calls `FUN_10017cb4(x,y,0)` and then `FUN_10017844`. When the path is blocked by a foreign city (result 5) or a foreign army (result 3), the result only reaches `FUN_1003dc28`, a UI refresh. There is no battle.
- A human attacks in only two ways:
  - the click dispatcher `FUN_1000b3d8`, cases 8 and 10, which call `FUN_1002da54` directly;
  - the step key `FUN_100a0b08` (PPC_0004.c:6455-6463), when the stack has no stored target and the cursor type is 8 or 10.
- **Remake.** `ExecutePathSteps` (main.c:13555-13591) attacks whenever the blocked tile is the last tile of the path. This applies to every caller:
  - a drag release onto an enemy army or city (main.c:34425-34429);
  - stored orders through `RunStoredPath`, which is used by click-to-run, Move Group and the step keys;
  - `MoveAllArmies` (main.c:20923).
- **Fix.** Add a flag such as `sPathAllowAttack` and set it only in `DirectAttackStep` and the AI mover. For human paths, stop in front of the blocker and keep the orders.

### A2 — High: the AI mover attacks the first blocker on its route, not only the target
- **Original.** Ghidra cut `FUN_10018180` short at 0x10018300. The full function runs from 0x10018180 to 0x100184bc; I disassembled it. It loops on `FUN_10017cb4(dst,1)` and switches on the result:
  - **Result 5 (a foreign city on the path, within the budget).** If the city's owner is not the mover, it calls `FUN_10017ddc` (call at 0x1001835c), which runs the odds gate and then the battle. It loops again only when the gate redirects the stack.
  - **Result 3 (a foreign army on the path).** It calls `FUN_100180d0` (0x10018468), whose battle is `FUN_10030490`. It loops and continues the path while survivors remain.
  - **Result 4 (arrived).** If the unit's task nibble ((status >> 12) & 0xF) is 3, it searches the ruin there via `FUN_10013a10` (0x100183e4).
  - The blocker can be anywhere within the move, not only on the last tile. For a ground AI stack, `FUN_10042d2c` opens neutral cities in the search, so a route through a neutral city leads to an attack mid-route.
- **Remake.**
  - main.c:13555-13556 requires `blockedIdx == sPathLength-1`, so a computer stack stops in front of a mid-route neutral or enemy city or army and returns.
  - `AIMoveStack` (main.c:25016-25027) loops only on a gate redirect.
- **Fix.** For `sAITurnPlayer >= 0`, attack the first blocker (results 3 and 5) whatever its index. After winning a battle against an army, run the path again (the loop at 0x1001847c that jumps back to 0x10018234). Move the case-4 ruin search into the mover.

### A3 — High: the MP cost of an attack is wrong, and the lead record pays twice
- **Original.** In `FUN_1002da54` (PPC_0001.c:22916-22994):
  1. If the stack is not flying, the target's terrain-table cost is below 1 (mountains) and the tile has no road, the attack is refused with a beep (`FUN_10093928`).
  2. Otherwise the cost is `max(2, table[terrain type of target])`, from the plain terrain table with no road overlay and no abilities. The cost is stored in a global.
  3. `FUN_1002d3ac` (the advance after a win) subtracts that cost once from every unit in the group, and from the group MP.
- **Remake.**
  - `ExecutePathSteps` (main.c:13557-13575) charges `flagGrid & 7`, with a minimum of 1, to all movers before the battle. City tiles and roads cost 1 here; the original charges 2.
  - On a win, `CheckAndResolveCombat` (main.c:15876-15888) charges the lead record `GetMovementCost` a second time.
  - An attack into a mountain tile goes ahead; the original beeps.
- **Fix.** Compute `c = max(2, kCost[type])` from the terrain type, apply it once to every mover after a win, and drop the second deduction at 15881-15888. Refuse the attack when `kCost[type] == 0`, the stack is not flying and the tile has no road.

### A4 — High: the 5x5 fog reveal goes to naval stacks; the original gives it to flying stacks
- **Original.** `FUN_1000931c` (PPC_0001.c:4272), called for each step from `FUN_100171d4`, reveals 5x5 when `_DAT_4beeb891 == 2` (stack mode 2, flying) or the tile is a city. Otherwise it reveals 3x3. `FUN_100632a0` uses the same rule. In PPC 1.0.7, mode 2 means flying: `FUN_100445fc` and `FUN_10043248` treat mode 2 as the flyer cost rules. The remake's own `PMODE_FLYING` is also 2.
- **Remake.**
  - `PathMoveStackTo` (main.c:13384) calls `FogRevealUnit(..., sPathMode == PMODE_NAVAL)`.
  - The comment at main.c:1347-1358 and the memory note in MEMORY.md under "Fog Sight Radii" both read 68k mode 2 as naval.
- **Effect.** Flyers reveal too little and ships reveal too much. With a hidden map, unexplored tiles are impassable in a human's search, so routes change as well.
- **Fix.** Pass `sPathMode == PMODE_FLYING`, and correct the comment and the memory note.

### A5 — Medium: with diplomacy on, armies of a player at Peace do not block a path
- **Original.** `FUN_10017844` (PPC_0001.c:12225-12233) gives result 3 for an army tile only when `(diplo[cur][owner] >> 26 & 3) != 0`. At effective state 0 (Peace) the stack walks through the tile. It cannot stop there, because the stop-point test at 12235-12237 also requires no army bit or the mover's own army. Diplomacy starts at Peace when the option is on; the 68k CODE_117 `FUN_00000ad2` matches the remake's init at main.c:8265-8279.
- **Remake.** `PathUnitsAt` (main.c:13348) and the stop rule at 13519-13522 block any foreign army.
- **Fix.** Treat an army tile as foreign only when its owner is 15 or `(dip[cur*8+owner] & 3) != DIPLO_PEACE` (the remake keeps the effective state in bits 0-1). Peace armies are then neither stop points nor blockers.

### A6 — Medium: the original's path cache is missing
- **Original.** `FUN_10043e60` (PPC_0002.c:6578-6589) looks up a 20-entry path cache before searching. The cache lives in `_DAT_41820014` (0x10b8 bytes, 0xd6 bytes per entry).
  - **Lookup.** `FUN_100427cc`, `FUN_100426b4` and `FUN_100425c0` hit when the destination, mode and flags are the same and the unit's position lies on the cached path. The rest of the cached path is then reused with no new search.
  - **Store.** `FUN_10043c84`, after a successful search, writes slot 0 for a distance under 15. For a longer path it writes slots 1-19: the first empty slot, otherwise the entry with the smallest span if that span is under the new distance.
  - **Clear.** The cache is cleared only by `FUN_1004248c`, at save (`FUN_1001e3ec`) and at load. It survives turns, so later routes ignore map changes such as a city that changed owner or a new blocker.
- **Remake.** There is no cache. The remake searches every time (main.c:13282-13331). Route choice can differ for orders that span several turns, and for the AI.
- **Fix.** Port the cache: lookup before the adjacency test, store after the trace, clear on save, load and new game. Skip it for preview searches (flags & 0x10), as the original does.

### A7 — Medium: flyers get road-builder search rules
- **Original.** `_DAT_809f0004` is `(param == 0xe)` in `FUN_10044110`. Its only caller with 0xe is the random-map road builder (PPC_0004.c:11656). In play it is 0, which means:
  - attempt 1 uses a bounding box of ±50 for every mode (PPC_0002.c:6155-6170; the 0x14 branch is dead for normal paths);
  - the trace takes only a strictly lower neighbour (6448).
- **Remake.**
  - main.c:13094 gives flyers ±20 in attempt 1.
  - main.c:13212 lets a flyer take its first step onto an equal-cost neighbour.
- **Fix.** Set `R = attempt ? 50 : 6` and remove the flyer tie rule.

### A8 — Low: the hidden-map block exempts the wrong tile
- **Original.** `FUN_10042ee4` (PPC_0002.c:6063-6066) exempts the **destination** from the unexplored block. In naval and flying modes (6080, 6098) the test uses `x != dstX && y != dstY`, so every tile in the destination's row or column is exempt. This is a quirk of the original code.
- **Remake.** main.c:13119 exempts the source tile instead, and the destination stays blocked unless it is a city.
- **Fix.** Exempt the destination in ground mode, and the destination's row and column for naval and flying stacks.

### A9 — Low: naval mode treats cities differently in the search
- **Original.** `FUN_10042ee4` naval branch: a cell is blocked only when it has no water bit. Foreign coastal cities (cost 0, flags 0x18) stay open, and the relax step at 6331 charges cost 0 to enter them. A ship's route can pass through a foreign coastal city; the executor then stops it in front.
- **Remake.** main.c:13111 also blocks cost-0 cells.
- **Fix.** Use `blocked = !(f & PFLAG_WATER)` for naval mode.

### A10 — Medium: Move All differs in grouping, order, passes and failure handling
- **Original.** `FUN_10041cf8` (PPC_0002.c:5291-5311):
  - It first runs the selected stack's orders.
  - It then repeatedly takes `FUN_1005619c`: the nearest unit by Manhattan distance from the last pick, owned and active (status & 1), not 0x40, not visited 0x200, with 0 counted as 9000.
  - For each, it selects the whole group with `FUN_10055c64` (the units on the tile with the same group byte +0x11; the leader is the best fight-order value) and runs `FUN_100419b0(target, 1)` once.
  - A stack that stops short gets 0x40 through `FUN_100562e0` (0x10041aac), so Next Group skips it this turn.
  - Orders that cannot be reached are kept (only `FUN_10093928` beeps). There is one pass.
- **Remake.** `MoveAllArmies` (main.c:20873-20967):
  - up to 50 passes, in record index order;
  - each record alone, because `sStackCount = 0` makes `PathBuildStack` see one record, so stacks split up and the stack MP minimum is ignored;
  - unreachable orders are cancelled (20933).
- **Fix.** Port `FUN_10041cf8` as described.

### A11 — Low: step keys handle pending orders differently
- **Original.** `FUN_100a0cf4` runs the pending path, then `FUN_100a0b08` (PPC_0004.c:6440-6480):
  - The step target is the stored target (or the position if there is none) plus the key's direction.
  - It paths there with `FUN_100419b0`; with too little MP, the shifted target remains as orders.
  - On results 1, 3 or 5 the old target is restored.
- **Remake.** `MoveSelectedArmyBy` (main.c:33137-33148) returns at once when the path is still pending or MP is 0, and a step it cannot afford stores no orders.
- **Fix.** Port the target-shift logic.

### A12 — Medium: attacks without MP, and attacks at Peace or Hostile
- **Original.** In `FUN_1002da54`:
  - **No MP.** With MP 0 there is no beep; it calls `FUN_100219a8(1,1,1)` and `FUN_1005cc8c`.
  - **Peace or Hostile.** With diplomacy on, a target owner other than 15, and state 0 (Peace), or state 1 (Hostile) on a city tile with city index > 0, it opens the 5-button "break the treaty?" dialog `FUN_10050ffc` (DAT 0x8d strings 0-4) and returns. The battle and the notoriety penalty (PPC_0001.c:23900-23920) follow only if the player confirms.
- **Remake.**
  - main.c:13663-13666 beeps.
  - `CheckAndResolveCombat` (main.c:15767-15773) refuses the fight with a beep and shows no dialog.
- **Fix.** Port the treaty dialog and its callback. Remove the beep when MP is 0.

### A13 — Medium: fliers and heroes in a ground stack board ships when they should not
- **Original.** The tail of `FUN_100171d4` (PPC_0001.c:12038-12073):
  - When boarding, it sets 0x1000 only on non-flying units.
  - A hero boards only when the stack has a non-flying non-hero unit. The `bVar8` test cancels `bVar3`.
  - Through `FUN_10017c28`, only the embarked units lose their MP.
  - `FUN_1002d3ac` also skips fliers and units for which `FUN_10039e24` is set.
- **Remake.** `PathBoardOrLand` (main.c:13403-13407) embarks every mover and zeroes its MP.
- **Fix.** Apply this per record: skip all-flying records, and skip hero records when the stack's non-hero units are all fliers.

### A14 — Medium (verify): clicking a distant enemy army does nothing, though the cursor says move
- **Original.** `FUN_1003b4a4` gives cursor 6 for a foreign army two or more tiles away (PPC_0002.c:2021-2031). The click dispatcher follows the cursor type, so the stack paths there and stops in front of the army (see A1).
- **Remake.**
  - `MapCursorType` agrees and returns 6.
  - `HandleMouseDown` (main.c:34384-34389) ignores the click. Its comment cites an observation from Tutoria turn 5, but that army was probably under fog, where the cursor is 0.
- **Fix.** Re-check that recording. If the army was visible, let the click move the stack.

### A15 — Low (verify): Next Group has a turn-0 case and an MP filter with no counterpart
- **Original.** `FUN_100559ac` (PPC_0002.c:13603) has no special case for the first turn. Its filter is `status & 1` and `!(status & 0x40)`, not MP greater than 0. `FUN_100558f8` clears 0x40 and 0x200 for the side at each turn start (calls at 0x10065480 and 0x10065ca4).
- **Remake.**
  - main.c:12161-12178 picks the strongest, leftmost army on turn 0.
  - main.c:12203 skips records with MP 0.
  - `army[0x2d]` (Defend) persists across turns, while the original's 0x40 skip flag lasts one turn.
- **Fix.** Port the function as written. Keep fortify as the map bit 0x20, separate from the per-turn skip flag.

### A16 — Medium: items are picked up automatically for humans
- **Original.** `FUN_100169c0`, the ground-item pickup, runs per step in `FUN_100171d4` only when the mover is a computer player or the AI flag `_DAT_38a0ffff` is set (PPC_0001.c:12001-12010). It also matches any tile of a city's 2x2.
- **Remake.** `CheckGroundItemPickup` runs after every human move (main.c:13549, 13590).
- **Fix.** Call it only when `sAITurnPlayer >= 0`.

### Part A: what was checked and matches
- **`PathSearch`** matches `FUN_10043248`: Chebyshev growth from the destination, an x-major scan, negative values for open cells, a 3-pass countdown after the source is expanded, failure when nothing changes, attempt 1 continuing on the same grid and radius, and a ±6 box in attempt 0.
- **`PathRelaxCost`** matches in ground, flying and naval modes, including the source special case (cost 1 when a port or the same element) and the embark penalty of 30 (distance under 10), 10, or 20 for a water destination (`FUN_10042ee4`). The hills/forest ability caps the cost at 2.
- **`PathStepCost`** is identical to `FUN_100445fc`: `trans` latches 0x80; flyers pay 2 on water without a port and 2 for cost 0; the ability rule matches.
- **The budget loop** matches `FUN_10044728`: the cumulative cost, and every step with `cum <= MP`.
- **`PathTrace`** matches `FUN_100439a4`: direction base `FUN_100184dc`, offsets 0,7,1,6,2,5,3,4, the port rule for ground stacks, absolute values of open cells, and a cap of 198 steps. The flyer tie rule is the exception (A7).
- **The adjacent one-step path** matches `FUN_100428dc`: same element, cost not 0, and the flying bypass.
- **The flag grid** matches `FUN_10044110` and `FUN_10042a24`: per-terrain flags (bridge 0x18, water/shore 0x08, forest 0x40, hills 0x20), the anchor bit 0x80 giving 0x10, coastal cities getting 0x18, foreign cities cost 0, and neutral cities opened for a computer ground search (`FUN_10042d2c`). The destination city is opened.
- **The stop rules** match `FUN_10017844`: foreign city gives result 5; the 8-unit stop points and the cut-back to the last valid stop; the cumulative cost charged to every mover. A5 is the exception.
- **Boarding and landing** follow `FUN_100171d4` and `FUN_10017c28`: board on Water/Shore, land elsewhere except on 1/2/3, MP 0, and no attack after the move (`FUN_10017cb4` gives result 2). A13 is the exception.
- **Battle advance boarding** matches `FUN_1002d3ac`: the stack boards and never lands.
- **`MapCursorType`** matches `FUN_1003b4a4` branch for branch:
  - Option returns 4; the fog check returns 0;
  - the embarked and Shore attack rules; the diplomacy rules (war gives 8 for a city, peace gives 10 for an army, using the remake's byte layout);
  - Shift with 'mili' returns 9; Command returns 11 or 0; the 3/7/5/0/2/6 tail.
- **The step-key direct attack** (cursor 8/10, no search) and "never auto-select next" match `FUN_100a0b08`.
- **Next Group's two passes** (Manhattan distance, 0 counted as 9000, the reference position from the last pick or the capital) match `FUN_100559ac` and `FUN_100558f8`. A15 is the exception.
- **Stack mode** (`PathBuildStack`) matches PPC_0002.c:5385-5431: embarked takes priority, then naval, then flying (all fly, heroes plus fliers, or a hero with flight); otherwise the OR of the ability flags.
- **Turn-start MP** for embarked records is 20 + carry, as in the boats note.

---

## Part B: Save and load

### What the original writes
`FUN_100283f8` (PPC_0001.c:20296-20348) writes, in order:
1. A **0x54-byte header** at 0x4bee8f55: a 0x3a-byte terrain/scenario name, a short, a 0x10-byte army-set name at 0x4bee8f91, and 4 shorts. On load (PPC_0001.c:20672-20690), the terrain and army set are reopened by name through `FUN_10027a58`.
2. **gs**, 0x2FCC bytes. This includes:
   - the 0x42-byte city records at gs+0x1604 and the ruins at gs+0x812;
   - diplomacy, notoriety (gs+0x1122), quest records (gs+0x1142), and the advisor fields gs+0x100 and gs+0x108.
3. **The map**, 0x8880 bytes.
4. **The unit table**, 22000 bytes (1000 entries of 0x16). It includes the group byte +0x11, the target +0x12/+0x14, and the status flags 0x40, 0x200 and 0x1000.
5. **The road/fog grid** `_DAT_807f0004`, 0x4440 bytes.
6. **A second 112x156 grid** `_DAT_63e30000`, 0x4440 bytes.
7. **Two length-prefixed blobs** from the document object (+0x15c and +0x160).
8. The flag **gs+0x130 = 1**.
9. When `param_2` is set, `FUN_1001e3ec`: 8 per-player AI blocks of 0x42c bytes, a 0x4b0-byte shared block, and a cache clear through `FUN_1004248c` (see A6).

### What the remake writes
`SaveGameToFile` (main.c:30774-30934, v8):
- gs (0x2FCC), ext (0x4000), map (0x8880) and a UI block of 10 shorts;
- roads (0x4440), `sCityNames`, an options block, user signposts, history, fog (explored and visible);
- `sPlayerQuests`, `sMoveCostTable`, SGN signposts;
- v7: AI blocks, orders, neighbour tables, original owners and ally flags;
- v8: city slot stats, which live inside ext.

### B1 — Critical: cities and ruins are not saved
- **Remake.**
  - The runtime city and ruin table `sCityData[140*0x20]` and its count `sCityCount` (main.c:94, 99) are static arrays outside gs and ext.
  - Neither `SaveGameToFile` nor `LoadGameFromFile` touches them.
  - `sCityCount` is set only in GameInit and the random-map generator (main.c:2182, 2318, 5463).
- **Effect.** The table holds city owner, position, production slots, ruin and temple kind, guardian, searched state, and so on.
  - Opening a save in a fresh session gives `sCityCount = 0`: no cities, no income, no ruins.
  - Revert or Open within a session keeps the post-save cities while armies, gold and ext roll back. For example, a city captured after the save stays captured.
- **Fix.** Bump the version to 9. Write `sCityCount` and `sCityData`. On load, read them back, and for older saves rebuild them from scratch or refuse the file.

### B2 — Medium: the army set and terrain set are not saved
- **Original.** The header names both sets, and load reopens them.
- **Remake.** None of these are saved: `sSelectedArmySet`, `sUnitTypeTable` and its base copy, `sUnitTypeCount`, the shield set and the terrain file.
- **Effect.** Opening a save made with a non-default army set uses whichever set is loaded at the time. Unit stats, upkeep and sprites can all be wrong.
- **Fix.** Save the set names and reload them before reading gs.

### B3 — Low: scenario-derived text is not saved
- **Remake.** These are not saved: `sStandardNames[8][20]` (main.c:843), `sScnCityNames` and `sScnCityNamesValid` (1427-1428), `sCityDescs` and `sSiteDescs` (1429-1430).
- **Effect.** After a fresh load, the city window name, the descriptions and the standard names come out blank or stale.
- **Fix.** Save them, or reload them from the scenario named in the save.

### B4 — Low: Next Group's visited flags are not saved
- **Original.** The visited flag 0x200 sits in the saved unit table.
- **Remake.** `sArmyVisited` and `sNextRef*` (main.c:12126-12127) are not saved. The reference-position statics are not saved in the original either.

### B5 — Low: transient state is not reset on load
- **Remake.** `LoadGameFromFile` leaves `sUndoArmyIdx` and its related fields (main.c:1154-1158) untouched. Edit > Undo (31621) after Open or Revert can then move a record of the loaded game back to a stale position.
- Also stale after load: `sStackCount` and the stack arrays, `sPathTargetX` and `sPathTargetY`, and the preview state.
- **Fix.** Reset all of them in `LoadGameFromFile`.

### B6 — Note: path cache
If A6 is ported, clear the cache on save and on load, as `FUN_1001e3ec` and the load at PPC_0001.c:20895 do. The original's save therefore changes later routes.

### Part B: what is preserved correctly
- **In gs:** notoriety (gs+0x1122), the advisor fields gs+0x100 and gs+0x108, diplomacy (gs+0x1582), gold and player stats, items (gs+0xD12), the original quest area gs+0x1142, the group tags `army+0x11`, and orders +0x32 to +0x36.
- **In ext:** temple-blessing bits (ext+0x3500) and the per-city slot stats (v8).
- **Separately saved:** AI state (v7), fog, history and signposts.
- Battle RNG: neither game saves it. The original seeds `randSeed` from the date at launch, so a reverted battle re-rolls in both.

---

## Part C: Gameplay the remake invented

| # | Feature | Location | Reachable? | Original | Fix |
|---|---|---|---|---|---|
| C1 **High** | Quest system: types Capture, Explore-3-ruins, Own-N-cities and Accumulate-gold; seeded from `TickCount`; rewards of 300-600 gold plus an item; a "Quest Complete!" popup. Generated automatically every turn for every side, and from the Quest... menu. The AI's `AIHeroQuest` and `gAI->questCity` use it. | `GenerateQuest` 18045, `CheckQuestProgress` 18130, turn start 30595-30668, `ShowQuestDialog` 18214, combat hook 15287, income hook 30415, search hook 32553, AI 27074-27110 and 27315 | Yes, whenever quests are on (gs+0x11E) | Quests come from a temple through Search: `FUN_1005447c` → `FUN_1007c714(0x3f9)`. They are stored in gs+0x1142 at 0x0C bytes per side. | Replace with a port of the temple quest code. |
| C2 **Medium** | Automatic ruin search for a human hero that stops on an unsearched ruin | `TryAutoSearchRuin` 33064-33109, called from `ExecutePathSteps` 13598 | Yes | A human searches only through Heroes > Search. `FUN_1005447c`'s only callers are the command handler `FUN_1007d168` (0x1007d790) and AI code. Tutorial hint `FUN_1005f6b0(0x19,5)` prompts the player to search. | Remove the automatic search. |
| C3 **Medium** | Automatic temple blessing on any stop, for humans and computer players | `TryTempleBlessing` 33011, called from 13597 and 33077 | Yes | Blessing is part of Search: `FUN_1005447c` → `FUN_10052900` (no hero needed, MP > 0). A computer player gets it only through a search task (`FUN_10013a10`). The remake's Search command never blesses: type 2 ends in "No ruins at this location" at 32603. | Move the blessing into the Search command and the AI search task. |
| C4 **Medium** | Ground-item pickup for humans | 13549, 13590 | Yes | Computer players only (see A16) | Gate it on the AI. |
| C5 Low | Search runs without a hero and with 0 MP | 32415-32440 | Yes | `FUN_1005447c` requires MP > 0 and a hero, except at a temple | Add both checks. |
| C6 Low | "Treasury Warning!" dialog whose "Disband Weak" button deletes a record and adds 8 gold | 30417-30541 | No: gold is clamped to 0 at 29035, so `newGold < -100` never holds | None | Delete it. |
| C7 Low | Random turn events (plague, tribute, blessing) | 30091-30210 | No (`if (0 && ...)`) | None | Delete it. |
| C8 Low | City-label overlay and hover tooltip | 8815, 36392 | Only with `sShowCityLabels`, which defaults off | None | None needed |
| C9 Low | Old per-type unit variance | 3240 | No (`if (0)`) | None | Delete it. |
| — | Already neutered: income summary (30414), "X produced Y" (29316), production-stalled notice (29081), 5-turn summary (29751), unmoved prompt (32760) | — | No | — | — |

---

## Suggested fix order
1. **B1**: save the cities.
2. **A1 and A2**: attack semantics for human and AI paths.
3. **A3**: attack MP cost.
4. **A4**: fog radius for flyers.
5. **C1**: the invented quest system.
6. **A10**: Move All.
7. **C2, C3 and C4**: automatic search, blessing and pickup.
8. **A5, A12 and A13**.
9. **A6**: the path cache, together with B6.
10. **A7, A8 and A9**.
11. **B2, B3 and B5**.
12. **A11, A14 and A15**.
