# Warlords II Decompilation -- Code Map

Complete function index for `src/main.c` organized by subsystem.
Line numbers reference the current source and will shift as code evolves.

---

## Global State & Constants (lines 1-660)

| Line | Name | Description |
|------|------|-------------|
| 28-38 | Window pointers | `gMainGameWindow`, `gOverviewWindow`, `gInfoWindow`, `gStatusWindow` |
| 56-90 | Game option flags | `sDone`, `sMapLoaded`, `sPlayerSide`, `sFactionAI[]`, option booleans |
| 93 | `sGameSpeed` | Game speed multiplier (default 1) |
| 107-109 | Sound levels | `sSoundMaster`, `sSoundEffects`, `sSoundMusic` (0-10) |
| 172-219 | Quest & item data | `sPlayerQuests[8]`, `sItemTable[MAX_ITEMS]` |
| 221-235 | Player colors | `sPlayerColors[9]` RGB values for factions + neutral |
| 238-248 | Terrain sprite defs | `TERRAIN_TILE_W/H=40`, `TERRAIN_COLS=16`, `sTerrainGW/GW2`, `sRoadGW` |
| 255-281 | Minimap palette | `sMapColor[]`, `sMinimapPalette[]` |
| 286-311 | Army/city sprites | `sArmyGW[10]`, `sArmyBgColor[]`, `sCityGW`, `sCityBgColor` |
| 314-342 | Viewport & selection | `sViewportX/Y`, `sSelectedArmy`, undo state, tooltip state |
| 352-364 | History tracking | Event history, gold/city history per faction |
| 415-492 | Fog of war | `sFogExplored/Visible[8][]`, signpost data |
| 583-611 | UI icon handles | `sShieldIcons[]`, `sStatusIcons[]`, `sCmdIcons[]`, shortcuts |
| 649-662 | Scenario list | `sScenarioList[]`, `sScenarioCount` |

---

## Sound System (lines 125-170)

| Line | Function | Description |
|------|----------|-------------|
| 125 | `InitSoundSystem()` | Allocates sound channel via `SndNewChannel` |
| 131 | `PlaySound(sndID)` | Plays sound resource by ID, checks master volume |
| 149 | `CleanupSoundSystem()` | Disposes sound channel |

---

## History & Fog (lines 366-498)

| Line | Function | Description |
|------|----------|-------------|
| 366 | `RecordEvent(turn, type, player, text)` | Stores event in circular history buffer |
| 385 | `RecordTurnSnapshot()` | Records gold/cities per player for history graphs |
| 418 | `FogSetBit(map, x, y)` | Sets fog of war bit for tile |
| 426 | `FogGetBit(map, x, y)` | Reads fog bit for tile |
| 435 | `FogReveal(player, cx, cy)` | Reveals tiles in radius around a point |
| 448 | `FogUpdatePlayer(player)` | Recalculates visible tiles for player (all armies + cities) |

---

## Utility (lines 500-580)

| Line | Function | Description |
|------|----------|-------------|
| 500 | `ShowBriefMessage(pMsg)` | Shows temporary centered message window |
| 534 | `GetUnitTypeName(unitType, pName)` | Reads unit name from game state gs+0xFB6 or uses hardcoded fallback |
| 566 | `GetProductionTurns(unitType)` | Returns production time for a unit type |

---

## Game Initialization (lines 664-1160)

| Line | Function | Description |
|------|----------|-------------|
| 664 | `GameInit()` | Master game setup: creates armies, sets gold, initializes fog, quests, diplomacy |
| 919 | `TryLoadScenario()` | Opens .SCN resource file and loads scenario data into game state |

---

## Resource Loading (lines 1164-1752)

| Line | Function | Description |
|------|----------|-------------|
| 1164 | `DrawMarbleBackground(r)` | Tiles PICT 1001 marble texture into a rect |
| 1201 | `LoadTerrainSprites()` | Loads terrain PICTs (30022/30023/30021) into GWorlds, reads bg color |
| 1287 | `ScanArmySets()` | Enumerates army sprite folders available |
| 1362 | `LoadArmySprites()` | Loads army PICTs (20000+) from selected army set folder |
| 1463 | `LoadCitySprites()` | Loads city PICT 25000 from Cities folder |
| 1519 | `LoadShieldIcons()` | Loads cicn 128-135 shield icons from Shields resource file |
| 1561 | `RemapShieldColors()` | Adjusts shield cicn CLUTs to match pltt 1000 palette |
| 1623 | `LoadButtonIcons()` | Loads cicn 1000-1025, status icons 1005-1009, diplomacy 1020, swords 1007 |
| 1656 | `ScanForScenarios()` | Scans scenario folder for .SCN files |

---

## Random Map Generation (lines 1756-2458)

| Line | Function | Description |
|------|----------|-------------|
| 1756 | `GenerateRandomMap(scenWin, mapW, mapH, numPlayers, numCities, numRuins)` | Full random map generator: land, terrain, cities, roads, armies |

