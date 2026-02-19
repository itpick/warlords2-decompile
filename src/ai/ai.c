/*
 * ai.c - Warlords II AI Decision System
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 *
 * The AI is a multi-phase sequential decision system executed once per
 * AI player per turn. It operates through ~14 phases dispatched via
 * the game's MacApp-style message system (command IDs 0x3FE - 0x40B).
 *
 * Two central data structures drive all decisions:
 *   - GameState (gGameState): map, armies, cities, diplomacy
 *   - ExtState  (gExtState):  per-army AI variables, group assignments
 */

#include "warlords2.h"
#include "wl2_functions.h"

/* Cast macros: convert raw pint handle to typed struct pointer.
 * On PPC32, *gGameState is an int holding the base address.
 * These macros cast that address to the appropriate struct pointer. */
#define GS  ((GameState *)(*gGameState))
#define ES  ((ExtState *)(*gExtState))

/* ===== External references used by AI but defined elsewhere ===== */

/* Cross-file functions used by AI */
extern int   CalcArmyStrength(short armyIdx);       /* CalcArmyStrength in combat.c - actually DetermineIdealCombatSize */
extern int   AI_SelectUnitsForArmy(short armyIdx, short unitCount, int unitBuf, int outputBuf);
extern void  RefreshMapAfterCombat(short x, short y); /* RefreshMapAfterCombat in combat.c */

/* Progress bar / event loop */
extern void  UpdateProgressBar(short progress);     /* UpdateProgressBar */
extern void  YieldToEventLoop(void);                /* YieldToEventLoop */
extern void  DispatchNextPhase(long appObj, short cmd); /* DispatchNextPhase */

/* Unit management */
extern void  GetUnitStats(unsigned char typeId, char *buffer); /* GetUnitStats */
extern void  LockUnitData(void);                    /* LockUnitData */
extern void  UnlockUnitData(void);                  /* UnlockUnitData */
extern void  DisbandUnit(short unitIdx, short mode); /* DisbandUnit */
extern void  SortArmyUnits(short armyIdx);          /* SortArmyUnits */
extern void  FilterEnemyUnits(short *unitList);     /* FilterEnemyUnits */
extern void  ReleaseUnits(short *unitList, short mode); /* ReleaseUnits */

/* Pathfinding / movement */
extern int   FindPath(short x, short y, char *pathBuf,
                      short terrainBonus, short orderType, short flags); /* FindPath */
extern int   FindUnitsInRange(short x, short y, short *outList, short range); /* FindUnitsInRange */
extern int   EvaluatePosition(short x, short y);    /* EvaluatePosition */
extern int   IsPositionReachable(short x, short y); /* IsPositionReachable */
extern void  MoveArmyToTarget(short *unitList, short orderType,
                               long targetIdx, short flags); /* MoveArmyToTarget */
extern void  MoveUnitToTarget(int unitPtr, short mode, long targetIdx); /* MoveUnitToTarget */
extern int   ExecuteArmyMove(short x, short y, short flags); /* ExecuteArmyMove */
extern int   GetArmyInfo(short armyIdx, short *outBuf); /* GetArmyInfo */
extern int   GetNeighborArmies(short armyIdx, unsigned char *neighbors,
                                unsigned char *extra); /* GetNeighborArmies */
extern void  GetAdjacentArmies(long armyIdx, short mode,
                                unsigned char *neighbors,
                                unsigned char *extra); /* GetAdjacentArmies */
extern int   FindNearestEnemy(short x, short y, long filterPlayer); /* FindNearestEnemy */
extern short FindPrimaryThreat(short mode);          /* FindPrimaryThreat */
extern int   AdvanceGroupToTarget(int groupIdx);     /* AdvanceGroupToTarget */
extern short FindBestTarget(short armyIdx, short *outCoords,
                             char *buf, long influenceMap,
                             short extended);          /* FindBestTarget */
extern short ScoreUnitForHire(short isExpensive);    /* ScoreUnitForHire */
extern void  HeroSpecialActions(void);               /* HeroSpecialActions */
extern void  EndOfTurnCleanup(void);                 /* EndOfTurnCleanup -> HandleSiege */
extern int   CanArmyEnterCity(long armyIdx, short mode); /* CanArmyEnterCity */

/* UI / map */
extern short LookupCityAtPos(short x, short y);     /* LookupCityAtPos */
extern short LookupRuinAtPos(short x, short y);     /* LookupRuinAtPos */
extern void  CenterMapOnArmy(short playerIdx);       /* CenterMapOnArmy */
extern void  RefreshDisplay(short a, short b, short c); /* RefreshDisplay */
extern void  SetupInfluenceMap(short range, short x, short y,
                                short a, short b);   /* SetupInfluenceMap */
extern long  AllocInfluenceMap(void);                /* AllocInfluenceMap */
extern void  FreeInfluenceMap(void);                 /* FreeInfluenceMap */
extern void  PrepareUnitDisplay(void);               /* PrepareUnitDisplay */
extern int   GetNextDefender(void);                  /* GetNextDefender */
extern void  PrepareDefender(int unitPtr);           /* PrepareDefender */

/* Quest / alliance */
extern void  LaunchAllianceAttack(long armyIdx, short mode); /* LaunchAllianceAttack */
extern void  LaunchAllianceDefense(long armyIdx);    /* LaunchAllianceDefense */
extern int   CheckQuestCondition(long unitIdx);      /* CheckQuestCondition */
extern long  ProcessQuestEvent(short type, short a, short b, short c); /* ProcessQuestEvent */
extern void  AssignToDefense(long unitIdx, long targetIdx); /* AssignToDefense */
extern int   ProcessSingleAssignment(short round, char *followerCount); /* ProcessSingleAssignment */
extern int   CheckArmyEscort(short armyIdx);         /* CheckArmyEscort */
extern void  ActivateAttackEvent(void);              /* ActivateAttackEvent */
extern int   CheckHeroQuest(int unitPtr);            /* CheckHeroQuest */
extern void  SetArmyDestination(short playerIdx, short x, short y); /* SetArmyDestination */
extern void  UpdateArmyDisplay(short playerIdx);     /* UpdateArmyDisplay */
extern void  SpawnNeutralArmy(long x, long y);       /* SpawnNeutralArmy */
extern void  ProcessQuestReward(short mode);         /* ProcessQuestReward */
extern void  ScanDefenseGrid(void);                  /* ScanDefenseGrid */

/* Unit creation */
extern long  CreateUnitTemplate(short typeId, char *a, short *b,
                                 char *c, short *d, char *e); /* CreateUnitTemplate */
extern long  FindArmySlot(short armyIdx);            /* FindArmySlot */
extern void  PlaceUnitInArmy(short armyIdx, long slot, long tmpl); /* PlaceUnitInArmy */

/* Global variables used in AI (some from other modules) */
/* iRam1011762c/iRam10117630 now aliased via #define in wl2_globals.h */
extern int   iRam10117474;     /* per-player threat data */
extern int   iRam10117488;     /* per-player idle army counts */
extern int   iRam1011748c;     /* per-player total army counts */
extern int   iRam10117490;     /* per-player territory counts */
extern short *psRam10117484;   /* primary threat player pointer */
extern int   iRam101176e8;     /* hero unit pointer array */
extern short *psRam101176e4;   /* hero count pointer */
extern int  *puRam101176e0;    /* selected unit pointer (piRam101176e0) */
/* psRam101176fc now aliased via #define in wl2_globals.h */
extern short *psRam10115d34;   /* valid army state list */
extern int   iRam10115ba4;     /* group function table base */
extern char  *pcRam101174d0;   /* quest unit list count */
extern int   iRam101174f0;     /* quest unit list base */
/* piRam10117354 now aliased via #define in wl2_globals.h */


/* ================================================================
 *  FORWARD DECLARATIONS
 * ================================================================ */

/* Dispatch chain (14 phases) */
static void AI_Phase_StrategicAndHero(void);         /* FUN_1000cafc [0x3FE] */
static void AI_Phase_CityDefense(void);              /* FUN_1000cb54 [0x3FF] */
static void AI_Phase_ArmyMovement(void);             /* FUN_1000cbb8 [0x400] */
static void AI_Phase_ExecuteAttacks(void);           /* FUN_1000cc08 [0x401] */
static void AI_Phase_SecondaryDefense(void);         /* FUN_1000cc58 [0x402] */
static void AI_Phase_GroupMovement(void);            /* FUN_1000cca8 [0x403] */
static void AI_Phase_Production(void);               /* FUN_1000ccf8 [0x404] */
static void AI_Phase_RemainingArmies(void);          /* FUN_1000cd54 [0x405] */
static void AI_Phase_ArmyOrders(void);               /* FUN_1000cda4 [0x406] */
static void AI_Phase_CleanupDefense(void);           /* FUN_1000cdf4 [0x407] */
static void AI_Phase_Finalize(void);                 /* FUN_1000ce44 [0x408] */
static void AI_Phase_HeroSpecial(void);              /* FUN_1000ce88 [0x409] */
static void AI_Phase_EndOfTurn(void);                /* FUN_1000ced8 [0x40A] */
static void AI_Phase_FinalPass(void);                /* FUN_1000cf28 [0x40B] */

/* Core AI functions */
void   AI_StrategicAssessment(void);                 /* FUN_10011804 */
void   AI_HeroManagementLoop(void);                  /* FUN_100164e4 */
void   AI_AssignCityDefenders(void);                 /* FUN_10013774 */
void   AI_PlanArmyMovements(void);                   /* FUN_10014214 */
void   AI_ExecuteAttackGroups(void);                 /* FUN_1001d014 */
void   AI_AssignRemainingArmies(void);               /* FUN_100114d4 */
void   AI_ProcessArmyOrders(void);                   /* FUN_1001aa9c */
void   AI_ProductionTurn(short playerIdx);           /* FUN_1001f9e4 */
int    AI_ProductionPlanning(void);                  /* FUN_1001fcc0 */
void   AI_Finalize(void);                            /* FUN_10013040 */
void   AI_FinalPass(void);                           /* FUN_10014d14 */

/* Hero management */
void   AI_SortHeroes(int param_1);                   /* FUN_10014e44 */
int    AI_CanReachCity(short cityIdx, short unitIdx); /* FUN_10015030 */
void   AI_AssembleHeroArmy(short unitIdx);           /* FUN_100151e8 */
int    AI_HandleAllianceQuest(short heroSlot, int dataArray); /* FUN_10015324 */
int    AI_AttackTarget(short heroSlot, short targetType,
                        int dataArray, short param4); /* FUN_10015554 */
void   AI_FindBestCityTarget(short heroSlot, int dataArray);  /* FUN_100159c8 */
void   AI_FindBestRuinTarget(short heroSlot, int dataArray);  /* FUN_10015dc8 */
void   AI_FindBestArmyTarget(short heroSlot, int dataArray);  /* FUN_10015f98 */
unsigned char AI_DecideTargetType(short heroSlot, int dataArray); /* FUN_100161fc */
int    AI_AttackEnemyArmy(short heroSlot, int dataArray);     /* FUN_10016344 */

/* Army management */
void   AI_ArmyManagement(short armyIdx, short mode); /* FUN_10010b30 */
void   AI_CullWeakUnits(short armyIdx, int unitPool); /* FUN_1001072c */

/* Helpers */
void   AI_ClaimNeutralArmies(void);                  /* FUN_10011590 */
int    AI_CheckAllianceThreats(short playerIdx);     /* FUN_10011734 */
short  AI_FindArmyForHero(short unitType);           /* FUN_1000cf78 */
void   AI_PlaceNewUnit(short unitType, short armyIdx); /* FUN_1000d0c0 */
void   AI_TryHireHero(void);                         /* FUN_1000d1a4 */
void   AI_ResetProductionState(void);                /* FUN_1001f758 */
void   AI_PrecomputeThreats(void);                   /* FUN_1001f958 */
void   AI_CheckArmyPathsBlocked(void);              /* FUN_1001ab94 */
int    AI_FindNearestFriendly(short x, short y, short filterPlayer); /* FUN_1001acdc */
void   AI_ActivateAttackGroup(short groupIdx);       /* FUN_1001ae14 */
void   AI_ActivateBestGroup(void);                   /* FUN_1001aea0 */
int    AI_FindBestMovableArmy(short param_1);        /* FUN_100143b8 */
void   AI_ProcessSingleUnit(short unitIdx);          /* FUN_100145c8 */
void   AI_GroupMovement(void);                       /* FUN_1001497c */
void   AI_SecondaryDefense(void);                    /* FUN_10013484 */
int    AI_CheckArmyOwnership(short armyIdx);         /* FUN_100121f8 */
int    AI_EarlyGameAttack(short armyIdx, short targetPlayer); /* FUN_10012324 */
int    AI_SearchForRuins(void);                      /* FUN_1001241c */
void   AI_AttackNeutralArmies(void);                 /* FUN_100126a4 */
void   AI_DispatchToTarget(short armyIdx);           /* FUN_10012cc8 */
int    AI_AttackCity(short unitIdx, short cityIdx);  /* FUN_10013a10 */
int    AI_ProcessCombatResult(short *pathBuffer);    /* FUN_10013d0c */
void   AI_ResetUnusedUnits(void);                    /* FUN_10014bcc */
int    AI_CheckRuinAccessible(short ruinIdx);        /* FUN_10015c48 */
long   AI_GetRuinSlotIndex(short cityIdx);           /* FUN_10015904 */
short  AI_GetRuinCapability(short cityIdx);          /* FUN_10015980 */
void   AI_CheckNearbyThreats(short armyIdx);         /* FUN_1001f894 */
int    AI_ProcessFollowOrders(int unitPtr);           /* FUN_10013150 */


/* ================================================================
 *  DISPATCH CHAIN (Command IDs 0x3FE - 0x40B)
 *
 *  Each phase calls its AI function, updates the progress bar,
 *  yields to the event loop, and dispatches the next phase.
 * ================================================================ */

/*
 * FUN_1000cafc [cmd 0x3FE] - Phase 1: Strategic Assessment + Hero Management
 */
static void AI_Phase_StrategicAndHero(void)
{
    AI_StrategicAssessment();
    AI_HeroManagementLoop();
    UpdateProgressBar(0x0F);
    YieldToEventLoop();
    /* dispatch next phase: 0x3FE -> triggers 0x3FF */
}

/*
 * FUN_1000cb54 [cmd 0x3FF] - Phase 2: City Defense (if vectoring enabled)
 */
static void AI_Phase_CityDefense(void)
{
    if (GS->vectoring_enabled != 0) {
        AI_AssignCityDefenders();
    }
    UpdateProgressBar(0x14);
    YieldToEventLoop();
}

/*
 * FUN_1000cbb8 [cmd 0x400] - Phase 3: Army Movement Planning
 */
static void AI_Phase_ArmyMovement(void)
{
    AI_PlanArmyMovements();
    UpdateProgressBar(0x19);
    YieldToEventLoop();
}

/*
 * FUN_1000cc08 [cmd 0x401] - Phase 4: Execute Attack Groups
 */
static void AI_Phase_ExecuteAttacks(void)
{
    AI_ExecuteAttackGroups();
    UpdateProgressBar(0x1E);
    YieldToEventLoop();
}

/*
 * FUN_1000cc58 [cmd 0x402] - Phase 5: Secondary Defense Pass
 */
static void AI_Phase_SecondaryDefense(void)
{
    AI_SecondaryDefense();
    UpdateProgressBar(0x28);
    YieldToEventLoop();
}

/*
 * FUN_1000cca8 [cmd 0x403] - Phase 6: Group Movement
 */
static void AI_Phase_GroupMovement(void)
{
    AI_GroupMovement();
    UpdateProgressBar(0x2D);
    YieldToEventLoop();
}

/*
 * FUN_1000ccf8 [cmd 0x404] - Phase 7: Production Decisions
 */
static void AI_Phase_Production(void)
{
    AI_ProductionTurn(GS->current_player);
    UpdateProgressBar(0x32);
    YieldToEventLoop();
}

/*
 * FUN_1000cd54 [cmd 0x405] - Phase 8: Remaining Army Assignment
 */
static void AI_Phase_RemainingArmies(void)
{
    AI_AssignRemainingArmies();
    UpdateProgressBar(0x37);
    YieldToEventLoop();
}

/*
 * FUN_1000cda4 [cmd 0x406] - Phase 9: Army Orders / Diplomacy
 */
static void AI_Phase_ArmyOrders(void)
{
    AI_ProcessArmyOrders();
    UpdateProgressBar(0x3C);
    YieldToEventLoop();
}

/*
 * FUN_1000cdf4 [cmd 0x407] - Phase 10: Cleanup Defense Pass
 */
static void AI_Phase_CleanupDefense(void)
{
    AI_SecondaryDefense();
    UpdateProgressBar(0x41);
    YieldToEventLoop();
}

/*
 * FUN_1000ce44 [cmd 0x408] - Phase 11: Finalize
 */
static void AI_Phase_Finalize(void)
{
    AI_Finalize();
    YieldToEventLoop();
}

/*
 * FUN_1000ce88 [cmd 0x409] - Phase 12: Hero Special Actions (if vectoring enabled)
 */
static void AI_Phase_HeroSpecial(void)
{
    if (GS->vectoring_enabled != 0) {
        HeroSpecialActions();
    }
}

/*
 * FUN_1000ced8 [cmd 0x40A] - Phase 13: End of Turn Cleanup
 */
static void AI_Phase_EndOfTurn(void)
{
    EndOfTurnCleanup();
    UpdateProgressBar(0x46);
    YieldToEventLoop();
}

/*
 * FUN_1000cf28 [cmd 0x40B] - Phase 14: Final Pass
 */
static void AI_Phase_FinalPass(void)
{
    AI_FinalPass();
    UpdateProgressBar(0x4B);
    YieldToEventLoop();
}


