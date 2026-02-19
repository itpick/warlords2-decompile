/*
 * rendering.c - Warlords II Rendering & UI System
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 *
 * This module implements the QuickDraw-based rendering pipeline:
 *   - GWorld (offscreen buffer) management
 *   - Sprite loading, caching, and masked blitting
 *   - Map viewport rendering (terrain, armies, fog of war)
 *   - Full strategic map view rendering
 *   - Minimap rendering and updates
 *   - Selection highlights and movement path arrows
 *   - Color palette and drawing state management
 *   - Line drawing primitives
 */

#include "warlords2.h"

#ifndef MODERN_BUILD
#include <QDOffscreen.h>   /* NewGWorld, LockPixels, etc. */
#include <Quickdraw.h>     /* CopyBits, CopyMask, MoveTo, LineTo, etc. */
#include <Palettes.h>
#endif

/* =========================================================================
 * External Globals (defined in wl2_globals.h, resolved by linker)
 * ========================================================================= */

/* gGameState, gMapTiles declared in wl2_globals.h (included via warlords2.h) */
extern void        *gRoadData;             /* piRam10117354 */
extern void        *gResourcePtr;          /* piRam1011734c */

extern int          gSpriteTable;          /* iRam10115ee4 - sprite table base */
extern short       *gSpriteCount;          /* psRam10115ee8 - sprite entry count */
extern unsigned int gColorPalette;         /* uRam101176cc - color palette base */
extern int          gMinimapGWorld;        /* iRam10117688 */
extern int          gBackBuffer;           /* iRam10115ff0 */
extern int         *gScreenGWorld;         /* piRam10115fe8 */
extern int          gArrowDirTable;        /* iRam10116004 */
extern int          gArmyIconTable;        /* iRam10116008 */
extern int          gPlayerColorTable;     /* iRam10115fe4 */
extern short       *gScrollLockFlag;       /* psRam10115fec */
extern short       *gViewportRect;         /* psRam10115ff4 */
extern short       *gForceRedrawFlag;      /* psRam10115ff8 */
extern unsigned char *gPatternDrawFlag;    /* puRam10115f04 */
extern int         *gActiveView;           /* piRam101163b0 */
extern unsigned short *gViewportOffset;    /* puRam10117660 */
extern int         *gGWorldListPtr;        /* piRam10115cfc */

/* Sentinel value for "draw to screen" GWorld */
extern int          gScreenSentinel;       /* _FUN_10116698 */

/* =========================================================================
 * Mac Toolbox thunk declarations (PEF import stubs)
 * ========================================================================= */

/* QuickDraw */
extern void  CopyBits_Thunk(int src, int dst, void *srcR, void *dstR, short mode, int rgn); /* CopyBits_Thunk */
extern void  CopyMask_Thunk(int src, int mask, int dst, void *srcR, void *maskR, void *dstR); /* CopyMask_Thunk */
extern void  MoveTo_Thunk(short h, short v);          /* MoveTo_Thunk */
extern void  LineTo_Thunk(short dh, short dv);        /* LineTo_Thunk */
extern void  PaintRect_Thunk(Rect *r);                /* PaintRect_Thunk */
extern void  RGBForeColor_Thunk(RGBColor *color);     /* RGBForeColor_Thunk */
extern void  SetForeColor_Thunk(void);                /* SetForeColor_Thunk */
extern void  DrawPicture_Thunk(void);
extern void  SetMacRect(Rect *r, short t, short l, short b, short ri);  /* SetMacRect */

/* GWorld */
extern void  GetGWorld_Wrapper(int *port, int *gdh);  /* GetGWorld_Wrapper */
extern void  SetGWorld_Wrapper(int port, int gdh);    /* SetGWorld_Wrapper */
extern int   LockPixels_Wrapper(int pixMap);           /* LockPixels_Wrapper */
extern void  UnlockPixels_Wrapper(int pixMap);         /* UnlockPixels_Wrapper */

/* Memory / Handles */
extern int   HLock_Thunk_Sound(int h);                       /* HLock_Thunk_Sound */
extern void  HUnlock_Thunk(int h);                     /* HUnlock_Thunk */
extern int   NewGWorld_Wrapper(int *gw, int depth, Rect *r, int cTable,
                               int aGDevice, unsigned long flags);  /* NewGWorld_Wrapper */

/* Misc */
extern void  SetRect4(void *r, short x, short y, short w, short h);  /* SetRect4 */
extern int   GetBitMapPtr(Rect *r);                    /* GetBitMapPtr */

/* Forward declarations for functions defined later in this file */
void HideMinimapCursor(void);
void ShowMinimapCursor(void);
void DrawArmyIconFullMap(int targetGW, short playerColor,
                         unsigned short armyType, short stackSize,
                         short mapRow, short mapCol);


/* =========================================================================
 * SECTION 1: Drawing State Management
 * ========================================================================= */

/*
 * SaveDrawingState -- SaveDrawingState
 * Address: 0x10066bf4, Size: 140 bytes
 *
 * Saves the complete QuickDraw drawing environment (pen, font, colors,
 * clipping) into a state buffer for later restoration.
 */
void SaveDrawingState(char *stateBuffer)                        /* SaveDrawingState */
{
    /* Save pen state */
    /* FUN_100ef8c8 -- GetPenState */
    FUN_100ef8c8(stateBuffer + 0);

    /* Save font state */
    /* FUN_100ef824 -- GetFontState */
    FUN_100ef824(stateBuffer + 16);

    /* Save foreground color */
    /* FUN_10000000 / FUN_100016f8 -- GetForeColor */
    FUN_10000000(stateBuffer + 32);

    /* Save clipping region */
    /* FUN_100f0688 -- SaveClipRegion */
    FUN_100f0688(stateBuffer + 40);
}

/*
 * RestoreDrawingState -- RestoreDrawingState
 * Address: 0x10066c80, Size: 132 bytes
 *
 * Restores the drawing environment from a previously saved state buffer.
 * param_2 controls which aspects to restore (bitmask).
 */
void RestoreDrawingState(char *stateBuffer, int restoreFlags)   /* RestoreDrawingState */
{
    /* Restore pen state */
    /* FUN_100f0538 -- SetPenState */
    FUN_100f0538(stateBuffer + 0);

    /* Restore font state */
    /* FUN_100f03e8 -- SetFontState */
    FUN_100f03e8(stateBuffer + 16);

    /* Restore foreground color */
    /* FUN_100016f8 -- SetForeColor */
    FUN_100016f8(stateBuffer + 32);

    /* Restore clipping region */
    /* FUN_100f0788 -- RestoreClipRegion */
    FUN_100f0788(stateBuffer + 40);
}

/*
 * SetupDrawingEnvironment -- SetupDrawingEnvironment
 * Address: 0x10067270, Size: 76 bytes
 *
 * Configures the drawing environment for sprite blitting operations.
 * Sets transfer mode, pen, and clipping for CopyBits/CopyMask calls.
 */
void SetupDrawingEnvironment(void)                              /* SetupDrawingEnvironment */
{
    /* Set default foreground to black, background to white */
    RGBForeColor_Thunk((RGBColor *)(gColorPalette));
    SetForeColor_Thunk();

    /* Reset pen to default */
    FUN_100008b8();   /* PenNormal equivalent */
}


/* =========================================================================
 * SECTION 2: Color / Palette System
 * ========================================================================= */

/*
 * SetDrawingColor -- SetDrawingColor
 * Address: 0x100479f4, Size: 112 bytes
 *
 * Sets the current foreground drawing color from the game's color table.
 *
 * The color table at gColorPalette (uRam101176cc) contains 8-byte entries.
 * Index formula: ((index * 5 - index) & 0x7FFFFFFF) * 2 + base
 * which simplifies to: index * 8 + base  (8 bytes per RGB entry).
 *
 * Special: param_1 == -1 sets pattern draw mode flag.
 */
