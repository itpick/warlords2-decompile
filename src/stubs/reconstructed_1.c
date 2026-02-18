/*
 * reconstructed_1.c - Decompiled implementations for FUN_* stubs
 *                     in address range 0x10000000 - 0x1000F308
 *
 * Reconstructed from Ghidra decompilation of Warlords II (1993) PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 *
 * Functions 0x10000000-0x10003FFF: TVect trampolines (Mac OS Toolbox calls)
 * Functions 0x10004000+: Real game logic
 */

#include "warlords2.h"
#include <stdlib.h>
#include <string.h>

/* ===== Extern declarations for raw Ghidra globals ===== */

/* Pointer globals (pint *) */
extern pint *piRam101163ac;
extern pint *piRam10117468;  /* gExtState */
extern pint *piRam10117470;
extern pint *piRam1011747c;
extern pint *piRam10117480;

/* Short globals */
extern short *psRam10115cd4;
extern short *psRam10115cd8;
extern short *psRam10115cdc;
extern short *psRam10115d18;
extern short *psRam10115d20;
extern short *psRam10115d24;
extern short *psRam10115e2c;
extern short *psRam10115e80;
extern short *psRam10115ce0;
extern short *psRam10115ff8;

/* Int globals */
extern long iRam10115b90;
extern long iRam101174e4;
extern long iRam101176e8;
extern long iRam1011746c;

/* Char pointer globals */
extern char *pcRam101174d8;

/* Pointer globals used by the decompiled functions */
extern int *piRam10115cfc;
extern void *puRam101163ac;
extern void *puRam101176dc;

/* Undefined pointer globals referenced by TVect trampolines */
extern void *puRam101156a0;
extern void *puRam10115354;
extern void *puRam101158cc;
extern void *puRam10115794;
extern void *puRam10115798;
extern void *puRam101157cc;
extern void *puRam10115b7c;
extern void *puRam101156a4;
extern void *puRam10115a34;
extern void *puRam10115848;
extern void *puRam10115628;
extern void *puRam1011562c;
extern void *puRam101156d4;
extern void *puRam10115838;
extern void *puRam101152f0;
extern void *puRam10115450;
extern void *puRam101152d0;
extern void *FUN_10115ad0;

/* Forward declarations for functions called by the decompiled code */
int FUN_10007e10(short, short, int);
void FUN_10091338(void);
void FUN_10007dd4(void);
int FUN_10117884(int, ...);
void FUN_100226b0(int, int, int, short, short);
void FUN_10047a64(int, void *, int, int);
void FUN_1002c8e8(short, short);
void FUN_1002c92c(short, short);
void FUN_10082260(int);
void FUN_10082f24(int, short, short);
void FUN_100836dc(int, short, short);
void FUN_1003dc28(void);
void FUN_100032b8(int);
void FUN_10003108(void *, int, int, short, short);
void FUN_10003198(int, char, void *, int, int, int);
int FUN_100f1574(int);
void FUN_10000870(void *, void *);
void FUN_10000888(int, int);
int FUN_10001290(int);
void FUN_10003468(int);
void FUN_100ec3d4(void *, int, int);
int FUN_100ec4b8(void *);
int FUN_100ec540(void *);
void FUN_100ec44c(void *, int);
void FUN_100479f4(short);
void FUN_10000270(short, short);
void FUN_10000288(short, short);
void FUN_1000c724(int);
void FUN_1000c7b4(void);
void FUN_1000c844(void);
void FUN_10002598(void *);
void FUN_10064850(int, int);
void FUN_1004039c(int);
void FUN_100929a0(void);
void FUN_1007c714(int, int);
void FUN_10011804(void);
void FUN_100164e4(void);
void FUN_10013774(void);
void FUN_10014214(void);
void FUN_1001d014(void);
void FUN_10013484(void);
void FUN_1001497c(void);
void FUN_1001f9e4(short);
void FUN_100114d4(void);
void FUN_1001aa9c(void);
void FUN_10013040(void);
void FUN_10020ec4(void);
void FUN_1000f410(void);
void FUN_10014d14(void);
void FUN_1000d1a4(void);
void FUN_10014bcc(void);
int FUN_1000d384(void);
void FUN_1000d6a0(void);
void FUN_10027448(void);
void FUN_10002ad8(int);
void FUN_1002c85c(void);
void FUN_10008f70(void);
void FUN_1003d4dc(void);
void FUN_1000fac4(void);
void FUN_1001ab94(void);
int FUN_1001e4b0(int);
int FUN_1001e794(int, int, long long, int);
void FUN_1001e564(short, int);
int FUN_1005f230(int, int, ...);
int FUN_1002be50(short, short);
int FUN_10020f94(int);
int FUN_1004a0c4(short, void *, void *, void *, void *, void *);
void FUN_10048ccc(void);
int FUN_1001e9d0(int);
void FUN_10049fa8(int, int, int);
void FUN_100496c8(int);
void FUN_10049010(void);
int FUN_1001f648(int, void *);
int FUN_100f15e0(int);
void FUN_100ef510(int);
int FUN_1000e938(short);
void FUN_1000ea7c(int, ...);
int FUN_1000ec04(int, short, void *, void *);
int FUN_1000a884(short, short, short, short);
int FUN_100ead08(int);
void FUN_100ead98(void);
int FUN_11011734(int);