/* ================================================================
 *  AI_FindArmyForHero (FUN_1000cf78)
 *
 *  Finds the best army to place a newly hired hero unit into.
 *  Returns army index or -1 if none found.
 *  Criteria: owned by current player, doesn't already contain the
 *  given unit type, not in state 2, has no conflicting army info,
 *  and has highest priority (armyPriority).
 * ================================================================ */
short AI_FindArmyForHero(short unitType)
{
    int   *extState = gExtState;
    int   *gameState = gGameState;
    short  armyCount;
    short  bestArmy = -1;
    unsigned int bestPriority = 0xFFFFFFFF;
    short  i;
    int    armyBase;
    int    slot;
    Boolean hasType;
    unsigned char priority;
    char   unitBuf[32];

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0)
        return -1;

    for (i = armyCount - 1; i >= 0; i--) {
        armyBase = *gameState + i * 0x42;

        /* Must be owned by current player */
        if (*(char *)(armyBase + 0x1619) != (char)GS->current_player)
            continue;

        /* Must not already contain this unit type */
        hasType = false;
        for (slot = 3; slot >= 0; slot--) {
            if ((int)*(char *)(*gameState + i * 0x42 + 0x161A + slot) == (int)unitType) {
                hasType = true;
            }
        }
        if (hasType)
            continue;

        /* Must not be in state 2 (waiting for group) */
        if (*(char *)(*extState + (int)i + 0x56) == '\x02')
            continue;

        /* Must have no conflicting army info */
        if (GetArmyInfo(i, unitBuf) != 0)
            continue;

        /* Track highest priority */
        priority = *(unsigned char *)((int)i + *extState + 0xBA);
        if ((int)bestPriority < (int)(unsigned int)priority) {
            bestArmy = i;
            bestPriority = (unsigned int)priority;
        }
    }

    return bestArmy;
}


/* ================================================================
 *  AI_PlaceNewUnit (FUN_1000d0c0)
 *
 *  Creates a new unit of the given type and places it into the
 *  specified army. Sets army state to 5 (building up).
 * ================================================================ */
void AI_PlaceNewUnit(short unitType, short armyIdx)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    long tmpl, slot;
    char buf_a[2], buf_b[2], buf_c[2], buf_d[2];
    char buf_extra[24];

    tmpl = CreateUnitTemplate(unitType, buf_a, (short*)buf_b, buf_c, (short*)buf_d, buf_extra);
    LockUnitData();
    slot = FindArmySlot(armyIdx);
    PlaceUnitInArmy(armyIdx, slot, tmpl);
    SortArmyUnits(armyIdx);

    /* Increment internal counter */
    *(short *)(*extState + 0x16) = *(short *)(*extState + 0x16) + 1;

    /* Clear movement state */
    *(char *)(*gameState + armyIdx * 0x42 + 0x1631) = 0;
    *(short *)(armyIdx * 0x42 + *gameState + 0x1636) = 0;

    /* Set army state to 5 (building up) */
    *(char *)((int)armyIdx + *extState + 0x56) = 5;

    UnlockUnitData();
}


/* ================================================================
 *  AI_TryHireHero (FUN_1000d1a4)
 *
 *  Attempts to hire a hero unit. Requires:
 *  - Hero hiring enabled (extState + 0x0E != 0)
 *  - Player gold > 399
 *  - Random roll 1d10 > 7 (30% chance)
 *  - Unit strength > 2
 *  - Player can afford unit cost + 100 gold reserve
 *  - A valid army exists to place the hero
 * ================================================================ */
void AI_TryHireHero(void)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    short currentPlayer;
    short playerGold;
    int   roll;
    short heroType;
    short heroCost;
    short heroStrength;
    short targetArmy;
    char  buf_a[2], buf_c[2];
    short buf_b, buf_d;
    char  buf_extra[24];

    /* Check if hero hiring is enabled */
    if (*(short *)(*extState + 0x0E) == 0)
        return;

    currentPlayer = GS->current_player;
    playerGold = *(short *)(*gameState + currentPlayer * 0x14 + 0x186);

    if (playerGold <= 399)
        return;

    /* 30% chance to attempt hire */
    roll = RandomRange(1, 10, 0);
    heroType = ScoreUnitForHire(roll > 7);
    *(short *)(*extState + 0x10) = heroType;

    if ((int)heroType == -1)
        return;

    /* Get hero stats */
    CreateUnitTemplate(heroType, buf_a, &buf_b, buf_c, &buf_d, buf_extra);

    /* Hero must have strength > 2 */
    if (buf_b <= 2)
        return;

    /* Must be able to afford hero + 100 gold reserve */
    heroCost = buf_d;
    playerGold = *(short *)(*gameState + currentPlayer * 0x14 + 0x186);
    if (playerGold < heroCost + 100)
        return;

    /* Find valid army for hero placement */
    targetArmy = AI_FindArmyForHero(heroType);
    if ((int)targetArmy == -1)
        return;

    /* Place the hero */
    AI_PlaceNewUnit(heroType, targetArmy);
}


/* ================================================================
 *  AI_CullWeakUnits (FUN_1001072c)
 *
 *  When an army has too many units, removes the weakest ones.
 *  Threat level determines max army size. Heroes and flyers are
 *  protected from culling. Uses a scoring system that considers
 *  cost, movement, special abilities, and randomization.
 * ================================================================ */
void AI_CullWeakUnits(short armyIdx, int unitPool)
{
    int *gameState = gGameState;
    int *extState = gExtState;
    int *unitTypeTable = gUnitTypeTable;
    int *unitClassTable = gUnitClassTable;
    int  maxArmySize;
    int  armyBase;
    int  nearestEnemy;
    int  totalUnits = 0;
    short heroCount = 0;
    short flyerCount = 0;
    int  culled = 0;
    int  losingWar = 0;
    short playerIdx;
    int  slot, unitIdx, unitTypeOffset;
    char typeId;
    short score;
    short rollVal;
    int  worstIdx, worstScore;
    char statsBuffer[26];
    short stat_cost, stat_move;
    short stat_naval, stat_ranged, stat_melee;
    short stat_mounted, stat_flying, stat_heavy;
    short stat_special, stat_siege, stat_magic;
    short stat_movement_penalty;

    /* Threat level determines base army size */
    maxArmySize = CalcArmyStrength(armyIdx);

    /* Check distance to nearest enemy */
    armyBase = *gameState + armyIdx * 0x42;
    nearestEnemy = FindNearestEnemy(*(short *)(armyBase + 0x1604),
                                    *(short *)(armyBase + 0x1606),
                                    0xFFFFFFFFFFFFFFFFLL);

    if (nearestEnemy < 10) {
        maxArmySize = maxArmySize + 4;
    }

    /* Check if losing the war */
    playerIdx = GS->current_player;
    if (*(short *)(playerIdx * 2 + iRam1011762c) <
        *(short *)(playerIdx * 2 + iRam10117630)) {
        losingWar = 1;
        maxArmySize = maxArmySize - 4;
        if (maxArmySize < 2)
            maxArmySize = 2;
    }

    /* Count current units */
    for (slot = 0x1F; slot >= 0; slot--) {
        unitIdx = *(short *)(unitPool + slot * 2);
        if (unitIdx != -1) {
            if (*(char *)(*unitTypeTable + unitIdx * 0x16 + 4) == '\x1C')
                heroCount++;
            if (*(char *)(*unitClassTable + *(char *)(*unitTypeTable + unitIdx * 0x16 + 4) * 6 + 4) != '\0')
                flyerCount++;
            totalUnits++;
        }
    }

    /* Don't cull if heroes present and few units */
    if (heroCount != 0 && totalUnits <= 15)
        return;

    /* Keep minimum 4 if flyers present */
    if (flyerCount != 0 && maxArmySize < 4)
        maxArmySize = 4;

    /* Army already within limits */
    if (maxArmySize >= totalUnits)
        return;

    /* Culling loop: remove weakest until at target size */
    while (totalUnits > maxArmySize + culled) {
        worstIdx = -1;
        worstScore = 10000;

        for (slot = 0x1F; slot >= 0; slot--) {
            unitIdx = *(short *)(unitPool + slot * 2);
            if (unitIdx == -1)
                continue;

            unitTypeOffset = *unitTypeTable + unitIdx * 0x16;
            typeId = *(char *)(unitTypeOffset + 4);

            /* Skip flyers and heroes */
            if (*(char *)(*unitClassTable + typeId * 6 + 4) != '\0')
                continue;
            if (typeId == '\x1C')
                continue;

            /* If losing war, skip strong units */
            if (losingWar && *(char *)(unitTypeOffset + 8) >= '\x04')
                continue;

            /* Score the unit */
            GetUnitStats(*(unsigned char *)(unitTypeOffset + 4), statsBuffer);
            score = (short)*(char *)(unitTypeOffset + 8);

            /* statsBuffer offsets based on decompiled local variable layout:
             * local_62 = cost, local_64 = movement, local_66 = movement_penalty
             * local_4a = naval, local_48 = ranged, local_46 = melee
             * local_52 = mounted, local_54 = flying, local_56 = heavy
             * local_58 = special, local_60 = siege, local_4e = magic */
            stat_cost = *(short *)(statsBuffer + 0x1E);     /* local_62 */
            stat_move = *(short *)(statsBuffer + 0x1C);     /* local_64 */

            if (stat_cost > 399)
                score++;
            if (stat_cost > 799)
                score++;
            if (stat_move > 0x0B)
                score++;
            if (stat_move > 0x0F)
                score++;

            /* Special ability bonuses */
            if (*(short *)(statsBuffer + 0x36) != 0)        /* naval */
                score++;
            if (*(short *)(statsBuffer + 0x38) != 0 ||      /* ranged */
                *(short *)(statsBuffer + 0x3A) != 0)         /* melee */
                score++;
            if (*(short *)(statsBuffer + 0x2E) != 0 ||      /* mounted */
                *(short *)(statsBuffer + 0x2C) != 0 ||       /* flying */
                *(short *)(statsBuffer + 0x2A) != 0)          /* heavy */
                score++;
            if (*(short *)(statsBuffer + 0x28) != 0)         /* special */
                score++;
            if (*(short *)(statsBuffer + 0x20) != 0)         /* siege */
                score++;
            if (*(short *)(statsBuffer + 0x32) != 0)         /* magic */
                score += 2;

            /* Movement penalties */
            stat_movement_penalty = *(short *)(statsBuffer + 0x1A);
            if (stat_movement_penalty > 5)
                score--;
            if (stat_movement_penalty > 10)
                score--;
            if (stat_movement_penalty > 0x0F)
                score--;

            /* Add randomness */
            rollVal = RandomRange(1, 2, 0);
            if ((short)(score + rollVal) < worstScore) {
                worstIdx = slot;
                worstScore = score + rollVal;
            }
        }

        if (worstIdx == -1)
            break;

        DisbandUnit(*(short *)(unitPool + worstIdx * 2), 0);
        *(short *)(unitPool + worstIdx * 2) = -1;
        culled++;
    }
}


/* ================================================================
 *  AI_AssignRemainingArmies (FUN_100114d4)
 *
 *  Processes all armies not yet handled (flag bit 2 not set),
 *  calling AI_ArmyManagement on each.
 * ================================================================ */
void AI_AssignRemainingArmies(void)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    short armyCount;
    short i;

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0)
        return;

    for (i = armyCount - 1; i >= 0; i--) {
        /* Must be owned by current player */
        if (*(char *)(*gameState + i * 0x42 + 0x1619) !=
            (char)GS->current_player)
            continue;

        /* Must not already be processed (flag bit 2) */
        if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 4) != 0)
            continue;

        AI_ArmyManagement(i, 0);
    }
}


/* ================================================================
 *  AI_ClaimNeutralArmies (FUN_10011590)
 *
 *  Finds the nearest neutral army (owner == 0x0F) that is on
 *  passable terrain, not owned by a live enemy player, and within
 *  40 tiles (0x28) of the current player's capital. Claims it by
 *  setting its targetPlayer byte to current player.
 * ================================================================ */
void AI_ClaimNeutralArmies(void)
{
    int *gameState = gGameState;
    int *mapTiles = gMapTiles;
    short currentPlayer;
    int   capitalBase;
    int   capitalArmyIdx;
    short armyCount;
    int   bestDist = 10000;
    long  bestArmy = -1;
    short i;
    int   armyBase, terrainLookup;
    unsigned char ownerByte;
    int   dist;

    currentPlayer = GS->current_player;
    capitalBase = *gameState + currentPlayer * 0x14;
    capitalArmyIdx = LookupCityAtPos(*(short *)(capitalBase + 0x194),
                                      *(short *)(capitalBase + 0x196));

    armyCount = *(short *)(*gameState + 0x1602);

    for (i = armyCount - 1; i >= 0; i--) {
        armyBase = *gameState + (i * 0x20 + (int)i) * 2;

        /* Check terrain is passable (terrain type check) */
        terrainLookup = *(unsigned int *)(*mapTiles +
                          *(short *)(armyBase + 0x1606) * 0xE0 +
                          *(short *)(armyBase + 0x1604) * 2) >> 0x18;
        if (-(long)*(char *)(*gameState + terrainLookup + 0x711) + 10 != 0)
            continue;    /* terrain not passable */

        /* Check owner: must be neutral (0x0F) or dead player */
        ownerByte = *(unsigned char *)(armyBase + 0x1633);
        if ((unsigned short)ownerByte == GS->current_player)
            continue;
        if (ownerByte != 0x0F &&
            *(short *)((unsigned int)ownerByte * 2 + *gameState + 0x138) != 0)
            continue;

        /* Check distance to capital army */
        dist = CalcDistance(*(short *)(armyBase + 0x1604),
                           *(short *)(armyBase + 0x1606),
                           *(short *)(*gameState + capitalArmyIdx * 0x42 + 0x1604),
                           *(short *)(*gameState + capitalArmyIdx * 0x42 + 0x1606));

        if (dist < 0x28 && dist < bestDist) {
            bestArmy = (long)i;
            bestDist = dist;
        }
    }

    /* Claim the nearest neutral army */
    if ((int)bestArmy != -1) {
        *(char *)(*gameState + (int)(((bestArmy & 0x7FFFFFF) * 0x20 + bestArmy) << 1) + 0x1633) =
            (char)GS->current_player;
    }
}


/* ================================================================
 *  AI_CheckAllianceThreats (FUN_10011734)
 *
 *  Checks if any AI player has alliance-based threats that should
 *  be acted upon. Returns 1 if threats exist, 0 otherwise.
 * ================================================================ */
int AI_CheckAllianceThreats(short playerIdx)
{
    int *gameState = gGameState;
    int *extState = gExtState;
    int  result = 0;
    int  p, dipAddr;

    /* Must have alliances enabled and alliance AI active */
    if (*(short *)(*gameState + 0x11C) == 0 || *(short *)(*extState + 0x38) == 0)
        return 0;

    /* Must be an AI player */
    if (*(short *)(*gameState + GS->current_player * 2 + 0xD0) == 0)
        return 0;

    for (p = 7; p >= 0; p--) {
        dipAddr = *gameState + p * 2;

        /* Player must be alive */
        if (*(short *)(dipAddr + 0x138) == 0)
            continue;
        /* Must be human */
        if (*(short *)(dipAddr + 0xD0) != 0)
            continue;
        /* Diplomacy bits must show alliance (>>0x1A & 3 == 2) */
        if ((*(unsigned int *)(*gameState + playerIdx * 0x10 + p * 2 + 0x1582) >> 0x1A & 3) != 2)
            continue;
        /* Must have active threat data */
        if (*(short *)(p * 2 + iRam10117474) == 0)
            continue;

        result = 1;
    }

    return result;
}


/* ================================================================
 *  AI_StrategicAssessment (FUN_10011804)
 *
 *  The most complex AI function (2548 bytes). Runs at the start of
 *  every AI turn to evaluate the global strategic situation.
 *
 *  Steps:
 *  1. Claim neutral armies near capital
 *  2. If alliances disabled, return
 *  3. Find primary threat player
 *  4. Count armies by owner, track territory presence
 *  5. First pass: set diplomacy based on territory army counts
 *  6. Second pass: refine using composite threat score
 *  7. Force ALLIED for primary threat target
 *  8. Force ALLIED for active alliance quest targets
 *  9. Identify biggest threat (player with most armies)
 *  10. If dominant player found, form coalition against them
 *  11. Handle alliance-specific logic
 *  12. Handle fog-of-war adjustments
 * ================================================================ */
