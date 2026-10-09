/*
 * t_citystats.c - the new-game per-city production slot rolls.
 *
 * PPC FUN_1003b9f8 (PPC_0002.c:2120-2212): per filled slot, in this order,
 *   1d100 < 10: 1d100 < 60 strength +1 (cap 9), else -1 (floor 1)
 *   1d100 < 20: 1d100 < 10 moves +4, < 60 +2, < 95 -2 (floor 2), else -4
 *   moves below 6 become 6
 *   1d100 < 10: 1d100 < 60 cost -= trunc(cost/4), else += (signed char)
 *   1d100 < 10: 1d100 < 60 turns -1 (floor 1), else +1
 * The expected values below come from an independent transcription of the
 * PPC loop (not of the port) over the Toolbox Random() model.
 */

/* ext+0x24c+ci*0x5c: +0x06 slot types (shorts), +0x40 turns, +0x44 strength,
 * +0x48 moves, +0x4C cost (signed char) */
static unsigned char *fx_city_ext(short ci)
{
    return (unsigned char *)*gExtState + 0x24c + ci * 0x5c;
}

static void fx_slots(short ci, const short st[4], const short mv[4],
                     const short cost[4], const short turns[4], short filled)
{
    unsigned char *ec = fx_city_ext(ci);
    short k;
    for (k = 0; k < 4; k++) {
        *(short *)(ec + 0x06 + k * 2) = (k < filled) ? k : -1;
        ec[0x44 + k] = (unsigned char)st[k];
        ec[0x48 + k] = (unsigned char)mv[k];
        ec[0x4C + k] = (unsigned char)(signed char)cost[k];
        ec[0x40 + k] = (unsigned char)turns[k];
    }
}

struct jitter_case { long seed; short st[4], mv[4], cost[4], turns[4]; long seedAfter; };

TEST(city_slot_jitter_golden_vs_ppc)
{
    static const short st[4] = {3, 5, 9, 1}, mv[4] = {10, 6, 12, 8};
    static const short cost[4] = {4, -7, 8, 12}, turns[4] = {1, 2, 3, 1};
    static const struct jitter_case cases[] = {
        {1,          {3, 5, 8, 1}, {10, 6, 12, 8}, {4, -7, 8, 12}, {1, 1, 3, 1}, 16531729L},
        {42,         {3, 5, 9, 1}, {10, 6, 14, 8}, {4, -7, 6, 12}, {1, 2, 3, 1}, 222172928L},
        {0x2AA0D649L,{3, 6, 9, 1}, {10, 6, 12, 8}, {4, -7, 8, 12}, {1, 2, 3, 1}, 804103779L},
        {123456789L, {3, 5, 9, 2}, {10, 6, 12, 8}, {4, -7, 8, 12}, {1, 2, 3, 1}, 1927375294L},
        {987654321L, {3, 5, 9, 1}, {12, 6, 12, 8}, {4, -7, 8, 12}, {1, 2, 3, 1}, 473255884L},
        {5,          {3, 5, 9, 1}, {10, 6, 16, 8}, {4, -7, 8, 12}, {1, 2, 3, 1}, 763960694L},
        {77,         {3, 5, 9, 1}, {10, 10, 12, 8},{5, -7, 8, 12}, {1, 2, 3, 1}, 1123144917L},
        {2024,       {3, 5, 8, 1}, {8, 6, 12, 8},  {4, -8, 8, 12}, {1, 3, 3, 1}, 619954343L},
    };
    short i, k;
    for (i = 0; i < (short)(sizeof cases / sizeof cases[0]); i++) {
        unsigned char *ec;
        fx_reset();
        fx_unit_types(29);
        fx_city(10, 10, 0, 1, 10);
        fx_slots(0, st, mv, cost, turns, 4);
        fx_seed(cases[i].seed);
        JitterCitySlotStats();
        ec = fx_city_ext(0);
        for (k = 0; k < 4; k++) {
            CHECK_EQ(ec[0x44 + k], cases[i].st[k]);
            CHECK_EQ(ec[0x48 + k], cases[i].mv[k]);
            CHECK_EQ((signed char)ec[0x4C + k], cases[i].cost[k]);
            CHECK_EQ(ec[0x40 + k], cases[i].turns[k]);
        }
        CHECK_EQ(qd.randSeed, cases[i].seedAfter);   /* same number of rolls */
    }
}

/* an unfilled slot ends the city's pass (the PPC `break` on a negative
 * type); sites (kind >= 2) are skipped and roll nothing */
TEST(city_slot_jitter_stops_at_empty_slot_and_skips_sites)
{
    static const short st[4] = {3, 3, 3, 3}, mv[4] = {10, 10, 10, 10};
    static const short cost[4] = {4, 4, 4, 4}, turns[4] = {1, 1, 1, 1};
    long seedOne, seedNone;
    fx_reset();
    fx_unit_types(29);
    fx_city(10, 10, 0, 1, 10);
    fx_slots(0, st, mv, cost, turns, 1);
    fx_seed(1);
    JitterCitySlotStats();
    seedOne = qd.randSeed;

    fx_reset();
    fx_unit_types(29);
    fx_city(10, 10, 0, 1, 10);
    sCityData[0x17] = 2;                       /* a site, not a city */
    fx_slots(0, st, mv, cost, turns, 4);
    fx_seed(1);
    JitterCitySlotStats();
    seedNone = qd.randSeed;
    CHECK_EQ(seedNone, 1);                     /* no rolls for a site */
    CHECK(seedOne != 1);                       /* one slot rolled */

    /* one filled slot uses at least 4 and at most 8 rolls */
    {
        long s = 1;
        short n;
        Boolean seen = false;
        for (n = 0; n <= 8; n++) {
            if (n >= 4 && s == seedOne) seen = true;
            s = (long)(((unsigned long long)s * 16807ULL) % 0x7FFFFFFFULL);
        }
        CHECK(seen);
    }
}

/* moves below 6 always become 6, whatever the rolls */
TEST(city_slot_jitter_moves_floor_6)
{
    static const short st[4] = {3, 3, 3, 3}, mv[4] = {2, 3, 4, 5};
    static const short cost[4] = {4, 4, 4, 4}, turns[4] = {1, 1, 1, 1};
    long seed;
    short k;
    for (seed = 1; seed < 60; seed++) {
        unsigned char *ec;
        fx_reset();
        fx_unit_types(29);
        fx_city(10, 10, 0, 1, 10);
        fx_slots(0, st, mv, cost, turns, 4);
        fx_seed(seed * 7919);
        JitterCitySlotStats();
        ec = fx_city_ext(0);
        for (k = 0; k < 4; k++) CHECK(ec[0x48 + k] >= 6);
    }
}