/* ===================================================================
 * TVect Trampolines (Mac OS Toolbox indirect calls)
 * Address range: 0x10000000 - 0x10003FFF
 * These are 24-byte PPC transition vectors that jump to shared
 * library code (Mac OS Toolbox, MacApp, SANE math, etc.)
 * On modern builds they are no-ops / stubs.
 * =================================================================== */

// Address: 0x10000000 | Size: 24 bytes
// TVect trampoline -> puRam101156a0 (Mac OS Toolbox call)
void FUN_10000000(void)
{
    /* TVect: indirect jump via puRam101156a0 */
    return;
}

// Address: 0x10000090 | Size: 24 bytes
// TVect trampoline -> puRam10115354 (Mac OS Toolbox call)
void FUN_10000090(void)
{
    /* TVect: indirect jump via puRam10115354 */
    return;
}

// Address: 0x10000150 | Size: 24 bytes
// TVect trampoline -> puRam101158cc (Mac OS Toolbox call)
void FUN_10000150(void)
{
    /* TVect: indirect jump via puRam101158cc */
    return;
}

// Address: 0x100008b8 | Size: 24 bytes
// TVect trampoline -> puRam10115794 (Mac OS Toolbox call)
void FUN_100008b8(void)
{
    /* TVect: indirect jump via puRam10115794 */
    return;
}

// Address: 0x100008e8 | Size: 24 bytes
// TVect trampoline -> puRam10115798 (Mac OS Toolbox call)
void FUN_100008e8(void)
{
    /* TVect: indirect jump via puRam10115798 */
    return;
}

// Address: 0x10001170 | Size: 24 bytes
// TVect trampoline -> puRam101157cc (Mac OS Toolbox call)
int FUN_10001170(void)
{
    /* TVect: indirect jump via puRam101157cc */
    return 0;
}

// Address: 0x100012d8 | Size: 24 bytes
// TVect trampoline -> puRam10115b7c (Mac OS Toolbox call)
void FUN_100012d8(void)
{
    /* TVect: indirect jump via puRam10115b7c */
    return;
}

// Address: 0x100016f8 | Size: 24 bytes
// TVect trampoline -> puRam101156a4 (Mac OS Toolbox call)
void FUN_100016f8(void)
{
    /* TVect: indirect jump via puRam101156a4 */
    return;
}

// Address: 0x10001a88 | Size: 24 bytes
// TVect trampoline -> puRam10115a34 (Mac OS Toolbox call)
int FUN_10001a88(void)
{
    /* TVect: indirect jump via puRam10115a34 */
    return 0;
}

// Address: 0x10001c20 | Size: 24 bytes
// TVect trampoline -> FUN_10115ad0 (Mac OS Toolbox call)
void FUN_10001c20(void)
{
    /* TVect: indirect jump via FUN_10115ad0 */
    return;
}

// Address: 0x10001c98 | Size: 24 bytes
// TVect trampoline -> puRam10115848 (Mac OS Toolbox call)
void FUN_10001c98(void)
{
    /* TVect: indirect jump via puRam10115848 */
    return;
}

