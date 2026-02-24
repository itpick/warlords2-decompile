# Warlords II 68k Code Segment Index

Extracted from the Warlords II CD (April 1996 build).
Total: 167 CODE segments, 842,194 bytes of 68k code.
Decompiled to 164,935 lines of C.

## Segments by Category

### Game Core

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 2 | Game code | 1,524 | 4 |
| 3 | New code for Deluxe | 258 | 4 |
| 12 | main | 360 | 4 |
| 13 | a1Init | 4,462 | 284 |
| 17 | a1NotNeeded | 1,952 | 425 |
| 26 | a1NewDocument | 1,551 | 202 |
| 27 | a1Terminate | 450 | 49 |
| 28 | a1Settings | 642 | 4 |
| 29 | a1Read | 13,008 | 1,776 |
| 30 | a1Finder | 51 | 4 |
| 31 | a1CloseDocument | 1,621 | 191 |
| 42 | a1SmallCommonRoutines | 9,255 | 1,607 |
| 46 | a1Dunno | 2,844 | 330 |
| 121 | a1CommonNonRes | 2,390 | 345 |
| 137 | a0NotAllocatedYet | 1,857 | 180 |
| 143 | a1DunnoYet | 3,005 | 239 |

### UI - Dialogs

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 15 | a1DlgRes | 28,570 | 2,910 |
| 18 | a1DlgOpen | 1,921 | 337 |
| 19 | a1DlgClose | 76 | 17 |
| 21 | a1DlgNonRes | 667 | 142 |
| 22 | a1DlgReadResource | 228 | 62 |
| 37 | a1ViewRes | 401 | 33 |
| 47 | a2BuildProd | 2,461 | 337 |
| 57 | a2GameSetup | 23,752 | 3,759 |
| 63 | a2HeroInfo | 7,019 | 1,110 |
| 64 | a2HeroHire | 5,054 | 607 |
| 65 | a2Items | 163 | 24 |
| 66 | a2SearchSage | 5,484 | 839 |
| 70 | a2EndOfGame | 968 | 163 |
| 75 | a2ScenarioSelect | 5,309 | 947 |
| 76 | a2GameOptions | 4,907 | 1,184 |
| 127 | a2Resign | 877 | 82 |
| 134 | a2HeroLevels | 1,334 | 4 |
| 141 | a2SideSetup | 1,230 | 144 |

### UI - Main View

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 40 | a1WindowNonRes | 2,239 | 348 |
| 56 | a1TidyWindow | 1,607 | 4 |
| 67 | a1View | 24,789 | 3,740 |
| 68 | a1Activate | 146 | 22 |
| 126 | a1ScrollWindow | 1,349 | 152 |
| 128 | a1OverviewMap | 6,901 | 849 |

### City System

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 45 | a1City | 15,209 | 5,023 |
| 72 | a1Production | 2,960 | 390 |

### Army & Movement

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 23 | a1MapCommands | 7,975 | 1,976 |
| 24 | a1Shortcut | 3,189 | 359 |
| 44 | a1HumanControl | 10,823 | 1,877 |
| 79 | a2Stack | 8,438 | 1,226 |
| 115 | a1Move | 13,971 | 2,702 |
| 122 | a1Dispand | 581 | 55 |
| 123 | a1GroupSelection | 3,039 | 540 |
| 129 | a1SetupAndFight | 351 | 4 |

### Combat

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 60 | a2FightOrder | 3,730 | 641 |
| 104 | a1Fight1Possibly | 10,933 | 2,278 |
| 108 | a1Fight1 | 4,865 | 645 |
| 131 | a1Fight2 | 836 | 4 |
| 132 | a1Fight3 | 164 | 4 |
| 133 | a1Fight2Possibly | 6,031 | 775 |

### AI System

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 58 | a1AIUtils | 1,756 | 313 |
| 81 | a1AIStep0 | 644 | 83 |
| 82 | a1AIStep1 | 10,929 | 1,270 |
| 83 | a1AIStep2 | 589 | 74 |
| 84 | a1AIStep3 | 425 | 61 |
| 85 | a1AIStep4 | 85 | 4 |
| 86 | a1AIStep5 | 85 | 4 |
| 87 | a1AIStep6 | 581 | 68 |
| 88 | a1AIStep7 | 850 | 133 |
| 89 | a1AIStep8 | 174 | 28 |
| 90 | a1AIStep9 | 2,792 | 532 |
| 91 | a1AIStep10 | 85 | 4 |
| 92 | a1AIStep11 | 1,104 | 179 |
| 93 | a1AIStep12 | 223 | 44 |
| 94 | a1AIStep13 | 85 | 4 |
| 95 | a1AIStep14 | 284 | 36 |
| 96 | a1AIStep15 | 1,115 | 226 |
| 97 | a1AIStep16 | 350 | 44 |
| 98 | a1AIStep17 | 1,663 | 266 |
| 99 | a1AIStep18 | 268 | 43 |
| 100 | a1AIStep19 | 144 | 4 |
| 101 | a1AIMemory | 1,688 | 311 |
| 102 | a1AICommon | 9,366 | 1,515 |
| 105 | a1AIStep1and13 | 5,161 | 652 |
| 106 | a1AIStep1and4 | 7,131 | 1,121 |
| 107 | a1AIStep6and16 | 1,629 | 288 |
| 109 | a1AISearch | 2,049 | 156 |
| 110 | a1AIStep5and10 | 1,480 | 134 |
| 111 | a1AIStep3and14 | 1,152 | 4 |
| 113 | a1AIMove | 5,196 | 532 |
| 114 | a1AIFight | 1,906 | 220 |
| 118 | a1AIProduction | 890 | 166 |
| 119 | a1AIStep15and17 | 557 | 43 |
| 120 | a1AIStep7and12 | 93 | 4 |

