/*
 * mapgen.c - Warlords II Random Map Generator
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner), 1993
 *
 * This implements the complete 11-phase random map generation pipeline.
 * The generator creates a 112x156 tile map through terrain placement,
 * continent shaping, city placement, and road generation.
 *
 * Architecture:
 *   - 4 user-configurable parameters (water style, city count, terrain, players)
 *   - 11 sequential generation phases with progress bar updates
 *   - ~55 functions totaling ~30,000 bytes of code
 *
 * Ghidra addresses are preserved in comments for cross-referencing.
 */

#include "warlords2.h"
#include <string.h>

/* ============================================================
 * MAP GENERATION CONSTANTS
 * ============================================================ */

#define MAP_WIDTH           112     /* 0x70 */
#define MAP_HEIGHT          156     /* 0x9C */
#define MAP_TILE_OFFSET     0x34A   /* offset within map data buffer to terrain bytes */
#define MAP_TILE_STRIDE     0x70    /* bytes per row (= MAP_WIDTH) */

#define TILE_BUFFER_SIZE    0x8880  /* 34,944 = MAP_WIDTH * MAP_HEIGHT * 2 (16-bit graphics) */
#define OVERLAY_BUFFER_SIZE 0x4440  /* 17,472 = MAP_WIDTH * MAP_HEIGHT * 1 (overlay data) */
#define SCENARIO_DATA_SIZE  0x5DD6  /* 24,022 bytes scenario buffer */
#define MAP_DATA_SIZE       0x478A  /* 18,314 bytes map tile buffer */
#define SCENARIO_BUF_SIZE   0x2FCC  /* 12,236 bytes for SCN resource */

#define MAX_GEN_CITIES      80      /* maximum cities the generator will place */
#define MAX_RUINS           40      /* 0x28 ruins placed in phase 9 */
#define MAX_ROAD_NODES      50      /* nodes in road pathfinding buffer */
#define ROAD_BUFFER_SIZE    700     /* pathfinding buffer allocation */

#define NUM_PLAYERS_GEN     4       /* number of player start zones */
#define NUM_DIRECTIONS      8       /* direction table entries */

/* Terrain type codes (stored as single bytes in the map data) */
#define TERRAIN_DEEP_OCEAN  0       /* deep ocean / edge */
#define TERRAIN_COASTAL_MK  1       /* coastal marker (intermediate) */
#define TERRAIN_OCEAN       2       /* ocean / water */
#define TERRAIN_SHORE       3       /* shore / beach (coastal transition) */
#define TERRAIN_GRASSLAND   4       /* grassland / plains */
#define TERRAIN_FOREST      5       /* forest */
#define TERRAIN_MOUNTAIN    6       /* mountain */
#define TERRAIN_OPEN_LAND   7       /* open land (pre-terrain assignment) */
#define TERRAIN_SWAMP       8       /* swamp */
#define TERRAIN_HERO_MARK   9       /* special terrain (hero marker) */
#define TERRAIN_CITY        10      /* city tile */
#define TERRAIN_RUINS       11      /* ruins tile */

/* Template data offsets within *gMapGenConfig (piRam101175f4) */
#define CFG_TOTAL_CITIES    0x2A    /* total number of cities to generate */
#define CFG_DIFFICULTY_BASE 0x2C    /* player difficulty settings (4 entries) */
#define CFG_PLAYER_CITIES   0x34    /* number of player-controlled cities */
#define CFG_NEUTRAL_CITIES  0x36    /* number of neutral cities */
#define CFG_MTN_CHAINS      0x38    /* number of mountain chains */
#define CFG_FOREST_CHAINS   0x3A    /* number of forest chains */
#define CFG_WATER_PCT       0x3C    /* water/land percentage parameter */
#define CFG_EXTRA_FOREST    0x3E    /* additional forest modifiers */
#define CFG_EXTRA_MOUNTAIN  0x40    /* additional mountain modifiers */
#define CFG_CITY_LUT        0x44    /* city count lookup table (7 entries) */
#define CFG_WATER_LUT       0x52    /* water style lookup table (7 entries) */
#define CFG_PLAYER_LUT      0x60    /* player count lookup table (7 entries) */
#define CFG_TERRAIN_LUT     0x6E    /* terrain style lookup table (7 entries) */
#define CFG_START_POS       0x8C    /* player start positions (4 x 8-byte) */
#define CFG_WAYPOINT_COUNT  0xFC    /* waypoint count per player */
#define CFG_WAYPOINTS       0x104   /* waypoint array per player */
#define CFG_DIR_TABLE       0xBC    /* direction offset table (dx at +0, dy at +2) */
#define CFG_SEED_POS_A      0x244   /* player seed points A (4 entries, packed x/y) */
#define CFG_SEED_POS_B      0x254   /* player seed points B (4 entries, packed x/y) */
#define CFG_CITY_COUNTER    0x348   /* current city counter in map data */
#define CFG_INITIAL_CITIES  0xA84   /* initial city count from template */
#define CFG_LAND_COUNT      0x1F52  /* current land tile count */
#define CFG_LAND_TARGET     0x1F54  /* target land tile count */
#define CFG_RUINS_NAMES_OFF 0x1066  /* ruins name buffer offset */

/* City record within the mapgen data buffer (piRam101175f0) */
/* Each city: 14 bytes (0x0E) at cityIndex * 0x0E from buffer start */
#define CITY_REC_SIZE       0x0E
#define CITY_REC_X          0x00
#define CITY_REC_Y          0x02
#define CITY_REC_TYPE       0x04    /* 1=neutral, 2=player */
#define CITY_REC_ALLIES     0x06    /* number of allied cities */
#define CITY_REC_ALLY_BASE  0x08    /* allied city indices (short[]) */

/* Forward declarations - external functions */
extern short DiceRoll(short numDice, short dieSize, short bonus); /* FUN_1005f230 */
extern void  UpdateProgressBar(int dialogHandle, short percent);  /* FUN_100514d8 */
extern void  NotifyTileChanged(short x, short y);                 /* FUN_10051d60 (NOP) */
extern void  NotifyAllTilesChanged(void);                         /* FUN_10051d64 */
extern void  InitArmyProduction(void);                            /* FUN_10049e68 */
extern void  InitPlayerData(void);                                /* FUN_10025f98 */
extern void *AllocateMemory(long size);                           /* FUN_100f1640 */
extern void *AllocateHandle(long size);                           /* FUN_100f15e0 */
extern void  ReleaseHandle(void *handle);                         /* FUN_100ef510 */
extern short AbsShort(long value);                                /* FUN_10003768 */
extern void  StoreCoords(void *dest, short x, short y);          /* FUN_1002269c */
extern short ReadShortFromStream(void);                           /* FUN_100525a0 */
extern void  CloseStream(void *stream, short flag);               /* FUN_100523a8 */
extern void  VTableDispatch(int targetAddr, ...);                 /* FUN_10117884 */
extern void *OpenDATResource(long resType, long resID, short flags); /* FUN_10051f98 */
extern short CheckLandConnectivity(void);                         /* FUN_1002b83c */

/* Map generation global pointers (from wl2_globals.h) */
/* piRam101175f4 -> gMapGenConfig: scenario config/template data */
/* piRam101175f0 -> gMapGenData: map tile data buffer */
/* piRam10117358 -> gTileGraphicsBuffer */
/* piRam10117354 -> gOverlayBuffer */
/* piRam1011735c -> gGameState */
/* puRam10115f7c -> gProgressDialog */

extern int  *piRam101175f4;  /* gMapGenConfig - scenario config pointer */
extern int  *piRam101175f0;  /* gMapGenData - map data pointer */
/* piRam10117358, piRam10117354, piRam1011735c, piRam1011734c
   now aliased via #define in wl2_globals.h */
extern void *puRam10115f7c;  /* gProgressDialog */

/* ============================================================
 * UTILITY FUNCTIONS
 * ============================================================ */

/*
 * GetTerrainAt - Read terrain type byte at map coordinates (x, y)
 * The terrain byte is at: *gMapGenData + y * MAP_TILE_STRIDE + x + MAP_TILE_OFFSET
 */
static char GetTerrainAt(int x, int y)
{
    return *(char *)(*piRam101175f0 + y * MAP_TILE_STRIDE + x + MAP_TILE_OFFSET);
}

/*
 * SetTerrainAt - Write terrain type byte at map coordinates (x, y)
 */
static void SetTerrainAt(int x, int y, char terrain)
{
    *(char *)(*piRam101175f0 + y * MAP_TILE_STRIDE + x + MAP_TILE_OFFSET) = terrain;
}

/*
 * GetDirectionDX - Get X offset for direction index (0-7)
 * Direction table stored at *gMapGenConfig + dirIndex * 4 + CFG_DIR_TABLE
 */
static short GetDirectionDX(int dirIndex)
{
    return *(short *)(*piRam101175f4 + dirIndex * 4 + CFG_DIR_TABLE);
}

/*
 * GetDirectionDY - Get Y offset for direction index (0-7)
 */
static short GetDirectionDY(int dirIndex)
{
    return *(short *)(*piRam101175f4 + dirIndex * 4 + CFG_DIR_TABLE + 2);
}

/*
 * GetConfigShort - Read a short value from the scenario config template
 */
static short GetConfigShort(int offset)
{
    return *(short *)(*piRam101175f4 + offset);
}

/*
 * SetConfigShort - Write a short value to the scenario config template
 */
static void SetConfigShort(int offset, short value)
{
    *(short *)(*piRam101175f4 + offset) = value;
}

/* ----------------------------------------------------------------
 * FUN_10051dc8 - ClampToMapBounds
 * Address: 0x10051dc8 | Size: 84 bytes
 *
 * Clamps x to [0, 111] and y to [0, 155].
 * ---------------------------------------------------------------- */
void ClampToMapBounds(short *x, short *y)   /* FUN_10051dc8 */
{
    if (*x < 1) {
        *x = 0;
    }
    if (*y < 1) {
        *y = 0;
    }
    if (*x > 0x6F) {
        *x = 0x6F;  /* MAP_WIDTH - 1 = 111 */
    }
    if (*y > 0x9B) {
        *y = 0x9B;  /* MAP_HEIGHT - 1 = 155 */
    }
}

/* ----------------------------------------------------------------
 * FUN_10051e1c - RandomScatter
 * Address: 0x10051e1c | Size: 380 bytes
 *
 * Randomly offsets x and y by dice(1, range, 0) * dice(1, 3, -2).
 * If snapToEdge is set and dice(1,100,0) < 30, snaps to nearest edge.
 * ---------------------------------------------------------------- */
void RandomScatter(short *x, short *y, short range, short snapToEdge) /* FUN_10051e1c */
{
    short offsetMag, offsetDir;
    int edgeRoll;
    short curX, curY, distRight, distBottom;

    /* Random X perturbation: magnitude * direction (-1, 0, or 1) */
    offsetMag = DiceRoll(1, range, 0);
    offsetDir = DiceRoll(1, 3, -2);      /* -1, 0, or 1 */
    *x = *x + offsetDir * offsetMag;

    /* Random Y perturbation */
    offsetMag = DiceRoll(1, range, 0);
    offsetDir = DiceRoll(1, 3, -2);
    *y = *y + offsetDir * offsetMag;

    /* 30% chance to snap to nearest map edge if snapToEdge is set */
    edgeRoll = DiceRoll(1, 100, 0);
    if (edgeRoll < 0x1E && snapToEdge != 0) {
        curX = *x;
        curY = *y;
        distRight  = 0x6F - curX;
        distBottom = 0x9B - curY;

        /* Snap to whichever edge is closest */
        if (curX <= curY && curX <= distRight && curX <= distBottom) {
            *x = 0;           /* snap to left edge */
        }
        if (curY <= curX && curY <= distRight && curY <= distBottom) {
            *y = 0;           /* snap to top edge */
        }
        if (distRight <= curY && distRight <= curX && distRight <= distBottom) {
            *x = 0x6F;        /* snap to right edge */
        }
        if (distBottom <= curY && distBottom <= curX && distBottom <= distRight) {
            *y = 0x9B;        /* snap to bottom edge */
        }
    }

    ClampToMapBounds(x, y);
}

