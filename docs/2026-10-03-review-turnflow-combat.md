# Turn flow, economy and combat review (Oct 3, 2026)

Scope: (A) turn flow and economy, (B) the combat engine, in src/main.c at HEAD 3b60499, against PPC 1.0.7. Original = tools/ppc_decompiled/PPC_000N.c. Where Ghidra lost constants or switch tables, they were read from tools/ppc_verification/warlords2_ppc.pef: the data section was unpacked (pidata), and TOC = data+0x26c8 (from the main transition vector). Imports were resolved from the loader relocations. Line numbers are from HEAD 3b60499.

Summary: 29 findings, 14 of them HIGH.
- X-1: the dice mapping, everywhere.
- Combat: 15 findings, 6 HIGH (B-0..B-5).
- Turn flow: 13 findings, 7 HIGH (A-1..A-7).

The biggest are:
- X-1, the dice formula;
- B-0, a hero killed alone loses its items;
- B-1, embarked units get value 4 on land targets;
- A-1, per-unit upkeep (design included);
- A-2, computer stacks never fortify;
- A-3, vectoring has no 2-turn transit.

Severity: **HIGH** = changes gameplay numbers in normal play. **MED** = changes numbers in rarer cases or in RNG order. **LOW** = edge case or cosmetic.

---

## X. Cross-cutting: the dice

**X-1 (HIGH). Every random roll maps Random() differently from the original.**
- Original: FUN_1005f230(n, sides, add) at PPC_0002.c:18410 (disassembly 0x1005f230). Each die calls Toolbox `Random()`; FUN_10002970 is the glue for the import `Random`, resolved from the PEF loader. It computes
  `die = (int)trunc( fabs((double)r) / 32767.0 * (double)sides + 1.0 )`
  using fmadd. The three doubles at data+0xc578 are 32767.0, 1.0 and the int-to-double magic. The dice are summed and clamped to [add+n, add+n*sides]. `sides == 0` returns `add` and makes no Random() call.
- Remake: RollDie (main.c:895) is `(unsigned short)Random() % sides + 1`. About 115 call sites use `(unsigned short)Random() % N` directly, including combat (14290), the treachery dice (15827), medals (15215), the advisor lines, AIRnd (23863) and production jitter.
- Effect: the remake also runs on the Toolbox Random(), so with the same randSeed it sees the same raw sequence, but it turns each value into a different die. |r| folds negative values onto positive ones, which gives 0 half weight and makes the top face (|r| = 32767 → sides+1, clamped to sides) rare. So the distributions differ slightly, and no roll can match the original's roll for roll.
- Fix: one helper, used everywhere the original calls FUN_1005f230:
  ```c
  /* PPC FUN_1005f230: n dice of `sides`, plus add, clamped to [add+n, add+n*sides] */
  static short Dice(short n, short sides, short add)
  {
      short s = 0, i;
      if (sides == 0) return add;
      for (i = 0; i < n; i++) {
          short r = Random();
          double f = fabs((double)r) / 32767.0;
          s += (short)(long)(f * (double)sides + 1.0);   /* fmadd + fctiwz */
      }
      s += add;
      if (s < add + n) s = add + n;
      else if (s > n * sides + add) s = n * sides + add;
      return s;
  }
  ```
  Then `RollDie(s)` becomes `Dice(1,s,0)`, and every `Random() % N` that ports a `FUN_1005f230(1,N,-1)` becomes `Dice(1,N,-1)`.
  - Rounding: Retro68 GCC may not fuse `f*sides+1.0` into fmadd. The result can differ only when |r|*sides/32767 is within 1 ulp of an integer. For sides 20 and 24 that happens only at r = ±32767, and the clamp absorbs it. For any other `sides`, use `__builtin_fma(f, sides, 1.0)` to match exactly.
  - Call sites that use Toolbox `Random()` directly (if the original has any) must stay raw. Grep the decompile for FUN_10002970 callers before converting.

---

## B. Combat engine

Chain: FUN_1002da54 (click) → FUN_1002d93c (PPC_0001.c:22995) → FUN_100ac0cc (values, PPC_0004.c:12103) → FUN_1002d654 (rounds, PPC_0001.c:22767) → FUN_1000dc4c (AI memory) → … → FUN_1002e7d4 (aftermath, PPC_0001.c:23247), FUN_1002dd8c (statistics), FUN_1002f194 (medal), FUN_1003357c (XP).

### HIGH

**B-0. A hero who dies alone in its record keeps its items, its hero record and its name slot.**
- Original FUN_1002e7d4 (23297-23327): every dead hero, attacker or defender, gets FUN_1002e5c0, which drops or sinks its items, clears gs+0x544, and logs the history event. It is then removed (FUN_100214e8).
- Remake BattleApply (14353-14409):
  - Dead slots are cleared to 0xFF first.
  - The fallen-hero pass then skips records with `live == 0` (14378).
  - RemoveArmy (13884-13918) only drops items and clears the hero record when it still finds type 0x1C in a slot, and by then every slot is 0xFF.
