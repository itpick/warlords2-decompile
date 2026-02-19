/*
 * framework.c - Warlords II MacApp Application Framework
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 *
 * This file contains the MacApp 3.x application framework integration:
 *   1. TDocumentWarlords::DoMenuCommand - central command dispatch (45+ command IDs)
 *   2. TDocumentWarlords::DoPostCreate  - application initialization & behavior setup
 *   3. TDocumentWarlords::DoMakeWindows - main game window creation
 *   4. TDocumentWarlords::DoRead        - document loading from file
 *   5. TDocumentWarlords::DoWrite       - document saving to file
 *   6. TDocumentWarlords::DoSetupMenus  - menu enable/disable management
 *   7. Window toggle/panel management   - side/info/main panel visibility
 *   8. Resource stream helpers for W2SC/W2TE/W2AR file types
 *
 * All virtual method calls route through ResourceRead_Dispatch (vtable dispatch).
 * The game document (TDocumentWarlords) is the central hub for all game
 * state and UI management.
 *
 * Key MacApp vtable offsets used:
 *   +0x110 = DoMenuCommand    +0x200 = PerformCommand
 *   +0x228 = DoSetupMenus     +0x288 = DoMakeViews
 *   +0x298 = HasChanged       +0x2B8 = CalcMinSize
 *   +0x308 = FindSubView      +0x328 = Close
 *   +0x338 = SetTarget        +0x4C8 = ForceRedraw
 *   +0x4D0 = Show             +0x668 = IsActive
 *   +0x780 = UpdateMapDisplay +0x800 = Open (800 decimal = 0x320)
 */

#include "warlords2.h"
#include "wl2_functions.h"

/* =========================================================================
 * MacApp Framework Forward Declarations
 * ========================================================================= */

/* MacApp virtual dispatch trampoline (20 bytes at 0x10117884) */
extern int  ResourceRead_Dispatch(int method_ptr, ...);

/* MacApp object constructors */
extern void FUN_100c3d2c(void *cmd);                     /* TCommand base ctor (48B) */
extern void FUN_100c3df8(void *cmd, int cmdID,           /* TCommand::ICommand */
                          void *target, int a, int b, void *doc);
extern void *NewPtr_Thunk(int size);                      /* NewObject / malloc */
extern void  FUN_100f57c8(void *ptr);                     /* DisposeObject / free */
extern void  FUN_100d568c(void *obj);                     /* TBehavior ctor */
extern void  FUN_100bf518(void *obj);                     /* Simple object ctor (0x20B) */
extern void  FUN_100c6b2c(void *obj);                     /* Extended object ctor (0xBCB) */
extern void  FUN_1010598c(void *obj);                     /* View-based object ctor */
extern void  FUN_100e1f44(void *obj);                     /* Another base ctor (0xB8B) */
extern void  FUN_10084ef0(void *obj);                     /* Dialog behavior ctor (0x90B) */
extern void  FUN_10073310(void *obj);                     /* Document helper ctor */

/* MacApp handle/memory management */
extern void  FUN_100db158(int hi, int lo);                /* Lock handle */
extern void  FocusObject(void);                          /* Unlock handle */
extern void  EndFocus(void);                          /* Get handle state */
extern void  MarkChanged(void);                          /* Set handle state */
extern void *FUN_100db3c8(int mode);                      /* New resource handle */
extern void  FUN_100db49c(void *h, unsigned long type,    /* Write resource */
                           int a, int b, int c, int d, int e);
extern void  FUN_100bd55c(void *doc);                     /* Attach doc to app */

/* MacApp TFileBasedDocument superclass methods */
extern void  FUN_100ddfa8(int doc, void *fileSpec, char isNew); /* TFileBasedDoc::IFileBasedDoc */
extern void  FUN_100de320(int doc, void *fileSpec, char isNew); /* TFileBasedDoc::DoWrite super */
extern void  FUN_100d6c90(void *self, int cmd);                 /* TDocument::DoMenuCommand super */
extern void  FUN_100d6dd0(int doc);                             /* TDocument::DoSetupMenus super */

/* MacApp resource/stream functions */
extern void  FUN_100981f8(void *buf, int flags);          /* Open resource stream */
extern void *FUN_10098320(void *buf, unsigned long type,  /* Find resource by type+ID */
                           short resID);
extern void  FUN_100982e8(void *buf);                     /* Close resource stream */

/* MacApp utility functions */
extern int   FUN_100f1640(int size);                      /* Allocate heap block */
extern void *FUN_100f15e0(int count);                     /* Allocate small block */
extern void  BuildPascalString(void *dst, int src);            /* Pascal string copy */
extern int   FUN_100b1c84(int val);                       /* String conversion */
extern void  FUN_100ed640(void);                          /* Framework init 1 */
extern int   FUN_100ed6d8(void *param);                   /* Framework init 2 */
extern void  FUN_100ed8b0(void);                          /* Framework init 3 */
extern void  FUN_100ee070(int param);                     /* Framework setup */
extern void  FUN_1010003c(void);                          /* Framework setup 2 */
extern void  FUN_100cdf9c(void);                          /* Framework setup 3 */
extern void  FUN_100e1fac(void);                          /* Framework setup 4 */
extern void  FUN_100e0ea8(void);                          /* Framework setup 5 */
extern void  FUN_100e8cdc(void);                          /* Framework setup 6 */
extern void  FUN_100e8cec(int param);                     /* Framework setup 7 */
extern void  FUN_100d8e3c(int errCode);                   /* Show error alert */
extern void  FUN_100d8e68(short code, int detail);        /* Show error with detail */
extern void  FUN_100d8c9c(int cmd, int param);            /* Post command */
extern void  ReleaseHandle_Mapgen(int param);                     /* Release resource */
extern void  FreeBlock(int param);                     /* Release resource variant */
extern void  FUN_100b08d4(short *rect, int param);        /* Get screen size */
extern int   FUN_100f27d0(int menuID, int enabled);       /* Enable/disable menu item */
extern int   FUN_100f0538(int param);                     /* List iteration */

/* MacApp error handling / exception */
extern int   FUN_10000090(void *exception_buf);           /* Try (setjmp) */
extern void  FUN_10000150(void);                          /* Throw (longjmp) */
extern void  ReleaseResource_Thunk(void *handle);                  /* Dispose handle */
extern char  FUN_10000360(void *handle);                  /* Get handle flags */
extern int   FUN_10001a88(void);                          /* Get tick count */
#ifdef MODERN_BUILD
extern int   GetString(int offset, void *buf);         /* Read from offset */
#endif
extern int   FUN_10001c20(void *handle);                  /* Get handle size */
extern void  ReleaseHandle_Sound(void *handle);                  /* Release handle */
extern void  FUN_10001b60(void *handle, char flags);      /* Restore handle flags */
extern void  FUN_10001f98(int handle, void *out, int sz); /* Copy handle data */
extern int   FUN_10002a60(int handle);                    /* Get handle data size */
extern void  FUN_10002340(int data, int buf, int sz);     /* Copy data to buffer */
#ifdef MODERN_BUILD
extern void  AddResource(void *h, unsigned long type,    /* Add resource */
                           short id, int data);
extern void  DetachResource(void *h);                       /* Lock resource handle */
#endif
extern void *FUN_10003558(unsigned long type, short id);  /* Get named resource */

/* =========================================================================
 * Game Function Forward Declarations
 * (handlers called from DoMenuCommand dispatch)
 * ========================================================================= */

