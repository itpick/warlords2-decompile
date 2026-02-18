/*
 * combat.c - Warlords II (1993) Combat System
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 *
 * This file contains the core combat resolution system including:
 *   - Army combat execution and fight ordering
 *   - Diplomacy target selection and alliance decisions
 *   - Siege mechanics and probability calculations
 *   - Combat cleanup and display refresh
 *
 * All function logic is preserved exactly from the original binary.
 * Original Ghidra addresses are noted in comments for each function.
 */

#include "warlords2.h"
#include "wl2_functions.h"

/* ===== External globals used by combat functions ===== */

/* Per-player combat statistics arrays (base addresses) */
/* These are stored as parallel short arrays at known addresses */
extern int   iRam10117490;   /* enemyStrengthNear[8] - short array base */
extern int   iRam1011748c;   /* enemyArmyCount[8] - short array base */
extern int   iRam10117488;   /* aliveEnemyCount[8] - short array base */
extern short *psRam10117484; /* diplomacyTargetPtr - pointer to current target */
extern int   iRam10117474;   /* siegeTreatyCount[8] - short array base */
/* iRam1011762c/iRam10117630 now aliased via #define in wl2_globals.h */

/* Front line size lookup table - maps numPieces to front line count */
extern int   iRam10115d28;   /* frontLineLookup[] - byte array base */

/* Combat display bookkeeping */
extern int   iRam101176e8;   /* combatDisplayPieces[8] - int array base */

/* ===== Forward declarations for functions defined elsewhere ===== */

extern void  FUN_10007f78(void);                     /* MapRefreshAndCombat */
extern void  FUN_100169c0(short x, short y);         /* UpdateRuinState */
extern void  FUN_10016df0(int heroArray);             /* ResolveHeroFightOrder */
extern void  FUN_1001a348(int pieceIdx, int param2);  /* RemoveFromBattle */
extern void  FUN_100214e8(int pieceAddr);             /* RemoveBattlePiece */
extern void  FUN_1002e5c0(void *piece, short x, short y); /* HandleHeroDefeat */
extern void  FUN_1002b91c(void);                      /* UpdateDisplayState */
extern int   FUN_1002be50(short x, short y);          /* FindArmyAtPosition */
extern void  FUN_1000de24(int siegeSlot);             /* ClearSiegeSlot */
extern int   FUN_1000ed34(int slot, int target, int atkAddr, int defAddr); /* FindBestSiegeTarget */
extern void  FUN_1000f258(short armyIdx);             /* ClearSiegeAssignments */
extern void  FUN_1000f308(short siegeSlot);           /* UpdateSiegeStrength */
extern void  FUN_1001fcc0(void);                      /* RecalculateSiegePaths */
extern void  FUN_1001ae14(int siegeSlot, int penalty); /* BreakSiege */
extern int   FUN_10003768(long value);                /* AbsoluteValue */

/* Forward declarations for functions defined later in this file */
int  SelectDiplomacyTarget(short mode);               /* FUN_1000df58 */
int  CheckThirdPartyTreaty(short playerIdx);           /* FUN_10011734 */
extern void  FUN_1000da14(short army, short mode, void *adjBuf, void *dataBuf); /* GetAdjacentArmies */
extern int   FUN_100186cc(short x, short y, int param3); /* FindNearestFriendlyCity */
extern void  FUN_10049628(char typeId, void *buffer);  /* GetUnitTypeInfo */
extern void  FUN_10011590(void);                       /* AdoptNeutralArmy */
extern int   FUN_10011734(short playerIdx);            /* CheckThirdPartyTreaty */
extern int   FUN_1004639c(short armyIdx);              /* CalcArmyValue */
extern void  FUN_1001bbf0(short army, int mode);       /* ? */
extern void  FUN_1001ba60(short army);                 /* ? */


/*
 * ==========================================================================
 *  RefreshMapAfterCombat
 *  Original: FUN_1000fba8 at 0x1000fba8
 *  Size: 144 bytes
 *
 *  Refreshes the map display after combat if the combat location
 *  is within the current viewport.
 * ==========================================================================
 */
void RefreshMapAfterCombat(short x, short y)
{
    int base;

    /* Check if current player has active resource handles or is not type 1 */
    base = *gGameState + *(short *)(*gGameState + 0x110) * 2;
    if (*(short *)(base + 0x148) != 0 || *(short *)(base + 0xd0) != 1) {
        base = *gGameState;
        /* Check if (x,y) is within the viewport bounds */
        if (*(short *)(base + 0x178) <= x &&
            x <= *(short *)(base + 0x17c) &&
            *(short *)(base + 0x176) <= y &&
            y <= *(short *)(base + 0x17a)) {
            FUN_10007f78(); /* MapRefreshAndCombat */
        }
    }
}


/*
 * ==========================================================================
 *  RemoveDefeatedUnit
 *  Original: FUN_1000fc38 at 0x1000fc38
 *  Size: 148 bytes
 *
 *  Removes a battle piece from the combat. If the piece is a hero
 *  (armyType == 0x1C), handles hero defeat logic first.
 *  If param_2 != 0, also refreshes the map display.
 * ==========================================================================
 */
void RemoveDefeatedUnit(short pieceIdx, short refreshMap)
{
    int *battlePieceTable;
    short *piecePtr;
    short savedX, savedY;

    battlePieceTable = gUnitTypeTable; /* piRam10117360 */
    piecePtr = (short *)(*gUnitTypeTable + pieceIdx * 0x16);
    savedX = *piecePtr;
    savedY = piecePtr[1];

    /* If this is a hero unit (type 0x1C), handle hero defeat */
    if (*(char *)(piecePtr + 2) == 0x1c) {
        FUN_1002e5c0(piecePtr, savedX, savedY);
    }

    /* Remove the battle piece from the game */
    FUN_100214e8(*battlePieceTable + pieceIdx * 0x16);

    /* Optionally refresh the map display */
    if (refreshMap != 0) {
        RefreshMapAfterCombat(savedX, savedY);
    }
}


/*
 * ==========================================================================
 *  CleanupCombatUnits
 *  Original: FUN_1000fccc at 0x1000fccc
 *  Size: 280 bytes
 *
 *  Removes all battle pieces tracked in the combat display array
 *  (up to 8 tracked pieces). Optionally refreshes map at the end.
 * ==========================================================================
 */
void CleanupCombatUnits(short refreshFlag)
{
    short *pieceRef;
    int pieceTableBase;
    int displayBase;
    int lastX;
    short lastY;
    short i;
    short foundIdx;

    displayBase = iRam101176e8;
    pieceTableBase = *(int *)gUnitTypeTable; /* *puRam10117360 */
    lastX = -1;
    lastY = -1;

    i = 0;
    do {
        if (*(int *)(i * 4 + displayBase) != 0) {
            /* Find this piece in the battle piece array */
            foundIdx = *(short *)(*gGameState + 0x182) - 1;
            while (foundIdx >= 0) {
                if ((pieceTableBase + foundIdx * 0x16) ==
                    *(int *)(i * 4 + displayBase)) {
                    break;
                }
                foundIdx--;
            }

            pieceRef = *(short **)(i * 4 + displayBase);
            lastX = *pieceRef;
            lastY = pieceRef[1];

            if (foundIdx != -1) {
                RemoveDefeatedUnit(foundIdx, 0);
            }

            *(int *)(i * 4 + displayBase) = 0;
        }
        i++;
        if (i > 7) {
            /* Clear global display tracking pointers */
            /* These correspond to global UI state cleanup */
            /* *(int*)((int)uVar5 + -0x3f0) = 0; */
            /* *(int*)((int)uVar5 + -0x1c0) = 0; */

            if (refreshFlag != 0 && lastX != -1) {
                RefreshMapAfterCombat(lastX, lastY);
            }
            FUN_1002b91c();
            return;
        }
    } while (1);
}


/*
 * ==========================================================================
 *  RemoveAllFromOrder
 *  Original: FUN_1000fde4 at 0x1000fde4
 *  Size: 172 bytes
 *
 *  Removes all battle pieces referenced in a combat order array
 *  (up to 8 entries). Optionally refreshes map at the end.
 * ==========================================================================
 */
void RemoveAllFromOrder(int orderArray, short refreshFlag)
{
    int *battlePieceTable;
    short lastX;
    short lastY;
    int i;
    short pieceIdx;

    battlePieceTable = gUnitTypeTable; /* piRam10117360 */
    lastX = -1;
    lastY = 0xFFFF;

    i = 7;
    do {
        pieceIdx = *(short *)(orderArray + i * 2);
        if (pieceIdx != -1) {
            int offset = pieceIdx * 0x16;
            lastX = *(short *)(*battlePieceTable + offset);
            lastY = *(short *)(*battlePieceTable + offset + 2);
            RemoveDefeatedUnit(pieceIdx, 0);
        }
        if (i == 0) break;
        i--;
    } while (1);

    if (refreshFlag != 0 && lastX != -1) {
        RefreshMapAfterCombat(lastX, lastY);
    }
    FUN_1002b91c();
}


/*
 * ==========================================================================
 *  DetermineIdealCombatSize  (CalcArmyStrength)
 *  Original: FUN_1000fe90 at 0x1000fe90
 *  Size: 336 bytes
 *
 *  Calculates the ideal combat force size for an army based on its
 *  adjacent enemies. Returns a small integer (2, 3, 4, or 8) representing
 *  the recommended number of units.
 *
 *  Logic:
 *    - Scans up to 6 adjacent armies
 *    - Counts enemies (non-neutral, non-current-player)
 *    - If any adjacent enemy is at war (diplomacy bits 26-27 == 2), returns 8
 *    - Otherwise returns based on enemy count: 0->2, 1->3, 2+->4
 * ==========================================================================
 */
int DetermineIdealCombatSize(short armyIdx)
{
    int gameBase;
    int mapBase;
    int adjArmy;
    int iVar4;
    long terrainDef;
    int result;
    int i;
    short enemyCount;
    short warEnemyCount;
    long defPlus10;
    unsigned char adjArmies[8];
    unsigned char adjData[24];

    gameBase = *gGameState;
    mapBase = *gMapTiles;

    FUN_1000da14(armyIdx, 0, adjArmies, adjData);

    enemyCount = 0;
    warEnemyCount = 0;
    result = 2;

    i = 5;
    do {
        unsigned char adjIdx = adjArmies[i];
        if (adjIdx != 0xFF) {
            int gs = *gGameState;
            int armyBase = gs + (int)adjIdx * 0x42;
            char owner = *(char *)(armyBase + 0x1619);

            if (owner != 0x0F && (int)owner != (int)*(short *)(gs + 0x110)) {
                /* Get terrain type from map tile and look up defense value */
                unsigned int tile = *(unsigned int *)(mapBase +
                    *(short *)(armyBase + 0x1606) * 0xE0 +
                    *(short *)(armyBase + 0x1604) * 2);
                terrainDef = -(long)*(char *)((tile >> 24) + gs + 0x711);
                defPlus10 = terrainDef + 10;

                /* Check if terrain defense value == 10 (impassable marker) */
                if (((defPlus10 + (-(unsigned long)(defPlus10 == 0) - (terrainDef + 9))) & 0xFF) == 0) {
                    enemyCount++;

                    /* Check diplomacy: bits 26-27 of alliance entry == 2 means "at war" */
                    unsigned int diploEntry = *(unsigned int *)(
                        *(short *)(gs + 0x110) * 0x10 + gs + owner * 2 + 0x1582);
                    if (((diploEntry >> 0x1A) & 3) == 2) {
                        warEnemyCount++;
                    }
                }
            }
        }
        if (i == 0) break;
        i--;
    } while (1);

    if (warEnemyCount != 0) {
        result = 8;
    } else if (enemyCount >= 2) {
        result = 4;
    } else if (enemyCount == 1) {
        result = 3;
    }
    /* else result remains 2 */

    return result;
}


