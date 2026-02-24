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
| 30023 | City sprites + razed variants | 640x120 | Top rows: 8 non-razed city styles. Bottom row: 8 razed city variants. Green bg for chromakey. |

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
