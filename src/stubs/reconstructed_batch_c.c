/*
 * reconstructed_batch_c.c - Reconstructed function implementations
 *
 * Address range: 0x100A0000 - 0x10117FFF
 * Contains 92 decompiled functions from the Ghidra output.
 *
 * Patterns in this range:
 *   FUN_100CDxxx/FUN_100Dxxx: Class descriptor / init functions (MacApp vtable)
 *   FUN_100Exxxx: Memory management, handle manipulation
 *   FUN_100Fxxxx: Resource management, file I/O
 *   Paired functions (e.g. FUN_100cd91c/FUN_100cd924): getter/constructor pairs
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 */

#include "warlords2.h"

/* =========================================================================
 * External Globals
 * ========================================================================= */

/* uRam globals - MacApp class descriptor / vtable info pointers */
extern int uRam10116a54;
extern int uRam10116c34;
extern int uRam10116d40;
extern int uRam10116d48;
extern int uRam10116d50;
extern int uRam10116d58;
extern int uRam10116d60;
extern int uRam10116d68;
extern int uRam10116d70;
extern int uRam10116d78;
extern int uRam10116d80;
extern int uRam10116d88;
extern int uRam10116da0;
extern int uRam10116de0;
extern int uRam10116e0c;
extern int uRam10116e1c;
extern int uRam10116f28;
extern int uRam10116f58;
extern int uRam10116f60;
extern int uRam10116f68;
extern int uRam1011687c;
extern int uRam10117080;
extern int uRam10117160;
extern int uRam10117174;
extern int uRam101173c8;
extern int uRam101173e8;
extern int uRam101173ec;

/* _FUN_10116e14 - overlapping symbol, used as a global value */
extern int _FUN_10116e14;

/* _DAT_10117898 - data global used by FUN_101165c4 */
extern int _DAT_10117898;

/* piRam globals - pointer-to-int globals */
extern int *piRam1011684c;
extern int *piRam10117834;

/* puRam globals */
extern int *puRam10116854;
extern int *puRam10116bc0;
extern int *puRam10116f30;
extern int *puRam10117098;
extern int *puRam10117170;
extern int *puRam10117370;
extern int *puRam101170a4;
extern int *puRam101170a8;
extern int *puRam10117808;
extern int *puRam10117838;

/* iRam globals */
extern int iRam1011788c;

/* PEF_Debug_0x7_10117864 - Ghidra PEF debug section struct at addr 0x10117864 */
/* .name._0_4_ = first 4 bytes (used as int* pointer to a heap allocator handle)
 * .unknown     = byte at offset +4 (used as a char* for a flag byte) */
struct PEF_Debug_struct {
    int name;       /* +0x00: used as *(int*) for heap handle */
    int unknown;    /* +0x04: used as *(char*) for boolean flag */
};
extern struct PEF_Debug_struct PEF_Debug_0x7_10117864;

/* =========================================================================
 * Forward Declarations for called functions
 * ========================================================================= */

/* MacApp framework / vtable dispatch - varargs trampoline.
 * In the original PPC binary this is an indirect call through r12.
 * Declared with no prototype so callers can pass any number of args. */
int FUN_10117884();

/* Object constructors / base class initializers */
int *FUN_100c604c(int *param_1);
int *FUN_100c7d84(int *param_1);
int *FUN_100d7adc(int *param_1);
int *FUN_1010f054(int *param_1);

/* Memory allocation */
int  FUN_100f56e4(int size);
int  FUN_100f56c0(int size);
void FUN_100f5274();
int *FUN_100f4dc8(int *param_1);

/* Forward declarations for functions defined later in this file */
int *FUN_1010598c(int *param_1);
int *FUN_100f6b8c(int *param_1);
int *FUN_100c6b2c(int *param_1);
int *FUN_100cdbe4(int *param_1);
int *FUN_100cdc88(int *param_1);
int *FUN_100d8824(int *param_1);
int *FUN_100bf518(int *param_1);
int *FUN_100e1df4(int *param_1);
int *FUN_100e1ea4(int *param_1);
int  FUN_100eb910();
void FUN_100eb918();
void FUN_100ebc68(int *param_1, int param_2);
int  FUN_100ed918(void);
void FUN_100ed954(char *param_1, int param_2);
void FUN_100d88b4(int param_1, int param_2, short param_3);
int  FUN_100f5640(int param_1);
int  FUN_100f56e4(int param_1);
void FUN_100f5708(int param_1);

/* Object framework helpers */
int  FUN_100b057c(int *param_1, int param_2);
void FUN_100b02d0(int *param_1);
void FUN_100b0a18(int param_1, int param_2);
int  FUN_100b0960(int param_1, int param_2);
int  FUN_100b1134(int, int, int, int, int);
void FUN_100b1210(void);
int  FUN_100b1058(int, int, int, int);
void FUN_100afb5c(int, int, int);
void FUN_100b19f4(char *param_1, char *param_2);
void FUN_100b1d90(int param_1, int param_2);
int  FUN_100b1c84(int param_1);
int  FUN_100b0578(int param_1);
void FUN_100b06d4(int *param_1, short *param_2);
void FUN_100b08d4(short *param_1, int *param_2);
void FUN_100b2e74(void);
void FUN_100b4c68(void);

/* Resource / document helpers */
void FUN_100f06dc(int param_1, int param_2);
void FUN_100f0d3c(int param_1, int param_2);
void FUN_100f0f78(int *param_1, int *param_2, int *param_3, int *param_4);
void FUN_100f138c(void);
void FUN_100f13e8(int param_1, int param_2);
void FUN_100f2a54(void);
int  FUN_100f2214(int param_1);
void FUN_100f25e0(int param_1, short *param_2);
void FUN_100f5814(void);
int  FUN_100f1264(void);

/* Draw/render helpers */
void FUN_1003206c(int, int, int, int);
int  FUN_1005f678(int, int);
void FUN_10001dd0(char *, int, int);
void FUN_10090e0c(int, int, char *, int);
void FUN_10079ee8(int, int, int, int);
void FUN_1007a018(int, short, int, int, int);

/* Document / behavior framework */
void FUN_100d7ba0(int, int, int);
int  FUN_100d8b0c(int, int, int);
void FUN_100da260(int *, int);
void FUN_100da3f0(int *param_1);
void FUN_100c6014(int, int, int *);
int  FUN_100f5754(int param_1);
int  FUN_100c5dcc(int param_1);
void FUN_100c0f10(void);
void FUN_100c3c94(void);
int  FUN_100c2120(int param_1);

/* App lifecycle */
int  FUN_10000090(char *param_1);
int  FUN_100beb7c(int param_1);
void FUN_100becb8(void);
void FUN_100db158(long long, int);
void FUN_100db26c(void);
void FUN_100db2f4(void);
int  FUN_10001590(void);
void FUN_100015a8(void);
int  FUN_10001680(int, int, int, int, int, int, int, int);
int  FUN_100016b0(void);
int  FUN_100ef580(int);

/* Event dispatch */
void FUN_100013b0(int);
void FUN_100013c8(void);
void FUN_100013e0(void);
void FUN_100013f8(int, int);
void FUN_10001410(long long);
void FUN_10001428(void);
void FUN_10001440(void);
void FUN_10001458(int);
int  FUN_10001470(int);
void FUN_10001488(void);
void FUN_100014a0(int);
int  FUN_100014b8(void);
void FUN_100014d0(long long, char *);
void FUN_10000150(void);
int  FUN_100019f8(void);
int  FUN_10000300(void);
void FUN_10000318(int);
void FUN_10000390(void);
void FUN_10000960(void);
void FUN_100019c8(void);
void FUN_10001a70(void);
void FUN_100025b0(void);
void FUN_100018f0(int, int *, int, int);
void FUN_10001908(int *);
void FUN_10001920(int);

