"""Source-level invariants of src/main.c that keep it tied to the original."""
import re

from conftest import ROOT

MAIN = (ROOT / "src" / "main.c").read_text(errors="replace")


def strip_comments(src):
    src = re.sub(r"/\*.*?\*/", lambda m: "\n" * m.group(0).count("\n"), src, flags=re.S)
    return re.sub(r"//[^\n]*", "", src)


CODE = strip_comments(MAIN)


def function_containing(code, pos):
    """name of the top-level function whose body holds `pos`"""
    best = None
    for m in re.finditer(r"^(?:static\s+)?[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{", code, re.M):
        if m.start() < pos:
            best = m.group(1)
        else:
            break
    return best


def test_dice_is_the_only_random_caller():
    """FUN_1005f230 (Dice) is the original's only caller of Toolbox Random();
    any other call desyncs every later roll (docs/2026-10-03-dice-sites.md)."""
    calls = [m.start() for m in re.finditer(r"\bRandom\s*\(\s*\)", CODE)]
    owners = {function_containing(CODE, p) for p in calls}
    # DiceImpl is Dice's body in the FIXED_SEED build, which logs each call
    # for same-seed runs (tools/rng_log.py); Dice is then its noinline shim.
    assert owners and owners <= {"Dice", "DiceImpl"}, f"Random() called outside Dice: {owners - {'Dice', 'DiceImpl'}}"
    if "DiceImpl" in owners:
        start = CODE.index("static short DiceImpl(short n, short sides, short add, long ra)\n{")
        assert CODE.rfind("#ifdef WL2_FIXED_SEED", 0, start) > CODE.rfind("#endif", 0, start)


def test_randseed_written_only_at_launch():
    """the launch seed (FUN_1005f32c) is the only write of qd.randSeed: the
    GetDateTime branch and the WL2_FIXED_SEED branch of one #ifdef"""
    writes = [m.start() for m in re.finditer(r"qd\.randSeed\s*=[^=]", CODE)]
    assert 1 <= len(writes) <= 2, writes
    assert writes[-1] - writes[0] < 600
    block = CODE[writes[0] - 200:writes[-1]]
    assert len(writes) == 1 or "WL2_FIXED_SEED" in block


def test_cited_ppc_functions_exist_in_the_decompile():
    """every PPC FUN_1xxxxxxx named in main.c is a function in
    tools/ppc_decompiled (catches typos in the citations)"""
    defined = set()
    for f in (ROOT / "tools" / "ppc_decompiled").glob("PPC_*.c"):
        defined |= set(re.findall(r"^// Function: (FUN_[0-9a-f]{8})", f.read_text(errors="replace"), re.M))
    cited = {"FUN_" + c for c in re.findall(r"\bFUN_(1[0-9a-f]{7})\b", MAIN)}
    # Ghidra left 0x100357ec undecompiled (the quest-allies type, read from
    # the disassembly - docs/2026-10-03-dice-sites.md)
    known_undecompiled = {"FUN_100357ec"}
    assert sorted(cited - defined - known_undecompiled) == []


def test_no_unresolved_help_or_zoom_todo():
    """tasklist B9/B10 left no stubbed help button or zoom box behind"""
    assert "TODO: help" not in MAIN
    assert "TTripleSizeFloatWindow cycles three\n" not in MAIN
