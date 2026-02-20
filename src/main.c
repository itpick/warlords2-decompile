/*
 * main.c - Entry point for Warlords II (Reconstructed)
 *
 * Classic Mac OS PPC application entry point.
 * Creates 3 game windows (main map, overview minimap, info panel)
 * and menus directly, bypassing the MacApp framework.
 * Prompts the user to open a scenario file via StandardGetFile,
 * loads MAP/SCN data via Resource Manager, and renders a terrain
 * color grid in the main window.
 */

#include "warlords2.h"

#ifndef MODERN_BUILD

#include <StandardFile.h>

/* Window and buffer globals */
extern int  *gMainGameWindow;    /* piRam10116208 */
extern int  *gOverviewWindow;    /* piRam10115fa4 */
extern int  *gInfoWindow;        /* piRam10116200 */
extern pint *gGameState;         /* piRam1011735c */
extern pint *gMapTiles;          /* piRam10117358 */

/* App state */
static Boolean sDone      = false;

/* Map loading state */
static Boolean sMapLoaded = false;
static short   sMapWidth  = 0;
static short   sMapHeight = 0;

/* Terrain color table: maps terrain byte value to RGB.
 * Terrain types 0-8 roughly correspond to:
 *   0=road/open, 1=plains, 2=forest, 3=hills, 4=mountain,
 *   5=swamp, 6=shore/coast, 7=shallow water, 8=deep water
 * These are approximate - the real game uses indexed sprites. */
static RGBColor sTerrainColors[] = {
    { 0xCC00, 0xCC00, 0x9900 },  /* 0: tan/road */
    { 0x6600, 0xCC00, 0x3300 },  /* 1: green/plains */
    { 0x0000, 0x8800, 0x0000 },  /* 2: dark green/forest */
    { 0x9900, 0x8800, 0x6600 },  /* 3: brown/hills */
    { 0x7700, 0x7700, 0x7700 },  /* 4: gray/mountain */
    { 0x6600, 0x9900, 0x6600 },  /* 5: olive/swamp */
    { 0xDD00, 0xCC00, 0x8800 },  /* 6: sand/coast */
    { 0x3300, 0x6600, 0xCC00 },  /* 7: light blue/shallow */
    { 0x0000, 0x3300, 0x9900 },  /* 8: dark blue/deep water */
};
#define NUM_TERRAIN_COLORS 9


/* ===================================================================
 * TryLoadScenario — Open a file and load MAP resource directly
 * =================================================================== */
static void TryLoadScenario(void)
{
    StandardFileReply reply;
    short             refNum;
    Handle            mapHdl;

    /* Let user pick any file */
    StandardGetFile(NULL, -1, NULL, &reply);

    if (!reply.sfGood)
        return;

    /* Open the file's resource fork */
    refNum = FSpOpenResFile(&reply.sfFile, fsRdPerm);
    if (refNum == -1)
        return;

    UseResFile(refNum);

    /* Try to load MAP resource (type 'MAP ', ID 10000) */
    mapHdl = Get1Resource('MAP ', 10000);
    if (mapHdl != NULL) {
        long mapSize = GetHandleSize(mapHdl);

        HLock(mapHdl);

        /* Allocate map buffer if DoPostCreate didn't */
        if (*gMapTiles == 0) {
            *gMapTiles = (int)NewPtr(0x8880);
        }

        if (*gMapTiles != 0) {
            /* Copy MAP data - clamp to buffer size */
            long copySize = mapSize;
            if (copySize > 0x8880) copySize = 0x8880;
            BlockMoveData(*mapHdl, (void *)*gMapTiles, copySize);

            sMapLoaded = true;
            /* Standard map: 112 wide x 156 tall */
            sMapWidth  = 112;
            sMapHeight = (short)(copySize / (112 * 2));
            if (sMapHeight > 156) sMapHeight = 156;
        }

        HUnlock(mapHdl);
        ReleaseResource(mapHdl);
    }

    /* Also try to load SCN resource into game state */
    {
        Handle scnHdl = Get1Resource('SCN ', 10000);
        if (scnHdl != NULL) {
            long scnSize = GetHandleSize(scnHdl);
            HLock(scnHdl);

            if (*gGameState == 0) {
                *gGameState = (int)NewPtr(0x2FCC);
            }
            if (*gGameState != 0) {
                long copySize = scnSize;
                if (copySize > 0x2FCC) copySize = 0x2FCC;
                BlockMoveData(*scnHdl, (void *)*gGameState, copySize);
            }
            HUnlock(scnHdl);
            ReleaseResource(scnHdl);
        }
    }

    CloseResFile(refNum);

    /* Force redraw of all windows */
    if (sMapLoaded) {
        if (*gMainGameWindow != 0)
            InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
        if (*gOverviewWindow != 0)
            InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
    }
}


