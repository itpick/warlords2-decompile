/*
 * wl2_functions.h - Warlords II Function Declarations
 *
 * Each .c file declares its own extern references for cross-file calls.
 * This header provides shared utility function declarations only.
 *
 * For the full function map, see FUNCTION_MAP.txt
 */

#ifndef WL2_FUNCTIONS_H
#define WL2_FUNCTIONS_H

#include "warlords2.h"

/* ===== Core Utility Functions (core/utils.c) ===== */

/* FUN_1005f230 - Random number: roll numDice dice of dieSize sides + bonus */
short   RandomRange(short numDice, short dieSize, short bonus);

/* FUN_1005f1d0 - Render text string (centered) */
void    DrawString(char *str);

/* FUN_1005f1a0 - Render text at specific coordinates */
void    DrawStringAt(char *str, short x, short y);

/* FUN_10001dd0 - Render a number on screen */
void    DrawNumber(int value);

/* FUN_1000a884 - Calculate distance between two points */
short   CalcDistance(short x1, short y1, short x2, short y2);

/* FUN_10117884 - Read data from resource handles */
void    ResourceRead(void *handle, long offset);

/* FUN_1003206c - Set drawing color from player palette */
void    SetDrawColor(short colorIndex);


#endif /* WL2_FUNCTIONS_H */
