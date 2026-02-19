/*
 * sound.c - Warlords II Sound & Music System
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 *
 * Two independent subsystems:
 *   1. Sound Effects (SFX) - Mac Sound Manager (SndPlay, SndDoImmediate)
 *      - CSoundHandler class for temporary combat channels
 *      - Global persistent channel for UI/notification sounds
 *      - Name-based sound resolution via STR# resources
 *
 *   2. Background Music - QuickTime Music Architecture (QTMA)
 *      - TunePlayer component (TuneQueue, TuneSetHeader, TuneSetVolume)
 *      - Tune + Head resources (MIDI-based)
 *      - State-based music selection dispatcher
 */

#include "warlords2.h"

#ifndef MODERN_BUILD
#include <Sound.h>
#include <Resources.h>
#include <Components.h>     /* OpenDefaultComponent */
#endif

/* QuickTime Music Architecture types */
/* (These are from QuickTimeMusic.h, which may not be available on all setups) */
#ifndef MODERN_BUILD
typedef ComponentInstance TunePlayer;
#else
typedef void *TunePlayer;
typedef void *ComponentInstance;
#endif

/* =========================================================================
 * Mac Toolbox Thunk Declarations (PEF import stubs)
 * ========================================================================= */

/* Sound Manager */
extern OSErr SndDoImmediate_Thunk(SndChannelPtr chan, SndCommand *cmd);  /* SndDoImmediate_Thunk */
extern OSErr SndNewChannel_Thunk(SndChannelPtr *chan, short synth,
                                  long init, SndCallBackUPP proc);       /* SndNewChannel_Thunk */
extern OSErr SndDisposeChannel_Thunk(SndChannelPtr chan, Boolean quiet); /* SndDisposeChannel_Thunk */
extern OSErr SndPlay_Thunk(SndChannelPtr chan, SndListHandle sndH,
                            Boolean async);                               /* SndPlay_Thunk */
extern OSErr SndChannelStatus_Thunk(SndChannelPtr chan, short len,
                                     SCStatus *status);                   /* SndChannelStatus_Thunk */

/* QuickTime Tune Player */
extern ComponentInstance OpenDefaultComponent_Thunk(OSType type,
                                                     OSType subType);    /* OpenDefaultComponent_Thunk */
extern ComponentResult TuneSetHeader_Thunk(TunePlayer tp, void *header);/* TuneSetHeader_Thunk */
extern ComponentResult TuneQueue_Thunk(TunePlayer tp, void *data,
                                        unsigned long rate, long offset,
                                        long duration, long loop,
                                        void *callBackProc,
                                        long refCon);                    /* TuneQueue_Thunk */
extern ComponentResult TuneGetStatus_Thunk(TunePlayer tp, void *status);/* TuneGetStatus_Thunk */
extern ComponentResult TuneStop_Thunk(TunePlayer tp, long stopMode);    /* TuneStop_Thunk */
extern ComponentResult TuneUnroll_Thunk(void);                           /* TuneUnroll_Thunk */
extern ComponentResult TuneSetVolume_Thunk(TunePlayer tp, Fixed vol);   /* TuneSetVolume_Thunk */
extern ComponentResult TunePreroll_Thunk(TunePlayer tp);                /* TunePreroll_Thunk */

/* Resource Manager */
extern Handle GetResource_Thunk(OSType resType, short resID);           /* GetResource_Thunk */
extern Handle Get1NamedResource_Thunk(OSType resType, void *name);      /* Get1NamedResource_Thunk */
extern void   DetachResource_Thunk(Handle h);                            /* DetachResource */
extern void   HLock_Thunk_Sound(Handle h);                                     /* HLock_Thunk_Sound */
extern void   DisposeHandle_Thunk(Handle h);                             /* DisposeHandle_Thunk */
extern void   GetResInfo_Thunk(Handle h, short *id, void *type,
                                void *name);                              /* ResolveAlias */

/* Memory */
extern Ptr    NewPtr_Thunk(Size byteCount);                              /* NewPtr_Thunk */
extern void   DisposePtr_Thunk(Ptr p);                                   /* DisposePtr_Thunk */

/* String utilities */
extern void  *GetStringFromSTR(char *dst, unsigned long strListAddr,
                                short index);                             /* FUN_1005f6b0 */
extern void   BuildPascalString(unsigned char *dst, ...);                /* BuildPascalString */
extern void  *AppendSTRSuffix(unsigned char *dst, unsigned long addr,
                               short index);                              /* FUN_100b1b90 */
extern void   ConcatPStrings(unsigned char *dst, short mode, void *src); /* ConcatPStrings */
extern void  *PStrToHandle(unsigned char *pstr);                          /* FUN_100b1c84 */
extern void   ConcatBuildName(unsigned char *dst, unsigned char *a,
                               unsigned char *b);                         /* ConcatBuildName */

/* Handle validity check */
extern int    IsHandleValid(void *h);                                     /* IsHandleValid */
extern void   ReleaseHandle_Mapgen(void *h);                                     /* ReleaseHandle_Mapgen */

/* =========================================================================
 * Forward Declarations
 * ========================================================================= */
void SelectMusic(short musicStateID);

/* =========================================================================
 * External Globals
 * ========================================================================= */

/* gGameState declared in wl2_globals.h (included via warlords2.h) */
extern void        *gResourcePtr;           /* piRam1011734c */

/* Sound globals */
extern int         *gSndHandle;             /* gSndHandle - current snd resource handle */
extern int         *gSndChannel;            /* gSndChannel - global sound channel ptr */
extern int         *gTunePlayer;            /* gTunePlayer - QT TunePlayer instance */
extern void       **gTuneHeaderH;           /* gTuneHeaderH - Tune header handle */
extern void       **gTuneDataH;             /* gTuneDataH - Tune data handle */
extern short       *gCurrentMusicID;        /* gCurrentMusicID */
extern short       *gCombatSoundIDs;        /* gCombatSoundIDs - combat sound ID table */
extern int          gSoundActive;           /* gSoundActive */
extern int          gSoundPrefs;            /* gSoundPrefs - sound prefs struct */
extern void       **gErrorHandler;          /* puRam10117370 */

