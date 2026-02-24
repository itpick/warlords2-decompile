# Warlords II Resource File Catalog

Comprehensive catalog of all extracted resources from the Warlords II Mac OS application.

**Source:** `/resources/` directory from the original decompiled application
**Application Version:** 1.0.4 (release), (c) 1994 Strategic Studies Group
**Creator Code:** `War2` / File Type: `APPL`

---

## Summary Table

| Resource Type | Count | Location | Description |
|---|---|---|---|
| **alis** (Alias) | 14 | root `.bin` | Mac OS alias records pointing to external asset files |
| **CMNU** (Color Menu) | 15 | text/ | Menu bar definitions with command numbers |
| **MBAR** (Menu Bar) | 2 | text/ | Menu bar layouts |
| **MENU** | 1 | text/ | Standard menu (save dialog file type popup) |
| **ALRT** (Alert) | 20 | text/ | Alert dialog definitions |
| **DITL** (Dialog Items) | 21 | text/ | Dialog item lists |
| **DLOG** (Dialog) | 1 | text/ | Dialog template (custom save) |
| **CNTL** (Control) | 1 | text/ | Control definition (file type popup) |
| **WIND** (Window) | 1 | text/ | Window template |
| **STR#** (String List) | ~42 lists (~420 entries) | text/ | String tables for UI, game text, help |
| **STR** (Single String) | 3 | text/ | Individual strings |
| **View** | 74 | root `.bin` | MacApp View definitions (UI layouts) |
| **PICT** (Picture) | ~50 | graphics/ `.bmp` | Game artwork, backgrounds, UI graphics |
| **cicn** (Color Icon) | 77 | graphics/ `.bmp` | Small color icons for UI elements |
| **ICN#** (Icon Family) | 10 | icons/ `.icns` | Application/document type icons |
| **snd** (Sound) | 36 | audio/ `.wav/.mp3/.m4a` | Sound effects and voice clips |
| **Tune** (Music) | 26 | root `.bin` | QuickTime Musical Instruments (QTMI) music tracks |
| **Head** (Music Header) | 26 | root `.bin` | Headers for Tune resources |
| **DAT** (Data) | 7 | root `.bin` | Game data tables (strings, files, buttons, random maps) |
| **CARD** (Card) | 27 | root `.bin` | Random map tile pattern cards |
| **SHLD** (Shield) | 1 | root `.bin` | Shield set definition |
| **War2** | 1 | root `.bin` | Owner/creator resource (2 bytes) |
| **GFX** (Graphics Data) | 4 | root `.bin` | Help system graphics data |
| **HLP** (Help) | 1 | root `.bin` | Help text (40KB) |
| **Rgn** (Region) | 5 | root `.bin` | QuickDraw region definitions |
| **Roll** | 1 | root `.bin` | Player setup roller data |
| **Soun** (Sound Prefs) | 1 | root `.bin` | Sound preference defaults |
| **Shor** (Shortcut) | 1 | root `.bin` | Keyboard shortcut definitions |
| **Last** | 1 | root `.bin` | Last-used scenario path ("Tutoria") |
| **Prfl** (Profile) | 1 | root `.bin` | Preferences file spec |
| **NFNT** (Font) | 5 fonts | graphics/ `.bmp` | Bitmap font glyphs (Illuria + system) |
| **FOND** (Font Family) | 2 | root `.bin` | Font family records |
| **TxSt** (Text Style) | ~22 | text/ | Text style definitions (font, size, color) |
| **clut** (Color LUT) | 3 | root `.bin/.json/.act` | Color lookup tables |
| **pltt** (Palette) | 3 | root `.bin/.json/.act` | Color palettes (Main, Masking, B&W) |
| **cctb** (Ctrl Color) | 1 | root `.bin/.json/.act` | Control color table |
| **wctb** (Win Color) | 1 | root `.bin/.json/.act` | Window color table |
| **ppat** (Pixel Pattern) | ~12 | graphics/ `.bmp` | Pixel patterns (player colors, etc.) |
| **crsr** (Color Cursor) | ~26 | graphics/ `.bmp` | Color cursor images |
| **CURS** (Cursor) | ~20 | graphics/ `.bmp` | B&W cursor images |
| **acur** (Animated Cursor) | 1 | text/ | 8-frame animated wait cursor |
| **BNDL** (Bundle) | 1 | text/ | Application bundle (icon/file type mapping) |
| **FREF** (File Ref) | 10 | text/ | File type reference entries |
| **vers** | 1 | text/ | Version info: 1.0.4 |
| **cfrg** (Code Fragment) | 1 | text/ | PowerPC code fragment info |
| **hmnu** (Help Menu) | 3 | root `.bin` | Balloon help for menus |
| **hdlg** (Help Dialog) | 1 | root `.bin` | Balloon help for dialogs |
| **errs** (Errors) | 2 | text/ | Error code mapping |
| **CODE** | 3 | text/ | 68K code segment info |
| **WDEF** (Window Def) | 3 | text/ | Window definition procedures |
| **MDEF** (Menu Def) | 1 | text/ | Custom menu definition (Mercutio MDEF) |
| **seg!** | ~71 | text/ | Code segment names |
| **res!** | ~23 | text/ | Resource type names |
| **mem!** | 2 | text/ | Memory management info |
| **NAME** | ~18 | text/ | Resource names |
| **DESC** | ~27 | text/ | Resource descriptions |
| **DATA** | 1 | root `.bin` | MacApp framework data (20 bytes) |
| **DREL** | 1 | root `.bin` | MacApp relocation data (0 bytes) |
| **ZERO** | 1 | root `.bin` | Zero-filled resource (2 bytes) |
| **kind** | 1 | root `.bin` | File kind strings |
| **aedt** (Apple Event) | 1 | root `.bin` | Apple Event dispatch table |
| **ics#/ics4/ics8/icl4/icl8** | 10 each | graphics/ | Small/large icon variants |

**Total unique resource types:** ~55
**Total files across all directories:** ~1,750+

---

## Detailed Resource Catalog

---

### 1. alis (Alias) Resources -- External Asset References

These are Mac OS Alias Manager records that point to external data files the game expects to find on disk. All aliases originate from the volume "High Programmer's" with the base path `High Programmer's:SSG Games:Warlords II:`.

