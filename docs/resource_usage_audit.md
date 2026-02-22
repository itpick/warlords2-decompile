# Warlords II Resource Usage Audit

Cross-reference of all 698 resources against the original decompiled code (`warlords2_decompiled.c`) and our reconstruction (`src/main.c`).

## Key Finding: 3 Resource Loading Pathways

The original game loads resources through **three distinct pathways**:

1. **Direct by numeric ID** — `GetResource(type, id)` / `Get1Resource(type, id)` — Only ~10 resources use hardcoded numeric IDs
2. **By name** — `Get1NamedResource(type, name)` — Most game assets (PICTs, snd, Tune/Head, DAT) are loaded by constructed names from STR# string tables
3. **Via MacApp View resources** — Dialog/window PICTs, cicn icons, and TxSt styles are embedded in View resource hierarchies and loaded automatically by the framework

## Decompiled Function → Mac API Mapping

| Decompiled Address | Mac API | Purpose |
|---|---|---|
| `FUN_10001728` | `GetResource(type, id)` | Load from all open resource files |
| `FUN_10003540` | `Get1Resource(type, id)` | Load from current file only |
| `FUN_10003558` | `Get1Resource(type, id)` variant | TVect wrapper |
| `FUN_10002238` | `Get1NamedResource(type, name)` | Load by type + name |
| `FUN_10051f98` | Stream-based resource read | Open resource as data stream |
| `FUN_10052184` | Stream-based resource read variant | Another stream reader |
| `FUN_1005f6b0` | `GetIndString(str, listID, index)` | Load string from STR# |
| `FUN_10002568` | `AddResource(h, type, id, name)` | Write resource to file |
| `FUN_10098320` | Internal find in save-game | Find resource in serialized collection |
| `FUN_100f0a4c` | Preload code resource | Preload LDEF/CDEF/MDEF/WDEF/PACK |
| `FUN_10044d38` | LoadPICTByID | GetResource('PICT', id) + DrawPicture |
| `FUN_10044c60` | LoadPICTByName | Get1NamedResource('PICT', name) + DrawPicture |
| `FUN_10044d8c` | LoadSprite | Main sprite dispatcher (by name, from terrain/army/resource fork) |

---

## PICT Resources (57 in app)

### Loading: Mostly by name or via View resources

Only **3 PICT IDs are hardcoded** in the decompiled code:
- **PICT 1002** (0x3EA) — Horizontal marble bar, used as default/placeholder for TPlainPicture views (3 call sites)
- **PICT 3011** (0xBC3) — Small scroll icon, used as scrollbar thumb (2 call sites)
- **PICT 1003** (0x3EB) — Scenario preview, loaded during save and written as PICT 10000 to scenario files

All other PICTs load through:
- **Named sprite system** (`FUN_10044d8c`): MARBLE, ABITS, HIDDEN, WAR, SPECBITS, POPUP, POPUP2, POPUP3, HIDDENPP, ATRANS3, STRAT, army sheets, terrain sheets
- **View resources**: Dialog backgrounds (3000, 3100, 3200, 3300, 3800, 4022-4024, 4100, 4101, 4300, 4410-4413, 4420, 4501-4502)
- **Scenario files**: MAP 10000, PICT 10001