/* Collection management (MacApp) */
extern int          gProgressView;          /* gProgressView */
extern int          gActiveDocView;         /* gActiveDocView */
extern int          gMainDocView;           /* gMainDocView */
extern int          gProgressCounterBase;   /* gProgressCounterBase */

/* =========================================================================
 * Volume / Preference Accessors
 * Address range: 0x100276ec - 0x1002774c
 * ========================================================================= */

/*
 * IsMusicPrefsLoaded -- IsMusicPrefsLoaded
 * Address: 0x100276ec, Size: 16 bytes
 *
 * Returns byte at game prefs + 0x1A1 (music preferences loaded flag).
 */
int IsMusicPrefsLoaded(void)                                    /* IsMusicPrefsLoaded */
{
    return (int)*(unsigned char *)(*(int *)gResourcePtr + 0x1A1);
}

/*
 * GetMusicVolume -- GetMusicVolume
 * Address: 0x100276fc, Size: 16 bytes
 *
 * Returns music volume (0-10) from prefs + 0x1A2.
 */
short GetMusicVolume(void)                                      /* GetMusicVolume */
{
    return *(short *)(*(int *)gResourcePtr + 0x1A2);
}

/*
 * IsMusicEnabled -- IsMusicEnabled
 * Address: 0x1002770c, Size: 16 bytes
 *
 * Returns byte at prefs + 0x1A4 (music/sound on/off toggle).
 * NOTE: Despite the name, this is also used as IsSoundEnabled check.
 */
int IsMusicEnabled(void)                                        /* IsMusicEnabled */
{
    return (int)*(unsigned char *)(*(int *)gResourcePtr + 0x1A4);
}

/*
 * GetSoundVolume -- GetSoundVolume
 * Address: 0x1002771c, Size: 16 bytes
 *
 * Returns sound effects volume (0-10) from prefs + 0x1A6.
 */
short GetSoundVolume(void)                                      /* GetSoundVolume */
{
    return *(short *)(*(int *)gResourcePtr + 0x1A6);
}

/*
 * IsSoundEnabled -- IsSoundEnabled
 * Address: 0x1002772c, Size: 16 bytes
 *
 * Returns byte at prefs + 0x1A8 (sound effects on/off toggle).
 */
int IsSoundEnabled(void)                                        /* IsSoundEnabled */
{
    return (int)*(unsigned char *)(*(int *)gResourcePtr + 0x1A8);
}


/* =========================================================================
 * SECTION 1: CSoundHandler Class
 *
 * Object layout (8 bytes):
 *   +0x00: SndChannelPtr fSoundChannel
 *   +0x04: Handle        fSoundList (collection of loaded snd handles)
 * ========================================================================= */

/*
 * CSoundHandler::New (Constructor) -- FUN_10091488
 * Address: 0x10091488, Size: 132 bytes
 *
 * Creates a new CSoundHandler. Allocates 8 bytes if self is NULL.
 * Opens a Sound Manager channel with default sampled-sound synthesizer.
 */
int *CSoundHandler_New(int *self)                               /* FUN_10091488 */
{
    OSErr err;

    if (self == NULL) {
        self = (int *)NewPtr_Thunk(8);
        if (self == NULL)
            return NULL;
    }

    self[1] = 0;  /* fSoundList = NULL */
    self[0] = 0;  /* fSoundChannel = NULL */

    /* SndNewChannel(&fSoundChannel, 0=sampledSynth, 0=noInit, NULL=noCallback) */
    err = SndNewChannel_Thunk((SndChannelPtr *)self, 0, 0, NULL);  /* SndNewChannel_Thunk */
    if (err != noErr) {
        self[0] = 0;  /* Channel creation failed */
    }

    return self;
}

/*
 * CSoundHandler::~CSoundHandler (Destructor) -- CSoundHandler_Destroy
 * Address: 0x1009150c, Size: 380 bytes
 *
 * Destroys the sound handler:
 * 1. Busy-waits until channel is idle (via SndChannelStatus)
 * 2. Disposes the sound channel
 * 3. Iterates fSoundList and DisposeHandle_Thunk on each loaded snd resource
 * 4. Optionally frees the CSoundHandler struct
 *
 * Debug strings from binary:
 *   "CSoundHandler::~CSoundHandler -- SndChannelStatus returned %d"
 *   "CSoundHandler::~CSoundHandler -- SndChannel is still busy"
 *   "CSoundHandler::~CSoundHandler -- SndDisposeChannel returned %d"
 */
void CSoundHandler_Destroy(int *self, unsigned long freeFlags)  /* CSoundHandler_Destroy */
{
    OSErr    err;
    SCStatus status;
    char     statusBuf[12];

    if (self == NULL)
        return;

    /* Busy-wait until channel is no longer playing */
    if (self[0] != 0) {
        do {
            err = SndChannelStatus_Thunk(                       /* SndChannelStatus_Thunk */
                (SndChannelPtr)self[0], 0x18, (SCStatus *)statusBuf);

            /* Check scstSynthBusy field at offset into SCStatus */
            if (statusBuf[0x0C] == '\0')
                break;  /* Channel is idle */

        } while (err == noErr);

        /* Dispose the channel */
        if (self[0] != 0) {
            SndDisposeChannel_Thunk((SndChannelPtr)self[0], true);  /* SndDisposeChannel_Thunk */
        }
    }
    self[0] = 0;

    /* Free all loaded snd resource handles in fSoundList */
    if (self[1] != 0) {
        /* Iterate through the collection */
        char iterState[368];
        int  handle;

        FUN_100ec170(iterState, self[1], 1);       /* InitCollectionIterator */
        handle = FUN_100ec2c4(iterState);           /* GetFirstItem */
        int more = FUN_100ebf44(iterState);         /* HasMoreItems */

        while (more != 0) {
            DisposeHandle_Thunk((Handle)handle);    /* DisposeHandle_Thunk */
            handle = FUN_100ec34c(iterState);       /* GetNextItem */
            more   = FUN_100ebf44(iterState);
        }

        /* Shrink/dispose the collection itself */
        self[1] = FUN_100f57c8(self[1]);
        FUN_100ec1e8(iterState, 2);                 /* DisposeCollectionIterator */
    }

    /* Optionally free the struct */
    if (self != NULL && (freeFlags & 1) != 0) {
        DisposePtr_Thunk((Ptr)self);                /* DisposePtr_Thunk */
    }
}

