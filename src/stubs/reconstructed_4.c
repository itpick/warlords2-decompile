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
extern void  ConstructBehavior(void *obj);       /* TBehavior ctor */
extern void  ConstructSimpleObject(void *obj);       /* Simple object ctor (0x20B) */
extern void  ConstructExtendedObject(void *obj);       /* Extended object ctor (0xBCB) */
extern void  ConstructViewObject(void *obj);       /* View-based object ctor */
extern void  ConstructBaseObject(void *obj);       /* Another base ctor (0xB8B) */
extern void  FUN_100cda40(void *obj);       /* CDA object ctor */
extern void  FUN_100cdbe4(void *obj);       /* CDB object ctor */
extern void  FUN_100f6b8c(void *obj);       /* F6B object ctor */

extern void *NewPtr_Thunk(int size);        /* NewObject / malloc */
extern int   FUN_100b0368(void *dst, int src); /* Pascal string copy/init */

/* MacApp vtable dispatch */
extern int   ResourceRead_Dispatch(int method_ptr, ...);

/* MacApp handle/memory management */
extern void  LockHandleRange(int hi, int lo);  /* Lock handle */
extern void  FocusObject(int param);       /* Unlock handle */
extern int   AllocateBlock(int size);        /* Allocate heap block */

/* Game functions called by SearchRuinsTemples */
extern void  FUN_1002bcd8(void);
extern int   ProcessQuestEvent(int a, int b, int c, int d);

/* Game functions called by HandleAIStrategy */
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

// Function: InitCityPictureBehavior at 100809b8
// Size: 8 bytes
// MacApp class descriptor accessor
int InitCityPictureBehavior(void)
{
    return uRam10116350;
}

// Function: InitBetterDialogBehavior at 10081e38
// Size: 8 bytes
// MacApp class descriptor accessor
int InitBetterDialogBehavior(void)
{
    return uRam10116384;
}

// Function: InitHeroInspectBehavior at 10083d40
// Size: 8 bytes
// MacApp class descriptor accessor
int InitHeroInspectBehavior(void)
{
    return uRam101163a8;
}

// Function: InitFightResultBehavior2 at 10086314
// Size: 8 bytes
// MacApp class descriptor accessor
int InitFightResultBehavior2(void)
{
    return uRam101163f4;
}

// Function: InitSageDialogBehavior at 100863d8
// Size: 8 bytes
// MacApp class descriptor accessor
int InitSageDialogBehavior(void)
{
    return uRam101163fc;
}

// Function: InitFightResultBehavior1 at 100866f8
// Size: 8 bytes
// MacApp class descriptor accessor
int InitFightResultBehavior1(void)
{
    return uRam10116404;
}

// Function: InitArmyDraggerBehavior at 100869e0
// Size: 8 bytes
// MacApp class descriptor accessor
int InitArmyDraggerBehavior(void)
{
    return uRam10116424;
}

// Function: InitAboutBoxBehavior at 10088560
// Size: 8 bytes
// MacApp class descriptor accessor
int InitAboutBoxBehavior(void)
{
    return uRam10116458;
}

// Function: InitProductionBehavior at 1008a048
// Size: 8 bytes
// MacApp class descriptor accessor
int InitProductionBehavior(void)
{
    return uRam1011647c;
}

// Function: InitDismissBehavior at 1008ad64
// Size: 8 bytes
// MacApp class descriptor accessor
int InitDismissBehavior(void)
{
    return uRam10116494;
}

// Function: InitBuildProdBehavior at 1008bec8
// Size: 8 bytes
// MacApp class descriptor accessor
int InitBuildProdBehavior(void)
{
    return uRam101164a0;
}

// Function: InitStartOfTurnBehavior at 1008d9cc
// Size: 8 bytes
// MacApp class descriptor accessor
int InitStartOfTurnBehavior(void)
{
    return uRam101164c0;
}