/* UI / App registration */
void FUN_1010597c(void);
void FUN_1010d6a8(void);
void FUN_1010d6b8(int);
void FUN_1010f044(void);
void FUN_100c9950(void);
void FUN_100c9960(int);
void FUN_100ca068(void);
void FUN_100ca078(int);
void FUN_100f6b7c(void);
void FUN_100c43ec(void);
void FUN_100c43fc(int);
void FUN_100e9e78(void);
void FUN_100e90bc(int);

/* FUN_100b226c - point comparison helper */
int  FUN_100b226c(void);

/* Sound / resource */
void FUN_100ecf88(int param_1);
void FUN_100ec5c8(int, int);

/* Iterator / collection */
void FUN_100eb91c(int *, int *, int, int, char);
int  FUN_100eb8d0(int param_1);
void FUN_100ebbe0(int *param_1);
int  FUN_100ebf44(int *param_1);

/* Window framework (FUN_1011xxxx) */
void FUN_10116338(int param_1);
void FUN_10117024(int param_1, int param_2);
void FUN_101171bc(int param_1, int param_2);
void FUN_10116538(int param_1, int param_2);
void FUN_10117304(int param_1, int param_2);
void FUN_101170f4(int param_1, int param_2);
void FUN_10115a00(int param_1);

/* Concat macro for CONCAT22 (combine two shorts into an int) */
#ifndef CONCAT22
#define CONCAT22(hi, lo) ((int)(((unsigned int)(unsigned short)(hi) << 16) | (unsigned short)(lo)))
#endif

/* ZEXT48 macro - zero-extend 4 bytes to 8 (on 32-bit this is identity) */
#ifndef ZEXT48
#define ZEXT48(x) ((unsigned long)(x))
#endif


/* =========================================================================
 *  FUN_100ae1a8 - UI panel: update army unit display
 *  Address: 0x100ae1a8, Size: 936 bytes
 * ========================================================================= */
void FUN_100ae1a8(short param_1)
{
    int *piVar4;
    short local_270;
    char auStack_264[80];
    char auStack_214[256];
    short local_114;
    int local_110;
    int local_10c;
    char auStack_108[264];

    if (param_1 == 0) {
        local_270 = 0;
        while (local_270 < 2) {
            piVar4 = (int *)*piRam1011684c;
            piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),
                                         (long long)local_270 + 0x73696431);
            if (piVar4 != (int *)0x0) {
                if (*(short *)((int)piVar4 + 0x82) != 0) {
                    *(short *)((int)piVar4 + 0x82) = 0;
                    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x488));
                }
                if (*(short *)(*piRam1011735c + 0x110) != *(short *)(piVar4 + 0x20)) {
                    *(short *)(piVar4 + 0x20) = *(short *)(*piRam1011735c + 0x110);
                    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x4d0));
                }
            }
            local_270 = local_270 + 1;
        }
        FUN_1003206c(2, 0xe0, 0xff, 0xf9);
        {
            int uVar3 = FUN_1005f678(0x80, 1);
            int uVar5 = *(short *)(*piRam1011735c + 0x110);
            FUN_10001dd0(auStack_264, uVar3,
                         (int)*piRam1011735c +
                         ((uVar5 & 0x3fffffff) * 4 + uVar5 & 0x3fffffff) * 4);
        }
        FUN_100b19f4(auStack_214, auStack_264);
        FUN_10090e0c(**(int **)((int)piRam1011684c), 0x73756274, auStack_214, 1);
    }
    FUN_1003206c(2, 0xe0, 0xff, 0xf9);
    local_270 = 0;
    while (local_270 < 0x1b) {
        local_114 = 0;
        while (local_114 < 0x1d) {
            int *piCheck = (int *)*piRam1011735c;
            if ((int)*(char *)(*piCheck + 0x60c + *(short *)(*piCheck + 0x110) * 0x1d +
                               (int)local_114) == (int)local_270) {
                break;
            }
            local_114 = local_114 + 1;
        }
        piVar4 = (int *)*piRam1011684c;
        local_110 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),
                                 (long long)local_270 + 0x61726d30);
        if (local_110 != 0) {
            FUN_10079ee8(local_110, local_114, *(short *)(*piRam1011735c + 0x110), 1);
            if (*(short *)piRam1011684c == local_270) {
                local_10c = *(short *)(*piRam1011735c + 0x110) + 2;
            }
            else {
                local_10c = 1;
            }
            FUN_1007a018(local_110, (short)local_10c, 0, 0, 1);
        }
        if (param_1 == 0) {
            FUN_10001dd0(auStack_264, 0, (long long)local_270 + 1);
            FUN_100b19f4(auStack_108, auStack_264);
            FUN_10090e0c(**(int **)piRam1011684c, (long long)local_270 + 0x73747230,
                         auStack_108, 1);
        }
        local_270 = local_270 + 1;
    }
    return;
}


/* =========================================================================
 *  FUN_100ae550 - UI panel: update left/right arrow enable state
 *  Address: 0x100ae550, Size: 556 bytes
 * ========================================================================= */
void FUN_100ae550(void)
{
    int *piVar1;
    int *piVar2;

    piVar1 = (int *)FUN_10117884(*piRam1011684c + (int)*(short *)(*(int *)*piRam1011684c + 0x308),
                                 0x6c656674);
    piVar2 = (int *)FUN_10117884(*piRam1011684c + (int)*(short *)(*(int *)*piRam1011684c + 0x308),
                                 0x72696768);
    if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        short sel = *(short *)piRam1011684c;
        if (sel < 0) {
            FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738), 1, 1);
            FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738), 1, 1);
        }
        else if (sel == 0) {
            FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738), 1, 1);
            FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738), 0, 1);
        }
        else if (sel == 0x1a) {
            FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738), 0, 1);
            FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738), 1, 1);
        }
        else {
            FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738), 0, 1);
            FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738), 0, 1);
        }
    }
    return;
}


/* =========================================================================
 *  FUN_100ae77c - Copy terrain data from resource
 *  Address: 0x100ae77c, Size: 72 bytes
 * ========================================================================= */
void FUN_100ae77c(void)
{
    int uVar3;
    uVar3 = FUN_100ef580(*puRam10116854);
    *piRam1011684c = uVar3;
    uVar3 = FUN_100ef580(*piRam1011684c);
    *(int *)((char *)piRam1011684c + 4) = uVar3;
    return;
}


/* =========================================================================
 *  FUN_100ae7c4 - Copy terrain move costs from resource, then snapshot
 *  Address: 0x100ae7c4, Size: 168 bytes
 * ========================================================================= */
void FUN_100ae7c4(void)
{
    int uVar3;
    short local_8;

    local_8 = 0;
    do {
        *(char *)
         (*piRam1011735c + 0x60c + *(short *)(*piRam1011735c + 0x110) * 0x1d + (int)local_8) =
             *(char *)(*puRam10116854 + (int)local_8);
        local_8 = local_8 + 1;
    } while (local_8 < 0x1d);
    uVar3 = FUN_100ef580(*puRam10116854);
    *piRam1011684c = uVar3;
    uVar3 = FUN_100ef580(*piRam1011684c);
    *(int *)((char *)piRam1011684c + 4) = uVar3;
    return;
}


/* =========================================================================
 *  FUN_100b0368 - Copy 4-byte value between pointers
 *  Address: 0x100b0368, Size: 28 bytes
 * ========================================================================= */
void FUN_100b0368(int *param_1, int *param_2)
{
    *param_1 = *param_2;
    return;
}


