# Warlords II Function Rename List

Function address to meaningful name mappings discovered during reverse engineering.
Apply these renames after decompilation is finalized.

- **277** functions named out of **4713** total (5%)
- **4436** functions still unnamed

## How to Apply

```python
# apply_renames.py - reads this file and renames across src/
import re, os
# Parse the table rows from this file, then:
# for each .c/.h in src/, replace FUN_xxx with the new name
```


## AI Decision System (57 functions)

| Address | Proposed Name |
|---------|---------------|
| `FUN_1000931c` | `SetArmyDestination` |
| `FUN_1000da14` | `GetAdjacentArmies` |
| `FUN_1000de24` | `ActivateAttackEvent` |
| `FUN_1000df58` | `FindPrimaryThreat` |
| `FUN_1000f410` | `EndOfTurnCleanup` |
| `FUN_1000f708` | `CanArmyEnterCity` |
| `FUN_1000fba8` | `RefreshMapAfterCombat` |
| `FUN_1000fc38` | `DisbandUnit` |
| `FUN_1000fde4` | `ReleaseUnits` |
| `FUN_1000fe90` | `CalcArmyStrength` |
| `FUN_10018180` | `ExecuteArmyMove` |
| `FUN_10018574` | `GetNeighborArmies` |
| `FUN_100186cc` | `FindNearestEnemy` |
| `FUN_1001a348` | `AssignToDefense` |
| `FUN_1001a864` | `ProcessSingleAssignment` |
| `FUN_1001ba60` | `LaunchAllianceDefense` |
| `FUN_1001bbf0` | `LaunchAllianceAttack` |
| `FUN_1001cd68` | `AdvanceGroupToTarget` |
| `FUN_1001e014` | `MoveUnitToTarget` |
| `FUN_1001e160` | `MoveArmyToTarget` |
| `FUN_1001e4b0` | `CheckArmyEscort` |
| `FUN_1001e9d0` | `FindArmySlot` |
| `FUN_1001ec20` | `FilterEnemyUnits` |
| `FUN_1001ed3c` | `FindUnitsInRange` |
| `FUN_1001ee88` | `FindPath` |
| `FUN_1001eff8` | `EvaluatePosition` |
| `FUN_1001f174` | `IsPositionReachable` |
| `FUN_1001f648` | `GetArmyInfo` |
| `FUN_10020d88` | `FindBestTarget` |
| `FUN_10020ec4` | `HeroSpecialActions` |
| `FUN_10020f94` | `ScoreUnitForHire` |
| `FUN_1002be50` | `LookupCityAtPos` |
| `FUN_1002bef8` | `LookupRuinAtPos` |
| `FUN_10039e24` | `CheckHeroQuest` |
| `FUN_10039ec8` | `UpdateArmyDisplay` |
| `FUN_1004039c` | `UpdateProgressBar` |
| `FUN_10041de8` | `PrepareUnitDisplay` |
| `FUN_100448e4` | `SetupInfluenceMap` |
| `FUN_10044950` | `AllocInfluenceMap` |
| `FUN_100449bc` | `FreeInfluenceMap` |
| `FUN_1004639c` | `CheckQuestCondition` |
| `FUN_10048ccc` | `LockUnitData` |
| `FUN_10049010` | `UnlockUnitData` |
| `FUN_10049628` | `GetUnitStats` |
| `FUN_100496c8` | `SortArmyUnits` |
| `FUN_10049fa8` | `PlaceUnitInArmy` |
| `FUN_1004a0c4` | `CreateUnitTemplate` |
| `FUN_1004b11c` | `ProcessQuestReward` |
| `FUN_1004e384` | `ProcessQuestEvent` |
| `FUN_1005447c` | `ScanDefenseGrid` |
| `FUN_10054af4` | `SpawnNeutralArmy` |
| `FUN_10055c64` | `PrepareDefender` |
| `FUN_1005619c` | `GetNextDefender` |
| `FUN_10060608` | `RefreshDisplay` |
| `FUN_100635e0` | `CenterMapOnArmy` |
| `FUN_1007c714` | `DispatchNextPhase` |
| `FUN_100929a0` | `YieldToEventLoop` |

## Rendering & Graphics (41 functions)