// Address: 0x10001d58 | Size: 24 bytes
// TVect trampoline -> puRam10115628 (Mac OS Toolbox call)
int FUN_10001d58(int *a, long long b, void *c, int d, int e, int f)
{
    /* TVect: indirect jump via puRam10115628 */
    return 0;
}

// Address: 0x10001d70 | Size: 24 bytes
// TVect trampoline -> puRam1011562c (Mac OS Toolbox call)
int FUN_10001d70(int a)
{
    /* TVect: indirect jump via puRam1011562c */
    return 0;
}

// Address: 0x10002c58 | Size: 24 bytes
// TVect trampoline -> puRam101156d4 (Mac OS Toolbox call)
void FUN_10002c58(int a)
{
    /* TVect: indirect jump via puRam101156d4 */
    return;
}

// Address: 0x10003558 | Size: 24 bytes
// TVect trampoline -> puRam10115838 (Mac OS Toolbox call)
void FUN_10003558(void)
{
    /* TVect: indirect jump via puRam10115838 */
    return;
}

// Address: 0x10003768 | Size: 24 bytes
// TVect trampoline -> puRam101152f0 (Mac OS Toolbox call)
// FUNCTION_MAP.txt identifies this as abs()
int FUN_10003768(long long param_1)
{
    /* TVect: abs() - mapped from puRam101152f0 */
    int val = (int)param_1;
    return val < 0 ? -val : val;
}

// Address: 0x10003798 | Size: 24 bytes
// TVect trampoline -> puRam101152d0 (Mac OS Toolbox call)
void FUN_10003798(void)
{
    /* TVect: indirect jump via puRam101152d0 */
    return;
}


/* ===================================================================
 * Real Game Logic Functions
 * Address range: 0x10007f78+
 * =================================================================== */

// Address: 0x10007f78 | Size: 780 bytes
// MapRefreshAndCombat - refreshes map viewport and triggers combat display
void FUN_10007f78(void)
{
    short *puVar1;
    int *piVar2;
    short *psVar3;
    int iVar4;
    short *psVar5;
    short *psVar6;
    short *psVar7;
    int *piVar8;
    int *piVar9;
    int *piVar10;
    int iVar13;
    char auStack_30[48];

    piVar10 = (int *)piRam101176e0;
    piVar9 = piRam1011735c;
    piVar8 = (int *)piRam101163ac;
    psVar7 = psRam10115ff8;
    psVar6 = psRam10115cdc;
    psVar5 = psRam10115cd8;
    psVar3 = psRam10115cd4;
    iVar4 = (int)iRam101174e4;

    iVar13 = *piRam1011735c;
    if ((*(short *)(iVar13 + *(short *)(iVar13 + 0x110) * 2 + 0xd0) == 1) &&
       (*(short *)(iVar13 + 0x15a) == 0)) {
        return;
    }
    if (*psVar7 != 0) {
        puVar1 = (short *)*piVar10;
        if (((puVar1 != (short *)0x0) &&
            (iVar13 = FUN_10007e10(*puVar1, puVar1[1], 1),
            *(char *)(iVar13 + iVar4) == '\x0e')) &&
           ((*psVar6 == 0 ||
            ((iVar13 = FUN_10003768((long long)*(short *)*piVar10 - (long long)*psVar5), 1 < iVar13 ||
             (iVar13 = FUN_10003768((long long)*(short *)(*piVar10 + 2) - (long long)*psVar3),
             1 < iVar13)))))) {
            *psVar6 = 0;
            return;
        }
        if ((*psVar7 != 0) &&
           (iVar13 = FUN_10007e10(*(short *)(*piVar9 + 0x17e), *(short *)(*piVar9 + 0x180), 1),
           *(char *)(iVar13 + iVar4) == '\x0e')) {
            if (((*psVar6 == 0) ||
                (iVar13 = FUN_10003768((long long)*(short *)(*piVar9 + 0x17e) - (long long)*psVar5),
                1 < iVar13)) ||
               (iVar13 = FUN_10003768((long long)*(short *)(*piVar9 + 0x180) - (long long)*psVar3),
               1 < iVar13)) {
                *psVar6 = 0;
                return;
            }
            *psVar6 = 0;
            goto LAB_1000810c;
        }
    }
    *psVar6 = 1;
LAB_1000810c:
    iVar13 = *piVar9;
    *psVar5 = *(short *)(iVar13 + 0x17e);
    *psVar3 = *(short *)(iVar13 + 0x180);
    FUN_10091338();
    FUN_10007dd4();
    if (piVar8 != (int *)0x0) {
        piVar2 = (int *)*piVar8;
        if (piVar2 != (int *)0x0) {
            iVar13 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x3a8));
            if (iVar13 != 0) {
                FUN_100226b0((int)auStack_30, 0, 0, *(short *)(*piVar9 + 0x17c), *(short *)(*piVar9 + 0x17a));
                FUN_10047a64(0, auStack_30, *(short *)(*piVar9 + 0x178) * 0x28,
                             *(short *)(*piVar9 + 0x176) * 0x28);
            }
        }
    }
    psVar3 = (short *)*piVar10;
    if ((psVar3 != (short *)0x0) && (*(char *)((int)psVar3 + 5) != -1)) {
        /* Original code accessed a combat map via a stack-frame-relative pointer.
           The check determines if the tile is fog-of-war hidden (0x0e).
           Simplified: always assume visible for modern build. */
        {
            FUN_1002c8e8(*(short *)*piVar10, ((short *)*piVar10)[1]);
        }
    }
    FUN_10082260(*piVar8);
    return;
}

