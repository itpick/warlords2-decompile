# Warlords II Decompilation - Project Status

## Build System
- Cross-compiled via Retro68 (powerpc-apple-macos-gcc)
- `deploy.sh` builds, creates PEF, assembles app with resource fork, deploys to SheepShaver
- `deploy.sh solo` for quick builds (main.c only)
- Asset folders (Terrain, Armies, Cities, Shields) deployed with resource forks intact

## What's Working

### Scenario Selection
- PICT 3000 background (crystal ball + dragons artwork)
- Scenario list with name, description, cities/ruins/players displayed in crystal ball area
- Random Map generation with terrain, cities, ruins
- File > Quit and Cmd+Q available from this screen

### Game Setup
- Faction selection with shield icons
- AI/Human toggle per faction
- Difficulty selection (Knight/Lord/Warlord)
- Neutral cities strength option (Average/Strong/Active)
- Game options (Hidden Map, Quests, Diplomacy, etc.)
- File > Quit and Cmd+Q available from this screen

### Main Map
- Terrain rendering from sprite sheets (PICT 30000-30009 loaded from Terrain folder)
- City icons from PICT 25000 sprite sheet, colored by faction owner (columns 0-7 + neutral)
- City names drawn below castle icons with faction colors
- Production timer shown on own cities
- Army sprites rendered at their map positions
- Shield bar at bottom of screen showing faction shields
- Minimap (overview window) with crosshair cursor (crsr 1001)
- Terrain tooltip on hover showing terrain name and movement cost
- Scrolling/viewport management
- Army validity filters (skip empty/out-of-bounds armies)

### Game Flow
- First turn: each faction gets 2 Light Infantry at their capital city
- Neutral cities start with 1 Heavy Infantry garrison (fortified)
- Capital cities colored with faction colors
- Hero hire prompt with marble background dialog
- Neutral city army production (Strong/Active modes via ProcessNeutralCities)
- City capture notifications
- City production dialog for own cities
- City info dialog for enemy/neutral cities
- AI army movement and targeting
- Combat resolution
- Turn management and round processing

### Menus
- Apple menu (About Warlords II)
- File menu (New, Open, Close, Save, Quit) - available from scenario selection onward
- Edit menu (Undo, Cut, Copy, Paste, Clear)
- Game-specific menus (4-9) added after game start

### Resource Integration (Feb 21 2026 - In Progress)
- Added STR# string loading infrastructure with lazy-loaded cached string tables
- 14 STR# resource IDs mapped: common buttons, city dialog, hero/diplo, city capture, stack info, hero info, search/temple, combat, quest, game setup, game settings, report, victory, misc
- DAT 1000 master string table loader (14KB of in-game text: defeat/victory messages, advisor quotes, terrain descriptions)
- DAT 1011 item definitions loader (39 ruin artifacts with names, categories, bonus values)
- ~450 of ~721 hardcoded Pascal strings replaced with GetCachedString() calls across 30+ dialogs
- Fallback strings ensure game works even without STR# resources loaded
- Sound system enhanced: SND_ORCH for ruin discovery, SND_DING for production complete, SND_DRAMATIC for player elimination
- Status window ABITS icons fixed: grid-aligned to 16x20 cells, reordered to Cities/Chest/Coins/Hand