/* Command handlers -- game actions */
extern void  FUN_100410ec(void);                          /* EndTurn / NextArmy */
extern void  FUN_10041cf8(void);                          /* End Turn Processing */
extern void  FUN_10065500(short playerIdx);               /* Select Army by Index */
extern void  FUN_10065d24(short armyIdx);                 /* Deselect Army */
extern void  FUN_10025758(short mode, short x, short y);  /* City Info */
extern void  FUN_1002f97c(short a, short x, short b, short y); /* Move to Coords */
extern void  FUN_1007ceb0(void *self);                    /* Stack Management */
extern void  FUN_1002fe68(void);                          /* Define Path */
extern void  FUN_1007ba3c(void *self, int a, int b);      /* Cancel/Undo Action */
extern void  FUN_10055408(short cityIdx);                 /* Army Details/Inspect */
extern void  FUN_1002fd74(char param);                    /* Unknown handler (0x3F7) */
extern void  FUN_1004bd0c(void);                          /* Production Dialog */
extern void  FUN_10095330(void);                          /* Search Ruins/Temples */

/* Player setup commands (0x3FC-0x403) */
extern void  FUN_1000c9c8(void);                          /* Player Setup Cmd 1 */
extern void  FUN_1000cafc(void);                          /* Player Setup Cmd 2 */
extern void  FUN_1000cb54(void);                          /* Player Setup Cmd 3 */
extern void  FUN_1000cbb8(void);                          /* Player Setup Cmd 4 */
extern void  FUN_1000cc08(void);                          /* Player Setup Cmd 5 */
extern void  FUN_1000cc58(void);                          /* Player Setup Cmd 6 */
extern void  FUN_1000cca8(void);                          /* Player Setup Cmd 7 */
extern void  FUN_1000ccf8(void);                          /* Player Setup Cmd 8 */

/* Game option toggles (0x404-0x40F) */
extern void  FUN_1000cd54(void);                          /* Game Option Toggle 1 */
extern void  FUN_1000cda4(void);                          /* Game Option Toggle 2 */
extern void  FUN_1000cdf4(void);                          /* Game Option Toggle 3 */
extern void  FUN_1000ce44(void);                          /* Game Option Toggle 4 */
extern void  FUN_1000ce88(void);                          /* Game Option Toggle 5 */
extern void  FUN_1000ced8(void);                          /* Game Option Toggle 6 */
extern void  FUN_1000cf28(void);                          /* Game Option Toggle 7 */
extern void  FUN_1000d2e8(void);                          /* Game Option Toggle 8 */
extern void  FUN_1000d334(void);                          /* Game Option Toggle 9 */
extern void  FUN_1000d654(void);                          /* Game Option Toggle 10 */
extern void  FUN_1000d7bc(void);                          /* Game Option Toggle 11 */
extern void  FUN_1000d808(void);                          /* Game Option Toggle 12 */

/* High-number command handlers */
extern void  FUN_1007c618(void *self, short x, short y);  /* Move to Overview Target */
extern void  FUN_1003fe04(void);                          /* Toggle Fog of War */
extern void  FUN_1000848c(short x, short y);              /* Center Map on Location */
extern void  FUN_1003dc28(void);                          /* Full Display Refresh */
extern void  FUN_100ae86c(void);                          /* AI Strategy Command */
extern void  FUN_1002171c(void);                          /* Game History */
extern void  FUN_1005bdb8(void);                          /* Reports */
extern void  FUN_1002b4e0(void);                          /* Unknown Action (0x586) */
extern void  FUN_10050a48(short slotIdx);                 /* Select Army Slot 0-5 */
extern void  FUN_1002656c(void);                          /* Army Bonus Display */
extern void  FUN_1004d0d0(void);                          /* Items Dialog */
extern void  FUN_100950a4(void);                          /* Scenario Select */
extern void  FUN_10033e7c(void);                          /* New Game */
extern void  FUN_100351ec(void);                          /* Random Map */
extern void  ScanDefenseGrid(void);                          /* About Box */
extern void  FUN_1005ef84(void);                          /* Map Zoom/View Mode */
extern void  FUN_1003a5fc(void);                          /* Save Game */
extern void  FUN_1007c6d8(void *self, int direction);     /* Scroll Map */
extern void  FUN_1005e858(void);                          /* Toggle Sound */
extern void  FUN_10037fe4(short offset);                  /* Player Next/Prev */
extern void  FUN_1007b218(void *self);                    /* Hero Inspect */
extern void  DispatchNextPhase(void *self, int cmdID);         /* Post-command utility */
extern void  FUN_10040fb8(void);                          /* Display refresh after menus */
extern void  FUN_100657bc(void);                          /* Restore display state */
extern void  FUN_10075570(int viewState, int panelID, int visible); /* Panel visibility */

/* Game state init / turn management */
extern void  FUN_10029ac0(void *param2, int a, char b, int c); /* LoadAndInitializeGame */

/* Behavior init functions (called from DoPostCreate) */
extern void  FUN_100668a4(void);
extern void  FUN_1009d3fc(void);
extern void  FUN_10073250(void);
extern void  FUN_10078fa4(void);
extern void  FUN_10078fb4(int param);
extern void  GetSoundActiveFlag(void);
extern void  FUN_10093b10(int param);
extern void  FUN_10093f1c(void);
extern void  FUN_1007a748(void);
extern void  FUN_10096ce0(void);
extern void  FUN_10096fec(void);
extern void  FUN_10097108(void);
extern void  FUN_1009768c(void);
extern void  FUN_1009769c(int param);
extern void  FUN_1009db24(void);
extern void  FUN_1009ddb0(void);
extern void  FUN_1009ddc0(int param);
extern void  FUN_1009e680(void);
extern void  FUN_1009e690(int param);
extern void  FUN_10097964(void);
extern void  FUN_10097974(int param);
extern void  FUN_10095c34(void);
extern void  FUN_10096188(void);
extern void  FUN_100809b8(void);
extern void  FUN_10097a74(void);
extern void  FUN_10097a84(int param);
extern void  FUN_10096bbc(void);
extern void  FUN_10096bcc(int param);
extern void  FUN_10081e38(void);
extern void  FUN_10081e48(int param);
extern void  FUN_100a18e8(void);
extern void  FUN_100a18f8(int param);
extern void  FUN_10083d40(void);
extern void  FUN_10097db0(void);
extern void  FUN_100866f8(void);
extern void  FUN_10086708(int param);
extern void  FUN_10086314(void);
extern void  FUN_10086324(int param);
extern void  FUN_100863d8(void);
extern void  FUN_100863e8(int param);
extern void  FUN_100965d4(void);
extern void  FUN_100965e4(int param);
extern void  FUN_10088560(void);
extern void  FUN_1008a048(void);
extern void  FUN_1008a058(int param);
extern void  FUN_1008ad64(void);
extern void  FUN_1008ad74(int param);
extern void  FUN_1008bec8(void);
extern void  FUN_1008bed8(int param);
extern void  FUN_1008d9cc(void);
extern void  FUN_1008d9dc(int param);
extern void  FUN_1008dbac(void);
extern void  FUN_1008dbbc(int param);
extern void  FUN_1008dd68(void);
extern void  FUN_100869e0(void);
extern void  FUN_10090144(void);
extern void  FUN_1009049c(void);
extern void  FUN_100908c0(void);
extern void  FUN_10090b18(void);
extern void  FUN_10090b28(int param);
extern void  FUN_10090ec8(void);
extern void  FUN_10091090(void);
extern void  FUN_100910a0(int param);

/* =========================================================================
 * Globals used by framework
 * ========================================================================= */

/* These map to Ghidra global pointers referenced in the decompiled code */
extern int *gAppObject;     /* Application object (TApplicationWarlords) */
/* piRam1011735c, piRam10117358, piRam10117354, piRam10117360,
   piRam10117364, piRam10117368, piRam10117370
   now aliased via #define in wl2_globals.h */