/* ===================================================================
 * DrawMapInWindow — Draw terrain minimap directly using QuickDraw
 * =================================================================== */
static void DrawMapInWindow(WindowPtr win)
{
    unsigned char *mapData;
    Rect           winRect;
    short          x, y;
    short          pixW, pixH;
    short          offsetX, offsetY;

    if (!sMapLoaded || *gMapTiles == 0)
        return;

    mapData = (unsigned char *)*gMapTiles;
    winRect = win->portRect;

    /* Calculate pixel size: fit map in window
     * Map is 112 x N tiles. Scale to fit. */
    pixW = (winRect.right - winRect.left) / sMapWidth;
    pixH = (winRect.bottom - winRect.top) / sMapHeight;
    if (pixW < 1) pixW = 1;
    if (pixH < 1) pixH = 1;
    /* Use the smaller dimension to keep square pixels */
    if (pixH < pixW) pixW = pixH;
    if (pixW < pixH) pixH = pixW;

    /* Center in window */
    offsetX = winRect.left + ((winRect.right - winRect.left) - sMapWidth * pixW) / 2;
    offsetY = winRect.top + ((winRect.bottom - winRect.top) - sMapHeight * pixH) / 2;

    for (y = 0; y < sMapHeight; y++) {
        for (x = 0; x < sMapWidth; x++) {
            /* Each tile is 2 bytes. On PPC (big-endian):
             * byte 0 (high) = terrain/flags, byte 1 (low) = graphic index.
             * The upper nibble of byte 0 often encodes terrain type. */
            unsigned short tileOffset = y * (112 * 2) + x * 2;
            unsigned char  hi = mapData[tileOffset];
            /* Try terrain from upper nibble of high byte */
            short terrainIdx = (hi >> 4) & 0x0F;
            if (terrainIdx >= NUM_TERRAIN_COLORS)
                terrainIdx = 0;

            RGBForeColor(&sTerrainColors[terrainIdx]);

            {
                Rect pixRect;
                SetRect(&pixRect,
                    offsetX + x * pixW,
                    offsetY + y * pixH,
                    offsetX + x * pixW + pixW,
                    offsetY + y * pixH + pixH);
                PaintRect(&pixRect);
            }
        }
    }

    /* Label */
    {
        RGBColor black = { 0, 0, 0 };
        RGBForeColor(&black);
        TextFont(3);   /* Geneva */
        TextSize(9);
        MoveTo(winRect.left + 4, winRect.bottom - 4);
        DrawString("\pMap loaded - terrain view");
    }
}


/* ===================================================================
 * DrawOverviewInWindow — Simple minimap in overview window
 * =================================================================== */
static void DrawOverviewInWindow(WindowPtr win)
{
    unsigned char *mapData;
    Rect           r;
    short          x, y;

    if (!sMapLoaded || *gMapTiles == 0)
        return;

    mapData = (unsigned char *)*gMapTiles;
    r = win->portRect;

    /* Draw 1 pixel per tile */
    for (y = 0; y < sMapHeight && y < (r.bottom - r.top); y++) {
        for (x = 0; x < sMapWidth && x < (r.right - r.left); x++) {
            unsigned short tileOffset = y * (112 * 2) + x * 2;
            unsigned char  hi = mapData[tileOffset];
            short terrainIdx = (hi >> 4) & 0x0F;
            if (terrainIdx >= NUM_TERRAIN_COLORS)
                terrainIdx = 0;

            RGBForeColor(&sTerrainColors[terrainIdx]);
            MoveTo(r.left + x, r.top + y);
            LineTo(r.left + x, r.top + y);
        }
    }
}


