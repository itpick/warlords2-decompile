/*
 * t_combat.c - the battle engine.
 *
 * FUN_1002d654 (BattleRounds): units fight in order, one pair at a time;
 * each exchange rolls the defender's die first, then the attacker's
 * (1d20, 1d24 with Intense Combat); a side fails when its value is below
 * its die; when exactly one side fails it takes a hit; a unit has 2 hits
 * (hp 1, dead below 0).  An empty side means the attacker won.
 * FUN_100ac0cc (BattleValues): value = strength + side bonus (+ the hero's
 * battle items) + the terrain stat, capped at 15; side bonus = leadership +
 * the best stack-terrain stat (+1 special 4), capped at the scenario
 * maximum (gs+0x112), then the enemy's penalty; the defender adds the site
 * (tower 1, ruin 2, city its defence; halved for neutrals).
 */

static void battle_init(Battle *b, short mOwner, short tileOwner)
{
    memset(b, 0, sizeof *b);
    b->mOwner = mOwner;
    b->defOwner = tileOwner;
    b->tileOwner = tileOwner;
    b->cityIdx = -1;
    b->mx = 20; b->my = 20;
    b->terr = 0;
    b->cls = 1;
}

static void battle_add(Battle *b, Boolean att, short type, short str, short value)
{
    BattleUnit *u = att ? &b->att[b->nAtt++] : &b->def[b->nDef++];
    memset(u, 0, sizeof *u);
    u->rec = -1;
    u->type = type;
    u->str = str;
    u->value = value;
    u->hp = 1;
}

/* An independent model of FUN_1002d654's exchange loop for one attacker
 * unit against one defender unit: returns 1 when the attacker wins. */
static int ref_duel(short av, short dv, short N)
{
    short ahp = 1, dhp = 1;
    for (;;) {
        short rd = Dice(1, N, 0), ra = Dice(1, N, 0);
        Boolean df = dv < rd, af = av < ra;
        if (df && !af) { if (--dhp < 0) return 1; }
        else if (af && !df) { if (--ahp < 0) return 0; }
    }
}

TEST(battle_empty_side_attacker_wins)
{
    Battle b;
    fx_reset();
    battle_init(&b, 1, 2);
    battle_add(&b, true, 0, 3, 3);
    CHECK(BattleRounds(&b, false));
    battle_init(&b, 1, 2);
    battle_add(&b, false, 0, 3, 3);
    CHECK(BattleRounds(&b, false));
}

/* the remake's rounds agree with the reference exchange, roll for roll */
TEST(battle_duel_matches_reference_model)
{
    static const short vals[][2] = { {1, 1}, {5, 5}, {9, 3}, {3, 9}, {15, 1}, {1, 15}, {12, 11} };
    short v, s;
    fx_reset();
    sOptIntenseCombat = false;
    for (v = 0; v < (short)(sizeof vals / sizeof vals[0]); v++) {
        for (s = 1; s <= 40; s++) {
            Battle b;
            int want;
            long seedAfterRef;
            Boolean got;
            fx_seed(s * 1000 + v);
            want = ref_duel(vals[v][0], vals[v][1], 20);
            seedAfterRef = qd.randSeed;
            battle_init(&b, 1, 2);
            battle_add(&b, true, 0, vals[v][0], vals[v][0]);
            battle_add(&b, false, 0, vals[v][1], vals[v][1]);
            fx_seed(s * 1000 + v);
            got = BattleRounds(&b, false);
            CHECK_EQ(got, want);
            CHECK_EQ(qd.randSeed, seedAfterRef);
        }
    }
}

/* Intense Combat rolls a 24-sided die (gs option, FUN_1002d654) */
TEST(battle_intense_combat_uses_d24)
{
    short s;
    fx_reset();
    sOptIntenseCombat = true;
    for (s = 1; s <= 40; s++) {
        Battle b;
        int want;
        long after;
        fx_seed(s * 31);
        want = ref_duel(15, 15, 24);
        after = qd.randSeed;
        battle_init(&b, 1, 2);
        battle_add(&b, true, 0, 15, 15);
        battle_add(&b, false, 0, 15, 15);
        fx_seed(s * 31);
        CHECK_EQ(BattleRounds(&b, false), want);
        CHECK_EQ(qd.randSeed, after);
    }
    sOptIntenseCombat = false;
}

/* a strong attacker beats a weak defender nearly always; the stack fights
 * unit by unit and the kills are recorded in order */
TEST(battle_strength_dominates_and_kills_recorded)
{
    short s, wins = 0;
    fx_reset();
    for (s = 1; s <= 200; s++) {
        Battle b;
        fx_seed(s);
        battle_init(&b, 1, 2);
        battle_add(&b, true, 0, 15, 15);
        battle_add(&b, false, 0, 1, 1);
        battle_add(&b, false, 0, 1, 1);
        if (BattleRounds(&b, false)) wins++;
    }
    CHECK(wins >= 190);
    {
        Battle b;
        fx_seed(5);
        battle_init(&b, 1, 2);
        battle_add(&b, true, 3, 15, 15);
        battle_add(&b, false, 4, 1, 1);
        battle_add(&b, false, 6, 1, 1);
        sBattleKillN = 0;
        if (BattleRounds(&b, true)) {
            CHECK_EQ(sBattleKillN, 2);
            CHECK_EQ(sBattleKillT[0], 4);
            CHECK_EQ(sBattleKill[0], 0);       /* 0: a defender fell */
            CHECK_EQ(sBattleKillT[1], 6);
        }
    }
}

