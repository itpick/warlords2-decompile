# AI phase 2 / heroes: exact spec of the dropped-switch functions (PPC 1.0.7)

Sources: disassembly of `tools/ppc_verification/wl2_code.bin` (capstone), jump tables decoded with jt.py
(TOC = data+0x26c8), decompile `tools/ppc_decompiled/PPC_000{1,2}.c`. Remake = `src/main.c` (snapshot taken
during this session; main.c was being edited concurrently, so cite by function name, not line).
Scratch dumps: `scratchpad/ai2dir/b1.txt` (FUN_100164e4), `scratchpad/classify.txt`, `scratchpad/handover.txt`.

Notation: `Dice(n,s,a)` = FUN_1005f230. `unit` = original 0x16-byte unit record (`+0 x, +2 y, +4 type, +5 owner,
+7 MP (signed char), +8 strength, +0xc u32 orders: bits 0-6 target, 9-11 front, 12-15 type; high half = flags,
+0x12/+0x14 dest`). `AI` = per-player block (_DAT_3be00000). `cityRec(c)` = gs+0x1604+c*0x42 (the ORIGINAL city
array; `+0x15` owner byte). `site(s)` = gs+0x812+s*0x20 (`+0 x, +2 y, +0x18 kind (1 temple,2 item,3 sage,4 gold,
5 allies), +0x19 item idx, +0x1a guardian / ally type, +0x1c hidden, +0x1e known mask`). Items: gs+0xd12+i*0x1e
(`+0x14 type, +0x15 value, +0x16 status, +0x18 carrier unit, +0x1a/+0x1c x,y`). Quest record Q = gs+0x1142+p*0xC
(`active, type, heroUnit, target, amount, progress` shorts).

---------------------------------------------------------------------------------------------------------------

## 1. B1 — FUN_100164e4, the hero step (jump table 0x100169ac)

Jump table (`-0x1d0c(r2)`, index r-1): r=1 → 0x1001685c, r=2 → 0x10016874, r=3 → 0x10016874, r=4 → 0x10016890;
anything else → 0x100168a8 (default).

### (a) Original, exact

```c
void FUN_100164e4(void)
{
    /* 0x10016510-0x1001653c: a loop k=3..0 that reads AI+0x24c+k*0x5c and does nothing (dead code) */
    AI->questCity /* +0x46 */ = -1;
    if (gs[0x11e] /*quests*/ && Q(me).active && (Q(me).type == 4 || Q(me).type == 5))
        AI->questCity = Q(me).target;                       /* the city index */
    FUN_10014e44(list);        /* list[0..5] hero units, list[6..11] their city (-1),
                                  list+0x30 temple, +0x32 templeD, +0x34 ruin, +0x36 ruinD, +0x38 cityT, +0x3c item */
    for (k = 5; k >= 0; k--) {
        u = list[k];
        if (u == -1 || unit[u].owner != me || unit[u].type != 0x1C) continue;
        FUN_100151e8(u);                                     /* search the site it stands on */
        if (list[6+k] >= 0) FUN_10010b30(list[6+k], 1);      /* garrison the hero's city */
        if (gs[0x11e] && Q(me).active && Q(me).heroUnit == u && FUN_10015324(k, list) != 0)
            continue;                                        /* quest move done: next hero */
        if (((unit[u].orders >> 12) & 0xF) == 3) {           /* ordered to a ruin */
            if (FUN_10015030(unit[u].orders & 0x7f, u) != 0) {          /* still valid */
                list[0x34/2] = unit[u].orders & 0x7f;
                FUN_10015554(k, 3, list, 0);                 /* result ignored */
            } else {                                         /* invalid: clear the orders */
                t = (unit[u].orders >> 12) & 0xF;            /* (== 3) */
                for (v = gs[0x182] /*unit count*/ - 1; v >= 0; v--)
                    if (unit[v].owner == me && unit[v].x == unit[u].x && unit[v].y == unit[u].y &&
                        ((unit[v].orders >> 12) & 0xF) == t) {          /* any front */
                        unit[v].orders &= ~0xF000; unit[v].orders &= ~0x7f;
                        unit[v].destY = -1; unit[v].destX = -1;        /* flags untouched */
                    }
            }
        }
        iter = 0; acted = 0;
        if (unit[u].MP < 4) continue;
        do {
            iter++;
            FUN_100159c8(k, list);  FUN_10015dc8(k, list);  FUN_10015f98(k, list);
            choice = FUN_100161fc(k, list);                  /* 1 temple, 2 item, 3 ruin, 4 city, 0 none */
            switch (choice) {
            case 1:  r = FUN_10015554(k, 0, list, 1);          break;   /* acted unchanged */
            case 2:
            case 3:  r = FUN_10015554(k, choice, list, 0); acted = 1; break;
            case 4:  r = FUN_10016344(k, list, 0);  acted = 1; break;   /* FUN_10016344 always returns 0 */
            default:
                if (acted && gs[0x124] /*hidden map*/ && max(gs[0x136],1) < 10 &&
                    FUN_1001ed3c(unit[u].x, unit[u].y, tmp, 8) == 1)    /* own units here with MP >= 8 */
                    FUN_1001a348(u, -1);                     /* release the hero as a free roamer */
                r = 0;
            }
            if (unit[u].owner != me || unit[u].type != 0x1C) r = 0;
        } while (r != 0 && iter < 2 && unit[u].MP >= 4);
    }
}
```

FUN_10015554 returns 1 only when the final FUN_10018180 move returned 4 (arrived); 0 otherwise (incl. the
"stay home" early return). So the second pass happens only when the hero ARRIVED at a temple / item / ruin.
The release can only fire on the second pass, after an item/ruin arrival in pass 1 and no choice in pass 2.

### (b) Remake AIStepHeroes — differences and fix

1. One pass only; no `iter`/`acted` loop; no default-case release.
2. questCity and the quest gate read the invented `sPlayerQuests`/QUEST_CAPTURE. Must read Q(me) (gs+0x1142):
   types 4 AND 5, target = Q.target. The AIHeroQuest gate must also require `Q.heroUnit == this hero`
   (the remake calls it for any hero whenever a quest is active).
3. The invalid-ruin clear uses `AIStackAt(x,y, front, 3, 0)`: the original clears every own record on the tile
   with order type 3 regardless of front (B19), clearing type/target/dest only.

Replacement for the tail of the per-hero body (after the type-3 block):

```c
        if (AIRecMP(rec) > 3) {
            short iter = 0;
            Boolean acted = false, r;
            do {
                short choice;
                iter++;
                AIHeroPickSites(i, &h);
                AIHeroPickItem(i, &h);
                AIHeroPickCity(i, &h);
                choice = AIHeroChoose(i, &h);
                switch (choice) {
                    case 1:  r = AIHeroGoSite(i, 0, &h, true); break;
                    case 2:
                    case 3:  r = AIHeroGoSite(i, choice, &h, false); acted = true; break;
                    case 4:  AIHeroGoCity(i, &h); r = false; acted = true; break;
                    default: {
                        AIStack one;
                        if (acted && AIHidden() && AITurn() < 10 &&
                            AIStackAtAny(AIRecX(rec), AIRecY(rec), 8, &one) == 1)
                            AIFreeRoam(rec, -1);                 /* FUN_1001a348(hero, -1) */
                        r = false;
                    }
                }
                /* the hero may have moved / merged / split: find it again (as after AIGarrison) */
                rec = AIFindHeroRec(heroId);                     /* -1 when dead or captured */
                if (rec < 0 || !AIRecMine(rec) || !AIRecHasHero(rec)) r = false;
                else h.rec[i] = rec;
            } while (r && iter < 2 && AIRecMP(rec) >= 4);
        }
```