/* ----------------------------------------------------------------
 * FUN_1009eb70 - ChebyshevDistance
 * Address: 0x1009eb70 | Size: 124 bytes
 *
 * Returns max(|x1-x2|, |y1-y2|) -- chessboard distance.
 * Coordinates are packed as (x << 16 | y) in 32-bit params.
 * ---------------------------------------------------------------- */
short ChebyshevDistance(long packed1, long packed2) /* FUN_1009eb70 */
{
    short x1, y1, x2, y2;
    short dx, dy;

    x1 = (short)(packed1 >> 16);
    y1 = (short)(packed1 & 0xFFFF);
    x2 = (short)(packed2 >> 16);
    y2 = (short)(packed2 & 0xFFFF);

    dx = AbsShort((long)x1 - (long)x2);
    dy = AbsShort((long)y1 - (long)y2);

    return (dy < dx) ? dx : dy;
}

/* ----------------------------------------------------------------
 * FUN_1009ebec - CalculateDirectionVector
 * Address: 0x1009ebec | Size: 780 bytes
 *
 * Given two packed coordinate pairs, returns a unit direction vector
 * (dx, dy) where each component is -1, 0, or 1.
 * Uses atan-like ratio comparison with precomputed thresholds.
 * ---------------------------------------------------------------- */