- Effect: a hero killed while alone in its record (the usual case) never drops its items. The items stay "carried" and their carrier index now points at whichever record shifted into that index, so they vanish from the world. heroRec[0] (gs+0x1422+p*0x2C) stays set, the gs+0x544 name slot is never freed, and no HERO_KILL event is logged.
- Fix: in BattleApply, call BattleHeroFell(u->rec) for every dead hero **before** clearing its slot, whether or not the record survives. Also pass the battle tile (see B-10). Keep RemoveArmy's own path for non-battle removals.

**B-1. An embarked unit gets value 4 even when the battle tile is land.**
- Original: FUN_100ac0cc (PPC_0004.c:12838-12850, attackers; 12880-12890, defenders) gives value 4 only when the unit has status 0x1000 **and** the battle tile's terrain (gs+0x711[map>>24] at the target (param_1, param_2)) is 2 (water) or 3 (shore). An embarked stack attacking a coastal city or a land stack fights at full value.
- Remake: BattleAddRecord (main.c:14094) sets `embarked` from the record bit alone, and BattleValues (14262) uses it unconditionally.
- Fix: in BattleValues, `if (u->embarked && (b->terr == 2 || b->terr == 3)) { u->value = 4; continue; }`. BattleOrderSide's flyer test (14156) correctly uses the bit alone (the original's 0x1000 test there has no terrain clause), so leave it.
- Also: the original never excludes naval unit types from the 0x1000 test. Check whether the remake ever sets ARMY_EMBARKED_BIT on a naval-type record. If it can, drop the `!UnitTypeNaval(t)` clause in BattleAddRecord.

**B-2. Each round's two dice are swapped.**
- Original FUN_1002d654 (22795-22808): the first FUN_1005f230 roll is the **defender's** die (`defValue < roll1` → the defender fails). The second is the attacker's. The emergency values are roll1 = 0 and roll2 = 100.
- Remake BattleRounds (14290-14296): `ra` (first) is tested against the attacker and `rd` (second) against the defender.
- Effect: the distribution is the same, but given the same Random() stream the outcome of each round differs. Fix this together with X-1.
- Fix:
  ```c
  short rd = Dice(1, N, 0);   /* defender's die first */
  short ra = Dice(1, N, 0);
  if (cnt > 10000) { rd = 0; ra = 100; }
  ```
  Keep `defFail = dv < rd; attFail = av < ra;`.

**B-3. Defending heroes' experience follows the original's index bug.**
- Original FUN_1002e7d4 (23313-23327): a surviving defender i gets FUN_1003357c(unit, 1) when `attackerType[i] == 0x1C`. That is the attacker type array at 0x40850028, not the defender array at DAT_38800000. So a defending hero gains 1 XP only if the attacker in the same sorted position is a hero. A defending non-hero is skipped inside FUN_1003357c (type check).
  - For i ≥ nAtt, the array holds stale values from earlier battles. It is a static 8-byte array, and indices of 8 or more read the neighbouring global.
- Remake BattleApply (14365-14369): every surviving defending hero gets +1.
- Fix: keep `static unsigned char sBattleAttType[8]`. Fill it in BattleValues after sorting (`sBattleAttType[i] = att[i].type`, i < nAtt; leave the rest as they were). In BattleApply, a surviving defender hero at sorted index i gains 1 only if `i < 8 && sBattleAttType[i] == 0x1C`. For i ≥ 8, give nothing; that is the closest safe reading.

**B-4. Medal rules differ in four ways.**
- Original: FUN_1002f194 (PPC_0001.c:23497-23593).
- Remake: AwardMedal (main.c:15191-15228).
- (a) The candidates are the **surviving attackers** (list DAT_409e0034, rebuilt by FUN_1002e7d4) that are not heroes and have flag[4] == 0 (stat13). The remake takes every own non-hero unit on the tile.
- (b) "Worthy battle": `(nAtt ≥ 2 && nDef ≥ 2)` with the counts at battle start, **or** `(turn < 20 && nDef > 0 && the first sorted defender's battle VALUE > 3)` (DAT_7ffaf810[0] > '\x03'). The remake uses `GetUnitTypeStat(firstDefType,0) >= 4`, the base strength of the first defender to die.
- (c) No medal if any attacker is embarked (status 0x1000). The remake has no such test.
- (d) The threshold counts own non-hero units with flag[4] == 0 and medals > 0. The remake doesn't apply the flag[4] filter.
- Also: the original requires `_DAT_57e31838 != 0` (a hero leads the attack) and that the attacker won. The remake checks for "hero present on tile", which is close enough once (a) is fixed.
- Fix:
  - Pass the Battle to AwardMedal and build the candidates from the surviving `b->att[]` with `type != 0x1C && !UnitTypeFlag4(type)`.
  - Worthy = `(b->nAtt >= 2 && b->nDef >= 2) || (turn < 20 && b->nDef > 0 && b->def[0].value > 3)`, using the values from before the rounds.
  - Return if any `b->att[i].embarked`.
  - Use Dice for both rolls: `Dice(1,100,0) < thr`, then `pick = Dice(1,nc,-1)`.

