# Warlords II -- Save/Load System and Game Serialization Format

## Reverse Engineering Analysis

This document covers the complete save/load system, scenario file parsing, and
game state serialization for Warlords II (1993 Mac OS, PowerPC binary).

---

## 1. Architecture Overview

Warlords II uses the **MacApp framework** for its document/file architecture. The
game is structured as a `TFileBasedDocument` (class `TDocumentWarlords`), which
provides the standard MacApp Save/Open/Close lifecycle.

### File Types

The game uses **Mac resource forks** for all persistent storage:

| File Type        | Description                                | Data Fork | Resource Fork |
|------------------|--------------------------------------------|-----------|---------------|
| Scenario (.set)  | Scenario definition files                  | No        | Yes           |
| Save Game        | In-progress game state                     | No        | Yes           |
| Random Scenario  | Saved random map as scenario               | No        | Yes           |

### Resource Fork Format

All data is stored as **individual resources** within the resource fork. The
game never uses raw data fork I/O (FSRead/FSWrite) -- instead it uses the
MacApp stream-based resource APIs.

### Endianness

The original Warlords II was 68K Mac, and the PowerPC port byte-swaps all
multi-byte fields on read/write. All resource data is stored in **big-endian**
format (68K native order). The PowerPC code explicitly calls:

- `FUN_100525a0` (ByteSwap16): Swaps bytes of a 16-bit value for each `short`
  field read/written
- `FUN_100525cc` (ByteSwap32): Swaps bytes of a 32-bit value for `long` fields

### Stream API Wrappers

The MacApp TStream class is used for all I/O. Key virtual method dispatchers:

| Function       | Address    | Size | VTable Offset | Role               |
|----------------|------------|------|---------------|--------------------|
| StreamRead     | 10052490   | 68B  | +0xE0         | Read bytes from stream |
| StreamWrite    | 100524d4   | 68B  | +0x170        | Write bytes to stream  |
| StreamSetPos   | 10052518   | 96B  | +0xB0         | Set stream position    |
| StreamGetPos   | (inline)   | --   | +0xB8         | Get stream position    |
| StreamOpen     | 100522dc   | 204B | +0x118        | Open resource stream   |
| StreamClose    | 100523a8   | 232B | +0x90         | Close/release stream   |
| ByteSwap16     | 100525a0   | 44B  | --            | Big-endian <-> LE 16   |
| ByteSwap32     | 100525cc   | 60B  | --            | Big-endian <-> LE 32   |

`FUN_100522dc(resourceRef, openMode, isWritable)`:
- `openMode=1`: Open for reading
- `openMode=6`: Open for writing (create/replace)
- `isWritable`: 0=read-only stream, 1=writable stream

`FUN_100523a8(stream, release)`:
- `release=1`: Close and release the resource
- `release=0`: Close without releasing

---

## 2. Resource Types Used

### Scenario Resources (read from scenario files)

| ResType | ID    | Description                        | Size        |
|---------|-------|------------------------------------|-------------|
| `MAP `  | 10000 | Map tile data                      | 0x8880 (34944 bytes) |
| `RD  `  | 10000 | Road/path overlay data             | 0x4440 (17472 bytes) |
| `SCN `  | 10000 | Main scenario config (game state)  | 0x2FCC (12236 bytes) |
| `SCEN`  | 10000 | Scenario info header               | 0x54 (84 bytes)      |
| `CTY `  | 10000 | City terrain/ownership data        | Variable             |
| `ITM `  | 10000 | Item/artifact definitions           | Variable             |
| `SPC `  | 10000 | Special location data              | Variable             |
| `DAT `  | varies| Supplemental data                  | Variable             |
| `PICT`  | 1003  | Scenario preview picture           | Variable             |
| `NAME`  | 10000 | Scenario name                      | Variable (Pascal str)|

### Save Game Resources (written to save files)

All scenario resources above, plus:

| ResType | ID    | Description                        | Size        |
|---------|-------|------------------------------------|-------------|
| `Type`  | 1000  | File type marker (save vs scenario)| 2 bytes     |
| `Turn`  | 1000  | Current turn state flag            | 1-2 bytes   |
| `Mail`  | 1000-1007 | Per-player email/message data  | Variable    |
| `MKik`  | 1000  | Mail kick flag                     | 0 bytes (presence flag) |
| `Optn`  | 1000  | Game options/settings              | 4 bytes     |
| `List`  | 1000  | Options list                       | Variable    |
| `Temp`  | 1000  | Template/temporary options         | Variable    |
| `NAME`  | 10000,15000,20000,25000,30000 | Player names | Variable |
| `alis`  | 1000-1004 | Alias records for player files  | Variable (Mac alias) |

---

## 3. Game State Memory Layout

The main game state is at `piRam1011735c` (pointer to allocated block). Key
offsets within the game state block:

### Core State (`*piRam1011735c`, total ~0x2FCC bytes)

