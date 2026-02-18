# Warlords II Reverse Engineering: Complete Framework & Function Catalog

## Executive Summary

| Metric | Count |
|--------|-------|
| Total functions decompiled | 4,614 (Ghidra extracted) / 4,717 (including failed) |
| Functions in xrefs.txt | 3,822 |
| Stubs/trampolines (<=24B) | 630 |
| Game-specific functions (0x10000000-0x100b0000) | 1,579 (~691KB) |
| MacApp framework functions (0x100b0000-0x10120000) | 2,034 (~413KB) |
| Warlords-specific classes identified | 71 |
| MacApp framework classes identified | ~80 |
| Menu command IDs mapped | 45+ |
| FUN_10117884 vtable dispatch calls | 5,724 |
| Main game data pointer (piRam1011735c) references | 740 |

---

## 1. Complete Class Hierarchy

### 1.1 Warlords-Specific Classes (71 total)

#### Core Application Classes
| Class | Binary String Address | Role |
|-------|----------------------|------|
| `TApplicationWarlords` | 0x1218AF | Main application class, subclass of TApplication |
| `TDocumentWarlords` | 0x123524 | Main game document - manages all game state |

#### Dialog Behavior Classes (23 total)
These are MacApp TBehavior subclasses that handle dialog interactions:

| Class | Binary String Address | Game Feature |
|-------|----------------------|-------------|
| `TCityDialogBehavior` | 0x1230F7 | City inspection/management dialog |
| `TBuildProdDialogBehavior` | 0x123124 | Build/production queue dialog |
| `TDiplomacyDialogBehavior` | 0x1290C3 | Diplomacy negotiation dialog |
| `TFightOrderDialogBehavior` | 0x129B80 | Pre-combat army ordering dialog |
| `TFightResultDialogBehavior` | 0x129C9E | Post-combat results display |
| `THeroInspectDialogBehavior` | 0x1283CA | Hero item/stat inspection |
| `TItemsDialogBehavior` | 0x1293BF | Hero item management dialog |
| `TPeaceDialogBehavior` | 0x12955C | Peace treaty/alliance dialog |
| `TRandomMapDialogBehavior` | 0x1265FD | Random map generation settings |
| `TSageDialogBehavior` | 0x1285CA | Sage advice/unit info dialog |
| `TSearchDialogBehavior` | 0x1285DE | Search ruins/temples dialog |
| `TStackDialogBehavior` | 0x1272D6 | Army stack management dialog |
| `TStartOfTurnBehavior` | 0x1273B8 | Start-of-turn notification/events |
| `TScenarioSelectDialogBehavior` | 0x126502 | Scenario file selection |
| `TGameOptionsDialogBehavior` | 0x126567 | Game options/preferences |
| `TGameSetupDialogBehavior` | 0x126520 | New game setup |
| `TSideSetupDialogBehavior` | 0x1265A9 | Player/side configuration |
| `THistoryDialogBehavior` | 0x123A25 | Game history/chronicle view |
| `TReportDialogBehavior` | 0x1250B1 | End-of-turn/production report |
| `TPictDismissDialogBehavior` | 0x12948B | Picture-based dismissable dialog |
| `TMenuShortcutsDialogBehavior` | 0x12A2DA | Keyboard shortcut customization |
| `TAboutBoxDialogBehavior` | 0x12980E | About box/credits |
| `TBetterDialogBehavior` | 0x122424 | Enhanced dialog base behavior |

#### Command Classes (5 total)
MacApp TCommand subclasses for undoable game actions:

| Class | Binary String Address | Size | Command ID | Role |
|-------|----------------------|------|-----------|------|
| `TMoveArmyCommand` | 0x12A163 | 0xB4 (180B) | 0x578/0x579 | Mouse-based army movement |
| `TMoveArmyByKeyCommand` | 0x12A175 | 0x108 (264B) | 0x57C | Keyboard-based army movement |
| `TNextLeaveGuardCommand` | 0x12A18C | 0xB4 (180B) | - | Next army / leave guard action |
| `TCancelPathCommand` | 0x12A1A4 | 0xB4 (180B) | - | Cancel planned movement path |
| `TDefinePathCommand` | 0x12A1B8 | 0xB4 (180B) | - | Define waypoint path |

Debug string found: `TMoveArmyByKeyCommand::AddMovement -- command should be done` (0x12A1E2)

#### View Classes (14 total)
MacApp TView subclasses for game display areas:

| Class | Binary String Address | Role |
|-------|----------------------|------|
| `TMapView` | 0x124026 | Main scrollable game map |
| `TOverviewView` | 0x12426C | Minimap/overview panel |
| `TTurnView` | 0x12792B | Turn counter/current player display |
| `TStackInfoView` | 0x1272EC | Army stack info panel |
| `TArmyBonusListView` | 0x1272C2 | Army bonus display list |
| `TProdView` | 0x12310C | City production display |
| `TFightOrderProdView` | 0x129B9A | Combat order/production hybrid view |
| `TItemListView` | 0x1283E7 | Hero item list |
| `TScenarioListView` | 0x1265D7 | Scenario file browser list |
| `TOptionsListView` | 0x126597 | Options list view |
| `TCharacterListView` | 0x1265C3 | Character/hero list |
| `TTargetBorderView` | 0x12F40A | Selection border around target |
| `TPicCopyView` | 0x12447C | Copyable picture display |
| `TDiplomPicCopyView` | 0x1290DC | Diplomacy picture view |

#### Custom Widget Classes (13 total)

| Class | Binary String Address | Role |
|-------|----------------------|------|
| `TArmyDragger` | 0x12A155 | Drag-and-drop army unit rearrangement |
| `TCityPicture` | 0x123116 | City image display widget |
| `TDiplomReportGrid` | 0x1290F0 | Diplomacy status grid |
| `TDiplomIconButton` | 0x129103 | Diplomacy icon button |
| `TButtonArea` | 0x122797 | Custom button region |
| `TSunkenText` | 0x12768B | Sunken-style text label |
| `TInfoArea` | 0x123D98 | Information display area |
| `TSideSymbol` | 0x1269BB | Player side icon/symbol |
| `TPlainPicture` | 0x12473A | Plain PICT display |
| `TProgressBar` | 0x1249F9 | Progress bar widget |
| `TLineGraph` | 0x123A3C | Line graph for history |
| `TBarGraph` | 0x125091 | Bar graph for reports |
| `THeroHire` | 0x1236CA | Hero hiring interface |

#### Utility/Enhancement Classes (16 total)

| Class | Binary String Address | Role |
|-------|----------------------|------|
| `TCmdKeyBehavior` | 0x127FD5 | Command-key shortcut behavior |
| `TBroadcastCmdKey` | 0x127FE5 | Broadcast keyboard shortcuts to views |
| `TBetterWindow` | 0x1223EA | Enhanced window class |
| `TBetterFloatWindow` | 0x1223F8 | Enhanced floating window |
| `TTripleSizeFloatWindow` | 0x12240C | 3x-size floating window |
| `TWholeRedrawScroller` | 0x127BD1 | Scroller that redraws entirely on scroll |
| `TCompressedFileStream` | 0x1296E7 | Compressed file I/O stream |
| `TSortedOptionsList` | 0x126554 | Sorted options list data structure |
| `TSortedFSSpecList` | 0x1265EA | Sorted file list for scenario browser |
| `TGameOptionsWindow` | 0x126583 | Game options window container |
| `TWhiteBackgroundAdorner` | 0x1210EA | White background adorner |
| `TGrayBackgroundAdorner` | 0x121104 | Gray background adorner |
| `TIconSuite` | 0x121210 | Icon suite display |
| `TPlotIcd` | 0x121232 | Plot/ICD display |
| `TFreeMeCommand` | 0x123348 | Self-freeing command |
| `TDoMenuG/THandleMenuG` | 0x123358/0x12336A | Menu command helper classes |

---

### 1.2 MacApp Framework Classes (~80)

Standard MacApp 3.x classes found in the binary:

**Core Framework:**
`TApplication`, `TDocument`, `TFileBasedDocument`, `TView`, `TWindow`, `TFloatWindow`, `TCommand`, `TBehavior`, `TDialogBehavior`, `TEventHandler`, `TCommandHandler`, `TObject`, `TList`, `TDynamicArray`, `TSortedDynamicArray`, `TSortedList`, `TSortedHandleList`, `TSortedLongintList`, `TLongintList`, `THandleList`

**UI Framework:**
`TScroller`, `TPrimaryScroller`, `TSecondaryScroller`, `TScrollBar`, `TGridView`, `TRunArrayGridView`, `TTextListView`, `TControl`, `TCheckBox`, `TPopup`, `TRadio`, `TButton`, `TCluster`, `TNumberText`, `TStaticText`, `TDialogViewCluster`, `TDialogViewControl`, `TTargetBorderView`, `TSmallIconPattern`, `TFloatingTEManager`

**Adorners (visual decorators):**
`TDrawAdorner`, `TEraseAdorner`, `TFrameAdorner`, `TShadowedFrameAdorner`, `THiliteAdorner`, `TDimAdorner`, `TSelectionAdorner`, `TResizeIconAdorner`, `TLineBottomAdorner`, `TOvalAdorner`, `TCompatibilityAdorner`

**Commands:**
`TQuitCommand`, `TNewDocumentCommand`, `TFilesCommand`, `TAboutBoxCommand`, `TSaveDocCommand`, `TRevertDocCommand`, `TCloseWindowCommand`, `TShowTearOffWindowCommand`, `TCellSelectCommand`, `TRowSelectCommand`, `TColumnSelectCommand`, `TServerCommand`, `TClientCommand`, `TEventRetrieverCommand`

**Views/Windows:**
`TViewServer`, `TViewTabber`, `TMultiWindowTabber`, `TMenuView`, `TTearOffMenuView`, `TDeskScrapView`, `TIncludeView`, `TTEView`

**Events/I/O:**
`TToolboxEvent`, `TAppleEvent`, `TEventList`, `TControlTracker`, `TGrabberTracker`, `TBusyCursor`, `TClipboardMgr`, `TFileHandler`, `TResourceStream`, `TCountingStream`, `TDrawingEnvironment`

**Designators:**
`TLinearDesignator`, `TRegionDesignator`, `TDependencySpace`, `TSimpleDependencySpace`, `TStandardDependencySpace`

---

## 2. TDocumentWarlords -- Complete Method Map

This is the central game class. All game state flows through it.

### 2.1 Key Virtual Methods Identified

The vtable dispatch `FUN_10117884(obj + (short)(vtable + offset))` pattern reveals these method slots:

| Vtable Offset | MacApp Method | Usage Count | Description |
|--------------|---------------|-------------|-------------|
| +0x0D8 | `Free` | 79 | Destructor/cleanup |
| +0x0E0 | `ShallowClone/Clone` | 156 | Object cloning |
| +0x100 | `Fields` | 164 | Introspection/debugging |
| +0x108 | `DoSetCursor` | 50 | Cursor shape change |
| +0x110 | `DoMenuCommand` | 393 | **Primary command dispatch** |
| +0x170 | `DoRead` | 69 | Read from file/stream |
| +0x178 | `DoWrite` | 59 | Write to file/stream |
| +0x200 | `PerformCommand` | -- | Execute a TCommand |
| +0x288 | `DoMakeViews` | 112 | Create UI hierarchy |
| +0x308 | `FindSubView` | 365 | Find view by 4-char ID |
| +0x320 | `DoSetupMenus` | -- | Enable/disable menu items |
| +0x328 | `Close` | 33 | Close window/document |
| +0x350 | `AddSubView` | -- | Add child view |
| +0x378 | `AddSeparatorSubView` | -- | Add separator |
| +0x3A8 | `GetExtent` | 96 | Get view dimensions |
| +0x400 | `TrackMouse` | -- | Mouse tracking |
| +0x4C8 | `ForceRedraw` | 60 | Invalidate + redraw |
| +0x4D0 | `Show` | 115 | Show/hide view |
| +0x5F0 | `GetScroller` | -- | Get scroll controller |
| +0x660 | `SetValue` | 47 | Set control value |
| +0x668 | `IsActive` | 34 | Active state query |
| +0x730 | `GetText/GetStaticText` | 57 | Get text content |
| +0x738 | `SetText/SetStaticText` | 180 | Set text content |
| +0x748 | `SetVisibility/SetDimmed` | 68 | Control visibility |
| +0x780 | `UpdateMapDisplay` | -- | Game-specific map update |
| +0x7C8 | `SetDescriptor` | 103 | Set text descriptor string |
| +0x7F8 | `GetTitle` | 46 | Get title text |
| +0x800 | `Open` | 97 | Open document |
| +0x810 | `AdjustMenus` | 97 | Enable/disable menus |
| +0x848 | `DoCutCopyPaste` | 40 | Edit commands |

### 2.2 TDocumentWarlords DoMenuCommand Dispatch (FUN_1007d168)

**Location:** FUN_1007d168 (3,436 bytes at 0x1007d168)
**Role:** Routes all menu commands to handler functions
**Parameters:** `(int *self, command_number)`

Complete command ID mapping:

| Cmd ID | Hex | Handler Function | Game Action |
|--------|-----|-----------------|-------------|
| 1000 | 0x3E8 | FUN_100410ec / inline | End Turn / Next Army |
| 1001 | 0x3E9 | -- | (Window view ID "0x3e9") |
| 1006 | 0x3EE | FUN_10065500 | Select Army by Index |
| 1007 | 0x3EF | FUN_10065d24 | Deselect Army |
| 1008 | 0x3F0 | FUN_10025758 | City Info (from index) |
| 1009 | 0x3F1 | FUN_1002f97c | Move to Coordinates |
| 1010 | 0x3F2 | FUN_1007ceb0 | Stack Management |
| 1011 | 0x3F3 | vtable dispatch | Create View (ID 3000) |
| 1012 | 0x3F4 | FUN_1002fe68 | Define Path |
| 1013 | 0x3F5 | FUN_1007ba3c | Cancel/Undo Action |
| 1014 | 0x3F6 | FUN_10025758 | City Info (from city list) |
| 1016 | 0x3F8 | FUN_10055408 | Army Details/Inspect |
| 1017 | 0x3F9 | FUN_1004bd0c | Production Dialog |
| 1018 | 0x3FA | multiple Show calls | Refresh All Views |
| 1019 | 0x3FB | FUN_10095330 | Search Ruins/Temples |
| 1020 | 0x3FC | FUN_1000c9c8 | Player Setup Cmd 1 |
| 1021 | 0x3FD | FUN_1000cafc | Player Setup Cmd 2 |
| 1022 | 0x3FE | FUN_1000cb54 | Player Setup Cmd 3 |
| 1023 | 0x3FF | FUN_1000cbb8 | Player Setup Cmd 4 |
| 1024 | 0x400 | FUN_1000cc08 | Player Setup Cmd 5 |
| 1025 | 0x401 | FUN_1000cc58 | Player Setup Cmd 6 |
| 1026 | 0x402 | FUN_1000cca8 | Player Setup Cmd 7 |
| 1027 | 0x403 | FUN_1000ccf8 | Player Setup Cmd 8 |
| 1028 | 0x404 | FUN_1000cd54 | Game Option Toggle 1 |
| 1029 | 0x405 | FUN_1000cda4 | Game Option Toggle 2 |
| 1030 | 0x406 | FUN_1000cdf4 | Game Option Toggle 3 |
| 1032 | 0x408 | FUN_1000ce88 | Game Option Toggle 5 |
| 1033 | 0x409 | FUN_1000ced8 | Game Option Toggle 6 |
| 1034 | 0x40A | FUN_1000cf28 | Game Option Toggle 7 |
| 1035 | 0x40B | FUN_1000d2e8 | Game Option Toggle 8 |
| 1036 | 0x40C | FUN_1000d334 | Game Option Toggle 9 |
| 1037 | 0x40D | FUN_1000d654 | Game Option Toggle 10 |
| 1038 | 0x40E | FUN_1000d7bc | Game Option Toggle 11 |
| 1039 | 0x40F | FUN_1000d808 | Game Option Toggle 12 |
| 1400 | 0x578 | Create TMoveArmyCommand (0xB4) | Mouse Army Move (group) |
| 1401 | 0x579 | Create TMoveArmyCommand (0xB4) | Mouse Army Move (single) |
| 1402 | 0x57A | FUN_1007c618 | Move to Overview Target |
| 1403 | 0x57B | FUN_10041cf8 | End Turn Processing |
| 1404 | 0x57C | Create TMoveArmyByKeyCommand (0x108) | Keyboard Army Move |
| 1405 | 0x57D | (same as 0x580) | Army Move (variant) |
| 1406 | 0x57E | (same as 0x580) | Army Move (variant) |
| 1408 | 0x580 | Create TMoveArmyCommand (0x1E0) | Army Move (full data) |
| 1409 | 0x581 | FUN_1003fe04 | Toggle Fog of War? |
| 1410 | 0x582 | FUN_1000848c | Center Map on Location |
| 1411 | 0x583 | FUN_100ae86c | AI Strategy Command |
| 1412 | 0x584 | FUN_1002171c | Game History |
| 1413 | 0x585 | FUN_1005bdb8 | Reports |
| 1414 | 0x586 | FUN_1002b4e0 | Unknown Action |
| 1500-1505 | 0x5DC-0x5E1 | FUN_10050a48 | Select Army Slot 0-5 |
| 1506 | 0x5E2 | FUN_1002656c | Army Bonus Display |
| 1507 | 0x5E3 | FUN_1004d0d0 | Items Dialog |
| 1600 | 0x640 | FUN_100950a4 | Scenario Select |
| 1601 | 0x641 | FUN_10033e7c | New Game |
| 1602 | 0x642 | FUN_100351ec | Random Map |
| 1603 | 0x643 | FUN_1005447c | About Box? |
| 1700 | 0x6A4 | FUN_1005ef84 | Map Zoom/View Mode |
| 1701 | 0x6A5 | FUN_1003a5fc | Save Game |
| 1702-1706 | 0x6A6-0x6AA | FUN_1007c6d8 | Scroll Map (directions) |
| 1707 | 0x6AB | FUN_1005e858 | Toggle Sound |
| 1800-1801 | 0x708-0x709 | FUN_10037fe4 | Player Next/Prev |
| 1802 | 0x70A | (same as 0x709) | Player switch |
| 1901 | 0x76D | FUN_1007b218 | Hero Inspect |
| 1903 | 0x76F | vtable chain | Side Panel Toggle |
| 1905 | 0x771 | vtable chain | Main Panel Toggle |
| 2102 | 0x836 | Create TNextLeaveGuardCommand | Army Slot Selection |

