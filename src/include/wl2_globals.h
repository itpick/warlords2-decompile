/*
 * wl2_globals.h - Warlords II Global Variable Declarations
 *
 * Reconstructed from Ghidra analysis.
 * Original addresses are in comments for cross-referencing.
 */

#ifndef WL2_GLOBALS_H
#define WL2_GLOBALS_H

/*
 * Pointer-sized integer type.
 * On PPC32: int = long = pointer = 4 bytes.
 * On modern 64-bit: long = pointer = 8 bytes.
 * The decompiled code does raw pointer arithmetic: *gGameState + offset
 * which requires the dereferenced value to be pointer-sized.
 */
typedef long pint;  /* pointer-sized integer for raw address arithmetic */

/* ===== Core Game Data Pointers ===== */
/* These are Mac OS Handles (pointer-to-master-pointer).
 * *gGameState gives the base address of the game state buffer.
 * All field access is via raw offset arithmetic: *gGameState + 0x110
 * Typed struct definitions in wl2_types.h document the layout. */

/* Original: piRam1011735c */
extern pint         *gGameState;

/* Original: piRam10117468 */
extern pint         *gExtState;

/* Original: piRam10117358 */
extern pint         *gMapTiles;

/* Original: piRam10117360 */
extern pint         *gUnitTypeTable;

/* Original: piRam10117364 */
extern pint         *gUnitClassTable;

/* Original: piRam101175d0 */
extern pint         *gUnitInstanceTable;

/* Unknown data pointer - used in unit creation */
/* Original: piRam10117370 */
extern void         *gDataPtr_10117370;

/* Resource/asset data pointer */
/* Original: piRam1011734c */
extern void         *gResourcePtr;

/* Additional game data pointers */
/* Original: piRam10117350, piRam10117354 */
extern void         *gDataPtr_10117350;
extern void         *gDataPtr_10117354;

/* Original: piRam10117368, piRam10117414, piRam1011741c */
extern void         *gDataPtr_10117368;
extern void         *gDataPtr_10117414;
extern void         *gDataPtr_1011741c;

/* Original: piRam1011742c */
extern void         *gFogOfWarMap;

/* Original: piRam10117470 */
extern void         *gDataPtr_10117470;


/* ===== UI / Selection State ===== */

/* Currently selected army index */
/* Original: psRam1011677c - used as *ptr * 0x42 for army access */
extern short        gSelectedArmy;

/* Selected unit slot within army (0-3) */
/* Original: psRam10115f10 */
extern short        gSelectedUnitSlot;

/* Cursor position in map tiles */
/* Original: psRam101174f4, psRam101174f8 */
extern short        gCursorX;
extern short        gCursorY;

/* Selection/target coordinates */
/* Original: piRam101174b0 */
extern short        gTargetCoords[2];   /* [0]=x, [1]=y */

/* Selected army coordinates */
/* Original: piRam101176e0 */
extern short        gSelectedArmyCoords[2]; /* [0]=x, [1]=y */

/* AI pathfinding threshold */
/* Original: psRam101176fc */
extern short        gAIPathThreshold;


/* ===== Player Economy ===== */

/* Player gold/treasury array */
/* Original: iRam1011762c - accessed as player * 2 + base */
extern short        gPlayerTreasury[MAX_PLAYERS];

/* Player income array */
/* Original: iRam10117630 - accessed as player * 2 + base */
extern short        gPlayerIncome[MAX_PLAYERS];


/* ===== Resource / File Management ===== */

/* Original: piRam10115d88 */
extern void         *gResourceHandle;

/* Original: piRam101176bc */
extern void         *gWindowResource;

/* Original: piRam10115f14 */
extern void         *gDialogPanel;


/* ===== Accessor Macros ===== */
/* These use raw pointer arithmetic matching the Ghidra decompilation.
 * *gGameState gives the base address; add offsets for field access. */

/* Get army record base address: *gGameState + idx * 0x42 + 0x1604 */
#define ARMY_BASE(idx)  (*gGameState + (pint)(idx) * 0x42 + 0x1604)

/* Get city record base address: *gExtState + idx * 0x5C + 0x24C */
#define CITY_BASE(idx)  (*gExtState + (pint)(idx) * 0x5C + 0x24C)

/* Get army state byte */
#define ARMY_STATE(idx) (*(unsigned char *)(*gExtState + 0x56 + (idx)))

/* Get army flags byte */
#define ARMY_FLAGS(idx) (*(unsigned char *)(*gExtState + 0x11E + (idx)))

/* Get army move count */
#define ARMY_MOVES(idx) (*(unsigned char *)(*gExtState + 0x182 + (idx)))

/* Get map tile at coordinates */
#define MAP_TILE(x,y)   (*(unsigned int *)(*gMapTiles + (pint)(y) * MAP_STRIDE + (pint)(x) * 2))

/* Get terrain type from tile value */
#define TILE_TERRAIN(tile) (((tile) >> TILE_TERRAIN_SHIFT) & 0xFF)

/* Get tile owner */
#define TILE_OWNER(tile)   (((tile) >> TILE_OWNER_SHIFT) & 0xF)

/* Get terrain movement cost */
#define TERRAIN_COST(terrain, uclass) \
    (*(char *)(*gGameState + 0x60C + (terrain) * MAX_UNIT_CLASSES + (uclass)))

