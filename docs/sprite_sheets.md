# Sprite Sheet Extraction Patterns

How the original Warlords II splits PICT sprite sheets into individual cells.

---

## Universal Pattern

All sprite sheets use the same mathematical formula:

```c
short cellCol = spriteIndex % columnsPerRow;
short cellRow = spriteIndex / columnsPerRow;
short srcX = cellCol * cellWidth;
short srcY = cellRow * cellHeight;

SetRect(&srcRect, srcX, srcY, srcX + cellWidth, srcY + cellHeight);
CopyBits((BitMap *)*srcPix, &dstPort->portBits, &srcRect, &dstRect, mode, NULL);
```

Two transparency modes are used:
- **srcCopy (mode 0)**: Opaque blit, used for terrain on a pre-cleared background
- **Mode 36 (transparent)**: Skips pixels matching the destination port's `RGBBackColor`. Must save/set/restore the background color around each call.

---

## Terrain Tiles (PICT 30022/30023)

**Source:** `Terrain/<set>/` folder, loaded in `LoadTerrainSprites()` at line 1201
**Stored in:** `sTerrainGW` (tiles 0-95), `sTerrainGW2` (tiles 96-191)

| Property | Value |
|----------|-------|
| Cell size | 40x40 px |
| Grid | 16 columns x 6 rows per sheet |
| Tiles per sheet | 96 (16 x 6) |
| Total tiles | 192 across 2 sheets |
| Mode | srcCopy (opaque) |

**Extraction (main.c lines 4733-4820):**
```c
short local = terrainIdx % TERRAIN_TILES_PER_SHEET;  // 96
short spriteCol = local % TERRAIN_COLS;               // 16
short spriteRow = local / TERRAIN_COLS;
GWorldPtr sheet = (terrainIdx < 96) ? sTerrainGW : sTerrainGW2;
SetRect(&srcRect,
    spriteCol * 40, spriteRow * 40,
    (spriteCol + 1) * 40, (spriteRow + 1) * 40);
```

---

## Road Overlay (PICT 30021)

**Source:** `Terrain/<set>/` folder, same resource file as terrain
**Stored in:** `sRoadGW`

| Property | Value |
|----------|-------|
| Sheet size | 640x80 px |
| Cell size | 40x40 px |
| Grid | 16 columns x 2 rows |
| Total tiles | 32 (only ~17 used) |
| Mode | 36 (transparent) |
| Background color | Palette index 146 = `(0xEF,0xEF,0xEF)` light gray |

**Extraction (main.c lines 4796-4811):**
```c
short tileIdx = rdValue - 1;
short spriteCol = tileIdx % 16;
short spriteRow = tileIdx / 16;
SetRect(&srcRect,
    spriteCol * 40, spriteRow * 40,
    (spriteCol + 1) * 40, (spriteRow + 1) * 40);

// Must set destination bg for mode 36:
GetBackColor(&savedBg);
RGBBackColor(&sRoadBgColor);
CopyBits(..., 36, NULL);
RGBBackColor(&savedBg);
```

**Road autotile mapping:** 4-direction neighbor mask (N=1, E=2, S=4, W=8) maps to tile indices 1-17. See `docs/road_tiles.md` for the full autotile table.

---

## Army Sprites (PICT 20000+)

**Source:** `Armies/<set>/` folder
**Stored in:** `sArmyGW[0..9]` (up to 10 sheets)

| Property | Value |
|----------|-------|
| Sheet size | 512x64 px |
| Cell size | 32x32 px (drawn as 29x32) |
| Grid | 16 columns x 2 rows |
| Mode | 36 (transparent) |
| Background | Magenta `(0xFF,0x00,0xFF)` or read from corner pixel |

**Extraction (main.c lines 5174-5200):**
```c
short spriteCol = spriteIdx % 16;
short spriteRow = spriteIdx / 16;
short srcX = spriteCol * 32;
short srcY = spriteRow * 32;
SetRect(&srcRect, srcX, srcY, srcX + 29, srcY + 32);

GetBackColor(&savedBg);
RGBBackColor(&sArmyBgColor[0]);
CopyBits(..., 36, NULL);
RGBBackColor(&savedBg);
```