| Offset  | Size   | Type        | Description                          |
|---------|--------|-------------|--------------------------------------|
| +0x0000 | 0xA0   | bytes       | Raw header block (copied bulk)       |
| +0x00A0 | 0x10   | short[8]    | Player alliance/race assignments     |
| +0x00B0 | 0x10   | short[8]    | Player alliance/race (secondary)     |
| +0x00C0 | 0x10   | short[8]    | Player status flags                  |
| +0x00D0 | 0x10   | short[8]    | Player gold/income values            |
| +0x00E0 | 0x10   | short[8]    | Player army strength values          |
| +0x00F0 | 0x10   | short[8]    | Player city count values             |
| +0x0100 | 0x10   | bytes       | Raw block                            |
| +0x0110 | 0x24   | short[18]   | Per-field short values               |
| +0x0134 | 0x01   | byte        | Single byte flag                     |
| +0x0136 | 0x4E   | short[39]   | Turn number, misc shorts             |
| +0x0136 | 0x02   | short       | **Current turn number**              |
| +0x0138 | 0x10   | short[8]    | Player active flags                  |
| +0x0162 | 0x02   | short       | Map descriptor / name index          |
| +0x0164 | 0x10   | short[8]    | Player turn order                    |
| +0x0174 | 0x02   | short       | Current player turn index            |
| +0x017E | 0x02   | short       | Map width                            |
| +0x0180 | 0x02   | short       | Map height                           |
| +0x0184 | 0xA0   | 8x0x14      | **Player records** (8 players)       |

#### Player Record (0x14 = 20 bytes each, at +0x184)

| Offset in record | Size | Description                     |
|-------------------|------|---------------------------------|
| +0x00             | 2    | Gold                            |
| +0x02             | 2    | Income                          |
| +0x04             | 2    | Cities owned                    |
| +0x06             | 2    | Armies count                    |
| +0x08             | 2    | Production points               |
| +0x0A             | 2    | Strength rating                 |
| +0x0C             | 2    | Control type (human/AI)         |
| +0x0E             | 1    | Player type byte 1              |
| +0x0F             | 1    | Player type byte 2              |
| +0x10             | 2    | AI strategy                     |
| +0x12             | 2    | Diplomacy state                 |

| Offset  | Size   | Type        | Description                          |
|---------|--------|-------------|--------------------------------------|
| +0x0224 | 0x320  | bytes       | Army name data (800 bytes)           |
| +0x0544 | 0xA0   | short[80]   | Production queue shorts              |
| +0x05E4 | 0x22C  | bytes       | Raw block (556 bytes)                |
| +0x0810 | 0x02   | short       | **City count**                       |

#### City Records (at +0x812, 0x20 = 32 bytes each, up to 40 cities)

| Offset in record | Size | Description                     |
|-------------------|------|---------------------------------|
| +0x00             | 2    | City X coordinate               |
| +0x02             | 2    | City Y coordinate               |
| +0x04             | 0x17 | City name (23 bytes, Pascal str)|
| +0x1C             | 2    | Owner / control flags           |
| +0x1E             | 2    | Defense rating                  |

#### Hero Name Records (at +0xD12, 0x1E = 30 bytes each, up to 22)

| Offset in record | Size | Description                     |
|-------------------|------|---------------------------------|
| +0x00             | 0x17 | Hero name (23 bytes)            |
| +0x18             | 2    | Hero type                       |
| +0x1A             | 2    | Hero level                      |
| +0x1C             | 2    | Hero status                     |

| Offset  | Size   | Type        | Description                          |
|---------|--------|-------------|--------------------------------------|
| +0x0FA6 | 0xA0   | bytes       | Raw block (160 bytes)                |
| +0x1046 | 0x14   | short[10]   | Ruin/temple status                   |
| +0x105A | 0xC8   | short[100]  | Extended map feature data            |
| +0x1122 | 0x10   | short[8]    | Per-player victory points            |
| +0x1132 | 0x10   | short[8]    | Per-player misc values               |

#### Combat Modifier Records (at +0x1142, 0x0C = 12 bytes each, 8 entries)

| Offset in record | Size | Description                     |
|-------------------|------|---------------------------------|
| +0x00             | 2    | Terrain bonus                   |
| +0x02             | 2    | Defense bonus                   |
| +0x04             | 2    | Attack bonus                    |
| +0x06             | 2    | Movement cost                   |
| +0x08             | 2    | Special modifier                |
| +0x0A             | 2    | Reserved                        |

#### Production Slot Records (at +0x11A2, nested 8x8x5 array of shorts)

3D array: `[8 players][8 production slots][5 fields]` = 640 bytes

| Offset  | Size   | Type        | Description                          |
|---------|--------|-------------|--------------------------------------|
| +0x1422 | 0x160  | 8x0x2C     | **AI command records** (8 entries)   |

#### AI Command Record (0x2C = 44 bytes each)

| Offset in record | Size | Description                     |
|-------------------|------|---------------------------------|
| +0x00             | 3    | Command type flags              |
| +0x04             | 2    | Target X                        |
| +0x06             | 2    | Target Y                        |
| +0x08             | 2    | Priority                        |
| +0x0A             | 2    | Flags                           |
| +0x0C             | 0x20 | Command data (32 bytes)         |

| Offset  | Size   | Type        | Description                          |
|---------|--------|-------------|--------------------------------------|
| +0x1582 | 0x40   | bytes       | Fog of war / visibility data (64B)   |
| +0x1602 | 0x02   | short       | **Army count**                       |

#### Army Records (at +0x1604, 0x42 = 66 bytes each, up to 100)