extern int  gFrameworkData;      /* Framework data */
extern short *gShortCounter;   /* Short global counter */
/* piRam10117350 now aliased via #define in wl2_globals.h */
extern void *puRam1011734c;    /* View/window state */
extern int *gMainGameWindow;     /* Main game window handle */
extern int *gSidePanelWindow;     /* Side panel window handle */
extern int *gInfoWindow;     /* Info window handle */
extern int *gOverviewWindow;     /* Overview window handle */
/* piRam101176bc, piRam101176e0 now aliased via #define in wl2_globals.h */
extern int  gDisplayState;      /* Display state */
extern short *gUIShortGlobal;   /* Short global */

/* TVect table -- used for vtable references in PEF binary */
extern void *TVect_OCECToRString;  /* .TVect::OCECToRString base address */


/* =========================================================================
 * TDocumentWarlords::DoMenuCommand
 *
 * FUN_1007d168 at 0x1007d168, Size: 3436 bytes
 *
 * Central command dispatcher for all game menu actions.
 * Routes command IDs (param_2) to handler functions.
 * Called via MacApp vtable offset +0x110.
 *
 * Command ID ranges:
 *   0x3E8 (1000)      = End Turn / Next Army
 *   0x3EE-0x3FB       = Army/city/path/search commands
 *   0x3FC-0x40F       = Player setup & game option toggles
 *   0x578-0x580       = Army movement commands (mouse/keyboard)
 *   0x581-0x586       = Display/toggle commands
 *   0x5DC-0x5E3       = Army slot selection + items dialog
 *   0x640-0x643       = Scenario/new game/random map/about
 *   0x6A4-0x6AB       = Map zoom/save/scroll/sound
 *   0x708-0x70D       = Player switching
 *   0x76C-0x773       = Panel toggles & misc
 *   0x836             = Army slot selection (via Next/LeaveGuard)
 *
 * Unhandled commands fall through to TDocument::DoMenuCommand
 * (FUN_100d6c90 -- MacApp superclass).
 * ========================================================================= */
