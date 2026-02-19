/*
 * reconstructed_batch_a.c - Reconstructed function implementations
 *
 * Batch A: Functions in address range 0x10000000–0x1003FFFF
 * plus selected functions from higher addresses.
 *
 * Reconstructed from Ghidra decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 */

#include "warlords2.h"

/* ===== Forward declarations for called functions ===== */
void FUN_10004c54(void);
void FUN_10005b68(void);
void DrawFullMapView(void);
void FUN_10007c50(void);
int AbsShort(int);
void FUN_10082430(int, short, short);
void FUN_1000848c(short, short);
void FUN_1003d734(void);
void FUN_10011590(void);
short FindPrimaryThreat(int);
void FUN_1001ab94(void);
void FUN_1000fac4(void);
int CheckArmyEscort(int);
int FUN_1001e794(int, int, long long, int);
void FUN_1001e564(short, int);
int GetAdjacentArmies(int, int, void *, void *);
int RandomRange(int, int, int);
int FindBestTarget(int, short *, void *, long long, int);
int FUN_10010b30(int, int);
void ActivateAttackEvent(int);
int FUN_1000ed34(int, int, int, int);
void FUN_1000f064(int);
void FUN_1000f258(int);
void FUN_1000f308(int);
int IsPositionReachable(int, int);
int FUN_1001acdc(short, short, short);
int EvaluatePosition(short, short);
int FUN_10012cc8(int);
void MoveArmyToTarget(void *, int, long long, int);
void ExecuteArmyMove(short, short, int);
int FindPath(short, short, void *, int, int, int);
int FUN_10013d0c(void *);
int FUN_100145c8(int);
int AssignToDefense(int, long long);
void FUN_10014e44(void *);
void FUN_100151e8(int);
int FUN_10015324(int, void *);
int FUN_10015030(int, int);
void FUN_10015554(int, int, void *, int);
void FUN_100159c8(int, void *);
void FUN_10015dc8(int, void *);
void FUN_10015f98(int, void *);
int FUN_100161fc(int, void *);
int GetNextDefender(void);
void PrepareDefender(int);
int FUN_10013150(void);
int CanArmyEnterCity(long long, int);
void FUN_1001ae14(long long, int);
int FUN_10011734(int);
int FUN_100f15e0(int);
void FUN_1000c67c(void);
int FUN_100f1640(int);
void FUN_1001f758(void);
void FUN_1001f958(void);
int GetNeighborArmies(int, void *, int);
int AdvanceGroupToTarget(int);
void FUN_10039c58(int);
void FocusObject(int);
int ScoreUnitForHire(int);
void CreateUnitTemplate(long long, void *, short *, void *, short *, void *);
int FUN_1000cf78(long long);
void FUN_1000d0c0(long long, long long);
void FreeBlock(void *);
void DetachResource(void *);
void DisposeHandle_Thunk(int);
void FindUnitsInRange(short, short, void *, int);
void DisbandUnit(int, int);
int AllocInfluenceMap(void);
void FreeInfluenceMap(void);
void SetupInfluenceMap(short, short, short, short, short);
void ReleaseUnits(void *, int);
void PrepareUnitDisplay(void);
void FilterEnemyUnits(void *);
void FUN_10009630(int, short, short);
void FUN_1003c838(void);
void FUN_1003cb84(void);
void FUN_1003d094(void);
void FUN_10025f94(void);
void FUN_1002ce38(void);
void SaveTurnState(void);
int CheckHeroQuest(int);
int CheckQuestCondition(int);
void LaunchAllianceAttack(long long, int);
void LaunchAllianceDefense(long long);
void SpawnNeutralArmy(long long, long long);
void CenterMapOnArmy(short);
void RefreshDisplay(int, int, int);
void SetArmyDestination(short, short, short);
void UpdateArmyDisplay(short);
void ProcessQuestReward(int);
void FUN_10056534(void);
void FUN_10092c5c(int);
int ByteSwap16(short);
void BlockMoveData_Thunk(int, int);
void HLock_Thunk_Sound(int);
int FUN_10051f98(int, long long, int);
void StreamRead(void *, void *, short);
void CloseStream(void *, int);
void FUN_100219a8(int, int, int);


/* ===================================================================
 * TVect Trampolines (0x10000xxx – 0x10003xxx)
 *
 * These are PowerPC transition vector (TVect) glue stubs that
 * originally called through Mac OS Toolbox or shared library
 * function pointers.  Each is 24 bytes of machine code that loads
 * a function pointer from a global and branches to it.
 *
 * In the modern build these are kept as no-op stubs.
 * =================================================================== */

/* addr=10000360 size=24  TVect trampoline -> puRam10115578 */
int FUN_10000360() { return 0; }

/* addr=10000378 size=24  TVect trampoline -> puRam10115adc */
int FUN_10000378() { return 0; }

/* addr=10000468 size=24  TVect trampoline -> OS API trampoline */
int FUN_10000468() { return 0; }

/* addr=10000678 size=24  TVect trampoline -> puRam10115810 */
int FUN_10000678() { return 0; }

/* addr=10000918 size=24  TVect trampoline -> puRam10115ae4 */
int FUN_10000918() { return 0; }

/* addr=10000948 size=24  TVect trampoline -> puRam10115524 */
int FUN_10000948() { return 0; }

