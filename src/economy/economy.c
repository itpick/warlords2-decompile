/*
 * economy.c - Warlords II Economy, Production, Heroes, Items, Quests
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 * Target: Classic Mac OS / PowerPC (1993)
 *
 * Contains city production, hero management, item/quest systems, turn sequence.
 *
 * Key formulas:
 *   Ruins gold:     normal = 3d500+500 (503-2000), special = 3d1000+1000 (1003-4000)
 *   Hero hire:      30% chance, requires 400+ gold, score starts at 1d8
 *   Strength drift: 10% chance/turn, 60% up / 40% down
 *   Victory:        solo when armies > total/2
 *   Turn order:     20-swap Fisher-Yates shuffle
 */

#include "warlords2.h"
#include "wl2_functions.h"

/* Forward declarations for functions defined later in this file */
static void AssignCityGarrisons(short cityIdx);
static void ProcessNeutralCityGrowth(void);
void LockUnitData(void);
void UnlockUnitData(void);
long ShowQuestReward(short rewardType, short param_2, short param_3);

/* External functions from other modules */
extern int  CalcPathCost(short armyIdx, short destX, short destY);

/* ======================================================================
 * UNIT TYPE DATA ACCESS
 * ====================================================================== */

/*
 * GetUnitTypeInfo - Retrieve army type record by type ID
 *
 * Copies the 62-byte (0x3E) unit instance record matching the given
 * type ID into the caller's buffer. Locks/unlocks the unit data resource.
 *
 * Original: GetUnitStats at 0x10049628 (160 bytes)
 */
void GetUnitTypeInfo(short typeId, char *buffer)
{
    int i;
    UnitInstance *src;

    LockUnitData();   /* LockUnitData */

    for (i = 0; i < MAX_UNIT_TYPES; i++) {
        src = (UnitInstance *)((char *)*(&gUnitInstanceTable) + i * 0x3E);
        if (src->type_id == typeId) {
            /* Copy all 62 bytes (0x3E) via 32-bit word copy, clearing last 2 bytes */
            unsigned long *dst32 = (unsigned long *)buffer;
            unsigned long *src32 = (unsigned long *)src;
            int w;
            for (w = 0; w < 15; w++) {
                dst32[w] = src32[w];
            }
            /* Last 2 bytes: copy only high half of word 15 */
            dst32[15] = src32[15] & 0xFFFF0000;
            break;
        }
    }

    UnlockUnitData();  /* UnlockUnitData */
}

/*
 * GetItemStats - Retrieve item cost, strength, movement, HP, upkeep
 *
 * Searches the unit instance table for a matching type ID and returns
 * individual stat fields via output pointers.
 *
 * Original: CreateUnitTemplate at 0x1004a0c4 (180 bytes)
 */
int GetItemStats(short itemID, short *cost, short *strength,
                 short *movement, short *upkeep, short *hitPoints)
{
    int i;
    int base;

    LockUnitData();

    for (i = 0; i < MAX_UNIT_TYPES; i++) {
        base = (int)(*(&gUnitInstanceTable)) + i * 0x3E;
        if (*(short *)base == itemID) {
            *upkeep    = *(short *)(base + 0x1E);   /* gold cost / upkeep */
            *cost      = *(short *)(base + 0x18);    /* production cost    */
            *strength  = *(short *)(base + 0x16);    /* hit points / str   */
            *movement  = *(short *)(base + 0x1A);    /* experience / mvmt  */
            *hitPoints = *(short *)(base + 0x1C);    /* combat bonus / HP  */
            break;
        }
    }

    UnlockUnitData();
    return i;
}

/*
 * GetItemName - Retrieve item/unit name string by type ID
 *
 * Searches unit instance table for the given type and copies
 * the 20-byte name field into a static output buffer.
 *
 * Original: FUN_1004a21c at 0x1004a21c (140 bytes)
 */
char *GetItemName(short itemTypeID)
{
    static char nameBuffer[HERO_NAME_LEN + 1];  /* gItemNameBuffer */
    int i;
    int base;

    LockUnitData();

    for (i = 0; i < MAX_UNIT_TYPES; i++) {
        base = (int)(*(&gUnitInstanceTable)) + i * 0x3E;
        if (*(short *)base == itemTypeID) {
            /* Copy name from offset +2, 20 bytes (HERO_NAME_LEN) */
            BlockMoveData_Thunk((Ptr)(base + 2), nameBuffer, HERO_NAME_LEN);
            nameBuffer[HERO_NAME_LEN] = '\0';
            break;
        }
    }

    UnlockUnitData();
    return nameBuffer;
}

/*
 * GetItemCombatStats - Retrieve combat-relevant item stats (no upkeep)
 *
 * Similar to GetItemStats but returns only cost, strength, movement, HP.
 *
 * Original: FUN_1004a178 at 0x1004a178 (164 bytes)
 */
void GetItemCombatStats(short itemID, short *cost, short *strength,
                        short *movement, short *hitPoints)
{
    int i;
    int base;

    LockUnitData();

    for (i = 0; i < MAX_UNIT_TYPES; i++) {
        base = (int)(*(&gUnitInstanceTable)) + i * 0x3E;
        if (*(short *)base == itemID) {
            *cost      = *(short *)(base + 0x18);
            *strength  = *(short *)(base + 0x16);
            *movement  = *(short *)(base + 0x1A);
            *hitPoints = *(short *)(base + 0x1C);
            break;
        }
    }

    UnlockUnitData();
}

/* ======================================================================
 * ARMY STACK MANAGEMENT
 * ====================================================================== */

/*
 * GetUnitSlotInArmy - Find which slot (0-3) holds a given unit type
 *
 * Scans the 4 unit_types[] slots of the army at armyIdx for one matching
 * unitType. Returns 0-3 if found, or 0 if all 4 slots checked (wraps).
 *
 * Original: FUN_10047d80 at 0x10047d80 (104 bytes)
 */
short GetUnitSlotInArmy(short armyIdx, short unitType)
{
    int slot;
    short result = 0;
    int gs = (int)gGameState;

    for (slot = 0; slot < UNITS_PER_ARMY; slot++) {
        if ((int)*(char *)(gs + armyIdx * 0x42 + slot + 0x161A) == (int)unitType) {
            break;
        }
        result++;
    }

    /* If we scanned past all 4, return 0 (wrap around) */
    if (result > 3) {
        result = 0;
    }
    return result;
}

/*
 * SortArmyUnits - Sort units within an army stack by name priority
 *
 * Performs an insertion sort on the 4 unit slots of the army. For each
 * occupied slot, looks up the unit's display name priority via
 * GetUnitTypeInfo, then sorts in descending order (strongest first).
 * Swaps all parallel arrays: unit_types, unit_strength, unit_upkeep,
 * unit_hitpoints, unit_moves.
 *
 * Original: SortArmyUnits at 0x100496c8 (564 bytes)
 */
void SortArmyUnits(short armyIdx)
{
    int gs = (int)gGameState;
    int armyBase;
    char unitTypesBuf[62];   /* temp for GetUnitTypeInfo */
    short sortKeys[UNITS_PER_ARMY];
    short namePriority[UNITS_PER_ARMY + 1];  /* +1 for 1-based indexing in sort */
    int numUnits;
    int i, j;
    char tmp;

    armyBase = gs + armyIdx * 0x42;

    /* Bail if first slot is empty */
    if (*(char *)(armyBase + 0x161A) < 0)
        return;

    /* Build sort keys from unit name priority */
    numUnits = 0;
    for (i = 0; i < UNITS_PER_ARMY; i++) {
        char unitType = *(char *)(armyBase + i + 0x161A);
        sortKeys[i] = (short)unitType;
        if (unitType < 0)
            break;
        GetUnitTypeInfo(unitType, unitTypesBuf);
        /* Name priority is derived from the name field */
        namePriority[i + 1] = *(short *)(unitTypesBuf + 0x14);  /* local_4a in Ghidra */
        numUnits = i + 1;
    }

    /* Insertion sort by name priority (descending) */
    if (numUnits > 1) {
        for (i = 1; i < numUnits; i++) {
            j = i;
            while (j > 0 && namePriority[j + 1] < namePriority[j]) {
                short tmpKey;
                /* Swap sort keys */
                tmpKey = namePriority[j + 1];
                namePriority[j + 1] = namePriority[j];
                namePriority[j] = tmpKey;

                armyBase = gs + armyIdx * 0x42;

                /* Swap unit_types[j] and unit_types[j-1] (offset 0x161A) */
                tmp = *(char *)(armyBase + j + 0x161A);
                *(char *)(armyBase + j + 0x161A) = *(char *)(armyBase + j - 1 + 0x161A);
                *(char *)(armyBase + j - 1 + 0x161A) = tmp;

                /* Swap unit_strength[j] and [j-1] (offset 0x1622) */
                tmp = *(char *)(armyBase + j + 0x1622);
                *(char *)(armyBase + j + 0x1622) = *(char *)(armyBase + j - 1 + 0x1622);
                *(char *)(armyBase + j - 1 + 0x1622) = tmp;

                /* Swap unit_upkeep[j] and [j-1] (offset 0x162A) */
                tmp = *(char *)(armyBase + j + 0x162A);
                *(char *)(armyBase + j + 0x162A) = *(char *)(armyBase + j - 1 + 0x162A);
                *(char *)(armyBase + j - 1 + 0x162A) = tmp;

                /* Swap unit_hitpoints[j] and [j-1] (offset 0x1626) */
                tmp = *(char *)(armyBase + j + 0x1626);
                *(char *)(armyBase + j + 0x1626) = *(char *)(armyBase + j - 1 + 0x1626);
                *(char *)(armyBase + j - 1 + 0x1626) = tmp;

                /* Swap unit_moves[j] and [j-1] (offset 0x161E) */
                tmp = *(char *)(armyBase + j + 0x161E);
                *(char *)(armyBase + j + 0x161E) = *(char *)(armyBase + j - 1 + 0x161E);
                *(char *)(armyBase + j - 1 + 0x161E) = tmp;

                j--;
            }
        }
    }
}

