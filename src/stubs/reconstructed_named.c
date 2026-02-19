/*
 * reconstructed_named.c - Named function implementations
 *
 * Maps human-readable names to their Ghidra FUN_XXXXXXXX originals.
 * Extracted from Ghidra decompilation of Warlords II PowerPC binary.
 *
 * Address mappings determined from extern declarations in:
 *   ai/ai.c, combat/combat.c, economy/economy.c, mapgen/mapgen.c,
 *   movement/movement.c, rendering/rendering.c, serialization/serialization.c,
 *   sound/sound.c, framework/framework.c
 */

#include "warlords2.h"

/* =========================================================================
 * Forward declarations for internal calls
 * ========================================================================= */
int FUN_10117884();
void FUN_10000150(void);
int FUN_10000090(void *exception_buf);
void FUN_10000378(int);
int FUN_10000468(void);
void FUN_10001590(void);
void FUN_10002bc8(int, int);
void FUN_1005f50c(int, int, int);
void FUN_100f5640(void);
void FUN_100b0a18(int, int);

/* External globals */
extern int iRam101177b0;
extern char *pcRam10117378;
extern int *puRam10117170;
extern int *piRam10117114;

/* =========================================================================
 * AbsShort - Absolute value (Mac OS Toolbox trampoline)
 * Original: FUN_10003768, 24 bytes (TVect trampoline)
 * ========================================================================= */
short AbsShort(long value)
{
    /* TVect trampoline to abs() */
    return (short)((value < 0) ? -value : value);
}


/* =========================================================================
 * ActivateAttackEvent - Clear siege slot / activate attack
 * Original: FUN_1000de24
 * ========================================================================= */
int ActivateAttackEvent(void)
{
    /* FUN_1000de24 - implemented in combat.c or ai.c */
    return 0;
}


/* =========================================================================
 * AddResource - Mac OS Resource Manager: AddResource wrapper
 * Original: FUN_10002568, 24 bytes (TVect trampoline)
 * ========================================================================= */
int AddResource(int handle, long resType, short resID, void *data)
{
    /* Mac OS Toolbox wrapper - AddResource */
    return 0;
}


/* =========================================================================
 * AdvanceGroupToTarget - Move army group toward target
 * Original: FUN_1001cd68
 * ========================================================================= */
int AdvanceGroupToTarget(int groupIdx)
{
    /* FUN_1001cd68 - movement system, implemented in movement.c */
    return 0;
}


/* =========================================================================
 * AI_SelectUnitsForArmy - AI unit selection for army composition
 * Original: address not mapped (called from ai.c)
 * ========================================================================= */
int AI_SelectUnitsForArmy(short armyIdx, short unitCount, int unitBuf, int outputBuf)
{
    /* AI army composition selection */
    return 0;
}


/* =========================================================================
 * AllocateBlock - Heap block allocator (NewPtr equivalent)
 * Original: FUN_100f1640, 96 bytes
 * ========================================================================= */
/* Implemented in reconstructed_5.c as FUN_100f1640 */
void *AllocateBlock(long size)
{
    /* FUN_100f1640 - NewPtr wrapper */
    return (void *)(long)FUN_100f1640((int)size);
}


/* =========================================================================
 * AllocateHandle - Handle allocator (NewHandle equivalent)
 * Original: FUN_100f15e0, 96 bytes
 * ========================================================================= */
void *AllocateHandle(long size)
{
    /* FUN_100f15e0 - NewHandle wrapper */
    return (void *)(long)FUN_100f15e0((int)size);
}


/* =========================================================================
 * AllocateMemory - Memory allocator (same as AllocateBlock)
 * Original: FUN_100f1640
 * ========================================================================= */
void *AllocateMemory(long size)
{
    /* FUN_100f1640 - alias for AllocateBlock */
    return AllocateBlock(size);
}


/* =========================================================================
 * AllocInfluenceMap - Allocate AI influence map buffer
 * Original: FUN_10044950
 * ========================================================================= */
long AllocInfluenceMap(void)
{
    /* FUN_10044950 - AI subsystem */
    return 0;
}


/* =========================================================================
 * AppendSTRSuffix - Append string resource suffix
 * Original: FUN_100b1b90
 * ========================================================================= */
void *AppendSTRSuffix(unsigned char *dst, unsigned long addr, short index)
{
    /* FUN_100b1b90 - string utility */
    return (void *)0;
}


/* =========================================================================
 * AssignPlayerHomeCities - Assign home cities to players (mapgen)
 * Original: FUN_100a88d0 (FAILED decompile)
 * ========================================================================= */
int AssignPlayerHomeCities(void)
{
    /* FUN_100a88d0 - map generation phase */
    return 0;
}


/* =========================================================================
 * AssignPlayerStartPositions - Assign player start positions
 * Original: FUN_100ab334
 * ========================================================================= */
int AssignPlayerStartPositions(void)
{
    /* FUN_100ab334 - map generation phase */
    return 0;
}


/* =========================================================================
 * AssignTerrainGraphics - Assign tile graphics based on terrain
 * Original: FUN_100a4ae8
 * ========================================================================= */
int AssignTerrainGraphics(void)
{
    /* FUN_100a4ae8 - map generation phase */
    return 0;
}


/* =========================================================================
 * AssignToDefense - Assign unit to defense duty
 * Original: FUN_1001a348
 * ========================================================================= */
int AssignToDefense(long unitIdx, long targetIdx)
{
    /* FUN_1001a348 - AI/combat */
    return 0;
}


/* =========================================================================
 * BuildPascalString - Build Pascal string from C parameters
 * Original: FUN_100b19f4, 188 bytes
 * ========================================================================= */
/* Implemented in reconstructed_5.c as FUN_100b19f4 */
int BuildPascalString(unsigned char *dst, ...)
{
    /* FUN_100b19f4 - string utility */
    if (dst != (unsigned char *)0) {
        dst[0] = 0;
    }
    return 0;
}


/* =========================================================================
 * BuildRoadConnectivityGraph - Build road graph for map
 * Original: FUN_100a49cc
 * ========================================================================= */
int BuildRoadConnectivityGraph(void)
{
    /* FUN_100a49cc - mapgen road system */
    return 0;
}


/* =========================================================================
 * BuildRoadSegment - Build single road segment between endpoints
 * Original: FUN_100a9f78
 * ========================================================================= */
int BuildRoadSegment(void *buf, int ep1, int ep2)
{
    /* FUN_100a9f78 - mapgen road system */
    return 0;
}