/* =========================================================================
 *  FUN_100b2264 - No-op (empty function, 4 bytes)
 *  Address: 0x100b2264, Size: 4 bytes
 * ========================================================================= */
void FUN_100b2264(void)
{
    return;
}


/* =========================================================================
 *  FUN_100b2268 - No-op (empty function, 4 bytes)
 *  Address: 0x100b2268, Size: 4 bytes
 * ========================================================================= */
void FUN_100b2268(void)
{
    return;
}


/* =========================================================================
 *  FUN_100b22b0 - Compare two 6-byte structures (3 shorts), return equality
 *  Address: 0x100b22b0, Size: 48 bytes
 * ========================================================================= */
int FUN_100b22b0(void)
{
    int lVar1;

    lVar1 = FUN_100b226c();
    return lVar1 == 0;
}


/* =========================================================================
 *  FUN_100bece4 - TObject constructor (allocate 8 bytes, init vtable)
 *  Address: 0x100bece4, Size: 112 bytes
 * ========================================================================= */
int *FUN_100bece4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(8),
       param_1 != (int *)0x0)) {
        FUN_100f4dc8(param_1);
        /* vtable class descriptor is stored indirectly; simplified for modern build */
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[1] = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100bed7c - Document open handler: set up error port, call open
 *  Address: 0x100bed7c, Size: 200 bytes
 * ========================================================================= */
void FUN_100bed7c(int *param_1)
{
    int *puVar1;
    int iVar2;
    char auStack_128[256];
    short local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;

    puVar1 = puRam10117370;
    FUN_100f5274((int)param_1);
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puVar1;
    *puVar1 = (int)auStack_128;
    iVar2 = FUN_10000090(auStack_128);
    if (iVar2 == 0) {
        iVar2 = FUN_100beb7c(0);
        FUN_100becb8();
        param_1[1] = iVar2;
        *puVar1 = local_20;
    }
    else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
        FUN_100db158(local_28, local_24);
    }
    return;
}


/* =========================================================================
 *  FUN_100bf518 - TObject constructor (allocate 0x20 bytes, init fields)
 *  Address: 0x100bf518, Size: 164 bytes
 * ========================================================================= */
int *FUN_100bf518(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x20),
       param_1 != (int *)0x0)) {
        FUN_100f4dc8(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[1] = 0x20202020;
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        *(char *)(param_1 + 3) = 1;
        *(char *)((int)param_1 + 0xd) = 0;
        param_1[6] = 0x7fffffff;
        param_1[7] = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100c6178 - Event handler: dispatch event or handle locally
 *  Address: 0x100c6178, Size: 240 bytes
 * ========================================================================= */
void FUN_100c6178(int *param_1, int param_2)
{
    int iVar3;

    if (param_2 == 0x65) {
        iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x230));
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != (int)param_1)) {
            FUN_100da260(param_1, param_2);
        }
        else {
            int uVar1 = FUN_100f5754(0);
            int uVar2 = FUN_100c5dcc(0);
            FUN_100f5754(uVar1);
            FUN_100c6014(uVar2, param_2, param_1);
            FUN_10117884((int)*(short *)(*param_1 + 0x208) + (int)param_1, uVar2);
        }
    }
    else {
        FUN_100da260(param_1, param_2);
    }
    return;
}


/* =========================================================================
 *  FUN_100c6b1c - Return class descriptor for MacApp object type
 *  Address: 0x100c6b1c, Size: 8 bytes
 * ========================================================================= */
int FUN_100c6b1c(void)
{
    return uRam10116c34;
}


/* =========================================================================
 *  FUN_100c6b2c - Extended object constructor (0xa8 bytes)
 *  Address: 0x100c6b2c, Size: 184 bytes
 * ========================================================================= */
int *FUN_100c6b2c(int *param_1)
{
    int *puVar4;

    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xa8),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 1;
        *(char *)(param_1 + 0x21) = 0;
        *(char *)((int)param_1 + 0x85) = 0;
        *(char *)((int)param_1 + 0x86) = 1;
        /* Copy 16 bytes of default rect data */
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        /* Copy 12 bytes of default extent data */
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x28] = 0;
        *(short *)(param_1 + 0x29) = (short)0xffff;
        *(char *)((int)param_1 + 0xa6) = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cd91c - Return class descriptor (uRam10116d40)
 *  Address: 0x100cd91c, Size: 8 bytes
 * ========================================================================= */
int FUN_100cd91c(void)
{
    return uRam10116d40;
}


/* =========================================================================
 *  FUN_100cd924 - Constructor: allocate 0x88 bytes
 *  Address: 0x100cd924, Size: 120 bytes
 * ========================================================================= */
int *FUN_100cd924(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x88),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 0x20202020;
        param_1[0x21] = 0x20202020;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cd99c - Return class descriptor (uRam10116d48)
 *  Address: 0x100cd99c, Size: 8 bytes
 * ========================================================================= */
int FUN_100cd99c(void)
{
    return uRam10116d48;
}


/* =========================================================================
 *  FUN_100cd9a4 - Constructor: allocate 0xb4 bytes (uses FUN_100c6b2c)
 *  Address: 0x100cd9a4, Size: 148 bytes
 * ========================================================================= */
int *FUN_100cd9a4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb4),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2b] = 0;
        *(short *)(param_1 + 0x2a) = (short)0xffff;
        *(short *)((int)param_1 + 0xaa) = 0;
        param_1[0x2c] = 0x20202020;
        param_1[0x20] = 5;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cda38 - Return class descriptor (uRam10116d50)
 *  Address: 0x100cda38, Size: 8 bytes
 * ========================================================================= */
int FUN_100cda38(void)
{
    return uRam10116d50;
}


/* =========================================================================
 *  FUN_100cda40 - Constructor: allocate 0xb0 bytes (uses FUN_100c6b2c)
 *  Address: 0x100cda40, Size: 140 bytes
 * ========================================================================= */
int *FUN_100cda40(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb0),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2b] = 0;
        *(char *)((int)param_1 + 0xa9) = 1;
        *(char *)(param_1 + 0x2a) = 1;
        *(short *)((int)param_1 + 0xaa) = (short)0xffff;
        param_1[0x20] = 7;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cdacc - Return class descriptor (uRam10116d58)
 *  Address: 0x100cdacc, Size: 8 bytes
 * ========================================================================= */
int FUN_100cdacc(void)
{
    return uRam10116d58;
}


/* =========================================================================
 *  FUN_100cdad4 - Constructor: allocate 0xb0 bytes
 *  Address: 0x100cdad4, Size: 128 bytes
 * ========================================================================= */
int *FUN_100cdad4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb0),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2b] = 0;
        *(short *)(param_1 + 0x2a) = (short)0xffff;
        param_1[0x20] = 0x17;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cdb54 - Return class descriptor (uRam10116d60)
 *  Address: 0x100cdb54, Size: 8 bytes
 * ========================================================================= */
int FUN_100cdb54(void)
{
    return uRam10116d60;
}


/* =========================================================================
 *  FUN_100cdb5c - Constructor: allocate 0xb0 bytes
 *  Address: 0x100cdb5c, Size: 128 bytes
 * ========================================================================= */
int *FUN_100cdb5c(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb0),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2b] = 0;
        *(short *)(param_1 + 0x2a) = (short)0xffff;
        param_1[0x20] = 10;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cdbdc - Return class descriptor (uRam10116d68)
 *  Address: 0x100cdbdc, Size: 8 bytes
 * ========================================================================= */
int FUN_100cdbdc(void)
{
    return uRam10116d68;
}


