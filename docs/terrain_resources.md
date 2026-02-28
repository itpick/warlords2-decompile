# Terrain File Resource Catalog

Resources extracted from `assets/terrain/grasslands.rsrc` (Grasslands terrain set).
Ice World and Mudflats terrain sets contain analogous resources with different artwork.

Extracted PNGs in `tools/output/`.

---

## PICT Resources

### Army Sprite Sheets (30000-30009)

Each PICT is a horizontal strip of army unit sprites, one per unit type.
Green (palette index 146) background for chromakey transparency.

| PICT ID | Description | Dimensions | Content |
|---------|-------------|------------|---------|
| 30000 | Faction 0 armies (white) | 504x40 | ~29 unit sprites, white-tinted |
| 30001 | Faction 1 armies (yellow/gold) | 504x40 | Same units, gold-tinted |
| 30002 | Faction 2 armies (orange) | 504x40 | Same units, orange-tinted |
| 30003 | Faction 3 armies (red) | 504x40 | Same units, red-tinted |
| 30004 | Faction 4 armies (green) | 504x40 | Same units, green-tinted |
| 30005 | Faction 5 armies (blue) | 504x40 | Same units, blue-tinted |
| 30006 | Faction 6 armies (light blue) | 504x40 | Same units, light blue-tinted |
| 30007 | Faction 7 armies (dark/brown) | 504x40 | Same units, dark-tinted |
| 30008 | Faction 8 armies (purple/extra) | 504x40 | Additional tint variant |
| 30009 | Army silhouette masks (1-bit) | 504x40 | Black silhouettes on white, used as CopyMask source |

### Master Sprite Sheet (30010)

| PICT ID | Description | Dimensions | Content |
|---------|-------------|------------|---------|
| 30010 | Master UI sprite sheet | 144x246 | Shields, flags, combat icons, city markers, minimap icons. Multi-purpose sheet requiring parsing for individual elements. |

#### PICT 30010 Sprite Map (confirmed)

Background color: light grey (0xEFEF). Use CopyBits mode 36 for transparent blit.

| Sprite | Source Rect (L,T,R,B) | Size | Purpose |
|--------|----------------------|------|---------|
| Anchor | (0, 0, 32, 30) | 32×30 | Port indicator — water-adjacent cities where armies can embark/disembark |
| Firebomb | (33, 2, 62, 28) | 29×26 | War indicator on map |
| Money pouch | (64, 4, 96, 30) | 32×26 | Gold dropped from fallen heroes or skills |
| Grey shield | (131, 54, 139, 62) | 8×8 | Minimap city marker (grey with black border) |
| Selection shield | (96, 94, 106, 104) | 10×10 | Production dialog minimap — current city marker (white with black dot) |
| Colored shields | (112, 94, ...) | varies | Small colored faction shields for UI |

### Shield & Banner Sheets (30011, 30024)

| PICT ID | Description | Dimensions | Layout |
|---------|-------------|------------|--------|
| 30011 | Capital banner shields | 288x59 | 8 columns (36px each) x 2 rows. Row 0: shields with "CAPITAL" text. Row 1: plain shields. Used in city popup dialogs. |
| 30024 | Dialog + Map shields | 368x64 | 8 columns (46px each) x 2 rows. Row 0 (y=0-31): clean dialog shields. Row 1 (y=32-63): map shields with crossed swords. Primary shield source for default armies. |

### Forest/Overlay Sprites (30012)

| PICT ID | Description | Dimensions | Content |
|---------|-------------|------------|---------|
| 30012 | Forest overlay sprites | ~240x40 | Forest/tree clusters for terrain overlay. Green bg for chromakey. |

### Terrain Tile Sheets (30021-30023)

| PICT ID | Description | Dimensions | Content |
|---------|-------------|------------|---------|
| 30021 | Road tile sheet | 640x80 | 13 columns x 2 rows of 40x40 tiles. Road segment sprites (RD values 1-17). Background palette index 0xF4. |
| 30022 | Main terrain tiles | 640x240 | 16x6 grid of 40x40 tiles (indices 0-95). Grass, water, hills, mountains, forests, plains, marsh, etc. |
| 30023 | City sprites + razed + terrain | 640x240 | 16 cols × 3 rows of 40×80 tiles. See layout below. Green bg for chromakey. |

#### PICT 30023 City Tile Layout (confirmed)

Each city tile is **80×80** pixels (2 columns × 2 rows of 40×40). Green background for chromakey.

| Index | Location (cols, row) | Content |
|-------|---------------------|---------|
| 0 | cols 0-1, row 0 | Empty/neutral city |
| 1 | cols 2-3, row 0 | Player 0 city (white castle, blue shield — default army set) |
| 2 | cols 4-5, row 0 | Player 1 city |
| 3 | cols 6-7, row 0 | Player 2 city |
| 4 | cols 8-9, row 0 | Player 3 city |
| 5 | cols 10-11, row 0 | Player 4 city |
| 6 | cols 12-13, row 0 | Player 5 city |
| — | cols 14-15, row 0 | Landscape (not a city) |
| 7 | cols 0-1, row 1 | Player 6 city |
| — | cols 2-15, row 1 | Landscape terrain tiles |

**Row 2** (y=160-239): Razed/burning variants of the city styles.

9 city styles total (1 neutral + 8 factions). Faction index + 1 maps to city tile index (0 = neutral).

**Important:** Each army set (Terrain folder) has its own PICT 30023 with set-specific city art. PICT 25000 in the Cities folder (e.g. "CSPECTRA") is for a different army set (Spectremia) and should NOT be used for map rendering — always use PICT 30023 from the active terrain file.

### Flag/Banner Strips (30030-30037)

One per faction. Horizontal strip of repeating flag/banner icons for map army markers.

| PICT ID | Faction | Color |
|---------|---------|-------|
| 30030 | 0 | Blue/white cross |
| 30031 | 1 | Yellow/gold rings |
| 30032 | 2 | Orange triangle |
| 30033 | 3 | Red crescent |
| 30034 | 4 | Green fleur-de-lis |
| 30035 | 5 | Blue lightning |
| 30036 | 6 | Light blue snowflake |
| 30037 | 7 | Red/dark skull |

---

## Other Resources in Terrain File

| Resource Type | IDs | Description |
|---------------|-----|-------------|
| RD (Road Data) | 10000 | 112x156 bytes, 1 byte/tile. Pre-computed road autotile indices (values 0-17). |
| RV (River Data) | 10000 | River overlay data (same format as RD). |
| SH (Shore Data) | 10000 | Shore/coastline overlay data. |
| MAPCOLOR | 10000 | Minimap color lookup table. Maps terrain type indices to RGB colors for the strategy map. |
| DAT 20000 | (in Armies file) | 29 entries x 62 bytes. Unit type table: ID, name (20 chars), stats (strength, prod turns, cost, movement). |

---

## Notes

- Terrain files contain NO cicn resources. Shield icons for default armies come exclusively from PICT 30024/30011.
- External shield sets (`:Shields:Elemental Shields`) provide cicn 30600-30607 and PICTs 15009/15010.
- The app resource fork's cicn 3020-3029 are face portraits, NOT shield icons.
- Green background (palette index 146, RGB ~0x00B200) is used as chromakey for all sprite sheets.
- PICT 30009 provides 1-bit masks for CopyMask-based transparent army rendering.