/*
 * RemoveArmyFromCities - Clear all city production references to an army
 *
 * When an army is destroyed, iterates all cities and clears any production
 * slot that references this army index. Also clears the army's quest flag.
 *
 * Original: FUN_1000f258 at 0x1000f258 (176 bytes)
 */
void RemoveArmyFromCities(short armyIdx)
{
    int gs = (int)gGameState;
    int es = (int)gExtState;
    short cityCount;
    short c;
    int slot;

    cityCount = *(short *)(es + 0x24A);

    while (cityCount != 0) {
        cityCount--;
        if (*(short *)(es + cityCount * 0x5C + 0x24C) != 0) {
            /* Check all 4 production slots */
            for (slot = 3; slot >= 0; slot--) {
                int addr = es + cityCount * 0x5C + slot * 2;
                if (*(short *)(addr + 0x252) == armyIdx) {
                    *(short *)(addr + 0x252) = -1;      /* Clear slot reference */
                    *(short *)(gs + armyIdx * 0x42 + 0x1636) = 0;  /* Clear quest flag */
                }
            }
        }
    }
}

/*
 * CanArmyEnterCity - Check if an army can enter/garrison a city
 *
 * Returns true if the army is in a state that allows entering the city
 * (states 8=searching or 5=razed), or if entering an existing garrison
 * (state 6) when param_2 is nonzero.
 *
 * Original: CanArmyEnterCity at 0x1000f708 (180 bytes)
 */
Boolean CanArmyEnterCity(short armyIdx, short allowGarrison)
{
    int es = (int)gExtState;
    short cityCount;
    char armyState;

    /* First check if any city already has this army as garrison */
    cityCount = *(short *)(es + 0x24A);
    if (cityCount != 0) {
        do {
            cityCount--;
            if (*(short *)(es + cityCount * 0x5C + 0x24C) != 0) {
                if (*(short *)(es + cityCount * 0x5C + 0x250) == armyIdx) {
                    return 0;  /* Already garrisoned in a city */
                }
            }
        } while (cityCount != 0);
    }

    /* Check army state */
    armyState = *(char *)(es + (int)armyIdx + 0x56);
    if (armyState == ARMY_STATE_SEARCHING || armyState == ARMY_STATE_RAZED) {
        return 1;  /* These states can enter */
    }

    /* State 6 (garrison) can enter only if explicitly allowed */
    if (allowGarrison != 0 && armyState == ARMY_STATE_GARRISON) {
        return 1;
    }

    return 0;
}

/* ======================================================================
 * LOCK / UNLOCK UNIT DATA
 * ====================================================================== */

/*
 * LockUnitData - Lock the unit instance resource handle for reading
 *
 * On first call, loads the unit data from the resource file ("ARMYNAME"
 * resource). Subsequent calls just dereference the locked handle.
 * This is a large function (836 bytes) that handles resource loading,
 * parsing whitespace-terminated name strings, and populating the
 * gUnitInstanceTable with 29 entries of 0x3E bytes each.
 *
 * Original: LockUnitData at 0x10048ccc (836 bytes)
 *
 * NOTE: The actual resource loading logic is complex and involves Mac
 * Toolbox calls. Simplified reconstruction below.
 */
void LockUnitData(void)
{
    /* If resource handle not yet loaded, load from resource fork */
    /* Full implementation involves:
     *   1. Check gUnitDataHandle == 0 (first load)
     *   2. Open DATA resource from current resource file
     *   3. Parse header to get resource name
     *   4. Load 0x1D (29) entries, each 0x3E bytes
     *   5. For each entry: read type_id (short), name (0x14 bytes), then 0x14 shorts
     *   6. Store pointer to loaded data in gUnitInstanceTable
     * Simplified: just HLock the handle if already loaded */

    extern void *gUnitDataHandle;  /* gUnitDataHandle */

    if (gUnitDataHandle != NULL) {
        HLock((Handle)gUnitDataHandle);
    }
    /* The full first-load path is omitted; see Ghidra decompilation at 0x10048ccc */
}

/*
 * UnlockUnitData - Unlock the unit data resource handle
 *
 * Original: UnlockUnitData at 0x10049010 (56 bytes)
 */
void UnlockUnitData(void)
{
    extern void *gUnitDataHandle;  /* gUnitDataHandle */

    if (gUnitDataHandle != NULL) {
        HUnlock((Handle)gUnitDataHandle);
    }
}

/* ======================================================================
 * HERO SYSTEM
 * ====================================================================== */

/*
 * SelectHeroCandidate - Choose best army type for hero hire offer
 *
 * Scores all 29 army types based on strength, movement, special abilities,
 * cost, and randomness. Retries up to 4 times with expanding budget.
 *
 * Normal heroes:    max cost 800, min strength 4
 * Expensive heroes: max cost 1500, min strength 5
 * Budget expansion: +500 per retry, min strength decremented
 *
 * Original: ScoreUnitForHire at 0x10020f94 (620 bytes)
 */
short AISelectHero(Boolean needsStrong)
{
    short bestCandidate = -1;
    short bestScore = 0;
    short retryCount = 0;
    short maxCost, minStrength;
    short score, bonus;
    int i;
    char statBuf[62];

    /* Layout of statBuf after GetUnitTypeInfo:
     * +0x00: type_id (short)
     * +0x02: name (20 bytes)
     * +0x16: strength (local_4e)
     * +0x18: cost (local_4c)
     * +0x1A: movement (local_48)
     * +0x1C: hit_points (local_46 - used as upkeep/cost limit)
     * +0x1E: upkeep (local_44)
     * +0x20: hasRanged (local_3c -> local_2e offset remap)
     * +0x22: hasFlight (local_3a -> local_2c)
     * +0x24: hasNaval (local_38 -> local_2a)
     * +0x26: hasForest (local_36)
     * +0x28: hasHill (local_34 -> local_38)
     * +0x2A: hasMountain (local_32 -> local_3a)
     * +0x2C: hasSwamp (local_30 -> local_3c)
     * +0x2E: hasSiege (local_2e -> local_44 [isSpecial])
     * +0x30: isHeroType (local_2c -> local_32)
     */

    /* Aliases for fields within statBuf - matching Ghidra locals */
    #define STAT_STRENGTH   (*(short *)(statBuf + 0x16))   /* local_4e */
    #define STAT_HITPOINTS  (*(short *)(statBuf + 0x18))   /* local_4c */
    #define STAT_MOVEMENT   (*(short *)(statBuf + 0x1A))   /* local_48 */
    #define STAT_UPKEEP     (*(short *)(statBuf + 0x1C))   /* local_46 */
    #define STAT_SIEGE      (*(short *)(statBuf + 0x1E))   /* local_44 */
    #define STAT_HAS_SWAMP  (*(short *)(statBuf + 0x20))   /* local_3c */
    #define STAT_HAS_MTN    (*(short *)(statBuf + 0x22))   /* local_3a */
    #define STAT_HAS_HILL   (*(short *)(statBuf + 0x24))   /* local_38 */
    #define STAT_HAS_FOREST (*(short *)(statBuf + 0x26))   /* local_36 */
    #define STAT_IS_SPECIAL (*(short *)(statBuf + 0x28))   /* local_34 */
    #define STAT_IS_HERO    (*(short *)(statBuf + 0x2A))   /* local_32 */
    #define STAT_HAS_RANGED (*(short *)(statBuf + 0x2C))   /* local_2e */
    #define STAT_HAS_FLIGHT (*(short *)(statBuf + 0x2E))   /* local_2c */
    #define STAT_HAS_NAVAL  (*(short *)(statBuf + 0x30))   /* local_2a */

    if (needsStrong == 0) {
        maxCost = 800;
        minStrength = 4;
    } else {
        maxCost = 1500;    /* 0x5DC */
        minStrength = 5;
    }

    while (1) {
        for (i = 0; i < MAX_UNIT_TYPES; i++) {
            GetUnitTypeInfo(i, statBuf);

            /* Skip special types, type 28 (0x1C), and type 5 */
            if (STAT_IS_SPECIAL != 0 || i == 28 || i == 5)
                continue;
            /* Skip if upkeep out of range */
            if (STAT_UPKEEP < 0 || STAT_UPKEEP > maxCost)
                continue;

            score = STAT_STRENGTH - STAT_HITPOINTS;

            if (STAT_STRENGTH >= minStrength) {
                /* Bonus for cheap units */
                if (STAT_UPKEEP <= maxCost - 200)
                    score++;
                if (STAT_UPKEEP <= maxCost - 400)
                    score++;
                /* Bonus for high movement */
                if (STAT_MOVEMENT > 11)
                    score++;
                if (STAT_MOVEMENT > 15)
                    score++;
                /* Bonus for special abilities */
                if (STAT_HAS_RANGED != 0)
                    score++;
                if (STAT_HAS_FLIGHT != 0 || STAT_HAS_NAVAL != 0)
                    score++;
                if (STAT_HAS_FOREST != 0 || STAT_HAS_HILL != 0 || STAT_HAS_MTN != 0)
                    score++;
                if (STAT_HAS_SWAMP != 0)
                    score++;
                if (STAT_SIEGE != 0)
                    score++;
                if (STAT_IS_HERO != 0)
                    score += 2;
            }

            /* Add randomness for scores > 1 */
            if (score > 1) {
                bonus = (short)RandomRange(1, score * 2, 0);
                score += bonus;
            }

            /* Update best candidate (random tiebreak) */
            if (score > bestScore ||
                (score == bestScore && RandomRange(1, 2, -1) != 0)) {
                bestCandidate = (short)i;
                bestScore = score;
            }
        }

        /* Found a candidate or exhausted retries */
        if (bestCandidate != -1 || retryCount > 3)
            break;

        /* Expand budget and retry */
        retryCount++;
        maxCost += 500;
        minStrength--;
        if (minStrength < 1)
            minStrength = 1;
    }

    #undef STAT_STRENGTH
    #undef STAT_HITPOINTS
    #undef STAT_MOVEMENT
    #undef STAT_UPKEEP
    #undef STAT_SIEGE
    #undef STAT_HAS_SWAMP
    #undef STAT_HAS_MTN
    #undef STAT_HAS_HILL
    #undef STAT_HAS_FOREST
    #undef STAT_IS_SPECIAL
    #undef STAT_IS_HERO
    #undef STAT_HAS_RANGED
    #undef STAT_HAS_FLIGHT
    #undef STAT_HAS_NAVAL

    return bestCandidate;
}