void AI_StrategicAssessment(void)
{
    int *gameState = gGameState;
    int *extState = gExtState;
    int *mapTiles = gMapTiles;
    short *primaryThreatPtr = psRam10117484;
    int  territoryCount = iRam10117490;  /* per-player territory army counts */
    int  totalArmyCount = iRam1011748c;  /* per-player total army counts */
    int  idleArmyCount = iRam10117488;   /* per-player idle army counts */
    int  threatData = iRam10117474;
    short p, i;
    short armyCount;
    int  totalOnMap = 0;
    short dipStance_attack[8];
    short dipStance_defense[8];
    short fogWarAlliance[38];  /* asStack_4c in original */
    short biggestThreatPlayer;
    short biggestThreatCount;
    short borderPressure;
    int  compositeThreat;
    int  dipAddr;
    unsigned short currentDipBits;
    int  dipValue;
    Boolean hasAlliancePartner;
    short sVar12;
    short humanThreatThreshold;

    /* Phase 1: Claim neutral armies */
    AI_ClaimNeutralArmies();

    /* If alliances not enabled, nothing to do */
    if (*(short *)(*gameState + 0x11C) == 0)
        return;

    /* Find primary threat */
    sVar12 = FindPrimaryThreat(0);
    *primaryThreatPtr = sVar12;

    /* Initialize per-player counters */
    for (p = 7; p >= 0; p--) {
        dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
        *(unsigned int *)(dipAddr + 0x1582) =
            *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;

        *(short *)(p * 2 + territoryCount) = 0;
        *(short *)(p * 2 + totalArmyCount) = 0;
        *(short *)(p * 2 + idleArmyCount) = 0;
        dipStance_defense[p] = 0;
        dipStance_attack[p] = 0;

        /* Determine stance from diplomacy bits */
        if ((*(unsigned int *)(*gameState + p * 0x10 +
              GS->current_player * 2 + 0x1582) >> 0x1C & 3) == 0) {
            dipStance_attack[p] = 1;
        }
        else if ((*(unsigned int *)(*gameState + p * 0x10 +
                    GS->current_player * 2 + 0x1582) >> 0x1C & 3) == 2) {
            dipStance_defense[p] = 1;
        }
    }

    /* Count all armies by owner and territory */
    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        int armyBase = *gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 + (long)i) & 0xFFFFFFFFL) << 1);
        int terrainLookup;
        char ownerChar;

        /* Check terrain passability */
        terrainLookup = *(unsigned int *)(*mapTiles +
                          *(short *)(armyBase + 0x1606) * 0xE0 +
                          *(short *)(armyBase + 0x1604) * 2) >> 0x18;
        if (-(long)*(char *)(*gameState + terrainLookup + 0x711) + 10 == 0) {
            totalOnMap++;
        }

        ownerChar = *(char *)(armyBase + 0x1619);
        if (ownerChar == '\x0F')
            continue;

        /* Count total armies */
        *(short *)(ownerChar * 2 + totalArmyCount) =
            *(short *)(ownerChar * 2 + totalArmyCount) + 1;

        /* Count idle armies (flag bit 0 not set) */
        if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 1) == 0) {
            *(short *)(ownerChar * 2 + idleArmyCount) =
                *(short *)(ownerChar * 2 + idleArmyCount) + 1;
        }

        /* Track territory presence */
        if ((int)ownerChar == (int)GS->current_player) {
            unsigned char targetPlayer = *(unsigned char *)(armyBase + 0x1633);
            if (targetPlayer != 0x0F) {
                *(short *)((unsigned int)targetPlayer * 2 + territoryCount) =
                    *(short *)((unsigned int)targetPlayer * 2 + territoryCount) + 1;
            }
        } else {
            if ((unsigned short)*(unsigned char *)(armyBase + 0x1633) ==
                (unsigned short)GS->current_player) {
                *(short *)(ownerChar * 2 + territoryCount) =
                    *(short *)(ownerChar * 2 + territoryCount) + 1;
            }
        }
    }

    /* First pass: set diplomacy based on territory counts */
    for (p = 7; p >= 0; p--) {
        if (p == GS->current_player)
            continue;
        if (*(short *)(*gameState + p * 2 + 0x138) == 0)
            continue;

        borderPressure = (dipStance_attack[p] - dipStance_defense[p]) * 2;

        if ((int)*(short *)(p * 2 + territoryCount) < borderPressure + 4) {
            if (borderPressure + 8 <= (int)*(short *)(p * 2 + territoryCount)) {
                /* Set ALLIED (bits = 2) */
                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF | 0x20000000;
            }
        } else {
            /* Set HOSTILE (bits = 1) */
            dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
            *(unsigned int *)(dipAddr + 0x1582) =
                *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF | 0x10000000;
        }
    }

    /* Second pass: refine using composite threat score */
    for (p = 7; p >= 0; p--) {
        if (p == GS->current_player)
            continue;
        if (*(short *)(*gameState + p * 2 + 0x138) == 0)
            continue;

        compositeThreat = (int)(short)(
            *(short *)(*extState + p * 2 + 0x3EC) +
            *(short *)(*extState + p * 2 + 0x40C) * 4 +
            *(short *)(*extState + p * 2 + 0x3BC) * 2);

        borderPressure = (dipStance_attack[p] - dipStance_defense[p]) * 2;

        if (compositeThreat < borderPressure + 5) {
            if (borderPressure + 10 <= compositeThreat) {
                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF | 0x20000000;
            }
        } else {
            currentDipBits = (unsigned short)(
                *(unsigned int *)(*gameState + GS->current_player * 0x10 +
                                  p * 2 + 0x1582) >> 0x1C) & 3;
            dipValue = (int)(short)currentDipBits;
            if (currentDipBits < 2)
                dipValue = 1;
            dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
            *(unsigned int *)(dipAddr + 0x1582) =
                dipValue << 0x1C | *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;
        }
    }

    /* Force ALLIED for primary threat target */
    if (*primaryThreatPtr != -1) {
        dipAddr = *gameState + GS->current_player * 0x10 + *primaryThreatPtr * 2;
        *(unsigned int *)(dipAddr + 0x1582) =
            *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF | 0x20000000;
    }

    /* Force ALLIED for active alliance quest targets */
    for (p = 3; p >= 0; p--) {
        int questAddr = *extState + p * 0x5C;
        if (*(short *)(questAddr + 0x24C) != 0) {
            dipAddr = *gameState + GS->current_player * 0x10 +
                      *(short *)(questAddr + 0x24E) * 2;
            *(unsigned int *)(dipAddr + 0x1582) =
                *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF | 0x20000000;
        }
    }

    /* Identify biggest threat: player with most armies */
    biggestThreatCount = 0;
    biggestThreatPlayer = -1;
    for (p = 7; p >= 0; p--) {
        int adjustedTotal;
        short threshold;
        short armyPercent;

        if (*(short *)(*gameState + p * 2 + 0x138) == 0)
            continue;

        adjustedTotal = totalOnMap;
        if (adjustedTotal < 1)
            adjustedTotal = 1;

        /* Human players use configurable threshold, AI uses 50 */
        if (*(short *)(p * 2 + *gameState + 0xD0) == 0) {
            threshold = *(short *)(*extState + 0x44);
        } else {
            threshold = 0x32;  /* 50 */
        }

        armyPercent = (*(short *)(p * 2 + totalArmyCount) * 100) / adjustedTotal;

        if (biggestThreatCount < *(short *)(p * 2 + totalArmyCount) &&
            threshold < armyPercent) {
            biggestThreatPlayer = p;
            biggestThreatCount = *(short *)(p * 2 + totalArmyCount);
        }
    }

    /* If dominant player found, form coalition */
    if (biggestThreatPlayer != -1 &&
        biggestThreatPlayer != GS->current_player) {
        for (p = 7; p >= 0; p--) {
            if (*(short *)(*gameState + p * 2 + 0x138) == 0)
                continue;

            if (p == biggestThreatPlayer || p == *primaryThreatPtr) {
                /* Set ALLIED */
                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF | 0x20000000;
            } else {
                /* Clear diplomacy bits */
                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;
            }
        }
    }

    /* Alliance-specific logic */
    if (*(short *)(*extState + 0x38) != 0) {
        Boolean foundThreat;

        /* Check AI players for alliance threats */
        for (p = 7; p >= 0; p--) {
            if (*(short *)(*gameState + p * 2 + 0x138) == 0)
                continue;
            if (*(short *)(*gameState + p * 2 + 0xD0) == 0)
                continue;
            if (p == GS->current_player)
                continue;
            if ((*(unsigned int *)(*gameState + GS->current_player * 0x10 +
                  p * 2 + 0x1582) >> 0x1C & 3) == 0)
                continue;

            if (AI_CheckAllianceThreats(p) != 0) {
                /* Clear alliance bits for this player */
                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;
            }
        }

        /* Check for non-AI players with active alliances */
        hasAlliancePartner = false;
        for (p = 7; p >= 0; p--) {
            if (*(short *)(*gameState + p * 2 + 0x138) == 0)
                continue;
            if (*(short *)(*gameState + p * 2 + 0xD0) == 1)
                continue;
            if ((*(unsigned int *)(*gameState + GS->current_player * 0x10 +
                  p * 2 + 0x1582) >> 0x1A & 3) == 2) {
                hasAlliancePartner = true;
            }
        }

        /* If alliance partner found, clear AI opponents' alliances */
        if (hasAlliancePartner) {
            for (p = 7; p >= 0; p--) {
                if (*(short *)(*gameState + p * 2 + 0x138) == 0)
                    continue;
                if (*(short *)(*gameState + p * 2 + 0xD0) != 1)
                    continue;
                if (*(short *)(p * 2 + threatData) == 0)
                    continue;

                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;
            }
        }
    }

    /* Fog of war adjustments */
    if (*(short *)(*gameState + 0x116) != 0) {
        /* Build per-player alliance visibility table */
        for (p = 7; p >= 0; p--)
            fogWarAlliance[p] = 0;

        for (p = 7; p >= 0; p--) {
            if (*(short *)(*gameState + p * 2 + 0x138) == 0)
                continue;
            if (*(short *)(*gameState + p * 2 + 0xD0) == 0)
                continue;

            int q;
            for (q = 7; q >= 0; q--) {
                if (*(short *)(*gameState + q * 2 + 0x138) == 0)
                    continue;
                if (*(short *)(*gameState + q * 2 + 0xD0) == 1)
                    continue;
                if ((*(unsigned int *)(*gameState + p * 0x10 + q * 2 + 0x1582) >> 0x1A & 3) == 2) {
                    fogWarAlliance[p] = 1;
                }
            }
        }

        /* Clear diplomacy for players where fog reveals threats */
        for (p = 7; p >= 0; p--) {
            if (*(short *)(*gameState + p * 2 + 0x138) == 0)
                continue;
            if (*(short *)(*gameState + p * 2 + 0xD0) == 0)
                continue;

            if (fogWarAlliance[GS->current_player] != 0 ||
                fogWarAlliance[p] != 0) {
                dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
                *(unsigned int *)(dipAddr + 0x1582) =
                    *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;
            }
        }
    }

    /* Clear diplomacy bits for players with no idle armies */
    for (p = 7; p >= 0; p--) {
        if (*(short *)(p * 2 + idleArmyCount) == 0) {
            dipAddr = *gameState + GS->current_player * 0x10 + p * 2;
            *(unsigned int *)(dipAddr + 0x1582) =
                *(unsigned int *)(dipAddr + 0x1582) & 0xCFFFFFFF;
        }
    }

    /* Activate attack groups for quests with cleared diplomacy */
    for (p = 3; p >= 0; p--) {
        int questAddr = *extState + p * 0x5C;
        if (*(short *)(questAddr + 0x24C) != 0) {
            if ((*(unsigned int *)(*gameState + GS->current_player * 0x10 +
                  *(short *)(questAddr + 0x24E) * 2 + 0x1582) >> 0x1C & 3) == 0) {
                AI_ActivateAttackGroup(p);
            }
        }
    }
}


/* ================================================================
 *  AI_AssignCityDefenders (FUN_10013774)
 *
 *  Assigns units to defend cities. Runs in two passes:
 *  pass 0 = heroes only, pass 1 = regular units.
 *  Disbands excess flying defenders (> 7 with strength < 4).
 * ================================================================ */
void AI_AssignCityDefenders(void)
{
    int *extState = gExtState;
    int *unitClassTable = gUnitClassTable;
    int *unitTypeTable = gUnitTypeTable;
    int *gameState = gGameState;
    short armyCount;
    short unitCount;
    Boolean hasAttackGroups = false;
    short pass;
    short i;
    int   unitBase;

    /* Check if any armies are in attack group state (7) */
    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        if (*(char *)(*gameState + i * 0x42 + 0x1619) ==
            (char)GS->current_player &&
            *(char *)(*extState + (int)i + 0x56) == '\x07') {
            hasAttackGroups = true;
        }
    }

    *(short *)(*extState + 0x22) = 0;  /* regularDefenders */
    *(short *)(*extState + 0x24) = 0;  /* flyerDefenders */

    /* Two passes: pass 0 = heroes, pass 1 = regular */
    for (pass = 0; pass < 2; pass++) {
        unitCount = *(short *)(*gameState + 0x182);

        while (unitCount > 0) {
            unitCount--;
            unitBase = *unitTypeTable + unitCount * 0x16;

            /* Must be owned by current player */
            if (*(char *)(unitBase + 5) != (char)GS->current_player)
                goto next_unit;
            /* Must be alive (position != -1) */
            if (*(short *)(unitCount * 0x16 + *unitTypeTable) == -1)
                goto next_unit;
            /* Must be marked as defender (flag bit 5) */
            if ((*(unsigned short *)(unitBase + 0x0C) & 0x20) == 0)
                goto next_unit;

            /* Pass 0: heroes only; Pass 1: non-heroes only */
            if (*(char *)(unitBase + 4) == '\x1C') {
                if (pass != 0) goto next_unit;
            } else {
                if (pass == 0) goto next_unit;
            }

            /* Skip heroes if attack groups exist */
            if (*(char *)(*unitTypeTable + unitCount * 0x16 + 4) == '\x1C' && hasAttackGroups)
                goto handle_disband;

            /* Check for excess flying defenders */
            if (*(char *)(*unitClassTable + *(char *)(unitBase + 4) * 6) != '\0') {
                if (*(short *)(*extState + 0x24) > 7 &&
                    *(char *)(unitBase + 8) < '\x04') {
                    goto handle_disband;
                }
            }

            /* Assign as defender */
            AssignToDefense(unitCount, -1LL);

            /* Track defender counts */
            if ((int)*(char *)(unitBase + 5) == (int)GS->current_player) {
                if (*(char *)(*unitClassTable + *(char *)(unitBase + 4) * 6) == '\0') {
                    *(short *)(*extState + 0x22) = *(short *)(*extState + 0x22) + 1;
                } else {
                    *(short *)(*extState + 0x24) = *(short *)(*extState + 0x24) + 1;
                }
            }
            goto next_unit;

        handle_disband:
            /* Clear order bits and defender flag */
            {
                int offset = unitCount * 0x16;
                *(unsigned int *)(*unitTypeTable + offset + 0x0C) =
                    *(unsigned int *)(*unitTypeTable + offset + 0x0C) & 0xFFFF0FFF;
                *(unsigned int *)(offset + *unitTypeTable + 0x0C) =
                    *(unsigned int *)(offset + *unitTypeTable + 0x0C) & 0xFFFFFF80;
                *(unsigned short *)(offset + *unitTypeTable + 0x0C) =
                    *(unsigned short *)(offset + *unitTypeTable + 0x0C) & 0xFFDF;
            }

        next_unit:
            ;  /* continue to next iteration */
        }
    }
}


/* ================================================================
 *  AI_PlanArmyMovements (FUN_10014214)
 *
 *  Iterates over all units flagged for movement (bit 8 set).
 *  For heroes (type 0x1C), repeatedly finds paths and processes
 *  combat results until movement is exhausted.
 * ================================================================ */
void AI_PlanArmyMovements(void)
{
    int *unitTypeTable = gUnitTypeTable;
    int *gameState = gGameState;
    short unitCount;
    short i;
    int   unitBase;
    int   unitOffset;
    unsigned int statusFlags;
    Boolean keepMoving;
    short savedX, savedY;
    int   pathResult, combatResult;
    char  pathBuffer[48];

    unitCount = *(short *)(*gameState + 0x182);
    if (unitCount == 0)
        return;

    for (i = unitCount - 1; i >= 0; i--) {
        unitOffset = i * 0x16;
        unitBase = *unitTypeTable + unitOffset;

        /* Must be owned by current player */
        if (*(char *)(unitBase + 5) != (char)GS->current_player)
            continue;
        if (*(short *)(unitOffset + *unitTypeTable) == -1)
            continue;

        /* Must have movement flag (bit 8) set */
        if ((*(unsigned short *)(unitBase + 0x0C) & 0x100) == 0)
            continue;

        /* Clear movement flag */
        *(unsigned short *)(unitBase + 0x0C) =
            *(unsigned short *)(unitBase + 0x0C) & 0xFEFF;

        /* Only process heroes directly */
        if (*(char *)(*unitTypeTable + unitOffset + 4) != '\x1C')
            continue;

        /* Move hero along path */
        keepMoving = true;
        while (keepMoving) {
            statusFlags = *(unsigned int *)(unitBase + 0x0C);
            pathResult = FindPath(
                *(short *)(*unitTypeTable + unitOffset),
                *(short *)(unitBase + 2),
                pathBuffer,
                (unsigned short)(statusFlags >> 9) & 7,
                (unsigned short)(statusFlags >> 0x0C) & 0x0F,
                0);

            if (pathResult == 0) break;

            /* Check movement remaining */
            if (*(char *)(unitBase + 7) < '\x03') break;

            savedX = *(short *)(unitOffset + *unitTypeTable);
            savedY = *(short *)(unitBase + 2);

            combatResult = AI_ProcessCombatResult((short *)pathBuffer);

            if (combatResult == 1 || combatResult == 0) {
                keepMoving = false;
            }

            /* Check if position changed with movement used */
            unitBase = *unitTypeTable + i * 0x16;
            if (*(short *)(*unitTypeTable + i * 0x16) == savedX &&
                *(short *)(unitBase + 2) == savedY &&
                *(char *)(unitBase + 7) < *(char *)(unitBase + 6)) {
                break;
            }
            if (!keepMoving) break;
        }
    }
}


/* ================================================================
 *  AI_ExecuteAttackGroups (FUN_1001d014)
 *
 *  Executes attack group movements. First runs production planning,
 *  then converts armies in state 7 to 8, then advances each active
 *  attack group toward its target.
 * ================================================================ */