/* =========================================================================
 *  FUN_100cdbe4 - Constructor: allocate 0xb4 bytes (dialog control)
 *  Address: 0x100cdbe4, Size: 156 bytes
 * ========================================================================= */
int *FUN_100cdbe4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb4),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2b] = 0;
        *(short *)(param_1 + 0x2a) = (short)0xffff;
        *(short *)((int)param_1 + 0xaa) = 0;
        *(short *)(param_1 + 0x2c) = 0;
        *(char *)((int)param_1 + 0xb2) = 1;
        *(char *)((int)param_1 + 0xb3) = 0;
        param_1[0x20] = 0xd;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cdc80 - Return class descriptor (uRam10116d70)
 *  Address: 0x100cdc80, Size: 8 bytes
 * ========================================================================= */
int FUN_100cdc80(void)
{
    return uRam10116d70;
}


/* =========================================================================
 *  FUN_100cdc88 - Constructor: allocate 0xc0 bytes (extends FUN_100cdbe4)
 *  Address: 0x100cdc88, Size: 224 bytes
 * ========================================================================= */
int *FUN_100cdc88(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xc0), param_1 != (int *)0x0)) {
        FUN_100cdbe4(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2e] = 0;
        *(short *)(param_1 + 0x2d) = 0xff;
        param_1[0x2f] = -0xfffff00;
        /* Copy default extent (12 bytes) */
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x28] = 0;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770), 0x10001);
        *(char *)((int)param_1 + 0x53) = 1;
        param_1[0x20] = 6;
        *(short *)(param_1 + 0x13) = 1;
        *(char *)((int)param_1 + 0x49) = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cdd68 - Return class descriptor (uRam10116d78)
 *  Address: 0x100cdd68, Size: 8 bytes
 * ========================================================================= */
int FUN_100cdd68(void)
{
    return uRam10116d78;
}


/* =========================================================================
 *  FUN_100cdd70 - Constructor: allocate 200 (0xc8) bytes (extends FUN_100cdc88)
 *  Address: 0x100cdd70, Size: 124 bytes
 * ========================================================================= */
int *FUN_100cdd70(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(200),
       param_1 != (int *)0x0)) {
        FUN_100cdc88(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x31] = 0x7fffffff;
        param_1[0x30] = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cddec - Return class descriptor (uRam10116d80)
 *  Address: 0x100cddec, Size: 8 bytes
 * ========================================================================= */
int FUN_100cddec(void)
{
    return uRam10116d80;
}


/* =========================================================================
 *  FUN_100cddf4 - Constructor: allocate 0xb0 bytes (popup menu?)
 *  Address: 0x100cddf4, Size: 140 bytes
 * ========================================================================= */
int *FUN_100cddf4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb0),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x2b] = 0;
        *(char *)(param_1 + 0x2a) = 1;
        *(char *)((int)param_1 + 0xa9) = 1;
        *(short *)((int)param_1 + 0xaa) = (short)0xffff;
        param_1[0x20] = 0x13;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cde80 - Return class descriptor (uRam10116d88)
 *  Address: 0x100cde80, Size: 8 bytes
 * ========================================================================= */
int FUN_100cde80(void)
{
    return uRam10116d88;
}


/* =========================================================================
 *  FUN_100cde88 - Constructor: allocate 0x84 bytes (uses FUN_1010598c)
 *  Address: 0x100cde88, Size: 128 bytes
 * ========================================================================= */
int *FUN_100cde88(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x84),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 0x20202020;
        *(char *)((int)param_1 + 0x46) = 1;
        *(char *)((int)param_1 + 0x47) = 1;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100cdf08 - Constructor: allocate 8 bytes (minimal object)
 *  Address: 0x100cdf08, Size: 112 bytes
 * ========================================================================= */