---

## City Sprites (PICT 25000)

**Source:** `Cities/` folder
**Stored in:** `sCityGW`

| Property | Value |
|----------|-------|
| Columns | 9 (one per faction 0-7 + neutral column 8) |
| Cell size | ~40x40 px |
| Mode | 36 (transparent) |
| Background | Read from corner pixel of sheet |

**Extraction (main.c ~line 4983):**
```c
short col = cityOwner;  // 0-7 = faction, 8 = neutral
SetRect(&srcRect, col * cityW, 0, (col + 1) * cityW, cityH);

GetBackColor(&savedBg);
RGBBackColor(&sCityBgColor);
CopyBits(..., 36, NULL);
RGBBackColor(&savedBg);
```

---

## PICT 10004 "ABITS" -- Army Attribute Icons

**Status:** NOT YET LOADED in our code

| Property | Value |
|----------|-------|
| Sheet size | 544x40 px |
| Cell size | 16x20 px |
| Grid | 34 columns x 2 rows |
| Total cells | 68 |

**Extraction formula:**
```c
short cellCol = iconIndex % 34;
short cellRow = iconIndex / 34;
short srcX = cellCol * 16;
short srcY = cellRow * 20;
SetRect(&srcRect, srcX, srcY, srcX + 16, srcY + 20);
```

**Known cell contents (right-to-left from right edge):**

| Column from right | Top row | Bottom row |
|-------------------|---------|------------|
| 6th | Cities icon | Treasure chest |
| 5th | Gold coins | (unknown) |
| Left half | Team-colored circles (shields) | Army selection indicators |

**Full map from RE docs (RE_rendering.md section 18):**
The original code uses sprite ID 9 for army icons in the small map view, with cells at 0x1D (29) x 0x20 (32) pixels. PICT 10004 is a separate icon sheet for UI overlays (stack indicators, resource icons).

---

## PICT 10010 "ATRANS3" -- Shield Mini-Icons

**Status:** NOT YET LOADED

| Property | Value |
|----------|-------|
| Sheet size | 144x94 px |
| Grid | 9 columns x 1 row |
| Cell size | 16x94 px |

**Extraction:**
```c
short playerIdx = shieldIndex % 9;  // 0-7 = factions, 8 = neutral
short srcX = playerIdx * 16;
SetRect(&srcRect, srcX, 0, srcX + 16, 94);
```

---

## PICT 10002/10009 "HIDDEN/HIDDENPP" -- Fog of War Transitions

**Status:** NOT YET LOADED

| Property | Value |
|----------|-------|
| Sheet size | 336x82 px |
| Content | 4 rectangular gradient sections for fog edge blending |
| Usage | Blend fog of war edges on map tiles |

The original uses CopyMask with ditherCopy mode (0x40) to blend fog edges. See RE_rendering.md section 10.

---

## PICT 10003 "WAR" -- War/Event Sprite Sheet

**Status:** NOT YET LOADED

| Property | Value |
|----------|-------|
| Sheet size | 240x180 px |
| Content | Mixed sprites on magenta background |
| Sprites | Fire explosion with "WAR" text, question mark icon, skull icon, blue gem/orb |

---

## PICT 10006/10007/10008 "POPUP" -- Popup Backgrounds

**Status:** NOT YET LOADED

| PICT | Size | Description |
|------|------|-------------|
| 10006 | 256x75 | Stone/marble banner, magenta border = transparent |
| 10007 | 256x76 | Variant popup banner |
| 10008 | 256x128 | Larger oval stone surface |

---

## Loading Pattern in main.c

All sprite sheets follow this lifecycle:

```
1. LoadPICTIntoGWorld(pictID) → GWorldPtr
   - GetResource('PICT', id)
   - NewGWorld(depth, bounds)
   - DrawPicture(pictHandle, &bounds) into GWorld
   - Read corner pixel (0,0) as background reference color

2. Before each draw:
   - LockPixels(GetGWorldPixMap(gw))
   - Save/Set/Restore destination bg color (for mode 36)
   - CopyBits or CopyMask

3. After draw:
   - UnlockPixels(GetGWorldPixMap(gw))
```

