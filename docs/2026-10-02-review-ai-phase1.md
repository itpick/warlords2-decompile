# AI phase 1 review (Oct 2, 2026)

Scope: src/main.c 23388-25900 plus ExecuteAITurn, against the PPC 1.0.7 AI code. Original = tools/ppc_decompiled/PPC_0001.c unless noted. Remake = src/main.c at HEAD 6b4b1a5 (line numbers are from that commit). The review was done by a subagent of the Fable review; the rest of that review stopped on the usage limit.

## HIGH

**A1-1. Step 5/10 moves the wrong stack and marks only one record done.**
- Original: FUN_10013484 (9870-9947) takes the next unit from FUN_1005619c and calls FUN_10055c64(unit) (PPC_0002.c:13727). The stack is the own units on the tile whose group id (+0x11) equals the unit's (when it's nonzero), else the unit alone. Every unit in the stack gets flag 0x200 (done). Group ids are allocated by FUN_1001e160 → FUN_10021d50 (15831, 18055) whenever orders go to more than one unit.
- Remake: AIStepExecute (24871-24918) marks only `u` done (24886). It builds the stack with AIStackAt(x,y,front,type) (24891), which ignores target and group. AISetOrders (24241) computes a group id but never stores it (24273).
- Effect: the stack's other records move again later. Two stacks on one tile with different targets are moved together.
- Fix:
  - Add `group` to AIOrder.
  - AISetOrders assigns the first unused id when the stack has more than one record.
  - AIStepExecute builds the stack from same-tile records with the same nonzero group, and marks all of them done.
  - Reset the group when garrisoning.

**A1-2. The capture-and-continue flag (0x80) is dropped on re-targeting.**
- Original: FUN_10013150 (9746-9861) and the redirect in FUN_10017ddc (12440-12447) write only the type and target bits, plus the destination.
- Remake: AIContinueCapture (24846) and AIAttackGate (24721) call AISetOrders, which clears AIO_CONTINUE and AIO_RELEASED (24270).
- Fix: add AIRetarget(s, type, target), which leaves the flags alone.

**A1-3. FUN_10018b14 with no free pool units should return 0.**
- Original: FUN_10018b14 (12800-12990) returns 0 in that case.
- Remake: AIExpandCity (25434) returns the hidden-map flag. AIExpandPass then releases the pool and sets role 2 for every hidden-map city.
- Fix: `return 0`.

**A1-4. Production scoring uses the army set's base stats instead of the city's per-slot stats.**
- Original: FUN_1001e794 (16081-16180), FUN_1001e9d0 (16167), FUN_1001f648 (16677), FUN_1000f7bc (7725) and FUN_1001e674 (16042: cost + 30) read the city's slot stats.
- Remake: AIChooseProduction (25586-25610), AIWeakestSlot (25546), AICityGoodSlot (25612), AIPickFeeders (25820) and AISetProduction (25571) use UnitStatLE.
- Fix: use CitySlotStat(ci, t, k) in all five places.

**A1-5. Step 6/16 re-dispatch disbands whole records and counts the wrong units.**
- Original: FUN_100145c8 (10410-10535):
  - Tests and disbands the single unit.
  - Builds the stack from own units with MP ≥ 8 (n).
  - n == 0 → return; n < 2 and weak → disband that unit.
  - Calls FUN_100143b8(n).
- Remake: AIRedispatch (24941-25001) disbands the whole record with AIDisbandRecord, counts all units, and passes the count taken after the land drop.
- Fix:
  - Disband slot 0 only.
  - n = units with MP ≥ 8; return when 0.
  - Use n for the `< 2` test and for AIPickCityForStack.

**A1-6. Pool release (FUN_1001a470) is simplified.**
- Original (13642-13790):
  - Skips the first R candidates, caps at 8, and sorts by max moves descending. Units with 0 moves never go.
  - Before each unit: if R == 0, the map is hidden, and the nearest enemy unit is under 15 away, return.
  - Then calls FUN_1001a348.
- Remake: AIReleasePool (25468-25486) has none of these rules.
- Fix: implement them, and split the unit out (AISeparateUnits) before AIFreeRoam.

**A1-7. The enemy-city capture follow-up (FUN_10012324) is missing.**
- Original (9255-9284): a computer player that wins a non-neutral city from a human, with warlordRaze (+0x42) set, before turn 10, and not the quest city, razes the city if its sack value is under 200, else pillages it.
- Remake: AIAfterBattle (24726) sets role 1 for every capture and never razes or pillages.
- Fix: port FUN_10012324 into AIAfterBattle, using AIRaze or AIPillage.

## MED

**A1-8. AIIsCity ignores the terrain test, so razed cities stay cities.**
- Original: AI city loops also require terrain type 10 (via gs+0x711).
- Fix: `site type < 2 && GetTerrainType(x, y) == 10`.

**A1-9. Income and upkeep are recomputed live instead of taken from the turn start.**
- Original: fixed per player at turn start (DAT_3bc00000 / 0x2c9d0000).
- Remake: AIIncome and AIUpkeep (23728-23749) recount on every call.
- Fix: cache both per player at turn start.

**A1-10. Weak-unit tests read slot 0 of a record.** This is an approximation from the record model. The A1-5 per-slot fix covers it.

