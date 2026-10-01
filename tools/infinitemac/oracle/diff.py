#!/usr/bin/env python3
"""Diff two frame directories (original vs remake), report % differing pixels per
frame, and write a heatmap diff image for each. Usage:
  uv run --with pillow python diff.py <dirA> <dirB> <outDir>
"""
import sys, os
from PIL import Image, ImageChops

dirA, dirB, outDir = sys.argv[1], sys.argv[2], sys.argv[3]
os.makedirs(outDir, exist_ok=True)
frames = sorted(f for f in os.listdir(dirA) if f.endswith(".png"))

print(f"{'frame':<28} {'%diff':>7}  bbox")
print("-" * 60)
worst = []
for f in frames:
    pb = os.path.join(dirB, f)
    if not os.path.exists(pb):
        print(f"{f:<28} {'--':>7}  (missing in remake)")
        continue
    a = Image.open(os.path.join(dirA, f)).convert("RGB")
    b = Image.open(pb).convert("RGB")
    if a.size != b.size:
        b = b.resize(a.size)
    d = ImageChops.difference(a, b).convert("L")
    hist = d.histogram()
    nonzero = sum(hist[1:])              # pixels that differ at all
    total = a.size[0] * a.size[1]
    pct = 100.0 * nonzero / total
    bbox = d.getbbox()
    # heatmap: brighten the diff so small differences are visible
    d.point(lambda x: min(255, x * 6)).save(os.path.join(outDir, "diff_" + f))
    print(f"{f:<28} {pct:>6.1f}%  {bbox}")
    worst.append((pct, f))

worst.sort(reverse=True)
if worst:
    print("\nMost divergent frames:")
    for pct, f in worst[:5]:
        print(f"  {pct:>6.1f}%  {f}")
print(f"\nHeatmaps -> {outDir}/diff_*.png")