Notes: `AIRecMP` must be the HERO's MP (the original tests the hero unit's +7). The release releases the hero
unit only; if the remake's hero record carries other units (MP < 8), split the hero out
(SplitUnitsOff) before AIFreeRoam. `AIFindHeroRec` is whatever re-locate step the remake already does after
AIGarrison (by hero identity, not by tile).

FUN_10015324 (the quest move) — see item 6.

---------------------------------------------------------------------------------------------------------------

## 2. B2 — FUN_1001c854 / FUN_1001c6fc (jump table 0x1001ca1c)

Jump table (`-0x1d00(r2)`, index r): r=0 → 0x1001c978, r=1 → 0x1001c970, r=2 → 0x1001c9e8, r=3 → 0x1001c970.

### (a) Original, exact

```c
int FUN_1001c854(short f)
{
    for (k = 3; k >= 0; ) {
        FUN_1001b4ac(f);                                   /* validate the front's stacks (every pass) */
        u = AI->front[f].stacks[k];                        /* AI+0x28a+f*0x5c+k*2 */
        if (u == -1) { k--; continue; }
        n = FUN_1001ee88(unit[u].x, unit[u].y, list, (unit[u].orders>>9)&7, (unit[u].orders>>12)&0xF, 0);
        if (n == 0) { k--; continue; }
        FUN_10041de8();                                    /* UI only */
        FUN_100448e4(15, unit[u].x, unit[u].y, g1, g2);    /* flood radius 15 */
        r = FUN_1001c6fc(f, list, AI->front[f].targetPlayer, 15);
        switch (r) {
        case 0: {                                          /* nothing attacked */
            tgt = -1;
            for (j = 7; j >= 0; j--)                       /* the LAST filled list entry */
                if (list[j] != -1) { if (((unit[list[j]].orders>>12)&0xF) == 1) tgt = unit[list[j]].orders & 0x7f; break; }
            if (tgt != -1) FUN_1001c2dc(f, list, tgt);
            k--; break;
        }
        case 1: case 3: k--; break;
        case 2: break;                                     /* repeat the same k */
        default: break;                                    /* (unreachable: r is 0..3) repeat */
        }
    }
    return 1;
}

int FUN_1001c6fc(short f, short *list, short tp, short radius /*15*/)
{
    grid = FUN_10044950();
    best = -1; bestD = 1000;
    for (c = cityCount - 1; c >= 0; c--) {
        if (cityRec(c).owner != tp) continue;              /* owner byte only, no terrain test */
        d = FUN_10020d88(c, &a, &b, grid, 0);              /* ring reach cost, cap 100 */
        if (d >= 50 || d >= *(short*)TOC[-0x1a4]) continue;/* same global as FUN_1001b584's MP bound */
        if (FUN_1001eff8(city x, y) /*winEst*/ <= 75) continue;
        if (d < bestD) { best = c; bestD = d; }
    }
    r = FUN_1001b584(f, list, tp, radius, grid);           /* field attack: returns 0 or 2 */
    if (r != 0 && best != -1) r = FUN_1001c2dc(f, list, best);   /* returns 1 captured / 3 stopped */
    FUN_100449bc();
    return r;                                              /* 0, 1, 2 or 3 */
}
```

Return values: FUN_1001b584 → 0 (lead unit flagged 0x1000 in the high order half, or no target) or 2 (a field
stack was attacked); FUN_1001c2dc → 1 (city captured / raze chain ended) or 3 (move failed / not captured).
So r = 0 means "no field attack" (then the stack carries on to its ordered city), r = 2 "field attack and no
reachable city" (the stack tries again), r = 1/3 city attempt made.

### (b) Remake

AIFrontMoveStack (FUN_1001c6fc) matches. AIFrontMoveStacks returns after the first stack and lacks r=0/r=2.

```c
static void AIFrontMoveStacks(short f)
{
    AIFront *fr = &gAI->fronts[f];
    short k = 3, guard = 0;
    while (k >= 0) {
        short u, r, tgt = -1;
        AIStack s;
        AIFrontValidateStacks(f);                          /* FUN_1001b4ac, every pass */
        u = fr->stacks[k];
        if (u == -1 || AIStackAt(AIRecX(u), AIRecY(u), sAIOrd[u].front, sAIOrd[u].type, 0, &s) == 0) { k--; continue; }
        AIFloodForStack(&s, 15);
        r = AIFrontMoveStack(f, &s, fr->targetPlayer);
        if (r == 2 && s.n > 0 && ++guard < 32) continue;  /* same k again (guard: remake safety only) */
        if (r == 0 && s.n > 0) {
            short last = s.rec[s.n - 1];                   /* the last filled list entry */
            if (sAIOrd[last].type == 1) tgt = sAIOrd[last].target;
            if (tgt != -1) AIFrontAttack(f, &s, tgt);      /* FUN_1001c2dc */
        }
        guard = 0; k--;
    }
}
```

Uncertain: whether FUN_1001ee88's list order (it calls FUN_1001ec20, which may reorder) puts the same unit last as
the remake's AIStackAt order (highest record first). The rule itself (last non-empty entry, type-1 target) is exact.

---------------------------------------------------------------------------------------------------------------

## 3. B3 — FUN_1001fcc0 tail (0x100204b4-0x10020628, jump table 0x1002062c)

Jump table (`-0x1cfc(r2)`, index f): f=0 → 0x10020508, 1 → 0x10020530, 2 → 0x10020578, 3 → 0x100205c0.

### Where the counters come from (body, verified)

Registers: r24 = active fronts (AI+0x24a loop, `front.active != 0`). AI+0x3a minSlotStr, +0x3c clsA, +0x3e clsB,
+0x40 clsC (zeroed at 0x1001fd40). Slot k of city c: type `cityRec+0x16+k`, str `+0x1e+k`, moves `+0x22+k`
(per-slot bytes). flagT(t,k) = 6-byte AI type flags (_DAT_281f0000+t*6; [0] flies, [5] class).

- Pass 0 (all own cities, from last): `cflags &= 0x37`; if role ≠ 7 and FUN_1001f648(c,&slot): v = slotStr +
  (flag[5]==1 ? 2 : 0) into top-8; minSlotStr = min(min nonzero top-8 (start 100), 4).
- Pass A (only if active == 4) at 0x1001ff48-0x10020060: own, FUN_1000f708(c,1), `cflags & 2`: any slot with
  type ≥ 0, flies, slotStr > 4 → `clsA++`, `cflags |= 0x40`.
  `budA = clsA > 3 ? clsA-4 : clsA; flagA = clsA > 3` (r25/r23, 0x10020064).
- Pass B (active ≥ 3) at 0x10020098-0x10020200: own, FUN_1000f708(c,1); if `cflags&0x40`: budA==0 → skip city,
  else clear 0x40, budA--. Any slot: type ≥ 0, (flag[5]==1 || slotStr ≥ minSlotStr), slotMoves ≥ 16 → `clsB++`,
  `cflags |= 0x80`.
  `bigB = clsB > 7` (r26, branchless at 0x1002020c); `budB = clsB>3 ? clsB-4 : clsB; flagB = clsB > 3` (r22).
- Pass C (active ≥ 2) at 0x10020258-0x100203e0: own, FUN_1000f708(c,1); `cflags&0x40` → skip; if `cflags&0x80`:
  budB==0 → skip, else clear 0x80, budB--. For EVERY slot k=3..0 (no break): type ≥ 0 and (flag[5]==1 ||
  slotStr ≥ minSlotStr) and slotMoves ≥ 12 → **`slotsC++`** (r29, at 0x10020374); then the slot qualifies if
  `!bigB || slotMoves ≥ 16`. Any qualifying slot → `clsC++`, `cflags |= 0x08`.
  `front0 = slotsC > 7` (r6, branchless at 0x100203e4; slotsC = 0 when active < 2);
  `budC = clsC>3 ? clsC-4 : clsC; flagC = clsC > 3` (r7).
