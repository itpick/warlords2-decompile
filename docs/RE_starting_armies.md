# Scenario armies: what the SCN holds and how the original creates starting units

Verified Oct 2026 against an original Erythea turn-1 save, pulled out of the emulator with the
dev loop (`tools/infinitemac/devloop/`). This supersedes §3 "Armies" in
`RE_gamesetup_factions_scn.md`.

## Scenarios contain no army data
`SCN ` 10000 is a fixed 12,001-byte little-endian (DOS-format) stream: faction names, settings,
ruins, items, monster names, then the city block. **Nothing follows the city block**; Erythea's
last city record ends at about 0x29CD and the rest is zero. Every turn-1 unit is generated at
new-game time.

SCN city block: **LE short count at 0x157B**, then 0x41-byte records from **0x157D**
(Erythea = 80, Tutoria = 6). Record fields: +0 X, +2 Y (LE), +4 name[16], +0x14 defense,
+0x15 owner, +0x16..19 unit types, +0x1A..1D build turns, +0x1E..21 strength,
+0x22..25 movement, +0x26..29 cost, +0x2A income. CTY `#000` is record 0 (Kuuria, Skullcrag).

## Original runtime layout (from the save)
- `gs+0x1602` = **city** count (BE), `gs+0x1604` = **city** records, stride 0x42, BE X/Y.
  These are not armies. Cities run to the end of the 0x2FCC game state.
- Units live in a separate table `_DAT_00028854`: 1000 × 0x16 bytes (+0 X, +2 Y, +4 type,
  +5 owner, +8 count). It is cleared to X=Y=−1, owner=0xFF in `FUN_00001ab6`.
- The save file is: 5-byte header (0x00, then uncompressed size as BE long) + one PackBits
  stream holding SCEN(0x54) + gs(0x2FCC) + map(0x8880) + unit table + …
  (`tools/infinitemac/devloop/savedec.py`).

## FUN_00000be0 (CODE_117): per city tile
- Neutral city with `gs+0x11A == 0`: one placeholder unit, type 0x0B, owner 0x0F, count 1.
  Erythea turn 1 has 72 of these, one per neutral city.
- Neutral city with `gs+0x11A > 0`: weight set = `A5+0x15BA2[random(4)]`.
- Owned city (the capitals): weight set index 3 → set 3.
- Units created: 1, or `random(4)` when `gs+0x128` is set. Each one is `FUN_00000db4`'s pick,
  produced via `func_0x00004948`.

`FUN_00000db4(city, set)`: scans slots 3..0 and keeps the strict maximum, so ties go to the later slot:
```
str   = min(slotStr + (gs+0xF0[curPlayer] ? 2 : 0), 9) + (typeFlags[t*6+5]==1 ? 2 : 0)
turns = slotTurns + (set != 6 && str < 3 ? 1 : 0)
score = str*WSTR[set] + WTIME[set]*(10 - min(turns,10)) + slotMove*WMOVE[set]/2
```
Tables, from the decompressed 68k DATA resource (Ghidra address = A5 + offset;
`tools/infinitemac/devloop/a5data.py`):

| addr | role | values (set 0..6) |
|---|---|---|
| 0x15B78 | WMOVE | 0,1,1,1,1,1,10 |
| 0x15B86 | WSTR  | 0,4,10,10,10,10,1 |
| 0x15B94 | WTIME | 0,10,10,5,5,5,10 |
| 0x15BA2 | D4→set | 1,6,2,3 |

Checked against the save's per-city slot values: **8/8 capitals** pick the original's unit.

## FUN_00002118: city production setup at new game
Strips Catapults (type 5) from every city and compacts the list (Mirea `01 04 05 0a` →
`01 04 0a ff`). It then rewrites slot stats per type via `func_0x000049a8` and applies jitter
(10% ±1 strength, 1..9; 20% ±2/±4 movement, min 6; 10% ±25% cost; 10% ±1 turns, min 1).
Open: the per-type base `func_0x000049a8` returns matches neither the SCN nor any DAT table.
Erythea's Giant Bats are (2 turns, 3 str, 8 move, 5 cost), while every army file says
(1, 1, 16, 5).

## Remake status (main.c)
- City block read from 0x157B/0x157D. Previously it read from 0x15BE, which dropped city 0 and
  paired every city with the next one's CTY name.
- Catapults stripped as in FUN_00002118. No per-city stat jitter yet.
- One starting unit per capital, chosen by the set-3 score using the SCN slot stats. That gives
  7/8 on Erythea: Starfire picks Light Cav where the original picks Dwarves, because the
  original's per-city stats come from the unresolved `func_0x000049a8` base.
- Not yet ported: neutral placeholder units (the remake still places 1–3 real garrison units),
  the `gs+0x128` multi-unit option, the +2 strength bonuses.