// Function: InitHeroHireBehavior at 1008dbac
// Size: 8 bytes
// MacApp class descriptor accessor
int InitHeroHireBehavior(void)
{
    return uRam101164cc;
}

// Function: InitCompressedStreamBehavior at 1008dd68
// Size: 8 bytes
// MacApp class descriptor accessor
int InitCompressedStreamBehavior(void)
{
    return uRam101164d4;
}

// Function: InitReportDisplayBehavior at 10090144
// Size: 8 bytes
// MacApp class descriptor accessor
int InitReportDisplayBehavior(void)
{
    return uRam10116568;
}

// Function: InitScenarioProcessBehavior at 1009049c
// Size: 8 bytes
// MacApp class descriptor accessor
int InitScenarioProcessBehavior(void)
{
    return uRam1011657c;
}

// Function: InitOptionsListBehavior at 100908c0
// Size: 8 bytes
// MacApp class descriptor accessor
int InitOptionsListBehavior(void)
{
    return uRam10116580;
}

// Function: InitCharacterListBehavior at 10090b18
// Size: 8 bytes
// MacApp class descriptor accessor
int InitCharacterListBehavior(void)
{
    return uRam101165ac;
}

// Function: InitExtendedObjectBehavior at 10090ec8
// Size: 8 bytes
// MacApp class descriptor accessor
int InitExtendedObjectBehavior(void)
{
    return uRam101165bc;
}

// Function: InitFinalBehavior at 10091090
// Size: 8 bytes
// Returns a function pointer stored at data address 0x101165c4
int InitFinalBehavior(void)
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

// Function: InitSoundObjectBehavior at 10093f1c
// Size: 8 bytes
// MacApp class descriptor accessor
int InitSoundObjectBehavior(void)
{
    return uRam1011660c;
}

// Function: InitItemsDialogBehavior at 10095c34
// Size: 8 bytes
// MacApp class descriptor accessor
int InitItemsDialogBehavior(void)
{
    return uRam10116638;
}

// Function: InitReportGridBehavior at 10096188
// Size: 8 bytes
// MacApp class descriptor accessor
int InitReportGridBehavior(void)
{
    return uRam10116640;
}

// Function: InitMenuShortcutsBehavior at 100965d4
// Size: 8 bytes
// MacApp class descriptor accessor
int InitMenuShortcutsBehavior(void)
{
    return uRam10116658;
}

// Function: InitGameOptionsBehavior at 10096bbc
// Size: 8 bytes
// MacApp class descriptor accessor
int InitGameOptionsBehavior(void)
{
    return uRam1011667c;
}

// Function: InitScenarioListBehavior at 10096ce0
// Size: 8 bytes
// MacApp class descriptor accessor
int InitScenarioListBehavior(void)
{
    return uRam1011668c;
}

// Function: InitCityDialogBehavior at 10096fec
// Size: 8 bytes
// MacApp class descriptor accessor
int InitCityDialogBehavior(void)
{
    return uRam10116690;
}

// Function: InitStackDialogBehavior at 10097108
// Size: 8 bytes
// MacApp class descriptor accessor
int InitStackDialogBehavior(void)
{
    return uRam10116694;
}

// Function: InitGameSetupBehavior at 1009768c
// Size: 8 bytes
// Returns a function pointer / data value stored at 0x10116698
int InitGameSetupBehavior(void)
{
    return FUN_10116698;
}

// Function: InitSearchDialogBehavior at 10097964
// Size: 8 bytes
// MacApp class descriptor accessor
int InitSearchDialogBehavior(void)
{
    return uRam101166d4;
}

// Function: InitRandomMapBehavior at 10097a74
// Size: 8 bytes
// MacApp class descriptor accessor
int InitRandomMapBehavior(void)
{
    return uRam101166e4;
}

// Function: InitSideSetupBehavior at 10097db0
// Size: 8 bytes
// MacApp class descriptor accessor
int InitSideSetupBehavior(void)
{
    return uRam10116700;
}

