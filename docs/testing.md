# Testing the remake

One entry point:

```bash
tools/run_tests.sh                  # host suites (no emulator, no human)
tools/run_tests.sh --emulator       # + the emulator checks (devloop bridge on :3201)
tools/run_tests.sh --emulator-only
make -C src test                    # same as the first line
```

The script prints a PASS / FAIL / SKIP line per suite and exits non-zero if
any suite failed. A suite whose prerequisites are missing (the Retro68
headers, pytest/uv, the bridge) is reported as SKIP.

## 1. Host: the C game rules (`tests/host`)

`make -C tests/host` compiles **all of `src/main.c`** with the host compiler
and runs the tests in one binary. Single test or a group:
`make -C tests/host run T=battle`. With sanitizers: `make -C tests/host SAN=1`.

How it works:

- `test_main.c` `#include`s `src/main.c`, so the tests call the remake's own
  static functions and globals. There is no copy of the game code.
- The Mac headers are Retro68's multiversal headers (declarations only).
  The default path is `../Retro68/build/toolchain/multiversal/CIncludes`.
  Override it with `RETRO68=` or `MULTIVERSAL=`.
- `toolbox_shim.c` implements the Toolbox calls the rules need:
  - Toolbox `Random()`, Park-Miller as on the Mac. The model is validated
    against the original by the overview hill pool (main.c,
    `BuildOverviewBase`).
  - The Memory Manager.
  - Windows that open and an event source that answers every modal loop
    with Return, so code that shows a notice to a human player runs
    unattended.
- Every other import (QuickDraw drawing, files, sound, menus) becomes a
  no-op stub generated at link time (`gen_stubs.py` reads the linker's
  undefined-symbol list).
- The flags mirror the PPC build where it matters: `-funsigned-char`
  (char is unsigned in PPC GCC) and `-fwrapv`.
- `fixtures.h` builds small synthetic worlds: the game state, cities,
  army records, unit types and map tiles, at main.c's byte offsets.

What the tests pin down. The expected numbers come from the PPC decompile
or from measurements of the original, not from the port itself.

| file | covers | source of the expected values |
|---|---|---|
| `t_dice.c` | Toolbox Random, `Dice` (FUN_1005f230): golden rolls from 3 seeds, one Random per die, the clamp, the -32768 case | Park-Miller + FUN_1005f230's mapping |
| `t_combat.c` | `BattleRounds` (FUN_1002d654) against an independent model of the exchange, roll for roll; Intense Combat d24; the tutorial hero; `BattleValues` (FUN_100ac0cc): city defence halved for neutrals, scenario cap, special 1, stack bonus and enemy penalty, embarked = 4 | FUN_1002d654 / FUN_100ac0cc |
| `t_economy.c` | `PlayerIncome` (FUN_1002bcd8), `PlayerUpkeep` (FUN_1002bbd4): sites, transit, embarked floor 4; `SlotUpkeep` (FUN_1004a5f0) | the PPC functions |
| `t_path.c` | `BuildPathFlagGrid` costs/flags (FUN_10044110, data 0x17576), `PathSearch` + `PathTrace` (FUN_10043248 / FUN_100439a4) on synthetic maps: lakes, islands and ports, naval, flyers, hills/forest abilities, the port transition (FUN_100445fc), foreign vs own cities; `PathIntDist` (FUN_1000a884), `PathDirToward` (FUN_100184dc) | the PPC functions |
| `t_citystats.c` | `JitterCitySlotStats` (FUN_1003b9f8): 8 seeds, every slot stat and the roll count | an independent Python transcription of PPC_0002.c:2120-2212 |
| `t_sage.c` | `AISageRevealRect` (FUN_10054af4): roll order, clamps, the revealed box; rolls without fog too | FUN_10054af4 |
| `t_stack.c` | Orders > Group Stack / Ungroup (FUN_1005d240 / FUN_1005d2dc) never pack records; the temple blesses each unit of the grouped stack once (tasklist A1/A6) | the PPC functions |
| `t_help.c` | the help pages: HMOUSE, HKEYS, HMOUSE2 in order, each waiting for Done (B9) | FUN_100402e0 + the original, live |
| `t_zoom.c` | the overview and info-area zoom frames (B10) | measured on the original |

