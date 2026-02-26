# City Build Selection Dialog — Design

**Date**: 2026-02-26
**Status**: Approved
**Reference**: `tools/qemu/reference/original_build_selection.png`

## Overview

Replace the current modal `ShowCityProductionDialog` popup with `ShowCityBuildSelection` — a full-window overlay that matches the original Warlords II city production UI exactly.

## Approach

**Full-window replacement (Approach A)**. A new `CWindow` the same size as the main game window. Left half renders the live map; right half renders the city production panel. Closes on Done and returns to the game. Self-contained function (no game-loop coupling), consistent with how `ShowCityDialog`, `ShowHeroHire`, and `ShowTurnSplash` are all implemented.

## Window & Layout

- **Window size**: matches `*gMainGameWindow` portRect (typically 512×342)
- **Left zone** (x=0 to ~252): map rendered at current viewport using existing map-draw code; red 3px rectangle drawn around the capital city tile
- **Right zone** (x=252 to window right): marble background (`DrawMarbleBackground`), then:
  - **Row 1** (y≈8–38): faction name in Illuria 24pt gold
  - **Row 2** (y≈44–66): "CAPITAL" label + small shield (`DrawShieldIcon(playerIdx)`), "Current:" text + ring indicator showing current production (empty grey ring if none set)
  - **Row 3** (y≈72–112): up to 4 unit type icons from city production slots (`extCity+0x06..0x0D`), each with a 36×36 selection ring drawn behind the sprite; selected = solid purple/blue fill (~`0x6666, 0x5555, 0xCCCC`), unselected = grey outline only; STOP button (red filled rounded rect, bold white "STOP") at right end of row
  - **Row 4** (y≈280–320): 4 bottom action icon buttons (same as existing city dialog) + "Done" button (marble-style rounded rect)
- City name from `city+0x04`; faction name from `gs + playerIdx * FACTION_NAME_LEN`

## Components

- **Map rendering**: reuse existing map-drawing code, no new renderer
- **Selection rings**: drawn procedurally with `FrameOval` / `PaintOval`; unit sprite centered on top
- **Unit icons**: from `sUnitSpriteGWorlds[]`, up to 4 slots from `extCity+0x06..0x0D`; fallback to first 4 types if no slots defined
- **"Current:" indicator**: ring + sprite of `extCity+0x02`; grey empty ring if `-1`
- **STOP button**: procedurally drawn, no resource needed
- **Bottom buttons**: same PICT-based action icons as `ShowCityDialog`
- **Capital shield**: `DrawShieldIcon(playerIdx)` (existing function)

## Interaction Model

| Action | Effect |
|---|---|
| Click unit ring | Selects that type; updates "Current:" immediately; highlights ring, dims others |
| Click STOP | Sets selection to `-1` (no production); empties "Current:" |
| Click Done | Writes type to `extCity+0x02`, sets `extCity+0x58 = GetProductionTurns(type)`, closes |
| Left/Right arrows | Navigate unit slots |
| Enter / Return | Confirm (same as Done) |
| Escape | Cancel without saving (production stays unset) |

No OK/Cancel split — just "Done". Escape leaves production unset so the auto-prompt fires again next turn.

## Trigger Points

| Where | Condition |
|---|---|
| Turn start (human player) | `extCity+0x02 < 0` for any owned city with `sType < 2` — replaces current `ShowCityProductionDialog` loop |
| City click | Any owned city click opens `ShowCityBuildSelection` instead of current modal popup |
| Production complete | When `prodTurns` hits 0, clear `extCity+0x02` to `-1`; auto-prompt fires next turn naturally |

## Function Signature

```c
static void ShowCityBuildSelection(short cityIndex);
```

Same pattern as all other self-contained dialog functions.

## 68k Reference

Original implementation: `tools/68k_binary/decompiled/CODE_045.c` — `FUN_00000e5c` (renders city view), `FUN_000011ca` (initializes city view). The MacApp View system rendered city controls as part of the main document window; our approach replicates the visual result without the MacApp framework.