**B-5. Missing: units in transit to the captured city die, and the tower bit clears.**
- Original FUN_1002e7d4:
  - 23377-23381: when the attacker wins and the first tile has the tower bit (map bit 21), the bit is cleared.
  - 23458-23468: on a city capture, every unit of the old owner with x == −1 (in vectoring transit), (status>>12 & 0xf) == 1 and (status & 0x7f) == the captured city is destroyed (FUN_100214e8).
  - 23470-23483: every city whose vector flag (+0x32) is set and whose vector target (+0x34/+0x36) is the captured city has its vectoring cleared. The remake does this part (CaptureCityAt 14708-14724, ext +0x3e).
- Remake: CheckAndResolveCombat / CaptureCityAt don't clear the tower bit and don't kill units in transit.
- Fix:
  - After `won`, if the target tile (or the city anchor) has `md[+1] & 0x20`, clear it.
  - In CaptureCityAt, remove the old owner's in-transit units whose transit destination is `ci` (see A-5 for the remake's transit representation).

### MED

**B-6. The protected tutorial hero can die after 20000 rolls.**
- Original FUN_1002d654: when the tutorial spares a human hero against neutrals, nothing ever forces the hero's death. After 10000 rolls the forced roll gives no result. The short counter then wraps to −32768, and random rolls resume until the defender falls.
- Remake (14303): `|| cnt > 20000` kills the hero.
- Fix: drop `|| cnt > 20000`. Let `cnt` wrap: `cnt = (short)(cnt + 1)` as a 16-bit value, or use `if (cnt == 32767) cnt = -32768; else cnt++;`. This also keeps the RNG call count identical.

**B-7. Empty sides.**
- Original FUN_1002d654 (22785-22788): if either side is empty, it returns **true** (the attacker wins).
- Remake (14287): returns `b->nDef == 0`, so with no attackers and some defenders it returns false.
- Fix: `return true;`. This is reached only by the advisor/AI sims and by empty-city captures.

**B-8. The scenario bonus cap has an invented fallback.**
- Original: caps both side bonuses at gs+0x112 with no fallback (PPC_0004.c:12788, 12801).
- Remake (14178): `if (maxBonus < 1) maxBonus = 15;`.
- Fix: delete it. Make sure gs+0x112 is loaded from the scenario/options (it is the per-game "max bonus" value), so it is never 0 by accident.

**B-9. The defenders' fight-order table comes from the map tile.**
- Original (12233-12238): the defenders' fight-order table is the **map owner nibble** of the battle tile (`(map>>16)&0xf`, 8 when ≥ 8). Neutral halving uses the same nibble (`DAT_41820040 == 0xf`).
- Remake: uses `b->defOwner`, the owner of the first enemy record found.
- These agree unless the tile's nibble is stale, or allied units of two players share the tile. Low risk.
- Fix: read the nibble in BattleGather (`(md[y*0xE0+x*2+1]) & 0x0F`) and use it for both defTable and the `== 0x0F` halving.

**B-10. A hero's death drops its items at the wrong tile.**
- Original FUN_1002e5c0(unit, x, y) (23206-23243) is called with the **battle** tile. The items go to (x, y), or are lost if that tile's terrain is 2 (water). It also:
  - clears gs+0x544+heroSlot*2;
  - logs history event 1 (hero killed) with the city index (FUN_1002be50) and the hero's name;
  - if the hero belonged to the current player, clears +0x32/+0x34/+0x36 on **every own city record** returned by FUN_10047de8(-2,…), which looks like the "hero's vectoring" list.
- Remake: DropHeroItems (13820) uses the hero record's own tile. An attacker's hero that dies attacking a water stack from land drops its items on land instead of losing them, and vice versa.
- Fix: give DropHeroItems the battle tile `(b->mx, b->my)` from BattleHeroFell. Add the gs+0x544 clear (RemoveArmy has one; BattleHeroFell does not) and the vectoring clear.

**B-11. The "great battle" history event is missing.**
- Original FUN_1002e7d4 (23264-23276): when the attacker wins at a city with nAtt+nDef > 7 and nDef > 3, it logs event 5.
- Remake: no equivalent. This changes the history/score screens, not the gameplay numbers.

