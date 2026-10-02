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

## Army selection and movement (turn 1)

Scripts `select_army`, `move_army`, `step_east` (after `sound_erythea`): all
frames 0.1–0.4% different from the original, silent in both.

- Selection, stack panel (View 1006 in the info area), halo (PICT 1002),
  cursor and keep-selected-after-move now follow the original (commit
  60457d1).
- **Terrain types are read at SCN+0x710, not 0x711.** The original's gs+0x711
  is one byte off the raw scenario, like the gold field. With the 0x711
  read, plains came out as "Shore", i.e. impassable once the real cost table
  was in.
- **Movement costs** are the original's hard-coded table (68k CODE_042
  FUN_00001670 / CODE_115 FUN_00001a70):

  | Terrain | Cost |
  |---|---|
  | Road, bridge, city | 1 |
  | Water (naval only) | 1 |
  | Shore (naval only) | 2 |
  | Forest | 4 |
  | Hills | 6 |
  | Mountains | blocked |
  | Plains | 2 |
  | Marsh | 5 |
  | Ruin | 2 |

  - Road overlay makes any tile cost 1.
  - Forest and hills drop to 2 for units with that ability (DAT bytes
    0x38 / 0x3A).
  - Flyers pay 1 on road/bridge/city and 2 elsewhere.
  - There is no diagonal rule.
- **Verified step by step:** road ×3 = 3 MP, then marsh 5, marsh 5, then a
  refused move with 1 MP left. Identical in both versions.
- **Kept on purpose:** foreign cities stay enterable for the remake's
  attack code (the original blocks them except as an attack target). The
  +20 boarding penalty isn't modelled yet.
- **Minimap:** armies inside a city no longer draw a marker under the city
  shield; it showed as a dark shadow on the grey shields.
- **Random per game:** the original's starting unit varies between games
  (city slot stats get a random adjustment); the remake doesn't model that
  roll yet.
- **Cursor art:** the "can't reach" cursor still differs slightly.

## Turns 2-3: drag, view, battle, capture (later pass)

- **View follows the stack** (PPC FUN_100836dc, 68k CODE_067 FUN_00000340):
  selecting a stack, and its moves, keep a box of up to 280px around its tile
  on screen. If the box is visible nothing scrolls; if the tile is off screen
  the view centres on it; otherwise it scrolls the minimum (TScroller::RevealRect).
  Turn-3 selection went from 31% to 0.5% different.
- **Every human turn starts centred on the capital** (turn 3 after a scrolled
  turn 2). The earlier "one human: no recentre" reading was untestable on turn 2.
- **A path that stops short of its destination deselects the stack** and keeps
  its orders (turn 2 drag past Myre). Drag frames now 0.2-0.4%.
- **Cities are 2x2**: entering any tile of a foreign or neutral city attacks the
  whole city (every army inside defends); the attackers stay on the tile they
  entered; an empty city is taken by a "battle" with no defenders. Before, an
  army could stand on a neutral city's other tiles.
- **Battle presentation** (PPC FUN_1002d93c chain), replacing the remake's
  "Battle Results" dialog and red flashing box:
  - WAR (PICT 10003, 128x120) drawn over the target at tile-40, snd WAR (1035)
    played to the end (~2 s) before the window.
  - View 4400: 320x312 altDBox; marble PICT 1001 at (-20,-10); bands at
    (9,19) and (9,179), 302x50 (+30 per extra row of 8 defenders),
    T3DFrameAdorner, grey 0xCCCC; shields from the big shield sheet
    (side*32, 0, 32x36) at (16,26)/(16,186), neutral = column 8.
  - Units: rows of 8, full row x = 50+32i, a row of m centred at
    x = 178-16m+32i; sprite at (x, y+4); y 26/56/86/116 (defenders), 186.
  - Kills: 25 ticks, then each: PICT 30010 (32,0) 32x29 explosion, snd ARMY
    (attacker unit died) / ARMY2 (defender unit died), 25 ticks, cell refilled,
    40 ticks. A click or key makes the rest silent and fast (10+15 ticks).
  - Result in lin1/lin2 (Illuria 17 cream, y 251/271): "%s has won the
    battle!" / "Your armies have won the city!" / "You are victorious!" /
    "You have lost!", the loot line, or a "garrison has fled" line first for
    an empty city. Waits for a click (AI attacks close by themselves).
  - Recorded on the original: SND_WAR at 0.5 s, ARMY2 at 3.2 s, nothing else.
- **Victory (View 3800, PPC FUN_100472f4)** replaces the remake's capture
  notice and keep/pillage/raze box: PICT 1016 frame, PICT 3800 art,
  "Victory!", "%s, you have triumphed" (random of 4, hero or player name),
  "in the battle of %s" (random of 3, city), "The city is yours!",
  "Will you...", buttons Occupy (default) / Pillage / Sack / Raze.
  - Occupy opens the city window (confirmed on the original).
  - Pillage: half the buy price (stat 4) of the last production slot; that
    slot is removed. Dimmed when that is 0.
  - Sack: half the buy price of every slot but the first; those slots go.
    Dimmed with fewer than two slots.
  - Raze: View 1020 "%s is in ruins!", the city turns neutral, ruin tiles
    0xA0 + 2*capturer. Dimmed when razing is not allowed.
  - Losing a city has no window in the original.
- **Music** (PPC FUN_10092484, tunes by name from DAT 1002 groups): human
  turns loop one of RINT 0/4/6/9/10/16/17/23; AI turns play one of RINT
  2/3/5/7/13 once; game won RINT12/RINT21; hero offer RINT11; temple RINT1/8;
  sage 14; promotion 15; medal 18; peace offer 19 / rejected 20. There is no
  battle music. The remake played a random tune from all 24, including the
  game-won tune during play.
- **Movies:** `compare.mjs` steps `{"rec":"start"}` / `{"rec":"stop"}`
  screenshot each emulator at ~12 fps with real timestamps and build
  `.devloop/movies/<script>_{orig,remake,sbs}.mp4` (the canvas can't be
  captured with MediaRecorder). `scripts/full_t1_t3.json` plays turns 1-3,
  the attack on Myre and the Victory screen.

Still open from this pass: the pillage/sack result window (View 3810), medals
(View 4410, skipped for now), AI-attack status-bar messages, paid hero offers
on turns 2-3 that the original doesn't make, and a boat sprite seen on land.

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

1. ~~Select and move an army on turn 1~~ (done, see above). Next: path
   preview, fight, end turn and turn 2. The AI does nothing on the first turns, which makes them a
   clean test.
2. **Multi-turn runs:** script several full turns on both emulators.
   Compare screens, sounds and the save-game state (`savedec.py`) after
   each turn.
3. **Water:** board a boat from a port, move at sea, land again, and fight
   at sea, side by side (boarding penalty, boat sprites, naval combat).
4. **A complete game:** once the above holds, play one game to the end in
   both (a small scenario), checking the victory flow, history and reports.