- Final pass (always): own city with `!(cflags & 0xC0) && (cflags & 8)`: budC==0 → keep, else clear 8, budC--.

### (a) The tail, exact

```c
for (f = AI->frontCount - 1; f >= 0; f--) {
    F = &AI->front[f];                                  /* AI+0x24c+f*0x5c */
    if (F->active == 0) continue;
    F->minMoves = 8;                                    /* +0x58 (AI+0x2a4) */
    switch (f) {                                        /* f > 3: nothing more */
    case 0: F->minMoves = front0 ? 12 : 8; break;
    case 1: F->flags &= ~0x10; if (flagC) { F->flags |= 0x10; F->minMoves = 12; } break;   /* +0x5a */
    case 2: F->flags &= ~0x08; if (flagB) { F->flags |= 0x08; F->minMoves = 16; } break;
    case 3: F->flags &= ~0x20; if (flagA) { F->flags |= 0x20; F->minMoves = 12; } break;
    }
}
```

### (b) Remake AIClassifyCities

The body already does passes 0/A/B/C/final (apart from the per-slot stats: it uses UnitStatLE(t,0)/(t,3) of the
slot's type where the original reads the city's per-slot str/moves bytes — the separate A1-4 issue). Missing:
`slotsC` and the tail. The front flags live in `AIFront.flags` (`unsigned short flags; /* +0x5a */`, i.e.
`gAI->fronts[f].flags`), minMoves in `AIFront.minMoves` (+0x58). Consumers already exist (the role-7 threshold
`fr->flags & 0x10 ? 12 : & 8 ? 16 : minMoves`, the feeder class filter on cflags 8/0x80/0x40).

Changes:
1. Declare `short slotsC = 0;`. In the class-C slot loop, count before the `ok` test:
```c
                if ((AITypeFlag(t, 5) == 1 || gAI->minSlotStr <= UnitStatLE(t, 0)) && mv > 11) {
                    slotsC++;
                    if (gAI->clsBcnt < 8 || mv > 15) ok = true;
                }
```
2. Replace the last line (`... minMoves = 8;`) with:
```c
    for (f = gAI->frontCount - 1; f >= 0; f--) {
        AIFront *fr = &gAI->fronts[f];
        if (!fr->active) continue;
        fr->minMoves = 8;
        switch (f) {
            case 0: fr->minMoves = (slotsC > 7) ? 12 : 8; break;
            case 1: fr->flags &= ~0x10; if (gAI->clsCcnt > 3) { fr->flags |= 0x10; fr->minMoves = 12; } break;
            case 2: fr->flags &= ~0x08; if (gAI->clsBcnt > 3) { fr->flags |= 0x08; fr->minMoves = 16; } break;
            case 3: fr->flags &= ~0x20; if (gAI->clsAcnt > 3) { fr->flags |= 0x20; fr->minMoves = 12; } break;
        }
    }
```
(The clsX counters are not changed after their pass, so testing them at the end equals the original's saved
r23/r22/r7.) Also: AIFrontReset (FUN_1001ae14 port) sets minMoves = 0 while AIResetAll sets 8 — irrelevant once
the tail runs for every active front, but note it.

---------------------------------------------------------------------------------------------------------------

## 4. B12 — FUN_10016df0 / FUN_10016cc4 hand-over (jump table 0x1001714c)

Jump table (`-0x1d08(r2)`, index type-1, 8 entries): t=1,2,8 → 0x10016f1c (battle count); t=3,4 → 0x10016f68
(total only); t=5 → 0x10016f30 (cnt5); t=6 → 0x10016f44 (cnt6); t=7 → 0x10016f58 (cnt7). Every item (also t=0 or
>8) increments `total` (never read afterwards).

### (a) Original, exact

```c
void FUN_10016df0(short heroes[8])   /* hero UNIT indices, filled in descending unit order, -1 = none;
                                        called from FUN_10010b30 when > 1 hero is in the city */
{
    signed char items[8][22] = all -1, bat[8]={0}, c5[8]={0}, c6[8]={0}, c7[8]={0}, total[8]={0};
    for (i = 0; i < 8; i++) {
        if (heroes[i] == -1) continue;
        FUN_1003aeb0(2, 0, 0, &unit[heroes[i]]);   /* items 0..21 ascending with status 3 && carrier == hero */
        for (n = 0; n < count; n++) {
            items[i][n] = idx[n];
            switch (item[idx[n]].type) { case 1: case 2: case 8: bat[i]++; break;
                                         case 5: c5[i]++; break; case 6: c6[i]++; break; case 7: c7[i]++; break; }
            total[i]++;
        }
    }
    FUN_10016cc4(heroes, c6, items, 6);
    FUN_10016cc4(heroes, c5, items, 5);
    FUN_10016cc4(heroes, c7, items, 7);
    do {                                            /* spread the battle/command/Standard items */
        changed = 0;
        for (i = 0; i < 8; i++) {
            if (heroes[i] == -1 || bat[i] == 0) continue;
            c = bat[i]; m = -1;
            for (j = 0; j < 8; j++)
                if (j != i && heroes[j] != -1 && bat[j] < c) { m = j; c = bat[j]; }   /* strict min < bat[i] */
            if (m == -1) continue;
            for (k = 0; k < 22; k++) {
                it = items[i][k];                       /* NB: compared with 0xff after sign extension, so
                                                            empty (-1) slots are NOT skipped: they read item -1's
                                                            type byte = gs+0xd08 = site 39 +0x16 (a name byte,
                                                            0 in practice) -> no match. Harmless. */
                t = item[it].type;
                if (t == 1 || t == 2 || t == 8) {
                    items[i][k] = -1; AI->handovers /* +0x4c */ ++;
                    item[it].carrier = heroes[m];       /* NOT added to items[m] */
                    bat[i]--; bat[m]++; changed = 1;
                    break;
                }
            }
        }
    } while (changed);
}

void FUN_10016cc4(short heroes[8], signed char cnt[8], signed char items[8][22], short T)
{
    do {
        changed = 0;
        for (i = 0; i < 8; i++) {
            if (heroes[i] == -1 || cnt[i] < 2) continue;   /* tested once per i, not per j */
            for (j = 0; j < 8; j++) {
                if (j == i || heroes[j] == -1 || cnt[j] != 0) continue;
                for (k = 0; k < 22; k++) {
                    it = items[i][k];                       /* same -1 quirk as above */
                    if (item[it].type == T) {
                        items[i][k] = -1; AI->handovers++;
                        item[it].carrier = heroes[j];
                        cnt[i]--; cnt[j]++; changed = 1;
                        break;                              /* next j: i may give again, even down to 0 */
                    }
                }
            }
        }
    } while (changed);
}
```

Consequences: no "difference ≥ 2" rule (counts 2 vs 1 move), items moved to j stay out of j's list (so only
original holdings move; lists only shrink, so it terminates), a hero with 2 type-T items can give both away to two
empty heroes in one pass, no carry cap.

### (b) Remake AIHeroHandover

Differs: works on the 4 army slots (+0x3A) with a 4-cap, requires `count[i] - count[minJ] >= 2`, counts all items
(not just types 1/2/8) for the spread, extends the receiver's list, kind phases only check `has[i] >= 2` per j
iteration with `!moved` early exit (one move per pass). Replacement:

```c
static void AIHandoverKind(short *heroes, short nh, signed char *cnt, signed char (*items)[22], short T)
{
    Boolean changed;
    short i, j, k;
    do {
        changed = false;
        for (i = 0; i < nh; i++) {
            if (cnt[i] < 2) continue;
            for (j = 0; j < nh; j++) {
                if (j == i || cnt[j] != 0) continue;
                for (k = 0; k < 22; k++)
                    if (items[i][k] > 0 && GameItemType(items[i][k]) == T) {
                        AIItemToHero(items[i][k], heroes[j]);      /* carrier + the remake's hero slots */
                        items[i][k] = -1; cnt[i]--; cnt[j]++; changed = true;
                        break;
                    }
            }
        }
    } while (changed);
}
static void AIHeroHandover(short *heroes, short nh)      /* heroes: descending order, as now */
{
    signed char items[8][22], bat[8], c5[8], c6[8], c7[8];
    short i, j, k, it, n;
    Boolean changed;
    if (nh < 2) return;
    if (nh > 8) nh = 8;
    for (i = 0; i < nh; i++) {
        bat[i] = c5[i] = c6[i] = c7[i] = 0; n = 0;
        for (k = 0; k < 22; k++) items[i][k] = -1;
        for (it = 1; it <= GAME_ITEM_COUNT; it++) {               /* item order, as FUN_1003aeb0(2) */
            unsigned char *r = GameItemRec(it);
            if (!r || ITEM_STATUS(r) != ITEM_ST_CARRIED || ITEM_CARRIER(r) != heroes[i]) continue;
            items[i][n++] = (signed char)it;
            switch (r[0x14]) { case 1: case 2: case 8: bat[i]++; break;
                               case 5: c5[i]++; break; case 6: c6[i]++; break; case 7: c7[i]++; break; }
        }
    }
    AIHandoverKind(heroes, nh, c6, items, ITEM_TYPE_MOVEMENT);   /* 6 */
    AIHandoverKind(heroes, nh, c5, items, ITEM_TYPE_FLYING);     /* 5 */
    AIHandoverKind(heroes, nh, c7, items, ITEM_TYPE_GOLD);       /* 7 */
    do {
        changed = false;
        for (i = 0; i < nh; i++) {
            signed char c = bat[i]; short m = -1;
            if (c == 0) continue;
            for (j = 0; j < nh; j++) if (j != i && bat[j] < c) { m = j; c = bat[j]; }
            if (m == -1) continue;
            for (k = 0; k < 22; k++) {
                short t;
                if (items[i][k] <= 0) continue;
                t = GameItemType(items[i][k]);
                if (t == 1 || t == 2 || t == 8) {
                    AIItemToHero(items[i][k], heroes[m]);
                    items[i][k] = -1; bat[i]--; bat[m]++; changed = true;
                    break;
                }
            }
        }
    } while (changed);
}
```
`AIItemToHero(it, rec)` = set ITEM_CARRIER and move the id between the two records' item slots. The 4-slot cap
must go (A10) or the receiver can overflow; until then, a move into a full record is a deviation. The AI+0x4c
handover counter has no remake field (stat only; add `short handovers;` if wanted).

---------------------------------------------------------------------------------------------------------------

## 5. B7 — the computer sage: FUN_100126a4 and FUN_1001241c

Reached from FUN_1005447c (the search command) when the site kind is 3 (sage), for a computer player:
`FUN_1003357c(hero, 3)` (+3 XP), history event 6/0x65, then `FUN_100126a4(site)`, then the tile's searched bit
(0x400000). **Sage sites have no guardian fight** (FUN_100539e8 is not called for kind 3).

### (a) Original, exact

```c
int FUN_1001241c(void)                              /* "Items": reveal one hidden site */
{
    hx = cur->x; hy = cur->y;                       /* *TOC[-0x1c0]: the moving stack's position (the sage tile) */
    best = -1; bestS = 10000;
    for (s = 0; s < gs[0x810]; s++) {               /* all sites, ascending */
        if (site(s).hidden == 0) continue;
        if (site(s).known & (1 << me)) continue;
        if (map(site).searched /*bit 22*/) continue;
        d = Euclid(site x,y, hx,hy);
        if (d >= 35) continue;
        if (best == -1 && site(s).kind == 2) {      /* item sites only while nothing is chosen yet */
            t = item[site(s).itemIdx].type;
            if (t == 5) { if (d < 11) { d += 10; if (d < bestS) { best = s; bestS = d; } } }
            else if (t == 6) { if (d < 16) { d += 10; if (d < bestS) { best = s; bestS = d; } } }
        }
        if (site(s).kind == 5 && d < bestS) { best = s; bestS = d; }     /* allies: score d */
    }
    if (best == -1) return 0;
    site(best).known |= 1 << me;
    FUN_1000931c(me, site x, y);                    /* fog reveal around the site (3x3, 5x5 on a city) */
    FUN_10039ec8(me);                               /* redraw site tiles */
    (display refresh only)
    return 1;
}

void FUN_100126a4(void)
{
    g = Dice(3, 500, 500);                          /* always rolled first */
    if (FUN_1001241c()) return;                     /* no gold */
    bx = by = -1; bestN = -1; bestMin = 0;
    for (c = cityCount - 1; c >= 0; c--) {
        if (cityRec(c).owner != 0xF || !(AI->cflags[c] & 1)) continue;   /* neutral, unexplored */
        FUN_1000da14(c, 0, nb, nd);
        adj = any nb[k] != 0xff with owner == me (k=5..0);
        if (!adj) continue;
        n = 0; minD = 1000;
        for (c2 = cityCount - 1; c2 >= 0; c2--) {
            if (cityRec(c2).owner == 0xF) { if ((AI->cflags[c2] & 1) && Euclid(c, c2) < 20) n++; }
            else if (cityRec(c2).owner == me) { d = Euclid(c, c2); if (d < minD) minD = d; }
        }
        if (n > 3 && (n > bestN || (n == bestN && bestMin < minD))) {   /* tie: the FARTHER from my cities */
            bx = c.x; by = c.y; bestMin = minD; bestN = n;
        }
    }
    if (!gs[0x124] /*hidden map*/ || bx == -1) {
        gold[me] = min(gold[me] + g, 30000);
    } else {
        x = bx + Dice(1, 11, -6); y = by + Dice(1, 11, -6);   /* x rolled first */
        x = max(x, 0); if (x > 110) x = 111; y = max(y, 0); if (y > 154) y = 155;
        FUN_10054af4(x, y);
    }
}

void FUN_10054af4(short x, short y)                 /* reveal a random rectangle */
{
    a = Dice(1,5,8); x0 = x - a; b = Dice(1,5,8); y0 = y - b;
    w = Dice(1,10,15); h = Dice(1,10,15);
    x0 = max(x0,0); y0 = max(y0,0);
    if (x0 + w > 0x6f) w = 0x6f - x0;  if (y0 + h > 0x9b) h = 0x9b - y0;
    for (i = x0; i < x0 + w; i++) for (j = y0; j < y0 + h; j++) FUN_1000931c(me, i, j);
    (redraw)
}
```

The city loops use the owner byte only (no terrain test; a razed city with owner 0xF counts as neutral — B15).

### (b) Remake

AISearchSite: for SITE_SAGE it runs the guardian fight (if SITE_GUARDIAN set) and then
`AISetGold(AIGold() + Random() % 500)`. Fix:
- Skip SiteGuardianFight for SITE_SAGE sites (the remake setup gives every non-ally site a Dice(1,9) guardian,
  as the original does; the original just never fights it at a sage).
- Replace the gold line with `AIComputerSage(AICityX(si), AICityY(si));` (+3 XP stays; mark searched as now):