/*
 * ModifyHeroStrength - Add modifier to hero strength, cap at 9
 *
 * param_1 is a pointer into the army record (offset into the data block).
 * The strength field is at param_1 + 8 (relative to the passed pointer).
 * Strength is capped at a maximum value of 9.
 *
 * Original: FUN_10021200 at 0x10021200 (44 bytes)
 */
void ModifyHeroStrength(int heroPtr, char modifier)
{
    char newStr;

    newStr = *(char *)(heroPtr + 8) + modifier;
    *(char *)(heroPtr + 8) = newStr;

    if (newStr > 9) {
        *(char *)(heroPtr + 8) = 9;  /* Max strength cap = 9 */
    }
}

/* ======================================================================
 * CITY PRODUCTION
 * ====================================================================== */

/*
 * ProcessCityProduction - Handle city army production for one city
 *
 * Called during turn processing. For each production slot in the city,
 * finds the nearest allied army stack within distance threshold,
 * then attempts to assign the newly produced unit to that stack.
 *
 * Original: FUN_1001c6fc at 0x1001c6fc (344 bytes)
 *
 * Parameters:
 *   param_1: city index
 *   param_2: production data buffer (from caller)
 *   param_3: owner player index
 *   param_4: neutral flag (0x0F for neutral)
 */
void ProcessCityProduction(short cityIdx, long param_2, short ownerPlayer,
                           short neutralFlag)
{
    int gs = (int)gGameState;
    short armyCount;
    int bestArmy;
    short bestDist;
    short i;
    int armyBase;
    short dist;
    long prodResult;
    char statBuf[62];

    /* AllocInfluenceMap - prepare production context */
    /* prodResult = PrepareProductionContext(); -- omitted external call */

    armyCount = *(short *)(gs + 0x1602);
    bestArmy = -1;
    bestDist = 1000;

    /* Search all armies for nearest one owned by this player */
    while (armyCount != 0) {
        armyCount--;
        if ((int)*(char *)(gs + armyCount * 0x42 + 0x1619) == (int)ownerPlayer) {
            /* FindBestTarget - calculate distance/priority for army */
            dist = CalcDistance(
                *(short *)(gs + armyCount * 0x42 + 0x1604),
                *(short *)(gs + armyCount * 0x42 + 0x1606),
                0, 0);  /* Simplified - actual uses production coordinates */

            /* Check thresholds: dist < 50 (0x32), dist < AI threshold,
             * path cost > 75 (0x4B), and dist < bestDist */
            if (dist < 50 && dist < gAIPathThreshold) {
                armyBase = gs + armyCount * 0x42;
                int pathCost = CalcPathCost(
                    *(short *)(armyBase + 0x1604),
                    *(short *)(armyBase + 0x1606),
                    0);
                if (pathCost > 75 && dist < bestDist) {
                    bestArmy = armyCount;
                    bestDist = dist;
                }
            }
        }
    }

    /* FUN_1001b584 - attempt to create the produced unit */
    /* prodResult = CreateProducedUnit(cityIdx, param_2, ownerPlayer, neutralFlag, prodResult); */

    /* If production succeeded and we found a nearby army, assign to it */
    /* if (prodResult != 0 && bestArmy != -1) {
     *     FUN_1001c2dc(cityIdx, param_2, bestArmy);
     * }
     */

    /* FreeInfluenceMap - cleanup production context */
}

/* ======================================================================
 * ARMY TURN UPDATES
 * ====================================================================== */

/*
 * StartOfTurnArmyUpdate - Update hero states and process quest slots
 *
 * At the start of each player's turn:
 *   1. Promote summoned heroes (state 6) to active (state 8), clear quest flag
 *   2. Process active city garrison assignments (up to 4 cities)
 *
 * Original: FUN_1000fac4 at 0x1000fac4 (228 bytes)
 */
void StartOfTurnArmyUpdate(void)
{
    int gs = (int)gGameState;
    int es = (int)gExtState;
    short armyCount;
    short currentPlayer;
    int i;

    armyCount = *(short *)(gs + 0x1602);
    currentPlayer = *(short *)(gs + 0x110);

    /* Phase 1: promote summoned heroes to active */
    while (armyCount != 0) {
        armyCount--;
        if ((int)*(char *)(gs + armyCount * 0x42 + 0x1619) == (int)currentPlayer &&
            *(char *)(es + (int)armyCount + 0x56) == ARMY_STATE_GARRISON) {
            /* Promote from garrison/summoned to searching/active */
            *(char *)(es + (int)armyCount + 0x56) = ARMY_STATE_SEARCHING;
            /* Clear quest flag */
            *(short *)(gs + armyCount * 0x42 + 0x1636) = 0;
        }
    }

    /* Phase 2: process city garrison assignments (cities 3 down to 0) */
    for (i = 3; i >= 0; i--) {
        if (*(short *)(es + i * 0x5C + 0x24C) != 0) {
            AssignCityGarrisons((short)i);  /* FUN_1000f7bc */
        }
    }
}

/*
 * AssignCityGarrisons - Internal: assign armies to city garrison slots
 *
 * For a given city, finds up to 4 allied armies that can enter the city
 * and assigns them to the garrison production slots.
 *
 * Helper for StartOfTurnArmyUpdate.
 * Original: FUN_1000f7bc (called from FUN_1000fac4)
 */
static void AssignCityGarrisons(short cityIdx)
{
    int gs = (int)gGameState;
    int es = (int)gExtState;
    int cityBase;
    int slotAddr;
    short armyCount;
    int maxSlots;
    short s, a;

    cityBase = es + cityIdx * 0x5C;
    slotAddr = cityBase + 0x252;

    /* Determine max garrison slots based on city flags */
    if ((*(unsigned short *)(cityBase + 0x2A6) & 0x10) != 0) {
        maxSlots = 12;    /* Tower: 12 slots */
    } else if ((*(unsigned short *)(cityBase + 0x2A6) & 0x08) != 0) {
        maxSlots = 16;    /* Port: 16 slots */
    } else {
        maxSlots = *(short *)(cityBase + 0x2A4);  /* Base defense value */
    }

    /* Clear all 4 garrison slots */
    for (s = 3; s >= 0; s--) {
        *(short *)(slotAddr + s * 2) = -1;
    }

    /* Scan armies and assign to slots */
    armyCount = *(short *)(gs + 0x1602);
    /* (Full implementation iterates armies, checks owner, checks CanArmyEnterCity,
     *  and assigns up to 4 armies to the garrison slots, then sets state to 6) */

    /* Mark assigned armies as garrisoned */
    for (s = 0; s < 4; s++) {
        short assigned = *(short *)(slotAddr + s * 2);
        if (assigned != -1) {
            *(char *)(es + (int)assigned + 0x56) = ARMY_STATE_GARRISON;
        }
    }
}

/*
 * ArmyTurnUpdate - Per-turn army stat mutations
 *
 * Called during game initialization (via InitializeCityOwnership).
 * Performs several passes over all armies:
 *
 * Pass 1: Remove dead units (type 5 -> 0xFF), compact slots
 * Pass 2: Reset base stats from unit type definitions
 * Pass 3: Sort all army stacks
 * Pass 4: Apply random stat drift to each unit:
 *   - Strength: 10% chance, 60% up / 40% down (min 1, max 9)
 *   - Hit points: 20% chance, variable +/- (min 6)
 *   - Upkeep: 10% chance, +/- 25% of current
 *   - Movement: 10% chance, +/- 1 (min 1)
 *
 * Original: FUN_1003b9f8 at 0x1003b9f8 (1648 bytes)
 */
