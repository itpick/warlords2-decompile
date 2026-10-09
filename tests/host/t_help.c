/*
 * t_help.c - the help pages (tasklist B9).
 *
 * PPC FUN_100402e0 (the button bar's 'help' diamond and the Help key,
 * FUN_1008330c case 5) shows three View 1030 windows in a row, from the
 * 'GFX ' scripts HELP\HMOUSE.GFX, HELP\HKEYS.GFX, HELP\HMOUSE2.GFX
 * (resources "HMOUSE" 2002, "HKEYS" 2001, "HMOUSE2" 2003).  HITEM (2000)
 * is never shown on the Mac.
 */

/* a spy for the Resource Manager: records which 'GFX ' names were asked
 * for and hands back a tiny script so each page's window really opens */
static char sHelpAsked[8][16];
static short sHelpAskedN = 0;

Handle GetNamedResource(ResType type, ConstStringPtr name)
{
    Handle h;
    if (type != 'GFX ' || sHelpAskedN >= 8) return NULL;
    memcpy(sHelpAsked[sHelpAskedN], name + 1, name[0] < 15 ? name[0] : 15);
    sHelpAsked[sHelpAskedN][name[0] < 15 ? name[0] : 15] = 0;
    sHelpAskedN++;
    h = NewHandle(1);
    (*h)[0] = ' ';
    return h;
}

TEST(help_shows_three_pages_in_the_original_order)
{
    extern unsigned long wl2_shim_events;
    unsigned long ev0;
    fx_reset();
    memset(sHelpAsked, 0, sizeof sHelpAsked);
    sHelpAskedN = 0;
    ev0 = wl2_shim_events;
    ShowHelpScreens();
    CHECK_EQ(sHelpAskedN, 3);
    CHECK(strcmp(sHelpAsked[0], "HMOUSE") == 0);
    CHECK(strcmp(sHelpAsked[1], "HKEYS") == 0);
    CHECK(strcmp(sHelpAsked[2], "HMOUSE2") == 0);
    CHECK(wl2_shim_events - ev0 >= 3);     /* each page waited for its Done */
}