| ID | Filename Hint | Decoded Target Path | Type Code | Category |
|---|---|---|---|---|
| 1000 | Terrain_Terrain0 | `...Warlords II:Terrain:Grasslands Terrain` | W2TE | Terrain set |
| 1001 | Terrain_Terrain1 | `...Warlords II:Terrain:Ice Terrain` | W2TE | Terrain set |
| 1002 | Terrain_Terrain2 | `...Warlords II:Terrain:Mud Terrain` | W2TE | Terrain set |
| 2000 | Armies_AM | `...Warlords II:Armies:America Armies` | W2AR | Army set |
| 3000 | Cities_AM | `...Warlords II:Cities:America Cities` | W2CI | City set |
| 3001 | Cities_Conq | `...Warlords II:Cities:Conq Cities` | W2CI | City set |
| 3002 | Cities_Europa | `...Warlords II:Cities:Europa Cities` | W2CI | City set |
| 3003 | Cities_Hoggs | `...Warlords II:Cities:Hogg Cities` | W2CI | City set |
| 3004 | Cities_Invade | `...Warlords II:Cities:Invasion Cities` | W2CI | City set |
| 3005 | Cities_Land | `...Warlords II:Cities:Invasion Cities` | W2CI | City set (note: same as 3004) |
| 3006 | Cities_Roman | `...Warlords II:Cities:Roman Cities` | W2CI | City set |
| 3007 | Cities_Spectra | `...Warlords II:Cities:Spectra Cities` | W2CI | City set |
| 3008 | Cities_Star | `...Warlords II:Cities:Star Cities` | W2CI | City set |
| 4000 | Shields_AM | `...Warlords II:Shields:America Shields` | W2SH | Shield set |

**Key observations:**
- The game uses 3 terrain sets (Grasslands, Ice, Mud), 1 army set (America), 9 city sets, and 1 shield set
- All alias records reference folder `Terrain`, `Armies`, `Cities`, or `Shields` under the Warlords II directory
- alis 3005 (Cities_Land) actually resolves to the same path as 3004 (Invasion Cities) -- likely a bug or reuse
- Mac OS file type codes: W2TE (terrain), W2AR (armies), W2CI (cities), W2SH (shields)

---

### 2. File Type References (FREF)

| ID | File Type | Purpose |
|---|---|---|
| 128 | `APPL` | Warlords Application |
| 129 | `W2SG` | Warlords Save Game |
| 130 | `s2SG` | Warlords Stationery |
| 131 | `W2MS` | Warlords MS-DOS save? |
| 132 | `MooV` | QuickTime Movie |
| 133 | `W2SC` | Warlords Scenario |
| 134 | `W2TE` | Warlords Terrain |
| 135 | `W2AR` | Warlords Armies |
| 136 | `W2CI` | Warlords Cities |
| 137 | `W2SH` | Warlords Shields |

---

### 3. CMNU (Color Menu) Resources

#### MBAR 128 -- Main Game Menu Bar
Menu IDs in order: 1, 2, 3, 4, 5, 6, 7, 8, 9

#### MBAR 130 -- Setup Popup Menus
Menu IDs: 64, 65, 66, 67, 70

#### CMNU 1 -- Apple Menu
| Item | Key | Cmd# | Purpose |
|---|---|---|---|
| About ^0... | -- | 1 | About box |
| - | -- | -- | separator |

#### CMNU 2 -- File Menu
| Item | Key | Cmd# | Purpose |
|---|---|---|---|
| New | -- | 10 | New game |
| Open... | Cmd-O | 20 | Open saved game |
| - | | | |
| Close | Cmd-W | 31 | Close window |
| Save | Cmd-S | 30 | Save game |
| Save As... | -- | 32 | Save as new file |
| Revert | -- | 34 | Revert to saved |
| - | | | |
| Quit | Cmd-Q | 36 | Quit application |

#### CMNU 3 -- Edit Menu
| Item | Key | Cmd# |
|---|---|---|
| Undo | Cmd-Z | 101 |
| - | | |
| Cut | Cmd-X | 103 |
| Copy | Cmd-C | 104 |
| Paste | Cmd-V | 105 |
| Clear | -- | 106 |
| Select All | -- | 110 |

#### CMNU 4 -- Orders Menu
| Item | Key | Cmd# | Purpose |
|---|---|---|---|
| Group Stack | Cmd-G | 1400 | Group armies into stack |
| Ungroup | Shift-Cmd-G | 1401 | Ungroup stack |
| - | | | |
| Move Group | Cmd-M | 1402 | Move selected group |
| Move All Armies | Shift-Cmd-M | 1403 | Move all armies |
| Cancel Path | -- | 1404 | Cancel movement path |
| - | | | |
| Next Group | Cmd-N | 1405 | Select next group |
| Leave Group | Cmd-L | 1406 | Leave group behind |
| Defend | Cmd-; | 1407 | Set to defend |
| Deselect Group | -- | 1408 | Deselect |
| - | | | |
| Show current army | -- | 1409 | Center on current army |
| Show army's shadow | -- | 1410 | Show army destination |
| - | | | |
| Fight Order... | -- | 1411 | Set combat order |
| Disband Group | -- | 1412 | Disband armies |
| Change Signpost... | -- | 1413 | Edit signpost text |
| - | | | |
| Resign... | -- | 1414 | Resign from game |

#### CMNU 5 -- Reports Menu
| Item | Key | Cmd# |
|---|---|---|
| Show Report... | Cmd-R | 1500 |
| - | | |
| Armies... | -- | 1501 |
| Cities... | -- | 1502 |
| Gold... | -- | 1503 |
| Production... | -- | 1504 |
| Winning... | -- | 1505 |
| - | | |
| Diplomacy... | Shift-Cmd-D | 1506 |
| Quest... | Shift-Cmd-Q | 1507 |

#### CMNU 6 -- Heroes Menu
| Item | Key | Cmd# |
|---|---|---|
| Inspect Heroes... | Shift-Cmd-H | 1600 |
| Plant Flag | Shift-Cmd-P | 1601 |
| Hero Levels... | Shift-Cmd-L | 1602 |
| Search... | Shift-Cmd-S | 1603 |

#### CMNU 7 -- View Menu
| Item | Key | Cmd# |
|---|---|---|
| Army Bonuses... | Cmd-B | 1700 |
| Items... | Cmd-I | 1701 |
| - | | |
| Build... | -- | 1703 |
| Cities... | -- | 1702 |
| Production... | Cmd-P | 1704 |
| Vectoring... | -- | 1705 |
| Ruins... | Shift-Cmd-R | 1706 |
| Stack... | Cmd-K | 1707 |

#### CMNU 8 -- History Menu
| Item | Key | Cmd# |
|---|---|---|
| Show History... | Cmd-H | 1800 |
| - | | |
| Cities... | -- | 1801 |
| Gold... | -- | 1803 |
| Winners... | -- | 1804 |
| Events... | -- | 1802 |
| - | | |
| Triumphs... | Cmd-T | 1805 |

#### CMNU 9 -- Game Menu
| Item | Key | Cmd# |
|---|---|---|
| End Turn | Cmd-E | 1900 |
| Save and End Turn | Shift-Cmd-E | 1907 |
| - | | |
| Strategy Map | -- | 1903 |
| Control Window | -- | 1904 |
| Info Window | -- | 1905 |
| Clean Up Windows | -- | 1906 |
| - | | |
| Game Settings... | -- | 1901 |
| Sound Volumes... | -- | 1908 |
| Shortcuts... | -- | 1902 |

#### CMNU 64 -- Terrain Type Popup (dynamic)
Title: "Terrain Type:" -- items populated at runtime

