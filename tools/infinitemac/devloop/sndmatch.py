#!/usr/bin/env python3
"""Which of the game's 'snd ' resources play when, in an emulator recording.
  sndmatch.py rec.wav [rec2.wav]   (recordings from `wl.sh audio stop NAME`)
Prints a timeline "t=  12.34s  snd 1007 SND_TURN  (ncc 0.93)" per recording; with
two recordings (original, remake) it also prints the two timelines side by side.
Method: the recording is resampled to the snd rate (11127 Hz), then each sound
is located by FFT normalised cross-correlation (peaks >= 0.6, one hit per
template length)."""
import os, re, sys, wave
import numpy as np
sys.path.insert(0, os.path.dirname(__file__))
from rsrc import resources
from snddec import decode

HERE = os.path.dirname(os.path.abspath(__file__))
APP = os.path.join(HERE, '../../../Warlords II/Warlords II.app')
SRC = os.path.join(HERE, '../../../src/main.c')
RATE = 11127.0


def snd_names():
    names = {}
    try:
        for m in re.finditer(r'#define\s+(SND_\w+)\s+(\d+)', open(SRC).read()):
            names.setdefault(int(m.group(2)), m.group(1))
    except OSError:
        pass
    return names


def load_wav(path):
    with wave.open(path) as w:
        sr = w.getframerate(); n = w.getnframes()
        a = np.frombuffer(w.readframes(n), dtype='<i2').astype(np.float32) / 32768.0
        if w.getnchannels() > 1:
            a = a.reshape(-1, w.getnchannels()).mean(axis=1)
    # resample to RATE (linear is enough for matching)
    t = np.arange(0, len(a) / sr, 1.0 / RATE)
    return np.interp(t, np.arange(len(a)) / sr, a).astype(np.float32)


def ncc(x, t):
    """normalised cross-correlation of template t over signal x (valid part)"""
    n, m = len(x), len(t)
    if m > n: return np.zeros(0)
    t = t - t.mean(); tn = np.sqrt((t * t).sum()) or 1.0
    L = 1 << int(np.ceil(np.log2(n + m)))
    c = np.fft.irfft(np.fft.rfft(x, L) * np.conj(np.fft.rfft(t, L)), L)[:n - m + 1]
    cs = np.concatenate([[0], np.cumsum(x, dtype=np.float64)])
    cs2 = np.concatenate([[0], np.cumsum(x.astype(np.float64) ** 2)])
    s = cs[m:] - cs[:-m]; s2 = cs2[m:] - cs2[:-m]
    var = np.maximum(s2 - s * s / m, 1e-9)
    return c / (np.sqrt(var) * tn)


def timeline(rec, sounds, thresh=0.6):
    hits = []
    for sid, tpl in sounds.items():
        # match on the first 0.6 s (or whole sound): voices overlap other sounds less early on
        seg = tpl[: int(RATE * 0.6)] if len(tpl) > RATE * 0.6 else tpl
        if np.abs(seg).max() < 0.02: continue
        r = ncc(rec, seg)
        if not len(r): continue
        i = 0
        while True:
            k = int(np.argmax(r))
            if r[k] < thresh: break
            hits.append((k / RATE, sid, float(r[k])))
            lo, hi = max(0, k - len(tpl)), min(len(r), k + len(tpl))
            r[lo:hi] = 0
            i += 1
            if i > 50: break
    hits.sort()
    return hits


def main():
    recs = [a for a in sys.argv[1:] if a.endswith('.wav')]
    if not recs:
        print(__doc__); sys.exit(1)
    R = resources(APP)
    sounds = {i: decode(v)[1].astype(np.float32) for (t, i), v in R.items() if t == 'snd '}
    names = snd_names()
    tls = []
    for p in recs:
        rec = load_wav(p)
        tl = timeline(rec, sounds)
        tls.append(tl)
        print('== %s  (%.1f s, peak %.2f)' % (os.path.basename(p), len(rec) / RATE, np.abs(rec).max() if len(rec) else 0))
        for t, sid, c in tl:
            print('  t=%7.2fs  snd %d %-13s (ncc %.2f)' % (t, sid, names.get(sid, ''), c))
    if len(tls) == 2:
        a = [names.get(s, str(s)) for _, s, _ in tls[0]]
        b = [names.get(s, str(s)) for _, s, _ in tls[1]]
        print('== sequence  original | remake')
        for i in range(max(len(a), len(b))):
            x = a[i] if i < len(a) else ''
            y = b[i] if i < len(b) else ''
            print('  %-16s %s %s' % (x, '  ' if x == y else '<>', y))


if __name__ == '__main__':
    main()