| Offset in record | Size | Description                     |
|-------------------|------|---------------------------------|
| +0x00             | 2    | Army X coordinate               |
| +0x02             | 2    | Army Y coordinate               |
| +0x04             | 0x26 | Army data block (38 bytes raw)  |
| +0x2A             | 2    | Movement points remaining       |
| +0x2C             | 5    | Army flags / stats              |
| +0x32             | 2    | Strength                        |
| +0x34             | 2    | Hit points                      |
| +0x36             | 2    | Army type                       |
| +0x38             | 2    | Owner (bits 24-31, 16-23)       |
| +0x3A             | 2    | Status                          |
| +0x3C             | 2    | Experience                      |
| +0x3E             | 2    | Group ID                        |
| +0x40             | 2    | Special flags                   |

---

## 4. Map Data Layout

### MAP Resource (`*piRam10117358`, 0x8880 = 34944 bytes)

The map is 112 tiles wide x 156 tiles tall (0x70 x 0x9C), with each tile
stored as a 16-bit value. Access formula: `tile = map[y * 0xE0 + x * 2]`

Note: The stride is 0xE0 (224 bytes = 112 * 2), meaning:
- Map width: 112 tiles (0x70)
- Map height: 156 tiles (0x9C)
- Total: 112 * 156 * 2 = 34,944 bytes = 0x8880

### RD Resource (`*piRam10117354`, 0x4440 = 17472 bytes)

Road/path overlay data. Same dimensions but uses 1 byte per tile:
- 112 * 156 = 17,472 bytes = 0x4440

### Tile Format (16-bit)

```
Bits 31-24: Terrain type byte (high byte of 32-bit read)
Bits 23-16: Feature flags
Bits 15-8:  Variant / sprite index
Bits 7-0:   Ownership / fog of war
```

The high byte (terrain type) indexes into a terrain table at
`gameState + 0x711` for visibility checks.

---

## 5. Save Game File Format

### Overview: Save File = Resource Fork with Multiple Resource Types

The save file is a standard Mac resource fork file containing the following
resources:

### 5.1 Full Save (FUN_1007e894 -- SaveDocument, 1000 bytes)

Called via MacApp's `TFileHandler::SaveInPlace` or `SaveViaTemp` mechanism.

The save dispatches to one of two paths based on a flag at `param_1 + 0x16C`:

- **New game / scenario save** -> `FUN_10029e84` (WriteGameState)
- **Resumed game save** -> `FUN_1002a864` (WriteGameStateCrossFormat)

#### Path A: FUN_10029e84 -- WriteGameState (2160 bytes)

This writes the full game state to the document's resource fork:

**Resource 1: Main game data stream (type=6, writable)**

| Order | Data                          | Size         | Notes                    |
|-------|-------------------------------|--------------|--------------------------|
| 1     | SCEN info header              | 0x54 (84B)   | From global iRam10117604 |
| 2     | Game state block              | 0x2FCC       | Main game state          |
| 3     | Map tile data                 | 0x8880       | MAP resource             |
| 4     | Hero/special location data    | 22000 (0x55F0)| Hero/item placement     |
| 5     | Road overlay data             | 0x4440       | RD resource              |
| 6     | City detailed data            | 0x4440       | City ownership map       |
| 7     | Embedded resource 1 (size+data) | 4 + variable | From sub-document 0x15C |
| 8     | Embedded resource 2 (size+data) | 4 + variable | From sub-document 0x160 |
| 9     | City records (8 cities x 0x42C) | 8 x 0x42C  | Via FUN_1001e330         |
| 10    | Extra city data block          | 0x4B0        | City production data     |

Then the function writes player name aliases:

**Resource 2-N: Player names and aliases**

For each of up to 5 players, it:
1. Gets the player name (resource `NAME` IDs: 10000, 30000, 20000, 25000, 15000)
2. Creates an alias record (resource `alis` IDs: 1000, 1001, 1002, 1003, 1004)

**Additional save resources:**

| Resource  | ID   | Description                                  |
|-----------|------|----------------------------------------------|
| `Type`    | 1000 | File type = 1 (indicates "save game")        |
| `Turn`    | 1000 | Current turn state (hot-seat turn tracking)  |
| `Mail`    | 1000-1007 | Per-player mail/message handles         |
| `MKik`    | 1000 | Mail kick flag (presence = kicked)           |

#### Path B: FUN_1002a864 -- WriteGameStateCrossFormat (2508 bytes)

This is the cross-platform / version-2 format that byte-swaps every field
individually. It writes the same logical data but processes each field:

**Initial data (written to stream directly):**

| Order | Data                          | Size         | Notes                    |
|-------|-------------------------------|--------------|--------------------------|
| 1     | SCEN info header              | 0x3A (58B)   | First part raw           |
| 2     | Swapped field                 | 2            | Byte at offset 0x3A, swapped |
| 3     | SCEN info continued           | 0x10 (16B)   | Bytes 0x3C-0x4B          |
| 4     | 4x swapped shorts             | 4x2=8        | Fields at offsets 0x4C-0x52 |
| 5     | Game state (via FUN_10058c64) | ~0x2FCC      | Byte-swapped SCN data    |
| 6     | Map data (write raw)          | 0x8880       | MAP data                 |

**Per-hero-location record (1000 records, 0x16 = 22 bytes each):**

Each record is byte-swapped field by field:

| Field | Size | Description              | Byte-swap? |
|-------|------|--------------------------|------------|
| +0x00 | 2    | X position               | Yes (16-bit) |
| +0x02 | 2    | Y position               | Yes (16-bit) |
| +0x04 | 8    | Data block               | No (raw bytes) |
| +0x0C | 2    | Type/flags (packed)      | Yes + bit repack |
| +0x0E | 2    | Packed extra fields      | Yes + bit repack |
| +0x10 | 2    | Movement data            | No (raw 2 bytes) |
| +0x12 | 2    | Status                   | Yes (16-bit) |
| +0x14 | 2    | Experience               | Yes (16-bit) |

**Packed field format at +0x0C:**

The value at offset 0x0C is unpacked from bits:
```
bits 12-15 (4 bits) -> bottom nibble
bits  9-11 (3 bits) -> bits 4-6
bits  7-8  (2 bits) -> bits 7-8
bits  0-6  (7 bits) -> bits 9-15
```

**Road/city data:**
| Order | Data                          | Size         |
|-------|-------------------------------|--------------|
| next  | Road overlay                  | 0x4440       |
| next  | City ownership map            | 0x4440       |

**Embedded resources (size-prefixed):**
| Order | Data                          | Notes                    |
|-------|-------------------------------|--------------------------|
| next  | 4-byte size + resource data   | Sub-document 0x15C       |
| next  | 4-byte size + resource data   | Sub-document 0x160       |

**Turn replay data (up to 201 turns):**

For each past turn (turn 1 through current turn - 1):

| Field | Description                            |
|-------|----------------------------------------|
| 1     | Turn header (short, swapped)           |
| 2     | 24 x short values (per-turn stats)     |
| 3     | Army visibility data (army_count bytes)|
| 4     | Move count (short, swapped)            |
| 5     | Per-move: 2 bytes + 2 shorts + 16 bytes of data |

**City records (8 cities, extensive per-city data):**

Each city is written with extensive byte-swapping:

| Field              | Size  | Count | Notes                |
|--------------------|-------|-------|----------------------|
| Short fields       | 2     | 0x2B (43) | Byte-swapped     |
| Name/description   | 500   | 1     | Raw bytes            |
| Extra short        | 2     | 1     | Byte-swapped         |
| Production shorts  | 2     | 0xB8 (184) | Byte-swapped    |
| Extended data      | 2     | 0x38 (56) | Byte-swapped     |

**Final city data block:**
| Data                | Size  | Notes                           |
|---------------------|-------|---------------------------------|
| Combined city block | 0x4B0 | Raw bytes                       |

---

## 6. Save Turn State (FUN_10038890, 976 bytes)

Called at: `FUN_1003d4dc` (end-of-turn processing), after advancing the turn
counter and running AI.

### Purpose

Saves a snapshot of the current turn's state into the per-turn replay stream
within the game's document resource. This enables the "Turn Report" display
showing what happened each turn.

### Data Written

The function writes to resource type 2 (the turn history stream):

| Order | Data                     | Size      | Description                     |
|-------|--------------------------|-----------|---------------------------------|
| 1     | Record size              | 2         | Total size of this turn record  |
| 2     | Gold per player          | 0x10 (16B)| 8 x short at gameState+0x186    |
| 3     | Score snapshot           | 0x10 (16B)| From FUN_10050bb0               |
| 4     | AI state                 | 0x10 (16B)| From global state               |
| 5     | Army visibility          | N bytes   | Per-army, 0xFF if not visible   |
| 6     | Move data size           | 2         | From FUN_1003865c               |
| 7     | Move data                | variable  | Serialized AI/player commands   |
| 8     | Checksum/position        | 4         | Stream position written back    |

### Army Visibility Logic

For each army (up to `gameState+0x1602` armies):
- Look up the army's map tile at `(army_x, army_y)`
- Extract the terrain type from high byte of tile value
- Check terrain table at `gameState + 0x711`
- If terrain is "hidden" (value ~= 10), store 0xFF
- Otherwise store the army's byte at offset +0x15 (owner/visibility)

### Odd Army Count Padding

If the army count is odd, an extra padding byte is added to maintain 16-bit
alignment.

### Move Data (FUN_1003865c, 516 bytes)

Serializes AI command records from `gameState + 0x1422`. Each command record
is 0x2C (44) bytes, and up to 8 players x 2 commands each = 16 max entries.

Output format per move: 0x16 (22) bytes:
| Offset | Size | Description              |
|--------|------|--------------------------|
| +0x00  | 1    | Player index             |
| +0x01  | 1    | Command sub-type         |
| +0x02  | 2    | Target/priority          |
| +0x04  | 2    | Destination              |
| +0x06  | 16   | Command data             |

After writing, `FUN_10038860` clears all command records.

---

## 7. Scenario Loading Pipeline

### 7.1 Entry Point: FUN_10057448 (LoadScenario, 936 bytes)

Called from `FUN_100577f0` (random map setup) and the scenario selection dialog.

#### Steps:

1. **Progress dialog setup**: Creates progress bar (0-100%)
2. **Load SCEN info**: Opens `SCEN` resource ID 10000
   - Reads 0x54 bytes of scenario header into global `iRam10117604`
3. **Load SCN data**: Opens `SCN ` resource ID 10000
   - Allocates 0x2FCC bytes for game state if not already allocated
   - Calls `FUN_1005668c` (ReadSCNResource) to parse into game state
