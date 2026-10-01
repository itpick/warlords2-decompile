# Warlords II Remake — Oracle Divergence Log

Side-by-side findings (original = golden oracle vs. remake = src/main.c), via
`tools/infinitemac/oracle/compare.sh`. Status: 🔍 found · 🛠 fixing · ✅ fixed.

| # | Stage | Divergence | Status |
|---|---|---|---|
| 1 | launch | Remake popped a "Startup movie error: -43" dialog when the (stripped) intro movie was missing; original skips it silently. Removed the debug alert in main.c (~line 30046). | ✅ fixed |
| 2 | intro | Remake's splash (PICT 1000 box art) blocked on `while(1) WaitNextEvent ... break on mouseDown/keyDown` — waited forever. Original proceeds straight to the picker. Added a ~3s auto-advance timeout (main.c ~30116). | ✅ fixed |
| 3 | scenario picker | Default-selected scenario differs: original = **Tutoria** (bottom); remake = **Dragon Realms** (top). Fixed: `selectedIdx = sScenarioCount-1` after the scan (main.c ~4866). | ✅ fixed |
| 4 | scenario picker | Menu bar differs: original shows full game menus (File/Edit/Orders/Reports/Heroes/View/History/Game/Help); remake shows only File/Edit/Help. | 🔍 found |
| 6 | **scenario start** | **Remake CRASHED the emulator ("memory access out of bounds") on scenario start.** Root cause: `gExtState` (core/globals.c) and `gRoadData` (stubs/globals_extra.c) were `= NULL` with no backing storage; `*gX` dereferenced Mac addr 0 (~0x40810000 junk), fooling the `if(*gX==0) alloc` guards → game state written through wild pointers → `dcbz` OOB. Fixed: backing storage for both + a junk-pointer guard at main.c:5371. **Verified on a pristine emulator** — remake boots into turn 1, no crash, correct terrain/minimap/city+hero dialogs. | ✅ fixed |
| 7 | turn 1 hero hire | Hero-offer dialog stats (Strength/Movement/Command) were invisible — `valueColor` was white (0xFFFF) on the light marble panel. Changed to gold. Now shows e.g. "Grimjaw — Str 5, Move 14, Cmd +0, Free!". (main.c ~20035) | ✅ fixed |