// Address: 0x1000848c | Size: 68 bytes
// Wrapper that calls FUN_10082f24 with the global view pointer
void FUN_1000848c(short param_1, short param_2)
{
    FUN_10082f24((int)puRam101163ac, param_1, param_2);
    return;
}

// Address: 0x1000a094 | Size: 152 bytes
// Releases a resource/sound object and notifies the system
int FUN_1000a094(int param_1)
{
    int *piVar1;

    if (*(int *)(param_1 + 0x10) != 0) {
        FUN_100032b8(*(int *)(param_1 + 0x10));
        *(int *)(param_1 + 0x10) = 0;
        *(short *)(param_1 + 8) = 0;
        *(char *)(param_1 + 0xb) = 0;
        /* Notify resource system of the release */
        /* Note: original code referenced local_2c which is stack-based;
           simplified for modern build */
    }
    return 1;
}

// Address: 0x1000c9c8 | Size: 308 bytes
// Turn phase: begin turn for current player - sets up diplomacy, triggers events
void FUN_1000c9c8(void)
{
    unsigned int uVar1;
    int iVar3;
    int *piVar4;
    long long uVar6;

    piVar4 = piRam1011735c;
    if (*psRam10115d18 == 0) {
        FUN_1000c724(1);
    }
    uVar6 = (long long)*(short *)(*piVar4 + 0x110);
    iVar3 = *piVar4 + (int)((uVar6 & 0xffffffff) << 4) + (int)((uVar6 & 0xffffffff) << 1);
    *(unsigned int *)(iVar3 + 0x1582) = *(unsigned int *)(iVar3 + 0x1582) & 0xcfffffff;
    uVar6 = (long long)*(short *)(*piVar4 + 0x110);
    iVar3 = *piVar4 + (int)((uVar6 & 0xffffffff) << 4) + (int)((uVar6 & 0xffffffff) << 1);
    uVar1 = *(unsigned int *)(iVar3 + 0x1582);
    *(unsigned int *)(iVar3 + 0x1582) = (uVar1 >> 0x1c & 3) << 0x1a | uVar1 & 0xf3ffffff;
    FUN_10064850(0, 0);
    FUN_1000c7b4();
    FUN_1004039c(10);
    FUN_1000c844();
    FUN_100929a0();
    return;
}

// Address: 0x1000cafc | Size: 88 bytes
// Turn phase: process fight results
void FUN_1000cafc(void)
{
    FUN_10011804();
    FUN_100164e4();
    FUN_1004039c(0xf);
    FUN_100929a0();
    return;
}

