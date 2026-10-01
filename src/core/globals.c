/*
 * globals.c - Warlords II Global Variable Definitions
 *
 * All global state variables used throughout the game.
 * Original addresses noted in comments.
 */

#include "warlords2.h"

/* Core game data pointers. These are the AUTHORITATIVE global definitions (the
 * TOC references in every module resolve here). gExtState was `= NULL` (no
 * backing storage, unlike gGameState/gMapTiles), so *gExtState dereferenced Mac
 * addr 0 (a ~0x40810000 low-mem pointer); that nonzero junk fooled the
 * `if(*gExtState==0)` alloc guard, so GameInit wrote the ext city records
 * through a wild pointer -> dcbz OOB = crash #6. Fixed: give it backing too. */
static pint  _s_gGameState       = 0;
pint         *gGameState         = &_s_gGameState;  /* 0x1011735c */
static pint  _s_gExtState        = 0;
pint         *gExtState          = &_s_gExtState;   /* 0x10117468 (was NULL — crash #6) */
static pint  _s_gMapTiles        = 0;
pint         *gMapTiles          = &_s_gMapTiles;   /* 0x10117358 */
/* Status window — sibling of the macro-generated window globals (gMainGameWindow etc.) but
 * not in that list; main.c references and writes *gStatusWindow, so give it backing storage. */
static pint  _s_gStatusWindow    = 0;
int          *gStatusWindow      = (int *)&_s_gStatusWindow;
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
