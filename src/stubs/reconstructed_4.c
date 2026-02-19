/*
 * reconstructed_4.c - Reconstructed MacApp Framework Methods
 *
 * Address range: 0x100809B8 - 0x100AE86C
 * Contains 62 decompiled functions from the Ghidra output.
 *
 * Most functions in this range are MacApp C++ vtable accessor/constructor
 * methods: small (8 bytes) global accessors returning vtable class IDs,
 * and constructor functions that allocate objects and initialize fields.
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 */

#include "warlords2.h"

/* =========================================================================
 * External Globals
 * ========================================================================= */

/* uRam globals - MacApp class descriptor / vtable info pointers */
extern int uRam10116350;
extern int uRam10116384;
extern int uRam101163a8;
extern int uRam101163f4;
extern int uRam101163fc;
extern int uRam10116404;
extern int uRam10116424;
extern int uRam10116458;
extern int uRam1011647c;
extern int uRam10116494;
extern int uRam101164a0;
extern int uRam101164c0;
extern int uRam101164cc;
extern int uRam101164d4;
extern int uRam10116568;
extern int uRam1011657c;
extern int uRam10116580;
extern int uRam101165ac;
extern int uRam101165bc;
extern int gSoundActive;
extern int uRam1011660c;
extern int uRam10116638;
extern int uRam10116640;
extern int uRam10116658;
extern int uRam1011667c;
extern int uRam1011668c;
extern int uRam10116690;
extern int uRam10116694;
extern int uRam101166d4;
extern int uRam101166e4;
extern int uRam10116700;
extern int uRam1011674c;
extern int uRam10116758;
extern int uRam1011675c;
extern int uRam10116780;
extern int uRam10116800;

/* piRam globals - pointer-to-int globals */
extern int *gActiveView;
extern int *gScreenGWorld;
extern int *piRam1011684c;

/* These are already declared via wl2_globals.h macros */
/* piRam101176bc -> gWindowResource */
/* piRam1011734c -> gResourcePtr */

/* FUN_ that act as global data (stored at data section addresses) */
extern int FUN_101165c4;
extern int FUN_10116698;

/* =========================================================================
 * External Function Declarations
 * ========================================================================= */

/* MacApp framework constructors / helpers */
extern void  FUN_100d568c(void *obj);       /* TBehavior ctor */
extern void  FUN_100bf518(void *obj);       /* Simple object ctor (0x20B) */
extern void  FUN_100c6b2c(void *obj);       /* Extended object ctor (0xBCB) */
extern void  FUN_1010598c(void *obj);       /* View-based object ctor */
extern void  FUN_100e1f44(void *obj);       /* Another base ctor (0xB8B) */
extern void  FUN_100cda40(void *obj);       /* CDA object ctor */
extern void  FUN_100cdbe4(void *obj);       /* CDB object ctor */
extern void  FUN_100f6b8c(void *obj);       /* F6B object ctor */

extern void *NewPtr_Thunk(int size);        /* NewObject / malloc */
extern int   FUN_100b0368(void *dst, int src); /* Pascal string copy/init */

/* MacApp vtable dispatch */
extern int   ResourceRead_Dispatch(int method_ptr, ...);

/* MacApp handle/memory management */
extern void  FUN_100db158(int hi, int lo);  /* Lock handle */
extern void  FocusObject(int param);       /* Unlock handle */
extern int   AllocateBlock(int size);        /* Allocate heap block */

/* Game functions called by FUN_10095330 */
extern void  FUN_1002bcd8(void);
extern int   ProcessQuestEvent(int a, int b, int c, int d);

/* Game functions called by FUN_100ae86c */
extern int   TrySetjmp(void);
extern void  FUN_100ae1a8(int param);
extern void  FUN_100ae550(void);
extern void  FUN_100ae77c(void);
extern void  FUN_100ae7c4(void);

/* TVect pointer used as base for global offset calculations */
/* In the original binary, &.TVect::OCECToRString is a linker-generated
 * transition vector used as a base address for accessing globals via
 * negative offsets. On modern builds, we define it as a dummy. */