/* addr=10000960 size=24  TVect trampoline -> puRam10115564 */
int FUN_10000960() { return 0; }

/* addr=100009d8 size=24  TVect trampoline -> FUN_10115b60 */
int FUN_100009d8() { return 0; }

/* addr=100009f0 size=24  TVect trampoline -> puRam10115484 */
int FUN_100009f0() { return 0; }

/* addr=10000a08 size=24  TVect trampoline -> puRam10115a24 */
int FUN_10000a08() { return 0; }

/* addr=10000a98 size=24  TVect trampoline -> puRam10115374 */
int FUN_10000a98() { return 0; }

/* addr=100012c0 size=24  TVect trampoline -> puRam10115334 */
int StringLength() { return 0; }

/* addr=10001338 size=24  TVect trampoline -> puRam10115530 */
int FUN_10001338() { return 0; }

/* addr=100014a0 size=24  TVect trampoline -> puRam1011568c */
int FUN_100014a0() { return 0; }

/* addr=10001728 size=24  TVect trampoline -> puRam10115834 */
int GetResource_Thunk() { return 0; }

/* addr=10001ad0 size=24  TVect trampoline -> puRam101157a0 */
int FUN_10001ad0() { return 0; }

/* addr=10001b00 size=24  TVect trampoline -> puRam101155ec */
int FUN_10001b00() { return 0; }

/* addr=10001b30 size=24  TVect trampoline -> puRam10115488 */
int FUN_10001b30() { return 0; }

/* addr=10001b60 size=24  TVect trampoline -> puRam1011557c */
int FUN_10001b60() { return 0; }

/* addr=10001d28 size=24  TVect trampoline -> puRam10115358 */
int FUN_10001d28() { return 0; }

/* addr=100021c0 size=24  TVect trampoline -> puRam10115790 */
int SetForeColor_Thunk() { return 0; }

/* addr=10002358 size=24  TVect trampoline -> puRam101155c4 */
int FUN_10002358() { return 0; }

/* addr=10002598 size=24  TVect trampoline -> puRam10115538 (HLock) */
void DetachResource(void *param_1) { (void)param_1; }

/* addr=100025b0 size=24  TVect trampoline -> puRam10115560 */
int FUN_100025b0() { return 0; }

/* addr=100026d0 size=24  TVect trampoline -> puRam101157ec */
int FUN_100026d0() { return 0; }

/* addr=10002d48 size=24  TVect trampoline -> puRam101157f0 */
int FUN_10002d48() { return 0; }

/* addr=10002d60 size=24  TVect trampoline -> puRam101155c8 */
int FUN_10002d60() { return 0; }

/* addr=10002eb0 size=24  TVect trampoline -> puRam101157f4 */
int FUN_10002eb0() { return 0; }

/* addr=100032b8 size=24  TVect trampoline -> puRam10115638 */
int FUN_100032b8() { return 0; }

/* addr=10003930 size=24  TVect trampoline -> puRam101157a4 */
int FUN_10003930() { return 0; }


/* ===================================================================
 * Game Logic Functions
 * =================================================================== */

/*
 * addr=10007dd4 size=60
 * Main display/render pipeline: processes map tiles, sprites, fog, and UI.
 * Calls sub-renderers sequentially.
 */
void FUN_10007dd4(void)
{
    /* Process map tile rendering */
    FUN_10004c54();

    /* Render sprites if sound/display is enabled (checks a global flag) */
    /* Original: if (*ppuVar1[-0x542] != '\0') - checks a global boolean */
    /* In modern build, skip the conditional and always call */
    FUN_10005b68();

    /* Main game display update */
    DrawFullMapView();

    /* UI overlay / scroll region update */
    FUN_10007c50();
}

/*
 * addr=10007e10 size=360
 * Compute visibility/adjacency bitmask for 8 neighbors of tile (param_1, param_2).
 * param_3 is a shift base for out-of-bounds tiles.
 * Returns a 16-bit bitmask with one bit per neighbor direction.
 */
unsigned short FUN_10007e10(short param_1, short param_2, short param_3)
{
    /* Map bounds: 0x70 = 112 wide, 0x9c = 156 tall */
    /* This function accesses piRam10117354 (fog/visibility map), direction
       offset tables at iRam10115cd0/iRam10115ccc, and psRam10115ff8 flag.
       In the modern build, return 0 (fully visible). */
    (void)param_1;
    (void)param_2;
    (void)param_3;
    return 0;
}

/*
 * addr=10008f70 size=384
 * Update fog-of-war visibility map for the current player.
 * Iterates over all map tiles (0x70 x 0x9c) and sets visibility bits
 * based on the current player index.
 */
void FUN_10008f70(void)
{
    /* This function accesses piRam10117354 (visibility data),
       piRam10115cf0 (handle), piRam1011735c (game state).
       It iterates 0x9c rows x 0x70 columns, setting visibility bits.
       Complex bit manipulation on tile data.
       In the modern build: no-op (fog of war not critical for compilation). */
}

/*
 * addr=1000a884 size=212
 * Calculate approximate distance between two map coordinates.
 * Uses abs(dx) and abs(dy) with a lookup table for distance categories.
 * Returns a distance metric (10000 if very close, otherwise computed).
 */