Limits:

- The window globals (`gStatusWindow`, …) are `int *`. They are 32-bit on
  the PPC and cannot hold a 64-bit host window pointer, so code that
  compares a window against them is checked in the emulator instead.
- Data loaded from resources is big-endian on the Mac. The fixtures write
  values the way main.c reads them, so they never byte-swap. Don't feed
  raw resource bytes to code that reads them with native shorts.

Adding a test: write `TEST(name) { ... CHECK_EQ(a, b); }` in a `t_*.c`
file and `#include` the file in `test_main.c`.

## 2. Host: the Python tools (`tests/python`)

`pytest` (through `uv run --with pytest` when pytest is not installed):

- `test_ai_trace_diff.py`: the trace parser (with and without `R<n> BEGIN`
  markers) on synthetic traces and on a real round file
  (`fixtures/aitrace3_r2.txt`, `_r3.txt`), and the CLI's match /
  first-divergence output.
- `test_ai_trace_checks.py`: the structural checks pass on the real rounds
  and fail on bad production, roles, income, off-map armies and a ledger
  collapse. Transit records (x = -1) are allowed.
- `test_patch_orig_seed.py`: the fixed-seed patch of the original.
- `test_source_invariants.py`:
  - `Dice` is the only caller of `Random()`.
  - `qd.randSeed` is written only at launch.
  - Every PPC `FUN_1xxxxxxx` cited in main.c exists in
    `tools/ppc_decompiled` (one known undecompiled exception).

## 3. Emulator checks (`tests/emulator`, `--emulator`)

These need the devloop bridge for the remake (`node
tools/infinitemac/devloop/bridge.mjs --headless --port 3201`, see
`tools/infinitemac/devloop/README.md`). They never run in the host suites.

- `test_floats.py`: builds and launches the remake, starts Erythea, takes
  turn 1. It then checks the floats' zoom boxes against the frames
  measured on the original, reading window borders from screenshots.
  `--no-launch` uses a game that is already running.

## 4. Same-seed comparison with the original (tasklist D15/D16)

The original seeds QuickDraw's randSeed once, at launch, from GetDateTime
(FUN_1005f32c). Every random number after that is a Dice roll on that
stream, so the same seed and the same input reproduce a game.

```bash
tools/infinitemac/devloop/relaunch_seeded.sh 715183689
```

The script builds the remake with `FIXED_SEED` (main.c `WL2_FIXED_SEED`)
and launches it on :3201. It also writes a patched copy of the original
(`tools/patch_orig_seed.py`: lis/ori/nop over the GetDateTime call at file
offset 0x62154) and pushes it to :3200.

**Known snag:** the original will not launch from The Outside World
volume. It reports "not enough memory (zero K needed)", even unpatched. In
the :3200 Finder:
1. Rename the pushed `Warlords II.app` (for example "wl2 seeded").
2. Drag it onto the disk's "Warlords II" folder.
3. Open it there; the game data next to it is the disk's own.

Then drive both bridges with the same steps (compare.mjs scripts or
`wl.sh` on both ports). For each human turn, compare:
- the info area (797,492)-(1021,621) for gold / income / upkeep / cities;
- the overview (797,34)-(1021,346) for city ownership, ignoring the three
  hill greys.

The remake's AI turns take longer than the original's (about 40 s against
under 20 s on Erythea), so wait for the turn banner on both before
clicking. Results of the first run: `docs/2026-10-09-same-seed-run.md`.

AI-internal fields (roles, production, orders) exist only in the remake's
trace (`AI_TRACE=1`). The original exposes only what is on screen or in its
saves (`tools/infinitemac/devloop/savedec.py`).
