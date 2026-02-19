/*
 * movement.c - Warlords II Movement, Pathfinding & Terrain Cost System
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner), 1993
 *
 * This module implements:
 *   - Dijkstra flood-fill pathfinding (NOT A*)
 *   - Movement cost map generation from terrain data
 *   - Zone of Control (ZoC) marking
 *   - Path reconstruction (gradient descent from source to destination)
 *   - Cached path lookup and storage
 *   - Tile accessibility checks
 *   - Movement cost calculation for path traversal
 *
 * Key data structures:
 *   - Distance grid: 112x156 shorts (stride 0x138), pointed to by *gDistGridHandle
 *   - Cost map:      112x156 bytes  (stride 0x9C),  pointed to by *gCostMapPtr
 *   - Path cache:    20 entries of 0xD6 bytes each, in *gPathCachePtr
 *
 * Map dimensions: 112 wide (0x70) x 156 tall (0x9C)
 * Map data:       tiles are 2 bytes, row stride 0xE0 (224 bytes)
 * Visibility:     1 byte per tile, row stride 0x70 (112 bytes)
 */

#include "warlords2.h"

/* ===== Map Dimension Constants ===== */
#define MAP_WIDTH           112     /* 0x70 tiles */
#define MAP_HEIGHT          156     /* 0x9C tiles */
#define MAP_MAX_X           111     /* 0x6F */
#define MAP_MAX_Y           155     /* 0x9B */

/* ===== Grid Strides ===== */
#define MAP_ROW_STRIDE      0xE0    /* 224 bytes per row in terrain map */
#define VIS_ROW_STRIDE      0x70    /* 112 bytes per row in visibility layer */
#define DIST_ROW_STRIDE     0x138   /* 312 bytes per row in distance grid (156 * 2) */
#define COST_ROW_STRIDE     0x9C    /* 156 bytes per row in cost map */

/* ===== Distance Grid Sentinel Values ===== */
#define DIST_IMPASSABLE     0x7531  /* 30001 - marks impassable tiles */
#define DIST_INITIAL        30000   /* initial distance for unexplored tiles */
#define DIST_FRONTIER       0xFFFF  /* -1 as unsigned short: frontier seed */

/* ===== Cost Map Byte Flags ===== */
#define COST_BASE_MASK      0x07    /* bits 0-2: base movement cost (0-7) */
#define COST_ZOC_FLAG       0x08    /* bit 3: Zone of Control / enemy territory */
#define COST_ROAD_FLAG      0x10    /* bit 4: tile has a road */
#define COST_ROAD_ADJ_FLAG  0x20    /* bit 5: road-adjacent / road bonus applies */
#define COST_BRIDGE_FLAG    0x40    /* bit 6: tile has a bridge */
#define COST_VISITED_FLAG   0x80    /* bit 7: visited/processed flag */
#define COST_ZOC_VISITED    0x18    /* ZoC + enemy territory combined */
#define COST_ARMY_PRESENT   0x98    /* ZoC + visited combined (army adjacency) */

/* ===== Pathfinding Request Flags ===== */
#define PATH_FLAG_ROAD_BONUS    0x01    /* bit 0: army has road movement bonus */
#define PATH_FLAG_BRIDGE_BONUS  0x02    /* bit 1: army has bridge crossing bonus */
#define PATH_FLAG_LIMITED_RANGE 0x10    /* bit 4: limited-range search mode */

/* ===== Movement Modes ===== */
#define MOVE_MODE_NORMAL    0       /* standard ground movement */
#define MOVE_MODE_FLYING    1       /* flying / all-terrain movement */
#define MOVE_MODE_NAVAL     2       /* naval movement */

/* ===== Terrain Categories ===== */
#define TERRAIN_CAT_VOID    0       /* impassable void */
#define TERRAIN_CAT_PLAINS  1       /* grassland / plains */
#define TERRAIN_CAT_FOREST  2       /* forest */
#define TERRAIN_CAT_HILLS   3       /* hills / mountains */
#define TERRAIN_CAT_CITY    9       /* city tile */
#define TERRAIN_CAT_OCEAN   10      /* deep water */
#define TERRAIN_CAT_SHORE   11      /* coastal / shore */

/* ===== Army Type for Flying ===== */
#define ARMY_TYPE_FLYING    0x0E    /* army type index 14 = flying unit */

/* ===== Path Cache Constants ===== */
#define PATH_CACHE_ENTRIES  20      /* 0x14 */
#define PATH_CACHE_ENTRY_SIZE  0xD6 /* 214 bytes per cache entry */
#define PATH_MAX_WAYPOINTS  200     /* max waypoints in a path */
#define PATH_WAYPOINT_OFFSET 0x0E   /* offset to waypoint data within cache entry */
#define PATH_RECONSTRUCT_MAX 198    /* 0xC6: max steps in path reconstruction */
#define PATH_CALC_MAX       100     /* max steps for CalcPathCost */

/* ===== Neighbor Expansion ===== */
#define NEIGHBOR_SENTINEL   (-10)   /* terminator for neighbor offset lists */

/* ===== Direction Constants ===== */
/* Returned by GetDirection (FUN_100184dc): */
#define DIR_N               0
#define DIR_NE              1
#define DIR_E               2
#define DIR_SE              3
#define DIR_S               4
#define DIR_SW              5
#define DIR_W               6
#define DIR_NW              7
#define DIR_NONE            0xFF

/*
 * ===== Pathfinding Request Structure =====
 *
 * Passed as short* param_1 to pathfinding functions.
 * Layout (as short array indices):
 *   [0] = source X
 *   [1] = source Y
 *   [2] = destination X
 *   [3] = destination Y
 *   [4] = flags (road bonus, bridge bonus, limited range, etc.)
 *   [5] = movement mode (0=normal, 1=flying, 2=naval)
 *   [6..7] = pointer to waypoint buffer (cast to int*)
 */
typedef struct PathRequest {
    short   srcX;           /* [0] source X */
    short   srcY;           /* [1] source Y */
    short   dstX;           /* [2] destination X */
    short   dstY;           /* [3] destination Y */
    short   flags;          /* [4] movement flags */
    short   moveMode;       /* [5] movement mode */
    char    *waypoints;     /* [6..7] pointer to waypoint buffer (200 bytes) */
} PathRequest;


/* ===== External Global Pointers (from Ghidra symbols) ===== */

/* piRam1011735c, piRam10117358, piRam10117354 now aliased via #define in wl2_globals.h */

/* gDistGridHandlePtr - handle to distance grid handle */
extern unsigned int *gDistGridHandlePtr; /* -> Handle -> distance grid */

/* gCostMapPtr - pointer to cost map data */
extern int      *gCostMapPtr;     /* -> cost map (112x156 bytes) */

/* gZoCPenalty - Zone of Control penalty value */
extern short    *gZoCPenalty;     /* -> ZoC penalty */

/* gSearchRadius - current search radius counter */
extern short    *gSearchRadius;     /* -> search radius */

/* gMaxSearchRange - max range for limited-range search */
extern unsigned short *gMaxSearchRange;

/* gLastArmyTypeForCostMap - last army type used for cost map */
extern short    *gLastArmyTypeForCostMap;

/* gCurrentPathFlags - current path flags */
extern unsigned short *gCurrentPathFlags;

/* gCurrentMoveMode - current movement mode */
extern unsigned short *gCurrentMoveMode;

/* gAIModeFlag - AI mode flag (0=not AI, nonzero=AI pathfinding) */
extern short    *gAIModeFlag;

/* gZoCMarkingFlag - ZoC marking flag */
extern short    *gZoCMarkingFlag;

/* gPathfindingInitialized - pathfinding system initialized flag */
extern short    *gPathfindingInitialized;

/* gAutoModeFlag - debug/override flag */
extern short    *gAutoModeFlag;

/* gStdMoveCostTable - standard movement cost table (short[]) */
extern int      gStdMoveCostTable;

/* gFlyingMoveCostTable - flying movement cost table (short[]) */
extern int      gFlyingMoveCostTable;

/* gNeighborDYOffsets - neighbor DY offset table */
extern int      gNeighborDYOffsets;

/* gNeighborDXOffsets - neighbor DX offset table */
extern int      gNeighborDXOffsets;

/* gNeighborPatternTable - neighbor pattern selection table */
extern int      gNeighborPatternTable;

/* gTileWalkOffsets - tile accessibility walk offsets */
extern int      gTileWalkOffsets;

/* gZoCNeighborDYOffsets - ZoC neighbor DY offsets */
extern int      gZoCNeighborDYOffsets;

/* gZoCNeighborDXOffsets - ZoC neighbor DX offsets */
extern int      gZoCNeighborDXOffsets;

/* gDistGridHandle - handle to distance grid memory */
extern int      *gDistGridHandle;

/* gCostMapHandle - handle to cost map memory */
extern int      *gCostMapHandle;

/* gDistGridDeref - dereferenced distance grid pointer storage */
extern unsigned int *gDistGridDeref;

/* gPathCacheHandle - handle to path cache memory */
extern int      *gPathCacheHandle;

/* gPathCachePtr - dereferenced path cache pointer */
extern int      *gPathCachePtr;

/* piRam101176e0 - selected army info pointer */
/* piRam101176e0 now aliased via #define in wl2_globals.h */

/* ===== External Function Declarations ===== */

/* Mac OS Memory Manager wrappers */
extern int      FUN_100f15e0(int size, int flags, ...);    /* NewHandle / memory alloc */
extern void     DetachResource(void *handle);                 /* HLock - lock handle */
extern void     DisposeHandle_Thunk(int handle);                   /* HUnlock - unlock handle */
extern void     FUN_10000048(int handle);                   /* SetHandleSize or similar */
extern void     FUN_100004e0(void *handle, int size);       /* SetHandleSize */
extern void     FUN_100db1ec(void);                         /* error check / MemError */
extern void     FUN_10001f50(int handle);                   /* DisposeHandle_Thunk */

/* abs() - wraps through a function pointer table */
/* AbsShort at 10003768 */
extern short    AbsShort(short value);

/* Manhattan distance approximation (uses sqrt for diagonal) */
/* CalcDistance at 1000a884 */
extern short    CalcDistance(short x1, short y1, short x2, short y2);

/* Apply direction offset to coordinates, returns 1 if valid, 0 if out of bounds */
/* FUN_10017170 at 10017170 */
extern int      FUN_10017170(short *px, short *py, short direction);

/* Get direction from (x1,y1) to (x2,y2), returns 0-7 or 0xFF if same tile */
/* FUN_100184dc at 100184dc */
extern int      FUN_100184dc(short x1, short y1, short x2, short y2);


/* ===== Forward Declarations (internal to this module) ===== */

