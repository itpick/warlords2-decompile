/*
 * t_dice.c - the random number stream.
 *
 * In the original every random number is a Dice roll: FUN_1005f230 is the
 * only caller of Toolbox Random() (one `bl 0x10002970` in the PPC code
 * section, docs/2026-10-03-dice-sites.md).  Same-seed fidelity therefore
 * needs (1) the Toolbox generator, (2) FUN_1005f230's die mapping
 * trunc(|r| / 32767.0 * sides + 1.0) with its clamp, and (3) exactly one
 * Random() per die.
 */

/* Toolbox Random(): Park-Miller from seed 1 gives 16807, 282475249 ... */
TEST(toolbox_random_park_miller)
{
    static const short seed1[5] = { 16807, 15089, -21287, 3114, -18558 };
    static const short seed42[5] = { -15002, -21617, 23481, -265, 7018 };
    short i;
    fx_seed(1);
    for (i = 0; i < 5; i++) CHECK_EQ(Random(), seed1[i]);
    CHECK_EQ(qd.randSeed, 1144108930L);   /* 16807^5 mod (2^31-1) */
    fx_seed(42);
    for (i = 0; i < 5; i++) CHECK_EQ(Random(), seed42[i]);
}

/* Golden rolls for FUN_1005f230 from three seeds; 0x2AA0D649 is the seed
 * at which the overview hill pool was validated against the original. */
TEST(dice_d6_golden_sequences)
{
    static const short s1[8]  = { 4, 3, 4, 1, 4, 2, 6, 1 };
    static const short s42[8] = { 3, 4, 5, 1, 2, 2, 6, 5 };
    static const short sx[8]  = { 5, 4, 6, 3, 1, 1, 4, 6 };
    short i;
    fx_seed(1);
    for (i = 0; i < 8; i++) CHECK_EQ(Dice(1, 6, 0), s1[i]);
    fx_seed(42);
    for (i = 0; i < 8; i++) CHECK_EQ(Dice(1, 6, 0), s42[i]);
    fx_seed(0x2AA0D649L);
    for (i = 0; i < 8; i++) CHECK_EQ(Dice(1, 6, 0), sx[i]);
}

/* the sage's gold roll Dice(3,500,500) (FUN_10054824 / FUN_100126a4) */
TEST(dice_multi_die_golden)
{
    fx_seed(1);           CHECK_EQ(Dice(3, 500, 500), 1313);
    fx_seed(42);          CHECK_EQ(Dice(3, 500, 500), 1418);
    fx_seed(0x2AA0D649L); CHECK_EQ(Dice(3, 500, 500), 1676);
}

/* one Toolbox Random() per die, none for sides == 0 */
TEST(dice_consumes_one_random_per_die)
{
    long after;
    short i;
    fx_seed(1234);
    (void)Dice(3, 6, 0);
    after = qd.randSeed;
    fx_seed(1234);
    for (i = 0; i < 3; i++) (void)Random();
    CHECK_EQ(after, qd.randSeed);

    fx_seed(1234);
    CHECK_EQ(Dice(4, 0, 7), 7);           /* sides 0: add, no roll */
    CHECK_EQ(qd.randSeed, 1234);
    CHECK_EQ(Dice(0, 6, 3), 3);           /* no dice: add (clamp to add+0) */
    CHECK_EQ(qd.randSeed, 1234);
}

/* the clamp [add+n, add+n*sides]: r = -32768 (|r| > 32767) would give
 * sides+1 and r = 32767 gives exactly sides+1 too; both clamp to sides */
TEST(dice_range_and_clamp)
{
    short i, lo = 100, hi = -100, v;
    short hist[7];
    memset(hist, 0, sizeof hist);
    fx_seed(99);
    for (i = 0; i < 20000; i++) {
        v = Dice(1, 6, 0);
        if (v < lo) lo = v;
        if (v > hi) hi = v;
        if (v >= 1 && v <= 6) hist[v]++;
    }
    CHECK_EQ(lo, 1);
    CHECK_EQ(hi, 6);
    for (i = 1; i <= 6; i++) CHECK(hist[i] > 2800 && hist[i] < 3900);

    fx_seed(7);
    for (i = 0; i < 5000; i++) {
        v = Dice(1, 11, -6);              /* the sage's target offset */
        CHECK(v >= -5 && v <= 5);
    }
    fx_seed(7);
    for (i = 0; i < 2000; i++) {
        v = Dice(2, 8, -1);
        CHECK(v >= 1 && v <= 15);
    }
}

/* the extremes: a seed whose next Random() is 32767 maps to sides + 1
 * before the clamp, and 0x8000 comes back from Random() as 0 (die 1) */
TEST(dice_extreme_random_values)
{
    fx_seed(1468369261L);                 /* next seed 0x17FFF -> r = 32767 */
    CHECK_EQ(Dice(1, 6, 0), 6);           /* 7 before the clamp */
    fx_seed(1468369261L);
    CHECK_EQ(Random(), 32767);
    fx_seed(728562614L);                  /* next seed 0x18000 -> r = 0 */
    CHECK_EQ(Random(), 0);
    fx_seed(728562614L);
    CHECK_EQ(Dice(1, 6, 0), 1);
    fx_seed(1468369261L);
    CHECK_EQ(Dice(1, 20, 0), 20);
}