int *FUN_100cdf08(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(8),
       param_1 != (int *)0x0)) {
        FUN_100f4dc8(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[1] = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d450c - Return class descriptor (uRam10116e0c)
 *  Address: 0x100d450c, Size: 8 bytes
 * ========================================================================= */
int FUN_100d450c(void)
{
    return uRam10116e0c;
}


/* =========================================================================
 *  FUN_100d451c - Constructor: allocate 0xc4 bytes (extends FUN_100c7d84)
 *  Address: 0x100d451c, Size: 124 bytes
 * ========================================================================= */
int *FUN_100d451c(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xc4),
       param_1 != (int *)0x0)) {
        FUN_100c7d84(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 3;
        *(short *)(param_1 + 0x30) = (short)0xffff;
        *(short *)((int)param_1 + 0xc2) = (short)0xffff;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d48f8 - Return class descriptor (_FUN_10116e14)
 *  Address: 0x100d48f8, Size: 8 bytes
 * ========================================================================= */
int FUN_100d48f8(void)
{
    return _FUN_10116e14;
}


/* =========================================================================
 *  FUN_100d4908 - Constructor: allocate 0xc4 bytes (extends FUN_100c7d84)
 *  Address: 0x100d4908, Size: 124 bytes
 * ========================================================================= */
int *FUN_100d4908(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xc4),
       param_1 != (int *)0x0)) {
        FUN_100c7d84(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 4;
        *(short *)(param_1 + 0x30) = (short)0xffff;
        *(short *)((int)param_1 + 0xc2) = (short)0xffff;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d4e94 - Return class descriptor (uRam10116e1c)
 *  Address: 0x100d4e94, Size: 8 bytes
 * ========================================================================= */
int FUN_100d4e94(void)
{
    return uRam10116e1c;
}


/* =========================================================================
 *  FUN_100d4ea4 - Constructor: allocate 0xc4 bytes (extends FUN_100c7d84)
 *  Address: 0x100d4ea4, Size: 124 bytes
 * ========================================================================= */
int *FUN_100d4ea4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xc4),
       param_1 != (int *)0x0)) {
        FUN_100c7d84(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 0xc;
        *(short *)(param_1 + 0x30) = (short)0xffff;
        *(short *)((int)param_1 + 0xc2) = (short)0xffff;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d568c - Constructor: TBehavior (allocate 0x34 bytes)
 *  Address: 0x100d568c, Size: 140 bytes
 * ========================================================================= */
int *FUN_100d568c(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x34),
       param_1 != (int *)0x0)) {
        FUN_100bf518(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        *(char *)(param_1 + 8) = 0;
        param_1[9] = 0x20202020;
        param_1[10] = 0x20202020;
        param_1[0xb] = 0x20202020;
        *(char *)(param_1 + 0xc) = 1;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d8824 - Constructor: allocate 0x20 bytes (extends FUN_100d7adc)
 *  Address: 0x100d8824, Size: 104 bytes
 * ========================================================================= */
int *FUN_100d8824(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x20),
       param_1 != (int *)0x0)) {
        FUN_100d7adc(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d88b4 - Delegate to FUN_100d7ba0
 *  Address: 0x100d88b4, Size: 40 bytes
 * ========================================================================= */
void FUN_100d88b4(int param_1, int param_2, short param_3)
{
    FUN_100d7ba0(param_1, param_2, param_3);
    return;
}


/* =========================================================================
 *  FUN_100d8c30 - Try resource load with fallback
 *  Address: 0x100d8c30, Size: 108 bytes
 * ========================================================================= */
int FUN_100d8c30(short param_1, short param_2, int param_3)
{
    int iVar2;
    int uVar1;

    iVar2 = FUN_100d8b0c(param_1, param_2 + 1000, param_3);
    if (iVar2 == 0) {
        uVar1 = FUN_100d8b0c(param_1, param_2, param_3);
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* =========================================================================
 *  FUN_100d9034 - Constructor: allocate 0x14 bytes (event handler obj)
 *  Address: 0x100d9034, Size: 136 bytes
 * ========================================================================= */
int *FUN_100d9034(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x14),
       param_1 != (int *)0x0)) {
        FUN_100f4dc8(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(char *)(param_1 + 4) = 0;
        *(char *)((int)param_1 + 0x11) = 0x40;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100d90e4 - Initialize event handler with 3 params
 *  Address: 0x100d90e4, Size: 76 bytes
 * ========================================================================= */
void FUN_100d90e4(int param_1, int param_2, int param_3, int param_4)
{
    FUN_100f5274(param_1);
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    *(int *)(param_1 + 0xc) = param_4;
    return;
}


/* =========================================================================
 *  FUN_100da394 - Dispatch event via vtable
 *  Address: 0x100da394, Size: 92 bytes
 * ========================================================================= */
void FUN_100da394(int *param_1)
{
    int *piVar1;

    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
    if (piVar1 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar1 + 0x120) + (int)piVar1);
    }
    return;
}


/* =========================================================================
 *  FUN_100e0c90 - Return class descriptor (uRam10116f28)
 *  Address: 0x100e0c90, Size: 8 bytes
 * ========================================================================= */
int FUN_100e0c90(void)
{
    return uRam10116f28;
}


/* =========================================================================
 *  FUN_100e0ca0 - Constructor: allocate 200 (0xc8) bytes (extends FUN_1010f054)
 *  Address: 0x100e0ca0, Size: 172 bytes
 * ========================================================================= */
int *FUN_100e0ca0(int *param_1)
{
    int *puVar3;

    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(200),
       param_1 != (int *)0x0)) {
        FUN_1010f054(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        puVar3 = (int *)FUN_100b057c(param_1 + 0x24, 0);
        *puVar3 = 0; /* vtable pointer placeholder */
        *(char *)((int)param_1 + 0xb7) = 1;
        *(char *)((int)param_1 + 0xab) = 1;
        *(char *)((int)param_1 + 0xb6) = 1;
        *(char *)((int)param_1 + 0xb9) = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100e1dec - Return class descriptor (uRam10116f58)
 *  Address: 0x100e1dec, Size: 8 bytes
 * ========================================================================= */
int FUN_100e1dec(void)
{
    return uRam10116f58;
}


/* =========================================================================
 *  FUN_100e1df4 - Constructor: allocate 0xa0 bytes (UI control)
 *  Address: 0x100e1df4, Size: 168 bytes
 * ========================================================================= */
int *FUN_100e1df4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xa0),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        *(short *)(param_1 + 0x20) = 0;
        *(short *)((int)param_1 + 0x82) = 0;
        *(char *)(param_1 + 0x23) = 0;
        *(char *)((int)param_1 + 0x8d) = 0;
        *(short *)(param_1 + 0x24) = 0;
        *(short *)((int)param_1 + 0x92) = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        *(char *)((int)param_1 + 0x8e) = 1;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100e1e9c - Return class descriptor (uRam10116f60)
 *  Address: 0x100e1e9c, Size: 8 bytes
 * ========================================================================= */
int FUN_100e1e9c(void)
{
    return uRam10116f60;
}


/* =========================================================================
 *  FUN_100e1ea4 - Constructor: allocate 0xb8 bytes (extends FUN_100e1df4)
 *  Address: 0x100e1ea4, Size: 152 bytes
 * ========================================================================= */
int *FUN_100e1ea4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb8),
       param_1 != (int *)0x0)) {
        FUN_100e1df4(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        /* Copy default extent (12 bytes) */
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x2a] = 0;
        *(short *)(param_1 + 0x2b) = (short)0xffff;
        *(short *)((int)param_1 + 0xae) = 0;
        *(char *)(param_1 + 0x2c) = 0;
        *(short *)((int)param_1 + 0xb2) = 0;
        *(short *)(param_1 + 0x2d) = 0;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100e1f3c - Return class descriptor (uRam10116f68)
 *  Address: 0x100e1f3c, Size: 8 bytes
 * ========================================================================= */
int FUN_100e1f3c(void)
{
    return uRam10116f68;
}


/* =========================================================================
 *  FUN_100e1f44 - Constructor: allocate 0xb8 bytes (extends FUN_100e1ea4)
 *  Address: 0x100e1f44, Size: 104 bytes
 * ========================================================================= */
int *FUN_100e1f44(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xb8),
       param_1 != (int *)0x0)) {
        FUN_100e1ea4(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100ea428 - Constructor: allocate 0x20 bytes (extends FUN_100d8824)
 *  Address: 0x100ea428, Size: 104 bytes
 * ========================================================================= */
int *FUN_100ea428(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x20),
       param_1 != (int *)0x0)) {
        FUN_100d8824(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100ea4b8 - Delegate to FUN_100d88b4 with fixed params
 *  Address: 0x100ea4b8, Size: 44 bytes
 * ========================================================================= */
void FUN_100ea4b8(int param_1)
{
    FUN_100d88b4(param_1, 0, 4);
    return;
}


/* =========================================================================
 *  FUN_100eb910 - Return 0 (null iterator / empty result)
 *  Address: 0x100eb910, Size: 8 bytes
 * ========================================================================= */
int FUN_100eb910()
{
    return 0;
}


/* =========================================================================
 *  FUN_100eb918 - No-op destructor (empty, 4 bytes)
 *  Address: 0x100eb918, Size: 4 bytes
 * ========================================================================= */
void FUN_100eb918()
{
    return;
}


/* =========================================================================
 *  FUN_100ebaf8 - Iterator constructor: allocate 0x134 bytes
 *  Address: 0x100ebaf8, Size: 232 bytes
 * ========================================================================= */
int *FUN_100ebaf8(int *param_1, int *param_2, char param_3)
{
    int uVar2;

    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100eb910(0x134),
       param_1 != (int *)0x0)) {
        *param_1 = 0; /* vtable pointer placeholder */
        *(short *)(param_1 + 0x46) = 0;
        param_1[0x47] = 0;
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x4a] = 0;
        if (param_2 == (int *)0x0) {
            FUN_100eb91c(param_1, 0, 0, 0, param_3);
        }
        else {
            uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
            FUN_100eb91c(param_1, param_2, 1, uVar2, param_3);
        }
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100ebc68 - Iterator destructor: clean up and optionally free
 *  Address: 0x100ebc68, Size: 128 bytes
 * ========================================================================= */
void FUN_100ebc68(int *param_1, int param_2)
{
    if (param_1 != (int *)0x0) {
        *param_1 = uRam10117080;
        if (param_1[4] != 0) {
            *puRam10117370 = param_1[0x48];
            FUN_100ebbe0(param_1);
        }
        if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
            FUN_100eb918(param_1);
        }
    }
    return;
}


/* =========================================================================
 *  FUN_100ed524 - Sound/resource initialization
 *  Address: 0x100ed524, Size: 248 bytes
 * ========================================================================= */
void FUN_100ed524(void)
{
    int iVar1;
    int *puVar3;
    short uVar4;

    iVar1 = iRam1011788c;
    *puRam10117098 = (int)0xffffffff;
    FUN_100ecf88(iVar1);
    if (*(char *)(iVar1 + 0x28) == '\0') {
        FUN_100013b0(0 + 0xca);
        FUN_100013c8();
        FUN_100013e0();
        FUN_100013f8(0x7f7f, 0);
        FUN_10001410(-1LL);
        FUN_10001428();
        FUN_10001440();
        FUN_10001458(0);
        puVar3 = (int *)FUN_10001470(4);
        FUN_10001488();
        if (puVar3 != (int *)0x0) {
            FUN_100014a0(*puVar3);
        }
        uVar4 = FUN_100014b8();
        /* Store result back via indirection */
        (void)uVar4;
    }
    else {
        FUN_10000150();
    }
    return;
}