| Address | Proposed Name |
|---------|---------------|
| `FUN_10000270` | `MoveTo_Thunk` |
| `FUN_10000288` | `LineTo_Thunk` |
| `FUN_10000870` | `GetGWorld_Wrapper` |
| `FUN_10000888` | `SetGWorld_Wrapper` |
| `FUN_100008d0` | `CopyBits_Thunk` |
| `FUN_10001290` | `HLock_Thunk` |
| `FUN_100012f0` | `CopyMask_Thunk` |
| `FUN_10002148` | `PaintRect_Thunk` |
| `FUN_100021c0` | `SetForeColor_Thunk` |
| `FUN_10003108` | `SetMacRect` |
| `FUN_10003198` | `NewGWorld_Wrapper` |
| `FUN_10003468` | `HUnlock_Thunk` |
| `FUN_10005d2c` | `DrawArmyIconFullMap` |
| `FUN_10005f90` | `DrawFullMapView` |
| `FUN_10009a98` | `LockPixels_Wrapper` |
| `FUN_10009b00` | `UnlockPixels_Wrapper` |
| `FUN_10009b48` | `BlitSpriteNormal` |
| `FUN_10009d38` | `BlitSpriteWithMask` |
| `FUN_10009fa8` | `BlitTerrainPixel` |
| `FUN_1000a008` | `EraseGWorld` |
| `FUN_1000a12c` | `CreateOrResizeGWorld` |
| `FUN_1000a714` | `DrawHLine` |
| `FUN_1000a7cc` | `DrawVLine` |
| `FUN_100226b0` | `SetRect4` |
| `FUN_100451f4` | `EnsureSpriteAndLock` |
| `FUN_1004530c` | `UnlockAndReleaseSprite` |
| `FUN_100462c8` | `EnsureSpriteLoaded` |
| `FUN_100479f4` | `SetDrawingColor` |
| `FUN_10047a64` | `BlitToScreen` |
| `FUN_10047cbc` | `FillRectWithColor` |
| `FUN_10060078` | `DrawArmyOverlayOnMap` |
| `FUN_10061980` | `DrawMovementPathArrow` |
| `FUN_100632a0` | `UpdateMinimapAroundTile` |
| `FUN_10064498` | `DrawSingleMapTile` |
| `FUN_10066bf4` | `SaveDrawingState` |
| `FUN_10066c80` | `RestoreDrawingState` |
| `FUN_10067270` | `SetupDrawingEnvironment` |
| `FUN_100913cc` | `HideMinimapCursor` |
| `FUN_1009142c` | `ShowMinimapCursor` |
| `FUN_100b0578` | `GetBitMapPtr` |
| `FUN_100b2268` | `RGBForeColor_Thunk` |

## Sound & Music (53 functions)

| Address | Proposed Name |
|---------|---------------|
| `FUN_10000900` | `SndDisposeChannel_Thunk` |
| `FUN_10000b70` | `HLock_Thunk` |
| `FUN_10001638` | `SndPlay_Thunk` |
| `FUN_10001728` | `GetResource_Thunk` |
| `FUN_10001c98` | `ReleaseHandle` |
| `FUN_100020d0` | `OpenDefaultComponent_Thunk` |
| `FUN_10002100` | `TuneSetHeader_Thunk` |
| `FUN_10002178` | `SndDoImmediate_Thunk` |
| `FUN_10002238` | `Get1NamedResource_Thunk` |
| `FUN_100026b8` | `TuneSetVolume_Thunk` |
| `FUN_10002d00` | `SndNewChannel_Thunk` |
| `FUN_10003228` | `TuneQueue_Thunk` |
| `FUN_100032e8` | `TuneGetStatus_Thunk` |
| `FUN_100035a0` | `TuneUnroll_Thunk` |
| `FUN_100035b8` | `SndChannelStatus_Thunk` |
| `FUN_10003660` | `TuneStop_Thunk` |
| `FUN_10003678` | `TunePreroll_Thunk` |
| `FUN_100276ec` | `IsMusicPrefsLoaded` |
| `FUN_100276fc` | `GetMusicVolume` |
| `FUN_1002770c` | `IsMusicEnabled` |
| `FUN_1002771c` | `GetSoundVolume` |
| `FUN_1002772c` | `IsSoundEnabled` |
| `FUN_1009150c` | `CSoundHandler_Destroy` |
| `FUN_100917d8` | `CSoundHandler_PlaySound` |
| `FUN_1009191c` | `CSoundHandler_LoadSound` |
| `FUN_100919c0` | `CSoundHandler_LoadSoundByName` |
| `FUN_10091b18` | `StopGlobalSound` |
| `FUN_10091b80` | `IsGlobalSoundPlaying` |
| `FUN_10091c04` | `StartGlobalSoundPlayback` |
| `FUN_10091ca4` | `PlayGlobalSound` |
| `FUN_10091de0` | `ResolveSoundName` |
| `FUN_10091ef0` | `IsMusicPlaying` |
| `FUN_10091f40` | `FadeAndStopMusic` |
| `FUN_10091fd4` | `DisposeMusicResources` |
| `FUN_10092080` | `LoadMusic` |
| `FUN_100923a4` | `PlayMusic` |
| `FUN_10092484` | `SelectMusic` |
| `FUN_10092a58` | `SetMusicVolume` |
| `FUN_10092aa4` | `RestoreMusic` |
| `FUN_10092ae0` | `StopMusic` |
| `FUN_10092b10` | `PlayUISound` |
| `FUN_10092be0` | `PlayNotificationSound` |
| `FUN_10093928` | `PlayAttackHitSound` |
| `FUN_10093984` | `PlayAttackMissSound` |
| `FUN_100939e0` | `PlayFanfareSound` |
| `FUN_10093a5c` | `InitCombatSounds` |
| `FUN_10093b00` | `GetSoundActiveFlag` |
| `FUN_100b19f4` | `BuildPascalString` |
| `FUN_100b1c88` | `ConcatPStrings` |
| `FUN_100b1ed0` | `ConcatBuildName` |
| `FUN_100ef2f8` | `IsHandleValid` |
| `FUN_100f56e4` | `NewPtr_Thunk` |
| `FUN_100f5708` | `DisposePtr_Thunk` |

