"""tools/patch_orig_seed.py: the fixed-seed copy of the original."""
import struct

import pytest

from conftest import ROOT, load_tool

pos = load_tool("patch_orig_seed")


def fake_pef():
    data = bytearray(b"\0" * (pos.SITE + 64))
    data[pos.SITE:pos.SITE + len(pos.EXPECT)] = pos.EXPECT
    return bytes(data)


def words(b, at, n):
    return list(struct.unpack(">%dI" % n, b[at:at + 4 * n]))


def test_patch_writes_lis_ori_nop_and_keeps_the_store():
    out = pos.patch_bytes(fake_pef(), 0x2AA0D649)
    assert words(out, pos.SITE, 5) == [0x3C602AA0, 0x6063D649, 0x60000000, 0x8082FF50, 0x9064004C]
    assert len(out) == len(fake_pef())


def test_patch_refuses_an_unexpected_binary():
    bad = bytearray(fake_pef())
    bad[pos.SITE] ^= 0xFF
    with pytest.raises(ValueError):
        pos.patch_bytes(bytes(bad), 1)


def test_real_original_has_the_expected_site():
    app = ROOT / "Warlords II" / "Warlords II.app"
    if not app.exists():
        pytest.skip("original app not present")
    data = app.read_bytes()
    assert data[:12] == b"Joy!peffpwpc"
    assert pos.patch_bytes(data, 12345)[pos.SITE:pos.SITE + 4] == bytes.fromhex("3c600000")