Key sub-sections within GenerateRandomMap:
- **1800-1900**: Land mass generation (flood fill from seed points)
- **1900-1980**: Terrain type assignment (forest, hills, mountains)
- **1980-1987**: Shore detection (RTILE_SHORE=16 lighter, RTILE_WATER=20 darker)
- **1990-2100**: City placement (player capitals + neutral cities)
- **2100-2200**: Road network between cities (autotile pass, 4-dir neighbor mask)
- **2200-2300**: Ruin/temple placement
- **2300-2458**: Army setup (starting armies at capitals, neutral garrisons)

---

## Scenario Selection & Game Setup (lines 2459-4662)

| Line | Function | Description |
|------|----------|-------------|
| 2459 | `ShowScenarioSelection()` | Full scenario picker dialog with PICT 3000 background |
| 3099 | `ApplyOptionsPreset(preset)` | Sets game options for Beginner/Intermediate/Advanced |
| 3151 | `CalcDifficultyRating(skillLevel)` | Returns numerical difficulty rating |
| 3201 | `ShowEditOptions()` | Options editing sub-dialog |
| 3666 | `ShowGameSetup()` | Faction selection, AI toggle, difficulty, neutral strength |

---

## Map Rendering (lines 4669-5808)

| Line | Function | Description |
|------|----------|-------------|
| 4669 | `DrawMapInWindow(win)` | **Main map renderer**: terrain tiles, roads, cities, armies, fog |
| 4733-4820 | (terrain section) | Sprite sheet cell extraction: `idx%96 → col=local%16, row=local/16` |
| 4796-4811 | (road section) | Road overlay from PICT 30021: `(rd-1)%16, (rd-1)/16` |
| 4830-4990 | (city section) | City icons from PICT 25000 with faction-colored columns |
| 5060-5200 | (army section) | Army sprites from PICT 20000+ with mode 36 transparency |
| 5200-5400 | (overlay section) | Selection highlight, path arrows, tooltips |

---

## Minimap & Overview (lines 5809-6072)

| Line | Function | Description |
|------|----------|-------------|
| 5809 | `DrawOverviewInWindow(win)` | Draws minimap with terrain colors, city dots, army indicators |
| 6000 | `ToggleMinimapZoom()` | Cycles minimap size: small → medium → large |

---

## City & Army Dialogs (lines 6074-6780)

| Line | Function | Description |
|------|----------|-------------|
| 6074 | `ShowCityInfo(cityIndex)` | City info dialog (own=production, enemy/neutral=info only) |
| 6414 | `ShowArmyInspect(armyIndex)` | Army details with unit list, stats, items |
| 6696 | `SelectNextArmy()` | Cycles to next idle army for current player |

---

## Combat & Movement (lines 6781-8400)

| Line | Function | Description |
|------|----------|-------------|
| 6781 | `RemoveArmy(armyIndex)` | Removes army record, clears map presence |
| 6798 | `TryMergeArmies(movingIdx)` | Merges two stacks at same location if compatible |
| 6893 | `GetMovementCost(mapX, mapY, unitClass)` | Terrain cost lookup via gs+0x60C table |
| 6946 | `RemoveArmy(armyIndex)` | (implementation) Zeroes army record, updates count |
| 6983 | `ResolveCombat(attackerIdx, defenderIdx)` | Full combat resolution with per-unit rolls |
| 7717 | `ShowCityCaptureNotification(...)` | Dialog announcing city captured |
| 7851 | `ShowEliminationNotification(...)` | Dialog announcing player eliminated |
| 7977 | `CheckAndResolveCombat(movingArmyIdx)` | Checks for enemy at destination, triggers combat |

---

## Report & Diplomacy Dialogs (lines 8402-9540)

| Line | Function | Description |
|------|----------|-------------|
| 8403 | `ShowReportDialog(tab)` | Multi-tab report: Army/City/Gold/Production tabs |
| 8705 | `ShowDiplomacyDialog()` | Diplomacy status with War/Peace/Ally per faction |
| 8933 | `ShowHistoryDialog(tab)` | History graphs: Gold/Cities over time |
| 9334 | `ShowChangeSignpost()` | Edit signpost text at current location |
| 9542 | `ShowFightOrder(armyIndex)` | Pre-combat unit ordering dialog |

---

## About & Settings Dialogs (lines 9772-10244)

| Line | Function | Description |
|------|----------|-------------|
| 9772 | `ShowAboutDialog()` | About Warlords II credits |
| 9903 | `ShowSoundVolumesDialog()` | Sound/music volume sliders |
| 10080 | `ShowShortcutsDialog()` | Keyboard shortcut reference |

---

## Quest System (lines 10246-10672)

| Line | Function | Description |
|------|----------|-------------|
| 10246 | `GenerateQuest(player)` | Creates a new quest for player (capture city / find item / defeat faction) |
| 10331 | `CheckQuestProgress(player)` | Tests quest completion conditions |
| 10407 | `ShowQuestDialog()` | Displays current quest text and status |

