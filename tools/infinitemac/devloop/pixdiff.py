#!/usr/bin/env python3
"""Pixel-diff the original vs remake frames from a compare.mjs run.
  pixdiff.py <compare-dir> [x0 y0 x1 y1]   (crop in screen coords; default full screen)
Writes <label>_triptych.png (original | remake | diff mask, 2x) per pair and prints the
share of differing pixels (|dRGB| > 40) plus the best +-3px alignment, so an offset bug
shows up as a shift instead of a wall of noise."""
import json, os, sys
import numpy as np
from PIL import Image

out = sys.argv[1]
box = tuple(map(int, sys.argv[2:6])) if len(sys.argv) >= 6 else None
for label, o, r in json.load(open(os.path.join(out, 'pairs.json'))):
    A = np.asarray(Image.open(o).convert('RGB')).astype(int)
    B = np.asarray(Image.open(r).convert('RGB')).astype(int)
    x0, y0, x1, y1 = box or (3, 3, A.shape[1] - 3, A.shape[0] - 3)
    def mism(dy, dx):
        return (np.abs(A[y0:y1, x0:x1] - B[y0 + dy:y1 + dy, x0 + dx:x1 + dx]).sum(axis=2) > 40)
    m0 = mism(0, 0)
    H, W = B.shape[:2]
    shifts = [(dy, dx) for dy in range(-3, 4) for dx in range(-3, 4)
              if y0 + dy >= 0 and x0 + dx >= 0 and y1 + dy <= H and x1 + dx <= W]
    best = min((mism(dy, dx).mean(), dy, dx) for dy, dx in shifts)
    print(f"{label}: {m0.mean()*100:.1f}% differ at (0,0); best shift dy={best[1]} dx={best[2]} -> {best[0]*100:.1f}%")
    a = Image.fromarray(A[y0:y1, x0:x1].astype('uint8')); b = Image.fromarray(B[y0:y1, x0:x1].astype('uint8'))
    d = Image.fromarray((m0 * 255).astype('uint8')).convert('RGB')
    w, h = a.size
    t = Image.new('RGB', (w * 3, h)); t.paste(a, (0, 0)); t.paste(b, (w, 0)); t.paste(d, (2 * w, 0))
    t = t.resize((t.width * 2, t.height * 2), Image.NEAREST) if w < 600 else t
    dest = os.path.join(out, f'{label}_triptych.png'); t.save(dest); print(dest)
