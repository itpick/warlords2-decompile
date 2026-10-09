/*
 * test_main.c - one translation unit holding all of src/main.c plus the
 * tests, so the tests reach main.c's static functions and globals.
 *
 * Each t_*.c file is #included below; add a new file there and in the
 * list.  Fixture helpers (a fresh game state, cities, armies, unit types)
 * live in fixtures.h.
 */
/* Low-memory globals are absolute addresses on a Mac (0x0BAA ...); the
 * host has no such page, so the three main.c reads get fixed values. */
#include <Multiverse.h>
#undef GetMBarHeight
#define GetMBarHeight() ((INTEGER)20)
#undef LMGetHiliteMode
#define LMGetHiliteMode() ((UInt8)0xFF)
#undef LMGetWindowList
#define LMGetWindowList() ((WindowPtr)0)

#define main wl2_app_main          /* main.c's own entry point */
#include "../../src/main.c"
#undef main

#include "wl2test.h"
#include "fixtures.h"

#include "t_dice.c"
#include "t_combat.c"
#include "t_economy.c"
#include "t_path.c"
#include "t_sage.c"
#include "t_citystats.c"
#include "t_stack.c"
#include "t_help.c"
#include "t_zoom.c"
#include "t_samegame.c"

int main(int argc, char **argv)
{
    return wl2t_run_all(argc > 1 && argv[1][0] ? argv[1] : NULL);
}
