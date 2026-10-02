# Warlords II Web: Design

Date: 2026-10-02. Status: approved in conversation, awaiting written-spec review.

## Goal

An exact replica of Warlords II (Mac, PPC 1.0.7) as a TypeScript browser game, in a new
**private** repo `itpick/warlords2-web`, for the owner and friends. "Exact" means the same
screens (pixel-matched), the same rules and the same numbers as the original. The first
iteration targets desktop browsers. Phone mode and networked multiplayer come later, each with
its own design.

Sources of truth:
1. The original game: the PPC 1.0.7 decompile (`warlords2-decompile/tools/ppc_decompiled`),
   with the 68k decompile as a cross-check, its resource files, and the recordings and
   screenshots taken in InfiniteMac.
2. The C remake (`warlords2-decompile/src/main.c`). This is the living reference
   implementation. It keeps being improved, and fixes found in either version are mirrored in
   the other until the web version takes over.

## Decisions made

| Question | Decision |
|---|---|
| Audience | Private repo; owner and friends. The original's art, sounds and maps are bundled. |
| Look | Pixel-exact game windows and the game's own menu bar on a fixed 1024×768 "game desktop", with no Mac OS around it (no Finder, Control Strip or system menus). |
| Platform order | Desktop first. Mobile only once desktop is exact. |
| Multiplayer | Later, as its own step. The first iteration has single player and hot-seat. |
| Approach | Hand-port to TypeScript, verified against the C remake (lockstep) and the original (pixels). |
| Iteration speed | A speed mode for fast development and test runs. |

## Architecture

Tooling: Vite + TypeScript (strict), Vitest for unit tests, Playwright for browser and
screenshot tests.

| Layer | Job | Depends on |
|---|---|---|
| `src/data/` | Load the converted original data (scenarios, unit tables, strings, terrain, sprite sheets, PICTs, sounds) into typed objects. | nothing |
| `src/engine/` | All game rules and state: map, armies, cities, production, combat, movement and boats, heroes, quests, ruins and items, diplomacy, AI, turn order, save/load. Pure TypeScript with no DOM, canvas or timers, so it can later run on a server. | `data/` |
| `src/gfx/` | A canvas toolkit that reproduces exactly what the Mac draws: CopyBits (copy and transparent modes), PICT decoding, the original colour table (pltt 1000) and greys, bitmap fonts (Chicago, Geneva, Illuria), regions and clipping, and the MacApp 3D controls (T3DButton, T3DCluster, T3DCheckBox, T3DRadio, popup, TRoller, TSunkenText). | `data/` |
| `src/ui/` | Screens and windows: menu bar, map, minimap, control panel, info panel and every dialog. Mouse and keyboard input. Reads engine state and sends commands; never changes state itself. | `engine/`, `gfx/` |
| `src/audio/` | Effects, voices (advisor) and music through Web Audio. | `data/` |
| `tools/` | Build-time conversion of the original resource files into `assets/` (PNG, JSON, WAV), reusing warlords2-decompile's Python extractors (rsrc.py, pictdec.py, cicndec.py, snddec.py, viewdump.py). | none |

Screen: one 1024×768 canvas holding the menu bar and the game windows at the original's
positions over a plain backdrop. It is scaled by whole numbers (nearest-neighbour) to fit the
browser, with a full-screen button using the Fullscreen API.

### Commands: the one way to change the game

The UI changes the game only through commands, for example
`{type:'move', army, to:{x,y}}`, `{type:'endTurn'}`, `{type:'setProduction', city, slot}` and
`{type:'answer', dialog, choice}`. `engine.apply(state, command)` returns the new state plus
**events**: what happened, for the UI to show (battle, Victory, hero offer, elimination,
voice line and so on). Dialogs that need a player's decision (hire hero, occupy/pillage/sack/raze,
peace offer) are events that wait for an `answer` command.

This single entry point is what makes save/load, replays, deterministic tests, speed mode and
later networked play straightforward.

### Data flow

```
original resource files --tools/--> assets/ --data/--> typed tables
                                                    |
UI input --> command --> engine.apply --> new state + events --> ui/ renders state, plays events --> gfx/ + audio/
```

## Exactness

