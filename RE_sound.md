# Warlords II - Sound and Music System Reverse Engineering

## Executive Summary

The Warlords II sound system consists of two independent subsystems:

1. **Sound Effects (SFX)** -- Uses the Mac Sound Manager (`SndPlay`, `SndDoImmediate`, `SndNewChannel`) to play `snd ` resources through a single sound channel managed by the `CSoundHandler` class.

2. **Background Music** -- Uses the QuickTime Music Architecture (QTMA) Tune Player component (`TuneQueue`, `TuneSetHeader`, `TuneSetVolume`) to play `Tune` resources (MIDI-based music).

Both subsystems have independent volume controls stored in the game preferences structure, and both are loaded from scenario-specific or application resource forks.

---

## 1. Mac Toolbox API Thunk Mapping

All Mac Toolbox calls go through PEF import thunk stubs at the start of the binary. Each thunk is 24 bytes and calls through a transition vector (TVect) pointer.

### Sound Manager Thunks

| Thunk Address | Mac API Function    | TVect Pointer    | Description                              |
|---------------|---------------------|------------------|------------------------------------------|
| `10002178`    | `SndDoImmediate`    | `puRam101158d0`  | Send immediate command to sound channel   |
| `10002d00`    | `SndNewChannel`     | `puRam101158d4`  | Create a new sound channel               |
| `10000900`    | `SndDisposeChannel` | `puRam101158d8`  | Dispose of a sound channel               |
| `10001638`    | `SndPlay`           | `puRam101158dc`  | Play a snd resource on a channel         |
| `100035b8`    | `SndChannelStatus`  | `puRam101158e0`  | Query channel playback status            |

### QuickTime Tune Player Thunks

| Thunk Address | Mac API Function       | TVect Pointer    | Description                              |
|---------------|------------------------|------------------|------------------------------------------|
| `100020d0`    | `OpenDefaultComponent`  | (varies)         | Open 'tune' component                    |
| `10002100`    | `TuneSetHeader`        | (varies)         | Set MIDI instrument header               |
| `10003228`    | `TuneQueue`            | (varies)         | Queue music data for playback            |
| `100032e8`    | `TuneGetStatus`        | (varies)         | Check if music is still playing          |
| `10003660`    | `TuneStop`             | (varies)         | Stop music playback                      |
| `100035a0`    | `TuneUnroll`           | (varies)         | Unload/cleanup tune player               |
| `100026b8`    | `TuneSetVolume`        | (varies)         | Set music playback volume                |
| `10003678`    | `TunePreroll`          | (varies)         | Prepare tune player for playback         |

### Supporting Resource Manager Thunks

| Thunk Address | Mac API Function        | Description                              |
|---------------|-------------------------|------------------------------------------|
| `10001728`    | `GetResource`           | Load resource by type + ID               |
| `10002238`    | `Get1NamedResource`     | Load resource by type + name             |
| `10002598`    | `DetachResource`        | Detach resource from resource map        |
| `10000b70`    | `HLock`                 | Lock handle in memory                    |
| `10002ad8`    | `DisposeHandle`         | Free a memory handle                     |
| `100f56e4`    | `NewPtr`                | Allocate pointer-based memory            |
| `100f5708`    | `DisposePtr`            | Free pointer-based memory                |

---

## 2. CSoundHandler Class

The `CSoundHandler` class manages a single Mac Sound Manager channel for playing sound effects. The class name is confirmed by binary strings:
- `"CSoundHandler::~CSoundHandler -- SndChannelStatus returned %d"` (at 0x127CB6)
- `"CSoundHandler::~CSoundHandler -- SndChannel is still busy"` (at 0x127CF6)
- `"CSoundHandler::~CSoundHandler -- SndDisposeChannel returned %d"` (at 0x127D32)
- `"CSoundHandler::PlaySound -- quietCmd returned %d"` (at 0x127D73)
- `"CSoundHandler::PlaySound -- ampCmd returned %d"` (at 0x127DC8)
- `"CSoundHandler::PlaySound -- SndPlay returned %d"` (at 0x127DF7)

### Object Layout (8 bytes)

| Offset | Size   | Type             | Field Name         | Description                              |
|--------|--------|------------------|--------------------|------------------------------------------|
| 0x00   | 4      | `SndChannelPtr`  | `fSoundChannel`    | Pointer to Mac Sound Manager channel     |
| 0x04   | 4      | `Handle`         | `fSoundList`       | Handle to list of loaded snd resources   |

### CSoundHandler Methods

#### FUN_10091488 -- Constructor (132 bytes)

- **Address**: `0x10091488`
- **Proposed name**: `CSoundHandler::CSoundHandler`
- **Behavior**:
  1. Allocates 8 bytes via `NewPtr(8)` if param_1 is NULL
  2. Initializes `fSoundChannel = 0`, `fSoundList = 0`
  3. Calls `SndNewChannel(&fSoundChannel, 0, 0, 0)` -- creates channel with default sampled sound synth, no init flags, no callback
  4. If channel creation fails, sets `fSoundChannel = 0`
- **Called by**: Combat animation setup (FUN_10031060), other sound setup routines

