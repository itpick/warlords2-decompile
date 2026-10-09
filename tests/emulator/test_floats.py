#!/usr/bin/env python3
"""Emulator test (needs the devloop bridge for the remake, default :3201).

Builds and launches the remake (relaunch_remake.sh), starts Erythea, takes
turn 1, then checks the floats' zoom boxes against the frames measured on
the original (tasklist B10): the info area cycles 224x129 -> 112x120 ->
360x66 -> 224x129 with its bottom-right corner fixed, the overview toggles
224x312 <-> 112x156 with its top-left corner fixed.  Window frames are read
from screenshots (1 px black borders), so the check is layout-only.

    tests/emulator/test_floats.py [--no-launch]
Exit 0 = pass, 1 = fail, 77 = skipped (no bridge).
"""
import json
import os
import subprocess
import sys
import time
import urllib.request

from PIL import Image

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
PORT = os.environ.get("WL_PORT", "3201")
WL = os.path.join(ROOT, "tools", "infinitemac", "devloop", "wl.sh")
SHOTS = os.path.join(ROOT, ".devloop", "shots", PORT)


def wl(*args):
    env = dict(os.environ, WL_PORT=PORT)
    return subprocess.run([WL, *map(str, args)], env=env, capture_output=True, text=True).stdout.strip()


def shot(name):
    wl("move", 600, 700)
    time.sleep(1)
    return Image.open(wl("shot", name)).convert("RGB")


def frame(im, x0, y0, x1, y1, ymin):
    """(left, top, right, bottom) of the float whose border runs through the box"""
    px = im.load()
    blk = lambda x, y: sum(px[x, y]) < 60
    rows = [y for y in range(y0, y1) if sum(blk(x, y) for x in range(x0, x1)) > 40]
    cols = [x for x in range(x0, x1) if sum(blk(x, y) for y in range(ymin, y1 - 20)) > 40]
    return rows, cols


def main():
    try:
        st = json.loads(urllib.request.urlopen(f"http://127.0.0.1:{PORT}/status", timeout=3).read())
    except Exception as e:
        print(f"SKIP: no devloop bridge on :{PORT} ({e})")
        return 77
    print("bridge:", st.get("disk"))
    if "--no-launch" not in sys.argv:
        env = dict(os.environ, WL_PORT=PORT)
        subprocess.run([os.path.join(ROOT, "tools/infinitemac/devloop/relaunch_remake.sh")], env=env, check=True)
        for step in ((360, 350, 1), (372, 547, 10), (608, 512, 13), (510, 320, 6), (703, 470, 5), (719, 455, 3)):
            wl("click", step[0], step[1])
            time.sleep(step[2])
    fails = 0
    # info area: (title-bar y of the zoom box, expected outer frame)
    expect = [((485,), (796, 479)), ((494,), (908, 488)), ((548,), (660, 542))]
    im = shot("emu_info0")
    for i, ((zy,), _) in enumerate(expect):
        wl("click", 1010, zy)
        time.sleep(3)
        im = shot(f"emu_info{i + 1}")
        nxt = expect[(i + 1) % 3][1]
        rows, cols = frame(im, 600, 470, 1024, 640, 480)
        ok = nxt[1] in rows and nxt[0] in cols and 621 in rows and 1021 in cols
        print(("ok  " if ok else "FAIL"), f"info area -> frame at {nxt}", "" if ok else f"rows {rows} cols {cols}")
        fails += not ok
    # overview
    for zx, want_right, want_bottom in ((1010, 909, 190), (898, 1021, 346)):
        wl("click", zx, 27)
        time.sleep(3)
        im = shot(f"emu_over_{want_right}")
        rows, cols = frame(im, 790, 15, 1024, 360, 20)
        ok = want_bottom in rows and want_right in cols and 796 in cols
        print(("ok  " if ok else "FAIL"), f"overview -> right {want_right} bottom {want_bottom}", "" if ok else f"rows {rows} cols {cols}")
        fails += not ok
    print(f"{fails} failed")
    return 1 if fails else 0


if __name__ == "__main__":
    sys.exit(main())