static void     ClearPathCacheEntry(short entryIndex);
static void     ClearAllPathCache(void);
static void     AllocatePathfindingBuffers(void);
static int      LookupCachedPath(PathRequest *req, short searchAll);
static int      TryDirectPath(PathRequest *req);
static int      CheckTileAccessibility(short x, short y);
static void     MarkArmyZoC(short armyIndex, short markMode);
static void     ApplyZoneOfControl(int reqAddr, short markMode);
static void     InitDistanceGrid(int reqAddr, short distance);
static short    DijkstraFloodFill(PathRequest *req, short pass);
static void     ReconstructPath(PathRequest *req);
static void     StorePathInCache(short distance, PathRequest *req, short searchAll);
static int      PathFind_Execute(PathRequest *req);
static void     BuildMovementCostMap(short armyType, short forceRebuild);
static unsigned char CalcMoveCost(int reqAddr, short x, short y, short zocState, short *blocked);
static short    CalcPathCost(PathRequest *req, short movePoints, int costBuffer);
static void     FillPathRequest(PathRequest *req, int waypointBuffer);
static void     FloodFillLimitedRange(short maxRange, short x, short y, short moveMode, unsigned short flags);


/* ======================================================================
 * ClearPathCacheEntry - Clear one path cache slot
 * FUN_100423a0 at 100423a0 (Size: 236 bytes)
 * ====================================================================== */
static void ClearPathCacheEntry(short entryIndex)
{
    int *cacheHandle;   /* gPathCacheHandle */
    int *cachePtr;      /* gPathCachePtr */
    int  *handleData;
    int  i;
    int  entryOffset;

    cachePtr = gPathCachePtr;
    cacheHandle = gPathCacheHandle;
    handleData = (int *)*gPathCacheHandle;

    /* Lock the handle if non-null */
    if (handleData != (int *)0) {
        DetachResource(handleData);       /* HLock */
    }
    *cachePtr = *handleData;

    /* Clear all 200 waypoint bytes in this entry */
    i = PATH_MAX_WAYPOINTS - 1;  /* 199 */
    do {
        entryOffset = entryIndex * PATH_CACHE_ENTRY_SIZE;
        *(unsigned char *)(*cachePtr + entryOffset + i + PATH_WAYPOINT_OFFSET) = 0;
    } while (i-- != 0);

    /* Clear the 7 header shorts (14 bytes) of the entry */
    entryOffset = entryIndex * PATH_CACHE_ENTRY_SIZE;
    *(short *)(*cachePtr + entryOffset + 0)  = 0;  /* status */
    *(short *)(*cachePtr + entryOffset + 2)  = 0;  /* moveMode */
    *(short *)(*cachePtr + entryOffset + 4)  = 0;  /* flags */
    *(short *)(*cachePtr + entryOffset + 6)  = 0;  /* srcX */
    *(short *)(*cachePtr + entryOffset + 8)  = 0;  /* srcY */
    *(short *)(*cachePtr + entryOffset + 10) = 0;  /* dstX */
    *(short *)(*cachePtr + entryOffset + 12) = 0;  /* dstY */

    /* Unlock */
    if (*cacheHandle != 0) {
        DisposeHandle_Thunk(*cacheHandle);     /* HUnlock */
    }
}


/* ======================================================================
 * ClearAllPathCache - Clear all 20 path cache entries
 * PostLoadCityInit at 1004248c (Size: 88 bytes)
 * ====================================================================== */
static void ClearAllPathCache(void)
{
    int i;

    if (*gPathfindingInitialized != 0) {
        /* Clear entries 19 down to 0 */
        i = PATH_CACHE_ENTRIES - 1;  /* 19 = 0x13 */
        do {
            ClearPathCacheEntry((short)i);
        } while (i-- != 0);
    }
}


/* ======================================================================
 * AllocatePathfindingBuffers - Allocate distance grid, cost map, path cache
 * FUN_100424e4 at 100424e4 (Size: 220 bytes)
 *
 * Distance grid: 0x8880 bytes (112 * 156 * 2 = 34,944)
 * Cost map:      0x4440 bytes (112 * 156 * 1 = 17,472)
 * Path cache:    0x10B8 bytes (20 * 0xD6 = 4,280)
 * ====================================================================== */
static void AllocatePathfindingBuffers(void)
{
    int *distHandle;
    int *costHandle;
    int *cacheHandle;
    int  handle;

    distHandle  = gDistGridHandle;
    costHandle  = gCostMapHandle;
    cacheHandle = gPathCacheHandle;

    /* Allocate or resize distance grid (0x8880 bytes) */
    if (*distHandle == 0) {
        handle = FUN_100f15e0(0x8880, 0);
        *distHandle = handle;
    } else {
        if (*(int *)*distHandle == 0) {
            FUN_100004e0((void *)*distHandle, 0x8880);
            FUN_100db1ec();
        }
        FUN_10000048(*distHandle);
    }

    /* Allocate cost map (0x4440 bytes) */
    if (*costHandle == 0) {
        handle = FUN_100f15e0(0x4440, 0, 0);
        *costHandle = handle;
    }

    /* Allocate path cache (0x10B8 bytes = 20 * 214) */
    if (*cacheHandle == 0) {
        handle = FUN_100f15e0(0x10B8, 0, 0);
        *cacheHandle = handle;
    }

    /* Mark pathfinding system as initialized */
    *gPathfindingInitialized = 1;

    /* Clear all cached paths */
    ClearAllPathCache();
}


/* ======================================================================
 * FindCachedPathStep - Search a cached path for a given (x,y) position
 * FUN_100425c0 at 100425c0 (Size: 236 bytes)
 *
 * Walks through the waypoints of a cached path entry until it finds the
 * given (x,y) coordinate or runs out of waypoints.
 *
 * Returns: waypoint index if found, -1 if not found
 * ====================================================================== */
static int FindCachedPathStep(short targetX, short targetY, short cacheEntry)
{
    int *cachePtr = gPathCachePtr;
    int  entryBase;
    short startX, startY;
    int  step;
    int  result;

    entryBase = *cachePtr + cacheEntry * PATH_CACHE_ENTRY_SIZE;
    startX = *(short *)(entryBase + 6);     /* cached srcX */
    startY = *(short *)(entryBase + 8);     /* cached srcY */

    step = 0;
    do {
        /* Check for end-of-path marker (0xFF = -1 as char) */
        if (*(char *)(*cachePtr + cacheEntry * PATH_CACHE_ENTRY_SIZE +
                      step + PATH_WAYPOINT_OFFSET) == -1) {
            return -1;
        }

        /* Check if current position matches target */
        if (startX == targetX && startY == targetY) {
            return step;
        }

        /* Apply direction offset to advance position */
        result = FUN_10017170(&startX, &startY,
                     *(unsigned char *)(*cachePtr + cacheEntry * PATH_CACHE_ENTRY_SIZE +
                                        step + PATH_WAYPOINT_OFFSET));
        if (result == 0) {
            return -1;     /* out of bounds */
        }

        step++;
    } while ((short)step < PATH_MAX_WAYPOINTS);

    return -1;
}


/* ======================================================================
 * LookupCachedPath - Try to reuse a previously computed path
 * FUN_100426b4 at 100426b4 (Size: 280 bytes)
 *
 * Checks if path cache entry matches the request's destination, mode, and
 * flags. If so, copies the relevant portion of the cached path into the
 * request's waypoint buffer.
 *
 * Returns: 1 if a cached path was found and copied, 0 otherwise
 * ====================================================================== */
static int LookupCachedPath(PathRequest *req, short cacheEntry)
{
    int *cachePtr = gPathCachePtr;
    short *p = (short *)req;
    int  entryBase;
    int  startStep;
    int  i;

    /* Check if destination matches cached destination */
    if (p[2] != *(short *)(cacheEntry * PATH_CACHE_ENTRY_SIZE + *cachePtr + 10)) {
        return 0;
    }

    entryBase = *cachePtr + cacheEntry * PATH_CACHE_ENTRY_SIZE;

    /* Also check dstY, moveMode, and flags match */
    if (p[3] != *(short *)(entryBase + 12) ||
        p[5] != *(short *)(entryBase + 2) ||
        p[4] != *(short *)(entryBase + 4)) {
        return 0;
    }

    /* Find where our source position falls along the cached path */
    startStep = FindCachedPathStep(p[0], p[1], cacheEntry);
    if (startStep == -1) {
        return 0;
    }

    /* Copy waypoints from startStep onward into request's waypoint buffer */
    i = 0;
    if (startStep < PATH_MAX_WAYPOINTS) {
        do {
            *(unsigned char *)(*(int *)(p + 6) + i) =
                *(unsigned char *)(*cachePtr + cacheEntry * PATH_CACHE_ENTRY_SIZE +
                                   startStep + PATH_WAYPOINT_OFFSET);
            startStep++;
            i++;
        } while ((short)startStep < PATH_MAX_WAYPOINTS);
    }

    /* Mark cache entry as used (status = 2) */
    *(short *)(*cachePtr + cacheEntry * PATH_CACHE_ENTRY_SIZE) = 2;

    return 1;
}


/* ======================================================================
 * TryCachedPaths - Try to find a matching cached path
 * FUN_100427cc at 100427cc (Size: 272 bytes)
 *
 * param_2 == 0: check only cache entry 0 (primary)
 * param_2 != 0: check cache entries 1..19 (secondary)
 *
 * Returns: 1 if a cached path was used, 0 otherwise
 * ====================================================================== */
static int TryCachedPaths(PathRequest *req, short searchAll)
{
    int *distHandlePtr;
    int *cacheHandlePtr;
    void *handleData;
    int  result = 0;
    short entry;

    distHandlePtr  = gDistGridHandle;
    cacheHandlePtr = gPathCacheHandle;

    /* Lock cache handle */
    handleData = (void *)*cacheHandlePtr;
    if (handleData != (void *)0) {
        DetachResource(handleData);
    }
    /* Dereference: *gPathCachePtr = **gPathCacheHandle */
    *gPathCachePtr = *(int *)handleData;

    /* Lock distance grid handle */
    handleData = (void *)*distHandlePtr;
    if (handleData != (void *)0) {
        DetachResource(handleData);
    }
    *gDistGridDeref = *(unsigned int *)handleData;
    /* Set up dereferenced pointer chain */
    *gDistGridHandlePtr = (unsigned int)gDistGridDeref;

    if (searchAll == 0) {
        /* Check only primary cache entry (index 0) */
        if (LookupCachedPath(req, 0) != 0) {
            result = 1;
        }
    } else {
        /* Check secondary cache entries (indices 1..19) */
        entry = 1;
        do {
            if (LookupCachedPath(req, entry) != 0) {
                result = 1;
                break;
            }
            entry++;
        } while (entry < PATH_CACHE_ENTRIES);
    }

    /* Unlock handles */
    if (*distHandlePtr != 0) {
        DisposeHandle_Thunk(*distHandlePtr);
    }
    if (*cacheHandlePtr != 0) {
        DisposeHandle_Thunk(*cacheHandlePtr);
    }

    return result;
}


/* ======================================================================
 * TryDirectPath - Attempt a direct single-step path for adjacent tiles
 * FUN_100428dc at 100428dc (Size: 328 bytes)
 *
 * If source and destination are adjacent and terrain is compatible,
 * store a single direction step as the path.
 *
 * Returns: 1 if direct path created, 0 otherwise
 * ====================================================================== */