short FUN_1000a884(short param_1, short param_2, short param_3, short param_4)
{
    int dx, dy;

    dx = AbsShort((int)param_1 - (int)param_3);
    dy = AbsShort((int)param_2 - (int)param_4);

    /* Simplified distance: Manhattan-like metric */
    /* Original uses floating-point comparison with a table lookup.
       Approximate with simple integer distance. */
    if (dx * dx + dy * dy < 4) {
        return 10000;  /* very close */
    }
    return (short)(dx + dy);
}

/*
 * addr=1000c724 size=144
 * Allocate per-player data arrays (8 players x 0x42c bytes each).
 * If param_1 is nonzero, also calls FUN_1000c67c to initialize them.
 */
void FUN_1000c724(short param_1)
{
    int i;

    for (i = 7; i >= 0; i--) {
        int ptr = FUN_100f15e0(0x42c);
        if (ptr == 0) {
            FocusObject(0);
        }
    }
    if (param_1 != 0) {
        FUN_1000c67c();
    }
}

/*
 * addr=1000c7b4 size=144
 * Allocate or refresh a shared game data buffer (0x4b0 bytes).
 * Locks the handle and copies the base pointer to a global.
 */
void FlushCityCache(void)
{
    /* Allocates 0x4b0 bytes if not already allocated,
       locks the handle and copies base pointer.
       In modern build: no-op (handled by memory system). */
}

/*
 * addr=1000c844 size=388
 * Reset army states at start of turn for the current player.
 * Iterates all armies owned by current player and updates their
 * state bytes and flags based on game turn number and settings.
 */
void FUN_1000c844(void)
{
    int iVar3;
    short sVar2, sVar6;
    char cVar1;

    iVar3 = *gGameState;

    /* Store allied victory state for current player */
    /* *(undefined2 *)(current_player * 2 + iRam10117474) = ext->allied_victory_check */

    sVar2 = *(short *)(iVar3 + 0x1602);  /* army_count */
    while (sVar2 != 0) {
        sVar2 = sVar2 - 1;

        /* Check if this army belongs to current player */
        if ((int)*(char *)(iVar3 + sVar2 * 0x42 + 0x1619) !=
            (int)*(short *)(iVar3 + 0x110)) {
            continue;
        }

        /* Check army state and update based on turn number */
        cVar1 = *(char *)(*gExtState + (int)sVar2 + 0x56);
        if (cVar1 == '\r' || cVar1 == '\v') {
            sVar6 = *(short *)(iVar3 + 0x136);  /* current_turn */
            if (sVar6 < 2) sVar6 = 1;

            if (sVar6 < 5) {
                *(char *)(*gExtState + (int)sVar2 + 0x56) = 4;
            } else {
                *(char *)(*gExtState + (int)sVar2 + 0x56) = 8;
            }
        }

        /* Check city defense and vectoring settings */
        iVar3 = *gGameState;
        if (*(short *)(iVar3 + 0x128) != 0 && *(short *)(iVar3 + 0x124) != 0) {
            sVar6 = *(short *)(iVar3 + 0x136);
            if (sVar6 < 2) sVar6 = 1;

            if (sVar6 == 1) {
                *(char *)(*gExtState + (int)sVar2 + 0x56) = 0x0d;
            } else {
                sVar6 = *(short *)(*gGameState + 0x136);
                if (sVar6 < 2) sVar6 = 1;
                if (sVar6 < 3) {
                    *(char *)(*gExtState + (int)sVar2 + 0x56) = 0x0b;
                }
            }
        }

        /* Clear engaged flag (bit 2) */
        *(unsigned char *)(*gExtState + (int)sVar2 + 0x11e) &= 0xfb;

        iVar3 = *gGameState;
    }
}

/*
 * addr=1000d1a4 size=324
 * AI: Attempt to hire a hero if treasury allows (>399 gold).
 * Rolls random, finds a suitable city, tries to create a hero unit.
 */
void FUN_1000d1a4(void)
{
    int iVar5;
    short local_20, local_1e;
    char auStack_1c[2], auStack_1a[2];
    char auStack_18[24];

    if (*(short *)(*gExtState + 0xe) == 0) return;

    if (*(short *)(*gGameState + *(short *)(*gGameState + 0x110) * 0x14 + 0x186) > 399) {
        iVar5 = RandomRange(1, 10, 0);
        long long uVar3 = ScoreUnitForHire(7 < iVar5);
        *(short *)(*gExtState + 0x10) = (short)uVar3;

        if ((int)uVar3 != -1) {
            CreateUnitTemplate(uVar3, auStack_1c, &local_1e, auStack_1a, &local_20, auStack_18);
            if (local_1e > 2 &&
                local_20 + 100 <= (int)*(short *)(*gGameState +
                    *(short *)(*gGameState + 0x110) * 0x14 + 0x186)) {
                long long uVar4 = FUN_1000cf78(uVar3);
                if ((int)uVar4 != -1) {
                    FUN_1000d0c0(uVar3, uVar4);
                }
            }
        }
    }
}

/*
 * addr=1000d384 size=360
 * AI turn processing: iterate through armies owned by current player,
 * clear orders, attempt pathfinding, handle gold shortage logic.
 */
