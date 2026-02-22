# Game State Data Structures

Quick reference for the main game state layout (`gGameState`) and related structures.
For the full RAM dump analysis, see `RE_ram_dump_analysis.md`.

---

## Game State Overview

Allocated as a single `0x2FCC`-byte block (12,236 bytes in code, up to `0x13180` in original).
Accessed via `gGameState` pointer. All multi-byte values are **big-endian** (PowerPC).

```
gs+0x000  ┌─────────────────────────────┐
          │ Faction Names (8 x 20)      │  160 bytes
gs+0x0A0  ├─────────────────────────────┤
          │ Player Color Arrays          │  48 bytes (3 x short[8])
gs+0x0D0  ├─────────────────────────────┤
          │ Player Types (human/AI)      │  16 bytes (short[8])
gs+0x0E0  ├─────────────────────────────┤
          │ Reserved                     │  48 bytes
gs+0x110  ├─────────────────────────────┤
          │ Game Settings                │  38 bytes
gs+0x136  ├─────────────────────────────┤
          │ Turn/Player State            │  80 bytes
gs+0x186  ├─────────────────────────────┤
          │ Per-Player Stats (8 x 0x14) │  160 bytes
gs+0x226  ├─────────────────────────────┤
          │ Hero Name Pool (40 x 20)    │  800 bytes
gs+0x544  ├─────────────────────────────┤
          │ Hero Active Flags            │  80 bytes
gs+0x594  ├─────────────────────────────┤
          │ Hero Data Arrays             │  120 bytes
gs+0x60C  ├─────────────────────────────┤
          │ Terrain Movement Costs       │  261 bytes (9 types x 29 classes)
gs+0x711  ├─────────────────────────────┤
          │ Terrain Properties Table     │  255 bytes
gs+0x810  ├─────────────────────────────┤
          │ Site/Ruin Records            │  ~1302 bytes (count + 40 x 0x20)
gs+0xD26  ├─────────────────────────────┤
          │ Artifact/Item Records        │  660 bytes (22 x 0x1E)
gs+0xFB6  ├─────────────────────────────┤
          │ Unit Type Names (9 x 0x10)  │  144 bytes
gs+0x1046 ├─────────────────────────────┤
          │ Unit Type Base Stats         │  26 bytes
gs+0x1060 ├─────────────────────────────┤
          │ Unused (zeros)               │  194 bytes
gs+0x1122 ├─────────────────────────────┤
          │ Player Victory Points        │  16 bytes (short[8])
gs+0x1132 ├─────────────────────────────┤
          │ Player Tracking Data         │  16 bytes (short[8])
gs+0x1142 ├─────────────────────────────┤
          │ Combat Modifier Table        │  736 bytes (unused/zeros)
gs+0x1422 ├─────────────────────────────┤
          │ Hero Instance Records        │  352 bytes (8 x 0x2C)
gs+0x1582 ├─────────────────────────────┤
          │ Diplomacy Table (8x8)        │  128 bytes
gs+0x1602 ├─────────────────────────────┤
          │ Army Count + Records         │  ~5282 bytes (short + 80 x 0x42)
gs+0x2AA4 └─────────────────────────────┘
```

---

## Key Records

### Per-Player Stats (0x14 bytes at gs+0x186 + p*0x14)

| Offset | Size | Field |
|--------|------|-------|
| +0x00 | short | `gold` |
| +0x02 | short | reserved |
| +0x04 | short | `capital_x` |
| +0x06 | short | `capital_y` |
| +0x08-0x0C | 6 | reserved |
| +0x0E | short | `start_x` |
| +0x10 | short | `start_y` |
| +0x12 | short | `player_index_1based` |

### City/Site Record (0x20 bytes at gs+0x812 + i*0x20)

| Offset | Size | Field |
|--------|------|-------|
| +0x00 | short | `x` |
| +0x02 | short | `y` |
| +0x04 | char[20] | `name` (null-terminated) |
| +0x18 | byte | `site_type` (0=city, 1=temple, 2=sage, 3=ruin, 4=library, 5=searchable, 6=library) |
| +0x19 | byte | `site_subtype` |
| +0x1A | byte | unknown |
| +0x1C | short | `active` (0=searched, nonzero=available) |
| +0x1E | short | `visited_bitmask` (one bit per player) |

**Important:** City record +0x04 is the NAME (char[20]), NOT owner. City ownership is tracked via map tile owner bits.

### Army Record (0x42 bytes at gs+0x1604 + i*0x42)