static int TryDirectPath(PathRequest *req)
{
    short *p = (short *)req;
    char  srcTerrain, dstTerrain;
    int   srcOnRough, dstOnRough;
    unsigned char direction;

    /* Look up terrain categories for source and destination */
    srcTerrain = *(char *)(*piRam1011735c +
                   (*(unsigned int *)(*piRam10117358 +
                       p[1] * MAP_ROW_STRIDE + p[0] * 2) >> 24) + 0x711);
    dstTerrain = *(char *)(*piRam1011735c +
                   (*(unsigned int *)(*piRam10117358 +
                       p[3] * MAP_ROW_STRIDE + p[2] * 2) >> 24) + 0x711);

    /* Check if source is on rough terrain (forest or hills) */
    srcOnRough = (srcTerrain == TERRAIN_CAT_FOREST || srcTerrain == TERRAIN_CAT_HILLS);
    dstOnRough = (dstTerrain == TERRAIN_CAT_FOREST || dstTerrain == TERRAIN_CAT_HILLS);

    /* For non-naval movement, terrain must be compatible */
    if (p[5] != MOVE_MODE_NAVAL) {
        /* If one is rough and the other isn't, no direct path */
        if (srcOnRough && !dstOnRough) return 0;
        if (!srcOnRough && dstOnRough) return 0;

        /* If destination terrain has zero movement cost in standard table, impassable */
        if (*(short *)(dstTerrain * 2 + gStdMoveCostTable) == 0) {
            return 0;
        }
    }

    /* Compute direction from source to destination */
    direction = (unsigned char)FUN_100184dc(p[0], p[1], p[2], p[3]);

    /* Store single-step direction as the entire path */
    **(unsigned char **)(p + 6) = direction;

    return 1;
}


/* ======================================================================
 * CheckTileAccessibility - Check if a tile is reachable by current army
 * FUN_10042a24 at 10042a24 (Size: 400 bytes)
 *
 * Starting from the tile at (param_1, param_2), walks in predefined
 * directions (from gTileWalkOffsets table) looking for an adjacent land tile
 * (terrain category 1, 2, or 3 = plains, forest, or hills).
 *
 * This is used to determine if an army near water can actually reach a
 * land tile (e.g., for port access or embarkation).
 *
 * Returns: 1 if accessible land tile found, 0 otherwise
 * ====================================================================== */
static int CheckTileAccessibility(short x, short y)
{
    char  terrain;
    int   walkTable;
    int   found;
    int   step;
    short curX, curY;
    int   result;

    walkTable = gTileWalkOffsets;
    found = 0;

    curX = x;

    /* Check tile to the west: if it's ocean, shift starting X left */
    terrain = *(char *)(*piRam1011735c +
               (*(unsigned int *)(*piRam10117358 +
                   y * MAP_ROW_STRIDE + x * 2 - 2) >> 24) + 0x711);
    if (terrain == TERRAIN_CAT_OCEAN) {
        curX = x - 1;
    }

    curY = y;

    /* Check tile to the north: if it's ocean, shift starting Y up */
    terrain = *(char *)(*piRam1011735c +
               (*(unsigned int *)(*piRam10117358 +
                   y * MAP_ROW_STRIDE + curX * 2 - MAP_ROW_STRIDE) >> 24) + 0x711);
    if (terrain == TERRAIN_CAT_OCEAN) {
        curY = y - 1;
    }

    /* Walk through the accessibility offset table */
    step = 0;
    while (1) {
        /* Sentinel check: end of table = -1 */
        if (*(short *)(step * 2 + walkTable) == -1) {
            return found;
        }
        if (found != 0) break;

        /* Apply direction offset */
        result = FUN_10017170(&curX, &curY,
                     *(unsigned short *)(step * 2 + walkTable));
        if (result == 0) {
            return 0;
        }

        /* Check if the resulting tile is traversable land */
        terrain = *(char *)(*piRam1011735c +
                   (*(unsigned int *)(*piRam10117358 +
                       curY * MAP_ROW_STRIDE + curX * 2) >> 24) + 0x711);
        if (terrain == TERRAIN_CAT_PLAINS ||
            terrain == TERRAIN_CAT_FOREST ||
            terrain == TERRAIN_CAT_HILLS) {
            found = 1;
        }

        step++;
    }
    return found;
}


/* ======================================================================
 * MarkArmyZoC - Mark Zone of Control around a single army
 * FUN_10042bb4 at 10042bb4 (Size: 372 bytes)
 *
 * For a given army, marks the 4 adjacent tiles (N,S,E,W) with:
 *   - The base terrain cost from the standard cost table entry at index 10
 *   - If markMode == 0: only mark if tile is owned by current player AND
 *     CheckTileAccessibility passes; otherwise set cost to 0
 *   - If markMode != 0: always mark if CheckTileAccessibility passes
 *   - Always sets the VISITED flag (0x80) on the marked tiles
 *   - Sets ZoC + enemy flags (0x18) if tile is accessible
 * ====================================================================== */
static void MarkArmyZoC(short armyIndex, short markMode)
{
    int  *costMapPtr = gCostMapPtr;
    int  *gameStatePtr = piRam1011735c;
    int  *mapDataPtr = piRam10117358;
    int   zocDY = gZoCNeighborDYOffsets;
    int   zocDX = gZoCNeighborDXOffsets;
    int   stdCostTable = gStdMoveCostTable;
    int   dir;
    int   armyBase;
    short adjX, adjY;
    int   costAddr;
    int   accessible;

    /* Iterate over 4 cardinal directions (indices 3 down to 0) */
    dir = 3;
    do {
        armyBase = *gameStatePtr + armyIndex * 0x42;
        adjX = *(short *)(armyBase + 0x1604) + *(short *)(dir * 2 + zocDX);
        adjY = *(short *)(armyBase + 0x1606) + *(short *)(dir * 2 + zocDY);

        /* Set base cost to standard cost table entry at index 10 (0x14 offset = index 10) */
        *(char *)(*costMapPtr + adjX * COST_ROW_STRIDE + (int)adjY) =
            (char)*(unsigned short *)(stdCostTable + 0x14);

        if (markMode == 0) {
            /* Only mark if tile is owned by current player */
            if ((*(unsigned int *)(*mapDataPtr + adjY * MAP_ROW_STRIDE + adjX * 2) >> 16 & 0xF) ==
                (int)*(short *)(*gameStatePtr + 0x110)) {
                /* Current player's tile: check accessibility */
                accessible = CheckTileAccessibility(adjX, adjY);
                if (accessible != 0) {
                    costAddr = *costMapPtr + adjX * COST_ROW_STRIDE;
                    *(unsigned char *)(costAddr + adjY) |= COST_ZOC_VISITED;  /* 0x18 */
                }
            } else {
                /* Not current player's tile: set cost to 0 (impassable) */
                *(unsigned char *)(*costMapPtr + adjX * COST_ROW_STRIDE + (int)adjY) = 0;
            }
        } else {
            /* Always check accessibility for non-zero markMode */
            accessible = CheckTileAccessibility(adjX, adjY);
            if (accessible != 0) {
                costAddr = *costMapPtr + adjX * COST_ROW_STRIDE;
                *(unsigned char *)(costAddr + adjY) |= COST_ZOC_VISITED;  /* 0x18 */
            }
        }

        /* Always mark tile as visited */
        costAddr = *costMapPtr + adjX * COST_ROW_STRIDE;
        *(unsigned char *)(costAddr + adjY) |= COST_VISITED_FLAG;  /* 0x80 */

    } while (dir-- != 0);
}


/* ======================================================================
 * ApplyZoneOfControl - Mark ZoC for all enemy armies near destination
 * FUN_10042d2c at 10042d2c (Size: 440 bytes)
 *
 * For each army in the game, if:
 *   - The destination terrain is ocean AND the army is within 1 tile
 *     of the destination, mark its ZoC
 *   - OR the army belongs to a neutral player (0x0F) and is in flying mode
 * ====================================================================== */
static void ApplyZoneOfControl(int reqAddr, short markMode)
{
    int  *gameStatePtr = piRam1011735c;
    short *zocFlagPtr = gZoCMarkingFlag;
    short *debugPtr = gAutoModeFlag;
    char  dstTerrain;
    short armyCount;
    short i;
    int   armyBase;
    short armyX, armyY;
    short dstX, dstY;
    int   isAIorHuman;

    /* Only apply ZoC in non-AI mode and if ZoC is active or markMode is set */
    if (*gAIModeFlag != 0) return;
    if (*zocFlagPtr == 0 && markMode == 0) return;

    dstX = *(short *)(reqAddr + 4);
    dstY = *(short *)(reqAddr + 6);

    /* Get terrain category at destination */
    dstTerrain = *(char *)(*gameStatePtr +
                   (*(unsigned int *)(*piRam10117358 +
                       dstY * MAP_ROW_STRIDE + dstX * 2) >> 24) + 0x711);

    armyCount = *(short *)(*gameStatePtr + 0x1602);
    while (armyCount != 0) {
        armyCount--;

        /* If destination is ocean, check if army is within 1 tile */
        if (dstTerrain == TERRAIN_CAT_OCEAN) {
            armyBase = *gameStatePtr + (int)armyCount * 0x42;
            armyX = *(short *)(armyBase + 0x1604);
            if ((int)armyX <= (int)dstX && (int)dstX <= armyX + 1) {
                armyY = *(short *)(armyBase + 0x1606);
                if ((int)armyY <= (int)dstY && (int)dstY <= armyY + 1) {
                    MarkArmyZoC(armyCount, markMode);
                }
            }
        }

        /* Check if we should apply ZoC for neutral armies in flying mode */
        if (*debugPtr == 0 &&
            *(short *)(*gameStatePtr + *(short *)(*gameStatePtr + 0x110) * 2 + 0xD0) != 1) {
            isAIorHuman = 0;  /* false */
        } else {
            isAIorHuman = 1;  /* true */
        }

        if (isAIorHuman &&
            *(char *)(*gameStatePtr + (int)armyCount * 0x42 + 0x1619) == NEUTRAL_PLAYER &&
            *(short *)(reqAddr + 10) == MOVE_MODE_FLYING) {
            MarkArmyZoC(armyCount, markMode);
        }
    }

    *zocFlagPtr = markMode;
}


/* ======================================================================
 * InitDistanceGrid - Initialize the distance grid for pathfinding
 * FUN_10042ee4 at 10042ee4 (Size: 868 bytes)
 *
 * Fills the entire 112x156 distance grid with initial values:
 *   - 30000 for explorable tiles
 *   - 0x7531 (DIST_IMPASSABLE) for tiles that cannot be entered
 *
 * The criteria for marking a tile impassable depends on the movement mode:
 *   - Mode 0 (normal): impassable if cost map byte & 0x08 == 0 (no army/ZoC)
 *   - Mode 1 (flying): impassable if cost map byte & 0x07 == 0
 *   - Mode 2 (naval):  impassable if (visited && base_cost == 0)
 *
 * Also handles fog-of-war: undiscovered tiles may be marked impassable
 * if vectoring is enabled and the player cannot see them.
 * ====================================================================== */