void DoMenuCommand(int *self, int cmdNumber)
{
    /* Cache global pointers for window handles */
    int *appObj          = gAppObject;    /* TApplicationWarlords */
    int *sidePanelWin    = gSidePanelWindow;    /* Side panel window */
    int *infoWin         = gMainGameWindow;    /* Main game window */
    int *infoWin2        = gInfoWindow;    /* Info window */
    int *overviewWin     = gOverviewWindow;    /* Overview window */
    int *viewServer      = piRam101176bc;    /* View server */
    void **tvect         = &TVect_OCECToRString;  /* PEF import table */

    void *newCmd;
    int *viewObj;
    int overviewData;
    int gameState;

    /*
     * The decompiled code uses a deeply nested if/else binary search tree
     * on command IDs. We present the equivalent logic as a structured
     * switch statement for clarity.
     *
     * Note: Several command IDs share the same handler via goto labels
     * in the original decompiled code (e.g., 0x578/0x579 share LAB_1007d530,
     * 0x57D/0x57E/0x57F/0x580 share LAB_1007d654).
     */

    switch (cmdNumber) {

    /* ---- End Turn / Next Army (cmd 1000 = 0x3E8) ---- */
    case 0x3E8:
        gameState = *piRam1011735c;
        /* Check if current player is human, has pending moves, and not already ending */
        if (*(short *)(gameState + *(short *)(gameState + 0x110) * 2 + 0xd0) == 0
            && *(char *)((int)self + 0x16e) != '\0'
            && *(char *)((int)self + 0x16f) == '\0') {
            /* Mark movement flag and end-of-turn flag */
            *(char *)((int)self + 0x1e9) = 1;
            *(char *)((int)self + 0x16f) = 1;
            /* vtable+0x110: call DoMenuCommand with sub-cmd 0x1E */
            ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x110), 0x1e);
            return;
        }
        *(char *)((int)self + 0x16f) = 0;
        FUN_100410ec();  /* EndTurn / NextArmy handler */
        return;

    /* ---- Select Army by Index (cmd 0x3EE) ---- */
    case 0x3EE:
        FUN_10065500(*(short *)(*piRam1011735c + 0x110));
        return;

    /* ---- Deselect Army (cmd 0x3EF) ---- */
    case 0x3EF:
        FUN_10065d24(*(short *)(self + 0x77));
        return;

    /* ---- City Info from city index (cmd 0x3F0) ---- */
    case 0x3F0: {
        int cityBase = *piRam1011735c + *(short *)((int)self + 0x1de) * 0x42;
        FUN_10025758(2, *(short *)(cityBase + 0x1604), *(short *)(cityBase + 0x1606));
        return;
    }

    /* ---- Move to Coordinates (cmd 0x3F1) ---- */
    case 0x3F1:
        FUN_1002f97c(*(short *)(self + 0x78),
                     *(short *)((int)self + 0x1e2),
                     *(short *)(self + 0x79),
                     *(short *)((int)self + 0x1e6));
        return;

    /* ---- Stack Management (cmd 0x3F2) ---- */
    case 0x3F2:
        FUN_1007ceb0(self);
        return;

    /* ---- Create View (cmd 0x3F3, view ID 3000) ---- */
    case 0x3F3: {
        /* viewServer->FindSubView(3000, self) via vtable +0xC8 */
        int *newView = (int *)ResourceRead_Dispatch(
            *piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),
            3000, self);
        FocusObject();  /* Unlock handle */
        /* newView->Open() via vtable +0x320 (800 decimal) */
        ResourceRead_Dispatch((int)newView + (int)*(short *)(*newView + 800));
        return;
    }

    /* ---- Define Path (cmd 0x3F4) ---- */
    case 0x3F4:
        FUN_1002fe68();
        return;

    /* ---- Cancel/Undo Action (cmd 0x3F5) ---- */
    case 0x3F5:
        FUN_1007ba3c(self, 1, 1);
        return;

    /* ---- City Info from city list (cmd 0x3F6) ---- */
    case 0x3F6: {
        int cityBase = *piRam1011735c + *(short *)((int)self + 0x1de) * 0x42;
        FUN_10025758(0, *(short *)(cityBase + 0x1604), *(short *)(cityBase + 0x1606));
        return;
    }

    /* ---- Unknown handler (cmd 0x3F7) ---- */
    case 0x3F7:
        FUN_1002fd74(*(char *)(self + 0x7a));
        return;

    /* ---- Army Details/Inspect (cmd 0x3F8) ---- */
    case 0x3F8:
        FUN_10055408(*(short *)((int)self + 0x1de));
        return;

    /* ---- Production Dialog (cmd 0x3F9) ---- */
    case 0x3F9:
        FUN_1004bd0c();
        return;

    /* ---- Refresh All Views (cmd 0x3FA) ---- */
    case 0x3FA:
        /* ForceRedraw on all four main windows (vtable +0x4C8) */
        ResourceRead_Dispatch(*gMainGameWindow + (int)*(short *)(*(int *)*gMainGameWindow + 0x4c8));
        ResourceRead_Dispatch(*sidePanelWin  + (int)*(short *)(*(int *)*sidePanelWin  + 0x4c8));
        ResourceRead_Dispatch(*overviewWin   + (int)*(short *)(*(int *)*overviewWin   + 0x4c8));
        ResourceRead_Dispatch(*infoWin2      + (int)*(short *)(*(int *)*infoWin2      + 0x4c8));
        return;

    /* ---- Search Ruins/Temples (cmd 0x3FB) ---- */
    case 0x3FB:
        FUN_10095330();
        return;

    /* ---- Player Setup Commands (0x3FC-0x403) ---- */
    case 0x3FC:  FUN_1000c9c8();  return;
    case 0x3FD:  FUN_1000cafc();  return;
    case 0x3FE:  FUN_1000cb54();  return;
    case 0x3FF:  FUN_1000cbb8();  return;
    case 0x400:  FUN_1000cc08();  return;
    case 0x401:  FUN_1000cc58();  return;
    case 0x402:  FUN_1000cca8();  return;
    case 0x403:  FUN_1000ccf8();  return;

    /* ---- Game Option Toggles (0x404-0x40F) ---- */
    case 0x404:  FUN_1000cd54();  return;
    case 0x405:  FUN_1000cda4();  return;
    case 0x406:  FUN_1000cdf4();  return;
    case 0x407:  FUN_1000ce44();  return;
    case 0x408:  FUN_1000ce88();  return;
    case 0x409:  FUN_1000ced8();  return;
    case 0x40A:  FUN_1000cf28();  return;
    case 0x40B:  FUN_1000d2e8();  return;
    case 0x40C:  FUN_1000d334();  return;
    case 0x40D:  FUN_1000d654();  return;
    case 0x40E:  FUN_1000d7bc();  return;
    case 0x40F:  FUN_1000d808();  return;

    /* ---- Mouse Army Move: group (cmd 0x578) ---- */
    /* ---- Mouse Army Move: single (cmd 0x579) ---- */
    case 0x578:
    case 0x579:
        /* Allocate TMoveArmyCommand (0xB4 = 180 bytes) */
        newCmd = NewPtr_Thunk(0xB4);
        if (newCmd != NULL) {
            FUN_100c3d2c(newCmd);                 /* TCommand base ctor */
            *(int *)newCmd = (int)((void **)tvect)[-0x437];  /* Set vtable */
            *(short *)((char *)newCmd + 0xB0) = 0;
        }
        FUN_100c3df8(newCmd, cmdNumber, self, 1, 1, self);
        *(short *)((char *)newCmd + 0xB0) = 0;
        /* PerformCommand(cmd) via vtable +0x200 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x200), (int)newCmd);
        return;

    /* ---- Move to Overview Target (cmd 0x57A) ---- */
    case 0x57A:
        FUN_1007c618(self,
                     *(short *)(*piRam101176e0 + 0x12),
                     *(short *)(*piRam101176e0 + 0x14));
        return;

    /* ---- End Turn Processing (cmd 0x57B) ---- */
    case 0x57B:
        FUN_10041cf8();
        return;

    /* ---- Keyboard Army Move (cmd 0x57C) ---- */
    case 0x57C:
        /* Allocate TMoveArmyByKeyCommand (0x108 = 264 bytes) */
        newCmd = NewPtr_Thunk(0x108);
        if (newCmd != NULL) {
            FUN_100c3d2c(newCmd);                 /* TCommand base ctor */
            *(int *)newCmd = (int)((void **)tvect)[-0x43a];  /* Set vtable */
            *(short *)((char *)newCmd + 0x30) = 0xFFFF;
            *(short *)((char *)newCmd + 0x32) = 0xFFFF;
            *(short *)((char *)newCmd + 0x104) = 0;
        }
        FUN_100c3df8(newCmd, 0x57C, self, 1, 1, self);
        /* PerformCommand(cmd) via vtable +0x200 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x200), (int)newCmd);
        return;

    /* ---- Army Move variants (cmds 0x57D, 0x57E, 0x57F, 0x580) ---- */
    /* These all create a larger TMoveArmyCommand (0x1E0 = 480 bytes) */
    case 0x57D:
    case 0x57E:
    case 0x57F:
    case 0x580:
        /* Allocate TMoveArmyCommand full data (0x1E0 bytes) */
        newCmd = NewPtr_Thunk(0x1E0);
        if (newCmd != NULL) {
            FUN_100c3d2c(newCmd);                 /* TCommand base ctor */
            *(int *)newCmd = (int)((void **)tvect)[-0x43c];  /* Set vtable */
            ((int *)newCmd)[0x0C] = 0;
            *(short *)((char *)newCmd + 0x104) = 0;
            *(short *)((char *)newCmd + 0x1D8) = 0;
            *(short *)((char *)newCmd + 0x1DA) = 0xFFFF;
            *(short *)((char *)newCmd + 0x1DC) = 0xFFFF;
        }
        FUN_100c3df8(newCmd, cmdNumber, self, 1, 1, self);
        ((int *)newCmd)[0x0C] = (int)self;
        *(short *)((char *)newCmd + 0x1DA) = 0xFFFF;
        *(short *)((char *)newCmd + 0x1DC) = 0xFFFF;
        /* PerformCommand(cmd) via vtable +0x200 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x200), (int)newCmd);
        return;

    /* ---- Toggle Fog of War (cmd 0x581) ---- */
    case 0x581:
        FUN_1003fe04();
        return;

    /* ---- Center Map on Location (cmd 0x582) ---- */
    case 0x582:
        overviewData = *piRam101176e0;
        if (overviewData == 0) return;
        if (*(short *)(overviewData + 0x12) < 0) return;
        if (*(short *)(overviewData + 0x14) < 0) return;
        FUN_1000848c(*(short *)(overviewData + 0x12),
                     *(short *)(overviewData + 0x14));
        FUN_1003dc28();
        return;

    /* ---- AI Strategy Command (cmd 0x583) ---- */
    case 0x583:
        FUN_100ae86c();
        return;

    /* ---- Game History (cmd 0x584) ---- */
    case 0x584:
        FUN_1002171c();
        return;

    /* ---- Reports (cmd 0x585) ---- */
    case 0x585:
        FUN_1005bdb8();
        return;

    /* ---- Unknown Action (cmd 0x586) ---- */
    case 0x586:
        FUN_1002b4e0();
        return;

    /* ---- Select Army Slot 0 (cmd 0x5DC) ---- */
    case 0x5DC:
        FUN_10050a48((short)self[0x59] + -0x5DD);
        return;

    /* ---- Select Army Slot 1-5 (cmds 0x5DD-0x5E1) ---- */
    case 0x5DD:
    case 0x5DE:
    case 0x5DF:
    case 0x5E0:
    case 0x5E1:
        FUN_10050a48((short)cmdNumber + -0x5DD);
        return;

    /* ---- Army Bonus Display (cmd 0x5E2) ---- */
    case 0x5E2:
        FUN_1002656c();
        return;

    /* ---- Items Dialog (cmd 0x5E3) ---- */
    case 0x5E3:
        FUN_1004d0d0();
        return;

    /* ---- Scenario Select (cmd 0x640) ---- */
    case 0x640:
        FUN_100950a4();
        return;

    /* ---- New Game (cmd 0x641) ---- */
    case 0x641:
        FUN_10033e7c();
        return;

    /* ---- Random Map (cmd 0x642) ---- */
    case 0x642:
        FUN_100351ec();
        return;

    /* ---- About Box (cmd 0x643) ---- */
    case 0x643:
        ScanDefenseGrid();
        return;

    /* ---- Map Zoom/View Mode (cmd 0x6A4) ---- */
    case 0x6A4:
        FUN_1005ef84();
        return;

    /* ---- Save Game (cmd 0x6A5) ---- */
    case 0x6A5:
        FUN_1003a5fc();
        return;

    /* ---- Scroll Map in direction (cmds 0x6A6-0x6AA) ---- */
    case 0x6A6:
    case 0x6A7:
    case 0x6A8:
    case 0x6A9:
    case 0x6AA:
        FUN_1007c6d8(self, cmdNumber);
        return;

    /* ---- Toggle Sound (cmd 0x6AB) ---- */
    case 0x6AB:
        FUN_1005e858();
        return;

    /* ---- Player Next (cmd 0x708) ---- */
    case 0x708:
        FUN_10037fe4((short)self[0x5a] + -0x709);
        return;

    /* ---- Player Prev/Switch (cmds 0x709-0x70D) ---- */
    case 0x709:
    case 0x70A:
    case 0x70B:
    case 0x70C:
    case 0x70D:
        FUN_10037fe4((short)cmdNumber + -0x709);
        return;

    /* ---- Menu command: Refresh Menus (cmd 0x76C) ---- */
    case 0x76C:
        /* DoSetupMenus via vtable +0x228 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x228));
        /* SetTarget via vtable +0x38 with (0x76C, 0) */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x38), 0x76C, 0);
        FUN_10040fb8();
        return;

    /* ---- Hero Inspect (cmd 0x76D) ---- */
    case 0x76D:
        FUN_1007b218(self);
        return;

    /* ---- Side Panel Toggle (cmd 0x76F) ---- */
    case 0x76F: {
        int *winObj = (int *)*gSidePanelWindow;
        if (winObj == NULL) return;
        /* IsActive via vtable +0x668 */
        int isActive = ResourceRead_Dispatch(
            (int)*(short *)(*winObj + 0x668) + (int)winObj);
        if (isActive != 0) {
            /* Close via vtable +0x328 */
            ResourceRead_Dispatch(*sidePanelWin + (int)*(short *)(*(int *)*sidePanelWin + 0x328));
            return;
        }
        /* Open via vtable +0x320 (800 decimal) */
        ResourceRead_Dispatch(*sidePanelWin + (int)*(short *)(*(int *)*sidePanelWin + 800));
        winObj = (int *)*infoWin;
        if (winObj == NULL) return;
        /* UpdateMapDisplay via vtable +0x780 */
        ResourceRead_Dispatch((int)winObj + (int)*(short *)(*winObj + 0x780));
        /* SetTarget via vtable +0x338 on app with saved window state */
        ResourceRead_Dispatch(*appObj + (int)*(short *)(*(int *)*appObj + 0x338),
                     *(int *)(*infoWin + 0x98));
        return;
    }

    /* ---- Info Panel Toggle (cmd 0x770) ---- */
    case 0x770: {
        int *winObj = (int *)*gInfoWindow;
        if (winObj == NULL) return;
        int isActive = ResourceRead_Dispatch(
            (int)*(short *)(*winObj + 0x668) + (int)winObj);
        if (isActive != 0) {
            ResourceRead_Dispatch(*infoWin2 + (int)*(short *)(*(int *)*infoWin2 + 0x328));
            return;
        }
        ResourceRead_Dispatch(*infoWin2 + (int)*(short *)(*(int *)*infoWin2 + 800));
        winObj = (int *)*infoWin;
        if (winObj == NULL) return;
        ResourceRead_Dispatch((int)*(short *)(*winObj + 0x780) + (int)winObj);
        ResourceRead_Dispatch(*appObj + (int)*(short *)(*(int *)*appObj + 0x338),
                     *(int *)(*infoWin + 0x98));
        return;
    }

    /* ---- Main Panel Toggle (cmd 0x771) ---- */
    case 0x771: {
        int *winObj = (int *)*gOverviewWindow;
        if (winObj == NULL) return;
        int isActive = ResourceRead_Dispatch(
            (int)*(short *)(*winObj + 0x668) + (int)winObj);
        if (isActive != 0) {
            ResourceRead_Dispatch(*overviewWin + (int)*(short *)(*(int *)*overviewWin + 0x328));
            return;
        }
        ResourceRead_Dispatch(*overviewWin + (int)*(short *)(*(int *)*overviewWin + 800));
        winObj = (int *)*infoWin;
        if (winObj == NULL) return;
        ResourceRead_Dispatch((int)winObj + (int)*(short *)(*winObj + 0x780));
        ResourceRead_Dispatch(*appObj + (int)*(short *)(*(int *)*appObj + 0x338),
                     *(int *)(*infoWin + 0x98));
        return;
    }

    /* ---- Window position save/restore (cmd 0x772) ---- */
    case 0x772:
        FUN_1007c7b4(self);
        return;

    /* ---- Test if changed, then refresh menus (cmd 0x773) ---- */
    case 0x773: {
        /* HasChanged via vtable +0x298 */
        int changed = ResourceRead_Dispatch(
            (int)self + (int)*(short *)(*self + 0x298));
        if (changed != 0) {
            /* DoMenuCommand with sub-cmd 0x1E via vtable +0x110 */
            ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x110), 0x1e);
        }
        DispatchNextPhase(self, 0x76c);
        return;
    }

    /* ---- Default: pass to superclass ---- */
    default:
        FUN_100d6c90(self, cmdNumber);
        return;
    }
}


