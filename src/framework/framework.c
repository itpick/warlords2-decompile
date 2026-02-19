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
extern void ConstructCommand(void *cmd);                     /* TCommand base ctor (48B) */
extern void InitCommand(void *cmd, int cmdID,           /* TCommand::ICommand */
                          void *target, int a, int b, void *doc);
extern void *NewPtr_Thunk(int size);                      /* NewObject / malloc */
extern void  DisposeObject(void *ptr);                     /* DisposeObject / free */
extern void  ConstructBehavior(void *obj);                 /* TBehavior ctor */
extern void  ConstructSimpleObject(void *obj);             /* Simple object ctor (0x20B) */
extern void  ConstructExtendedObject(void *obj);           /* Extended object ctor (0xBCB) */
extern void  ConstructViewObject(void *obj);               /* View-based object ctor */
extern void  ConstructBaseObject(void *obj);               /* Another base ctor (0xB8B) */
extern void  ConstructDialogBehavior(void *obj);           /* Dialog behavior ctor (0x90B) */
extern void  ConstructDocumentHelper(void *obj);           /* Document helper ctor */

/* MacApp handle/memory management */
extern void  LockHandleRange(int hi, int lo);              /* Lock handle */
extern void  FocusObject(void);                          /* Unlock handle */
extern void  EndFocus(void);                          /* Get handle state */
extern void  MarkChanged(void);                          /* Set handle state */
extern void *NewResourceHandle(int mode);                      /* New resource handle */
extern void  WriteResourceData(void *h, unsigned long type,    /* Write resource */
                           int a, int b, int c, int d, int e);
extern void  AttachDocumentToApp(void *doc);               /* Attach doc to app */

/* MacApp TFileBasedDocument superclass methods */
extern void  SuperDoRead(int doc, void *fileSpec, char isNew);       /* TFileBasedDoc::IFileBasedDoc */
extern void  SuperDoWrite(int doc, void *fileSpec, char isNew);      /* TFileBasedDoc::DoWrite super */
extern void  SuperDoMenuCommand(void *self, int cmd);                /* TDocument::DoMenuCommand super */
extern void  SuperDoSetupMenus(int doc);                             /* TDocument::DoSetupMenus super */

/* MacApp resource/stream functions */
extern void  OpenResourceStream(void *buf, int flags);     /* Open resource stream */
extern void *FindResourceByType(void *buf, unsigned long type,  /* Find resource by type+ID */
                           short resID);
extern void  CloseResourceStream(void *buf);               /* Close resource stream */

/* MacApp utility functions */
extern int   AllocateBlock(int size);                      /* Allocate heap block */
extern void *AllocateHandle(int count);                     /* Allocate small block */
extern void  BuildPascalString(void *dst, int src);            /* Pascal string copy */
extern int   ConvertToString(int val);                     /* String conversion */
extern void  InitFrameworkGlobals(void);                   /* Framework init 1 */
extern int   CreateFrameworkContext(void *param);           /* Framework init 2 */
extern void  FinalizeFrameworkInit(void);                   /* Framework init 3 */
extern void  SetupFrameworkParams(int param);               /* Framework setup */
extern void  InitFrameworkSubsystems(void);                /* Framework setup 2 */
extern void  InitMenuBarSystem(void);                      /* Framework setup 3 */
extern void  InitDocumentSystem(void);                     /* Framework setup 4 */
extern void  InitWindowManager(void);                      /* Framework setup 5 */
extern void  InitEventSystem(void);                        /* Framework setup 6 */
extern void  ConfigureEventSystem(int param);               /* Framework setup 7 */
extern void  ShowErrorAlert(int errCode);                   /* Show error alert */
extern void  ShowErrorWithDetail(short code, int detail);   /* Show error with detail */
extern void  PostMenuCommand(int cmd, int param);           /* Post command */
extern void  ReleaseHandle_Mapgen(int param);                     /* Release resource */
extern void  FreeBlock(int param);                     /* Release resource variant */
extern void  GetScreenBounds(short *rect, int param);       /* Get screen size */
extern int   EnableMenuItem(int menuID, int enabled);       /* Enable/disable menu item */
extern int   IterateListItems(int param);                   /* List iteration */

/* MacApp error handling / exception */
extern int   TrySetjmp(void *exception_buf);           /* Try (setjmp) */
extern void  ThrowException(void);                         /* Throw (longjmp) */
extern void  ReleaseResource_Thunk(void *handle);                  /* Dispose handle */
extern char  GetHandleFlags(void *handle);                 /* Get handle flags */
extern int   GetTickCount(void);                          /* Get tick count */
#ifdef MODERN_BUILD
extern int   GetString(int offset, void *buf);         /* Read from offset */
#endif
extern int   GetHandleByteCount(void *handle);              /* Get handle size */
extern void  ReleaseHandle_Sound(void *handle);                  /* Release handle */
extern void  RestoreHandleFlags(void *handle, char flags); /* Restore handle flags */
extern void  CopyHandleData(int handle, void *out, int sz); /* Copy handle data */
extern int   GetHandleDataSize(int handle);                /* Get handle data size */
extern void  CopyDataToBuffer(int data, int buf, int sz);  /* Copy data to buffer */
#ifdef MODERN_BUILD
extern void  AddResource(void *h, unsigned long type,    /* Add resource */
                           short id, int data);
extern void  DetachResource(void *h);                       /* Lock resource handle */
#endif
extern void *GetResourceByTypeId(unsigned long type, short id);  /* Get named resource */

/* =========================================================================
 * Game Function Forward Declarations
 * (handlers called from DoMenuCommand dispatch)
 * ========================================================================= */