**Important mode 36 pattern (root cause of white sprite backgrounds):**
```c
RGBColor savedBg;
GetBackColor(&savedBg);
RGBBackColor(&sheetBgColor);   // Set dest bg to match sheet's transparent color
CopyBits(..., 36, NULL);       // Mode 36 skips pixels matching dest bg
RGBBackColor(&savedBg);        // Restore original bg
```

This must be applied to EVERY mode 36 CopyBits call: roads, cities, and armies.

---

## 68k Sprite Dispatch Switch — Pixel-Exact Extraction Rectangles

The main map renderer in **CODE_067 FUN_00001c6a** (2336 bytes) is the master sprite dispatch function. It takes:
- `param_1`: packed `{owner (high 16), spriteType (low 16)}`
- `param_2`: destination GWorld (0 = screen)
- `param_3`: packed dest position `{Y (high 16), X (low 16)}`

Two branches: **Branch A** for neutral/special sprites (owner = 0x0F, -1, or 8), **Branch B** for faction-owned sprites (owner 0-7).

All blits use **mode 0x10024** (mode 36 + mask flag).

### Branch A: Neutral/Special Sprites

Source GWorld addresses: `0x415c` (shields/UI), `0x4178` (items), `0x4140` (markers)

#### Case 0 — Small Shield Dot
```
GWorld: 0x415c
srcRect: {top=0, left=0, bottom=8, right=8}
Size: 8×8 px
```

#### Case 3/4 — Large Shield (owner >= -1)
```
GWorld: 0x415c
srcRect: {top=0, left=9, bottom=0x28(40), right=0x31(49)}
Size: 40×40 px at (9, 0)
```

#### Case 3/4 — Item Icon (owner < -1)
```
GWorld: 0x4178
srcRect: {top=0, left=(owner+2)*-26, bottom=0x1b(27), right=(owner+2)*-26+26}
Size: 27×26 px, stacked vertically at 26px intervals
```

#### Case 5 — Medium Shield
```
GWorld: 0x415c
When owner == -1: srcRect: {top=0, left=0x50(80), bottom=0x24(36), right=0x6f(111)}
When owner != -1: srcRect: {top=0, left=0x31(49), bottom=0x24(36), right=0x50(80)}
Size: 31×36 px
```

#### Case 7 — Tiny Shield
```
GWorld: 0x415c
srcRect: {top=8, left=0, bottom=0x12(18), right=9}
Size: 9×10 px at (0, 8)
```

#### Case -1 (0xFFFF) — City Marker Dot (neutral)
```
GWorld: 0x4140
srcRect: {top=0x24(36), left=0x48(72), bottom=0x28(40), right=0x4c(76)}
Size: 4×4 px at (72, 36)
```

### Branch B: Faction-Owned Sprites (owner 0-7)

Source GWorld addresses: `0x446c` (terrain defense icons), `0x4140` (UI), `0x415c` (shields)

#### Case 0 — Team-Colored Dot (8×8)
```
GWorld: 0x446c
srcRect: {top=0, left=owner*8+0x138(312), bottom=8, right=owner*8+0x140(320)}
Size: 8×8 px — 8 dots at Y=0, X=312..375 (8px stride)
```

#### Case 1 — Team Flag/Banner
```
GWorld: 0x446c
srcRect: {top=0x10(16), left=owner*0xb(11)+0x118(280), bottom=0x1e(30), right=owner*0xb+0x123(291)}
Size: 11×14 px — 8 flags at Y=16, X=280..367 (11px stride)
```

#### Case 2 — Team Tower
```
GWorld: 0x446c
srcRect: {top=0, left=owner*0xd(13)+0xd0(208), bottom=0xf(15), right=owner*0xd+0xdd(221)}
Size: 13×15 px — 8 towers at Y=0, X=208..311 (13px stride)
```

