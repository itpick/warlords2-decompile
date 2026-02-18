# Warlords II (1993 Mac) - Reverse Engineered Data Structures

## Source: Ghidra-decompiled PowerPC binary
## Date: 2026-02-18

---

## Table of Contents
1. [Global Pointer Variables](#1-global-pointer-variables)
2. [Main Game State Structure (piRam1011735c)](#2-main-game-state-structure)
3. [Army Record (0x42 bytes each)](#3-army-record)
4. [Extended State Structure (piRam10117468)](#4-extended-state-structure)
5. [City Record (0x5c bytes each)](#5-city-record)
6. [Unit Type Definition Record (0x16 bytes each)](#6-unit-type-definition-record)
7. [Unit Class Record (6 bytes each)](#7-unit-class-record)
8. [Unit Instance Record (0x3e bytes each)](#8-unit-instance-record)
9. [Site/Ruin Record (0x20 bytes each)](#9-siteruin-record)
10. [Artifact/Item Record (0x1e bytes each)](#10-artifactitem-record)
11. [Map Tile Format](#11-map-tile-format)
12. [Diplomacy Table](#12-diplomacy-table)
13. [Terrain Movement Cost Table](#13-terrain-movement-cost-table)
14. [Per-Player Statistics Block](#14-per-player-statistics-block)
15. [Other Important Globals](#15-other-important-globals)

---

## 1. Global Pointer Variables

### Core Game Data Pointers (0x10117350-0x10117470 range)

| Address | Variable | Type | Role | Evidence |
|---------|----------|------|------|----------|
| 0x1011735c | `piRam1011735c` | `int*` | **Main game state pointer** | Dominant pointer; 0x110=current_player, 0x1602=army_count, army/map/terrain data |
| 0x10117468 | `piRam10117468` | `int*` | **Extended state pointer** (cities, per-army byte arrays) | 0x24a=city_count, 0x56=army_state[], 0x11e=army_flags[], 0x24c=city_base |
| 0x10117358 | `piRam10117358` | `int*` | **Map tile data pointer** | Accessed as `*ptr + y * 0xe0 + x * 2`; upper byte = terrain_id |
| 0x10117360 | `piRam10117360` | `int*` | **Unit type definition table** | Accessed as `*ptr + type_id * 0x16 + field`; 0x16 bytes per type |
| 0x10117364 | `piRam10117364` | `int*` | **Unit class definition table** | Accessed as `*ptr + class_id * 6 + field`; 6 bytes per class |
| 0x101175d0 | `piRam101175d0` | `int*` | **Unit instance/template table** | Accessed as `*ptr + index * 0x3e`; used by FUN_10049628 (unit lookup) |
| 0x10117370 | `piRam10117370` | `int*` | **Unknown data pointer** | Referenced in unit creation/army functions |
| 0x1011734c | `piRam1011734c` | `int*` | **Resource/asset data pointer** | Used with FUN_10117884 for resource loading (offset 0x88) |
| 0x10117350 | `piRam10117350` | `int*` | Game data pointer | Referenced in initialization |
| 0x10117354 | `piRam10117354` | `int*` | Game data pointer | Referenced in initialization |
| 0x10117368 | `piRam10117368` | `int*` | Unknown data pointer | |
| 0x10117414 | `piRam10117414` | `int*` | Unknown data pointer | |
| 0x1011741c | `piRam1011741c` | `int*` | Unknown data pointer | |
| 0x1011742c | `piRam1011742c` | `int*` | Unknown data pointer | |
| 0x10117470 | `piRam10117470` | `int*` | Unknown data pointer | |

### UI/Selection State

| Address | Variable | Type | Role | Evidence |
|---------|----------|------|------|----------|
| 0x1011677c | `psRam1011677c` | `short*` | **Currently selected army index** | Used as `*ptr * 0x42` for army record access; modified on selection |
| 0x10115f10 | `psRam10115f10` / `puRam10115f10` | `short*` | **Selected unit slot within army** (0-3) | Set to slot index; `*psVar4` in unit placement |
| 0x101176fc | `psRam101176fc` | `short*` | **AI pathfinding threshold** or move range | Compared against distances; used in AI decisions |
| 0x101174f4 | `psRam101174f4` | `short*` | **Cursor X position** (map tile) | Used with map tile access |
| 0x101174f8 | `psRam101174f8` | `short*` | **Cursor Y position** (map tile) | Used with map tile access |
| 0x101174b0 | `piRam101174b0` | `int*` | **Selection/target coordinates** | Accessed as `((short*)*ptr)[0]` and `[1]` for x,y |

### Player Economy

| Address | Variable | Type | Role | Evidence |
|---------|----------|------|------|----------|
| 0x1011762c | `iRam1011762c` | `int` | **Player gold (treasury) array base** | `player * 2 + iRam1011762c`; compared < income |
| 0x10117630 | `iRam10117630` | `int` | **Player income array base** | `player * 2 + iRam10117630`; compared > treasury |

### Resource/File Management

| Address | Variable | Type | Role | Evidence |
|---------|----------|------|------|----------|
| 0x10115d88 | `piRam10115d88` | `int*` | Resource handle pointer | Used with FUN_10117884 for data loading |
| 0x101176bc | `piRam101176bc` | `int*` | Window/dialog resource | Referenced in UI creation |
| 0x10115f14 | `piRam10115f14` | `int*` | Dialog/panel pointer | Unit selection panel |
| 0x101176e0 | `piRam101176e0` / `puRam101176e0` | `int*` | **Selected army coordinates** | Accessed as `*ptr` (x) and `(*ptr)[1]` (y) |

---

## 2. Main Game State Structure

**Pointer:** `piRam1011735c` (dereference once: `*piRam1011735c` = base address)

### Header / Global Settings (0x00 - 0x10F)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x00-0x8F | -- | (Unknown/internal) | |
| 0x8c | short[8]? | `player_colors_idx` | Indexed by player `*2+0x8c`, passed to FUN_10075ee0 |
| 0xa0 | short[8] | `player_color_primary` | `player*2+0xa0`; passed to FUN_1003206c (color setting) |
| 0xb0 | short[8] | `player_color_secondary` | `player*2+0xb0`; paired with 0xa0 in color functions |
| 0xc0 | short[8] | `player_faction` / `player_race` | `player*2+0xc0`; values 0,1,2,6; determines AI behavior |
| 0xd0 | short[8] | `player_type` | `player*2+0xd0`; 0=human, 1=AI; checked for turn control |

### Current Game State (0x110 - 0x182)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x110 | short | `current_player` | Used everywhere: `*(short*)(*gs + 0x110)`; compared with army owner |
| 0x114 | short | `combat_bonus` / `difficulty_level` | Used in combat calculations; compared to 0xf |
| 0x116 | short | `fog_of_war_enabled` | Boolean flag; checked before visibility calculations |
| 0x118 | short | `resource_offset_1` | Used as resource data offset with FUN_10117884 |
| 0x11a | short | `hero_questing_enabled` | Boolean flag; checked before hero quest logic |
| 0x11c | short | `allied_victory_enabled` | Boolean flag; checked with ext_state 0x38 |
| 0x11e | -- | (Per-army byte array in extended state, NOT here) | See Extended State section |
| 0x120 | short | `game_paused` / `message_pending` | Set to 0/1; checked for display logic |
| 0x122 | short | `random_events_enabled` | Boolean; checked before event generation |
| 0x124 | short | `vectoring_enabled` | Boolean; controls city vectoring production |
| 0x126 | short | `crazed_setting` | Checked for AI aggression |
| 0x128 | short | `city_defense_bonus` | Non-zero enables bonus; used in combat |
| 0x12a | short | `observers_allowed` | Boolean; allows non-player viewing |
| 0x12e | short | `hero_generation_enabled` | Boolean; checked before hero spawning |
| 0x130 | short | `resource_offset_2` | Used as data offset pointer |
| 0x132 | short | `save_data_field` | Loaded from save file |
| 0x134 | uint | `game_flags_bitfield` | Bit 27 and 28 checked/set; packed game options |
| 0x136 | short | `current_turn` | Used in production calculations; compared to 399, 799 |
| 0x138 | short[8] | `player_alive` | `player*2+0x138`; 0=eliminated, nonzero=alive |
| 0x148 | int | `resource_handle_3` | Pointer to resource data (loaded with FUN_10117884) |
| 0x150 | int | `resource_handle_4` | Pointer to resource data |
| 0x158 | short | `intro_movie_flag` | Boolean; 0/1; checked for intro playback |
| 0x15a | short | `sound_enabled` | Boolean; checked before playing sounds |
| 0x15c | int | `resource_handle_5` | Resource data (used with FUN_100522dc) |
| 0x15e | short | `game_started_flag` | Boolean; 0=not started |
| 0x160 | int | `resource_handle_6` | Resource data |
| 0x162 | short | `turn_display_number` | Displayed with FUN_10001dd0 (number rendering) |
| 0x164 | short[8] | `player_order` | `player*2+0x164`; turn order array |
| 0x170 | short | `resource_offset_3` | Data offset for resource loading |
| 0x176 | short | `viewport_scroll_y` | Map scroll Y offset; added to coordinates for map access |
| 0x178 | short | `viewport_scroll_x` | Map scroll X offset; used in `y*0xe0 + (x+scroll_x)*2` |
| 0x17a | short | `map_height` | Loop bound for Y iteration |
| 0x17c | short | `map_width` | Loop bound for X iteration |
| 0x17e | short | `viewport_center_x` | Used with FUN_10007e10 for view centering |
| 0x180 | short | `viewport_center_y` | Paired with 0x17e for camera position |
| 0x182 | short | `total_army_slots` / `max_armies` | Loop limit for army iteration; compared against counters |

### Per-Player Extended Data (0x186 - 0x223)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x186 | short[10]*8 | `player_stats[8]` (0x14 bytes per player) | Accessed as `player*0x14+0x186`; `[0]` = gold amount (compared to 0x28=40, 100, 399) |

Structure of each 0x14-byte player stats block (relative to player*0x14+0x186):
- +0x00 (short): Gold amount / treasury
- +0x02 to +0x12: Other stats (income, upkeep, etc.)

### Hero Data (0x224 - 0x5E3)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x224 | char[20]*40 | `hero_names[40]` | `hero_index * 0x14 + 0x224`; hero names (20 chars each) |
| 0x544 | short[40] | `hero_active[40]` | `hero_index*2+0x544`; 0=inactive, 1=active |
| 0x594 | short[40] | `hero_data_1[40]` | `hero_index*2+0x594`; set during hero creation |
| 0x5e4 | uint[40] | `hero_packed_data[40]` | `hero_index+0x5e4`; packed byte fields (bits 24-25, 26-31) |

### Terrain Movement Cost Table (0x60C - 0x710)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x60c | char[29]*9 | `terrain_move_cost[9][29]` | `terrain_type*0x1d + unit_class + 0x60c`; 0=impassable; 9 terrain types, 29 unit classes |

### Terrain Properties (0x711 - 0x80F)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x711 | char[~255] | `terrain_properties[]` | Indexed by terrain_id from map tile upper byte; values: 10=road, 11=water |

### Site/Ruin Data (0x810 - 0xD25)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x810 | short | `site_count` | Loop limit for site iteration; max ~40 sites |
| 0x812 | SiteRecord[N] | `sites[]` | 0x20 bytes each; see [Site/Ruin Record](#9-siteruin-record) |

### Artifact/Item Data (0xD26 - 0x1121)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0xd26 | ItemRecord[N] | `items[]` | 0x1e (30) bytes each; see [Artifact/Item Record](#10-artifactitem-record) |
| 0xd28 | -- | (field at offset 0x02 within item record) | type field: 1=active, 3=placed |

### Player Victory Points (0x1122 - 0x1131)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x1122 | short[8] | `player_victory_points` | `player*2+0x1122`; accumulated during gameplay (battles, captures) |

### Player Data 2 (0x1132 - 0x1141)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x1132 | short[8] | `player_data_2` | `index*2+0x1132`; set to current player or -1; possibly kill tracking |

### Diplomacy Table (0x1582 - 0x1601)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x1582 | uint[8][4] | `diplomacy[8][8]` (packed) | `player1*0x10+player2*2+0x1582`; bits 28-29 and 26-27 = relationship state (0=war, 2=allied) |

See [Diplomacy Table](#12-diplomacy-table) for full bitmask details.

### Army Count and Records (0x1602+)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x1602 | short | `army_count` | Loop limit for army iteration across the entire codebase |
| 0x1604 | ArmyRecord[N] | `armies[]` | 0x42 (66) bytes each; see [Army Record](#3-army-record) |

---

## 3. Army Record

**Size:** 0x42 (66) bytes per record
**Base:** `*piRam1011735c + army_index * 0x42 + 0x1604`
**Count:** at `*piRam1011735c + 0x1602`

All field offsets listed as ABSOLUTE (from game state base) and RELATIVE (within record).

| Abs Offset | Rel Offset | Size | Field Name | Evidence |
|------------|------------|------|------------|----------|
| 0x1604 | 0x00 | short | `x` | Map X coordinate; used in `map[y*0xe0 + x*2]`; compared with city x; used with FUN_100186cc, FUN_1001eff8 |
| 0x1606 | 0x02 | short | `y` | Map Y coordinate; used in `map[y*0xe0 + x*2]` |
| 0x1608 | 0x04 | char[16] | `name` | Passed as string to text rendering (FUN_1005f1d0, FUN_10001dd0); 16-byte buffer |
| 0x1618 | 0x14 | byte | `sprite_index` / `icon` | Single byte; displayed with drawing function; set during creation |
| 0x1619 | 0x15 | char | `owner` | Player index (0-7); compared to `current_player` (0x110); 0x0F = neutral/special |
| 0x161a | 0x16 | char[4] | `unit_types[4]` | Array of 4 unit type IDs; -1 (0xFF) = empty slot; indexed by unit_class for lookups |
| 0x161e | 0x1a | char[4] | `unit_moves[4]` | Movement points remaining for each unit; set from unit_instance 0x18 field |
| 0x1622 | 0x1e | char[4] | `unit_hits[4]` | Hit points for each unit; set from unit_instance 0x16 field |
| 0x1626 | 0x22 | char[4] | `unit_bonus[4]` | Combat bonus/modifier for each unit; set from unit_instance 0x1c field |
| 0x162a | 0x26 | char[4] | `unit_experience[4]` | Experience level for each unit; set from unit_instance 0x1a field |
| 0x162e | 0x2a | short | `strength_display` | Army strength value; displayed to player; used in combat resolution |
| 0x1630 | 0x2c | char | `active_unit_type` | Currently selected/leading unit type; 0xFF = none; set from unit_types[] |
| 0x1631 | 0x2d | char | `turns_fortified` / `hero_present` | Counter; decremented each turn; 0 = not fortified; >0 = defense bonus |
| 0x1632 | 0x2e | char | `unknown_2e` | Copied from 0x1631 in cascade operations |
| 0x1633 | 0x2f | byte | `origin_player` | Set from owner (0x1619); compared to current_player; tracks original owner |
| 0x1634 | 0x30 | short | `unknown_30` | Rarely accessed |
| 0x1636 | 0x32 | short | `has_orders` | 0=no orders, 1=has orders (moving to target); reset after arrival |
| 0x1638 | 0x34 | short | `target_x` | Move destination X; -1 (0xFFFF)=no target; -2 (0xFFFE)=special (vectoring) |
| 0x163a | 0x36 | short | `target_y` | Move destination Y; -1=no target; -2=vectoring |
| 0x163c | 0x38 | uint | `packed_data_1` | Packed byte fields; individual bytes extracted with shifts (bits 24-31, 16-23) |
| 0x163e | 0x3a | short | `hero_item_1` | Hero artifact slot; 0=empty; set to 0 on creation; cascade-zeroed |
| 0x1640 | 0x3c | short | `hero_item_2` | Hero artifact slot 2 |
| 0x1642 | 0x3e | short | `hero_item_3` | Hero artifact slot 3 |
| 0x1644 | 0x40 | short | `hero_item_4` | Hero artifact slot 4; end of record at 0x1644+2 = 0x1646 (0x42 bytes) |

### Army Record Key Relationships

- **Unit slots** (0x161a-0x161d): 4 unit type IDs. Each unit has parallel arrays for moves (0x161e), hits (0x1622), bonus (0x1626), experience (0x162a)
- **Sorting**: Units within army are sorted by priority (FUN_100496c8) - all parallel arrays are swapped together
- **Movement**: `has_orders` (0x1636) + `target_x/y` (0x1638/0x163a) control automated movement
- **Ownership**: `owner` (0x1619) checked against `current_player` (gs+0x110) for turn control
- **Creation**: When a unit is added to an army, its stats come from the unit instance table (0x3e records at piRam101175d0)

---

## 4. Extended State Structure

**Pointer:** `piRam10117468` (dereference once: `*piRam10117468` = base address)

### Global Fields

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x0c | short | `unknown_0c` | Referenced twice |
| 0x0e | short | `unknown_0e` | Referenced once |
| 0x20 | short | `combat_rounds` / `search_depth` | Used as loop count in pathfinding; min 1 |
| 0x22 | short | `unknown_22` | |
| 0x30 | short | `unknown_30` | |
| 0x32 | short | `unknown_32` | |
| 0x34 | short | `production_modifier` | Used in city production calculations |
| 0x38 | short | `allied_victory_check` | Checked alongside game state 0x11c |
| 0x40 | short | `unknown_40` | |
| 0x42 | short | `unknown_42` | Accessed once; `*piRam10117468 + 0x42` |
| 0x46 | short | `selected_city_index` | Compared to param_1; set to -1 (0xFFFF) to deselect |
| 0x48 | short | `ai_mode_flag` | 0=normal play, nonzero=AI processing |
| 0x4a | short | `unknown_4a` | |

### Per-Army Byte Arrays

These arrays are indexed by army index (0..army_count-1).

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x56 | byte[N] | `army_state[]` | Army movement state: 5=being razed, 6=in city, 7=guarding, 8=searching; checked in combat/AI |
| 0x11e | byte[N] | `army_flags[]` | Bit flags: bit0=moved_this_turn, bit2=engaged, bit4=unknown, bit5=port_access, bit6=sea_capable, bit7=air_capable |
| 0x182 | byte[N] | `army_moves_taken[]` | Counter; incremented each move; checked < 0xc for guarding armies; reset to 0 |
| 0x1e6 | byte[N] | `army_data_4[]` | Unknown per-army byte data |

### City Data (0x24A+)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x24a | short | `city_count` | Number of cities; loop limit for city iteration |
| 0x24c | CityRecord[N] | `cities[]` | 0x5c (92) bytes each; see [City Record](#5-city-record) |

---

## 5. City Record

**Size:** 0x5c (92) bytes per record
**Base:** `*piRam10117468 + city_index * 0x5c + 0x24c`
**Count:** at `*piRam10117468 + 0x24a`

All offsets are ABSOLUTE from extended state base.

| Abs Offset | Rel Offset | Size | Field Name | Evidence |
|------------|------------|------|------------|----------|
| 0x24c | 0x00 | short | `exists` / `active` | 0=destroyed/empty, nonzero=active city; gating check for all city operations |
| 0x24e | 0x02 | short | `producing_type` | Unit type being produced; -1 = none; used with FUN_1001c6fc |
| 0x250 | 0x04 | short | `garrison_army` | Index of garrisoned army; set from production; compared to army indices |
| 0x252 | 0x06 | short[4] | `production_slots[4]` | 4 army indices being produced; -1 = empty slot |
| 0x25a | 0x0e | short[12] | `build_queue[12]` | Unit types in production queue; -1 = empty; indexed by slot |
| 0x272 | 0x26 | short[12] | `build_queue_turns[12]` | Turns remaining for each queue item |
| 0x27e | 0x32 | short[6?] | `build_queue_data[6?]` | Additional queue data; overlaps with next field |
| 0x28a | 0x3e | short[4] | `vectoring_targets[4]` | City indices to vector production to; -1 = none |
| 0x292 | 0x46 | short[4+] | `vectoring_data_2` | Additional vectoring/production data |
| 0x2a4 | 0x58 | short | `production_turns` | Base turns to produce a unit; if flag bit 0x8 set -> 16; if bit 0x10 set -> 12 |
| 0x2a6 | 0x5a | short | `city_flags` | Bitmask (see below) |

### City Flags (0x2a6) Bitmask

| Bit | Hex | Meaning | Evidence |
|-----|-----|---------|----------|
| 0 | 0x01 | `revolt_type_1` | Set based on random check + 0x26 threshold |
| 1 | 0x02 | `revolt_type_2` | Set based on random check + 0x28 threshold |
| 2 | 0x04 | `revolt_type_3` | Set based on random check + 0x2a threshold |
| 3 | 0x08 | `has_port` | Checked for port production capability; army flag 0x80 |
| 4 | 0x10 | `has_tower` / `fortified` | Checked for tower production; army flag 0x08 |
| 5 | 0x20 | `has_temple` / `special` | Checked for special production; army flag 0x40 |
| 5-3 combined | 0x38 | `no_special_facilities` | When `& 0x38 == 0`, normal production only |

### City Record Key Relationships

- **garrison_army** (0x250): Points to the army defending the city. Used to look up army owner and position
- **production_slots** (0x252): Contains indices of armies being produced at this city. When complete, armies are spawned
- **build_queue** (0x25a): The list of unit types this city can build. -1 = no unit in that slot
- **vectoring_targets** (0x28a): Cities that completed units should be sent to. -1 = no vectoring
- **city_flags** (0x2a6): Controls what types of units the city can produce based on its facilities

---

## 6. Unit Type Definition Record

**Size:** 0x16 (22) bytes per record
**Base:** `*piRam10117360 + type_id * 0x16`
**Count:** Up to 0x1d (29) types (loop uses `sVar < 0x1d`)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x00 | short | `type_id` | Used as lookup key; first field in 0x3e records too |
| 0x02 | short | `cost` / `base_name_id` | Passed to FUN_1001ed3c; used in production cost |
| 0x04 | char | `unit_class` | Index into class table (piRam10117364); 0x1c (28) = hero class |
| 0x05 | char | `owner_restriction` / `faction` | Compared to player index; determines which faction can build |
| 0x06 | char | `defense` | Used in combat comparisons; cVar11 < cVar2 pattern |
| 0x07 | char | `attack` | Compared with thresholds (< 4, < 8); used in AI unit evaluation |
| 0x08 | char | `movement_points` | Base movement points; compared in AI (< 4); used for unit speed |
| 0x0a | char | `terrain_group` | Index into terrain bonus array; `hero_index * 0x14 + 0x224` |
| 0x0c | uint | `capabilities_flags` | See capabilities bitmask below |

### Unit Type Capabilities Flags (offset 0x0c)

| Bits | Mask | Meaning | Evidence |
|------|------|---------|----------|
| 0-6 | 0x7f | `movement_terrain_mask` | Lower 7 bits; terrain types this unit can enter |
| 9 | 0x200 | `can_search_ruins` | Checked before ruin searching |
| 12 | 0x1000 | `is_flying` / `special_movement` | Checked with `& 0x1000`; bypasses terrain restrictions |
| 12-15 | 0xf000 (>> 12 & 0xf) | `movement_category` | 0=ground, 2=naval, 3=flying; determines pathfinding |

---

## 7. Unit Class Record

**Size:** 6 bytes per class
**Base:** `*piRam10117364 + class_id * 6`
**Count:** Up to ~29 classes (0x1d)

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x00 | char | `class_active` / `exists` | Compared to '\0'; checked for valid class |
| 0x01 | char | `terrain_strength` | Used in strength calculations |
| 0x02 | char | `defense_modifier` | Used in combat defense calculations |
| 0x04 | char | `is_special` | Nonzero = special class (flying, naval); determines AI priority |
| 0x05 | char | `transport_type` | Compared to '\x01'; determines if unit can carry others |

---

## 8. Unit Instance Record

**Size:** 0x3e (62) bytes per record
**Base:** `*piRam101175d0 + index * 0x3e`
**Count:** Up to 0x1c (28) or 0x14 (20) active instances

These are the actual purchasable/producible unit templates, looked up by FUN_10049628.

| Offset | Size | Field Name | Evidence |
|--------|------|------------|----------|
| 0x00 | short | `type_id` | Matched against requested type in FUN_10049628 |
| 0x02-0x15 | -- | (Unit stats/name data) | Bulk-copied as 16 undefined4 values (64 bytes total) |
| 0x16 | short | `hit_points` | Copied to army field 0x1622 (unit_hits) |
| 0x18 | short | `move_points` | Copied to army field 0x161e (unit_moves) |
| 0x1a | short | `experience` | Copied to army field 0x162a (unit_experience) |
| 0x1c | short | `combat_bonus` | Copied to army field 0x1626 (unit_bonus) |
| 0x1e | short | `gold_cost` | Subtracted from player gold (0x186) when purchasing |

### Unit Instance Key Relationships

- FUN_10049628 searches this table for a matching type_id, then bulk-copies the entire record to a local buffer
- When adding a unit to an army (line ~47517), individual fields are extracted and placed into the army record's parallel arrays
- The gold_cost field at 0x1e is directly subtracted from the player's treasury

---

## 9. Site/Ruin Record

**Size:** 0x20 (32) bytes per record
**Base:** `*piRam1011735c + site_index * 0x20 + 0x812`
**Count:** at `*piRam1011735c + 0x810`

| Abs Offset | Rel Offset | Size | Field Name | Evidence |
|------------|------------|------|------------|----------|
| 0x812 | 0x00 | short | `x` | Map X coordinate; used in distance calculation FUN_1000a884 |
| 0x814 | 0x02 | short | `y` | Map Y coordinate; used in map tile lookup `map[y*0xe0+x*2]` |
| 0x816 | 0x04 | short | `data_1` | Unknown; possibly reward type |
| 0x82a | 0x18 | char | `site_type` | 2=temple/sage, 5=ruin (searchable), 6=library; determines interaction |
| 0x82b | 0x19 | char | `site_subtype` | Sub-data; used as index into item table: `subtype * 0x1e + 0xd26` |
| 0x82c | 0x1a | char | `unknown_1a` | |
| 0x82e | 0x1c | short | `active` | 0=inactive/searched, nonzero=available |
| 0x830 | 0x1e | short | `visited_bitmask` | One bit per player; `bit |= (1 << player)`; prevents re-visiting |

---

## 10. Artifact/Item Record

**Size:** 0x1e (30) bytes per record
**Base:** `*piRam1011735c + item_index * 0x1e + 0xd26`

| Abs Offset | Rel Offset | Size | Field Name | Evidence |
|------------|------------|------|------------|----------|
| 0xd26 | 0x00 | char | `item_class` | Referenced from site_subtype; values include 5, 6 |
| 0xd27 | 0x01 | char | `unknown_01` | |
| 0xd28 | 0x02 | char | `item_state` | 1=active/available, 3=placed on map; gating check |
| 0xd2a | 0x04 | short | `owner_army` / `target` | Army index that holds this item |
| 0xd2c | 0x06 | short | `location_x` / `bonus_1` | Map X or bonus value |
| 0xd2e | 0x08 | short | `location_y` / `bonus_2` | Map Y or bonus value |

---

## 11. Map Tile Format

**Pointer:** `piRam10117358`
**Access:** `*piRam10117358 + y * 0xe0 + x * 2`
**Map dimensions:** 0xe0 / 2 = 112 tiles wide (max width); height from game state 0x17a

Each tile is a 32-bit (uint) value when read as `*(uint*)(base + y * 0xe0 + x * 2)`:

| Bits | Mask | Meaning | Evidence |
|------|------|---------|----------|
| 0-15 | 0x0000FFFF | `tile_graphic` / `tile_variant` | Base tile appearance data |
| 16-19 | 0x000F0000 (>> 0x10 & 0xf) | `owner_player` | Player who controls this tile (0-7, or 8+ for neutral) |
| 22 | 0x00400000 (>> 0x16 & 1) | `visibility_flag` | Whether tile has been explored/seen |
| 24-31 | 0xFF000000 (>> 0x18) | `terrain_type` | Index into terrain properties table at gs+0x711; 10=road, 11=water |

Note: Tiles at offsets +2, +0xe0, +0xe2 from a base tile position are adjacent tiles (right, below, below-right), suggesting overlapping 4-byte reads cover 2x2 tile regions.

---

## 12. Diplomacy Table

**Location:** `*piRam1011735c + player1 * 0x10 + player2 * 2 + 0x1582`
**Size:** 8 x 8 matrix, each entry is 4 bytes (uint), but adjacent entries share bytes

Each uint entry contains packed diplomacy data:

| Bits | Mask | Meaning | Evidence |
|------|------|---------|----------|
| 26-27 | >> 0x1a & 3 | `relationship_from_p2_to_p1` | 0=at war, 2=allied |
| 28-29 | >> 0x1c & 3 | `relationship_from_p1_to_p2` | 0=at war, 2=allied |

Operations observed:
- Setting to war: `& 0xcfffffff` (clear bits 28-29)
- Setting to allied: `| 0x20000000` (set bit 29)
- Cascade: bits 28-29 copied to 26-27 (`(val >> 0x1c & 3) << 0x1a`)

---

## 13. Terrain Movement Cost Table

**Location:** `*piRam1011735c + terrain_type * 0x1d + unit_class + 0x60c`
**Dimensions:** 9 terrain types x 29 unit classes
**Entry size:** 1 byte (char)

Values:
- 0 = impassable
- >0 = movement cost in points

The terrain_type is obtained from the map tile's upper byte (>> 0x18), and the unit_class comes from the unit type definition field at offset 0x04.

---

## 14. Per-Player Statistics Block

**Location:** `*piRam1011735c + player_index * 0x14 + 0x186`
**Size:** 0x14 (20) bytes per player, 8 players

This block tracks per-player economic data. The first short is the gold treasury amount, used in:
- Production decisions (compared to 100)
- Hero hiring (compared to 399)
- AI aggression (compared to 0x28 = 40)

Additionally, two external arrays track player finances:
- `iRam1011762c + player * 2` = current treasury
- `iRam10117630 + player * 2` = income/upkeep target

---

## 15. Other Important Globals

### Game State Player Arrays (at *piRam1011735c)

All are short[8] arrays indexed by player (0-7):

| Offset | Field Name | Values | Evidence |
|--------|------------|--------|----------|
| 0xa0 | `player_color_primary[8]` | Color index | Passed to FUN_1003206c |
| 0xb0 | `player_color_secondary[8]` | Color index / resource offset | Paired with 0xa0 |
| 0xc0 | `player_faction[8]` | 0,1,2,6 | AI behavior/race type |
| 0xd0 | `player_type[8]` | 0=human, 1=AI | Turn control |
| 0x138 | `player_alive[8]` | 0=eliminated | Gating all player operations |
| 0x164 | `player_order[8]` | Player index | Turn order |
| 0x1122 | `player_score[8]` | Accumulated | Victory points |

### Extended State Per-Army Arrays (at *piRam10117468)

All are byte[N] arrays indexed by army index:

| Offset | Field Name | Values | Evidence |
|--------|------------|--------|----------|
| 0x56 | `army_state[N]` | 5=razed, 6=garrisoned, 7=guarding, 8=searching | Movement state machine |
| 0x11e | `army_flags[N]` | Bitmask | bit0=moved, bit2=engaged, bit6=sea, bit7=air |
| 0x182 | `army_move_count[N]` | Counter | Incremented per move; reset to 0 |
| 0x1e6 | `army_extra[N]` | Unknown | |

### Key Functions

| Address | Name | Purpose |
|---------|------|---------|
| FUN_10049628 | `GetUnitTypeInfo` | Looks up unit instance by type_id in 0x3e table; copies to buffer |
| FUN_100496c8 | `SortArmyUnits` | Sorts the 4 unit slots within an army by priority |
| FUN_1000f258 | `RemoveArmyFromCities` | Clears army index from all city production slots |
| FUN_10117884 | `ResourceRead` / `MemCopy` | Reads data from resource handles/files |
| FUN_1001e160 | `MoveArmyToTarget` | Initiates army movement toward coordinates |
| FUN_1001ed3c | `FindPath` | Pathfinding from army position to destination |
| FUN_1001eff8 | `CalcPathCost` | Calculates movement cost for a path |
| FUN_10018180 | `CenterViewport` | Centers the map view on coordinates |
| FUN_1000a884 | `CalcDistance` | Manhattan/euclidean distance between two points |
| FUN_1005f230 | `RandomRange` | Returns random number in range (used for combat, events) |
| FUN_1003206c | `SetDrawColor` | Sets drawing color from player palette |
| FUN_10001dd0 | `DrawNumber` | Renders a number/value on screen |
| FUN_1005f1d0 | `DrawString` | Renders text string on screen |
| FUN_1005f1a0 | `DrawStringAt` | Renders text at specific coordinates |
| FUN_10048ccc | `LockUnitData` | Locks/prepares unit data for access |
| FUN_10049010 | `UnlockUnitData` | Unlocks unit data after access |
| FUN_10047d80 | `GetUnitSlotInArmy` | Finds which slot a unit type occupies in an army |
| FUN_1000fe90 | `CalcArmyStrength` | Calculates total army combat strength |
| FUN_1001f648 | `FindNearestTarget` | AI function to find nearest enemy |
| FUN_1000f708 | `CanArmyEnterCity` | Checks if army can enter a city |
| FUN_10015030 | `CalcNavalMove` | Calculates naval movement options |
| FUN_10015980 | `GetTerrainMask` | Returns terrain accessibility mask for a unit |

---

## Summary of Structure Sizes

| Structure | Size (hex) | Size (dec) | Count | Location |
|-----------|-----------|------------|-------|----------|
| Game State Header | ~0x1604 | ~5636 | 1 | *piRam1011735c |
| Army Record | 0x42 | 66 | Variable (at gs+0x1602) | gs + 0x1604 |
| City Record | 0x5c | 92 | Variable (at ext+0x24a) | ext + 0x24c |
| Unit Type Definition | 0x16 | 22 | 29 (0x1d) | *piRam10117360 |
| Unit Class | 0x06 | 6 | ~29 | *piRam10117364 |
| Unit Instance Template | 0x3e | 62 | 28 (0x1c) | *piRam101175d0 |
| Site/Ruin Record | 0x20 | 32 | Variable (at gs+0x810) | gs + 0x812 |
| Artifact/Item Record | 0x1e | 30 | ~20 | gs + 0xd26 |
| Terrain Move Cost | 0x1d*9 | 261 | 1 (table) | gs + 0x60c |
| Diplomacy Entry | 0x04 | 4 | 64 (8x8) | gs + 0x1582 |
| Player Stats Block | 0x14 | 20 | 8 | gs + 0x186 |
| Hero Data | 0x14 | 20 (name) | 40 max | gs + 0x224 |

---

## Memory Layout Overview

```
*piRam1011735c (Game State):
  0x000 - 0x08F : Internal / unknown
  0x08C - 0x0BF : Player color indices [short*8 arrays]
  0x0C0 - 0x0CF : Player faction types [short*8]
  0x0D0 - 0x0DF : Player types (human/AI) [short*8]
  0x0E0 - 0x10F : Player data / resource offsets
  0x110         : Current player (short)
  0x112 - 0x135 : Game option flags (shorts)
  0x136         : Current turn number (short)
  0x138 - 0x147 : Player alive flags [short*8]
  0x148 - 0x175 : Resource handles and data
  0x176 - 0x17D : Viewport scroll position (x, y, w, h)
  0x17E - 0x185 : Viewport center and limits
  0x186 - 0x223 : Per-player stats blocks [0x14 * 8 = 0xA0 bytes]
  0x224 - 0x543 : Hero names [20 * 40 = 0x320 bytes]
  0x544 - 0x593 : Hero active flags [short * 40]
  0x594 - 0x5E3 : Hero data [short * 40]
  0x5E4 - 0x60B : Hero packed data [uint * 10?]
  0x60C - 0x710 : Terrain movement cost table [9 * 29 bytes]
  0x711 - 0x80F : Terrain properties lookup [~255 bytes]
  0x810         : Site count (short)
  0x812 - 0xD25 : Site/ruin records [0x20 * N]
  0xD26 - 0x1121: Artifact/item records [0x1e * N]
  0x1122 - 0x1131: Player victory points [short*8]
  0x1132 - 0x1141: Player tracking data [short*8]
  0x1142 - 0x1581: Unknown / additional data
  0x1582 - 0x1601: Diplomacy table [8*8 packed entries]
  0x1602        : Army count (short)
  0x1604+       : Army records [0x42 * N]

*piRam10117468 (Extended State):
  0x000 - 0x04B : Configuration/settings
  0x04C - 0x055 : Unknown
  0x056 - 0x0BD?: Per-army state bytes [byte * max_armies]
  0x0BE - 0x11D?: Unknown gap
  0x11E - 0x181?: Per-army flag bytes [byte * max_armies]
  0x182 - 0x1E5?: Per-army move counters [byte * max_armies]
  0x1E6 - 0x249?: Per-army extra data [byte * max_armies]
  0x24A         : City count (short)
  0x24C+        : City records [0x5c * N]
```