**B-12. City "attacked-by" mask.**
- Original FUN_1002d93c (22991-22995): before the rounds, it ORs the attacker's bit (table at TOC, per player) into city+0x30.
- Remake: not found. Check whether the AI or the reports read city+0x30. If they do, add the bit to the remake's city/ext record.

### LOW

**B-13. Medal on a strength-15 unit.**
- Original: if strength > 14, movement (+6) +1; else strength +1 capped at 9 (FUN_10021200, PPC_0001.c). A unit with strength 10-14 is cut **down** to 9.
- Remake: `newStr = min(str+1, 9)`.
- This matters only for army sets with strength > 9. Port it exactly.

**B-14. Several heroes in one record.** GetHeroItemBonus sums every item on the record. The original sums the items carried by that unit (FUN_1003aeb0(2,…, unit)). These are equal while a record holds one hero.

### Verified matching

- Terrain class FUN_100abd8c: jump table read from the PEF at 0x100abe70. Tower → 0; 4 → 2; 5, 6 → 3; 7, 8, 9 → 1; 10, 11 → 0; anything else → 1.
- Leadership table at data+0xb198 (TOC−0x1270): {0,0,0,0,1,1,1,2,2,3}. Matches kLead.
- Hero strength for leadership: str + battle items (type 1), cap 9, max over the side's heroes. Command: sum of type-2 values + 1 per type-8 item (FUN_100abe94 / FUN_100abf8c).
- Specials stat15: 1 cancels the enemy's site bonus and the +1 open bonus; 2 cancels the enemy's leadership; 3 cancels the enemy's terrain stack bonus; 4 gives the attacker +1 unless the defender has special 1, and gives a defender site 1 in the open.
- Stack terrain bonus: max of stat9+cls, non-zero only. Penalty: min of stat14. Per-unit terrain bonus: stat5+cls. Value cap: 15, from above only. Values below 1 count as 1 in the rounds.
- The bonus formula, cap order and penalty addition (12780-12804). The site bonus (tower 1 / ruin 2 / city defence) and the neutral halving with rounding toward zero.
- Fight order from gs+0x60C + table*0x1D + type. The +80 for the first non-embarked flyer when the side has a hero and the tile is 2/3/6. A stable insertion sort per side.
- The round loop: HP 1, die below 0, the XOR rule, a fresh `cnt` per duel, the emergency at > 10000 where the attacker takes the hit, the return rule.
- The tutorial hero rule (gs+0x12e, type 0x1C, human, neutral defender), apart from B-6.
- Attacker XP: +2 at a city (terrain 10 at the first tile), else +1. Cap 60 (FUN_1003357c).
- Capture gold: neutral 0; < 2 cities → all gold; else gold/cities; halve toward zero; winner + loot (cap 30000); loser − 2×loot (floor 0).
- The advisor: 19 sims, wins/2 (FUN_10030e0c).
- The intense-combat die: 24 vs 20 from gs+0x126.

---

## A. Turn flow and economy

The original turn start, from PPC_0002.c:
- **Next player** (FUN_100410ec, 4917): FUN_10044110(p,1), …, then the computer path FUN_100651cc or the human path FUN_10065b2c.
- **Computer path** (FUN_100651cc, 21231-21323), in this order:
  1. hero offer (FUN_10032a24 / FUN_10033548);
  2. hero level-ups (FUN_10033b4c);
  3. income (FUN_10064e84);
  4. transit and production (FUN_1004a854);
  5. single-unit groups cleared (FUN_10021e20);
  6. MP reset (FUN_10064f24);
  7. fortify (FUN_100557b8);
  8. status 0x40/0x200 cleared (FUN_100558f8);
  9. the AI (FUN_1000c648).
- **Human path** (21555-21580): groups (FUN_10021e20) → MP reset (FUN_10064f24) → fortify (FUN_100557b8) → income (FUN_10064e84) → status clear (FUN_100558f8). Later, in the turn's state machine (21640-21676): level-ups (FUN_10033b4c), then production (FUN_1004a854) **plus** the countdown restart FUN_1004af7c.
- **Round boundary** (FUN_1003d4dc, 2895-2925): turn++, the turn order (FUN_1003c838), elimination (FUN_1003cb84), end-game flags (FUN_1003d094), neutral production (FUN_1002ce38), history (FUN_10038890).
- Remake: ProcessStartOfTurn (main.c:28733) runs one order for everyone. Hero level-up → income → production (timer always restarted) → cleanup → MP reset (skipping new records) → hero-item MP → fortify (human only) → fog.

### HIGH