/* =========================================================================
 *  FUN_100ed61c - Delegate to FUN_10000150
 *  Address: 0x100ed61c, Size: 36 bytes
 * ========================================================================= */
void FUN_100ed61c(void)
{
    FUN_10000150();
    return;
}


/* =========================================================================
 *  FUN_100ed918 - Save state and cleanup
 *  Address: 0x100ed918, Size: 60 bytes
 * ========================================================================= */
int FUN_100ed918(void)
{
    int uVar1;

    uVar1 = FUN_100019f8();
    FUN_100db26c();
    return uVar1;
}


/* =========================================================================
 *  FUN_100ed954 - Register command handler in view's command table
 *  Address: 0x100ed954, Size: 420 bytes
 * ========================================================================= */
void FUN_100ed954(char *param_1, int param_2)
{
    int iVar1;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int local_158;
    int local_154;
    int local_150[84];

    piVar5 = piRam10117834;
    FUN_100ebaf8(local_150, *piRam10117834, 1);
    local_158 = param_2;
    local_154 = FUN_100c2120((int)param_1);
    if (local_154 == 0) {
        FUN_100db158((long long)-0x8000, 0);
    }
    FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
    iVar1 = local_150[1];
    iVar3 = FUN_100ebf44(local_150);
    while ((iVar3 != 0 &&
           (piVar4 = (int *)FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0xe0), iVar1),
           *piVar4 != param_2))) {
        FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
        iVar1 = local_150[1];
        iVar3 = FUN_100ebf44(local_150);
    }
    iVar3 = FUN_100ebf44(local_150);
    if (iVar3 == 0) {
        piVar5 = (int *)*piVar5;
        iVar1 = *piVar5;
        int lVar2 = FUN_10117884((int)piVar5 + (int)*(short *)(iVar1 + 0xa8));
        FUN_10117884((int)piVar5 + (int)*(short *)(iVar1 + 0xb8), lVar2 + 1, &local_158, 1);
    }
    else {
        piVar5 = (int *)FUN_10117884(*piVar5 + (int)*(short *)(*(int *)*piVar5 + 0xe0), iVar1);
        *piVar5 = local_158;
        piVar5[1] = local_154;
    }
    FUN_100ebc68(local_150, 2);
    return;
}


/* =========================================================================
 *  FUN_100edaf8 - Application main setup / initialization
 *  Address: 0x100edaf8, Size: 1304 bytes
 * ========================================================================= */
void FUN_100edaf8(void)
{
    int uVar11;
    int uVar10;
    int uVar8;
    int uVar9;
    int *piVar12;
    int local_780;
    int local_77c;
    short local_778;
    short local_776;
    short local_770;
    short local_76e;
    short local_768;
    short local_766;
    int local_760;
    int local_75c;
    short local_756;
    int local_750;
    int local_74c;
    char auStack_880[256];
    char auStack_980[256];
    char auStack_748[256];
    char auStack_648[256];
    char auStack_548[256];
    char auStack_448[256];
    char auStack_348[256];
    char auStack_248[256];
    char auStack_148[256];
    int local_48[18];

    FUN_100f5814();
    *puRam10117838 = 1;
    puRam10117838[1] = 0;
    FUN_100b1d90(0, 0 + 4);
    FUN_100f06dc(0x80, 0);
    FUN_100f06dc(0x82, 0);
    FUN_100f06dc(0x81, 0);
    FUN_100ec5c8(0, 0);
    uVar10 = FUN_100ed918();
    /* Store uVar10 */
    uVar8 = FUN_100b1c84(uRam10116a54);
    uVar9 = FUN_100b0578(uRam10116da0);
    uVar11 = FUN_10001680(0, uVar9, uVar8, 0, 0, 0, 0, 0);
    *puRam10117808 = uVar11;
    piVar12 = (int *)FUN_100016b0();
    local_750 = *(int *)(*piVar12 + 2);
    local_74c = *(int *)(*piVar12 + 6);
    *puRam101170a8 = local_750;
    puRam101170a8[1] = local_74c;
    local_768 = 4;
    local_766 = 4;
    FUN_100b06d4(puRam101170a8, &local_768);
    local_756 = 0x50;
    FUN_100b08d4(&local_778, &local_750);
    local_760 = CONCAT22(0x50, local_756);
    local_75c = CONCAT22(local_778, local_776);
    *puRam10116f30 = local_760;
    puRam10116f30[1] = local_75c;
    *(short *)(puRam10116f30 + 1) = *(short *)(puRam10116f30 + 1) + -8;
    *puRam101170a4 = local_750;
    puRam101170a4[1] = local_74c;
    local_770 = 0x10;
    local_76e = 0x10;
    FUN_100b06d4(puRam101170a4, &local_770);
    FUN_100c0f10();
    uVar8 = (int)FUN_100d7adc(0);
    FUN_100d7ba0(uVar8, 0, 8);

    /* Register MacApp behavior/view classes */
    FUN_1010597c();
    FUN_1010598c(0);
    FUN_1010d6a8();
    FUN_1010d6b8(0);
    FUN_1010f044();
    FUN_1010f054(0);
    FUN_100c9950();
    FUN_100c9960(0);
    FUN_100ca068();
    FUN_100ca078(0);
    FUN_100f6b7c();
    FUN_100f6b8c(0);
    FUN_100c43ec();
    FUN_100c43fc(0);
    FUN_100e9e78();
    FUN_100e90bc(0);

    /* Register command handlers */
    FUN_100b19f4(auStack_880, (char *)0 + 8);
    FUN_100ed954(auStack_880, 0x76696577);
    FUN_100b19f4(auStack_980, (char *)0 + 0x10);
    FUN_100ed954(auStack_980, 0x64666c74);
    FUN_100b19f4(auStack_748, (char *)0 + 0x18);
    FUN_100ed954(auStack_748, 0x696e6340);
    FUN_100b19f4(auStack_648, (char *)0 + 0x28);
    FUN_100ed954(auStack_648, 0x77696e64);
    FUN_100b19f4(auStack_548, (char *)0 + 0x30);
    FUN_100ed954(auStack_548, 0x73626172);
    FUN_100b19f4(auStack_448, (char *)0 + 0x3c);
    FUN_100ed954(auStack_448, 0x73736272);
    FUN_100b19f4(auStack_348, (char *)0 + 0x50);
    FUN_100ed954(auStack_348, 0x7363726c);
    FUN_100b19f4(auStack_248, (char *)0 + 0x5c);
    FUN_100ed954(auStack_248, 0x7472616b);
    FUN_100b19f4(auStack_148, (char *)0 + 0x68);
    FUN_100ed954(auStack_148, 0x6c697374);
    FUN_100b2e74();
    FUN_100f2a54();
    FUN_100c3c94();
    FUN_100b4c68();
    local_780 = 0;
    local_77c = 2;
    FUN_100018f0(0x70736e20, &local_780, 8, 0);
    FUN_100db2f4();
    FUN_10001908(local_48);
    FUN_10001920(local_48[0]);
    return;
}


/* =========================================================================
 *  FUN_100eef18 - Flush event queue (3 passes)
 *  Address: 0x100eef18, Size: 80 bytes
 * ========================================================================= */
void FUN_100eef18(void)
{
    short sVar1;
    char auStack_18[24];

    sVar1 = 1;
    do {
        FUN_100014d0(-1LL, auStack_18);
        sVar1 = sVar1 + 1;
    } while (sVar1 < 4);
    return;
}


/* =========================================================================
 *  FUN_100ef088 - Check if sound is active
 *  Address: 0x100ef088, Size: 60 bytes
 * ========================================================================= */
