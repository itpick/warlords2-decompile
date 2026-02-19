/*
 * main.c - Entry point for Warlords II (Reconstructed)
 *
 * Classic Mac OS PPC application entry point.
 * Initializes the Mac Toolbox, then calls into the MacApp framework
 * initialization chain (DoPostCreate) which sets up the game.
 */

#include "warlords2.h"

#ifndef MODERN_BUILD

/* Framework entry — MacApp application initialization */
extern void DoPostCreate(void);

int main(void)
{
    /* Classic Mac OS Toolbox initialization sequence */
    InitGraf(&qd.thePort);
    InitFonts();
    InitWindows();
    InitMenus();
    TEInit();
    InitDialogs(NULL);
    FlushEvents(everyEvent, 0);
    InitCursor();

    /* Initialize MacApp framework and all game subsystems */
    DoPostCreate();

    /* Main event loop
     * The original MacApp framework had its own event dispatcher.
     * For now, use a simple WaitNextEvent loop.
     * TODO: Integrate with MacApp TApplication::Run() when reconstructed.
     */
    {
        EventRecord event;
        Boolean done = false;

        while (!done) {
            WaitNextEvent(everyEvent, &event, 60, NULL);

            switch (event.what) {
            case keyDown:
                /* Cmd-Q to quit */
                if (event.modifiers & cmdKey) {
                    char key = event.message & charCodeMask;
                    if (key == 'q' || key == 'Q')
                        done = true;
                }
                break;

            case kHighLevelEvent:
                /* Handle AppleEvents (required for System 7+) */
                break;
            }
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