| PICT ID | Name | Original Loading | Our Code | Status |
|---|---|---|---|---|
| 1000 | (splash) | Via View 1000 / Wind 1000 | GetResource direct | USED (different path) |
| 1001 | MARBLE | By name via sprite system | GetPicture direct | USED (different path) |
| 1002 | (marble bar) | Direct ID 0x3EA, TPlainPicture default | — | NOT USED |
| 1003 | (scenario preview) | Direct ID 0x3EB, saved as PICT 10000 | — | NOT USED |
| 1005 | (border) | Via View resource | — | NOT USED |
| 1007-1009 | (borders) | Via View resource | — | NOT USED |
| 1011-1016 | (borders) | Via View resource | — | NOT USED |
| 1020 | HELPGFX | Via View 2000 (help dialog) | — | NOT USED |
| 1041-1042 | (logos) | Via View resource (About box) | — | NOT USED |
| 1050 | (talking head) | Via View resource | — | NOT USED |
| 1051 | VOICEBIT | Via View resource | — | NOT USED |
| 3000 | (scenario bg) | Via View 3000 | GetPicture direct | USED |
| 3011 | (scroll icon) | Direct ID 0xBC3, scrollbar thumb | — | NOT USED |
| 3017 | (roller right) | Via View resource | — | NOT USED |
| 3100 | (turn banner) | Via View 3100 | GetPicture direct | USED |
| 3200 | (hero scene) | Via View 3200 | GetPicture direct | USED |
| 3201 | (hero scene 2) | Via View resource | — | NOT USED |
| 3300 | (city bg) | Via View 3300 | — | NOT USED |
| 3800 | (battle bg) | Via View 3800 | — | NOT USED |
| 4022-4024 | LEVEL2-4 | Via View 4020 (level-up portraits) | — | NOT USED |
| 4100 | SEARCH | Via View 4100 | — | NOT USED |
| 4101 | TEMPLE | Via View 4100 variant | — | NOT USED |
| 4300 | DIPLOM | Via View 4300 | — | NOT USED |
| 4410-4413 | MEDAL0-3 | Via View 4410 | — | NOT USED |
| 4420 | (advisor) | Via View 4420 | — | NOT USED |
| 4501-4502 | (peace/victory) | Via View 4500/4510 | — | NOT USED |
| 10002 | HIDDEN | By name via sprite system | — | NOT USED (fog of war) |
| 10003 | WAR | By name via sprite system | — | NOT USED |
| 10004 | ABITS | By name via sprite system | GetPicture direct | USED |
| 10005 | SPECBITS | By name via sprite system | — | NOT USED |
| 10006-10008 | POPUP/2/3 | By name via sprite system | — | NOT USED |
| 10009 | HIDDENPP | By name via sprite system | — | NOT USED |
| 10010 | ATRANS3 | By name via sprite system | — | NOT USED |
| 10011 | STRAT | By name via sprite system | — | NOT USED |

---

## cicn Resources (78 in app)

### Loading: Via View resources + 2 direct GetResource calls

The decompiled code has 2 cicn loading call sites:
1. **Line 67141** (`FUN_100726d0`): `GetResource('cicn', param_2)` — T3DIconButton icon setter, loads cicn by ID from view data. Falls back to SICN if not found.
2. **Line 121328** (`FUN_100b8128`): `GetResource('cicn', *(param_1+0xAA))` — Another view-driven icon loader

All cicn IDs come from View resource definitions, not hardcoded in game logic.

| cicn Range | Count | Purpose | Our Code | Status |
|---|---|---|---|---|
| 1000-1005 | 6 | Command toolbar buttons | sCmdIcons[] | USED |
| 1007 | 1 | Crossed swords icon | sSwordsIcon | USED |
| 1008-1010 | 3 | Additional command icons | — | NOT USED |
| 1011-1019 | 9 | Scroll/directional pad | sScrollIcons[] | USED |
| 1020 | 1 | Diplomacy button | sDiplomIcon | USED |
| 2000-2025 | 26 | Shortcut bar icons | sShortcutIcons[] | USED |
| 2050-2051 | 2 | Special army icons | — | NOT USED |
| 3020-3029 | 10 | Setup shield icons | sShieldIcons[] fallback | USED |
| 3300-3303 | 4 | City dialog status icons | — | NOT USED |
| 3310, 3320-3321 | 3 | City production icons | — | NOT USED |
| 3500-3507 | 8 | Stack info icons | — | NOT USED |
| 3700-3701 | 2 | Ruins/search icons | — | NOT USED |
| 4300-4302 | 3 | Diplomacy state icons | — | NOT USED |

---

## snd Resources (36 in app)

### Loading: By name, not by numeric ID

The original game **never uses hardcoded snd resource IDs**. Sound effects use a name-based resolution:
1. Game event → STR# index lookup (via `FUN_1005f6b0` / GetIndString)
2. STR# returns a name string
3. Name is composed: scenario prefix + sound name suffix
4. `Get1NamedResource('snd ', constructedName)` loads the sound

**Sound Trigger STR# Indices (from decompiled code):**

| STR# Index | Dec | Category | Decompiled Lines |
|---|---|---|---|
| 0x25 | 37 | UI click sounds (2 variants) | 85799, 85808 |
| 0x26 | 38 | Combat animation sounds | 32227 |
| 0x27 | 39 | Notification sounds | 85834 |
| 0x2E | 46 | Territory loss voice | 85988 |
| 0x2F | 47 | Territory gain voice | 85972 |
| 0x36 | 54 | Small army voice | 85934 |
| 0x37 | 55 | Large army voice | 85956 |
| 0x38 | 56 | Medium army (no specials) | 85939 |
| 0x39 | 57 | Large force (specials) | 85951 |
| 0x3A | 58 | Special units voice | 85947 |
| 0x3F | 63 | Fanfare | 86132 |
| 0x40 | 64 | Combat sounds (sub-indices 0,1,2,5) | 86157-86167 |