#### Case 3 — Shield with Sword (composite: shield bg + team marker overlay)
```
Layer 1 — Shield background:
  GWorld: 0x415c
  srcRect: {top=0, left=0x6f(111), bottom=0x28(40), right=0x97(151)}
  Size: 40×40 px at (111, 0)

Layer 2 — Team marker overlay (drawn at dest +7,+7):
  GWorld: 0x446c
  srcRect: {top=0, left=owner*0x1a(26), bottom=0x1b(27), right=owner*0x1a+0x1a(26)}
  Size: 26×27 px — 8 markers at Y=0, X=0..181 (26px stride)
```

#### Case 4 — Team Shield Only
```
GWorld: 0x446c
srcRect: {top=0, left=owner*0x1a(26), bottom=0x1b(27), right=owner*0x1a+0x1a(26)}
Size: 26×27 px — same as case 3 layer 2
```

#### Case 5 — Team Castle/Fortress
```
GWorld: 0x446c
srcRect: {top=0x1b(27), left=owner*0x1f(31), bottom=0x3f(63), right=owner*0x1f+0x1f(31)}
Size: 31×36 px — 8 castles at Y=27, X=0..216 (31px stride)
```

#### Case 6 — City Marker with Tower (composite: tower + flag)
```
Layer 1 — Tower:
  GWorld: 0x4140
  srcRect: {top=0x1e(30), left=0x1cf(463), bottom=0x25(37), right=0x1ef(495)}
  Size: 32×7 px at (463, 30) — NOTE: wide GWorld, not PICT 30010

Layer 2 — Falls through to Case 2 (team tower) at dest +9, +7
```

#### Case 7 — Team Guard Indicator
```
GWorld: 0x446c
srcRect: {top=0xf(15), left=owner*9+0xd0(208), bottom=0x19(25), right=owner*9+0xd9(217)}
Size: 9×10 px — 8 guards at Y=15, X=208..279 (9px stride)
```

#### Case 8 — Team Small Dot (8×8, same as case 0 but at different Y)
```
GWorld: 0x446c
srcRect: {top=8, left=owner*8+0x138(312), bottom=0x10(16), right=owner*8+0x140(320)}
Size: 8×8 px — at Y=8 (below case 0's Y=0 row)
```

#### Case 9 — Team Large Emblem
```
GWorld: 0x446c
srcRect: {top=0x22(34), left=owner*0x10(16)+0xf8(248), bottom=0x3f(63), right=owner*0x10+0x108(264)}
Size: 16×29 px — 8 emblems at Y=34, X=248..375 (16px stride)
```

#### Case -1 (0xFFFF) — City Marker Dot (faction)
```
GWorld: 0x4140
srcRect: {top=0x24(36), left=owner*4+0x28(40), bottom=0x28(40), right=owner*4+0x2c(44)}
Size: 4×4 px — 8 dots at Y=36, X=40..71 (4px stride)
```

---

## GWorld 0x446c Layout Map (Terrain Defense Icons)

Based on the sprite dispatch rectangles above, GWorld 0x446c contains a dense icon sheet with multiple sprite types packed at different regions:

```
Y=0     │ Team shields (26×27px × 8, X=0..181) │ Towers (13×15px × 8, X=208..311) │ Dots (8×8 × 8, X=312..375) │
Y=8     │                                       │                                    │ Dots2 (8×8 × 8, X=312..375) │
Y=15    │                                       │ Guards (9×10px × 8, X=208..279)    │                              │
Y=16    │                                       │ Flags (11×14px × 8, X=280..367)    │                              │
Y=27    │ Castles (31×36px × 8, X=0..216)       │                                    │                              │
Y=34    │                                       │ Emblems (16×29px × 8, X=248..375)  │                              │
Y=63    └───────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
```

## GWorld 0x415c Layout Map (Shields/UI)

```
Y=0     │ Dot (8×8, X=0) │ Large (40×40, X=9-49) │ Med (31×36, X=49-80/80-111) │ Bg (40×40, X=111-151) │
Y=8     │ Tiny (9×10, X=0) │                       │                              │                        │
```

## GWorld 0x4140 Layout Map (UI Markers)

