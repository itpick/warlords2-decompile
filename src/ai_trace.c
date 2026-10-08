/*
 * ai_trace.c - per-turn AI state dump (Phase 2 verification harness)
 *
 * All the Phase 2 dump code lives in this one file; main.c carries only the
 * two hook calls (see ai_trace.h).  Without AI_TRACE defined the whole file
 * compiles to an empty translation unit, so normal builds are untouched.
 *
 * Output: The Outside World:Uploads:aitrace.txt (fallback "aitrace.txt" in the
 * app's working directory), one open handle kept for the whole run and flushed
 * per record (the flush survives a crash and keeps the
 * emulator's file writable).  One line per item, stable field order,
 * greppable tags:
 *
 *   R<n> BEGIN
 *   T<s> TURN <n> GOLD <g> INC <i> UPK <u> SEED <seed>
 *   T<s> DIP <a> <b> E<eff_ab><eff_ba> P<prop_ab><prop_ba>
 *   T<s> CITY <ci> OWN <o> ROLE <r> CF <f> U <uc> P <pc> PROD <p> PRG <t> S <s0> <s1> <s2> <s3>
 *   T<s> ARMY <i> XY <x> <y> OWN <o> T <t0> <t1> <t2> <t3> MP <mp>
 *        ORD <type> <target> <front> <group> <flags> <destX> <destY>
 *   T<s> END
 *
 * docs/2026-10-08-ai-trace.md is the format spec and the diff procedure.
 */

#ifdef AI_TRACE

#include "warlords2.h"
#include "ai_trace.h"
#include <stdio.h>

/* the two tables the AI planner walks (main.c's caps) */
#define AIT_MAX_CITIES 140
#define AIT_MAX_RECS   MAX_ARMIES

/* main.c's per-record orders, as a raw byte mirror (see ai_trace.h) */
#define AIT_ORD_SIZE   ((long)sizeof(WL2AIOrdMirror))
#define AIT_ORD(base, i) ((const WL2AIOrdMirror *)((const unsigned char *)(base) + (long)(i) * AIT_ORD_SIZE))

#define AIT_TRACE_PATH "aitrace.txt"
/* the devloop pulls files out of the emulator only from The Outside World:Uploads;
 * writing there directly saves the Finder copy dance. Fall back to the working
 * directory when the volume is not mounted (local runs). */
#define AIT_TRACE_UPLOADS "The Outside World:Uploads:aitrace.txt"

/* raw table offsets (main.c mirrors of the original's memory layout) */
#define AIT_GS         ((unsigned char *)*gGameState)
#define AIT_ARMY(i)    ((const unsigned char *)armyTab + (long)(i) * 0x42)
#define AIT_CITY(ci)   ((const unsigned char *)cityData + (long)(ci) * 0x20)
#define AIT_EXT(ci)    ((const unsigned char *)*gExtState + 0x24c + (long)(ci) * 0x5c)

static FILE *AITOpen(void)
{
    /* the shared-fs sync never publishes a file that stays open for write, and
     * it stops publishing one after a few reopen cycles; so the trace lives in
     * the app's own directory and WL2TraceRound copies it to Uploads once per
     * round (a plain byte loop through fopen), which the sync does publish */
    static FILE *f;
    if (!f) f = fopen(AIT_TRACE_PATH, "a");
    return f;
}

/* copy the trace to Uploads so the emulator's shared-fs sync publishes it */
static void AITPublish(void)
{
    FILE *in, *out;
    char buf[1024];
    long n;
    in = fopen(AIT_TRACE_PATH, "r");
    if (!in) return;
    out = fopen(AIT_TRACE_UPLOADS, "w");
    if (!out) { fclose(in); return; }
    while ((n = (long)fread(buf, 1, sizeof buf, in)) > 0) fwrite(buf, 1, (size_t)n, out);
    fclose(out);
    fclose(in);
}

/* ------------------------------------------------------------------ */
/* round marker                                                        */
/* ------------------------------------------------------------------ */
void WL2TraceRound(void)
{
    FILE *f;
    short turn;
    if (*gGameState == 0) return;
    turn = *(short *)(AIT_GS + 0x136);
    f = AITOpen();
    if (!f) return;
    fprintf(f, "R%d BEGIN\n", turn < 0 ? 0 : turn);
    fflush(f);
    AITPublish();
}