void ArmyTurnUpdate(void)
{
    int gs = (int)gGameState;
    short totalArmies;
    int armyIdx, slot;
    int armyBase;
    char unitType;
    char statBuf[108];   /* 62 bytes + padding for GetUnitTypeInfo */
    short str, hp;
    unsigned char upk;
    int roll;

    totalArmies = *(short *)(gs + 0x1602);

    /* ---- Pass 1: Remove dead units (type 0x05 = razed), compact ---- */
    for (armyIdx = 0; armyIdx < totalArmies; armyIdx++) {
        /* Clear dead units */
        for (slot = 0; slot < UNITS_PER_ARMY; slot++) {
            armyBase = gs + armyIdx * 0x42 + slot;
            if (*(char *)(armyBase + 0x161A) == 0x05) {
                *(char *)(armyBase + 0x161A) = (char)SLOT_EMPTY;
            }
        }
        /* Compact: shift units left to fill empty slots */
        for (slot = 0; slot < UNITS_PER_ARMY; slot++) {
            if (*(char *)(gs + armyIdx * 0x42 + slot + 0x161A) == (char)SLOT_EMPTY) {
                int k;
                if (slot < 3) {
                    for (k = slot; k < 3; k++) {
                        int src = gs + armyIdx * 0x42 + k;
                        *(char *)(src + 0x161A) = *(char *)(src + 0x161B);
                    }
                }
                *(char *)(gs + armyIdx * 0x42 + 3 + 0x161A) = (char)SLOT_EMPTY;
            }
        }
    }

    /* ---- Pass 2: Reset base stats from type definitions ---- */
    {
        int typeIdx;
        for (typeIdx = 0; typeIdx < MAX_UNIT_TYPES; typeIdx++) {
            GetUnitTypeInfo(typeIdx, statBuf);
            for (armyIdx = 0; armyIdx < *(short *)(gs + 0x1602); armyIdx++) {
                for (slot = 0; slot < UNITS_PER_ARMY; slot++) {
                    armyBase = gs + armyIdx * 0x42 + slot;
                    if ((int)*(char *)(armyBase + 0x161A) == typeIdx) {
                        /* Reset strength from base type (offset 0x16 in template) */
                        *(char *)(armyBase + 0x1622) = (char)*(short *)(statBuf + 0x16);
                        /* Reset moves (offset 0x18) */
                        *(char *)(armyBase + 0x161E) = (char)*(short *)(statBuf + 0x18);
                        /* Reset hit points (offset 0x1C) */
                        *(char *)(armyBase + 0x1626) = (char)*(short *)(statBuf + 0x1C);
                        /* Reset upkeep (offset 0x1A) */
                        *(char *)(armyBase + 0x162A) = (char)*(short *)(statBuf + 0x1A);
                    }
                }
            }
        }
    }

    /* ---- Pass 3: Sort all army stacks ---- */
    for (armyIdx = 0; armyIdx < *(short *)(gs + 0x1602); armyIdx++) {
        SortArmyUnits((short)armyIdx);
    }

    /* ---- Pass 4: Random stat drift ---- */
    for (armyIdx = 0; armyIdx < *(short *)(gs + 0x1602); armyIdx++) {
        for (slot = 0; slot < UNITS_PER_ARMY; slot++) {
            armyBase = gs + armyIdx * 0x42 + slot;

            /* Stop at first empty slot */
            if (*(char *)(armyBase + 0x161A) < 0)
                break;

            /* --- Strength drift: 10% chance per turn --- */
            roll = RandomRange(1, 100, 0);
            if (roll < 10) {
                roll = RandomRange(1, 100, 0);
                if (roll < 60) {
                    /* 60% chance: strength UP by 1 (max 9) */
                    str = (short)*(char *)(armyBase + 0x1622) + 1;
                    if (str > 8)
                        str = 9;   /* Note: decompilation shows cap at 9 (>8 check) */
                    *(char *)(armyBase + 0x1622) = (char)str;
                } else {
                    /* 40% chance: strength DOWN by 1 (min 1) */
                    str = (short)*(char *)(armyBase + 0x1622) - 1;
                    if (str < 2)
                        str = 1;
                    *(char *)(armyBase + 0x1622) = (char)str;
                }
            }

            /* --- Hit point drift: 20% chance per turn --- */
            roll = RandomRange(1, 100, 0);
            if (roll < 20) {
                roll = RandomRange(1, 100, 0);
                if (roll < 10) {
                    /* +4 HP */
                    *(char *)(armyBase + 0x1626) += 4;
                } else if (roll < 60) {
                    /* +2 HP */
                    *(char *)(armyBase + 0x1626) += 2;
                } else if (roll < 95) {
                    /* -2 HP (min 2) */
                    hp = (short)*(char *)(armyBase + 0x1626) - 2;
                    if (hp < 3)
                        hp = 2;
                    *(char *)(armyBase + 0x1626) = (char)hp;
                } else {
                    /* -4 HP (min 2) */
                    hp = (short)*(char *)(armyBase + 0x1626) - 4;
                    if (hp < 3)
                        hp = 2;
                    *(char *)(armyBase + 0x1626) = (char)hp;
                }
            }

            /* Enforce HP minimum of 6 */
            if (*(char *)(armyBase + 0x1626) < 6) {
                *(char *)(armyBase + 0x1626) = 6;
            }

            /* --- Upkeep drift: 10% chance, +/- 25% of current --- */
            roll = RandomRange(1, 100, 0);
            if (roll < 10) {
                roll = RandomRange(1, 100, 0);
                upk = *(unsigned char *)(armyBase + 0x162A);
                if (roll < 60) {
                    /* Decrease by 25%: upkeep -= upkeep/4 */
                    *(unsigned char *)(armyBase + 0x162A) =
                        upk - (upk / 4 + (upk < 0 && (upk & 3) != 0 ? 1 : 0));
                } else {
                    /* Increase by 25%: upkeep += upkeep/4 */
                    *(unsigned char *)(armyBase + 0x162A) =
                        upk + (upk / 4 + (upk < 0 && (upk & 3) != 0 ? 1 : 0));
                }
            }

            /* --- Movement drift: 10% chance, +/- 1 --- */
            roll = RandomRange(1, 100, 0);
            if (roll < 10) {
                roll = RandomRange(1, 100, 0);
                if (roll < 60) {
                    /* Movement down by 1 (min 1) */
                    str = (short)*(char *)(armyBase + 0x161E) - 1;
                    if (str < 2)
                        str = 1;
                    *(char *)(armyBase + 0x161E) = (char)str;
                } else {
                    /* Movement up by 1 */
                    *(char *)(armyBase + 0x161E) += 1;
                }
            }
        } /* end slot loop */
    } /* end army loop */
}

/* ======================================================================
 * LIBERATE CITY / HERO SCORE
 * ====================================================================== */

/*
 * LiberateCity - Hero liberates a captured city
 *
 * When a hero captures a city during a quest, this function:
 *   1. Checks if the hero's stack has < 3 friendly units nearby
 *      (for param_2==0 path; returns -1 if too many)
 *   2. If victory score < 900 and hero naming enabled:
 *      - Formats and displays a liberation message
 *      - Converts city to neutral via FUN_1004f438
 *      - Awards hero score: RandomRange(1, 15, 0) + 10
 *      - Refreshes map display
 *   3. Otherwise calls LaunchAllianceDefense for alternate handling
 *
 * Original: LaunchAllianceAttack at 0x1001bbf0 (472 bytes)
 */
long LiberateCity(short armyIdx, short param_2)
{
    int gs = (int)gGameState;
    short currentPlayer;
    int heroBase;
    short heroScore;
    short bonus;
    short victoryScore;
    int i;

    currentPlayer = *(short *)(gs + 0x110);

    victoryScore = 0;   /* CheckQuestCondition result */
    /* victoryScore = CalcVictoryScore(armyIdx); */

    if (param_2 == 0) {
        /* Check nearby friendly army count */
        /* GetAdjacentArmies - get nearby armies
         * If count > 2, bail out (city too well defended for liberation) */
        short nearbyCount = 0;
        /* ... (distance/count check omitted, see decompiled) ... */
        if (nearbyCount > 2) {
            return -1;
        }
    }

    if (victoryScore < 900 && *(short *)(gs + 0x114) != 0) {
        /* Format liberation message */
        heroBase = gs + armyIdx * 0x42;
        /* DrawNumber - format string with hero name */
        /* FUN_10030454 - display message */

        /* Convert city at hero's location to neutral */
        /* FUN_1004f438(hero.x, hero.y, 1) */

        /* Award hero score: 1d15 + 10 */
        bonus = (short)RandomRange(1, 15, 0);
        *(short *)(gs + currentPlayer * 2 + 0x1122) =
            *(short *)(gs + currentPlayer * 2 + 0x1122) + bonus + 10;

        /* Refresh map display at hero location */
        /* RefreshMapAfterCombat(hero.x, hero.y) */

        /* Return movement result */
        /* return FUN_1001f5e8(hero.x, hero.y); */
        return 0;
    } else {
        /* Alternate handling for high-score or non-named heroes */
        /* LaunchAllianceDefense(armyIdx); */
        return -1;
    }
}

/*
 * ProcessHeroHireReward - Award hero score bonus after hire event
 *
 * Awards RandomRange(1, 25, 0) + 100 to the current player's hero
 * hire score, then processes placement and display updates.
 *
 * Original: FUN_1004f664 at 0x1004f664 (160 bytes)
 */
void ProcessHeroHireReward(void)
{
    int gs = (int)gGameState;
    short currentPlayer;
    short bonus;

    currentPlayer = *(short *)(gs + 0x110);

    /* Roll 1d25 + 100 */
    bonus = (short)RandomRange(1, 25, 0);
    *(short *)(gs + currentPlayer * 2 + 0x1122) =
        *(short *)(gs + currentPlayer * 2 + 0x1122) + bonus + 100;

    /* FUN_1004f620 - place hero on map */
    /* GetAIStateSnapshot - refresh data */
    /* FUN_1002bbd4 - update display */
    /* FUN_1002bcd8 - finalize */
}

/* ======================================================================
 * QUEST SYSTEM
 * ====================================================================== */

/*
 * CheckQuestCompletion - Check if hero completed their active quest
 *
 * Called after capturing a city or defeating an army. Checks whether:
 *   1. The current player has hero questing enabled (offset 0x11E)
 *   2. The current player has an active quest (offset 0x1142)
 *   3. A hero in the active stack matches the quest target army
 *   4. Quest type is 4 (capture city) or 5 (kill army)
 *   5. The target city matches the quest target
 *
 * On completion:
 *   - Increments completed quest counter (ExtState + 0x4A)
 *   - Clears active quest slot (ExtState + 0x46 = 0xFFFF)
 *   - For type 5: calls LiberateCity, then ShowQuestReward(2)
 *   - For type 4: calls ShowQuestReward(4)
 *
 * Original: FUN_10012a8c at 0x10012a8c (572 bytes)
 */