/* =========================================================================
 * TDocumentWarlords::DoRead (Load Document)
 *
 * FUN_1007ded4 at 0x1007ded4, Size: 1076 bytes
 *
 * Called when opening a saved game file. Allocates game state buffers
 * if not already present, reads resource data from the file, and
 * initializes the game.
 *
 * Allocations:
 *   gGameState   (piRam1011735c) = 0x2FCC bytes
 *   gMapTiles    (piRam10117358) = 0x8880 bytes
 *   gUnitTypeTable (piRam10117360) = 22000 bytes
 *   gDataPtr_10117354            = 0x4440 bytes
 *
 * Reads resources: "Type" (file type), "Turn" (turn state),
 *   "Mail" x8 (per-player mail), "MKik" (multiplayer kick data)
 * ========================================================================= */
void DoReadDocument(int docSelf, int *fileSpec, char isNew)
{
    void *puVar7 = piRam10117370;
    int *piVar6  = piRam10117360;
    int *piVar5  = piRam1011735c;
    int *piVar4  = piRam10117358;
    int *piVar3  = piRam10117354;
    int *piVar2  = (int *)puRam1011734c;

    int bTurnRestore = 0;  /* false */
    char uVar14 = 1;
    int iVar10 = 0;

    /* Call superclass TFileBasedDocument::DoRead */
    FUN_100ddfa8(docSelf, fileSpec, isNew);

    /* Mark document as file-based */
    *(char *)(docSelf + 0x144) = 1;

    /* Allocate game state buffers if not yet present */
    if (*piVar5 == 0) {
        *piVar5 = FUN_100f1640(0x2FCC);     /* GameState: ~12K */
    }
    if (*piVar4 == 0) {
        *piVar4 = FUN_100f1640(0x8880);     /* MapTiles: ~35K */
    }
    if (*piVar6 == 0) {
        *piVar6 = FUN_100f1640(22000);      /* UnitTypeTable */
    }
    if (*piVar3 == 0) {
        *piVar3 = FUN_100f1640(0x4440);     /* Info panel data */
    }

    /* If this is a file-based document (not new), read saved data */
    if (*(char *)(docSelf + 0x16c) != '\0') {
        void *typeRes;

        /* Read "Type" resource (ID 1000) -- file type indicator */
        typeRes = FUN_10003558(0x54797065, 1000);  /* 'Type' */
        if (typeRes != NULL) {
            if (1 < *(short *)*(int *)typeRes) {
                FUN_100d8c9c(0x3FC, 0);           /* Post setup command */
                FUN_100db158(0, 0x820000);         /* Lock handle */
            }
            ReleaseHandle_Sound(typeRes);                 /* Release handle */
        }

        /* CalcMinSize via vtable +0x2B8 */
        ResourceRead_Dispatch((int)fileSpec + (int)*(short *)(*fileSpec + 0x2B8));

        /* Read "Turn" resource (ID 1000) -- turn state indicator */
        typeRes = FUN_10003558(0x5475726E, 1000);  /* 'Turn' */
        if (typeRes != NULL) {
            iVar10 = FUN_10001c20(typeRes);
            if (iVar10 != 0 && *(char *)*(int *)typeRes == '\x01') {
                bTurnRestore = 1;  /* true */
            }
            if (!bTurnRestore) {
                int viewState = *piVar2;
                *(char *)(viewState + 0x9a) = 1;
                *(int *)(viewState + 0x9c) = FUN_10001a88();
            }
            ReleaseHandle_Sound(typeRes);
            uVar14 = 0;
        }

        /* CalcMinSize again */
        ResourceRead_Dispatch((int)fileSpec + (int)*(short *)(*fileSpec + 0x2B8));

        /* Read per-player "Mail" resources (IDs 1000-1007) */
        /* Stub — FUN_1007ded4: reads Mail resources with exception handling */
        /* Original uses setjmp/FUN_10000090 for exception safety */
        /* Reads 8 iterations: FUN_10003558('Mail', i+1000) for i in 0..7 */
        /* Stores player mail data at docSelf + i*4 + 0x170 */

        /* Read "MKik" resource for multiplayer kick state */
        /* *(char *)(docSelf + 0x16f) = (FUN_10003558('MKik', 1000) != 0) */
    }

    /* Initialize game from loaded data */
    FUN_10029ac0(fileSpec, 0, *(char *)(docSelf + 0x16c), !bTurnRestore);

    /* Center viewport if no pending game phase */
    iVar10 = *piVar5;
    if (*(short *)(iVar10 + 0x124) == 0 && *(char *)(*piVar2 + 0x9a) == '\0') {
        FUN_1000848c(*(short *)(iVar10 + 0x17e), *(short *)(iVar10 + 0x180));
    }

    /* Restore display state if turn was in progress */
    if (bTurnRestore) {
        FUN_100657bc();
    }
    else if (*(char *)(docSelf + 0x16e) != '\0') {
        int viewState = *piVar2;
        if (*(char *)(viewState + 0x9a) != '\0') {
            *(char *)(viewState + 0x9a) = 1;
            *(int *)(viewState + 0x9c) = FUN_10001a88();
        }
    }
}