/*
 * CSoundHandler::PlaySound -- CSoundHandler_PlaySound
 * Address: 0x100917d8, Size: 256 bytes
 *
 * Plays a sound effect by resource ID on this handler's channel.
 *
 * 1. Loads GetResource('snd ', sndResourceID)
 * 2. Sends quietCmd (3) to silence current sound
 * 3. Sends ampCmd (43) with volume = GetSoundVolume() * 25
 * 4. Calls SndPlay(fSoundChannel, sndHandle, async)
 *
 * Debug string: "CSoundHandler::PlaySound -- SndPlay returned %d"
 */
void CSoundHandler_PlaySound(int *self, short sndID, Boolean async)
                                                                /* CSoundHandler_PlaySound */
{
    Handle     sndH;
    SndCommand cmd;
    short      volume;

    /* Early exit checks */
    if (sndID == 0 || self[0] == 0)
        return;

    volume = GetSoundVolume();                                  /* GetSoundVolume */
    if (volume == 0)
        return;

    /* Load the snd resource */
    sndH = GetResource_Thunk('snd ', sndID);                   /* GetResource_Thunk(0x736e6420, id) */
    if (sndH == NULL)
        return;

    /* Send quietCmd to silence any current playback */
    cmd.cmd    = 3;     /* quietCmd */
    cmd.param1 = 0;
    cmd.param2 = 0;
    SndDoImmediate_Thunk((SndChannelPtr)self[0], &cmd);        /* SndDoImmediate_Thunk */

    /* Send ampCmd to set volume: game volume (0-10) * 25 = 0-250 */
    cmd.cmd    = 0x2B;  /* ampCmd = 43 */
    cmd.param1 = volume * 0x19;   /* * 25 */
    cmd.param2 = 0;
    SndDoImmediate_Thunk((SndChannelPtr)self[0], &cmd);        /* SndDoImmediate_Thunk */

    /* Play the sound */
    SndPlay_Thunk((SndChannelPtr)self[0], (SndListHandle)sndH, async);  /* SndPlay_Thunk */
}

/*
 * CSoundHandler::LoadSound -- CSoundHandler_LoadSound
 * Address: 0x1009191c, Size: 164 bytes
 *
 * Preloads a snd resource by ID into the handler's resource list.
 * Locks and detaches the handle from the resource map.
 */
void CSoundHandler_LoadSound(int self, short sndID)             /* CSoundHandler_LoadSound */
{
    Handle sndH;

    sndH = GetResource_Thunk('snd ', sndID);                   /* GetResource_Thunk(0x736e6420, id) */
    if (sndH == NULL)
        return;

    HLock_Thunk_Sound(sndH);                                         /* HLock_Thunk_Sound */
    DetachResource_Thunk(sndH);                                 /* DetachResource */

    /* Add to fSoundList collection */
    if (*(int *)(self + 4) == 0) {
        int coll = FUN_100eab4c(0);                             /* NewCollection */
        *(int *)(self + 4) = coll;
        FUN_100eabdc();
    }

    /* Insert handle into collection via vtable method */
    ResourceRead_Dispatch(*(int *)(self + 4) +
                 (int)*(short *)(*(int *)*(int *)(self + 4) + 0x158),
                 (int)sndH);
}

/*
 * CSoundHandler::LoadSoundByName -- CSoundHandler_LoadSoundByName
 * Address: 0x100919c0, Size: 344 bytes
 *
 * Loads a snd resource by constructing a name from the current scenario
 * file name with suffix strings from STR# offsets 0x244 and 0x248.
 *
 * Returns the resolved snd resource ID.
 */
short CSoundHandler_LoadSoundByName(int self)                   /* CSoundHandler_LoadSoundByName */
{
    unsigned char nameBuffer[256];
    unsigned char scenarioName[256];
    short         resID;
    Handle        sndH;
    char          resName[256];
    char          resInfoBuf[20];

    /* Get current scenario file name as Pascal string */
    BuildPascalString(scenarioName);                            /* BuildPascalString */

    /* Strip file extension: if char at (length - 3) is '.', remove last 4 */
    if (scenarioName[(short)(scenarioName[0] - 3)] == 0x2E) {
        scenarioName[0] -= 4;
    }

    /* Append suffix from STR# at offset 0x244 */
    {
        void *suffix = AppendSTRSuffix(scenarioName,
                           (unsigned long)gResourcePtr + 0x244, 1);
        ConcatPStrings(scenarioName, 1, suffix);               /* ConcatPStrings */
    }

    /* Append suffix from STR# at offset 0x248 */
    {
        void *suffix = AppendSTRSuffix(scenarioName,
                           (unsigned long)gResourcePtr + 0x248, 1);
        ConcatPStrings(scenarioName, 1, suffix);
    }

    /* Look up named resource: Get1NamedResource('snd ', constructedName) */
    {
        void *pname = PStrToHandle(scenarioName);               /* FUN_100b1c84 */
        sndH = Get1NamedResource_Thunk('snd ', pname);         /* Get1NamedResource_Thunk(0x736e6420, ...) */
    }

    if (sndH != NULL) {
        DetachResource_Thunk(sndH);                             /* DetachResource */
    }

    /* Add to collection */
    if (*(int *)(self + 4) == 0) {
        int coll = FUN_100eab4c(0);
        *(int *)(self + 4) = coll;
        FUN_100eabdc();
    }
    ResourceRead_Dispatch(*(int *)(self + 4) +
                 (int)*(short *)(*(int *)*(int *)(self + 4) + 0x158),
                 (int)sndH);

    /* Get the resource ID via GetResInfo */
    resName[0] = 0;
    GetResInfo_Thunk(sndH, &resID, resInfoBuf, resName);       /* ResolveAlias */

    return resID;
}