---

## Game Settings & Triumphs (lines 10673-11190)

| Line | Function | Description |
|------|----------|-------------|
| 10673 | `ShowGameSettingsDialog()` | In-game settings editing |
| 11017 | `ShowTriumphsDialog()` | Medal/triumph display for current player |

---

## Hero & Item System (lines 11191-12005)

| Line | Function | Description |
|------|----------|-------------|
| 11191 | `GetHeroItemBonus(armyIdx, outBattle, outCommand, outMove, outGold)` | Sums all item bonuses for hero |
| 11227 | `GiveItemToHero(armyIdx, itemId)` | Assigns item to hero's inventory |
| 11249 | `ShowItemsDialog(armyIdx)` | Hero item inventory display |
| 11469 | `ShowHeroInspect()` | Hero detail dialog with stats, XP, items |
| 11719 | `GetHeroLevel(xp)` | XP-to-level conversion (0-3) |
| 11728 | `GetXPForNextLevel(xp)` | Returns XP needed for next level |
| 11737 | `IsHeroFemale(armyIdx)` | Checks hero gender flag |
| 11754 | `GetHeroTitle(level, female, out)` | Returns rank title string |
| 11785 | `ShowHeroLevels()` | Hero level-up display |

---

## Ruins & Stack Dialogs (lines 12007-12630)

| Line | Function | Description |
|------|----------|-------------|
| 12007 | `ShowRuinsDialog()` | Ruin search result display |
| 12280 | `ShowStackDialog()` | Army stack management (split/merge units) |
| 12466 | `TryAutoSearchRuin(armyIdx)` | Auto-searches ruin when hero arrives |
| 12476 | `MoveAllArmies()` | Executes queued movement orders for all armies |
| 12630 | `InvalidateAllGameWindows()` | Forces redraw of all game windows |

---

## Army Selection & Hero Hire (lines 12657-13420)

| Line | Function | Description |
|------|----------|-------------|
| 12657 | `ShowArmySelection(playerIdx)` | Initial army selection at game start (270x300 modal) |
| 12983 | `ShowHeroHire(playerIdx, initialOffer)` | Hero recruitment dialog with PICT 3200/3201 |
| 13423 | `CheckVictoryConditions()` | Tests if any player has won |
| 13498 | `ShowVictoryDialog(victory)` | Victory/defeat screen |

---

## City Production (lines 13676-13910)

| Line | Function | Description |
|------|----------|-------------|
| 13676 | `ShowCityProductionDialog(cityIndex)` | Unit production selection for owned cities |

---

## AI System (lines 13911-14740)

| Line | Function | Description |
|------|----------|-------------|
| 13911 | `ExecuteAITurn(aiPlayer)` | Full AI turn: production, movement, combat decisions |

---

## Turn Flow (lines 14740-16130)

| Line | Function | Description |
|------|----------|-------------|
| 14740 | `ShowIncomeSummary(cityIncome, upkeep, newGold)` | Turn income breakdown dialog |
| 14857 | `ShowTurnSplash(playerIdx)` | "Faction Name - Turn N" announcement |
| 14968 | `ProcessNeutralCities()` | Neutral city army production (Strong/Active modes) |
| 15091 | `AdvanceToNextPlayer()` | Advances turn, processes neutral cities, checks victory |

---

## Save/Load (lines 16133-16480)

| Line | Function | Description |
|------|----------|-------------|
| 16139 | `DoAutosave()` | Saves to autosave file |
| 16155 | `SaveGameToFile(spec)` | Writes game state to FSSpec |
| 16280 | `LoadGameFromFile(spec)` | Reads game state from FSSpec |
| 16422 | `DoSaveAs()` | Save As... file dialog |
| 16433 | `DoSave()` | Quick save to current file |
| 16442 | `DoOpen()` | Open file dialog |
| 16477 | `ShowVectoringDialog(cityIndex)` | City production vectoring |

---

## Menu Handling (lines 16749-18084)

| Line | Function | Description |
|------|----------|-------------|
| 16749 | `HandleMenuChoice(menuResult)` | Master menu dispatcher for all menu commands |

---

## Input & Event Handling (lines 18085-19240)

| Line | Function | Description |
|------|----------|-------------|
| 18085 | `TryAutoSearchRuin(armyIdx)` | (implementation) Searches ruin when hero arrives |
| 18135 | `MoveSelectedArmyBy(dx, dy)` | Keyboard army movement handler |
| 18219 | `HandleMouseDown(event)` | Master mouse click dispatcher |
| 18871 | `HandleUpdate(event)` | Window update handler (calls Draw*InWindow) |

---

## Main & Info Window Drawing (lines 19241-20072)

| Line | Function | Description |
|------|----------|-------------|
| 19241 | `main()` | (first main - solo build) App setup, window creation, event loop |
| ~18929 | (Info panel drawing) | Full control panel with marble bg, rounded grey buttons |
| 20065 | `main(argc, argv)` | (second main - full build) Same as above |
