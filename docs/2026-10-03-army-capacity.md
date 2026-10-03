# Army capacity: 100 records in gs -> 1000 records out of gs (Oct 3 2026)

## Problem

The original keeps up to **1000 units** (a 1000 x 0x16 unit table, `_DAT_60000000`
in PPC 1.0.7, high-water count at gs+0x182), one record per unit. Its allocator
`FUN_10021434` (PPC_0001.c:17711) scans the 1000 slots for a free one
(owner byte +5 == 0xFF) and returns NULL when all are taken:

- production `FUN_1004a854 -> FUN_1004a5f0` (PPC_0002.c:9845, 10081): no record ->
  nothing is produced; the city's countdown was already run down to 0 and only
  cities that produced are re-armed (`FUN_1004af7c`), so the city stalls;
- hero allies `FUN_10053838`: no record -> that ally is lost.

The remake stored its armies as 100 records of 0x42 bytes at gs+0x1604 (shared by
all sides, ending exactly at the end of the 0x2FCC-byte game state). Since the
one-record-per-unit fix (see memory note unit-records-one-per-unit), a long game
reaches ~99 records by round 24 and then fell back to packing units into the slots
of other records (hidden passengers).

## Design (option a: move the table, keep the 0x42 layout)

Option (b), the original's 0x16 per-unit layout, would touch every system
(movement, combat, AI, stack panel, saves, heroes, items, quests) at once. Option
(a) keeps every record field and every index-based link unchanged:

- `sArmyTab[MAX_ARMIES * 0x42]`, `MAX_ARMIES = 1000` (static, 66,000 bytes), and
  `ARMY_REC(i)` = `sArmyTab + i * 0x42` replaces every `gs + 0x1604 + i * 0x42`.
- The count stays at **gs+0x1602** (saved with the game state as before).
- The old area gs+0x1604..0x2FCB is left unused by the remake (it still receives
  the raw SCN bytes at a new game, which GameInit never reads as armies now).
- Records still compact on removal (RemoveArmy shifts the tail down); the
  original reuses free slots instead, but every remake system relies on
  dense indices 0..count-1, so this stays.
- New units still get one record each (slots 1-3 empty); the 4 slots remain
  for neutral garrisons and the AI's regrouping, as before.

### Per-army side tables

| was | now | notes |
|---|---|---|
| ext+0x56+i (army_state, 7 = defending) | `sArmyState[MAX_ARMIES]` | now shifted with the records on removal (it was not before: a removed record's state stuck to the next index) |
| ext+0x11e+i, ext+0x182+i, ext+0x1e6+i | removed | written only (cleared / reset), never read; with 1000 indices the writes would run into the city records at ext+0x24c |
| ext+0x3500+i*2 (temple bless bits) | unchanged | 1000 x 2 bytes end at ext+0x3CD0 < 0x4000; nothing else lives there (city records end at ext+0x349C) |
| `sArmyVisited[100]`, `sArmySkip[100]` | `[MAX_ARMIES]` | Next Group / Move All flags |
| `AI_MAX_RECS 100` -> `sAIOrd[]` | `MAX_ARMIES` | per-record AI orders |

Index-holding fields elsewhere (hero records gs+0x1422 +4, item carrier +0x18,
quest records, sQAttRec, sHeroTrackRec, battle entries, undo, stack arrays) are
all `short` and already follow removals; nothing stores a record index in a byte.

### Capacity behaviour

- Production at the cap: no unit, the countdown stays 0 (stall), as the original.
  The "merge into a free slot of a record on the spawn tile" fallback is removed.
- Hero allies at the cap: the ally is lost, as `FUN_10053838`. The fallbacks
  (hero's own record slot, another own record on the tile) are removed.
- Other creators (hero offer/hire, AI initial hero, splits, vectored transit,
  neutral production, scenario garrisons) check `< MAX_ARMIES` instead of `< 100`.

## Saves

`SAVE_VERSION` 11: a tagged block `'ARMY'` follows the guardians' `'QGRD'` block:
`short count, short recSize (0x42), count * 0x42 record bytes, count state bytes`.
`sAIOrd` is now 1000 entries; the v7 AI block writes the whole array (the reader
takes `sizeof(sAIOrd)` for v11, 100 entries for v7..v10).

Older saves (v1..v10): the records are read with the game state at gs+0x1604
(100 x 0x42), copied into `sArmyTab`; `sArmyState` is taken from ext+0x56.


## Changed sites

Implemented on main (not committed) from this design. `DEV_SHIP_PROBE` left at 0. `gs+0x182` left at 100 (this doc does not mention it).

- `src/include/warlords2.h`: `MAX_ARMIES` 200 → 1000.
- `src/main.c`: `sArmyTab` / `ARMY_REC` / `sArmyState`; every army pointer that was `+ 0x1604 + i*0x42` (including `AI_REC` and `QuestRecPtr`); `sArmyVisited` and `sArmySkip` sized to 1000; `AI_MAX_RECS` and `sAIOrd` sized to 1000.
- `RemoveArmy` shifts visited, Move All skip, and `sArmyState` with the records. Bless bits stay at `ext+0x3500` and still shift, now up to 1000.
- Dropped the write-only `ext+0x11e` / `ext+0x182` / `ext+0x1e6` army loops. Defend state reads and writes use `sArmyState`.
- Player production and vectored transit allocate a record only when `armyCount < MAX_ARMIES`; otherwise no unit and the countdown stays 0. The player merge-into-a-free-slot fallback is gone. Neutral garrison packing is unchanged. Hero allies (`AddAlliesToStack`) no longer pack into the hero's record or another record; a full table drops that ally.
- `SAVE_VERSION` 11. After `'QGRD'`, `'ARMY'` is `short count`, `short 0x42`, the records, then `count` state bytes. v7–v10 read 100 `AIOrder`s; v11 reads `sizeof(sAIOrd)`. Loads before v11 copy 100 records from `gs+0x1604` and state from `ext+0x56`.