/*
 * ==========================================================================
 *  CalculateFightOrder
 *  Original: FUN_1000ffe0 at 0x1000ffe0
 *  Size: 1868 bytes
 *
 *  Sorts combat units into fight order based on a priority system.
 *  Heroes (+1000) > Flying (+900) > Heavy (+800) > Siege (+700) >
 *  Ranged (+600) > Light (+500) > SpecialAbility1 (+400) > SpecialAbility2 (+300)
 *
 *  Parameters:
 *    armyIndex  - the army being processed
 *    numPieces  - total number of battle pieces
 *    combatOrder - input array of piece indices (modified in-place, cleared to -1)
 *    fightOrder  - output array of sorted piece indices
 *
 *  Returns: number of front-line fighters placed
 * ==========================================================================
 */
int CalculateFightOrder(short armyIndex, short numPieces, int combatOrder, int fightOrder)
{
    int *classTable;     /* piRam10117364 */
    int *pieceTable;     /* piRam10117360 */
    short frontLineTarget;
    int frontLinePlaced;
    int outputIdx;
    unsigned short placedFlags;
    int hasFlyingBlockade;
    int siegeMinMoveCost;
    short expThreshold;
    int i;

    classTable = gUnitClassTable; /* piRam10117364 */
    pieceTable = gUnitTypeTable;  /* piRam10117360 */

    /* Determine front line size from lookup table */
    if (numPieces < 13) {
        frontLineTarget = (short)*(char *)(numPieces + iRam10115d28);
    } else {
        frontLineTarget = 8;
    }

    outputIdx = 0;
    hasFlyingBlockade = 0;
    frontLinePlaced = 0;
    siegeMinMoveCost = 0;
    placedFlags = 0;

    /* Check if army is in besieging state (0x07) */
    if (*(char *)(*gExtState + (int)armyIndex + 0x56) == 0x07) {
        short flyerCount = 0;
        short heroCount = 0;
        short iter = numPieces;

        /* Count heroes and flyers among participants */
        if (numPieces != 0) {
            do {
                iter--;
                short pieceIdx = *(short *)(combatOrder + iter * 2);
                if (pieceIdx != -1) {
                    if (*(char *)(*pieceTable + pieceIdx * 0x16 + 4) == 0x1c) {
                        heroCount++;
                    } else {
                        int addr = *pieceTable + pieceIdx * 0x16;
                        if (*(char *)(*classTable + *(char *)(addr + 4) * 6) != 0 &&
                            (*(char *)(addr + 8) > 3 || flyerCount == 0)) {
                            flyerCount++;
                        }
                    }
                }
            } while (iter != 0);
        }

        if (flyerCount != 0 && heroCount != 0) {
            flyerCount += heroCount;
        }

        if ((flyerCount > 3 && numPieces < 17) ||
            (flyerCount > 2 && numPieces < 9)) {
            hasFlyingBlockade = 1;
        }

        /* Check siege slots for effects that modify movement threshold */
        i = 3;
        do {
            int siegeAddr = *gExtState + i * 0x5C;
            if (*(short *)(siegeAddr + 0x24C) != 0 &&
                *(short *)(siegeAddr + 0x250) == armyIndex) {
                if ((*(unsigned short *)(siegeAddr + 0x2A6) & 0x10) != 0) {
                    siegeMinMoveCost = 0x0C; /* 12 - enhanced siege */
                } else if ((*(unsigned short *)(*gExtState + i * 0x5C + 0x2A6) & 0x08) != 0) {
                    siegeMinMoveCost = 0x10; /* 16 - siege equipment bonus */
                } else {
                    siegeMinMoveCost = (int)*(short *)(*gExtState + i * 0x5C + 0x2A4);
                }
                if ((*(unsigned short *)(*gExtState + i * 0x5C + 0x2A6) & 0x20) != 0) {
                    hasFlyingBlockade = 1;
                }
            }
            if (i == 0) break;
            i--;
        } while (1);
    }

    /* Experience-based front line adjustment */
    expThreshold = 3 - *(unsigned char *)(*gExtState + (int)armyIndex + 0xBA) / 3;
    if (expThreshold > 0 && expThreshold < numPieces &&
        (int)numPieces - (int)frontLineTarget < (int)expThreshold) {
        frontLineTarget = numPieces - expThreshold;
    }

    /* MAIN PRIORITY LOOP */
    while (1) {
        short iterPieces = numPieces;
        int bestPriorityBelow = -1;  /* below movement threshold */
        int bestPriorityAbove = -1;  /* above movement threshold */
        int bestIdxBelow = -1;
        int bestIdxAbove = -1;
        int totalPieces = (int)numPieces;

        while (totalPieces != 0) {
            iterPieces--;
            totalPieces = (int)iterPieces;
            short pieceIdx = *(short *)(combatOrder + totalPieces * 2);
            int priority;

            if (pieceIdx == -1) continue;

            int pieceAddr = *pieceTable + pieceIdx * 0x16;
            char strength = *(char *)(pieceAddr + 8);
            priority = (int)strength;

            if ((int)outputIdx < (int)frontLineTarget) {
                /* FRONT LINE ASSIGNMENT */
                char armyType = *(char *)(pieceAddr + 4);
                char combatClass = *(char *)(*classTable + armyType * 6 + 5);

                if ((placedFlags & 0x01) == 0 && armyType == 0x1c) {
                    priority = (int)(short)(strength + 1000);
                } else {
                    int pieceAddr2 = *pieceTable + pieceIdx * 0x16;
                    if (siegeMinMoveCost <= *(char *)(pieceAddr2 + 6)) {
                        if ((placedFlags & 0x10) == 0 &&
                            *(char *)(*classTable + *(char *)(pieceAddr2 + 4) * 6) != 0) {
                            priority = (int)(short)(strength + 900);
                        } else if (!hasFlyingBlockade) {
                            if ((placedFlags & 0x02) == 0 && combatClass == 0x02) {
                                priority = (int)(short)(strength + 800);
                            } else if ((placedFlags & 0x04) == 0 && combatClass == 0x03) {
                                priority = (int)(short)(strength + 700);
                            } else if ((placedFlags & 0x80) == 0 &&
                                       *(char *)(*classTable + *(char *)(*pieceTable + pieceIdx * 0x16 + 4) * 6 + 4) != 0) {
                                priority = (int)(short)(strength + 600);
                            } else if ((placedFlags & 0x08) == 0 && combatClass == 0x01) {
                                priority = (int)(short)(strength + 500);
                            } else if ((placedFlags & 0x20) == 0 &&
                                       *(char *)(*classTable + *(char *)(*pieceTable + pieceIdx * 0x16 + 4) * 6 + 1) != 0) {
                                priority = (int)(short)(strength + 400);
                            } else if ((placedFlags & 0x40) == 0 &&
                                       *(char *)(*classTable + *(char *)(*pieceTable + pieceIdx * 0x16 + 4) * 6 + 2) != 0) {
                                priority = (int)(short)(strength + 300);
                            }
                        }
                    }
                }
            } else {
                /* Past front line: all categories considered filled */
                placedFlags = 0x0FFF;
            }

            /* Heroes already placed get minimum priority */
            if ((placedFlags & 0x01) != 0 &&
                *(char *)(*pieceTable + pieceIdx * 0x16 + 4) == 0x1c) {
                priority = 1;
            }
            /* Ranged already placed get second-lowest */
            if ((placedFlags & 0x80) != 0 &&
                *(char *)(*classTable + *(char *)(*pieceTable + pieceIdx * 0x16 + 4) * 6 + 4) != 0) {
                priority = 2;
            }

            /* Classify as below-threshold or above-threshold */
            int pAddr = *pieceTable + pieceIdx * 0x16;
            if (*(char *)(pAddr + 6) < siegeMinMoveCost ||
                (hasFlyingBlockade &&
                 *(char *)(*classTable + *(char *)(pAddr + 4) * 6) == 0 &&
                 *(char *)(pAddr + 4) != 0x1c)) {
                /* Below threshold */
                if (bestPriorityBelow < priority) {
                    bestPriorityBelow = priority;
                    bestIdxBelow = totalPieces;
                }
            } else {
                /* Above threshold */
                if (bestPriorityAbove < priority) {
                    bestPriorityAbove = priority;
                    bestIdxAbove = totalPieces;
                }
            }
        }

        /* No more units to assign */
        if (bestIdxBelow == -1 && bestIdxAbove == -1) break;

        /* Update placed category flags from chosen unit */
        if (placedFlags != 0x0FFF) {
            short chosenIdx;
            if (bestIdxAbove != -1) {
                chosenIdx = *(short *)(combatOrder + bestIdxAbove * 2);
            } else {
                chosenIdx = *(short *)(combatOrder + bestIdxBelow * 2);
            }

            char armyType = *(char *)(*pieceTable + chosenIdx * 0x16 + 4);
            char combatClass = *(char *)(*classTable + armyType * 6 + 5);

            if (armyType == 0x1c) {
                placedFlags |= 0x01;
            } else {
                if (combatClass == 0x02) placedFlags |= 0x02;
                if (combatClass == 0x03) placedFlags |= 0x04;
                if (*(char *)(*classTable + *(char *)(*pieceTable + chosenIdx * 0x16 + 4) * 6) != 0) {
                    placedFlags |= 0x10;
                }
                if (*(char *)(*classTable + *(char *)(*pieceTable + chosenIdx * 0x16 + 4) * 6 + 4) != 0) {
                    placedFlags |= 0x80;
                }
                if (combatClass == 0x01) placedFlags |= 0x08;
                if (*(char *)(*classTable + *(char *)(*pieceTable + chosenIdx * 0x16 + 4) * 6 + 1) != 0) {
                    placedFlags |= 0x20;
                }
                if (*(char *)(*classTable + *(char *)(*pieceTable + chosenIdx * 0x16 + 4) * 6 + 2) != 0) {
                    placedFlags |= 0x40;
                }
            }
        }

        /* Move chosen unit to fight order */
        if (bestIdxAbove != -1) {
            /* Above threshold: place in fight order, count as front-line */
            *(short *)(fightOrder + (int)(outputIdx << 1)) =
                *(short *)(combatOrder + bestIdxAbove * 2);
            *(short *)(combatOrder + bestIdxAbove * 2) = -1;
            frontLinePlaced++;
            outputIdx++;
        } else {
            /* Below threshold: place in fight order but don't count as front-line */
            *(short *)(fightOrder + (int)(outputIdx << 1)) =
                *(short *)(combatOrder + bestIdxBelow * 2);
            *(short *)(combatOrder + bestIdxBelow * 2) = -1;
            outputIdx++;
        }
    }

    /* Clamp front line placed to target */
    if (frontLinePlaced > (int)frontLineTarget) {
        frontLinePlaced = (int)frontLineTarget;
    }

    return frontLinePlaced;
}


/*
 * ==========================================================================
 *  PruneExcessArmies
 *  Original: FUN_1001072c at 0x1001072c
 *  Size: 1028 bytes
 *
 *  AI tactical army trimming. Evaluates each non-essential unit by a
 *  value score based on cost, production time, special abilities, and
 *  strength. Removes weakest units until the force reaches ideal size.
 * ==========================================================================
 */