```c
// Reconstructed
CSoundHandler* CSoundHandler_New(CSoundHandler* self) {
    if (self == NULL) {
        self = (CSoundHandler*)NewPtr(8);
        if (self == NULL) return NULL;
    }
    self->fSoundList = NULL;
    self->fSoundChannel = NULL;
    OSErr err = SndNewChannel(&self->fSoundChannel, 0, 0, NULL);
    if (err != noErr) {
        self->fSoundChannel = NULL;
    }
    return self;
}
```

#### FUN_100917d8 -- PlaySound (256 bytes)

- **Address**: `0x100917d8`
- **Proposed name**: `CSoundHandler::PlaySound`
- **Parameters**: `(CSoundHandler* self, short sndResourceID, Boolean async)`
- **Behavior**:
  1. Early exit if `sndResourceID == 0`, `fSoundChannel == NULL`, or sound volume is 0
  2. Loads `GetResource('snd ', sndResourceID)`
  3. Sends `quietCmd` (cmd=3) via `SndDoImmediate` to silence any current sound
  4. Sends `ampCmd` (cmd=0x2B=43) via `SndDoImmediate` with volume = `GetSoundVolume() * 25`
  5. Calls `SndPlay(fSoundChannel, sndHandle, async)`
- **Sound command values**:
  - `quietCmd` = 3 (silence channel)
  - `ampCmd` = 43 (0x2B, set amplitude)
  - Volume scaling: game volume (0-10) * 25 = 0-250 (Mac amplitude range is 0-255)

```c
// Reconstructed
void CSoundHandler_PlaySound(CSoundHandler* self, short sndID, Boolean async) {
    if (sndID == 0 || self->fSoundChannel == NULL) return;
    short volume = GetSoundVolume();
    if (volume == 0) return;

    Handle sndH = GetResource('snd ', sndID);
    if (sndH == NULL) return;

    SndCommand cmd;
    cmd.cmd = quietCmd;  // 3
    cmd.param1 = 0;
    cmd.param2 = 0;
    SndDoImmediate(self->fSoundChannel, &cmd);

    cmd.cmd = ampCmd;    // 43
    cmd.param1 = volume * 25;
    cmd.param2 = 0;
    SndDoImmediate(self->fSoundChannel, &cmd);

    SndPlay(self->fSoundChannel, (SndListHandle)sndH, async);
}
```

#### FUN_1009150c -- Destructor (380 bytes)

- **Address**: `0x1009150c`
- **Proposed name**: `CSoundHandler::~CSoundHandler`
- **Behavior**:
  1. Busy-waits on `SndChannelStatus` until channel is no longer busy (checks `scstSynthBusy` field at offset 0x18 in SCStatus struct)
  2. Calls `SndDisposeChannel(fSoundChannel, true)` to dispose channel
  3. Sets `fSoundChannel = NULL`
  4. Iterates through `fSoundList` and calls `DisposeHandle` on each loaded snd resource
  5. Disposes the sound list handle
  6. Optionally frees the CSoundHandler struct via `DisposePtr`

#### FUN_1009191c -- LoadSound (164 bytes)

- **Address**: `0x1009191c`
- **Proposed name**: `CSoundHandler::LoadSound`
- **Parameters**: `(CSoundHandler* self, short sndResourceID)`
- **Behavior**:
  1. Calls `GetResource('snd ', sndResourceID)` to load the sound
  2. Calls `HLock(sndHandle)` to lock it in memory
  3. Calls `DetachResource(sndHandle)` to detach from resource map
  4. Creates/grows the `fSoundList` collection to store the handle
  5. Adds the handle to the collection

#### FUN_100919c0 -- LoadSoundByName (344 bytes)

