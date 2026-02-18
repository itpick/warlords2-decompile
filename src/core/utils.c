/*
 * utils.c - Warlords II Core Utility Functions
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Contains RNG, distance calculation, text drawing, and other shared utilities.
 */

#include "warlords2.h"
#include "wl2_functions.h"

/* =====================================================================
 * Random Number Generator
 *
 * FUN_1005f230 - The dice function used throughout the game.
 * RandomRange(numDice, dieSize, bonus)
 *   Rolls numDice dice, each with dieSize sides (1..dieSize), adds bonus.
 *   Returns total.
 *
 * Uses Mac OS Toolbox Random() internally (FUN_10002970).
 * The Ghidra decompilation shows floating-point conversion to map
 * the unsigned Random() output to [1..dieSize] range.
 * ===================================================================== */

/* Original: FUN_1005f230 at 0x1005f230, 252 bytes */
short RandomRange(short numDice, short dieSize, short bonus)
{
    short total;
    short i;
    short roll;
    unsigned long rawRandom;

    if (dieSize == 0) {
        return bonus;
    }

    total = 0;
    i = 0;

    if (numDice > 0) {
        do {
            /* Call Mac OS Random() - returns unsigned 32-bit value */
            rawRandom = Random();

            /*
             * Map the raw random value to [1..dieSize] range.
             * Original uses floating-point conversion:
             *   roll = (short)(abs((float)random_normalized) / max_range * dieSize + 1.0)
             *
             * Simplified equivalent:
             */
            roll = (short)((rawRandom % (unsigned long)dieSize) + 1);

            total = total + roll;
            i = i + 1;
        } while (i < numDice);
    }

    return total + bonus;
}


/* =====================================================================
 * Distance Calculation
 *
 * FUN_1000a884 - Calculates distance between two map points.
 * Uses Euclidean distance (sqrt via FPU), returns as short.
 * Returns 10000 if within some threshold (used for "adjacent" check).
 * ===================================================================== */

/* FUN_10003768 = abs() - Mac OS Toolbox trampoline */
/* Using standard abs() instead */

/* Original: FUN_1000a884 at 0x1000a884, 212 bytes */
short CalcDistance(short x1, short y1, short x2, short y2)
{
    long dx, dy;
    double dist_sq;

    dx = (long)abs(x1 - x2);
    dy = (long)abs(y1 - y2);

    dist_sq = (double)(dx * dx) + (double)(dy * dy);

    /*
     * Original checks against a threshold stored in a global lookup table.
     * If distance squared exceeds the threshold, compute actual distance.
     * Otherwise return 10000 (sentinel for "very close / adjacent").
     */
    if (dist_sq >= 1.0) {
        return (short)sqrt(dist_sq);
    }
    else {
        return 10000;
    }
}


/* =====================================================================
 * Text Drawing Functions
 *
 * These wrap the internal text renderer (FUN_10032860) which handles
 * Pascal string conversion, font metrics, and QuickDraw text output.
 * ===================================================================== */

/* FUN_10032860 = DrawTextInternal(x, y, text, alignment)
 *   alignment: 1 = centered, -1 = right-aligned, -2 = left-aligned
 */
static void DrawTextInternal(short x, short y, char *text, short alignment);

/* Original: FUN_1005f1a0 at 0x1005f1a0, 48 bytes */
/* DrawStringAt - draws text at coordinates, left-aligned */
void DrawStringAt(char *str, short x, short y)
{
    DrawTextInternal(x, y, str, -2);    /* -2 = left aligned */
}

/* Original: FUN_1005f1d0 at 0x1005f1d0, 48 bytes */
/* DrawString - draws text centered */
void DrawString(char *str)
{
    /* Note: coordinates come from current pen position */
    DrawTextInternal(0, 0, str, 1);     /* 1 = centered */
}