| snd ID | Name | Our Code | Status |
|---|---|---|---|
| 1000 | ARMY | PlaySound(SND_ARMY) | USED (direct ID, not original path) |
| 1001 | ARMY2 | Defined, not called | DEFINED ONLY |
| 1002 | CHORD | PlaySound(SND_CHORD) | USED |
| 1003 | DING | PlaySound(SND_DING) | USED |
| 1004 | DRAMATIC | PlaySound(SND_DRAMATIC) | USED |
| 1005 | ORCH | PlaySound(SND_ORCH) | USED |
| 1006 | SPLASH | PlaySound(SND_SPLASH) | USED |
| 1007 | TURN | PlaySound(SND_TURN) | USED |
| 1008-1034 | Voice clips (VBEGIN, VGOLD00, etc.) | — | NOT USED |
| 1035 | WAR | PlaySound(SND_WAR) | USED |

**Note:** Our code loads sounds by numeric ID (`GetResource('snd ', id)`). The original uses name-based loading through STR# indices. Both work since the snd resources have both IDs and names.

---

## Tune/Head Resources (26 each)

### Loading: By constructed name, never by numeric ID

Music is loaded via `Get1NamedResource('Tune'/'Head', constructedName)` at decompiled line 85463/85469. The name is composed from STR# indices:

| Game State | STR# Index | Music Context | Loop? |
|---|---|---|---|
| 0 | 8 + prefix 7 | Title screen | Yes |
| 1 | 10 + prefix 7 | Player's turn | Yes |
| 2 | 10/11/12 (random) + prefix 7 | In-game (random selection) | No |
| 3 | 9 + prefix 7 | Battle event | Yes |
| 4 | 12 + prefix 7 | Victory | Yes |
| 5 | 13 + prefix 7 | Production complete | Yes |
| 6 | 14 + prefix 7 | Hero arrives | Yes |
| 7 | 15 + prefix 7 | Diplomacy | Yes |
| 8 | 16 + prefix 7 | Combat detail | Yes |
| 9-11 | 17-19 + prefix 7 | Other events | Yes |

| Status | Details |
|---|---|
| NOT USED | Music system infrastructure exists in `src/sound/sound.c` but is never called from `main.c`. No music plays in our reconstruction. |

---

## STR# Resources (44 in app)

### Loading: Via GetIndString wrapper (`FUN_1005f6b0`)

The original game uses **~80+ GetIndString call sites** across the entire codebase. STR# resources are the central text lookup system, connecting game events to both display strings and resource names.

**Game Logic STR# Indices Used in Decompiled Code:**

| STR# Index | Dec | Category | Key Sub-indices |
|---|---|---|---|
| 3 | 3 | Scenario/game info strings | Scenario name, production info |
| 7 | 7 | Music resource name prefix | Prefix for all Tune/Head names |
| 8-19 | 8-19 | Music track name suffixes | Title, battle, turn, victory, production, hero, etc. |
| 0x14 | 20 | Fallback player name | "Player %d" |
| 0x15 | 21 | Default label text | Fallback text |
| 0x16 | 22 | Player number label | "Player %d" |
| 0x17 | 23 | Item/ruin data prefix | DAT resource name construction |
| 0x19 | 25 | Game event messages (11 sub-indices) | Movement, capture, hero, ruins, disband, alliance, diplomacy, scoring |
| 0x1A | 26 | City production labels (hotseat) | Production screen text |
| 0x1C | 28 | City production labels (network) | Network mode variant |
| 0x25 | 37 | UI click sound names | Sound name lookup |
| 0x26 | 38 | Combat animation sound | Sound name |
| 0x27 | 39 | Notification sound | Sound name |
| 0x2E-0x3A | 46-58 | Voice clip names | Army/territory/special voices |
| 0x3F | 63 | Fanfare sound name | Sound name |
| 0x40 | 64 | Combat sound names | Sub-indices 0,1,2,5 |
| 0x45 | 69 | Special event text | Special notification |

**Our STR# cache maps these original STR# resource IDs:**