### Gameplay Accuracy Fixes (Feb 28 2026)
- **Victory/defeat system**: defeated human players now converted to AI spectators instead of ending the entire game (68k CODE_130 FUN_000006d2). Post-game lockout (gs+0x158) prevents turn processing after victory dialog (68k CODE_080 FUN_00000e84).
- **Production movement**: spawned units now get FULL base movement (was incorrectly halved, 68k CODE_080 FUN_00001858 stores full value)
- **Production merge MP**: merging a spawned unit into existing army now zeros that army's current MP (can't move on spawn turn)
- **Production adjacent spawn**: new units search city tile + 8 adjacent tiles for merge targets and spawn locations (68k func_0x000049c0), was city-tile-only
- **Income clamp removed**: per-city income clamp [0,100] removed (68k CODE_042 has no per-city clamp, only total clamp [0,30000])
- **Upkeep minimum removed**: forced minimum 1 upkeep per unit removed (68k allows 0-cost units to have 0 upkeep)
- **Diagonal restriction**: IsDiagonalBlocked now checks terrain types 2/3 (Water/Shore in gs+0x711), was incorrectly using 5/6 (68k CODE_115 FUN_000014c2 checks '\x02'/'\x03')
- **Group movement cost**: all group members now deducted the LEAD army's cost (68k CODE_115 FUN_000003c4), was using individual per-unit costs
- **Turn limit**: turn > 201 now freezes game (68k CODE_130 returns early), was fabricating a winner based on city count
- **Elimination history**: player elimination now recorded in history events (HIST_EVT_ELIMINATE)
- Auto-war declaration: entering tile with enemy army auto-declares war (68k CODE_115 parity)
- ~~Production movement halving~~: CORRECTED above — 68k stores FULL movement, not halved
- City defense from production slots: CalcCityDefense(extCity) uses slot count (1 if <3, 2 if >=3)
- Production slot sorting: city slots sorted ascending by unit cost at init (68k CODE_072)
- Two-pass army selection: SelectNextArmy prefers ungrouped armies, then grouped (68k CODE_123)
- SelectNextArmy auto-ungroup: falling back to grouped army clears all player group tags (68k CODE_123)
- Space bar toggle: alternates viewport between army position and movement destination
- Guard/defend indicator: ext_state army_state=7 synced with fortify commands and cleared on move
- Plant Flag: now zeros MP, sets guard state, and auto-selects next army
- CenterViewportOn() helper: eliminates viewport centering code duplication
- Adjacent threat halt: movement stops when army has <2 MP and enemies nearby (68k CODE_115)
- Gold item bonus summed across ALL heroes (was breaking after first hero)
- History event types expanded from 6 to 12, matching 68k CODE_054 (war/peace/alliance/hero death/search)
- Color-coded history events: war=red, peace=green, alliance=blue, elimination=dark red
- Hero death recorded in history (HIST_EVT_HERO_KILL) when hero army is removed
- Report dialog horizontal bar charts per player (68k CODE_053)
- AI ruin search events recorded in history
- Army sprite height corrected to 29px (68k 0x1D), not 30px — row stride is 30 for spacing
- Hero gender check fixed: uses IsHeroFemale() scanning hero records, not army[0x2D] fortification state
- Selected army sprite drawn on top of fog (68k FUN_00003980) at offset (+8,+5), not just frame border
- Defend mode sprite changed to index 5 (68k FUN_000000ae), from incorrect index 0x0A
- City raze now sets owner to neutral (0x0F) not -1 — razed cities persist on map per 68k CODE_139
- Raze map tiles use faction-colored terrain: oldOwner*2 + 0xA0 base with 2x2 grid offsets
- Domination victory check now uses total city count (not armies) per 68k CODE_130
- Hero stats from unit type table: strength/movement from DAT 20000 entry 0x1C, not random (68k CODE_064)
- Hero initial command bonus: starts at 0, gained only through combat XP (was fabricated 1-3 random)
- Combat XP: only heroes (0x1C) earn XP, 1 per combat win (was all units, 3 for heroes, 1 for non-heroes)
- Non-hero units no longer gain XP or combat bonuses — initial cost/2 bonus is permanent (68k CODE_042)
- Movement reset: removed wrong +20 bonus for fortified armies (68k gives +20 to embarked only)
- Hero spawn location: picks random player CITY, not random army position (68k CODE_103)
- Fog of war: army turn-start visibility now uses full [-2,+3] (6x6) range matching 68k FUN_00002ab4 (was [-1,+1] for ground / [-2,+2] for flying)
- AI gold item bonus: summed across ALL heroes, not just first (was breaking after first hero — same bug as human side)
- ~~AI produced units: base movement now halved on spawn~~: CORRECTED Feb 28 — 68k stores FULL movement for all produced units
- AI movement reset: removed wrong +20 bonus for fortified armies (same bug as human side, now both match 68k)
- AI double-processing fix: removed duplicate income, production, movement reset, and group disbanding from ExecuteAITurn — ProcessStartOfTurn already handles all of these for ALL players (AI was getting 2x income and 2x production speed)
- Fog movement sight: flying units now get 3x3 (same as ground), not 5x5 — 68k FUN_00002c20 gives 5x5 only for naval mode or city tiles, NOT flying
- Terrain type mapping: entire codebase corrected to use 68k terrain types (0=Road, 1=Bridge, 2=Water, 3=Shore, 4=Forest, 5=Hills, 6=Mountains, 7=Plains, 8=Marsh, 9=Sea, 10=City, 11=Ruin). Fixed: kTerrTypeToDAT, sTerrainColors, defaultCosts, port detection (was checking types 8/9, now 2/9), naval movement init (was types 5/8, now 2/3), mountain impassable (was type 4, now 6), diagonal blocking (was types 2/3, now 5/6), terrain tooltip names, minimap fallback colors
- Army selection highlight: changed from FrameRect (square) to FrameOval (circle) matching original game
- Marble background: sMarbleGW changed from 16-bit depth to screen depth (0) — fixes green tint caused by 16→8-bit palette quantization
- Army sprite fix: default terrain army set now loads DAT 30000 unit type table from terrain file — previously sUnitTypesLoaded was false for default set, causing all produced units to use raw prodType as sprite index (e.g., Heavy Infantry at type index 6 got sprite 6 instead of correct sprite 1)
- Fortification defense bonus: changed from +1 to +2, matching 68k CODE_104
- Faction flag banners: loads PICT 30030-30037 from terrain file (320x18 per-faction flag strips), draws faction-colored waving flags behind army sprites on map — replaces fabricated strength pennant system that was not in the 68k original
- Hero items display: ShowArmyInspect dialog now shows carried items with name and bonus type (+str, +cmd, fly, move, +gold) when army contains a hero
- Naval unit detection: fixed 4 locations that read `*(short*)(ute+0x00)` (sprite index byte, always > 256) to correctly check DAT stat[19] (naval flag) at `ute[0x3C]` — movement costs, fight order filter, cursor selection
- Deep water movement fix: terrain type 9 (sea) now checks movement cost table for water traversal instead of hardcoded unit type 5 (was Catapults, not Navy)
- Sage dialog: Library search now shows interactive 4-button dialog (Items / Maps / Money / Done) matching 68k View 4120 — previously auto-applied map reveal without player choice
- Unit type entry format: documented correct layout (byte sprite_index + byte reserved + char[20] name + short[20] stats) with UTE_STAT_NAVAL (0x3C) and UTE_STAT_FLYING (0x36) defines
- **Guardian combat inversion**: CRITICAL — roll comparison was backwards (68k: roll <= threshold = LOSE, was coded as WIN). Base 90 meant 90% win rate in PPC vs ~10% in 68k. Fixed both human and AI search paths.
- **Hero leader bonus cap order**: 68k caps (hero_str + battle_items) at 9 BEFORE dividing by 2 (max bonus = 4). PPC was dividing first, cap at 9 (max bonus = 9, 2x too high). Fixed.
- **Temple guardian combat**: type 2 (temple) sites now require defeating a guardian before item is awarded (68k CODE_074 FUN_000021cc). Was giving items for free.
- **Resign item handling**: resign now calls RemoveArmy() to properly drop hero items (on land) or destroy them (at sea). Was orphaning items with status=3 pointing at zeroed army slots.
- **City capture tile preservation**: capture now preserves existing tile type byte, only updating the owner nibble (68k CODE_133). Was overwriting tile type to 0x0A.
- **Water terrain check for item loss**: hero death item check now uses terrain type 2 (Water) matching 68k CODE_042, was incorrectly checking type 9 (Sea).
- **Library money formula**: sage "Money" option now always gives Random(500) gold (68k CODE_066 FUN_00000630), was incorrectly using variable range (500/1000) based on site richness.
- **City vision removed**: cities no longer provide fog-of-war vision (68k FUN_00002ab4 only iterates armies). Fabricated 6x6 city vision loop removed from FogUpdatePlayer.
- **Naval fog reveal radius**: naval armies (any stack with a naval unit) now get 5x5 fog reveal instead of 3x3 (68k CODE_067 FUN_00002c20). Added ArmyIsNaval() helper checking UTE_STAT_NAVAL.
- **Diplomacy previous state tracking**: bits 6-7 of diplomacy byte now store previous turn state before convergence (68k CODE_052 FUN_000012e4), enabling change detection for notifications.
- **Hero gender persistence**: hero gender (0=male, 1=female) now written to gs+0x594+player*2 on hire (68k CODE_064 FUN_0000026e). Was determined by name only, never persisted — broke IsHeroFemale() for sprite remapping.
- **Embarked movement reset**: at turn start, embarked armies (status bit 0x1000) now get 20 + leftover movement instead of baseMov + leftover (68k CODE_080 FUN_000029ba). Ships move fast on water.
- **Ground item auto-pickup (5 call sites)**: CheckGroundItemPickup now called at all 5 movement locations: arrow-key, click-move, ExecutePathSteps, AI path, and AI goto-path (68k CODE_074)
- **Random turn order shuffle**: when sOptRandomTurns enabled (gs+0x122 != 0), turn order at gs+0x164 is shuffled 20 times using Fisher-Yates swaps (68k CODE_130 FUN_000005aa)
- **Hero name selection**: hero names now picked from full 20-name pool (male + female intermixed), was male-only (68k CODE_064)
- **Fog blocks human pathfinding**: unexplored tiles marked PATH_COST_BLOCK for human players in ComputeWavefrontPath, AI can pathfind through fog (68k CODE_115 FUN_000025b8)
- **Auto-fortification for unmoved armies**: armies with full movement points at turn end now auto-fortified (army[0x2d]=3), matching 68k CODE_080 FUN_00001a30 (was explicit Defend only)
- **Road/bridge movement cost**: default cost changed from 2 to 1 MP, matching 68k. Path preview dots now correctly prefer roads over plains (2 MP) and forest (3 MP). Road overlay on non-road terrain still reduces to 2 MP via gRoadData check.
- **Production spawn stall**: when no empty spawn tile available, production permanently stalls (timer=0), matching 68k CODE_080 line 668-675 (was retrying every turn with timer=1)
- **Terrain validation on production spawn**: adjacent spawn tiles now validated against sMoveCostTable — don't spawn land units on water (68k CODE_080 FUN_000017c4)
- **Vectoring teleport**: vectored production spawns army directly at destination city instead of production city with walk orders (68k CODE_080 uses instant 2-phase teleport; simplified to direct spawn)
- **Victory >50% city threshold**: single-player-left victory now requires winner to own >50% of all map cities (68k CODE_130 Condition B)
- **Diplomacy notification flag clearing**: bits 4-5 on self-diplomacy byte (gs+0x1582+player*8+player) cleared at turn start (68k CODE_080 FUN_00000172)
- **AI hero name/gender/record**: AI heroes now get proper name from 20-name pool, gender written to gs+0x594, and hero record at gs+0x1422 (was nameless/genderless)
- **City capture origin tracking**: city+0x0A origin player updated on capture: reset to 0x0F if recaptured by original owner, else save previous owner (68k CODE_133)
- **Fortification bit clearing**: map tile fortification bits (0x20) now cleared for all player armies before re-setting at turn start, preventing stale bits from moved armies