int FUN_1000d384(void)
{
    short sVar1;
    int iVar2;
    int iVar12;
    unsigned int uVar11;

    FUN_1000fac4();

    if (*(short *)(*gGameState + 0x124) != 0) {
        FUN_1001ab94();
    }

    int iVar8 = *gGameState;
    sVar1 = *(short *)(iVar8 + 0x1602);

    while (1) {
        /* Find next army belonging to current player */
        do {
            do {
                if (sVar1 == 0) {
                    return iVar8;
                }
                sVar1 = sVar1 - 1;
                iVar12 = (int)sVar1;
                iVar2 = *gGameState + iVar12 * 0x42;
            } while (*(char *)(iVar2 + 0x1619) != (char)*(short *)(*gGameState + 0x110));

            /* Clear orders */
            *(short *)(iVar2 + 0x1636) = 0;
            *(short *)(*gGameState + iVar12 * 0x42 + 0x1638) = -1;
            *(short *)(*gGameState + iVar12 * 0x42 + 0x163a) = -1;
            iVar8 = CheckArmyEscort(iVar12);
        } while (iVar8 != 0);

        /* Check gold situation */
        int cp = (int)*(short *)(*gGameState + 0x110);
        if (*(short *)(*gGameState + cp * 0x14 + 0x186) < 0x28) {
            int idx = cp * 2;
            if (*(short *)(idx + (pint)gPlayerTreasury) <
                *(short *)(idx + (pint)gPlayerIncome)) {
                break;
            }
        }

        /* Check army state for dispatch table */
        uVar11 = (unsigned int)*(unsigned char *)(*gExtState + (int)sVar1 + 0x56) - 2;
        if (uVar11 < 0xc) {
            /* Return dispatch table entry */
            return 0;
        }
        iVar8 = FUN_1001e794(iVar12, 3, -1, 0);
    }
    return 0;
}

/*
 * addr=1000d6a0 size=284
 * Process garrison armies: for each city with a garrison, set
 * the garrison army state to guarding, and merge production slot
 * armies with the garrison.
 */
void FUN_1000d6a0(void)
{
    short sVar2, sVar3, sVar4;
    int iVar7, iVar8;
    int i;

    if (*(short *)(*gExtState + 0x24a) == 0) return;

    sVar2 = *(short *)(*gExtState + 0x24a);
    do {
        sVar2 = sVar2 - 1;
        iVar8 = *gExtState;
        iVar7 = iVar8 + sVar2 * 0x5c;

        if (*(short *)(iVar7 + 0x24c) != 0) {
            sVar3 = *(short *)(iVar7 + 0x250);
            if (sVar3 != -1 &&
                (int)*(char *)(*gGameState + sVar3 * 0x42 + 0x1619) ==
                (int)*(short *)(*gGameState + 0x110)) {
                /* Set garrison army to guarding state */
                *(char *)(sVar3 + iVar8 + 0x56) = 7;

                /* Process production slot armies */
                for (i = 3; i >= 0; i--) {
                    iVar7 = *gExtState;
                    sVar4 = *(short *)(iVar7 + sVar2 * 0x5c + i * 2 + 0x252);
                    if (sVar4 != -1 && *(char *)(iVar7 + sVar4 + 0x56) == '\x06') {
                        FUN_1001e564(sVar4, (int)sVar3);
                    }
                }
            }
        }
    } while (sVar2 != 0);
}

/*
 * addr=1000e938 size=324
 * Find the best army cluster for a given player.
 * Searches all armies owned by param_1, counts nearby friendly armies,
 * and returns the index of the army with the most neighbors.
 */
int FUN_1000e938(short param_1)
{
    short sVar3;
    int iVar7 = -1;
    short sVar8 = 0;
    unsigned char abStack_28[8];
    char auStack_30[8];

    if (*(short *)(*gGameState + 0x1602) == 0) {
        return -1;
    }

    sVar3 = *(short *)(*gGameState + 0x1602);
    while (sVar3 != 0) {
        sVar3 = sVar3 - 1;
        int iVar9 = (int)sVar3;

        if ((int)*(char *)(*gGameState + iVar9 * 0x42 + 0x1619) == (int)param_1) {
            GetAdjacentArmies(iVar9, 0, abStack_28, auStack_30);
            short sVar6 = 1;

            for (int i = 5; i >= 0; i--) {
                unsigned char bVar2 = abStack_28[i];
                if (bVar2 != 0xff &&
                    (int)*(char *)(*gGameState + (unsigned int)bVar2 * 0x42 + 0x1619) ==
                    (int)param_1) {
                    sVar6 = sVar6 + 1;
                }
            }

            if (sVar8 < sVar6 ||
                (sVar6 == sVar8 && RandomRange(1, 2, 0) != 0)) {
                sVar8 = sVar6;
                iVar7 = iVar9;
            }
        }
    }
    return iVar7;
}

/*
 * addr=1000ea7c size=392
 * Build army adjacency/reachability graph for army param_1.
 * Uses breadth-first flood fill through adjacent armies.
 * Results stored in piRam1011747c buffer (visited, distance, processed).
 */
void FUN_1000ea7c(short param_1)
{
    /* This function does BFS over army adjacency.
       It initializes three parallel arrays (visited, distance, processed)
       at offsets 0, 200, 400 from *piRam1011747c, then iteratively
       expands reachable armies until no more are found.
       In modern build: no-op (AI pathfinding). */
    (void)param_1;
}

