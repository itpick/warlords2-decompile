# UI Control Window (Info Panel)

Layout, behavior, and button command mapping for the in-game control panel drawn below the minimap.

---

## Window Geometry

The info panel sits below the minimap and matches its width:
```c
short infoTop = overRect.bottom + 2;
short infoW   = overRect.right - overRect.left;  // matches minimap width
SetRect(&infoRect, 514, infoTop, 514 + infoW, infoTop + 124);
```

Height: **124 px** fixed.

---

## Layout

```
+----------------------------------------------------------+
|  [marble background - PICT 1001 tiled]                   |
|                                                          |
|  TOP ROW (y+10):                    SCROLL PAD (y+10):   |
|  [cmd0][cmd1][cmd2][cmd3][cmd4]     [NW][N ][NE]         |
|   22x22 buttons, 10px gap           [W ][ C][E ]         |
|   left+7px padding                  [ SW][ S][SE]         |
|                                     16x16, right-aligned  |
|  MIDDLE ROW (y+41):                                      |
|  [Cancel] [?] [Disband]                                  |
|   23x23   23   23x23  (icon-only, no text labels)        |
|  cicn1005  diamond  cicn1006                             |
|            cicn1020                                      |
|                                                          |
|  BOTTOM ROW (y+76):                SWORDS (bottom-right): |
|  [Search][MoveAll][Heroes][EndTurn] [Crossed Swords]     |
|   35x35 buttons, 4px gap            54x54, cicn 1007     |
|   left+7px padding                  5px from edges       |
+----------------------------------------------------------+
```

---

## Complete Button Command Mapping

### Original Game: 26 T3DIconRadio Buttons (View 2000)

The original MacApp UI had 26 configurable toolbar buttons in a `T3DCluster`, plus 2 `TSunkenText` status displays, `T3DButton` for End/Save Turn, and `T3DDiamondIconButton` for search. Our info panel shows a subset of these.

Complete command ID table from `sButtonCommands[26]`:

| Index | cicn ID | Command | Action | Menu Equivalent |
|-------|---------|---------|--------|-----------------|
| 0 | 2000 | 0x057B | Move All Armies | Orders > Move All |
| 1 | 2001 | 0x0584 | Disband Group | Orders > Disband |
| 2 | 2002 | 0x0585 | Change Signpost | Orders > Signpost |
| 3 | 2003 | 0x06AB | View Stack | View > Stack |
| 4 | 2004 | 0x05E3 | Quest Report | View > Quest |
| 5 | 2005 | 0x06A7 | Build | View > Build |
| 6 | 2006 | 0x06A6 | Cities | View > Cities |
| 7 | 2007 | 0x06A8 | Production | View > Production |
| 8 | 2008 | 0x06A9 | Vectoring | View > Vectoring |
| 9 | 2009 | 0x06AA | Ruins | View > Ruins |
| 10 | 2010 | 0x0709 | City History | History > Cities |
| 11 | 2011 | 0x070A | Event History | History > Events |
| 12 | 2012 | 0x070B | Gold History | History > Gold |
| 13 | 2013 | 0x070C | Winning History | History > Winning |
| 14 | 2014 | 0x070D | Triumphs | History > Triumphs |
| 15 | 2015 | 0x05DD | Army Report | Report > Army |
| 16 | 2016 | 0x05DE | City Report | Report > City |
| 17 | 2017 | 0x05DF | Gold Report | Report > Gold |
| 18 | 2018 | 0x05E0 | Production Report | Report > Production |
| 19 | 2019 | 0x05E1 | Winning Report | Report > Winning |
| 20 | 2020 | 0x0640 | Inspect Heroes | Heroes > Inspect |
| 21 | 2021 | 0x0641 | Plant Flag | Heroes > Plant Flag |
| 22 | 2022 | 0x0642 | Hero Levels | Heroes > Levels |
| 23 | 2023 | 0x0643 | Search | Heroes > Search |
| 24 | 2024 | 0x076C | End Turn | Game > End Turn |
| 25 | 2025 | 0x0773 | Save and End Turn | Game > Save+End |

---

## Button Details & Disable Rules

### Global Disable Conditions

ALL buttons (except navigation arrows and diamond ?) should be **greyed out** when:
- It is an **AI player's turn** (gs+0x110 indicates AI current player)
- A **modal dialog** is open
- The game is **loading or initializing**

The original `DisableAllToolbar` (FUN_1003dcb4, 1020 bytes) disables all 26 buttons during AI turns.

---

### Top Row (5 command buttons)

- Position: `r.top + 10`, `r.left + INFO_LEFT_PAD (7)`
- Size: 22x22 each, 32px pitch (22 + 10 gap)
- Icons: `sCmdIcons[0..4]` (cicn 1000-1004), drawn in order `{0, 2, 1, 3, 4}`