static void InitDistanceGrid(int reqAddr, short distance)
{
    int  *gameStatePtr = piRam1011735c;
    int  *visLayerPtr = piRam10117354;
    int  *costMapPtr = gCostMapPtr;
    unsigned int *distGridPtr = gDistGridHandlePtr;
    short *zocPenalty = (short *)gZoCPenalty;
    short  srcX, srcY;
    int    gameState;
    int    enforceFog;
    int    x, y;
    int    distBase, costBase;
    unsigned char costByte;
    short  moveMode;

    srcX = *(short *)(reqAddr + 4);
    srcY = *(short *)(reqAddr + 6);
    *zocPenalty = 0;

    gameState = *gameStatePtr;
    enforceFog = 1;  /* true by default */

    /* Check if fog-of-war blocking applies */
    if (*(short *)(gameState + 0x124) != 0) {
        /* Vectoring is enabled: check if player can override */
        int canSee;
        if (*gAutoModeFlag == 0 &&
            *(short *)(*(short *)(gameState + 0x110) * 2 + gameState + 0xD0) != 1) {
            canSee = 0;
        } else {
            canSee = 1;
        }
        if (!canSee) goto skip_fog;
    }
    enforceFog = 0;

skip_fog:
    /* Apply ZoC with markMode=1 */
    ApplyZoneOfControl(reqAddr, 1);

    moveMode = *(short *)(reqAddr + 10);

    if (moveMode == MOVE_MODE_FLYING) {
        /* --- Flying mode initialization --- */
        short zocValue;
        if (distance < 10) {
            zocValue = 30;  /* 0x1E */
        } else {
            zocValue = 10;
        }
        *zocPenalty = zocValue;

        /* Check terrain at source for ZoC penalty adjustment */
        {
            char srcTerrain = *(char *)(*gameStatePtr +
                               (*(unsigned int *)(*piRam10117358 +
                                   srcY * MAP_ROW_STRIDE + srcX * 2) >> 24) + 0x711);
            if (srcTerrain == TERRAIN_CAT_HILLS || srcTerrain == TERRAIN_CAT_FOREST) {
                *zocPenalty = 20;  /* 0x14 */
            }
        }

        for (x = MAP_MAX_X; x >= 0; x--) {
            distBase = *(int *)*distGridPtr + x * DIST_ROW_STRIDE;
            costBase = *costMapPtr;
            for (y = MAP_MAX_Y; y >= 0; y--) {
                *(short *)(distBase + y * 2) = DIST_INITIAL;

                /* Impassable if: (fog blocks AND not source) OR base_cost == 0 */
                if ((enforceFog &&
                     (*(unsigned int *)(*visLayerPtr +
                         y * VIS_ROW_STRIDE + x) >> 29 & 1) == 0 &&
                     (x != srcX || y != srcY)) ||
                    (*(unsigned char *)(costBase + x * COST_ROW_STRIDE + y) & COST_BASE_MASK) == 0) {
                    *(short *)(distBase + y * 2) = DIST_IMPASSABLE;
                }
            }
        }
    }
    else if (moveMode == MOVE_MODE_NORMAL) {
        /* --- Normal ground mode initialization --- */
        for (x = MAP_MAX_X; x >= 0; x--) {
            for (y = MAP_MAX_Y; y >= 0; y--) {
                *(short *)(*(int *)*distGridPtr + x * DIST_ROW_STRIDE + y * 2) = DIST_INITIAL;

                /* Impassable if: (not source AND fog blocks) OR no army access (bit 3) */
                if (((x != srcX && y != srcY) &&
                     enforceFog &&
                     (*(unsigned int *)(*visLayerPtr +
                         y * VIS_ROW_STRIDE + x) >> 29 & 1) == 0) ||
                    (*(unsigned char *)(*costMapPtr + x * COST_ROW_STRIDE + y) & COST_ZOC_FLAG) == 0) {
                    *(short *)(*(int *)*distGridPtr + x * DIST_ROW_STRIDE + y * 2) = DIST_IMPASSABLE;
                }
            }
        }
    }
    else {
        /* --- Naval mode initialization --- */
        for (x = MAP_MAX_X; x >= 0; x--) {
            for (y = MAP_MAX_Y; y >= 0; y--) {
                *(short *)(*(int *)*distGridPtr + x * DIST_ROW_STRIDE + y * 2) = DIST_INITIAL;

                /* Impassable if: (not source AND fog blocks) OR (visited AND base_cost==0) */
                if (((x != srcX && y != srcY) &&
                     enforceFog &&
                     (*(unsigned int *)(*visLayerPtr +
                         y * VIS_ROW_STRIDE + x) >> 29 & 1) == 0) ||
                    ((*(unsigned char *)(*costMapPtr + x * COST_ROW_STRIDE + y) & COST_VISITED_FLAG) != 0 &&
                     (*(unsigned char *)(*costMapPtr + x * COST_ROW_STRIDE + y) & COST_BASE_MASK) == 0)) {
                    *(short *)(*(int *)*distGridPtr + x * DIST_ROW_STRIDE + y * 2) = DIST_IMPASSABLE;
                }
            }
        }
    }
}


/* ======================================================================
 * DijkstraFloodFill - Core expanding-ring Dijkstra pathfinding
 * FUN_10043248 at 10043248 (Size: 1884 bytes)
 *
 * This is the heart of the pathfinding system. It performs a wavefront
 * expansion / Dijkstra flood fill starting from the DESTINATION tile,
 * expanding outward in concentric rings until it reaches the SOURCE.
 *
 * The distance grid stores the minimum cost to reach each tile from the
 * destination. Negative values mark tiles on the frontier (to be expanded
 * next pass). Positive values are finalized distances. 0x7531 = impassable.
 *
 * param_1: PathRequest structure
 * param_2: pass number (0 = first pass, 1 = retry with expanded search)
 *
 * Returns: 1 if path found, 0 if no path exists
 * ====================================================================== */
