/*
 * t_sage.c - the computer's sage (PPC FUN_100126a4 -> FUN_10054af4).
 *
 * FUN_10054af4 rolls, in this order, a = Dice(1,5,8), b = Dice(1,5,8),
 * w = Dice(1,10,15), h = Dice(1,10,15); the corner (x-a, y-b) is clamped
 * to 0 and the size to the map (0x6f x 0x9b); every tile of the rect is
 * revealed (FUN_1000931c, a 3x3 reveal for a non-flying viewer).
 */

static void sage_explored_box(short p, short *x0, short *y0, short *x1, short *y1)
{
    short x, y;
    *x0 = *y0 = 1000; *x1 = *y1 = -1;
    for (y = 0; y < FOG_MAP_H; y++)
        for (x = 0; x < FOG_MAP_W; x++)
            if (FogGetBit(sFogExplored[p], x, y)) {
                if (x < *x0) *x0 = x;
                if (y < *y0) *y0 = y;
                if (x > *x1) *x1 = x;
                if (y > *y1) *y1 = y;
            }
}

/* {seed, x, y} -> the rect (x0, y0, w, h), from the PPC roll order */
struct sage_case { long seed; short x, y, x0, y0, w, h; };

TEST(sage_reveal_rect_golden)
{
    static const struct sage_case cases[] = {
        {1,           50,  60, 39,  49, 22, 16},
        {42,          50,  60, 39,  48, 23, 16},
        {0x2AA0D649L, 50,  60, 37,  49, 25, 20},
        {1,          105, 150, 94, 139, 17, 16},   /* clamped at the map edge */
        {42,         105, 150, 94, 138, 17, 16},
        {0x2AA0D649L,105, 150, 92, 139, 19, 16},
    };
    short i;
    for (i = 0; i < (short)(sizeof cases / sizeof cases[0]); i++) {
        short bx0, by0, bx1, by1;
        long expectSeed;
        short k;
        fx_reset();
        memset(sFogExplored, 0, sizeof sFogExplored);
        memset(sFogVisible, 0, sizeof sFogVisible);
        sAIMe = 3;
        *(short *)(fx_gs() + 0x124) = 1;     /* hidden map on (FUN_1000931c reveals only then) */
        fx_seed(cases[i].seed);
        AISageRevealRect(cases[i].x, cases[i].y);
        sage_explored_box(3, &bx0, &by0, &bx1, &by1);
        /* each rect tile opens its 3x3 neighbourhood (clipped to the map) */
        CHECK_EQ(bx0, cases[i].x0 > 0 ? cases[i].x0 - 1 : 0);
        CHECK_EQ(by0, cases[i].y0 > 0 ? cases[i].y0 - 1 : 0);
        CHECK_EQ(bx1, cases[i].x0 + cases[i].w);
        CHECK_EQ(by1, cases[i].y0 + cases[i].h);
        /* exactly four rolls */
        expectSeed = cases[i].seed;
        for (k = 0; k < 4; k++)
            expectSeed = (long)(((unsigned long long)expectSeed * 16807ULL) % 0x7FFFFFFFULL);
        CHECK_EQ(qd.randSeed, expectSeed);
        sAIMe = -1;
    }
}

/* the corner never goes below 0: a sage at the map's top-left */
TEST(sage_reveal_rect_corner_clamp)
{
    short bx0, by0, bx1, by1;
    fx_reset();
    memset(sFogExplored, 0, sizeof sFogExplored);
    sAIMe = 2;
    *(short *)(fx_gs() + 0x124) = 1;
    fx_seed(1);
    AISageRevealRect(3, 4);
    sage_explored_box(2, &bx0, &by0, &bx1, &by1);
    CHECK_EQ(bx0, 0);
    CHECK_EQ(by0, 0);
    CHECK(bx1 >= 15 && bx1 <= 25);    /* w = 16..25 from x0 = 0 */
    CHECK(by1 >= 15 && by1 <= 25);
    sAIMe = -1;
}

/* with the hidden map off the rect still rolls (the stream stays in step)
 * but reveals nothing */
TEST(sage_reveal_rect_rolls_even_without_fog)
{
    short bx0, by0, bx1, by1;
    long expectSeed = 1;
    short k;
    fx_reset();
    memset(sFogExplored, 0, sizeof sFogExplored);
    sAIMe = 2;
    fx_seed(1);
    AISageRevealRect(50, 60);
    sage_explored_box(2, &bx0, &by0, &bx1, &by1);
    CHECK_EQ(bx1, -1);
    for (k = 0; k < 4; k++)
        expectSeed = (long)(((unsigned long long)expectSeed * 16807ULL) % 0x7FFFFFFFULL);
    CHECK_EQ(qd.randSeed, expectSeed);
    sAIMe = -1;
}
