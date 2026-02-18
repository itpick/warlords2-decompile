# Warlords II -- Movement, Pathfinding & Terrain Systems

Reverse engineered from the PowerPC binary (Ghidra decompilation).

---

## 1. Map Structure

### Map Dimensions
- **112 tiles wide** (x: 0..111, aka 0x00..0x6F)
- **156 tiles tall** (y: 0..155, aka 0x00..0x9B)
- Note: the task description said "96x182" but the binary bounds checks and memory allocations confirm **112x156**.

### Map Data (piRam10117358) -- "Terrain Map"
- **Size**: 0x8880 bytes (34,944 bytes)
- **Row stride**: 0xE0 bytes (224 bytes = 112 tiles * 2 bytes/tile)
- **Tile size**: 2 bytes (16 bits), but often read as 4 bytes (uint32) to get a pair of adjacent tiles or to read both bytes of one tile at once.
- **Access pattern**: `*(uint*)(mapData + y * 0xE0 + x * 2)`

### Visibility/Unit Overlay (piRam10117354) -- "Fog/Army Layer"
- **Size**: 0x4440 bytes (17,472 bytes)
- **Row stride**: 0x70 bytes (112 bytes = 112 * 1 byte/tile)
- **Tile size**: 1 byte, but often read as 4-byte uint for bit extraction
- **Access pattern**: `*(uint*)(visData + y * 0x70 + x)`

---

## 2. Tile Format (32-bit read from Terrain Map)

When reading `uint tile = *(uint*)(mapData + y * 0xE0 + x * 2)`:

```
Bits 31-24 (byte 3): Tile Graphic Index / Terrain Tile Type
                      This is the index into the tile graphics set.
                      256 possible values. Maps to one of ~12 terrain categories
                      via the lookup table at gameState + 0x711.

Bits 23    (bit 23):  ROAD flag. If set, this tile has a road.
                      Used to halve movement cost (OR 0x10 into cost map byte).

Bits 22    (bit 22):  Unknown flag (possibly "explored" or "visible")

Bits 21    (bit 21):  RUIN / SPECIAL flag. Checked for special sites.

Bits 20    (bit 20):  CITY WALLS / FORTIFIED flag.

Bits 19-16 (4 bits):  OWNER / PLAYER ID (0-15).
                      0x0F (15) = neutral/unowned.
                      Extracted as: (tile >> 16) & 0xF

Bits 15-11 (5 bits):  Army group ID (bits 15-11).
                      Extracted as: (tile >> 11) & 0x1F

Bits 10-7  (4 bits):  Player index for army (bits 10-7).
                      Extracted as: (tile >> 7) & 0xF

Bits 6     (bit 6):   Flag marker (city banner/flag display)

Bits 5-2   (4 bits):  Sub-tile type / variant (bits 5-2).
                      Extracted as: (tile >> 2) & 0xF

Bit  1     (bit 1):   Another flag (shore/water-adjacent?)

Bit  0     (bit 0):   Flag (possibly "has structure")
```

### Visibility Layer (32-bit read from Fog/Army Layer)

```
Bits 31    (bit 31):  Tile is occupied / has army (sign bit, checked as < 0)

Bits 28-24 (5 bits):  Army count or army stack indicator.
                      Extracted as: (vis >> 24) & 0x1F
                      If nonzero, an army is present.
                      Used in pathfinding: if enemy army present, movement cost = 1
                      (you must fight to enter).

Bits 23-21:           Additional army/allegiance flags

Bit  29   (bit 29):   "Discovered" flag. Checked for fog-of-war rendering.
```

---

## 3. Terrain Type System

### Terrain Category Lookup Table (gameState + 0x711)

The game state object (at `*piRam1011735c`) contains a byte array at offset **0x711** that maps each of the 256 possible tile graphic indices to a terrain category:

```c
// Pseudocode:
char terrain_category = gameState[tile_graphic_index + 0x711];
```

Where `tile_graphic_index = (tile_word >> 24) & 0xFF`.

### Known Terrain Category Values