/* Command handlers -- game actions */
extern void  HandleEndTurn(void);                          /* EndTurn / NextArmy */
extern void  ProcessEndTurn(void);                         /* End Turn Processing */
extern void  SelectArmyByIndex(short playerIdx);           /* Select Army by Index */
extern void  DeselectArmy(short armyIdx);                  /* Deselect Army */
extern void  ShowCityInfo(short mode, short x, short y);   /* City Info */
extern void  MoveToCoordinates(short a, short x, short b, short y); /* Move to Coords */
extern void  HandleStackManagement(void *self);            /* Stack Management */
extern void  DefinePath(void);                             /* Define Path */
extern void  CancelUndoAction(void *self, int a, int b);   /* Cancel/Undo Action */
extern void  InspectArmyDetails(short cityIdx);            /* Army Details/Inspect */
extern void  HandleGuardCommand(char param);               /* Guard/Fortify handler (0x3F7) */
extern void  ShowProductionDialog(void);                   /* Production Dialog */
extern void  SearchRuinsTemples(void);                     /* Search Ruins/Temples */

/* Player setup commands (0x3FC-0x403) */
extern void  PlayerSetup_Cmd1(void);                       /* Player Setup Cmd 1 */
extern void  PlayerSetup_Cmd2(void);                       /* Player Setup Cmd 2 */
extern void  PlayerSetup_Cmd3(void);                       /* Player Setup Cmd 3 */
extern void  PlayerSetup_Cmd4(void);                       /* Player Setup Cmd 4 */
extern void  PlayerSetup_Cmd5(void);                       /* Player Setup Cmd 5 */
extern void  PlayerSetup_Cmd6(void);                       /* Player Setup Cmd 6 */
extern void  PlayerSetup_Cmd7(void);                       /* Player Setup Cmd 7 */
extern void  PlayerSetup_Cmd8(void);                       /* Player Setup Cmd 8 */

/* Game option toggles (0x404-0x40F) */
extern void  GameOption_Toggle1(void);                     /* Game Option Toggle 1 */
extern void  GameOption_Toggle2(void);                     /* Game Option Toggle 2 */
extern void  GameOption_Toggle3(void);                     /* Game Option Toggle 3 */
extern void  GameOption_Toggle4(void);                     /* Game Option Toggle 4 */
extern void  GameOption_Toggle5(void);                     /* Game Option Toggle 5 */
extern void  GameOption_Toggle6(void);                     /* Game Option Toggle 6 */
extern void  GameOption_Toggle7(void);                     /* Game Option Toggle 7 */
extern void  GameOption_Toggle8(void);                     /* Game Option Toggle 8 */
extern void  GameOption_Toggle9(void);                     /* Game Option Toggle 9 */
extern void  GameOption_Toggle10(void);                    /* Game Option Toggle 10 */
extern void  GameOption_Toggle11(void);                    /* Game Option Toggle 11 */
extern void  StartOfTurnProcessing(void);                  /* Start of turn / Game Option 12 */

/* High-number command handlers */
extern void  MoveToOverviewTarget(void *self, short x, short y);  /* Move to Overview Target */
extern void  ToggleFogOfWar(void);                         /* Toggle Fog of War */
extern void  CenterMapOnLocation(short x, short y);        /* Center Map on Location */
extern void  FullDisplayRefresh(void);                     /* Full Display Refresh */
extern void  HandleAIStrategy(void);                       /* AI Strategy Command */
extern void  ShowGameHistory(void);                        /* Game History */
extern void  ShowReports(void);                            /* Reports */
extern void  HandleDisbandAction(void);                    /* Disband Action (0x586) */
extern void  SelectArmySlot(short slotIdx);                /* Select Army Slot 0-5 */
extern void  ShowArmyBonus(void);                          /* Army Bonus Display */
extern void  ShowItemsDialog(void);                        /* Items Dialog */
extern void  ShowScenarioSelect(void);                     /* Scenario Select */
extern void  StartNewGame(void);                           /* New Game */
extern void  StartRandomMap(void);                         /* Random Map */
extern void  ScanDefenseGrid(void);                          /* About Box */
extern void  ToggleMapZoom(void);                          /* Map Zoom/View Mode */
extern void  SaveGameToFile(void);                         /* Save Game */
extern void  ScrollMapInDirection(void *self, int direction);     /* Scroll Map */
extern void  ToggleSoundEnabled(void);                     /* Toggle Sound */
extern void  SwitchToPlayer(short offset);                 /* Player Next/Prev */
extern void  InspectHero(void *self);                      /* Hero Inspect */
extern void  DispatchNextPhase(void *self, int cmdID);         /* Post-command utility */
extern void  RefreshAfterMenus(void);                      /* Display refresh after menus */
extern void  RestoreDisplayState(void);                    /* Restore display state */
extern void  SetPanelVisibility(int viewState, int panelID, int visible); /* Panel visibility */

/* Window management */
void SaveWindowPositions(void *self);                      /* Save/restore window positions */

/* Game state init / turn management */
extern void  LoadAndInitializeGame(void *param2, int a, char b, int c); /* LoadAndInitializeGame */

