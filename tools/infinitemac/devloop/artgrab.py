#!/usr/bin/env python3
"""Lift small UI art from original screenshots: pixels identical across all given
instances belong to the control (the rest is background showing through). Displayed
colours are mapped back to pltt 1000 indices (display gamma 0.69), so the remake can
draw the art through the same CLUT. Prints a C array: index per pixel, -1 = transparent.
  artgrab.py <png> <name> <w> <h> x,y [x,y ...]"""
import sys, struct, numpy as np
from PIL import Image
sys.path.insert(0, __import__('os').path.dirname(__file__))
from rsrc import resources
APP = __import__('os').path.join(__import__('os').path.dirname(__file__), '../../../Warlords II/Warlords II.app')
v = resources(APP)[('pltt', 1000)]
P = np.array([[c >> 8 for c in struct.unpack('>3H', v[16 + i * 16:22 + i * 16])] for i in range(256)], float)
G = np.round(255 * (P / 255.0) ** 0.69)

png, name, w, h = sys.argv[1], sys.argv[2], int(sys.argv[3]), int(sys.argv[4])
pts = [tuple(map(int, s.split(','))) for s in sys.argv[5:]]
A = np.asarray(Image.open(png).convert('RGB')).astype(int)
stack = np.array([A[y:y + h, x:x + w] for x, y in pts])
same = (stack.max(axis=0) - stack.min(axis=0)).sum(axis=2) <= 6 if len(pts) > 1 else np.ones((h, w), bool)
rows = []
for y in range(h):
    r = []
    for x in range(w):
        if not same[y, x]: r.append(-1); continue
        c = stack[0, y, x]
        r.append(int(np.abs(G - c).sum(axis=1).argmin()))
    rows.append(r)
print(f"static const short {name}[{h}][{w}] = {{")
for r in rows: print("    {" + ",".join(f"{i:3d}" for i in r) + "},")
print("};")
