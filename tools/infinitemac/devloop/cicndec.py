#!/usr/bin/env python3
"""Decode a 'cicn' resource to an RGBA PIL image (mask -> alpha)."""
import struct
from PIL import Image
def decode(v):
    rb = struct.unpack('>H', v[4:6])[0] & 0x3fff
    t, l, b, r = struct.unpack('>4h', v[6:14]); w, h = r - l, b - t
    psize = struct.unpack('>H', v[32:34])[0]
    mrb = struct.unpack('>H', v[54:56])[0]; brb = struct.unpack('>H', v[68:70])[0]
    p = 82
    mask = v[p:p + mrb * h]; p += mrb * h
    p += brb * h
    seed, flags, size = struct.unpack('>IHH', v[p:p + 8]); p += 8
    pal = [(0, 0, 0)] * 256
    for e in range(size + 1):
        val, R, G, B = struct.unpack('>4H', v[p:p + 8]); p += 8
        pal[val & 255] = (R >> 8, G >> 8, B >> 8)
    img = Image.new('RGBA', (w, h))
    for y in range(h):
        row = v[p + y * rb:p + (y + 1) * rb]
        for x in range(w):
            if psize == 8: idx = row[x]
            elif psize == 4: idx = (row[x >> 1] >> (4 if x % 2 == 0 else 0)) & 15
            elif psize == 2: idx = (row[x >> 2] >> (6 - 2 * (x % 4))) & 3
            else: idx = (row[x >> 3] >> (7 - x % 8)) & 1
            a = 255 if (mask[y * mrb + (x >> 3)] >> (7 - x % 8)) & 1 else 0
            img.putpixel((x, y), pal[idx] + (a,))
    return img