| Value | Char  | Terrain Type       | Notes                                    |
|-------|-------|--------------------|------------------------------------------|
| 0     | '\0'  | Void/Invalid       | Impassable                               |
| 1     | '\x01'| Plains/Grassland   | Basic open terrain                       |
| 2     | '\x02'| Forest             | Higher movement cost                     |
| 3     | '\x03'| Hills              | Higher movement cost                     |
| 4-8   |       | Other land types   | Desert, swamp, tundra, etc.              |
| 9     | '\t'  | City               | Special handling (city tile)              |
| 10    | '\n'  | Ocean/Deep Water   | Only naval/flying units can enter         |
| 11    | '\v'  | Shore/Coastal      | Transitional water tile                  |
| 12    | '\f'  | (Bridge?)          | Possible bridge/ford terrain             |
| 13    | '\r'  | (River?)           | Seen in comparison alongside '\v'        |
| 15    | '\x0f'| Neutral/Unowned    | Special marker (often used for player=15)|
| 28    | '\x1c'| Hero/Special unit  | Used in army type comparisons            |

### How Terrain Categories Map to Movement

The terrain category (0-11+) is a small integer. It indexes into a **per-army-type movement cost table** (a short array) to get the actual movement point cost for that unit type to enter that terrain.

---

## 4. Movement Cost System

### Movement Cost Tables

Two movement cost tables exist:

1. **Standard movement costs** at `iRam10115e84`:
   `short moveCost = *(short*)(terrainCategory * 2 + standardCostTable);`

2. **Flying/Naval movement costs** at `iRam10115ed4`:
   Used when army type == 0x0E (14), which represents flying units.

### Cost Map Generation (FUN_10044110)

For each tile on the 112x156 map, the game builds a **per-tile movement cost byte** in a separate cost map (`*piRam101175a0`, 112x156 bytes, 0x9C stride):

```c
// Pseudocode for cost map generation:
void BuildMovementCostMap(int armyType) {
    for (x = 111; x >= 0; x--) {
        for (y = 155; y >= 0; y--) {
            uint tile = mapData[y * 0xE0/4 + x];   // 4-byte read
            int tileGraphicIdx = (tile >> 24) & 0xFF;
            int terrainCat = gameState[tileGraphicIdx + 0x711];

            int armiesPresent = (visLayer[y * 0x70 + x] >> 24) & 0x1F;

            byte cost;
            if (armiesPresent != 0) {
                // Enemy army present: cost 1 (must fight)
                cost = 1;
            } else if (armyType == 0x0E) {
                // Flying units use the flying cost table
                cost = (byte)flyingCostTable[terrainCat];
            } else {
                // Standard units use the standard cost table
                cost = (byte)standardCostTable[terrainCat];
            }

            costMap[x * 0x9C + y] = cost;

            // If tile has a road (bit 23 set), mark road flag in cost byte
            if ((tile >> 23) & 1) {
                costMap[x * 0x9C + y] |= 0x10;  // road flag
            }
        }
    }
}
```

### Cost Map Byte Format

Each byte in the cost map encodes both the movement cost and flags:

```
Bits 7   (0x80):  Visited/processed flag (used during pathfinding)
Bit  6   (0x40):  Bridge flag (allows cost=2 if army has bridge bonus)
Bit  5   (0x20):  Road-adjacent or special movement flag
Bit  4   (0x10):  ROAD flag -- tile has a road, halves effective cost
Bit  3   (0x08):  Enemy territory / Zone of Control flag
Bits 2-0 (0x07):  Base movement cost (0-7)
                   0 = impassable for this unit type
                   1 = minimal cost (city, road, flat terrain)
                   2 = standard open terrain
                   3-4 = rough terrain (forest, hills)
                   5-7 = very rough terrain (mountains, swamp)
```

---

## 5. Pathfinding Algorithm (FUN_10043248)

### Algorithm Type: **Expanding-Ring Dijkstra / Flood Fill**

The pathfinding is NOT A* -- it is a **wavefront expansion / Dijkstra flood fill** that expands outward from the destination in concentric rings, propagating minimum-cost distances.

### Data Structures

- **Distance Grid** (`*(int*)*puRam1011759c`): 112x156 grid of shorts (0x138 = 312 bytes per row = 156 entries * 2 bytes). Each entry stores the remaining movement points to reach that tile. **Negative values** mark tiles on the frontier (to be expanded). **0x7531** (30001) marks impassable tiles.

- **Cost Map** (`*piRam101175a0`): 112x156 grid of bytes (0x9C stride). Each byte encodes movement cost + flags (see above).