#ifdef MODERN_BUILD
static char _tvect_dummy[1] = {0};
#define TVECT_BASE ((int *)_tvect_dummy)
#else
extern char *TVect_OCECToRString;
#define TVECT_BASE ((int *)&TVect_OCECToRString)
#endif


/* =========================================================================
 * 8-byte accessor functions - MacApp class descriptor getters
 * These return a global variable (typically a vtable/class info pointer)
 * ========================================================================= */

// Function: FUN_100809b8 at 100809b8
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100809b8(void)
{
    return uRam10116350;
}

// Function: FUN_10081e38 at 10081e38
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10081e38(void)
{
    return uRam10116384;
}

// Function: FUN_10083d40 at 10083d40
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10083d40(void)
{
    return uRam101163a8;
}

// Function: FUN_10086314 at 10086314
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10086314(void)
{
    return uRam101163f4;
}

// Function: FUN_100863d8 at 100863d8
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100863d8(void)
{
    return uRam101163fc;
}

// Function: FUN_100866f8 at 100866f8
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100866f8(void)
{
    return uRam10116404;
}

// Function: FUN_100869e0 at 100869e0
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100869e0(void)
{
    return uRam10116424;
}

// Function: FUN_10088560 at 10088560
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10088560(void)
{
    return uRam10116458;
}

// Function: FUN_1008a048 at 1008a048
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1008a048(void)
{
    return uRam1011647c;
}

// Function: FUN_1008ad64 at 1008ad64
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1008ad64(void)
{
    return uRam10116494;
}

// Function: FUN_1008bec8 at 1008bec8
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1008bec8(void)
{
    return uRam101164a0;
}

// Function: FUN_1008d9cc at 1008d9cc
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1008d9cc(void)
{
    return uRam101164c0;
}

// Function: FUN_1008dbac at 1008dbac
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1008dbac(void)
{
    return uRam101164cc;
}

// Function: FUN_1008dd68 at 1008dd68
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1008dd68(void)
{
    return uRam101164d4;
}

// Function: FUN_10090144 at 10090144
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10090144(void)
{
    return uRam10116568;
}

// Function: FUN_1009049c at 1009049c
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1009049c(void)
{
    return uRam1011657c;
}

// Function: FUN_100908c0 at 100908c0
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100908c0(void)
{
    return uRam10116580;
}

// Function: FUN_10090b18 at 10090b18
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10090b18(void)
{
    return uRam101165ac;
}

// Function: FUN_10090ec8 at 10090ec8
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10090ec8(void)
{
    return uRam101165bc;
}

// Function: FUN_10091090 at 10091090
// Size: 8 bytes
// Returns a function pointer stored at data address 0x101165c4
int FUN_10091090(void)
{
    return FUN_101165c4;
}

// Function: GetSoundActiveFlag at 10093b00
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10093b00(void)
{
    return gSoundActive;
}

// Function: FUN_10093f1c at 10093f1c
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10093f1c(void)
{
    return uRam1011660c;
}

// Function: FUN_10095c34 at 10095c34
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10095c34(void)
{
    return uRam10116638;
}

// Function: FUN_10096188 at 10096188
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10096188(void)
{
    return uRam10116640;
}

// Function: FUN_100965d4 at 100965d4
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100965d4(void)
{
    return uRam10116658;
}

// Function: FUN_10096bbc at 10096bbc
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10096bbc(void)
{
    return uRam1011667c;
}

// Function: FUN_10096ce0 at 10096ce0
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10096ce0(void)
{
    return uRam1011668c;
}

// Function: FUN_10096fec at 10096fec
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10096fec(void)
{
    return uRam10116690;
}

// Function: FUN_10097108 at 10097108
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10097108(void)
{
    return uRam10116694;
}

// Function: FUN_1009768c at 1009768c
// Size: 8 bytes
// Returns a function pointer / data value stored at 0x10116698
int FUN_1009768c(void)
{
    return FUN_10116698;
}

// Function: FUN_10097964 at 10097964
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10097964(void)
{
    return uRam101166d4;
}

// Function: FUN_10097a74 at 10097a74
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10097a74(void)
{
    return uRam101166e4;
}

// Function: FUN_10097db0 at 10097db0
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_10097db0(void)
{
    return uRam10116700;
}

