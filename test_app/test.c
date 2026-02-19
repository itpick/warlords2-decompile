/*
 * Minimal PPC test app - just show a dialog and quit
 */
#include <Quickdraw.h>
#include <Dialogs.h>
#include <Fonts.h>
#include <Windows.h>
#include <Menus.h>
#include <TextEdit.h>
#include <Events.h>

int main(void)
{
    InitGraf(&qd.thePort);
    InitFonts();
    InitWindows();
    InitMenus();
    TEInit();
    InitDialogs(NULL);
    FlushEvents(everyEvent, 0);
    InitCursor();

    /* Show a simple alert-style message */
    SysBeep(10);

    /* Simple event loop - just wait for a click then quit */
    {
        EventRecord event;
        Boolean done = 0;
        while (!done) {
            WaitNextEvent(everyEvent, &event, 60, NULL);
            if (event.what == mouseDown || event.what == keyDown)
                done = 1;
        }
    }

    return 0;
}