// Function: InitScenarioSelectBehavior at 1009d3fc
// Size: 8 bytes
// MacApp class descriptor accessor
int InitScenarioSelectBehavior(void)
{
    return uRam1011674c;
}

// Function: InitDiplomacyBehavior at 1009db24
// Size: 8 bytes
// MacApp class descriptor accessor
int InitDiplomacyBehavior(void)
{
    return uRam10116758;
}

// Function: InitPeaceDialogBehavior at 1009ddb0
// Size: 8 bytes
// MacApp class descriptor accessor
int InitPeaceDialogBehavior(void)
{
    return uRam1011675c;
}

// Function: InitHistoryDialogBehavior at 1009e680
// Size: 8 bytes
// MacApp class descriptor accessor
int InitHistoryDialogBehavior(void)
{
    return uRam10116780;
}

// Function: InitAIStrategyBehavior at 100a18e8
// Size: 8 bytes
// MacApp class descriptor accessor
int InitAIStrategyBehavior(void)
{
    return uRam10116800;
}


/* =========================================================================
 * MacApp object constructor functions
 * These allocate a MacApp-derived object, call a base constructor,
 * then set the vtable pointer and initialize fields.
 * ========================================================================= */

// Function: SetBetterDialogParam at 10081e48
// Size: 192 bytes
// MacApp view object constructor (0xC4 bytes, TView-based)
int *SetBetterDialogParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xc4),
       param_1 != (int *)0x0)) {
        ConstructViewObject(param_1);
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

// Function: SetFightResult2Param at 10086324
// Size: 104 bytes
// MacApp extended object constructor (0xA8 bytes, extended base)
int *SetFightResult2Param(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xa8),
       param_1 != (int *)0x0)) {
        ConstructExtendedObject(param_1);
        *param_1 = (int)TVECT_BASE[-0x52a];
    }
    return param_1;
}

// Function: SetSageDialogParam at 100863e8
// Size: 104 bytes
// MacApp object constructor (0xB8 bytes, base ctor ConstructBaseObject)
int *SetSageDialogParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb8),
       param_1 != (int *)0x0)) {
        ConstructBaseObject(param_1);
        *param_1 = (int)TVECT_BASE[-0x528];
    }
    return param_1;
}

// Function: SetFightResult1Param at 10086708
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *SetFightResult1Param(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x526];
    }
    return param_1;
}

// Function: SetProductionParam at 1008a058
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *SetProductionParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x508];
    }
    return param_1;
}

// Function: SetDismissParam at 1008ad74
// Size: 128 bytes
// MacApp behavior object constructor (0x44 bytes, TBehavior-based)
int *SetDismissParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x44),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x502];
    }
    return param_1;
}

// Function: SetBuildProdParam at 1008bed8
// Size: 132 bytes
// MacApp behavior object constructor (0x5C bytes, TBehavior-based)
int *SetBuildProdParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x5c),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x4ff];
        param_1[0x16] = 0;
    }
    return param_1;
}

// Function: SetStartOfTurnParam at 1008d9dc
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *SetStartOfTurnParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x4f7];
    }
    return param_1;
}

// Function: SetHeroHireParam at 1008dbbc
// Size: 104 bytes
// MacApp object constructor (0xB8 bytes, base ctor ConstructBaseObject)
int *SetHeroHireParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb8),
       param_1 != (int *)0x0)) {
        ConstructBaseObject(param_1);
        *param_1 = (int)TVECT_BASE[-0x4f4];
    }
    return param_1;
}

// Function: SetCharacterListParam at 10090b28
// Size: 104 bytes
// MacApp object constructor (0xB4 bytes, base ctor FUN_100cdbe4)
int *SetCharacterListParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb4),
       param_1 != (int *)0x0)) {
        FUN_100cdbe4(param_1);
        *param_1 = (int)TVECT_BASE[-0x4bc];
    }
    return param_1;
}

