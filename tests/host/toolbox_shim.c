/*
 * toolbox_shim.c - the few Mac Toolbox calls the game logic really needs,
 * implemented on the host so src/main.c's rules can run under test.
 *
 * Everything else main.c imports (windows, QuickDraw drawing, files,
 * sound, menus) is a generated no-op stub (gen_stubs.py -> stubs_auto.c).
 *
 * Random() is the Toolbox generator: Park-Miller "minimal standard"
 * seed = seed * 16807 mod (2^31 - 1), result = the low 16 bits as a signed
 * short, with -32768 returned as 0.  The model is validated against the
 * original game: the Overview's 256-value hill pool rolled with it from
 * randSeed 0x2AA0D649 reproduced 100% of the original's uncovered overview
 * pixels on Erythea (main.c, BuildOverviewBase comment).
 */
#include <Multiverse.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

QDGlobals qd;

INTEGER Random(void)
{
    unsigned long long s = (unsigned long long)(uint32_t)qd.randSeed;
    INTEGER r;
    s = (s * 16807ULL) % 0x7FFFFFFFULL;
    qd.randSeed = (int32_t)s;
    r = (INTEGER)(s & 0xFFFF);
    if (r == -32768) r = 0;
    return r;
}

/* ---- Memory Manager: pointers and (non-relocating) handles ---- */
Ptr NewPtr(Size n)      { return (Ptr)malloc(n > 0 ? (size_t)n : 1); }
Ptr NewPtrClear(Size n) { return (Ptr)calloc(1, n > 0 ? (size_t)n : 1); }
void DisposePtr(Ptr p)  { free(p); }

/* A handle is a pointer to a master pointer; the size lives just before
 * the master pointer so GetHandleSize works. */
typedef struct { long size; Ptr master; } HandleBlock;

static Handle ShimNewHandle(Size n, int clear)
{
    HandleBlock *b = (HandleBlock *)malloc(sizeof(HandleBlock));
    if (!b) return NULL;
    b->size = n;
    b->master = clear ? NewPtrClear(n) : NewPtr(n);
    return (Handle)&b->master;
}
static HandleBlock *BlockOf(Handle h)
{
    return (HandleBlock *)((char *)h - offsetof(HandleBlock, master));
}
Handle NewHandle(Size n)      { return ShimNewHandle(n, 0); }
Handle NewHandleClear(Size n) { return ShimNewHandle(n, 1); }
void DisposeHandle(Handle h)
{
    if (!h) return;
    free(*h);
    free(BlockOf(h));
}
Size GetHandleSize(Handle h) { return h ? (Size)BlockOf(h)->size : 0; }
void SetHandleSize(Handle h, Size n)
{
    HandleBlock *b;
    if (!h) return;
    b = BlockOf(h);
    b->master = (Ptr)realloc(b->master, n > 0 ? (size_t)n : 1);
    if (n > b->size) memset(b->master + b->size, 0, (size_t)(n - b->size));
    b->size = n;
}
OSErr HandToHand(Handle *h)
{
    Handle n;
    Size sz;
    if (!h || !*h) return -109;   /* nilHandleErr */
    sz = GetHandleSize(*h);
    n = NewHandle(sz);
    memcpy(*n, **h, (size_t)sz);
    *h = n;
    return 0;
}
void HLock(Handle h)   { (void)h; }
void HUnlock(Handle h) { (void)h; }
SignedByte HGetState(Handle h) { (void)h; return 0; }
void HSetState(Handle h, SignedByte s) { (void)h; (void)s; }
void BlockMoveData(const void *src, void *dst, Size n) { memmove(dst, src, (size_t)n); }
void BlockZero(void *dst, Size n) { memset(dst, 0, (size_t)n); }

/* ---- Time: deterministic ---- */
static unsigned long sShimTicks = 1000;
ULONGINT TickCount(void) { return (ULONGINT)sShimTicks++; }
void Delay(LONGINT n, LONGINT *final) { sShimTicks += (unsigned long)n; if (final) *final = (LONGINT)sShimTicks; }