#### CMNU 65 -- Army Set Popup
Default item: "Default" (cmd 2000)

#### CMNU 66 -- City Set Popup
Default item: "Default" (cmd 2000)

#### CMNU 67 -- Shield Set Popup
Default item: "Default" (cmd 2000)

#### CMNU 70 -- Computer Level Popup
| Item | Cmd# |
|---|---|
| Beginner | 2000 |
| Intermediate | 2000 |
| Advanced | 2000 |

#### CMNU 128 -- Buzzwords (MacApp internal)
Items: Army Selection (2100), Group Change (2102), Path Change (2101), Typing (120)

#### MENU 1500 -- Save File Type Popup
| Item |
|---|
| Macintosh Save Game |
| MS-DOS Save Game |

---

### 4. STR# (String List) Resources

#### STR# 128 -- Error Messages (33 strings)
System error messages used by MacApp framework:
```
[0]  of a program error
[1]  the disk is full
[2]  the disk is locked
[3]  there is not enough memory
[4]  of a disk error
[5]  the file is locked
[6]  the file is already in use or was left open
[7]  of a problem writing the print file
[8]  the printer could not be found
[9]  of a problem communicating with the printer
[10] its disk copy was deleted
[11] that document is currently open
[12] its disk copy was changed
[13] of a problem with the file server
[14] you do not have the necessary access privileges
[15] the selected printing resource could not be found
[16] of a problem with AppleTalk
[17] AppleTalk is not connected
[18] it is not the right kind of document
[19] the disk is not available
[20] there are too many files open
[21] the required resources were not found
[22] this feature is not implemented
[23] "^3", an internal component, is missing
[24] an internal component is missing
[25] the Edition Manager isn't initialized
[26] there is a problem accessing the edition
[27] the specified format is not in the edition
[28] the edition is not a publisher
[29] there is a problem specifying the edition
[30] end of file
[31] file not found
[32] the printer file is used by another application or the Chooser
```

#### STR# 129 -- Error Advice (7 strings)
```
[0] Use the "Get Info" command in the Finder to unlock the file.
[1] Use "Chooser" to select a printer and try again.
[2] Save using a different name, or close the document and try again.
[3] Try closing some windows and try again.
[4] Please contact the developer.
[5] Try closing the Chooser.
[6] Please contact the developer.
```

#### STR# 130 -- Action Verbs (11 strings)
```
[0]  start the application
[1]  save "^3"
[2]  revert to the previous version of "^3"
[3]  print "^3"
[4]  create a new document
[5]  open "^3"
[6]  save as "^3"
[7]  save a copy in "^3"
[8]  display the contents of the window
[9]  make the clipboard available inside the application
[10] make the clipboard available outside the application
```

#### STR# 250 -- UI Labels (18 strings)
```
[0]  Save this document as:
[1]  Save a copy in:
[2]  Show Clipboard
[3]  Hide Clipboard
[4]  Undo <<<>>>
[5]  Redo <<<>>>
[6]  Unable to display contents at the moment
[7]  untitled <<<>>>
[8]  closing
[9]  quitting
[10] Can't Undo
[11] save
[12] revert
[13] Hide Borders
[14] Show Borders
[15] Subscriber Options...
[16] Publisher Options...
[17] untitled
```

#### STR# 253 -- Control Type Names (11 strings)
```
[0] Clipboard
[1] Window
[2] button
[3] checkbox
[4] radio
[5] cluster
[6] popup:
[7] static text
[8] edit text
[9] 0
[10] (empty)
```

#### STR# 300 -- Validation Errors (5 strings)
```
[0] Invalid value
[1] The value is less than the allowed minimum
[2] The value is greater than the allowed maximum
[3] The value contains non-numeric characters
[4] The value contains too many characters
```

#### STR# 1000 -- Common Button Labels (8 strings)
```
[0] Cancel
[1] OK
[2] No
[3] Yes
[4] Done
[5] Quest
[6] Reject
[7] Close unsaved
```

#### STR# 1001 -- "Search for files?" Asset Types (5 strings)
```
[0] scenario
[1] terrain
[2] army
[3] city
[4] shield
```

#### STR# 1002 -- Directory Names (5 strings)
```
[0] :
[1] :Terrain:
[2] :Armies:
[3] :Cities:
[4] :Shields:
```

#### STR# 1005 -- Movement Mode Labels (3 strings)
```
[0] Group
[1] Move
[2] Group Move
```

#### STR# 1040 -- Credits (19 strings)
```
[0]  Credits
[1]  Addresses
[2]  Scenario
[3]  Macintosh Version
[4]  Game Design: Steve Fawkner, Roger Keating, Gregor Whiley and Ian Trout
[5]  Program Design:
[6]  Strategic Studies Group Inc.
[7]  Strategic Studies Group Pty Limited
[8]  E-Mail addresses:
[9]  CompuServe: 72662,3471
[10] Tel: 904 469 8880
[11] Infinity Windoid 2.5.1 by Troy Gaul (c) 1991-94 Infinity Systems
[12] This Program was written with MacApp: (c) 1985-1994 Apple Computer, Inc.
[13] Original Artwork:
[14] Warlords II (c) 1994 Strategic Studies Group Pty Limited
[15] 256 Color Artwork:
[16] Music: Steve Fawkner with Janeen Fawkner
[17] Tel: +61 2 819 7199
[18] Internet: 72662.3471@compuserve.com
```
Artists: Nick Stathopoulos (original), Jonn Gorden and Nick Stathopoulos (256 color), Steve Ford (scenario)

#### STR# 1060 -- E-mail Game (2 strings)
```
[0] E-mail games must be saved before they can be sent to the next player.
    Do you wish to save & mail the game, or to close the game unsaved and unsent?
[1] Save & Mail
```

#### STR# 2001 -- Menu Shortcut Button Labels (28 strings)
```
[0]  (header: Menu Shortcuts + list of default shortcut names)
[1]  Choose a menu item from the list below for each shortcut button
[2]  Move All          [17] Army
[3]  Disband           [18] City
[4]  Change            [19] Gold
[5]  View              [20] Production
[6]  Quest             [21] Winning
[7]  Build             [22] Heroes
[8]  City              [23] Plant
[9]  Production        [24] Hero
[10] Vectoring         [25] Search
[11] View              [26] End
[12-16] (History reports) [27] Save and
```

#### STR# 2002 -- AddressOMatic Labels / Player Names (24 strings)
```
[0-15] AddressOMatic UI labels (MacApp networking framework)
[16] Player 1    [20] Player 5
[17] Player 2    [21] Player 6
[18] Player 3    [22] Player 7
[19] Player 4    [23] Player 8
```

#### STR# 2010 -- Window Menu Names (6 strings)
```
[0] Show Strategy Map Window    [1] Hide Strategy Map Window
[2] Show Control Window         [3] Hide Control Window
[4] Show Info Window            [5] Hide Info Window
```

#### STR# 3000 -- Game Setup Dialog (3 strings)
```
[0] Game Setup
[1] Use Selected Scenario
[2] Use Random Map...
```