- **Neighbor Offsets**: Two offset tables at `iRam10115ebc` and `iRam10115ec0` define the neighbor expansion pattern. The neighbor list is terminated by the sentinel value **-10**. There are 10 different neighbor patterns (indices 0-9) selected based on the tile's position (corner, edge, or interior).

### Algorithm Pseudocode

```c
// FUN_10043248 -- Expanding-ring pathfinding
//
// param_1: pathfinding request structure
//   param_1[0] = source X
//   param_1[1] = source Y
//   param_1[2] = destination X
//   param_1[3] = destination Y
//   param_1[4] = flags (bit 0: has road bonus, bit 1: has bridge bonus,
//                        bit 4: limited range mode)
//   param_1[5] = movement mode (0=normal, 1=all-terrain/flying, 2=naval)
//
// Returns: 1 if path found, 0 if no path

int FindPath(PathRequest* req) {
    int srcX = req->srcX, srcY = req->srcY;
    int dstX = req->dstX, dstY = req->dstY;
    int searchRadius;

    if (req->flags & 0x10) {
        // Limited range: use configured max range
        searchRadius = configuredMaxRange;
    } else if (isAI) {
        searchRadius = 50;
    } else {
        searchRadius = 20;  // or 6 for short paths
    }

    // Initialize distance grid: destination = -1 (frontier)
    distGrid[dstX][dstY] = -1;  // 0xFFFF

    int ringCount = 0;
    int maxRings = 3;  // convergence counter

    do {
        bool anyExpanded = false;

        // Scan all tiles in the bounded search area
        for (x = searchMinX; x <= searchMaxX; x++) {
            for (y = searchMinY; y <= searchMaxY; y++) {
                short dist = distGrid[x][y];

                if (dist >= 1) continue;  // already finalized (positive)
                // dist < 0 means this tile is on the frontier

                byte srcCostByte = costMap[x][y];
                distGrid[x][y] = -dist;  // finalize (make positive)
                anyExpanded = true;

                // Select neighbor pattern based on position
                int pattern = GetNeighborPattern(x, y);
                int* neighborList = neighborOffsets[pattern];

                // Iterate over neighbors
                while (neighborList[dx_idx] != -10) {
                    int nx = x + neighborDX[dx_idx];
                    int ny = y + neighborDY[dx_idx];
                    dx_idx++;

                    if (distGrid[nx][ny] == 0x7531) continue;  // impassable

                    byte dstCostByte = costMap[nx][ny];
                    int baseCost = dstCostByte & 0x07;  // bits 0-2

                    // === MOVEMENT MODE HANDLING ===

                    if (req->moveMode == 0) {
                        // NORMAL mode
                        if ((dstCostByte & 0x08) == 0 &&   // not enemy zone
                            (dstCostByte & 0x80) == 0) {   // not visited
                            distGrid[nx][ny] = 0x7531;     // impassable
                            continue;
                        }
                    }
                    else if (req->moveMode == 2) {
                        // NAVAL mode
                        if ((dstCostByte & 0x08) == 0 ||
                            (dstCostByte & 0x10) != 0) {
                            // On water or on road: cap cost at 2
                            if (baseCost == 0) baseCost = 2;
                            if (baseCost > 2) baseCost = 2;
                        } else {
                            baseCost = 2;
                        }
                    }
                    else if (req->moveMode == 1) {
                        // FLYING / ALL-TERRAIN mode
                        // Destination tile: cost = 1 always
                        if (nx == srcX && ny == srcY) {
                            baseCost = 1;
                        }
                    }

                    // === ROAD DISCOUNT ===
                    if (req->flags & 0x01) {         // army has road bonus
                        if (dstCostByte & 0x20) {    // tile has road connection
                            if (baseCost > 2) baseCost = 2;
                        }
                    }

                    // === BRIDGE DISCOUNT ===
                    if (req->flags & 0x02) {         // army has bridge bonus
                        if (dstCostByte & 0x40) {    // tile has bridge
                            if (baseCost > 2) baseCost = 2;
                        }
                    }

                    // === ZONE OF CONTROL PENALTY ===
                    // If crossing from non-enemy to enemy territory
                    if ((srcCostByte & 0x08) == 0 || (srcCostByte & 0x10) != 0) {
                        if ((dstCostByte & 0x08) != 0 && (dstCostByte & 0x10) == 0) {
                            baseCost += zoneOfControlPenalty;  // *psRam101175a4
                        }
                    }

                    // === UPDATE DISTANCE ===
                    int currentBest = abs(distGrid[nx][ny]);
                    int newDist = abs(dist) + baseCost;

                    if (newDist < currentBest) {
                        distGrid[nx][ny] = -(abs(dist) + baseCost);  // negative = frontier
                    }
                }

                // Check if we reached the source
                if (x == srcX && y == srcY && !(req->flags & 0x10)) {
                    pathFound = true;
                }
            }
        }

        ringCount++;

        if (!anyExpanded && !pathFound) {
            return 0;  // no path
        }

    } while (maxRings > 0);

    return pathFound ? 1 : 0;
}
```

