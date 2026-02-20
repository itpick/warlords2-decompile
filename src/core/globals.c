/*
 * globals.c - Warlords II Global Variable Definitions
 *
 * All global state variables used throughout the game.
 * Original addresses noted in comments.
 */

#include "warlords2.h"

/* Core game data pointers (Mac OS Handles - pointer to master pointer).
 * Each global is a pointer-to-int that the game uses as a level of
 * indirection: *gGameState gives the base address of the allocated buffer.
 * We provide static backing storage so dereferencing is safe. */
static pint  _s_gGameState       = 0;
pint         *gGameState         = &_s_gGameState;  /* 0x1011735c */
pint         *gExtState          = NULL;    /* 0x10117468 */
static pint  _s_gMapTiles        = 0;
pint         *gMapTiles          = &_s_gMapTiles;   /* 0x10117358 */
pint         *gUnitTypeTable     = NULL;    /* 0x10117360 */
pint         *gUnitClassTable    = NULL;    /* 0x10117364 */
pint         *gUnitInstanceTable = NULL;    /* 0x101175d0 */
void         *gDataPtr_10117370  = NULL;    /* 0x10117370 */
void         *gResourcePtr       = NULL;    /* 0x1011734c */
void         *gDataPtr_10117350  = NULL;    /* 0x10117350 */
void         *gDataPtr_10117354  = NULL;    /* 0x10117354 */
void         *gDataPtr_10117368  = NULL;    /* 0x10117368 */
void         *gDataPtr_10117414  = NULL;    /* 0x10117414 */
void         *gDataPtr_1011741c  = NULL;    /* 0x1011741c */
void         *gFogOfWarMap       = NULL;    /* 0x1011742c */
void         *gDataPtr_10117470  = NULL;    /* 0x10117470 */

/* UI / Selection state */
short         gSelectedArmy      = -1;      /* 0x1011677c */
short         gSelectedUnitSlot  = 0;       /* 0x10115f10 */
short         gCursorX           = 0;       /* 0x101174f4 */
short         gCursorY           = 0;       /* 0x101174f8 */
short         gTargetCoords[2]   = {0, 0};  /* 0x101174b0 */
short         gSelectedArmyCoords[2] = {0, 0}; /* 0x101176e0 */
short         gAIPathThreshold   = 0;       /* 0x101176fc */

/* Player economy */
short         gPlayerTreasury[MAX_PLAYERS] = {0};  /* 0x1011762c */
short         gPlayerIncome[MAX_PLAYERS]   = {0};  /* 0x10117630 */

/* Resource / File management */
void         *gResourceHandle    = NULL;    /* 0x10115d88 */
void         *gWindowResource    = NULL;    /* 0x101176bc */
void         *gDialogPanel       = NULL;    /* 0x10115f14 */