4. **Set up map descriptor**: Configures player name from resource
5. **Initialize city names**: Loads city name data
6. **Load MAP/RD**: Calls `FUN_10057334` (LoadMapResources)
7. **Initialize special locations**: Calls `FUN_1001d15c`
8. **Post-load**: Calls `FUN_1002869c` (PostLoadInitialization)
9. **Set player defaults**: For each of 8 players, checks if active

### 7.2 FUN_10057334 -- LoadMapResources (276 bytes)

```
1. Get resource 'MAP ' #10000
2. Allocate 0x8880 bytes if map buffer is null
3. Read 0x8880 bytes into map buffer (*piRam10117358)
4. Release resource
5. Get resource 'RD  ' #10000
6. Allocate 0x4440 bytes if road buffer is null
7. Read 0x4440 bytes into road buffer (*piRam10117354)
8. Release resource
```

### 7.3 FUN_1005668c -- ReadSCNResource (3240 bytes)

This is the main game state deserializer. Reads from the `SCN ` resource
stream into the game state buffer. All 16-bit fields are byte-swapped.

**Read sequence (into `param_2` = game state pointer):**

| Step | Offset      | Size      | Method     | Description                |
|------|-------------|-----------|------------|----------------------------|
| 1    | +0x0000     | 0xA0      | Raw read   | Header block               |
| 2    | +0x00A0     | 8 x short | Swapped    | Player race (0=unused,0xF=active) |
| 3    | +0x00B0     | 8 x short | Swapped    | Player alliance             |
| 4    | +0x00C0     | 8 x short | Swapped    | Player status               |
| 5    | +0x00D0     | 8 x short | Swapped    | Player gold/income          |
| 6    | +0x00E0     | 8 x short | Swapped    | Player strength             |
| 7    | +0x00F0     | 8 x short | Swapped    | Player city count           |
| 8    | +0x0100     | 0x10      | Raw read   | Misc flags                  |
| 9    | +0x0110     | 18 shorts | Swapped    | Per-field values            |
| 10   | +0x0134     | 1 byte    | ReadByte   | Single flag                 |
| 11   | +0x0136     | 39 shorts | Swapped    | Turn info, misc             |
| 12   | +0x0184     | 8 x 0x14  | Mixed      | Player records (see below)  |
| 13   | +0x0224     | 800       | Raw read   | Army name data              |
| 14   | +0x0544     | 80 shorts | Swapped    | Production queue            |
| 15   | +0x05E4     | 0x22C     | Raw read   | Extended data               |
| 16   | +0x0810     | 1 short   | Swapped    | City count                  |
| 17   | +0x0812     | 40 x 0x20 | Mixed      | City records                |
| 18   | +0x0D12     | 22 x 0x1E | Mixed      | Hero name records           |
| 19   | +0x0FA6     | 0xA0      | Raw read   | Raw block                   |
| 20   | +0x1046     | 10 shorts | Swapped    | Ruin/temple status          |
| 21   | +0x105A     | 100 shorts| Swapped    | Extended feature data       |
| 22   | +0x1122     | 8 shorts  | Swapped    | Victory points              |
| 23   | +0x1132     | 8 shorts  | Swapped    | Misc per-player             |
| 24   | +0x1142     | 8 x 6 shorts | Swapped | Combat modifiers            |
| 25   | +0x11A2     | 8x8x5 shorts | Swapped | Production slots (3D array) |
| 26   | +0x1422     | 8 x record | Mixed     | AI command records          |
| 27   | +0x1582     | 0x40      | Raw read   | Visibility/fog data         |
| 28   | +0x1602     | 1 short   | Swapped    | Army count                  |
| 29   | +0x1604     | 100 x 0x42| Mixed      | Army records                |

**Per-player record read (step 12, offset +0x184, 0x14 bytes):**
```
Read 7 x short (swapped): gold, income, cities, armies, production, strength, control
Read 2 x byte: player type bytes
Read 2 x short (swapped): AI strategy, diplomacy
```

**Per-city record read (step 17, offset +0x812, 0x20 bytes):**
```
Read 2 x short (swapped): X, Y coordinates
Read 0x17 bytes raw: city name (Pascal string)
Read 2 x short (swapped): owner, defense
```

**Per-hero record read (step 18, offset +0xD12, 0x1E bytes):**
```
Read 0x17 bytes raw: hero name
Read 3 x short (swapped): type, level, status
```

**AI command record read (step 26, offset +0x1422, 0x2C bytes):**
```
Read 3 bytes raw: command type flags
Read 2 x short (swapped): target X, target Y
Read 2 x short (swapped): priority, flags
Read 0x20 bytes raw: command data
```

**Per-army record read (step 29, offset +0x1604, 0x42 bytes):**
```
Read 2 x short (swapped): X, Y coordinates
Read 0x26 bytes raw: army data
Read 1 x short (swapped): movement points
Read 5 bytes raw: flags/stats
Read 1 x short (swapped): strength
Read 1 x short (swapped): hit points
Read 1 x short (swapped): army type
Read 2 bytes raw (packed bits): owner
Read 1 x short (swapped): status
Read 1 x short (swapped): experience
Read 1 x short (swapped): group ID
Read 1 x short (swapped): special flags
```

### 7.4 FUN_10058c64 -- WriteSCNResource (3864 bytes)

The exact mirror of FUN_1005668c. Writes the game state back to an SCN stream
with byte-swapping. Same field order, same sizes, but calling StreamWrite
instead of StreamRead, and swapping before write instead of after read.

**Notable value transformations on write:**

