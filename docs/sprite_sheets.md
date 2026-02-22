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