void CalculateDirectionVector(long packedFrom, long packedTo, short *outDx, short *outDy) /* FUN_1009ebec */
{
    short x1, y1, x2, y2;
    double ratio;
    extern double *pdRam10116790; /* precomputed angle thresholds */

    x1 = (short)(packedFrom >> 16);
    y1 = (short)(packedFrom & 0xFFFF);
    x2 = (short)(packedTo >> 16);
    y2 = (short)(packedTo & 0xFFFF);

    /* Degenerate cases: same row or same column */
    if (x2 == x1) {
        if (y1 == y2) { StoreCoords((void*)outDx, 0, 0); }
        else if (y2 < y1) { StoreCoords((void*)outDx, 0, -1); }
        else { StoreCoords((void*)outDx, 0, 1); }
        return;
    }
    if (y2 == y1) {
        if (x2 < x1) { StoreCoords((void*)outDx, -1, 0); }
        else { StoreCoords((void*)outDx, 1, 0); }
        return;
    }

    /* General case: compute direction from ratio dy/dx */
    ratio = (double)(y2 - y1) / (double)(x2 - x1);

    if (x2 < x1) {
        /* Moving left (west) */
        if (ratio < pdRam10116790[1]) {
            if (ratio < pdRam10116790[2]) {
                if (ratio < pdRam10116790[3]) {
                    if (ratio < pdRam10116790[4]) {
                        StoreCoords((void*)outDx, 0, 1);    /* South */
                    } else {
                        StoreCoords((void*)outDx, -1, 1);   /* SW */
                    }
                } else {
                    StoreCoords((void*)outDx, -1, 0);       /* West */
                }
            } else {
                StoreCoords((void*)outDx, -1, -1);          /* NW */
            }
        } else {
            StoreCoords((void*)outDx, 0, -1);               /* North */
        }
    } else {
        /* Moving right (east) */
        if (ratio < pdRam10116790[1]) {
            if (ratio < pdRam10116790[2]) {
                if (ratio < pdRam10116790[3]) {
                    if (ratio < pdRam10116790[4]) {
                        StoreCoords((void*)outDx, 0, -1);   /* North */
                    } else {
                        StoreCoords((void*)outDx, 1, -1);   /* NE */
                    }
                } else {
                    StoreCoords((void*)outDx, 1, 0);        /* East */
                }
            } else {
                StoreCoords((void*)outDx, 1, 1);            /* SE */
            }
        } else {
            StoreCoords((void*)outDx, 0, 1);                /* South */
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_1009ff14 - HasNeighborOnLand
 * Address: 0x1009ff14 | Size: 144 bytes
 *
 * Returns 1 if any of 8 neighbors of (x,y) is open land (terrain 7).
 * ---------------------------------------------------------------- */
short HasNeighborOnLand(short x, short y) /* FUN_1009ff14 */
{
    int dir;
    short nx, ny;

    for (dir = 0; dir < NUM_DIRECTIONS; dir++) {
        nx = x + GetDirectionDX(dir);
        ny = y + GetDirectionDY(dir);
        if (nx >= 0 && ny >= 0 && nx < MAP_WIDTH && ny < MAP_HEIGHT) {
            if (GetTerrainAt(nx, ny) == TERRAIN_OPEN_LAND) {
                return 1;
            }
        }
    }
    return 0;
}

/* ----------------------------------------------------------------
 * FUN_1009ffa4 - HasNeighborWithTerrain
 * Address: 0x1009ffa4 | Size: 148 bytes
 *
 * Returns 1 if any of 8 neighbors of (x,y) has the specified terrain code.
 * ---------------------------------------------------------------- */
short HasNeighborWithTerrain(short x, short y, short terrainCode) /* FUN_1009ffa4 */
{
    int dir;
    short nx, ny;

    for (dir = 0; dir < NUM_DIRECTIONS; dir++) {
        nx = x + GetDirectionDX(dir);
        ny = y + GetDirectionDY(dir);
        if (nx >= 0 && ny >= 0 && nx < MAP_WIDTH && ny < MAP_HEIGHT) {
            if ((int)GetTerrainAt(nx, ny) == (int)terrainCode) {
                return 1;
            }
        }
    }
    return 0;
}

/* ============================================================
 * PHASE 1: INITIALIZATION
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a6298 - LoadScenarioTemplate
 * Address: 0x100a6298 | Size: 204 bytes
 *
 * Loads the 'SCN ' (scenario) resource template (30,000 bytes).
 * Allocates a 0x2FCC-byte buffer for scenario data if not already
 * allocated. Copies template data into the active scenario structure.
 * ---------------------------------------------------------------- */
static int LoadScenarioTemplate(void) /* FUN_100a6298 */
{
    int *scenRes;
    int *gameState = piRam1011735c;
    int *resourcePtr;

    /* Get the file handler from the resource chain */
    resourcePtr = *(int **)(*(int *)(*piRam1011734c + 0x88) + 0x14C);

    /* Call virtual CalcMinSize (vtable+0x2B8) on resource ptr */
    VTableDispatch((int)resourcePtr + (int)*(short *)(*resourcePtr + 0x2B8));

    /* Open the SCN resource (type 'SCN ', size 30000) */
    scenRes = (int *)OpenDATResource(0x53434E20, 30000, 1);
    if ((int)scenRes == 0) {
        return 0;
    }

    /* Allocate scenario data buffer if needed */
    if (*gameState == 0) {
        *gameState = (int)AllocateMemory(SCENARIO_BUF_SIZE);
    }

    /* Copy scenario template into active game state */
    /* FUN_1005668c copies resource data to game state */
    extern void CopyScenarioData(void *src, int dest);
    CopyScenarioData(scenRes, *gameState);

    /* Close the resource stream */
    CloseStream(scenRes, 1);

    return 1;
}

/* ----------------------------------------------------------------
 * FUN_100515f4 - InitializeMapToOcean
 * Address: 0x100515f4 | Size: 204 bytes
 *
 * Fills the entire 112x156 map with ocean (terrain code 2).
 * Allocates tile graphics buffer (0x8880) and overlay buffer (0x4440)
 * if they haven't been allocated yet.
 * ---------------------------------------------------------------- */
static void InitializeMapToOcean(void) /* FUN_100515f4 */
{
    int x, y;

    /* Allocate tile graphics buffer if needed */
    if (*piRam10117358 == 0) {
        *piRam10117358 = (int)AllocateMemory(TILE_BUFFER_SIZE);
    }

    /* Allocate secondary overlay buffer if needed */
    if (*piRam10117354 == 0) {
        *piRam10117354 = (int)AllocateMemory(OVERLAY_BUFFER_SIZE);
    }

    /* Fill entire map with ocean, clear overlay top 5 bits */
    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            SetTerrainAt(x, y, TERRAIN_OCEAN);

            /* Clear top 5 bits of secondary tile buffer */
            {
                int overlayAddr = y * MAP_TILE_STRIDE + *piRam10117354 + x;
                *(unsigned int *)overlayAddr &= 0xE0FFFFFF;
            }
        }
    }
}

/* ============================================================
 * PHASE 2: PLAYER START ZONES
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_1009e81c - PlacePlayerSeedPoint
 * Address: 0x1009e81c | Size: 516 bytes
 *
 * For each player, determines two seed points based on difficulty:
 *   - difficulty < 3: uses template start positions directly
 *   - difficulty >= 3: offsets by -10 * direction vector, then scatters
 * ---------------------------------------------------------------- */
static void PlacePlayerSeedPoint(short playerIndex) /* FUN_1009e81c */
{
    int config = *piRam101175f4;
    int pIdx = (int)playerIndex;
    int nextIdx = (pIdx + 1) % 4;
    short seedX, seedY;

    if (*(short *)(config + pIdx * 2 + CFG_DIFFICULTY_BASE) < 3) {
        /* Low difficulty: copy start positions directly from template */
        *(long *)(config + pIdx * 4 + CFG_SEED_POS_A) =
            *(long *)(config + pIdx * 8 + CFG_START_POS);
        *(long *)(config + pIdx * 4 + CFG_SEED_POS_B) =
            *(long *)(config + pIdx * 8 + CFG_START_POS + 4);
    } else {
        /* High difficulty: offset seed A from start pos by -10 * direction */
        long startPosA = *(long *)(config + pIdx * 8 + CFG_START_POS);
        seedX = (short)(startPosA >> 16);
        seedY = (short)(startPosA & 0xFFFF);

        /* Apply -10 * direction vector offset */
        int dirOffset = config + pIdx * 4;
        seedX += *(short *)(dirOffset + 0xAC) * -10;
        seedY += *(short *)(dirOffset + 0xAE) * -10;

        /* Random scatter with range 0x10, snap to edge enabled */
        RandomScatter(&seedX, &seedY, 0x10, 1);

        /* Place open land at seed position */
        SetTerrainAt(seedX, seedY, TERRAIN_OPEN_LAND);
        NotifyTileChanged(seedX, seedY);

        /* Store seed A */
        *(long *)(config + pIdx * 4 + CFG_SEED_POS_A) =
            ((long)seedX << 16) | (unsigned short)seedY;

        /* Seed B: from second start position, offset by next player's direction */
        long startPosB = *(long *)(config + pIdx * 8 + CFG_START_POS + 4);
        seedX = (short)(startPosB >> 16);
        seedY = (short)(startPosB & 0xFFFF);

        dirOffset = config + nextIdx * 4;
        seedX += *(short *)(dirOffset + 0xAC) * -10;
        seedY += *(short *)(dirOffset + 0xAE) * -10;

        RandomScatter(&seedX, &seedY, 0x10, 1);
        SetTerrainAt(seedX, seedY, TERRAIN_OPEN_LAND);
        NotifyTileChanged(seedX, seedY);

        *(long *)(config + pIdx * 4 + CFG_SEED_POS_B) =
            ((long)seedX << 16) | (unsigned short)seedY;
    }
}

/* ----------------------------------------------------------------
 * FUN_1009ea20 - SortStartPointsByAngle
 * Address: 0x1009ea20 | Size: 336 bytes
 *
 * Sorts the 4 player start zones by angle ratio (x-ratio vs y-ratio
 * from center), ensuring players are spread around the map.
 * Uses floating-point comparison.
 * ---------------------------------------------------------------- */
static void SortStartPointsByAngle(void) /* FUN_1009ea20 */
{
    int config;
    int i;
    int nextIdx;
    float ratio1, ratio2;
    long temp;

    for (i = 0; i < 4; i++) {
        config = *piRam101175f4;
        nextIdx = (i + 1) % 4;

        /* Calculate angle ratios from map center (0x38, 0x4E) */
        {
            short x1 = *(short *)(config + i * 4 + CFG_SEED_POS_B);
            short y1 = *(short *)(config + i * 4 + CFG_SEED_POS_B + 2);
            short x2 = *(short *)(config + nextIdx * 4 + CFG_SEED_POS_A);
            short y2 = *(short *)(config + nextIdx * 4 + CFG_SEED_POS_A + 2);

            ratio1 = (float)(0x38 - x1) / (float)(0x4E - y1);
            ratio2 = (float)(0x38 - x2) / (float)(0x4E - y2);
        }

        /* Swap if out of angular order */
        if (ratio1 < ratio2) {
            temp = *(long *)(config + i * 4 + CFG_SEED_POS_B);
            *(long *)(config + i * 4 + CFG_SEED_POS_B) =
                *(long *)(config + nextIdx * 4 + CFG_SEED_POS_A);
            *(long *)(config + nextIdx * 4 + CFG_SEED_POS_A) = temp;
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_1009eef8 - ExpandPlayerZone
 * Address: 0x1009eef8 | Size: 844 bytes
 *
 * Expands from player seed points outward. If difficulty >= 3:
 * 1. Calculates distance between seed points
 * 2. Divides by (difficulty - 1) for spacing
 * 3. Places waypoints along path, marking as open land
 * ---------------------------------------------------------------- */
static void ExpandPlayerZone(short playerIndex) /* FUN_1009eef8 */
{
    int config = *piRam101175f4;
    int pIdx = (int)playerIndex;
    int pIdx4 = pIdx * 4;
    int pIdx16 = pIdx * 16; /* ((pIdx * 4 + pIdx) & 0xFFFFFFF) << 4 approximation */
    short wayX, wayY;
    short dirX, dirY;
    short spacing;
    int dist;
    int waypointIdx;
    short difficulty;

    /* Store first waypoint from seed A */
    *(long *)(config + pIdx16 + CFG_WAYPOINTS) = *(long *)(config + pIdx4 + CFG_SEED_POS_A);
    *(short *)(config + pIdx * 2 + CFG_WAYPOINT_COUNT) = 1;

    difficulty = *(short *)(config + pIdx * 2 + CFG_DIFFICULTY_BASE);

    if (difficulty < 3) {
        /* Low difficulty: just add seed B as second waypoint */
        *(short *)(config + pIdx * 2 + CFG_WAYPOINT_COUNT) += 1;
        *(long *)(config + pIdx16 + CFG_WAYPOINTS + 4) =
            *(long *)(config + pIdx4 + CFG_SEED_POS_B);
        return;
    }

    /* High difficulty: check if seeds are on map edges */
    {
        short ax = *(short *)(config + pIdx4 + CFG_SEED_POS_A);
        short ay = *(short *)(config + pIdx4 + CFG_SEED_POS_A + 2);
        short bx = *(short *)(config + pIdx4 + CFG_SEED_POS_B);
        short by = *(short *)(config + pIdx4 + CFG_SEED_POS_B + 2);

        /* If both seeds are on edges, just connect directly */
        if ((ax == 0 || ay == 0 || ax == 0x6F || ay == 0x9B) &&
            (bx == 0 || by == 0 || bx == 0x6F || by == 0x9B)) {
            *(short *)(config + pIdx * 2 + CFG_WAYPOINT_COUNT) += 1;
            *(long *)(config + pIdx16 + CFG_WAYPOINTS + 4) =
                *(long *)(config + pIdx4 + CFG_SEED_POS_B);
            return;
        }
    }

    /* Calculate spacing from distance / (difficulty - 1) */
    dist = ChebyshevDistance(
        *(long *)(config + pIdx4 + CFG_SEED_POS_B),
        *(long *)(config + pIdx4 + CFG_SEED_POS_A));
    spacing = (short)(dist / (difficulty - 1));

    /* Place intermediate waypoints */
    waypointIdx = 0;
    for (;;) {
        int wpBase = config + pIdx16 + waypointIdx * 4;

        /* Calculate direction toward seed B */
        CalculateDirectionVector(
            *(long *)(wpBase + CFG_WAYPOINTS),
            *(long *)(config + pIdx4 + CFG_SEED_POS_B),
            &dirX, &dirY);

        /* Place new waypoint at spacing distance along direction */
        wayX = *(short *)(wpBase + CFG_WAYPOINTS) + dirX * spacing;
        wayY = *(short *)(wpBase + CFG_WAYPOINTS + 2) + dirY * spacing;
        RandomScatter(&wayX, &wayY, spacing / 2, 0);

        waypointIdx++;
        SetTerrainAt(wayX, wayY, TERRAIN_OPEN_LAND);
        NotifyTileChanged(wayX, wayY);

        StoreCoords((void *)(config + pIdx16 + waypointIdx * 4 + CFG_WAYPOINTS),
                    wayX, wayY);

        *(short *)(config + pIdx * 2 + CFG_WAYPOINT_COUNT) += 1;

        /* Check if we've reached close enough to seed B */
        {
            short remainDist = ChebyshevDistance(
                *(long *)(config + pIdx4 + CFG_SEED_POS_B),
                *(long *)(config + pIdx16 + waypointIdx * 4 + CFG_WAYPOINTS));

            if (remainDist < spacing ||
                *(short *)(config + pIdx * 2 + CFG_WAYPOINT_COUNT) >= difficulty - 1) {
                break;
            }
        }
    }

    /* Add final waypoint at seed B */
    *(long *)(config + pIdx16 + (waypointIdx + 1) * 4 + CFG_WAYPOINTS) =
        *(long *)(config + pIdx4 + CFG_SEED_POS_B);
    *(short *)(config + pIdx * 2 + CFG_WAYPOINT_COUNT) += 1;
}

/* ----------------------------------------------------------------
 * FUN_1009fad4 - ShouldBeCoastal
 * Address: 0x1009fad4 | Size: 388 bytes
 *
 * Checks if tile at (x,y) should become coastal water (terrain 2).
 * Returns 1 if tile should be converted, 0 otherwise.
 * ---------------------------------------------------------------- */
static int ShouldBeCoastal(short x, short y) /* FUN_1009fad4 */
{
    char t = GetTerrainAt(x, y);

    /* Already shore or coastal marker - skip */
    if (t == TERRAIN_SHORE || t == TERRAIN_COASTAL_MK) return 0;

    /* Edge tiles: convert deep ocean to coastal */
    if (x == 0 || y == 0 || x == 0x6F || y == 0x9B) {
        if (t == TERRAIN_DEEP_OCEAN) return 1;
    }

    /* Check 4 cardinal neighbors for adjacent ocean */
    if (GetTerrainAt(x + 1, y) == TERRAIN_OCEAN) return 1;
    if (GetTerrainAt(x - 1, y) == TERRAIN_OCEAN) return 1;
    if (GetTerrainAt(x, y + 1) == TERRAIN_OCEAN) return 1;
    if (GetTerrainAt(x, y - 1) == TERRAIN_OCEAN) return 1;

    return 0;
}

/* ----------------------------------------------------------------
 * FUN_1009fc58 - ConvertToTerrainCodes
 * Address: 0x1009fc58 | Size: 700 bytes
 *
 * After player zones are marked as terrain 7 (open land):
 * 1. Converts terrain 7 -> 3 (shore), everything else -> 0 (deep ocean)
 * 2. Runs 4 directional passes twice to spread coastal (terrain 2)
 * 3. Final pass: remaining 2 -> ocean, everything else -> open land
 * ---------------------------------------------------------------- */
static void ConvertToTerrainCodes(void) /* FUN_1009fc58 */
{
    int x, y;
    short pass;
    int result;

    /* Pass 1: Convert open land to shore, everything else to deep ocean */
    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            if (GetTerrainAt(x, y) == TERRAIN_OPEN_LAND) {
                SetTerrainAt(x, y, TERRAIN_SHORE);
            } else {
                SetTerrainAt(x, y, TERRAIN_DEEP_OCEAN);
            }
        }
    }

    /* Coastal expansion passes (run twice) */
    for (pass = 0; pass < 2; pass++) {
        /* NW->SE pass */
        for (x = 0; x < MAP_WIDTH; x++) {
            for (y = 0; y < MAP_HEIGHT; y++) {
                result = ShouldBeCoastal(x, y);
                if (result != 0) {
                    SetTerrainAt(x, y, TERRAIN_OCEAN);
                }
            }
        }
        /* N->S pass */
        for (y = 0; y < MAP_HEIGHT; y++) {
            for (x = 0; x < MAP_WIDTH; x++) {
                result = ShouldBeCoastal(x, y);
                if (result != 0) {
                    SetTerrainAt(x, y, TERRAIN_OCEAN);
                }
            }
        }
        /* SE->NW pass (reverse) */
        for (x = MAP_WIDTH - 1; x >= 0; x--) {
            for (y = MAP_HEIGHT - 1; y >= 0; y--) {
                result = ShouldBeCoastal(x, y);
                if (result != 0) {
                    SetTerrainAt(x, y, TERRAIN_OCEAN);
                }
            }
        }
        /* S->N pass (reverse) */
        for (y = MAP_HEIGHT - 1; y >= 0; y--) {
            for (x = MAP_WIDTH - 1; x >= 0; x--) {
                result = ShouldBeCoastal(x, y);
                if (result != 0) {
                    SetTerrainAt(x, y, TERRAIN_OCEAN);
                }
            }
        }
    }

    /* Final conversion: coastal -> ocean, everything else -> open land */
    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            if (GetTerrainAt(x, y) == TERRAIN_OCEAN) {
                SetTerrainAt(x, y, TERRAIN_OCEAN); /* stays as ocean */
            } else {
                SetTerrainAt(x, y, TERRAIN_OPEN_LAND);
            }
        }
    }

    NotifyAllTilesChanged();
}

/* ----------------------------------------------------------------
 * FUN_100a0038 - ExpandCoastalTiles
 * Address: 0x100a0038 | Size: 336 bytes
 *
 * Creates coastal fringe: ocean tiles adjacent to land/forest/mountain
 * become shore tiles.
 * ---------------------------------------------------------------- */