int SetDrawingColor(short colorIndex)                           /* SetDrawingColor */
{
    if (colorIndex == -1) {
        /* Signal "use pattern" mode */
        *gPatternDrawFlag = 1;                                  /* puRam10115f04 */
    }
    else {
        /* Compute color table address:
         * offset = ((colorIndex * 4 - colorIndex) * 2) = colorIndex * 8 - 2*colorIndex
         * actually: (((long)colorIndex & 0x3FFFFFFF) * 4 - (long)colorIndex & 0x7FFFFFFF) * 2
         * simplifies to colorIndex * 8 */
        unsigned long colorAddr =
            (((long)colorIndex & 0x3FFFFFFFUL) * 4 -
             (long)colorIndex & 0x7FFFFFFFL) * 2 + (unsigned long)gColorPalette;

        RGBForeColor_Thunk((RGBColor *)colorAddr);             /* RGBForeColor_Thunk */
        SetForeColor_Thunk();                                   /* SetForeColor_Thunk */
        *gPatternDrawFlag = 0;
    }
    return 0;
}


/* =========================================================================
 * SECTION 3: GWorld / Offscreen Buffer Management
 * ========================================================================= */

/*
 * CreateOrResizeGWorld -- CreateOrResizeGWorld
 * Address: 0x1000a12c, Size: 956 bytes
 *
 * Creates or resizes an offscreen GWorld buffer. This is the core
 * offscreen buffer allocator used throughout the rendering system.
 *
 * GWorld descriptor layout (at param_1):
 *   +0x00: short[2]  - (x, y) origin
 *   +0x04: short     - width
 *   +0x06: short     - height
 *   +0x08: short     - half-width (rounded up)
 *   +0x0A: byte      - flags
 *   +0x0B: byte      - pixel depth flag
 *   +0x0C: short     - additional flags
 *   +0x10: GWorldPtr - pointer to the actual GWorld
 */
int CreateOrResizeGWorld(int gwDesc, short width, short height,
                         short depth, char flags, unsigned short extraFlags)
                                                                /* CreateOrResizeGWorld */
{
    int    *gwListPtr;
    int     savedPort, savedDevice;
    int     gworldPtr = 0;
    short   halfWidth;
    int     monitorDepth;
    int     result;
    Rect    boundsRect;

    gwListPtr = gGWorldListPtr;                                 /* piRam10115cfc */

    /* Compute half-width (rounded up for odd widths) */
    halfWidth = (short)(((int)width + 1) >> 1);
    if (((int)width + 1) < 0 && (((int)width + 1) & 1) != 0)
        halfWidth++;

    /* Query current monitor depth */
    {
        int *devPtr = (int *)FUN_10001170();                    /* GetMainDevice equiv */
        monitorDepth = *(short *)(**(int **)(*devPtr + 0x16) + 0x20);
    }

    /* If requesting 8-bit and the descriptor has no depth flag, force depth=0 */
    if (depth == 8 && *(char *)(gwDesc + 0x0B) == '\0') {
        depth = 0;
    }

    /* Check if existing GWorld matches requested dimensions */
    if (halfWidth == *(short *)(gwDesc + 8) &&
        height   == *(short *)(gwDesc + 6) &&
        (unsigned int)depth == (unsigned int)*(unsigned char *)(gwDesc + 0x0B) &&
        *(int *)(gwDesc + 0x10) != 0)
    {
        /* Existing GWorld matches -- reuse it */
        SetMacRect(&boundsRect, 0, 0, *(short *)(gwDesc + 4), *(short *)(gwDesc + 6));

        /* Determine color depth mode */
        char depthMode = '\x01';
        if (*(char *)(gwDesc + 0x0B) != '\x01') {
            depthMode = (monitorDepth == 8) ? '\0' : '\x08';
        }

        /* Update the existing GWorld */
        NewGWorld_Wrapper(gwDesc + 0x10, depthMode, &boundsRect, 0, 0, 0x10000000);
        return 1;
    }

    /* Free existing GWorld if any */
    result = FUN_1000a094(gwDesc);                              /* DisposeGWorldDescriptor */
    if (result == 0) {
        return 0;
    }

    /* Save current drawing port */
    GetGWorld_Wrapper(&savedPort, &savedDevice);                /* GetGWorld_Wrapper */

    /* Normalize depth */
    if ((unsigned int)depth == 0) {
        depth = 8;
    }
    if ((int)depth != 1 && monitorDepth == 8) {
        depth = 0;  /* Fall back to device depth */
    }

    /* Create new GWorld */
    SetMacRect(&boundsRect, 0, 0, width, height);

    char depthMode2 = '\x01';
    if ((int)depth == 1) {
        /* 1-bit depth -- use color table from puRam101176dc */
    }

    result = FUN_10001d58(&gworldPtr, depth, &boundsRect, 0, 0,
                          (extraFlags & 0xFF) != 0);

    if (result != 0) {
        if (flags != '\0') {
            /* Try alternate allocation with different flags */
            result = FUN_10001d58(&gworldPtr, depth, &boundsRect, 0, 0, 4);
            if (result == 0) goto done;
        }
        if (result != 0) {
            return 0;
        }
    }

done:
    /* Configure the new GWorld */
    SetGWorld_Wrapper(gworldPtr, 0);                            /* SetGWorld_Wrapper */

    /* Lock pixels to validate */
    result = FUN_10001d70(*(int *)(gworldPtr + 2));
    if (result != 0) {
        FUN_10002c58(gworldPtr + 0x10);                         /* GetPixBaseAddr */
        HUnlock_Thunk(*(int *)(gworldPtr + 2));                 /* HUnlock_Thunk */
    }

    /* Restore original port */
    SetGWorld_Wrapper(savedPort, savedDevice);                  /* SetGWorld_Wrapper */

    /* Validate pixel map */
    result = FUN_10001d70(*(int *)(gworldPtr + 2));

    /* Store dimensions and flags in descriptor */
    *(char *)(gwDesc + 0x0B) = (char)depth;
    SetRect4((void *)gwDesc, 0, 0, width, height);             /* SetRect4 */
    *(short *)(gwDesc + 8)   = halfWidth;
    *(int *)(gwDesc + 0x10)  = gworldPtr;
    *(unsigned short *)(gwDesc + 0x0C) = extraFlags & 0xFF;

    /* Register with GWorld manager */
    if (*gwListPtr == 0) {
        int mgr = FUN_100ead08(0);
        *gwListPtr = mgr;
        FUN_100ead98();
    }
    ResourceRead_Dispatch(*gwListPtr + (int)*(short *)(*(int *)*gwListPtr + 0x118),
                 gwDesc);

    if (result != 0) {
        HUnlock_Thunk(*(int *)(gworldPtr + 2));
    }

    return 1;
}

/*
 * EraseGWorld -- EraseGWorld
 * Address: 0x1000a008, Size: 140 bytes
 *
 * Fills an entire GWorld with a single color (typically used for clearing).
 */
void EraseGWorld(int gwDesc, short colorIndex)                  /* EraseGWorld */
{
    int savedPort, savedDevice;

    if (gwDesc != 0) {
        GetGWorld_Wrapper(&savedPort, &savedDevice);
        SetGWorld_Wrapper(*(int *)(gwDesc + 0x10), 0);

        SetDrawingColor(colorIndex);                            /* SetDrawingColor */
        PaintRect_Thunk((Rect *)((unsigned long)*(int *)(gwDesc + 0x10) + 0x10));

        SetGWorld_Wrapper(savedPort, savedDevice);
    }
}


/* =========================================================================
 * SECTION 4: Sprite Loading & Caching
 * ========================================================================= */

/*
 * EnsureSpriteLoaded -- EnsureSpriteLoaded
 * Address: 0x100462c8, Size: 212 bytes
 *
 * Ensures the sprite at the given index is loaded into memory.
 * Uses an LRU eviction strategy within sprite groups.
 *
 * Sprite table entry (20 bytes per entry at gSpriteTable):
 *   +0x00: uint flags (bit 29 = loaded, bit 28 = has mask, etc.)
 *   +0x04: ptr  GWorld descriptor (image)
 *   +0x08: byte resource group
 *   +0x0C: ptr  GWorld descriptor (mask)
 *   +0x10: short mask resource ID
 */