#### STR# 3010 -- Setup Options Labels (24 strings)
```
[0]  OK                     [12] City Set:
[1]  Cancel                 [13] Shield Set:
[2]  Water                  [14] Set Addresses
[3]  Hills                  [15] Set Addresses...
[4]  A Random World         [16] Sound Volume
[5]  Cities                 [17] Music
[6]  Forest                 [18] Cities can produce allies
[7]  Terrain Type:          [19] Game setup
[8]  Edit Options...        [20] More Choices
[9]  Select Random          [21] Fewer Choices
[10] Begin Game             [22] Sound
[11] Army Set:              [23] Speech
```

#### STR# 3020 -- Player Setup (14 strings)
```
[0]  1                      [7]  (empty)
[1]  I am the Greatest      [8]  Character
[2]  1                      [9]  E-mail game
[3]  Options                [10] Side to play
[4]  Warlord                [11] Computer Level
[5]  (empty)                [12] Knight
[6]  (empty)                [13] Lord
```

#### STR# 3021 -- Game Options (24 strings)
```
[0]  Neutral Cities         [12] Hidden Map
[1]  Affecting Difficulty   [13] Diplomacy
[2]  Quests                 [14] View Production
[3]  Average                [15] Not Affecting Difficulty
[4]  Strong                 [16] Random Turns
[5]  Active                 [17] Intense Combat
[6]  Razing Cities          [18] Quick Start
[7]  Always                 [19] Military Advisor
[8]  On Capture             [20] Male
[9]  Never                  [21] Female
[10] Game Options           [22] Delete Setting
[11] View Enemies           [23] Create New Setting
```

#### STR# 3022 -- Side Setup (5 strings)
```
[0] Side Setup    [3] Leader
[1] Side Name     [4] Description
[2] 1
```

#### STR# 3030 -- AI/Display Modes (5 strings)
```
[0] Human
[1] Enhanced
[2] Observe
[3] Fast Hidden map
[4] Speed Limit
```

#### STR# 3040 -- Player States (5 strings)
```
[0] Human
[1] Deceased!
[2] Settings
[3] PowerMac
[4] E-mail Game
```

#### STR# 3200 -- Hero/Diplomacy/City Labels (12 strings)
```
[0]  A Hero! / Drag armies instructions
[1]  1
[2]  Diplomatic Report
[3]  Hire               [8]  Near:
[4]  Don't Hire         [9]  Command:
[5]  Diplomatic Rating  [10] Experience:
[6]  arrow button instructions  [11] Currently Producing
[7]  Items in this scenario
```

#### STR# 3300 -- City Dialog Labels (17 strings)
```
[0]  OK/all/name/Prod/remains!/to produce!
[1]  Current:          [9]  See
[2]  Re                [10] Buy new army types
[3]  Raze              [11] Bonus
[4]  Build             [12] Unexplored
[5]  Next turn:        [13] Explored
[6]  Give the city...  [14] Temple
[7]  Burn it...        [15] Stronghold
[8]  Turn after:       [16] Build Production
```

#### STR# 3420 -- Resign Dialog (7 strings)
```
[0] Resign!
[1] Milord, this is a serious decision!
[2] Dost thou truly wish to give in to
[3] thy treacherous foes?
[4] Resign Graciously
[5] Keep Playing
[6] Resign Ungraciously
```

#### STR# 3600 -- Stack Info Labels (9 strings)
```
[0] Army Bonus    [4] Ungroup All    [7] Bonus
[1] Items         [5] Str            [8] Str
[2] Stack Info    [6] Move
[3] Group All
```

#### STR# 3800 -- City Capture Options (4 strings)
```
[0] Occupy
[1] Pillage
[2] Sack
[3] Raze
```

#### STR# 3900 -- Signpost (3 strings)
```
[0] A Signpost!
[1] Type a new message for
[2] this signpost.
```

#### STR# 4000 -- Hero Info (4 strings)
```
[0] Battle:
[1] Level:
[2] Items being carried
[3] On ground
```

#### STR# 4010 -- Hero Levels (7 strings)
```
[0] Hero Levels  [3] Exp     [6] Move
[1] Hero         [4] Needs
[2] Level        [5] Str
```

#### STR# 4100 -- Searching/Temple (2 strings)
```
[0] Searching
[1] Take it
```

#### STR# 4110 -- Bless (1 string)
```
[0] Bless
```

#### STR# 4120 -- Sage (4 strings)
```
[0] A Sage!
[1] Items
[2] Money
[3] Maps
```

#### STR# 4200 -- Quest (1 string)
```
[0] Quest
```

#### STR# 4300 -- Diplomacy (6 strings)
```
[0] Diplomatic Action / replies
[1] Diplomatic State
[2] Their Proposals
[3] Your offers and
[4] Action
[5] Report
```

#### STR# 4420 -- Military Advisor (1 string)
```
[0] Advisor!
```

#### STR# 4500 -- Peace Offer (7 strings)
```
[0] The other leaders offer you peace if you will but cease
[1] this merciless slaughter!
[2] An Offer of Peace!
[3] Stick their heads on poles at the city gate.
[4] Let the whole world know - it is MINE!
[5] Peace is not an option!
[6] Accept
```

#### STR# 4510 -- Victory (2 strings)
```
[0] Congratulations
[1] You have conquered the world!
```

#### STR# 4600 -- Fight Order (3 strings)
```
[0] Fighting Order
[1] 1.
[2] Reset
```

#### STR# 10000 -- Balloon Help (5 strings)
```
[0] No help yet for this item
[1-4] Help For Menu Title / First/Second/Third Menu Item
```

#### STR# 254 -- Balloon Help Strings (53 strings)
Detailed Mac Balloon Help text for File menu, Edit menu, and standard operations. Contains enabled/disabled state help for each menu item.

#### STR (Single Strings)
```
STR 1000: "Illuria"        (custom font name)
STR 1001: "Startup movie"  (QuickTime startup movie filename)
STR 2000: (empty)
```

---

### 5. DITL (Dialog Item List) Resources

#### Game-Specific Dialogs

| DITL ID | Purpose | Items |
|---|---|---|
| 1000 | "File not found" search dialog | OK, Cancel, icon, "The ^0 file '^1' could not be found. Do you wish to search for it?" |
| 1010 | 256-color suggestion | Yes, No, icon, "Warlords II will look better...set to display 256 colors...Would you like the screen changed?" |
| 1020 | Save game too new | OK, icon, "Warlords II cannot open this save game file because it is too new." |
| 1500 | Custom save dialog | Save, Cancel, Eject, Desktop, file list, edit text, "Save as:", file type popup (CNTL 1500) |
| 2000 | Group address error | OK, icon, "Warlords players cannot be given by Group addresses." |
| 2558 | PPC required | OK, "You need a Macintosh equipped with a PowerPC processor" |
| 3032 | E-mail turn notification | OK, icon, "It is now the ^0 turn. The game has been mailed on to ^1." |