### 2.3 Keyboard Shortcut Handler

**Location:** Within FUN_10074288 (and related keyboard dispatch functions)

Keyboard shortcuts use four-character codes as identifiers:

| 4-Char Code | Hex | Action |
|-------------|-----|--------|
| "dele" | 0x64656C65 | Disband army/unit |
| "dipl" | 0x6469706C | Open diplomacy dialog |
| "leav" | 0x6C656176 | Leave guard/garrison |
| "guar" | 0x67756172 | Set guard mode |
| "grou" | 0x67726F75 | Group/ungroup armies |
| "dese" | 0x64657365 | Deselect current army |
| "arm0"-"arm5" | 0x61726D30-35 | Select army slot 0-5 |
| "che3"-"che7" | 0x63686533-37 | Hero chest/item slots |

---

## 3. FUN_1003e13c Analysis -- Main Game Window Setup

**Location:** 0x1003e13c, 5,420 bytes
**Role:** Creates and arranges the main game window with all subviews
**Confirmed Identity:** `TDocumentWarlords::DoMakeWindows` or `DoMakeViews`

### Key Operations:
1. Queries screen size (`FUN_100b08d4`) and adjusts for small screens (< 3MB, max 640x480)
2. Loads window resource via `FUN_10098320(stream, "Wind", 1000)` -- resource ID 1000
3. Reads saved window positions from "Wind" resource, with 3 window rects (main, overview, info)
4. Uses `FUN_100e16b8` / `FUN_100e12b8` / `FUN_100e1580` for rectangle calculations
5. Creates 3 main windows via `FUN_10117884(vtable+0xC8)`:
   - **Main game window** (piRam1011735c offset -0x1504): contains map, scrollers, turn view
   - **Overview window** (offset -0x16A0): minimap
   - **Info window** (offset -0x18FC): army/city info panel
6. Creates sub-views within windows:
   - "map " (0x6D617020) - main map scroll view
   - "over" (0x6F766572) - overview minimap
7. Calls `FUN_10075ee0` in a loop (4 iterations) to set up player views
8. If `param_2 != 0` (loading saved game), also calls:
   - `FUN_1003c838()` -- InitializePlayerTurn
   - `FUN_1003d4dc()` -- AdvanceToNextPlayer
   - `FUN_10064850(1,1)` -- UpdateMapDisplay
   - `FUN_1003c368()` -- RefreshGameState
9. Calls `FUN_1003d5d4()` -- SetupTurnIndicators
10. Shows/hides windows based on saved preferences
11. Calls `FUN_1003d6c4()` and `FUN_1003dc28()` for final display updates

### 4-Char View IDs Used in Game Windows:

| ID | Hex | View Purpose |
|----|-----|-------------|
| "Wind" | 0x57696E64 | Window resource type |
| "map " | 0x6D617020 | Main map view |
| "over" | 0x6F766572 | Overview/minimap view |
| "name" | 0x6E616D65 | Player/entity name text |
| "info" | 0x696E666F | Information panel |
| "buil" | 0x6275696C | Build/construction view |
| "prod" | 0x70726F64 | Production view |
| "vect" | 0x76656374 | Victory conditions view |
| "army" | 0x61726D79 | Army display view |
| "arm0"-"arm5" | 0x61726D30-35 | Individual army slots |
| "done" | 0x646F6E65 | Done/End Turn button |
| "ok  " | 0x6F6B2020 | OK button |
| "pict" | 0x70696374 | Picture view |
| "sid0"-"sid8" | 0x73696430-38 | Player side indicators |
| "List" | 0x4C697374 | List view |
| "str1"-"str6" | 0x73747231-36 | String text fields |
| "turn" | 0x7475726E | Turn counter display |
| "stac" | 0x73746163 | Stack view |
| "stat" | 0x73746174 | Status display |
| "side" | 0x73696465 | Side/player display |
| "targ" | 0x74617267 | Target indicator |
| "tbor" | 0x74626F72 | Target border |
| "view" | 0x76696577 | Generic view |
| "wind" | 0x77696E64 | Window subview |
| "winn" | 0x77696E6E | Winner display |
| "grou" | 0x67726F75 | Group control |
| "titl" | 0x7469746C | Title text |
| "time" | 0x74696D65 | Time display |
| "tune" | 0x74756E65 | Tune/music control |
| "soun" | 0x736F756E | Sound control |
| "spee" | 0x73706565 | Speed control |
| "terr" | 0x74657272 | Terrain type display |
| "xlat" | 0x786C6174 | Translation/locale |
| "DAT " | 0x44415420 | Data resource |
| "tran" | 0x7472616E | Transport mode |
| "take" | 0x74616B65 | Take action |
| "stop" | 0x73746F70 | Stop/cancel |

---

## 4. Warlords 2 Custom Resource Types

| Type Code | Hex | Purpose |
|-----------|-----|---------|
| "W2SG" | 0x57325347 | Saved Game file |
| "W2SC" | 0x57325343 | Scenario definition |
| "W2MS" | 0x57324D53 | Map Set data |
| "W2TE" | 0x57325445 | Terrain definitions |
| "W2AR" | 0x57324152 | Army/unit definitions |
| "W2CI" | 0x57324349 | City definitions |
| "W2SH" | 0x57325348 | Shortcut/hotkey config |
| "War2" | 0x57617232 | File type creator code |

Standard Mac resource types also used:
`PICT`, `STR#`, `STR `, `ALRT`, `DITL`, `MENU`, `CMNU`, `MBAR`, `CDEF`, `LDEF`, `MDEF`, `WDEF`, `DRVR`, `PACK`, `SICN`, `TEXT`, `TxSt`, `CLIP`, `View`, `PRNT`

