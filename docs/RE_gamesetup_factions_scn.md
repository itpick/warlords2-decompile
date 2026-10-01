The decompile evidence is confirmed accurate. I now have enough verified detail. Writing the synthesized reference document directly as my output.

---

# Warlords II — Original 68k vs Remake: Game Setup, Faction & Scenario Data Reference

A consolidated, evidence-backed reference for matching the remake (`src/main.c`) to the original Warlords II (April 1996 fat-binary, Ghidra-decompiled to `tools/68k_binary/decompiled/CODE_XXX.c`). Each system documents what the **original** does (with file:line + offsets/dims), how the **remake differs**, and the **recovery opportunity**. Citations to `CODE_XXX.c` are repo-root-relative (`tools/68k_binary/decompiled/`); `main.c` lines are repo `src/main.c`.

> **Cross-cutting note up front:** "MEMORY.md says X" where it conflicts with these findings (e.g. ruin stride 0x1F vs the header comment's 0x20 at `main.c:65`) — the *runtime code* at `main.c:1732` uses the correct **0x1F**; the stale `0x20` lives only in an outdated header comment block. Don't trust the comment block at `main.c:64-68`.

---

## 1. Game Setup View — Window, Subviews, and Sizes

### What the original does
The Game Setup dialog lives in **CODE_057** (`a2GameSetup`). It is a **MacApp framework** resource-based dialog: window geometry, subview bounds, and radio groups are constructed from resource IDs via framework callbacks, not from inline constants.

- Entry: `CODE_057.c:11-192` (`FUN_0000000c`).
- Layout handler: `CODE_057.c:1318-1428` (`FUN_00002c9e`) sets bounds for three internal windows via `(*_DAT_00027fc4 + 0x1ac)` (Allocate) calls; results shown via `(*_DAT_00027fb4 + 0x268)` (Draw) at lines 1407-1428.
- MacApp callback vtable offsets: `+0x188` SelectionChanged, `+0x1ac` Allocate, `+0x1c0` DrawContents, `+0x268` Draw, `+0x26c` Show.
- **Item click codes** (4-char MacApp message codes) drive every control:
  - Faction radios: `sid0`–`sid7` (`0x73696430`–`0x73696437`).
  - Computer level: `com0`/`com1`/`com2` (`0x636f6d30`–`0x636f6d32`), `CODE_057.c:363-367`.
  - Options dialog spawn: `go  ` (`0x676f2020`), `CODE_057.c:391-404` → `func_0x000073b0(0x32)` + `FUN_00002430(..., 3000, ..., 0x52, 0)` (modal, dialog resource **3000**).
  - Edit Options: `edit` (`0x65646974`), `CODE_057.c:371-378` → `FUN_00003208` + nested dialog.
  - I-am-the-Greatest: `grea` (`0x67726561`), `CODE_057.c:406-410` → `(*param_3 + 0x428)` getter → `FUN_00004d20` sets all AI to Knight.
- Dialog completion check: `FUN_00001bc0` (`CODE_057.c:476-488`) gates on `param_2 == 3000`.

**Hard limitation:** concrete window/subview pixel sizes are *not recoverable* — MacApp stores them in `'view'`/`'DLOG'` resources resolved at runtime, invisible in the decompile.

### How the remake differs
The remake **fabricates** a software-drawn dialog on a `plainDBox` window with two hardcoded sizes:
- Simple: **460×340** (`main.c:6104-6105`); Expanded ("More Choices"): **560×420** (`main.c:6838-6839`).
- Centered via `SetRect((screenRect.right-winW)/2, (screenRect.bottom-winH)/2, …)` (`main.c:6107-6111`).
- Faction radios: simple ovals at `(35,yPos-9)-(47,yPos+3)`, `yPos=78+i*22`, shield 13×15 at `(52,yPos-10)` (`main.c:6189-6222`); expanded 2×4 grid `(15+col*145, 50+row*68)` size 135×60 (`main.c:6415-6460`).
- Computer level: 3 ovals at `(265,yPos-9)-(277,yPos+3)` (`main.c:6239-6258`).
- Options preset dropdown `(260,170)-(410,188)`, Edit Options `(260,196)-(410,214)` (`main.c:6276,6293`).
- I-am-Greatest checkbox `(260,220)-(272,232)` simple / `(315,122)-(327,134)` expanded (`main.c:6310,6549`).
- Begin Game `(290,300)-(430,322)`, More Choices `(30,300)-(170,322)`; Fewer Choices `(30,390)-(170,410)` (`main.c:6821,6831,6976`).

**Items present in remake but with no decompile parallel:** the Army-Set selector dropdown (see §5) and the simple/expanded "More Choices" toggle itself (the original's "More Choices" was a *separate modal options dialog* via `go  `/resource 3000, not a window-resize).

### State-write parity (these DO match the original game-state layout)
| Field | Offset | Original evidence | Remake |
|---|---|---|---|
| Per-faction AI level | `gs+0xc0` stride 0x02 | `CODE_057.c:363-367` writes `(item - 0x6d30)` | `main.c:7153` |
| Option flags | `gs+0x116`(HiddenMap), `+0x11a`(Quests), `+0x11c`(Diplomacy), `+0x122`(RandomTurns), `+0x124`(ViewProd), `+0x126`(NeutralCities), `+0x128`(IntenseCombat), `+0x12a`(ViewEnemies) | `CODE_057.c:391-404` Options modal | `main.c:7093-7100` |
| AI control flag | `gs+0xd0` stride 0x02 | `CODE_057.c:134-140` | `main.c:1593,1972,4644` |

### Recovery opportunity
- **High-fidelity match is blocked** on window/subview pixel dims — they're in unrecoverable MacApp resources. The remake's fabricated sizes are acceptable; document them as intentional.
- **Behavioral fix worth doing:** the original's **per-faction AI level is always available** (each `sidN` faction has its own `comN` group writing `gs+0xc0+faction*2`). The remake's *simple* mode collapses this into one `computerSkill` for all non-human factions and only exposes per-faction AI in expanded mode. To match the original, write per-faction `gs+0xc0` even in simple mode (broadcast the single skill to all non-human slots at commit time — `main.c:7153`).
- **`grea`/I-am-Greatest** already matches behaviorally (sets all AI→Knight); keep.

---

## 2. Faction Names & "Not Used" Sourcing

### What the original does
Faction names are stored **only** in the SCN scenario resource, copied into game state at **offset 0** as **8 × 20-byte (0x14 stride)** slots. There is no faction-name source in army-set files.

- Read into setup view: `CODE_057.c:97-102` loops `sVar6=0..7`, `func_0x00007718(_DAT_0002884c + sVar6*0x14)` into 0xb-byte display slots at `+0x174`/`+0x17e`.
- Faction count: `gs+0x10C` (short), derived from non-empty names.

**"Not Used" IS a real original feature** — and it is generated by *code*, not stored in SCN. Confirmed at `CODE_116.c:177-191`:
```c
for (sVar2 = 0; sVar2 < 8; sVar2++) {
  if (*(short *)(sVar2*2 + _DAT_0002884c + 0x138) == 0) {   // alive flag == 0
    pcVar6 = (char *)(sVar2*0x14 + _DAT_0002884c);          // gs + faction*0x14 (name slot)
    pcVar7 = &DAT_0001547e;                                  // "Not Used" string literal
    do { *pcVar6++ = *pcVar7; } while (*pcVar7++ != '\0');
    *(undefined2 *)(sVar2*2 + _DAT_0002884c + 0xc0) = 3;    // color = 3 (grey)
  }
}
```
So: **any faction whose alive flag (`gs+0x138+faction*2`) is 0 gets its name overwritten with the literal "Not Used" and its color set to 3.** This runs *after* alive-flag computation, so it covers both slots beyond `factionCount` and factions eliminated for lacking a capital.

### How the remake differs
- Name read matches: `main.c:6088-6098` `BlockMoveData` 8×20 from `gGameState+0`; `factionCount` = highest non-empty +1, default 8 (`main.c:6089-6101`). ✔
- Setup dialog renders only `i < factionCount` radios, so unused slots are simply hidden rather than shown as "Not Used" (`main.c:6189-6222`). This *differs* from the original's display model, which keeps 8 conceptual slots and labels the dead ones.
- The remake **does** replace eliminated faction names with "Not Used" at `main.c:7159-7161` — but it is gated on its own elimination logic, **not on the `gs+0x138==0` test the original uses**, and the `color=3` write to `gs+0xc0` is not paired with it.

### Recovery opportunity
- **Match the original exactly:** after alive flags are finalized in `GameInit` (post `main.c:1571-1597`), run the `CODE_116.c:177-191` loop verbatim: for every `gs+0x138+i*2 == 0`, write "Not Used" to `gs+0+i*0x14` **and** `3` to `gs+0xc0+i*2`. Do this for all 8 slots, not just `< factionCount`. This makes name/color state self-consistent for any downstream consumer that reads `gs+0` or `gs+0xc0`.
- Decide a display policy: the original conceptually carries 8 slots with "Not Used" labels; the remake hides them. Hiding is fine for the *setup* dialog, but the in-game name table at `gs+0` should still carry "Not Used" so faction-name lookups elsewhere are safe.

---

## 3. SCN Scenario Deserialization (Cities, Ruins, Armies)

> **Superseded for armies (Oct 2026):** see `RE_starting_armies.md`. Scenarios contain no army
> data; gs+0x1602/0x1604 are the original's *city* count/records; the SCN city block starts at
> 0x157B (count) / 0x157D (records), not 0x15BE.

### What the original does
The SCN resource type is `0x454e` (`'EN'` from `'SCEN'`/`'SCN '` family). Deserialization is a **MacApp TStream** read in **CODE_116** `FUN_00000332` (lines 121-142):
```c
func_0x00003188((short)piVar5, 0x454e);   // open SCN resource
(*piVar5 + 0x74)();                        // seek
(*piVar5 + 0xc0)(uVar8, (short)auStack_52);// read serialized object into stack buffer
```
After deserialization the original holds **two city representations**:
- **Serialized 0x20-byte records** at `gs+0x812` (stride 0x20) — these carry *garbage* X/Y for loaded scenarios (they're raw MacApp objects). For **random maps** these are written valid by `GenerateRandomMap`.
- **Compact 0x41-byte records** at `gs+0x15BE` (stride 0x41, max 99) — the *authoritative* loaded city data.

The original rebuilds the runtime 0x20 format from the 0x41 compact records.

**Verified offset maps:**

*Compact source record (`gs+0x15BE + i*0x41`):* `+0/+1`=X (LE short), `+2/+3`=Y (LE short), `+0x14`=defense (byte), `+0x16..0x19`=4 production-type bytes (0–28, 0xFF=empty), `+0x2A`=income (byte). (`main.c:1657-1711`.)

*Runtime city record (`sCityData[i*0x20]`):* `+0`=X (BE short), `+2`=Y (BE short), `+4`=owner (short, 0–7 / 0x0F neutral), `+6`=defense, `+8`=income, `+0x0C..0x13`=4 production-type shorts (0xFF→−1), `+0x17`=site_type (0=city, ≥1=ruin). (`main.c:1695-1710`.)

*City count:* scan compact records until `X==0 && Y==0` or OOB (`X≥112` or `Y≥156`), cap 139 (`main.c:1654-1662`).

*Ruins/temples (`gs+0x811 + ri*0x1F`, stride **0x1F**=31):* `+0`=X (byte), `+1`=pad, `+2`=Y (byte), `+3`=pad, `+4`=name(20), `+0x18`=site_type (1=temple, 2=sage, 3/6→library, 4→ruin, 5=searchable, 0=sentinel). (`main.c:1721-1761`.)

*Armies (`gs+0x1604`, stride 0x42=66, count at `gs+0x1602`, max ~100):* `+0`=X, `+2`=Y, `+0x14`=sprite, `+0x15`=owner faction, `+0x16..0x19`=4 unit-type slots (0xFF empty), `+0x1e/0x1f`=HP, `+0x2e`=current MP, `+0x2f`=runtime owner. (`CODE_116.c:20`, `CODE_117.c:52-96`.) The original *creates* one starting army per alive player in `CODE_117.c` `FUN_00001ecc` (lines 1058-1130): locate capital via `pstat[3]/pstat[5]`, init via `func_0x000028e8`, owner at `+0x15`.

*Diplomacy:* 8×8 byte matrix at `gs+0x1582`, default 0x00 (peace). Must be zeroed **after** city rebuild because `gs+0x1582..0x15C1` overlaps the compact-record region just below `gs+0x15BE` (`main.c:1764-1776`).

*Player stats (`gs+0x186 + p*0x14`):* `+3`=capX (byte), `+5`=capY (byte), `+0x0E`=start_x, `+0x10`=start_y (`CODE_116.c:97-102`, `CODE_117.c:1081-1087`, `main.c:1637-1650`).

### How the remake differs
- **Cities/ruins/diplomacy/player-stats: matches** the 0x41→0x20 rebuild and all offsets above. ✔
- **Armies: intentionally fabricated.** The remake does **not** call MacApp deserialization and **does not parse `gs+0x1604`**. `main.c:2272-2273` states the SCN army data "is MacApp-serialized and cannot be read directly, so we fabricate." Instead it synthesizes **one army per alive player** at the capital: 2 units of the capital city's *first producible* unit type, sprite/movement from the unit-type table (`main.c:2270-2369`).
- **The MacApp stream entry point itself is missing** — the remake reads raw compact records directly rather than running the TStream object read at `(*stream+0xc0)`.

### Recovery opportunity
- **Cities are already correct** — no action.
- **Armies are the real gap.** The remake's fabrication produces *2× first-producible unit*, whereas the original `FUN_00001ecc` places the faction default (the brief notes Light Infantry as the typical default). Two recovery paths:
  1. **Cheap parity:** match the original's *starting composition* rule precisely (faction default unit, not "first producible"), even while still fabricating — so the visible result matches the original on turn 1.
  2. **True fidelity:** decode the serialized 0x42 army records. The blocker is the MacApp TStream format read at `(*stream+0xc0)` — its byte layout is dispatched through virtual methods invisible in the decompile. Recovering this requires reverse-engineering the SCN serialized stream (open question below). The 0x42 runtime layout is already known; what's unknown is the *on-disk serialized* ordering/size of pre-placed scenario armies (garrisons, hero stacks) that the fabrication drops entirely.
- **Do NOT remove `gs+0x812`** — for random maps it's the valid source; the dual representation is load-path-dependent, not dead code.

---

## 4. Faction Participation ("Used" vs "Not Used")

### What the original does
Participation is governed by two coupled values:
- **Faction count** `gs+0x10C` (short) — how many of 8 factions are in play.
- **Alive flags** `gs+0x138 + faction*2` (8 shorts) — non-zero = alive.

Validation loop, `CODE_117.c:925-931` (verified):
```c
for (sVar4 = 0; sVar4 < 8; sVar4++) {
  sVar2 = func_0x00004938(*(short *)(sVar4*0x14 + gs + 0x18c));  // capital Y for faction
  if (sVar2 < 0) {                          // invalid capital
    *(short *)(sVar4*2 + gs + 0xd0)  = 1;   // mark AI
    *(short *)(sVar4*2 + gs + 0x138) = 0;   // mark eliminated
  }
}
```
Then `CODE_117.c:949-953` zeroes the capital pstat (`gs+0x186+i*0x14`) for any faction with `gs+0x138==0`, and `CODE_117.c:951` zeroes gold for dead factions. The "Not Used" name/color stamping (§2, `CODE_116.c:177-191`) keys off the same `gs+0x138==0`.

**Critical:** the decompile **checks** `gs+0x138` everywhere but never shows it being **initialized to non-zero** — its initial value comes from the SCN load (open question). The validation only ever *clears* it.

### How the remake differs
- `main.c:1571-1582`: reads `gs+0x10C`, then **explicitly** sets `gs+0x138+i*2 = (i < factionCount) ? 1 : 0`. This is *more defensive* than the original (which relies on SCN-provided initial values), and is the right call for the remake.
- `main.c:1589-1597`: validates capitals — but uses `capX==0 && capY==0` + a city-record search, whereas the original uses `func_0x00004938(capitalY) < 0` (Y-only). Different test, similar intent.
- Army-creation guard `main.c:2279-2290`: loops `i < fCount` **and** checks `pAlive = gs+0x138+i*2`, `if (!pAlive) continue;`. Garrison loop `main.c:2185` also checks `gs+0x138`. ✔ This correctly prevents phantom armies **provided GameInit's init at `main.c:1571-1582` always runs first.**

### Phantom-army root cause
A phantom (ghost-faction) army can only appear if army creation runs with `gs+0x138` non-zero for a slot ≥ `factionCount`. The remake's explicit zeroing at `main.c:1571-1582` should prevent this — so the bug, if present, points to **a code path that creates armies without going through GameInit**, or a scenario whose `gs+0x10C` is mis-parsed (open question on the SCN faction-count field).

### Recovery opportunity
- **Align the capital-validity test with the original:** replace the remake's `capX==0 && capY==0` check (`main.c:1589-1597`) with the original's "capital Y < 0 / invalid" semantics (`func_0x00004938` returns the city index for a coordinate; negative = no city there). This matters for scenarios where a capital legitimately sits at X=0 or Y=0 but is otherwise valid — the remake's zero-check could wrongly eliminate them, or conversely miss a faction whose capital coords are non-zero garbage.
- **Add the original's downstream zeroing** (`CODE_117.c:949-953`): for any `gs+0x138==0`, zero `gs+0x186+i*0x14` (pstat) and gold. The remake should do this so no stale capital/gold data survives for dead factions.
- **Guard hardening:** assert/ensure GameInit's `gs+0x138` init runs before *every* army-creation path (garrison + starting + any setup-dialog re-entry). This is the concrete phantom-army fix.

---

## 5. Army Set File Format & Loading

### What the original does
Two scopes of army art/data:

**Default (internal, in the Terrain file `sTerrainResFile`):**
- `PICT 30000-30009` — army sprite sheets (8 compass directions + 2 variants; ~512×64 each).
- `DAT 30000` — unit-type table.
- `PICT 30010` master UI sheet; `PICT 30011` big capital-banner shields; `PICT 30020` map colors; `PICT 30024` small dialog/map shields; `PICT 30030-30037` faction flag strips; `cicn 30600-30607` small shield icons.

**External sets (`:Armies:SetName`, e.g. Spectremia):**
- `PICT 20000-20009` — army sprites; `DAT 20000` — unit-type table.

**External shield sets (`:Shields:SetName`, e.g. Elemental Shields):**
- `cicn 30600-30607`; `PICT 15009` (big, 288×59); `PICT 15010` (small, 368×64).

**Unit-type entry (DAT 20000/30000):** 29 entries × **62 bytes (0x3E)**. `+0`=sprite index, `+1`=reserved, `+2..0x15`=name (20 bytes), `+0x16…`=stats as **big-endian shorts** (high byte = game value): `[0]`=strength, `[1]`=prod_turns, `[2]`=cost, `[3]`=movement (and further range/special).

Faction-name binding: the original reads faction names **from SCN only** (`gs+0`, §2). `CODE_057.c:83` calls `FUN_00002808(0x454e, 1, …)` — a `0x454e` (SCN) resource lookup; there is **no decompiled path loading faction names from army-set files.**

### How the remake differs (mostly matches)
| Element | Status | Remake evidence |
|---|---|---|
| Scan `:Armies:` folder | matches | `ScanArmySets` `main.c:3112` |
| Default sprites/units from terrain | matches | `main.c:3224-3304` (`PICT 30000-30009`, `DAT 30000`) |
| External sprites/units | matches | `main.c:3306-3423` (`PICT 20000-20009`, `DAT 20000`) |
| Unit-type stride 0x3E, BE shorts | matches | `main.c:835-837, 3251-3270, 3367-3386, 1264-1287` |
| Faction flags terrain-only | matches | `main.c:3271-3299` (`FLAG_PICT_BASE 30030`, "always from terrain") |
| Shields: external cicn 30600-07, terrain fallback 30011/30024 | matches | `main.c:3564-3606` |
| Faction names from SCN, not set files | matches origin | `main.c:6088-6098` |

**Two real deltas:**
1. **Army-set *selection UI* is a remake fabrication** — no `army`/`armi` MacApp item code exists in `CODE_057`. The remake adds a dropdown cycling `sSelectedArmySet` (`main.c:3112-3179`, dropdown at `main.c:6360`/`6635`, cycle at `main.c:6810/6955`). The original almost certainly bound the army set differently (per-scenario or per-faction), but the mechanism is not in the decompile.
2. **`PICT 15010` skipped** for external shield sets (`main.c:3571-3573`) because its 46px column stride differs from terrain's 26px — a known remake shortcut, fidelity unconfirmed against original.

### Recovery opportunity
- **Confirm army-set binding semantics** before investing in the dropdown: if the original binds army sets per-scenario (via a resource in the SCN/terrain file) rather than via a setup-dialog picker, the remake's dropdown is a UX *addition* — fine to keep, but it should default to whatever the scenario specifies. Investigate `CODE_057.c:83`'s `FUN_00002808(0x454e,1,…)` to see whether the SCN carries an army-set reference.
- **`PICT 15010`:** decide whether to support its 46px stride for full external-shield fidelity, or document the skip as intentional. Low priority — affects only external shield sets' small/map shields.
- Everything else in this system is at parity; no further work needed.

---

## Prioritized "What to Implement to Match the Original"

1. **(High) "Not Used" name/color stamping by alive flag** — port `CODE_116.c:177-191` verbatim into `GameInit` after alive-flag finalization: for every `gs+0x138+i*2==0`, write "Not Used" to `gs+0+i*0x14` and `3` to `gs+0xc0+i*2`, across all 8 slots. Currently only partially/conditionally done (`main.c:7159-7161`) and not keyed on `gs+0x138`. *(§2, §4)*
2. **(High) Phantom-army guard hardening** — ensure GameInit's `gs+0x138` init (`main.c:1571-1582`) precedes *every* army-creation path; add the original's dead-faction cleanup (zero pstat `gs+0x186+i*0x14` and gold per `CODE_117.c:949-953`). *(§4)*
3. **(High) Capital-validity test alignment** — replace remake's `capX==0 && capY==0` check (`main.c:1589-1597`) with the original's "capital Y invalid → eliminate" semantics (`CODE_117.c:925-931`, `func_0x00004938`). *(§4)*
4. **(Medium) Starting-army composition parity** — match the original's faction-default starting unit (`FUN_00001ecc`, `CODE_117.c:1058-1130`) instead of "2× first producible." Cheap, makes turn-1 state visually match. *(§3)*
5. **(Medium) Per-faction AI level in simple setup mode** — broadcast the single simple-mode skill to all non-human `gs+0xc0+i*2` slots at commit (`main.c:7153`), matching the original's always-per-faction `comN` model. *(§1)*
6. **(Low) External shield `PICT 15010` support** — handle the 46px stride or document the skip. *(§5)*
7. **(Low / blocked) True SCN army deserialization** — recover pre-placed scenario armies/garrisons/heroes by decoding the MacApp TStream `(*stream+0xc0)` format. Blocked on serialized-format reverse engineering. *(§3)*

---

## Remaining Open Questions

1. **MacApp Game Setup resources** — what `'DLOG'`/`'view'` resource IDs back the CODE_057 dialog and its three subviews? Pixel geometry is unrecoverable from the decompile alone; would need the resource fork dumped.
2. **SCN faction-count field** — is `gs+0x10C` stored explicitly in the SCN stream, or derived by counting non-empty 20-byte names? Determines whether mis-parse can cause phantom factions.
3. **Initial value of `gs+0x138`** — the decompile only ever *clears* alive flags; where do they get their initial non-zero value? Almost certainly the SCN load via the TStream read (`CODE_116.c:121-142`), but the exact serialized field is unconfirmed.
4. **`func_0x00004938`** — the real implementation is an inter-segment call (the `CODE_020.c:2648` stub halts on bad instruction); which segment hosts it? It maps a coordinate/pstat to a city index and returns negative when no capital exists.
5. **MacApp SCN stream format (`0x454e`)** — exact byte layout read at stream vtable `+0xc0`. Required for #7 above (true army recovery) and to confirm whether the SCN references an army set.
6. **Dual city storage purpose** — are the serialized `gs+0x812` 0x20 records ever read after deserialization on the *loaded* path, or are they purely the random-map source? (`GenerateRandomMap` writes them valid; loaded path uses `gs+0x15BE`.)
7. **Provenance of the `gs+0x15BE` compact records** — are they literally in the SCN resource bytes, or generated by MacApp deserialization into that region? The remake treats them as authoritative but the decompile doesn't show where they're written.
8. **Army-set NAME/STR override** — `CODE_057.c:83` `FUN_00002808(0x454e,1,…)`; did sets ship `NAME 2000-2002`/`STR` resources to override SCN faction names? No decompiled evidence of loading them.
9. **Shield fallback when `:Shields:SetName` is absent** for an external army set — does the original fall back to terrain shields, or use the set's own `PICT 15009/15010`?
10. **Scenarios with <8 factions** — do any shipped scenarios intentionally rely on empty-name slots, and does the original render them as hidden vs. "Not Used"-labeled disabled rows in the setup dialog?

---

### Evidence-quality caveats for the dev
- All `main.c` line numbers and the `CODE_116.c:177-191` / `CODE_117.c:925-931` excerpts in this doc were **re-verified against the working tree** during synthesis.
- The `main.c:64-68` header comment claiming ruin stride `0x20` is **stale**; runtime code uses `0x1F` (`main.c:1732`). Trust the code.
- "Not Used" string literal currently has **no occurrence in `src/main.c`** (grep-confirmed) despite the findings citing `main.c:7159-7161` — treat item #1 in the priority list as *not yet implemented*, contrary to the "Matches (partially)" status in the source findings.