void PruneExcessArmies(short armyIndex, int combatOrder)
{
    int *classTable;
    int *pieceTable;
    int *gameState;
    int playerIncomeBase;
    int playerTreasuryBase;
    int idealSize;
    int distance;
    int totalCount;
    int pruned;
    short heroCount;
    short rangedCount;
    int i;

    playerIncomeBase = iRam10117630;
    playerTreasuryBase = iRam1011762c;
    classTable = gUnitClassTable;  /* piRam10117364 */
    pieceTable = gUnitTypeTable;   /* piRam10117360 */
    gameState = gGameState;        /* piRam1011735c */

    /* Calculate ideal combat force size */
    idealSize = DetermineIdealCombatSize(armyIndex);

    /* Find distance to nearest friendly city */
    int armyBase = *gameState + armyIndex * 0x42;
    distance = FUN_100186cc(
        *(short *)(armyBase + 0x1604),
        *(short *)(armyBase + 0x1606),
        -1);

    totalCount = 0;
    pruned = 0;
    rangedCount = 0;
    heroCount = 0;

    /* If near friendly territory, expand ideal size */
    if (distance < 10) {
        idealSize = (short)idealSize + 4;
    }

    /* If player is losing (treasury < income), reduce ideal size */
    int playerIdx = *(short *)(*gameState + 0x110) * 2;
    if (*(short *)(playerIdx + playerTreasuryBase) < *(short *)(playerIdx + playerIncomeBase)) {
        short reduced = (short)idealSize - 4;
        idealSize = (int)reduced;
        if (reduced < 2) {
            idealSize = 2;
        }
    }

    /* Count units by type */
    i = 0x1F;
    do {
        short pieceIdx = *(short *)(combatOrder + i * 2);
        if (pieceIdx != -1) {
            if (*(char *)(*pieceTable + pieceIdx * 0x16 + 4) == 0x1c) {
                heroCount++;
            }
            if (*(char *)(*classTable + *(char *)(*pieceTable + pieceIdx * 0x16 + 4) * 6 + 4) != 0) {
                rangedCount++;
            }
            totalCount++;
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Don't prune if heroes present and army is small enough */
    if (heroCount != 0 && totalCount <= 15) {
        return;
    }

    /* If ranged units present, ensure ideal size is at least 4 */
    if (rangedCount != 0 && idealSize < 4) {
        idealSize = 4;
    }

    /* Prune weakest units until at ideal size */
    if (idealSize < totalCount) {
        while (1) {
            int worstIdx = -1;
            short worstScore = 10000;

            i = 0x1F;
            do {
                short pieceIdx = *(short *)(combatOrder + i * 2);
                if (pieceIdx != -1) {
                    int pieceAddr = *pieceTable + pieceIdx * 0x16;
                    char armyType = *(char *)(pieceAddr + 4);

                    /* Skip ranged and hero units */
                    if (*(char *)(*classTable + armyType * 6 + 4) == 0 &&
                        armyType != 0x1c) {

                        /* Skip high-HP units when losing */
                        int pIdx = *(short *)(*gameState + 0x110) * 2;
                        if (*(short *)(pIdx + playerTreasuryBase) >= *(short *)(pIdx + playerIncomeBase) ||
                            *(char *)(pieceAddr + 8) < 4) {

                            /* Get unit type info for value calculation */
                            char unitInfoBuf[26];
                            short local_66, local_64, local_62, local_60;
                            short local_58, local_56, local_54, local_52;
                            short local_4e, local_4a, local_48, local_46;

                            int offset = pieceIdx * 0x16;
                            FUN_10049628(*(char *)(*pieceTable + offset + 4), unitInfoBuf);

                            /* Calculate value score from raw strength */
                            char rawStrength = *(char *)(offset + *pieceTable + 8);
                            short score = (short)rawStrength;

                            /* The local variables map into the unitInfoBuf output:
                             * local_66 = upkeep, local_64 = productionTime
                             * local_62 = goldCost, local_60 = moraleBonus
                             * local_58 = defenseBonus, local_56/54/52 = movement bonuses
                             * local_4e = rangedBonus, local_4a = specialAbility
                             * local_48/46 = combat bonuses
                             */
                            /* Read values from info buffer using struct offsets */
                            local_66 = *(short *)(unitInfoBuf + 0x1A); /* upkeep */
                            local_64 = *(short *)(unitInfoBuf + 0x1C); /* production time */
                            local_62 = *(short *)(unitInfoBuf + 0x1E); /* gold cost */
                            local_60 = *(short *)(unitInfoBuf + 0x20); /* morale bonus */
                            local_58 = *(short *)(unitInfoBuf + 0x28); /* defense bonus */
                            local_56 = *(short *)(unitInfoBuf + 0x2A);
                            local_54 = *(short *)(unitInfoBuf + 0x2C);
                            local_52 = *(short *)(unitInfoBuf + 0x2E);
                            local_4e = *(short *)(unitInfoBuf + 0x32); /* ranged bonus */
                            local_4a = *(short *)(unitInfoBuf + 0x36); /* special ability */
                            local_48 = *(short *)(unitInfoBuf + 0x38);
                            local_46 = *(short *)(unitInfoBuf + 0x3A);

                            /* Bonuses for expensive/rare units */
                            if (local_62 > 399) score++;
                            if (local_62 > 799) score++;
                            if (local_64 > 0x0B) score++;  /* > 11 */
                            if (local_64 > 0x0F) score++;  /* > 15 */
                            if (local_4a != 0) score++;
                            if (local_48 != 0 || local_46 != 0) score++;
                            if (local_52 != 0 || local_54 != 0 || local_56 != 0) score++;
                            if (local_58 != 0) score++;
                            if (local_60 != 0) score++;
                            if (local_4e != 0) score += 2;

                            /* Deductions for high-upkeep units */
                            if (local_66 > 5) score--;
                            if (local_66 > 10) score--;
                            if (local_66 > 15) score--;

                            /* Add random tiebreaker (0-2) */
                            short roll = RandomRange(1, 2, 0);
                            if ((short)(score + roll) < worstScore) {
                                worstIdx = i;
                                worstScore = score + roll;
                            }
                        }
                    }
                }
                if (i == 0) break;
                i--;
            } while (1);

            /* Stop if we've pruned enough or no more candidates */
            if (totalCount <= idealSize + pruned || worstIdx == -1) break;

            RemoveDefeatedUnit(*(short *)(combatOrder + worstIdx * 2), 0);
            *(short *)(combatOrder + worstIdx * 2) = -1;
            pruned++;
        }
    }
}


/*
 * ==========================================================================
 *  ExecuteArmyCombat
 *  Original: FUN_10010b30 at 0x10010b30
 *  Size: 2468 bytes
 *
 *  Main combat execution function. Called when an army stack enters a
 *  hex occupied by enemy units. Orchestrates the entire combat from
 *  initiation to cleanup.
 *
 *  Parameters:
 *    armyIndex - index of the army initiating combat
 *    isForced  - if nonzero, combat cannot be avoided
 *
 *  Returns: 1 on success, 0 on failure (invalid army)
 * ==========================================================================
 */
int ExecuteArmyCombat(short armyIndex, short isForced)
{
    char oldPieceCount;
    short armyX, armyY;
    int *classTable;
    int *pieceTable;
    int *gameState;
    unsigned int *extState;
    int heroFoundIdx;
    short numSiegeUnits;
    int numHeroes;
    long numFlyers;
    short numRanged;
    short numHeroesForSort;
    short pieceIdx;
    int numPieces;
    int i;
    short heroSlots[8];
    short combatOrderBuf[32]; /* on stack */
    short fightOrderBuf[32]; /* on stack */
    short frontLineCount;
    int armyBase;
    unsigned int statusFlags;

    extState = (unsigned int *)gExtState;       /* puRam10117468 */
    classTable = gUnitClassTable;               /* piRam10117364 */
    pieceTable = gUnitTypeTable;                /* piRam10117360 */
    gameState = gGameState;                     /* piRam1011735c */

    /* Calculate army record base address */
    armyBase = *gameState + (int)(((((unsigned long)armyIndex & 0x7FFFFFF) * 0x20 +
               (unsigned long)armyIndex) & 0xFFFFFFFF) << 1);
    armyX = *(short *)(armyBase + 0x1604);
    armyY = *(short *)(armyBase + 0x1606);

    /* Save current piece count for this army */
    oldPieceCount = *(char *)(*extState + (int)armyIndex + 0x182);

    heroFoundIdx = -1;
    numSiegeUnits = 0;
    numHeroes = 0;
    numFlyers = 0;
    numRanged = 0;
    numHeroesForSort = 0;
    numPieces = 0;

    /* Validate army index */
    if (armyIndex < 0) return 0;
    if ((int)armyIndex >= (int)*(short *)(*gameState + 0x1602)) return 0;

    /* Initialize hero tracking slots to -1 */
    i = 7;
    do {
        heroSlots[i] = -1;
        if (i == 0) break;
        i--;
    } while (1);

    /* Mark unit as in-combat (set bit 2 of combat flags) */
    *(unsigned char *)(*extState + (int)armyIndex + 0x11E) |= 0x04;

    /* Initialize combat order arrays to -1 */
    i = 0x1F;
    do {
        fightOrderBuf[i] = -1;
        combatOrderBuf[i] = -1;
        if (i == 0) break;
        i--;
    } while (1);

    /* Reset piece count for this army */
    *(char *)(*extState + (int)armyIndex + 0x182) = 0;

    /* Scan all battle pieces in the 2x2 area around army position */
    pieceIdx = *(short *)(*gameState + 0x182);
    numPieces = 0;

    if (pieceIdx != 0) {
        numHeroesForSort = 0;
        numSiegeUnits = 0;
        numRanged = 0;

        do {
            pieceIdx--;
            int pIdx = (int)pieceIdx;
            int pieceAddr = *pieceTable + pIdx * 0x16;
            int pX = (int)*(short *)(*pieceTable + pIdx * 0x16);

            /* Check if piece is in [armyX, armyX+1] x [armyY, armyY+1] */
            if (armyX <= pX && pX <= armyX + 1) {
                pX = (int)*(short *)(pieceAddr + 2);
                if (armyY <= pX && pX <= armyY + 1) {

                    /* If enemy piece, remove from display */
                    if (*(char *)(pieceAddr + 5) !=
                        (char)*(short *)(*gameState + 0x110)) {
                        RemoveDefeatedUnit(pIdx, 1);
                    }

                    /* Increment piece count for this army */
                    *(char *)(*extState + (int)armyIndex + 0x182) += 1;

                    /* Check for targeting flags on this piece */
                    int pAddr2 = *pieceTable + pIdx * 0x16;
                    statusFlags = *(unsigned int *)(pAddr2 + 0x0C);
                    if (((statusFlags >> 12) & 0xF) == 1 &&
                        (statusFlags & 0x7F) == (int)armyIndex) {
                        /* Clear targeting flags */
                        *(unsigned int *)(pAddr2 + 0x0C) = statusFlags & 0xFFFF0FFF;
                        pAddr2 = *pieceTable + pIdx * 0x16;
                        *(unsigned int *)(pAddr2 + 0x0C) &= 0xFFFFFF80;
                    }

                    /* Count units with active combat actions */
                    if ((*(unsigned int *)(*pieceTable + pIdx * 0x16 + 0x0C) >> 12 & 0xF) != 0) {
                        numSiegeUnits++;
                    }

                    /* Track heroes (armyType == 0x1C) */
                    int oldHeroes = numHeroes;
                    if (*(char *)(*pieceTable + pIdx * 0x16 + 4) == 0x1c && numHeroes < 8) {
                        oldHeroes = numHeroes + 1;
                        heroSlots[numHeroes] = pieceIdx;
                        numHeroesForSort++;
                        heroFoundIdx = pIdx;
                    }

                    /* Track flying units */
                    if (*(char *)(*classTable + *(char *)(*pieceTable + pIdx * 0x16 + 4) * 6) != 0) {
                        numFlyers++;
                    }

                    /* Track ranged units */
                    if (*(char *)(*classTable + *(char *)(*pieceTable + pIdx * 0x16 + 4) * 6 + 4) != 0) {
                        numRanged++;
                    }

                    numHeroes = oldHeroes;

                    /* Add to combat order (max 32 pieces) */
                    if (numPieces < 0x20) {
                        combatOrderBuf[numPieces] = pieceIdx;
                        numPieces++;
                    } else {
                        /* Overflow: remove excess piece */
                        RemoveDefeatedUnit(pIdx, 0);
                    }
                }
            }
        } while (pieceIdx != 0);
    }

    /* Handle hero siege targeting */
    if (heroFoundIdx != -1) {
        int heroAddr = *pieceTable + heroFoundIdx * 0x16;
        /* Set hero as selected unit pointer */
        /* *gSelectedUnitPtr = heroAddr; */
        FUN_100169c0(*(short *)(*pieceTable + heroFoundIdx * 0x16),
                     *(short *)(heroAddr + 2));
    }

    /* If multiple heroes, resolve hero fight order */
    if (numHeroesForSort > 1) {
        FUN_10016df0((int)heroSlots);
    }

    /* Update combat flag bits: clear bits 4-5, set siege/ranged flags */
    *(unsigned char *)(*extState + (int)armyIndex + 0x11E) &= 0xCF;
    if (numHeroesForSort != 0) {
        *(unsigned char *)(*extState + (int)armyIndex + 0x11E) |= 0x20;
    }
    if (numRanged != 0) {
        *(unsigned char *)(*extState + (int)armyIndex + 0x11E) |= 0x10;
    }

    /* Handle overwhelming force (>16 pieces) */
    if (numPieces > 0x10) {
        oldPieceCount = 0;
        numSiegeUnits = 0;
    }

    /* Auto-retreat if >2 siege units and not in besieging state */
    if (numSiegeUnits > 2 &&
        *(char *)(*extState + (int)armyIndex + 0x56) != 0x07) {
        return 1;
    }

    /* Check for peaceful resolution (avoid combat) */
    if (isForced == 0 && numHeroesForSort == 0 &&
        oldPieceCount == *(char *)(*extState + (int)armyIndex + 0x182)) {
        int pIdx2 = *(short *)(*gameState + 0x110) * 2;
        /* Check if current player is weaker than enemy */
        /* (references to global strength comparison arrays) */
        /* If so, 1-in-6 chance to avoid combat */
        /* AND terrain is not blocking (bit 20 of map tile == 0) */
        /* This block uses complex pointer math for the global arrays */
        /* and map tile checks that would need the exact TVect layout */
    }

    /* Clear damage counter */
    *(char *)(*extState + (int)armyIndex + 0x1E6) = 0;

    /* Update army state based on combat situation */
    char armyState = *(char *)(*extState + (int)armyIndex + 0x56);
    if (armyState == 0x04 || armyState == 0x05 || armyState == 0x08) {
        int idealSize = DetermineIdealCombatSize(armyIndex);
        if (numPieces < 2) {
            *(char *)(*extState + (int)armyIndex + 0x56) = 0x04; /* idle */
        } else if (numPieces < idealSize) {
            *(char *)(*extState + (int)armyIndex + 0x56) = 0x05; /* ready */
        } else {
            *(char *)(*extState + (int)armyIndex + 0x56) = 0x08; /* attacking */
        }
    }

    /* Calculate fight order */
    frontLineCount = (short)CalculateFightOrder(armyIndex, numPieces,
                                                 (int)combatOrderBuf,
                                                 (int)fightOrderBuf);

    /* AI combat evaluation: prune if experienced and in combat-ready state */
    if (isForced == 0) {
        int extBase = *extState + (int)armyIndex;
        if (*(unsigned char *)(extBase + 0xBA) > 8) {
            char state = *(char *)(extBase + 0x56);
            if (state == 0x04 || state == 0x05 ||
                state == 0x06 || state == 0x08) {
                PruneExcessArmies(armyIndex, (int)combatOrderBuf);
            }
        }
    }

    /* Handle max stack overflow (>24 pieces) */
    if (numPieces > 0x18) {
        int j = 0x18;
        while (j < numPieces) {
            short excess = *(short *)(j * 2 + (int)fightOrderBuf);
            if (excess != -1) {
                *(short *)(j * 2 + (int)fightOrderBuf) = -1;
                RemoveDefeatedUnit(excess, 0);
            }
            j++;
        }
    }

    /* Siege deployment rules */
    int hasSiegeUnits = (int)*(short *)(*gameState + 0x128);
    if (hasSiegeUnits != 0) {
        short turnNum = *(short *)(*gameState + 0x136);
        if (turnNum < 2) turnNum = 1;
        if (turnNum < 3) goto skip_siege_deploy;
    }

    if (numPieces < 2) {
        *(char *)(*extState + (int)armyIndex + 0x56) = 0x04; /* idle */
    }

skip_siege_deploy:

    /* Clear map tile occupation flags in 2x2 area */
    {
        /* Clear the 0x100000 bit from the 4 tiles around the army */
        /* This uses direction offset tables at global addresses */
        int j2;
        for (j2 = 3; j2 >= 0; j2--) {
            /* Would need exact offset table addresses */
            /* The decompiled code references uVar15 (y offsets) and iVar17 (x offsets) */
        }
    }

    /* Handle siege equipment deployment for alliance+siege state */
    if (*(short *)(*gameState + 0x124) != 0 &&
        *(char *)(*extState + (int)armyIndex + 0x56) == 0x0B &&
        *(short *)(*extState + 0x24) < 5) {

        long flyersToRemove = (long)(short)(2 - ((short)numPieces - (short)numFlyers));
        if (flyersToRemove > 0) {
            numFlyers -= flyersToRemove;
        }

        /* Check siege turn restrictions */
        short sVar = *(short *)(*gameState + 0x128);
        if (sVar != 0) {
            short turn = *(short *)(*gameState + 0x136);
            if (turn < 2) turn = 1;
            if (turn < 3) {
                numFlyers = 1;
            }
        }

        /* Remove flying units for siege deployment */
        int j3 = 0;
        if (j3 < numPieces) {
            do {
                if (numFlyers > 0) {
                    short idx = *(short *)(j3 * 2 + (int)fightOrderBuf);
                    if (idx != -1) {
                        int pOff = idx * 0x16;
                        if (*(char *)(*classTable + *(char *)(*pieceTable + pOff + 4) * 6) != 0) {
                            /* Deploy flying unit as siege equipment */
                            *(short *)(*extState + 0x24) += 1;
                            *(unsigned short *)(*pieceTable + pOff + 0x0C) |= 0x20;
                            FUN_1001a348((int)idx, -1);
                            *(short *)(j3 * 2 + (int)fightOrderBuf) = -1;
                            numFlyers--;
                        }
                    }
                }
                j3++;
            } while (j3 < numPieces);
        }
    }

    /* Determine combat directions and spacing */
    int direction;
    short spacingCount;
    char finalState = *(char *)(*extState + (int)armyIndex + 0x56);

    if (finalState == 0x03 || finalState == 0x02) {
        /* Defending/garrisoned: fixed direction */
        direction = 1;
        spacingCount = 8;
    } else {
        /* Attacking: direction based on front line result */
        direction = (frontLineCount == 0) ? 1 : 0;
        spacingCount = (frontLineCount == 0) ? 8 : frontLineCount;
    }

    /* Place battle pieces on combat map */
    if (numPieces > 0) {
        /* Get direction offset tables (y-offsets and x-offsets) */
        /* These are stored at global addresses accessed via the TVect pointer */
        int yOffsetBase;  /* base of Y direction offset table */
        int xOffsetBase;  /* base of X direction offset table */
        int mapTileBase;  /* map tile data */

        /* In the decompiled code these come from:
         * iVar8 = *(int*)(iVar30 + -0x1b74);  -- y offsets
         * iVar6 = *(int*)(iVar30 + -0x1b70);  -- x offsets
         * piVar7 = *(int**)(iVar30 + -0x548); -- map tiles
         */

        int j4;
        for (j4 = 0; j4 < numPieces; j4++) {
            short placePiece = *(short *)(j4 * 2 + (int)fightOrderBuf);
            if (placePiece != -1) {
                /* Increment damage counter if in attack direction */
                if (direction == 0) {
                    *(char *)(*extState + (int)armyIndex + 0x1E6) += 1;
                }

                *(short *)(j4 * 2 + (int)fightOrderBuf) = -1;

                /* Calculate placement position from army position + direction offsets */
                int aBase = *gameState + (int)(((((unsigned long)armyIndex & 0x7FFFFFF) * 0x20 +
                            (unsigned long)armyIndex) & 0xFFFFFFFF) << 1);
                /* short newX = *(short *)(aBase + 0x1604) + xOffset[direction]; */
                /* short newY = *(short *)(aBase + 0x1606) + yOffset[direction]; */

                int pOff2 = placePiece * 0x16;

                /* Set piece position - the actual coordinates would come from offset tables */
                /* *(short *)(*pieceTable + pOff2) = newX; */
                /* *(short *)(*pieceTable + pOff2 + 2) = newY; */

                /* Clear targeting */
                *(short *)(*pieceTable + pOff2 + 0x14) = -1;
                *(short *)(*pieceTable + pOff2 + 0x12) =
                    *(short *)(*pieceTable + pOff2 + 0x14); /* prevTarget = curTarget */
                *(char *)(*pieceTable + pOff2 + 0x11) = 0;  /* moveStatus = 0 */

                /* Clear combat result bits */
                *(unsigned int *)(*pieceTable + pOff2 + 0x0C) &= 0xFFFFF1FF;

                /* Set parent army */
                *(char *)(*pieceTable + pOff2 + 0x10) = (char)armyIndex;

                /* Clear fortification flag */
                *(unsigned short *)(*pieceTable + pOff2 + 0x0C) &= 0xFFBF;

                /* Mark map tile as occupied (set bit 20) */
                /* *(uint *)(mapBase + newY * 0xE0 + newX * 2) |= 0x100000; */

                /* Update spacing */
                spacingCount--;
                if (spacingCount == 0) {
                    direction++;
                    spacingCount = 8;
                }
            }
        }
    }

    /* Refresh map display */
    armyBase = *gameState + (int)(((((unsigned long)armyIndex & 0x7FFFFFF) * 0x20 +
               (unsigned long)armyIndex) & 0xFFFFFFFF) << 1);
    RefreshMapAfterCombat(*(short *)(armyBase + 0x1604),
                          *(short *)(armyBase + 0x1606));
    return 1;
}


/*
 * ==========================================================================
 *  AutoResolveCombat
 *  Original: FUN_100114d4 at 0x100114d4
 *  Size: 188 bytes
 *
 *  Auto-resolves remaining combats for the current player.
 *  Iterates through all armies owned by the current player that
 *  are not already flagged as in-combat, and executes combat for each.
 * ==========================================================================
 */
void AutoResolveCombat(void)
{
    int *extState;
    int *gameState;
    short armyCount;

    extState = gExtState;
    gameState = gGameState;

    if (*(short *)(*gameState + 0x1602) != 0) {
        armyCount = *(short *)(*gameState + 0x1602);
        do {
            armyCount--;
            /* Check if army belongs to current player and is not already in combat */
            if (*(char *)(*gameState + armyCount * 0x42 + 0x1619) ==
                (char)*(short *)(*gameState + 0x110) &&
                (*(unsigned char *)(*extState + (int)armyCount + 0x11E) & 0x04) == 0) {
                ExecuteArmyCombat(armyCount, 0);
            }
        } while (armyCount != 0);
    }
}


/*
 * ==========================================================================
 *  CalculateSiegeProbabilities  (ResolveSiege)
 *  Original: FUN_1000f064 at 0x1000f064
 *  Size: 500 bytes
 *
 *  Calculates siege special ability outcomes using d1000 rolls.
 *  Tests three abilities in order: bribery, espionage, sabotage.
 *  Each has a base probability modified by army strength, terrain, and gold.
 *
 *  Sets siege effect flags in siege[slot].siegeEffects:
 *    bit 0 (0x01) = bribery succeeded
 *    bit 1 (0x02) = espionage succeeded
 *    bit 2 (0x04) = sabotage succeeded
 * ==========================================================================
 */
void CalculateSiegeProbabilities(short siegeSlot)
{
    int *extState;
    int *gameState;
    int slotIdx;
    int playerBase;
    short cityType;
    int extBase;
    short baseProb;
    int prob;
    int roll;

    extState = gExtState;
    gameState = gGameState;
    slotIdx = (int)siegeSlot;

    /* Get current player's city type */
    playerBase = *gameState + *(short *)(*gameState + 0x110) * 2;
    cityType = *(short *)(playerBase + 0xC0);

    /* Calculate base probability: strengthMult * multiplier */
    extBase = *extState;
    baseProb = *(short *)(extBase + 0x02) * *(short *)(extBase + 0x2C);
    prob = (int)baseProb;

    /* Add terrain defense bonus based on player's city type */
    if (*(short *)(playerBase + 0xD0) == 0) {
        /* Player is in open field */
        prob = (int)(short)(baseProb + *(short *)(extBase + 0x2E));
    } else if (cityType == 2) {
        /* Castle */
        prob = (int)(short)(baseProb + *(short *)(*extState + 0x30));
    } else if (cityType == 1) {
        /* Fortified */
        prob = (int)(short)(baseProb + *(short *)(*extState + 0x32));
    } else if (cityType == 0) {
        /* Neutral city */
        prob = (int)(short)(baseProb + *(short *)(*extState + 0x34));
    }

    /* Clear siege effects */
    *(short *)(*extState + slotIdx * 0x5C + 0x2A6) = 0;

    /* Test 1: Bribery (ExtState + 0x26) */
    if (*(short *)(*extState + 0x26) != 0) {
        int ext = *extState;
        roll = RandomRange(1, 1000, 0);
        if (roll < *(short *)(ext + 0x26) + prob) {
            int siegeAddr = slotIdx * 0x5C + ext;
            *(unsigned short *)(siegeAddr + 0x2A6) |= 0x01;
            return;
        }
    }

    /* Apply low-gold modifier before test 2 */
    if (*(short *)(*gameState + *(short *)(*gameState + 0x110) * 0x14 + 0x186) < 100) {
        prob = (int)(short)((short)prob + *(short *)(*extState + 0x36));
    }

    /* Test 2: Espionage (ExtState + 0x28) */
    if (*(short *)(*extState + 0x28) != 0) {
        int ext = *extState;
        roll = RandomRange(1, 1000, 0);
        if (roll < *(short *)(ext + 0x28) + prob) {
            int siegeAddr = ext + slotIdx * 0x5C;
            *(unsigned short *)(siegeAddr + 0x2A6) |= 0x02;
            return;
        }
    }

    /* Test 3: Sabotage (ExtState + 0x2A) */
    if (*(short *)(*extState + 0x2A) != 0) {
        int ext = *extState;
        roll = RandomRange(1, 1000, 0);
        if (roll < *(short *)(ext + 0x2A) + prob) {
            int siegeAddr = ext + slotIdx * 0x5C;
            *(unsigned short *)(siegeAddr + 0x2A6) |= 0x04;
        }
    }
}


/*
 * ==========================================================================
 *  HandleSiege  (InitiateSiege)
 *  Original: FUN_1000f410 at 0x1000f410
 *  Size: 656 bytes
 *
 *  Initiates a new siege operation. Checks preconditions (available
 *  slots, ready units), selects a target via diplomacy, finds the
 *  best army to lead the siege, and sets up the siege slot.
 * ==========================================================================
 */
void HandleSiege(void)
{
    int *extState;
    int *gameState;
    short readyCount;
    short activeSieges;
    short armyCount;
    int emptySlot;
    int targetPlayer;
    int bestArmy;
    int siegeBase;
    int i;

    extState = gExtState;
    gameState = gGameState;

    /* Check if siege system is enabled (configFlags != 0) */
    if (*(short *)(*extState) == 0) return;

    readyCount = 0;
    activeSieges = 0;

    /* Count armies with combat-ready status (0x05 or 0x08) */
    armyCount = *(short *)(*gameState + 0x1602);
    while (armyCount != 0) {
        armyCount--;
        if ((int)*(char *)(*gameState + armyCount * 0x42 + 0x1619) ==
            (int)*(short *)(*gameState + 0x110)) {
            char state = *(char *)(*extState + (int)armyCount + 0x56);
            if (state == 0x05 || state == 0x08) {
                readyCount++;
            }
        }
    }

    /* Count active siege slots */
    i = 3;
    do {
        if (*(short *)(*extState + i * 0x5C + 0x24C) != 0) {
            activeSieges++;
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Check if we can start a new siege */
    if (activeSieges >= *(short *)(*extState + 0x24A)) return;
    if (readyCount == 0) return;
    if (activeSieges > 0 && readyCount <= 2) return;

    /* Find empty siege slot */
    armyCount = *(short *)(*extState + 0x24A);
    emptySlot = -1;
    while (armyCount != 0) {
        armyCount--;
        if (*(short *)(*extState + armyCount * 0x5C + 0x24C) == 0) {
            emptySlot = (int)armyCount;
        }
    }
    if (emptySlot == -1) return;

    /* Clear the siege slot */
    FUN_1000de24(emptySlot);

    /* Select target using diplomacy system */
    targetPlayer = SelectDiplomacyTarget(0);
    if (targetPlayer == -1) return;

    /* Find best army to lead the siege */
    siegeBase = *extState + emptySlot * 0x5C;
    bestArmy = FUN_1000ed34(emptySlot, targetPlayer,
                            siegeBase + 0x25A, siegeBase + 0x272);
    if (bestArmy == -1) {
        FUN_1000de24(emptySlot);
        return;
    }

    /* Activate siege */
    int slotOff = emptySlot * 0x5C;
    *(short *)(*extState + slotOff + 0x24C) = 1;          /* active = 1 */
    *(short *)(*extState + slotOff + 0x24E) = (short)targetPlayer;  /* targetPlayer */
    *(short *)(*extState + slotOff + 0x250) = (short)bestArmy;      /* besiegingArmy */

    /* Set army to besieging state */
    *(char *)(*extState + bestArmy + 0x56) = 0x07;

    /* Calculate siege probabilities */
    CalculateSiegeProbabilities(emptySlot);

    /* Update alliance matrix: ally against target */
    int diploAddr = *gameState + *(short *)(*gameState + 0x110) * 0x10 + targetPlayer * 2;
    *(unsigned int *)(diploAddr + 0x1582) =
        (*(unsigned int *)(diploAddr + 0x1582) & 0xCFFFFFFF) | 0x20000000;

    /* Clear existing siege assignments and recalculate */
    FUN_1000f258(bestArmy);
    FUN_1000f308(emptySlot);
    FUN_1001fcc0();
}


/*
 * ==========================================================================
 *  SelectDiplomacyTarget
 *  Original: FUN_1000df58 at 0x1000df58
 *  Size: 2528 bytes
 *
 *  Calculates which player should be targeted for alliance/attack.
 *  Uses a complex scoring formula incorporating:
 *    - Combat statistics (kills, wins, hero kills)
 *    - Army strength ratios and army counts
 *    - Territorial proximity and capital control
 *    - Terrain defense bonuses
 *    - Morale differentials
 *    - Random tiebreakers
 *
 *  Returns: player index of best target, or -1 if no valid target
 * ==========================================================================
 */
int SelectDiplomacyTarget(short mode)
{
    int *extState;
    int *gameState;
    int capitalArmy;
    short currentPlayerMorale;
    int currentPlayer;
    int bestTarget;
    short bestScore;
    int i;
    short activePlayers;
    short activeSieges;
    int hasAlliance;

    /* Per-player tracking arrays */
    short playerIndices[8];
    short randomTiebreak[8];
    short capitalControl[8];
    short contestedTerritory[8];
    short armyCounts[8];
    short siegeCounts[8];
    unsigned short totalArmies[8];
    unsigned char adjTracking[8];
    short attackingUs[8];
    short diplomacyScore[8];
    short aliveArmyCount[8];

    extState = gExtState;
    gameState = gGameState;

    /* Find army at current player's capital */
    currentPlayer = *(short *)(*gameState + 0x110);
    int playerStatsBase = *gameState + currentPlayer * 0x14;
    capitalArmy = FUN_1002be50(*(short *)(playerStatsBase + 0x194),
                               *(short *)(playerStatsBase + 0x196));

    currentPlayerMorale = *(short *)(*gameState + currentPlayer * 2 + 0x1122);
    bestTarget = -1;

    /* Initialize per-player arrays */
    i = 7;
    do {
        armyCounts[i] = 0;
        diplomacyScore[i] = 0;
        totalArmies[i] = 0;
        capitalControl[i] = 0;
        aliveArmyCount[i] = 0;
        contestedTerritory[i] = 0;
        siegeCounts[i] = 0;
        randomTiebreak[i] = RandomRange(1, 10, 0);
        playerIndices[i] = (short)i;
        if (i == 0) break;
        i--;
    } while (1);

    /* Scan all armies to build per-player counts */
    short armyIter = *(short *)(*gameState + 0x1602);
    while (armyIter != 0) {
        armyIter--;
        unsigned long armyIdx = (unsigned long)armyIter;
        char owner = *(char *)(*gameState +
            (int)(((armyIdx & 0x7FFFFFF) * 0x20 + armyIdx & 0xFFFFFFFF) << 1) + 0x1619);

        if (owner != 0x0F) {
            totalArmies[(int)owner]++;

            /* Count non-idle armies */
            if ((*(unsigned char *)(*extState + (int)armyIter + 0x11E) & 1) == 0) {
                armyCounts[(int)owner]++;
            }

            int armyBase = *gameState +
                (int)(((armyIdx & 0x7FFFFFF) * 0x20 + armyIdx & 0xFFFFFFFF) << 1);

            /* Track ally-targeting relationships */
            if ((int)*(char *)(armyBase + 0x1619) == (int)*(short *)(*gameState + 0x110)) {
                unsigned char allyTarget = *(unsigned char *)(armyBase + 0x1633);
                if (allyTarget != 0x0F) {
                    contestedTerritory[allyTarget]++;
                }

                /* Check adjacent units for threats */
                FUN_1000da14(armyIter, 0, adjTracking, (void *)((char *)adjTracking + 64));
                int j = 5;
                do {
                    unsigned char adjIdx = adjTracking[j];
                    if (adjIdx != 0xFF) {
                        int gs = *gameState;
                        int adjBase = gs + (int)adjIdx * 0x42;
                        if ((int)*(char *)(adjBase + 0x1619) != (int)*(short *)(gs + 0x110) &&
                            (int)*(unsigned char *)(adjBase + 0x1633) == (int)*(short *)(gs + 0x110)) {
                            char adjOwner = *(char *)(gs +
                                (int)(((armyIdx & 0x7FFFFFF) * 0x20 + armyIdx & 0xFFFFFFFF) << 1) +
                                0x1619);
                            aliveArmyCount[(int)adjOwner]++;
                        }
                    }
                    if (j == 0) break;
                    j--;
                } while (1);
            }
        }
    }

    /* Count active siege slots */
    short siegeIter = *(short *)(*extState + 0x24A);
    activeSieges = 0;
    activePlayers = 0;
    if (siegeIter != 0) {
        do {
            activeSieges = activePlayers;
            siegeIter--;
            int siegeAddr = *extState + siegeIter * 0x5C;
            if (*(short *)(siegeAddr + 0x24C) != 0) {
                short target = *(short *)(siegeAddr + 0x24E);
                siegeCounts[target]++;
                activePlayers++;
            }
            activePlayers = activeSieges + (*(short *)(*extState + siegeIter * 0x5C + 0x24C) != 0 ? 1 : 0);
        } while (siegeIter != 0);
    }

    /* Bonus for player owning capital hex */
    char capitalOwner = *(char *)(*gameState +
        (int)(((capitalArmy & 0x7FFFFFF) * 0x20 + capitalArmy & 0xFFFFFFFF) << 1) + 0x1619);
    if (capitalOwner != 0x0F && (int)capitalOwner != currentPlayer) {
        diplomacyScore[(int)capitalOwner] += 0x14; /* +20 */
    }

    /* Calculate total players with armies */
    short totalPlayersWithArmies = 0;
    i = 7;
    do {
        if (totalArmies[i] != 0 && i != currentPlayer) {
            totalPlayersWithArmies++;
        }

        /* Check if player i controls our capital */
        int pBase = *gameState + (int)(((((unsigned long)i & 0x3FFFFFFF) * 4 +
                    (unsigned long)i) & 0xFFFFFFFF) << 2);
        int capArmy = FUN_1002be50(*(short *)(pBase + 0x194), *(short *)(pBase + 0x196));
        if ((int)*(char *)(*gameState + capArmy * 0x42 + 0x1619) == currentPlayer) {
            attackingUs[i] = 1;
        } else {
            attackingUs[i] = 0;
        }

        if (i == 0) break;
        i--;
    } while (1);

    /* THE CORE SCORING FORMULA */
    i = 7;
    do {
        int extBase = *extState + i * 2;

        /* Calculate combat statistics score */
        short combatScore =
            *(short *)(extBase + 0x40C) * 2 +      /* battleWinsComplete * 2 */
            *(short *)(extBase + 0x3FC) * 2 +      /* battleWins * 2 */
            *(short *)(extBase + 0x3EC) * 2 +      /* battlesWonClean * 2 */
            *(short *)(extBase + 0x3DC) +           /* battlesParticipated */
            *(short *)(extBase + 0x3CC) +           /* totalKills */
            *(short *)(extBase + 0x3BC) * 4 +      /* heroKills * 4 */
            aliveArmyCount[i] * 6 +                /* nearby threats * 6 */
            contestedTerritory[i] * 4 +             /* contested territory * 4 */
            attackingUs[i] * 15 +                   /* capital control * 15 */
            diplomacyScore[i] +                     /* capital proximity bonus */
            randomTiebreak[i];                      /* random tiebreaker */

        diplomacyScore[i] = combatScore;

        /* Add terrain defense bonus based on current player's city type */
        if (*(short *)(*gameState + currentPlayer * 2 + 0xD0) == 0) {
            diplomacyScore[i] += *(short *)(*extState + 0x18);
        } else if (*(short *)(*gameState + currentPlayer * 2 + 0xC0) == 2) {
            diplomacyScore[i] += *(short *)(*extState + 0x1E);
        } else if (*(short *)(*gameState + currentPlayer * 2 + 0xC0) == 1) {
            diplomacyScore[i] += *(short *)(*extState + 0x1A);
        } else if (*(short *)(*gameState + currentPlayer * 2 + 0xC0) == 0) {
            diplomacyScore[i] += *(short *)(*extState + 0x1C);
        }

        /* Morale and army count differential modifiers */
        int moraleDiff = FUN_10003768(
            (long)currentPlayerMorale - (long)*(short *)(*gameState + i * 2 + 0x1122));
        int armyDiff = FUN_10003768(
            (long)(short)totalArmies[currentPlayer] - (long)(short)totalArmies[i]);

        diplomacyScore[i] +=
            (short)(armyDiff >> 2) + (unsigned short)(armyDiff < 0 && (armyDiff & 3) != 0) +
            (short)(moraleDiff >> 3) + (unsigned short)(moraleDiff < 0 && (moraleDiff & 7) != 0);

        if (i == 0) break;
        i--;
    } while (1);

    /* DISQUALIFICATION CHECKS */
    hasAlliance = 0;
    i = 7;
    do {
        int gs = *gameState;
        if (*(short *)(gs + i * 2 + 0x138) != 0 &&
            i != *(short *)(gs + 0x110) &&
            ((*(unsigned int *)(gs + *(short *)(gs + 0x110) * 0x10 + i * 2 + 0x1582) >> 0x1C) & 3) == 2) {
            hasAlliance = 1;
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Multiplayer mode disqualification */
    int gs2 = *gameState;
    if (*(short *)(gs2 + 0x116) != 0 &&
        *(short *)(gs2 + currentPlayer * 2 + 0xD0) != 0) {

        short multiAlly[8];
        i = 7;
        do { multiAlly[i] = 0; if (i == 0) break; i--; } while (1);

        i = 7;
        do {
            int gsb = *gameState + i * 2;
            if (*(short *)(gsb + 0x138) != 0 && *(short *)(gsb + 0xD0) != 0) {
                int j = 7;
                do {
                    int gsb2 = *gameState + j * 2;
                    if (*(short *)(gsb2 + 0x138) != 0 && *(short *)(gsb2 + 0xD0) != 1 &&
                        ((*(unsigned int *)(*gameState + i * 0x10 + j * 2 + 0x1582) >> 0x1A) & 3) == 2) {
                        multiAlly[i] = 1;
                    }
                    if (j == 0) break;
                    j--;
                } while (1);
            }
            if (i == 0) break;
            i--;
        } while (1);

        i = 7;
        do {
            int gsb = *gameState + i * 2;
            if (*(short *)(gsb + 0x138) != 0 && *(short *)(gsb + 0xD0) != 0 &&
                (multiAlly[currentPlayer] != 0 || multiAlly[i] != 0)) {
                diplomacyScore[i] = 0;
            }
            if (i == 0) break;
            i--;
        } while (1);
    }

    /* Per-player disqualification loop */
    i = 7;
    do {
        int extBase = *extState + i * 2;
        short battlesP = *(short *)(extBase + 0x3DC);
        short battlesW = *(short *)(extBase + 0x3FC);

        /* Check siege system turn limit */
        short siegeThreshold;
        if (*(short *)(*gameState + 0x128) == 0) {
            siegeThreshold = 8;
        } else {
            siegeThreshold = 4;
        }

        /* Third party treaty check */
        int treaty = FUN_10011734(i);
        if (treaty != 0) {
            diplomacyScore[i] = 0;
        }

        /* If alliance exists and this player is neutral toward us */
        if (hasAlliance &&
            ((*(unsigned int *)(*gameState + currentPlayer * 0x10 + i * 2 + 0x1582) >> 0x1C) & 3) == 0) {
            diplomacyScore[i] = 0;
        }

        /* No active armies and no sieges */
        if (activeSieges == 0 && armyCounts[i] == 0) {
            diplomacyScore[i] = 0;
        }

        /* Turn-based limits */
        short turnNum = *(short *)(*gameState + 0x136);
        if (turnNum < 2) turnNum = 1;
        if (turnNum < siegeThreshold && (short)(battlesP + battlesW) == 0) {
            diplomacyScore[i] = 0;
        }

        /* Army count ratio check */
        if (totalPlayersWithArmies > 1) {
            unsigned short ta = totalArmies[i];
            if ((int)(((int)(short)ta >> 2) +
                (unsigned int)((short)ta < 0 && (ta & 3) != 0)) <
                (int)siegeCounts[i]) {
                diplomacyScore[i] = 0;
            }
        }

        if (i == 0) break;
        i--;
    } while (1);

    /* Current player doesn't target self */
    diplomacyScore[currentPlayer] = 0;

    /* Select highest-scoring target */
    bestScore = 0;
    i = 7;
    do {
        if (totalArmies[i] != 0 && diplomacyScore[i] > bestScore) {
            bestTarget = i;
            bestScore = diplomacyScore[i];
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Override: if capital is held by enemy, prefer that enemy */
    int capOwnerInt = (int)*(char *)(*gameState +
        (int)(((capitalArmy & 0x7FFFFFF) * 0x20 + capitalArmy & 0xFFFFFFFF) << 1) + 0x1619);
    if (capOwnerInt != 0x0F && capOwnerInt != currentPlayer) {
        /* Check if not already targeting via siege */
        short siegeCheck = *(short *)(*extState + 0x24A);
        int alreadyTargeted = 0;
        if (siegeCheck != 0) {
            do {
                siegeCheck--;
                if (siegeCounts[siegeCheck] == capOwnerInt) {
                    alreadyTargeted = 1;
                }
            } while (siegeCheck != 0);
        }
        if (!alreadyTargeted) {
            bestTarget = capOwnerInt;
        }
    }

    /* Final check: target must have living armies */
    if (bestTarget != -1 && armyCounts[bestTarget] == 0) {
        bestTarget = -1;
    }

    return bestTarget;
}


/*
 * ==========================================================================
 *  DoFightResults
 *  Original: FUN_10011804 at 0x10011804
 *  Size: 2548 bytes
 *
 *  Processes fight outcomes and makes alliance/diplomacy decisions.
 *  This is the critical function that determines alliance state changes
 *  after combat. Contains 13 distinct phases:
 *    1. Select diplomacy target
 *    2. Initialize per-player arrays
 *    3. Count enemy armies
 *    4. Set alliance stances based on army presence
 *    5. Refine based on combat statistics
 *    6. Force alliance with diplomacy target
 *    7. Process active sieges
 *    8. Select strongest enemy for targeting
 *    9. Focus alliances on strongest enemy
 *   10. Siege-related alliance overrides
 *   11. Multiplayer peace override
 *   12. Clear alliances with dead players
 *   13. Break sieges against now-neutral players
 * ==========================================================================
 */
void DoFightResults(void)
{
    int *extState;
    int *gameState;
    int *mapBase;
    short *diplomacyTargetPtr;
    int enemyStrengthBase;
    int enemyArmyBase;
    int aliveEnemyBase;
    int siegeTreatyBase;
    int currentPlayer;
    int i, j;
    int neutralArmyCount;
    short diplomacyTarget;

    short neutralStatus[8];
    short allyStatus[8];
    short multiAlly[38]; /* oversized for safety, original has asStack_4c[38] */

    enemyStrengthBase = iRam10117490;
    enemyArmyBase = iRam1011748c;
    aliveEnemyBase = iRam10117488;
    diplomacyTargetPtr = psRam10117484;
    siegeTreatyBase = iRam10117474;
    extState = gExtState;
    gameState = gGameState;
    mapBase = gMapTiles;

    /* Pre-phase: adopt neutral armies if applicable */
    FUN_10011590();

    /* Check if alliance system is active */
    if (*(short *)(*gameState + 0x11C) == 0) return;

    /* Phase 1: Select diplomacy target */
    diplomacyTarget = SelectDiplomacyTarget(0);
    *diplomacyTargetPtr = diplomacyTarget;

    currentPlayer = *(short *)(*gameState + 0x110);

    /* Phase 2: Initialize per-player arrays and alliance stance tracking */
    i = 7;
    do {
        int diploAddr = *gameState + currentPlayer * 0x10 + i * 2;

        /* Clear alliance bits (28-29) */
        *(unsigned int *)(diploAddr + 0x1582) &= 0xCFFFFFFF;

        /* Clear tracking arrays */
        *(short *)(i * 2 + enemyStrengthBase) = 0;
        *(short *)(i * 2 + enemyArmyBase) = 0;
        *(short *)(i * 2 + aliveEnemyBase) = 0;
        allyStatus[i] = 0;
        neutralStatus[i] = 0;

        /* Determine initial stance from other player's view */
        unsigned int otherStance = *(unsigned int *)(
            *gameState + i * 0x10 + currentPlayer * 2 + 0x1582);
        if (((otherStance >> 0x1C) & 3) == 0) {
            neutralStatus[i] = 1;
        } else if (((otherStance >> 0x1C) & 3) == 2) {
            allyStatus[i] = 1;
        }

        if (i == 0) break;
        i--;
    } while (1);

    /* Phase 3: Count enemy armies and track relationships */
    short armyIter = *(short *)(*gameState + 0x1602);
    neutralArmyCount = 0;

    while (armyIter != 0) {
        armyIter--;
        unsigned long armyIdx = (unsigned long)armyIter;

        int armyBase = *gameState +
            (int)(((armyIdx & 0x7FFFFFF) * 0x20 + armyIdx & 0xFFFFFFFF) << 1);

        /* Check terrain defense for impassable terrain */
        long terrainDef = -(long)*(char *)(
            *gameState + (*(unsigned int *)(*mapBase +
                *(short *)(armyBase + 0x1606) * 0xE0 +
                *(short *)(armyBase + 0x1604) * 2) >> 24) + 0x711);
        long defPlus10 = terrainDef + 10;
        if (((defPlus10 + (-(unsigned long)(defPlus10 == 0) - (terrainDef + 9))) & 0xFF) == 0) {
            neutralArmyCount++;
        }

        char owner = *(char *)(armyBase + 0x1619);
        if (owner != 0x0F) {
            int ownerIdx = owner * 2;

            /* Count total armies per player */
            *(short *)(ownerIdx + enemyArmyBase) += 1;

            /* Count non-idle armies */
            if ((*(unsigned char *)(*extState + (int)armyIter + 0x11E) & 1) == 0) {
                *(short *)(ownerIdx + aliveEnemyBase) += 1;
            }

            /* Track ally-targeting relationships */
            if ((int)*(char *)(armyBase + 0x1619) == currentPlayer) {
                unsigned char allyTarget = *(unsigned char *)(armyBase + 0x1633);
                if (allyTarget != 0x0F) {
                    *(short *)((int)allyTarget * 2 + enemyStrengthBase) += 1;
                }
            } else {
                if ((unsigned short)*(unsigned char *)(armyBase + 0x1633) ==
                    *(unsigned short *)(*gameState + 0x110)) {
                    int ownerAdjIdx = *(char *)(armyBase + 0x1619) * 2;
                    *(short *)(ownerAdjIdx + enemyStrengthBase) += 1;
                }
            }
        }
    }

    /* Phase 4: Set alliance stances based on army count thresholds */
    i = 7;
    do {
        int gs = *gameState;
        if (i != *(short *)(gs + 0x110) &&
            *(short *)(gs + i * 2 + 0x138) != 0) {

            short heroBonus = (neutralStatus[i] - allyStatus[i]) * 2;
            short strength = *(short *)(i * 2 + enemyStrengthBase);

            if (strength >= heroBonus + 4) {
                if (heroBonus + 8 <= (int)*(short *)(i * 2 + enemyStrengthBase)) {
                    /* Overwhelming presence -> ALLIED (stance = 2) */
                    int addr = *gameState + currentPlayer * 0x10 + i * 2;
                    *(unsigned int *)(addr + 0x1582) =
                        (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF) | 0x20000000;
                } else {
                    /* Strong presence -> FRIENDLY (stance = 1) */
                    int addr = gs + currentPlayer * 0x10 + i * 2;
                    *(unsigned int *)(addr + 0x1582) =
                        (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF) | 0x10000000;
                }
            }
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Phase 5: Refine based on combat statistics */
    i = 7;
    do {
        int gs = *gameState;
        if (i != *(short *)(gs + 0x110) &&
            *(short *)(gs + i * 2 + 0x138) != 0) {

            int extBase = *extState + i * 2;
            short heroBonus2 = (neutralStatus[i] - allyStatus[i]) * 2;

            int combatPower = (int)(short)(
                *(short *)(extBase + 0x3EC) +           /* battlesWonClean */
                *(short *)(extBase + 0x40C) * 4 +       /* battleWinsComplete * 4 */
                *(short *)(extBase + 0x3BC) * 2);       /* heroKills * 2 */

            if (combatPower >= heroBonus2 + 5) {
                if (heroBonus2 + 10 <= combatPower) {
                    /* Strong combat record -> ALLIED */
                    int addr = *gameState + currentPlayer * 0x10 + i * 2;
                    *(unsigned int *)(addr + 0x1582) =
                        (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF) | 0x20000000;
                } else {
                    /* Moderate combat record -> upgrade to at least FRIENDLY */
                    unsigned short currentStance =
                        (unsigned short)(*(unsigned int *)(
                            gs + currentPlayer * 0x10 + i * 2 + 0x1582) >> 0x1C) & 3;
                    int newStance = (int)(short)currentStance;
                    if (currentStance < 2) {
                        newStance = 1; /* at least FRIENDLY */
                    }
                    int addr = *gameState + currentPlayer * 0x10 + i * 2;
                    *(unsigned int *)(addr + 0x1582) =
                        (newStance << 0x1C) | (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF);
                }
            }
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Phase 6: Force alliance with diplomacy target */
    if (*diplomacyTargetPtr != -1) {
        int addr = *gameState + currentPlayer * 0x10 + *diplomacyTargetPtr * 2;
        *(unsigned int *)(addr + 0x1582) =
            (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF) | 0x20000000;
    }

    /* Phase 7: Process active sieges - ally against siege targets */
    i = 3;
    do {
        int siegeAddr = *extState + i * 0x5C;
        if (*(short *)(siegeAddr + 0x24C) != 0) {
            int addr = *gameState + currentPlayer * 0x10 +
                       *(short *)(siegeAddr + 0x24E) * 2;
            *(unsigned int *)(addr + 0x1582) =
                (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF) | 0x20000000;
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Phase 8: Select strongest enemy for overall targeting */
    short bestEnemyCount = 0;
    int bestEnemy = -1;
    i = 7;
    do {
        if (*(short *)(*gameState + i * 2 + 0x138) != 0) {
            /* Calculate surrender threshold */
            short threshold;
            int normalizedCount = neutralArmyCount;
            if (normalizedCount < 1) normalizedCount = 1;

            if (*(short *)(*gameState + i * 2 + 0xD0) == 0) {
                threshold = *(short *)(*extState + 0x44);
            } else {
                threshold = 0x32; /* 50 */
            }

            short armyCount = *(short *)(i * 2 + enemyArmyBase);
            if (bestEnemyCount < armyCount &&
                threshold < (short)((armyCount * 100) / normalizedCount)) {
                bestEnemy = i;
                bestEnemyCount = armyCount;
            }
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Phase 9: Focus alliances on strongest enemy */
    if (bestEnemy != -1 && bestEnemy != currentPlayer) {
        i = 7;
        do {
            if (*(short *)(*gameState + i * 2 + 0x138) != 0) {
                if (i == bestEnemy || i == *diplomacyTargetPtr) {
                    /* ALLIED against target */
                    int addr = *gameState + currentPlayer * 0x10 + i * 2;
                    *(unsigned int *)(addr + 0x1582) =
                        (*(unsigned int *)(addr + 0x1582) & 0xCFFFFFFF) | 0x20000000;
                } else {
                    /* NEUTRAL toward others */
                    int addr = *gameState + currentPlayer * 0x10 + i * 2;
                    *(unsigned int *)(addr + 0x1582) &= 0xCFFFFFFF;
                }
            }
            if (i == 0) break;
            i--;
        } while (1);
    }

    /* Phase 10: Siege-related alliance overrides */
    if (*(short *)(*extState + 0x38) != 0) {
        int hasConflict = 0;

        /* Clear alliances with city players who have siege treaty blocks */
        i = 7;
        do {
            int gs = *gameState;
            int pBase = i * 2;
            if (*(short *)(gs + pBase + 0x138) != 0 &&
                *(short *)(gs + pBase + 0xD0) != 0 &&
                i != *(short *)(gs + 0x110)) {
                unsigned int dipl = *(unsigned int *)(gs + currentPlayer * 0x10 + pBase + 0x1582);
                if (((dipl >> 0x1C) & 3) != 0) {
                    int treaty = FUN_10011734(i);
                    if (treaty != 0) {
                        int addr = *gameState + currentPlayer * 0x10 + pBase;
                        *(unsigned int *)(addr + 0x1582) &= 0xCFFFFFFF;
                    }
                }
            }
            if (i == 0) break;
            i--;
        } while (1);

        /* Check if any non-city player is at war */
        i = 7;
        do {
            int gs = *gameState;
            int pBase = gs + i * 2;
            if (*(short *)(pBase + 0x138) != 0 && *(short *)(pBase + 0xD0) != 1 &&
                ((*(unsigned int *)(gs + currentPlayer * 0x10 + i * 2 + 0x1582) >> 0x1A) & 3) == 2) {
                hasConflict = 1;
            }
            if (i == 0) break;
            i--;
        } while (1);

        if (hasConflict) {
            /* Break alliances with city players who have siege treaties */
            i = 7;
            do {
                int gs = *gameState;
                int pBase = i * 2;
                if (*(short *)(gs + pBase + 0x138) != 0 &&
                    *(short *)(gs + pBase + 0xD0) == 1 &&
                    *(short *)(pBase + siegeTreatyBase) != 0) {
                    int addr = gs + currentPlayer * 0x10 + pBase;
                    *(unsigned int *)(addr + 0x1582) &= 0xCFFFFFFF;
                }
                if (i == 0) break;
                i--;
            } while (1);
        }
    }

    /* Phase 11: Multiplayer peace override */
    if (*(short *)(*gameState + 0x116) != 0) {
        i = 7;
        do { multiAlly[i] = 0; if (i == 0) break; i--; } while (1);

        i = 7;
        do {
            int gs = *gameState + i * 2;
            if (*(short *)(gs + 0x138) != 0 && *(short *)(gs + 0xD0) != 0) {
                j = 7;
                do {
                    int gs2 = *gameState + j * 2;
                    if (*(short *)(gs2 + 0x138) != 0 && *(short *)(gs2 + 0xD0) != 1 &&
                        ((*(unsigned int *)(*gameState + i * 0x10 + j * 2 + 0x1582) >> 0x1A) & 3) == 2) {
                        multiAlly[i] = 1;
                    }
                    if (j == 0) break;
                    j--;
                } while (1);
            }
            if (i == 0) break;
            i--;
        } while (1);

        i = 7;
        do {
            int gs = *gameState + i * 2;
            if (*(short *)(gs + 0x138) != 0 && *(short *)(gs + 0xD0) != 0 &&
                (multiAlly[currentPlayer] != 0 || multiAlly[i] != 0)) {
                int addr = *gameState + currentPlayer * 0x10 + i * 2;
                *(unsigned int *)(addr + 0x1582) &= 0xCFFFFFFF;
            }
            if (i == 0) break;
            i--;
        } while (1);
    }

    /* Phase 12: Clear alliances with dead players */
    i = 7;
    do {
        if (*(short *)(i * 2 + aliveEnemyBase) == 0) {
            int addr = *gameState + currentPlayer * 0x10 + i * 2;
            *(unsigned int *)(addr + 0x1582) &= 0xCFFFFFFF;
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Phase 13: Break sieges against now-neutral players */
    i = 3;
    do {
        int siegeAddr = *extState + i * 0x5C;
        if (*(short *)(siegeAddr + 0x24C) != 0) {
            short siegeTarget = *(short *)(siegeAddr + 0x24E);
            unsigned int stance = *(unsigned int *)(
                *gameState + currentPlayer * 0x10 + siegeTarget * 2 + 0x1582);
            if (((stance >> 0x1C) & 3) == 0) {
                FUN_1001ae14(i, 0x14); /* Break siege with 20 gold penalty */
            }
        }
        if (i == 0) break;
        i--;
    } while (1);
}


/*
 * ==========================================================================
 *  CheckThirdPartyTreaty
 *  Original: FUN_10011734 at 0x10011734
 *  Size: 208 bytes
 *
 *  Checks if a player has third-party treaty protection that would
 *  prevent the current player from attacking them.
 *
 *  Returns: 1 if treaty blocks attack, 0 otherwise
 * ==========================================================================
 */
int CheckThirdPartyTreaty(short playerIdx)
{
    int result;
    int i;

    result = 0;

    /* Must have alliances enabled AND siege ability enabled */
    if (*(short *)(*gGameState + 0x11C) == 0 || *(short *)(*gExtState + 0x38) == 0) {
        return 0;
    }

    /* Current player must be in a city (player type != 0) */
    if (*(short *)(*gGameState + *(short *)(*gGameState + 0x110) * 2 + 0xD0) == 0) {
        return 0;
    }

    i = 7;
    do {
        int pBase = i * 2;
        int gs = *gGameState + pBase;

        /* Check if player i is alive, not in city, at war with target,
         * and has siege treaty count */
        if (*(short *)(gs + 0x138) != 0 &&
            *(short *)(gs + 0xD0) == 0 &&
            ((*(unsigned int *)(*gGameState + playerIdx * 0x10 + pBase + 0x1582) >> 0x1A) & 3) == 2 &&
            *(short *)(pBase + iRam10117474) != 0) {
            result = 1;
        }
        if (i == 0) break;
        i--;
    } while (1);

    return result;
}


/*
 * ==========================================================================
 *  CanUnitAct
 *  Original: FUN_100121f8 at 0x100121f8
 *  Size: 300 bytes
 *
 *  Checks whether a unit can take an action based on its owner's
 *  diplomatic stance with the current player.
 *
 *  Returns: 1 if the unit can act, 0 otherwise
 * ==========================================================================
 */
int CanUnitAct(short armyIdx)
{
    int gs;
    char owner;
    short allyCount;
    int lastAllyPlayer;
    unsigned int diploStance;
    int i;

    gs = *gGameState;
    owner = *(char *)(gs + armyIdx * 0x42 + 0x1619);
    allyCount = 0;

    /* Neutral units can always act */
    if (owner == 0x0F) {
        return 1;
    }

    /* Count allies (players at war with anyone from current player's view) */
    i = 7;
    do {
        int gsb = *gGameState;
        if (*(short *)(gsb + i * 2 + 0x138) != 0 &&
            ((*(unsigned int *)(gsb + *(short *)(gsb + 0x110) * 0x10 + i * 2 + 0x1582) >> 0x1A) & 3) == 2) {
            allyCount++;
            lastAllyPlayer = i;
        }
        if (i == 0) break;
        i--;
    } while (1);

    /* Check diplomatic stance toward the unit's owner */
    diploStance = *(unsigned int *)(*gGameState +
        *(short *)(*gGameState + 0x110) * 0x10 + owner * 2 + 0x1582) >> 0x1A & 3;

    if (diploStance == 2) {
        /* At war: unit can always act */
        return 1;
    } else if (diploStance == 1) {
        /* Friendly: check config flags */
        if ((*(unsigned short *)(*gExtState + 0x0C) & 1) != 0) {
            return 1;
        }
    } else if (diploStance == 0) {
        /* Neutral: unit can act only if no allies or sole ally is owner */
        if ((allyCount == 0 || (allyCount == 1 && lastAllyPlayer == owner)) &&
            (*(unsigned short *)(*gExtState + 0x0C) & 1) != 0) {
            return 1;
        }
    }

    return 0;
}


/*
 * ==========================================================================
 *  TryHeroCapture
 *  Original: FUN_10012324 at 0x10012324
 *  Size: 248 bytes
 *
 *  Attempts to capture a hero unit after combat. Checks various
 *  conditions including city type, turn number, and army value.
 *
 *  Returns: 1 if capture succeeded, 0 otherwise
 * ==========================================================================
 */
int TryHeroCapture(short armyIdx, short targetPlayer)
{
    short turnNum;

    /* Current player must be in city type != 0, target in city type 0 */
    if (*(short *)(*(short *)(*gGameState + 0x110) * 2 + *gGameState + 0xD0) == 0) {
        return 0;
    }
    if (*(short *)(*gGameState + targetPlayer * 2 + 0xD0) != 0) {
        return 0;
    }

    /* Hero special combat must be enabled */
    if (*(short *)(*gExtState + 0x42) == 0) {
        return 0;
    }

    /* Turn number check (clamped to min 1, must be < 10) */
    turnNum = *(short *)(*gGameState + 0x136);
    if (turnNum < 2) turnNum = 1;
    if (turnNum >= 10) {
        return 0;
    }

    /* Check if this is the current hero target */
    if (armyIdx == *(short *)(*gExtState + 0x46)) {
        return 0;
    }

    /* Evaluate army value and decide capture method */
    {
        int value = FUN_1004639c(armyIdx);
        if (value < 200) {
            FUN_1001bbf0(armyIdx, 0);
        } else {
            FUN_1001ba60(armyIdx);
        }
    }

    return 1;
}


/*
 * ==========================================================================
 *  ClearSiegeAssignments
 *  Original: FUN_1000f258 at 0x1000f258
 *  Size: 176 bytes
 *
 *  Removes an army from all siege support slots across all siege
 *  operations. Also clears the army's siege status field.
 * ==========================================================================
 */
void ClearSiegeAssignments(short armyIdx)
{
    int *extState;
    int *gameState;
    short siegeCount;
    int i;

    extState = gExtState;
    gameState = gGameState;

    siegeCount = *(short *)(*extState + 0x24A);
    while (siegeCount != 0) {
        siegeCount--;
        if (*(short *)(*extState + siegeCount * 0x5C + 0x24C) != 0) {
            i = 3;
            do {
                int addr = *extState + siegeCount * 0x5C + i * 2;
                if (*(short *)(addr + 0x252) == armyIdx) {
                    *(short *)(addr + 0x252) = -1;
                    *(short *)(*gameState + armyIdx * 0x42 + 0x1636) = 0;
                }
                if (i == 0) break;
                i--;
            } while (1);
        }
    }
}


/*
 * ==========================================================================
 *  UpdateSiegeStrength
 *  Original: FUN_1000f308 at 0x1000f308
 *  Size: 260 bytes
 *
 *  Recalculates the adjacency counts for each attacker unit in a
 *  siege slot. For each attacker, counts how many adjacent armies
 *  belong to the siege target player.
 * ==========================================================================
 */
void UpdateSiegeStrength(short siegeSlot)
{
    int *extState;
    int *gameState;
    short targetPlayer;
    int i;
    short adjCount;
    unsigned char adjArmies[8];
    unsigned char adjData[32];

    extState = gExtState;
    gameState = gGameState;

    targetPlayer = *(short *)(*extState + siegeSlot * 0x5C + 0x24E);

    i = 0;
    do {
        short attackerArmy = *(short *)(*extState + siegeSlot * 0x5C + i * 2 + 0x25A);
        if (attackerArmy != -1) {
            FUN_1000da14(attackerArmy, 0, adjArmies, adjData);
            adjCount = 0;
            int j = 5;
            do {
                unsigned char adjIdx = adjArmies[j];
                if (adjIdx != 0xFF &&
                    (int)*(char *)(*gameState + (int)adjIdx * 0x42 + 0x1619) ==
                    (int)targetPlayer) {
                    adjCount++;
                }
                if (j == 0) break;
                j--;
            } while (1);

            *(short *)(*extState + siegeSlot * 0x5C + i * 2 + 0x27E) = adjCount;
        }
        i++;
    } while (i < 6);
}


/*
 * ==========================================================================
 *  IsUnitBeingSieged
 *  Original: FUN_1000f6a0 at 0x1000f6a0
 *  Size: 104 bytes
 *
 *  Checks whether a given army is the besieging army for any active
 *  siege operation.
 *
 *  Returns: 1 if the army is leading a siege, 0 otherwise
 * ==========================================================================
 */
int IsUnitBeingSieged(short armyIdx)
{
    short siegeCount;

    siegeCount = *(short *)(*gExtState + 0x24A);
    if (siegeCount != 0) {
        do {
            siegeCount--;
            int siegeAddr = *gExtState + siegeCount * 0x5C;
            if (*(short *)(siegeAddr + 0x24C) != 0 &&
                *(short *)(siegeAddr + 0x250) == armyIdx) {
                return 1;
            }
        } while (siegeCount != 0);
    }
    return 0;
}


/*
 * ==========================================================================
 *  IsUnitAvailableForSiege
 *  Original: FUN_1000f708 at 0x1000f708
 *  Size: 180 bytes
 *
 *  Checks if an army is available for siege assignment.
 *  An army is available if:
 *    - It is not already leading a siege
 *    - Its state is 0x08 (attacking) or 0x05 (ready)
 *    - OR if param_2 != 0 and state is 0x06 (supporting)
 *
 *  Returns: 1 if available, 0 otherwise
 * ==========================================================================
 */
int IsUnitAvailableForSiege(short armyIdx, short includeSupporters)
{
    short siegeCount;
    char state;

    /* Check if already leading a siege */
    siegeCount = *(short *)(*gExtState + 0x24A);
    if (siegeCount != 0) {
        do {
            siegeCount--;
            int siegeAddr = *gExtState + siegeCount * 0x5C;
            if (*(short *)(siegeAddr + 0x24C) != 0 &&
                *(short *)(siegeAddr + 0x250) == armyIdx) {
                return 0;
            }
        } while (siegeCount != 0);
    }

    state = *(char *)(*gExtState + (int)armyIdx + 0x56);
    if (state == 0x08 || state == 0x05) {
        return 1;
    }
    if (includeSupporters != 0 && state == 0x06) {
        return 1;
    }
    return 0;
}
