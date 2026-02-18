# Warlords II Rendering & UI System -- Reverse Engineering

## Table of Contents
1. [Architecture Overview](#1-architecture-overview)
2. [QuickDraw API Usage](#2-quickdraw-api-usage)
3. [GWorld / Offscreen Buffer Management](#3-gworld--offscreen-buffer-management)
4. [Sprite & Resource Loading System](#4-sprite--resource-loading-system)
5. [Color / Palette System](#5-color--palette-system)
6. [Main Map Rendering -- FUN_10060608](#6-main-map-rendering----fun_10060608)
7. [Full Map View -- FUN_10005f90](#7-full-map-view----fun_10005f90)
8. [Terrain Tile Rendering](#8-terrain-tile-rendering)
9. [Army Icon Drawing](#9-army-icon-drawing)
10. [Fog of War System](#10-fog-of-war-system)
11. [Selection Highlight & Path Drawing](#11-selection-highlight--path-drawing)
12. [Minimap / Fog Overlay -- FUN_100635e0](#12-minimap--fog-overlay----fun_100635e0)
13. [Scroll & Viewport System](#13-scroll--viewport-system)
14. [Dialog / Window Rendering (MacApp TView)](#14-dialog--window-rendering-macapp-tview)
15. [Combat Result Calculation -- FUN_100ac0cc](#15-combat-result-calculation----fun_100ac0cc)
16. [Animation System](#16-animation-system)
17. [Text Rendering](#17-text-rendering)
18. [Sprite Sheet Layout](#18-sprite-sheet-layout)
19. [Key Global Variables](#19-key-global-variables)
20. [Function Reference Table](#20-function-reference-table)
21. [Rendering Pipeline Summary](#21-rendering-pipeline-summary)

---

## 1. Architecture Overview

Warlords II uses a classic Mac OS QuickDraw rendering pipeline with offscreen GWorld buffers. The architecture follows this pattern:

```
PICT Resources (169 PICTs, 110 cicns)
        |
        v
  LoadSprite / LoadPICT into GWorld
        |
        v
  Offscreen GWorld Buffers (sprite sheets + masks)
        |
        v
  CopyBits / CopyMask to compose layers
        |
        v
  Map Back Buffer (offscreen)
        |
        v
  CopyBits to screen window
```

**Key design decisions:**
- All sprite graphics stored as PICT resources in the resource fork
- Each sprite sheet has a companion **mask** GWorld for transparency
- Terrain tiles are stored in large sprite sheets; individual tiles selected by source rect
- Army sprites similarly stored in sheets, indexed by army type
- The map viewport is 0x70 x 0x9C tiles (112 x 156), with tiles at 2x2 pixels on the map
- The "full map view" scales up to 0x28 (40) pixels per tile dimension
- Fog of war is rendered by filling rects with a stipple pattern (color 0xFF)
- Double-buffering: all drawing goes to offscreen GWorld, then blitted to screen

**MacApp framework integration:**
The game is built on MacApp (Apple's C++ application framework). Drawing uses MacApp's TView hierarchy with classes like:
- `TWholeRedrawScroller` -- the main map scroller view
- `TStackInfoView` -- army stack info display
- `TProdView` -- production dialog view
- `TTurnView` -- turn information display
- `TFightOrderDialogBehavior` / `TFightResultDialogBehavior` -- combat UI
- `TArmyBonusListView` -- army bonus list
- `TDrawAdorner` / `T3DLineTopAdorner` / `T3DScrollButtonAdorner` -- UI adorners
- `TArmyDragger` / `TMoveArmyCommand` / `TMoveArmyByKeyCommand` -- drag/drop army

---

## 2. QuickDraw API Usage

All QuickDraw APIs imported from Mac OS Toolbox, confirmed by binary string analysis:

### Drawing Primitives
| API | Address | Purpose |
|-----|---------|---------|
| `CopyBits` | 0x0021AB | Blit from one GWorld to another (main sprite blitting) |
| `CopyMask` | 0x0021B4 | Blit with mask for transparency (sprite with alpha) |
| `DrawPicture` | 0x0021D6 | Draw PICT resource into GWorld |
| `GetPicture` | 0x002894 | Load PICT resource handle |
| `PlotCIcon` | 0x0022D5 | Draw color icon (cicn resource) |
| `PlotIcon` | 0x002876 | Draw black & white icon |
| `PlotIconID` | 0x001B7D | Draw icon by ID |
| `PlotIconSuite` | 0x001BA6 | Draw icon suite |
| `MoveTo` | 0x002030 | Set pen position |
| `LineTo` | 0x002037 | Draw line to point |
| `FrameRect` | 0x002057 | Draw rectangle outline |
| `PaintRect` | 0x002061 | Fill rectangle |
| `EraseRect` | 0x00206B | Erase rectangle |
| `PaintRgn` | 0x002185 | Fill region |
| `ScrollRect` | 0x0021A0 | Scroll a rectangle (map scrolling) |

### Text Rendering
| API | Address | Purpose |
|-----|---------|---------|
| `TextFont` | 0x00236E | Set current font |
| `TextFace` | 0x002377 | Set font style |
| `TextSize` | 0x002380 | Set font size |
| `DrawString` | 0x002389 | Draw Pascal string |
| `CharWidth` | 0x00239E | Get character width |
| `StringWidth` | 0x0023B4 | Get string width |
| `GetFontInfo` | 0x0023B4 | Get font metrics |
| `TETextBox` | 0x00272D | Draw text in rectangle |

### Color Management
| API | Address | Purpose |
|-----|---------|---------|
| `RGBForeColor` | 0x002255 | Set foreground color |
| `RGBBackColor` | 0x002262 | Set background color |
| `ForeColor` | 0x002043 | Set foreground (indexed) |
| `BackColor` | 0x00204D | Set background (indexed) |
| `GetForeColor` | 0x002283 | Get current foreground |
| `GetBackColor` | 0x002290 | Get current background |
| `GetPixPat` | 0x002241 | Get pixel pattern |
| `GetCIcon` | 0x0022CC | Get color icon |
| `DisposeCIcon` | 0x0022DF | Dispose color icon |
| `GetCCursor` | 0x0022A7 | Get color cursor |

### GWorld / Offscreen
| API | Address | Purpose |
|-----|---------|---------|
| `NewGWorld` | 0x001EAB | Create offscreen buffer |
| `LockPixels` | 0x001EB5 | Lock GWorld pixels for drawing |
| `UnlockPixels` | 0x001EC0 | Unlock GWorld pixels |
| `DisposeGWorld` | 0x001EDA | Destroy offscreen buffer |
| `GetGWorld` | 0x001EE8 | Get current GWorld |
| `SetGWorld` | 0x001EF2 | Set current drawing GWorld |
| `GetGWorldDevice` | 0x001F39 | Get GWorld GDevice |
| `GetGWorldPixMap` | 0x001F49 | Get GWorld pixmap |

### Port / Clipping
| API | Address | Purpose |
|-----|---------|---------|
| `SetPort` | 0x001F75 | Set current drawing port |
| `GetPort` | 0x001F7D | Get current drawing port |
| `SetClip` | 0x001FA3 | Set clipping region |
| `GetClip` | 0x001FAB | Get clipping region |
| `ClipRect` | 0x001FB3 | Set clipping to rect |
| `PenSize` | 0x00200F | Set pen size |
| `PenMode` | 0x002017 | Set pen transfer mode |
| `PenPat` | 0x00201F | Set pen pattern |

### Region Operations
| API | Address | Purpose |
|-----|---------|---------|
| `NewRgn` | 0x0020E3 | Allocate region |
| `OpenRgn` | 0x0020EA | Begin recording region |
| `CloseRgn` | 0x0020F2 | End recording region |
| `DisposeRgn` | 0x0020FB | Dispose region |
| `SetRectRgn` | 0x00211A | Set region to rect |

### Window/Control APIs
| API | Address | Purpose |
|-----|---------|---------|
| `NewControl` | 0x0017F5 | Create control |
| `DisposeControl` | 0x001820 | Destroy control |
| `HiliteControl` | 0x001854 | Highlight/enable control |
| `TrackControl` | 0x001916 | Track mouse in control |
| `SelectWindow` | 0x0028F2 | Bring window to front |
| `MoveWindow` | 0x002951 | Move window |
| `SizeWindow` | 0x00295C | Resize window |
| `DrawGrowIcon` | 0x002944 | Draw grow box |
| `InvalRect` | 0x002972 | Invalidate rectangle |
| `ValidRect` | 0x002985 | Validate rectangle |
| `SetRect` | 0x002D2B | Set rect coordinates |
| `OffsetRect` | 0x002D3D | Offset rect |
| `InsetRect` | 0x002D48 | Inset rect |
| `SectRect` | 0x002D52 | Intersect rects |
| `PtInRect` | 0x002D61 | Point in rect test |
| `NumToString` | 0x002DC2 | Number to string conversion |
| `LocalToGlobal` | 0x0021EE | Coordinate transform |
| `GlobalToLocal` | 0x0021FC | Coordinate transform |

---

## 3. GWorld / Offscreen Buffer Management

### FUN_1000a12c -- CreateOrResizeGWorld (956 bytes)
**Address:** 0x1000a12c

This function creates or resizes offscreen GWorld buffers. It is the core offscreen buffer allocator.

**Parameters:**
- `param_1` (int): Pointer to GWorld descriptor struct
- `param_2` (short): Width
- `param_3` (short): Height
- `param_4` (short): Pixel depth (8 = 8-bit indexed)
- `param_5` (char): Flags
- `param_6` (ushort): Additional flags

**Behavior:**
1. Gets current monitor depth via `GetGWorldPixMap`
2. Checks if requested size matches existing GWorld
3. If size matches and GWorld exists, reuses it (returns early)
4. Otherwise creates new GWorld via `NewGWorld` (indirect call through `FUN_10003198`)
5. Stores GWorld pointer at offset +0x10 in the descriptor
6. Stores dimensions at offsets +4, +6, +8
7. Stores depth flag at +0xB

**Key insight:** The game supports both 8-bit and deeper color modes. When running at 8-bit, some features are disabled (palette index 0 = transparent).

### FUN_10000870 / FUN_10000888 -- GetGWorld / SetGWorld wrappers
**Addresses:** 0x10000870, 0x10000888

These are thin wrappers around the QuickDraw `GetGWorld`/`SetGWorld` calls. They save and restore the current drawing port when switching to offscreen buffers.

**Pattern used throughout:**
```c
FUN_10000870(&savedPort, &savedDevice);  // GetGWorld
FUN_10000888(gworld->pixMap, 0);         // SetGWorld to offscreen
// ... draw into offscreen buffer ...
FUN_10000888(savedPort, savedDevice);    // Restore original port
```

### FUN_10009a98 / FUN_10009b00 -- LockPixels / UnlockPixels wrappers
**Addresses:** 0x10009a98, 0x10009b00

Called before/after drawing into GWorlds to lock pixel memory.

---

## 4. Sprite & Resource Loading System

### Overview

The sprite system uses a **sprite table** at global `iRam10115ee4` with entries of 0x14 (20) bytes each. The table is indexed by sprite ID, with the count at `psRam10115ee8`.

**Sprite table entry structure (20 bytes):**
```
Offset  Size  Description
0x00    4     Flags (bit 29 = loaded, bit 28 = has mask, bit 27 = needs palette remap,
                     bits 30-31 = source type: 0=named PICT, 1=terrain file, 2=army file, 3=special)
0x04    4     Pointer to GWorld descriptor (image)
0x08    1     Resource group / category byte
0x09    3     Padding / reserved
0x0C    4     Pointer to GWorld descriptor (mask, if bit 28 set)
0x10    2     Mask resource ID or secondary info
0x12    2     Reserved
```

### FUN_100462c8 -- EnsureSpriteLoaded (212 bytes)
**Address:** 0x100462c8

This is the main sprite "ensure loaded" function. Called before any sprite drawing.

**Behavior:**
1. Check if sprite at index `param_1` is already loaded (bit 29 of flags)
2. If loaded, call `FUN_10045f0c` to increment reference/validate
3. If not loaded:
   a. Scan the sprite table for a sprite with the same **group byte** that IS loaded
   b. If found, call `FUN_100450f4` to unload that sprite (LRU eviction)
   c. Call `FUN_10044d8c` to load the new sprite

### FUN_10044d8c -- LoadSprite (832 bytes)
**Address:** 0x10044d8c

Loads a sprite from PICT resources into a GWorld.

**Behavior by source type (bits 30-31 of flags):**
- **Type 0 (0x00):** Named PICT resource. Uses `FUN_100efc78` to set resource file, then `FUN_1005f6b0` to get the PICT handle by name.
- **Type 1 (0x01):** Terrain file. Opens terrain PICT file from `piRam1011734c+0x88 -> +0x148`, calls `FUN_1005f6b0`.
- **Type 2 (0x02):** Army file. Opens army PICT file from `piRam1011734c+0x88 -> +0x14C`, calls `FUN_1005f6b0`.
- **Type 3 (0x03):** Special PICT. For sprite ID 0x2A (42), uses format string at offset +0xB4; otherwise uses offset +0xC0 with sprite-specific name.

For **mask-capable sprites** (bit 26 set):
- After loading the image GWorld, calls `FUN_1005262c` to construct the mask.
- The mask is built by copying the sprite with palette manipulation to create a 1-bit mask.

**Resource path construction:**
Uses `FUN_10001dd0` (sprintf-like) to build filenames:
- Sprite 9: format at +0x90 (terrain)
- Sprite 5: format at +0x98 (terrain variant)
- Sprite 0x26: format at +0xA0 (special)
- Other: format at +0xA8 with sprite index as parameter
- Sprite 0x2A: format at +0xB4 (army overlay)

### FUN_100451f4 -- EnsureSpriteAndLock (184 bytes)
**Address:** 0x100451f4

Ensures a sprite is loaded AND its pixel data is locked for drawing. Calls `FUN_10044d8c` if needed, then `FUN_10001290` (HLock) and `FUN_10001d70` on the GWorld's pixmap.

### FUN_1004530c -- UnlockAndReleaseSprite (228 bytes)
**Address:** 0x1004530c

Unlocks the sprite's pixel memory after drawing is complete. Calls `FUN_10003468` (HUnlock) on both the image and mask GWorlds.

### FUN_10044c60 -- LoadPICTByName (216 bytes)
**Address:** 0x10044c60

Loads a PICT resource by name string. Truncates name to 8 chars, strips trailing spaces/periods, converts to Pascal string, then calls:
1. `FUN_10003540(0x50494354, name)` -- GetNamedResource('PICT', name)
2. `FUN_10044a10(gworld, pictHandle)` -- Draw PICT into GWorld

### FUN_10044d38 -- LoadPICTByID (84 bytes)
**Address:** 0x10044d38

Loads a PICT resource by numeric ID:
1. `FUN_10001728(0x50494354, id)` -- GetResource('PICT', id)
2. `FUN_10044a10(gworld, pictHandle)` -- Draw PICT into GWorld

### FUN_1005262c -- BuildSpriteMask (724 bytes)
**Address:** 0x1005262c

Constructs a transparency mask GWorld from a sprite image GWorld. This is the key function for transparent sprite rendering.

**Algorithm:**
1. Lock the source image GWorld pixels
2. Create (or reuse) a mask GWorld at the same dimensions via `FUN_1000a12c`
3. Set the GWorld's color table entry for the transparency color to transparent
4. CopyBits the source into the mask with palette manipulation to produce a 1-bit mask
5. Restore the original color table entry
6. The mask is stored at offset +0xC in the sprite table entry

### FUN_100453f0 -- LoadTerrainSet (1752 bytes)
**Address:** 0x100453f0

Loads an entire terrain tileset from a DAT resource file. This is called when the scenario specifies a terrain set.

**Behavior:**
1. Reads 'DAT ' resource to get terrain set name
2. Constructs path string (e.g., "terrain%d")
3. Opens terrain resource file
4. Loads sprite IDs 0x1A, 0x1B (terrain tile sheets)
5. Loads sprite ID 0x29 (army overlay sheet)
6. Blits terrain tiles into position in the sprite sheets:
   - First 2 rows (14 tiles each): basic terrain
   - Next 2 rows (4 tiles each): additional terrain
   - Next 2 rows (16 tiles each): more terrain variants
7. Copies special tiles for roads, ruins, towers
8. Builds army sprite overlay using `FUN_10009d38`

---

## 5. Color / Palette System

### FUN_100479f4 -- SetDrawingColor (112 bytes)
**Address:** 0x100479f4

Sets the current foreground drawing color from a color table.

**Behavior:**
- If `param_1 == -1`: Sets a flag at `puRam10115f04` to indicate "use pattern"
- Otherwise: Indexes into color table at `uRam101176cc` using formula:
  `((param_1 * 5 - param_1) & 0x7fffffff) * 2 + colorTableBase`
  Then calls `FUN_100b2268` (RGBForeColor wrapper) and `FUN_100021c0` (presumably updates pen state).

**Color table (`uRam101176cc`):**
This is the master color palette for the game. Each entry is 6 bytes (RGB triplet, 16-bit per component). Indexed by player color, terrain type, or UI element. Offsets:
- Colors 0-8: Player colors (one per player faction)
- Color 9: Army sprite colors
- Color 0x0D-0x0E: Line/border colors
- Color 0x50: Small viewport mode color
- Color 0xFF: Fog of war fill color

### FUN_10039ec8 -- SetupTileOverlays (556 bytes)
**Address:** 0x10039ec8

Configures the terrain tile high byte in the map data for rendering purposes. This function iterates over all "feature" entries (cities, ruins, towers at `+0x810` offset) and sets the top byte of the map tile at `*piRam10117358` to indicate the overlay type:

**Overlay byte values (top byte of 32-bit tile):**
| Value | Meaning |
|-------|---------|
| 0x09 | Hidden/unseen feature (fog + neutral) |
| 0x0A | Visible but unowned feature |
| 0x0B | Visible neutral city |
| 0x0C | Empty/razed |

These values are read during rendering to select the appropriate terrain/city sprite.

---

## 6. Main Map Rendering -- FUN_10060608

### Function Details
**Address:** 0x10060608
**Size:** 3404 bytes
**Proposed Name:** `DrawMapViewport`
**Parameters:**
- `param_1` (short): Redraw mode (0 = full redraw, 1 = incremental)
- `param_2` (short): Force redraw flag
- `param_3` (short*): Optional dirty rect (x, y, width, height in tile coordinates), NULL = full redraw

### Rendering Pipeline

**Step 1: Fog-of-War visibility check**
```c
iVar18 = *piRam1011735c;  // Main game state
if (*(short *)(iVar18 + 0x124) == 0)  // Check if fog of war enabled
    goto full_draw;
// Check if current player has visibility
if (*(short *)(currentPlayer * 2 + iVar18 + 0xd0) != 0)
    // Player has fog data
```

**Step 2: Compute viewport bounds**
The viewport is defined as:
- Tile grid: 0x70 x 0x9C tiles (112 x 156) -- this is the full map size
- Pixel coordinates: tiles * 2 = 0xE0 x 0x138 pixels
- When `param_3` is provided, only the dirty region is redrawn

Viewport bounds calculation:
```
local_b0 = top-left of viewport (in pixels)
local_ac = bottom-right extent
local_a4 = visible rect (left, top, right, bottom in tile coords)
```

**Step 3: Check for small viewport mode**
```c
if (*(int *)(*piVar9 + 0xa4) == 0 && *(int *)(appFramework + 0x38) < 0x71)
    bVar6 = true;  // Small viewport -- scale down by 2x
```
When the window is small, all coordinates are halved (shift right 1).

**Step 4: Load terrain sprite sheet**
```c
FUN_100462c8(7);   // EnsureSpriteLoaded(7) -- main terrain
FUN_100451f4(7);   // Lock terrain sprite pixels
```
Sprite ID 7 is the main terrain tile sheet.

**Step 5: Set up drawing environment**
```c
FUN_10000870(&savedPort, &savedDevice);  // Save current port
FUN_10000888(backBuffer->pixMap, 0);     // Switch to back buffer
FUN_10067270();  // Setup drawing environment (pen, colors, clipping)
```

**Step 6: Draw terrain tiles**
For **non-fog mode** (0x124 == 0):
```c
uVar24 = FUN_10009a98(terrainGWorld->pixMap);   // Lock terrain pixels
uVar13 = FUN_10009a98(backBuffer->pixMap);      // Lock back buffer pixels
// Set up source and dest rects
FUN_100008d0(...);  // CopyBits -- blit terrain to back buffer
FUN_10009b00(terrainGWorld->pixMap);  // Unlock
FUN_10009b00(backBuffer->pixMap);     // Unlock
```

For **fog mode with full redraw** (local_a8 == 0):
```c
FUN_10047cbc(*piVar21, psVar25, 0xff);  // Fill viewport with fog color
// Then:
FUN_100012f0(...);  // CopyMask -- blit terrain with fog mask
```

For **fog mode with partial redraw** (local_a8 != 0):
```c
FUN_10047cbc(smallBuffer, localRect, 0xff);  // Fill small region with fog
FUN_100012f0(...);  // CopyMask -- blit visible terrain tiles only
// Then copy small buffer to main back buffer:
FUN_10009b48(smallBuffer, srcRect, dstRect, backBuffer, dstX, dstY);
```

**Step 7: Draw army overlay**
```c
FUN_10060078(&local_a4, selectedArmyIndex);
```
This draws all army icons on top of the terrain.

**Step 8: Invalidate minimap area**
```c
if (local_a8 != 0) {
    FUN_100913cc();  // Hide minimap cursor
    // ... update minimap ...
    FUN_1009142c();  // Show minimap cursor
}
```

**Step 9: Check for overview window**
```c
if (*(int *)(*piVar9 + 0xa4) == 0)
    // Find "over" view and trigger redraw
```

### Callers
Called from 24 different locations including:
- `FUN_10030490` -- Main game loop update
- `FUN_1003e13c` -- Game initialization
- `FUN_1002b230` -- Army movement completion
- `FUN_10032e2c` -- Turn processing
- `FUN_100651cc` -- After combat
- `FUN_10065b2c` -- After city capture
- `FUN_10094fc4` -- Scroll handler

---

## 7. Full Map View -- FUN_10005f90

### Function Details
**Address:** 0x10005f90
**Size:** 7312 bytes
**Proposed Name:** `DrawFullMapView`

This function draws the entire strategic map at a larger scale (0x28 = 40 pixels per tile). It is used for the "whole map" overview screen.

### Rendering Pipeline

**Step 1: Allocate temp buffer**
```c
iVar23 = FUN_100f1640(mapWidth * 4 * mapHeight);  // Allocate tile coordinate list
```

**Step 2: Set up drawing target**
```c
// Either draw to main view or to a special offscreen buffer
FUN_10000870(&savedPort, &savedDevice);
FUN_10000888(targetGWorld->pixMap, 0);
FUN_10066bf4(&drawState);  // Save drawing state
```

**Step 3: First pass -- Identify visible tiles**
Iterates over all map tiles (width = `*(short*)(iVar13+4)`, height = `*(short*)(iVar13+6)`):
```c
for each tile (row, col):
    tileData = *(int*)(mapData + row_offset + col * 10);
    if (tileData < 0) {  // Tile is visible
        if (terrainType == 0x0E) {  // Sea tile
            // Draw sea directly (blue fill at col * 0x28)
        } else {
            // Add to visible tile list
            coordList[count++] = {row, col};
        }
    }
```

**Step 4: Draw terrain tiles**
```c
FUN_100462c8(0x1a);  // Load terrain sprite sheet A
FUN_100462c8(0x1b);  // Load terrain mask sheet
for each visible tile:
    terrainIndex = (tileData >> 0x16) & 0xFF;
    // Calculate source position in terrain sheet:
    srcCol = terrainIndex % 0x60;
    srcRow = (srcCol / 16) * 0x28;  // 0x28 pixels per row
    srcX = (srcCol % 16) * 0x28;
    // Calculate destination:
    dstX = tileCol * 0x28;
    dstY = tileRow * 0x28;  // ... adjusted for scroll offset
    // Choose normal blit or masked blit based on fog:
    if ((tileData >> 0x1E) & 1)
        FUN_100008d0(src, dst, ...);   // CopyBits (no mask)
    else
        FUN_100012f0(src, mask, dst, ...);  // CopyMask
```

**Step 5: Draw road overlays** (bit 28 of flags at `iVar13 + 0x28`)
```c
if ((flags >> 0x1C) & 1) {  // Roads enabled
    for each visible tile:
        roadType = (tileData2 >> 0x14) & 0x1F;
        roadRow = roadType / 13;
        // Blit road sprite at 0x28 x 0x28 pixels
}
```

**Step 6: Draw army icons** (bit 27 of flags)
Uses sprite ID 9 for army icons. For each visible tile with an army:
```c
if ((tileData >> 1) & 1) {
    // Blit army icon at 0x1D x 0x20 pixels
}
```

**Step 7: Draw city overlays** (bit 29 of flags)
For each visible tile with a city:
```c
cityOwner = (tileData2 >> 0x14) & 0x1F;
// Blit city icon at 0x28 x 0x28
```

**Step 8: Draw temple/ruin overlays** (bit 26 of flags)
```c
// Source rect: 0x1D x 0x20 pixels
// Templetype determines source position in sprite sheet
```

**Step 9: Draw player-colored army stacks** (bit 25 of flags)
```c
for player = 0 to 8:
    for each visible tile with armies of this player:
        armyType = (tileData >> 0x11) & 0x1F;
        armyCount = (tileData >> 0x0B) & 0x1F;
        FUN_10005d2c(gworld, player, armyType, armyCount, tileRow, tileCol);
```

**Step 10: Draw fortification indicators** (bit 24 of flags)
```c
fortLevel = (tileData2 >> 0x11) & 3;
if (fortLevel == 1) srcX = 0x1F;  // small fort
else srcX = 0x30;                  // large fort
// Blit at 0x0E x 0x10 pixels, offset by 0x0D into tile
```

**Step 11: Draw fog of war overlay** (if enabled at `+0x124`)
Two modes:
1. **Stipple mode** (no separate fog GWorld): Uses `CopyMask` with fog mask to darken tiles
   ```c
   fogRow = (tileData2 >> 0x1A) & 0x1F;
   // Source from fog sprite sheet at row * 0x29 offset
   FUN_10000258(..., 0x40, 0);  // CopyMask with srcCopy + 0x40 (ditherCopy)
   ```
2. **Full fog mode** (separate fog GWorld): Uses `CopyMask` with full fog texture

---

## 8. Terrain Tile Rendering

### Tile Data Format
Each map tile is a **32-bit value** stored at `*piRam10117358` with addressing:
```
tileAddr = mapBase + y * 0xE0 + x * 2
```
Note: despite each tile being 32 bits, the stride uses `x * 2` -- this means tiles overlap. The actual tile size is 4 bytes but indexed at 2-byte intervals, creating an interleaved format where adjacent tiles share bytes.

**Bit field layout (32-bit tile word):**
```
Bits 31-24: Terrain overlay type (0x00-0xFF)
  - Index into terrain type table at gameState + 0x711
  - Values: \x02=road, \x03=river, \x06=bridge, \x0A=city, \x0B=temple, etc.

Bits 23-22: Unknown flags
Bit 21:     Has special overlay (ruin/tower)
Bits 20-16: Army sprite type (0-31)
Bits 15-11: Army stack size (0-31)
Bits 10-7:  Owning player (0-15, with 0x0F = neutral)
Bits 6-0:   Base terrain type
```

### FUN_10064498 -- DrawSingleTile (952 bytes)
**Address:** 0x10064498
**Proposed Name:** `DrawSingleMapTile`

Draws a single terrain tile at given map coordinates. Used for incremental updates (e.g., after movement).

**Parameters:**
- `param_1` (short): Update mode (0 = normal, nonzero = full refresh with feature overlay)
- `param_2` (short): Map X coordinate
- `param_3` (short): Map Y coordinate

**Behavior:**
1. If `param_1 != 0`, calls `FUN_10063784` to refresh the feature overlay table
2. Loads sprite 7 (terrain) and locks pixels
3. Reads tile data at the coordinates
4. Determines terrain index from the top byte
5. If terrain index < 0x50 or > 0x5F (not a city tile):
   - Looks up the tile's appearance in a terrain lookup table
   - Calls `FUN_10009fa8` to blit the terrain tile
   - Also draws the adjacent tile (for the 2-pixel-wide tile format)
6. If terrain IS a city (0x50-0x5F):
   - Uses the city sprite sheet with different lookup tables
7. Draws up to 4 sub-tiles per terrain position (2x2 pixel blocks)

### FUN_10009fa8 -- DrawTilePixel (96 bytes)
**Address:** 0x10009fa8
**Proposed Name:** `BlitTerrainPixel`

Blits a single terrain "pixel" (actually a 2x2 block in the small map view) from the terrain sprite sheet.

**Parameters:**
- `param_1` (GWorld): Destination back buffer
- `param_2` (short): Destination X
- `param_3` (short): Destination Y
- `param_4` (short): Color index (player/terrain color)

Indexes into the color table and calls `FUN_100008e8` (MoveTo + DrawPixel equivalent).

---

## 9. Army Icon Drawing

### FUN_10060078 -- DrawArmyIcons (1384 bytes)
**Address:** 0x10060078
**Proposed Name:** `DrawArmyOverlayOnMap`

Draws all army stack icons on the map viewport. This is the army overlay layer drawn on top of terrain.

**Parameters:**
- `param_1` (Rect*): Optional dirty rect to limit drawing area, NULL for full viewport
- `param_2` (short): Index of currently selected army (-1 for none)

**Rendering Algorithm:**
1. Check fog-of-war visibility
2. Determine if in small viewport mode (scale factor)
3. Iterate over all army stacks (`0x1602` = stack count):
   ```c
   for (i = 0; i < *(short*)(gameState + 0x1602); i++) {
       armyX = *(short*)(gameState + 0x1604 + i * 0x42);
       armyY = *(short*)(gameState + 0x1606 + i * 0x42);
   ```
4. **Visibility check:**
   - If fog off: always draw
   - If fog on and `**(short*)(-0x18A8) == 0`: Check tile visibility bits
     ```c
     // Check 4 adjacent tiles for visibility (2x2 tile footprint)
     visible = (tileData[y][x] >> 0x1D) & 1 ||
               (tileData[y][x+1] >> 0x1D) & 1 ||
               (tileData[y+0x70][x] >> 0x1D) & 1 ||
               (tileData[y+0x70][x+1] >> 0x1D) & 1;
     ```

5. **Calculate screen position:**
   ```c
   screenX = armyX * 2 - 1;   // (or armyX if small viewport)
   screenY = armyY * 2 - 1;
   if (smallDirtyRect) {
       screenX -= viewportOffset.x;
       screenY -= viewportOffset.y;
   }
   ```

6. **Determine player color:**
   ```c
   terrainByte = *(char*)(gameState + (tileHighByte) + 0x711);
   // Special terrain check: if terrainByte is 0x0A (neutral) check further
   if (terrainByte + 10 == 0) {  // Neutral army
       playerColor = *(char*)(gameState + i*0x42 + 0x1619);
       if (playerColor == 0x0F) playerColor = 8;  // Neutral color
   }
   ```

7. **Blit army icon:**
   ```c
   FUN_100462c8(playerColor);  // Load player sprite sheet
   FUN_100451f4(playerColor);  // Lock pixels
   // armyRect from lookup table at iVar6 + playerColor * 8
   FUN_10009d38(spriteSheet, srcX, srcY, srcW, srcH, backBuffer, dstX, dstY);
   FUN_1004530c(playerColor);  // Unlock
   ```

8. **Draw selection highlight** for selected army:
   ```c
   if (i == selectedArmy) {
       FUN_1000a714(backBuffer, dstX-1, dstY-1, 10, 0);  // Horiz line top
       FUN_1000a714(backBuffer, dstX-1, dstY+9, 10, 0);  // Horiz line bottom
       FUN_1000a7cc(backBuffer, dstX-1, dstY-1, 10, 0);  // Vert line left
       FUN_1000a7cc(backBuffer, dstX+9, dstY-1, 10, 0);  // Vert line right
   }
   ```

### FUN_10005d2c -- DrawArmyInFullMap (612 bytes)
**Address:** 0x10005d2c
**Proposed Name:** `DrawArmyIconFullMap`

Draws a single army stack icon in the full map view (large 0x28 pixel tiles).

**Parameters:**
- `param_1` (GWorld): Target drawing surface
- `param_2` (short): Player color (0-8, 0x0F = neutral -> becomes 8)
- `param_3` (ushort): Army sprite type index
- `param_4` (short): Stack size (number of units)
- `param_5` (short): Map row
- `param_6` (short): Map column

**Behavior:**
1. Calculate source rect in army sprite sheet: type index determines row (0x20 high, 0x1D wide)
2. Draw army icon at `(row * 0x28 + 8, col * 0x28 + 7)` using `FUN_10009d38` (masked blit)
3. Draw horizontal lines for stack size indicator:
   ```c
   FUN_100479f4(0xe);   // Color = dark
   MoveTo(col*0x28+2, row*0x28); LineTo(0, 0x27);  // Full height line
   MoveTo(col*0x28+4, row*0x28); LineTo(0, 0x27);
   FUN_100479f4(0xd);   // Color = light
   MoveTo(col*0x28+3, row*0x28); LineTo(0, 0x27);  // Highlight line
   ```
4. If stack size > 4, draw additional icon at offset (0, 8):
   ```c
   FUN_10009d38(sheet, 0x1D0, puVar1[0], 0x30, 8, gworld, col*0x28, row*0x28+8);
   ```
5. Draw stack count indicator (capped at 4 sprites visible)

### FUN_10009d38 -- MaskedSpriteBlit (624 bytes)
**Address:** 0x10009d38
**Proposed Name:** `BlitSpriteWithMask`

The core masked sprite blitting function. Used throughout for drawing army icons, terrain overlays, and city sprites with transparency.

**Parameters:**
- `param_1` (int): Source image GWorld descriptor
- `param_2` (short): Source rect top
- `param_3` (short): Source rect left
- `param_4` (short): Source width
- `param_5` (short): Source height
- `param_6` (int): Destination GWorld descriptor
- `param_7` (short): Destination X
- `param_8` (short): Destination Y
- Plus additional params on stack: mask GWorld, color offsets

**Behavior:**
1. Save current port with `FUN_10000870`
2. Resolve GWorld pointers (handling the special "screen" GWorld sentinel)
3. Lock all three pixel maps (source, mask, dest)
4. Set up drawing environment with `FUN_10067270`
5. Compute source rect, mask rect, and dest rect
6. Call `FUN_100012f0` -- this is the actual `CopyMask` call:
   ```c
   FUN_100012f0(srcBitMap, maskBitMap, dstBitMap, srcRect, maskRect, dstRect);
   ```
7. Unlock all pixel maps
8. Restore saved port
9. Restore drawing state

### FUN_10009b48 -- SimpleBlit (496 bytes)
**Address:** 0x10009b48
**Proposed Name:** `BlitSpriteNormal`

Similar to FUN_10009d38 but uses `CopyBits` instead of `CopyMask` -- no transparency.

**Parameters:** Same pattern as FUN_10009d38 minus the mask.

**Behavior:**
1. Save/restore port
2. Lock source and dest pixel maps
3. Set up color table via `FUN_100b2268` (indexed by player color on stack)
4. Call `FUN_100008d0` -- this is `CopyBits`
5. Unlock pixel maps

---

## 10. Fog of War System

### Fog Implementation

Fog of war in Warlords II uses two rendering techniques:

**1. Stipple Fill (small map view):**
```c
FUN_10047cbc(backBuffer, viewport, 0xFF);  // Fill entire viewport with fog color
```
Then visible tiles are drawn on top using `CopyMask`, so only explored areas show terrain.

**2. Fog Mask Overlay (full map view):**
The full map view draws fog as a semi-transparent overlay:
```c
// Each tile with fog has a fog level (0x1A bits from tile data)
fogLevel = (tileData2 >> 0x1A) & 0x1F;
fogRow = fogLevel / 7;
// Source from fog sprite sheet at row * 0x29 offset
FUN_10000258(srcBitMap, fogBitMap, dstBitMap, srcRect, fogRect, dstRect, 0x40, 0);
// The 0x40 = ditherCopy transfer mode
```

### FUN_10047cbc -- FillWithFogColor (196 bytes)
**Address:** 0x10047cbc
**Proposed Name:** `FillRectWithColor`

Fills a rectangle in a GWorld with a specified color (usually 0xFF for fog).

**Parameters:**
- `param_1` (int): GWorld descriptor
- `param_2` (Rect*): Rectangle to fill (x, y, width, height format)
- `param_3` (short): Color index (0xFF = fog stipple)

**Behavior:**
1. Save port, switch to target GWorld
2. Convert (x,y,w,h) to Mac Rect (top,left,bottom,right) via `FUN_10003108`
3. Set foreground color via `FUN_100479f4(colorIndex)`
4. Call `FUN_10002148` -- PaintRect
5. Restore port

### Visibility Bit Checks

The fog system checks visibility at the tile level using bit 29 (0x20000000) of each tile:
```c
*(uint*)(tileAddr) >> 0x1D & 1  // If set, tile is visible to current player
```

For army icons, visibility is checked across the 2x2 tile footprint (any visible = show army).

---

## 11. Selection Highlight & Path Drawing

### FUN_1000a714 -- DrawHorizontalLine (184 bytes)
**Address:** 0x1000a714
**Proposed Name:** `DrawHLine`

Draws a horizontal line in a GWorld for selection highlights.

**Parameters:**
- `param_1` (int): GWorld descriptor
- `param_2` (short): X start
- `param_3` (short): Y position
- `param_4` (short): Length
- `param_5` (short): Color index

**Implementation:**
```c
SetPort(gworld);
SetForeColor(color);
MoveTo(x, y);
LineTo(length - 1, 0);  // Horizontal line
RestorePort();
```

### FUN_1000a7cc -- DrawVerticalLine (184 bytes)
**Address:** 0x1000a7cc
**Proposed Name:** `DrawVLine`

Draws a vertical line. Same structure as DrawHLine but:
```c
MoveTo(x, y);
LineTo(0, length - 1);  // Vertical line
```

### FUN_10061980 -- DrawPathArrow (280 bytes)
**Address:** 0x10061980
**Proposed Name:** `DrawMovementPathArrow`

Draws a directional arrow on the map showing an army's planned movement path.

**Parameters:**
- `param_1` (short): Map X
- `param_2` (short): Map Y
- `param_3` (short): Arrow direction index (0-7, from direction lookup table at `iRam10116004`)

**Behavior:**
1. Compute screen position: `screenX = (x*2 - 6 + 4) / 8 * 8`, `screenY = y*2 - 6`
2. Clamp to viewport bounds
3. Load sprite 9 (arrow/path icons)
4. Look up arrow sprite rect from direction table: `arrowTable[direction * 8]` gives (srcX, srcY, srcW, srcH)
5. Blit arrow using `FUN_10009d38`

### FUN_100614ac -- DrawMapWithArmyStacks (1236 bytes)
**Address:** 0x100614ac
**Proposed Name:** `DrawMapViewportWithArmies`

Draws the map viewport including all visible army stacks, with special handling for the selected army. This is a comprehensive redraw function that layers:

1. Terrain tiles (via FUN_10009b48 or FUN_10009d38 depending on fog mode)
2. Feature overlays (roads, ruins)
3. Army icons at their positions (iterates `+0x810` feature list)
4. Selection rectangle around selected army:
   ```c
   if (featureIndex == selectedArmy) {
       DrawHLine(backBuffer, x, y, 0xC, 0);      // Top
       DrawHLine(backBuffer, x, y+8, 0xC, 0);     // Bottom
       DrawVLine(backBuffer, x, y, 10, 0);         // Left
       DrawVLine(backBuffer, x+0xB, y, 10, 0);    // Right
   }
   ```

### FUN_10061a98 -- DrawMapWithPaths (1936 bytes)
**Address:** 0x10061a98
**Proposed Name:** `DrawMapViewportWithPaths`

Extended version of DrawMapViewportWithArmies that also draws:
1. Army movement paths (queued movement orders)
2. Path arrows showing direction
3. Destination indicators
4. Movement cost display using line drawing between waypoints

Uses `FUN_10061980` for individual path arrow segments and `FUN_1003a794` for path connecting lines.

---

## 12. Minimap / Fog Overlay -- FUN_100635e0

### FUN_100635e0 -- DrawMinimapFogOverlay (420 bytes)
**Address:** 0x100635e0
**Proposed Name:** `DrawMinimapFogOverlay`

Draws the fog-of-war overlay on the minimap GWorld.

**Behavior:**
1. Check if fog enabled: `if (*(short*)(*piRam1011735c + 0x124) != 0)`
2. Save port, switch to minimap GWorld at `iRam10117688`
3. Set color palette
4. Clear minimap with `FUN_1000a008(minimapGWorld, 0)` -- EraseRect
5. Iterate over entire map (0x70 columns x 0x9C rows):
   ```c
   for y = 0 to 0x70:
       for x = 0 to 0x9C:
           if ((tileData[y * 0x70 + x] >> 0x1D) & 1) {
               // Tile is visible -- draw colored 2x2 pixel
               FUN_10002148(rect);  // PaintRect
           }
           // Advance rect by 2 pixels
   ```
6. Each tile on the minimap is 2x2 pixels
7. Unlock and restore port

### FUN_100632a0 -- IncrementalMinimapUpdate (832 bytes)
**Address:** 0x100632a0
**Proposed Name:** `UpdateMinimapAroundTile`

Performs an incremental minimap update when a tile changes (army moves, city captured, etc.).

**Parameters:**
- `param_1` (short): Map X
- `param_2` (short): Map Y
- `param_3` (short): Redraw mode passed to FUN_10060608

**Behavior:**
1. Check fog enabled and player visibility
2. Determine update region size:
   - If city/temple/ruin tile: 5x5 tile region (param_1-2 to param_1+2)
   - Otherwise: 3x3 tile region
3. Clamp to map bounds (0-0x6F for X, 0-0x9B for Y)
4. Switch to minimap GWorld
5. Iterate over the region, drawing each visible pixel using `FUN_10009fa8`
6. Restore port
7. Call `FUN_100913cc` to hide minimap cursor
8. Call `FUN_10060608(param_3, 1, &updateRect)` to redraw the main map region

### FUN_100913cc / FUN_1009142c -- Minimap Cursor Show/Hide
**Addresses:** 0x100913cc (96 bytes), 0x1009142c (92 bytes)

These toggle the minimap viewport indicator cursor:
- `FUN_100913cc` (HideMinimapCursor): Sets flag at `+0x95` to 0, triggers view redraw
- `FUN_1009142c` (ShowMinimapCursor): Sets flag at `+0x95` to 1, triggers view redraw, sets global flag

Both call `FUN_1008455c()` to get the minimap view object, then `FUN_10117884` to invoke the view's draw method via vtable offset `+0x4D0`.

---

## 13. Scroll & Viewport System

### Viewport Globals
- `psRam10115ff4`: Current viewport position (x, y, width, height) in tile coordinates
- `psRam10115fec`: Scroll lock flag
- `ppuVar12[-0x62b]`: Current viewport rect (pixel coordinates)

### FUN_10063784 -- RefreshFeatureOverlay (884 bytes)
**Address:** 0x10063784
**Proposed Name:** `RefreshFeatureOverlayTable`

Rebuilds the feature overlay position data used for rendering cities, ruins, and army stacks. Called before any map redraw that affects feature positions.

### Scroll Mechanism

The map scrolls by adjusting the viewport offset stored at `psRam10115ff4`. When scrolling:
1. The viewport coordinates are updated
2. `FUN_100913cc()` hides the minimap cursor
3. `FUN_10060608(1, 1, NULL)` triggers a full viewport redraw
4. `FUN_1009142c()` shows the minimap cursor at new position

The `TWholeRedrawScroller` MacApp class handles the scroll bar and keyboard scroll input. The binary string `scrollMessage: No gScrollWindow` at 0x11DCF1 indicates scroll message handling.

### FUN_100226b0 -- SetViewportRect (36 bytes)
**Address:** 0x100226b0
**Proposed Name:** `SetRect4`

Simple helper to set a 4-short rect structure:
```c
void SetRect4(short* rect, short x, short y, short w, short h) {
    rect[0] = x; rect[1] = y; rect[2] = w; rect[3] = h;
}
```
Note: This uses (x, y, width, height) format, NOT Mac's (top, left, bottom, right).

---

## 14. Dialog / Window Rendering (MacApp TView)

### MacApp UI Classes (from binary strings)

**Custom game views:**
| Class Name | Purpose |
|-----------|---------|
| `TArmyBonusListView` | Army bonus display |
| `TStackInfoView` | Stack information panel |
| `TProdView` | City production dialog |
| `TTurnView` | Turn display / end turn button |
| `TFightOrderDialogBehavior` | Combat order selection |
| `TFightOrderProdView` | Fight order production view |
| `TFightResultDialogBehavior` | Combat results display |
| `TDiplomIconButton` | Diplomacy icon button |
| `TArmyDragger` | Army drag & drop handler |
| `TMoveArmyCommand` | Army movement command |
| `TMoveArmyByKeyCommand` | Keyboard army movement |

**MacApp framework UI classes:**
| Class Name | Purpose |
|-----------|---------|
| `TWholeRedrawScroller` | Full-redraw scroll view for map |
| `TScrollBar` | Standard scroll bar |
| `TPrimaryScroller` / `TSecondaryScroller` | Scroll coordination |
| `TDrawAdorner` | Custom drawing decorator |
| `T3DLineTopAdorner` | 3D line top border |
| `T3DScrollButtonAdorner` | 3D scroll button |
| `T3DIconAdorner` | 3D icon display |
| `TIconSuite` | Icon suite wrapper |
| `T3DScrollIconButton` | Scrollable icon button |
| `T3DDiamondIconButton` | Diamond-shaped icon button |
| `T3DCluster` / `IconRadio` | Radio button cluster |
| `TIcon` / `TSmallIcon` / `TSmallIconPattern` | Icon views |
| `TDrawingEnvironment` | Drawing state manager |
| `TResizeIconAdorner` | Resize handle adorner |
| `TBusyCursor` | Busy cursor handler |

### FUN_100672bc -- DrawTextInView (1412 bytes)
**Address:** 0x100672bc
**Proposed Name:** `DrawTextInView`

A comprehensive text-in-view drawing function used for dialog text, army names, city names, etc.

**Parameters:**
- `param_1` (byte*): Pascal string to draw
- `param_2` (short*): Bounding rectangle
- `param_3` (byte): Text style flags
- `param_4` (short): Font ID
- `param_5` (int*): View object pointer
- `param_6` (GWorld): Drawing context
- `param_7` (short): Foreground color
- `param_8` (short): Background color

**Behavior:**
1. Save drawing state with `FUN_10066bf4`
2. Calculate text metrics (line count, line height via `FUN_100ef96c`)
3. Center text vertically in bounding rect
4. For each line (split on `\r` or `\n`):
   - Set color based on view properties
   - If view has special flag at `+0x758`: Use custom colors
   - If view has flag at `+0x84`: Use alternate colors
   - Otherwise: Use default colors from param_7/param_8
   - Call `FUN_100efdd0` to actually render the text string
5. Restore drawing state with `FUN_10066c80`

### FUN_10066bf4 / FUN_10066c80 -- Save/Restore Drawing State
**Addresses:** 0x10066bf4 (140 bytes), 0x10066c80 (132 bytes)

Save and restore the complete drawing environment including:
- Pen state (`FUN_100ef8c8` / `FUN_100f0538`)
- Font state (`FUN_100ef824` / `FUN_100f03e8`)
- Color state (via `FUN_10000000` / `FUN_100016f8` -- GetForeColor/SetForeColor)
- Clipping region (`FUN_100f0688` / `FUN_100f0788`)

### FUN_10066d04 -- CreateTextDrawingContext (240 bytes)
**Address:** 0x10066d04
**Proposed Name:** `CreateTextDrawingContext`

Creates a drawing context for text rendering, including:
- Setting up the font metrics
- Computing text bounds
- Creating a clipping region for the text area

### FUN_10066e64 -- IterateTextLines (648 bytes)
**Address:** 0x10066e64
**Proposed Name:** `NextTextLine`

Iterates through multi-line text, calculating position for each line. Returns false when no more lines remain.

---

## 15. Combat Result Calculation -- FUN_100ac0cc

### Function Details
**Address:** 0x100ac0cc
**Size:** 8412 bytes (LARGEST function in binary)
**Proposed Name:** `CalculateCombatResult`

Despite being in the "rendering" investigation, this function is **NOT a rendering function**. It is the **combat resolution calculator** -- the largest and most complex function in the entire binary.

**Parameters:**
- `param_1` (short): Attacking army X coordinate
- `param_2` (short): Attacking army Y coordinate

### What It Does

This function computes the full combat result between an attacking army stack and the defending forces at a map location.

**Algorithm overview:**

1. **Determine terrain type** at target location:
   ```c
   terrainType = (tileData >> 0x10) & 0xF;
   if (terrainType < 8) sStack_12a = terrainType;
   else sStack_12a = 8;  // Cap at 8
   ```

2. **Check for city combat** (terrain type 0x0A):
   - If city: Gather 4 adjacent tiles for multi-tile city defense
   - Uses direction table at `iVar8 + -0x1058` and `iVar8 + -0x105C`
   - Copies army data from city tiles to local defense array

3. **Gather defending armies:**
   ```c
   // Iterate all armies at +0x182 (army count)
   for (i = armyCount-1; i >= 0; i--) {
       if (army[i].owner != currentPlayer &&
           army[i].x == targetX && army[i].y == targetY) {
           defenders[defCount++] = &army[i];
       }
   }
   ```

4. **Gather attacking armies** similarly.

5. **Compute army strengths:**
   For each unit in both attacker and defender lists:
   ```c
   FUN_10049628(unitType, &unitStats);  // Get unit base stats
   strength = unitStats.attack;
   // Check for hero bonus (unit type 0x1C = hero)
   if (unitType == 0x1C) {
       heroBonus = FUN_100abe94(armyPtr);
       strength += armyPtr->level + heroBonus;
   }
   ```

6. **Apply terrain modifiers** based on `sVar20` (terrain advantage):
   - Mode 0: Cavalry bonus (`local_94`)
   - Mode 1: Infantry bonus (`local_92`)
   - Mode 2: Ranged bonus (`local_90`)
   - Mode 3: Siege bonus (`local_8e`)

7. **Apply special abilities:**
   - `bVar14` / `bVar12`: Attacker/defender has flying units
   - `bVar17` / `bVar15`: Attacker/defender has siege capability
   - `bVar18` / `bVar16`: Attacker/defender has ranged ability
   - `bVar13` / `local_14e`: Attacker/defender has special item

8. **Check for fortification:**
   ```c
   if ((tileData >> 0x15) & 1) {
       // Fortified -- apply defense bonus
       local_14e = fortificationLevel;
   }
   ```

9. **Sort armies by combat priority** (insertion sort):
   ```c
   // Sorting both attacker and defender arrays by combat stat
   for (i = 1; i < defenderCount; i++) {
       // Insertion sort comparing acStack_f5[i] values
   }
   ```

10. **Calculate final combat values:**
    ```c
    attackerTotal = stackStrength + terrainBonus + fortification;
    defenderTotal = stackStrength + terrainBonus + fortification;
    // Cap at maxStrength (from +0x112)
    if (attackerTotal > maxStrength) attackerTotal = maxStrength;
    ```

11. **Compute per-unit combat ratings** (capped at 0x0F = 15):
    ```c
    for each unit:
        rating = baseStrength + heroBonus + terrainBonus + itemBonus;
        if (rating > 15) rating = 15;
        unitCombatRating[i] = rating;
    ```

**Output:** Combat ratings are stored in arrays at:
- `*(int*)(iVar8 + -0x108)`: Attacker unit ratings
- `*(int*)(iVar8 + -0x100)`: Defender unit ratings
- `*(int*)(iVar8 + -0x10C)`: Attacker garrison flags
- `*(int*)(iVar8 + -0x104)`: Defender garrison flags

---

## 16. Animation System

### Army Movement Animation

Army movement animation is handled through incremental map redraws:

**FUN_100614ac (DrawMapViewportWithArmies)** is called repeatedly during movement, each time with the army at a new position. The animation steps are:

1. Hide army at old position (redraw terrain)
2. Update army coordinates in game state
3. Call `FUN_10060608` with dirty rect to redraw the affected tiles
4. Draw army at new position
5. Short delay (likely via `Delay` or `TickCount` polling)

### Combat Animation

The `TFightOrderDialogBehavior` and `TFightResultDialogBehavior` classes handle combat presentation:

1. **Pre-combat:** `TFightOrderDialogBehavior` shows attack order dialog
2. **Combat resolution:** `FUN_100ac0cc` calculates results
3. **Post-combat:** `TFightResultDialogBehavior` displays results with unit casualties

### Selection Blink Animation

The selected army blinks on the map. This is controlled by the flag at `ppuVar12[-0x629]`:
```c
// In FUN_10060608:
if (redrawMode == 0 || (blinkFlag != 0 && forceRedraw == 0)) {
    *(short*)ppuVar12[-0x629] = 0;  // Blink off
} else {
    FUN_10060078(&viewportRect, -1);  // Draw without selection
    *(short*)ppuVar12[-0x629] = 1;   // Blink on
}
```

### Path Arrow Animation

Movement path arrows are drawn incrementally as the player plans a route:
- `FUN_10061980` draws individual arrows
- Arrow direction sprites are stored in the army sprite sheet (sprite 9)
- 8 directions indexed by direction table at `iRam10116004`

---

## 17. Text Rendering

### Text Pipeline

1. **Font setup:** `FUN_100b2268(colorTable + fontOffset)` sets text color, `TextFont`/`TextSize`/`TextFace` set font properties
2. **String preparation:** Pascal strings (first byte = length) are standard
3. **Rendering:** `FUN_100efdd0` is the main text draw function, wrapping `DrawString`
4. **Measurement:** `FUN_10003768` wraps `StringWidth`, `FUN_100ef96c` wraps `GetFontInfo` for line height

### FUN_100670ec -- SetFontByMode (140 bytes)
**Address:** 0x100670ec

Sets the font rendering mode:
- Mode `\x01`: Uses font at `ppuVar2[-0x601]` (normal text font)
- Mode `\x02`: Uses font at `ppuVar2[-0x5FF]` (bold/header font)

Calls `FUN_100035d0` which maps to `TextFont` or similar.

---

## 18. Sprite Sheet Layout

### Sprite ID Map

Based on analysis of `FUN_10044d8c` and `FUN_100453f0`:

| ID | Name | Source | Dimensions | Contents |
|----|------|--------|------------|----------|
| 5 | Terrain variant | Terrain file | varies | Alternative terrain tiles |
| 7 | Main terrain | Resource fork | large | Base terrain tile sheet |
| 9 | Army icons (small) | Resource fork | varies | Army sprites for small map + path arrows |
| 0x10-0x18 | Player army sets | Army files | 0x1D x 0x20 per unit | Per-player colored army sprites |
| 0x1A | Terrain sheet A | Terrain file | 14*0x28 wide | Terrain tiles for full map view |
| 0x1B | Terrain sheet B / mask | Terrain file | varies | Terrain mask sheet |
| 0x26 | Special terrain | Terrain file | varies | Special terrain variant |
| 0x29 | Army overlay | Terrain file | varies | Army sprite overlay for terrain |
| 0x2A | General overlay | Special | varies | Fortification/road overlays |
| 0x47+ | Named PICTs | Resource fork | varies | Named PICT resources |
| 0x50 | Small viewport | Resource fork | varies | Used in small viewport mode |

### Terrain Tile Sheet Organization

The terrain sprite sheet contains tiles in rows of 16 tiles per row:
```
Row 0-1: Basic terrain (14 tiles x 2 rows = 28 tiles)
Row 2-3: River/road terrain (4 tiles x 2 rows = 8 tiles)
Row 4-5: Extended terrain (16 tiles x 2 rows = 32 tiles)
```

Each tile in the full map view is 0x28 x 0x28 pixels (40 x 40).
Each tile in the small map view is 2 x 2 pixels.

### Army Sprite Sheet Organization

Per-player army sprite sheets contain:
```
0x1D (29) pixels wide x 0x20 (32) pixels tall per unit type
Arranged in a strip, indexed by army type * 0x20
Special positions:
  0x1D0: Stack size indicator sprites (at 0x30 x 8 pixels)
```

---

## 19. Key Global Variables

| Address | Type | Name/Purpose |
|---------|------|-------------|
| `piRam1011735c` | int* | Main game state pointer |
| `*piRam1011735c + 0x110` | short | Current player index |
| `*piRam1011735c + 0x112` | short | Max army strength |
| `*piRam1011735c + 0x11E` | short | Feature overlay mode |
| `*piRam1011735c + 0x124` | short | Fog of war enabled flag |
| `*piRam1011735c + 0x15A` | short | Scroll lock / update suppression |
| `*piRam1011735c + 0x176` | short | Map Y scroll offset |
| `*piRam1011735c + 0x178` | short | Map X scroll offset |
| `*piRam1011735c + 0x182` | short | Total army count |
| `*piRam1011735c + 0x711` | char[] | Terrain type lookup table |
| `*piRam1011735c + 0x810` | short | Feature (city/ruin) count |
| `*piRam1011735c + 0x1602` | short | Army stack count |
| `*piRam1011735c + 0x1604 + i*0x42` | short | Army stack X position |
| `*piRam1011735c + 0x1606 + i*0x42` | short | Army stack Y position |
| `*piRam1011735c + 0x1619 + i*0x42` | char | Army stack owner player |
| `*piRam1011735c + 0x1631 + i*0x42` | char | Army stack movement status |
| `*piRam1011735c + 0x1636 + i*0x42` | short | Army stack destination flag |
| `*piRam1011735c + 0x1638 + i*0x42` | short | Army stack destination tile |
| `*piRam1011735c + 0x163A + i*0x42` | short | Army stack destination column |
| `*piRam10117358` | int* | Map tile data pointer |
| `piRam10117354` | int* | Map visibility data pointer |
| `iRam10115ee4` | int | Sprite table base address |
| `psRam10115ee8` | short* | Sprite table entry count |
| `uRam101176cc` | uint | Color palette table base |
| `iRam10117688` | int | Minimap GWorld descriptor |
| `iRam10115ff0` | int | Main back buffer GWorld descriptor |
| `piRam10115fe8` | int* | Screen/window GWorld descriptor pointer |
| `iRam10116004` | int | Path arrow direction table |
| `iRam10116008` | int | Army movement icon table |
| `iRam10115fe4` | int | Player color icon lookup table |
| `psRam10115fec` | short* | Scroll/update suppression flag |
| `psRam10115ff4` | short* | Current viewport rect (tile coords) |
| `psRam10115ff8` | short* | Force redraw flag |
| `iRam10117424` | int | Map descriptor struct pointer |
| `piRam101163b0` | int* | Active window/view pointer |
| `puRam10115f04` | byte* | Pattern draw mode flag |
| `piRam1011734c` | int* | Resource file manager pointer |

---

## 20. Function Reference Table

### Core Rendering Functions

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `10060608` | 3404 | `DrawMapViewport` | Map rendering |
| `10060078` | 1384 | `DrawArmyOverlayOnMap` | Army rendering |
| `10005f90` | 7312 | `DrawFullMapView` | Full map view |
| `10005d2c` | 612 | `DrawArmyIconFullMap` | Army rendering |
| `10064498` | 952 | `DrawSingleMapTile` | Tile rendering |
| `100632a0` | 832 | `UpdateMinimapAroundTile` | Minimap |
| `100635e0` | 420 | `DrawMinimapFogOverlay` | Minimap |
| `100614ac` | 1236 | `DrawMapViewportWithArmies` | Map rendering |
| `10061a98` | 1936 | `DrawMapViewportWithPaths` | Path rendering |
| `10061354` | 344 | `DrawSelectedArmyHighlight` | Selection |
| `10061980` | 280 | `DrawMovementPathArrow` | Path rendering |
| `10063784` | 884 | `RefreshFeatureOverlayTable` | Map support |
| `10039ec8` | 556 | `SetupTileOverlays` | Map support |

### Sprite/Blit Functions

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `10009d38` | 624 | `BlitSpriteWithMask` | Core blit |
| `10009b48` | 496 | `BlitSpriteNormal` | Core blit |
| `10009fa8` | 96 | `BlitTerrainPixel` | Terrain blit |
| `1000a714` | 184 | `DrawHLine` | Line drawing |
| `1000a7cc` | 184 | `DrawVLine` | Line drawing |
| `10047cbc` | 196 | `FillRectWithColor` | Fill |
| `100479f4` | 112 | `SetDrawingColor` | Color |
| `10047a64` | 88 | `BlitToScreen` | Screen blit |

### Sprite Loading

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `100462c8` | 212 | `EnsureSpriteLoaded` | Loading |
| `10044d8c` | 832 | `LoadSprite` | Loading |
| `100451f4` | 184 | `EnsureSpriteAndLock` | Loading |
| `1004530c` | 228 | `UnlockAndReleaseSprite` | Loading |
| `100453f0` | 1752 | `LoadTerrainSet` | Loading |
| `10044c60` | 216 | `LoadPICTByName` | Loading |
| `10044d38` | 84 | `LoadPICTByID` | Loading |
| `1005262c` | 724 | `BuildSpriteMask` | Loading |
| `100450f4` | 124 | `UnloadSprite` | Loading |

### GWorld Management

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `1000a12c` | 956 | `CreateOrResizeGWorld` | GWorld |
| `10000870` | ~24 | `GetCurrentGWorld` | GWorld |
| `10000888` | ~24 | `SetCurrentGWorld` | GWorld |
| `10009a98` | ~24 | `LockGWorldPixels` | GWorld |
| `10009b00` | ~24 | `UnlockGWorldPixels` | GWorld |

### Drawing State

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `10066bf4` | 140 | `SaveDrawingState` | State |
| `10066c80` | 132 | `RestoreDrawingState` | State |
| `10067270` | 76 | `SetupDrawingEnvironment` | State |
| `10066d04` | 240 | `CreateTextDrawingContext` | State |
| `10066e64` | 648 | `NextTextLine` | Text |
| `100672bc` | 1412 | `DrawTextInView` | Text |
| `100670ec` | 140 | `SetFontByMode` | Text |

### Utility

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `100226b0` | 36 | `SetRect4` | Rect |
| `1002269c` | ~36 | `SetPoint` | Point |
| `100226d4` | 100 | `ConvertRect` | Rect |
| `100b0578` | ~24 | `MakeQDRect` | Rect |
| `100b065c` | ~24 | `OffsetQDRect` | Rect |
| `10003108` | ~40 | `SetMacRect` | Rect |

### Minimap

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `100913cc` | 96 | `HideMinimapCursor` | Minimap |
| `1009142c` | 92 | `ShowMinimapCursor` | Minimap |

### Combat (not rendering, but analyzed)

| Address | Size | Proposed Name | Category |
|---------|------|---------------|----------|
| `100ac0cc` | 8412 | `CalculateCombatResult` | Combat |
| `100abd8c` | varies | `GetTerrainAdvantage` | Combat |
| `100abe94` | varies | `GetHeroBonus` | Combat |
| `100abf8c` | varies | `GetArmyStrength` | Combat |

---

## 21. Rendering Pipeline Summary

### Per-Frame Map Draw

```
1. FUN_10060608(redrawMode, forceRedraw, dirtyRect)
   |
   +-- Check fog of war state (gameState + 0x124)
   +-- Check current player visibility (gameState + 0xD0 + player*2)
   +-- Compute viewport bounds
   |
   +-- FUN_1000a12c()  [Create/resize back buffer if needed]
   +-- FUN_100462c8(7)  [Ensure terrain sprite loaded]
   +-- FUN_100451f4(7)  [Lock terrain pixels]
   |
   +-- FUN_10000870()  [Save current port]
   +-- FUN_10000888()  [Switch to back buffer]
   +-- FUN_10067270()  [Setup drawing environment]
   |
   +-- IF no fog:
   |     FUN_100008d0()  [CopyBits terrain to back buffer]
   +-- IF fog, full redraw:
   |     FUN_10047cbc()  [Fill with fog color]
   |     FUN_100012f0()  [CopyMask visible terrain]
   +-- IF fog, partial:
   |     [Draw into small temp buffer, then composite]
   |
   +-- FUN_10060078()  [Draw army icons on top]
   |     |
   |     +-- For each army stack:
   |           FUN_100462c8(playerColor)
   |           FUN_10009d38()  [Masked blit army sprite]
   |           IF selected: FUN_1000a714/FUN_1000a7cc [Selection rect]
   |
   +-- FUN_1004530c(7)  [Unlock terrain pixels]
   +-- FUN_10000888()  [Restore original port]
   |
   +-- Update minimap if needed
   +-- Blink selected army (toggle flag)
```

### Full Map View Draw

```
1. FUN_10005f90()
   |
   +-- Allocate coordinate list
   +-- First pass: identify all visible tiles
   |
   +-- LAYER 1: Terrain tiles (sprite 0x1A + mask 0x1B)
   +-- LAYER 2: Road overlays (bit 28)
   +-- LAYER 3: Army movement icons (bit 27, sprite 9)
   +-- LAYER 4: City overlays (bit 29, sprite 0x29)
   +-- LAYER 5: Temple/ruin overlays (bit 26, sprite 9)
   +-- LAYER 6: Player army stacks (bit 25)
   |     +-- For each player 0-8:
   |           FUN_10005d2c() per visible stack
   +-- LAYER 7: Fortification indicators (bit 24)
   +-- LAYER 8: Strategic icons (bit 23)
   +-- LAYER 9: Fog of war overlay (if enabled)
   |     +-- CopyMask with ditherCopy mode
```

### Sprite Loading Pipeline

```
1. FUN_100462c8(spriteID)  [EnsureSpriteLoaded]
   |
   +-- Check if already loaded (bit 29 of sprite flags)
   +-- If loaded: FUN_10045f0c [Validate/touch]
   +-- If not:
         +-- Find LRU sprite in same group
         +-- FUN_100450f4() [Unload LRU sprite]
         +-- FUN_10044d8c(spriteID) [Load new sprite]
               |
               +-- Determine source type (bits 30-31):
               |     Type 0: Named PICT resource
               |     Type 1: Terrain file PICT
               |     Type 2: Army file PICT
               |     Type 3: Special PICT
               |
               +-- FUN_10044c60() or FUN_10044d38() [Load PICT]
               |     +-- GetResource/GetNamedResource('PICT', ...)
               |     +-- FUN_10044a10() [DrawPicture into GWorld]
               |
               +-- If has mask (bit 26):
                     FUN_1005262c() [Build transparency mask]

2. FUN_100451f4(spriteID)  [Lock pixels]
   |
   +-- FUN_10001290() [HLock image handle]
   +-- FUN_10001d70() [If not valid, reload]
   +-- If mask: also lock mask handle

3. [Drawing happens here...]

4. FUN_1004530c(spriteID)  [Unlock]
   |
   +-- FUN_10003468() [HUnlock image handle]
   +-- If mask: also unlock mask handle
```

---

## Notes for Faithful Reproduction

1. **Tile coordinate system:** Map is 112x156 tiles. Tiles are accessed at 2-byte stride but are 4 bytes wide (interleaved). Screen position = tile * 2 pixels.

2. **The "small viewport" mode** halves all coordinates when the window is smaller than 0x71 pixels wide. This was likely for 512x342 Mac Classic screens.

3. **Army stacks are 0x42 (66) bytes each**, starting at gameState + 0x1604. Max 255 stacks.

4. **Features (cities/ruins) are 0x20 (32) bytes each**, starting at gameState + 0x812.

5. **The terrain type table** at gameState + 0x711 maps terrain indices to behavior classes (sea=0x0E, city=0x0A, temple=0x0B, etc.).

6. **Fog uses bit 29** of the tile word. When set, the tile is currently visible. When clear, the tile shows fog.

7. **Combat ratings cap at 15** (4 bits). The strength formula includes base unit strength + hero bonus + terrain modifier + item bonus + fortification.

8. **PICT resources** are the standard Mac resource fork format. They need to be drawn into GWorlds via `DrawPicture` before they can be used with `CopyBits`/`CopyMask`.

9. **Transparency** is achieved via `CopyMask` with a separate 1-bit mask GWorld, not via alpha blending.

10. **The color palette** at `uRam101176cc` is indexed by `(index * 5 - index) * 2` which is `index * 8` -- suggesting 8-byte color entries (6 bytes RGB + 2 bytes padding, or possibly CLUT index entries).
