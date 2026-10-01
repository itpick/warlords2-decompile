# Fidelity log — 1 October 2026

Everything below was checked against the **original game running side by side**
in two InfiniteMac (SheepShaver-wasm, Mac OS 8.6) emulators: the original on
bridge port 3200, the remake on 3201. Screens are compared pixel by pixel, sounds
by cross-correlating recordings against the game's `snd ` resources.

Commits: `b70d081` (start-up, picker, palette, tutorial, dev loop), `9249c05`
(Game Setup), `0346ef1` (in-game screens), plus the sound pass described below.

## Where things stand

Pixel difference vs the original, Erythea, default setup, turn 1:

| Screen | Before today | Now |
|---|---|---|
| Scenario picker (View 3000) | own layout | 0.9% |
| Game Setup (View 3024) | own layout | 2.2–3.5% |
| Turn banner (View 3100) | 76.8% | 1.2% |
| Hero offer (View 3200) | 79.7% | 3.9% |
| City window, production pane (Views 3300/3303) | own layout | 1.4–3.8% |
| Map after turn 1 starts (all windows) | own layout | 0.3% |

Sound sequence for "pick Erythea → Begin Game → banner → hire hero → close city
window" now matches the original: `VBEGIN` ("Let the war begin!"), then
`SND_TURN`, then silence.

## Dev loop (tools/infinitemac/devloop)

- `bridge.mjs`: one headed Chromium per emulator, HTTP control (`shot`, `click`,
  `dbl`, `drag`, `move`, `key`, `type`, `push`, `pulled`, `reload`, `eval`,
  `front`, `audio`, `quit`). Files go in and out through "The Outside World".
- **Audio tap (new):** an init script routes everything connected to the page's
  `AudioDestinationNode` into a recorder. `wl.sh audio start` /
  `wl.sh audio stop NAME` writes `.devloop/audio/<port>/NAME.wav`; compare
  scripts take `{"audio":"start"}` / `{"audio":"stop"}` steps.
- `snddec.py` (new) decodes all 36 `snd ` resources (8-bit, 11127 Hz) to WAV.
- `sndmatch.py` (new) finds which sounds play when (FFT normalised
  cross-correlation, threshold 0.6) and lines up original vs remake. A
  synthetic three-sound mix was found at the exact times.
- `compare.mjs` + `pixdiff.py`: replay one step script on both emulators and
  diff the screenshots. Scripts: `picker`, `setup_erythea`, `ingame_erythea`,
  `sound_erythea`, `tutoria`, …