// Address: 0x1000cb54 | Size: 100 bytes
// Turn phase: process vectoring (if enabled)
void FUN_1000cb54(void)
{
    if (*(short *)(*piRam1011735c + 0x124) != 0) {
        FUN_10013774();
    }
    FUN_1004039c(0x14);
    FUN_100929a0();
    return;
}

// Address: 0x1000cbb8 | Size: 80 bytes
// Turn phase: process production/economy
void FUN_1000cbb8(void)
{
    FUN_10014214();
    FUN_1004039c(0x19);
    FUN_100929a0();
    return;
}

// Address: 0x1000cc08 | Size: 80 bytes
// Turn phase: process diplomacy
void FUN_1000cc08(void)
{
    FUN_1001d014();
    FUN_1004039c(0x1e);
    FUN_100929a0();
    return;
}

// Address: 0x1000cc58 | Size: 80 bytes
// Turn phase: process combat round
void FUN_1000cc58(void)
{
    FUN_10013484();
    FUN_1004039c(0x28);
    FUN_100929a0();
    return;
}

// Address: 0x1000cca8 | Size: 80 bytes
// Turn phase: process random events
void FUN_1000cca8(void)
{
    FUN_1001497c();
    FUN_1004039c(0x2d);
    FUN_100929a0();
    return;
}

// Address: 0x1000ccf8 | Size: 92 bytes
// Turn phase: process scoring for current player
void FUN_1000ccf8(void)
{
    FUN_1001f9e4(*(short *)(*piRam1011735c + 0x110));
    FUN_1004039c(0x32);
    FUN_100929a0();
    return;
}

// Address: 0x1000cd54 | Size: 80 bytes
// Turn phase: process hero movement
void FUN_1000cd54(void)
{
    FUN_100114d4();
    FUN_1004039c(0x37);
    FUN_100929a0();
    return;
}

// Address: 0x1000cda4 | Size: 80 bytes
// Turn phase: process alliance actions
void FUN_1000cda4(void)
{
    FUN_1001aa9c();
    FUN_1004039c(0x3c);
    FUN_100929a0();
    return;
}

// Address: 0x1000cdf4 | Size: 80 bytes
// Turn phase: second combat round processing
void FUN_1000cdf4(void)
{
    FUN_10013484();
    FUN_1004039c(0x41);
    FUN_100929a0();
    return;
}

// Address: 0x1000ce44 | Size: 68 bytes
// Turn phase: post-combat cleanup
void FUN_1000ce44(void)
{
    FUN_10013040();
    FUN_100929a0();
    return;
}

// Address: 0x1000ce88 | Size: 80 bytes
// Turn phase: process vectoring movement (if enabled)
void FUN_1000ce88(void)
{
    if (*(short *)(*piRam1011735c + 0x124) != 0) {
        FUN_10020ec4();
    }
    return;
}

// Address: 0x1000ced8 | Size: 80 bytes
// Turn phase: process siege
void FUN_1000ced8(void)
{
    FUN_1000f410();
    FUN_1004039c(0x46);
    FUN_100929a0();
    return;
}

// Address: 0x1000cf28 | Size: 80 bytes
// Turn phase: process city defense
void FUN_1000cf28(void)
{
    FUN_10014d14();
    FUN_1004039c(0x4b);
    FUN_100929a0();
    return;
}

// Address: 0x1000d2e8 | Size: 76 bytes
// Turn phase: AI process turn (hero generation/dispatch)
void FUN_1000d2e8(void)
{
    FUN_1000d1a4();
    FUN_1004039c(0x50);
    FUN_100929a0();
    return;
}

// Address: 0x1000d334 | Size: 80 bytes
// Turn phase: process unit upkeep
void FUN_1000d334(void)
{
    FUN_10014bcc();
    FUN_1004039c(0x55);
    FUN_100929a0();
    return;
}

// Address: 0x1000d654 | Size: 76 bytes
// Turn phase: process army movement/orders
void FUN_1000d654(void)
{
    FUN_1000d384();
    FUN_1004039c(0x5a);
    FUN_100929a0();
    return;
}

// Address: 0x1000d7bc | Size: 76 bytes
// Turn phase: assign garrison armies to cities
void FUN_1000d7bc(void)
{
    FUN_1000d6a0();
    FUN_1004039c(0x5f);
    FUN_100929a0();
    return;
}

