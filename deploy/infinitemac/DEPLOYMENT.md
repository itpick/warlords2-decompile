# Warlords II in the Browser (InfiniteMac) — Deployment Notes

Running the **original** Warlords II (1996 PPC Mac app) inside InfiniteMac (SheepShaver-wasm)
in the browser, packaged several ways. This documents everything built in this effort so it can
be rebuilt and reasoned about later.

Repos involved:
- `~/workspace/infinite-mac` — the InfiniteMac web app (Vite + Cloudflare worker) + `macemu` submodule (SheepShaver/BasiliskII).
- `~/workspace/itpick/warlords2-decompile` — this repo; build tooling lives in `tools/infinitemac/`.
- Retro68 toolchain at `~/workspace/itpick/Retro68/build/toolchain` (for the tiny launcher app).

---

## 1. Final artifacts (what exists, where)

| Artifact | Path | Size | What it is |
|---|---|---|---|
| Bootable disk image | `/tmp/warlords_boot.hda` | 419 MB volume / ~40 MB content | HFS volume: stripped Mac OS 8.6 + Warlords II |
| Disk manifest + chunks | `infinite-mac/src/Data/Warlords II.dsk.json` + `Images/build/*.chunk` | ~18 MB gzipped | content-addressed disk for the web app |
| Web app build | `infinite-mac/build/client/` | (full app) | `npm run build` output |
| **Offline bundle** | `warlords-offline/` | 49 MB on disk / ~18–24 MB gzipped | self-contained static site + `serve.py` + `Launch Warlords II.command` |
| **Go wrapper app** | `tools/infinitemac/gowrapper/Warlords II.app` | **27 MB** | single self-contained macOS app (server embedded) |

Disk display name in the web app: **"Warlords II"**, machine **Power Macintosh 9500**, core **SheepShaver**.
Clean URL: `/?disk=Warlords%20II&machine=Power%20Macintosh%209500` (or `/embed?...&infinite_hd=false` for chrome-free).

---

## 2. Build pipeline (how to rebuild end-to-end)

`machfs`/`xattr` are NOT installed globally — always `uv run --with machfs --with xattr python ...`.

```bash
cd ~/workspace/itpick/warlords2-decompile
LAUNCHER="$PWD/tools/infinitemac/launcher/Warlords Launcher"

# 1. Build the bootable disk (stripped 8.6 + game on desktop + sound-safe launcher)
STRIP86=1 LAUNCHER_APP="$LAUNCHER" uv run --with machfs --with xattr \
  python tools/infinitemac/build_bootable.py /tmp/macos86.img /tmp/wl_full_game /tmp/warlords_boot.hda 419430400

# 2. Chunk it into the web app's disk slot
uv run --with machfs --with xattr python tools/infinitemac/repackage.py

# 3. Build the web app (bundles the disk manifest + the offline-PWA service worker)
( cd ~/workspace/infinite-mac && npm run build )

# 4. Assemble the offline bundle (prunes other disks/machines, adds chunks, serve.py, launcher, PWA files)
uv run python tools/infinitemac/assemble_offline.py

# 5. (optional) Build the self-contained Go wrapper app
tools/infinitemac/gowrapper/build.sh
```

`/tmp/macos86.img`, `/tmp/macos81.img`, `/tmp/macos9.img` are reassembled InfiniteMac stock disk images
(Mac OS 8.6 / 8.1 / 9.0). `/tmp/wl_full_game` is the staged original game folder (app + Terrain/Armies/
Cities/Shields + 6 scenarios), minus cruft (.DS_Store, Read Me, Icon\r, Startup movie).

Recompiling SheepShaver.wasm (only needed for the debug probes — see §9):
```bash
cd ~/workspace/infinite-mac
scripts/docker-shell.sh -c "source /emsdk/emsdk_env.sh && cd /macemu/SheepShaver/src/Unix && make -j8"
scripts/import-emulator.sh sheepshaver
```

---

## 3. Sound — the real story (it was never broken)