```c
static Boolean AISageReveal(short hx, short hy)            /* FUN_1001241c */
{
    short si, best = -1, bestS = 10000;
    for (si = 0; si < AICityCount(); si++) {               /* site order */
        unsigned char *site; short d;
        if (!AISiteIsSite(si)) continue;
        site = AI_CITY(si);
        if (!SITE_HARD(site) || (SITE_KNOWN(site) & (1 << sAIMe)) || AISiteSearched(si)) continue;
        d = AIDist(AICityX(si), AICityY(si), hx, hy);
        if (d >= 35) continue;
        if (best == -1 && SITE_KIND(site) == SITE_ITEM_KIND) {
            short t = GameItemType((short)SITE_ITEM(site) + 1);   /* SITE_ITEM is the 0-based record */
            if (t == ITEM_TYPE_FLYING)        { if (d < 11) { d += 10; if (d < bestS) { best = si; bestS = d; } } }
            else if (t == ITEM_TYPE_MOVEMENT) { if (d < 16) { d += 10; if (d < bestS) { best = si; bestS = d; } } }
        }
        if (SITE_KIND(site) == SITE_ALLIES && d < bestS) { best = si; bestS = d; }
    }
    if (best == -1) return false;
    SITE_KNOWN(AI_CITY(best)) |= (unsigned char)(1 << sAIMe);
    FogRevealAround(sAIMe, AICityX(best), AICityY(best));  /* FUN_1000931c equivalent */
    return true;
}
static void AIComputerSage(short hx, short hy)            /* FUN_100126a4 */
{
    short g = Dice(3, 500, 500), ci, c2, bx = -1, by = -1, bestN = -1, bestMin = 0;
    if (AISageReveal(hx, hy)) return;
    for (ci = AICityCount() - 1; ci >= 0; ci--) {
        unsigned char nb[6], nd[6];
        short k, n = 0, minD = 1000;
        Boolean adj = false;
        if (AI_CITY(ci)[0x17] >= 2 || AICityOwner(ci) != 0x0F || !(gAI->cflags[ci] & 1)) continue;
        AINeighbours(ci, nb, nd);
        for (k = 5; k >= 0; k--) if (nb[k] != 0xFF && AICityOwner(nb[k]) == sAIMe) adj = true;
        if (!adj) continue;
        for (c2 = AICityCount() - 1; c2 >= 0; c2--) {
            short d;
            if (AI_CITY(c2)[0x17] >= 2) continue;
            d = AIDist(AICityX(ci), AICityY(ci), AICityX(c2), AICityY(c2));
            if (AICityOwner(c2) == 0x0F) { if ((gAI->cflags[c2] & 1) && d < 20) n++; }
            else if (AICityOwner(c2) == sAIMe && d < minD) minD = d;
        }
        if (n > 3 && (n > bestN || (n == bestN && bestMin < minD))) { bx = AICityX(ci); by = AICityY(ci); bestMin = minD; bestN = n; }
    }
    if (!AIHidden() || bx == -1) { AISetGold((long)AIGold() + g); return; }   /* AISetGold caps 30000 */
    {
        short x = (short)(bx + Dice(1, 11, -6)), y = (short)(by + Dice(1, 11, -6));
        if (x < 0) x = 0; if (x > 110) x = 111;
        if (y < 0) y = 0; if (y > 154) y = 155;
        SageRevealRect(x, y);                              /* FUN_10054af4 above, with its 4 dice */
    }
}
```
Needs A2 (per-site known mask `SITE_KNOWN`, already present in setup) and a fog reveal helper.

---------------------------------------------------------------------------------------------------------------

## 6. B8 + quest hooks

### FUN_10013a10(u, s) — computer search (from FUN_100151e8 and the roam/expedition paths)

```c
int FUN_10013a10(short u, short s)
{
    if (unit[u].x != site x || unit[u].y != site y || unit[u].MP == 0) return 0;
    if (terrain(site) != 11) return 2;
    if (site(s).kind != 1 && map(site).searched) return 2;
    cur = &unit[u];
    FUN_1005447c();                 /* the search: temple -> FUN_10052900 bless; sage -> +3 XP, FUN_100126a4;
                                       other -> FUN_100539e8 (+3 XP, guardian, reward) */
    if (site(s).kind == 1 && gs[0x11e] && Q(me).active == 0)
        FUN_1004b11c(1);            /* computer quest; hero = _DAT_57e31838 (the stack's selected hero), NOT
                                       checked to be u. History "%s receives a quest" first. */
    if (unit[u].type != 0x1C) return 0;     /* u died (guardian) or was not a hero */
    for (i = 0; i < curListCount; i++) if (curList[i]) curList[i]->ordersHi &= ~0x40;   /* AIO_STUCK cleared */
    if (gs[0x124] && site(s).kind == 5)     /* hidden map, allies site (kind read AFTER the search; the
                                               search does not change kind 5) */
        for (v = unitCount - 1; v >= 0; v--)
            if (unit[v].owner == me && ((unit[v].orders>>12)&0xF) == 0 && flagT(unit[v].type)[4] /*stat13*/ &&
                unit[v].x == site x && unit[v].y == site y) {
                unit[v].ordersHi |= 0x20;   /* AIO_RELEASED */
                FUN_1001a348(v, -1);        /* free roam */
            }
    return 2;
}
```

Remake AISearchSite: missing (1) `QuestGenerate(1)` after a temple blessing when quests on and Q(me).active == 0
(hero = the searching stack's hero; if the stack has no hero the original passes a garbage hero — skip in the
remake), (2) the hidden-map ally release. Add after the reward:

```c
    if (AISiteIsTemple(si) && AIQuests() && !QuestRec(sAIMe)->active) QuestGenerate(1 /*isAI*/, heroRec);
    if (!AIRecHasHero(heroRec)) return 0;
    ... (clear AIO_STUCK as now)
    if (AIHidden() && SITE_KIND(AI_CITY(si)) == SITE_ALLIES) {
        short i;
        for (i = AIArmyCount() - 1; i >= 0; i--)
            if (AIRecMine(i) && sAIOrd[i].type == 0 && AIRecX(i) == AICityX(si) && AIRecY(i) == AICityY(si) &&
                AIRecHasAllyType(i) /* a unit with AITypeFlag(t,4) */) {
                sAIOrd[i].flags |= AIO_RELEASED;
                AIFreeRoam(i, -1);
            }
    }
```
(The remake's ally reward adds units into the hero's record first — AddAlliesToStack — so split ally units out
of the hero's record or they never match `type == 0` on their own; the hero's record has orders.)
Also note the original does the quest roll for every temple visit with no active quest, including the hero-step
temple choice, so QuestGenerate's RNG (A0 table) lands right after the blessing.

### FUN_10019a40 — roam search, ally part (after arriving)

```c
    if (unit[u].x == ex && unit[u].y == ey) {
        cur = &unit[u];
        if (unit[u].type == 0x1C) FUN_10013a10(u, s); else FUN_1005447c();
        if (kind == 5)              /* kind read BEFORE the move by FUN_10016bc0; NO hidden-map test */
            for (v = unitCount - 1; v >= 0; v--)
                if (unit[v].owner == me && ((unit[v].orders>>12)&0xF) == 0 && flagT(unit[v].type)[4] &&
                    unit[v].x == ex && unit[v].y == ey)
                    unit[v].ordersHi |= 0x20;            /* released, no FUN_1001a348 */
    } else { if (kind == 1 && (unit[u].ordersHi & 0x1000)) unit[u].ordersHi |= FUN_10015980(s); unit[u].ordersHi |= 0x40; }
    unit[u].ordersHi |= 0x20; unit[u].orders &= ~0xF07F; dest = -1,-1; return 1;
```
Remake AIRoamRuin: add after the search, with `kind = SITE_KIND(AI_CITY(si))` captured before AIMoveStack:
```c
        if (kind == SITE_ALLIES)
            for (i = AIArmyCount() - 1; i >= 0; i--)
                if (AIRecMine(i) && sAIOrd[i].type == 0 && AIRecX(i) == ex && AIRecY(i) == ey && AIRecHasAllyType(i))
                    sAIOrd[i].flags |= AIO_RELEASED;
```
(The remake also blesses non-hero roamers at temples via TryTempleBlessing directly; the original goes through
FUN_1005447c, which for a stack without a hero blesses — equivalent.)

### FUN_10015324(k, list) — quest hero goes to the quest city