#### MacApp Framework Dialogs

| DITL ID | Purpose |
|---|---|
| 128 | Generic error: "Could not ^2 because ^0. ^1" |
| 129 | Command error: "Could not complete the '^2' command because ^0." |
| 130 | Request error: "Could not complete your request because ^0." |
| 131 | Save changes: Save / Cancel / Don't Save |
| 132 | Revert confirmation |
| 133 | File changed on disk |
| 134 | Disk space warning (delete existing?) |
| 135 | File already open |
| 136 | Low memory warning |
| 137 | Hardware/software requirements not met |
| 138 | Read-only file warning |
| 150 | "Cannot add any more characters here." |
| 151 | "Cannot remember the styles..." |
| 300 | Validation error: "^0; previous value substituted." |

---

### 6. ALRT (Alert) Resources

20 alerts defined, all using auto-position `0x300A` (centered on main screen). Each ALRT references a DITL with the same ID for its content. Key alerts:

| ALRT ID | DITL ID | Purpose |
|---|---|---|
| 128-138 | 128-138 | MacApp standard errors, saves, reverts |
| 150-151 | 150-151 | Text overflow / style warnings |
| 300 | 300 | Validation error |
| 1000 | 1000 | File search prompt |
| 1010 | 1010 | 256-color suggestion |
| 1020 | 1020 | Save file version mismatch |
| 2000 | 2000 | Group address error |
| 3032 | 3032 | E-mail turn notification |
| 3114 | 2558 | PowerPC required |

---

### 7. DAT (Data) Resources

| ID | Name | Size | Purpose |
|---|---|---|---|
| 1000 | STRING | 14,152 bytes | **Master string table** -- all in-game text: defeat/victory messages, city dialog text, terrain descriptions, advisor quotes, combat bonus descriptions, loading messages, etc. This is the primary game text resource. |
| 1001 | ERROR | 128 bytes | Error message table: "Error - Cannot open scenario: %s", "Error - Cannot open file: %s", "Error - Cannot open mouse file: stand.pck" |
| 1002 | FILE | 4,563 bytes | **DOS file path table** -- maps resource IDs to DOS-version file paths. Contains paths for all PCK graphics, XMI music, 8SN sounds, DAT data files, GFX tutorial screens, save game paths, and random map files. Critical for understanding the DOS version's file layout. |
| 1003 | AREA | 378 bytes | **Screen area/layout definitions** -- binary data defining rectangular regions for different game views (main map, minimap, control panel, etc.). Contains coordinates and layout parameters. |
| 1004 | BUTTON | 15,411 bytes | **Button/control definitions** -- binary layout data for all button positions, sizes, and click regions in the game UI. |
| 1010 | RANDOM | 42,336 bytes | **Random map generation data** -- tile patterns, terrain distribution rules, and map generation parameters for the random map feature. |
| 1011 | RANDOM.ITM | 1,018 bytes | **Random map item table** -- defines the 39 items that can appear in ruins/temples on random maps, with their properties. |

**DAT 1011 Item List (39 items):**
```
Firesword, Icesword, Spear_of_Ank, Bow_of_Eldros, Lightsword,
Darksword, Staff_of_Might, Crown_of_Loriel, Sceptre_of_Loriel,
Orb_of_Loriel, Crimson_Banner, Horn_of_Ages, Ring_of_Power,
Staff_of_Ruling, Tome_of_War, Sword_of_Death, Berserker_Helm,
Gem_of_Attack, Horn_of_Siege, Shield_of_Courage, Troll_Helm,
Lock_of_Safety, Chimes_of_Safety, Armour_of_Gods, Wings_of_Flying,
Witch's_Broom, Wand_of_Flight, Magic_Carpet, Wings_of_the_Eagle,
Boots_of_Speed, Cup_of_Haste, Ring_of_Travel, Phantom_Steed,
Staff_of_Movement, Everful_Purse, Eldros's_Pouch, Okradon's_Pouch,
Silver_Purse, Horn_of_Plenty
```

Each item has a category number and bonus value (e.g., category 1 = combat bonus, 2 = command bonus, 5 = flight, 6 = movement, 7 = gold).

---

### 8. CARD (Card) Resources

27 resources, all exactly **103 bytes** each. Used for random map generation tile patterns.

| ID Range | Prefix | Count | Purpose |
|---|---|---|---|
| 1000-1008 | K000-K008 | 8 | K-series tile cards (land patterns?) |
| 2000-2008 | L000-L008 | 9 | L-series tile cards (lake/water patterns?) |
| 3000-3008 | W000-W008 | 9 | W-series tile cards (world/terrain mix?) |

Note: ID 1005 is missing from the K-series.

Each card contains byte patterns that define how terrain tiles should be arranged when generating random maps.

---

### 9. View Resources

74 MacApp View resources defining the UI layout for every game screen. Each View is a binary serialized MacApp TView hierarchy. See `docs/view_resources.md` for full decoded analysis.

| ID Range | Purpose |
|---|---|
| 200-300 | Application-level views (About box, main window frame) |
| 1000-1060 | Core game window views (main map, minimap, control panel, info window, status bar, shortcut buttons) |
| 2000-2010 | Help system views |
| 3000-3030 | Game setup dialog views |
| 3100 | Scenario list |
| 3200 | Hero recruitment / army arrangement |
| 3300-3310 | City management views |
| 3400-3420 | Army info / resign dialog |
| 3500-3510 | Stack info views |
| 3600-3620 | Army bonus / items views |
| 3700-3702 | Ruins views |
| 3800-3810 | City capture views |
| 3900 | Signpost dialog |
| 4000-4020 | Hero inspection views |
| 4100-4130 | Search / temple / sage / quest views |
| 4200 | Quest dialog |
| 4300-4302 | Diplomacy views |
| 4400-4420 | Medal / advisor views |
| 4500-4510 | Peace offer / victory views |
| 4600 | Fight order view |

---

### 10. snd (Sound) Resources

36 sounds, each provided in WAV, MP3, and M4A formats (108 audio files total).

#### Sound Effects
| ID | Name | Purpose |
|---|---|---|
| 1000 | ARMY | Army movement/selection sound |
| 1001 | ARMY2 | Alternative army sound |
| 1002 | CHORD | Musical chord (UI feedback) |
| 1003 | DING | Ding notification |
| 1004 | DRAMATIC | Dramatic event stinger |
| 1005 | ORCH | Orchestral stinger |
| 1006 | SPLASH | Splash/water sound |
| 1007 | TURN | Turn change notification |
| 1035 | WAR | Battle/war cry |