static short DijkstraFloodFill(PathRequest *req, short pass)
{
    short *p = (short *)req;
    unsigned char srcCostByte;      /* bVar1: cost byte of current tile */
    unsigned char dstCostByte;      /* bVar2: cost byte of neighbor tile */
    short  currentDist;             /* sVar4: distance at current tile */
    int    distRowBase;             /* iVar5: precomputed dist grid row pointer */
    int    xCoord;                  /* iVar6: current X coordinate */
    int    pathFound;               /* bVar7: set when source tile is reached */
    int    anyExpanded;             /* bVar8: set when any tile was expanded this ring */
    int    neighborDXBase;          /* iVar10: neighbor DX table base */
    int    neighborDYBase;          /* iVar9:  neighbor DY table base */
    unsigned int *distGridHandlePtr;
    int    *costMapBase;
    short  *zocPenalty;

    short  result;
    short  convergenceCounter;
    short  searchRadius;
    short  searchMinX, searchMinY;
    short  searchMaxX, searchMaxY;
    short  srcX, srcY;

    /* Effective scan bounds for this ring */
    short  scanMaxX, scanMaxY, scanMinY;

    int    neighborPattern;
    int    neighborIdx;
    short  neighborX, neighborY;
    int    neighborDistAddr;
    short *neighborDistPtr;
    unsigned short baseCost;
    short  absDist, absCurrent;
    int    newDist;

    /* Cache global pointers locally */
    zocPenalty     = gZoCPenalty;
    costMapBase    = gCostMapPtr;
    distGridHandlePtr = gDistGridHandlePtr;
    neighborDXBase = gNeighborDXOffsets;
    neighborDYBase = gNeighborDYOffsets;

    result = 1;
    convergenceCounter = 3;
    pathFound = 0;  /* false */

    /* If AI mode is active AND this is a retry pass, abort immediately */
    if (*gAIModeFlag != 0 && pass != 0) {
        result = 0;
        return result;
    }

    /* --- Determine search radius --- */
    if ((p[4] & PATH_FLAG_LIMITED_RANGE) != 0) {
        /* Limited-range mode: use configured max range */
        *gSearchRadius = 0;
        searchRadius = *gMaxSearchRange;
    } else {
        /* Normal mode */
        short initRadius;
        if (pass == 0) {
            initRadius = 0;
        } else {
            initRadius = *gSearchRadius;
        }
        *gSearchRadius = initRadius;

        if (pass == 0) {
            searchRadius = 6;
        } else if (*gAIModeFlag == 0) {
            searchRadius = 50;  /* 0x32: human player gets larger search */
        } else {
            searchRadius = 20;  /* 0x14: AI gets smaller search */
        }
    }

    /* --- Compute search bounding box --- */
    /* MinX = min(srcX, dstX) - searchRadius, clamped to 0 */
    searchMinX = p[0];
    if (p[2] < p[0]) searchMinX = p[2];
    searchMinX -= searchRadius;
    if (searchMinX < 0) searchMinX = 0;

    /* MinY = min(srcY, dstY) - searchRadius, clamped to 0 */
    searchMinY = p[1];
    if (p[3] < p[1]) searchMinY = p[3];
    searchMinY -= searchRadius;
    if (searchMinY < 0) searchMinY = 0;

    /* MaxX = max(srcX, dstX) + searchRadius, clamped to MAP_MAX_X */
    searchMaxX = p[0];
    if (p[0] < p[2]) searchMaxX = p[2];
    searchMaxX += searchRadius;
    if (searchMaxX > MAP_MAX_X) searchMaxX = MAP_MAX_X;

    /* MaxY = max(srcY, dstY) + searchRadius, clamped to MAP_MAX_Y */
    searchMaxY = p[1];
    if (p[1] < p[3]) searchMaxY = p[3];
    searchMaxY += searchRadius;
    if (searchMaxY > MAP_MAX_Y) searchMaxY = MAP_MAX_Y;

    srcX = p[0];
    srcY = p[1];

    /* === Main expansion loop === */
    do {
        anyExpanded = 0;  /* false */

        /* In limited-range mode, check if we've reached the maximum radius */
        if ((p[4] & PATH_FLAG_LIMITED_RANGE) != 0 && *gSearchRadius == searchRadius) {
            return result;
        }

        /* Compute effective scan bounds, expanding from destination by current radius */
        scanMaxX = p[2] + *gSearchRadius;
        if (scanMaxX > MAP_MAX_X) scanMaxX = MAP_MAX_X;
        {
            short tempMaxY = p[3] + *gSearchRadius;
            if (tempMaxY > MAP_MAX_Y) tempMaxY = MAP_MAX_Y;
            if (searchMaxX <= scanMaxX) scanMaxX = searchMaxX;
            scanMaxY = searchMaxY;
            if (tempMaxY < searchMaxY) scanMaxY = tempMaxY;
        }

        scanMinY = (searchMinY < 0) ? 0 : searchMinY;

        {
            /* Lower bound for X scan */
            short scanMinX;
            long  lx;

            lx = (long)(short)(p[2] - *gSearchRadius);
            if (lx < 0) lx = 0;
            if ((int)lx <= (int)searchMinX) lx = (long)searchMinX;

            if ((int)lx <= (int)scanMaxX) {
                do {
                    xCoord = (int)lx;
                    distRowBase = *(int *)*distGridHandlePtr + xCoord * DIST_ROW_STRIDE;

                    {
                        short yStart = p[3] - *gSearchRadius;
                        if (yStart < scanMinY) yStart = scanMinY;

                        for (; yStart <= scanMaxY; yStart++) {
                            currentDist = *(short *)(distRowBase + yStart * 2);

                            /* Only process frontier tiles (negative distance) */
                            if (currentDist >= 1) continue;

                            /* Read cost byte for this tile */
                            srcCostByte = *(unsigned char *)(*costMapBase +
                                           xCoord * COST_ROW_STRIDE + (int)yStart);

                            /* Finalize this tile: make distance positive */
                            *(short *)(yStart * 2 + distRowBase) = -currentDist;
                            anyExpanded = 1;  /* true */

                            /* --- Select neighbor pattern based on position --- */
                            /* Determines which neighbor offsets to use based on
                               whether we're at a corner, edge, or interior tile */
                            if (*gAIModeFlag == 0) {
                                neighborPattern = 0;
                            } else {
                                neighborPattern = 9;
                            }

                            if (yStart == 0) {
                                if (xCoord == 0) {
                                    neighborPattern = 1;
                                } else if (xCoord == MAP_MAX_X) {
                                    neighborPattern = 3;
                                } else {
                                    neighborPattern = 2;
                                }
                            } else if (yStart == MAP_MAX_Y) {
                                if (xCoord == 0) {
                                    neighborPattern = 6;
                                } else if (xCoord == MAP_MAX_X) {
                                    neighborPattern = 8;
                                } else {
                                    neighborPattern = 7;
                                }
                            } else if (xCoord == 0) {
                                neighborPattern = 4;
                            } else if (xCoord == MAP_MAX_X) {
                                neighborPattern = 5;
                            }

                            /* Look up the starting index into the neighbor offset tables */
                            neighborIdx = (int)*(short *)(neighborPattern * 2 + gNeighborPatternTable);

                            /* --- Iterate over all neighbors --- */
                            neighborX = *(short *)(neighborIdx * 2 + neighborDXBase);
                            while (neighborX != NEIGHBOR_SENTINEL) {
                                neighborX = (short)lx + neighborX;
                                {
                                    int nextIdx = (int)(short)((short)neighborIdx + 1);
                                    neighborY = yStart + *(short *)(neighborIdx * 2 + neighborDYBase);

                                    neighborDistAddr = *(int *)*distGridHandlePtr +
                                                       neighborX * DIST_ROW_STRIDE;
                                    neighborDistPtr = (short *)(neighborDistAddr + neighborY * 2);

                                    /* Skip impassable tiles */
                                    if (*neighborDistPtr != DIST_IMPASSABLE) {
                                        dstCostByte = *(unsigned char *)(*costMapBase +
                                                       neighborX * COST_ROW_STRIDE +
                                                       (int)neighborY);
                                        baseCost = dstCostByte & COST_BASE_MASK;

                                        /* === Handle source tile (destination of pathfinding) === */
                                        if ((int)neighborX == (int)srcX && neighborY == srcY) {
                                            /* Source tile: special handling for flying mode */
                                            if (p[5] == MOVE_MODE_FLYING &&
                                                (srcCostByte & COST_ROAD_FLAG) == 0 &&
                                                (dstCostByte & COST_ROAD_FLAG) == 0 &&
                                                (dstCostByte & COST_ZOC_FLAG) != (srcCostByte & COST_ZOC_FLAG)) {
                                                /* Terrain mismatch in flying mode: skip */
                                            } else {
                                                baseCost = 1;
                                                goto update_distance;
                                            }
                                        }
                                        /* === Naval mode === */
                                        else if (p[5] == MOVE_MODE_NAVAL) {
                                            if ((dstCostByte & COST_ZOC_FLAG) == 0 ||
                                                (dstCostByte & COST_ROAD_FLAG) != 0) {
                                                /* Water or road tile: adjust cost */
                                                if ((dstCostByte & COST_BASE_MASK) == 0) {
                                                    baseCost = 2;
                                                }
                                                if (baseCost > 2) {
                                                    baseCost = 2;
                                                }
                                            } else {
                                                baseCost = 2;
                                            }
                                            goto update_distance;
                                        }
                                        /* === Normal ground mode === */
                                        else if (p[5] == MOVE_MODE_NORMAL) {
                                            /* Must have army/ZoC access (bit 3) or visited flag (bit 7) */
                                            if ((dstCostByte & COST_ZOC_FLAG) != 0 ||
                                                (dstCostByte & COST_VISITED_FLAG) != 0) {
                                                goto update_distance;
                                            }
                                            /* Otherwise mark as impassable */
                                            *neighborDistPtr = DIST_IMPASSABLE;
                                        }
                                        /* === Flying mode (not source tile) === */
                                        else {
                                            /* Flying: check terrain compatibility */
                                            if ((srcCostByte & COST_ROAD_FLAG) != 0 ||
                                                (dstCostByte & COST_ROAD_FLAG) != 0 ||
                                                (dstCostByte & COST_ZOC_FLAG) == (srcCostByte & COST_ZOC_FLAG)) {
                                                /* === Road and Bridge discounts === */
                                                if (p[4] != 0 && baseCost > 2) {
                                                    if (((p[4] & PATH_FLAG_ROAD_BONUS) != 0 &&
                                                         (dstCostByte & COST_ROAD_ADJ_FLAG) != 0) ||
                                                        ((p[4] & PATH_FLAG_BRIDGE_BONUS) != 0 &&
                                                         (dstCostByte & COST_BRIDGE_FLAG) != 0)) {
                                                        baseCost = 2;
                                                    }
                                                }

                                                /* === Zone of Control penalty === */
                                                if (((srcCostByte & COST_ZOC_FLAG) == 0 ||
                                                     (srcCostByte & COST_ROAD_FLAG) != 0) &&
                                                    (dstCostByte & COST_ZOC_FLAG) != 0 &&
                                                    (dstCostByte & COST_ROAD_FLAG) == 0) {
                                                    baseCost = baseCost + *zocPenalty;
                                                }
                                                goto update_distance;
                                            }
                                            /* Terrain mismatch: don't update */
                                        }

                                        goto skip_update;

update_distance:
                                        /* Compute absolute values for comparison */
                                        absCurrent = -*neighborDistPtr;
                                        if (absCurrent < *neighborDistPtr) {
                                            absCurrent = *neighborDistPtr;
                                        }

                                        /* Update if new path is shorter */
                                        newDist = (int)(-currentDist) + (int)(short)baseCost;
                                        if (newDist < (int)absCurrent) {
                                            *neighborDistPtr = currentDist - (short)baseCost;
                                        }
                                    }

skip_update:
                                    neighborIdx = nextIdx;
                                    neighborX = *(short *)(nextIdx * 2 + neighborDXBase);
                                }
                            } /* end while neighbors */

                            /* Check if we reached the source tile */
                            if (xCoord == srcX && yStart == srcY &&
                                (p[4] & PATH_FLAG_LIMITED_RANGE) == 0) {
                                pathFound = 1;  /* true */
                            }
                        } /* end for y */
                    }

                    lx = (long)((short)lx + 1);
                } while ((short)lx <= scanMaxX);
            } /* end if lx <= scanMaxX */
        }

        /* --- Check convergence --- */
        if (pathFound && convergenceCounter != 0) {
            convergenceCounter--;
        }

        /* Increment search radius for next ring */
        *gSearchRadius = *gSearchRadius + 1;

        /* If nothing was expanded and we haven't found a path, give up */
        if (!anyExpanded) {
            convergenceCounter = 0;
            if (!pathFound) {
                result = 0;
            }
        }
    } while (convergenceCounter != 0);

    return result;
}


/* ======================================================================
 * ReconstructPath - Trace back optimal path from source to destination
 * FUN_100439a4 at 100439a4 (Size: 736 bytes)
 *
 * After DijkstraFloodFill has populated the distance grid, this function
 * performs a steepest-descent trace from the source position back to the
 * destination, storing direction indices in the waypoint buffer.
 *
 * At each step, it examines 8 neighbors (using a direction/offset lookup
 * table) and picks the one with the lowest distance in the grid, recording
 * the direction taken.
 *
 * Special handling:
 *   - In flying mode (moveMode == 1), avoids crossing between different
 *     terrain types (ZoC boundary) unless on a road
 *   - Skips neighbors that are out of bounds, at sentinel distance (30000),
 *     or marked impassable (0x7531)
 *   - AI pathfinding (gAIModeFlag != 0) has a tie-breaking rule: when
 *     two neighbors have the same distance, prefer the first one found
 *   - Path is truncated at 198 (0xC6) waypoints; if exceeded, the
 *     destination is moved to the current position
 * ====================================================================== */
