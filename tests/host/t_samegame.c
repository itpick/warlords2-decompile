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


/* FUN_100448e4 -> FUN_10043e60 / FUN_10043248 with the flood flag: the
 * start is -1 (cost 1), pass r expands the open cells within r of the
 * start, the flood stops before pass `radius`, and a cell labelled after
 * its scan keeps the dearer label (no shortest-path search).  Expected
 * values: tools/ppc_decompiled FUN_10043248 transcribed (the transcription
 * reproduced all 17472 cells of the original's grid at roll 7336 of the
 * Erythea run).  The wall at x 42 / y 54 makes the sweep come round late:
 * (43,60) is 21 where a shortest path costs 15. */
TEST(the_ai_flood_is_the_originals_ring_sweep)
{
    short x, y;
    unsigned long cs = 0;
    path_world();
    for (y = 0; y < FX_MAP_H; y++)
        for (x = 0; x < FX_MAP_W; x++) {
            unsigned char f = 1;
            if ((x == 42 && y >= 54 && y <= 66) || (y == 54 && x >= 36 && x <= 42)) f = 0;
            sPathFlagGrid[y * PATH_GRID_W + x] = f;
        }
    sPathMode = PMODE_GROUND; sPathFlags = 0; sPathOwner = 1; sPathPenalty = 30;
    AIFloodRun(40, 60, 8);
#define FL(x, y) sAIFloodCost[(y) * PATH_GRID_W + (x)]
    CHECK_EQ(FL(40, 60), 1);
    CHECK_EQ(FL(41, 60), 2);
    CHECK_EQ(FL(43, 60), 21);
    CHECK_EQ(FL(44, 60), 21);
    CHECK_EQ(FL(43, 67), 9);
    CHECK_EQ(FL(48, 60), -21);                      /* radius 8: labelled, never expanded */
    CHECK_EQ(FL(49, 60), PATH_COST_MAX);            /* beyond the radius */
    CHECK_EQ(FL(42, 60), PATH_COST_BLOCK);
    CHECK_EQ(FL(40, 52), -12);
    CHECK_EQ(FL(40, 53), 12);
    CHECK_EQ(FL(32, 68), -9);
#undef FL
    for (y = 0; y < FX_MAP_H; y++)
        for (x = 0; x < FX_MAP_W; x++)
            cs = (cs * 31 + (unsigned short)sAIFloodCost[y * PATH_GRID_W + x]) & 0x7fffffffUL;
    CHECK_EQ(cs, 517124948UL);
}

/* FUN_10041de8 selects the whole list before FUN_100448e4 floods with its
 * mode: a hero with a flyer floods as a flyer even when the hero's record
 * leads (Erythea round 7, side 1's redispatch: mode 2 in the original). */
TEST(the_ai_flood_takes_the_whole_stacks_mode)
{
    AIStack s;
    short hero, fly;
    path_world();
    fx_unit_types(29);
    sUnitTypeTable[9 * UNIT_TYPE_ENTRY + UTE_STAT_FLYING] = 1;
    sAIMe = 1;
    hero = fx_army(47, 110, 1, 0x1C, -1, -1, -1);
    fly = fx_army(47, 110, 1, 9, -1, -1, -1);
    fx_gs()[0x60C + 1 * 0x1D + 0x1C] = 20;           /* the hero fights last: it leads */
    fx_gs()[0x60C + 1 * 0x1D + 9] = 5;
    s.n = 2; s.rec[0] = fly; s.rec[1] = hero;
    CHECK_EQ(AIStackLead(&s), hero);
    sSelectedArmy = -1; sStackCount = 0;
    AIFloodForStack(&s, 3);
    CHECK_EQ(sPathMode, PMODE_FLYING);
    CHECK_EQ(sPathMoverCount, 2);
    CHECK_EQ(sPathMovers[0], hero);
    CHECK_EQ(sAIFloodCost[110 * PATH_GRID_W + 47], 1);
    sAIMe = -1;
}