/* ===================================================================
 * HandleMenuChoice — translate MenuSelect/MenuKey result
 * =================================================================== */
static void HandleMenuChoice(long menuResult)
{
    short menuID   = (short)((menuResult >> 16) & 0xFFFF);
    short menuItem = (short)(menuResult & 0xFFFF);

    if (menuID == 0)
        return;

    /* File menu (ID 2): item 1 = Open, item 3 = Quit */
    if (menuID == 2 && menuItem == 1) {
        TryLoadScenario();
    } else if (menuID == 2 && menuItem == 3) {
        sDone = true;
    }

    HiliteMenu(0);
}


/* ===================================================================
 * HandleMouseDown — route mouseDown to appropriate handler
 * =================================================================== */
static void HandleMouseDown(EventRecord *event)
{
    WindowPtr   whichWindow;
    short       partCode;

    partCode = FindWindow(event->where, &whichWindow);

    switch (partCode) {
    case inMenuBar:
        HandleMenuChoice(MenuSelect(event->where));
        break;

    case inDrag:
        DragWindow(whichWindow, event->where, &qd.screenBits.bounds);
        break;

    case inGoAway:
        if (TrackGoAway(whichWindow, event->where)) {
            HideWindow(whichWindow);
        }
        break;

    case inContent:
        if (whichWindow != FrontWindow()) {
            SelectWindow(whichWindow);
        }
        break;

    case inSysWindow:
        SystemClick(event, whichWindow);
        break;
    }
}


/* ===================================================================
 * HandleUpdate — redraw window contents
 * =================================================================== */
static void HandleUpdate(EventRecord *event)
{
    WindowPtr win = (WindowPtr)event->message;
    Rect      r;

    SetPort(win);
    BeginUpdate(win);

    r = win->portRect;
    EraseRect(&r);

    if (gMainGameWindow != NULL &&
        win == (WindowPtr)*gMainGameWindow) {
        if (sMapLoaded) {
            DrawMapInWindow(win);
        } else {
            /* Show title art until a scenario is loaded */
            PicHandle pic = (PicHandle)GetResource('PICT', 1000);
            if (pic != NULL) {
                DrawPicture(pic, &r);
            }
            TextFont(3);
            TextSize(9);
            MoveTo(r.left + 4, r.bottom - 4);
            DrawString("\pUse File > Open to load a scenario");
        }
    }
    else if (gOverviewWindow != NULL &&
             win == (WindowPtr)*gOverviewWindow) {
        if (sMapLoaded) {
            DrawOverviewInWindow(win);
        } else {
            TextFont(3);
            TextSize(9);
            MoveTo(r.left + 4, r.top + 14);
            DrawString("\pOverview");
        }
    }
    else if (gInfoWindow != NULL &&
             win == (WindowPtr)*gInfoWindow) {
        TextFont(3);
        TextSize(9);
        MoveTo(r.left + 4, r.top + 14);
        DrawString("\pInfo Panel");
    }

    EndUpdate(win);
}


/* ===================================================================
 * main — Application entry point
 * =================================================================== */
