# RAM Dumps & Binary Analysis Reference

Reference for the QEMU RAM dumps and PPC binary analysis files used in reverse engineering.

---

## RAM Dumps

**Location:** `tools/dumps/`
**Captured:** 2026-02-19 from QEMU running original Warlords II on Mac OS 9.2

| File | Size | Description |
|------|------|-------------|
| `ram.bin` | 512 MB | Full guest RAM dump before entering gameplay |
| `ram_ingame.bin` | 512 MB | Full guest RAM dump during active gameplay |

**Note:** These are gitignored due to size (1 GB total). Keep local only.

### Game State Location in RAM Dumps

| Field | Value |
|-------|-------|
| Game state base address | `0x12A22E80` |
| Game state total size | `0x13180` (78,208 bytes) |
| Game state end address | `0x12A36000` |
| Scenario | 8-player map, Turn 1, Player 0 (Argentia) human |
| Difficulty | Warlord (15) |

Full analysis in `RE_ram_dump_analysis.md`.

### Key Data Found

| Offset | Address | What |
|--------|---------|------|
| +0x000 | 0x12A22E80 | Faction names start |
| +0x0D0 | 0x12A22F50 | Player types (human/AI) |
| +0x110 | 0x12A22F90 | Current player index |
| +0x186 | 0x12A23006 | Per-player stats (gold, capital coords) |
| +0x224 | 0x12A230A4 | Hero name pool (40 slots x 20 chars) |
| +0x60C | 0x12A2348C | Terrain movement cost table |
| +0x810 | 0x12A23690 | Site/ruin records (40 sites) |
| +0xD26 | 0x12A23BA6 | Artifact/item records (22 items) |
| +0xFB6 | 0x12A23E36 | Unit type names (9 types) |
| +0x1122 | 0x12A23FA2 | Player victory points |
| +0x1422 | 0x12A242A2 | Hero instance records (8 x 0x2C bytes) |
| +0x1582 | 0x12A24402 | Diplomacy table (8x8 matrix) |
| +0x1602 | 0x12A24482 | Army count + records (80 x 0x42 bytes) |
| +0x3704 | 0x12A26584 | Tile map data (159 rows x 0xE0 stride) |

### What Was NOT Found in Main Game State

These are stored in separate heap allocations, requiring pointer dereference:

| Structure | Global Pointer | Notes |
|-----------|---------------|-------|
| City records | `piRam10117468` (ext state) | ext+0x24C, 0x5C bytes/city |
| Extended army state | `piRam10117468` | Per-army arrays (state, flags, move count) |
| Unit type defs | `piRam10117360` | Separate allocation |
| Unit class defs | `piRam10117364` | Separate allocation |
| Unit instance templates | `piRam101175d0` | Separate allocation |

---

## PPC Binary Files

**Location:** `tools/ppc_verification/`

| File | Size | Description |
|------|------|-------------|
| `wl2_code.bin` | 1.1 MB | PPC code section extracted from RAM dump |
| `wl2_rsrc.bin` | 3.4 MB | Resource fork of original binary |
| `wl2app.bin` | 1.2 MB | Original PEF binary data fork |
| `wl2app.rsrc` | 3.4 MB | Copy of resource fork |
| `warlords2_ppc.pef` | 1.2 MB | Original PEF executable |

### Address Mapping

```
Ghidra address 0x10000000 = file offset 0x00000000 in wl2_code.bin
file_offset = ghidra_address - 0x10000000
```

Example: Function at Ghidra `0x1005f230` (RandomRange) = file offset `0x5F230`.

---

## Analysis Scripts

**Location:** `tools/ppc_verification/`

| Script | Description |
|--------|-------------|
| `ppc_compare.py` | Detailed PPC instruction comparison between original and rebuilt |
| `ppc_deep.py` | Deep pattern verification - checks specific function implementations |
| `ppc_disasm.py` | Disassembles address ranges from wl2_code.bin using Capstone |
| `ppc_final.py` | Final verification pass for critical functions |

**Location:** `tools/`

| Script | Description |
|--------|-------------|
| `analyze_pict_30021.py` | Analyzes road sprite sheet (PICT 30021) tile grid |
| `check_other_bg.py` | Checks background colors in PICT resources |
| `verify_clut_30021.py` | Verifies CLUT (color lookup table) for road sprites |
| `road_tile_grid.py` | Identifies which road tile cells contain content vs background |
| `qemu_cmd.py` | QEMU control/automation helper |

---

## Reference Screenshots

**Location:** `tools/qemu/reference/`

| File | Description |
|------|-------------|
| `original_build_selection.png` | Original production/build selection dialog |
| `original_city_info.png` | Original city information dialog |
| `original_city_question.png` | Original city click question dialog |
| `original_hero_hire.png` | Original hero hire dialog |
| `original_ingame_with_shields.png` | Original in-game with shield bar |
| `original_shield_bar.png` | Original shield bar close-up |
| `original_shield_bar_zoomed.png` | Original shield bar zoomed |
| `original_turn_announcement.png` | Original turn announcement screen |
| `remake_ingame_with_shields.png` | Our remake in-game comparison |
| `remake_shield_bar_before.png` | Our shield bar before color fix |

**Location:** `tools/qemu/screenshots/`

20 development screenshots showing various stages of the remake running in QEMU/SheepShaver.

---

## How to Use the Dumps

### Finding a Value in the Game State
```python
import struct

with open("tools/dumps/ram_ingame.bin", "rb") as f:
    data = f.read()

GS_BASE = 0x12A22E80
# Read gold for player 0:
offset = GS_BASE + 0x186  # per-player stats
gold = struct.unpack(">h", data[offset:offset+2])[0]  # big-endian short
print(f"Player 0 gold: {gold}")
```

### Disassembling Original Code
```python
from capstone import *
with open("tools/ppc_verification/wl2_code.bin", "rb") as f:
    code = f.read()

md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN | CS_MODE_32)
BASE = 0x10000000
func_addr = 0x1005f230  # RandomRange
offset = func_addr - BASE
for insn in md.disasm(code[offset:offset+64], func_addr):
    print(f"0x{insn.address:08x}: {insn.mnemonic} {insn.op_str}")
```

---

## RAM Dump Comparison Approach

To find new data structures:

1. Start a game in QEMU with known values (specific player names, gold amounts)
2. Dump RAM: `savevm dump` in QEMU monitor
3. Search dump for known byte patterns (big-endian shorts/ints)
4. Cross-reference with Ghidra global pointer addresses
5. Verify by checking surrounding data matches expected structure

The two existing dumps capture pre-game and in-game states. A third dump after several turns would help verify dynamic fields like gold changes, army movements, and diplomacy shifts.