/* Original: FUN_1005f200 at 0x1005f200, 48 bytes */
/* DrawStringRight - draws text right-aligned */
static void DrawStringRight(char *str, short x, short y)
{
    DrawTextInternal(x, y, str, -1);    /* -1 = right aligned */
}

/* Original: FUN_10032860 at 0x10032860, 336 bytes */
/* Internal text rendering - handles font metrics and QuickDraw calls */
static void DrawTextInternal(short x, short y, char *text, short alignment)
{
    Rect    textRect;
    Str255  pascalStr;
    short   textWidth;
    short   fontHeight;
    short   descent;
    Point   penLoc;

    /* Get current font metrics */
    /* FUN_10001b18 = GetFontInfo equivalent */
    FontInfo fInfo;
    GetFontInfo(&fInfo);
    fontHeight = fInfo.ascent;
    descent = fInfo.descent;

    /* Convert C string to Pascal string */
    /* FUN_100b19f4 = CopyCStringToPascal equivalent */
    CopyCStringToPascal(text, pascalStr);

    /* Get string width */
    /* FUN_100006f0 = StringWidth equivalent */
    textWidth = StringWidth(pascalStr);

    /* Calculate text rectangle */
    textRect.right = x + textWidth;
    textRect.bottom = y + fontHeight + descent;
    textRect.top = y;
    textRect.left = x;

    if (alignment == 1) {
        /* Centered: offset by half width */
        short halfWidth = textWidth / 2;
        penLoc.h = 0;
        penLoc.v = 0;
        /* FUN_100e1674 = adjust pen for centering */
        MoveTo(x - halfWidth, y + fontHeight);
    }
    else if (alignment == -1) {
        /* Right aligned: offset by full width */
        MoveTo(x - textWidth, y + fontHeight);
    }
    else {
        /* Left aligned */
        MoveTo(x, y + fontHeight);
    }

    /* Draw the text */
    DrawText((Ptr)&pascalStr[1], 0, pascalStr[0]);
}


/* =====================================================================
 * Number Drawing
 *
 * FUN_10001dd0 = NumToString trampoline
 * Renders a numeric value as text on screen.
 * ===================================================================== */

/* Original: FUN_10001dd0 at 0x10001dd0, 24 bytes (TVect trampoline) */
void DrawNumber(int value)
{
    Str255 numStr;

    NumToString((long)value, numStr);
    DrawString((char *)&numStr[1]);     /* skip length byte for C string */
}


/* =====================================================================
 * Color Setting
 *
 * FUN_1003206c - Sets the current drawing color from player palette.
 * ===================================================================== */

/* Original: FUN_1003206c at 0x1003206c */
void SetDrawColor(short colorIndex)
{
    RGBColor color;

    /* Look up color from palette resource */
    /* The original uses a color lookup table loaded from resources */
    /* Stub — original uses GetCTable color table lookup */
    /* Original calls: GetCTable, then indexes by colorIndex */

    /* Placeholder: set foreground color */
    /* FUN_1003206c internally calls RGBForeColor after lookup */
    RGBForeColor(&color);
}


/* =====================================================================
 * Resource Reading
 *
 * FUN_10117884 - The "virtual method dispatch" / resource reader.
 * Called 5,724 times throughout the binary.
 * Actually a generic memory read/copy with offset.
 * ===================================================================== */

/* Original: FUN_10117884 at 0x10117884 */
void ResourceRead(void *handle, long offset)
{
    /*
     * This function is heavily overloaded in the original.
     * It's used for:
     * 1. Virtual method dispatch (vtable calls)
     * 2. Resource data access
     * 3. Memory block reads
     *
     * The actual implementation reads from a handle at an offset
     * and calls through a function pointer found there.
     *
     * Full reconstruction requires vtable layout analysis
     */

    void **ptr = (void **)handle;
    if (ptr != NULL && *ptr != NULL) {
        /* Read function pointer at offset and call it */
        void (*func)(void) = *(void (**)(void))((char *)*ptr + offset);
        if (func != NULL) {
            func();
        }
    }
}
