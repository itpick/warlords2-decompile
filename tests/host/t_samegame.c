/*
 * t_samegame.c - the same-seed fixes (docs/2026-10-09-same-seed-ai.md).
 *
 * The original's Random() stream was read out of the running original
 * (tools/patch_orig_rnglog.py + tools/rng_log.py --orig).  These tests pin
 * the remake to what that log showed:
 *   - a shipped scenario's overview is its PICT 10001 (FUN_1002869c): no
 *     roll;
 *   - the Start button builds every side's computer block before anything
 *     else rolls (FUN_1005a6ac -> FUN_1000c67c -> FUN_10020ae8 /
 *     FUN_10020640): rolls 1-24 of an Erythea game, sides 7..0;
 *   - units carry the original's unit-table index (FUN_10021434: the lowest
 *     free one), and the computer walks a tile's units from the last index
 *     down (FUN_10018b14);
 *   - the AI keeps one unit per record when it regroups a garrison;
 *   - the city neighbour table is the scenario's 'AI  ' 10000 (FUN_1001db60).
 */

static long sg_after(long seed, short calls)
{
    long s = seed;
    short i;
    fx_seed(seed);
    for (i = 0; i < calls; i++) (void)Random();
    s = qd.randSeed;
    return s;
}

TEST(overview_of_a_shipped_scenario_spends_no_roll)
{
    long after;
    fx_reset();
    sScenarioOverviewPict = NewHandle(16);         /* the scenario's PICT 10001 */
    sOverviewBaseFor = NULL;
    fx_seed(715183689L);
    BuildOverviewBase();
    CHECK_EQ(qd.randSeed, 715183689L);
    DisposeHandle(sScenarioOverviewPict);
    sScenarioOverviewPict = NULL;
    /* a random map has no PICT: FUN_100641d0 -> FUN_10063af8 rolls the
     * 256-value hill pool */
    after = sg_after(715183689L, 256);
    sOverviewBaseFor = NULL;
    fx_seed(715183689L);
    BuildOverviewBase();
    CHECK_EQ(qd.randSeed, after);
}

/* The original's rolls 1-24 of the Erythea run (seed 715183689): FUN_10020640
 * +0x54/+0x70/+0x8c (Knight: 1d4 x3) for sides 7..1, then +0x278/+0x294/
 * +0x2b0 for the human side 0 (Warlord: 1d10 1d8 1d6). */
TEST(new_game_builds_every_computer_block_first)
{
    static const short kSides[24] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                                      4, 4, 4, 4, 4, 4, 4, 4, 4, 10, 8, 6 };
    short ref[24], p, i;
    unsigned char *gs;
    fx_reset();
    gs = fx_gs();
    for (p = 0; p < 8; p++) {
        *(short *)(gs + 0x138 + p * 2) = 1;          /* alive */
        *(short *)(gs + 0xd0 + p * 2) = (p == 0) ? 0 : 1;   /* side 0 human */
        *(short *)(gs + 0xc0 + p * 2) = 0;           /* Knight */
    }
    fx_seed(715183689L);
    for (i = 0; i < 24; i++) ref[i] = Dice(1, kSides[i], 0);
    fx_seed(715183689L);
    NewGameComputerBlocks();
    CHECK_EQ(qd.randSeed, sg_after(715183689L, 24));
    for (p = 7, i = 0; p >= 1; p--, i += 3) {
        CHECK_EQ(sAIBlocks[p].biasA, ref[i]);
        CHECK_EQ(sAIBlocks[p].biasD, ref[i + 1]);
        CHECK_EQ(sAIBlocks[p].biasB, ref[i + 2]);
        CHECK(sAIBlocks[p].inited);
    }
    CHECK_EQ(sAIBlocks[0].biasA, ref[21]);
    CHECK_EQ(sAIBlocks[0].biasB, ref[22]);
    CHECK_EQ(sAIBlocks[0].biasC, ref[23]);
}

TEST(a_new_unit_takes_the_lowest_free_table_index)
{
    short a, b, c, d;
    fx_reset();
    fx_unit_types(29);
    a = fx_army(10, 10, 1, 3, -1, -1, -1);
    b = fx_army(10, 10, 1, 4, 5, -1, -1);
    c = fx_army(20, 20, 2, 6, -1, -1, -1);
    UidReset();
    UidSync();
    CHECK_EQ(UnitUid(a, 0), 0);
    CHECK_EQ(UnitUid(b, 0), 1);
    CHECK_EQ(UnitUid(b, 1), 2);
    CHECK_EQ(UnitUid(c, 0), 3);
    /* the first record dies: its index is free again */
    RemoveArmy(a);                                   /* b -> 0, c -> 1 */
    d = fx_army(30, 30, 2, 7, -1, -1, -1);
    UidSync();
    CHECK_EQ(UnitUid(0, 0), 1);
    CHECK_EQ(UnitUid(0, 1), 2);
    CHECK_EQ(UnitUid(1, 0), 3);
    CHECK_EQ(UnitUid(d, 0), 0);                      /* FUN_10021434 */
}