/* =========================================================================
 * TDocumentWarlords::DoWrite (Save Document)
 *
 * FUN_1007e894 at 0x1007e894, Size: 1000 bytes
 *
 * Saves game state to file. Writes:
 *   - Game state via WriteGameStateCrossFormat or WriteGameState
 *   - "Type" resource (file type indicator, ID 1000)
 *   - Per-player "Mail" resources (IDs 1000-1007)
 *   - "MKik" resource (multiplayer kick state)
 *   - "Turn" resource (turn-in-progress indicator)
 *
 * Uses exception handling (FUN_10000090) for safe resource writes.
 * ========================================================================= */
void DoWriteDocument(int docSelf, int *fileSpec, char isNew)
{
    void *puVar4 = piRam10117370;
    int *piVar3  = (int *)puRam1011734c;
    char auStack_250[264];
    char auStack_144[256];

    /* Call superclass TFileBasedDocument::DoWrite */
    FUN_100de320(docSelf, fileSpec, isNew);

    /* Copy application name string */
    BuildPascalString(auStack_250, 0 /* string source omitted */);

    if (*(char *)(docSelf + 0x16c) == '\0') {
        /* Cross-format write for new/export */
        WriteGameStateCrossFormat(fileSpec);   /* WriteGameStateCrossFormat */
    }
    else {
        /* Standard format write for saved game */
        WriteGameState(fileSpec);   /* WriteGameState */

        /* Write "Type" resource (ID 1000) -- marks file as saved game */
        /* Exception-safe block: setjmp + resource write + longjmp on error */
        {
            void *typeHandle = FUN_100f15e0(2);
            *(short *)*(int *)typeHandle = 1;
            /* AddResource(typeHandle, 'Type', 1000, ...) */
            /* ... resource write with error handling ... */
        }

        /* Write per-player "Mail" resources if multiplayer data present */
        if (*(char *)(docSelf + 0x16e) != '\0') {
            ResourceRead_Dispatch((int)fileSpec + (int)*(short *)(*fileSpec + 0x2B8));

            /* Write 8 player mail resources: 'Mail', IDs 1000-1007 */
            /* Stub — mail resource write loop omitted */
            /* for (i = 0; i < 8; i++) {
             *     mailData = *(int*)(docSelf + i*4 + 0x170);
             *     if (mailData != 0) {
             *         AddResource(mailData, 'Mail', i+1000, ...);
             *     }
             * } */

            /* Write "MKik" resource if multiplayer kick active */
            if (*(char *)(docSelf + 0x16f) != '\0') {
                /* AddResource(handle, 'MKik', 1000, ...) */
                *(char *)(docSelf + 0x16f) = 0;
            }
        }

        /* Write "Turn" resource if turn is in progress */
        {
            int viewState = *piVar3;
            if (*(char *)(viewState + 0x9a) != '\0' ||
                *(char *)(viewState + 0x99) != '\0') {
                /* Write turn-in-progress indicator */
                /* Stub — Turn resource write omitted */
            }
        }
    }
}


/* =========================================================================
 * TDocumentWarlords::DoSetupMenus
 *
 * FUN_1007e314 at 0x1007e314, Size: 1408 bytes
 *
 * Called by MacApp to enable/disable menu items based on current game state.
 * Manages menu visibility for:
 *   - File menu (Save, Revert)
 *   - Game menu (End Turn, Options)
 *   - Side panel visibility
 *   - View panels (side, overview, info)
 *
 * Calls superclass TDocument::DoSetupMenus first (FUN_100d6dd0).
 * ========================================================================= */
void DoSetupMenus(int docSelf)
{
    int *piVar7 = piRam101176e0;
    int *piVar6 = (int *)puRam1011734c;
    int *piVar1 = gSidePanelWindow;
    int *piVar2 = gInfoWindow;
    int *piVar3 = gOverviewWindow;

    /* Call superclass DoSetupMenus */
    FUN_100d6dd0(docSelf);

    /* If document is not file-based and view state has pending changes */
    if (*(char *)(docSelf + 0x16c) == '\0' && *(char *)(*piVar6 + 0x9a) != '\0') {
        /* Disable certain menus during non-file mode */
        FUN_100f27d0(0x1F, 0);  /* Disable menu 0x1F */
        FUN_100f27d0(0x1E, 0);  /* Disable menu 0x1E */
        FUN_100f27d0(0x20, 0);  /* Disable menu 0x20 */
        FUN_100f27d0(0x21, 0);  /* Disable menu 0x21 */
        FUN_100f27d0(0x24, 0);  /* Disable menu 0x24 */
    }

    /* Set panel visibility state */
    if (*(char *)(*piVar6 + 0x99) == '\0') {
        /* Check side panel (0x76F) visibility */
        FUN_10075570(*piVar6, 0x76F, *piVar1 != 0);

        /* Check if side panel window exists and is active */
        int *sideWinObj = (int *)*piVar1;
        int bSideHidden;
        if (sideWinObj == NULL) {
            bSideHidden = 1;
        } else {
            int isActive = ResourceRead_Dispatch(
                (int)*(short *)(*sideWinObj + 0x668) + (int)sideWinObj);
            bSideHidden = (isActive == 0);
        }

        /* Stub — overview and info panel visibility checks omitted */
        /* FUN_1007e314 continues with similar IsActive checks for */
        /* overview window (gOverviewWindow) and info window (gInfoWindow) */
        /* Then enables/disables menus 0x76F, 0x770, 0x771 accordingly */
    }
}


/* =========================================================================
 * TDocumentWarlords::DoMakeWindows
 *
 * FUN_1003e13c at 0x1003e13c, Size: 5420 bytes
 *
 * Creates the main game window hierarchy with all subviews.
 * This is one of the largest functions in the game.
 *
 * Creates 3 windows:
 *   1. Main game window (resource ID 1000) - contains map, scrollers, turn view
 *   2. Overview window - minimap
 *   3. Info window - army/city info panel
 *
 * Reads saved window positions from "Wind" resource (ID 1000).
 * Adjusts layout for small screens (< 3MB, max 640x480).
 * Calls player view setup in a loop (4 iterations).
 *
 * If param_2 != 0 (loading saved game):
 *   - FUN_1003c838() -- InitializePlayerTurn
 *   - FUN_1003d4dc() -- AdvanceToNextPlayer
 *   - FUN_10064850(1,1) -- UpdateMapDisplay
 *   - FUN_1003c368() -- RefreshGameState
 * ========================================================================= */