/* Behavior init functions (called from DoPostCreate) */
extern void  InitMapViewBehavior(void);
extern void  InitScenarioSelectBehavior(void);
extern void  InitTurnProcessBehavior(void);
extern void  InitFightOrderBehavior(void);
extern void  SetFightOrderParam(int param);
extern void  GetSoundActiveFlag(void);
extern void  SetSoundHandlerParam(int param);
extern void  InitSoundObjectBehavior(void);
extern void  InitMiscSetupBehavior(void);
extern void  InitScenarioListBehavior(void);
extern void  InitCityDialogBehavior(void);
extern void  InitStackDialogBehavior(void);
extern void  InitGameSetupBehavior(void);
extern void  SetGameSetupParam(int param);
extern void  InitDiplomacyBehavior(void);
extern void  InitPeaceDialogBehavior(void);
extern void  SetPeaceDialogParam(int param);
extern void  InitHistoryDialogBehavior(void);
extern void  SetHistoryDialogParam(int param);
extern void  InitSearchDialogBehavior(void);
extern void  SetSearchDialogParam(int param);
extern void  InitItemsDialogBehavior(void);
extern void  InitReportGridBehavior(void);
extern void  InitCityPictureBehavior(void);
extern void  InitRandomMapBehavior(void);
extern void  SetRandomMapParam(int param);
extern void  InitGameOptionsBehavior(void);
extern void  SetGameOptionsParam(int param);
extern void  InitBetterDialogBehavior(void);
extern void  SetBetterDialogParam(int param);
extern void  InitAIStrategyBehavior(void);
extern void  SetAIStrategyParam(int param);
extern void  InitHeroInspectBehavior(void);
extern void  InitSideSetupBehavior(void);
extern void  InitFightResultBehavior1(void);
extern void  SetFightResult1Param(int param);
extern void  InitFightResultBehavior2(void);
extern void  SetFightResult2Param(int param);
extern void  InitSageDialogBehavior(void);
extern void  SetSageDialogParam(int param);
extern void  InitMenuShortcutsBehavior(void);
extern void  SetMenuShortcutsParam(int param);
extern void  InitAboutBoxBehavior(void);
extern void  InitProductionBehavior(void);
extern void  SetProductionParam(int param);
extern void  InitDismissBehavior(void);
extern void  SetDismissParam(int param);
extern void  InitBuildProdBehavior(void);
extern void  SetBuildProdParam(int param);
extern void  InitStartOfTurnBehavior(void);
extern void  SetStartOfTurnParam(int param);
extern void  InitHeroHireBehavior(void);
extern void  SetHeroHireParam(int param);
extern void  InitCompressedStreamBehavior(void);
extern void  InitArmyDraggerBehavior(void);
extern void  InitReportDisplayBehavior(void);
extern void  InitScenarioProcessBehavior(void);
extern void  InitOptionsListBehavior(void);
extern void  InitCharacterListBehavior(void);
extern void  SetCharacterListParam(int param);
extern void  InitExtendedObjectBehavior(void);
extern void  InitFinalBehavior(void);
extern void  SetFinalBehaviorParam(int param);

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
 * DoMenuCommand at 0x1007d168, Size: 3436 bytes
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
 * (SuperDoMenuCommand -- MacApp superclass).
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
        HandleEndTurn();  /* EndTurn / NextArmy handler */
        return;

    /* ---- Select Army by Index (cmd 0x3EE) ---- */
    case 0x3EE:
        SelectArmyByIndex(*(short *)(*piRam1011735c + 0x110));
        return;

    /* ---- Deselect Army (cmd 0x3EF) ---- */
    case 0x3EF:
        DeselectArmy(*(short *)(self + 0x77));
        return;

    /* ---- City Info from city index (cmd 0x3F0) ---- */
    case 0x3F0: {
        int cityBase = *piRam1011735c + *(short *)((int)self + 0x1de) * 0x42;
        ShowCityInfo(2, *(short *)(cityBase + 0x1604), *(short *)(cityBase + 0x1606));
        return;
    }

    /* ---- Move to Coordinates (cmd 0x3F1) ---- */
    case 0x3F1:
        MoveToCoordinates(*(short *)(self + 0x78),
                     *(short *)((int)self + 0x1e2),
                     *(short *)(self + 0x79),
                     *(short *)((int)self + 0x1e6));
        return;

    /* ---- Stack Management (cmd 0x3F2) ---- */
    case 0x3F2:
        HandleStackManagement(self);
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
        DefinePath();
        return;

    /* ---- Cancel/Undo Action (cmd 0x3F5) ---- */
    case 0x3F5:
        CancelUndoAction(self, 1, 1);
        return;

    /* ---- City Info from city list (cmd 0x3F6) ---- */
    case 0x3F6: {
        int cityBase = *piRam1011735c + *(short *)((int)self + 0x1de) * 0x42;
        ShowCityInfo(0, *(short *)(cityBase + 0x1604), *(short *)(cityBase + 0x1606));
        return;
    }

    /* ---- Guard/Fortify handler (cmd 0x3F7) ---- */
    case 0x3F7:
        HandleGuardCommand(*(char *)(self + 0x7a));
        return;

    /* ---- Army Details/Inspect (cmd 0x3F8) ---- */
    case 0x3F8:
        InspectArmyDetails(*(short *)((int)self + 0x1de));
        return;

    /* ---- Production Dialog (cmd 0x3F9) ---- */
    case 0x3F9:
        ShowProductionDialog();
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
        SearchRuinsTemples();
        return;

    /* ---- Player Setup Commands (0x3FC-0x403) ---- */
    case 0x3FC:  PlayerSetup_Cmd1();  return;
    case 0x3FD:  PlayerSetup_Cmd2();  return;
    case 0x3FE:  PlayerSetup_Cmd3();  return;
    case 0x3FF:  PlayerSetup_Cmd4();  return;
    case 0x400:  PlayerSetup_Cmd5();  return;
    case 0x401:  PlayerSetup_Cmd6();  return;
    case 0x402:  PlayerSetup_Cmd7();  return;
    case 0x403:  PlayerSetup_Cmd8();  return;

    /* ---- Game Option Toggles (0x404-0x40F) ---- */
    case 0x404:  GameOption_Toggle1();  return;
    case 0x405:  GameOption_Toggle2();  return;
    case 0x406:  GameOption_Toggle3();  return;
    case 0x407:  GameOption_Toggle4();  return;
    case 0x408:  GameOption_Toggle5();  return;
    case 0x409:  GameOption_Toggle6();  return;
    case 0x40A:  GameOption_Toggle7();  return;
    case 0x40B:  GameOption_Toggle8();  return;
    case 0x40C:  GameOption_Toggle9();  return;
    case 0x40D:  GameOption_Toggle10();  return;
    case 0x40E:  GameOption_Toggle11();  return;
    case 0x40F:  StartOfTurnProcessing();  return;

    /* ---- Mouse Army Move: group (cmd 0x578) ---- */
    /* ---- Mouse Army Move: single (cmd 0x579) ---- */
    case 0x578:
    case 0x579:
        /* Allocate TMoveArmyCommand (0xB4 = 180 bytes) */
        newCmd = NewPtr_Thunk(0xB4);
        if (newCmd != NULL) {
            ConstructCommand(newCmd);                 /* TCommand base ctor */
            *(int *)newCmd = (int)((void **)tvect)[-0x437];  /* Set vtable */
            *(short *)((char *)newCmd + 0xB0) = 0;
        }
        InitCommand(newCmd, cmdNumber, self, 1, 1, self);
        *(short *)((char *)newCmd + 0xB0) = 0;
        /* PerformCommand(cmd) via vtable +0x200 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x200), (int)newCmd);
        return;

    /* ---- Move to Overview Target (cmd 0x57A) ---- */
    case 0x57A:
        MoveToOverviewTarget(self,
                     *(short *)(*piRam101176e0 + 0x12),
                     *(short *)(*piRam101176e0 + 0x14));
        return;

    /* ---- End Turn Processing (cmd 0x57B) ---- */
    case 0x57B:
        ProcessEndTurn();
        return;

    /* ---- Keyboard Army Move (cmd 0x57C) ---- */
    case 0x57C:
        /* Allocate TMoveArmyByKeyCommand (0x108 = 264 bytes) */
        newCmd = NewPtr_Thunk(0x108);
        if (newCmd != NULL) {
            ConstructCommand(newCmd);                 /* TCommand base ctor */
            *(int *)newCmd = (int)((void **)tvect)[-0x43a];  /* Set vtable */
            *(short *)((char *)newCmd + 0x30) = 0xFFFF;
            *(short *)((char *)newCmd + 0x32) = 0xFFFF;
            *(short *)((char *)newCmd + 0x104) = 0;
        }
        InitCommand(newCmd, 0x57C, self, 1, 1, self);
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
            ConstructCommand(newCmd);                 /* TCommand base ctor */
            *(int *)newCmd = (int)((void **)tvect)[-0x43c];  /* Set vtable */
            ((int *)newCmd)[0x0C] = 0;
            *(short *)((char *)newCmd + 0x104) = 0;
            *(short *)((char *)newCmd + 0x1D8) = 0;
            *(short *)((char *)newCmd + 0x1DA) = 0xFFFF;
            *(short *)((char *)newCmd + 0x1DC) = 0xFFFF;
        }
        InitCommand(newCmd, cmdNumber, self, 1, 1, self);
        ((int *)newCmd)[0x0C] = (int)self;
        *(short *)((char *)newCmd + 0x1DA) = 0xFFFF;
        *(short *)((char *)newCmd + 0x1DC) = 0xFFFF;
        /* PerformCommand(cmd) via vtable +0x200 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x200), (int)newCmd);
        return;

    /* ---- Toggle Fog of War (cmd 0x581) ---- */
    case 0x581:
        ToggleFogOfWar();
        return;

    /* ---- Center Map on Location (cmd 0x582) ---- */
    case 0x582:
        overviewData = *piRam101176e0;
        if (overviewData == 0) return;
        if (*(short *)(overviewData + 0x12) < 0) return;
        if (*(short *)(overviewData + 0x14) < 0) return;
        CenterMapOnLocation(*(short *)(overviewData + 0x12),
                     *(short *)(overviewData + 0x14));
        FullDisplayRefresh();
        return;

    /* ---- AI Strategy Command (cmd 0x583) ---- */
    case 0x583:
        HandleAIStrategy();
        return;

    /* ---- Game History (cmd 0x584) ---- */
    case 0x584:
        ShowGameHistory();
        return;

    /* ---- Reports (cmd 0x585) ---- */
    case 0x585:
        ShowReports();
        return;

    /* ---- Disband Action (cmd 0x586) ---- */
    case 0x586:
        HandleDisbandAction();
        return;

    /* ---- Select Army Slot 0 (cmd 0x5DC) ---- */
    case 0x5DC:
        SelectArmySlot((short)self[0x59] + -0x5DD);
        return;

    /* ---- Select Army Slot 1-5 (cmds 0x5DD-0x5E1) ---- */
    case 0x5DD:
    case 0x5DE:
    case 0x5DF:
    case 0x5E0:
    case 0x5E1:
        SelectArmySlot((short)cmdNumber + -0x5DD);
        return;

    /* ---- Army Bonus Display (cmd 0x5E2) ---- */
    case 0x5E2:
        ShowArmyBonus();
        return;

    /* ---- Items Dialog (cmd 0x5E3) ---- */
    case 0x5E3:
        ShowItemsDialog();
        return;

    /* ---- Scenario Select (cmd 0x640) ---- */
    case 0x640:
        ShowScenarioSelect();
        return;

    /* ---- New Game (cmd 0x641) ---- */
    case 0x641:
        StartNewGame();
        return;

    /* ---- Random Map (cmd 0x642) ---- */
    case 0x642:
        StartRandomMap();
        return;

    /* ---- About Box (cmd 0x643) ---- */
    case 0x643:
        ScanDefenseGrid();
        return;

    /* ---- Map Zoom/View Mode (cmd 0x6A4) ---- */
    case 0x6A4:
        ToggleMapZoom();
        return;

    /* ---- Save Game (cmd 0x6A5) ---- */
    case 0x6A5:
        SaveGameToFile();
        return;

    /* ---- Scroll Map in direction (cmds 0x6A6-0x6AA) ---- */
    case 0x6A6:
    case 0x6A7:
    case 0x6A8:
    case 0x6A9:
    case 0x6AA:
        ScrollMapInDirection(self, cmdNumber);
        return;

    /* ---- Toggle Sound (cmd 0x6AB) ---- */
    case 0x6AB:
        ToggleSoundEnabled();
        return;

    /* ---- Player Next (cmd 0x708) ---- */
    case 0x708:
        SwitchToPlayer((short)self[0x5a] + -0x709);
        return;

    /* ---- Player Prev/Switch (cmds 0x709-0x70D) ---- */
    case 0x709:
    case 0x70A:
    case 0x70B:
    case 0x70C:
    case 0x70D:
        SwitchToPlayer((short)cmdNumber + -0x709);
        return;

    /* ---- Menu command: Refresh Menus (cmd 0x76C) ---- */
    case 0x76C:
        /* DoSetupMenus via vtable +0x228 */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x228));
        /* SetTarget via vtable +0x38 with (0x76C, 0) */
        ResourceRead_Dispatch((int)self + (int)*(short *)(*self + 0x38), 0x76C, 0);
        RefreshAfterMenus();
        return;

    /* ---- Hero Inspect (cmd 0x76D) ---- */
    case 0x76D:
        InspectHero(self);
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
        SaveWindowPositions(self);
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
        SuperDoMenuCommand(self, cmdNumber);
        return;
    }
}