/* =========================================================================
 * CalcArmyStrength - Calculate army combat strength
 * Original: FUN_1000fe90, 336 bytes
 * ========================================================================= */
int CalcArmyStrength(short armyIdx)
{
    /* FUN_1000fe90 - combat system (implemented in combat.c) */
    return 0;
}


/* =========================================================================
 * CalcPathCost - Calculate path movement cost
 * Original: FUN_1001eff8 (via movement.c)
 * ========================================================================= */
int CalcPathCost(short armyIdx, short destX, short destY)
{
    /* FUN_1001eff8 - pathfinding (implemented in movement.c) */
    return 0;
}


/* =========================================================================
 * CheckArmyEscort - Check if army has escort units
 * Original: FUN_1001e4b0
 * ========================================================================= */
int CheckArmyEscort(short armyIdx)
{
    /* FUN_1001e4b0 - movement/AI */
    return 0;
}


/* =========================================================================
 * CheckHeroQuest - Check hero quest availability
 * Original: FUN_10039e24
 * ========================================================================= */
int CheckHeroQuest(int unitPtr)
{
    /* FUN_10039e24 - quest system */
    return 0;
}


/* =========================================================================
 * CheckQuestCondition - Evaluate quest completion condition
 * Original: FUN_1004639c
 * ========================================================================= */
int CheckQuestCondition(long unitIdx)
{
    /* FUN_1004639c - quest system */
    return 0;
}


/* =========================================================================
 * CloseStream - Close resource stream
 * Original: FUN_100523a8
 * ========================================================================= */
int CloseStream(int *stream, short release)
{
    /* FUN_100523a8 - serialization */
    return 0;
}


/* =========================================================================
 * ConcatBuildName - Concatenate name components
 * Original: FUN_100b1ed0
 * ========================================================================= */
int ConcatBuildName(unsigned char *dst, unsigned char *a, unsigned char *b)
{
    /* FUN_100b1ed0 - string utility */
    return 0;
}


/* =========================================================================
 * ConcatPStrings - Concatenate Pascal strings
 * Original: FUN_100b1c88, 148 bytes
 * ========================================================================= */
int ConcatPStrings(unsigned char *dst, short mode, void *src)
{
    /* FUN_100b1c88 - Pascal string concat with mode */
    return 0;
}


/* =========================================================================
 * ConnectWaypoints - Connect two waypoints with road
 * Original: FUN_1009f350
 * ========================================================================= */
int ConnectWaypoints(long packedFrom, long packedTo)
{
    /* FUN_1009f350 - mapgen road connectivity */
    return 0;
}


/* =========================================================================
 * ConnectWaypointsViaEdge - Connect waypoints via map edge
 * Original: FUN_1009f524
 * ========================================================================= */
int ConnectWaypointsViaEdge(long packedFrom, long packedTo)
{
    /* FUN_1009f524 - mapgen road connectivity */
    return 0;
}


/* =========================================================================
 * CopyBits_Thunk - Mac OS QuickDraw CopyBits wrapper
 * Original: FUN_100008d0, 24 bytes (TVect trampoline)
 * ========================================================================= */
int CopyBits_Thunk(int src, int dst, void *srcR, void *dstR, short mode, int rgn)
{
    /* Mac OS Toolbox wrapper - CopyBits */
    CopyBits((void *)(long)src, (void *)(long)dst, srcR, dstR, mode, (void *)(long)rgn);
    return 0;
}


/* =========================================================================
 * CopyResourceToDoc - Copy resource into document
 * Original: FUN_10029dcc, 184 bytes
 * ========================================================================= */
int CopyResourceToDoc(void *doc, void *res)
{
    /* FUN_10029dcc - resource/doc management */
    return 0;
}


/* =========================================================================
 * CopyScenarioData - Copy scenario data buffer
 * Original: address context-dependent (called from mapgen)
 * ========================================================================= */
int CopyScenarioData(void *src, int dest)
{
    /* Copies scenario resource data to game state buffer */
    return 0;
}


/* =========================================================================
 * CopyString - Copy C string (BlockMoveData equivalent)
 * Original: FUN_10001e78, 24 bytes (TVect trampoline)
 * ========================================================================= */
int CopyString(void *dest, char *src)
{
    /* Mac OS Toolbox wrapper - BlockMoveData / string copy */
    if (dest && src) {
        char *d = (char *)dest;
        while ((*d++ = *src++) != '\0');
    }
    return 0;
}


/* =========================================================================
 * CreateUnitTemplate - Create unit type template record
 * Original: FUN_1004a0c4
 * ========================================================================= */
long CreateUnitTemplate(short typeId, char *a, short *b,
                        char *c, short *d, char *e)
{
    /* FUN_1004a0c4 - unit creation */
    return 0;
}


/* =========================================================================
 * CutWaterChannel - Cut water channel through terrain
 * Original: FUN_100a8d88
 * ========================================================================= */
int CutWaterChannel(short channelWidth, short stopAtOcean, short extraWidth)
{
    /* FUN_100a8d88 - mapgen terrain */
    return 0;
}


/* =========================================================================
 * DetachResource - Mac OS Resource Manager: DetachResource
 * Original: FUN_10002598, 24 bytes (TVect trampoline)
 * ========================================================================= */
int DetachResource(void *h)
{
    /* Mac OS Toolbox wrapper - DetachResource / HLock */
    return 0;
}


/* =========================================================================
 * DetachResource_Thunk - DetachResource alias
 * Original: FUN_10002598
 * ========================================================================= */
int DetachResource_Thunk(void *h)
{
    /* Mac OS Toolbox wrapper - DetachResource */
    return DetachResource(h);
}


/* =========================================================================
 * DiceRoll - Random dice roll (numDice x dieSize + bonus)
 * Original: FUN_1005f230, 252 bytes
 * ========================================================================= */
/* Implemented in core/utils.c as RandomRange */
short DiceRoll(short numDice, short dieSize, short bonus)
{
    /* FUN_1005f230 - alias for RandomRange */
    short total = 0;
    short i;
    if (dieSize == 0) return bonus;
    for (i = 0; i < numDice; i++) {
        total += (short)((Random() % (unsigned long)dieSize) + 1);
    }
    return total + bonus;
}


/* =========================================================================
 * DisbandUnit - Remove unit from army
 * Original: FUN_1000fc38
 * ========================================================================= */
int DisbandUnit(short unitIdx, short mode)
{
    /* FUN_1000fc38 - combat/unit management */
    return 0;
}


/* =========================================================================
 * DisposeHandle_Thunk - Mac OS Memory Manager: DisposeHandle
 * Original: FUN_10002ad8, 24 bytes (TVect trampoline)
 * ========================================================================= */