SheepShaver-wasm audio **works fine** on Mac OS 8.6/9. Months of "no sound" were a **testing artifact**:
automated probes never triggered a real sound, and the game stalled before playing. Reliable triggers:
**Cmd+Shift+3** (screenshot → camera sound; also drops "Picture 1" proving the keystroke reached the OS),
or any caution/alert dialog. Type-select key misses do NOT reliably beep.

**Audio architecture** (macemu): SheepShaver patches the ROM's `sdev`/`sing` sound component
(`rom_patches.cpp` ~2337) to thunk `EMUL_OP_AUDIO_DISPATCH` → `AudioDispatch()`. Chain:
OS Sound Manager → patched component → `InitOutputDevice` opens the Apple Mixer
(`AudioStatus.mixer` ≠ 0) → `AddSource`/`StartSource`/`PlaySourceBuffer` → `AudioInterrupt()`
`GetSourceData` memcpy → `EM_ASM workerApi.enqueueAudio` → AudioWorklet → speakers.

**The actual Warlords problem = boot race.** Auto-launching the game from **Startup Items** ran its
sound-init *during* boot, before the Sound Manager's output device was ready → `OpenMixerSoundComponent`
failed → mixer stuck at 0 → **all** sound (OS + game) wedged. Proven by elimination: stock disks +
no-game disks have working sound; launching the game *after* boot settles works. **Timing-dependent
(flaky)** — sometimes the game wins the race and sound is fine, sometimes not.

**Fix = the launcher** (`tools/infinitemac/launcher/launcher.c`, a tiny Retro68 PPC app): in Startup
Items instead of the game; it `Delay(60)` (~1s) → `SysBeep` (primes the mixer cleanly post-boot) →
`LaunchApplication("Macintosh HD:Desktop Folder:Warlords II:Warlords II.app")`. Game lives on the
**desktop** (Desktop Folder) so it doesn't auto-launch during boot. Build the launcher:
```bash
PATH="$RETRO68/build/toolchain/bin:$PATH"; RINCLUDES=".../multiversal/RIncludes"
powerpc-apple-macos-gcc -O2 -o launcher_ppc launcher.c -lInterfaceLib
MakePEF launcher_ppc -o launcher.pef; cp launcher.pef "Warlords Launcher"
Rez -I "$RINCLUDES" launcher.r -a -o "Warlords Launcher" -t APPL -c WLnc   # FinderInfo type MUST be APPL
```

**MIDI music** plays through QuickTime Music Architecture and needs **`QuickTime™ Musical Instruments`**
(the General MIDI sample set). Stripping it = wrong/silent music even though digital SFX (Sound Manager)
still work. KEEP it.

`AudioInterrupt()`'s memcpy can crash ("RuntimeError: memory access out of bounds") on a bad stream
buffer/size — observed when the game's memory partition was bumped to 32 MB (reverted). Latent macemu
robustness bug; a bounds-check there would be a legit upstream fix.

---

## 4. OS choice — 8.6 is the target

- **Mac OS 9.0**: game + sound work. Stock = **65.5 MB gzipped** (too big). System Folder 128 MB.
- **Mac OS 8.1**: boots, **sound works**, but the game **ABORTs the emulator on launch**
  ("RuntimeError: Aborted()"). Stock = only 22 MB gzipped — great size, unusable. The original app
  links a CFM library present in 8.5+/OS9 but not stock 8.1 (it links QuickTimeLib). Not pursued.
- **Mac OS 8.6**: game + sound + music + all 6 scenarios work. **Chosen.**

---

## 5. Stripping (`STRIP86=1` in `build_bootable.py` → `strip_86()`)

8.6 System Folder **106 MB → 32.4 MB** → **~18 MB gzipped** disk. Removes by NAME so every `*Lib`
shared library survives. Highlights:
- Round 1: Help, Voices (text-to-speech 9 MB), QuickDraw3D/QT-VR, printing drivers, Apple Guide,
  MacinTalk, ColorSync, all "(Disabled)" folders (match `"Disabled"` — HFS truncates names to 31 chars
  so the `)` is gone), fonts → {Chicago,Geneva,Charcoal,Monaco}, Apple-Menu bloat, most Control Panels.
