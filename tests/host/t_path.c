/*
 * t_path.c - movement costs and the path search.
 *
 * BuildPathFlagGrid follows PPC FUN_10044110: per terrain type a cost
 * (PPC data 0x17576: {1,1,1,2,4,6,0,2,5,2,1,2}) OR'ed with bridge 0x18,
 * water/shore 0x08, forest 0x40, hills 0x20; flyers pay 1 on open/bridge/
 * city, else 2.  PathSearch is FUN_10043248's flood from the destination,
 * PathTrace FUN_100439a4's walk, PathStepCost FUN_100445fc's execution
 * cost, PathIntDist FUN_1000a884's integer distance.
 */

enum { PT_OPEN = 0, PT_WATER = 1, PT_HILLS = 2, PT_FOREST = 3, PT_BRIDGE = 4, PT_BLOCK = 5 };

static void path_world(void)
{
    unsigned char *gs;
    fx_reset();
    gs = fx_gs();
    gs[TERRAIN_TYPE_OFS + PT_OPEN]   = 0;
    gs[TERRAIN_TYPE_OFS + PT_WATER]  = 2;
    gs[TERRAIN_TYPE_OFS + PT_HILLS]  = 5;
    gs[TERRAIN_TYPE_OFS + PT_FOREST] = 4;
    gs[TERRAIN_TYPE_OFS + PT_BRIDGE] = 1;
    gs[TERRAIN_TYPE_OFS + PT_BLOCK]  = 6;
    *(short *)(gs + 0x110) = 0;            /* current player 0 */
    *(short *)(gs + 0xd0) = 0;             /* player 0 is human */
    sOptHiddenMap = false;
    sPathOwner = 0;
    sPathForceAI = false;
    sPathMode = PMODE_GROUND;
    sPathFlags = 0;
    sPathPenalty = 0;
}

static short path_find(short sx, short sy, short dx, short dy, unsigned char *dirs, short *ex, short *ey)
{
    BuildPathFlagGrid();
    if (!PathSearch(sx, sy, dx, dy, 0) && !PathSearch(sx, sy, dx, dy, 1)) return -1;
    return PathTrace(sx, sy, dx, dy, dirs, 200, ex, ey);
}

static long path_cost(short sx, short sy, const unsigned char *dirs, short n)
{
    short i, x = sx, y = sy, trans = 0;
    long c = 0;
    for (i = 0; i < n; i++) {
        x += sPathDX[dirs[i]]; y += sPathDY[dirs[i]];
        c += PathStepCost(x, y, &trans);
    }
    return c;
}

TEST(path_int_dist_is_floor_sqrt)
{
    CHECK_EQ(PathIntDist(0, 0, 3, 4), 5);
    CHECK_EQ(PathIntDist(0, 0, 1, 1), 1);      /* sqrt 2 */
    CHECK_EQ(PathIntDist(0, 0, 2, 3), 3);      /* sqrt 13 */
    CHECK_EQ(PathIntDist(10, 10, 0, 0), 14);   /* sqrt 200 */
    CHECK_EQ(PathIntDist(5, 5, 5, 5), 0);
    CHECK_EQ(PathIntDist(0, 0, 111, 155), 190); /* corner to corner */
}

TEST(path_dir_toward_table)
{
    CHECK_EQ(PathDirToward(5, 5, 5, 1), 0);   /* N */
    CHECK_EQ(PathDirToward(5, 5, 9, 1), 1);   /* NE */
    CHECK_EQ(PathDirToward(5, 5, 9, 5), 2);   /* E */
    CHECK_EQ(PathDirToward(5, 5, 9, 9), 3);   /* SE */
    CHECK_EQ(PathDirToward(5, 5, 5, 9), 4);   /* S */
    CHECK_EQ(PathDirToward(5, 5, 1, 9), 5);   /* SW */
    CHECK_EQ(PathDirToward(5, 5, 1, 5), 6);   /* W */
    CHECK_EQ(PathDirToward(5, 5, 1, 1), 7);   /* NW */
    CHECK_EQ(PathDirToward(5, 5, 5, 5), 0xFF);
}