/* =========================================================================
 * TDocumentWarlords::DoRead (Load Document)
 *
 * DoReadDocument at 0x1007ded4, Size: 1076 bytes
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
    SuperDoRead(docSelf, fileSpec, isNew);

    /* Mark document as file-based */
    *(char *)(docSelf + 0x144) = 1;

    /* Allocate game state buffers if not yet present */
    if (*piVar5 == 0) {
        *piVar5 = AllocateBlock(0x2FCC);     /* GameState: ~12K */
    }
    if (*piVar4 == 0) {
        *piVar4 = AllocateBlock(0x8880);     /* MapTiles: ~35K */
    }
    if (*piVar6 == 0) {
        *piVar6 = AllocateBlock(22000);      /* UnitTypeTable */
    }
    if (*piVar3 == 0) {
        *piVar3 = AllocateBlock(0x4440);     /* Info panel data */
    }

    /* If this is a file-based document (not new), read saved data */
    if (*(char *)(docSelf + 0x16c) != '\0') {
        void *typeRes;

        /* Read "Type" resource (ID 1000) -- file type indicator */
        typeRes = GetResourceByTypeId(0x54797065, 1000);  /* 'Type' */
        if (typeRes != NULL) {
            if (1 < *(short *)*(int *)typeRes) {
                PostMenuCommand(0x3FC, 0);             /* Post setup command */
                LockHandleRange(0, 0x820000);          /* Lock handle */
            }
            ReleaseHandle_Sound(typeRes);                 /* Release handle */
        }

        /* CalcMinSize via vtable +0x2B8 */
        ResourceRead_Dispatch((int)fileSpec + (int)*(short *)(*fileSpec + 0x2B8));

        /* Read "Turn" resource (ID 1000) -- turn state indicator */
        typeRes = GetResourceByTypeId(0x5475726E, 1000);  /* 'Turn' */
        if (typeRes != NULL) {
            iVar10 = GetHandleByteCount(typeRes);
            if (iVar10 != 0 && *(char *)*(int *)typeRes == '\x01') {
                bTurnRestore = 1;  /* true */
            }
            if (!bTurnRestore) {
                int viewState = *piVar2;
                *(char *)(viewState + 0x9a) = 1;
                *(int *)(viewState + 0x9c) = GetTickCount();
            }
            ReleaseHandle_Sound(typeRes);
            uVar14 = 0;
        }

        /* CalcMinSize again */
        ResourceRead_Dispatch((int)fileSpec + (int)*(short *)(*fileSpec + 0x2B8));

        /* Read per-player "Mail" resources (IDs 1000-1007) */
        /* Stub -- DoReadDocument: reads Mail resources with exception handling */
        /* Original uses setjmp/TrySetjmp for exception safety */
        /* Reads 8 iterations: GetResourceByTypeId('Mail', i+1000) for i in 0..7 */
        /* Stores player mail data at docSelf + i*4 + 0x170 */

        /* Read "MKik" resource for multiplayer kick state */
        /* *(char *)(docSelf + 0x16f) = (GetResourceByTypeId('MKik', 1000) != 0) */
    }

    /* Initialize game from loaded data */
    LoadAndInitializeGame(fileSpec, 0, *(char *)(docSelf + 0x16c), !bTurnRestore);

    /* Center viewport if no pending game phase */
    iVar10 = *piVar5;
    if (*(short *)(iVar10 + 0x124) == 0 && *(char *)(*piVar2 + 0x9a) == '\0') {
        CenterMapOnLocation(*(short *)(iVar10 + 0x17e), *(short *)(iVar10 + 0x180));
    }

    /* Restore display state if turn was in progress */
    if (bTurnRestore) {
        RestoreDisplayState();
    }
    else if (*(char *)(docSelf + 0x16e) != '\0') {
        int viewState = *piVar2;
        if (*(char *)(viewState + 0x9a) != '\0') {
            *(char *)(viewState + 0x9a) = 1;
            *(int *)(viewState + 0x9c) = GetTickCount();
        }
    }
}


