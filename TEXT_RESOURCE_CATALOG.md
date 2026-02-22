# Warlords II Text Resource Catalog

Comprehensive catalog of all text resources extracted from the original `Warlords II.app` resource fork.
Source directory: `/Users/lucaspick/Desktop/release-macos/test/original-decompiled-converted/resources/text/`

---

## Table of Contents

1. [STR# (String Tables) -- Game Text](#str-string-tables)
2. [STR (Individual Strings)](#str-individual-strings)
3. [ALRT (Alert Definitions)](#alrt-alert-definitions)
4. [DITL (Dialog Item Lists)](#ditl-dialog-item-lists)
5. [CMNU (Color Menus)](#cmnu-color-menus)
6. [DESC (AI Character Descriptions)](#desc-ai-character-descriptions)
7. [CARD (Character Cards)](#card-character-cards)
8. [NAME (Asset Names/Paths)](#name-asset-namespaths)
9. [TxSt (Text Styles)](#txst-text-styles)
10. [DLOG (Dialog Definitions)](#dlog-dialog-definitions)
11. [CNTL (Controls)](#cntl-controls)
12. [MENU (Menus)](#menu-menus)
13. [MBAR (Menu Bar Definitions)](#mbar-menu-bar-definitions)
14. [WIND (Window Definitions)](#wind-window-definitions)
15. [WDEF (Window Definition Functions)](#wdef-window-definition-functions)
16. [MDEF (Menu Definition Functions)](#mdef-menu-definition-functions)
17. [seg! and res! (Code Segment Maps)](#seg-and-res-code-segment-maps)
18. [Other Resources](#other-resources)

---

## STR# (String Tables)

### STR# 128 -- Error Reason Strings
Used in error dialogs to explain what went wrong. These are the "because ..." clauses.

| Index | String |
|-------|--------|
| 0 | of a program error |
| 1 | the disk is full |
| 2 | the disk is locked |
| 3 | there is not enough memory |
| 4 | of a disk error |
| 5 | the file is locked |
| 6 | the file is already in use or was left open |
| 7 | of a problem writing the print file |
| 8 | the printer could not be found |
| 9 | of a problem communicating with the printer |
| 10 | its disk copy was deleted |
| 11 | that document is currently open |
| 12 | its disk copy was changed |
| 13 | of a problem with the file server |
| 14 | you do not have the necessary access privileges |
| 15 | the selected printing resource could not be found |
| 16 | of a problem with AppleTalk |
| 17 | AppleTalk is not connected |
| 18 | it is not the right kind of document |
| 19 | the disk is not available |
| 20 | there are too many files open |
| 21 | the required resources were not found |
| 22 | this feature is not implemented |
| 23 | "^3", an internal component, is missing |
| 24 | an internal component is missing |
| 25 | the Edition Manager isn't initialized |
| 26 | there is a problem accessing the edition |
| 27 | the specified format is not in the edition |
| 28 | the edition is not a publisher |
| 29 | there is a problem specifying the edition |
| 30 | end of file |
| 31 | file not found |
| 32 | the printer file is used by another application or the Chooser |

### STR# 129 -- Error Recovery Suggestions
Used in error dialogs as follow-up advice.

| Index | String |
|-------|--------|
| 0 | Use the "Get Info" command in the Finder to unlock the file. |
| 1 | Use "Chooser" to select a printer and try again. |
| 2 | Save using a different name, or close the document and try again. |
| 3 | Try closing some windows and try again. |
| 4 | Please contact the developer. |
| 5 | Try closing the Chooser. |
| 6 | Please contact the developer. |

### STR# 130 -- Operation Names (for error messages)
Used to fill in "Could not [operation] because..." templates.

| Index | String |
|-------|--------|
| 0 | start the application |
| 1 | save "^3" |
| 2 | revert to the previous version of "^3" |
| 3 | print "^3" |
| 4 | create a new document |
| 5 | open "^3" |
| 6 | save as "^3" |
| 7 | save a copy in "^3" |
| 8 | display the contents of the window |
| 9 | make the clipboard available inside the application |
| 10 | make the clipboard available outside the application |

### STR# 250 -- UI Label Strings
General UI labels used throughout the application.

| Index | String |
|-------|--------|
| 0 | Save this document as: |
| 1 | Save a copy in: |
| 2 | Show Clipboard |
| 3 | Hide Clipboard |
| 4 | Undo <<<>>> |
| 5 | Redo <<<>>> |
| 6 | Unable to display contents at the moment |
| 7 | untitled <<<>>> |
| 8 | closing |
| 9 | quitting |
| 10 | Can't Undo |
| 11 | save |
| 12 | revert |
| 13 | Hide Borders |
| 14 | Show Borders |
| 15 | Subscriber Options... |
| 16 | Publisher Options... |
| 17 | untitled |

### STR# 253 -- UI Widget Type Names
Internal widget/control type names (MacApp framework).

| Index | String |
|-------|--------|
| 0 | Clipboard |
| 1 | Window |
| 2 | button |
| 3 | checkbox |
| 4 | radio |
| 5 | cluster |
| 6 | popup: |
| 7 | static text |
| 8 | edit text |
| 9 | 0 |
| 10 | (empty) |

### STR# 254 -- Balloon Help Strings
Balloon help text for all menu items (File, Edit menus). Each item has enabled/disabled variants.

| Index | String |
|-------|--------|
| 0-2 | Displays information about the version of the Warlords application. (About) |
| 3-4 | Edit menu -- Use this menu to undo your last action, to manipulate text or graphics... |
| 5 | Undoes your last action if it involved cutting, clearing, pasting, or typing. |
| 6 | Undoes your last action... Not available because your last action cannot be undone. |
| 7 | Removes the selected text or graphics and places it temporarily into... the Clipboard. (Cut) |
| 8 | Cut -- Not available because nothing is selected. |
| 9 | Copies the selected text or graphics... (Copy - enabled) |
| 10 | Copy -- Not available because nothing is selected. |
| 11 | Inserts the contents of the Clipboard... (Paste - enabled) |
| 12 | Paste -- Not available because nothing on Clipboard or incompatible type. |
| 13 | Removes the selected text or graphics without storing it on the Clipboard. (Clear - enabled) |
| 14 | Clear -- Not available because nothing is selected. |
| 15 | Selects the entire contents of the open Warlords document. (Select All - enabled) |
| 16 | Select All -- Not available because no document is open or document is empty. |
| 17-19 | Closes the Clipboard window. |
| 20-22 | Displays the contents of the Clipboard (a storage area for the last item cut or copied). |
| 23 | Turns the selected text or graphics into a publisher... (Create Publisher - enabled) |
| 24 | Create Publisher -- Not available because nothing is selected. |
| 25 | Subscribes to an edition file... (Subscribe To - enabled) |
| 26 | Subscribe To -- Not available because no document is open. |
| 27 | Displays a dialog box for publisher options. (Publisher Options - enabled) |
| 28 | Publisher Options -- Not available because no publisher is selected. |
| 29 | Displays a dialog box for subscriber options. (Subscriber Options - enabled) |
| 30 | Subscriber Options -- Not available because no subscriber is selected. |
| 31-32 | File menu -- Use this menu to open, close, save, and print Warlords documents, and to quit. |
| 33 | Creates a new Warlords document called "untitled." (New - enabled) |
| 34 | New -- Not available because <good reason here>. |
| 35 | Opens an existing Warlords document. (Open - enabled) |
| 36 | Open -- Not available because <good reason here>. |
| 37 | Closes the active Warlords document. (Close - enabled) |
| 38 | Close -- Not available because no document is open. |
| 39 | Saves the active Warlords document... (Save - enabled) |
| 40 | Save -- Not available because no document is open or no changes made. |
| 41 | Saves the active document with the new name and location you specify. (Save As - enabled) |
| 42 | Save As -- Not available because no document is open. |
| 43-44 | Displays a dialog box for paper size, orientation, printing options. (Page Setup) |
| 45 | Prints the active document. (Print - enabled) |
| 46 | Print -- Not available because no document is open. |
| 47-48 | Quits the Warlords application. Asks to save unsaved changes. |
| 49 | Prints a single copy of the active document. (Print One - enabled) |
| 50 | Print One -- Not available because no document is open. |
| 51 | Reverts to the last saved version of the active document. (Revert - enabled) |
| 52 | Revert -- Not available because no document is open or no changes made. |

### STR# 300 -- Input Validation Errors

| Index | String |
|-------|--------|
| 0 | Invalid value |
| 1 | The value is less than the allowed minimum |
| 2 | The value is greater than the allowed maximum |
| 3 | The value contains non-numeric characters |
| 4 | The value contains too many characters |

### STR# 1000 -- Common Button Labels

| Index | String |
|-------|--------|
| 0 | Cancel |
| 1 | OK |
| 2 | No |
| 3 | Yes |
| 4 | Done |
| 5 | Quest |
| 6 | Reject |
| 7 | Close unsaved |

### STR# 1001 -- "Search for files?" File Type Names

| Index | String |
|-------|--------|
| 0 | scenario |
| 1 | terrain |
| 2 | army |
| 3 | city |
| 4 | shield |

### STR# 1002 -- Asset Directory Names (Mac path format)

| Index | String |
|-------|--------|
| 0 | : |
| 1 | :Terrain: |
| 2 | :Armies: |
| 3 | :Cities: |
| 4 | :Shields: |

### STR# 1005 -- Cursor Mode Labels

| Index | String |
|-------|--------|
| 0 | Group |
| 1 | Move |
| 2 | Group Move |

### STR# 1040 -- About Box / Credits Strings

| Index | String |
|-------|--------|
| 0 | Credits |
| 1 | Addresses |
| 2 | Scenario |
| 3 | Macintosh Version |
| 4 | Game Design: Steve Fawkner, Roger Keating, Gregor Whiley and Ian Trout |
| 5 | Program Design: Steve Fawkner, Roger Keating and Gary Makin |
| 6 | Strategic Studies Group Inc., P.O. Box 30085, Pensacola FL, USA 32503-1085 |
| 7 | Strategic Studies Group Pty Limited, P.O. Box 261, Drummoyne, AUSTRALIA 2047 |
| 8 | E-Mail addresses: |
| 9 | CompuServe: 72662,3471 / GEnie: SSG / AppleLink: AUST0161 |
| 10 | Tel: 904 469 8880 / Fax: 904 469 8885 |
| 11 | Infinity Windoid 2.5.1 by Troy Gaul (c) 1991-94 Infinity Systems |
| 12 | This Program was written with MacApp: (c) 1985-1994 Apple Computer, Inc. |
| 13 | Original Artwork: Nick Stathopoulos, Steve Fawkner and Steve Ford |
| 14 | Warlords II (c) 1994 Strategic Studies Group Pty Limited |
| 15 | 256 Color Artwork: Jonn Gorden and Nick Stathopoulos |
| 16 | Music: Steve Fawkner with Janeen Fawkner |
| 17 | Tel: +61 2 819 7199 / Fax: +61 2 819 7737 |
| 18 | Internet: 72662.3471@compuserve.com |

### STR# 1060 -- E-mail Game Close Warning

| Index | String |
|-------|--------|
| 0 | E-mail games must be saved before they can be sent to the next player. Do you wish to save & mail the game, or to close the game unsaved and unsent? |
| 1 | Save & Mail |

### STR# 2001 -- Menu Shortcut Button Labels
Labels for the customizable shortcut buttons in the info panel/control window.

| Index | String |
|-------|--------|
| 0 | Menu Shortcuts |
| 1 | Choose a menu item from the list below for each shortcut button |
| 2 | Move All Armies |
| 3 | Disband |
| 4 | Change Signpost |
| 5 | View Stack |
| 6 | Quest Report |
| 7 | Build |
| 8 | City Info |
| 9 | Production |
| 10 | Vectoring |
| 11 | View Ruins |
| 12 | City History |
| 13 | Event History |
| 14 | Gold History |
| 15 | Winning History |
| 16 | Triumphs |
| 17 | Army Report |
| 18 | City Report |
| 19 | Gold Report |
| 20 | Production Report |
| 21 | Winning Report |
| 22 | Heroes |
| 23 | Plant Flag |
| 24 | Hero Levels |
| 25 | Search |
| 26 | End Turn |
| 27 | Save and End Turn |

### STR# 2002 -- AddressOMatic Labels (E-mail Game)
Labels for the e-mail game address selection UI (PowerTalk/AOCE integration).

| Index | String |
|-------|--------|
| 0 | Personal Catalog |
| 1 | Catalog Browser |
| 2 | Find Address |
| 3 | Done |
| 4 | To |
| 5 | Open |
| 6 | Save... |
| 7 | Find |
| 8 | Stop |
| 9 | CC |
| 10 | Bcc |
| 11 | Find |
| 12 | Search |
| 13-15 | (empty) |
| 16 | Player 1 |
| 17 | Player 2 |
| 18 | Player 3 |
| 19 | Player 4 |
| 20 | Player 5 |
| 21 | Player 6 |
| 22 | Player 7 |
| 23 | Player 8 |

### STR# 2003 -- Browser Help (E-mail)

| Index | String |
|-------|--------|
| 0 | Lists the items available. To add an address from this list, select it and click the To or CC button... |
| 1 | To see the contents of another catalog, folder, or disk, select an item from this pop-up menu. |

### STR# 2004 -- Personal Catalog Help (E-mail)

| Index | String |
|-------|--------|
| 0 | Lists the addresses in your preferred personal catalog... |
| 1 | (empty) |

### STR# 2005 -- Find Panel Help (E-mail)

| Index | String |
|-------|--------|
| 0 | Type the address you wish to find. |
| 1 | To change locations for the search, use this popup-menu. |
| 2 | Lists the items found. To add a found address, select it and click the To or CC button... |

### STR# 2010 -- Window Menu Names (Show/Hide toggles)

| Index | String |
|-------|--------|
| 0 | Show Strategy Map Window |
| 1 | Hide Strategy Map Window |
| 2 | Show Control Window |
| 3 | Hide Control Window |
| 4 | Show Info Window |
| 5 | Hide Info Window |

### STR# 3000 -- Scenario Selection Dialog Labels

| Index | String |
|-------|--------|
| 0 | Game Setup |
| 1 | Use Selected Scenario |
| 2 | Use Random Map... |

### STR# 3010 -- Game Setup Dialog Labels

| Index | String |
|-------|--------|
| 0 | OK |
| 1 | Cancel |
| 2 | Water |
| 3 | Hills |
| 4 | A Random World |
| 5 | Cities |
| 6 | Forest |
| 7 | Terrain Type: |
| 8 | Edit Options... |
| 9 | Select Random Characters |
| 10 | Begin Game |
| 11 | Army Set: |
| 12 | City Set: |
| 13 | Shield Set: |
| 14 | Set Addresses |
| 15 | Set Addresses... |
| 16 | Sound Volume |
| 17 | Music |
| 18 | Cities can produce allies |
| 19 | Game setup |
| 20 | More Choices |
| 21 | Fewer Choices |
| 22 | Sound |
| 23 | Speech |

### STR# 3020 -- Game Setup: Side/Character Settings

| Index | String |
|-------|--------|
| 0 | 1 |
| 1 | I am the Greatest |
| 2 | 1 |
| 3 | Options |
| 4 | Warlord |
| 5-7 | (empty) |
| 8 | Character |
| 9 | E-mail game |
| 10 | Side to play |
| 11 | Computer Level |
| 12 | Knight |
| 13 | Lord |

### STR# 3021 -- Game Options Dialog Labels

| Index | String |
|-------|--------|
| 0 | Neutral Cities |
| 1 | Affecting Difficulty |
| 2 | Quests |
| 3 | Average |
| 4 | Strong |
| 5 | Active |
| 6 | Razing Cities |
| 7 | Always |
| 8 | On Capture |
| 9 | Never |
| 10 | Game Options |
| 11 | View Enemies |
| 12 | Hidden Map |
| 13 | Diplomacy |
| 14 | View Production |
| 15 | Not Affecting Difficulty |
| 16 | Random Turns |
| 17 | Intense Combat |
| 18 | Quick Start |
| 19 | Military Advisor |
| 20 | Male |
| 21 | Female |
| 22 | Delete Setting |
| 23 | Create New Setting |

### STR# 3022 -- Side Setup Dialog Labels

| Index | String |
|-------|--------|
| 0 | Side Setup |
| 1 | Side Name |
| 2 | 1 |
| 3 | Leader |
| 4 | Description |

### STR# 3030 -- Player Type Labels

| Index | String |
|-------|--------|
| 0 | Human |
| 1 | Enhanced |
| 2 | Observe |
| 3 | Fast Hidden map |
| 4 | Speed Limit |

### STR# 3040 -- Player Status Labels

| Index | String |
|-------|--------|
| 0 | Human |
| 1 | Deceased! |
| 2 | Settings |
| 3 | PowerMac |
| 4 | E-mail Game |

### STR# 3200 -- In-Game UI Labels (Hero, Diplomacy, Production)

| Index | String |
|-------|--------|
| 0 | A Hero! |
| 1 | 1 |
| 2 | Diplomatic Report |
| 3 | Hire |
| 4 | Don't Hire |
| 5 | Diplomatic Rating |
| 6 | Use the arrow buttons to move the armies into new positions. Drag armies into new positions, or use the arrow buttons to move them. |
| 7 | Items in this scenario |
| 8 | Near: |
| 9 | Command: |
| 10 | Experience: |
| 11 | Currently Producing |

### STR# 3300 -- City Info Dialog Labels

| Index | String |
|-------|--------|
| 0 | OK |
| 1 | Current: |
| 2 | Rename |
| 3 | Raze |
| 4 | Build Prod |
| 5 | Next turn: |
| 6 | Give the city whatever name you desire! |
| 7 | Burn it until nothing remains! |
| 8 | Turn after: |
| 9 | See all |
| 10 | Buy new army types to produce! |
| 11 | Bonus |
| 12 | Unexplored |
| 13 | Explored |
| 14 | Temple |
| 15 | Stronghold |
| 16 | Build Production |

### STR# 3420 -- Resign Confirmation Dialog

| Index | String |
|-------|--------|
| 0 | Resign! |
| 1 | Milord, this is a serious decision! |
| 2 | Dost thou truly wish to give in to |
| 3 | thy treacherous foes? |
| 4 | Resign Graciously |
| 5 | Keep Playing |
| 6 | Resign Ungraciously |

### STR# 3600 -- Stack/Army Info Labels

| Index | String |
|-------|--------|
| 0 | Army Bonus |
| 1 | Items |
| 2 | Stack Info |
| 3 | Group All |
| 4 | Ungroup All |
| 5 | Str |
| 6 | Move |
| 7 | Bonus |
| 8 | Str |

### STR# 3800 -- City Capture Options

| Index | String |
|-------|--------|
| 0 | Occupy |
| 1 | Pillage |
| 2 | Sack |
| 3 | Raze |

### STR# 3900 -- Signpost Dialog

| Index | String |
|-------|--------|
| 0 | A Signpost! |
| 1 | Type a new message for |
| 2 | this signpost. |

### STR# 4000 -- Hero Inspect Labels

| Index | String |
|-------|--------|
| 0 | Battle: |
| 1 | Level: |
| 2 | Items being carried |
| 3 | On ground |

### STR# 4010 -- Hero Levels Dialog

| Index | String |
|-------|--------|
| 0 | Hero Levels |
| 1 | Hero |
| 2 | Level |
| 3 | Exp |
| 4 | Needs |
| 5 | Str |
| 6 | Move |

### STR# 4100 -- Ruin Search

| Index | String |
|-------|--------|
| 0 | Searching |
| 1 | Take it |

### STR# 4110 -- Temple

| Index | String |
|-------|--------|
| 0 | Bless |

### STR# 4120 -- Sage Dialog

| Index | String |
|-------|--------|
| 0 | A Sage! |
| 1 | Items |
| 2 | Money |
| 3 | Maps |

### STR# 4200 -- Quest Dialog

| Index | String |
|-------|--------|
| 0 | Quest |

### STR# 4300 -- Diplomacy Dialog Labels

| Index | String |
|-------|--------|
| 0 | Diplomatic Action |
| 1 | Diplomatic State |
| 2 | Their Proposals |
| 3 | Your offers and replies |
| 4 | Action |
| 5 | Report |

### STR# 4420 -- Military Advisor

| Index | String |
|-------|--------|
| 0 | Advisor! |

### STR# 4500 -- Peace Offer / Victory Dialog

| Index | String |
|-------|--------|
| 0 | The other leaders offer you peace if you will but cease |
| 1 | this merciless slaughter! |
| 2 | An Offer of Peace! |
| 3 | Stick their heads on poles at the city gate. |
| 4 | Let the whole world know - it is MINE! |
| 5 | Peace is not an option! |
| 6 | Accept |

### STR# 4510 -- Victory

| Index | String |
|-------|--------|
| 0 | Congratulations |
| 1 | You have conquered the world! |

### STR# 4600 -- Fighting Order Dialog

| Index | String |
|-------|--------|
| 0 | Fighting Order |
| 1 | 1. |
| 2 | Reset |

### STR# 10000 -- Help System Placeholder Strings

| Index | String |
|-------|--------|
| 0 | No help yet for this item |
| 1 | Help For Menu Title |
| 2 | Help For First Menu Item |
| 3 | Help For Second Menu Item |
| 4 | Help For Third Menu Item |

---

## STR (Individual Strings)

| ID | Name | Value |
|----|------|-------|
| 1000 | Font Name | Illuria |
| 1001 | Startup movie | Startup movie |
| 2000 | (unnamed) | (empty) |

---

## ALRT (Alert Definitions)

Each ALRT resource defines an alert dialog's position, which DITL to use, and button behavior. The actual text content comes from the corresponding DITL resource.

| ALRT ID | DITL ID | Bounds (x1,y1,x2,y2) | Purpose |
|---------|---------|----------------------|---------|
| 128 | 128 | 80,80,462,258 | Generic error: "Could not ^2 because ^0. ^1" |
| 129 | 129 | 80,80,462,258 | Command error: "Could not complete the '^2' command because ^0. ^1" |
| 130 | 130 | 80,80,462,258 | Request error: "Could not complete your request because ^0. ^1" |
| 131 | 131 | 60,86,432,190 | Save changes prompt: "Save changes to the ^2 document '^0' before ^1?" |
| 132 | 132 | 60,86,432,190 | Revert confirm: "Revert to the last saved version of '^0'?" |
| 133 | 133 | 110,100,402,238 | File changed externally: "The disk copy of '^0' was changed since you last opened or saved it..." |
| 134 | 134 | 110,100,402,253 | Disk space warning: "There is not enough disk space to save the document unless the existing copy is deleted first..." |
| 135 | 135 | 110,100,402,198 | Already open: "'^0' is already open." |
| 136 | 136 | 110,100,402,198 | Low memory: "Memory space is low. Some commands may be disabled." |
| 137 | 137 | 110,90,402,238 | Hardware/system error: "Your computer lacks the required hardware or system software to run this application." |
| 138 | 138 | 110,100,402,208 | Read-only file: "'^0' can't be opened for writing. Do you want to open it anyway?" |
| 150 | 150 | 110,100,402,210 | Text limit: "Cannot add any more characters here." |
| 151 | 151 | 110,100,402,210 | Style error: "Cannot remember the styles associated with the text. The text is intact, however." |
| 300 | 300 | 100,90,412,210 | Validation error: "^0; previous value substituted." |
| 1000 | 1000 | 39,40,380,141 | File not found: "The ^0 file '^1' could not be found. Do you wish to search for it?" |
| 1010 | 1010 | 39,40,410,157 | Color depth suggestion: "Warlords II will look better and run faster with the screen set to display 256 colors. Would you like the screen changed?" |
| 1020 | 1020 | 39,40,380,189 | Save game too new: "Warlords II cannot open this save game file because it is too new. Contact SSG..." |
| 2000 | 2000 | 40,40,386,161 | E-mail group error: "Warlords players cannot be given by Group addresses. Please choose users or addresses only." |
| 3032 | 3032 | 39,40,380,141 | E-mail turn notification: "It is now the ^0 turn. The game has been mailed on to ^1." |
| 3114 | 2558 | 40,40,478,130 | PPC required: "You need a Macintosh equipped with a PowerPC processor to run this application." |

---

## DITL (Dialog Item Lists)

Each DITL defines the layout and content of items in a dialog. Text shown in quotes is the actual UI text; ^0, ^1, ^2, ^3 are parameter substitution markers.

### DITL 128 -- Generic Error Dialog
- Button: "OK" (258,140 to 332,158)
- Static Text: "Could not ^2 because ^0. ^1" (70,10 to 332,135)
- Icon: Stop icon (ID 0)

### DITL 129 -- Command Error Dialog
- Button: "OK"
- Static Text: "Could not complete the '^2' command because ^0. ^1"
- Icon: Stop icon (ID 0)

### DITL 130 -- Request Error Dialog
- Button: "OK"
- Static Text: "Could not complete your request because ^0. ^1"
- Icon: Stop icon (ID 0)

### DITL 131 -- Save Changes Dialog (3-button)
- Button: "Save" (303,74 to 362,94)
- Button: "Cancel" (231,74 to 290,94)
- Button: "Don't Save" (65,74 to 150,94)
- Static Text: "Save changes to the ^2 document '^0' before ^1?"
- Icon: Caution icon (ID 2)

### DITL 132 -- Revert Confirmation
- Button: "Revert" (299,74 to 362,94)
- Button: "Cancel" (223,74 to 286,94)
- Static Text: "Revert to the last saved version of '^0'?"
- Icon: Caution icon (ID 2)

### DITL 133 -- File Changed Externally
- Button: "OK"
- Button: "Cancel"
- Static Text: "The disk copy of '^0' was changed since you last opened or saved it. Do you want to ^1 anyway?"
- Icon: Caution icon (ID 2)

### DITL 134 -- Delete Existing to Save
- Button: "OK"
- Button: "Cancel"
- Static Text: "There is not enough disk space to save the document unless the existing copy is deleted first. Delete existing copy of '^0'?"
- Icon: Caution icon (ID 2)

### DITL 135 -- Already Open
- Button: "OK"
- Static Text: "'^0' is already open."
- Icon: Note icon (ID 1)

### DITL 136 -- Low Memory Warning
- Button: "OK"
- Static Text: "Memory space is low. Some commands may be disabled."
- Icon: Note icon (ID 1)

### DITL 137 -- System Requirements
- Button: "OK"
- Static Text: "Your computer lacks the required hardware or system software to run this application."
- Icon: Stop icon (ID 0)

### DITL 138 -- Read-Only File
- Button: "OK"
- Button: "Cancel"
- Static Text: "'^0' can't be opened for writing. Do you want to open it anyway?"
- Icon: Caution icon (ID 2)

### DITL 150 -- Text Limit
- Button: "OK"
- Static Text: "Cannot add any more characters here."
- Icon: Stop icon (ID 0)

### DITL 151 -- Style Error
- Button: "OK"
- Static Text: "Cannot remember the styles associated with the text. The text is intact, however."
- Icon: Stop icon (ID 0)

### DITL 300 -- Validation Error
- Button: "OK"
- Static Text: "^0; previous value substituted."
- Icon: Note icon (ID 1)

### DITL 1000 -- File Not Found (Search prompt)
- Button: "OK" / "Cancel"
- Static Text: "The ^0 file '^1' could not be found. Do you wish to search for it?"
- Icon: Stop icon (ID 0)

### DITL 1010 -- 256 Colors Prompt
- Button: "Yes" / "No"
- Static Text: "Warlords II will look better and run faster with the screen set to display 256 colors. Would you like the screen changed?"
- Icon: Stop icon (ID 0)

### DITL 1020 -- Save Game Too New
- Button: "OK"
- Static Text: "Warlords II cannot open this save game file because it is too new. Contact SSG to find out how to get an update for Warlords II. See the About box for SSG's addresses."
- Icon: Caution icon (ID 2)

### DITL 1500 -- Custom Save Dialog
- Button: "Save" / "Cancel" / "Eject" / "Desktop"
- Edit Text: (filename field)
- Static Text: "Save as:"
- CNTL 1500: File type popup (Macintosh Save Game / MS-DOS Save Game)
- Custom items for file browser

### DITL 2000 -- E-mail Group Error
- Button: "OK"
- Static Text: "Warlords players cannot be given by Group addresses. Please choose users or addresses only."
- Icon: Stop icon (ID 0)

### DITL 2558 -- PowerPC Required (SITIM PPC)
- Button: "OK"
- Static Text: "You need a Macintosh equipped with a PowerPC processor to run this application."

### DITL 3032 -- E-mail Turn Notification
- Button: "OK"
- Static Text: "It is now the ^0 turn. The game has been mailed on to ^1."
- Icon: Note icon (ID 1)

---

## CMNU (Color Menus)

### CMNU 1 -- Apple Menu (ID=1)
| Item | Name | Key | Cmd# |
|------|------|-----|------|
| 0 | About ^0... | - | 1 |
| 1 | - (separator) | - | 0 |

### CMNU 2 -- File Menu (ID=2, procID=1)
| Item | Name | Key | Cmd# |
|------|------|-----|------|
| 0 | New | - | 10 |
| 1 | Open... | Cmd+O | 20 |
| 2 | - (separator) | - | 0 |
| 3 | Close | Cmd+W | 31 |
| 4 | Save | Cmd+S | 30 |
| 5 | Save As... | - | 32 |
| 6 | Revert | - | 34 |
| 7 | - (separator) | - | 0 |
| 8 | Quit | Cmd+Q | 36 |

### CMNU 3 -- Edit Menu (ID=3, procID=1)
| Item | Name | Key | Cmd# |
|------|------|-----|------|
| 0 | Undo | Cmd+Z | 101 |
| 1 | - (separator) | - | 0 |
| 2 | Cut | Cmd+X | 103 |
| 3 | Copy | Cmd+C | 104 |
| 4 | Paste | Cmd+V | 105 |
| 5 | Clear | - | 106 |
| 6 | Select All | - | 110 |

### CMNU 4 -- Orders Menu (ID=4, procID=1)
| Item | Name | Key | Style | Cmd# |
|------|------|-----|-------|------|
| 0 | Group Stack | Cmd+G | - | 1400 |
| 1 | Ungroup | Cmd+Shift+G | 0x40 | 1401 |
| 2 | - (separator) | - | - | 0 |
| 3 | Move Group | Cmd+M | - | 1402 |
| 4 | Move All Armies | Cmd+Shift+M | 0x40 | 1403 |
| 5 | Cancel Path | - | - | 1404 |
| 6 | - (separator) | - | - | 0 |
| 7 | Next Group | Cmd+N | - | 1405 |
| 8 | Leave Group | Cmd+L | - | 1406 |
| 9 | Defend | ; | - | 1407 |
| 10 | Deselect Group | - | - | 1408 |
| 11 | - (separator) | - | - | 0 |
| 12 | Show current army | - | - | 1409 |
| 13 | Show army's shadow | - | - | 1410 |
| 14 | - (separator) | - | - | 0 |
| 15 | Fight Order... | - | - | 1411 |
| 16 | Disband Group | - | - | 1412 |
| 17 | Change Signpost... | - | - | 1413 |
| 18 | - (separator) | - | - | 0 |
| 19 | Resign... | - | - | 1414 |

### CMNU 5 -- Reports Menu (ID=5, procID=1)
| Item | Name | Key | Style | Cmd# |
|------|------|-----|-------|------|
| 0 | Show Report... | Cmd+R | - | 1500 |
| 1 | - (separator) | - | - | 0 |
| 2 | Armies... | - | - | 1501 |
| 3 | Cities... | - | - | 1502 |
| 4 | Gold... | - | - | 1503 |
| 5 | Production... | - | - | 1504 |
| 6 | Winning... | - | - | 1505 |
| 7 | - (separator) | - | - | 0 |
| 8 | Diplomacy... | Cmd+Shift+D | 0x40 | 1506 |
| 9 | Quest... | Cmd+Shift+Q | 0x40 | 1507 |

### CMNU 6 -- Heroes Menu (ID=6, procID=1)
| Item | Name | Key | Style | Cmd# |
|------|------|-----|-------|------|
| 0 | Inspect Heroes... | Cmd+Shift+H | 0x40 | 1600 |
| 1 | Plant Flag | Cmd+Shift+P | 0x40 | 1601 |
| 2 | Hero Levels... | Cmd+Shift+L | 0x40 | 1602 |
| 3 | Search... | Cmd+Shift+S | 0x40 | 1603 |

### CMNU 7 -- View Menu (ID=7, procID=1)
| Item | Name | Key | Style | Cmd# |
|------|------|-----|-------|------|
| 0 | Army Bonuses... | Cmd+B | - | 1700 |
| 1 | Items... | Cmd+I | - | 1701 |
| 2 | - (separator) | - | - | 0 |
| 3 | Build... | - | - | 1703 |
| 4 | Cities... | - | - | 1702 |
| 5 | Production... | Cmd+P | - | 1704 |
| 6 | Vectoring... | - | - | 1705 |
| 7 | Ruins... | Cmd+Shift+R | 0x40 | 1706 |
| 8 | Stack... | Cmd+K | - | 1707 |

### CMNU 8 -- History Menu (ID=8, procID=1)
| Item | Name | Key | Cmd# |
|------|------|-----|------|
| 0 | Show History... | Cmd+H | 1800 |
| 1 | - (separator) | - | 0 |
| 2 | Cities... | - | 1801 |
| 3 | Gold... | - | 1803 |
| 4 | Winners... | - | 1804 |
| 5 | Events... | - | 1802 |
| 6 | - (separator) | - | 0 |
| 7 | Triumphs... | Cmd+T | 1805 |

### CMNU 9 -- Game Menu (ID=9, procID=1)
| Item | Name | Key | Style | Cmd# |
|------|------|-----|-------|------|
| 0 | End Turn | Cmd+E | - | 1900 |
| 1 | Save and End Turn | Cmd+Shift+E | 0x40 | 1907 |
| 2 | - (separator) | - | - | 0 |
| 3 | Stategy Map | - | - | 1903 |
| 4 | Control Window | - | - | 1904 |
| 5 | Info Window | - | - | 1905 |
| 6 | Clean Up Windows | - | - | 1906 |
| 7 | - (separator) | - | - | 0 |
| 8 | Game Settings... | - | - | 1901 |
| 9 | Sound Volumes... | - | - | 1908 |
| 10 | Shortcuts... | - | - | 1902 |

Note: "Stategy Map" is the original spelling (typo in the resource).

### CMNU 128 -- Buzzwords (Internal Undo/Redo action names)
| Item | Name | Cmd# |
|------|------|------|
| 0 | Army Selection | 2100 |
| 1 | Group Change | 2102 |
| 2 | Path Change | 2101 |
| 3 | Typing | 120 |

### Popup Menus

#### CMNU 64 -- Terrain Type Popup (ID=64)
Empty -- populated dynamically from terrain data at runtime.

#### CMNU 65 -- Army Set Popup (ID=65)
- Default (cmd=2000)
- (Additional items populated dynamically)

#### CMNU 66 -- City Set Popup (ID=66)
- Default (cmd=2000)
- (Additional items populated dynamically)

#### CMNU 67 -- Shield Set Popup (ID=67)
- Default (cmd=2000)
- (Additional items populated dynamically)

#### CMNU 70 -- Difficulty Preset Popup (ID=70)
| Item | Name | Cmd# |
|------|------|------|
| 0 | Beginner | 2000 |
| 1 | Intermediate | 2000 |
| 2 | Advanced | 2000 |

---

## DESC (AI Character Descriptions)

Binary resources containing multi-line text descriptions for AI player characters. Three difficulty tiers with 9 characters each (1 standard + 8 named).

### Knight Level (IDs 1000-1008, names K000-K008)
Faint-hearted characters -- easiest AI difficulty.

| ID | Name | Description |
|----|------|-------------|
| 1000 | Standard Knight | The Standard Knight Level Player |
| 1001 | Winston the Woeful | Faint-hearted. Likes building pikemen |
| 1002 | Brave Brave Sir Robin | Faint-hearted. Very backward |
| 1003 | Morgan the Moribund | Faint-hearted. Slow-moving |
| 1004 | Timmy the Tremulous | Faint-hearted. Much movement, no substance |
| 1005 | Ulfrid the Unlucky | Faint-hearted. Falls at last hurdle |
| 1006 | Simon the Superfluous | Faint-hearted, but can surprise! |
| 1007 | Charles the Craven | Faint-hearted. Larger than life! |
| 1008 | Ethel the Unready | Faint-hearted. Right numbers, wrong place |

### Lord Level (IDs 2000-2008, names L000-L008)
Bothersome/Troublesome characters -- medium AI difficulty.

| ID | Name | Description |
|----|------|-------------|
| 2000 | Standard Lord | The Standard Lord Level Player |
| 2001 | Rowan the Rancorous | Troublesome. Treacherous. Likes a good fight |
| 2002 | Roland the Rabid | Bothersome. Likes burning things down |
| 2003 | Raymond Ratsbane | Bothersome. Treacherous. Single-minded |
| 2004 | Rebecca the Rapacious | Bothersome. Makes war on the cheap |
| 2005 | Rodney the Ravager | Troublesome. Ponderous |
| 2006 | Rodrik the Retrograde | Bothersome. Backwards |
| 2007 | Randal the Rampageous | Troublesome. Treacherous. Builds momentum |
| 2008 | Richard the Riotous | Bothersome. Can't stop pillaging |

### Warlord Level (IDs 3000-3008, names W000-W008)
Formidable characters -- hardest AI difficulty.

| ID | Name | Description |
|----|------|-------------|
| 3000 | Standard Warlord | The Standard Warlord Level Player |
| 3001 | Attila the Hun | Formidable. Treacherous. Conspiratorial. Horse-lover |
| 3002 | Margaret the Ferrous | Formidable. Treacherous. Conspiratorial. Inflexible |
| 3003 | Ian the Infamous | Formidable. Treacherous. Conspiratorial. Pachydermal |
| 3004 | Nikolas the Nefarious | Formidable. Treacherous. Conspiratorial. Unpredictable |
| 3005 | Steven the Insidious | Formidable. Treacherous. Conspiratorial. Relentless |
| 3006 | Hand the Hammer | Formidable. Treacherous. Conspiratorial. Gets to the point |
| 3007 | Roger the Unrepentant | Formidable. Treacherous. Conspiratorial. Dangerous |
| 3008 | William the Wily | Formidable. Treacherous. Conspiratorial. Reputable but not reliable |

---

## CARD (Character Cards)

| ID | Name | Content |
|----|------|---------|
| 1005 | K005 | Binary data (appears to be a binary structure, not readable text -- likely AI behavior parameters for "Ulfrid the Unlucky") |

---

## NAME (Asset Names/Paths)

Maps resource IDs to display names for asset sets. Used in asset selection popup menus.

### Terrain Sets (IDs 1000-1002)
| ID | Filename | Display Name |
|----|----------|-------------|
| 1000 | Terrain0 | Grasslands |
| 1001 | Terrain1 | Ice World |
| 1002 | Terrain2 | Mudflats |

### Army Sets (IDs 2000-2002)
| ID | Filename | Display Name |
|----|----------|-------------|
| 2000 | AM | America Armies |
| 2001 | HOGS | Warthogs II Armies |
| 2002 | SPECTA | Spectremia Armies |

### City Sets (IDs 3000-3008)
| ID | Filename | Display Name |
|----|----------|-------------|
| 3000 | AM | America Cities |
| 3001 | Conq | Conq Cities |
| 3002 | Europa | Europa Cities |
| 3003 | Hoggs | Hogg Cities |
| 3004 | Invade | Invasion Cities |
| 3005 | Land | Landlord Cities |
| 3006 | Roman | Roman Cities |
| 3007 | Spectra | Spectremia Cities |
| 3008 | Star | Star Cities |

### Shield Sets (IDs 4000-4002)
| ID | Filename | Display Name |
|----|----------|-------------|
| 4000 | AM | America Shields |
| 4001 | STAR | Star Shields |
| 4002 | ELEMENT | Elemental Shields |

---

## TxSt (Text Styles)

Text style definitions used throughout the game UI. The game's custom font is "Illuria".

### System/Framework Styles
| ID | Name | Font | Size | Style | Color |
|----|------|------|------|-------|-------|
| 128 | System Font | (system) | 12 | plain | black |
| 129 | 9pt App Font | a | 9 | plain | black |
| 130 | 12pt App Font | a | 12 | plain | black |

### Faction Color Styles (IDs 1001-1010)
These define text colors for the 8 player factions in the game. All use Chicago font, size 0 (default).

| ID | Approximate Color |
|----|-------------------|
| 1001 | Red-orange |
| 1002 | Brown-orange |
| 1003 | Green |
| 1004 | Teal/cyan |
| 1007 | Purple |
| 1008 | Blue-green |
| 1009 | Blue-purple |
| 1010 | Blue |

### Game UI Text Styles (Illuria font)
| ID | Font | Size | Style | Notes |
|----|------|------|-------|-------|
| 1005 | Illuria | 36 | plain | Large title text, yellow-gold color |
| 1006 | Illuria | 17 | plain | Standard game text, black |
| 1011 | Illuria | 17 | plain | Orange-brown color |
| 1012 | Illuria | 17 | plain | Amber/gold color |
| 1014 | Illuria | 36 | plain | Large title text, red |
| 1015 | Illuria | 17 | plain | Yellow-gold color |
| 1019 | Illuria | 17 | bold | Yellow-gold, bold |
| 1021 | Illuria | 17 | underline | Yellow-gold, underlined |
| 1022 | Illuria | 24 | plain | Medium title, yellow-gold |
| 1023 | Illuria | 20 | plain | Medium text, yellow-gold |
| 1024 | Illuria | 17 | plain | Yellow-gold color |
| 1025 | Illuria | 24 | plain | Medium title, amber/gold |
| 1029 | Illuria | 17 | plain | Blue-purple color |

### Other Styles
| ID | Font | Size | Style | Notes |
|----|------|------|-------|-------|
| 1000 | (default) | 0 | plain | Black, fallback |
| 1016 | A | 9 | plain | Small text, black |
| 1020 | A | 10 | plain | Small text, blue-purple |
| 1026 | A | 9 | bold | Small text, black, bold |
| 1027 | Geneva | 12 | bold | Medium text, yellow-gold, bold |
| 1028 | A | 10 | plain | Small text, yellow-gold |
| 1030 | (default) | 0 | plain | Yellow-gold, fallback |

---

## DLOG (Dialog Definitions)

| ID | Name | Bounds | ProcID | Items ID | Notes |
|----|------|--------|--------|----------|-------|
| 1500 | Custom save dialog | 0,0,344,224 | 1 (moveable modal) | 1500 | Save dialog with file type popup |

---

## CNTL (Controls)

| ID | Bounds | Min | Max | ProcID | Title | Notes |
|----|--------|-----|-----|--------|-------|-------|
| 1500 | 0,0,250,20 | 1500 | 70 | 1008 | File type: | Popup menu control for save dialog file type selection |

---

## MENU (Non-CMNU Menus)

| ID | Title | Items |
|----|-------|-------|
| 1500 | File type | "Macintosh Save Game", "MS-DOS Save Game" |

This menu is used by the CNTL 1500 popup in the custom save dialog.

---

## MBAR (Menu Bar Definitions)

| ID | Menu Resource IDs | Purpose |
|----|-------------------|---------|
| 128 | 1, 2, 3, 4, 5, 6, 7, 8, 9 | Main game menu bar (Apple, File, Edit, Orders, Reports, Heroes, View, History, Game) |
| 130 | 64, 65, 66, 67, 70 | Map editor/setup popup menus (Terrain Type, Army Set, City Set, Shield Set, Difficulty) |

---

## WIND (Window Definitions)

| ID | Title | Bounds | ProcID | Visible | GoAway | Notes |
|----|-------|--------|--------|---------|--------|-------|
| 1000 | New Window | 0,0,200,200 | 2 (noGrowDocProc) | false | false | Template window, not directly visible |

---

## WDEF (Window Definition Functions)

| ID | Name | Description |
|----|------|-------------|
| 3 | Infinity Windoid 2.5.1 | Third-party floating palette WDEF by Troy Gaul (c) 1991-94 Infinity Systems. Used for Overview (minimap) and Info panel windows. procID=48 maps to WDEF 3. |
| 128 | (unnamed) | Custom window definition function. 68k assembly code for drawing custom window frames with regions, color support, and auxiliary window color tables. |
| 129 | Balloon Help Window | Standard Balloon Help window definition. |

---

## MDEF (Menu Definition Functions)

| ID | Name | Description |
|----|------|-------------|
| 1 | Mercutio | Third-party MDEF (Mercutio MDEF) -- provides enhanced menu rendering with icons, colors, and custom drawing. 68k assembly code. |

---

## seg! and res! (Code Segment Maps)

### seg! 1000 -- Application Code Segments (53 entries)
Maps segment indices to named code modules in the application.

| Index | Segment Name | Purpose |
|-------|-------------|---------|
| 0 | a1MapCommands | Map command handling |
| 1 | a1Sound | Sound/music playback |
| 2 | a1Close | Document closing |
| 3 | a1HumanControl | Human player input handling |
| 4 | a1Activate | Window activation |
| 5 | a1Shortcut | Shortcut button handling |
| 6 | a1DlgReadResource | Dialog resource reading |
| 7 | a1WindowNonRes | Window non-resident code |
| 8 | a1OverviewMap | Overview/minimap window |
| 9 | a2GameSetup | Game setup dialog |
| 10 | a1Dunno | Unknown functionality |
| 11 | a1LoadScenario | Scenario file loading |
| 12 | a1AIMemory | AI memory management |
| 13 | a1AICommon | AI common routines |
| 14 | a1AIUtils | AI utility functions |
| 15 | GWriteResource | Resource writing (framework) |
| 16 | a1SAGEFiles | SAGE file handling |
| 17 | GWriteLn | Text output (framework) |
| 18 | a1Progress | Progress bar |
| 19 | GDoCommand | Command dispatch (framework) |
| 20 | GInit | Initialization (framework) |
| 21 | a1ScrollWindow | Scroll window handling |
| 22 | GReadFile | File reading (framework) |
| 23 | GWriteFile | File writing (framework) |
| 24 | a1Read | Document reading |
| 25 | GFinder | Finder integration (framework) |
| 26 | a1Finder | App Finder handling |
| 27 | GOpen2 | File open (framework) |
| 28 | a1NewDocument | New document creation |
| 29 | a1CommonNonRes | Common non-resident code |
| 30 | a1View | View handling |
| 31 | a1PIC | PICT resource handling |
| 32 | a1StreamUtil | Stream utilities |
| 33 | a1DlgOpen | Dialog open handling |
| 34 | GNonRes4 | Non-resident code 4 (framework) |
| 35 | BBNonRes | Non-resident code (framework) |
| 36 | GNonRes2 | Non-resident code 2 (framework) |
| 37 | BBOpen | Open handling (framework) |
| 38 | GNonRes3 | Non-resident code 3 (framework) |
| 39 | GReadResource | Resource reading (framework) |
| 40 | GSelCommand | Selection command (framework) |
| 41 | a1SmallCommonRoutines | Small common utility routines |
| 42 | GClose | Close handling (framework) |
| 43 | GNonRes | Non-resident code (framework) |
| 44 | GFile | File handling (framework) |
| 45 | GOpen | Open handling (framework) |
| 46 | a1ViewRes | View resources |
| 47 | a1SAGERes | SAGE resources |
| 48 | a1ImportantRes | Important resident resources |
| 49 | a1DlgRes | Dialog resources |
| 50 | ClassDescRes | Class description resources |
| 51 | a1PreferenceRes | Preferences resources |
| 52 | DefineClassRes | Class definition resources |

### seg! 129 -- Framework Segments (18 entries)
MacApp framework code segments.

| Index | Segment Name |
|-------|-------------|
| 0 | Main |
| 1 | MAMain |
| 2 | GConstructorRes |
| 3-9 | GRes, GRes1-GRes6 |
| 10-11 | BBRes, BBRes2 |
| 12 | GError |
| 13 | SADEV |
| 14 | INTENV |
| 15 | STDIO |
| 16 | STDCLIB |
| 17 | 32-bit bootstrap |

### res! 1000 -- Application Resident Segments (7 entries)
Segments that remain loaded in memory at all times.

| Index | Segment Name |
|-------|-------------|
| 0 | DefineClassRes |
| 1 | a1PreferenceRes |
| 2 | ClassDescRes |
| 3 | a1DlgRes |
| 4 | a1ImportantRes |
| 5 | a1SAGERes |
| 6 | a1ViewRes |

### res! 129 -- Framework Resident Segments (16 entries)
Framework segments that remain loaded.

| Index | Segment Name |
|-------|-------------|
| 0 | Main |
| 1 | MAMain |
| 2 | GConstructorRes |
| 3-9 | GRes, GRes1-GRes6 |
| 10 | GError |
| 11 | SADEV |
| 12 | INTENV |
| 13 | STDIO |
| 14 | STDCLIB |
| 15 | 32-bit bootstrap |

---

## Other Resources

### acur 256 -- Animated Cursor
8-frame animated cursor using CURS resources 4, 357-363. This is the spinning wait cursor shown during loading/AI turns.

### BNDL 128 -- Bundle (File Type Associations)
Owner: 'War2' (Warlords II creator code)

| File Type | FREF ID | ICN# ID | Description |
|-----------|---------|---------|-------------|
| APPL | 128 | 128 | Application |
| W2SG | 129 | 129 | Save Game |
| s2SG | 130 | 130 | Save Game Stationery |
| W2MS | 131 | 138 | Mail Save (e-mail game) |
| MooV | 132 | 131 | QuickTime Movie |
| W2SC | 133 | 133 | Scenario File |
| W2TE | 134 | 134 | Terrain Set |
| W2AR | 135 | 135 | Army Set |
| W2CI | 136 | 136 | City Set |
| W2SH | 137 | 137 | Shield Set |

### cfrg 0 -- Code Fragment Configuration
- Fragment: "Warlords II"
- Architecture: PowerPC (pwpc)
- Usage: Application
- Location: Data fork
- Stack size: 0x10000 (64KB)
- Version: 0.0.0

### CODE 0 -- Jump Table
68k code segment 0 with 11 exports (jump table entries to CODE 1 and CODE 2).

### CODE 1 -- 68k Bootstrap/Runtime
68k near-model code: initialization routines, runtime support (multiplication, division), segment loader, resource initialization (ZERO, DATA, DREL resources).

### CODE 2 -- 68k ALRT Stub (SITIM PPC needed)
Small 68k code that displays the "PowerPC required" alert (ALRT 3114) on non-PowerPC Macs, then exits.

### errs 128 & 129 -- Error Code Mappings
Maps Mac OS error codes to STR# 128 string indices for human-readable error messages.

Key mappings from errs 128:
- Error 0 -> STR# 128 (general framework errors)
- Errors -117 to -108 -> String 4 (disk error)
- Error -42 -> String 21 (resources not found)
- Error -39 -> String 31 (file not found)
- Errors -46 to -44 -> String 3 (not enough memory)
- Error -34/-33 -> String 2 (disk locked)
- Errors -5000 to -5029 -> Strings 14-15 (access privileges / printing)

### FREF 128-137 -- File Reference Resources
Maps file types to icon local IDs (used by BNDL). See BNDL section above for the complete mapping.

### mem! 129 -- Memory Configuration (Framework)
- Code reserve: 30,720 bytes
- Low space reserve: 10,240 bytes
- Stack size: 6,144 bytes

### mem! 1000 -- Memory Configuration (Application)
- Code reserve: 0 bytes
- Low space reserve: 0 bytes
- Stack size: 0 bytes (uses framework default)

### NFNT (Font Resources)
Bitmap font resources for the custom "Illuria" game font and others.

| ID | Description |
|----|-------------|
| 1634 | Bitmap font, 1-bit, char range 0x00-0xDF, max width 27, 50x24 rect, 16 ascent / 8 descent |
| 2825 | Additional font resource |
| 2828 | Additional font resource |
| 30797 | Additional font resource |
| 3352 | Additional font resource |

### SIZE -1 -- Application Size Resource
- Preferred size: 4,194,304 bytes (4 MB)
- Minimum size: 2,621,440 bytes (2.5 MB)
- Flags: save screen, accept suspend events, can background, activate on foreground switch, clean addressing, high-level event aware, local+remote HLE, stationery aware

### vers 1 -- Version Resource
- Version: 1.0.4 (release)
- Message: "Warlords II v1.0.4 (c) 1994 Strategic Studies Group"
- Region: United States

---

## Command Number Cross-Reference

This maps the command numbers used in CMNU resources to their game functions. Useful for implementing menu handlers.

### Framework Commands (MacApp)
| Cmd# | Action |
|------|--------|
| 1 | About App |
| 10 | New |
| 20 | Open |
| 30 | Save |
| 31 | Close |
| 32 | Save As |
| 34 | Revert |
| 36 | Quit |
| 101 | Undo |
| 103 | Cut |
| 104 | Copy |
| 105 | Paste |
| 106 | Clear |
| 110 | Select All |
| 120 | Typing |

### Orders Menu Commands
| Cmd# | Action |
|------|--------|
| 1400 | Group Stack |
| 1401 | Ungroup |
| 1402 | Move Group |
| 1403 | Move All Armies |
| 1404 | Cancel Path |
| 1405 | Next Group |
| 1406 | Leave Group |
| 1407 | Defend |
| 1408 | Deselect Group |
| 1409 | Show Current Army |
| 1410 | Show Army's Shadow |
| 1411 | Fight Order |
| 1412 | Disband Group |
| 1413 | Change Signpost |
| 1414 | Resign |

### Reports Menu Commands
| Cmd# | Action |
|------|--------|
| 1500 | Show Report |
| 1501 | Armies Report |
| 1502 | Cities Report |
| 1503 | Gold Report |
| 1504 | Production Report |
| 1505 | Winning Report |
| 1506 | Diplomacy |
| 1507 | Quest Report |

### Heroes Menu Commands
| Cmd# | Action |
|------|--------|
| 1600 | Inspect Heroes |
| 1601 | Plant Flag |
| 1602 | Hero Levels |
| 1603 | Search |

### View Menu Commands
| Cmd# | Action |
|------|--------|
| 1700 | Army Bonuses |
| 1701 | Items |
| 1702 | Cities (View) |
| 1703 | Build |
| 1704 | Production (View) |
| 1705 | Vectoring |
| 1706 | Ruins |
| 1707 | Stack |

### History Menu Commands
| Cmd# | Action |
|------|--------|
| 1800 | Show History |
| 1801 | Cities History |
| 1802 | Events History |
| 1803 | Gold History |
| 1804 | Winners History |
| 1805 | Triumphs |

### Game Menu Commands
| Cmd# | Action |
|------|--------|
| 1900 | End Turn |
| 1901 | Game Settings |
| 1902 | Shortcuts |
| 1903 | Strategy Map |
| 1904 | Control Window |
| 1905 | Info Window |
| 1906 | Clean Up Windows |
| 1907 | Save and End Turn |
| 1908 | Sound Volumes |

### Popup/Internal Commands
| Cmd# | Action |
|------|--------|
| 2000 | Generic popup selection |
| 2100 | Army Selection (undo buzzword) |
| 2101 | Path Change (undo buzzword) |
| 2102 | Group Change (undo buzzword) |

---

## Key Differences: CMNU vs CLAUDE.md Command Numbers

The CMNU resources in the actual binary use a **different command numbering scheme** than what was previously documented in CLAUDE.md. The CLAUDE.md values (e.g., 0x0578 for Group Stack) appear to be from a different extraction method. The actual CMNU resources use:

| Menu Item | CLAUDE.md cmd | Actual CMNU cmd |
|-----------|---------------|-----------------|
| Group Stack | 0x0578 (1400) | 1400 |
| End Turn | 0x076C (1900) | 1900 |
| Diplomacy | 0x05E2 (1506) | 1506 |

The hex values in CLAUDE.md are actually the same numbers -- 0x0578 = 1400 decimal, 0x076C = 1900 decimal, etc. The CMNU files here show them in decimal. The numbering is consistent.