// Address: 0x1000d808 | Size: 264 bytes
// Turn phase: end turn cleanup - resets state, clears movement, saves progress
void FUN_1000d808(void)
{
    int bVar1;
    int iVar2;
    int *piVar3;
    int uVar5;
    int iVar6;

    iVar2 = (int)iRam101176e8;
    piVar3 = piRam1011735c;
    FUN_1004039c(100);
    /* Reset turn-started flag */
    FUN_10027448();
    iVar6 = 7;
    do {
        *(int *)(iVar6 * 4 + iVar2) = 0;
        bVar1 = iVar6 != 0;
        iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    FUN_1002c85c();
    if (*(short *)(*piVar3 + 0x124) != 0) {
        FUN_10008f70();
    }
    FUN_1003d4dc();
    uVar5 = FUN_10001a88();
    return;
}

// Address: 0x1000da14 | Size: 252 bytes
// Queries neighbor army data for a given army index, copying adjacency
// and distance info into caller-provided buffers.
int FUN_1000da14(short param_1, unsigned short param_2, int param_3, int param_4)
{
    int bVar1;
    int *piVar2;
    int iVar4;
    int uVar5;
    long long uVar6;

    piVar2 = piRam10117470;
    uVar6 = (long long)param_1;
    FUN_1000c7b4();
    uVar5 = 0;
    iVar4 = 5;
    do {
        if (*(unsigned char *)(*piVar2 + (int)(((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xffffffff) << 1) + iVar4) ==
            param_2) {
            uVar5 = 1;
        }
        if (param_3 != 0) {
            *(char *)(iVar4 + param_3) =
                 *(char *)
                  (*piVar2 + (int)(((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xffffffff) << 1) + iVar4);
        }
        if (param_4 != 0) {
            *(char *)(iVar4 + param_4) =
                 *(char *)
                  (*piVar2 + (int)(((uVar6 & 0x3fffffff) * 4 - uVar6 & 0xffffffff) << 1) + iVar4 + 600);
        }
        bVar1 = iVar4 != 0;
        iVar4 = (int)(short)((short)iVar4 + -1);
    } while (bVar1);
    return uVar5;
}

// Address: 0x1000de24 | Size: 308 bytes
// Clears/resets a city record by index - sets all production slots,
// build queues, and vectoring data to default values.
void FUN_1000de24(short param_1)
{
    int bVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    piVar2 = piRam10117468;
    iVar6 = param_1 * 0x5c;
    *(short *)(*piRam10117468 + iVar6 + 0x24c) = 0;
    *(short *)(iVar6 + *piVar2 + 0x24e) = (short)0xffff;
    *(short *)(iVar6 + *piVar2 + 0x250) = *(short *)(iVar6 + *piVar2 + 0x24e);
    *(short *)(iVar6 + *piVar2 + 0x2a6) = 0;
    *(short *)(iVar6 + *piVar2 + 0x2a4) = *(short *)(iVar6 + *piVar2 + 0x2a6);
    /* Clear production slots (4 entries) */
    iVar6 = 3;
    do {
        *(short *)(*piVar2 + param_1 * 0x5c + iVar6 * 2 + 0x252) = (short)0xffff;
        bVar1 = iVar6 != 0;
        iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    /* Clear build queue and vectoring data (6 entries each) */
    iVar6 = 5;
    do {
        iVar3 = param_1 * 0x5c;
        iVar4 = iVar6 * 2;
        *(short *)(*piVar2 + iVar3 + iVar4 + 0x27e) = (short)0xffff;
        iVar5 = iVar3 + *piVar2 + iVar4;
        *(short *)(iVar5 + 0x272) = *(short *)(iVar5 + 0x27e);
        iVar5 = iVar3 + *piVar2 + iVar4;
        *(short *)(iVar5 + 0x292) = *(short *)(iVar5 + 0x272);
        iVar4 = iVar3 + *piVar2 + iVar4;
        *(short *)(iVar4 + 0x25a) = *(short *)(iVar4 + 0x292);
        bVar1 = iVar6 != 0;
        iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    /* Clear additional vectoring targets (4 entries) */
    iVar6 = 3;
    do {
        *(short *)(*piVar2 + param_1 * 0x5c + iVar6 * 2 + 0x28a) = (short)0xffff;
        bVar1 = iVar6 != 0;
        iVar6 = (int)(short)((short)iVar6 + -1);
    } while (bVar1);
    return;
}

// Address: 0x1000ed34 | Size: 816 bytes
// AI target selection - finds the best enemy to attack by evaluating
// army positions, army strengths, city counts, diplomacy, and distance.
// Returns the chosen target player index, or -1 if no valid target.
long long FUN_1000ed34(long long param_1, short param_2, short *param_3, short *param_4)
{
    short sVar1;
    short sVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    long long uVar6;
    short *psVar7;
    short *psVar8;
    int *piVar9;
    int *piVar10;
    int *piVar11;
    int *piVar12;
    int iVar13;
    int iVar14;
    long long uVar15;
    int bVar16;
    long long uVar17;
    short sVar18;
    long long uVar19;

    piVar12 = piRam10117480;
    piVar11 = piRam1011747c;
    piVar10 = piRam10117468;
    piVar9 = piRam1011735c;
    psVar8 = psRam10115d24;
    psVar7 = psRam10115d20;
    uVar17 = (long long)-1;
    iVar13 = 5;
    do {
        param_4[iVar13] = (short)0xffff;
        param_3[iVar13] = (short)0xffff;
        bVar16 = iVar13 != 0;
        iVar13 = (int)(short)((short)iVar13 + -1);
    } while (bVar16);
    iVar13 = FUN_100f15e0(600);
    *piVar12 = iVar13;
    if (iVar13 == 0) {
        uVar17 = (long long)-1;
    }
    else {
        piVar3 = (int *)*piVar12;
        if (piVar3 != (int *)0x0) {
            FUN_10002598(piVar3);
        }
        *piVar11 = *piVar3;
        iVar13 = FUN_1000e938(param_2);
        if (iVar13 != -1) {
            FUN_1000ea7c(iVar13, *(short *)(*piVar9 + 0x110));
            sVar1 = *(short *)(*piVar9 + 0x1602);
            sVar18 = 10000;
            if (sVar1 != 0) {
                do {
                    sVar1 = sVar1 + -1;
                    uVar19 = (long long)sVar1;
                    if ((int)*(char *)(*piVar9 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) <<
                                                        1) + 0x1619) == (int)*(short *)(*piVar9 + 0x110)) {
                        bVar16 = 0;
                        sVar2 = *psVar8;
                        iVar4 = 0;
                        while (sVar2 != -1) {
                            iVar14 = (int)(short)((short)iVar4 + 1);
                            if ((unsigned short)*(unsigned char *)(*piVar10 + (int)sVar1 + 0x56) == psVar8[iVar4]) {
                                bVar16 = 1;
                            }
                            iVar4 = iVar14;
                            sVar2 = psVar8[iVar14];
                        }
                        if ((bVar16 != 0) &&
                            (iVar4 = *piVar11, iVar14 = (int)((uVar19 & 0xffffffff) << 1),
                            *(short *)(iVar4 + iVar14) != 0) &&
                           (sVar2 = *(short *)(iVar4 + iVar14 + 200), sVar2 < sVar18)) {
                            uVar17 = uVar19;
                            sVar18 = sVar2;
                        }
                    }
                } while (sVar1 != 0);
            }
            if ((int)uVar17 == -1) {
                if ((*(unsigned char *)(*piVar10 + iVar13 + 0x11e) & 1) == 0) {
                    sVar1 = *(short *)(*piVar9 + 0x1602);
                    iVar4 = 10000;
                    while (sVar1 != 0) {
                        sVar1 = sVar1 + -1;
                        uVar19 = (long long)sVar1;
                        if ((int)*(char *)(*piVar9 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff)
                                                          << 1) + 0x1619) == (int)*(short *)(*piVar9 + 0x110)) {
                            bVar16 = 0;
                            sVar18 = *psVar7;
                            uVar6 = 0;
                            while (sVar18 != -1) {
                                uVar15 = (long long)(short)((short)uVar6 + 1);
                                if ((unsigned short)*(unsigned char *)(*piVar10 + (int)sVar1 + 0x56) ==
                                    *(unsigned short *)((int)((uVar6 & 0xffffffff) << 1) + (int)psVar7)) {
                                    bVar16 = 1;
                                }
                                uVar6 = uVar15;
                                sVar18 = *(short *)((int)((uVar15 & 0xffffffff) << 1) + (int)psVar7);
                            }
                            if (bVar16) {
                                iVar14 = *piVar9 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1);
                                iVar5 = *piVar9 + iVar13 * 0x42;
                                iVar14 = FUN_1000a884(*(short *)(iVar14 + 0x1604),
                                                      *(short *)(iVar14 + 0x1606),
                                                      *(short *)(iVar5 + 0x1604),
                                                      *(short *)(iVar5 + 0x1606));
                                if (iVar14 < iVar4) {
                                    uVar17 = uVar19;
                                    iVar4 = iVar14;
                                }
                            }
                        }
                    }
                    if ((int)uVar17 != -1) {
                        *param_3 = (short)iVar13;
                        *param_4 = 100;
                    }
                }
            }
            else {
                FUN_1000ea7c((int)uVar17, param_2);
                iVar13 = FUN_1000ec04(iVar13, param_2, param_3, param_4);
                if (iVar13 == 0) {
                    uVar17 = (long long)-1;
                }
            }
        }
        FUN_100ef510(*piVar12);
    }
    return uVar17;
}