/*
 * addr=1000ec04 size=304
 * Find up to 6 nearest armies of a given player that are reachable.
 * Uses the adjacency data from FUN_1000ea7c.
 * Returns count of armies found; fills param_3[] with army indices
 * and param_4[] with distances.
 */
int FUN_1000ec04(short param_1, short param_2, short *param_3, short *param_4)
{
    /* Searches reachable armies from piRam1011747c data,
       finds nearest unmoved armies belonging to param_2 player.
       Returns count in lower 32 bits. */
    (void)param_1;
    (void)param_2;
    if (param_3) *param_3 = -1;
    if (param_4) *param_4 = 0;
    return 0;
}

/*
 * addr=1000f410 size=656
 * AI: Create a new city production plan.
 * Finds an empty production slot, determines what to build,
 * assigns armies to the plan, and starts production.
 */
void EndOfTurnCleanup(void)
{
    /* Complex AI production planning.
       Checks if production is needed (active cities vs slots),
       finds empty slots, calls ActivateAttackEvent to init,
       FindPrimaryThreat/FUN_1000ed34 for unit selection,
       sets up production queue.
       In modern build: no-op (AI logic). */
}

/*
 * addr=100114d4 size=188
 * Process all armies of current player that haven't been engaged (bit 2 clear).
 * Calls FUN_10010b30 for each qualifying army.
 */
void FUN_100114d4(void)
{
    short sVar1;

    if (*(short *)(*gGameState + 0x1602) == 0) return;

    sVar1 = *(short *)(*gGameState + 0x1602);
    do {
        sVar1 = sVar1 - 1;
        if (*(char *)(*gGameState + sVar1 * 0x42 + 0x1619) ==
            (char)*(short *)(*gGameState + 0x110) &&
            (*(unsigned char *)(*gExtState + (int)sVar1 + 0x11e) & 4) == 0) {
            FUN_10010b30((int)sVar1, 0);
        }
    } while (sVar1 != 0);
}

/*
 * addr=10011804 size=2548
 * AI diplomacy evaluation: analyzes military balance between all players,
 * sets diplomacy flags (war/peace/alliance), handles fog-of-war diplomacy.
 * Very large function with multiple loops over all 8 player slots.
 */
void FUN_10011804(void)
{
    /* This is the largest function in this batch.
       It calls FUN_10011590 for initial analysis,
       then iterates through all players evaluating:
       - Army counts per player (total, unmoved, border)
       - Military balance comparisons
       - Alliance/war state changes in diplomacy table
       - Allied victory conditions
       - Fog-of-war diplomacy adjustments

       In the modern build: no-op (AI diplomacy not needed for compilation). */
}

/*
 * addr=10013040 size=272
 * AI: process armies in specific states (matching a state table).
 * For each army of current player in a matching state with 3+ moves,
 * calls FUN_10012cc8 to handle combat/movement decisions.
 */
void FUN_10013040(void)
{
    /* Checks if AI mode is off (ext->ai_mode_flag == 0),
       iterates armies, checks state against psRam10115d34 table,
       calls FUN_10012cc8 for qualifying armies.
       In modern build: no-op (AI combat logic). */
}

/*
 * addr=10013484 size=752
 * AI: Process unit type table to find producible units and dispatch them.
 * Iterates unit type definitions, evaluates their capabilities and
 * movement categories, dispatches naval/ground/hero units appropriately.
 */
int FUN_10013484(void)
{
    /* Complex AI unit dispatch logic.
       Iterates unit types, calls GetNextDefender,
       evaluates movement categories, dispatches units.
       Returns 1 on completion. */
    return 1;
}

/*
 * addr=10013774 size=668
 * AI: Assign production orders to unit types.
 * Two-pass: first process hero units (type 0x1c), then regular units.
 * Checks unit class validity and capacity limits.
 */
void FUN_10013774(void)
{
    /* Two-phase production assignment loop.
       Phase 0: hero units (type == 0x1c)
       Phase 1: regular units
       Calls AssignToDefense for assignment,
       tracks ground/special unit counts.
       In modern build: no-op. */
}

/*
 * addr=10014214 size=420
 * AI: Process hero quest units that have the 'quest pending' flag (bit 8).
 * For hero units, attempts pathfinding to quest targets.
 */
void FUN_10014214(void)
{
    /* Iterates unit types belonging to current player with
       quest flag set (bit 0x100). For hero types (0x1c),
       repeatedly calls FindPath and FUN_10013d0c
       until the quest is resolved or the hero is too weak.
       In modern build: no-op. */
}

/*
 * addr=1001497c size=592
 * AI: Process units that are at full health and not assigned.
 * Checks unit movement category and dispatches idle units to
 * FUN_100145c8 for assignment.
 */
void FUN_1001497c(void)
{
    /* Iterates all unit types owned by current player.
       For units at full health on non-city terrain,
       checks if they're tracking an army that's been destroyed,
       clears stale references, and dispatches idle units.
       In modern build: no-op. */
}

/*
 * addr=10014bcc size=328
 * AI: Reset and re-dispatch all units that are healthy and unassigned.
 * Clears movement category and destination, then calls FUN_100145c8.
 */
void FUN_10014bcc(void)
{
    /* Similar to FUN_1001497c but clears flags first.
       For each unit type owned by current player with
       health >= defense+2 on non-city terrain:
       clears assignment flags and re-dispatches.
       In modern build: no-op. */
}