/* =========================================================================
 * SECTION 2: Global Sound Channel
 * ========================================================================= */

/*
 * StopGlobalSound -- StopGlobalSound
 * Address: 0x10091b18, Size: 104 bytes
 *
 * Stops and cleans up the global sound channel.
 */
void StopGlobalSound(void)                                     /* StopGlobalSound */
{
    /* Dispose channel if active */
    if (*gSndChannel != 0) {
        SndDisposeChannel_Thunk((SndChannelPtr)*gSndChannel, true);  /* SndDisposeChannel_Thunk */
    }

    /* Dispose snd handle if loaded */
    if (*gSndHandle != 0) {
        DisposeHandle_Thunk((Handle)*gSndHandle);              /* DisposeHandle_Thunk */
    }

    *gSndHandle  = 0;
    *gSndChannel = 0;
}

/*
 * IsGlobalSoundPlaying -- IsGlobalSoundPlaying
 * Address: 0x10091b80, Size: 132 bytes
 *
 * Checks if the global sound channel is currently playing.
 * Returns true if busy, false if idle or error.
 */
Boolean IsGlobalSoundPlaying(void)                              /* IsGlobalSoundPlaying */
{
    OSErr    err;
    char     statusBuf[12];
    Boolean  busy;

    if (*gSndChannel == 0) {
        return false;
    }

    err = SndChannelStatus_Thunk(                               /* SndChannelStatus_Thunk */
        (SndChannelPtr)*gSndChannel, 0x18, (SCStatus *)statusBuf);

    if (err == noErr) {
        busy = (statusBuf[0x0C] != '\0');  /* scstSynthBusy check */
        if (!busy) {
            StopGlobalSound();
            return false;
        }
        return true;
    }
    else {
        /* Error querying status -- clean up */
        StopGlobalSound();
        return false;
    }
}

/*
 * StartGlobalSoundPlayback -- StartGlobalSoundPlayback
 * Address: 0x10091c04, Size: 160 bytes
 *
 * Begins async playback on the global channel.
 * Called after PlayGlobalSound has set up the channel and loaded the snd.
 */
void StartGlobalSoundPlayback(short sndID)                     /* StartGlobalSoundPlayback */
{
    OSErr err;

    if (sndID == 0 || *gSndChannel == 0)
        return;

    if (*gSndHandle != 0) {
        /* Detach resource to own it */
        DetachResource_Thunk((Handle)*gSndHandle);             /* DetachResource */

        /* Store timestamp reference */
        {
            unsigned int tickCount = FUN_10001a88();            /* TickCount */
            /* Store at global for timing reference */
        }

        /* Play async */
        err = SndPlay_Thunk(                                   /* SndPlay_Thunk */
            (SndChannelPtr)*gSndChannel,
            (SndListHandle)*gSndHandle,
            true);                                              /* async = true */

        if (err != noErr) {
            StopGlobalSound();
        }
    }
}

/*
 * PlayGlobalSound -- PlayGlobalSound
 * Address: 0x10091ca4, Size: 288 bytes
 *
 * Full setup and play of a sound effect on the global channel:
 * 1. Wait for current sound to finish
 * 2. Stop and clean up
 * 3. Load new snd resource
 * 4. Create new channel
 * 5. Set volume via ampCmd
 *
 * Does NOT call SndPlay -- actual playback triggered by StartGlobalSoundPlayback.
 */
void PlayGlobalSound(short sndID, short volume)                /* PlayGlobalSound */
{
    OSErr      err;
    SndCommand cmd;

    if (sndID == 0)
        return;

    /* Wait for any current sound to finish */
    while (IsGlobalSoundPlaying()) {                           /* IsGlobalSoundPlaying */
        /* Busy-wait */
    }

    /* Stop and clean up current sound */
    StopGlobalSound();                                         /* StopGlobalSound */

    /* Load the snd resource */
    *gSndHandle = (int)GetResource_Thunk('snd ', sndID);      /* GetResource_Thunk(0x736e6420, id) */

    if (*gSndHandle == 0)
        return;

    /* Create a new sound channel */
    err = SndNewChannel_Thunk(                                 /* SndNewChannel_Thunk */
        (SndChannelPtr *)gSndChannel, 0, 0, NULL);

    if (err == noErr && *gSndChannel != 0) {
        /* Lock the snd handle in memory */
        HLock_Thunk_Sound((Handle)*gSndHandle);                      /* HLock_Thunk_Sound */

        /* Detach from resource map if valid */
        if (*(int *)*gSndHandle != 0) {
            DetachResource_Thunk((Handle)*gSndHandle);         /* DetachResource */

            /* Set amplitude: volume * 25 (game 0-10 -> Mac 0-250) */
            cmd.cmd    = 0x2B;  /* ampCmd = 43 */
            cmd.param1 = volume * 0x19;
            cmd.param2 = 0;
            SndDoImmediate_Thunk(                              /* SndDoImmediate_Thunk */
                (SndChannelPtr)*gSndChannel, &cmd);
        }
    }
    else {
        /* Channel creation failed -- clean up */
        StopGlobalSound();
    }
}


/* =========================================================================
 * SECTION 3: Sound Name Resolution
 * ========================================================================= */

/*
 * ResolveSoundName -- ResolveSoundName
 * Address: 0x10091de0, Size: 272 bytes
 *
 * Resolves a sound name to a snd resource ID.
 * Constructs a full name from the scenario prefix + suffix strings
 * (STR# offsets 0x27C and 0x280), then looks up via Get1NamedResource.
 */
