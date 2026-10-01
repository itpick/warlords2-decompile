#!/usr/bin/env python3
"""Assemble a self-contained offline Warlords II bundle from the InfiniteMac build."""
import json, os, shutil, sys

IM = "/Users/lucaspick/workspace/infinite-mac"
BUILD = os.path.join(IM, "build/client")
CHUNKS = os.path.join(IM, "Images/build")
MANIFEST = os.path.join(IM, "src/Data/Warlords II.dsk.json")
OUT = "/Users/lucaspick/workspace/itpick/warlords2-decompile/warlords-offline"

if os.path.exists(OUT): shutil.rmtree(OUT)
print("copying app shell...")
shutil.copytree(BUILD, OUT)

# Prune everything not needed for Warlords (SheepShaver + Power Macintosh 9500 only).
assets = os.path.join(OUT, "assets")
pruned = 0
def drop(path):
    global pruned
    if os.path.isfile(path): os.remove(path); pruned += 1
    elif os.path.isdir(path): shutil.rmtree(path); pruned += 1

for f in os.listdir(assets):
    p = os.path.join(assets, f)
    # other disks' manifest JS
    if ".dsk-" in f and not f.startswith("Warlords II.dsk-"): drop(p); continue
    # ROMs for other machines (keep only Power Macintosh 9500)
    if f.endswith(".rom") and not f.startswith("Power-Macintosh-9500"): drop(p); continue
    # emulator cores other than SheepShaver
    if f.endswith(".wasm") and not f.startswith("SheepShaver"): drop(p); continue
    # source maps
    if f.endswith(".map"): drop(p); continue
# leftover full-image artifacts + cover art + stray maps at bundle root
for f in os.listdir(OUT):
    p = os.path.join(OUT, f)
    if f.endswith((".hda", ".dsk", ".map")) or f == "Covers": drop(p)
print(f"pruned {pruned} unneeded files (other disks/machines/cores/covers)")

# Copy the Warlords chunks under /Disk/<hash>.chunk (the baseUrl the app fetches from).
mani = json.load(open(MANIFEST))
diskdir = os.path.join(OUT, "Disk"); os.makedirs(diskdir, exist_ok=True)
seen = set(); copied = 0
for h in mani["chunks"]:
    if not h or h in seen: continue
    seen.add(h)
    src = os.path.join(CHUNKS, h + ".chunk")
    if os.path.exists(src):
        shutil.copy(src, os.path.join(diskdir, h + ".chunk")); copied += 1
print(f"copied {copied} Warlords chunks -> Disk/")

# --- write the bundle support files (server + double-click launcher + deploy docs) ---
EMBED = "/embed?disk=Warlords%20II&machine=Power%20Macintosh%209500&infinite_hd=false&saved_hd=false"

SERVE_PY = '''#!/usr/bin/env python3
"""Serve the self-contained Warlords II bundle locally.

InfiniteMac needs SharedArrayBuffer, which requires cross-origin isolation
(COOP/COEP response headers) + http(s) (it cannot run from file://). This tiny
server sets those headers, does SPA fallback, and redirects / into the game.
Run:  python3 serve.py     then open the URL it prints.
"""
import http.server, os, sys, urllib.parse
PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 8765
ROOT = os.path.dirname(os.path.abspath(__file__))
EMBED = "%s"
class H(http.server.SimpleHTTPRequestHandler):
    def __init__(self, *a, **k): super().__init__(*a, directory=ROOT, **k)
    def end_headers(self):
        self.send_header("Cross-Origin-Opener-Policy", "same-origin")
        self.send_header("Cross-Origin-Embedder-Policy", "require-corp")
        self.send_header("Service-Worker-Allowed", "/")
        super().end_headers()
    def do_GET(self):
        parsed = urllib.parse.urlparse(self.path); clean = parsed.path
        if clean == "/":
            self.send_response(302); self.send_header("Location", EMBED); self.end_headers(); return
        fs = self.translate_path(clean)
        if not os.path.exists(fs) and not clean.startswith("/Disk/") and not clean.startswith("/assets/"):
            self.path = "/index.html"
        return super().do_GET()
print(f"Warlords II  ->  http://localhost:{PORT}/")
http.server.ThreadingHTTPServer(("0.0.0.0", PORT), H).serve_forever()
''' % EMBED

LAUNCHER = '''#!/bin/bash
# Double-click to play Warlords II offline. Starts a tiny local server (required:
# the emulator needs SharedArrayBuffer, which can't run from a file:// double-click)
# and opens it in a browser. Keep this window open while playing.
cd "$(dirname "$0")"
# stop any previously-running Warlords local server (and free the port)
pkill -f "serve.py 8765" 2>/dev/null
lsof -ti tcp:8765 2>/dev/null | xargs kill 2>/dev/null
sleep 0.5
URL="http://localhost:8765/"
# Prefer Firefox or Chrome (Brave's Shields block SharedArrayBuffer); fall back to default.
( sleep 2
  if open -a "Firefox" "$URL" 2>/dev/null; then :
  elif open -a "Google Chrome" "$URL" 2>/dev/null; then :
  else open "$URL"; fi ) &
echo "Warlords II  ->  $URL"
echo "(If it opened in Brave and is blank, turn Brave Shields OFF for localhost, or use Firefox/Chrome.)"
echo "Keep this window open while playing. Close it (or Ctrl-C) to stop."
echo ""
exec python3 serve.py 8765
'''

with open(os.path.join(OUT, "serve.py"), "w") as f: f.write(SERVE_PY)
cmd_path = os.path.join(OUT, "Launch Warlords II.command")
with open(cmd_path, "w") as f: f.write(LAUNCHER)
os.chmod(cmd_path, 0o755)
print("wrote serve.py + 'Launch Warlords II.command'")

# --- offline PWA: precache list (app shell) + Warlords-branded manifest ---
precache = ["/index.html", "/manifest.json"]
for ic in ["favicon.ico", "favicon16.png", "favicon32.png", "logo192.png", "logo512.png"]:
    if os.path.exists(os.path.join(OUT, ic)): precache.append("/" + ic)
for f in sorted(os.listdir(os.path.join(OUT, "assets"))):
    precache.append("/assets/" + f)   # JS/CSS/wasm/ROM — NOT disk chunks (those cache on load)
with open(os.path.join(OUT, "precache-list.json"), "w") as fh:
    json.dump(precache, fh)
print(f"wrote precache-list.json ({len(precache)} app-shell entries)")

manifest = {
    "short_name": "Warlords II", "name": "Warlords II",
    "icons": [
        {"src": "favicon.ico", "sizes": "32x32 16x16", "type": "image/x-icon"},
        {"src": "logo192.png", "type": "image/png", "sizes": "192x192"},
        {"src": "logo512.png", "type": "image/png", "sizes": "512x512"},
    ],
    "start_url": EMBED, "display": "standalone",
    "theme_color": "#000000", "background_color": "#9aa4cc",
}
with open(os.path.join(OUT, "manifest.json"), "w") as fh:
    json.dump(manifest, fh, indent=2)
print("wrote Warlords manifest.json (PWA)")

size = sum(os.path.getsize(os.path.join(dp, f)) for dp, _, fs in os.walk(OUT) for f in fs)
print(f"bundle assembled: {OUT}  ({size/1e6:.1f} MB on disk)")