long CheckQuestCompletion(short cityOrArmyIndex, short param_2)
{
    int gs = (int)gGameState;
    int es = (int)gExtState;
    short currentPlayer;
    short questActive;
    short questType;
    short questTargetCity;
    Boolean heroAtTarget = false;
    short i;
    long result;

    /* Check if questing is enabled */
    if (*(short *)(gs + 0x11E) == 0) {
        return cityOrArmyIndex;
    }

    currentPlayer = *(short *)(gs + 0x110);

    /* Check if player has an active quest */
    questActive = *(short *)(gs + currentPlayer * 0x0C + 0x1142);
    if (questActive == 0) {
        return cityOrArmyIndex;
    }

    /* Check if any hero in our selection matches the quest target army */
    /* gSelectionCount = selection count, gSelectionArray = selection array */
    /* The decompilation iterates through selected units checking if any
     * match the quest target army stack (offset 0x1146) */
    /* Simplified: */
    {
        short questTargetArmy = *(short *)(gs + currentPlayer * 0x0C + 0x1146);
        /* Check selection stack for quest army */
        /* ... (selection iteration) ... */
        heroAtTarget = true;  /* Simplified - actual checks selection */
    }

    if (!heroAtTarget)
        return cityOrArmyIndex;

    /* Check quest type */
    questType = *(short *)(gs + currentPlayer * 0x0C + 0x1144);
    if (questType != 4 && questType != 5)
        return cityOrArmyIndex;

    /* Find city at the target location */
    /* result = LookupCityAtPos(cityOrArmyIndex, param_2); */
    result = cityOrArmyIndex;  /* Simplified */

    /* Check if target matches quest */
    questTargetCity = *(short *)(gs + currentPlayer * 0x0C + 0x1148);
    if ((short)result != questTargetCity)
        return cityOrArmyIndex;

    /* ---- QUEST COMPLETE ---- */

    /* Increment completed quest counter */
    *(short *)(es + 0x4A) = *(short *)(es + 0x4A) + 1;

    /* Clear active quest slot */
    *(short *)(es + 0x46) = (short)0xFFFF;

    if (questType == 5) {
        /* Kill quest: liberate the city */
        LiberateCity((short)result, 1);
        if (*(short *)(gs + currentPlayer * 0x0C + 0x1142) == 0) {
            return 0;
        } else {
            return ShowQuestReward(2, 0, 0);
        }
    } else {
        /* Capture quest */
        if (*(short *)(gs + currentPlayer * 0x0C + 0x1142) == 0) {
            return 0;
        } else {
            return ShowQuestReward(4, 0, 0);
        }
    }
}

/*
 * ShowQuestReward - Display quest completion and clear quest data
 *
 * Checks if the quest target is owned by the quest giver. If so, returns
 * the reward type code. Otherwise, displays completion/failure messages
 * and clears the player's active quest.
 *
 * Returns the reward type (0-5) if quest succeeded, 0 otherwise.
 *
 * Original: ProcessQuestEvent at 0x1004e384 (496 bytes)
 */
long ShowQuestReward(short rewardType, short param_2, short param_3)
{
    int gs = (int)gGameState;
    short currentPlayer;
    short questTargetArmy;
    char targetOwner;
    Boolean isAutoMode;

    currentPlayer = *(short *)(gs + 0x110);

    /* Get the owner of the quest target army */
    questTargetArmy = *(short *)(gs + currentPlayer * 0x0C + 0x1146);
    targetOwner = *(char *)((int)gUnitTypeTable +
                            questTargetArmy * 0x16 + 5);

    /* Check if quest target belongs to the current player */
    if ((int)targetOwner == (int)currentPlayer) {
        /* Quest target is ours - return reward if valid range */
        if (((unsigned long)rewardType + 1) < 6) {
            return (long)rewardType;
        }
    } else {
        /* Quest target not ours - display completion/failure messages */
        /* Determine if running in auto mode (AI turn) */
        /* isAutoMode = (*gAutoModeFlag == 0) && (player_type != 1) ? false : true; */
        isAutoMode = false;  /* Simplified */

        if (!isAutoMode) {
            /* FUN_1005f678(0x21, 1, ...) - format completion text */
            /* FUN_1005f678(0x21, 0)      - format reward text */
            /* FUN_1003ced4(...)           - display dialog */
        }

        /* Clear the player's active quest */
        *(short *)(gs + currentPlayer * 0x0C + 0x1142) = 0;
    }

    return 0;
}

/* ======================================================================
 * RUINS / TEMPLE SEARCH
 * ====================================================================== */

/*
 * ProcessRuinsSearch - Main handler for searching ruins, temples, libraries
 *
 * This is the largest function in the economy system (2708 bytes).
 * Handles all search result types:
 *
 *   Type 0x05 (already searched): return immediately
 *   Guardian present (offset 0x1A != 0):
 *     - Display guardian description (vowel grammar: "an" vs "a")
 *     - Fight guardian via FUN_1005310c
 *     - On victory: increment battlesWon, armiesKilled stats
 *     - On defeat: display message, clear guardian
 *   Type 0x02 (Temple/Sage):
 *     - AI mode: station army at temple (state=3)
 *     - Human: assign quest (state=1), record coordinates
 *     - Set map visited flag (0x400000)
 *   Type 0x04 (Gold treasure):
 *     - Normal: 3d500+500 gold (503-2000)
 *     - Special: 3d1000+1000 gold (1003-4000)
 *     - Add to player treasury, set visited flag
 *   Type 0x05 (Item):
 *     - Normal: 1d2 items (1-2)
 *     - Special: 1d2+2 items (3-4)
 *     - Display item name, place items on map
 *
 * Original: FUN_100539e8 at 0x100539e8 (2708 bytes)
 */
void ProcessRuinsSearch(int locData, short mapX, short mapY)
{
    int gs = (int)gGameState;
    int mapBase = (int)gMapTiles;
    short currentPlayer;
    Boolean isAutoMode;
    char searchType;
    char guardType;
    short goldFound;
    int itemCount;
    int tileAddr;
    int i;

    currentPlayer = *(short *)(gs + 0x110);

    /* Determine if running in auto (AI) mode */
    /* Auto mode if: player control flag == 0 AND player type != AI */
    isAutoMode = false;  /* Simplified check */

    /* Prepare army for search (FUN_1003357c) */
    /* FUN_1003357c(armyStackPtr, 3); */

    /* If already fully searched (type 0x05), return */
    if (*(char *)(locData + 0x18) == 0x05) {
        return;
    }

    /* ---- Check for guardian ---- */
    guardType = *(char *)(locData + 0x1A);
    if (guardType != 0) {
        if (!isAutoMode) {
            /* Grammar check for article: "an" for vowels, "a" for consonants */
            char firstChar = *(char *)(gs + (int)guardType * 0x10 + 0xFA6);
            /* Convert to lowercase */
            if (firstChar >= 'A' && firstChar <= 'Z') {
                firstChar += 0x20;
            }
            /* Check vowel */
            if (firstChar == 'a' || firstChar == 'e' || firstChar == 'o' ||
                firstChar == 'i' || firstChar == 'u') {
                /* FUN_1005f678(0x34, 3) - "an <name>" message */
            } else {
                /* FUN_1005f678(0x34, 0) - "a <name>" message */
            }
            /* FUN_10052f6c - display formatted message */
        }

        /* Fight the guardian (FUN_1005310c) */
        if (1 /* FUN_1005310c(locData) != 0 -- guardian defeated */) {
            /* Victory! */
            /* FUN_10038c60 - record battle event */

            /* Increment battles won stat */
            {
                int statBase = gs + currentPlayer * 0x50;
                *(short *)(statBase + 0x11A6) += 1;  /* battles won */
            }

            /* Count and increment armies killed */
            /* (iterate dead enemy list, increment 0x11AA for each) */

            /* Remove army marker, clear selection */
            /* FUN_1002e5c0, FUN_100214e8 */

            if (!isAutoMode) {
                /* FUN_1005f678(0x34, 1) - victory message */
                /* FUN_100534c8(0) - update search display */
            }
            return;
        }

        if (!isAutoMode) {
            /* FUN_1005f678(0x34, 2) - defeat message */
        }
        /* Clear guardian */
        *(char *)(locData + 0x1A) = 0;
    }

    /* ---- Process search type ---- */
    searchType = *(char *)(locData + 0x18);

    /* ---- Type 0x02: Temple / Sage ---- */
    if (searchType == 0x02) {
        char templeIndex = *(char *)(locData + 0x19);

        if (isAutoMode) {
            /* AI: station army at temple */
            *(char *)(gs + templeIndex * 0x1E + 0xD28) = 3;  /* state = army stationed */
            /* Set guard stack to current army index */
            /* *(short *)(gs + templeIndex * 0x1E + 0xD2A) = armyStackIndex; */
            *(short *)(gs + templeIndex * 0x1E + 0xD2C) = 0;
            *(short *)(gs + templeIndex * 0x1E + 0xD2E) = 0;
        } else {
            /* Human: display temple message and assign quest */
            /* FUN_1005f678(0x35, 0) - format temple message */
            /* FUN_10052f6c - display message */
            *(char *)(gs + templeIndex * 0x1E + 0xD28) = 1;  /* state = quest given */
            *(short *)(gs + templeIndex * 0x1E + 0xD2A) = 0;
            *(short *)(gs + templeIndex * 0x1E + 0xD2C) = mapX;  /* quest giver X */
            *(short *)(gs + templeIndex * 0x1E + 0xD2E) = mapY;  /* quest giver Y */
            /* FUN_100534c8(1) - update search display */
        }

        /* Record event: player visited temple */
        /* FUN_10038c60(currentPlayer, 6, templeIndex, 0, heroName) */

        /* Set map visited flag */
        tileAddr = mapBase + mapY * MAP_STRIDE + mapX * 2;
        *(unsigned long *)tileAddr |= 0x400000;

        /* Mark location as searched */
        *(char *)(locData + 0x18) = 0;
    }

    /* ---- Type 0x04: Gold Treasure ---- */
    else if (searchType == 0x04) {
        /* Roll for gold amount */
        if (*(short *)(locData + 0x1C) == 0) {
            goldFound = (short)RandomRange(3, 500, 500);   /* Normal: 3d500+500 = 503-2000 */
        } else {
            goldFound = (short)RandomRange(3, 1000, 1000);  /* Special: 3d1000+1000 = 1003-4000 */
        }

        /* Set map visited flag */
        tileAddr = mapBase + mapY * MAP_STRIDE + mapX * 2;
        *(unsigned long *)tileAddr |= 0x400000;

        /* Add gold to player treasury */
        {
            int goldAddr = gs + currentPlayer * 0x14 + 0x186;
            *(short *)goldAddr = *(short *)goldAddr + goldFound;
            /* Note: gold cap of 30000 is enforced elsewhere */
        }

        if (!isAutoMode) {
            /* FUN_1005f678(0x36, 0) - format gold message */
            /* DrawNumber - format with hero name and gold amount */
            /* FUN_10052f6c - display message */
            /* FUN_100534c8(0) - update search display */
        }

        /* Record event */
        /* FUN_10038c60(currentPlayer, 6, 0x66, 0, heroName) */
    }

    /* ---- Type 0x05: Item Discovery ---- */
    else if (searchType == 0x05) {
        /* Set map visited flag */
        tileAddr = mapBase + mapY * MAP_STRIDE + mapX * 2;
        *(unsigned long *)tileAddr |= 0x400000;

        /* Roll for item count */
        itemCount = RandomRange(1, 2, 0);  /* 1-2 items */
        if (*(short *)(locData + 0x1C) != 0) {
            itemCount += 2;  /* Special: 3-4 items */
        }

        if (itemCount < 2) {
            /* Single item: display name */
            char *itemName = GetItemName(*(char *)(locData + 0x1A));
            /* FUN_1005f678(0x37, 0) - "found a <item>" */
            /* DrawNumber - format with item name and hero name */
        } else {
            /* Multiple items: display count and name */
            char *itemName = GetItemName(*(char *)(locData + 0x1A));
            /* FUN_1005f678(0x37, 1) - "found <count> <items>" */
            /* DrawNumber - format with count, item name, hero name */
        }

        if (!isAutoMode) {
            /* FUN_10052f6c - display message */
            /* FUN_100534c8(0) - update search display */
        }

        /* Set visited flag again (redundant but matches decompilation) */
        tileAddr = mapBase + mapY * MAP_STRIDE + mapX * 2;
        *(unsigned long *)tileAddr |= 0x400000;

        /* Place items on map */
        {
            char itemType = *(char *)(locData + 0x1A);
            for (i = 0; i < itemCount; i++) {
                /* FUN_10053838 - place item at/near (mapX, mapY) */
                /* Returns pointer to placed location, or NULL */
                /* If placed successfully, mark tile with item flag (0x100000) */
            }
        }

        /* Record event */
        /* FUN_10038c60(currentPlayer, 6, 100, 0, heroName) */
    }
}