/* the number of Random() calls that take seed s0 to s1 (-1 past 500) */
static short sg_count(long s0, long s1)
{
    unsigned long long s = (unsigned long long)(uint32_t)s0;
    short n;
    for (n = 0; n <= 500; n++) {
        if ((long)(int32_t)s == s1) return n;
        s = (s * 16807ULL) % 0x7FFFFFFFULL;
    }
    return -1;
}

/* FUN_10032a24 -> FUN_1000db10 runs at the side's turn start, before its
 * step 0 (FUN_1000c9c8) installs its block, so the city roles it rolls on
 * are the previous computer side's: for this side's cities that block
 * holds no role 2/3/7 and nothing is rolled (Erythea round 7, side 3's
 * offer from roll 8604: cost, 1d30, the city, then the name). */
TEST(the_ai_hero_offer_reads_the_previous_sides_block)
{
    long seed = 1;
    short pass, ci, calls[2];
    unsigned char *gs;
    for (pass = 0; pass < 2; pass++) {
        fx_reset();
        fx_unit_types(29);
        gs = fx_gs();
        *(short *)(gs + 0x136) = 7;                  /* turn 7: no free hero */
        *(short *)(gs + 0x110) = 3;
        *(short *)(gs + 0xd0 + 3 * 2) = 1;           /* side 3 is a computer */
        *(short *)(gs + 0x186 + 3 * 0x14) = 3000;    /* gold for any cost */
        ci = fx_city(30, 30, 3, 1, 10);
        AIResetAll();
        sAIBlocks[2].role[ci] = 0;
        sAIBlocks[3].role[ci] = 7;
        sAIMe = 3; gAI = &sAIBlocks[3];
        sAIBlockInstalled = (pass == 0) ? 2 : 3;
        for (seed = 1; seed < 100000; seed++) {      /* a seed whose 1d30 passes */
            fx_seed(seed);
            (void)Dice(1, 400, 300);
            if (Dice(1, 30, 0) <= 6) break;
        }
        fx_seed(seed);
        AIHeroOffer(3);
        CHECK(*(short *)(gs + 0x1602) >= 1);         /* the hero (and its allies) */
        calls[pass] = sg_count(seed, qd.randSeed);
    }
    /* cost, 1d30, 1d1 city, then the allies' 1d100 (no name list, no ally
     * types here); side 3's own block would add its role-7 Dice(1,100,100) */
    CHECK_EQ(calls[0], 4);
    CHECK_EQ(calls[1], 5);
    sAIMe = -1; gAI = NULL; sAIBlockInstalled = -1;
}

/* The computer's turn start (the function that calls FUN_10032a24, then
 * FUN_10033548, FUN_10033b4c, FUN_10064e84 income, ..., FUN_10021e20
 * production): the hero offer comes before the income, so it weighs the
 * cost against the gold the side had before this turn's income (Erythea
 * round 8: side 1 had 357 at its offer, 395 after). */
TEST(the_ai_hero_offer_comes_before_the_turns_income)
{
    long seed;
    short cost, gold, n0, ci;
    unsigned char *gs;
    fx_reset();
    fx_unit_types(29);
    gs = fx_gs();
    *(short *)(gs + 0x136) = 7;
    *(short *)(gs + 0x110) = 3;
    *(short *)(gs + 0x138 + 3 * 2) = 1;                /* alive */
    *(short *)(gs + 0xd0 + 3 * 2) = 1;                 /* computer */
    ci = fx_city(30, 30, 3, 1, 200);                   /* income 200 */
    (void)ci;
    AIResetAll();
    for (seed = 1; seed < 100000; seed++) {            /* a seed whose 1d30 passes */
        fx_seed(seed);
        cost = Dice(1, 400, 300);
        if (Dice(1, 30, 0) <= 6) break;
    }
    gold = (short)(cost - 1);                          /* short by one before the income */
    *(short *)(gs + 0x186 + 3 * 0x14) = gold;
    n0 = *(short *)(gs + 0x1602);
    fx_seed(seed);
    ProcessStartOfTurn(3);
    CHECK_EQ(*(short *)(gs + 0x1602), n0);             /* no hero: the gold was short */
    CHECK(*(short *)(gs + 0x186 + 3 * 0x14) > gold);   /* the income came after */
    CHECK_EQ(sg_count(seed, qd.randSeed), 1);         /* the cost only: short, no 1d30 */
}

