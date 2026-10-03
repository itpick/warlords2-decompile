# Heroes, quests and AI phase 2 review (Oct 3, 2026)

Scope:
- (A) heroes, items, ruins/temples/sage, and the quest system.
- (B) AI phase 2: hero AI, expeditions, release, fronts, raids, diplomacy.

Authority: PPC 1.0.7. Original = `tools/ppc_decompiled/PPC_0001.c` unless noted. Remake = `src/main.c` at HEAD 3b60499.

Where Ghidra dropped a jump table ("Removing unreachable block", `if (x < N) return;`), the cases were read from the PEF:
- Code: `tools/ppc_verification/wl2_code.bin`, at address − 0x10000000.
- Data: the pattern-unpacked data section of `warlords2_ppc.pef`, with TOC = data + 0x26c8.
- A `-0xNNNN(r2)` operand is the word at data + 0x26c8 − 0xNNNN. That word is a code-relative pointer for jump tables and data-relative for tables.

The unpacker and disassembler used are small scripts (capstone). Re-create them from this note if needed:
- PEF section 1 is pattern data. Opcode 4 is "zeros interleaved with custom data".
- The main TV at data+42280 = (code 0x117570, TOC 0x26c8).

Severity: **HIGH** = wrong rule or number that players see often. **MED** = wrong in some situations. **LOW** = rare, cosmetic or unverified.

## Summary

**Quests.**
- The original's quest system is fully documented in A0: 7 types, temple-only acquisition, 6 check codes, 11 cancel messages, the reward table, +10 XP, the Victory-dialog defaults and hidden sites.
- The remake's quest code is invented and must be replaced (A1, A2, B4).

**Part A.**
- HIGH: A1 quests; A2 hidden sites; A5 ruin ally types (stat 13 types, composite score); A6 guardian strength table.
- MED: A3, A4, A7, A8 (+3 XP per search), A10 (no item cap), A11 (defender XP quirk), A13 (computer hero offer order/gates).

**Part B.**
- HIGH:
  - B1: the hero step runs up to twice and releases lone heroes.
  - B2: all four front stacks move; continuation and repeat cases.
  - B3: per-front minMoves 12/16 and feeder-class flags 8/0x10/0x20.
  - B4: computer quest play.
  - B5: gs+0x11a vs gs+0x11e (a phase-1 bug).
- MED: B6-B13. LOW: B14-B19.

**Diplomacy layout.** Resolved: the remake's byte bits 0-1 / 2-3 are an exact re-encoding of the original's `>>26&3` / `>>28&3`, so AIAtWar is correct.

---

## Part A — heroes, items, sites, quests

### A0. The original's quest system (full spec)

**Quest record.** `gs+0x1142 + p*0xC`, six shorts. Saved in the game file (PPC_0002.c:14343-14358, 15426-15441).

| off | gs | meaning |
|---|---|---|
| +0 | 0x1142 | active (1) / none (0) |
| +2 | 0x1144 | type 0..6 |
| +4 | 0x1146 | quest hero = **unit index** (unit array, 0x16 bytes per unit) |
| +6 | 0x1148 | target: unit idx (0), item idx (1), unit type (2), player (3), city idx (4, 5), 0 (6) |
| +8 | 0x114a | amount: units to kill (3), gold to take (6) |
| +A | 0x114c | progress (3, 6) |

**How a quest is given.** Only at a temple, with quests on (`gs+0x11e`). Nothing generates a quest at turn start or from a menu.

- **Human.** The temple dialog is FUN_1004bd0c (PPC_0002.c:10257): "Thou canst be blessed or receive quests. What dost thou wish?".
  - Its `ques` button is enabled only when quests are on, the player has no active quest, and a hero is selected.
  - `ques` → FUN_1004bc90 → `FUN_1004b11c(0)`, then command 0x5e3 (the quest dialog). Choosing the quest **does not bless**.
  - `Done` → FUN_1004bcd0 → FUN_10052900, the blessing.
  - A stack without a hero (`_DAT_57e31838 == 0`) on a temple is blessed directly (FUN_1005447c, PPC_0002.c:13018).
- **Computer.** FUN_10013a10 (PPC_0001.c:10030-10069; reached from the step-3 expedition search and FUN_100151e8): a hero that searches a temple (site +0x18 == 1), with quests on and no active quest, calls `FUN_1004b11c(1)` right after the blessing.
- **The Quest… menu (cmd 0x5e3).** FUN_1004d0d0 (PPC_0002.c:10380) only **shows** the current quest. With no quest, or a dead or invalid hero, it shows "Thou hast no quests! / Seek a quest in a temple!" (STR 0x15). It never creates a quest.

**Generator FUN_1004b11c(isAI)** (PPC_0002.c:10187; cases disassembled from 0x1004b2bc-0x1004bc5c, jump table at 0x1004bc70).

1. It first writes a history entry (FUN_10038c60(p, 3, …): "%s receives a quest").
2. It loops until a case succeeds. Each pass does `tries++` and picks a type:
   - Human: `type = T[Dice(1,11,-1)]`, with T = {0,1,2,3,4,5,6,4,4,5,6} (data 0xbe90).
   - Computer: try 1 → `Dice(1,5,-1)==0 && gs+0x114` (razing allowed) ? 5 : 4. Try 2 → 3. Try 3 and later → 6.
3. Before the switch it stores active=1, hero=selected unit, type.

