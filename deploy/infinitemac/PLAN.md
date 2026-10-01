# Warlords II — Minimal InfiniteMac Browser Deployment

Goal: a self-contained, local-browser Warlords II that **boots straight into the game**, ~15–25 MB compressed, sounds + save games working. Built on InfiniteMac (SheepShaver-wasm + Mac OS, PPC).

## Status (Jun 11 2026)
- ✅ Mac OS 9 boots in browser (InfiniteMac, `localhost:3127/?disk=Mac%20OS%209.0`), automated via Playwright.
- ✅ Disk build solved: `tools/infinitemac/make_hfs_disk.sh <stageDir> <size> <out.hda>` (hdiutil HFS+ + ditto → raw image; machfs crashed the emulator). Curated game stage is stable.
- ✅ **The original game launches and runs** — its 256-color startup dialog appears (`tools/infinitemac/w_startdlg.png`).
- ⚠️ **Launch-via-Finder automation is ~20% reliable** (keyboard focus / double-click detection in the emulator is flaky). Not viable as the deployment mechanism.
- ⚠️ Game quits right after the 256-color startup dialog (Yes→can't live-switch depth; No→still quit). Needs the display at 8-bit/256 colors. NOTE: InfiniteMac runs other 256-color games (Marathon, Bolo per its welcome notes), so this is solvable, likely via setting the boot monitor depth to 256.

## Architecture decision: ONE bootable auto-launch disk
Instead of booting an OS disk + mounting a game disk + clicking through Finder, build a **single bootable HFS+ disk** that:
1. Contains a **minimal PPC System Folder** (set as blessed/startup).
2. Contains `Warlords II.app` + asset folders (Terrain/Armies/Cities/Shields) + scenario files (`W2SC`).
3. Has an **alias to the app in `System Folder/Startup Items`** → boots straight into Warlords II. Eliminates all Finder-click flakiness.
4. Boot monitor **pre-set to 256 colors** (8-bit) → no startup dialog, game runs at native depth.

This single artifact IS the deployment AND the deterministic launch.

## Build pipeline (to implement)
1. **Obtain a minimal PPC System Folder.** Options, easiest first:
   - Materialize InfiniteMac's Mac OS 9.0 disk locally (its chunk manifest is `src/Data/Mac OS 9.0 HD.dsk.json`; reconstruct/assemble the base image), then extract `System Folder` with `machfs`/hfsutils.
   - Or use a smaller PPC-capable system (Mac OS 8.1 / System 7.6) — strips far smaller than OS 9. Biggest size lever.
   - (macOS 26 can't mount the SheepShaver `.image`/`.img` files directly — HFS-standard / no partition map.)
2. **Strip the System Folder** to the floor: drop fonts, unneeded extensions/control panels, Apple Extras, help, etc.; keep Sound Manager + Display + minimal enabler. Target the ~10–20 MB system floor.
3. **Set monitor depth = 256** in the system's Display prefs (so no color dialog).
4. **Assemble** the bootable disk via `make_hfs_disk.sh` variant with `machfs` `write(bootable=True, startapp=...)` OR an Apple-blessed System Folder + Startup-Items alias.
5. **Boot in InfiniteMac**: custom builder, add the `.hda` as a disk file, no system disk needed (the disk is self-booting). Verify it lands in-game.
6. **Measure compressed size** (`gzip`/`brotli`); iterate stripping to hit 15–25 MB.
7. **Package** as a single-purpose local InfiniteMac embed (strip the InfiniteMac shell to the embed view).

## Size budget (compressed, from measured parts)
| Part | Compressed |
|---|---|
| SheepShaver.wasm | 0.28 MB (measured) |
| Mac OS ROM (1.95 MB) | ~1.2 MB |
| Minimal PPC System | ~10–20 MB ← dominant; use 7.6/8.1 to shrink |
| Game (app+assets+scenarios, no Startup movie) | ~4–5 MB |
| InfiniteMac embed shell | ~0.3 MB |
**Target: ~15–25 MB**, floor ~12 MB.

## Sounds & saves
- Sounds: `'snd '` resources ship inside `Warlords II.app`; Sound Manager is in the System (no QuickTime needed once the Startup movie is dropped). Free.
- Saves: InfiniteMac persists writes to a Saved HD (IndexedDB). For a single bootable disk, enable a writable persistence layer so save games survive reloads.

## Open questions / next actions
- [ ] Materialize a minimal PPC System Folder (decide OS 9 vs 8.1 vs 7.6).
- [ ] Confirm 256-color boot makes Warlords II run (no dialog / no quit).
- [ ] Implement bootable-disk assembly with auto-launch.
- [ ] First size measurement, then strip-and-remeasure loop.

## Parallel track (unchanged)
Keep matching the C remake (`src/main.c`) to the original via the static analytics (constants/offsets/strings vs the PPC/68k decomp) + visual diffing against this in-browser original as the golden oracle.