```c
int FUN_10015324(short k, short *list)              /* caller guarantees quests on, active, heroUnit == list[k] */
{
    u = list[k];
    if (Q.type != 4 && Q.type != 5) return 0;
    c = Q.target;                                   /* no "is still a city" test here */
    if (AI->cflags[c] & 1) return 0;                /* unexplored */
    need = (cityRec(c).owner != 0xF && max(turn,1) > 7) ? 2 : 1;
    n = FUN_1001ed3c(unit[u].x, unit[u].y, tmp, 8); /* own units on the hero's tile with MP >= 8 (max 8) */
    if (n < need) return 0;
    if (!(((unit[u].orders>>12)&0xF) == 1 && (unit[u].orders & 0x7f) == c)) {
        (void)Euclid(city, hero);                   /* computed, unused */
        if (FUN_1001eff8(city x, y) < 75) return 0; /* winEst of the current stack (tmp) */
    }
    FUN_1001e160(tmp, 1, c, 0);                     /* orders: type 1, target c */
    FUN_10018180(cur->destX, cur->destY, 0);
    return 1;
}
```
Remake AIHeroQuest: (1) read Q (types 4 and 5, not QUEST_CAPTURE), and the caller must check
`Q.heroUnit == this hero`; (2) `AIStackAtAny(..., 8, &s)` instead of `0` (MP ≥ 8); (3) drop the extra
`!AIIsCity(target)` test (the original has none; turn-start QuestCheck(-1) cancels razed targets).

### FUN_10012a8c(x, y) — after every computer battle (FUN_10030490(x,y,1), after QuestCheck(0) if active)

```c
int FUN_10012a8c(short x, short y)
{
    if (!gs[0x11e] || !Q(me).active) return ...;
    inStack = any curStack[i] (DAT_9421ffc8, count DAT_4086ffcc) == &unit[Q.heroUnit];
    if (!inStack || (Q.type != 4 && Q.type != 5)) return ...;
    c = FUN_1002be50(x, y);                         /* city at the battle tile */
    if (c != Q.target) return ...;
    AI->questDone /* +0x4a */ ++;
    AI->questCity = -1;
    if (Q.type == 5) {
        FUN_1001bbf0(c, 1);                         /* forced: skips the 3-own-neighbours test only; still needs
                                                       sack value < 900 and razing on, else FUN_1001ba60 (sack) */
        return Q.active ? FUN_1004e384(2, 0, 0, 0) : 0;
    }
    return Q.active ? FUN_1004e384(4, 0, 0, 0) : 0;
}
```
No win/ownership test in FUN_10012a8c itself (it runs after the battle whatever the result; QuestCheck(4) only
completes if the city is now mine). Whether FUN_1004f438 razes a city we did not capture was not traced —
uncertain. Remake: in AIAfterBattle (or right after each AI city battle in AIMoveStack), add:
```c
    if (AIQuests() && QuestRec(sAIMe)->active && AIStackHasQuestHero(s) &&
        (QuestRec(sAIMe)->type == 4 || QuestRec(sAIMe)->type == 5) && targetCity == QuestRec(sAIMe)->target) {
        gAI->questDone++;  gAI->questCity = -1;
        if (QuestRec(sAIMe)->type == 5) { AIRaze(targetCity, s, true /*forced*/); if (QuestRec(sAIMe)->active) QuestCheck(2, 0); }
        else if (QuestRec(sAIMe)->active) QuestCheck(4, 0);
    }
```
AIRaze needs a `forced` argument that skips the `near > 2` test (its else → AISack is already right).

### FUN_100159c8 — temple/ruin candidates (B16, B17)

```c
    range = ((unit.orders>>12)&0xF) == 0 ? 25 : 5;
    limit = AI->passive ? min(range, 2*max(turn,1)) : range;
    for (s = 0; s < gs[0x810]; s++) {
        if (!FUN_10015030(s, hero)) continue;
        d = Euclid(site, hero); free = 1;
        if (site(s).kind == 1) {
            if (gs[0x11e] && !Q(me).active && d < min(limit, 11) && d < templeD) {
                temple = s; templeD = d; goto cand;          /* skips the blessed test */
            }
            if (unit[hero].ordersHi & FUN_10015980(s)) continue;   /* the HERO UNIT's blessing bit (B17) */
        } else {
            for (j = 5; j >= 0; j--) if (j != k && list[j] != -1 && type(list[j]) == 3 && target(list[j]) == s) free = 0;
        }
cand:   if (free && d <= limit && d < ruinD) { ruin = s; ruinD = d; }   /* temples are ruin candidates too */
    }
```
Remake AIHeroPickSites: (1) `!sPlayerQuests[...].active` → `!QuestRec(sAIMe)->active`; (2) when the temple is taken
as the quest temple, jump past `AIRecBlessedAt` to the candidate test (a `goto cand;` exactly as above);
(3) B17: the blessing test should use the hero's own bits, not "any hero slot in the record".

---------------------------------------------------------------------------------------------------------------

## 7. A13 — FUN_10032a24 (hero offer) and FUN_1000db10

### (a) Original, exact (computer path, called at turn start PPC_0002.c:21304)

```c
int FUN_10032a24(void)            /* result city in _DAT_9421ffc8 (TOC -0x374); cost in TOC -0x1a78 */
{
    cost = 0;
    if (gs[0x15e]) return 0;
    if (max(gs[0x136], 1) == 1) {                  /* turn 1: free, no dice, the capital */
        hx = gs[0x18a + me*0x14]; hy = gs[0x18c + me*0x14];
        city = FUN_1002be50(hx, hy);
        return 1;
    }
    FUN_1002bdc4();                                /* cnt[p] = city records with owner byte == p (< 8) */
    cap = (cnt[me] >= 40) ? 6 : 5;
    total = own = 0; hasHero = 0;
    for (v = unitCount - 1; v >= 0; v--)
        if (unit[v].type == 0x1C) { total++; if (unit[v].owner == me) { hasHero = 1; own++; } }
    if (total >= 40 || own >= cap) return 0;
    cost = hasHero ? Dice(1, 600, 1000) : Dice(1, 400, 300);
    if (gold[me] < cost) return 0;
    if (Dice(1, 30, 0) > 6) return 0;
    kth = Dice(1, cnt[me], 0);
    city = -1; n = 1;
    for (c = 0; c < cityCount; c++)
        if (cityRec(c).owner == me) { city = c; if (n++ == kth) break; }   /* else stays on the LAST own city */
    if (city == -1) return 0;
    if (isComputer) city = FUN_1000db10(city);
    return 1;
}

short FUN_1000db10(short c)
{
    pick = c; best = 0;
    for (ci = cityCount - 1; ci >= 0; ci--) {
        if (cityRec(ci).owner != me) continue;      /* owner byte only */
        v = 0;
        if      (AI->role[ci] == 7) v = Dice(1, 100, 100);
        else if (AI->role[ci] == 2) v = Dice(1, 100, 50);
        else if (AI->role[ci] == 3) v = Dice(1, 100, 0);
        if (best < v) { pick = ci; best = v; }      /* strict: first max in descending order wins */
    }
    return pick;
}
```
Then the hire (FUN_10032e2c, shared with humans): gold -= cost; if turn ≠ 1: type = FUN_10032d4c()
(Dice(1, nAllyTypes, -1) over types 0..27 with flag[4]), then Dice(1,100,0) <70 → 1, <95 → 2, else 3 allies at
the hero's city.

### (b) Remake AIHeroOffer — differences