/* ------------------------------------------------------------------ */
/* per-side per-turn dump                                              */
/* ------------------------------------------------------------------ */
void WL2TraceAITurn(short side, long randSeed,
                    short incomeAtTurnStart, short upkeepAtTurnStart,
                    const unsigned char *cityData, short cityCount,
                    const unsigned char *armyTab,
                    const unsigned char *role, const unsigned char *cflags,
                    const unsigned char *unitCount, const unsigned char *poolCount,
                    const void *ordBase, long ordSize)
{
    FILE *f;
    unsigned char *gs;
    short turn, gold, ci, rec, n;
    static Boolean ordWarned = false;

    if (*gGameState == 0 || *gExtState == 0) return;
    if (side < 0 || side > 7) return;
    gs = AIT_GS;
    turn = *(short *)(gs + 0x136);
    gold = *(short *)(gs + 0x186 + side * 0x14);

    f = AITOpen();
    if (!f) return;

    /* header: the economy numbers the original's info panel shows */
    fprintf(f, "T%d TURN %d GOLD %d INC %d UPK %d SEED %ld\n",
            side, turn < 0 ? 0 : turn, gold, incomeAtTurnStart, upkeepAtTurnStart, randSeed);

    /* diplomacy: the full 8x8 byte matrix as effective + proposed per pair
     * (the AI reads its own row's proposals and both sides' effective states) */
    {
        short a, b;
        for (a = 0; a < 8; a++)
            for (b = a + 1; b < 8; b++)
                fprintf(f, "T%d DIP %d %d E%d%d P%d%d\n",
                        side, a, b,
                        gs[0x1582 + a * 8 + b] & 3, gs[0x1582 + b * 8 + a] & 3,
                        (gs[0x1582 + a * 8 + b] >> 2) & 3, (gs[0x1582 + b * 8 + a] >> 2) & 3);
    }

    /* cities: every index up to the count, so rows stay aligned across turns */
    if (cityCount > AIT_MAX_CITIES) cityCount = AIT_MAX_CITIES;
    for (ci = 0; ci < cityCount; ci++) {
        const unsigned char *ec = AIT_EXT(ci);
        fprintf(f, "T%d CITY %d OWN %d ROLE %d CF %d U %d P %d PROD %d PRG %d S %d %d %d %d\n",
                side, ci,
                *(short *)(AIT_CITY(ci) + 4),
                role ? role[ci] : 0,
                cflags ? cflags[ci] : 0,
                unitCount ? unitCount[ci] : 0,
                poolCount ? poolCount[ci] : 0,
                *(short *)(ec + 0x02),           /* production type, -1 none */
                *(short *)(ec + 0x58),           /* progress: turns left */
                *(short *)(ec + 0x06),           /* the 4 production slot types */
                *(short *)(ec + 0x08),
                *(short *)(ec + 0x0a),
                *(short *)(ec + 0x0c));
    }

    /* army records: the whole table (owners differ; the label is the
     * dumping side), x/y, unit types, moves, and the orders word */
    if (!ordWarned && ordBase != NULL && ordSize != AIT_ORD_SIZE) {
        fprintf(f, "T%d WARN ordSize %ld != %ld\n", side, ordSize, AIT_ORD_SIZE);
        ordWarned = true;
    }
    n = *(short *)(gs + 0x1602);
    if (n > AIT_MAX_RECS) n = AIT_MAX_RECS;
    for (rec = 0; rec < n; rec++) {
        const unsigned char *a = AIT_ARMY(rec);
        const WL2AIOrdMirror *o = (ordBase != NULL && ordSize == AIT_ORD_SIZE) ? AIT_ORD(ordBase, rec) : NULL;
        fprintf(f, "T%d ARMY %d XY %d %d OWN %d T %d %d %d %d MP %d",
                side, rec,
                *(short *)(a + 0), *(short *)(a + 2),
                (short)(unsigned char)a[0x15],
                a[0x16], a[0x17], a[0x18], a[0x19],
                (short)(unsigned char)a[0x2e]);
        if (o)
            fprintf(f, " ORD %d %d %d %d %04x %d %d\n",
                    o->type, o->target, o->front, o->group, o->flags, o->destX, o->destY);
        else
            fprintf(f, " ORD - - - - ---- - -\n");
    }

    fprintf(f, "T%d END\n", side);
    fflush(f);   /* flushes; the handle stays open (see AITOpen) */
}

#endif /* AI_TRACE */