static void ReconstructPath(PathRequest *req)
{
    short *p = (short *)req;
    int  *costMapBase;
    unsigned int *distGridHandlePtr;
    short *aiModePtr;

    short  bestDist;
    int    curX, curY;
    int    bestX, bestY;
    unsigned int bestDir;
    unsigned char srcCostByte;
    unsigned char neighborCostByte;
    unsigned short srcZoC;
    unsigned char  srcRoad;
    int    direction;
    short  neighborDist;
    short  stepCount;
    int    neighborIdx;
    int    directionOffset;
    short  nx, ny;

    costMapBase       = gCostMapPtr;
    distGridHandlePtr = gDistGridHandlePtr;
    aiModePtr         = gAIModeFlag;

    /* Get the distance value at the source (starting point for reconstruction) */
    bestDist = AbsShort(
        *(unsigned short *)(*(int *)*distGridHandlePtr +
            p[0] * DIST_ROW_STRIDE + p[1] * 2));

    stepCount = 0;
    curY = (int)p[1];
    curX = (int)p[0];

    do {
        srcCostByte = 0;

        /* Check if we've reached the destination */
        if (curX == (int)p[2] && curY == (int)p[3]) {
            return;
        }

        /* In flying mode, read source tile cost byte for terrain crossing checks */
        if (p[5] == MOVE_MODE_FLYING) {
            srcCostByte = *(unsigned char *)(*costMapBase +
                           curX * COST_ROW_STRIDE + curY);
            srcZoC  = srcCostByte & COST_ZOC_FLAG;
            srcRoad = srcCostByte & COST_ROAD_FLAG;
        }

        /* Get compass direction from current position toward destination */
        direction = FUN_100184dc((short)curX, (short)curY, p[2], p[3]);

        bestY = -1;
        bestX = -1;

        /* Examine all 8 neighbors */
        neighborIdx = 0;
        do {
            /*
             * Compute the actual direction to check.
             * The lookup table at offset -0x19D8 provides direction biases:
             * (direction + bias[neighborIdx]) mod 8 gives the neighbor to examine.
             * This prioritizes neighbors in the direction of the destination.
             */
            directionOffset = direction +
                *(short *)(neighborIdx * 2 + *(int *)((int)(unsigned int)stepCount + (-0x19D8)));
            /* Modulo 8 with sign handling (equivalent to ((val % 8) + 8) % 8) */
            directionOffset = (short)directionOffset -
                (short)(((int)directionOffset >> 3) +
                        ((int)directionOffset < 0 && (directionOffset & 7) != 0)) * 8;

            /* Apply direction offset to get neighbor coordinates */
            nx = (short)curX +
                *(short *)((unsigned int)directionOffset * 2 +
                           *(int *)((int)(unsigned int)stepCount + (-0x19D4)));
            ny = (short)curY +
                *(short *)((unsigned int)directionOffset * 2 +
                           *(int *)((int)(unsigned int)stepCount + (-0x19D0)));

            /* --- Bounds and validity checks --- */

            /* AI skip: if in AI mode, odd-numbered directions, and neighbor tile
               has no ZoC flag or is plains terrain -> skip */
            if (*aiModePtr != 0 && (directionOffset & 1) != 0) {
                unsigned char nCost = *(unsigned char *)(*costMapBase +
                                       nx * COST_ROW_STRIDE + (int)ny);
                if ((nCost & COST_ZOC_FLAG) == 0) goto next_neighbor;

                /* Also check terrain: if plains, skip diagonal neighbors */
                {
                    char terrain = *(char *)(*piRam1011735c +
                                   (*(unsigned int *)(*piRam10117358 +
                                       (int)ny * MAP_ROW_STRIDE + (int)nx * 2) >> 24) + 0x711);
                    if (terrain == TERRAIN_CAT_PLAINS) goto next_neighbor;
                }
            }

            /* Out-of-bounds check */
            if (nx < 0 || nx > MAP_MAX_X || ny < 0 || ny > MAP_MAX_Y) {
                goto next_neighbor;
            }

            /* Check distance grid values */
            neighborDist = *(short *)(*(int *)*distGridHandlePtr +
                            (int)nx * DIST_ROW_STRIDE + (int)ny * 2);
            if (neighborDist == DIST_INITIAL || neighborDist == DIST_IMPASSABLE) {
                goto next_neighbor;
            }

            /* --- Flying mode terrain crossing check --- */
            if (srcRoad == 0 && p[5] == MOVE_MODE_FLYING) {
                neighborCostByte = *(unsigned char *)(*costMapBase +
                                    nx * COST_ROW_STRIDE + (int)ny);
                if ((neighborCostByte & COST_ROAD_FLAG) == 0) {
                    /* Not on a road: check if crossing ZoC boundary */
                    if (srcZoC == 0) {
                        if ((neighborCostByte & COST_ZOC_FLAG) == 0) goto do_evaluate;
                    } else {
                        if ((neighborCostByte & COST_ZOC_FLAG) != 0) goto do_evaluate;
                    }
                    goto next_neighbor;  /* terrain boundary crossing: skip */
                }
            }

do_evaluate:
            /* Compute absolute distance at neighbor */
            {
                short absDist = AbsShort(
                    *(unsigned short *)(*(int *)*distGridHandlePtr +
                        (int)nx * DIST_ROW_STRIDE + (int)ny * 2));

                /* Pick this neighbor if it has a lower (or equal with tie-break) distance */
                if (absDist < bestDist ||
                    (*aiModePtr != 0 && bestX == -1 && absDist == bestDist)) {
                    bestY = (int)ny;
                    bestDir = (unsigned int)directionOffset;
                    bestDist = absDist;
                    bestX = (int)nx;
                }
            }

next_neighbor:
            neighborIdx++;
        } while ((short)neighborIdx < 8);

        /* Store the best direction and advance */
        if (stepCount < PATH_RECONSTRUCT_MAX && bestX != -1) {
            *(char *)(*(int *)(p + 6) + (int)stepCount) = (char)bestDir;
            stepCount++;
            curY = bestY;
            curX = bestX;
        } else {
            /* Path too long or no valid neighbor: truncate destination */
            p[2] = (short)curX;
            p[3] = (short)curY;
        }
    } while (1);
}


/* ======================================================================
 * StorePathInCache - Store a computed path into the path cache
 * FUN_10043c84 at 10043c84 (Size: 476 bytes)
 *
 * If param_3 == 0: store in entry 0 (primary slot, no eviction check)
 * If param_3 != 0: find the closest cached path to evict, or find an
 *   empty slot. Evicts the nearest path if it's closer than the new one.
 *
 * Each cache entry stores:
 *   +0x00: status (2 = active)
 *   +0x02: moveMode
 *   +0x04: flags
 *   +0x06: srcX
 *   +0x08: srcY
 *   +0x0A: dstX
 *   +0x0C: dstY
 *   +0x0E: 200 bytes of waypoint directions
 * ====================================================================== */
static void StorePathInCache(short distance, PathRequest *req, short searchAll)
{
    short *p = (short *)req;
    int  *cacheHandlePtr = gPathCacheHandle;
    int  *cachePtr = gPathCachePtr;
    int  *handleData;
    int   bestEntry;
    short bestDist;
    int   canStore;
    int   entryBase;
    short entryDist;
    int   i;
    int   entryOffset;

    bestEntry = -1;
    bestDist = 10000;
    canStore = 1;  /* true */

    /* Lock cache handle */
    handleData = (int *)*cacheHandlePtr;
    if (handleData != (int *)0) {
        DetachResource(handleData);
    }
    *cachePtr = *handleData;

    if (searchAll == 0) {
        /* Store directly in entry 0 */
        i = 0;
    } else {
        /* Search for an empty slot or the closest one to evict */
        int entry = 1;
        i = -1;
        do {
            /* Check if entry is empty (status == 0) */
            if (*(short *)(*cachePtr + entry * PATH_CACHE_ENTRY_SIZE) == 0) break;

            /* Compute distance of this cached path */
            entryBase = *cachePtr + entry * PATH_CACHE_ENTRY_SIZE;
            entryDist = CalcDistance(
                *(unsigned short *)(entryBase + 10),
                *(unsigned short *)(entryBase + 12),
                *(unsigned short *)(entryBase + 6),
                *(unsigned short *)(entryBase + 8));

            if (entryDist < bestDist) {
                bestEntry = entry;
                bestDist = entryDist;
            }

            entry++;
            i = -1;
        } while ((short)entry < PATH_CACHE_ENTRIES);

        /* If no empty slot found, try to evict */
        if (i == -1) {
            canStore = (bestEntry != -1);
            if (bestDist < distance) {
                i = bestEntry;
            }
            if (i == -1) {
                canStore = 0;  /* false */
            }
        }
    }

    if (canStore) {
        /* Copy 200 waypoint bytes from request into cache entry */
        {
            int j = PATH_MAX_WAYPOINTS - 1;  /* 199 */
            do {
                *(unsigned char *)(*cachePtr + i * PATH_CACHE_ENTRY_SIZE +
                                   j + PATH_WAYPOINT_OFFSET) =
                    *(unsigned char *)(*(int *)(p + 6) + j);
            } while (j-- != 0);
        }

        /* Write header fields */
        entryOffset = i * PATH_CACHE_ENTRY_SIZE;
        *(short *)(*cachePtr + entryOffset + 0)  = 2;     /* status = active */
        *(short *)(*cachePtr + entryOffset + 2)  = p[5];  /* moveMode */
        *(short *)(*cachePtr + entryOffset + 4)  = p[4];  /* flags */
        *(short *)(*cachePtr + entryOffset + 6)  = p[0];  /* srcX */
        *(short *)(*cachePtr + entryOffset + 8)  = p[1];  /* srcY */
        *(short *)(*cachePtr + entryOffset + 10) = p[2];  /* dstX */
        *(short *)(*cachePtr + entryOffset + 12) = p[3];  /* dstY */
    }

    /* Unlock */
    if (*cacheHandlePtr != 0) {
        DisposeHandle_Thunk(*cacheHandlePtr);
    }
}


/* ======================================================================
 * PathFind_Execute - Main entry point for pathfinding
 * FUN_10043e60 at 10043e60 (Size: 688 bytes)
 *
 * Sets up and runs a pathfinding request:
 *   1. Bounds-check destination
 *   2. Try cached paths first
 *   3. Try direct single-step path
 *   4. Run Dijkstra flood fill (up to 2 passes)
 *   5. Reconstruct and cache the path
 *
 * Returns: 1 if path found, 0 otherwise
 * ====================================================================== */
static int PathFind_Execute(PathRequest *req)
{
    short *p = (short *)req;
    int    result = 0;
    int    distance;
    short  pass;
    int    tryResult;

    /* Cache global pointers */
    int  *costMapBase       = gCostMapPtr;
    unsigned int *distGridHandlePtr = gDistGridHandlePtr;
    unsigned int *distGridStorage   = gDistGridDeref;
    int  *distHandle        = gDistGridHandle;
    int  *costHandle        = gCostMapHandle;

    /* Compute estimated distance between source and destination */
    distance = (int)(short)CalcDistance(p[2], p[3], p[0], p[1]);

    /* Bounds check: destination must be within map */
    if (p[2] < 0 || p[3] < 0 || p[2] > MAP_MAX_X || p[3] > MAP_MAX_Y) {
        return 0;
    }

    /* Ensure pathfinding buffers are allocated */
    if (*gPathfindingInitialized == 0) {
        AllocatePathfindingBuffers();
    }

    /* Clear waypoint buffer (200 bytes of 0xFF) */
    {
        int i = PATH_MAX_WAYPOINTS - 1;  /* 199 */
        do {
            *(unsigned char *)(*(int *)(p + 6) + i) = 0xFF;
        } while (i-- != 0);
    }

    /* --- Try cached paths first (only if not limited-range) --- */
    if ((p[4] & PATH_FLAG_LIMITED_RANGE) == 0) {
        /* Try primary cache */
        tryResult = TryCachedPaths(req, 0);
        if (tryResult != 0) return 1;

        /* Try secondary caches for longer paths */
        if (distance > 14) {
            tryResult = TryCachedPaths(req, 1);
            if (tryResult != 0) return 1;
        }

        /* Try direct path for adjacent tiles (distance == 1) */
        if (distance == 1) {
            tryResult = TryDirectPath(req);
            if (tryResult != 0) return 1;
        }
    }

    /* --- Lock distance grid handle --- */
    {
        void *hData = (void *)*distHandle;
        if (hData != (void *)0) {
            DetachResource(hData);
        }
        *distGridStorage = *(unsigned int *)hData;
        *distGridHandlePtr = (unsigned int)distGridStorage;
    }

    /* --- Lock cost map handle --- */
    {
        int *hData = (int *)*costHandle;
        if (hData != (int *)0) {
            DetachResource(hData);
        }
        *costMapBase = *(int *)hData;
    }

    /* --- Initialize distance grid --- */
    InitDistanceGrid((int)p, (short)distance);

    /* --- Seed destination and run Dijkstra --- */
    /* Check if destination is reachable (not impassable) or has visited flag */
    if (*(short *)(*(int *)*distGridHandlePtr +
            (short)p[2] * DIST_ROW_STRIDE + (short)p[3] * 2) != DIST_IMPASSABLE ||
        (*(unsigned char *)(*costMapBase +
            (short)p[2] * COST_ROW_STRIDE + (int)(short)p[3]) & COST_VISITED_FLAG) != 0) {

        /* Seed the destination tile with -1 (frontier) */
        *(unsigned short *)(*(int *)*distGridHandlePtr +
            (short)p[2] * DIST_ROW_STRIDE + (short)p[3] * 2) = DIST_FRONTIER;

        /* Run Dijkstra flood fill - try up to 2 passes */
        pass = 0;
        do {
            result = (int)DijkstraFloodFill(req, pass);
            pass++;
            if (result != 0) break;
        } while (pass < 2);

        /* If path found and not limited-range, reconstruct and cache it */
        if (result == 1 && (p[4] & PATH_FLAG_LIMITED_RANGE) == 0) {
            ReconstructPath(req);

            /* Store in cache: primary for short paths, secondary for long */
            if (distance < 15) {
                StorePathInCache((short)distance, req, 0);
            } else {
                StorePathInCache((short)distance, req, 1);
            }
        }
    }

    /* --- Clean up ZoC markings and unlock handles --- */
    ApplyZoneOfControl((int)p, 0);

    if (*distHandle != 0) {
        DisposeHandle_Thunk(*distHandle);
    }
    if (*costHandle != 0) {
        DisposeHandle_Thunk(*costHandle);
    }

    return result;
}