/* the tutorial spares a human's hero against neutrals: the attacker never
 * loses a hit, so the battle is always won */
TEST(battle_tutorial_spares_human_hero_vs_neutrals)
{
    short s;
    fx_reset();
    *(short *)(fx_gs() + 0x12e) = 1;            /* tutorial */
    *(short *)(fx_gs() + 0xd0 + 1 * 2) = 0;     /* side 1 human */
    for (s = 1; s <= 30; s++) {
        Battle b;
        fx_seed(s);
        battle_init(&b, 1, 0x0F);
        battle_add(&b, true, 0x1C, 1, 1);
        battle_add(&b, false, 0, 9, 9);
        CHECK(BattleRounds(&b, false));
    }
}

/* ---- BattleValues ---- */

static void values_world(void)
{
    short t;
    fx_reset();
    fx_unit_types(29);
    for (t = 0; t < 29; t++) {
        short k;
        for (k = 0; k < 20; k++) fx_unit_stat(t, k, 0);
    }
}

TEST(battle_values_plain_open_ground)
{
    Battle b;
    values_world();
    battle_init(&b, 1, 2);
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.att[0].value, 4);
    CHECK_EQ(b.def[0].value, 3);
}

TEST(battle_values_city_defence_halved_for_neutrals_and_capped)
{
    Battle b;
    short ci;
    values_world();
    ci = fx_city(20, 20, 2, 3, 10);              /* defence 3 */
    /* an owned city: +3 */
    battle_init(&b, 1, 2);
    b.cls = 0; b.terr = 10; b.cityIdx = ci; b.cx = 20; b.cy = 20;
    fx_tile(20, 20, 0, 0x02);                    /* owner nibble 2 */
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.def[0].value, 6);
    CHECK_EQ(b.att[0].value, 4);
    /* the same city neutral: half, 1 */
    fx_tile(20, 20, 0, 0x0F);
    battle_init(&b, 1, 0x0F);
    b.cls = 0; b.terr = 10; b.cityIdx = ci; b.cx = 20; b.cy = 20;
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.def[0].value, 4);
    /* defence 9 is capped at the scenario maximum 5 */
    *(short *)(sCityData + ci * 0x20 + 0x06) = 9;
    fx_tile(20, 20, 0, 0x02);
    battle_init(&b, 1, 2);
    b.cls = 0; b.terr = 10; b.cityIdx = ci; b.cx = 20; b.cy = 20;
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.def[0].value, 8);
    /* and the value never passes 15 */
    battle_init(&b, 1, 2);
    b.cls = 0; b.terr = 10; b.cityIdx = ci; b.cx = 20; b.cy = 20;
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, false, 1, 13, 0);
    BattleValues(&b);
    CHECK_EQ(b.def[0].value, 15);
}

TEST(battle_values_attacker_special_1_cancels_the_site)
{
    Battle b;
    short ci;
    values_world();
    fx_unit_stat(0, 15, 1);                      /* type 0: special 1 */
    ci = fx_city(20, 20, 2, 3, 10);
    fx_tile(20, 20, 0, 0x02);
    battle_init(&b, 1, 2);
    b.cls = 0; b.terr = 10; b.cityIdx = ci; b.cx = 20; b.cy = 20;
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.def[0].value, 3);
}

TEST(battle_values_stack_terrain_bonus_and_enemy_penalty)
{
    Battle b;
    values_world();
    fx_unit_stat(2, 9 + 1, 2);                   /* type 2: +2 stack bonus in class 1 */
    fx_unit_stat(3, 14, -1);                     /* type 3: penalty -1 on the enemy */
    battle_init(&b, 1, 2);
    battle_add(&b, true, 0, 4, 0);
    battle_add(&b, true, 2, 3, 0);
    battle_add(&b, false, 3, 5, 0);
    BattleValues(&b);
    /* the attackers: +2 for the whole stack, -1 from the defender's penalty */
    CHECK_EQ(b.att[0].value + b.att[1].value, (4 + 1) + (3 + 1));
    CHECK_EQ(b.def[0].value, 5);
}

TEST(battle_values_embarked_on_water_is_4)
{
    Battle b;
    values_world();
    battle_init(&b, 1, 2);
    b.terr = 2;                                   /* water */
    battle_add(&b, true, 0, 9, 0);
    b.att[0].embarked = true;
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.att[0].value, 4);
    /* an embarked stack attacking from land fights at full value */
    battle_init(&b, 1, 2);
    b.terr = 0;
    battle_add(&b, true, 0, 9, 0);
    b.att[0].embarked = true;
    battle_add(&b, false, 1, 3, 0);
    BattleValues(&b);
    CHECK_EQ(b.att[0].value, 9);
}