| type | target rule (all RNG via FUN_1005f230) | fails → retry when |
|---|---|---|
| 0 slay hero | n = enemy heroes (unit type 0x1C, owner ≠ me); k = Dice(1,n,0); target = the k-th, scanning from the last unit down | n = 0 |
| 1 find item | Count items i<22 with status (+0x16) **== 2** (in a ruin), not special (FUN_100390e4 == 0), and \|dx\| < R and \|dy\| < R from the hero, with R = isAI ? 30 : 50. Then k = Dice(1,n,0) and the selection loop counts items with status **!= 0** (an original bug: it can land on a ground or carried item). Target = item. Then reveal: FUN_1000931c(p, x, y); the site at x,y gets the known bit (`site+0x1e \|= 1<<p`) and FUN_10064498(1, x, y); then a redraw. | n = 0 |
| 2 kill a unit type | Up to 5 tries: t = FUN_10032d4c() (uniform over types with stat[13] ≠ 0, else 0x19). Accept if an enemy unit of type t is alive (x,y ≥ 0). Target = t. | 5 misses |
| 3 slaughter N armies | Only if `gs+0x15c == 0`. Up to 200 tries: q = Dice(1,8,-1), q ≠ me and alive (`gs+0x138`). Then N = Dice(1,12,10) = 11..22, which must be ≤ q's live units. Target = q, amount = N, progress = 0. | 200 misses, or N > units |
| 4 occupy city | Only if `gs+0x15c == 0`. For every city not mine whose terrain is a city (type 10): s = Dice(1,50,0); +50 if Euclid(hero, city) < (isAI ? 40 : 60); with diplomacy on (`gs+0x11c`) and a non-neutral owner at war (`(long@gs+0x1582+me*0x10+owner*2 >> 26) & 3 == 2`), s += Dice(1,50,0). Strictly best s wins, scanning from the last city down. | none |
| 5 raze city | Only if `gs+0x15c == 0` and `gs+0x114`. Up to 200 tries: c = Dice(1,cities,-1), not mine and a city tile. Accept if Euclid(hero, c) ≤ 60 or try ≥ 100. | 200 misses |
| 6 steal gold | target = 0, progress = 0, amount = Dice(3,300,500) = 503..1400 | never |

**Checks: FUN_1004e384(code, _, gold)** (PPC_0002.c:10785; cases disassembled from 0x1004e4c4-0x1004f2bc, jump table at 0x1004f36c).

The function starts by checking the quest hero. If its owner is no longer me (the hero died), it shows "Alas! Thy hero is dead! / Thy quest hath become impossible!" (0x21) to a human and clears the quest.

"In stack" means the quest hero is one of the moving stack's units. "Cancel(msg)" means: a human sees the message, and active = 0.

| code | called from | rule |
|---|---|---|
| −1 | turn start, after the hero offer and level-ups (PPC_0002.c:21317 computer, 21637 human) | type 4 or 5 and the city is no longer a city tile → cancel(0x22 "the city is razed"). Type 4 or 5 and the city is now mine → cancel(0x2b "not won by thy hero"). Type 0 and the target unit's type ≠ 0x1C → cancel(0x2a "hero … slain"). Type 3 and the target player is dead → cancel(0x28 "foes … all dead"). Type 1 and the item's status is 0 → cancel(0x29 "item … gone"). |
| 0 | after every battle the player starts (PPC_0001.c:23775/23784/24162) | Needs the hero in the attacking stack. Type 3: if the defender's owner is the target player, progress += defenders killed; done if progress ≥ amount. Type 2: a killed defender of the target type → done. Type 0: the target hero unit was killed → done. |
| 1 | pillage or sack, with the gold taken (PPC_0002.c:8087, 8181) | Type 4 or 5 and the city is mine and still a city → cancel(0x25 "not to pillage"). Then, with the hero in the stack and type 6: progress += gold; done if ≥ amount. |
| 2 | raze (PPC_0002.c:8216; computer PPC_0001.c:9561) | Type 5: the city is neutral and no longer a city tile, and the hero stands on that city → done if the hero is in the stack, else cancel(0x26 "not razed by thy hero"). Type 4 and the city is no longer a city tile → cancel(0x27 "was to keep this city"). |
| 3 | item pick-up (Take, FUN_10053330 PPC_0002.c:12584; PPC_0004.c:225) | Type 1: the item's status is 3 and its carrier is the quest hero → the item is **consumed** (status 0) and the quest is done. |
| 4 | occupy (PPC_0002.c:7859; computer PPC_0001.c:9569) | Type 4: the city is mine and still a city → done if the hero is in the stack, else cancel(0x23 "not taken by thy hero"). Type 5 with the same test → cancel(0x24 "was to raze this city"). |

**On completion** (0x1004f2c4):
1. active = 0.
2. `kind = FUN_1004dc94(&arg)`, then `FUN_1004e0f4(kind, arg)` applies it.
3. A human gets sound 3 and FUN_1004d9cc, the "Thou hast completed thy quest!" view 0x1068 with the reward lines.
4. Returns 1.

**Reward FUN_1004dc94** (PPC_0002.c:10626). Rolls happen in this order.