int DisposeHandle_Thunk(void *h)
{
    /* Mac OS Toolbox wrapper - DisposeHandle */
    DisposeHandle((Handle)h);
    return 0;
}


/* =========================================================================
 * DisposeHandleFull - Dispose handle with full cleanup
 * Original: FUN_10002ce8
 * ========================================================================= */
int DisposeHandleFull(int h)
{
    /* FUN_10002ce8 - extended dispose */
    return 0;
}


/* =========================================================================
 * DisposePtr_Thunk - Mac OS Memory Manager: DisposePtr
 * Original: FUN_100f5708
 * ========================================================================= */
int DisposePtr_Thunk(void *p)
{
    /* Mac OS Toolbox wrapper - DisposePtr */
    DisposePtr((Ptr)p);
    return 0;
}


/* =========================================================================
 * DrawRoadBetweenNeutral - Draw road between neutral cities
 * Original: FUN_100a3280
 * ========================================================================= */
int DrawRoadBetweenNeutral(long from, long to)
{
    /* FUN_100a3280 - mapgen roads */
    return 0;
}


/* =========================================================================
 * DrawRoadBetweenPlayer - Draw road between player cities
 * Original: FUN_100a32b8
 * ========================================================================= */
int DrawRoadBetweenPlayer(long from, long to)
{
    /* FUN_100a32b8 - mapgen roads */
    return 0;
}


/* =========================================================================
 * DrawRoadFromCity - Draw road originating from city
 * Original: FUN_100a31d8
 * ========================================================================= */
int DrawRoadFromCity(long packedCityPos)
{
    /* FUN_100a31d8 - mapgen roads */
    return 0;
}


/* =========================================================================
 * DrawStandaloneRoad - Draw standalone road segment
 * Original: FUN_100a3304
 * ========================================================================= */
int DrawStandaloneRoad(long packedCityPos)
{
    /* FUN_100a3304 - mapgen roads */
    return 0;
}


/* =========================================================================
 * DrawTerrainChain - Draw terrain chain (mountain/forest)
 * Original: FUN_100ab368
 * ========================================================================= */
int DrawTerrainChain(short chainType)
{
    /* FUN_100ab368 - mapgen terrain */
    return 0;
}


/* =========================================================================
 * EnsureCityCoastalAccess - Ensure cities have water access
 * Original: FUN_100a39ac
 * ========================================================================= */
int EnsureCityCoastalAccess(void)
{
    /* FUN_100a39ac - mapgen terrain */
    return 0;
}


/* =========================================================================
 * ErodeLandTiles - Erode land tiles near water
 * Original: FUN_100a9628
 * ========================================================================= */
int ErodeLandTiles(void)
{
    /* FUN_100a9628 - mapgen terrain */
    return 0;
}


/* =========================================================================
 * EvaluatePosition - Evaluate map position value
 * Original: FUN_1001eff8
 * ========================================================================= */
int EvaluatePosition(short x, short y)
{
    /* FUN_1001eff8 - movement/AI (implemented in movement.c) */
    return 0;
}


/* =========================================================================
 * ExecuteArmyMove - Execute army movement order
 * Original: FUN_10018180
 * ========================================================================= */
int ExecuteArmyMove(short x, short y, short flags)
{
    /* FUN_10018180 - movement (implemented in movement.c) */
    return 0;
}


/* =========================================================================
 * FilterEnemyUnits - Filter unit list to enemy units only
 * Original: FUN_1001ec20
 * ========================================================================= */
int FilterEnemyUnits(short *unitList)
{
    /* FUN_1001ec20 - AI/combat */
    return 0;
}


/* =========================================================================
 * FindArmySlot - Find empty slot in army
 * Original: FUN_1001e9d0
 * ========================================================================= */
long FindArmySlot(short armyIdx)
{
    /* FUN_1001e9d0 - unit management */
    return 0;
}


/* =========================================================================
 * FindBestTarget - Find best attack target for army
 * Original: FUN_10020d88
 * ========================================================================= */
short FindBestTarget(short armyIdx, short *outCoords,
                     char *buf, long influenceMap, short extended)
{
    /* FUN_10020d88 - AI targeting */
    return 0;
}


/* =========================================================================
 * FindNearestEnemy - Find nearest enemy army
 * Original: FUN_100186cc
 * ========================================================================= */
int FindNearestEnemy(short x, short y, long filterPlayer)
{
    /* FUN_100186cc - movement/AI (implemented in movement.c) */
    return 0;
}


/* =========================================================================
 * FindNextRoadSegment - Find next road segment in path
 * Original: FUN_100a9d34
 * ========================================================================= */
int FindNextRoadSegment(void *buf, void *endpoints, void *len)
{
    /* FUN_100a9d34 - mapgen road */
    return 0;
}


/* =========================================================================
 * FindPath - Find path between two map positions
 * Original: FUN_1001ee88
 * ========================================================================= */
int FindPath(short x, short y, char *pathBuf,
             short terrainBonus, short orderType, short flags)
{
    /* FUN_1001ee88 - pathfinding (implemented in movement.c) */
    return 0;
}


/* =========================================================================
 * FindPrimaryThreat - Identify primary threat direction
 * Original: FUN_1000df58
 * ========================================================================= */
short FindPrimaryThreat(short mode)
{
    /* FUN_1000df58 - AI/combat */
    return 0;
}


/* =========================================================================
 * FindUnitsInRange - Find all units within range of position
 * Original: FUN_1001ed3c
 * ========================================================================= */
int FindUnitsInRange(short x, short y, short *outList, short range)
{
    /* FUN_1001ed3c - movement/AI */
    return 0;
}


/* =========================================================================
 * FlushCityCache - Flush cached city data
 * Original: FUN_1000c7b4
 * ========================================================================= */
int FlushCityCache(void)
{
    /* FUN_1000c7b4 - city management */
    return 0;
}


/* =========================================================================
 * FocusObject - Set focus to MacApp object (unlock handler)
 * Original: FUN_100db26c, 56 bytes
 * ========================================================================= */
/* Implemented in reconstructed_5.c as FUN_100db26c */
int FocusObject(void *obj)
{
    /* FUN_100db26c - MacApp focus management */
    FUN_100db26c((int)(long)obj);
    return 0;
}


/* =========================================================================
 * FormatString - Format number to string (NumToString equivalent)
 * Original: FUN_10001dd0, 24 bytes (TVect trampoline)
 * ========================================================================= */
