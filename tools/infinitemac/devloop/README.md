# Dev loop: original vs remake in one live Mac OS emulator

One long-lived browser session runs the `warlords-offline/` bundle (Mac OS 8.6 + original
Warlords II on SheepShaver-wasm, the same build the Go app on the Desktop wraps). A small
HTTP bridge drives it. Files move in and out through InfiniteMac's **The Outside World**
volume, with resource forks and type/creator intact (verified byte-identical round trip).
You boot once (~90 s); every later iteration is a push, with no disk rebuild and no reboot.

```bash
# 1. serve the bundle (8766; 8765 is what the Go app / Launch .command use)
python3 warlords-offline/serve.py 8766 &
# 2. start the bridge (drop --headless to watch it in a Chromium window)
node tools/infinitemac/devloop/bridge.mjs --headless &
# 3. iterate
tools/infinitemac/devloop/push_remake.sh --build   # compile + stage + push
W=tools/infinitemac/devloop/wl.sh
$W shot picker            # -> .devloop/shots/picker.png
$W click 975 105 ; $W key Meta+o ; $W drag X1 Y1 X2 Y2 ; $W type Tutoria
```

- **In:** `wl.sh push <path>` zips with `ditto --sequesterRsrc` and drops the zip on the emulator.
  The item lands in `The Outside World:Downloads:`. Pushes never overwrite, so give each one a
  new name (`push_remake.sh` timestamps its folder).
- **Out:** in the Mac, copy anything into `The Outside World:Uploads:`. InfiniteMac zips it,
  and the bridge extracts it with forks to `.devloop/pulled/<name>/`. Use this for save
  games, prefs, and debug dumps the remake writes.
- The original auto-launches at boot; `wl.sh key Meta+q` quits it to the Finder.
- Input gotchas: the emulator samples the mouse slowly, so the bridge holds presses and waits
  after moves. Finder double-clicks are still flaky, so select the item and press `Meta+o`.
  The first click after a window change is sometimes lost; click twice.
- `wl.sh reload ["Disk name"]` reboots fresh. Use `--base http://localhost:3127` to run on
  the infinite-mac vite dev server instead (it also has the prebuilt "Warlords II Remake" disk
  for `oracle/compare.sh`).

## Side-by-side loop (original vs remake)

Run two bridges, `--port 3200` (original) and `--port 3201` (remake), against the same bundle:

```bash
node tools/infinitemac/devloop/bridge.mjs --headless --port 3200 &
node tools/infinitemac/devloop/bridge.mjs --headless --port 3201 &
tools/infinitemac/devloop/relaunch_remake.sh          # build, push, quit, launch (~1 min, no reboot)
tools/infinitemac/devloop/relaunch_original.sh        # original back to the picker
node tools/infinitemac/devloop/compare.mjs tools/infinitemac/devloop/scripts/picker.json [--reuse-orig]
uv run --with pillow --with numpy python tools/infinitemac/devloop/pixdiff.py .devloop/compare/picker 270 212 754 576
```

`pixdiff.py` reports the share of differing pixels and the best ±3 px alignment, so an
offset shows up as a shift. Original layouts are in the app's MacApp `View` resources
(sizes as 32-bit v,h), with text styles in `TxSt` and colours resolved through pltt 1000.