#### Voice Clips
| ID | Name | Purpose |
|---|---|---|
| 1008 | VBEGIN | Game beginning narration |
| 1009 | VGOLD00 | Gold event narration 1 |
| 1010 | VGOLD01 | Gold event narration 2 |
| 1011 | VGOLD01A | Gold event narration 3 |
| 1012 | VGREET0 | Greeting |
| 1013 | VHERO00 | Hero event narration 1 |
| 1014 | VHERO01 | Hero event narration 2 |
| 1015 | VLOSE05 | Loss narration (5% threshold) |
| 1016 | VLOSE10 | Loss narration (10%) |
| 1017 | VLOSE15 | Loss narration (15%) |
| 1018 | VLOSE20 | Loss narration (20%) |
| 1019 | VLOSE25 | Loss narration (25%) |
| 1020 | VLOSE35 | Loss narration (35%) |
| 1021 | VMESS00 | Message narration 1 |
| 1022 | VMESS01 | Message narration 2 |
| 1023 | VMESS02 | Message narration 3 |
| 1024 | VMESS03 | Message narration 4 |
| 1025 | VMOMENT | "One moment" narration |
| 1026 | VQUIT | Quit narration |
| 1027 | VWIN05 | Victory narration (5%) |
| 1028 | VWIN05A | Victory narration alt |
| 1029 | VWIN10 | Victory narration (10%) |
| 1030 | VWIN15 | Victory narration (15%) |
| 1031 | VWIN20 | Victory narration (20%) |
| 1032 | VWIN25 | Victory narration (25%) |
| 1033 | VWIN30 | Victory narration (30%) |
| 1034 | VWIN35 | Victory narration (35%) |

---

### 11. Tune/Head (Music) Resources

26 Tune resources (QuickTime Musical Instruments format) with matching Head resources.

| ID | Name | Tune Size | Head Size | Purpose |
|---|---|---|---|---|
| 1000 | RINT0 | 6,896 | 280 | In-game music track 0 |
| 1001 | RINT1 | 3,244 | 280 | In-game music track 1 |
| 1002 | RINT2 | 7,988 | 556 | In-game music track 2 |
| 1003 | RINT3 | 4,020 | 372 | In-game music track 3 |
| 1004 | RINT4 | 2,408 | 280 | In-game music track 4 |
| 1005 | RINT5 | 13,104 | 464 | In-game music track 5 |
| 1006 | RINT6 | 5,856 | 464 | In-game music track 6 |
| 1007 | RINT7 | 11,148 | 280 | In-game music track 7 |
| 1008 | RINT8 | 3,568 | 96 | In-game music track 8 |
| 1009 | RINT9 | 3,820 | 280 | In-game music track 9 |
| 1010 | RINT10 | 8,460 | 280 | In-game music track 10 |
| 1011 | RINT11 | 11,868 | 556 | In-game music track 11 |
| 1012 | RINT12 | 7,844 | 556 | In-game music track 12 |
| 1013 | RINT13 | 9,272 | 372 | In-game music track 13 |
| 1014 | RINT14 | 6,172 | 372 | In-game music track 14 |
| 1015 | RINT15 | 2,500 | 280 | In-game music track 15 |
| 1016 | RINT16 | 4,984 | 280 | In-game music track 16 |
| 1017 | RINT17 | 8,404 | 464 | In-game music track 17 |
| 1018 | RINT18 | 2,152 | 372 | In-game music track 18 |
| 1019 | RINT19 | 3,860 | 280 | In-game music track 19 |
| 1020 | RINT20 | 2,360 | 372 | In-game music track 20 |
| 1021 | RINT21 | 12,328 | 464 | In-game music track 21 |
| 1022 | RINT22 | 404 | 96 | In-game music track 22 (shortest) |
| 1023 | RINT23 | 4,412 | 280 | In-game music track 23 |
| 1024 | RSTARTUP | 13,600 | 372 | Startup/title screen music |
| 1025 | RANIM | 3,084 | 372 | Animation music |

The RINT names correspond to the DOS version's INT*.XMI files (DAT 1002 FILE mapping).

---

### 12. PICT (Picture) Resources

| ID | Name | Dimensions | Purpose |
|---|---|---|---|
| 1000 | (unnamed) | ~640x480 | Main game screen background |
| 1001 | MARBLE | ~640x480 | Marble texture tile (dialog backgrounds) |
| 1002 | (unnamed) | -- | UI element |
| 1003 | (unnamed) | -- | Game graphic |
| 1005 | (unnamed) | -- | Game graphic |
| 1007-1009 | (unnamed) | -- | UI elements |
| 1010 | (unnamed) | 317x324 | Loading screen: parchment scroll with Warlords II logo |
| 1011 | (unnamed) | 184x21 | Loading progress bar: ornate bar strip |
| 1012 | (unnamed) | 224x312 | Minimap ocean: blue gradient water background |
| 1013-1016 | (unnamed) | various | Game screen elements |
| 1020 | HELPGFX | -- | Help system graphics |
| 1041-1042 | (unnamed) | -- | UI elements |
| 1050 | (unnamed) | 309x431 | Talking head: horned helmet warrior (green chromakey bg) |
| 1051 | VOICEBIT | 160x141 | Eye animation strip for talking head blinking |
| 3000 | (unnamed) | ~640x480 | Scenario selection: crystal ball + dragon background |
| 3011 | (unnamed) | -- | Setup element |
| 3017 | Roller right | -- | Player setup roller graphic |
| 3100 | (unnamed) | ~640x480 | Turn splash background |
| 3200 | (unnamed) | ~320x240 | Hero hire background (male) |
| 3201 | (unnamed) | ~320x240 | Hero hire background (female) |
| 3300 | (unnamed) | -- | City management background |
| 3800 | (unnamed) | -- | City capture notification background |
| 4022 | LEVEL2 | -- | Hero level 2 portrait |
| 4023 | LEVEL3 | -- | Hero level 3 portrait |
| 4024 | LEVEL4 | -- | Hero level 4 portrait |
| 4100 | SEARCH | -- | Ruin search scene background |
| 4101 | TEMPLE | -- | Temple encounter background |
| 4300 | DIPLOM | -- | Diplomacy screen background |
| 4410-4413 | MEDAL0-3 | -- | Medal award artwork (one per tier) |
| 4420 | (unnamed) | -- | Military advisor wizard background |
| 4501 | (unnamed) | -- | Victory screen artwork |
| 4502 | (unnamed) | -- | Defeat screen artwork |
| 10002 | HIDDEN | -- | Hidden/fog-of-war map overlay |
| 10003 | WAR | -- | War declaration graphic |
| 10004 | ABITS | -- | Army sprite bits |
| 10005 | SPECBITS | -- | Special unit sprite bits |
| 10006 | POPUP | -- | Popup menu background |
| 10007 | POPUP2 | -- | Popup menu variant |
| 10008 | POPUP3 | -- | Popup menu variant |
| 10009 | HIDDENPP | 336x82 | 3D button edge pieces (magenta chromakey) |
| 10010 | ATRANS3 | -- | Army transparency mask |
| 10011 | STRAT | -- | Strategy map graphics |

See also: `docs/terrain_resources.md` for terrain file PICTs (30000-30037).

---

### 13. cicn (Color Icon) Resources

77 unique color icons used for buttons, army indicators, terrain features, and UI controls.