```
Y=30    │ ... │ Tower/marker (32×7, X=463-495)     │
Y=36    │ ... │ Faction dots (4×4 × 8, X=40-71) │ Neutral dot (4×4, X=72-76)  │
```

Note: 0x4140 appears to be a very wide GWorld (495+ px), not the 144px PICT 30010. It may contain composited data from multiple sources or a different PICT than originally assumed.

---

## Army Sprite Extraction (68k CODE_067)

From `FUN_000000ae` (line 34) and `FUN_000001c4` (line 66):

```c
// Sprite index → source rect (CODE_067 line 1131-1141)
srcY = (spriteIdx / 0x10) * 0x1e;           // row = idx/16, rowStride = 30px
srcX = (spriteIdx % 0x10) << 5;             // col = idx%16, colStride = 32px (<<5 = *32)
srcRect = {srcY, srcX, srcY + 0x1e, srcX + 0x20};  // 32×30 px cell

// GWorld selection (line 1140)
gwAddr = ((factionIdx + 0x15) & 0xFF) * 0x1c + 0x4098;  // faction → GWorld ptr array
// 0x4098 base, 0x1c (28) byte stride per entry, offset 0x15 (21) adjusts faction index
```

| Property | Value |
|----------|-------|
| Grid cell | 32×30 px (srcX via <<5, srcY via *0x1e) |
| Drawn size | 32×29 px (visible area, may clip 1 row) |
| Columns per row | 16 (modulo 0x10) |
| GWorld array | Base 0x4098/0x14098, stride 0x1c (28 bytes), indexed by faction+0x15 |
| Mode | 0x24 (mode 36, transparent) |

---

## Shield Sprite Extraction (PICT 30024, 368×64)

From `DrawMapShield` in our code and 68k case 3/4 analysis:

### Row 0 — Dialog Shields (clean, no swords)
```c
srcRect = {top=0, left=owner*46, bottom=32, right=owner*46+46};
// 46×32 px per shield, 8 columns = 368px total
```

### Row 1 — Map Shields (with crossed swords)
```c
srcRect = {top=32, left=owner*46, bottom=64, right=owner*46+46};
// 46×32 px per shield, 8 columns
```

### Alternative: 68k uses different cell sizes
The dispatch switch references 40×40 cells from 0x415c with offsets {9, 49, 80, 111} suggesting the GWorld may contain pre-processed shield data at non-uniform positions rather than the raw PICT grid.

---

## Capital Banner Extraction (PICT 30011, 288×59)

```c
// 8 columns, 36px wide each (288/8 = 36)
srcRect = {top=0, left=owner*36, bottom=30, right=owner*36+36};   // Row 0: with "CAPITAL" text
srcRect = {top=30, left=owner*36, bottom=59, right=owner*36+36};  // Row 1: plain shields
```

---

## Faction Army Sprite Sheets (PICT 30000-30009)

Each 504×40 sheet contains one faction's army sprites:

| Property | Value |
|----------|-------|
| Sheet size | 504×40 px |
| Cell size | 29×32 px (68k: 32×30 extraction, 29 visible width) |
| Row stride | 30 px (vertical) |
| Column stride | 32 px (horizontal, via <<5) |
| Columns | 16 (504/32 ≈ 15.75, uses modulo 16) |
| Rows | 2 (40/30 = 1.33, 2 rows used) |
| Max sprites | 29 per sheet |
| Mode | 36 (transparent) or 0x10024 (transparent + mask) |

PICT 30009 contains 1-bit **silhouette masks** for CopyMask-based rendering (alternative to mode 36).

---

## Complete Per-Segment Sprite Extraction Reference

### CODE_057 — `a2GameSetup` (Faction Selection, Unit Roster)

**Shield Icons (GWorld 0x14434, 8-shield grid):**
```
Shields 0-7: srcX = (i % 4) * 40 + 80, srcY = (i / 4) * 40
Cell size: 40×40 px, grid: 4 columns × 2 rows
Shield 0: (80, 0)   Shield 1: (120, 0)   Shield 2: (160, 0)   Shield 3: (200, 0)
Shield 4: (80, 40)  Shield 5: (120, 40)  Shield 6: (160, 40)  Shield 7: (200, 40)
Dest GWorld: 0x44c0, Mode: 0 (srcCopy)
```