/*
 * addr=10014d14 size=304
 * AI: Process naval units (armies with port flag set, bit 0x20)
 * that aren't garrisoned. Attempts naval pathfinding and
 * hero transport operations.
 */
void FUN_10014d14(void)
{
    /* Iterates armies of current player.
       For armies with port flag (0x20) that aren't garrisoned:
       calls FindPath for pathfinding,
       FUN_10013d0c for hero dispatch,
       CheckArmyEscort for movement.
       Sets army state to 0x0d on failure.
       In modern build: no-op. */
}

/*
 * addr=100164e4 size=1148
 * AI: Main hero unit processing loop.
 * Handles hero questing, exploration, and army assignment.
 * Called during the AI's turn to manage all hero-type units.
 */
void FUN_100164e4(void)
{
    /* Very large function managing AI hero behavior.
       Calls FUN_10014e44 to build hero table,
       then for each hero: FUN_100151e8, FUN_10010b30,
       FUN_10015324 for quest checks,
       FUN_10015030/FUN_10015554 for site exploration,
       FUN_100159c8/FUN_10015dc8/FUN_10015f98/FUN_100161fc
       for movement decisions.
       In modern build: no-op. */
}

/*
 * addr=1001aa9c size=248
 * AI: Validate army tracking assignments.
 * Counts how many units are tracking each army and calls
 * ProcessSingleAssignment to rebalance if needed.
 */
void FUN_1001aa9c(void)
{
    int iVar5;
    short sVar6;
    char acStack_70[112];  /* tracking count per army, max 100 */

    /* Zero out tracking counts */
    for (iVar5 = 99; iVar5 >= 0; iVar5--) {
        acStack_70[iVar5] = 0;
    }

    /* Count units tracking each army */
    sVar6 = *(short *)(*gGameState + 0x182);
    if (sVar6 != 0) {
        do {
            sVar6 = sVar6 - 1;
            int iVar7 = *gUnitTypeTable + sVar6 * 0x16;
            if ((int)*(char *)(iVar7 + 5) == (int)*(short *)(*gGameState + 0x110)) {
                unsigned int uVar2 = *(unsigned int *)(iVar7 + 0xc);
                if ((uVar2 >> 0xc & 0xf) == 1) {
                    unsigned int idx = uVar2 & 0x7f;
                    if (idx < (unsigned int)(int)*(short *)(*gGameState + 0x1602)) {
                        acStack_70[idx] = acStack_70[idx] + 1;
                    }
                }
            }
        } while (sVar6 != 0);
    }

    /* Rebalance */
    sVar6 = 0;
    do {
        iVar5 = ProcessSingleAssignment(sVar6, acStack_70);
        if (iVar5 == 0) {
            return;
        }
        sVar6 = sVar6 + 1;
    } while (sVar6 < 10);
}

/*
 * addr=1001d014 size=328
 * AI: Update city production and garrison states at start of turn.
 * Calls FUN_1001fcc0 for unit capability analysis,
 * transitions garrisoned armies from state 7->8,
 * and processes city production via AdvanceGroupToTarget.
 */
void FUN_1001d014(void)
{
    short sVar4;
    int iVar3, iVar5;

    if (*(short *)*gExtState == 0) return;

    FUN_1001fcc0();

    /* Transition garrison armies: state 7 -> 8 (searching) */
    sVar4 = *(short *)(*gGameState + 0x1602);
    while (sVar4 != 0) {
        sVar4 = sVar4 - 1;
        iVar5 = *gGameState;
        if ((int)*(char *)(iVar5 + sVar4 * 0x42 + 0x1619) ==
            (int)*(short *)(iVar5 + 0x110) &&
            *(char *)(*gExtState + (int)sVar4 + 0x56) == '\a') {
            *(char *)(*gExtState + (int)sVar4 + 0x56) = 8;
        }
    }

    /* Process city production */
    if (*(short *)(*gExtState + 0x24a) != 0) {
        iVar5 = 0;
        if (0 < *(short *)(*gExtState + 0x24a)) {
            do {
                iVar3 = *gExtState + iVar5 * 0x5c;
                if (*(short *)(iVar3 + 0x24c) != 0) {
                    /* Set garrison army to guarding */
                    *(char *)((int)*(short *)(iVar3 + 0x250) + *gExtState + 0x56) = 7;
                    iVar3 = AdvanceGroupToTarget(iVar5);
                    if (iVar3 != 0) {
                        iVar3 = iVar5 * 0x5c + *gExtState;
                        *(short *)(iVar3 + 0x24c) = *(short *)(iVar3 + 0x24c) + 1;
                    }
                }
                sVar4 = (short)iVar5 + 1;
                iVar5 = (int)sVar4;
            } while (sVar4 < *(short *)(*gExtState + 0x24a));
        }
    }
}

/*
 * addr=1001f9e4 size=732
 * AI: Initialize army states and counts for a given player at turn start.
 * Categorizes all armies into own/enemy/neutral and sets initial states.
 * Calls FUN_1001f758 and FUN_1001f958 for preprocessing.
 */