- Round 2: Preferences/"MS Internet Cache" (5.2 MB IE cache), Appearance/{Desktop Pictures,Sound Sets},
  networking (OpenTransport*/AppleShare/Internet Access/NetSprocket), misc (Find/UDF/IrDA/CMM/QT-MPEG/SystemAV).
- Round 3: Text Encodings (CJK), PrintingLib, Text Encoding Converter, Indeo, MS Font Embed, etc.
- Apple Menu Items removed: Calculator, Stickies, Note Pad, Scrapbook, Key Caps, Chooser, Recent Apps/Docs, etc.

**KEEP (do NOT remove):** System, Finder, Mac OS ROM, every `*Lib`, **QuickTime + QuickTime PowerPlug +
QuickTime Musical Instruments** (game links QuickTimeLib + needs the MIDI sample set), Sound Manager,
Color Picker, Appearance ext, Monitors & Sound / resolution control. QuickTime (~7 MB) is the floor —
removing it crashes the game (8.1-style) and kills music.

Verify every strip round headless with `tools/infinitemac/verify86.mjs` (no Abort/OOB, mixer opens, game
reaches the Scenario picker).

---

## 6. Persistence & the "?" no-boot icon

`WARLORDS_II` disk def in `infinite-mac/src/defs/disks.ts` has a `persistent` flag.
- `persistent: true` → writes (in-game saves) persist to the browser's OPFS; Desktop DB rebuilds only on
  the first boot then persists (kills the ~5 s rebuild every load).
- **Gotcha:** rebuilding the disk while `persistent: true` leaves stale OPFS blocks layered over the new
  base → corrupt/unbootable → the **flashing "?" disk icon**. During iteration keep `persistent: false`;
  flip to `true` only for the final locked build, and clear site data for the origin once after.

---

## 7. Offline bundle (`warlords-offline/`)