int main(void)
{
    EventRecord event;

    /* Classic Mac OS Toolbox initialization sequence */
    InitGraf(&qd.thePort);
    InitFonts();
    InitWindows();
    InitMenus();
    TEInit();
    InitDialogs(NULL);
    FlushEvents(everyEvent, 0);
    InitCursor();

    /* === Splash Screen === */
    {
        PicHandle   splashPic;
        WindowPtr   splashWin;
        Rect        picRect, winRect;
        EventRecord splashEvt;

        splashPic = (PicHandle)GetResource('PICT', 1000);
        if (splashPic != NULL) {
            picRect = (*splashPic)->picFrame;
            {
                short pw = picRect.right - picRect.left;
                short ph = picRect.bottom - picRect.top;
                short sx = (qd.screenBits.bounds.right - pw) / 2;
                short sy = (qd.screenBits.bounds.bottom - ph) / 2;
                SetRect(&winRect, sx, sy, sx + pw, sy + ph);
            }
            splashWin = NewCWindow(NULL, &winRect, "\p", true,
                                   plainDBox, (WindowPtr)-1L, false, 0);
            if (splashWin != NULL) {
                SetPort(splashWin);
                DrawPicture(splashPic, &splashWin->portRect);
                while (1) {
                    WaitNextEvent(everyEvent, &splashEvt, 60, NULL);
                    if (splashEvt.what == mouseDown ||
                        splashEvt.what == keyDown)
                        break;
                }
                DisposeWindow(splashWin);
            }
        }
    }

    /* === 256-Color Prompt (ALRT 1010) === */
    Alert(1010, NULL);

    /* === Create windows and menus directly (bypass MacApp framework) === */
    {
        Rect    mainRect, overRect, infoRect;

        /* Build menus programmatically (CMNU resources are MacApp-only) */
        {
            MenuHandle appleMenu, fileMenu, editMenu;

            appleMenu = NewMenu(1, "\p\024");  /* Apple menu (0x14 = apple icon) */
            AppendMenu(appleMenu, "\pAbout Warlords II...");
            AppendResMenu(appleMenu, 'DRVR');
            InsertMenu(appleMenu, 0);

            fileMenu = NewMenu(2, "\pFile");
            AppendMenu(fileMenu, "\pOpen.../O;(-;Quit/Q");
            InsertMenu(fileMenu, 0);

            editMenu = NewMenu(3, "\pEdit");
            AppendMenu(editMenu, "\pUndo/Z;(-;Cut/X;Copy/C;Paste/V;Clear");
            InsertMenu(editMenu, 0);

            DrawMenuBar();
        }

        /* Main game window */
        SetRect(&mainRect, 2, 40, 510, 382);
        *gMainGameWindow = (pint)NewCWindow(
            NULL, &mainRect,
            "\pWarlords II", true,
            documentProc, (WindowPtr)-1L, false, 0);

        /* Overview (minimap) window */
        SetRect(&overRect, 514, 40, 638, 200);
        *gOverviewWindow = (pint)NewCWindow(
            NULL, &overRect,
            "\pOverview", true,
            documentProc, (WindowPtr)-1L, false, 0);

        /* Info panel window */
        SetRect(&infoRect, 514, 204, 638, 382);
        *gInfoWindow = (pint)NewCWindow(
            NULL, &infoRect,
            "\pInfo", true,
            documentProc, (WindowPtr)-1L, false, 0);

        /* Allocate game data buffers manually */
        *gGameState = (pint)NewPtrClear(0x2FCC);
        *gMapTiles  = (pint)NewPtrClear(0x8880);
    }

    /* Bring game windows to front */
    if (*gMainGameWindow != 0)
        SelectWindow((WindowPtr)*gMainGameWindow);

    /* === Prompt user to load a scenario file === */
    TryLoadScenario();

    /* Main event loop */
    while (!sDone) {
        WaitNextEvent(everyEvent, &event, 6, NULL);

        switch (event.what) {
        case mouseDown:
            HandleMouseDown(&event);
            break;

        case keyDown:
        case autoKey:
            if (event.modifiers & cmdKey) {
                char key = event.message & charCodeMask;
                if (key == 'q' || key == 'Q') {
                    sDone = true;
                } else if (key == 'o' || key == 'O') {
                    TryLoadScenario();
                } else {
                    HandleMenuChoice(MenuKey(key));
                }
            }
            break;

        case updateEvt:
            HandleUpdate(&event);
            break;

        case activateEvt: {
            WindowPtr win = (WindowPtr)event.message;
            if (event.modifiers & activeFlag) {
                SelectWindow(win);
            }
            break;
        }

        case kHighLevelEvent:
            break;
        }
    }

    return 0;
}

#else /* MODERN_BUILD */

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    return 0;
}

#endif /* MODERN_BUILD */