### Recent Fixes (Feb 20 2026)
- Army offset 0x2E changed from 2-byte short to 1-byte access (33 occurrences) — was corrupting origin_player at 0x2F on every move
- Movement cost cap at 4 removed — original allows costs up to 28
- Diplomacy table encoding changed from 0/1 to proper 0x2800 base value
- AI movement bonus parity — AI armies now get hero movement item bonuses (was human-only)
- Extended state army flags reset at turn start (moved_this_turn, move_counter)
- Player elimination check added to AdvanceToNextPlayer (0 cities + 0 armies = dead)
- AI income now includes hero gold item bonuses (was human-only)

## Known Issues / Not Yet Working

### Shield Colors
- Shield icons don't exactly match original game colors
- Root cause: at >8-bit depth, PlotCIcon uses raw cicn CLUT colors instead of palette-mapped colors
- Attempted fixes: SetDepth (SheepShaver ignores), GWorld pre-rendering, CLUT remapping
- Current approach: RemapShieldColors() modifies each cicn's embedded CLUT entries to nearest pltt 1000 palette color
- Original game renders correctly in SheepShaver, so something differs in our build

### Roads (Fixed Feb 27)
- Road rendering now uses mode-36 CopyBits (transparent blit), same pattern as army sprites
- Previous 1-bit GWorld mask approach (CopyMask) failed silently due to PixMap rowBytes bit-15 flag
- Background color sampled from PICT 30021 row 1 (y=40) for transparency key
- PICT 30021 layout: 13 tiles per row (confirmed from 68k decompilation), 2 rows of 40x40 tiles
- Autotile pass for random maps: 4-direction neighbor mask → 16 tile variants
- Road buffer always 112 wide, hardcoded