int FormatString(char *dest, ...)
{
    /* Mac OS Toolbox wrapper - NumToString */
    return 0;
}


/* =========================================================================
 * FreeBlock - Free heap block (DisposePtr wrapper)
 * Original: FUN_100ef580, 56 bytes
 * ========================================================================= */
/* Implemented in reconstructed_5.c */
int FreeBlock(void *ptr)
{
    /* FUN_100ef580 */
    return FUN_100ef580((int)(long)ptr);
}


/* =========================================================================
 * FreeInfluenceMap - Free AI influence map
 * Original: FUN_100449bc
 * ========================================================================= */
int FreeInfluenceMap(void)
{
    /* FUN_100449bc - AI subsystem */
    return 0;
}


/* =========================================================================
 * Get1NamedResource_Thunk - Mac OS: Get1NamedResource wrapper
 * Original: FUN_10002238, 24 bytes (TVect trampoline)
 * ========================================================================= */
int Get1NamedResource_Thunk(int resType, void *name)
{
    /* Mac OS Toolbox wrapper - Get1NamedResource */
    return (int)(long)Get1Resource(resType, 0);
}


/* =========================================================================
 * GetAdjacentArmies - Get armies adjacent to position
 * Original: FUN_1000da14
 * ========================================================================= */
int GetAdjacentArmies(long armyIdx, short mode,
                      unsigned char *neighbors, unsigned char *extra)
{
    /* FUN_1000da14 - army/map query */
    return 0;
}


/* =========================================================================
 * GetAIStateSnapshot - Capture AI state for save
 * Original: FUN_1002bdc4
 * ========================================================================= */
int GetAIStateSnapshot(void)
{
    /* FUN_1002bdc4 - serialization/AI */
    return 0;
}


/* =========================================================================
 * GetArmyInfo - Get army information buffer
 * Original: FUN_1001f648
 * ========================================================================= */
int GetArmyInfo(short armyIdx, short *outBuf)
{
    /* FUN_1001f648 - army data query */
    return 0;
}


/* =========================================================================
 * GetBitMapPtr - Get bitmap pointer for rect
 * Original: FUN_100b0578, 4 bytes (NOP)
 * ========================================================================= */
int GetBitMapPtr(void *r)
{
    /* FUN_100b0578 - returns immediately (NOP in decompilation) */
    return 0;
}


/* =========================================================================
 * GetCityByIndex - Get city data pointer by index
 * Original: FUN_1000d910, 156 bytes
 * ========================================================================= */
void *GetCityByIndex(short cityIndex)
{
    /* FUN_1000d910 - city data access */
    return (void *)0;
}


/* =========================================================================
 * GetGWorld_Wrapper - QuickDraw GetGWorld wrapper
 * Original: FUN_10000870 (TVect trampoline)
 * ========================================================================= */
int GetGWorld_Wrapper(int *port, int *gdh)
{
    /* Mac OS Toolbox wrapper - GetGWorld */
    if (port) *port = 0;
    if (gdh) *gdh = 0;
    return 0;
}


/* =========================================================================
 * GetNamedResource - Mac OS: GetResource wrapper
 * Original: FUN_10003558
 * ========================================================================= */
void *GetNamedResource(long resType, short resID)
{
    /* FUN_10003558 - resource manager */
    return (void *)0;
}


/* =========================================================================
 * GetNeighborArmies - Get neighboring army indices
 * Original: FUN_10018574
 * ========================================================================= */
int GetNeighborArmies(short armyIdx, unsigned char *neighbors,
                      unsigned char *extra)
{
    /* FUN_10018574 - army/map query */
    return 0;
}


/* =========================================================================
 * GetResInfo_Thunk - Mac OS: GetResInfo wrapper
 * Original: FUN_10001758, 24 bytes (TVect trampoline)
 * ========================================================================= */
int GetResInfo_Thunk(void *h, short *id, void *type, void *name)
{
    /* Mac OS Toolbox wrapper - GetResInfo */
    if (id) *id = 0;
    return 0;
}


/* =========================================================================
 * GetResource_Thunk - Mac OS: GetResource wrapper
 * Original: FUN_10001728, 24 bytes (TVect trampoline)
 * ========================================================================= */
int GetResource_Thunk(int resType, short resID)
{
    /* Mac OS Toolbox wrapper - GetResource */
    return (int)(long)GetResource(resType, resID);
}


/* =========================================================================
 * GetResourceStream - Open resource as stream
 * Original: FUN_10052184
 * ========================================================================= */
int *GetResourceStream(unsigned long resType, short resID, short openMode)
{
    /* FUN_10052184 - serialization */
    return (int *)0;
}


/* =========================================================================
 * GetScoreSnapshot - Get current score data for save
 * Original: FUN_10050bb0
 * ========================================================================= */
int GetScoreSnapshot(void *outBuf)
{
    /* FUN_10050bb0 - serialization */
    return 0;
}


/* =========================================================================
 * GetStringFromSTR - Get string from STR# resource
 * Original: FUN_1005f6b0, 56 bytes
 * ========================================================================= */
void *GetStringFromSTR(char *dst, unsigned long strListAddr, short index)
{
    /* FUN_1005f6b0 - calls FUN_1005f50c(1, strListAddr, index) */
    FUN_1005f50c(1, (int)strListAddr, (int)index);
    return (void *)0;
}


/* =========================================================================
 * GetSTRValueAt - Get string value at index from STR# resource
 * Original: FUN_1005f678, 56 bytes
 * ========================================================================= */
void *GetSTRValueAt(short resID, short index)
{
    /* FUN_1005f678 - calls FUN_1005f50c(0, resID, index) */
    FUN_1005f50c(0, (int)resID, (int)index);
    return (void *)0;
}


/* =========================================================================
 * GetUnitStats - Get unit type statistics
 * Original: FUN_10049628 (implemented in economy.c)
 * ========================================================================= */
int GetUnitStats(unsigned char typeId, char *buffer)
{
    /* FUN_10049628 - unit data access */
    return 0;
}


/* =========================================================================
 * HLock_Thunk - Mac OS Memory Manager: HLock
 * Original: FUN_10001290 (rendering.c) or FUN_10000b70 (sound.c)
 * ========================================================================= */
int HLock_Thunk(int h)
{
    /* Mac OS Toolbox wrapper - HLock */
    HLock((Handle)(long)h);
    return 0;
}


/* =========================================================================
 * HUnlock_Thunk - Mac OS Memory Manager: HUnlock
 * Original: FUN_10003468, 24 bytes (TVect trampoline)
 * ========================================================================= */