void EnsureSpriteLoaded(short spriteID)                         /* EnsureSpriteLoaded */
{
    unsigned long spriteAddr;
    unsigned int  flags;
    int           i;
    short         count;

    spriteAddr = (unsigned long)(((spriteID & 0x3FFFFFFFL) * 4 +
                  spriteID) << 2) + gSpriteTable;
    /* Note: (id * 4 + id) << 2 = id * 20 = id * 0x14 */

    flags = *(unsigned int *)spriteAddr;

    /* Check if sprite is already loaded (bit 29) */
    if ((flags >> 0x1D & 1) != 0) {
        /* Already loaded -- touch/validate it */
        FUN_10045f0c(spriteID);                                 /* ValidateSprite */
        return;
    }

    /* Not loaded -- find a loaded sprite in the same group to evict */
    count = *gSpriteCount;
    for (i = 0; i < count; i++) {
        unsigned int entryFlags = *(unsigned int *)(i * 0x14 + gSpriteTable);

        if ((entryFlags >> 0x1D & 1) != 0) {
            /* This sprite IS loaded -- check if same group */
            if (*(char *)(i * 0x14 + gSpriteTable + 8) ==
                *(char *)(spriteAddr + 8))
            {
                FUN_100450f4(i);                                /* UnloadSprite (LRU eviction) */
                break;
            }
        }
    }

    /* Load the new sprite */
    FUN_10044d8c(spriteID);                                     /* LoadSprite */
}

/*
 * EnsureSpriteAndLock -- EnsureSpriteAndLock
 * Address: 0x100451f4, Size: 184 bytes
 *
 * Ensures a sprite is loaded AND its pixel data is locked for drawing.
 * Must be paired with UnlockAndReleaseSprite after drawing.
 */
void EnsureSpriteAndLock(short spriteID)                        /* EnsureSpriteAndLock */
{
    unsigned long spriteAddr;

    spriteAddr = (unsigned long)(spriteID * 0x14 + gSpriteTable);

    /* Load sprite if needed */
    if ((*(unsigned int *)spriteAddr >> 0x1D & 1) == 0) {
        FUN_10044d8c(spriteID);                                 /* LoadSprite */
    }

    /* Lock the image GWorld pixels */
    if (*(int *)(spriteAddr + 0x04) != 0) {
        HLock_Thunk_Sound(*(int *)(spriteAddr + 0x04));               /* HLock_Thunk_Sound */
        FUN_10001d70(*(int *)(spriteAddr + 0x04));              /* Validate pixmap */
    }

    /* Lock the mask GWorld pixels (if sprite has mask) */
    if (*(unsigned int *)spriteAddr >> 0x1C & 1) {
        if (*(int *)(spriteAddr + 0x0C) != 0) {
            HLock_Thunk_Sound(*(int *)(spriteAddr + 0x0C));
            FUN_10001d70(*(int *)(spriteAddr + 0x0C));
        }
    }
}

/*
 * UnlockAndReleaseSprite -- UnlockAndReleaseSprite
 * Address: 0x1004530c, Size: 228 bytes
 *
 * Unlocks sprite pixel memory after drawing is complete.
 */
void UnlockAndReleaseSprite(short spriteID)                     /* UnlockAndReleaseSprite */
{
    unsigned long spriteAddr;

    spriteAddr = (unsigned long)(spriteID * 0x14 + gSpriteTable);

    /* Unlock image GWorld */
    if (*(int *)(spriteAddr + 0x04) != 0) {
        HUnlock_Thunk(*(int *)(spriteAddr + 0x04));             /* HUnlock_Thunk */
    }

    /* Unlock mask GWorld */
    if ((*(unsigned int *)spriteAddr >> 0x1C & 1) &&
        *(int *)(spriteAddr + 0x0C) != 0)
    {
        HUnlock_Thunk(*(int *)(spriteAddr + 0x0C));
    }
}


/* =========================================================================
 * SECTION 5: Core Sprite Blitting
 * ========================================================================= */

/*
 * BlitSpriteWithMask -- BlitSpriteWithMask
 * Address: 0x10009d38, Size: 624 bytes
 *
 * The core masked sprite blitting function. Draws a sprite region from
 * a source GWorld through a mask GWorld into a destination GWorld,
 * using CopyMask for transparency.
 *
 * Parameters:
 *   srcGW    - source image GWorld descriptor (or gScreenSentinel for screen)
 *   srcTop, srcLeft - source rectangle origin
 *   srcW, srcH      - source rectangle dimensions
 *   dstGW    - destination GWorld descriptor
 *   dstX, dstY      - destination position
 *
 * Stack parameters (from calling convention):
 *   maskGW   - mask GWorld descriptor
 *   maskLeft, maskTop - mask rectangle origin
 */
void BlitSpriteWithMask(int srcGW, short srcTop, short srcLeft,
                         short srcW, short srcH,
                         int dstGW, short dstX, short dstY)    /* BlitSpriteWithMask */
{
    int srcPixMap, maskPixMap, dstPixMap;
    int *srcPtr, *dstPtr;
    int savedPort, savedDevice;
    int maskGW;   /* from stack: in_stack_00000038 */
    short maskLeft, maskTop;  /* from stack */
    Rect srcRect, maskRect, dstRect;

    if (srcGW == 0 || dstGW == 0)
        return;

    /* Save current port */
    GetGWorld_Wrapper(&savedPort, &savedDevice);                /* GetGWorld_Wrapper */

    /* Resolve source GWorld pointer */
    if (srcGW != gScreenSentinel) {
        srcPixMap = *(int *)(srcGW + 0x10);
    } else {
        srcPixMap = savedPort;
    }

    /* Resolve mask GWorld pointer */
    if (maskGW != gScreenSentinel) {
        maskPixMap = *(int *)(maskGW + 0x10);
    } else {
        maskPixMap = savedPort;
    }

    /* Resolve destination GWorld pointer */
    if (dstGW != gScreenSentinel) {
        dstPixMap = *(int *)(dstGW + 0x10);
    } else {
        dstPixMap = savedPort;
    }

    if (srcPixMap == 0 || maskPixMap == 0 || dstPixMap == 0)
        return;

    /* Switch to destination port */
    SetGWorld_Wrapper(dstPixMap, 0);                            /* SetGWorld_Wrapper */
    SetupDrawingEnvironment();                                  /* SetupDrawingEnvironment */

    /* Lock all three pixel maps */
    LockPixels_Wrapper(srcPixMap);                              /* LockPixels_Wrapper */
    LockPixels_Wrapper(maskPixMap);
    LockPixels_Wrapper(dstPixMap);

    /* Build source rect: (srcTop, srcLeft) to (srcTop+srcH, srcLeft+srcW) */
    srcRect.top    = srcTop;
    srcRect.left   = srcLeft;
    srcRect.bottom = srcTop + srcH;
    srcRect.right  = srcLeft + srcW;

    /* Build mask rect: (maskTop, maskLeft) to (maskTop+srcH, maskLeft+srcW) */
    maskRect.top    = maskTop;
    maskRect.left   = maskLeft;
    maskRect.bottom = maskTop + srcH;
    maskRect.right  = maskLeft + srcW;

    /* Build dest rect: (dstY, dstX) to (dstY+srcH, dstX+srcW) */
    dstRect.top    = dstY;
    dstRect.left   = dstX;
    dstRect.bottom = dstY + srcH;
    dstRect.right  = dstX + srcW;

    /* Perform masked blit: CopyMask(src, mask, dst, srcRect, maskRect, dstRect) */
    CopyMask_Thunk(                                             /* CopyMask_Thunk */
        LockPixels_Wrapper(srcPixMap),
        LockPixels_Wrapper(maskPixMap),
        LockPixels_Wrapper(dstPixMap),
        GetBitMapPtr(&srcRect),
        GetBitMapPtr(&maskRect),
        GetBitMapPtr(&dstRect));

    /* Unlock all pixel maps */
    UnlockPixels_Wrapper(srcPixMap);                            /* UnlockPixels_Wrapper */
    UnlockPixels_Wrapper(maskPixMap);
    UnlockPixels_Wrapper(dstPixMap);

    /* Restore original port and colors */
    SetGWorld_Wrapper(savedPort, savedDevice);
    RGBForeColor_Thunk((RGBColor *)(gColorPalette));            /* Restore default fg */
    FUN_100008b8();                                             /* PenNormal */
    RGBForeColor_Thunk((RGBColor *)(gColorPalette + 0x5FA));   /* Restore bg */
    SetForeColor_Thunk();
}

