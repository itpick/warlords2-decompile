# Warlords II: Economy, City Production, Hero, Item, and Quest Systems
## Reverse Engineering Analysis from PowerPC Decompilation

---

## Table of Contents
1. [Global Data Structures](#1-global-data-structures)
2. [Economy System](#2-economy-system)
3. [City Production System](#3-city-production-system)
4. [Hero System](#4-hero-system)
5. [Item System](#5-item-system)
6. [Ruins, Temples, and Search Mechanics](#6-ruins-temples-and-search-mechanics)
7. [Quest System](#7-quest-system)
8. [Diplomacy System](#8-diplomacy-system)
9. [Turn Sequence](#9-turn-sequence)
10. [Key Function Reference](#10-key-function-reference)

---

## 1. Global Data Structures

### Primary Game State Pointer: `piRam1011735c` (GameState*)

This is the master game state structure. All player, city, army, and hero data hangs off this pointer. Key offsets:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x0110 | short | currentPlayerIndex | Index (0-7) of the active player |
| 0x0114 | short | heroNamingEnabled | Whether heroes get named |
| 0x0116 | short | enhancedStartGold | If set, +400 to initial hero score |
| 0x0118 | short | turnAdvanceFlag | Set to 1 when turn counter should increment |
| 0x011A | short | gameVariant | Number > 1 enables neutral city growth |
| 0x011C | short | diplomacyEnabled | Whether diplomacy system is active |
| 0x0122 | short | randomTurnOrder | If nonzero, shuffle player order each round |
| 0x0124 | short | fogOfWarEnabled | Fog of war toggle |
| 0x0128 | short | neutralExpansion | Neutrals can claim unclaimed cities |
| 0x0136 | short | turnNumber | Current turn number (starts at 1) |
| 0x0138 + p*2 | short | playerAlive[p] | Nonzero if player p is alive |
| 0x0148 + p*2 | short | playerHumanFlags[p] | Human/AI flag per player |
| 0x015A | short | networkGameFlag | Nonzero if multiplayer/network |
| 0x015C | short | victoryAchieved | Set to 1 when victory conditions met |
| 0x015E | short | dominationFlag | Set when dominant player detected |
| 0x0164 + i*2 | short | turnOrder[i] | Player order array (shuffled if random) |
| 0x0174 | short | turnOrderIndex | Current index into turnOrder[] |
| 0x0176 | short | viewportMinY | Viewport Y min |
| 0x0178 | short | viewportMinX | Viewport X min |
| 0x017A | short | viewportMaxY | Viewport Y max |
| 0x017C | short | viewportMaxX | Viewport X max |
| 0x017E | short | capitalX | Capital city X for current player |
| 0x0180 | short | capitalY | Capital city Y for current player |
| 0x0182 | short | armyStackCount | Number of army stacks (init to 10) |

### Per-Player Data (stride 0x14 = 20 bytes, indexed by player 0-7)

Stored at `GameState + playerIndex * 0x14 + base_offset`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x0186 | short | gold | Player's gold treasury (max 30000) |
| 0x0188 | short | unknown_188 | |
| 0x018A | short | capitalCityX | X coordinate of player's capital |
| 0x018C | short | capitalCityY | Y coordinate of player's capital |
| 0x0194 | short | prevCapitalX | Previous capital X (saved each turn) |
| 0x0196 | short | prevCapitalY | Previous capital Y (saved each turn) |

### Per-Player Data (stride 0x10 = 16 bytes, base 0x1582)

Diplomacy relation matrix at `GameState + playerA * 0x10 + playerB * 2 + 0x1582`:

| Bits | Meaning |
|------|---------|
| bits 31-30 (>> 0x1E) | Diplomacy offer pending flag |
| bits 29-28 (>> 0x1C) | Outgoing stance (0=neutral, 1=peace, 2=war/allied) |
| bits 27-26 (>> 0x1A) | Incoming stance from other player |

### Per-Player Data (stride 0x0C = 12 bytes, base 0x1142)

Quest data at `GameState + playerIndex * 0x0C + offset`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x1142 | short | questActive | Nonzero if player has an active quest |
| 0x1144 | short | questType | Quest type: 4=capture city, 5=kill army at location |
| 0x1146 | short | questTargetArmy | Army stack index for quest target |
| 0x1148 | short | questTargetCity | City index for quest target |

### Per-Player Score Data (stride 2, base 0x1122)

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x1122 + p*2 | short | heroScore[p] | "Hero hire score" - accumulates to trigger hero offers |

### Per-Player Statistics (stride 0x50, base 0x11A2)

Counters at `GameState + playerIndex * 0x50 + offset`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x11A2 | short | stat_citiesCaptured | Cities captured |
| 0x11A4 | short | stat_citiesLost | Cities lost |
| 0x11A6 | short | stat_battlesWon | Battles won |
| 0x11A8 | short | stat_battlesLost | Battles lost |
| 0x11AA | short | stat_armiesKilled | Armies killed |

### City/Location Data (stride 0x20 = 32 bytes, base 0x0812)

Total city count at offset 0x0810 (short). Each city at `GameState + cityIndex * 0x20 + offset`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x0812 | short | cityX | City X coordinate |
| 0x0814 | short | cityY | City Y coordinate |
| 0x0818 | char | cityType | 0x01=ruin, 0x02=temple/sage, 0x03=library, 0x05=temple(bless) |
| 0x0819 | char | searchParam1 | Temple/sage index |
| 0x081A | char | searchParam2 | Item index for ruins |
| 0x081C | short | searchRewardParam | Additional parameter |
| 0x082A | char | locationType | 0x01=ruin, 0x02=temple, 0x03=library, 0x05=temple |
| 0x082B | char | templeIndex | Index into temple array |
| 0x082E | short | cityDefenseValue | Defense value of city |
| 0x0830 | short | cityVisitedBitmask | Bitmask of which players have visited |

### Hero/Army Unit Data (stride 0x42 = 66 bytes, base 0x1604)

Total hero/unit count at offset 0x1602 (short). Each hero at `GameState + heroIndex * 0x42 + offset`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x1604 | short | unitX | X coordinate |
| 0x1606 | short | unitY | Y coordinate |
| 0x1608 | 20 bytes | unitName | Name string |
| 0x1618 | byte | unitGraphicType | Visual type index |
| 0x1619 | char | unitOwner | Owner player index (0-7), 0x0F = neutral |
| 0x161A-161D | char[4] | armySlots[4] | Army type IDs in this stack (0xFF = empty) |
| 0x161E-1621 | char[4] | armyMovement[4] | Movement points per unit |
| 0x1622-1625 | char[4] | armyStrength[4] | Strength per unit |
| 0x1626-1629 | char[4] | armyHitPoints[4] | Hit points per unit |
| 0x162A-162D | char[4] | armyUpkeep[4] | Upkeep cost per unit |
| 0x1630 | char | heroItemSlot | Item equipped (-1 = none) |
| 0x1631 | char | heroHPTimer | HP regeneration timer (counts down) |
| 0x1633 | char | heroOrigOwner | Original owner (for tracking defection) |
| 0x1634 | char | isHeroFlag | Nonzero if this is a hero unit |
| 0x1636 | short | heroQuestFlag | Nonzero if hero has active quest |
| 0x1638 | short | heroQuestTargetX | Quest target X |
| 0x163A | short | heroQuestTargetY | Quest target Y |

### Temple/Sage Data (stride 0x1E = 30 bytes, base 0x0D12)

Temples at `GameState + templeIndex * 0x1E + offset`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x0D12 | 22 bytes | templeName | Name string |
| 0x0D28 | char | templeState | 0=available, 1=quest given, 3=army stationed |
| 0x0D2A | short | templeGuardStack | Army stack guarding temple |
| 0x0D2C | short | questGiverX | X of hero who was given quest |
| 0x0D2E | short | questGiverY | Y of hero who was given quest |

### Army Type Data (piRam101175d0, stride 0x3E = 62 bytes)

There are 0x1D (29) army types. Accessed via `FUN_10049628(armyTypeID, outputBuffer)`:

| Offset | Type | Name | Description |
|--------|------|------|-------------|
| 0x00 | short | typeID | Army type ID |
| 0x02 | 20 bytes | typeName | Name string |
| 0x16 | short | strength | Base strength value |
| 0x18 | short | cost | Gold cost to produce |
| 0x1A | short | movement | Movement points |
| 0x1C | short | hitPoints | Hit points |
| 0x1E | short | upkeep | Per-turn upkeep |

---

## 2. Economy System

### 2.1 Gold Treasury

- **Storage**: `GameState[playerIndex * 0x14 + 0x186]` (short)
- **Maximum**: 30,000 gold (hard cap, enforced in multiple places)
- **Minimum**: Can go negative implicitly, but logic prevents spending below 0
- **Initial value**: 0 for eliminated players; each active player starts with gold set during game initialization

### 2.2 Income Calculation

Gold income is NOT calculated as a simple per-turn formula. Instead, gold is awarded in specific situations:

#### Ruins Gold Discovery (FUN_100539e8 - `ProcessRuinsSearch`)
When a hero searches ruins and finds gold (search result type 0x04):

```c
// FUN_100539e8, around line 51230-51241
if (searchResultType == 0x04) {
    if (param_1->specialFlag == 0) {
        goldFound = DiceRoll(3, 500, 500);   // 3d500+500 = range 503-2000
    } else {
        goldFound = DiceRoll(3, 1000, 1000);  // 3d1000+1000 = range 1003-4000
    }
    // Mark location as searched
    mapFlags |= 0x400000;
    // Add gold to player treasury
    playerGold[currentPlayer] += goldFound;
}
```

**Gold from ruins**:
- Normal ruins: `3d500 + 500` = 503 to 2,000 gold
- Enhanced/special ruins: `3d1000 + 1000` = 1,003 to 4,000 gold

#### Ally Gold Discovery (FUN_10054824 - `ProcessAllyGold`)
When finding gold through ally/random events:

```c
// FUN_10054824, line 51466
goldFound = DiceRoll(3, 500, 500);  // 3d500+500 = 503-2000
newGold = playerGold[currentPlayer] + goldFound;
if (newGold > 30000) newGold = 30000;
playerGold[currentPlayer] = newGold;
```

#### Hero Arrival Gold (FUN_100126a4 - `ProcessHeroArrival`)
When a hero appears via special events, gold is also awarded through `DiceRoll(3, 500, 500)`:

```c
// FUN_100126a4, line 18087
gold = playerGold[currentPlayer] + goldFromEvent;
if (gold > 30000) gold = 30000;
playerGold[currentPlayer] = gold;
```

#### City Capture Gold
When capturing a city, gold is transferred based on the city's defense value and the attacker's combat performance. Key statistic counters at offsets 0x11A6 (battles won) and 0x11AA (armies killed) are incremented.

### 2.3 Upkeep System

Army upkeep is stored per-unit in the army stack at offset 0x162A (4 bytes for 4 units in a stack). The upkeep value is read from the army type definition (offset 0x1C in the army type record).

The upkeep display strings confirm the system:
- `"Your Income- pay %d gold!"` - displayed at start of turn
- `"Your Upkeep"` - section header in treasury view
- `"You have %d gold!"` - current treasury display
- `"You earn %d gold!"` - income display

### 2.4 Gold Cap Check (FUN_1000d1a4 - `AI_CheckGoldForHiring`)

```c
// Line 14769-14780
if (playerGold[currentPlayer] > 399) {
    // Player has enough gold - consider hiring
    heroCandidate = SelectHeroCandidate(DiceRoll(1,10,0) > 7);
    if (heroCandidate != -1) {
        GetHeroStats(heroCandidate, &stats);
        if (stats.strength > 2 && playerGold[currentPlayer] >= stats.upkeep + 100) {
            // Hire the hero
            ProcessHeroHire(heroCandidate);
        }
    }
}
```

**Key insight**: AI will only consider hiring heroes when gold > 399, and requires gold >= (hero_upkeep + 100).

### 2.5 Low Gold Detection

```c
// Line 14870, 18243
if (playerGold[currentPlayer] < 40  // 0x28 = 40 gold
    && incomeCities < expenditureCities) {
    // Player is in financial trouble - trigger special behavior
    lowGoldBehavior = true;
}
```

**Financial trouble threshold**: Gold < 40 AND more expenses than income.

---

## 3. City Production System

### 3.1 City Capital System (FUN_1003c068 - `InitializeCityOwnership`)

Each player has a capital city stored at offset 0x18A/0x18C (x,y coordinates). The capital is the city closest to the player's start position.

```c
// Line 39640-39717 (FUN_1003c068)
for (player = 7; player >= 0; player--) {
    if (playerAlive[player] == 0) {
        // Dead player - set capital to invalid
        prevCapitalX[player] = 0xFFFF;
        prevCapitalY[player] = 0xFFFF;
    } else {
        // Save previous capital location
        prevCapitalX[player] = capitalX[player];
        prevCapitalY[player] = capitalY[player];
    }

    cityIndex = FindCityAt(capitalX[player], capitalY[player]);
    if (cityIndex >= 0) {
        if (playerAlive[player] == 0) {
            SetCityOwner(cityIndex, NEUTRAL);
        } else {
            SetCityOwner(cityIndex, player);
        }
    }
}
```

### 3.2 Army Production in Cities

Each city can produce army units. The city's production slot holds an army type ID. The production is stored in the city/location data at offset 0x18A (what army type is being built).

The production change function `FUN_1002bf64` searches for a city at given coordinates and updates its production assignment. The function `FUN_1000a884` calculates Manhattan distance between two points, used for proximity checks.

### 3.3 Army Type Data (FUN_10049628 - `GetArmyTypeData`)

```c
// Line 47240-47301
void GetArmyTypeData(short armyTypeID, ArmyTypeRecord* output) {
    ArmyTypeData* data = armyTypeDatabase;  // piRam101175d0
    LockResource();  // FUN_10048ccc
    for (int i = 0; i < 29; i++) {  // 0x1D army types
        if (data[i].typeID == armyTypeID) {
            memcpy(output, &data[i], 62);  // 0x3E bytes per record
            break;
        }
    }
    UnlockResource();  // FUN_10049010
}
```

**Army type record structure (62 bytes)**:
- Bytes 0-1: Type ID
- Bytes 2-21: Name (20 chars)
- Bytes 22-23 (offset 0x16): Strength
- Bytes 24-25 (offset 0x18): Gold cost
- Bytes 26-27 (offset 0x1A): Movement points
- Bytes 28-29 (offset 0x1C): Hit points
- Bytes 30-31 (offset 0x1E): Upkeep cost

### 3.4 Production Turn Tracking

The game tracks per-turn unit statistics through the stats system at offsets 0x11A2-0x11AA per player, incrementing counters for battles won, cities captured, and armies killed.

---

## 4. Hero System

### 4.1 Hero Selection (FUN_10020f94 - `SelectHeroCandidate`)

This function selects which army type to offer as a hero based on a scoring algorithm:

```c
// Line 26724-26824
// Proposed name: SelectHeroCandidate
longlong SelectHeroCandidate(short isExpensive) {
    int bestCandidate = -1;
    short bestScore = 0;
    short maxCost, minStrength;
    int retryCount = 0;

    if (isExpensive == 0) {
        maxCost = 800;
        minStrength = 4;
    } else {
        maxCost = 1500;    // 0x5DC
        minStrength = 5;
    }

    while (true) {
        for (int i = 0; i < 29; i++) {  // 0x1D army types
            GetArmyTypeData(i, &stats);
            if (stats.isSpecial != 0 || i == 28 || i == 5) continue;  // Skip special types
            if (stats.upkeep < 0 || stats.upkeep > maxCost) continue;

            short score = stats.strength - stats.hitPoints;
            if (stats.strength >= minStrength) {
                // Bonus for cheap units
                if (stats.upkeep <= maxCost - 200) score++;
                if (stats.upkeep <= maxCost - 400) score++;
                // Bonus for high movement
                if (stats.movement > 11) score++;
                if (stats.movement > 15) score++;
                // Bonus for special abilities
                if (stats.hasRanged) score++;
                if (stats.hasFlight || stats.hasNaval) score++;
                if (stats.hasForest || stats.hasHill || stats.hasMountain) score++;
                if (stats.hasSwamp) score++;
                if (stats.hasSiege) score++;
                if (stats.isHeroType) score += 2;
            }

            if (score > 1) {
                // Add randomness: score += DiceRoll(1, score*2, 0)
                short bonus = DiceRoll(1, score * 2, 0);
                score += bonus;
            }

            if (score > bestScore ||
                (score == bestScore && DiceRoll(1,2,-1) != 0)) {
                bestCandidate = i;
                bestScore = score;
            }
        }

        if (bestCandidate != -1 || retryCount > 3) break;
        retryCount++;
        maxCost += 500;   // Increase budget on retry
        minStrength--;
        if (minStrength < 1) minStrength = 1;
    }
    return bestCandidate;
}
```

**Key mechanics**:
- Normal heroes: max cost 800, min strength 4
- Expensive heroes: max cost 1500, min strength 5
- Scoring considers: strength, movement, special abilities, hero flag
- If no candidate found after 4 tries (expanding budget by 500 each time), returns -1

### 4.2 Hero Hire Score (FUN_1003c368 - `GameInit`, FUN_1004f664 - `ProcessHeroHireReward`)

The hero hire score accumulates at `GameState[playerIndex * 2 + 0x1122]`:

```c
// Game initialization (line 39882-39890)
for (int player = 0; player < 8; player++) {
    heroScore[player] = DiceRoll(1, 8, 0);  // Random 1-8
    if (enhancedStartGold && playerAlive[player]) {
        heroScore[player] += 400;  // Big boost if enhanced mode
    }
}
```

```c
// Hero hire reward (FUN_1004f664, line 49061-49065)
short bonus = DiceRoll(1, 25, 0);  // 0x19 = 25
heroScore[currentPlayer] += bonus + 100;
```

**The hero score accumulates over time**. When it reaches a threshold, the player is offered a hero. The reward for completing actions (battles, city captures) increases the score. Score increases of +10 to +25 are added after successful city captures (`FUN_1001bbf0`, line 23649):

```c
// After capturing a city with a hero
short bonus = DiceRoll(1, 15, 0);  // 0x0F = 15
heroScore[currentPlayer] += bonus + 10;
```

### 4.3 Hero Strength Modification (FUN_10021200 - `ModifyHeroStrength`)

```c
// Line 26831-26840
void ModifyHeroStrength(int heroPtr, char modifier) {
    char newStr = heroPtr->strength + modifier;
    heroPtr->strength = newStr;
    if (newStr > 9) {
        heroPtr->strength = 9;  // Max strength cap = 9
    }
}
```

**Hero strength is capped at 9.**

### 4.4 Hero Army Stack Sorting (FUN_100496c8)

Hero army stacks are sorted by priority within their 4-slot formation. The game sorts units based on army type name priority, maintaining the strongest units first.

---

## 5. Item System

### 5.1 Item Data Structure

Items are loaded from the `RANDOM.ITM` resource file. The binary string at address `0x12A2FA` confirms: `"RANDOM.ITM"`.

From the task description, there are 39 items with the following types:
- Type 1: Weapon (combat bonus)
- Type 2: Artifact (general bonus)
- Type 5: Flight (grants flight ability)
- Type 6: Speed (movement bonus)
- Type 7: Gold (income bonus)

Items have tiers 1-3, with higher tiers providing greater bonuses.

### 5.2 Item Discovery

Items are found when searching ruins (search result type 0x05 in `FUN_100539e8`):

```c
// Line 51254-51317 (search result type 0x05)
if (searchResultType == 0x05) {
    // Mark location searched
    mapFlags |= 0x400000;

    int roll = DiceRoll(1, 2, 0);  // 50/50 base chance
    if (specialFlag != 0) {
        roll += 2;  // Special locations boost chance
    }

    if (roll < 2) {
        // Found item! (with quantity based on roll)
        itemName = GetItemName(param_1->itemIndex);
        // Display item found message
        DisplayMessage(STRING_0x37, 0, itemName, heroName);
    } else {
        // Found multiple items
        DisplayMessage(STRING_0x37, 1, roll, itemName, heroName);
    }

    // Place items on map
    for (int i = 0; i < roll; i++) {
        itemLocation = PlaceItemOnMap(itemIndex, x, y);
        if (itemLocation != NULL) {
            mapFlags[itemLocation] |= 0x100000;  // Mark item present
        }
    }
}
```

### 5.3 Item Name Lookup (FUN_1004a21c - `GetItemName`)

```c
// Line 47737-47759
char* GetItemName(short itemTypeID) {
    ItemData* items = itemDatabase;  // piRam101175d0
    LockResource();
    for (int i = 0; i < 29; i++) {
        if (items[i].typeID == itemTypeID) {
            memcpy(outputBuffer, &items[i].name, 20);  // Copy name
            break;
        }
    }
    UnlockResource();
    return outputBuffer;
}
```

### 5.4 Item Stat Lookup (FUN_1004a0c4 - `GetItemStats`)

```c
// Line 47670-47697
int GetItemStats(short itemID, short* cost, short* strength,
                 short* movement, short* upkeep, short* hitPoints) {
    ItemData* items = itemDatabase;
    LockResource();
    for (int i = 0; i < 29; i++) {
        if (items[i].typeID == itemID) {
            *upkeep = items[i].field_0x1E;      // Upkeep
            *cost = items[i].field_0x18;         // Cost
            *strength = items[i].field_0x16;     // Strength
            *movement = items[i].field_0x1A;     // Movement
            *hitPoints = items[i].field_0x1C;    // Hit points
            break;
        }
    }
    UnlockResource();
    return i;  // Returns index
}
```

### 5.5 Gold Bonus Display

The string `"gold +%d"` at address `0x128446` is used in the hero inspect/items dialog (`THeroInspectDialogBehavior`) to show gold-generating items.

---

## 6. Ruins, Temples, and Search Mechanics

### 6.1 Search Function (FUN_100539e8 - `ProcessRuinsSearch`)

**Proposed name**: `ProcessRuinsSearch(locationData, param_x, param_y)`

This is the main function handling what happens when a hero searches a ruin, temple, or library. The location data at `param_1 + 0x18` determines the search type:

```c
// Line 51107-51317
void ProcessRuinsSearch(LocationData* loc, short x, short y) {
    bool isAutoMode = (*playerControl == 0) &&
                       (playerStatus[currentPlayer] != 1);

    // Handle army already being commanded elsewhere
    PrepareArmyForSearch(*armyStack, 3);

    char searchType = loc->searchType;  // offset 0x18

    // TYPE 0x05: Already searched / nothing
    if (searchType == 0x05) return;

    // Check for item-guarded location
    if (loc->guardType != 0) {  // offset 0x1A
        if (!isAutoMode) {
            // Display guardian description
            // "an [vowel] <name>" vs "a <name>" grammar check
            char firstChar = toLower(guardianName[0]);
            if (isVowel(firstChar)) {
                DisplayMessage(0x34, 3, heroName, guardianName);
            } else {
                DisplayMessage(0x34, 0, heroName, guardianName);
            }
        }

        // Fight the guardian
        int battleResult = FightGuardian(loc);
        if (battleResult != 0) {
            // Won the battle
            battlesWon[currentPlayer]++;
            armiesKilled[currentPlayer] += deadEnemyCount;
            // Remove army from map, clear selection
            return;
        }

        if (!isAutoMode) {
            DisplayMessage(0x34, 2, ...);  // Defeat message
        }
        loc->guardType = 0;  // Guardian removed
    }

    // TYPE 0x02: Temple/Sage - gives quest
    if (searchType == 0x02) {
        if (isAutoMode) {
            // AI: station army at temple
            templeSage->state = 3;
            templeSage->guardStack = armyStackIndex;
        } else {
            // Human: assign quest
            DisplayMessage(0x35, 0, heroName, templeName);
            templeSage->state = 1;  // Quest given
            templeSage->questX = x;
            templeSage->questY = y;
        }
        RecordEvent(currentPlayer, 6, templeIndex, 0, heroName);
        mapFlags |= 0x400000;  // Mark as visited
        loc->searchType = 0;
    }

    // TYPE 0x04: Gold treasure
    else if (searchType == 0x04) {
        short gold;
        if (loc->specialFlag == 0) {
            gold = DiceRoll(3, 500, 500);    // 503-2000 gold
        } else {
            gold = DiceRoll(3, 1000, 1000);  // 1003-4000 gold
        }
        mapFlags |= 0x400000;
        playerGold[currentPlayer] += gold;

        if (!isAutoMode) {
            DisplayMessage(0x36, 0, heroName, gold);
        }
        RecordEvent(currentPlayer, 6, 0x66, 0, heroName);
    }

    // TYPE 0x05: Item
    else if (searchType == 0x05) {
        mapFlags |= 0x400000;
        int itemCount = DiceRoll(1, 2, 0);  // 1-2 items
        if (loc->specialFlag != 0) {
            itemCount += 2;  // Special: 3-4 items
        }

        if (itemCount < 2) {
            // Single item message
            itemName = GetItemName(loc->itemIndex);
            DisplayMessage(0x37, 0, itemName, heroName);
        } else {
            // Multiple items message
            itemName = GetItemName(loc->itemIndex);
            DisplayMessage(0x37, 1, itemCount, itemName, heroName);
        }

        // Place items on map
        for (int i = 0; i < itemCount; i++) {
            PlaceItemOnMap(loc->itemIndex, x, y);
        }
        RecordEvent(currentPlayer, 6, 100, 0, heroName);
    }
}
```

### 6.2 Search Result Types

| Type | Code | Description | Reward |
|------|------|-------------|--------|
| 0x00 | Empty | Nothing found | - |
| 0x02 | Temple | Quest/blessing | Quest assignment |
| 0x04 | Gold | Gold treasure | 503-2000 (normal), 1003-4000 (special) |
| 0x05 | Item | Item discovery | 1-2 items (normal), 3-4 items (special) |

### 6.3 Location Type Codes (from terrain lookup)

The terrain byte at the top byte of the map tile data (shifted >> 24) indexes into a lookup table at `GameState + 0x711`:

| Code | Terrain |
|------|---------|
| 0x01 | Plains |
| 0x02 | Forest/light |
| 0x03 | Hills |
| 0x07 | Open/generic |
| 0x0A | Neutral territory |
| 0x0B | City |
| 0x0F | Neutral/unclaimed |

---

## 7. Quest System

### 7.1 Quest Data Structure

Quests are tracked per-player at `GameState + playerIndex * 0x0C + 0x1142`:

```c
struct QuestData {
    short questActive;      // 0x1142: nonzero = has quest
    short questType;        // 0x1144: 4=capture city, 5=kill army
    short questTargetArmy;  // 0x1146: target army stack index
    short questTargetCity;  // 0x1148: target city index
};
```

### 7.2 Quest Assignment (via Temple/Sage search)

Quests are assigned when a hero visits a temple/sage (search type 0x02). The temple's state changes from 0 (available) to 1 (quest given), and the quest target coordinates are stored.

### 7.3 Quest Completion Check (FUN_10012a8c - `CheckQuestCompletion`)

```c
// Line 18130-18185
longlong CheckQuestCompletion(short cityOrArmyIndex, short param2) {
    if (questData[currentPlayer].questActive == 0) return cityOrArmyIndex;

    // Check if hero is at quest target
    bool heroAtTarget = false;
    if (questData[currentPlayer].questActive != 0) {
        // Check all heroes for being at quest location
        for (short i = numHeroes - 1; i >= 0; i--) {
            if (armyStacks[i] == questTargetArmyStack) {
                heroAtTarget = true;
            }
        }

        if (heroAtTarget) {
            short questType = questData[currentPlayer].questType;

            if (questType == 4 || questType == 5) {
                // Check if target matches
                int targetCity = FindCityAt(param1, param2);
                if (targetCity == questData[currentPlayer].questTargetCity) {
                    // QUEST COMPLETE!
                    gameData->completedQuests++;  // offset 0x4A
                    gameData->activeQuestSlot = 0xFFFF;

                    if (questType == 5) {
                        // Kill quest: liberate the city
                        LiberateCity(cityIndex, 1);
                        if (questData[currentPlayer].questActive == 0) {
                            return 0;
                        } else {
                            return ShowQuestReward(2, 0, 0, 0);
                        }
                    } else {
                        // Capture quest
                        if (questData[currentPlayer].questActive == 0) {
                            return 0;
                        } else {
                            return ShowQuestReward(4, 0, 0, 0);
                        }
                    }
                }
            }
        }
    }
    return cityOrArmyIndex;
}
```

### 7.4 Quest Reward (FUN_1004e384 - `ShowQuestReward`)

```c
// Line 48908-48942
longlong ShowQuestReward(short rewardType, ...) {
    int gameState = *piRam1011735c;
    short currentPlayer = gameState->currentPlayerIndex;

    // Check if quest target still belongs to quest giver
    short targetOwner = armyStacks[questData[currentPlayer].questTargetArmy].owner;
    if (targetOwner == currentPlayer) {
        // Quest target is already ours - reward based on type
        if ((rewardType + 1) < 6) {
            return rewardType;  // Return reward code
        }
    } else {
        // Quest giver is not us - quest fails
        if (!isAutoMode) {
            DisplayMessage(0x21, 1, ...);  // Quest completion message
            DisplayMessage(0x21, 0, ...);
            ShowDialog(completionMsg, rewardMsg);
        }
        questData[currentPlayer].questActive = 0;  // Clear quest
    }
    return 0;
}
```

### 7.5 Quest Types

| Type | Description | Completion Condition |
|------|-------------|---------------------|
| 4 | Capture City | Move army to target city and capture it |
| 5 | Kill Army / Liberate | Defeat army at target location |

### 7.6 Quest Strings

- `"%s's Quest"` (0x11E44B) - Quest title format
- `"Blessings & Quests!"` (0x11D6B8) - Temple menu header
- `"#%03d|The %s can bless your|armies or give you|quests|"` (0x12A3B3) - Temple description
- `"%s Temple"` (0x12A3A8) - Temple name format

---

## 8. Diplomacy System

### 8.1 Diplomacy State Matrix

Diplomacy relations are stored in a matrix at `GameState + playerA * 0x10 + playerB * 2 + 0x1582` as a bitfield within a 32-bit integer:

```
Bits 31-30: Offer pending flags
Bits 29-28: Player A's stance toward Player B
  0 = No relation / Neutral
  1 = Peace
  2 = War / Allied
Bits 27-26: Player B's stance toward Player A (mirrored)
```

### 8.2 Diplomacy State Changes (from FUN_10017470 area)

```c
// Setting war state (line 17597)
diplomacy[playerA][currentPlayer] =
    (diplomacy[playerA][currentPlayer] & 0xCFFFFFFF) | 0x20000000;  // Set war

// Setting peace (line 17602)
diplomacy[player][currentPlayer] =
    (diplomacy[player][currentPlayer] & 0xCFFFFFFF) | 0x10000000;  // Set peace

// Clearing relations (line 17533)
diplomacy[currentPlayer][otherPlayer] &= 0xCFFFFFFF;  // Clear to neutral
```

### 8.3 Diplomacy Check in Movement (FUN_1003b4a4 - `CheckMovementTarget`)

When a player tries to move into a tile, diplomacy is checked:

```c
// Line 39316-39344
if (diplomacyEnabled == 0 || tileOwner == 0x0F) {  // No diplomacy or neutral
    return MOVE_ATTACK;  // 8 = attack
} else if (terrainType == NEUTRAL_CITY) {
    // Check diplomatic stance
    int stance = (diplomacy[currentPlayer][tileOwner] >> 26) & 3;
    if (stance == 2) {  // War
        return MOVE_ATTACK;
    } else {
        return MOVE_DIPLOMATIC;  // 10 = need diplomacy check
    }
}
```

**Movement return codes**:
| Code | Meaning |
|------|---------|
| 0 | Cannot move |
| 1 | Normal move |
| 2 | Enter own city |
| 3 | Enter neutral city (no army) |
| 4 | Blocked |
| 5 | Enter own garrisoned city |
| 6 | Combine armies |
| 7 | Enter empty ruin/site |
| 8 | Attack enemy |
| 9 | Diplomacy-restricted attack |
| 10 | Diplomatic territory violation |
| 11 | Path blocked |

### 8.4 UI Classes

- `TDiplomacyDialogBehavior` - Main diplomacy dialog
- `TDiplomPicCopyView` - Diplomacy picture view
- `TDiplomReportGrid` - Grid showing relations
- `TDiplomIconButton` - Diplomacy icon buttons
- `TPeaceDialogBehavior` - Peace offer dialog

---

## 9. Turn Sequence

### 9.1 Turn Advance (FUN_1003d4dc - `AdvanceToNextPlayer`)

```c
// Line 40371-40404
void AdvanceToNextPlayer() {
    bool foundActive = false;
    do {
        if (gameState->turnAdvanceFlag != 0) {
            // New round begins
            gameState->turnNumber++;
            ShuffleTurnOrder();           // FUN_1003c838
            CheckPlayerElimination();     // FUN_1003cb84
            CheckVictoryConditions();     // FUN_1003d094
            ProcessNeutralCityGrowth();   // FUN_10025f94 (stub)
            ProcessNeutralExpansion();    // FUN_1002ce38
            SaveGameState();              // FUN_10038890
            ProcessMapEvents(1, 0);       // FUN_10064850
        }

        // Advance to next player in turn order
        gameState->currentPlayerIndex = gameState->turnOrder[gameState->turnOrderIndex];
        gameState->turnOrderIndex++;

        if (gameState->turnOrderIndex > 7) {
            gameState->turnAdvanceFlag = 1;  // Next iteration starts new round
        }

        if (playerAlive[currentPlayer] != 0) {
            foundActive = true;
        }
    } while (!foundActive);
}
```

### 9.2 Start of Player Turn (FUN_1000d808 - `StartOfTurnProcessing`)

```c
// Line 14971-15014
void StartOfTurnProcessing() {
    SetPhase(100);  // FUN_1004039c(100)
    clearReportFlag = 0;

    // Release old resources
    if (previousReport != NULL) FreeResource(previousReport);
    if (playerReport[currentPlayer] != NULL) FreeResource(playerReport[currentPlayer]);

    RefreshArmyData();              // FUN_10027448

    // Clear per-player turn state
    for (int i = 7; i >= 0; i--) {
        specialEvents[i] = 0;
    }

    ResetSelectionState();
    ClearFogOfWar();                // FUN_1002c85c

    if (fogOfWarEnabled) {
        UpdateFogDisplay();          // FUN_10008f70
    }

    AdvanceToNextPlayer();           // FUN_1003d4dc

    // Start turn timer
    turnStarted = true;
    turnStartTime = GetCurrentTime();
}
```

### 9.3 Turn Order Shuffle (FUN_1003c838 - `ShuffleTurnOrder`)

```c
// Line 39900-39937
void ShuffleTurnOrder() {
    if (gameState->randomTurnOrder == 0) {
        // Fixed order: 0,1,2,3,4,5,6,7
        for (int i = 0; i < 8; i++) {
            gameState->turnOrder[i] = i;
        }
    } else {
        // Initialize then shuffle 20 times
        for (int i = 0; i < 8; i++) {
            gameState->turnOrder[i] = i;
        }
        for (int swap = 0; swap < 20; swap++) {  // 0x14 = 20 swaps
            int a = DiceRoll(1, 8, -1);  // 0-7
            int b = DiceRoll(1, 8, -1);  // 0-7
            // Swap turnOrder[a] and turnOrder[b]
            short temp = turnOrder[b];
            turnOrder[b] = turnOrder[a];
            turnOrder[a] = temp;
        }
    }
    gameState->turnOrderIndex = 0;
}
```

### 9.4 Army Update Per Turn (FUN_1000fac4 - `StartOfTurnArmyUpdate`)

```c
// Line 16346-16376
void StartOfTurnArmyUpdate() {
    // Update hero states
    for (short i = heroCount - 1; i >= 0; i--) {
        if (heroes[i].owner == currentPlayer &&
            heroExtData[i].state == 6) {  // State 6 = summoned/temporary
            heroExtData[i].state = 8;     // Mark as active
            heroes[i].questFlag = 0;
        }
    }

    // Process active quests (0-3)
    for (int q = 3; q >= 0; q--) {
        if (questSlots[q].active != 0) {
            ProcessQuestTurn(q);
        }
    }
}
```

### 9.5 Victory Detection (FUN_1003d094 - `CheckVictoryConditions`)

```c
// Line 40212-40364
void CheckVictoryConditions() {
    // Count alive units and check player status
    int totalUnits = 0;
    for (int i = 0; i < heroCount; i++) {
        if (isUnitAlive(i)) totalUnits++;
    }

    short humanPlayers = 0;
    short computerPlayers = 0;
    short lastHumanPlayer = -1;
    bool allDead = true;

    for (int p = 7; p >= 0; p--) {
        if (playerAlive[p]) allDead = false;

        if (playerAlive[p] == 0 && wasAlive[p]) {
            // Player just died
            wasAlive[p] = 0;  // Mark as dead
            eliminated = true;
        }

        if (playerAlive[p] && playerStatus[p] == 0) {
            humanPlayers++;
            lastHumanPlayer = p;
        }
        if (playerAlive[p] && playerStatus[p] == 1) {
            computerPlayers++;
        }
    }

    if (allDead) {
        // Game draw
        ShowEndGameMessage(0x0D, ...);
    }

    if (gameState->victoryAchieved == 0) {
        if (humanPlayers == 0 && eliminated) {
            ShowEndGameMessage(0x0E, ...);  // All humans eliminated
        }

        // Solo victory check
        if (humanPlayers == 1 && computerPlayers == 0) {
            // Check if dominant player has more than half the armies
            if (armyCount[lastHumanPlayer] > totalUnits / 2) {
                gameState->victoryAchieved = 1;
            }
        }

        // Domination victory
        if (humanPlayers == 1 && computerPlayers > 0) {
            int maxEnemyArmies = 0;
            for (int p = 0; p < 8; p++) {
                if (playerAlive[p] && playerStatus[p] == 1) {
                    if (armyCount[p] > maxEnemyArmies)
                        maxEnemyArmies = armyCount[p];
                }
            }
            // If player's armies + enemies/8 < player's count
            if (totalUnits/2 < armyCount[lastHumanPlayer] &&
                maxEnemyArmies + totalUnits/8 < armyCount[lastHumanPlayer]) {
                gameState->dominationFlag = 1;
            }
        }
    }
}
```

### 9.6 Neutral City Growth (FUN_1002ce38 - `ProcessNeutralCityGrowth`)

Only active when `gameVariant > 1`:

```c
// Line 32075-32118
void ProcessNeutralCityGrowth() {
    if (gameState->gameVariant < 2) return;

    for (short h = heroCount - 1; h >= 0; h--) {
        if (heroes[h].owner == 0x0F  // Neutral
            && isUnitAlive(h)
            && heroes[h].isHeroFlag != 0) {

            // Decrement HP timer
            if (heroes[h].heroHPTimer != 0) {
                heroes[h].heroHPTimer--;
                if (heroes[h].heroHPTimer == 0) {
                    ResetNeutralArmy(h);  // FUN_1002cae8
                }
            }

            // Try to build army for neutral city
            int buildResult = TryBuildNeutralArmy(h);
            if (buildResult == 0) {
                // Count nearby armies
                FindNearbyArmies(heroes[h].x, heroes[h].y, nearbyList);
                if (nearbyList[0] < 4) {
                    ExpandNeutralArmy(h, 2, -1, 0);
                }
            }
        }
    }
}
```

---

## 10. Key Function Reference

### Core Game Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_1003e13c` | 5420 | `MainGameWindowSetup` | Largest function - initializes the main game window, sets viewport, loads map resources |
| `FUN_1003d4dc` | 244 | `AdvanceToNextPlayer` | Core turn advancement - iterates through player order |
| `FUN_1003c368` | 1232 | `GameInit` | Initializes all game state: cities, armies, capitals, hero scores, diplomacy |
| `FUN_1003c068` | 768 | `InitializeCityOwnership` | Sets up city ownership, capitals, army type data |
| `FUN_1003b9f8` | 1648 | `ArmyTurnUpdate` | Per-turn army stat mutations (strength drift, HP changes) |
| `FUN_1003d094` | 1096 | `CheckVictoryConditions` | Checks for victory/defeat/draw conditions |
| `FUN_1003cb84` | 848 | `CheckPlayerElimination` | Processes player elimination, clears their cities/gold |
| `FUN_1003c838` | 256 | `ShuffleTurnOrder` | Shuffles or sets fixed turn order |

### Economy Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_1005f230` | 252 | `DiceRoll` | `DiceRoll(numDice, dieSize, bonus)` - core random number generator |
| `FUN_1000d1a4` | 324 | `AI_CheckGoldForHiring` | AI checks if gold > 399, considers hiring hero |
| `FUN_10054824` | 260 | `ProcessAllyGold` | Awards 3d500+500 gold from ally events |
| `FUN_10038890` | 976 | `SaveTurnState` | Saves all player gold values and game state |
| `FUN_10038c60` | 300 | `RecordGameEvent` | Records events to game log (up to 2 events per player) |

### Hero Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_10020f94` | 620 | `SelectHeroCandidate` | Selects best army type for hero offer based on scoring |
| `FUN_10021200` | 44 | `ModifyHeroStrength` | Adds/subtracts hero strength, caps at 9 |
| `FUN_1000fac4` | 228 | `StartOfTurnArmyUpdate` | Updates hero states, processes quest timers |
| `FUN_1001bbf0` | 472 | `LiberateCity` | Hero liberates a captured city, awards +10-25 hero score |
| `FUN_1001bdc8` | 468 | `ProcessQuestHeroMovement` | Handles quest hero AI movement toward targets |
| `FUN_1001bfa0` | 828 | `EvaluateQuestProgress` | AI evaluates progress toward quest completion |
| `FUN_100496c8` | 564 | `SortArmyStack` | Sorts army units within a hero's stack by priority |

### Item Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_1004a0c4` | 180 | `GetItemStats` | Retrieves item cost, strength, movement, HP, upkeep |
| `FUN_1004a21c` | 140 | `GetItemName` | Retrieves item name by type ID |
| `FUN_1004a178` | 164 | `GetItemCombatStats` | Gets combat-relevant item stats |
| `FUN_10049628` | 160 | `GetArmyTypeData` | Retrieves army type record (62 bytes) |
| `FUN_1004a350` | 420 | `FindItemPlacement` | Finds valid map location to place discovered item |

### Search/Ruins Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_100539e8` | 2708 | `ProcessRuinsSearch` | Main search handler - gold, items, quests, guardians |
| `FUN_1005310c` | -- | `FightGuardian` | Resolves combat with ruins guardian |
| `FUN_10053838` | -- | `PlaceItemOnMap` | Places discovered item at map location |
| `FUN_100534c8` | -- | `UpdateSearchDisplay` | Updates UI after search results |

### Quest Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_10012a8c` | 572 | `CheckQuestCompletion` | Checks if quest target reached/killed |
| `FUN_1004e384` | 496 | `ShowQuestReward` | Displays quest completion reward |
| `FUN_1004f438` | 488 | `ConvertCityToNeutral` | Converts a city to neutral (quest-related) |
| `FUN_1004f664` | 160 | `ProcessHeroHireReward` | Awards +100-125 hero score + hero hire event |

### Map/Display Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_10060608` | 3404 | `RefreshMapDisplay` | Major map rendering - scrolling, overlays, city icons |
| `FUN_10088724` | 2660 | `LoadMapResources` | Loads terrain graphics: water, hills, cities, forest |
| `FUN_1000a884` | -- | `ManhattanDistance` | Calculates Manhattan distance between two points |
| `FUN_10009630` | -- | `CheckLineOfSight` | Checks if tile is visible to player |
| `FUN_1003b4a4` | 1364 | `CheckMovementTarget` | Determines what happens when moving to a tile |

### Diplomacy Functions

| Address | Size | Proposed Name | Description |
|---------|------|---------------|-------------|
| `FUN_1003d734` | 1268 | `UpdateToolbarButtons` | Enables/disables toolbar based on game state (incl. diplomacy) |
| `FUN_1003dcb4` | 1020 | `DisableAllToolbar` | Disables all toolbar buttons during AI turns |

### UI Dialog Classes

| String Address | Class Name | Purpose |
|----------------|------------|---------|
| 0x1230F7 | `TCityDialogBehavior` | City info/management dialog |
| 0x123124 | `TBuildProdDialogBehavior` | Production selection dialog |
| 0x1283CA | `THeroInspectDialogBehavior` | Hero stats/inventory dialog |
| 0x1283F6 | `TItemListView` | Item list in hero dialog |
| 0x1285CA | `TSageDialogBehavior` | Sage/temple interaction |
| 0x1285DE | `TSearchDialogBehavior` | Ruins search dialog |
| 0x1293BF | `TItemsDialogBehavior` | Items management dialog |
| 0x1290C3 | `TDiplomacyDialogBehavior` | Diplomacy dialog |
| 0x12955C | `TPeaceDialogBehavior` | Peace offer dialog |
| 0x1273B8 | `TStartOfTurnBehavior` | Start of turn dialog |
| 0x1236CA | `THeroHire` | Hero hiring dialog |

### String Table

| Address | String | Usage |
|---------|--------|-------|
| 0x11E831 | `"You have %d gold!"` | Treasury display |
| 0x11E844 | `"Your Treasury"` | Treasury header |
| 0x11E853 | `"You earn %d gold!"` | Income display |
| 0x11E86A | `"Your Income- pay %d gold!"` | Upkeep/expense display |
| 0x11E884 | `"Your Upkeep"` | Upkeep section header |
| 0x128446 | `"gold +%d"` | Item gold bonus display |
| 0x11E44B | `"%s's Quest"` | Quest title |
| 0x11D6B8 | `"Blessings & Quests!"` | Temple menu |
| 0x12A3A8 | `"%s Temple"` | Temple name |
| 0x12A3B3 | `"#%03d\|The %s can bless...\|quests\|"` | Temple description |
| 0x12A2FA | `"RANDOM.ITM"` | Item resource file |
| 0x12A33A | `"ARMYNAME"` | Army name resource |
| 0x12A344 | `"CITYNAME"` | City name resource |
| 0x12A31F | `"The Diceman"` | Random event name |
| 0x11D6AB | `"Razed!"` | City razed message |
| 0x11D84A | `"%s is being razed!"` | City razing |
| 0x11D89E | `"Disband"` | Disband army |
| 0x11D8B5 | `"want to disband this"` | Disband confirmation |
| 0x11D704 | `"Strength: %d"` | Army strength display |
| 0x11D712 | `"Movement"` | Movement display |
| 0x11D726 | `"TimeCost"/"Strength: %d"` | Cost/strength display |
| 0x11DC01 | `"Turns"` | Turns counter |
| 0x11DC10 | `"Turn %d"` | Turn number display |

---

## Summary of Key Formulas

### Gold
- **Ruins (normal)**: `3d500 + 500` = 503 to 2,000 gold
- **Ruins (special)**: `3d1000 + 1000` = 1,003 to 4,000 gold
- **Ally/event gold**: `3d500 + 500` = 503 to 2,000 gold
- **Gold cap**: 30,000
- **Low gold threshold**: 40 gold (triggers AI financial distress behavior)
- **Hero hire gold threshold**: > 399 gold (AI considers heroes)

### Hero Hiring
- **Hero hire score**: Starts at `1d8` (random 1-8), +400 if enhanced mode
- **Score accumulation**: +100-125 per city capture, +10-25 per hero liberation
- **Max hero strength**: 9
- **Normal hero budget**: 800 gold max cost, minimum strength 4
- **Expensive hero budget**: 1500 gold max cost, minimum strength 5
- **Budget expansion**: +500 per failed search attempt (up to 4 retries)

### Army Stats
- **Strength drift**: 10% chance per turn per unit, 60% chance to increase by 1, 40% decrease by 1 (min 1, max 9)
- **HP drift**: 20% chance per turn, random +/- 2-4 points (min 6)
- **Upkeep drift**: 10% chance per turn, +/- 25% of current value
- **Movement drift**: 10% chance per turn, +/- 1 (min 1)

### Items
- **Normal search**: 1-2 items found (`1d2`)
- **Special search**: 3-4 items found (`1d2 + 2`)
- **Item types**: Weapon(1), Artifact(2), Flight(5), Speed(6), Gold(7)
- **Item tiers**: 1-3 (higher = better stats)

### Quests
- **Quest types**: Capture city (4), Kill army (5)
- **Completion**: Hero must be at quest target location when objective is met
- **Reward**: Hero score bonus, possible special reward display

### Diplomacy
- **States**: Neutral (0), Peace (1), War/Allied (2)
- **Matrix**: 8x8 player relations, stored as 2-bit fields in 32-bit integers
- **Fog of war**: When enabled, affects diplomacy visibility and movement restrictions