| Our Define | STR# ID | Strings | Status |
|---|---|---|---|
| STR_COMMON_BUTTONS | 1000 | 8 | CACHED — Cancel, OK, No, Yes, Done, Quest, Reject, Close unsaved |
| STR_CITY_DIALOG | 3300 | 17 | CACHED — City dialog labels |
| STR_HERO_DIPLO | 3200 | 12 | CACHED — Hero/diplomacy labels |
| STR_CITY_CAPTURE | 3800 | 4 | CACHED — Occupy, Pillage, Sack, Raze |
| STR_STACK_INFO | 3600 | 9 | CACHED — Stack info labels |
| STR_HERO_INFO | 4000 | 4 | CACHED — Hero info labels |
| STR_SEARCH_TEMPLE | 4100 | 2 | CACHED — Searching, Take it |
| STR_COMBAT | 3500 | 20 | CACHED |
| STR_QUEST | 3700 | 16 | CACHED |
| STR_GAME_SETUP | 3100 | 20 | CACHED |
| STR_GAME_SETTINGS | 3900 | 3 | CACHED (original is Signpost!) |
| STR_REPORT | 3400 | 20 | CACHED |
| STR_VICTORY | 4200 | 1 | CACHED (original has "Quest" only) |
| STR_MISC | 4300 | 6 | CACHED (original is Diplomacy) |
| — | 1001 | 5 | NOT CACHED — Asset type names |
| — | 1002 | 5 | NOT CACHED — Directory names |
| — | 1005 | 3 | NOT CACHED — Movement mode labels |
| — | 1040 | 19 | NOT CACHED — Credits |
| — | 1060 | 2 | NOT CACHED — E-mail game |
| — | 2001 | 28 | NOT CACHED — Menu shortcut button labels |
| — | 2002 | 24 | NOT CACHED — Player names |
| — | 2010 | 6 | NOT CACHED — Window menu names |
| — | 3000 | 3 | NOT CACHED — Game setup dialog |
| — | 3010 | 24 | NOT CACHED — Setup options labels |
| — | 3020 | 14 | NOT CACHED — Player setup |
| — | 3021 | 24 | NOT CACHED — Game options |
| — | 3022 | 5 | NOT CACHED — Side setup |
| — | 3030 | 5 | NOT CACHED — AI/display modes |
| — | 3040 | 5 | NOT CACHED — Player states |
| — | 3420 | 7 | NOT CACHED — Resign dialog |
| — | 4010 | 7 | NOT CACHED — Hero levels |
| — | 4110 | 1 | NOT CACHED — Bless |
| — | 4120 | 4 | NOT CACHED — Sage dialog |
| — | 4420 | 1 | NOT CACHED — Military advisor |
| — | 4500 | 7 | NOT CACHED — Peace offer |
| — | 4510 | 2 | NOT CACHED — Victory |
| — | 4600 | 3 | NOT CACHED — Fight order |

**IMPORTANT:** Our STR# cache assigns arbitrary string indices (0, 1, 2...) that DON'T match the original STR# resource string ordering. The original GetIndString indices are 1-based and documented in `docs/resource_files.md`.

---

## DAT Resources (7 in app)

### Loading: Mostly by name via stream system

Most DAT resources are loaded by **constructed name** from scenario files, not by hardcoded ID. Only save-game DATs use numeric IDs:
- **DAT 10040-10042** — Player name data (written during save)
- **DAT 10050** — Extra scenario data (written during save, 170 bytes)

| DAT ID | Name | Size | Original Loading | Our Code | Status |
|---|---|---|---|---|---|
| 1000 | STRING | 14,152 | By name from scenario | GetResource('DAT ', 1000) | USED |
| 1001 | ERROR | 128 | By name from scenario | — | NOT USED |
| 1002 | FILE | 4,563 | By name (DOS file paths) | — | NOT USED (Mac version ignores) |
| 1003 | AREA | 378 | By name from scenario | — | NOT USED |
| 1004 | BUTTON | 15,411 | By name from scenario | — | NOT USED |
| 1010 | RANDOM | 42,336 | Via stream + CARD resources | — | NOT USED |
| 1011 | RANDOM.ITM | 1,018 | By name from scenario | GetResource('DAT ', 1011) | USED |

---

## View Resources (74 in app)

### Loading: Via MacApp DoCreateViews framework

Views are loaded by `GetResource('View', id)` in the MacApp window creation infrastructure (decompiled lines 158958, 159625). Each View defines a complete UI hierarchy.

| Status | Details |
|---|---|
| NOT USED | Our reconstruction builds all UI programmatically. None of the 74 View resources are loaded. The original uses them for every dialog/window. |

**This is the largest gap between original and reconstruction.** The original game's UI is entirely View-resource-driven. Our code manually positions every button, label, and control.

---

## Other Resources

### Used in Original, Not in Our Code

