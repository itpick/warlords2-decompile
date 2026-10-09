/*
 * t_stack.c - Group Stack / Ungroup and the temple blessing count.
 *
 * Orders > Group Stack (cmd 0x578) and Ungroup (0x579) run PPC
 * FUN_100a1604 -> FUN_1005d240 / FUN_1005d2dc: they change the stack
 * window's group ids and selection, then commit the tags (FUN_1005c7d0).
 * They never move units between records.  The temple (FUN_10052900)
 * blesses each unit of the selected stack once.
 * Tasklist A1 ("6 armies have been blessed!" for a 2-unit stack) and A6
 * (Ungroup did not leave the Light Infantry behind) both came from the old
 * Group Stack, which packed other records' units into the selected one.
 */

#define ST_HERO 0x1C
#define ST_LI   0

static void stack_world(short *hero, short *li, short *extra)
{
    unsigned char *gs;
    fx_reset();
    fx_unit_types(29);
    gs = fx_gs();
    *(short *)(gs + 0x110) = 0;            /* side 0's turn */
    *(short *)(gs + 0xd0) = 0;             /* side 0 is human */
    *hero  = fx_army(40, 40, 0, ST_HERO, -1, -1, -1);
    *li    = fx_army(40, 40, 0, ST_LI, -1, -1, -1);
    *extra = fx_army(40, 40, 0, ST_LI, -1, -1, -1);
    memset(sStackArmyIdx, 0, sizeof sStackArmyIdx);
    sStackCount = 0;
    sSelectedArmy = *hero;
}

static short stack_units_in(short rec)
{
    short k, n = 0;
    for (k = 0; k < 4; k++) if (ARMY_REC(rec)[0x16 + k] != 0xFF) n++;
    return n;
}

TEST(group_stack_menu_groups_without_packing_records)
{
    short hero, li, extra, n0;
    stack_world(&hero, &li, &extra);
    n0 = *(short *)(fx_gs() + 0x1602);
    HandleMenuChoice((4L << 16) | 1);                 /* Orders > Group Stack */
    CHECK_EQ(*(short *)(fx_gs() + 0x1602), n0);       /* no record removed */
    CHECK_EQ(stack_units_in(hero), 1);                /* nothing packed in */
    CHECK_EQ(stack_units_in(li), 1);
    CHECK_EQ(stack_units_in(extra), 1);
    CHECK(ARMY_REC(hero)[0x11] != 0);                 /* one shared group tag */
    CHECK_EQ(ARMY_REC(li)[0x11], ARMY_REC(hero)[0x11]);
    CHECK_EQ(ARMY_REC(extra)[0x11], ARMY_REC(hero)[0x11]);
    PathBuildStack(hero, true);
    CHECK_EQ(sPathMoverCount, 3);
}

TEST(ungroup_menu_leaves_the_others_behind)
{
    short hero, li, extra;
    stack_world(&hero, &li, &extra);
    HandleMenuChoice((4L << 16) | 1);                 /* group first */
    HandleMenuChoice((4L << 16) | 2);                 /* then Ungroup */
    CHECK_EQ(sSelectedArmy, hero);
    CHECK_EQ(ARMY_REC(hero)[0x11], 0);                /* one record per group: tag 0 */
    CHECK_EQ(ARMY_REC(li)[0x11], 0);
    PathBuildStack(hero, true);
    CHECK_EQ(sPathMoverCount, 1);                     /* only the first entry moves */
    CHECK_EQ(sPathMovers[0], hero);
    CHECK_EQ(stack_units_in(hero), 1);
}

TEST(temple_blesses_each_unit_of_the_grouped_stack_once)
{
    short hero, li, extra, ci, a;
    unsigned char *ext;
    stack_world(&hero, &li, &extra);
    ci = fx_city(40, 40, 0x0F, 0, 0);
    sCityData[ci * 0x20 + 0x17] = 2;                  /* a temple site on the tile */
    *(short *)(ARMY_REC(extra) + 0x00) = 41;                      /* the third unit stands elsewhere */
    HandleMenuChoice((4L << 16) | 1);                 /* hero + LI grouped */
    TryTempleBlessing(hero);
    ext = (unsigned char *)*gExtState;
    {
        short blessed = 0;
        for (a = 0; a < *(short *)(fx_gs() + 0x1602); a++)
            if (BLESS_BITS(ext, a) & 1) blessed++;
        CHECK_EQ(blessed, 2);                         /* "2 armies have been blessed!" */
    }
    CHECK_EQ(BLESS_BITS(ext, extra), 0);
    /* a second visit blesses nobody ("We have already blessed thee!") */
    TryTempleBlessing(hero);
    CHECK_EQ(BLESS_BITS(ext, hero), 1);
    CHECK_EQ(BLESS_BITS(ext, li), 1);
}
