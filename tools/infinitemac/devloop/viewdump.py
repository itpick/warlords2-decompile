#!/usr/bin/env python3
"""Dump a MacApp 'View' resource from the original Warlords II app: every subview's
type tag, class, identifier, location (top,left) and size (h x w), plus the numbers
that follow (text style TxSt ids are 1000..1030, STR# lists 1000/3000-ish).
  viewdump.py <View id> [app path]
Record layout (verified on Views 1000/1030/3000): tag(4) len(4) pstr class id(4)
<1 byte> 7f ff ff ff <4 bytes> loc.v(4) loc.h(4) size.v(4) size.h(4) ..."""
import re, struct, sys, os
sys.path.insert(0, os.path.dirname(__file__))
from rsrc import resources

TAGS = [b'wind', b'view', b'stat', b'butn', b'chkb', b'rdio', b'popu', b'clus', b'cntl',
        b'pict', b'scrl', b'sbar', b'ssbr', b'lstg', b'tevw', b'edit', b'icon', b'list', b'radb', b'popp']

def records(v):
    out = []
    for m in re.finditer(b'|'.join(re.escape(t) for t in TAGS), v):
        i = m.start()
        try:
            j = i + 8
            n = v[j]
            if n > 40: continue
            cls = v[j + 1:j + 1 + n]
            if any(c < 32 or c > 126 for c in cls): continue
            j += 1 + n
            ident = v[j:j + 4]; j += 4
            if v[j + 1:j + 5] != b'\x7f\xff\xff\xff': continue
            j += 9
            lv, lh, sv, sh = struct.unpack('>4i', v[j:j + 16])
            if not (0 <= lv < 2000 and 0 <= lh < 2000 and 0 < sv < 2000 and 0 < sh < 2000): continue
            tail = v[j + 16:j + 16 + 40]
            nums = [struct.unpack('>H', tail[k:k + 2])[0] for k in range(0, len(tail) - 1, 2)]
            refs = [x for x in nums if 1000 <= x <= 1040 or 3000 <= x <= 3100 or x in (128, 129, 130)]
            out.append((i, m.group().decode(), cls.decode(), ident.decode('mac_roman'), lv, lh, sv, sh, refs[:6]))
        except (IndexError, struct.error):
            pass
    return out

if __name__ == '__main__':
    vid = int(sys.argv[1])
    app = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(__file__), '../../../Warlords II/Warlords II.app')
    v = resources(app)[('View', vid)]
    for (i, tag, cls, ident, lv, lh, sv, sh, refs) in records(v):
        print(f"{i:5x} {tag} {cls:22s} '{ident}'  at ({lv:3d},{lh:3d})  size {sv:3d}x{sh:3d}  refs {refs}")
