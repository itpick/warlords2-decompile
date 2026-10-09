"""tools/ai_trace_diff.py: the trace parser and the field-by-field compare."""
import subprocess
import sys

from conftest import FIXTURES, ROOT, load_tool

diff = load_tool("ai_trace_diff")

SYNTH = """\
T2 TURN 3 GOLD 225 INC 34 UPK 9 SEED 1
T2 CITY 0 OWN 2 ROLE 1 CF 0 U 0 P 0 PROD -1 PRG -1 S -1 -1 -1 -1
T2 CITY 1 OWN 3 ROLE 0 CF 0 U 0 P 0 PROD -1 PRG -1 S -1 -1 -1 -1
T2 CITY 2 OWN 2 ROLE 3 CF 0 U 0 P 0 PROD 4 PRG 2 S 4 -1 -1 -1
T2 END
T3 TURN 3 GOLD 123 INC 30 UPK 8 SEED 2
T3 CITY 1 OWN 3 ROLE 1 CF 0 U 0 P 0 PROD -1 PRG -1 S -1 -1 -1 -1
T3 END
"""


def write(tmp_path, name, text):
    p = tmp_path / name
    p.write_text(text)
    return p


def test_parse_trace_reads_header_and_counts_owned_cities(tmp_path):
    snaps = diff.parse_trace(write(tmp_path, "t.txt", SYNTH))
    assert snaps[(3, 2)] == {"gold": 225, "income": 34, "upkeep": 9, "cities": 2}
    assert snaps[(3, 3)] == {"gold": 123, "income": 30, "upkeep": 8, "cities": 1}


def test_parse_trace_needs_no_round_marker_and_ignores_it(tmp_path):
    with_marker = "R3 BEGIN\n" + SYNTH
    a = diff.parse_trace(write(tmp_path, "a.txt", with_marker))
    b = diff.parse_trace(write(tmp_path, "b.txt", SYNTH))
    assert dict(a) == dict(b)


def test_parse_trace_on_a_real_round_file():
    # aitrace3_r3: sides 2..7 complete; side 1's TURN line was lost by the
    # shared-fs publish, so side 1 has no snapshot at all
    snaps = diff.parse_trace(FIXTURES / "aitrace3_r3.txt")
    assert (3, 1) not in snaps
    assert snaps[(3, 2)]["gold"] == 225
    assert snaps[(3, 7)]["upkeep"] == 12
    for side in range(2, 8):
        assert snaps[(3, side)]["cities"] >= 1


def test_parse_reference_formats(tmp_path):
    ref = write(tmp_path, "ref.csv",
                "round,side,field,value\n# comment\n3, 2, Gold, 225\n4,5,income,98\nbad line\n")
    assert diff.parse_reference(str(ref)) == [(3, 2, "gold", 225), (4, 5, "income", 98)]


def run_cli(trace, ref):
    return subprocess.run([sys.executable, str(ROOT / "tools" / "ai_trace_diff.py"),
                           str(trace), str(ref)], capture_output=True, text=True)


def test_cli_match_and_first_divergence(tmp_path):
    trace = write(tmp_path, "t.txt", SYNTH)
    ok = run_cli(trace, write(tmp_path, "ok.csv", "3,2,gold,225\n3,2,cities,2\n3,3,upkeep,8\n"))
    assert ok.returncode == 0, ok.stdout
    assert "all 3 checks matched" in ok.stdout
    bad = run_cli(trace, write(tmp_path, "bad.csv", "3,2,gold,225\n3,3,income,31\n3,2,cities,5\n"))
    assert bad.returncode == 1
    assert "first divergence, round 3: side 3 income (original 31, remake 30)" in bad.stdout
    assert "2 of 3 checks mismatched" in bad.stdout


def test_cli_reports_missing_side_as_mismatch(tmp_path):
    out = run_cli(FIXTURES / "aitrace3_r3.txt", write(tmp_path, "r.csv", "3,1,gold,170\n"))
    assert out.returncode == 1
    assert "remake ?" in out.stdout