**A1-11. Step 14 ignores FUN_10013d0c's side effects.**
- Original: a hero plus a flyer → the list becomes [hero, flyer], the flyer's orders move to the hero, and the function returns 2. Hero only → returns 1, and the hero gets role 13 if idle.
- Remake: AIStepHeroCities (25712-25729) only tests hero && !flyer.
- Fix: port FUN_10013d0c as a helper. Step 3 needs it too.

**A1-12. Lead unit.**
- Original: FUN_1001e160 picks the unit with the highest fight-order byte.
- Remake: AIStackLead (23811) takes the hero's record, else rec[0].
- Fix: pick by fight order.

**A1-13. Distance between equal points (unverified).**
- Original: FUN_1000a884 (5116-5139) returns 10000 when d² < C, a TOC double.
- Remake: AIDist returns 0.
- Fix: read the double at TOC+0xe0 from the PEF.

**A1-14. The garrison counter at +0x1e6 counts the strike quadrant** (`iVar5 == 0`). The remake uses `q != 0`. Low impact: the byte is only ever written.

**A1-15. The 8-unit stack cap.** The original takes units in index order until it has 8. The remake skips an overflowing record and may take a later, smaller one. Low impact.

**A1-16. Non-own units in a 2×2 city.** FUN_10010b30:8494 disbands them and still counts the record; the remake skips them. Low impact (allied stacking only).

**A1-17. AISetProduction clamps turns to at least 1** (25580). The original copies the slot's turns verbatim. Low impact.

**A1-18. The redirect retry loop is unverified.** FUN_10017ddc's caller is missing from the decompile. The remake retries up to 3 times. Needs the PPC bytes of FUN_10017844 and FUN_100171d4's AI branch.

**A1-19. AINeighbourBuild rebuilds the flag grid per city.** The original calls FUN_10044110(0,1) once and patches each city's owner nibble. These are equivalent only if FUN_10043e60 reads passability from the owner nibble. Unverified.

**A1-20. Personality random ranges were lost by Ghidra.** The Lord and Warlord ranges in FUN_10020640 need confirming from the PPC bytes.

**A1-21. Step 0 clear.** FUN_1000c9c8 (5957) clears bits 26-29 of the long at gs+0x1582+me*0x12 before step 1. Confirm that AIStepDiplomacy covers this.

**A1-22. AI buys don't re-sort the slots or update the city's defence.**
- Original: FUN_10049fa8 (PPC_0002.c:9603) sets defence via FUN_10048c90, then FUN_100496c8 re-sorts the slots.
- Remake: AIStepBuyProduction (25782-25808) and AIBuyFlyerSlot (25628-25650) do neither.
- Fix: call FinalizeCitySlots() and set defence (`filled < 3 ? 1 : 2`).

## Verified matching (read line by line)

- **Turn setup and steps:**
  - The step dispatcher order (ExecuteAITurn), with steps 2 and 12 gated on the hidden map.
  - FUN_1000c844, the role reset.
  - FUN_10020640 and FUN_10020ae8, the personality tables (apart from A1-20).
- **Neighbours and map:** FUN_1001d27c, FUN_10020d88, FUN_10018574, FUN_1000da14, FUN_100186cc, FUN_1001acdc, FUN_1002be50.
- **Battles and targets:**
  - FUN_1001eff8, the win estimate.
  - FUN_1001f48c and FUN_1001f220.
  - FUN_100121f8.
  - FUN_10013150 (apart from A1-2).
- **Moving and dispatch:**
  - FUN_10013484: done-marking, order clearing, own-city destination.
  - FUN_1005619c.
  - FUN_1001497c and FUN_10014bcc.
  - FUN_100143b8.
- **Garrison and expansion:**
  - FUN_1001f9e4, FUN_1001f758, FUN_1001f958.
  - FUN_1000fe90.
  - FUN_1000ffe0.
  - FUN_1001072c: all 13 score terms.
  - FUN_10010b30's body.
  - FUN_1001aa9c, FUN_1001a864, FUN_10018800, FUN_1001a0a0.
  - FUN_10018b14 (apart from A1-3).
  - FUN_10020ec4, FUN_1001ab94.
- **Production and buying:**
  - FUN_1000d384 and the 68k CODE_098 role switch.
  - FUN_1000fac4, FUN_1000f7bc, FUN_1000f708, FUN_1000d6a0, FUN_1001e564, FUN_1001e4b0.
  - FUN_1001e794 (formula; inputs aside, see A1-4), FUN_1001e9d0, FUN_1001f648.
  - FUN_1000d1a4, FUN_1000cf78, FUN_1000d0c0, FUN_10020f94, FUN_1001eaa4.

## Notes for other reviewers

- **Tables that need the PEF data section:** the garrison table T alignment (0xad08 vs 0xad0c), the quadrant tables, and the Wmove/Wstr/Wtime tables can't be confirmed from the decompile. The PEF data is only in `Warlords_II_CD/WarlordsII 1.0.7 PPC upd.sit`.
- **AIAtWar:** it reads bits 0-1 of the remake's byte, while the original reads `>>0x1a&3` of a long at gs+0x1582+me*0x10+p*2. The diplomacy port must make sure these agree.