/* FUN_100558f8 (every turn start) puts FUN_1005619c's last position at the
 * side's capital (pstat+0x04/06); the order loop then takes the nearest
 * unit to the last one taken (Erythea round 8, side 1: capital (48,121),
 * stacks at (44,121), (41,115), (38,116), (55,116)). */
TEST(the_ai_order_loop_starts_at_the_capital)
{
    unsigned char *gs;
    short a, b, c, d, i;
    fx_reset();
    fx_unit_types(29);
    gs = fx_gs();
    *(short *)(gs + 0x136) = 8;
    *(short *)(gs + 0x110) = 1;
    *(short *)(gs + 0x138 + 1 * 2) = 1;
    *(short *)(gs + 0xd0 + 1 * 2) = 1;
    *(short *)(gs + 0x186 + 1 * 0x14) = 1000;          /* gold: no upkeep disbanding */
    *(short *)(gs + 0x186 + 1 * 0x14 + 0x04) = 48;
    *(short *)(gs + 0x186 + 1 * 0x14 + 0x06) = 121;
    (void)fx_city(48, 121, 1, 1, 10);
    c = fx_army(55, 116, 1, 0, -1, -1, -1);
    b = fx_army(38, 116, 1, 22, -1, -1, -1);
    a = fx_army(41, 115, 1, 9, -1, -1, -1);
    d = fx_army(44, 121, 1, 0, -1, -1, -1);
    for (i = 0; i < 4; i++) ARMY_REC(i)[0x1e] = 5;     /* alive */
    AIResetAll();
    AIOrdSync();
    UidReset();
    UidSync();
    sAILastX = 3; sAILastY = 3;                       /* left over from another side */
    for (i = 0; i < 4; i++) sAIOrd[i].flags |= AIO_DONE | AIO_STUCK;
    ProcessStartOfTurn(1);
    CHECK_EQ(sAILastX, 48);
    CHECK_EQ(sAILastY, 121);
    CHECK_EQ(sAIOrd[a].flags & (AIO_DONE | AIO_STUCK), 0);
    sAIMe = 1; gAI = &sAIBlocks[1];
    CHECK_EQ(AINextOrdered(), d); sAIOrd[d].flags |= AIO_DONE;
    CHECK_EQ(AINextOrdered(), a); sAIOrd[a].flags |= AIO_DONE;
    CHECK_EQ(AINextOrdered(), b); sAIOrd[b].flags |= AIO_DONE;
    CHECK_EQ(AINextOrdered(), c); sAIOrd[c].flags |= AIO_DONE;
    CHECK_EQ(AINextOrdered(), -1);
    sAIMe = -1; gAI = NULL;
}

/* FUN_100ac0cc gathers the defenders walking the unit table from the last
 * index down; the fight-order sort is stable, so two units of one type
 * fight in that order (Erythea round 8, side 7's estimate at (29,49): the
 * type-1 units valued 5 and 6, the higher index first). */
TEST(battle_defenders_come_in_unit_table_order)
{
    Battle b;
    short r0, r1, r2;
    fx_reset();
    fx_unit_types(29);
    r0 = fx_army(10, 10, 2, 1, -1, -1, -1);
    r1 = fx_army(10, 10, 2, 1, -1, -1, -1);
    r2 = fx_army(11, 10, 3, 4, -1, -1, -1);          /* the attacker */
    ARMY_REC(r0)[0x1e] = 3; ARMY_REC(r1)[0x1e] = 4; ARMY_REC(r2)[0x1e] = 5;
    UidReset();
    sArmyUid[r0][0] = 90; sArmyUid[r1][0] = 85; sArmyUid[r2][0] = 7;
    UidSync();
    BattleGather(&b, r2, 3, 10, 10, -1, 0, 0, 2);
    CHECK_EQ(b.nDef, 2);
    CHECK_EQ(b.def[0].rec, r0);                       /* index 90 before 85 */
    CHECK_EQ(b.def[1].rec, r1);
    CHECK_EQ(b.nAtt, 1);
}