| Pos | cicn | Icon | Action | Greyed Out When |
|-----|------|------|--------|-----------------|
| 0 | 1000 | Move/feet | **TODO**: unmapped | No army selected, or no movement possible |
| 1 | 1002 | Arrow/direction | **TODO**: unmapped | No army selected |
| 2 | 1001 | Alert/warning | **TODO**: unmapped | No army selected |
| 3 | 1003 | Guard/shield | **TODO**: unmapped | No army selected |
| 4 | 1004 | Deselect/X | **TODO**: unmapped | No army selected |

**Status:** These 5 buttons are drawn but have no click handlers or command dispatch yet. They need to be mapped to specific commands from the 26-button table above. Likely candidates:
- Slot 0 → View Stack (0x06AB) or Move Group
- Slot 1 → Guard/Fortify
- Slot 2 → Change Signpost (0x0585)
- Slot 3 → Defend/Garrison
- Slot 4 → Deselect army

---

### Scroll Pad (3x3 navigation grid) -- NEVER GREYED OUT

- Position: `r.right - 62`, `r.top + 10`
- Size: 16x16 per button, 18px pitch
- Icons: `sScrollIcons[0..8]` (cicn 1011-1019)
- Layout: NW/N/NE, W/Center/E, SW/S/SE
- Scroll amount: ±3 tiles per click
- Center button: no-op or recenter view
- **Always enabled** -- navigation is never disabled

---

### Middle Row (3 buttons)

- Position: `r.left + INFO_LEFT_PAD`, `r.top + 41`
- All three are 23x23, icon-only (no text labels), spaced 27px apart

#### Cancel Path (left)
| Property | Value |
|----------|-------|
| Size | 23x23 |
| Icon | cicn 1005 (`sStatusIcons[0]`) |
| Command | 0x057C (Orders > Cancel Path) |
| Action | Clears queued movement orders: `army+0x32 = 0`, target coords `army+0x34,0x36 = -1` |
| **Greyed Out** | No army selected, OR selected army has no queued movement (`*(short*)(army+0x32) == 0`) |

#### Diamond ? (center) -- NEVER GREYED OUT

| Property | Value |
|----------|-------|
| Size | 23x23 diamond (OpenPoly rotated square) |
| Icon | cicn 1020 (`sDiplomIcon`) centered 14x14 |
| Command | 0x0643 (Heroes > Search) |
| Action | Searches ruins/temples when hero is on searchable site |
| **Greyed Out** | **Never** -- always visually enabled per design choice |

Note: The original game's `T3DDiamondIconButton` DID grey this out when conditions weren't met (no army, no hero, not on searchable site). We keep it always visible but clicking does nothing when conditions aren't met.

#### Disband (right)

| Property | Value |
|----------|-------|
| Size | 23x23 |
| Icon | cicn 1006 (`sStatusIcons[1]`) |
| Command | 0x0584 (Orders > Disband Group) |
| Action | Removes selected army permanently after confirmation dialog |
| **Greyed Out** | No army selected (`sSelectedArmy < 0`) |

---

### Bottom Row (4 shortcut buttons)

- Position: `r.top + 76`, `r.left + INFO_LEFT_PAD`
- Size: 35x35 each, 39px pitch (35 + 4 gap)
- Default slots: `sShortcutSlot[4] = {23, 0, 20, 24}`

#### Slot 0: Search

| Property | Value |
|----------|-------|
| Index | 23 |
| Icon | cicn 2023 (search/?) |
| Command | 0x0643 → `HandleMenuChoice((6L << 16) | 4)` |
| Action | Search ruin/temple at hero location |
| **Greyed Out** | No army selected, OR no hero in army, OR hero not on searchable site (site_type 2, 5, or 6) |

#### Slot 1: Move All Armies

| Property | Value |
|----------|-------|
| Index | 0 |
| Icon | cicn 2000 (feet) |
| Command | 0x057B → `HandleMenuChoice((4L << 16) | 5)` |
| Action | Executes all queued movement orders for all armies |
| **Greyed Out** | No armies have queued movement orders (no army with `army+0x32 >= 1`) |

#### Slot 2: Inspect Heroes

| Property | Value |
|----------|-------|
| Index | 20 |
| Icon | cicn 2020 (hero inspect) |
| Command | 0x0640 → `ShowHeroInspect()` |
| Action | Opens hero inspector dialog |
| **Greyed Out** | No active heroes exist (all hero_active flags at gs+0x1422 are 0) |

#### Slot 3: End Turn