**Unit Roster Sprites (GWorld 0x14488):**
```
Cell size: 40×40 px (0x28)
Row stride: sVar6 * 40 (Y = 0, 40, 80, 120, 160, 200)
Column: multiple sub-grids (14, 4, 16 columns)
Dest GWorld: 0x44a4, Mode: 0 (srcCopy)
```

**Combat Unit Preview (GWorlds 0x143fc, 0x14418):**
```
Masked blits to GWorld 0x144a4
Mode: 0x10024 (transparent + mask)
Spacing: 0xa0 (160px) horizontal between units
```

**EraseRect calls (0x4098 base):**
```
Clear formula: (factionIdx + 0x1f) * 0x1c + 0x4098
Stride: 0x1c (28 bytes) per faction GWorld entry
Lines: 2177, 2317, 2444, 2540, 2605
```

### CODE_128 — `a1OverviewMap` (Minimap/Strategy View)

**Terrain Background (GWorld 0x140d0):** Mode 0 srcCopy
**Fog Overlay (GWorld 0x140ec):** Mode 0x10024, conditional on gs+0x124 != 0

**City/Army Icons (GWorld 0x14140):**
All use lookup tables indexed by sprite type, stride 8 bytes:
```
City icons:  DAT_00015222 + type * 8 (top/left), DAT_00015226 + type * 8 (bottom/right)
Army stacks: DAT_00015dca + slot * 8, DAT_00015dce + slot * 8 (4 slots)
Markers:     DAT_00015212 + type * 8, DAT_00015216 + type * 8
Group icon:  DAT_00015232 (fixed), DAT_00015236 (fixed)
```
All coordinates doubled (×2) for minimap scale. Mode: 0x10024

### CODE_014 — `a1ImportantRes` (Combat Map)

**Terrain Rendering (FUN_00002e46):**
```
Base terrain:  GWorld 0x140d0, Mode 0 (srcCopy)
Overlay layer: GWorld 0x140ec, Mode 0x24 (transparent)
Bounds check:  0x70 × 0x9c (112 × 156 pixels)
Lines: 2488, 2496, 2514, 2522, 2685, 2693, 2725, 2733
```

**Post-Combat Composite (FUN_000034d8):**
```
GWorld: _DAT_000273a2 (dynamic port)
Mode: 0 (srcCopy), Lines: 2808, 2818
```

### CODE_079 — `a2Stack` (Stack Dialog)

**Army Unit Icons (GWorld 0x4140):**
```
Line 510: srcOffset = (char)sVar4 * 8 - 0x2c
Mode: 0x24 (transparent)
```

**City Defense Markers (GWorld 0x44a4):**
```
Line 556: srcOffset = 0x1c (no defense)
Line 560: srcOffset = 0x24 (1 defense level)
Line 564: srcOffset = 0x2c (2 defense levels)
Line 568: srcOffset = 0x34 (special/embarked)
Line 572: srcOffset = 0x14 (player-owned)
Mode: 0x24 (transparent)
```

### CODE_036 — `a1Help` (Help Dialog)

**Background Clear (GWorld 0x14290/0x4290):**
```
srcRect: {0, 0, 0x80(128), 0xf0(240)}
Mode: 0 (srcCopy)
```

**Unit Capability Icons (GWorld 0x144a4/0x44a4):**
```
Type 1: srcOffset = 0x7c1c / 0x27c1c
Type 2: srcOffset = 0x7c24 / 0x27c24
Type 3: srcOffset = 0x7c2c / 0x27c2c
Default: srcOffset = 0x7c14 / 0x27c14
Mode: 0x10024 (transparent + mask) or 0x24
```

