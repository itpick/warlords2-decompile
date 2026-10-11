#!/usr/bin/env python3
"""paneldump.py - the info panel's digits as text (numeric verification, no image viewing).

Prints the dark-pixel column bands of each text row of the panel crop (or any crop),
so two runs' numbers can be compared as text. Rows are found as bands of rows with
dark pixels; within a row, column bands are the digit glyph groups.

Usage: paneldump.py IMAGE [x0 y0 x1 y1] [--thresh T]
Output: one line per text row: "row y0..y1: band x0..x1 band x0..x1 ..."
"""
import sys
import numpy as np
from PIL import Image


def bands(mask_cols, gap=3):
    """-> [(start, end)] of True runs, merging runs closer than gap columns."""
    out = []
    start = None
    zeros = 0
    for i, v in enumerate(mask_cols):
        if v:
            if start is None:
                start = i
            zeros = 0
        elif start is not None:
            zeros += 1
            if zeros >= gap:
                out.append((start, i - zeros + 1))
                start = None
    if start is not None:
        out.append((start, len(mask_cols)))
    return out


def main(argv):
    path = argv[1]
    box = tuple(map(int, argv[2:6])) if len(argv) >= 6 else None
    thresh = 120
    if '--thresh' in argv:
        thresh = int(argv[argv.index('--thresh') + 1])
    a = np.asarray(Image.open(path).convert('L')).astype(int)
    if box:
        x0, y0, x1, y1 = box
        a = a[y0:y1, x0:x1]
    dark = a < thresh
    rows = dark.any(axis=1)
    # row bands (merge rows separated by 2 blank rows)
    rb = []
    start = None
    blank = 0
    for i, v in enumerate(rows):
        if v:
            if start is None:
                start = i
            blank = 0
        elif start is not None:
            blank += 1
            if blank >= 3:
                rb.append((start, i - blank + 1))
                start = None
    if start is not None:
        rb.append((start, len(rows)))
    for (ry0, ry1) in rb:
        cols = dark[ry0:ry1].any(axis=0)
        bs = bands(cols)
        desc = ' '.join(f"x{x0}:{x1}" % () if False else f"x{b0 + (box[0] if box else 0)}-{b1 + (box[0] if box else 0)}" for b0, b1 in bs)
        print(f"y{ry0 + (box[1] if box else 0)}..{ry1 + (box[1] if box else 0)}: {desc}")


if __name__ == '__main__':
    main(sys.argv)