### Control Window Layout
- Original uses View 2000 with T3DCluster containing 26 T3DIconRadio buttons (100x30 each, icon+text)
- Our code draws a flat 4x7 grid of 27x27 icon-only buttons — doesn't match original
- Original has 2 TSunkenText areas at top for gold/status display
- Original has separate T3DButton entries for End Turn / Save+End Turn
- PICT 1020 "HELPGFX" shows toolbar sections: minimap, task, speed, end, skill, options, misc
- 15 CMNU resources define all toolbar commands

### Random Map Minimap Roads (Design Artifact, Not a Bug)
- Random scenarios show disconnected road stubs across water on the minimap
- Root cause: Manhattan routing (horizontal then vertical paths) creates stubs when paths cross water on procedurally generated island maps
- Campaign scenarios (e.g. Erythea) are fine because hand-designed maps avoid this
- This is a design artifact of the road generation algorithm, not a rendering bug

### Port/Anchor Labels
- Anchor/water port icons on cities are not labeled correctly
- Need to verify port detection and ensure correct icon rendering for coastal cities

### Stack Grouping Info Window (WIP)
- Goal: replace modal ShowStackDialog with inline stack UI in the gold info panel, matching the original game
- Helper functions extracted and ready: StackToggleSlot, StackGroupAll, StackUngroupAll, StackCommitGroups, StackRestoreBackup, StackTakeBackup
- DrawInfoStackUI (4x2 circular army grid) and HandleInfoStackClick written and wired into HandleUpdate/HandleMouseDown
- **Blocked**: info window not visually refreshing when selecting a multi-army tile. InvalRect is called via BuildStackArrays with GetPort/SetPort save/restore, but HandleUpdate is not receiving the update event. Needs investigation — may be a port context issue or event delivery problem
- Keyboard G shortcut for grouping works correctly

