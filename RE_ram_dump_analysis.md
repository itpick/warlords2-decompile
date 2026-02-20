# Warlords II - QEMU RAM Dump Analysis

## RAM Dump Details
- **File:** `/tmp/qemu_ram_ingame.bin` (512 MB)
- **Platform:** Big-Endian PowerPC Mac OS 9 (QEMU emulated)
- **Game State Base Address:** `0x12a22e80`
  - Note: The initially hypothesized address `0x12e7dc40` contained all zeros. The actual base was found by searching for known field patterns (num_players=5, difficulty=15) and verifying with faction names.
- **Game State Total Size:** `0x13180` (78,208 bytes), ending at `0x12a36000`
- **Scenario:** 8-player map, Turn 1, Player 0 (Argentia) is human, all others AI
- **Difficulty:** Warlord (15)

---

## Table of Contents
1. [Memory Layout Summary](#1-memory-layout-summary)
2. [Faction Names (+0x00 to +0x9F)](#2-faction-names)
3. [Player Color/Type Arrays (+0xA0 to +0xDF)](#3-player-colortype-arrays)
4. [Unknown Region (+0xE0 to +0x10F)](#4-unknown-region-0xe0-to-0x10f)
5. [Game Settings (+0x110 to +0x135)](#5-game-settings)
6. [Turn and Player State (+0x136 to +0x185)](#6-turn-and-player-state)
7. [Per-Player Statistics (+0x186 to +0x225)](#7-per-player-statistics)
8. [Hero Name Pool (+0x224 to +0x543)](#8-hero-name-pool)
9. [Hero Active Flags (+0x544 to +0x593)](#9-hero-active-flags)
10. [Hero Data Arrays (+0x594 to +0x60B)](#10-hero-data-arrays)
11. [Terrain Movement Cost Table (+0x60C to +0x710)](#11-terrain-movement-cost-table)
12. [Terrain Properties Table (+0x711 to +0x80F)](#12-terrain-properties-table)
13. [Site/Ruin Data (+0x810 to +0xD25)](#13-siteruin-data)
14. [Artifact/Item Data (+0xD26 to +0xFB5)](#14-artifactitem-data)
15. [Unit Type Names (+0xFB6 to +0x1045)](#15-unit-type-names)
16. [Unit Type Base Stats (+0x1046 to +0x105F)](#16-unit-type-base-stats)
17. [Zero Region (+0x1060 to +0x1121)](#17-zero-region)
18. [Player Victory Points (+0x1122 to +0x1131)](#18-player-victory-points)
19. [Player Data 2 (+0x1132 to +0x1141)](#19-player-data-2)
20. [Zero Region (+0x1142 to +0x1421)](#20-zero-region-0x1142-to-0x1421)
21. [Hero Instance Records (+0x1422 to +0x1581)](#21-hero-instance-records)
22. [Diplomacy Table (+0x1582 to +0x1601)](#22-diplomacy-table)
23. [Army Count and Records (+0x1602 to +0x2AA3)](#23-army-count-and-records)
24. [Post-Army Gap (+0x2AA4 to +0x3703)](#24-post-army-gap)
25. [Tile Map Data (+0x3704 to ~+0xC303)](#25-tile-map-data)
26. [Display Overlay Layer (~+0xC304 to ~+0xFCBF)](#26-display-overlay-layer)
27. [CMNU Command Table (~+0xFCC0 to +0xFD8F)](#27-cmnu-command-table)
28. [Uninitialized/Free Memory (+0xFD90 to +0x1317F)](#28-uninitializedfree-memory)

---

## 1. Memory Layout Summary

```
*piRam1011735c (Main Game State) at RAM address 0x12a22e80:

  +0x00000 - +0x0009F : Faction names [char[20] * 8]
  +0x000A0 - +0x000CF : Player color/faction arrays [short[8] * 3]
  +0x000D0 - +0x000DF : Player types (human/AI) [short[8]]
  +0x000E0 - +0x0010F : Unknown / internal state
  +0x00110 - +0x00135 : Game settings and option flags
  +0x00136 - +0x00185 : Turn state, alive flags, turn order, viewport
  +0x00186 - +0x00225 : Per-player statistics [0x14 * 8 = 0xA0 bytes]
  +0x00224 - +0x00543 : Hero name pool [char[20] * 40]
  +0x00544 - +0x00593 : Hero active flags [short * 40]
  +0x00594 - +0x005E3 : Hero data 1 [short * 40]
  +0x005E4 - +0x0060B : Hero packed data [uint * 10?]
  +0x0060C - +0x00710 : Terrain movement cost table [9 * 29 bytes]
  +0x00711 - +0x0080F : Terrain properties lookup [255 bytes]
  +0x00810 - +0x00D25 : Site/ruin records [short count + 0x20 * N]
  +0x00D26 - +0x00FB5 : Artifact/item records [0x1E * 22]
  +0x00FB6 - +0x01045 : Unit type names [0x10 * 9]
  +0x01046 - +0x0105F : Unit type base stats [short array]
  +0x01060 - +0x01121 : Zero / unused
  +0x01122 - +0x01131 : Player victory points [short * 8]
  +0x01132 - +0x01141 : Player tracking data [short * 8]
  +0x01142 - +0x01421 : Zero / unused (736 bytes)
  +0x01422 - +0x01581 : Hero instance records [0x2C * 8]
  +0x01582 - +0x01601 : Diplomacy table [8x8 shorts]
  +0x01602 - +0x02AA3 : Army count + army records [short + 0x42 * 80]
  +0x02AA4 - +0x03703 : Post-army gap (stale data, some map metadata)
  +0x03704 - +0x0C303 : Tile map data [159 rows * 0xE0 stride]
  +0x0C304 - +0x0FCBF : Display overlay layer (~41 rows * 0xE0)
  +0x0FCC0 - +0x0FD8F : CMNU command mapping table + internal handles
  +0x0FD90 - +0x1317F : Uninitialized memory (0xFF fill)
```

---

## 2. Faction Names

**Offset:** +0x00 to +0x9F
**Format:** 8 strings of 20 bytes each (null-terminated, padded)
**Total:** 160 bytes

| Index | Offset | Name | Raw (first 20 bytes) |
|-------|--------|------|---------------------|
| 0 | +0x00 | "Argentia" | `417267656e74696100...` |
| 1 | +0x14 | "Frost Giants" | `46726f73742047696...` |
| 2 | +0x28 | "Dark Dwarves" | `4461726b20447761...` |
| 3 | +0x3C | "Ogre Lords" | `4f677265204c6f72...` |
| 4 | +0x50 | "Treelords" | `547265656c6f7264...` |
| 5 | +0x64 | "Mathreans" | `4d617468726561...` |
| 6 | +0x78 | "Horse Kings" | `486f727365204b69...` |
| 7 | +0x8C | "Deathmaster" | `44656174686d6173...` |

---

## 3. Player Color/Type Arrays

### Player Color Primary (+0xA0, short[8])

| Index | Value | Notes |
|-------|-------|-------|
| 0 | 0 | Argentia |
| 1 | 7 | Frost Giants |
| 2 | 8 | Dark Dwarves |
| 3 | 9 | Ogre Lords |
| 4 | 10 | Treelords |
| 5 | 6 | Mathreans |
| 6 | 5 | Horse Kings |
| 7 | 255 | Deathmaster (special) |

### Player Color Secondary (+0xB0, short[8])

| Index | Value |
|-------|-------|
| 0-6 | 255 (0xFF) |
| 7 | 9 |

### Player Faction/Race (+0xC0, short[8])

| Index | Value | Notes |
|-------|-------|-------|
| 0 | 2 | Argentia (faction type 2) |
| 1-7 | 0 | All others (faction type 0) |

### Player Type (+0xD0, short[8])

| Index | Value | Meaning |
|-------|-------|---------|
| 0 | 0 | Human |
| 1 | 1 | AI |
| 2 | 1 | AI |
| 3 | 1 | AI |
| 4 | 1 | AI |
| 5 | 1 | AI |
| 6 | 1 | AI |
| 7 | 1 | AI |

---

## 4. Unknown Region (+0xE0 to +0x10F)

This 48-byte region between the player type array and game settings is all zeros in this dump. Per the decompiled source, `+0x8C` may contain `player_colors_idx[8]` (short array), but at +0x8C the faction name data still occupies those bytes. The +0xE0 to +0x10F range is likely reserved for additional player configuration data or resource offsets.

---

## 5. Game Settings

**Offset:** +0x110 to +0x135

| Offset | Size | Field | Value | Notes |
|--------|------|-------|-------|-------|
| +0x110 | short | `current_player` | 0 | Player 0 (Argentia) |
| +0x112 | short | `num_active_players` | 5 | 5 of 8 players active? |
| +0x114 | short | `difficulty_level` | 15 | Warlord (max) |
| +0x116 | short | `fog_of_war_enabled` | 0 | Disabled |
| +0x118 | short | `resource_offset_1` | 0 | |
| +0x11A | short | `hero_questing_enabled` | 0 | Disabled |
| +0x11C | short | `allied_victory_enabled` | 0 | Disabled |
| +0x11E | short | (unknown) | 0 | |
| +0x120 | short | `game_paused` | 0 | Not paused |
| +0x122 | short | `random_events_enabled` | 0 | Disabled |
| +0x124 | short | `vectoring_enabled` | 0 | Disabled |
| +0x126 | short | `crazed_setting` | 0 | Normal neutrals |
| +0x128 | short | `city_defense_bonus` | 0 | No bonus |
| +0x12A | short | `observers_allowed` | 1 | Enabled |
| +0x12C | short | (unknown) | 1 | |
| +0x12E | short | `hero_generation_enabled` | 0 | Disabled |
| +0x130 | short | `resource_offset_2` | 0 | |
| +0x132 | short | `save_data_field` | 0 | |
| +0x134 | uint32 | `game_flags_bitfield` | 0x00670001 | Bits 0, 16, 17, 18, 21, 22 set |

### Game Flags Bitfield Breakdown (0x00670001)

```
Bit  0 (0x00000001): SET - game initialized / in progress
Bit 16 (0x00010000): SET - unknown
Bit 17 (0x00020000): SET - unknown
Bit 18 (0x00040000): SET - unknown
Bit 21 (0x00200000): SET - unknown
Bit 22 (0x00400000): SET - unknown
```

---

## 6. Turn and Player State

### Current Turn (+0x136)

| Offset | Size | Field | Value |
|--------|------|-------|-------|
| +0x136 | short | `current_turn` | 1 |

### Player Alive Flags (+0x138, short[8])

| Index | Value | Status |
|-------|-------|--------|
| 0-7 | 1 | All alive |

### Secondary Player Flags (+0x148, short[8+2])

| Offset | Value | Notes |
|--------|-------|-------|
| +0x148 | 1 | Player 0 |
| +0x14A | 1 | Player 1 |
| +0x14C | 1 | Player 2 |
| +0x14E | 1 | Player 3 |
| +0x150 | 1 | Player 4 |
| +0x152 | 1 | Player 5 |
| +0x154 | 1 | Player 6 |
| +0x156 | 1 | Player 7 |
| +0x158 | 0 | (padding?) |
| +0x15A | 1 | (extra flag) |
| +0x15C-+0x163 | 0 | Zeros |

These likely correspond to the RE doc's `resource_handle_3` through `game_started_flag` fields, but all read as simple 0/1 flags in this dump.

### Turn Order (+0x164, short[8])

| Index | Value |
|-------|-------|
| 0 | 0 |
| 1 | 1 |
| 2 | 2 |
| 3 | 3 |
| 4 | 4 |
| 5 | 5 |
| 6 | 6 |
| 7 | 7 |

Sequential order -- no custom turn ordering in this game.

### Turn Position (+0x174)

| Offset | Size | Field | Value |
|--------|------|-------|-------|
| +0x174 | short | `turn_position` | 1 |

Position in the turn_order array for the active player.

### Viewport and Map Dimensions (+0x176 to +0x182)

| Offset | Size | Field | Value | Notes |
|--------|------|-------|-------|-------|
| +0x176 | short | `viewport_scroll_y` | 133 | Map Y scroll offset |
| +0x178 | short | `viewport_scroll_x` | 20 | Map X scroll offset |
| +0x17A | short | `map_height` | 143 | Visible map height (rows) |
| +0x17C | short | `map_width` | 31 | Visible map width (tiles visible in viewport) |
| +0x17E | short | `viewport_center_x` | 25 | Camera center X |
| +0x180 | short | `viewport_center_y` | 137 | Camera center Y |
| +0x182 | short | `max_armies` | 81 | Maximum army slot count |

**Note:** The actual tile map extends to row 158 (159 total rows), which is larger than the `map_height` field (143). The `map_height` likely represents the scenario's logical map height, while the tile array has additional padding rows.

---

## 7. Per-Player Statistics

**Offset:** +0x186
**Size:** 0x14 (20) bytes per player, 8 players
**Total:** 0xA0 (160) bytes

### Per-Player Stats Structure (0x14 bytes each)

| Rel Offset | Size | Field | Notes |
|------------|------|-------|-------|
| +0x00 | short | `gold` | Current treasury |
| +0x02 | short | (zero) | Reserved / upkeep? |
| +0x04 | short | `capital_x` | Capital city X coordinate |
| +0x06 | short | `capital_y` | Capital city Y coordinate |
| +0x08 | short | (zero) | |
| +0x0A | short | (zero) | |
| +0x0C | short | (zero) | |
| +0x0E | short | `start_x` | Starting position X (duplicate of capital) |
| +0x10 | short | `start_y` | Starting position Y (duplicate of capital) |
| +0x12 | short | `player_index_1based` | 1-based player index |

### Actual Values

| Player | Gold | Capital (X,Y) | Index |
|--------|------|---------------|-------|
| P0 Argentia | 158 | (25, 137) | 1 |
| P1 Frost Giants | 65 | (42, 148) | 2 |
| P2 Dark Dwarves | 78 | (104, 8) | 3 |
| P3 Ogre Lords | 56 | (89, 131) | 4 |
| P4 Treelords | 71 | (18, 55) | 5 |
| P5 Mathreans | 121 | (69, 70) | 6 |
| P6 Horse Kings | 137 | (45, 25) | 7 |
| P7 Deathmaster | 79 | (80, 91) | 21353* |

*Player 7's index field (21353 = 0x5369) appears corrupted or has a different meaning for the last player. The pattern 0x5369 is ASCII "Si" which may be the beginning of "Sir" overlapping from hero data.

---

## 8. Hero Name Pool

**Offset:** +0x224
**Format:** 40 hero name slots, each 20 bytes (char[20], null-terminated)
**Total:** 0x320 (800) bytes, ending at +0x543

In this dump, only the first hero slot is populated:

| Index | Name |
|-------|------|
| 0 | "Sir Accolon" |
| 1-39 | (empty) |

---

## 9. Hero Active Flags

**Offset:** +0x544
**Format:** short[40]
**Total:** 0x50 (80) bytes, ending at +0x593

| Index | Value | Status |
|-------|-------|--------|
| 0 | 1 | Active (Sir Accolon) |
| 1-39 | 0 | Inactive |

---

## 10. Hero Data Arrays

**Offset:** +0x594 to +0x60B

| Range | Size | Field | Notes |
|-------|------|-------|-------|
| +0x594 | short[40] | `hero_data_1[]` | Per-hero additional data. All zero in this dump. |
| +0x5E4 | uint[10?] | `hero_packed_data[]` | Packed byte fields (bits 24-25, 26-31). All zero. |

---

## 11. Terrain Movement Cost Table

**Offset:** +0x60C to +0x710
**Format:** 9 terrain types x 29 unit classes
**Entry size:** 1 byte (0 = impassable, >0 = movement cost)

Each of the 9 terrain types has 29 bytes of movement costs indexed by unit class. In this dump, all 9 terrain types share the same cost pattern:
```
[8, 3, 1, 6, 12, 28, 5, 11, 16, 17, 13, 0, 9, 10, 2, ...]
```
The value 0 at class index 11 means that unit class is impassable for all terrains. 28 of the 29 unit classes are passable.

---

## 12. Terrain Properties Table

**Offset:** +0x711 to +0x80F
**Format:** byte[255] indexed by terrain tile index
**Each byte maps a tile graphic index to its gameplay terrain type**

Key terrain type values observed:
| Property Value | Terrain Type | Example Tile Indices |
|----------------|-------------|---------------------|
| 3 | Forest/Hills | 16-28 |
| 7 | Plains/Open | 1, 9 |
| 8 | Mountain/Bridge | 13-15, 29 |
| 9 | Grass (default) | 0, 2-8 |
| 11 | Water | 10-12 |

185 of 255 entries are non-zero, indicating 185 valid tile indices are defined in this scenario's terrain set.

---

## 13. Site/Ruin Data

**Offset:** +0x810
**Format:** short count + SiteRecord[N] at +0x812

| Field | Value |
|-------|-------|
| `site_count` (+0x810) | 40 |

### Site Record Format (0x20 = 32 bytes each)

| Rel Offset | Size | Field | Notes |
|------------|------|-------|-------|
| +0x00 | short | `x` | Map X coordinate |
| +0x02 | short | `y` | Map Y coordinate |
| +0x04 | char[20] | `name` | Site name (null-terminated) |
| +0x18 | byte | `site_type` | 1=temple, 2=sage, 3=ruin, 4=library, 5=searchable ruin, 6=library |
| +0x19 | byte | `site_subtype` | Sub-data; index into item table |
| +0x1A | byte | (unknown) | |
| +0x1B-+0x1B | -- | (padding) | |
| +0x1C | short | `active` | 0=searched/inactive, nonzero=available |
| +0x1E | short | `visited_bitmask` | One bit per player |

### Sample Sites

| Index | Name | Position | Type | Subtype | Active | Visited |
|-------|------|----------|------|---------|--------|---------|
| 0 | "Ancient Temple" | (20, 68) | 1 (temple) | 0 | 0 (inactive) | 0x00FF |
| 1 | "Exokhold" | (39, 55) | 2 (sage) | 13 | 1 (active) | 0x00FF |
| 2 | "Arar's Tomb" | (78, 57) | 2 (sage) | 21 | 0 | 0x00FF |
| 3 | "Kirilhold" | (91, 65) | 4 (library) | 0 | 0 | 0x00FF |
| 4 | "Ruins of Araz" | (4, 102) | 3 (ruin) | 0 | 0 | 0x00FF |

The `visited_bitmask` of 0x00FF indicates all 8 players have "discovered" these sites (or it means something else in the context of turn 1 initialization).

---

## 14. Artifact/Item Data

**Offset:** +0xD26
**Format:** ItemRecord[22]
**Record size:** 0x1E (30) bytes each
**Total:** 0x294 (660) bytes, ending at +0xFBA

### Item Record Format (0x1E = 30 bytes)

| Rel Offset | Size | Field | Notes |
|------------|------|-------|-------|
| +0x00 | byte | `item_class` | Item category (1=weapon, 2=armor, 5=staff, 6=movement, 7=siege, 8=standard) |
| +0x01 | byte | `bonus_value` | Combat bonus granted |
| +0x02 | byte | `item_state` | 0=inactive, 2=placed on map, 3=held by hero |
| +0x03 | byte | `location_data` | Varies (site index for placed items?) |
| +0x04 | short | `owner_or_site` | Army index / site reference |
| +0x06 | short | (zero) | |
| +0x08 | short | (zero) | |
| +0x0A | char[20] | `name` | Item name (null-terminated) |

### All Items

| Idx | Class | Bonus | State | Name |
|-----|-------|-------|-------|------|
| 0 | 8 (standard) | 0 | 3 (held) | "Giant Standard" |
| 1 | 8 (standard) | 0 | 0 | "Dwarf Standard" |
| 2 | 8 (standard) | 0 | 0 | "Orc Standard" |
| 3 | 8 (standard) | 0 | 0 | "Elf Standard" |
| 4 | 8 (standard) | 0 | 0 | "Blue Standard" |
| 5 | 8 (standard) | 0 | 0 | "Horse Standard" |
| 6 | 8 (standard) | 0 | 0 | "Evil Standard" |
| 7 | 8 (standard) | 0 | 0 | "Wings of the Eagle" |
| 8 | 5 (staff) | 0 | 2 (placed) | "Staff of Ruling" |
| 9 | 2 (armor) | 3 | 2 (placed) | "Ring of Power" |
| 10 | 2 (armor) | 2 | 2 (placed) | "Boots of Speed" |
| 11 | 6 (movement) | 0 | 2 (placed) | "Ring of Travel" |
| 12 | 6 (movement) | 0 | 2 (placed) | "Cup of Haste" |
| 13 | 6 (movement) | 0 | 2 (placed) | "Staff of Movement" |
| 14 | 6 (movement) | 0 | 2 (placed) | "Wings of Flying" |
| 15 | 5 (staff) | 0 | 0 | "Okradon's Pouch" |
| 16 | 7 (siege) | 4 | 2 (placed) | "Horn of Siege" |
| 17 | 1 (weapon) | 3 | 2 (placed) | "Firesword" |
| 18 | 1 (weapon) | 1 | 2 (placed) | "Orb of Loriel" |
| 19 | 2 (armor) | 1 | 2 (placed) | "Armour of Gods" |
| 20 | 1 (weapon) | 3 | 2 (placed) | "Silver Purse" |
| 21 | 7 (siege) | 4 | 2 (placed) | (unnamed, item data continues) |

Item 0 ("Giant Standard") has state=3, meaning it is currently held by a hero. The remaining standards (items 1-7) are state=0 (inactive/unclaimed).

---

## 15. Unit Type Names

**Offset:** +0xFB6
**Format:** 9 entries at 0x10 (16) bytes each
**Note:** Each entry has 6 leading zero bytes, then 10 bytes for the name

| Index | Offset | Name |
|-------|--------|------|
| 0 | +0xFB6 | "Troll" |
| 1 | +0xFC6 | "Giant" |
| 2 | +0xFD6 | "Wolf" |
| 3 | +0xFE6 | "Goblin" |
| 4 | +0xFF6 | "Dragon" |
| 5 | +0x1006 | "Demon" |
| 6 | +0x1016 | "Devil" |
| 7 | +0x1026 | "Wizard" |
| 8 | +0x1036 | "Ghost" |

---

## 16. Unit Type Base Stats

**Offset:** +0x1046 to +0x105F

A short array following the unit type names. Values observed:

| Offset | Value | Possible Meaning |
|--------|-------|-----------------|
| +0x1046 | 0 | (padding/separator) |
| +0x1048 | 5 | Unit stat for type 1? |
| +0x104A | 7 | |
| +0x104C | 4 | |
| +0x104E | 3 | |
| +0x1050 | 8 | |
| +0x1052 | 8 | |
| +0x1054 | 8 | |
| +0x1056 | 8 | |
| +0x1058 | 7 | |

These 9 values (indices 1-9) may correspond to the 9 unit types' base combat strength or some other per-unit-type parameter. The pattern [5, 7, 4, 3, 8, 8, 8, 8, 7] could represent base hit points, attack values, or movement points.

---

## 17. Zero Region (+0x1060 to +0x1121)

194 bytes of zeros. Reserved or unused in this game state.

---

## 18. Player Victory Points

**Offset:** +0x1122
**Format:** short[8]

| Player | Points | Faction |
|--------|--------|---------|
| P0 | 3 | Argentia |
| P1 | 6 | Frost Giants |
| P2 | 3 | Dark Dwarves |
| P3 | 4 | Ogre Lords |
| P4 | 6 | Treelords |
| P5 | 4 | Mathreans |
| P6 | 8 | Horse Kings |
| P7 | 7 | Deathmaster |

These are non-zero at Turn 1, suggesting they represent initial victory point values based on starting position/resources rather than accumulated gameplay scores.

---

## 19. Player Data 2

**Offset:** +0x1132
**Format:** short[8]

| Index | Value |
|-------|-------|
| 0-7 | -1 (0xFFFF) |

All entries are -1, likely indicating "no data" or "uninitialized." Per the RE doc, this may track kills or some per-player counter.

---

## 20. Zero Region (+0x1142 to +0x1421)

736 bytes of zeros. This large gap sits between the player tracking data and the hero instance records.

---

## 21. Hero Instance Records

**Offset:** +0x1422
**Format:** 8 records of 0x2C (44) bytes each
**Total:** 0x160 (352) bytes, ending at +0x1581

One record per player slot, tracking the player's hero state.

### Hero Instance Record Format (0x2C = 44 bytes)

| Rel Offset | Size | Field | Notes |
|------------|------|-------|-------|
| +0x00 | byte | `active` | 1 = hero alive, 0 = no hero |
| +0x01 | byte | (zero) | |
| +0x02 | byte | (zero) | |
| +0x03 | byte | `random_seed` | Per-player random value (hero generation seed?) |
| +0x04 | short | `hero_army_index` | Army index containing this hero (69 for P0) |
| +0x06 | char[20] | `hero_name` | Hero name (empty here; name is in the pool at +0x224) |
| +0x1A | byte[18] | (zeros) | Reserved / hero stats |

### Actual Values

| Player | Active | Seed (b03) | Army Index | Notes |
|--------|--------|------------|------------|-------|
| P0 | 1 | 0xE7 (231) | 69 | Sir Accolon in Army[69] |
| P1 | 0 | 0x85 (133) | 0 | No hero |
| P2 | 0 | 0xAF (175) | 0 | No hero |
| P3 | 0 | 0x90 (144) | 0 | No hero |
| P4 | 0 | 0x8F (143) | 0 | No hero |
| P5 | 0 | 0x9B (155) | 0 | No hero |
| P6 | 0 | 0x00 (0) | 0 | No hero (no seed) |
| P7 | 0 | 0xA6 (166) | 0 | No hero |

The `random_seed` byte at +0x03 is non-zero for 7 of 8 players. Player 6 (Horse Kings) has seed=0, which may mean they lack hero generation capability or it is a coincidence. Player 0's `hero_army_index`=69 matches Army[69] which has `hero_present`=3.

---

## 22. Diplomacy Table

**Offset:** +0x1582
**Format:** 8x8 matrix of unsigned shorts
**Total:** 0x80 (128) bytes, ending at +0x1601

Each entry encodes the diplomatic relationship between two players. The base value is 0x2800 which appears to represent the default "at peace" state.

### Raw Diplomacy Matrix

```
       P0      P1      P2      P3      P4      P5      P6      P7
P0: [0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800]
P1: [0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800]
P2: [0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800]
P3: [0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800, 0x2800]
P4: [0x2800, 0x2800, 0x2B02, 0x28B4, 0x2800, 0x2800, 0x2BE2, 0x28B5]
P5: [0x2800, 0x2800, 0x28C1, 0x28B6, 0x2800, 0x2800, 0x29A1, 0x28B7]
P6: [0x2800, 0x2800, 0x2A80, 0x28B8, 0x2800, 0x2864, 0x2800, 0x28B9]
P7: [0x2800, 0x28B5, 0x2A3B, 0x28BA, 0x2800, 0x2905, 0x2877, 0x28BB]
```

Players 0-3 are all at baseline (0x2800) with everyone. Players 4-7 have modified diplomatic values with some other players, indicating the AI has begun to adjust diplomatic stances at game initialization. The non-0x2800 values encode relationship states in their upper bits per the RE documentation:
- Bits 12-13 (>> 0x0C & 3): relationship type
- Other bits: additional diplomatic metadata

---

## 23. Army Count and Records

**Offset:** +0x1602 (count) and +0x1604 (first record)
**Army count:** 80
**Record size:** 0x42 (66) bytes each
**Total:** 80 * 66 = 5,280 bytes, ending at +0x2AA3

### Army Record Format (0x42 = 66 bytes)

| Rel Offset | Size | Field | Notes |
|------------|------|-------|-------|
| +0x00 | short | `x` | Map X coordinate |
| +0x02 | short | `y` | Map Y coordinate |
| +0x04 | char[16] | `name` | Army name (null-terminated) |
| +0x14 | byte | `sprite_index` | Icon/sprite type |
| +0x15 | byte | `owner` | Player index (0-7), 0x0F = neutral |
| +0x16 | byte[4] | `unit_types[4]` | Unit type IDs, 0xFF = empty slot |
| +0x1A | byte[4] | `unit_moves[4]` | Movement points remaining |
| +0x1E | byte[4] | `unit_hits[4]` | Hit points |
| +0x22 | byte[4] | `unit_bonus[4]` | Combat bonus |
| +0x26 | byte[4] | `unit_experience[4]` | Experience level |
| +0x2A | short | `strength_display` | Total army strength |
| +0x2C | byte | `active_unit_type` | Lead unit type (0xFF = none) |
| +0x2D | byte | `hero_present` | 0 = no hero, >0 = hero reference |
| +0x2E | byte | `unknown_2e` | |
| +0x2F | byte | `origin_player` | Original owner player index |
| +0x30 | short | `unknown_30` | Varies (0 for most, 153 for Army[5]) |
| +0x32 | short | `has_orders` | 0 = idle, 1 = moving to target |
| +0x34 | short | `target_x` | Move destination X (-1 = none) |
| +0x36 | short | `target_y` | Move destination Y (-1 = none) |
| +0x38 | uint32 | `packed_data_1` | Packed flags |
| +0x3A | short | `hero_item_1` | Hero artifact slot 1 (0 = empty) |
| +0x3C | short | `hero_item_2` | Hero artifact slot 2 |
| +0x3E | short | `hero_item_3` | Hero artifact slot 3 |
| +0x40 | short | `hero_item_4` | Hero artifact slot 4 |

### Player-Owned Armies

| Index | Owner | Position | Name | Units (types) | Strength | Hero |
|-------|-------|----------|------|---------------|----------|------|
| 5 | P2 (Dark Dwarves) | (104, 8) | "Tarortel" | [1, 13, 16, 18] | 33 | No |
| 15 | P6 (Horse Kings) | (45, 25) | "Limeat" | [11, 2, 17, 8] | 34 | No |
| 28 | P4 (Treelords) | (18, 55) | "Xyanlilight" | [11, 2, 1, 17] | 38 | No |
| 35 | P5 (Mathreans) | (69, 70) | "Arkyon" | [11, 1, 10, 17] | 33 | No |
| 46 | P7 (Deathmaster) | (80, 91) | "Limirkon" | [2, 14, 1, 18] | 40 | No |
| 66 | P3 (Ogre Lords) | (89, 131) | "Narurock" | [2, 14, 13, 0] | 39 | No |
| 69 | P0 (Argentia) | (25, 137) | "Synapath" | [11, 2, 17, 8] | 36 | **Yes (3)** |
| 77 | P1 (Frost Giants) | (42, 148) | "Thyrliweed" | [2, 1, 13, 8] | 35 | No |

Army[69] is the player's starting hero army. The `hero_present=3` field and `active_unit_type=8` indicate the hero occupies one of the unit slots.

### Sample Neutral Armies

| Index | Position | Name | Units (types) | Strength |
|-------|----------|------|---------------|----------|
| 0 | (67, 6) | "Limesat" | [11, 2, 7, 255] | 22 |
| 1 | (11, 7) | "Chelithtel" | [1, 255, 255, 255] | 16 |

Neutral armies (owner=0x0F) typically have fewer unit slots filled. The `origin_player` field shows which player's territory the army originated in.

### Army Raw Hex Examples

**Army[69] (Player 0 Hero Army):**
```
0019 0089 5379 6e61 7061 7468 0000 0000  ..  Synapath....
0000 0000 0200 0b02 1108 0101 0203 0202  ................
0505 100c 0e14 0203 0a0c 0024 0803 0000  ...........$....
0000 0000 0000 0000 0000 0000 0000 0000  ................
0000 00                                   ...
```

**Army[0] (Neutral):**
```
0043 0006 4c69 6d65 7361 7400 0000 0000  .C..Limesat.....
0000 0000 020f 0b02 07ff 0101 0202 0102  ................
0406 100c 100c 0203 0804 0016 0000 0002  ................
0020 0000 0000 0000 0000 0000 0000 0000  . ..............
0000 00                                   ...
```

---

## 24. Post-Army Gap

**Offset:** +0x2AA4 to +0x3703
**Size:** 3,168 bytes (0xC60)

This region between the army records and the tile map contains:

1. **+0x2AA4 to +0x2FCF:** Mostly zeros with 5 single non-zero bytes at 0x108-byte intervals:
   - +0x2B59 = 0x5A (90)
   - +0x2C61 = 0x7B (123)
   - +0x2D69 = 0x9C (156)
   - +0x2E71 = 0xBD (189)
   - +0x2F79 = 0xDE (222)

   These values increment by 33 each, suggesting a stride-based data structure (possibly stale/uninitialized per-army pathfinding data).

2. **+0x2FD0 to +0x2FD7:** Mac OS Memory Manager handle header (`1ed1de70 6b000004 00008890 1ecaf680`)

3. **+0x2FDA to +0x3703:** Map-related tile data. Contains 2-byte entries with tile index / flag patterns similar to the main map, but with different values. This may be:
   - A "raw" or "base" map layer before visibility processing
   - Fog-of-war overlay data
   - Scenario template data

---

## 25. Tile Map Data

**Offset:** +0x3704
**Stride:** 0xE0 (224) bytes per row = 112 tiles per row
**Rows:** 159 (row 0 through row 158)
**Total:** 159 * 224 = 35,616 bytes, ending at ~+0xC303

### Tile Format (2 bytes per tile)

| Byte | Bits | Field | Notes |
|------|------|-------|-------|
| Byte 0 | 7:0 | `terrain_index` | Index into terrain properties table (+0x711) and sprite sheet |
| Byte 1 | 3:0 | `owner` | Player index (0-7), 0x0F = neutral/unowned |
| Byte 1 | 7:4 | `flags` | Visibility/discovery flags (0x4 = explored?) |

### Sample Tile Data (Row 0, first 10 tiles)

```
Row 0: 27/0F 2D/0F 27/0F 2D/0F 27/0F 13/0F 2A/0F 46/0F 56/0F 5F/0F
Row 1: 2D/0F 27/0F 2D/0F 27/0F 2D/0F 27/0F 18/0F 46/0F 53/0F 5A/0F
Row 2: 27/0F 2D/0F 27/0F 2D/0F 27/0F 2D/0F 28/0F 43/0F 4A/0F 56/0F
```

The alternating 27/2D pattern represents a checkerboard of two grass tile variants. Tile indices 0x43-0x5F are varied terrain (forests, hills, etc). All tiles in row 0 have owner=0x0F (neutral), which is expected for the map edges.

### Map Coordinates to Tile Offset

To access tile at map coordinates (x, y):
```
offset = game_state_base + 0x3704 + y * 0xE0 + x * 2
terrain_idx = byte[offset]
flags = byte[offset + 1]
owner = flags & 0x0F
```

---

## 26. Display Overlay Layer

**Offset:** ~+0xC304 (starting at row 159)
**Stride:** 0xE0 (same as tile map)
**Content:** ASCII-like display data (spaces 0x20, quote marks 0x22, digits, etc.)

This overlay layer follows immediately after the tile map and extends for approximately 41 additional rows (to ~+0xFCBF). It appears to be a display/rendering metadata layer used for the minimap or visibility overlay. The content consists primarily of space characters (0x20) with occasional non-space characters marking special positions.

---

## 27. CMNU Command Table

**Offset:** ~+0xFCC0
**Size:** ~208 bytes (to +0xFD8F)

This region contains menu command ID mappings. Each entry appears to be an 8-byte structure:

| Rel Offset | Size | Field |
|------------|------|-------|
| +0x00 | uint32 | Padding/flags (often 0x00000000) |
| +0x04 | ushort | `command_id` (CMNU command) |
| +0x06 | ushort | `menu_id` + `item_index` |

Sample entries found:
- 0x05E2 (Diplomacy), menu 5, item 9
- 0x05E3 (Quest), menu 5, following
- 0x0640 (Inspect Heroes), menu 6, item 1
- 0x0641 (Plant Flag), menu 6, item 2
- 0x0642 (Hero Levels), menu 6, item 3
- 0x0643 (Search), menu 6, item 4
- 0x06A4 (Army Bonuses), menu 7, item 1
- 0x06A5 (Items), menu 7, item 2

After the command entries, there are Mac Memory Manager handle structures (pointers at +0xFD00, +0xFD80) and then the 0xFF fill begins.

---

## 28. Uninitialized/Free Memory

**Offset:** +0xFD90 to +0x1317F
**Content:** All 0xFF bytes
**Size:** 0x133F0 (78,832) bytes

This is unused/uninitialized heap memory. The game state block was allocated as a large buffer (78,208 bytes total), but only ~64KB is actively used. The 0xFF fill is characteristic of Mac OS Memory Manager uninitialized heap blocks.

---

## City Data -- NOT FOUND

**Important:** City records are stored in the **Extended State Structure** (`piRam10117468`), which is a separate memory allocation from the main game state. The city data structure (0x5C bytes per city, count at ext+0x24A, records at ext+0x24C) could not be located in this RAM dump through pattern matching.

The extended state pointer `piRam10117468` must be dereferenced from the global pointer table at address 0x10117468, which requires finding the PPC code data section mapping. City names like "Exokhold" and "Kirilhold" were found at multiple locations in the dump (0x1091ED99 and 0x12A236B6), but neither location contained a complete city record structure.

To find city data in a future analysis:
1. Read the 4-byte pointer at RAM address 0x10117468
2. Dereference that pointer to get the extended state base
3. City count is at ext_base + 0x24A
4. City records start at ext_base + 0x24C

---

## Summary of Findings

### Completed Analysis

| Region | Status | Notes |
|--------|--------|-------|
| Faction names (+0x00) | Mapped | 8 factions confirmed |
| Player arrays (+0xA0-+0xDF) | Mapped | Colors, factions, types |
| Game settings (+0x110-+0x135) | Mapped | All option flags documented |
| Turn state (+0x136-+0x185) | Mapped | Turn, alive, order, viewport |
| Per-player stats (+0x186-+0x225) | Mapped | Gold, capital coords, index |
| Hero data (+0x224-+0x60B) | Mapped | Names, active flags, packed data |
| Terrain tables (+0x60C-+0x80F) | Mapped | Movement costs, properties |
| Sites/ruins (+0x810-+0xD25) | Mapped | 40 sites, full structure |
| Artifacts/items (+0xD26-+0xFB5) | Mapped | 22 items with names |
| Unit type names (+0xFB6-+0x1045) | Mapped | 9 unit types |
| Victory points (+0x1122) | Mapped | Per-player scores |
| Hero instances (+0x1422-+0x1581) | Mapped | 8 records, 0x2C each |
| Diplomacy (+0x1582-+0x1601) | Mapped | 8x8 matrix |
| Army records (+0x1602-+0x2AA3) | Mapped | 80 armies, 0x42 each |
| Tile map (+0x3704-+0xC303) | Mapped | 159 rows, stride 0xE0 |
| Display overlay (+0xC304-+0xFCBF) | Identified | ASCII-like rendering data |
| CMNU table (+0xFCC0) | Identified | Menu command mappings |

### Not Found

| Structure | Reason |
|-----------|--------|
| City records | Stored in separate allocation (piRam10117468) |
| Extended state per-army arrays | Stored in separate allocation |
| Unit type definitions | Stored at piRam10117360 (separate allocation) |
| Unit class definitions | Stored at piRam10117364 (separate allocation) |
| Unit instance templates | Stored at piRam101175d0 (separate allocation) |

### Key Address Cross-Reference

| Absolute Address | Game State Offset | Contents |
|-----------------|-------------------|----------|
| 0x12A22E80 | +0x0000 | Faction names start |
| 0x12A22F90 | +0x0110 | current_player |
| 0x12A23006 | +0x0186 | Per-player stats start |
| 0x12A230A4 | +0x0224 | Hero name pool |
| 0x12A2348C | +0x060C | Terrain move costs |
| 0x12A23690 | +0x0810 | Site count |
| 0x12A23BA6 | +0x0D26 | Item records |
| 0x12A23DA2 | +0x1122 | Victory points |
| 0x12A24402 | +0x1582 | Diplomacy table |
| 0x12A24482 | +0x1602 | Army count |
| 0x12A24484 | +0x1604 | Army records start |
| 0x12A25924 | +0x2AA4 | Post-army gap |
| 0x12A26584 | +0x3704 | Tile map start |
| 0x12A2F184 | +0xC304 | Display overlay start |
| 0x12A32B40 | +0xFCC0 | CMNU command table |
| 0x12A32C10 | +0xFD90 | 0xFF fill starts |
| 0x12A36000 | +0x13180 | Block end (0x00 fill) |
