# Warlords II Random Map Generator -- Reverse Engineering

## Table of Contents

1. [Overview](#overview)
2. [Entry Point and UI Parameters](#entry-point-and-ui-parameters)
3. [Main Orchestrator](#main-orchestrator)
4. [Terrain Type Codes](#terrain-type-codes)
5. [Map Dimensions and Data Layout](#map-dimensions-and-data-layout)
6. [Phase 1: Initialization (FUN_100a6298 + FUN_100515f4)](#phase-1-initialization)
7. [Phase 2: Player Start Zones (FUN_100a01e8)](#phase-2-player-start-zones)
8. [Phase 3: City Placement (FUN_100a3a80)](#phase-3-city-placement)
9. [Phase 4: Mountain/Forest Chains (FUN_100abcec)](#phase-4-mountainforest-chains)
10. [Phase 5: River/Water Channels (FUN_100a9c08)](#phase-5-riverwater-channels)
11. [Phase 6: Land Mass Generation (FUN_100a271c)](#phase-6-land-mass-generation)
12. [Phase 7: Swamp Clusters (FUN_100a66a8)](#phase-7-swamp-clusters)
13. [Phase 8: City Registration and Neutral Cities (FUN_100a6ae8)](#phase-8-city-registration)
14. [Phase 9: Ruins Placement (FUN_100a6f38)](#phase-9-ruins-placement)
15. [Phase 10: Road Network (FUN_100aafb8)](#phase-10-road-network)
16. [Phase 11: Finalization (FUN_100a6204)](#phase-11-finalization)
17. [Utility Functions](#utility-functions)
18. [Complete Dice Roll Catalog](#complete-dice-roll-catalog)
19. [Configurable Parameters](#configurable-parameters)
20. [Direction Table](#direction-table)

---

## Overview

The Warlords II random map generator creates a 112x156 tile hex-style map through an 11-phase pipeline. The generator is invoked from the "Random Map" menu option (`TRandomMapDialogBehavior` class, string at 0x1265FD). The user configures 4 parameters (player count, city count, terrain style, water percentage), then the generator runs through phases with a progress bar.

**Key global pointers:**
- `piRam101175f4` -- pointer to game state / scenario data structure (offsets contain config, direction tables, terrain templates)
- `piRam101175f0` -- pointer to map tile data buffer
- `piRam10117358` -- pointer to tile graphics/rendering buffer (0x8880 = 34,944 bytes)
- `piRam10117354` -- pointer to secondary tile buffer (0x4440 = 17,472 bytes)
- `piRam1011735c` -- pointer to scenario/city data structure
- `puRam10115f7c` -- pointer to progress bar dialog handle

**Map coordinate system:**
- X axis: 0..111 (0x70 = 112 columns)
- Y axis: 0..155 (0x9C = 156 rows)
- Tile terrain byte at: `*piRam101175f0 + y * 0x70 + x + 0x34A`

---

## Entry Point and UI Parameters

### FUN_100577f0 -- Random Map Dialog Handler
- **Address:** 0x100577f0
- **Size:** 520 bytes
- **Proposed name:** `HandleRandomMapDialog`

This function is invoked from the game menu. It:
1. Generates a 6-character random scenario name (dice(1, 0x5A, 0) = random printable chars + space)
2. Retrieves player configuration data from resource 0x89 (7 sub-items)
3. Reads 4 player slot settings from `iRam10116460` array (value 7 means "random", replaced with dice(1,7,-1))
4. Calls `FUN_100517f8(param1, param2, param3, param4)` with the 4 configuration values

### FUN_100517f8 -- Random Map Setup and Generation Entry
- **Address:** 0x100517f8
- **Size:** 1384 bytes
- **Proposed name:** `SetupAndGenerateRandomMap`
- **Parameters:** `(short waterStyle, short cityCount, short terrainStyle, short playerCount)`

**Algorithm:**
```
1. Show progress dialog with dimensions 0xCA x 0x3C (202 x 60)
2. Allocate scenario data buffer (0x5DD6 = 24,022 bytes)
3. Allocate map tile buffer (0x478A = 18,314 bytes)
4. Load template data from 'DAT ' resource
5. Read terrain lookup tables into data structures:
   - 0x132 (306) shorts at offset 0x000
   - Copy 0x200 bytes at offset 0x264
   - 0x180 (384) shorts at offset 0x464
   - Copy 800 bytes at offset 0x764
   - 1 short at offset 0xA84 (initial city count)
   - Copy 0x44C bytes at offset 0xA86
   - 1 short at offset 0xED2
   - Copy 400 bytes at offset 0xED4
   - 2 shorts at offset 0x1064, 0x1066
   - Copy 0x848 bytes at offset 0x1068
   - 1 short at offset 0x18B0
   - Copy 0x4B0 bytes at offset 0x18B2
   - 0xFA (250) shorts at offset 0x1D62
   - Copy 16000 bytes at offset 0x1F56
6. Read tile data:
   - 0x1A5 (421) shorts
   - Copy 0x4440 (17,472) bytes at offset 0x34A
7. Apply user parameters to base template values:
   - offset 0x2A += lookup[terrainStyle * 2 + 0x6E]   (total cities adjustment)
   - offset 0x3C += lookup[playerCount * 2 + 0x60]     (water % adjustment)
   - offset 0x36 += lookup[cityCount * 2 + 0x44]       (neutral city count)
   - offset 0x34 += lookup[cityCount * 2 + 0x44]       (player city count)
   - offset 0x38 += lookup[waterStyle * 2 + 0x52]      (mountain count)
   - offset 0x3A += lookup[waterStyle * 2 + 0x52]      (forest count)
8. Call FUN_100516c0() -- main generation
```

**Key template offsets (from piRam101175f4):**
| Offset | Purpose |
|--------|---------|
| 0x2A   | Total number of cities to generate |
| 0x2C+  | Player difficulty settings (per player, 4 entries) |
| 0x34   | Number of player-controlled cities |
| 0x36   | Number of neutral cities |
| 0x38   | Number of mountain chains |
| 0x3A   | Number of forest chains |
| 0x3C   | Water/land percentage parameter |
| 0x3E   | Additional forest modifiers |
| 0x40   | Additional mountain modifiers |
| 0x44+  | City count lookup table |
| 0x52+  | Water style lookup table |
| 0x60+  | Player count lookup table |
| 0x6E+  | Terrain style lookup table |
| 0x8C+  | Player start positions (4 x 8-byte entries) |
| 0xBC+  | Direction offset table (8 directions, dx/dy pairs at +0xBC, +0xBE) |

---

## Main Orchestrator

### FUN_100516c0 -- GenerateRandomMap
- **Address:** 0x100516c0
- **Size:** 312 bytes
- **Proposed name:** `GenerateRandomMap`

**Pseudocode:**
```
function GenerateRandomMap():
    UpdateProgress(0%)
    Phase1_LoadScenarioTemplate()          // FUN_100a6298
    Phase1b_InitializeMapToOcean()         // FUN_100515f4
    Phase2_PlacePlayerStartZones()         // FUN_100a01e8
    UpdateProgress(10%)
    Phase3_PlaceCitiesAndRoads()           // FUN_100a3a80
    UpdateProgress(20%)
    Phase4_PlaceMountainForestChains()     // FUN_100abcec
    UpdateProgress(30%)
    Phase5_PlaceRiverWaterChannels()       // FUN_100a9c08
    UpdateProgress(40%)
    Phase6_GenerateLandMasses()            // FUN_100a271c
    UpdateProgress(50%)
    Phase7_PlaceSwampClusters()            // FUN_100a66a8
    UpdateProgress(60%)
    Phase8_RegisterCitiesAndAddNeutral()   // FUN_100a6ae8
    UpdateProgress(70%)
    Phase9_PlaceRuins()                    // FUN_100a6f38
    UpdateProgress(80%)
    Phase10_GenerateRoadNetwork()          // FUN_100aafb8
    UpdateProgress(90%)
    Phase11_FinalizeAndSave()              // FUN_100a6204
    UpdateProgress(100%)
```

---

## Terrain Type Codes

The map uses single-byte terrain type codes stored at `*piRam101175f0 + y * 0x70 + x + 0x34A`. Values discovered through analysis:

| Code | Hex  | Terrain Type |
|------|------|-------------|
| 0    | 0x00 | Deep ocean / edge |
| 1    | 0x01 | Coastal marker (intermediate) |
| 2    | 0x02 | Ocean / water |
| 3    | 0x03 | Shore / beach (coastal transition) |
| 4    | 0x04 | Grassland / plains |
| 5    | 0x05 | Forest |
| 6    | 0x06 | Mountain |
| 7    | 0x07 | Open land (pre-terrain assignment) |
| 8    | 0x08 | Swamp |
| 9    | 0x09 | Special terrain (hero marker) |
| 10   | 0x0A | City tile |
| 11   | 0x0B | Ruins tile |

**Adjacency offsets from a tile at `base + y * 0x70 + x + 0x34A`:**
- North:  `+0x2DA` (y-1 row: -0x70 offset)
- South:  `+0x3BA` (y+1 row: +0x70 offset)
- East:   `+0x34B` (x+1)
- West:   `+0x349` (x-1)
- NE:     `+0x2DB` (-0x70 + 1)
- NW:     `+0x2D9` (-0x70 - 1)
- SE:     `+0x3BB` (+0x70 + 1)
- SW:     `+0x3B9` (+0x70 - 1)

---

## Map Dimensions and Data Layout

- **Map width:** 112 tiles (0x70)
- **Map height:** 156 tiles (0x9C)
- **Total tiles:** 17,472
- **Tile graphics buffer:** 0x8880 bytes (34,944 = 112 * 156 * 2, 16-bit tile graphics)
- **Secondary tile buffer:** 0x4440 bytes (17,472 = 112 * 156 * 1, tile overlay data)
- **Terrain data offset:** 0x34A within the map data buffer
- **Edge bounds:** x in [0, 0x6F], y in [0, 0x9B]
- **Clamping function:** FUN_10051dc8 clamps x to [0, 0x6F] and y to [0, 0x9B]

---

## Phase 1: Initialization

### FUN_100a6298 -- LoadScenarioTemplate
- **Address:** 0x100a6298
- **Size:** 204 bytes

Loads the `SCN ` (scenario) resource template (resource size 30000). Allocates a 0x2FCC-byte buffer for scenario data if not already allocated. Copies template data into the active scenario data structure.

### FUN_100515f4 -- InitializeMapToOcean
- **Address:** 0x100515f4
- **Size:** 204 bytes

**Algorithm:**
```
Allocate tile buffers if needed (0x8880 and 0x4440 bytes)
for x = 0 to 111:
    for y = 0 to 155:
        Set terrain[x][y] = 2 (ocean)
        Clear top 5 bits of secondary tile buffer
```
This fills the entire map with ocean as the starting state.

---

## Phase 2: Player Start Zones (FUN_100a01e8)

### FUN_100a01e8 -- PlacePlayerStartZones
- **Address:** 0x100a01e8
- **Size:** 172 bytes

**Algorithm:**
```
for each of 4 players (0-3):
    PlacePlayerSeedPoint(player)       // FUN_1009e81c
SortStartPointsByAngle()               // FUN_1009ea20
for each of 4 players (0-3):
    ExpandPlayerZone(player)           // FUN_1009eef8
ConnectAdjacentZones()                 // FUN_1009f864
ConvertToTerrainCodes()               // FUN_1009fc58
ExpandCoastalTiles()                  // FUN_100a0038
if dice(1, 100, 0) < 50:              // 50% chance
    dice(1, 3, -1)                     // random extra parameter
    AddExtraLandPatches()             // FUN_100a018c
ExpandCoastalTiles()                  // FUN_100a0038 again
```

### FUN_1009e81c -- PlacePlayerSeedPoint
- **Address:** 0x1009e81c
- **Size:** 516 bytes
- **Parameters:** `(short playerIndex)`

For each player, determines two seed points based on the player's difficulty level (offset 0x2C):
- If difficulty < 3: Uses template start positions directly
- If difficulty >= 3: Takes template positions, offsets them by -10 * direction vector, then randomly perturbs with FUN_10051e1c (random scatter of 0x10 range)

The seed points are stored at offsets 0x244 and 0x254 (4 bytes each, packed x/y coords).

### FUN_1009ea20 -- SortStartPointsByAngle
- **Address:** 0x1009ea20
- **Size:** 336 bytes

Sorts the 4 player start zones by their angle ratio (x-ratio vs y-ratio from center), ensuring players are spread around the map. Uses floating-point comparison.

### FUN_1009eef8 -- ExpandPlayerZone
- **Address:** 0x1009eef8
- **Size:** 844 bytes
- **Parameters:** `(short playerIndex)`

For each player, expands from their seed points outward. If difficulty >= 3, it:
1. Calculates the distance between the two seed points
2. Divides that distance by (difficulty - 1) to get spacing
3. Places intermediate waypoints along the path between seeds
4. At each waypoint, marks the tile as terrain 7 (open land)

The expansion creates corridors of open land connecting the player's seed points.

### FUN_1009fc58 -- ConvertToTerrainCodes
- **Address:** 0x1009fc58
- **Size:** 700 bytes

After player zones are placed (marked as terrain 7 = open land), this function:
1. Converts terrain 7 to 3 (shore), everything else to 0 (deep ocean)
2. Runs 4 directional passes (NW->SE, N->S, SE->NW, S->N) twice, calling FUN_1009fad4 to check if water tiles should become coastal (terrain 2)
3. Final pass: converts remaining 2 to ocean (2) and everything else to open land (7)
4. Calls FUN_10051d64 to update all tiles

### FUN_100a0038 -- ExpandCoastalTiles
- **Address:** 0x100a0038
- **Size:** 336 bytes

Iterates over all tiles. For each ocean tile (terrain 2):
- If any neighbor is open land (7) -> convert to shore (3)
- If any neighbor is forest (5) -> convert to shore (3)
- If any neighbor is mountain (6) -> convert to shore (3)

This creates a coastal fringe around land masses.

---

## Phase 3: City Placement (FUN_100a3a80)

### FUN_100a3a80 -- PlaceCitiesAndRoads
- **Address:** 0x100a3a80
- **Size:** 76 bytes

**Algorithm:**
```
Reset city counter at offset 0x348 to 0
PlacePlayerCities()         // FUN_100a2760
PlaceNeutralCities()        // FUN_100a28dc
AssignCityAlliances()       // FUN_100a2a58
GenerateRoadsBetweenCities() // FUN_100a33ac
SmoothTerrainAroundCities()  // FUN_100a35cc
EnsureCityCoastalAccess()    // FUN_100a39ac
```

### FUN_100a2760 -- PlacePlayerCities
- **Address:** 0x100a2760
- **Size:** 380 bytes

**Algorithm:**
```
for i = 0 to config.playerCityCount - 1:   // offset 0x34
    repeat:
        x = dice(1, 112, -1)    // random x coordinate
        y = dice(1, 156, -1)    // random y coordinate
    until terrain[x][y] == 7    // find open land
    terrain[x][y] = 6           // place mountain (city marker initially 6)
    Record city at city_array[cityIndex]:
        city.x = x
        city.y = y
        city.type = 2           // player-controlled
        city.alliance = 0
    cityIndex++
```

**Dice rolls:**
- `dice(1, 0x70, -1)` = random X in [0, 111]
- `dice(1, 0x9C, -1)` = random Y in [0, 155]

### FUN_100a28dc -- PlaceNeutralCities
- **Address:** 0x100a28dc
- **Size:** 380 bytes

Identical structure to PlacePlayerCities but:
- Reads count from offset 0x36 (neutral city count)
- Sets city.type = 1 (neutral)
- Sets terrain to 5 (forest) instead of 6

### FUN_100a2a58 -- AssignCityAlliances
- **Address:** 0x100a2a58
- **Size:** 616 bytes

For each city, assigns allied/nearby cities:
- Neutral cities (type 1): allies = dice(1, 2, -1) -> 0 or 1 allies
- Player cities (type 2): allies = dice(1, 4, -1) -> 0 to 3 allies
- Each ally is chosen as the closest unlinked city, using FUN_1009eb70 (Chebyshev distance)

### FUN_100a33ac -- GenerateRoadsBetweenCities
- **Address:** 0x100a33ac
- **Size:** 544 bytes

For each city:
- If type 1 (neutral) and no allies: builds road outward from city (FUN_100a31d8)
- If type 1 with allies: builds roads to allied neutral cities (FUN_100a3280)
- If type 2 (player) and no allies: builds standalone road (FUN_100a3304)
- If type 2 with allies: builds roads connecting to allies (FUN_100a32b8)

### FUN_100a35cc -- SmoothTerrainAroundCities
- **Address:** 0x100a35cc
- **Size:** 992 bytes

Two passes:
1. **Fill enclosed areas:** If a land tile (7) has all 4 cardinal neighbors as mountain (6), convert to mountain. Same for forest (5).
2. **Ensure coastal access:** If a mountain tile is next to shore (3), convert it back to open land (7).
3. **Fix diagonal gaps:** Scans for diagonal mountain patterns with gaps, uses dice(1, 10, 0) to randomly fill in the gap (< 6 = fill one direction, >= 6 = fill the other).

### FUN_100a39ac -- EnsureCityCoastalAccess
- **Address:** 0x100a39ac
- **Size:** 212 bytes

Ensures every non-mountain/forest tile adjacent to a mountain tile gets converted to forest (5), creating a transition zone. Only runs if FUN_1002b83c returns non-zero (land connectivity check).

---

## Phase 4: Mountain/Forest Chains (FUN_100abcec)

### FUN_100abcec -- PlaceMountainForestChains
- **Address:** 0x100abcec
- **Size:** 160 bytes

**Algorithm:**
```
for i = 0 to config.additionalMountains:   // offset 0x40
    DrawTerrainChain(0)                     // FUN_100ab368(0) = mountain-to-ocean
for i = 0 to config.additionalForests:      // offset 0x3E
    DrawTerrainChain(1)                     // FUN_100ab368(1) = forest-to-ocean
SmoothMountainRegions()                     // FUN_100ab9e4
SmoothForestRegions()                       // FUN_100abb68
EnsureCityCoastalAccess()                   // FUN_100a39ac
```

### FUN_100ab368 -- DrawTerrainChain
- **Address:** 0x100ab368
- **Size:** 1660 bytes
- **Parameters:** `(short chainType)` -- 0=mountain, 1=forest

**Algorithm:**
```
// Pick two random endpoints
if chainType == 0:  // Mountain chain
    Pick random start on land (terrain 5 or 6):
        repeat up to 200 times:
            x = dice(1, 112, -1), y = dice(1, 156, -1)
        until terrain is forest(5) or mountain(6)
    Pick random end on ocean (terrain 2 or 3):
        repeat up to 200 times:
            x = dice(1, 112, -1), y = dice(1, 156, -1)
        until terrain is ocean(2) or shore(3)
else:  // Forest chain (crosses entire map)
    x_start = 0, y_start = dice(1, 156, -1)
    x_end = 111, y_end = dice(1, 156, -1)

// Walk from start toward end, carving terrain
while not reached end:
    Calculate direction vector toward end
    Find direction index in 8-direction table
    Set current tile to ocean (2)
    Also set perpendicular tiles to ocean (2)
    If chainType == 1, set tiles at 2x perpendicular distance to ocean too
    If dice(1, 4, 0) > 3: change direction slightly (meander)
    Advance position
```

**Dice rolls in FUN_100ab368:**
- `dice(1, 0x70, -1)` -- random X coordinate for chain endpoints
- `dice(1, 0x9C, -1)` -- random Y coordinate for chain endpoints
- `dice(1, 4, 0)` -- meander probability (25% chance to drift)

### FUN_100ab9e4 -- SmoothMountainRegions
- **Address:** 0x100ab9e4
- **Size:** 384 bytes

Scans all interior tiles (not on edges). If a forest tile (5) has 3+ neighboring mountains (6), promote it to mountain (6).

### FUN_100abb68 -- SmoothForestRegions
- **Address:** 0x100abb68
- **Size:** 384 bytes

Scans all interior tiles. If an open land tile (7) has 3+ neighboring forests (5), promote it to forest (5).

---

## Phase 5: River/Water Channels (FUN_100a9c08)

### FUN_100a9c08 -- PlaceRiverWaterChannels
- **Address:** 0x100a9c08
- **Size:** 216 bytes

**Algorithm:**
```
// Cut water channels from forest/mountain to ocean
for i = 0 to config.forestChainCount:    // offset 0x3A
    CutWaterChannel(0, 1, 0)             // FUN_100a8d88 - thin channel
for i = 0 to config.mountainChainCount:  // offset 0x38
    CutWaterChannel(1, 1, 0)             // FUN_100a8d88 - wide channel
ErodeLandTiles()                         // FUN_100a9628
ExpandCoastalTiles()                     // FUN_100a0038
SmoothTerrainAroundCities()              // FUN_100a35cc
EnsureCityCoastalAccess()                // FUN_100a39ac
ErodeLandTiles()                         // FUN_100a9628
ExpandCoastalTiles()                     // FUN_100a0038
```

### FUN_100a8d88 -- CutWaterChannel
- **Address:** 0x100a8d88
- **Size:** 2096 bytes
- **Parameters:** `(short channelWidth, short stopAtOcean, short extraWidth)`

**Algorithm:**
```
if extraWidth == 0:
    // Pick random start on land, random end on ocean
    start = random tile with terrain 5 or 6 (up to 200 tries)
    end = random tile with terrain 2 or 3 (up to 200 tries)
else:
    // Use fixed x=0 and x=111 endpoints
    start.x = 0, start.y = dice(1, 156, -1)
    end.x = 111, end.y = dice(1, 156, -1)

while not reached end:
    Calculate direction toward end
    Find perpendicular directions (dir+1 and dir+7, mod 8)

    if stopAtOcean and next tile is ocean(2):
        // Stop if we've crossed water once already
        if crossedWaterBefore: return
        crossedWaterBefore = true

    if channelWidth == 0:
        // Set current and 2 perpendicular tiles to ocean(2)
        Set tile at current pos to ocean(2)
        Set tile at perpendicular1 to ocean(2)
        Set tile at perpendicular2 to ocean(2)
    else:
        // Set current and 4 perpendicular tiles (wider channel)
        Set tile at current pos to ocean(2)
        Set tile at perp1 to ocean(2)
        Set tile at perp2 to ocean(2)
        Set tile at 2*perp1 to ocean(2)
        Set tile at 2*perp2 to ocean(2)
        if extraWidth:
            Set tile at 3*perp1 to ocean(2)
            Set tile at 3*perp2 to ocean(2)

    Advance position
    if dice(1, 4, 0) > 3: meander
```

### FUN_100a9628 -- ErodeLandTiles
- **Address:** 0x100a9628
- **Size:** 1504 bytes

Three-pass erosion:
1. **Coastal erosion:** If a land tile (7, 5, or 6) has 3+ ocean/shore neighbors (2 or 3), convert to ocean (2)
2. **Isolated shore removal:** If a shore tile (3) has no adjacent land (7), forest (5), or mountain (6), convert to ocean (2)
3. **Diagonal gap filling:** Scans for diagonal water patterns that create 1-tile peninsulas. Uses dice(1, 10, 0) to randomly break the diagonal (< 5 = one side, >= 5 = other side)

---

## Phase 6: Land Mass Generation (FUN_100a271c)

### FUN_100a271c -- GenerateLandMasses
- **Address:** 0x100a271c
- **Size:** 68 bytes

**Algorithm:**
```
CalculateLandTarget()        // FUN_100a1d8c
while not enough land:
    GrowLandBlob()           // FUN_100a1e50
    FillEnclosedWater()      // FUN_100a2310
    Check if landCount >= landTarget
```

### FUN_100a1d8c -- CalculateLandTarget
- **Address:** 0x100a1d8c
- **Size:** 156 bytes

```
landTileCount = 0
for all tiles:
    if terrain is 7(land), 5(forest), or 6(mountain):
        landTileCount++
targetLand = (landTileCount / 100) * waterPercentParam  // offset 0x3C
currentLandCount = 0
```

### FUN_100a1e28 -- CheckLandTarget
- **Address:** 0x100a1e28
- **Size:** 40 bytes

Returns 1 if `currentLandCount >= targetLand`, else 0.

### FUN_100a1e50 -- GrowLandBlob
- **Address:** 0x100a1e50
- **Size:** 1216 bytes

**This is the core land generation algorithm.** It places a randomly-shaped "continent blob" of open land.

**Algorithm:**
```
// Find random starting tile on open land (terrain 7)
repeat:
    x = dice(1, 112, -1)
    y = dice(1, 156, -1)
until terrain[x][y] == 7

// Determine blob size/shape
roll = dice(1, 100, 0)
if roll < 65:        // 64% chance: small blob
    centerX = x, centerY = y
    for i = 0 to 7:
        branchLength[i] = dice(1, 8, 2)  // 2-9 tiles per branch
    branchGrowth = 4
else:                // 36% chance: large blob
    centerX = x, centerY = y
    for i = 0 to 7:
        branchLength[i] = dice(1, 10, 5)  // 5-14 tiles per branch
    branchGrowth = 6

// Place center tile as grassland
terrain[centerX][centerY] = 4    // grassland
landCount++

// Grow 8 branches outward from center
for direction = 0 to 7:
    currentPos = (centerX, centerY)
    for step = 0 to branchLength[direction] - 1:
        // Advance in primary direction
        currentPos += directionOffset[direction]
        ClampToMapBounds(currentPos)
        if terrain[currentPos] == 7:  // if open land
            terrain[currentPos] = 4   // convert to grassland
            landCount++

        // Also grow perpendicular sub-branches
        perpDir1 = (direction + 2) % 8
        perpDir2 = (direction + 6) % 8

        // Decreasing branch widths as we extend
        subBranch1Length = dice(1, branchGrowth - step/2, growth - step/4)
        subBranch2Length = dice(1, branchGrowth - step/2, growth - step/3)

        // Grow sub-branch 1
        subPos = currentPos
        for j = 0 to subBranch1Length - 1:
            subPos += directionOffset[perpDir1]
            ClampToMapBounds(subPos)
            if terrain[subPos] == 7:
                terrain[subPos] = 4
                landCount++

        // Grow sub-branch 2
        subPos = currentPos
        for j = 0 to subBranch2Length - 1:
            subPos += directionOffset[perpDir2]
            ClampToMapBounds(subPos)
            if terrain[subPos] == 7:
                terrain[subPos] = 4
                landCount++
```

**Dice rolls in GrowLandBlob:**
- `dice(1, 0x70, -1)` -- random X for blob center
- `dice(1, 0x9C, -1)` -- random Y for blob center
- `dice(1, 100, 0)` -- blob size selector (< 65 = small, >= 65 = large)
- `dice(1, 8, 2)` -- small blob branch length (2-9)
- `dice(1, 10, 5)` -- large blob branch length (5-14)
- Variable dice for sub-branch lengths (decreasing with distance)

### FUN_100a2310 -- FillEnclosedWater
- **Address:** 0x100a2310
- **Size:** 1036 bytes

**Algorithm:**
```
// Pass 1: Fill water tiles surrounded by grassland
for x = 0 to 111:
    for y = 0 to 155:
        if terrain[x][y] == 7 (open land):
            count neighbors that are grassland(4)
            if count >= 3:
                terrain[x][y] = 4  // fill to grassland
                landCount++

// Pass 2: Fix diagonal gaps in grassland
for x = 1 to 110:
    for y = 1 to 154:
        if terrain[x][y] == 4 (grassland):
            // Check for diagonal connection patterns
            if SE and NW are grassland but NE is not:
                if dice(1, 10, 0) < 5:
                    fill NE gap
                else:
                    fill SW gap
            // Similar for other diagonal patterns
```

---

## Phase 7: Swamp Clusters (FUN_100a66a8)

### FUN_100a66a8 -- PlaceSwampClusters
- **Address:** 0x100a66a8
- **Size:** 96 bytes

```
numSwamps = dice(1, 3, 0)    // 0-2 swamp clusters
for i = 0 to numSwamps - 1:
    PlaceSwampCluster()        // FUN_100a64c0
```

### FUN_100a64c0 -- PlaceSwampCluster
- **Address:** 0x100a64c0
- **Size:** 488 bytes

**Algorithm:**
```
attempts = 0
found = false
repeat:
    x = dice(1, 0x66, 5)   // x in [5, 107] (interior only)
    y = dice(1, 0x92, 5)   // y in [5, 151] (interior only)
    if terrain[x][y] == 7 (open land):
        if attempts < 4:
            // Verify 2x2 area doesn't touch shore
            if no shore(3) neighbors around (x,y), (x+1,y), (x,y+1), (x+1,y+1):
                found = true
            attempts++
        else:
            found = true    // give up finding perfect spot
until found

terrain[x][y] = 8   // swamp
ScatterSwampTiles(x, y)
ScatterSwampTiles(x+1, y+1)
ScatterSwampTiles(x-1, y-1)
ScatterSwampTiles(x-1, y+1)
ScatterSwampTiles(x+1, y-1)
```

### FUN_100a6364 -- ScatterSwampTiles
- **Address:** 0x100a6364
- **Size:** 348 bytes

```
numTiles = dice(1, 5, 3)   // 3-7 extra swamp tiles
for i = 0 to numTiles - 1:
    dir = dice(1, 8, -1)       // random direction
    dist = dice(1, 3, 0)       // distance 0-2
    pos = center + direction[dir] * dist
    // Also random Y offset
    dir2 = dice(1, 8, -1)
    dist2 = dice(1, 3, 0)
    pos.y += direction[dir2].dy * dist2

    ClampToMapBounds(pos)
    if terrain[pos] == 7:
        terrain[pos] = 8     // swamp
```

---

## Phase 8: City Registration and Neutral Cities (FUN_100a6ae8)

### FUN_100a6ae8 -- RegisterCitiesAndAddNeutral
- **Address:** 0x100a6ae8
- **Size:** 128 bytes

```
Reset city list (offset 0x1602 = 0)
ScanForExistingCities()        // FUN_100a6708
InitializeArmyProduction()     // FUN_10049e68
InitializePlayerData()         // FUN_10025f98
// Add more cities to reach target count
startCity = config.initialCityCount  // offset 0xA84
while startCity < config.totalCities:  // offset 0x2A
    PlaceNeutralCityOnLand()   // FUN_100a67e0
    startCity++
```

### FUN_100a6708 -- ScanForExistingCities
- **Address:** 0x100a6708
- **Size:** 216 bytes

Scans all tiles for terrain code 10 (city) that don't have a city to their north or west (to avoid double-counting 2x2 cities). Records each city's position in the city array at offset 0x1602+.

### FUN_100a67e0 -- PlaceNeutralCityOnLand
- **Address:** 0x100a67e0
- **Size:** 776 bytes

**Algorithm:**
```
attempts = 0
found = false
repeat:
    x = dice(1, 0x66, 5)    // x in [5, 107]
    y = dice(1, 0x92, 5)    // y in [5, 151]

    valid = true
    for each of 4 quadrants (NW, NE, SW, SE):
        // Check that all tiles in 2x2 area are on valid land
        if terrain is shore(3), ocean(2), city(10), mountain(6), or forest(5):
            valid = false
        // Check no existing city within distance 1
        if HasNeighborWithTerrain(x + offset, y + offset, 10):
            valid = false
        // Check no existing city within distance 1 shifted
        if HasNeighborWithTerrain(x + offset + 1, y + offset + 1, 10):
            valid = false
        if HasNeighborWithTerrain(x + offset - 1, y + offset - 1, 10):
            valid = false

    if valid:
        if attempts < 4:
            // Also check for shore access (reachable by sea)
            if HasNeighborWithTerrain(any quadrant corner, 3):
                found = true
            attempts++
        else:
            found = true  // place anyway after 4 attempts

// Place 2x2 city footprint
for each of 4 quadrants:
    terrain[x + offset_x][y + offset_y] = 10  // city
cityList.add(x, y)
cityCount++
```

---

## Phase 9: Ruins Placement (FUN_100a6f38)

### FUN_100a6f38 -- PlaceRuins
- **Address:** 0x100a6f38
- **Size:** 784 bytes

Places 40 (0x28) ruins across the map.

```
ruinsCount = 40
for i = 0 to ruinsCount - 1:
    UpdateProgress(proportional to i)
    FindRuinsLocation(7, &x, &y)   // FUN_100a6b68 -- find on open land
    terrain[x][y] = 11             // mark as ruins

    // Generate ruins name
    if specialRuinsType == 1:
        nameIndex = dice(1, 10, -1)
        name = format(template, nameTable[nameIndex])
    else:
        cityNameIndex = dice(1, numCityNames, -1)
        adj1Index = dice(1, 10, -1)
        adj2Index = dice(1, 10, -1)
        name = format(cityName[cityNameIndex], adjective1[adj1Index], adjective2[adj2Index])

    // Store name in string buffer
    Append name to ruinsNameBuffer
```

### FUN_100a6b68 -- FindRuinsLocation
- **Address:** 0x100a6b68
- **Size:** 976 bytes
- **Parameters:** `(short terrainType, short* outX, short* outY)`

Uses a rotating sector system to distribute ruins evenly:
```
sector = globalSectorCounter  // rotates 0-15
// Try 50 times in preferred sector
for attempt = 1 to 50:
    // Calculate sector bounds
    x = dice(1, 0x14, sectorBaseX + 3)
    y = dice(1, 0x1F, sectorBaseY + 3)
    if terrain[x][y] == terrainType and no nearby city/ruins:
        if no ruins within distance 3 in all 4 directions:
            return (x, y)

// Fallback: try 50 random locations
for attempt = 1 to 50:
    x = dice(1, 0x66, 5)
    y = dice(1, 0x92, 5)
    if terrain[x][y] == terrainType and no nearby city/ruins:
        return (x, y)

// Last resort: any valid terrain
for attempt = 1 to 50:
    x = dice(1, 0x66, 5)
    y = dice(1, 0x92, 5)
    if terrain[x][y] is not city(10) and not ruins(11):
        return (x, y)

sectorCounter = (sectorCounter + 1) % 16
```

**Dice rolls in FindRuinsLocation:**
- `dice(1, 0x10, -1)` -- initial sector selection
- `dice(1, 0x14, base+3)` -- X within sector
- `dice(1, 0x1F, base+3)` -- Y within sector
- `dice(1, 0x66, 5)` -- fallback X
- `dice(1, 0x92, 5)` -- fallback Y

---

## Phase 10: Road Network (FUN_100aafb8)

### FUN_100aafb8 -- GenerateRoadNetwork
- **Address:** 0x100aafb8
- **Size:** 628 bytes

**Algorithm:**
```
1. Allocate pathfinding buffer (700 bytes)
2. Initialize road layer: clear road bits and overlay data for all tiles
3. FUN_100a49cc() -- build road connectivity graph
4. Clear visited flags
5. Iteratively find and build road segments:
    roadSegment = FindNextRoadSegment(buffer, endpoints, length)
    progressStep = 4
    while roadSegment exists:
        if dice(1, 3, -1) == 0 and progressStep < 10:
            progressStep++
            UpdateProgress(progressStep + 80)
        ProcessRoadAnimation()
        BuildRoadSegment(buffer, endpoint1, endpoint2)
        roadSegment = FindNextRoadSegment(buffer, endpoints, length)
6. Free pathfinding buffer
7. Clean up: for city and ruins tiles, clear road overlay data
```

---

## Phase 11: Finalization (FUN_100a6204)

### FUN_100a6204 -- FinalizeAndSave
- **Address:** 0x100a6204
- **Size:** 148 bytes

```
AssignTerrainGraphics()       // FUN_100a4ae8 -- convert terrain codes to tile graphics
UpdateProgress(92%)
RegisterCities()              // FUN_100a7248 -- scan for city tiles, assign production
AssignPlayerStartPositions()  // FUN_100ab334
UpdateProgress(94%)
AssignPlayerHomeCities()      // FUN_100a88d0 (FAILED to decompile, 1208 bytes)
UpdateProgress(96%)
PlaceHeroesOnMap()            // FUN_100a4e0c -- create hero units
UpdateProgress(98%)
SaveMapToResources()          // FUN_100a52b8 -- write MAP, RD, CTY, SPC, ITM, NAME, SCEN
SaveScenarioData()            // FUN_100a6060 -- write SCN resource
```

### FUN_100a4ae8 -- AssignTerrainGraphics
- **Address:** 0x100a4ae8
- **Size:** 804 bytes

Iterates all tiles. For each tile with a non-zero top-5-bit graphic index:
- Calls FUN_100a4a00 to look up the graphic assignment
- If the lookup indicates negative (< 0), randomly assigns one of two terrain variants:
  - dice(1, 10, 0) < 6: use "light" variant (offset 0x624)
  - else: use "dark" variant (offset 0x5D8)
  - Also sets terrain to 7 (open land)
- Otherwise: uses the direct graphic lookup (offset 0x364)

Then places random terrain features:
- dice(1, 10, 10) = 10-19 random "special feature 1" placements at graphic index 0x11
- dice(1, 10, 10) = 10-19 random "special feature 2" placements at graphic index 0x10
Both features are placed on specific terrain indices (land type 2 and 1 respectively), trying up to 10000 times to find valid locations.

### FUN_100a7248 -- RegisterCities
- **Address:** 0x100a7248
- **Size:** 236 bytes

Scans all tiles for graphic index 0x60 (city graphic). For each city found:
```
cityList[cityIndex].x = tileX
cityList[cityIndex].y = tileY
cityList[cityIndex].defenseModifier = 0x0F
cityList[cityIndex].production = dice(1, 3, 2)  // 2-4
cityIndex++
```

### FUN_100ab334 -- AssignPlayerStartPositions
- **Address:** 0x100ab334
- **Size:** 52 bytes

```
AssignStartingArmies()        // FUN_100a7544
AssignPlayerColors()          // FUN_100ab22c
RollPlayerGold()              // FUN_100ab2c4
```

### FUN_100ab2c4 -- RollPlayerGold
- **Address:** 0x100ab2c4
- **Size:** 108 bytes

```
for player = 0 to 7:
    gold[player] = dice(3, 50, 20)  // 3d50+20 = 23 to 170 gold
```

### FUN_100ab22c -- AssignPlayerColors
- **Address:** 0x100ab22c
- **Size:** 148 bytes

```
for player = 0 to 7:
    colorIndex = dice(1, 5, -1)  // random from 5 color sets
    playerColor[player] = colorTable[player * 100 + colorIndex * 16 + 0x764]
```

### FUN_100a4e0c -- PlaceHeroesOnMap
- **Address:** 0x100a4e0c
- **Size:** 1196 bytes

```
numHeroes = dice(1, 30, 40)   // 40-69 heroes to place (1d30+40)
Allocate hero buffer (numHeroes * 0x68 + 2 bytes)

for i = 0 to numHeroes - 1:
    // Find valid location for hero
    repeat:
        x = dice(1, 112, -1)
        y = dice(1, 156, -1)
    until tile is land type (terrain lookup == 7) and
          no nearby city(10) or hero(9) and
          no overlay graphic

    Clear tile overlay
    // Determine hero stats
    roll = dice(1, 10, 0)
    if roll < 4 and presetHeroesRemaining > 0:
        // Use preset hero template from offset 0x18B2
        Copy name and stats from template
        presetHeroIndex++
    else:
        // Generate random hero
        Find nearest city
        Calculate distance to nearest city
        Name = format(cityName, distance, directionToCity)

    // Save as SGN (sign/encounter) resource
```

### FUN_100a52b8 -- SaveMapToResources
- **Address:** 0x100a52b8
- **Size:** 3496 bytes

Saves the generated map to the scenario file format. Creates and writes the following Mac resources:
- `MAP ` -- tile graphics buffer (0x8880 bytes)
- `RD  ` -- road/overlay buffer (0x4440 bytes)
- `CTY ` -- city data
- `SPC ` -- special location data
- `ITM ` -- item/treasure data
- `NAME` -- scenario name
- `SCEN` -- scenario metadata (player config, city count, etc.)
- `PICT` -- scenario preview image (resource ID 0x3EB = 1003)
- `SGN ` -- hero encounter data

---

## Utility Functions

### FUN_1005f230 -- DiceRoll
- **Address:** 0x1005f230
- **Size:** 252 bytes
- **Signature:** `int DiceRoll(int numDice, int dieSize, int bonus)`
- Returns: `sum of numDice d(dieSize) + bonus`
- Example: `DiceRoll(1, 156, -1)` = random value 0-155

### FUN_10051dc8 -- ClampToMapBounds
- **Address:** 0x10051dc8
- **Size:** 84 bytes
- Clamps x to [0, 111] and y to [0, 155]

### FUN_10051e1c -- RandomScatter
- **Address:** 0x10051e1c
- **Size:** 380 bytes
- **Parameters:** `(short *x, short *y, short range, short snapToEdge)`
- Randomly offsets x and y by `dice(1, range, 0) * dice(1, 3, -2)` (positive or negative)
- If `snapToEdge` and dice(1, 100, 0) < 30: snaps to nearest map edge

### FUN_1009eb70 -- ChebyshevDistance
- **Address:** 0x1009eb70
- **Size:** 124 bytes
- Returns max(|x1-x2|, |y1-y2|) -- Chebyshev/chessboard distance

### FUN_1009ebec -- CalculateDirectionVector
- **Address:** 0x1009ebec
- **Size:** 780 bytes
- Given two packed coordinate pairs, returns a unit direction vector (dx, dy) where each component is -1, 0, or 1

### FUN_1009ffa4 -- HasNeighborWithTerrain
- **Address:** 0x1009ffa4
- **Size:** 148 bytes
- Checks all 8 neighbors of (x, y); returns 1 if any has the specified terrain code

### FUN_1009ff14 -- HasNeighborOnLand
- **Address:** 0x1009ff14
- **Size:** 144 bytes
- Returns 1 if any of 8 neighbors is open land (terrain 7)

### FUN_100514d8 -- UpdateProgressBar
- **Address:** 0x100514d8
- **Size:** varies
- Updates the progress dialog with a percentage value

### FUN_10051d60 -- NotifyTileChanged (NOP)
- **Address:** 0x10051d60
- **Size:** 4 bytes
- Empty function (just `return`). Likely a debug/render callback that was compiled out.

---

## Complete Dice Roll Catalog

### Phase 2: Player Start Zones
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, range, 0) * dice(1, 3, -2)` | Random scatter | Player seed point perturbation |
| `dice(1, 100, 0)` | 0-99 | Edge snap probability (< 30 = snap) |
| `dice(1, 3, 0)` | 1-3 | Direction choice during zone expansion |
| `dice(1, 5, idx-2)` | Variable | Random perpendicular direction |

### Phase 3: City Placement
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 0x70, -1)` | 0-111 | Random X for player/neutral city |
| `dice(1, 0x9C, -1)` | 0-155 | Random Y for player/neutral city |
| `dice(1, 2, -1)` | 0-1 | Neutral city ally count |
| `dice(1, 4, -1)` | 0-3 | Player city ally count |
| `dice(1, 10, 0)` | 1-10 | Diagonal gap fill direction (< 6 vs >= 6) |

### Phase 4: Mountain/Forest Chains
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 0x70, -1)` | 0-111 | Chain endpoint X |
| `dice(1, 0x9C, -1)` | 0-155 | Chain endpoint Y |
| `dice(1, 4, 0)` | 1-4 | Meander probability (> 3 = meander) |

### Phase 5: Water Channels
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 0x70, -1)` | 0-111 | Channel start/end X |
| `dice(1, 0x9C, -1)` | 0-155 | Channel start/end Y |
| `dice(1, 10, 0)` | 1-10 | Diagonal erosion direction |

### Phase 6: Land Mass Generation
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 0x70, -1)` | 0-111 | Blob center X |
| `dice(1, 0x9C, -1)` | 0-155 | Blob center Y |
| `dice(1, 100, 0)` | 1-100 | Blob size: < 65 = small, >= 65 = large |
| `dice(1, 8, 2)` | 2-9 | Small blob branch length |
| `dice(1, 10, 5)` | 5-14 | Large blob branch length |
| Variable sub-branch dice | Decreasing | Sub-branch widths diminish with distance |
| `dice(1, 10, 0)` | 1-10 | Fill diagonal gaps direction |

### Phase 7: Swamp Clusters
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 3, 0)` | 0-2 | Number of swamp clusters |
| `dice(1, 0x66, 5)` | 5-107 | Swamp cluster X |
| `dice(1, 0x92, 5)` | 5-151 | Swamp cluster Y |
| `dice(1, 5, 3)` | 3-7 | Scatter tile count per sub-cluster |
| `dice(1, 8, -1)` | 0-7 | Random direction for scatter |
| `dice(1, 3, 0)` | 0-2 | Scatter distance |

### Phase 8: Neutral City Placement
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 0x66, 5)` | 5-107 | City placement X (interior) |
| `dice(1, 0x92, 5)` | 5-151 | City placement Y (interior) |

### Phase 9: Ruins
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 0x10, -1)` | 0-15 | Initial sector for ruins distribution |
| `dice(1, 0x14, base)` | Variable | X within sector |
| `dice(1, 0x1F, base)` | Variable | Y within sector |
| `dice(1, 0x66, 5)` | 5-107 | Fallback ruins X |
| `dice(1, 0x92, 5)` | 5-151 | Fallback ruins Y |
| `dice(1, 10, -1)` | 0-9 | Ruins name index |
| `dice(1, numNames, -1)` | Variable | City name selection for ruins |

### Phase 10: Road Network
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 3, -1)` | 0-2 | Road building progress step |

### Phase 11: Finalization
| Call | Expression | Purpose |
|------|-----------|---------|
| `dice(1, 10, 0)` | 1-10 | Terrain graphic variant (< 6 = light, >= 6 = dark) |
| `dice(1, 10, 10)` | 10-19 | Number of special terrain features (x2) |
| `dice(1, 0x70, -1)` | 0-111 | Random X for special features |
| `dice(1, 0x9C, -1)` | 0-155 | Random Y for special features |
| `dice(1, 3, 2)` | 2-4 | City production level |
| `dice(3, 50, 20)` | 23-170 | Player starting gold |
| `dice(1, 5, -1)` | 0-4 | Player color set index |
| `dice(1, 30, 40)` | 40-69 | Number of heroes/encounters to place |
| `dice(1, 10, 0)` | 1-10 | Hero type (< 4 = preset, >= 4 = random) |

---

## Configurable Parameters

The user controls 4 parameters via the Random Map dialog, each selecting from a lookup table that modifies base template values:

### Parameter 1: Water Style (param_1 / local_38[0])
- Lookup table at offset 0x52 (7 entries, 2 bytes each)
- Modifies offset 0x38 (mountain chain count) and 0x3A (forest chain count)
- Lower values = more land, higher values = more ocean

### Parameter 2: City Count (param_2 / local_38[1])
- Lookup table at offset 0x44 (7 entries, 2 bytes each)
- Modifies offset 0x34 (player cities) and 0x36 (neutral cities)
- Directly controls density of cities

### Parameter 3: Terrain Style (param_3 / local_38[2])
- Lookup table at offset 0x6E (7 entries, 2 bytes each)
- Modifies offset 0x2A (total city target for Phase 8)
- Affects overall terrain mix

### Parameter 4: Player Count (param_4 / local_38[3])
- Lookup table at offset 0x60 (7 entries, 2 bytes each)
- Modifies offset 0x3C (water/land percentage parameter)
- Controls player start zone expansion

Each parameter can be set to value 7 (="random"), in which case: `value = dice(1, 7, -1)` selects a random index 0-6.

---

## Direction Table

The 8-direction table is stored at `*piRam101175f4 + direction * 4`:
- Offset 0xBC: dx (short)
- Offset 0xBE: dy (short)

Standard hex/square directions (indices 0-7):
```
Index  Direction    dx   dy
  0    East          1    0
  1    SE            1    1
  2    South         0    1
  3    SW           -1    1
  4    West         -1    0
  5    NW           -1   -1
  6    North         0   -1
  7    NE            1   -1
```

Perpendicular pairs used for chain/channel width:
- Primary direction d: perpendiculars are (d+2)%8 and (d+6)%8
- Example: if walking East (0), perpendiculars are South (2) and North (6)

---

## Function Address Summary

| Address | Size | Proposed Name | Phase |
|---------|------|---------------|-------|
| 0x100577f0 | 520 | HandleRandomMapDialog | Entry |
| 0x100517f8 | 1384 | SetupAndGenerateRandomMap | Setup |
| 0x100516c0 | 312 | GenerateRandomMap | Orchestrator |
| 0x100a6298 | 204 | LoadScenarioTemplate | Phase 1 |
| 0x100515f4 | 204 | InitializeMapToOcean | Phase 1 |
| 0x100a01e8 | 172 | PlacePlayerStartZones | Phase 2 |
| 0x1009e81c | 516 | PlacePlayerSeedPoint | Phase 2 |
| 0x1009ea20 | 336 | SortStartPointsByAngle | Phase 2 |
| 0x1009eef8 | 844 | ExpandPlayerZone | Phase 2 |
| 0x1009f864 | 620 | ConnectAdjacentZones | Phase 2 |
| 0x1009fc58 | 700 | ConvertToTerrainCodes | Phase 2 |
| 0x100a0038 | 336 | ExpandCoastalTiles | Phase 2/5 |
| 0x100a018c | 92 | AddExtraLandPatches | Phase 2 |
| 0x100a3a80 | 76 | PlaceCitiesAndRoads | Phase 3 |
| 0x100a2760 | 380 | PlacePlayerCities | Phase 3 |
| 0x100a28dc | 380 | PlaceNeutralCities | Phase 3 |
| 0x100a2a58 | 616 | AssignCityAlliances | Phase 3 |
| 0x100a33ac | 544 | GenerateRoadsBetweenCities | Phase 3 |
| 0x100a35cc | 992 | SmoothTerrainAroundCities | Phase 3 |
| 0x100a39ac | 212 | EnsureCityCoastalAccess | Phase 3/4 |
| 0x100abcec | 160 | PlaceMountainForestChains | Phase 4 |
| 0x100ab368 | 1660 | DrawTerrainChain | Phase 4 |
| 0x100ab9e4 | 384 | SmoothMountainRegions | Phase 4 |
| 0x100abb68 | 384 | SmoothForestRegions | Phase 4 |
| 0x100a9c08 | 216 | PlaceRiverWaterChannels | Phase 5 |
| 0x100a8d88 | 2096 | CutWaterChannel | Phase 5 |
| 0x100a9628 | 1504 | ErodeLandTiles | Phase 5 |
| 0x100a271c | 68 | GenerateLandMasses | Phase 6 |
| 0x100a1d8c | 156 | CalculateLandTarget | Phase 6 |
| 0x100a1e28 | 40 | CheckLandTarget | Phase 6 |
| 0x100a1e50 | 1216 | GrowLandBlob | Phase 6 |
| 0x100a2310 | 1036 | FillEnclosedWater | Phase 6 |
| 0x100a66a8 | 96 | PlaceSwampClusters | Phase 7 |
| 0x100a64c0 | 488 | PlaceSwampCluster | Phase 7 |
| 0x100a6364 | 348 | ScatterSwampTiles | Phase 7 |
| 0x100a6ae8 | 128 | RegisterCitiesAndAddNeutral | Phase 8 |
| 0x100a6708 | 216 | ScanForExistingCities | Phase 8 |
| 0x100a67e0 | 776 | PlaceNeutralCityOnLand | Phase 8 |
| 0x100a6f38 | 784 | PlaceRuins | Phase 9 |
| 0x100a6b68 | 976 | FindRuinsLocation | Phase 9 |
| 0x100aafb8 | 628 | GenerateRoadNetwork | Phase 10 |
| 0x100a6204 | 148 | FinalizeAndSave | Phase 11 |
| 0x100a4ae8 | 804 | AssignTerrainGraphics | Phase 11 |
| 0x100a7248 | 236 | RegisterCities | Phase 11 |
| 0x100ab334 | 52 | AssignPlayerStartPositions | Phase 11 |
| 0x100ab2c4 | 108 | RollPlayerGold | Phase 11 |
| 0x100ab22c | 148 | AssignPlayerColors | Phase 11 |
| 0x100a88d0 | 1208 | AssignPlayerHomeCities | Phase 11 (FAILED decompile) |
| 0x100a4e0c | 1196 | PlaceHeroesOnMap | Phase 11 |
| 0x100a52b8 | 3496 | SaveMapToResources | Phase 11 |
| 0x100a6060 | 420 | SaveScenarioData | Phase 11 |
| 0x1005f230 | 252 | DiceRoll | Utility |
| 0x10051dc8 | 84 | ClampToMapBounds | Utility |
| 0x10051e1c | 380 | RandomScatter | Utility |
| 0x1009eb70 | 124 | ChebyshevDistance | Utility |
| 0x1009ebec | 780 | CalculateDirectionVector | Utility |
| 0x1009ffa4 | 148 | HasNeighborWithTerrain | Utility |
| 0x1009ff14 | 144 | HasNeighborOnLand | Utility |
| 0x1009fad4 | 388 | ShouldBeCoastal | Utility |
| 0x10051d60 | 4 | NotifyTileChanged (NOP) | Utility |
| 0x100514d8 | -- | UpdateProgressBar | Utility |

**Total code analyzed:** ~30,000 bytes across 55+ functions