// Function: FUN_1009d3fc at 1009d3fc
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1009d3fc(void)
{
    return uRam1011674c;
}

// Function: FUN_1009db24 at 1009db24
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1009db24(void)
{
    return uRam10116758;
}

// Function: FUN_1009ddb0 at 1009ddb0
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1009ddb0(void)
{
    return uRam1011675c;
}

// Function: FUN_1009e680 at 1009e680
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_1009e680(void)
{
    return uRam10116780;
}

// Function: FUN_100a18e8 at 100a18e8
// Size: 8 bytes
// MacApp class descriptor accessor
int FUN_100a18e8(void)
{
    return uRam10116800;
}


/* =========================================================================
 * MacApp object constructor functions
 * These allocate a MacApp-derived object, call a base constructor,
 * then set the vtable pointer and initialize fields.
 * ========================================================================= */

// Function: FUN_10081e48 at 10081e48
// Size: 192 bytes
// MacApp view object constructor (0xC4 bytes, TView-based)
int *FUN_10081e48(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xc4),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = (int)TVECT_BASE[-0x546];
        param_1[0x20] = 0;
        *(char *)(param_1 + 0x21) = 0;
        *(short *)((int)param_1 + 0x86) = 0;
        FUN_100b0368(param_1 + 0x22, (int)TVECT_BASE[-0x398]);
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        *(short *)(param_1 + 0x2f) = (short)0xffff;
        *(char *)((int)param_1 + 0xbe) = 0;
        *(short *)(param_1 + 0x23) = 0;
        param_1[0x27] = 0;
        *(short *)(param_1 + 0x28) = 0;
        param_1[0x2c] = 0;
    }
    return param_1;
}

// Function: FUN_10086324 at 10086324
// Size: 104 bytes
// MacApp extended object constructor (0xA8 bytes, extended base)
int *FUN_10086324(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xa8),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *param_1 = (int)TVECT_BASE[-0x52a];
    }
    return param_1;
}

// Function: FUN_100863e8 at 100863e8
// Size: 104 bytes
// MacApp object constructor (0xB8 bytes, base ctor FUN_100e1f44)
int *FUN_100863e8(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb8),
       param_1 != (int *)0x0)) {
        FUN_100e1f44(param_1);
        *param_1 = (int)TVECT_BASE[-0x528];
    }
    return param_1;
}

// Function: FUN_10086708 at 10086708
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *FUN_10086708(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x526];
    }
    return param_1;
}

// Function: FUN_1008a058 at 1008a058
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *FUN_1008a058(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x508];
    }
    return param_1;
}

// Function: FUN_1008ad74 at 1008ad74
// Size: 128 bytes
// MacApp behavior object constructor (0x44 bytes, TBehavior-based)
int *FUN_1008ad74(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x44),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x502];
    }
    return param_1;
}

// Function: FUN_1008bed8 at 1008bed8
// Size: 132 bytes
// MacApp behavior object constructor (0x5C bytes, TBehavior-based)
int *FUN_1008bed8(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x5c),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x4ff];
        param_1[0x16] = 0;
    }
    return param_1;
}

// Function: FUN_1008d9dc at 1008d9dc
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *FUN_1008d9dc(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x4f7];
    }
    return param_1;
}

// Function: FUN_1008dbbc at 1008dbbc
// Size: 104 bytes
// MacApp object constructor (0xB8 bytes, base ctor FUN_100e1f44)
int *FUN_1008dbbc(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb8),
       param_1 != (int *)0x0)) {
        FUN_100e1f44(param_1);
        *param_1 = (int)TVECT_BASE[-0x4f4];
    }
    return param_1;
}

// Function: FUN_10090b28 at 10090b28
// Size: 104 bytes
// MacApp object constructor (0xB4 bytes, base ctor FUN_100cdbe4)
int *FUN_10090b28(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb4),
       param_1 != (int *)0x0)) {
        FUN_100cdbe4(param_1);
        *param_1 = (int)TVECT_BASE[-0x4bc];
    }
    return param_1;
}

// Function: FUN_100910a0 at 100910a0
// Size: 104 bytes
// MacApp object constructor (0xC0 bytes, base ctor FUN_100f6b8c)
int *FUN_100910a0(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xc0),
       param_1 != (int *)0x0)) {
        FUN_100f6b8c(param_1);
        *param_1 = (int)TVECT_BASE[-0x4b5];
    }
    return param_1;
}