### Path Reconstruction (FUN_100439a4)

After the flood fill completes, FUN_100439a4 traces back from the source to the destination by following the steepest gradient in the distance grid, producing the ordered sequence of waypoints.

---

## 6. Movement Execution

### TMoveArmyCommand Flow

The movement command system follows a MacApp-style command pattern:

1. **FUN_10030490** (`TMoveArmyCommand::DoIt`) -- Main movement execution entry point
   - Called when player clicks to move an army
   - Checks if the target tile is owned/allied, occupied by enemies, etc.
   - Calls `FUN_1002cfbc` to animate the scroll/viewport to show movement
   - Calls `FUN_1002d654` to resolve combat if armies meet
   - Calls `FUN_1002e7d4` to execute the actual move and update game state

2. **FUN_1002cfbc** (`ScrollToAndShowMovement`) -- Viewport scroll + animation
   - Scrolls the map viewport to show the moving army
   - Calls `FUN_10007dd4` to animate the army sprite
   - Draws the army at its destination position

3. **FUN_1002d654** (`ResolveBattle`) -- Combat resolution
   - Uses the dice function `FUN_1005f230(numDice, dieSize, bonus)`
   - Die size is 0x14 (20) normally, 0x18 (24) with "enhanced" combat
   - Iterates rounds until one side is eliminated
   - Maximum 10,000 rounds (safety check)

4. **FUN_1002e7d4** (`ExecuteMove`) -- Post-combat game state update
   - Updates tile ownership in the map data: `(tile & 0xFFF0FFFF) | ((playerID & 0xF) << 16)`
   - Transfers gold from conquered cities
   - Updates army positions in the army list
   - Handles special events (ruins, quests, etc.)
   - Clears path waypoints for the moved army

### FUN_10060608 (`DrawMapWithArmies`) -- Map rendering with armies

This 3,404-byte function is the main map redraw routine. It:
- Iterates over visible tiles
- Draws terrain
- Draws army stacks (up to 8 armies per tile)
- Draws path overlay (movement arrows/markers)
- Handles minimap mode and zoomed views

---

## 7. Army Data Structure

### Army Stack Entry (at gameState + 0x1604 + armyIndex * 0x42)

Each army occupies **0x42 (66) bytes** in the army table:

```
Offset  Size  Field
------  ----  -----
+0x00   2     (header/type info)
+0x04   2     X position (map tile X coordinate)
+0x06   2     Y position (map tile Y coordinate)
+0x08   varies (army stats)
+0x15   1     Owner/player ID (char). 0x0F = neutral
+0x19   1     Army type index (terrain movement class)
+0x2D   1     Flags
+0x2E   2     Movement points (short)
+0x2F   1     Previous owner
+0x30   1     Allegiance flags (bitmask)
+0x31   1     State byte (0 = at sea, 1+ = on land/in garrison)
+0x32   2     Additional status
+0x36   2     Path status (0 = no path set, nonzero = has waypoint)
+0x38   2     Path target X (or -2 for auto-path / -1 for no target)
+0x3A   2     Path target Y
```

The army list starts at `gameState + 0x1604`, with a count at `gameState + 0x1602`.

### Player/Side Data (at gameState + 0xD0)

```
Offset  Size  Field
------  ----  -----
+0xD0   2*8   Player active flags (short[8]). 0 = eliminated, nonzero = active
+0x110  2     Current player index (short)
+0x124  2     Game mode flags
+0x12A  2     Alliance settings
+0x15A  2     Fog of war mode (0 = no fog)
```

### Army Type Movement Data

Each terrain type has movement costs per army type, stored in lookup tables:

- **Standard cost table** (`iRam10115e84`): `short[numTerrainCategories]`
- **Flying cost table** (`iRam10115ed4`): `short[numTerrainCategories]`

Values are shorts. A cost of **0** means impassable. Typical values:
- 1 = roads, cities, trivial terrain
- 2 = open grassland
- 3 = forest
- 4 = hills
- 5-7 = mountains, swamp, desert

---

## 8. Movement Modes

### Mode 0: Normal (Ground) Movement
- Uses standard movement cost table
- Cannot cross water tiles (terrain category 10/11 = impassable, cost 0)
- Roads reduce cost to 2 maximum
- Zone of control from enemy armies adds extra cost
- Blocked by tiles with cost 0 in the cost table

### Mode 1: Flying Movement
- Cost to reach destination tile is always 1 (if the unit can enter at all)
- Ignores most terrain penalties
- Can cross water
- Still affected by road bonuses on the destination tile
- Used when army type index == 0x0E (14)

### Mode 2: Naval Movement
- Uses a modified cost calculation
- All traversable tiles cost at most 2
- Can enter water tiles (terrain category 10/11)
- Roads still provide benefits
- Land tiles may be inaccessible depending on specific rules

---

## 9. Road System

### Road Detection
- **Bit 23** of the map tile word: `(tile >> 23) & 1`
- If set, the tile has a road

### Road Effect on Movement
1. During cost map generation: tiles with roads get the **0x10** flag set in their cost byte
2. During pathfinding: if the army has road bonus (`param_1[4] & 0x01`) and the destination tile has a road-related flag (`costByte & 0x20`), the movement cost is capped at **2**

### Bridge System
- Similar to roads: if the army has bridge bonus (`param_1[4] & 0x02`) and the tile has a bridge flag (`costByte & 0x40`), cost is capped at **2**
- Bridges allow crossing rivers/narrow water at reduced cost

---

## 10. Zone of Control

### Mechanism
Enemy armies exert a zone of control (ZoC) on adjacent tiles. When moving from a tile **not** in an enemy's ZoC to a tile **in** an enemy's ZoC (and not on a road), an additional movement penalty is applied:

```c
if ((srcTile_notEnemy || srcTile_hasRoad) &&
    (dstTile_isEnemy && !dstTile_hasRoad)) {
    cost += zoneOfControlPenalty;  // from *psRam101175a4
}
```

- The ZoC flag is **bit 3 (0x08)** of the cost map byte
- Roads (bit 4, 0x10) negate ZoC for that tile
- The penalty value is configurable per scenario

---

## 11. Stack Movement (Group Movement)

### Army Stacking
- Multiple armies can occupy the same tile (up to 8, based on the 5-bit field)
- When a group moves, all armies in the stack move together
- The effective movement cost for the group is determined by the **slowest unit** in the stack
- Stack composition affects available movement modes:
  - If any unit cannot fly, the stack moves as ground
  - If any unit cannot swim, the stack cannot enter water

### Path Waypoints
- Each army can have a pre-planned path stored at offsets 0x1636-0x163A in the army entry
- `gameState[armyIdx * 0x42 + 0x1636]` = path active flag (0 = no path)
- `gameState[armyIdx * 0x42 + 0x1638]` = next waypoint X (-2 = auto-target, -1 = none)
- `gameState[armyIdx * 0x42 + 0x163A]` = next waypoint Y

---

## 12. Key Function Reference