1. `allyOK` = true. If the hero is not on a city tile, `allyOK` = false when any unit type has flag[4] (stat 13) == 2 and flag[0] (flies) == 0.
2. Count reward items: status 0, special (FUN_100390e4 ≠ 0), and index ≥ 8 or == me (a player's own Standard). Count hidden sites (FUN_1004dbbc): hidden (+0x1c ≠ 0), not known to me (+0x1e bit), kind ∉ {0,1}, and not searched (map bit 22).
3. If items > 0: Dice(1,3,0) == 1 → **kind 0, item** (the k-th by Dice(1,items,0)). Otherwise go straight to step 5.
4. Else if sites > 0 and Dice(1,3,0) == 1 → **kind 1, show a site**: the nearest such site by Chebyshev distance from the hero.
5. If `allyOK` and (gold ≥ 600 or Dice(1,2,-1) ≠ 0) → **kind 3, allies**: arg = Dice(1,3,2) = 3..5.
6. Else → **kind 2, gold**: arg = Dice(2,1000,1000) = 1002..3000.

**Apply FUN_1004e0f4** (jump table at 0x1004e370):
- Kind 0: the item gets status 3 and carrier = hero.
- Kind 1: the site gets the known bit for me; a human also gets FUN_1000931c reveal, a redraw and FUN_10039ec8 (redraw site tiles).
- Kind 2: gold += arg, capped at 30000.
- Kind 3: type = FUN_100357ec; arg units of that type are created at the hero's tile (FUN_10053838).

Every kind then writes history 2 ("%s completes quest") and gives the hero **+10 XP** (FUN_1003357c, cap 60).

**Other quest hooks:**
- Disbanding the quest hero clears the quest silently (PPC_0001.c:17900).
- Victory-dialog default button FUN_100472f4 (PPC_0002.c:8292-8318). It defaults to `occu`. With quests on, an active quest, and the selected unit being the quest hero:
  - type 5 and the target is this city → `raze`;
  - type 6 → `sack` if the city can be sacked (FUN_1004639c ≠ 0), else `pill` if it can be pillaged (FUN_1004645c ≠ 0).
- **Hidden sites** (part of the quest option, "Hero quests and hidden sites"):
  - FUN_10038fb8 (PPC_0002.c:817) marks `sites*3/10` random non-temple sites hidden (+0x1c = 1, the remake's "hard"). With quests on, their known mask +0x1e is 0. Every other site has +0x1e = 0xFF.
  - FUN_10039ec8 draws an unknown hidden site as terrain 9 (invisible) when quests are on. Hidden sites are revealed by the quest reward (kind 1) or the sage.
- **Computer quest play** (step 1):
  - FUN_100164e4 sets `AI+0x46` (questCity) to the target for types 4 and 5.
  - FUN_10015324 (PPC_0001.c:10846) moves the hero's stack (MP ≥ 8, FUN_1001ed3c) to that city. It needs ≥ 1 unit, or ≥ 2 if the city is non-neutral and turn > 7, and the city must not be unexplored. If not already ordered there, it needs winEst ≥ 75.
  - FUN_10012a8c (PPC_0001.c:9529) runs after a computer capture of the quest city with the hero present: `AI+0x4a++`, questCity = −1, and type 5 → forced raze (FUN_1001bbf0(c,1)) then code 2, else code 4.
  - FUN_100159c8 (11177) adds temples within min(range, 11) as hero targets when the player has no quest.

### A1. The remake's quest system is invented and must be replaced — HIGH

The remake is at main.c:481-495, 18033-18400, 30595-30670, 30415, 15287, 32553, 27074-27120, 27314-27331, 30897, 31075 and 8345.

- It has its own types (CAPTURE / EXPLORE / CONQUER / GOLD), `TickCount()` randomness, fixed rewards (500/400/300+50n gold plus an item), and its own `QuestState` array outside the game state.
- It auto-generates a quest at every turn start (30660-30667) and from the Quest… menu (18233-18238).
- It checks progress at income time (30415), after captures (15287) and on ruin searches (32553).
- None of this exists in the original.

**What to change:**
1. Delete `QuestState`, `sPlayerQuests`, GenerateQuest, CheckQuestProgress, the turn-start popup and generation (30595-30670), the income hook (30415), the capture hook (15287), the ruin hook (32553), and the extra save/load block (30897, 31075). Keep the quest record in `gs+0x1142+p*0xC` (it is already zeroed at 8345 and saved with gs).
2. Port FUN_1004b11c as `QuestGenerate(isAI)` exactly as in the A0 table, including the retry loop, the per-type RNG order, the item-quest status mismatch, and the history entry.
3. Port FUN_1004e384 as `QuestCheck(code, gold)` with all 6 codes and the 11 cancel messages (STR 0x21-0x2b, the "Alas! …" pairs). Call it:
   - at turn start for every player with an active quest, after the hero offer and level-ups;
   - with 0 after each battle the mover starts;
   - with 1 from pillage and sack (with the gold);
   - with 2 from raze;
   - with 3 from the ruin-item Take;
   - with 4 from occupy (ApplyVictoryChoice, 15117);
   - from the computer capture path FUN_10012a8c (AIAfterBattle 24999).
4. Port FUN_1004dc94 and FUN_1004e0f4 (the reward, with the exact roll order) and the +10 XP.
5. The temple dialog: a human hero on a temple gets the Bless/Quest choice (View 0x100e; lin1-3 from STR 0x14). Quest → generate, then show the quest view (0x1068, FUN_1004d0d0 / FUN_1004c0b8). The text per type is the STR lines "Thou shalt seek out / and slay the foul / %s hero / He can be found to the …", etc. A stack without a hero is blessed directly.
6. The Quest… menu (32383) only shows the current quest, or "Thou hast no quests! / Seek a quest in a temple!".
7. The Victory dialog default button (ShowCityVictory 14918): the ring and Return currently always pick `occu` (14953-14962, 14984). Apply the raze and sack/pillage defaults from A0.
8. Clear the quest when the quest hero is disbanded.
9. Computer side:
   - Replace AIHeroQuest (27074) and the `sPlayerQuests` uses (27104, 27314-27316, 27331) with the gs record. questCity = target for types 4 and 5 (27314).
   - Port FUN_10015324's rules (the 1/2-unit minimum, the unexplored test, winEst ≥ 75 unless already ordered) and FUN_10012a8c (forced raze for type 5).
   - AIHeroSearchHere / AISearchSite must call QuestGenerate(1) after a temple blessing when there is no quest.

### A2. Hidden sites are not implemented — HIGH

- Original: FUN_10038fb8 and FUN_10039ec8 (above). With quests on, the sites flagged +0x1c (the remake's `SITE_HARD`) are invisible until revealed to that player, by a quest reward (kind 1, the known bit), the sage, or the item quest's reveal.
- Remake: setup (2594-2760) flags `SITE_HARD` but never hides those sites. Map drawing, the Ruins report (20360-20375) and search never consult a known mask.
- Fix:
  - Add a per-site known mask: 0xFF, or 0 for hidden sites when quests are on.
  - Draw an unknown hidden site as plain terrain.
  - Make the quest reward, the sage and the item quest set the bit.

### A3. Site setup counts exclude temples — MED

Original FUN_1003956c (PPC_0002.c:1030) and FUN_10038fb8 base every count on `gs+0x810`, which is **all sites, temples included**:
- p = sites*2/10;
- hidden = sites*3/10;
- N = min(22, sites/3 + 8 + Dice(1,5,-3)).

Remake: `ruins*2/10` (2648), `ruins*3/10` (2671) and `ruins/3` (2686) leave the temples out. Use the full site count.

### A4. Site setup details — LOW/MED

- **"Far" test (MED).**
  - Original (0x100399a8-0x10039a10): a site is near when **Euclid** distance (FUN_1000a884, truncated) ≤ 14 from any living player's capital (`gs+0x18a/0x18c`).
  - Remake (2735): Chebyshev `dx<=14 && dy<=14`, and it skips capitals at (0,0). Use AIDist ≤ 14.
- **Item placement retries (LOW).**
  - Original: the loop only counts and stops tries on draws that pass the special↔hidden test (`if ((!special || hidden) && (special || !hidden)) { take if unused; if (++tries > 100) {status 0; carrier = site; break;} }`). A mismatching draw costs an RNG call without counting.
  - Remake (2697-2704): counts every draw.
  - This only matters for RNG-stream parity.
- **Verified (with the PEF tables at data 0xb2f8-0xb320):**
  - kind tables hidden {5,5,4}, far {3,4,5,3,4}, near {3,4,5};
  - guardian Dice(1,9,0) for non-ally sites, none for temples;
  - ally ranks: hidden = 4 strongest (rank 0-3), far = the next 3 (ranks 4-6), near = weakest (FUN_10038d8c writes the weakest twice);
  - special items only in hidden sites, k = Dice(2,3,1) clipped to p, slot ranges.

### A5. Ally type ranking (ruin allies) — HIGH

- Original FUN_10038d8c (PPC_0002.c:726):
  - Candidates: types 0..28 except 0x1C and 5, and only those with **stat[13] ≠ 0** (the ally types).
  - Score: `str + 3*(s9+s10+s11+s12) + 2*s15 + 2*s16 + moves/5`, with stats from the unit-type entry: local_da = stat0, d4 = stat3, c8..c2 = stats 9-12, c0 = stat13, bc = stat15, ba = stat16.
  - Sorted ascending.
- Remake RankedAllyType (19179): every non-naval type, ranked by strength alone. Ruins therefore hand out Heavy Infantry and the like, where the original gives only Wizards..Dragons.
- Fix: candidates `UnitStatLE(t,13) != 0`, t ∉ {5, 0x1C}, with the composite score.

### A6. Guardian strength comes from the wrong table — HIGH

- Original FUN_1005310c (PPC_0002.c:12477): guardian strength = `*(short*)(gs + 0x1046 + g*2)`. This is a short table that starts right after the ten 16-byte guardian-name slots (names at gs+0xfa6+g*0x10; 0xfa6 + 0xA0 = 0x1046). Both are scenario data.
- Locating it in the remake: GuardianName (19385) reads guardian n at gs+0xF77+(n−1)*0x10, i.e. a base of 0xF67, which is 0x3F from the original's 0xfa6. That does not fit the usual 1-byte SCN/gs shift, so check one of the two. If the remake's name base is right, the strengths are at gs+0x1007+g*2. Confirm against a SCN dump (Erythea guardian names and strengths) before coding.
- Remake SiteGuardianFight (19285-19295): uses `GetUnitTypeStat(guardType, 0)`, the strength of the *unit type* with that index, or a made-up default table.
- Fix: read the scenario short table described above.

### A7. Guardian fight counts records, not units — MED

- Original: `sVar4` = units (0x16 records) on the hero's tile, of any owner (12500-12510).
- Remake (19297-19301): counts 0x42 army records, each holding up to 4 units.
- Fix: count occupied slots on the tile.
- The rest of the formula matches: lose iff `3*n + (heroStr + Σ type-1 item values − g)*5 + 90 < Dice(1,100,0)`.

### A8. Searching gives the hero XP — MED

- Original FUN_100539e8 (PPC_0002.c:12813): `FUN_1003357c(hero,3)` before any non-temple search, guardian fight included. The sage gives +3 too (13042). The temple gives +1 per blessing to each hero blessed (12244-12273).
- Remake: no XP for ruins or the sage. The comment at 32549 removed it based on 68k. Restore +3.

### A9. Ruin gold is uncapped in the original — LOW

- Original: `gold += Dice(3,500,500)` (hidden: Dice(3,1000,1000)) with **no** cap (12930-12934).
- Remake (19443): caps at 30000.
- The sage's gem does cap, in both the remake (32952) and the original computer sage FUN_100126a4. Only ruin gold is uncapped.
- Keep the short wrap behaviour or drop the cap. Rare.

### A10. Item slot limit — MED

- Original: items reference their carrier by unit index (`item+0x18`). A hero can carry any number:
  - Take (FUN_10053330) moves every listed item to the hero.
  - Quest and search rewards never test a count.
  - The computer's "holds < 3 items" test (FUN_10015dc8) is only a targeting rule.
- Remake: 4 slots at army+0x3A (ITEM_SLOTS, 500). GiveItemToHero fails when they are full, and ruin items then stay on the ground (19417-19423, 19150-19158).
- Fix: drop the cap (iterate the item table by carrier), or raise it to 22.

### A11. Defending heroes' battle XP (original quirk) — MED

- Original (disassembled at 0x1002eb14-0x1002ec04): a surviving defender at index i gets +1 XP only when **the attacker type array at the same index i** is 0x1C. It reads r20, the attacker types, rather than the defender types. FUN_1003357c then requires the defender to be a hero.
- Attacker heroes: +2 when the battle tile is a city, else +1 (matches).
- Remake BattleApply (14365): every surviving defending hero gets +1.
- Fix, for exact numbers: `if (!attacker && b->att[i - nAtt].type != 0x1C) skip`. Use the attacker list order the original uses (`DAT_9421ffc8` = the moving stack in order).

### A12. Hero death: Standard vectoring reset — LOW

- Original FUN_1002e5c0 (PPC_0001.c:23190):
  - Clears the hero slot `gs+0x544+slot*2`.
  - Drops each item: status 1 at x,y, or status 0 when the death tile's terrain type is 2.
  - For an item whose index equals the current player (the player's Standard), it clears vectoring on every city vectoring to the Standard (FUN_10047de8(−2): city+0x32 = 0, target −1/−1).
- Remake DropHeroItems (13820): drops and loses items the same way, but does no vectoring reset.
- Add the reset if vectoring to the Standard exists in the remake.

### A13. Computer hero offer order and gates — MED

Original FUN_10032a24 (PPC_0001.c:25146), the same code for computer players (called at PPC_0002.c:21304):
1. Returns if `gs+0x15e`.
2. Turn 1: the capital, no dice.
3. Counts **all hero units**: total < 40, own < (cities ≥ 40 ? 6 : 5), from FUN_1002bdc4's city counts.
4. Rolls the cost: Dice(1,400,300), or Dice(1,600,1000) with a hero. Gold < cost → no.
5. Dice(1,30,0) < 7.
6. City k = Dice(1,cities,0), the k-th own city in city order.
7. A computer player then overrides the city with FUN_1000db10.

Remake AIHeroOffer (26246-26290):
- (a) rolls the 6-in-30 **first**, then the cost, so the RNG order differs;
- (b) counts heroes only in slot 0 of each record (26262);
- (c) skips the `gs+0x15e` gate (ExecuteAITurn 28115);
- (d) counts only `sType == 0` cities for the 6-hero cap (26276), leaving out the capital;
- (e) picks the city uniformly from `sType ∉ {2,5,6}`, which lets in site types 3/4, and caps the list at 40 (26291-26300);
- (f) has no FUN_1000db10 strongest-city override.

Fix: share ShowHeroHire's ordered logic and add FUN_1000db10.

### A14. Hero levels, blessing, items — verified

- Level-ups: FUN_10033b4c / FUN_10033600 (one level per turn start; thresholds XP > 14, 29 and 59; strength +1 capped at 9 via FUN_10021200; max moves +2). Remake 28895-28912 matches.
- XP: FUN_1003357c caps at 60 (AddHeroXP 13859).
- Temple blessing: FUN_10052900, one bit for each of the first 4 temples, +1 strength capped at 9, +1 XP for heroes. TryTempleBlessing (33011) matches, except that it fires on any move end where the original goes through the A0 dialog.
- Item types: 1 battle (+value to hero strength), 2 command (+value), 5 flight, 6 double move, 7 gold per turn (value), 8 Standard (+1 command). From FUN_100954fc, FUN_10095444, FUN_10039c58/d80/e24 and the inspect text (PPC_0004.c:276-330, 780-815). They match ITEM_TYPE_* (500-506) and GetHeroItemBonus (19009).
- Special items (FUN_100390e4: type 5, 6, 8, or 2 with value > 1) match IsSpecialItemTV.
- Item drop on death: terrain type 2 → lost, else status 1 at the tile. Matches DropHeroItems.
- Ruin kinds at search (FUN_100539e8):
  - item: a computer player carries it; a human gets it on the ground plus Take;
  - gold: Dice(3,500,500), hidden Dice(3,1000,1000);
  - allies: Dice(1,2,0), +2 if hidden, of the stored type;
  - sage: +3 XP, then the dialog (human) or FUN_100126a4 (computer).
  - Matches SearchSiteReward apart from A5, A8, A9 and A10.
- Guardian-fight formula and hero loss (items drop, guardian stays). Matches apart from A6 and A7.
- Hero allies on hire (FUN_10032e2c): type first, then Dice(1,100,0) <70 / <95, turn ≥ 2. HeroBringsAllies (21524) matches.
- Not re-derived here: the combat leadership table (`kLead`, 14169) and how items enter BattleValues. These belong to the combat audit.
- Not traced: the sage's Items/Maps branches (FUN_10052fdc → cmd 0x3f8). The remake's Items button is disabled (32925).

---

## Part B — AI phase 2

Remake functions: main.c 26398-28100.

### HIGH

**B1. The step-1 hero loop runs once, not up to twice, and loses the hidden-map hero release.**

Original FUN_100164e4. The choice switch is lost in Ghidra; it was disassembled at 0x10016800-0x10016994, jump table 0x100169ac.
- The loop runs while `MP ≥ 4`. Each pass: iterations++, then pick sites, item and city, then FUN_100161fc.
- Choice 1 (temple): r = FUN_10015554(idx, 0, list, 1). The "acted" flag is unchanged.
- Choice 2 (item) and 3 (ruin): r = FUN_10015554(idx, choice, list, 0); acted = 1.
- Choice 4 (city): r = FUN_10016344, which always returns 0; acted = 1.
- Choice 0: if acted, and hidden map (`gs+0x124`), and max(turn,1) < 10, and FUN_1001ed3c(hero tile, MP ≥ 8) == 1 (the hero alone) → FUN_1001a348(hero, −1): the hero is released as a free-roamer. Then r = 0.
- r is forced to 0 if the hero died or changed owner.
- Repeat while `r != 0 && iterations < 2 && hero MP ≥ 4`.

Remake AIStepHeroes (27339-27358): one pass, no release.

Fix: wrap 27340-27357 in that loop. Make AIHeroGoSite return the arrived flag (it already returns `r == 4`), and add the default-case release.

**B2. Front stacks: only the first registered stack moves; the r = 0 and r = 2 cases are missing.**

Original FUN_1001c854 (PPC_0001.c:14972; switch disassembled at 0x1001c894-0x1001ca04, jump table 0x1001ca1c). For k = 3..0, loop:
1. Validate the stacks (FUN_1001b4ac); u = stacks[k]. If u == −1, or the stack (FUN_1001ee88 front/type, MP ≥ 0) is empty, go to the next k.
2. Flood 15, then r = FUN_1001c6fc(f, list, targetPlayer, 15).
3. Then:
   - r = 0: scan the list from index 7 down to the first entry. If that unit's order type is 1, FUN_1001c2dc(f, list, its target) (keep going for the ordered city). Then next k.
   - r = 1 or 3: next k.
   - r = 2 (field attack done, no city): **repeat the same k**.
4. Return 1 after k = 0.

Remake AIFrontMoveStacks (27951-27966) returns after the first stack (the comment says "the original stops after the first stack"). It has no r = 0 continuation and no r = 2 repeat.

Fix: port the loop as above.

**B3. FUN_1001fcc0's tail (front minMoves and feeder-class flags) is missing.**

The tail is a switch on the front index, lost in Ghidra; disassembled at 0x100204b4-0x10020604, jump table 0x1002062c. For each active front f, scanning from frontCount−1 down: minMoves = 8, then:
- f = 0: minMoves = (slotsC > 7) ? 12 : 8. `slotsC` counts, over all class-C candidate cities, the slots with (class 1 or str ≥ minSlotStr) and moves ≥ 12 (r29, 0x10020374).
- f = 1: flags &= ~0x10; if clsC > 3: flags |= 0x10 and minMoves = 12.
- f = 2: flags &= ~0x08; if clsB > 3: flags |= 0x08 and minMoves = 16.
- f = 3: flags &= ~0x20; if clsA > 3: flags |= 0x20 and minMoves = 12.

Remake AIClassifyCities (27597) only sets minMoves = 8. Without these flags:
- feeder selection (FUN_1000f7bc, class bits) never has a class;
- the role-7 garrison threshold in FUN_1000ffe0 never uses 12 or 16;
- FUN_1001bdc8 always uses 8.

Note: the spec in ai_port_spec.md §4.5 ("Every front minMoves = 8") is wrong.

**B4. The computer quest play uses the invented quest record.**

AIHeroQuest, AIHeroPickSites and AIStepHeroes (27074-27120, 27104, 27314-27331) read `sPlayerQuests` / QUEST_CAPTURE. Every original rule depends on the real gs+0x1142 record:
- questCity for types 4 and 5;
- FUN_10015324's "hero == quest hero" test;
- the temple-only-if-no-quest rule;
- FUN_10013a10's `FUN_1004b11c(1)` after a temple;
- FUN_10012a8c's forced raze and quest completion.

Fix: see A1 items 3 and 9. AIAfterBattle (24999) also needs FUN_10012a8c: `AI+0x4a++`, questCity = −1, type 5 → FUN_1001bbf0(c,1) (raze **without** the 3-neighbour check) then QuestCheck(2), else QuestCheck(4).

**B5. Expansion/production use gs+0x11e (quests) where the original reads gs+0x11a (neutral-city strength).**

This is phase-1 code, found while checking quest uses.

Original:
- FUN_10013150:9779: winEst only if `gs+0x11a`.
- FUN_10018800:12722/12736: same.
- FUN_10018b14:12827: stack size `gs+0x11a ? 8 : 1`.
- 68k CODE_098 role 3: `gs+0x11a ? 2 : 1`.

Remake uses AIQuests() (`gs+0x11e`) at 25117, 25683, 25716 and 26217.

Fix: a new `AINeutralsStrong()` = `*(short*)(AI_GS+0x11a) != 0`.

### MED

**B6. AIRuinValid adds +12 range for temples; the original adds it for hidden sites.**
- Original FUN_10015030 (PPC_0001.c:10737): range = 2·max(turn,1) + 10, or **+22 when site+0x1c (hidden) ≠ 0**. Passive (Knight): 2·turn.
- Remake (26704-26716) adds it for temples.
- Fix: `SITE_HARD(site) ? +22 : +10`.

**B7. The computer sage is not the original's.**
- Original FUN_100126a4 (PPC_0001.c:9378), with FUN_1001241c at 9288:
  1. g = Dice(3,500,500), rolled first.
  2. "Items" (FUN_1001241c): the nearest hidden, unknown, unsearched site within 35 whose content is a flight item (d < 11, score d+10), a double-move item (d < 16, score d+10) or allies (score d) becomes known (+ reveal). Then no gold.
  3. Otherwise, with hidden map: the unexplored neutral city next to one of mine with > 3 unexplored neutral cities within 20 (ties by nearest own city). The area at its x/y offset by Dice(1,11,−6) each is revealed (FUN_10054af4).
  4. Otherwise gold += g, capped at 30000.
- Remake AISearchSite (26738): `gold += Random() % 500`.
- Fix: port FUN_100126a4 / FUN_1001241c (needs A2).

**B8. Kind-5 (allies) ruins: the allies are not released.**
- Original:
  - FUN_10013a10 (hidden map): own units on the site with order type 0 and ally flag (stat 13) get flag 0x20 and FUN_1001a348 (free roam).
  - FUN_10019a40 (roam search): the same units get flag 0x20 (released) without roaming.
- Remake: AISearchSite and AIRoamRuin do neither.

**B9. Front capital check (target-player pick) compares a count with a player index.**
- Original FUN_1000df58 (end): when my capital's holder h ≠ me and ≠ 0xF, the override is skipped if `frontTgt[f] == h` for some f in [0, frontCount). `frontTgt` is the per-player count of fronts targeting that player (asStack_c8), indexed by f. This is an original bug.
- Remake AIPickTargetPlayer (26559-26563) tests `fronts[f].targetPlayer == holder`.
- For exact behaviour use `frontTgt[f] == holder`.
- FUN_1001cd68's own capital check is correct as written (it tests active fronts' targets); the remake matches it.

**B10. FUN_1000ec04's "no target" fallback reads turnsOwned[99].**
- Original: after the 6-pick loop the index variable is −1, so `cflags[−1]` reads AI+0x11d, which is turnsOwned[99] (0 on maps with < 100 cities). The fallback `targets = [seed], dist 100` therefore applies whenever nothing was found.
- Remake AIGraphTargets (27486) requires the seed to be explored.
- Fix: test `turnsOwned[99] & 1` (in practice always take the fallback).

**B11. Field attack (FUN_1001b584): unreached tiles count as cost 1.**
- Original: `abs(flood[x][y]) ≤ stackMinMoves − 1`, with FUN_10003768 = abs. Unvisited tiles are −1 → 1.
- Remake AIFieldAttack (27911): skips `cost < 0`.
- The original also starts from the list's first unit, where the remake uses AIStackLead. The same applies to the initial re-target in FUN_1001c2dc.

**B12. Hero item hand-over differs (FUN_10016df0 / FUN_10016cc4).**

Disassembled at 0x10016df0-0x10017138, jump table 0x1001714c. Counters per hero:
- types 1, 2, 8 → "battle" count;
- 5, 6 and 7 each have their own count;
- every item → total.

Phases:
- 6, then 5, then 7: a hero with ≥ 2 of that type gives its first such item to a hero with 0. Repeat until stable.
- Spread phase: for i with battleCount ≠ 0, j = the hero with the smallest battleCount < count[i]. Move i's first type 1/2/8 item. There is **no "difference ≥ 2" rule**, and the receiver's list is not extended (items move only from their original holder). Repeat until no move.

Remake AIHeroHandover (27247-27305) requires a difference ≥ 2, extends the receiver, and caps at 4 slots.

**B13. Pillage/sack don't reset the city defence.**
- Original: FUN_100465a8 and FUN_10046edc end with `city+0x14 = FUN_10048c90(city)`.
- Remake AIPillage and AISack (27709-27740), like the human ApplyVictoryChoice (15117), only clear the slots.
- AIRaze (27743) also hand-codes the raze instead of calling the human path (FUN_1004f438). Keep one raze routine.

### LOW

- **B14.** AIStepDiplomacy records history events (26660-26665). The original logs war and peace (events 9/10) in the convergence FUN_10027150 (PPC_0001.c:19662-19760) when the effective state changes. The remake convergence (28803-28850) logs nothing. Move the events there.
- **B15.** City-owner counts use the owner byte without the terrain test in FUN_10011804, FUN_1000df58, FUN_1000e938, FUN_1001fcc0, FUN_1001bdc8 and FUN_1000f410. The remake adds AIIsCity. This is equivalent only if a razed city's owner is always 0xF, which AIRaze/ApplyVictoryChoice do set.
- **B16.** AIHeroPickSites (27093): in the original, a temple chosen as the quest temple skips the blessed test and falls through to the ruin candidate (FUN_100159c8, LAB_10015bec). The remake still applies `AIRecBlessedAt` → continue.
- **B17.** AIRecBlessedAt tests only hero slots. The original tests the roaming unit's own blessing bits (FUN_10019a40 `unit+0xc & FUN_10015980(site)`).
- **B18.** The roam-frontier passability (FUN_10019174, 0x100194a8) is `cost[t] != 0` from the static table at data 0xafe8 {1,1,1,2,4,6,0,2,5,2,1,2}, so only mountains (6) are excluded. The remake (26805) uses `(sPathFlagGrid & 7) != 0`. Use `t != 6 || flying`.
- **B19.** The invalid-ruin order clear (FUN_100164e4) clears every own unit on the hero's tile with the same order **type**, whatever its front. The remake's AIStackAt(…, front, 3, …) only clears the same front.

### Diplomacy layout (the open question from phase 1) — resolved

- Original: a 16-bit relation at `gs+0x1582 + a*0x10 + b*2`, read as a long. `>>28&3` is bits 12-13 = **proposed by a toward b**; `>>26&3` is bits 10-11 = **effective (shown)**. Values: 0 peace, 1 hostile, 2 war.
- FUN_10027150 converges the effective state symmetrically:
  - escalation: both sides get my proposal, and the other side's proposal is raised to its effective state;
  - de-escalation: only if the other side's proposal ≤ mine.
- Remake: byte `gs+0x1582 + a*8 + b`, with bits 2-3 = proposed and bits 0-1 = effective. It has the same convergence (28803-28850).
- So AIAtWar's `& 3` corresponds exactly to the original's `>>0x1a & 3` of (me, p), and AIProposed to `>>0x1c & 3`. **No bug.**
- The layouts differ, but nothing in the remake reads the original's offsets.

### RNG call order (computer turn)

Where the remake's dice sequence departs from the original:
- **Hero offer.** A13: the remake rolls the chance before the cost.
- **Hero step.** B1: the second iteration's Dice(1,20,20)×2 + Dice(1,20,0)×2 and its win estimates are missing.
- **Fronts.** B2: the other stacks' win estimates and moves are missing.
- **Quest generation and checks.** A1: missing entirely.
- **Sage.** B7.
- **Ruin search.** The +3 XP has no RNG, so A8 doesn't affect the RNG.
- **Item placement retries.** A4.
- **Verified in order:**
  - FUN_1000df58's Dice(1,10,0) ×8 first;
  - FUN_1000e938's tie coin;
  - FUN_1000f064's three Dice(1,1000,0) (each only when its percentage ≠ 0);
  - FUN_10019174's Dice(1,4,−1), then per-tile Dice(1,10,0) after the distances;
  - FUN_10019f14's per-candidate Dice(1,10,0);
  - FUN_100161fc's 4 dice (all four always rolled when the city/item branch is open);
  - FUN_1001cb24's winEst then Dice(1,4,0) per target;
  - FUN_1001b8e0 / FUN_1001ba60's always-rolled coin;
  - FUN_1001bbf0's Dice(1,15,0).

### Verified matching (read against the PPC, line by line)

- **Diplomacy.**
  - FUN_10011590 (orphan claim, Euclid < 40, from the last city).
  - FUN_10011734.
  - FUN_10011804: the peace/war flags, the taken counts and the two proposal rules (`k+4/k+8`, aggression `wins + 4*cityWins + 2*heroes` with `k+5/k+10`), the target and front wars, dominance (the threshold is AI+0x44 when p is human and 50 when p is a computer, as in the remake), the allyHumans block, the 0x116 block, the unexplored clear, and the front reset.
  - FUN_1000df58: all 11 score terms, the bias by level, the zeroing rules and the explored check (apart from B9).
- **Release and roaming.**
  - FUN_10013774 (the release rules and counters).
  - FUN_1001a348, FUN_1001a12c, FUN_10019e00, FUN_10019f14, FUN_10019174 (apart from B18), FUN_10018f00, FUN_10019080.
  - FUN_10019718 (thresholds 75/50/75/40).
  - FUN_10019a40 (apart from B8 and B17).
  - FUN_10016bc0.
- **Expeditions.**
  - FUN_10014214.
  - FUN_10013d0c: the order copy, ruin scores 215−d / 90−d, city scores 115−d / 40−d with role-7 −80, and the < 3 city rule.
  - FUN_10013a10 (apart from the quest, B8 and A8).
- **Hero step.**
  - FUN_10014e44.
  - FUN_100151e8.
  - FUN_10015030 (apart from B6).
  - FUN_100159c8 (apart from B16).
  - FUN_10015c48, FUN_10015dc8.
  - FUN_10015f98: the 20-tile running bound and +20 for the current target.
  - FUN_100161fc.
  - FUN_10015554: the flyer/alone/3-unit rules and the return value.
  - FUN_10016344.
- **Fronts.**
  - FUN_1000f410.
  - FUN_1000ed34: both role tables {5,8,6,4,14}, confirmed from data 0xace8/0xacf8.
  - FUN_1000e938, FUN_1000ea7c (the non-propagating relaxation).
  - FUN_1000f064 (offsets +0x2e/0x30/0x32/0x34/0x36).
  - FUN_1000f258, FUN_1000f308.
  - FUN_1000de24 / FUN_1001ae14 / FUN_1001aea0.
  - FUN_1001af38, FUN_1001b198, FUN_1001b35c, FUN_1001b4ac.
  - FUN_1001c2dc: my own capital → stop; flag 2 → FUN_1001ba60 (the sack value); flag 4 → FUN_1001b8e0 (the pillage value); raze chain.
  - FUN_1001bbf0 (3 own neighbours < 45, value < 900, razing on).
  - FUN_1001b8e0 / FUN_1001ba60: the Warlord rule, 300/900, notoriety Dice(1,5) / Dice(1,10)+5 / Dice(1,15)+10.
  - FUN_1001bfa0: pressure 10/20/30/50, visited list, role 7 for the captured city.
  - FUN_1001bdc8.
  - FUN_1001c6fc (field attack first, then the city).
  - FUN_1001ca30.
  - FUN_1001cb24.
  - FUN_1001cd68.
  - FUN_1001d014.
  - FUN_1001fcc0's body: minSlotStr = min(top-8 min, 4) (the spec's "max" is wrong; the remake is right), the A/B/C rules and budgets, apart from the per-slot stats (A1-4) and B3.
- **Raids.** FUN_10013040 and FUN_10012cc8: role-7 needs ≥ 12, the +1 x offset, 65/85, the abort rule, min turns with a tie on the higher estimate.