static void ExpandCoastalTiles(void) /* FUN_100a0038 */
{
    int x, y;

    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            if (GetTerrainAt(x, y) == TERRAIN_OCEAN) {
                /* Check if any neighbor is open land */
                if (HasNeighborOnLand(x, y) != 0) {
                    SetTerrainAt(x, y, TERRAIN_SHORE);
                    NotifyTileChanged(x, y);
                }
                /* Check if any neighbor is forest */
                if (HasNeighborWithTerrain(x, y, TERRAIN_FOREST) != 0) {
                    SetTerrainAt(x, y, TERRAIN_SHORE);
                    NotifyTileChanged(x, y);
                }
                /* Check if any neighbor is mountain */
                if (HasNeighborWithTerrain(x, y, TERRAIN_MOUNTAIN) != 0) {
                    SetTerrainAt(x, y, TERRAIN_SHORE);
                    NotifyTileChanged(x, y);
                }
            }
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_100a018c - AddExtraLandPatches
 * Address: 0x100a018c | Size: 92 bytes
 *
 * Adds extra land patches by cutting water channels with wide width,
 * then eroding.
 * ---------------------------------------------------------------- */
extern void CutWaterChannel(short channelWidth, short stopAtOcean, short extraWidth); /* FUN_100a8d88 */
extern void ErodeLandTiles(void); /* FUN_100a9628 */

static void AddExtraLandPatches(short count) /* FUN_100a018c */
{
    short i;

    for (i = 0; i < count; i++) {
        CutWaterChannel(1, 0, 1);  /* wide channel, don't stop at ocean, extra width */
    }
    ErodeLandTiles();
}

/* ----------------------------------------------------------------
 * FUN_1009f864 - ConnectAdjacentZones
 * Address: 0x1009f864 | Size: 620 bytes
 *
 * Connects adjacent player zones by drawing land paths between
 * their waypoints.
 * ---------------------------------------------------------------- */
extern void ConnectWaypoints(long packedFrom, long packedTo);      /* FUN_1009f350 */
extern void ConnectWaypointsViaEdge(long packedFrom, long packedTo); /* FUN_1009f524 */

static void ConnectAdjacentZones(void) /* FUN_1009f864 */
{
    int config;
    int i, j;
    int nextIdx;
    short waypointCount;
    long wp1, wp2;
    short x1, y1;

    for (i = 0; i <= 3; i++) {
        config = *piRam101175f4;
        waypointCount = *(short *)(config + i * 2 + CFG_WAYPOINT_COUNT);

        /* Connect consecutive waypoints within each player zone */
        for (j = 0; j < waypointCount - 1; j++) {
            int wpBase = config + i * 16 + j * 4;

            wp1 = *(long *)(wpBase + CFG_WAYPOINTS);
            wp2 = *(long *)(wpBase + CFG_WAYPOINTS + 4);

            x1 = (short)(wp1 >> 16);
            y1 = (short)(wp1 & 0xFFFF);

            /* Use edge-based connection if seed is on map edge */
            if (x1 == 0 || y1 == 0 || x1 == 0x6F || y1 == 0x9B) {
                ConnectWaypointsViaEdge(wp1, wp2);
            } else {
                ConnectWaypoints(wp1, wp2);
            }
        }

        /* Connect last waypoint of this player to first of next */
        nextIdx = (i + 1) % 4;
        {
            int lastWpIdx = j;
            int thisBase = config + i * 16 + lastWpIdx * 4;
            int nextBase = config + nextIdx * 16;

            wp1 = *(long *)(thisBase + CFG_WAYPOINTS);
            wp2 = *(long *)(nextBase + CFG_WAYPOINTS);

            x1 = (short)(wp1 >> 16);
            y1 = (short)(wp1 & 0xFFFF);

            if (x1 == 0 || y1 == 0 || x1 == 0x6F || y1 == 0x9B) {
                ConnectWaypointsViaEdge(wp1, wp2);
            } else {
                ConnectWaypoints(wp1, wp2);
            }
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_100a01e8 - PlacePlayerStartZones (Phase 2 Orchestrator)
 * Address: 0x100a01e8 | Size: 172 bytes
 * ---------------------------------------------------------------- */
static void PlacePlayerStartZones(void) /* FUN_100a01e8 */
{
    int extraRoll;

    /* Place seed points for all 4 players */
    PlacePlayerSeedPoint(0);
    PlacePlayerSeedPoint(1);
    PlacePlayerSeedPoint(2);
    PlacePlayerSeedPoint(3);

    /* Sort by angle for even distribution */
    SortStartPointsByAngle();

    /* Expand each player's zone from seeds */
    ExpandPlayerZone(0);
    ExpandPlayerZone(1);
    ExpandPlayerZone(2);
    ExpandPlayerZone(3);

    /* Connect adjacent zones */
    ConnectAdjacentZones();

    /* Convert to proper terrain codes */
    ConvertToTerrainCodes();

    /* Expand coastal fringe */
    ExpandCoastalTiles();

    /* 50% chance to add extra land patches */
    extraRoll = DiceRoll(1, 100, 0);
    if (extraRoll < 0x32) {
        short patchCount = DiceRoll(1, 3, -1);
        AddExtraLandPatches(patchCount);
    }

    /* Second coastal expansion pass */
    ExpandCoastalTiles();
}

/* ============================================================
 * PHASE 3: CITY PLACEMENT
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a2760 - PlacePlayerCities
 * Address: 0x100a2760 | Size: 380 bytes
 *
 * Places player-controlled cities on random open land tiles.
 * Count read from config offset 0x34.
 * ---------------------------------------------------------------- */
static void PlacePlayerCities(void) /* FUN_100a2760 */
{
    short cityCount = GetConfigShort(CFG_PLAYER_CITIES);
    short i;
    int x, y;
    int mapData;
    short cityIdx;

    if (cityCount <= 0) return;

    for (i = 0; i < cityCount; i++) {
        /* Find random open land tile */
        do {
            x = DiceRoll(1, 0x70, -1);  /* 0-111 */
            y = DiceRoll(1, 0x9C, -1);  /* 0-155 */
        } while (GetTerrainAt(x, y) != TERRAIN_OPEN_LAND);

        /* Place mountain marker (initial city marker) */
        SetTerrainAt(x, y, TERRAIN_MOUNTAIN);

        /* Record city in city array */
        mapData = *piRam101175f0;
        cityIdx = *(short *)(mapData + CFG_CITY_COUNTER);

        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_X) = (short)x;
        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_Y) = (short)y;
        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_TYPE) = 2; /* player */
        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_ALLIES) = 0;

        *(short *)(mapData + CFG_CITY_COUNTER) = cityIdx + 1;

        NotifyTileChanged(x, y);
    }
}

/* ----------------------------------------------------------------
 * FUN_100a28dc - PlaceNeutralCities
 * Address: 0x100a28dc | Size: 380 bytes
 *
 * Identical structure to PlacePlayerCities but:
 * - Reads count from offset 0x36 (neutral city count)
 * - Sets city.type = 1 (neutral)
 * - Sets terrain to 5 (forest) instead of 6
 * ---------------------------------------------------------------- */
static void PlaceNeutralCities(void) /* FUN_100a28dc */
{
    short cityCount = GetConfigShort(CFG_NEUTRAL_CITIES);
    short i;
    int x, y;
    int mapData;
    short cityIdx;

    if (cityCount <= 0) return;

    for (i = 0; i < cityCount; i++) {
        do {
            x = DiceRoll(1, 0x70, -1);
            y = DiceRoll(1, 0x9C, -1);
        } while (GetTerrainAt(x, y) != TERRAIN_OPEN_LAND);

        SetTerrainAt(x, y, TERRAIN_FOREST);

        mapData = *piRam101175f0;
        cityIdx = *(short *)(mapData + CFG_CITY_COUNTER);

        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_X) = (short)x;
        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_Y) = (short)y;
        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_TYPE) = 1; /* neutral */
        *(short *)(mapData + cityIdx * CITY_REC_SIZE + CITY_REC_ALLIES) = 0;

        *(short *)(mapData + CFG_CITY_COUNTER) = cityIdx + 1;

        NotifyTileChanged(x, y);
    }
}

/* ----------------------------------------------------------------
 * FUN_100a2a58 - AssignCityAlliances
 * Address: 0x100a2a58 | Size: 616 bytes
 *
 * For each city, assigns allied/nearby cities:
 * - Neutral (type 1): allies = dice(1,2,-1) -> 0 or 1
 * - Player (type 2): allies = dice(1,4,-1) -> 0 to 3
 * Each ally is the closest unlinked city (Chebyshev distance).
 * ---------------------------------------------------------------- */
static void AssignCityAlliances(void) /* FUN_100a2a58 */
{
    int mapData = *piRam101175f0;
    short totalCities = *(short *)(mapData + CFG_CITY_COUNTER);
    int i, j, k;
    short numAllies;
    short maxAllies;
    int bestDist, dist;
    short bestCity;

    if (totalCities < 2) return;

    for (i = 0; i < totalCities; i++) {
        int cityBase = mapData + i * CITY_REC_SIZE;

        /* Determine ally count based on city type */
        if (*(short *)(cityBase + CITY_REC_TYPE) == 1) {
            numAllies = DiceRoll(1, 2, -1);  /* 0 or 1 for neutral */
        } else {
            numAllies = DiceRoll(1, 4, -1);  /* 0-3 for player */
        }

        /* Cap to available cities */
        maxAllies = totalCities - 1;
        if (numAllies > maxAllies) numAllies = maxAllies;

        *(short *)(cityBase + CITY_REC_ALLIES) = numAllies;

        /* Find closest unlinked cities as allies */
        for (j = 0; j < numAllies; j++) {
            bestDist = 10000;
            bestCity = -1;

            for (k = 0; k < totalCities; k++) {
                if (k == i) continue;

                /* Check not already an ally */
                int alreadyLinked = 0;
                int m;
                for (m = 0; m < j; m++) {
                    if (k == *(short *)(cityBase + CITY_REC_ALLY_BASE + m * 2)) {
                        alreadyLinked = 1;
                        break;
                    }
                }
                if (alreadyLinked) continue;

                /* Calculate distance */
                dist = ChebyshevDistance(
                    *(long *)(mapData + k * CITY_REC_SIZE),
                    *(long *)(cityBase));

                if (dist < bestDist) {
                    bestCity = k;
                    bestDist = dist;
                }
            }

            *(short *)(cityBase + CITY_REC_ALLY_BASE + j * 2) = bestCity;
        }
    }
}

/* Forward declarations for road-building sub-functions */
extern void DrawRoadFromCity(long packedCityPos);                /* FUN_100a31d8 */
extern void DrawRoadBetweenNeutral(long from, long to);          /* FUN_100a3280 */
extern void DrawRoadBetweenPlayer(long from, long to);           /* FUN_100a32b8 */
extern void DrawStandaloneRoad(long packedCityPos);              /* FUN_100a3304 */

/* ----------------------------------------------------------------
 * FUN_100a33ac - GenerateRoadsBetweenCities
 * Address: 0x100a33ac | Size: 544 bytes
 * ---------------------------------------------------------------- */
