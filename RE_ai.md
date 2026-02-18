# Warlords II AI System - Complete Reverse Engineering

## Table of Contents

1. [Architecture Overview](#architecture-overview)
2. [Key Data Structures](#key-data-structures)
3. [AI Turn Sequence](#ai-turn-sequence)
4. [Phase 1: Strategic Assessment (FUN_10011804)](#phase-1-strategic-assessment)
5. [Phase 2: Hero Management (FUN_100164e4)](#phase-2-hero-management)
6. [Phase 3: City Defense (FUN_10013774)](#phase-3-city-defense)
7. [Phase 4: Army Movement Planning (FUN_10014214)](#phase-4-army-movement-planning)
8. [Phase 5: Execute Movements (FUN_1001d014)](#phase-5-execute-movements)
9. [Phase 6: Army Assignment (FUN_100114d4)](#phase-6-army-assignment)
10. [Phase 7: Diplomacy (FUN_1001aa9c)](#phase-7-diplomacy)
11. [Phase 8: Production (FUN_1001f9e4)](#phase-8-production)
12. [Army Composition Logic (FUN_1000ffe0)](#army-composition-logic)
13. [Target Selection (FUN_10020d88)](#target-selection)
14. [Combat Strength Evaluation](#combat-strength-evaluation)
15. [Unit Scoring and Recruitment (FUN_10020f94)](#unit-scoring-and-recruitment)
16. [Hero Hiring (FUN_1000d1a4)](#hero-hiring)
17. [Army Culling (FUN_1001072c)](#army-culling)
18. [Pathfinding and Movement](#pathfinding-and-movement)
19. [Difficulty and AI Parameters](#difficulty-and-ai-parameters)
20. [Dice Function (FUN_1005f230)](#dice-function)

---

## Architecture Overview

The Warlords II AI is a **multi-phase sequential decision system** executed once per AI player per turn. It is **not** a single monolithic function but rather a pipeline of ~10 phases dispatched via the game's MacApp-style message system (command IDs 0x3FE through 0x40B).

The AI operates entirely on two central data structures:
- **Game State** (`piRam1011735c` aka `gameState`): Contains the map, all armies, cities, diplomacy state
- **AI State** (`piRam10117468` aka `aiState`): Per-army AI variables, group assignments, strategic goals

### Key Global Pointers

| Pointer | Description |
|---------|-------------|
| `piRam1011735c` | Main game state (map, armies, cities, player info) |
| `piRam10117358` | Terrain/tile data (ownership, visibility, passability) |
| `piRam10117360` | Unit type definitions (22 bytes each, contains stats) |
| `piRam10117364` | Unit class table (6 bytes each: flags for flying, naval, etc.) |
| `piRam10117468` | AI state block (per-army flags, group data, strategic vars) |
| `piRam10117470` | AI neighbor tables (precomputed adjacency for pathfinding) |
| `piRam101176e0` | Currently selected army pointer |
| `psRam10115ff8` | Flag: is the game in scroll/animate mode? |

---

## Key Data Structures

### Game State Layout (`gameState = *piRam1011735c`)

```
Offset  Size   Description
------  ----   -----------
+0x0D0  16     short[8] playerType (0=human, 1=computer)
+0x0C0  16     short[8] aiDifficulty per player (0-3, used to set AI level)
+0x0E0  16     short[8] playerActive flags
+0x110  2      short currentPlayer (0-7)
+0x11A  2      short fogOfWarEnabled
+0x11C  2      short alliesEnabled
+0x11E  2      short numAlliances?
+0x124  2      short diplomacyEnabled
+0x128  2      short specialRulesFlags
+0x136  2      short gameSpeed/turnNumber?
+0x138  16     short[8] playerAlive (nonzero = alive)
+0x15A  2      short gameActiveFlag (nonzero = game in progress)
+0x176  2      short viewportTopY
+0x178  2      short viewportTopX
+0x17A  2      short viewportBottomY
+0x17C  2      short viewportBottomX
+0x17E  2      short cursorX
+0x180  2      short cursorY
+0x182  2      short totalUnitCount (all units in game)
+0x186+p*0x14  short gold[player] (gold at offset per player * 20)
+0x194+p*0x14  short capitalX, capitalY per player
+0x711  varies  terrainLookupTable (terrain type -> movement cost)
+0x810  2      short numCities
+0x812+c*0x20  short cityX (city c at offset city*0x20)
+0x814+c*0x20  short cityY
+0x82A+c*0x20  char  cityOwnerType (1=owned, 5=razed, etc.)
+0x0D28+r*0x1E short ruinType (0=empty, 1=active, 3=explored)
+0x0D2A+r*0x1E short ruinLinkedUnit
+0x0D2C+r*0x1E short ruinX
+0x0D2E+r*0x1E short ruinY

ARMIES (base at gameState + 0x1604, each 0x42 = 66 bytes):
+0x1602        short armyCount (total armies in game)
+0x1604+a*0x42 short armyX
+0x1606+a*0x42 short armyY
+0x1619+a*0x42 char  armyOwner (0-7 = player, 0x0F = neutral/none)
+0x161A+a*0x42 char[4] unitSlots (unit type IDs in army, up to 4 slots)
+0x1622+a*0x42 char[4] unitStrength per slot
+0x1630+a*0x42 char  movementUsed
+0x1631+a*0x42 char  hasActed
+0x1632+a*0x42 char  moveFlags
+0x1633+a*0x42 char  targetPlayer (who this army is heading toward)
+0x1634+a*0x42 char  actionState
+0x1636+a*0x42 short groupID
+0x1638+a*0x42 short destX
+0x163A+a*0x42 short destY
+0x163C+a*0x42 uint  statusFlags (bit-packed)
+0x163E+a*0x42 short pathX[4]
+0x1642+a*0x42 short pathY
+0x1644+a*0x42 short pathFlags

DIPLOMACY (per-player pairs):
+0x1582+p1*0x10+p2*2  uint diplomacyBits (bits 28-29: relationship state)
  Relationship states (2 bits at >>0x1C & 3):
    0 = neutral
    1 = at war
    2 = allied
```

### AI State Layout (`aiState = *piRam10117468`)

```
Offset  Size   Description
------  ----   -----------
+0x00   2      short turnCounter
+0x02   2      short ownArmyCount
+0x04   2      short enemyArmyCount
+0x06   2      short neutralArmyCount
+0x08   2      short threateningArmyCount
+0x0C   2      short aiFlags (bit 0: production mode)
+0x0E   2      short hasHeroes
+0x20   2      short minProductionLevel
+0x22   2      short regularDefenders
+0x24   2      short flyerDefenders
+0x30   2      short productionBonusA
+0x32   2      short productionBonusB
+0x34   2      short productionBonusC
+0x38   2      short allianceAI enabled
+0x3A   2      short minArmyStrength (computed per turn)
+0x3C   2      short availableForAttack
+0x3E   2      short reserved
+0x40   2      short armiesNeedingProduction
+0x42   2      short frontlineArmyExists
+0x44   2      short humanThreatThreshold (AI param, ~50-80)
+0x46   2      short protectedArmyID (-1 = none)
+0x48   2      short siegeMode
+0x4A   2      short combatCount
+0x56+a  1     byte armyState[a] per army:
                0 = unowned/inactive
                1 = newly assigned
                2 = waiting for group
                3 = moving to target
                4 = near target (building up)
                5 = building up (has enough units)
                6 = reserved
                7 = in attack group (committed)
                8 = full strength, ready to move
                9 = reserved
                0xB = recalled defender
+0xBA+a  1     byte armyPriority[a] per army (0-255, age/importance)
+0x11E+a 1     byte armyFlags[a] per army:
                bit 0: locked/in-combat
                bit 1: has path assigned
                bit 2: currently being processed
                bit 4: has flying units
                bit 5: has hero
                bit 6: marked for elite attack
+0x182+a 1     byte armyNeighborCount[a]
+0x1E6+a 1     byte armyMiscFlags[a]
+0x24A  2      short numGroups (attack groups formed)
+0x24C+g*0x5C  short groupActive (per group g, 0x5C=92 bytes each)
+0x24E+g*0x5C  short groupTargetPlayer
+0x250+g*0x5C  short groupLeaderArmy
+0x252+g*0x5C  short[4] groupMembers
+0x2A4+g*0x5C  short groupStrength
+0x2A6+g*0x5C  ushort groupFlags:
                bit 3: siege mode
                bit 4: overwhelming force
                bit 5: hero-led
+0x3BC+p*2     short[8] alliedArmyCount per player
+0x3EC+p*2     short[8] enemyBorderArmies per player
+0x40C+p*2     short[8] enemyThreatsNearby per player
```

### Unit Type Record (22 bytes each, at `*piRam10117360`)

```
Offset  Size  Description
------  ----  -----------
+0x00   2     short unitX (current position)
+0x02   2     short unitY
+0x04   1     char  unitTypeID (0x1C = hero)
+0x05   1     char  ownerPlayer
+0x06   1     char  movementMax
+0x07   1     char  movementRemaining
+0x08   1     char  strength
+0x0C   4     uint  statusFlags:
               bits 0-6:  linkedArmyID (0x7F mask)
               bits 9-11: terrainBonus (3 bits)
               bits 12-15: orderType (0=none, 1=follow, 2=ruin, 3=city)
               bit 5: isDefending
               bit 7: isGarrisoned
               bit 8: hasMovedThisTurn
+0x12   2     short pathTargetX
+0x14   2     short pathTargetY
```

### Unit Class Record (6 bytes each, at `*piRam10117364`)

```
Offset  Size  Description
------  ----  -----------
+0x00   1     char isFlying (nonzero = flying unit)
+0x01   1     char isNaval
+0x02   1     char isRanged
+0x04   1     char isSpecial (siege/magical)
+0x05   1     char movementClass (1=foot, 2=mounted, 3=heavy)
```

---

## AI Turn Sequence

The AI turn is triggered from `FUN_1007d168` (the main message dispatcher) when the current player has `playerType == 1` (computer). The turn proceeds through a chain of message-dispatched phases:

### Command Dispatch Chain

```
FUN_1000cafc  [cmd 0x3FE] -> FUN_10011804() + FUN_100164e4()
FUN_1000cb54  [cmd 0x3FF] -> FUN_10013774()
FUN_1000cbb8  [cmd 0x400] -> FUN_10014214()
FUN_1000cc08  [cmd 0x401] -> FUN_1001d014()
FUN_1000cc58  [cmd 0x402] -> FUN_10013484()   (secondary defense pass)
FUN_1000cca8  [cmd 0x403] -> FUN_1001497c()   (group movement)
FUN_1000ccf8  [cmd 0x404] -> FUN_1001f9e4()   (production decisions)
FUN_1000cd54  [cmd 0x405] -> FUN_100114d4()   (remaining army assignment)
FUN_1000cda4  [cmd 0x406] -> FUN_1001aa9c()   (diplomacy/orders)
FUN_1000cdf4  [cmd 0x407] -> FUN_10013484()   (cleanup defense pass)
FUN_1000ce44  [cmd 0x408] -> FUN_10013040()   (finalize)
FUN_1000ce88  [cmd 0x409] -> FUN_10020ec4()   (hero special actions)
FUN_1000ced8  [cmd 0x40A] -> FUN_1000f410()   (end of turn cleanup)
FUN_1000cf28  [cmd 0x40B] -> FUN_10014d14()   (final pass)
```

Between each phase, `FUN_1004039c(progress)` updates the progress bar and `FUN_100929a0()` yields to the event loop (allowing screen redraw).

### Proposed Function Names

| Address | Original | Proposed Name | Size |
|---------|----------|---------------|------|
| `10011804` | FUN_10011804 | `AI_StrategicAssessment` | 2548 |
| `100164e4` | FUN_100164e4 | `AI_HeroManagementLoop` | 1148 |
| `10013774` | FUN_10013774 | `AI_AssignCityDefenders` | 668 |
| `10014214` | FUN_10014214 | `AI_PlanArmyMovements` | 420 |
| `1001d014` | FUN_1001d014 | `AI_ExecuteAttackGroups` | 328 |
| `100114d4` | FUN_100114d4 | `AI_AssignRemainingArmies` | 188 |
| `1001aa9c` | FUN_1001aa9c | `AI_ProcessArmyOrders` | 248 |
| `1001f9e4` | FUN_1001f9e4 | `AI_ProductionTurn` | 732 |
| `1001fcc0` | FUN_1001fcc0 | `AI_ProductionPlanning` | 2160 |
| `10010b30` | FUN_10010b30 | `AI_ArmyManagement` | 2468 |
| `1001072c` | FUN_1001072c | `AI_CullWeakUnits` | 1028 |
| `1000ffe0` | FUN_1000ffe0 | `AI_SelectUnitsForArmy` | 1868 |
| `1000fe90` | FUN_1000fe90 | `AI_EvaluateArmyThreat` | 336 |
| `10020d88` | FUN_10020d88 | `AI_FindBestTarget` | 316 |
| `10020f94` | FUN_10020f94 | `AI_ScoreUnitForHire` | 620 |
| `1000d1a4` | FUN_1000d1a4 | `AI_TryHireHero` | 324 |
| `100186cc` | FUN_100186cc | `AI_FindNearestEnemy` | 308 |
| `10018574` | FUN_10018574 | `AI_GetNeighborArmies` | 344 |
| `1001acdc` | FUN_1001acdc | `AI_FindNearestFriendly` | 312 |
| `1000a884` | FUN_1000a884 | `CalcManhattanDistance` | -- |
| `1001ee88` | FUN_1001ee88 | `AI_FindPath` | -- |
| `1001e160` | FUN_1001e160 | `AI_MoveArmyToTarget` | -- |
| `10018180` | FUN_10018180 | `AI_ExecuteArmyMove` | -- |
| `10015554` | FUN_10015554 | `AI_AttackTarget` | 944 |
| `100159c8` | FUN_100159c8 | `AI_FindBestCityTarget` | 640 |
| `10015dc8` | FUN_10015dc8 | `AI_FindBestRuinTarget` | 464 |
| `10015f98` | FUN_10015f98 | `AI_FindBestArmyTarget` | 612 |
| `100161fc` | FUN_100161fc | `AI_DecideTargetType` | 328 |
| `10016344` | FUN_10016344 | `AI_AttackEnemyArmy` | 416 |
| `10011590` | FUN_10011590 | `AI_ClaimNeutralArmies` | 420 |
| `10011734` | FUN_10011734 | `AI_CheckAllianceThreats` | 208 |
| `1001ab94` | FUN_1001ab94 | `AI_CheckArmyPathsBlocked` | 328 |
| `10013a10` | FUN_10013a10 | `AI_AttackCity` | 728 |
| `10013d0c` | FUN_10013d0c | `AI_ProcessCombatResult` | 1288 |
| `100143b8` | FUN_100143b8 | `AI_FindBestMovableArmy` | 528 |
| `100145c8` | FUN_100145c8 | `AI_ProcessSingleUnit` | 948 |
| `1001ed3c` | FUN_1001ed3c | `AI_FindUnitsInRange` | -- |
| `1001eff8` | FUN_1001eff8 | `AI_EvaluatePosition` | -- |
| `1001f174` | FUN_1001f174 | `AI_IsPositionReachable` | -- |
| `1001f648` | FUN_1001f648 | `AI_GetArmyInfo` | -- |
| `1001f758` | FUN_1001f758 | `AI_ResetProductionState` | -- |
| `1001f958` | FUN_1001f958 | `AI_PrecomputeThreats` | -- |
| `1005f230` | FUN_1005f230 | `DiceRoll` | 252 |
| `10049628` | FUN_10049628 | `GetUnitStats` | -- |
| `1000da14` | FUN_1000da14 | `GetAdjacentArmies` | -- |
| `1000fc38` | FUN_1000fc38 | `DisbandUnit` | -- |
| `1001ec20` | FUN_1001ec20 | `AI_FilterEnemyUnits` | -- |
| `1001ae14` | FUN_1001ae14 | `AI_ActivateAttackGroup` | 140 |
| `1001aea0` | FUN_1001aea0 | `AI_ActivateBestGroup` | 152 |
| `1001cd68` | FUN_1001cd68 | `AI_AdvanceGroupToTarget` | -- |
| `10015030` | FUN_10015030 | `AI_CanReachCity` | -- |
| `10015324` | FUN_10015324 | `AI_HandleAllianceQuest` | -- |
| `1000df58` | FUN_1000df58 | `AI_FindPrimaryThreat` | -- |
| `10014e44` | FUN_10014e44 | `AI_SortHeroes` | -- |

---

## Phase 1: Strategic Assessment

**Function:** `AI_StrategicAssessment` (FUN_10011804, 2548 bytes)

This is the most complex AI function. It runs at the start of every AI turn to evaluate the global strategic situation.

### Pseudocode

```
function AI_StrategicAssessment():
    AI_ClaimNeutralArmies()       // grab unowned armies near capital

    if gameState.numAlliances == 0: return

    primaryThreat = AI_FindPrimaryThreat(0)
    aiState.primaryThreatPlayer = primaryThreat

    // Initialize per-player counters
    for player = 7 downto 0:
        diplomacy[currentPlayer][player] &= ~0x30000000  // clear threat bits
        totalArmies[player] = 0
        idleArmies[player] = 0
        armiesInMyTerritory[player] = 0
        attackStance[player] = 0
        defenseStance[player] = 0

        // Determine diplomatic stance from relationship bits
        bits = (diplomacy[currentPlayer][player] >> 28) & 3
        if bits == 0: attackStance[player] = 1    // neutral -> potential threat
        if bits == 2: defenseStance[player] = 1   // allied -> no threat

    // Count all armies by owner and territory
    for army = armyCount-1 downto 0:
        owner = army.owner
        if owner == 0x0F: continue   // skip neutral
        totalArmies[owner]++
        if !(armyFlags[army] & 1):   // not locked
            idleArmies[owner]++
        // Track armies in our territory vs enemy territory
        if army.targetPlayer == currentPlayer:
            armiesInMyTerritory[army.owner]++
        elif army.owner == currentPlayer && army.target != currentPlayer:
            armiesInMyTerritory[army.target]++

    // THREAT ASSESSMENT: Set diplomatic relationship bits
    for player = 7 downto 0:
        if player == currentPlayer: continue
        if !playerAlive[player]: continue

        borderPressure = (attackStance[player] - defenseStance[player]) * 2

        // Based on army count in territory vs border pressure
        if armiesInMyTerritory[player] < borderPressure + 4:
            if armiesInMyTerritory[player] >= borderPressure + 8:
                // Set ALLIED status (bits = 2)
                diplomacy[cur][player] = (diplomacy[cur][player] & 0xCFFFFFFF) | 0x20000000
        else:
            // Set HOSTILE status (bits = 1)
            diplomacy[cur][player] = (diplomacy[cur][player] & 0xCFFFFFFF) | 0x10000000

    // SECOND PASS: Refine using composite threat score
    for player = 7 downto 0:
        if player == currentPlayer: continue
        if !playerAlive[player]: continue

        compositeThreat = aiState.enemyBorderArmies[player]
                        + aiState.enemyThreatsNearby[player] * 4
                        + aiState.alliedArmyCount[player] * 2
        borderPressure = (attackStance[player] - defenseStance[player]) * 2

        if compositeThreat < borderPressure + 5:
            if compositeThreat >= borderPressure + 10:
                set ALLIED
        else:
            currentBits = (diplomacy >> 28) & 3
            if currentBits < 2: currentBits = 1
            set currentBits  // keep or escalate

    // Force ALLIED status for primary threat target
    if primaryThreat != -1:
        diplomacy[cur][primaryThreat] = set ALLIED (0x20000000)

    // Force ALLIED for active alliance quest targets
    for quest = 3 downto 0:
        if quest.active:
            diplomacy[cur][quest.targetPlayer] = set ALLIED

    // IDENTIFY BIGGEST THREAT: Find player with most armies relative to total
    biggestThreat = -1
    maxArmyCount = 0
    for player = 7 downto 0:
        if !playerAlive[player]: continue
        adjustedTotal = max(totalArmyCount, 1)
        if playerType[player] == 0:   // human
            threshold = aiState.humanThreatThreshold  // AI param (offset +0x44)
        else:
            threshold = 50   // hardcoded for computer opponents

        armyPercent = (totalArmies[player] * 100) / adjustedTotal
        if totalArmies[player] > maxArmyCount && armyPercent > threshold:
            biggestThreat = player
            maxArmyCount = totalArmies[player]

    // If a player dominates, set them as threat for all AI players
    if biggestThreat != -1 && biggestThreat != currentPlayer:
        for player = 7 downto 0:
            if playerAlive[player]:
                if player == biggestThreat || player == primaryThreat:
                    set ALLIED
                elif player != currentPlayer:
                    set HOSTILE
```

### Key Insight: The AI has a **two-tier threat model**:
1. **Border-level**: Counts armies near its own territory
2. **Global-level**: Identifies which player is "winning" (has most armies) and forms alliances against them

---

## Phase 2: Hero Management

**Function:** `AI_HeroManagementLoop` (FUN_100164e4, 1148 bytes)

This is the main AI action loop that processes each hero the AI controls.

### Pseudocode

```
function AI_HeroManagementLoop():
    // Check for alliance quest active
    aiState.protectedArmyID = -1
    if gameState.numAlliances != 0:
        questSlot = currentPlayer * 0xC + gameState
        if questSlot.questActive && (questSlot.questType == 4 || questSlot.questType == 5):
            aiState.protectedArmyID = questSlot.questTargetArmy

    // Sort heroes by priority
    AI_SortHeroes(heroList)     // FUN_10014e44

    // Process each hero (up to 6)
    for i = 5 downto 0:
        unitIdx = heroList[i]
        if unitIdx == -1: continue

        // Verify this is our hero
        unit = unitTable[unitIdx]
        if unit.owner != currentPlayer: continue
        if unit.type != 0x1C: continue    // 0x1C = hero type

        // Assemble army around hero
        AI_AssembleHeroArmy(unitIdx)                     // FUN_100151e8

        armyIdx = heroList[i + 6]  // linked army
        if armyIdx >= 0:
            AI_ArmyManagement(armyIdx, 1)                // FUN_10010b30

        // Check for alliance quest
        if questActive && questTarget == unitIdx:
            result = AI_HandleAllianceQuest(i, heroList)
            if result: continue  // quest handled

        // Check if unit is following another army to a city
        if (unit.statusFlags >> 12 & 0xF) == 3:   // order = goto city
            targetArmy = unit.statusFlags & 0x7F
            result = AI_CanReachCity(targetArmy, unitIdx)
            if result == 0:
                // Can't reach city - clear following orders for all units
                // following the same army
                // ... (clears order bits)
            else:
                AI_AttackTarget(i, 3, heroList, 0)

        // If unit has enough movement remaining
        if unit.movementRemaining > 3:
            // Find best target city
            AI_FindBestCityTarget(i, heroList)           // FUN_100159c8
            // Find best ruin to explore
            AI_FindBestRuinTarget(i, heroList)            // FUN_10015dc8
            // Find best enemy army to attack
            AI_FindBestArmyTarget(i, heroList)            // FUN_10015f98

            // DECIDE what to do
            decision = AI_DecideTargetType(i, heroList)   // FUN_100161fc
            if decision in {1,2,3,4}:
                return  // executing action
```

---

## Phase 3: City Defense

**Function:** `AI_AssignCityDefenders` (FUN_10013774, 668 bytes)

Assigns units to defend cities. Runs in two passes: first for heroes, then for regular units.

### Pseudocode

```
function AI_AssignCityDefenders():
    // Check if any armies are in attack group state (0x07)
    hasAttackGroups = false
    for army = armyCount-1 downto 0:
        if army.owner == currentPlayer && aiState.armyState[army] == 7:
            hasAttackGroups = true

    aiState.regularDefenders = 0
    aiState.flyerDefenders = 0

    // Two passes: pass 0 = heroes, pass 1 = regular units
    for pass = 0 to 1:
        for unit = totalUnitCount-1 downto 0:
            if unit.owner != currentPlayer: continue
            if unit.x == -1: continue          // dead/inactive
            if !(unit.statusFlags & 0x20): continue  // not marked as defender

            if pass == 0 && unit.type != 0x1C: continue    // heroes only
            if pass == 1 && unit.type == 0x1C: continue    // non-heroes only

            // Special handling: skip heroes if attack groups exist
            if unit.type == 0x1C && hasAttackGroups:
                continue

            // Skip flying defenders if we have > 7 already and unit is weak
            if isFlying(unit.type) && aiState.flyerDefenders > 7 && unit.strength < 4:
                // Disband this defender (too many flyers, too weak)
                unit.statusFlags &= ~0xFFFF0FFF  // clear order
                unit.statusFlags &= ~0x0000007F  // clear linked army
                unit.statusFlags &= ~0x0020      // clear defender flag
                continue

            // Assign as defender
            AI_AssignToDefense(unitIdx, -1)

            if unit.owner == currentPlayer:
                if !isFlying(unit.type):
                    aiState.regularDefenders++
                else:
                    aiState.flyerDefenders++
```

---

## Phase 4: Army Movement Planning

**Function:** `AI_PlanArmyMovements` (FUN_10014214, 420 bytes)

Iterates over all units with movement remaining and attempts to move heroes along their planned paths.

### Pseudocode

```
function AI_PlanArmyMovements():
    if totalUnitCount == 0: return

    for unit = totalUnitCount-1 downto 0:
        if unit.owner != currentPlayer: continue
        if unit.x == -1: continue            // inactive
        if !(unit.statusFlags & 0x100): continue  // hasn't been flagged for movement

        unit.statusFlags &= ~0x100           // clear movement flag

        if unit.type != 0x1C: continue       // only process heroes directly

        // Move hero along path
        keepMoving = true
        while keepMoving:
            pathResult = AI_FindPath(unit.x, unit.y, pathBuffer,
                                    unit.terrainBonus, unit.orderType, 0)
            if pathResult == 0: break
            if unit.movementRemaining < 3: break

            savedX = unit.x
            savedY = unit.y
            combatResult = AI_ProcessCombatResult(pathBuffer)

            if combatResult == 1:
                keepMoving = false
            elif combatResult == 0:
                keepMoving = false

            // Check if we actually moved
            if unit.x == savedX && unit.y == savedY &&
               unit.movementRemaining < unit.movementMax:
                break
            if !keepMoving: break
```

---

## Phase 5: Execute Movements

**Function:** `AI_ExecuteAttackGroups` (FUN_1001d014, 328 bytes)

Executes attack group movements and manages production planning.

### Pseudocode

```
function AI_ExecuteAttackGroups():
    if aiState.turnCounter == 0: return

    AI_ProductionPlanning()       // FUN_1001fcc0 - compute production needs

    // Convert armies in attack state to ready state
    for army = armyCount-1 downto 0:
        if army.owner == currentPlayer && aiState.armyState[army] == 7:
            aiState.armyState[army] = 8    // 7 (attacking) -> 8 (ready)

    // Process each attack group
    if aiState.numGroups > 0:
        for group = 0 to aiState.numGroups-1:
            if group.active:
                aiState.armyState[group.leaderArmy] = 7  // set to attacking
                result = AI_AdvanceGroupToTarget(group)
                if result != 0:
                    group.active++  // increment group turn counter
```

---

## Phase 6: Army Assignment

**Function:** `AI_AssignRemainingArmies` (FUN_100114d4, 188 bytes)

Processes all armies not yet handled, calling `AI_ArmyManagement` on each.

### Pseudocode

```
function AI_AssignRemainingArmies():
    if armyCount == 0: return

    for army = armyCount-1 downto 0:
        if army.owner == currentPlayer:
            if !(aiState.armyFlags[army] & 4):   // not already processed
                AI_ArmyManagement(army, 0)
```

---

## Phase 7: Diplomacy

**Function:** `AI_ProcessArmyOrders` (FUN_1001aa9c, 248 bytes)

Processes army follow-orders and manages unit grouping for ordered armies.

### Pseudocode

```
function AI_ProcessArmyOrders():
    // Count units following each army
    followerCount[100] = {0}

    for unit = totalUnitCount-1 downto 0:
        if unit.owner == currentPlayer:
            orderType = (unit.statusFlags >> 12) & 0xF
            if orderType == 1:    // following order
                linkedArmy = unit.statusFlags & 0x7F
                if linkedArmy < armyCount:
                    followerCount[linkedArmy]++

    // Process up to 10 assignment rounds
    for round = 0 to 9:
        result = AI_ProcessSingleAssignment(round, followerCount)
        if result == 0: return    // no more assignments needed
```

---

## Phase 8: Production

**Function:** `AI_ProductionTurn` (FUN_1001f9e4, 732 bytes)

Called with the current player index. Manages the production state for all armies.

### Pseudocode

```
function AI_ProductionTurn(playerIdx):
    AI_ResetProductionState()
    AI_PrecomputeThreats()

    // Reset counters
    aiState.ownArmyCount = 0
    aiState.enemyArmyCount = 0
    aiState.neutralArmyCount = 0
    aiState.threateningArmyCount = 0

    // Categorize all armies
    for army = armyCount-1 downto 0:
        if isOnMap(army):   // terrain check
            if army.owner == playerIdx:
                aiState.ownArmyCount++
                aiState.armyPriority[army]++  // age/importance grows each turn
                if aiState.armyState[army] == 0:
                    aiState.armyState[army] = 1  // activate idle army
            else:
                if armyFlags[army] & 1:    // locked in combat
                    aiState.threateningArmyCount++
                aiState.armyState[army] = 0
                aiState.armyPriority[army] = 0
                if army.owner == 0x0F:     // neutral
                    aiState.neutralArmyCount++
                else:
                    aiState.enemyArmyCount++

    if aiState.ownArmyCount > 0:
        // Convert recently returned armies
        for army = armyCount-1 downto 0:
            if aiState.armyState[army] == 8 && aiState.threateningArmyCount != 0:
                if aiState.flyerDefenders < 5 && (armyFlags[army] & 2):
                    aiState.armyState[army] = 0xB  // recalled defender

            if aiState.armyState[army] == 1:
                neighbors = AI_GetNeighborArmies(army, 0, 0)
                if neighbors == 0:
                    aiState.armyState[army] = 5  // isolated, build up
                else:
                    aiState.armyState[army] = 3  // has neighbors, move toward

        aiState.turnCounter++
```

---

## Army Composition Logic

**Function:** `AI_SelectUnitsForArmy` (FUN_1000ffe0, 1868 bytes)

The most sophisticated AI function. Given a pool of available units, selects the best combination for an army.

### Unit Priority System

The AI uses a **weighted scoring system** with category flags to ensure army diversity:

```
Category flags (bitmask):
  0x001 = has hero
  0x002 = has mounted unit
  0x004 = has heavy unit
  0x008 = has foot soldier
  0x010 = has flying unit
  0x020 = has naval unit
  0x040 = has ranged unit
  0x080 = has special/siege unit
  0xFFF = army is full (stop selecting by type)
```

### Pseudocode

```
function AI_SelectUnitsForArmy(armyIdx, maxUnits, unitPool, outputList):
    // Determine how many frontline fighters we need
    if maxUnits < 13:
        minFrontline = lookup_table[maxUnits]  // ~8 for full army
    else:
        minFrontline = 8

    // Adjust if army is in attack group
    if aiState.armyState[armyIdx] == 7:  // attacking
        // Check group requirements
        for group = 3 downto 0:
            if group.leaderArmy == armyIdx:
                if group.flags & 0x10:    // overwhelming force
                    minGroupSize = 12
                elif group.flags & 8:     // siege
                    minGroupSize = 16
                else:
                    minGroupSize = group.strength

                if group.flags & 0x20:    // hero-led
                    forceComposition = true

    // Reduce required size based on army age
    ageReduction = 3 - (aiState.armyPriority[armyIdx] / 3)
    if ageReduction > 0 && ageReduction < maxUnits:
        if maxUnits - minFrontline < ageReduction:
            minFrontline = maxUnits - ageReduction

    // MAIN SELECTION LOOP
    selectedFlags = 0
    selectedCount = 0
    frontlineCount = 0

    while true:
        bestIdx = -1
        bestAltIdx = -1
        bestScore = -1
        bestAltScore = -1

        for each unit in unitPool:
            if unit == -1: continue

            score = unit.strength

            if selectedCount < minFrontline:
                // PRIORITIZE DIVERSITY - bonus for missing categories
                type = unit.type
                moveClass = unitClass[type].movementClass

                if !(selectedFlags & 0x01) && type == 0x1C:
                    score += 1000    // hero (highest priority)
                elif unit.movementMax >= minGroupSize:
                    if !(selectedFlags & 0x10) && isFlying(type):
                        score += 900   // flying
                    elif !forceComposition:
                        if !(selectedFlags & 0x02) && moveClass == 2:
                            score += 800  // mounted
                        elif !(selectedFlags & 0x04) && moveClass == 3:
                            score += 700  // heavy
                        elif !(selectedFlags & 0x80) && isSpecial(type):
                            score += 600  // siege/special
                        elif !(selectedFlags & 0x08) && moveClass == 1:
                            score += 500  // foot soldier
                        elif !(selectedFlags & 0x20) && isNaval(type):
                            score += 400  // naval
                        elif !(selectedFlags & 0x40) && isRanged(type):
                            score += 300  // ranged
            else:
                selectedFlags = 0xFFF  // full, just pick strongest

            // Heroes in full army get lowest score (already have one)
            if (selectedFlags & 0x01) && type == 0x1C:
                score = 1
            if (selectedFlags & 0x80) && isSpecial(type):
                score = 2

            // Separate into "meets minimum movement" vs "doesn't"
            if unit.movementMax < minGroupSize || (forceComposition && !isFlying && type != hero):
                if score > bestScore:
                    bestScore = score
                    bestIdx = unitIndex
            else:
                if score > bestAltScore:
                    bestAltScore = score
                    bestAltIdx = unitIndex

        if bestIdx == -1 && bestAltIdx == -1: break

        // Update category flags for selected unit
        selectedUnit = (bestAltIdx != -1) ? bestAltIdx : bestIdx
        updateCategoryFlags(selectedUnit, &selectedFlags)

        // Add to output
        if bestAltIdx != -1:
            outputList[selectedCount] = unitPool[bestAltIdx]
            unitPool[bestAltIdx] = -1
            frontlineCount++
            selectedCount++
        else:
            outputList[selectedCount] = unitPool[bestIdx]
            unitPool[bestIdx] = -1
            selectedCount++

    return min(frontlineCount, minFrontline)
```

### Key Insight: Army Composition Strategy

The AI **strongly prioritizes unit diversity** over raw strength. It follows this priority order:
1. **Hero** (bonus +1000) - Always first pick
2. **Flying unit** (bonus +900) - Mobility advantage
3. **Mounted unit** (bonus +800) - Fast ground units
4. **Heavy unit** (bonus +700) - Tanks
5. **Siege/Special** (bonus +600) - City assault capability
6. **Foot soldier** (bonus +500) - Basic infantry
7. **Naval** (bonus +400) - Water capability
8. **Ranged** (bonus +300) - Support fire

Once all categories are filled, it switches to pure strength-based selection.

---

## Target Selection

**Function:** `AI_FindBestTarget` (FUN_10020d88, 316 bytes)

Given an army, finds the best target to move toward using the precomputed influence map.

### Pseudocode

```
function AI_FindBestTarget(armyIdx, outTargetX, outTargetY, influenceMap, extendedSearch):
    if extendedSearch == 0:
        maxCost = 100
    else:
        maxCost = 1000

    armyX = army[armyIdx].x
    armyY = army[armyIdx].y
    *outTargetX = -1
    *outTargetY = -1

    // Walk the path list (precomputed reachable tiles)
    step = 0
    while pathList[step] != -1:
        // Step along path
        result = AI_StepAlongPath(&armyX, &armyY, pathList[step])
        if result == 0: break

        // Check influence value at this position
        influence = abs(influenceMap[armyX * MAP_STRIDE + armyY])
        if influence < maxCost:
            maxCost = influence
            *outTargetX = armyX
            *outTargetY = armyY

        step++

    return maxCost
```

The AI uses a **precomputed influence map** where each tile has a value representing how desirable it is as a target. Lower values = higher priority targets. The influence map factors in:
- Enemy army positions (negative influence)
- Undefended cities (strong attraction)
- Allied positions (weaker attraction)
- Terrain difficulty (movement cost penalty)

---

## Combat Strength Evaluation

### AI_EvaluateArmyThreat (FUN_1000fe90, 336 bytes)

Evaluates the threat level of an army based on nearby enemies.

```
function AI_EvaluateArmyThreat(armyIdx):
    GetAdjacentArmies(armyIdx, neighbors, 0)

    enemyCount = 0
    hostileCount = 0

    for i = 5 downto 0:
        neighbor = neighbors[i]
        if neighbor == 0xFF: continue

        neighborOwner = army[neighbor].owner
        if neighborOwner == 0x0F: continue    // neutral
        if neighborOwner == currentPlayer: continue  // friendly

        // Check terrain - can this enemy reach us?
        if isOnMap(neighbor):
            enemyCount++
            if (diplomacy[currentPlayer][neighborOwner] >> 26 & 3) == 2:
                hostileCount++  // allied with us but armies are hostile

    if hostileCount > 0:
        return 8        // HIGH THREAT - enemies at war nearby
    elif enemyCount >= 2:
        return 4        // MEDIUM THREAT - multiple enemies
    elif enemyCount >= 1:
        return 3        // LOW THREAT - single enemy
    else:
        return 2        // NO THREAT - safe
```

### AI_FindNearestEnemy (FUN_100186cc, 308 bytes)

Finds the closest enemy unit to a given position.

```
function AI_FindNearestEnemy(x, y, filterPlayer):
    bestDist = 1000

    for unit = totalUnitCount-1 downto 0:
        if unit.owner == 0x0F: continue  // skip neutral

        if filterPlayer == -1:
            if unit.owner == currentPlayer: continue
        else:
            if unit.owner != filterPlayer: continue

        // Fog of war check
        if diplomacyEnabled:
            if !AI_IsPositionReachable(unit.x, unit.y): continue

        dist = CalcManhattanDistance(x, y, unit.x, unit.y)
        if dist < bestDist:
            bestDist = dist

    return bestDist
```

---

## AI Decision Tree: AI_DecideTargetType

**Function:** `AI_DecideTargetType` (FUN_100161fc, 328 bytes)

This is the core decision function that determines what a hero army should do.

### Pseudocode

```
function AI_DecideTargetType(heroIndex, dataArray):
    // Roll dice for each potential target type

    // Option 1: Attack nearby city
    hasCityTarget = (dataArray[0x30] != -1)   // from AI_FindBestCityTarget
    cityScore = 0
    if hasCityTarget:
        roll = DiceRoll(1, 20, 20)           // 1d20+20 (range 21-40)
        cityScore = roll - dataArray[0x32] + 100  // distance penalty

    // Option 3: Attack nearest undefended city
    roll2 = DiceRoll(1, 20, 20)
    undefendedCityScore = roll2 - dataArray[0x36] + 100
    if dataArray[0x34] != -1 && cityScore < undefendedCityScore:
        decision = 3   // attack undefended city
        bestScore = undefendedCityScore

    // Option 4: Attack enemy army (only if no existing escort mission)
    currentEscort = dataArray[heroIndex * 2 + 0xC]
    if currentEscort == -1 || escorts[currentEscort].neighborCount > 4:
        roll3 = DiceRoll(1, 20, 0)           // 1d20 (range 1-20)
        armyScore = roll3 - dataArray[0x3A] + 100
        if dataArray[0x38] != -1 && bestScore < armyScore:
            decision = 4  // attack army
            bestScore = armyScore

    // Option 2: Explore ruin
    roll4 = DiceRoll(1, 20, 0)
    ruinScore = roll4 - dataArray[0x3E] + 100
    if dataArray[0x3C] != -1 && bestScore < ruinScore:
        decision = 2  // explore ruin

    return decision
```

### Decision Priority

The scoring system creates these general priorities:
- **Cities** get a base bonus of +20 (from the 1d20+20 roll), making them the default target
- **Armies** and **ruins** get no base bonus (1d20+0), so they need to be much closer to win
- **Distance penalty** is subtracted from each score, so closer targets always preferred
- The **randomness** (1d20) means the AI won't always make the same choice in identical situations

---

## Unit Scoring and Recruitment

**Function:** `AI_ScoreUnitForHire` (FUN_10020f94, 620 bytes)

When the AI needs to produce a new unit, this function scores all available unit types.

### Pseudocode

```
function AI_ScoreUnitForHire(isExpensive):
    if isExpensive == 0:
        maxCost = 800
        minStrength = 4
    else:
        maxCost = 1500
        minStrength = 5

    bestUnit = -1
    bestScore = 0
    retryCount = 0

    while true:
        for unitType = 0 to 28:  // 29 unit types (0x1D)
            GetUnitStats(unitType, stats)

            // Skip heroes (0x1C), type 5, and units with special flag
            if stats.specialFlag != 0: continue
            if unitType == 0x1C: continue
            if unitType == 5: continue

            // Must be affordable and strong enough
            if stats.cost < 0 || stats.cost > maxCost: continue
            if stats.strength < minStrength: continue

            // BASE SCORE: strength - upkeep
            score = stats.strength - stats.upkeep

            // BONUS for cheap units
            if stats.cost <= maxCost - 200: score += 1
            if stats.cost <= maxCost - 400: score += 1

            // BONUS for high movement
            if stats.movement > 11: score += 1
            if stats.movement > 15: score += 1

            // BONUS for special abilities
            if stats.hasNaval: score += 1
            if stats.hasRanged || stats.hasMelee: score += 1
            if stats.hasMounted || stats.hasFlying || stats.hasHeavy: score += 1
            if stats.hasSpecial: score += 1
            if stats.hasSiege: score += 1
            if stats.hasMagic: score += 2

            // PENALTY for slow movement
            if stats.movement > 5: score -= 1
            if stats.movement > 10: score -= 1
            if stats.movement > 15: score -= 1

            // RANDOMIZE: add 1d(score*2)
            if score > 1:
                roll = DiceRoll(1, score * 2, 0)
                score += roll

            // Track best
            if score > bestScore || (score == bestScore && DiceRoll(1,2,-1)):
                bestUnit = unitType
                bestScore = score

        // If found a unit, or retried enough times, return
        if bestUnit != -1 || retryCount > 3: break

        // Relax constraints and retry
        retryCount++
        maxCost += 500
        minStrength--
        if minStrength < 1: minStrength = 1

    return bestUnit
```

---

## Hero Hiring

**Function:** `AI_TryHireHero` (FUN_1000d1a4, 324 bytes)

The AI's hero recruitment logic, called during the production phase.

### Pseudocode

```
function AI_TryHireHero():
    if aiState.hasHeroes == 0: return   // hero hiring disabled

    playerGold = gameState.gold[currentPlayer]

    if playerGold > 399:                 // need at least 400 gold
        roll = DiceRoll(1, 10, 0)       // 1d10 (range 1-10)

        if roll > 7:                     // 30% chance to attempt hire
            heroType = AI_ScoreUnitForHire(roll > 7)

            if heroType != -1:
                GetUnitStats(heroType, stats)

                // Hero must have strength > 2
                if stats.strength <= 2: return

                // Must be able to afford hero + 100 gold reserve
                heroCost = stats.cost
                if playerGold < heroCost + 100: return

                // Find a valid army to place the hero
                targetArmy = AI_FindArmyForHero(heroType)
                if targetArmy == -1: return

                // Hire the hero!
                AI_PlaceNewUnit(heroType, targetArmy)
```

### Key Insight
- Heroes are only hired when gold > 400
- There's only a **30% chance per turn** the AI even attempts to hire (1d10 > 7)
- The hero must have strength > 2 and the AI must retain 100 gold reserve after purchase

---

## Army Culling

**Function:** `AI_CullWeakUnits` (FUN_1001072c, 1028 bytes)

When an army has too many units, the AI removes the weakest ones.

### Pseudocode

```
function AI_CullWeakUnits(armyIdx, unitPool):
    maxArmySize = AI_EvaluateArmyThreat(armyIdx)  // threat determines army size

    // Get army position and check distance to nearest enemy
    armyRecord = gameState + armyIdx * 0x42
    nearestEnemy = AI_FindNearestEnemy(armyRecord.x, armyRecord.y, -1)

    if nearestEnemy < 10:
        maxArmySize += 4    // keep more units if enemies close

    // Check if we're losing the war (need bigger armies)
    playerRatio = gameState.currentPlayer * 2
    if friendly_armies[playerRatio] < enemy_armies[playerRatio]:
        maxArmySize -= 4
        if maxArmySize < 2: maxArmySize = 2

    // Count current units
    totalUnits = 0
    heroCount = 0
    flyerCount = 0
    for slot = 31 downto 0:
        unit = unitPool[slot]
        if unit != -1:
            if unitType[unit] == 0x1C: heroCount++    // hero
            if isFlying(unitType[unit]): flyerCount++
            totalUnits++

    // Don't cull if heroes present and few units, or army small enough
    if heroCount > 0 && totalUnits <= 15: return
    if flyerCount > 0 && maxArmySize < 4: maxArmySize = 4

    if maxArmySize >= totalUnits: return   // army size is fine

    // CULLING LOOP: Remove weakest units until at target size
    while totalUnits > maxArmySize:
        worstIdx = -1
        worstScore = 10000

        for slot = 31 downto 0:
            unit = unitPool[slot]
            if unit == -1: continue

            unitRecord = unitTable + unit * 0x16
            type = unitRecord.type

            // Skip units we want to keep
            if isFlying(type): continue           // keep flyers
            if type == 0x1C: continue              // keep heroes
            if losing_war && unitRecord.strength >= 4: continue

            // SCORE the unit (lower = more likely to be culled)
            GetUnitStats(type, stats)
            score = unitRecord.strength

            // Bonuses that make a unit harder to cull
            if stats.cost > 399: score += 1
            if stats.cost > 799: score += 1
            if stats.movement > 11: score += 1
            if stats.movement > 15: score += 1
            if stats.hasNaval: score += 1
            if stats.hasRanged || stats.hasMelee: score += 1
            if stats.hasMounted || stats.hasFlying || stats.hasHeavy: score += 1
            if stats.hasSpecial: score += 1
            if stats.hasSiege: score += 1
            if stats.hasMagic: score += 2

            // Penalties (makes unit easier to cull)
            if stats.movement > 5: score -= 1
            if stats.movement > 10: score -= 1
            if stats.movement > 15: score -= 1

            // Add randomness
            roll = DiceRoll(1, 2, 0)
            totalScore = score + roll

            if totalScore < worstScore:
                worstIdx = slot
                worstScore = totalScore

        if worstIdx == -1: break

        DisbandUnit(unitPool[worstIdx], 0)
        unitPool[worstIdx] = -1
        culled++
```

---

## Pathfinding and Movement

### AI_FindPath (FUN_1001ee88)

The pathfinding system uses a precomputed neighbor table at `piRam10117470`. For each army, the table stores up to 6 reachable neighbor armies and their distances (stored at offset +600 from the base).

Movement decisions use `FUN_1000a884` (Manhattan distance) extensively as a heuristic.

### Distance Check Thresholds

The AI uses several distance thresholds for decisions:
- **< 10 tiles**: "nearby" - triggers defensive bonuses
- **< 20 tiles (0x14)**: within attack range for army targets
- **< 25 tiles (0x19)**: maximum range for city attacks (no following order)
- **< 40 tiles (0x28)**: maximum pathfinding range for neutral army claiming
- **>= 75 tiles (0x4B)**: considered "far away" - score bonus for position evaluation

---

## Difficulty and AI Parameters

### Player Type and Difficulty (`gameState + 0xC0`)

The `short[8]` at offset 0xC0 stores AI difficulty per player:
- **0**: Knight (easiest AI)
- **1**: Baron
- **2**: King
- **3**: Emperor (hardest AI)

When a computer player's difficulty is checked (`gameState + 0xd0 == 1`), the `0xc0` value determines aggressiveness.

### Difficulty Effects

The AI difficulty affects behavior in several ways:

1. **Turn-based timer scaling** (seen in FUN_100159c8):
   ```
   if aiState.siegeMode:
       turnLimit = gameState.turnNumber (offset 0x136)
       if turnLimit < 2: turnLimit = 1
       searchRange = turnLimit * 2
       if searchRange > normalRange: searchRange = normalRange
   ```
   Higher difficulty = wider search ranges earlier in the game.

2. **Distance thresholds for city attacks**:
   ```
   if turnNumber < 6:
       distanceThreshold = 10    // conservative early
   else:
       distanceThreshold = 15    // aggressive later
   ```

3. **Human threat threshold** (`aiState + 0x44`):
   For human players, the AI uses a configurable threshold (from the AI resource) to determine when a player is "dominant." Computer opponents always use 50%.

### AI Resource (1200 bytes = 150 per player x 8 players)

The AI resource loaded at address referenced by `FUN_100f15e0(0x4B0, 0x4B0, 0)` contains tuning parameters. Based on observed usage, the 150-byte per-player block likely maps as:

```
Offset  Size  Proposed Parameter
------  ----  ------------------
+0x00   2     short aiEnabled (0=off, 1=on)
+0x02   2     short heroHiringEnabled
+0x04-  ...   (unknown - possibly unused or scenario-specific)
+0x20   2     short minProductionLevel
+0x30   2     short productionBonusA
+0x32   2     short productionBonusB
+0x34   2     short productionBonusC
+0x38   2     short allianceAIEnabled
+0x3A   2     short minArmyStrength
+0x44   2     short humanThreatThreshold (typically 50-80)
+0x48   2     short siegeModeEnabled
+0x4A-0x95    (remaining parameters, likely combat weights,
              expansion priorities, defensive ratios)
```

The exact mapping of all 150 bytes would require testing with modified scenario files, but the key parameters identified above are confirmed through code analysis.

### Difficulty Level Impact on AI_StrategicAssessment

The difficulty stored at `gameState + 0xC0` per player also influences the "starting AI level" for computer opponents in the scenario setup (lines 53351, 53499, 81492):

```
if playerType == computer && playerActive != 0:
    effectiveDifficulty = aiDifficulty + 7   // maps 0-3 to 7-10
```

This effective difficulty is used to select from 4 difficulty tiers in combat resolution (value 4 = easiest to 10+ = hardest), affecting how many troops the AI builds before attacking.

---

## Dice Function

**Function:** `DiceRoll` (FUN_1005f230, 252 bytes)

```
function DiceRoll(numDice, dieSize, bonus):
    if dieSize == 0: return bonus

    total = 0
    for i = 0 to numDice-1:
        randomValue = getRandomInt()     // hardware RNG
        roll = floor(abs(normalize(randomValue)) * dieSize)
        total += roll

    result = total + bonus

    // Clamp to valid range
    minResult = bonus + numDice           // minimum: all 1s
    maxResult = numDice * dieSize + bonus  // maximum: all max

    if result < minResult: result = minResult
    if result > maxResult: result = maxResult

    return result
```

### Common Dice Rolls Used by AI

| Call | Range | Context |
|------|-------|---------|
| `DiceRoll(1, 10, 0)` | 1-10 | Hero hiring check (>7 = hire) |
| `DiceRoll(1, 2, 0)` | 1-2 | Tiebreaker for equal scores |
| `DiceRoll(1, 2, -1)` | 0-1 | Boolean coin flip |
| `DiceRoll(1, 20, 20)` | 21-40 | City target scoring |
| `DiceRoll(1, 20, 0)` | 1-20 | Army/ruin target scoring |
| `DiceRoll(1, 100, 0)` | 1-100 | Production randomization |
| `DiceRoll(1, 100, 50)` | 51-150 | Weighted production roll |
| `DiceRoll(1, 100, 100)` | 101-200 | High-value production roll |
| `DiceRoll(1, 6, -1)` | 0-5 | Movement randomization |
| `DiceRoll(1, 1000, 0)` | 1-1000 | Large-scale strategic rolls |
| `DiceRoll(3, 500, 500)` | 503-2000 | Combat strength estimation |
| `DiceRoll(1, 11, -5)` | -4 to 6 | Offset/penalty rolls |
| `DiceRoll(1, 5, 0)` | 1-5 | Small tactical rolls |
| `DiceRoll(1, 4, 0)` | 1-4 | Direction selection |
| `DiceRoll(1, 15, 0)` | 1-15 | Ruin exploration bonus |

---

## Complete AI Turn Flow Summary

```
AI TURN START
    |
    v
[Phase 1] STRATEGIC ASSESSMENT (FUN_10011804)
    - Claim neutral armies near capital
    - Count all armies by player
    - Evaluate threats per player
    - Set diplomacy stance (hostile/allied/neutral)
    - Identify dominant player and form coalitions
    |
    v
[Phase 2] HERO MANAGEMENT (FUN_100164e4)
    - Sort heroes by importance
    - For each hero:
      - Assemble best available army around hero
      - Check for active alliance quests
      - Evaluate nearby cities, ruins, enemy armies
      - DECIDE: attack city (1) / explore ruin (2) / attack weak city (3) / attack army (4)
      - Execute chosen action
    |
    v
[Phase 3] CITY DEFENSE (FUN_10013774)
    - Assign defending units to cities
    - Heroes first, then regular units
    - Cull excess defenders (> 7 flyers)
    - Track defender counts
    |
    v
[Phase 4] ARMY MOVEMENT (FUN_10014214)
    - Move all flagged units along their paths
    - Heroes get priority movement
    - Handle combat encounters en route
    |
    v
[Phase 5] ATTACK GROUPS (FUN_1001d014)
    - Run production planning (compute army strength needs)
    - Advance attack groups toward targets
    - Form new groups when enough units gathered
    |
    v
[Phase 6] REMAINING ARMIES (FUN_100114d4)
    - Process all armies not yet handled
    - Assign states: building up / moving / waiting
    |
    v
[Phase 7] DIPLOMACY/ORDERS (FUN_1001aa9c)
    - Process follow-orders for grouped units
    - Manage unit assignments within groups
    |
    v
[Phase 8] PRODUCTION (FUN_1001f9e4)
    - Categorize all armies (own/enemy/neutral/threatening)
    - Increment army age counters
    - Activate idle armies
    - Convert attacking armies to ready state
    - Recall defenders if needed
    |
    v
[Phase 9-12] CLEANUP PASSES
    - Secondary defense assignment
    - Hero special actions (ruin exploration)
    - End-of-turn state cleanup
    - Final consistency pass
    |
    v
AI TURN END
```

---

## Summary of Key AI Behaviors

1. **Coalition Formation**: The AI actively identifies the strongest player and forms alliances against them. Human players have a configurable threat threshold; AI opponents use a fixed 50% threshold.

2. **Army Diversity**: The AI strongly prefers mixed armies with one of each unit type (hero, flyer, mounted, heavy, siege, infantry, naval, ranged) over pure-strength stacks.

3. **Graduated Aggression**: Armies go through states (idle -> building -> moving -> attacking), and the AI won't commit to attacks until sufficient force is assembled.

4. **Hero-Centric**: Heroes are always processed first and get the best units. The AI decision tree for heroes considers cities, ruins, and enemy armies with dice-based randomization.

5. **Distance-Based Targeting**: All target selection uses Manhattan distance with randomized offsets, creating a "closest target with variance" behavior rather than purely optimal play.

6. **Economic Awareness**: Hero hiring requires 400+ gold with 100 reserve. Production decisions factor in unit cost, strength-to-upkeep ratio, and special abilities.

7. **Defensive Flexibility**: The AI maintains separate defender counts for regular and flying units, and dynamically recalls defenders from attack duty when threatened.

8. **Randomization**: Nearly every decision includes dice rolls (1d2 to 1d1000), making the AI somewhat unpredictable while still following strategic priorities.
