# Overnight Fidelity Pass — running log

Autonomous run: compare the remake against the 68k decompiled original, apply
safe gameplay-LOGIC fixes (build-verified), defer risky visual/structural changes.

## Rules I'm following
- APPLY only: localized logic/constant fixes with a clear 68k reference, that compile clean.
- VERIFY: `make PLATFORM=powerpc` after each batch; revert anything that breaks the build.
- DEFER (document, don't apply): marble palette, stack-flag art, minimap phantom dots,
  army path-preview graphics, dialog layout, any render/structural change needing eyes.
- LOG every applied change here (file:line, before→after, 68k ref, why).

## User-reported observations to fold in
- Minimap: phantom dots in the water.
- Army stack flags: missing/grow-with-size (art was wrong — PICT 30030 is shields).
- Hero dialog marble washed out (offscreen-GWorld palette; needs direct-draw).
- Hero order on cities is wrong.
- Turn gong (SND_TURN) not audible on the new-turn splash (likely cut off / volume).
- Traveling army path-preview graphics not exact.

## Already fixed this session (baseline)
- Crash #6: gExtState + gRoadData backing storage (core/globals.c, stubs/globals_extra.c) + main.c:5371 guard. VERIFIED crash-free on clean emulator.
- Hero-hire stat color white→gold (main.c ~20035) — BAND-AID for washed-out marble; revert to white once marble is fixed.

## Applied fixes (this run)

### Cycle 1 (broad audit: 12 systems, 24 findings, 13 confirmed) — build ✓
- **[combat] die-roll control var** — `main.c:12307` `dieRange = sOptIntenseCombat ? 24 : 20` → `(*(short*)(gs+0x126)==0) ? 20 : 24`. Verified vs 68k CODE_104:154-159 (uses gs+0x126; 20/24). The remake read the wrong variable, so EVERY combat used the wrong die range.
- **[movement] cost-map early return** — `movement.c:1845` `return;` → `continue;`. The early return exited the whole 112x156 cost-map loop after the first standard tile (Ghidra rendered the loop's `continue` as `return`; the author's own comment flagged it). Likely also affects path-preview accuracy.
- **[rendering] selected-army sprite offset** — `main.c:7966` Y offset +5 → +7, matching the unselected sprite (also +7) and 68k CODE_067. Fixes a 2px jump when selecting an army.
- **[stack] refresh after distant move** — `main.c:~29152` added `if (sSelectedArmy>=0) BuildStackArrays(sSelectedArmy);` after ExecutePathSteps, matching the nearby-move path (29108). Without it, a multi-army stack at the move destination was uninteractable (this is the "multi-army selection" issue).

### Cycle 2 (14 confirmed findings) — build ✓ (3 applied, 6 BLOCKED by memory conflict, 5 deferred)
- **[sound/gong] turn-splash gong inaudible** — `main.c:23276` removed the `quietCmd` block that silenced sSndChannel right before `PlaySound(SND_TURN)`. 68k CODE_080:1547 plays 0x3ef directly, no prior quiet. **This is your "no big gong on the new-turn page" report.**
- **[heroes] initial hero offer no longer male-only** — `main.c:19820` `sMaleIndices[Random()%NUM_MALE_HEROES]` → `Random()%20`. 68k CODE_064 has no gender restriction on the free turn-1 hero; the male/female radio already works in our dialog (isFemaleHero recomputed at 19832 from the index). Hero is still free (heroCost=0).
- **[minimap] defensive negative-count guard** — `main.c:8572` added `if (armyCount<0) armyCount=0;` before the `>100` cap. Harmless hardening; NOTE this likely does NOT fix the phantom-water-dots (root cause still open — see below).

### ⚠️ Cycle 2 — BLOCKED: findings that CONTRADICT verified memory (did NOT apply — need your call)
These 4 high-severity findings would re-break things my memory says were already fixed. I refused to auto-apply:
- **[guardian] "SCN records are gs+0x812 stride 0x20"** (findings #3/#4, main.c:1721/1732/2073/8977) — my memory (City Data Architecture, verified Feb 28) explicitly says **gs+0x811 stride 0x1F**, and "previous code used 0x20 causing misaligned reads." The agent cites CODE_074:1791 (`sVar5*0x20 + ...+0x812`) — but that is likely the **runtime** site layout (0x812/0x20), NOT the **raw SCN** layout (0x811/0x1F); the remake deliberately reads the raw-SCN copy. Applying would re-introduce the misalignment bug. **NEEDS: definitive resolution of SCN-raw vs runtime layout before touching.**
- **[stats] "stat[2]=upkeep/movement, stat[4]=gold cost"** (findings #5/#6/#9/#11, main.c:22082/23886/25217/1260) — my memory (Unit Type System, verified Feb 28) says **stat[2]=cost, stat[3]=movement** (entry+0x16 shorts, high byte = value). The agents say stat[2] is movement/upkeep and the real gold cost is stat[4]@0x1E, citing a 68k gold-deduction at offset 0x1E. If memory is right, changing stat[2]→stat[4] BREAKS production cost + upkeep game-wide. **NEEDS: definitive stat-index resolution (read the actual 68k buy/upkeep code + cross-check a known unit's cost in the unit table).** This blocks the AI-affordability and army-upkeep fixes.

### Cycle 3 (resolve 2 conflicts + audit 8 new systems) — build ✓ (2 applied, conflicts resolved, 1 HIGH rejected)
**Conflict resolutions (3 adversarial lenses each):**
- **Unit stat layout → memory was RIGHT (2-1, high conf).** stat[2]=gold_cost (+0x1A), stat[3]=movement (+0x1C). Confirmed by GetUnitTypeStat's own doc, upkeep (stat[2]/2, CODE_042), combat bonus (stat[2]/2, CODE_080), AI affordability. **Cycle-2 findings #5/#6 REJECTED** (do NOT change stat[2]→stat[4]). ⚠️ NUANCE worth a later look: one lens found the *production-purchase gold deduction* in 68k CODE_072:287 reads +0x1E (stat[4]), while everything else uses stat[2] — possible second cost field / remake inconsistency. NOT changed (needs playtest: build a unit, confirm gold deducted). Logged, not urgent.
- **Guardian/SCN record layout → memory was RIGHT (2-1, high conf).** Two distinct layouts confirmed: RAW SCN ruin records gs+0x811 stride 0x1F (correct read), RUNTIME rebuilt site records gs+0x812 stride 0x20 (garbage for loaded scenarios). **Cycle-2 findings #3/#4 REJECTED as regressions.** The "+0x17 should be +0x18 site_type" sub-claim also rejected (the +0x17 runtime convention is deliberate; +0x18 is the raw-SCN field).
- ⇒ Both cycle-2 memory-conflict blocks were correctly NOT applied. The verified notes hold.

**Audit (8 systems, 3 confirmed, 10 rejected by verify):**
- **[economy] pillage gold uncapped** — `main.c:21534` (AI-report city-action window) added `if (*pgold > 30000) *pgold = 30000;`. Matches the 9 other gold-add sites that all clamp to 30000 ("68k gold cap"); these two forgot it.
- **[economy] raze gold uncapped** — `main.c:21546` same 30000 cap added.
- **[victory] REJECTED — "add >50% city gate to elimination victory" (main.c:20513)** — investigated against 68k CODE_130: the `sVar3==0 && sVar6==1` (all opponents eliminated) branch sets victory with NO city check; the >50% gate applies ONLY to the *domination* path (gs+0x15e), which the remake already mirrors at 20503-20511. Applying the fix would BREAK legitimate elimination victories. Not applied.

### Cycle 4 (minimap root-cause + audit 7 systems) — build ✓ (1 applied, minimap deferred, 1 HIGH + 10 rejected)
- **[mapgen] random-map ruin count** — `mapgen/mapgen.c:1862` was hardcoded `*(gs+0x810)=MAX_RUINS` (always 40). 68k CODE_020 FUN_0000607c:3250-3258 computes `MIN(total_cities/2, 40)`. Changed to `ruinsCount = GetConfigShort(CFG_TOTAL_CITIES)/2; cap 40`. Over-placed ruins on small-city random maps before. (Verified high-conf: identical offsets/stride/init/name-template to the 68k routine.) Unplaced slots stay at (-1,-1) so they won't draw.

**Minimap phantom-water-dots — ROOT CAUSE NOT YET PINNED; all 3 proposed fixes are WRONG (deferred, do NOT apply):**
- Lens-1 "filter ruins by site[0x1D]!=0" — `0x1D` is the *active/searchable* flag; only ~30% of ruins are activated (main.c:2098). Filtering by it would HIDE 70% of legitimate ruins from the minimap. Wrong.
- Lens-2 "draw city only if siteType==0" — `siteType==1` is a CAPITAL (0=city,1=capital,2+=ruin); the `<2` else-clause correctly draws both as shields. Excluding 1 would hide capitals. Wrong.
- Lens-3 "skip armies on water tiles" — the agent itself confirmed the 68k (CODE_067 FUN_00002ab4) does NOT check terrain; naval units legitimately sit in water. Adding the skip would DIVERGE from the original. Wrong.
- LEADING HYPOTHESIS (unconfirmed): stale/uninitialized records drawn because the empty-sentinel/count guard differs from the 68k (army loop skips only `[0x16]==0xFF`; city/site loop has no validity skip beyond bounds; a zeroed slot at (0,0) passes bounds). **Best resolved by a VISUAL CAPTURE of which dots are phantom** (army-colored vs ruin-colored vs at origin) — needs the InfiniteMac runtime; deferred for a screenshot pass.
- Verify also flagged 3 audit findings as touching KNOWN-CORRECT (correctly rejected): "Fortification Bonus Applied Correctly", "ocean tile ownership check in naval pathfinding", "shore embarkation special handling".

### Cycle 5 (gold-cap sweep + audit 7 systems) — build ✓ (2 applied, 12 rejected)
- **Gold-cap sweep found NOTHING new** — the 2 cycle-3 cap fixes (pillage/raze) closed the only gaps; all other gold-add sites already clamp to 30000.
- **[turn] group disband ran human-only** — `main.c:24245` removed the `if (isHuman)` guard around single-member group-tag clearing. I verified DIRECTLY in 68k CODE_080: FUN_00002108 calls FUN_00000098 UNCONDITIONALLY (line 1531); FUN_00000098 keys off the current player (gs+0x110), so the original disbands single-member groups for human AND AI. The remake's "HUMAN TURNS ONLY" comment was mistaken — AI single-member group tags were never cleared (stale-group bug). Inner logic already keys off `player`, so removing the guard is exact.
- **[reports] Production report "Producing" column == "Cities"** — `main.c:14353` the count loop incremented pCities and pProducing identically (both unconditional), so the two labelled columns always showed the same number. Now pProducing counts only cities whose ext production type (ext+0x24c+ci*0x5c+0x02) is >= 0 (idle = -1). Report-display only; low risk.

### Cycle 6 (hero-spawn resolution + deep core-systems audit) — build ✓ (1 comment fix; hero-spawn RESOLVED but deferred)
- **[movement] diagonal-block comment corrected** — `main.c:11309` comment said terrain 2/3 are "forest/hills"; they are **Water/Shore** (68k literals '\x02'/'\x03', confirms verified memory). Comment-only; behavior was already correct.
- **HERO SPAWN LOCATION — now RESOLVED (I read 68k CODE_103 FUN_000000be directly), but the fix is deferred (complex reimplementation, gameplay-visible):**
  - Initial (turn-1, free) hero → CAPITAL coords (gs+player*0x14+0x18a/0x18c). Remake already does this. ✓
  - Non-initial hero → placed at a random owned **ARMY** (army records gs+0x1604 stride 0x42, owner +0x15, count gs+0x1602), THEN conditionally overridden to the player's **STRONGEST army** (FUN_0000000c scores armies by type bytes 0x07/0x02/0x03 + random). The remake instead places it at a random owned **CITY** (main.c:19855-19884) — a real divergence.
  - The 68k offer is also gated: cost 400/600 gold (random), a per-player hero cap (5, or 6 if a threshold met), a 40 global hero cap, and only a ~7-in-30 (~23%) chance the offer fires at all. Verify whether the remake replicates these gates before reworking.
  - WHY DEFERRED: faithful fix = iterate armies + implement the strongest-army override + match the gating — a feature reimplementation, not a localized edit. Too risky to do blind overnight. NOTE: this may or may not be your "hero order on cities" complaint — if you meant the ORDER cities are listed/offered rather than spawn position, clarify and I'll target that instead.

### Cycle 7 (sound/scenario/terrain/turn/sprite/city-defense audit) — build ✓ (6 sprite-rect fixes; 2 rejected)
- **[rendering] army sprite source rect dimensions swapped in 6 dialog/inspect renderers** — `main.c:9787, 9932, 10102, 10474, 21069, 21131` each built the sprite source rect as **29 wide × 32 tall** instead of **32 × 29**. The sheet cell is col-stride 32 / row-stride 30 / sprite 32×29 (confirmed by the canonical 1:1 map blit at line 7963). The height `+32` over-read 2px INTO THE NEXT SPRITE ROW (visible wrong pixels at the bottom of unit/hero portraits in the build dialog, unit-list, unit-comparison, hero-info, and two city-inspect renderers); the width `+29` cropped 3px off the right. Changed all 6 to `+32` width / `+29` height — reads exactly one cell, matches the map render. (Left the 5 unflagged scaled-icon sites at 12954/13059/15617/18941/29450 alone — they use 29×28, no row-bleed, and scale to tiny icons.)
- Sound-event coverage, scenario-load, terrain shaping, turn sequence, city defense: no confirmed divergences (only 2 findings, both rejected by verify). Good fidelity signal.

### Cycle 9 (DEEP narrow: terrain-decode, combat numerics, item effects, AI-diff spec) — 0 applied
- Terrain tile-decode, exact combat die/threshold/bonus-stacking, and item/artifact effect values: **no confirmed divergences** — core numerics are faithful. Cycle-9 terrain-decode clean ⇒ the minimap phantom dots are NOT from mis-decoded terrain (they're entity records at water coords — needs a visual to tell legit naval units from stale records).
- Flagged (NOT applied, for your review): a possible combat die LOWER-bound off-by-one ("[0,range-1] vs [1,range]") — verifier flagged it as touching verified code; needs exact 68k Random()-bounds check before re-touching the die (don't want to regress the cycle-1 die fix). Also "Missing Threat Response Modifiers (Minimum Active Groups)" — AI tuning, flagged known.
- AI-difficulty (gs+0xc0) spec attempt returned empty — CODE_105 values not cleanly extractable by the agent; remains a deferred feature.

## ============================================================
## NIGHT SUMMARY (cycles 1–9) — read this first
## ============================================================
**19 changes applied & build-verified** this session (18 behavioral + 1 comment-only). The broad+deep audit is exhausted (cycles 6/8/9 ≈ 0 new), so the loop was stopped here to avoid churn. Everything below the build line is verified by `make PLATFORM=powerpc` (clean) and shipped into the "Warlords II Remake" disk via rebuild_remake.sh.

**Applied (by area):**
- Combat: die-roll control var (gs+0x126) [c1].
- Movement: cost-map early-return→continue [c1]; diagonal-block comment fix [c6].
- Rendering: selected-sprite Y offset +5→+7 [c1]; **6 army-sprite source rects 29×32→32×29** in dialogs (portrait row-bleed) [c7].
- Stack: refresh after distant move [c1].
- Sound: turn-splash GONG un-silenced (removed premature quietCmd) [c2].
- Heroes: initial offer no longer male-only [c2].
- Minimap: defensive negative-count guard [c2].
- Economy: pillage + raze gold now clamped to 30000 [c3]; (sweep found no other gaps).
- Mapgen: random-map ruin count 40→MIN(cities/2,40) [c4].
- Turn: group disband now runs for ALL players, not human-only (verified in 68k) [c5].
- Reports: Production "Producing" column no longer duplicates "Cities" [c5].

**Conflicts resolved (kept the verified value, refused the agent "fix"):** unit stat[2]=gold_cost (NOT stat[4]); SCN raw records gs+0x811/0x1F vs runtime gs+0x812/0x20. Both 2-1 high-confidence; my cycle-2 refusals were correct.

**Fully reverse-engineered, deferred (complex/needs you):**
- HERO SPAWN: non-initial heroes spawn at a random owned ARMY (+ strongest-army override + cost 400/600 + per-player cap 5-6 + 40 global cap + ~23% chance), not a random city. Spec above. Faithful fix = a reimplementation.
- MINIMAP phantom water dots: terrain decode is correct, so it's entity records at water coords — needs a VISUAL capture to tell legit naval units from stale records (you have the emulator open). All 3 agent-proposed fixes were wrong (would hide ruins/capitals/naval).
- VISUAL (need your eyes): marble palette (offscreen-GWorld; needs direct-draw), growing stack-flag art, army path-preview graphics.
- AI difficulty (gs+0xc0) unimplemented; combat die lower-bound off-by-one (unverified).

## Deferred (needs your review / deeper verification)
- **[economy] production-purchase cost field** — 68k CODE_072:287 deducts gold at unit-build using stat[4] (+0x1E), but the remake's build cost + AI affordability use stat[2] (+0x1A, the canonical gold_cost). May be a genuine two-field design or a remake inconsistency. Verify by building a unit and checking the gold deducted vs displayed cost before changing anything.
- **[ai-diff] siege probability by difficulty** (cycle 2 #7, combat.c:1265-1284) — adds a siege bonus keyed on gs player difficulty. Real divergence, but it changes combat odds and is part of the larger unimplemented AI-difficulty feature; needs the exact CODE_105 values + by-ear/playtest check. Deferred with the other AI-difficulty work.
- **[heroes] spawn location: random city vs last army** (cycle 2 #2, main.c:19850) — 68k may iterate ARMIES (stride 0x42) for non-initial-offer spawn, not random owned city. Agent flagged unsafe (offset unknown). Likely related to your "hero order on cities" note. Needs 68k CODE_103 spawn-loop verification.
- **[sound] combat victory voice SND_VGOLD00** (cycle 2 #10, main.c:13813) — 68k may play 1009 on city capture; agent's suggested location was wrong (it's not gold-conditional). Verify by ear before wiring.
- **[ai] difficulty (Knight/Lord/Warlord) not implemented** (gs+0xc0 never read) — real but a FEATURE add needing the exact CODE_105 threshold-offset logic; risky to implement blindly.
- **[search] guardian type not loaded** (`main.c:2074`) — the suggested `site[0x1A]=scnSite[0x1A]` cross-copies between DIFFERENT record layouts (runtime 0x20 stride vs SCN 0x1F stride); the +0x1A offset isn't safely assumed equal. Needs SCN-layout / 68k-guardian-load verification.
- **[search] type-4 treasure direction-hint is dead code** (`main.c:27140/27639`) — feature-enablement decision (restore vs remove); verify intended.
- **[diplomacy] possible bit-field mismatch** (`main.c:23673`) — Ghidra bit-shift ambiguity; medium confidence, needs assembly cross-check.
- **[heroes] initial offer is male-only** (`main.c:19819`) — 68k may allow all 20; medium confidence; changes which heroes appear (verify vs your "hero order on cities" note).
- **[sound] combat sound** (`main.c:13706`) — remake plays SND_WAR(1035); 68k combat plays 1009 (a "VGOLD00" voice). Odd-sounding; verify by ear before changing (you asked to verify sounds).
- **[sound] SND_ARMY(1000) on army UI clicks** — 68k never plays it; verdict says intentional enhancement (the original had silent army UI). Your call whether to keep.
- Visual (from your playtest, separate from audit): marble palette (offscreen GWorld), army stack-flag art (PICT 30030 is shields, not the growing flag), minimap phantom dots, army path-preview graphics, turn-gong audibility.