Game-specific resource types:
`MAP `, `CTY `, `ITM `, `AI  `, `SCN `, `SCEN`, `GFX `, `HLP `, `DESC`, `DESG`, `CUST`, `CUSS`, `CARD`, `SGN `, `SPC `, `RD  `, `NAME`, `DAT `

---

## 5. Function Catalog by Address Range

### 5.1 Address Range 0x10000000-0x10010000: Import Trampolines & Early Init (698 functions)
- **564 stubs** (<=24B): Import trampolines to MacApp/Toolbox libraries
- **134 non-stub functions**: Early initialization, heap setup, basic utilities
- Key functions:
  - `FUN_10000090` (24B): Object initialization trampoline
  - `FUN_10000150` (24B): Cleanup trampoline
  - `FUN_10001bd8`: Resource reading utility
  - `FUN_10001e60`: Comparison utility (used in window setup)
  - `FUN_10001ef0`: Get global state object
  - `FUN_10003960` (232B): Game initialization helper
  - `FUN_10003ec8` (724B): Data structure initialization
  - `FUN_1000419c` (612B): Array/collection init
  - `FUN_10004400` (976B): Map data initialization
  - `FUN_100047d0` (492B): City data initialization
  - `FUN_100049bc` (664B): Army data initialization
  - `FUN_10004c54` (3860B): **Main data structure builder** -- calls all init functions
  - `FUN_10005f90` (7312B): **Full map view drawing** (confirmed)
  - `FUN_10007dd4`: Master initialization orchestrator
  - `FUN_10007f78`: Refresh main map
  - `FUN_1000848c`: Center map on coordinates
  - `FUN_10009520`: Helper for data initialization
  - `FUN_10009944`: Early game setup
  - `FUN_1000a12c`: Utility function
  - `FUN_1000a884` (212B): Frequently-called utility (39 callers)
  - `FUN_1000c9c8`-`FUN_1000d808`: **Player setup commands** (0x3FC-0x40F series)
  - `FUN_1000cc58`: Player setup command (cmd 0x401)
  - `FUN_1000de24` (2836B): Complex game state function

### 5.2 Address Range 0x10010000-0x10020000: Game Utilities & Data Loading (110 functions)
- All 110 are non-stub game logic functions
- Key functions:
  - `FUN_1001072c` (1028B): Data loading utility
  - `FUN_10010b30` (2468B): Complex data processing
  - `FUN_10011804` (2548B): Large data handling function
  - `FUN_10017cb4` (2088B): Data structure manipulation
  - `FUN_10019080` (1688B): Game data processing

### 5.3 Address Range 0x10020000-0x10030000: City/Production Management (109 functions)
- 101 non-stub, 8 stub
- Key functions:
  - `FUN_100230e8` (9392B estimated via next func): **City dialog setup/update** -- the largest function by line count. Creates subviews with IDs "name", "info", "buil", "prod", "vect"
  - `FUN_10025598`: City dialog helper
  - `FUN_1002565c` (252B): City window close/cleanup
  - `FUN_10025758`: City info display (called by cmd 0x3F0, 0x3F6)
  - `FUN_10025f94`: End-of-turn city processing
  - `FUN_1002656c`: Army bonus display (cmd 0x5E2)
  - `FUN_10026df4`: Diplomacy handler (called from "dipl" key)
  - `FUN_100266e4` (1804B): Complex city/production function
  - `FUN_1002869c` (1172B): City management (29 callees)
  - `FUN_10028e10` (3248B): **Major city/economy function** (34 callees)
  - `FUN_10029ac0` (780B): Game state update (25 callees)
  - `FUN_10029e84` (2528B): Complex economy function
  - `FUN_1002a864` (2508B): Economy/production processing
  - `FUN_1002b230`: Reference in window setup
  - `FUN_1002b4e0`: Unknown action (cmd 0x586)
  - `FUN_1002be50` (164B): Commonly used utility (31 callers)
  - `FUN_1002ce38`: Turn state helper
  - `FUN_1002cfbc` (1688B): City data processing
  - `FUN_1002dd8c` (2100B): City production calculation
  - `FUN_1002e7d4` (2496B): Economy calculation
  - `FUN_1002f194` (2024B): Income/gold processing
  - `FUN_1002f97c`: Move to coordinates (cmd 0x3F1)
  - `FUN_1002fd74`: Unknown handler (cmd 0x3F7)
  - `FUN_1002fe68`: Define path (cmd 0x3F4)

### 5.4 Address Range 0x10030000-0x10040000: Turn Processing & Window Setup (104 functions)
- 103 non-stub, 1 stub
- **Critical turn management functions:**
  - `FUN_100300e8` (876B): Turn state management
  - `FUN_10030454` (2024B): Turn processing
  - `FUN_10030e90` (556B): Turn data helper
  - `FUN_10031748` (2060B): Turn state update
  - `FUN_10032208` (1624B): Turn/player processing
  - `FUN_10032860`: View setup helper
  - `FUN_10033e7c`: **New Game** (cmd 0x641)
  - `FUN_1003357c`: Data lookup helper
  - `FUN_100351ec` (1768B): **Random Map** dialog (cmd 0x642)
  - `FUN_1003442c` (2152B): Game setup processing
  - `FUN_1003606c` (3280B): Complex game state function
  - `FUN_10036d3c` (1800B): Game state processing
  - `FUN_10037fe4`: Player switching (cmd 0x708-0x70A)
  - `FUN_10038890`: **SaveTurnState** (previously identified)
  - `FUN_10038c60`: Army movement/production helper
  - `FUN_1003956c` (1772B): Game state function
  - `FUN_1003a5fc`: **Save Game** (cmd 0x6A5)
  - `FUN_1003b9f8` (1648B): Game data processing
  - `FUN_1003c368`: **RefreshGameState** (after turn advance)
  - `FUN_1003c838`: **InitializePlayerTurn**
  - `FUN_1003cb84`: Turn processing helper
  - `FUN_1003d094`: Turn income/resource calculation
  - `FUN_1003d4dc` (244B): **AdvanceToNextPlayer** -- iterates player order array at offset 0x164, advances turn counter at offset 0x136
  - `FUN_1003d5d4` (240B): **SetupTurnIndicators**
  - `FUN_1003d6c4`: Turn display update
  - `FUN_1003dc28`: **Full display refresh** (called from many places)
  - `FUN_1003e0b0`: Pre-display setup
  - `FUN_1003e13c` (5420B): **DoMakeWindows** (main window setup -- analyzed in Section 3)
  - `FUN_1003f674` (116B): View refresh dispatcher (calls map/overview/minimap refresh)
  - `FUN_1003f6e8` (1660B): Game state display update
  - `FUN_1003fe04`: Toggle display option (cmd 0x581)
  - `FUN_1003ffa8`: Reference in display update

### 5.5 Address Range 0x10040000-0x10050000: Command Handlers & Game State (131 functions)
- 130 non-stub, 1 stub
- Key functions:
  - `FUN_10040040` (636B): Command handler
  - `FUN_10040408` (896B): Command handler
  - `FUN_10040da4` (532B): Game state handler
  - `FUN_100410ec`: **EndTurn/NextArmy** (cmd 0x3E8 inline handler)
  - `FUN_100416f4`: Display update reference
  - `FUN_100419b0`: Display reference
  - `FUN_10041cf8`: **End Turn Processing** (cmd 0x57B)
  - `FUN_10043248` (1884B): Complex game state function
  - `FUN_100453f0` (1752B): Major game logic (27 callees)
  - `FUN_10045520`: Game state helper
  - `FUN_100462c8` (212B): Frequently called utility (34 callers)
  - `FUN_100466d4` (1704B): Game logic function
  - `FUN_100472f4` (1792B): Game logic function
  - `FUN_10040fb8`: Display refresh reference
  - `FUN_1004a854` (1832B): Complex game function
  - `FUN_1004af7c`: Display reference
  - `FUN_1004b11c` (2932B): Major game function
  - `FUN_1004bd0c`: **Production Dialog** (cmd 0x3F9)
  - `FUN_1004c0b8` (4120B): **Major production management function**
  - `FUN_1004d0d0`: **Items Dialog** (cmd 0x5E3)
  - `FUN_1004e0f4` (228B): Production/army state query
  - `FUN_1004e384` (496B): Army slot selection logic

