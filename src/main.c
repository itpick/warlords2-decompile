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

/* Framework entry — MacApp application initialization */
extern void DoPostCreate(void);

/* Game command dispatcher (framework/framework.c) */
extern void DoMenuCommand(int *self, int cmdNumber);

/* Document object — the TDocumentWarlords instance */
extern void *puRam1011734c;

/* Window globals */
extern int *gMainGameWindow;
extern int *gOverviewWindow;
extern int *gInfoWindow;


/* HandleMenuChoice — translate MenuSelect/MenuKey result to DoMenuCommand call */
static void HandleMenuChoice(long menuResult)
{
    short menuID   = (short)((menuResult >> 16) & 0xFFFF);
    short menuItem = (short)(menuResult & 0xFFFF);

    if (menuID == 0)
        return;

    switch (menuID) {
    case 1:     /* Apple menu */
        if (menuItem == 1) {
            /* About Warlords II */
            DoMenuCommand((int *)*(int *)puRam1011734c, 0x640);
        }
        break;

    case 2:     /* File menu */
        switch (menuItem) {
        case 1:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x6A5); break;  /* Save */
        case 3:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x641); break;  /* New Game */
        }
        break;

    case 4:     /* Orders menu */
        switch (menuItem) {
        case 1:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x3E8); break;  /* End Turn */
        case 2:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x3EE); break;  /* Select Army */
        case 3:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x3EF); break;  /* Deselect */
        }
        break;

    case 7:     /* View menu */
        switch (menuItem) {
        case 1:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x76F); break;  /* Side Panel */
        case 2:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x770); break;  /* Overview */
        case 3:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x771); break;  /* Info */
        }
        break;

    case 9:     /* Game menu */
        switch (menuItem) {
        case 1:  DoMenuCommand((int *)*(int *)puRam1011734c, 0x6A8); break;  /* Sound */
        }
        break;
    }

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

    /* Initialize MacApp framework and all game subsystems.
     * DoPostCreate initializes behaviors, allocates game buffers,
     * and (at the end) calls DoMakeWindows which creates the
     * main game window, overview, info panel, and loads the menu bar. */
    DoPostCreate();

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
