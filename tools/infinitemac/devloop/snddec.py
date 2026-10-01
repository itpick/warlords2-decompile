#!/usr/bin/env python3
"""Decode classic Mac 'snd ' resources (format 1/2, stdSH/extSH, 8/16-bit PCM).
  snddec.py [app] [outdir]   -> writes <outdir>/snd_<id>.wav for every 'snd '
Library: decode(bytes) -> (sample_rate, numpy float32 mono array in -1..1)."""
import os, struct, sys, wave
import numpy as np
sys.path.insert(0, os.path.dirname(__file__))
from rsrc import resources


def decode(v):
    fmt = struct.unpack('>h', v[0:2])[0]
    if fmt == 1:
        nfmt = struct.unpack('>h', v[2:4])[0]
        p = 4 + nfmt * 6
    elif fmt == 2:
        p = 4
    else:
        raise ValueError('snd format %d' % fmt)
    ncmd = struct.unpack('>h', v[p:p + 2])[0]; p += 2
    hdr = None
    for i in range(ncmd):
        cmd, p1, p2 = struct.unpack('>HhI', v[p + i * 8:p + i * 8 + 8])
        if cmd & 0x7FFF in (0x51, 0x50):          # bufferCmd / soundCmd (data offset flag 0x8000)
            hdr = p2
    if hdr is None:
        raise ValueError('no bufferCmd')
    h = v[hdr:]
    ptr, n, rate, ls, le, enc, base = struct.unpack('>IIIIIBB', h[:22])
    rate = rate / 65536.0
    if enc == 0x00:                               # stdSH: n = byte count, 8-bit offset binary
        data = np.frombuffer(h[22:22 + n], dtype=np.uint8).astype(np.float32)
        return rate, (data - 128) / 128.0
    if enc == 0xFF:                               # extSH: n = channels
        chans = n
        frames = struct.unpack('>I', h[22:26])[0]
        bits = struct.unpack('>h', h[48:50])[0]
        raw = h[64:]
        if bits == 16:
            a = np.frombuffer(raw[:frames * chans * 2], dtype='>i2').astype(np.float32) / 32768.0
        else:
            a = (np.frombuffer(raw[:frames * chans], dtype=np.uint8).astype(np.float32) - 128) / 128.0
        a = a.reshape(-1, chans).mean(axis=1)
        return rate, a
    raise ValueError('encode 0x%02x (compressed) not supported' % enc)


def write_wav(path, rate, a):
    with wave.open(path, 'wb') as w:
        w.setnchannels(1); w.setsampwidth(2); w.setframerate(int(round(rate)))
        w.writeframes((np.clip(a, -1, 1) * 32767).astype('<i2').tobytes())


if __name__ == '__main__':
    here = os.path.dirname(os.path.abspath(__file__))
    app = sys.argv[1] if len(sys.argv) > 1 else os.path.join(here, '../../../Warlords II/Warlords II.app')
    out = sys.argv[2] if len(sys.argv) > 2 else os.path.join(here, '../../../.devloop/snd')
    os.makedirs(out, exist_ok=True)
    R = resources(app)
    names = {}
    for (t, i), v in sorted(R.items()):
        if t != 'snd ':
            continue
        try:
            rate, a = decode(v)
            write_wav(os.path.join(out, 'snd_%d.wav' % i), rate, a)
            print('%d  %5.0f Hz  %6.2f s' % (i, rate, len(a) / rate))
        except Exception as e:
            print('%d  FAILED: %s' % (i, e))