- `relaunch_remake.sh` builds, pushes and opens a new remake build;
  `relaunch_original.sh` reopens the original; `quit_game.sh` uses Cmd-Opt-Q,
  then Cmd-Q, then Cmd-D (Don't Save). Force Quit is never used because it
  crashed the emulator.
- Decoders: `viewdump.py` (MacApp View resources: the layout spec),
  `pictdec.py`, `cicndec.py`, `rsrc.py`, `a5data.py`, `savedec.py`, `artgrab.py`.

## Start-up, picker, tutorial, Game Setup (b70d081, 9249c05)

- **Splash** per View 1000; scenario scan runs during it.
- **Palette:** pltt 1000 is applied through the Palette Manager. The remake's
  colour bugs came from drawing through the system CLUT.
- **Scenario picker** rebuilt from View 3000.
- **Tutorial** system (CODE_062): GFX scripts on WDEF 128, TWARLORD in place
  of Game Setup, in-game triggers on gs+0x12E / gs+0x134.
- **Game Setup** rebuilt from View 3024, using a MacApp 3D control kit
  measured pixel-exact: T3DButton, T3DCluster, T3DRadio, T3DCheckBox,
  T3DPopup, and embossed text pairs.
- **Difficulty rating** ported from CODE_057. The AI level is Knight 0 /
  Lord 1 / Warlord 2.
- **SCN city block** is at 0x157B/0x157D, not 0x15BE, which had dropped
  city #0 and shifted every name.
- **Starting armies:** one unit per capital, chosen by FUN_00000db4's score.

## In-game screens (0346ef1)

- **Window layout** measured at 1024×768:
  - The map window "untitled" has content (10,40)–(W−223,H−3).
  - The overview, button area and info area are floating windows at
    x W−227…W−3, y 34–346 / 362–476 / 492–621.
  - A small emulated floating-window layer keeps them above the map with
    active title bars. Each has a zoom box.
- **Map:** 15px scroll bars, the TTurnView turn strip (Chicago 12 "Turn N",
  shields at 67+16·slot, current player boxed) and a standard grow box.
  Scrolling is now pixel-based (`sViewPixX/Y`), and the capital is centred
  like the original (origin = tile·40 + 20 − view/2, clamped to the map).
- **Stack flags** (PPC FUN_10005d2c): a 40px pole in palette colours 13/14,
  with a pennant from the owner's army sheet (x 464, 48×8). Pennant length
  shows 1–4 units; 5–8 adds a second pennant. Sprites sit at +8,+7, one per
  tile (the hero on top).
- **Turn banner:** View 3100 (altDBox; PICT 3100; sunken Illuria 36 red).
- **Hero offer:** View 3200.
  - Frameless shadowed window, marble frame, minimap, "A Hero!" title.
  - Portrait with a T3DFrameAdorner, offer lines from DAT 1000 (#464–479).
  - Editable name; Male/Female radios; default Hire button.
  - Names come from the faction's HERONAM list (terrain DAT 30010+player,
    `#0`/`#1` = gender), picked as in CODE_064 (Random(8) on turn 1).
- **Minimap** ported from PPC FUN_10063af8. It matches 100% of the pixels
  that overlays don't cover. Construction:
  - PICT 1012 ocean gradient underneath.
  - Four 256-byte quadrant tables from MAPCOLOR (DAT 30020), with a
    little-endian remap table and road tables.
  - Hills/mountains use a pre-rolled random pool.
  - Class 15 (pmExplicit magenta) shows as white.
- **Minimap overlays and frame:** city shields at (2x−1, 2y−1); ruins as a
  2×2 white dot. The viewport is a 2px white frame:
  inner = (px/20, py/20, ⌈(px+W)/20⌉+1, ⌈(py+H)/20⌉+1).
- **Button area:** View 1008 on PICT 1001.
  - T3DIconButtons; enabled ones use the T3DButton bevel.
  - Disabled ones: 0x5555 outline, flat 0xCCCC face, icon blended toward
    white.
  - Scroll pad has diagonally cut corners; help is a diamond button.
  - All buttons are disabled from the turn banner until the player has
    control.
- **Info area:** ABITS icons (castle, chest, coins, hand) and sunken
  Illuria 17 values (cities, treasury, income, upkeep), on bottom-aligned
  marble.
- **City window:** View 3300, with the production pane from View 3303.
  - Minimap is base map only, with a selection shield; CAPITAL banner
    (PICT 30011 lower band).
  - "Current:" ring and "%dt"; TProdViews (ABITS ring + army sprite); STOP.
  - When producing: PICT 3300 and "Time/Cost/Strength/Move".
  - The window paints over the map; uncovered areas redraw immediately.

## Game-logic bugs found by the comparison

- **Starting gold** is a little-endian short at SCN+0x185+p·0x14. The remake
  read gs+0x186 and got 0. Erythea: 200, 75, 150, 45, 125, 95, 35, 80.
- **Setting production costs nothing.** stat[4] is the price of *buying* a
  type into a city slot. The remake charged it in five places, which is how
  turn 1 ended at 5gp instead of 234gp.
- **Unit type numbers are the standard numbers, equal to each entry's
  sprite index.** The army-set DAT lists them in another order, so the table
  is now reindexed by sprite at load. This fixed:
  - Mirea's production slots: Heavy Inf., Heavy Cav., Catapults.
  - The starting unit: Heavy Cav., the white knight.
  - Upkeep: 4gp.
- **City names (CTY)** were only loaded by the StandardGetFile fallback, not
  the scenario picker.
- **City map tiles** were overwritten at game start with indices that made
  them Ruin/Marsh terrain. Removed: the scenario's city tiles are already
  type 10 (City).
- **Cities start idle.** The original shows "Current: –"; the AI chooses for
  its own cities.
- **Neutral garrisons** are standard type 0x0B.
- **Remake-only overlays** turned off: city name labels and the terrain
  hover tooltip.

## Sound (this pass)

- **All effects and voices were silent:** `ampCmd` takes the amplitude in
  `param1`, and the remake passed 0 there, with the volume in `param2`.
- **No sound while a scenario loads.** The remake played SND_SPLASH and
  VMOMENT there.
- **The free turn-1 hero is silent.** The remake played a ding on every
  hero check, even when no offer appeared, plus VHERO00.
- **VBEGIN plays to completion before the turn banner and its chime.**

Recorded on the original: VBEGIN 1.2s after Begin Game, SND_TURN 6.4s after
that. The original also plays background music from the picker on; the remake
has its own music system, and the two have not been compared yet.

## Open items

- City window tabs Info / Build / Vectoring (Views 3301 / 3302 / 3304).
- Floating window zoom (TTripleSizeFloatWindow, three sizes); the help
  diamond; the in-dialog hero marker on the minimap.
- Music comparison (QuickTime tune player vs the original's).
- Paid hero offers: sound and placement are still unverified (see
  memory: hero offer spawn spec).
- Per-unit upkeep should come from the city slot cost (unit +0xB), not the
  type table.
- Unit stats are little-endian shorts; the high-byte reads only work for
  values under 256.

## Next: play, not just look

1. Turns 1–2 side by side: select and move an army, path preview, fight,
   end turn. The AI does nothing on the first turns, which makes them a
   clean test.
2. **Multi-turn runs:** script several full turns on both emulators.
   Compare screens, sounds and the save-game state (`savedec.py`) after
   each turn.
3. **A complete game:** once the above holds, play one game to the end in
   both (a small scenario), checking the victory flow, history and reports.