void AI_ExecuteAttackGroups(void)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    short armyCount;
    short i;
    int   numGroups;
    int   groupBase;
    int   result;

    /* If turn counter is 0, skip */
    if (*(short *)*extState == 0)
        return;

    /* Run production planning */
    AI_ProductionPlanning();

    /* Convert armies in attack state (7) to ready state (8) */
    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        if ((int)*(char *)(*gameState + i * 0x42 + 0x1619) ==
            (int)GS->current_player &&
            *(char *)(*extState + (int)i + 0x56) == '\x07') {
            *(char *)(*extState + (int)i + 0x56) = 8;
        }
    }

    /* Process each attack group */
    numGroups = *(short *)(*extState + 0x24A);
    if (numGroups > 0) {
        for (i = 0; i < numGroups; i++) {
            groupBase = *extState + i * 0x5C;
            if (*(short *)(groupBase + 0x24C) != 0) {
                /* Set leader army to attacking state */
                *(char *)((int)*(short *)(groupBase + 0x250) + *extState + 0x56) = 7;

                result = AdvanceGroupToTarget(i);
                if (result != 0) {
                    /* Increment group turn counter */
                    *(short *)(groupBase + 0x24C) =
                        *(short *)(groupBase + 0x24C) + 1;
                }
            }
        }
    }
}


/* ================================================================
 *  AI_ProcessArmyOrders (FUN_1001aa9c)
 *
 *  Processes army follow-orders. Counts units following each army,
 *  then processes up to 10 assignment rounds.
 * ================================================================ */
void AI_ProcessArmyOrders(void)
{
    int *unitTypeTable = gUnitTypeTable;
    int *gameState = gGameState;
    short unitCount;
    short i;
    int   unitBase;
    unsigned int statusFlags;
    unsigned int linkedArmy;
    short round;
    int   result;
    char  followerCount[112];

    /* Initialize follower counts */
    for (i = 99; i >= 0; i--)
        followerCount[i] = '\0';

    /* Count units following each army */
    unitCount = *(short *)(*gameState + 0x182);
    for (i = unitCount - 1; i >= 0; i--) {
        unitBase = *unitTypeTable + i * 0x16;
        if ((int)*(char *)(unitBase + 5) != (int)GS->current_player)
            continue;

        statusFlags = *(unsigned int *)(unitBase + 0x0C);
        if ((statusFlags >> 0x0C & 0x0F) != 1)
            continue;

        linkedArmy = statusFlags & 0x7F;
        if (linkedArmy < (unsigned int)*(short *)(*gameState + 0x1602)) {
            followerCount[linkedArmy]++;
        }
    }

    /* Process up to 10 assignment rounds */
    for (round = 0; round < 10; round++) {
        result = ProcessSingleAssignment(round, followerCount);
        if (result == 0)
            return;
    }
}


/* ================================================================
 *  AI_CheckArmyPathsBlocked (FUN_1001ab94)
 *
 *  Checks armies in state 3 (moving toward target) for blocked
 *  paths. If an army in state 3 has neighbors but no neutral
 *  enemies nearby, downgrades to state 2 (waiting).
 * ================================================================ */
void AI_CheckArmyPathsBlocked(void)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    short armyCount;
    short i;
    int   neighborResult;
    Boolean hasNeutralNearby;
    int   j;
    unsigned char neighbors[24];

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0)
        return;

    for (i = armyCount - 1; i >= 0; i--) {
        /* Must be owned by current player */
        if (*(char *)(*gameState + i * 0x42 + 0x1619) !=
            (char)GS->current_player)
            continue;

        /* Must be in state 3 (moving toward target) */
        if (*(char *)(*extState + (int)i + 0x56) != '\x03')
            continue;

        neighborResult = GetNeighborArmies(i, neighbors, 0);
        if (neighborResult == 0)
            continue;

        /* Check if any neighbor is neutral and unblocked */
        hasNeutralNearby = false;
        for (j = 5; j >= 0; j--) {
            if (neighbors[j] == 0xFF)
                continue;
            if (*(char *)(*gameState + (unsigned int)neighbors[j] * 0x42 + 0x1619) != '\x0F')
                continue;
            if ((*(unsigned char *)((unsigned int)neighbors[j] + *extState + 0x11E) & 1) != 0)
                continue;
            hasNeutralNearby = true;
        }

        /* No neutral paths - downgrade to waiting */
        if (!hasNeutralNearby) {
            *(char *)(*extState + (int)i + 0x56) = 2;
        }
    }
}


/* ================================================================
 *  AI_FindNearestFriendly (FUN_1001acdc)
 *
 *  Finds the distance to the nearest friendly army on passable
 *  terrain. filterPlayer == -1 means find any non-current-player,
 *  otherwise find specific player's armies.
 * ================================================================ */
int AI_FindNearestFriendly(short x, short y, short filterPlayer)
{
    int *gameState = gGameState;
    int *mapTiles = gMapTiles;
    short armyCount;
    short i;
    int   armyBase;
    int   terrainLookup;
    long  terrainVal;
    int   dist;
    int   bestDist = 10000;

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0)
        return 10000;

    for (i = armyCount - 1; i >= 0; i--) {
        armyBase = *gameState + (i * 0x20 + (int)i) * 2;

        /* Check terrain passability */
        terrainLookup = *(unsigned int *)(*mapTiles +
                          *(short *)(armyBase + 0x1606) * 0xE0 +
                          *(short *)(armyBase + 0x1604) * 2) >> 0x18;
        terrainVal = -(long)*(char *)(*gameState + terrainLookup + 0x711);
        if (terrainVal + 10 != 0)
            continue;

        /* Filter by player */
        if (filterPlayer == -1) {
            if ((int)*(char *)(armyBase + 0x1619) != (int)filterPlayer)
                continue;
        } else {
            if ((int)*(char *)(armyBase + 0x1619) == (int)filterPlayer)
                ; /* match */
            else
                continue;
        }

        /* Calculate distance */
        dist = CalcDistance(x, y,
                           *(short *)(*gameState + i * 0x42 + 0x1604),
                           *(short *)(*gameState + i * 0x42 + 0x1606));
        if (dist < bestDist)
            bestDist = dist;
    }

    return bestDist;
}


/* ================================================================
 *  AI_ActivateAttackGroup (FUN_1001ae14)
 *
 *  Activates an attack group by setting the leader and all member
 *  armies to state 8 (ready to move).
 * ================================================================ */
void AI_ActivateAttackGroup(short groupIdx)
{
    int *extState = gExtState;
    int  i;
    short memberArmy;

    /* Set leader army to state 8 */
    *(char *)(*extState +
              (int)*(short *)(*extState + groupIdx * 0x5C + 0x250) + 0x56) = 8;

    /* Set all member armies to state 8 */
    for (i = 3; i >= 0; i--) {
        memberArmy = *(short *)(*extState + groupIdx * 0x5C + i * 2 + 0x252);
        if (memberArmy != -1) {
            *(char *)((int)memberArmy + *extState + 0x56) = 8;
        }
    }

    ActivateAttackEvent();
}


/* ================================================================
 *  AI_ActivateBestGroup (FUN_1001aea0)
 *
 *  Finds the attack group with the highest activity counter
 *  and activates it.
 * ================================================================ */
void AI_ActivateBestGroup(void)
{
    int *extState = gExtState;
    short numGroups;
    short i;
    long  bestGroup = -1;
    short bestCount = -1;
    short groupCount;

    numGroups = *(short *)(*extState + 0x24A);

    for (i = numGroups - 1; i >= 0; i--) {
        groupCount = *(short *)(*extState + i * 0x5C + 0x24C);
        if (groupCount != 0 && bestCount < groupCount) {
            bestGroup = (long)i;
            bestCount = groupCount;
        }
    }

    if ((int)bestGroup != -1) {
        AI_ActivateAttackGroup(bestGroup);
    }
}


/* ================================================================
 *  AI_ResetProductionState (FUN_1001f758)
 *
 *  Resets per-army flags for the production phase. Clears the
 *  "has path" flag (bit 1 of armyFlags) and sets it for armies
 *  that contain flying units.
 * ================================================================ */
void AI_ResetProductionState(void)
{
    int *extState = gExtState;
    int *unitClassTable = gUnitClassTable;
    int *gameState = gGameState;
    int *mapTiles = gMapTiles;
    short armyCount;
    short i;
    int   armyBase;
    int   terrainLookup;
    long  terrainVal;
    Boolean hasFlyer;
    int   slot;
    char  unitType;

    armyCount = *(short *)(*gameState + 0x1602);

    for (i = armyCount - 1; i >= 0; i--) {
        armyBase = *gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 + (long)i) & 0xFFFFFFFFL) << 1);

        /* Check terrain passability */
        terrainLookup = *(unsigned int *)(*mapTiles +
                          *(short *)(armyBase + 0x1606) * 0xE0 +
                          *(short *)(armyBase + 0x1604) * 2) >> 0x18;
        terrainVal = -(long)*(char *)(*gameState + terrainLookup + 0x711);
        if (terrainVal + 10 != 0)
            continue;

        /* Clear "has path" flag (bit 1) */
        *(unsigned char *)(*extState + (int)i + 0x11E) =
            *(unsigned char *)(*extState + (int)i + 0x11E) & 0xFD;

        /* Check if any unit slot has a flying unit */
        hasFlyer = false;
        for (slot = 3; slot >= 0; slot--) {
            unitType = *(char *)(armyBase + slot + 0x161A);
            if (unitType != -1 &&
                *(char *)(*unitClassTable + unitType * 6) != '\0') {
                hasFlyer = true;
            }
        }

        /* Set "has flyer" flag (bit 1) */
        if (hasFlyer) {
            *(unsigned char *)(*extState + (int)i + 0x11E) =
                *(unsigned char *)(*extState + (int)i + 0x11E) | 2;
        }
    }
}


/* ================================================================
 *  AI_PrecomputeThreats (FUN_1001f958)
 *
 *  For each army with the "locked" flag set (bit 0 of armyFlags),
 *  checks nearby threats in the secondary map data.
 * ================================================================ */
void AI_PrecomputeThreats(void)
{
    int *extState = gExtState;
    short armyCount;
    short i;

    if (*(short *)(*gGameState + 0x124) == 0)
        return;

    armyCount = *(short *)(*gGameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 1) != 0) {
            AI_CheckNearbyThreats(i);
        }
    }
}


/* ================================================================
 *  AI_ProductionTurn (FUN_1001f9e4)
 *
 *  Main production phase. Categorizes all armies, increments
 *  priority counters, activates idle armies, converts attacking
 *  armies to ready state, and recalls defenders when needed.
 * ================================================================ */
void AI_ProductionTurn(short playerIdx)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    int *mapTiles = gMapTiles;
    short armyCount;
    short i;
    int   armyBase;
    int   terrainLookup;
    long  terrainVal;
    int   neighborResult;

    AI_ResetProductionState();
    AI_PrecomputeThreats();

    /* Reset counters */
    *(short *)(*extState + 8) = 0;  /* threateningArmyCount */
    *(short *)(*extState + 6) = 0;  /* neutralArmyCount */
    *(short *)(*extState + 4) = 0;  /* enemyArmyCount */
    *(short *)(*extState + 2) = 0;  /* ownArmyCount */

    /* Categorize all armies */
    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        armyBase = *gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 + (long)i) & 0xFFFFFFFFL) << 1);

        /* Check terrain passability */
        terrainLookup = *(unsigned int *)(*mapTiles +
                          *(short *)(armyBase + 0x1606) * 0xE0 +
                          *(short *)(armyBase + 0x1604) * 2) >> 0x18;
        terrainVal = -(long)*(char *)(*gameState + terrainLookup + 0x711);
        if (terrainVal + 10 != 0) {
            /* Off-map: clear state */
            *(char *)(*extState + (int)i + 0x56) = 0;
            *(char *)(*extState + (int)i + 0xBA) = 0;
            continue;
        }

        if ((int)*(char *)(armyBase + 0x1619) == (int)playerIdx) {
            /* Own army */
            *(short *)(*extState + 2) = *(short *)(*extState + 2) + 1;
            *(char *)(*extState + (int)i + 0xBA) =
                *(char *)(*extState + (int)i + 0xBA) + 1;

            if (*(char *)((int)i + *extState + 0x56) == '\0') {
                *(char *)((int)i + *extState + 0x56) = 1;
            }
        } else {
            /* Enemy army */
            if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 1) != 0) {
                *(short *)(*extState + 8) = *(short *)(*extState + 8) + 1;
            }
            *(char *)(*extState + (int)i + 0x56) = 0;
            *(char *)((int)i + *extState + 0xBA) = 0;

            if (*(char *)(armyBase + 0x1619) == '\x0F') {
                *(short *)(*extState + 6) = *(short *)(*extState + 6) + 1;
            } else {
                *(short *)(*extState + 4) = *(short *)(*extState + 4) + 1;
            }
        }
    }

    if (*(short *)(*extState + 2) == 0)
        return;

    /* Second pass: activate and categorize */
    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        /* Recall defenders if needed */
        if (*(char *)(*extState + (int)i + 0x56) == '\x08' &&
            *(short *)(*extState + 8) != 0 &&
            *(short *)(*extState + 0x24) < 5 &&
            (*(unsigned char *)(*extState + (int)i + 0x11E) & 2) != 0) {
            *(char *)(*extState + (int)i + 0x56) = 0x0B;  /* recalled defender */
        }

        /* Activate newly assigned armies */
        if (*(char *)(*extState + (int)i + 0x56) == '\x01') {
            neighborResult = GetNeighborArmies(i, 0, 0);
            if (neighborResult == 0) {
                *(char *)(*extState + (int)i + 0x56) = 5;  /* isolated, build up */
            } else {
                *(char *)(*extState + (int)i + 0x56) = 3;  /* has neighbors, move */
            }
        }
    }

    /* Increment turn counter */
    *(short *)*extState = *(short *)*extState + 1;
}


/* ================================================================
 *  AI_Finalize (FUN_10013040)
 *
 *  Post-attack cleanup. For armies owned by current player in
 *  certain states with enough movement remaining (> 3), dispatches
 *  them to attack nearby targets.
 * ================================================================ */
void AI_Finalize(void)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    short *validStates = psRam10115d34;
    short armyCount;
    short i;
    Boolean stateValid;
    short s;
    long  stateIdx;

    if (*(short *)(*extState + 0x48) != 0)
        return;

    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        /* Must be owned by current player */
        if ((int)*(char *)(*gameState + i * 0x42 + 0x1619) !=
            (int)GS->current_player)
            continue;

        /* Check if army state is in valid state list */
        stateValid = false;
        s = *validStates;
        stateIdx = 0;
        while (s != -1) {
            if ((unsigned short)*(unsigned char *)(*extState + (int)i + 0x56) ==
                *(unsigned short *)((int)((stateIdx & 0xFFFFFFFFL) << 1) + (int)validStates)) {
                stateValid = true;
            }
            stateIdx = (long)(short)((short)stateIdx + 1);
            s = *(short *)((int)((stateIdx & 0xFFFFFFFFL) << 1) + (int)validStates);
        }

        /* Must have enough movement and valid state */
        if (stateValid && *(unsigned char *)(*extState + (int)i + 0x182) > 3) {
            AI_DispatchToTarget(i);
        }
    }
}


/* ================================================================
 *  AI_FinalPass (FUN_10014d14)
 *
 *  Final consistency pass. For armies with the 0x20 flag set in
 *  armyFlags and not in state 7, attempts one more path + combat
 *  resolution. Sets state to 0x0D on certain failure conditions.
 * ================================================================ */
void AI_FinalPass(void)
{
    int *extState = gExtState;
    int *gameState = gGameState;
    short armyCount;
    short i;
    int   armyBase;
    int   pathResult, combatResult, escortResult;
    char  pathBuffer[32];

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0)
        return;

    for (i = armyCount - 1; i >= 0; i--) {
        armyBase = *gameState + i * 0x42;

        /* Must be owned by current player */
        if (*(char *)(armyBase + 0x1619) != (char)GS->current_player)
            continue;

        /* Must have flag 0x20 set */
        if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 0x20) == 0)
            continue;

        /* Must not be in attack state (7) */
        if (*(char *)(*extState + (int)i + 0x56) == '\x07')
            continue;

        /* Try one more path + combat */
        pathResult = FindPath(*(short *)(armyBase + 0x1604) + 1,
                              *(short *)(armyBase + 0x1606),
                              pathBuffer, 0, 0, 0);
        if (pathResult == 0)
            continue;

        combatResult = AI_ProcessCombatResult((short *)pathBuffer);
        if (combatResult == 0)
            continue;

        if (combatResult == 1) {
            escortResult = CheckArmyEscort(i);
            if (escortResult == 0) {
                *(char *)((int)i + *extState + 0x56) = 0x0D;
            }
        }
    }
}


/* ================================================================
 *  AI_SortHeroes (FUN_10014e44)
 *
 *  Builds a sorted list of heroes owned by the current player.
 *  For each hero, records its unit index, linked city/ruin index,
 *  and quest status. Also updates the hasHeroes counter.
 * ================================================================ */
