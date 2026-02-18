/*
 * globals_extra.c - Definitions for unresolved global variable symbols
 *
 * These are global variables referenced by the reconstructed code but
 * not yet defined in any existing source file.
 */

#include "warlords2.h"

/* ===== Raw Ghidra iRam* globals (long) ===== */
long iRam10115d28 = 0;
long iRam1011681c = 0;
long iRam10117374 = 0;
long iRam10117474 = 0;
long iRam10117488 = 0;
long iRam1011748c = 0;
long iRam10117490 = 0;
long iRam101176e8 = 0;

/* ===== Raw Ghidra piRam* globals (pint *) ===== */
pint *piRam10115fa4 = NULL;
pint *piRam10116200 = NULL;
pint *piRam10116208 = NULL;
pint *piRam1011639c = NULL;
pint *piRam101169c4 = NULL;
pint *piRam101175f0 = NULL;
pint *piRam101175f4 = NULL;

/* ===== Raw Ghidra psRam* globals (short) ===== */
short psRam10115d34 = 0;
short psRam10117484 = 0;

/* ===== Raw Ghidra puRam* globals (unsigned long) ===== */
unsigned long puRam10115f7c = 0;
unsigned long puRam1011734c = 0;

/* ===== Raw Ghidra pdRam* globals (double) ===== */
double pdRam10116790 = 0.0;

/* ===== Named globals (void * pointers unless otherwise noted) ===== */
void *gActiveView = NULL;
void *gBackBuffer = NULL;
void *gCityOwnership = NULL;
void *gColorPalette = NULL;
short gCombatSoundIDs[16] = {0};
int gCurrentMusicID = 0;
void *gErrorHandler = NULL;
void *gGWorldListPtr = NULL;
void *gMinimapGWorld = NULL;
int gPatternDrawFlag = 0;
void *gPerPlayerArmyCount = NULL;
void *gProgressBar = NULL;
void *gProgressView = NULL;
void *gRoadData = NULL;
void *gSCENInfo = NULL;
void *gScreenGWorld = NULL;
int gScreenSentinel = 0;
void *gSndChannel = NULL;
void *gSndHandle = NULL;
int gSoundActive = 0;
int gSoundPrefs = 0;
int gSpriteCount = 0;
void *gSpriteTable = NULL;
void *gTuneDataH = NULL;
void *gTuneHeaderH = NULL;
void *gTunePlayer = NULL;
short gViewportOffset[2] = {0};
short gViewportRect[4] = {0};
