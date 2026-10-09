"""tools/patch_orig_rnglog.py: the original with a Random() log and battle notes."""
import struct

import pytest

from conftest import ROOT, load_tool

prl = load_tool("patch_orig_rnglog")


def words(b, at, n):
    return list(struct.unpack(">%dI" % n, b[at:at + 4 * n]))


def original():
    app = ROOT / "Warlords II" / "Warlords II.app"
    if not app.exists() or app.stat().st_size < 1000000:
        pytest.skip("original app not present")
    return app.read_bytes()


def test_branch_encoding():
    assert prl.bl(0x1005F268, 0x10002970) == 0x4BFA3709      # the original's own call
    assert prl.bl(0x1005F268, 0x101178A0) == 0x480B8639
    assert prl.bl(0x10197998, 0x1002D658, link=False) == 0x4BE95CC0


def test_patched_original_layout():
    data = original()
    out, entries = prl.patch(data, 0x2AA0D649)
    # the seed, as patch_orig_seed.py
    assert words(out, 0x62154, 3) == [0x3C602AA0, 0x6063D649, 0x60000000]
    # section 0 moved to the end, grown by the caves and buffers
    total, unpacked, clen, coff = struct.unpack(">IIII", out[48:64])
    assert total == unpacked == clen and coff >= len(data)
    code = out[coff:coff + clen]
    assert code[:0x2D654] == data[0x2E10:0x2E10 + 0x2D654]
    # Dice calls the cave instead of the Random glue; the cave ends in a
    # branch to the glue and its buffer header follows
    assert words(code, 0x5F268, 1) == [prl.bl(0x1005F268, 0x101178A0)]
    assert words(code, 0x1178A0, 1) == [0x7C0802A6]
    assert code[0x117900:0x117908] == prl.MAGIC
    assert entries == 0x10117910
    # FUN_1002d654 branches to the battle-note cave, which branches back past its mflr
    assert words(code, 0x2D654, 1) == [prl.bl(0x1002D654, 0x10197910, link=False)]
    assert words(code, 0x197998, 1) == [prl.bl(0x10197998, 0x1002D658, link=False)]
    assert code[0x1979B0:0x1979B8] == prl.NOTE_MAGIC


def test_refuses_another_binary():
    data = bytearray(original())
    data[0x2E10 + 0x5F268] ^= 0xFF
    with pytest.raises(ValueError):
        prl.patch(bytes(data), 1)