/* ======================================================================
 * BuildMovementCostMap - Generate per-tile movement cost grid from terrain
 * FUN_10044110 at 10044110 (Size: 888 bytes)
 *
 * For each tile on the 112x156 map, computes a cost byte encoding:
 *   - Base movement cost (bits 0-2) from the terrain category
 *   - Road flag (bit 4) if the tile has a road
 *   - ZoC + enemy flags (bits 3,7) for tiles adjacent to armies
 *
 * param_1: army type index (0x0E = flying, others use standard cost table)
 * param_2: force rebuild flag (if 0, skips rebuild if type hasn't changed)
 *
 * After building the raw cost map, it iterates over all armies and marks
 * adjacent tiles with ZoC flags.
 * ====================================================================== */
static void BuildMovementCostMap(short armyType, short forceRebuild)
{
    short *lastArmyType     = gLastArmyTypeForCostMap;
    int   *costMapBase      = gCostMapPtr;
    unsigned int *distGridStorage = gDistGridDeref;
    int   *distHandle       = gDistGridHandle;
    int   *costHandle       = gCostMapHandle;
    int   *gameStatePtr     = piRam1011735c;
    int   *mapDataPtr       = piRam10117358;
    int   *visLayerPtr      = piRam10117354;
    int    flyingCostTable  = gFlyingMoveCostTable;
    int    stdCostTable     = gStdMoveCostTable;

    int    x, y;
    int    terrainCat;
    unsigned char costByte;
    unsigned int  tileWord;
    int    armyPresent;
    short  armyCount;
    int    armyBase;
    int    armyX, armyY;
    int    accessible;
    int    costAddr;

    /* Ensure pathfinding buffers are allocated */
    if (*gPathfindingInitialized == 0) {
        AllocatePathfindingBuffers();
    }

    /* Skip rebuild if army type hasn't changed and not forced */
    if (forceRebuild == 0 && *lastArmyType == armyType) {
        return;
    }

    *lastArmyType = armyType;

    /* Record whether this is a flying unit (used elsewhere) */
    /* *(unsigned short *)ppuVar15[-0x67b] = (armyType == ARMY_TYPE_FLYING) ? 1 : 0; */

    /* --- Lock distance grid handle --- */
    {
        void *hData = (void *)*distHandle;
        if (hData != (void *)0) {
            DetachResource(hData);
        }
        *distGridStorage = *(unsigned int *)hData;
        *gDistGridHandlePtr = (unsigned int)distGridStorage;
    }

    /* --- Lock cost map handle --- */
    {
        int *hData = (int *)*costHandle;
        if (hData != (int *)0) {
            DetachResource(hData);
        }
        *costMapBase = *(int *)hData;
    }

    /* === Build cost map: iterate all tiles (x: 111..0, y: 155..0) === */
    for (x = MAP_MAX_X; x >= 0; x--) {
        for (y = MAP_MAX_Y; y >= 0; y--) {
            /* Read terrain tile word (4 bytes at map offset) */
            tileWord = *(unsigned int *)(*mapDataPtr +
                         y * MAP_ROW_STRIDE + x * 2);

            /* Extract terrain category from tile graphic index */
            terrainCat = (int)*(char *)(*gameStatePtr +
                          (tileWord >> 24) + 0x711);

            /* Check if armies are present on this tile (visibility layer) */
            armyPresent = (*(unsigned int *)(*visLayerPtr +
                            y * VIS_ROW_STRIDE + x) >> 24) & 0x1F;

            if (armyType == ARMY_TYPE_FLYING) {
                /* Flying unit: use flying cost table */
                if (armyPresent != 0) {
                    costByte = 1;   /* army present: cost = 1 (must fight) */
                } else {
                    costByte = (unsigned char)*(unsigned short *)(terrainCat * 2 +
                                flyingCostTable);
                }
            } else {
                /* Standard unit: use standard cost table */
                if (armyPresent != 0) {
                    costByte = 1;   /* army present: cost = 1 (must fight) */
                } else {
                    costByte = (unsigned char)*(unsigned short *)(terrainCat * 2 +
                                stdCostTable);
                }
            }

            /* Store base cost in cost map */
            *(unsigned char *)(*costMapBase + x * COST_ROW_STRIDE + y) = costByte;

            /* Early return check: if terrain category is 1-10 inclusive, skip
               further processing (this handles the special case where terrain
               categories map to movement classes) */
            if ((unsigned int)(terrainCat - 1) < 10) {
                /* Note: the decompiled code has a 'return' here which appears to be
                   a decompilation artifact of a 'continue' in the original loop,
                   since this early exit only makes sense for this inner iteration.
                   In practice this is reached for all valid terrain types. */
                /* Actually, the decompiled code literally returns here. This seems
                   to be a bug in the decompilation. Based on context, it should
                   continue. But we preserve the EXACT logic: */
                return;  /* NOTE: matches decompiled output exactly */
            }

            /* If tile has a road (bit 23 of tile word), set road flag */
            if ((tileWord >> 23) & 1) {
                costAddr = *costMapBase + x * COST_ROW_STRIDE;
                *(unsigned char *)(costAddr + y) |= COST_ROAD_FLAG;  /* 0x10 */
            }
        }
    }

    /* === Mark ZoC for all armies === */
    armyCount = *(short *)(*gameStatePtr + 0x1602);
    while (armyCount != 0) {
        armyCount--;

        armyBase = *gameStatePtr + armyCount * 0x42;
        armyX = (int)*(short *)(armyBase + 0x1604);
        armyY = (int)*(short *)(armyBase + 0x1606);

        /* Get terrain at army's position - skip if it's ocean
           (the decompiled code checks -(terrainCat) + 10 != 0 which means terrainCat != 10) */
        terrainCat = -(int)*(char *)(*gameStatePtr +
                      (*(unsigned int *)(*mapDataPtr +
                          armyY * MAP_ROW_STRIDE + armyX * 2) >> 24) + 0x711);

        /* Complex condition: terrain must not be ocean (category 10) */
        if (((terrainCat + 10) & 0xFF) != 0) {
            /* Check tile accessibility */
            accessible = CheckTileAccessibility((short)armyX, (short)armyY);
            if (accessible != 0) {
                /* Mark the army's tile and its neighbors with ZoC */
                armyBase = armyCount * 0x42 + *gameStatePtr;
                armyY = (int)*(short *)(armyBase + 0x1606);
                armyX = *(short *)(armyBase + 0x1604) * COST_ROW_STRIDE;

                /* Mark army tile itself */
                *(unsigned char *)(*costMapBase + armyX + armyY) |= COST_ZOC_VISITED;

                /* Mark tile to the south (+1 row = +0x9C) */
                *(unsigned char *)(*costMapBase + armyX + armyY + COST_ROW_STRIDE) |= COST_ZOC_VISITED;

                /* Mark tile to the east (+1 column = +1 byte) */
                *(unsigned char *)(*costMapBase + armyX + armyY + 1) |= COST_ZOC_VISITED;

                /* Mark tile to the south-east (+0x9D) */
                *(unsigned char *)(*costMapBase + armyX + armyY + COST_ROW_STRIDE + 1) |= COST_ZOC_VISITED;
            }
        }
    }

    /* --- Unlock handles --- */
    if (*distHandle != 0) {
        DisposeHandle_Thunk(*distHandle);
    }
    if (*costHandle != 0) {
        DisposeHandle_Thunk(*costHandle);
    }
}


/* ======================================================================
 * FillPathRequest - Populate a PathRequest from the selected army data
 * FUN_100445a8 at 100445a8 (Size: 84 bytes)
 *
 * Fills in the request structure from the currently selected army's
 * position and target, plus current movement mode and flags.
 * ====================================================================== */
static void FillPathRequest(PathRequest *req, int waypointBuffer)
{
    short *p = (short *)req;
    int   *armyInfo = piRam101176e0;

    p[0] = *(short *)*armyInfo;             /* srcX = army X */
    p[1] = *(short *)(*armyInfo + 2);       /* srcY = army Y */
    p[2] = *(short *)(*armyInfo + 0x12);    /* dstX = target X */
    p[3] = *(short *)(*armyInfo + 0x14);    /* dstY = target Y */
    *(int *)(p + 6) = waypointBuffer;       /* waypoint buffer pointer */
    p[5] = *gCurrentMoveMode;                  /* movement mode */
    p[4] = *gCurrentPathFlags;                  /* flags */
}


/* ======================================================================
 * CalcMoveCost - Calculate movement cost for a single tile step
 * FUN_100445fc at 100445fc (Size: 300 bytes)
 *
 * Given a tile position and movement mode, returns the movement point
 * cost to enter that tile. Handles:
 *   - Naval mode: caps costs at 2
 *   - Flying mode: handles terrain boundary penalties
 *   - Road and bridge discounts
 *   - Returns 0x80 if an army is present (blocks: must fight)
 *
 * param_1: PathRequest base address
 * param_2: tile X
 * param_3: tile Y
 * param_4: ZoC state flag (bit 3 of flags)
 * param_5: pointer to blocked flag (set to 1 if path blocked)
 *
 * Returns: movement cost in points
 * ====================================================================== */