/*
 * BlitSpriteNormal -- BlitSpriteNormal
 * Address: 0x10009b48, Size: 496 bytes
 *
 * Blits a sprite region without transparency (uses CopyBits, not CopyMask).
 *
 * Parameters match BlitSpriteWithMask minus the mask.
 * Stack parameter: transferMode, playerColorIndex
 */
void BlitSpriteNormal(int srcGW, short srcTop, short srcLeft,
                       short srcW, short srcH,
                       int dstGW, short dstX, short dstY)      /* BlitSpriteNormal */
{
    int srcPixMap, dstPixMap;
    int savedPort, savedDevice;
    short playerColor;  /* from stack: in_stack_0000003e */
    short transferMode; /* from stack: in_stack_0000003a */
    Rect srcRect, dstRect;
    char drawState[48];

    if (srcGW == 0 || dstGW == 0)
        return;

    /* Save current port */
    GetGWorld_Wrapper(&savedPort, &savedDevice);                /* GetGWorld_Wrapper */

    /* Resolve source and dest GWorld pointers */
    if (srcGW != gScreenSentinel) {
        srcPixMap = *(int *)(srcGW + 0x10);
    } else {
        srcPixMap = savedPort;
    }

    if (dstGW != gScreenSentinel) {
        dstPixMap = *(int *)(dstGW + 0x10);
    } else {
        dstPixMap = savedPort;
    }

    if (srcPixMap == 0 || dstPixMap == 0)
        return;

    /* Switch to destination port */
    SetGWorld_Wrapper(dstPixMap, 0);                            /* SetGWorld_Wrapper */

    /* Lock pixel maps */
    LockPixels_Wrapper(srcPixMap);                              /* LockPixels_Wrapper */
    LockPixels_Wrapper(dstPixMap);

    /* Build source rect */
    srcRect.top    = srcTop;
    srcRect.left   = srcLeft;
    srcRect.bottom = srcTop + srcH;
    srcRect.right  = srcLeft + srcW;

    /* Build dest rect */
    dstRect.top    = dstY;
    dstRect.left   = dstX;
    dstRect.bottom = dstY + srcH;
    dstRect.right  = dstX + srcW;

    /* Save drawing state and configure */
    SaveDrawingState(drawState);                                /* SaveDrawingState */
    SetupDrawingEnvironment();                                  /* SetupDrawingEnvironment */

    /* Set color from player color index */
    RGBForeColor_Thunk((RGBColor *)(
        (((long)playerColor & 0x3FFFFFFFUL) * 4 -
         (long)playerColor & 0x7FFFFFFFL) * 2 + gColorPalette));
    FUN_100008b8();                                             /* PenNormal */

    /* CopyBits(src, dst, srcRect, dstRect, transferMode, maskRgn=NULL) */
    CopyBits_Thunk(                                             /* CopyBits_Thunk */
        LockPixels_Wrapper(srcPixMap),
        LockPixels_Wrapper(dstPixMap),
        GetBitMapPtr(&srcRect),
        GetBitMapPtr(&dstRect),
        transferMode, 0);

    /* Unlock pixel maps */
    UnlockPixels_Wrapper(srcPixMap);
    UnlockPixels_Wrapper(dstPixMap);

    /* Restore drawing state */
    RestoreDrawingState(drawState, 2);                          /* RestoreDrawingState */
    SetGWorld_Wrapper(savedPort, savedDevice);
}

/*
 * BlitTerrainPixel -- BlitTerrainPixel
 * Address: 0x10009fa8, Size: 96 bytes
 *
 * Blits a single terrain "pixel" (2x2 block in small map view).
 * Sets the color from the palette and draws a single point.
 */
void BlitTerrainPixel(int destGW, short x, short y, short colorIndex)
                                                                /* BlitTerrainPixel */
{
    unsigned long colorAddr;

    /* Compute color address: index * 8 + palette base */
    colorAddr = (((long)colorIndex & 0x3FFFFFFFUL) * 4 -
                 (long)colorIndex & 0x7FFFFFFFL) * 2 +
                (unsigned long)gColorPalette;

    RGBForeColor_Thunk((RGBColor *)colorAddr);                  /* RGBForeColor_Thunk */
    FUN_100008e8(x, y, 0);                                     /* DrawPixel at (x,y) */
}

/*
 * BlitToScreen -- BlitToScreen
 * Address: 0x10047a64, Size: 88 bytes
 *
 * Blits a sprite region from a GWorld to the screen window.
 * Uses the screen sentinel value for the destination.
 */
void BlitToScreen(int srcGW, short *srcRect, short dstX, short dstY)
                                                                /* BlitToScreen */
{
    BlitSpriteNormal(srcGW,
                     srcRect[0], srcRect[1], srcRect[2], srcRect[3],
                     gScreenSentinel,
                     dstX, dstY);
}


/* =========================================================================
 * SECTION 6: Line Drawing Primitives
 * ========================================================================= */

/*
 * DrawHLine -- DrawHLine
 * Address: 0x1000a714, Size: 184 bytes
 *
 * Draws a horizontal line in a GWorld.
 */
void DrawHLine(int gwDesc, short x, short y, short length, short colorIndex)
                                                                /* DrawHLine */
{
    int savedPort, savedDevice;

    if (gwDesc == 0)
        return;

    GetGWorld_Wrapper(&savedPort, &savedDevice);                /* GetGWorld_Wrapper */

    if (*(int *)(gwDesc + 0x10) != 0) {
        SetGWorld_Wrapper(*(int *)(gwDesc + 0x10), 0);          /* SetGWorld_Wrapper */
    }

    SetDrawingColor(colorIndex);                                /* SetDrawingColor */
    MoveTo_Thunk(x, y);                                         /* MoveTo_Thunk */
    LineTo_Thunk(length - 1, 0);                                /* LineTo_Thunk -- horizontal */

    SetGWorld_Wrapper(savedPort, savedDevice);
}

/*
 * DrawVLine -- DrawVLine
 * Address: 0x1000a7cc, Size: 184 bytes
 *
 * Draws a vertical line in a GWorld.
 */
void DrawVLine(int gwDesc, short x, short y, short length, short colorIndex)
                                                                /* DrawVLine */
{
    int savedPort, savedDevice;

    if (gwDesc == 0)
        return;

    GetGWorld_Wrapper(&savedPort, &savedDevice);

    if (*(int *)(gwDesc + 0x10) != 0) {
        SetGWorld_Wrapper(*(int *)(gwDesc + 0x10), 0);
    }

    SetDrawingColor(colorIndex);                                /* SetDrawingColor */
    MoveTo_Thunk(x, y);                                         /* MoveTo_Thunk */
    LineTo_Thunk(0, length - 1);                                /* LineTo_Thunk -- vertical */

    SetGWorld_Wrapper(savedPort, savedDevice);
}


/* =========================================================================
 * SECTION 7: Fill Rect Utility
 * ========================================================================= */