`assemble_offline.py` copies `build/client`, prunes everything not needed (other disks' manifests, other
machine ROMs, other emulator cores, Covers, leftover `*.hda/*.dsk`), adds the Warlords chunks under
`/Disk/<hash>.chunk`, and generates `serve.py`, `Launch Warlords II.command`, `precache-list.json`,
`manifest.json`. **Re-running it wipes the folder** — that's why those helper files are *generated* by the
script (don't hand-edit them in the bundle).

`serve.py` sets the required headers and routes:
```
Cross-Origin-Opener-Policy: same-origin
Cross-Origin-Embedder-Policy: require-corp
Service-Worker-Allowed: /
```
plus `/` → embed redirect, `/Disk/<hash>.chunk` served from `Disk/`, SPA fallback to `index.html`.

**Why a server is unavoidable:** the emulator needs `SharedArrayBuffer`, which requires cross-origin
isolation (the two COOP/COEP headers). Headers can only come from a server (or a service worker).
`file://` can't send headers and can't run service workers. So a double-clicked `.html` will never work.

`Launch Warlords II.command` runs `serve.py` in the **foreground** (so the server stays alive with the
window) and opens Firefox/Chrome (Brave's Shields block SharedArrayBuffer; Firefox can't install PWAs but
runs fine as a tab). Kill prior servers: `pkill -f "serve.py 8765"; lsof -ti tcp:8765 | xargs kill`.

---

## 8. Offline PWA (works — no server after first load, in Chrome/Edge/Firefox)

Extended InfiniteMac's service worker (`src/emulator/emulator-service-worker.ts`), guarded by
`!import.meta.env.DEV` (keeps dev HMR):
- `withCoiHeaders()` adds COOP/COEP/CORP to served responses → `crossOriginIsolated` works with **no
  server** (verified: server killed, `crossOriginIsolated: true`, game boots + sound).
- `handleAppShellRequest()`: cache-first (`app-shell-v1`) + opportunistic caching + navigation→index.html.
- `install` → `precacheAppShell()` fetches `/precache-list.json` and `cache.addAll`. Disk chunks cache via
  the existing message-prefetch on the first online load.

**Flow:** run the server once → browser caches app + chunks + installs SW → afterward it runs fully
offline, no server. Install as a dock app in Chrome/Edge.

**Browser matrix (offline, server killed):**
| Browser | Offline | Notes |
|---|---|---|
| Chrome / Edge | ✅ installable PWA | cold-launch isolated, boots+sound verified |
| Firefox | ✅ as a bookmarked tab | no desktop PWA install (Mozilla removed it) |
| Safari | ❌ requires server | WebKit ignores SW-injected COOP/COEP in standalone PWA mode |
| Brave | ⚠️ | Shields block SharedArrayBuffer — turn Shields OFF for localhost |

A pure-browser PWA still needs the server for the **first** load (SW installs over http(s); SW caches
can't be pre-seeded from files). True zero-server-from-start → the Go wrapper.

---

## 9. Go wrapper — single self-contained app (`tools/infinitemac/gowrapper/`)

`main.go` embeds the offline bundle as `bundle.zip` (`go:embed`), serves it with the COOP/COEP headers on
a fixed port (8765; if already bound, just opens the browser), and opens the default browser. Built &
packaged by `gowrapper/build.sh` → **`Warlords II.app` (27 MB)** = 21.5 MB bundle.zip + ~5.6 MB Go.
`LSUIElement` = background agent (no dock clutter); double-click to launch/reopen; the server lives inside
the app so **Safari works too** and it's truly offline.

- Cross-platform: same Go source compiles to Windows `.exe` and Linux binaries (need `openBrowser` made
  OS-aware: `open`/`start`/`xdg-open`). Each OS needs its own ~27 MB native binary; the `.app` is macOS
  arm64 only. Locally-built = no Gatekeeper quarantine; transferred copies need right-click-Open (mac) /
  "Run anyway" (Windows SmartScreen).
- Quit: it's a background server; quit via Activity Monitor or `pkill -f "Warlords II"`.

---

## 10. Debug instrumentation still in the build (REMOVE before any "clean"/upstream build)

These are diagnostic probes added to find the sound issue — they are **not fixes**:
- `macemu/BasiliskII/src/audio.cpp` — `EM_ASM ADISP sel=` (guarded `#ifdef __EMSCRIPTEN__`, needs `#include <emscripten.h>`).
- `macemu/BasiliskII/src/Unix/JS/audio_js.cpp` — `AUDIO_PROBE num_sources= mixer=`.
- `infinite-mac/src/emulator/worker/worker.ts` ~311 — `ENQ_AUDIO` log.
- The deployed `SheepShaver.wasm`/`.js` were recompiled WITH these probes. Recompile clean to remove.
- `macemu/.../video_js.cpp` — default depth hardcoded to `VIDEO_DEPTH_8BIT` (256-color; avoids the
  depth-switch dialog/crash). Keep for this deployment; not a clean upstream change.

`AudioInterrupt` selector decode (for ADISP): -1 Open, -2 Close, -4 Version, -5 Register; 1 InitOutputDevice,
3 GetSource, 257 AddSource, 258 RemoveSource, 259 GetInfo, 260 SetInfo, 261 StartSource, 262 StopSource,
264 PlaySourceBuffer.

---

## 11. Upstream contribution candidates (open-source InfiniteMac / GPL macemu)

- **InfiniteMac:** the offline-PWA service worker (`emulator-service-worker.ts`, generalize past the
  Warlords `precache-list` assumption) + the `Dialog.tsx` SSR guard (`?edit` route SSR crash). High value.
- **macemu (optional, the only real "sound" fix):** bounds-check `AudioInterrupt()`'s memcpy against the
  OOB crash.
- NOT contributable: `disks.ts` Warlords disk def, the debug probes, the 8-bit video hardcode.

---

## 12. Open / TODO

- Final locked build: flip `persistent: true`, decide Outside World (keep = save-file export via the
  **Uploads** folder — note "Downloads" is the import inbox, not export; The Outside World isn't a
  persistent disk so files there vanish on reload), recompile a clean (no-debug) SheepShaver.wasm.
- Optional: Windows/Linux Go wrappers; native macOS Intel build; an app icon for the `.app`.
- Hosting on warlords.pick.haus was deferred (offline-only for now) — `warlords-offline/DEPLOY.md` has the
  Caddy/nginx COOP/COEP config if revisited.