### 5.6 Address Range 0x10050000-0x10060000: Combat System & Army Management (125 functions)
- 123 non-stub, 2 stub
- **Combat system functions:**
  - `FUN_100501f4` (1596B): Combat calculation
  - `FUN_10050830` (536B): Combat helper
  - `FUN_10050a48`: **Select Army Slot** (cmd 0x5DC-0x5E1, param = slot index)
  - `FUN_10050c0c` (1008B): Army state function
  - `FUN_100523a8` (232B): Common utility (31 callers)
  - `FUN_100525a0`: Army type lookup (used in fight display)
  - `FUN_100539e8` (2708B): **Major combat function** (25 callees)
  - `FUN_1005447c`: About box? (cmd 0x643)
  - `FUN_10054d88` (1664B): Combat/army function (no callers -- virtual method)
  - `FUN_10055408`: **Army Details/Inspect** (cmd 0x3F8)
  - `FUN_10055f30`: Reference in display
  - `FUN_100562e0`: Display reference
  - `FUN_1005668c` (3240B): **Major combat processing**
  - `FUN_10057448` (936B): Combat helper (23 callees)
  - `FUN_100579f8`: Combat-related reference
  - `FUN_10057e5c` (1644B): Combat function
  - `FUN_10058c64` (3864B): **Combat display/animation** -- processes 8-army-slot fight results from offset arrays 0xA0-0xD0
  - `FUN_1005bdb8`: **Reports** (cmd 0x585)
  - `FUN_1005c7d0`: Display reference
  - `FUN_1005cc8c`: Minimap refresh
  - `FUN_1005cd18`: Group query function
  - `FUN_1005cffc`: Hero chest slot handler
  - `FUN_1005dd84` (2324B): Combat/army function
  - `FUN_1005e858`: **Toggle Sound** (cmd 0x6AB)
  - `FUN_1005ef84`: **Map Zoom/View Mode** (cmd 0x6A4)
  - `FUN_1005f230` (252B): Very common utility (98 callers)
  - `FUN_1005f678` (56B): Very common utility (51 callers)

### 5.7 Address Range 0x10060000-0x10070000: Map Rendering & Tile Drawing (140 functions)
- 135 non-stub, 5 stub
- **Map rendering system:**
  - `FUN_10060078` (1424B): Map tile renderer
  - `FUN_10060608` (3404B): **Main map rendering** (confirmed -- 30 callees)
  - `FUN_100614ac` (1236B): Map drawing helper
  - `FUN_10061a98` (1936B): Map view function
  - `FUN_10062968` (2360B): Map/terrain function
  - `FUN_10064850`: **UpdateMapDisplay** (called from turn processing)
  - `FUN_100651cc` (820B): Map update (25 callees)
  - `FUN_10065500`: **Select Army by Index** (cmd 0x3EE)
  - `FUN_10065b2c`: Map display reference
  - `FUN_10065d24`: **Deselect Army** (cmd 0x3EF)
  - `FUN_10066bf4` (140B): Map utility (32 callers)
  - `FUN_10066c80` (132B): Map utility (32 callers)
  - `FUN_100668a4` (848B): Major map/view function (33 callees)
  - `FUN_10067270` (76B): Common map utility (37 callers)
  - `FUN_1006a634` (2996B): **Complex map function** (no callers -- virtual method)
  - `FUN_1006cc0c` (1680B): Map rendering helper
  - `FUN_1006d740` (3344B): **Large map function** (no callers -- virtual Draw?)
  - `FUN_1006e450` (1904B): Map display function (no callers -- virtual method)
  - `FUN_1006eef8` (1284B): Map function (no callers)
  - `FUN_1006f3fc` (1312B): Map function (no callers)

### 5.8 Address Range 0x10070000-0x10080000: Save/Load, DoMenuCommand, Views (192 functions)
- 189 non-stub, 3 stub
- **Key functions:**
  - `FUN_10070cec` (632B): View helper
  - `FUN_10070f64` (768B): View helper
  - `FUN_1007149c` (524B): View helper
  - `FUN_10071a14` (1188B): View function (no callers -- virtual)
  - `FUN_100720d8` (1392B): View function (no callers -- virtual)
  - `FUN_10073250`: Turn processing helper
  - `FUN_10074288` (2884B): **DoRead/LoadGame** (57 callees, loads W2SG resource)
  - `FUN_10075570`: Army command helper
  - `FUN_10075ee0`: Player view setup (called in loop)
  - `FUN_10075f80`: Player view reference
  - `FUN_10077600` (1024B): View function (23 callees)
  - `FUN_1007723c`: Window positioning/setup function
  - `FUN_10078fa4`: Behavior init helper
  - `FUN_10079538`: Hero hire dialog init
  - `FUN_10079d98`: Sound handler init
  - `FUN_1007a0b0`-`FUN_1007a748`: Various init helpers
  - `FUN_1007a894` (referenced in cleanup): Object creation
  - `FUN_1007a95c`: Object setup
  - `FUN_1007b218`: **Hero Inspect** (cmd 0x76D)
  - `FUN_1007b52c`: Save/load reference
  - `FUN_1007ba3c` (1648B): **Cancel/Undo Action** (cmd 0x3F5, 14 callees)
  - `FUN_1007c1bc` (1116B): File/save function (no callers)
  - `FUN_1007c618`: **Move to Overview Target** (cmd 0x57A)
  - `FUN_1007c6d8`: **Scroll Map** (cmd 0x6A6-0x6AA)
  - `FUN_1007c714` (160B): Common utility (44 callers)
  - `FUN_1007c7b4` (1788B): Complex save/load
  - `FUN_1007ceb0`: **Stack Management** (cmd 0x3F2)
  - `FUN_1007d168` (3436B): **DoMenuCommand dispatcher** (63 callees -- analyzed in Section 2.2)
  - `FUN_1007e314` (1408B): Save/load function (no callers)
  - `FUN_1007f654` (1460B): View function (no callers)

### 5.9 Address Range 0x10080000-0x10090000: Dialog Behaviors & UI Handlers (179 functions)
- All 179 non-stub
- **Dialog system functions:**
  - `FUN_10080ad4` (540B): Dialog helper
  - `FUN_10080cf0` (756B): Dialog helper
  - `FUN_100810e8` (1992B): Dialog processing
  - `FUN_10082640` (1200B): Dialog function (25 callees, no callers -- virtual)
  - `FUN_10084ef0`: Object constructor (creates 0x90 byte objects)
  - `FUN_100847cc` (1264B): Dialog function (26 callees, no callers -- virtual)
  - `FUN_1008535c`: Dialog setup reference
  - `FUN_10085a0c` (1512B): Dialog handler (30 callees)
  - `FUN_10086a64` (1564B): Dialog function (23 callees, no callers)
  - `FUN_10087118` (1956B): Dialog function (23 callees, no callers -- virtual)
  - `FUN_100878fc` (2920B): **Major dialog handler** (23 callees)
  - `FUN_10088724` (2660B): Major dialog handler (22 callees)
  - `FUN_10089188`: Dialog reference
  - `FUN_10089d60`: Dialog reference
  - `FUN_1008a388` (2316B): Dialog function (18 callees, no callers)
  - `FUN_1008ae1c` (1708B): Dialog function (no callers)
  - `FUN_1008b804`: Dialog reference
  - `FUN_1008eb38` (1740B): Dialog function (14 callees, no callers)
  - `FUN_1008fb5c`: Dialog reference

### 5.10 Address Range 0x10090000-0x100a0000: Scenario/Setup Dialogs (231 functions)
- 230 non-stub, 1 stub
- **Setup and scenario functions:**
  - `FUN_100901a8` (756B): Setup helper
  - `FUN_1009150c` (716B): Setup helper
  - `FUN_10092080` (804B): Setup helper
  - `FUN_10092c5c` (3276B): **Major scenario/setup function**
  - `FUN_10093b00`-`FUN_100997964`: Various behavior init/cleanup pairs
  - `FUN_100950a4`: **Scenario Select** (cmd 0x640)
  - `FUN_10095330`: **Search Ruins/Temples** (cmd 0x3FB)
  - `FUN_10096ce0`-`FUN_10097108`: Additional init helpers
  - `FUN_1009716c` (1312B): Setup function (no callers)
  - `FUN_1009768c`-`FUN_10097974`: Init helper pairs
  - `FUN_10099abf0` (1824B): Scenario processing
  - `FUN_1009d3fc`: Pre-init helper
  - `FUN_1009d484` (1636B): Dialog function (19 callees, no callers)
  - `FUN_1009db24`-`FUN_1009e690`: More behavior init/cleanup pairs