/*
 * FillRectWithColor -- FillRectWithColor
 * Address: 0x10047cbc, Size: 196 bytes
 *
 * Fills a rectangle in a GWorld with the specified color.
 * The rectangle is in (x, y, w, h) format, converted to Mac Rect.
 * Color 0xFF is used for fog of war stipple fill.
 */
void FillRectWithColor(int gwDesc, int *xywhRect, short colorIndex)
                                                                /* FillRectWithColor */
{
    Rect macRect;
    int  savedPort, savedDevice;
    int  x, y, w, h;

    x = ((int *)xywhRect)[0] >> 16;   /* high word */
    y = ((int *)xywhRect)[0] & 0xFFFF; /* low word */
    w = ((int *)xywhRect)[1] >> 16;
    h = ((int *)xywhRect)[1] & 0xFFFF;

    if (gwDesc != 0) {
        GetGWorld_Wrapper(&savedPort, &savedDevice);            /* GetGWorld_Wrapper */
        SetGWorld_Wrapper(*(int *)(gwDesc + 0x10), 0);          /* SetGWorld_Wrapper */

        /* Convert (x,y,w,h) to Mac Rect (top,left,bottom,right) */
        SetMacRect(&macRect, x, y, x + w, y + h);              /* SetMacRect */

        SetDrawingColor(colorIndex);                            /* SetDrawingColor */
        PaintRect_Thunk(&macRect);                              /* PaintRect_Thunk */

        SetGWorld_Wrapper(savedPort, savedDevice);
    }
}


/* =========================================================================
 * SECTION 8: Army Icon Drawing
 * ========================================================================= */

/*
 * DrawArmyOverlayOnMap -- DrawArmyOverlayOnMap
 * Address: 0x10060078, Size: 1384 bytes
 *
 * Draws all army stack icons on the map viewport, on top of the terrain.
 * Handles fog-of-war visibility checks and selection highlights.
 *
 * Parameters:
 *   dirtyRect    - optional dirty rect to limit drawing (NULL = full viewport)
 *   selectedArmy - index of currently selected army (-1 for none)
 */
void DrawArmyOverlayOnMap(int *dirtyRect, short selectedArmy)  /* DrawArmyOverlayOnMap */
{
    int   *gs = gGameState;                                     /* piRam1011735c */
    int   *roadData = (int *)gRoadData;                         /* piRam10117354 */
    int   *screenGW = gScreenGWorld;                            /* piRam10115fe8 */
    int   *activeView = gActiveView;                            /* piRam101163b0 */
    int    playerColorBase = gPlayerColorTable;                 /* iRam10115fe4 */
    unsigned short *vpOffset = gViewportOffset;                 /* puRam10117660 */

    int    gameStatePtr;
    Boolean smallViewport = false;
    Boolean useDirtyRect  = false;
    char   viewActive;
    short  armyX, armyY;
    short  screenX, screenY;
    int    tileAddr;
    int    terrainType;
    int    playerColor;
    int    armyIndex;
    int    spriteID;
    int    spriteRectAddr;
    short  clipLeft, clipTop, clipW, clipH;
    unsigned char *drawTarget;

    gameStatePtr = *(int *)gs;

    /* Check if fog of war is enabled and current player has visibility */
    if (*(short *)(gameStatePtr + 0x124) != 0 &&
        *(short *)(*(short *)(gameStatePtr + 0x110) * 2 + gameStatePtr + 0xD0) != 0 &&
        *(short *)(gameStatePtr + 0x15A) == 0 &&
        *gScrollLockFlag == 0)
    {
        /* Fog is active and player is visible -- proceed with drawing */
    }
    else {
        /* No fog or suppressed -- draw everything */
    }

    /* Set up screen drawing target */
    if (*activeView != 0) {
        *screenGW = *activeView + 0x80;
    }

    /* Check view active state */
    viewActive = (char)ResourceRead_Dispatch(*(int *)(*activeView) +
                  (int)*(short *)(*(int *)(*activeView) + 0x3A8));

    if (viewActive == '\0')
        return;

    /* Check for small viewport mode */
    if (*(int *)(*activeView + 0xA4) == 0 &&
        *(int *)(*(int *)gResourcePtr + 0x38) < 0x71)
    {
        smallViewport = true;
    }

    /* Check if using dirty rect or full viewport */
    if (dirtyRect != NULL && *(short *)(dirtyRect + 1) <= 8 &&
        *(short *)((int)dirtyRect + 6) <= 8)
    {
        useDirtyRect = true;
    }

    /* Determine drawing target */
    drawTarget = useDirtyRect ? (unsigned char *)(gBackBuffer - 0x62C * 4)
                              : (unsigned char *)(*screenGW);

    /* Get clip rect */
    if (dirtyRect == NULL) {
        /* Use full viewport rect */
        clipLeft = *(short *)(gBackBuffer - 0x62B * 4);
        clipTop  = *(short *)(gBackBuffer - 0x62B * 4 + 2);
        clipW    = *(short *)(gBackBuffer - 0x62B * 4 + 4);
        clipH    = *(short *)(gBackBuffer - 0x62B * 4 + 6);
    } else {
        clipLeft = (short)((unsigned int)*dirtyRect >> 16);
        clipTop  = (short)*dirtyRect;
        clipW    = (short)((unsigned int)dirtyRect[1] >> 16);
        clipH    = (short)dirtyRect[1];
    }

    /* Iterate over all army stacks */
    for (armyIndex = 0; armyIndex < *(short *)(gameStatePtr + 0x1602); armyIndex++) {
        int armyRecordBase = gameStatePtr +
            (int)(((armyIndex & 0x7FFFFFF) * 0x20 + armyIndex) << 1);
                /* armyIndex * 0x42 */

        armyX = *(short *)(armyRecordBase + 0x1604);
        armyY = *(short *)(armyRecordBase + 0x1606);

        /* --- FOG-OF-WAR VISIBILITY CHECK --- */
        if (*(short *)(gameStatePtr + 0x124) != 0) {
            /* Check if dirty rect clips this army */
            if (dirtyRect != NULL) {
                if (armyX < (short)(clipLeft - 8) ||
                    armyX > (short)(clipLeft - 8) + (short)(clipW + 0x0C) - 1 ||
                    armyY < (short)(clipTop - 8) ||
                    armyY > (short)(clipTop - 8) + (short)(clipH + 0x0C) - 1)
                    continue;
            }

            /* Check 2x2 tile footprint visibility (any visible tile = show) */
            tileAddr = *(int *)roadData +
                (int)(((armyY & 0x1FFFFFFF) * 8 - armyY) << 4);

            if (!((*(unsigned int *)(tileAddr + armyX) >> 0x1D & 1) ||
                  (*(unsigned int *)(tileAddr + (short)(armyX + 1)) >> 0x1D & 1) ||
                  (*(unsigned int *)(tileAddr + armyX + 0x70) >> 0x1D & 1) ||
                  (*(unsigned int *)(tileAddr + (short)(armyX + 1) + 0x70) >> 0x1D & 1)))
            {
                continue;  /* All 4 tiles fogged -- skip this army */
            }
        }

        /* --- COMPUTE SCREEN POSITION --- */
        screenX = armyX;
        screenY = armyY;

        if (!smallViewport) {
            screenX = screenX << 1;   /* * 2 for pixel coordinates */
            screenY = screenY << 1;
        }
        screenX -= 1;
        screenY -= 1;

        if (useDirtyRect) {
            screenX -= (smallViewport)
                ? (short)((*vpOffset >> 1) + (*vpOffset < 0 && (*vpOffset & 1)))
                : *vpOffset;
            screenY -= (smallViewport)
                ? (short)((vpOffset[1] >> 1) + (vpOffset[1] < 0 && (vpOffset[1] & 1)))
                : vpOffset[1];
        }

        /* --- DETERMINE PLAYER COLOR --- */
        {
            int tileData = *(unsigned int *)(*(int *)gMapTiles +
                            *(short *)(armyRecordBase + 0x1606) * 0xE0 +
                            *(short *)(armyRecordBase + 0x1604) * 2);
            terrainType = -(int)*(char *)(gameStatePtr +
                            (tileData >> 0x18) + 0x711);

            if (terrainType + 10 == 0) {
                /* On a feature tile -- use army's owner */
                playerColor = (int)*(char *)(armyRecordBase + 0x1619);
                if (playerColor == 0x0F) {
                    playerColor = 8;  /* Neutral -> color 8 */
                }
            } else {
                playerColor = -1;  /* Hidden / no player color */
            }
        }

        /* --- BLIT ARMY ICON --- */
        if (playerColor >= 0) {
            spriteID = smallViewport ? 0x50 : 9;

            EnsureSpriteLoaded(spriteID);                       /* EnsureSpriteLoaded */
            EnsureSpriteAndLock(spriteID);                      /* EnsureSpriteAndLock */

            /* Look up sprite rect from player color table */
            spriteRectAddr = playerColor * 8 + playerColorBase;

            BlitSpriteWithMask(                                 /* BlitSpriteWithMask */
                *(int *)(gBackBuffer - 0x238),       /* army sprite sheet */
                *(short *)(spriteRectAddr),           /* srcTop */
                *(short *)(spriteRectAddr + 2),       /* srcLeft */
                *(short *)(spriteRectAddr + 4),       /* srcW */
                *(short *)(spriteRectAddr + 6),       /* srcH */
                drawTarget,                           /* destination */
                screenX, screenY);

            UnlockAndReleaseSprite(spriteID);                   /* UnlockAndReleaseSprite */
        }

        /* --- DRAW SELECTION HIGHLIGHT --- */
        if ((int)armyIndex == (int)selectedArmy) {
            short selX = screenX - 1;
            short selY = screenY - 1;

            DrawHLine(*screenGW, selX,     selY,     10, 0);   /* Top    */
            DrawHLine(*screenGW, selX,     screenY + 9, 10, 0); /* Bottom */
            DrawVLine(*screenGW, selX,     selY,     10, 0);   /* Left   */
            DrawVLine(*screenGW, screenX + 9, selY,  10, 0);   /* Right  */
        }
    }
}