void FUN_1001f9e4(short param_1)
{
    short sVar1;
    int iVar6;

    FUN_1001f758();
    FUN_1001f958();

    /* Reset army counters */
    *(short *)(*gExtState + 8) = 0;
    *(short *)(*gExtState + 6) = 0;
    *(short *)(*gExtState + 4) = 0;
    *(short *)(*gExtState + 2) = 0;

    sVar1 = *(short *)(*gGameState + 0x1602);
    while (sVar1 != 0) {
        sVar1 = sVar1 - 1;

        iVar6 = *gGameState + (sVar1 * 0x21) * 2;

        /* Simplified: categorize armies as own/enemy/neutral */
        if ((int)*(char *)(iVar6 + 0x1619) == (int)param_1) {
            *(short *)(*gExtState + 2) = *(short *)(*gExtState + 2) + 1;
            *(char *)(*gExtState + (int)sVar1 + 0xba) += 1;
            if (*(char *)((int)sVar1 + *gExtState + 0x56) == '\0') {
                *(char *)((int)sVar1 + *gExtState + 0x56) = 1;
            }
        } else {
            *(char *)(*gExtState + (int)sVar1 + 0x56) = 0;
            *(char *)((int)sVar1 + *gExtState + 0xba) = 0;

            if (*(char *)(iVar6 + 0x1619) == '\x0f') {
                *(short *)(*gExtState + 6) = *(short *)(*gExtState + 6) + 1;
            } else {
                *(short *)(*gExtState + 4) = *(short *)(*gExtState + 4) + 1;
            }
        }
    }

    /* Post-process: transition armies in state 1 to state 3 or 5 */
    if (*(short *)(*gExtState + 2) != 0) {
        sVar1 = *(short *)(*gGameState + 0x1602);
        while (sVar1 != 0) {
            sVar1 = sVar1 - 1;
            if (*(char *)(*gExtState + (int)sVar1 + 0x56) == '\x01') {
                iVar6 = GetNeighborArmies((int)sVar1, 0, 0);
                if (iVar6 == 0) {
                    *(char *)(*gExtState + (int)sVar1 + 0x56) = 5;
                } else {
                    *(char *)(*gExtState + (int)sVar1 + 0x56) = 3;
                }
            }
        }
        *(short *)*gExtState = *(short *)*gExtState + 1;
    }
}

/*
 * addr=10020ec4 size=208
 * AI: Post-process armies in state 2 (idle/waiting).
 * For each army in state 2, check if adjacent enemies are unmoved,
 * and transition to state 3 (attack) if so.
 */
void HeroSpecialActions(void)
{
    short sVar3;
    int iVar7;
    unsigned char abStack_18[24];

    FUN_1001f958();

    sVar3 = *(short *)(*gGameState + 0x1602);
    do {
        do {
            if (sVar3 == 0) return;
            sVar3 = sVar3 - 1;
        } while (*(char *)(*gExtState + (int)sVar3 + 0x56) != '\x02');

        GetNeighborArmies(sVar3, abStack_18, 0);

        for (iVar7 = 5; iVar7 >= 0; iVar7--) {
            unsigned char bVar2 = abStack_18[iVar7];
            if (bVar2 != 0xff &&
                (*(unsigned char *)((unsigned int)bVar2 + *gExtState + 0x11e) & 1) == 0) {
                *(char *)(*gExtState + sVar3 + 0x56) = 3;
                break;
            }
        }
    } while (1);
}

/*
 * addr=100226b0 size=36
 * Set rectangle fields: param_1[0]=top, [1]=left, [2]=bottom, [3]=right.
 * Simple 4-field initializer used throughout the codebase.
 */
void SetRect4(short *param_1, short param_2, short param_3, short param_4,
                  short param_5)
{
    param_1[0] = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
}

/*
 * addr=10027448 size=416
 * Update player scores based on diplomacy changes.
 * Compares diplomatic stance vs actual behavior and awards
 * score bonuses for breaking/making alliances.
 */
void FUN_10027448(void)
{
    short sVar1;
    int iVar8, iVar9;
    unsigned int uVar3, uVar4;

    sVar1 = *(short *)(*gGameState + 0x110);
    iVar9 = (int)sVar1;

    for (iVar8 = 0; iVar8 <= 7; iVar8++) {
        if (iVar8 == sVar1) continue;

        int iVar2 = *gGameState;
        uVar3 = *(unsigned int *)(iVar2 + iVar9 * 0x10 + iVar8 * 2 + 0x1582);
        uVar4 = (uVar3 >> 0x1a) & 3;
        uVar3 = (uVar3 >> 0x1c) & 3;

        if (uVar3 < uVar4) {
            int iVar5 = iVar9 * 2;
            if (uVar3 < (*(unsigned int *)(iVar8 * 0x10 + iVar2 + iVar5 + 0x1582) >> 0x1c & 3)) {
                if (uVar3 == 0) {
                    if (uVar4 == 1) {
                        short sVar7 = RandomRange(1, 2, 0);
                        *(short *)(*gGameState + iVar5 + 0x1122) =
                            *(short *)(iVar5 + iVar2 + 0x1122) + sVar7 + 1;
                    } else if ((*(unsigned int *)(iVar2 + iVar9 * 0x10 + iVar8 * 2 + 0x1582) >> 0x1a & 3) == 2) {
                        short sVar7 = RandomRange(1, 10, 0);
                        *(short *)(iVar9 * 2 + *gGameState + 0x1122) =
                            *(short *)(iVar2 + iVar9 * 2 + 0x1122) + sVar7 + 10;
                    }
                } else {
                    iVar2 = *gGameState;
                    uVar3 = *(unsigned int *)(iVar2 + iVar9 * 0x10 + iVar8 * 2 + 0x1582);
                    if (((uVar3 >> 0x1c & 3) == 1) && ((uVar3 >> 0x1a & 3) == 2)) {
                        short sVar7 = RandomRange(1, 2, 0);
                        *(short *)(iVar9 * 2 + *gGameState + 0x1122) =
                            *(short *)(iVar2 + iVar9 * 2 + 0x1122) + sVar7 + 1;
                    }
                }
            }
        }
    }
}