(a) 6-in-30 rolled first (and with `Random()%30`, not Dice); (b) heroes counted only in record slot 0;
(c) no `gs+0x15e` gate; (d) the 6-cap counts `sType == 0` only (capital excluded); (e) uniform pick from
`sType ∉ {2,5,6}` capped at 40; (f) no FUN_1000db10; (g) costs via `Random()%400` / `%600` rather than Dice;
(h) no turn-1 free capital hero (check whether the remake creates the AI's turn-1 hero elsewhere); hero name via
`Random()%20`, hero record byte from TickCount (not original RNG either). Proposed core:

```c
static short AIHeroOfferCity(short p, short *cost)         /* FUN_10032a24 for a computer player */
{
    unsigned char *gs = AI_GS;
    short ci, i, k, cnt = 0, total = 0, own = 0, cap, kth, n = 1, city = -1;
    *cost = 0;
    if (*(short *)(gs + 0x15e) != 0) return -1;
    if (AITurn() == 1) return AIHomeCity(p);                /* free; no dice; no FUN_1000db10 */
    for (ci = 0; ci < AICityCount(); ci++)
        if (AI_CITY(ci)[0x17] < 2 && AICityOwner(ci) == p) cnt++;
    cap = (cnt >= 40) ? 6 : 5;
    for (i = AIArmyCount() - 1; i >= 0; i--)
        for (k = 0; k < 4; k++)
            if (AI_REC(i)[0x16 + k] == 0x1C) { total++; if ((short)(unsigned char)AI_REC(i)[0x15] == p) own++; }
    if (total >= 40 || own >= cap) return -1;
    *cost = own ? Dice(1, 600, 1000) : Dice(1, 400, 300);
    if (AIGold() < *cost) return -1;
    if (Dice(1, 30, 0) > 6) return -1;
    kth = Dice(1, cnt, 0);
    for (ci = 0; ci < AICityCount(); ci++)
        if (AI_CITY(ci)[0x17] < 2 && AICityOwner(ci) == p) { city = ci; if (n++ == kth) break; }
    if (city == -1) return -1;
    return AIStrongestCity(city);                           /* FUN_1000db10 */
}
static short AIStrongestCity(short c)
{
    short ci, best = 0, pick = c;
    for (ci = AICityCount() - 1; ci >= 0; ci--) {
        short v = 0;
        if (AI_CITY(ci)[0x17] >= 2 || AICityOwner(ci) != sAIMe) continue;
        switch (gAI->role[ci]) { case 7: v = AIRnd(100, 100); break; case 2: v = AIRnd(100, 50); break;
                                 case 3: v = AIRnd(100, 0); break; }
        if (best < v) { pick = ci; best = v; }
    }
    return pick;
}
```
AIHeroOffer then creates the hero at that city, deducts `cost`, and runs the same allies code as the human hire
(HeroBringsAllies: type first, then Dice(1,100,0)). ShowHeroHire's human gate also uses `Random()` for cost and
chance; switch both to Dice in the same order (cost, then Dice(1,30,0)).

---------------------------------------------------------------------------------------------------------------

## 8. A5 / A6 — ally ranking and guardian fight

### A5 (a) FUN_10038d8c, exact (called once from FUN_1003956c as (hidden[4], far[3], near[2]))

```c
    n = 0;
    for (t = 0; t < 29; t++) {
        if (t == 0x1C || t == 5) continue;
        FUN_10049628(t, e);                           /* the unit-type entry */
        if (e.stat[13] == 0) continue;               /* ally types only */
        type[n] = t;
        score[n] = e.stat[0] + 3*(e.stat[9] + e.stat[10] + e.stat[11] + e.stat[12])
                 + 2*e.stat[16] + 2*e.stat[15] + e.stat[3] / 5;      /* C truncating division */
        n++;
    }
    stable insertion sort ascending by score (equal scores keep type order);
    i = n - 1;
    for (j = 0; j < 4; j++) { hidden[j] = type[i]; if (i > 0) i--; }
    for (j = 0; j < 3; j++) { far[j]    = type[i]; if (i > 0) i--; }
    for (j = 0; j < 2; j++)   near[j]   = type[0];   /* the weakest, twice */
```
Site setup stores the TYPE directly in site+0x1a for kind 5: hidden → hidden[Dice(1,4,-1)], far →
far[Dice(1,3,-1)], near → near[Dice(1,2,-1)]. FUN_100539e8 (allies) reads that type as is:
`n = Dice(1,2,0) + (hidden ? 2 : 0)` units of type site+0x1a (no guardian fight for kind 5; +3 XP first).

### A5 (b) Remake RankedAllyType

The remake stores a rank (0-3 hidden, 4-6 far, 0xFF near — same dice as the original) and maps at search time.
Keep that and make the mapping exact: rank r → `type[max(n-1-r, 0)]`, 0xFF → `type[0]`:

```c
static short RankedAllyType(unsigned char rank)            /* FUN_10038d8c */
{
    short type[29], score[29], n = 0, t, i, j;
    for (t = 0; t < 29; t++) {
        if (t == 0x1C || t == 5 || UnitStatLE(t, 13) == 0) continue;
        type[n] = t;
        score[n] = (short)(UnitStatLE(t, 0) + 3 * (UnitStatLE(t, 9) + UnitStatLE(t, 10) + UnitStatLE(t, 11) + UnitStatLE(t, 12))
                 + 2 * UnitStatLE(t, 16) + 2 * UnitStatLE(t, 15) + UnitStatLE(t, 3) / 5);
        n++;
    }
    if (n == 0) return 0;                                  /* (original: uninitialised; never happens) */
    for (i = 1; i < n; i++)
        for (j = i; j > 0 && score[j] < score[j - 1]; j--) {
            short s = score[j]; score[j] = score[j - 1]; score[j - 1] = s;
            s = type[j]; type[j] = type[j - 1]; type[j - 1] = s;
        }
    if (rank == 0xFF) return type[0];
    j = (short)(n - 1 - rank); if (j < 0) j = 0;
    return type[j];
}
```
(The original's sort swaps adjacent pairs downward only while out of order, i.e. this stable insertion sort.)

### A6 (a) FUN_1005310c, exact

```c
bool FUN_1005310c(site *s)                    /* true = the hero LOSES */
{
    FUN_1003aeb0(2, 0, 0, hero);              /* items carried by the hero */
    itemSum = Σ item.value (+0x15, signed char) over those with type (+0x14) == 1;
    n = 0; for (v = unitCount - 1; v >= 0; v--) if (unit[v].x == hero.x && unit[v].y == hero.y) n++;  /* any owner */
    roll = Dice(1, 100, 0);
    return (short)(3*n + (hero.str /*+8*/ + itemSum - *(short *)(gs + 0x1046 + s->guard*2)) * 5 + 90) < roll;
}
```
Name of guardian g: gs+0xfa6+g*0x10 (g = 1..9; slot 0 unused).

### A6 (b) SCN layout and the remake's base (verified from the stream reader PPC_0002.c:14272-14316)

The original reads the scenario as a stream: … site count (short) → 40 × {x, y shorts, 0x17 bytes, hidden short,
known short} (0x1F each, from SCN+0x811) → 22 × {0x17 bytes, carrier, x, y} (0x1D each, from SCN+0xCE9) →
guardian names 0xA0 bytes → 10 guardian strengths (shorts, little-endian on disk, converted by FUN_100525a0)
→ 100 shorts (gs+0x105a) → 8 shorts (gs+0x1122). Hence:

| data | gs (original) | SCN offset |
|---|---|---|
| site count | 0x810 | 0x80F (LE short) |
| name of guardian g (16 bytes) | 0xfa6 + g*0x10 | **0xF67 + g*0x10** (g=1 → 0xF77) |
| strength of guardian g | 0x1046 + g*2 (BE) | **0x1007 + g*2, little-endian** |

So gs = SCN + 0x3F here (1 + 40 sites × 1 + 22 items × 1 extra byte each). The remake's GuardianName base
(`gs+0xF77+(n-1)*0x10` = SCN+0xF67+n*0x10 on a raw SCN copy) is the right SCN offset. **But** the remake builds
its item records at gs+0xD12 + i*0x1E (i < 22, i.e. up to gs+0xFA5) on top of that raw SCN copy, zeroing them:
items 20/21 overwrite SCN 0xF6A-0xFA5, so guardian names 1-3 (Troll 0xF77, Giant 0xF87, Wolf 0xF97) are
destroyed after GameInit (names 4-9 survive). Strength table at SCN 0x1009-0x101A is not overwritten.

Values (all six shipped scenarios dumped):

| scenario | names g=1..9 | strengths g=0..9 |
|---|---|---|
| Erythea, Hadesha, Isladia, Isles of Sorcery, Tutoria | Troll, Giant, Wolf, Goblin, Dragon, Demon, Devil, Wizard, Ghost | 0, 5, 7, 4, 3, 8, 8, 8, 8, 7 |
| Dragon Realms | Red Dragon, Blue Dragon, Green Dragon, Gold Dragon, Silver Dragon, Black Dragon, Wyvern, Hydra, Sorceror | 0, 8, 7, 6, 8, 7, 6, 5, 5, 4 |

(The remake's fallback `defGuardStr` equals the standard table, but is only used when unit types are not
loaded; normally it uses GetUnitTypeStat(guardType,0), which is wrong, and it is wrong for Dragon Realms.)

Fix:
```c
static char  sGuardName[10][16];
static short sGuardStr[10];
/* GameInit, next to the Standard-name copy (before the item records are built over gs+0xD12): */
for (g = 0; g < 10; g++) {
    for (j = 0; j < 15; j++) sGuardName[g][j] = (char)gs[0xF67 + g * 0x10 + j];
    sGuardName[g][15] = 0;
    sGuardStr[g] = (short)(gs[0x1007 + g * 2] | (gs[0x1008 + g * 2] << 8));
}
/* random maps (no SCN): unverified what the original uses; fall back to the standard table above */
```
GuardianName reads sGuardName[n]; SiteGuardianFight uses
`lose = (short)(3*n + (heroStr + battleItemSum - sGuardStr[g])*5 + 90) < Dice(1,100,0);` with n = units (slots)
of any owner on the tile (A7), battleItemSum = values of type-1 items carried by the hero, one Dice call
(replace `Random()%100`). The two tables must be saved/restored with the game (the original saves them in the
stream) or re-read from the SCN on load.

---------------------------------------------------------------------------------------------------------------

## 9. B9 / B10 / B11

### B9 FUN_1000df58 end, exact

```c
    /* frontTgt[p] = number of ACTIVE fronts with targetPlayer == p (asStack_c8, filled at PPC_0001.c:6915) */
    best = -1; bestS = 0;
    for (p = 7; p >= 0; p--) if (cities[p] != 0 && bestS < score[p]) { best = p; bestS = score[p]; }
    h = cityRec(myCapitalCity).owner;            /* capital = FUN_1002be50(gs+0x194+me*0x14, +0x196) */
    if (h != 0xF && h != me) {
        found = 0;
        for (f = AI->frontCount - 1; f >= 0; f--) if (frontTgt[f] == h) found = 1;   /* count array indexed by f */
        if (!found) best = h;
    }
    if (best != -1 && explored[best] == 0) best = -1;
    return best;
```
Remake AIPickTargetPlayer: change the capital test to
`for (f = gAI->frontCount - 1; f >= 0; f--) if (frontTgt[f] == holder) targeted = true;` (frontTgt already holds
the per-player active-front counts). No `active` test in this loop.

### B10 FUN_1000ec04, exact

```c
    n = 0;
    for (k = 0; k < 6; k++) {
        best = -1; bestD = 10000;
        for (c = cityCount - 1; c >= 0; c--)            /* ends with c == -1 */
            if (cityRec(c).owner == p && !(AI->cflags[c] & 1) && reach[c] && dist[c] < bestD) { best = c; bestD = dist[c]; }
        if (best == -1) break;
        targets[k] = best; dists[k] = bestD; reach[best] = 0; n++;
    }
    if (n == 0 && !(AI->byte[0x11e + (-1)] & 1)) { targets[0] = seed; dists[0] = 100; n = 1; }   /* AI+0x11d */
    return n;
```
AI+0x11d = turnsOwned[99] in the original's 100-entry layout (role +0x56, turnsOwned +0xba, cflags +0x11e).
Remake AIGraphTargets: replace `!(gAI->cflags[seed] & 1)` by `!(gAI->turnsOwned[99] & 1)` (0 on all shipped maps,
so in practice: always take the fallback when nothing was found). Also the remake adds AIIsCity (B15).

### B11 FUN_1001b584 (field attack), exact parts

- Lead = `list[0]` (the first list entry), not the strongest/fight-order lead: position, and the
  `ordersHi & 0x1000` test (→ return 0; the remake maps this to ARMY_EMBARKED_BIT, plausibly right — unverified).
- Window: x in [lx-15, lx+15), y in [ly-15, ly+15) (asymmetric), in map 0x70×0x9c.
- Tile test order: map bit 20 (army present) and tile owner nibble (bits 16-19) == targetPlayer; terrain not 10, 3,
  2; `abs(flood[x][y]) <= gMP - 1` (FUN_10003768 = abs, so unlabelled −1 → 1); explored bit (bit 29 of
  the u32 read at _DAT_807f0004 + y*0x70 + x, i.e. bit 0x20 of a per-tile byte array — not conditional on the
  hidden-map option in the code); then FUN_1001f0ac
  (units, strength, heroes) and winEst; accept `winEst > 75 && ((units > 2 && str > 10) || heroes) && bestEst < winEst`.
- On a hit: saved = (list[0] type == 1) ? its target : -1; FUN_1001e160(list, 4, 0, 0x20); dest = tile; move;
  then for each list entry: owner ≠ me → list[i] = -1, else if saved != -1 → type 1, target saved. Return 2.

Remake AIFieldAttack changes:
```c
    short lead = s->rec[0];                                  /* list[0], not AIStackLead */
    ...
            cost = sAIFloodCost[py * PATH_GRID_W + px];
            if (cost < 0) cost = (short)-cost;               /* FUN_10003768: unlabelled -1 -> 1 */
            if (cost > minMP - 1) continue;                  /* PATH_COST_BLOCK (30001) still fails */
    ...
    for (i = 0; i < s->n; i++) {                              /* restore only for records still mine */
        if (!AIRecMine(s->rec[i])) continue;
        if (savedTarget != -1) { sAIOrd[s->rec[i]].type = 1; sAIOrd[s->rec[i]].target = (unsigned char)savedTarget; }
    }
```
Same list[0] rule in AIFrontAttack's initial re-target (FUN_1001c2dc uses `*param_2` = list[0] for the distance
to the front targets when the target is no longer a city tile). Note `minMP` must be the same global the
original reads at TOC −0x1a4 (set by the flood for the current stack); AIStackMinMP is the remake's stand-in
(unverified equivalence). The hidden-map gate on the explored test in the remake vs the unconditional bit test in
the original is also unverified.

---------------------------------------------------------------------------------------------------------------

## Uncertain / not traced

- B2: list order after FUN_1001ee88/FUN_1001ec20 (which unit is "last"); infinite repeat on r = 2 is possible in
  principle in the original too (each repeat moves the stack, so MP falls).
- FUN_10013a10's quest hero is `_DAT_57e31838` (the stack's selected hero) — set elsewhere; garbage if no hero.
- FUN_10012a8c runs after lost battles too; whether a type-5 forced raze can hit a city not captured depends on
  FUN_1004f438 (not traced).
- A6: what a random map uses for guardian names/strengths.
- B11: identity of TOC −0x1a4 (MP bound) and of the explored byte array at _DAT_807f0004 (row stride 0x70).
- Item −1 read in the hand-over (gs+0xd08) is harmless unless a 40th site has a name ≥ 19 chars.