short ResolveSoundName(void *nameParam)                        /* ResolveSoundName */
{
    unsigned char nameBuffer[256];
    unsigned char scenarioName[256];
    short         resID = 0;
    Handle        sndH;
    char          resName[256];
    char          resInfoBuf[20];

    /* Get current scenario file name */
    BuildPascalString(scenarioName, nameParam);                /* BuildPascalString */

    /* Strip file extension if present */
    if (scenarioName[(short)(scenarioName[0] - 3)] == 0x2E) {
        scenarioName[0] -= 4;
    }

    /* Append suffix from STR# at offset 0x27C */
    {
        void *suffix = AppendSTRSuffix(scenarioName,
                           (unsigned long)gResourcePtr + 0x27C, 1);
        ConcatPStrings(scenarioName, 1, suffix);
    }

    /* Append suffix from STR# at offset 0x280 */
    {
        void *suffix = AppendSTRSuffix(scenarioName,
                           (unsigned long)gResourcePtr + 0x280, 1);
        ConcatPStrings(scenarioName, 1, suffix);
    }

    /* Look up: Get1NamedResource('snd ', constructedName) */
    {
        void *pname = PStrToHandle(scenarioName);
        sndH = Get1NamedResource_Thunk('snd ', pname);        /* Get1NamedResource_Thunk(0x736e6420, ...) */
    }

    if (sndH == NULL) {
        return 0;  /* Not found */
    }

    /* Get the resource ID */
    resName[0] = 0;
    GetResInfo_Thunk(sndH, &resID, resInfoBuf, resName);      /* ResolveAlias */

    return resID;
}


/* =========================================================================
 * SECTION 4: Music System (QuickTime Tune Player)
 * ========================================================================= */

/*
 * IsMusicPlaying -- IsMusicPlaying
 * Address: 0x10091ef0, Size: 80 bytes
 *
 * Checks the TunePlayer status to determine if music is still playing.
 */
Boolean IsMusicPlaying(void)                                   /* IsMusicPlaying */
{
    char  statusBuf[12];
    short status;

    TuneGetStatus_Thunk(*gTunePlayer, statusBuf);              /* TuneGetStatus_Thunk */

    status = *(short *)(statusBuf + 8);  /* local_1c in decompiled */

    /* Return true if status indicates playing:
     * (-1 - status + (status == 0)) >> 63   -- a clever boolean trick */
    return (status != 0);
}

/*
 * FadeAndStopMusic -- FadeAndStopMusic
 * Address: 0x10091f40, Size: 148 bytes
 *
 * Fades music volume to zero in steps of 0x50 (80), then stops playback.
 */
void FadeAndStopMusic(void)                                    /* FadeAndStopMusic */
{
    long fixedVolume;

    if (*gTunePlayer == 0)
        return;

    /* Get current music volume and convert to fixed-point */
    {
        unsigned long vol = (unsigned long)GetMusicVolume();    /* GetMusicVolume */
        fixedVolume = (long)(((vol & 0x3FFFFFFF) * 4 - vol & 0x1FFFFF) << 11);
    }

    /* Ramp volume down in steps of 0x50 */
    while (fixedVolume >= 0) {
        TuneSetVolume_Thunk(*gTunePlayer, fixedVolume);        /* TuneSetVolume_Thunk */
        fixedVolume -= 0x50;
    }

    /* Stop playback */
    {
        ComponentResult cr;
        cr = FUN_10003798(*gTunePlayer, 0);                    /* TuneStop variant */
        EndFocus(cr);
    }
}

/*
 * DisposeMusicResources -- DisposeMusicResources
 * Address: 0x10091fd4, Size: 172 bytes
 *
 * Unrolls the TunePlayer and disposes Tune/Head resource handles.
 */
void DisposeMusicResources(void)                               /* DisposeMusicResources */
{
    /* Unroll the TunePlayer if active */
    if (*gTunePlayer != 0) {
        TuneUnroll_Thunk();                                    /* TuneUnroll_Thunk */
    }

    /* Dispose Tune data handle */
    if (IsHandleValid(*gTuneDataH)) {                          /* IsHandleValid */
        DisposeHandle_Thunk((Handle)*gTuneDataH);             /* DisposeHandle_Thunk */
        ReleaseHandle_Mapgen(*gTuneDataH);                            /* ReleaseHandle_Mapgen */
    }

    /* Dispose Tune header handle */
    if (IsHandleValid(*gTuneHeaderH)) {
        DisposeHandle_Thunk((Handle)*gTuneHeaderH);
        ReleaseHandle_Mapgen(*gTuneHeaderH);
    }

    *gTuneHeaderH = 0;
    *gTuneDataH   = 0;
}

/*
 * LoadMusic -- LoadMusic
 * Address: 0x10092080, Size: 804 bytes
 *
 * Loads Tune and Head resources by constructed name, sets up the
 * TunePlayer with the instrument header, and prerolls for playback.
 *
 * Shows/hides a loading progress indicator during the operation.
 */