**A-1. Upkeep must be per unit, set when the unit is built.**
- Original:
  - FUN_1004a5f0 (PPC_0002.c:9884-9885) stores `unit+0xB = (signed char)slotCost / 2`, rounded toward zero. slotCost is the city's slot cost byte (city+0x26+slot), jittered at new game by FUN_1003b9f8.
  - Every other kind of unit is created with +0xB = 0: heroes (FUN_10033280, PPC_0001.c:25511), allies (FUN_10053838, PPC_0002.c:12760) and neutrals (FUN_1002cbbc).
  - FUN_1002bbd4 (PPC_0001.c:21780-21815) sums +0xB over units with owner < 8 and x, y ≥ 0. Units in vectoring transit pay nothing. An embarked unit (status 0x1000) pays `max(upkeep, 4)`, heroes and allies included.
  - FUN_10064e84 then does `gold = clamp(gold + income − upkeep, 0, 30000)`. Income (FUN_1002bcd8) is the sum of city+0x2a over owned city records, plus cities × the gold-item total of type-7 items on all the player's heroes (FUN_10039c58).
- Remake (28972-29000; and AIUpkeepLive 23936): `GetUnitTypeStat(type,2)/2` for every non-hero unit. So it charges allies and ignores the slot jitter, the embarked minimum of 4, and the transit exemption.
- **Where to store it: a[0x22+k].**
  - The original 0x16-byte unit (+0 x, +2 y, +4 type, +5 owner, +6/+7 moves, +8 strength, +9 origin city, +0xA medals/hero slot, +0xB upkeep, +0xC status, +0x10 transit, +0x11 group, +0x12/+0x14 destination) has **no per-unit bonus field**.
  - The remake's "bonus" byte a[0x22+k] is never read by the battle engine (BattleValues uses str + side bonus + stat5+cls), the AI or the economy. Its only readers are ShowArmyInspect's "Bonus: +n" line (11963) and the fabricated GameInit army jitter (3103-3112). Its only non-zero writer is ShowHeroHire (22030, heroCommand), which no code reads back.
  - It already travels with its unit through every slot move: BattleApply compaction (14384), SplitUnitsOff (23653), AI unit packing `b22` (24559/24614/24638/24732), and the stack dialog merges, splits and swaps (31698-32063).
  - The record has no other 4 free per-unit bytes (0x38/0x39 hold the medal nibbles, 0x3A-0x41 the items, 0x2A/0x2B the strength sum). It also can't grow, because 100×0x42 records end exactly at gs+0x2FCC.
  - A parallel array in the ext block would need the same plumbing in about 10 places. So a[0x22] is the right home. The upkeep is a signed char, as in the original.
- Exact code:
  ```c
  #define A_UPKEEP 0x22   /* per-unit upkeep, signed char (PPC unit +0xB) */

  /* PPC FUN_1004a5f0: the slot's cost / 2, toward zero, as a signed char */
  static unsigned char SlotUpkeep(short ci, short t)
  {
      short k = CitySlotOf(ci, t);
      signed char c;
      if (k >= 0 && *gExtState != 0)
          c = (signed char)((unsigned char *)*gExtState)[0x24c + ci * 0x5c + 0x4C + k];
      else
          c = (signed char)UnitStatLE(t, 2);
      return (unsigned char)(signed char)(c / 2);
  }

  /* PPC FUN_1002bbd4: a player's upkeep */
  static short PlayerUpkeep(short p)
  {
      unsigned char *gs = (unsigned char *)*gGameState;
      short n = *(short *)(gs + 0x1602), i, k, sum = 0;
      if (n > 100) n = 100;
      for (i = 0; i < n; i++) {
          unsigned char *a = gs + 0x1604 + i * 0x42;
          if ((short)(unsigned char)a[0x15] != p) continue;
          if (*(short *)(a + 0) < 0 || *(short *)(a + 2) < 0) continue;   /* in transit (A-3) */
          for (k = 0; k < 4; k++) {
              short u;
              if (a[0x16 + k] == 0xFF) continue;
              u = (signed char)a[A_UPKEEP + k];
              if ((a[0x2C] & ARMY_EMBARKED_BIT) && u < 4) u = 4;
              sum += u;
          }
      }
      return sum;
  }
  ```
- Where it is written:
  - Production, both the merge path (29155) and the new-record path (29250): `a[A_UPKEEP + slot] = SlotUpkeep(i, prodType);`.
  - SpawnCityUnits for starting garrisons of player cities (FUN_1002cbbc → FUN_1002cae8 → FUN_1004a5f0): set `SlotUpkeep(ci, type)` when the owner is < 8.
  - 0 for heroes (22030: write 0, not heroCommand), allies (AddAlliesToStack 19237, already 0) and neutrals (2892, 28682, already 0).