// Function: FUN_10093b10 at 10093b10
// Size: 132 bytes
// MacApp simple object constructor (0x28 bytes)
int *FUN_10093b10(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x28),
       param_1 != (int *)0x0)) {
        FUN_100bf518(param_1);
        *param_1 = (int)TVECT_BASE[-0x4a6];
        *(char *)(param_1 + 8) = 0;
        *(char *)((int)param_1 + 0x21) = 0;
        *(char *)((int)param_1 + 0x22) = 0;
        param_1[9] = 0;
    }
    return param_1;
}

// Function: FUN_100965e4 at 100965e4
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *FUN_100965e4(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x491];
    }
    return param_1;
}

// Function: FUN_10096bcc at 10096bcc
// Size: 104 bytes
// MacApp object constructor (0xB8 bytes, base ctor FUN_100e1f44)
int *FUN_10096bcc(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb8),
       param_1 != (int *)0x0)) {
        FUN_100e1f44(param_1);
        *param_1 = (int)TVECT_BASE[-0x488];
    }
    return param_1;
}

// Function: FUN_1009769c at 1009769c
// Size: 176 bytes
// MacApp CDA-based object constructor (0xBC bytes)
int *FUN_1009769c(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xbc),
       param_1 != (int *)0x0)) {
        FUN_100cda40(param_1);
        *(short *)(param_1 + 0x2c) = 0;
        *(short *)((int)param_1 + 0xb2) = 0;
        *param_1 = (int)TVECT_BASE[-0x480];
        param_1[0x2d] = 0;
        *(short *)(param_1 + 0x2e) = 1;
        *(char *)((int)param_1 + 0xba) = 0;
        param_1[0x2c] = 0x40004;
        *param_1 = (int)TVECT_BASE[-0x47f];
    }
    return param_1;
}

// Function: FUN_10097974 at 10097974
// Size: 104 bytes
// MacApp view object constructor (0xA0 bytes, TView-based)
int *FUN_10097974(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xa0),
       param_1 != (int *)0x0)) {
        FUN_1010598c(param_1);
        *param_1 = (int)TVECT_BASE[-0x472];
    }
    return param_1;
}

// Function: FUN_10097a84 at 10097a84
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *FUN_10097a84(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x46e];
    }
    return param_1;
}

// Function: FUN_1009ddc0 at 1009ddc0
// Size: 148 bytes
// MacApp extended object constructor (0xBC bytes)
int *FUN_1009ddc0(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xbc),
       param_1 != (int *)0x0)) {
        FUN_100c6b2c(param_1);
        *(short *)(param_1 + 0x2a) = 0;
        *(short *)((int)param_1 + 0xaa) = 0;
        *(short *)(param_1 + 0x2b) = 0;
        *(short *)((int)param_1 + 0xae) = 0;
        *(short *)(param_1 + 0x2c) = 0;
        *(short *)((int)param_1 + 0xb2) = 0;
        *(short *)(param_1 + 0x2d) = 1;
        *(short *)((int)param_1 + 0xb6) = 0;
        *(short *)(param_1 + 0x2e) = 0;
        *param_1 = (int)TVECT_BASE[-0x450];
    }
    return param_1;
}

// Function: FUN_1009e690 at 1009e690
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *FUN_1009e690(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x447];
    }
    return param_1;
}

// Function: FUN_100a18f8 at 100a18f8
// Size: 128 bytes
// MacApp behavior object constructor (0x48 bytes, TBehavior-based)
int *FUN_100a18f8(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x48),
       param_1 != (int *)0x0)) {
        FUN_100d568c(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x427];
    }
    return param_1;
}


/* =========================================================================
 * Larger functions with real logic
 * ========================================================================= */

// Function: FUN_1008455c at 1008455c
// Size: 68 bytes
// Walk linked list of views to find the last one, set screen GWorld pointer
void FUN_1008455c(void)
{
    int iVar1;
    int iVar2;

    iVar1 = *gActiveView;
    if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0xa4);
        while (iVar2 != 0) {
            iVar1 = *(int *)(iVar1 + 0xa4);
            iVar2 = *(int *)(iVar1 + 0xa4);
        }
        if (iVar1 != 0) {
            *gScreenGWorld = iVar1 + 0x80;
        }
    }
    return;
}