/* =========================================================================
 * TDocumentWarlords::DoWrite (Save Document)
 *
 * DoWriteDocument at 0x1007e894, Size: 1000 bytes
 *
 * Saves game state to file. Writes:
 *   - Game state via WriteGameStateCrossFormat or WriteGameState
 *   - "Type" resource (file type indicator, ID 1000)
 *   - Per-player "Mail" resources (IDs 1000-1007)
 *   - "MKik" resource (multiplayer kick state)
 *   - "Turn" resource (turn-in-progress indicator)
 *
 * Uses exception handling (TrySetjmp) for safe resource writes.
 * ========================================================================= */
void DoWriteDocument(int docSelf, int *fileSpec, char isNew)
{
    void *puVar4 = piRam10117370;
    int *piVar3  = (int *)puRam1011734c;
    char auStack_250[264];
    char auStack_144[256];

    /* Call superclass TFileBasedDocument::DoWrite */
    SuperDoWrite(docSelf, fileSpec, isNew);

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
            void *typeHandle = AllocateHandle(2);
            *(short *)*(int *)typeHandle = 1;
            /* AddResource(typeHandle, 'Type', 1000, ...) */
            /* ... resource write with error handling ... */
        }

        /* Write per-player "Mail" resources if multiplayer data present */
        if (*(char *)(docSelf + 0x16e) != '\0') {
            ResourceRead_Dispatch((int)fileSpec + (int)*(short *)(*fileSpec + 0x2B8));

            /* Write 8 player mail resources: 'Mail', IDs 1000-1007 */
            /* Stub -- mail resource write loop omitted */
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
                /* Stub -- Turn resource write omitted */
            }
        }
    }
}


