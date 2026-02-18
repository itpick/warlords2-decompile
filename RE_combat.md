# Warlords II Combat System - Reverse Engineering Analysis

## Table of Contents
1. [Overview and Architecture](#overview-and-architecture)
2. [Key Data Structures](#key-data-structures)
3. [Combat Initiation (FUN_10010b30)](#combat-initiation)
4. [Fight Order / Priority System (FUN_1000ffe0)](#fight-order-system)
5. [Army Pruning / Tactical AI (FUN_1001072c)](#army-pruning)
6. [Diplomacy Target Selection (FUN_1000df58)](#diplomacy-target-selection)
7. [Fight Results / Alliance Decision (FUN_10011804)](#fight-results)
8. [Siege Mechanics (FUN_1000f410, FUN_1000f064)](#siege-mechanics)
9. [Combat Display Pipeline (FUN_10007dd4)](#combat-display)
10. [The Dice Function (FUN_1005f230)](#dice-function)
11. [Complete Combat Formula](#complete-combat-formula)
12. [Appendix: Struct Field Maps](#appendix)

---

## 1. Overview and Architecture <a name="overview-and-architecture"></a>

The Warlords II combat system is fundamentally a **deterministic-with-randomness** stack-vs-stack resolution system. When an army stack moves into a hex occupied by enemy units, combat is initiated. The system does NOT resolve individual unit-vs-unit fights with dice rolls in real time; instead, it calculates fight **ordering** (which units fight first), determines **diplomatic alignment** of third-party players, and then executes the battle as a series of unit placements on a 2D combat map.

### High-Level Call Chain

```
FUN_10007f78 (MapRefreshAndCombat)
  -> FUN_10007dd4 (CombatOrchestrator)
       -> FUN_10004c54 (BuildCombatMapTiles)
       -> FUN_10005b68 (SyncCombatMapWithMainMap)
       -> FUN_10005f90 (RenderCombatResults)
       -> FUN_10007c50 (CleanupCombatDisplay)

FUN_1000cafc (TurnPhase_DoFightResults)
  -> FUN_10011804 (DoFightResults - alliance/diplomacy decisions)
  -> FUN_100164e4 (ProcessFightOutcomes - hero/siege resolution)

FUN_10010b30 (ExecuteArmyCombat)
  -> FUN_1000ffe0 (CalculateFightOrder)
  -> FUN_1001072c (PruneExcessArmies / tactical AI)
  -> FUN_1000fc38 (RemoveDefeatedUnit)
  -> FUN_1000fba8 (RefreshMapAfterCombat)
```

### Global State Pointers

| Pointer | Description |
|---------|-------------|
| `piRam1011735c` | Main game state struct (hereafter `GameState`) |
| `piRam10117468` | Extended game/player data struct (hereafter `ExtState`) |
| `piRam10117358` | Map tile data (terrain, ownership, etc.) |
| `piRam10117360` | Unit/battle-piece array (each entry = 0x16 bytes) |
| `piRam10117364` | Army type definitions (each entry = 6 bytes) |
| `piRam101176e0` | Current selected unit pointer |
| `piRam1011742c` | Fog of war / visibility map |

---

## 2. Key Data Structures <a name="key-data-structures"></a>

### GameState Struct (at `*piRam1011735c`)

| Offset | Size | Field Name | Notes |
|--------|------|-----------|-------|
| +0x0060 | varies | `terrainMoveCost[9][29]` | Terrain movement cost table per terrain type |
| +0x00C0 | 2*8 | `playerCityType[8]` | 0=open field, 1=fortified, 2=castle |
| +0x00D0 | 2*8 | `playerIsAlive[8]` | 0=eliminated, non-zero=active |
| +0x0110 | 2 | `currentPlayerIndex` | Active player (0-7) |
| +0x0116 | 2 | `multiplayerMode` | Non-zero if multiplayer |
| +0x011C | 2 | `hasAlliances` | Non-zero if alliance system active |
| +0x011E | 2 | `hasHeroSystem` | Non-zero if heroes enabled |
| +0x0122 | 2*8 | `playerMorale[8]` | Morale per player |
| +0x0124 | 2 | `fogOfWarEnabled` | Non-zero if fog of war on |
| +0x0128 | 2 | `hasSiegeUnits` | Non-zero if siege weaponry exists |
| +0x0136 | 2 | `turnNumber` | Current turn (clamped min=1 in some checks) |
| +0x0138 | 2*8 | `playerExists[8]` | Whether each player slot is in use |
| +0x0148 | 2*8 | `playerFlags[8]` | Per-player flags |
| +0x015A | 2 | `isHumanPlayer` | Non-zero if current player is human |
| +0x0176 | 2 | `viewportTop` | Viewport Y top |
| +0x0178 | 2 | `viewportLeft` | Viewport X left |
| +0x017A | 2 | `viewportBottom` | Viewport Y bottom |
| +0x017C | 2 | `viewportRight` | Viewport X right |
| +0x017E | 2 | `cameraX` | Camera center X |
| +0x0180 | 2 | `cameraY` | Camera center Y |
| +0x0182 | 2 | `numBattlePieces` | Count of units on battle map |
| +0x0186+p*0x14 | 2 | `playerGold[p]` | Gold per player (stride 0x14) |
| +0x0194+p*0x14 | 2 | `playerCapitalX[p]` | Capital city X |
| +0x0196+p*0x14 | 2 | `playerCapitalY[p]` | Capital city Y |
| +0x0711 | varies | `terrainDefenseTable[]` | Terrain defense values (signed bytes, indexed by terrain ID) |
| +0x1122 | 2*8 | `playerArmyTotalStrength[8]` | Approximate total army strength per player |
| +0x1142+p*0xC | varies | `heroQuestData[p]` | Hero quest tracking per player |
| +0x1582 | varies | `allianceMatrix[8][8]` | 8x8 player diplomacy matrix (packed uint, bits 28-29 = alliance state) |
| +0x1602 | 2 | `armyCount` | Total number of army units in game |
| +0x1604+u*0x42 | 2 | `army[u].x` | Unit X position |
| +0x1606+u*0x42 | 2 | `army[u].y` | Unit Y position |
| +0x1619+u*0x42 | 1 | `army[u].owner` | Owner player index (0xF = neutral/independent) |
| +0x161A+u*0x42 | 4 | `army[u].adjacentUnits[4]` | Adjacent unit indices |
| +0x1622+u*0x42 | varies | `army[u].combatData` | Combat-related values |
| +0x1626+u*0x42 | varies | `army[u].fortData` | Fortification data |
| +0x1631+u*0x42 | 1 | `army[u].combatStatus1` | Combat status byte |
| +0x1633+u*0x42 | 1 | `army[u].allyTarget` | Allied target player (0xF = none) |
| +0x1636+u*0x42 | 2 | `army[u].siegeStatus` | Siege counter |

### Alliance Matrix Encoding (offset +0x1582)

The alliance matrix is stored at `GameState + playerRow * 0x10 + playerCol * 2 + 0x1582` as packed 32-bit values:

- **Bits 28-29** (mask `>> 0x1C & 3`): Alliance stance from row player toward col player
  - `0` = Neutral / No alliance
  - `1` = Friendly / Pact
  - `2` = Allied (full alliance, will fight together)
- **Bits 26-27** (mask `>> 0x1A & 3`): Diplomatic relation (used for "at war" checks)
  - `2` = At war

### ExtState Struct (at `*piRam10117468`)

| Offset | Size | Field Name | Notes |
|--------|------|-----------|-------|
| +0x0000 | 2 | `configFlags` | General config |
| +0x0002 | 2 | `baseStrengthMult` | Base strength multiplier for combat |
| +0x0018 | 2 | `openFieldDefBonus` | Defense bonus in open field |
| +0x001A | 2 | `fortifiedDefBonus` | Defense bonus in fortified city |
| +0x001C | 2 | `neutralCityDefBonus` | Defense bonus in neutral city |
| +0x001E | 2 | `castleDefBonus` | Defense bonus in castle |
| +0x0024 | 2 | `siegeUseCount` | Count of siege equipment uses |
| +0x0026 | 2 | `bribeChance1` | Special ability chance 1 (per 1000) |
| +0x0028 | 2 | `bribeChance2` | Special ability chance 2 (per 1000) |
| +0x002A | 2 | `bribeChance3` | Special ability chance 3 (per 1000) |
| +0x002C | 2 | `strengthMultiplier` | Army strength multiplier |
| +0x002E | 2 | `openFieldBonusAlt` | Alt open field bonus |
| +0x0030 | 2 | `castleBonusAlt` | Alt castle bonus |
| +0x0032 | 2 | `fortBonusAlt` | Alt fortified bonus |
| +0x0034 | 2 | `neutralBonusAlt` | Alt neutral bonus |
| +0x0036 | 2 | `lowGoldBonusMod` | Modifier when gold < 100 |
| +0x0038 | 2 | `siegeAbilityEnabled` | Non-zero if siege combat rules active |
| +0x0042 | 2 | `heroSpecialCombat` | Non-zero if heroes have special combat abilities |
| +0x0044 | 2 | `surrenderThreshold` | Threshold for AI surrender % |
| +0x0046 | 2 | `currentHeroTarget` | Hero targeted for quest, -1 if none |
| +0x0056+u | 1 | `unitState[u]` | Per-unit state byte (see below) |
| +0x00BA+u | 1 | `unitExperience[u]` | Per-unit experience/level |
| +0x011E+u | 1 | `unitCombatFlags[u]` | Per-unit combat flags |
| +0x0182+u | 1 | `unitBattlePieceCount[u]` | Battle pieces around this unit |
| +0x01E6+u | 1 | `unitDamageCounter[u]` | Damage taken counter |
| +0x024A | 2 | `maxSiegeSlots` | Maximum concurrent siege operations |
| +0x024C+s*0x5C | 2 | `siege[s].active` | Siege slot active flag |
| +0x024E+s*0x5C | 2 | `siege[s].targetPlayer` | Player being sieged |
| +0x0250+s*0x5C | 2 | `siege[s].besiegingArmy` | Army index doing the siege |
| +0x0252+s*0x5C | 2*4 | `siege[s].supportUnits[4]` | Support unit indices |
| +0x025A+s*0x5C | 2*6 | `siege[s].attackerUnits[6]` | Attacker unit indices |
| +0x0272+s*0x5C | 2*6 | `siege[s].defenderStrength[6]` | Defender strength per slot |
| +0x027E+s*0x5C | 2*6 | `siege[s].adjCount[6]` | Adjacent count per siege slot |
| +0x02A4+s*0x5C | 2 | `siege[s].siegeStrength` | Current siege pressure |
| +0x02A6+s*0x5C | 2 | `siege[s].siegeEffects` | Siege effect flags (bitfield) |

### Unit State Values (offset +0x56)

| Value | Meaning |
|-------|---------|
| 0x02 | Garrisoned (low priority) |
| 0x03 | Defending (static defense) |
| 0x04 | Idle / waiting |
| 0x05 | Ready for combat |
| 0x06 | Supporting a siege |
| 0x07 | Besieging (active siege) |
| 0x08 | In combat / attacking |
| 0x0B | Special move state |

### Unit Combat Flags (offset +0x11E)

| Bit | Meaning |
|-----|---------|
| 0 (0x01) | Unit is idle/available |
| 2 (0x04) | Currently in combat processing |
| 4 (0x10) | Has ranged attack capability |
| 5 (0x20) | Has siege weaponry |
| 6 (0x40) | Flag related to special abilities |
| 7 (0x80) | Flag related to fortification bonus |

### Army Type Definition (at `*piRam10117364`)

Each army type is 6 bytes:

| Offset | Size | Field | Notes |
|--------|------|-------|-------|
| +0 | 1 | `canFly` | Non-zero if flying unit |
| +1 | 1 | `specialAbility1` | Special combat ability 1 |
| +2 | 1 | `specialAbility2` | Special combat ability 2 |
| +3 | 1 | `unused` | |
| +4 | 1 | `hasRangedAttack` | Non-zero if ranged |
| +5 | 1 | `combatClass` | Combat class (1=light, 2=heavy, 3=siege) |

### Battle Piece (Unit on Battle Map, at `*piRam10117360`)

Each battle piece is 0x16 (22) bytes:

| Offset | Size | Field | Notes |
|--------|------|-------|-------|
| +0x00 | 2 | `mapX` | X position on map |
| +0x02 | 2 | `mapY` | Y position on map |
| +0x04 | 1 | `armyType` | Army type index (0x1C = hero) |
| +0x05 | 1 | `owner` | Owner player (-1 = dead) |
| +0x06 | 1 | `moveCost` | Movement cost / range threshold |
| +0x07 | 1 | `hitPoints` | Current hit points |
| +0x08 | 1 | `strength` | Combat strength (1-10 scale) |
| +0x0C | 4 | `statusFlags` | Packed status flags (see below) |
| +0x10 | 1 | `parentArmy` | Index of parent army stack |
| +0x11 | 1 | `moveStatus` | Movement status |
| +0x12 | 2 | `prevTarget` | Previous target |
| +0x14 | 2 | `curTarget` | Current target (-1 = none) |

#### Battle Piece Status Flags (+0x0C)

| Bits | Meaning |
|------|---------|
| 0-6 | Associated army index (0x7F mask) |
| 5 | Road bonus (0x20) |
| 6 | Fortification flag (0x40) |
| 9-11 | Combat result flags |
| 12-15 | Combat action type (0=none, 1=targeted, 3=special) |

---

## 3. Combat Initiation (FUN_10010b30) <a name="combat-initiation"></a>

**Proposed name:** `ExecuteArmyCombat`
**Signature:** `int ExecuteArmyCombat(short armyIndex, short isForced)`
**Size:** 2468 bytes
**Address:** 0x10010b30

### Algorithm

This is the main function called when an army stack enters a hex with enemy units. It orchestrates the entire combat from initiation to cleanup.

```pseudocode
function ExecuteArmyCombat(armyIndex, isForced):
    // 1. Get army position
    armyX = army[armyIndex].x
    armyY = army[armyIndex].y
    oldPieceCount = ExtState.unitBattlePieceCount[armyIndex]

    // 2. Initialize local arrays
    heroSlots[8] = {-1, -1, ...}    // hero tracking (max 8)
    combatOrder[32] = {-1, -1, ...}  // fight order slots (max 32)

    // 3. Mark unit as in-combat
    ExtState.unitCombatFlags[armyIndex] |= 0x04

    // 4. Scan all battle pieces in 2x2 area around army position
    numPieces = 0
    numHeroes = 0
    numSiegeUnits = 0
    numFlyers = 0
    numRanged = 0

    for each battlePiece in GameState.numBattlePieces:
        if piece is in [armyX, armyX+1] x [armyY, armyY+1]:
            // If enemy piece, mark for combat
            if piece.owner != currentPlayer:
                RemoveFromDisplay(pieceIndex, 1)

            ExtState.unitBattlePieceCount[armyIndex] += 1

            // Check for combat action type
            if (piece.statusFlags >> 12 & 0xF) == 1 AND targetArmy == armyIndex:
                clear targeting flags on piece

            if piece.statusFlags has active combat action:
                numSiegeUnits += 1

            // Track heroes (armyType == 0x1C)
            if piece.armyType == 0x1C AND numHeroes < 8:
                heroSlots[numHeroes] = piece
                numHeroes += 1
                heroFoundIdx = pieceIndex

            // Track flying units
            if ArmyTypeDef[piece.armyType].canFly != 0:
                numFlyers += 1

            // Track ranged units
            if ArmyTypeDef[piece.armyType].hasRangedAttack != 0:
                numRanged += 1

            // Add to combat order (max 32 pieces)
            if numPieces < 32:
                combatOrder[numPieces] = piece
                numPieces += 1
            else:
                RemoveFromDisplay(piece, 0)  // overflow, remove

    // 5. Handle hero siege targeting
    if heroFoundIdx != -1:
        SetHeroTarget(heroSlot)
        SetSiegePosition(heroX, heroY)

    // If multiple heroes, resolve hero order
    if numHeroes > 1:
        ResolveHeroFightOrder(heroArray)

    // 6. Set combat flag bits
    unitCombatFlags[armyIndex] &= 0xCF  // clear bits 4-5
    if numHeroes != 0:
        unitCombatFlags[armyIndex] |= 0x20  // has siege
    if numRanged != 0:
        unitCombatFlags[armyIndex] |= 0x10  // has ranged

    // 7. Check for overwhelming force (>16 pieces = auto-resolve)
    if numPieces > 16:
        oldPieceCount = 0
        numSiegeUnits = 0

    // 8. Check for retreat conditions
    if numSiegeUnits > 2 AND unitState[armyIndex] != 0x07:
        return 1  // retreat

    // 9. Check for peaceful resolution
    if !isForced AND numHeroes == 0 AND pieceCount unchanged:
        if currentPlayer strength < enemy strength:
            if FUN_1005f230(1,6,-1) != 0:  // 1 in 6 chance
                if not blocked by terrain:
                    return 1  // avoid combat

    // 10. Calculate fight order
    ExtState.unitDamageCounter[armyIndex] = 0
    fightOrderResult = CalculateFightOrder(armyIndex, numPieces, ...)
    frontLineCount = fightOrderResult

    // 11. AI combat evaluation (for AI players)
    if !isForced:
        if experience[armyIndex] > 8:
            if unitState is combat-ready (4, 5, 6, or 8):
                PruneExcessArmies(armyIndex, combatOrder)

    // 12. Handle max stack overflow (>24 pieces)
    if numPieces > 24:
        for i = 24 to numPieces:
            RemoveFromDisplay(combatOrder[i], 0)

    // 13. Siege deployment rules
    if GameState.hasSiegeUnits != 0:
        turnNum = GameState.turnNumber
        if turnNum < 2: turnNum = 1
        if turnNum < 3:  // early game restriction
            goto skipSiege

    if numPieces < 2:
        unitState[armyIndex] = 4  // set to idle

    // 14. Handle siege equipment deployment
    if GameState.hasAlliances AND unitState[armyIndex] == 0x0B:
        if ExtState.siegeUseCount < 5:
            flyersToRemove = 2 - (numPieces - numFlyers)
            // Remove flying units that aren't needed
            for each piece in combatOrder:
                if ArmyTypeDef[piece.armyType].canFly:
                    ExtState.siegeUseCount += 1
                    piece.statusFlags |= 0x20
                    RemoveFromBattle(piece, -1)

    // 15. Determine combat directions
    if unitState is 0x03 or 0x02 (defending/garrisoned):
        direction = 1  // fixed direction
        spacingCount = 8
    else:
        direction = (frontLineCount == 0) ? 1 : 0
        spacingCount = (frontLineCount == 0) ? 8 : frontLineCount

    // 16. Place battle pieces on combat map
    for each piece in combatOrder:
        if direction == 0:
            unitDamageCounter[armyIndex] += 1

        // Calculate placement position
        newX = army[armyIndex].x + directionOffsetX[direction]
        newY = army[armyIndex].y + directionOffsetY[direction]

        piece.mapX = newX
        piece.mapY = newY
        piece.prevTarget = -1
        piece.curTarget = -1
        piece.moveStatus = 0
        piece.statusFlags &= 0xFFFFF1FF  // clear combat result
        piece.parentArmy = armyIndex
        piece.statusFlags &= 0xFFBF  // clear fort flag

        // Mark tile as occupied
        mapTile[newY][newX] |= 0x100000

        spacingCount -= 1
        if spacingCount == 0:
            direction += 1
            spacingCount = 8

    // 17. Refresh display
    RefreshMapAfterCombat(army.x, army.y)
    return 1
```

### Key Observations

- Maximum of **32 battle pieces** can participate in a single combat
- If more than **24** pieces, excess are removed
- If more than **16** pieces AND **>2 siege units**, the army **auto-retreats**
- Flying units can be forcibly removed for siege equipment deployment
- Heroes (armyType 0x1C) are tracked separately and fight first
- Fight order is calculated by `FUN_1000ffe0` (see section 4)

---

## 4. Fight Order / Priority System (FUN_1000ffe0) <a name="fight-order-system"></a>

**Proposed name:** `CalculateFightOrder`
**Signature:** `int CalculateFightOrder(short armyIndex, short numPieces, int* combatOrder, int* fightOrder)`
**Size:** 1868 bytes
**Address:** 0x1000ffe0

### Priority System

Units are assigned a **priority score** based on their type and capabilities. Higher priority units fight first (are placed in the front line). The function iterates through all combat participants and assigns them to an ordered fight sequence.

```pseudocode
function CalculateFightOrder(armyIndex, numPieces, combatOrder, fightOrder):
    // Determine front line size based on experience
    if numPieces < 13:
        frontLineTarget = lookupTable[numPieces]  // table at iRam10115d28
    else:
        frontLineTarget = 8

    // Track categories already placed
    placedFlags = 0x0000  // bitmask of placed unit types
    hasFlyingBlockade = false
    frontLinePlaced = 0

    // Calculate experience-based front line adjustment
    expThreshold = 3 - (ExtState.unitExperience[armyIndex] / 3)
    if expThreshold > 0 AND expThreshold < numPieces:
        if numPieces - frontLineTarget < expThreshold:
            frontLineTarget = numPieces - expThreshold

    // Check siege status
    if unitState[armyIndex] == 0x07:  // besieging
        // Count special siege units
        countHeroes = 0
        countFlyers = 0
        for each piece:
            if piece.armyType == 0x1C:
                countHeroes += 1
            else if ArmyTypeDef[piece.armyType].canFly AND (piece.hitPoints > 3 OR countFlyers == 0):
                countFlyers += 1

        if countFlyers != 0 AND countHeroes != 0:
            countFlyers += countHeroes  // combine

        if (countFlyers > 3 AND numPieces < 17) OR (countFlyers > 2 AND numPieces < 9):
            hasFlyingBlockade = true

        // Check siege effect modifiers
        for each siegeSlot:
            if siege.active AND siege.besiegingArmy == armyIndex:
                if siege.effects & 0x10:
                    siegeMinMoveCost = 12
                elif siege.effects & 0x08:
                    siegeMinMoveCost = 16
                else:
                    siegeMinMoveCost = siege.siegeStrength

                if siege.effects & 0x20:
                    hasFlyingBlockade = true

    // MAIN PRIORITY LOOP
    while true:
        bestPriorityAbove = -1   // for units meeting moveCost threshold
        bestPriorityBelow = -1   // for units below threshold
        bestIdxAbove = -1
        bestIdxBelow = -1

        for each piece in combatOrder (reverse):
            if piece == -1: continue

            baseStrength = piece.strength

            if frontLinePlaced < frontLineTarget:
                // FRONT LINE ASSIGNMENT - Priority bonuses:
                armyType = piece.armyType
                combatClass = ArmyTypeDef[armyType].combatClass

                if (placedFlags & 0x01) == 0 AND armyType == 0x1C:
                    priority = strength + 1000    // Heroes ALWAYS first
                elif piece.moveCost >= siegeMinMoveCost:
                    if (placedFlags & 0x10) == 0 AND ArmyTypeDef[armyType].canFly:
                        priority = strength + 900  // Flying units high priority
                    elif NOT hasFlyingBlockade:
                        if (placedFlags & 0x02) == 0 AND combatClass == 2:
                            priority = strength + 800  // Heavy units
                        elif (placedFlags & 0x04) == 0 AND combatClass == 3:
                            priority = strength + 700  // Siege class
                        elif (placedFlags & 0x80) == 0 AND ArmyTypeDef.hasRangedAttack:
                            priority = strength + 600  // Ranged units
                        elif (placedFlags & 0x08) == 0 AND combatClass == 1:
                            priority = strength + 500  // Light units
                        elif (placedFlags & 0x20) == 0 AND ArmyTypeDef.specialAbility1:
                            priority = strength + 400  // Special ability 1
                        elif (placedFlags & 0x40) == 0 AND ArmyTypeDef.specialAbility2:
                            priority = strength + 300  // Special ability 2
            else:
                placedFlags = 0xFFF  // all categories filled

            // Heroes already placed get minimum priority
            if (placedFlags & 0x01) != 0 AND piece.armyType == 0x1C:
                priority = 1
            if (placedFlags & 0x80) != 0 AND ArmyTypeDef.hasRangedAttack:
                priority = 2

            // Below-threshold units vs above-threshold
            if piece.moveCost < siegeMinMoveCost OR (hasFlyingBlockade AND !canFly AND !isHero):
                if bestPriorityBelow < priority:
                    bestPriorityBelow = priority
                    bestIdxBelow = pieceIdx
            else:
                if bestPriorityAbove < priority:
                    bestPriorityAbove = priority
                    bestIdxAbove = pieceIdx

        if bestIdxBelow == -1 AND bestIdxAbove == -1:
            break

        // Update placed categories from chosen unit
        if placedFlags != 0xFFF:
            chosenPiece = (bestIdxAbove != -1) ? above : below
            type = chosenPiece.armyType
            class = ArmyTypeDef[type].combatClass

            if type == 0x1C: placedFlags |= 0x01
            if class == 2: placedFlags |= 0x02
            if class == 3: placedFlags |= 0x04
            if canFly: placedFlags |= 0x10
            if hasRanged: placedFlags |= 0x80
            if class == 1: placedFlags |= 0x08
            if specialAbility1: placedFlags |= 0x20
            if specialAbility2: placedFlags |= 0x40

        // Move to fight order
        fightOrder[outputIdx] = combatOrder[chosenIdx]
        combatOrder[chosenIdx] = -1
        if bestIdxAbove != -1:
            frontLinePlaced += 1
        outputIdx += 1

    if frontLinePlaced > frontLineTarget:
        frontLinePlaced = frontLineTarget

    return frontLinePlaced  // number of front-line fighters
```

### Priority Table Summary

| Priority Bonus | Unit Type | Notes |
|---------------|-----------|-------|
| +1000 | Hero (type 0x1C) | Always fights first |
| +900 | Flying unit (canFly) | Second highest priority |
| +800 | Heavy combat class (class 2) | |
| +700 | Siege combat class (class 3) | |
| +600 | Ranged attack unit | |
| +500 | Light combat class (class 1) | |
| +400 | Special ability 1 unit | |
| +300 | Special ability 2 unit | |

Within each category, units are further sorted by their **raw strength value** (the strength byte from the battle piece, range 1-10).

---

## 5. Army Pruning / Tactical AI (FUN_1001072c) <a name="army-pruning"></a>

**Proposed name:** `PruneExcessArmies`
**Signature:** `void PruneExcessArmies(short armyIndex, int* combatOrder)`
**Size:** 1028 bytes
**Address:** 0x1001072c

This function is called for AI-controlled armies to trim their combat force to an appropriate size, removing low-value units.

### Algorithm

```pseudocode
function PruneExcessArmies(armyIndex, combatOrder):
    // Determine ideal army size
    idealSize = DetermineIdealCombatSize(armyIndex)  // FUN_1000fe90

    // Get distance to nearest friendly city
    cityDistance = FindNearestFriendlyCity(army.x, army.y, -1)

    totalCount = 0
    heroCount = 0
    rangedCount = 0

    if cityDistance < 10:
        idealSize += 4  // expand if near friendly territory

    // Check if player is losing (strength deficit)
    playerStrIdx = currentPlayer * 2
    if playerStrength[playerStrIdx] < enemyStrength[playerStrIdx]:
        idealSize -= 4
        if idealSize < 2: idealSize = 2

    // Count units
    for each piece in combatOrder:
        if piece.armyType == 0x1C: heroCount += 1
        if ArmyTypeDef[piece.armyType].hasRangedAttack: rangedCount += 1
        totalCount += 1

    // Don't prune if heroes present AND small army
    if heroCount > 0 AND totalCount <= 15:
        // Keep all
    // Don't prune if ranged present AND small enough
    elif rangedCount > 0 AND idealSize < 4:
        idealSize = 4

    // Prune weakest units until at ideal size
    if idealSize < totalCount:
        while true:
            worstIdx = -1
            worstScore = 10000

            for each piece in combatOrder:
                if piece == -1: continue
                type = piece.armyType

                // Skip ranged and heroes
                if ArmyTypeDef[type].hasRangedAttack: continue
                if type == 0x1C: continue

                // Skip high-HP units when losing
                if playerIsLosing AND piece.hitPoints >= 4: continue

                // Calculate unit "value score"
                score = piece.strength
                if piece.goldCost > 399: score += 1
                if piece.goldCost > 799: score += 1
                if piece.productionTime > 12: score += 1
                if piece.productionTime > 16: score += 1
                if hasSpecialAbility: score += 1
                if hasCombatBonus: score += 1
                if hasMovementBonus: score += 1-2
                if hasDefenseBonus: score += 1
                if hasMoraleBonus: score += 1
                if hasRangedBonus: score += 2

                // Deductions for cheap/common units
                if upkeep > 5: score -= 1
                if upkeep > 10: score -= 1
                if upkeep > 15: score -= 1

                // Add randomness
                score += FUN_1005f230(1, 2, 0)  // +0 to +2

                if score < worstScore:
                    worstIdx = pieceIdx
                    worstScore = score

            if totalCount <= idealSize + pruned OR worstIdx == -1:
                break

            RemoveFromDisplay(combatOrder[worstIdx], 0)
            combatOrder[worstIdx] = -1
            pruned += 1
```

---

## 6. Diplomacy Target Selection (FUN_1000df58) <a name="diplomacy-target-selection"></a>

**Proposed name:** `SelectDiplomacyTarget`
**Signature:** `int SelectDiplomacyTarget(short mode)`
**Size:** 2528 bytes
**Address:** 0x1000df58

This function calculates which non-current-player faction should be targeted for alliance overtures or attacked. It uses a complex scoring formula incorporating combat statistics, army strength ratios, and diplomatic history.

### The Diplomacy Scoring Formula

For each player `i` (not the current player), a **diplomacy score** is computed:

```pseudocode
function SelectDiplomacyTarget(mode):
    currentPlayer = GameState.currentPlayerIndex
    capitalArmy = FindArmyAtCapital(currentPlayer)
    currentPlayerMorale = GameState.playerArmyTotalStrength[currentPlayer]

    // Initialize per-player tracking arrays
    for each player i (0-7):
        totalArmies[i] = 0       // total units for player i
        aliveArmies[i] = 0       // non-idle units
        ownedByEnemy[i] = 0      // enemy-owned units near capital
        capitalControl[i] = 0    // whether player controls capital
        attackingUs[i] = 0       // units attacking us
        siegeCount[i] = 0        // siege operations against us
        randomTiebreak[i] = FUN_1005f230(1, 10)  // random 1-10
        playerIndex[i] = i

    // Scan all armies
    for each army in GameState:
        owner = army.owner
        if owner == 0x0F: continue  // skip neutral

        totalArmies[owner] += 1
        if NOT idle: aliveArmies[owner] += 1

        // Track armies that are allied with current player but belong to another
        if army.owner == currentPlayer:
            allyTarget = army.allyTarget
            if allyTarget != 0x0F:
                ownedByEnemy[allyTarget] += 1
        elif army.allyTarget == currentPlayer:
            ownedByEnemy[army.owner] += 1

        // Track armies attacking the current player's units
        if army.owner == currentPlayer:
            for each adjacent unit:
                adjOwner = adjacent.owner
                if adjOwner != currentPlayer AND adjacent.allyTarget == currentPlayer:
                    attackingUs[army.owner] += 1

    // Track siege operations
    for each siegeSlot:
        if siege.active:
            siegeCount[siege.targetPlayer] += 1

    // Give bonus score to player owning capital hex army
    if capitalArmy.owner != 0x0F AND capitalArmy.owner != currentPlayer:
        diplomacyScore[capitalArmy.owner] += 20  // +20 priority

    // THE CORE SCORING FORMULA
    for each player i (0-7):
        if totalArmies[i] == 0: continue
        if i == currentPlayer: continue

        // Check if player i has capital army belonging to current player
        capitalArmyI = FindArmyAtCapital(i)
        if capitalArmyI.owner == currentPlayer:
            capitalControl[i] = 1

        // Base combat statistics score
        combatStats = ExtState[i].battleWinsComplete * 2    // +0x40c
                    + ExtState[i].battleWins * 2             // +0x3fc
                    + ExtState[i].battlesWonClean * 2        // +0x3ec
                    + ExtState[i].battlesParticipated         // +0x3dc
                    + ExtState[i].totalKills                  // +0x3cc
                    + ExtState[i].heroKills * 4               // +0x3bc
                    + attackingUs[i] * 6                      // nearby threats
                    + ownedByEnemy[i] * 4                     // contested territory
                    + capitalControl[i] * 15                  // controls our capital
                    + diplomacyScore[i]                       // capital proximity
                    + randomTiebreak[i]                       // random tie-breaker

        // Add terrain defense bonus
        if currentPlayer is in open field:
            combatStats += ExtState.openFieldDefBonus  // +0x18
        elif currentPlayer city type == 2 (castle):
            combatStats += ExtState.castleDefBonus     // +0x1E
        elif currentPlayer city type == 1 (fortified):
            combatStats += ExtState.fortBonusAlt       // +0x1A
        elif currentPlayer city type == 0 (neutral):
            combatStats += ExtState.neutralCityDefBonus // +0x1C

        // Morale differential modifier
        moraleDiff = abs(currentPlayerMorale - playerMorale[i])
        armyCountDiff = abs(totalArmies[currentPlayer] - totalArmies[i])

        combatStats += moraleDiff / 8 + armyCountDiff / 4

        diplomacyScore[i] = combatStats

    // DISQUALIFICATION CHECKS
    for each player i:
        // If player has diplomatic immunity (third-party treaty check)
        if CheckThirdPartyTreaty(i) != 0:
            diplomacyScore[i] = 0

        // If no allied attackers exist and player already allied with us
        if alliedExists AND allianceMatrix[currentPlayer][i] == 0:
            diplomacyScore[i] = 0

        // If no active armies
        if siegeCount == 0 AND aliveArmies[i] == 0:
            diplomacyScore[i] = 0

        // Turn-based limits
        turnNum = GameState.turnNumber (min 1)
        if turnNum < threshold:
            // Early game: don't attack players with few armies
            armyTypeCounts = ExtState[i].battlesParticipated + ExtState[i].battleWins
            if armyTypeCounts * 4 < siegeCount[i]:
                diplomacyScore[i] = 0

    // Ensure current player doesn't target self
    diplomacyScore[currentPlayer] = 0

    // Select highest-scoring target
    bestTarget = -1
    bestScore = 0
    for each player i:
        if totalArmies[i] != 0 AND diplomacyScore[i] > bestScore:
            bestTarget = i
            bestScore = diplomacyScore[i]

    // Override: if capital army belongs to enemy, prefer that enemy
    if capitalArmyOwner != 0x0F AND capitalArmyOwner != currentPlayer:
        if NOT already targeting via siege:
            bestTarget = capitalArmyOwner

    // Final check: target must have living armies
    if bestTarget != -1 AND aliveArmies[bestTarget] == 0:
        bestTarget = -1

    return bestTarget
```

### Combat Statistics Weights

| Statistic | Weight | Offset in ExtState | Meaning |
|-----------|--------|-------------------|---------|
| Hero kills | x4 | +0x3BC | Armies killed with hero bonus |
| Total kills | x1 | +0x3CC | All units killed |
| Battles participated | x1 | +0x3DC | Battles fought |
| Clean wins | x2 | +0x3EC | Battles won without losses |
| Battle wins | x2 | +0x3FC | Total battle victories |
| Complete victories | x2 | +0x40C | Annihilation victories |
| Nearby threats | x6 | computed | Enemy units adjacent to our units |
| Contested territory | x4 | computed | Territorial overlap |
| Capital control | x15 | computed | If enemy holds our capital region |

---

## 7. Fight Results / Alliance Decision (FUN_10011804) <a name="fight-results"></a>

**Proposed name:** `DoFightResults`
**Signature:** `void DoFightResults(void)`
**Size:** 2548 bytes
**Address:** 0x10011804

This is the critical function identified by the string "DoFightResults -- bad CurrentArmy". It processes the outcome of combat and makes alliance/diplomacy decisions.

### Algorithm

```pseudocode
function DoFightResults():
    if GameState.hasAlliances == 0: return

    // Phase 1: Select diplomacy target
    targetPlayer = SelectDiplomacyTarget(0)
    *diplomacyTargetPtr = targetPlayer

    // Phase 2: Initialize per-player arrays
    for each player i (7 downto 0):
        enemyStrengthNear[i] = 0
        enemyArmyCount[i] = 0
        aliveEnemyCount[i] = 0
        allyStatus[i] = 0
        neutralStatus[i] = 0

        // Clear alliance bits (28-29) for this relationship
        allianceMatrix[currentPlayer][i] &= 0xCFFFFFFF

        // Determine initial stance from existing matrix
        currentStance = (allianceMatrix[i][currentPlayer] >> 28) & 3
        if currentStance == 0:
            neutralStatus[i] = 1
        elif currentStance == 2:
            allyStatus[i] = 1

    // Phase 3: Count enemy armies near each player
    armyCount = GameState.armyCount
    numNeutralArmies = 0

    for each army (armyCount downto 0):
        // Check terrain defense (negative value at offset +0x711 means impassable)
        terrainDef = -GameState.terrainDefenseTable[mapTile.terrainType]
        if terrainDef + 10 == 0:  // terrain value == 10 means blocked
            numNeutralArmies += 1

        owner = army.owner
        if owner == 0x0F: continue

        enemyArmyCount[owner] += 1
        if NOT idle:
            aliveEnemyCount[owner] += 1

        // Track ally-targeting relationships
        if army.owner == currentPlayer:
            allyTarget = army.allyTarget
            if allyTarget != 0x0F:
                enemyStrengthNear[allyTarget] += 1
        elif army.allyTarget == currentPlayer:
            enemyStrengthNear[army.owner] += 1

    // Phase 4: Set alliance stances based on army count comparison
    for each player i:
        if i == currentPlayer: continue
        if playerExists[i] == 0: continue

        heroBonus = (neutralStatus[i] - allyStatus[i]) * 2

        if enemyStrengthNear[i] >= heroBonus + 4:
            // Strong military presence -> set to FRIENDLY
            allianceMatrix[currentPlayer][i] |= 0x10000000  // stance = 1
        elif enemyStrengthNear[i] >= heroBonus + 8:
            // Overwhelming presence -> set to ALLIED
            allianceMatrix[currentPlayer][i] |= 0x20000000  // stance = 2

    // Phase 5: Refine based on combat statistics
    for each player i:
        if i == currentPlayer: continue
        if playerExists[i] == 0: continue

        combatPower = ExtState[i].battlesWonClean
                    + ExtState[i].battleWinsComplete * 4
                    + ExtState[i].heroKills * 2

        heroBonus2 = (neutralStatus[i] - allyStatus[i]) * 2

        if combatPower >= heroBonus2 + 5:
            // Strong combat record -> upgrade stance
            currentStance = (allianceMatrix[currentPlayer][i] >> 28) & 3
            newStance = max(currentStance, 1)
            allianceMatrix[currentPlayer][i] = (newStance << 28) | (matrix & 0xCFFFFFFF)

    // Phase 6: Force alliance with diplomacy target
    if targetPlayer != -1:
        allianceMatrix[currentPlayer][targetPlayer] |= 0x20000000  // ALLIED

    // Phase 7: Process active sieges
    for each siegeSlot:
        if siege.active:
            allianceMatrix[currentPlayer][siege.targetPlayer] |= 0x20000000

    // Phase 8: Select strongest enemy for overall targeting
    bestEnemy = -1
    bestCount = 0
    for each player i:
        if playerExists[i] == 0: continue

        // Calculate surrender threshold
        if currentPlayerIsInField:
            threshold = ExtState.surrenderThreshold  // +0x44
        else:
            threshold = 50  // default 50%

        // Check if enemy army count exceeds threshold
        if enemyArmyCount[i] > bestCount:
            percentage = (enemyArmyCount[i] * 100) / max(numNeutralArmies, 1)
            if percentage > threshold:
                bestEnemy = i
                bestCount = enemyArmyCount[i]

    // Phase 9: Focus all alliances on strongest enemy
    if bestEnemy != -1 AND bestEnemy != currentPlayer:
        for each player i:
            if playerExists[i] == 0: continue
            if i == bestEnemy OR i == targetPlayer:
                allianceMatrix[currentPlayer][i] |= 0x20000000  // ALLIED against
            else:
                allianceMatrix[currentPlayer][i] &= 0xCFFFFFFF  // NEUTRAL

    // Phase 10: Siege-related alliance overrides
    if ExtState.siegeAbilityEnabled != 0:
        // If current player controls cities, check for siege blocks
        for each player i:
            if playerExists[i] == 0: continue
            if NOT in city AND i != currentPlayer:
                if at war AND has siege treaty block:
                    // Clear alliance
                    allianceMatrix[currentPlayer][i] &= 0xCFFFFFFF

        // Check if any non-city player is allied AND at war
        hasConflict = false
        for each player i:
            if playerExists[i] != 0 AND NOT city type 1:
                if (allianceMatrix[?][i] >> 26 & 3) == 2:
                    hasConflict = true

        if hasConflict:
            // Break alliances with city players who have siege treaties
            for each player i with cityType == 1 AND siegeTreatyCount[i] != 0:
                allianceMatrix[currentPlayer][i] &= 0xCFFFFFFF

    // Phase 11: Multiplayer peace override
    if GameState.multiplayerMode != 0:
        // Check cross-alliances for contradictions
        multiAlly[8] = {0}
        for each player i with city AND alive:
            for each player j not in city AND alive:
                if (allianceMatrix[i][j] >> 26 & 3) == 2:
                    multiAlly[i] = 1

        for each player i with city AND alive:
            if multiAlly[currentPlayer] != 0 OR multiAlly[i] != 0:
                allianceMatrix[currentPlayer][i] &= 0xCFFFFFFF  // peace

    // Phase 12: Final safety check - no alliance with dead armies
    for each player i:
        if aliveEnemyCount[i] == 0:
            allianceMatrix[currentPlayer][i] &= 0xCFFFFFFF

    // Phase 13: Break sieges against now-neutral players
    for each siegeSlot:
        if siege.active:
            if (allianceMatrix[currentPlayer][siege.targetPlayer] >> 28 & 3) == 0:
                BreakSiege(siegeSlot, 0x14)  // 20 gold penalty
```

### Alliance State Machine

```
    Neutral (0) ---[army count threshold met]--> Friendly (1)
    Friendly (1) --[overwhelming presence]-----> Allied (2)
    Allied (2) ----[siege broken/peace]--------> Neutral (0)

    Any state -----[diplomacy target]----------> Allied (2)
    Any state -----[no living armies]----------> Neutral (0)
```

---

## 8. Siege Mechanics (FUN_1000f410, FUN_1000f064) <a name="siege-mechanics"></a>

### Siege Initiation (FUN_1000f410)

**Proposed name:** `InitiateSiege`
**Size:** 656 bytes
**Address:** 0x1000f410

```pseudocode
function InitiateSiege():
    if ExtState.configFlags == 0: return

    // Count available armies with combat-ready status
    readyCount = 0
    for each army owned by currentPlayer:
        if unitState == 0x05 OR unitState == 0x08:
            readyCount += 1

    // Count active siege slots
    activeSieges = 0
    for each siegeSlot:
        if siege.active: activeSieges += 1

    // Only start new siege if:
    // - Available slots AND ready units
    // - No active sieges OR more than 2 ready units
    if activeSieges >= maxSiegeSlots: return
    if readyCount == 0: return
    if activeSieges > 0 AND readyCount <= 2: return

    // Find empty siege slot
    emptySlot = -1
    for each slot: if !siege.active: emptySlot = slot
    if emptySlot == -1: return

    // Clear siege slot
    ClearSiegeSlot(emptySlot)

    // Select target using diplomacy system
    targetPlayer = SelectDiplomacyTarget(0)
    if targetPlayer == -1: return

    // Find best army to lead siege
    bestArmy = FindBestSiegeArmy(emptySlot, targetPlayer)
    if bestArmy == -1:
        ClearSiegeSlot(emptySlot)
        return

    // Activate siege
    siege[emptySlot].active = 1
    siege[emptySlot].targetPlayer = targetPlayer
    siege[emptySlot].besiegingArmy = bestArmy
    unitState[bestArmy] = 0x07  // set to besieging

    // Calculate siege probabilities
    CalculateSiegeProbabilities(emptySlot)

    // Update alliance matrix
    allianceMatrix[currentPlayer][targetPlayer] |= 0x20000000  // ALLIED against

    // Assign support units
    AssignSiegeSupport(bestArmy)
    UpdateSiegeStrength(emptySlot)
    RecalculateSiegePaths()
```

### Siege Probability Calculation (FUN_1000f064)

**Proposed name:** `CalculateSiegeProbabilities`
**Size:** 500 bytes
**Address:** 0x1000f064

This function uses the **FUN_1005f230(1,1000,0)** dice roll (random 1-1000) to determine siege outcomes based on cumulative modifiers.

```pseudocode
function CalculateSiegeProbabilities(siegeSlot):
    player = currentPlayer
    cityType = GameState.playerCityType[player]

    // Base probability from army strength
    baseProb = ExtState.baseStrengthMult * ExtState.strengthMultiplier  // +0x02 * +0x2C

    // Add terrain defense bonus based on city type
    if playerIsInField:
        baseProb += ExtState.openFieldBonusAlt   // +0x2E
    elif cityType == 2:  // castle
        baseProb += ExtState.castleBonusAlt      // +0x30
    elif cityType == 1:  // fortified
        baseProb += ExtState.fortBonusAlt        // +0x32
    elif cityType == 0:  // neutral city
        baseProb += ExtState.neutralBonusAlt     // +0x34

    siege[siegeSlot].siegeEffects = 0

    // Test 1: Bribery/sabotage (ExtState +0x26)
    if ExtState.bribeChance1 != 0:
        roll = FUN_1005f230(1, 1000, 0)  // random 1-1000
        if roll < ExtState.bribeChance1 + baseProb:
            siege[siegeSlot].siegeEffects |= 0x01  // bribery successful
            return

    // Test 2: Spy/assassination (ExtState +0x28)
    // Add low-gold modifier if player gold < 100
    if playerGold[player] < 100:
        baseProb += ExtState.lowGoldBonusMod  // +0x36

    if ExtState.bribeChance2 != 0:
        roll = FUN_1005f230(1, 1000, 0)
        if roll < ExtState.bribeChance2 + baseProb:
            siege[siegeSlot].siegeEffects |= 0x02  // spy successful
            return

    // Test 3: Sabotage/siege break (ExtState +0x2A)
    if ExtState.bribeChance3 != 0:
        roll = FUN_1005f230(1, 1000, 0)
        if roll < ExtState.bribeChance3 + baseProb:
            siege[siegeSlot].siegeEffects |= 0x04  // sabotage successful
```

### Siege Effects Flags

| Bit | Value | Effect |
|-----|-------|--------|
| 0 | 0x01 | Bribery/first special ability succeeded |
| 1 | 0x02 | Spy/second special ability succeeded |
| 2 | 0x04 | Sabotage/third special ability succeeded |
| 3 | 0x08 | Siege equipment bonus (moveCost threshold = 16) |
| 4 | 0x10 | Enhanced siege (moveCost threshold = 12) |
| 5 | 0x20 | Flying blockade active |

### Siege Strength Calculation

From FUN_1000ffe0, siege strength affects the `siegeMinMoveCost` threshold which determines which units can participate:

```
siegeMinMoveCost = siege.siegeStrength (from +0x2A4)
if siege.effects & 0x10: siegeMinMoveCost = 12
if siege.effects & 0x08: siegeMinMoveCost = 16
```

Units with `piece.moveCost < siegeMinMoveCost` are placed behind the front line. Only units meeting the threshold can be in the vanguard.

---

## 9. Combat Display Pipeline (FUN_10007dd4) <a name="combat-display"></a>

**Proposed name:** `CombatOrchestrator`
**Size:** 60 bytes
**Address:** 0x10007dd4

```pseudocode
function CombatOrchestrator():
    BuildCombatMapTiles()     // FUN_10004c54 - Build tile array
    if animationEnabled:
        SyncCombatMapWithMainMap()  // FUN_10005b68 - Sync changes
    RenderCombatResults()     // FUN_10005f90 - Draw all combat
    CleanupCombatDisplay()    // FUN_10007c50 - Reset state
```

### Sub-phases of BuildCombatMapTiles (FUN_10004c54):

1. **FUN_10003b7c** - `BuildTerrainGrid`: Creates the base terrain grid for the combat viewport, reading terrain types from the map and looking up visual indices in the terrain cost table at GameState+0x60C.

2. **FUN_1000419c** - `PopulateMapFeatures`: Overlays map features (roads, rivers, cities) onto the combat grid. Reads from the map tile array and sets feature bits in the 10-byte-per-cell combat grid structure.

3. **FUN_10004400** - `PlaceUnitsOnCombatMap`: Places all battle pieces onto the combat grid. For each piece in range, sets the unit owner bits (bits 7-10), army type (bits 17-21), and hit count (bits 11-15). Heroes get special handling. Fortress flags are checked.

4. **FUN_100047d0** - `PlaceSiegeMarkers`: Places siege equipment and ruin markers on the combat grid. Checks the 22 ruin/siege slots in the game state (at GameState+0xD28, stride 0x1E).

5. **FUN_100049bc** - `PlaceMovementPath`: Draws the movement path overlay showing where the selected army is heading. Uses the movement path buffer at psRam10117580.

---

## 10. The Dice Function (FUN_1005f230) <a name="dice-function"></a>

**Proposed name:** `RollDice`
**Signature:** `short RollDice(short numDice, short dieSize, short bonus)`
**Size:** 252 bytes
**Address:** 0x1005f230

### Formula

```
result = bonus
for i in 0..numDice-1:
    roll = random_float_0_to_1() * dieSize  // truncated to int
    result += roll

// Clamp to valid range
min_value = bonus + numDice          // minimum possible (1 per die + bonus)
max_value = numDice * dieSize + bonus // maximum possible

if result < min_value: result = min_value
if result > max_value: result = max_value

return result
```

### Key Properties
- `FUN_1005f230(1, 10, 0)` = random 1-10 (standard d10)
- `FUN_1005f230(1, 100, 0)` = random 1-100 (percentile)
- `FUN_1005f230(1, 1000, 0)` = random 1-1000 (per-mille, used for siege probabilities)
- `FUN_1005f230(3, 500, 500)` = 3d500 + 500 = range 503-2000 (gold income)
- `FUN_1005f230(1, 2, -1)` = coin flip: 0 or 1
- `FUN_1005f230(1, 6, -1)` = 0-5 (d6 zero-indexed)
- `FUN_1005f230(1, 11, -6)` = range -5 to +5 (used for coordinate jitter)
- `FUN_1005f230(1, 100, 100)` = 101-200 (hero selection priority for state 0x07)
- `FUN_1005f230(1, 100, 50)` = 51-150 (hero selection for state 0x02)
- `FUN_1005f230(1, 100, 0)` = 1-100 (hero selection for state 0x03)

The random number generator internally uses `FUN_10002970()` which produces a 32-bit unsigned value, then converts it to a float in [0,1) range via the standard PowerPC `0x43300000` XOR trick for unsigned-to-double conversion.

---

## 11. Complete Combat Formula <a name="complete-combat-formula"></a>

### Overview

Warlords II combat is NOT a simple "roll dice, compare strengths" system. Instead, it uses a **multi-phase strategic evaluation**:

### Phase 1: Army Assembly
- When armies collide, all units in the 2x2 hex area are gathered
- Maximum 32 units can participate; excess are removed
- If >24 units, the extras beyond slot 24 are destroyed

### Phase 2: Fight Order Determination
Units are sorted by **priority class** (descending):
1. **Heroes** (type 0x1C): +1000 to priority
2. **Flying units**: +900
3. **Heavy combat class**: +800
4. **Siege class**: +700
5. **Ranged units**: +600
6. **Light combat class**: +500
7. **Special ability units**: +300-400

Within each class, higher **raw strength** (1-10) wins ties. A random d10 further breaks ties.

### Phase 3: Front Line Calculation
- Front line size = `lookupTable[numPieces]` (up to 8 max)
- Modified by unit **experience**: threshold = `3 - (experience / 3)`
- If experience is high enough, fewer units are needed in front

### Phase 4: Terrain and City Defense
The defending player receives bonuses based on location:

| Location Type | Bonus Source | Typical Values |
|---------------|-------------|----------------|
| Open Field | ExtState+0x18 | Low bonus |
| Neutral City | ExtState+0x1C | Medium bonus |
| Fortified City | ExtState+0x1A | High bonus |
| Castle | ExtState+0x1E | Highest bonus |

These bonuses are added to the diplomacy scoring formula and influence AI siege decisions.

### Phase 5: Morale and Strength Differential
```
moraleDiff = abs(currentPlayerMorale - enemyMorale)
strengthDiff = abs(currentArmyCount - enemyArmyCount)

combatModifier = moraleDiff / 8 + strengthDiff / 4
```

### Phase 6: Alliance Formation
Based on the scoring formula from FUN_1000df58/FUN_10011804:
- Players with high threat scores become **alliance targets**
- Alliance state (Neutral/Friendly/Allied) determines whether third parties join the fight
- Allied players combine their forces

### Phase 7: Combat Resolution
The actual unit-by-unit combat occurs through the fight ordering system. Units placed on the front line engage first. The damage counter (ExtState+0x1E6) tracks hits taken.

### Phase 8: Siege Resolution
If the attacker has siege capabilities:
- Three special ability checks (bribery, spy, sabotage) each roll d1000
- Base probability = `strengthMult * multiplier + terrainBonus`
- If `roll < probability`, the ability succeeds
- Siege effects modify future combat thresholds

### Hero Combat Selection (FUN_1000db10)

When selecting which hero leads combat, priority is based on unit state:

```pseudocode
for each army owned by currentPlayer:
    if unitState == 0x07 (besieging):
        priority = FUN_1005f230(1, 100, 100)  // 101-200, highest
    elif unitState == 0x02 (garrisoned):
        priority = FUN_1005f230(1, 100, 50)   // 51-150
    elif unitState == 0x03 (defending):
        priority = FUN_1005f230(1, 100, 0)    // 1-100, lowest

    // Highest priority hero leads
    if priority > bestPriority:
        bestHero = army
```

### Gold Income Calculation (FUN_100121f8 area)

After combat, surviving armies may generate gold income:
```
income = FUN_1005f230(3, 500, 500)  // 3d500 + 500 = 503-2000 gold
playerGold[player] += income
if playerGold[player] > 30000: playerGold[player] = 30000  // cap
```

---

## 12. Appendix: Struct Field Maps <a name="appendix"></a>

### Complete Function Reference Table

| Address | Size | Proposed Name | Role |
|---------|------|---------------|------|
| 0x10003b7c | 480 | BuildTerrainGrid | Build combat map terrain |
| 0x10003d5c | 364 | GetAdjacentTerrain | Get adjacent tile terrain mask |
| 0x10003ec8 | 724 | BuildFogOfWarGrid | Build fog overlay |
| 0x1000419c | 612 | PopulateMapFeatures | Add roads/rivers/cities to combat map |
| 0x10004400 | 976 | PlaceUnitsOnCombatMap | Place battle pieces |
| 0x100047d0 | 492 | PlaceSiegeMarkers | Place ruins/siege markers |
| 0x100049bc | 664 | PlaceMovementPath | Draw movement path |
| 0x10004c54 | 136 | BuildCombatMapTiles | Dispatch to 5 sub-phases |
| 0x10005b68 | 452 | SyncCombatMapWithMainMap | Sync combat map changes |
| 0x10005d2c | 612 | DrawUnitOnCombatMap | Render single unit sprite |
| 0x10005f90 | 7312 | RenderCombatResults | Full combat result rendering |
| 0x10007c50 | 388 | CleanupCombatDisplay | Post-combat display cleanup |
| 0x10007dd4 | 60 | CombatOrchestrator | Main combat display dispatch |
| 0x10007e10 | 360 | GetAdjacentVisibility | Check 8-neighbor visibility |
| 0x10007f78 | 780 | MapRefreshAndCombat | Full map refresh with combat |
| 0x10008284 | 404 | RefreshCombatCell | Refresh single combat map cell |
| 0x1000cafc | 88 | TurnPhase_DoFightResults | Turn phase: process fight results |
| 0x1000d1a4 | 324 | TryBuyArmy | AI army purchasing logic |
| 0x1000d384 | 360 | ProcessArmyTurn | Main per-army turn processing |
| 0x1000d6a0 | 284 | ProcessSiegeSupport | Update siege support units |
| 0x1000d808 | 264 | StartTurnSetup | Begin-of-turn initialization |
| 0x1000da14 | 252 | GetAdjacentArmies | Get armies adjacent to unit |
| 0x1000db10 | 316 | SelectBestHero | Hero selection with priority |
| 0x1000dc4c | 472 | RecordCombatStatistics | Track per-player combat stats |
| 0x1000de24 | 308 | ClearSiegeSlot | Initialize/clear siege data |
| 0x1000df58 | 2528 | SelectDiplomacyTarget | AI diplomacy targeting |
| 0x1000e938 | 324 | FindBestSiegeArmy | Find army to lead siege |
| 0x1000ea7c | 392 | AssignSiegeUnits | Assign units to siege slots |
| 0x1000ed34 | 816 | FindBestSiegeTarget | Find best siege target army |
| 0x1000f064 | 500 | CalculateSiegeProbabilities | Roll siege special abilities |
| 0x1000f258 | 176 | ClearSiegeAssignments | Clear siege unit assignments |
| 0x1000f308 | 260 | UpdateSiegeStrength | Recalculate siege adjacency |
| 0x1000f410 | 656 | InitiateSiege | Start new siege operation |
| 0x1000f6a0 | 104 | IsUnitBeingSieged | Check if unit under siege |
| 0x1000f708 | 180 | IsUnitAvailableForSiege | Check unit siege availability |
| 0x1000f7bc | 776 | AssignSiegeSupport | Assign support to siege |
| 0x1000fac4 | 228 | PrepareSiegePhase | Initialize siege phase |
| 0x1000fba8 | 144 | RefreshMapAfterCombat | Refresh display after combat |
| 0x1000fc38 | 148 | RemoveDefeatedUnit | Remove unit from battle |
| 0x1000fccc | 280 | CleanupCombatUnits | Remove all combat remains |
| 0x1000fde4 | 172 | RemoveAllFromOrder | Remove all units from fight |
| 0x1000fe90 | 336 | DetermineIdealCombatSize | AI ideal force size calc |
| 0x1000ffe0 | 1868 | CalculateFightOrder | Sort units into fight order |
| 0x1001072c | 1028 | PruneExcessArmies | AI army trimming |
| 0x10010b30 | 2468 | ExecuteArmyCombat | Main combat execution |
| 0x100114d4 | 188 | AutoResolveCombat | Auto-resolve remaining fights |
| 0x10011590 | 420 | AdoptNeutralArmy | Recruit nearby neutral unit |
| 0x10011734 | 208 | CheckThirdPartyTreaty | Check siege treaty block |
| 0x10011804 | 2548 | DoFightResults | Alliance/diplomacy decisions |
| 0x100121f8 | 300 | CanUnitAct | Check if unit can take action |
| 0x10012324 | 248 | TryHeroCapture | Hero capture attempt |
| 0x100164e4 | 1148 | ProcessFightOutcomes | Post-combat outcome processing |
| 0x100169c0 | 512 | UpdateRuinState | Update ruins after combat |
| 0x10016bc0 | 260 | CheckCityCapture | Check if city was captured |
| 0x10016cc4 | 300 | RedistributeSiegeUnits | Rebalance siege assignments |
| 0x10016df0 | 784 | ResolveHeroFightOrder | Sort heroes for combat |
| 0x1001ae14 | 140 | BreakSiege | Disband siege operation |
| 0x1001af38 | 608 | UpdateSiegeAttackers | Refresh siege attacker list |
| 0x1001b198 | 452 | ReassignSiegeBesieger | Change siege leader |
| 0x1001b35c | 336 | ValidateSiegeState | Verify siege still valid |
| 0x1005f230 | 252 | RollDice | Dice/random function |

### Map Tile Data Format (at `*piRam10117358`)

Each tile is accessed as a 32-bit value at `mapBase + y * 0xE0 + x * 2`:

| Bits | Meaning |
|------|---------|
| 0-15 | Base terrain and feature data |
| 16-19 | Terrain type index (0-15, 0xF = special) |
| 20 | Explored flag |
| 21 | River crossing flag |
| 22 | Road flag |
| 23 | Port/water access |
| 24-28 | City/ruin ID |
| 29 | Fog of war visibility |

### Terrain Defense Table (GameState + 0x711)

Signed byte values indexed by terrain type (extracted from tile bits 24+):
- Negative values represent defense bonuses (negate to get bonus)
- Value of -10 (i.e., defense = 10) means **impassable terrain**
- Typical values: plains = -2, forest = -4, hills = -5, mountains = -8, fortress = -10

### Combat Statistics Per Player (ExtState + playerOffset)

| Offset | Field | Updated By |
|--------|-------|-----------|
| +0x3BC | heroKills | RecordCombatStatistics: += numSiegeUnitsKilled |
| +0x3CC | totalKills | RecordCombatStatistics: += totalUnitsKilled |
| +0x3DC | battlesParticipated | RecordCombatStatistics: += 1 per battle |
| +0x3EC | battlesWonClean | RecordCombatStatistics: += 1 if all enemies killed |
| +0x3FC | battleWins | RecordCombatStatistics: += 1 if terrain was impassable |
| +0x40C | battleWinsComplete | RecordCombatStatistics: += 1 if annihilation on impassable |

These statistics feed directly into the **diplomacy scoring formula** with the following weights:
- heroKills * 4
- totalKills * 1
- battlesParticipated * 1
- battlesWonClean * 2
- battleWins * 2
- battleWinsComplete * 2

---

## Summary of Key Findings

1. **No Simple Combat Formula**: Unlike many strategy games, Warlords II does not use a single "attacker strength vs defender strength" roll. Instead, combat is resolved through a multi-phase system of army ordering, pruning, and placement.

2. **Fight Order is Critical**: The priority system (Heroes > Flyers > Heavy > Siege > Ranged > Light > Special) determines which units engage first. Front line units take damage first.

3. **AI Actively Prunes Armies**: The AI evaluates each unit's "value score" based on cost, production time, special abilities, and strength, then removes the weakest units to achieve an optimal force size.

4. **Diplomacy Drives Combat**: The alliance system heavily influences who fights whom. The diplomacy target selection uses combat statistics, proximity, and army counts to determine the biggest threat.

5. **Siege is Probability-Based**: Siege special abilities (bribery, espionage, sabotage) use d1000 rolls against thresholds derived from army strength and terrain defense.

6. **Terrain Defense Matters**: City type (open/fortified/castle) provides defense bonuses that affect both direct combat and siege probability calculations.

7. **Experience Reduces Front Line**: Experienced units need fewer soldiers in the front line (threshold = 3 - experience/3), meaning veteran armies are more efficient.

8. **Heroes Always Fight First**: With a +1000 priority bonus, heroes are guaranteed to be in the front line and take the first hits/deal the first damage.

9. **Maximum Stack Size**: 32 units can participate in any single combat, with 24 being the effective maximum (excess are destroyed).

10. **Gold Cap**: Player gold is capped at 30,000.