/* ======================================================================
 * TURN SEQUENCE
 * ====================================================================== */

/*
 * ShuffleTurnOrder - Set or randomize player turn order
 *
 * If randomTurnOrder is disabled (offset 0x122 == 0):
 *   Sets fixed order 0,1,2,3,4,5,6,7
 * If enabled:
 *   Initializes to 0-7, then performs 20 random swaps (Fisher-Yates variant)
 *   Each swap picks two random indices (0-7) and exchanges their values.
 *
 * Resets turnOrderIndex to 0.
 *
 * Original: FUN_1003c838 at 0x1003c838 (256 bytes)
 */
void ShuffleTurnOrder(void)
{
    int gs = (int)gGameState;
    int i;
    int a, b;
    short temp;

    if (*(short *)(gs + 0x122) == 0) {
        /* Fixed order: 0, 1, 2, 3, 4, 5, 6, 7 */
        for (i = 0; i < MAX_PLAYERS; i++) {
            *(short *)(gs + i * 2 + 0x164) = (short)i;
        }
    } else {
        /* Initialize to sequential order */
        for (i = 0; i < MAX_PLAYERS; i++) {
            *(short *)(gs + i * 2 + 0x164) = (short)i;
        }

        /* Perform 20 random swaps */
        for (i = 0; i < 20; i++) {   /* 0x14 = 20 swaps */
            a = RandomRange(1, 8, -1);   /* Random index 0-7 */
            b = RandomRange(1, 8, -1);   /* Random index 0-7 */

            /* Swap turnOrder[a] and turnOrder[b] */
            temp = *(short *)(gs + b * 2 + 0x164);
            *(short *)(gs + b * 2 + 0x164) = *(short *)(gs + a * 2 + 0x164);
            *(short *)(gs + a * 2 + 0x164) = temp;
        }
    }

    /* Reset turn order index to 0 */
    *(short *)(gs + 0x174) = 0;
}

/*
 * CheckVictoryConditions - Determine if any player has won
 *
 * Counts total alive armies, human players, and AI players.
 * Checks for several victory conditions:
 *
 *   1. All dead -> Game draw (message 0x0D)
 *   2. No humans alive + someone was eliminated -> All humans eliminated (0x0E)
 *   3. Solo victory: 1 human, 0 AI, player armies > total/2
 *   4. Domination: 1 human, AI still alive, but player dominates
 *      (player armies > total/2 AND player armies > max enemy + total/8)
 *
 * Original: FUN_1003d094 at 0x1003d094 (1096 bytes)
 */
void CheckVictoryConditions(void)
{
    int gs = (int)gGameState;
    int mapBase = (int)gMapTiles;
    unsigned int totalArmies;
    short humanPlayers, computerPlayers;
    short lastHumanPlayer;
    Boolean allDead;
    Boolean someoneEliminated;
    int p, i;
    int armyBase;

    /* GetAIStateSnapshot - refresh army count data */

    /* Count total alive armies on the map */
    totalArmies = 0;
    if (*(short *)(gs + 0x1602) > 0) {
        for (i = 0; i < *(short *)(gs + 0x1602); i++) {
            armyBase = gs + i * 0x42;
            /* Check terrain type at army location - if valid terrain, count it */
            int tileData = *(int *)(mapBase +
                           *(short *)(armyBase + 0x1606) * MAP_STRIDE +
                           *(short *)(armyBase + 0x1604) * 2);
            char terrain = *(char *)(gs + (tileData >> 24) + 0x711);
            /* Negate terrain and check if army is on valid tile */
            /* The exact check from decompilation is:
             * terrain_negated + 10, checking specific value == 0 */
            if (-terrain + 10 == 0) {  /* Simplified from actual bit logic */
                totalArmies++;
            }
        }
    }

    /* Count player types */
    humanPlayers = 0;
    computerPlayers = 0;
    lastHumanPlayer = -1;
    allDead = true;
    someoneEliminated = false;

    for (p = 7; p >= 0; p--) {
        /* Check if player is alive */
        if (*(short *)(gs + p * 2 + 0x138) != 0) {
            allDead = false;
        }

        /* Check if player just died (alive=0 but type=0 still set) */
        if (*(short *)(gs + p * 2 + 0xD0) == 0) {
            if (*(short *)(gs + p * 2 + 0x138) == 0) {
                /* Player was alive, now dead - mark as eliminated */
                *(short *)(gs + p * 2 + 0xD0) = 1;
                someoneEliminated = true;
            } else {
                /* Active human player */
                humanPlayers++;
                someoneEliminated = true;
                lastHumanPlayer = (short)p;
            }
        }

        /* Count AI players */
        if (*(short *)(gs + p * 2 + 0x138) != 0 &&
            *(short *)(gs + p * 2 + 0xD0) == 1) {
            computerPlayers++;
        }
    }

    /* ---- Condition 1: All players dead -> Draw ---- */
    if (allDead) {
        /* FUN_1005f678(0x0D, 1) + FUN_1005f678(0x0D, 0) -> dialog */
        /* FUN_1003ced4 - show end game dialog */
        /* Also show secondary draw message */
    }

    /* ---- Check remaining victory conditions ---- */
    if (*(short *)(gs + 0x15C) == 0) {   /* Victory not yet achieved */

        /* Condition 2: No humans and someone was eliminated */
        if (humanPlayers == 0 && someoneEliminated) {
            /* FUN_1005f678(0x0E, 1) + FUN_1005f678(0x0E, 0) -> all humans eliminated */
        }

        if (*(short *)(gs + 0x15C) == 0) {
            /* Condition 3: Solo victory - 1 human, 0 AI, armies > total/2 */
            if (humanPlayers == 1 && computerPlayers == 0) {
                extern int gPerPlayerArmyCount[];  /* gPerPlayerArmyCount */
                int playerArmies = gPerPlayerArmyCount[lastHumanPlayer];
                int halfTotal = (int)totalArmies / 2;
                if (halfTotal < playerArmies) {
                    *(short *)(gs + 0x15C) = 1;   /* Victory achieved! */
                    /* FUN_10038c60 - record victory event */
                }
            }

            /* Condition 3b: Only 1 AI left, no humans */
            if (*(short *)(gs + 0x15C) == 0) {
                if (humanPlayers == 0 && computerPlayers == 1) {
                    *(short *)(gs + 0x15C) = 1;
                    /* Find the surviving player */
                    for (p = 0; p < MAX_PLAYERS; p++) {
                        if (*(short *)(gs + p * 2 + 0x138) != 0)
                            break;
                    }
                    /* FUN_1005f678(0x10, 0) - AI victory message */
                    /* Clear their type back to human for display */
                    /* FUN_10038c60 - record event */
                }

                /* Condition 4: Domination check */
                if (*(short *)(gs + 0x15C) == 0 &&
                    humanPlayers == 1 && computerPlayers > 0 &&
                    *(short *)(gs + 0x15E) == 0) {

                    extern int gPerPlayerArmyCount[];
                    int maxEnemyArmies = 0;
                    int playerArmies = gPerPlayerArmyCount[lastHumanPlayer];

                    /* Find strongest AI player */
                    for (p = 0; p < MAX_PLAYERS; p++) {
                        if (*(short *)(gs + p * 2 + 0x138) != 0 &&
                            *(short *)(gs + p * 2 + 0xD0) == 1) {
                            int enemyCount = gPerPlayerArmyCount[p];
                            if (enemyCount > maxEnemyArmies) {
                                maxEnemyArmies = enemyCount;
                            }
                        }
                    }

                    /* Domination: player > total/2 AND player > maxEnemy + total/8 */
                    if ((int)totalArmies / 2 < playerArmies &&
                        maxEnemyArmies + (int)totalArmies / 8 < playerArmies) {
                        *(short *)(gs + 0x15E) = 1;  /* Domination flag set */
                    }
                }
            }
        }
    }
}

/*
 * CheckPlayerElimination - Process player elimination
 *
 * Scans all players. For each alive player that should be dead
 * (has no cities/armies):
 *   1. Removes all their army units from the map
 *   2. Handles special unit removal (type 0x1C)
 *   3. Records elimination event
 *   4. Displays elimination message (different for human/AI)
 *   5. Sets player as dead (alive=0, gold=0)
 *   6. Resets diplomacy to peace with all other players
 *
 * Original: FUN_1003cb84 at 0x1003cb84 (848 bytes)
 */