| Type | IDs | Original Purpose | Decompiled Location |
|---|---|---|---|
| CARD | 1000-3008 (27) | Random map tile patterns | Line 26509, stream-based |
| GFX | 2000-2003 (4) | Help system graphics | Lines 57569-57672, stream-based |
| HLP | 1000 (1) | Help text (40KB) | Line 91728, stream-based |
| Rgn | 1000-2002 (5) | QuickDraw hit-test regions | Not found directly |
| Roll | 3020 (1) | Player setup roller data | Line 79384, GetResource |
| Shor | 2000 (1) | Keyboard shortcuts | Lines 68086-68089, GetResource |
| SHLD | 1000 (1) | Shield set definition | Not found directly |
| Soun | 1000 (1) | Sound preferences (3 booleans) | Line 68374, from save-game |
| Volu | 1000 (1) | Volume preferences | Line 68386, from save-game |
| cctb | 2000 (1) | Control color table | Line 89205, GetResource |
| wctb | 1000 (1) | Window color table | Auto-associated |
| TxSt | 128-1030 (31) | Text style definitions | Line 141972, GetResource |
| acur | 256 (1) | Animated cursor (8 frames) | Line 112208, GetResource |
| crsr | 1000-1012 (13) | Color cursors | Only crsr 1001 used in our code |
| ppat | 1000-1002 (3) | Pixel patterns | Not found directly |
| MDEF | 1 (1) | Mercutio menu definition | Lines 142459, 143675 |
| WDEF | 3, 128, 129 (3) | Window definitions (Infinity Windoid, etc.) | Line 142459 |
| MBAR | 128 (1) | Menu bar | Line 143353, GetResource |

### Scenario File Resources (loaded from .W2SC files)

| Type | ID | Purpose |
|---|---|---|
| MAP | 10000 | Map tile data |
| RD | 10000 | Road autotile data |
| CTY | 10000 | City definitions |
| SPC | 10000 | Special location data |
| ITM | 10000 | Item definitions |
| SCN | 10000 | Scenario game state |
| SCN | 30000 | Random map template |
| SCEN | 10000 | Scenario metadata |
| SGN | 10000 | Signpost text data |
| AI | 10000 | AI configuration |
| NAME | 10000-30000 | Name tables (armies, cities, heroes, items, ruins) |
| PICT | 10000/10001 | Scenario preview images |

### Save Game Resources (read/written to .W2SG files)

| Type | ID | Purpose |
|---|---|---|
| Wind | 1000 | Window positions/state |
| List | 1000 | Options list state |
| Optn | 1000 | Game options |
| Temp | 1000 | Template options |
| Leve | 1000 | AI difficulty levels |
| Type | 1000 | Player types (human/computer) |
| Turn | 1000 | Turn counter |
| Mail | 1000-1007 | Multiplayer mail (per player) |
| MKik | 1000 | Modem kick flag |
| DAT | 10040-10042 | Player name data |
| DAT | 10050 | Extra scenario data (170 bytes) |
| PRNT | 1 | Print settings |

---

## Priority Gaps (Resources Not Used That Should Be)

### High Priority
1. **View resources (74)** — Original UI is entirely View-driven; we build manually
2. **Dialog background PICTs** — 3300 (city), 3800 (battle), 4100 (search), 4101 (temple), 4300 (diplomacy), 4410-4413 (medals), 4420 (advisor), 4501-4502 (peace/victory)
3. **Tune/Head (26 each)** — No music plays; infrastructure exists in sound.c but isn't wired to main.c
4. **Voice clips (snd 1008-1034)** — 27 voice narration clips not used
5. **DAT 1003 AREA** — Screen layout definitions that define correct dialog positions/sizes
6. **DAT 1004 BUTTON** — Button definitions (15KB) with correct positions, sizes, click regions

### Medium Priority
7. **cicn 3300-3303, 3310, 3320-3321** — City dialog status icons
8. **cicn 3500-3507** — Stack info icons
9. **cicn 3700-3701** — Ruins/search icons
10. **cicn 4300-4302** — Diplomacy state icons
11. **GFX 2000-2003** — Help system graphics
12. **HLP 1000** — Help text (40KB)
13. **CARD 1000-3008** — Random map tile patterns (needed for proper random maps)
14. **crsr 1000-1012** — Only 1001 is used; 12 other cursors available

### Low Priority
15. **STR# resources not cached** — 30 STR# lists not loaded (mostly setup/framework strings)
16. **TxSt 128-1030** — Text style definitions (we set fonts manually)
17. **ppat 1000-1002** — Pixel patterns
18. **Rgn 1000-2002** — Hit-test regions
19. **Roll 3020** — Player setup roller
20. **PICT 1002** — Marble bar placeholder
21. **PICT 3011** — Scrollbar thumb