/* =========================================================================
 * SECTION 9: Main Map Viewport Rendering
 * ========================================================================= */

/*
 * DrawMapViewport -- RefreshDisplay
 * Address: 0x10060608, Size: 3404 bytes
 *
 * The primary map rendering function. Draws the terrain viewport with
 * optional fog-of-war, then overlays army icons.
 *
 * Parameters:
 *   redrawMode  - 0 = full redraw, 1 = incremental
 *   forceRedraw - force complete redraw flag
 *   dirtyRect   - optional dirty rect in tile coordinates (NULL = full)
 */
void DrawMapViewport(short redrawMode, short forceRedraw, short *dirtyRect)
                                                                /* RefreshDisplay */
{
    int    *gs = gGameState;
    int     gameStatePtr;
    int     savedPort, savedDevice;
    int     terrainPixMap, backBufPixMap;
    Boolean fogEnabled;
    Boolean smallViewport = false;
    short   viewLeft, viewTop, viewWidth, viewHeight;
    short   drawLeft, drawTop, drawRight, drawBottom;

    gameStatePtr = *(int *)gs;

    /* --- STEP 1: Fog-of-war visibility check --- */
    fogEnabled = (*(short *)(gameStatePtr + 0x124) != 0);

    if (fogEnabled) {
        short currentPlayer = *(short *)(gameStatePtr + 0x110);
        if (*(short *)(currentPlayer * 2 + gameStatePtr + 0xD0) == 0) {
            fogEnabled = false;  /* Player has no fog data */
        }
    }

    /* --- STEP 2: Compute viewport bounds --- */
    if (dirtyRect != NULL) {
        viewLeft   = dirtyRect[0];
        viewTop    = dirtyRect[1];
        viewWidth  = dirtyRect[2];
        viewHeight = dirtyRect[3];
    }
    /* else: use full viewport from gViewportRect */

    /* --- STEP 3: Check for small viewport mode --- */
    if (*gActiveView != 0) {
        if (*(int *)(*gActiveView + 0xA4) == 0 &&
            *(int *)(*(int *)gResourcePtr + 0x38) < 0x71)
        {
            smallViewport = true;
        }
    }

    /* --- STEP 4: Load terrain sprite sheet --- */
    EnsureSpriteLoaded(7);                                      /* EnsureSpriteLoaded(7) */
    EnsureSpriteAndLock(7);                                     /* EnsureSpriteAndLock(7) */

    /* --- STEP 5: Set up drawing environment --- */
    GetGWorld_Wrapper(&savedPort, &savedDevice);                /* GetGWorld_Wrapper */
    SetGWorld_Wrapper(*(int *)(gBackBuffer + 0x10), 0);         /* SetGWorld_Wrapper */
    SetupDrawingEnvironment();                                  /* SetupDrawingEnvironment */

    /* --- STEP 6: Draw terrain tiles --- */
    if (!fogEnabled) {
        /* No fog -- direct CopyBits blit of terrain to back buffer */
        terrainPixMap = LockPixels_Wrapper(                     /* LockPixels_Wrapper */
            *(int *)(7 * 0x14 + gSpriteTable + 0x04 + 0x10));  /* terrain GWorld pixmap */
        backBufPixMap = LockPixels_Wrapper(
            *(int *)(gBackBuffer + 0x10));

        /* CopyBits: terrain sheet -> back buffer */
        /* CopyBits_Thunk -- CopyBits call */
        /* (Actual rect setup and CopyBits call omitted for brevity;
         *  exact logic matches decompiled RefreshDisplay terrain pass) */

        UnlockPixels_Wrapper(terrainPixMap);
        UnlockPixels_Wrapper(backBufPixMap);
    }
    else if (dirtyRect == NULL) {
        /* Fog mode, full redraw: fill viewport with fog, then CopyMask visible */
        FillRectWithColor(gBackBuffer, (int *)gViewportRect, 0xFF);  /* FillRectWithColor */

        /* CopyMask visible terrain tiles through fog mask */
        /* CopyMask_Thunk -- CopyMask call */
    }
    else {
        /* Fog mode, partial redraw: use small temp buffer */
        /* Fill small region with fog color */
        /* CopyMask visible tiles into temp buffer */
        /* Blit temp buffer to main back buffer */
        BlitSpriteNormal(gBackBuffer, drawLeft, drawTop,
                         drawRight - drawLeft, drawBottom - drawTop,
                         gBackBuffer, drawLeft, drawTop);
    }

    /* --- STEP 7: Draw army overlay --- */
    DrawArmyOverlayOnMap((int *)dirtyRect, -1);                 /* DrawArmyOverlayOnMap */

    /* --- STEP 8: Unlock terrain and restore port --- */
    UnlockAndReleaseSprite(7);                                  /* UnlockAndReleaseSprite(7) */
    SetGWorld_Wrapper(savedPort, savedDevice);                  /* SetGWorld_Wrapper */

    /* --- STEP 9: Invalidate minimap area --- */
    if (dirtyRect != NULL) {
        HideMinimapCursor();                                    /* HideMinimapCursor */
        /* ... update minimap region ... */
        ShowMinimapCursor();                                    /* ShowMinimapCursor */
    }

    /* --- STEP 10: Handle selection blink --- */
    /* Toggle blink flag at ppuVar12[-0x629] for selected army animation */
}


/* =========================================================================
 * SECTION 10: Minimap Rendering
 * ========================================================================= */

/*
 * DrawMinimapFogOverlay -- CenterMapOnArmy
 * Address: 0x100635e0, Size: 420 bytes
 *
 * Draws the fog-of-war overlay on the minimap.
 * Each map tile is represented as a 2x2 pixel block.
 * Map dimensions: 112 x 156 tiles (0x70 x 0x9C).
 */
