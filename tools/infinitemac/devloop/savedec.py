#!/usr/bin/env python3
"""Decode an ORIGINAL Warlords II save game (W2SG/War2).
Layout: byte 0 = 0, bytes 1..4 = uncompressed size (BE), then one PackBits stream:
  +0x00 SCEN header (0x54) | +0x54 game state gs (0x2FCC) | +0x3020 map (0x8880)
  | +0xB8A0 unit table (1000 x 0x16: +0 X, +2 Y, +4 type, +5 owner) | ...
Usage: savedec.py <save> [out.bin]   -> prints the live unit table."""
import struct, sys

def unpackbits(b, i=0):
    out = bytearray()
    while i < len(b):
        n = b[i]; i += 1
        if n < 128: out += b[i:i + n + 1]; i += n + 1
        elif n > 128: out += bytes([b[i]]) * (257 - n); i += 1
    return bytes(out)

def decode(path):
    d = open(path, 'rb').read()
    out = unpackbits(d, 5)
    assert len(out) == struct.unpack('>I', d[1:5])[0], "size mismatch"
    return out

if __name__ == '__main__':
    o = decode(sys.argv[1])
    if len(sys.argv) > 2: open(sys.argv[2], 'wb').write(o)
    gs = o[0x54:0x54 + 0x2FCC]
    print("cities:", struct.unpack('>h', gs[0x1602:0x1604])[0])
    for i in range(1000):
        r = o[0xB8A0 + i * 0x16:0xB8A0 + (i + 1) * 0x16]
        x, y = struct.unpack('>hh', r[:4])
        if not (0 <= x < 112 and 0 <= y < 156): break
        print(f"unit {i:3}: ({x:3},{y:3}) type {r[4]:2} owner {r[5]:#04x}")