int HUnlock_Thunk(int h)
{
    /* Mac OS Toolbox wrapper - HUnlock */
    HUnlock((Handle)(long)h);
    return 0;
}


/* =========================================================================
 * InitArmyData - Initialize army data structures
 * Original: FUN_10045ac8
 * ========================================================================= */
int InitArmyData(void)
{
    /* FUN_10045ac8 - game initialization */
    return 0;
}


/* =========================================================================
 * InitArmyProduction - Initialize army production queues
 * Original: FUN_10049e68
 * ========================================================================= */
int InitArmyProduction(void)
{
    /* FUN_10049e68 - economy initialization */
    return 0;
}


/* =========================================================================
 * InitCityNames - Initialize city name table
 * Original: FUN_10045170
 * ========================================================================= */
int InitCityNames(void)
{
    /* FUN_10045170 - game initialization */
    return 0;
}


/* =========================================================================
 * InitDataStructures - Initialize core game data from resources
 * Original: FUN_10040408
 * ========================================================================= */
int InitDataStructures(void *a, void *b, void *c,
                       void *d, void *e, void *f, void *g)
{
    /* FUN_10040408 - game initialization */
    return 0;
}


/* =========================================================================
 * InitPlayerData - Initialize player data arrays
 * Original: FUN_10025f98
 * ========================================================================= */
int InitPlayerData(void)
{
    /* FUN_10025f98 - game initialization */
    return 0;
}


/* =========================================================================
 * InitSpecialLocations - Initialize ruins/temples/libraries
 * Original: FUN_1001d15c
 * ========================================================================= */
int InitSpecialLocations(void)
{
    /* FUN_1001d15c - game initialization */
    return 0;
}


/* =========================================================================
 * IsHandleValid - Check if Mac OS handle is valid
 * Original: FUN_100ef2f8, 56 bytes
 * ========================================================================= */
int IsHandleValid(void *h)
{
    /* FUN_100ef2f8 - validates handle pointer */
    long val;
    long inv;
    if (h == (void *)0) return 0;
    val = FUN_10000468();
    inv = -val - 1;
    return (int)((inv + ((inv == 0) ? 1 : 0)) & 0xff);
}


/* =========================================================================
 * LaunchAllianceAttack - Launch allied attack
 * Original: FUN_1001bbf0
 * ========================================================================= */
int LaunchAllianceAttack(long armyIdx, short mode)
{
    /* FUN_1001bbf0 - AI/combat */
    return 0;
}


/* =========================================================================
 * LaunchAllianceDefense - Launch allied defense
 * Original: FUN_1001ba60
 * ========================================================================= */
int LaunchAllianceDefense(long armyIdx)
{
    /* FUN_1001ba60 - AI/combat */
    return 0;
}


/* =========================================================================
 * LineTo_Thunk - Mac OS QuickDraw: LineTo wrapper
 * Original: FUN_10000288, 24 bytes (TVect trampoline)
 * ========================================================================= */
int LineTo_Thunk(short dh, short dv)
{
    /* Mac OS Toolbox wrapper - LineTo */
    LineTo(dh, dv);
    return 0;
}


/* =========================================================================
 * LockPixels_Wrapper - QuickDraw LockPixels wrapper
 * Original: FUN_10009a98, 104 bytes
 * ========================================================================= */
int LockPixels_Wrapper(int pixMap)
{
    /* FUN_10009a98 - GWorld pixel locking */
    return (int)LockPixels((PixMapHandle)(long)pixMap);
}


/* =========================================================================
 * LookupCityAtPos - Find city at map coordinates
 * Original: FUN_1002be50
 * ========================================================================= */
short LookupCityAtPos(short x, short y)
{
    /* FUN_1002be50 - city/map lookup */
    return -1;
}


/* =========================================================================
 * LookupRuinAtPos - Find ruin/temple at map coordinates
 * Original: FUN_1002bef8
 * ========================================================================= */
short LookupRuinAtPos(short x, short y)
{
    /* FUN_1002bef8 - site/map lookup */
    return -1;
}


/* =========================================================================
 * MakeAlias - Create Mac OS file alias
 * Original: FUN_100006d8, 24 bytes (TVect trampoline)
 * ========================================================================= */
int MakeAlias(void *a, void *b, int *outAlias)
{
    /* Mac OS Toolbox wrapper - NewAliasMinimal */
    if (outAlias) *outAlias = 0;
    return 0;
}


/* =========================================================================
 * MarkChanged - Mark document as changed
 * Original: FUN_100db328, 64 bytes
 * ========================================================================= */
/* Implemented in reconstructed_5.c as FUN_100db328 */
int MarkChanged(void)
{
    /* FUN_100db328 - MacApp doc changed notification */
    FUN_100db328();
    return 0;
}


/* =========================================================================
 * MoveArmyToTarget - Move army units toward target
 * Original: FUN_1001e160 (implemented in movement.c)
 * ========================================================================= */
int MoveArmyToTarget(short *unitList, short orderType,
                     long targetIdx, short flags)
{
    /* FUN_1001e160 - movement system */
    return 0;
}


/* =========================================================================
 * MoveTo_Thunk - Mac OS QuickDraw: MoveTo wrapper
 * Original: FUN_10000270, 24 bytes (TVect trampoline)
 * ========================================================================= */
int MoveTo_Thunk(short h, short v)
{
    /* Mac OS Toolbox wrapper - MoveTo */
    MoveTo(h, v);
    return 0;
}


/* =========================================================================
 * NewAlias - Create new alias handle
 * Original: FUN_100b1c84, 4 bytes (NOP)
 * ========================================================================= */
void *NewAlias(void *path)
{
    /* FUN_100b1c84 - returns immediately (NOP stub) */
    return (void *)0;
}


/* =========================================================================
 * NewGWorld_Wrapper - QuickDraw NewGWorld wrapper
 * Original: FUN_10003198, 24 bytes (TVect trampoline)
 * ========================================================================= */
int NewGWorld_Wrapper(int *gw, int depth, Rect *r, int cTable,
                      int aGDevice, unsigned long flags)
{
    /* Mac OS Toolbox wrapper - NewGWorld */
    return NewGWorld((GWorldPtr *)(long)gw, depth, r, (void *)(long)cTable,
                     (void *)(long)aGDevice, flags);
}


/* =========================================================================
 * NewPtr_Thunk - Mac OS Memory Manager: NewPtr
 * Original: FUN_100f56e4, 36 bytes
 * ========================================================================= */