TEST(the_computer_walks_a_tiles_units_from_the_last_index_down)
{
    AIUnit u[8];
    short r0, r1, n;
    fx_reset();
    fx_unit_types(29);
    sAIMe = 4;
    r0 = fx_army(103, 64, 4, 12, 26, -1, -1);
    r1 = fx_army(103, 64, 4, 0x1C, -1, -1, -1);
    UidReset();
    sArmyUid[r0][0] = 88; sArmyUid[r0][1] = 43;      /* the Erythea round-2 stack */
    sArmyUid[r1][0] = 84;
    UidSync();
    n = AIUnitsAtDesc(103, 64, u, 8);
    CHECK_EQ(n, 3);
    CHECK_EQ(u[0].rec, r0); CHECK_EQ(u[0].slot, 0);  /* 88: the type 12 */
    CHECK_EQ(u[1].rec, r1); CHECK_EQ(u[1].slot, 0);  /* 84: the hero */
    CHECK_EQ(u[2].rec, r0); CHECK_EQ(u[2].slot, 1);  /* 43: the type 26 */
}

TEST(ai_regroup_keeps_one_unit_per_record)
{
    AIUnitSnap snaps[3];
    short r0, k, n, i;
    fx_reset();
    fx_unit_types(29);
    sAIMe = 4;
    r0 = fx_army(50, 50, 4, 12, 26, 0x1C, -1);
    UidReset();
    UidSync();
    for (k = 0; k < 3; k++) {
        AISnapUnit(r0, k, &snaps[k]);
        snaps[k].qx = 50; snaps[k].qy = 50;          /* one quadrant */
    }
    CHECK(AIRegroup(snaps, 3, -1));
    n = *(short *)(fx_gs() + 0x1602);
    CHECK_EQ(n, 3);
    for (i = 0; i < n; i++) {
        CHECK(ARMY_REC(i)[0x16] != 0xFF);
        CHECK_EQ(ARMY_REC(i)[0x17], 0xFF);
        CHECK_EQ(UnitUid(i, 0), i);                  /* the units kept their indices */
    }
}

TEST(the_city_neighbour_table_is_the_scenarios)
{
    short ci, i;
    fx_reset();
    for (ci = 0; ci < 100; ci++)
        for (i = 0; i < 6; i++) {
            sScnAINb[ci * 6 + i] = (unsigned char)((ci + i + 1) % 100);
            sScnAINb[600 + ci * 6 + i] = (unsigned char)(10 + i);
        }
    sScnAINbValid = true;
    sAINbValid = false;
    AINeighbourEnsure();
    CHECK(sAINbValid);
    CHECK_EQ(sAINbIdx[0][0], 1);
    CHECK_EQ(sAINbIdx[36][5], 42);
    CHECK_EQ(sAINbDist[36][5], 15);
    CHECK_EQ(sAINbIdx[120][0], 0xFF);                /* past the table's 100 cities */
    sScnAINbValid = false;
    sAINbValid = false;
}

/* FUN_1001ee88 walks the unit table from the last index down; a unit whose
 * table entry still holds leftover front bits (FUN_10021434 keeps bits 7-11)
 * does not join a stack asked for front 0 until the AI gives it a front or
 * a garrison placement clears them (round 5 of the Erythea run: unit 90). */
TEST(ai_stacks_follow_the_unit_table_and_its_leftover_fronts)
{
    AIStack s;
    short a, b, c;
    fx_reset();
    fx_unit_types(29);
    sAIMe = 4;
    a = fx_army(103, 64, 4, 12, -1, -1, -1);
    b = fx_army(103, 64, 4, 12, -1, -1, -1);
    c = fx_army(103, 64, 4, 12, -1, -1, -1);
    AIOrdSync();
    UidReset();
    sArmyUid[a][0] = 7; sArmyUid[b][0] = 90; sArmyUid[c][0] = 88;
    UidSync();
    CHECK_EQ(AIStackAt(103, 64, 0, 0, 0, &s), 3);
    CHECK_EQ(s.rec[0], b); CHECK_EQ(s.rec[1], c); CHECK_EQ(s.rec[2], a);
    sUidStale[90] = 3;                              /* front 2's bits, left over */
    CHECK_EQ(AIRecFront(b), 3);
    CHECK_EQ(AIStackAt(103, 64, 0, 0, 0, &s), 2);
    CHECK_EQ(s.rec[0], c); CHECK_EQ(s.rec[1], a);
    AIRecSetFront(b, 0);                            /* the AI writes the field */
    CHECK_EQ(sUidStale[90], 0);
    CHECK_EQ(AIStackAt(103, 64, 0, 0, 0, &s), 3);
}