// Function: FUN_10095330 at 10095330
// Size: 112 bytes
// Check if current player has score > 0, if so invoke ProcessQuestEvent
long long FUN_10095330(void)
{
    long long uVar2;

    FUN_1002bcd8();
    if (*(short *)(*(int *)piRam1011735c + *(short *)(*(int *)piRam1011735c + 0x110) * 0xc +
                  0x1142) == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = ProcessQuestEvent(3, 0, 0, 0);
    }
    return uVar2;
}

// Function: FUN_100950a4 at 100950a4
// FAILED to decompile - keeping as stub
int FUN_100950a4(void)
{
    /* Ghidra failed to decompile this function */
    return 0;
}

// Function: FUN_100ae86c at 100ae86c
// Size: 656 bytes
// Terrain movement cost editor dialog - opens dialog, saves/restores costs
void FUN_100ae86c(void)
{
    int iVar5;
    int uVar4;
    int *puVar2;
    short local_130;
    char auStack_12c[256];
    short uStack_2c;
    int uStack_28;
    int local_24;
    int uStack_20;
    int uStack_1c;
    char *local_14;
    char *local_10;
    int local_c;
    char *local_4;

    if (*piRam1011684c == 0) {
        uVar4 = ResourceRead_Dispatch(*((int *)gWindowResource) +
                    (int)*(short *)(*(int *)*((int *)gWindowResource) + 200),
                    0x11f8,
                    *(int *)(*(int *)((pint *)gResourcePtr) + 0x88));
        puVar2 = (int *)piRam1011684c;  /* approximate - uses tvect offset */
        *puVar2 = uVar4;
        FocusObject(*puVar2);
    }
    /* Initialize unit type selection to -1 (0xFFFF) */
    *(short *)((char *)piRam1011684c + 4) = (short)0xffff;
    /* Allocate terrain cost buffers (0x1D = 29 unit classes) */
    uVar4 = AllocateBlock(0x1d);
    *(int *)((char *)piRam1011684c + 8) = uVar4;
    uVar4 = AllocateBlock(0x1d);
    *(int *)((char *)piRam1011684c + 12) = uVar4;
    /* Copy current terrain movement costs for the current player */
    local_130 = 0;
    while (local_130 < 0x1d) {
        *(char *)(*(int *)((char *)piRam1011684c + 8) + (int)local_130) =
             *(char *)(*(int *)piRam1011735c + 0x60c +
                      *(short *)(*(int *)piRam1011735c + 0x110) * 0x1d +
                      (int)local_130);
        local_130 = local_130 + 1;
    }
    FUN_100ae1a8(0);
    FUN_100ae550();
    /* Save and replace a global data pointer (resource context) */
    local_14 = auStack_12c;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_24 = *(int *)((pint *)gResourcePtr);
    *(int *)((pint *)gResourcePtr) = (int)auStack_12c;
    local_10 = local_14;
    iVar5 = TrySetjmp();
    if (iVar5 == 0) {
        if (*piRam1011684c != 0) {
            local_c = ResourceRead_Dispatch(*piRam1011684c +
                         (int)*(short *)(*(int *)*piRam1011684c + 0x810));
            if (local_c == 0x646f6e65) {  /* 'done' */
                FUN_100ae77c();
            }
            else {
                FUN_100ae7c4();
            }
            ResourceRead_Dispatch(*piRam1011684c +
                         (int)*(short *)(*(int *)*piRam1011684c + 0x738));
        }
        *piRam1011684c = 0;
        *(int *)((pint *)gResourcePtr) = local_24;
    }
    else {
        if (*piRam1011684c != 0) {
            ResourceRead_Dispatch(*piRam1011684c +
                         (int)*(short *)(*(int *)*piRam1011684c + 0x738));
        }
        *piRam1011684c = 0;
        local_4 = auStack_12c;
        FUN_100db158(uStack_2c, uStack_28);
    }
    return;
}