TEST(path_flag_grid_costs_and_flags)
{
    path_world();
    fx_tile(1, 1, PT_OPEN, 0);
    fx_tile(2, 1, PT_WATER, 0);
    fx_tile(3, 1, PT_HILLS, 0);
    fx_tile(4, 1, PT_FOREST, 0);
    fx_tile(5, 1, PT_BRIDGE, 0);
    fx_tile(6, 1, PT_BLOCK, 0);
    fx_tile(7, 1, PT_OPEN, 0x80);            /* an anchor: +0x10 port */
    BuildPathFlagGrid();
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 1], 1);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 2], 0x08 | 1);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 3], 0x20 | 6);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 4], 0x40 | 4);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 5], 0x18 | 1);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 6], 0);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 7], 0x10 | 1);

    sPathMode = PMODE_FLYING;                /* flyers: 1 on open, else 2 */
    BuildPathFlagGrid();
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 1] & 7, 1);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 2] & 7, 2);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 3] & 7, 2);
    CHECK_EQ(sPathFlagGrid[1 * PATH_GRID_W + 6] & 7, 2);
}

TEST(path_straight_line_on_open_ground)
{
    unsigned char dirs[200];
    short n, ex, ey, i;
    path_world();
    n = path_find(10, 10, 16, 10, dirs, &ex, &ey);
    CHECK_EQ(n, 6);
    CHECK_EQ(ex, 16);
    CHECK_EQ(ey, 10);
    for (i = 0; i < n; i++) CHECK_EQ(dirs[i], 2);
    CHECK_EQ(path_cost(10, 10, dirs, n), 6);
    n = path_find(10, 10, 14, 14, dirs, &ex, &ey);   /* diagonals cost the same */
    CHECK_EQ(n, 4);
    for (i = 0; i < n; i++) CHECK_EQ(dirs[i], 3);
}

TEST(path_ground_goes_round_a_lake_not_through_it)
{
    unsigned char dirs[200];
    short n, ex, ey, x, y, i;
    path_world();
    for (y = 5; y <= 15; y++) fx_tile(20, y, PT_WATER, 0);   /* a wall of water x=20, y 5..15 */
    n = path_find(15, 10, 25, 10, dirs, &ex, &ey);
    CHECK(n > 10);
    CHECK_EQ(ex, 25);
    x = 15; y = 10;
    for (i = 0; i < n; i++) {
        x += sPathDX[dirs[i]]; y += sPathDY[dirs[i]];
        CHECK(!(x == 20 && y >= 5 && y <= 15));
    }
}

TEST(path_ground_cannot_reach_an_island_without_a_port)
{
    unsigned char dirs[200];
    short ex, ey, x, y;
    path_world();
    for (y = 30; y <= 40; y++)
        for (x = 30; x <= 40; x++)
            fx_tile(x, y, (x == 35 && y == 35) ? PT_OPEN : PT_WATER, 0);
    CHECK_EQ(path_find(20, 35, 35, 35, dirs, &ex, &ey), -1);
    /* with an anchor (port) on the shore and on the island the boat link exists */
    fx_tile(29, 35, PT_OPEN, 0x80);
    fx_tile(35, 35, PT_OPEN, 0x80);
    CHECK(path_find(20, 35, 35, 35, dirs, &ex, &ey) > 0);
}

TEST(path_naval_stays_on_water)
{
    unsigned char dirs[200];
    short n, ex, ey, x, y, i;
    path_world();
    for (y = 50; y <= 60; y++)
        for (x = 50; x <= 70; x++)
            fx_tile(x, y, PT_WATER, 0);
    for (y = 50; y <= 57; y++) fx_tile(60, y, PT_OPEN, 0);   /* a peninsula */
    sPathMode = PMODE_NAVAL;
    n = path_find(55, 55, 65, 55, dirs, &ex, &ey);
    CHECK(n > 0);
    CHECK_EQ(ex, 65);
    x = 55; y = 55;
    for (i = 0; i < n; i++) {
        x += sPathDX[dirs[i]]; y += sPathDY[dirs[i]];
        CHECK(!(x == 60 && y <= 57));
        CHECK(y >= 58 || x != 60);
    }
}

TEST(path_flyer_crosses_water_at_cost_2)
{
    unsigned char dirs[200];
    short n, ex, ey, x, y;
    path_world();
    for (y = 0; y < FX_MAP_H; y++)            /* a sea strait across the whole map */
        for (x = 11; x <= 15; x++) fx_tile(x, y, PT_WATER, 0);
    sPathMode = PMODE_FLYING;
    n = path_find(10, 80, 16, 80, dirs, &ex, &ey);
    CHECK_EQ(n, 6);
    CHECK_EQ(ex, 16);
    CHECK_EQ(path_cost(10, 80, dirs, n), 5 * 2 + 1);
    /* the same strait stops a ground stack outright (no port) */
    sPathMode = PMODE_GROUND;
    CHECK_EQ(path_find(10, 80, 16, 80, dirs, &ex, &ey), -1);
}