void LoadMusic(void *resourcePrefix, void *tuneName)           /* LoadMusic */
{
    unsigned char nameBuffer[256];
    unsigned char scenarioName[256];
    unsigned char concatBuf[256];
    unsigned char fullName[312];
    Handle        tuneH, headH;
    int           errCode;

    /* Show progress indicator */
    {
        int *progressView = (int *)*(int *)gProgressView;
        if (progressView != NULL) {
            ResourceRead_Dispatch((int)progressView +
                         (int)*(short *)(*progressView + 0xB0), 0);
        }
        /* Set progress bar indicators */
    }

    /* Save/restore error handler context */

    /* Open TunePlayer component if not already open */
    if (*gTunePlayer == 0) {
        *gTunePlayer = (int)OpenDefaultComponent_Thunk('tune', 0);  /* OpenDefaultComponent_Thunk */
        FocusObject();
    }

    /* Build the resource name from scenario name + tune name */
    BuildPascalString(fullName, tuneName);                     /* BuildPascalString */

    /* Strip extension */
    if (fullName[(short)(fullName[0] - 3)] == 0x2E) {
        fullName[0] -= 4;
    }

    /* Get music prefix from STR# */
    BuildPascalString(nameBuffer, (unsigned long)gResourcePtr + 0x2B4);
    ConcatBuildName(scenarioName, nameBuffer, fullName);       /* ConcatBuildName */

    /* Copy constructed name */
    FUN_100012d8(scenarioName, fullName, (unsigned long)scenarioName[0] + 1);

    /* Load Tune resource: Get1NamedResource('Tune', name) */
    {
        void *pname = PStrToHandle(fullName);
        tuneH = Get1NamedResource_Thunk('Tune', pname);       /* Get1NamedResource_Thunk(0x54756e65, ...) */
    }
    *gTuneDataH = tuneH;
    MarkChanged();

    HLock_Thunk_Sound(tuneH);                                       /* HLock_Thunk_Sound */
    FUN_100ef9b8(tuneH);                                      /* DetachResource variant */

    /* Load Head resource: Get1NamedResource('Head', name) */
    {
        void *pname = PStrToHandle(fullName);
        headH = Get1NamedResource_Thunk('Head', pname);       /* Get1NamedResource_Thunk(0x48656164, ...) */
    }
    *gTuneHeaderH = headH;
    MarkChanged();

    HLock_Thunk_Sound(headH);
    FUN_100ef9b8(headH);

    /* Set instrument header: TuneSetHeader(gTunePlayer, *gTuneHeaderH) */
    {
        ComponentResult cr;
        cr = TuneSetHeader_Thunk(*gTunePlayer, *(void **)*gTuneHeaderH);  /* TuneSetHeader_Thunk */
        EndFocus(cr);
    }

    /* Preroll the TunePlayer for playback */
    {
        ComponentResult cr;
        cr = TunePreroll_Thunk(*gTunePlayer);                 /* TunePreroll_Thunk */
        EndFocus(cr);
    }

    /* Hide progress indicator and restore state */
    {
        int *progressView = (int *)*(int *)gProgressView;
        if (progressView != NULL) {
            ResourceRead_Dispatch((int)progressView +
                         (int)*(short *)(*progressView + 0xB0), 1);
        }
    }
}

/*
 * PlayMusic -- PlayMusic
 * Address: 0x100923a4, Size: 224 bytes
 *
 * Begins music playback via TuneQueue.
 * Sets volume first, stores loop flag, then queues the tune data.
 */
void PlayMusic(long unused, Boolean loop)                      /* PlayMusic */
{
    long fixedVolume;

    /* All three must be valid */
    if (*gTunePlayer == 0 || *gTuneDataH == 0 || *gTuneHeaderH == 0)
        return;

    /* Compute fixed-point volume from game volume (0-10) */
    {
        unsigned long vol = (unsigned long)GetMusicVolume();    /* GetMusicVolume */
        fixedVolume = (long)(((vol & 0x3FFFFFFF) * 4 - vol & 0x1FFFFF) << 11);
    }

    /* Set volume before playback */
    TuneSetVolume_Thunk(*gTunePlayer, fixedVolume);            /* TuneSetVolume_Thunk */

    /* Store loop flag in global */
    /* *(char *)loopFlagAddr = loop; */

    /* Queue the tune for playback:
     * TuneQueue(tp, tuneData, 0x10000=timeScale, 0=offset,
     *           -1=playToEnd, loop, NULL=callback, 0=refCon) */
    {
        ComponentResult cr;
        cr = TuneQueue_Thunk(                                  /* TuneQueue_Thunk */
            *gTunePlayer,
            *(void **)*gTuneDataH,
            0x10000,             /* time scale */
            0,                   /* offset */
            (long)-1,            /* play to end */
            (long)loop,          /* 1 = loop, 0 = play once */
            NULL,                /* no callback */
            0);                  /* refCon */
        EndFocus(cr);
    }

    /* Set volume again after queue (belt and suspenders) */
    TuneSetVolume_Thunk(*gTunePlayer, fixedVolume);
}

/*
 * SetMusicVolume -- SetMusicVolume
 * Address: 0x10092a58, Size: 76 bytes
 *
 * Directly sets the music playback volume.
 * Converts game volume (0-10) to QuickTime fixed-point.
 */
void SetMusicVolume(short volume)                              /* SetMusicVolume */
{
    if (*gTunePlayer != 0) {
        long fixedVolume = (long)(((long)volume & 0x3FFFFFFFUL) * 4 -
                                   (long)volume & 0x1FFFFFL) << 11;
        TuneSetVolume_Thunk(*gTunePlayer, fixedVolume);        /* TuneSetVolume_Thunk */
    }
}

/*
 * RestartMusic -- YieldToEventLoop
 * Address: 0x100929a0, Size: 184 bytes
 *
 * Checks if music has stopped and restarts if looping was requested.
 */
void RestartMusic(void)                                        /* YieldToEventLoop */
{
    if (*(char *)(gSoundPrefs + 0x34) == '\0')
        return;

    TuneStop_Thunk(0, 0);                                     /* TuneStop_Thunk */

    /* Check if loop flag is set and music has stopped */
    if (/* loopFlag != 0 && */ !IsMusicPlaying()) {
        /* Restart with looping */

        /* Save/restore error handler */
        unsigned char errBuf[256];
        *gErrorHandler = errBuf;

        int errCode = FUN_10000090(errBuf);
        if (errCode == 0) {
            PlayMusic(0, true);                                /* PlayMusic */
        }
        /* Restore error handler */
    }
}

/*
 * RestoreMusic -- RestoreMusic
 * Address: 0x10092aa4, Size: 60 bytes
 *
 * Replays the current music track if one was selected.
 */
void RestoreMusic(void)                                        /* RestoreMusic */
{
    if (*gCurrentMusicID != -1) {
        SelectMusic(*gCurrentMusicID);                         /* SelectMusic */
    }
}