**Unit Slot Icons (GWorld 0x4140):**
```
Slot 0: srcOffset = 0x7bd4, destY = 0x24(36), destX = 0x80(128)
Slot 1: srcOffset = 0x7bdc, destY = 0x24(36), destX = 0x58(88)
Slot 2: srcOffset = 0x7be4, destY = 0x2d(45), destX = 0x80(128)
Slot 3: srcOffset = 0x7bec, destY = 0x2d(45), destX = 0x58(88)
Mode: 0x24 (transparent)
```

### CODE_044 — `a1HumanControl` (Army/Hero Dialogs)

**City Marker Background (GWorld 0x14274):**
```
srcRect: {0, 0, 0x4b(75), 0x100(256)}
Mode: 0 (srcCopy)
```

**City Markers in Hero Dialog (GWorld 0x14140):**
```
Slot 0: srcRect from DAT_00015430 (8-byte stride), Mode: 0x10024
Slot 1: srcRect from DAT_00015438
Slot 2: srcRect from DAT_00015440
Slot 3: srcRect from DAT_00015448
All: mode 0x10024 (transparent + mask)
```

### CODE_053 — `a2CombatAnim` (Status Bars)

**Bar Gauge Segments (GWorld 0x1446c):**
```
Source coords from lookup table: DAT_00015554 (Y), DAT_00015556 (X), stride 4 bytes
Full block: 8×8 px (left + 8, top + 8)
Partial block: width = remainder of division
Mode: 0 (srcCopy)
Lines: 645, 656
```

### CODE_125 — `a1Sound` (Sound Dialog)

**Sound Effect Icons (GWorld 0x4124/0x14124):**
```
Icon regions (47px wide × 158px tall strips):
  Strip 0: srcRect = {0x00, 0x00, 0x2f, 0x9e}  (0-47, 0-158)
  Strip 1: srcRect = {0x2f, 0x00, 0x5e, 0x9e}  (47-94, 0-158)
  Strip 2: srcRect = {0x5e, 0x00, 0x8d, 0x9e}  (94-141, 0-158)
Mode: 0x24 (transparent)
```

### CODE_078 — UI Rendering (Unknown)

**Dynamic GWorld (param_1 + offsets):**
```
Background: GWorld at param+0xa4, mode 0
Overlay:    GWorld at param+0xc0, srcRect = {0, 0, 0x0c, variable_height}, mode 0x24
Position:   GWorld 0x14108, X = param-7, Y = param, mode 0
```

### CODE_063/064 — Hero Info & Hiring

**Resource Loading:**
```
func_0x00002878(0x30000) — Load hero portrait PICT
```

**Hero Animation IDs (via func_0x00002ad8):**
```
Female heroes: IDs 0-3
Male heroes:   IDs 8-0xB
Mixed:         IDs 4-7
Alt palette:   IDs 0xC-0xF
Shield offset: _DAT_000284b4 * 0x42 + _DAT_0002884c + 0x15c8
```

### CODE_130 — Army Sprite Animation

**Combat Animation Phases (via func_0x00002ad8):**
```
0xd0001: Enter attack (phase 1)
0xd0000: Attack frame
0xd0003: Exit attack (phase 3)
0xd0002: Attack end
0xe0001: Enter defend (phase 1)
0xe0000: Defend frame
0x100000: Hit/damage animation
```

### CODE_133 — Combat System

**Combat Sprite Control (via func_0x00002ad8):**
```
0x0000: Display with strength parameter
0xffff: Hide/clear sprite
Hero variants: hero_strength + 1 or combat_bonus
```

### CODE_054 — Reports Dialog

**Report Page Variants (via func_0x00002ad8):**
```
0x5f0000: No filter           0x5f0001-3: Player filter
0x5f0004-5: Report type       0x5f0006: City report
0x5f0007-8: Army reports      0x5f0009: Generic battle
0x5f000a: Diplomacy           0x5f000b: Trade
0x5f000c: Spell research      0x5f000d: Victory
0x5f000e: Defeat              0x5f000f: Truce
0x5f0010: Tribute
```

### CODE_052 — Diplomacy

**Diplomacy Matrix Rendering:**
```
3 calls to func_0x00002378 (lines 107, 130, 138) — 8×8 matrix display
func_0x00002ad8 at line 299 — state animation cycling
```