int FUN_100ef088(void)
{
    int uVar1;

    if (*(char *)(iRam1011788c + 0x20) == '\0') {
        uVar1 = 0;
    }
    else {
        uVar1 = FUN_10000300();
    }
    return uVar1;
}


/* =========================================================================
 *  FUN_100ef510 - Conditional call to FUN_10000960
 *  Address: 0x100ef510, Size: 56 bytes
 * ========================================================================= */
int FUN_100ef510(int param_1)
{
    if (param_1 != 0) {
        FUN_10000960();
    }
    return 0;
}


/* =========================================================================
 *  FUN_100ef5f0 - Conditional call to FUN_10000390
 *  Address: 0x100ef5f0, Size: 56 bytes
 * ========================================================================= */
int FUN_100ef5f0(int param_1)
{
    if (param_1 != 0) {
        FUN_10000390();
    }
    return 0;
}


/* =========================================================================
 *  FUN_100efa80 - Check PixMap flags for color depth
 *  Address: 0x100efa80, Size: 48 bytes
 * ========================================================================= */
char FUN_100efa80(int param_1)
{
    if (param_1 != 0) {
        int val = *(short *)(param_1 + 6) & (int)0xffffc000;
        /* Simplified comparison from decompiled bitwise logic */
        return (val != 0) ? 1 : 0;
    }
    return '\0';
}


/* =========================================================================
 *  FUN_100efc78 - Get/set resource reference number
 *  Address: 0x100efc78, Size: 72 bytes
 * ========================================================================= */
int FUN_100efc78(short param_1)
{
    int uVar1;

    uVar1 = FUN_100014b8();
    FUN_10000318(param_1);
    return uVar1;
}


/* =========================================================================
 *  FUN_100f12a8 - Check for open error, report if found
 *  Address: 0x100f12a8, Size: 60 bytes
 * ========================================================================= */
void FUN_100f12a8(void)
{
    int iVar1;

    iVar1 = FUN_100f1264();
    if (iVar1 != 0) {
        FUN_100db158(-0x6c, 0);
    }
    return;
}

/* FUN_100f1264 is declared via -Wno-implicit-function-declaration */


/* =========================================================================
 *  FUN_100f1430 - Resize window with animation steps
 *  Address: 0x100f1430, Size: 324 bytes
 * ========================================================================= */
void FUN_100f1430(short param_1)
{
    short sVar1;
    int iVar4;
    int local_38;
    int local_3c;
    int local_40;
    int local_34;
    int local_30;
    int local_2c[11];

    local_34 = 0;
    FUN_100f0f78(&local_38, &local_3c, &local_40, &local_34);
    FUN_100f138c();
    FUN_100f13e8(local_40, local_34);
    /* If error flag set, report */
    {
        /* Simplified: check a global flag */
        /* FUN_100db158(-0x6c, 0); */
    }
    iVar4 = FUN_10001590();
    sVar1 = *(short *)(iVar4 + 0x14);
    {
        long long lVar7 = (long long)(int)sVar1 * (long long)(int)param_1;
        do {
            local_2c[0] = (int)lVar7;
            local_30 = 0x7fff;
            int *piVar6 = &local_30;
            if (local_2c[0] < 0x7fff) {
                piVar6 = local_2c;
            }
            *(short *)(iVar4 + 0x14) = (short)*piVar6;
            FUN_100015a8();
            lVar7 = lVar7 - *(short *)(iVar4 + 0x14);
        } while (0 < lVar7);
    }
    *(short *)(iVar4 + 0x14) = sVar1;
    /* Mark update needed */
    if (*(int *)PEF_Debug_0x7_10117864.name == 0) {
        int uVar5 = FUN_100b1058(0, local_38, local_3c, 4);
        *(int *)PEF_Debug_0x7_10117864.name = uVar5;
        FUN_100b1210();
    }
    else {
        FUN_100afb5c(*(int *)PEF_Debug_0x7_10117864.name, local_38, local_3c);
    }
    return;
}


/* =========================================================================
 *  FUN_100f1574 - Set/get cursor wait state flag
 *  Address: 0x100f1574, Size: 108 bytes
 * ========================================================================= */
char FUN_100f1574(char param_1)
{
    char cVar1;

    cVar1 = *(char *)&PEF_Debug_0x7_10117864.unknown;
    if ((param_1 != cVar1) && (*(char *)&PEF_Debug_0x7_10117864.unknown = param_1, param_1 != '\0')) {
        FUN_100f0d3c(0x7fffffff, 0);
    }
    return cVar1;
}


/* =========================================================================
 *  FUN_100f262c - Find resource by type, store ID in param_2
 *  Address: 0x100f262c, Size: 84 bytes
 * ========================================================================= */
int FUN_100f262c(int param_1, short *param_2)
{
    int uVar1;

    FUN_100f25e0(param_1, param_2);
    if (*param_2 == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = FUN_100f2214(*param_2);
    }
    return uVar1;
}


/* =========================================================================
 *  FUN_100f4dc8 - Base object constructor (allocate 4 bytes)
 *  Address: 0x100f4dc8, Size: 104 bytes
 * ========================================================================= */
