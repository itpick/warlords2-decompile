/*
 * ai_trace.h - per-turn AI state dump (Phase 2 verification harness)
 *
 * Compiled to nothing unless AI_TRACE is defined.  Normal builds are
 * untouched (no code, no data).  With AI_TRACE the remake appends one text
 * record per AI side per turn to "aitrace.txt" in the app's working
 * directory: the fields the original's numbers can be diffed against
 * (docs/2026-10-08-ai-trace.md has the format spec).
 *
 * The dump logic lives in ai_trace.c; main.c carries only two hook calls:
 *   - WL2TraceAITurn  after ExecuteAITurn returns for each AI side
 *   - WL2TraceRound   once per round, after the round bookkeeping
 * (both in AdvanceToNextPlayer).
 */

#ifndef WL2_AI_TRACE_H
#define WL2_AI_TRACE_H

/* Mirror of main.c's AIOrder (per-record orders word).  Kept here so the
 * hook call can assert the layouts agree at compile time. */
typedef struct {
    unsigned char  type;        /* bits 12-15: 0 none, 1 city, 2 item, 3 ruin, 4 free-roam */
    unsigned char  target;      /* bits 0-6 */
    unsigned char  front;       /* bits 9-11: front id + 1 */
    unsigned char  home;        /* +0x10 */
    unsigned char  group;       /* +0x11 group id, 0 none */
    unsigned short flags;       /* the high half of the original's u32 */
    short destX, destY;         /* +0x12 / +0x14 */
} WL2AIOrdMirror;

#ifdef AI_TRACE

/* One record per AI side per turn.  Called right after ExecuteAITurn(side)
 * returns.  The pointers are main.c statics handed over at the single hook
 * site; everything else (turn counter, gold, diplomacy, ext city records,
 * army records) the dump reads through gGameState / gExtState itself. */
void WL2TraceAITurn(short side, long randSeed,
                    short incomeAtTurnStart, short upkeepAtTurnStart,
                    const unsigned char *cityData, short cityCount,
                    const unsigned char *armyTab,
                    const unsigned char *role, const unsigned char *cflags,
                    const unsigned char *unitCount, const unsigned char *poolCount,
                    const void *ordBase, long ordSize);

/* Round marker: called once per round, after the round bookkeeping (turn
 * counter, elimination, neutral production, history snapshot) so the human
 * turn boundary is visible in the trace. */
void WL2TraceRound(void);

#else /* !AI_TRACE */

/* Compiled out: no code, no data. */
#define WL2TraceAITurn(side, seed, inc, upk, cd, cc, at, ro, cf, uc, pc, ob, os) ((void)0)
#define WL2TraceRound() ((void)0)

#endif /* AI_TRACE */

#endif /* WL2_AI_TRACE_H */