| 8 | city build dialog | The right-panel marble renders LIGHT beige instead of dark granite (Game Setup's marble is correct/dark). Cause: ShowCityBuildSelection draws into an offscreen GWorld (main.c ~20845) whose color table doesn't match PICT 1001, so colors map wrong → faint "Knight" title + unit labels. Palette/color-table issue on the offscreen GWorld. | 🔍 found |
| 10 | army stack flags | The growing faction flag above army stacks (taller = more units, Warlords II's 1-8 indicator) was MISSING — flag art (PICT 30030-30037, 320x18 strips of 8 frames) loaded into sFlagGW but never drawn; remake showed a numeric badge instead. Wired up in DrawMapInWindow (~main.c:7789): draw sFlagGW[owner] frame `stackN` (40px each) above each army, transparent mode-36, replacing the number. Now renders (blue Knights flag above the capital army). | ✅ fixed |
| 9 | in-game UI | Largely faithful now: main map (TL), minimap (TR, sea+island dots), control-icon panel (R), marble status panel (BL). Original stacks marble-info on the R-bottom instead of BL — minor layout diff. Windows are movable. | 🔍 minor |
| 11 | scenario load | Remake read SCN cities from gs+0x15BE, which skipped city #0 (Erythea Kuuria, Tutoria Skullcrag) and paired every city with the next one's CTY name. The block is LE count @0x157B, records @0x157D. Fixed. | ✅ fixed |
| 12 | turn 1 armies | Remake gave each capital 2× its first producible unit; the original gives 1 unit chosen by FUN_00000db4's score and strips Catapults from all cities. Ported: Erythea now has 81 records like the original, with unit types matching 7/8 (Starfire differs). See docs/RE_starting_armies.md. | 🛠 mostly fixed |
| 13 | neutral cities | Original (neutral option 0) places one type-0x0B placeholder per neutral city; the remake places 1–3 real garrison units. | 🔍 found |
| 14 | city build dialog | Mirea's slot icons differ: original shows knight / horseman / cannon, remake shows horseman / horseman / knight. Unit-type → sprite mapping for the scenario's army set. | 🔍 found |

## #6 deep investigation (2026-06-11) — it is a GAME-SIDE bug, not the emulator

Emulator-side instrumentation (this is what we ruled out, and how):
- **It is a heisenbug w.r.t. the emulator build.** Every change to SheepShaver's
  build (SAFE_HEAP, ASSERTIONS, adding a hot-path hook, dropping -flto) *moves*
  the crash — sometimes it reaches Game Setup, sometimes the full map, sometimes
  it doesn't crash at all. The **original** game is rock-stable on the identical
  emulator. ⇒ the fault is in the **remake's** code/data, surfacing as memory
  corruption whose fatal point depends on layout.
- **Not the PPC interpreter / not any `Mac2HostAddr` access.** Added a hook in
  `vm_do_get_real_address` (kpx_cpu/.../vm.hpp) that logs+redirects any Mac
  address whose host pointer exceeds the (fixed 288 MB) wasm memory to a scratch
  page (`wl_oob_log` in main_unix.cpp). The interpreter routes *every* load/store
  through this (confirmed in ppc-execute.cpp), as do native `Mac2HostAddr`
  callers. **It never fired.** ⇒ the OOB is a native loop walking off a *valid*
  base via raw pointer arithmetic (no per-access `Mac2HostAddr`).
- **Not gfxaccel.** Guarded all three native blit loops — `NQD_bitblt`,
  `NQD_fillrect`, `NQD_invrect` (gfxaccel.cpp) — to log params + skip when the
  dest/src extent would leave wasm memory (`wl_dest_extent_bad`). **Never fired**,
  even though the map's grass tiles are drawn by these. ⇒ rendering path is fine.
- **The map fully renders, THEN it crashes.** Post-crash screenshot
  (`tools/infinitemac/oob_crash.png`) shows the complete map view (tiles, army
  dots, full in-game menu bar, window frame, scrollbar) behind the error dialog.
  So the crash is a follow-up native op after a successful full render.

Two actionable symptoms pointing at the remake's data load:
1. **Terrain renders uniformly grass** — Tutoria should be varied (forests,
   cities, etc.). The remake's MAP/terrain data is being loaded/interpreted wrong
   under InfiniteMac (red army dots DO appear, so it's partial, not total).
2. The native OOB is consistent with a **garbage count/coordinate** derived from
   that bad data driving some later native loop.

Forwarding plumbing added so worker stderr (our `WL_*` logs) reaches the page
console / Playwright: `printErr` → `postMessage({type:"emulator_print_err"})`
(worker.ts) → `console.log` (ui.ts). Capture harness: `/tmp/capture_oob.mjs`.

**Original vs remake map view (oracle frame 06_03_map, the smoking gun):**
- ORIGINAL Tutoria map (`out/tutoria/original/06_03_map.png`): main view is
  **black fog-of-war** (title "untitled"); right column has the **minimap**
  (mostly **sea** with a few small **green islands**), the control-icon panel,
  and the marble info panel. Tutoria is an island/sea scenario.
- REMAKE (`tools/infinitemac/oob_crash.png`): main view is **uniform grass**
  with red army dots, **no fog**, and **none of the side panels** — then the
  native OOB. ⇒ the remake reads every tile as grass/plains; its MAP/terrain
  interpretation is wrong, and the same misread data yields the garbage value
  that crashes.

Next steps (game-side):
- Audit the remake's **MAP/terrain read** (which byte of each 2-byte tile is the
  terrain type; stride `y*0xE0 + x*2`). All-grass = reading the wrong byte/offset
  or a wrong terrain mapping, so an island map decodes as plains.
- The same wrong decode likely yields a bad city/army **coordinate or count**;
  find the first post-render op that indexes by it (that is the native OOB).
- Resources on the deployed disk are NOT badly truncated (armies + menu render),
  so focus on interpretation, not the resource fork.

NOTE: the emulator currently carries the debug instrumentation above (vm.hpp
hook, gfxaccel guards, main_unix `wl_oob_log`, worker/ui stderr forwarding).
Revert before shipping; harmless to leave during investigation.

## #6 update 2 (2026-06-11 cont.) — common to ALL maps; not any Mac-memory path

- **Random maps crash too.** "Use Random Map…" (no scenario file, in-memory
  `GenerateRandomMap`) crashes the same way → NOT scenario-file/resource-fork.
  The scenario data itself is verified good (tutoria.rsrc MAP 10000 = full 34944
  bytes, 92 distinct terrain values, dominated by sea tiles 45/39). So the bug is
  in the **common game-start path**, and the all-grass is a render symptom only.
- **Logging path verified:** worker `console.log` (e.g. AUDIO_PROBE) DOES reach
  Playwright (127 lines/boot); converted all WL_* probes from `fprintf(stderr)`
  to `EM_ASM console.log` so they're definitely visible. They STILL never fire.
- **Ruled out (probe never fires / disabling doesn't change crash):** PPC
  interpreter + every `Mac2HostAddr` (vm.hpp hook → scratch); ALL gfxaccel ops
  (bitblt/fillrect/invrect guards AND `NQD_*_hook` forced to `return false` to
  route everything through ROM QuickDraw); audio memcpy (bounded); the
  `video_set_dirty_area` JS stub (no-op); the frame blit (`Blit_Copy_16_To_32` /
  raw memcpy — buffers exactly sized X*Y*4). My Mac-address hook covers all
  interpreter + Mac2HostAddr accesses and NEVER fires.
- **⇒ the trapping host pointer is NOT Mac-address-derived.** Leading hypotheses:
  (a) a SheepShaver-internal / malloc'd buffer overflowed by a game-provided
  count, or (b) a **wasm stack overflow** from deep native recursion (manifests
  as "memory access out of bounds", invisible to the Mac hook). Note this is
  wasm-specific: the remake runs fine on SheepShaver **desktop**.

Next: GAME-SIDE bisection with the emulator build held FIXED (deterministic now
that we're not rebuilding SheepShaver each round). Game rebuilds are fast
(rebuild_remake.sh). Bisect `GenerateRandomMap` (random path) and the
post-load/GameInit/first-render sequence (scenario path) to localize the exact
game code. Also worth a quick check: emscripten stack size (raise STACK_SIZE) —
if the crash vanishes, it's recursion depth.

## #6 update 3 — it's a deterministic Mac-memory buffer overflow

- Game-side bisection (emulator held FIXED, rebuild only the remake ~90s): disabling
  the turn-1 sequence (ProcessStartOfTurn/ShowTurnSplash/ShowHeroHire/city loop)
  did NOT stop the crash — but it MOVED the fatal point earlier (crash now over the
  picker instead of after map render). ⇒ game changes also move the crash.
- Conclusion: **#6 is a deterministic buffer OVERFLOW writing within Mac memory**
  (in-bounds to the 288 MB wasm linear memory, so invisible to the vm.hpp hook AND
  to SAFE_HEAP — Mac-heap NewPtr allocations aren't host malloc). It corrupts an
  adjacent value (a count/pointer/handle); a later native consumer of that value
  faults, and WHICH access faults shifts with any layout change (emulator or game).
  That's why "does it still crash" bisection is useless — it always still crashes.
- Fix path: find the overflow by CODE AUDIT of the common GameInit + scenario/random
  setup path, focusing on the recent count expansions (city/site 40→99/139, name
  arrays). Look for a loop whose bound is a count (sCityCount, site count, army
  count) writing into a fixed array or gs+offset region sized for the OLD cap.
  Checked so far: `activeSites[40]` (line 2115) — guarded, safe; `sCityData[140*0x20]`
  — matches the 139 cap, safe. Many more count-driven writes remain to audit.

## Bisection method used for #6 (SUPERSEDED — unreliable, see above)
`return;`/`if(0&&...)`/null-out at successive points in main.c, `rebuild_remake.sh` + run the remake-only via `runner.mjs`, check `aborted=`. Order: GameInit-late off (still crash) → GameInit-all off (still) → load-block off (NO crash → it's the load) → copies off (still → not copies) → resource-handles null (NO crash → it's a Get1Resource) → MAP-only (no crash) → +SCN (crash → it's SCN). Faster next time: on-screen stage markers (one run) or rebuild SheepShaver.wasm with `-sSAFE_HEAP`/`-sASSERTIONS` for a faulting-address report.

## How to add findings
Run `bash tools/infinitemac/oracle/compare.sh tools/infinitemac/oracle/scripts/<script>.json`,
inspect `out/<script>/diff/` heatmaps + the two frame dirs, and log each real difference here
with the stage, what differs, and (once fixed) the main.c change.