### Testing Automation (TODO)
- Set up InfiniteMac browser instance with Playwright for automated visual testing
- Enable quick build→deploy→screenshot→verify iterations instead of manual SheepShaver testing
- Would have caught the info window refresh issue much faster

### Missing Game Logic
- No save/load game implementation yet
- No unit production queue management (basic production timer exists)
- Sage dialog implemented (Items/Maps/Money/Done) — matches 68k View 4120
- Quest reward choice (4 options: item, site reveal, gold, allies) auto-applies instead of player choice
- Army selection after hero hire not fully implemented

### Map Data
- Map tile data lives in gMapTiles (separate from gGameState)
- Terrain lookup: mapData[(tileY * mapWidth + tileX) * 2] gives terrain graphic index
- Game state at gs[terrainIdx + 0x711] gives terrain type (0-11)

## Key Data Structures

### Game State (gGameState) Offsets
| Offset | Size | Description |
|--------|------|-------------|
| 0x000 | 160 | Faction names (8 x 20 bytes) |
| 0x0D0 | 16 | Player types (8 shorts: 0=human, 1+=AI) |
| 0x10C | 2 | Faction count |
| 0x110 | 2 | Current player index |
| 0x114 | 2 | Difficulty level |
| 0x116 | 2 | Hidden map flag |
| 0x136 | 2 | Current turn number |
| 0x138 | 16 | Player alive flags (8 shorts) |
| 0x164 | 16 | Turn order (8 shorts) |
| 0x186 | var | Player gold (offset by p * 0x14) |
| 0x711 | var | Terrain type lookup table |
| 0x810 | 2 | City/site count |
| 0x812 | var | City records (0x20 bytes each, max 40) |
| 0x1582 | 128 | Diplomacy table (8x8 matrix) |
| 0x1602 | 2 | Army count |
| 0x1604 | var | Army records (0x42 bytes each, max 100) |