// Function: SetFinalBehaviorParam at 100910a0
// Size: 104 bytes
// MacApp object constructor (0xC0 bytes, base ctor FUN_100f6b8c)
int *SetFinalBehaviorParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xc0),
       param_1 != (int *)0x0)) {
        FUN_100f6b8c(param_1);
        *param_1 = (int)TVECT_BASE[-0x4b5];
    }
    return param_1;
}

// Function: SetSoundHandlerParam at 10093b10
// Size: 132 bytes
// MacApp simple object constructor (0x28 bytes)
int *SetSoundHandlerParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x28),
       param_1 != (int *)0x0)) {
        ConstructSimpleObject(param_1);
        *param_1 = (int)TVECT_BASE[-0x4a6];
        *(char *)(param_1 + 8) = 0;
        *(char *)((int)param_1 + 0x21) = 0;
        *(char *)((int)param_1 + 0x22) = 0;
        param_1[9] = 0;
    }
    return param_1;
}

// Function: SetMenuShortcutsParam at 100965e4
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *SetMenuShortcutsParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x491];
    }
    return param_1;
}

// Function: SetGameOptionsParam at 10096bcc
// Size: 104 bytes
// MacApp object constructor (0xB8 bytes, base ctor ConstructBaseObject)
int *SetGameOptionsParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xb8),
       param_1 != (int *)0x0)) {
        ConstructBaseObject(param_1);
        *param_1 = (int)TVECT_BASE[-0x488];
    }
    return param_1;
}

// Function: SetGameSetupParam at 1009769c
// Size: 176 bytes
// MacApp CDA-based object constructor (0xBC bytes)
int *SetGameSetupParam(int *param_1)
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

// Function: SetSearchDialogParam at 10097974
// Size: 104 bytes
// MacApp view object constructor (0xA0 bytes, TView-based)
int *SetSearchDialogParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xa0),
       param_1 != (int *)0x0)) {
        ConstructViewObject(param_1);
        *param_1 = (int)TVECT_BASE[-0x472];
    }
    return param_1;
}

// Function: SetRandomMapParam at 10097a84
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *SetRandomMapParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x46e];
    }
    return param_1;
}

// Function: SetPeaceDialogParam at 1009ddc0
// Size: 148 bytes
// MacApp extended object constructor (0xBC bytes)
int *SetPeaceDialogParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0xbc),
       param_1 != (int *)0x0)) {
        ConstructExtendedObject(param_1);
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

// Function: SetHistoryDialogParam at 1009e690
// Size: 128 bytes
// MacApp behavior object constructor (0x40 bytes, TBehavior-based)
int *SetHistoryDialogParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x40),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
        param_1[0xd] = 0x20202020;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = (int)TVECT_BASE[-0x447];
    }
    return param_1;
}

// Function: SetAIStrategyParam at 100a18f8
// Size: 128 bytes
// MacApp behavior object constructor (0x48 bytes, TBehavior-based)
int *SetAIStrategyParam(int *param_1)
{
    if ((param_1 != (int *)0x0) ||
       (param_1 = (int *)NewPtr_Thunk(0x48),
       param_1 != (int *)0x0)) {
        ConstructBehavior(param_1);
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

// Function: Render_GetMinimapView at 1008455c
// Size: 68 bytes
// Walk linked list of views to find the last one, set screen GWorld pointer
void Render_GetMinimapView(void)
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

// Function: SearchRuinsTemples at 10095330
// Size: 112 bytes
// Check if current player has score > 0, if so invoke ProcessQuestEvent
long long SearchRuinsTemples(void)
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

// Function: ShowScenarioSelect at 100950a4
// FAILED to decompile - keeping as stub
int ShowScenarioSelect(void)
{
    /* Ghidra failed to decompile this function */
    return 0;
}

// Function: HandleAIStrategy at 100ae86c
// Size: 656 bytes
// Terrain movement cost editor dialog - opens dialog, saves/restores costs
void HandleAIStrategy(void)
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
        LockHandleRange(uStack_2c, uStack_28);
    }
    return;
}