/* =========================================================================
 * TDocumentWarlords::DoSetupMenus
 *
 * DoSetupMenus at 0x1007e314, Size: 1408 bytes
 *
 * Called by MacApp to enable/disable menu items based on current game state.
 * Manages menu visibility for:
 *   - File menu (Save, Revert)
 *   - Game menu (End Turn, Options)
 *   - Side panel visibility
 *   - View panels (side, overview, info)
 *
 * Calls superclass TDocument::DoSetupMenus first (SuperDoSetupMenus).
 * ========================================================================= */
void DoSetupMenus(int docSelf)
{
    int *piVar7 = piRam101176e0;
    int *piVar6 = (int *)puRam1011734c;
    int *piVar1 = gSidePanelWindow;
    int *piVar2 = gInfoWindow;
    int *piVar3 = gOverviewWindow;

    /* Call superclass DoSetupMenus */
    SuperDoSetupMenus(docSelf);

    /* If document is not file-based and view state has pending changes */
    if (*(char *)(docSelf + 0x16c) == '\0' && *(char *)(*piVar6 + 0x9a) != '\0') {
        /* Disable certain menus during non-file mode */
        EnableMenuItem(0x1F, 0);  /* Disable menu 0x1F */
        EnableMenuItem(0x1E, 0);  /* Disable menu 0x1E */
        EnableMenuItem(0x20, 0);  /* Disable menu 0x20 */
        EnableMenuItem(0x21, 0);  /* Disable menu 0x21 */
        EnableMenuItem(0x24, 0);  /* Disable menu 0x24 */
    }

    /* Set panel visibility state */
    if (*(char *)(*piVar6 + 0x99) == '\0') {
        /* Check side panel (0x76F) visibility */
        SetPanelVisibility(*piVar6, 0x76F, *piVar1 != 0);

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

        /* Stub -- overview and info panel visibility checks omitted */
        /* DoSetupMenus continues with similar IsActive checks for */
        /* overview window (gOverviewWindow) and info window (gInfoWindow) */
        /* Then enables/disables menus 0x76F, 0x770, 0x771 accordingly */
    }
}


/* =========================================================================
 * TDocumentWarlords::DoMakeWindows
 *
 * DoMakeWindows at 0x1003e13c, Size: 5420 bytes
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
 *   - ShuffleTurnOrder()       -- InitializePlayerTurn
 *   - AdvanceToNextPlayer()    -- AdvanceToNextPlayer
 *   - UpdateMapDisplay(1,1)    -- UpdateMapDisplay
 *   - GameInit()               -- RefreshGameState
 * ========================================================================= */
void DoMakeWindows(int docSelf, short param_2)
{
    /* Minimal DoMakeWindows implementation (original: 5420 bytes)
     *
     * Creates 3 windows and loads the menu bar so the app can display
     * something visible in SheepShaver. The original function performed
     * complex MacApp view hierarchy construction; this is a simplified
     * version that creates plain windows to prove the app boots.
     */
#ifndef MODERN_BUILD
    Rect    mainRect, overRect, infoRect;
    Handle  menuBar;

    /* Load menu bar from MBAR resource 128 (9 menus: Apple, File, Edit,
     * Orders, Reports, Heroes, View, History, Game) */
    menuBar = GetNewMBar(128);
    if (menuBar != NULL) {
        SetMenuBar(menuBar);
        DisposeHandle(menuBar);
        /* Populate Apple menu with desk accessories */
        AppendResMenu(GetMenuHandle(1), 'DRVR');
        DrawMenuBar();
    }

    /* Main game window — covers most of the screen */
    SetRect(&mainRect, 2, 40, 510, 382);
    *gMainGameWindow = (pint)NewCWindow(
        NULL, &mainRect,
        "\pWarlords II", true,
        documentProc, (WindowPtr)-1L, false, 0);

    /* Overview (minimap) window — top right */
    SetRect(&overRect, 514, 40, 638, 200);
    *gOverviewWindow = (pint)NewCWindow(
        NULL, &overRect,
        "\pOverview", true,
        documentProc, (WindowPtr)-1L, false, 0);

    /* Info panel window — below overview */
    SetRect(&infoRect, 514, 204, 638, 382);
    *gInfoWindow = (pint)NewCWindow(
        NULL, &infoRect,
        "\pInfo", true,
        documentProc, (WindowPtr)-1L, false, 0);

    /* If loading a saved game, initialize game state */
    if (param_2 != 0) {
        ShuffleTurnOrder();
        AdvanceToNextPlayer();
        UpdateMapDisplay(1, 1);
        GameInit();
    }
#endif /* MODERN_BUILD */
}