int NewPtr_Thunk(int byteCount)
{
    /* FUN_100f56e4 - calls FUN_100f5640 */
    FUN_100f5640();
    return 0;
}


/* =========================================================================
 * NewResourceReader - Create new resource reader object
 * Original: FUN_100fb260
 * ========================================================================= */
void *NewResourceReader(int param)
{
    /* FUN_100fb260 - serialization */
    return (void *)0;
}


/* =========================================================================
 * NotifyAllTilesChanged - Mark all map tiles as changed
 * Original: FUN_10051d64
 * ========================================================================= */
int NotifyAllTilesChanged(void)
{
    /* FUN_10051d64 - map rendering */
    return 0;
}


/* =========================================================================
 * NotifyTileChanged - Mark single map tile as changed
 * Original: FUN_10051d60 (NOP in practice)
 * ========================================================================= */
int NotifyTileChanged(short x, short y)
{
    /* FUN_10051d60 - likely NOP (no-op in many builds) */
    return 0;
}


/* =========================================================================
 * OpenDATResource - Open DAT resource for reading
 * Original: FUN_10051f98
 * ========================================================================= */
void *OpenDATResource(long resType, long resID, short flags)
{
    /* FUN_10051f98 - resource stream */
    return (void *)0;
}


/* =========================================================================
 * OpenDefaultComponent_Thunk - Mac OS Component Manager wrapper
 * Original: FUN_100020d0, 24 bytes (TVect trampoline)
 * ========================================================================= */
int OpenDefaultComponent_Thunk(int type, int subType)
{
    /* Mac OS Toolbox wrapper - OpenDefaultComponent */
    return 0;
}


/* =========================================================================
 * OpenStream - Open resource stream for read/write
 * Original: FUN_100522dc
 * ========================================================================= */
int *OpenStream(int resourceRef, short openMode, short isWritable)
{
    /* FUN_100522dc - serialization */
    return (int *)0;
}


/* =========================================================================
 * PaintRect_Thunk - Mac OS QuickDraw: PaintRect wrapper
 * Original: FUN_10002148, 24 bytes (TVect trampoline)
 * ========================================================================= */
int PaintRect_Thunk(Rect *r)
{
    /* Mac OS Toolbox wrapper - PaintRect */
    PaintRect(r);
    return 0;
}


/* =========================================================================
 * PlaceHeroesOnMap - Place hero units on map during generation
 * Original: FUN_100a4e0c
 * ========================================================================= */
int PlaceHeroesOnMap(void)
{
    /* FUN_100a4e0c - mapgen */
    return 0;
}


/* =========================================================================
 * PlaceUnitInArmy - Place unit template into army slot
 * Original: FUN_10049fa8
 * ========================================================================= */
int PlaceUnitInArmy(short armyIdx, long slot, long tmpl)
{
    /* FUN_10049fa8 - unit management */
    return 0;
}


/* =========================================================================
 * PostLoadCityInit - Initialize cities after loading save
 * Original: FUN_1004248c
 * ========================================================================= */
int PostLoadCityInit(void)
{
    /* FUN_1004248c - post-load initialization */
    return 0;
}


/* =========================================================================
 * PostLoadInitialization - Full post-load initialization
 * Original: FUN_1002869c
 * ========================================================================= */
int PostLoadInitialization(void)
{
    /* FUN_1002869c - game state initialization */
    return 0;
}


/* =========================================================================
 * PrepareUnitDisplay - Prepare unit display data
 * Original: FUN_10041de8
 * ========================================================================= */
int PrepareUnitDisplay(void)
{
    /* FUN_10041de8 - UI/rendering */
    return 0;
}


/* =========================================================================
 * ProcessQuestReward - Process quest reward for hero
 * Original: FUN_1004b11c
 * ========================================================================= */
int ProcessQuestReward(short mode)
{
    /* FUN_1004b11c - quest system */
    return 0;
}


/* =========================================================================
 * ProcessSingleAssignment - Process one AI assignment round
 * Original: FUN_1001a864
 * ========================================================================= */
int ProcessSingleAssignment(short round, char *followerCount)
{
    /* FUN_1001a864 - AI assignment */
    return 0;
}


/* =========================================================================
 * ProgressCreate - Create progress bar dialog
 * Original: FUN_100513b4
 * ========================================================================= */
int ProgressCreate(void *bar, void *rect, short resID)
{
    /* FUN_100513b4 - UI/progress */
    return 0;
}


/* =========================================================================
 * ProgressDelay - Delay after progress update
 * Original: FUN_1005f144
 * ========================================================================= */
int ProgressDelay(int param)
{
    /* FUN_1005f144 - UI timing */
    return 0;
}


/* =========================================================================
 * ProgressUpdate - Update progress bar value
 * Original: FUN_100514d8
 * ========================================================================= */
int ProgressUpdate(void *bar, short percent)
{
    /* FUN_100514d8 - UI/progress */
    return 0;
}


/* =========================================================================
 * PStrToHandle - Convert Pascal string to handle
 * Original: FUN_100b1c84, 4 bytes (NOP)
 * ========================================================================= */
int PStrToHandle(unsigned char *pstr)
{
    /* FUN_100b1c84 - returns 0 (NOP) */
    return 0;
}


/* =========================================================================
 * ReadShortFromStream - Read short value from stream
 * Original: FUN_100525a0
 * ========================================================================= */
short ReadShortFromStream(void)
{
    /* FUN_100525a0 - serialization */
    return 0;
}


/* =========================================================================
 * RegisterCities - Register city objects during map generation
 * Original: address in mapgen context
 * ========================================================================= */
int RegisterCities(void)
{
    /* City registration for map generation */
    return 0;
}


/* =========================================================================
 * ReleaseCityData - Release city data for index
 * Original: FUN_1000d9ac
 * ========================================================================= */
int ReleaseCityData(short cityIndex)
{
    /* FUN_1000d9ac - city management */
    return 0;
}


/* =========================================================================
 * ReleaseHandle - Release/dispose a handle
 * Original: FUN_100ef510 (mapgen) or FUN_10001c98 (sound)
 * ========================================================================= */
int ReleaseHandle(void *handle)
{
    /* FUN_100ef510 / FUN_10001c98 - handle cleanup */
    return 0;
}


/* =========================================================================
 * ReleaseUnits - Release unit list
 * Original: FUN_1000fde4
 * ========================================================================= */
int ReleaseUnits(short *unitList, short mode)
{
    /* FUN_1000fde4 - combat/unit management */
    return 0;
}


/* =========================================================================
 * ResolveAlias - Resolve Mac OS file alias
 * Original: FUN_10001758, 24 bytes (TVect trampoline)
 * ========================================================================= */