/*
 * StopMusic -- StopMusic
 * Address: 0x10092ae0, Size: 48 bytes
 *
 * Stops music: fades out if playing, then disposes resources.
 */
void StopMusic(void)                                           /* StopMusic */
{
    if (IsMusicPlaying()) {                                    /* IsMusicPlaying */
        FadeAndStopMusic();                                    /* FadeAndStopMusic */
    }
    DisposeMusicResources();                                   /* DisposeMusicResources */
}


/* =========================================================================
 * SECTION 5: Music Selection Dispatcher
 * ========================================================================= */

/*
 * SelectMusic -- SelectMusic
 * Address: 0x10092484, Size: 1308 bytes
 *
 * The main music selection function. Maps game states to music tracks.
 *
 * Music State ID Table:
 *   0  -> STR# 8   Title screen / main menu           (loop)
 *   1  -> STR# 10  Player's turn                      (loop)
 *   2  -> STR# 10/11/12  In-game (random selection)   (no loop)
 *   3  -> STR# 9   Battle                             (loop)
 *   4  -> STR# 12  Victory                            (loop)
 *   5  -> STR# 13  Production                         (loop)
 *   6  -> STR# 14  Hero arrives                       (loop)
 *   7  -> STR# 15  Diplomacy / map review             (loop)
 *   8  -> STR# 16  Combat (detailed)                  (loop)
 *   9  -> STR# 17  Event 9                            (loop)
 *  10  -> STR# 18  Event 10                           (loop)
 *  11  -> STR# 19  Event 11                           (loop)
 *
 * State 2 special logic: if all enemies eliminated, random selection
 * with 5% chance of STR#12, 47% STR#11, 48% STR#10.
 */