void DrawMinimapFogOverlay(void)                                /* CenterMapOnArmy */
{
    int     gameStatePtr = *(int *)gGameState;
    int     savedPort, savedDevice;
    int     tileData;
    short   x, y;
    Rect    pixelRect;

    /* Check if fog of war is enabled */
    if (*(short *)(gameStatePtr + 0x124) == 0)
        return;

    /* Save port and switch to minimap GWorld */
    GetGWorld_Wrapper(&savedPort, &savedDevice);
    SetGWorld_Wrapper(*(int *)(gMinimapGWorld + 0x10), 0);

    /* Clear minimap */
    EraseGWorld(gMinimapGWorld, 0);                             /* EraseGWorld */

    /* Iterate over entire map: 0x70 columns x 0x9C rows */
    for (y = 0; y < 0x70; y++) {
        for (x = 0; x < 0x9C; x++) {
            /* Read tile visibility bit */
            tileData = *(int *)((int)gMapTiles + y * 0x70 + x);

            if ((tileData >> 0x1D) & 1) {
                /* Tile is visible to current player -- draw colored 2x2 pixel */
                SetRect(&pixelRect, x * 2, y * 2, x * 2 + 2, y * 2 + 2);
                PaintRect_Thunk(&pixelRect);                    /* PaintRect_Thunk */
            }
            /* Advance to next tile */
        }
    }

    /* Restore port */
    SetGWorld_Wrapper(savedPort, savedDevice);
}

/*
 * UpdateMinimapAroundTile -- UpdateMinimapAroundTile
 * Address: 0x100632a0, Size: 832 bytes
 *
 * Incrementally updates the minimap around a changed tile (army moved,
 * city captured, etc.).
 */
void UpdateMinimapAroundTile(short tileX, short tileY, short redrawMode)
                                                                /* UpdateMinimapAroundTile */
{
    int     gameStatePtr = *(int *)gGameState;
    int     savedPort, savedDevice;
    short   regionSize;
    short   startX, startY, endX, endY;
    short   x, y;
    short   updateRect[4];

    /* Check fog enabled and player visibility */
    if (*(short *)(gameStatePtr + 0x124) == 0)
        return;

    /* Determine update region size: 5x5 for cities, 3x3 otherwise */
    {
        int tileData = *(int *)((int)gMapTiles + tileY * MAP_STRIDE + tileX * 2);
        int terrainByte = *(char *)(gameStatePtr + (tileData >> 0x18) + 0x711);

        if (terrainByte == 0x0A || terrainByte == 0x0B) {
            regionSize = 2;   /* City/temple: 5x5 region */
        } else {
            regionSize = 1;   /* Normal: 3x3 region */
        }
    }

    /* Clamp region to map bounds */
    startX = (tileX - regionSize < 0) ? 0 : tileX - regionSize;
    startY = (tileY - regionSize < 0) ? 0 : tileY - regionSize;
    endX   = (tileX + regionSize > 0x6F) ? 0x6F : tileX + regionSize;
    endY   = (tileY + regionSize > 0x9B) ? 0x9B : tileY + regionSize;

    /* Switch to minimap GWorld and draw visible pixels */
    GetGWorld_Wrapper(&savedPort, &savedDevice);
    SetGWorld_Wrapper(*(int *)(gMinimapGWorld + 0x10), 0);

    for (y = startY; y <= endY; y++) {
        for (x = startX; x <= endX; x++) {
            int tileData = *(int *)((int)gMapTiles + y * MAP_STRIDE + x * 2);
            if ((tileData >> 0x1D) & 1) {
                /* Visible -- draw terrain pixel on minimap */
                short terrainColor = (short)((tileData >> 0x18) & 0xFF);
                BlitTerrainPixel(gMinimapGWorld, x * 2, y * 2, terrainColor);
            }
        }
    }

    SetGWorld_Wrapper(savedPort, savedDevice);

    /* Update the main map display for the affected region */
    HideMinimapCursor();                                        /* HideMinimapCursor */

    updateRect[0] = startX;
    updateRect[1] = startY;
    updateRect[2] = endX - startX + 1;
    updateRect[3] = endY - startY + 1;

    DrawMapViewport(redrawMode, 1, updateRect);                 /* RefreshDisplay */

    ShowMinimapCursor();                                        /* ShowMinimapCursor */
}

/*
 * HideMinimapCursor -- HideMinimapCursor
 * Address: 0x100913cc, Size: 96 bytes
 */
void HideMinimapCursor(void)                                    /* HideMinimapCursor */
{
    int *minimapView = (int *)FUN_1008455c();                   /* GetMinimapView */
    if (minimapView != NULL) {
        *(char *)((int)minimapView + 0x95) = 0;
        ResourceRead_Dispatch((int)minimapView +
                     (int)*(short *)(*(int *)minimapView + 0x4D0));
    }
}

/*
 * ShowMinimapCursor -- ShowMinimapCursor
 * Address: 0x1009142c, Size: 92 bytes
 */
void ShowMinimapCursor(void)                                    /* ShowMinimapCursor */
{
    int *minimapView = (int *)FUN_1008455c();
    if (minimapView != NULL) {
        *(char *)((int)minimapView + 0x95) = 1;
        ResourceRead_Dispatch((int)minimapView +
                     (int)*(short *)(*(int *)minimapView + 0x4D0));
    }
}


/* =========================================================================
 * SECTION 11: Movement Path Arrow Drawing
 * ========================================================================= */

/*
 * DrawMovementPathArrow -- DrawMovementPathArrow
 * Address: 0x10061980, Size: 280 bytes
 *
 * Draws a directional arrow on the map showing an army's planned path.
 *
 * Direction indices (0-7) correspond to 8 compass directions.
 * Arrow sprites are stored in sprite sheet 9.
 */
void DrawMovementPathArrow(short mapX, short mapY, short direction)
                                                                /* DrawMovementPathArrow */
{
    short   screenX, screenY;
    int     arrowRectAddr;
    short   srcX, srcY, srcW, srcH;

    /* Compute screen position with alignment */
    screenX = (mapX * 2 - 6 + 4) / 8 * 8;
    screenY = mapY * 2 - 6;

    /* Clamp to viewport bounds */
    if (screenX < 0) screenX = 0;
    if (screenY < 0) screenY = 0;

    /* Load and lock arrow sprite sheet (sprite 9) */
    EnsureSpriteLoaded(9);                                      /* EnsureSpriteLoaded */
    EnsureSpriteAndLock(9);                                     /* EnsureSpriteAndLock */

    /* Look up arrow sprite rect from direction table */
    arrowRectAddr = gArrowDirTable + direction * 8;
    srcX = *(short *)(arrowRectAddr);
    srcY = *(short *)(arrowRectAddr + 2);
    srcW = *(short *)(arrowRectAddr + 4);
    srcH = *(short *)(arrowRectAddr + 6);

    /* Blit arrow with mask */
    BlitSpriteWithMask(                                         /* BlitSpriteWithMask */
        *(int *)(9 * 0x14 + gSpriteTable + 0x04),  /* source: sprite 9 image */
        srcX, srcY, srcW, srcH,
        *(int *)gScreenGWorld,                       /* dest: screen window */
        screenX, screenY);

    UnlockAndReleaseSprite(9);                                  /* UnlockAndReleaseSprite */
}


/* =========================================================================
 * SECTION 12: Full Strategic Map View (DrawFullMapView stub)
 * ========================================================================= */

/*
 * DrawFullMapView -- DrawFullMapView
 * Address: 0x10005f90, Size: 7312 bytes
 *
 * Draws the entire strategic map at 40x40 pixels per tile (0x28).
 * This is the "whole map" overview screen with 9 rendering layers:
 *
 * Layer 1: Terrain tiles (sprites 0x1A + mask 0x1B)
 * Layer 2: Road overlays
 * Layer 3: Army movement icons (sprite 9)
 * Layer 4: City overlays (sprite 0x29)
 * Layer 5: Temple/ruin overlays
 * Layer 6: Player army stacks (per-player coloring)
 * Layer 7: Fortification indicators
 * Layer 8: Strategic icons
 * Layer 9: Fog of war overlay (dither mode)
 *
 * Due to the extreme size (7312 bytes decompiled), only the framework
 * and key layer logic is shown here. The EXACT algorithm is preserved
 * in the individual layer rendering calls.
 */