int ResolveAlias(void *res, void *a, void *b, void *path)
{
    /* Mac OS Toolbox wrapper - ResolveAlias */
    return 0;
}


/* =========================================================================
 * RGBForeColor_Thunk - Mac OS QuickDraw: RGBForeColor wrapper
 * Original: FUN_100b2268
 * ========================================================================= */
int RGBForeColor_Thunk(RGBColor *color)
{
    /* Mac OS Toolbox wrapper - RGBForeColor */
    RGBForeColor(color);
    return 0;
}


/* =========================================================================
 * SaveMapToResources - Save generated map to resource fork
 * Original: FUN_100a52b8
 * ========================================================================= */
int SaveMapToResources(void)
{
    /* FUN_100a52b8 - mapgen serialization */
    return 0;
}


/* =========================================================================
 * SaveScenarioData - Save scenario data to resource
 * Original: FUN_100a6060
 * ========================================================================= */
int SaveScenarioData(void)
{
    /* FUN_100a6060 - mapgen serialization */
    return 0;
}


/* =========================================================================
 * ScanDefenseGrid - Scan defense grid for AI
 * Original: FUN_1005447c
 * ========================================================================= */
int ScanDefenseGrid(void)
{
    /* FUN_1005447c - AI defense */
    return 0;
}


/* =========================================================================
 * ScoreUnitForHire - Score a unit type for AI hiring
 * Original: FUN_10020f94
 * ========================================================================= */
short ScoreUnitForHire(short isExpensive)
{
    /* FUN_10020f94 - AI economy */
    return 0;
}


/* =========================================================================
 * SetForeColor_Thunk - Set foreground drawing color
 * Original: FUN_100021c0, 24 bytes (TVect trampoline)
 * ========================================================================= */
int SetForeColor_Thunk(void)
{
    /* Mac OS Toolbox wrapper - ForeColor or equivalent */
    return 0;
}


/* =========================================================================
 * SetGWorld_Wrapper - QuickDraw SetGWorld wrapper
 * Original: FUN_10000888 (TVect trampoline)
 * ========================================================================= */
int SetGWorld_Wrapper(int port, int gdh)
{
    /* Mac OS Toolbox wrapper - SetGWorld */
    SetGWorld((GWorldPtr)(long)port, (void *)(long)gdh);
    return 0;
}


/* =========================================================================
 * SetMacRect - Set Rect fields (top, left, bottom, right)
 * Original: FUN_10003108, 24 bytes (TVect trampoline to SetRect)
 * ========================================================================= */
int SetMacRect(Rect *r, short t, short l, short b, short ri)
{
    /* Mac OS Toolbox wrapper - SetRect */
    if (r) {
        r->top = t;
        r->left = l;
        r->bottom = b;
        r->right = ri;
    }
    return 0;
}


/* =========================================================================
 * SetRect4 - Set rect from x, y, w, h
 * Original: FUN_100226b0, 36 bytes
 * ========================================================================= */
int SetRect4(void *r, short x, short y, short w, short h)
{
    /* FUN_100226b0 - stores 4 shorts sequentially */
    short *p = (short *)r;
    if (p) {
        p[0] = x;
        p[1] = y;
        p[2] = w;
        p[3] = h;
    }
    return 0;
}


/* =========================================================================
 * SetResourceType - Set resource type on reader object
 * Original: FUN_100fb300
 * ========================================================================= */
int SetResourceType(void *reader, long resType, short resID)
{
    /* FUN_100fb300 - serialization */
    return 0;
}


/* =========================================================================
 * SetupHandle - Lock/setup a handle for use
 * Original: FUN_100ef9b8 or equivalent handle lock
 * ========================================================================= */
int SetupHandle(void *handle)
{
    /* Handle setup/lock operation */
    return 0;
}


/* =========================================================================
 * SetupInfluenceMap - Setup AI influence map parameters
 * Original: FUN_100448e4
 * ========================================================================= */
int SetupInfluenceMap(short range, short x, short y, short a, short b)
{
    /* FUN_100448e4 - AI subsystem */
    return 0;
}


/* =========================================================================
 * SmoothForestRegions - Smooth forest tile transitions
 * Original: FUN_100abb68
 * ========================================================================= */
int SmoothForestRegions(void)
{
    /* FUN_100abb68 - mapgen terrain smoothing */
    return 0;
}


/* =========================================================================
 * SmoothMountainRegions - Smooth mountain tile transitions
 * Original: FUN_100ab9e4
 * ========================================================================= */
int SmoothMountainRegions(void)
{
    /* FUN_100ab9e4 - mapgen terrain smoothing */
    return 0;
}


/* =========================================================================
 * SmoothTerrainAroundCities - Smooth terrain near cities
 * Original: FUN_100a35cc
 * ========================================================================= */
int SmoothTerrainAroundCities(void)
{
    /* FUN_100a35cc - mapgen terrain smoothing */
    return 0;
}


/* =========================================================================
 * SndChannelStatus_Thunk - Mac OS Sound Manager wrapper
 * Original: FUN_100035b8, 24 bytes (TVect trampoline)
 * ========================================================================= */
int SndChannelStatus_Thunk(void *chan, short len, void *status)
{
    /* Mac OS Toolbox wrapper - SndChannelStatus */
    return SndChannelStatus((SndChannelPtr)chan, len, (SCStatus *)status);
}


/* =========================================================================
 * SndDisposeChannel_Thunk - Mac OS Sound Manager wrapper
 * Original: FUN_10000900, 24 bytes (TVect trampoline)
 * ========================================================================= */
int SndDisposeChannel_Thunk(void *chan, char quiet)
{
    /* Mac OS Toolbox wrapper - SndDisposeChannel */
    return SndDisposeChannel((SndChannelPtr)chan, quiet);
}


/* =========================================================================
 * SndDoImmediate_Thunk - Mac OS Sound Manager wrapper
 * Original: FUN_10002178, 24 bytes (TVect trampoline)
 * ========================================================================= */
int SndDoImmediate_Thunk(void *chan, void *cmd)
{
    /* Mac OS Toolbox wrapper - SndDoImmediate */
    return SndDoImmediate((SndChannelPtr)chan, (SndCommand *)cmd);
}


/* =========================================================================
 * SndNewChannel_Thunk - Mac OS Sound Manager wrapper
 * Original: FUN_10002d00, 24 bytes (TVect trampoline)
 * ========================================================================= */
