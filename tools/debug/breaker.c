/*
 * breaker.c - Drop into MacsBug via DebugStr().
 * Initializes Toolbox first for stability.
 */
#include <MacTypes.h>
#include <Quickdraw.h>
#include <Fonts.h>
#include <Windows.h>
#include <Menus.h>
#include <TextEdit.h>
#include <Dialogs.h>
#include <Events.h>

extern void DebugStr(ConstStr255Param debuggerMsg);

int main(void)
{
    /* Standard Toolbox init */
    InitGraf(&qd.thePort);
    InitFonts();
    InitWindows();
    InitMenus();
    TEInit();
    InitDialogs(NULL);
    InitCursor();

    /* This should drop into MacsBug with a message */
    DebugStr("\pBreak into MacsBug");

    return 0;
}