## Serialization & File I/O (46 functions)

| Address | Proposed Name |
|---------|---------------|
| `FUN_100002a0` | `ReleaseResource` |
| `FUN_10000318` | `DisposeGeneric` |
| `FUN_100006d8` | `MakeAlias` |
| `FUN_10001758` | `ResolveAlias` |
| `FUN_10001bd8` | `GetString` |
| `FUN_10001e78` | `BlockMoveData` |
| `FUN_10002568` | `AddResource` |
| `FUN_10002598` | `DetachResource` |
| `FUN_10002ad8` | `DisposeHandle` |
| `FUN_10002ce8` | `DisposeHandleFull` |
| `FUN_1000c7b4` | `FlushCityCache` |
| `FUN_1000d9ac` | `ReleaseCityData` |
| `FUN_1001d15c` | `InitSpecialLocations` |
| `FUN_1001e330` | `WriteCityRecords` |
| `FUN_1001e3ec` | `ReadCityRecords` |
| `FUN_1002869c` | `PostLoadInitialization` |
| `FUN_10029dcc` | `CopyResourceToDoc` |
| `FUN_10029e84` | `WriteGameState` |
| `FUN_1002a864` | `WriteGameStateCrossFormat` |
| `FUN_1002bdc4` | `GetAIStateSnapshot` |
| `FUN_1003865c` | `SerializeMoveData` |
| `FUN_10038860` | `ClearCommandRecords` |
| `FUN_10038890` | `SaveTurnState` |
| `FUN_10040408` | `InitDataStructures` |
| `FUN_1004248c` | `PostLoadCityInit` |
| `FUN_10045170` | `InitCityNames` |
| `FUN_10045ac8` | `InitArmyData` |
| `FUN_10050bb0` | `GetScoreSnapshot` |
| `FUN_100513b4` | `ProgressCreate` |
| `FUN_100514d8` | `ProgressUpdate` |
| `FUN_100523a8` | `CloseStream` |
| `FUN_10052490` | `StreamRead` |
| `FUN_100524d4` | `StreamWrite` |
| `FUN_10052518` | `StreamSetPosition` |
| `FUN_100525a0` | `ByteSwap16` |
| `FUN_100525cc` | `ByteSwap32` |
| `FUN_1005668c` | `ReadSCNResource` |
| `FUN_10057334` | `LoadMapResources` |
| `FUN_10057448` | `LoadScenario` |
| `FUN_10058c64` | `WriteSCNResource` |
| `FUN_1005f144` | `ProgressDelay` |
| `FUN_100db26c` | `FocusObject` |
| `FUN_100db2f4` | `EndFocus` |
| `FUN_100db328` | `MarkChanged` |
| `FUN_100ef580` | `FreeBlock` |
| `FUN_100fb300` | `SetResourceType` |

## Map Generation (75 functions)