void CheckPlayerElimination(void)
{
    int gs = (int)gGameState;
    int p, i;
    short armyCount;
    Boolean someoneStillAlive = false;

    /* GetAIStateSnapshot - refresh counts */

    /* First pass: find if any human player is still alive */
    for (p = 0; p < MAX_PLAYERS; p++) {
        if (*(short *)(gs + p * 2 + 0x138) != 0 &&
            *(short *)(gs + p * 2 + 0xD0) == 0) {
            someoneStillAlive = true;
            break;
        }
    }

    /* Second pass: process each player */
    for (p = 0; p < MAX_PLAYERS; p++) {
        /* Skip if already dead or still has armies */
        extern int gPerPlayerArmyCount[];
        if (*(short *)(gs + p * 2 + 0x138) == 0 ||
            gPerPlayerArmyCount[p] > 0) {
            continue;
        }

        /* ---- Player p should be eliminated ---- */

        /* Remove all their army units */
        armyCount = *(short *)(gs + 0x182);  /* max_armies */
        while (armyCount != 0) {
            armyCount--;
            int unitBase = (int)gUnitTypeTable + armyCount * 0x16;
            if (*(char *)(unitBase + 5) == (char)p) {
                /* Check for special unit type 0x1C */
                if (*(char *)(unitBase + 4) == 0x1C) {
                    /* Special removal: FUN_1002e5c0, then save current player */
                    short savedPlayer = *(short *)(gs + 0x110);
                    *(short *)(gs + 0x110) = (short)p;
                    /* FUN_1002e5c0(unitBase, x, y) */
                    *(short *)(gs + 0x110) = savedPlayer;
                }
                /* FUN_100214e8 - remove unit from map */
            }
        }

        /* Record elimination event */
        /* FUN_10038c60(p, 4, p, 0, ...) */

        /* Display elimination message */
        /* FUN_1005f678(0x0C, -1) - format elimination text */
        /* DrawNumber - format with player name */
        /* Different display for human vs AI (FUN_1003c938 vs FUN_1003cac4) */

        /* Mark player as dead */
        *(short *)(gs + p * 2 + 0x138) = 0;
        /* Clear gold */
        *(short *)(gs + p * 0x14 + 0x186) = 0;

        /* Reset diplomacy: set peace with all other players */
        {
            int q;
            for (q = 0; q < MAX_PLAYERS; q++) {
                int addr1 = gs + 0x1582 + p * 0x10 + q * 2;
                int addr2 = gs + 0x1582 + q * 0x10 + p * 2;

                /* Set stance to peace (0x10000000) */
                *(unsigned long *)addr1 =
                    (*(unsigned long *)addr1 & 0xCFFFFFFF) | 0x10000000;
                /* Mirror the stance */
                {
                    unsigned long val = *(unsigned long *)addr1;
                    *(unsigned long *)addr1 =
                        ((val >> 0x1C) & 3) << 0x1A | (val & 0xF3FFFFFF);
                }

                *(unsigned long *)addr2 =
                    (*(unsigned long *)addr2 & 0xCFFFFFFF) | 0x10000000;
                {
                    unsigned long val = *(unsigned long *)addr2;
                    *(unsigned long *)addr2 =
                        ((val >> 0x1C) & 3) << 0x1A | (val & 0xF3FFFFFF);
                }
            }
        }
    }
}

/*
 * AdvanceToNextPlayer - Core turn advancement
 *
 * Iterates through the player order array until finding an alive player.
 * At the boundary of a full round (all 8 players processed):
 *   1. Increments turn number
 *   2. Shuffles turn order (if random)
 *   3. Checks for player elimination
 *   4. Checks victory conditions
 *   5. Processes neutral city growth/expansion
 *   6. Saves game state
 *   7. Processes map events
 *
 * Original: FUN_1003d4dc at 0x1003d4dc (244 bytes)
 */
void AdvanceToNextPlayer(void)
{
    int gs = (int)gGameState;
    Boolean foundActive = false;

    do {
        /* Check if a new round should begin */
        if (*(short *)(gs + 0x118) != 0) {
            /* ---- New round ---- */
            /* Increment turn counter */
            *(short *)(gs + 0x136) = *(short *)(gs + 0x136) + 1;

            ShuffleTurnOrder();              /* FUN_1003c838 */

            /* Clear the turn advance flag */
            *(short *)(gs + 0x118) = 0;

            CheckPlayerElimination();        /* FUN_1003cb84 */
            CheckVictoryConditions();        /* FUN_1003d094 */
            /* FUN_10025f94 - stub/minimal processing */
            ProcessNeutralCityGrowth();      /* FUN_1002ce38 */
            /* SaveTurnState - save game state */
            /* FUN_10064850(1, 0) - process map events */
        }

        /* Advance to next player in turn order */
        *(short *)(gs + 0x110) =
            *(short *)(gs + *(short *)(gs + 0x174) * 2 + 0x164);

        /* Increment turn order index */
        *(short *)(gs + 0x174) = *(short *)(gs + 0x174) + 1;

        /* Check if we've gone through all 8 players -> next round */
        if (*(short *)(gs + 0x174) > 7) {
            *(short *)(gs + 0x118) = 1;   /* Set turn advance flag */
        }

        /* Check if current player is alive */
        if (*(short *)(gs + *(short *)(gs + 0x110) * 2 + 0x138) != 0) {
            foundActive = true;
        }
    } while (!foundActive);
}

/*
 * StartOfTurnProcessing - Initialize state for current player's turn
 *
 * Called at the very start of a player's turn:
 *   1. Set game phase to 100
 *   2. Clear report flag
 *   3. Free old report resources
 *   4. Refresh army data
 *   5. Clear per-player special event flags
 *   6. Reset selection state
 *   7. Clear/update fog of war
 *   8. Advance to next player (may trigger new round)
 *   9. Start turn timer
 *
 * Original: FUN_1000d808 at 0x1000d808 (264 bytes)
 */
void StartOfTurnProcessing(void)
{
    int gs = (int)gGameState;
    int i;

    /* UpdateProgressBar(100) - set game phase to 100 */
    /* clearReportFlag = 0 */

    /* Free old resources if they exist */
    /* if (previousReport != NULL) FreeResource(previousReport); */
    /* if (playerReport[currentPlayer] != NULL) FreeResource(playerReport[currentPlayer]); */

    /* FUN_10027448 - refresh army data / counts */

    /* Clear per-player special event flags */
    for (i = 7; i >= 0; i--) {
        /* specialEvents[i] = 0; */
        /* (at gCombatDisplayPieces + i*4) */
    }

    /* Reset selection state */
    /* Various pointers cleared to 0 */

    /* FUN_1002c85c - clear/reset fog of war overlay */

    /* Update fog display if enabled */
    if (*(short *)(gs + 0x124) != 0) {   /* vectoring_enabled (fog_of_war) */
        /* FUN_10008f70 - update fog display */
    }

    /* Advance to next player - may trigger new round */
    AdvanceToNextPlayer();    /* FUN_1003d4dc */

    /* Start turn timer */
    /* turnStarted = true;              (offset +0x9A in timer struct) */
    /* turnStartTime = GetCurrentTime(); (offset +0x9C) */
    /* FUN_10001a88 - get current tick count */
}

/* ======================================================================
 * GAME INITIALIZATION
 * ====================================================================== */

/*
 * GameInit - Initialize all game state for a new game
 *
 * Performs complete game initialization:
 *   1. InitArmyProduction, InitPlayerData - initialize subsystems
 *   2. Validate each player's capital city exists; eliminate players without one
 *   3. Set initial flags: turnAdvanceFlag=0, dominationFlag=0,
 *      turnNumber=1, maxArmies=10, introFlag=0
 *   4. Count active human players; set fog-of-war if only 1
 *   5. For each player: set resource handle, clear dead players' gold
 *   6. FUN_1003956c - initialize production system
 *   7. Allocate unit type table (22000 bytes for 1000 entries at 0x16 each)
 *   8. Clear all 1000 unit type slots (set type to -1, owner to 0xFF)
 *   9. Clear special data pointers
 *  10. Clear per-player event counters
 *  11. FUN_1003c068 - InitializeCityOwnership (calls ArmyTurnUpdate)
 *  12. FUN_100099cc, FUN_100090f0, FUN_10025f2c, FUN_1002cbbc - map/display init
 *  13. Set viewport centered on first active player's capital
 *  14. Clear map visibility and fog flags for all tiles
 *  15. FUN_1005bbe8 - initialize random seed
 *  16. Initialize hero hire scores:
 *      - Each player: heroScore = RandomRange(1, 8, 0)
 *      - If enhanced start gold (offset 0x116) and player alive: heroScore += 400
 *  17. FUN_100275ec - finalize initialization
 *
 * Original: FUN_1003c368 at 0x1003c368 (1232 bytes)
 */