- Where it is read:
  - Replace the type-cost loop in ProcessStartOfTurn (28972-29000) with `totalUpkeep = PlayerUpkeep(player);`.
  - Make AIUpkeepLive (23936) return `PlayerUpkeep(sAIMe)`.
  - AIIncomeLive (23930) also lacks FUN_1002bcd8's gold-item term (cities × the sum of type-7 item values). Add it: the AI's "poor" test (AIPoor) compares exactly these two numbers.
  - Use the same function in ShowIncomeSummary.
- Remove:
  - the defence-bonus jitter in GameInit (3103-3112). The whole per-army jitter block 3056-3120 is not in the original: FUN_1003b9f8 only touches city slots, which JitterCitySlotStats already does. Its RNG calls also shift every later roll.
  - the "Bonus:" line in ShowArmyInspect (11963-11970).
- Saves: bump SAVE_VERSION to 9 ("v9: a[0x22+k] is the unit's upkeep"). In LoadGameFromFile after the game state is read, convert `version < 9` saves:
  ```c
  if (version < 9) {   /* old saves: 0x22 held a display bonus; upkeep = type cost / 2 as those games paid */
      short n = *(short *)(gs + 0x1602), i, k;
      for (i = 0; i < n && i < 100; i++) {
          unsigned char *a = gs + 0x1604 + i * 0x42;
          for (k = 0; k < 4; k++) {
              short t = a[0x16 + k];
              a[A_UPKEEP + k] = (t == 0xFF || t == 0x1C || a[0x15] > 7) ? 0
                              : (unsigned char)(signed char)(GetUnitTypeStat(t, 2) / 2);
          }
      }
  }
  ```
  Old saves can't tell allies from produced units. Charging them the old rate keeps those games' economy unchanged.

**A-2. Fortification (the map "tower" bit 0x20 of byte+1) is set only for humans and with the wrong road test.**
- Original FUN_100557b8 (PPC_0002.c:13520-13558; disassembly 0x100557b8) runs at **every** player's turn start, on the computer path (21313) and the human path (21571), right after the MP reset. For each own unit:
  - not selected (status halfword bit 0 clear; bit 0 is the "selected" bit, FUN_10055ba0 / FUN_1005641c);
  - with `cur ≥ base` moves;
  - on terrain 7, 4, 5, 1, 8 or 9, **or** on a road (`RD byte & 0x1f != 0`, the 112-wide grid at _DAT_807f0004);
  - gets the tile bit set.
- The bit is cleared only when a tile becomes empty (FUN_10021364, PPC_0001.c:17690-17699), when the map is set up (FUN_1003c368), or when an attacker wins there (FUN_1002e7d4).
- Remake (29486-29560):
  - human turns only;
  - tests the road with `(rd >> 5) & 1` (the city-defended bit) instead of `rd & 0x1f`;
  - first clears the bit under every own army;
  - PathMoveStackTo (13377) clears the old tile's bit even when other units stay there.
- Effect: computer stacks never get the tower site bonus (+1, terrain class 0) in battle. Human stacks on roads over hills or forest get it wrongly, or miss it.
- Fix:
  - Run 3c for every player.
  - Use `(rd[y*112+x] & 0x1f) != 0`.
  - Drop the clearing pass.
  - In PathMoveStackTo, clear 0x20 (and 0x10, the occupied bit) only when no unit is left on the old tile.
  - Test "not selected" instead of `a[0x2d]` (the remake has no selected bit on records; at turn start nothing is selected, so the test is just `cur ≥ base`).

**A-3. Vectoring has no 2-turn transit.**
- Original:
  - FUN_1004a854 (PPC_0002.c:9933-10092) + FUN_1004a5f0: a vectored city's unit is created **off the map**: x = −1 (or −2 when vectored to the planted standard, FUN_10034074), status low 7 bits = destination city, +0x10 = 'e' (0x65).
  - Next turn start: 'e' → 'f'. The turn after: 'f' arrives at the destination's first tile with < 8 units (FUN_1004a350). The tile must pass FUN_1004a4f4: own or empty city, and passable or a flyer.
  - If it can't arrive, the unit is sent back to its origin city ('e' again). It is disbanded if the destination already was its origin.
  - When the vector flag is set, a unit goes into transit even when the source city has room.
  - In transit it pays no upkeep, gets no MP reset, can't fight, and dies if its destination city is captured (B-5).