void AI_SortHeroes(int param_1)
{
    int *extState = gExtState;
    int *unitTypeTable = gUnitTypeTable;
    int *gameState = gGameState;
    int *mapTiles = gMapTiles;
    short unitCount;
    short i;
    int   unitOffset;
    int   heroCount = 0;
    int   entryOffset;
    long  heroX, heroY;
    short cityIdx;
    int   questResult;

    /* Clear hero list */
    for (i = 5; i >= 0; i--)
        *(short *)(param_1 + i * 2) = -1;

    *(short *)(*extState + 0x0E) = 0;

    unitCount = *(short *)(*gameState + 0x182);
    for (i = unitCount - 1; i >= 0; i--) {
        unitOffset = i * 0x16;

        /* Must be owned by current player and be a hero (0x1C) */
        if ((int)*(char *)(*unitTypeTable + unitOffset + 5) !=
            (int)GS->current_player)
            continue;
        if (*(char *)(*unitTypeTable + unitOffset + 4) != '\x1C')
            continue;
        if (heroCount >= 6)
            continue;

        entryOffset = param_1 + heroCount * 2;
        *(short *)entryOffset = i;

        heroX = (long)*(short *)(*unitTypeTable + unitOffset);
        heroY = (long)*(short *)(*unitTypeTable + unitOffset + 2);

        *(short *)(entryOffset + 0x18) = -1;
        *(short *)(entryOffset + 0x0C) = -1;
        *(short *)(entryOffset + 0x24) = 0;

        /* Check if hero is on a city tile (terrain type 0x0A) */
        if (*(char *)(*gameState +
              (*(unsigned int *)(*mapTiles +
                (int)(((heroY & 0x1FFFFFFF) * 8 - heroY) << 5) +
                (int)(heroX << 1)) >> 0x18) + 0x711) == '\x0A') {
            cityIdx = LookupCityAtPos(heroX, heroY);
            *(short *)(entryOffset + 0x0C) = cityIdx;
        }
        else if (*(char *)(*gameState +
                   (*(unsigned int *)(*mapTiles +
                     (int)(((heroY & 0x1FFFFFFF) * 8 - heroY) << 5) +
                     (int)(heroX << 1)) >> 0x18) + 0x711) == '\x0B') {
            cityIdx = LookupRuinAtPos(heroX, heroY);
            *(short *)(entryOffset + 0x18) = cityIdx;
        }

        /* Check quest status */
        questResult = CheckHeroQuest(*unitTypeTable + i * 0x16);
        if (questResult != 0)
            *(short *)(param_1 + heroCount * 2 + 0x24) = 1;

        heroCount++;
        *(short *)(*extState + 0x0E) = *(short *)(*extState + 0x0E) + 1;
    }
}


/* ================================================================
 *  AI_DecideTargetType (FUN_100161fc)
 *
 *  Core decision function for hero armies. Uses dice rolls to
 *  score each potential target type and returns the best one.
 *
 *  Returns: 0=none, 1=city, 2=ruin, 3=weak city, 4=enemy army
 * ================================================================ */
unsigned char AI_DecideTargetType(short heroSlot, int dataArray)
{
    int   cityRoll, cityScore;
    int   weakCityRoll, weakCityScore;
    int   armyRoll, armyScore;
    int   ruinRoll, ruinScore;
    unsigned char decision;
    int   bestScore = 0;
    short escort;

    /* City target scoring (1d20+20) */
    cityRoll = RandomRange(1, 0x14, 0x14);
    decision = (*(short *)(dataArray + 0x30) != -1) ? 1 : 0;
    if (decision) {
        bestScore = (cityRoll - *(short *)(dataArray + 0x32)) + 100;
    }

    /* Weak city scoring (1d20+20) */
    weakCityRoll = RandomRange(1, 0x14, 0x14);
    weakCityScore = (weakCityRoll - *(short *)(dataArray + 0x36)) + 100;
    if (*(short *)(dataArray + 0x34) != -1 && bestScore < weakCityScore) {
        decision = 3;
        bestScore = weakCityScore;
    }

    /* Enemy army scoring (1d20+0) - only if not already escorting */
    escort = *(short *)(dataArray + heroSlot * 2 + 0x0C);
    if (escort == -1 ||
        *(unsigned char *)((int)escort + *(int *)gExtState + 0x182) > 4) {
        armyRoll = RandomRange(1, 0x14, 0);
        armyScore = (armyRoll - *(short *)(dataArray + 0x3A)) + 100;
        if (*(short *)(dataArray + 0x38) != -1 && bestScore < armyScore) {
            decision = 4;
            bestScore = armyScore;
        }
    }

    /* Ruin scoring (1d20+0) */
    ruinRoll = RandomRange(1, 0x14, 0);
    ruinScore = (ruinRoll - *(short *)(dataArray + 0x3E)) + 100;
    if (*(short *)(dataArray + 0x3C) != -1 && bestScore < ruinScore) {
        decision = 2;
    }

    return decision;
}


/* ================================================================
 *  AI_HeroManagementLoop (FUN_100164e4)
 *
 *  Main hero processing loop. For each hero:
 *  1. Assemble best army around hero
 *  2. Check alliance quests
 *  3. If following another army to a city, validate path
 *  4. Find best city/ruin/army targets
 *  5. Execute chosen action via AI_DecideTargetType
 * ================================================================ */
void AI_HeroManagementLoop(void)
{
    int *extState = gExtState;
    int *unitTypeTable = gUnitTypeTable;
    int *gameState = gGameState;
    short heroData[6];
    short heroExtra[20];
    unsigned short localFlags;
    int   i;
    short unitIdx;
    int   unitBase;
    int   questResult;
    unsigned int statusFlags;
    int   canReach;
    short sVar2;
    int   decision;

    /* Clear quest tracking */
    /* (original loops sVar10 from 3 down to 0, no-op body) */

    /* Initialize protected army */
    *(short *)(*extState + 0x46) = -1;

    /* Check for active alliance quest */
    if (*(short *)(*gameState + 0x11E) != 0) {
        int questBase = *gameState + GS->current_player * 0x0C;
        if (*(short *)(questBase + 0x1142) != 0) {
            short questType = *(short *)(questBase + 0x1144);
            if (questType == 4 || questType == 5) {
                *(short *)(*extState + 0x46) =
                    *(short *)(*gameState + GS->current_player * 0x0C + 0x1148);
            }
        }
    }

    /* Sort heroes */
    AI_SortHeroes((int)heroData);

    /* Process each hero (up to 6) */
    for (i = 5; i >= 0; i--) {
        unitIdx = heroData[i];
        if (unitIdx == -1)
            continue;

        unitBase = *unitTypeTable + unitIdx * 0x16;

        /* Must be owned by current player */
        if ((int)*(char *)(unitBase + 5) != (int)GS->current_player)
            continue;
        /* Must be a hero (0x1C) */
        if (*(char *)(unitBase + 4) != '\x1C')
            continue;

        /* Assemble army around hero */
        AI_AssembleHeroArmy(unitIdx);

        /* Process linked army */
        if (heroExtra[i] >= 0) {
            AI_ArmyManagement(heroExtra[i], 1);
        }

        /* Check alliance quest */
        if (*(short *)(*gameState + 0x11E) != 0) {
            int questBase = *gameState + GS->current_player * 0x0C;
            if (*(short *)(questBase + 0x1142) != 0 &&
                *(short *)(questBase + 0x1146) == unitIdx) {
                questResult = AI_HandleAllianceQuest(i, (int)heroData);
                if (questResult != 0)
                    continue;
            }
        }

        /* Check if following another army to a city */
        statusFlags = *(unsigned int *)(*unitTypeTable + unitIdx * 0x16 + 0x0C);
        if ((statusFlags >> 0x0C & 0x0F) == 3) {
            short followTarget = (unsigned short)statusFlags & 0x7F;
            canReach = AI_CanReachCity(followTarget, unitIdx);

            if (canReach == 0) {
                /* Can't reach - clear orders for all following units */
                sVar2 = *(short *)(*gameState + 0x182);
                while (sVar2 > 0) {
                    sVar2--;
                    int otherBase = *unitTypeTable + sVar2 * 0x16;
                    if ((int)*(char *)(otherBase + 5) == (int)GS->current_player &&
                        *(short *)(sVar2 * 0x16 + *unitTypeTable) ==
                            *(short *)(unitIdx * 0x16 + *unitTypeTable) &&
                        *(short *)(otherBase + 2) ==
                            *(short *)(unitIdx * 0x16 + *unitTypeTable + 2) &&
                        (*(unsigned int *)(otherBase + 0x0C) >> 0x0C & 0x0F) ==
                            (int)(short)((unsigned short)(statusFlags >> 0x0C) & 0x0F)) {
                        *(unsigned int *)(otherBase + 0x0C) =
                            *(unsigned int *)(otherBase + 0x0C) & 0xFFFF0FFF;
                        *(unsigned int *)(*unitTypeTable + sVar2 * 0x16 + 0x0C) =
                            *(unsigned int *)(*unitTypeTable + sVar2 * 0x16 + 0x0C) & 0xFFFFFF80;
                        *(short *)(*unitTypeTable + sVar2 * 0x16 + 0x14) = -1;
                        *(short *)(sVar2 * 0x16 + *unitTypeTable + 0x12) =
                            *(short *)(sVar2 * 0x16 + *unitTypeTable + 0x14);
                    }
                }
            } else {
                localFlags = (unsigned short)*(unsigned int *)(unitIdx * 0x16 + *unitTypeTable + 0x0C) & 0x7F;
                AI_AttackTarget(i, 3, (int)heroData, 0);
            }
        }

        /* Find targets and decide action */
        if (*(char *)(*unitTypeTable + unitIdx * 0x16 + 7) > '\x03') {
            AI_FindBestCityTarget(i, (int)heroData);
            AI_FindBestRuinTarget(i, (int)heroData);
            AI_FindBestArmyTarget(i, (int)heroData);

            decision = AI_DecideTargetType(i, (int)heroData);
            if (decision >= 1 && decision <= 4) {
                return;  /* executing action */
            }
        }
    }
}


/* ================================================================
 *  AI_ArmyManagement (FUN_10010b30, 2468 bytes)
 *
 *  Core army management function. For a given army:
 *  1. Gathers all units at the army's location
 *  2. Tracks heroes, flyers, and special units
 *  3. Clears following orders for units in this army
 *  4. Runs AI_SelectUnitsForArmy to pick the best composition
 *  5. Optionally runs AI_CullWeakUnits for aged armies
 *  6. Distributes excess units to nearby tiles
 *  7. Sets defender flags for recalled defenders
 * ================================================================ */
void AI_ArmyManagement(short armyIdx, short mode)
{
    int   *extState  = (int *)gExtState;
    int   *classTable = (int *)gUnitClassTable;
    int   *unitTable  = (int *)gUnitTypeTable;
    int   *gameState  = (int *)gGameState;
    int    armyBase;
    short  armyX, armyY;
    unsigned char prevMoveCount;
    int    heroIdx = -1;
    short  heroCount = 0;
    long   flyerCount = 0;
    short  specialCount = 0;
    short  orderCount = 0;
    int    unitCount = 0;
    short  i;
    short  totalUnits;
    short  unitBuf[32];
    short  outputBuf[32];
    short  heroList[8];
    int    selectResult;
    short  frontlineCount;

    if ((long)armyIdx < 0)
        return;
    if ((int)*(short *)(*gameState + 0x1602) <= (int)armyIdx)
        return;

    armyBase = *gameState + (int)(((((long)armyIdx & 0x7FFFFFF) * 0x20 +
               (long)armyIdx) & 0xFFFFFFFFL) << 1);
    armyX = *(short *)(armyBase + 0x1604);
    armyY = *(short *)(armyBase + 0x1606);
    prevMoveCount = *(unsigned char *)(*extState + (int)armyIdx + 0x182);

    /* Initialize hero list */
    for (i = 7; i >= 0; i--)
        heroList[i] = -1;

    /* Mark this army as processed (flag bit 2) */
    *(unsigned char *)(*extState + (int)armyIdx + 0x11E) =
        *(unsigned char *)(*extState + (int)armyIdx + 0x11E) | 4;

    /* Initialize unit buffers */
    for (i = 0x1F; i >= 0; i--) {
        outputBuf[i] = -1;
        unitBuf[i] = -1;
    }

    /* Reset move count */
    *(unsigned char *)(*extState + (int)armyIdx + 0x182) = 0;

    /* Gather all units at this army's location */
    totalUnits = *(short *)(*gameState + 0x182);
    unitCount = 0;
    heroCount = 0;
    flyerCount = 0;
    specialCount = 0;
    orderCount = 0;

    if (totalUnits != 0) {
        for (i = totalUnits - 1; i >= 0; i--) {
            int unitBase = *unitTable + i * 0x16;
            int unitX = (int)*(short *)(*unitTable + i * 0x16);
            int unitY;

            /* Check if unit is at army location (within 2x2 tile) */
            if (armyX > unitX || unitX > armyX + 1)
                continue;
            unitY = (int)*(short *)(unitBase + 2);
            if (armyY > unitY || unitY > armyY + 1)
                continue;

            /* Remove enemy units at this location */
            if (*(char *)(unitBase + 5) != (char)GS->current_player) {
                DisbandUnit(i, 1);
            }

            /* Increment move count */
            *(unsigned char *)(*extState + (int)armyIdx + 0x182) =
                *(unsigned char *)(*extState + (int)armyIdx + 0x182) + 1;

            /* Clear following orders pointing to this army */
            {
                unsigned int statusFlags = *(unsigned int *)(unitBase + 0xC);
                if (((statusFlags >> 0xC) & 0xF) == 1 &&
                    (statusFlags & 0x7F) == (unsigned int)armyIdx) {
                    *(unsigned int *)(unitBase + 0xC) = statusFlags & 0xFFFF0FFF;
                    *(unsigned int *)(*unitTable + i * 0x16 + 0xC) =
                        *(unsigned int *)(*unitTable + i * 0x16 + 0xC) & 0xFFFFFF80;
                }
            }

            /* Count units with active orders */
            if ((*(unsigned int *)(*unitTable + i * 0x16 + 0xC) >> 0xC & 0xF) != 0) {
                orderCount++;
            }

            /* Track heroes */
            if (*(char *)(*unitTable + i * 0x16 + 4) == '\x1C' && heroCount < 8) {
                heroList[heroCount] = i;
                heroCount++;
                heroIdx = i;
            }

            /* Track flyers */
            if (*(char *)(*classTable + *(char *)(*unitTable + i * 0x16 + 4) * 6) != '\0') {
                flyerCount++;
            }

            /* Track special units */
            if (*(char *)(*classTable + *(char *)(*unitTable + i * 0x16 + 4) * 6 + 4) != '\0') {
                specialCount++;
            }

            /* Add to unit buffer */
            if (unitCount < 0x20) {
                unitBuf[unitCount] = i;
                unitCount++;
            } else {
                /* Overflow - disband */
                DisbandUnit(i, 0);
            }
        }
    }

    /* If we found a hero, set it as selected unit and explore ruins */
    if (heroIdx != -1) {
        int heroBase = *unitTable + heroIdx * 0x16;
        /* Set hero as active unit pointer */
        /* FUN_100169c0 - explore ruins at hero location */
    }

    /* Handle multiple heroes */
    if (heroCount > 1) {
        /* FUN_10016df0 - sort/merge heroes */
    }

    /* Set flag bits for hero/flyer presence */
    *(unsigned char *)(*extState + (int)armyIdx + 0x11E) =
        *(unsigned char *)(*extState + (int)armyIdx + 0x11E) & 0xCF;
    if (heroCount != 0) {
        *(unsigned char *)(*extState + (int)armyIdx + 0x11E) =
            *(unsigned char *)(*extState + (int)armyIdx + 0x11E) | 0x20;
    }
    if (specialCount != 0) {
        *(unsigned char *)(*extState + (int)armyIdx + 0x11E) =
            *(unsigned char *)(*extState + (int)armyIdx + 0x11E) | 0x10;
    }

    /* If too many units with orders and not in attack group, return early */
    if (unitCount > 0x10) {
        prevMoveCount = '\0';
        orderCount = 0;
    }
    if (orderCount > 2 &&
        *(char *)(*extState + (int)armyIdx + 0x56) != '\a') {
        return;
    }

    /* Check if no changes and losing war - skip if random says so */
    if (mode == 0 && heroCount == 0 &&
        prevMoveCount == *(unsigned char *)(*extState + (int)armyIdx + 0x182)) {
        short playerOff = GS->current_player * 2;
        if (*(short *)(playerOff + iRam1011762c) <
            *(short *)(playerOff + iRam10117630)) {
            int roll = RandomRange(1, 6, -1);
            if (roll != 0) {
                /* Check map visibility */
                return;
            }
        }
    }

    /* Clear misc flags */
    *(unsigned char *)(*extState + (int)armyIdx + 0x1E6) = 0;

    /* Handle army states 4, 5, 8: evaluate threat level */
    {
        char state = *(char *)(*extState + (int)armyIdx + 0x56);
        if (state == '\x04' || state == '\x05' || state == '\x08') {
            int threatLevel = CalcArmyStrength(armyIdx);
            if (unitCount < 2) {
                *(unsigned char *)(*extState + (int)armyIdx + 0x56) = 4;
            } else if (unitCount < threatLevel) {
                *(unsigned char *)(*extState + (int)armyIdx + 0x56) = 5;
            } else {
                *(unsigned char *)(*extState + (int)armyIdx + 0x56) = 8;
            }
        }
    }

    /* Run unit selection algorithm */
    selectResult = AI_SelectUnitsForArmy(armyIdx, unitCount,
                                          (int)unitBuf, (int)outputBuf);
    frontlineCount = (short)selectResult;

    /* Optionally cull weak units for aged armies */
    if (mode == 0) {
        int extBase = *extState + (int)armyIdx;
        if (*(unsigned char *)(extBase + 0xBA) > 8) {
            char armyState = *(char *)(extBase + 0x56);
            if (armyState == '\x04' || armyState == '\x05' ||
                armyState == '\x06' || armyState == '\x08') {
                AI_CullWeakUnits(armyIdx, (int)outputBuf);
            }
        }
    }

    /* Trim army to max 24 units */
    if (unitCount > 0x18) {
        for (i = 0x18; i < unitCount; i++) {
            short trimUnit = *(short *)((int)outputBuf + i * 2);
            if (trimUnit != -1) {
                *(short *)((int)outputBuf + i * 2) = -1;
                DisbandUnit(trimUnit, 0);
            }
        }
    }

    /* Handle recalled defenders (state 0x0B) */
    if (GS->vectoring_enabled != 0 &&
        *(char *)(*extState + (int)armyIdx + 0x56) == '\x0B' &&
        *(short *)(*extState + 0x24) < 5) {
        long defCount = (long)(short)(2 - ((short)unitCount - (short)flyerCount));
        if (defCount > 0) {
            flyerCount = flyerCount - defCount;
        }

        /* Check city defense timing */
        if (GS->city_defense_bonus != 0) {
            short turnNum = GS->current_turn;
            if (turnNum < 2) turnNum = 1;
            if (turnNum < 3) {
                flyerCount = 1;
            }
        }

        /* Assign flying units as defenders */
        for (i = 0; i < unitCount; i++) {
            if (flyerCount > 0) {
                short defUnit = *(short *)((int)outputBuf + i * 2);
                if (defUnit != -1 &&
                    *(char *)(*classTable + *(char *)(*unitTable + defUnit * 0x16 + 4) * 6) != '\0') {
                    *(short *)(*extState + 0x24) = *(short *)(*extState + 0x24) + 1;
                    int uBase = defUnit * 0x16 + *unitTable;
                    *(unsigned short *)(uBase + 0xC) = *(unsigned short *)(uBase + 0xC) | 0x20;
                    AssignToDefense(defUnit, -1L);
                    *(short *)((int)outputBuf + i * 2) = -1;
                    flyerCount--;
                }
            }
        }
    }

    /* Distribute remaining units to army positions */
    {
        char armyState = *(char *)(*extState + (int)armyIdx + 0x56);
        int  dirIdx;
        short perSlot;

        if (armyState == '\x03' || armyState == '\x02') {
            dirIdx = 1;
            perSlot = 8;
        } else {
            dirIdx = (frontlineCount == 0) ? 1 : 0;
            perSlot = (frontlineCount == 0) ? 8 : frontlineCount;
        }

        for (i = 0; i < unitCount; i++) {
            short placeUnit = *(short *)((int)outputBuf + i * 2);
            if (placeUnit != -1) {
                if (dirIdx == 0) {
                    *(unsigned char *)(*extState + (int)armyIdx + 0x1E6) =
                        *(unsigned char *)(*extState + (int)armyIdx + 0x1E6) + 1;
                }
                *(short *)((int)outputBuf + i * 2) = -1;

                /* Place unit at army position + direction offset */
                int uOff = placeUnit * 0x16;
                *(short *)(*unitTable + uOff + 0x14) = -1;
                *(short *)(*unitTable + uOff + 0x12) = -1;
                *(unsigned char *)(*unitTable + uOff + 0x11) = 0;
                *(unsigned int *)(*unitTable + uOff + 0xC) =
                    *(unsigned int *)(*unitTable + uOff + 0xC) & 0xFFFFF1FF;
                *(char *)(*unitTable + uOff + 0x10) = (char)armyIdx;
                *(unsigned short *)(*unitTable + uOff + 0xC) =
                    *(unsigned short *)(*unitTable + uOff + 0xC) & 0xFFBF;

                perSlot--;
                if (perSlot == 0) {
                    dirIdx++;
                    perSlot = 8;
                }
            }
        }
    }

    /* Refresh display at army position */
    armyBase = *gameState + (int)(((((long)armyIdx & 0x7FFFFFF) * 0x20 +
               (long)armyIdx) & 0xFFFFFFFFL) << 1);
    RefreshMapAfterCombat(*(short *)(armyBase + 0x1604),
                           *(short *)(armyBase + 0x1606));
}