void DoMakeWindows(int docSelf, short param_2)
{
    /* Stub — FUN_1003e13c (5420 bytes)
     *
     * This function is extremely large and complex. Key operations:
     *
     * 1. Read application global data (gAppObject + 0x32)
     * 2. Check available memory (EndFocus)
     *    - If < 3MB, limit screen to 640x480
     * 3. Get screen bounds (FUN_100b08d4)
     * 4. Open resource stream for "Wind" resource (ID 1000)
     *    via FUN_100981f8 / FUN_10098320
     * 5. Read 3 saved window rectangles from resource:
     *    - Main window rect (offsets 0x08-0x14)
     *    - Overview window rect (offsets 0x18-0x24)
     *    - Info window rect (offsets 0x2C-0x38)
     *    - Visibility flags (offset 0x28, etc.)
     * 6. Validate window positions against screen bounds
     * 7. Create main game window:
     *    - FindSubView for "map " (TMapView)
     *    - FindSubView for "over" (TOverviewView)
     *    - FindSubView for "turn" (TTurnView)
     *    - FindSubView for "stac" (TStackInfoView)
     * 8. Create overview window
     * 9. Create info window
     * 10. Loop 4 times calling FUN_10075ee0 for player view setup
     * 11. If loading saved game (param_2 != 0):
     *     - FUN_1003c838()  (InitializePlayerTurn)
     *     - FUN_1003d4dc()  (AdvanceToNextPlayer)
     *     - FUN_10064850(1,1) (UpdateMapDisplay)
     *     - FUN_1003c368()  (RefreshGameState)
     * 12. FUN_1003d5d4()    (SetupTurnIndicators)
     * 13. Show/hide windows based on saved visibility
     * 14. FUN_1003d6c4() and FUN_1003dc28() for final refresh
     */
}


/* =========================================================================
 * TDocumentWarlords::DoPostCreate (Application Initialization)
 *
 * FUN_10114e58 at 0x10114e58, Size: 2948 bytes
 *
 * Called once during application startup. Initializes the MacApp framework,
 * creates all 23+ dialog behavior objects, allocates game data buffers,
 * and attaches the document to the application.
 *
 * Behavior creation pattern (repeated ~30 times):
 *   1. Check failure flag at *(local_54 - 0x528)
 *   2. Call behavior-specific init function (e.g., FUN_10078fa4)
 *   3. Allocate behavior object (NewPtr_Thunk with size)
 *   4. Call base constructor (FUN_100d568c for TBehavior,
 *      FUN_100c6b2c for extended, etc.)
 *   5. Set vtable pointer from TVect table
 *   6. Initialize behavior-specific fields
 *
 * Data buffer allocations:
 *   piRam10117368 = 0x8880 bytes (fog of war map)
 *   piRam10117364 = 0xAE bytes (unit class table)
 *   piRam10117360 = 22000 bytes (unit type table)
 *   piRam1011735c = 0x2FCC bytes (game state)
 *   piRam10117358 = 0x8880 bytes (map tiles)
 *   piRam10117354 = 0x4440 bytes (info panel data)
 *   piRam10117350 = 0x3A bytes (misc data)
 * ========================================================================= */
void DoPostCreate(void)
{
    int *piVar4  = piRam1011735c;
    int *piVar3  = piRam10117358;
    int *piVar2  = piRam10117354;
    int *piVar14 = piRam10117350;
    int *piVar5  = piRam10117360;
    int *piVar6  = piRam10117364;
    int *piVar7  = piRam10117368;
    void *puVar9 = piRam10117370;
    short *psVar8 = gShortCounter;
    int iVar13   = gFrameworkData;
    void *puVar1 = puRam1011734c;
    void *failFlag;  /* *(local_54 - 0x528) points to failure indicator */

    /* Framework initialization sequence */
    FUN_100ed640();

    int iVar11 = FUN_100ed6d8(NULL /* tvect[-5] */);
    if (iVar11 == 0) {
        FUN_100d8e3c(0x89);  /* Show error: initialization failed */
        return;
    }

    FUN_100ed8b0();

    /* Initialize framework data structure */
    *(short *)(iVar13 + 0x100) = 0;
    *(int *)(iVar13 + 0x104) = 0;
    *(int *)(iVar13 + 0x10c) = 0;
    *(int *)(iVar13 + 0x110) = 0;
    *(int *)(iVar13 + 0x108) = *(int *)puVar9;
    *(int *)puVar9 = iVar13;

    /* Exception-safe initialization */
    iVar11 = FUN_10000090((void *)iVar13);
    if (iVar11 != 0) {
        if (*(short *)(iVar13 + 0x100) != 0) {
            if (*(int *)(iVar13 + 0x104) == 0) {
                *(int *)(iVar13 + 0x104) = 0x820001;
            }
            FUN_100d8e68(*(short *)(iVar13 + 0x100), *(int *)(iVar13 + 0x104));
        }
        FUN_10000150();  /* longjmp / rethrow */
    }

    /* Core framework setup calls */
    FUN_100ee070(0x18);
    FUN_1010003c();
    FUN_100cdf9c();
    FUN_100e1fac();
    FUN_100e0ea8();

    /* === Create Dialog Behaviors === */
    /* Each behavior follows the pattern: init function, allocate, construct, set vtable */

    /* Behavior 1: Map/game view setup */
    FUN_100668a4();

    /* Behavior 2: Scenario select (0x44 bytes, TBehavior) */
    FUN_1009d3fc();
    /* Stub — allocation + vtable set for each behavior */

    /* Behavior 3: Turn processing */
    FUN_10073250();

    /* Behavior 4: Fight order dialog */
    FUN_10078fa4();
    FUN_10078fb4(0);

    /* Behavior 5: Sound handler */
    GetSoundActiveFlag();
    FUN_10093b10(0);

    /* Behavior 6: Simple object (0x20 bytes) */
    FUN_10093f1c();
    /* Allocate + FUN_100bf518 ctor */

    /* Behavior 7: Misc setup */
    FUN_1007a748();

    /* Behavior 8: Scenario list (0x40 bytes, TBehavior) */
    FUN_10096ce0();

    /* Behavior 9: City dialog (0x90 bytes) */
    FUN_10096fec();

    /* Behavior 10: Stack dialog (0x80 bytes) */
    FUN_10097108();

    /* Behavior 11: Game setup */
    FUN_1009768c();
    FUN_1009769c(0);

    /* Behavior 12: Diplomacy (0x40 bytes, TBehavior) */
    FUN_1009db24();

    /* Behavior 13: Peace dialog */
    FUN_1009ddb0();
    FUN_1009ddc0(0);

    /* Behavior 14: History dialog */
    FUN_1009e680();
    FUN_1009e690(0);

    /* Behavior 15: Search dialog */
    FUN_10097964();
    FUN_10097974(0);

    /* Behavior 16: Items dialog (0x40 bytes, TBehavior) */
    FUN_10095c34();

    /* Behavior 17: Report grid (0xB8 bytes) */
    FUN_10096188();

    /* Behavior 18: City picture (0x1B4 bytes, extended) */
    FUN_100809b8();

    /* Behavior 19: Random map */
    FUN_10097a74();
    FUN_10097a84(0);

    /* Behavior 20: Game options */
    FUN_10096bbc();
    FUN_10096bcc(0);

    /* Behavior 21: Better dialog */
    FUN_10081e38();
    FUN_10081e48(0);

    /* Behavior 22: AI strategy */
    FUN_100a18e8();
    FUN_100a18f8(0);

    /* Behavior 23: Hero inspect (0xAC bytes) */
    FUN_10083d40();

    /* Behavior 24: Side setup (0x44 bytes, TBehavior) */
    FUN_10097db0();

    /* Behavior 25-26: Fight result dialogs */
    FUN_100866f8();
    FUN_10086708(0);

    FUN_10086314();
    FUN_10086324(0);

    /* Behavior 27: Sage dialog */
    FUN_100863d8();
    FUN_100863e8(0);

    /* Behavior 28: Menu shortcuts */
    FUN_100965d4();
    FUN_100965e4(0);

    /* Behavior 29: About box (0x44 bytes, TBehavior) */
    FUN_10088560();

    /* Behavior 30: Production dialog */
    FUN_1008a048();
    FUN_1008a058(0);

    /* Behavior 31: Dismiss dialog */
    FUN_1008ad64();
    FUN_1008ad74(0);

    /* Behavior 32: Build/prod dialog */
    FUN_1008bec8();
    FUN_1008bed8(0);

    /* Behavior 33: Start-of-turn */
    FUN_1008d9cc();
    FUN_1008d9dc(0);

    /* Behavior 34: Hero hire */
    FUN_1008dbac();
    FUN_1008dbbc(0);

    /* Behavior 35: Compressed file stream (0xBC bytes) */
    FUN_1008dd68();

    /* Behavior 36: Army dragger (0x84 bytes) */
    FUN_100869e0();

    /* Behavior 37: Report display (0xB8 bytes) */
    FUN_10090144();

    /* Behavior 38: Scenario processing (0x40 bytes, TBehavior) */
    FUN_1009049c();

    /* Behavior 39: Options list (0x80 bytes) */
    FUN_100908c0();

    /* Behavior 40: Character list */
    FUN_10090b18();
    FUN_10090b28(0);

    /* Behavior 41: Extended object (0xA8 bytes) */
    FUN_10090ec8();

    /* Behavior 42: Last behavior */
    FUN_10091090();
    FUN_100910a0(0);

    /* === Allocate Game Data Buffers === */

    if (*piVar7 == 0) {
        *piVar7 = FUN_100f1640(0x8880);     /* Fog of war map: 35K */
    }
    if (*piVar6 == 0) {
        *piVar6 = FUN_100f1640(0xAE);       /* Unit class table: 174 bytes */
    }
    if (*piVar5 == 0) {
        *piVar5 = FUN_100f1640(22000);       /* Unit type table */
    }
    if (*piVar4 == 0) {
        *piVar4 = FUN_100f1640(0x2FCC);     /* GameState: ~12K */
    }
    if (*piVar3 == 0) {
        *piVar3 = FUN_100f1640(0x8880);     /* Map tiles: ~35K */
    }
    if (*piVar2 == 0) {
        *piVar2 = FUN_100f1640(0x4440);     /* Info panel data */
    }
    if (*piVar14 == 0) {
        *piVar14 = FUN_100f1640(0x3A);      /* Misc data: 58 bytes */
    }

    /* Create document helper object (0x1B4 bytes) */
    piVar14 = (int *)NewPtr_Thunk(0x1B4);
    if (piVar14 != NULL) {
        FUN_10073310(piVar14);
        /* Set vtable from TVect table */
        *piVar14 = 0; /* vtable from local_54 - 0x4DC */
        *(char *)(piVar14 + 0x28) = 0;
    }

    /* Attach document to application (puRam1011734c) */
    *(int *)puVar1 = (int)piVar14;

    /* Call document open method via vtable +0x538 */
    ResourceRead_Dispatch((int)piVar14 + (int)*(short *)(*piVar14 + 0x538));

    /* Register document with application */
    FUN_100bd55c(*(void **)puVar1);
}