// Address: 0x1000f258 | Size: 176 bytes
// Removes a specific army from all city production/garrison slots.
// Iterates over all cities, clearing any reference to the given army index.
void FUN_1000f258(short param_1)
{
    int bVar1;
    short sVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    int iVar6;

    piVar4 = piRam10117468;
    piVar3 = piRam1011735c;
    sVar2 = *(short *)(*piRam10117468 + 0x24a);
    while (sVar2 != 0) {
        sVar2 = sVar2 + -1;
        if (*(short *)(*piVar4 + sVar2 * 0x5c + 0x24c) != 0) {
            iVar6 = 3;
            do {
                iVar5 = *piVar4 + sVar2 * 0x5c + iVar6 * 2;
                if (*(short *)(iVar5 + 0x252) == param_1) {
                    *(short *)(iVar5 + 0x252) = (short)0xffff;
                    *(short *)(*piVar3 + param_1 * 0x42 + 0x1636) = 0;
                }
                bVar1 = iVar6 != 0;
                iVar6 = (int)(short)((short)iVar6 + -1);
            } while (bVar1);
        }
    }
    return;
}

// Address: 0x1000f308 | Size: 260 bytes
// Updates city border defense counts by examining neighbor army adjacency.
// For each army slot in the city's defense grid, counts how many
// neighboring armies belong to the city owner.
void FUN_1000f308(short param_1)
{
    int bVar1;
    unsigned char bVar2;
    short sVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    short sVar7;
    int iVar8;
    char auStack_30[8];
    unsigned char abStack_28[40];

    piVar5 = piRam10117468;
    piVar4 = piRam1011735c;
    sVar3 = *(short *)(*piRam10117468 + param_1 * 0x5c + 0x24e);
    iVar8 = 0;
    do {
        sVar7 = *(short *)(*piVar5 + param_1 * 0x5c + iVar8 * 2 + 0x25a);
        if (sVar7 != -1) {
            FUN_1000da14(sVar7, 0, (int)abStack_28, (int)auStack_30);
            sVar7 = 0;
            iVar6 = 5;
            do {
                bVar2 = abStack_28[iVar6];
                if ((bVar2 != 0xff) && ((int)*(char *)(*piVar4 + (unsigned int)bVar2 * 0x42 + 0x1619) == (int)sVar3)
                   ) {
                    sVar7 = sVar7 + 1;
                }
                bVar1 = iVar6 != 0;
                iVar6 = (int)(short)((short)iVar6 + -1);
            } while (bVar1);
            *(short *)(*piVar5 + param_1 * 0x5c + iVar8 * 2 + 0x27e) = sVar7;
        }
        sVar7 = (short)iVar8 + 1;
        iVar8 = (int)sVar7;
    } while (sVar7 < 6);
    return;
}