### 5.11 Address Range 0x100a0000-0x100b0000: AI System (145 functions)
- All 145 non-stub
- **Artificial Intelligence functions:**
  - `FUN_100a1e50` (1216B): AI evaluation
  - `FUN_100a2310` (1036B): AI planning
  - `FUN_100a2a58` (616B): AI helper
  - `FUN_100a40bc` (2320B): AI decision processing
  - `FUN_100a4e0c` (1196B): AI handler (25 callees)
  - `FUN_100a52b8` (3496B): **Major AI function** (30 callees)
  - `FUN_100a8724` (1636B): AI evaluation
  - `FUN_100a8d88` (2208B): AI processing
  - `FUN_100ab368` (1660B): AI processing
  - `FUN_100abd8c`: AI tile evaluation helper (called from largest function)
  - `FUN_100ac0cc` (8412B): **THE LARGEST FUNCTION** -- AI strategic evaluation. Takes (x, y) map coordinates. Accesses the complete game state through map tile data at `offset * 0xE0 + x * 2`. Evaluates 8 army slots. Performs city/territory analysis with offsets 0x1602 (city count), 0x1604+N*0x42 (city records), 0x0711 (terrain passability). This is the AI's primary "evaluate board position" function.
  - `FUN_100ae86c`: **AI Strategy Command** (cmd 0x583)

---

## 6. Framework Function Analysis (0x100b0000-0x10120000)

### 6.1 Most Called Framework Functions

| Function | Size | Callers | Role |
|----------|------|---------|------|
| `FUN_100f56e4` | 36B | 349 | **malloc/NewObject** -- Memory allocation |
| `FUN_100db158` | 148B | 214 | **Lock handle** -- MacApp handle locking |
| `FUN_100db26c` | 56B | 170 | **Unlock handle** -- MacApp handle unlocking |
| `FUN_100db2f4` | 52B | 104 | **Get handle state** |
| `FUN_1005f230` | 252B | 98 | **String formatting utility** |
| `FUN_100b19f4` | 188B | 90 | **Pascal string copy** |
| `FUN_100c1c8c` | 128B | 84 | **Object comparison/matching** |
| `FUN_100f57c8` | 76B | 73 | **Free/dispose object** |
| `FUN_100ef510` | 56B | 53 | **Release resource** |
| `FUN_1005f678` | 56B | 51 | **String utility** |
| `FUN_100b02d0` | 84B | 47 | **Copy data block** |
| `FUN_1007c714` | 160B | 44 | **Accessor utility** |
| `FUN_100f1574` | 108B | 41 | **Resource loading** |
| `FUN_100d568c` | 140B | 33 | **TBehavior constructor** (creates TBehavior base) |
| `FUN_100c3d2c` | 164B | 32 | **TCommand constructor** (creates TCommand base, 0x30=48B) |
| `FUN_100c3df8` | - | - | **TCommand::ICommand** (initialize command with ID, target, flags) |
| `FUN_10117884` | 20B | 5724 | **Virtual method dispatch** -- PowerPC vtable call |

### 6.2 Key Framework Functions by Category

**Memory Management:**
- `FUN_100f56e4` (36B): malloc/NewObject (349 callers)
- `FUN_100f57c8` (76B): free/DisposeObject (73 callers)
- `FUN_100ef510` (56B): Release resource handle (53 callers)

**Object System:**
- `FUN_100d568c` (140B): TBehavior constructor
- `FUN_100d9034`: THandler base constructor
- `FUN_100c3d2c` (164B): TCommand constructor
- `FUN_100c6b2c`: Extended object constructor (0xBC bytes)
- `FUN_100bf518`: Simple object constructor (0x20 bytes)

**Handle/Memory Locking (critical for 68K/PPC MacOS):**
- `FUN_100db158` (148B): Lock handle (214 callers)
- `FUN_100db26c` (56B): Unlock handle (170 callers)
- `FUN_100db2f4` (52B): Get handle state (104 callers)
- `FUN_100db49c`: Resource I/O utility

**String/Text:**
- `FUN_1005f230` (252B): String formatting (98 callers)
- `FUN_100b19f4` (188B): Pascal string copy (90 callers)
- `FUN_1005f678` (56B): String utility (51 callers)
- `FUN_100b02d0` (84B): Block copy (47 callers)

**Drawing/Rendering:**
- `FUN_100e16b8`: Rect setup
- `FUN_100e12b8`: Rect calculation
- `FUN_100e1580`: Rect accessor
- `FUN_100e1a64`: Rect comparison
- `FUN_100e11fc`: Rect intersection test
- `FUN_100e10b0`: Rect construction
- `FUN_100e10f8`: Rect offset/inset
- `FUN_100e0f78`: Get view bounds
- `FUN_100ee64c` (212B): QuickDraw wrapper (39 callers)
- `FUN_100ee77c` (108B): QuickDraw wrapper (39 callers)

**Resource Streams:**
- `FUN_100981f8`: Open resource stream (80 bytes)
- `FUN_10098320`: Find resource by type+ID -- returns handle, used for "Wind" resource
- `FUN_100982e8`: Close/dispose resource stream
- `FUN_100985fc`: Resource stream variant

**File I/O:**
- `FUN_100b763c`: File read/open (for W2SG, W2SC files)
- `FUN_100db49c`: Resource write
- `FUN_100db500`: Resource read

**List/Collection:**
- `FUN_100f0538` (224B): List iteration (33 callers)
- `FUN_100b2578` (124B): List operation (33 callers)

**View System:**
- `FUN_101055f4` (108B): View utility (36 callers)
- `FUN_10105660` (36B): View utility (36 callers)
- `FUN_10105684` (36B): View utility (36 callers)

**Error Handling:**
- `FUN_100d8e3c`: Show error alert (takes error code, e.g., 0x89)
- `FUN_100d8e68`: Show error with detail (takes error code + detail value)

---

## 7. Virtual Method Dispatch System

### 7.1 How it Works

All virtual method calls go through `FUN_10117884` (20 bytes at 0x10117884):
```c
void FUN_10117884(void) {
    // r12 contains the function pointer from vtable resolution
    (*(code *)*in_r12)();
}
```

The calling pattern is:
```c
FUN_10117884(
    (int)object_ptr + (int)*(short *)(*(int *)object_ptr + vtable_offset),
    arg1, arg2, ...
);
```

This resolves to:
1. `*(int *)object_ptr` = vtable pointer (first field of object)
2. `vtable[offset]` = method slot (as short offset)
3. `object_ptr + method_slot` = actual function address
4. Call through r12

### 7.2 Complete Vtable Offset Map