For player race values at +0xA0 and +0xB0:
- Internal value 0xFF -> writes as 0 (not present)
- Internal value 0 -> writes as 0xF (active)

---

## 8. Load Game Pipeline

### 8.1 FUN_1007ded4 -- DoRead / LoadDocument (1076 bytes)

Entry point called by MacApp when opening a save file.

#### Steps:

1. **Allocate game state buffers** if not already allocated:
   - Game state: 0x2FCC bytes
   - Map data: 0x8880 bytes
   - Hero data: 22000 bytes
   - Road data: 0x4440 bytes

2. **Check file type**: Read `Type` resource #1000
   - If version > 1: error "incompatible version"

3. **Check turn state**: Read `Turn` resource #1000
   - If turn data byte == 1: set "hot seat turn in progress" flag
   - Otherwise: set game to "needs password" mode

4. **Load mail messages**: For each of 8 players:
   - Try to read `Mail` resource #(1000 + playerIndex)
   - If found, allocate handle and store in player mail slot

5. **Check mail kick**: Look for `MKik` resource #1000
   - Presence indicates pending kick notification

6. **Dispatch to load function**: Call `FUN_10029ac0`

### 8.2 FUN_10029ac0 -- LoadAndInitialize (780 bytes)

Dispatches based on whether this is a scenario file or a save game:

- `param_3 == 0`: Calls `FUN_10028e10` (LoadFullSave) -- reads save game with
  full turn history and city records
- `param_3 != 0`: Calls `FUN_10028b30` (LoadFromScenario) -- reads simplified
  format

After loading, performs post-initialization:
1. Initialize army movement (`FUN_10049e68`)
2. Set up player view (`FUN_10025f98`)
3. Start turn processing if multiplayer (`FUN_1003d5d4`)
4. Restore fog of war (`FUN_10091334`)
5. Rebuild display state
6. Initialize current player turn

### 8.3 FUN_100283f8 -- ReadGameData (676 bytes)

The core game data reader used by both load paths:

| Order | Data                          | Size          | Description              |
|-------|-------------------------------|---------------|--------------------------|
| 1     | SCEN info                     | 0x54          | Scenario header          |
| 2     | Game state                    | 0x2FCC        | Main state block         |
| 3     | Map tiles                     | 0x8880        | MAP data                 |
| 4     | Hero/location data            | 22000         | Hero placement           |
| 5     | Road overlay                  | 0x4440        | Road data                |
| 6     | City ownership map            | 0x4440        | City territory           |
| 7     | Embedded resource 1 (4B size + data) | Variable | Sub-document 0x15C |
| 8     | Embedded resource 2 (4B size + data) | Variable | Sub-document 0x160 |
| 9     | City records (if param_2!=0)  | Via FUN_1001e3ec | 8 cities + extra  |

### 8.4 FUN_10028e10 -- LoadFullSave (3248 bytes)

The most complex load function. Handles the cross-platform byte-swapped format:

1. **Read SCEN header** (0x3A bytes raw + byte-swapped fields)
2. **Byte-swap 4 shorts** at offset 0x4C in header
3. **Load SCN data** via `FUN_1005668c` (with byte-swap)
4. **Load MAP data** (0x8880 bytes)
5. **Read 1000 hero/location records** with per-field byte-swap
6. **Load road data** (0x4440 bytes)
7. **Load city ownership** (0x4440 bytes)
8. **Read embedded resource 1** (4-byte size, then data, byte-swap size)
9. **Read embedded resource 2** (same pattern)
10. **Read turn history** (per-turn replay data for all past turns)
11. **Read city records** (8 cities with per-field byte-swap)
12. **Read extra city data** (0x4B0 raw bytes)

### 8.5 FUN_1002a864 -- LoadGameStateCrossFormat

This is the load counterpart of the cross-format save. Same structure as
FUN_10028e10 but called differently from the save path.

---

## 9. Scenario Save (Random Map Export)

### FUN at ~0x10096XX (SaveRandomMapAsScenario)

When the user selects "Save random map as:", the game writes a complete
scenario file to the resource fork:

| Resource  | ID    | Size    | Description                         |
|-----------|-------|---------|-------------------------------------|
| `MAP `    | 10000 | 0x8880  | Full map tile data                  |
| `RD  `    | 10000 | 0x4440  | Road overlay data                   |
| `CTY `    | 10000 | var     | City terrain data (from +0x1F56)    |
| `SPC `    | 10000 | var     | Special location data (from +0x3E96)|
| `DAT `    | varies| var     | Item data                           |
| `ITM `    | 10000 | var     | Item definitions (detached from DAT)|
| `PICT`    | 10000 | var     | Preview picture (copied from #1003) |
| `NAME`    | 10000 | 0x3C    | Scenario name (max 60 chars)        |
| `SCEN`    | 10000 | 0x54    | Scenario info header                |
| `DAT `    | 10050 | 0xAA    | Extra scenario data (170 bytes)     |

The SCEN info header (0x54 bytes) contains:
- Byte-swapped army count at offset matching `gameState+0x1602`
- Byte-swapped city count at offset matching `gameState+0x810`
- Byte-swapped player count (always 8)
- Byte-swapped name descriptor

---

## 10. Game Options / Preferences

### Loading Options (FUN_100579f8 region)

Game options are stored in the scenario/save file's resource fork:

| Resource  | ID   | Description                          |
|-----------|------|--------------------------------------|
| `List`    | 1000 | Options list (sorted collection)     |
| `Optn`    | 1000 | Options flags (4-byte uint)          |
| `Temp`    | 1000 | Temporary/override options           |

The `Optn` resource is a single 32-bit value. Special value `0xFFFFFFFD` (-3)
means "use template options from `Temp` resource".

Options are managed through `TGameOptionsDialogBehavior` and
`TSettingsDialogBehavior` classes, with a `TSortedOptionsList` providing
add/delete functionality.

### Saving Options

Options are saved as part of the normal document save -- the `Optn` resource
is written alongside game data via the `FUN_10002568` (AddResource) call.

---

## 11. Replay / Turn History System

### No Separate Replay File

Warlords II does not have a standalone replay file format. Instead, turn
history is **embedded within the save file** as part of the main game data
stream.

### Turn History Data Structure

Within the game data stream (resource type 2), after the map/army data, the
save file contains per-turn records:

```
For turn = 1 to (currentTurn - 1):
    turnRecordSize: short (byte-swapped)
    stats[24]:      24 x short (byte-swapped)  -- per-turn statistics
    armyVisibility: army_count bytes             -- per-army visibility snapshot
    moveCount:      short (byte-swapped)
    For move = 0 to (moveCount - 1):
        moveData:   2 x byte + 2 x short + 16 bytes raw
                    (byte-swapped shorts, raw bytes)
```

### Start-of-Turn Save (FUN_10038890)

At the beginning of each turn, `FUN_10038890` (SaveTurnState) records:
1. Current gold for all 8 players
2. Current score/ranking data
3. AI state snapshot
4. Army visibility flags (which armies each player can see)
5. Player move commands (serialized from AI command records)

This data feeds the "Turn Report" view (`TTurnView`, `TStartOfTurnBehavior`)
that shows players what happened during other players' turns.

---

## 12. Complete Data Flow

```
                    SCENARIO FILE (Resource Fork)
                    +---------------------------+
                    | 'MAP ' #10000  (0x8880)   |  -- Map tile data
                    | 'RD  ' #10000  (0x4440)   |  -- Road overlay
                    | 'SCN ' #10000  (0x2FCC)   |  -- Game config/state
                    | 'SCEN' #10000  (0x54)     |  -- Scenario info
                    | 'CTY ' #10000  (var)      |  -- City data
                    | 'ITM ' #10000  (var)      |  -- Items
                    | 'SPC ' #10000  (var)      |  -- Special locations
                    | 'NAME' #10000  (var)      |  -- Scenario name
                    | 'PICT' #1003   (var)      |  -- Preview image
                    +---------------------------+
                               |
                    FUN_10057448 (LoadScenario)
                    FUN_1005668c (ReadSCNResource)
                    FUN_10057334 (LoadMapResources)
                               |
                               v
                    GAME STATE (In-Memory)
                    +---------------------------+
                    | *piRam1011735c (0x2FCC)    |  -- Main game state
                    | *piRam10117358 (0x8880)    |  -- Map tiles
                    | *piRam10117354 (0x4440)    |  -- Roads
                    | *piRam10117360 (22000)     |  -- Hero/locations
                    | *piRam10115cf0 (0x4440)    |  -- City ownership
                    | *piRam10117468 (per-city)  |  -- City records
                    | iRam10117604   (0x54)      |  -- SCEN info
                    +---------------------------+
                         |              ^
            Save Game    |              |    Load Game
            FUN_10029e84 |              | FUN_10028e10
            FUN_1002a864 |              | FUN_10028b30
            FUN_10038890 |              | FUN_100283f8
                         v              |
                    SAVE GAME FILE (Resource Fork)
                    +---------------------------+
                    | Type 6 stream: main data  |
                    |   [SCEN info + game state |
                    |    + MAP + heroes + roads  |
                    |    + cities + resources]   |
                    | Type 2 stream: turn history|
                    |   [per-turn snapshots]     |
                    | Type 1 stream: version     |
                    | 'Type' #1000 (2B)         |
                    | 'Turn' #1000 (1-2B)       |
                    | 'Mail' #1000-1007 (var)   |
                    | 'MKik' #1000 (0B flag)    |
                    | 'NAME' #10000-30000 (var) |
                    | 'alis' #1000-1004 (var)   |
                    | 'Optn' #1000 (4B)         |
                    +---------------------------+
```

---

## 13. Function Reference Table

| Address    | Size   | Proposed Name                | Description                              |
|------------|--------|------------------------------|------------------------------------------|
| 10038890   | 976B   | SaveTurnState                | Save turn snapshot to replay stream      |
| 10038860   | 48B    | ClearCommandRecords          | Zero out AI command records after save   |
| 1003865c   | 516B   | SerializeMoveData            | Serialize AI moves for turn replay       |
| 10029e84   | 2160B  | WriteGameState               | Full save: write all game data to stream |
| 1002a864   | 2508B  | WriteGameStateCrossFormat    | Cross-platform save with byte-swapping   |
| 100283f8   | 676B   | ReadGameData                 | Core game data reader (bulk read)        |
| 10028e10   | 3248B  | LoadFullSave                 | Load save game with turn history         |
| 10028b30   | 736B   | LoadFromScenarioFile         | Load from scenario (no turn history)     |
| 10029ac0   | 780B   | LoadAndInitializeGame        | Load dispatcher + post-init              |
| 1007e894   | 1000B  | SaveDocument                 | MacApp save handler (high-level)         |
| 1007ded4   | 1076B  | LoadDocument                 | MacApp load handler (high-level)         |
| 10057448   | 936B   | LoadScenario                 | Scenario load entry point                |
| 10057334   | 276B   | LoadMapResources             | Load MAP and RD resources                |
| 1005668c   | 3240B  | ReadSCNResource              | Deserialize SCN resource into game state |
| 10058c64   | 3864B  | WriteSCNResource             | Serialize game state into SCN resource   |
| 100577f0   | 520B   | SetupRandomMap               | Random map initialization                |
| 1001e330   | 188B   | WriteCityRecords             | Write 8 city records to stream           |
| 1001e3ec   | 196B   | ReadCityRecords              | Read 8 city records from stream          |
| 1002869c   | 1172B  | PostLoadInitialization       | Post-load setup (PICT, display, etc.)    |
| 1003d4dc   | 244B   | EndOfTurnProcessing          | Turn advancement + save turn state       |
| 10052184   | 344B   | GetResourceStream            | Open named resource as stream            |
| 100522dc   | 204B   | OpenStream                   | Open stream for reading/writing          |
| 100523a8   | 232B   | CloseStream                  | Close and optionally release stream      |
| 10052490   | 68B    | StreamRead                   | Read bytes from stream (vtable 0xE0)     |
| 100524d4   | 68B    | StreamWrite                  | Write bytes to stream (vtable 0x170)     |
| 10052518   | 96B    | StreamSetPosition            | Seek in stream (vtable 0xB0)             |
| 100525a0   | 44B    | ByteSwap16                   | Big-endian <-> little-endian 16-bit      |
| 100525cc   | 60B    | ByteSwap32                   | Big-endian <-> little-endian 32-bit      |
| 10050bb0   | 92B    | GetScoreSnapshot             | Copy 8 score shorts for turn save        |
| 1000d910   | 156B   | GetCityByIndex               | Get city data pointer by index           |
| 10010-96XX | ~800B  | SaveRandomMapAsScenario      | Export random map to scenario file       |

---

## 14. Resource Type Summary

| FourCC | Hex        | Context          | Description                    |
|--------|------------|------------------|--------------------------------|
| `MAP ` | 0x4D415020 | Scenario + Save  | Map tile data (0x8880 bytes)   |
| `RD  ` | 0x52442020 | Scenario + Save  | Road overlay data (0x4440)     |
| `SCN ` | 0x53434E20 | Scenario         | Game state configuration       |
| `SCEN` | 0x5343454E | Scenario + Save  | Scenario info header (0x54)    |
| `CTY ` | 0x43545920 | Scenario         | City terrain data              |
| `ITM ` | 0x49544D20 | Scenario         | Item/artifact definitions      |
| `SPC ` | 0x53504320 | Scenario         | Special location data          |
| `DAT ` | 0x44415420 | Scenario         | Supplementary data             |
| `PICT` | 0x50494354 | Scenario + Save  | Pictures (preview, etc.)       |
| `NAME` | 0x4E414D45 | Scenario + Save  | Names (scenario, players)      |
| `Type` | 0x54797065 | Save only        | File type marker               |
| `Turn` | 0x5475726E | Save only        | Turn state flag                |
| `Mail` | 0x4D61696C | Save only        | Per-player messages            |
| `MKik` | 0x4D4B696B | Save only        | Mail kick notification flag    |
| `Optn` | 0x4F70746E | Save only        | Game options (4-byte flags)    |
| `List` | 0x4C697374 | Options          | Sorted options list            |
| `Temp` | 0x54656D70 | Options          | Template/default options       |
| `alis` | 0x616C6973 | Save only        | Mac alias records for players  |

---

## 15. Key Observations

### No Raw File I/O

The game never calls FSRead/FSWrite/FSOpen/FSClose directly. All file
operations go through MacApp's TStream/TFileBasedDocument/TResourceStream
hierarchy. The binary imports these APIs but they are used internally by
MacApp's resource management, not directly by game code.

### 68K Compatibility

The byte-swapping throughout the code proves this is a port from 68K Mac
to PowerPC. The "cross-format" save path (FUN_1002a864) individually
byte-swaps every 16-bit and 32-bit field, while the "native" path
(FUN_10029e84) writes bulk data directly.

### Hot-Seat Multiplayer

The `Turn` and `Mail` resources support hot-seat multiplayer:
- `Turn` tracks whose turn it is (so the correct player resumes)
- `Mail` stores up to 8 per-player messages
- `MKik` flags a player-kick event

### Compressed File Stream

The binary references `TCompressedFileStream` in its strings, suggesting
some paths may use compressed streams, though the main save/load paths
use standard uncompressed TResourceStream.

### Turn Replay is Incremental

Turn history grows with each turn. For a 200-turn game, the save file
contains 199 turn snapshots. This is why the code checks:
```c
if (turnNumber > 0xC9) return;  // Max 201 turns of history
```

### City Records are Separate

City data uses its own read/write functions (FUN_1001e330/FUN_1001e3ec)
that iterate over 8 city slots, each 0x42C bytes, plus a 0x4B0 byte
shared block. City data is NOT stored inline in the main game state
block but in a separate allocation via FUN_1000d910 (GetCityByIndex).