### City Record (0x20 bytes at gs + 0x812 + i*0x20)
| Offset | Size | Description |
|--------|------|-------------|
| +0x00 | 2 | city_x |
| +0x02 | 2 | city_y |
| +0x04 | 2 | owner (0-7 = faction, 0xFF = neutral) |
| +0x06 | 2 | defense |
| +0x08 | 2 | income |
| +0x0A | 2 | name_index |
| +0x0C | 20 | production data |
| +0x18 | 1 | site_type (0=city, 2=temple, 5=ruin, 6=library) |

### Army Record (0x42 bytes at gs + 0x1604 + i*0x42)
| Offset | Size | Description |
|--------|------|-------------|
| +0x00 | 2 | x coordinate |
| +0x02 | 2 | y coordinate |
| +0x04 | 16 | name (15 chars + null) |
| +0x14 | 1 | sprite type |
| +0x15 | 1 | owner (0-7 = faction, 0x0F = neutral) |
| +0x16 | 4 | unit_types[0-3] (0xFF = empty slot) |
| +0x1A | 4 | base movement points per unit |
| +0x1E | 4 | hit points per unit |
| +0x2A | 2 | total strength display |
| +0x2C | 1 | active unit type |
| +0x2D | 1 | fortification state |
| +0x2E | 1 | current movement points (byte, NOT short) |
| +0x2F | 1 | origin player |
| +0x32 | 2 | movement orders |
| +0x34 | 2 | target_x |
| +0x36 | 2 | target_y |
| +0x3A | 8 | hero items (4 shorts) |

### Per-Player Stats Block (0x14 bytes at gs + 0x186 + p*0x14)
| Offset | Size | Description |
|--------|------|-------------|
| +0x00 | 2 | gold |
| +0x02 | 2 | reserved |
| +0x04 | 2 | capital_x |
| +0x06 | 2 | capital_y |
| +0x0E | 2 | start_x |
| +0x10 | 2 | start_y |
| +0x12 | 2 | player_index_1based |

### Hero Instance Records (0x2C bytes at gs + 0x1422 + p*0x2C)
| Offset | Size | Description |
|--------|------|-------------|
| +0x00 | 1 | active flag (1 = hero alive) |
| +0x03 | 1 | random_seed |
| +0x04 | 2 | hero_army_index |
| +0x06 | 20 | hero_name (char[20]) |

### Diplomacy Table (gs + 0x1582)
- 8x8 matrix of shorts, indexed by (p1 * 8 + p2) * 2
- Base value 0x2800 = at peace; 0x0000 = at war
- War check: value < 0x1000; Peace check: value >= 0x1000

### Extended State Per-Army Arrays (gExtState)
| Offset | Size | Description |
|--------|------|-------------|
| +0x56 | 100 | army_state[] (5=razed, 6=garrisoned, 7=guarding, 8=searching) |
| +0x11E | 100 | army_flags[] (bit0=moved, bit2=engaged, bit6=sea, bit7=air) |
| +0x182 | 100 | army_move_count[] |
| +0x1E6 | 100 | army_extra[] |

### Unit Type Data (from game state, scenario-driven)
| Offset | Size | Description |
|--------|------|-------------|
| gs+0xFB6 | 144 | Unit type names (9 entries x 0x10 bytes each) |
| gs+0x1046 | var | Unit type base stats |