/* with land beside the water a flyer still prefers cost-1 tiles */
TEST(path_flyer_prefers_land_when_it_is_cheaper)
{
    unsigned char dirs[200];
    short n, ex, ey, x;
    path_world();
    for (x = 11; x <= 15; x++) fx_tile(x, 80, PT_WATER, 0);
    sPathMode = PMODE_FLYING;
    n = path_find(10, 80, 16, 80, dirs, &ex, &ey);
    CHECK_EQ(n, 6);
    CHECK_EQ(path_cost(10, 80, dirs, n), 6);   /* round by row 79 or 81 */
}

TEST(path_hills_cost_6_or_2_with_the_hills_ability)
{
    short trans = 0;
    path_world();
    fx_tile(40, 40, PT_HILLS, 0);
    fx_tile(41, 40, PT_FOREST, 0);
    BuildPathFlagGrid();
    CHECK_EQ(PathStepCost(40, 40, &trans), 6);
    CHECK_EQ(PathStepCost(41, 40, &trans), 4);
    sPathFlags = PABIL_HILLS;
    CHECK_EQ(PathStepCost(40, 40, &trans), 2);
    CHECK_EQ(PathStepCost(41, 40, &trans), 4);
    sPathFlags = PABIL_FOREST;
    CHECK_EQ(PathStepCost(40, 40, &trans), 6);
    CHECK_EQ(PathStepCost(41, 40, &trans), 2);
    CHECK_EQ(trans, 0);
}

/* stepping off a port onto open water ends the move: the step after
 * the transition costs 0x80 (FUN_100445fc) */
TEST(path_port_to_water_transition_ends_the_move)
{
    short trans = 0;
    path_world();
    fx_tile(60, 60, PT_OPEN, 0x80);     /* anchor */
    fx_tile(61, 60, PT_WATER, 0);
    fx_tile(62, 60, PT_WATER, 0);
    BuildPathFlagGrid();
    CHECK_EQ(PathStepCost(60, 60, &trans), 1);
    CHECK_EQ(trans, 0);
    CHECK_EQ(PathStepCost(61, 60, &trans), 1);
    CHECK_EQ(trans, 1);
    CHECK_EQ(PathStepCost(62, 60, &trans), 0x80);
    /* embarked: open land is the other element */
    trans = 0;
    sPathFlags = PABIL_EMBARKED;
    fx_tile(63, 60, PT_OPEN, 0);
    BuildPathFlagGrid();
    CHECK_EQ(PathStepCost(62, 60, &trans), 1);
    CHECK_EQ(trans, 0);
    CHECK_EQ(PathStepCost(63, 60, &trans), 1);
    CHECK_EQ(trans, 1);
}

/* own cities are routed through, foreign ones are cost 0 (blocked unless
 * the destination) - BuildPathFlagGrid's city pass */
TEST(path_foreign_city_blocks_own_city_opens)
{
    unsigned char dirs[200];
    short ex, ey, n, i, x, y;
    Boolean through;
    path_world();
    fx_city(30, 99, 3, 1, 10);          /* a 2x2 foreign city across the row */
    for (y = 0; y < FX_MAP_H; y++)          /* an impassable ridge, the city its only gap */
        if (y < 99 || y > 100) { fx_tile(30, y, PT_BLOCK, 0); fx_tile(31, y, PT_BLOCK, 0); }
    BuildPathFlagGrid();
    CHECK_EQ(sPathFlagGrid[99 * PATH_GRID_W + 30] & 7, 0);
    CHECK(sPathFlagGrid[99 * PATH_GRID_W + 30] & PFLAG_CITY);
    CHECK_EQ(path_find(25, 100, 36, 100, dirs, &ex, &ey) > 0 && ex == 36, 0);

    *(short *)(sCityData + 0x04) = 0;   /* now it is ours */
    n = path_find(25, 100, 36, 100, dirs, &ex, &ey);
    CHECK(n > 0);
    CHECK_EQ(ex, 36);
    x = 25; y = 100; through = false;
    for (i = 0; i < n; i++) {
        x += sPathDX[dirs[i]]; y += sPathDY[dirs[i]];
        if (x >= 30 && x <= 31) through = true;
    }
    CHECK(through);
}