| ID Range | Count | Purpose |
|---|---|---|
| 1000-1020 | 20 | **Control panel icons** -- game UI buttons (army selection, movement, etc.) |
| 2000-2025 | 26 | **Army type icons** -- small icons for each army/unit type |
| 2050-2051 | 2 | Special army icons |
| 3020-3029 | 10 | **Face portraits** -- character/leader faces (NOT shield icons despite the ID range) |
| 3300-3303 | 4 | **City dialog icons** -- city status indicators |
| 3310, 3320-3321 | 3 | City production/status icons |
| 3500-3507 | 8 | **Stack info icons** -- army stack display icons |
| 3700-3701 | 2 | Ruins/search icons |
| 4300-4302 | 3 | **Diplomacy icons** -- diplomatic state indicators |

---

### 14. ICN# (Icon Family) Resources

10 icon families for the Finder, defining how the application and its documents appear on the Mac desktop. Each icon has ICN#, ics#, ics4, ics8, icl4, icl8 variants.

| ID | Purpose |
|---|---|
| 128 | Application icon (Warlords II.app) |
| 129 | Save game document (W2SG) |
| 130 | Stationery document (s2SG) |
| 131 | MS-DOS save game (W2MS) -- note: icon mapped from FREF 131 |
| 133 | Scenario file (W2SC) |
| 134 | Terrain data (W2TE) |
| 135 | Army data (W2AR) |
| 136 | City data (W2CI) |
| 137 | Shield data (W2SH) |
| 138 | Read-only document |

---

### 15. Color Tables and Palettes

#### pltt (Palette) Resources
| ID | Name | Description |
|---|---|---|
| 1000 | Main | Primary 256-color game palette (provided as .bin, .json, .act) |
| 1001 | Masking palette | Used for transparency/masking operations |
| 1004 | B&W | Black & white fallback palette |

#### clut (Color Lookup Table) Resources
| ID | Description |
|---|---|
| 1000 | Primary CLUT |
| 1001 | Secondary CLUT |
| 1004 | B&W CLUT |

#### cctb / wctb (Control/Window Color Tables)
| Type | ID |
|---|---|
| cctb | 2000 -- Control color table |
| wctb | 1000 -- Window color table |

---

### 16. Font Resources

#### FOND (Font Family)
| ID | Name |
|---|---|
| 1602 | Illuria -- custom medieval-style game font |
| 19999 | .MDEF Font -- Menu Definition custom font |

#### NFNT (Bitmap Font)
| ID | Font |
|---|---|
| 1634 | System font variant |
| 2816 | .MDEF Font |
| 2825 | Font variant |
| 2828 | Font variant |
| 30797 | Extended glyph set |

#### TxSt (Text Style) Resources
22 text style definitions specifying font name, size, style flags, and text color. Key styles:

| ID | Font | Size | Notes |
|---|---|---|---|
| 1000 | (default) | 0 | Black text |
| 1001-1004 | Chicago | 0 | Player color text (various RGB colors) |
| 1005 | Illuria | 36 | Large title text (yellow-white) |
| 1006 | Illuria | 17 | Medium body text (black) |
| 1007-1010 | Chicago | 0 | Additional player colors |
| 1011-1012 | Illuria | 17 | Colored Illuria variants |
| 1014 | Illuria | 36 | Large red title text |
| 1015 | Illuria | 17 | Yellow-white Illuria |
| 1016 | A | 9 | Small system font |
| 1019 | Illuria | 17 | Bold yellow-white Illuria |
| 1020 | A | 10 | Small colored system font |
| 1021 | Illuria | 17 | Underlined Illuria |
| 1022 | Illuria | 24 | Large Illuria |

---

### 17. Cursor Resources

#### acur (Animated Cursor) -- ID 256
8-frame animated wait cursor using CURS IDs: 4, 357, 358, 359, 360, 361, 362, 363

#### crsr (Color Cursor) -- ~26 resources
Color cursor graphics for game interaction (targeting, selection, etc.)

#### CURS (B&W Cursor) -- ~20 resources
Black and white cursor fallbacks.

#### ppat (Pixel Pattern) -- ~12 resources
Pixel fill patterns used for player-colored areas and terrain fills.

---

### 18. Miscellaneous Resources

#### SHLD 1000 -- "America Shields"
50 bytes. Contains shield set identifier "AM" and name "America Shields". References the shield graphics set used for player faction emblems.

#### War2 0 -- "Owner resource"
2 bytes: `0x0100`. Application owner marker.

#### HLP 1000 -- "WARLORD2"
40,666 bytes. Complete in-game help system text with structured entries for every game feature: scenario setup, terrain, armies, movement, combat, heroes, items, cities, production, diplomacy, quests, history, etc.

#### GFX (Graphics Data)
| ID | Name | Size | Purpose |
|---|---|---|---|
| 2000 | HITEM | 664 bytes | Help item graphics data |
| 2001 | HKEYS | 608 bytes | Help keyboard shortcuts graphic |
| 2002 | HMOUSE | 944 bytes | Help mouse usage graphic |
| 2003 | HMOUSE2 | 883 bytes | Help mouse usage graphic (variant) |

#### Rgn (QuickDraw Region)
| ID | Name | Size | Purpose |
|---|---|---|---|
| 1000 | Big scroll | 1,400 bytes | Scrolling region boundary for main map |
| 1001 | Talking head | 3,168 bytes | Region mask for talking head animation area |
| 2000 | (unnamed) | 152 bytes | UI region |
| 2001 | (unnamed) | 704 bytes | UI region |
| 2002 | (unnamed) | 940 bytes | UI region |

#### Roll 3020 -- "Player setup"
1,290 bytes. Data for the player setup roller/carousel UI control.

#### Soun 1000 -- "Sound preferences"
6 bytes: `01 00 01 00 01 00`. Three boolean pairs representing default sound preferences (sound on, music on, speech on).

#### Prfl 128 -- Profile
44 bytes. Preferences file specification: creator `War2pref`, name "Warlords II Preferences".

#### Last 1000
8 bytes: Pascal string "Tutoria" -- the last-used scenario folder name.

#### ZERO 0
2 bytes: `0x0100`. Placeholder/sentinel resource.

#### DATA 0
20 bytes. MacApp framework internal data.

#### DREL 0
0 bytes. MacApp relocation data (empty).

#### kind 128
282 bytes. File kind description strings for the Finder.

#### aedt 400
60 bytes. Apple Event dispatch table.

---

### 19. DAT 1002 FILE -- DOS File Path Cross-Reference

This resource is especially valuable as it maps all game assets to their DOS-version file paths, revealing the complete asset structure:

#### Graphics Files (PCK format)
```
startup.pck, startbu.pck, scenario.pck, screen.pck, button.pck,
shields.pck, specbits.pck, strat.pck, abits.pck, atrans2.pck,
curs.pck, war.pck, resign.pck, resignye.pck, resignno.pck,
hidden.pck, marble.pck, city.pck, popup.pck, popup2.pck, popup3.pck,
bigarmy.pck, setupbu.pck, victory.pck, mhero.pck, fhero.pck,
search.pck, tower.pck, bshield.pck, road.pck, ashadow.pck,
menubutt.pck, temple.pck, scroll.pck, scroll2.pck, bscroll.pck,
stack.pck, diplom.pck, advisor.pck, forder.pck, voice.pck,
voicebit.pck, ssg.pck, vpopup.pck, rmapbar.pck, cityback.pck,
level2.pck, level3.pck, level4.pck, newscen.pck, newscnbu.pck,
dbutton.pck, helpgfx.pck, citybu.pck, medal0-3.pck, resignbu.pck,
movebar0-7.pck, hiddenppc.pck, atrans3.pck, stand.pck
```

#### Army Sprites (per-player)
```
a0.pck, a1.pck, a2.pck, a3.pck, a4.pck, a5.pck, a6.pck, a7.pck, a8.pck
```

#### Terrain-Specific Files
```
TERRAIN%d\HERONAM0-7.DAT  (hero name lists per faction)
TERRAIN%d\ARMYTYPE.DAT    (army type definitions)
TERRAIN%d\ARMYTYP2.DAT    (extended army types)
TERRAIN%d\MAPCOLOR.DAT    (minimap color table)
```

#### City/Special Files
```
%s\ARMYTYPE.DAT, %s\ARMYTYP2.DAT
%s\%s.CTY (city definitions)
%s\%s.SPC (special/ruins definitions)
```

#### Music (XMI format)
```
STARTUP.XMI, INT0-INT23.XMI (24 in-game tracks)
```

#### Sound Files (8SN format)
```
dramatic.8SN, orch.8SN, war.8SN, splash.8SN, turn.8SN, army.8SN,
ding.8SN, chord.8SN, army2.8SN
```

#### Voice Files (8SN + TXT transcript)
```
vlose05-vlose35.8SN/.TXT, vwin05-vwin35.8SN/.TXT,
vgold00-vgold01a.8SN/.TXT, vhero00-01.8SN/.TXT,
vmess00-03.8SN/.TXT, vgreet0.8SN/.TXT, vmoment.8SN/.TXT,
vbegin.8SN/.TXT, vquit.8SN/.TXT
```

#### Data Files
```
DATA\SCENARIO.DAT, DATA\QUOTES.DAT, DATA\TERRAIN.DAT,
DATA\SAVEINFO.DAT, DATA\MAPINFO.DAT, DATA\OPTIONS.DAT,
DATA\OPTIONS.SND, HELP\HITEM.GFX
```

#### Save/Random Files
```
SAVE\RMAP0-9.DAT, SAVE\RMAPTEMP.DAT
SAVE\SAVE0-9.DAT
RANDOM\RANDOM.MAP/.RD/.SCN/.SGN/.SPC/.CTY
CURRENT.HST, CURRENT.SGN
```

#### Tutorial Screens
```
TUTORIA\THERO.GFX, TPROD.GFX, TSELECT.GFX, TMOVE.GFX,
TFIGHT.GFX, TSEARCH.GFX, TPROD2.GFX, TTURN2.GFX,
TWARLORD.GFX, TENDTURN.GFX, TFRESULT.GFX
```

#### Pics (Startup/Screen)
```
PICS\SCREEN0-3.PCK, PICS\STARTUP0-3.PCK
```

---

### 20. DAT 1000 STRING -- Key Game Text Excerpts

The master string table contains all in-game text. Notable categories:

**Defeat Messages:**
- "%s, for thee the war is over!"
- "%s, thy empire has fallen!"
- "%s, thou art vanquished!"
- "%s, thou art no more!"
- "%s, thy cities are as dust!"

**Victory Messages:**
- "%s, thou hast triumphed!"
- "No side remains to oppose thee!"

**Surrender Dialog:**
- "Ambassadors from all the other nations offer their lands if thou wilt spare their lives."

**Military Advisor Quotes:**
- "O Mighty Leader," / "O Great Warlord," / "Great and Worthy Lord,"
- Battle predictions from "complete and utter suicide!" to "as simple as butchering sleeping cattle!"

**Terrain Descriptions:**
- Road: "The fastest way to travel"
- Bridge: "For land armies to cross water"
- Forest: "Slows down movement"
- Hills: "Slows down movement"
- Mountains: "Only for flying armies"
- Plain: "The next best thing to roads"
- Marsh: "Very hard to pass through this"
- Tower: "A good view of the countryside" / "Very hard to conquer!"

**Combat Bonuses:**
- "Boat strength of 4"
- "+%d hero bonus"
- "+%d stack in hills/woods/open/city"
- "+1 fortified"

**Loading Messages:**
- "Loading a saved game / Please wait..."
- "Loading a new scenario / Please wait..."
- "Creating a new random map / Please wait..."

---

## Appendix: Resource Location Map

```
resources/
  +-- audio/                    # 108 files (36 sounds x 3 formats)
  |     Warlords II.app_snd_XXXX_NAME.{wav,mp3,m4a}
  +-- graphics/                 # ~720 files
  |     Warlords II.app_PICT_XXXX.bmp      (50 pictures)
  |     Warlords II.app_cicn_XXXX.bmp      (77 color icons, with _bitmap variants)
  |     Warlords II.app_ppat_XXXX.bmp      (12 pixel patterns, with variants)
  |     Warlords II.app_crsr_XXXX.bmp      (26 color cursors)
  |     Warlords II.app_CURS_XXXX.bmp      (20 B&W cursors)
  |     Warlords II.app_NFNT_XXXX_glyph_XX.bmp (font glyph bitmaps)
  |     Warlords II.app_cctb_2000.bmp
  +-- icons/                    # 10 files
  |     Warlords II.app_ICN#_XXX.icns
  +-- text/                     # ~640 files
  |     Warlords II.app_{TYPE}_{ID}.txt
  +-- (root)                    # ~210 binary files + JSON
        Warlords II.app_alis_XXXX.bin       (14 alias records)
        Warlords II.app_CARD_XXXX.bin       (27 map cards)
        Warlords II.app_clut_XXXX.{bin,json,act}
        Warlords II.app_DAT_XXXX.bin        (7 data tables)
        Warlords II.app_GFX_XXXX.bin        (4 help graphics)
        Warlords II.app_Head_XXXX.bin       (26 music headers)
        Warlords II.app_HLP_XXXX.bin        (1 help text)
        Warlords II.app_hmnu_X.bin          (3 help menus)
        Warlords II.app_pltt_XXXX.{bin,json,act}
        Warlords II.app_Rgn_XXXX.bin        (5 regions)
        Warlords II.app_Tune_XXXX.bin       (26 music tracks)
        Warlords II.app_View_XXXX.bin       (74 UI views)
        Warlords II.app_SHLD_XXXX.bin       (1 shield set)
        Warlords II.app_War2_0.bin          (owner)
        warlords2_data.json                 (master index)
```