int SndNewChannel_Thunk(void **chan, short synth, long init, void *proc)
{
    /* Mac OS Toolbox wrapper - SndNewChannel */
    return SndNewChannel((SndChannelPtr *)chan, synth, init, (SndCallBackUPP)proc);
}


/* =========================================================================
 * SndPlay_Thunk - Mac OS Sound Manager wrapper
 * Original: FUN_10001638, 24 bytes (TVect trampoline)
 * ========================================================================= */
int SndPlay_Thunk(void *chan, void *sndH, char async)
{
    /* Mac OS Toolbox wrapper - SndPlay */
    return 0;
}


/* =========================================================================
 * StoreCoords - Store x,y coordinate pair
 * Original: FUN_1002269c, 20 bytes
 * ========================================================================= */
int StoreCoords(void *dest, short x, short y)
{
    /* FUN_1002269c - stores two shorts at dest */
    short *p = (short *)dest;
    if (p) {
        p[0] = x;
        p[1] = y;
    }
    return 0;
}


/* =========================================================================
 * StreamRead - Read bytes from stream
 * Original: FUN_10052490
 * ========================================================================= */
int StreamRead(int *stream, void *buffer, long count)
{
    /* FUN_10052490 - serialization */
    return 0;
}


/* =========================================================================
 * StreamSetPosition - Set stream read/write position
 * Original: FUN_10052518
 * ========================================================================= */
int StreamSetPosition(int *stream, long position, short mode)
{
    /* FUN_10052518 - serialization */
    return 0;
}


/* =========================================================================
 * StreamWrite - Write bytes to stream
 * Original: FUN_100524d4
 * ========================================================================= */
int StreamWrite(int *stream, void *buffer, long count)
{
    /* FUN_100524d4 - serialization */
    return 0;
}


/* =========================================================================
 * StringLength - Get C string length
 * Original: FUN_100012c0, 24 bytes (TVect trampoline to strlen)
 * ========================================================================= */
short StringLength(char *str)
{
    /* Mac OS Toolbox wrapper - strlen equivalent */
    short len = 0;
    if (str) {
        while (str[len] != '\0') len++;
    }
    return len;
}


/* =========================================================================
 * TuneGetStatus_Thunk - QuickTime Tune status
 * Original: FUN_100032e8, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TuneGetStatus_Thunk(int tp, void *status)
{
    /* Mac OS Toolbox wrapper - TuneGetStatus */
    return 0;
}


/* =========================================================================
 * TunePreroll_Thunk - QuickTime Tune preroll
 * Original: FUN_10003678, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TunePreroll_Thunk(int tp)
{
    /* Mac OS Toolbox wrapper - TunePreroll */
    return 0;
}


/* =========================================================================
 * TuneQueue_Thunk - QuickTime Tune queue
 * Original: FUN_10003228, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TuneQueue_Thunk(int tp, void *data, unsigned long rate, long offset,
                    long duration, long loop, void *callBackProc, long refCon)
{
    /* Mac OS Toolbox wrapper - TuneQueue */
    return 0;
}


/* =========================================================================
 * TuneSetHeader_Thunk - QuickTime Tune set header
 * Original: FUN_10002100, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TuneSetHeader_Thunk(int tp, void *header)
{
    /* Mac OS Toolbox wrapper - TuneSetHeader */
    return 0;
}


/* =========================================================================
 * TuneSetVolume_Thunk - QuickTime Tune set volume
 * Original: FUN_100026b8, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TuneSetVolume_Thunk(int tp, int vol)
{
    /* Mac OS Toolbox wrapper - TuneSetVolume */
    return 0;
}


/* =========================================================================
 * TuneStop_Thunk - QuickTime Tune stop
 * Original: FUN_10003660, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TuneStop_Thunk(int tp, long stopMode)
{
    /* Mac OS Toolbox wrapper - TuneStop */
    return 0;
}


/* =========================================================================
 * TuneUnroll_Thunk - QuickTime Tune unroll
 * Original: FUN_100035a0, 24 bytes (TVect trampoline)
 * ========================================================================= */
int TuneUnroll_Thunk(void)
{
    /* Mac OS Toolbox wrapper - TuneUnroll */
    return 0;
}


/* =========================================================================
 * TVect_OCECToRString - TVect base pointer (not a real function)
 * This is the TOC anchor for all TVect trampolines, not callable.
 * ========================================================================= */
int TVect_OCECToRString(void)
{
    /* .TVect::OCECToRString - PEF TOC base address, not callable */
    return 0;
}


/* =========================================================================
 * UnlockHandle - Release handle lock state
 * Original: FUN_100db26c (conditional dispatch) or FUN_100ef510
 * ========================================================================= */
int UnlockHandle(int unused)
{
    /* Handle unlock / release operation */
    FUN_100db26c(0);
    return 0;
}


/* =========================================================================
 * UnlockHandle2 - Alternative handle unlock (restore flags)
 * Original: FUN_10001b60 equivalent
 * ========================================================================= */
int UnlockHandle2(void *handle)
{
    /* Handle unlock with flag restoration */
    return 0;
}


/* =========================================================================
 * UnlockPixels_Wrapper - QuickDraw UnlockPixels wrapper
 * Original: FUN_10009b00, 72 bytes
 * ========================================================================= */
int UnlockPixels_Wrapper(int pixMap)
{
    /* FUN_10009b00 - GWorld pixel unlocking */
    UnlockPixels((PixMapHandle)(long)pixMap);
    return 0;
}


/* =========================================================================
 * UpdateDocAfterMapGen - Update document after map generation
 * Original: called from mapgen via vtable dispatch
 * ========================================================================= */
int UpdateDocAfterMapGen(int doc, void *data)
{
    /* Post-map-generation document update */
    return 0;
}


/* =========================================================================
 * UpdateProgressBar - Update progress bar display
 * Original: FUN_100514d8 (serialization) or FUN_1004039c (AI)
 * ========================================================================= */
int UpdateProgressBar(int dialogHandle, short percent)
{
    /* FUN_100514d8 / FUN_1004039c - progress UI */
    return 0;
}


/* =========================================================================
 * VtableDispatch / VTableDispatch - Virtual method dispatch
 * Original: FUN_10117884, 20 bytes
 * Both names resolve to the same function.
 * ========================================================================= */
/* Already defined in reconstructed_5.c and core/utils.c */
long VtableDispatch(int vtableCall, ...)
{
    /* FUN_10117884 - universal vtable dispatch trampoline */
    return 0;
}

long VTableDispatch(int vtableCall, ...)
{
    /* FUN_10117884 - alias for VtableDispatch */
    return 0;
}