### Diplomacy & Reports

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 52 | a1Diplomacy | 5,657 | 783 |
| 53 | a1Report | 5,130 | 756 |
| 54 | a1History | 10,759 | 1,471 |
| 112 | a1Comms | 858 | 105 |
| 130 | a1NewTurn | 2,807 | 381 |
| 136 | a1Resign | 658 | 114 |
| 139 | a1Raze | 689 | 98 |
| 140 | a1Req | 1,265 | 94 |

### Random Map

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 20 | a1Random | 45,513 | 5,467 |

### Hero System

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 63 | a2HeroInfo | 7,019 | 1,110 |
| 64 | a2HeroHire | 5,054 | 607 |
| 65 | a2Items | 163 | 24 |
| 66 | a2SearchSage | 5,484 | 839 |
| 74 | a2Search | 13,690 | 3,303 |
| 103 | a1HeroCheck | 822 | 170 |
| 135 | a1Quest | 6,673 | 1,005 |

### Sound & Music

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 125 | a1Sound | 7,143 | 1,335 |

### Search & Quest

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 66 | a2SearchSage | 5,484 | 839 |
| 74 | a2Search | 13,690 | 3,303 |
| 109 | a1AISearch | 2,049 | 156 |
| 135 | a1Quest | 6,673 | 1,005 |

### File I/O

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 29 | a1Read | 13,008 | 1,776 |
| 48 | a1Write | 9,470 | 1,765 |
| 49 | a1StreamUtil | 509 | 181 |
| 51 | GWriteResource | 7,168 | 2,037 |
| 59 | GWriteFile | 8,097 | 2,269 |
| 116 | a1LoadScenario | 1,950 | 241 |
| 117 | a1InitMainData | 10,286 | 1,411 |
| 138 | a1SAGEFiles | 2,059 | 234 |

### Turn Management

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 71 | a1Progress | 2,282 | 161 |
| 72 | a1Production | 2,960 | 390 |
| 73 | a1CloseSetup | 173 | 4 |
| 78 | a1Segment | 1,848 | 190 |
| 80 | a2StartOfTurn | 12,568 | 2,777 |
| 130 | a1NewTurn | 2,807 | 381 |

### Help & Tutorial

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 25 | a2About | 1,546 | 59 |
| 36 | a1Help | 7,846 | 857 |
| 62 | a1Tutorial | 2,495 | 363 |

### MacApp Framework

| ID | Name | Code Size | Decompiled Lines |
|---:|------|----------:|------------------:|
| 1 | MA Derived Classes | 11,628 | 210 |
| 5 | STDCLIB | 10,436 | 2,719 |
| 6 | SANELIB | 1,180 | 91 |
| 7 | inline | 20,251 | 7,374 |
| 8 | Main | 9,035 | 3,529 |
| 10 | GConstructorRes | 5,460 | 1,675 |
| 11 | a1PreferenceRes | 918 | 77 |
| 14 | a1ImportantRes | 15,882 | 3,256 |
| 16 | DefineClassRes | 9,230 | 4,042 |
| 33 | GSelCommand | 8,034 | 2,181 |
| 34 | GRes2 | 14,722 | 3,981 |
| 35 | GNonRes2 | 8,011 | 2,285 |
| 38 | GNonRes4 | 5,336 | 955 |
| 39 | GClose | 4,671 | 1,285 |
| 41 | GRes4 | 18,152 | 5,193 |
| 43 | a1Close | 163 | 28 |
| 50 | BBOpen | 10,790 | 3,015 |
| 69 | GRes3 | 18,412 | 4,949 |
| 77 | GReadResource | 6,876 | 1,833 |
| 124 | a1SAGERes | 3,440 | 357 |
| 142 | GRes5 | 12,758 | 3,795 |
| 144 | GRes6 | 11,357 | 3,558 |
| 146 | MAMain | 13,746 | 3,185 |
| 147 | GInit | 10,487 | 2,071 |
| 148 | GRes1 | 67 | 4 |
| 149 | GNonRes | 13,123 | 3,097 |
| 150 | GOpen | 18,189 | 5,004 |
| 151 | GFinder | 508 | 134 |
| 152 | GFile | 2,488 | 761 |
| 153 | GTerminate | 608 | 57 |
| 154 | MANever | 83 | 28 |
| 155 | GDoCommand | 8,733 | 1,949 |
| 156 | GClipboard | 3,087 | 637 |
| 157 | GError | 599 | 40 |
| 158 | GRes | 6,145 | 1,822 |
| 159 | ClassDescRes | 2,230 | 592 |
| 160 | BBRes | 16,519 | 3,812 |
| 162 | BBNonRes | 13,263 | 2,665 |
| 163 | GReadFile | 2,087 | 402 |
| 164 | GDebug | 56 | 37 |
| 165 | GHelp | 84 | 4 |
| 166 | GOpen2 | 1,330 | 374 |
| 167 | BBRes2 | 10,260 | 1,818 |
| 168 | MAMiniInit | 1,980 | 156 |
| 171 | GNonRes3 | 1,392 | 380 |
| 172 | TESelCommand | 2,187 | 509 |