/* =========================================================================
 * TDocumentWarlords::DoPostCreate (Application Initialization)
 *
 * DoPostCreate at 0x10114e58, Size: 2948 bytes
 *
 * Called once during application startup. Initializes the MacApp framework,
 * creates all 23+ dialog behavior objects, allocates game data buffers,
 * and attaches the document to the application.
 *
 * Behavior creation pattern (repeated ~30 times):
 *   1. Check failure flag at *(local_54 - 0x528)
 *   2. Call behavior-specific init function (e.g., InitFightOrderBehavior)
 *   3. Allocate behavior object (NewPtr_Thunk with size)
 *   4. Call base constructor (ConstructBehavior for TBehavior,
 *      ConstructExtendedObject for extended, etc.)
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
    InitFrameworkGlobals();

    int iVar11 = CreateFrameworkContext(NULL /* tvect[-5] */);
    if (iVar11 == 0) {
        ShowErrorAlert(0x89);  /* Show error: initialization failed */
        return;
    }

    FinalizeFrameworkInit();

    /* Initialize framework data structure */
    *(short *)(iVar13 + 0x100) = 0;
    *(int *)(iVar13 + 0x104) = 0;
    *(int *)(iVar13 + 0x10c) = 0;
    *(int *)(iVar13 + 0x110) = 0;
    *(int *)(iVar13 + 0x108) = *(int *)puVar9;
    *(int *)puVar9 = iVar13;

    /* Exception-safe initialization */
    iVar11 = TrySetjmp((void *)iVar13);
    if (iVar11 != 0) {
        if (*(short *)(iVar13 + 0x100) != 0) {
            if (*(int *)(iVar13 + 0x104) == 0) {
                *(int *)(iVar13 + 0x104) = 0x820001;
            }
            ShowErrorWithDetail(*(short *)(iVar13 + 0x100), *(int *)(iVar13 + 0x104));
        }
        ThrowException();  /* longjmp / rethrow */
    }

    /* Core framework setup calls */
    SetupFrameworkParams(0x18);
    InitFrameworkSubsystems();
    InitMenuBarSystem();
    InitDocumentSystem();
    InitWindowManager();

    /* === Create Dialog Behaviors === */
    /* Each behavior follows the pattern: init function, allocate, construct, set vtable */

    /* Behavior 1: Map/game view setup */
    InitMapViewBehavior();

    /* Behavior 2: Scenario select (0x44 bytes, TBehavior) */
    InitScenarioSelectBehavior();
    /* Stub -- allocation + vtable set for each behavior */

    /* Behavior 3: Turn processing */
    InitTurnProcessBehavior();

    /* Behavior 4: Fight order dialog */
    InitFightOrderBehavior();
    SetFightOrderParam(0);

    /* Behavior 5: Sound handler */
    GetSoundActiveFlag();
    SetSoundHandlerParam(0);

    /* Behavior 6: Simple object (0x20 bytes) */
    InitSoundObjectBehavior();
    /* Allocate + ConstructSimpleObject ctor */

    /* Behavior 7: Misc setup */
    InitMiscSetupBehavior();

    /* Behavior 8: Scenario list (0x40 bytes, TBehavior) */
    InitScenarioListBehavior();

    /* Behavior 9: City dialog (0x90 bytes) */
    InitCityDialogBehavior();

    /* Behavior 10: Stack dialog (0x80 bytes) */
    InitStackDialogBehavior();

    /* Behavior 11: Game setup */
    InitGameSetupBehavior();
    SetGameSetupParam(0);

    /* Behavior 12: Diplomacy (0x40 bytes, TBehavior) */
    InitDiplomacyBehavior();

    /* Behavior 13: Peace dialog */
    InitPeaceDialogBehavior();
    SetPeaceDialogParam(0);

    /* Behavior 14: History dialog */
    InitHistoryDialogBehavior();
    SetHistoryDialogParam(0);

    /* Behavior 15: Search dialog */
    InitSearchDialogBehavior();
    SetSearchDialogParam(0);

    /* Behavior 16: Items dialog (0x40 bytes, TBehavior) */
    InitItemsDialogBehavior();

    /* Behavior 17: Report grid (0xB8 bytes) */
    InitReportGridBehavior();

    /* Behavior 18: City picture (0x1B4 bytes, extended) */
    InitCityPictureBehavior();

    /* Behavior 19: Random map */
    InitRandomMapBehavior();
    SetRandomMapParam(0);

    /* Behavior 20: Game options */
    InitGameOptionsBehavior();
    SetGameOptionsParam(0);

    /* Behavior 21: Better dialog */
    InitBetterDialogBehavior();
    SetBetterDialogParam(0);

    /* Behavior 22: AI strategy */
    InitAIStrategyBehavior();
    SetAIStrategyParam(0);

    /* Behavior 23: Hero inspect (0xAC bytes) */
    InitHeroInspectBehavior();

    /* Behavior 24: Side setup (0x44 bytes, TBehavior) */
    InitSideSetupBehavior();

    /* Behavior 25-26: Fight result dialogs */
    InitFightResultBehavior1();
    SetFightResult1Param(0);

    InitFightResultBehavior2();
    SetFightResult2Param(0);

    /* Behavior 27: Sage dialog */
    InitSageDialogBehavior();
    SetSageDialogParam(0);

    /* Behavior 28: Menu shortcuts */
    InitMenuShortcutsBehavior();
    SetMenuShortcutsParam(0);

    /* Behavior 29: About box (0x44 bytes, TBehavior) */
    InitAboutBoxBehavior();

    /* Behavior 30: Production dialog */
    InitProductionBehavior();
    SetProductionParam(0);

    /* Behavior 31: Dismiss dialog */
    InitDismissBehavior();
    SetDismissParam(0);

    /* Behavior 32: Build/prod dialog */
    InitBuildProdBehavior();
    SetBuildProdParam(0);

    /* Behavior 33: Start-of-turn */
    InitStartOfTurnBehavior();
    SetStartOfTurnParam(0);

    /* Behavior 34: Hero hire */
    InitHeroHireBehavior();
    SetHeroHireParam(0);

    /* Behavior 35: Compressed file stream (0xBC bytes) */
    InitCompressedStreamBehavior();

    /* Behavior 36: Army dragger (0x84 bytes) */
    InitArmyDraggerBehavior();

    /* Behavior 37: Report display (0xB8 bytes) */
    InitReportDisplayBehavior();

    /* Behavior 38: Scenario processing (0x40 bytes, TBehavior) */
    InitScenarioProcessBehavior();

    /* Behavior 39: Options list (0x80 bytes) */
    InitOptionsListBehavior();

    /* Behavior 40: Character list */
    InitCharacterListBehavior();
    SetCharacterListParam(0);

    /* Behavior 41: Extended object (0xA8 bytes) */
    InitExtendedObjectBehavior();

    /* Behavior 42: Last behavior */
    InitFinalBehavior();
    SetFinalBehaviorParam(0);

    /* === Allocate Game Data Buffers === */

    if (*piVar7 == 0) {
        *piVar7 = AllocateBlock(0x8880);     /* Fog of war map: 35K */
    }
    if (*piVar6 == 0) {
        *piVar6 = AllocateBlock(0xAE);       /* Unit class table: 174 bytes */
    }
    if (*piVar5 == 0) {
        *piVar5 = AllocateBlock(22000);       /* Unit type table */
    }
    if (*piVar4 == 0) {
        *piVar4 = AllocateBlock(0x2FCC);     /* GameState: ~12K */
    }
    if (*piVar3 == 0) {
        *piVar3 = AllocateBlock(0x8880);     /* Map tiles: ~35K */
    }
    if (*piVar2 == 0) {
        *piVar2 = AllocateBlock(0x4440);     /* Info panel data */
    }
    if (*piVar14 == 0) {
        *piVar14 = AllocateBlock(0x3A);      /* Misc data: 58 bytes */
    }

    /* Create document helper object (0x1B4 bytes) */
    piVar14 = (int *)NewPtr_Thunk(0x1B4);
    if (piVar14 != NULL) {
        ConstructDocumentHelper(piVar14);
        /* Set vtable from TVect table */
        *piVar14 = 0; /* vtable from local_54 - 0x4DC */
        *(char *)(piVar14 + 0x28) = 0;
    }

    /* Attach document to application (puRam1011734c) */
    *(int *)puVar1 = (int)piVar14;

    /* Call document open method via vtable +0x538 */
    ResourceRead_Dispatch((int)piVar14 + (int)*(short *)(*piVar14 + 0x538));

    /* Register document with application */
    AttachDocumentToApp(*(void **)puVar1);
}