/* ================================================================
 *  AI_ProductionPlanning (FUN_1001fcc0, 2160 bytes)
 *
 *  Computes army strength requirements and categorizes available
 *  armies into three tiers (elite/standard/basic) using flag bits
 *  0x40, 0x80, and 0x08. Determines minimum army strength and
 *  assigns group strength values.
 *
 *  Three-pass categorization:
 *   Pass 1 (sVar15 >= 4): Mark elite armies (flag 0x40)
 *   Pass 2 (sVar15 > 2):  Mark standard armies (flag 0x80)
 *   Pass 3 (sVar15 > 1):  Mark basic armies (flag 0x08)
 * ================================================================ */
int AI_ProductionPlanning(void)
{
    int   *extState   = (int *)gExtState;
    int   *classTable = (int *)gUnitClassTable;
    int   *gameState  = (int *)gGameState;
    short  activeGroups = 0;
    short  groupCount;
    short  armyCount;
    short  i, p, slot;
    int    armyBase, unitBase;
    short  strengthArr[8];
    int    minStrength;
    int   *minPtr;
    int    localBuf[2];
    short  eliteCount, stdCount, basicCount;
    short  eliteExcess, stdExcess, basicExcess;
    Boolean hasFlyer, meetsStrength;

    /* Count active attack groups */
    groupCount = *(short *)(*extState + 0x24A);
    for (i = groupCount - 1; i >= 0; i--) {
        if (*(short *)(*extState + i * 0x5C + 0x24C) != 0)
            activeGroups++;
    }

    /* Clear counters */
    *(short *)(*extState + 0x40) = 0;
    *(short *)(*extState + 0x3E) = 0;
    *(short *)(*extState + 0x3C) = 0;
    *(short *)(*extState + 0x3A) = 0;

    /* Initialize per-player strength array */
    for (p = 7; p >= 0; p--)
        strengthArr[p] = 0;

    /* Build strength table from army unit strengths */
    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        if ((int)*(char *)(*gameState + i * 0x42 + 0x1619) !=
            (int)GS->current_player)
            continue;

        /* Clear army flags (keep bits 0-2, 4-5) */
        *(unsigned char *)(*extState + (int)i + 0x11E) =
            *(unsigned char *)(*extState + (int)i + 0x11E) & 0x37;

        /* Skip armies in attack group state */
        if (*(char *)(*extState + (int)i + 0x56) == '\x07')
            continue;

        /* Get army info and unit strength */
        {
            short infoBuf[2];
            int result = GetArmyInfo(i, infoBuf);
            if (result != 0) {
                int uBase = i * 0x42 + *gameState + (int)infoBuf[0];
                char strength = *(char *)(uBase + 0x1622);
                int  adjStrength = (int)strength;

                /* Bonus for foot soldiers */
                if (*(char *)(*classTable + *(char *)(uBase + 0x161A) * 6 + 5) == '\x01')
                    adjStrength += 2;

                /* Insert into sorted strength array */
                int insertIdx = -1;
                int insertVal = adjStrength;
                for (p = 7; p >= 0; p--) {
                    if (strengthArr[p] == 0) {
                        strengthArr[p] = (short)adjStrength;
                        insertIdx = -1;
                        break;
                    }
                    if (strengthArr[p] < insertVal) {
                        insertVal = (int)strengthArr[p];
                        insertIdx = p;
                    }
                }
                if (insertIdx != -1) {
                    strengthArr[insertIdx] = (short)adjStrength;
                }
            }
        }
    }

    /* Compute minimum army strength from strength table */
    localBuf[0] = 100;
    for (p = 7; p >= 0; p--) {
        if (strengthArr[p] != 0 && strengthArr[p] < localBuf[0])
            localBuf[0] = (int)strengthArr[p];
    }
    localBuf[1] = 4;
    minPtr = &localBuf[1];
    if (4 < localBuf[0])
        minPtr = &localBuf[1];
    else
        minPtr = &localBuf[0];
    *(short *)(*extState + 0x3A) = (short)*minPtr;

    /* Pass 1: Mark elite armies (flag 0x40) - requires 4+ active groups */
    if (activeGroups >= 4) {
        for (i = armyCount - 1; i >= 0; i--) {
            if ((int)*(char *)(*gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                (long)i) & 0xFFFFFFFFL) << 1) + 0x1619) !=
                (int)GS->current_player)
                continue;

            if (CanArmyEnterCity(i, 1) == 0)
                continue;
            if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 2) == 0)
                continue;

            hasFlyer = false;
            for (slot = 3; slot >= 0; slot--) {
                unitBase = *gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                           (long)i) & 0xFFFFFFFFL) << 1) + slot;
                {
                    long uType = (long)*(char *)(unitBase + 0x161A);
                    if (uType >= 0 &&
                        *(char *)(*classTable + (int)(((uType & 0x3FFFFFFF) * 4 -
                                  uType) << 1)) != '\0' &&
                        *(char *)(unitBase + 0x1622) > '\x04') {
                        hasFlyer = true;
                    }
                }
            }
            if (hasFlyer) {
                *(short *)(*extState + 0x3C) = *(short *)(*extState + 0x3C) + 1;
                *(unsigned char *)(*extState + (int)i + 0x11E) =
                    *(unsigned char *)(*extState + (int)i + 0x11E) | 0x40;
            }
        }
    }

    /* Compute elite excess */
    eliteCount = *(short *)(*extState + 0x3C);
    eliteExcess = (eliteCount < 4) ? eliteCount : eliteCount - 4;

    /* Pass 2: Mark standard armies (flag 0x80) - requires 2+ active groups */
    if (activeGroups > 2) {
        for (i = armyCount - 1; i >= 0; i--) {
            if ((int)*(char *)(*gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                (long)i) & 0xFFFFFFFFL) << 1) + 0x1619) !=
                (int)GS->current_player)
                continue;

            if (CanArmyEnterCity(i, 1) == 0)
                continue;

            unsigned char flags = *(unsigned char *)(*extState + (int)i + 0x11E);
            if ((flags & 0x40) != 0) {
                if (eliteExcess == 0) continue;
                *(unsigned char *)(*extState + (int)i + 0x11E) = flags & 0xBF;
                eliteExcess--;
            }

            meetsStrength = false;
            for (slot = 3; slot >= 0; slot--) {
                unitBase = *gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                           (long)i) & 0xFFFFFFFFL) << 1) + slot;
                {
                    long uType = (long)*(char *)(unitBase + 0x161A);
                    if (uType >= 0 &&
                        (*(char *)(*classTable + (int)(((uType & 0x3FFFFFFF) * 4 -
                                   uType) << 1) + 5) == '\x01' ||
                         (int)*(short *)(*extState + 0x3A) <=
                         (int)*(char *)(unitBase + 0x1622)) &&
                        *(char *)(*gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                                  (long)i) & 0xFFFFFFFFL) << 1) + slot + 0x1626) > '\x0F') {
                        meetsStrength = true;
                    }
                }
            }
            if (meetsStrength) {
                *(short *)(*extState + 0x3E) = *(short *)(*extState + 0x3E) + 1;
                *(unsigned char *)(*extState + (int)i + 0x11E) =
                    *(unsigned char *)(*extState + (int)i + 0x11E) | 0x80;
            }
        }
    }

    /* Compute standard excess */
    stdCount = *(short *)(*extState + 0x3E);
    stdExcess = (stdCount < 4) ? stdCount : stdCount - 4;

    /* Pass 3: Mark basic armies (flag 0x08) - requires 1+ active groups */
    if (activeGroups > 1) {
        for (i = armyCount - 1; i >= 0; i--) {
            if ((int)*(char *)(*gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                (long)i) & 0xFFFFFFFFL) << 1) + 0x1619) !=
                (int)GS->current_player)
                continue;

            if (CanArmyEnterCity(i, 1) == 0)
                continue;

            unsigned char flags = *(unsigned char *)(*extState + (int)i + 0x11E);
            if ((flags & 0x40) != 0) continue;
            if ((flags & 0x80) != 0) {
                if (stdExcess == 0) continue;
                *(unsigned char *)(*extState + (int)i + 0x11E) = flags & 0x7F;
                stdExcess--;
            }

            meetsStrength = false;
            for (slot = 3; slot >= 0; slot--) {
                unitBase = *gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                           (long)i) & 0xFFFFFFFFL) << 1) + slot;
                {
                    long uType = (long)*(char *)(unitBase + 0x161A);
                    if (uType >= 0 &&
                        (*(char *)(*classTable + (int)(((uType & 0x3FFFFFFF) * 4 -
                                   uType) << 1) + 5) == '\x01' ||
                         (int)*(short *)(*extState + 0x3A) <=
                         (int)*(char *)(unitBase + 0x1622)) &&
                        *(char *)(*gameState + (int)(((((long)i & 0x7FFFFFF) * 0x20 +
                                  (long)i) & 0xFFFFFFFFL) << 1) + slot + 0x1626) > '\x0B') {
                        meetsStrength = true;
                    }
                }
            }
            if (meetsStrength) {
                *(short *)(*extState + 0x40) = *(short *)(*extState + 0x40) + 1;
                *(unsigned char *)(*extState + (int)i + 0x11E) =
                    *(unsigned char *)(*extState + (int)i + 0x11E) | 0x08;
            }
        }
    }

    /* Trim basic excess */
    basicCount = *(short *)(*extState + 0x40);
    basicExcess = (basicCount < 4) ? basicCount : basicCount - 4;

    for (i = armyCount - 1; i >= 0; i--) {
        if ((int)*(char *)(*gameState + i * 0x42 + 0x1619) !=
            (int)GS->current_player)
            continue;
        unsigned char flags = *(unsigned char *)(*extState + (int)i + 0x11E);
        if ((flags & 0xC0) == 0 && (flags & 0x08) != 0 && basicExcess != 0) {
            *(unsigned char *)(*extState + (int)i + 0x11E) = flags & 0xF7;
            basicExcess--;
        }
    }

    /* Set group strength for active groups */
    groupCount = *(short *)(*extState + 0x24A);
    for (i = groupCount - 1; i >= 0; i--) {
        int groupBase = *extState + i * 0x5C;
        if (*(short *)(groupBase + 0x24C) != 0) {
            *(short *)(groupBase + 0x2A4) = 8;
        }
    }

    return (int)groupCount;
    return 0;
}


/* ================================================================
 *  AI_SecondaryDefense (FUN_10013484) - STUB
 *
 *  Secondary defense assignment pass (752 bytes).
 *  Stub — original: 752 bytes.
 * ================================================================ */
/* FUN_10013484 (752 bytes) - Secondary defense pass.
 * Iterates over all armies owned by current player.
 * For armies in specific states, checks if they can be reassigned
 * as city defenders or redirected to threatened positions. */
void AI_SecondaryDefense(void)
{
    int   *extState   = (int *)gExtState;
    int   *gameState  = (int *)gGameState;
    int   *unitTable  = (int *)gUnitTypeTable;
    int   *classTable = (int *)gUnitClassTable;
    short  armyCount;
    short  i;

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0) return;

    for (i = armyCount - 1; i >= 0; i--) {
        int armyBase = *gameState + i * 0x42;
        char owner = *(char *)(armyBase + 0x1619);
        char state;

        if (owner != (char)GS->current_player)
            continue;

        state = *(char *)(*extState + (int)i + 0x56);

        /* Armies in state 3 (moving) or 5 (building) may need defense */
        if (state == '\x03' || state == '\x05') {
            /* Check neighbor armies for threats */
            unsigned char neighbors[24];
            int result = GetNeighborArmies(i, neighbors, 0);
            if (result != 0) {
                int p;
                for (p = 5; p >= 0; p--) {
                    if (neighbors[p] != 0xFF) {
                        char nOwner = *(char *)(*gameState + (unsigned int)neighbors[p] * 0x42 + 0x1619);
                        if (nOwner != '\x0F' && nOwner != (char)GS->current_player) {
                            /* Threat detected - mark for defense */
                            *(unsigned char *)(*extState + (int)i + 0x56) = 4;
                            break;
                        }
                    }
                }
            }
        }
    }
}


/* ================================================================
 *  AI_GroupMovement (FUN_1001497c) - STUB
 *
 *  Group movement processing (592 bytes).
 *  Stub — original: 592 bytes.
 * ================================================================ */
/* FUN_1001497c (592 bytes) - Group movement phase.
 * Processes each attack group, advancing them toward their targets.
 * Groups that reach their target or are destroyed are deactivated. */
void AI_GroupMovement(void)
{
    int   *extState  = (int *)gExtState;
    int   *gameState = (int *)gGameState;
    short  groupCount;
    short  armyCount;
    short  i, g;

    armyCount = *(short *)(*gameState + 0x1602);
    if (armyCount == 0) return;

    /* Process armies in state 8 (ready) that have group movement pending */
    for (i = armyCount - 1; i >= 0; i--) {
        if (*(char *)(*gameState + i * 0x42 + 0x1619) !=
            (char)GS->current_player)
            continue;

        if (*(char *)(*extState + (int)i + 0x56) == '\x08') {
            /* Army is ready - check if it needs to move to a group */
            if ((*(unsigned char *)(*extState + (int)i + 0x11E) & 4) == 0) {
                AI_ArmyManagement(i, 0);
            }
        }
    }

    /* Advance each active group toward its target */
    groupCount = *(short *)(*extState + 0x24A);
    if (groupCount > 0) {
        for (g = 0; g < groupCount; g++) {
            int groupBase = *extState + g * 0x5C;
            if (*(short *)(groupBase + 0x24C) != 0) {
                short leaderArmy = *(short *)(groupBase + 0x250);
                *(unsigned char *)(*extState + (int)leaderArmy + 0x56) = 7;
                int result = AdvanceGroupToTarget(g);
                if (result != 0) {
                    *(short *)(groupBase + 0x24C) =
                        *(short *)(groupBase + 0x24C) + 1;
                }
            }
        }
    }
}


