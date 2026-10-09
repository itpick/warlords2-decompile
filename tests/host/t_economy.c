/*
 * t_economy.c - income and upkeep.
 *
 * PPC FUN_1002bcd8: income = the sum of city+0x2a (the remake's +0x08)
 * over the cities the player owns (sites excluded) + cities x the gold
 * items of the player's heroes.
 * PPC FUN_1002bbd4: upkeep = the units' own upkeep bytes, nothing for a
 * record off the map (vectoring transit), at least 4 for an embarked unit.
 */

TEST(income_sums_owned_cities_only)
{
    fx_reset();
    fx_city(10, 10, 2, 1, 12);
    fx_city(20, 10, 2, 1, 7);
    fx_city(30, 10, 3, 1, 50);         /* someone else's */
    fx_city(40, 10, 2, 1, 99);
    sCityData[3 * 0x20 + 0x17] = 2;     /* a site: never income */
    fx_city(50, 10, 0x0F, 1, 20);       /* neutral */
    CHECK_EQ(PlayerIncome(2), 19);
    CHECK_EQ(PlayerIncome(3), 50);
    CHECK_EQ(PlayerIncome(0x0F), 20);
    CHECK_EQ(PlayerIncome(5), 0);
}

static void fx_upkeep(short rec, short k, signed char u)
{
    ARMY_REC(rec)[A_UPKEEP + k] = (unsigned char)u;
}

TEST(upkeep_sums_unit_bytes)
{
    short a, b, c;
    fx_reset();
    a = fx_army(5, 5, 1, 0, 1, -1, -1);
    fx_upkeep(a, 0, 2); fx_upkeep(a, 1, 3);
    fx_upkeep(a, 2, 9);                 /* empty slot: not counted */
    b = fx_army(6, 5, 1, 4, -1, -1, -1);
    fx_upkeep(b, 0, 5);
    c = fx_army(7, 5, 2, 4, -1, -1, -1);   /* another side */
    fx_upkeep(c, 0, 8);
    CHECK_EQ(PlayerUpkeep(1), 10);
    CHECK_EQ(PlayerUpkeep(2), 8);
    CHECK_EQ(PlayerUpkeep(3), 0);
}

TEST(upkeep_skips_transit_and_floors_embarked_at_4)
{
    short a, b;
    fx_reset();
    a = fx_army(-1, -1, 1, 0, -1, -1, -1);    /* vectoring transit: off the map */
    fx_upkeep(a, 0, 6);
    b = fx_army(8, 8, 1, 0, 1, -1, -1);
    fx_upkeep(b, 0, 1); fx_upkeep(b, 1, 6);
    ARMY_REC(b)[0x2C] |= ARMY_EMBARKED_BIT;   /* on a boat */
    CHECK_EQ(PlayerUpkeep(1), 4 + 6);         /* 1 -> 4, 6 stays 6 */
}

/* the upkeep a new unit is given (FUN_1004a5f0): its city slot's cost / 2,
 * toward zero, as a signed char */
TEST(slot_upkeep_is_half_the_slot_cost_toward_zero)
{
    static const signed char costs[6] = { 9, 8, 1, -1, -7, 0 };
    static const signed char want[6]  = { 4, 4, 0,  0, -3, 0 };
    short i;
    for (i = 0; i < 6; i++) {
        unsigned char *ec;
        fx_reset();
        fx_unit_types(29);
        sCitySlotStatsPending = false;
        fx_city(10, 10, 1, 1, 10);
        ec = (unsigned char *)*gExtState + 0x24c;
        *(short *)(ec + 0x06) = 7;            /* slot 0 builds type 7 */
        *(short *)(ec + 0x08) = -1;
        ec[0x44] = 3; ec[0x48] = 10;          /* filled stats (strength, moves) */
        ec[0x4C] = (unsigned char)costs[i];
        CHECK_EQ(CitySlotStat(0, 7, 2), costs[i]);
        CHECK_EQ((signed char)SlotUpkeep(0, 7), want[i]);
    }
}

/* the ledger the trace checks rely on: next turn's gold is this turn's
 * plus income minus upkeep - here on the remake's own two functions */
TEST(income_upkeep_ledger_example)
{
    short a;
    long gold = 176;
    fx_reset();
    fx_city(10, 10, 4, 1, 20);
    fx_city(14, 10, 4, 1, 12);
    a = fx_army(10, 10, 4, 0, 1, -1, -1);
    fx_upkeep(a, 0, 3); fx_upkeep(a, 1, 3);
    gold += PlayerIncome(4) - PlayerUpkeep(4);
    CHECK_EQ(gold, 176 + 32 - 6);
}