| Offset | Calls | Likely MacApp Method |
|--------|-------|---------------------|
| 0x0D8 | 79 | `Free` |
| 0x0E0 | 156 | `ShallowClone` |
| 0x0E8 | 41 | `CloneData` |
| 0x0F0 | 55 | `ForEachSharedObject` |
| 0x100 | 164 | `Fields` (debug introspection) |
| 0x108 | 50 | `DoSetCursor` / `HandleCursor` |
| 0x110 | 393 | `DoMenuCommand` / `HandleMenu` |
| 0x120 | 36 | `DoSetupMenus` variant |
| 0x128 | 34 | `GetStandardHandler` |
| 0x138 | 39 | `GetTarget` |
| 0x170 | 69 | `DoRead` / `ReadData` |
| 0x178 | 59 | `DoWrite` / `WriteData` |
| 0x180 | 57 | `DoNeedDiskSpace` |
| 0x198 | 40 | `RevertData` |
| 0x200 | ~20 | `PerformCommand` |
| 0x288 | 112 | `DoMakeViews` |
| 0x2B8 | 57 | `CalcMinSize` |
| 0x308 | 365 | `FindSubView(fourCharID)` |
| 0x320 | ~30 | `DoHighlight` / `Open` |
| 0x328 | 33 | `Close` |
| 0x338 | ~20 | `SetTarget` |
| 0x350 | ~15 | `AddSubView` |
| 0x378 | ~10 | `AddSeparatorView` |
| 0x3A8 | 96 | `GetExtent` / `GetMinSize` |
| 0x400 | ~15 | `TrackMouse` |
| 0x4C8 | 60 | `ForceRedraw` |
| 0x4D0 | 115 | `Show` |
| 0x5F0 | ~10 | `GetScroller` |
| 0x660 | 47 | `SetValue` |
| 0x668 | 34 | `IsActive` / `GetActiveState` |
| 0x730 | 57 | `GetText` / `GetDescriptor` |
| 0x738 | 180 | `SetText` / `SetStaticText` |
| 0x748 | 68 | `SetVisibility` / `Dim` |
| 0x780 | ~15 | Game-specific: `UpdateMapDisplay` |
| 0x7A0 | 36 | `GetClickedItem` |
| 0x7C8 | 103 | `SetDescriptor` (text with format) |
| 0x7F8 | 46 | `GetTitle` |
| 0x800 | 97 | `Open` / `DoPostCreate` |
| 0x810 | 97 | `AdjustMenus` |
| 0x848 | 40 | `DoCutCopyPaste` |

---

## 8. Global Game State Structure

The primary game data pointer is `piRam1011735c` (740 references).

### 8.1 Game State Fields (offsets from *piRam1011735c)

| Offset | Type | Description |
|--------|------|-------------|
| 0x0D0+N*2 | short[8] | Player status array |
| 0x0110 | short | Current player index |
| 0x0118 | short | End-of-turn flag (set to 1 when turn boundary) |
| 0x0124 | short | Game state/phase flag |
| 0x0136 | short | Turn counter |
| 0x0138+N*2 | short[8] | Player active flags |
| 0x0164+N*2 | short[8] | Player turn order |
| 0x0174 | short | Current player order index |
| 0x01DE | short | Selected city index |
| 0x01E2 | short | Target X coordinate |
| 0x01E6 | short | Target Y coordinate |
| 0x01E9 | byte | Movement flag |
| 0x0224+N*0x14 | struct | Army unit data array |
| 0x0711+N | byte[] | Terrain passability table |
| 0x1146+N*0xC | struct | Player-city mapping |
| 0x1602 | short | Total city count |
| 0x1604+N*0x42 | struct | City records (66 bytes each) |
| 0x1608 | short | City name offset |

### 8.2 Other Key Global Pointers

| Global | References | Role |
|--------|-----------|------|
| `piRam1011735c` | 740 | Main game data pointer |
| `puRam10117370` | 277 | Player data/army pointer |
| `piRam10117360` | 142 | Army/unit data table |
| `piRam10117468` | 137 | Extended game data |
| `piRam1011734c` | 116 | View/window state |
| `piRam10117358` | 113 | Window object pointer |
| `piRam101176e0` | 111 | Overview/minimap data |
| `piRam101169c4` | 82 | Application object pointer |
| `piRam101175f0` | 54 | Dialog state |
| `piRam10117354` | 53 | Info panel pointer |
| `piRam101176bc` | 50 | View server pointer |

---

## 9. Event Flow: User Action to Game State Change

### 9.1 Mouse Click on Map -> Army Movement

```
1. MacApp event loop (TApplication::Run)
2. -> TApplication::ProcessEvent (FUN_10117884 dispatch)
3. -> TMapView::DoMouseDown (virtual method)
4. -> TDocumentWarlords::DoMenuCommand (FUN_1007d168)
      with cmd 0x578 (group move) or 0x579 (single)
5. -> Allocate TMoveArmyCommand (0xB4 bytes via FUN_100f56e4)
6. -> Initialize via FUN_100c3d2c (TCommand constructor)
7. -> Set vtable to TMoveArmyCommand vtable
8. -> Call FUN_100c3df8 (TCommand::ICommand) with cmd ID, target
9. -> Dispatch via PerformCommand (vtable+0x200)
10. -> TMoveArmyCommand::DoIt (modifies game state at piRam1011735c)
11. -> FUN_1003dc28 (refresh display)
12. -> FUN_10060608 (redraw map)
```

### 9.2 Keyboard Shortcut -> Army Movement

```
1. MacApp event loop
2. -> TCmdKeyBehavior::HandleKeyDown
3. -> TBroadcastCmdKey dispatches to active view
4. -> FUN_10074288 (keyboard shortcut handler)
      matches "dele", "dipl", "leav", "guar", "grou", etc.
5. -> For arrow keys / numpad: cmd 0x57C
6. -> Allocate TMoveArmyByKeyCommand (0x108 bytes)
7. -> FUN_100c3d2c + set vtable
8. -> FUN_100c3df8(cmd, 0x57C, doc, 1, 1, doc)
9. -> PerformCommand -> TMoveArmyByKeyCommand::DoIt
10. -> TMoveArmyByKeyCommand::AddMovement (may assert: "command should be done")
```

### 9.3 Turn End -> Next Player

```
1. User clicks "End Turn" or presses shortcut
2. -> DoMenuCommand with cmd 0x57B (1403)
3. -> FUN_10041cf8 (End Turn Processing)
4. -> FUN_1003d4dc (AdvanceToNextPlayer):
      a. Check turn boundary (offset 0x118)
      b. Increment turn counter (offset 0x136)
      c. Call FUN_1003c838 (InitializePlayerTurn)
      d. Call FUN_1003cb84 (process start-of-turn events)
      e. Call FUN_1003d094 (calculate income)
      f. Call FUN_10025f94 (process cities)
      g. Call FUN_1002ce38 (army upkeep)
      h. Call FUN_10038890 (SaveTurnState)
      i. Call FUN_10064850 (UpdateMapDisplay)
      j. Advance player order index (offset 0x174)
      k. Loop until finding an active player
5. -> Display refresh
```

---

## 10. CSoundHandler (Non-MacApp C++ Class)

**Not a MacApp class** -- uses C++ class with destructor, not TObject vtable.

Debug strings found:
- `CSoundHandler::~CSoundHandler -- fSoundChannel->nextChan != NULL` (0x127BEF)
- `CSoundHandler::~CSoundHandler -- fSoundChannel->firstMod != NULL` (0x127C30)
- `CSoundHandler::~CSoundHandler -- fSoundChannel->callBack != NULL` (0x127C73)
- `CSoundHandler::~CSoundHandler -- SndChannelStatus returned %d` (0x127CB6)
- `CSoundHandler::~CSoundHandler -- SndChannel is still busy` (0x127CF6)
- `CSoundHandler::~CSoundHandler -- SndDisposeChannel returned %d` (0x127D32)
- `CSoundHandler::PlaySound -- quietCmd returned %d` (0x127D73)
- `CSoundHandler::PlaySound -- ampCmd returned %d` (0x127DC8)
- `CSoundHandler::PlaySound -- SndPlay returned %d` (0x127DF7)

Uses Mac Sound Manager: `SndPlay`, `SndChannelStatus`, `SndDisposeChannel`, `quietCmd`, `ampCmd`.

Also uses QuickTime Tune system: `TuneSetHeader`, `TuneQueue`, `TuneGetStatus`, `TuneStop`, `TuneSetVolume`, `TunePreroll`, `TuneUnroll` for MIDI music playback.

---

## 11. TCompressedFileStream

Debug strings:
- `Trying to get the position in a TCompressedFileStream` (0x129720)
- `Trying to set the position in a TCompressedFileStream` (0x129720)

This is a custom TStream subclass for compressed file I/O, likely used for scenario files.

---

## 12. Remaining Unanalyzed Function Categories

### 12.1 Functions with No Callers (Virtual Methods -- 30 largest)

These are called exclusively through vtable dispatch (FUN_10117884) and represent core game logic:

| Function | Size | Callees | Likely Role |
|----------|------|---------|-------------|
| `FUN_1007d168` | 3436B | 63 | **DoMenuCommand** (confirmed) |
| `FUN_1006d740` | 3252B | 20 | TMapView::Draw or TOverviewView::Draw |
| `FUN_1006a634` | 2996B | 16 | TMapView::DoMouseDown or similar |
| `FUN_10101cac` | 2984B | 11 | Framework view method |
| `FUN_10114e58` | 2948B | 89 | **TDocumentWarlords::DoPostCreate** (confirmed - creates all behaviors) |
| `FUN_10074288` | 2500B | 57 | **Keyboard shortcut handler / DoRead** |
| `FUN_1008a388` | 2316B | 18 | Dialog behavior virtual method |
| `FUN_10087118` | 1944B | 23 | Dialog behavior virtual method |
| `FUN_1006e450` | 1812B | 10 | Map view virtual method |
| `FUN_1008ae1c` | 1708B | 4 | Dialog virtual method |
| `FUN_10054d88` | 1664B | 16 | Combat-related virtual method |
| `FUN_1008eb38` | 1644B | 14 | Dialog virtual method |
| `FUN_1009d484` | 1612B | 19 | Scenario dialog virtual method |
| `FUN_10086a64` | 1564B | 23 | Dialog virtual method |
| `FUN_100dfcd4` | 1520B | 11 | Framework virtual method |
| `FUN_100fbd5c` | 1504B | 18 | Framework virtual method |
| `FUN_100e3c08` | 1500B | 12 | Framework virtual method |
| `FUN_1007f654` | 1460B | 13 | View virtual method |
| `FUN_1007e314` | 1408B | 9 | Save/load virtual method |
| `FUN_100720d8` | 1392B | 20 | View virtual method |
| `FUN_1009716c` | 1312B | 8 | Setup dialog virtual method |
| `FUN_1006f3fc` | 1312B | 7 | Map virtual method |
| `FUN_1006eef8` | 1284B | 7 | Map virtual method |
| `FUN_100847cc` | 1264B | 26 | Dialog virtual method |
| `FUN_100e053c` | 1240B | 7 | Framework virtual method |
| `FUN_10082640` | 1200B | 25 | Dialog virtual method |
| `FUN_10071a14` | 1188B | 19 | View virtual method |
| `FUN_10108918` | 1172B | 14 | Framework virtual method |
| `FUN_1007c1bc` | 1116B | 10 | Save/load virtual method |
| `FUN_100e4c54` | 1104B | 6 | Framework virtual method |

### 12.2 Small but Important Game Functions

Functions in the 100-500B range that appear to be game-specific utilities:

- **0x10010000-0x100b0000**: 1,934 medium functions (101-500B)
- These include army stat calculations, terrain lookups, pathfinding helpers, diplomacy checks, production calculators, and UI update routines.

### 12.3 Estimated Coverage Summary

| Category | Functions | Bytes | Coverage Status |
|----------|-----------|-------|----------------|
| Import trampolines | 630 | ~15KB | Fully identified (MacOS/Toolbox imports) |
| Framework (MacApp) | 2,034 | ~413KB | Framework code, not game-specific |
| Game: Turn/Window (0x30000) | 104 | ~64KB | Well analyzed (turn system, window setup) |
| Game: Command/State (0x40000) | 131 | ~64KB | Partially analyzed (command handlers mapped) |
| Game: Combat/Army (0x50000) | 125 | ~64KB | Partially analyzed (combat flow identified) |
| Game: Map/Render (0x60000) | 140 | ~64KB | Well analyzed (rendering pipeline) |
| Game: Save/Menu/Views (0x70000) | 192 | ~64KB | Well analyzed (DoMenuCommand fully mapped) |
| Game: Dialogs (0x80000) | 179 | ~64KB | Partially analyzed (class assignments needed) |
| Game: Scenario/Setup (0x90000) | 231 | ~64KB | Partially analyzed |
| Game: AI (0xA0000) | 145 | ~64KB | Core function identified, details pending |
| Game: Init/Utilities (0x00000-0x20000) | ~320 | ~130KB | Partially analyzed |
| Game: City/Economy (0x20000) | 109 | ~63KB | Well analyzed (city dialog, economy) |

**Total game-specific non-stub functions: ~1,579**
**Functions with identified roles: ~300 (key functions and their callers)**
**Functions remaining purely unanalyzed: ~1,279 (mostly small 100-500B helpers)**

---

## 13. Key Findings and Architecture Summary

### 13.1 Application Architecture

```
TApplicationWarlords (singleton)
  |
  +-- TDocumentWarlords (main game document)
  |     |
  |     +-- Main Game Window (resource ID 1000)
  |     |     +-- TMapView ("map ") -- scrollable game map
  |     |     +-- TTurnView ("turn") -- turn counter/player
  |     |     +-- TStackInfoView ("stac") -- army stack info
  |     |     +-- TArmyBonusListView -- army bonuses
  |     |     +-- various buttons ("done", "ok  ", etc.)
  |     |
  |     +-- Overview Window
  |     |     +-- TOverviewView ("over") -- minimap
  |     |
  |     +-- Info Window
  |     |     +-- TProdView ("prod") -- production display
  |     |     +-- TTargetBorderView ("targ") -- selection border
  |     |
  |     +-- 23 Dialog Behaviors (attached to document)
  |     |     +-- TCityDialogBehavior
  |     |     +-- TDiplomacyDialogBehavior
  |     |     +-- TFightOrderDialogBehavior
  |     |     +-- ... (20 more)
  |     |
  |     +-- CSoundHandler (C++ class, not MacApp)
  |     +-- TCompressedFileStream (for scenario I/O)
  |     +-- Game state at piRam1011735c
  |
  +-- 5 TCommand subclasses for undoable actions
        +-- TMoveArmyCommand (mouse movement)
        +-- TMoveArmyByKeyCommand (keyboard movement)
        +-- TNextLeaveGuardCommand
        +-- TCancelPathCommand
        +-- TDefinePathCommand
```

### 13.2 Data Flow

```
Game State (piRam1011735c, ~6KB+ structure)
  |
  +-- Map tile data (via piRam10117360, accessed as 0xE0-byte rows)
  +-- City records (offset 0x1604, 0x42 bytes each)
  +-- Player data (8 players, various arrays)
  +-- Army unit data (offset 0x224, 0x14-byte records)
  +-- Terrain table (offset 0x711)
  +-- Turn/phase tracking (offsets 0x110, 0x118, 0x136, 0x174)
```

### 13.3 File Format Summary

| File Extension | Type Code | Resource Types Within |
|---------------|-----------|----------------------|
| .W2S | W2SG | Saved game state |
| .W2M | W2SC | Scenario definition (MAP, CTY, ITM, AI, SCN, SCEN) |
| - | W2AR | Army/unit type definitions |
| - | W2CI | City type definitions |
| - | W2TE | Terrain type definitions |
| - | W2MS | Map set grouping |
| - | W2SH | Keyboard shortcut configuration |

---

## 14. Remaining Work Needed

1. **AI Deep Analysis**: FUN_100ac0cc (8412B) needs detailed decompilation -- the AI evaluation logic is complex with multiple nested loops over map tiles and army positions.

2. **Combat Resolution**: The exact damage calculation formula needs tracing through FUN_100539e8 and FUN_1005668c.

3. **Dialog Behavior -> Function Mapping**: Each of the 23 dialog behaviors needs its virtual methods (DoItemClick, DoFieldChanged, DoDialogDismissed) mapped to specific functions in the 0x10080000-0x10090000 range.

4. **Pathfinding Algorithm**: The movement path calculation (used by TDefinePathCommand and TMoveArmyCommand) needs identification -- likely in the 0x10040000 range.

5. **Diplomacy System**: FUN_10026df4 (diplomacy handler) and TDiplomacyDialogBehavior methods need detailed analysis.

6. **Hero System**: Hero hiring (THeroHire at 0x1236CA), hero items (TItemsDialogBehavior), and hero stat effects need tracing.

7. **Random Map Generation**: Previously partially analyzed; the entry point from TRandomMapDialogBehavior to the generation algorithm needs full documentation.

8. **Network/Multiplayer**: The AOCE library imports and TAppleEvent usage suggest possible network play support that needs investigation.

9. **Small Helper Functions**: ~1,279 small game functions (100-500B) remain individually uncharacterized, though their roles can be inferred from caller context.