void SelectMusic(short musicStateID)                           /* SelectMusic */
{
    pint   *gs = gGameState;
    pint    gameStatePtr;
    void   *tuneNameStr;
    void   *prefixStr;
    Boolean doLoop;

    /* Store music state if sound prefs not active */
    if (*(char *)(gSoundPrefs + 0x34) == '\0') {
        *gCurrentMusicID = musicStateID;
        return;
    }

    /* Check if music prefs are loaded */
    if (!IsMusicPrefsLoaded()) {                               /* IsMusicPrefsLoaded */
        *gCurrentMusicID = musicStateID;
        return;
    }

    /* Save/restore error handler context */
    unsigned char errBuf[256];
    void *savedErrHandler = *gErrorHandler;
    *gErrorHandler = errBuf;

    if (FUN_10000090(errBuf) != 0) {
        /* Error path -- restore and return */
        *gErrorHandler = savedErrHandler;
        return;
    }

    /* If same music and still playing, keep it */
    if (musicStateID == *gCurrentMusicID) {
        if (IsMusicPlaying()) {
            *gErrorHandler = savedErrHandler;
            return;
        }
        DisposeMusicResources();
    }

    *gCurrentMusicID = musicStateID;

    /* Stop current music if playing */
    if (IsMusicPlaying()) {
        FadeAndStopMusic();
    }
    DisposeMusicResources();

    /* Get music prefix from STR# 7 */
    prefixStr = GetStringFromSTR(NULL, 7, 0);                  /* FUN_1005f6b0(7, 0) */

    /* Dispatch based on state ID */
    switch (musicStateID) {
    case 0:  /* Title screen */
        tuneNameStr = GetStringFromSTR(NULL, 8, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);   /* loop */
        break;

    case 1:  /* Player's turn */
        tuneNameStr = GetStringFromSTR(NULL, 10, -1);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 2:  /* In-game (conditional random selection) */
    {
        Boolean allDead = true;
        int     i;
        gameStatePtr = *(int *)gs;

        /* Check if all enemy players are eliminated */
        for (i = 0; i < 8; i++) {
            if (*(short *)(gameStatePtr + i * 2 + 0x138) != 0 &&
                *(short *)(gameStatePtr + i * 2 + 0xD0) == 0)
            {
                allDead = false;
                break;
            }
        }

        if (allDead) {
            /* Random selection from 3 tracks */
            int roll = RandomRange(1, 100, 0);               /* Random(1, 100) */

            if (roll < 6) {
                tuneNameStr = GetStringFromSTR(NULL, 12, -1);  /* Victory-like */
            }
            else if (roll < 0x35) {  /* < 53 */
                tuneNameStr = GetStringFromSTR(NULL, 11, -1);  /* Standard */
            }
            else {
                tuneNameStr = GetStringFromSTR(NULL, 10, -1);  /* Turn music */
            }
        }
        else {
            tuneNameStr = GetStringFromSTR(NULL, 11, -1);      /* Standard */
        }

        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, false);   /* no loop for state 2 */
        break;
    }

    case 3:  /* Battle */
        tuneNameStr = GetStringFromSTR(NULL, 9, -1);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 4:  /* Victory */
        tuneNameStr = GetStringFromSTR(NULL, 12, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 5:  /* Production */
        tuneNameStr = GetStringFromSTR(NULL, 13, -1);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 6:  /* Hero arrives */
        tuneNameStr = GetStringFromSTR(NULL, 14, -1);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 7:  /* Diplomacy / map review */
        tuneNameStr = GetStringFromSTR(NULL, 15, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 8:  /* Combat (detailed) */
        tuneNameStr = GetStringFromSTR(NULL, 16, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 9:  /* Event 9 */
        tuneNameStr = GetStringFromSTR(NULL, 17, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 10: /* Event 10 */
        tuneNameStr = GetStringFromSTR(NULL, 18, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;

    case 11: /* Event 11 */
        tuneNameStr = GetStringFromSTR(NULL, 19, 0);
        LoadMusic(prefixStr, tuneNameStr);
        PlayMusic(0, true);
        break;
    }

    /* Restore error handler */
    *gErrorHandler = savedErrHandler;
}


/* =========================================================================
 * SECTION 6: Sound Effect Trigger Functions
 * ========================================================================= */

/*
 * PlayUISound -- PlayUISound
 * Address: 0x10092b10, Size: 208 bytes
 *
 * Plays a UI click sound. variant 0 = normal, 1 = alternate.
 * Loads sound name from STR# 37 (0x25).
 */
void PlayUISound(short variant)                                /* PlayUISound */
{
    short sndID;
    short volume;

    if (!IsMusicEnabled())                                     /* IsMusicEnabled */
        return;

    if (variant == 0) {
        GetStringFromSTR(NULL, 0x25, 0);                       /* STR# 37, index 0 */
    } else {
        GetStringFromSTR(NULL, 0x25, 1);                       /* STR# 37, index 1 */
    }

    sndID = ResolveSoundName(NULL);                            /* ResolveSoundName */
    if (sndID >= 0) {
        volume = GetSoundVolume();                             /* GetSoundVolume */
        PlayGlobalSound(sndID, volume);                        /* PlayGlobalSound */
        StartGlobalSoundPlayback(sndID);                       /* StartGlobalSoundPlayback */
    }
}

/*
 * PlayNotificationSound -- PlayNotificationSound
 * Address: 0x10092be0, Size: 124 bytes
 *
 * Plays a notification/alert sound from STR# 39 (0x27).
 * Triggered by: turn start, combat result, production complete.
 */
void PlayNotificationSound(void)                               /* PlayNotificationSound */
{
    short sndID;
    short volume;

    if (!IsMusicEnabled())
        return;

    GetStringFromSTR(NULL, 0x27, 0);                           /* STR# 39, index 0 */

    sndID = ResolveSoundName(NULL);
    if (sndID >= 0) {
        volume = GetSoundVolume();
        PlayGlobalSound(sndID, volume);
        StartGlobalSoundPlayback(sndID);
    }
}

/*
 * PlayAttackHitSound -- PlayAttackHitSound
 * Address: 0x10093928, Size: 92 bytes
 *
 * Plays the "attack hit" combat sound.
 * Uses gCombatSoundIDs[2] (offset +4 in the table).
 */
void PlayAttackHitSound(void)                                  /* PlayAttackHitSound */
{
    short volume;

    if (!IsMusicEnabled())                                     /* IsMusicEnabled */
        return;

    volume = GetSoundVolume();                                 /* GetSoundVolume */

    PlayGlobalSound(                                           /* PlayGlobalSound */
        *(short *)((int)gCombatSoundIDs + 4),                  /* gCombatSoundIDs[2] */
        volume);
    StartGlobalSoundPlayback(                                  /* StartGlobalSoundPlayback */
        *(short *)((int)gCombatSoundIDs + 4));
}

/*
 * PlayAttackMissSound -- PlayAttackMissSound
 * Address: 0x10093984, Size: 92 bytes
 *
 * Plays the "attack miss / defense" combat sound.
 * Uses gCombatSoundIDs[1] (offset +2 in the table).
 */
void PlayAttackMissSound(void)                                 /* PlayAttackMissSound */
{
    short volume;

    if (!IsMusicEnabled())
        return;

    volume = GetSoundVolume();

    PlayGlobalSound(
        *(short *)((int)gCombatSoundIDs + 2),                  /* gCombatSoundIDs[1] */
        volume);
    StartGlobalSoundPlayback(
        *(short *)((int)gCombatSoundIDs + 2));
}

/*
 * PlayFanfareSound -- PlayFanfareSound
 * Address: 0x100939e0, Size: 124 bytes
 *
 * Plays a victory fanfare sound from STR# 63 (0x3F).
 */
void PlayFanfareSound(void)                                    /* PlayFanfareSound */
{
    short sndID;
    short volume;

    if (!IsMusicEnabled())
        return;

    GetStringFromSTR(NULL, 0x3F, 0);                           /* STR# 63, index 0 */

    sndID = ResolveSoundName(NULL);
    if (sndID >= 0) {
        volume = GetSoundVolume();
        PlayGlobalSound(sndID, volume);
        StartGlobalSoundPlayback(sndID);
    }
}

/*
 * InitCombatSounds -- InitCombatSounds
 * Address: 0x10093a5c, Size: 164 bytes
 *
 * Loads 4 combat sound names from STR# 64 (0x40) and resolves
 * them to snd resource IDs stored in gCombatSoundIDs table.
 *
 * Table layout at gCombatSoundIDs:
 *   [0] = Primary attack sound    (STR# 64, index 0)
 *   [1] = Attack miss / defense   (STR# 64, index 1)
 *   [2] = Attack hit sound        (STR# 64, index 2)
 *   [5] = Special combat sound    (STR# 64, index 5)
 */
void InitCombatSounds(void)                                    /* InitCombatSounds */
{
    /* Load and resolve combat sound names */
    GetStringFromSTR(NULL, 0x40, 0);                           /* STR# 64, index 0 */
    gCombatSoundIDs[0] = ResolveSoundName(NULL);

    GetStringFromSTR(NULL, 0x40, 1);                           /* STR# 64, index 1 */
    gCombatSoundIDs[1] = ResolveSoundName(NULL);

    GetStringFromSTR(NULL, 0x40, 2);                           /* STR# 64, index 2 */
    gCombatSoundIDs[2] = ResolveSoundName(NULL);

    GetStringFromSTR(NULL, 0x40, 5);                           /* STR# 64, index 5 */
    gCombatSoundIDs[5] = ResolveSoundName(NULL);

    /* Clear related animation state flags */
    /* *(int *)animFlag1 = 0; */
    /* *(int *)animFlag2 = 0; */
    /* *(int *)animFlag3 = 0; */
}

/*
 * GetSoundActiveFlag -- GetSoundActiveFlag
 * Address: 0x10093b00, Size: 8 bytes
 *
 * Returns the global sound-active flag.
 */
int GetSoundActiveFlag(void)                                   /* GetSoundActiveFlag */
{
    return gSoundActive;                                       /* gSoundActive */
}
