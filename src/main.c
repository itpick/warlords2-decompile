/*
 * main.c - Entry point for Warlords II (Reconstructed)
 *
 * Classic Mac OS PPC application entry point.
 * Initializes the Mac Toolbox, calls DoPostCreate for MacApp framework
 * initialization, then runs a proper Mac event loop with menu dispatch,
 * window management, and update/activate event handling.
 */

#include "warlords2.h"

#ifndef MODERN_BUILD

/*
 * BuildMenuBar - Create menus programmatically using NewMenu/AppendMenu.
 * Avoids needing to parse CMNU resources (MacApp command menu format).
 */
static void BuildMenuBar(void)
{
    MenuHandle m;

    /* Apple menu (ID 1) */
    m = NewMenu(1, "\p\x14");  /* Apple logo character */
    AppendMenu(m, "\pAbout Warlords II\xc9");
    AppendMenu(m, "\p(-");
    InsertMenu(m, 0);
    AppendResMenu(m, 'DRVR');

    /* File menu (ID 2) */
    m = NewMenu(2, "\pFile");
    AppendMenu(m, "\pNew");
    AppendMenu(m, "\pOpen\xc9/O");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pClose/W");
    AppendMenu(m, "\pSave/S");
    AppendMenu(m, "\pSave As\xc9");
    AppendMenu(m, "\pRevert");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pQuit/Q");
    InsertMenu(m, 0);

    /* Edit menu (ID 3) */
    m = NewMenu(3, "\pEdit");
    AppendMenu(m, "\pUndo/Z");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pCut/X");
    AppendMenu(m, "\pCopy/C");
    AppendMenu(m, "\pPaste/V");
    AppendMenu(m, "\pClear");
    AppendMenu(m, "\pSelect All/A");
    InsertMenu(m, 0);

    /* Orders menu (ID 4) */
    m = NewMenu(4, "\pOrders");
    AppendMenu(m, "\pBuild");
    AppendMenu(m, "\pRaze");
    AppendMenu(m, "\pDefend");
    AppendMenu(m, "\pSearch Ruins");
    AppendMenu(m, "\pNext Army/N");
    AppendMenu(m, "\pWait/K");
    AppendMenu(m, "\pSkip turn");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pDrop Items");
    AppendMenu(m, "\pUse Item");
    AppendMenu(m, "\pTake Items");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pSelect All in Stack");
    AppendMenu(m, "\pSelect All in City");
    AppendMenu(m, "\pDeselect");
    AppendMenu(m, "\pSet Production/P");
    InsertMenu(m, 0);

    /* Reports menu (ID 5) */
    m = NewMenu(5, "\pReports");
    AppendMenu(m, "\pArmy Report");
    AppendMenu(m, "\pCity Report");
    AppendMenu(m, "\pGold Report");
    AppendMenu(m, "\pWinning Report");
    AppendMenu(m, "\pHero Report");
    AppendMenu(m, "\pItem Report");
    InsertMenu(m, 0);

    /* Heroes menu (ID 6) */
    m = NewMenu(6, "\pHeroes");
    AppendMenu(m, "\pHero Abilities");
    AppendMenu(m, "\pHero Items");
    AppendMenu(m, "\pHero Info");
    InsertMenu(m, 0);

    /* View menu (ID 7) */
    m = NewMenu(7, "\pView");
    AppendMenu(m, "\pZoom In/+");
    AppendMenu(m, "\pZoom Out/-");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pCenter on Army");
    AppendMenu(m, "\pFind City\xc9");
    AppendMenu(m, "\pOverview Map");
    InsertMenu(m, 0);

    /* History menu (ID 8) */
    m = NewMenu(8, "\pHistory");
    AppendMenu(m, "\pReplay Turn");
    AppendMenu(m, "\pView Battle Log");
    AppendMenu(m, "\pView Diplomacy");
    InsertMenu(m, 0);

    /* Game menu (ID 9) */
    m = NewMenu(9, "\pGame");
    AppendMenu(m, "\pNew Game\xc9");
    AppendMenu(m, "\pPreferences\xc9");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pEnd Turn/E");
    AppendMenu(m, "\p(-");
    AppendMenu(m, "\pSurrender");
    InsertMenu(m, 0);

    DrawMenuBar();
}


/* HandleMenuChoice — translate MenuSelect/MenuKey result */
static void HandleMenuChoice(long menuResult)
{
    short menuID   = (short)((menuResult >> 16) & 0xFFFF);
    short menuItem = (short)(menuResult & 0xFFFF);

    if (menuID == 0)
        return;

    /* For now, just highlight and unhighlight — no game logic yet.
     * DoMenuCommand requires fully initialized game state (document object,
     * global pointers, etc.) which we don't have without MacApp framework. */

    HiliteMenu(0);
}


/* HandleMouseDown — route mouseDown to appropriate handler */
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
            /* Hide rather than close — game windows stay alive */
            HideWindow(whichWindow);
        }
        break;

    case inContent:
        if (whichWindow != FrontWindow()) {
            SelectWindow(whichWindow);
        }
        /* Content clicks in the map window could drive game interaction.
         * The original routed these through MacApp's TView::DoMouseCommand.
         * For now, just ensure the window comes to front. */
        break;

    case inSysWindow:
        SystemClick(event, whichWindow);
        break;
    }
}


/* HandleUpdateEvent — redraw window contents */
static void HandleUpdate(EventRecord *event)
{
    WindowPtr win = (WindowPtr)event->message;

    BeginUpdate(win);
    /* The original MacApp framework called TView::Draw for each view.
     * For now, just erase to white so the window isn't garbled. */
    EraseRect(&win->portRect);
    EndUpdate(win);
}


int main(void)
{
    EventRecord event;
    Boolean     done = false;

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
    /* Show PICT 1000 (title artwork) in a centered window */
    {
        PicHandle   splashPic;
        WindowPtr   splashWin;
        Rect        picRect, winRect;
        EventRecord splashEvt;

        splashPic = (PicHandle)GetResource('PICT', 1000);
        if (splashPic != NULL) {
            picRect = (*splashPic)->picFrame;

            /* Center on screen */
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

                /* Wait for click or keypress */
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
    /* "Would you like the screen changed to 256 colors?" */
    Alert(1010, NULL);

    /* Build menus programmatically (avoids CMNU parsing) */
    BuildMenuBar();

    /* Create main game window */
    {
        Rect mainRect;
        SetRect(&mainRect, 2, 40, 510, 382);
        NewCWindow(NULL, &mainRect, "\pWarlords II", true,
                   documentProc, (WindowPtr)-1L, false, 0);
    }

    /* Main event loop — replaces MacApp's TApplication::Run().
     * Handles mouse, keyboard, update, activate, and Apple Events. */
    while (!done) {
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
                    done = true;
                } else {
                    /* Route Cmd+key through MenuKey for menu shortcuts */
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
                /* Window activated — could refresh game state */
                SelectWindow(win);
            }
            break;
        }

        case kHighLevelEvent:
            /* Handle AppleEvents (required for System 7+) */
            break;
        }
    }

    return 0;
}

#else /* MODERN_BUILD */

/* Modern build: structural verification only — no Mac Toolbox available */
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    return 0;
}

#endif /* MODERN_BUILD */