/* ================================================================
 *  AI_FindBestCityTarget (FUN_100159c8) - STUB
 *  AI_FindBestRuinTarget (FUN_10015dc8) - STUB
 *  AI_FindBestArmyTarget (FUN_10015f98) - STUB
 *  AI_AttackTarget (FUN_10015554) - STUB
 *  AI_AttackEnemyArmy (FUN_10016344) - STUB
 *  AI_HandleAllianceQuest (FUN_10015324) - STUB
 *  AI_CanReachCity (FUN_10015030) - STUB
 *  AI_AssembleHeroArmy (FUN_100151e8) - STUB
 *  AI_AttackCity (FUN_10013a10) - STUB
 *  AI_ProcessCombatResult (FUN_10013d0c) - STUB
 *  AI_FindBestMovableArmy (FUN_100143b8) - STUB
 *  AI_ProcessSingleUnit (FUN_100145c8) - STUB
 *  AI_DispatchToTarget (FUN_10012cc8) - STUB
 *  AI_CheckArmyOwnership (FUN_100121f8) - STUB
 *  AI_EarlyGameAttack (FUN_10012324) - STUB
 *  AI_SearchForRuins (FUN_1001241c) - STUB
 *  AI_AttackNeutralArmies (FUN_100126a4) - STUB
 *  AI_ResetUnusedUnits (FUN_10014bcc) - STUB
 *  AI_CheckRuinAccessible (FUN_10015c48) - STUB
 *  AI_GetRuinSlotIndex (FUN_10015904) - STUB
 *  AI_GetRuinCapability (FUN_10015980) - STUB
 *  AI_CheckNearbyThreats (FUN_1001f894) - STUB
 *  AI_ProcessFollowOrders (FUN_10013150) - STUB
 *
 *  These functions require additional analysis passes to fully
 *  reconstruct. The decompiled code has been read and their
 *  signatures and behaviors are documented in RE_ai.md.
 * ================================================================ */

/* FUN_100159c8 (640 bytes) - Find best city target for a hero.
 * Searches for enemy/neutral cities within range. Stores best
 * city index at dataArray[0x30], distance at dataArray[0x32].
 * Also finds undefended cities: index at [0x34], distance at [0x36]. */
void AI_FindBestCityTarget(short heroSlot, int dataArray)
{
    int   *gameState = (int *)gGameState;
    int   *extState  = (int *)gExtState;
    int   *unitTable = (int *)gUnitTypeTable;
    short  currentPlayer = GS->current_player;
    short  unitIdx = *(short *)(dataArray + heroSlot * 2);
    int    unitBase;
    short  unitX, unitY;
    short  siteCount;
    short  bestCity = -1, bestDist = 1000;
    short  bestUndefCity = -1, bestUndefDist = 1000;
    short  i;
    short  searchRange;

    if (unitIdx == -1) return;

    unitBase = *unitTable + unitIdx * 0x16;
    unitX = *(short *)(*unitTable + unitIdx * 0x16);
    unitY = *(short *)(unitBase + 2);

    /* Determine search range based on siege mode / turn number */
    if (*(short *)(*extState + 0x48) != 0) {
        searchRange = GS->current_turn;
        if (searchRange < 2) searchRange = 1;
        searchRange = searchRange * 2;
        if (searchRange > 0x19) searchRange = 0x19;
    } else {
        searchRange = 0x19;  /* 25 tiles default */
    }

    /* Scan all sites for cities */
    siteCount = *(short *)(*gameState + 0x810);
    for (i = siteCount - 1; i >= 0; i--) {
        int siteBase = *gameState + i * 0x20;
        short siteX = *(short *)(siteBase + 0x812);
        short siteY = *(short *)(siteBase + 0x814);
        char  ownerType = *(char *)(siteBase + 0x82A);
        int   dist;

        /* Skip owned cities and razed cities */
        if (ownerType == '\x01') {
            /* Check if enemy-owned city */
            /* Simplified — original checks full ownership bitmap */
        }

        dist = CalcDistance(unitX, unitY, siteX, siteY);
        if (dist < searchRange) {
            if (dist < bestDist) {
                bestDist = (short)dist;
                bestCity = i;
            }
            /* Check if undefended */
            if (ownerType != '\x01' && dist < bestUndefDist) {
                bestUndefDist = (short)dist;
                bestUndefCity = i;
            }
        }
    }

    *(short *)(dataArray + 0x30 * 2) = bestCity;
    *(short *)(dataArray + 0x32 * 2) = bestDist;
    *(short *)(dataArray + 0x34 * 2) = bestUndefCity;
    *(short *)(dataArray + 0x36 * 2) = bestUndefDist;
}

/* FUN_10015dc8 (464 bytes) - Find best ruin target for a hero.
 * Searches for unexplored ruins within range. Stores best ruin
 * index at dataArray[0x3C], distance at dataArray[0x3E]. */
void AI_FindBestRuinTarget(short heroSlot, int dataArray)
{
    int   *gameState = (int *)gGameState;
    int   *unitTable = (int *)gUnitTypeTable;
    short  unitIdx = *(short *)(dataArray + heroSlot * 2);
    int    unitBase;
    short  unitX, unitY;
    short  bestRuin = -1, bestDist = 1000;
    short  i;

    if (unitIdx == -1) return;

    unitBase = *unitTable + unitIdx * 0x16;
    unitX = *(short *)(*unitTable + unitIdx * 0x16);
    unitY = *(short *)(unitBase + 2);

    /* Scan items/ruins */
    for (i = 0x15; i >= 0; i--) {
        int ruinBase = *gameState + i * 0x1E;
        char ruinState = *(char *)(ruinBase + 0xD28);

        if (ruinState != '\x01')  /* must be active/unexplored */
            continue;

        {
            short ruinX = *(short *)(ruinBase + 0xD2C);
            short ruinY = *(short *)(ruinBase + 0xD2E);
            int dist = CalcDistance(unitX, unitY, ruinX, ruinY);

            if (dist < bestDist) {
                bestDist = (short)dist;
                bestRuin = i;
            }
        }
    }

    *(short *)(dataArray + 0x3C * 2) = bestRuin;
    *(short *)(dataArray + 0x3E * 2) = bestDist;
}

/* FUN_10015f98 (612 bytes) - Find best enemy army target for a hero.
 * Searches for enemy armies within 20 tiles (0x14). Stores best
 * army index at dataArray[0x38], distance at dataArray[0x3A]. */
void AI_FindBestArmyTarget(short heroSlot, int dataArray)
{
    int   *gameState = (int *)gGameState;
    int   *extState  = (int *)gExtState;
    int   *unitTable = (int *)gUnitTypeTable;
    short  currentPlayer = GS->current_player;
    short  unitIdx = *(short *)(dataArray + heroSlot * 2);
    int    unitBase;
    short  unitX, unitY;
    short  armyCount;
    short  bestArmy = -1, bestDist = 1000;
    short  i;

    if (unitIdx == -1) return;

    unitBase = *unitTable + unitIdx * 0x16;
    unitX = *(short *)(*unitTable + unitIdx * 0x16);
    unitY = *(short *)(unitBase + 2);

    armyCount = *(short *)(*gameState + 0x1602);
    for (i = armyCount - 1; i >= 0; i--) {
        int armyBase = *gameState + i * 0x42;
        char owner = *(char *)(armyBase + 0x1619);
        int dist;

        if (owner == '\x0F' || (int)owner == (int)currentPlayer)
            continue;

        /* Check diplomacy: must be hostile */
        if ((*(unsigned int *)(*gameState + currentPlayer * 0x10 + owner * 2 + 0x1582) >>
             0x1C & 3) == 2)
            continue;  /* allied, skip */

        dist = CalcDistance(unitX, unitY,
                            *(short *)(armyBase + 0x1604),
                            *(short *)(armyBase + 0x1606));

        if (dist < 0x14 && dist < bestDist) {
            bestDist = (short)dist;
            bestArmy = i;
        }
    }

    *(short *)(dataArray + 0x38 * 2) = bestArmy;
    *(short *)(dataArray + 0x3A * 2) = bestDist;
}

/* FUN_10015554 (944 bytes) - Execute an attack on a target.
 * targetType: 1=city, 2=ruin, 3=undefended city, 4=enemy army */
int AI_AttackTarget(short heroSlot, short targetType, int dataArray, short param4)
{
    int   *gameState = (int *)gGameState;
    int   *unitTable = (int *)gUnitTypeTable;
    short  unitIdx = *(short *)(dataArray + heroSlot * 2);
    int    unitBase;
    short  targetX, targetY;

    if (unitIdx == -1) return 0;
    unitBase = *unitTable + unitIdx * 0x16;

    switch (targetType) {
        case 1: case 3: {  /* Attack city / undefended city */
            short cityIdx = *(short *)(dataArray + 0x30 * 2);
            if (cityIdx == -1) return 0;
            int cityBase = *gameState + cityIdx * 0x20;
            targetX = *(short *)(cityBase + 0x812);
            targetY = *(short *)(cityBase + 0x814);
            *(unsigned int *)(unitBase + 0xC) =
                (*(unsigned int *)(unitBase + 0xC) & 0xFFFF0FFF) | (3 << 12);
            *(short *)(unitBase + 0x12) = targetX;
            *(short *)(unitBase + 0x14) = targetY;
            *(unsigned short *)(unitBase + 0xC) =
                *(unsigned short *)(unitBase + 0xC) | 0x100;
            return 1;
        }
        case 2: {  /* Explore ruin */
            short ruinIdx = *(short *)(dataArray + 0x3C * 2);
            if (ruinIdx == -1) return 0;
            int ruinBase = *gameState + ruinIdx * 0x1E;
            targetX = *(short *)(ruinBase + 0xD2C);
            targetY = *(short *)(ruinBase + 0xD2E);
            *(unsigned int *)(unitBase + 0xC) =
                (*(unsigned int *)(unitBase + 0xC) & 0xFFFF0FFF) | (2 << 12);
            *(short *)(unitBase + 0x12) = targetX;
            *(short *)(unitBase + 0x14) = targetY;
            *(unsigned short *)(unitBase + 0xC) =
                *(unsigned short *)(unitBase + 0xC) | 0x100;
            return 1;
        }
        case 4: {  /* Attack enemy army */
            short armyIdx = *(short *)(dataArray + 0x38 * 2);
            if (armyIdx == -1) return 0;
            int armyBase = *gameState + armyIdx * 0x42;
            targetX = *(short *)(armyBase + 0x1604);
            targetY = *(short *)(armyBase + 0x1606);
            *(unsigned int *)(unitBase + 0xC) =
                (*(unsigned int *)(unitBase + 0xC) & 0xFFFF0FFF) | (1 << 12);
            *(unsigned int *)(unitBase + 0xC) =
                (*(unsigned int *)(unitBase + 0xC) & 0xFFFFFF80) | (armyIdx & 0x7F);
            *(short *)(unitBase + 0x12) = targetX;
            *(short *)(unitBase + 0x14) = targetY;
            *(unsigned short *)(unitBase + 0xC) =
                *(unsigned short *)(unitBase + 0xC) | 0x100;
            return 1;
        }
    }
    return 0;
}

/* FUN_10016344 (416 bytes) - Attack an enemy army directly. */
int AI_AttackEnemyArmy(short heroSlot, int dataArray)
{
    return AI_AttackTarget(heroSlot, 4, dataArray, 0);
}

/* FUN_10015324 (560 bytes) - Handle an active alliance quest. */
int AI_HandleAllianceQuest(short heroSlot, int dataArray)
{
    int   *gameState = (int *)gGameState;
    short  currentPlayer = GS->current_player;
    int    questBase = *gameState + currentPlayer * 0xC;

    if (*(short *)(questBase + 0x1142) == 0) return 0;
    if (*(short *)(questBase + 0x1146) != *(short *)(dataArray + heroSlot * 2))
        return 0;

    {
        short questType = *(short *)(questBase + 0x1144);
        if (questType == 4 || questType == 5)
            return AI_AttackTarget(heroSlot, 1, dataArray, 0);
    }
    return 0;
}

/* FUN_10015030 (440 bytes) - Check if army can reach a city. */
int AI_CanReachCity(short cityIdx, short unitIdx)
{
    int   *gameState = (int *)gGameState;
    int   *unitTable = (int *)gUnitTypeTable;
    int    cityBase, unitBase;
    short  cityX, cityY, unitX, unitY;
    int    dist;

    if ((int)cityIdx < 0 || (int)cityIdx >= (int)*(short *)(*gameState + 0x1602))
        return 0;

    cityBase = *gameState + cityIdx * 0x42;
    cityX = *(short *)(cityBase + 0x1604);
    cityY = *(short *)(cityBase + 0x1606);

    unitBase = *unitTable + unitIdx * 0x16;
    unitX = *(short *)(*unitTable + unitIdx * 0x16);
    unitY = *(short *)(unitBase + 2);

    dist = CalcDistance(unitX, unitY, cityX, cityY);
    if (dist <= 0x19 && *(char *)(unitBase + 7) >= '\x03')
        return 1;
    return 0;
}

/* FUN_100151e8 (316 bytes) - Assemble best army around a hero. */
void AI_AssembleHeroArmy(short unitIdx)
{
    int   *unitTable = (int *)gUnitTypeTable;
    int   *gameState = (int *)gGameState;
    int    unitBase;
    short  heroX, heroY;
    short  i, totalUnits;

    unitBase = *unitTable + unitIdx * 0x16;
    heroX = *(short *)(*unitTable + unitIdx * 0x16);
    heroY = *(short *)(unitBase + 2);

    totalUnits = *(short *)(*gameState + 0x182);
    for (i = totalUnits - 1; i >= 0; i--) {
        int uBase = *unitTable + i * 0x16;
        if (i == unitIdx) continue;
        if (*(char *)(uBase + 5) != (char)GS->current_player) continue;

        if (*(short *)(*unitTable + i * 0x16) < heroX - 1 ||
            *(short *)(*unitTable + i * 0x16) > heroX + 1) continue;
        if (*(short *)(uBase + 2) < heroY - 1 ||
            *(short *)(uBase + 2) > heroY + 1) continue;

        /* Set following orders to hero's linked army */
        {
            unsigned int heroFlags = *(unsigned int *)(unitBase + 0xC);
            if ((heroFlags >> 0xC & 0xF) == 0) {
                short heroArmy = heroFlags & 0x7F;
                *(unsigned int *)(uBase + 0xC) =
                    (*(unsigned int *)(uBase + 0xC) & 0xFFFF0FFF) | (1 << 12);
                *(unsigned int *)(uBase + 0xC) =
                    (*(unsigned int *)(uBase + 0xC) & 0xFFFFFF80) | (heroArmy & 0x7F);
            }
        }
    }
}

/* FUN_10013a10 (728 bytes) - Attack a city with a unit.
 * Checks if unit is at city location, handles combat, and
 * processes quest/hero special events after city capture. */
int AI_AttackCity(short unitIdx, short cityIdx)
{
    int   *gameState  = (int *)gGameState;
    int   *unitTable  = (int *)gUnitTypeTable;
    int   *classTable = (int *)gUnitClassTable;
    int    cityBase, unitBase;
    short  cityX, cityY;
    int    cityOff;

    cityOff = cityIdx;
    cityBase = *gameState + cityOff * 0x20;
    cityX = *(short *)(cityBase + 0x812);
    cityY = *(short *)(cityBase + 0x814);

    unitBase = *unitTable + unitIdx * 0x16;

    /* Verify unit is at city location and has movement */
    if (*(short *)(*unitTable + unitIdx * 0x16) != cityX ||
        *(short *)(unitBase + 2) != cityY ||
        *(char *)(unitBase + 7) == '\0')
        return 0;

    /* Check terrain type: 0x0B = city terrain */
    {
        int terrainIdx = *(unsigned int *)(*((int *)gMapTiles) +
                          cityY * 0xE0 + cityX * 2) >> 0x18;
        if (*(char *)(*gameState + terrainIdx + 0x711) == '\x0B') {
            /* City capture logic */
            char cityOwner = *(char *)(cityBase + 0x82A);
            if (cityOwner == '\x01') {
                /* Owned city - initiate siege/combat */
                ScanDefenseGrid();

                /* Process quest conditions */
                if (*(char *)(unitBase + 4) == '\x1C') {
                    /* Hero at city - check for quest completion */
                    if (GS->allied_victory_enabled != 0 &&
                        *(short *)(*gameState + GS->current_player * 0xC + 0x1142) == 0) {
                        ProcessQuestReward(1);
                    }
                }
            }
        }
    }
    return 1;
}

/* FUN_10013d0c (1288 bytes) - Process result of a combat/movement step.
 * Called after each pathfinding step during hero movement.
 * Returns: 0 = blocked/failed, 1 = combat occurred, 2 = moved freely */
int AI_ProcessCombatResult(short *pathBuffer)
{
    int   *gameState = (int *)gGameState;
    int   *unitTable = (int *)gUnitTypeTable;

    /* The path buffer contains the step-by-step movement path.
     * Process each step, checking for enemy encounters. */
    if (pathBuffer == (short *)0) return 0;

    /* Execute the move along the path */
    {
        short stepX = pathBuffer[0];
        short stepY = pathBuffer[1];
        if (stepX == -1) return 0;

        /* Check for enemy at destination */
        short armyCount = *(short *)(*gameState + 0x1602);
        short i;
        for (i = armyCount - 1; i >= 0; i--) {
            int armyBase = *gameState + i * 0x42;
            if (*(short *)(armyBase + 0x1604) == stepX &&
                *(short *)(armyBase + 0x1606) == stepY) {
                char owner = *(char *)(armyBase + 0x1619);
                if (owner != (char)GS->current_player && owner != '\x0F') {
                    return 1;  /* combat */
                }
            }
        }
        return 2;  /* free movement */
    }
}

/* FUN_100143b8 (528 bytes) - Find best movable army for assignment.
 * Iterates through all armies, evaluates position scores via FindBestTarget,
 * and picks the one with the lowest (best) score. Filters out moved armies,
 * the hero's own army, and enemies/non-allied. Applies bonuses for
 * own-player armies and defensive-state armies. */