| Address      | Size  | Proposed Name                    | Purpose                                        |
|-------------|-------|----------------------------------|------------------------------------------------|
| FUN_10043248 | 1884  | `PathFind_FloodFill`             | Core Dijkstra flood-fill pathfinding algorithm  |
| FUN_10043e60 | 688   | `PathFind_Execute`               | Sets up and runs pathfinding request            |
| FUN_10044110 | 888   | `BuildMovementCostMap`           | Builds per-tile movement cost grid from terrain |
| FUN_10042d2c | 440   | `ApplyZoneOfControl`             | Marks ZoC regions on the cost map               |
| FUN_100439a4 | 736   | `PathFind_ReconstructPath`       | Traces back the optimal path from distance grid |
| FUN_10042a24 | 400   | `CheckTileAccessibility`         | Checks if a tile is reachable by the given army |
| FUN_10030490 | 1964  | `TMoveArmyCommand_DoIt`          | Main movement command execution                 |
| FUN_1002cfbc | 1008  | `ScrollToAndShowMovement`        | Scroll viewport and animate army movement       |
| FUN_1002d654 | 744   | `ResolveBattle`                  | Combat resolution using dice rolls              |
| FUN_1002e7d4 | 2436  | `ExecuteMove_UpdateState`        | Updates game state after movement/combat        |
| FUN_10060608 | 3404  | `DrawMapWithArmies`              | Main map rendering (terrain + armies + paths)   |
| FUN_10060078 | 1384  | `DrawPathOverlay`                | Draws the movement path arrows on the map       |
| FUN_10061a98 | 1936  | `DrawArmyIcons`                  | Draws army stack icons on the map               |
| FUN_10061980 | 148   | `DrawSingleArmySprite`           | Draws one army sprite at a map position         |
| FUN_10005f90 | 7312  | `DrawFullMapView`                | Full map rendering with all layers              |
| FUN_10007dd4 | 60    | `AnimateArmyMovement`            | Dispatches army movement animation              |
| FUN_1005f230 | --    | `RollDice(numDice, dieSize, bonus)` | Dice roll function for combat               |

---

## 13. Terrain Category to Tile Value Mapping

The table at `gameState + 0x711` has 256 entries (one per tile graphic index). The most common tile values from the MAP resource map as follows:

| Hex Value | Terrain Category | Likely Meaning     |
|-----------|------------------|--------------------|
| 0x27      | 10 ('\n')        | Ocean (deep water) |
| 0x2D      | 10 ('\n')        | Ocean variant      |
| 0x1F      | 1 ('\x01')       | Grassland/Plains   |
| 0x09      | 3 ('\x03')       | Mountain           |

The terrain category values and their meanings (based on code comparisons):

| Category | Movement Cost (typical) | Terrain      | Key Code Evidence                          |
|----------|------------------------|--------------|--------------------------------------------|
| 0        | Impassable             | Void/Invalid | `cost == 0` blocks movement                |
| 1        | 2                      | Plains       | `'\x01'` compared at offset +0x82A         |
| 2        | 3                      | Forest       | `'\x02'` compared for forest behavior      |
| 3        | 4                      | Hills        | `'\x03'` seen in terrain branching         |
| 4-8      | 3-6                    | Various land | Desert, swamp, tundra variants             |
| 9        | 1                      | City         | `'\t'` triggers city cursor (0x24)         |
| 10       | 0 (water only)         | Ocean        | `'\n'` universally = deep water            |
| 11       | 0 (water only)         | Shore        | `'\v'` = coastal/transitional water        |
| 12       | varies                 | Bridge/Ford  | `'\f'` / `'\r'` transition tiles           |
| 13       | varies                 | River        | `'\r'` seen alongside '\v'                 |
| 15       | N/A                    | Neutral      | `'\x0f'` = no-owner marker                |
| 28       | N/A                    | Hero marker  | `'\x1c'` = hero/special army type          |

---

## 14. Complete Movement Rules Summary

1. **Each army has a movement point pool** (stored at army entry offset +0x2E). At the start of each turn, this is refilled based on the army type.

2. **To move one tile**, the army spends movement points equal to the terrain cost for that tile (modified by roads, bridges, ZoC).

3. **Movement cost modifiers**:
   - **Roads**: Cost capped at 2 if army has road bonus and tile has road
   - **Bridges**: Cost capped at 2 if army has bridge bonus and tile has bridge
   - **Enemy ZoC**: Additional penalty when entering enemy-controlled territory (not on roads)
   - **Enemy armies**: Entering a tile with enemy army costs only 1 (then combat resolves)
   - **Flying units**: All tiles cost 1 (effectively unlimited range per movement point)
   - **Naval units**: All water tiles cost at most 2

4. **Impassable terrain**:
   - Ground units cannot enter water (terrain categories 10, 11)
   - Naval units restricted to water and ports
   - Cost of 0 in the cost table = impassable

5. **Pathfinding** uses a Dijkstra flood-fill expanding from the destination. It fills a distance grid with minimum-cost distances, then traces back the optimal path. The search area is bounded (radius 6-50 tiles depending on context).

6. **Combat** occurs automatically when an army moves into a tile occupied by an enemy. It uses `RollDice(1, 20, 0)` per round (or d24 with enhanced combat), comparing attacker vs defender rolls. The loser takes casualties until one side is eliminated.