static void GenerateRoadsBetweenCities(void) /* FUN_100a33ac */
{
    int mapData = *piRam101175f0;
    short totalCities = *(short *)(mapData + CFG_CITY_COUNTER);
    int i, j;
    short allies, allyType;
    int allyIdx;
    long cityPos, allyPos;

    if (totalCities < 2) return;

    for (i = 0; i < totalCities; i++) {
        int cityBase = mapData + i * CITY_REC_SIZE;
        short cityType = *(short *)(cityBase + CITY_REC_TYPE);
        allies = *(short *)(cityBase + CITY_REC_ALLIES);
        cityPos = *(long *)(cityBase);

        if (cityType == 1) {
            /* Neutral city */
            if (allies == 0) {
                DrawRoadFromCity(cityPos);
            } else {
                for (j = 0; j < allies; j++) {
                    allyIdx = *(short *)(cityBase + CITY_REC_ALLY_BASE + j * 2);
                    allyPos = *(long *)(mapData + allyIdx * CITY_REC_SIZE);
                    allyType = *(short *)(mapData + allyIdx * CITY_REC_SIZE + CITY_REC_TYPE);

                    if (allyType == 1) {
                        DrawRoadBetweenNeutral(cityPos, allyPos);
                    } else {
                        DrawRoadBetweenPlayer(cityPos, allyPos);
                    }
                }
            }
        } else {
            /* Player city */
            if (allies == 0) {
                DrawStandaloneRoad(cityPos);
            } else {
                for (j = 0; j < allies; j++) {
                    allyIdx = *(short *)(cityBase + CITY_REC_ALLY_BASE + j * 2);
                    allyPos = *(long *)(mapData + allyIdx * CITY_REC_SIZE);
                    DrawRoadBetweenPlayer(cityPos, allyPos);
                }
            }
        }
    }
}

/* Forward declarations for terrain smoothing */
extern void SmoothTerrainAroundCities(void);  /* FUN_100a35cc */
extern void EnsureCityCoastalAccess(void);     /* FUN_100a39ac */

/* ----------------------------------------------------------------
 * FUN_100a3a80 - PlaceCitiesAndRoads (Phase 3 Orchestrator)
 * Address: 0x100a3a80 | Size: 76 bytes
 * ---------------------------------------------------------------- */
static void PlaceCitiesAndRoads(void) /* FUN_100a3a80 */
{
    /* Reset city counter */
    *(short *)(*piRam101175f0 + CFG_CITY_COUNTER) = 0;

    PlacePlayerCities();
    PlaceNeutralCities();
    AssignCityAlliances();
    GenerateRoadsBetweenCities();
    SmoothTerrainAroundCities();
    EnsureCityCoastalAccess();
}

/* ============================================================
 * PHASE 4: MOUNTAIN/FOREST CHAINS
 * ============================================================ */

/* Forward declarations */
extern void DrawTerrainChain(short chainType);   /* FUN_100ab368 */
extern void SmoothMountainRegions(void);          /* FUN_100ab9e4 */
extern void SmoothForestRegions(void);            /* FUN_100abb68 */

/* ----------------------------------------------------------------
 * FUN_100abcec - PlaceMountainForestChains (Phase 4 Orchestrator)
 * Address: 0x100abcec | Size: 160 bytes
 * ---------------------------------------------------------------- */
static void PlaceMountainForestChains(void) /* FUN_100abcec */
{
    short i;

    /* Place additional mountain chains (config offset 0x40) */
    for (i = 0; i < GetConfigShort(CFG_EXTRA_MOUNTAIN); i++) {
        DrawTerrainChain(0);  /* 0 = mountain-to-ocean */
    }

    /* Place additional forest chains (config offset 0x3E) */
    for (i = 0; i < GetConfigShort(CFG_EXTRA_FOREST); i++) {
        DrawTerrainChain(1);  /* 1 = forest-to-ocean (crosses map) */
    }

    SmoothMountainRegions();
    SmoothForestRegions();
    EnsureCityCoastalAccess();
}

/* ============================================================
 * PHASE 5: RIVER/WATER CHANNELS
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a9c08 - PlaceRiverWaterChannels (Phase 5 Orchestrator)
 * Address: 0x100a9c08 | Size: 216 bytes
 * ---------------------------------------------------------------- */
static void PlaceRiverWaterChannels(void) /* FUN_100a9c08 */
{
    short i;

    /* Cut thin water channels based on forest chain count */
    for (i = 0; i < GetConfigShort(CFG_FOREST_CHAINS); i++) {
        CutWaterChannel(0, 1, 0);  /* thin channel, stop at ocean */
    }

    /* Cut wide water channels based on mountain chain count */
    for (i = 0; i < GetConfigShort(CFG_MTN_CHAINS); i++) {
        CutWaterChannel(1, 1, 0);  /* wide channel, stop at ocean */
    }

    /* Erode and smooth */
    ErodeLandTiles();
    ExpandCoastalTiles();
    SmoothTerrainAroundCities();
    EnsureCityCoastalAccess();
    ErodeLandTiles();
    ExpandCoastalTiles();
}

/* ============================================================
 * PHASE 6: LAND MASS GENERATION
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a1d8c - CalculateLandTarget
 * Address: 0x100a1d8c | Size: 156 bytes
 *
 * Counts existing land tiles and calculates target based on water %.
 * ---------------------------------------------------------------- */
static void CalculateLandTarget(void) /* FUN_100a1d8c */
{
    int x, y;
    int landCount = 0;
    char t;

    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            t = GetTerrainAt(x, y);
            if (t == TERRAIN_OPEN_LAND || t == TERRAIN_FOREST || t == TERRAIN_MOUNTAIN) {
                landCount++;
            }
        }
    }

    /* Target = (landCount / 100) * waterPercentParam */
    SetConfigShort(CFG_LAND_TARGET,
                   (short)(landCount / 100) * GetConfigShort(CFG_WATER_PCT));
    SetConfigShort(CFG_LAND_COUNT, 0);
}

/* ----------------------------------------------------------------
 * FUN_100a1e28 - CheckLandTarget
 * Address: 0x100a1e28 | Size: 40 bytes
 *
 * Returns 1 if currentLandCount >= targetLand, else 0.
 * ---------------------------------------------------------------- */
static short CheckLandTarget(void) /* FUN_100a1e28 */
{
    unsigned short current = (unsigned short)GetConfigShort(CFG_LAND_COUNT);
    unsigned short target  = (unsigned short)GetConfigShort(CFG_LAND_TARGET);

    return (current >= target) ? 1 : 0;
}

/* ----------------------------------------------------------------
 * FUN_100a1e50 - GrowLandBlob
 * Address: 0x100a1e50 | Size: 1216 bytes
 *
 * Core land generation: places a randomly-shaped "continent blob".
 * 64% chance of small blob (branches 2-9), 36% large (5-14).
 * Grows 8 branches outward with perpendicular sub-branches.
 * ---------------------------------------------------------------- */