- Remake (29071-29085, 29282-29287): spawns the unit **at once** at the destination.
- Fix:
  - Add a transit state to the record: x = −1/−2, the destination in a byte (for example a[0x10], inside the name region; or the ext guard byte at ext+0x56+i), and the stage 'e'/'f' (for example in a[0x30]).
  - Process transit at turn start before production, exactly as FUN_1004a854 does.
  - Skip x < 0 records everywhere (map drawing, the MP reset, upkeep, battle gathers, AI lists).
  - Also support vector-to-standard (x = −2, item record p's ground position when gs+0xd28+p*0x1e == 1 and map bit 30 is set). FUN_10034130 clears every vector of −2 when the standard is not planted.

**A-4. The computer's production countdown is restarted unconditionally.**
- Original: FUN_1004a5f0 sets countdown city+0x2d = 0. Only the human path restarts it, via FUN_1004af7c (21674-21676). The computer's city restarts only when the AI sets production again (FUN_1001e674, PPC_0001.c:16050-16064). The AI refuses that below slot cost + 30 gold after turn 5, so a poor computer's city goes idle.
- Remake (29321-29325): after any spawn, `timer = CitySlotStat(i, prodType, 1)` for every player. So the computer keeps building when the original would stop.
- Fix: `if (isHuman) timer = CitySlotStat(...); else timer = 0;`. With timer 0 the AI's idle test (FUN_1001e4b0) sees the city as idle and AISetProduction decides.

**A-5. Pillage and sack don't recompute the city's defence.**
- Original: FUN_100465a8 (pillage) and FUN_10046edc (sack) remove the slots and then set city+0x14 = FUN_10048c90 (< 3 filled slots → 1, else 2).
- Remake: ApplyVictoryChoice (main.c:15117-15150), AIPillage (27709) and AISack (27724) leave city+0x06 alone. A scenario city with defence 4 stays at 4 after a sack; in the original it drops to 1. That changes the site bonus in every later battle there.
- Fix: after removing slots, `*(short *)(city + 0x06) = filled < 3 ? 1 : 2;`. AICityDefence(ci) already does this for the AI.

**A-6. Active neutrals produce in every city instead of only cities that were attacked.**
- Original FUN_1002ce38 (PPC_0001.c:22524-22560), at the round boundary when gs+0x11a > 1:
  - only neutral cities whose tile is terrain 10 **and whose attacked-by mask city+0x30 is non-zero** (set in FUN_1002d93c, B-12) count down;
  - at 0 → FUN_1002cae8: one unit, MP 0, then production stops (type 0xff, countdown 0);
  - an idle city with < 4 units on its anchor tile then chooses with **FUN_1001e794(city, 2, −1, 0)**, the AI chooser using the slot stats.
- Remake ProcessNeutralCities (28627-28715):
  - ignores the attacked-by mask and the terrain test;
  - keeps building the same slot;
  - scores with its own formula on the army set's base stats (UnitStatLE), skipping ships;
  - SpawnCityUnits uses base stats, not slot stats.
- Fix: store the attacked-by mask (B-12); gate on it and on terrain 10; after a unit, set prod = −1 and timer = 0; choose with `AIChooseProduction(ci, 2, -1, false)`; give the new unit slot stats with MP 0.

**A-7. A computer's new units miss the +2 MP of the turn they appear.**
- Original computer path: production (FUN_1004a854) runs **before** the MP reset (FUN_10064f24). A new unit (cur = moves) becomes `moves + min(moves, 2)`. On the human path production runs after the reset, so a new unit has `moves`.
- Remake: resets only `i < preProductionArmyCount` (29395), so a computer's new record keeps `moves`.
- Fix: for computer players include the new records in the reset (`limit = isHuman ? preProductionArmyCount : armyCount`). A unit merged into an existing record is not covered, because of the remake's per-record MP. Note that as a model limit.

### MED

**A-8. Hero level-up timing for humans.**
- Original: on the human path, level-ups (FUN_10033b4c, 21649) come **after** the MP reset. The +2 base moves (FUN_10033600: level+1, strength +1 capped at 9 via FUN_10021200, base moves +2) show up only in the next turn's MP. The computer levels up before its reset.
- Remake: section 0d (28880) runs before the MP reset for everyone, so a human hero moves 2 further on its promotion turn.
- Fix: for humans, move 0d after section 3.

**A-9. The round boundary runs in a different order.**
- Original FUN_1003d4dc: turn++ → turn order (FUN_1003c838; 20 swaps of Dice(1,8,−1) pairs when gs+0x122) → elimination (FUN_1003cb84) → end-game flags (FUN_1003d094) → neutral production (FUN_1002ce38) → history (FUN_10038890).
- Remake (29736-29910): turn++ → history → neutral production → shuffle (Random()%8) → elimination.
- The RNG order differs once neutral production consumes rolls (FUN_1001e794).
- Fix: reorder, and use Dice(1,8,−1) (X-1).

**A-10. Victory and dominance are checked every turn instead of at the round boundary.**
- Original FUN_1003d094 (PPC_0002.c:2732-2880), at the round boundary only:
  - Counts the cities on terrain 10 (N) and the alive humans (H) and computers (C).
  - If H == 1, C == 0 and the human holds more than N/2 → gs+0x15c (won).
  - If H == 0 and C == 1 → that side wins (notice 0x10 #0, made human).
  - If H == 1, C > 0 and gs+0x15e == 0: when the human holds more than N/2 and more than maxComputerCities + N/8 → gs+0x15e (the Offer of Peace).
- Remake: CheckVictoryConditions (22118), called each turn (30673), sets 0x15e and the win mid-round, and counts "alive" as having cities rather than the alive flag.
- Fix: move both checks into the round-boundary block after EliminateDeadPlayers, using the alive flags and N = terrain-10 city records.

**A-11. Status clear on computer turns.**
- Original: FUN_100558f8 clears unit status 0x40/0x200 on both paths (21315, 21573).
- Remake (29425): humans only.
- Low impact today: the AI keeps its own AIO_DONE. Make it unconditional anyway, so that anything reading the record bits agrees.

### LOW

**A-12. SpawnCityUnits ignores the slot stats and the tech bonus.**
- Original: starting garrisons and neutral production go through FUN_1004a5f0, so they get the slot moves and strength, +2 strength (cap 9) when gs+0xf0+**current player***2 is set, and the slot upkeep.
- Remake: SpawnCityUnits (1963) uses UnitStat base values.
- Fix: use CitySlotStat and the same +2 rule. Note that the original reads the current player's flag even for neutral units.

**A-13. Income counts cities by site type.**
- Original: sums city+0x2a over every city record owned by the player (gs+0x1602 records; a razed city is neutral).
- Remake: filters `sType 0/1`.
- These are equivalent as long as remake ruins/temples are never "owned". Keep in mind if the record split changes.

### Verified matching

- Income formula and clamp [0, 30000]. The gold-item term = cities × the sum of type-7 item values on all the player's heroes.
- MP reset per unit (FUN_10064f24):
  - carry = cur < 3 ? cur : 2;
  - normal → base + carry; embarked → carry + 20;
  - the destination is cleared when reached;
  - a hero with a type-6 item adds base moves to every own unit on its tile (cap 99); final cap 99.
  - The remake does this per record, which is equivalent while a record shares one MP.
- Production gate: countdown > 0 → −1 → at < 1 produce only if gold > 0, else stall at 0. A stall is permanent until production changes.
- New unit stats from the city slot (moves, strength). The tech +2 strength cap 9 (gs+0xf0).
- Hero level thresholds 15/30/60, one level per turn start, +1 strength (cap 9) and +2 base moves.
- No healing anywhere in the original turn start. The remake has none.
- Buying a slot (FUN_10049fa8):
  - plain army-set stats into the slot (SetCitySlotBase);
  - gold − stat4;
  - defence = < 3 filled ? 1 : 2.
- Pillage value: abs(stat4)/2 of the last slot (FUN_1004645c; FUN_10003768 is the `abs` import). Sack value: Σ abs(stat4)/2 of slots 1..n−1 (FUN_1004639c). Gold cap 30000.
- Notoriety +Dice(1,5) / +Dice(1,10)+5 / +Dice(1,15)+10 (FUN_10046d7c / FUN_1004702c / FUN_10047190). The battle treachery +Dice(1,100)+100 from Peace and +Dice(1,15)+10 from state 1 (FUN_100300e8). The ranges match; the mappings are X-1.
- Elimination at the round boundary for alive sides with 0 cities:
  - units removed, heroes' items dropped (lost on water);
  - gold 0;
  - diplomacy reset;
  - the alive flag cleared;
  - notice from DAT group 0xC.
- Random turn order: 20 swaps, from 0..7 each round.

### Not covered

Fog and hidden-map reveal at turn start (FUN_10044110 and FUN_1000931c belong to the movement review). The hero offer (see hero-offer-spawn-spec). The details of the diplomacy convergence.

---

## Outside scope, noticed

- **GameInit per-army jitter (main.c:3056-3120)** is not in the original. FUN_1003b9f8 jitters city slots only (PPC_0001: it indexes gs+city*0x42), which JitterCitySlotStats already ports. The army pass changes starting units' strength and moves, and consumes Random() calls. Delete it.
- **Starting garrisons** (FUN_1002cbbc, PPC_0001.c:22435-22495):
  - Neutral cities get one type-0x0B strength-1 unit when gs+0x11a == 0.
  - Otherwise they get `mode = min(Dice(1,4, gs+0x11a−2), 3)`, and `gs+0x128 ? Dice(1,4) : 1` units, each chosen by FUN_1001e794(city, table[mode]) and built with FUN_1004a5f0 (slot stats, MP 0).
  - Player cities use mode 3.
  - Worth a setup review against main.c:2825-2900 and 3040-3053.
