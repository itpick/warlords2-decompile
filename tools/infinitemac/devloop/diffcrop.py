#!/usr/bin/env python3
"""Where exactly do two frames differ?
  diffcrop.py <orig.png> <remake.png> [x0 y0 x1 y1] [--zoom N] [--out file.png] [--mask x0,y0,x1,y1 ...]
              [--row-hist] [--col-hist]
Prints the mismatch share inside the box (|dRGB| > 40, same test as pixdiff.py), the
bounding boxes of the differing clusters (8-connected, with their pixel counts), and
writes a zoomed crop (original | remake | diff, with the diff in red over a dimmed
original) so a 1px baseline/offset error is visible. --mask boxes (screen coords) are
ignored in the count: use them for random content (hero name, battle roll, clock)."""
import sys
import numpy as np
from PIL import Image

args = sys.argv[1:]
zoom, out, masks, rowh, colh = 3, None, [], False, False
rest = []
i = 0
while i < len(args):
    a = args[i]
    if a == '--zoom': zoom = int(args[i + 1]); i += 2
    elif a == '--out': out = args[i + 1]; i += 2
    elif a == '--mask':
        i += 1
        while i < len(args) and not args[i].startswith('--'):
            masks.append(tuple(map(int, args[i].split(',')))); i += 1
    elif a == '--row-hist': rowh = True; i += 1
    elif a == '--col-hist': colh = True; i += 1
    else: rest.append(a); i += 1
o, r = rest[0], rest[1]
A = np.asarray(Image.open(o).convert('RGB')).astype(int)
B = np.asarray(Image.open(r).convert('RGB')).astype(int)
H, W = min(A.shape[0], B.shape[0]), min(A.shape[1], B.shape[1])
A, B = A[:H, :W], B[:H, :W]
box = tuple(map(int, rest[2:6])) if len(rest) >= 6 else (0, 0, W, H)
x0, y0, x1, y1 = box
m = np.abs(A - B).sum(axis=2) > 40
raw = m[y0:y1, x0:x1].mean()
for mx0, my0, mx1, my1 in masks:
    m[my0:my1, mx0:mx1] = False
sub = m[y0:y1, x0:x1]
print(f"box {box}: {raw*100:.2f}% raw, {sub.mean()*100:.2f}% after masks ({int(sub.sum())} px)")

# clusters (8-connected) via simple flood fill on a downsampled grid of 4x4 cells
cell = 4
gh, gw = (y1 - y0 + cell - 1) // cell, (x1 - x0 + cell - 1) // cell
g = np.zeros((gh, gw), bool)
ys, xs = np.nonzero(sub)
g[ys // cell, xs // cell] = True
seen = np.zeros_like(g)
clusters = []
for gy in range(gh):
    for gx in range(gw):
        if not g[gy, gx] or seen[gy, gx]: continue
        stack = [(gy, gx)]; seen[gy, gx] = True; cells = []
        while stack:
            cy, cx = stack.pop(); cells.append((cy, cx))
            for dy in (-1, 0, 1):
                for dx in (-1, 0, 1):
                    ny, nx = cy + dy, cx + dx
                    if 0 <= ny < gh and 0 <= nx < gw and g[ny, nx] and not seen[ny, nx]:
                        seen[ny, nx] = True; stack.append((ny, nx))
        cy = [c[0] for c in cells]; cx = [c[1] for c in cells]
        by0, by1 = min(cy) * cell, min((max(cy) + 1) * cell, y1 - y0)
        bx0, bx1 = min(cx) * cell, min((max(cx) + 1) * cell, x1 - x0)
        n = int(sub[by0:by1, bx0:bx1].sum())
        clusters.append((n, x0 + bx0, y0 + by0, x0 + bx1, y0 + by1))
clusters.sort(reverse=True)
for n, bx0, by0, bx1, by1 in clusters[:25]:
    print(f"  {n:6d} px  box {bx0} {by0} {bx1} {by1}  ({bx1-bx0}x{by1-by0})")
if rowh:
    rows = sub.sum(axis=1)
    for yy in np.nonzero(rows)[0]: print(f"  row {y0+yy}: {rows[yy]}")
if colh:
    cols = sub.sum(axis=0)
    for xx in np.nonzero(cols)[0]: print(f"  col {x0+xx}: {cols[xx]}")

if out:
    a = A[y0:y1, x0:x1].astype('uint8'); b = B[y0:y1, x0:x1].astype('uint8')
    d = (a * 0.35).astype('uint8'); d[sub] = (255, 0, 0)
    w, h = x1 - x0, y1 - y0
    t = Image.new('RGB', (w * 3 + 8, h), (255, 255, 0))
    t.paste(Image.fromarray(a), (0, 0)); t.paste(Image.fromarray(b), (w + 4, 0)); t.paste(Image.fromarray(d), (2 * w + 8, 0))
    t = t.resize((t.width * zoom, t.height * zoom), Image.NEAREST)
    t.save(out); print(out)