/* ---- Small QuickDraw geometry helpers some rules use ---- */
void SetRect(Rect *r, short l, short t, short rt, short b)
{ r->left = l; r->top = t; r->right = rt; r->bottom = b; }
void OffsetRect(Rect *r, short dh, short dv)
{ r->left += dh; r->right += dh; r->top += dv; r->bottom += dv; }
void InsetRect(Rect *r, short dh, short dv)
{ r->left += dh; r->right -= dh; r->top += dv; r->bottom -= dv; }
Boolean PtInRect(Point p, const Rect *r)
{ return p.h >= r->left && p.h < r->right && p.v >= r->top && p.v < r->bottom; }
Boolean SectRect(const Rect *a, const Rect *b, Rect *d)
{
    Rect o;
    o.left = a->left > b->left ? a->left : b->left;
    o.top = a->top > b->top ? a->top : b->top;
    o.right = a->right < b->right ? a->right : b->right;
    o.bottom = a->bottom < b->bottom ? a->bottom : b->bottom;
    if (o.left >= o.right || o.top >= o.bottom) { o.left = o.top = o.right = o.bottom = 0; *d = o; return false; }
    *d = o;
    return true;
}
void NumToString(LONGINT n, StringPtr s)
{
    char buf[32];
    int len, i;
    len = snprintf(buf, sizeof buf, "%ld", (long)n);
    s[0] = (unsigned char)len;
    for (i = 0; i < len; i++) s[1 + i] = (unsigned char)buf[i];
}

/* ---- Windows and events: enough for a notice or dialog to open, take
 * one keypress (Return) and close, so rule code that reports to a human
 * player can run unattended.  Drawing stays a no-op (generated stubs). ---- */
static WindowPtr ShimNewWindow(const Rect *r)
{
    WindowRecord *w = (WindowRecord *)calloc(1, sizeof(WindowRecord) + 256);   /* room for a CGrafPort */
    if (!w) return NULL;
    if (r) {
        w->port.portRect.left = 0;
        w->port.portRect.top = 0;
        w->port.portRect.right = (short)(r->right - r->left);
        w->port.portRect.bottom = (short)(r->bottom - r->top);
    }
    return (WindowPtr)w;
}
WindowPtr NewCWindow(void *storage, const Rect *r, ConstStringPtr t, Boolean vis, INTEGER procid,
                     WindowPtr behind, Boolean ga, LONGINT rc)
{ (void)storage; (void)t; (void)vis; (void)procid; (void)behind; (void)ga; (void)rc; return ShimNewWindow(r); }
WindowPtr NewWindow(void *storage, const Rect *r, ConstStringPtr t, Boolean vis, INTEGER procid,
                    WindowPtr behind, Boolean ga, LONGINT rc)
{ (void)storage; (void)t; (void)vis; (void)procid; (void)behind; (void)ga; (void)rc; return ShimNewWindow(r); }
WindowPtr GetNewCWindow(INTEGER id, void *storage, WindowPtr behind)
{
    Rect r;
    (void)id; (void)storage; (void)behind;
    r.left = 0; r.top = 0; r.right = 400; r.bottom = 300;
    return ShimNewWindow(&r);
}
void DisposeWindow(WindowPtr w) { free(w); }

unsigned long wl2_shim_events = 0;    /* how many events the code consumed */
static void ShimReturnKey(EventRecord *e)
{
    memset(e, 0, sizeof *e);
    e->what = keyDown;
    e->message = (0x24 << 8) | 0x0D;   /* Return */
    e->when = (ULONGINT)sShimTicks;
}
Boolean WaitNextEvent(INTEGER mask, EventRecord *e, LONGINT sleep, RgnHandle rgn)
{
    (void)sleep; (void)rgn;
    if (!(mask & keyDownMask)) { memset(e, 0, sizeof *e); sShimTicks += 60; return false; }
    ShimReturnKey(e);
    wl2_shim_events++;
    sShimTicks += 1;
    return true;
}
Boolean GetNextEvent(INTEGER mask, EventRecord *e) { return WaitNextEvent(mask, e, 0, NULL); }
Boolean EventAvail(INTEGER mask, EventRecord *e) { (void)mask; memset(e, 0, sizeof *e); return false; }
Boolean Button(void) { return false; }
Boolean StillDown(void) { return false; }