int *FUN_100f4dc8(int *param_1)
{
    if (param_1 == (int *)0x0) {
        param_1 = (int *)FUN_100f56e4(4);
        if (param_1 != (int *)0x0) {
            *param_1 = uRam10117160;
        }
    }
    else {
        *param_1 = uRam10117160;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100f5274 - No-op base destructor (4 bytes)
 *  Address: 0x100f5274, Size: 4 bytes
 * ========================================================================= */
void FUN_100f5274()
{
    return;
}


/* =========================================================================
 *  FUN_100f56e4 - Allocate memory (thin wrapper around FUN_100f5640)
 *  Address: 0x100f56e4, Size: 36 bytes
 * ========================================================================= */
int FUN_100f56e4(int param_1)
{
    return FUN_100f5640(param_1);
}


/* =========================================================================
 *  FUN_100f5640 - Heap allocator: get block from pool
 *  Address: 0x100f5640, Size: 128 bytes
 * ========================================================================= */
int FUN_100f5640(int param_1)
{
    int uVar2;

    if (*(int *)PEF_Debug_0x7_10117864.name == 0) {
        int uVar3 = FUN_100b1134(0, uRam1011687c, 0x2800, 0x1000, 4);
        *(int *)PEF_Debug_0x7_10117864.name = uVar3;
        FUN_100b1210();
    }
    uVar2 = FUN_100b0960(*(int *)PEF_Debug_0x7_10117864.name, param_1);
    FUN_100db26c();
    return uVar2;
}


/* =========================================================================
 *  FUN_100f5708 - Free memory block back to pool
 *  Address: 0x100f5708, Size: 64 bytes
 * ========================================================================= */
void FUN_100f5708(int param_1)
{
    if (*(int *)PEF_Debug_0x7_10117864.name != 0) {
        FUN_100b0a18(*(int *)PEF_Debug_0x7_10117864.name, param_1);
    }
    return;
}


/* =========================================================================
 *  FUN_100f5894 - Return class descriptor (uRam10117174)
 *  Address: 0x100f5894, Size: 8 bytes
 * ========================================================================= */
int FUN_100f5894(void)
{
    return uRam10117174;
}


/* =========================================================================
 *  FUN_100f58a4 - Constructor: allocate 0xd8 bytes (extends FUN_100c7d84)
 *  Address: 0x100f58a4, Size: 164 bytes
 * ========================================================================= */
int *FUN_100f58a4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xd8),
       param_1 != (int *)0x0)) {
        FUN_100c7d84(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 0xb;
        *(short *)((int)param_1 + 0xc2) = 0;
        *(char *)(param_1 + 0x31) = 0;
        *(short *)((int)param_1 + 0xc6) = 0;
        *(char *)(param_1 + 0x32) = 0;
        param_1[0x33] = 0x20202020;
        *(short *)(param_1 + 0x34) = 0;
        *(short *)((int)param_1 + 0xd2) = (short)0xffff;
        *(short *)(param_1 + 0x35) = (short)0xffff;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100f6b8c - Constructor: allocate 0xc0 bytes (scroller view)
 *  Address: 0x100f6b8c, Size: 232 bytes
 * ========================================================================= */
int *FUN_100f6b8c(int *param_1)
{
    int *puVar5 = puRam10116bc0;

    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xc0),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        *(char *)((int)param_1 + 0xa9) = 0;
        *(char *)(param_1 + 0x2a) = 0;
        {
            int uVar1 = puVar5[1];
            param_1[0x22] = *puVar5;
            param_1[0x23] = uVar1;
        }
        *(char *)(param_1 + 0x2f) = 1;
        /* Copy 16-byte default rect */
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        param_1[0x27] = 0x20202020;
        param_1[0x26] = 0x20202020;
        param_1[0x25] = 0;
        param_1[0x24] = 0;
        {
            int uVar1 = puVar5[1];
            param_1[0x20] = *puVar5;
            param_1[0x21] = uVar1;
        }
        param_1[0x28] = 0x10;
        param_1[0x29] = 0x10;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_100fff18 - Return class descriptor (uRam10116de0)
 *  Address: 0x100fff18, Size: 8 bytes
 * ========================================================================= */
int FUN_100fff18(void)
{
    return uRam10116de0;
}


/* =========================================================================
 *  FUN_100fff20 - Constructor: allocate 0xd8 bytes (large view object)
 *  Address: 0x100fff20, Size: 284 bytes
 * ========================================================================= */
int *FUN_100fff20(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0xd8),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        /* Copy 16-byte default rect */
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0x78;
        *(short *)(param_1 + 0x28) = 0x7fff;
        param_1[0x29] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        /* Copy 12-byte extent */
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        *(short *)(param_1 + 0x30) = 0;
        *(char *)((int)param_1 + 0xc2) = 1;
        param_1[0x33] = (int)0xf0002100;
        *(short *)(param_1 + 0x34) = 0x60;
        *(char *)((int)param_1 + 0xc3) = 1;
        *(char *)(param_1 + 0x31) = 1;
        *(char *)((int)param_1 + 0xc5) = 1;
        *(char *)((int)param_1 + 0xc6) = 0;
        *(short *)(param_1 + 0x32) = 0;
        *(short *)((int)param_1 + 0xca) = 0;
        *(short *)((int)param_1 + 0xd2) = 0;
        *(char *)(param_1 + 0x35) = 0;
        *(short *)(param_1 + 0x13) = 1;
        *(short *)(param_1 + 0x2f) = (short)0xffff;
        *(char *)((int)param_1 + 0xbe) = 0;
        *(char *)((int)param_1 + 0x53) = 1;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_1010598c - TView base constructor: allocate 0x80 bytes
 *  Address: 0x1010598c, Size: 340 bytes
 * ========================================================================= */
int *FUN_1010598c(int *param_1)
{
    int *puVar4 = puRam10116bc0;

    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)FUN_100f56e4(0x80),
       param_1 != (int *)0x0)) {
        FUN_100c604c(param_1);
        *param_1 = 0; /* vtable pointer placeholder */
        FUN_100b02d0(param_1 + 0x15);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        {
            int uVar1 = puVar4[1];
            param_1[0xb] = *puVar4;
            param_1[0xc] = uVar1;
        }
        {
            int uVar1 = puVar4[1];
            param_1[0xd] = *puVar4;
            param_1[0xe] = uVar1;
        }
        {
            int uVar1 = puVar4[1];
            param_1[0xf] = *puVar4;
            param_1[0x10] = uVar1;
        }
        *(char *)((int)param_1 + 0x45) = 4;
        *(char *)(param_1 + 0x11) = 4;
        *(char *)((int)param_1 + 0x46) = 4;
        *(char *)((int)param_1 + 0x47) = 2;
        *(char *)(param_1 + 0x12) = 1;
        *(char *)((int)param_1 + 0x49) = 1;
        *(char *)((int)param_1 + 0x4a) = 1;
        *(char *)((int)param_1 + 0x4b) = 1;
        *(short *)(param_1 + 0x13) = (short)0xffff;
        *(short *)((int)param_1 + 0x4e) = (short)0xffff;
        *(short *)(param_1 + 0x14) = 1;
        *(char *)((int)param_1 + 0x52) = 1;
        *(char *)((int)param_1 + 0x53) = 0;
        param_1[0x15] = 0; /* vtable pointer placeholder */
        {
            int uVar1 = puVar4[1];
            param_1[0x16] = *puVar4;
            param_1[0x17] = uVar1;
        }
        /* Copy 16-byte default rect */
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        *(short *)(param_1 + 0x1f) = 0x300;
    }
    return param_1;
}


/* =========================================================================
 *  FUN_10115ad0 - Destructor: clean up and optionally free
 *  Address: 0x10115ad0, Size: 144 bytes
 * ========================================================================= */
void FUN_10115ad0(int param_1, int param_2)
{
    int iVar1;

    if (param_1 != 0) {
        *(int *)(param_1 + 0x38) = uRam101173c8;
        if ((*(int *)(param_1 + 0x20) == 1) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
            FUN_10117884(*(short *)(*(int *)(iVar1 + 0x24) + 0x58) + iVar1, 3);
        }
        if ((param_1 != 0) && ((param_2 & 1) != 0)) {
            FUN_100f5708(param_1);
        }
    }
    return;
}


/* =========================================================================
 *  FUN_101165c4 - Window framework: tear down views/controls
 *  Address: 0x101165c4, Size: 104 bytes
 * ========================================================================= */
void FUN_101165c4(void)
{
    FUN_10116338(_DAT_10117898);
    FUN_10117024(0, 0);
    FUN_101171bc(0, 0);
    FUN_101171bc(0, 0);
    FUN_101171bc(0, 0);
    return;
}


/* =========================================================================
 *  FUN_10116698 - Allocate window controller object (0x48 bytes)
 *  Address: 0x10116698, Size: 132 bytes
 * ========================================================================= */
int FUN_10116698(int param_1, int param_2)
{
    if ((param_1 != 0) ||
       (param_1 = FUN_100f56c0(0x48), param_1 != 0)) {
        if (param_2 == 0) {
            param_2 = param_1 + 0xc;
            FUN_10115a00(param_2);
        }
        *(int *)(param_1 + 8) = param_2;
        *(int *)(param_1 + 4) = 0; /* vtable pointer placeholder */
        *(int *)(param_2 + 0x38) = 0; /* vtable pointer placeholder */
    }
    return param_1;
}


/* =========================================================================
 *  FUN_10117884 - Virtual method dispatch (indirect call via r12)
 *  Address: 0x10117884, Size: 20 bytes
 *
 *  This is a trampoline / thunk that performs an indirect function call
 *  through the register r12. In the reconstructed code, callers pass
 *  the vtable-offset-adjusted address, so this function is modeled as
 *  a varargs pass-through. In practice, the MacApp framework uses this
 *  for all virtual dispatch.
 * ========================================================================= */
int FUN_10117884()
{
    /* In the original PPC binary, this reads from r12 and jumps.
     * For modern builds, this is a no-op stub as all virtual dispatch
     * is handled directly by callers computing the offset. */
    return 0;
}
