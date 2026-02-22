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

### Roads (Feb 21 fixes)
- CopyMask with depth-aware 1-bit mask: reads corner pixel (0,0) as background reference, compares at native depth (8/16/32-bit)
- Autotile pass added for random maps: converts boolean road flags to proper tile indices 1-17
- Pre-built scenarios load pre-computed autotile values from RD resource (confirmed via resource dump)
- Autotile mapping: 4-direction neighbor mask (N=1,E=2,S=4,W=8) → 16 tile variants + isolated fallback
- PICT 30021 layout: 16 tiles per row (640px / 40px = 16 cols), NOT 13 as RE_rendering.md suggests
- Road buffer always 112 wide, hardcoded (previously used sMapWidth variable)
- Background color: palette index 146 = (0xEF,0xEF,0xEF) light gray
- Previous bugs fixed: (1) all random roads wrote value 1, (2) mode 36 transparent CopyBits didn't match bg color at >8-bit depth

### Control Window Layout
- Original uses View 2000 with T3DCluster containing 26 T3DIconRadio buttons (100x30 each, icon+text)
- Our code draws a flat 4x7 grid of 27x27 icon-only buttons — doesn't match original
- Original has 2 TSunkenText areas at top for gold/status display
- Original has separate T3DButton entries for End Turn / Save+End Turn
- PICT 1020 "HELPGFX" shows toolbar sections: minimap, task, speed, end, skill, options, misc
- 15 CMNU resources define all toolbar commands

### Missing Game Logic
- No save/load game implementation yet
- No quest/ruin exploration rewards
- No unit production queue management (basic production timer exists)
- No hero items/artifacts system
- Hero instance records (gs+0x1422) not implemented — hero name lookup uses army index instead of slot
- Unit types hardcoded (6 generic) instead of reading from game state (gs+0xFB6, 9+ scenario types)
- Terrain descriptions in tooltips show name only, not descriptive text
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