/* =========================================================================
 * Resource Stream Helpers for File Types
 *
 * These small functions create TResourceStream objects for reading/writing
 * specific Warlords II file format sections.
 * ========================================================================= */

/*
 * OpenW2SCStream -- FUN_1007ec7c
 * Address: 0x1007ec7c, Size: 152 bytes
 *
 * Opens a W2SC (Scenario) resource stream for reading.
 * Disposes existing stream at docSelf+0x148, creates new one,
 * writes W2SC resource type, then calls stream method via vtable +0xA8.
 */
void OpenW2SCStream(int docSelf, int param_2)
{
    /* Dispose old stream handle */
    FUN_100f57c8(*(void **)(docSelf + 0x148));

    /* Create new resource handle */
    void *newHandle = FUN_100db3c8(0);
    *(int *)(docSelf + 0x148) = (int)newHandle;

    /* Write as W2SC resource type: 'W2SC' = 0x57325343 */
    FUN_100db49c(newHandle, 0x57325343,
                 0 /* app file ref */, 0, 0, 0, 1);

    /* Call stream read/open method via vtable +0xA8 */
    int *streamObj = *(int **)(docSelf + 0x148);
    ResourceRead_Dispatch((int)streamObj + (int)*(short *)(*streamObj + 0xA8), param_2);
}


/*
 * OpenW2TEStream -- FUN_1007ed14
 * Address: 0x1007ed14, Size: 152 bytes
 *
 * Opens a W2TE (Terrain) resource stream.
 * Same pattern as OpenW2SCStream but for terrain data.
 */
void OpenW2TEStream(int docSelf, int param_2)
{
    FUN_100f57c8(*(void **)(docSelf + 0x14C));

    void *newHandle = FUN_100db3c8(0);
    *(int *)(docSelf + 0x14C) = (int)newHandle;

    /* Write as W2TE resource type: 'W2TE' = 0x57325445 */
    FUN_100db49c(newHandle, 0x57325445,
                 0 /* app file ref */, 0, 0, 0, 1);

    int *streamObj = *(int **)(docSelf + 0x14C);
    ResourceRead_Dispatch((int)streamObj + (int)*(short *)(*streamObj + 0xA8), param_2);
}


/*
 * OpenW2ARStream -- FUN_1007edac
 * Address: 0x1007edac, Size: 152 bytes
 *
 * Opens a W2AR (Army/Unit definitions) resource stream.
 */
void OpenW2ARStream(int docSelf, int param_2)
{
    FUN_100f57c8(*(void **)(docSelf + 0x150));

    void *newHandle = FUN_100db3c8(0);
    *(int *)(docSelf + 0x150) = (int)newHandle;

    /* Write as W2AR resource type: 'W2AR' = 0x57324152 */
    FUN_100db49c(newHandle, 0x57324152,
                 0 /* app file ref */, 0, 0, 0, 1);

    int *streamObj = *(int **)(docSelf + 0x150);
    ResourceRead_Dispatch((int)streamObj + (int)*(short *)(*streamObj + 0xA8), param_2);
}


/* =========================================================================
 * Window Position Save/Restore
 *
 * FUN_1007c7b4 at 0x1007c7b4, Size: 1788 bytes
 *
 * Saves current window positions and visibility state to the "Wind"
 * resource (ID 1000) for persistence across sessions.
 *
 * Reads current rect/position from each of the 3 windows:
 *   - Main game window
 *   - Overview window
 *   - Info window
 * Stores visibility flags and window rects, then writes to resource.
 * ========================================================================= */
void SaveWindowPositions(void *self)
{
    /* Stub — FUN_1007c7b4 (1788 bytes)
     *
     * Key operations:
     * 1. Read current window rects for all 3 windows
     * 2. Read visibility state for each window
     * 3. Pack into "Wind" resource format:
     *    - Bytes 0x00-0x07: header
     *    - Bytes 0x08-0x14: main window rect (top, left, bottom, right)
     *    - Bytes 0x18-0x24: overview window rect
     *    - Byte  0x28: main window visible flag
     *    - Bytes 0x2C-0x38: info window rect
     * 4. Write "Wind" resource (ID 1000) via AddResource
     * 5. Write "Turn" resource with current turn state
     * 6. Dispose temporary handles
     *
     * Uses exception handling (FUN_10000090) for safe resource writes.
     */
}
