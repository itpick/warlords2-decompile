#!/usr/bin/env python3
"""Compose original|remake frames side by side (half scale, labelled) for compare.mjs."""
import json, os, sys
from PIL import Image, ImageDraw

out = sys.argv[1]
for i, (label, orig, remake) in enumerate(json.load(open(os.path.join(out, 'pairs.json')))):
    a, b = Image.open(orig).convert('RGB'), Image.open(remake).convert('RGB')
    w, h = a.width // 2 + b.width // 2, max(a.height, b.height) // 2 + 20
    img = Image.new('RGB', (w + 8, h), 'white')
    img.paste(a.resize((a.width // 2, a.height // 2)), (0, 20))
    img.paste(b.resize((b.width // 2, b.height // 2)), (a.width // 2 + 8, 20))
    d = ImageDraw.Draw(img)
    d.text((4, 4), f'ORIGINAL - {label}', fill='black')
    d.text((a.width // 2 + 12, 4), f'REMAKE - {label}', fill='black')
    dest = os.path.join(out, f'{i:02d}_{label}.png')
    img.save(dest)
    print(dest)