/*
 * addr=1002bcd8 size=236
 * Calculate gold income for all players.
 * Sums per-army upkeep costs, adds city income (via FUN_10039c58),
 * stores result in gPlayerTreasury[].
 */
void FUN_1002bcd8(void)
{
    char cVar1;
    int iVar2;
    int iVar6, iVar8;
    short sVar7;
    pint iVar5 = (pint)gPlayerTreasury;
    pint iVar4 = (pint)gPlayerIncome;

    /* Zero out treasury */
    for (iVar8 = 0; iVar8 < 8; iVar8++) {
        *(short *)(iVar8 * 2 + iVar5) = 0;
    }

    /* Sum army upkeep costs per owner */
    iVar8 = 0;
    if (0 < *(short *)(*gGameState + 0x1602)) {
        do {
            iVar6 = *gGameState + iVar8 * 0x42;
            cVar1 = *(char *)(iVar6 + 0x1619);
            if (cVar1 < 8) {
                iVar2 = cVar1 * 2;
                *(short *)(iVar2 + iVar5) =
                    *(short *)(iVar2 + iVar5) + *(short *)(iVar6 + 0x162e);
            }
            sVar7 = (short)iVar8 + 1;
            iVar8 = (int)sVar7;
        } while (sVar7 < *(short *)(*gGameState + 0x1602));
    }

    /* Add city income per player */
    for (iVar8 = 0; iVar8 < 8; iVar8++) {
        FUN_10039c58(iVar8);
        iVar6 = iVar8 * 2;
        *(short *)(iVar6 + iVar5) =
            *(short *)(iVar6 + iVar5) + *(short *)(iVar6 + iVar4);
    }
}

/*
 * addr=1002c85c size=140
 * Scroll map to center on the main game panel object.
 * Checks fog-of-war visibility before scrolling.
 */
void FUN_1002c85c(void)
{
    /* Accesses piRam101163ac (game panel),
       checks fog-of-war via FUN_10007e10,
       then calls FUN_10008284 to scroll.
       In modern build: no-op (UI). */
}

/*
 * addr=1002c8e8 size=68
 * Set map scroll position to given tile coordinates.
 * Thin wrapper around FUN_10082430.
 */
void FUN_1002c8e8(short param_1, short param_2)
{
    /* Original: FUN_10082430(*puRam101163ac, param_1, param_2);
       In modern build: no-op (UI scroll). */
    (void)param_1;
    (void)param_2;
}

/*
 * addr=1003d4dc size=244
 * Advance to the next player's turn.
 * Handles end-of-round processing (turn increment, map refresh,
 * resource calculation) and finds the next alive player.
 */
void FUN_1003d4dc(void)
{
    int iVar1;
    int bVar2 = 0;

    do {
        iVar1 = *gGameState;

        /* Check if end of round (all players processed) */
        if (*(short *)(iVar1 + 0x118) != 0) {
            *(short *)(iVar1 + 0x136) = *(short *)(iVar1 + 0x136) + 1;  /* increment turn */
            FUN_1003c838();
            *(short *)(*gGameState + 0x118) = 0;
            FUN_1003cb84();
            FUN_1003d094();
            FUN_10025f94();
            FUN_1002ce38();
            SaveTurnState();
            FUN_10064850(1, 0);
        }

        /* Set current player to next in order */
        iVar1 = *gGameState;
        *(short *)(iVar1 + 0x110) =
            *(short *)(iVar1 + *(short *)(iVar1 + 0x174) * 2 + 0x164);
        *(short *)(*gGameState + 0x174) = *(short *)(*gGameState + 0x174) + 1;

        if (*(short *)(*gGameState + 0x174) > 7) {
            *(short *)(*gGameState + 0x118) = 1;
        }

        /* Check if this player is alive */
        if (*(short *)(*gGameState + *(short *)(*gGameState + 0x110) * 2 + 0x138) != 0) {
            bVar2 = 1;
        }
    } while (!bVar2);
}

/* FUN_1003dc28 and FUN_1003fe04 moved to reconstructed_2.c */

/*
 * addr=1005f50c size=364
 * Load and process a string resource (text/dialogue).
 * param_1 = resource category, param_2 = string index, param_3 = variant.
 * Returns pointer to the formatted string buffer.
 */
/* FUN_1005f50c moved to reconstructed_batch_b.c */

/*
 * addr=10064850 size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=1004039c size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=10047a64 size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=1004e384 size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=10082260 size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=10082f24 size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=10091338 size=varies
 * Stub - defined elsewhere, kept as-is.
 */

/*
 * addr=100929a0 size=varies
 * Stub - defined elsewhere, kept as-is.
 */