| Property | Value |
|----------|-------|
| Index | 24 |
| Icon | cicn 2024 (shield) |
| Command | 0x076C → `HandleMenuChoice((9L << 16) | 1)` |
| Action | Ends current player turn. Prompts confirmation if unmoved armies exist. |
| **Greyed Out** | **Never** -- End Turn is always available during human player's turn |

---

### Crossed Swords (bottom-right)

| Property | Value |
|----------|-------|
| Position | 5px from right edge, 5px from bottom edge |
| Size | 54x54 |
| Icon | cicn 1007 (`sSwordsIcon`) |
| Command | **TODO**: unmapped -- no click handler exists |
| Action | Unknown. Possibly: open combat preview, or show army strength summary |
| **Greyed Out** | No army selected, OR no enemy army adjacent |

---

## Disable Rendering

When a button is greyed out, it should be drawn with:
```c
// Dimmed face color instead of normal grey
RGBColor dimFace = {0x9999, 0x9999, 0x9999};
RGBForeColor(&dimFace);
PaintRoundRect(&btnRect, BTN_ROUND, BTN_ROUND);

// Dimmed frame
RGBColor dimFrame = {0x7777, 0x7777, 0x7777};
RGBForeColor(&dimFrame);
FrameRoundRect(&btnRect, BTN_ROUND, BTN_ROUND);

// No 3D highlight
// Icon drawn at 50% opacity or with grey overlay
```

---

## Army Record Offsets for Button State

Key fields checked when determining button enable/disable:

| Offset | Type | Field | Used By |
|--------|------|-------|---------|
| +0x15 | byte | `owner` (0-7 faction, 0x0F neutral) | Verify army belongs to current player |
| +0x16 | byte[4] | `unit_types[0-3]` (0xFF = empty) | Check for hero unit (type 0x1C) |
| +0x2D | byte | `hero_present` (0 = no hero) | Quick hero check |
| +0x2E | byte | `current_movement_points` | Check if army can still move |
| +0x32 | short | `has_orders` (0=idle, >=1=moving) | Cancel Path, Move All |
| +0x34 | short | `target_x` (-1 = none) | Movement target |
| +0x36 | short | `target_y` (-1 = none) | Movement target |

---

## TSunkenText Status Displays (Original)

The original UI had 2 sunken text areas at the top of the control window:

| Position | Content | Updates When |
|----------|---------|-------------|
| Top left | Gold amount (e.g. "158 gold") | Turn start, after income/spending |
| Top right | Status text (e.g. "Army selected", "Hero present") | Selection changes, action results |

**Status:** Not implemented in our version. Could be added above the top row buttons.

---

## Icon Resource Summary

| Resource Range | Array | Count | Purpose |
|---------------|-------|-------|---------|
| cicn 1000-1005 | `sCmdIcons[6]` | 6 | Top row command buttons |
| cicn 1005-1009 | `sStatusIcons[5]` | 5 | Middle row Path/Disband + extras |
| cicn 1007 | `sSwordsIcon` | 1 | Crossed swords |
| cicn 1011-1019 | `sScrollIcons[9]` | 9 | Scroll pad arrows |
| cicn 1020 | `sDiplomIcon` | 1 | Diamond ? button |
| cicn 2000-2025 | `sShortcutIcons[26]` | 26 | Bottom row shortcut buttons |
| cicn 128-135 | `sShieldIcons[8]` | 8 | Status bar faction shields |

---

## Status Bar (Shield Bar)

The status bar is drawn at the bottom of the main game window, showing faction shields.

**Position:** Bottom of main window, full width
**Height:** ~30px
**Content:** 8 faction shield icons (cicn 128-135) spaced evenly

Shield icons are loaded from the Shields resource file via `LoadShieldIcons()` at line 1519. Colors are remapped to match pltt 1000 via `RemapShieldColors()` at line 1561.

**Known issue:** Shield colors don't exactly match original at >8-bit depth because PlotCIcon uses raw cicn CLUT colors instead of palette-mapped colors.

---

## Implementation Status

| Feature | Status | Notes |
|---------|--------|-------|
| Top row drawing | Done | 5 buttons drawn, no click handlers |
| Top row commands | **TODO** | Need to map to specific commands |
| Middle row drawing | Done | 23x23 icon-only buttons |
| Middle row click handlers | **TODO** | Cancel Path and Disband need handlers |
| Diamond ? click | Done | Triggers search via menu dispatch |
| Bottom row drawing | Done | 4 shortcut buttons |
| Bottom row click | Partial | Search and End Turn mapped; Move All and Heroes need handlers |
| Scroll pad drawing | Done | 3x3 grid |
| Scroll pad click | Done | All 9 directions work |
| Swords drawing | Done | 54x54 icon |
| Swords click | **TODO** | No handler |
| Button greying | **TODO** | No disable logic implemented |
| TSunkenText displays | **TODO** | Not implemented |