static void GrowLandBlob(void) /* FUN_100a1e50 */
{
    int centerX, centerY;
    short branchLength[8];
    short branchGrowth;
    short growthBase;
    int dir, step;
    int sizeRoll;
    int i;
    short curX, curY;
    short perpDir1, perpDir2;
    short subLen1, subLen2;
    short subX, subY;
    unsigned short stepCount;

    /* Find random starting tile on open land */
    do {
        centerX = DiceRoll(1, 0x70, -1);
        centerY = DiceRoll(1, 0x9C, -1);
    } while (GetTerrainAt(centerX, centerY) != TERRAIN_OPEN_LAND);

    /* Determine blob size/shape */
    sizeRoll = DiceRoll(1, 100, 0);
    if (sizeRoll < 0x41) {
        /* 64% chance: small blob */
        for (i = 0; i < 8; i++) {
            branchLength[i] = DiceRoll(1, 8, 2);  /* 2-9 tiles */
        }
        branchGrowth = 4;
        growthBase = 2;
    } else {
        /* 36% chance: large blob */
        for (i = 0; i < 8; i++) {
            branchLength[i] = DiceRoll(1, 10, 5); /* 5-14 tiles */
        }
        branchGrowth = 6;
        growthBase = 4;
    }

    /* Place center tile as grassland */
    SetTerrainAt(centerX, centerY, TERRAIN_GRASSLAND);
    NotifyTileChanged(centerX, centerY);

    /* Increment land count */
    SetConfigShort(CFG_LAND_COUNT, GetConfigShort(CFG_LAND_COUNT) + 1);

    /* Grow 8 branches outward from center */
    for (dir = 0; dir < 8; dir++) {
        curX = (short)centerX;
        curY = (short)centerY;
        stepCount = 0;

        for (step = 0; step < branchLength[dir]; step++) {
            /* Advance in primary direction */
            curX += GetDirectionDX(dir);
            curY += GetDirectionDY(dir);
            ClampToMapBounds(&curX, &curY);

            if (GetTerrainAt(curX, curY) == TERRAIN_OPEN_LAND) {
                SetTerrainAt(curX, curY, TERRAIN_GRASSLAND);
                NotifyTileChanged(curX, curY);
                SetConfigShort(CFG_LAND_COUNT, GetConfigShort(CFG_LAND_COUNT) + 1);
            }

            /* Calculate perpendicular directions */
            perpDir1 = (dir + 2) % 8;
            perpDir2 = (dir + 6) % 8;

            stepCount++;

            /* Sub-branch lengths decrease with distance from center */
            subLen1 = DiceRoll(1,
                branchGrowth - (stepCount / 2),
                growthBase - (stepCount / 4));
            subLen2 = DiceRoll(1,
                branchGrowth - (stepCount / 2),
                growthBase - ((short)stepCount / 3));

            /* Grow sub-branch 1 (perpendicular) */
            subX = curX;
            subY = curY;
            for (i = 0; i < subLen1; i++) {
                subX += GetDirectionDX(perpDir1);
                subY += GetDirectionDY(perpDir1);
                ClampToMapBounds(&subX, &subY);

                if (GetTerrainAt(subX, subY) == TERRAIN_OPEN_LAND) {
                    SetTerrainAt(subX, subY, TERRAIN_GRASSLAND);
                    NotifyTileChanged(subX, subY);
                    SetConfigShort(CFG_LAND_COUNT, GetConfigShort(CFG_LAND_COUNT) + 1);
                }
            }

            /* Grow sub-branch 2 (opposite perpendicular) */
            subX = curX;
            subY = curY;
            for (i = 0; i < subLen2; i++) {
                subX += GetDirectionDX(perpDir2);
                subY += GetDirectionDY(perpDir2);
                ClampToMapBounds(&subX, &subY);

                if (GetTerrainAt(subX, subY) == TERRAIN_OPEN_LAND) {
                    SetTerrainAt(subX, subY, TERRAIN_GRASSLAND);
                    NotifyTileChanged(subX, subY);
                    SetConfigShort(CFG_LAND_COUNT, GetConfigShort(CFG_LAND_COUNT) + 1);
                }
            }
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_100a2310 - FillEnclosedWater
 * Address: 0x100a2310 | Size: 1036 bytes
 *
 * Two passes:
 * 1. Fill open-land tiles with 3+ grassland neighbors
 * 2. Fix diagonal gaps in grassland (randomized)
 * ---------------------------------------------------------------- */
static void FillEnclosedWater(void) /* FUN_100a2310 */
{
    int x, y;
    int grassCount;
    int rollResult;
    char t;

    /* Pass 1: Fill tiles surrounded by grassland */
    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            if (GetTerrainAt(x, y) == TERRAIN_OPEN_LAND) {
                grassCount = 0;

                /* Count grassland cardinal neighbors */
                if (GetTerrainAt(x, y + 1) == TERRAIN_GRASSLAND) grassCount++;
                if (GetTerrainAt(x, y - 1) == TERRAIN_GRASSLAND) grassCount++;
                if (GetTerrainAt(x + 1, y) == TERRAIN_GRASSLAND) grassCount++;
                if (GetTerrainAt(x - 1, y) == TERRAIN_GRASSLAND) grassCount++;

                if (grassCount > 2) {
                    SetTerrainAt(x, y, TERRAIN_GRASSLAND);
                    SetConfigShort(CFG_LAND_COUNT, GetConfigShort(CFG_LAND_COUNT) + 1);
                    NotifyTileChanged(x, y);
                }
            }
        }
    }

    /* Pass 2: Fix diagonal gaps in grassland */
    for (x = 1; x < MAP_WIDTH - 1; x++) {
        for (y = 1; y < MAP_HEIGHT - 1; y++) {
            if (GetTerrainAt(x, y) == TERRAIN_GRASSLAND) {
                /* Check SE-NW diagonal with gap at NE */
                if (GetTerrainAt(x + 1, y + 1) == TERRAIN_GRASSLAND &&
                    GetTerrainAt(x - 1, y - 1) == TERRAIN_GRASSLAND) {

                    t = GetTerrainAt(x + 1, y - 1);
                    if (t == TERRAIN_FOREST || t == TERRAIN_SHORE || t == TERRAIN_OPEN_LAND) {
                        t = GetTerrainAt(x - 1, y + 1);
                        if (t == TERRAIN_FOREST || t == TERRAIN_SHORE || t == TERRAIN_OPEN_LAND) {
                            rollResult = DiceRoll(1, 10, 0);
                            if (rollResult < 5) {
                                SetTerrainAt(x + 1, y - 1, TERRAIN_GRASSLAND);
                                NotifyTileChanged(x + 1, y - 1);
                            } else {
                                SetTerrainAt(x - 1, y + 1, TERRAIN_GRASSLAND);
                                NotifyTileChanged(x - 1, y + 1);
                            }
                        }
                    }
                }

                /* Check SW-NE diagonal with gap at NW */
                if (GetTerrainAt(x - 1, y + 1) == TERRAIN_GRASSLAND &&
                    GetTerrainAt(x + 1, y - 1) == TERRAIN_GRASSLAND) {

                    t = GetTerrainAt(x - 1, y - 1);
                    if (t == TERRAIN_FOREST || t == TERRAIN_SHORE || t == TERRAIN_OPEN_LAND) {
                        t = GetTerrainAt(x + 1, y + 1);
                        if (t == TERRAIN_FOREST || t == TERRAIN_SHORE || t == TERRAIN_OPEN_LAND) {
                            rollResult = DiceRoll(1, 10, 0);
                            if (rollResult < 5) {
                                SetTerrainAt(x - 1, y - 1, TERRAIN_GRASSLAND);
                                NotifyTileChanged(x - 1, y - 1);
                            } else {
                                SetTerrainAt(x + 1, y + 1, TERRAIN_GRASSLAND);
                                NotifyTileChanged(x + 1, y + 1);
                            }
                        }
                    }
                }
            }
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_100a271c - GenerateLandMasses (Phase 6 Orchestrator)
 * Address: 0x100a271c | Size: 68 bytes
 * ---------------------------------------------------------------- */
static void GenerateLandMasses(void) /* FUN_100a271c */
{
    CalculateLandTarget();

    while (CheckLandTarget() == 0) {
        GrowLandBlob();
        FillEnclosedWater();
    }
}

/* ============================================================
 * PHASE 7: SWAMP CLUSTERS
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a6364 - ScatterSwampTiles
 * Address: 0x100a6364 | Size: 348 bytes
 * ---------------------------------------------------------------- */
static void ScatterSwampTiles(short centerX, short centerY) /* FUN_100a6364 */
{
    short numTiles = DiceRoll(1, 5, 3);  /* 3-7 tiles */
    short i;
    short tileX, tileY;
    int dirIdx;
    short dist;

    for (i = 0; i < numTiles; i++) {
        /* Random X scatter */
        dirIdx = DiceRoll(1, 8, -1);     /* random direction 0-7 */
        dist = DiceRoll(1, 3, 0);        /* distance 0-2 */
        tileX = centerX + dist * GetDirectionDX(dirIdx);

        /* Random Y scatter */
        dirIdx = DiceRoll(1, 8, -1);
        dist = DiceRoll(1, 3, 0);
        tileY = centerY + dist * GetDirectionDY(dirIdx);

        ClampToMapBounds(&tileX, &tileY);

        if (GetTerrainAt(tileX, tileY) == TERRAIN_OPEN_LAND) {
            SetTerrainAt(tileX, tileY, TERRAIN_SWAMP);
            NotifyTileChanged(tileX, tileY);
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_100a64c0 - PlaceSwampCluster
 * Address: 0x100a64c0 | Size: 488 bytes
 * ---------------------------------------------------------------- */
static void PlaceSwampCluster(void) /* FUN_100a64c0 */
{
    int x, y;
    short attempts = 0;
    int found = 0;

    /* Find suitable location for swamp cluster */
    do {
        x = DiceRoll(1, 0x66, 5);   /* 5-107 (interior only) */
        y = DiceRoll(1, 0x92, 5);   /* 5-151 (interior only) */

        if (GetTerrainAt(x, y) == TERRAIN_OPEN_LAND) {
            if (attempts < 4) {
                /* Verify 2x2 area doesn't touch shore */
                found = 1;
                if (HasNeighborWithTerrain(x, y, TERRAIN_SHORE) != 0) found = 1;
                if (HasNeighborWithTerrain(x + 1, y, TERRAIN_SHORE) != 0) found = 1;
                if (HasNeighborWithTerrain(x, y + 1, TERRAIN_SHORE) != 0) found = 1;
                if (HasNeighborWithTerrain(x + 1, y + 1, TERRAIN_SHORE) != 0) found = 1;
                attempts++;
            } else {
                found = 1;  /* give up finding perfect spot after 4 attempts */
            }
        }
    } while (!found);

    /* Place swamp center and scatter surrounding tiles */
    SetTerrainAt(x, y, TERRAIN_SWAMP);
    NotifyTileChanged(x, y);

    ScatterSwampTiles(x, y);
    ScatterSwampTiles(x + 1, y + 1);
    ScatterSwampTiles(x - 1, y - 1);
    ScatterSwampTiles(x - 1, y + 1);
    ScatterSwampTiles(x + 1, y - 1);
}

/* ----------------------------------------------------------------
 * FUN_100a66a8 - PlaceSwampClusters (Phase 7 Orchestrator)
 * Address: 0x100a66a8 | Size: 96 bytes
 * ---------------------------------------------------------------- */
static void PlaceSwampClusters(void) /* FUN_100a66a8 */
{
    short numSwamps = DiceRoll(1, 3, 0);  /* 0-2 swamp clusters */
    short i;

    for (i = 0; i < numSwamps; i++) {
        PlaceSwampCluster();
    }
}

/* ============================================================
 * PHASE 8: CITY REGISTRATION AND NEUTRAL CITIES
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a6708 - ScanForExistingCities
 * Address: 0x100a6708 | Size: 216 bytes
 *
 * Scans all tiles for terrain code 10 (city), avoiding double-counting
 * of 2x2 city footprints by checking N and W neighbors.
 * ---------------------------------------------------------------- */
static void ScanForExistingCities(void) /* FUN_100a6708 */
{
    int x, y;
    int gameState = *piRam1011735c;

    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            if (GetTerrainAt(x, y) == TERRAIN_CITY &&
                GetTerrainAt(x, y - 1) != TERRAIN_CITY &&
                GetTerrainAt(x - 1, y) != TERRAIN_CITY) {

                /* New city found - register it */
                SetConfigShort(CFG_INITIAL_CITIES, GetConfigShort(CFG_INITIAL_CITIES) + 1);

                {
                    short armyIdx = *(short *)(gameState + 0x1602);
                    *(short *)(gameState + armyIdx * 0x42 + 0x1604) = (short)x;
                    *(short *)(gameState + armyIdx * 0x42 + 0x1606) = (short)y;
                    *(short *)(gameState + 0x1602) = armyIdx + 1;
                }
            }
        }
    }
}

/* ----------------------------------------------------------------
 * FUN_100a67e0 - PlaceNeutralCityOnLand
 * Address: 0x100a67e0 | Size: 776 bytes
 *
 * Places a 2x2 city footprint on valid land (no water/city/mountain
 * neighbors), with preference for shore access.
 * ---------------------------------------------------------------- */
extern int  iRam1011681c; /* city quadrant X offsets */
extern int  iRam101176e8; /* city quadrant Y offsets - reused as FUN_10116820 */

static void PlaceNeutralCityOnLand(void) /* FUN_100a67e0 */
{
    int x, y;
    short attempts = 0;
    int valid, found = 0;
    int quad;
    char t;
    int gameState = *piRam1011735c;
    int mapData = *piRam101175f0;

    do {
        x = DiceRoll(1, 0x66, 5);   /* 5-107 */
        y = DiceRoll(1, 0x92, 5);   /* 5-151 */

        valid = 1;

        /* Check all 4 quadrants of the 2x2 city footprint */
        for (quad = 0; quad < 4; quad++) {
            int qx = x + *(short *)((int)&iRam1011681c + quad * 2);
            int qy = y + *(short *)((int)&iRam101176e8 + quad * 2);

            t = GetTerrainAt(qx, qy);
            if (t == TERRAIN_SHORE || t == TERRAIN_OCEAN ||
                t == TERRAIN_CITY || t == TERRAIN_MOUNTAIN || t == TERRAIN_FOREST) {
                valid = 0;
            }

            /* Check no existing city within distance 1 */
            if (HasNeighborWithTerrain(qx, qy, TERRAIN_CITY) != 0) valid = 0;
            if (HasNeighborWithTerrain(qx + 1, qy + 1, TERRAIN_CITY) != 0) valid = 0;
            if (HasNeighborWithTerrain(qx - 1, qy - 1, TERRAIN_CITY) != 0) valid = 0;
        }

        if (valid) {
            if (attempts < 4) {
                /* Prefer locations with shore access */
                if (HasNeighborWithTerrain(x, y, TERRAIN_SHORE) != 0 ||
                    HasNeighborWithTerrain(x + 1, y, TERRAIN_SHORE) != 0 ||
                    HasNeighborWithTerrain(x, y + 1, TERRAIN_SHORE) != 0 ||
                    HasNeighborWithTerrain(x + 1, y + 1, TERRAIN_SHORE) != 0) {
                    found = 1;
                }
                attempts++;
            } else {
                found = 1;
            }
        }

        if (found) {
            /* Register city in game state */
            short armyIdx = *(short *)(gameState + 0x1602);
            *(short *)(gameState + armyIdx * 0x42 + 0x1604) = (short)x;
            *(short *)(gameState + armyIdx * 0x42 + 0x1606) = (short)y;
            *(short *)(gameState + 0x1602) = armyIdx + 1;

            /* Place 2x2 city footprint */
            for (quad = 0; quad < 4; quad++) {
                int qx = x + *(short *)((int)&iRam1011681c + quad * 2);
                int qy = y + *(short *)((int)&iRam101176e8 + quad * 2);
                SetTerrainAt(qx, qy, TERRAIN_CITY);
                NotifyTileChanged(qx, qy);
            }
            return;
        }
    } while (1);
}

/* ----------------------------------------------------------------
 * FUN_100a6ae8 - RegisterCitiesAndAddNeutral (Phase 8 Orchestrator)
 * Address: 0x100a6ae8 | Size: 128 bytes
 * ---------------------------------------------------------------- */
static void RegisterCitiesAndAddNeutral(void) /* FUN_100a6ae8 */
{
    short startCity;
    short totalTarget;

    /* Reset city list */
    *(short *)(*piRam1011735c + 0x1602) = 0;

    ScanForExistingCities();
    InitArmyProduction();
    InitPlayerData();

    /* Add neutral cities until we reach the total target */
    startCity = GetConfigShort(CFG_INITIAL_CITIES);
    totalTarget = GetConfigShort(CFG_TOTAL_CITIES);

    while (startCity < totalTarget) {
        PlaceNeutralCityOnLand();
        startCity++;
    }
}

/* ============================================================
 * PHASE 9: RUINS PLACEMENT
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100a6b68 - FindRuinsLocation
 * Address: 0x100a6b68 | Size: 976 bytes
 *
 * Uses rotating sector system (16 sectors) to distribute ruins evenly.
 * Three-tier fallback: preferred sector -> random interior -> any valid.
 * ---------------------------------------------------------------- */
extern unsigned short *FUN_10116820; /* sector counter storage (reused) */

static void FindRuinsLocation(short terrainType, short *outX, short *outY) /* FUN_100a6b68 */
{
    unsigned short sectorIdx;
    unsigned int sectorInt;
    int attempt;
    int x, y;
    int found = 0;

    /* Initialize sector counter on first call */
    if (*FUN_10116820 == 0xFFFF) {
        *FUN_10116820 = DiceRoll(1, 0x10, -1);
    }

    sectorIdx = *FUN_10116820;
    sectorInt = (unsigned int)(short)sectorIdx;

    /* Tier 1: Try 50 times in preferred sector */
    for (attempt = 1; attempt <= 50 && !found; attempt++) {
        int sectorBaseX = (short)((int)((sectorInt % 4) * MAP_WIDTH) / 4);
        int sectorBaseY = (short)((int)((sectorInt / 4) * MAP_HEIGHT) / 4);

        x = DiceRoll(1, 0x14, sectorBaseX + 3);
        y = DiceRoll(1, 0x1F, sectorBaseY + 3);

        if ((int)GetTerrainAt(x, y) == (int)terrainType &&
            HasNeighborWithTerrain(x, y, TERRAIN_CITY) == 0 &&
            HasNeighborWithTerrain(x, y, TERRAIN_RUINS) == 0) {

            /* Check no ruins within distance 3 */
            if (HasNeighborWithTerrain(x - 3, y, TERRAIN_RUINS) == 0 &&
                HasNeighborWithTerrain(x + 3, y, TERRAIN_RUINS) == 0 &&
                HasNeighborWithTerrain(x, y - 3, TERRAIN_RUINS) == 0 &&
                HasNeighborWithTerrain(x, y + 3, TERRAIN_RUINS) == 0) {
                found = 1;
            }
        }
    }

    /* Tier 2: Try 50 random interior locations */
    if (!found) {
        for (attempt = 1; attempt <= 50 && !found; attempt++) {
            x = DiceRoll(1, 0x66, 5);
            y = DiceRoll(1, 0x92, 5);

            if ((int)GetTerrainAt(x, y) == (int)terrainType &&
                HasNeighborWithTerrain(x, y, TERRAIN_CITY) == 0 &&
                HasNeighborWithTerrain(x, y, TERRAIN_RUINS) == 0) {
                found = 1;
            }
        }
    }

    /* Tier 3: Last resort - any non-city non-ruins tile */
    if (!found) {
        for (attempt = 1; attempt <= 50; attempt++) {
            x = DiceRoll(1, 0x66, 5);
            y = DiceRoll(1, 0x92, 5);

            {
                char t = GetTerrainAt(x, y);
                if (t != TERRAIN_CITY && t != TERRAIN_RUINS) {
                    found = 1;
                    break;
                }
            }
        }
    }

    *outX = (short)x;
    *outY = (short)y;

    /* Advance sector counter (mod 16) */
    {
        unsigned int next = (unsigned int)(short)*FUN_10116820 + 1;
        *FUN_10116820 = (unsigned short)(next % 16);
    }
}

/* ----------------------------------------------------------------
 * FUN_100a6f38 - PlaceRuins (Phase 9 Orchestrator)
 * Address: 0x100a6f38 | Size: 784 bytes
 *
 * Places 40 ruins across the map, generates names from templates.
 * ---------------------------------------------------------------- */
extern void FormatString(char *dest, ...);    /* FUN_10001dd0 */
extern void CopyString(void *dest, char *src); /* FUN_10001e78 */
extern short StringLength(char *str);          /* FUN_100012c0 */

static void PlaceRuins(void) /* FUN_100a6f38 */
{
    int gameState = *piRam1011735c;
    int config = *piRam101175f4;
    int progressDialog = *(int *)puRam10115f7c;
    short i;
    short prevProgress = 0;
    short ruinX, ruinY;
    int ruinOffset;
    short ruinsCount;

    /* Set total ruins to 40 */
    *(short *)(gameState + 0x810) = MAX_RUINS;

    /* Initialize ruins records */
    for (i = 0; i < MAX_RUINS; i++) {
        *(short *)(gameState + i * 0x20 + 0x814) = -1;
        *(short *)(gameState + i * 0x20 + 0x812) = -1;
    }

    /* Place each ruin */
    ruinsCount = *(short *)(gameState + 0x810);

    for (i = 0; i < ruinsCount; i++) {
        /* Update progress proportionally */
        short progress = (short)(i * 8 / ruinsCount);
        if (prevProgress != progress) {
            UpdateProgressBar(progressDialog, progress + 0x46);
            prevProgress = progress;
        }

        /* Find location on open land */
        FindRuinsLocation(TERRAIN_OPEN_LAND, &ruinX, &ruinY);

        /* Store position */
        ruinOffset = i * 0x20;
        *(short *)(gameState + ruinOffset + 0x812) = ruinX;
        *(short *)(gameState + ruinOffset + 0x814) = ruinY;

        /* Mark terrain as ruins */
        SetTerrainAt(ruinX, ruinY, TERRAIN_RUINS);

        /* Generate ruins name (from template tables) */
        {
            char nameBuf[256];
            char tempBuf[16];
            short nameIdx;

            if (*(char *)(gameState + ruinOffset + 0x82A) == 1) {
                /* Special ruins type */
                nameIdx = DiceRoll(1, 10, -1);
                FormatString(nameBuf, (void *)(config + 0x1000 + nameIdx * 8), 0);
            } else {
                /* Generated name: cityName + adjective1 + adjective2 */
                short cityNameIdx = DiceRoll(1, GetConfigShort(0xED2), -1);
                short adj1Idx = DiceRoll(1, 10, -1);
                short adj2Idx = DiceRoll(1, 10, -1);

                FormatString(tempBuf, (void *)(config + 0xF38 + adj2Idx * 8),
                             (void *)(config + 0xF9C + adj1Idx * 8));
                FormatString(nameBuf, (void *)(config + 0xED4 + cityNameIdx * 16),
                             tempBuf);
            }

            /* Copy name to ruins data and name buffer */
            CopyString((void *)(gameState + ruinOffset + 0x816), nameBuf);

            /* Append to global ruins name buffer */
            CopyString((void *)(config + GetConfigShort(CFG_RUINS_NAMES_OFF) + 0x3E96),
                       nameBuf);
            {
                short nameLen = StringLength(nameBuf);
                SetConfigShort(CFG_RUINS_NAMES_OFF,
                               GetConfigShort(CFG_RUINS_NAMES_OFF) + nameLen);
            }
        }
    }
}

/* ============================================================
 * PHASE 10: ROAD NETWORK
 * ============================================================ */

/* Forward declarations for road network functions */
extern void  BuildRoadConnectivityGraph(void);                      /* FUN_100a49cc */
extern int   FindNextRoadSegment(void *buf, void *endpoints, void *len); /* FUN_100a9d34 */
extern void  BuildRoadSegment(void *buf, int ep1, int ep2);        /* FUN_100a9f78 */

/* ----------------------------------------------------------------
 * FUN_100aafb8 - GenerateRoadNetwork (Phase 10 Orchestrator)
 * Address: 0x100aafb8 | Size: 628 bytes
 * ---------------------------------------------------------------- */
static void GenerateRoadNetwork(void) /* FUN_100aafb8 */
{
    void *pathBuf;
    int progressStep;
    int segment;
    int progressDialog = *(int *)puRam10115f7c;
    int x, y;

    /* Allocate pathfinding buffer */
    pathBuf = AllocateMemory(ROAD_BUFFER_SIZE);

    /* Clear road bits for all tiles */
    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            /* Clear road overlay data in tile graphics and overlay buffers */
            int gfxAddr = *piRam10117358 + y * 0xE0 + x * 2;
            int ovlAddr = *piRam10117354 + y * MAP_TILE_STRIDE + x;
            /* Clear road-related bits */
            *(unsigned int *)gfxAddr &= 0xE0FFFFFF;
        }
    }

    /* Build road connectivity graph between cities */
    BuildRoadConnectivityGraph();

    /* Iteratively find and build road segments */
    progressStep = 4;
    segment = FindNextRoadSegment(pathBuf, 0, 0);

    while (segment >= 0) {
        if (DiceRoll(1, 3, -1) == 0 && progressStep < 10) {
            progressStep++;
            UpdateProgressBar(progressDialog, progressStep + 80);
        }

        BuildRoadSegment(pathBuf, 0, segment);
        segment = FindNextRoadSegment(pathBuf, 0, 0);
    }

    /* Free pathfinding buffer */
    /* Note: buffer freed via standard Mac memory management */

    /* Clean up: clear road overlay on city and ruins tiles */
    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {
            char t = GetTerrainAt(x, y);
            if (t == TERRAIN_CITY || t == TERRAIN_RUINS) {
                int ovlAddr = *piRam10117354 + y * MAP_TILE_STRIDE + x;
                *(unsigned int *)ovlAddr &= 0xE0FFFFFF;
            }
        }
    }
}

/* ============================================================
 * PHASE 11: FINALIZATION
 * ============================================================ */

/* Forward declarations for Phase 11 sub-functions */
extern void AssignTerrainGraphics(void);      /* FUN_100a4ae8 */
extern void RegisterCities(void);              /* FUN_100a7248 */
extern void AssignPlayerStartPositions(void);  /* FUN_100ab334 */
extern void AssignPlayerHomeCities(void);      /* FUN_100a88d0 - FAILED decompile */
extern void PlaceHeroesOnMap(void);            /* FUN_100a4e0c */
extern void SaveMapToResources(void);          /* FUN_100a52b8 */
extern void SaveScenarioData(void);            /* FUN_100a6060 */

/* ----------------------------------------------------------------
 * FUN_100ab334 - AssignPlayerStartPositions (helper)
 * Address: 0x100ab334 | Size: 52 bytes
 *
 * Calls: AssignStartingArmies, AssignPlayerColors, RollPlayerGold
 * ---------------------------------------------------------------- */
/* (Implemented as extern; dispatches to sub-functions) */

/* ----------------------------------------------------------------
 * FUN_100ab2c4 - RollPlayerGold
 * Address: 0x100ab2c4 | Size: 108 bytes
 *
 * For each player: gold = dice(3, 50, 20) = 23 to 170 gold
 * ---------------------------------------------------------------- */
void RollPlayerGold(void) /* FUN_100ab2c4 */
{
    int player;

    for (player = 0; player < 8; player++) {
        short gold = DiceRoll(3, 50, 20);
        /* Store in player stats (GameState + 0x186 + player * 0x14) */
        *(short *)(*piRam1011735c + 0x186 + player * 0x14) = gold;
    }
}

/* ----------------------------------------------------------------
 * FUN_100ab22c - AssignPlayerColors
 * Address: 0x100ab22c | Size: 148 bytes
 *
 * For each player: colorIndex = dice(1, 5, -1) (random from 5 sets)
 * ---------------------------------------------------------------- */
void AssignPlayerColors(void) /* FUN_100ab22c */
{
    int player;
    int config = *piRam101175f4;

    for (player = 0; player < 8; player++) {
        short colorIdx = DiceRoll(1, 5, -1);
        /* Look up color from table at config + player * 100 + colorIdx * 16 + 0x764 */
        /* Store in game state color arrays */
        *(short *)(*piRam1011735c + 0x08C + player * 2) = colorIdx;
    }
}

/* ----------------------------------------------------------------
 * FUN_100a6204 - FinalizeAndSave (Phase 11 Orchestrator)
 * Address: 0x100a6204 | Size: 148 bytes
 * ---------------------------------------------------------------- */
static void FinalizeAndSave(void) /* FUN_100a6204 */
{
    int progressDialog = *(int *)puRam10115f7c;

    AssignTerrainGraphics();
    UpdateProgressBar(progressDialog, 92);

    RegisterCities();
    AssignPlayerStartPositions();
    UpdateProgressBar(progressDialog, 94);

    AssignPlayerHomeCities();
    UpdateProgressBar(progressDialog, 96);

    PlaceHeroesOnMap();
    UpdateProgressBar(progressDialog, 98);

    SaveMapToResources();
    SaveScenarioData();
}

/* ============================================================
 * MAIN ORCHESTRATOR
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100516c0 - GenerateRandomMap
 * Address: 0x100516c0 | Size: 312 bytes
 *
 * The master 11-phase pipeline orchestrator.
 * Each phase is followed by a progress bar update.
 * ---------------------------------------------------------------- */
void GenerateRandomMap(void) /* FUN_100516c0 */
{
    int progressDialog = *(int *)puRam10115f7c;

    /* Phase 1: Initialize map to all ocean */
    UpdateProgressBar(progressDialog, 0);
    LoadScenarioTemplate();               /* FUN_100a6298 */
    InitializeMapToOcean();               /* FUN_100515f4 */

    /* Phase 2: Place player start zones */
    PlacePlayerStartZones();              /* FUN_100a01e8 */
    UpdateProgressBar(progressDialog, 10);

    /* Phase 3: Place cities and roads */
    PlaceCitiesAndRoads();                /* FUN_100a3a80 */
    UpdateProgressBar(progressDialog, 20);

    /* Phase 4: Mountain/forest chains */
    PlaceMountainForestChains();          /* FUN_100abcec */
    UpdateProgressBar(progressDialog, 30);

    /* Phase 5: River/water channels */
    PlaceRiverWaterChannels();            /* FUN_100a9c08 */
    UpdateProgressBar(progressDialog, 40);

    /* Phase 6: Land mass generation */
    GenerateLandMasses();                 /* FUN_100a271c */
    UpdateProgressBar(progressDialog, 50);

    /* Phase 7: Swamp clusters */
    PlaceSwampClusters();                 /* FUN_100a66a8 */
    UpdateProgressBar(progressDialog, 60);

    /* Phase 8: Register cities, add neutrals */
    RegisterCitiesAndAddNeutral();        /* FUN_100a6ae8 */
    UpdateProgressBar(progressDialog, 70);

    /* Phase 9: Ruins placement */
    PlaceRuins();                         /* FUN_100a6f38 */
    UpdateProgressBar(progressDialog, 80);

    /* Phase 10: Road network */
    GenerateRoadNetwork();                /* FUN_100aafb8 */
    UpdateProgressBar(progressDialog, 90);

    /* Phase 11: Finalize and save */
    FinalizeAndSave();                    /* FUN_100a6204 */
    UpdateProgressBar(progressDialog, 100);
}

/* ============================================================
 * ENTRY POINT
 * ============================================================ */

/* ----------------------------------------------------------------
 * FUN_100517f8 - SetupAndGenerateRandomMap
 * Address: 0x100517f8 | Size: 1384 bytes
 *
 * Entry point from dialog. Allocates buffers, loads template data
 * from 'DAT ' resource, applies user parameter adjustments, then
 * invokes the 11-phase generation pipeline.
 *
 * Parameters:
 *   waterStyle   - water/terrain style (0-6, 7=random)
 *   cityCount    - city density (0-6, 7=random)
 *   terrainStyle - terrain mix (0-6, 7=random)
 *   playerCount  - number of players (0-6, 7=random)
 * ---------------------------------------------------------------- */
void SetupAndGenerateRandomMap(short waterStyle, short cityCount,
                                short terrainStyle, short playerCount) /* FUN_100517f8 */
{
    void *scenHandle;
    void *mapHandle;
    int  *stream;
    int   config;
    short i;
    short sVal;

    /* Show progress dialog (202 x 60 pixels) */
    extern void ShowProgressDialog(int dialog, void *dims, int resID);
    /* FUN_100513b4(*puRam10115f7c, &dims, 0x3F3) */

    /* Allocate scenario data buffer (24,022 bytes) */
    scenHandle = AllocateHandle(SCENARIO_DATA_SIZE);
    if (scenHandle != NULL) {
        /* Lock and setup handle */
        extern void SetupHandle(void *handle);
        SetupHandle(scenHandle);
    }
    *piRam101175f4 = *(int *)scenHandle;

    /* Allocate map tile buffer (18,314 bytes) */
    mapHandle = AllocateHandle(MAP_DATA_SIZE);
    if (mapHandle != NULL) {
        extern void SetupHandle(void *handle);
        SetupHandle(mapHandle);
    }
    *piRam101175f0 = *(int *)mapHandle;

    /* Load template data from 'DAT ' resource */
    stream = (int *)OpenDATResource(0x44415420, 0, 1);

    if (stream == NULL) {
        /* Failed to load - release and return */
        extern void UnlockHandle(int unused);
        UnlockHandle(0);
        return;
    }

    config = *piRam101175f4;

    /* Read terrain lookup tables into data structures */
    /* 0x132 (306) shorts at offset 0x000 */
    {
        short *dest = (short *)config;
        for (i = 0; i < 0x132; i++) {
            /* Read short via vtable dispatch on stream */
            VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *dest++ = ReadShortFromStream();
        }
    }

    /* Copy 0x200 bytes at offset 0x264 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0x264, 0x200);

    /* 0x180 (384) shorts at offset 0x464 */
    {
        short *dest = (short *)(config + 0x464);
        for (i = 0; i < 0x180; i++) {
            VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *dest++ = ReadShortFromStream();
        }
    }

    /* Copy 800 bytes at offset 0x764 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0x764, 800);

    /* 1 short at offset 0xA84 (initial city count) */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(config + CFG_INITIAL_CITIES) = ReadShortFromStream();

    /* Copy 0x44C bytes at offset 0xA86 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0xA86, 0x44C);

    /* 1 short at offset 0xED2 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(config + 0xED2) = ReadShortFromStream();

    /* Copy 400 bytes at offset 0xED4 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0xED4, 400);

    /* 2 shorts at offset 0x1064, 0x1066 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(config + 0x1064) = ReadShortFromStream();
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(config + CFG_RUINS_NAMES_OFF) = ReadShortFromStream();

    /* Copy 0x848 bytes at offset 0x1068 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0x1068, 0x848);

    /* 1 short at offset 0x18B0 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(config + 0x18B0) = ReadShortFromStream();

    /* Copy 0x4B0 bytes at offset 0x18B2 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0x18B2, 0x4B0);

    /* 0xFA (250) shorts at offset 0x1D62 */
    {
        short *dest = (short *)(config + 0x1D62);
        for (i = 0; i < 0xFA; i++) {
            VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *dest++ = ReadShortFromStream();
        }
    }

    /* Copy 16000 bytes at offset 0x1F56 */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)config + 0x1F56, 16000);

    /* Read map tile data: 0x1A5 (421) shorts */
    {
        short *dest = (short *)*piRam101175f0;
        for (i = 0; i < 0x1A5; i++) {
            VTableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *dest++ = ReadShortFromStream();
        }
    }

    /* Copy 0x4440 (17,472) bytes at tile data offset 0x34A */
    VTableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   (unsigned long)*piRam101175f0 + MAP_TILE_OFFSET, OVERLAY_BUFFER_SIZE);

    /* Close the DAT resource stream */
    CloseStream(stream, 1);

    /* Apply user parameter adjustments to base template values */
    config = *piRam101175f4;

    /* Total cities += terrainStyle lookup */
    *(short *)(config + CFG_TOTAL_CITIES) +=
        *(short *)(config + terrainStyle * 2 + CFG_TERRAIN_LUT);

    /* Water % += playerCount lookup */
    *(short *)(config + CFG_WATER_PCT) +=
        *(short *)(config + playerCount * 2 + CFG_PLAYER_LUT);

    /* Neutral cities += cityCount lookup */
    *(short *)(config + CFG_NEUTRAL_CITIES) +=
        *(short *)(config + cityCount * 2 + CFG_CITY_LUT);

    /* Player cities += cityCount lookup */
    *(short *)(config + CFG_PLAYER_CITIES) +=
        *(short *)(config + cityCount * 2 + CFG_CITY_LUT);

    /* Mountain chains += waterStyle lookup */
    *(short *)(config + CFG_MTN_CHAINS) +=
        *(short *)(config + waterStyle * 2 + CFG_WATER_LUT);

    /* Forest chains += waterStyle lookup */
    *(short *)(config + CFG_FOREST_CHAINS) +=
        *(short *)(config + waterStyle * 2 + CFG_WATER_LUT);

    /* Run the 11-phase generation pipeline */
    GenerateRandomMap();

    /* Cleanup: release temporary buffers */
    if (scenHandle != NULL) {
        extern void UnlockHandle2(void *handle);
        UnlockHandle2(scenHandle);
    }
    ReleaseHandle(scenHandle);

    if (mapHandle != NULL) {
        extern void UnlockHandle2(void *handle);
        UnlockHandle2(mapHandle);
    }
    ReleaseHandle(mapHandle);

    /* Update document after generation */
    {
        int docObj = *(int *)(*piRam1011734c + 0x88);
        int *fileHandler = *(int **)(docObj + 0x148);

        /* DoWrite (vtable+0x178) on file handler */
        VTableDispatch((int)fileHandler + (int)*(short *)(*fileHandler + 0x178));

        /* Trigger document update */
        extern void UpdateDocAfterMapGen(int doc, void *data);
        UpdateDocAfterMapGen(docObj, NULL);

        /* DoNeedDiskSpace (vtable+0x118) */
        VTableDispatch((int)fileHandler + (int)*(short *)(*fileHandler + 0x118));
    }
}