| Address | Proposed Name |
|---------|---------------|
| `FUN_100012c0` | `StringLength` |
| `FUN_10003768` | `AbsShort` |
| `FUN_1002269c` | `StoreCoords` |
| `FUN_10025f98` | `InitPlayerData` |
| `FUN_1002b83c` | `CheckLandConnectivity` |
| `FUN_10049e68` | `InitArmyProduction` |
| `FUN_100515f4` | `InitializeMapToOcean` |
| `FUN_100516c0` | `GenerateRandomMap` |
| `FUN_100517f8` | `SetupAndGenerateRandomMap` |
| `FUN_10051d60` | `NotifyTileChanged` |
| `FUN_10051d64` | `NotifyAllTilesChanged` |
| `FUN_10051dc8` | `ClampToMapBounds` |
| `FUN_10051e1c` | `RandomScatter` |
| `FUN_1009e81c` | `PlacePlayerSeedPoint` |
| `FUN_1009ea20` | `SortStartPointsByAngle` |
| `FUN_1009eb70` | `ChebyshevDistance` |
| `FUN_1009ebec` | `CalculateDirectionVector` |
| `FUN_1009eef8` | `ExpandPlayerZone` |
| `FUN_1009f350` | `ConnectWaypoints` |
| `FUN_1009f524` | `ConnectWaypointsViaEdge` |
| `FUN_1009f864` | `ConnectAdjacentZones` |
| `FUN_1009fad4` | `ShouldBeCoastal` |
| `FUN_1009fc58` | `ConvertToTerrainCodes` |
| `FUN_1009ff14` | `HasNeighborOnLand` |
| `FUN_1009ffa4` | `HasNeighborWithTerrain` |
| `FUN_100a0038` | `ExpandCoastalTiles` |
| `FUN_100a018c` | `AddExtraLandPatches` |
| `FUN_100a01e8` | `PlacePlayerStartZones` |
| `FUN_100a1d8c` | `CalculateLandTarget` |
| `FUN_100a1e28` | `CheckLandTarget` |
| `FUN_100a1e50` | `GrowLandBlob` |
| `FUN_100a2310` | `FillEnclosedWater` |
| `FUN_100a271c` | `GenerateLandMasses` |
| `FUN_100a2760` | `PlacePlayerCities` |
| `FUN_100a28dc` | `PlaceNeutralCities` |
| `FUN_100a2a58` | `AssignCityAlliances` |
| `FUN_100a31d8` | `DrawRoadFromCity` |
| `FUN_100a3280` | `DrawRoadBetweenNeutral` |
| `FUN_100a32b8` | `DrawRoadBetweenPlayer` |
| `FUN_100a3304` | `DrawStandaloneRoad` |
| `FUN_100a33ac` | `GenerateRoadsBetweenCities` |
| `FUN_100a35cc` | `SmoothTerrainAroundCities` |
| `FUN_100a39ac` | `EnsureCityCoastalAccess` |
| `FUN_100a3a80` | `PlaceCitiesAndRoads` |
| `FUN_100a49cc` | `BuildRoadConnectivityGraph` |
| `FUN_100a4ae8` | `AssignTerrainGraphics` |
| `FUN_100a4e0c` | `PlaceHeroesOnMap` |
| `FUN_100a52b8` | `SaveMapToResources` |
| `FUN_100a6060` | `SaveScenarioData` |
| `FUN_100a6204` | `FinalizeAndSave` |
| `FUN_100a6298` | `LoadScenarioTemplate` |
| `FUN_100a6364` | `ScatterSwampTiles` |
| `FUN_100a64c0` | `PlaceSwampCluster` |
| `FUN_100a66a8` | `PlaceSwampClusters` |
| `FUN_100a6708` | `ScanForExistingCities` |
| `FUN_100a67e0` | `PlaceNeutralCityOnLand` |
| `FUN_100a6ae8` | `RegisterCitiesAndAddNeutral` |
| `FUN_100a6b68` | `FindRuinsLocation` |
| `FUN_100a6f38` | `PlaceRuins` |
| `FUN_100a7248` | `RegisterCities` |
| `FUN_100a88d0` | `AssignPlayerHomeCities` |
| `FUN_100a8d88` | `CutWaterChannel` |
| `FUN_100a9628` | `ErodeLandTiles` |
| `FUN_100a9c08` | `PlaceRiverWaterChannels` |
| `FUN_100a9d34` | `FindNextRoadSegment` |
| `FUN_100a9f78` | `BuildRoadSegment` |
| `FUN_100aafb8` | `GenerateRoadNetwork` |
| `FUN_100ab22c` | `AssignPlayerColors` |
| `FUN_100ab2c4` | `RollPlayerGold` |
| `FUN_100ab334` | `AssignPlayerStartPositions` |
| `FUN_100ab368` | `DrawTerrainChain` |
| `FUN_100ab9e4` | `SmoothMountainRegions` |
| `FUN_100abb68` | `SmoothForestRegions` |
| `FUN_100abcec` | `PlaceMountainForestChains` |
| `FUN_100ef510` | `ReleaseHandle` |

## Core Utilities (5 functions)

| Address | Proposed Name |
|---------|---------------|
| `FUN_10001dd0` | `DrawNumber` |
| `FUN_1000a884` | `CalcDistance` |
| `FUN_1003206c` | `SetDrawColor` |
| `FUN_1005f230` | `RandomRange` |
| `FUN_10117884` | `ResourceRead` |