/* =========================================================================
 * Resource Stream Helpers for File Types
 *
 * These small functions create TResourceStream objects for reading/writing
 * specific Warlords II file format sections.
 * ========================================================================= */

/*
 * OpenW2SCStream
 * Address: 0x1007ec7c, Size: 152 bytes
 *
 * Opens a W2SC (Scenario) resource stream for reading.
 * Disposes existing stream at docSelf+0x148, creates new one,
 * writes W2SC resource type, then calls stream method via vtable +0xA8.
 */
void OpenW2SCStream(int docSelf, int param_2)
{
    /* Dispose old stream handle */
    DisposeObject(*(void **)(docSelf + 0x148));

    /* Create new resource handle */
    void *newHandle = NewResourceHandle(0);
    *(int *)(docSelf + 0x148) = (int)newHandle;

    /* Write as W2SC resource type: 'W2SC' = 0x57325343 */
    WriteResourceData(newHandle, 0x57325343,
                 0 /* app file ref */, 0, 0, 0, 1);

    /* Call stream read/open method via vtable +0xA8 */
    int *streamObj = *(int **)(docSelf + 0x148);
    ResourceRead_Dispatch((int)streamObj + (int)*(short *)(*streamObj + 0xA8), param_2);
}


/*
 * OpenW2TEStream
 * Address: 0x1007ed14, Size: 152 bytes
 *
 * Opens a W2TE (Terrain) resource stream.
 * Same pattern as OpenW2SCStream but for terrain data.
 */
void OpenW2TEStream(int docSelf, int param_2)
{
    DisposeObject(*(void **)(docSelf + 0x14C));

    void *newHandle = NewResourceHandle(0);
    *(int *)(docSelf + 0x14C) = (int)newHandle;

    /* Write as W2TE resource type: 'W2TE' = 0x57325445 */
    WriteResourceData(newHandle, 0x57325445,
                 0 /* app file ref */, 0, 0, 0, 1);

    int *streamObj = *(int **)(docSelf + 0x14C);
    ResourceRead_Dispatch((int)streamObj + (int)*(short *)(*streamObj + 0xA8), param_2);
}


/*
 * OpenW2ARStream
 * Address: 0x1007edac, Size: 152 bytes
 *
 * Opens a W2AR (Army/Unit definitions) resource stream.
 */
void OpenW2ARStream(int docSelf, int param_2)
{
    DisposeObject(*(void **)(docSelf + 0x150));

    void *newHandle = NewResourceHandle(0);
    *(int *)(docSelf + 0x150) = (int)newHandle;

    /* Write as W2AR resource type: 'W2AR' = 0x57324152 */
    WriteResourceData(newHandle, 0x57324152,
                 0 /* app file ref */, 0, 0, 0, 1);

    int *streamObj = *(int **)(docSelf + 0x150);
    ResourceRead_Dispatch((int)streamObj + (int)*(short *)(*streamObj + 0xA8), param_2);
}


/* =========================================================================
 * Window Position Save/Restore
 *
 * SaveWindowPositions at 0x1007c7b4, Size: 1788 bytes
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
    /* Stub -- SaveWindowPositions (1788 bytes)
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
     * Uses exception handling (TrySetjmp) for safe resource writes.
     */
}