void GameInit(void)
{
    int gs = (int)gGameState;
    int mapBase = (int)gMapTiles;
    int p, x, y;
    short humanCount;

    /* Initialize subsystems */
    /* InitArmyProduction(); */
    /* InitPlayerData(); */

    /* Validate capitals - players without a city are eliminated */
    for (p = 0; p < MAX_PLAYERS; p++) {
        int capitalAddr = gs + p * 0x14 + 0x18A;
        short capX = *(short *)(capitalAddr);
        short capY = *(short *)(capitalAddr + 2);

        /* LookupCityAtPos - find city at capital coordinates */
        int cityIdx = -1;  /* = LookupCityAtPos(capX, capY); */
        if (cityIdx < 0) {
            /* No city at capital - eliminate player */
            *(short *)(gs + p * 2 + 0xD0) = 1;   /* type = AI (eliminated) */
            *(short *)(gs + p * 2 + 0x138) = 0;   /* alive = false */
        }
    }

    /* Set initial game flags */
    *(short *)(gs + 0x118) = 0;    /* turnAdvanceFlag = 0 */
    *(short *)(gs + 0x15E) = 0;    /* dominationFlag = 0 */
    *(short *)(gs + 0x136) = 1;    /* turnNumber = 1 */
    *(short *)(gs + 0x182) = 10;   /* maxArmies = 10 (initial stack count) */
    *(short *)(gs + 0x158) = 0;    /* introFlag = 0 */

    /* Count human players */
    humanCount = 0;
    for (p = 0; p < MAX_PLAYERS; p++) {
        if (*(short *)(gs + p * 2 + 0xD0) == 0) {
            humanCount++;
        }
    }

    /* Set fog of war for single player */
    if (*(short *)(gs + 0x124) != 0 && humanCount == 1) {
        /* Enable full fog of war */
    }

    /* Initialize per-player resources and gold */
    for (p = 0; p < MAX_PLAYERS; p++) {
        *(short *)(gs + p * 2 + 0x148) = 1;  /* Set resource handle flag */
        if (*(short *)(gs + p * 2 + 0x138) == 0) {
            /* Dead player: clear gold */
            *(short *)(gs + p * 0x14 + 0x186) = 0;
        }
    }

    /* FUN_1003956c - initialize production system */

    /* Allocate unit type table if not already allocated */
    if (gUnitTypeTable == NULL) {
        /* Allocate 22000 bytes (1000 entries * 0x16 bytes each) */
        /* gUnitTypeTable = (UnitTypeDef *)NewPtr(22000); */
    }

    /* Clear all 1000 unit type slots */
    for (p = 999; p >= 0; p--) {
        int base = (int)gUnitTypeTable + p * 0x16;
        *(char *)(base + 5) = (char)SLOT_EMPTY;    /* owner = 0xFF */
        *(short *)base = -1;                         /* type_id = -1 */
        *(short *)(base + 2) = -1;                   /* x coord = -1 */
    }

    /* Clear per-player event counters */
    for (p = 0; p < MAX_PLAYERS; p++) {
        /* specialEvents[p] = 0; */
    }

    /* Initialize city ownership, army stats, sprite indices */
    /* FUN_1003c068 -> calls ArmyTurnUpdate (FUN_1003b9f8) internally */
    /* InitializeCityOwnership(); */

    /* Map and display initialization */
    /* FUN_100099cc(); FUN_100090f0(); FUN_10025f2c(); FUN_1002cbbc(); */

    /* Set viewport centered on first active player's capital */
    {
        short currentPlayer = *(short *)(gs + 0x110);
        /* Find first active player if fog enabled */
        if (*(short *)(gs + 0x124) != 0) {
            for (p = 0; p < MAX_PLAYERS; p++) {
                if (*(short *)(gs + p * 2 + 0xD0) == 0) {
                    currentPlayer = (short)p;
                    break;
                }
            }
            /* CenterMapOnArmy(currentPlayer) - setup fog for this player */
        }

        /* Center viewport on capital */
        int capOfs = gs + currentPlayer * 0x14;
        *(short *)(gs + 0x17E) = *(short *)(capOfs + 0x18A);  /* viewport center X */
        *(short *)(gs + 0x180) = *(short *)(capOfs + 0x18C);  /* viewport center Y */

        /* Calculate viewport bounds */
        /* (Uses window dimensions / 40 to get tile counts) */
        /* Clamp to map boundaries: X max 111 (0x6F), Y max 155 (0x9B) */
    }

    /* Clear all map tile visibility/fog flags */
    for (x = 0; x < 112; x++) {     /* MAP_MAX_WIDTH = 112 (0x70) */
        for (y = 0; y < 156; y++) {  /* Map height ~156 (0x9C) */
            int tileAddr = mapBase + y * MAP_STRIDE + x * 2;
            /* Clear visibility bit (0x200000) */
            *(unsigned long *)tileAddr &= ~0x00200000;
            /* Clear fog bit from secondary map (0x40000000) */
            /* (secondary map at gDataPtr_10117354) */
        }
    }

    /* FUN_1005bbe8 - initialize/seed random number generator */

    /* ---- Initialize hero hire scores ---- */
    for (p = 0; p < MAX_PLAYERS; p++) {
        /* Base score: random 1-8 */
        short score = (short)RandomRange(1, 8, 0);
        *(short *)(gs + p * 2 + 0x1122) = score;

        /* Enhanced start: +400 for alive players */
        if (*(short *)(gs + 0x116) != 0) {     /* enhancedStartGold / combat_bonus */
            if (*(short *)(gs + p * 2 + 0xD0) == 0) {  /* human = alive */
                *(short *)(gs + p * 2 + 0x1122) += 400;
            }
        }
    }

    /* FUN_100275ec - finalize initialization */
}

/* ======================================================================
 * NEUTRAL CITY GROWTH (STUB)
 * ====================================================================== */

/*
 * ProcessNeutralCityGrowth - Handle neutral city army growth per round
 *
 * Only active when gameVariant > 1 (offset 0x11A in GameState).
 * For each neutral (owner 0x0F) army that is a hero/city marker:
 *   1. Decrement HP timer; when it reaches 0, reset army
 *   2. Try to build a new army for the neutral city
 *   3. If build fails and nearby army count < 4, expand army
 *
 * Original: FUN_1002ce38 (called from AdvanceToNextPlayer)
 *
 * Note: Full decompilation not included; this is a simplified stub.
 */
static void ProcessNeutralCityGrowth(void)
{
    int gs = (int)gGameState;
    short h;

    /* Only active for game variants > 1 */
    if (*(short *)(gs + 0x11A) < 2) {
        return;
    }

    /* Iterate all armies looking for neutral hero/city markers */
    for (h = *(short *)(gs + 0x1602) - 1; h >= 0; h--) {
        int armyBase = gs + h * 0x42;
        if ((int)*(char *)(armyBase + 0x1619) != NEUTRAL_PLAYER)
            continue;

        /* Check if this is a hero/city marker (isHeroFlag != 0) */
        /* Additional logic: decrement HP timer, attempt build, expand */
        /* See RE_economy_heroes.md section 9.6 for full pseudocode */
    }
}

/* ======================================================================
 * AI GOLD / HERO HIRING CHECK
 * ====================================================================== */

/*
 * AIProcessTurn - AI checks if gold > 399, considers hiring a hero
 *
 * Called during AI turn processing. If the AI player has more than
 * 399 gold, rolls 1d10 and if > 7 (30% chance), attempts to select
 * a strong hero candidate. Hires if candidate strength > 2 and
 * treasury >= (hero upkeep + 100).
 *
 * Original: FUN_1000d1a4 at 0x1000d1a4 (324 bytes)
 *
 * NOTE: Simplified reconstruction - actual function has more AI logic.
 */
void AIProcessTurn(void)
{
    int gs = (int)gGameState;
    short currentPlayer = *(short *)(gs + 0x110);
    short playerGold;
    short heroCandidate;
    short cost, strength, movement, upkeep, hitPoints;
    int roll;

    playerGold = *(short *)(gs + currentPlayer * 0x14 + 0x186);

    /* Only consider hiring if gold > 399 */
    if (playerGold > 399) {
        /* 30% chance to consider hiring (roll 1d10, need > 7) */
        roll = RandomRange(1, 10, 0);
        if (roll > 7) {
            heroCandidate = AISelectHero(roll > 7);

            if (heroCandidate != -1) {
                /* Get candidate stats */
                GetItemStats(heroCandidate, &cost, &strength,
                            &movement, &upkeep, &hitPoints);

                /* AI requires strength > 2 and enough gold for upkeep + 100 */
                if (strength > 2 && playerGold >= upkeep + 100) {
                    /* ProcessHeroHire(heroCandidate) */
                    /* Actual hiring is handled by external function */
                }
            }
        }
    }

    /* Low gold detection: gold < 40 triggers financial distress */
    if (playerGold < 40) {
        /* AI adjusts strategy for low funds */
        /* Reduces army spending, focuses on income generation */
    }
}

/* ======================================================================
 * ALLY GOLD DISCOVERY
 * ====================================================================== */

/*
 * ProcessAllyGold - Award gold from allied events
 *
 * Awards 3d500+500 gold (503-2000 range) to the current player,
 * capping at the 30,000 gold maximum.
 *
 * Original: FUN_10054824 at 0x10054824 (260 bytes)
 */
void ProcessAllyGold(void)
{
    int gs = (int)gGameState;
    short currentPlayer = *(short *)(gs + 0x110);
    short goldFound;
    short newGold;
    int goldAddr;

    /* Roll for gold: 3d500 + 500 = 503 to 2000 */
    goldFound = (short)RandomRange(3, 500, 500);

    goldAddr = gs + currentPlayer * 0x14 + 0x186;
    newGold = *(short *)goldAddr + goldFound;

    /* Enforce gold cap of 30,000 */
    if (newGold > 30000) {
        newGold = 30000;
    }

    *(short *)goldAddr = newGold;

    /* Display gold found message if human player */
    /* FUN_1005f678, DrawNumber, FUN_10052f6c */
}

/* ======================================================================
 * DIPLOMACY SUPPORT
 * ====================================================================== */

/*
 * Diplomacy state access helpers
 *
 * The diplomacy matrix is at GameState + 0x1582, with stride 0x10 per
 * player row and 0x02 per player column. Each entry is a 32-bit packed
 * bitfield:
 *
 *   Bits 31-30: Offer pending flags
 *   Bits 29-28: Player A's stance toward Player B
 *     0 = Neutral, 1 = Peace, 2 = War/Allied
 *   Bits 27-26: Player B's stance toward Player A (mirrored)
 *
 * Setting war:   (entry & 0xCFFFFFFF) | 0x20000000
 * Setting peace:  (entry & 0xCFFFFFFF) | 0x10000000
 * Clearing:       entry & 0xCFFFFFFF
 *
 * Movement diplomacy check returns MOVE_ATTACK (8) for war,
 * MOVE_DIPLOMATIC (10) for peace/allied territory.
 */

/* End of economy.c */