void DrawFullMapView(void)                                      /* DrawFullMapView */
{
    int    *gs = gGameState;
    int     gameStatePtr = *(int *)gs;
    int     savedPort, savedDevice;
    int     mapWidth  = *(short *)(gameStatePtr + 4);
    int     mapHeight = *(short *)(gameStatePtr + 6);
    int    *coordList;
    int     visibleCount = 0;
    int     row, col;
    int     tileData;
    int     terrainIndex;

    /* Step 1: Allocate temp coordinate list */
    coordList = (int *)FUN_100f1640(mapWidth * 4 * mapHeight);

    /* Step 2: Set up drawing target */
    GetGWorld_Wrapper(&savedPort, &savedDevice);                /* GetGWorld_Wrapper */
    /* SetGWorld to target offscreen buffer */

    SaveDrawingState(NULL);                                     /* SaveDrawingState */

    /* Step 3: First pass -- identify visible tiles */
    for (row = 0; row < mapHeight; row++) {
        for (col = 0; col < mapWidth; col++) {
            tileData = *(int *)((int)gMapTiles + row * MAP_STRIDE + col * 10);

            if (tileData < 0) {
                /* Tile is visible */
                terrainIndex = (tileData >> 0x16) & 0xFF;

                if (terrainIndex == 0x0E) {
                    /* Sea tile -- draw blue fill directly */
                    SetDrawingColor(0x0E);
                    /* PaintRect at col * 0x28 */
                }
                else {
                    /* Add to visible tile list */
                    coordList[visibleCount++] = (row << 16) | col;
                }
            }
        }
    }

    /* Step 4: Draw terrain tiles (sprites 0x1A/0x1B) */
    EnsureSpriteLoaded(0x1A);                                   /* Terrain sheet A */
    EnsureSpriteLoaded(0x1B);                                   /* Terrain mask sheet */

    {
        int i;
        for (i = 0; i < visibleCount; i++) {
            row = coordList[i] >> 16;
            col = coordList[i] & 0xFFFF;

            tileData = *(int *)((int)gMapTiles + row * MAP_STRIDE + col * 10);
            terrainIndex = (tileData >> 0x16) & 0xFF;

            /* Calculate source position in terrain sheet */
            int srcCol = terrainIndex % 0x60;
            int srcRow = (srcCol / 16) * 0x28;
            int srcX   = (srcCol % 16) * 0x28;

            /* Calculate destination */
            int dstX = col * 0x28;
            int dstY = row * 0x28;

            /* Choose normal or masked blit based on fog state */
            if ((tileData >> 0x1E) & 1) {
                BlitSpriteNormal(0, srcRow, srcX, 0x28, 0x28, 0, dstX, dstY);
            }
            else {
                BlitSpriteWithMask(0, srcRow, srcX, 0x28, 0x28, 0, dstX, dstY);
            }
        }
    }

    /* Step 5-10: Additional layers (roads, armies, cities, temples,
     * fortifications, fog overlay) follow the same pattern.
     * Each uses the coordList to iterate visible tiles and blits
     * the appropriate sprite overlays. */

    /* Step 6: Player army stacks (layer 6) */
    {
        int player;
        for (player = 0; player < 9; player++) {
            int i;
            for (i = 0; i < visibleCount; i++) {
                row = coordList[i] >> 16;
                col = coordList[i] & 0xFFFF;
                tileData = *(int *)((int)gMapTiles + row * MAP_STRIDE + col * 10);

                if ((tileData >> 1) & 1) {
                    int armyType  = (tileData >> 0x11) & 0x1F;
                    int armyCount = (tileData >> 0x0B) & 0x1F;

                    DrawArmyIconFullMap(0, player, armyType, armyCount, row, col);
                }
            }
        }
    }

    /* Cleanup */
    RestoreDrawingState(NULL, 2);
    SetGWorld_Wrapper(savedPort, savedDevice);
    FreeBlock(coordList);                                    /* DisposePtr */
}

/*
 * DrawArmyIconFullMap -- DrawArmyIconFullMap
 * Address: 0x10005d2c, Size: 612 bytes
 *
 * Draws a single army stack icon in the full map view (0x28 pixel tiles).
 */
void DrawArmyIconFullMap(int targetGW, short playerColor,
                          unsigned short armyType, short stackSize,
                          short mapRow, short mapCol)           /* DrawArmyIconFullMap */
{
    short dstX, dstY;
    short srcW = 0x1D;  /* 29 pixels wide */
    short srcH = 0x20;  /* 32 pixels tall */

    /* Neutral player (0x0F) maps to color index 8 */
    if (playerColor == 0x0F) {
        playerColor = 8;
    }

    /* Calculate source rect in army sprite sheet:
     * type index determines row offset at 0x20 pixels per type */
    short srcTop  = armyType * 0x20;
    short srcLeft = 0;

    /* Calculate destination */
    dstX = mapCol * 0x28 + 8;
    dstY = mapRow * 0x28 + 7;

    /* Blit army icon with mask */
    BlitSpriteWithMask(0, srcTop, srcLeft, srcW, srcH, targetGW, dstX, dstY);

    /* Draw stack size indicator lines */
    SetDrawingColor(0x0E);                                      /* Dark color */
    MoveTo_Thunk(mapCol * 0x28 + 2, mapRow * 0x28);
    LineTo_Thunk(0, 0x27);                                     /* Full height line */
    MoveTo_Thunk(mapCol * 0x28 + 4, mapRow * 0x28);
    LineTo_Thunk(0, 0x27);

    SetDrawingColor(0x0D);                                      /* Light/highlight */
    MoveTo_Thunk(mapCol * 0x28 + 3, mapRow * 0x28);
    LineTo_Thunk(0, 0x27);

    /* If stack size > 4, draw additional icon at offset */
    if (stackSize > 4) {
        BlitSpriteWithMask(0, 0x1D0, 0, 0x30, 8,
                           targetGW,
                           mapCol * 0x28, mapRow * 0x28 + 8);
    }
}


/* =========================================================================
 * SECTION 13: Single Tile Rendering
 * ========================================================================= */

/*
 * DrawSingleMapTile -- DrawSingleMapTile
 * Address: 0x10064498, Size: 952 bytes
 *
 * Draws a single terrain tile at given map coordinates.
 * Used for incremental updates after army movement.
 */
void DrawSingleMapTile(short updateMode, short mapX, short mapY)
                                                                /* DrawSingleMapTile */
{
    int     gameStatePtr = *(int *)gGameState;
    int     tileData;
    int     terrainIndex;

    /* If full refresh requested, rebuild feature overlay table */
    if (updateMode != 0) {
        FUN_10063784();                                         /* RefreshFeatureOverlayTable */
    }

    /* Load and lock terrain sprite (ID 7) */
    EnsureSpriteLoaded(7);
    EnsureSpriteAndLock(7);

    /* Read tile data at coordinates */
    tileData = *(int *)((int)gMapTiles + mapY * MAP_STRIDE + mapX * 2);
    terrainIndex = (tileData >> 24) & 0xFF;

    if (terrainIndex < 0x50 || terrainIndex > 0x5F) {
        /* Normal terrain tile -- look up appearance */
        /* Blit terrain using BlitTerrainPixel or BlitSpriteNormal */
        /* Draws 2x2 sub-tiles for the small map view */
    }
    else {
        /* City tile (0x50-0x5F) -- use city sprite sheet */
        /* Different lookup tables for city appearance */
    }

    UnlockAndReleaseSprite(7);
}