| Offset | Size | Field |
|--------|------|-------|
| +0x00 | short | `x` |
| +0x02 | short | `y` |
| +0x04 | char[16] | `name` (15 chars + null) |
| +0x14 | byte | `sprite_index` |
| +0x15 | byte | `owner` (0-7 = faction, **0x0F = neutral**) |
| +0x16 | byte[4] | `unit_types[0-3]` (0xFF = empty slot) |
| +0x1A | byte[4] | `unit_moves[4]` (movement points remaining) |
| +0x1E | byte[4] | `unit_hits[4]` (hit points) |
| +0x22 | byte[4] | `unit_bonus[4]` (combat bonus) |
| +0x26 | byte[4] | `unit_experience[4]` |
| +0x2A | short | `strength_display` (total army strength) |
| +0x2C | byte | `active_unit_type` (lead unit, 0xFF = none) |
| +0x2D | byte | `hero_present` (0 = no hero, >0 = hero ref) |
| +0x2E | **byte** | `current_movement_points` (**NOT short** - writing as short corrupts +0x2F) |
| +0x2F | byte | `origin_player` |
| +0x30 | short | unknown |
| +0x32 | short | `has_orders` (0=idle, 1=moving) |
| +0x34 | short | `target_x` (-1 = none) |
| +0x36 | short | `target_y` (-1 = none) |
| +0x38 | uint32 | `packed_flags` |
| +0x3A | short[4] | `hero_items[0-3]` (item IDs, 0 = empty) |

**Critical note:** Offset +0x2E is a single **byte**, not a short. Writing a short here corrupts the origin_player at +0x2F on big-endian PPC.

### Hero Instance Record (0x2C bytes at gs+0x1422 + p*0x2C)

| Offset | Size | Field |
|--------|------|-------|
| +0x00 | byte | `active` (1 = hero alive) |
| +0x01-0x02 | 2 | reserved |
| +0x03 | byte | `random_seed` (hero generation seed) |
| +0x04 | short | `hero_army_index` |
| +0x06 | char[20] | `hero_name` |
| +0x1A | byte[18] | reserved / hero stats |

### Item Record (0x1E bytes at gs+0xD26 + i*0x1E)

| Offset | Size | Field |
|--------|------|-------|
| +0x00 | byte | `item_class` (1=weapon, 2=armor, 5=staff, 6=movement, 7=siege, 8=standard) |
| +0x01 | byte | `bonus_value` |
| +0x02 | byte | `item_state` (0=inactive, 2=placed, 3=held by hero) |
| +0x03 | byte | `location_data` |
| +0x04 | short | `owner_or_site` |
| +0x06-0x09 | 4 | reserved |
| +0x0A | char[20] | `name` |

### Diplomacy Table (gs+0x1582)

8x8 matrix of unsigned shorts: `gs + 0x1582 + (p1 * 8 + p2) * 2`

| Value | Meaning |
|-------|---------|
| 0x2800 | At peace (base value) |
| < 0x1000 | At war |
| >= 0x1000 | At peace or allied |
| 0x0000 | War |

---

## Extended State (gExtState)

Separate allocation from game state. Contains per-army and per-city arrays.

### Per-Army Arrays

| Offset | Size | Field | Values |
|--------|------|-------|--------|
| +0x56 | byte[100] | `army_state[]` | 5=razed, 6=garrisoned, 7=guarding, 8=searching |
| +0x11E | byte[100] | `army_flags[]` | bit0=moved, bit2=engaged, bit6=sea, bit7=air |
| +0x182 | byte[100] | `army_move_count[]` | Moves made this turn |
| +0x1E6 | byte[100] | `army_extra[]` | Additional state |

### City Data (in ext state)

| Offset | Description |
|--------|-------------|
| +0x24A | City count (short) |
| +0x24C | City records start (0x5C bytes each) |

---

## Map Tile Data (gMapTiles)

Stored separately from gGameState.

| Property | Value |
|----------|-------|
| Stride | 0xE0 (224) bytes per row = 112 tiles per row |
| Rows | 159 (row 0-158) |
| Tile size | 2 bytes per tile |

**Tile format:**
```
Byte 0: terrain_index (index into terrain properties table at gs+0x711)
Byte 1: bits 3:0 = owner (0-7 faction, 0x0F = neutral)
         bits 7:4 = flags (0x4 = explored?)
```

**Access formula:**
```c
offset = (tileY * sMapWidth + tileX) * 2;
terrain = gMapTiles[offset];
owner   = gMapTiles[offset + 1] & 0x0F;
```

---

## Unit Type Names (from RAM dump)

At gs+0xFB6, 9 entries x 0x10 bytes (6 zero bytes + 10 char name):

| Index | Name | Base Stat |
|-------|------|-----------|
| 0 | Troll | 5 |
| 1 | Giant | 7 |
| 2 | Wolf | 4 |
| 3 | Goblin | 3 |
| 4 | Dragon | 8 |
| 5 | Demon | 8 |
| 6 | Devil | 8 |
| 7 | Wizard | 8 |
| 8 | Ghost | 7 |

These are scenario-dependent. Our code still falls back to hardcoded generic names (Light Infantry, etc.) when gs+0xFB6 is empty.