int AI_FindBestMovableArmy(short param_1)
{
    int   *gameState  = (int *)gGameState;
    int   *extState   = (int *)gExtState;
    int   *mapTiles   = (int *)gMapTiles;

    short  armyCount;
    int    bestArmy = -1;
    short  bestScore = 1000;
    short  armyIdx;
    int    armyBase, terrainIdx;
    char   owner;
    short  targetCoords[23];
    char   targetBuf[2];
    long   influenceMap;

    influenceMap = AllocInfluenceMap();
    armyCount = *(short *)(*gameState + 0x1602);

    while (armyCount != 0) {
        armyCount = armyCount - 1;
        armyIdx = armyCount;
        armyBase = *gameState + armyIdx * 0x42;

        /* Get terrain type at army position */
        terrainIdx = *(unsigned int *)(*mapTiles +
                      *(short *)(armyBase + 0x1606) * 0xE0 +
                      *(short *)(armyBase + 0x1604) * 2) >> 0x18;

        /* Skip if army is on road terrain (type 10) */
        {
            char terrainType = *(char *)(*gameState + terrainIdx + 0x711);
            long check = -(long)terrainType + 10;
            if (check != 0)
                continue;
        }

        /* Skip if army already moved this turn */
        if ((*(unsigned char *)(*extState + armyIdx + 0x11E) & 1) != 0)
            continue;

        /* Skip if this is the hero's own army */
        if (armyIdx == *(short *)(*extState + 0x46))
            continue;

        /* Check ownership: must be neutral (0xF) or allied with current player */
        owner = *(char *)(armyBase + 0x1619);
        if (owner != 0x0F &&
            (int)owner != (int)*(short *)(*gameState + 0x110)) {
            /* Check diplomacy: must be allied (bits 26-27 == 2) */
            if ((*(unsigned int *)(*gameState +
                  *(short *)(*gameState + 0x110) * 0x10 +
                  owner * 2 + 0x1582) >> 0x1A & 3) != 2)
                continue;
        }

        /* Evaluate this army's best target */
        {
            short score = FindBestTarget(armyIdx, targetCoords, targetBuf,
                                         influenceMap, 0);

            /* Skip if no valid target found */
            if (targetCoords[0] == -1)
                continue;

            /* If army is owned by current player, apply bonuses */
            if ((int)*(char *)(*gameState + armyIdx * 0x42 + 0x1619) ==
                (int)*(short *)(*gameState + 0x110)) {
                short bonus;
                if (*(char *)(*extState + (int)armyIdx + 0x56) == '\x07') {
                    bonus = 10;  /* guarding armies get small bonus */
                } else {
                    bonus = 30;  /* other own armies get larger bonus */
                }
                score = score + bonus;

                /* Extra penalty if param_1 > 3 (deep in assignment pass) */
                if (3 < param_1) {
                    score = score + 100;
                }
            } else {
                /* Neutral/allied army: check movement cost to position */
                int moveCost = EvaluatePosition(
                    *(short *)(*gameState + armyIdx * 0x42 + 0x1604),
                    *(short *)(*gameState + armyIdx * 0x42 + 0x1606));
                if (moveCost <= 0x4A)
                    continue;  /* too far away */
            }

            /* Track best (lowest score) army */
            if (score < bestScore) {
                bestArmy = armyIdx;
                bestScore = score;
            }
        }
    }

    FreeInfluenceMap();
    return bestArmy;
}

/* FUN_100145c8 (948 bytes) - Process a single unit for reassignment.
 * Checks unit strength, finds nearby units, categorizes them by type
 * (hero/infantry/mounted), removes weak units if possible, then either
 * disbands the unit or reassigns it to a movable army via influence map. */
void AI_ProcessSingleUnit(short unitIdx)
{
    int   *unitTable  = (int *)gUnitTypeTable;
    int   *classTable = (int *)gUnitClassTable;

    int    unitOff = (int)unitIdx * 0x16;
    short  nearbyUnits[8];
    short  nearbyCount;
    int    unitBase;
    short  distToPlayer;
    int    isBelowThreshold = 0;  /* bVar5 */

    /* Calculate distance to current player's position */
    distToPlayer = AI_FindNearestFriendly(
        *(short *)(*unitTable + unitOff),
        *(short *)(*unitTable + unitOff + 2),
        *(short *)(*((int *)gGameState) + 0x110));

    /* Check if unit is weak: strength < 3 or movement < 8 */
    if (*(char *)(*unitTable + unitOff + 8) < '\x03' ||
        *(char *)(*unitTable + unitOff + 6) < '\x08') {
        isBelowThreshold = 1;
    }

    /* If unit class has no movement capability (class byte 0 == 0) and is weak, disband */
    if (*(char *)(*classTable + *(char *)(*unitTable + unitIdx * 0x16 + 4) * 6) == '\0' &&
        isBelowThreshold) {
        DisbandUnit(unitIdx, 1);
        return;
    }

    /* Find units in range of this unit's position */
    nearbyCount = FindUnitsInRange(
        *(short *)(*unitTable + unitIdx * 0x16),
        *(short *)(*unitTable + unitIdx * 0x16 + 2),
        nearbyUnits, 8);

    if (nearbyCount == 0)
        return;

    {
        int  removedAny = 0;
        int  i;
        short heroCount = 0, infantryCount = 0, mountedCount = 0;

        /* First pass: remove weak nearby units (movement < 8) */
        for (i = 7; i >= 0; i--) {
            if (nearbyUnits[i] != -1 &&
                *(char *)(*unitTable + nearbyUnits[i] * 0x16 + 7) < '\x08') {
                nearbyUnits[i] = -1;
                removedAny = 1;
            }
        }

        /* Second pass: categorize remaining nearby units */
        for (i = 7; i >= 0; i--) {
            short nearUnit = nearbyUnits[i];
            if (nearUnit != -1) {
                if (*(char *)(*classTable +
                    *(char *)(*unitTable + nearUnit * 0x16 + 4) * 6) == '\0') {
                    /* Non-mobile class */
                    if (*(char *)(*unitTable + nearUnit * 0x16 + 4) == '\x1C') {
                        heroCount++;  /* hero type */
                    } else {
                        infantryCount++;
                    }
                } else {
                    mountedCount++;  /* mobile class */
                }
            }
        }

        /* If all three categories present, remove infantry (keep heroes and mounted) */
        if (mountedCount != 0 && heroCount != 0 && infantryCount != 0) {
            for (i = 7; i >= 0; i--) {
                short nearUnit = nearbyUnits[i];
                if (nearUnit != -1) {
                    char unitClass = *(char *)(*unitTable + nearUnit * 0x16 + 4);
                    if (*(char *)(*classTable + unitClass * 6) == '\0' &&
                        unitClass != '\x1C') {
                        nearbyUnits[i] = -1;
                        removedAny = 1;
                    }
                }
            }
        }

        /* Apply filtered unit list if any were removed */
        if (removedAny) {
            FilterEnemyUnits(nearbyUnits);
        }

        /* If too few nearby units and unit is weak, disband */
        if (nearbyCount < 2 && isBelowThreshold) {
            DisbandUnit(unitIdx, 1);
            return;
        }

        /* Otherwise, set up influence map and try to find a movable army */
        PrepareUnitDisplay();
        {
            short moveRange;
            /* Compute movement range based on unit strength */
            unsigned char strength = *(unsigned char *)(*unitTable + unitIdx * 0x16 + 8);
            moveRange = (short)(((int)((char)strength >> 1) +
                        ((char)strength < 0 && (strength & 1) != 0 ? 1 : 0)) * 5 * 2);

            /* Apply alternative range calculation */
            short altRange = distToPlayer + 10;
            if (altRange < moveRange) {
                moveRange = altRange;
            }

            /* If no influence data available, use fixed range of 50 */
            /* (ppuVar8[-0xfc] == 0 check from decompilation) */
            if (moveRange > 50) moveRange = 50;

            SetupInfluenceMap(moveRange,
                *(short *)(*unitTable + unitIdx * 0x16),
                *(short *)(*unitTable + unitIdx * 0x16 + 2),
                0, 0);

            {
                int bestArmy = AI_FindBestMovableArmy(nearbyCount);
                if (bestArmy == -1) {
                    /* No good army found - release units */
                    ReleaseUnits(nearbyUnits, 1);
                } else {
                    /* Move to best army and center view */
                    MoveArmyToTarget(nearbyUnits, 1, bestArmy, 0);
                    ExecuteArmyMove(0, 0, 0);
                }
            }
        }
    }
}

/* FUN_10012cc8 (888 bytes) - Dispatch an army toward its best target.
 * Evaluates nearby armies, calculates movement costs, and picks the
 * best reachable target. Factors in early-game economy state to
 * choose between aggressive (0x41) and conservative (0x55) thresholds. */
void AI_DispatchToTarget(short armyIdx)
{
    int   *gameState  = (int *)gGameState;
    int   *extState   = (int *)gExtState;
    int   *mapTiles   = (int *)gMapTiles;

    int    armyBase;
    short  armyX;
    char   pathBuf[20];
    unsigned char neighbors[8];
    unsigned char extra[84];
    unsigned char moveCosts[8];
    int    pathCount;
    long   bestTarget = -1;
    unsigned char bestCost = 0;
    short  bestScore = 100;
    int    nearbyBlocked = 0;
    unsigned char threshold;
    int    i;

    armyBase = *gameState + armyIdx * 0x42;
    armyX = *(short *)(armyBase + 0x1604);

    /* Check army state: if guarding (state 7), require moves >= 12 */
    if (*(char *)(*extState + (int)armyIdx + 0x56) == '\x07') {
        if (*(unsigned char *)(*extState + (int)armyIdx + 0x182) < 0x0C) {
            return;
        }
    } else {
        armyX = armyX + 1;  /* offset search position for non-guarding */
    }

    /* Determine aggressiveness threshold based on economy */
    {
        unsigned long playerOff = (unsigned long)*(short *)(*gameState + 0x110);
        int turnCount = *(short *)(*gameState + playerOff * 0x14 + 0x186);
        int treasury = *(short *)(playerOff * 2 + iRam1011762c);
        int income   = *(short *)(playerOff * 2 + iRam10117630);

        if (turnCount < 0x28 && treasury < income) {
            threshold = 0x41;  /* early game / poor: more aggressive */
        } else {
            threshold = 0x55;  /* normal: more conservative */
        }
    }

    /* Find path from army position */
    pathCount = FindUnitsInRange(armyX,
                    *(short *)(armyBase + 0x1606),
                    (short *)pathBuf, 8);

    if (pathCount == 0)
        return;

    /* Skip if army count < 4 and state is garrison(6) or guarding(7) */
    {
        char state = *(char *)(*extState + (int)armyIdx + 0x56);
        if (pathCount <= 3 && (state == '\x06' || state == '\x07'))
            return;
    }

    /* Get adjacent armies for evaluation */
    GetAdjacentArmies((long)armyIdx, 0, neighbors, extra);

    /* Evaluate each neighbor */
    for (i = 5; i >= 0; i--) {
        unsigned char neighborIdx = neighbors[i];
        moveCosts[i] = 0;

        if (neighborIdx == 0xFF)
            continue;

        /* Skip if already moved this turn */
        if ((*(unsigned char *)(*extState + (unsigned int)neighborIdx + 0x11E) & 1) != 0)
            continue;

        {
            int   neighborBase = *gameState + (unsigned int)neighborIdx * 0x42;
            char  owner = *(char *)(neighborBase + 0x1619);
            int   terrainIdx;
            char  terrainType;

            /* Must not be current player */
            if ((int)owner == (int)*(short *)(*gameState + 0x110))
                continue;

            /* Check terrain - must be passable (not road) */
            terrainIdx = *(unsigned int *)(*mapTiles +
                          *(short *)(neighborBase + 0x1606) * 0xE0 +
                          *(short *)(neighborBase + 0x1604) * 2) >> 0x18;
            terrainType = *(char *)(*gameState + terrainIdx + 0x711);
            if (-(long)terrainType + 10 != 0)
                continue;

            /* Skip hero army */
            if ((unsigned short)neighborIdx == *(unsigned short *)(*extState + 0x46))
                continue;

            /* Must be neutral or allied */
            if (owner != 0x0F &&
                (*(unsigned int *)(*gameState +
                  *(short *)(*gameState + 0x110) * 0x10 +
                  owner * 2 + 0x1582) >> 0x1A & 3) != 2)
                continue;

            /* Evaluate position */
            {
                unsigned char moveCost;
                int neighborArmyBase = *gameState + (unsigned int)neighborIdx * 0x42;
                moveCost = (unsigned char)EvaluatePosition(
                    *(short *)(neighborArmyBase + 0x1604),
                    *(short *)(neighborArmyBase + 0x1606));
                moveCosts[i] = moveCost;

                if (moveCost == 0) {
                    /* Zero cost: check proximity constraints */
                    if ((pathCount < 4 && extra[i] < 0x19) ||
                        (pathCount < 6 && extra[i] < 0x0F)) {
                        moveCosts[i] = 0xFF;
                        nearbyBlocked = 1;
                    }
                } else if (moveCost >= threshold) {
                    /* Above threshold: evaluate as potential target */
                    int adjustedThreshold = (int)(short)(psRam101176fc - 2);
                    if (adjustedThreshold < 1) adjustedThreshold = 1;

                    short score = (short)((int)(unsigned int)extra[i] / adjustedThreshold) + 1;
                    if (score < bestScore ||
                        (score == bestScore && moveCost > bestCost)) {
                        bestTarget = (long)neighborIdx;
                        bestScore = score;
                        bestCost = moveCost;
                    }
                }
            }
        }
    }

    /* If no blockages found and we have a valid target, dispatch */
    if (!nearbyBlocked && (int)bestTarget != -1) {
        MoveArmyToTarget((short *)pathBuf, 1, bestTarget, 0);
        ExecuteArmyMove(0, 0, 0);
    }
}

/* FUN_100121f8 (300 bytes) - Check if an army can be engaged/attacked.
 * Returns 1 if the army belongs to a valid target (neutral, at war, or
 * lone ally). Checks diplomacy state: allied=passable, at war=attackable,
 * neutral with certain alliance conditions=attackable. */
int AI_CheckArmyOwnership(short armyIdx)
{
    int   *gameState = (int *)gGameState;
    int   *extState  = (int *)gExtState;

    int    armyBase = *gameState;
    char   owner = *(char *)(armyBase + armyIdx * 0x42 + 0x1619);
    short  allyCount = 0;
    int    lastAlly = 0;
    int    i;
    unsigned int diploState;

    /* Neutral armies are always valid targets */
    if (owner == 0x0F) {
        return 1;
    }

    /* Count allied players */
    for (i = 7; i >= 0; i--) {
        if (*(short *)(*gameState + i * 2 + 0x138) != 0) {
            if ((*(unsigned int *)(*gameState +
                  *(short *)(*gameState + 0x110) * 0x10 +
                  i * 2 + 0x1582) >> 0x1A & 3) == 2) {
                allyCount++;
                lastAlly = i;
            }
        }
    }

    /* Check diplomacy state with army owner */
    diploState = *(unsigned int *)(*gameState +
                   *(short *)(*gameState + 0x110) * 0x10 +
                   owner * 2 + 0x1582) >> 0x1A & 3;

    if (diploState == 2) {
        /* Allied - always passable */
        return 1;
    }

    if (diploState == 1) {
        /* At war - check war-enabled flag */
        if ((*(unsigned short *)(*extState + 0x0C) & 1) != 0) {
            return 1;
        }
        return 0;
    }

    /* Neutral diplomacy (0) - only attack if no allies or this is our only ally */
    if (diploState == 0) {
        if ((allyCount == 0 || (allyCount == 1 && lastAlly == (int)owner)) &&
            (*(unsigned short *)(*extState + 0x0C) & 1) != 0) {
            return 1;
        }
    }

    return 0;
}

/* FUN_10012324 (248 bytes) - Attempt an early-game rush attack.
 * Only activates when current player has cities but target does not,
 * the neutral army pool is available, and the game turn is < 10.
 * Dispatches the army via alliance-attack or alliance-defense depending
 * on the army's evaluated quest condition score. */
int AI_EarlyGameAttack(short armyIdx, short targetPlayer)
{
    int   *gameState = (int *)gGameState;
    int   *extState  = (int *)gExtState;

    short  currentPlayer = *(short *)(*gameState + 0x110);

    /* Condition: current player must have cities, target must not */
    if (*(short *)(*gameState + currentPlayer * 2 + 0xD0) == 0)
        return 0;
    if (*(short *)(*gameState + targetPlayer * 2 + 0xD0) != 0)
        return 0;

    /* Condition: neutral army production pool must be available */
    if (*(short *)(*extState + 0x42) == 0)
        return 0;

    /* Condition: game turn must be early (< 10) */
    {
        short turnCount = *(short *)(*gameState + 0x136);
        if (turnCount < 2) turnCount = 1;
        if (turnCount >= 10)
            return 0;
    }

    /* Don't attack with the hero army */
    if (armyIdx == *(short *)(*extState + 0x46))
        return 0;

    /* Evaluate quest condition and choose attack type */
    {
        int questScore = CheckQuestCondition(armyIdx);
        if (questScore < 200) {
            LaunchAllianceAttack(armyIdx, 0);
        } else {
            LaunchAllianceDefense(armyIdx);
        }
    }

    return 1;
}

int AI_SearchForRuins(void)
{
    /* Stub — original: FUN_1001241c (648 bytes) */
    return 0;
}

void AI_AttackNeutralArmies(void)
{
    /* Stub — original: FUN_100126a4 (1000 bytes) */
}

void AI_ResetUnusedUnits(void)
{
    /* Stub — original: FUN_10014bcc (328 bytes) */
}

int AI_CheckRuinAccessible(short ruinIdx)
{
    /* Stub — original: FUN_10015c48 (384 bytes) */
    return 0;
}

long AI_GetRuinSlotIndex(short cityIdx)
{
    /* Stub — original: FUN_10015904 (124 bytes) */
    return -1;
}

short AI_GetRuinCapability(short cityIdx)
{
    /* Stub — original: FUN_10015980 (72 bytes) */
    return -1;
}

void AI_CheckNearbyThreats(short armyIdx)
{
    /* Stub — original: FUN_1001f894 (196 bytes) */
}

int AI_ProcessFollowOrders(int unitPtr)
{
    /* Stub — original: FUN_10013150 (820 bytes) */
    return 0;
}