/* Get diplomacy entry */
#define DIPLOMACY(p1, p2) \
    (*(unsigned long *)(*gGameState + 0x1582 + (pint)(p1) * 0x10 + (pint)(p2) * 2))

/* Check if two players are allied (bits 26-27) */
#define ARE_ALLIED(p1, p2) \
    (((DIPLOMACY(p1, p2) >> 0x1A) & 3) == DIPLO_ALLIED)

/* Check if player is alive */
#define PLAYER_ALIVE(p) (*(short *)(*gGameState + 0x138 + (pint)(p) * 2) != 0)

/* Check if player is human */
#define IS_HUMAN(p)     (*(short *)(*gGameState + 0xD0 + (pint)(p) * 2) == PLAYER_HUMAN)

/* Check if player is AI */
#define IS_AI(p)        (*(short *)(*gGameState + 0xD0 + (pint)(p) * 2) == PLAYER_AI)


/* ===== Raw Ghidra Name Aliases ===== */
/* These map raw Ghidra symbol names to their human-readable equivalents
 * so that code using either name will resolve to the same variable. */

#define piRam1011735c   gGameState
#define piRam10117358   gMapTiles
#define piRam10117360   gUnitTypeTable
#define piRam10117364   gUnitClassTable
#define piRam10117370   ((pint *)gDataPtr_10117370)
#define piRam1011734c   ((pint *)gResourcePtr)
#define piRam10117350   ((pint *)gDataPtr_10117350)
#define piRam10117354   ((pint *)gDataPtr_10117354)
#define piRam10117368   ((pint *)gDataPtr_10117368)
#define piRam101176bc   ((pint *)gWindowResource)
#define piRam101176e0   ((pint *)gSelectedArmyCoords)
#define iRam1011762c    ((long)(void *)gPlayerTreasury)
#define iRam10117630    ((long)(void *)gPlayerIncome)
#define psRam101176fc   gAIPathThreshold



/* ===== Renamed Global Aliases (old raw name -> new human name) ===== */
/* These #define aliases allow code still using the raw Ghidra names
 * to compile after the rename. The actual variable definitions in
 * globals_extra.c keep their original names. */

#define iRam10115ba4    gGroupFuncTable
#define iRam10115d28    gFrontLineLookup
#define iRam10115e84    gStdMoveCostTable
#define iRam10115ea8    gTileWalkOffsets
#define iRam10115eac    gZoCNeighborDYOffsets
#define iRam10115eb0    gZoCNeighborDXOffsets
#define iRam10115ebc    gNeighborDYOffsets
#define iRam10115ec0    gNeighborDXOffsets
#define iRam10115ec4    gNeighborPatternTable
#define iRam10115ed4    gFlyingMoveCostTable
#define iRam10115fe4    gPlayerColorTable
#define iRam10116004    gArrowDirTable
#define iRam10116008    gArmyIconTable
#define iRam1011681c    gRenderingMiscData
#define iRam10117374    gFrameworkData
#define iRam10117474    gDiploThreatData
#define iRam10117488    gPlayerIdleArmyCounts
#define iRam1011748c    gPlayerTotalArmyCounts
#define iRam10117490    gPlayerTerritoryCounts
#define iRam101174f0    gSelectionArray
#define iRam101176e8    gCombatDisplayPieces
#define iRam101176f0    gDisplayState
#define pcRam101174d0    gSelectionCount
#define pdRam10116790    gDoubleAccumulator
#define piRam10115f0c    gUnitDataHandle
#define piRam10115fa4    gOverviewWindow
#define piRam10116200    gInfoWindow
#define piRam10116204    gMainDocView
#define piRam10116208    gMainGameWindow
#define piRam1011639c    gSidePanelWindow
#define piRam101163ac    gActiveDocView
#define piRam101169c4    gAppObject
#define piRam10117588    gPathCacheHandle
#define piRam1011758c    gPathCachePtr
#define piRam10117590    gCostMapHandle
#define piRam10117594    gDistGridHandle
#define piRam101175a0    gCostMapPtr
#define piRam101175f0    gMapGenData
#define piRam101175f4    gMapGenConfig
#define psRam10115d34    gValidArmyStateList
#define psRam10115e2c    gAutoModeFlag
#define psRam10115ea4    gPathfindingInitialized
#define psRam10115eb4    gAIModeFlag
#define psRam10115eb8    gZoCMarkingFlag
#define psRam10115fec    gScrollLockFlag
#define psRam10115ff8    gForceRedrawFlag
#define psRam10116360    gUIShortGlobal
#define psRam1011736c    gShortCounter
#define psRam10117484    gPrimaryThreatPlayer
#define psRam101175a4    gZoCPenalty
#define psRam101175a8    gSearchRadius
#define psRam101175ac    gMaxSearchRange
#define psRam101175b0    gLastArmyTypeForCostMap
#define psRam101176e4    gHeroCount
#define puRam10117598    gDistGridDeref
#define puRam1011759c    gDistGridHandlePtr
#define puRam101175b4    gCurrentPathFlags
#define puRam101176dc    gMonoColorTable
#define puRam10117710    gCurrentMoveMode
#define uRam101175d4    gItemNameBuffer
#define uRam101177f0    gProgressCounterBase


#endif /* WL2_GLOBALS_H */
