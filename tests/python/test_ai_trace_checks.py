"""tools/ai_trace_checks.py: the seed-independent structural checks."""
from conftest import FIXTURES, load_tool

checks = load_tool("ai_trace_checks")

GOOD = """\
T2 TURN {r} GOLD {g} INC 34 UPK 9 SEED 1
T2 CITY 0 OWN 2 ROLE 1 CF 0 U 0 P 0 PROD 3 PRG 2 S 3 -1 -1 -1
T2 ARMY 0 XY 10 20 OWN 2 T 3 255 255 255 MP 12 ORD 0 0 0 0 0 0 0
T2 END
"""


def rounds(tmp_path, *pairs):
    paths = []
    for r, g, extra in pairs:
        p = tmp_path / f"aitrace_r{r}.txt"
        p.write_text(GOOD.format(r=r, g=g) + extra)
        paths.append(str(p))
    return paths


def test_real_rounds_pass():
    assert checks.main([str(FIXTURES / "aitrace3_r2.txt"), str(FIXTURES / "aitrace3_r3.txt")]) == 0


def test_synthetic_rounds_pass(tmp_path):
    assert checks.main(rounds(tmp_path, (2, 200, ""), (3, 225, ""))) == 0


def test_bad_production_and_role_fail(tmp_path, capsys):
    extra = "T2 CITY 5 OWN 2 ROLE 40 CF 0 U 0 P 0 PROD 31 PRG 2 S -1 -1 -1 -1\n"
    assert checks.main(rounds(tmp_path, (2, 200, extra))) == 1
    out = capsys.readouterr().out
    assert "production 31 invalid" in out
    assert "role 40 invalid" in out


def test_income_out_of_range_fails(tmp_path, capsys):
    p = tmp_path / "aitrace_r2.txt"
    p.write_text("T4 TURN 2 GOLD 10 INC 0 UPK 0 SEED 1\nT4 END\n")
    assert checks.main([str(p)]) == 1
    assert "income 0 out of range" in capsys.readouterr().out


def test_army_off_map_fails_but_transit_is_allowed(tmp_path, capsys):
    transit = "T2 ARMY 1 XY -1 -1 OWN 2 T 3 255 255 255 MP 0 ORD 0 0 0 0 0 0 0\n"
    assert checks.main(rounds(tmp_path, (2, 200, transit))) == 0
    off = "T2 ARMY 1 XY 140 20 OWN 2 T 3 255 255 255 MP 0 ORD 0 0 0 0 0 0 0\n"
    assert checks.main(rounds(tmp_path, (3, 200, off))) == 1
    assert "off-map at 140,20" in capsys.readouterr().out


def test_ledger_flags_a_collapse(tmp_path, capsys):
    assert checks.main(rounds(tmp_path, (2, 5000, ""), (3, 100, ""))) == 1
    assert "FAIL ledger r2->r3 side 2" in capsys.readouterr().out