- **Same randomness.** The engine implements the Mac Toolbox `Random()` formula and the
  original's dice helpers (`Dice(n, sides, add)` and so on), seeded and called at the same
  points in a turn as in the original. Same seed + same commands = the same game.
- **Same numbers.** Integer maths, 16-bit values where the original uses shorts, and the
  original's rounding (for example, halving toward zero) and clamps (gold cap 30000, etc.).
- **Traceability.** Every rule function cites the original function it ports
  (e.g. `// PPC FUN_1004645c`), as the C remake does.
- **Pixels.** gfx reproduces QuickDraw behaviour, not an approximation: the same transfer
  modes, the same transparent key colours, the same font metrics and glyph bitmaps, and the
  same emboss rules as the C remake (memory notes macapp-3d-controls, game-palette-clut).

## Speed mode

For fast iteration and test runs:

- **In the browser:**
  - Development builds (`npm run dev`) run fast by default. They skip waits and animations:
    the AI-turn hold, banner and notice timeouts, per-step move animation, voice waits, battle
    round pacing and fades.
  - Normal (production) builds always use the original's timing.
  - In development, `?speed=original` (also a debug-menu toggle) switches back to the
    original's pacing for timing comparisons.
  - Game results are the same at either speed, because waits never touch engine state or
    randomness.
- **Headless:** a Node runner (`npm run sim -- <scenario> --seed N --script moves.json --turns T`)
  runs the engine with no UI at full speed. It prints or dumps the state per turn; used by the
  lockstep tests and for quickly checking rule changes.
- **Debug helpers:** jump to turn N from a saved state, reveal the whole map, give gold, and a
  state inspector panel. All of these work only in development builds.

## Testing

1. **Engine unit tests (Vitest).** Each rule is checked against numbers from the original's
   code or recordings: combat, production and per-city slot rolls, movement costs,
   boarding/landing (only where the original allows it), hero offers, difficulty rating,
   income and upkeep, notoriety.
2. **Lockstep against the C remake.** Add a per-turn state dump to the C remake (gold, cities,
   armies, production, AI orders, notoriety and RNG state). Run the same scripted game (scenario,
   seed, commands) in both and compare field by field. The first difference names the turn and
   field.
3. **Screen tests (Playwright).** Replay the same step scripts as the InfiniteMac comparisons
   (picker, setup, More Choices, banner, hero offer, city panes, battle, Victory, Pillage and so
   on) and pixel-diff the canvas against the original's screenshots. Random content is masked
   with the same masks as `diffcrop.py`. A screen is done at ≤0.5% difference.

## Scope of the first iteration

In:
- every scenario and the random map;
- full Game Setup (basic, More Choices, Edit Options);
- single player against the AI, and hot-seat;
- every screen, menu and report;
- heroes, quests, ruins and items, diplomacy, boats;
- the AI (ported from the original's code);
- the voice advisor, sounds and music;
- the tutorial;
- save/load in browser storage (IndexedDB), plus export and import to a JSON file
  (own versioned format);
- full-screen mode and whole-number scaling;
- speed mode.

Out (later or never):
- phone and touch layout (next step);
- networked multiplayer (after that);
- e-mail games (greyed out, as in the original's UI);
- loading the original Mac game's save files.

## Milestones

| # | Milestone | Done when |
|---|---|---|
| 1 | Repo, build, data conversion, gfx toolkit | Scenario picker and Game Setup pixel-match the original (≤0.5%) |
| 2 | Map and turn flow | Erythea: start, scroll, select, move, end turn; turns 1–3 match the original on screen |
| 3 | Engine core: production, combat, cities, heroes, boats | Lockstep with the C remake over 20 turns of a scripted hot-seat game |
| 4 | AI port | Lockstep with the C remake over 50 AI turns |
| 5 | Remaining screens and options, sound, tutorial, save/load | The full Isles of Sorcery hot-seat game replayed to a win, matching the original's recording |

After milestone 5: phone mode (own design), then multiplayer over WebSockets (own design).

## Repository

- New private GitHub repo `itpick/warlords2-web`. The owner creates it and pushes, because this
  machine's Claude Code sessions can't reach GitHub.
- Converted assets are committed under `assets/` (the repo is private). They are regenerated
  with `npm run assets` from a local copy of the original game files, whose path is configured
  in `.env`.
- Commits carry no AI attribution lines.