- **Address**: `0x100919c0`
- **Proposed name**: `CSoundHandler::LoadSoundByName`
- **Behavior**:
  1. Gets the current scenario file name
  2. Strips the file extension (removes last 4 chars if preceded by '.')
  3. Constructs a resource name from scenario name + suffix strings (from STR# offsets 0x244 and 0x248)
  4. Calls `Get1NamedResource('snd ', constructedName)` to load the sound from the scenario's resource fork
  5. Detaches the resource and adds to `fSoundList`
  6. Returns the snd resource ID

---

## 3. Global Sound Effects System

Beyond the CSoundHandler class instances, the game has a global sound effects channel system using two global variables:

### Global Sound Variables

| Address        | Type             | Name                | Description                              |
|----------------|------------------|---------------------|------------------------------------------|
| `101165e8`     | `int*`           | `gSndHandle`        | Current loaded snd resource handle       |
| `101165ec`     | `int*`           | `gSndChannel`       | Global sound channel pointer             |
| `10116604`     | `undefined4`     | `gSoundActive`      | Sound active/playing flag                |
| `10117738`     | `short[6]`       | `gCombatSoundIDs`   | Combat sound resource ID table           |

### Global Sound Functions

#### FUN_10091ca4 -- PlayGlobalSound (288 bytes)

- **Address**: `0x10091ca4`
- **Proposed name**: `PlayGlobalSound`
- **Parameters**: `(short sndResourceID, short volume)`
- **Behavior**:
  1. Waits for any current sound to finish (busy-wait on `FUN_10091b80`)
  2. Stops and cleans up current sound via `FUN_10091b18`
  3. Loads `GetResource('snd ', sndResourceID)` into `gSndHandle`
  4. Creates a new channel: `SndNewChannel(&gSndChannel, 0, 0, 0)`
  5. If channel created successfully:
     - Locks the snd handle: `HLock(gSndHandle)`
     - Detaches from resource map: `DetachResource(gSndHandle)`
     - Sends `ampCmd` (43) with volume = `volume * 25`
  6. Does NOT call `SndPlay` here -- the actual playback is triggered by the companion `FUN_10091c04`

#### FUN_10091c04 -- StartGlobalSoundPlayback (160 bytes)

- **Address**: `0x10091c04`
- **Proposed name**: `StartGlobalSoundPlayback`
- **Parameters**: `(short sndResourceID)`
- **Behavior**:
  1. Checks `sndResourceID != 0` and `gSndChannel != 0`
  2. If `gSndHandle != 0`, detaches and plays: `SndPlay(gSndChannel, gSndHandle, true)`
  3. Stores a timestamp reference

#### FUN_10091b18 -- StopGlobalSound (104 bytes)

- **Address**: `0x10091b18`
- **Proposed name**: `StopGlobalSound`
- **Behavior**:
  1. If `gSndChannel != 0`: calls `SndDisposeChannel(gSndChannel, true)`
  2. If `gSndHandle != 0`: calls `DisposeHandle(gSndHandle)`
  3. Sets both to NULL

#### FUN_10091b80 -- IsGlobalSoundPlaying (132 bytes)

- **Address**: `0x10091b80`
- **Proposed name**: `IsGlobalSoundPlaying`
- **Returns**: Boolean -- true if sound is still playing
- **Behavior**:
  1. If `gSndChannel == 0`, returns false
  2. Calls `SndChannelStatus(gSndChannel, sizeof(SCStatus), &status)`
  3. Checks `status.scstSynthBusy` field (offset into SCStatus struct)
  4. If not busy, calls `StopGlobalSound()` and returns false
  5. If error, calls `StopGlobalSound()` and returns false
  6. Returns true if still busy

---

## 4. Music System (QuickTime Tune Player)

### Music Global Variables

| Address        | Type              | Name                | Description                              |
|----------------|-------------------|---------------------|------------------------------------------|
| `101165f0`     | `int*`            | `gTunePlayer`       | QuickTime TunePlayer component instance  |
| `101165f4`     | `undefined4*`     | `gTuneHeaderH`      | Handle to Tune header ('Head' resource)  |
| `101165f8`     | `undefined4*`     | `gTuneDataH`        | Handle to Tune data ('Tune' resource)    |
| `10116600`     | `short`           | `gCurrentMusicID`   | Currently selected music state ID        |

### Music Functions

#### FUN_10092080 -- LoadMusic (804 bytes)

- **Address**: `0x10092080`
- **Proposed name**: `LoadMusic`
- **Parameters**: `(Str255 resourcePrefix, Str255 tuneName)`
- **Behavior**:
  1. If `gTunePlayer == NULL`, opens it: `OpenDefaultComponent('tune', 0)`
  2. Gets the current scenario name and constructs resource names
  3. Loads `Get1NamedResource('Tune', constructedName)` into `gTuneDataH`
  4. Loads `Get1NamedResource('Head', constructedName)` into `gTuneHeaderH`
  5. Locks and detaches both handles
  6. Calls `TuneSetHeader(gTunePlayer, *gTuneHeaderH)` to set up instruments
  7. Calls `TunePreroll(gTunePlayer)` to prepare for playback
  8. Shows/hides a loading progress indicator during load

#### FUN_100923a4 -- PlayMusic (224 bytes)

- **Address**: `0x100923a4`
- **Proposed name**: `PlayMusic`
- **Parameters**: `(undefined8 unused, Boolean loop)`
- **Behavior**:
  1. Checks that `gTunePlayer`, `gTuneDataH`, and `gTuneHeaderH` are all non-NULL
  2. Reads music volume via `GetMusicVolume()` and converts to fixed-point
  3. Sets volume: `TuneSetVolume(gTunePlayer, fixedVolume)`
  4. Stores the loop flag in a global
  5. Calls `TuneQueue(gTunePlayer, *gTuneDataH, 0x10000, 0, -1, loop, 0, 0)`
     - The 0x10000 is likely a time scale
     - The -1 means play to end
     - `loop` = 1 means repeat, 0 means play once
  6. Sets volume again after queue

#### FUN_10092484 -- SelectMusic (1308 bytes)

- **Address**: `0x10092484`
- **Proposed name**: `SelectMusic`
- **Parameters**: `(short musicStateID)`
- **Description**: The main music selection dispatcher. Maps game states to music tracks.
- **Music State ID Table**:

| State ID | STR# Index for Tune Name | Game Context                      | Loop? |
|----------|--------------------------|-----------------------------------|-------|
| 0        | 8                        | Title screen / Main menu          | Yes   |
| 1        | 10                       | Player's turn (normal gameplay)   | Yes   |
| 2        | 10, 11, or 12 (random)   | In-game (depends on game state)   | No    |
| 3        | 9                        | Battle / Special event            | Yes   |
| 4        | 12                       | Victory                           | Yes   |
| 5        | 13                       | Production / Army movement event  | Yes   |
| 6        | 14                       | Hero arrives / Special arrival    | Yes   |
| 7        | 15                       | Map review / Diplomacy            | Yes   |
| 8        | 16                       | Combat (detailed)                 | Yes   |
| 9        | 17                       | Event 9                           | Yes   |
| 10       | 18                       | Event 10                          | Yes   |
| 11       | 19                       | Event 11                          | Yes   |

- **State 2 special logic**: Checks if all enemy players are eliminated. If all dead:
  - 5% chance: loads STR# 12 (victory-like music)
  - 47% chance: loads STR# 11 (standard music)
  - 48% chance: loads STR# 10 (turn music)
  - If not all dead: always loads STR# 11

All music names are stored in STR# (string list) resources. STR# index 7 provides the resource name prefix common to all music. The tune name from the specific STR# index is combined with this prefix to form the full resource name.

#### FUN_10092a58 -- SetMusicVolume (76 bytes)

- **Address**: `0x10092a58`
- **Proposed name**: `SetMusicVolume`
- **Parameters**: `(short volume)`
- **Behavior**:
  1. If `gTunePlayer != 0`:
  2. Converts volume to fixed-point: `((volume & 0x3FFFFFFF) * 4 - volume & 0x1FFFFF) << 11`
  3. Calls `TuneSetVolume(gTunePlayer, fixedVolume)`

#### FUN_100929a0 -- RestartMusic (184 bytes)

- **Address**: `0x100929a0`
- **Proposed name**: `RestartMusic`
- **Behavior**:
  1. Calls `TuneStop(0, 0)` to stop current playback
  2. Checks if the loop flag is set and music has stopped playing
  3. If so, calls `PlayMusic(0, 1)` to restart with looping

#### FUN_10092ae0 -- StopMusic (48 bytes)

- **Address**: `0x10092ae0`
- **Proposed name**: `StopMusic`
- **Behavior**:
  1. If music is playing (via `FUN_10091ef0` / `IsMusicPlaying`):
     - Calls `FUN_10091f40` (fade out and stop)
  2. Calls `FUN_10091fd4` (cleanup/dispose tune resources)

#### FUN_10091ef0 -- IsMusicPlaying (80 bytes)

- **Address**: `0x10091ef0`
- **Proposed name**: `IsMusicPlaying`
- **Returns**: Boolean
- **Behavior**:
  1. Calls `TuneGetStatus(gTunePlayer, &status)`
  2. Returns true if tune is still playing (checks status field)

#### FUN_10091f40 -- FadeAndStopMusic (148 bytes)

- **Address**: `0x10091f40`
- **Proposed name**: `FadeAndStopMusic`
- **Behavior**:
  1. If `gTunePlayer != 0`:
  2. Gets current music volume
  3. Ramps volume down in steps of 0x50 (80): `TuneSetVolume(gTunePlayer, volume)` in a loop
  4. Calls `TuneStop(gTunePlayer, 0)` to stop playback

#### FUN_10091fd4 -- DisposeMusicResources (172 bytes)

- **Address**: `0x10091fd4`
- **Proposed name**: `DisposeMusicResources`
- **Behavior**:
  1. If `gTunePlayer != 0`: calls `TuneUnroll()` (previously named FUN_100035a0)
  2. If `gTuneDataH` is valid: `DisposeHandle(gTuneDataH)`, zero it
  3. If `gTuneHeaderH` is valid: `DisposeHandle(gTuneHeaderH)`, zero it

#### FUN_10092aa4 -- RestoreMusic (short)

- **Address**: `0x10092aa4`
- **Proposed name**: `RestoreMusic`
- **Behavior**: If `gCurrentMusicID != -1`, calls `SelectMusic(gCurrentMusicID)` to restore the current track.

---

## 5. Sound Trigger Points

### Sound Effect Wrapper Functions

#### FUN_10092b10 -- PlayUISound (208 bytes)

- **Address**: `0x10092b10`
- **Proposed name**: `PlayUISound`
- **Parameters**: `(short variant)` -- 0 = normal click, 1 = alternate
- **Behavior**:
  1. Checks `IsSoundEnabled()` (FUN_1002770c reads offset 0x1a4)
  2. Loads sound name from STR# 37 (index 0 or 1 depending on variant)
  3. Resolves name to snd resource ID via `FUN_10091de0`
  4. Plays via `PlayGlobalSound(sndID, GetSoundVolume())`
- **Triggered by**:
  - Army movement orders (line 50692, 51104)
  - Hero arrival events (line 51144)

#### FUN_10092be0 -- PlayNotificationSound (124 bytes)

- **Address**: `0x10092be0`
- **Proposed name**: `PlayNotificationSound`
- **Behavior**:
  1. Checks `IsSoundEnabled()`
  2. Loads sound name from STR# 39 (index 0)
  3. Resolves and plays
- **Triggered by**:
  - Player turn start (line 27589)
  - Combat result display (line 32795)
  - Army production complete (line 35689)

#### FUN_10093928 -- PlayAttackHitSound (92 bytes)

- **Address**: `0x10093928`
- **Proposed name**: `PlayAttackHitSound`
- **Behavior**:
  1. Checks `IsSoundEnabled()`
  2. Reads snd ID from `gCombatSoundIDs[2]` (offset +4 in the table)
  3. Plays via `PlayGlobalSound(sndID, GetSoundVolume())`
- **Triggered by**:
  - Successful combat attack (lines 21254, 32465, 42704, 52271)

#### FUN_10093984 -- PlayAttackMissSound (92 bytes)

- **Address**: `0x10093984`
- **Proposed name**: `PlayAttackMissSound`
- **Behavior**:
  1. Checks `IsSoundEnabled()`
  2. Reads snd ID from `gCombatSoundIDs[1]` (offset +2 in the table)
  3. Plays via `PlayGlobalSound(sndID, GetSoundVolume())`
- **Triggered by**:
  - Failed combat attack / defense (line 52275)

#### FUN_100939e0 -- PlayFanfareSound (124 bytes)

- **Address**: `0x100939e0`
- **Proposed name**: `PlayFanfareSound`
- **Behavior**:
  1. Checks `IsSoundEnabled()`
  2. Loads sound name from STR# 63 (0x3F, index 0)
  3. Resolves and plays
- **Triggered by**:
  - End of turn / victory condition check (line 60781)

### FUN_10092c5c -- PlayArmyVoice (2104 bytes)

- **Address**: `0x10092c5c`
- **Proposed name**: `PlayArmyVoice`
- **Parameters**: `(unsigned short eventType)`
- **Description**: The largest sound function. Plays army-related voice/narration sounds with complex conditional logic based on army composition and game state.
- **Event types**:
  - `0`: UI confirm / dialog OK sound
  - `1`: New turn fanfare
  - `4`: Utility/helper invocation
  - `5`: Army movement narration (most complex path)
  - `6+`: Extended narration with animation (marching soldiers visual)

For eventType 5 (army movement), the function:
1. Checks the current player's army strength
2. Checks how many special units (type 0x1C) the player has
3. Based on army strength and composition:
   - Very small armies (< 100 strength): plays STR# 54 (0x36) sound
   - Large armies (> 2800 strength): plays STR# 55 (0x37) sound
   - Medium armies with no special units: plays STR# 56 (0x38) sound
   - Medium armies with many special units (5+): plays STR# 57 (0x39) sound
   - Medium armies with few special units (1-4, random 1-in-5 chance): plays STR# 58 (0x3a) sound
4. Territory gain/loss sounds based on army strength changes:
   - Losing territory: plays STR# 46 (0x2e) sound
   - Gaining territory: plays STR# 47 (0x2f) sound

- **Triggered by**:
  - `FUN_1002774c` with param 4 (line 29365)
  - New turn processing (line 54608)
  - End of game scoring (line 60929)
  - Dialog OK handler (line 80355)

### FUN_10093a5c -- InitCombatSounds (164 bytes)

- **Address**: `0x10093a5c`
- **Proposed name**: `InitCombatSounds`
- **Behavior**:
  1. Loads 4 combat sound names from STR# 64 (0x40):
     - Index 0: `gCombatSoundIDs[0]` -- Primary attack sound
     - Index 1: `gCombatSoundIDs[1]` -- Attack miss / defense sound
     - Index 2: `gCombatSoundIDs[2]` -- Attack hit sound
     - Index 5: `gCombatSoundIDs[5]` -- Special combat sound
  2. Resolves each name to snd resource IDs via `FUN_10091de0`
  3. Stores resolved IDs in the `gCombatSoundIDs` table at `puRam10117738`
  4. Clears related animation state flags
- **Called during**: Game initialization (line 68416)

---

## 6. Sound Effect Resolution System

Sound effects are NOT referenced by hardcoded snd resource IDs. Instead, they use a **name-based resolution system**:

### Resolution Flow

1. A STR# resource list index and sub-index are used to get a sound name string
2. `FUN_1005f6b0(strListIndex, subIndex)` loads the string from the STR# resource
3. `FUN_10091de0(stringPtr)` resolves the name to a snd resource ID:
   - Gets the current scenario file name
   - Strips the extension (removes last 4 chars if '.' found)
   - Appends suffixes from STR# at offsets 0x27C and 0x280 (likely ".snd" type extensions)
   - Calls `Get1NamedResource('snd ', constructedName)` to look up the resource
   - Calls `GetResInfo` to get the resource ID
   - Returns the resource ID

This means sound effects are **scenario-dependent** -- different scenarios can have different sounds for the same game events.

### STR# Resource Index to Sound Category Mapping

| STR# Index | Hex   | Category              | Sub-indices | Description                              |
|------------|-------|-----------------------|-------------|------------------------------------------|
| 7          | 0x07  | Music Prefix          | 0           | Base resource name prefix for all music  |
| 8          | 0x08  | Title Music           | 0           | Main menu / title screen tune name       |
| 9          | 0x09  | Battle Music          | -1          | Battle / combat event music              |
| 10         | 0x0A  | Turn Music            | -1          | Normal gameplay / player turn music      |
| 11         | 0x0B  | Standard Music        | -1          | Standard in-game background music        |
| 12         | 0x0C  | Victory Music         | -1 or 0     | Victory / all enemies defeated music     |
| 13         | 0x0D  | Production Music      | -1          | Army production event music              |
| 14         | 0x0E  | Hero Music            | -1          | Hero arrival music                       |
| 15         | 0x0F  | Diplomacy Music       | 0           | Diplomacy / map review music             |
| 16         | 0x10  | Combat Music          | 0           | Detailed combat music                    |
| 17         | 0x11  | Event Music 9         | 0           | Additional event music                   |
| 18         | 0x12  | Event Music 10        | 0           | Additional event music                   |
| 19         | 0x13  | Event Music 11        | 0           | Additional event music                   |
| 37         | 0x25  | UI Click Sounds       | 0, 1        | Button click / UI interaction sounds     |
| 39         | 0x27  | Notification Sounds   | 0           | Turn notification / alert sounds         |
| 46         | 0x2E  | Territory Loss        | -1          | Army losing territory narration          |
| 47         | 0x2F  | Territory Gain        | -1          | Army gaining territory narration         |
| 54         | 0x36  | Small Army            | -1          | Small army movement sound                |
| 55         | 0x37  | Large Army            | -1          | Large army movement sound                |
| 56         | 0x38  | Medium Army           | -1          | Medium army (no specials) sound          |
| 57         | 0x39  | Large Force           | -1          | Large army with special units sound      |
| 58         | 0x3A  | Special Units         | -1          | Army with few special units sound        |
| 59         | 0x3B  | Voice/Speech          | 0           | Voice narration / speech                 |
| 63         | 0x3F  | Fanfare               | 0           | Victory fanfare / special event          |
| 64         | 0x40  | Combat Sounds         | 0,1,2,5     | Attack/hit/miss/special combat sounds    |

(Sub-index -1 typically means "use the entire string", 0/1/2/5 are specific sub-indices)

---

## 7. Volume and Preferences System

### Game Preferences Structure

The game preferences are stored in a structure pointed to by `*piRam1011734c`. Sound/music settings are at the following offsets:

| Offset | Size   | Type   | Name              | Range   | Default | Description                              |
|--------|--------|--------|-------------------|---------|---------|------------------------------------------|
| 0x1A1  | 1      | byte   | `musicPrefsFlag`  | 0-1     | varies  | Music preferences loaded flag            |
| 0x1A2  | 2      | short  | `musicVolume`     | 0-10    | 4       | Music volume level                       |
| 0x1A4  | 1      | byte   | `musicEnabled`    | 0-1     | varies  | Music on/off toggle                      |
| 0x1A6  | 2      | short  | `soundVolume`     | 0-10    | 10      | Sound effects volume level               |
| 0x1A8  | 1      | byte   | `soundEnabled`    | 0-1     | varies  | Sound effects on/off toggle              |
| 0x1AA  | 2      | short  | `voiceVolume`     | 0-10    | 10      | Voice/narration volume level             |

### Volume Accessor Functions

| Address      | Size  | Proposed Name        | Description                              |
|--------------|-------|----------------------|------------------------------------------|
| `100276ec`   | 16    | `IsMusicPrefsLoaded` | Returns byte at offset 0x1A1             |
| `100276fc`   | 16    | `GetMusicVolume`     | Returns short at offset 0x1A2            |
| `1002770c`   | 16    | `IsMusicEnabled`     | Returns byte at offset 0x1A4             |
| `1002771c`   | 16    | `GetSoundVolume`     | Returns short at offset 0x1A6            |
| `1002772c`   | 16    | `IsSoundEnabled`     | Returns byte at offset 0x1A8             |

### Volume Persistence

- **Resource type**: `'Volu'` (0x566f6c75)
- **Resource ID**: 1000
- **Format**: 6 bytes -- two shorts (musicVolume, soundVolume, voiceVolume)
- **Loaded at**: Game initialization (FUN_10074114 area, line 68386)
- **When saving**: Volume values are stored to the preference resource

### Volume Application

- **Sound effects**: Volume is applied per-play via `ampCmd` (command 43) sent to the sound channel. The game volume (0-10) is multiplied by 25 to produce a Mac amplitude value (0-250).
- **Music**: Volume is applied via `TuneSetVolume()`. The game volume (0-10) is converted to a QuickTime fixed-point volume using the formula: `((volume & 0x3FFFFFFF) * 4 - volume & 0x1FFFFF) << 11`
- **Volume changes**: When the user changes volume in the preferences dialog, `SetMusicVolume()` (FUN_10092a58) is called immediately to update the playing music. Sound effects use the new volume on the next play.

---

## 8. Resource Types

### snd Resources (36 total in resource fork)

The game's resource fork contains 36 `snd ` resources. These are standard Mac Sound Manager sound resources containing sampled audio data. They are loaded by either:
- Resource ID: `GetResource('snd ', id)` -- used by CSoundHandler::PlaySound
- Resource name: `Get1NamedResource('snd ', name)` -- used by the name-based resolution system

Sound resources can come from both the **application resource fork** (built-in sounds) and **scenario resource forks** (scenario-specific sounds).

### Tune Resources (26 total in resource fork)

The game's resource fork contains 26 `Tune` resources containing MIDI music data for the QuickTime Music Architecture. Each Tune resource has a corresponding `Head` resource containing the instrument header (defines which MIDI instruments are used).

- **Tune**: MIDI note/event data
- **Head**: MIDI instrument/patch header (passed to `TuneSetHeader`)

---

## 9. Channel Management

### Sound Effect Channel

- **Count**: 1 channel for CSoundHandler instances (temporary, created/destroyed per use)
- **Count**: 1 global persistent channel (`gSndChannel` at `101165ec`)
- **Type**: Default sampled-sound synthesizer (init = 0, synth = 0)
- **Mixing**: No mixing -- the `quietCmd` is sent before each new sound to silence the previous one
- **Priority**: Last-play-wins -- new sounds replace currently playing sounds
- **Callback**: None (NULL callback parameter to `SndNewChannel`)

### Music Channel

- **Count**: 1 TunePlayer component instance
- **Type**: QuickTime Music Architecture Tune Player (`'tune'` component type)
- **Mixing**: Music and sound effects play independently (separate subsystems)
- **Looping**: Controlled by the `loop` parameter to `TuneQueue`. The `RestartMusic` function checks if music has stopped and restarts if looping was requested.

### Channel Lifecycle

1. **CSoundHandler (temporary)**: Created before combat, destroyed after
   - `CSoundHandler()` -> SndNewChannel
   - Multiple `PlaySound()` calls during combat animation
   - `~CSoundHandler()` -> busy-wait + SndDisposeChannel

2. **Global SFX channel**: Created on-demand for each sound
   - `PlayGlobalSound()` -> SndNewChannel, load snd resource
   - `StartGlobalSoundPlayback()` -> SndPlay (async)
   - `StopGlobalSound()` -> SndDisposeChannel (when done or new sound requested)

3. **Music**: Persistent TunePlayer opened once at first music load
   - `OpenDefaultComponent('tune', 0)` -> gTunePlayer (created once)
   - `LoadMusic()` -> TuneSetHeader, TunePreroll
   - `PlayMusic()` -> TuneQueue
   - `FadeAndStopMusic()` -> TuneSetVolume ramp down, TuneStop
   - `DisposeMusicResources()` -> TuneUnroll, DisposeHandle

---

## 10. Complete Sound Event Table

### Music Events (SelectMusic State IDs)

| State | Game Event                          | Call Site (Line)  | Function Context                         |
|-------|-------------------------------------|-------------------|------------------------------------------|
| 0     | Title screen / main menu            | 53691             | Game startup initialization              |
| 1     | Player's turn begins                | 30475, 33313      | Turn processing                          |
| 1     | Return to normal after victory check| 60955             | End-of-turn processing                   |
| 2     | In-game background (varies)         | 42493             | Game loop                                |
| 3     | Battle event begins                 | 42220             | Combat initiation                        |
| 4     | Game victory                        | 60941             | Victory condition met                    |
| 5     | Production / army event             | 48358             | Production screen                        |
| 6     | Hero arrives                        | 50684             | Hero recruitment event                   |
| 7     | Map review / diplomacy              | 35517             | Diplomacy screen                         |
| 8     | Detailed combat view                | 33248             | Combat detail display                    |
| 9     | Event 9                             | 42358             | Special game event                       |
| 10    | Event 10                            | 42292             | Special game event                       |
| 11    | Event 11                            | 24766             | Special game event                       |

### Sound Effect Events

| Sound Type                | Trigger Function  | Game Event                          | Call Site (Line)  |
|---------------------------|-------------------|-------------------------------------|-------------------|
| UI Click (variant 0)      | FUN_10092b10(0)   | Army ordered to move                | 50692, 51104      |
| UI Click (variant 1)      | FUN_10092b10(1)   | Hero arrival confirmation           | 51144             |
| Notification              | FUN_10092be0      | Player turn begins                  | 27589             |
| Notification              | FUN_10092be0      | Combat result displayed             | 32795             |
| Notification              | FUN_10092be0      | Army production complete            | 35689             |
| Attack Hit                | FUN_10093928      | Successful attack in combat         | 21254, 32465, 42704, 52271 |
| Attack Miss/Defend        | FUN_10093984      | Failed attack in combat             | 52275             |
| Fanfare                   | FUN_100939e0      | Victory/end-of-turn check           | 60781             |
| Army Voice (type 0)       | FUN_10092c5c(0)   | Dialog OK pressed                   | 80355             |
| Army Voice (type 1)       | FUN_10092c5c(1)   | New turn narration                  | 54608             |
| Army Voice (type 4)       | FUN_10092c5c(4)   | Helper/utility function             | 29365             |
| Army Voice (type 5)       | FUN_10092c5c(5)   | Army movement narration             | 60929             |
| Combat Sound (PlaySound)  | FUN_100917d8      | Combat animation frames             | 32238, 34145      |

### Combat Animation Sounds (via CSoundHandler)

During combat animations, FUN_10031178 uses the CSoundHandler to play sounds synchronized with attack/defense frames:

- Attacker swings: plays `gCombatSoundIDs[0]` or `gCombatSoundIDs[5]` (selected based on `param_6` -- whether defender is on water)
- The combat sound is played async (`param_3 = 1`) to overlap with animation

---

## 11. Voice/Narration System

Additional binary strings reveal a voice narration subsystem:
- `"xSndPrepareVoice -- gSoundChannel is not NULL"` (at 0x127E31)
- `"xSndLoadVoice: couldn't load a sound called"` (at 0x127E66)

These suggest functions named `xSndPrepareVoice` and `xSndLoadVoice` that load named voice resources. The voice system:
1. Uses the same `gSndChannel` global for playback
2. Loads voice resources by constructed name (scenario prefix + voice name)
3. Error-checks for missing voice resources with debug messages

The "Sound Manager load is now %d%%" string (at 0x127DA6) indicates a progress callback during sound loading, likely shown during scenario load time.

---

## 12. Architecture Diagram

```
                    +-------------------+
                    | Game Preferences  |
                    | (piRam1011734c)   |
                    +---+------+--------+
                        |      |
               +--------+      +--------+
               |                        |
    +----------v----------+  +----------v----------+
    | Music Volume (0x1A2)|  | Sound Volume (0x1A6)|
    | Music Enable (0x1A4)|  | Sound Enable (0x1A8)|
    +----------+----------+  +----------+----------+
               |                        |
    +----------v----------+  +----------v----------+
    |  MUSIC SUBSYSTEM    |  |  SOUND SUBSYSTEM    |
    |                     |  |                     |
    | gTunePlayer         |  | +- CSoundHandler -+ |
    | gTuneDataH ('Tune') |  | | fSoundChannel   | |
    | gTuneHeaderH('Head')|  | | fSoundList      | |
    |                     |  | +------------------+ |
    | SelectMusic()       |  |                     |
    | LoadMusic()         |  | +- Global Channel -+|
    | PlayMusic()         |  | | gSndChannel      ||
    | FadeAndStopMusic()  |  | | gSndHandle       ||
    | SetMusicVolume()    |  | +------------------+|
    +---------------------+  +---------------------+
               |                        |
    +----------v----------+  +----------v----------+
    | QuickTime Tune API  |  | Mac Sound Manager   |
    | TuneQueue           |  | SndPlay             |
    | TuneSetHeader       |  | SndDoImmediate      |
    | TuneSetVolume       |  | SndNewChannel       |
    | TuneStop            |  | SndDisposeChannel   |
    | TunePreroll         |  | SndChannelStatus    |
    +---------------------+  +---------------------+
```

---

## 13. Function Summary Table

| Address      | Size  | Proposed Name              | Category      | Description                              |
|--------------|-------|----------------------------|---------------|------------------------------------------|
| `10091488`   | 132   | CSoundHandler::New         | SFX           | Constructor -- creates sound channel     |
| `100917d8`   | 256   | CSoundHandler::PlaySound   | SFX           | Play snd resource with volume            |
| `1009150c`   | 380   | CSoundHandler::Destroy     | SFX           | Destructor -- dispose channel & handles  |
| `1009191c`   | 164   | CSoundHandler::LoadSound   | SFX           | Preload snd resource into list           |
| `100919c0`   | 344   | CSoundHandler::LoadByName  | SFX           | Load snd by scenario-derived name        |
| `10091b18`   | 104   | StopGlobalSound            | SFX           | Stop and dispose global channel          |
| `10091b80`   | 132   | IsGlobalSoundPlaying       | SFX           | Check if global channel is busy          |
| `10091c04`   | 160   | StartGlobalPlayback        | SFX           | Begin async SndPlay on global channel    |
| `10091ca4`   | 288   | PlayGlobalSound            | SFX           | Full setup + play on global channel      |
| `10091de0`   | 272   | ResolveSoundName           | SFX           | Name -> snd resource ID lookup           |
| `10091ef0`   | 80    | IsMusicPlaying             | Music         | Check TunePlayer status                  |
| `10091f40`   | 148   | FadeAndStopMusic           | Music         | Ramp down volume, TuneStop              |
| `10091fd4`   | 172   | DisposeMusicResources      | Music         | Unroll and dispose Tune/Head handles     |
| `10092080`   | 804   | LoadMusic                  | Music         | Load Tune + Head, set header, preroll    |
| `100923a4`   | 224   | PlayMusic                  | Music         | Set volume and TuneQueue                 |
| `10092484`   | 1308  | SelectMusic                | Music         | Game state -> music track dispatcher     |
| `100929a0`   | 184   | RestartMusic               | Music         | Restart if stopped and looping           |
| `10092a58`   | 76    | SetMusicVolume             | Music         | Direct TuneSetVolume call                |
| `10092aa4`   | 40    | RestoreMusic               | Music         | Replay current music track               |
| `10092ae0`   | 48    | StopMusic                  | Music         | Fade + dispose                           |
| `10092b10`   | 208   | PlayUISound                | SFX Trigger   | UI click sound from STR# 37             |
| `10092be0`   | 124   | PlayNotificationSound      | SFX Trigger   | Notification from STR# 39               |
| `10092c5c`   | 2104  | PlayArmyVoice              | SFX Trigger   | Army movement narration (complex)        |
| `10093928`   | 92    | PlayAttackHitSound         | SFX Trigger   | Combat: attack hits                      |
| `10093984`   | 92    | PlayAttackMissSound        | SFX Trigger   | Combat: attack misses                    |
| `100939e0`   | 124   | PlayFanfareSound           | SFX Trigger   | Fanfare from STR# 63                    |
| `10093a5c`   | 164   | InitCombatSounds           | SFX Init      | Load combat sound names from STR# 64    |
| `10093b10`   | 132   | SoundEffectPlayer::New     | SFX Object    | Create sound effect player object        |
| `100276ec`   | 16    | IsMusicPrefsLoaded         | Prefs         | Read byte at prefs+0x1A1                |
| `100276fc`   | 16    | GetMusicVolume             | Prefs         | Read short at prefs+0x1A2               |
| `1002770c`   | 16    | IsMusicEnabled             | Prefs         | Read byte at prefs+0x1A4                |
| `1002771c`   | 16    | GetSoundVolume             | Prefs         | Read short at prefs+0x1A6               |
| `1002772c`   | 16    | IsSoundEnabled             | Prefs         | Read byte at prefs+0x1A8                |
| `1002774c`   | 40    | PlayDefaultSound           | SFX Trigger   | Calls PlayArmyVoice(4)                  |
| `10031178`   | 608   | PlayCombatAnimSound        | SFX Trigger   | Sound during combat animation frame      |