static unsigned char CalcMoveCost(int reqAddr, short tileX, short tileY,
                                  short zocState, short *blocked)
{
    unsigned char costByte;
    unsigned char baseCost;
    short moveMode;
    unsigned short flags;

    costByte = *(unsigned char *)(*gCostMapPtr +
                tileX * COST_ROW_STRIDE + (int)tileY);
    baseCost = costByte & COST_BASE_MASK;

    /* If blocked flag is already set, return 0x80 (army present) */
    if (*blocked != 0) {
        return 0x80;
    }

    moveMode = *(short *)(reqAddr + 10);

    /* === Naval mode === */
    if (moveMode == MOVE_MODE_NAVAL) {
        if ((costByte & COST_ZOC_FLAG) != 0 &&
            (costByte & COST_ROAD_FLAG) == 0) {
            return 2;
        }
        if ((costByte & COST_BASE_MASK) == 0) {
            baseCost = 2;
        }
        if (baseCost < 3) {
            return baseCost;
        }
        return 2;
    }

    /* === Normal ground mode === */
    if (moveMode != MOVE_MODE_FLYING) {
        return baseCost;
    }

    /* === Flying mode === */
    /* Check terrain boundary: if not on a road, crossing ZoC boundary blocks */
    if ((costByte & COST_ROAD_FLAG) == 0) {
        if (zocState == 0) {
            if ((costByte & COST_ZOC_FLAG) == 0) goto apply_discounts;
        } else {
            if ((costByte & COST_ZOC_FLAG) != 0) goto apply_discounts;
        }
        /* Terrain boundary crossed: set blocked flag */
        *blocked = 1;
    }

apply_discounts:
    /* Apply road and bridge discounts */
    flags = *(unsigned short *)(reqAddr + 8);
    if (flags != 0 && baseCost > 2) {
        if (((flags & PATH_FLAG_ROAD_BONUS) != 0 &&
             (costByte & COST_ROAD_ADJ_FLAG) != 0) ||
            ((flags & PATH_FLAG_BRIDGE_BONUS) != 0 &&
             (costByte & COST_BRIDGE_FLAG) != 0)) {
            baseCost = 2;
        }
    }

    return baseCost;
}


/* ======================================================================
 * CalcPathCost - Walk a path and compute cumulative movement costs
 * FUN_10044728 at 10044728 (Size: 444 bytes)
 *
 * Walks through the waypoint buffer step by step, accumulating movement
 * costs. Stops when:
 *   - A waypoint is 0xFF (end of path)
 *   - FUN_10017170 returns 0 (direction leads out of bounds)
 *   - 100 steps exceeded
 *
 * If costBuffer is provided, fills it with cumulative costs (capped at 255).
 *
 * param_1: PathRequest structure
 * param_2: available movement points
 * param_3: optional cost buffer (100 bytes) for per-step cumulative costs
 *
 * Returns: number of steps reachable within the given movement points
 * ====================================================================== */
static short CalcPathCost(PathRequest *req, short movePoints, int costBuffer)
{
    short *p = (short *)req;
    short  curX, curY;
    unsigned short flags;
    short  blocked;
    short  reachableSteps;
    short  totalCost;
    unsigned char stepCost;
    int    step;
    int    result;

    curX = p[0];
    curY = p[1];
    flags = p[4];
    blocked = 0;
    reachableSteps = 0;
    totalCost = 0;

    /* Clear cost buffer if provided */
    if (costBuffer != 0) {
        int i = PATH_CALC_MAX - 1;  /* 99 */
        do {
            *(unsigned char *)(costBuffer + i) = 0xFF;
        } while (i-- != 0);
    }

    /* --- Lock handles --- */
    {
        void *hData = (void *)*gDistGridHandle;
        if (hData != (void *)0) {
            DetachResource(hData);
        }
        *gDistGridDeref = *(unsigned int *)hData;
        *gDistGridHandlePtr = (unsigned int)gDistGridDeref;
    }
    {
        void *hData = (void *)*gCostMapHandle;
        if (hData != (void *)0) {
            DetachResource(hData);
        }
        *gCostMapPtr = *(int *)hData;
    }

    /* === Walk the path === */
    step = 0;
    do {
        /* Check for end-of-path marker */
        if (*(char *)(*(int *)(p + 6) + step) == -1) break;

        /* Apply direction to advance position */
        result = FUN_10017170(&curX, &curY,
                     *(char *)(*(int *)(p + 6) + step));
        if (result == 0) break;

        /* Calculate cost for this step */
        stepCost = CalcMoveCost((int)p, curX, curY, flags & COST_ZOC_FLAG, &blocked);
        totalCost += stepCost;

        /* Store cumulative cost in buffer */
        if (costBuffer != 0 && step < PATH_CALC_MAX) {
            if (totalCost < 0xFF) {
                *(unsigned char *)(costBuffer + step) = (unsigned char)totalCost;
            } else {
                *(unsigned char *)(costBuffer + step) = 0xFF;
            }
        }

        /* Count steps reachable within movement budget */
        if (totalCost <= movePoints) {
            reachableSteps++;
        }

        step++;
    } while ((short)step < PATH_CALC_MAX);

    /* --- Unlock handles --- */
    if (*gDistGridHandle != 0) {
        DisposeHandle_Thunk(*gDistGridHandle);
    }
    if (*gCostMapHandle != 0) {
        DisposeHandle_Thunk(*gCostMapHandle);
    }

    return reachableSteps;
}


/* ======================================================================
 * FloodFillLimitedRange - Run flood fill within a limited range
 * SetupInfluenceMap at 100448e4 (Size: 108 bytes)
 *
 * Sets up a limited-range pathfinding request (source == destination) and
 * runs PathFind_Execute. Used for computing reachable tiles from a position,
 * e.g., for AI movement evaluation or highlighting valid move targets.
 *
 * param_1: max range
 * param_2: center X
 * param_3: center Y
 * param_4: movement mode
 * param_5: flags (will have LIMITED_RANGE bit forced on)
 * ====================================================================== */
static void FloodFillLimitedRange(short maxRange, short centerX, short centerY,
                                  short moveMode, unsigned short flags)
{
    PathRequest localReq;
    unsigned char waypointBuf[PATH_MAX_WAYPOINTS];

    /* Store max range for the flood fill to reference */
    *gMaxSearchRange = maxRange;

    localReq.srcX     = centerX;
    localReq.srcY     = centerY;
    localReq.dstX     = centerX;      /* source == destination for flood fill */
    localReq.dstY     = centerY;
    localReq.flags    = flags | PATH_FLAG_LIMITED_RANGE;  /* force limited range */
    localReq.moveMode = moveMode;
    localReq.waypoints = (char *)waypointBuf;

    PathFind_Execute(&localReq);
}


/* ======================================================================
 * GetDistanceGridPtr - Lock and return the distance grid pointer
 * AllocInfluenceMap at 10044950 (Size: 108 bytes)
 *
 * Ensures pathfinding buffers are allocated, locks the distance grid
 * handle, and returns the dereferenced pointer.
 *
 * Returns: pointer to distance grid storage struct
 * ====================================================================== */
static unsigned int *GetDistanceGridPtr(void)
{
    unsigned int *distGridStorage = gDistGridDeref;

    if (*gPathfindingInitialized == 0) {
        AllocatePathfindingBuffers();
    }

    {
        void *hData = (void *)*gDistGridHandle;
        if (hData != (void *)0) {
            DetachResource(hData);
        }
        *distGridStorage = *(unsigned int *)hData;
        *gDistGridHandlePtr = (unsigned int)distGridStorage;
    }

    return distGridStorage;
}


/* ======================================================================
 * FreePathfindingBuffers - Deallocate pathfinding resources
 * FreeInfluenceMap at 100449bc (Size: 84 bytes)
 *
 * Unlocks and disposes the distance grid handle, resets initialized flag.
 * ====================================================================== */
static void FreePathfindingBuffers(void)
{
    if (*gDistGridHandle != 0) {
        DisposeHandle_Thunk(*gDistGridHandle);
    }
    FUN_10001f50(*gDistGridHandle);

    /* Reset initialized flag */
    *gPathfindingInitialized = 0;
}


/*
 * ======================================================================
 * GetDirection - Compute compass direction from (x1,y1) to (x2,y2)
 * FUN_100184dc at 100184dc (Size: 152 bytes)
 *
 * Returns a direction index 0-7 (N, NE, E, SE, S, SW, W, NW) or
 * 0xFF if the two positions are identical.
 *
 * Direction mapping:
 *   0 = North      (same X, dst Y < src Y)
 *   1 = NorthEast  (dst X > src X, dst Y < src Y)
 *   2 = East       (dst X > src X, same Y)
 *   3 = SouthEast  (dst X > src X, dst Y > src Y)
 *   4 = South      (same X, dst Y > src Y)
 *   5 = SouthWest  (dst X < src X, dst Y > src Y)
 *   6 = West       (dst X < src X, same Y)
 *   7 = NorthWest  (dst X < src X, dst Y < src Y)
 *
 * NOTE: This function is defined elsewhere; included here as reference.
 * ====================================================================== */
/* extern int GetDirection(short x1, short y1, short x2, short y2); */


/*
 * ======================================================================
 * ApplyDirectionOffset - Apply a direction offset to tile coordinates
 * FUN_10017170 at 10017170 (Size: 100 bytes)
 *
 * Uses two lookup tables (FUN_10115d3c for DX, iRam10115d44 for DY)
 * indexed by direction (0-7) to compute new coordinates.
 *
 * Returns 1 if the resulting position is within map bounds, 0 otherwise.
 * Bounds: 0 <= x < 112 (0x70), 0 <= y < 156 (0x9C)
 *
 * NOTE: This function is defined elsewhere; included here as reference.
 * ====================================================================== */
/* extern int ApplyDirectionOffset(short *px, short *py, short direction); */


/*
 * ======================================================================
 * CalcDistance - Compute approximate distance between two points
 * CalcDistance at 1000a884 (Size: 212 bytes)
 *
 * Computes abs(dx) and abs(dy), then uses a distance formula:
 *   if dx^2 + dy^2 <= threshold: return 10000 (very close / same area)
 *   otherwise: return sqrt(dx^2 + dy^2) (approximate Euclidean)
 *
 * NOTE: This function is defined elsewhere; included here as reference.
 * ====================================================================== */
/* extern short CalcDistance(short x1, short y1, short x2, short y2); */


/* ======================================================================
 * END OF MOVEMENT/PATHFINDING MODULE
 *
 * Function Cross-Reference (Ghidra address -> Reconstructed name):
 *
 *   FUN_100423a0 -> ClearPathCacheEntry
 *   PostLoadCityInit -> ClearAllPathCache
 *   FUN_100424e4 -> AllocatePathfindingBuffers
 *   FUN_100425c0 -> FindCachedPathStep
 *   FUN_100426b4 -> LookupCachedPath
 *   FUN_100427cc -> TryCachedPaths
 *   FUN_100428dc -> TryDirectPath
 *   FUN_10042a24 -> CheckTileAccessibility
 *   FUN_10042bb4 -> MarkArmyZoC
 *   FUN_10042d2c -> ApplyZoneOfControl
 *   FUN_10042ee4 -> InitDistanceGrid
 *   FUN_10043248 -> DijkstraFloodFill       (core algorithm)
 *   FUN_100439a4 -> ReconstructPath
 *   FUN_10043c84 -> StorePathInCache
 *   FUN_10043e60 -> PathFind_Execute         (main entry point)
 *   FUN_10044110 -> BuildMovementCostMap
 *   FUN_100445a8 -> FillPathRequest
 *   FUN_100445fc -> CalcMoveCost
 *   FUN_10044728 -> CalcPathCost
 *   SetupInfluenceMap -> FloodFillLimitedRange
 *   AllocInfluenceMap -> GetDistanceGridPtr
 *   FreeInfluenceMap -> FreePathfindingBuffers
 *
 *   FUN_100184dc -> GetDirection             (external)
 *   FUN_10017170 -> ApplyDirectionOffset     (external)
 *   CalcDistance -> CalcDistance             (external)
 *   AbsShort -> abs()                    (external)
 *
 * ====================================================================== */
