/*
 * fixtures.h - build a small synthetic game world for a test.
 *
 * Byte offsets follow main.c (and through it the PPC game state):
 *   gs+0x1602        army record count (short)
 *   gs+0x112         the scenario's maximum battle bonus (5 in every SCN)
 *   sCityData        0x20-byte city records: +0 x, +2 y, +4 owner,
 *                    +6 defence, +8 income, +0x17 kind (0 city, >=2 site)
 *   ARMY_REC(i)      0x42-byte army records: +0 x, +2 y, +0x15 owner,
 *                    +0x16..+0x19 unit types (0xFF empty), +0x22.. upkeep,
 *                    +0x2C status (bit 0x10 embarked)
 *   gMapTiles        0xE0 bytes per row, 2 bytes per tile (terrain, flags)
 *
 * Shorts are written with the host's native order, the same way main.c
 * reads them, so a fixture never needs byte swapping.
 */
#ifndef WL2_FIXTURES_H
#define WL2_FIXTURES_H

#define FX_MAP_W 112      /* 0x6f + 1: the original's map width  */
#define FX_MAP_H 156      /* 0x9b + 1: the original's map height */

static void fx_seed(long seed) { qd.randSeed = (int32_t)seed; }

static void fx_reset(void)
{
    if (*gGameState == 0) *gGameState = (pint)NewPtrClear(0x2FCC);
    else memset((void *)*gGameState, 0, 0x2FCC);
    if (*gExtState == 0) *gExtState = (pint)NewPtrClear(0x4000);
    else memset((void *)*gExtState, 0, 0x4000);
    if (*gMapTiles == 0) *gMapTiles = (pint)NewPtrClear(0xE0 * (FX_MAP_H + 4));
    else memset((void *)*gMapTiles, 0, 0xE0 * (FX_MAP_H + 4));
    sMapWidth = FX_MAP_W;
    sMapHeight = FX_MAP_H;
    memset(sCityData, 0, sizeof sCityData);
    memset(sArmyTab, 0, sizeof sArmyTab);
    memset(sArmyState, 0, sizeof sArmyState);
    sCityCount = 0;
    *(short *)((unsigned char *)*gGameState + 0x112) = 5;   /* max side bonus */
    fx_seed(1);
}

static unsigned char *fx_gs(void) { return (unsigned char *)*gGameState; }

/* a city at (x, y); returns its index */
static short fx_city(short x, short y, short owner, short defence, short income)
{
    unsigned char *c = sCityData + sCityCount * 0x20;
    *(short *)(c + 0x00) = x;
    *(short *)(c + 0x02) = y;
    *(short *)(c + 0x04) = owner;
    *(short *)(c + 0x06) = defence;
    *(short *)(c + 0x08) = income;
    c[0x17] = 0;
    return sCityCount++;
}

/* an army record with up to four unit types (-1 / 0xFF = empty slot) */
static short fx_army(short x, short y, short owner, short t0, short t1, short t2, short t3)
{
    unsigned char *gs = fx_gs();
    short i = *(short *)(gs + 0x1602), k;
    unsigned char *a = ARMY_REC(i);
    short t[4];
    t[0] = t0; t[1] = t1; t[2] = t2; t[3] = t3;
    memset(a, 0, ARMY_REC_SIZE);
    *(short *)(a + 0x00) = x;
    *(short *)(a + 0x02) = y;
    a[0x15] = (unsigned char)owner;
    for (k = 0; k < 4; k++) a[0x16 + k] = (t[k] < 0) ? 0xFF : (unsigned char)t[k];
    *(short *)(gs + 0x1602) = (short)(i + 1);
    return i;
}

/* a unit-type table entry: the stat shorts at +0x16 are little-endian, as
 * the original's DAT 20000 / 30000 holds them (UnitStatLE) */
static void fx_unit_stat(short t, short k, short v)
{
    unsigned char *e = sUnitTypeTable + t * UNIT_TYPE_ENTRY + 0x16 + k * 2;
    e[0] = (unsigned char)(v & 0xFF);
    e[1] = (unsigned char)((v >> 8) & 0xFF);
}
static void fx_unit_types(short count)
{
    memset(sUnitTypeTable, 0, sizeof sUnitTypeTable);
    sUnitTypeCount = count;
    sUnitTypesLoaded = true;
}

static void fx_tile(short x, short y, unsigned char terr, unsigned char flags)
{
    unsigned char *m = (unsigned char *)*gMapTiles;
    m[y * 0xE0 + x * 2] = terr;
    m[y * 0xE0 + x * 2 + 1] = flags;
}

#endif
