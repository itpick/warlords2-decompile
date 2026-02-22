/*
 * main.c - Entry point for Warlords II (Reconstructed)
 *
 * Classic Mac OS PPC application entry point.
 * Creates 3 game windows (main map, overview minimap, info panel)
 * and menus directly, bypassing the MacApp framework.
 * Prompts the user to open a scenario file via StandardGetFile,
 * loads MAP/SCN data via Resource Manager, and renders a terrain
 * color grid in the main window.
 */

#include "warlords2.h"

#ifndef MODERN_BUILD

#include <StandardFile.h>

/* QuickTime Movie Toolbox constant (not in Retro68 multiversal headers) */
#ifndef newMovieActive
#define newMovieActive 1
#endif

/* Window and buffer globals.
 * Each is a pointer-to-int; *gXxx gives the underlying WindowPtr or buffer.
 * In the solo build (main.c only), we define them with backing storage.
 * In the full build, they come from core/globals.c and stubs/globals_extra.c. */
#ifdef SOLO_BUILD
static pint _sb_MainGameWindow = 0;
static pint _sb_OverviewWindow = 0;
static pint _sb_InfoWindow     = 0;
static pint _sb_GameState      = 0;
static pint _sb_MapTiles       = 0;
static pint _sb_ExtState       = 0;
static pint _sb_RoadData       = 0;
static pint _sb_StatusWindow   = 0;
int  *gMainGameWindow = (int *)&_sb_MainGameWindow;
int  *gOverviewWindow = (int *)&_sb_OverviewWindow;
int  *gInfoWindow     = (int *)&_sb_InfoWindow;
int  *gStatusWindow   = (int *)&_sb_StatusWindow;
pint *gGameState      = &_sb_GameState;
pint *gMapTiles       = &_sb_MapTiles;
pint *gExtState       = &_sb_ExtState;   /* piRam10117468 - cities, per-army arrays */
pint *gRoadData       = &_sb_RoadData;   /* piRam10117354 - road overlay 0x4440 bytes */
#else
extern int  *gMainGameWindow;    /* piRam10116208 */
extern int  *gOverviewWindow;    /* piRam10115fa4 */
extern int  *gInfoWindow;        /* piRam10116200 */
extern int  *gStatusWindow;
extern pint *gGameState;         /* piRam1011735c */
extern pint *gMapTiles;          /* piRam10117358 */
extern pint *gExtState;          /* piRam10117468 */
extern pint *gRoadData;          /* piRam10117354 */
#endif

/* App state */
static Boolean sDone      = false;

/* Map loading state */
static Boolean sMapLoaded = false;
static short   sMapWidth  = 0;
static short   sMapHeight = 0;

/* Game setup state */
#define MAX_FACTIONS     8
#define FACTION_NAME_LEN 20
static short sPlayerSide    = 0;
static short sComputerSkill = 0;  /* 0=Knight, 1=Lord, 2=Warlord */

/* Per-faction AI: 0=Human, 1=Knight, 2=Lord, 3=Warlord */
static short sFactionAI[MAX_FACTIONS] = {0, 1, 1, 1, 1, 1, 1, 1};

/* Game options (Edit Options dialog) */
static short sOptionsPreset    = 0;  /* 0=Beginner, 1=Intermediate, 2=Advanced */
static short sNeutralCities    = 0;  /* 0=Average, 1=Strong, 2=Active */
static short sRazingCities     = 0;  /* 0=Always, 1=On Capture, 2=Never */
static Boolean sOptQuests         = true;
static Boolean sOptViewEnemies    = true;
static Boolean sOptHiddenMap      = false;
static Boolean sOptDiplomacy      = false;
static Boolean sOptViewProd       = true;
static Boolean sOptIntenseCombat  = false;
static Boolean sOptMilAdvisor     = true;
static Boolean sOptQuickStart     = false;
static Boolean sOptRandomTurns    = false;

/* "I am the Greatest" mode: sets all AI to Knight (easiest) */
static Boolean sIAmGreatest = false;

/* Per-faction "Character" toggle (hero starts with faction) */
static Boolean sFactionCharacter[MAX_FACTIONS] = {true, false, false, false, false, false, false, false};

/* Game speed: 0=Slow, 1=Normal, 2=Fast, 3=Instant */
static short sGameSpeed = 1;

static unsigned long SpeedTicks(unsigned long baseTicks)
{
    switch (sGameSpeed) {
        case 0:  return baseTicks * 3 / 2;  /* Slow: 1.5x */
        case 1:  return baseTicks;           /* Normal: 1x */
        case 2:  return baseTicks / 3;       /* Fast: 0.33x */
        case 3:  return 1;                   /* Instant: minimal */
        default: return baseTicks;
    }
}

/* Sound volume controls */
static short sSoundMaster = 7;   /* 0-10 */
static short sSoundEffects = 7;
static short sSoundMusic = 5;

/* ===== Sound System ===== */
/* snd resource IDs from original app */
#define SND_ARMY      1000  /* army selection/movement */
#define SND_ARMY2     1001  /* secondary army sound */
#define SND_CHORD     1002  /* completion/success */
#define SND_DING      1003  /* notification ding */
#define SND_DRAMATIC  1004  /* dramatic event */
#define SND_ORCH      1005  /* orchestral fanfare */
#define SND_SPLASH    1006  /* splash screen */
#define SND_TURN      1007  /* turn change */
#define SND_WAR       1035  /* combat/battle */

static SndChannelPtr sSndChannel = NULL;

static void InitSoundSystem(void)
{
    if (sSndChannel == NULL)
        SndNewChannel(&sSndChannel, sampledSynth, 0, NULL);
}

static void PlaySound(short sndID)
{
    Handle sndH;
    SndCommand ampCmd;

    /* Check if sound is muted */
    if (sSoundMaster == 0 || sSoundEffects == 0) return;
    if (sGameSpeed >= 3) return;  /* no sounds in Instant mode */

    if (sSndChannel == NULL) InitSoundSystem();
    if (sSndChannel == NULL) return;

    /* Set volume before playing (original sends ampCmd = vol * 25) */
    ampCmd.cmd = 43;  /* ampCmd */
    ampCmd.param1 = 0;
    ampCmd.param2 = (long)sSoundEffects * 25L;
    SndDoImmediate(sSndChannel, &ampCmd);

    sndH = GetResource('snd ', sndID);
    if (sndH != NULL) {
        HLock(sndH);
        SndPlay(sSndChannel, sndH, true);  /* async */
    }
}

static void CleanupSoundSystem(void)
{
    if (sSndChannel != NULL) {
        SndDisposeChannel(sSndChannel, true);
        sSndChannel = NULL;
    }
}

/* ===== Music System (QuickTime Tune Player) ===== */
/* Music state constants for LoadAndPlayMusic dispatcher */
#define MUSIC_STATE_TITLE    0
#define MUSIC_STATE_TURN     1
#define MUSIC_STATE_BATTLE   3
#define MUSIC_STATE_VICTORY  4

/* Types and forward declarations for Component Manager / QTMA
 * (not in Retro68 multiversal headers) */
typedef long ComponentResult;
typedef void *TuneCallBackUPP;

extern pascal ComponentInstance OpenDefaultComponent(OSType componentType, OSType componentSubType);
extern pascal OSErr CloseComponent(ComponentInstance aComponentInstance);
extern pascal ComponentResult TuneSetHeader(ComponentInstance tp, unsigned long *header);
extern pascal ComponentResult TunePreroll(ComponentInstance tp);
extern pascal ComponentResult TuneQueue(ComponentInstance tp, unsigned long *tuneData,
    Fixed tuneRate, unsigned long tuneStartPosition, unsigned long tuneStopPosition,
    unsigned long queueFlags, TuneCallBackUPP callBackProc, long refCon);
extern pascal ComponentResult TuneSetVolume(ComponentInstance tp, Fixed volume);
extern pascal ComponentResult TuneStop(ComponentInstance tp, long stopFlag);

static ComponentInstance gTunePlayer = NULL;
static Handle gTuneDataH = NULL;
static Handle gTuneHeaderH = NULL;
static short gCurrentMusicState = -1;
static Boolean gMusicEnabled = true;

/* Voice narration channel (separate from SFX) */
static SndChannelPtr sVoiceChannel = NULL;

/* Voice snd resource IDs (verified from resource fork) */
#define SND_VBEGIN    1008  /* VBEGIN  - game start narration */
#define SND_VGOLD00   1009  /* VGOLD00 - gold/treasury narration */
#define SND_VGOLD01   1010  /* VGOLD01 - gold/treasury narration */
#define SND_VGOLD01A  1011  /* VGOLD01A - gold/treasury variant */
#define SND_VGREET0   1012  /* VGREET0 - turn greeting */
#define SND_VHERO00   1013  /* VHERO00 - hero event */
#define SND_VHERO01   1014  /* VHERO01 - hero event */
#define SND_VLOSE05   1015  /* VLOSE05 - losing <=5% territory */
#define SND_VLOSE10   1016  /* VLOSE10 */
#define SND_VLOSE15   1017  /* VLOSE15 */
#define SND_VLOSE20   1018  /* VLOSE20 */
#define SND_VLOSE25   1019  /* VLOSE25 */
#define SND_VLOSE35   1020  /* VLOSE35 - losing heavily */
#define SND_VMESS00   1021  /* VMESS00 - random event narration */
#define SND_VMESS01   1022  /* VMESS01 */
#define SND_VMESS02   1023  /* VMESS02 */
#define SND_VMESS03   1024  /* VMESS03 */
#define SND_VMOMENT   1025  /* VMOMENT - loading/processing */
#define SND_VQUIT     1026  /* VQUIT   - game quit */
#define SND_VWIN05    1027  /* VWIN05  - winning 5% territory */
#define SND_VWIN05A   1028  /* VWIN05A - winning variant */
#define SND_VWIN10    1029  /* VWIN10  */
#define SND_VWIN15    1030  /* VWIN15  */
#define SND_VWIN20    1031  /* VWIN20  */
#define SND_VWIN25    1032  /* VWIN25  */
#define SND_VWIN30    1033  /* VWIN30  */
#define SND_VWIN35    1034  /* VWIN35  - dominating */

static void StopMusic(void)
{
    if (gTunePlayer != NULL) {
        TuneStop(gTunePlayer, 0);
        TuneUnroll(gTunePlayer);
    }
    if (gTuneDataH != NULL) {
        DisposeHandle(gTuneDataH);
        gTuneDataH = NULL;
    }
    if (gTuneHeaderH != NULL) {
        DisposeHandle(gTuneHeaderH);
        gTuneHeaderH = NULL;
    }
}

static void InitMusicSystem(void)
{
    gTunePlayer = OpenDefaultComponent('tune', 0);
    if (gTunePlayer == NULL) {
        /* QTMA TunePlayer not available — music disabled */
        gMusicEnabled = false;
    }
}

static void CleanupMusicSystem(void)
{
    StopMusic();
    if (gTunePlayer != NULL) {
        CloseComponent(gTunePlayer);
        gTunePlayer = NULL;
    }
}

/* Tune/Head resource IDs (verified from resource fork):
 * 1000-1023: RINT0-RINT23 (in-game tracks)
 * 1024: RSTARTUP (title music)
 * 1025: RANIM (animation music) */
#define TUNE_RSTARTUP  1024
#define TUNE_RANIM     1025
#define TUNE_RINT_BASE 1000  /* RINT0=1000 .. RINT23=1023 */
#define TUNE_RINT_COUNT 24

static void LoadAndPlayMusic(short state)
{
    Handle tuneH, headH;
    long fixedVol;
    short tuneID;

    if (!gMusicEnabled || sSoundMusic == 0) return;
    if (gTunePlayer == NULL) return;
    if (state == gCurrentMusicState) return;

    /* Stop current music */
    StopMusic();
    gCurrentMusicState = state;

    /* Pick tune resource ID based on game state */
    switch (state) {
        case MUSIC_STATE_TITLE:
            tuneID = TUNE_RSTARTUP;  /* 1024 = RSTARTUP */
            break;
        case MUSIC_STATE_TURN:
            /* Random from RINT0-RINT23 (24 in-game tracks) */
            tuneID = TUNE_RINT_BASE + (short)(TickCount() % TUNE_RINT_COUNT);
            break;
        case MUSIC_STATE_BATTLE:
            tuneID = TUNE_RINT_BASE + 8;  /* RINT8 */
            break;
        case MUSIC_STATE_VICTORY:
            tuneID = TUNE_RINT_BASE + 9;  /* RINT9 */
            break;
        default:
            return;
    }

    /* Load Tune and Head resources by ID (searches all open resource files) */
    tuneH = GetResource('Tune', tuneID);
    if (tuneH == NULL) return;
    headH = GetResource('Head', tuneID);
    if (headH == NULL) return;

    HLock(tuneH);
    DetachResource(tuneH);
    gTuneDataH = tuneH;

    HLock(headH);
    DetachResource(headH);
    gTuneHeaderH = headH;

    /* Set header and preroll */
    TuneSetHeader(gTunePlayer, (unsigned long *)*gTuneHeaderH);
    TunePreroll(gTunePlayer);

    /* Volume: match original formula from sound.c
     * vol = (sSoundMusic * 4 - sSoundMusic) << 11  (for sSoundMusic in 0-10) */
    fixedVol = ((long)sSoundMusic * 3L) << 11;
    TuneSetVolume(gTunePlayer, fixedVol);

    /* Queue for playback: -1 = play to end, queueFlags=0 = no loop */
    TuneQueue(gTunePlayer, (unsigned long *)*gTuneDataH,
              (Fixed)0x10000L, /* time scale */
              0,               /* tuneStartPosition */
              (unsigned long)-1L,  /* tuneStopPosition: -1 = play to end */
              0,               /* queueFlags: 0 = play once */
              (TuneCallBackUPP)NULL, 0);

    /* Set volume again after queue (matches original pattern) */
    TuneSetVolume(gTunePlayer, fixedVol);
}

/* PlayVoice — play a voice narration snd on the voice channel */
static void PlayVoice(short sndID)
{
    Handle sndH;
    SndCommand ampCmd;

    if (sSoundMaster == 0) return;

    if (sVoiceChannel == NULL)
        SndNewChannel(&sVoiceChannel, sampledSynth, 0, NULL);
    if (sVoiceChannel == NULL) return;

    /* Apply master volume */
    ampCmd.cmd = 43;  /* ampCmd */
    ampCmd.param1 = 0;
    ampCmd.param2 = (long)sSoundMaster * 25L;
    SndDoImmediate(sVoiceChannel, &ampCmd);

    sndH = GetResource('snd ', sndID);
    if (sndH != NULL) {
        HLock(sndH);
        SndPlay(sVoiceChannel, sndH, true);
    }
}

static void CleanupVoiceSystem(void)
{
    if (sVoiceChannel != NULL) {
        SndDisposeChannel(sVoiceChannel, true);
        sVoiceChannel = NULL;
    }
}

/* ===== Quest System ===== */
#define QUEST_NONE      0
#define QUEST_CAPTURE   1  /* Capture specific city */
#define QUEST_EXPLORE   2  /* Search N ruins */
#define QUEST_CONQUER   3  /* Own N total cities */
#define QUEST_GOLD      4  /* Accumulate N gold */
typedef struct {
    short type;       /* QUEST_* */
    short target;     /* city index, ruin count, city count, or gold amount */
    short progress;   /* current progress toward target */
    short reward;     /* gold reward amount */
    short rewardItem; /* item id (1-based) to give on completion, 0=none */
    Boolean completed;
    Boolean active;
} QuestState;
static QuestState sPlayerQuests[8];  /* one per player */

/* ===== Item/Artifact System ===== */
#undef MAX_ITEMS
#define MAX_ITEMS        39
#define ITEM_SLOTS       4   /* hero_item_1..4 at army+0x3A..+0x40 */
#define ITEM_TYPE_BATTLE    1  /* +value to hero strength */
#define ITEM_TYPE_COMMAND   2  /* +value to hero AND all stacked units */
#define ITEM_TYPE_FLYING    5  /* stack becomes flying */
#define ITEM_TYPE_MOVEMENT  6  /* doubles stack movement */
#define ITEM_TYPE_GOLD      7  /* +value gold per city per turn */

typedef struct {
    char name[20];
    short type;   /* ITEM_TYPE_* */
    short value;  /* bonus amount: 1-3 for battle/cmd, 2-6 for gold, 0 for fly/move */
} ItemDef;

static const ItemDef sItemTable[MAX_ITEMS] = {
    /* Battle items (+strength to hero) */
    {"Firesword",         1, 1}, {"Icesword",           1, 1},
    {"Spear of Ank",      1, 1}, {"Bow of Eldros",      1, 2},
    {"Lightsword",        1, 2}, {"Darksword",          1, 2},
    {"Staff of Might",    1, 3}, {"Tome of War",        1, 1},
    {"Sword of Death",    1, 1}, {"Berserker Helm",     1, 2},
    {"Gem of Attack",     1, 2}, {"Horn of Siege",      1, 3},
    {"Shield of Courage", 1, 1}, {"Troll Helm",         1, 1},
    {"Lock of Safety",    1, 2}, {"Chimes of Safety",   1, 2},
    {"Armour of Gods",    1, 3},
    /* Command items (+strength to all stacked) */
    {"Crown of Loriel",   2, 1}, {"Sceptre of Loriel",  2, 1},
    {"Orb of Loriel",     2, 1}, {"Crimson Banner",     2, 1},
    {"Horn of Ages",      2, 2}, {"Ring of Power",      2, 2},
    {"Staff of Ruling",   2, 3},
    /* Flying items (stack flies) */
    {"Wings of Flying",   5, 0}, {"Witch's Broom",      5, 0},
    {"Wand of Flight",    5, 0}, {"Magic Carpet",       5, 0},
    {"Wings of Eagle",    5, 0},
    /* Movement items (doubles move) */
    {"Boots of Speed",    6, 0}, {"Cup of Haste",       6, 0},
    {"Ring of Travel",    6, 0}, {"Phantom Steed",      6, 0},
    {"Staff of Movement", 6, 0},
    /* Gold items (+income per city) */
    {"Everful Purse",     7, 2}, {"Eldros's Pouch",     7, 2},
    {"Okradon's Pouch",   7, 4}, {"Silver Purse",       7, 4},
    {"Horn of Plenty",    7, 6}
};

/* ===== Resource String Loading System ===== */
/* STR# resource IDs */
#define STR_COMMON_BUTTONS  1000   /* Cancel, OK, No, Yes, Done, Quest, Reject */
#define STR_CITY_DIALOG     3300   /* City dialog labels (17 strings) */
#define STR_HERO_DIPLO      3200   /* Hero/diplomacy labels (12 strings) */
#define STR_CITY_CAPTURE    3800   /* Occupy, Pillage, Sack, Raze */
#define STR_STACK_INFO      3600   /* Stack info labels (9 strings) */
#define STR_HERO_INFO       4000   /* Hero info labels (4 strings) */
#define STR_SEARCH_TEMPLE   4100   /* Searching/temple labels (2 strings) */
#define STR_COMBAT          3500   /* Combat/battle labels (20 strings) */
#define STR_QUEST           3700   /* Quest dialog labels (16 strings) */
#define STR_GAME_SETUP      3100   /* Game setup labels (20 strings) */
#define STR_GAME_SETTINGS   3900   /* Game settings labels (20 strings) */
#define STR_REPORT          3400   /* Report dialog labels (20 strings) */
#define STR_VICTORY         4200   /* Victory/defeat labels (10 strings) */
#define STR_MISC            4300   /* Miscellaneous labels (20 strings) */

/* Cached string tables - loaded once on first use */
#define MAX_CACHED_STRINGS 80

typedef struct {
    short strListID;
    short count;
    Str255 strings[MAX_CACHED_STRINGS];
    Boolean loaded;
} CachedStringTable;

static CachedStringTable sStrCache[] = {
    { 1000, 7,  {}, false },  /* Common buttons */
    { 3300, 33, {}, false },  /* City dialog */
    { 3200, 23, {}, false },  /* Hero/diplomacy */
    { 3800, 7,  {}, false },  /* City capture */
    { 3600, 17, {}, false },  /* Stack info */
    { 4000, 4,  {}, false },  /* Hero info */
    { 4100, 16, {}, false },  /* Search/temple */
    { 3500, 21, {}, false },  /* Combat */
    { 3700, 16, {}, false },  /* Quest */
    { 3100, 21, {}, false },  /* Game setup */
    { 3900, 30, {}, false },  /* Game settings */
    { 3400, 20, {}, false },  /* Report */
    { 4200, 22, {}, false },  /* Victory */
    { 4300, 77, {}, false },  /* Misc */
};
#define STR_CACHE_COUNT  14

/* Load a single string from a STR# resource.
 * index is 0-based; GetIndString uses 1-based indexing. */
static void LoadSTRString(short strListID, short index, Str255 outStr)
{
    GetIndString(outStr, strListID, index + 1);
    /* If resource missing, outStr[0] will be 0 (empty Pascal string) */
}

/* Get a cached string from a STR# resource table.
 * Returns pointer to Pascal string, or fallback if resource unavailable. */
static const unsigned char *GetCachedString(short strListID, short index,
                                            const unsigned char *fallback)
{
    short i;
    for (i = 0; i < STR_CACHE_COUNT; i++) {
        if (sStrCache[i].strListID == strListID) {
            if (!sStrCache[i].loaded) {
                short j;
                for (j = 0; j < sStrCache[i].count && j < MAX_CACHED_STRINGS; j++) {
                    GetIndString(sStrCache[i].strings[j], strListID, j + 1);
                }
                sStrCache[i].loaded = true;
            }
            if (index >= 0 && index < sStrCache[i].count &&
                sStrCache[i].strings[index][0] > 0) {
                return sStrCache[i].strings[index];
            }
            return fallback;
        }
    }
    return fallback;
}

/* ===== DAT 1000 Master String Table ===== */
/* Contains all in-game text: defeat/victory messages, military advisor quotes,
 * terrain descriptions, combat bonus text, loading screen messages.
 * Stored as null-delimited strings in a single resource. */
#define DAT_MASTER_STRINGS  1000
#define MAX_DAT_STRINGS     256
#define MAX_DAT_STRING_LEN  128

static char sDATStrings[MAX_DAT_STRINGS][MAX_DAT_STRING_LEN];
static short sDATStringCount = 0;
static Boolean sDATStringsLoaded = false;

static void LoadDATMasterStrings(void)
{
    Handle h;
    if (sDATStringsLoaded) return;
    sDATStringsLoaded = true;

    h = GetResource('DAT ', DAT_MASTER_STRINGS);
    if (h == NULL) return;

    HLock(h);
    {
        long size = GetHandleSize(h);
        const char *p = (const char *)*h;
        const char *end = p + size;
        short idx = 0;

        while (p < end && idx < MAX_DAT_STRINGS) {
            short len = 0;
            while (p + len < end && p[len] != '\0' && len < MAX_DAT_STRING_LEN - 1)
                len++;
            if (len > 0) {
                BlockMoveData(p, sDATStrings[idx], len);
                sDATStrings[idx][len] = '\0';
                idx++;
            }
            p += len;
            if (p < end && *p == '\0') p++;  /* skip null terminator */
        }
        sDATStringCount = idx;
    }
    HUnlock(h);
}

/* Get a string from the DAT 1000 master table as a Pascal string */
static void GetDATString(short index, Str255 outStr, const char *fallback)
{
    if (!sDATStringsLoaded) LoadDATMasterStrings();
    if (index >= 0 && index < sDATStringCount && sDATStrings[index][0] != '\0') {
        short len = 0;
        while (len < 255 && sDATStrings[index][len] != '\0') len++;
        outStr[0] = (unsigned char)len;
        BlockMoveData(sDATStrings[index], outStr + 1, len);
    } else if (fallback) {
        short len = 0;
        while (len < 255 && fallback[len] != '\0') len++;
        outStr[0] = (unsigned char)len;
        BlockMoveData(fallback, outStr + 1, len);
    } else {
        outStr[0] = 0;
    }
}

/* ===== DAT 1011 Item Definitions ===== */
/* Contains 39 ruin items with names, category codes, and bonus values.
 * If loaded successfully, overrides the hardcoded sItemTable names. */
#define DAT_ITEM_DEFS  1011

static Boolean sDAT1011Loaded = false;

static void LoadDATItemDefs(void)
{
    Handle h;
    if (sDAT1011Loaded) return;
    sDAT1011Loaded = true;

    h = GetResource('DAT ', DAT_ITEM_DEFS);
    if (h == NULL) return;

    HLock(h);
    {
        long size = GetHandleSize(h);
        const unsigned char *p = (const unsigned char *)*h;
        short idx = 0;

        /* DAT 1011 format: each entry is a packed record with a Pascal-style
         * name string followed by type and value fields.
         * Try parsing as: [name_len] [name_bytes...] [type:2] [value:2]
         * If that doesn't work, fall back to null-terminated strings. */
        while ((const char *)p < (const char *)*h + size && idx < MAX_ITEMS) {
            short nameLen = (short)*p;
            if (nameLen > 0 && nameLen < 20 &&
                (const char *)p + 1 + nameLen + 4 <= (const char *)*h + size) {
                /* Pascal-style entry */
                ItemDef *item = (ItemDef *)&sItemTable[idx];  /* cast away const to update */
                short copyLen = nameLen < 19 ? nameLen : 19;
                BlockMoveData(p + 1, item->name, copyLen);
                item->name[copyLen] = '\0';
                item->type = *(short *)(p + 1 + nameLen);
                item->value = *(short *)(p + 1 + nameLen + 2);
                p += 1 + nameLen + 4;
                idx++;
            } else {
                /* Skip unknown data */
                break;
            }
        }
    }
    HUnlock(h);
}

/* Player colors for faction borders and city/temple owner dots */
static RGBColor sPlayerColors[9] = {
    {0xFFFF,0xFFFF,0xFFFF},  /* 0 white */
    {0x0000,0x0000,0xDDDD},  /* 1 blue   - pltt idx 233 #0000dd */
    {0x0000,0xBBBB,0x0000},  /* 2 green  - pltt idx 228 #00bb00 */
    {0xFFFF,0xFFFF,0x0000},  /* 3 yellow - pltt idx 242 #ffff00 */
    {0xDDDD,0x0000,0x0000},  /* 4 red    - pltt idx 243 #dd0000 */
    {0xFFFF,0x7F7F,0x0000},  /* 5 orange - pltt idx 8   #ff7f00 */
    {0x9999,0x0000,0x6666},  /* 6 purple - pltt idx 240 #990066 */
    {0x9999,0xFFFF,0xFFFF},  /* 7 cyan   - pltt idx 231 #99ffff */
    {0x6666,0x6666,0x6666},  /* 8 neutral - gray */
};

/* Terrain sprites: PICT 30022 + 30023 from Grasslands (640x240 each).
 * Layout: 16 columns x 6 rows of 40x40 tiles = 96 tiles per sheet.
 * PICT 30022 = tiles 0-95, PICT 30023 = tiles 96-191.
 * PICTs 30000-30009 are ARMY unit sprites, NOT terrain.
 * Terrain index N: sheet=N/96, local=N%96, col=local%16, row=local/16. */
#define TERRAIN_TILE_W     40
#define TERRAIN_TILE_H     40
#define TERRAIN_COLS       16   /* columns per sheet */
#define TERRAIN_ROWS       6    /* rows per sheet */
#define TERRAIN_TILES_PER_SHEET  96  /* 16 * 6 */
static GWorldPtr sTerrainGW   = NULL;   /* PICT 30022: tiles 0-95 */
static GWorldPtr sTerrainGW2  = NULL;   /* PICT 30023: tiles 96-191 */
static GWorldPtr sRoadGW      = NULL;   /* PICT 30021: road/overlay sprites (16x2 grid) */
static GWorldPtr sRoadMaskGW  = NULL;   /* 1-bit mask generated from sRoadGW for CopyMask */
static RGBColor  sRoadBgColor;          /* road sprite sheet background color */
static Boolean   sTerrainLoaded = false;
static short     sTerrainResFile = -1;
static GWorldPtr sMarbleGW    = NULL;   /* PICT 1001 "MARBLE" background */

/* MAPCOLOR: per-tile color indices loaded from DAT 30020 in terrain resource fork.
 * Each byte maps a terrain tile index to a palette color index (0-16).
 * The palette comes from pltt 1000 in the main app resource fork. */
#define MAPCOLOR_SIZE 256
static unsigned char sMapColor[MAPCOLOR_SIZE];
static Boolean       sMapColorLoaded = false;

/* Minimap palette: 17 entries from pltt 1000 (indices 0-16).
 * Extracted from the original game's palette resource. */
#define MINIMAP_PAL_SIZE 17
static RGBColor sMinimapPalette[MINIMAP_PAL_SIZE] = {
    {0xFFFF, 0xFFFF, 0xFFFF},  /*  0 white */
    {0x8FFF, 0x8FFF, 0x8FFF},  /*  1 light gray */
    {0x8FFF, 0x8FFF, 0x8FFF},  /*  2 gray (same as 1) */
    {0x6FFF, 0x6FFF, 0x6FFF},  /*  3 dark gray (mountains) */
    {0x4FFF, 0x4FFF, 0x4FFF},  /*  4 darker gray */
    {0x428F, 0xBD6F, 0xFFFF},  /*  5 light blue (water/shore) */
    {0x0000, 0x51EB, 0xCF5B},  /*  6 blue (deep water) */
    {0xFFFF, 0xDEB7, 0x1C28},  /*  7 yellow */
    {0xFFFF, 0x7FFF, 0x0000},  /*  8 orange */
    {0xC28E, 0x1999, 0x0000},  /*  9 red */
    {0x4F5B, 0xAB84, 0x1999},  /* 10 green (grass) */
    {0x0000, 0x8A3C, 0x028F},  /* 11 dark green (forest) */
    {0x0000, 0x5470, 0x0000},  /* 12 very dark green */
    {0xA3D6, 0x51EA, 0x0000},  /* 13 brown (hills) */
    {0x70A3, 0x30A3, 0x0000},  /* 14 dark brown */
    {0x4F5B, 0xAB84, 0x1999},  /* 15 remap magenta→green (transparency) */
    {0x6E14, 0x6B85, 0x0000},  /* 16 olive (swamp) */
};

/* Army sprite sheets: 10 PICTs (IDs 20000-20009) from Armies folder.
 * Each sheet has army sprites for different facing directions.
 * PICT 20000-20007: 8 compass directions, each 512x64.
 * Army type Y offset = armyType * 0x20 (32 pixels per type).
 * Sprite size: ~29x32 per army icon. */
#define ARMY_SHEETS    10
#define ARMY_PICT_BASE 20000
static GWorldPtr sArmyGW[ARMY_SHEETS];
static RGBColor  sArmyBgColor[ARMY_SHEETS]; /* per-sheet bg for mode 36 transparency */
static Boolean   sArmyLoaded = false;

/* Status bar icons from app resource fork (cicn 1005-1009) */
static CIconHandle sStatusIcons[5] = {NULL, NULL, NULL, NULL, NULL};
static Boolean     sStatusIconsLoaded = false;

/* ABITS sprite sheet: PICT 10004 (544x40, 34 cols x 2 rows, 16x20 cells) */
#define ABITS_CELL_W 16
#define ABITS_CELL_H 20
#define ABITS_COLS   34
static GWorldPtr   sAbitsGW = NULL;
static Boolean     sAbitsLoaded = false;
static RGBColor    sAbitsBgColor;  /* corner pixel for mode 36 transparency */

/* Army set selection: stores available army set names from Armies folder.
 * The user picks one during game setup; LoadArmySprites uses it. */
#define MAX_ARMY_SETS 4
static char sArmySetNames[MAX_ARMY_SETS][32];  /* display names */
static short sArmySetCount = 0;
static short sSelectedArmySet = 0;  /* index into sArmySetNames */

/* Unit type definition table: loaded from DAT 20000 in the Armies resource file.
 * Each entry is 0x3E (62) bytes: short type_id + char[20] name + short[20] stats.
 * Stats: [0]=strength, [1]=prod_turns, [2]=gold_cost, [3]=movement.
 * Up to 29 entries (type IDs 0-28). */
#define MAX_UNIT_TYPES    29
#define UNIT_TYPE_ENTRY   0x3E  /* 62 bytes per entry */
static unsigned char sUnitTypeTable[MAX_UNIT_TYPES * UNIT_TYPE_ENTRY];
static short sUnitTypeCount = 0;
static Boolean sUnitTypesLoaded = false;

/* City sprite sheet: PICT 25000 from Cities folder (640x240, 20x8 grid). */
#define CITY_PICT_ID 25000
static GWorldPtr sCityGW = NULL;
static RGBColor  sCityBgColor;   /* city sprite bg for mode 36 transparency */
static Boolean   sCityLoaded = false;

/* Viewport state for scrolled map view */
static short sViewportX = 0;   /* leftmost visible tile column */
static short sViewportY = 0;   /* topmost visible tile row */

/* Minimap zoom: 0 = small (default), 1 = large */
static short sMinimapZoom = 0;  /* 0=small(124x160), 1=medium(180x220), 2=large(240x300) */

/* Selected army tracking: -1 = no selection */
static short sSelectedArmy = -1;

/* Undo state: saves last army move for Cmd+Z */
static short sUndoArmyIdx = -1;
static short sUndoFromX = -1;
static short sUndoFromY = -1;
static short sUndoMovePts = -1;

/* Double-click detection state */
static unsigned long sLastMapClickTick = 0;
static short sLastMapClickX = -1;
static short sLastMapClickY = -1;

/* Tooltip state for terrain hover */
static short sTooltipTileX = -1;
static short sTooltipTileY = -1;
static unsigned long sTooltipHoverStart = 0;
static WindowPtr sTooltipWin = NULL;

/* Status bar coordinate display (persists across clicks, unlike tooltip vars) */
static short sStatusTileX = -1;
static short sStatusTileY = -1;

/* History event log for per-turn recording */
#define MAX_HISTORY_EVENTS 100
#define HIST_EVT_BATTLE    0
#define HIST_EVT_CAPTURE   1
#define HIST_EVT_PRODUCED  2
#define HIST_EVT_HERO      3
#define HIST_EVT_DEFEAT    4
#define HIST_EVT_DIPLOMACY 5
static struct {
    short turn;
    short eventType;
    short player;     /* 0-7 */
    char  text[40];
} sHistoryEvents[MAX_HISTORY_EVENTS];
static short sHistoryCount = 0;

/* Per-turn gold tracking for gold chart (up to 200 turns) */
#define MAX_HIST_TURNS 200
static short sGoldHistory[8][MAX_HIST_TURNS];
static short sCityHistory[8][MAX_HIST_TURNS];
static short sHistoryTurnCount = 0;

static void RecordEvent(short turn, short type, short player, const char *text)
{
    short i;
    if (sHistoryCount >= MAX_HISTORY_EVENTS) {
        /* Shift oldest events out */
        for (i = 0; i < MAX_HISTORY_EVENTS - 1; i++)
            sHistoryEvents[i] = sHistoryEvents[i + 1];
        sHistoryCount = MAX_HISTORY_EVENTS - 1;
    }
    sHistoryEvents[sHistoryCount].turn = turn;
    sHistoryEvents[sHistoryCount].eventType = type;
    sHistoryEvents[sHistoryCount].player = player;
    for (i = 0; i < 39 && text[i] != 0; i++)
        sHistoryEvents[sHistoryCount].text[i] = text[i];
    sHistoryEvents[sHistoryCount].text[i] = 0;
    sHistoryCount++;
}

/* Record per-turn gold and city snapshots */
static void RecordTurnSnapshot(void)
{
    unsigned char *gs;
    short p, ci;
    short cityCount;
    if (*gGameState == 0 || sHistoryTurnCount >= MAX_HIST_TURNS) return;
    gs = (unsigned char *)*gGameState;
    cityCount = *(short *)(gs + 0x810);
    if (cityCount > 40) cityCount = 40;

    for (p = 0; p < 8; p++) {
        short pCities = 0;
        sGoldHistory[p][sHistoryTurnCount] = *(short *)(gs + 0x186 + p * 0x14);
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            if (*(short *)(city + 0x04) == p) pCities++;
        }
        sCityHistory[p][sHistoryTurnCount] = pCities;
    }
    sHistoryTurnCount++;
}

/* Fog of war visibility bitmaps: per-player explored + current visibility.
 * Explored = seen at least once (dimmed). Visible = currently within sight range.
 * Map is 112x156 = 17472 tiles. Each bit = 1 tile. ~2184 bytes per player. */
#define FOG_MAP_W 112
#define FOG_MAP_H 156
#define FOG_BYTES_PER_PLAYER ((FOG_MAP_W * FOG_MAP_H + 7) / 8)
#define FOG_SIGHT_RANGE 3  /* tiles of visibility around armies/cities */

static unsigned char sFogExplored[8][FOG_BYTES_PER_PLAYER];  /* ever seen */
static unsigned char sFogVisible[8][FOG_BYTES_PER_PLAYER];   /* currently visible */

static void FogSetBit(unsigned char *map, short x, short y)
{
    long idx;
    if (x < 0 || x >= FOG_MAP_W || y < 0 || y >= FOG_MAP_H) return;
    idx = (long)y * FOG_MAP_W + x;
    map[idx >> 3] |= (1 << (idx & 7));
}

static Boolean FogGetBit(unsigned char *map, short x, short y)
{
    long idx;
    if (x < 0 || x >= FOG_MAP_W || y < 0 || y >= FOG_MAP_H) return false;
    idx = (long)y * FOG_MAP_W + x;
    return (map[idx >> 3] & (1 << (idx & 7))) != 0;
}

/* Reveal area around a point for a given player */
static void FogReveal(short player, short cx, short cy)
{
    short dx, dy;
    if (player < 0 || player > 7) return;
    for (dy = -FOG_SIGHT_RANGE; dy <= FOG_SIGHT_RANGE; dy++) {
        for (dx = -FOG_SIGHT_RANGE; dx <= FOG_SIGHT_RANGE; dx++) {
            FogSetBit(sFogExplored[player], cx + dx, cy + dy);
            FogSetBit(sFogVisible[player], cx + dx, cy + dy);
        }
    }
}

/* Update fog of war for a player: clear visible, then reveal around armies/cities */
static void FogUpdatePlayer(short player)
{
    unsigned char *gs;
    short i;
    if (*gGameState == 0 || player < 0 || player > 7) return;
    gs = (unsigned char *)*gGameState;

    /* Clear current visibility */
    for (i = 0; i < FOG_BYTES_PER_PLAYER; i++)
        sFogVisible[player][i] = 0;

    /* Reveal around owned cities */
    {
        short cityCount = *(short *)(gs + 0x810);
        if (cityCount > 40) cityCount = 40;
        for (i = 0; i < cityCount; i++) {
            unsigned char *city = gs + 0x812 + i * 0x20;
            if (*(short *)(city + 0x04) == player) {
                FogReveal(player, *(short *)(city + 0x00), *(short *)(city + 0x02));
            }
        }
    }

    /* Reveal around owned armies */
    {
        short armyCount = *(short *)(gs + 0x1602);
        if (armyCount > 100) armyCount = 100;
        for (i = 0; i < armyCount; i++) {
            unsigned char *army = gs + 0x1604 + i * 0x42;
            if ((short)(unsigned char)army[0x15] == player) {
                FogReveal(player, *(short *)(army + 0x00), *(short *)(army + 0x02));
            }
        }
    }
}

/* Signpost system: up to 20 map markers with short text */
#define MAX_SIGNPOSTS 20
static struct {
    short x, y;
    char text[32];
    Boolean active;
} sSignposts[MAX_SIGNPOSTS];
static short sSignpostCount = 0;

/* City names — loaded from CTY resource */
#define MAX_CITY_NAME 20
static char sCityNames[40][MAX_CITY_NAME];  /* up to 40 cities, 20 chars each */
static short sCityNameCount = 0;

/* Unit type name lookup — indexed by unit type byte */
/* Show a brief tooltip message (auto-dismisses after ~1.5s or on click/key) */
static void ShowBriefMessage(const unsigned char *pMsg)
{
    WindowPtr tipWin;
    Rect tipR;
    short tipW = 220, tipH = 28;
    EventRecord ev;
    unsigned long endTick;

    SetRect(&tipR, 0, 0, tipW, tipH);
    OffsetRect(&tipR, (qd.screenBits.bounds.right - tipW) / 2,
                      qd.screenBits.bounds.bottom - 60);
    tipWin = NewCWindow(NULL, &tipR, "\p", true,
                        plainDBox, (WindowPtr)-1L, false, 0);
    if (tipWin == NULL) { SysBeep(1); return; }
    {
        RGBColor bg = {0xFFFF, 0xFFFF, 0xCCCC};
        RGBColor fg = {0x2222, 0x2222, 0x2222};
        SetPort(tipWin);
        RGBForeColor(&bg);
        PaintRect(&tipWin->portRect);
        RGBForeColor(&fg);
        FrameRect(&tipWin->portRect);
        TextFont(3); TextSize(9); TextFace(0);
        MoveTo(8, 18);
        DrawString(pMsg);
    }
    endTick = TickCount() + 90;  /* ~1.5 seconds */
    while (TickCount() < endTick) {
        if (WaitNextEvent(mDownMask | keyDownMask, &ev, 5, NULL))
            break;
    }
    DisposeWindow(tipWin);
}

static void GetUnitTypeName(short unitType, Str255 pName)
{
    /* Try loaded unit type table first (from DAT 20000) */
    if (sUnitTypesLoaded && unitType >= 0 && unitType < sUnitTypeCount) {
        unsigned char *entry = sUnitTypeTable + unitType * UNIT_TYPE_ENTRY;
        char *name = (char *)(entry + 2); /* name at offset +0x02, 20 chars */
        short i;
        for (i = 0; name[i] && i < 20; i++)
            pName[i + 1] = name[i];
        pName[0] = (unsigned char)i;
        return;
    }

    /* Fallback for special types */
    if (unitType == 0x1C) {
        pName[0] = 4; pName[1] = 'H'; pName[2] = 'e'; pName[3] = 'r'; pName[4] = 'o';
    } else if (unitType == 0xFF) {
        pName[0] = 7; pName[1] = '('; pName[2] = 'e'; pName[3] = 'm';
        pName[4] = 'p'; pName[5] = 't'; pName[6] = 'y'; pName[7] = ')';
    } else {
        /* Hardcoded fallback when DAT not loaded */
        static char *names[] = {
            "Lt Infantry", "Hv Infantry", "Cavalry", "Archers",
            "Siege Engine", "Naval Unit"
        };
        if (unitType >= 0 && unitType <= 5) {
            char *n = names[unitType];
            short i;
            for (i = 0; n[i]; i++) pName[i + 1] = n[i];
            pName[0] = (unsigned char)i;
        } else {
            Str255 numStr;
            pName[0] = 5; pName[1] = 'U'; pName[2] = 'n'; pName[3] = 'i';
            pName[4] = 't'; pName[5] = ' ';
            NumToString((long)unitType, numStr);
            {
                short i;
                for (i = 1; i <= numStr[0]; i++)
                    pName[5 + i] = numStr[i];
                pName[0] = 5 + numStr[0];
            }
        }
    }
}

/* Read a stat from the unit type table.
 * Stats at entry+0x16 as big-endian shorts:
 *   [0]=strength, [1]=prod_turns, [2]=gold_cost, [3]=movement */
static short GetUnitTypeStat(short unitType, short statIndex)
{
    if (sUnitTypesLoaded && unitType >= 0 && unitType < sUnitTypeCount) {
        unsigned char *entry = sUnitTypeTable + unitType * UNIT_TYPE_ENTRY;
        unsigned char *stat = entry + 0x16 + statIndex * 2;
        return (short)((stat[0] << 8) | stat[1]);
    }
    return 0;
}

/* Returns the number of turns required to produce a unit of given type */
static short GetProductionTurns(short unitType)
{
    if (sUnitTypesLoaded && unitType >= 0 && unitType < sUnitTypeCount) {
        short turns = GetUnitTypeStat(unitType, 1);
        if (turns > 0) return turns;
    }
    /* Hardcoded fallback */
    {
        static const short turns[] = {2, 3, 4, 3, 5, 4};
        if (unitType >= 0 && unitType <= 5) return turns[unitType];
    }
    return 4;  /* default */
}

/* Main map chrome dimensions */
#define SCROLLBAR_W    16   /* width of right scrollbar track */
#define SCROLLBAR_H    18   /* height of bottom bar (compact shield area + padding) */
#define SHIELD_ICON_W  13   /* width per shield slot (scaled down from native 39x36) */
#define SHIELD_ICON_H  13   /* height per shield icon (scaled down from native 39x36) */
#define SHIELD_GAP      3   /* pixels between each shield icon */
#define SHIELD_AREA_W  (MAX_FACTIONS * SHIELD_ICON_W + (MAX_FACTIONS - 1) * SHIELD_GAP + 3)

/* Shield icons: cicn 30600-30607 from shield set file, fallback to terrain file */
static CIconHandle sShieldIcons[MAX_FACTIONS];
static Boolean     sShieldsLoaded = false;
static short       sShieldResFile = -1;          /* resource file ref for shield set */
static GWorldPtr   sShieldBigGW   = NULL;        /* PICT 15009: big shields 288x59 */
static GWorldPtr   sShieldSmallGW = NULL;        /* PICT 15010: small shields 368x64 */

/* Native Mac scrollbar controls for main game window */
static ControlHandle sVScrollBar = NULL;
static ControlHandle sHScrollBar = NULL;

/* Display depth save/restore for 256-color switching */
static short       sOriginalDepth = 0;  /* 0 = not changed */

/* Color cursors (crsr resources) */
static CCrsrHandle sDefaultCursor = NULL;    /* crsr 1000: default game cursor */
static CCrsrHandle sMinimapCursor = NULL;    /* crsr 1001: minimap crosshair */
static CCrsrHandle sTargetCursor  = NULL;    /* crsr 1002: movement target */
static CCrsrHandle sHandCursor    = NULL;    /* crsr 1003: map scrolling */

/* Control panel layout (View 1008): 224x114 pixels.
 * Fixed-function buttons: cicn 1000-1005 (14x14), cicn 1011-1019 (8x8 arrows),
 * cicn 1020 (14x14 diplomacy).  4 configurable shortcut slots from cicn 2000-2025.
 * Original had T3DIconButton, T3DScrollIconButton, T3DDiamondIconButton classes. */
#define NUM_SHORTCUT_ICONS 26   /* total possible shortcuts (only 4 displayed) */
#define NUM_CMD_ICONS      6    /* cicn 1000-1005: command buttons */
#define NUM_SCROLL_ICONS   9    /* cicn 1011-1019: 3x3 directional pad */
#define NUM_SHORTCUT_SLOTS 4    /* visible shortcut slots at bottom */
static CIconHandle sShortcutIcons[NUM_SHORTCUT_ICONS]; /* cicn 2000-2025 */
static CIconHandle sCmdIcons[NUM_CMD_ICONS];           /* cicn 1000-1005 */
static CIconHandle sScrollIcons[NUM_SCROLL_ICONS];     /* cicn 1011-1019 */
static CIconHandle sDiplomIcon = NULL;                 /* cicn 1020 */
static CIconHandle sSwordsIcon = NULL;                 /* cicn 1007 crossed swords */
static Boolean     sCtrlIconsLoaded = false;

/* Dialog cicn icons */
static CIconHandle sCityTabIcons[4] = {NULL, NULL, NULL, NULL};    /* cicn 3300-3303 */
static CIconHandle sStackTypeIcons[8] = {NULL};                     /* cicn 3500-3507 */
static CIconHandle sDiploStateIcons[3] = {NULL, NULL, NULL};       /* cicn 4300-4302 */
static CIconHandle sRuinIcons[2] = {NULL, NULL};                   /* cicn 3700-3701 */
static Boolean     sDialogIconsLoaded = false;
/* Which 4 of the 26 shortcuts are shown in the bottom slots */
static short sShortcutSlot[NUM_SHORTCUT_SLOTS] = {23, 0, 20, 24};
    /* Default: Move All, Search, End Turn, Save+End */

/* Shor 2000 button-to-command mapping (decoded from resource).
 * Index i -> cicn (2000+i) maps to command sButtonCommands[i]. */
static unsigned short sButtonCommands[NUM_SHORTCUT_ICONS] = {
    0x057B, /* 0:  Move All Armies */
    0x0584, /* 1:  Disband Group */
    0x0585, /* 2:  Change Signpost */
    0x06AB, /* 3:  View Stack */
    0x05E3, /* 4:  Quest Report */
    0x06A7, /* 5:  Build */
    0x06A6, /* 6:  Cities */
    0x06A8, /* 7:  Production */
    0x06A9, /* 8:  Vectoring */
    0x06AA, /* 9:  Ruins */
    0x0709, /* 10: City History */
    0x070A, /* 11: Event History */
    0x070B, /* 12: Gold History */
    0x070C, /* 13: Winning History */
    0x070D, /* 14: Triumphs */
    0x05DD, /* 15: Army Report */
    0x05DE, /* 16: City Report */
    0x05DF, /* 17: Gold Report */
    0x05E0, /* 18: Production Report */
    0x05E1, /* 19: Winning Report */
    0x0640, /* 20: Inspect Heroes */
    0x0641, /* 21: Plant Flag */
    0x0642, /* 22: Hero Levels */
    0x0643, /* 23: Search */
    0x076C, /* 24: End Turn */
    0x0773, /* 25: Save and End Turn */
};

/* Scenario selection state */
#define MAX_SCENARIOS 32
static Str255 sScenarioNames[MAX_SCENARIOS];
static FSSpec sScenarioSpecs[MAX_SCENARIOS];
static short  sScenarioCount = 0;

/* Game color palette extracted from pltt ID=1000 in the app resource fork.
 * The minimap uses the raw terrain index (byte 0 of each tile) as a direct
 * index into this palette, matching the original BlitTerrainPixel() behavior. */
/* palette_data.h removed — minimap uses sTerrainColors via SCN type lookup */


/* ===================================================================
 * GameInit — Initialize game state after loading SCN data
 *
 * Reconstructed from FUN_1003c368 (GameInit, 1232 bytes).
 * Sets up turn counter, player alive flags, diplomacy, viewport,
 * city ownership, and army positions.
 * =================================================================== */
static void GameInit(void)
{
    unsigned char *gs;
    unsigned char *ext;
    short i, j;

    if (*gGameState == 0)
        return;

    gs  = (unsigned char *)*gGameState;
    ext = (*gExtState != 0) ? (unsigned char *)*gExtState : NULL;

    /* --- Basic game state fields --- */

    /* Current turn = 1 */
    *(short *)(gs + 0x136) = 1;

    /* Game started flag = 0 (not started yet, becomes 1 after first move) */
    *(short *)(gs + 0x15e) = 0;

    /* Map dimensions — write to game state so other code can read them */
    *(short *)(gs + 0x17a) = sMapHeight;
    *(short *)(gs + 0x17c) = sMapWidth;

    /* Viewport scroll: start at 0,0 */
    *(short *)(gs + 0x176) = 0;  /* scroll_y */
    *(short *)(gs + 0x178) = 0;  /* scroll_x */

    /* Max army slots */
    *(short *)(gs + 0x182) = 100;

    /* --- Player alive flags --- */
    /* Read from player_type array at 0xD0. If type != 0xFF, player is alive */
    {
        short factionCount = *(short *)(gs + 0x10C);
        if (factionCount < 1 || factionCount > 8) factionCount = 8;

        for (i = 0; i < 8; i++) {
            if (i < factionCount) {
                *(short *)(gs + 0x138 + i * 2) = 1;  /* alive */
                *(short *)(gs + 0x148 + i * 2) = 1;  /* secondary alive flag */
            } else {
                *(short *)(gs + 0x138 + i * 2) = 0;  /* eliminated */
                *(short *)(gs + 0x148 + i * 2) = 0;
            }
        }
    }

    /* --- Turn order: default sequential --- */
    for (i = 0; i < 8; i++) {
        *(short *)(gs + 0x164 + i * 2) = i;
    }

    /* --- Hero hire scores: random 1-8 per player --- */
    {
        unsigned long ticks = TickCount();
        for (i = 0; i < 8; i++) {
            *(short *)(gs + 0x1122 + i * 2) = (short)((ticks + i * 7) % 8) + 1;
        }
    }

    /* --- Per-player gold from SCN data --- */
    /* Gold is at player*0x14 + 0x186. SCN already loaded this.
     * Verify it's reasonable; if zero, give starting gold. */
    for (i = 0; i < 8; i++) {
        short gold = *(short *)(gs + 0x186 + i * 0x14);
        if (gold == 0 && *(short *)(gs + 0x138 + i * 2) != 0) {
            *(short *)(gs + 0x186 + i * 0x14) = 100;  /* default starting gold */
        }
    }

    /* --- Initialize diplomacy table (0x1582, 8x8 matrix of shorts) --- */
    /* Original encoding: 0x2800 = at peace, 0x0000 = at war.
     * Table is 128 bytes: 8 rows x 8 cols x 2 bytes per entry.
     * All entries default to 0x2800 (at peace). */
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            *(short *)(gs + 0x1582 + (i * 8 + j) * 2) = 0x2800;
        }
    }

    /* --- Initialize extended state (cities) --- */
    if (ext != NULL) {
        short cityCount = 0;

        /* Parse city data from SCN. Cities are at gs+0x0812, each 0x20 bytes.
         * City count at gs+0x0810. */
        cityCount = *(short *)(gs + 0x810);
        if (cityCount < 0) cityCount = 0;
        if (cityCount > 40) cityCount = 40;

        *(short *)(ext + 0x24a) = cityCount;

        /* Copy city records into extended state format.
         * SCN city record (0x20 bytes) → extended city record (0x5C bytes).
         * SCN city layout (at gs + 0x812 + i*0x20):
         *   +0x00: city_x (short)
         *   +0x02: city_y (short)
         *   +0x04: owner (short, 0-7 or 0xFF=neutral)
         *   +0x06: defense (short)
         *   +0x08: income (short)
         *   +0x0A: name_index (short)
         *   +0x0C-0x1F: production data
         */
        for (i = 0; i < cityCount; i++) {
            unsigned char *extCity = ext + 0x24c + i * 0x5c;

            /* Mark city as active */
            *(short *)(extCity + 0x00) = 1;

            /* Copy basic fields */
            *(short *)(extCity + 0x02) = 0;   /* producing_type = unit type 0 (default) */
            *(short *)(extCity + 0x04) = -1;  /* garrison_army = none */

            /* Initialize production slots to empty */
            for (j = 0; j < 4; j++)
                *(short *)(extCity + 0x06 + j * 2) = -1;

            /* Initialize build queue to empty */
            for (j = 0; j < 12; j++)
                *(short *)(extCity + 0x0e + j * 2) = -1;

            /* Initialize vectoring targets to -1 (no vectoring) */
            for (j = 0; j < 4; j++)
                *(short *)(extCity + 0x3e + j * 2) = -1;

            /* Initialize production timer (4 turns default) */
            *(short *)(extCity + 0x58) = 4;

            /* Copy city flags from SCN */
            /* The SCN has production capabilities encoded in the city data */
        }

        /* Clear per-army byte arrays */
        for (i = 0; i < 100; i++) {
            ext[0x56 + i]  = 0;   /* army_state */
            ext[0x11e + i] = 0;   /* army_flags */
            ext[0x182 + i] = 0;   /* army_moves_taken */
            ext[0x1e6 + i] = 0;   /* army_data_4 */
        }
    }

    /* --- Write per-player capital coordinates to stats block --- */
    /* Scan city records to find each player's capital (first city they own).
     * Per-player stats at gs + 0x186 + p*0x14:
     *   +0x04: capital_x, +0x06: capital_y
     *   +0x0E: start_x,   +0x10: start_y   */
    {
        short cityCount = *(short *)(gs + 0x810);
        if (cityCount > 40) cityCount = 40;
        for (i = 0; i < 8; i++) {
            unsigned char *pstat = gs + 0x186 + i * 0x14;
            Boolean foundCap = false;
            for (j = 0; j < cityCount && !foundCap; j++) {
                unsigned char *city = gs + 0x812 + j * 0x20;
                short cOwner = *(short *)(city + 0x04);
                short sType  = (short)(unsigned char)city[0x18];
                if (cOwner == i && sType == 0) {  /* city owned by player i */
                    short capX = *(short *)(city + 0x00);
                    short capY = *(short *)(city + 0x02);
                    *(short *)(pstat + 0x04) = capX;  /* capital_x */
                    *(short *)(pstat + 0x06) = capY;  /* capital_y */
                    *(short *)(pstat + 0x0E) = capX;  /* start_x */
                    *(short *)(pstat + 0x10) = capY;  /* start_y */
                    foundCap = true;
                }
            }
        }
    }

    /* --- Initialize army records --- */
    {
        short armyCount = *(short *)(gs + 0x1602);
        if (armyCount < 0) armyCount = 0;
        if (armyCount > 100) armyCount = 100;

        for (i = 0; i < armyCount; i++) {
            unsigned char *army = gs + 0x1604 + i * 0x42;

            /* Clear movement orders */
            *(short *)(army + 0x36) = 0;  /* target_x = 0 */
            *(short *)(army + 0x34) = 0;  /* target_y = 0 */

            /* Clear hero items (0x3A-0x40) */
            for (j = 0x3a; j <= 0x40; j += 2)
                *(short *)(army + j) = 0;

            /* Initialize fortification state */
            army[0x2d] = 0;  /* not fortified */
            army[0x2e] = 0;
            army[0x2c] = 0;

            /* Set army as not having moved */
            army[0x30] = 0;

            /* Set initial movement points from base movement */
            army[0x2e] = army[0x1a];  /* current_mp = base_mp of first unit */
        }
    }

    /* --- Center viewport on current player's capital city --- */
    {
        short currentPlayer = *(short *)(gs + 0x110);
        unsigned char *pstat = gs + 0x186 + currentPlayer * 0x14;
        short capX = *(short *)(pstat + 0x04);
        short capY = *(short *)(pstat + 0x06);

        if (capX > 0 || capY > 0) {
            /* Center on capital */
            sViewportX = capX - 7;
            sViewportY = capY - 5;
        } else {
            /* Fallback: find first army */
            short armyCount = *(short *)(gs + 0x1602);
            Boolean found = false;
            for (i = 0; i < armyCount && !found; i++) {
                unsigned char *army = gs + 0x1604 + i * 0x42;
                if ((short)(unsigned char)army[0x15] == currentPlayer) {
                    sViewportX = *(short *)(army + 0x00) - 7;
                    sViewportY = *(short *)(army + 0x02) - 5;
                    found = true;
                }
            }
            if (!found) { sViewportX = 0; sViewportY = 0; }
        }

        /* Clamp viewport */
        if (sViewportX < 0) sViewportX = 0;
        if (sViewportY < 0) sViewportY = 0;
        if (sViewportX > sMapWidth - 1)  sViewportX = sMapWidth - 1;
        if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
    }

    /* --- Initialize fog of war --- */
    {
        short p;
        for (p = 0; p < 8; p++) {
            for (i = 0; i < FOG_BYTES_PER_PLAYER; i++) {
                sFogExplored[p][i] = 0;
                sFogVisible[p][i] = 0;
            }
        }
        /* Reveal initial positions for all players */
        for (p = 0; p < 8; p++) {
            if (*(short *)(gs + 0x138 + p * 2) != 0) {
                FogUpdatePlayer(p);
            }
        }
    }
}


/* ===================================================================
 * TryLoadScenario — Open a file and load MAP resource directly
 * =================================================================== */
static void TryLoadScenario(void)
{
    StandardFileReply reply;
    short             refNum;
    Handle            mapHdl;

    /* Let user pick any file */
    StandardGetFile(NULL, -1, NULL, &reply);

    if (!reply.sfGood)
        return;

    /* Open the file's resource fork */
    refNum = FSpOpenResFile(&reply.sfFile, fsRdPerm);
    if (refNum == -1)
        return;

    UseResFile(refNum);

    /* Try to load MAP resource (type 'MAP ', ID 10000) */
    mapHdl = Get1Resource('MAP ', 10000);
    if (mapHdl != NULL) {
        long mapSize = GetHandleSize(mapHdl);

        HLock(mapHdl);

        /* Allocate map buffer if DoPostCreate didn't */
        if (*gMapTiles == 0) {
            *gMapTiles = (int)NewPtr(0x8880);
        }

        if (*gMapTiles != 0) {
            /* Copy MAP data - clamp to buffer size */
            long copySize = mapSize;
            if (copySize > 0x8880) copySize = 0x8880;
            BlockMoveData(*mapHdl, (void *)*gMapTiles, copySize);

            sMapLoaded = true;
            /* Standard map: 112 wide x 156 tall */
            sMapWidth  = 112;
            sMapHeight = (short)(copySize / (112 * 2));
            if (sMapHeight > 156) sMapHeight = 156;
        }

        HUnlock(mapHdl);
        ReleaseResource(mapHdl);
    }

    /* Also try to load SCN resource into game state */
    {
        Handle scnHdl = Get1Resource('SCN ', 10000);
        if (scnHdl != NULL) {
            long scnSize = GetHandleSize(scnHdl);
            HLock(scnHdl);

            if (*gGameState == 0) {
                *gGameState = (int)NewPtrClear(0x2FCC);
            } else {
                /* Zero-fill existing buffer to prevent stale data */
                BlockZero((void *)*gGameState, 0x2FCC);
            }
            if (*gGameState != 0) {
                long copySize = scnSize;
                if (copySize > 0x2FCC) copySize = 0x2FCC;
                BlockMoveData(*scnHdl, (void *)*gGameState, copySize);
            }
            HUnlock(scnHdl);
            ReleaseResource(scnHdl);
        }
    }

    /* Load RD (road overlay) resource */
    {
        Handle rdHdl = Get1Resource('RD  ', 10000);
        if (rdHdl != NULL) {
            long rdSize = GetHandleSize(rdHdl);
            HLock(rdHdl);

            if (*gRoadData == 0) {
                *gRoadData = (pint)NewPtrClear(0x4440);
            }
            if (*gRoadData != 0) {
                long copySize = rdSize;
                if (copySize > 0x4440) copySize = 0x4440;
                BlockMoveData(*rdHdl, (void *)*gRoadData, copySize);
            }
            HUnlock(rdHdl);
            ReleaseResource(rdHdl);
        }
    }

    /* Load CTY resource (city descriptions) and extract city names */
    {
        Handle ctyHdl = Get1Resource('CTY ', 10000);
        sCityNameCount = 0;
        if (ctyHdl != NULL) {
            long ctySize = GetHandleSize(ctyHdl);
            char *ctyData;
            long pos2 = 0;
            HLock(ctyHdl);
            ctyData = (char *)*ctyHdl;

            /* Format: #NNN|Description text|line2|...\r\n */
            while (pos2 < ctySize && sCityNameCount < 40) {
                /* Find next '#' */
                while (pos2 < ctySize && ctyData[pos2] != '#') pos2++;
                if (pos2 >= ctySize) break;
                pos2++;  /* skip '#' */

                /* Skip NNN digits */
                while (pos2 < ctySize && ctyData[pos2] >= '0' && ctyData[pos2] <= '9') pos2++;

                /* Skip '|' */
                if (pos2 < ctySize && ctyData[pos2] == '|') pos2++;

                /* Extract city name — first word(s) before " is " or " guards " etc.
                 * Simple heuristic: take text up to first " is " or first "|" */
                {
                    short ni = 0;
                    char *name = sCityNames[sCityNameCount];

                    /* Look for " is " as name delimiter */
                    while (pos2 < ctySize && ctyData[pos2] != '|' &&
                           ctyData[pos2] != '\r' && ctyData[pos2] != '\n') {
                        if (pos2 + 4 < ctySize &&
                            ctyData[pos2] == ' ' && ctyData[pos2+1] == 'i' &&
                            ctyData[pos2+2] == 's' && ctyData[pos2+3] == ' ') {
                            break;
                        }
                        if (pos2 + 3 < ctySize &&
                            ctyData[pos2] == ',' && ctyData[pos2+1] == ' ') {
                            break;  /* "Gwindhor, is..." */
                        }
                        if (ni < MAX_CITY_NAME - 1)
                            name[ni++] = ctyData[pos2];
                        pos2++;
                    }
                    name[ni] = '\0';

                    /* If name starts with "The " or "This " — try extracting proper name */
                    if (ni > 4 && name[0] == 'T' && name[1] == 'h' &&
                        ((name[2] == 'e' && name[3] == ' ') ||
                         (name[2] == 'i' && name[3] == 's' && name[4] == ' '))) {
                        /* Keep it as-is for now, it's descriptive */
                    }

                    sCityNameCount++;
                }

                /* Skip to next line */
                while (pos2 < ctySize && ctyData[pos2] != '\n') pos2++;
            }

            HUnlock(ctyHdl);
            ReleaseResource(ctyHdl);
        }
    }

    CloseResFile(refNum);

    /* Allocate extended state if needed (cities, per-army arrays) */
    if (*gExtState == 0) {
        /* Size: 0x24C header + 40 cities * 0x5C + per-army arrays */
        *gExtState = (int)NewPtrClear(0x4000);
    }

    /* Run game initialization on loaded data */
    if (sMapLoaded && *gGameState != 0) {
        GameInit();
    }

    /* Update main window title with scenario name */
    if (sMapLoaded && *gMainGameWindow != 0) {
        Str255 title;
        unsigned char *src = reply.sfFile.name;
        short len = src[0];
        short i;

        /* Build title: "Warlords II — [scenario name]" */
        title[0] = 0;
        BlockMoveData("\pWarlords II", title, 12);
        if (len > 0 && title[0] + 3 + len <= 255) {
            title[++title[0]] = ' ';
            title[++title[0]] = '-';
            title[++title[0]] = ' ';
            for (i = 1; i <= len; i++)
                title[++title[0]] = src[i];
        }
        SetWTitle((WindowPtr)*gMainGameWindow, title);
    }

    /* Force redraw of all windows */
    if (sMapLoaded) {
        if (*gMainGameWindow != 0)
            InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
        if (*gOverviewWindow != 0)
            InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
    }
}


/* ===================================================================
 * LoadTerrainSprites — Load terrain sprite sheets from Terrain folder
 *
 * Opens the resource fork of "Terrain:Grasslands" and loads PICT
 * resources 30000-30009 into offscreen GWorlds for sprite blitting.
 * =================================================================== */
static GWorldPtr LoadPICTIntoGWorld(short pictID)
{
    PicHandle  pic;
    GWorldPtr  gw = NULL;
    OSErr      err;

    pic = (PicHandle)Get1Resource('PICT', pictID);
    if (pic == NULL)
        return NULL;

    {
        Rect     picRect = (**pic).picFrame;
        short    w = picRect.right - picRect.left;
        short    h = picRect.bottom - picRect.top;
        Rect     bounds;
        CGrafPtr savedPort;
        GDHandle savedDevice;

        SetRect(&bounds, 0, 0, w, h);
        err = NewGWorld(&gw, 0, &bounds, NULL, NULL, 0);
        if (err == noErr && gw != NULL) {
            GetGWorld(&savedPort, &savedDevice);
            SetGWorld(gw, NULL);
            LockPixels(GetGWorldPixMap(gw));
            EraseRect(&bounds);
            DrawPicture(pic, &bounds);
            UnlockPixels(GetGWorldPixMap(gw));
            SetGWorld(savedPort, savedDevice);
        }
    }
    ReleaseResource((Handle)pic);
    return gw;
}


/* ===================================================================
 * DrawMarbleBackground — tile PICT 1001 "MARBLE" into a rect
 *
 * Works in the current GWorld/port.  Falls back to solid gray if
 * the marble GWorld hasn't been loaded yet.
 * =================================================================== */
static void DrawMarbleBackground(Rect *r)
{
    if (sMarbleGW != NULL) {
        PixMapHandle mPix = GetGWorldPixMap(sMarbleGW);
        GrafPtr curPort;
        Rect mBounds;
        short mx, my, mw, mh;

        GetPort(&curPort);
        LockPixels(mPix);
        mBounds = (**mPix).bounds;
        mw = mBounds.right - mBounds.left;
        mh = mBounds.bottom - mBounds.top;
        if (mw < 1) mw = 1;
        if (mh < 1) mh = 1;
        for (my = r->top; my < r->bottom; my += mh) {
            for (mx = r->left; mx < r->right; mx += mw) {
                Rect srcR, dstR;
                short dw = mw, dh = mh;
                if (mx + dw > r->right) dw = r->right - mx;
                if (my + dh > r->bottom) dh = r->bottom - my;
                SetRect(&srcR, 0, 0, dw, dh);
                SetRect(&dstR, mx, my, mx + dw, my + dh);
                CopyBits((BitMap *)*mPix,
                         &curPort->portBits,
                         &srcR, &dstR, srcCopy, NULL);
            }
        }
        UnlockPixels(mPix);
    } else {
        RGBColor gray = {0x8888, 0x8888, 0x8888};
        RGBForeColor(&gray);
        PaintRect(r);
    }
}


static void LoadTerrainSprites(void)
{
    FSSpec terrainSpec;
    OSErr  err;
    short  oldResFile;

    if (sTerrainLoaded)
        return;

    {
        short vRefNum;
        long dirID;
        err = HGetVol(NULL, &vRefNum, &dirID);
        if (err != noErr) return;
        err = FSMakeFSSpec(vRefNum, dirID, "\p:Terrain:Grasslands", &terrainSpec);
    }
    if (err != noErr)
        return;

    oldResFile = CurResFile();
    sTerrainResFile = FSpOpenResFile(&terrainSpec, fsRdPerm);
    if (sTerrainResFile == -1) {
        UseResFile(oldResFile);
        return;
    }
    UseResFile(sTerrainResFile);

    /* Load terrain tile sheets (640x240 each, 16x6 grid of 40x40 tiles) */
    sTerrainGW  = LoadPICTIntoGWorld(30022);  /* tiles 0-95 */
    sTerrainGW2 = LoadPICTIntoGWorld(30023);  /* tiles 96-191 */

    /* Load road/overlay sprite sheet (640x80, 13 columns x 2 rows of 40x40 tiles).
     * Tiles 0-16: road segments (RD values 1-17 map to tiles 0-16).
     * Original uses roadType % 13 for column, roadType / 13 for row. */
    sRoadGW = LoadPICTIntoGWorld(30021);

    /* Generate a 1-bit mask from the road sprite sheet for CopyMask.
     * In 1-bit GWorlds: BLACK = bit 1 = copy source, WHITE = bit 0 = skip.
     * So: background → WHITE (transparent), road pixels → BLACK (opaque). */
    if (sRoadGW != NULL) {
        CGrafPtr sp;
        GDHandle sd;
        PixMapHandle roadPM = GetGWorldPixMap(sRoadGW);
        Rect roadBounds;
        short rw, rh;

        GetGWorld(&sp, &sd);
        SetGWorld(sRoadGW, NULL);
        LockPixels(roadPM);
        /* Sample background color from column 13+ (x=520+) which is empty space
         * past the 13-column tile grid. Original uses palette index 0xF4 (244). */
        GetCPixel(520, 0, &sRoadBgColor);

        roadBounds = (**roadPM).bounds;
        rw = roadBounds.right - roadBounds.left;
        rh = roadBounds.bottom - roadBounds.top;

        {
            Rect maskBounds;
            OSErr maskErr;
            SetRect(&maskBounds, 0, 0, rw, rh);
            maskErr = NewGWorld(&sRoadMaskGW, 1, &maskBounds, NULL, NULL, 0);
            if (maskErr == noErr && sRoadMaskGW != NULL) {
                PixMapHandle maskPM = GetGWorldPixMap(sRoadMaskGW);
                RGBColor pixel, black;
                short mx, my;

                LockPixels(maskPM);
                black.red = 0; black.green = 0; black.blue = 0;

                /* Fill mask with WHITE (all transparent via EraseRect).
                 * Then set road pixels to BLACK (opaque/copy source). */
                SetGWorld(sRoadMaskGW, NULL);
                EraseRect(&maskBounds);

                for (my = 0; my < rh; my++) {
                    unsigned char rowMask[640];
                    short nonBgCount = 0;

                    /* Read source row */
                    SetGWorld(sRoadGW, NULL);
                    for (mx = 0; mx < rw && mx < 640; mx++) {
                        GetCPixel(mx, my, &pixel);
                        if (pixel.red != sRoadBgColor.red ||
                            pixel.green != sRoadBgColor.green ||
                            pixel.blue != sRoadBgColor.blue)
                        {
                            rowMask[mx] = 1;
                            nonBgCount++;
                        } else {
                            rowMask[mx] = 0;
                        }
                    }

                    /* Write mask row: set road pixels to BLACK (copy source) */
                    if (nonBgCount > 0) {
                        SetGWorld(sRoadMaskGW, NULL);
                        for (mx = 0; mx < rw && mx < 640; mx++) {
                            if (rowMask[mx])
                                SetCPixel(mx, my, &black);
                        }
                    }
                }
                UnlockPixels(maskPM);
            }
        }
        UnlockPixels(roadPM);
        SetGWorld(sp, sd);
    }

    /* Load MAPCOLOR data (DAT 30020) for minimap per-tile colors */
    {
        Handle mapColorH = GetResource('DAT ', 30020);
        if (mapColorH != NULL) {
            Size datLen = GetHandleSize(mapColorH);
            short copyLen = (datLen > MAPCOLOR_SIZE) ? MAPCOLOR_SIZE : (short)datLen;
            HLock(mapColorH);
            BlockMoveData(*mapColorH, sMapColor, copyLen);
            HUnlock(mapColorH);
            ReleaseResource(mapColorH);
            sMapColorLoaded = true;
        }
    }

    /* Try loading shield cicn 30600-30607 from terrain resource file.
     * Don't set sShieldsLoaded here — LoadShieldIcons() will try
     * built-in cicn 3020-3027 as fallback later. */
    {
        short si;
        for (si = 0; si < MAX_FACTIONS; si++) {
            if (sShieldIcons[si] == NULL)
                sShieldIcons[si] = GetCIcon(30600 + si);
        }
    }

    UseResFile(oldResFile);
    sTerrainLoaded = (sTerrainGW != NULL);
}


/* ===================================================================
 * ScanArmySets — Find available army sets in the Armies folder
 *
 * Checks for known army set files (from NAME resources 2000-2002)
 * and records which ones exist. Called once at startup.
 * =================================================================== */
static void ScanArmySets(void)
{
    short vRefNum;
    long dirID;
    OSErr err;
    CInfoPBRec cipb;
    Str255 name;
    FSSpec armiesDir;
    short armiesDirID;

    sArmySetCount = 0;

    /* First entry is always "Default" (uses colored army markers) */
    {
        const char *def = "Default";
        short n;
        for (n = 0; def[n]; n++)
            sArmySetNames[0][n] = def[n];
        sArmySetNames[0][n] = 0;
        sArmySetCount = 1;
    }

    /* Find the Armies folder relative to the app's directory */
    err = HGetVol(NULL, &vRefNum, &dirID);
    if (err != noErr) { sSelectedArmySet = 0; return; }

    err = FSMakeFSSpec(vRefNum, dirID, "\p:Armies:", &armiesDir);
    if (err != noErr) { sSelectedArmySet = 0; return; }

    /* Get dirID of the Armies folder */
    BlockZero(&cipb, sizeof(cipb));
    cipb.dirInfo.ioNamePtr = armiesDir.name;
    cipb.dirInfo.ioVRefNum = armiesDir.vRefNum;
    cipb.dirInfo.ioDrDirID = armiesDir.parID;
    err = PBGetCatInfoSync(&cipb);
    if (err != noErr || !(cipb.dirInfo.ioFlAttrib & 0x10)) {
        sSelectedArmySet = 0;
        return;
    }
    armiesDirID = cipb.dirInfo.ioDrDirID;

    /* Iterate files in the Armies folder */
    {
        short idx = 1;
        while (sArmySetCount < MAX_ARMY_SETS) {
            BlockZero(&cipb, sizeof(cipb));
            cipb.hFileInfo.ioNamePtr = name;
            cipb.hFileInfo.ioVRefNum = vRefNum;
            cipb.hFileInfo.ioDirID = armiesDirID;
            cipb.hFileInfo.ioFDirIndex = idx++;
            err = PBGetCatInfoSync(&cipb);
            if (err != noErr) break;
            /* Skip directories and "Icon\r" files */
            if (cipb.hFileInfo.ioFlAttrib & 0x10) continue;
            if (name[1] == 'I' && name[2] == 'c' && name[3] == 'o' && name[4] == 'n') continue;
            /* Add to list */
            {
                short n;
                for (n = 0; n < name[0] && n < 31; n++)
                    sArmySetNames[sArmySetCount][n] = name[n + 1];
                sArmySetNames[sArmySetCount][n] = 0;
                sArmySetCount++;
            }
        }
    }

    sSelectedArmySet = 0;
}

/* ===================================================================
 * LoadArmySprites — Load army sprite sheets from Armies folder
 *
 * Opens the selected army set's resource fork and loads
 * PICT 20000-20009 into offscreen GWorlds.
 * =================================================================== */
static void LoadArmySprites(void)
{
    FSSpec armySpec;
    OSErr  err;
    short  i;
    short  oldResFile;
    short  armyResFile;

    /* Free existing sprite sheets if reloading with a different set */
    if (sArmyLoaded) {
        for (i = 0; i < ARMY_SHEETS; i++) {
            if (sArmyGW[i] != NULL) {
                DisposeGWorld(sArmyGW[i]);
                sArmyGW[i] = NULL;
            }
        }
        sArmyLoaded = false;
    }

    for (i = 0; i < ARMY_SHEETS; i++)
        sArmyGW[i] = NULL;

    /* "Default" (index 0) means no external army set — use colored markers */
    if (sSelectedArmySet == 0) {
        sArmyLoaded = true;
        return;
    }

    /* Build path from selected army set name */
    {
        short vRefNum;
        long dirID;
        Str255 armyPath;
        short pLen = 0;
        const char *prefix = ":Armies:";
        const char *name = sArmySetNames[sSelectedArmySet];

        err = HGetVol(NULL, &vRefNum, &dirID);
        if (err != noErr) return;

        while (prefix[pLen]) { armyPath[1 + pLen] = prefix[pLen]; pLen++; }
        while (*name && pLen < 254) { armyPath[1 + pLen] = *name++; pLen++; }
        armyPath[0] = (unsigned char)pLen;
        err = FSMakeFSSpec(vRefNum, dirID, armyPath, &armySpec);
    }
    if (err != noErr)
        return;

    oldResFile = CurResFile();
    armyResFile = FSpOpenResFile(&armySpec, fsRdPerm);
    if (armyResFile == -1) {
        UseResFile(oldResFile);
        return;
    }

    UseResFile(armyResFile);

    for (i = 0; i < ARMY_SHEETS; i++) {
        PicHandle pic = (PicHandle)Get1Resource('PICT', ARMY_PICT_BASE + i);
        if (pic == NULL)
            continue;

        {
            Rect     picRect = (**pic).picFrame;
            short    w = picRect.right - picRect.left;
            short    h = picRect.bottom - picRect.top;
            Rect     bounds;
            CGrafPtr savedPort;
            GDHandle savedDevice;

            SetRect(&bounds, 0, 0, w, h);

            err = NewGWorld(&sArmyGW[i], 0, &bounds, NULL, NULL, 0);
            if (err == noErr && sArmyGW[i] != NULL) {
                GetGWorld(&savedPort, &savedDevice);
                SetGWorld(sArmyGW[i], NULL);
                LockPixels(GetGWorldPixMap(sArmyGW[i]));
                EraseRect(&bounds);
                DrawPicture(pic, &bounds);
                /* Sample pixel (0,0) — the sprite sheet background color.
                 * Store it so we can set destination bg before mode 36 CopyBits. */
                GetCPixel(0, 0, &sArmyBgColor[i]);
                UnlockPixels(GetGWorldPixMap(sArmyGW[i]));
                SetGWorld(savedPort, savedDevice);
            }
        }
        ReleaseResource((Handle)pic);
    }

    /* Load unit type definitions from DAT 20000.
     * 29 entries × 62 bytes, big-endian shorts throughout. */
    {
        Handle datH = Get1Resource('DAT ', 20000);
        if (datH != NULL) {
            long datSize = GetHandleSize(datH);
            HLock(datH);
            sUnitTypeCount = (short)(datSize / UNIT_TYPE_ENTRY);
            if (sUnitTypeCount > MAX_UNIT_TYPES)
                sUnitTypeCount = MAX_UNIT_TYPES;
            BlockMoveData(*datH, sUnitTypeTable,
                          (long)sUnitTypeCount * UNIT_TYPE_ENTRY);
            sUnitTypesLoaded = true;
            HUnlock(datH);
            ReleaseResource(datH);
        }
    }

    CloseResFile(armyResFile);
    UseResFile(oldResFile);
    sArmyLoaded = true;
}


/* ===================================================================
 * LoadCitySprites — Load city sprite sheet from Cities folder
 *
 * Opens "Cities:Spectremia Cities" resource fork and loads
 * PICT 25000 (640x240) into an offscreen GWorld.
 * =================================================================== */
static void LoadCitySprites(void)
{
    FSSpec citySpec;
    OSErr  err;
    short  oldResFile;
    short  cityResFile;

    if (sCityLoaded)
        return;

    {
        short vRefNum;
        long dirID;
        err = HGetVol(NULL, &vRefNum, &dirID);
        if (err != noErr) return;
        err = FSMakeFSSpec(vRefNum, dirID, "\p:Cities:Spectremia Cities", &citySpec);
    }
    if (err != noErr)
        return;

    oldResFile = CurResFile();
    cityResFile = FSpOpenResFile(&citySpec, fsRdPerm);
    if (cityResFile == -1) {
        UseResFile(oldResFile);
        return;
    }
    UseResFile(cityResFile);

    sCityGW = LoadPICTIntoGWorld(CITY_PICT_ID);

    /* Sample city sprite background color for transparent-mode CopyBits.
     * Mode 36 compares against the DESTINATION port's RGBBackColor,
     * so we store the color and set it on the window before blitting. */
    if (sCityGW != NULL) {
        CGrafPtr sp;
        GDHandle sd;
        GetGWorld(&sp, &sd);
        SetGWorld(sCityGW, NULL);
        LockPixels(GetGWorldPixMap(sCityGW));
        GetCPixel(0, 0, &sCityBgColor);
        UnlockPixels(GetGWorldPixMap(sCityGW));
        SetGWorld(sp, sd);
    }

    CloseResFile(cityResFile);
    UseResFile(oldResFile);
    sCityLoaded = (sCityGW != NULL);
}

/* ===================================================================
 * LoadShieldIcons — Load shield cicn/PICT from Elemental Shields file
 *
 * Opens ":Shields:Elemental Shields" resource file at runtime to load
 * cicn 30600-30607 (one per faction, 39x36 pixels each) plus
 * PICT 15009 (big shield sprite sheet, 288x59) and PICT 15010
 * (small shield sprite sheet, 368x64).
 * Falls back to terrain-file cicns (already in sShieldIcons[]).
 * =================================================================== */
static void LoadShieldIcons(void)
{
    short i;
    short oldResFile;
    FSSpec shieldSpec;
    OSErr err;

    if (sShieldsLoaded)
        return;

    /* Open the Elemental Shields resource file */
    {
        short vRefNum;
        long dirID;
        err = HGetVol(NULL, &vRefNum, &dirID);
        if (err == noErr)
            err = FSMakeFSSpec(vRefNum, dirID,
                               "\p:Shields:Elemental Shields", &shieldSpec);
    }

    if (err == noErr) {
        oldResFile = CurResFile();
        sShieldResFile = FSpOpenResFile(&shieldSpec, fsRdPerm);
        if (sShieldResFile != -1) {
            UseResFile(sShieldResFile);

            /* Load cicn 30600-30607 from the shield set file.
             * These replace any terrain-loaded icons. */
            for (i = 0; i < MAX_FACTIONS; i++) {
                CIconHandle sh = GetCIcon(30600 + i);
                if (sh != NULL) {
                    if (sShieldIcons[i] != NULL)
                        DisposeCIcon(sShieldIcons[i]);
                    sShieldIcons[i] = sh;
                }
            }

            /* Load big shield sprite sheet (PICT 15009, 288x59) */
            sShieldBigGW = LoadPICTIntoGWorld(15009);

            /* Load small shield sprite sheet (PICT 15010, 368x64) */
            sShieldSmallGW = LoadPICTIntoGWorld(15010);

            UseResFile(oldResFile);
        }
    }

    /* Fill any remaining NULL slots from whatever is in the resource chain */
    for (i = 0; i < MAX_FACTIONS; i++) {
        if (sShieldIcons[i] == NULL)
            sShieldIcons[i] = GetCIcon(30600 + i);
    }

    sShieldsLoaded = true;
}

/* Big shield sprite sheet layout (PICT 15009 "BELEMENT"):
 * 288x59 pixels, 8 columns (one per faction), 2 rows.
 * Row 0 (y=0..28): shields with "CAPITAL" text banner.
 * Row 1 (y=29..58): plain shields without text.
 * Each column is 36px wide (288/8). */
#define BIG_SHIELD_W   36
#define BIG_SHIELD_H   30  /* height of one row */
#define BIG_SHIELD_ROW1 29 /* y-offset of row 1 (plain shields) */

/* ===================================================================
 * DrawBigShield — Draw a faction shield from the big sprite sheet
 *
 * Draws faction factionIdx's plain shield (row 1) from sShieldBigGW
 * into dstRect. Falls back to PlotCIcon of the cicn if no PICT loaded.
 * =================================================================== */
static void DrawBigShield(short factionIdx, const Rect *dstRect)
{
    GrafPtr curPort;

    if (factionIdx < 0 || factionIdx >= MAX_FACTIONS) return;

    GetPort(&curPort);

    if (sShieldBigGW != NULL) {
        PixMapHandle pm = GetGWorldPixMap(sShieldBigGW);
        Rect srcR;
        SetRect(&srcR,
                factionIdx * BIG_SHIELD_W, BIG_SHIELD_ROW1,
                factionIdx * BIG_SHIELD_W + BIG_SHIELD_W,
                BIG_SHIELD_ROW1 + BIG_SHIELD_H);
        if (LockPixels(pm)) {
            CopyBits((BitMap *)*pm,
                     &curPort->portBits,
                     &srcR, dstRect, srcCopy, NULL);
            UnlockPixels(pm);
        }
    } else if (sShieldIcons[factionIdx] != NULL) {
        PlotCIcon(dstRect, sShieldIcons[factionIdx]);
    }
}

/* ===================================================================
 * RemapShieldColors — Remap cicn CLUTs to nearest game palette entries
 *
 * At screen depths > 8-bit, PlotCIcon uses raw cicn CLUT colors directly.
 * At 8-bit, it maps them to the nearest device CLUT entry (from pltt 1000).
 * To get the authentic 256-color look at any depth, we modify each shield
 * icon's embedded CLUT entries to be the nearest pltt 1000 palette color.
 * =================================================================== */
static void RemapShieldColors(void)
{
    PaletteHandle gamePal;
    short         numPalColors, i, j, k;
    RGBColor      palColors[256];

    gamePal = GetNewPalette(1000);
    if (gamePal == NULL) return;

    numPalColors = (**gamePal).pmEntries;
    if (numPalColors <= 0) return;
    if (numPalColors > 256) numPalColors = 256;

    /* Cache palette colors */
    for (i = 0; i < numPalColors; i++)
        GetEntryColor(gamePal, i, &palColors[i]);

    /* Remap each shield icon's CLUT to nearest palette colors */
    for (i = 0; i < MAX_FACTIONS; i++) {
        CTabHandle ctab;
        short      numEntries;

        if (sShieldIcons[i] == NULL) continue;

        ctab = (**sShieldIcons[i]).iconPMap.pmTable;
        if (ctab == NULL) continue;

        numEntries = (**ctab).ctSize + 1;

        for (j = 0; j < numEntries; j++) {
            RGBColor orig = (**ctab).ctTable[j].rgb;
            long     bestDist = 0x7FFFFFFF;
            short    bestIdx = 0;

            /* Find nearest palette color (Euclidean distance in RGB) */
            for (k = 0; k < numPalColors; k++) {
                long dr = ((long)(orig.red   >> 8) - (long)(palColors[k].red   >> 8));
                long dg = ((long)(orig.green >> 8) - (long)(palColors[k].green >> 8));
                long db = ((long)(orig.blue  >> 8) - (long)(palColors[k].blue  >> 8));
                long dist = dr*dr + dg*dg + db*db;
                if (dist < bestDist) {
                    bestDist = dist;
                    bestIdx = k;
                }
            }

            /* Replace CLUT entry with nearest palette color */
            (**ctab).ctTable[j].rgb = palColors[bestIdx];
        }

        /* Bump ctSeed so QuickDraw knows the table changed */
        (**ctab).ctSeed = GetCTSeed();
    }
}


/* ===================================================================
 * LoadButtonIcons — Load info panel button cicn resources
 *
 * Loads control panel icons: cicn 1000-1005 (commands), cicn 1011-1019
 * (scroll arrows), cicn 1020 (diplomacy), cicn 2000-2025 (shortcuts).
 * =================================================================== */
static void LoadButtonIcons(void)
{
    short i;

    if (sCtrlIconsLoaded)
        return;

    /* Command buttons: cicn 1000-1005 */
    for (i = 0; i < NUM_CMD_ICONS; i++)
        sCmdIcons[i] = GetCIcon(1000 + i);

    /* Scroll arrows: cicn 1011-1019 (3x3 directional pad) */
    for (i = 0; i < NUM_SCROLL_ICONS; i++)
        sScrollIcons[i] = GetCIcon(1011 + i);

    /* Diplomacy icon */
    sDiplomIcon = GetCIcon(1020);
    sSwordsIcon = GetCIcon(1007);

    /* Shortcut icons (26 total, only 4 displayed at a time) */
    for (i = 0; i < NUM_SHORTCUT_ICONS; i++)
        sShortcutIcons[i] = GetCIcon(2000 + i);

    sCtrlIconsLoaded = true;
}

static void LoadDialogIcons(void)
{
    short i;

    if (sDialogIconsLoaded) return;

    /* City dialog tab icons: cicn 3300-3303 */
    for (i = 0; i < 4; i++)
        sCityTabIcons[i] = GetCIcon(3300 + i);

    /* Stack info unit type icons: cicn 3500-3507 */
    for (i = 0; i < 8; i++)
        sStackTypeIcons[i] = GetCIcon(3500 + i);

    /* Diplomacy state icons: cicn 4300-4302 (war/peace/allied) */
    for (i = 0; i < 3; i++)
        sDiploStateIcons[i] = GetCIcon(4300 + i);

    /* Ruin status icons: cicn 3700 (unsearched), 3701 (searched) */
    for (i = 0; i < 2; i++)
        sRuinIcons[i] = GetCIcon(3700 + i);

    sDialogIconsLoaded = true;
}


/* ===================================================================
 * ScanForScenarios — Find scenario files in the app's directory
 *
 * Scans for files that have a resource fork containing SCN resources.
 * Populates sScenarioNames[] and sScenarioSpecs[].
 * =================================================================== */
static void ScanForScenarios(void)
{
    CInfoPBRec  cpb;
    Str255      name;
    short       vRefNum;
    long        dirID;
    short       idx;
    OSErr       err;

    sScenarioCount = 0;

    /* Get the app's default directory */
    err = HGetVol(NULL, &vRefNum, &dirID);
    if (err != noErr)
        return;

    /* Iterate files in the directory */
    for (idx = 1; sScenarioCount < MAX_SCENARIOS; idx++) {
        cpb.hFileInfo.ioNamePtr = name;
        cpb.hFileInfo.ioVRefNum = vRefNum;
        cpb.hFileInfo.ioDirID = dirID;
        cpb.hFileInfo.ioFDirIndex = idx;

        err = PBGetCatInfoSync(&cpb);
        if (err != noErr)
            break;

        /* Skip directories */
        if (cpb.hFileInfo.ioFlAttrib & 0x10)
            continue;

        /* Skip the app itself and known non-scenario files */
        if (name[0] > 0 && name[1] == '.') continue; /* hidden files */

        /* Check if file has a resource fork with SCN resource */
        {
            FSSpec fileSpec;
            short  refNum;

            err = FSMakeFSSpec(vRefNum, dirID, name, &fileSpec);
            if (err != noErr) continue;

            refNum = FSpOpenResFile(&fileSpec, fsRdPerm);
            if (refNum == -1) continue;

            UseResFile(refNum);
            {
                Handle scnHdl = Get1Resource('SCN ', 10000);
                if (scnHdl != NULL) {
                    /* Also check for MAP resource to distinguish scenarios from other files */
                    Handle mapHdl = Get1Resource('MAP ', 10000);
                    if (mapHdl != NULL) {
                        /* This is a valid scenario/save file */
                        BlockMoveData(name, sScenarioNames[sScenarioCount], name[0] + 1);
                        sScenarioSpecs[sScenarioCount] = fileSpec;
                        sScenarioCount++;
                        ReleaseResource(mapHdl);
                    }
                    ReleaseResource(scnHdl);
                }
            }
            CloseResFile(refNum);
        }
    }
}


/* ===================================================================
 * GenerateRandomMap — Procedurally generate a playable random map
 *
 * Loads a template SCN from the first available scenario (for terrain
 * properties and unit definitions), then generates terrain, places
 * cities, and initializes the game state.
 *
 * Algorithm:
 *   1. Fill with ocean
 *   2. Place seed points and grow landmasses outward
 *   3. Add terrain variety (forest, mountain, hills, swamp)
 *   4. Add shore transition tiles
 *   5. Place 8 faction starting cities + neutral cities
 *   6. Initialize game state and call GameInit()
 * =================================================================== */

/* Terrain type codes for working buffer */
#define TT_WATER  0
#define TT_GRASS  1
#define TT_FOREST 2
#define TT_MTN    3
#define TT_HILL   4
#define TT_SWAMP  5

/* Tile indices for Grasslands terrain set (from MAPCOLOR analysis) */
#define RTILE_WATER  20   /* deep ocean (color 6) */
#define RTILE_SHORE  16   /* shore (color 5) */
#define RTILE_GRASS   0   /* grassland (color 10) */
#define RTILE_FOREST 65   /* forest (color 11) */
#define RTILE_MTN    80   /* mountain (color 3) */
#define RTILE_HILL  132   /* hills (color 13) */
#define RTILE_SWAMP  13   /* swamp (color 16) */

static Boolean GenerateRandomMap(WindowPtr scenWin,
                                  short barLeft, short barRight,
                                  short barTop, short barH)
{
    unsigned char *gs, *map;
    unsigned char *terrain;  /* working buffer: terrain types per tile */
    short x, y, i, pass;
    short numSeeds;
    short cityCount = 0;

    if (*gGameState == 0 || *gMapTiles == 0) return false;
    gs  = (unsigned char *)*gGameState;
    map = (unsigned char *)*gMapTiles;

    /* Allocate working terrain type buffer (112*156 = 17,472 bytes) */
    terrain = (unsigned char *)NewPtrClear(112 * 156);
    if (terrain == NULL) return false;

    /* --- Phase 1: Load template SCN for terrain properties --- */
    if (sScenarioCount > 0) {
        short refNum = FSpOpenResFile(&sScenarioSpecs[0], fsRdPerm);
        if (refNum != -1) {
            Handle scnHdl;
            UseResFile(refNum);
            scnHdl = Get1Resource('SCN ', 10000);
            if (scnHdl != NULL) {
                long scnSize = GetHandleSize(scnHdl);
                HLock(scnHdl);
                if (scnSize > 0x2FCC) scnSize = 0x2FCC;
                BlockMoveData(*scnHdl, gs, scnSize);
                HUnlock(scnHdl);
                ReleaseResource(scnHdl);
            }
            CloseResFile(refNum);
        }
    }

    /* Progress: 20% */
    {
        Rect fillR;
        RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
        short fillW = (barRight - barLeft - 2) * 20 / 100;
        SetPort(scenWin);
        SetRect(&fillR, barLeft + 1, barTop + 1,
                barLeft + 1 + fillW, barTop + barH - 1);
        RGBForeColor(&barFg);
        PaintRect(&fillR);
    }

    /* --- Phase 2: Generate terrain --- */

    /* Place 4-6 landmass seeds */
    numSeeds = 4 + ((unsigned short)Random() % 3);
    for (i = 0; i < numSeeds; i++) {
        short sx = 15 + ((unsigned short)Random() % 82);
        short sy = 15 + ((unsigned short)Random() % 126);
        short dx, dy;
        /* Create initial 7x7 land patch */
        for (dy = -3; dy <= 3; dy++) {
            for (dx = -3; dx <= 3; dx++) {
                short nx = sx + dx, ny = sy + dy;
                if (nx >= 1 && nx < 111 && ny >= 1 && ny < 155)
                    terrain[ny * 112 + nx] = TT_GRASS;
            }
        }
    }

    /* Grow land from seeds: 8 expansion passes with decreasing probability */
    for (pass = 0; pass < 8; pass++) {
        for (y = 1; y < 155; y++) {
            for (x = 1; x < 111; x++) {
                if (terrain[y * 112 + x] == TT_GRASS) {
                    short prob = 45 - pass * 3;  /* 45% → 24% */
                    /* Try to expand in each cardinal direction */
                    if (terrain[(y-1)*112+x] == TT_WATER &&
                        ((unsigned short)Random() % 100) < prob)
                        terrain[(y-1)*112+x] = TT_GRASS;
                    if (terrain[(y+1)*112+x] == TT_WATER &&
                        ((unsigned short)Random() % 100) < prob)
                        terrain[(y+1)*112+x] = TT_GRASS;
                    if (terrain[y*112+x-1] == TT_WATER &&
                        ((unsigned short)Random() % 100) < prob)
                        terrain[y*112+x-1] = TT_GRASS;
                    if (terrain[y*112+x+1] == TT_WATER &&
                        ((unsigned short)Random() % 100) < prob)
                        terrain[y*112+x+1] = TT_GRASS;
                }
            }
        }
    }

    /* Progress: 40% */
    {
        Rect fillR;
        RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
        short fillW = (barRight - barLeft - 2) * 40 / 100;
        SetPort(scenWin);
        SetRect(&fillR, barLeft + 1, barTop + 1,
                barLeft + 1 + fillW, barTop + barH - 1);
        RGBForeColor(&barFg);
        PaintRect(&fillR);
    }

    /* Add terrain variety using clustered features */

    /* Mountain chains: 3-5 chains of 8-20 tiles each */
    {
        short numChains = 3 + ((unsigned short)Random() % 3);
        short ch;
        for (ch = 0; ch < numChains; ch++) {
            short cx, cy, len, step;
            short dx, dy;
            /* Pick random starting point on land */
            cx = 10 + ((unsigned short)Random() % 92);
            cy = 10 + ((unsigned short)Random() % 136);
            len = 8 + ((unsigned short)Random() % 13);
            /* Pick direction */
            dx = ((unsigned short)Random() % 3) - 1;  /* -1, 0, 1 */
            dy = ((unsigned short)Random() % 3) - 1;
            if (dx == 0 && dy == 0) dx = 1;

            for (step = 0; step < len; step++) {
                if (cx >= 1 && cx < 111 && cy >= 1 && cy < 155 &&
                    terrain[cy * 112 + cx] == TT_GRASS) {
                    terrain[cy * 112 + cx] = TT_MTN;
                    /* Add hills on sides of mountain chain */
                    if (cx > 1 && terrain[cy * 112 + cx - 1] == TT_GRASS &&
                        ((unsigned short)Random() % 100) < 50)
                        terrain[cy * 112 + cx - 1] = TT_HILL;
                    if (cx < 110 && terrain[cy * 112 + cx + 1] == TT_GRASS &&
                        ((unsigned short)Random() % 100) < 50)
                        terrain[cy * 112 + cx + 1] = TT_HILL;
                    if (cy > 1 && terrain[(cy-1) * 112 + cx] == TT_GRASS &&
                        ((unsigned short)Random() % 100) < 40)
                        terrain[(cy-1) * 112 + cx] = TT_HILL;
                    if (cy < 154 && terrain[(cy+1) * 112 + cx] == TT_GRASS &&
                        ((unsigned short)Random() % 100) < 40)
                        terrain[(cy+1) * 112 + cx] = TT_HILL;
                }
                cx += dx;
                cy += dy;
                /* Meander: 25% chance to shift direction */
                if (((unsigned short)Random() % 4) == 0) {
                    dx += ((unsigned short)Random() % 3) - 1;
                    dy += ((unsigned short)Random() % 3) - 1;
                    if (dx < -1) dx = -1;
                    if (dx > 1) dx = 1;
                    if (dy < -1) dy = -1;
                    if (dy > 1) dy = 1;
                    if (dx == 0 && dy == 0) dx = 1;
                }
            }
        }
    }

    /* Forest clusters: 8-12 forest seed points, each grows into a cluster */
    {
        short numForests = 8 + ((unsigned short)Random() % 5);
        short fi;
        for (fi = 0; fi < numForests; fi++) {
            short fx = 5 + ((unsigned short)Random() % 102);
            short fy = 5 + ((unsigned short)Random() % 146);
            short radius = 3 + ((unsigned short)Random() % 5);
            short fdx, fdy;

            for (fdy = -radius; fdy <= radius; fdy++) {
                for (fdx = -radius; fdx <= radius; fdx++) {
                    short nx = fx + fdx, ny = fy + fdy;
                    if (nx >= 0 && nx < 112 && ny >= 0 && ny < 156 &&
                        terrain[ny * 112 + nx] == TT_GRASS) {
                        /* Higher probability near center */
                        short dist = (fdx < 0 ? -fdx : fdx) + (fdy < 0 ? -fdy : fdy);
                        short prob = 80 - dist * 12;
                        if (prob > 0 && ((unsigned short)Random() % 100) < prob)
                            terrain[ny * 112 + nx] = TT_FOREST;
                    }
                }
            }
        }
    }

    /* Swamp patches: 2-4 swamp areas near water */
    {
        short numSwamps = 2 + ((unsigned short)Random() % 3);
        short si;
        for (si = 0; si < numSwamps; si++) {
            /* Find a land tile near water */
            short attempts = 0;
            while (attempts < 200) {
                short sx = 5 + ((unsigned short)Random() % 102);
                short sy = 5 + ((unsigned short)Random() % 146);
                if (terrain[sy * 112 + sx] == TT_GRASS &&
                    ((sx > 0 && terrain[sy*112+sx-1] == TT_WATER) ||
                     (sx < 111 && terrain[sy*112+sx+1] == TT_WATER) ||
                     (sy > 0 && terrain[(sy-1)*112+sx] == TT_WATER) ||
                     (sy < 155 && terrain[(sy+1)*112+sx] == TT_WATER))) {
                    /* Place 3x3 to 5x5 swamp patch */
                    short r = 1 + ((unsigned short)Random() % 2);
                    short sdx, sdy;
                    for (sdy = -r; sdy <= r; sdy++) {
                        for (sdx = -r; sdx <= r; sdx++) {
                            short nx = sx + sdx, ny = sy + sdy;
                            if (nx >= 0 && nx < 112 && ny >= 0 && ny < 156 &&
                                terrain[ny * 112 + nx] == TT_GRASS &&
                                ((unsigned short)Random() % 100) < 70)
                                terrain[ny * 112 + nx] = TT_SWAMP;
                        }
                    }
                    break;
                }
                attempts++;
            }
        }
    }

    /* Convert terrain types to tile indices and write to map buffer */
    {
        static const short typeToTile[] = {
            RTILE_WATER, RTILE_GRASS, RTILE_FOREST,
            RTILE_MTN, RTILE_HILL, RTILE_SWAMP
        };
        for (y = 0; y < 156; y++) {
            for (x = 0; x < 112; x++) {
                unsigned char *tile = map + y * 0xE0 + x * 2;
                short tt = terrain[y * 112 + x];

                if (tt == TT_WATER) {
                    /* Shore: water tile adjacent to any land */
                    Boolean nearLand = false;
                    if (x > 0 && terrain[y*112+x-1] != TT_WATER) nearLand = true;
                    if (x < 111 && terrain[y*112+x+1] != TT_WATER) nearLand = true;
                    if (y > 0 && terrain[(y-1)*112+x] != TT_WATER) nearLand = true;
                    if (y < 155 && terrain[(y+1)*112+x] != TT_WATER) nearLand = true;
                    tile[0] = nearLand ? RTILE_SHORE : RTILE_WATER;
                } else {
                    /* Add slight variety with adjacent tile indices */
                    short base = typeToTile[tt];
                    short var = (unsigned short)Random() % 3;
                    tile[0] = base + var;
                }
                tile[1] = 0;
            }
        }
    }

    /* Progress: 60% */
    {
        Rect fillR;
        RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
        short fillW = (barRight - barLeft - 2) * 60 / 100;
        SetPort(scenWin);
        SetRect(&fillR, barLeft + 1, barTop + 1,
                barLeft + 1 + fillW, barTop + barH - 1);
        RGBForeColor(&barFg);
        PaintRect(&fillR);
    }

    /* --- Phase 3: Place cities --- */
    {
        short factionCount = 8;
        short neutralCount = 20 + ((unsigned short)Random() % 11);
        short totalCities;

        totalCities = factionCount + neutralCount;
        if (totalCities > 40) totalCities = 40;

        /* Place faction starting cities in quadrants */
        for (i = 0; i < factionCount && cityCount < 40; i++) {
            short attempts = 0;
            while (attempts < 2000) {
                /* Quadrant layout: 4 columns x 2 rows */
                short qx = (i % 4) * 28 + 5;
                short qy = (i / 4) * 78 + 5;
                short cx = qx + ((unsigned short)Random() % 22);
                short cy = qy + ((unsigned short)Random() % 68);

                if (cx >= 2 && cx < 110 && cy >= 2 && cy < 154 &&
                    terrain[cy * 112 + cx] != TT_WATER &&
                    terrain[cy * 112 + cx] != TT_MTN) {
                    unsigned char *city = gs + 0x812 + cityCount * 0x20;
                    *(short *)(city + 0x00) = cx;
                    *(short *)(city + 0x02) = cy;
                    *(short *)(city + 0x04) = i;
                    *(short *)(city + 0x06) = 3;   /* defense */
                    *(short *)(city + 0x08) = 4;   /* income */
                    *(short *)(city + 0x0A) = cityCount;
                    city[0x18] = 0;   /* site_type = city */
                    /* Ensure grass under city */
                    terrain[cy * 112 + cx] = TT_GRASS;
                    {
                        unsigned char *t = map + cy * 0xE0 + cx * 2;
                        t[0] = RTILE_GRASS;
                    }
                    cityCount++;
                    break;
                }
                attempts++;
            }
        }

        /* Place neutral cities */
        for (i = 0; i < neutralCount && cityCount < 40; i++) {
            short attempts = 0;
            while (attempts < 500) {
                short cx = 3 + ((unsigned short)Random() % 106);
                short cy = 3 + ((unsigned short)Random() % 150);
                short j;
                Boolean tooClose = false;

                if (terrain[cy * 112 + cx] == TT_WATER ||
                    terrain[cy * 112 + cx] == TT_MTN) {
                    attempts++;
                    continue;
                }

                /* Check minimum distance from existing cities */
                for (j = 0; j < cityCount; j++) {
                    short ox = *(short *)(gs + 0x812 + j * 0x20);
                    short oy = *(short *)(gs + 0x812 + j * 0x20 + 0x02);
                    short dx = cx - ox, dy = cy - oy;
                    if (dx < 0) dx = -dx;
                    if (dy < 0) dy = -dy;
                    if (dx < 5 && dy < 5) { tooClose = true; break; }
                }

                if (!tooClose) {
                    unsigned char *city = gs + 0x812 + cityCount * 0x20;
                    *(short *)(city + 0x00) = cx;
                    *(short *)(city + 0x02) = cy;
                    *(short *)(city + 0x04) = (short)0xFF;  /* neutral */
                    *(short *)(city + 0x06) = 2;   /* defense */
                    *(short *)(city + 0x08) = 3;   /* income */
                    *(short *)(city + 0x0A) = cityCount;
                    city[0x18] = 0;   /* site_type = city */
                    cityCount++;
                    break;
                }
                attempts++;
            }
        }

        /* Place ruins on land (site_type=5 at offset 0x18, active=1 at 0x1c) */
        {
            short ruinCount = 15 + ((unsigned short)Random() % 11);  /* 15-25 ruins */
            short ri;
            for (ri = 0; ri < ruinCount && cityCount < 40; ri++) {
                short attempts = 0;
                while (attempts < 300) {
                    short rx = 5 + ((unsigned short)Random() % 102);
                    short ry = 5 + ((unsigned short)Random() % 146);
                    short j;
                    Boolean tooClose = false;

                    if (terrain[ry * 112 + rx] == TT_WATER ||
                        terrain[ry * 112 + rx] == TT_MTN) {
                        attempts++;
                        continue;
                    }

                    /* Check minimum distance from all existing sites */
                    for (j = 0; j < cityCount; j++) {
                        short ox = *(short *)(gs + 0x812 + j * 0x20);
                        short oy = *(short *)(gs + 0x812 + j * 0x20 + 0x02);
                        short dx = rx - ox, dy = ry - oy;
                        if (dx < 0) dx = -dx;
                        if (dy < 0) dy = -dy;
                        if (dx < 3 && dy < 3) { tooClose = true; break; }
                    }

                    if (!tooClose) {
                        unsigned char *ruin = gs + 0x812 + cityCount * 0x20;
                        *(short *)(ruin + 0x00) = rx;
                        *(short *)(ruin + 0x02) = ry;
                        *(short *)(ruin + 0x04) = (short)0xFF;  /* no owner */
                        ruin[0x18] = 5;    /* site_type = ruin */
                        *(short *)(ruin + 0x1c) = 1;  /* active/searchable */
                        cityCount++;
                        break;
                    }
                    attempts++;
                }
            }
        }

        *(short *)(gs + 0x810) = cityCount;
    }

    /* Progress: 80% */
    {
        Rect fillR;
        RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
        short fillW = (barRight - barLeft - 2) * 80 / 100;
        SetPort(scenWin);
        SetRect(&fillR, barLeft + 1, barTop + 1,
                barLeft + 1 + fillW, barTop + barH - 1);
        RGBForeColor(&barFg);
        PaintRect(&fillR);
    }

    /* --- Phase 3b: Generate road network between cities --- */
    {
        short siteCount = *(short *)(gs + 0x810);
        unsigned char *roadBuf;

        /* Allocate road data buffer */
        if (*gRoadData == 0)
            *gRoadData = (pint)NewPtrClear(0x4440);

        roadBuf = (*gRoadData != 0) ? (unsigned char *)*gRoadData : NULL;

        if (roadBuf != NULL && siteCount > 1) {
            short ci, cj;

            /* Connect each city to its 2 nearest neighbors via road */
            for (ci = 0; ci < siteCount; ci++) {
                unsigned char *siteA = gs + 0x812 + ci * 0x20;
                short ax = *(short *)(siteA + 0x00);
                short ay = *(short *)(siteA + 0x02);
                short bestDist[2] = {30000, 30000};
                short bestIdx[2]  = {-1, -1};

                /* Only connect cities (site_type=0), not ruins */
                if (siteA[0x18] != 0) continue;

                /* Find 2 nearest other cities */
                for (cj = 0; cj < siteCount; cj++) {
                    unsigned char *siteB = gs + 0x812 + cj * 0x20;
                    short dx, dy, dist;
                    if (cj == ci || siteB[0x18] != 0) continue;
                    dx = *(short *)(siteB + 0x00) - ax;
                    dy = *(short *)(siteB + 0x02) - ay;
                    if (dx < 0) dx = -dx;
                    if (dy < 0) dy = -dy;
                    dist = dx + dy;  /* Manhattan distance */
                    if (dist < bestDist[0]) {
                        bestDist[1] = bestDist[0]; bestIdx[1] = bestIdx[0];
                        bestDist[0] = dist; bestIdx[0] = cj;
                    } else if (dist < bestDist[1]) {
                        bestDist[1] = dist; bestIdx[1] = cj;
                    }
                }

                /* Draw road from cityA to each nearest neighbor */
                for (cj = 0; cj < 2; cj++) {
                    short bx, by, rx, ry;
                    if (bestIdx[cj] < 0) continue;
                    bx = *(short *)(gs + 0x812 + bestIdx[cj] * 0x20 + 0x00);
                    by = *(short *)(gs + 0x812 + bestIdx[cj] * 0x20 + 0x02);

                    /* Walk from A to B using Manhattan path (horizontal then vertical)
                     * so every road tile has at least one cardinal neighbor for autotile. */
                    rx = ax; ry = ay;
                    /* Horizontal leg first */
                    while (rx != bx) {
                        if (rx >= 0 && rx < 112 && ry >= 0 && ry < 156) {
                            if (terrain[ry * 112 + rx] != TT_WATER)
                                roadBuf[ry * 112 + rx] = 1;
                        }
                        if (rx < bx) rx++; else rx--;
                    }
                    /* Vertical leg */
                    while (ry != by) {
                        if (rx >= 0 && rx < 112 && ry >= 0 && ry < 156) {
                            if (terrain[ry * 112 + rx] != TT_WATER)
                                roadBuf[ry * 112 + rx] = 1;
                        }
                        if (ry < by) ry++; else ry--;
                    }
                    /* Mark destination */
                    if (bx >= 0 && bx < 112 && by >= 0 && by < 156)
                        roadBuf[by * 112 + bx] = 1;
                }
            }
        }

        /* --- Autotile pass: convert boolean road flags to proper tile indices ---
         * For each road tile, check 4 cardinal neighbors to build a 4-bit mask:
         *   bit0=N, bit1=E, bit2=S, bit3=W
         * Then look up the correct RD value (1-17) from the autotile table.
         * Confirmed from original SCN resource dumps (Erythea et al.):
         *   1=E+W horiz, 2=N+S vert, 3=crossroad, 4-7=T-junctions,
         *   8-11=corners, 12-15=dead-ends, 16-17=variants */
        if (roadBuf != NULL) {
            /* Autotile lookup: index by 4-bit neighbor mask (N=1,E=2,S=4,W=8) */
            static const unsigned char kAutoTile[16] = {
                /*  0=none  */ 1,   /*  1=N     */ 15,
                /*  2=E     */ 14,  /*  3=N+E   */ 10,
                /*  4=S     */ 13,  /*  5=N+S   */ 2,
                /*  6=E+S   */ 11,  /*  7=N+E+S */ 7,
                /*  8=W     */ 12,  /*  9=N+W   */ 9,
                /* 10=E+W   */ 1,   /* 11=N+E+W */ 6,
                /* 12=S+W   */ 8,   /* 13=N+S+W */ 5,
                /* 14=E+S+W */ 4,   /* 15=all   */ 3
            };
            short rx, ry;
            for (ry = 0; ry < 156; ry++) {
                for (rx = 0; rx < 112; rx++) {
                    short idx = ry * 112 + rx;
                    unsigned char mask;
                    if (roadBuf[idx] == 0) continue;
                    mask = 0;
                    if (ry > 0   && roadBuf[(ry-1) * 112 + rx] != 0) mask |= 1; /* N */
                    if (rx < 111 && roadBuf[ry * 112 + rx + 1]  != 0) mask |= 2; /* E */
                    if (ry < 155 && roadBuf[(ry+1) * 112 + rx] != 0) mask |= 4; /* S */
                    if (rx > 0   && roadBuf[ry * 112 + rx - 1]  != 0) mask |= 8; /* W */
                    roadBuf[idx] = kAutoTile[mask];
                }
            }
        }
    }

    /* --- Phase 4: Initialize game state --- */
    {
        static const char *factionNames[] = {
            "Sirians", "Storm Giants", "Grey Dwarves", "Orcs of Kor",
            "Elvallie", "Horse Lords", "Selentines", "Lord Bane"
        };
        for (i = 0; i < 8; i++) {
            short j;
            unsigned char *name = gs + i * 20;
            for (j = 0; factionNames[i][j] != 0 && j < 19; j++)
                name[j] = factionNames[i][j];
            name[j] = 0;
        }
    }

    *(short *)(gs + 0x10C) = 8;       /* faction count */
    for (i = 0; i < 8; i++)
        *(short *)(gs + 0xd0 + i * 2) = (i == 0) ? 0 : 1;  /* human + 7 AI */
    *(short *)(gs + 0x110) = 0;        /* current player */
    *(short *)(gs + 0x114) = 7;        /* difficulty = Lord */
    /* Create one starting army per faction at their starting city */
    {
        short armyIdx = 0;
        static const char *armyNames[] = {
            "1st Sirians", "1st Giants", "1st Dwarves", "1st Orcs",
            "1st Elvallie", "1st Horsemen", "1st Selentin", "1st Lord Bane"
        };

        for (i = 0; i < 8 && i < cityCount && armyIdx < 100; i++) {
            unsigned char *city = gs + 0x812 + i * 0x20;
            unsigned char *army = gs + 0x1604 + armyIdx * 0x42;
            short cx = *(short *)(city + 0x00);
            short cy = *(short *)(city + 0x02);
            short j;

            /* Position at the city */
            *(short *)(army + 0x00) = cx;
            *(short *)(army + 0x02) = cy;

            /* Name */
            for (j = 0; armyNames[i][j] != 0 && j < 15; j++)
                army[0x04 + j] = armyNames[i][j];
            army[0x04 + j] = 0;

            /* Sprite and owner */
            army[0x14] = 2;   /* sprite type 2 */
            army[0x15] = i;   /* owner = faction index */

            /* 4 mixed units matching original Warlords II starting army */
            army[0x16] = 11;    /* unit_types[0] = type 11 */
            army[0x17] = 2;     /* unit_types[1] = type 2 */
            army[0x18] = 1;     /* unit_types[2] = Heavy Infantry */
            army[0x19] = 8;     /* unit_types[3] = type 8 */

            /* Movement points */
            army[0x1a] = 10;  army[0x1b] = 10;
            army[0x1c] = 8;   army[0x1d] = 6;

            /* Hit points */
            army[0x1e] = 5;   army[0x1f] = 5;
            army[0x20] = 4;   army[0x21] = 6;

            /* Bonus and experience = 0 (already zeroed) */

            /* Strength display */
            *(short *)(army + 0x2a) = 35;  /* sum of HPs * factor */

            /* Active unit type */
            army[0x2c] = 11;  /* type 11 */

            /* Origin player */
            army[0x2f] = i;

            /* No orders */
            *(short *)(army + 0x32) = 0;
            *(short *)(army + 0x34) = 0;
            *(short *)(army + 0x36) = 0;

            /* Hero items = 0 */
            *(short *)(army + 0x3a) = 0;
            *(short *)(army + 0x3c) = 0;
            *(short *)(army + 0x3e) = 0;
            *(short *)(army + 0x40) = 0;

            armyIdx++;
        }
        /* Create neutral garrison armies at every non-capital city */
        /* Vary composition based on city index to match original Warlords II */
        for (i = 8; i < cityCount && armyIdx < 100; i++) {
            unsigned char *city = gs + 0x812 + i * 0x20;
            short sType = (short)(unsigned char)city[0x18];
            short cx, cy;
            unsigned char *army;
            short j2;

            /* Skip ruins and non-city sites */
            if (sType == 2 || sType == 5 || sType == 6) continue;

            cx = *(short *)(city + 0x00);
            cy = *(short *)(city + 0x02);

            army = gs + 0x1604 + armyIdx * 0x42;
            for (j2 = 0; j2 < 0x42; j2++) army[j2] = 0;

            *(short *)(army + 0x00) = cx;
            *(short *)(army + 0x02) = cy;
            army[0x15] = 0x0F;   /* neutral owner */
            army[0x2d] = 3;      /* fortified */
            army[0x2f] = 0x0F;   /* origin = neutral */

            if ((i % 2) == 0) {
                /* Setup A (even cities): stronger garrison, strength 22 */
                army[0x14] = 2;      /* sprite type 2 */
                army[0x16] = 11;     /* unit_types[0] = type 11 */
                army[0x17] = 2;      /* unit_types[1] = type 2 */
                army[0x18] = 7;      /* unit_types[2] = type 7 */
                army[0x19] = 0xFF;   /* slot 3 empty */
                army[0x1a] = 10;     /* movement[0] */
                army[0x1b] = 10;     /* movement[1] */
                army[0x1c] = 8;      /* movement[2] */
                army[0x1d] = 0;      /* movement[3] */
                army[0x1e] = 5;      /* HP[0] */
                army[0x1f] = 5;      /* HP[1] */
                army[0x20] = 4;      /* HP[2] */
                army[0x21] = 0;      /* HP[3] */
                *(short *)(army + 0x2a) = 22;  /* strength display */
            } else {
                /* Setup B (odd cities): single Heavy Infantry, strength 16 */
                army[0x14] = 2;      /* Heavy Infantry sprite */
                army[0x16] = 1;      /* unit_types[0] = Heavy Infantry */
                army[0x17] = 0xFF;   /* slot 1 empty */
                army[0x18] = 0xFF;   /* slot 2 empty */
                army[0x19] = 0xFF;   /* slot 3 empty */
                army[0x1a] = 8;      /* movement[0] */
                army[0x1b] = 0;      /* movement[1] */
                army[0x1c] = 0;      /* movement[2] */
                army[0x1d] = 0;      /* movement[3] */
                army[0x1e] = 4;      /* HP[0] */
                army[0x1f] = 0;      /* HP[1] */
                army[0x20] = 0;      /* HP[2] */
                army[0x21] = 0;      /* HP[3] */
                *(short *)(army + 0x2a) = 16;  /* strength display */
            }

            armyIdx++;
        }

        *(short *)(gs + 0x1602) = armyIdx;
    }

    /* Set starting gold for all 8 factions */
    for (i = 0; i < 8; i++)
        *(short *)(gs + 0x186 + i * 0x14) = 100;

    /* Enable hero generation for random maps */
    *(short *)(gs + 0x12e) = 1;

    sMapLoaded = true;
    sMapWidth = 112;
    sMapHeight = 156;

    /* Allocate extended state if needed */
    if (*gExtState == 0)
        *gExtState = (pint)NewPtrClear(0x4000);

    GameInit();

    /* Progress: 100% */
    {
        Rect fillR;
        RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
        short fillW = (barRight - barLeft - 2);
        SetPort(scenWin);
        SetRect(&fillR, barLeft + 1, barTop + 1,
                barLeft + 1 + fillW, barTop + barH - 1);
        RGBForeColor(&barFg);
        PaintRect(&fillR);
    }

    /* Brief delay at 100% */
    {
        unsigned long endTick = TickCount() + 30;
        while (TickCount() < endTick) { /* busy-wait */ }
    }

    sViewportX = 0;
    sViewportY = 0;

    DisposePtr((Ptr)terrain);
    return true;
}


/* ===================================================================
 * ShowScenarioSelection — Display scenario choice dialog
 *
 * Shows a modal window with a list of available scenarios.
 * Returns true if the user selected a scenario and it was loaded.
 * =================================================================== */
static Boolean ShowScenarioSelection(void)
{
    WindowPtr  scenWin;
    GWorldPtr  offscreen = NULL;
    Rect       winRect, listRect;
    short      i;
    short      selectedIdx = 0;
    short      scrollOffset = 0;
    short      visibleItems;
    Boolean    done = false;
    Boolean    loaded = false;
    Boolean    useRandomMap = false;
    short      lineHeight = 16;
    Rect       screenRect = qd.screenBits.bounds;

    ScanForScenarios();

    if (sScenarioCount == 0) {
        /* No scenarios found — fall back to StandardGetFile */
        return false;
    }

    /* Center a 480x360 window on screen (matches PICT 3000) */
    SetRect(&winRect,
        (screenRect.right - 480) / 2,
        (screenRect.bottom - 360) / 2,
        (screenRect.right - 480) / 2 + 480,
        (screenRect.bottom - 360) / 2 + 360);

    scenWin = NewCWindow(NULL, &winRect, "\p", true,
                          plainDBox, (WindowPtr)-1L, false, 0);
    if (scenWin == NULL)
        return false;

    SetPort(scenWin);

    /* Create offscreen buffer for flicker-free drawing */
    {
        Rect obounds;
        SetRect(&obounds, 0, 0, 480, 360);
        NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
    }

    /* Calculate list area (left side of scenario screen) */
    SetRect(&listRect, 20, 60, 220, 290);
    visibleItems = (listRect.bottom - listRect.top) / lineHeight;

    /* Drain pending events and ignore early keypresses */
    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        unsigned long startTick = TickCount();

        while (!done) {
            EventRecord evt;

            if (needsRedraw) {
                Rect r;
                CGrafPtr savedPort;
                GDHandle savedDevice;
                SetRect(&r, 0, 0, 480, 360);

                /* Draw into offscreen buffer for flicker-free rendering */
                if (offscreen != NULL) {
                    GetGWorld(&savedPort, &savedDevice);
                    SetGWorld(offscreen, NULL);
                    LockPixels(GetGWorldPixMap(offscreen));
                }

                /* PICT 3000: scenario selection background (crystal ball + dragons) */
                {
                    PicHandle bgPict = GetPicture(3000);
                    if (bgPict != NULL) {
                        DrawPicture(bgPict, &r);
                    } else {
                        DrawMarbleBackground(&r);
                    }
                }

                /* List background */
                {
                    RGBColor listBg = {0xEEEE, 0xEEEE, 0xEEEE};
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&listBg);
                    PaintRect(&listRect);
                    RGBForeColor(&black);
                    FrameRect(&listRect);
                }

                /* Scenario names */
                TextFont(3);
                TextSize(10);
                TextFace(0);
                for (i = 0; i < visibleItems && (i + scrollOffset) < sScenarioCount; i++) {
                    short itemIdx = i + scrollOffset;
                    short textY = listRect.top + (i + 1) * lineHeight - 3;

                    if (itemIdx == selectedIdx) {
                        RGBColor hilite = {0x3333, 0x3333, 0x9999};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        Rect selRect;
                        SetRect(&selRect, listRect.left + 1, listRect.top + i * lineHeight + 1,
                                listRect.right - 1, listRect.top + (i + 1) * lineHeight);
                        RGBForeColor(&hilite);
                        PaintRect(&selRect);
                        RGBForeColor(&white);
                    } else {
                        RGBColor black = {0, 0, 0};
                        RGBForeColor(&black);
                    }
                    MoveTo(listRect.left + 6, textY);
                    DrawString(sScenarioNames[itemIdx]);
                }

                /* Scenario info from SCEN resource — values drawn in crystal ball area.
                 * PICT 3000 already has the labels (Name, Description, Cities, Ruins, Players)
                 * so we only draw the actual data values here. */
                if (selectedIdx >= 0 && selectedIdx < sScenarioCount) {
                    RGBColor valueColor = {0xFFFF, 0xFFFF, 0xFFFF};
                    short refNum = FSpOpenResFile(&sScenarioSpecs[selectedIdx], fsRdPerm);
                    if (refNum != -1) {
                        Handle scenHdl;
                        UseResFile(refNum);
                        scenHdl = Get1Resource('SCEN', 10000);
                        if (scenHdl != NULL && GetHandleSize(scenHdl) >= 84) {
                            unsigned char *sc;
                            HLock(scenHdl);
                            sc = (unsigned char *)*scenHdl;
                            char nameBuf[21], descBuf[33];
                            short cities, ruins, players;
                            Str255 numStr;

                            BlockMoveData(sc, nameBuf, 20);
                            nameBuf[20] = 0;
                            BlockMoveData(sc + 28, descBuf, 32);
                            descBuf[32] = 0;
                            cities  = (short)sc[76];
                            ruins   = (short)sc[78];
                            players = (short)sc[80];

                            /* Draw values in the crystal ball area (right side) */
                            TextFont(3);
                            TextSize(10);
                            TextFace(bold);
                            RGBForeColor(&valueColor);

                            /* Name value */
                            MoveTo(290, 70);
                            DrawString(sScenarioNames[selectedIdx]);

                            /* Description value */
                            TextFace(0);
                            MoveTo(290, 143);
                            {
                                Str255 pDesc;
                                short dlen = 0;
                                while (dlen < 32 && descBuf[dlen] != 0) dlen++;
                                pDesc[0] = (unsigned char)dlen;
                                BlockMoveData(descBuf, pDesc + 1, dlen);
                                DrawString(pDesc);
                            }

                            /* Cities value */
                            TextSize(12);
                            TextFace(bold);
                            NumToString((long)cities, numStr);
                            MoveTo(300, 210);
                            DrawString(numStr);

                            /* Ruins value */
                            NumToString((long)ruins, numStr);
                            MoveTo(380, 210);
                            DrawString(numStr);

                            /* Players value */
                            TextSize(14);
                            NumToString((long)players, numStr);
                            MoveTo(335, 250);
                            DrawString(numStr);

                            HUnlock(scenHdl);
                            ReleaseResource(scenHdl);
                        }
                        CloseResFile(refNum);
                    }
                }

                /* Buttons */
                {
                    RGBColor black = {0, 0, 0};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    Rect useBtnRect, randBtnRect;

                    SetRect(&randBtnRect, 30, 308, 210, 328);
                    SetRect(&useBtnRect, 30, 332, 210, 350);

                    /* "Use Random Map..." */
                    RGBForeColor(&white);
                    PaintRoundRect(&randBtnRect, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&randBtnRect, 8, 8);
                    TextFont(3);
                    TextSize(10);
                    TextFace(0);
                    MoveTo(randBtnRect.left + 30, randBtnRect.bottom - 5);
                    DrawString(GetCachedString(STR_GAME_SETUP, 19, "\pUse Random Map..."));

                    /* "Use Selected Scenario" */
                    RGBForeColor(&white);
                    PaintRoundRect(&useBtnRect, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&useBtnRect, 8, 8);
                    PenSize(2, 2);
                    FrameRoundRect(&useBtnRect, 8, 8);
                    PenSize(1, 1);
                    TextFace(bold);
                    MoveTo(useBtnRect.left + 16, useBtnRect.bottom - 5);
                    DrawString(GetCachedString(STR_GAME_SETUP, 20, "\pUse Selected Scenario"));
                }

                /* Blit offscreen buffer to window */
                if (offscreen != NULL) {
                    UnlockPixels(GetGWorldPixMap(offscreen));
                    SetGWorld(savedPort, savedDevice);
                    SetPort(scenWin);
                    CopyBits((BitMap *)*GetGWorldPixMap(offscreen),
                             &((GrafPtr)scenWin)->portBits,
                             &r, &scenWin->portRect,
                             srcCopy, NULL);
                }

                needsRedraw = false;
            }

            /* Wait for events — long sleep to avoid CPU spinning */
            WaitNextEvent(everyEvent, &evt, 30, NULL);

            if (evt.what == mouseDown) {
                WindowPtr clickWin;
                short partCode = FindWindow(evt.where, &clickWin);

                if (partCode == inMenuBar) {
                    long menuResult = MenuSelect(evt.where);
                    short menuID = (menuResult >> 16) & 0xFFFF;
                    short menuItem = menuResult & 0xFFFF;
                    if (menuID == 2 && menuItem == 9) {
                        /* File > Quit */
                        DisposeWindow(scenWin);
                        if (offscreen != NULL) DisposeGWorld(offscreen);
                        ExitToShell();
                    }
                    HiliteMenu(0);
                } else {
                Point localPt = evt.where;
                SetPort(scenWin);
                GlobalToLocal(&localPt);

                /* Check list click — single click to select, double-click to load */
                if (PtInRect(localPt, &listRect)) {
                    short clickedItem = (localPt.v - listRect.top) / lineHeight + scrollOffset;
                    if (clickedItem >= 0 && clickedItem < sScenarioCount) {
                        if (clickedItem == selectedIdx) {
                            /* Double-click (same item already selected): load it */
                            done = true;
                            loaded = true;
                        } else {
                            selectedIdx = clickedItem;
                            needsRedraw = true;
                        }
                    }
                }

                /* Check "Use Selected Scenario" button */
                {
                    Rect useBtnRect;
                    SetRect(&useBtnRect, 30, 332, 210, 350);
                    if (PtInRect(localPt, &useBtnRect)) {
                        done = true;
                        loaded = true;
                    }
                }

                /* Check "Use Random Map..." button */
                {
                    Rect randBtnRect;
                    SetRect(&randBtnRect, 30, 308, 210, 328);
                    if (PtInRect(localPt, &randBtnRect)) {
                        done = true;
                        loaded = true;
                        useRandomMap = true;
                    }
                }
                } /* end else (not inMenuBar) */
            }
            else if (evt.what == keyDown) {
                char key = evt.message & charCodeMask;

                /* Cmd+Q = Quit */
                if ((evt.modifiers & cmdKey) && (key == 'q' || key == 'Q')) {
                    DisposeWindow(scenWin);
                    if (offscreen != NULL) DisposeGWorld(offscreen);
                    ExitToShell();
                }

                /* Ignore keypresses in the first second to avoid
                 * stale Return from the 256-color Alert */
                if ((TickCount() - startTick) < 60)
                    continue;
                if (key == 0x0D || key == 0x03) {
                    done = true;
                    loaded = true;
                }
                else if (key == 0x1B) {
                    done = true;
                }
                else if (key == 0x1E) {
                    if (selectedIdx > 0) { selectedIdx--; needsRedraw = true; }
                    if (selectedIdx < scrollOffset) scrollOffset = selectedIdx;
                }
                else if (key == 0x1F) {
                    if (selectedIdx < sScenarioCount - 1) { selectedIdx++; needsRedraw = true; }
                    if (selectedIdx >= scrollOffset + visibleItems)
                        scrollOffset = selectedIdx - visibleItems + 1;
                }
            }
            else if (evt.what == updateEvt) {
                needsRedraw = true;
            }
        }
    }

    /* Progress bar dimensions (shared between drawing and resource loading blocks) */
    short barLeft = 80, barRight = 380, barTop = 200, barH = 16;

    /* Play splash sound at load start */
    PlaySound(SND_SPLASH);
    PlayVoice(SND_VMOMENT);

    /* Show loading screen with progress bar (matches original's PPob 1010 layout).
     * Original uses 6 text labels + progress bar advancing 0%→20%→60%→100%. */
    if (loaded && !useRandomMap && selectedIdx >= 0 && selectedIdx < sScenarioCount) {
        Rect r, barFrame, barFill;
        RGBColor gold     = {0xFFFF, 0xCCCC, 0x3333};
        RGBColor ltBlue   = {0xCCCC, 0xDDDD, 0xFFFF};
        RGBColor barBg    = {0x3333, 0x3333, 0x5555};
        RGBColor white    = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor framCol  = {0x8888, 0x8888, 0xAAAA};
        short pct;

        SetPort(scenWin);
        SetRect(&r, 0, 0, 480, 360);

        /* Draw loading screen background */
        DrawMarbleBackground(&r);

        /* Title: "Loading Scenario" */
        TextFont(2);
        TextSize(18);
        TextFace(bold);
        RGBForeColor(&gold);
        {
            short tw = StringWidth(GetCachedString(STR_MISC, 24, "\pLoading Scenario"));
            MoveTo((480 - tw) / 2, 100);
            DrawString(GetCachedString(STR_MISC, 24, "\pLoading Scenario"));
        }

        /* Scenario name */
        TextFont(3);
        TextSize(12);
        TextFace(italic);
        RGBForeColor(&ltBlue);
        {
            short nameW = StringWidth(sScenarioNames[selectedIdx]);
            MoveTo((480 - nameW) / 2, 130);
            DrawString(sScenarioNames[selectedIdx]);
        }

        /* Status text */
        TextFont(3);
        TextSize(10);
        TextFace(0);
        RGBForeColor(&ltBlue);
        MoveTo(barLeft, barTop - 6);
        DrawString(GetCachedString(STR_MISC, 25, "\pReading scenario data..."));

        /* Progress bar frame */
        SetRect(&barFrame, barLeft, barTop, barRight, barTop + barH);
        RGBForeColor(&framCol);
        FrameRect(&barFrame);

        /* Progress bar background */
        SetRect(&barFill, barLeft + 1, barTop + 1, barRight - 1, barTop + barH - 1);
        RGBForeColor(&barBg);
        PaintRect(&barFill);

        /* Animate: 0% */
        pct = 0;
        {
            Str255 pctStr;
            short pctW;
            NumToString((long)pct, pctStr);
            pctStr[pctStr[0] + 1] = '%';
            pctStr[0]++;
            RGBForeColor(&white);
            TextFont(3); TextSize(10); TextFace(bold);
            pctW = StringWidth(pctStr);
            MoveTo((480 - pctW) / 2, barTop + barH + 16);
            DrawString(pctStr);
        }
    }

    /* Load the selected scenario with progress updates.
     * Original game: 0%→20% (read SCN), →60% (load MAP/RD), →100% (init). */
    if (loaded && !useRandomMap && selectedIdx >= 0 && selectedIdx < sScenarioCount) {
        short refNum = FSpOpenResFile(&sScenarioSpecs[selectedIdx], fsRdPerm);
        if (refNum != -1) {
            Handle mapHdl, scnHdl;
            UseResFile(refNum);

            /* --- Progress 20%: Read SCN data --- */
            {
                SetPort(scenWin);
                {
                    Rect fillR;
                    RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
                    short fillW = (barRight - barLeft - 2) * 20 / 100;
                    SetRect(&fillR, barLeft + 1, barTop + 1, barLeft + 1 + fillW, barTop + barH - 1);
                    RGBForeColor(&barFg);
                    PaintRect(&fillR);
                }
            }

            scnHdl = Get1Resource('SCN ', 10000);
            if (scnHdl != NULL) {
                long scnSize = GetHandleSize(scnHdl);
                HLock(scnHdl);
                if (*gGameState != 0) {
                    long copySize = scnSize;
                    if (copySize > 0x2FCC) copySize = 0x2FCC;
                    BlockMoveData(*scnHdl, (void *)*gGameState, copySize);
                }
                HUnlock(scnHdl);
                ReleaseResource(scnHdl);
            }

            /* --- Progress 60%: Load MAP data --- */
            {
                SetPort(scenWin);
                {
                    Rect fillR;
                    RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
                    short fillW = (barRight - barLeft - 2) * 60 / 100;
                    SetRect(&fillR, barLeft + 1, barTop + 1, barLeft + 1 + fillW, barTop + barH - 1);
                    RGBForeColor(&barFg);
                    PaintRect(&fillR);
                }
            }

            mapHdl = Get1Resource('MAP ', 10000);
            if (mapHdl != NULL) {
                long mapSize = GetHandleSize(mapHdl);
                HLock(mapHdl);
                if (*gMapTiles != 0) {
                    long copySize = mapSize;
                    if (copySize > 0x8880) copySize = 0x8880;
                    BlockMoveData(*mapHdl, (void *)*gMapTiles, copySize);
                    sMapLoaded = true;
                    sMapWidth = 112;
                    sMapHeight = (short)(copySize / (112 * 2));
                    if (sMapHeight > 156) sMapHeight = 156;
                }
                HUnlock(mapHdl);
                ReleaseResource(mapHdl);
            }

            /* Load RD (road overlay) resource */
            {
                Handle rdHdl = Get1Resource('RD  ', 10000);
                if (rdHdl != NULL) {
                    long rdSize = GetHandleSize(rdHdl);
                    HLock(rdHdl);
                    if (*gRoadData == 0)
                        *gRoadData = (pint)NewPtrClear(0x4440);
                    if (*gRoadData != 0) {
                        long copySize = rdSize;
                        if (copySize > 0x4440) copySize = 0x4440;
                        BlockMoveData(*rdHdl, (void *)*gRoadData, copySize);
                    }
                    HUnlock(rdHdl);
                    ReleaseResource(rdHdl);
                }
            }

            CloseResFile(refNum);

            /* Allocate extended state and run game initialization */
            if (*gExtState == 0)
                *gExtState = (pint)NewPtrClear(0x4000);
            if (sMapLoaded && *gGameState != 0)
                GameInit();

            /* --- Progress 100%: Initialize game state --- */
            {
                SetPort(scenWin);
                {
                    Rect fillR;
                    RGBColor barFg = {0x4444, 0x8888, 0xFFFF};
                    short fillW = (barRight - barLeft - 2);
                    SetRect(&fillR, barLeft + 1, barTop + 1, barLeft + 1 + fillW, barTop + barH - 1);
                    RGBForeColor(&barFg);
                    PaintRect(&fillR);
                }
                /* Update percentage text */
                {
                    Rect clearR;
                    RGBColor white  = {0xFFFF, 0xFFFF, 0xFFFF};
                    SetRect(&clearR, 0, barTop + barH + 2, 460, barTop + barH + 20);
                    DrawMarbleBackground(&clearR);
                    RGBForeColor(&white);
                    TextFont(3); TextSize(10); TextFace(bold);
                    {
                        short tw = StringWidth("\p100%");
                        MoveTo((460 - tw) / 2, barTop + barH + 16);
                        DrawString("\p100%");
                    }
                }
            }

            /* Brief delay at 100% so the user sees it complete (original: ~0.5s) */
            {
                unsigned long endTick = TickCount() + 30;
                while (TickCount() < endTick) { /* busy-wait */ }
            }

            /* Reset viewport and force redraw */
            sViewportX = 0;
            sViewportY = 0;
            if (*gMainGameWindow != 0)
                InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
            if (*gOverviewWindow != 0)
                InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
        }
    }

    /* --- Random map generation path --- */
    if (loaded && useRandomMap) {
        Rect r, barFrame, barFill;
        RGBColor gold     = {0xFFFF, 0xCCCC, 0x3333};
        RGBColor ltBlue   = {0xCCCC, 0xDDDD, 0xFFFF};
        RGBColor barBg    = {0x3333, 0x3333, 0x5555};
        RGBColor white    = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor framCol  = {0x8888, 0x8888, 0xAAAA};

        SetPort(scenWin);
        SetRect(&r, 0, 0, 460, 340);

        /* Draw loading screen background */
        DrawMarbleBackground(&r);

        /* Title: "Generating Random Map" */
        TextFont(2);
        TextSize(18);
        TextFace(bold);
        RGBForeColor(&gold);
        {
            short tw = StringWidth(GetCachedString(STR_MISC, 26, "\pGenerating Random Map"));
            MoveTo((460 - tw) / 2, 100);
            DrawString(GetCachedString(STR_MISC, 26, "\pGenerating Random Map"));
        }

        /* Status text */
        TextFont(3);
        TextSize(10);
        TextFace(0);
        RGBForeColor(&ltBlue);
        MoveTo(barLeft, barTop - 6);
        DrawString(GetCachedString(STR_MISC, 27, "\pCreating terrain and placing cities..."));

        /* Progress bar frame */
        SetRect(&barFrame, barLeft, barTop, barRight, barTop + barH);
        RGBForeColor(&framCol);
        FrameRect(&barFrame);

        /* Progress bar background */
        SetRect(&barFill, barLeft + 1, barTop + 1, barRight - 1, barTop + barH - 1);
        RGBForeColor(&barBg);
        PaintRect(&barFill);

        /* 0% text */
        {
            RGBForeColor(&white);
            TextFont(3); TextSize(10); TextFace(bold);
            {
                short tw2 = StringWidth("\p0%");
                MoveTo((460 - tw2) / 2, barTop + barH + 16);
                DrawString("\p0%");
            }
        }

        /* Generate the random map */
        GenerateRandomMap(scenWin, barLeft, barRight, barTop, barH);

        /* Update percentage text to 100% */
        {
            Rect clearR;
            SetRect(&clearR, 0, barTop + barH + 2, 460, barTop + barH + 20);
            DrawMarbleBackground(&clearR);
            RGBForeColor(&white);
            TextFont(3); TextSize(10); TextFace(bold);
            {
                short tw3 = StringWidth("\p100%");
                MoveTo((460 - tw3) / 2, barTop + barH + 16);
                DrawString("\p100%");
            }
        }

        /* Brief delay */
        {
            unsigned long endTick = TickCount() + 30;
            while (TickCount() < endTick) { /* busy-wait */ }
        }

        if (*gMainGameWindow != 0)
            InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
        if (*gOverviewWindow != 0)
            InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
    }

    if (offscreen != NULL)
        DisposeGWorld(offscreen);
    DisposeWindow(scenWin);
    return loaded;
}


/* ===================================================================
 * ApplyOptionsPreset — Set all options to match the selected preset
 *
 * 0=Beginner, 1=Intermediate, 2=Advanced
 * =================================================================== */
static void ApplyOptionsPreset(short preset)
{
    sOptionsPreset = preset;
    switch (preset) {
    case 0: /* Beginner */
        sNeutralCities   = 0;
        sRazingCities    = 0;
        sOptQuests       = true;
        sOptViewEnemies  = true;
        sOptHiddenMap    = false;
        sOptDiplomacy    = false;
        sOptViewProd     = true;
        sOptIntenseCombat = false;
        sOptMilAdvisor   = true;
        sOptQuickStart   = false;
        sOptRandomTurns  = false;
        break;
    case 1: /* Intermediate */
        sNeutralCities   = 1;
        sRazingCities    = 1;
        sOptQuests       = true;
        sOptViewEnemies  = false;
        sOptHiddenMap    = false;
        sOptDiplomacy    = true;
        sOptViewProd     = true;
        sOptIntenseCombat = false;
        sOptMilAdvisor   = true;
        sOptQuickStart   = false;
        sOptRandomTurns  = false;
        break;
    case 2: /* Advanced */
        sNeutralCities   = 2;
        sRazingCities    = 2;
        sOptQuests       = true;
        sOptViewEnemies  = false;
        sOptHiddenMap    = true;
        sOptDiplomacy    = true;
        sOptViewProd     = false;
        sOptIntenseCombat = true;
        sOptMilAdvisor   = false;
        sOptQuickStart   = false;
        sOptRandomTurns  = false;
        break;
    }
}


/* ===================================================================
 * CalcDifficultyRating — Returns difficulty percentage (0-100)
 *
 * Weighted sum of option values.
 * =================================================================== */
static short CalcDifficultyRating(short skillLevel)
{
    short rating = 0;

    /* Base from Computer Skill level.
     * Calibrated from original: Knight=25, Lord=52, Warlord=79
     * skillLevel: 0=Knight, 1=Lord, 2=Warlord */
    rating += 25 + skillLevel * 27;

    /* Option adjustments.
     * Calibrated: Beginner=+0, Intermediate=+13, Advanced=+21
     * Knight+Beginner=25%, Knight+Intermediate=38%, Knight+Advanced=46%
     * Warlord+Advanced=100% */

    /* Neutral Cities: Average=0, Strong=+3, Active=+6 */
    rating += sNeutralCities * 3;

    /* Razing Cities: Always=0, OnCapture=+2, Never=+4 */
    rating += sRazingCities * 2;

    /* Hidden Map: +1 */
    if (sOptHiddenMap) rating += 1;

    /* No View Enemies: +5 */
    if (!sOptViewEnemies) rating += 5;

    /* No View Production: +1 */
    if (!sOptViewProd) rating += 1;

    /* Diplomacy: +3 */
    if (sOptDiplomacy) rating += 3;

    /* Intense Combat: +1 */
    if (sOptIntenseCombat) rating += 1;

    /* No Quests: +5 */
    if (!sOptQuests) rating += 5;

    if (rating > 100) rating = 100;
    if (rating < 0) rating = 0;
    return rating;
}


/* ===================================================================
 * ShowEditOptions — Modal dialog for gameplay options
 *
 * Shows preset list, radio buttons for neutral/razing cities,
 * and checkboxes for gameplay flags.  OK applies, Cancel reverts.
 * =================================================================== */
static void ShowEditOptions(void)
{
    WindowPtr  optWin;
    GWorldPtr  offscreen = NULL;
    Rect       winRect;
    Boolean    done = false;
    Boolean    accepted = false;
    Rect       screenRect = qd.screenBits.bounds;

    /* Backup current values for Cancel */
    short   bkPreset   = sOptionsPreset;
    short   bkNeutral  = sNeutralCities;
    short   bkRazing   = sRazingCities;
    Boolean bkQuests   = sOptQuests;
    Boolean bkViewEn   = sOptViewEnemies;
    Boolean bkHidden   = sOptHiddenMap;
    Boolean bkDiplo    = sOptDiplomacy;
    Boolean bkViewPr   = sOptViewProd;
    Boolean bkIntense  = sOptIntenseCombat;
    Boolean bkMilAdv   = sOptMilAdvisor;
    Boolean bkQuickSt  = sOptQuickStart;
    Boolean bkRandTrn  = sOptRandomTurns;

    /* Center 420x340 window */
    SetRect(&winRect,
        (screenRect.right - 420) / 2,
        (screenRect.bottom - 340) / 2,
        (screenRect.right - 420) / 2 + 420,
        (screenRect.bottom - 340) / 2 + 340);

    optWin = NewCWindow(NULL, &winRect, "\p", true,
                         plainDBox, (WindowPtr)-1L, false, 0);
    if (optWin == NULL)
        return;

    SetPort(optWin);

    {
        Rect obounds;
        SetRect(&obounds, 0, 0, 420, 340);
        NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
    }

    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        unsigned long startTick = TickCount();

        while (!done) {
            EventRecord evt;

            if (needsRedraw) {
                Rect r;
                CGrafPtr savedPort;
                GDHandle savedDevice;
                SetRect(&r, 0, 0, 420, 340);

                if (offscreen != NULL) {
                    GetGWorld(&savedPort, &savedDevice);
                    SetGWorld(offscreen, NULL);
                    LockPixels(GetGWorldPixMap(offscreen));
                }

                /* Dark background */
                {
                    DrawMarbleBackground(&r);
                }

                /* Title */
                {
                    RGBColor gold = {0xFFFF, 0xCCCC, 0x3333};
                    RGBForeColor(&gold);
                    TextFont(2);
                    TextSize(18);
                    TextFace(bold);
                    MoveTo(20, 28);
                    DrawString(GetCachedString(STR_GAME_SETTINGS, 20, "\pEdit Options"));
                }

                /* === Left column: Presets === */
                {
                    RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBColor black = {0, 0, 0};
                    RGBColor listBg = {0xEEEE, 0xEEEE, 0xEEEE};
                    RGBColor hilite = {0x3333, 0x3333, 0x9999};
                    Rect listRect;
                    short pi;
                    static const unsigned char *presetNames[3] = {
                        "\pBeginner", "\pIntermediate", "\pAdvanced"
                    };

                    RGBForeColor(&labelColor);
                    TextFont(2);
                    TextSize(12);
                    TextFace(bold);
                    MoveTo(20, 50);
                    DrawString(GetCachedString(STR_GAME_SETTINGS, 21, "\pPresets"));

                    SetRect(&listRect, 20, 56, 150, 110);
                    RGBForeColor(&listBg);
                    PaintRect(&listRect);
                    RGBForeColor(&black);
                    FrameRect(&listRect);

                    TextFont(3);
                    TextSize(10);
                    TextFace(0);
                    for (pi = 0; pi < 3; pi++) {
                        short yPos = 56 + pi * 18;
                        if (pi == sOptionsPreset) {
                            Rect selRect;
                            SetRect(&selRect, 21, yPos + 1, 149, yPos + 18);
                            RGBForeColor(&hilite);
                            PaintRect(&selRect);
                            RGBForeColor(&white);
                        } else {
                            RGBForeColor(&black);
                        }
                        MoveTo(26, yPos + 14);
                        DrawString(presetNames[pi]);
                    }
                }

                /* === Right column: "Affecting Difficulty" === */
                {
                    RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    short yBase;

                    RGBForeColor(&labelColor);
                    TextFont(2);
                    TextSize(12);
                    TextFace(bold);
                    MoveTo(170, 50);
                    DrawString(GetCachedString(STR_GAME_SETTINGS, 22, "\pAffecting Difficulty"));

                    /* Neutral Cities radio group */
                    RGBForeColor(&white);
                    TextFont(3);
                    TextSize(10);
                    TextFace(0);

                    MoveTo(175, 70);
                    DrawString(GetCachedString(STR_GAME_SETTINGS, 23, "\pNeutral Cities:"));
                    yBase = 76;
                    {
                        static const unsigned char *ncLabels[3] = {
                            "\pAverage", "\pStrong", "\pActive"
                        };
                        short ni;
                        for (ni = 0; ni < 3; ni++) {
                            Rect radioRect;
                            short yPos = yBase + ni * 16;
                            SetRect(&radioRect, 180, yPos, 192, yPos + 12);
                            FrameOval(&radioRect);
                            if (ni == sNeutralCities) {
                                Rect fillRect;
                                SetRect(&fillRect, 183, yPos + 3, 189, yPos + 9);
                                PaintOval(&fillRect);
                            }
                            MoveTo(196, yPos + 10);
                            DrawString(ncLabels[ni]);
                        }
                    }

                    /* Razing Cities radio group */
                    MoveTo(300, 70);
                    DrawString(GetCachedString(STR_GAME_SETTINGS, 24, "\pRazing Cities:"));
                    yBase = 76;
                    {
                        static const unsigned char *rcLabels[3] = {
                            "\pAlways", "\pOn Capture", "\pNever"
                        };
                        short ri;
                        for (ri = 0; ri < 3; ri++) {
                            Rect radioRect;
                            short yPos = yBase + ri * 16;
                            SetRect(&radioRect, 305, yPos, 317, yPos + 12);
                            FrameOval(&radioRect);
                            if (ri == sRazingCities) {
                                Rect fillRect;
                                SetRect(&fillRect, 308, yPos + 3, 314, yPos + 9);
                                PaintOval(&fillRect);
                            }
                            MoveTo(321, yPos + 10);
                            DrawString(rcLabels[ri]);
                        }
                    }

                    /* Checkboxes affecting difficulty */
                    {
                        struct { const unsigned char *label; Boolean *value; } checks[] = {
                            { "\pQuests",          &sOptQuests },
                            { "\pView Enemies",    &sOptViewEnemies },
                            { "\pHidden Map",      &sOptHiddenMap },
                            { "\pDiplomacy",       &sOptDiplomacy },
                            { "\pView Production", &sOptViewProd },
                        };
                        short ci;
                        yBase = 132;
                        for (ci = 0; ci < 5; ci++) {
                            Rect cbRect;
                            short yPos = yBase + ci * 18;
                            SetRect(&cbRect, 180, yPos, 192, yPos + 12);
                            RGBForeColor(&white);
                            FrameRect(&cbRect);
                            if (*checks[ci].value) {
                                MoveTo(182, yPos + 10);
                                DrawString("\px");
                            }
                            MoveTo(198, yPos + 10);
                            DrawString(checks[ci].label);
                        }
                    }
                }

                /* === Right column: "Not Affecting Difficulty" === */
                {
                    RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    short yBase;

                    RGBForeColor(&labelColor);
                    TextFont(2);
                    TextSize(12);
                    TextFace(bold);
                    MoveTo(170, 236);
                    DrawString(GetCachedString(STR_GAME_SETTINGS, 25, "\pNot Affecting Difficulty"));

                    TextFont(3);
                    TextSize(10);
                    TextFace(0);

                    {
                        struct { const unsigned char *label; Boolean *value; } checks[] = {
                            { "\pIntense Combat",    &sOptIntenseCombat },
                            { "\pMilitary Advisor",  &sOptMilAdvisor },
                            { "\pQuick Start",       &sOptQuickStart },
                            { "\pRandom Turns",      &sOptRandomTurns },
                        };
                        short ci;
                        yBase = 246;
                        for (ci = 0; ci < 4; ci++) {
                            Rect cbRect;
                            short yPos = yBase + ci * 18;
                            SetRect(&cbRect, 180, yPos, 192, yPos + 12);
                            RGBForeColor(&white);
                            FrameRect(&cbRect);
                            if (*checks[ci].value) {
                                MoveTo(182, yPos + 10);
                                DrawString("\px");
                            }
                            MoveTo(198, yPos + 10);
                            DrawString(checks[ci].label);
                        }
                    }
                }

                /* === Buttons: Cancel and OK === */
                {
                    RGBColor black = {0, 0, 0};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    Rect cancelBtn, okBtn;

                    SetRect(&cancelBtn, 20, 308, 100, 328);
                    SetRect(&okBtn, 110, 308, 150, 328);

                    /* Cancel */
                    RGBForeColor(&white);
                    PaintRoundRect(&cancelBtn, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&cancelBtn, 8, 8);
                    TextFont(3);
                    TextSize(10);
                    TextFace(0);
                    MoveTo(cancelBtn.left + 14, cancelBtn.bottom - 5);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 0, "\pCancel"));

                    /* OK (default) */
                    RGBForeColor(&white);
                    PaintRoundRect(&okBtn, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&okBtn, 8, 8);
                    PenSize(2, 2);
                    FrameRoundRect(&okBtn, 8, 8);
                    PenSize(1, 1);
                    TextFace(bold);
                    MoveTo(okBtn.left + 10, okBtn.bottom - 5);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                }

                /* Blit offscreen to window */
                if (offscreen != NULL) {
                    UnlockPixels(GetGWorldPixMap(offscreen));
                    SetGWorld(savedPort, savedDevice);
                    SetPort(optWin);
                    CopyBits((BitMap *)*GetGWorldPixMap(offscreen),
                             &((GrafPtr)optWin)->portBits,
                             &r, &optWin->portRect,
                             srcCopy, NULL);
                }

                needsRedraw = false;
            }

            WaitNextEvent(everyEvent, &evt, 30, NULL);

            if (evt.what == mouseDown) {
                Point localPt = evt.where;
                SetPort(optWin);
                GlobalToLocal(&localPt);

                /* Preset list clicks */
                {
                    short pi;
                    for (pi = 0; pi < 3; pi++) {
                        Rect hitRect;
                        SetRect(&hitRect, 20, 56 + pi * 18, 150, 56 + (pi + 1) * 18);
                        if (PtInRect(localPt, &hitRect)) {
                            ApplyOptionsPreset(pi);
                            needsRedraw = true;
                            break;
                        }
                    }
                }

                /* Neutral Cities radio clicks */
                {
                    short ni;
                    for (ni = 0; ni < 3; ni++) {
                        Rect hitRect;
                        short yPos = 76 + ni * 16;
                        SetRect(&hitRect, 175, yPos, 280, yPos + 14);
                        if (PtInRect(localPt, &hitRect)) {
                            sNeutralCities = ni;
                            needsRedraw = true;
                            break;
                        }
                    }
                }

                /* Razing Cities radio clicks */
                {
                    short ri;
                    for (ri = 0; ri < 3; ri++) {
                        Rect hitRect;
                        short yPos = 76 + ri * 16;
                        SetRect(&hitRect, 300, yPos, 410, yPos + 14);
                        if (PtInRect(localPt, &hitRect)) {
                            sRazingCities = ri;
                            needsRedraw = true;
                            break;
                        }
                    }
                }

                /* Affecting-difficulty checkboxes */
                {
                    Boolean *affChecks[5] = {
                        &sOptQuests, &sOptViewEnemies, &sOptHiddenMap,
                        &sOptDiplomacy, &sOptViewProd
                    };
                    short ci;
                    for (ci = 0; ci < 5; ci++) {
                        Rect hitRect;
                        short yPos = 132 + ci * 18;
                        SetRect(&hitRect, 175, yPos, 310, yPos + 14);
                        if (PtInRect(localPt, &hitRect)) {
                            *affChecks[ci] = !*affChecks[ci];
                            needsRedraw = true;
                            break;
                        }
                    }
                }

                /* Not-affecting-difficulty checkboxes */
                {
                    Boolean *naChecks[4] = {
                        &sOptIntenseCombat, &sOptMilAdvisor,
                        &sOptQuickStart, &sOptRandomTurns
                    };
                    short ci;
                    for (ci = 0; ci < 4; ci++) {
                        Rect hitRect;
                        short yPos = 246 + ci * 18;
                        SetRect(&hitRect, 175, yPos, 310, yPos + 14);
                        if (PtInRect(localPt, &hitRect)) {
                            *naChecks[ci] = !*naChecks[ci];
                            needsRedraw = true;
                            break;
                        }
                    }
                }

                /* Cancel button */
                {
                    Rect cancelBtn;
                    SetRect(&cancelBtn, 20, 308, 100, 328);
                    if (PtInRect(localPt, &cancelBtn)) {
                        done = true;
                        accepted = false;
                    }
                }

                /* OK button */
                {
                    Rect okBtn;
                    SetRect(&okBtn, 110, 308, 150, 328);
                    if (PtInRect(localPt, &okBtn)) {
                        done = true;
                        accepted = true;
                    }
                }
            }
            else if (evt.what == keyDown) {
                char key = evt.message & charCodeMask;
                if ((TickCount() - startTick) < 60)
                    continue;
                if (key == 0x0D || key == 0x03) {
                    done = true;
                    accepted = true;
                }
                else if (key == 0x1B) {
                    done = true;
                    accepted = false;
                }
            }
            else if (evt.what == updateEvt) {
                needsRedraw = true;
            }
        }
    }

    /* Restore on Cancel */
    if (!accepted) {
        sOptionsPreset    = bkPreset;
        sNeutralCities    = bkNeutral;
        sRazingCities     = bkRazing;
        sOptQuests        = bkQuests;
        sOptViewEnemies   = bkViewEn;
        sOptHiddenMap     = bkHidden;
        sOptDiplomacy     = bkDiplo;
        sOptViewProd      = bkViewPr;
        sOptIntenseCombat = bkIntense;
        sOptMilAdvisor    = bkMilAdv;
        sOptQuickStart    = bkQuickSt;
        sOptRandomTurns   = bkRandTrn;
    }

    if (offscreen != NULL)
        DisposeGWorld(offscreen);
    DisposeWindow(optWin);
}


/* ===================================================================
 * ShowGameSetup — Display game setup dialog
 *
 * Shows a modal window where the player chooses their faction and
 * the computer AI skill level before starting the game.
 * Faction names are parsed from SCN resource data in gGameState.
 * Returns true if "Begin Game" was clicked, false on Escape.
 * =================================================================== */
static Boolean ShowGameSetup(void)
{
    WindowPtr  setupWin;
    GWorldPtr  offscreen = NULL;
    Rect       winRect;
    Boolean    done = false;
    Boolean    beginGame = false;
    short      selectedSide = 0;
    short      computerSkill = 0;
    Boolean    showMoreChoices = false;
    Rect       screenRect = qd.screenBits.bounds;
    char       factionNames[MAX_FACTIONS][FACTION_NAME_LEN + 1];
    short      factionCount = 0;
    short      i;
    short      winW, winH;

    static const unsigned char *aiLabels[4] = {
        "\pHuman", "\pKnight", "\pLord", "\pWarlord"
    };
    static const unsigned char *presetLabels[3] = {
        "\pBeginner", "\pIntermediate", "\pAdvanced"
    };

    /* Parse faction names from SCN resource (offset 0, 8x20 bytes) */
    if (*gGameState != 0) {
        unsigned char *scnData = (unsigned char *)*gGameState;
        for (i = 0; i < MAX_FACTIONS; i++) {
            BlockMoveData(scnData + i * FACTION_NAME_LEN,
                          factionNames[i], FACTION_NAME_LEN);
            factionNames[i][FACTION_NAME_LEN] = 0;
            if (factionNames[i][0] != 0)
                factionCount = i + 1;
        }
    }

    if (factionCount == 0)
        factionCount = MAX_FACTIONS;

    /* Simple mode: 460x340 */
    winW = 460;
    winH = 340;

    SetRect(&winRect,
        (screenRect.right - winW) / 2,
        (screenRect.bottom - winH) / 2,
        (screenRect.right - winW) / 2 + winW,
        (screenRect.bottom - winH) / 2 + winH);

    setupWin = NewCWindow(NULL, &winRect, "\p", true,
                          plainDBox, (WindowPtr)-1L, false, 0);
    if (setupWin == NULL)
        return false;

    SetPort(setupWin);

    {
        Rect obounds;
        SetRect(&obounds, 0, 0, winW, winH);
        NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
    }

    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        unsigned long startTick = TickCount();

        while (!done) {
            EventRecord evt;

            if (needsRedraw) {
                Rect r;
                CGrafPtr savedPort;
                GDHandle savedDevice;
                SetRect(&r, 0, 0, winW, winH);

                if (offscreen != NULL) {
                    GetGWorld(&savedPort, &savedDevice);
                    SetGWorld(offscreen, NULL);
                    LockPixels(GetGWorldPixMap(offscreen));
                }

                /* Dark background */
                {
                    DrawMarbleBackground(&r);
                }

                /* Title */
                {
                    RGBColor gold = {0xFFFF, 0xCCCC, 0x3333};
                    RGBForeColor(&gold);
                    TextFont(2);
                    TextSize(18);
                    TextFace(bold);
                    MoveTo(20, 30);
                    DrawString(GetCachedString(STR_GAME_SETUP, 0, "\pGame Setup"));
                }

                if (!showMoreChoices) {
                    /* ========== SIMPLE MODE ========== */

                    /* "Side to play" label */
                    {
                        RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                        RGBForeColor(&labelColor);
                        TextFont(2);
                        TextSize(12);
                        TextFace(bold);
                        MoveTo(30, 60);
                        DrawString(GetCachedString(STR_GAME_SETUP, 1, "\pSide to play"));
                    }

                    /* Faction radio buttons */
                    TextFont(3);
                    TextSize(10);
                    TextFace(0);
                    for (i = 0; i < factionCount; i++) {
                        short yPos = 78 + i * 22;
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        Rect radioRect;

                        SetRect(&radioRect, 35, yPos - 9, 47, yPos + 3);
                        RGBForeColor(&white);
                        FrameOval(&radioRect);

                        if (i == selectedSide) {
                            Rect fillRect;
                            SetRect(&fillRect, 38, yPos - 6, 44, yPos);
                            PaintOval(&fillRect);
                        }

                        MoveTo(52, yPos);
                        {
                            Str255 pName;
                            short nlen = 0;
                            while (nlen < FACTION_NAME_LEN && factionNames[i][nlen] != 0)
                                nlen++;
                            pName[0] = (unsigned char)nlen;
                            BlockMoveData(factionNames[i], pName + 1, nlen);
                            DrawString(pName);
                        }
                    }

                    /* "Computer Skill" label */
                    {
                        RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                        RGBForeColor(&labelColor);
                        TextFont(2);
                        TextSize(12);
                        TextFace(bold);
                        MoveTo(260, 60);
                        DrawString(GetCachedString(STR_GAME_SETUP, 2, "\pComputer Skill"));
                    }

                    /* Skill level radio buttons */
                    TextFont(3);
                    TextSize(10);
                    TextFace(0);
                    for (i = 0; i < 3; i++) {
                        short yPos = 78 + i * 22;
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        Rect radioRect;

                        SetRect(&radioRect, 265, yPos - 9, 277, yPos + 3);
                        RGBForeColor(&white);
                        FrameOval(&radioRect);

                        if (i == computerSkill) {
                            Rect fillRect;
                            SetRect(&fillRect, 268, yPos - 6, 274, yPos);
                            PaintOval(&fillRect);
                        }

                        MoveTo(282, yPos);
                        if (i == 0) DrawString(GetCachedString(STR_GAME_SETUP, 3, "\pKnight"));
                        else if (i == 1) DrawString(GetCachedString(STR_GAME_SETUP, 4, "\pLord"));
                        else DrawString(GetCachedString(STR_GAME_SETUP, 5, "\pWarlord"));
                    }

                    /* "Options" label */
                    {
                        RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                        RGBForeColor(&labelColor);
                        TextFont(2);
                        TextSize(12);
                        TextFace(bold);
                        MoveTo(260, 160);
                        DrawString(GetCachedString(STR_GAME_SETUP, 6, "\pOptions"));
                    }

                    /* Preset dropdown */
                    {
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        RGBColor black = {0, 0, 0};
                        Rect dropRect;
                        SetRect(&dropRect, 260, 170, 410, 188);
                        RGBForeColor(&white);
                        PaintRect(&dropRect);
                        RGBForeColor(&black);
                        FrameRect(&dropRect);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(266, 184);
                        DrawString(presetLabels[sOptionsPreset]);
                    }

                    /* "Edit Options..." button */
                    {
                        RGBColor black = {0, 0, 0};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        Rect editOptBtn;
                        SetRect(&editOptBtn, 260, 196, 410, 214);
                        RGBForeColor(&white);
                        PaintRoundRect(&editOptBtn, 8, 8);
                        RGBForeColor(&black);
                        FrameRoundRect(&editOptBtn, 8, 8);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(editOptBtn.left + 18, editOptBtn.bottom - 5);
                        DrawString(GetCachedString(STR_GAME_SETUP, 7, "\pEdit Options..."));
                    }

                    /* Difficulty rating */
                    {
                        RGBColor valueColor = {0xCCCC, 0xDDDD, 0xFFFF};
                        Str255 numStr;
                        short rating = CalcDifficultyRating(computerSkill);
                        RGBForeColor(&valueColor);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(260, 240);
                        DrawString(GetCachedString(STR_GAME_SETUP, 8, "\pDifficulty Rating: "));
                        NumToString((long)rating, numStr);
                        DrawString(numStr);
                        DrawString("\p%");
                    }

                    /* Army Set dropdown */
                    if (sArmySetCount > 0) {
                        RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        RGBColor black = {0, 0, 0};
                        Rect armyDropRect;
                        RGBForeColor(&labelColor);
                        TextFont(2);
                        TextSize(12);
                        TextFace(bold);
                        MoveTo(30, 260);
                        DrawString(GetCachedString(STR_GAME_SETUP, 9, "\pArmy Set"));

                        SetRect(&armyDropRect, 30, 268, 220, 286);
                        RGBForeColor(&white);
                        PaintRect(&armyDropRect);
                        RGBForeColor(&black);
                        FrameRect(&armyDropRect);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(36, 282);
                        {
                            Str255 setName;
                            short sn;
                            for (sn = 0; sArmySetNames[sSelectedArmySet][sn] && sn < 255; sn++)
                                setName[sn + 1] = sArmySetNames[sSelectedArmySet][sn];
                            setName[0] = (unsigned char)sn;
                            DrawString(setName);
                        }
                    }

                    /* Buttons */
                    {
                        RGBColor black = {0, 0, 0};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        Rect moreBtnRect, beginBtnRect;

                        SetRect(&moreBtnRect, 30, 300, 170, 322);
                        SetRect(&beginBtnRect, 290, 300, 430, 322);

                        /* "More Choices" */
                        RGBForeColor(&white);
                        PaintRoundRect(&moreBtnRect, 8, 8);
                        RGBForeColor(&black);
                        FrameRoundRect(&moreBtnRect, 8, 8);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(moreBtnRect.left + 22, moreBtnRect.bottom - 5);
                        DrawString(GetCachedString(STR_GAME_SETUP, 10, "\pMore Choices"));

                        /* "Begin Game" (default button) */
                        RGBForeColor(&white);
                        PaintRoundRect(&beginBtnRect, 8, 8);
                        RGBForeColor(&black);
                        FrameRoundRect(&beginBtnRect, 8, 8);
                        PenSize(2, 2);
                        FrameRoundRect(&beginBtnRect, 8, 8);
                        PenSize(1, 1);
                        TextFace(bold);
                        MoveTo(beginBtnRect.left + 26, beginBtnRect.bottom - 5);
                        DrawString(GetCachedString(STR_GAME_SETUP, 11, "\pBegin Game"));
                    }
                } else {
                    /* ========== EXPANDED MODE (More Choices) ========== */

                    /* 4 rows x 2 columns of faction boxes */
                    for (i = 0; i < factionCount; i++) {
                        short col = i % 2;
                        short row = i / 2;
                        short bx = 15 + col * 145;
                        short by = 50 + row * 68;
                        Rect boxRect;
                        RGBColor borderColor;
                        RGBColor boxBg = {0x2000, 0x1800, 0x3000};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        RGBColor black = {0, 0, 0};

                        SetRect(&boxRect, bx, by, bx + 135, by + 60);

                        /* Box background */
                        RGBForeColor(&boxBg);
                        PaintRect(&boxRect);

                        /* Colored border from player colors */
                        borderColor = sPlayerColors[i + 1];
                        RGBForeColor(&borderColor);
                        PenSize(2, 2);
                        FrameRect(&boxRect);
                        PenSize(1, 1);

                        /* Faction name (bold) */
                        TextFont(3);
                        TextSize(10);
                        TextFace(bold);
                        RGBForeColor(&white);
                        MoveTo(bx + 6, by + 14);
                        {
                            Str255 pName;
                            short nlen = 0;
                            while (nlen < FACTION_NAME_LEN && factionNames[i][nlen] != 0)
                                nlen++;
                            pName[0] = (unsigned char)nlen;
                            BlockMoveData(factionNames[i], pName + 1, nlen);
                            DrawString(pName);
                        }

                        /* AI dropdown text */
                        TextFace(0);
                        {
                            Rect aiRect;
                            SetRect(&aiRect, bx + 6, by + 22, bx + 90, by + 36);
                            RGBForeColor(&white);
                            PaintRect(&aiRect);
                            RGBForeColor(&black);
                            FrameRect(&aiRect);
                            MoveTo(bx + 10, by + 34);
                            DrawString(aiLabels[sFactionAI[i]]);
                        }

                        /* Character checkbox */
                        {
                            Rect cbRect;
                            SetRect(&cbRect, bx + 6, by + 42, bx + 18, by + 54);
                            if (sFactionCharacter[i]) {
                                RGBColor checkGreen = {0x4444, 0xFFFF, 0x4444};
                                RGBForeColor(&checkGreen);
                                PaintRect(&cbRect);
                                RGBForeColor(&white);
                                MoveTo(cbRect.left + 2, cbRect.bottom - 3);
                                LineTo(cbRect.left + 4, cbRect.bottom - 1);
                                LineTo(cbRect.right - 2, cbRect.top + 2);
                            } else {
                                RGBColor dark = {0x2222, 0x2222, 0x2222};
                                RGBForeColor(&dark);
                                PaintRect(&cbRect);
                            }
                            RGBForeColor(&white);
                            FrameRect(&cbRect);
                            MoveTo(bx + 22, by + 52);
                            DrawString(GetCachedString(STR_GAME_SETUP, 12, "\pCharacter"));
                        }
                    }

                    /* Right column: Options section */
                    {
                        RGBColor labelColor = {0xFFFF, 0xCCCC, 0x3333};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        RGBColor black = {0, 0, 0};
                        RGBColor valueColor = {0xCCCC, 0xDDDD, 0xFFFF};
                        Str255 numStr;
                        short rating;

                        /* Options label */
                        RGBForeColor(&labelColor);
                        TextFont(2);
                        TextSize(12);
                        TextFace(bold);
                        MoveTo(310, 60);
                        DrawString(GetCachedString(STR_GAME_SETUP, 6, "\pOptions"));

                        /* Preset dropdown */
                        {
                            Rect dropRect;
                            SetRect(&dropRect, 310, 68, 540, 86);
                            RGBForeColor(&white);
                            PaintRect(&dropRect);
                            RGBForeColor(&black);
                            FrameRect(&dropRect);
                            TextFont(3);
                            TextSize(10);
                            TextFace(0);
                            MoveTo(316, 82);
                            DrawString(presetLabels[sOptionsPreset]);
                        }

                        /* "Edit Options..." button */
                        {
                            Rect editOptBtn;
                            SetRect(&editOptBtn, 310, 94, 540, 112);
                            RGBForeColor(&white);
                            PaintRoundRect(&editOptBtn, 8, 8);
                            RGBForeColor(&black);
                            FrameRoundRect(&editOptBtn, 8, 8);
                            TextFont(3);
                            TextSize(10);
                            TextFace(0);
                            MoveTo(editOptBtn.left + 18, editOptBtn.bottom - 5);
                            DrawString(GetCachedString(STR_GAME_SETUP, 7, "\pEdit Options..."));
                        }

                        /* "I am the Greatest" checkbox */
                        {
                            Rect cbRect;
                            SetRect(&cbRect, 315, 122, 327, 134);
                            if (sIAmGreatest) {
                                RGBColor checkGreen = {0x4444, 0xFFFF, 0x4444};
                                RGBForeColor(&checkGreen);
                                PaintRect(&cbRect);
                                RGBForeColor(&white);
                                MoveTo(cbRect.left + 2, cbRect.bottom - 3);
                                LineTo(cbRect.left + 4, cbRect.bottom - 1);
                                LineTo(cbRect.right - 2, cbRect.top + 2);
                            } else {
                                RGBColor dark = {0x2222, 0x2222, 0x2222};
                                RGBForeColor(&dark);
                                PaintRect(&cbRect);
                            }
                            RGBForeColor(&white);
                            FrameRect(&cbRect);
                            MoveTo(333, 132);
                            DrawString(GetCachedString(STR_GAME_SETUP, 13, "\pI am the Greatest"));
                        }

                        /* Difficulty rating */
                        rating = CalcDifficultyRating(computerSkill);
                        RGBForeColor(&valueColor);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(310, 156);
                        DrawString(GetCachedString(STR_GAME_SETUP, 8, "\pDifficulty Rating: "));
                        NumToString((long)rating, numStr);
                        DrawString(numStr);
                        DrawString("\p%");

                        /* "E-mail game" checkbox (stub, disabled) */
                        {
                            RGBColor gray = {0x7777, 0x7777, 0x7777};
                            Rect cbRect;
                            SetRect(&cbRect, 315, 174, 327, 186);
                            RGBForeColor(&gray);
                            FrameRect(&cbRect);
                            MoveTo(333, 184);
                            DrawString(GetCachedString(STR_GAME_SETUP, 14, "\pE-mail game"));
                        }

                        /* "Set Addresses" button (stub) */
                        {
                            RGBColor gray = {0x7777, 0x7777, 0x7777};
                            Rect addrBtn;
                            SetRect(&addrBtn, 310, 194, 540, 212);
                            RGBForeColor(&gray);
                            PaintRoundRect(&addrBtn, 8, 8);
                            RGBForeColor(&black);
                            FrameRoundRect(&addrBtn, 8, 8);
                            TextFont(3);
                            TextSize(10);
                            TextFace(0);
                            RGBForeColor(&gray);
                            MoveTo(addrBtn.left + 18, addrBtn.bottom - 5);
                            DrawString(GetCachedString(STR_GAME_SETUP, 15, "\pSet Addresses"));
                        }

                        /* "Select Random Characters" button (stub) */
                        {
                            Rect randBtn;
                            SetRect(&randBtn, 310, 220, 540, 238);
                            RGBForeColor(&white);
                            PaintRoundRect(&randBtn, 8, 8);
                            RGBForeColor(&black);
                            FrameRoundRect(&randBtn, 8, 8);
                            TextFont(3);
                            TextSize(10);
                            TextFace(0);
                            MoveTo(randBtn.left + 4, randBtn.bottom - 5);
                            DrawString(GetCachedString(STR_GAME_SETUP, 16, "\pSelect Random Characters"));
                        }

                        /* Army Set dropdown (expanded mode) */
                        if (sArmySetCount > 0) {
                            RGBForeColor(&labelColor);
                            TextFont(2);
                            TextSize(12);
                            TextFace(bold);
                            MoveTo(310, 260);
                            DrawString(GetCachedString(STR_GAME_SETUP, 9, "\pArmy Set"));

                            {
                                Rect armyDropRect;
                                SetRect(&armyDropRect, 310, 268, 540, 286);
                                RGBForeColor(&white);
                                PaintRect(&armyDropRect);
                                RGBForeColor(&black);
                                FrameRect(&armyDropRect);
                                TextFont(3);
                                TextSize(10);
                                TextFace(0);
                                MoveTo(316, 282);
                                {
                                    Str255 setName;
                                    short sn;
                                    for (sn = 0; sArmySetNames[sSelectedArmySet][sn] && sn < 255; sn++)
                                        setName[sn + 1] = sArmySetNames[sSelectedArmySet][sn];
                                    setName[0] = (unsigned char)sn;
                                    DrawString(setName);
                                }
                            }
                        }
                    }

                    /* Bottom buttons */
                    {
                        RGBColor black = {0, 0, 0};
                        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                        Rect fewerBtnRect, beginBtnRect;

                        SetRect(&fewerBtnRect, 30, 390, 170, 410);
                        SetRect(&beginBtnRect, 390, 390, 530, 410);

                        /* "Fewer Choices" */
                        RGBForeColor(&white);
                        PaintRoundRect(&fewerBtnRect, 8, 8);
                        RGBForeColor(&black);
                        FrameRoundRect(&fewerBtnRect, 8, 8);
                        TextFont(3);
                        TextSize(10);
                        TextFace(0);
                        MoveTo(fewerBtnRect.left + 16, fewerBtnRect.bottom - 5);
                        DrawString(GetCachedString(STR_GAME_SETUP, 17, "\pFewer Choices"));

                        /* "Begin Game" (default button) */
                        RGBForeColor(&white);
                        PaintRoundRect(&beginBtnRect, 8, 8);
                        RGBForeColor(&black);
                        FrameRoundRect(&beginBtnRect, 8, 8);
                        PenSize(2, 2);
                        FrameRoundRect(&beginBtnRect, 8, 8);
                        PenSize(1, 1);
                        TextFace(bold);
                        MoveTo(beginBtnRect.left + 26, beginBtnRect.bottom - 5);
                        DrawString(GetCachedString(STR_GAME_SETUP, 11, "\pBegin Game"));
                    }
                }

                /* Blit offscreen buffer to window */
                if (offscreen != NULL) {
                    UnlockPixels(GetGWorldPixMap(offscreen));
                    SetGWorld(savedPort, savedDevice);
                    SetPort(setupWin);
                    CopyBits((BitMap *)*GetGWorldPixMap(offscreen),
                             &((GrafPtr)setupWin)->portBits,
                             &r, &setupWin->portRect,
                             srcCopy, NULL);
                }

                needsRedraw = false;
            }

            /* Wait for events */
            WaitNextEvent(everyEvent, &evt, 30, NULL);

            if (evt.what == mouseDown) {
                WindowPtr clickWin2;
                short partCode2 = FindWindow(evt.where, &clickWin2);

                if (partCode2 == inMenuBar) {
                    long menuResult = MenuSelect(evt.where);
                    short menuID2 = (menuResult >> 16) & 0xFFFF;
                    short menuItem2 = menuResult & 0xFFFF;
                    if (menuID2 == 2 && menuItem2 == 9) {
                        /* File > Quit */
                        DisposeWindow(setupWin);
                        if (offscreen != NULL) DisposeGWorld(offscreen);
                        ExitToShell();
                    }
                    HiliteMenu(0);
                } else {
                Point localPt = evt.where;
                SetPort(setupWin);
                GlobalToLocal(&localPt);

                if (!showMoreChoices) {
                    /* === Simple mode clicks === */

                    /* Faction radio clicks */
                    for (i = 0; i < factionCount; i++) {
                        Rect factionHitRect;
                        short yPos = 78 + i * 22;
                        SetRect(&factionHitRect, 30, yPos - 12, 220, yPos + 8);
                        if (PtInRect(localPt, &factionHitRect)) {
                            selectedSide = i;
                            needsRedraw = true;
                            break;
                        }
                    }

                    /* Skill level radio clicks */
                    for (i = 0; i < 3; i++) {
                        Rect skillHitRect;
                        short yPos = 78 + i * 22;
                        SetRect(&skillHitRect, 260, yPos - 12, 430, yPos + 8);
                        if (PtInRect(localPt, &skillHitRect)) {
                            computerSkill = i;
                            needsRedraw = true;
                            break;
                        }
                    }

                    /* Preset dropdown click — cycle through presets */
                    {
                        Rect dropRect;
                        SetRect(&dropRect, 260, 170, 410, 188);
                        if (PtInRect(localPt, &dropRect)) {
                            sOptionsPreset = (sOptionsPreset + 1) % 3;
                            ApplyOptionsPreset(sOptionsPreset);
                            needsRedraw = true;
                        }
                    }

                    /* "Edit Options..." button */
                    {
                        Rect editOptBtn;
                        SetRect(&editOptBtn, 260, 196, 410, 214);
                        if (PtInRect(localPt, &editOptBtn)) {
                            ShowEditOptions();
                            needsRedraw = true;
                        }
                    }

                    /* Army set dropdown click — cycle through sets */
                    if (sArmySetCount > 1) {
                        Rect armyDropRect;
                        SetRect(&armyDropRect, 30, 268, 220, 286);
                        if (PtInRect(localPt, &armyDropRect)) {
                            sSelectedArmySet = (sSelectedArmySet + 1) % sArmySetCount;
                            needsRedraw = true;
                        }
                    }

                    /* "Begin Game" button */
                    {
                        Rect beginBtnRect;
                        SetRect(&beginBtnRect, 290, 300, 430, 322);
                        if (PtInRect(localPt, &beginBtnRect)) {
                            done = true;
                            beginGame = true;
                        }
                    }

                    /* "More Choices" button — toggle to expanded */
                    {
                        Rect moreBtnRect;
                        SetRect(&moreBtnRect, 30, 300, 170, 322);
                        if (PtInRect(localPt, &moreBtnRect)) {
                            /* Sync: init sFactionAI from simple mode state */
                            for (i = 0; i < factionCount; i++)
                                sFactionAI[i] = (i == selectedSide) ? 0 : (computerSkill + 1);

                            showMoreChoices = true;
                            winW = 560;
                            winH = 420;

                            /* Recreate window and offscreen at new size */
                            if (offscreen != NULL) {
                                DisposeGWorld(offscreen);
                                offscreen = NULL;
                            }
                            DisposeWindow(setupWin);

                            SetRect(&winRect,
                                (screenRect.right - winW) / 2,
                                (screenRect.bottom - winH) / 2,
                                (screenRect.right - winW) / 2 + winW,
                                (screenRect.bottom - winH) / 2 + winH);
                            setupWin = NewCWindow(NULL, &winRect, "\p", true,
                                                   plainDBox, (WindowPtr)-1L, false, 0);
                            SetPort(setupWin);
                            {
                                Rect obounds;
                                SetRect(&obounds, 0, 0, winW, winH);
                                NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
                            }
                            needsRedraw = true;
                        }
                    }
                } else {
                    /* === Expanded mode clicks === */

                    /* Faction AI dropdown clicks */
                    for (i = 0; i < factionCount; i++) {
                        short col = i % 2;
                        short row = i / 2;
                        short bx = 15 + col * 145;
                        short by = 50 + row * 68;
                        Rect aiHitRect;
                        SetRect(&aiHitRect, bx + 6, by + 22, bx + 90, by + 36);
                        if (PtInRect(localPt, &aiHitRect)) {
                            sFactionAI[i] = (sFactionAI[i] + 1) % 4;
                            needsRedraw = true;
                            break;
                        }
                    }

                    /* Preset dropdown click */
                    {
                        Rect dropRect;
                        SetRect(&dropRect, 310, 68, 540, 86);
                        if (PtInRect(localPt, &dropRect)) {
                            sOptionsPreset = (sOptionsPreset + 1) % 3;
                            ApplyOptionsPreset(sOptionsPreset);
                            needsRedraw = true;
                        }
                    }

                    /* "Edit Options..." button */
                    {
                        Rect editOptBtn;
                        SetRect(&editOptBtn, 310, 94, 540, 112);
                        if (PtInRect(localPt, &editOptBtn)) {
                            ShowEditOptions();
                            needsRedraw = true;
                        }
                    }

                    /* "I am the Greatest" checkbox click */
                    {
                        Rect iagRect;
                        SetRect(&iagRect, 315, 122, 540, 134);
                        if (PtInRect(localPt, &iagRect)) {
                            sIAmGreatest = !sIAmGreatest;
                            if (sIAmGreatest) {
                                /* Set all AI factions to Knight (easiest) */
                                for (i = 0; i < factionCount; i++)
                                    if (sFactionAI[i] != 0) sFactionAI[i] = 1;
                            }
                            needsRedraw = true;
                        }
                    }

                    /* "Select Random Characters" button click */
                    {
                        Rect randBtn;
                        SetRect(&randBtn, 310, 220, 540, 238);
                        if (PtInRect(localPt, &randBtn)) {
                            /* Randomize AI level for non-human factions */
                            for (i = 0; i < factionCount; i++) {
                                if (sFactionAI[i] != 0)
                                    sFactionAI[i] = (short)(TickCount() % 3) + 1;
                            }
                            /* Toggle character flags randomly */
                            for (i = 0; i < factionCount; i++)
                                sFactionCharacter[i] = ((TickCount() + i * 7) % 3 != 0);
                            needsRedraw = true;
                        }
                    }

                    /* Faction "Character" checkbox clicks */
                    for (i = 0; i < factionCount; i++) {
                        short col = i % 2;
                        short row = i / 2;
                        short bx = 15 + col * 145;
                        short by = 50 + row * 68;
                        Rect charHitRect;
                        SetRect(&charHitRect, bx + 6, by + 42, bx + 90, by + 54);
                        if (PtInRect(localPt, &charHitRect)) {
                            sFactionCharacter[i] = !sFactionCharacter[i];
                            needsRedraw = true;
                            break;
                        }
                    }

                    /* Army set dropdown click — cycle through sets */
                    if (sArmySetCount > 1) {
                        Rect armyDropRect;
                        SetRect(&armyDropRect, 310, 268, 540, 286);
                        if (PtInRect(localPt, &armyDropRect)) {
                            sSelectedArmySet = (sSelectedArmySet + 1) % sArmySetCount;
                            needsRedraw = true;
                        }
                    }

                    /* "Begin Game" button */
                    {
                        Rect beginBtnRect;
                        SetRect(&beginBtnRect, 390, 390, 530, 410);
                        if (PtInRect(localPt, &beginBtnRect)) {
                            done = true;
                            beginGame = true;
                        }
                    }

                    /* "Fewer Choices" button — toggle back to simple */
                    {
                        Rect fewerBtnRect;
                        SetRect(&fewerBtnRect, 30, 390, 170, 410);
                        if (PtInRect(localPt, &fewerBtnRect)) {
                            /* Sync: derive selectedSide and computerSkill from sFactionAI */
                            {
                                short aiCounts[4] = {0, 0, 0, 0};
                                short maxAI = 1;
                                selectedSide = 0;
                                for (i = 0; i < factionCount; i++) {
                                    if (sFactionAI[i] == 0)
                                        selectedSide = i;
                                    else
                                        aiCounts[sFactionAI[i]]++;
                                }
                                /* Most common AI level */
                                if (aiCounts[2] >= aiCounts[1] && aiCounts[2] >= aiCounts[3])
                                    maxAI = 2;
                                else if (aiCounts[3] >= aiCounts[1] && aiCounts[3] >= aiCounts[2])
                                    maxAI = 3;
                                else
                                    maxAI = 1;
                                computerSkill = maxAI - 1; /* 0=Knight, 1=Lord, 2=Warlord */
                            }

                            showMoreChoices = false;
                            winW = 460;
                            winH = 340;

                            if (offscreen != NULL) {
                                DisposeGWorld(offscreen);
                                offscreen = NULL;
                            }
                            DisposeWindow(setupWin);

                            SetRect(&winRect,
                                (screenRect.right - winW) / 2,
                                (screenRect.bottom - winH) / 2,
                                (screenRect.right - winW) / 2 + winW,
                                (screenRect.bottom - winH) / 2 + winH);
                            setupWin = NewCWindow(NULL, &winRect, "\p", true,
                                                   plainDBox, (WindowPtr)-1L, false, 0);
                            SetPort(setupWin);
                            {
                                Rect obounds;
                                SetRect(&obounds, 0, 0, winW, winH);
                                NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
                            }
                            needsRedraw = true;
                        }
                    }
                }
                } /* end else (not inMenuBar) */
            }
            else if (evt.what == keyDown) {
                char key = evt.message & charCodeMask;

                /* Cmd+Q = Quit */
                if ((evt.modifiers & cmdKey) && (key == 'q' || key == 'Q')) {
                    DisposeWindow(setupWin);
                    if (offscreen != NULL) DisposeGWorld(offscreen);
                    ExitToShell();
                }

                if ((TickCount() - startTick) < 60)
                    continue;
                if (key == 0x0D || key == 0x03) {
                    done = true;
                    beginGame = true;
                }
                else if (key == 0x1B) {
                    done = true;
                }
                else if (!showMoreChoices) {
                    if (key == 0x1E) {
                        if (selectedSide > 0) {
                            selectedSide--;
                            needsRedraw = true;
                        }
                    }
                    else if (key == 0x1F) {
                        if (selectedSide < factionCount - 1) {
                            selectedSide++;
                            needsRedraw = true;
                        }
                    }
                }
            }
            else if (evt.what == updateEvt) {
                needsRedraw = true;
            }
        }
    }

    /* Store results */
    sPlayerSide = selectedSide;
    sComputerSkill = computerSkill;

    /* Write game state on Begin Game (Step 6) */
    if (beginGame && *gGameState != 0) {
        unsigned char *gs = (unsigned char *)*gGameState;

        /* Faction count and current player */
        *(short *)(gs + 0x10C) = factionCount;
        *(short *)(gs + 0x110) = selectedSide;

        /* Player types: human vs AI */
        for (i = 0; i < factionCount; i++) {
            *(short *)(gs + 0xd0 + i * 2) = (sFactionAI[i] == 0) ? 0 : 1;
        }

        /* Difficulty level: Knight=3, Lord=7, Warlord=15 */
        {
            short diffMap[4] = {0, 3, 7, 15};  /* Human, Knight, Lord, Warlord */
            /* In simple mode, computerSkill is 0-based (0=Knight, 1=Lord, 2=Warlord) */
            *(short *)(gs + 0x114) = diffMap[computerSkill + 1];
        }

        /* Option flags */
        *(short *)(gs + 0x116) = sOptHiddenMap ? 1 : 0;
        *(short *)(gs + 0x11a) = sOptQuests ? 1 : 0;
        *(short *)(gs + 0x11c) = sOptDiplomacy ? 1 : 0;
        *(short *)(gs + 0x122) = sOptRandomTurns ? 1 : 0;
        *(short *)(gs + 0x124) = sOptViewProd ? 1 : 0;
        *(short *)(gs + 0x126) = sNeutralCities;
        *(short *)(gs + 0x128) = sOptIntenseCombat ? 1 : 0;
        *(short *)(gs + 0x12a) = sOptViewEnemies ? 1 : 0;

        /* Initialize player alive flags (alive for each faction in the scenario) */
        for (i = 0; i < 8; i++) {
            *(short *)(gs + 0x138 + i * 2) = (i < factionCount) ? 1 : 0;
        }

        /* Initialize turn management */
        *(short *)(gs + 0x136) = 1;   /* Start at turn 1 */
        *(short *)(gs + 0x118) = 0;   /* Not end-of-round yet */
        *(short *)(gs + 0x174) = 0;   /* Order index starts at 0 */
        for (i = 0; i < 8; i++) {
            *(short *)(gs + 0x164 + i * 2) = i;  /* Sequential turn order */
        }
    }

    if (offscreen != NULL)
        DisposeGWorld(offscreen);
    DisposeWindow(setupWin);
    return beginGame;
}


/* Terrain type colors for the main strategic map view.
 * Indices match SCN lookup table terrain types 0-11. */
#define NUM_TERRAIN_COLORS 12
static RGBColor sTerrainColors[NUM_TERRAIN_COLORS] = {
    {0x4F4F,0xEFEF,0x4F4F},  /* 0  grass/plains - green */
    {0x0000,0x8B8B,0x1313},  /* 1  forest - dark green */
    {0x6B6B,0x8B8B,0x3B3B},  /* 2  swamp - olive */
    {0xAFAF,0x6B6B,0x1B1B},  /* 3  hills - brown */
    {0x8787,0x8787,0x8787},  /* 4  mountains - gray */
    {0xFFFF,0xDBDB,0x8B8B},  /* 5  shore - sand */
    {0x9797,0x4B4B,0x0707},  /* 6  bridge - dark brown */
    {0xCFCF,0x8B8B,0x3B3B},  /* 7  road - tan */
    {0x4B4B,0xEBEB,0xFFFF},  /* 8  river - light blue */
    {0x0000,0x6363,0xC3C3},  /* 9  sea/ocean - blue */
    {0xCFCF,0xCFCF,0xCFCF},  /* 10 city - light gray */
    {0x9F9F,0x9F9F,0x9F9F},  /* 11 temple/ruin - medium gray */
};

/* ===================================================================
 * DrawMapInWindow — Draw terrain using sprite sheets at 40x40 per tile
 *
 * Shows a viewport of the map using CopyBits from the terrain GWorlds.
 * Falls back to flat terrain-type colors if sprites aren't loaded.
 * Arrow keys scroll the viewport (handled in event loop).
 * =================================================================== */
static short sDebugShowTileSheet = 0;  /* press 'T' to toggle tile sheet view */

/* Forward declaration for movement cost (used in movement range BFS) */
static short GetMovementCost(short mapX, short mapY, short unitClass);

static void DrawMapInWindow(WindowPtr win)
{
    unsigned char *mapData;
    unsigned char *scnData;
    Rect           winRect;
    short          tx, ty;
    short          tilesWide, tilesHigh;
    Boolean        hasScn;
    short          i;

    if (!sMapLoaded || *gMapTiles == 0)
        return;

    mapData = (unsigned char *)*gMapTiles;
    hasScn  = (*gGameState != 0);
    scnData = hasScn ? (unsigned char *)*gGameState : NULL;
    winRect = win->portRect;

    /* Reserve space for scrollbars and shields at edges */
    winRect.right  -= SCROLLBAR_W;
    winRect.bottom -= SCROLLBAR_H;

    /* How many tiles fit in the window */
    tilesWide = (winRect.right - winRect.left) / TERRAIN_TILE_W + 1;
    tilesHigh = (winRect.bottom - winRect.top) / TERRAIN_TILE_H + 1;

    /* Lock terrain sheet pixmaps for the draw loop */
    if (sTerrainLoaded) {
        if (sTerrainGW != NULL) LockPixels(GetGWorldPixMap(sTerrainGW));
        if (sTerrainGW2 != NULL) LockPixels(GetGWorldPixMap(sTerrainGW2));
    }

    for (ty = 0; ty < tilesHigh; ty++) {
        for (tx = 0; tx < tilesWide; tx++) {
            short mapX = sViewportX + tx;
            short mapY = sViewportY + ty;
            unsigned short tileOffset;
            unsigned char  terrainIdx;
            short          terrainType;
            Rect           dstRect;

            if (mapX >= sMapWidth || mapY >= sMapHeight)
                continue;

            tileOffset = mapY * 0xE0 + mapX * 2;
            terrainIdx = mapData[tileOffset];

            /* Get terrain category from SCN properties table */
            if (hasScn) {
                terrainType = (short)(unsigned char)scnData[terrainIdx + 0x711];
            } else {
                terrainType = (terrainIdx >> 4) & 0x0F;
            }
            if (terrainType >= NUM_TERRAIN_COLORS)
                terrainType = 0;

            SetRect(&dstRect,
                winRect.left + tx * TERRAIN_TILE_W,
                winRect.top  + ty * TERRAIN_TILE_H,
                winRect.left + (tx + 1) * TERRAIN_TILE_W,
                winRect.top  + (ty + 1) * TERRAIN_TILE_H);

            /* Sprite-based rendering from terrain sheets.
             * PICT 30022 = tiles 0-95, PICT 30023 = tiles 96-191.
             * Each sheet: 16 cols x 6 rows of 40x40 tiles.
             * Tile N: sheet=N/96, local=N%96, col=local%16, row=local/16. */
            if (sTerrainLoaded) {
                short local = terrainIdx % TERRAIN_TILES_PER_SHEET;
                short spriteCol = local % TERRAIN_COLS;
                short spriteRow = local / TERRAIN_COLS;
                GWorldPtr sheet = (terrainIdx < TERRAIN_TILES_PER_SHEET)
                    ? sTerrainGW : sTerrainGW2;
                Rect srcRect;

                if (sheet != NULL) {
                    PixMapHandle srcPix = GetGWorldPixMap(sheet);
                    SetRect(&srcRect,
                        spriteCol * TERRAIN_TILE_W, spriteRow * TERRAIN_TILE_H,
                        (spriteCol + 1) * TERRAIN_TILE_W,
                        (spriteRow + 1) * TERRAIN_TILE_H);

                    CopyBits((BitMap *)*srcPix,
                             &((GrafPtr)win)->portBits,
                             &srcRect, &dstRect,
                             srcCopy, NULL);
                    continue;
                }
            }

            /* Fallback: flat terrain-type color */
            RGBForeColor(&sTerrainColors[terrainType]);
            PaintRect(&dstRect);
        }
    }

    /* Unlock terrain sheet pixmaps */
    if (sTerrainLoaded) {
        if (sTerrainGW != NULL) UnlockPixels(GetGWorldPixMap(sTerrainGW));
        if (sTerrainGW2 != NULL) UnlockPixels(GetGWorldPixMap(sTerrainGW2));
    }

    /* --- Road overlay --- */
    /* Road tiles from PICT 30021 (640x80, 13 columns x 2 rows of 40x40 tiles).
     * The RD resource stores 1 byte per cell; bits 0-4 = road tile index
     * (0 = no road, 1-17 = road type). The original game's display list
     * subtracts 1 from the stored RD value to get the sprite tile index:
     *   RD 1 → tile 0 (col=0,row=0), RD 14 → tile 13 (col=0,row=1), etc.
     * Original uses roadType % 13 for column, roadType / 13 for row
     * (confirmed from decompiled FUN_10005f90 at line 11242: / 0xd). */
    if (*gRoadData != 0 && sMapLoaded && sRoadGW != NULL) {
        unsigned char *roadData = (unsigned char *)*gRoadData;
        short rdMapH = sMapHeight;
        PixMapHandle roadPix = GetGWorldPixMap(sRoadGW);
        Boolean useMask = (sRoadMaskGW != NULL);
        PixMapHandle maskPix = useMask ? GetGWorldPixMap(sRoadMaskGW) : NULL;

        if (rdMapH > 156) rdMapH = 156;
        LockPixels(roadPix);
        if (useMask) LockPixels(maskPix);

        for (ty = 0; ty < tilesHigh; ty++) {
            for (tx = 0; tx < tilesWide; tx++) {
                short rMapX = sViewportX + tx;
                short rMapY = sViewportY + ty;
                unsigned char rd;
                Rect srcRect, dstRect;
                short tileIdx, spriteCol, spriteRow;

                if (rMapX < 0 || rMapX >= 112 || rMapY < 0 || rMapY >= rdMapH)
                    continue;
                rd = roadData[rMapY * 112 + rMapX] & 0x1F; /* mask off flag bits */
                if (rd == 0) continue;

                /* Direct mapping: tile index = RD value - 1 (original game subtracts 1) */
                tileIdx = rd - 1;
                spriteCol = tileIdx % 13;  /* 13 columns per row (original: / 0xd) */
                spriteRow = tileIdx / 13;
                SetRect(&srcRect,
                    spriteCol * TERRAIN_TILE_W,
                    spriteRow * TERRAIN_TILE_H,
                    (spriteCol + 1) * TERRAIN_TILE_W,
                    (spriteRow + 1) * TERRAIN_TILE_H);

                SetRect(&dstRect,
                    winRect.left + tx * TERRAIN_TILE_W,
                    winRect.top  + ty * TERRAIN_TILE_H,
                    winRect.left + (tx + 1) * TERRAIN_TILE_W,
                    winRect.top  + (ty + 1) * TERRAIN_TILE_H);

                /* Use CopyMask like the original: source pixels + 1-bit mask.
                 * In the mask, BLACK=1=copy, WHITE=0=skip (transparent). */
                if (useMask) {
                    CopyMask((BitMap *)*roadPix,
                             (BitMap *)*maskPix,
                             &((GrafPtr)win)->portBits,
                             &srcRect, &srcRect, &dstRect);
                } else {
                    /* Fallback: mode 36 (transparent) if mask unavailable */
                    RGBColor savedBg;
                    GetBackColor(&savedBg);
                    RGBBackColor(&sRoadBgColor);
                    CopyBits((BitMap *)*roadPix,
                             &((GrafPtr)win)->portBits,
                             &srcRect, &dstRect,
                             36, NULL);
                    RGBBackColor(&savedBg);
                }
            }
        }

        UnlockPixels(roadPix);
        if (useMask) UnlockPixels(maskPix);
    }

    /* --- Fog of war overlay (bitmap-based) --- */
    /* Uses pre-computed sFogExplored[] and sFogVisible[] bitmaps.
     * Visible = fully shown. Explored but not visible = dimmed. Unexplored = black.
     * Read hidden map flag from game state (gs+0x116) to avoid stale global. */
    if (hasScn && *(short *)(scnData + 0x116) != 0) {
        short curPlayer = *(short *)(scnData + 0x110);
        if (curPlayer >= 0 && curPlayer < 8) {
            for (ty = 0; ty < tilesHigh; ty++) {
                for (tx = 0; tx < tilesWide; tx++) {
                    short mapX = sViewportX + tx;
                    short mapY = sViewportY + ty;
                    Rect fogRect;

                    if (mapX < 0 || mapX >= sMapWidth || mapY < 0 || mapY >= sMapHeight)
                        continue;

                    if (FogGetBit(sFogVisible[curPlayer], mapX, mapY))
                        continue;  /* currently visible: no overlay */

                    SetRect(&fogRect,
                        winRect.left + tx * TERRAIN_TILE_W,
                        winRect.top  + ty * TERRAIN_TILE_H,
                        winRect.left + (tx + 1) * TERRAIN_TILE_W,
                        winRect.top  + (ty + 1) * TERRAIN_TILE_H);

                    if (FogGetBit(sFogExplored[curPlayer], mapX, mapY)) {
                        /* Explored but not currently visible: semi-transparent dim.
                         * Use subOver pen mode to darken existing terrain. */
                        RGBColor dimColor = {0x6666, 0x6666, 0x6666};
                        RGBForeColor(&dimColor);
                        PenMode(subOver);
                        PaintRect(&fogRect);
                        PenMode(srcCopy);
                    } else {
                        /* Never explored: solid black */
                        RGBColor blackColor = {0x0000, 0x0000, 0x0000};
                        RGBForeColor(&blackColor);
                        PaintRect(&fogRect);
                    }
                }
            }
        }
    }

    /* --- Draw city/ruin/temple icons from SCN data at gs+0x812 --- */
    /* Each site record is 0x20 bytes: +0=x, +2=y, +4=owner, +6=defense, +8=income, +0x18=site_type */
    /* site_type: 0=city, 2=temple, 5=ruin, 6=library */
    if (hasScn) {
        short cityCount = *(short *)(scnData + 0x810);
        if (cityCount > 40) cityCount = 40;

        for (i = 0; i < cityCount; i++) {
            unsigned char *city = scnData + 0x812 + i * 0x20;
            short cx = *(short *)(city + 0x00);
            short cy = *(short *)(city + 0x02);
            short owner = *(short *)(city + 0x04);
            short siteType = (short)(unsigned char)city[0x18];
            short screenX, screenY;

            screenX = winRect.left + (cx - sViewportX) * TERRAIN_TILE_W;
            screenY = winRect.top  + (cy - sViewportY) * TERRAIN_TILE_H;

            if (screenX >= winRect.left - TERRAIN_TILE_W &&
                screenX < winRect.right &&
                screenY >= winRect.top - TERRAIN_TILE_H &&
                screenY < winRect.bottom) {

                if (siteType == 2 || siteType == 5 || siteType == 6) {
                    /* === Ruin / Temple / Library icon === */
                    RGBColor stoneGray = {0x8888, 0x8888, 0x7777};
                    RGBColor darkStone = {0x5555, 0x5555, 0x4444};

                    if (siteType == 2) {
                        /* Temple: peaked roof with columns */
                        RGBColor gold = {0xCCCC, 0xAAAA, 0x3333};
                        Rect base, colL, colR;
                        /* Base platform */
                        SetRect(&base, screenX + 4, screenY + 20,
                                screenX + TERRAIN_TILE_W - 4, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&stoneGray);
                        PaintRect(&base);
                        RGBForeColor(&darkStone);
                        FrameRect(&base);
                        /* Left column */
                        SetRect(&colL, screenX + 8, screenY + 8,
                                screenX + 12, screenY + 20);
                        RGBForeColor(&stoneGray);
                        PaintRect(&colL);
                        /* Right column */
                        SetRect(&colR, screenX + 20, screenY + 8,
                                screenX + 24, screenY + 20);
                        PaintRect(&colR);
                        /* Peaked roof (triangle) */
                        RGBForeColor(&gold);
                        MoveTo(screenX + 6, screenY + 8);
                        LineTo(screenX + 16, screenY + 2);
                        LineTo(screenX + 26, screenY + 8);
                        LineTo(screenX + 6, screenY + 8);
                    } else {
                        /* Ruin/Library: broken walls */
                        Rect wallL, wallR, rubble;
                        /* Left broken wall */
                        SetRect(&wallL, screenX + 4, screenY + 6,
                                screenX + 10, screenY + TERRAIN_TILE_H - 4);
                        RGBForeColor(&stoneGray);
                        PaintRect(&wallL);
                        RGBForeColor(&darkStone);
                        FrameRect(&wallL);
                        /* Right broken wall (shorter) */
                        SetRect(&wallR, screenX + 22, screenY + 12,
                                screenX + 28, screenY + TERRAIN_TILE_H - 4);
                        RGBForeColor(&stoneGray);
                        PaintRect(&wallR);
                        RGBForeColor(&darkStone);
                        FrameRect(&wallR);
                        /* Rubble pile */
                        SetRect(&rubble, screenX + 10, screenY + 18,
                                screenX + 22, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&darkStone);
                        PaintRect(&rubble);
                        /* Flag marker if type 6 (library) */
                        if (siteType == 6) {
                            RGBColor blue = {0x3333, 0x3333, 0xFFFF};
                            RGBForeColor(&blue);
                            MoveTo(screenX + 16, screenY + 4);
                            LineTo(screenX + 16, screenY + 12);
                            {
                                Rect flag;
                                SetRect(&flag, screenX + 17, screenY + 4,
                                        screenX + 22, screenY + 8);
                                PaintRect(&flag);
                            }
                        }
                    }
                } else {
                    /* === City icon === */
                    if (sCityLoaded && sCityGW != NULL) {
                        /* Sprite-based city: blit from city sheet (PICT 25000).
                         * Layout: 16 cols x 6 rows of 40x40 tiles (640x240).
                         * Owner 0-7 → column 0-7, neutral → column 8.
                         * Row 0 = standard cities. */
                        short cityCol = (owner >= 0 && owner < 8) ? owner : 8;
                        short cityRow = 0;
                        Rect srcRect, dstRect;
                        PixMapHandle srcPix = GetGWorldPixMap(sCityGW);

                        if (cityCol >= 20) cityCol = 0;
                        SetRect(&srcRect,
                            cityCol * TERRAIN_TILE_W, cityRow * TERRAIN_TILE_H,
                            (cityCol + 1) * TERRAIN_TILE_W,
                            (cityRow + 1) * TERRAIN_TILE_H);
                        SetRect(&dstRect, screenX, screenY,
                            screenX + TERRAIN_TILE_W, screenY + TERRAIN_TILE_H);

                        LockPixels(srcPix);
                        {
                            RGBColor savedBg;
                            GetBackColor(&savedBg);
                            RGBBackColor(&sCityBgColor);
                            CopyBits((BitMap *)*srcPix,
                                     &((GrafPtr)win)->portBits,
                                     &srcRect, &dstRect,
                                     36, NULL);
                            RGBBackColor(&savedBg);
                        }
                        UnlockPixels(srcPix);
                    } else {
                        /* Fallback: programmatic castle icon */
                        RGBColor black = {0x0000, 0x0000, 0x0000};
                        RGBColor darkGray = {0x4444, 0x4444, 0x4444};
                        RGBColor lightGray = {0xBBBB, 0xBBBB, 0xBBBB};
                        short colorIdx;
                        Rect wallRect, towerL, towerR, gateRect, flagRect;

                        if (owner >= 0 && owner < 8)
                            colorIdx = owner + 1;
                        else
                            colorIdx = 8;

                        SetRect(&wallRect, screenX + 4, screenY + 8,
                                screenX + TERRAIN_TILE_W - 4, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&lightGray);
                        PaintRect(&wallRect);
                        RGBForeColor(&darkGray);
                        FrameRect(&wallRect);

                        SetRect(&towerL, screenX + 2, screenY + 2,
                                screenX + 10, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&lightGray);
                        PaintRect(&towerL);
                        RGBForeColor(&darkGray);
                        FrameRect(&towerL);

                        SetRect(&towerR, screenX + TERRAIN_TILE_W - 10, screenY + 2,
                                screenX + TERRAIN_TILE_W - 2, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&lightGray);
                        PaintRect(&towerR);
                        RGBForeColor(&darkGray);
                        FrameRect(&towerR);

                        {
                            short bx;
                            RGBForeColor(&darkGray);
                            for (bx = screenX + 2; bx < screenX + 10; bx += 4) {
                                Rect cren;
                                SetRect(&cren, bx, screenY + 2, bx + 2, screenY + 4);
                                PaintRect(&cren);
                            }
                            for (bx = screenX + TERRAIN_TILE_W - 10; bx < screenX + TERRAIN_TILE_W - 2; bx += 4) {
                                Rect cren;
                                SetRect(&cren, bx, screenY + 2, bx + 2, screenY + 4);
                                PaintRect(&cren);
                            }
                        }

                        SetRect(&gateRect, screenX + 12, screenY + 16,
                                screenX + 20, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&black);
                        PaintRect(&gateRect);

                        SetRect(&flagRect, screenX + 13, screenY + 6,
                                screenX + 19, screenY + 14);
                        RGBForeColor(&sPlayerColors[colorIdx]);
                        PaintRect(&flagRect);
                        RGBForeColor(&black);
                        FrameRect(&flagRect);
                    }
                }
            }
        }
    }

    /* --- Draw city names below castle icons --- */
    if (hasScn) {
        short cityCount2 = *(short *)(scnData + 0x810);
        if (cityCount2 > 40) cityCount2 = 40;
        TextFont(3);
        TextSize(9);
        TextFace(0);
        for (i = 0; i < cityCount2; i++) {
            unsigned char *city = scnData + 0x812 + i * 0x20;
            short cx = *(short *)(city + 0x00);
            short cy = *(short *)(city + 0x02);
            short cityOwner = *(short *)(city + 0x04);
            short siteType = (short)(unsigned char)city[0x18];
            short screenX, screenY;

            if (siteType != 0) continue;  /* only label cities */

            screenX = winRect.left + (cx - sViewportX) * TERRAIN_TILE_W;
            screenY = winRect.top  + (cy - sViewportY) * TERRAIN_TILE_H;

            if (screenX >= winRect.left - TERRAIN_TILE_W &&
                screenX < winRect.right &&
                screenY >= winRect.top - TERRAIN_TILE_H &&
                screenY < winRect.bottom) {
                short colorIdx = (cityOwner >= 0 && cityOwner < 8) ? cityOwner + 1 : 8;
                RGBColor shadowCol = {0x0000, 0x0000, 0x0000};
                Str255 cityPName;
                short nameLen = 0;

                /* Get city name from CTY resource data, or fall back to faction name */
                if (i < sCityNameCount && sCityNames[i][0] != '\0') {
                    char *cn = sCityNames[i];
                    while (nameLen < MAX_CITY_NAME - 1 && cn[nameLen] != '\0')
                        nameLen++;
                    {
                        short ni2;
                        for (ni2 = 0; ni2 < nameLen; ni2++)
                            cityPName[ni2 + 1] = cn[ni2];
                    }
                } else if (cityOwner >= 0 && cityOwner < 8) {
                    char *fn = (char *)(scnData + cityOwner * 20);
                    while (nameLen < 12 && fn[nameLen] != 0)
                        nameLen++;
                    {
                        short ni2;
                        for (ni2 = 0; ni2 < nameLen; ni2++)
                            cityPName[ni2 + 1] = fn[ni2];
                    }
                } else {
                    nameLen = 7;
                    BlockMoveData("Neutral", cityPName + 1, 7);
                }
                cityPName[0] = (unsigned char)nameLen;

                /* Append production timer for own cities: " [N]" */
                if (*gExtState != 0 && cityOwner >= 0 && cityOwner < 8 &&
                    cityOwner == *(short *)(scnData + 0x110)) {
                    unsigned char *ext = (unsigned char *)*gExtState;
                    unsigned char *extCity = ext + 0x24c + i * 0x5c;
                    short prodType = *(short *)(extCity + 0x02);
                    short prodTurns = *(short *)(extCity + 0x58);
                    if (prodType >= 0 && nameLen + 4 <= 254) {
                        Str255 tn;
                        short ti2;
                        cityPName[++cityPName[0]] = ' ';
                        cityPName[++cityPName[0]] = '[';
                        NumToString((long)prodTurns, tn);
                        for (ti2 = 1; ti2 <= tn[0]; ti2++)
                            cityPName[++cityPName[0]] = tn[ti2];
                        cityPName[++cityPName[0]] = ']';
                    }
                }

                /* Shadow text */
                RGBForeColor(&shadowCol);
                MoveTo(screenX + 1, screenY + TERRAIN_TILE_H + 9);
                DrawString(cityPName);
                /* Colored text */
                RGBForeColor(&sPlayerColors[colorIdx]);
                MoveTo(screenX, screenY + TERRAIN_TILE_H + 8);
                DrawString(cityPName);
            }
        }
    }

    /* --- Draw army sprites from game state --- */
    if (hasScn) {
        short armyCount = *(short *)(scnData + 0x1602);
        if (armyCount > 100) armyCount = 100;

        for (i = 0; i < armyCount; i++) {
            unsigned char *army = scnData + 0x1604 + i * 0x42;
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);
            short owner = (short)(unsigned char)army[0x15];
            short screenX, screenY;

            /* Skip invalid/empty army records */
            if (army[0x16] == 0xFF) continue;           /* no units */
            if (ax < 0 || ay < 0) continue;             /* invalid coords */
            if (ax >= sMapWidth || ay >= sMapHeight) continue;

            screenX = winRect.left + (ax - sViewportX) * TERRAIN_TILE_W;
            screenY = winRect.top  + (ay - sViewportY) * TERRAIN_TILE_H;

            if (screenX >= winRect.left - TERRAIN_TILE_W &&
                screenX < winRect.right &&
                screenY >= winRect.top - TERRAIN_TILE_H &&
                screenY < winRect.bottom) {

                short colorIdx = (owner >= 0 && owner < 8) ? owner + 1 : 0;
                short spriteIdx = (short)(unsigned char)army[0x14];
                /* Each 512x64 sheet has unit types in a 16x2 grid (32px cells).
                 * Sheet 0 = default facing. col = spriteIdx % 16, row = spriteIdx / 16. */
                short spriteCol = spriteIdx % 16;
                short spriteRow = spriteIdx / 16;
                GWorldPtr armyGW = (sArmyGW[0] != NULL) ? sArmyGW[0] : NULL;

                if (sArmyLoaded && armyGW != NULL) {
                    /* Blit army sprite from sprite sheet */
                    Rect srcRect, dstRect;
                    short srcX = spriteCol * 32;
                    short srcY = spriteRow * 32;
                    SetRect(&srcRect, srcX, srcY, srcX + 29, srcY + 32);
                    SetRect(&dstRect, screenX + 1, screenY - 1,
                            screenX + 30, screenY + 31);

                    LockPixels(GetGWorldPixMap(armyGW));
                    {
                        RGBColor savedBg;
                        GetBackColor(&savedBg);
                        RGBBackColor(&sArmyBgColor[0]);
                        CopyBits((BitMap *)*GetGWorldPixMap(armyGW),
                                 &((GrafPtr)win)->portBits,
                                 &srcRect, &dstRect,
                                 36, NULL);
                        RGBBackColor(&savedBg);
                    }
                    UnlockPixels(GetGWorldPixMap(armyGW));

                    /* Draw owner color indicator (small colored bar below sprite) */
                    {
                        Rect barRect;
                        RGBColor black = {0, 0, 0};
                        SetRect(&barRect, screenX + 4, screenY + TERRAIN_TILE_H - 6,
                                screenX + TERRAIN_TILE_W - 4, screenY + TERRAIN_TILE_H - 2);
                        RGBForeColor(&sPlayerColors[colorIdx]);
                        PaintRect(&barRect);
                        RGBForeColor(&black);
                        FrameRect(&barRect);
                    }
                } else {
                    /* No army sprites loaded — skip drawing */
                }
            }
        }
    }

    /* --- Draw army strength numbers --- */
    if (hasScn) {
        short armyCount = *(short *)(scnData + 0x1602);
        if (armyCount > 100) armyCount = 100;
        TextFont(3);
        TextSize(9);
        TextFace(bold);
        for (i = 0; i < armyCount; i++) {
            unsigned char *army = scnData + 0x1604 + i * 0x42;
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);
            short screenX, screenY;

            /* Skip invalid/empty army records */
            if (army[0x16] == 0xFF) continue;
            if (ax < 0 || ay < 0) continue;
            if (ax >= sMapWidth || ay >= sMapHeight) continue;

            screenX = winRect.left + (ax - sViewportX) * TERRAIN_TILE_W;
            screenY = winRect.top  + (ay - sViewportY) * TERRAIN_TILE_H;
            if (screenX >= winRect.left && screenX < winRect.right - SCROLLBAR_W &&
                screenY >= winRect.top && screenY < winRect.bottom - SCROLLBAR_H) {
                /* Check if this is the topmost army at this tile */
                short aj;
                Boolean isTop = true;
                for (aj = i + 1; aj < armyCount; aj++) {
                    unsigned char *a2 = scnData + 0x1604 + aj * 0x42;
                    if (*(short *)(a2 + 0x00) == ax && *(short *)(a2 + 0x02) == ay) {
                        isTop = false;
                        break;
                    }
                }
                if (isTop) {
                    short str = *(short *)(army + 0x2a);
                    Str255 sn;
                    RGBColor sBg = {0x0000, 0x0000, 0x0000};
                    RGBColor sFg = {0xFFFF, 0xFFFF, 0xFFFF};
                    NumToString((long)str, sn);
                    /* Draw with shadow for readability */
                    RGBForeColor(&sBg);
                    MoveTo(screenX + TERRAIN_TILE_W - StringWidth(sn) - 1, screenY + 9);
                    DrawString(sn);
                    RGBForeColor(&sFg);
                    MoveTo(screenX + TERRAIN_TILE_W - StringWidth(sn) - 2, screenY + 8);
                    DrawString(sn);
                }
            }
        }
        TextFace(0);
    }

    /* --- Draw defend mode indicators on defending armies --- */
    if (hasScn) {
        short armyCount = *(short *)(scnData + 0x1602);
        if (armyCount > 100) armyCount = 100;
        for (i = 0; i < armyCount; i++) {
            unsigned char *army = scnData + 0x1604 + i * 0x42;
            /* Skip invalid/empty army records */
            if (army[0x16] == 0xFF) continue;
            {
                short ax = *(short *)(army + 0x00);
                short ay = *(short *)(army + 0x02);
                if (ax < 0 || ay < 0 || ax >= sMapWidth || ay >= sMapHeight) continue;
            }
            if (army[0x2d] > 0) {
                /* Army is defending/fortified: draw shield indicator */
                short ax = *(short *)(army + 0x00);
                short ay = *(short *)(army + 0x02);
                short screenX = winRect.left + (ax - sViewportX) * TERRAIN_TILE_W;
                short screenY = winRect.top  + (ay - sViewportY) * TERRAIN_TILE_H;

                if (screenX >= winRect.left && screenX < winRect.right &&
                    screenY >= winRect.top && screenY < winRect.bottom) {
                    RGBColor shieldColor = {0x0000, 0x8888, 0xFFFF};
                    /* Small shield icon in top-right corner */
                    Rect shieldRect;
                    SetRect(&shieldRect, screenX + TERRAIN_TILE_W - 10,
                            screenY, screenX + TERRAIN_TILE_W - 2, screenY + 8);
                    RGBForeColor(&shieldColor);
                    PaintRect(&shieldRect);
                    {
                        RGBColor black = {0, 0, 0};
                        RGBForeColor(&black);
                        FrameRect(&shieldRect);
                    }
                }
            }
        }
    }

    /* --- Draw stack count badges (show when 2+ armies on same tile) --- */
    if (hasScn) {
        short armyCount = *(short *)(scnData + 0x1602);
        if (armyCount > 100) armyCount = 100;
        for (i = 0; i < armyCount; i++) {
            unsigned char *army = scnData + 0x1604 + i * 0x42;
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);
            short screenX = winRect.left + (ax - sViewportX) * TERRAIN_TILE_W;
            short screenY = winRect.top  + (ay - sViewportY) * TERRAIN_TILE_H;

            if (screenX >= winRect.left && screenX < winRect.right &&
                screenY >= winRect.top && screenY < winRect.bottom) {
                /* Count armies at this tile */
                short aj, stackCount = 0;
                for (aj = 0; aj < armyCount; aj++) {
                    unsigned char *a2 = scnData + 0x1604 + aj * 0x42;
                    if (*(short *)(a2 + 0x00) == ax && *(short *)(a2 + 0x02) == ay)
                        stackCount++;
                }
                /* Only draw badge for the first army at this location, and only if 2+ */
                if (stackCount >= 2) {
                    Boolean isFirst = true;
                    for (aj = 0; aj < i; aj++) {
                        unsigned char *a2 = scnData + 0x1604 + aj * 0x42;
                        if (*(short *)(a2 + 0x00) == ax && *(short *)(a2 + 0x02) == ay) {
                            isFirst = false;
                            break;
                        }
                    }
                    if (isFirst) {
                        Rect badge;
                        Str255 numStr;
                        RGBColor badgeBg = {0xFFFF, 0xFFFF, 0xFFFF};
                        RGBColor badgeTxt = {0x0000, 0x0000, 0x0000};
                        SetRect(&badge, screenX, screenY,
                                screenX + 10, screenY + 10);
                        RGBForeColor(&badgeBg);
                        PaintOval(&badge);
                        RGBForeColor(&badgeTxt);
                        FrameOval(&badge);
                        TextFont(3);
                        TextSize(9);
                        TextFace(bold);
                        MoveTo(screenX + 2, screenY + 9);
                        NumToString((long)stackCount, numStr);
                        DrawString(numStr);
                        TextFace(0);
                    }
                }
            }
        }
    }

    /* --- Draw movement range for selected army --- */
    if (sSelectedArmy >= 0 && hasScn) {
        short armyCount2 = *(short *)(scnData + 0x1602);
        if (sSelectedArmy < armyCount2) {
            unsigned char *selArmy2 = scnData + 0x1604 + sSelectedArmy * 0x42;
            short movePts2 = (short)(unsigned char)selArmy2[0x2e];
            short unitCls2 = (short)(unsigned char)selArmy2[0x16];
            short armyX2 = *(short *)(selArmy2 + 0x00);
            short armyY2 = *(short *)(selArmy2 + 0x02);

            if (movePts2 > 0) {
                /* BFS to find reachable tiles within movement range.
                 * Use a 32x32 local grid centered on the army. */
                #define MR_SIZE 32
                #define MR_HALF 16
                short mrCost[MR_SIZE * MR_SIZE]; /* remaining movement at each cell */
                short queueX[MR_SIZE * MR_SIZE];
                short queueY[MR_SIZE * MR_SIZE];
                short qHead = 0, qTail = 0;
                short mx2, my2;

                /* Initialize costs to -1 (unvisited) */
                for (mx2 = 0; mx2 < MR_SIZE * MR_SIZE; mx2++)
                    mrCost[mx2] = -1;

                /* Start BFS from army position */
                mrCost[MR_HALF * MR_SIZE + MR_HALF] = movePts2;
                queueX[qTail] = MR_HALF;
                queueY[qTail] = MR_HALF;
                qTail++;

                while (qHead < qTail) {
                    short cx2 = queueX[qHead];
                    short cy2 = queueY[qHead];
                    short curPts = mrCost[cy2 * MR_SIZE + cx2];
                    short dx2, dy2;
                    qHead++;

                    for (dy2 = -1; dy2 <= 1; dy2++) {
                        for (dx2 = -1; dx2 <= 1; dx2++) {
                            short nx2, ny2, mapX2, mapY2, cost2, newPts;
                            if (dx2 == 0 && dy2 == 0) continue;
                            nx2 = cx2 + dx2;
                            ny2 = cy2 + dy2;
                            if (nx2 < 0 || nx2 >= MR_SIZE || ny2 < 0 || ny2 >= MR_SIZE)
                                continue;
                            mapX2 = armyX2 + (nx2 - MR_HALF);
                            mapY2 = armyY2 + (ny2 - MR_HALF);
                            if (mapX2 < 0 || mapX2 >= sMapWidth ||
                                mapY2 < 0 || mapY2 >= sMapHeight)
                                continue;
                            cost2 = GetMovementCost(mapX2, mapY2, unitCls2);
                            if (cost2 <= 0) continue;
                            newPts = curPts - cost2;
                            if (newPts < 0) continue;
                            if (newPts <= mrCost[ny2 * MR_SIZE + nx2]) continue;
                            mrCost[ny2 * MR_SIZE + nx2] = newPts;
                            if (qTail < MR_SIZE * MR_SIZE) {
                                queueX[qTail] = nx2;
                                queueY[qTail] = ny2;
                                qTail++;
                            }
                        }
                    }
                }

                /* Draw reachable tiles with a dotted white border */
                {
                    RGBColor rangeCol = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBForeColor(&rangeCol);
                    PenPat(&qd.gray);
                }
                for (my2 = 0; my2 < MR_SIZE; my2++) {
                    for (mx2 = 0; mx2 < MR_SIZE; mx2++) {
                        if (mrCost[my2 * MR_SIZE + mx2] >= 0 &&
                            !(mx2 == MR_HALF && my2 == MR_HALF)) {
                            short mapX2 = armyX2 + (mx2 - MR_HALF);
                            short mapY2 = armyY2 + (my2 - MR_HALF);
                            short sx2 = winRect.left + (mapX2 - sViewportX) * TERRAIN_TILE_W;
                            short sy2 = winRect.top  + (mapY2 - sViewportY) * TERRAIN_TILE_H;
                            if (sx2 >= winRect.left && sx2 < winRect.right - SCROLLBAR_W &&
                                sy2 >= winRect.top && sy2 < winRect.bottom - SCROLLBAR_H) {
                                Rect mrRect;
                                SetRect(&mrRect, sx2, sy2,
                                        sx2 + TERRAIN_TILE_W, sy2 + TERRAIN_TILE_H);
                                FrameRect(&mrRect);
                            }
                        }
                    }
                }
                PenNormal();
                #undef MR_SIZE
                #undef MR_HALF
            }
        }
    }

    /* --- Draw blinking selection highlight around selected army --- */
    if (sSelectedArmy >= 0 && hasScn) {
        short armyCount = *(short *)(scnData + 0x1602);
        if (sSelectedArmy < armyCount) {
            unsigned char *selArmy = scnData + 0x1604 + sSelectedArmy * 0x42;
            short sx = *(short *)(selArmy + 0x00);
            short sy = *(short *)(selArmy + 0x02);
            short screenX = winRect.left + (sx - sViewportX) * TERRAIN_TILE_W;
            short screenY = winRect.top  + (sy - sViewportY) * TERRAIN_TILE_H;

            if (screenX >= winRect.left - TERRAIN_TILE_W &&
                screenX < winRect.right &&
                screenY >= winRect.top - TERRAIN_TILE_H &&
                screenY < winRect.bottom) {
                /* Blink: alternate every 15 ticks (~0.25 sec on/off) */
                unsigned long blinkPhase = (TickCount() / 15) & 1;
                if (blinkPhase) {
                    Rect selRect;
                    RGBColor selColor = {0xFFFF, 0xFFFF, 0x0000};
                    SetRect(&selRect, screenX, screenY,
                            screenX + TERRAIN_TILE_W, screenY + TERRAIN_TILE_H);
                    RGBForeColor(&selColor);
                    PenSize(2, 2);
                    FrameRect(&selRect);
                    PenSize(1, 1);
                }
            }

            /* Draw movement target indicator if army has orders */
            if (*(short *)(selArmy + 0x32) != 0) {
                short tx = *(short *)(selArmy + 0x34);
                short ty = *(short *)(selArmy + 0x36);
                short tScreenX = winRect.left + (tx - sViewportX) * TERRAIN_TILE_W;
                short tScreenY = winRect.top  + (ty - sViewportY) * TERRAIN_TILE_H;

                if (tScreenX >= winRect.left - TERRAIN_TILE_W &&
                    tScreenX < winRect.right &&
                    tScreenY >= winRect.top - TERRAIN_TILE_H &&
                    tScreenY < winRect.bottom) {
                    RGBColor targetColor = {0xFFFF, 0x6666, 0x0000};  /* orange */
                    Rect targetRect;
                    SetRect(&targetRect, tScreenX + 4, tScreenY + 4,
                            tScreenX + TERRAIN_TILE_W - 4,
                            tScreenY + TERRAIN_TILE_H - 4);
                    RGBForeColor(&targetColor);
                    PenSize(2, 2);
                    FrameRect(&targetRect);
                    PenSize(1, 1);
                    /* Draw X in target square */
                    MoveTo(targetRect.left, targetRect.top);
                    LineTo(targetRect.right, targetRect.bottom);
                    MoveTo(targetRect.right, targetRect.top);
                    LineTo(targetRect.left, targetRect.bottom);
                }

                /* Draw dotted path line from army center to target center */
                {
                    short armCX = screenX + TERRAIN_TILE_W / 2;
                    short armCY = screenY + TERRAIN_TILE_H / 2;
                    short tgtCX = tScreenX + TERRAIN_TILE_W / 2;
                    short tgtCY = tScreenY + TERRAIN_TILE_H / 2;
                    short dx = tgtCX - armCX;
                    short dy = tgtCY - armCY;
                    short steps, si;
                    RGBColor pathColor = {0xFFFF, 0xCCCC, 0x0000};

                    /* Determine step count from manhattan-ish distance */
                    steps = (dx < 0 ? -dx : dx) + (dy < 0 ? -dy : dy);
                    steps = steps / 6;
                    if (steps < 4) steps = 4;
                    if (steps > 80) steps = 80;

                    RGBForeColor(&pathColor);
                    for (si = 0; si < steps; si++) {
                        if (si % 2 == 0) {
                            short px = armCX + (dx * si) / steps;
                            short py = armCY + (dy * si) / steps;
                            Rect dot;
                            SetRect(&dot, px - 1, py - 1, px + 1, py + 1);
                            PaintRect(&dot);
                        }
                    }
                }
            }
        }
    }

    /* --- Draw city vectoring lines --- */
    if (hasScn && *gExtState != 0) {
        unsigned char *ext = (unsigned char *)*gExtState;
        short cityCount = *(short *)(scnData + 0x810);
        short curPlayer = *(short *)(scnData + 0x110);
        short ci;
        if (cityCount > 40) cityCount = 40;
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = scnData + 0x812 + ci * 0x20;
            unsigned char *extCity = ext + 0x24c + ci * 0x5c;
            short vTarget = *(short *)(extCity + 0x3e);
            if (*(short *)(city + 0x04) != curPlayer) continue;
            if (vTarget < 0 || vTarget >= cityCount || vTarget == ci) continue;
            {
                unsigned char *tgtCity = scnData + 0x812 + vTarget * 0x20;
                short cx1 = *(short *)(city + 0x00);
                short cy1 = *(short *)(city + 0x02);
                short cx2 = *(short *)(tgtCity + 0x00);
                short cy2 = *(short *)(tgtCity + 0x02);
                short sx1 = winRect.left + (cx1 - sViewportX) * TERRAIN_TILE_W + TERRAIN_TILE_W / 2;
                short sy1 = winRect.top  + (cy1 - sViewportY) * TERRAIN_TILE_H + TERRAIN_TILE_H / 2;
                short sx2 = winRect.left + (cx2 - sViewportX) * TERRAIN_TILE_W + TERRAIN_TILE_W / 2;
                short sy2 = winRect.top  + (cy2 - sViewportY) * TERRAIN_TILE_H + TERRAIN_TILE_H / 2;
                /* Only draw if at least one endpoint is visible */
                if ((sx1 >= winRect.left && sx1 < winRect.right - SCROLLBAR_W) ||
                    (sx2 >= winRect.left && sx2 < winRect.right - SCROLLBAR_W)) {
                    RGBColor vecColor = {0x8888, 0xFFFF, 0x8888};  /* light green */
                    short vi2, vSteps;
                    short vdx = sx2 - sx1, vdy = sy2 - sy1;
                    vSteps = ((vdx < 0 ? -vdx : vdx) + (vdy < 0 ? -vdy : vdy)) / 8;
                    if (vSteps < 3) vSteps = 3;
                    if (vSteps > 60) vSteps = 60;
                    RGBForeColor(&vecColor);
                    for (vi2 = 0; vi2 <= vSteps; vi2++) {
                        if (vi2 % 2 == 0) {
                            short px = sx1 + (vdx * vi2) / vSteps;
                            short py = sy1 + (vdy * vi2) / vSteps;
                            Rect dot;
                            SetRect(&dot, px - 1, py - 1, px + 1, py + 1);
                            PaintRect(&dot);
                        }
                    }
                    /* Arrow at target end */
                    {
                        Rect arrR;
                        SetRect(&arrR, sx2 - 3, sy2 - 3, sx2 + 3, sy2 + 3);
                        PaintOval(&arrR);
                    }
                }
            }
        }
    }

    /* --- Draw signpost markers on map --- */
    {
        short si;
        RGBColor spColor = {0xFFFF, 0xFFFF, 0x6666};
        RGBColor spBorder = {0x0000, 0x0000, 0x0000};
        TextFont(3);
        TextSize(9);
        TextFace(0);
        for (si = 0; si < sSignpostCount; si++) {
            if (!sSignposts[si].active) continue;
            {
                short sx = sSignposts[si].x;
                short sy = sSignposts[si].y;
                short screenX = winRect.left + (sx - sViewportX) * TERRAIN_TILE_W;
                short screenY = winRect.top  + (sy - sViewportY) * TERRAIN_TILE_H;
                if (screenX >= winRect.left - TERRAIN_TILE_W &&
                    screenX < winRect.right &&
                    screenY >= winRect.top - TERRAIN_TILE_H &&
                    screenY < winRect.bottom) {
                    /* Draw small flag icon */
                    Rect flagR;
                    SetRect(&flagR, screenX + TERRAIN_TILE_W - 10, screenY,
                            screenX + TERRAIN_TILE_W - 2, screenY + 8);
                    RGBForeColor(&spColor);
                    PaintRect(&flagR);
                    RGBForeColor(&spBorder);
                    FrameRect(&flagR);
                    /* Draw text label below */
                    if (sSignposts[si].text[0] != 0) {
                        Str255 pStr;
                        short tl;
                        for (tl = 0; tl < 31 && sSignposts[si].text[tl]; tl++)
                            pStr[tl + 1] = sSignposts[si].text[tl];
                        pStr[0] = (unsigned char)tl;
                        RGBForeColor(&spColor);
                        MoveTo(screenX + 2, screenY + TERRAIN_TILE_H + 8);
                        DrawString(pStr);
                    }
                }
            }
        }
    }

    /* --- Native Mac scrollbar controls --- */
    {
        /* Only update values, not position/size (those are set on create/resize) */
        if (sVScrollBar != NULL) {
            short maxV = sMapHeight > tilesHigh ? sMapHeight - tilesHigh : 0;
            SetControlMaximum(sVScrollBar, maxV);
            SetControlValue(sVScrollBar, sViewportY);
            Draw1Control(sVScrollBar);
        }
        if (sHScrollBar != NULL) {
            short maxH = sMapWidth > tilesWide ? sMapWidth - tilesWide : 0;
            SetControlMaximum(sHScrollBar, maxH);
            SetControlValue(sHScrollBar, sViewportX);
            Draw1Control(sHScrollBar);
        }

        /* Draw resize grip in the bottom-right corner (without DrawGrowIcon's
         * full-width frame lines that extend across the shield area) */
        {
            Rect fullPort = win->portRect;
            Rect corner;
            RGBColor gray = {0xCCCC, 0xCCCC, 0xCCCC};
            RGBColor black = {0x0000, 0x0000, 0x0000};
            SetRect(&corner, fullPort.right - SCROLLBAR_W, fullPort.bottom - SCROLLBAR_H,
                    fullPort.right, fullPort.bottom);
            RGBForeColor(&gray);
            PaintRect(&corner);
            RGBForeColor(&black);
            FrameRect(&corner);
            /* Draw diagonal grip lines */
            MoveTo(corner.right - 4, corner.bottom - 2);
            LineTo(corner.right - 2, corner.bottom - 4);
            MoveTo(corner.right - 8, corner.bottom - 2);
            LineTo(corner.right - 2, corner.bottom - 8);
            MoveTo(corner.right - 12, corner.bottom - 2);
            LineTo(corner.right - 2, corner.bottom - 12);
        }
    }

    /* --- Draw movement path for selected army (if has waypoint) --- */
    if (sSelectedArmy >= 0 && hasScn && scnData != NULL) {
        unsigned char *selA = scnData + 0x1604 + sSelectedArmy * 0x42;
        if (*(short *)(selA + 0x32) != 0) {
            /* Army has movement orders — draw dotted path to target */
            short sx = *(short *)(selA + 0x00);
            short sy = *(short *)(selA + 0x02);
            short tx = *(short *)(selA + 0x34);
            short ty = *(short *)(selA + 0x36);
            short px = sx, py = sy;
            short step;
            RGBColor pathCol = {0xFFFF, 0xFFFF, 0x0000};  /* yellow */
            RGBForeColor(&pathCol);

            for (step = 0; step < 60; step++) {
                short ddx = tx - px, ddy = ty - py;
                short stX = 0, stY = 0;
                short drawX, drawY;
                if (ddx > 0) stX = 1; else if (ddx < 0) stX = -1;
                if (ddy > 0) stY = 1; else if (ddy < 0) stY = -1;
                if (stX == 0 && stY == 0) break;
                px += stX;
                py += stY;

                /* Convert tile to screen coords */
                drawX = (px - sViewportX) * TERRAIN_TILE_W + TERRAIN_TILE_W / 2;
                drawY = (py - sViewportY) * TERRAIN_TILE_H + TERRAIN_TILE_H / 2;
                if (drawX < 0 || drawY < 0) continue;
                if (drawX >= win->portRect.right - SCROLLBAR_W) continue;
                if (drawY >= win->portRect.bottom - SCROLLBAR_H) continue;

                /* Draw small dot every tile (alternating for dashes) */
                if (step % 2 == 0) {
                    Rect dot;
                    SetRect(&dot, drawX - 1, drawY - 1, drawX + 2, drawY + 2);
                    PaintRect(&dot);
                }
            }

            /* Draw target marker (X) at destination */
            {
                short dX = (tx - sViewportX) * TERRAIN_TILE_W + TERRAIN_TILE_W / 2;
                short dY = (ty - sViewportY) * TERRAIN_TILE_H + TERRAIN_TILE_H / 2;
                if (dX > 0 && dY > 0 &&
                    dX < win->portRect.right - SCROLLBAR_W &&
                    dY < win->portRect.bottom - SCROLLBAR_H) {
                    RGBColor red = {0xFFFF, 0x3333, 0x3333};
                    RGBForeColor(&red);
                    PenSize(2, 2);
                    MoveTo(dX - 4, dY - 4); LineTo(dX + 4, dY + 4);
                    MoveTo(dX + 4, dY - 4); LineTo(dX - 4, dY + 4);
                    PenSize(1, 1);
                }
            }
        }
    }

    /* --- Draw shield strip + turn text in the bottom-left of the window --- */
    if (hasScn && scnData != NULL) {
        Rect fullPort = win->portRect;
        Rect shieldBar;
        short factionCount = *(short *)(scnData + 0x10C);
        short curPlayer = *(short *)(scnData + 0x110);
        short turn = *(short *)(scnData + 0x136);
        short fi, shieldX;
        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor black = {0x0000, 0x0000, 0x0000};
        Str255 numStr;

        if (factionCount < 1) factionCount = 1;
        if (factionCount > 8) factionCount = 8;

        /* White background for shield area (matches original) */
        SetRect(&shieldBar, fullPort.left, fullPort.bottom - SCROLLBAR_H,
                fullPort.left + SHIELD_AREA_W + 50, fullPort.bottom);
        RGBForeColor(&white);
        PaintRect(&shieldBar);

        /* "Turn N" text in black on white background */
        TextFont(3);
        TextSize(9);
        TextFace(bold);
        RGBForeColor(&black);
        MoveTo(fullPort.left + 3, fullPort.bottom - 4);
        DrawString(GetCachedString(STR_MISC, 12, "\pTurn "));
        NumToString((long)turn, numStr);
        DrawString(numStr);

        /* Small shields with gaps between them */
        shieldX = fullPort.left + 48;
        for (fi = 0; fi < factionCount; fi++) {
            Rect sR;

            if (fi == curPlayer) {
                /* Current player: thick black border (2px) around shield */
                Rect bR;
                SetRect(&bR, shieldX - 2, fullPort.bottom - SHIELD_ICON_H - 5,
                        shieldX + SHIELD_ICON_W + 2, fullPort.bottom - 1);
                RGBForeColor(&black);
                PaintRect(&bR);
            }

            SetRect(&sR, shieldX, fullPort.bottom - SHIELD_ICON_H - 3,
                    shieldX + SHIELD_ICON_W, fullPort.bottom - 3);

            if (sShieldsLoaded && sShieldIcons[fi] != NULL) {
                PlotCIcon(&sR, sShieldIcons[fi]);
            } else {
                /* Fallback: colored rectangle */
                RGBForeColor(&sPlayerColors[fi + 1]);
                PaintRect(&sR);
            }

            shieldX += SHIELD_ICON_W + SHIELD_GAP;
        }
    }
}


/* ===================================================================
 * DrawOverviewInWindow — Minimap using raw palette colors
 *
 * Matches the original game's minimap rendering: uses the raw terrain
 * index from map data as a direct index into the game color palette.
 * This is what the original BlitTerrainPixel() does.
 * =================================================================== */
static void DrawOverviewInWindow(WindowPtr win)
{
    unsigned char *mapData;
    Rect           r;
    short          x, y;

    if (!sMapLoaded || *gMapTiles == 0)
        return;

    mapData = (unsigned char *)*gMapTiles;
    r = win->portRect;

    /* Fill background black so unfilled areas don't show white */
    {
        RGBColor bg = {0x0000, 0x0000, 0x0000};
        RGBForeColor(&bg);
        PaintRect(&r);
    }

    /* Scale factor: 1 pixel per tile at small, 2px at medium/large */
    {
        short scale = (sMinimapZoom >= 1) ? 2 : 1;
        unsigned char *scnData = (*gGameState != 0) ? (unsigned char *)*gGameState : NULL;

        for (y = 0; y < sMapHeight && y * scale < (r.bottom - r.top); y++) {
            for (x = 0; x < sMapWidth && x * scale < (r.right - r.left); x++) {
                unsigned short tileOffset = y * 0xE0 + x * 2;
                unsigned char  terrainIdx = mapData[tileOffset];

                if (sMapColorLoaded && terrainIdx < MAPCOLOR_SIZE) {
                    /* Use per-tile MAPCOLOR index → minimap palette */
                    short colorIdx = (short)sMapColor[terrainIdx];
                    if (colorIdx >= MINIMAP_PAL_SIZE) colorIdx = 0;
                    RGBForeColor(&sMinimapPalette[colorIdx]);
                } else if (scnData != NULL) {
                    /* Fallback: terrain type lookup */
                    short terrainType = (short)(unsigned char)scnData[terrainIdx + 0x711];
                    if (terrainType >= NUM_TERRAIN_COLORS) terrainType = 0;
                    RGBForeColor(&sTerrainColors[terrainType]);
                } else {
                    RGBForeColor(&sMinimapPalette[10]); /* default green */
                }
                if (scale == 1) {
                    MoveTo(r.left + x, r.top + y);
                    LineTo(r.left + x, r.top + y);
                } else {
                    Rect px;
                    SetRect(&px, r.left + x * scale, r.top + y * scale,
                                 r.left + x * scale + scale, r.top + y * scale + scale);
                    PaintRect(&px);
                }
            }
        }

        /* Road overlay on minimap: tan pixels for road tiles */
        if (*gRoadData != 0) {
            unsigned char *roadData = (unsigned char *)*gRoadData;
            RGBColor roadMmColor = {0x9999, 0x5555, 0x2222};  /* reddish brown */
            short rdW = 112;  /* road buffer always 112 wide */
            short rdH = sMapHeight;
            short rx, ry;
            if (rdH > 156) rdH = 156;
            RGBForeColor(&roadMmColor);
            for (ry = 0; ry < rdH; ry++) {
                for (rx = 0; rx < rdW; rx++) {
                    if (roadData[ry * rdW + rx] != 0) {
                        if (scale == 1) {
                            MoveTo(r.left + rx, r.top + ry);
                            LineTo(r.left + rx, r.top + ry);
                        } else {
                            Rect rpx;
                            SetRect(&rpx, r.left + rx * scale, r.top + ry * scale,
                                         r.left + rx * scale + scale, r.top + ry * scale + scale);
                            PaintRect(&rpx);
                        }
                    }
                }
            }
        }

        /* Draw city/ruin dots on minimap from SCN site records at gs+0x812 */
        if (*gGameState != 0) {
            unsigned char *gs2 = (unsigned char *)*gGameState;
            short cityCount = *(short *)(gs2 + 0x810);
            short ci;
            if (cityCount > 40) cityCount = 40;

            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs2 + 0x812 + ci * 0x20;
                short cx = *(short *)(city + 0x00);
                short cy = *(short *)(city + 0x02);
                short owner = *(short *)(city + 0x04);
                short siteType = (short)(unsigned char)city[0x18];

                if (cx >= 0 && cx < sMapWidth && cy >= 0 && cy < sMapHeight) {
                    Rect dot;
                    if (siteType == 2 || siteType == 5 || siteType == 6) {
                        RGBColor ruinGray = {0x9999, 0x9999, 0x7777};
                        SetRect(&dot, r.left + cx * scale, r.top + cy * scale,
                                r.left + cx * scale + scale, r.top + cy * scale + scale);
                        RGBForeColor(&ruinGray);
                    } else {
                        short colorIdx = (owner >= 0 && owner < 8) ? owner + 1 : 8;
                        short dotSz = (scale == 1) ? 3 : 4;
                        SetRect(&dot, r.left + cx * scale - 1, r.top + cy * scale - 1,
                                r.left + cx * scale + dotSz - 1, r.top + cy * scale + dotSz - 1);
                        RGBForeColor(&sPlayerColors[colorIdx]);
                    }
                    PaintRect(&dot);
                }
            }
        }

        /* Draw army dots on minimap */
        if (*gGameState != 0) {
            unsigned char *gs2 = (unsigned char *)*gGameState;
            short armyCount = *(short *)(gs2 + 0x1602);
            short ai;
            if (armyCount > 100) armyCount = 100;

            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs2 + 0x1604 + ai * 0x42;
                short ax = *(short *)(army + 0x00);
                short ay = *(short *)(army + 0x02);
                short owner = (short)(unsigned char)army[0x15];
                short colorIdx = (owner >= 0 && owner < 8) ? owner + 1 : 0;

                if (ax >= 0 && ax < sMapWidth && ay >= 0 && ay < sMapHeight) {
                    RGBForeColor(&sPlayerColors[colorIdx]);
                    if (scale == 1) {
                        MoveTo(r.left + ax, r.top + ay);
                        LineTo(r.left + ax, r.top + ay);
                    } else {
                        Rect px;
                        SetRect(&px, r.left + ax * scale, r.top + ay * scale,
                                     r.left + ax * scale + scale, r.top + ay * scale + scale);
                        PaintRect(&px);
                    }
                }
            }
        }

        /* Draw viewport rectangle indicator */
        {
            Rect vpRect;
            short tilesWide = (((WindowPtr)*gMainGameWindow)->portRect.right -
                               ((WindowPtr)*gMainGameWindow)->portRect.left) / TERRAIN_TILE_W;
            short tilesHigh = (((WindowPtr)*gMainGameWindow)->portRect.bottom -
                               ((WindowPtr)*gMainGameWindow)->portRect.top) / TERRAIN_TILE_H;
            RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};

            SetRect(&vpRect,
                r.left + sViewportX * scale,
                r.top + sViewportY * scale,
                r.left + (sViewportX + tilesWide) * scale,
                r.top + (sViewportY + tilesHigh) * scale);

            RGBForeColor(&white);
            FrameRect(&vpRect);
        }

        /* Draw zoom toggle button (top-right corner of content area) */
        {
            Rect zoomBtn;
            RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
            RGBColor black = {0x0000, 0x0000, 0x0000};
            short bx = r.right - 13;
            short by = r.top + 2;
            SetRect(&zoomBtn, bx, by, bx + 11, by + 11);
            RGBForeColor(&white);
            PaintRect(&zoomBtn);
            RGBForeColor(&black);
            FrameRect(&zoomBtn);
            /* Inner box to indicate zoom */
            {
                Rect inner;
                SetRect(&inner, bx + 3, by + 3, bx + 9, by + 9);
                FrameRect(&inner);
            }
        }
    }
}


/* ===================================================================
 * ToggleMinimapZoom — cycle through 3 minimap zoom levels
 *
 * Small:  124x160, 1px/tile (default)
 * Medium: 180x220, 2px/tile
 * Large:  240x300, 2px/tile (more map visible)
 * =================================================================== */
static void ToggleMinimapZoom(void)
{
    WindowPtr overWin, infoWin;

    if (*gOverviewWindow == 0 || *gInfoWindow == 0)
        return;

    /* Get current overview window position for reference */
    overWin = (WindowPtr)*gOverviewWindow;
    infoWin = (WindowPtr)*gInfoWindow;

    sMinimapZoom = (sMinimapZoom + 1) % 3;

    {
        short newW, newH, infoTop;

        if (sMinimapZoom == 0) {
            /* Small: 1px/tile, sized to fit map */
            newW = sMapWidth;
            newH = sMapHeight;
            if (newW < 124) newW = 124;
            if (newH < 100) newH = 100;
            if (newW > 200) newW = 200;
            if (newH > 200) newH = 200;
        } else if (sMinimapZoom == 1) {
            /* Medium: 2px/tile, sized to fit map */
            newW = sMapWidth * 2;
            newH = sMapHeight * 2;
            if (newW > 300) newW = 300;
            if (newH > 350) newH = 350;
        } else {
            /* Large: sized to show entire map at 2px/tile */
            newW = sMapWidth * 2;
            newH = sMapHeight * 2;
            if (newW < 240) newW = 240;
            if (newH < 300) newH = 300;
            if (newW > 500) newW = 500;
            if (newH > 680) newH = 680;
        }

        SizeWindow(overWin, newW, newH, true);

        /* Info panel goes below minimap, moderate height */
        infoTop = 40 + newH + 2;
        MoveWindow(infoWin, 514, infoTop, false);
        SizeWindow(infoWin, newW, 160, true);
    }

    /* Force redraw of both windows */
    SetPort(overWin);
    InvalRect(&overWin->portRect);
    SetPort(infoWin);
    InvalRect(&infoWin->portRect);
}


/* ===================================================================
 * ShowHeroHire — Modal hero hire dialog
 *
 * Displays a hero offer with portrait (PICT 3200), name, stats,
 * and Hire / Don't Hire buttons.  Called at start of each human turn.
 * Returns true if the player hired the hero.
 *
 * Hero generation: random name from built-in list, stats scaled by
 * difficulty.  On hire, deducts gold and creates an army record.
 * =================================================================== */

/* ===================================================================
 * ShowCityInfo — Modal dialog showing city details
 *
 * Shows city name, owner, defense, income, and production info.
 * Allows renaming for owned cities.  cityIndex is the index into
 * the SCN city table at gs+0x812.
 * =================================================================== */
static void ShowCityInfo(short cityIndex)
{
    WindowPtr  cityWin;
    GWorldPtr  offscreen = NULL;
    Rect       winRect;
    Boolean    done = false;
    Rect       screenRect = qd.screenBits.bounds;
    unsigned char *gs;
    unsigned char *city;
    short      cityX, cityY, owner, defense, income;

    if (*gGameState == 0)
        return;

    gs = (unsigned char *)*gGameState;

    {
        short cityCount = *(short *)(gs + 0x810);
        if (cityIndex < 0 || cityIndex >= cityCount)
            return;
    }

    city = gs + 0x812 + cityIndex * 0x20;
    cityX   = *(short *)(city + 0x00);
    cityY   = *(short *)(city + 0x02);
    owner   = *(short *)(city + 0x04);
    defense = *(short *)(city + 0x06);
    income  = *(short *)(city + 0x08);

    /* Center 320x280 window */
    SetRect(&winRect,
        (screenRect.right - 320) / 2,
        (screenRect.bottom - 280) / 2,
        (screenRect.right - 320) / 2 + 320,
        (screenRect.bottom - 280) / 2 + 280);

    cityWin = NewCWindow(NULL, &winRect, "\p", true,
                          plainDBox, (WindowPtr)-1L, false, 0);
    if (cityWin == NULL)
        return;

    SetPort(cityWin);

    {
        Rect obounds;
        SetRect(&obounds, 0, 0, 320, 280);
        NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
    }

    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        unsigned long startTick = TickCount();

        while (!done) {
            EventRecord evt;

            if (needsRedraw) {
                Rect r;
                CGrafPtr savedPort;
                GDHandle savedDevice;
                SetRect(&r, 0, 0, 320, 280);

                if (offscreen != NULL) {
                    GetGWorld(&savedPort, &savedDevice);
                    SetGWorld(offscreen, NULL);
                    LockPixels(GetGWorldPixMap(offscreen));
                }

                /* Background: city PICT 3300 or marble fallback */
                {
                    PicHandle cityBg = GetPicture(3300);
                    if (cityBg) {
                        /* Tile the 128x128 PICT to fill the 320x280 dialog */
                        Rect tR;
                        short tx, ty;
                        for (ty = 0; ty < 280; ty += 128)
                            for (tx = 0; tx < 320; tx += 128) {
                                SetRect(&tR, tx, ty, tx + 128, ty + 128);
                                DrawPicture(cityBg, &tR);
                            }
                    } else {
                        DrawMarbleBackground(&r);
                    }
                }

                /* Owner-colored border */
                {
                    short colorIdx = (owner >= 0 && owner < 8) ? owner + 1 : 8;
                    RGBForeColor(&sPlayerColors[colorIdx]);
                    PenSize(3, 3);
                    FrameRect(&r);
                    PenSize(1, 1);
                }

                /* Owner shield */
                if (owner >= 0 && owner < 8) {
                    Rect shR;
                    SetRect(&shR, 260, 10, 260 + BIG_SHIELD_W, 10 + BIG_SHIELD_H);
                    DrawBigShield(owner, &shR);
                }

                /* Title: "City" */
                {
                    RGBColor gold = {0xFFFF, 0xCCCC, 0x3333};
                    RGBForeColor(&gold);
                    TextFont(2);
                    TextSize(18);
                    TextFace(bold);
                    MoveTo(20, 30);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 0, "\pCity"));
                }

                /* City name — from CTY resource, or faction name */
                {
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBForeColor(&white);
                    TextFont(2);
                    TextSize(14);
                    TextFace(bold);
                    MoveTo(20, 56);
                    if (cityIndex < sCityNameCount && sCityNames[cityIndex][0] != '\0') {
                        Str255 pName;
                        char *cn = sCityNames[cityIndex];
                        short nlen = 0;
                        while (nlen < MAX_CITY_NAME - 1 && cn[nlen] != '\0') nlen++;
                        pName[0] = (unsigned char)nlen;
                        BlockMoveData(cn, pName + 1, nlen);
                        DrawString(pName);
                    } else if (owner >= 0 && owner < 8) {
                        Str255 pName;
                        unsigned char *namePtr = gs + owner * 20;
                        short nlen = 0;
                        while (nlen < 20 && namePtr[nlen] != 0) nlen++;
                        pName[0] = (unsigned char)nlen;
                        BlockMoveData(namePtr, pName + 1, nlen);
                        DrawString(pName);
                        DrawString(GetCachedString(STR_CITY_DIALOG, 23, "\p City"));
                    } else {
                        DrawString(GetCachedString(STR_CITY_DIALOG, 24, "\pNeutral City"));
                    }
                }

                /* City feature icons (cicn 3300-3303) */
                {
                    short ic;
                    for (ic = 0; ic < 4; ic++) {
                        if (sCityTabIcons[ic]) {
                            Rect icR;
                            SetRect(&icR, 220 + ic * 22, 10, 236 + ic * 22, 26);
                            PlotCIcon(&icR, sCityTabIcons[ic]);
                        }
                    }
                }

                /* Stats */
                {
                    RGBColor labelColor = {0xAAAA, 0xAAAA, 0xAAAA};
                    RGBColor valueColor = {0xCCCC, 0xDDDD, 0xFFFF};
                    Str255 numStr;
                    short yBase = 86;

                    TextFont(3);
                    TextSize(10);
                    TextFace(0);

                    /* Location */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 1, "\pLocation:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase);
                    NumToString((long)cityX, numStr);
                    DrawString(numStr);
                    DrawString("\p, ");
                    NumToString((long)cityY, numStr);
                    DrawString(numStr);

                    /* Owner */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase + 20);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 2, "\pOwner:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase + 20);
                    if (owner >= 0 && owner < 8) {
                        Str255 pName;
                        unsigned char *namePtr = gs + owner * 20;
                        short nlen = 0;
                        while (nlen < 20 && namePtr[nlen] != 0) nlen++;
                        pName[0] = (unsigned char)nlen;
                        BlockMoveData(namePtr, pName + 1, nlen);
                        DrawString(pName);
                    } else {
                        DrawString(GetCachedString(STR_CITY_DIALOG, 8, "\pNeutral"));
                    }

                    /* Defense */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase + 40);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 3, "\pDefense:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase + 40);
                    NumToString((long)defense, numStr);
                    DrawString(numStr);

                    /* Income */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase + 60);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 4, "\pIncome:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase + 60);
                    NumToString((long)income, numStr);
                    DrawString(numStr);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 25, "\p gp/turn"));

                    /* Production status */
                    if (*gExtState != 0) {
                        unsigned char *ext = (unsigned char *)*gExtState;
                        unsigned char *extCity = ext + 0x24c + cityIndex * 0x5c;
                        short producing = *(short *)(extCity + 0x02);
                        short prodTurns = *(short *)(extCity + 0x58);

                        RGBForeColor(&labelColor);
                        MoveTo(30, yBase + 80);
                        DrawString(GetCachedString(STR_CITY_DIALOG, 5, "\pProducing:"));
                        RGBForeColor(&valueColor);
                        MoveTo(130, yBase + 80);
                        if (producing >= 0) {
                            Str255 prodName;
                            short totalTurns = GetProductionTurns(producing);
                            GetUnitTypeName(producing, prodName);
                            DrawString(prodName);
                            if (prodTurns > 0) {
                                DrawString(GetCachedString(STR_CITY_DIALOG, 32, "\p ("));
                                NumToString((long)prodTurns, numStr);
                                DrawString(numStr);
                                DrawString(GetCachedString(STR_CITY_DIALOG, 26, "\p turns)"));
                            } else {
                                DrawString(GetCachedString(STR_CITY_DIALOG, 27, "\p (ready)"));
                            }

                            /* Production progress bar */
                            if (totalTurns > 0) {
                                Rect trackR, fillR;
                                short elapsed = totalTurns - prodTurns;
                                short barW = 150;
                                short fillW;
                                RGBColor trackCol = {0x3333, 0x3333, 0x3333};
                                RGBColor fillCol = {0x3333, 0xBBBB, 0x3333};
                                RGBColor readyCol = {0x4444, 0xFFFF, 0x4444};
                                if (elapsed < 0) elapsed = 0;
                                if (elapsed > totalTurns) elapsed = totalTurns;
                                fillW = (elapsed * barW) / totalTurns;
                                SetRect(&trackR, 30, yBase + 88, 30 + barW, yBase + 96);
                                RGBForeColor(&trackCol);
                                PaintRoundRect(&trackR, 4, 4);
                                if (fillW > 0) {
                                    SetRect(&fillR, 30, yBase + 88, 30 + fillW, yBase + 96);
                                    RGBForeColor(prodTurns <= 0 ? &readyCol : &fillCol);
                                    PaintRoundRect(&fillR, 4, 4);
                                }
                                {
                                    RGBColor bdr = {0x6666, 0x6666, 0x6666};
                                    RGBForeColor(&bdr);
                                    FrameRoundRect(&trackR, 4, 4);
                                }
                            }
                        } else {
                            DrawString(GetCachedString(STR_CITY_DIALOG, 6, "\pNothing"));
                        }

                        /* Vectoring info */
                        {
                            short vectorCity = *(short *)(extCity + 0x3e);
                            if (vectorCity >= 0 && vectorCity != cityIndex) {
                                RGBForeColor(&labelColor);
                                MoveTo(30, yBase + 100);
                                DrawString(GetCachedString(STR_CITY_DIALOG, 7, "\pVectoring to:"));
                                RGBForeColor(&valueColor);
                                MoveTo(130, yBase + 100);
                                if (vectorCity < sCityNameCount &&
                                    sCityNames[vectorCity][0] != '\0') {
                                    Str255 pName;
                                    char *cn = sCityNames[vectorCity];
                                    short nlen2 = 0;
                                    while (nlen2 < MAX_CITY_NAME - 1 && cn[nlen2] != '\0') nlen2++;
                                    pName[0] = (unsigned char)nlen2;
                                    BlockMoveData(cn, pName + 1, nlen2);
                                    DrawString(pName);
                                } else {
                                    DrawString(GetCachedString(STR_CITY_DIALOG, 28, "\pCity #"));
                                    NumToString((long)vectorCity, numStr);
                                    DrawString(numStr);
                                }
                            }
                        }
                    }
                }

                /* OK button */
                {
                    RGBColor black = {0, 0, 0};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    Rect okBtn;
                    SetRect(&okBtn, 120, 244, 200, 266);
                    RGBForeColor(&white);
                    PaintRoundRect(&okBtn, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&okBtn, 8, 8);
                    PenSize(2, 2);
                    FrameRoundRect(&okBtn, 8, 8);
                    PenSize(1, 1);
                    TextFont(3);
                    TextSize(10);
                    TextFace(bold);
                    MoveTo(okBtn.left + 16, okBtn.bottom - 6);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                }

                /* Blit to window */
                if (offscreen != NULL) {
                    UnlockPixels(GetGWorldPixMap(offscreen));
                    SetGWorld(savedPort, savedDevice);
                    SetPort(cityWin);
                    CopyBits((BitMap *)*GetGWorldPixMap(offscreen),
                             &((GrafPtr)cityWin)->portBits,
                             &r, &cityWin->portRect,
                             srcCopy, NULL);
                }

                needsRedraw = false;
            }

            WaitNextEvent(everyEvent, &evt, 30, NULL);

            if (evt.what == mouseDown) {
                Point localPt = evt.where;
                Rect okBtn;
                SetPort(cityWin);
                GlobalToLocal(&localPt);
                SetRect(&okBtn, 120, 244, 200, 266);
                if (PtInRect(localPt, &okBtn))
                    done = true;
            }
            else if (evt.what == keyDown) {
                char key = evt.message & charCodeMask;
                if ((TickCount() - startTick) < 30)
                    continue;
                if (key == 0x0D || key == 0x03 || key == 0x1B)
                    done = true;
            }
            else if (evt.what == updateEvt) {
                needsRedraw = true;
            }
        }
    }

    if (offscreen != NULL)
        DisposeGWorld(offscreen);
    DisposeWindow(cityWin);
}


/* ===================================================================
 * ShowArmyInspect — Modal dialog showing army stack details
 *
 * Shows each unit in the army (up to 4), with type, strength,
 * movement, experience, and bonus.  armyIndex is the index into
 * the army table at gs+0x1604.
 * =================================================================== */
static void ShowArmyInspect(short armyIndex)
{
    WindowPtr  inspWin;
    GWorldPtr  offscreen = NULL;
    Rect       winRect;
    Boolean    done = false;
    Rect       screenRect = qd.screenBits.bounds;
    unsigned char *gs, *army;
    short      armyCount;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    armyCount = *(short *)(gs + 0x1602);
    if (armyIndex < 0 || armyIndex >= armyCount) return;

    army = gs + 0x1604 + armyIndex * 0x42;

    /* Block inspecting enemy armies when View Enemies is off */
    if (!sOptViewEnemies) {
        short armOwner = (short)(unsigned char)army[0x15];
        short curP = *(short *)(gs + 0x110);
        if (armOwner != curP) {
            ShowBriefMessage("\pCannot inspect enemy armies");
            return;
        }
    }

    /* Center 350x260 window */
    SetRect(&winRect,
        (screenRect.right - 350) / 2,
        (screenRect.bottom - 260) / 2,
        (screenRect.right - 350) / 2 + 350,
        (screenRect.bottom - 260) / 2 + 260);

    inspWin = NewCWindow(NULL, &winRect, "\p", true,
                          plainDBox, (WindowPtr)-1L, false, 0);
    if (inspWin == NULL) return;

    SetPort(inspWin);
    {
        Rect obounds;
        SetRect(&obounds, 0, 0, 350, 260);
        NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
    }

    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        unsigned long startTick = TickCount();

        while (!done) {
            EventRecord evt;

            if (needsRedraw) {
                Rect r;
                CGrafPtr savedPort;
                GDHandle savedDevice;
                short ui;
                SetRect(&r, 0, 0, 350, 260);

                if (offscreen != NULL) {
                    GetGWorld(&savedPort, &savedDevice);
                    SetGWorld(offscreen, NULL);
                    LockPixels(GetGWorldPixMap(offscreen));
                }

                /* Dark background */
                {
                    DrawMarbleBackground(&r);
                }

                /* Owner-colored border */
                {
                    short owner = (short)(unsigned char)army[0x15];
                    short colorIdx = (owner >= 0 && owner < 8) ? owner + 1 : 8;
                    RGBForeColor(&sPlayerColors[colorIdx]);
                    PenSize(3, 3);
                    FrameRect(&r);
                    PenSize(1, 1);
                }

                /* Title: army name */
                {
                    RGBColor gold = {0xFFFF, 0xCCCC, 0x3333};
                    Str255 pName;
                    short nlen = 0;
                    RGBForeColor(&gold);
                    TextFont(2);
                    TextSize(16);
                    TextFace(bold);
                    MoveTo(20, 26);
                    while (nlen < 16 && army[0x04 + nlen] != 0) nlen++;
                    if (nlen > 0) {
                        pName[0] = (unsigned char)nlen;
                        BlockMoveData(army + 0x04, pName + 1, nlen);
                        DrawString(pName);
                    } else {
                        DrawString(GetCachedString(STR_STACK_INFO, 0, "\pArmy Stack"));
                    }
                }

                /* Army strength */
                {
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    Str255 numStr;
                    RGBForeColor(&white);
                    TextFont(3);
                    TextSize(10);
                    TextFace(0);
                    MoveTo(200, 26);
                    DrawString(GetCachedString(STR_STACK_INFO, 1, "\pStrength: "));
                    NumToString((long)*(short *)(army + 0x2a), numStr);
                    DrawString(numStr);
                }

                /* Column headers */
                {
                    RGBColor labelColor = {0xAAAA, 0xAAAA, 0xAAAA};
                    RGBForeColor(&labelColor);
                    TextFont(3);
                    TextSize(9);
                    TextFace(bold);
                    MoveTo(20, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 2, "\pSlot"));
                    MoveTo(60, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 3, "\pType"));
                    MoveTo(110, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 4, "\pStr"));
                    MoveTo(150, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 5, "\pMov"));
                    MoveTo(190, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 6, "\pHP"));
                    MoveTo(230, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 7, "\pBonus"));
                    MoveTo(280, 48);
                    DrawString(GetCachedString(STR_STACK_INFO, 8, "\pXP"));
                }

                /* Separator line */
                {
                    RGBColor gray = {0x6666, 0x6666, 0x6666};
                    RGBForeColor(&gray);
                    MoveTo(15, 52);
                    LineTo(335, 52);
                }

                /* Unit slots (up to 4) */
                TextFace(0);
                for (ui = 0; ui < 4; ui++) {
                    short yPos = 68 + ui * 36;
                    unsigned char unitType = army[0x16 + ui];
                    unsigned char unitMoves = army[0x1a + ui];
                    unsigned char unitHits = army[0x1e + ui];
                    unsigned char unitBonus = army[0x22 + ui];
                    unsigned char unitExp = army[0x26 + ui];
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBColor dim = {0x5555, 0x5555, 0x5555};
                    Str255 numStr;

                    if (unitType == 0xFF) {
                        /* Empty slot */
                        RGBForeColor(&dim);
                        MoveTo(20, yPos);
                        NumToString((long)(ui + 1), numStr);
                        DrawString(numStr);
                        MoveTo(60, yPos);
                        DrawString(GetCachedString(STR_STACK_INFO, 9, "\p(empty)"));
                        continue;
                    }

                    RGBForeColor(&white);

                    /* Slot number */
                    MoveTo(20, yPos);
                    NumToString((long)(ui + 1), numStr);
                    DrawString(numStr);

                    /* Unit type */
                    MoveTo(60, yPos);
                    {
                        Str255 typeName;
                        GetUnitTypeName((short)unitType, typeName);
                        DrawString(typeName);
                    }

                    /* Stats */
                    MoveTo(110, yPos);
                    NumToString((long)unitHits, numStr);
                    DrawString(numStr);

                    MoveTo(150, yPos);
                    NumToString((long)unitMoves, numStr);
                    DrawString(numStr);

                    MoveTo(190, yPos);
                    NumToString((long)unitHits, numStr);
                    DrawString(numStr);

                    MoveTo(230, yPos);
                    if (unitBonus > 0) {
                        DrawString("\p+");
                        NumToString((long)unitBonus, numStr);
                        DrawString(numStr);
                    } else {
                        DrawString("\p-");
                    }

                    MoveTo(280, yPos);
                    NumToString((long)unitExp, numStr);
                    DrawString(numStr);
                }

                /* OK button */
                {
                    RGBColor black = {0, 0, 0};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    Rect okBtn;
                    SetRect(&okBtn, 135, 224, 215, 246);
                    RGBForeColor(&white);
                    PaintRoundRect(&okBtn, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&okBtn, 8, 8);
                    PenSize(2, 2);
                    FrameRoundRect(&okBtn, 8, 8);
                    PenSize(1, 1);
                    TextFont(3);
                    TextSize(10);
                    TextFace(bold);
                    MoveTo(okBtn.left + 16, okBtn.bottom - 6);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                }

                /* Blit */
                if (offscreen != NULL) {
                    UnlockPixels(GetGWorldPixMap(offscreen));
                    SetGWorld(savedPort, savedDevice);
                    SetPort(inspWin);
                    CopyBits((BitMap *)*GetGWorldPixMap(offscreen),
                             &((GrafPtr)inspWin)->portBits,
                             &r, &inspWin->portRect,
                             srcCopy, NULL);
                }
                needsRedraw = false;
            }

            WaitNextEvent(everyEvent, &evt, 30, NULL);

            if (evt.what == mouseDown) {
                Point localPt = evt.where;
                Rect okBtn;
                SetPort(inspWin);
                GlobalToLocal(&localPt);
                SetRect(&okBtn, 135, 224, 215, 246);
                if (PtInRect(localPt, &okBtn))
                    done = true;
            }
            else if (evt.what == keyDown) {
                char key = evt.message & charCodeMask;
                if ((TickCount() - startTick) < 30) continue;
                if (key == 0x0D || key == 0x03 || key == 0x1B)
                    done = true;
            }
            else if (evt.what == updateEvt) {
                needsRedraw = true;
            }
        }
    }

    if (offscreen != NULL)
        DisposeGWorld(offscreen);
    DisposeWindow(inspWin);
}


/* ===================================================================
 * SelectNextArmy — Cycle to next unfinished army for current player
 *
 * Implements "Next Group" (Cmd+N).  Starts from current selection
 * and wraps around to find an army owned by the current player
 * that hasn't moved yet this turn.
 * =================================================================== */
static void SelectNextArmy(void)
{
    unsigned char *gs;
    short currentPlayer, armyCount, startIdx, idx, checked;

    if (*gGameState == 0)
        return;

    gs = (unsigned char *)*gGameState;
    currentPlayer = *(short *)(gs + 0x110);
    armyCount = *(short *)(gs + 0x1602);
    if (armyCount <= 0 || armyCount > 100)
        return;

    startIdx = (sSelectedArmy >= 0) ? (sSelectedArmy + 1) % armyCount : 0;

    /* First pass: find army with remaining movement points, not defending */
    for (checked = 0; checked < armyCount; checked++) {
        idx = (startIdx + checked) % armyCount;
        {
            unsigned char *army = gs + 0x1604 + idx * 0x42;
            short owner = (short)(unsigned char)army[0x15];
            short movePts = (short)(unsigned char)army[0x2e];
            short hasOrders = *(short *)(army + 0x32);
            short fortified = army[0x2d];

            if (owner == currentPlayer && movePts > 0 &&
                hasOrders == 0 && fortified == 0) {
                goto selectArmy;
            }
        }
    }

    /* Second pass: any army owned by current player */
    for (checked = 0; checked < armyCount; checked++) {
        idx = (startIdx + checked) % armyCount;
        {
            unsigned char *army = gs + 0x1604 + idx * 0x42;
            short owner = (short)(unsigned char)army[0x15];

            if (owner == currentPlayer) {
                goto selectArmy;
            }
        }
    }
    return;

selectArmy:
    {
        unsigned char *army = gs + 0x1604 + idx * 0x42;
        sSelectedArmy = idx;

        /* Center viewport on selected army */
        {
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);
            short tilesWide = 10, tilesHigh = 10;

            if (*gMainGameWindow != 0) {
                Rect p = ((WindowPtr)*gMainGameWindow)->portRect;
                tilesWide = (p.right - p.left - SCROLLBAR_W) / TERRAIN_TILE_W;
                tilesHigh = (p.bottom - p.top - SCROLLBAR_H) / TERRAIN_TILE_H;
            }
            sViewportX = ax - tilesWide / 2;
            sViewportY = ay - tilesHigh / 2;
            if (sViewportX < 0) sViewportX = 0;
            if (sViewportY < 0) sViewportY = 0;
            if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
            if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
        }

        /* Redraw */
        if (*gMainGameWindow != 0) {
            SetPort((WindowPtr)*gMainGameWindow);
            InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
        }
        if (*gOverviewWindow != 0) {
            SetPort((WindowPtr)*gOverviewWindow);
            InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
        }
    }
}


/* Forward declarations */
static void RemoveArmy(short armyIndex);
static void GetHeroItemBonus(short armyIdx, short *outBattle, short *outCommand,
                             short *outGold, Boolean *outFlying, Boolean *outDoubleMove);
static Boolean GiveItemToHero(short armyIdx, short itemId);
static void ShowCityProductionDialog(short cityIndex);
static void CheckQuestProgress(short player);
static short GetHeroLevel(short xp);
static Boolean IsHeroFemale(short armyIdx);
static void GetHeroTitle(short level, Boolean female, Str255 out);

/* ===================================================================
 * TryMergeArmies — Merge movingArmy into a friendly army at same tile.
 *
 * Transfers units from movingArmy into empty slots of target army.
 * If all units transferred, removes movingArmy.
 * Returns true if movingArmy was removed (fully merged).
 * =================================================================== */
static Boolean TryMergeArmies(short movingIdx)
{
    unsigned char *gs, *movArmy, *tgtArmy;
    short armyCount, mx, my, mOwner, i, slot, tgtSlot;

    if (*gGameState == 0) return false;
    gs = (unsigned char *)*gGameState;
    armyCount = *(short *)(gs + 0x1602);
    if (armyCount > 100) armyCount = 100;
    if (movingIdx < 0 || movingIdx >= armyCount) return false;

    movArmy = gs + 0x1604 + movingIdx * 0x42;
    mx = *(short *)(movArmy + 0x00);
    my = *(short *)(movArmy + 0x02);
    mOwner = (short)(unsigned char)movArmy[0x15];

    /* Find first friendly army at same location (not self) */
    for (i = 0; i < armyCount; i++) {
        if (i == movingIdx) continue;
        tgtArmy = gs + 0x1604 + i * 0x42;
        if (*(short *)(tgtArmy + 0x00) == mx &&
            *(short *)(tgtArmy + 0x02) == my &&
            (short)(unsigned char)tgtArmy[0x15] == mOwner) {

            /* Try to transfer units from moving to target */
            for (slot = 0; slot < 4; slot++) {
                if (movArmy[0x16 + slot] == 0xFF && movArmy[0x1e + slot] == 0)
                    continue;  /* empty slot in moving army */

                /* Find empty slot in target army */
                for (tgtSlot = 0; tgtSlot < 4; tgtSlot++) {
                    if (tgtArmy[0x16 + tgtSlot] == 0xFF ||
                        (tgtArmy[0x16 + tgtSlot] == 0 && tgtArmy[0x1e + tgtSlot] == 0)) {
                        /* Transfer unit */
                        tgtArmy[0x16 + tgtSlot] = movArmy[0x16 + slot];
                        tgtArmy[0x1a + tgtSlot] = movArmy[0x1a + slot];
                        tgtArmy[0x1e + tgtSlot] = movArmy[0x1e + slot];
                        tgtArmy[0x22 + tgtSlot] = movArmy[0x22 + slot];
                        tgtArmy[0x26 + tgtSlot] = movArmy[0x26 + slot];
                        /* Mark source slot as empty */
                        movArmy[0x16 + slot] = 0xFF;
                        movArmy[0x1e + slot] = 0;
                        break;
                    }
                }
            }

            /* Recalculate target army strength */
            {
                short str = 0;
                for (tgtSlot = 0; tgtSlot < 4; tgtSlot++) {
                    if (tgtArmy[0x16 + tgtSlot] != 0xFF || tgtArmy[0x1e + tgtSlot] > 0)
                        str += (short)(unsigned char)tgtArmy[0x1e + tgtSlot];
                }
                *(short *)(tgtArmy + 0x2a) = str;
            }

            /* Check if moving army is now empty */
            {
                Boolean allEmpty = true;
                for (slot = 0; slot < 4; slot++) {
                    if (movArmy[0x16 + slot] != 0xFF || movArmy[0x1e + slot] > 0) {
                        allEmpty = false;
                        break;
                    }
                }
                if (allEmpty) {
                    RemoveArmy(movingIdx);
                    return true;
                }
            }

            /* Recalculate moving army strength if partial transfer */
            {
                short str = 0;
                for (slot = 0; slot < 4; slot++) {
                    if (movArmy[0x16 + slot] != 0xFF || movArmy[0x1e + slot] > 0)
                        str += (short)(unsigned char)movArmy[0x1e + slot];
                }
                *(short *)(movArmy + 0x2a) = str;
            }
            return false;
        }
    }
    return false;
}


/* ===================================================================
 * GetMovementCost — Returns movement point cost to enter a map tile.
 *
 * Uses terrain properties table (gs+0x711) and movement cost table
 * (gs+0x60C).  unitClass is the army's primary unit type (0-28).
 * Returns 0 if impassable, otherwise 1-4 movement points.
 * =================================================================== */
static short GetMovementCost(short mapX, short mapY, short unitClass)
{
    unsigned char *gs, *mapData;
    unsigned char terrainIdx, terrainType;
    short cost;

    if (*gGameState == 0 || *gMapTiles == 0)
        return 1;
    if (mapX < 0 || mapX >= sMapWidth || mapY < 0 || mapY >= sMapHeight)
        return 0;

    gs = (unsigned char *)*gGameState;
    mapData = (unsigned char *)*gMapTiles;

    terrainIdx = mapData[mapY * 0xE0 + mapX * 2];
    terrainType = gs[terrainIdx + 0x711];

    /* Clamp terrain type to 0-8 (9 terrain types) */
    if (terrainType > 8) {
        /* Special types: 10=road (fast), 11=water (impassable for land) */
        if (terrainType == 10) return 1;  /* road: cheap */
        if (terrainType == 11) {
            /* Water: passable for naval units (type 5), impassable for others */
            if (unitClass == 5 || unitClass == 0x1C) return 2;  /* naval/hero-with-flying */
            return 0;  /* impassable for land units */
        }
        return 2;  /* unknown: moderate */
    }

    /* Clamp unit class */
    if (unitClass < 0 || unitClass > 28) unitClass = 0;

    cost = (short)(unsigned char)gs[terrainType * 0x1d + unitClass + 0x60c];
    if (cost == 0) return 0;  /* impassable */
    /* Movement costs up to 28 are valid in the original game */

    /* Road overlay bonus: if road data exists and this tile has a road,
     * reduce cost to 1 (roads make travel faster through rough terrain) */
    if (cost > 1 && *gRoadData != 0) {
        unsigned char *roadData = (unsigned char *)*gRoadData;
        if (mapX < 112 && mapY < 156 && roadData[mapY * 112 + mapX] != 0)
            cost = 1;
    }

    return cost;
}



/* ===================================================================
 * RemoveArmy — Remove an army from the army list by shifting later
 * entries down.  Adjusts sSelectedArmy if needed.
 * =================================================================== */
static void RemoveArmy(short armyIndex)
{
    unsigned char *gs;
    short armyCount, j;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    armyCount = *(short *)(gs + 0x1602);
    if (armyIndex < 0 || armyIndex >= armyCount) return;

    /* Shift all armies after this one down by one slot */
    for (j = armyIndex; j < armyCount - 1; j++) {
        unsigned char *dst = gs + 0x1604 + j * 0x42;
        unsigned char *src = gs + 0x1604 + (j + 1) * 0x42;
        short k;
        for (k = 0; k < 0x42; k++)
            dst[k] = src[k];
    }
    *(short *)(gs + 0x1602) = armyCount - 1;

    /* Fix selected army reference */
    if (sSelectedArmy == armyIndex)
        sSelectedArmy = -1;
    else if (sSelectedArmy > armyIndex)
        sSelectedArmy--;
}


/* ===================================================================
 * ResolveCombat — Auto-resolve combat between attacker and defender
 *
 * Called when an army moves onto a tile occupied by an enemy army.
 * Uses simplified Warlords II combat: each unit in the attacker
 * fights each unit in the defender based on strength + random roll.
 * Shows a result dialog summarizing the battle.
 * Returns: 1 = attacker wins, 0 = defender wins, -1 = mutual destruction
 * =================================================================== */
static short ResolveCombat(short attackerIdx, short defenderIdx)
{
    unsigned char *gs, *attArmy, *defArmy;
    short attSlots, defSlots, attStrength, defStrength;
    short attHits[4], defHits[4];
    short attType[4], defType[4];
    short attOrigType[4], defOrigType[4];
    short attOrigHits[4], defOrigHits[4];
    short i, round;
    short attAlive, defAlive;
    short result;
    long attTotal, defTotal;
    long rng;

    /* Modal result dialog variables */
    WindowPtr combatWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean combatDone;
    EventRecord combatEvt;

    if (*gGameState == 0) return -1;
    gs = (unsigned char *)*gGameState;
    attArmy = gs + 0x1604 + attackerIdx * 0x42;
    defArmy = gs + 0x1604 + defenderIdx * 0x42;

    /* Gather unit stats: count active slots, sum strength */
    attSlots = 0;
    defSlots = 0;
    attTotal = 0;
    defTotal = 0;

    for (i = 0; i < 4; i++) {
        attType[i] = (short)(unsigned char)attArmy[0x16 + i];
        attHits[i] = (short)(unsigned char)attArmy[0x1e + i];
        attOrigType[i] = attType[i];
        attOrigHits[i] = attHits[i];
        if (attType[i] != 0xFF && attHits[i] > 0) {
            attSlots++;
            attTotal += (short)(unsigned char)attArmy[0x1e + i] +
                        (short)(unsigned char)attArmy[0x22 + i];
        }

        defType[i] = (short)(unsigned char)defArmy[0x16 + i];
        defHits[i] = (short)(unsigned char)defArmy[0x1e + i];
        defOrigType[i] = defType[i];
        defOrigHits[i] = defHits[i];
        if (defType[i] != 0xFF && defHits[i] > 0) {
            defSlots++;
            defTotal += (short)(unsigned char)defArmy[0x1e + i] +
                        (short)(unsigned char)defArmy[0x22 + i];
        }
    }

    if (attSlots == 0 || defSlots == 0)
        return (attSlots > 0) ? 1 : ((defSlots > 0) ? 0 : -1);

    /* Terrain defense bonus for defender */
    if (*gMapTiles != 0) {
        short defX = *(short *)(defArmy + 0x00);
        short defY = *(short *)(defArmy + 0x02);
        if (defX >= 0 && defX < sMapWidth && defY >= 0 && defY < sMapHeight) {
            unsigned char *tile = (unsigned char *)*gMapTiles + defY * 0xE0 + defX * 2;
            unsigned char terrIdx = tile[0];
            /* Forest/hills/mountains give defender +1 to +3 HP */
            if (terrIdx >= 20 && terrIdx < 40)       /* forest-like */
                defTotal += 2;
            else if (terrIdx >= 40 && terrIdx < 60)   /* hills-like */
                defTotal += 3;
            else if (terrIdx >= 60 && terrIdx < 80)   /* mountain-like */
                defTotal += 5;
        }
    }

    /* Fortification bonus: if defender is fortified, +3 defense */
    if (defArmy[0x2d] > 0)
        defTotal += 3;

    /* City defense bonus: if defender is in a city, +4 defense */
    {
        short defX = *(short *)(defArmy + 0x00);
        short defY = *(short *)(defArmy + 0x02);
        short cityCount = *(short *)(gs + 0x810);
        short ci;
        if (cityCount > 40) cityCount = 40;
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            if (*(short *)(city + 0x00) == defX &&
                *(short *)(city + 0x02) == defY) {
                defTotal += 4 + *(short *)(city + 0x06);  /* +4 + city defense */
                break;
            }
        }
    }

    /* Hero item bonuses: battle items boost hero, command items boost all */
    {
        short battleB, cmdB, goldB;
        Boolean flyB, moveB;

        /* Attacker items */
        GetHeroItemBonus(attackerIdx, &battleB, &cmdB, &goldB, &flyB, &moveB);
        attTotal += battleB + cmdB;  /* battle + command bonuses */

        /* Defender items */
        GetHeroItemBonus(defenderIdx, &battleB, &cmdB, &goldB, &flyB, &moveB);
        defTotal += battleB + cmdB;
    }

    /* Combat rounds: each round, one attacker unit fights one defender unit.
     * Strength comparison with random factor (d6). Higher total wins the round,
     * loser loses 1 HP. Repeat until one side is eliminated. */
    for (round = 0; round < 200; round++) {
        short ai = -1, di = -1;

        /* Pick first alive attacker and defender */
        for (i = 0; i < 4; i++) {
            if (attType[i] != 0xFF && attHits[i] > 0 && ai < 0) ai = i;
            if (defType[i] != 0xFF && defHits[i] > 0 && di < 0) di = i;
        }
        if (ai < 0 || di < 0) break;

        /* Roll: strength + bonus + d6 */
        rng = (long)(TickCount() & 0x7FFF);
        attStrength = attHits[ai] + (short)(unsigned char)attArmy[0x22 + ai]
                      + (short)(rng % 6) + 1;
        defStrength = defHits[di] + (short)(unsigned char)defArmy[0x22 + di]
                      + (short)((rng / 7) % 6) + 1;

        /* Add terrain/city bonus spread across rounds */
        if (round == 0) {
            defStrength += (short)(defTotal - (defSlots *
                ((short)(unsigned char)defArmy[0x1e + di] +
                 (short)(unsigned char)defArmy[0x22 + di])));
        }

        if (attStrength >= defStrength) {
            defHits[di]--;
            if (defHits[di] <= 0)
                defType[di] = 0xFF;  /* unit killed */
        } else {
            attHits[ai]--;
            if (attHits[ai] <= 0)
                attType[ai] = 0xFF;  /* unit killed */
        }
    }

    /* Count survivors */
    attAlive = 0;
    defAlive = 0;
    for (i = 0; i < 4; i++) {
        if (attType[i] != 0xFF && attHits[i] > 0) attAlive++;
        if (defType[i] != 0xFF && defHits[i] > 0) defAlive++;
    }

    if (attAlive > 0 && defAlive == 0) result = 1;
    else if (defAlive > 0 && attAlive == 0) result = 0;
    else if (attAlive == 0 && defAlive == 0) result = -1;
    else result = (attAlive >= defAlive) ? 1 : 0;  /* shouldn't happen */

    /* Write surviving HP back to winner's army */
    if (result == 1) {
        for (i = 0; i < 4; i++) {
            attArmy[0x16 + i] = (unsigned char)(attType[i] & 0xFF);
            attArmy[0x1e + i] = (unsigned char)(attHits[i] > 0 ? attHits[i] : 0);
            /* XP gain for survivors: +1 XP per battle won, bonus at every 3 XP */
            if (attType[i] != 0xFF && attHits[i] > 0) {
                short xp = (short)(unsigned char)attArmy[0x26 + i];
                short oldHeroLvl = GetHeroLevel(xp);
                short oldLevel = xp / 3;
                if (xp < 15) {
                    xp++;
                    attArmy[0x26 + i] = (unsigned char)xp;
                    /* Level up: gain +1 combat bonus */
                    if (xp / 3 > oldLevel) {
                        short bonus = (short)(unsigned char)attArmy[0x22 + i];
                        if (bonus < 8) attArmy[0x22 + i] = (unsigned char)(bonus + 1);
                    }
                    /* Hero title promotion notification */
                    if (attType[i] == 0x1C && GetHeroLevel(xp) > oldHeroLvl) {
                        short newLvl = GetHeroLevel(xp);
                        short attOwn = (short)(unsigned char)attArmy[0x15];
                        if (*(short *)((unsigned char *)*gGameState + 0xd0 + attOwn * 2) == 0) {
                            WindowPtr lvWin;
                            Rect lvR;
                            SetRect(&lvR, 0, 0, 300, 90);
                            OffsetRect(&lvR, 170, 200);
                            lvWin = NewCWindow(NULL, &lvR, "\p", true,
                                               plainDBox, (WindowPtr)-1, false, 0);
                            if (lvWin) {
                                RGBColor bg2 = {0x1800, 0x1800, 0x2800};
                                RGBColor gold2 = {0xFFFF, 0xDDDD, 0x3333};
                                RGBColor wh2 = {0xFFFF, 0xFFFF, 0xFFFF};
                                EventRecord lvEvt;
                                unsigned long lvTk;
                                Str255 titleStr, hname2;
                                Boolean fem = IsHeroFemale(attackerIdx);
                                unsigned char *hn = (unsigned char *)*gGameState + 0x224 + attackerIdx * 0x14;
                                short nl2 = 0;
                                while (nl2 < 18 && hn[nl2]) nl2++;
                                hname2[0] = (unsigned char)nl2;
                                BlockMoveData(hn, hname2 + 1, nl2);
                                GetHeroTitle(newLvl, fem, titleStr);
                                SetPort(lvWin);
                                RGBForeColor(&bg2); PaintRect(&lvWin->portRect);
                                RGBForeColor(&gold2); PenSize(2,2); FrameRect(&lvWin->portRect); PenNormal();
                                TextFont(3); TextSize(12); TextFace(bold);
                                RGBForeColor(&gold2);
                                MoveTo(20, 22);
                                DrawString(GetCachedString(STR_COMBAT, 0, "\pA "));
                                DrawString(titleStr);
                                DrawString("\p!");
                                TextFace(0); TextSize(10);
                                RGBForeColor(&wh2);
                                MoveTo(20, 44);
                                DrawString(hname2);
                                DrawString(GetCachedString(STR_COMBAT, 1, "\p is now a "));
                                DrawString(titleStr);
                                DrawString("\p!");
                                RGBForeColor(&gold2);
                                MoveTo(20, 66);
                                DrawString(GetCachedString(STR_COMBAT, 2, "\pLevel: "));
                                {
                                    Str255 ns2;
                                    NumToString((long)newLvl, ns2); DrawString(ns2);
                                    DrawString(GetCachedString(STR_COMBAT, 3, "\p   Str: "));
                                    NumToString((long)(unsigned char)attArmy[0x1e + i], ns2); DrawString(ns2);
                                    DrawString(GetCachedString(STR_COMBAT, 4, "\p   Cmd: "));
                                    NumToString((long)(unsigned char)attArmy[0x22 + i], ns2); DrawString(ns2);
                                }
                                lvTk = TickCount() + SpeedTicks(120);
                                while (TickCount() < lvTk) {
                                    if (WaitNextEvent(mDownMask | keyDownMask, &lvEvt, 5, NULL)) break;
                                }
                                DisposeWindow(lvWin);
                            }
                        }
                    }
                }
            }
        }
        /* Recalculate attacker strength display */
        {
            short str = 0;
            for (i = 0; i < 4; i++)
                if (attType[i] != 0xFF) str += attHits[i];
            *(short *)(attArmy + 0x2a) = str;
        }
    } else if (result == 0) {
        for (i = 0; i < 4; i++) {
            defArmy[0x16 + i] = (unsigned char)(defType[i] & 0xFF);
            defArmy[0x1e + i] = (unsigned char)(defHits[i] > 0 ? defHits[i] : 0);
            if (defType[i] != 0xFF && defHits[i] > 0) {
                short xp = (short)(unsigned char)defArmy[0x26 + i];
                short oldHeroLvl2 = GetHeroLevel(xp);
                short oldLevel = xp / 3;
                if (xp < 15) {
                    xp++;
                    defArmy[0x26 + i] = (unsigned char)xp;
                    if (xp / 3 > oldLevel) {
                        short bonus = (short)(unsigned char)defArmy[0x22 + i];
                        if (bonus < 8) defArmy[0x22 + i] = (unsigned char)(bonus + 1);
                    }
                    /* Hero title promotion notification (defender) */
                    if (defType[i] == 0x1C && GetHeroLevel(xp) > oldHeroLvl2) {
                        short newLvl = GetHeroLevel(xp);
                        short defOwn = (short)(unsigned char)defArmy[0x15];
                        if (*(short *)((unsigned char *)*gGameState + 0xd0 + defOwn * 2) == 0) {
                            WindowPtr lvWin;
                            Rect lvR;
                            SetRect(&lvR, 0, 0, 300, 90);
                            OffsetRect(&lvR, 170, 200);
                            lvWin = NewCWindow(NULL, &lvR, "\p", true,
                                               plainDBox, (WindowPtr)-1, false, 0);
                            if (lvWin) {
                                RGBColor bg2 = {0x1800, 0x1800, 0x2800};
                                RGBColor gold2 = {0xFFFF, 0xDDDD, 0x3333};
                                RGBColor wh2 = {0xFFFF, 0xFFFF, 0xFFFF};
                                EventRecord lvEvt;
                                unsigned long lvTk;
                                Str255 titleStr, hname2;
                                Boolean fem = IsHeroFemale(defenderIdx);
                                unsigned char *hn = (unsigned char *)*gGameState + 0x224 + defenderIdx * 0x14;
                                short nl2 = 0;
                                while (nl2 < 18 && hn[nl2]) nl2++;
                                hname2[0] = (unsigned char)nl2;
                                BlockMoveData(hn, hname2 + 1, nl2);
                                GetHeroTitle(newLvl, fem, titleStr);
                                SetPort(lvWin);
                                RGBForeColor(&bg2); PaintRect(&lvWin->portRect);
                                RGBForeColor(&gold2); PenSize(2,2); FrameRect(&lvWin->portRect); PenNormal();
                                TextFont(3); TextSize(12); TextFace(bold);
                                RGBForeColor(&gold2);
                                MoveTo(20, 22);
                                DrawString(GetCachedString(STR_COMBAT, 0, "\pA "));
                                DrawString(titleStr);
                                DrawString("\p!");
                                TextFace(0); TextSize(10);
                                RGBForeColor(&wh2);
                                MoveTo(20, 44);
                                DrawString(hname2);
                                DrawString(GetCachedString(STR_COMBAT, 1, "\p is now a "));
                                DrawString(titleStr);
                                DrawString("\p!");
                                RGBForeColor(&gold2);
                                MoveTo(20, 66);
                                DrawString(GetCachedString(STR_COMBAT, 2, "\pLevel: "));
                                {
                                    Str255 ns2;
                                    NumToString((long)newLvl, ns2); DrawString(ns2);
                                    DrawString(GetCachedString(STR_COMBAT, 3, "\p   Str: "));
                                    NumToString((long)(unsigned char)defArmy[0x1e + i], ns2); DrawString(ns2);
                                    DrawString(GetCachedString(STR_COMBAT, 4, "\p   Cmd: "));
                                    NumToString((long)(unsigned char)defArmy[0x22 + i], ns2); DrawString(ns2);
                                }
                                lvTk = TickCount() + SpeedTicks(120);
                                while (TickCount() < lvTk) {
                                    if (WaitNextEvent(mDownMask | keyDownMask, &lvEvt, 5, NULL)) break;
                                }
                                DisposeWindow(lvWin);
                            }
                        }
                    }
                }
            }
        }
        {
            short str = 0;
            for (i = 0; i < 4; i++)
                if (defType[i] != 0xFF) str += defHits[i];
            *(short *)(defArmy + 0x2a) = str;
        }
    }

    /* === Medal award for surviving units (small chance after combat) === */
    {
        static const unsigned char *sMedalNames[] = {
            "\pStar of Battle", "\pWarriors Cross",
            "\pShield of Courage", "\pHeart of Virtue"
        };
        unsigned char *winArmy = (result == 1) ? attArmy : (result == 0) ? defArmy : NULL;
        short winOwner = winArmy ? (short)(unsigned char)winArmy[0x15] : -1;

        if (winArmy != NULL && result != 2) {
            short rng = (short)(((unsigned short)TickCount()) % 100);
            /* ~15% chance of medal after each victory */
            if (rng < 15) {
                /* Pick a random surviving unit */
                short candidates[4], nc = 0;
                short *winType = (result == 1) ? attType : defType;
                short *winHits = (result == 1) ? attHits : defHits;
                for (i = 0; i < 4; i++) {
                    if (winType[i] != 0xFF && winHits[i] > 0) candidates[nc++] = i;
                }
                if (nc > 0) {
                    short slot = candidates[((unsigned short)TickCount()) % nc];
                    short medalType = ((unsigned short)TickCount()) % 4;
                    short oldVal, newVal;
                    Boolean isStr = (medalType < 2);  /* 0,1 = str; 2,3 = move */

                    if (isStr) {
                        oldVal = (short)(unsigned char)winArmy[0x1e + slot];
                        newVal = oldVal + 1;
                        if (newVal > 9) newVal = 9;
                        winArmy[0x1e + slot] = (unsigned char)newVal;
                        /* Recalculate total strength */
                        {
                            short str = 0;
                            for (i = 0; i < 4; i++)
                                if ((unsigned char)winArmy[0x16 + i] != 0xFF) str += (short)(unsigned char)winArmy[0x1e + i];
                            *(short *)(winArmy + 0x2a) = str;
                        }
                    } else {
                        oldVal = (short)(unsigned char)winArmy[0x1a + slot];
                        newVal = oldVal + 2;
                        if (newVal > 20) newVal = 20;
                        winArmy[0x1a + slot] = (unsigned char)newVal;
                    }

                    /* Show medal notification for human player */
                    if (winOwner >= 0 && winOwner < 8 &&
                        *(short *)(gs + 0xd0 + winOwner * 2) == 0) {
                        WindowPtr mWin;
                        Rect mR;
                        PicHandle medalPict = GetPicture(4410 + medalType);
                        short mW = 310, mH = 90;
                        if (medalPict) {
                            Rect pf = (**medalPict).picFrame;
                            mW = pf.right - pf.left;
                            mH = pf.bottom - pf.top;
                        }
                        SetRect(&mR, 0, 0, mW, mH);
                        OffsetRect(&mR,
                            (qd.screenBits.bounds.right - mW) / 2,
                            (qd.screenBits.bounds.bottom - mH) / 2);
                        mWin = NewCWindow(NULL, &mR, "\p", true,
                                          plainDBox, (WindowPtr)-1, false, 0);
                        if (mWin) {
                            RGBColor mbg = {0x2000, 0x1800, 0x0800};
                            RGBColor mgold = {0xFFFF, 0xDDDD, 0x3333};
                            RGBColor mwh = {0xFFFF, 0xFFFF, 0xFFFF};
                            EventRecord mEvt;
                            unsigned long mTk;
                            Str255 uName, ns;
                            GetUnitTypeName((short)(unsigned char)winArmy[0x16 + slot], uName);
                            SetPort(mWin);
                            if (medalPict) DrawPicture(medalPict, &mWin->portRect);
                            else { RGBForeColor(&mbg); PaintRect(&mWin->portRect); }
                            RGBForeColor(&mgold); PenSize(2,2); FrameRect(&mWin->portRect); PenNormal();
                            TextFont(3); TextSize(12); TextFace(bold);
                            RGBForeColor(&mgold);
                            MoveTo(15, 20);
                            DrawString(GetCachedString(STR_COMBAT, 5, "\pA Medal!"));
                            TextFace(0); TextSize(10);
                            RGBForeColor(&mwh);
                            MoveTo(15, 40);
                            DrawString(GetCachedString(STR_COMBAT, 6, "\pYour "));
                            DrawString(uName);
                            DrawString(GetCachedString(STR_COMBAT, 7, "\p has been awarded"));
                            MoveTo(15, 56);
                            DrawString(GetCachedString(STR_COMBAT, 8, "\pthe "));
                            RGBForeColor(&mgold);
                            DrawString(sMedalNames[medalType]);
                            RGBForeColor(&mwh);
                            DrawString("\p!");
                            MoveTo(15, 76);
                            if (isStr) {
                                DrawString(GetCachedString(STR_COMBAT, 9, "\pStrength increased from "));
                                NumToString((long)oldVal, ns); DrawString(ns);
                                DrawString(GetCachedString(STR_COMBAT, 10, "\p to "));
                                NumToString((long)newVal, ns); DrawString(ns);
                                DrawString("\p!");
                            } else {
                                DrawString(GetCachedString(STR_COMBAT, 11, "\pMovement increased from "));
                                NumToString((long)oldVal, ns); DrawString(ns);
                                DrawString(GetCachedString(STR_COMBAT, 10, "\p to "));
                                NumToString((long)newVal, ns); DrawString(ns);
                                DrawString("\p!");
                            }
                            mTk = TickCount() + SpeedTicks(120);
                            while (TickCount() < mTk) {
                                if (WaitNextEvent(mDownMask | keyDownMask, &mEvt, 5, NULL)) break;
                            }
                            DisposeWindow(mWin);
                        }
                    }
                }
            }
        }
    }

    /* === Show combat result dialog (only for battles involving human player) === */
    {
        short attOwnerChk = (short)(unsigned char)attArmy[0x15];
        short defOwnerChk = (short)(unsigned char)defArmy[0x15];
        short curPlayer = *(short *)(gs + 0x110);
        Boolean showDialog = (attOwnerChk == curPlayer || defOwnerChk == curPlayer);
        /* Also show if either side is human (with bounds check for neutrals) */
        if (!showDialog) {
            if ((attOwnerChk >= 0 && attOwnerChk < 8 &&
                 *(short *)(gs + 0xd0 + attOwnerChk * 2) == 0) ||
                (defOwnerChk >= 0 && defOwnerChk < 8 &&
                 *(short *)(gs + 0xd0 + defOwnerChk * 2) == 0))
                showDialog = true;
        }
        if (!showDialog) return result;
    }
    SetRect(&winRect, 0, 0, 400, 300);
    OffsetRect(&winRect, 150, 130);
    combatWin = NewCWindow(NULL, &winRect, "\p", true,
                           plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwRect, 0, 0, 400, 300);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);

    if (combatWin != NULL && offGW != NULL) {
        CGrafPtr savePort;
        GDHandle saveGD;
        GetGWorld(&savePort, &saveGD);
        SetGWorld(offGW, NULL);
        LockPixels(GetGWorldPixMap(offGW));

        /* Background */
        DrawMarbleBackground(&gwRect);
        /* Gold border */
        {
            RGBColor bdr = {0xCCCC, 0xAAAA, 0x3333};
            RGBForeColor(&bdr);
            PenSize(2, 2);
            FrameRect(&gwRect);
            PenSize(1, 1);
        }

        /* Title */
        {
            RGBColor gold = {0xFFFF, 0xDDDD, 0x5555};
            RGBForeColor(&gold);
            TextFont(2); TextSize(14); TextFace(bold);
            MoveTo(130, 24);
            DrawString(GetCachedString(STR_COMBAT, 12, "\pBattle Results"));
            TextFace(0); TextFont(3); TextSize(10);
        }

        /* Divider line under title */
        {
            RGBColor divCol = {0x6666, 0x5555, 0x4444};
            RGBForeColor(&divCol);
            MoveTo(10, 30); LineTo(390, 30);
        }

        /* Per-unit details: two columns (attacker left, defender right) */
        {
            short attOwner = (short)(unsigned char)attArmy[0x15];
            short defOwner = (short)(unsigned char)defArmy[0x15];
            RGBColor attColor = sPlayerColors[attOwner < 8 ? attOwner + 1 : 8];
            RGBColor defColor = sPlayerColors[defOwner < 8 ? defOwner + 1 : 8];
            RGBColor deadCol = {0xFFFF, 0x4444, 0x4444};
            RGBColor aliveCol = {0x4444, 0xFFFF, 0x4444};
            RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
            RGBColor gray = {0x8888, 0x8888, 0x8888};
            short yPos;
            Str255 numStr;

            /* Attacker column (left) */
            RGBForeColor(&attColor);
            TextFace(bold);
            MoveTo(20, 48);
            DrawString(GetCachedString(STR_COMBAT, 13, "\pAttacker"));
            {
                /* Faction name */
                char *fname = (char *)(gs + attOwner * FACTION_NAME_LEN);
                short fi;
                Str255 pname;
                for (fi = 0; fi < 14 && fname[fi]; fi++)
                    pname[fi + 1] = fname[fi];
                pname[0] = fi;
                MoveTo(90, 48);
                DrawString("\p(");
                DrawString(pname);
                DrawString("\p)");
            }
            TextFace(0);

            yPos = 66;
            for (i = 0; i < 4; i++) {
                Str255 uName;
                if (attOrigType[i] == 0xFF) continue;
                GetUnitTypeName(attOrigType[i], uName);

                MoveTo(24, yPos);
                if (attType[i] == 0xFF || attHits[i] <= 0) {
                    RGBForeColor(&deadCol);
                    DrawString(uName);
                    MoveTo(150, yPos);
                    DrawString(GetCachedString(STR_COMBAT, 14, "\pKILLED"));
                } else {
                    short dmg = attOrigHits[i] - attHits[i];
                    RGBForeColor(&aliveCol);
                    DrawString(uName);
                    MoveTo(130, yPos);
                    RGBForeColor(&white);
                    NumToString((long)attHits[i], numStr);
                    DrawString(numStr);
                    DrawString("\p/");
                    NumToString((long)attOrigHits[i], numStr);
                    DrawString(numStr);
                    DrawString(GetCachedString(STR_COMBAT, 15, "\p HP"));
                    if (dmg > 0) {
                        RGBColor dmgCol = {0xFFFF, 0xAAAA, 0x4444};
                        RGBForeColor(&dmgCol);
                        DrawString("\p (-");
                        NumToString((long)dmg, numStr);
                        DrawString(numStr);
                        DrawString("\p)");
                    }
                }
                yPos += 16;
            }

            /* Separator */
            {
                RGBColor divCol = {0x6666, 0x5555, 0x4444};
                RGBForeColor(&divCol);
                MoveTo(10, yPos + 4);
                LineTo(390, yPos + 4);
            }
            yPos += 16;

            /* Defender column */
            RGBForeColor(&defColor);
            TextFace(bold);
            MoveTo(20, yPos);
            DrawString(GetCachedString(STR_COMBAT, 16, "\pDefender"));
            {
                char *fname = (char *)(gs + defOwner * FACTION_NAME_LEN);
                short fi;
                Str255 pname;
                for (fi = 0; fi < 14 && fname[fi]; fi++)
                    pname[fi + 1] = fname[fi];
                pname[0] = fi;
                MoveTo(90, yPos);
                DrawString("\p(");
                DrawString(pname);
                DrawString("\p)");
            }
            TextFace(0);
            yPos += 18;

            for (i = 0; i < 4; i++) {
                Str255 uName;
                if (defOrigType[i] == 0xFF) continue;
                GetUnitTypeName(defOrigType[i], uName);

                MoveTo(24, yPos);
                if (defType[i] == 0xFF || defHits[i] <= 0) {
                    RGBForeColor(&deadCol);
                    DrawString(uName);
                    MoveTo(150, yPos);
                    DrawString(GetCachedString(STR_COMBAT, 14, "\pKILLED"));
                } else {
                    short dmg = defOrigHits[i] - defHits[i];
                    RGBForeColor(&aliveCol);
                    DrawString(uName);
                    MoveTo(130, yPos);
                    RGBForeColor(&white);
                    NumToString((long)defHits[i], numStr);
                    DrawString(numStr);
                    DrawString("\p/");
                    NumToString((long)defOrigHits[i], numStr);
                    DrawString(numStr);
                    DrawString(GetCachedString(STR_COMBAT, 15, "\p HP"));
                    if (dmg > 0) {
                        RGBColor dmgCol = {0xFFFF, 0xAAAA, 0x4444};
                        RGBForeColor(&dmgCol);
                        DrawString("\p (-");
                        NumToString((long)dmg, numStr);
                        DrawString(numStr);
                        DrawString("\p)");
                    }
                }
                yPos += 16;
            }

            /* Terrain/bonus info line */
            MoveTo(20, yPos + 12);
            RGBForeColor(&gray);
            TextSize(9);
            DrawString(GetCachedString(STR_COMBAT, 17, "\pRounds: "));
            NumToString((long)round, numStr);
            DrawString(numStr);
            TextSize(10);
        }

        /* Outcome banner */
        {
            Rect bannerR;
            RGBColor bannerBg, bannerText;
            SetRect(&bannerR, 20, 240, 380, 264);

            if (result == 1) {
                bannerBg.red = 0x0000; bannerBg.green = 0x4444; bannerBg.blue = 0x0000;
                bannerText.red = 0x4444; bannerText.green = 0xFFFF; bannerText.blue = 0x4444;
            } else if (result == 0) {
                bannerBg.red = 0x4444; bannerBg.green = 0x0000; bannerBg.blue = 0x0000;
                bannerText.red = 0xFFFF; bannerText.green = 0x4444; bannerText.blue = 0x4444;
            } else {
                bannerBg.red = 0x3333; bannerBg.green = 0x3333; bannerBg.blue = 0x3333;
                bannerText.red = 0xFFFF; bannerText.green = 0xFFFF; bannerText.blue = 0xFFFF;
            }
            RGBForeColor(&bannerBg);
            PaintRoundRect(&bannerR, 6, 6);
            RGBForeColor(&bannerText);
            TextFace(bold);
            if (result == 1) {
                MoveTo(110, 257);
                DrawString(GetCachedString(STR_COMBAT, 18, "\pAttacker is VICTORIOUS!"));
            } else if (result == 0) {
                MoveTo(110, 257);
                DrawString(GetCachedString(STR_COMBAT, 19, "\pDefender holds the field!"));
            } else {
                MoveTo(110, 257);
                DrawString(GetCachedString(STR_COMBAT, 20, "\pBoth armies destroyed!"));
            }
            TextFace(0);
        }

        /* OK button */
        {
            Rect okRect;
            RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
            SetRect(&okRect, 160, 270, 240, 292);
            RGBForeColor(&white);
            FrameRoundRect(&okRect, 8, 8);
            MoveTo(186, 286);
            DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
        }

        UnlockPixels(GetGWorldPixMap(offGW));
        SetGWorld(savePort, saveGD);

        /* Blit to window */
        SetPort(combatWin);
        {
            Rect dr = combatWin->portRect;
            LockPixels(GetGWorldPixMap(offGW));
            CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                     &((GrafPtr)combatWin)->portBits,
                     &gwRect, &dr, srcCopy, NULL);
            UnlockPixels(GetGWorldPixMap(offGW));
        }
    }

    /* Modal event loop for combat result */
    combatDone = false;
    while (!combatDone) {
        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &combatEvt, 30, NULL)) {
            if (combatEvt.what == mouseDown || combatEvt.what == keyDown) {
                combatDone = true;
            } else if (combatEvt.what == updateEvt) {
                if ((WindowPtr)combatEvt.message == combatWin && offGW != NULL) {
                    Rect dr;
                    BeginUpdate(combatWin);
                    SetPort(combatWin);
                    dr = combatWin->portRect;
                    LockPixels(GetGWorldPixMap(offGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                             &((GrafPtr)combatWin)->portBits,
                             &gwRect, &dr, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(offGW));
                    EndUpdate(combatWin);
                }
            }
        }
    }

    if (offGW != NULL) DisposeGWorld(offGW);
    if (combatWin != NULL) DisposeWindow(combatWin);

    return result;
}


/* ===================================================================
 * ShowCityCaptureNotification — Brief modal showing city capture
 * =================================================================== */
static void ShowCityCaptureNotification(short capturer, short prevOwner,
                                         short cityX, short cityY)
{
    WindowPtr notWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    EventRecord evt;
    CGrafPtr savePort;
    PicHandle bgPict;
    short winW = 300, winH = 100;

    PlaySound(SND_CHORD);
    GDHandle saveGD;
    unsigned long ticks;
    unsigned char *gs = (unsigned char *)*gGameState;

    /* Try to load capture scene PICT */
    bgPict = GetPicture(3800);
    if (bgPict) {
        Rect pf = (**bgPict).picFrame;
        winW = pf.right - pf.left;
        winH = pf.bottom - pf.top;
    }

    SetRect(&winRect, 0, 0, winW, winH);
    OffsetRect(&winRect,
        (qd.screenBits.bounds.right - winW) / 2,
        (qd.screenBits.bounds.bottom - winH) / 2);
    notWin = NewCWindow(NULL, &winRect, "\pCity Captured!", true,
                        dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, winW, winH);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (!notWin || !offGW) {
        if (offGW) DisposeGWorld(offGW);
        if (notWin) DisposeWindow(notWin);
        return;
    }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    /* Background: capture PICT or marble fallback, with capturer's color border */
    {
        RGBColor border = sPlayerColors[capturer < 8 ? capturer + 1 : 8];
        if (bgPict) DrawPicture(bgPict, &gwRect);
        else DrawMarbleBackground(&gwRect);
        RGBForeColor(&border);
        PenSize(3, 3);
        FrameRect(&gwRect);
        PenNormal();
    }

    /* Title */
    {
        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor capColor = sPlayerColors[capturer < 8 ? capturer + 1 : 8];
        char factionName[24];
        short len;
        Str255 numStr;

        RGBForeColor(&white);
        TextSize(12);
        TextFace(bold);
        MoveTo(20, 25);
        DrawString(GetCachedString(STR_CITY_CAPTURE, 2, "\pCity Captured!"));
        TextFace(0);
        TextSize(10);

        /* Show capturer name */
        BlockMoveData(gs + capturer * 20, factionName, 20);
        factionName[19] = 0;
        for (len = 0; len < 19 && factionName[len]; len++) {}
        MoveTo(20, 50);
        RGBForeColor(&capColor);
        {
            Str255 pstr;
            pstr[0] = (unsigned char)len;
            BlockMoveData(factionName, &pstr[1], len);
            DrawString(pstr);
        }

        RGBForeColor(&white);
        DrawString(GetCachedString(STR_CITY_CAPTURE, 3, "\p captures city at ("));
        NumToString((long)cityX, numStr);
        DrawString(numStr);
        DrawString("\p, ");
        NumToString((long)cityY, numStr);
        DrawString(numStr);
        DrawString("\p)");

        /* Show previous owner */
        if (prevOwner >= 0 && prevOwner < 8) {
            RGBColor prevColor = sPlayerColors[prevOwner + 1];
            char prevName[24];
            short plen;
            BlockMoveData(gs + prevOwner * 20, prevName, 20);
            prevName[19] = 0;
            for (plen = 0; plen < 19 && prevName[plen]; plen++) {}

            MoveTo(20, 70);
            RGBForeColor(&white);
            DrawString(GetCachedString(STR_MISC, 16, "\pTaken from "));
            RGBForeColor(&prevColor);
            {
                Str255 pstr2;
                pstr2[0] = (unsigned char)plen;
                BlockMoveData(prevName, &pstr2[1], plen);
                DrawString(pstr2);
            }
        }

        RGBForeColor(&white);
        TextSize(9);
        MoveTo(200, 90);
        DrawString(GetCachedString(STR_MISC, 17, "\pClick to continue"));
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);

    /* Blit to window */
    {
        PixMapHandle srcPM = GetGWorldPixMap(offGW);
        SetPort(notWin);
        LockPixels(srcPM);
        CopyBits((BitMap *)*srcPM,
                 &((GrafPtr)notWin)->portBits,
                 &gwRect, &gwRect, srcCopy, NULL);
        UnlockPixels(srcPM);
    }

    /* Wait for click or 3 seconds */
    ticks = TickCount() + SpeedTicks(180);
    while (TickCount() < ticks) {
        if (WaitNextEvent(mDownMask | keyDownMask, &evt, 5, NULL))
            break;
    }

    DisposeGWorld(offGW);
    DisposeWindow(notWin);
}


/* ===================================================================
 * ShowEliminationNotification — Announce a player has been eliminated
 * =================================================================== */
static void ShowEliminationNotification(short eliminatedPlayer, short byPlayer)
{
    WindowPtr notWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    EventRecord evt;
    CGrafPtr savePort;
    GDHandle saveGD;
    unsigned long ticks;
    unsigned char *gs = (unsigned char *)*gGameState;

    PlaySound(SND_DRAMATIC);  /* dramatic event for player elimination */

    SetRect(&winRect, 0, 0, 320, 120);
    OffsetRect(&winRect, 190, 180);
    notWin = NewCWindow(NULL, &winRect, "\pPlayer Eliminated!", true,
                        dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 320, 120);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (!notWin || !offGW) {
        if (offGW) DisposeGWorld(offGW);
        if (notWin) DisposeWindow(notWin);
        return;
    }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    /* Marble background with gold border */
    {
        RGBColor gold = {0xFFFF, 0xCCCC, 0x0000};
        DrawMarbleBackground(&gwRect);
        RGBForeColor(&gold);
        PenSize(3, 3);
        FrameRect(&gwRect);
        PenNormal();
    }

    {
        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor elimColor = sPlayerColors[eliminatedPlayer < 8 ? eliminatedPlayer + 1 : 8];
        char elimName[24];
        short elen;

        /* Title */
        RGBForeColor(&white);
        TextSize(14);
        TextFace(bold);
        MoveTo(60, 30);
        DrawString(GetCachedString(STR_HERO_DIPLO, 7, "\pPlayer Eliminated!"));
        TextFace(0);
        TextSize(11);

        /* Eliminated player name */
        BlockMoveData(gs + eliminatedPlayer * 20, elimName, 20);
        elimName[19] = 0;
        for (elen = 0; elen < 19 && elimName[elen]; elen++) {}

        MoveTo(30, 60);
        RGBForeColor(&elimColor);
        {
            Str255 pstr;
            pstr[0] = (unsigned char)elen;
            BlockMoveData(elimName, &pstr[1], elen);
            DrawString(pstr);
        }

        RGBForeColor(&white);
        DrawString(GetCachedString(STR_HERO_DIPLO, 8, "\p has been destroyed!"));

        /* By whom */
        if (byPlayer >= 0 && byPlayer < 8) {
            RGBColor byColor = sPlayerColors[byPlayer + 1];
            char byName[24];
            short blen;
            BlockMoveData(gs + byPlayer * 20, byName, 20);
            byName[19] = 0;
            for (blen = 0; blen < 19 && byName[blen]; blen++) {}

            MoveTo(30, 80);
            RGBForeColor(&white);
            DrawString(GetCachedString(STR_HERO_DIPLO, 9, "\pConquered by "));
            RGBForeColor(&byColor);
            {
                Str255 pstr2;
                pstr2[0] = (unsigned char)blen;
                BlockMoveData(byName, &pstr2[1], blen);
                DrawString(pstr2);
            }
        }

        RGBForeColor(&white);
        TextSize(9);
        MoveTo(210, 110);
        DrawString(GetCachedString(STR_MISC, 17, "\pClick to continue"));
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);

    {
        PixMapHandle srcPM = GetGWorldPixMap(offGW);
        SetPort(notWin);
        LockPixels(srcPM);
        CopyBits((BitMap *)*srcPM,
                 &((GrafPtr)notWin)->portBits,
                 &gwRect, &gwRect, srcCopy, NULL);
        UnlockPixels(srcPM);
    }

    /* Wait for click or 4 seconds */
    ticks = TickCount() + SpeedTicks(240);
    while (TickCount() < ticks) {
        if (WaitNextEvent(mDownMask | keyDownMask, &evt, 5, NULL))
            break;
    }

    DisposeGWorld(offGW);
    DisposeWindow(notWin);
}


/* ===================================================================
 * CheckAndResolveCombat — Check if army at (x,y) meets an enemy,
 * and if so, resolve combat.  Called after each movement step.
 * Returns: true if combat occurred, false otherwise.
 * =================================================================== */
static Boolean CheckAndResolveCombat(short movingArmyIdx)
{
    unsigned char *gs, *movArmy;
    short armyCount, mx, my, mOwner, i;

    if (*gGameState == 0) return false;
    gs = (unsigned char *)*gGameState;
    armyCount = *(short *)(gs + 0x1602);
    if (armyCount > 100) armyCount = 100;

    movArmy = gs + 0x1604 + movingArmyIdx * 0x42;
    mx = *(short *)(movArmy + 0x00);
    my = *(short *)(movArmy + 0x02);
    mOwner = (short)(unsigned char)movArmy[0x15];

    /* Look for any enemy army at the same tile */
    for (i = 0; i < armyCount; i++) {
        unsigned char *other;
        short ox, oy, oOwner, combatResult;

        if (i == movingArmyIdx) continue;
        other = gs + 0x1604 + i * 0x42;
        ox = *(short *)(other + 0x00);
        oy = *(short *)(other + 0x02);
        oOwner = (short)(unsigned char)other[0x15];

        if (ox == mx && oy == my && oOwner != mOwner) {
            /* Check diplomacy: if at peace, skip combat (armies coexist) */
            /* Bounds check: neutrals (owner outside 0-7) always fight */
            if (mOwner >= 0 && mOwner < 8 && oOwner >= 0 && oOwner < 8 &&
                *(short *)(gs + 0x1582 + (mOwner * 8 + oOwner) * 2) >= 0x1000) continue;

            /* Military Advisor: show assessment before combat for human attacker */
            if (sOptMilAdvisor && mOwner >= 0 && mOwner < 8 &&
                *(short *)(gs + 0xd0 + mOwner * 2) == 0) {
                short attStr = *(short *)(movArmy + 0x2a);
                short defStr = *(short *)(other + 0x2a);
                short ratio;
                const unsigned char *advice;
                WindowPtr advWin;
                Rect advR;
                Boolean doAttack = true;

                /* Add terrain/fortification defense bonus estimate */
                defStr += (short)(unsigned char)other[0x2d];

                if (attStr <= 0) attStr = 1;
                ratio = (defStr > 0) ? (attStr * 100) / defStr : 999;

                if      (ratio < 25)  advice = "\pcomplete and utter suicide!";
                else if (ratio < 40)  advice = "\psheerest folly!";
                else if (ratio < 60)  advice = "\pa foolish decision!";
                else if (ratio < 80)  advice = "\pa brave choice! I leave it to thee!";
                else if (ratio < 100) advice = "\pdifficult but not impossible to win!";
                else if (ratio < 120) advice = "\pvery evenly matched!";
                else if (ratio < 160) advice = "\pa hard-fought victory!";
                else if (ratio < 220) advice = "\pa comfortable victory!";
                else if (ratio < 350) advice = "\pan easy victory!";
                else                  advice = "\pas simple as butchering sleeping cattle!";

                {
                    PicHandle advPict = GetPicture(4420);
                    short advW = 320, advH = 100;
                    if (advPict) {
                        Rect pf = (**advPict).picFrame;
                        advW = pf.right - pf.left;
                        advH = pf.bottom - pf.top;
                    }
                    SetRect(&advR, 0, 0, advW, advH);
                    OffsetRect(&advR,
                        (qd.screenBits.bounds.right - advW) / 2,
                        (qd.screenBits.bounds.bottom - advH) / 2);
                }
                advWin = NewCWindow(NULL, &advR, "\p", true,
                                    plainDBox, (WindowPtr)-1, false, 0);
                if (advWin) {
                    PicHandle advPict2 = GetPicture(4420);
                    RGBColor abg = {0x1000, 0x1800, 0x2800};
                    RGBColor agold = {0xFFFF, 0xDDDD, 0x3333};
                    RGBColor awh = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBColor agreen = {0x4444, 0xFFFF, 0x4444};
                    RGBColor ared = {0xFFFF, 0x4444, 0x4444};
                    Rect yesR, noR;
                    Boolean advDone = false;
                    EventRecord advEvt;
                    short advW2 = advR.right - advR.left;
                    short advH2 = advR.bottom - advR.top;

                    SetRect(&yesR, advW2 - 160, advH2 - 28, advW2 - 90, advH2 - 8);
                    SetRect(&noR, advW2 - 80, advH2 - 28, advW2 - 15, advH2 - 8);

                    SetPort(advWin);
                    if (advPict2) DrawPicture(advPict2, &advWin->portRect);
                    else { RGBForeColor(&abg); PaintRect(&advWin->portRect); }
                    RGBForeColor(&agold); PenSize(2,2); FrameRect(&advWin->portRect); PenNormal();
                    TextFont(3); TextSize(11); TextFace(bold);
                    RGBForeColor(&agold);
                    MoveTo(15, 18);
                    DrawString(GetCachedString(STR_COMBAT, 0, "\pAdvisor!"));
                    TextFace(0); TextSize(10);
                    RGBForeColor(&awh);
                    MoveTo(15, 36);
                    DrawString(GetCachedString(STR_MISC, 5, "\pO Great Warlord, this battle would be"));
                    MoveTo(15, 52);
                    RGBForeColor(&agold);
                    DrawString(advice);
                    /* Attack/Retreat buttons */
                    RGBForeColor(&agreen);
                    FrameRoundRect(&yesR, 6, 6);
                    MoveTo(yesR.left + 12, yesR.bottom - 5);
                    DrawString(GetCachedString(STR_MISC, 6, "\pAttack!"));
                    RGBForeColor(&ared);
                    FrameRoundRect(&noR, 6, 6);
                    MoveTo(noR.left + 8, noR.bottom - 5);
                    DrawString(GetCachedString(STR_MISC, 7, "\pRetreat"));

                    while (!advDone) {
                        if (WaitNextEvent(mDownMask | keyDownMask, &advEvt, 30, NULL)) {
                            if (advEvt.what == keyDown) {
                                char ch = advEvt.message & charCodeMask;
                                if (ch == '\r' || ch == 'a' || ch == 'A' || ch == 'y' || ch == 'Y') {
                                    doAttack = true;
                                    advDone = true;
                                } else if (ch == 27 || ch == 'n' || ch == 'N' || ch == 'r' || ch == 'R') {
                                    doAttack = false;
                                    advDone = true;
                                }
                            } else if (advEvt.what == mouseDown) {
                                Point ap = advEvt.where;
                                SetPort(advWin);
                                GlobalToLocal(&ap);
                                if (PtInRect(ap, &yesR)) {
                                    doAttack = true;
                                    advDone = true;
                                } else if (PtInRect(ap, &noR)) {
                                    doAttack = false;
                                    advDone = true;
                                }
                            }
                        }
                    }
                    DisposeWindow(advWin);
                }

                if (!doAttack) {
                    /* Retreat: move army back to previous tile */
                    *(short *)(movArmy + 0x32) = 0;  /* clear orders */
                    return false;
                }
            }

            /* At war: flash combat tile on map */
            if (*gMainGameWindow != 0 && sGameSpeed < 3) {
                WindowPtr mw = (WindowPtr)*gMainGameWindow;
                short tileX = mx - sViewportX;
                short tileY = my - sViewportY;
                short vpW = (mw->portRect.right - mw->portRect.left) / TERRAIN_TILE_W;
                short vpH = (mw->portRect.bottom - mw->portRect.top) / TERRAIN_TILE_H;
                if (tileX >= 0 && tileX < vpW &&
                    tileY >= 0 && tileY < vpH) {
                    Rect flashR;
                    RGBColor flashClr;
                    short flashPass;
                    unsigned long flashEnd;
                    SetPort(mw);
                    SetRect(&flashR,
                            tileX * TERRAIN_TILE_W, tileY * TERRAIN_TILE_H,
                            tileX * TERRAIN_TILE_W + TERRAIN_TILE_W,
                            tileY * TERRAIN_TILE_H + TERRAIN_TILE_H);
                    for (flashPass = 0; flashPass < 3; flashPass++) {
                        flashClr.red = 0xFFFF;
                        flashClr.green = (flashPass & 1) ? 0xFFFF : 0x0000;
                        flashClr.blue = 0x0000;
                        RGBForeColor(&flashClr);
                        PaintRect(&flashR);
                        flashEnd = TickCount() + SpeedTicks(4);
                        while (TickCount() < flashEnd) {
                            EventRecord dEvt;
                            WaitNextEvent(0, &dEvt, 1, NULL);
                        }
                    }
                }
            }

            /* Resolve combat */
            PlaySound(SND_WAR);
            LoadAndPlayMusic(MUSIC_STATE_BATTLE);
            {
            short turnNum = *(short *)(gs + 0x136);
            combatResult = ResolveCombat(movingArmyIdx, i);

            /* Record battle event */
            RecordEvent(turnNum, HIST_EVT_BATTLE, mOwner,
                combatResult == 1 ? "Won battle" :
                combatResult == 0 ? "Lost battle" : "Mutual destruction");

            if (combatResult == 1) {
                /* Attacker wins: remove defender */
                RemoveArmy(i);
                /* Check city capture */
                {
                    short cityCount = *(short *)(gs + 0x810);
                    short ci;
                    if (cityCount > 40) cityCount = 40;
                    for (ci = 0; ci < cityCount; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        if (*(short *)(city + 0x00) == mx &&
                            *(short *)(city + 0x02) == my) {
                            short prevOwner = *(short *)(city + 0x04);
                            *(short *)(city + 0x04) = mOwner;  /* capture city */
                            RecordEvent(turnNum, HIST_EVT_CAPTURE, mOwner,
                                "Captured a city");
                            ShowCityCaptureNotification(mOwner, prevOwner, mx, my);

                            /* Pillage/Raze choice for human player */
                            if (sRazingCities != 2 && mOwner >= 0 && mOwner < 8 &&
                                *(short *)(gs + 0xd0 + mOwner * 2) == 0) {
                                WindowPtr rzWin;
                                Rect rzR;
                                SetRect(&rzR, 0, 0, 300, 110);
                                OffsetRect(&rzR, 180, 200);
                                rzWin = NewCWindow(NULL, &rzR, "\p", true,
                                                   plainDBox, (WindowPtr)-1, false, 0);
                                if (rzWin) {
                                    RGBColor rbg = {0x2000, 0x1800, 0x1000};
                                    RGBColor rgold = {0xFFFF, 0xDDDD, 0x3333};
                                    RGBColor rwh = {0xFFFF, 0xFFFF, 0xFFFF};
                                    RGBColor rred = {0xFFFF, 0x4444, 0x4444};
                                    RGBColor rgrn = {0x4444, 0xFFFF, 0x4444};
                                    Rect keepR, pillR, razeR;
                                    Boolean rzDone = false;
                                    short choice = 0;  /* 0=keep, 1=pillage, 2=raze */
                                    EventRecord rzEvt;

                                    SetRect(&keepR, 15, 78, 95, 98);
                                    SetRect(&pillR, 110, 78, 200, 98);
                                    SetRect(&razeR, 210, 78, 285, 98);

                                    SetPort(rzWin);
                                    RGBForeColor(&rbg); PaintRect(&rzWin->portRect);
                                    RGBForeColor(&rgold); PenSize(2,2); FrameRect(&rzWin->portRect); PenNormal();
                                    TextFont(3); TextSize(11); TextFace(bold);
                                    RGBForeColor(&rgold);
                                    MoveTo(15, 20);
                                    DrawString(GetCachedString(STR_MISC, 8, "\pVictory!"));
                                    TextFace(0); TextSize(10);
                                    RGBForeColor(&rwh);
                                    MoveTo(15, 38);
                                    DrawString(GetCachedString(STR_MISC, 9, "\pThe city is yours!"));
                                    MoveTo(15, 54);
                                    DrawString(GetCachedString(STR_MISC, 10, "\pWill you..."));

                                    /* Buttons */
                                    RGBForeColor(&rgrn);
                                    FrameRoundRect(&keepR, 6, 6);
                                    MoveTo(30, 92);
                                    DrawString(GetCachedString(STR_CITY_CAPTURE, 0, "\pKeep"));
                                    RGBForeColor(&rgold);
                                    FrameRoundRect(&pillR, 6, 6);
                                    MoveTo(120, 92);
                                    DrawString(GetCachedString(STR_CITY_CAPTURE, 1, "\pPillage!"));
                                    if (sRazingCities == 0) {
                                        RGBForeColor(&rred);
                                        FrameRoundRect(&razeR, 6, 6);
                                        MoveTo(225, 92);
                                        DrawString(GetCachedString(STR_CITY_CAPTURE, 3, "\pRaze!"));
                                    }

                                    while (!rzDone) {
                                        if (WaitNextEvent(mDownMask | keyDownMask, &rzEvt, 30, NULL)) {
                                            if (rzEvt.what == keyDown) {
                                                char ch = rzEvt.message & charCodeMask;
                                                if (ch == 'k' || ch == 'K' || ch == '\r') { choice = 0; rzDone = true; }
                                                else if (ch == 'p' || ch == 'P') { choice = 1; rzDone = true; }
                                                else if ((ch == 'r' || ch == 'R') && sRazingCities == 0) { choice = 2; rzDone = true; }
                                                else if (ch == 27) { choice = 0; rzDone = true; }
                                            } else if (rzEvt.what == mouseDown) {
                                                Point rp = rzEvt.where;
                                                SetPort(rzWin);
                                                GlobalToLocal(&rp);
                                                if (PtInRect(rp, &keepR)) { choice = 0; rzDone = true; }
                                                else if (PtInRect(rp, &pillR)) { choice = 1; rzDone = true; }
                                                else if (sRazingCities == 0 && PtInRect(rp, &razeR)) { choice = 2; rzDone = true; }
                                            }
                                        }
                                    }
                                    DisposeWindow(rzWin);

                                    if (choice == 1) {
                                        /* Pillage: gain gold, lose some defense */
                                        short pillGold = 50 + ((unsigned short)TickCount() % 100);
                                        short curGold = *(short *)(gs + 0x186 + mOwner * 0x14);
                                        *(short *)(gs + 0x186 + mOwner * 0x14) = curGold + pillGold;
                                        /* Reduce city defense by 1 */
                                        {
                                            short def = *(short *)(city + 0x06);
                                            if (def > 0) *(short *)(city + 0x06) = def - 1;
                                        }
                                        /* Show pillage result */
                                        {
                                            WindowPtr plWin;
                                            Rect plR;
                                            SetRect(&plR, 0, 0, 260, 60);
                                            OffsetRect(&plR, 190, 220);
                                            plWin = NewCWindow(NULL, &plR, "\p", true,
                                                               plainDBox, (WindowPtr)-1, false, 0);
                                            if (plWin) {
                                                Str255 ns;
                                                EventRecord plEvt;
                                                unsigned long plT;
                                                SetPort(plWin);
                                                RGBForeColor(&rbg); PaintRect(&plWin->portRect);
                                                RGBForeColor(&rgold); PenSize(2,2); FrameRect(&plWin->portRect); PenNormal();
                                                TextFont(3); TextSize(10);
                                                RGBForeColor(&rgold);
                                                MoveTo(15, 20);
                                                DrawString(GetCachedString(STR_CITY_CAPTURE, 1, "\pPillage!"));
                                                RGBForeColor(&rwh);
                                                MoveTo(15, 40);
                                                DrawString(GetCachedString(STR_MISC, 11, "\pYou looted "));
                                                NumToString((long)pillGold, ns); DrawString(ns);
                                                DrawString(GetCachedString(STR_CITY_CAPTURE, 4, "\p gold!"));
                                                plT = TickCount() + SpeedTicks(90);
                                                while (TickCount() < plT) {
                                                    if (WaitNextEvent(mDownMask | keyDownMask, &plEvt, 5, NULL)) break;
                                                }
                                                DisposeWindow(plWin);
                                            }
                                        }
                                    } else if (choice == 2) {
                                        /* Raze: destroy city — set owner to -1, gain some gold */
                                        short razeGold = 25 + ((unsigned short)TickCount() % 50);
                                        short curGold = *(short *)(gs + 0x186 + mOwner * 0x14);
                                        *(short *)(gs + 0x186 + mOwner * 0x14) = curGold + razeGold;
                                        *(short *)(city + 0x04) = -1;  /* razed */
                                        *(short *)(city + 0x06) = 0;   /* no defense */
                                        *(short *)(city + 0x08) = 0;   /* no income */
                                        /* Show raze result */
                                        {
                                            WindowPtr rzWin2;
                                            Rect rzR2;
                                            SetRect(&rzR2, 0, 0, 260, 60);
                                            OffsetRect(&rzR2, 190, 220);
                                            rzWin2 = NewCWindow(NULL, &rzR2, "\p", true,
                                                                plainDBox, (WindowPtr)-1, false, 0);
                                            if (rzWin2) {
                                                EventRecord rz2Evt;
                                                unsigned long rz2T;
                                                SetPort(rzWin2);
                                                RGBForeColor(&rbg); PaintRect(&rzWin2->portRect);
                                                RGBForeColor(&rred); PenSize(2,2); FrameRect(&rzWin2->portRect); PenNormal();
                                                TextFont(3); TextSize(10);
                                                RGBForeColor(&rred);
                                                MoveTo(15, 20);
                                                DrawString(GetCachedString(STR_CITY_CAPTURE, 5, "\pDestroyed!"));
                                                RGBForeColor(&rwh);
                                                MoveTo(15, 40);
                                                DrawString(GetCachedString(STR_CITY_CAPTURE, 6, "\pThe city has been razed to the ground!"));
                                                rz2T = TickCount() + SpeedTicks(90);
                                                while (TickCount() < rz2T) {
                                                    if (WaitNextEvent(mDownMask | keyDownMask, &rz2Evt, 5, NULL)) break;
                                                }
                                                DisposeWindow(rzWin2);
                                            }
                                        }
                                    }
                                }
                            }

                            /* Reset and start production for captured city */
                            if (*gExtState != 0) {
                                unsigned char *ext = (unsigned char *)*gExtState;
                                unsigned char *extCity = ext + 0x24c + ci * 0x5c;
                                *(short *)(extCity + 0x02) = -1;  /* clear production */
                                *(short *)(extCity + 0x58) = 0;   /* clear timer */
                                /* Show production dialog for human player */
                                if (mOwner >= 0 && mOwner < 8 &&
                                    *(short *)(gs + 0xd0 + mOwner * 2) == 0) {
                                    ShowCityProductionDialog(ci);
                                }
                            }

                            /* Check quest progress after city capture */
                            CheckQuestProgress(mOwner);

                            /* Check if previous owner lost all cities (eliminated) */
                            if (prevOwner >= 0 && prevOwner < 8 && prevOwner != mOwner) {
                                short cj, prevCities = 0;
                                for (cj = 0; cj < cityCount; cj++) {
                                    unsigned char *c2 = gs + 0x812 + cj * 0x20;
                                    short sType = (short)(unsigned char)c2[0x18];
                                    if (*(short *)(c2 + 0x04) == prevOwner &&
                                        sType != 2 && sType != 5 && sType != 6)
                                        prevCities++;
                                }
                                if (prevCities == 0) {
                                    /* Eliminate player */
                                    short aj2;
                                    *(short *)(gs + 0x138 + prevOwner * 2) = 0;
                                    *(short *)(gs + 0x148 + prevOwner * 2) = 0;
                                    RecordEvent(turnNum, HIST_EVT_DEFEAT, prevOwner,
                                        "Eliminated!");
                                    ShowEliminationNotification(prevOwner, mOwner);
                                    /* Remove all their armies */
                                    for (aj2 = armyCount - 1; aj2 >= 0; aj2--) {
                                        unsigned char *a2 = gs + 0x1604 + aj2 * 0x42;
                                        if ((short)(unsigned char)a2[0x15] == prevOwner)
                                            RemoveArmy(aj2);
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            } else if (combatResult == 0) {
                /* Defender wins: remove attacker */
                RemoveArmy(movingArmyIdx);
            } else {
                /* Mutual destruction */
                if (movingArmyIdx > i) {
                    RemoveArmy(movingArmyIdx);
                    RemoveArmy(i);
                } else {
                    RemoveArmy(i);
                    RemoveArmy(movingArmyIdx);
                }
            }
            return true;
            }
        }
    }
    return false;
}


/* ===================================================================
 * ShowReportDialog — Generic tabbed report dialog showing per-player stats
 *
 * tab: 0=Armies, 1=Cities, 2=Gold, 3=Production, 4=Winning
 * =================================================================== */
static short sLastReportTab = 0;
static void ShowReportDialog(short tab)
{
    WindowPtr rptWin;
    GWorldPtr offGW;
    Rect winRect, gwRect, okRect;
    Boolean rptDone, needsRedraw;

    if (*gGameState == 0) return;
    if (tab < 0) tab = sLastReportTab;
    sLastReportTab = tab;

    SetRect(&winRect, 0, 0, 400, 320);
    OffsetRect(&winRect, 140, 80);
    rptWin = NewCWindow(NULL, &winRect, "\p", true,
                        plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwRect, 0, 0, 400, 320);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);

    if (rptWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (rptWin) DisposeWindow(rptWin);
        return;
    }

    SetPort(rptWin);
    FlushEvents(everyEvent, 0);
    SetRect(&okRect, 160, 286, 240, 308);
    needsRedraw = true;
    rptDone = false;

    while (!rptDone) {
        EventRecord rptEvt;

        if (needsRedraw) {
            CGrafPtr savePort;
            GDHandle saveGD;
            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            /* Background */
            DrawMarbleBackground(&gwRect);

            /* Title */
            {
                RGBColor black = {0, 0, 0};
                static const unsigned char *tabNames[] = {
                    "\pArmies Report", "\pCities Report", "\pGold Report",
                    "\pProduction Report", "\pWinning Report"
                };
                RGBForeColor(&black);
                TextFont(2);
                TextSize(14);
                TextFace(bold);
                MoveTo(130, 22);
                if (tab >= 0 && tab <= 4)
                    DrawString(tabNames[tab]);
                else
                    DrawString(GetCachedString(STR_REPORT, 11, "\pReport"));
                TextFace(0);
                TextSize(9);
                TextFont(3);
            }

            /* Tab buttons along top */
            {
                RGBColor black = {0, 0, 0};
                RGBColor hilite = {0x8888, 0x8888, 0xFFFF};
                RGBColor normal = {0xCCCC, 0xCCCC, 0xCCCC};
                static const unsigned char *tabs[] = {
                    "\pArmies", "\pCities", "\pGold", "\pProd", "\pWinning"
                };
                short t;
                for (t = 0; t < 5; t++) {
                    Rect tr;
                    SetRect(&tr, 10 + t * 76, 30, 82 + t * 76, 48);
                    RGBForeColor(t == tab ? &hilite : &normal);
                    PaintRoundRect(&tr, 6, 6);
                    RGBForeColor(&black);
                    FrameRoundRect(&tr, 6, 6);
                    MoveTo(tr.left + 8, 44);
                    DrawString(tabs[t]);
                }
            }

            /* Separator line below tabs */
            {
                RGBColor gray = {0x9999, 0x9999, 0x9999};
                RGBForeColor(&gray);
                MoveTo(10, 52);
                LineTo(390, 52);
            }

            /* Column headers */
            {
                RGBColor black = {0, 0, 0};
                RGBForeColor(&black);
                TextFace(bold);
                MoveTo(20, 68);
                DrawString(GetCachedString(STR_REPORT, 0, "\pPlayer"));
                if (tab == 0) {
                    MoveTo(120, 68); DrawString(GetCachedString(STR_REPORT, 1, "\pArmies"));
                    MoveTo(200, 68); DrawString(GetCachedString(STR_REPORT, 2, "\pUnits"));
                    MoveTo(280, 68); DrawString(GetCachedString(STR_REPORT, 3, "\pStrength"));
                } else if (tab == 1) {
                    MoveTo(120, 68); DrawString(GetCachedString(STR_REPORT, 4, "\pCities"));
                    MoveTo(220, 68); DrawString(GetCachedString(STR_REPORT, 5, "\pIncome"));
                } else if (tab == 2) {
                    MoveTo(120, 68); DrawString(GetCachedString(STR_REPORT, 6, "\pGold"));
                    MoveTo(220, 68); DrawString(GetCachedString(STR_REPORT, 7, "\pIncome/Turn"));
                } else if (tab == 3) {
                    MoveTo(120, 68); DrawString(GetCachedString(STR_REPORT, 4, "\pCities"));
                    MoveTo(220, 68); DrawString(GetCachedString(STR_REPORT, 8, "\pProducing"));
                } else {
                    MoveTo(120, 68); DrawString(GetCachedString(STR_REPORT, 4, "\pCities"));
                    MoveTo(200, 68); DrawString(GetCachedString(STR_REPORT, 1, "\pArmies"));
                    MoveTo(280, 68); DrawString(GetCachedString(STR_REPORT, 9, "\pScore"));
                }
                TextFace(0);
            }

            /* Per-player data rows */
            {
                unsigned char *gs = (unsigned char *)*gGameState;
                short pi;
                short armyCount = *(short *)(gs + 0x1602);
                short cityCount = *(short *)(gs + 0x810);
                short rowNum = 0;
                if (armyCount > 100) armyCount = 100;
                if (cityCount > 40) cityCount = 40;

                for (pi = 0; pi < 8; pi++) {
                    short alive = *(short *)(gs + 0x138 + pi * 2);
                    short yPos;
                    Str255 numStr;
                    short pArmies = 0, pUnits = 0, pStr = 0;
                    short pCities = 0, pIncome = 0, pProducing = 0;
                    short pGold, ai, ci;
                    RGBColor pColor;

                    if (!alive) continue;
                    yPos = 88 + rowNum * 26;
                    rowNum++;
                    pColor = sPlayerColors[pi < 8 ? pi + 1 : 8];

                    /* Count armies/units/strength for this player */
                    for (ai = 0; ai < armyCount; ai++) {
                        unsigned char *army = gs + 0x1604 + ai * 0x42;
                        if ((short)(unsigned char)army[0x15] == pi) {
                            short u;
                            pArmies++;
                            pStr += *(short *)(army + 0x2a);
                            for (u = 0; u < 4; u++)
                                if ((unsigned char)army[0x16 + u] != 0xFF) pUnits++;
                        }
                    }

                    /* Count cities/income for this player */
                    for (ci = 0; ci < cityCount; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        if (*(short *)(city + 0x04) == pi) {
                            pCities++;
                            pIncome += *(short *)(city + 0x08);
                            pProducing++;
                        }
                    }

                    pGold = *(short *)(gs + 0x186 + pi * 0x14);

                    /* Alternating row background */
                    if (rowNum % 2 == 0) {
                        Rect rowBg;
                        RGBColor altBg = {0xDDDD, 0xDDDD, 0xCCCC};
                        SetRect(&rowBg, 10, yPos - 12, 390, yPos + 8);
                        RGBForeColor(&altBg);
                        PaintRect(&rowBg);
                    }

                    /* Draw player shield icon (or color bar fallback) */
                    {
                        Rect colorBar;
                        SetRect(&colorBar, 18, yPos - 12, 38, yPos + 6);
                        if (sShieldsLoaded && sShieldIcons[pi] != NULL) {
                            PlotCIcon(&colorBar, sShieldIcons[pi]);
                        } else {
                            RGBColor black = {0, 0, 0};
                            RGBForeColor(&pColor);
                            PaintRect(&colorBar);
                            RGBForeColor(&black);
                            FrameRect(&colorBar);
                        }
                    }

                    /* Player name from faction names */
                    {
                        RGBColor black = {0, 0, 0};
                        RGBForeColor(&black);
                        MoveTo(42, yPos);
                        {
                            unsigned char *fname = gs + pi * FACTION_NAME_LEN;
                            Str255 pname;
                            short len = 0;
                            while (len < FACTION_NAME_LEN - 1 && fname[len] != 0) len++;
                            pname[0] = (unsigned char)len;
                            BlockMoveData(fname, pname + 1, len);
                            DrawString(pname);
                        }
                    }

                    /* Draw values */
                    {
                        RGBColor black = {0, 0, 0};
                        RGBForeColor(&black);

                        if (tab == 0) {
                            MoveTo(130, yPos); NumToString((long)pArmies, numStr); DrawString(numStr);
                            MoveTo(210, yPos); NumToString((long)pUnits, numStr); DrawString(numStr);
                            MoveTo(290, yPos); NumToString((long)pStr, numStr); DrawString(numStr);
                        } else if (tab == 1) {
                            MoveTo(130, yPos); NumToString((long)pCities, numStr); DrawString(numStr);
                            MoveTo(230, yPos); NumToString((long)pIncome, numStr); DrawString(numStr);
                        } else if (tab == 2) {
                            MoveTo(130, yPos); NumToString((long)pGold, numStr); DrawString(numStr);
                            MoveTo(230, yPos); NumToString((long)pIncome, numStr); DrawString(numStr);
                        } else if (tab == 3) {
                            MoveTo(130, yPos); NumToString((long)pCities, numStr); DrawString(numStr);
                            MoveTo(230, yPos); NumToString((long)pProducing, numStr); DrawString(numStr);
                        } else {
                            short score = pCities * 10 + pArmies * 5 + pGold / 100;
                            MoveTo(130, yPos); NumToString((long)pCities, numStr); DrawString(numStr);
                            MoveTo(210, yPos); NumToString((long)pArmies, numStr); DrawString(numStr);
                            MoveTo(290, yPos); NumToString((long)score, numStr); DrawString(numStr);
                        }
                    }
                }
            }

            /* OK button */
            {
                RGBColor black = {0, 0, 0};
                RGBColor btnBg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBForeColor(&btnBg);
                PaintRoundRect(&okRect, 8, 8);
                RGBForeColor(&black);
                FrameRoundRect(&okRect, 8, 8);
                MoveTo(186, 302);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);

            /* Blit */
            SetPort(rptWin);
            {
                Rect dr = rptWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)rptWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
            }
            needsRedraw = false;
        }

        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &rptEvt, 30, NULL)) {
            if (rptEvt.what == mouseDown) {
                Point mp = rptEvt.where;
                SetPort(rptWin);
                GlobalToLocal(&mp);

                /* Check tab clicks */
                if (mp.v >= 30 && mp.v <= 48) {
                    short t;
                    for (t = 0; t < 5; t++) {
                        if (mp.h >= 10 + t * 76 && mp.h <= 82 + t * 76) {
                            tab = t;
                            sLastReportTab = tab;
                            needsRedraw = true;
                            break;
                        }
                    }
                } else if (PtInRect(mp, &okRect)) {
                    rptDone = true;
                }
            } else if (rptEvt.what == keyDown) {
                char ch = rptEvt.message & charCodeMask;
                if (ch == '\r' || ch == 3 || ch == 27)
                    rptDone = true;
            } else if (rptEvt.what == updateEvt &&
                       (WindowPtr)rptEvt.message == rptWin) {
                BeginUpdate(rptWin);
                needsRedraw = true;
                EndUpdate(rptWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(rptWin);
}


/* ===================================================================
 * ShowDiplomacyDialog — Show diplomacy status between players
 * =================================================================== */
static void ShowDiplomacyDialog(void)
{
    WindowPtr dipWin;
    GWorldPtr offGW = NULL;
    Rect winRect, gwRect;
    Boolean dipDone;
    unsigned char *gs;
    short curPlayer;
    PicHandle bgPict;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    curPlayer = *(short *)(gs + 0x110);

    bgPict = GetPicture(4300);

    SetRect(&winRect, 0, 0, 360, 320);
    OffsetRect(&winRect, 160, 90);
    dipWin = NewCWindow(NULL, &winRect, "\p", true,
                        plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwRect, 0, 0, 360, 320);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (dipWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (dipWin) DisposeWindow(dipWin);
        return;
    }

    SetPort(dipWin);
    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        Rect okRect;
        SetRect(&okRect, 140, 284, 220, 306);

        dipDone = false;
        while (!dipDone) {
            EventRecord evt;

            if (needsRedraw) {
                CGrafPtr sp;
                GDHandle sd;
                GetGWorld(&sp, &sd);
                SetGWorld(offGW, NULL);
                LockPixels(GetGWorldPixMap(offGW));

                /* Background: diplomacy PICT or marble fallback */
                if (bgPict) DrawPicture(bgPict, &gwRect);
                else DrawMarbleBackground(&gwRect);

                /* Title */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    TextFont(2);
                    TextSize(14);
                    TextFace(bold);
                    MoveTo(100, 24);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 0, "\pDiplomacy Status"));
                    TextFace(0);
                    TextSize(9);
                    TextFont(3);
                }

                /* Column headers: small shield icons */
                {
                    short pj;
                    for (pj = 0; pj < 8; pj++) {
                        Rect shR;
                        if (*(short *)(gs + 0x138 + pj * 2) == 0) continue;
                        SetRect(&shR, 115 + pj * 28, 34, 143 + pj * 28, 52);
                        if (sShieldsLoaded && sShieldIcons[pj] != NULL) {
                            PlotCIcon(&shR, sShieldIcons[pj]);
                        } else {
                            RGBColor black = {0, 0, 0};
                            Str255 n;
                            RGBForeColor(&black);
                            NumToString((long)(pj + 1), n);
                            MoveTo(120 + pj * 28, 48);
                            DrawString(n);
                        }
                    }
                }

                /* Grid with actual diplomacy table values */
                {
                    short pi, pj;
                    RGBColor black = {0, 0, 0};
                    for (pi = 0; pi < 8; pi++) {
                        short yp = 60 + pi * 26;
                        if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;

                        /* Row header: player shield + name */
                        {
                            Rect colorBar;
                            SetRect(&colorBar, 18, yp - 10, 38, yp + 8);
                            if (sShieldsLoaded && sShieldIcons[pi] != NULL) {
                                PlotCIcon(&colorBar, sShieldIcons[pi]);
                            } else {
                                RGBForeColor(&sPlayerColors[pi + 1]);
                                PaintRect(&colorBar);
                                RGBForeColor(&black);
                                FrameRect(&colorBar);
                            }
                            MoveTo(42, yp + 4);
                            {
                                unsigned char *fname = gs + pi * FACTION_NAME_LEN;
                                Str255 pname;
                                short len = 0;
                                while (len < 8 && fname[len] != 0) len++;
                                pname[0] = (unsigned char)len;
                                BlockMoveData(fname, pname + 1, len);
                                DrawString(pname);
                            }
                        }

                        for (pj = 0; pj < 8; pj++) {
                            Rect cellRect;
                            unsigned char status;
                            if (*(short *)(gs + 0x138 + pj * 2) == 0) continue;
                            SetRect(&cellRect, 115 + pj * 28, yp - 8, 143 + pj * 28, yp + 6);

                            if (pi == pj) {
                                RGBColor gray = {0x8888, 0x8888, 0x8888};
                                RGBForeColor(&gray);
                                PaintRect(&cellRect);
                            } else {
                                RGBColor war = {0xFFFF, 0x4444, 0x4444};
                                RGBColor peace = {0x8888, 0xFFFF, 0x8888};
                                status = *(short *)(gs + 0x1582 + (pi * 8 + pj) * 2);
                                if (status >= 0x1000) {
                                    RGBForeColor(&peace);
                                    PaintRect(&cellRect);
                                    if (sDiploStateIcons[1])
                                        PlotCIcon(&cellRect, sDiploStateIcons[1]);
                                    else {
                                        RGBForeColor(&black);
                                        MoveTo(cellRect.left + 6, yp + 3);
                                        DrawString(GetCachedString(STR_REPORT, 12, "\pP"));
                                    }
                                } else {
                                    RGBForeColor(&war);
                                    PaintRect(&cellRect);
                                    if (sDiploStateIcons[0])
                                        PlotCIcon(&cellRect, sDiploStateIcons[0]);
                                    else {
                                        RGBForeColor(&black);
                                        MoveTo(cellRect.left + 6, yp + 3);
                                        DrawString(GetCachedString(STR_REPORT, 13, "\pW"));
                                    }
                                }
                            }
                            RGBForeColor(&black);
                            FrameRect(&cellRect);
                        }
                    }
                }

                /* Hint text */
                {
                    RGBColor hint = {0x5555, 0x5555, 0x5555};
                    RGBForeColor(&hint);
                    TextSize(9);
                    MoveTo(20, 274);
                    DrawString(GetCachedString(STR_REPORT, 14, "\pClick a cell in your row to propose peace/war"));
                }

                /* OK button */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    FrameRoundRect(&okRect, 8, 8);
                    MoveTo(166, 300);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                }

                UnlockPixels(GetGWorldPixMap(offGW));
                SetGWorld(sp, sd);

                /* Blit */
                SetPort(dipWin);
                {
                    Rect dr = dipWin->portRect;
                    LockPixels(GetGWorldPixMap(offGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                             &((GrafPtr)dipWin)->portBits,
                             &gwRect, &dr, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(offGW));
                }
                needsRedraw = false;
            }

            if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &evt, 30, NULL)) {
                if (evt.what == mouseDown) {
                    Point mp = evt.where;
                    SetPort(dipWin);
                    GlobalToLocal(&mp);

                    if (PtInRect(mp, &okRect)) {
                        dipDone = true;
                    } else {
                        /* Check if clicking in current player's row */
                        short yp = 60 + curPlayer * 26;
                        if (mp.v >= yp - 8 && mp.v <= yp + 6) {
                            short pj;
                            for (pj = 0; pj < 8; pj++) {
                                Rect cell;
                                if (pj == curPlayer) continue;
                                if (*(short *)(gs + 0x138 + pj * 2) == 0) continue;
                                SetRect(&cell, 115 + pj * 28, yp - 8, 143 + pj * 28, yp + 6);
                                if (PtInRect(mp, &cell)) {
                                    /* Toggle peace/war (both directions) */
                                    short cur = *(short *)(gs + 0x1582 + (curPlayer * 8 + pj) * 2);
                                    short newVal = (cur >= 0x1000) ? 0 : 0x2800;
                                    *(short *)(gs + 0x1582 + (curPlayer * 8 + pj) * 2) = newVal;
                                    *(short *)(gs + 0x1582 + (pj * 8 + curPlayer) * 2) = newVal;
                                    needsRedraw = true;
                                    break;
                                }
                            }
                        }
                    }
                } else if (evt.what == keyDown) {
                    char ch = evt.message & charCodeMask;
                    if (ch == '\r' || ch == 3 || ch == 27)
                        dipDone = true;
                } else if (evt.what == updateEvt &&
                           (WindowPtr)evt.message == dipWin) {
                    BeginUpdate(dipWin);
                    needsRedraw = true;
                    EndUpdate(dipWin);
                }
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(dipWin);
}


/* ===================================================================
 * ShowHistoryDialog — Show game history for a specific category
 *
 * tab: 0=Cities, 1=Events, 2=Gold, 3=Winners, -1=auto (last used)
 * =================================================================== */
static short sLastHistoryTab = 0;
static void ShowHistoryDialog(short tab)
{
    WindowPtr histWin;
    GWorldPtr offGW;
    Rect winRect, gwRect, okRect;
    Boolean histDone, needsRedraw;

    if (*gGameState == 0) return;
    if (tab < 0) tab = sLastHistoryTab;
    sLastHistoryTab = tab;

    SetRect(&winRect, 0, 0, 380, 300);
    OffsetRect(&winRect, 150, 90);
    histWin = NewCWindow(NULL, &winRect, "\p", true,
                         plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwRect, 0, 0, 380, 300);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (histWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (histWin) DisposeWindow(histWin);
        return;
    }

    SetPort(histWin);
    FlushEvents(everyEvent, 0);
    SetRect(&okRect, 150, 268, 230, 290);
    needsRedraw = true;
    histDone = false;

    while (!histDone) {
        EventRecord histEvt;

        if (needsRedraw) {
            CGrafPtr savePort;
            GDHandle saveGD;
            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            /* Background */
            DrawMarbleBackground(&gwRect);

            /* Title */
            {
                RGBColor black = {0, 0, 0};
                static const unsigned char *tabNames[] = {
                    "\pCity History", "\pEvent History", "\pGold History", "\pWinners"
                };
                RGBForeColor(&black);
                TextFont(2);
                TextSize(14);
                TextFace(bold);
                MoveTo(120, 22);
                if (tab >= 0 && tab <= 3)
                    DrawString(tabNames[tab]);
                else
                    DrawString(GetCachedString(STR_REPORT, 0, "\pHistory"));
                TextFace(0);
                TextSize(9);
                TextFont(3);
            }

            /* Tab buttons */
            {
                RGBColor black = {0, 0, 0};
                RGBColor hilite = {0x8888, 0xFFFF, 0x8888};
                RGBColor normal = {0xCCCC, 0xCCCC, 0xCCCC};
                static const unsigned char *tabs[] = {
                    "\pCities", "\pEvents", "\pGold", "\pWinners"
                };
                short t;
                for (t = 0; t < 4; t++) {
                    Rect tr;
                    SetRect(&tr, 10 + t * 90, 32, 96 + t * 90, 50);
                    RGBForeColor(t == tab ? &hilite : &normal);
                    PaintRoundRect(&tr, 6, 6);
                    RGBForeColor(&black);
                    FrameRoundRect(&tr, 6, 6);
                    MoveTo(tr.left + 10, 46);
                    DrawString(tabs[t]);
                }
            }

            /* Separator line below tabs */
            {
                RGBColor gray = {0x9999, 0x9999, 0x9999};
                RGBForeColor(&gray);
                MoveTo(10, 54);
                LineTo(370, 54);
            }

            /* Content area */
            {
                unsigned char *gs = (unsigned char *)*gGameState;
                short turnNum = *(short *)(gs + 0x136);
                short pi;
                RGBColor black = {0, 0, 0};
                Str255 numStr;

                RGBForeColor(&black);
                MoveTo(20, 72);
                DrawString(GetCachedString(STR_REPORT, 1, "\pTurn: "));
                NumToString((long)turnNum, numStr);
                DrawString(numStr);

                if (tab == 0) {
                    /* City counts per player */
                    short cityCount = *(short *)(gs + 0x810);
                    short rowNum = 0;
                    if (cityCount > 40) cityCount = 40;

                    MoveTo(20, 90);
                    TextFace(bold);
                    DrawString(GetCachedString(STR_REPORT, 2, "\pPlayer         Cities"));
                    TextFace(0);

                    for (pi = 0; pi < 8; pi++) {
                        short yp;
                        short pCities = 0, ci;
                        if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;
                        yp = 108 + rowNum * 22;
                        rowNum++;

                        for (ci = 0; ci < cityCount; ci++) {
                            unsigned char *city = gs + 0x812 + ci * 0x20;
                            if (*(short *)(city + 0x04) == pi) pCities++;
                        }

                        RGBForeColor(&sPlayerColors[pi + 1]);
                        {
                            Rect cb;
                            SetRect(&cb, 20, yp - 8, 36, yp + 6);
                            PaintRect(&cb);
                        }
                        RGBForeColor(&black);
                        MoveTo(42, yp + 3);
                        {
                            unsigned char *fname = gs + pi * FACTION_NAME_LEN;
                            Str255 pname;
                            short len = 0;
                            while (len < 12 && fname[len] != 0) len++;
                            pname[0] = (unsigned char)len;
                            BlockMoveData(fname, pname + 1, len);
                            DrawString(pname);
                        }
                        MoveTo(200, yp + 3);
                        NumToString((long)pCities, numStr);
                        DrawString(numStr);
                    }
                } else if (tab == 1) {
                    /* Events: show recorded history events (newest first) */
                    short ei, yp = 90;
                    short showCount = sHistoryCount;
                    short startIdx;
                    MoveTo(20, yp);
                    TextFace(bold);
                    DrawString(GetCachedString(STR_REPORT, 3, "\pTurn  Event"));
                    TextFace(0);
                    yp += 18;

                    startIdx = showCount - 12;
                    if (startIdx < 0) startIdx = 0;
                    for (ei = showCount - 1; ei >= startIdx && yp < 258; ei--) {
                        Str255 pStr;
                        short tl;
                        short evtPlayer = sHistoryEvents[ei].player;
                        short colorIdx = (evtPlayer >= 0 && evtPlayer < 8) ? evtPlayer + 1 : 0;

                        RGBForeColor(&black);
                        MoveTo(20, yp);
                        NumToString((long)sHistoryEvents[ei].turn, numStr);
                        DrawString(numStr);

                        RGBForeColor(&sPlayerColors[colorIdx]);
                        MoveTo(60, yp);
                        for (tl = 0; tl < 39 && sHistoryEvents[ei].text[tl]; tl++)
                            pStr[tl + 1] = sHistoryEvents[ei].text[tl];
                        pStr[0] = (unsigned char)tl;
                        DrawString(pStr);
                        yp += 14;
                    }
                    if (showCount == 0) {
                        RGBForeColor(&black);
                        MoveTo(30, yp);
                        DrawString(GetCachedString(STR_REPORT, 4, "\pNo events recorded yet."));
                    }
                } else if (tab == 2) {
                    /* Gold chart + current gold listing */
                    if (sHistoryTurnCount > 1) {
                        Rect chartArea;
                        short chartL = 50, chartT = 70, chartR = 350, chartB = 210;
                        short maxGold = 100;
                        short t;
                        SetRect(&chartArea, chartL, chartT, chartR, chartB);

                        for (pi = 0; pi < 8; pi++) {
                            if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;
                            for (t = 0; t < sHistoryTurnCount; t++) {
                                if (sGoldHistory[pi][t] > maxGold)
                                    maxGold = sGoldHistory[pi][t];
                            }
                        }
                        if (maxGold <= 0) maxGold = 100;

                        {
                            RGBColor chartBg = {0xFFFF, 0xFFFF, 0xEEEE};
                            RGBForeColor(&chartBg);
                            PaintRect(&chartArea);
                            RGBForeColor(&black);
                            FrameRect(&chartArea);
                        }

                        TextSize(8);
                        MoveTo(chartL - 30, chartT + 6);
                        NumToString((long)maxGold, numStr);
                        DrawString(numStr);
                        MoveTo(chartL - 14, chartB + 4);
                        DrawString("\p0");
                        MoveTo(chartR - 20, chartB + 12);
                        DrawString(GetCachedString(STR_REPORT, 5, "\pTurn"));
                        TextSize(9);

                        for (pi = 0; pi < 8; pi++) {
                            if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;
                            RGBForeColor(&sPlayerColors[pi + 1]);
                            for (t = 0; t < sHistoryTurnCount; t++) {
                                short px = chartL + (short)((long)t * (chartR - chartL) / sHistoryTurnCount);
                                short py = chartB - (short)((long)sGoldHistory[pi][t] * (chartB - chartT) / maxGold);
                                if (py < chartT) py = chartT;
                                if (py > chartB) py = chartB;
                                if (t == 0)
                                    MoveTo(px, py);
                                else
                                    LineTo(px, py);
                            }
                        }

                        RGBForeColor(&black);
                        TextFace(bold);
                        MoveTo(20, 228);
                        DrawString(GetCachedString(STR_REPORT, 6, "\pCurrent Gold:"));
                        TextFace(0);
                        for (pi = 0; pi < 8; pi++) {
                            short xp = 20 + (pi % 4) * 85;
                            short yp = 244 + (pi / 4) * 16;
                            short pGold;
                            if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;
                            pGold = *(short *)(gs + 0x186 + pi * 0x14);
                            RGBForeColor(&sPlayerColors[pi + 1]);
                            MoveTo(xp, yp);
                            NumToString((long)pGold, numStr);
                            DrawString(numStr);
                        }
                    } else {
                        MoveTo(20, 90);
                        DrawString(GetCachedString(STR_REPORT, 7, "\pNo history data yet (charts appear after turn 2)"));
                        for (pi = 0; pi < 8; pi++) {
                            short yp = 118 + pi * 18;
                            short pGold;
                            if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;
                            pGold = *(short *)(gs + 0x186 + pi * 0x14);
                            RGBForeColor(&sPlayerColors[pi + 1]);
                            MoveTo(30, yp);
                            NumToString((long)pGold, numStr);
                            DrawString(numStr);
                            DrawString(GetCachedString(STR_REPORT, 8, "\p gp"));
                        }
                    }
                } else {
                    /* Winners: score ranking */
                    short rowNum = 0;
                    MoveTo(20, 90);
                    TextFace(bold);
                    DrawString(GetCachedString(STR_REPORT, 9, "\pPlayer         Score"));
                    TextFace(0);

                    for (pi = 0; pi < 8; pi++) {
                        short yp;
                        short pGold, pCities = 0, pArmies = 0, ci, ai;
                        short armyCount, cityCount, score;
                        if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;
                        yp = 108 + rowNum * 22;
                        rowNum++;

                        pGold = *(short *)(gs + 0x186 + pi * 0x14);
                        armyCount = *(short *)(gs + 0x1602);
                        cityCount = *(short *)(gs + 0x810);
                        if (armyCount > 100) armyCount = 100;
                        if (cityCount > 40) cityCount = 40;

                        for (ci = 0; ci < cityCount; ci++) {
                            if (*(short *)(gs + 0x812 + ci * 0x20 + 0x04) == pi) pCities++;
                        }
                        for (ai = 0; ai < armyCount; ai++) {
                            if ((short)(unsigned char)*(gs + 0x1604 + ai * 0x42 + 0x15) == pi) pArmies++;
                        }
                        score = pCities * 10 + pArmies * 5 + pGold / 100;

                        RGBForeColor(&sPlayerColors[pi + 1]);
                        {
                            Rect cb;
                            SetRect(&cb, 20, yp - 8, 36, yp + 6);
                            PaintRect(&cb);
                        }
                        RGBForeColor(&black);
                        MoveTo(42, yp + 3);
                        {
                            unsigned char *fname = gs + pi * FACTION_NAME_LEN;
                            Str255 pname;
                            short len = 0;
                            while (len < 12 && fname[len] != 0) len++;
                            pname[0] = (unsigned char)len;
                            BlockMoveData(fname, pname + 1, len);
                            DrawString(pname);
                        }
                        MoveTo(200, yp + 3);
                        NumToString((long)score, numStr);
                        DrawString(numStr);
                    }
                }
            }

            /* OK button */
            {
                RGBColor black = {0, 0, 0};
                RGBColor btnBg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBForeColor(&btnBg);
                PaintRoundRect(&okRect, 8, 8);
                RGBForeColor(&black);
                FrameRoundRect(&okRect, 8, 8);
                MoveTo(176, 284);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);

            /* Blit */
            SetPort(histWin);
            {
                Rect dr = histWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)histWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
            }
            needsRedraw = false;
        }

        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &histEvt, 30, NULL)) {
            if (histEvt.what == mouseDown) {
                Point mp = histEvt.where;
                SetPort(histWin);
                GlobalToLocal(&mp);

                /* Check tab clicks */
                if (mp.v >= 32 && mp.v <= 50) {
                    short t;
                    for (t = 0; t < 4; t++) {
                        if (mp.h >= 10 + t * 90 && mp.h <= 96 + t * 90) {
                            tab = t;
                            sLastHistoryTab = tab;
                            needsRedraw = true;
                            break;
                        }
                    }
                } else if (PtInRect(mp, &okRect)) {
                    histDone = true;
                }
            } else if (histEvt.what == keyDown) {
                char ch = histEvt.message & charCodeMask;
                if (ch == '\r' || ch == 3 || ch == 27)
                    histDone = true;
            } else if (histEvt.what == updateEvt &&
                       (WindowPtr)histEvt.message == histWin) {
                BeginUpdate(histWin);
                needsRedraw = true;
                EndUpdate(histWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(histWin);
}


/* ===================================================================
 * ShowTriumphsDialog — Show victory achievements/triumphs
 * =================================================================== */
/* ===================================================================
 * ShowFightOrder — Reorder units within the selected army stack
 *
 * Shows the 4 unit slots. Click a slot then click another to swap them.
 * This sets the combat priority (slot 0 fights first).
 * =================================================================== */

/* ===================================================================
 * ShowChangeSignpost — Place or edit a text signpost at army location
 * =================================================================== */
static void ShowChangeSignpost(void)
{
    WindowPtr spWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean spDone;
    EventRecord spEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    Boolean needsRedraw;
    char textBuf[32];
    short textLen = 0;
    short armyX, armyY;
    short existIdx = -1;
    short si;
    unsigned char *gs, *army;

    if (*gGameState == 0 || sSelectedArmy < 0) return;
    gs = (unsigned char *)*gGameState;
    army = gs + 0x1604 + sSelectedArmy * 0x42;
    armyX = *(short *)(army + 0x00);
    armyY = *(short *)(army + 0x02);

    /* Check if there's already a signpost at this location */
    for (si = 0; si < sSignpostCount; si++) {
        if (sSignposts[si].active && sSignposts[si].x == armyX &&
            sSignposts[si].y == armyY) {
            existIdx = si;
            /* Load existing text */
            for (textLen = 0; textLen < 31 && sSignposts[si].text[textLen]; textLen++)
                textBuf[textLen] = sSignposts[si].text[textLen];
            break;
        }
    }

    SetRect(&winRect, 0, 0, 280, 120);
    OffsetRect(&winRect, 200, 160);
    spWin = NewCWindow(NULL, &winRect, "\pSignpost", true,
                       dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 280, 120);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (offGW == NULL) { DisposeWindow(spWin); return; }

    needsRedraw = true;
    spDone = false;

    while (!spDone) {
        if (needsRedraw) {
            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            {
                RGBColor bg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBColor black = {0, 0, 0};
                RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                Rect r, textRect;
                Str255 pStr;

                RGBForeColor(&bg);
                PaintRect(&gwRect);
                RGBForeColor(&black);
                FrameRect(&gwRect);

                TextSize(12);
                TextFace(bold);
                MoveTo(70, 22);
                DrawString(GetCachedString(STR_MISC, 73, "\pChange Signpost"));
                TextFace(0);
                TextSize(10);

                /* Text entry field */
                SetRect(&textRect, 20, 36, 260, 54);
                RGBForeColor(&white);
                PaintRect(&textRect);
                RGBForeColor(&black);
                FrameRect(&textRect);

                /* Draw text */
                MoveTo(24, 50);
                if (textLen > 0) {
                    pStr[0] = (unsigned char)textLen;
                    BlockMoveData(textBuf, pStr + 1, textLen);
                    DrawString(pStr);
                }
                /* Cursor */
                {
                    short curX = 24 + StringWidth(pStr);
                    MoveTo(curX, 38);
                    LineTo(curX, 52);
                }

                /* Delete button */
                SetRect(&r, 20, 70, 90, 90);
                FrameRoundRect(&r, 10, 10);
                MoveTo(35, 84);
                DrawString(GetCachedString(STR_MISC, 74, "\pDelete"));

                /* OK / Cancel */
                SetRect(&r, 120, 70, 180, 90);
                FrameRoundRect(&r, 10, 10);
                MoveTo(134, 84);
                TextFace(bold);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                TextFace(0);

                SetRect(&r, 195, 70, 260, 90);
                FrameRoundRect(&r, 10, 10);
                MoveTo(207, 84);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 0, "\pCancel"));
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);
            SetPort((WindowPtr)spWin);

            LockPixels(GetGWorldPixMap(offGW));
            CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                     &((GrafPtr)spWin)->portBits,
                     &gwRect, &gwRect, srcCopy, NULL);
            UnlockPixels(GetGWorldPixMap(offGW));

            needsRedraw = false;
        }

        WaitNextEvent(mDownMask | keyDownMask | updateMask, &spEvt, 30, NULL);

        if (spEvt.what == mouseDown) {
            Point clickPt = spEvt.where;
            Rect okBtn, cancelBtn, deleteBtn;
            SetPort((WindowPtr)spWin);
            GlobalToLocal(&clickPt);

            SetRect(&okBtn, 120, 70, 180, 90);
            SetRect(&cancelBtn, 195, 70, 260, 90);
            SetRect(&deleteBtn, 20, 70, 90, 90);

            if (PtInRect(clickPt, &okBtn)) {
                /* Save signpost */
                textBuf[textLen] = 0;
                if (textLen > 0) {
                    if (existIdx >= 0) {
                        /* Update existing */
                        BlockMoveData(textBuf, sSignposts[existIdx].text, 32);
                    } else if (sSignpostCount < MAX_SIGNPOSTS) {
                        /* Add new */
                        sSignposts[sSignpostCount].x = armyX;
                        sSignposts[sSignpostCount].y = armyY;
                        BlockMoveData(textBuf, sSignposts[sSignpostCount].text, 32);
                        sSignposts[sSignpostCount].active = true;
                        sSignpostCount++;
                    }
                }
                spDone = true;
            } else if (PtInRect(clickPt, &cancelBtn)) {
                spDone = true;
            } else if (PtInRect(clickPt, &deleteBtn)) {
                /* Delete signpost */
                if (existIdx >= 0) {
                    sSignposts[existIdx].active = false;
                }
                spDone = true;
            }
        } else if (spEvt.what == keyDown) {
            char key = spEvt.message & charCodeMask;
            if (key == 0x0D || key == 0x03) {
                /* OK — save */
                textBuf[textLen] = 0;
                if (textLen > 0) {
                    if (existIdx >= 0) {
                        BlockMoveData(textBuf, sSignposts[existIdx].text, 32);
                    } else if (sSignpostCount < MAX_SIGNPOSTS) {
                        sSignposts[sSignpostCount].x = armyX;
                        sSignposts[sSignpostCount].y = armyY;
                        BlockMoveData(textBuf, sSignposts[sSignpostCount].text, 32);
                        sSignposts[sSignpostCount].active = true;
                        sSignpostCount++;
                    }
                }
                spDone = true;
            } else if (key == 0x1B) {
                spDone = true;
            } else if (key == 0x08) {
                /* Backspace */
                if (textLen > 0) { textLen--; needsRedraw = true; }
            } else if (key >= 0x20 && key < 0x7F && textLen < 30) {
                textBuf[textLen++] = key;
                needsRedraw = true;
            }
        } else if (spEvt.what == updateEvt) {
            if ((WindowPtr)spEvt.message == spWin) {
                BeginUpdate(spWin);
                SetPort((WindowPtr)spWin);
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)spWin)->portBits,
                         &gwRect, &gwRect, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(spWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(spWin);
}


static void ShowFightOrder(short armyIndex)
{
    WindowPtr foWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean foDone;
    EventRecord foEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    Boolean needsRedraw;
    short selectedSlot = -1;
    unsigned char *gs, *army;
    short armyCount;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    armyCount = *(short *)(gs + 0x1602);
    if (armyIndex < 0 || armyIndex >= armyCount) return;
    army = gs + 0x1604 + armyIndex * 0x42;

    SetRect(&winRect, 0, 0, 320, 240);
    OffsetRect(&winRect, 180, 120);
    foWin = NewCWindow(NULL, &winRect, "\pFight Order", true,
                       dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 320, 240);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (offGW == NULL) { DisposeWindow(foWin); return; }

    needsRedraw = true;
    foDone = false;

    while (!foDone) {
        if (needsRedraw) {
            short ui;
            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            {
                RGBColor bg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBColor black = {0, 0, 0};
                RGBColor hdr = {0x2222, 0x2222, 0x8888};
                RGBColor selBg = {0xAAAA, 0xCCCC, 0xFFFF};
                Rect r;

                RGBForeColor(&bg);
                PaintRect(&gwRect);
                RGBForeColor(&black);
                FrameRect(&gwRect);

                TextSize(12);
                TextFace(bold);
                MoveTo(90, 22);
                DrawString(GetCachedString(STR_MISC, 0, "\pFight Order"));
                TextFace(0);
                TextSize(10);

                /* Instructions */
                {
                    RGBColor gray = {0x6666, 0x6666, 0x6666};
                    RGBForeColor(&gray);
                    MoveTo(30, 38);
                    DrawString(GetCachedString(STR_MISC, 1, "\pClick two slots to swap. Slot 1 fights first."));
                    RGBForeColor(&black);
                }

                /* Column headers */
                RGBForeColor(&hdr);
                TextFace(bold);
                MoveTo(20, 56); DrawString(GetCachedString(STR_MISC, 2, "\p#"));
                MoveTo(40, 56); DrawString(GetCachedString(STR_MISC, 3, "\pType"));
                MoveTo(140, 56); DrawString(GetCachedString(STR_MISC, 4, "\pHP"));
                MoveTo(180, 56); DrawString(GetCachedString(STR_MISC, 5, "\pMov"));
                MoveTo(220, 56); DrawString(GetCachedString(STR_MISC, 6, "\pBonus"));
                MoveTo(265, 56); DrawString(GetCachedString(STR_MISC, 7, "\pXP"));
                TextFace(0);
                RGBForeColor(&black);

                /* Unit slots */
                for (ui = 0; ui < 4; ui++) {
                    short yTop = 62 + ui * 30;
                    short yText = yTop + 20;
                    unsigned char unitType = army[0x16 + ui];
                    Rect slotRect;
                    Str255 numStr;

                    SetRect(&slotRect, 10, yTop, 310, yTop + 28);

                    /* Highlight selected slot */
                    if (ui == selectedSlot) {
                        RGBForeColor(&selBg);
                        PaintRect(&slotRect);
                    }
                    RGBForeColor(&black);
                    FrameRect(&slotRect);

                    /* Slot number */
                    MoveTo(20, yText);
                    NumToString((long)(ui + 1), numStr);
                    DrawString(numStr);

                    if (unitType == 0xFF) {
                        RGBColor gray = {0x8888, 0x8888, 0x8888};
                        RGBForeColor(&gray);
                        MoveTo(40, yText);
                        DrawString(GetCachedString(STR_MISC, 8, "\p(empty)"));
                        RGBForeColor(&black);
                    } else {
                        /* Unit type name */
                        MoveTo(40, yText);
                        {
                            Str255 typeName;
                            GetUnitTypeName((short)unitType, typeName);
                            DrawString(typeName);
                        }

                        /* Stats */
                        MoveTo(140, yText);
                        NumToString((long)(unsigned char)army[0x1e + ui], numStr);
                        DrawString(numStr);
                        MoveTo(180, yText);
                        NumToString((long)(unsigned char)army[0x1a + ui], numStr);
                        DrawString(numStr);
                        MoveTo(220, yText);
                        NumToString((long)(unsigned char)army[0x22 + ui], numStr);
                        DrawString(numStr);
                        MoveTo(265, yText);
                        NumToString((long)(unsigned char)army[0x26 + ui], numStr);
                        DrawString(numStr);
                    }
                }

                /* OK button */
                SetRect(&r, 130, 200, 190, 220);
                FrameRoundRect(&r, 10, 10);
                TextFace(bold);
                MoveTo(148, 214);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                TextFace(0);
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);
            SetPort((WindowPtr)foWin);

            LockPixels(GetGWorldPixMap(offGW));
            CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                     &((GrafPtr)foWin)->portBits,
                     &gwRect, &gwRect, srcCopy, NULL);
            UnlockPixels(GetGWorldPixMap(offGW));

            needsRedraw = false;
        }

        WaitNextEvent(mDownMask | keyDownMask | updateMask, &foEvt, 30, NULL);

        if (foEvt.what == mouseDown) {
            Point clickPt = foEvt.where;
            Rect okBtn;
            SetPort((WindowPtr)foWin);
            GlobalToLocal(&clickPt);

            SetRect(&okBtn, 130, 200, 190, 220);
            if (PtInRect(clickPt, &okBtn)) {
                foDone = true;
            } else {
                /* Check slot clicks */
                short si;
                for (si = 0; si < 4; si++) {
                    Rect slotRect;
                    SetRect(&slotRect, 10, 62 + si * 30, 310, 90 + si * 30);
                    if (PtInRect(clickPt, &slotRect)) {
                        if (selectedSlot < 0) {
                            selectedSlot = si;
                            needsRedraw = true;
                        } else if (selectedSlot == si) {
                            selectedSlot = -1;
                            needsRedraw = true;
                        } else {
                            /* Swap slots */
                            unsigned char tmpType = army[0x16 + selectedSlot];
                            unsigned char tmpMoves = army[0x1a + selectedSlot];
                            unsigned char tmpHits = army[0x1e + selectedSlot];
                            unsigned char tmpBonus = army[0x22 + selectedSlot];
                            unsigned char tmpExp = army[0x26 + selectedSlot];

                            army[0x16 + selectedSlot] = army[0x16 + si];
                            army[0x1a + selectedSlot] = army[0x1a + si];
                            army[0x1e + selectedSlot] = army[0x1e + si];
                            army[0x22 + selectedSlot] = army[0x22 + si];
                            army[0x26 + selectedSlot] = army[0x26 + si];

                            army[0x16 + si] = tmpType;
                            army[0x1a + si] = tmpMoves;
                            army[0x1e + si] = tmpHits;
                            army[0x22 + si] = tmpBonus;
                            army[0x26 + si] = tmpExp;

                            selectedSlot = -1;
                            needsRedraw = true;
                        }
                        break;
                    }
                }
            }
        } else if (foEvt.what == keyDown) {
            char key = foEvt.message & charCodeMask;
            if (key == 0x0D || key == 0x03 || key == 0x1B) foDone = true;
        } else if (foEvt.what == updateEvt) {
            if ((WindowPtr)foEvt.message == foWin) {
                BeginUpdate(foWin);
                SetPort((WindowPtr)foWin);
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)foWin)->portBits,
                         &gwRect, &gwRect, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(foWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(foWin);
}


/* ===================================================================
 * ShowAboutDialog — About Warlords II
 * =================================================================== */
static void ShowAboutDialog(void)
{
    WindowPtr aboutWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean aboutDone;
    EventRecord aboutEvt;
    CGrafPtr savePort;
    GDHandle saveGD;

    SetRect(&winRect, 0, 0, 340, 220);
    OffsetRect(&winRect, 180, 100);
    aboutWin = NewCWindow(NULL, &winRect, "\pAbout Warlords II", true,
                          dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 340, 220);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (offGW == NULL) { DisposeWindow(aboutWin); return; }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    /* Background */
    {
        RGBColor black = {0, 0, 0};
        RGBColor titleColor = {0x4444, 0x0000, 0x8888};
        Rect r;

        DrawMarbleBackground(&gwRect);
        RGBForeColor(&black);
        FrameRect(&gwRect);

        /* Title */
        TextSize(18);
        TextFace(bold);
        RGBForeColor(&titleColor);
        MoveTo(80, 40);
        DrawString("\pWarlords II");

        /* Subtitle */
        TextSize(12);
        TextFace(0);
        RGBForeColor(&black);
        MoveTo(72, 62);
        DrawString("\pStrategic Studies Group");

        /* Version */
        TextSize(10);
        MoveTo(112, 84);
        DrawString("\pVersion 1.0 (1993)");

        /* Credits */
        MoveTo(60, 110);
        DrawString("\pDesigned by Steve Fawkner");
        MoveTo(60, 126);
        DrawString("\pMac Version: Gregor Whiley");
        MoveTo(60, 142);
        DrawString("\pArtwork: Nick Stathopoulos");

        /* Copyright */
        MoveTo(52, 168);
        DrawString("\p\xa9 1993 Strategic Studies Group Pty Ltd");

        /* OK button */
        SetRect(&r, 135, 185, 205, 205);
        PaintRoundRect(&r, 10, 10);
        {
            RGBColor btnBg = {0xDDDD, 0xDDDD, 0xDDDD};
            RGBForeColor(&btnBg);
        }
        {
            Rect inner;
            SetRect(&inner, r.left + 2, r.top + 2, r.right - 2, r.bottom - 2);
            PaintRoundRect(&inner, 8, 8);
        }
        RGBForeColor(&black);
        FrameRoundRect(&r, 10, 10);
        MoveTo(158, 199);
        TextSize(12);
        TextFace(bold);
        DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
        TextFace(0);
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);
    SetPort((WindowPtr)aboutWin);

    /* Blit */
    LockPixels(GetGWorldPixMap(offGW));
    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
             &((GrafPtr)aboutWin)->portBits,
             &gwRect, &gwRect, srcCopy, NULL);
    UnlockPixels(GetGWorldPixMap(offGW));

    /* Modal event loop */
    aboutDone = false;
    while (!aboutDone) {
        WaitNextEvent(mDownMask | keyDownMask | updateMask, &aboutEvt, 30, NULL);
        if (aboutEvt.what == mouseDown) {
            Point clickPt = aboutEvt.where;
            Rect okBtn;
            SetPort((WindowPtr)aboutWin);
            GlobalToLocal(&clickPt);
            SetRect(&okBtn, 135, 185, 205, 205);
            if (PtInRect(clickPt, &okBtn)) aboutDone = true;
        } else if (aboutEvt.what == keyDown) {
            char key = aboutEvt.message & charCodeMask;
            if (key == 0x0D || key == 0x03 || key == 0x1B) aboutDone = true;
        } else if (aboutEvt.what == updateEvt) {
            if ((WindowPtr)aboutEvt.message == aboutWin) {
                BeginUpdate(aboutWin);
                SetPort((WindowPtr)aboutWin);
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)aboutWin)->portBits,
                         &gwRect, &gwRect, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(aboutWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(aboutWin);
}


/* ===================================================================
 * ShowSoundVolumesDialog — Sound volume controls
 * =================================================================== */
static void ShowSoundVolumesDialog(void)
{
    WindowPtr svWin;
    GWorldPtr offGW;
    Rect winRect, gwRect, okRect;
    Boolean svDone, needsRedraw;

    SetRect(&winRect, 0, 0, 280, 220);
    OffsetRect(&winRect, 200, 140);
    svWin = NewCWindow(NULL, &winRect, "\p", true,
                       plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwRect, 0, 0, 280, 220);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (svWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (svWin) DisposeWindow(svWin);
        return;
    }

    SetPort(svWin);
    FlushEvents(everyEvent, 0);
    SetRect(&okRect, 105, 185, 175, 207);
    needsRedraw = true;
    svDone = false;

    while (!svDone) {
        EventRecord svEvt;

        if (needsRedraw) {
            CGrafPtr sp;
            GDHandle sd;
            GetGWorld(&sp, &sd);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            {
                RGBColor bg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBColor black = {0, 0, 0};
                RGBColor sliderBg = {0xAAAA, 0xAAAA, 0xAAAA};
                RGBColor sliderFill = {0x4444, 0x8888, 0xFFFF};
                short i;
                static const unsigned char *labels[] = {
                    "\pMaster Volume", "\pSound Effects", "\pMusic"
                };
                short *vals[] = { &sSoundMaster, &sSoundEffects, &sSoundMusic };

                RGBForeColor(&bg);
                PaintRect(&gwRect);
                RGBForeColor(&black);
                FrameRect(&gwRect);

                TextFont(2);
                TextSize(14);
                TextFace(bold);
                MoveTo(65, 24);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 5, "\pSound Volumes"));
                TextFace(0);
                TextSize(9);
                TextFont(3);

                for (i = 0; i < 3; i++) {
                    short y = 52 + i * 44;
                    short val = *vals[i];
                    Rect track, fill;
                    Str255 numStr;

                    RGBForeColor(&black);
                    MoveTo(20, y);
                    DrawString(labels[i]);

                    /* Slider track */
                    SetRect(&track, 20, y + 8, 220, y + 22);
                    RGBForeColor(&sliderBg);
                    PaintRoundRect(&track, 6, 6);
                    RGBForeColor(&black);
                    FrameRoundRect(&track, 6, 6);

                    /* Filled portion */
                    if (val > 0) {
                        SetRect(&fill, 20, y + 8, 20 + val * 20, y + 22);
                        RGBForeColor(&sliderFill);
                        PaintRoundRect(&fill, 6, 6);
                    }

                    /* Value label */
                    RGBForeColor(&black);
                    MoveTo(228, y + 19);
                    NumToString((long)val, numStr);
                    DrawString(numStr);
                }

                /* Volume levels note */
                {
                    RGBColor gray = {0x6666, 0x6666, 0x6666};
                    RGBForeColor(&gray);
                    TextSize(8);
                    MoveTo(50, 175);
                    DrawString(GetCachedString(STR_MISC, 75, "\pDrag sliders to adjust volume"));
                    TextSize(9);
                }

                /* OK button */
                RGBForeColor(&black);
                {
                    RGBColor btnBg2 = {0xCCCC, 0xCCCC, 0xCCCC};
                    RGBForeColor(&btnBg2);
                    PaintRoundRect(&okRect, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&okRect, 8, 8);
                    TextFace(bold);
                    MoveTo(126, 201);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                    TextFace(0);
                }
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(sp, sd);

            SetPort(svWin);
            {
                Rect dr = svWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)svWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
            }
            needsRedraw = false;
        }

        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &svEvt, 30, NULL)) {
            if (svEvt.what == mouseDown) {
                Point mp = svEvt.where;
                SetPort(svWin);
                GlobalToLocal(&mp);

                if (PtInRect(mp, &okRect)) {
                    svDone = true;
                } else {
                    /* Check slider clicks */
                    short i;
                    short *vals[] = { &sSoundMaster, &sSoundEffects, &sSoundMusic };
                    for (i = 0; i < 3; i++) {
                        short y = 52 + i * 44;
                        if (mp.v >= y + 8 && mp.v <= y + 22 &&
                            mp.h >= 20 && mp.h <= 220) {
                            short newVal = (mp.h - 20) / 20;
                            if (newVal < 0) newVal = 0;
                            if (newVal > 10) newVal = 10;
                            *vals[i] = newVal;
                            /* Update music volume in real time */
                            if (i == 2 && gTunePlayer != NULL) {
                                long fv = ((long)newVal * 3L) << 11;
                                TuneSetVolume(gTunePlayer, fv);
                            }
                            needsRedraw = true;
                            break;
                        }
                    }
                }
            } else if (svEvt.what == keyDown) {
                char ch = svEvt.message & charCodeMask;
                if (ch == '\r' || ch == 3 || ch == 27)
                    svDone = true;
            } else if (svEvt.what == updateEvt &&
                       (WindowPtr)svEvt.message == svWin) {
                BeginUpdate(svWin);
                needsRedraw = true;
                EndUpdate(svWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(svWin);
}


/* ===================================================================
 * ShowShortcutsDialog — Keyboard Shortcuts reference
 * =================================================================== */
static void ShowShortcutsDialog(void)
{
    WindowPtr scWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean scDone;
    EventRecord scEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    short row;

    SetRect(&winRect, 0, 0, 380, 540);
    OffsetRect(&winRect, 160, 20);
    scWin = NewCWindow(NULL, &winRect, "\pKeyboard Shortcuts", true,
                       dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 380, 540);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (offGW == NULL) { DisposeWindow(scWin); return; }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    {
        RGBColor bg = {0xDDDD, 0xDDDD, 0xDDDD};
        RGBColor black = {0, 0, 0};
        RGBColor hdrColor = {0x2222, 0x2222, 0x8888};
        Rect r;

        RGBForeColor(&bg);
        PaintRect(&gwRect);
        RGBForeColor(&black);
        FrameRect(&gwRect);

        /* Title */
        TextSize(14);
        TextFace(bold);
        MoveTo(110, 22);
        DrawString(GetCachedString(STR_MISC, 9, "\pKeyboard Shortcuts"));
        TextFace(0);
        TextSize(10);

        /* Column headers */
        row = 42;
        RGBForeColor(&hdrColor);
        TextFace(bold);
        MoveTo(20, row); DrawString(GetCachedString(STR_MISC, 10, "\pKey"));
        MoveTo(120, row); DrawString(GetCachedString(STR_MISC, 11, "\pAction"));
        RGBForeColor(&black);
        TextFace(0);

        /* Separator */
        {
            Rect sep;
            SetRect(&sep, 15, row + 3, 365, row + 4);
            PaintRect(&sep);
        }

        /* Shortcuts list */
        row = 58;
        #define SC_ROW(k, act) MoveTo(20, row); DrawString(k); MoveTo(120, row); DrawString(act); row += 14

        SC_ROW("\pCmd+G", "\pGroup Stack");
        SC_ROW("\pCmd+Shift+G", "\pUngroup");
        SC_ROW("\pCmd+M", "\pMove Group");
        SC_ROW("\pCmd+Shift+M", "\pMove All Armies");
        SC_ROW("\pCmd+N", "\pNext Group");
        SC_ROW("\pCmd+L", "\pLeave Group");
        SC_ROW("\pSpace", "\pNext Group (quick)");
        SC_ROW("\p;", "\pDefend/Fortify");
        SC_ROW("\pCmd+E", "\pEnd Turn");
        SC_ROW("\pCmd+Shift+E", "\pSave and End Turn");
        SC_ROW("\pCmd+R", "\pShow Report");
        SC_ROW("\pCmd+Shift+D", "\pDiplomacy");
        SC_ROW("\pCmd+Shift+Q", "\pQuest");
        SC_ROW("\pCmd+Shift+H", "\pInspect Heroes");
        SC_ROW("\pCmd+Shift+P", "\pPlant Flag");
        SC_ROW("\pCmd+B", "\pArmy Bonuses");
        SC_ROW("\pCmd+I", "\pItems");
        SC_ROW("\pCmd+P", "\pProduction");
        SC_ROW("\pCmd+K", "\pStack");
        SC_ROW("\pCmd+H", "\pShow History");
        SC_ROW("\pCmd+T", "\pTriumphs");
        SC_ROW("\pCmd+Shift+L", "\pHero Levels");
        SC_ROW("\pCmd+Shift+S", "\pSearch Ruins");

        row += 4; /* extra gap */
        RGBForeColor(&hdrColor);
        TextFace(bold);
        MoveTo(20, row); DrawString(GetCachedString(STR_MISC, 12, "\pNo-Modifier Keys:"));
        TextFace(0);
        RGBForeColor(&black);
        row += 14;

        SC_ROW("\p1-9", "\pNumpad army movement");
        SC_ROW("\pC", "\pCenter on army");
        SC_ROW("\pD", "\pDisband army");
        SC_ROW("\pF", "\pFortify/Defend");
        SC_ROW("\pG", "\pGroup Stack");
        SC_ROW("\pB", "\pBuild (change production)");
        SC_ROW("\pS", "\pShow army's shadow");
        SC_ROW("\pW", "\pWait (skip army)");
        SC_ROW("\p;", "\pDefend");
        SC_ROW("\pSpace", "\pNext group");
        SC_ROW("\pReturn", "\pEnd Turn");
        SC_ROW("\pEsc", "\pCancel/Deselect");

        #undef SC_ROW

        /* OK button */
        SetRect(&r, 155, 510, 225, 530);
        FrameRoundRect(&r, 10, 10);
        MoveTo(178, 524);
        TextSize(12);
        TextFace(bold);
        DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
        TextFace(0);
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);
    SetPort((WindowPtr)scWin);

    LockPixels(GetGWorldPixMap(offGW));
    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
             &((GrafPtr)scWin)->portBits,
             &gwRect, &gwRect, srcCopy, NULL);
    UnlockPixels(GetGWorldPixMap(offGW));

    scDone = false;
    while (!scDone) {
        WaitNextEvent(mDownMask | keyDownMask | updateMask, &scEvt, 30, NULL);
        if (scEvt.what == mouseDown) {
            Point clickPt = scEvt.where;
            Rect okBtn;
            SetPort((WindowPtr)scWin);
            GlobalToLocal(&clickPt);
            SetRect(&okBtn, 155, 510, 225, 530);
            if (PtInRect(clickPt, &okBtn)) scDone = true;
        } else if (scEvt.what == keyDown) {
            char key = scEvt.message & charCodeMask;
            if (key == 0x0D || key == 0x03 || key == 0x1B) scDone = true;
        } else if (scEvt.what == updateEvt) {
            if ((WindowPtr)scEvt.message == scWin) {
                BeginUpdate(scWin);
                SetPort((WindowPtr)scWin);
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)scWin)->portBits,
                         &gwRect, &gwRect, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(scWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(scWin);
}


/* ===================================================================
 * GenerateQuest — Create a new quest for the given player.
 * Quest types: CAPTURE (take enemy city), EXPLORE (search ruins),
 * CONQUER (own N cities total), GOLD (accumulate N gold).
 * =================================================================== */
static void GenerateQuest(short player)
{
    unsigned char *gs;
    QuestState *q = &sPlayerQuests[player];
    long rnd;
    short questType, cityCount, ci;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    rnd = (long)TickCount() + player * 137;
    cityCount = *(short *)(gs + 0x810);
    if (cityCount > 40) cityCount = 40;

    /* Pick quest type based on game state */
    questType = (short)(rnd % 4) + 1;

    q->completed = false;
    q->active = true;
    q->progress = 0;

    switch (questType) {
        case QUEST_CAPTURE: {
            /* Find an enemy city to target */
            short enemyCity = -1;
            short startIdx = (short)((rnd / 7) % cityCount);
            for (ci = 0; ci < cityCount; ci++) {
                short idx = (startIdx + ci) % cityCount;
                unsigned char *city = gs + 0x812 + idx * 0x20;
                short owner = *(short *)(city + 0x04);
                short sType = (short)(unsigned char)city[0x18];
                if (sType == 2 || sType == 5 || sType == 6) continue;
                if (owner != player && owner >= 0 && owner < 8 &&
                    *(short *)(gs + 0x138 + owner * 2) != 0) {
                    enemyCity = idx;
                    break;
                }
            }
            if (enemyCity >= 0) {
                q->type = QUEST_CAPTURE;
                q->target = enemyCity;
                q->reward = 500;
                q->rewardItem = (short)((rnd / 11) % MAX_ITEMS) + 1;
            } else {
                /* No enemy cities; fall through to conquer quest */
                q->type = QUEST_CONQUER;
                q->target = 8;
                q->reward = 600;
                q->rewardItem = 0;
            }
            break;
        }
        case QUEST_EXPLORE:
            q->type = QUEST_EXPLORE;
            q->target = 3;  /* search 3 ruins */
            q->reward = 400;
            q->rewardItem = (short)((rnd / 13) % MAX_ITEMS) + 1;
            break;
        case QUEST_CONQUER: {
            /* Own N cities: current + 3 to 5 more */
            short ownCount = 0;
            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs + 0x812 + ci * 0x20;
                if (*(short *)(city + 0x04) == player) ownCount++;
            }
            q->type = QUEST_CONQUER;
            q->target = ownCount + 3 + (short)(rnd % 3);
            q->progress = ownCount;
            q->reward = 300 + q->target * 50;
            q->rewardItem = 0;
            break;
        }
        case QUEST_GOLD:
            q->type = QUEST_GOLD;
            q->target = 800 + (short)(rnd % 500);
            q->progress = *(short *)(gs + 0x186 + player * 0x14);
            q->reward = 0;  /* reward IS the gold (you get to keep it) */
            q->rewardItem = (short)((rnd / 17) % MAX_ITEMS) + 1;
            break;
    }
}

/* ===================================================================
 * CheckQuestProgress — Update quest progress and complete if done.
 * Called after turn actions (city capture, ruin search, income).
 * =================================================================== */
static void CheckQuestProgress(short player)
{
    unsigned char *gs;
    QuestState *q = &sPlayerQuests[player];
    short cityCount, ci;

    if (!q->active || q->completed) return;
    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    cityCount = *(short *)(gs + 0x810);
    if (cityCount > 40) cityCount = 40;

    switch (q->type) {
        case QUEST_CAPTURE:
            /* Check if target city is now owned by this player */
            if (q->target >= 0 && q->target < cityCount) {
                unsigned char *city = gs + 0x812 + q->target * 0x20;
                if (*(short *)(city + 0x04) == player)
                    q->completed = true;
            }
            break;
        case QUEST_EXPLORE:
            /* progress is incremented by ruin search code */
            if (q->progress >= q->target)
                q->completed = true;
            break;
        case QUEST_CONQUER: {
            short ownCount = 0;
            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs + 0x812 + ci * 0x20;
                if (*(short *)(city + 0x04) == player) ownCount++;
            }
            q->progress = ownCount;
            if (q->progress >= q->target)
                q->completed = true;
            break;
        }
        case QUEST_GOLD:
            q->progress = *(short *)(gs + 0x186 + player * 0x14);
            if (q->progress >= q->target)
                q->completed = true;
            break;
    }

    /* Award reward on completion */
    if (q->completed) {
        if (q->reward > 0)
            *(short *)(gs + 0x186 + player * 0x14) += q->reward;
        if (q->rewardItem > 0) {
            /* Try to give item to first hero */
            short armyCount = *(short *)(gs + 0x1602);
            short ai;
            if (armyCount > 100) armyCount = 100;
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)army[0x15] == player) {
                    short u;
                    for (u = 0; u < 4; u++) {
                        if ((unsigned char)army[0x16 + u] == 0x1C) {
                            GiveItemToHero(ai, q->rewardItem);
                            goto questItemDone;
                        }
                    }
                }
            }
            questItemDone: ;
        }
        RecordEvent(*(short *)(gs + 0x136), HIST_EVT_HERO,
                    player, "Quest completed!");
    }
}

/* ===================================================================
 * ShowQuestDialog — Show current quest status for the active player.
 * If no quest active, generates a new one. Shows progress and rewards.
 * =================================================================== */
static void ShowQuestDialog(void)
{
    WindowPtr qWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean qDone;
    EventRecord qEvt;
    CGrafPtr savePort;
    GDHandle saveGD;

    if (*gGameState == 0) return;

    {
        unsigned char *gs = (unsigned char *)*gGameState;
        short curPlayer = *(short *)(gs + 0x110);
        short questEnabled = *(short *)(gs + 0x11a);
        QuestState *q = &sPlayerQuests[curPlayer];

        /* Generate quest if none active */
        if (questEnabled && (!q->active || q->completed)) {
            if (q->completed) {
                q->active = false;  /* clear completed quest */
            }
            GenerateQuest(curPlayer);
        }

        /* Update progress */
        if (questEnabled && q->active)
            CheckQuestProgress(curPlayer);

        SetRect(&winRect, 0, 0, 380, 220);
        OffsetRect(&winRect, 160, 120);
        qWin = NewCWindow(NULL, &winRect, "\pQuest", true,
                          dBoxProc, (WindowPtr)-1, false, 0);
        SetRect(&gwRect, 0, 0, 380, 220);
        NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
        if (offGW == NULL) { DisposeWindow(qWin); return; }

        GetGWorld(&savePort, &saveGD);
        SetGWorld(offGW, NULL);
        LockPixels(GetGWorldPixMap(offGW));

        {
            RGBColor bg = {0x1800, 0x1200, 0x2800};
            RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
            RGBColor gold = {0xFFFF, 0xDDDD, 0x5555};
            Str255 numStr;
            Rect r;

            RGBForeColor(&bg);
            PaintRect(&gwRect);
            {
                RGBColor bdr = {0xCCCC, 0xAAAA, 0x3333};
                RGBForeColor(&bdr);
                PenSize(2, 2);
                FrameRect(&gwRect);
                PenSize(1, 1);
            }

            /* Title */
            TextFont(2); TextSize(14); TextFace(bold);
            RGBForeColor(&gold);
            MoveTo(140, 26);
            DrawString(GetCachedString(STR_QUEST, 0, "\pQuest Log"));
            TextFace(0); TextFont(3); TextSize(10);

            if (!questEnabled) {
                RGBForeColor(&white);
                MoveTo(60, 80);
                DrawString(GetCachedString(STR_QUEST, 1, "\pQuests are not enabled in this game."));
                MoveTo(60, 100);
                DrawString(GetCachedString(STR_QUEST, 2, "\pEnable in Game Settings to receive quests."));
            } else if (q->completed) {
                RGBColor green = {0x4444, 0xFFFF, 0x4444};
                RGBForeColor(&green);
                TextFace(bold);
                MoveTo(100, 60);
                DrawString(GetCachedString(STR_QUEST, 3, "\pQuest Complete!"));
                TextFace(0);
                RGBForeColor(&white);
                MoveTo(40, 85);
                DrawString(GetCachedString(STR_QUEST, 4, "\pYour reward has been granted."));
                if (q->reward > 0) {
                    MoveTo(40, 105);
                    DrawString(GetCachedString(STR_QUEST, 5, "\pGold: +"));
                    NumToString((long)q->reward, numStr);
                    DrawString(numStr);
                }
                if (q->rewardItem > 0 && q->rewardItem <= MAX_ITEMS) {
                    const ItemDef *itm = &sItemTable[q->rewardItem - 1];
                    Str255 iname;
                    short nl = 0;
                    MoveTo(40, 125);
                    {
                        RGBColor cyan = {0x6666, 0xFFFF, 0xFFFF};
                        RGBForeColor(&cyan);
                    }
                    DrawString(GetCachedString(STR_QUEST, 6, "\pArtifact: "));
                    while (nl < 19 && itm->name[nl]) nl++;
                    iname[0] = (unsigned char)nl;
                    BlockMoveData(itm->name, iname + 1, nl);
                    DrawString(iname);
                }
                MoveTo(40, 150);
                RGBForeColor(&white);
                DrawString(GetCachedString(STR_QUEST, 7, "\pA new quest will be assigned next turn."));
            } else if (q->active) {
                /* Show active quest */
                RGBForeColor(&gold);
                TextFace(bold);
                MoveTo(40, 52);
                switch (q->type) {
                    case QUEST_CAPTURE:  DrawString(GetCachedString(STR_QUEST, 8, "\pCapture City")); break;
                    case QUEST_EXPLORE:  DrawString(GetCachedString(STR_QUEST, 9, "\pExplore Ruins")); break;
                    case QUEST_CONQUER:  DrawString(GetCachedString(STR_QUEST, 10, "\pConquer Territory")); break;
                    case QUEST_GOLD:     DrawString(GetCachedString(STR_QUEST, 11, "\pAmass Wealth")); break;
                }
                TextFace(0);
                RGBForeColor(&white);

                MoveTo(40, 74);
                switch (q->type) {
                    case QUEST_CAPTURE: {
                        unsigned char *city = gs + 0x812 + q->target * 0x20;
                        short owner = *(short *)(city + 0x04);
                        short cx = *(short *)(city + 0x00);
                        short cy = *(short *)(city + 0x02);

                        DrawString(GetCachedString(STR_QUEST, 12, "\pCapture the city at ("));
                        NumToString((long)cx, numStr); DrawString(numStr);
                        DrawString("\p, ");
                        NumToString((long)cy, numStr); DrawString(numStr);
                        DrawString("\p)");

                        /* Show city name if available */
                        if (q->target < sCityNameCount && sCityNames[q->target][0]) {
                            Str255 cn;
                            short nl = 0;
                            MoveTo(40, 92);
                            DrawString(GetCachedString(STR_CITY_DIALOG, 0, "\pCity: "));
                            while (nl < 19 && sCityNames[q->target][nl]) nl++;
                            cn[0] = (unsigned char)nl;
                            BlockMoveData(sCityNames[q->target], cn + 1, nl);
                            RGBForeColor(&sPlayerColors[owner >= 0 && owner < 8 ? owner + 1 : 8]);
                            DrawString(cn);
                            RGBForeColor(&white);
                        }
                        break;
                    }
                    case QUEST_EXPLORE:
                        DrawString(GetCachedString(STR_QUEST, 13, "\pSearch "));
                        NumToString((long)q->target, numStr); DrawString(numStr);
                        DrawString(GetCachedString(STR_QUEST, 14, "\p ruins or temples."));
                        MoveTo(40, 92);
                        DrawString(GetCachedString(STR_QUEST, 15, "\pProgress: "));
                        NumToString((long)q->progress, numStr); DrawString(numStr);
                        DrawString("\p / ");
                        NumToString((long)q->target, numStr); DrawString(numStr);
                        break;
                    case QUEST_CONQUER:
                        DrawString(GetCachedString(STR_MISC, 0, "\pControl "));
                        NumToString((long)q->target, numStr); DrawString(numStr);
                        DrawString(GetCachedString(STR_MISC, 1, "\p cities."));
                        MoveTo(40, 92);
                        DrawString(GetCachedString(STR_QUEST, 14, "\pCurrent: "));
                        NumToString((long)q->progress, numStr); DrawString(numStr);
                        DrawString("\p / ");
                        NumToString((long)q->target, numStr); DrawString(numStr);
                        break;
                    case QUEST_GOLD:
                        DrawString(GetCachedString(STR_MISC, 2, "\pAccumulate "));
                        NumToString((long)q->target, numStr); DrawString(numStr);
                        DrawString(GetCachedString(STR_MISC, 3, "\p gold."));
                        MoveTo(40, 92);
                        DrawString(GetCachedString(STR_QUEST, 14, "\pCurrent: "));
                        NumToString((long)q->progress, numStr); DrawString(numStr);
                        DrawString("\p / ");
                        NumToString((long)q->target, numStr); DrawString(numStr);
                        break;
                }

                /* Reward preview */
                MoveTo(40, 120);
                RGBForeColor(&gold);
                DrawString(GetCachedString(STR_MISC, 4, "\pReward: "));
                RGBForeColor(&white);
                if (q->reward > 0) {
                    NumToString((long)q->reward, numStr); DrawString(numStr);
                    DrawString(GetCachedString(STR_QUEST, 15, "\p gold"));
                }
                if (q->rewardItem > 0 && q->rewardItem <= MAX_ITEMS) {
                    const ItemDef *itm = &sItemTable[q->rewardItem - 1];
                    Str255 iname;
                    short nl = 0;
                    if (q->reward > 0) DrawString("\p + ");
                    while (nl < 19 && itm->name[nl]) nl++;
                    iname[0] = (unsigned char)nl;
                    BlockMoveData(itm->name, iname + 1, nl);
                    {
                        RGBColor cyan = {0x6666, 0xFFFF, 0xFFFF};
                        RGBForeColor(&cyan);
                    }
                    DrawString(iname);
                }
            } else {
                RGBForeColor(&white);
                MoveTo(60, 80);
                DrawString(GetCachedString(STR_QUEST, 15, "\pNo active quests."));
            }

            /* OK button */
            SetRect(&r, 155, 180, 225, 202);
            RGBForeColor(&white);
            FrameRoundRect(&r, 8, 8);
            TextFace(bold);
            MoveTo(178, 196);
            DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
            TextFace(0);
        }

        UnlockPixels(GetGWorldPixMap(offGW));
        SetGWorld(savePort, saveGD);
        SetPort((WindowPtr)qWin);

        LockPixels(GetGWorldPixMap(offGW));
        CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                 &((GrafPtr)qWin)->portBits,
                 &gwRect, &gwRect, srcCopy, NULL);
        UnlockPixels(GetGWorldPixMap(offGW));

        qDone = false;
        while (!qDone) {
            WaitNextEvent(mDownMask | keyDownMask | updateMask, &qEvt, 30, NULL);
            if (qEvt.what == mouseDown) {
                Point clickPt = qEvt.where;
                Rect okBtn;
                SetPort((WindowPtr)qWin);
                GlobalToLocal(&clickPt);
                SetRect(&okBtn, 155, 180, 225, 202);
                if (PtInRect(clickPt, &okBtn)) qDone = true;
            } else if (qEvt.what == keyDown) {
                char key = qEvt.message & charCodeMask;
                if (key == 0x0D || key == 0x03 || key == 0x1B) qDone = true;
            } else if (qEvt.what == updateEvt) {
                if ((WindowPtr)qEvt.message == qWin) {
                    BeginUpdate(qWin);
                    SetPort((WindowPtr)qWin);
                    LockPixels(GetGWorldPixMap(offGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                             &((GrafPtr)qWin)->portBits,
                             &gwRect, &gwRect, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(offGW));
                    EndUpdate(qWin);
                }
            }
        }

        DisposeGWorld(offGW);
        DisposeWindow(qWin);
    }
}


/* ===================================================================
 * ShowGameSettingsDialog — In-game options editor
 * =================================================================== */
static void ShowGameSettingsDialog(void)
{
    WindowPtr gsWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean gsDone;
    EventRecord gsEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    Boolean needsRedraw;

    /* Local copies of settings (restore on cancel) */
    short localNeutral    = sNeutralCities;
    short localRazing     = sRazingCities;
    Boolean localQuests   = sOptQuests;
    Boolean localViewEn   = sOptViewEnemies;
    Boolean localHidden   = sOptHiddenMap;
    Boolean localDiplo    = sOptDiplomacy;
    Boolean localViewProd = sOptViewProd;
    Boolean localIntense  = sOptIntenseCombat;
    Boolean localMilAdv   = sOptMilAdvisor;
    Boolean localRandom   = sOptRandomTurns;
    short localSpeed      = sGameSpeed;

    SetRect(&winRect, 0, 0, 340, 430);
    OffsetRect(&winRect, 170, 50);
    gsWin = NewCWindow(NULL, &winRect, "\pGame Settings", true,
                       dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 340, 430);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (offGW == NULL) { DisposeWindow(gsWin); return; }

    needsRedraw = true;
    gsDone = false;

    while (!gsDone) {
        if (needsRedraw) {
            short y;
            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            {
                RGBColor bg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBColor black = {0, 0, 0};
                RGBColor hdr = {0x2222, 0x2222, 0x8888};
                RGBColor check = {0x0000, 0x6666, 0x0000};
                Rect r;

                RGBForeColor(&bg);
                PaintRect(&gwRect);
                RGBForeColor(&black);
                FrameRect(&gwRect);

                /* Title */
                TextSize(14);
                TextFace(bold);
                MoveTo(105, 22);
                DrawString(GetCachedString(STR_GAME_SETTINGS, 0, "\pGame Settings"));
                TextFace(0);
                TextSize(10);

                /* Neutral Cities */
                y = 44;
                RGBForeColor(&hdr);
                TextFace(bold);
                MoveTo(20, y);
                DrawString(GetCachedString(STR_GAME_SETTINGS, 1, "\pNeutral Cities:"));
                TextFace(0);
                RGBForeColor(&black);

                y = 60;
                SetRect(&r, 20, y - 10, 30, y); FrameRect(&r);
                if (localNeutral == 0) { RGBForeColor(&check); MoveTo(22, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(35, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 2, "\pAverage"));

                SetRect(&r, 110, y - 10, 120, y); FrameRect(&r);
                if (localNeutral == 1) { RGBForeColor(&check); MoveTo(112, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(125, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 3, "\pStrong"));

                SetRect(&r, 200, y - 10, 210, y); FrameRect(&r);
                if (localNeutral == 2) { RGBForeColor(&check); MoveTo(202, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(215, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 4, "\pActive"));

                /* Razing Cities */
                y = 84;
                RGBForeColor(&hdr);
                TextFace(bold);
                MoveTo(20, y);
                DrawString(GetCachedString(STR_GAME_SETTINGS, 5, "\pRazing Cities:"));
                TextFace(0);
                RGBForeColor(&black);

                y = 100;
                SetRect(&r, 20, y - 10, 30, y); FrameRect(&r);
                if (localRazing == 0) { RGBForeColor(&check); MoveTo(22, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(35, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 6, "\pAlways"));

                SetRect(&r, 110, y - 10, 120, y); FrameRect(&r);
                if (localRazing == 1) { RGBForeColor(&check); MoveTo(112, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(125, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 7, "\pOn Capture"));

                SetRect(&r, 200, y - 10, 210, y); FrameRect(&r);
                if (localRazing == 2) { RGBForeColor(&check); MoveTo(202, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(215, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 8, "\pNever"));

                /* Separator */
                y = 118;
                {
                    Rect sep;
                    SetRect(&sep, 15, y, 325, y + 1);
                    PaintRect(&sep);
                }

                /* Checkboxes - affecting difficulty */
                y = 134;
                RGBForeColor(&hdr);
                TextFace(bold);
                MoveTo(20, y);
                DrawString(GetCachedString(STR_GAME_SETTINGS, 9, "\pAffecting Difficulty:"));
                TextFace(0);
                RGBForeColor(&black);

                #define CHK_ROW(yy, var, lbl) \
                    { Rect cb; SetRect(&cb, 20, (yy) - 10, 30, (yy)); FrameRect(&cb); \
                      if (var) { RGBForeColor(&check); MoveTo(22, (yy) - 2); DrawString("\px"); RGBForeColor(&black); } \
                      MoveTo(35, (yy)); DrawString(lbl); }

                y = 152; CHK_ROW(y, localQuests, GetCachedString(STR_GAME_SETTINGS, 10, "\pQuests"));
                y = 168; CHK_ROW(y, localViewEn, GetCachedString(STR_GAME_SETTINGS, 11, "\pView Enemies"));
                y = 184; CHK_ROW(y, localHidden, GetCachedString(STR_GAME_SETTINGS, 12, "\pHidden Map"));
                y = 200; CHK_ROW(y, localDiplo, GetCachedString(STR_GAME_SETTINGS, 13, "\pDiplomacy"));
                y = 216; CHK_ROW(y, localViewProd, GetCachedString(STR_GAME_SETTINGS, 14, "\pView Production"));

                /* Separator */
                y = 232;
                {
                    Rect sep;
                    SetRect(&sep, 15, y, 325, y + 1);
                    PaintRect(&sep);
                }

                /* Not affecting difficulty */
                y = 248;
                RGBForeColor(&hdr);
                TextFace(bold);
                MoveTo(20, y);
                DrawString(GetCachedString(STR_GAME_SETTINGS, 15, "\pOther Options:"));
                TextFace(0);
                RGBForeColor(&black);

                y = 266; CHK_ROW(y, localIntense, GetCachedString(STR_GAME_SETTINGS, 16, "\pIntense Combat"));
                y = 282; CHK_ROW(y, localMilAdv, GetCachedString(STR_GAME_SETTINGS, 17, "\pMilitary Advisor"));
                y = 298; CHK_ROW(y, localRandom, GetCachedString(STR_GAME_SETTINGS, 18, "\pRandom Turns"));

                #undef CHK_ROW

                /* Separator */
                {
                    Rect sep;
                    SetRect(&sep, 15, 314, 325, 315);
                    PaintRect(&sep);
                }

                /* Game Speed */
                y = 330;
                RGBForeColor(&hdr);
                TextFace(bold);
                MoveTo(20, y);
                DrawString(GetCachedString(STR_GAME_SETTINGS, 19, "\pGame Speed:"));
                TextFace(0);
                RGBForeColor(&black);

                y = 346;
                SetRect(&r, 20, y - 10, 30, y); FrameRect(&r);
                if (localSpeed == 0) { RGBForeColor(&check); MoveTo(22, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(35, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 26, "\pSlow"));

                SetRect(&r, 90, y - 10, 100, y); FrameRect(&r);
                if (localSpeed == 1) { RGBForeColor(&check); MoveTo(92, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(105, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 27, "\pNormal"));

                SetRect(&r, 170, y - 10, 180, y); FrameRect(&r);
                if (localSpeed == 2) { RGBForeColor(&check); MoveTo(172, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(185, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 28, "\pFast"));

                SetRect(&r, 240, y - 10, 250, y); FrameRect(&r);
                if (localSpeed == 3) { RGBForeColor(&check); MoveTo(242, y - 2); DrawString("\px"); RGBForeColor(&black); }
                MoveTo(255, y); DrawString(GetCachedString(STR_GAME_SETTINGS, 29, "\pInstant"));

                /* OK / Cancel buttons */
                SetRect(&r, 170, 390, 240, 410);
                FrameRoundRect(&r, 10, 10);
                MoveTo(193, 404);
                TextSize(12);
                TextFace(bold);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));

                SetRect(&r, 80, 390, 158, 410);
                FrameRoundRect(&r, 10, 10);
                MoveTo(95, 404);
                TextFace(0);
                TextSize(12);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 0, "\pCancel"));
                TextFace(0);
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);
            SetPort((WindowPtr)gsWin);

            LockPixels(GetGWorldPixMap(offGW));
            CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                     &((GrafPtr)gsWin)->portBits,
                     &gwRect, &gwRect, srcCopy, NULL);
            UnlockPixels(GetGWorldPixMap(offGW));

            needsRedraw = false;
        }

        WaitNextEvent(mDownMask | keyDownMask | updateMask, &gsEvt, 30, NULL);

        if (gsEvt.what == mouseDown) {
            Point clickPt = gsEvt.where;
            Rect okBtn, cancelBtn;
            SetPort((WindowPtr)gsWin);
            GlobalToLocal(&clickPt);

            SetRect(&okBtn, 170, 390, 240, 410);
            SetRect(&cancelBtn, 80, 390, 158, 410);

            if (PtInRect(clickPt, &okBtn)) {
                /* Apply settings */
                sNeutralCities   = localNeutral;
                sRazingCities    = localRazing;
                sOptQuests       = localQuests;
                sOptViewEnemies  = localViewEn;
                sOptHiddenMap    = localHidden;
                sOptDiplomacy    = localDiplo;
                sOptViewProd     = localViewProd;
                sOptIntenseCombat = localIntense;
                sOptMilAdvisor   = localMilAdv;
                sOptRandomTurns  = localRandom;
                sGameSpeed       = localSpeed;

                /* Write to game state */
                if (*gGameState != 0) {
                    unsigned char *gs = (unsigned char *)*gGameState;
                    *(short *)(gs + 0x116) = localHidden ? 1 : 0;
                    *(short *)(gs + 0x11a) = localQuests ? 1 : 0;
                    *(short *)(gs + 0x11c) = localDiplo ? 1 : 0;
                    *(short *)(gs + 0x122) = localRandom ? 1 : 0;
                    *(short *)(gs + 0x124) = localViewProd ? 1 : 0;
                    *(short *)(gs + 0x126) = localNeutral;
                    *(short *)(gs + 0x128) = localIntense ? 1 : 0;
                    *(short *)(gs + 0x12a) = localViewEn ? 1 : 0;
                }
                gsDone = true;
            } else if (PtInRect(clickPt, &cancelBtn)) {
                gsDone = true;
            } else {
                /* Check radio/checkbox clicks */
                short cx = clickPt.h, cy = clickPt.v;

                /* Neutral Cities radios (y=50..60) */
                if (cy >= 50 && cy <= 62) {
                    if (cx >= 20 && cx < 100) { localNeutral = 0; needsRedraw = true; }
                    else if (cx >= 110 && cx < 190) { localNeutral = 1; needsRedraw = true; }
                    else if (cx >= 200 && cx < 280) { localNeutral = 2; needsRedraw = true; }
                }
                /* Razing Cities radios (y=90..100) */
                if (cy >= 90 && cy <= 102) {
                    if (cx >= 20 && cx < 100) { localRazing = 0; needsRedraw = true; }
                    else if (cx >= 110 && cx < 190) { localRazing = 1; needsRedraw = true; }
                    else if (cx >= 200 && cx < 280) { localRazing = 2; needsRedraw = true; }
                }
                /* Checkboxes (each 16px tall, starting at y-10 to y) */
                if (cx >= 20 && cx <= 200) {
                    if (cy >= 142 && cy <= 154) { localQuests = !localQuests; needsRedraw = true; }
                    else if (cy >= 158 && cy <= 170) { localViewEn = !localViewEn; needsRedraw = true; }
                    else if (cy >= 174 && cy <= 186) { localHidden = !localHidden; needsRedraw = true; }
                    else if (cy >= 190 && cy <= 202) { localDiplo = !localDiplo; needsRedraw = true; }
                    else if (cy >= 206 && cy <= 218) { localViewProd = !localViewProd; needsRedraw = true; }
                    else if (cy >= 256 && cy <= 268) { localIntense = !localIntense; needsRedraw = true; }
                    else if (cy >= 272 && cy <= 284) { localMilAdv = !localMilAdv; needsRedraw = true; }
                    else if (cy >= 288 && cy <= 300) { localRandom = !localRandom; needsRedraw = true; }
                }
                /* Game Speed radios (y=336..348) */
                if (cy >= 336 && cy <= 348) {
                    if (cx >= 20 && cx < 85) { localSpeed = 0; needsRedraw = true; }
                    else if (cx >= 90 && cx < 165) { localSpeed = 1; needsRedraw = true; }
                    else if (cx >= 170 && cx < 235) { localSpeed = 2; needsRedraw = true; }
                    else if (cx >= 240 && cx < 320) { localSpeed = 3; needsRedraw = true; }
                }
            }
        } else if (gsEvt.what == keyDown) {
            char key = gsEvt.message & charCodeMask;
            if (key == 0x0D || key == 0x03) {
                /* OK — apply */
                sNeutralCities   = localNeutral;
                sRazingCities    = localRazing;
                sOptQuests       = localQuests;
                sOptViewEnemies  = localViewEn;
                sOptHiddenMap    = localHidden;
                sOptDiplomacy    = localDiplo;
                sOptViewProd     = localViewProd;
                sOptIntenseCombat = localIntense;
                sOptMilAdvisor   = localMilAdv;
                sOptRandomTurns  = localRandom;
                sGameSpeed       = localSpeed;
                if (*gGameState != 0) {
                    unsigned char *gs = (unsigned char *)*gGameState;
                    *(short *)(gs + 0x116) = localHidden ? 1 : 0;
                    *(short *)(gs + 0x11a) = localQuests ? 1 : 0;
                    *(short *)(gs + 0x11c) = localDiplo ? 1 : 0;
                    *(short *)(gs + 0x122) = localRandom ? 1 : 0;
                    *(short *)(gs + 0x124) = localViewProd ? 1 : 0;
                    *(short *)(gs + 0x126) = localNeutral;
                    *(short *)(gs + 0x128) = localIntense ? 1 : 0;
                    *(short *)(gs + 0x12a) = localViewEn ? 1 : 0;
                }
                gsDone = true;
            } else if (key == 0x1B) {
                gsDone = true;
            }
        } else if (gsEvt.what == updateEvt) {
            if ((WindowPtr)gsEvt.message == gsWin) {
                BeginUpdate(gsWin);
                SetPort((WindowPtr)gsWin);
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)gsWin)->portBits,
                         &gwRect, &gwRect, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(gsWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(gsWin);
}


static void ShowTriumphsDialog(void)
{
    WindowPtr triWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean triDone;
    EventRecord triEvt;
    CGrafPtr savePort;
    GDHandle saveGD;

    if (*gGameState == 0) return;

    SetRect(&winRect, 0, 0, 340, 260);
    OffsetRect(&winRect, 170, 120);
    triWin = NewCWindow(NULL, &winRect, "\pTriumphs", true,
                        dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 340, 260);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (triWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (triWin) DisposeWindow(triWin);
        return;
    }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    {
        RGBColor bg = {0xEEEE, 0xEEEE, 0xDDDD};
        RGBForeColor(&bg);
        PaintRect(&gwRect);
    }

    /* Title */
    {
        unsigned char *gs = (unsigned char *)*gGameState;
        short curPlayer = *(short *)(gs + 0x110);
        RGBColor black = {0, 0, 0};
        Str255 numStr;
        short armyCount, cityCount, pArmies = 0, pCities = 0, ai, ci;

        RGBForeColor(&black);
        TextSize(12);
        TextFace(bold);
        MoveTo(100, 22);
        DrawString(GetCachedString(STR_VICTORY, 21, "\pTriumphs"));
        TextFace(0);
        TextSize(10);

        /* Show player's achievements */
        armyCount = *(short *)(gs + 0x1602);
        cityCount = *(short *)(gs + 0x810);
        if (armyCount > 100) armyCount = 100;
        if (cityCount > 40) cityCount = 40;

        for (ai = 0; ai < armyCount; ai++) {
            if ((short)(unsigned char)*(gs + 0x1604 + ai * 0x42 + 0x15) == curPlayer)
                pArmies++;
        }
        for (ci = 0; ci < cityCount; ci++) {
            if (*(short *)(gs + 0x812 + ci * 0x20 + 0x04) == curPlayer)
                pCities++;
        }

        RGBForeColor(&sPlayerColors[curPlayer < 8 ? curPlayer + 1 : 8]);
        MoveTo(20, 50);
        {
            unsigned char *fname = gs + curPlayer * FACTION_NAME_LEN;
            Str255 pname;
            short len = 0;
            while (len < FACTION_NAME_LEN - 1 && fname[len] != 0) len++;
            pname[0] = (unsigned char)len;
            BlockMoveData(fname, pname + 1, len);
            DrawString(pname);
        }
        DrawString(GetCachedString(STR_VICTORY, 9, "\p's Triumphs:"));

        RGBForeColor(&black);
        MoveTo(30, 80);
        NumToString((long)pCities, numStr);
        DrawString(numStr);
        DrawString(GetCachedString(STR_VICTORY, 10, "\p cities controlled"));

        MoveTo(30, 100);
        NumToString((long)pArmies, numStr);
        DrawString(numStr);
        DrawString(GetCachedString(STR_VICTORY, 11, "\p armies in the field"));

        MoveTo(30, 120);
        {
            short gold = *(short *)(gs + 0x186 + curPlayer * 0x14);
            NumToString((long)gold, numStr);
            DrawString(numStr);
            DrawString(GetCachedString(STR_VICTORY, 12, "\p gold in treasury"));
        }

        MoveTo(30, 140);
        {
            short turn = *(short *)(gs + 0x136);
            DrawString(GetCachedString(STR_VICTORY, 13, "\pTurn "));
            NumToString((long)turn, numStr);
            DrawString(numStr);
            DrawString(GetCachedString(STR_VICTORY, 14, "\p of the campaign"));
        }

        /* Total score */
        MoveTo(30, 170);
        TextFace(bold);
        {
            short score = pCities * 10 + pArmies * 5 +
                          *(short *)(gs + 0x186 + curPlayer * 0x14) / 100;
            DrawString(GetCachedString(STR_VICTORY, 15, "\pOverall Score: "));
            NumToString((long)score, numStr);
            DrawString(numStr);
        }
        TextFace(0);
    }

    /* OK button */
    {
        Rect okRect;
        RGBColor black = {0, 0, 0};
        SetRect(&okRect, 130, 220, 210, 242);
        RGBForeColor(&black);
        FrameRoundRect(&okRect, 8, 8);
        MoveTo(156, 236);
        DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);

    SetPort(triWin);
    {
        Rect dr = triWin->portRect;
        LockPixels(GetGWorldPixMap(offGW));
        CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                 &((GrafPtr)triWin)->portBits,
                 &gwRect, &dr, srcCopy, NULL);
        UnlockPixels(GetGWorldPixMap(offGW));
    }

    triDone = false;
    while (!triDone) {
        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &triEvt, 30, NULL)) {
            if (triEvt.what == mouseDown || triEvt.what == keyDown)
                triDone = true;
            else if (triEvt.what == updateEvt &&
                     (WindowPtr)triEvt.message == triWin) {
                Rect dr;
                BeginUpdate(triWin);
                SetPort(triWin);
                dr = triWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)triWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(triWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(triWin);
}


/* ===================================================================
 * GetHeroItemBonus — Calculate total item bonus for a hero army.
 * Returns battle bonus (direct), command bonus (to stack), gold bonus,
 * and flags for flying/movement items.
 * =================================================================== */
static void GetHeroItemBonus(short armyIdx,
                             short *outBattle, short *outCommand,
                             short *outGold,
                             Boolean *outFlying, Boolean *outDoubleMove)
{
    unsigned char *gs, *army;
    short slot;

    *outBattle = 0; *outCommand = 0; *outGold = 0;
    *outFlying = false; *outDoubleMove = false;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    army = gs + 0x1604 + armyIdx * 0x42;

    for (slot = 0; slot < ITEM_SLOTS; slot++) {
        short itemId = *(short *)(army + 0x3A + slot * 2);
        if (itemId <= 0 || itemId > MAX_ITEMS) continue;
        {
            const ItemDef *item = &sItemTable[itemId - 1];  /* 1-based */
            switch (item->type) {
                case ITEM_TYPE_BATTLE:   *outBattle += item->value; break;
                case ITEM_TYPE_COMMAND:  *outCommand += item->value; break;
                case ITEM_TYPE_GOLD:     *outGold += item->value; break;
                case ITEM_TYPE_FLYING:   *outFlying = true; break;
                case ITEM_TYPE_MOVEMENT: *outDoubleMove = true; break;
            }
        }
    }
}

/* ===================================================================
 * GiveItemToHero — Assigns an item to the first empty slot of a hero.
 * Returns true if item was added, false if all slots full.
 * itemId is 1-based index into sItemTable.
 * =================================================================== */
static Boolean GiveItemToHero(short armyIdx, short itemId)
{
    unsigned char *gs, *army;
    short slot;

    if (*gGameState == 0) return false;
    gs = (unsigned char *)*gGameState;
    army = gs + 0x1604 + armyIdx * 0x42;

    for (slot = 0; slot < ITEM_SLOTS; slot++) {
        if (*(short *)(army + 0x3A + slot * 2) == 0) {
            *(short *)(army + 0x3A + slot * 2) = itemId;
            return true;
        }
    }
    return false;  /* all slots full */
}

/* ===================================================================
 * ShowItemsDialog — Display items carried by a specific hero army.
 * Shows item names, types, and bonuses in a modal dialog.
 * =================================================================== */
static void ShowItemsDialog(short armyIdx)
{
    WindowPtr itemWin;
    GWorldPtr itemGW = NULL;
    Rect winR, gwR;
    CGrafPtr sp; GDHandle sd;
    EventRecord ie;
    Boolean idone;
    unsigned char *gs, *army;
    short slot, yp;
    short battleBonus, cmdBonus, goldBonus;
    Boolean hasFlying, hasDoubleMove;
    unsigned char *heroName;
    Str255 hname;
    short len;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    army = gs + 0x1604 + armyIdx * 0x42;

    SetRect(&winR, 0, 0, 320, 240);
    OffsetRect(&winR, (qd.screenBits.bounds.right - 320) / 2,
                     (qd.screenBits.bounds.bottom - 240) / 2);
    itemWin = NewCWindow(NULL, &winR, "\p", true,
                         plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwR, 0, 0, 320, 240);
    if (itemWin) NewGWorld(&itemGW, 0, &gwR, NULL, NULL, 0);
    if (!itemWin || !itemGW) {
        if (itemGW) DisposeGWorld(itemGW);
        if (itemWin) DisposeWindow(itemWin);
        return;
    }

    GetHeroItemBonus(armyIdx, &battleBonus, &cmdBonus, &goldBonus,
                     &hasFlying, &hasDoubleMove);

    GetGWorld(&sp, &sd);
    SetGWorld(itemGW, NULL);
    LockPixels(GetGWorldPixMap(itemGW));

    /* Background */
    DrawMarbleBackground(&gwR);
    /* Gold border */
    {
        RGBColor gold = {0xCCCC, 0xAAAA, 0x3333};
        RGBForeColor(&gold);
        PenSize(2, 2);
        FrameRect(&gwR);
        PenSize(1, 1);
    }

    /* Title: hero name + "Items" */
    {
        RGBColor titleCol = {0xFFFF, 0xDDDD, 0x5555};
        RGBForeColor(&titleCol);
        TextFont(2); TextSize(14); TextFace(bold);

        /* Get hero name */
        if (armyIdx < 40) {
            heroName = gs + 0x224 + armyIdx * 0x14;
            len = 0;
            while (len < 18 && heroName[len] != 0) len++;
            hname[0] = (unsigned char)len;
            BlockMoveData(heroName, hname + 1, len);
        } else {
            hname[0] = 4;
            hname[1] = 'H'; hname[2] = 'e'; hname[3] = 'r'; hname[4] = 'o';
        }
        MoveTo(20, 24);
        DrawString(hname);
        DrawString(GetCachedString(STR_MISC, 31, "\p's Items"));
        TextFace(0);
    }

    /* Column headers */
    {
        RGBColor hdrCol = {0xAAAA, 0xAAAA, 0xCCCC};
        RGBForeColor(&hdrCol);
        TextFont(3); TextSize(10); TextFace(bold);
        MoveTo(20, 48);
        DrawString(GetCachedString(STR_MISC, 32, "\pSlot  Item Name            Type    Bonus"));
        TextFace(0);
    }

    /* List items */
    yp = 68;
    for (slot = 0; slot < ITEM_SLOTS; slot++) {
        short itemId = *(short *)(army + 0x3A + slot * 2);
        Str255 slotStr;
        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor gray = {0x7777, 0x7777, 0x7777};

        RGBForeColor(&white);
        TextFont(3); TextSize(10);
        NumToString((long)(slot + 1), slotStr);
        MoveTo(20, yp);
        DrawString(slotStr);
        DrawString("\p.  ");

        if (itemId > 0 && itemId <= MAX_ITEMS) {
            const ItemDef *item = &sItemTable[itemId - 1];
            Str255 nm;
            short nl = 0;
            const char *typeName;
            Str255 tn;
            short tl;

            /* Item name */
            while (nl < 19 && item->name[nl] != '\0') nl++;
            nm[0] = (unsigned char)nl;
            BlockMoveData(item->name, nm + 1, nl);
            DrawString(nm);

            /* Pad to type column */
            MoveTo(190, yp);

            /* Type name */
            switch (item->type) {
                case ITEM_TYPE_BATTLE:   typeName = "Battle"; break;
                case ITEM_TYPE_COMMAND:  typeName = "Command"; break;
                case ITEM_TYPE_FLYING:   typeName = "Flying"; break;
                case ITEM_TYPE_MOVEMENT: typeName = "Move"; break;
                case ITEM_TYPE_GOLD:     typeName = "Gold"; break;
                default: typeName = "?"; break;
            }
            tl = 0;
            while (typeName[tl] != '\0') tl++;
            tn[0] = (unsigned char)tl;
            BlockMoveData(typeName, tn + 1, tl);
            DrawString(tn);

            /* Bonus value */
            MoveTo(260, yp);
            if (item->value > 0) {
                Str255 bstr;
                DrawString("\p+");
                NumToString((long)item->value, bstr);
                DrawString(bstr);
            } else {
                RGBColor green = {0x4444, 0xFFFF, 0x4444};
                RGBForeColor(&green);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 3, "\pYes"));
            }
        } else {
            RGBForeColor(&gray);
            DrawString(GetCachedString(STR_MISC, 33, "\p(empty)"));
        }
        yp += 20;
    }

    /* Summary line */
    {
        RGBColor sumCol = {0xAAAA, 0xFFFF, 0xAAAA};
        Str255 bs;
        RGBForeColor(&sumCol);
        TextSize(10);
        MoveTo(20, yp + 16);
        DrawString(GetCachedString(STR_MISC, 34, "\pTotal: Battle +"));
        NumToString((long)battleBonus, bs); DrawString(bs);
        DrawString(GetCachedString(STR_MISC, 35, "\p  Command +"));
        NumToString((long)cmdBonus, bs); DrawString(bs);
        if (goldBonus > 0) {
            DrawString(GetCachedString(STR_MISC, 36, "\p  Gold +"));
            NumToString((long)goldBonus, bs); DrawString(bs);
        }
        if (hasFlying) DrawString(GetCachedString(STR_MISC, 37, "\p  Flying"));
        if (hasDoubleMove) DrawString(GetCachedString(STR_MISC, 38, "\p  2xMove"));
    }

    /* OK button */
    {
        Rect okR;
        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
        SetRect(&okR, 120, 200, 200, 222);
        RGBForeColor(&white);
        FrameRoundRect(&okR, 8, 8);
        MoveTo(146, 216);
        DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
    }

    UnlockPixels(GetGWorldPixMap(itemGW));
    SetGWorld(sp, sd);
    SetPort(itemWin);
    {
        Rect dr = itemWin->portRect;
        LockPixels(GetGWorldPixMap(itemGW));
        CopyBits((BitMap *)*GetGWorldPixMap(itemGW),
                 &((GrafPtr)itemWin)->portBits,
                 &gwR, &dr, srcCopy, NULL);
        UnlockPixels(GetGWorldPixMap(itemGW));
    }

    /* Modal wait */
    idone = false;
    while (!idone) {
        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &ie, 30, NULL)) {
            if (ie.what == mouseDown || ie.what == keyDown)
                idone = true;
            else if (ie.what == updateEvt && (WindowPtr)ie.message == itemWin) {
                Rect dr;
                BeginUpdate(itemWin);
                SetPort(itemWin);
                dr = itemWin->portRect;
                LockPixels(GetGWorldPixMap(itemGW));
                CopyBits((BitMap *)*GetGWorldPixMap(itemGW),
                         &((GrafPtr)itemWin)->portBits,
                         &gwR, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(itemGW));
                EndUpdate(itemWin);
            }
        }
    }

    DisposeGWorld(itemGW);
    DisposeWindow(itemWin);
}

/* ===================================================================
 * ShowHeroInspect — Show hero info for current player's heroes
 * =================================================================== */
static void ShowHeroInspect(void)
{
    WindowPtr heroWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean heroDone;
    EventRecord heroEvt;
    CGrafPtr savePort;
    GDHandle saveGD;

    if (*gGameState == 0) return;

    {
        short heroArmyIds[8];  /* army indices of heroes for click detection */
        short heroCount = 0;
        Boolean needsRedraw = true;

        SetRect(&winRect, 0, 0, 400, 300);
        OffsetRect(&winRect, 140, 90);
        heroWin = NewCWindow(NULL, &winRect, "\pHeroes", true,
                             dBoxProc, (WindowPtr)-1, false, 0);
        SetRect(&gwRect, 0, 0, 400, 300);
        NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
        if (heroWin == NULL || offGW == NULL) {
            if (offGW) DisposeGWorld(offGW);
            if (heroWin) DisposeWindow(heroWin);
            return;
        }

        heroDone = false;
        while (!heroDone) {
            if (needsRedraw) {
                needsRedraw = false;
                heroCount = 0;

                GetGWorld(&savePort, &saveGD);
                SetGWorld(offGW, NULL);
                LockPixels(GetGWorldPixMap(offGW));

                {
                    RGBColor bg = {0xDDDD, 0xDDDD, 0xEEEE};
                    RGBForeColor(&bg);
                    PaintRect(&gwRect);
                }

                /* Title */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    TextSize(12); TextFace(bold);
                    MoveTo(130, 22);
                    DrawString(GetCachedString(STR_HERO_INFO, 0, "\pInspect Heroes"));
                    TextFace(0); TextSize(10);
                }

                /* Column headers */
                {
                    unsigned char *gs = (unsigned char *)*gGameState;
                    short curPlayer = *(short *)(gs + 0x110);
                    short armyCount = *(short *)(gs + 0x1602);
                    short ai;
                    RGBColor black = {0, 0, 0};
                    Str255 numStr;

                    if (armyCount > 100) armyCount = 100;

                    MoveTo(20, 48); TextFace(bold);
                    RGBForeColor(&black);
                    DrawString(GetCachedString(STR_HERO_INFO, 1, "\pName                Str  Mv  Cmd  XP  Items"));
                    TextFace(0);

                    for (ai = 0; ai < armyCount && heroCount < 8; ai++) {
                        unsigned char *army = gs + 0x1604 + ai * 0x42;
                        short owner = (short)(unsigned char)army[0x15];
                        short u;
                        if (owner != curPlayer) continue;

                        for (u = 0; u < 4; u++) {
                            short uType = (short)(unsigned char)army[0x16 + u];
                            if (uType == 0x1C) {
                                short yp = 68 + heroCount * 24;
                                unsigned char *heroName;
                                Str255 hname;
                                short len;
                                short itemCount = 0, sl;

                                heroArmyIds[heroCount] = ai;

                                /* Hero name */
                                if (ai < 40) {
                                    heroName = gs + 0x224 + ai * 0x14;
                                    len = 0;
                                    while (len < 18 && heroName[len] != 0) len++;
                                    hname[0] = (unsigned char)len;
                                    BlockMoveData(heroName, hname + 1, len);
                                } else {
                                    hname[0] = 4;
                                    BlockMoveData("Hero", hname + 1, 4);
                                }

                                /* Highlight row on hover-ish with alternating bg */
                                if (heroCount % 2 == 1) {
                                    RGBColor altBg = {0xCCCC, 0xCCCC, 0xDDDD};
                                    Rect rowR;
                                    SetRect(&rowR, 2, yp - 12, 398, yp + 10);
                                    RGBForeColor(&altBg);
                                    PaintRect(&rowR);
                                }

                                RGBForeColor(&sPlayerColors[curPlayer + 1]);
                                MoveTo(20, yp);
                                DrawString(hname);

                                RGBForeColor(&black);
                                MoveTo(180, yp);
                                NumToString((long)(unsigned char)army[0x1e + u], numStr);
                                DrawString(numStr);

                                MoveTo(220, yp);
                                NumToString((long)(unsigned char)army[0x1a + u], numStr);
                                DrawString(numStr);

                                MoveTo(260, yp);
                                NumToString((long)(unsigned char)army[0x22 + u], numStr);
                                DrawString(numStr);

                                MoveTo(300, yp);
                                NumToString((long)(unsigned char)army[0x26 + u], numStr);
                                DrawString(numStr);

                                /* Item count */
                                for (sl = 0; sl < ITEM_SLOTS; sl++) {
                                    if (*(short *)(army + 0x3A + sl * 2) > 0)
                                        itemCount++;
                                }
                                MoveTo(340, yp);
                                if (itemCount > 0) {
                                    RGBColor gold = {0xCCCC, 0x9999, 0x0000};
                                    RGBForeColor(&gold);
                                    NumToString((long)itemCount, numStr);
                                    DrawString(numStr);
                                    DrawString("\p/4");
                                } else {
                                    RGBColor gray = {0x8888, 0x8888, 0x8888};
                                    RGBForeColor(&gray);
                                    DrawString("\p0/4");
                                }

                                heroCount++;
                                break;
                            }
                        }
                    }

                    if (heroCount == 0) {
                        RGBForeColor(&black);
                        MoveTo(100, 120);
                        DrawString(GetCachedString(STR_MISC, 48, "\pNo heroes in service."));
                    } else {
                        /* Hint text */
                        RGBColor hint = {0x6666, 0x6666, 0x9999};
                        RGBForeColor(&hint);
                        TextSize(9);
                        MoveTo(20, 68 + heroCount * 24 + 10);
                        DrawString(GetCachedString(STR_MISC, 76, "\pClick a hero row to view items."));
                        TextSize(10);
                    }
                }

                /* OK button */
                {
                    Rect okRect;
                    RGBColor black = {0, 0, 0};
                    SetRect(&okRect, 160, 268, 240, 290);
                    RGBForeColor(&black);
                    FrameRoundRect(&okRect, 8, 8);
                    MoveTo(186, 284);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                }

                UnlockPixels(GetGWorldPixMap(offGW));
                SetGWorld(savePort, saveGD);

                SetPort(heroWin);
                {
                    Rect dr = heroWin->portRect;
                    LockPixels(GetGWorldPixMap(offGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                             &((GrafPtr)heroWin)->portBits,
                             &gwRect, &dr, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(offGW));
                }
            }

            if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &heroEvt, 30, NULL)) {
                if (heroEvt.what == keyDown) {
                    heroDone = true;
                } else if (heroEvt.what == mouseDown) {
                    Point clickPt = heroEvt.where;
                    short hi;
                    GlobalToLocal(&clickPt);

                    /* Check if click is on a hero row */
                    for (hi = 0; hi < heroCount; hi++) {
                        short rowTop = 68 + hi * 24 - 12;
                        short rowBot = rowTop + 22;
                        if (clickPt.v >= rowTop && clickPt.v < rowBot &&
                            clickPt.h >= 2 && clickPt.h < 398) {
                            ShowItemsDialog(heroArmyIds[hi]);
                            needsRedraw = true;
                            break;
                        }
                    }
                    /* Check OK button */
                    if (clickPt.v >= 268 && clickPt.v <= 290 &&
                        clickPt.h >= 160 && clickPt.h <= 240)
                        heroDone = true;
                    /* Also dismiss on click outside hero rows and below hint */
                    if (hi >= heroCount && clickPt.v >= 268)
                        heroDone = true;
                } else if (heroEvt.what == updateEvt &&
                           (WindowPtr)heroEvt.message == heroWin) {
                    Rect dr;
                    BeginUpdate(heroWin);
                    SetPort(heroWin);
                    dr = heroWin->portRect;
                    LockPixels(GetGWorldPixMap(offGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                             &((GrafPtr)heroWin)->portBits,
                             &gwRect, &dr, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(offGW));
                    EndUpdate(heroWin);
                }
            }
        }

        DisposeGWorld(offGW);
        DisposeWindow(heroWin);
    }
}


/* ===================================================================
 * GetHeroLevel — return hero level 1-4 from XP
 *
 * Level 1 (Hero/Heroine): XP 0-2
 * Level 2 (Cavalier/Amazon): XP 3-5
 * Level 3 (Champion): XP 6-8
 * Level 4 (Paladin/Valkyrie): XP 9+
 * =================================================================== */
static short GetHeroLevel(short xp)
{
    if (xp >= 9) return 4;
    if (xp >= 6) return 3;
    if (xp >= 3) return 2;
    return 1;
}

/* XP needed to reach next level (returns 0 if max) */
static short GetXPForNextLevel(short xp)
{
    short lvl = GetHeroLevel(xp);
    if (lvl >= 4) return 0;
    static const short thresholds[] = {3, 6, 9};
    return thresholds[lvl - 1] - xp;
}

/* Female hero name indices (Brynhild, Thundra, Silvara, Ravenna, Elandra) */
static Boolean IsHeroFemale(short armyIdx)
{
    if (*gGameState == 0 || armyIdx < 0 || armyIdx >= 40) return false;
    {
        unsigned char *gs = (unsigned char *)*gGameState;
        unsigned char *heroName = gs + 0x224 + armyIdx * 0x14;
        /* Check first few chars for known female names */
        if (heroName[0] == 'B' && heroName[1] == 'r') return true;  /* Brynhild */
        if (heroName[0] == 'T' && heroName[1] == 'h' && heroName[2] == 'u') return true;  /* Thundra */
        if (heroName[0] == 'S' && heroName[1] == 'i') return true;  /* Silvara */
        if (heroName[0] == 'R' && heroName[1] == 'a') return true;  /* Ravenna */
        if (heroName[0] == 'E' && heroName[1] == 'l') return true;  /* Elandra */
    }
    return false;
}

/* Get hero title string based on level and gender */
static void GetHeroTitle(short level, Boolean female, Str255 out)
{
    switch (level) {
    case 1:
        if (female) { out[0] = 7; BlockMoveData("Heroine", out + 1, 7); }
        else        { out[0] = 4; BlockMoveData("Hero", out + 1, 4); }
        break;
    case 2:
        if (female) { out[0] = 6; BlockMoveData("Amazon", out + 1, 6); }
        else        { out[0] = 8; BlockMoveData("Cavalier", out + 1, 8); }
        break;
    case 3:
        out[0] = 8; BlockMoveData("Champion", out + 1, 8);
        break;
    case 4:
        if (female) { out[0] = 8; BlockMoveData("Valkyrie", out + 1, 8); }
        else        { out[0] = 7; BlockMoveData("Paladin", out + 1, 7); }
        break;
    default:
        out[0] = 4; BlockMoveData("Hero", out + 1, 4);
        break;
    }
}


/* ===================================================================
 * ShowHeroLevels — Show hero level progression table
 *
 * Displays: Name, Title, Level, Exp, Needs, Str, Move for each hero.
 * Accessed via Heroes > Hero Levels... (cmd 0x642)
 * =================================================================== */
static void ShowHeroLevels(void)
{
    WindowPtr lvlWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean done;
    EventRecord evt;

    if (*gGameState == 0) return;

    SetRect(&winRect, 0, 0, 440, 300);
    OffsetRect(&winRect, 120, 80);
    lvlWin = NewCWindow(NULL, &winRect, "\pHero Levels", true,
                         dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 440, 300);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (lvlWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (lvlWin) DisposeWindow(lvlWin);
        return;
    }

    done = false;
    while (!done) {
        /* Draw */
        {
            CGrafPtr sp;
            GDHandle sd;
            unsigned char *gs = (unsigned char *)*gGameState;
            short curPlayer = *(short *)(gs + 0x110);
            short armyCount = *(short *)(gs + 0x1602);
            short ai, heroCount = 0;
            RGBColor black = {0, 0, 0};
            RGBColor bg = {0xDDDD, 0xDDDD, 0xEEEE};
            Str255 numStr;

            if (armyCount > 100) armyCount = 100;

            GetGWorld(&sp, &sd);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            RGBForeColor(&bg);
            PaintRect(&gwRect);

            /* Title */
            RGBForeColor(&black);
            TextFont(2); TextSize(14); TextFace(bold);
            MoveTo(155, 22);
            DrawString(GetCachedString(STR_MISC, 39, "\pHero Levels"));
            TextFace(0); TextSize(10); TextFont(3);

            /* Column headers */
            TextFace(bold);
            MoveTo(15, 48);  DrawString(GetCachedString(STR_MISC, 40, "\pHero"));
            MoveTo(140, 48); DrawString(GetCachedString(STR_MISC, 41, "\pTitle"));
            MoveTo(225, 48); DrawString(GetCachedString(STR_MISC, 42, "\pLvl"));
            MoveTo(260, 48); DrawString(GetCachedString(STR_MISC, 43, "\pExp"));
            MoveTo(300, 48); DrawString(GetCachedString(STR_MISC, 44, "\pNeeds"));
            MoveTo(350, 48); DrawString(GetCachedString(STR_MISC, 45, "\pStr"));
            MoveTo(395, 48); DrawString(GetCachedString(STR_MISC, 46, "\pMove"));
            TextFace(0);

            /* Header line */
            {
                RGBColor gray = {0x9999, 0x9999, 0x9999};
                RGBForeColor(&gray);
                MoveTo(10, 52);
                LineTo(430, 52);
            }

            /* Hero rows */
            for (ai = 0; ai < armyCount && heroCount < 8; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                short owner = (short)(unsigned char)army[0x15];
                short u;
                if (owner != curPlayer) continue;

                for (u = 0; u < 4; u++) {
                    if ((short)(unsigned char)army[0x16 + u] == 0x1C) {
                        short yp = 70 + heroCount * 24;
                        short xp_val = (short)(unsigned char)army[0x26 + u];
                        short level = GetHeroLevel(xp_val);
                        short needs = GetXPForNextLevel(xp_val);
                        short str = (short)(unsigned char)army[0x1e + u];
                        short mov = (short)(unsigned char)army[0x1a + u];
                        Boolean female = IsHeroFemale(ai);
                        Str255 title, hname;

                        /* Alternating row background */
                        if (heroCount % 2 == 1) {
                            RGBColor altBg = {0xCCCC, 0xCCCC, 0xDDDD};
                            Rect rowR;
                            SetRect(&rowR, 2, yp - 12, 438, yp + 10);
                            RGBForeColor(&altBg);
                            PaintRect(&rowR);
                        }

                        /* Hero name */
                        {
                            unsigned char *heroName = gs + 0x224 + ai * 0x14;
                            short len = 0;
                            while (len < 18 && heroName[len] != 0) len++;
                            hname[0] = (unsigned char)len;
                            BlockMoveData(heroName, hname + 1, len);
                        }
                        RGBForeColor(&sPlayerColors[curPlayer + 1]);
                        MoveTo(15, yp);
                        DrawString(hname);

                        /* Title */
                        GetHeroTitle(level, female, title);
                        RGBForeColor(&black);
                        MoveTo(140, yp);
                        DrawString(title);

                        /* Level */
                        MoveTo(230, yp);
                        NumToString((long)level, numStr);
                        DrawString(numStr);

                        /* Exp */
                        MoveTo(265, yp);
                        NumToString((long)xp_val, numStr);
                        DrawString(numStr);

                        /* Needs */
                        MoveTo(310, yp);
                        if (needs > 0) {
                            NumToString((long)needs, numStr);
                            DrawString(numStr);
                        } else {
                            RGBColor gold = {0xCCCC, 0x9999, 0x0000};
                            RGBForeColor(&gold);
                            DrawString(GetCachedString(STR_MISC, 47, "\pMAX"));
                            RGBForeColor(&black);
                        }

                        /* Str */
                        MoveTo(355, yp);
                        NumToString((long)str, numStr);
                        DrawString(numStr);

                        /* Move */
                        MoveTo(400, yp);
                        NumToString((long)mov, numStr);
                        DrawString(numStr);

                        heroCount++;
                        break;
                    }
                }
            }

            if (heroCount == 0) {
                RGBForeColor(&black);
                MoveTo(140, 120);
                DrawString(GetCachedString(STR_MISC, 48, "\pNo heroes in service."));
            }

            /* OK button */
            {
                Rect okRect;
                SetRect(&okRect, 180, 268, 260, 290);
                RGBForeColor(&black);
                FrameRoundRect(&okRect, 8, 8);
                TextFace(bold);
                MoveTo(208, 284);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                TextFace(0);
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(sp, sd);

            /* Blit */
            SetPort(lvlWin);
            {
                Rect dr = lvlWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)lvlWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
            }
        }

        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &evt, 30, NULL)) {
            if (evt.what == keyDown) {
                done = true;
            } else if (evt.what == mouseDown) {
                Point mp = evt.where;
                SetPort(lvlWin);
                GlobalToLocal(&mp);
                if (mp.v >= 268 && mp.v <= 290 && mp.h >= 180 && mp.h <= 260)
                    done = true;
                if (mp.v >= 268) done = true;
            } else if (evt.what == updateEvt &&
                       (WindowPtr)evt.message == lvlWin) {
                Rect dr;
                BeginUpdate(lvlWin);
                SetPort(lvlWin);
                dr = lvlWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)lvlWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(lvlWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(lvlWin);
}


/* ===================================================================
 * ShowRuinsDialog — Show all ruins, temples, and libraries on the map
 * with their search status.  Accessed via View > Ruins... menu.
 * =================================================================== */
static void ShowRuinsDialog(void)
{
    WindowPtr ruinWin;
    GWorldPtr offGW;
    Rect winRect, gwRect, okRect;
    Boolean ruinDone, needsRedraw;
    EventRecord ruinEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    short scrollOffset = 0;

    if (*gGameState == 0) return;

    SetRect(&winRect, 0, 0, 380, 340);
    OffsetRect(&winRect, 150, 70);
    ruinWin = NewCWindow(NULL, &winRect, "\p", true,
                         plainDBox, (WindowPtr)-1L, false, 0);
    SetRect(&gwRect, 0, 0, 380, 340);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (!ruinWin || !offGW) {
        if (offGW) DisposeGWorld(offGW);
        if (ruinWin) DisposeWindow(ruinWin);
        return;
    }

    SetRect(&okRect, 150, 306, 230, 328);
    needsRedraw = true;
    ruinDone = false;

    while (!ruinDone) {
        if (needsRedraw) {
            unsigned char *gs = (unsigned char *)*gGameState;
            short cityCount = *(short *)(gs + 0x810);
            short curPlayer = *(short *)(gs + 0x110);
            short ci, ruinRow = 0;
            Str255 numStr;

            if (cityCount > 40) cityCount = 40;
            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            {
                RGBColor bg = {0xEEEE, 0xEEEE, 0xDDDD};
                RGBForeColor(&bg);
                PaintRect(&gwRect);
            }

            /* Title */
            {
                RGBColor black = {0, 0, 0};
                RGBForeColor(&black);
                TextFont(2); TextSize(14); TextFace(bold);
                MoveTo(120, 22);
                DrawString(GetCachedString(STR_MISC, 49, "\pRuins Report"));
                TextFace(0); TextFont(3); TextSize(9);
            }

            /* Column headers */
            {
                RGBColor black = {0, 0, 0};
                RGBForeColor(&black);
                TextFace(bold);
                MoveTo(20, 44);  DrawString(GetCachedString(STR_MISC, 50, "\pType"));
                MoveTo(100, 44); DrawString(GetCachedString(STR_MISC, 51, "\pLocation"));
                MoveTo(200, 44); DrawString(GetCachedString(STR_MISC, 52, "\pStatus"));
                MoveTo(290, 44); DrawString(GetCachedString(STR_MISC, 53, "\pVisible"));
                TextFace(0);
            }

            /* Separator */
            {
                RGBColor gray = {0x9999, 0x9999, 0x9999};
                RGBForeColor(&gray);
                MoveTo(10, 50); LineTo(370, 50);
            }

            /* List all ruins/temples/libraries */
            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *site = gs + 0x812 + ci * 0x20;
                short sType = (short)(unsigned char)site[0x18];
                short sx = *(short *)(site + 0x00);
                short sy = *(short *)(site + 0x02);
                short yPos;
                Boolean isRuin, isVisible;
                const unsigned char *typeName;

                /* Original ruin/temple/library or already searched */
                isRuin = (sType == 2 || sType == 5 || sType == 6);

                /* Only show sites that are/were ruins.  For unsearched sites,
                 * check site type.  For searched (type 0), we include them
                 * only if they have the ruin flag (we'll show ALL since we
                 * can't distinguish cleared ruins from regular cities easily
                 * — just show the ones currently marked as ruins or searched) */
                if (!isRuin) continue;

                if (ruinRow < scrollOffset) { ruinRow++; continue; }
                yPos = 66 + (ruinRow - scrollOffset) * 20;
                if (yPos > 290) { ruinRow++; continue; }
                ruinRow++;

                /* Alternating row background */
                if ((ruinRow) % 2 == 0) {
                    Rect rowBg;
                    RGBColor altBg = {0xDDDD, 0xDDDD, 0xCCCC};
                    SetRect(&rowBg, 10, yPos - 12, 370, yPos + 6);
                    RGBForeColor(&altBg);
                    PaintRect(&rowBg);
                }

                /* Type name + icon */
                if (sType == 2) typeName = "\pTemple";
                else if (sType == 5) typeName = "\pRuin";
                else typeName = "\pLibrary";

                {
                    RGBColor typeCol;
                    if (sType == 2) {
                        typeCol.red = 0x6666; typeCol.green = 0x6666; typeCol.blue = 0xCCCC;
                    } else if (sType == 5) {
                        typeCol.red = 0x9999; typeCol.green = 0x6666; typeCol.blue = 0x3333;
                    } else {
                        typeCol.red = 0x3333; typeCol.green = 0x8888; typeCol.blue = 0x3333;
                    }
                    RGBForeColor(&typeCol);
                    {
                        Rect dot;
                        SetRect(&dot, 20, yPos - 8, 30, yPos + 2);
                        /* Use ruin icon if available, else colored dot */
                        if (sRuinIcons[0])
                            PlotCIcon(&dot, sRuinIcons[0]);
                        else
                            PaintOval(&dot);
                    }
                    MoveTo(34, yPos);
                    DrawString(typeName);
                }

                /* Location */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    MoveTo(110, yPos);
                    NumToString((long)sx, numStr); DrawString(numStr);
                    DrawString("\p, ");
                    NumToString((long)sy, numStr); DrawString(numStr);
                }

                /* Status */
                {
                    RGBColor unsearched = {0xCCCC, 0x8888, 0x3333};
                    RGBForeColor(&unsearched);
                    MoveTo(210, yPos);
                    DrawString(GetCachedString(STR_MISC, 54, "\pUnsearched"));
                }

                /* Visibility (fog of war) */
                isVisible = true;
                if (sOptHiddenMap) {
                    if (sx >= 0 && sx < sMapWidth && sy >= 0 && sy < sMapHeight) {
                        isVisible = FogGetBit(sFogExplored[curPlayer], sx, sy);
                    }
                }
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    MoveTo(300, yPos);
                    DrawString(isVisible ? "\pYes" : "\pNo");
                }
            }

            /* Summary at bottom */
            {
                RGBColor gray2 = {0x6666, 0x6666, 0x6666};
                short totalRuins = 0;
                for (ci = 0; ci < cityCount; ci++) {
                    short st = (short)(unsigned char)(gs + 0x812 + ci * 0x20)[0x18];
                    if (st == 2 || st == 5 || st == 6) totalRuins++;
                }
                RGBForeColor(&gray2);
                TextSize(9);
                MoveTo(20, 298);
                DrawString(GetCachedString(STR_MISC, 55, "\pTotal: "));
                NumToString((long)totalRuins, numStr); DrawString(numStr);
                DrawString(GetCachedString(STR_MISC, 56, "\p unsearched"));
            }

            /* OK button */
            {
                RGBColor black = {0, 0, 0};
                RGBColor btnBg = {0xDDDD, 0xDDDD, 0xDDDD};
                RGBForeColor(&btnBg);
                PaintRoundRect(&okRect, 8, 8);
                RGBForeColor(&black);
                FrameRoundRect(&okRect, 8, 8);
                TextFace(bold);
                MoveTo(177, 322);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                TextFace(0);
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);

            SetPort(ruinWin);
            {
                Rect dr = ruinWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)ruinWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
            }
            needsRedraw = false;
        }

        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &ruinEvt, 30, NULL)) {
            if (ruinEvt.what == mouseDown) {
                Point mp = ruinEvt.where;
                SetPort(ruinWin);
                GlobalToLocal(&mp);
                if (PtInRect(mp, &okRect))
                    ruinDone = true;
                /* Click on a ruin row: scroll map to that location */
                else if (mp.v >= 54 && mp.v <= 290) {
                    short rowClicked = (mp.v - 54) / 20 + scrollOffset;
                    unsigned char *gs2 = (unsigned char *)*gGameState;
                    short cc = *(short *)(gs2 + 0x810);
                    short ci2, rowCount = 0;
                    if (cc > 40) cc = 40;
                    for (ci2 = 0; ci2 < cc; ci2++) {
                        short st = (short)(unsigned char)(gs2 + 0x812 + ci2 * 0x20)[0x18];
                        if (st == 2 || st == 5 || st == 6) {
                            if (rowCount == rowClicked) {
                                /* Scroll map to this ruin */
                                short rx = *(short *)(gs2 + 0x812 + ci2 * 0x20 + 0x00);
                                short ry = *(short *)(gs2 + 0x812 + ci2 * 0x20 + 0x02);
                                sViewportX = rx - 7;
                                sViewportY = ry - 5;
                                if (sViewportX < 0) sViewportX = 0;
                                if (sViewportY < 0) sViewportY = 0;
                                if (*gMainGameWindow != 0) {
                                    SetPort((WindowPtr)*gMainGameWindow);
                                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                                }
                                if (*gOverviewWindow != 0) {
                                    SetPort((WindowPtr)*gOverviewWindow);
                                    InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                                }
                                break;
                            }
                            rowCount++;
                        }
                    }
                }
            } else if (ruinEvt.what == keyDown) {
                char ch = ruinEvt.message & charCodeMask;
                if (ch == '\r' || ch == 3 || ch == 27)
                    ruinDone = true;
            } else if (ruinEvt.what == updateEvt &&
                       (WindowPtr)ruinEvt.message == ruinWin) {
                BeginUpdate(ruinWin);
                needsRedraw = true;
                EndUpdate(ruinWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(ruinWin);
}


/* ===================================================================
 * ShowStackDialog — Show all units at the selected army's location
 * =================================================================== */
static void ShowStackDialog(void)
{
    WindowPtr stkWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean stkDone;
    EventRecord stkEvt;
    CGrafPtr savePort;
    GDHandle saveGD;

    if (*gGameState == 0 || sSelectedArmy < 0) {
        ShowBriefMessage("\pSelect an army first");
        return;
    }

    SetRect(&winRect, 0, 0, 340, 260);
    OffsetRect(&winRect, 170, 120);
    stkWin = NewCWindow(NULL, &winRect, "\pArmy Stack", true,
                        dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, 340, 260);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (stkWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (stkWin) DisposeWindow(stkWin);
        return;
    }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    {
        RGBColor bg = {0xEEEE, 0xEEEE, 0xEEEE};
        RGBForeColor(&bg);
        PaintRect(&gwRect);
    }

    {
        unsigned char *gs = (unsigned char *)*gGameState;
        unsigned char *selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
        short sx = *(short *)(selArmy + 0x00);
        short sy = *(short *)(selArmy + 0x02);
        short armyCount = *(short *)(gs + 0x1602);
        short ai, stackCount = 0;
        RGBColor black = {0, 0, 0};
        Str255 numStr;

        if (armyCount > 100) armyCount = 100;

        RGBForeColor(&black);
        TextSize(12);
        TextFace(bold);
        MoveTo(90, 22);
        DrawString(GetCachedString(STR_STACK_INFO, 0, "\pArmy Stack at ("));
        NumToString((long)sx, numStr);
        DrawString(numStr);
        DrawString("\p, ");
        NumToString((long)sy, numStr);
        DrawString(numStr);
        DrawString("\p)");
        TextFace(0);
        TextSize(10);

        MoveTo(20, 46);
        TextFace(bold);
        DrawString(GetCachedString(STR_STACK_INFO, 1, "\pArmy       Units  Str   Owner"));
        TextFace(0);

        for (ai = 0; ai < armyCount && stackCount < 8; ai++) {
            unsigned char *army = gs + 0x1604 + ai * 0x42;
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);

            if (ax == sx && ay == sy) {
                short yp = 66 + stackCount * 22;
                short owner = (short)(unsigned char)army[0x15];
                short units = 0, str = 0, u;

                for (u = 0; u < 4; u++) {
                    if ((unsigned char)army[0x16 + u] != 0xFF) {
                        units++;
                        str += (short)(unsigned char)army[0x1e + u];
                    }
                }

                /* Highlight selected army */
                if (ai == sSelectedArmy) {
                    RGBColor hilite = {0xFFFF, 0xFFFF, 0xAAAA};
                    Rect hlRect;
                    SetRect(&hlRect, 16, yp - 12, 324, yp + 8);
                    RGBForeColor(&hilite);
                    PaintRect(&hlRect);
                }

                RGBForeColor(&sPlayerColors[owner < 8 ? owner + 1 : 8]);
                {
                    Rect cb;
                    SetRect(&cb, 20, yp - 8, 36, yp + 4);
                    PaintRect(&cb);
                    /* Unit type icon overlay */
                    {
                        short uType = (short)(unsigned char)army[0x16];
                        if (uType < 8 && sStackTypeIcons[uType])
                            PlotCIcon(&cb, sStackTypeIcons[uType]);
                    }
                }

                RGBForeColor(&black);
                MoveTo(42, yp);
                DrawString(GetCachedString(STR_STACK_INFO, 10, "\pArmy "));
                NumToString((long)(ai + 1), numStr);
                DrawString(numStr);

                MoveTo(130, yp);
                NumToString((long)units, numStr);
                DrawString(numStr);

                MoveTo(190, yp);
                NumToString((long)str, numStr);
                DrawString(numStr);

                MoveTo(250, yp);
                {
                    unsigned char *fname = gs + owner * FACTION_NAME_LEN;
                    Str255 pname;
                    short len = 0;
                    while (len < 10 && fname[len] != 0) len++;
                    pname[0] = (unsigned char)len;
                    BlockMoveData(fname, pname + 1, len);
                    DrawString(pname);
                }

                stackCount++;
            }
        }

        if (stackCount == 0) {
            MoveTo(80, 100);
            DrawString(GetCachedString(STR_STACK_INFO, 11, "\pNo armies at this location."));
        }
    }

    /* OK button */
    {
        Rect okRect;
        RGBColor black = {0, 0, 0};
        SetRect(&okRect, 130, 228, 210, 250);
        RGBForeColor(&black);
        FrameRoundRect(&okRect, 8, 8);
        MoveTo(156, 244);
        DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);

    SetPort(stkWin);
    {
        Rect dr = stkWin->portRect;
        LockPixels(GetGWorldPixMap(offGW));
        CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                 &((GrafPtr)stkWin)->portBits,
                 &gwRect, &dr, srcCopy, NULL);
        UnlockPixels(GetGWorldPixMap(offGW));
    }

    stkDone = false;
    while (!stkDone) {
        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &stkEvt, 30, NULL)) {
            if (stkEvt.what == mouseDown || stkEvt.what == keyDown)
                stkDone = true;
            else if (stkEvt.what == updateEvt &&
                     (WindowPtr)stkEvt.message == stkWin) {
                Rect dr;
                BeginUpdate(stkWin);
                SetPort(stkWin);
                dr = stkWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)stkWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(stkWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(stkWin);
}


static void TryAutoSearchRuin(short armyIdx);

/* ===================================================================
 * MoveAllArmies — Execute one movement step for all armies with orders
 *
 * Called from "Move All Armies" (Cmd+Shift+M).  Each army with
 * has_orders == 1 takes one step towards its target.  Simple
 * greedy movement (move 1 tile towards target per call).
 * Now includes combat resolution when armies collide with enemies.
 * =================================================================== */
static void MoveAllArmies(void)
{
    unsigned char *gs;
    short armyCount, i, currentPlayer;
    short outerPass, anyMoved;

    if (*gGameState == 0)
        return;

    gs = (unsigned char *)*gGameState;
    currentPlayer = *(short *)(gs + 0x110);

    /* Outer loop: repeat until no army can move */
    for (outerPass = 0; outerPass < 50; outerPass++) {
        anyMoved = 0;
        armyCount = *(short *)(gs + 0x1602);
        if (armyCount > 100) armyCount = 100;

        for (i = 0; i < armyCount; i++) {
            unsigned char *army = gs + 0x1604 + i * 0x42;
            short owner = (short)(unsigned char)army[0x15];
            short hasOrders = *(short *)(army + 0x32);

            if (owner != currentPlayer || hasOrders == 0)
                continue;

            {
                short curX = *(short *)(army + 0x00);
                short curY = *(short *)(army + 0x02);
                short tgtX = *(short *)(army + 0x34);
                short tgtY = *(short *)(army + 0x36);
                short dx = tgtX - curX;
                short dy = tgtY - curY;
                short stepX = 0, stepY = 0;
                short movePts = (short)(unsigned char)army[0x2e];

                if (movePts <= 0) continue;

                if (dx > 0) stepX = 1;
                else if (dx < 0) stepX = -1;
                if (dy > 0) stepY = 1;
                else if (dy < 0) stepY = -1;

                if (stepX != 0 || stepY != 0) {
                    short newX = curX + stepX;
                    short newY = curY + stepY;
                    short unitClass = (short)(unsigned char)army[0x16];
                    short cost = GetMovementCost(newX, newY, unitClass);

                    if (cost == 0 || movePts < cost) {
                        /* Direct path blocked: try all 8 directions */
                        static const short altDx[8] = {1,-1,0,0,1,-1,1,-1};
                        static const short altDy[8] = {0,0,1,-1,1,1,-1,-1};
                        long bestD2 = 999999L;
                        short bestC2 = 0, bestX2 = -1, bestY2 = -1, d2;
                        for (d2 = 0; d2 < 8; d2++) {
                            short nx2 = curX + altDx[d2];
                            short ny2 = curY + altDy[d2];
                            short nc2;
                            long nd2;
                            if (nx2 < 0 || nx2 >= sMapWidth ||
                                ny2 < 0 || ny2 >= sMapHeight) continue;
                            nc2 = GetMovementCost(nx2, ny2, unitClass);
                            if (nc2 <= 0 || nc2 > movePts) continue;
                            nd2 = (long)(tgtX - nx2) * (tgtX - nx2) +
                                  (long)(tgtY - ny2) * (tgtY - ny2) + nc2 * 2;
                            if (nd2 < bestD2) {
                                bestD2 = nd2; bestC2 = nc2;
                                bestX2 = nx2; bestY2 = ny2;
                            }
                        }
                        if (bestX2 < 0) {
                            *(short *)(army + 0x32) = 0;
                            continue;
                        }
                        newX = bestX2; newY = bestY2; cost = bestC2;
                    }

                    if (newX >= 0 && newX < sMapWidth &&
                        newY >= 0 && newY < sMapHeight) {
                        *(short *)(army + 0x00) = newX;
                        *(short *)(army + 0x02) = newY;
                        army[0x2e] = (unsigned char)(movePts - cost);
                        anyMoved = 1;

                        if (sOptHiddenMap) {
                            short armyOwner = (short)(unsigned char)army[0x15];
                            FogReveal(armyOwner, newX, newY);
                        }

                        if (CheckAndResolveCombat(i)) {
                            armyCount = *(short *)(gs + 0x1602);
                            if (armyCount > 100) armyCount = 100;
                            break;
                        }

                        /* Try merging with friendly army at destination */
                        if (TryMergeArmies(i)) {
                            armyCount = *(short *)(gs + 0x1602);
                            if (armyCount > 100) armyCount = 100;
                            break;
                        }

                        /* Auto-search ruins if hero on ruin */
                        TryAutoSearchRuin(i);
                    }
                }

                /* Check if reached destination */
                army = gs + 0x1604 + i * 0x42;  /* re-read in case of shifts */
                if (*(short *)(army + 0x00) == tgtX &&
                    *(short *)(army + 0x02) == tgtY) {
                    *(short *)(army + 0x32) = 0;
                }
            }
        }

        if (!anyMoved) break;

        /* Animate: redraw map after each movement pass with brief delay */
        if (*gMainGameWindow != 0) {
            WindowPtr mw = (WindowPtr)*gMainGameWindow;
            EventRecord dummyEvt;
            SetPort(mw);
            BeginUpdate(mw);
            DrawMapInWindow(mw);
            EndUpdate(mw);
            /* Brief delay for visual feedback (4 ticks = ~66ms) */
            {
                unsigned long end = TickCount() + SpeedTicks(4);
                while (TickCount() < end)
                    WaitNextEvent(0, &dummyEvt, 1, NULL);
            }
        }
    }

    /* Final redraw */
    if (*gMainGameWindow != 0) {
        SetPort((WindowPtr)*gMainGameWindow);
        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
    }
    if (*gOverviewWindow != 0) {
        SetPort((WindowPtr)*gOverviewWindow);
        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
    }
}


/* ===================================================================
 * InvalidateAllGameWindows — Force redraw of all game windows
 *
 * Called after modal dialogs (hero hire, army selection, turn splash)
 * to ensure the map, minimap, info panel, and status bar repaint.
 * =================================================================== */
static void InvalidateAllGameWindows(void)
{
    if (gMainGameWindow != NULL && *gMainGameWindow != 0) {
        SetPort((WindowPtr)*gMainGameWindow);
        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
    }
    if (gOverviewWindow != NULL && *gOverviewWindow != 0) {
        SetPort((WindowPtr)*gOverviewWindow);
        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
    }
    if (gInfoWindow != NULL && *gInfoWindow != 0) {
        SetPort((WindowPtr)*gInfoWindow);
        InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
    }
    if (gStatusWindow != NULL && *gStatusWindow != 0) {
        SetPort((WindowPtr)*gStatusWindow);
        InvalRect(&((WindowPtr)*gStatusWindow)->portRect);
    }
}


/* ===================================================================
 * ShowArmySelection — Let player pick starting army for their capital
 *
 * Shows a dialog with available unit types. The selected unit type
 * replaces the player's starting army at their capital city.
 * =================================================================== */
static void ShowArmySelection(short playerIdx)
{
    WindowPtr  selWin;
    Rect       winRect;
    Boolean    done = false;
    short      selected = 0;
    short      numChoices = 4;
    Rect       screenRect = qd.screenBits.bounds;
    unsigned char *gs;
    /* Match original dialog layout from screenshot */
    short      winW = 270, winH = 300;

    /* Unit types available at game start (from original scenario data) */
    static const char *armyChoiceNames[] = {
        "Light Infantry", "Heavy Infantry", "Cavalry", "Archers"
    };
    static const short armyMoves[]   = {10, 8, 14, 10};
    static const short armyHP[]      = {3, 4, 5, 3};
    static const short armySprites[] = {0, 2, 4, 6};
    static const short armyStrength[] = {2, 3, 4, 2};

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;

    SetRect(&winRect, 0, 0, winW, winH);
    OffsetRect(&winRect,
        (screenRect.right - winW) / 2,
        (screenRect.bottom - winH) / 2);

    selWin = NewCWindow(NULL, &winRect, "\pArmy Selection", true,
                         movableDBoxProc, (WindowPtr)-1L, false, 0);
    if (selWin == NULL) return;
    SetPort(selWin);

    while (!done) {
        EventRecord evt;
        Rect contentR = selWin->portRect;
        short ci;

        /* Draw dialog content matching original screenshot */
        {
            RGBColor black   = {0x0000, 0x0000, 0x0000};
            RGBColor white   = {0xFFFF, 0xFFFF, 0xFFFF};
            RGBColor yellow  = {0xFFFF, 0xDD00, 0x0000};
            RGBColor ltGray  = {0xCCCC, 0xCCCC, 0xCCCC};
            RGBColor mdGray  = {0xAAAA, 0xAAAA, 0xAAAA};
            RGBColor dkGray  = {0x5555, 0x5555, 0x5555};
            RGBColor vdkGray = {0x3333, 0x3333, 0x3333};
            short colorIdx = (playerIdx >= 0 && playerIdx < 8) ? playerIdx + 1 : 0;
            /* Slot positions: 4 evenly spaced across dialog */
            short slotW = 40, slotH = 36;
            short slotGap = 16;
            short totalSlotsW = numChoices * slotW + (numChoices - 1) * slotGap;
            short slotStartX = (winW - totalSlotsW) / 2;
            short slotX[4];
            short slotY = 120;

            for (ci = 0; ci < 4; ci++)
                slotX[ci] = slotStartX + ci * (slotW + slotGap);

            /* Marble background */
            DrawMarbleBackground(&contentR);

            /* Faction shield at top-left */
            {
                Rect shieldBg, shieldR;
                SetRect(&shieldBg, 10, 10, 10 + 44, 10 + 44);
                RGBForeColor(&sPlayerColors[colorIdx]);
                PaintRect(&shieldBg);
                RGBForeColor(&black);
                FrameRect(&shieldBg);
                SetRect(&shieldR, 12, 12, 12 + BIG_SHIELD_W, 12 + BIG_SHIELD_H);
                DrawBigShield(playerIdx, &shieldR);
            }

            /* "Select Starting Army" title next to shield */
            TextFont(3); TextSize(14); TextFace(bold);
            RGBForeColor(&black);
            MoveTo(62, 32);
            DrawString(GetCachedString(STR_GAME_SETUP, 9, "\pSelect Starting Army"));
            TextFace(0);

            /* "Choose your starting forces:" label */
            TextFont(3); TextSize(12); TextFace(bold);
            RGBForeColor(&black);
            MoveTo(12, 78);
            DrawString(GetCachedString(STR_GAME_SETUP, 10, "\pChoose your starting forces:"));
            TextFace(0);

            /* 4 unit type slots in horizontal row */
            for (ci = 0; ci < numChoices; ci++) {
                Rect slotR;
                SetRect(&slotR, slotX[ci], slotY, slotX[ci] + slotW, slotY + slotH);

                if (ci == selected) {
                    /* Selected slot: player color fill with yellow border */
                    RGBForeColor(&sPlayerColors[colorIdx]);
                    PaintRect(&slotR);
                    RGBForeColor(&yellow);
                    PenSize(2, 2);
                    FrameRect(&slotR);
                    PenSize(1, 1);
                } else {
                    /* Unselected slot: 3D sunken grey button */
                    RGBForeColor(&mdGray);
                    PaintRect(&slotR);
                    /* Dark edges on top and left (sunken look) */
                    RGBForeColor(&dkGray);
                    MoveTo(slotR.left, slotR.top);
                    LineTo(slotR.right - 1, slotR.top);
                    MoveTo(slotR.left, slotR.top);
                    LineTo(slotR.left, slotR.bottom - 1);
                    /* Light edges on bottom and right (sunken look) */
                    RGBForeColor(&white);
                    MoveTo(slotR.right - 1, slotR.top);
                    LineTo(slotR.right - 1, slotR.bottom - 1);
                    MoveTo(slotR.left, slotR.bottom - 1);
                    LineTo(slotR.right - 1, slotR.bottom - 1);
                }
            }

            /* Unit names below each slot */
            TextFont(3); TextSize(9); TextFace(0);
            for (ci = 0; ci < numChoices; ci++) {
                Str255 lbl;
                char *n = (char *)armyChoiceNames[ci];
                short ni, tw;
                for (ni = 0; n[ni]; ni++) lbl[ni + 1] = n[ni];
                lbl[0] = ni;
                tw = StringWidth(lbl);
                RGBForeColor((ci == selected) ? &yellow : &black);
                MoveTo(slotX[ci] + (slotW - tw) / 2, slotY + slotH + 14);
                DrawString(lbl);
            }

            /* Sunken info area with stats */
            {
                Rect infoR;
                Str255 numStr;
                short infoY = slotY + slotH + 30;

                /* 3D sunken info box */
                SetRect(&infoR, 10, infoY, winW - 10, infoY + 64);
                RGBForeColor(&ltGray);
                PaintRect(&infoR);
                /* Sunken border: dark top-left, light bottom-right */
                RGBForeColor(&dkGray);
                MoveTo(infoR.left, infoR.top);
                LineTo(infoR.right - 1, infoR.top);
                MoveTo(infoR.left, infoR.top);
                LineTo(infoR.left, infoR.bottom - 1);
                RGBForeColor(&white);
                MoveTo(infoR.right - 1, infoR.top);
                LineTo(infoR.right - 1, infoR.bottom - 1);
                MoveTo(infoR.left, infoR.bottom - 1);
                LineTo(infoR.right - 1, infoR.bottom - 1);

                TextFont(4); TextSize(10); TextFace(0);
                RGBForeColor(&black);

                /* Line 1: Movement and Hit Points */
                MoveTo(16, infoY + 16);
                DrawString(GetCachedString(STR_GAME_SETUP, 11, "\pMovement: "));
                NumToString((long)armyMoves[selected], numStr);
                DrawString(numStr);
                DrawString(GetCachedString(STR_GAME_SETUP, 12, "\p   Hit Points: "));
                NumToString((long)armyHP[selected], numStr);
                DrawString(numStr);

                /* Line 2: Strength and Units */
                MoveTo(16, infoY + 32);
                DrawString(GetCachedString(STR_GAME_SETUP, 13, "\pStrength: "));
                NumToString((long)armyStrength[selected], numStr);
                DrawString(numStr);
                DrawString(GetCachedString(STR_GAME_SETUP, 14, "\p   Units: 2"));

                /* Line 3: Description in grey italic */
                MoveTo(16, infoY + 50);
                RGBForeColor(&vdkGray);
                TextSize(9); TextFace(italic);
                if (selected == 0) DrawString(GetCachedString(STR_GAME_SETUP, 15, "\pFast scouts, weak in combat"));
                else if (selected == 1) DrawString(GetCachedString(STR_GAME_SETUP, 16, "\pSolid fighters, slow but tough"));
                else if (selected == 2) DrawString(GetCachedString(STR_GAME_SETUP, 17, "\pFastest unit, good attack power"));
                else DrawString(GetCachedString(STR_GAME_SETUP, 18, "\pRanged attack, moderate defense"));
                TextFace(0);
            }

            /* OK button - centered, 3D raised look */
            {
                Rect okR;
                short btnW = 80, btnH = 24;
                SetRect(&okR, winW / 2 - btnW / 2, winH - 40,
                              winW / 2 + btnW / 2, winH - 40 + btnH);
                RGBForeColor(&ltGray);
                PaintRect(&okR);
                /* Raised 3D border: light top-left, dark bottom-right */
                RGBForeColor(&white);
                MoveTo(okR.left, okR.top);
                LineTo(okR.right - 2, okR.top);
                MoveTo(okR.left, okR.top);
                LineTo(okR.left, okR.bottom - 2);
                RGBForeColor(&dkGray);
                MoveTo(okR.right - 1, okR.top);
                LineTo(okR.right - 1, okR.bottom - 1);
                MoveTo(okR.left, okR.bottom - 1);
                LineTo(okR.right - 1, okR.bottom - 1);
                /* Outer frame */
                RGBForeColor(&black);
                FrameRect(&okR);

                TextFont(3); TextSize(12); TextFace(bold);
                RGBForeColor(&black);
                {
                    short tw2 = StringWidth("\pOK");
                    MoveTo(okR.left + (btnW - tw2) / 2, okR.bottom - 7);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                }
                TextFace(0);
            }
        }

        WaitNextEvent(everyEvent, &evt, 10, NULL);

        if (evt.what == mouseDown) {
            Point clickPt = evt.where;
            GlobalToLocal(&clickPt);

            /* Check unit slot clicks (same layout calc as drawing) */
            {
                short slotW2 = 40, slotH2 = 36, slotGap2 = 16, slotY2 = 120;
                short totalW2 = numChoices * slotW2 + (numChoices - 1) * slotGap2;
                short startX2 = (winW - totalW2) / 2;
                for (ci = 0; ci < numChoices; ci++) {
                    Rect slotR;
                    short sx = startX2 + ci * (slotW2 + slotGap2);
                    SetRect(&slotR, sx, slotY2, sx + slotW2, slotY2 + slotH2);
                    if (PtInRect(clickPt, &slotR)) {
                        selected = ci;
                        break;
                    }
                }
                /* Also check name label area below slots */
                for (ci = 0; ci < numChoices; ci++) {
                    Rect nameR;
                    short sx = startX2 + ci * (slotW2 + slotGap2);
                    SetRect(&nameR, sx - 12, slotY2 + slotH2, sx + slotW2 + 12, slotY2 + slotH2 + 18);
                    if (PtInRect(clickPt, &nameR)) {
                        selected = ci;
                        break;
                    }
                }
            }

            /* Check OK button */
            {
                Rect okR;
                short btnW2 = 80, btnH2 = 24;
                SetRect(&okR, winW / 2 - btnW2 / 2, winH - 40,
                              winW / 2 + btnW2 / 2, winH - 40 + btnH2);
                if (PtInRect(clickPt, &okR)) {
                    done = true;
                }
            }
        } else if (evt.what == keyDown) {
            char key = evt.message & charCodeMask;
            if (key == 0x0D || key == 0x03) {
                done = true;
            } else if (key == 0x1C && selected > 0) {  /* Left arrow */
                selected--;
            } else if (key == 0x1D && selected < numChoices - 1) {  /* Right arrow */
                selected++;
            }
        } else if (evt.what == updateEvt) {
            WindowPtr updWin = (WindowPtr)evt.message;
            BeginUpdate(updWin);
            EndUpdate(updWin);
        }
    }

    /* Apply selected army type to player's starting army at capital */
    {
        short armyCount = *(short *)(gs + 0x1602);
        short ai;
        if (armyCount > 100) armyCount = 100;
        for (ai = 0; ai < armyCount; ai++) {
            unsigned char *army = gs + 0x1604 + ai * 0x42;
            short owner = (short)(unsigned char)army[0x15];
            if (owner == playerIdx) {
                /* Set 2 units of the selected type */
                army[0x14] = (unsigned char)armySprites[selected];
                army[0x16] = (unsigned char)selected;  /* unit_types[0] */
                army[0x17] = (unsigned char)selected;  /* unit_types[1] */
                army[0x18] = 0xFF;
                army[0x19] = 0xFF;
                army[0x1a] = (unsigned char)armyMoves[selected];
                army[0x1b] = (unsigned char)armyMoves[selected];
                army[0x1c] = 0;
                army[0x1d] = 0;
                army[0x1e] = (unsigned char)armyHP[selected];
                army[0x1f] = (unsigned char)armyHP[selected];
                army[0x20] = 0;
                army[0x21] = 0;
                *(short *)(army + 0x2a) = armyHP[selected] * 2;
                army[0x2c] = (unsigned char)selected;
                break;  /* only modify first army for this player */
            }
        }
    }

    DisposeWindow(selWin);
    InvalidateAllGameWindows();
}


/* Built-in hero name pool (subset of classic Warlords II names) */
static const unsigned char *sHeroNames[] = {
    "\pValendor",  "\pBrynhild",  "\pGareth",    "\pMordecai",
    "\pThundra",   "\pAelric",    "\pOakheart",  "\pStormwind",
    "\pIronhelm",  "\pSilvara",   "\pDrakonov",  "\pAshford",
    "\pCalador",   "\pFelstorm",  "\pRavenna",   "\pThorin",
    "\pVendigar",  "\pElandra",   "\pGrimjaw",   "\pMeridius",
};
#define NUM_HERO_NAMES 20

static Boolean ShowHeroHire(short playerIdx, Boolean initialOffer)
{
    WindowPtr  hireWin;
    GWorldPtr  offscreen = NULL;
    PicHandle  heroPict = NULL;
    Rect       winRect;
    Boolean    done = false;
    Boolean    hired = false;
    Rect       screenRect = qd.screenBits.bounds;
    unsigned char *gs;

    PlaySound(SND_DING);
    short      heroStrength, heroMovement, heroCommand, heroCost;
    short      heroNameIdx;
    short      playerGold;

    if (*gGameState == 0)
        return false;
    gs = (unsigned char *)*gGameState;

    playerGold = *(short *)(gs + 0x186 + playerIdx * 0x14);

    /* Initial offer at game start is always shown (hero is free).
     * Subsequent offers require gold >= 400 (original logic). */
    if (!initialOffer && playerGold < 400)
        return false;

    /* Generate hero stats */
    {
        unsigned long ticks = TickCount();
        heroNameIdx  = (short)(ticks % NUM_HERO_NAMES);
        heroStrength = 4 + (short)((ticks / 7) % 4);    /* 4-7 */
        heroMovement = 12 + (short)((ticks / 13) % 9);  /* 12-20 */
        heroCommand  = 1 + (short)((ticks / 17) % 3);   /* 1-3 */
        if (initialOffer) {
            heroCost = 0;  /* Initial hero at game start is free */
        } else {
            heroCost = 200 + heroStrength * 50 + heroCommand * 30;
            if (heroCost > playerGold)
                heroCost = playerGold;
        }
    }

    /* Load hero portrait PICT 3200 */
    heroPict = GetPicture(3200);

    /* Center 310x380 window */
    SetRect(&winRect,
        (screenRect.right - 310) / 2,
        (screenRect.bottom - 380) / 2,
        (screenRect.right - 310) / 2 + 310,
        (screenRect.bottom - 380) / 2 + 380);

    hireWin = NewCWindow(NULL, &winRect, "\p", true,
                          plainDBox, (WindowPtr)-1L, false, 0);
    if (hireWin == NULL)
        return false;

    SetPort(hireWin);

    {
        Rect obounds;
        SetRect(&obounds, 0, 0, 310, 380);
        NewGWorld(&offscreen, 0, &obounds, NULL, NULL, 0);
    }

    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        unsigned long startTick = TickCount();

        while (!done) {
            EventRecord evt;

            if (needsRedraw) {
                Rect r;
                CGrafPtr savedPort;
                GDHandle savedDevice;
                SetRect(&r, 0, 0, 310, 380);

                if (offscreen != NULL) {
                    GetGWorld(&savedPort, &savedDevice);
                    SetGWorld(offscreen, NULL);
                    LockPixels(GetGWorldPixMap(offscreen));
                }

                /* Dark background */
                {
                    DrawMarbleBackground(&r);
                }

                /* Gold border */
                {
                    RGBColor gold = {0xCCCC, 0x9999, 0x3333};
                    RGBForeColor(&gold);
                    PenSize(3, 3);
                    FrameRect(&r);
                    PenSize(1, 1);
                }

                /* Title: "A Hero!" */
                {
                    RGBColor gold = {0xFFFF, 0xCCCC, 0x3333};
                    RGBForeColor(&gold);
                    TextFont(2);
                    TextSize(18);
                    TextFace(bold);
                    MoveTo(105, 28);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 12, "\pA Hero!"));
                }

                /* Hero portrait (PICT 3200) */
                if (heroPict != NULL) {
                    Rect pictRect;
                    SetRect(&pictRect, 55, 38, 255, 198);
                    DrawPicture(heroPict, &pictRect);
                } else {
                    /* Fallback: colored rectangle with player shield color */
                    Rect placeholderRect;
                    SetRect(&placeholderRect, 55, 38, 255, 198);
                    RGBForeColor(&sPlayerColors[playerIdx + 1]);
                    PaintRect(&placeholderRect);
                    {
                        RGBColor black = {0, 0, 0};
                        RGBForeColor(&black);
                        FrameRect(&placeholderRect);
                    }
                }

                /* Hero name */
                {
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBForeColor(&white);
                    TextFont(2);
                    TextSize(14);
                    TextFace(bold);
                    MoveTo(20, 220);
                    DrawString(sHeroNames[heroNameIdx]);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 13, "\p offers service!"));
                }

                /* Stats */
                {
                    RGBColor valueColor = {0xCCCC, 0xDDDD, 0xFFFF};
                    RGBColor labelColor = {0xAAAA, 0xAAAA, 0xAAAA};
                    Str255 numStr;
                    short yBase = 244;

                    TextFont(3);
                    TextSize(10);
                    TextFace(0);

                    /* Strength */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 14, "\pStrength:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase);
                    NumToString((long)heroStrength, numStr);
                    DrawString(numStr);

                    /* Movement */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase + 18);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 15, "\pMovement:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase + 18);
                    NumToString((long)heroMovement, numStr);
                    DrawString(numStr);

                    /* Command */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase + 36);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 16, "\pCommand:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase + 36);
                    DrawString("\p+");
                    NumToString((long)heroCommand, numStr);
                    DrawString(numStr);

                    /* Cost */
                    RGBForeColor(&labelColor);
                    MoveTo(30, yBase + 54);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 17, "\pCost:"));
                    RGBForeColor(&valueColor);
                    MoveTo(130, yBase + 54);
                    if (heroCost == 0) {
                        DrawString(GetCachedString(STR_HERO_DIPLO, 18, "\pFree!"));
                    } else {
                        NumToString((long)heroCost, numStr);
                        DrawString(numStr);
                        DrawString(GetCachedString(STR_HERO_DIPLO, 19, "\p gp"));
                    }

                    /* Near: (first city owned by this player) */
                    RGBForeColor(&labelColor);
                    MoveTo(180, yBase);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 20, "\pNear:"));
                    RGBForeColor(&valueColor);
                    MoveTo(180, yBase + 18);
                    {
                        /* Show faction name as location */
                        Str255 pName;
                        unsigned char *namePtr = gs + playerIdx * 20;
                        short nlen = 0;
                        while (nlen < 20 && namePtr[nlen] != 0)
                            nlen++;
                        pName[0] = (unsigned char)nlen;
                        BlockMoveData(namePtr, pName + 1, nlen);
                        DrawString(pName);
                    }
                }

                /* Buttons: Hire and Don't Hire */
                {
                    RGBColor black = {0, 0, 0};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBColor greenBg = {0x3333, 0x9999, 0x3333};
                    RGBColor redBg = {0x9999, 0x3333, 0x3333};
                    Rect hireBtn, dontBtn;

                    SetRect(&hireBtn, 30, 345, 140, 368);
                    SetRect(&dontBtn, 170, 345, 280, 368);

                    /* "Hire" button (green tint) */
                    RGBForeColor(&greenBg);
                    PaintRoundRect(&hireBtn, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&hireBtn, 8, 8);
                    PenSize(2, 2);
                    FrameRoundRect(&hireBtn, 8, 8);
                    PenSize(1, 1);
                    RGBForeColor(&white);
                    TextFont(3);
                    TextSize(10);
                    TextFace(bold);
                    MoveTo(hireBtn.left + 34, hireBtn.bottom - 6);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 21, "\pHire"));

                    /* "Don't Hire" button (red tint) */
                    RGBForeColor(&redBg);
                    PaintRoundRect(&dontBtn, 8, 8);
                    RGBForeColor(&black);
                    FrameRoundRect(&dontBtn, 8, 8);
                    RGBForeColor(&white);
                    TextFace(0);
                    MoveTo(dontBtn.left + 18, dontBtn.bottom - 6);
                    DrawString(GetCachedString(STR_HERO_DIPLO, 22, "\pDon't Hire"));
                }

                /* Blit offscreen to window */
                if (offscreen != NULL) {
                    UnlockPixels(GetGWorldPixMap(offscreen));
                    SetGWorld(savedPort, savedDevice);
                    SetPort(hireWin);
                    CopyBits((BitMap *)*GetGWorldPixMap(offscreen),
                             &((GrafPtr)hireWin)->portBits,
                             &r, &hireWin->portRect,
                             srcCopy, NULL);
                }

                needsRedraw = false;
            }

            WaitNextEvent(everyEvent, &evt, 30, NULL);

            if (evt.what == mouseDown) {
                Point localPt = evt.where;
                SetPort(hireWin);
                GlobalToLocal(&localPt);

                /* "Hire" button */
                {
                    Rect hireBtn;
                    SetRect(&hireBtn, 30, 345, 140, 368);
                    if (PtInRect(localPt, &hireBtn)) {
                        done = true;
                        hired = true;
                    }
                }

                /* "Don't Hire" button */
                {
                    Rect dontBtn;
                    SetRect(&dontBtn, 170, 345, 280, 368);
                    if (PtInRect(localPt, &dontBtn)) {
                        done = true;
                        hired = false;
                    }
                }
            }
            else if (evt.what == keyDown) {
                char key = evt.message & charCodeMask;
                if ((TickCount() - startTick) < 30)
                    continue;
                if (key == 0x0D || key == 0x03) {
                    /* Return/Enter = Hire */
                    done = true;
                    hired = true;
                }
                else if (key == 0x1B) {
                    /* Escape = Don't Hire */
                    done = true;
                    hired = false;
                }
            }
            else if (evt.what == updateEvt) {
                WindowPtr updWin = (WindowPtr)evt.message;
                BeginUpdate(updWin);
                EndUpdate(updWin);
                if (updWin == hireWin) {
                    needsRedraw = true;
                }
            }
        }
    }

    /* Process hire: deduct gold and create army record */
    if (hired && *gGameState != 0) {
        /* Deduct gold */
        *(short *)(gs + 0x186 + playerIdx * 0x14) -= heroCost;

        /* Create hero army record at next available slot */
        {
            short armyCount = *(short *)(gs + 0x1602);
            unsigned char *armyBase = gs + 0x1604 + armyCount * 0x42;

            /* Zero out the new record */
            {
                short b;
                for (b = 0; b < 0x42; b++)
                    armyBase[b] = 0;
            }

            /* Place hero at first city owned by this player */
            {
                short cityCount = *(short *)(gs + 0x810);
                short ci, heroX = 2, heroY = 2;
                if (cityCount > 40) cityCount = 40;
                for (ci = 0; ci < cityCount; ci++) {
                    unsigned char *city = gs + 0x812 + ci * 0x20;
                    if (*(short *)(city + 0x04) == playerIdx) {
                        heroX = *(short *)(city + 0x00);
                        heroY = *(short *)(city + 0x02);
                        break;
                    }
                }
                *(short *)(armyBase + 0x00) = heroX;
                *(short *)(armyBase + 0x02) = heroY;
            }

            /* Hero name */
            {
                const unsigned char *name = sHeroNames[heroNameIdx];
                short nlen = name[0];
                short b;
                for (b = 0; b < 16; b++)
                    armyBase[0x04 + b] = 0;
                for (b = 0; b < nlen && b < 15; b++)
                    armyBase[0x04 + b] = name[b + 1];
            }

            /* Sprite index: hero uses type 0x1C (28) */
            armyBase[0x14] = 0x1C;

            /* Owner */
            armyBase[0x15] = (unsigned char)playerIdx;

            /* Unit type slot 0 = hero (type 0x1C); rest empty */
            armyBase[0x16] = 0x1C;
            armyBase[0x17] = 0xFF;
            armyBase[0x18] = 0xFF;
            armyBase[0x19] = 0xFF;

            /* Movement */
            armyBase[0x1a] = (unsigned char)heroMovement;
            armyBase[0x1b] = 0;
            armyBase[0x1c] = 0;
            armyBase[0x1d] = 0;

            /* Hit points */
            armyBase[0x1e] = (unsigned char)heroStrength;
            armyBase[0x1f] = 0;
            armyBase[0x20] = 0;
            armyBase[0x21] = 0;

            /* Combat bonus (command) */
            armyBase[0x22] = (unsigned char)heroCommand;
            armyBase[0x23] = 0;
            armyBase[0x24] = 0;
            armyBase[0x25] = 0;

            /* Strength display */
            *(short *)(armyBase + 0x2a) = heroStrength;

            /* Initial movement points */
            armyBase[0x2e] = (unsigned char)(heroMovement);

            /* Increment army count */
            *(short *)(gs + 0x1602) = armyCount + 1;
        }

        /* Store hero name in hero_names table */
        {
            short heroSlot;
            for (heroSlot = 0; heroSlot < 40; heroSlot++) {
                if (*(gs + 0x544 + heroSlot * 2) == 0) {
                    /* Found inactive hero slot */
                    const unsigned char *name = sHeroNames[heroNameIdx];
                    short nlen = name[0];
                    short b;
                    for (b = 0; b < 20; b++)
                        *(gs + 0x224 + heroSlot * 20 + b) = 0;
                    for (b = 0; b < nlen && b < 19; b++)
                        *(gs + 0x224 + heroSlot * 20 + b) = name[b + 1];
                    *(short *)(gs + 0x544 + heroSlot * 2) = 1;  /* active */
                    break;
                }
            }
        }
    }

    if (heroPict != NULL)
        ReleaseResource((Handle)heroPict);
    if (offscreen != NULL)
        DisposeGWorld(offscreen);
    DisposeWindow(hireWin);
    InvalidateAllGameWindows();
    return hired;
}


/* ===================================================================
 * CheckVictoryConditions — Check if any player has won or lost
 *
 * Victory: a single player owns all cities
 * Defeat: current human player has no cities AND no armies
 * Returns: 0=no result, 1=victory, -1=defeat
 * =================================================================== */
static short CheckVictoryConditions(void)
{
    unsigned char *gs;
    short cityCount, armyCount;
    short playerCities[8], playerArmies[8];
    short ci, ai, pi;
    short curPlayer;
    short alivePlayers = 0;
    short lastAlive = -1;

    if (*gGameState == 0) return 0;
    gs = (unsigned char *)*gGameState;
    curPlayer = *(short *)(gs + 0x110);
    cityCount = *(short *)(gs + 0x810);
    armyCount = *(short *)(gs + 0x1602);
    if (cityCount > 40) cityCount = 40;
    if (armyCount > 100) armyCount = 100;

    for (pi = 0; pi < 8; pi++) {
        playerCities[pi] = 0;
        playerArmies[pi] = 0;
    }

    for (ci = 0; ci < cityCount; ci++) {
        short owner = *(short *)(gs + 0x812 + ci * 0x20 + 0x04);
        if (owner >= 0 && owner < 8) playerCities[owner]++;
    }
    for (ai = 0; ai < armyCount; ai++) {
        short owner = (short)(unsigned char)*(gs + 0x1604 + ai * 0x42 + 0x15);
        if (owner >= 0 && owner < 8) playerArmies[owner]++;
    }

    for (pi = 0; pi < 8; pi++) {
        if (*(short *)(gs + 0x138 + pi * 2) != 0 &&
            (playerCities[pi] > 0 || playerArmies[pi] > 0)) {
            alivePlayers++;
            lastAlive = pi;
        }
    }

    /* Only one player left alive = victory */
    if (alivePlayers == 1 && lastAlive >= 0)
        return (lastAlive == curPlayer) ? 1 : -1;

    /* Allied victory: if diplomacy enabled and all alive players are at peace */
    if (sOptDiplomacy && alivePlayers >= 2) {
        Boolean allAllied = true;
        short pa, pb;
        for (pa = 0; pa < 8 && allAllied; pa++) {
            if (*(short *)(gs + 0x138 + pa * 2) == 0 ||
                (playerCities[pa] == 0 && playerArmies[pa] == 0)) continue;
            for (pb = pa + 1; pb < 8 && allAllied; pb++) {
                if (*(short *)(gs + 0x138 + pb * 2) == 0 ||
                    (playerCities[pb] == 0 && playerArmies[pb] == 0)) continue;
                if (*(short *)(gs + 0x1582 + (pa * 8 + pb) * 2) < 0x1000)
                    allAllied = false;
            }
        }
        if (allAllied) {
            /* All alive players are allied — current player wins (shared victory) */
            return (playerCities[curPlayer] > 0 || playerArmies[curPlayer] > 0) ? 1 : -1;
        }
    }

    /* Current player has nothing = defeat */
    if (playerCities[curPlayer] == 0 && playerArmies[curPlayer] == 0)
        return -1;

    return 0;
}


/* ===================================================================
 * ShowVictoryDialog — Show victory or defeat screen
 * =================================================================== */
static void ShowVictoryDialog(Boolean victory)
{
    WindowPtr vicWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean vicDone;
    EventRecord vicEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    PicHandle bgPict;
    short winW = 360, winH = 260;

    PlaySound(victory ? SND_ORCH : SND_DRAMATIC);

    /* Try to load victory/defeat artwork PICT */
    bgPict = GetPicture(victory ? 4501 : 4502);
    if (bgPict) {
        Rect pf = (**bgPict).picFrame;
        winW = pf.right - pf.left;
        winH = pf.bottom - pf.top;
    }

    SetRect(&winRect, 0, 0, winW, winH);
    OffsetRect(&winRect,
        (qd.screenBits.bounds.right - winW) / 2,
        (qd.screenBits.bounds.bottom - winH) / 2);
    vicWin = NewCWindow(NULL, &winRect,
                        victory ? "\pVICTORY!" : "\pDefeat...", true,
                        dBoxProc, (WindowPtr)-1, false, 0);
    SetRect(&gwRect, 0, 0, winW, winH);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (vicWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (vicWin) DisposeWindow(vicWin);
        return;
    }

    GetGWorld(&savePort, &saveGD);
    SetGWorld(offGW, NULL);
    LockPixels(GetGWorldPixMap(offGW));

    /* Background: original PICT artwork or fallback color */
    if (bgPict) {
        DrawPicture(bgPict, &gwRect);
    } else {
        RGBColor bg;
        if (victory) {
            bg.red = 0xFFFF; bg.green = 0xFFFF; bg.blue = 0x8888;
        } else {
            bg.red = 0x4444; bg.green = 0x2222; bg.blue = 0x2222;
        }
        RGBForeColor(&bg);
        PaintRect(&gwRect);
    }

    {
        RGBColor textColor;
        if (victory) {
            textColor.red = 0; textColor.green = 0; textColor.blue = 0;
        } else {
            textColor.red = 0xFFFF; textColor.green = 0xCCCC; textColor.blue = 0xCCCC;
        }
        RGBForeColor(&textColor);
        TextSize(14);
        TextFace(bold);
        MoveTo(80, 40);
        if (victory) {
            DrawString(GetCachedString(STR_VICTORY, 0, "\pGlorious Victory!"));
        } else {
            DrawString(GetCachedString(STR_VICTORY, 1, "\pYou Have Been Defeated!"));
        }
        TextFace(0);
        TextSize(10);

        if (*gGameState != 0) {
            unsigned char *gs = (unsigned char *)*gGameState;
            short curPlayer = *(short *)(gs + 0x110);
            Str255 numStr;

            /* Faction shield next to title */
            {
                Rect shR;
                SetRect(&shR, 40, 22, 40 + BIG_SHIELD_W, 22 + BIG_SHIELD_H);
                DrawBigShield(curPlayer, &shR);
            }

            MoveTo(40, 80);
            if (victory) {
                DrawString(GetCachedString(STR_VICTORY, 2, "\pAll enemies have been vanquished."));
                MoveTo(40, 100);
                DrawString(GetCachedString(STR_VICTORY, 3, "\pYour kingdom reigns supreme!"));
            } else {
                DrawString(GetCachedString(STR_VICTORY, 4, "\pYour forces have been eliminated."));
                MoveTo(40, 100);
                DrawString(GetCachedString(STR_VICTORY, 5, "\pThe realm falls to darkness..."));
            }

            MoveTo(40, 130);
            DrawString(GetCachedString(STR_VICTORY, 6, "\pTurns played: "));
            NumToString((long)*(short *)(gs + 0x136), numStr);
            DrawString(numStr);

            MoveTo(40, 150);
            {
                short gold = *(short *)(gs + 0x186 + curPlayer * 0x14);
                DrawString(GetCachedString(STR_VICTORY, 7, "\pFinal treasury: "));
                NumToString((long)gold, numStr);
                DrawString(numStr);
                DrawString(GetCachedString(STR_VICTORY, 16, "\p gold"));
            }

            /* Battle statistics from history */
            {
                short ei2, battlesWon = 0, battlesLost = 0, citiesCap = 0, heroesHired = 0;
                for (ei2 = 0; ei2 < sHistoryCount; ei2++) {
                    if (sHistoryEvents[ei2].player == curPlayer) {
                        if (sHistoryEvents[ei2].eventType == HIST_EVT_BATTLE) {
                            if (sHistoryEvents[ei2].text[0] == 'W')
                                battlesWon++;
                            else
                                battlesLost++;
                        } else if (sHistoryEvents[ei2].eventType == HIST_EVT_CAPTURE) {
                            citiesCap++;
                        } else if (sHistoryEvents[ei2].eventType == HIST_EVT_HERO) {
                            heroesHired++;
                        }
                    }
                }

                MoveTo(40, 170);
                DrawString(GetCachedString(STR_VICTORY, 8, "\pBattles: "));
                NumToString((long)battlesWon, numStr); DrawString(numStr);
                DrawString(GetCachedString(STR_VICTORY, 17, "\p won, "));
                NumToString((long)battlesLost, numStr); DrawString(numStr);
                DrawString(GetCachedString(STR_VICTORY, 18, "\p lost"));

                MoveTo(40, 186);
                DrawString(GetCachedString(STR_VICTORY, 19, "\pCities captured: "));
                NumToString((long)citiesCap, numStr); DrawString(numStr);

                MoveTo(40, 202);
                DrawString(GetCachedString(STR_VICTORY, 20, "\pHeroes recruited: "));
                NumToString((long)heroesHired, numStr); DrawString(numStr);
            }
        }
    }

    /* OK button */
    {
        Rect okRect;
        RGBColor black = {0, 0, 0};
        SetRect(&okRect, 140, 228, 220, 250);
        RGBForeColor(&black);
        FrameRoundRect(&okRect, 8, 8);
        MoveTo(166, 244);
        DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
    }

    UnlockPixels(GetGWorldPixMap(offGW));
    SetGWorld(savePort, saveGD);

    SetPort(vicWin);
    {
        Rect dr = vicWin->portRect;
        LockPixels(GetGWorldPixMap(offGW));
        CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                 &((GrafPtr)vicWin)->portBits,
                 &gwRect, &dr, srcCopy, NULL);
        UnlockPixels(GetGWorldPixMap(offGW));
    }

    vicDone = false;
    while (!vicDone) {
        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &vicEvt, 30, NULL)) {
            if (vicEvt.what == mouseDown || vicEvt.what == keyDown)
                vicDone = true;
            else if (vicEvt.what == updateEvt &&
                     (WindowPtr)vicEvt.message == vicWin) {
                Rect dr;
                BeginUpdate(vicWin);
                SetPort(vicWin);
                dr = vicWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)vicWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(vicWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(vicWin);
}


/* ===================================================================
 * ShowCityProductionDialog — Let player choose what unit to produce
 * =================================================================== */
static void ShowCityProductionDialog(short cityIndex)
{
    WindowPtr prodWin;
    GWorldPtr offGW;
    Rect winRect, gwRect;
    Boolean prodDone;
    EventRecord prodEvt;
    CGrafPtr savePort;
    GDHandle saveGD;
    unsigned char *gs, *city;
    short selectedType = 0;
    short selectedRow = 0;
    short redraw = 1;
    short numTypes;

    /* Build list of available unit types for this city */
    short typeList[MAX_UNIT_TYPES];
    short typeCount = 0;

    if (*gGameState == 0 || *gExtState == 0) return;
    if (cityIndex < 0 || cityIndex >= 40) return;
    gs = (unsigned char *)*gGameState;
    city = gs + 0x812 + cityIndex * 0x20;

    /* Only allow production changes for owned cities */
    if (*(short *)(city + 0x04) != *(short *)(gs + 0x110)) return;

    /* Build type list from loaded unit type table */
    numTypes = sUnitTypesLoaded ? sUnitTypeCount : 6;
    for (typeCount = 0; typeCount < numTypes && typeCount < MAX_UNIT_TYPES; typeCount++)
        typeList[typeCount] = typeCount;

    /* Read current producing type and find its row */
    {
        unsigned char *ext = (unsigned char *)*gExtState;
        unsigned char *extCity = ext + 0x24c + cityIndex * 0x5c;
        short curProd = *(short *)(extCity + 0x02);
        short ri;
        selectedType = (curProd >= 0 && curProd < numTypes) ? curProd : 0;
        selectedRow = 0;
        for (ri = 0; ri < typeCount; ri++) {
            if (typeList[ri] == selectedType) { selectedRow = ri; break; }
        }
    }

    /* Size window to fit: header + rows + buttons */
    {
        short rowH = 18;
        short headerH = 50;
        short buttonH = 36;
        short winH = headerH + typeCount * rowH + buttonH;
        if (winH < 160) winH = 160;
        if (winH > 400) winH = 400;
        SetRect(&winRect, 0, 0, 340, winH);
        OffsetRect(&winRect, 170, 100);
    }
    prodWin = NewCWindow(NULL, &winRect, "\pCity Production", true,
                         dBoxProc, (WindowPtr)-1, false, 0);
    {
        short ww = winRect.right - winRect.left;
        short wh = winRect.bottom - winRect.top;
        SetRect(&gwRect, 0, 0, ww, wh);
    }
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);
    if (prodWin == NULL || offGW == NULL) {
        if (offGW) DisposeGWorld(offGW);
        if (prodWin) DisposeWindow(prodWin);
        return;
    }

    prodDone = false;
    while (!prodDone) {
        if (redraw) {
            short ww = gwRect.right - gwRect.left;

            GetGWorld(&savePort, &saveGD);
            SetGWorld(offGW, NULL);
            LockPixels(GetGWorldPixMap(offGW));

            DrawMarbleBackground(&gwRect);

            /* Title: city name + "Select Production" */
            {
                RGBColor black = {0, 0, 0};
                Str255 cityName;
                short ni;
                char *cn = (char *)(city + 0x04);
                for (ni = 0; cn[ni] && ni < 19; ni++)
                    cityName[ni + 1] = cn[ni];
                cityName[0] = (unsigned char)ni;

                RGBForeColor(&black);
                TextSize(12);
                TextFace(bold);
                MoveTo(14, 18);
                DrawString(cityName);
                TextSize(10);
                TextFace(0);
                MoveTo(14, 34);
                DrawString(GetCachedString(STR_CITY_DIALOG, 18, "\pSelect Production"));
            }

            /* Column headers */
            {
                RGBColor black = {0, 0, 0};
                RGBForeColor(&black);
                TextFace(bold);
                TextSize(9);
                MoveTo(14, 46);
                DrawString(GetCachedString(STR_CITY_DIALOG, 19, "\pUnit Type"));
                MoveTo(180, 46);
                DrawString(GetCachedString(STR_CITY_DIALOG, 20, "\pStr"));
                MoveTo(215, 46);
                DrawString(GetCachedString(STR_CITY_DIALOG, 21, "\pMov"));
                MoveTo(250, 46);
                DrawString("\pCost");
                MoveTo(290, 46);
                DrawString(GetCachedString(STR_CITY_DIALOG, 22, "\pTurns"));
                TextFace(0);
            }

            /* Unit type rows */
            {
                short ut;
                RGBColor black = {0, 0, 0};
                RGBColor hilite = {0xAAAA, 0xAAAA, 0xFFFF};
                Str255 numStr, typeName;
                short rowH = 18;

                for (ut = 0; ut < typeCount; ut++) {
                    short yp = 54 + ut * rowH;
                    Rect rowRect;
                    short typeId = typeList[ut];
                    short str, mov, cost, turns;

                    SetRect(&rowRect, 10, yp, ww - 10, yp + rowH - 2);

                    if (ut == selectedRow) {
                        RGBForeColor(&hilite);
                        PaintRect(&rowRect);
                    }

                    RGBForeColor(&black);
                    FrameRect(&rowRect);

                    /* Get stats from DAT table or fallback */
                    if (sUnitTypesLoaded && typeId < sUnitTypeCount) {
                        str   = GetUnitTypeStat(typeId, 0);
                        turns = GetUnitTypeStat(typeId, 1);
                        cost  = GetUnitTypeStat(typeId, 2);
                        mov   = GetUnitTypeStat(typeId, 3);
                    } else {
                        static const short fStr[] = {3,4,5,3,6,4};
                        static const short fMov[] = {10,8,14,10,6,12};
                        static const short fTrn[] = {2,3,4,3,5,4};
                        str   = (typeId < 6) ? fStr[typeId] : 3;
                        mov   = (typeId < 6) ? fMov[typeId] : 8;
                        turns = (typeId < 6) ? fTrn[typeId] : 4;
                        cost  = 0;
                    }

                    GetUnitTypeName(typeId, typeName);
                    TextSize(9);
                    MoveTo(14, yp + rowH - 5);
                    DrawString(typeName);

                    MoveTo(185, yp + rowH - 5);
                    NumToString((long)str, numStr);
                    DrawString(numStr);

                    MoveTo(220, yp + rowH - 5);
                    NumToString((long)mov, numStr);
                    DrawString(numStr);

                    if (cost > 0) {
                        MoveTo(255, yp + rowH - 5);
                        NumToString((long)cost, numStr);
                        DrawString(numStr);
                    }

                    MoveTo(295, yp + rowH - 5);
                    NumToString((long)turns, numStr);
                    DrawString(numStr);
                }
            }

            /* OK and Cancel buttons at bottom */
            {
                short rowH = 18;
                short btnY = 54 + typeCount * rowH + 6;
                Rect okRect, cancelRect;
                RGBColor black = {0, 0, 0};
                SetRect(&okRect, 60, btnY, 150, btnY + 22);
                SetRect(&cancelRect, 180, btnY, 270, btnY + 22);
                RGBForeColor(&black);
                FrameRoundRect(&okRect, 8, 8);
                MoveTo(92, btnY + 16);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                FrameRoundRect(&cancelRect, 8, 8);
                MoveTo(208, btnY + 16);
                DrawString(GetCachedString(STR_COMMON_BUTTONS, 0, "\pCancel"));
            }

            UnlockPixels(GetGWorldPixMap(offGW));
            SetGWorld(savePort, saveGD);

            /* Blit */
            SetPort(prodWin);
            {
                Rect dr = prodWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)prodWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
            }
            redraw = 0;
        }

        if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &prodEvt, 30, NULL)) {
            if (prodEvt.what == mouseDown) {
                Point lp = prodEvt.where;
                short rowH = 18;
                short btnY = 54 + typeCount * rowH + 6;
                SetPort(prodWin);
                GlobalToLocal(&lp);

                /* Check unit type rows */
                {
                    short ut;
                    for (ut = 0; ut < typeCount; ut++) {
                        short yp = 54 + ut * rowH;
                        short ww = gwRect.right - gwRect.left;
                        Rect rowRect;
                        SetRect(&rowRect, 10, yp, ww - 10, yp + rowH - 2);
                        if (PtInRect(lp, &rowRect)) {
                            selectedRow = ut;
                            selectedType = typeList[ut];
                            redraw = 1;
                            break;
                        }
                    }
                }

                /* OK button */
                {
                    Rect okRect;
                    SetRect(&okRect, 60, btnY, 150, btnY + 22);
                    if (PtInRect(lp, &okRect)) {
                        unsigned char *ext = (unsigned char *)*gExtState;
                        unsigned char *extCity = ext + 0x24c + cityIndex * 0x5c;
                        *(short *)(extCity + 0x02) = selectedType;
                        *(short *)(extCity + 0x58) = GetProductionTurns(selectedType);
                        prodDone = true;
                    }
                }

                /* Cancel button */
                {
                    Rect cancelRect;
                    SetRect(&cancelRect, 180, btnY, 270, btnY + 22);
                    if (PtInRect(lp, &cancelRect))
                        prodDone = true;
                }
            } else if (prodEvt.what == keyDown) {
                char key = prodEvt.message & charCodeMask;
                if (key == 0x0D || key == 0x03) {
                    unsigned char *ext = (unsigned char *)*gExtState;
                    unsigned char *extCity = ext + 0x24c + cityIndex * 0x5c;
                    *(short *)(extCity + 0x02) = selectedType;
                    *(short *)(extCity + 0x58) = GetProductionTurns(selectedType);
                    prodDone = true;
                } else if (key == 0x1B) {
                    prodDone = true;
                } else if (key == 0x1E || key == 'w' || key == 'W') {
                    /* Up arrow or W */
                    if (selectedRow > 0) {
                        selectedRow--;
                        selectedType = typeList[selectedRow];
                        redraw = 1;
                    }
                } else if (key == 0x1F || key == 'x' || key == 'X') {
                    /* Down arrow or X */
                    if (selectedRow < typeCount - 1) {
                        selectedRow++;
                        selectedType = typeList[selectedRow];
                        redraw = 1;
                    }
                }
            } else if (prodEvt.what == updateEvt &&
                       (WindowPtr)prodEvt.message == prodWin) {
                Rect dr;
                BeginUpdate(prodWin);
                SetPort(prodWin);
                dr = prodWin->portRect;
                LockPixels(GetGWorldPixMap(offGW));
                CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                         &((GrafPtr)prodWin)->portBits,
                         &gwRect, &dr, srcCopy, NULL);
                UnlockPixels(GetGWorldPixMap(offGW));
                EndUpdate(prodWin);
            }
        }
    }

    DisposeGWorld(offGW);
    DisposeWindow(prodWin);
}


/* ===================================================================
 * ExecuteAITurn — Simple AI for computer players
 *
 * For each army owned by the AI player:
 * 1. Find nearest enemy city (or any enemy army)
 * 2. Set movement orders toward that target
 * 3. Execute movement steps
 * 4. Combat is resolved automatically via CheckAndResolveCombat
 *
 * Also processes income and production for the AI player.
 * =================================================================== */
static void ExecuteAITurn(short aiPlayer)
{
    unsigned char *gs;
    short armyCount, cityCount;
    short ai, ci;
    long bestDist;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    armyCount = *(short *)(gs + 0x1602);
    cityCount = *(short *)(gs + 0x810);
    if (armyCount > 100) armyCount = 100;
    if (cityCount > 40) cityCount = 40;

    /* Process income for AI (income minus army upkeep) */
    {
        short cityIncome = 0;
        short totalUpkeep = 0;
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            if (*(short *)(city + 0x04) == aiPlayer)
                cityIncome += *(short *)(city + 0x08);
        }
        /* Army upkeep: 2 gold per unit */
        for (ai = 0; ai < armyCount; ai++) {
            unsigned char *army = gs + 0x1604 + ai * 0x42;
            if ((short)(unsigned char)army[0x15] == aiPlayer) {
                short u;
                for (u = 0; u < 4; u++)
                    if ((unsigned char)army[0x16 + u] != 0xFF) totalUpkeep += 2;
            }
        }
        /* Hero gold item bonus */
        {
            short bB, cB, gB;
            Boolean fB, mB;
            short aiCityCount = 0;
            short ci2;
            for (ci2 = 0; ci2 < cityCount; ci2++) {
                unsigned char *city = gs + 0x812 + ci2 * 0x20;
                if (*(short *)(city + 0x04) == aiPlayer) aiCityCount++;
            }
            /* Check each army for hero gold items */
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)army[0x15] == aiPlayer) {
                    GetHeroItemBonus(ai, &bB, &cB, &gB, &fB, &mB);
                    if (gB > 0) cityIncome += gB * aiCityCount;
                }
            }
        }
        *(short *)(gs + 0x186 + aiPlayer * 0x14) += (cityIncome - totalUpkeep);
    }

    /* Process production for AI */
    if (*gExtState != 0) {
        unsigned char *ext = (unsigned char *)*gExtState;
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            unsigned char *extCity = ext + 0x24c + ci * 0x5c;
            if (*(short *)(city + 0x04) != aiPlayer) continue;
            {
                short producing = *(short *)(extCity + 0x02);
                short prodTurns = *(short *)(extCity + 0x58);
                if (producing < 0) continue;
                prodTurns--;
                *(short *)(extCity + 0x58) = prodTurns;
                if (prodTurns <= 0) {
                    short ac = *(short *)(gs + 0x1602);
                    if (ac < 100) {
                        unsigned char *newArmy = gs + 0x1604 + ac * 0x42;
                        short j;
                        for (j = 0; j < 0x42; j++) newArmy[j] = 0;
                        *(short *)(newArmy + 0x00) = *(short *)(city + 0x00);
                        *(short *)(newArmy + 0x02) = *(short *)(city + 0x02);
                        newArmy[0x04] = 'A'; newArmy[0x05] = 'I';
                        newArmy[0x15] = (unsigned char)aiPlayer;
                        newArmy[0x16] = (unsigned char)producing;
                        newArmy[0x17] = 0xFF; newArmy[0x18] = 0xFF; newArmy[0x19] = 0xFF;
                        {
                            /* Sprite index per unit type: LtInf=0, HvInf=2, Cav=4, Arch=6, Siege=8, Naval=10 */
                            static unsigned char spriteIdx[] = {0, 2, 4, 6, 8, 10};
                            static unsigned char unitHP2[]  = {3, 4, 5, 3, 6, 4};
                            static unsigned char unitMov2[] = {10, 8, 14, 10, 6, 12};
                            short uidx = producing;
                            if (uidx < 0 || uidx > 5) uidx = 0;
                            newArmy[0x14] = spriteIdx[uidx];
                            newArmy[0x1a] = unitMov2[uidx];
                            newArmy[0x1e] = unitHP2[uidx];
                            *(short *)(newArmy + 0x2a) = (short)unitHP2[uidx];
                            newArmy[0x2e] = (unsigned char)(unitMov2[uidx]); /* move pts */
                        }
                        *(short *)(gs + 0x1602) = ac + 1;
                    }
                    *(short *)(extCity + 0x58) = GetProductionTurns(producing);
                }
            }
        }
    }

    /* HP recovery for AI armies at friendly cities */
    armyCount = *(short *)(gs + 0x1602);
    if (armyCount > 100) armyCount = 100;
    for (ai = 0; ai < armyCount; ai++) {
        unsigned char *army = gs + 0x1604 + ai * 0x42;
        if ((short)(unsigned char)army[0x15] != aiPlayer) continue;
        if (army[0x2d] == 0) continue;  /* only heal if fortified */
        {
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);
            short cj;
            for (cj = 0; cj < cityCount; cj++) {
                unsigned char *city = gs + 0x812 + cj * 0x20;
                short sType = (short)(unsigned char)city[0x18];
                if (sType == 2 || sType == 5 || sType == 6) continue;
                if (*(short *)(city + 0x04) == aiPlayer &&
                    *(short *)(city + 0x00) == ax &&
                    *(short *)(city + 0x02) == ay) {
                    short u;
                    static const unsigned char maxHP2[] = {3, 4, 5, 3, 6, 4};
                    for (u = 0; u < 4; u++) {
                        short ut = (short)(unsigned char)army[0x16 + u];
                        short hp = (short)(unsigned char)army[0x1e + u];
                        short mhp;
                        if (ut == 0xFF || hp <= 0) continue;
                        if (ut == 0x1C) mhp = 9;
                        else if (ut <= 5) mhp = maxHP2[ut];
                        else mhp = 5;
                        if (hp < mhp) army[0x1e + u] = (unsigned char)(hp + 1);
                    }
                    {
                        short str = 0;
                        for (u = 0; u < 4; u++)
                            if ((unsigned char)army[0x16 + u] != 0xFF)
                                str += (short)(unsigned char)army[0x1e + u];
                        *(short *)(army + 0x2a) = str;
                    }
                    break;
                }
            }
        }
    }

    /* Reset movement points for all AI armies */
    armyCount = *(short *)(gs + 0x1602);
    if (armyCount > 100) armyCount = 100;
    for (ai = 0; ai < armyCount; ai++) {
        unsigned char *army = gs + 0x1604 + ai * 0x42;
        if ((short)(unsigned char)army[0x15] == aiPlayer) {
            short maxMov = (short)(unsigned char)army[0x1a];
            if (maxMov <= 0) maxMov = 10;
            {
                short bB, cB, gB;
                Boolean fB, mB;
                GetHeroItemBonus(ai, &bB, &cB, &gB, &fB, &mB);
                if (mB) maxMov *= 2;
            }
            army[0x2e] = (unsigned char)maxMov;
        }
    }

    /* Reset extended state army flags for AI player's armies */
    if (*gExtState != 0) {
        unsigned char *ext = (unsigned char *)*gExtState;
        for (ai = 0; ai < armyCount; ai++) {
            unsigned char *army = gs + 0x1604 + ai * 0x42;
            if ((short)(unsigned char)army[0x15] == aiPlayer) {
                ext[0x11e + ai] &= ~0x01;
                ext[0x182 + ai] = 0;
            }
        }
    }

    /* Count own armies per city (for defense assessment) */
    {
        short ownCityCount = 0;
        short undefended[40];
        short undefCount = 0;

        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            short sType = (short)(unsigned char)city[0x18];
            if (*(short *)(city + 0x04) == aiPlayer &&
                sType != 2 && sType != 5 && sType != 6) {
                /* Check if any friendly army is at this city */
                short cx = *(short *)(city + 0x00);
                short cy = *(short *)(city + 0x02);
                Boolean hasDefender = false;
                short aj;
                for (aj = 0; aj < armyCount; aj++) {
                    unsigned char *a = gs + 0x1604 + aj * 0x42;
                    if ((short)(unsigned char)a[0x15] == aiPlayer &&
                        *(short *)(a + 0x00) == cx &&
                        *(short *)(a + 0x02) == cy) {
                        hasDefender = true;
                        break;
                    }
                }
                if (!hasDefender && undefCount < 40)
                    undefended[undefCount++] = ci;
                ownCityCount++;
            }
        }

        /* For each AI army: decide behavior */
        armyCount = *(short *)(gs + 0x1602);
        if (armyCount > 100) armyCount = 100;

        for (ai = 0; ai < armyCount; ai++) {
            unsigned char *army = gs + 0x1604 + ai * 0x42;
            short owner = (short)(unsigned char)army[0x15];
            short ax, ay, steps;
            short tgtX = -1, tgtY = -1;

            if (owner != aiPlayer) continue;

            ax = *(short *)(army + 0x00);
            ay = *(short *)(army + 0x02);

            /* If this army has a hero, prioritize nearby unsearched ruins */
            {
                short u;
                Boolean hasHero = false;
                for (u = 0; u < 4; u++)
                    if ((unsigned char)army[0x16 + u] == 0x1C) { hasHero = true; break; }
                if (hasHero) {
                    long bestRuinDist = 999999L;
                    for (ci = 0; ci < cityCount; ci++) {
                        unsigned char *site = gs + 0x812 + ci * 0x20;
                        short sType = (short)(unsigned char)site[0x18];
                        if (sType == 2 || sType == 5 || sType == 6) {
                            short rx = *(short *)(site + 0x00);
                            short ry = *(short *)(site + 0x02);
                            long rdx = (long)(rx - ax);
                            long rdy = (long)(ry - ay);
                            long rdist = rdx * rdx + rdy * rdy;
                            if (rdist < bestRuinDist) {
                                bestRuinDist = rdist;
                                tgtX = rx;
                                tgtY = ry;
                            }
                        }
                    }
                    /* Only target ruin if within 15 tiles, otherwise attack */
                    if (bestRuinDist > 225) { tgtX = -1; tgtY = -1; }
                }
            }

            /* Strategy: defend undefended cities if nearby, else attack */
            if (undefCount > 0) {
                /* Check if this army should defend an undefended city */
                long bestDefDist = 999999L;
                short bestDefCity = -1;
                short ui;
                for (ui = 0; ui < undefCount; ui++) {
                    unsigned char *uCity = gs + 0x812 + undefended[ui] * 0x20;
                    short cx = *(short *)(uCity + 0x00);
                    short cy = *(short *)(uCity + 0x02);
                    long dx = (long)(cx - ax);
                    long dy = (long)(cy - ay);
                    long dist = dx * dx + dy * dy;
                    if (dist < bestDefDist) {
                        bestDefDist = dist;
                        bestDefCity = ui;
                    }
                }
                /* Defend if the nearest undefended city is within 8 tiles */
                if (bestDefCity >= 0 && bestDefDist < 64) {
                    unsigned char *defCity = gs + 0x812 + undefended[bestDefCity] * 0x20;
                    tgtX = *(short *)(defCity + 0x00);
                    tgtY = *(short *)(defCity + 0x02);
                    /* Remove from undefended list */
                    undefended[bestDefCity] = undefended[--undefCount];
                }
            }

            if (tgtX < 0) {
                /* Attack: find best enemy city considering distance + defense strength.
                 * Prefer weaker/closer targets. Score = distance + defenderStr * 4 */
                short myStr = *(short *)(army + 0x2a);
                short totalFriendlyNear = 0;
                short nearestEnemyStr = 0;
                short aj;
                bestDist = 999999L;

                /* Calculate nearby friendly strength for group tactics */
                for (aj = 0; aj < armyCount; aj++) {
                    unsigned char *fa = gs + 0x1604 + aj * 0x42;
                    if ((short)(unsigned char)fa[0x15] == aiPlayer) {
                        long fdx = (long)(*(short *)(fa + 0x00) - ax);
                        long fdy = (long)(*(short *)(fa + 0x02) - ay);
                        if (fdx * fdx + fdy * fdy <= 9) /* within 3 tiles */
                            totalFriendlyNear += *(short *)(fa + 0x2a);
                    }
                }

                /* Check for nearby enemy armies that threaten us (at war only) */
                for (aj = 0; aj < armyCount; aj++) {
                    unsigned char *ea = gs + 0x1604 + aj * 0x42;
                    short eOwner = (short)(unsigned char)ea[0x15];
                    if (eOwner != aiPlayer && eOwner >= 0 && eOwner < 8 &&
                        *(short *)(gs + 0x138 + eOwner * 2) != 0 &&
                        *(short *)(gs + 0x1582 + (aiPlayer * 8 + eOwner) * 2) < 0x1000) {
                        long edx = (long)(*(short *)(ea + 0x00) - ax);
                        long edy = (long)(*(short *)(ea + 0x02) - ay);
                        if (edx * edx + edy * edy <= 4) { /* within 2 tiles */
                            nearestEnemyStr += *(short *)(ea + 0x2a);
                        }
                    }
                }

                /* Flee if a nearby enemy is much stronger and we're alone */
                if (nearestEnemyStr > myStr * 3 && totalFriendlyNear < nearestEnemyStr) {
                    /* Retreat toward nearest friendly city */
                    long bestFlDist = 999999L;
                    for (ci = 0; ci < cityCount; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        if (*(short *)(city + 0x04) == aiPlayer) {
                            short cx = *(short *)(city + 0x00);
                            short cy = *(short *)(city + 0x02);
                            long fdx = (long)(cx - ax);
                            long fdy = (long)(cy - ay);
                            long fdist = fdx * fdx + fdy * fdy;
                            if (fdist > 0 && fdist < bestFlDist) {
                                bestFlDist = fdist;
                                tgtX = cx;
                                tgtY = cy;
                            }
                        }
                    }
                }

                if (tgtX < 0) {
                    /* Prioritize neutral cities early game (easy captures) */
                    short turn = *(short *)(gs + 0x136);
                    for (ci = 0; ci < cityCount; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        short cOwner = *(short *)(city + 0x04);
                        short sType = (short)(unsigned char)city[0x18];
                        if (sType == 2 || sType == 5 || sType == 6) continue;
                        if (cOwner == aiPlayer) continue;
                        /* Respect diplomacy: skip cities of players at peace */
                        if (cOwner >= 0 && cOwner < 8 &&
                            *(short *)(gs + 0x1582 + (aiPlayer * 8 + cOwner) * 2) >= 0x1000) continue;

                        {
                            short cx = *(short *)(city + 0x00);
                            short cy = *(short *)(city + 0x02);
                            long dx = (long)(cx - ax);
                            long dy = (long)(cy - ay);
                            long dist = dx * dx + dy * dy;
                            long defStr = 0;

                            /* Sum defender strength at this city */
                            for (aj = 0; aj < armyCount; aj++) {
                                unsigned char *da = gs + 0x1604 + aj * 0x42;
                                if ((short)(unsigned char)da[0x15] == cOwner &&
                                    *(short *)(da + 0x00) == cx &&
                                    *(short *)(da + 0x02) == cy) {
                                    defStr += *(short *)(da + 0x2a);
                                }
                            }
                            defStr += *(short *)(city + 0x06) + 4;

                            /* Skip if defender is much stronger and city is far */
                            if (defStr > totalFriendlyNear * 2 && dist > 25) continue;

                            /* Neutral city bonus (lower score = preferred) */
                            if (cOwner < 0 || cOwner >= 8 || *(short *)(gs + 0xd0 + cOwner * 2) != 0) {
                                /* Neutral or unaligned: bonus for easy capture */
                                if (turn < 10) dist -= 50; /* extra early-game bonus */
                            }

                            /* Score: distance + defense penalty */
                            dist += defStr * 4;
                            if (dist < bestDist) {
                                bestDist = dist;
                                tgtX = cx;
                                tgtY = cy;
                            }
                        }
                    }
                }
            }

            if (tgtX < 0) continue;

            /* Set movement orders */
            *(short *)(army + 0x32) = 1;
            *(short *)(army + 0x34) = tgtX;
            *(short *)(army + 0x36) = tgtY;

            /* Execute movement steps using movement points.
             * Terrain-aware pathfinding: when preferred direction is blocked,
             * search all 8 neighbors and pick the passable one closest to target.
             * Track previous position to prevent oscillation. */
            {
                short prevX = -1, prevY = -1;  /* Anti-oscillation */
                static const short sDirX[8] = {1, -1, 0, 0, 1, -1, 1, -1};
                static const short sDirY[8] = {0, 0, 1, -1, 1, 1, -1, -1};

                for (steps = 0; steps < 10; steps++) {
                    short curX, curY, dx, dy, stepX = 0, stepY = 0, newX, newY;
                    short movePts, unitClass, cost;

                    /* Re-read army pointer (may have shifted due to combat) */
                    armyCount = *(short *)(gs + 0x1602);
                    if (armyCount > 100) armyCount = 100;
                    if (ai >= armyCount) break;
                    army = gs + 0x1604 + ai * 0x42;
                    if ((short)(unsigned char)army[0x15] != aiPlayer) break;

                    movePts = (short)(unsigned char)army[0x2e];
                    if (movePts <= 0) break;

                    curX = *(short *)(army + 0x00);
                    curY = *(short *)(army + 0x02);
                    dx = tgtX - curX;
                    dy = tgtY - curY;

                    if (dx > 0) stepX = 1;
                    else if (dx < 0) stepX = -1;
                    if (dy > 0) stepY = 1;
                    else if (dy < 0) stepY = -1;

                    if (stepX == 0 && stepY == 0) {
                        *(short *)(army + 0x32) = 0;
                        break;
                    }

                    newX = curX + stepX;
                    newY = curY + stepY;

                    /* Check terrain cost for preferred direction */
                    unitClass = (short)(unsigned char)army[0x16];
                    cost = GetMovementCost(newX, newY, unitClass);

                    /* Also reject if this would move us back to previous position */
                    if (cost > 0 && newX == prevX && newY == prevY)
                        cost = 0;  /* treat as blocked to avoid oscillation */

                    if (cost == 0) {
                        /* Preferred direction blocked: search all 8 neighbors.
                         * Pick the passable neighbor closest to target. */
                        long bestAltDist = 999999L;
                        short bestAltCost = 0;
                        short bestAltX = -1, bestAltY = -1;
                        short d;

                        for (d = 0; d < 8; d++) {
                            short nx = curX + sDirX[d];
                            short ny = curY + sDirY[d];
                            short nc;
                            long ndx, ndy, ndist;

                            if (nx < 0 || nx >= sMapWidth ||
                                ny < 0 || ny >= sMapHeight) continue;
                            /* Skip going back to previous position */
                            if (nx == prevX && ny == prevY) continue;

                            nc = GetMovementCost(nx, ny, unitClass);
                            if (nc <= 0 || nc > movePts) continue;

                            ndx = (long)(tgtX - nx);
                            ndy = (long)(tgtY - ny);
                            ndist = ndx * ndx + ndy * ndy;
                            /* Prefer lower cost tiles (roads etc) */
                            ndist += nc * 2;
                            if (ndist < bestAltDist) {
                                bestAltDist = ndist;
                                bestAltCost = nc;
                                bestAltX = nx;
                                bestAltY = ny;
                            }
                        }

                        if (bestAltX < 0) break;  /* Truly stuck */
                        newX = bestAltX;
                        newY = bestAltY;
                        cost = bestAltCost;
                    }
                    if (movePts < cost) break;

                    prevX = curX;
                    prevY = curY;

                    if (newX >= 0 && newX < sMapWidth &&
                        newY >= 0 && newY < sMapHeight) {
                        *(short *)(army + 0x00) = newX;
                        *(short *)(army + 0x02) = newY;
                        army[0x2e] = (unsigned char)(movePts - cost);

                        /* Update fog of war */
                        if (sOptHiddenMap)
                            FogReveal(aiPlayer, newX, newY);

                        /* Check for combat */
                        if (CheckAndResolveCombat(ai)) {
                            armyCount = *(short *)(gs + 0x1602);
                            if (armyCount > 100) armyCount = 100;
                            break;
                        }
                    } else break;

                    /* AI hero auto-search ruins at current location */
                    {
                        short ru;
                        Boolean armyHasHero = false;
                        for (ru = 0; ru < 4; ru++)
                            if ((unsigned char)army[0x16 + ru] == 0x1C) { armyHasHero = true; break; }
                        if (armyHasHero) {
                            for (ru = 0; ru < cityCount; ru++) {
                                unsigned char *rsite = gs + 0x812 + ru * 0x20;
                                short rsType = (short)(unsigned char)rsite[0x18];
                                if ((rsType == 2 || rsType == 5 || rsType == 6) &&
                                    *(short *)(rsite + 0x00) == newX &&
                                    *(short *)(rsite + 0x02) == newY) {
                                    /* Search the ruin: give gold reward */
                                    short gold = (short)(TickCount() % 300) + 200;
                                    *(short *)(gs + 0x186 + aiPlayer * 0x14) += gold;
                                    rsite[0x18] = 0;  /* mark as searched */
                                    break;
                                }
                            }
                        }
                    }

                    /* Check if reached target */
                    if (*(short *)(army + 0x00) == tgtX &&
                        *(short *)(army + 0x02) == tgtY) {
                        *(short *)(army + 0x32) = 0;
                        break;
                    }
                }
            }
        }
    }

    /* Merge AI armies on same tile */
    {
        short merged;
        do {
            merged = 0;
            armyCount = *(short *)(gs + 0x1602);
            if (armyCount > 100) armyCount = 100;
            for (ai = 0; ai < armyCount && !merged; ai++) {
                unsigned char *a1 = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)a1[0x15] != aiPlayer) continue;
                if (TryMergeArmies(ai)) {
                    merged = 1;
                }
            }
        } while (merged);
    }

    /* Fortify AI armies that are defending cities */
    armyCount = *(short *)(gs + 0x1602);
    if (armyCount > 100) armyCount = 100;
    for (ai = 0; ai < armyCount; ai++) {
        unsigned char *army = gs + 0x1604 + ai * 0x42;
        if ((short)(unsigned char)army[0x15] != aiPlayer) continue;
        if (*(short *)(army + 0x32) != 0) continue;  /* has orders, skip */
        {
            short ax = *(short *)(army + 0x00);
            short ay = *(short *)(army + 0x02);
            short cj;
            for (cj = 0; cj < cityCount; cj++) {
                unsigned char *city = gs + 0x812 + cj * 0x20;
                if (*(short *)(city + 0x04) == aiPlayer &&
                    *(short *)(city + 0x00) == ax &&
                    *(short *)(city + 0x02) == ay) {
                    army[0x2d] = 3;  /* fortify */
                    break;
                }
            }
        }
    }

    /* Smart production: choose unit types based on situation */
    if (*gExtState != 0) {
        unsigned char *ext = (unsigned char *)*gExtState;
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            unsigned char *extCity = ext + 0x24c + ci * 0x5c;
            short sType = (short)(unsigned char)city[0x18];
            if (*(short *)(city + 0x04) != aiPlayer) continue;
            if (sType == 2 || sType == 5 || sType == 6) continue;

            /* If producing nothing, choose unit type based on needs */
            if (*(short *)(extCity + 0x02) < 0) {
                /* Count AI's current unit types to decide what to build */
                short aiCav = 0, aiInf = 0, aiArch = 0;
                short aj;
                for (aj = 0; aj < armyCount; aj++) {
                    unsigned char *a = gs + 0x1604 + aj * 0x42;
                    short u;
                    if ((short)(unsigned char)a[0x15] != aiPlayer) continue;
                    for (u = 0; u < 4; u++) {
                        short ut = (short)(unsigned char)a[0x16 + u];
                        if (ut == 0 || ut == 1) aiInf++;      /* Lt/Hv Infantry */
                        else if (ut == 2) aiCav++;              /* Cavalry */
                        else if (ut == 3) aiArch++;             /* Archers */
                    }
                }
                /* Build what we're shortest on:
                   Prefer cavalry (fast attack), but mix in heavy infantry
                   (defense) and archers (range/support) */
                if (aiInf < aiCav / 2 + 1) {
                    *(short *)(extCity + 0x02) = 1;  /* Heavy Infantry */
                    *(short *)(extCity + 0x58) = GetProductionTurns(1);
                } else if (aiArch < aiCav / 3 + 1) {
                    *(short *)(extCity + 0x02) = 3;  /* Archers */
                    *(short *)(extCity + 0x58) = GetProductionTurns(3);
                } else {
                    *(short *)(extCity + 0x02) = 2;  /* Cavalry */
                    *(short *)(extCity + 0x58) = GetProductionTurns(2);
                }
            }
        }
    }

    /* === AI Diplomacy Phase === */
    /* AI evaluates diplomatic relationships based on relative strength.
     * Weak AI proposes peace; strong AI declares war on peaceful neighbors. */
    {
        short aiCities = 0, aiArmies = 0;
        short pj;

        /* Count AI's cities and armies */
        for (ci = 0; ci < cityCount; ci++) {
            unsigned char *city = gs + 0x812 + ci * 0x20;
            if (*(short *)(city + 0x04) == aiPlayer) aiCities++;
        }
        for (ai = 0; ai < armyCount; ai++) {
            unsigned char *a = gs + 0x1604 + ai * 0x42;
            if ((short)(unsigned char)a[0x15] == aiPlayer) aiArmies++;
        }

        for (pj = 0; pj < 8; pj++) {
            short pjAlive, pjType, pjCities, pjArmies;
            if (pj == aiPlayer) continue;
            pjAlive = *(short *)(gs + 0x138 + pj * 2);
            if (!pjAlive) continue;

            pjType = *(short *)(gs + 0xd0 + pj * 2);
            pjCities = 0;
            pjArmies = 0;
            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs + 0x812 + ci * 0x20;
                if (*(short *)(city + 0x04) == pj) pjCities++;
            }
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *a = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)a[0x15] == pj) pjArmies++;
            }

            {
                short curRelation = *(short *)(gs + 0x1582 + (aiPlayer * 8 + pj) * 2);
                short turnNum = *(short *)(gs + 0x136);
                short rng = (short)(((unsigned short)TickCount()) % 100);

                if (curRelation < 0x1000) {
                    /* Currently at war: consider proposing peace if weaker */
                    if (aiArmies < pjArmies && aiCities <= pjCities + 1 && rng < 25) {
                        /* Propose peace */
                        *(short *)(gs + 0x1582 + (aiPlayer * 8 + pj) * 2) = 0x2800;
                        *(short *)(gs + 0x1582 + (pj * 8 + aiPlayer) * 2) = 0x2800;
                        RecordEvent(turnNum, HIST_EVT_DIPLOMACY, aiPlayer,
                            "Peace negotiated");

                        /* Notify human player */
                        if (pjType == 0) {
                            WindowPtr pwWin;
                            Rect pwR;
                            SetRect(&pwR, 0, 0, 300, 80);
                            OffsetRect(&pwR, 170, 220);
                            pwWin = NewCWindow(NULL, &pwR, "\p", true,
                                               plainDBox, (WindowPtr)-1, false, 0);
                            if (pwWin) {
                                RGBColor bg2 = {0x1000, 0x2000, 0x1000};
                                RGBColor gold2 = {0xFFFF, 0xDDDD, 0x3333};
                                RGBColor wh2 = {0xFFFF, 0xFFFF, 0xFFFF};
                                EventRecord pwE;
                                unsigned long pwT;
                                Str255 fn;
                                unsigned char *np = gs + aiPlayer * 20;
                                short nl = 0;
                                while (nl < 20 && np[nl]) nl++;
                                fn[0] = (unsigned char)nl;
                                BlockMoveData(np, fn + 1, nl);
                                SetPort(pwWin);
                                RGBForeColor(&bg2); PaintRect(&pwWin->portRect);
                                RGBForeColor(&gold2); PenSize(2,2); FrameRect(&pwWin->portRect); PenNormal();
                                TextFont(3); TextSize(11); TextFace(bold);
                                RGBForeColor(&gold2);
                                MoveTo(15, 22);
                                DrawString(GetCachedString(STR_HERO_DIPLO, 1, "\pPeace Negotiated!"));
                                TextFace(0); TextSize(10);
                                RGBForeColor(&wh2);
                                MoveTo(15, 44);
                                DrawString(fn);
                                DrawString(GetCachedString(STR_HERO_DIPLO, 2, "\p proposes peace."));
                                MoveTo(15, 62);
                                DrawString(GetCachedString(STR_HERO_DIPLO, 3, "\pA truce has been declared."));
                                pwT = TickCount() + SpeedTicks(120);
                                while (TickCount() < pwT) {
                                    if (WaitNextEvent(mDownMask | keyDownMask, &pwE, 5, NULL)) break;
                                }
                                DisposeWindow(pwWin);
                            }
                        }
                    }
                } else {
                    /* Currently at peace: consider declaring war if stronger */
                    if (aiArmies > pjArmies * 2 && aiCities > pjCities && rng < 15) {
                        /* Declare war */
                        *(short *)(gs + 0x1582 + (aiPlayer * 8 + pj) * 2) = 0;
                        *(short *)(gs + 0x1582 + (pj * 8 + aiPlayer) * 2) = 0;
                        RecordEvent(turnNum, HIST_EVT_DIPLOMACY, aiPlayer,
                            "War declared");

                        /* Notify human player */
                        if (pjType == 0) {
                            WindowPtr wwWin;
                            Rect wwR;
                            SetRect(&wwR, 0, 0, 300, 80);
                            OffsetRect(&wwR, 170, 220);
                            wwWin = NewCWindow(NULL, &wwR, "\p", true,
                                               plainDBox, (WindowPtr)-1, false, 0);
                            if (wwWin) {
                                RGBColor bg2 = {0x2800, 0x0800, 0x0800};
                                RGBColor red2 = {0xFFFF, 0x4444, 0x4444};
                                RGBColor wh2 = {0xFFFF, 0xFFFF, 0xFFFF};
                                EventRecord wwE;
                                unsigned long wwT;
                                Str255 fn;
                                unsigned char *np = gs + aiPlayer * 20;
                                short nl = 0;
                                while (nl < 20 && np[nl]) nl++;
                                fn[0] = (unsigned char)nl;
                                BlockMoveData(np, fn + 1, nl);
                                SetPort(wwWin);
                                RGBForeColor(&bg2); PaintRect(&wwWin->portRect);
                                RGBForeColor(&red2); PenSize(2,2); FrameRect(&wwWin->portRect); PenNormal();
                                TextFont(3); TextSize(11); TextFace(bold);
                                RGBForeColor(&red2);
                                MoveTo(15, 22);
                                DrawString(GetCachedString(STR_HERO_DIPLO, 4, "\pWar Declared!"));
                                TextFace(0); TextSize(10);
                                RGBForeColor(&wh2);
                                MoveTo(15, 44);
                                DrawString(fn);
                                DrawString(GetCachedString(STR_HERO_DIPLO, 5, "\p has declared war!"));
                                MoveTo(15, 62);
                                DrawString(GetCachedString(STR_HERO_DIPLO, 6, "\pPrepare thy forces!"));
                                wwT = TickCount() + SpeedTicks(120);
                                while (TickCount() < wwT) {
                                    if (WaitNextEvent(mDownMask | keyDownMask, &wwE, 5, NULL)) break;
                                }
                                DisposeWindow(wwWin);
                            }
                        }
                    }
                }
            }
        }
    }

    /* === AI Hero Generation === */
    /* ~25% chance per turn to spawn a hero at a random owned city */
    if (sOptQuests && (TickCount() % 4) == 0) {
        short aiGold = *(short *)(gs + 0x186 + aiPlayer * 0x14);
        short heroCost = 100 + (short)(TickCount() % 150);
        if (aiGold >= heroCost) {
            /* Find a random owned city to spawn the hero */
            short ownedCities[40];
            short ownedCount = 0;
            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs + 0x812 + ci * 0x20;
                short sType = (short)(unsigned char)city[0x18];
                if (*(short *)(city + 0x04) == aiPlayer &&
                    sType != 2 && sType != 5 && sType != 6) {
                    ownedCities[ownedCount++] = ci;
                }
            }
            if (ownedCount > 0) {
                short pickCity = ownedCities[TickCount() % ownedCount];
                unsigned char *city = gs + 0x812 + pickCity * 0x20;
                short cx = *(short *)(city + 0x00);
                short cy = *(short *)(city + 0x02);
                armyCount = *(short *)(gs + 0x1602);
                if (armyCount < 100) {
                    unsigned char *newHero = gs + 0x1604 + armyCount * 0x42;
                    short j;
                    for (j = 0; j < 0x42; j++) newHero[j] = 0;
                    *(short *)(newHero + 0x00) = cx;
                    *(short *)(newHero + 0x02) = cy;
                    newHero[0x15] = (unsigned char)aiPlayer;
                    newHero[0x14] = 12;  /* hero sprite */
                    newHero[0x16] = 0x1C; /* hero unit type */
                    newHero[0x17] = 0xFF; newHero[0x18] = 0xFF; newHero[0x19] = 0xFF;
                    newHero[0x1a] = 14;  /* movement */
                    newHero[0x1e] = 5 + (unsigned char)(TickCount() % 4);  /* HP 5-8 */
                    newHero[0x22] = 1 + (unsigned char)(TickCount() % 3);  /* command 1-3 */
                    *(short *)(newHero + 0x2a) = (short)newHero[0x1e]; /* strength */
                    newHero[0x2e] = (unsigned char)(14); /* move pts */
                    *(short *)(gs + 0x1602) = armyCount + 1;
                    *(short *)(gs + 0x186 + aiPlayer * 0x14) -= heroCost;
                }
            }
        }
    }
}


/* ===================================================================
 * AdvanceToNextPlayer — cycle current_player to next alive player
 *
 * Implements the turn order system:
 * - player_order[8] at gs+0x164 holds the turn sequence
 * - order_index at gs+0x174 tracks position in the sequence
 * - end-of-round flag at gs+0x118 triggers turn counter increment
 * - Skips dead players (player_alive[i] == 0 at gs+0x138)
 * - AI players get their turn processed via ExecuteAITurn()
 * =================================================================== */

/* ===================================================================
 * ShowIncomeSummary — Brief auto-dismiss notification of gold changes
 * =================================================================== */
static void ShowIncomeSummary(short cityIncome, short upkeep, short newGold)
{
    WindowPtr sumWin;
    GWorldPtr sumGW;
    Rect winR, gwR;
    EventRecord evt;
    CGrafPtr sp;
    GDHandle sd;
    unsigned long ticks;
    Str255 numStr;
    short netIncome = cityIncome - upkeep;

    SetRect(&winR, 0, 0, 220, 80);
    OffsetRect(&winR, 10, 40);
    sumWin = NewCWindow(NULL, &winR, "\p", true,
                        plainDBox, (WindowPtr)-1, false, 0);
    SetRect(&gwR, 0, 0, 220, 80);
    NewGWorld(&sumGW, 0, &gwR, NULL, NULL, 0);
    if (!sumWin || !sumGW) {
        if (sumGW) DisposeGWorld(sumGW);
        if (sumWin) DisposeWindow(sumWin);
        return;
    }

    GetGWorld(&sp, &sd);
    SetGWorld(sumGW, NULL);
    LockPixels(GetGWorldPixMap(sumGW));

    {
        RGBColor bg = {0x1800, 0x1800, 0x2800};
        RGBColor border = {0x8888, 0x8888, 0xAAAA};
        RGBForeColor(&bg);
        PaintRect(&gwR);
        RGBForeColor(&border);
        PenSize(2, 2);
        FrameRect(&gwR);
        PenNormal();
    }

    {
        RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor goldCol = {0xFFFF, 0xDDDD, 0x3333};
        RGBColor greenCol = {0x4444, 0xFFFF, 0x4444};
        RGBColor redCol = {0xFFFF, 0x6666, 0x6666};

        TextFont(3); TextSize(10); TextFace(bold);
        RGBForeColor(&white);
        MoveTo(10, 16);
        DrawString(GetCachedString(STR_CITY_DIALOG, 9, "\pTurn Income"));
        TextFace(0); TextSize(9);

        /* City income */
        RGBForeColor(&greenCol);
        MoveTo(10, 32);
        DrawString(GetCachedString(STR_CITY_DIALOG, 10, "\pCities: +"));
        NumToString((long)cityIncome, numStr);
        DrawString(numStr);

        /* Upkeep */
        RGBForeColor(&redCol);
        MoveTo(110, 32);
        DrawString(GetCachedString(STR_CITY_DIALOG, 11, "\pUpkeep: -"));
        NumToString((long)upkeep, numStr);
        DrawString(numStr);

        /* Net */
        if (netIncome >= 0)
            RGBForeColor(&greenCol);
        else
            RGBForeColor(&redCol);
        MoveTo(10, 48);
        DrawString(GetCachedString(STR_MISC, 68, "\pNet: "));
        if (netIncome >= 0) DrawString(GetCachedString(STR_MISC, 69, "\p+"));
        NumToString((long)netIncome, numStr);
        DrawString(numStr);

        /* Treasury */
        RGBForeColor(&goldCol);
        MoveTo(10, 64);
        DrawString(GetCachedString(STR_CITY_DIALOG, 12, "\pTreasury: "));
        NumToString((long)newGold, numStr);
        DrawString(numStr);
        DrawString(GetCachedString(STR_HERO_DIPLO, 8, "\p gp"));
    }

    UnlockPixels(GetGWorldPixMap(sumGW));
    SetGWorld(sp, sd);

    {
        PixMapHandle srcPM = GetGWorldPixMap(sumGW);
        SetPort(sumWin);
        LockPixels(srcPM);
        CopyBits((BitMap *)*srcPM,
                 &((GrafPtr)sumWin)->portBits,
                 &gwR, &gwR, srcCopy, NULL);
        UnlockPixels(srcPM);
    }

    /* Auto-dismiss after 2 seconds or click */
    ticks = TickCount() + SpeedTicks(120);
    while (TickCount() < ticks) {
        if (WaitNextEvent(mDownMask | keyDownMask, &evt, 5, NULL))
            break;
    }

    DisposeGWorld(sumGW);
    DisposeWindow(sumWin);
}

static void DoAutosave(void);  /* forward declaration */

/* ===================================================================
 * ShowTurnSplash — Castle gate turn announcement (PICT 3100)
 *
 * Displays the castle gate scene with faction name and turn number.
 * Waits for click or ~2 seconds before dismissing.
 * =================================================================== */
static void ShowTurnSplash(short playerIdx)
{
    WindowPtr  splashWin;
    PicHandle  gatePict;
    Rect       winRect;
    short      winW = 320, winH = 312;
    unsigned char *gs;
    short      turn;
    EventRecord dummyEvt;
    unsigned long endTick;

    if (*gGameState == 0) return;
    gs = (unsigned char *)*gGameState;
    turn = *(short *)(gs + 0x136);

    SetRect(&winRect, 0, 0, winW, winH);
    OffsetRect(&winRect,
        (qd.screenBits.bounds.right - winW) / 2,
        (qd.screenBits.bounds.bottom - winH) / 2);

    splashWin = NewCWindow(NULL, &winRect, "\p", true,
                            plainDBox, (WindowPtr)-1L, false, 0);
    if (splashWin == NULL) return;
    SetPort(splashWin);

    /* Draw castle gate background (PICT 3100) */
    gatePict = GetPicture(3100);
    if (gatePict != NULL) {
        Rect dstR;
        SetRect(&dstR, 0, 0, winW, winH);
        DrawPicture(gatePict, &dstR);
    } else {
        /* Fallback: dark background */
        RGBColor bg = {0x2222, 0x2222, 0x3333};
        RGBForeColor(&bg);
        PaintRect(&splashWin->portRect);
    }

    /* Draw faction name */
    {
        unsigned char *fname = gs + playerIdx * FACTION_NAME_LEN;
        Str255 pname;
        short len = 0;
        short colorIdx = (playerIdx >= 0 && playerIdx < 8) ? playerIdx + 1 : 0;
        RGBColor shadow = {0x0000, 0x0000, 0x0000};

        while (len < 14 && fname[len] != 0) len++;
        pname[0] = (unsigned char)len;
        BlockMoveData(fname, pname + 1, len);

        TextFont(1602); TextSize(36); TextFace(0);  /* Illuria 36pt */

        /* Shadow */
        RGBForeColor(&shadow);
        MoveTo(winW / 2 - StringWidth(pname) / 2 + 2, 52);
        DrawString(pname);

        /* Colored text */
        RGBForeColor(&sPlayerColors[colorIdx]);
        MoveTo(winW / 2 - StringWidth(pname) / 2, 50);
        DrawString(pname);
    }

    /* Draw faction shield centered below name */
    {
        Rect shR;
        SetRect(&shR, winW / 2 - BIG_SHIELD_W / 2, 58,
                       winW / 2 + BIG_SHIELD_W / 2, 58 + BIG_SHIELD_H);
        DrawBigShield(playerIdx, &shR);
    }

    /* Draw "Turn N" */
    {
        Str255 turnLabel, turnNum;
        short colorIdx = (playerIdx >= 0 && playerIdx < 8) ? playerIdx + 1 : 0;
        RGBColor shadow = {0x0000, 0x0000, 0x0000};

        BlockMoveData("\pTurn ", turnLabel, 6);
        NumToString((long)turn, turnNum);
        {
            short ti;
            for (ti = 1; ti <= turnNum[0]; ti++)
                turnLabel[++turnLabel[0]] = turnNum[ti];
        }

        TextFont(1602); TextSize(24); TextFace(0);  /* Illuria 24pt */

        /* Shadow */
        RGBForeColor(&shadow);
        MoveTo(winW / 2 - StringWidth(turnLabel) / 2 + 2, 92);
        DrawString(turnLabel);

        /* Colored text */
        RGBForeColor(&sPlayerColors[colorIdx]);
        MoveTo(winW / 2 - StringWidth(turnLabel) / 2, 90);
        DrawString(turnLabel);
    }

    TextFace(0); TextFont(3); TextSize(9);

    /* Wait for click or ~2 seconds */
    endTick = TickCount() + 120;
    while (TickCount() < endTick) {
        if (WaitNextEvent(mDownMask | keyDownMask, &dummyEvt, 5, NULL))
            break;
    }

    DisposeWindow(splashWin);
    InvalidateAllGameWindows();
}

/* ===================================================================
 * ProcessNeutralCities — Neutral city army production and expansion
 *
 * When sNeutralCities >= 1 (Strong), neutral cities slowly build
 * garrison armies. When sNeutralCities == 2 (Active), neutral
 * armies also attack nearby player cities.
 * Called once per round (end of round processing).
 * =================================================================== */
static void ProcessNeutralCities(void)
{
    unsigned char *gs;
    short cityCount, armyCount, ci;

    if (sNeutralCities < 1) return;
    if (*gGameState == 0) return;

    gs = (unsigned char *)*gGameState;
    cityCount = *(short *)(gs + 0x810);
    armyCount = *(short *)(gs + 0x1602);
    if (cityCount > 40) cityCount = 40;
    if (armyCount > 100) armyCount = 100;

    for (ci = 0; ci < cityCount; ci++) {
        unsigned char *city = gs + 0x812 + ci * 0x20;
        short owner = *(short *)(city + 0x04);
        short sType = (short)(unsigned char)city[0x18];
        short cx, cy;

        /* Only process neutral cities (owner < 0 or unowned) */
        if (owner >= 0 && owner < 8) continue;
        if (sType == 2 || sType == 5 || sType == 6) continue; /* skip ruins */

        cx = *(short *)(city + 0x00);
        cy = *(short *)(city + 0x02);

        /* Check if neutral city already has a garrison */
        {
            short ai, garrisonCount = 0, garrisonStr = 0;
            armyCount = *(short *)(gs + 0x1602);
            if (armyCount > 100) armyCount = 100;
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *a = gs + 0x1604 + ai * 0x42;
                if (*(short *)(a + 0x00) == cx && *(short *)(a + 0x02) == cy) {
                    garrisonCount++;
                    garrisonStr += *(short *)(a + 0x2a);
                }
            }

            /* Strong: build garrison up to 2 armies (defense value 8) */
            /* Active: build garrison up to 3 armies (defense value 12) */
            {
                short maxStr = (sNeutralCities >= 2) ? 12 : 8;
                if (garrisonStr < maxStr && armyCount < 100) {
                    /* ~50% chance to produce per turn (Strong), 75% for Active */
                    short chance = (sNeutralCities >= 2) ? 4 : 2;
                    if ((short)(TickCount() % chance) == 0) {
                        unsigned char *newArmy = gs + 0x1604 + armyCount * 0x42;
                        short j;
                        /* Pick unit type: Heavy Infantry for Strong, mix for Active */
                        short unitType = (sNeutralCities >= 2 && (TickCount() & 1)) ? 2 : 1;
                        static const unsigned char neutralSpr[] = {0, 2, 4, 6, 8, 10};
                        static const unsigned char neutralHP[]  = {3, 4, 5, 3, 6, 4};
                        static const unsigned char neutralMov[] = {10, 8, 14, 10, 6, 12};
                        short idx = unitType;
                        if (idx < 0 || idx > 5) idx = 1;

                        for (j = 0; j < 0x42; j++) newArmy[j] = 0;
                        *(short *)(newArmy + 0x00) = cx;
                        *(short *)(newArmy + 0x02) = cy;
                        newArmy[0x15] = 0x0F; /* neutral owner marker */
                        newArmy[0x14] = neutralSpr[idx];
                        newArmy[0x16] = (unsigned char)unitType;
                        newArmy[0x17] = 0xFF; newArmy[0x18] = 0xFF; newArmy[0x19] = 0xFF;
                        newArmy[0x1a] = neutralMov[idx];
                        newArmy[0x1e] = neutralHP[idx];
                        *(short *)(newArmy + 0x2a) = (short)neutralHP[idx];
                        newArmy[0x2e] = (unsigned char)(neutralMov[idx]);
                        newArmy[0x2d] = 3; /* fortified */
                        *(short *)(gs + 0x1602) = armyCount + 1;
                    }
                }
            }
        }
    }

    /* Active mode: neutral armies try to capture nearby undefended cities */
    if (sNeutralCities >= 2) {
        armyCount = *(short *)(gs + 0x1602);
        if (armyCount > 100) armyCount = 100;
        {
            short ai;
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                if ((unsigned char)army[0x15] != 0x0F) continue; /* not neutral */
                if (army[0x2d] > 0) continue; /* fortified, don't move */
                /* Give neutral armies movement orders toward nearby enemy */
                {
                    short ax = *(short *)(army + 0x00);
                    short ay = *(short *)(army + 0x02);
                    long bestDist = 999999L;
                    short tgtX = -1, tgtY = -1;

                    for (ci = 0; ci < cityCount; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        short cOwner = *(short *)(city + 0x04);
                        short sType2 = (short)(unsigned char)city[0x18];
                        if (sType2 == 2 || sType2 == 5 || sType2 == 6) continue;
                        if (cOwner < 0 || cOwner >= 8) continue; /* skip neutral */
                        {
                            short dx = *(short *)(city + 0x00) - ax;
                            short dy = *(short *)(city + 0x02) - ay;
                            long dist = (long)dx * dx + (long)dy * dy;
                            /* Only target within 10 tiles */
                            if (dist < bestDist && dist <= 100) {
                                bestDist = dist;
                                tgtX = *(short *)(city + 0x00);
                                tgtY = *(short *)(city + 0x02);
                            }
                        }
                    }
                    if (tgtX >= 0) {
                        *(short *)(army + 0x32) = 1;
                        *(short *)(army + 0x34) = tgtX;
                        *(short *)(army + 0x36) = tgtY;
                    }
                }
            }
        }
    }
}

static void AdvanceToNextPlayer(void)
{
    unsigned char *gs;
    Boolean foundHuman;
    short loopGuard;

    if (*gGameState == 0)
        return;

    gs = (unsigned char *)*gGameState;
    foundHuman = false;
    loopGuard = 0;

    do {
        short endOfRound = *(short *)(gs + 0x118);
        short orderIdx, nextPlayer;

        if (endOfRound != 0) {
            /* New round: increment turn counter */
            short i;
            short turn = *(short *)(gs + 0x136) + 1;
            *(short *)(gs + 0x136) = turn;

            /* Record turn snapshot for history charts */
            RecordTurnSnapshot();

            /* Show brief end-of-round summary every 5 turns */
            if (turn > 1 && turn % 5 == 0) {
                WindowPtr sumWin;
                Rect sumR;
                GWorldPtr sumGW = NULL;
                Rect sumGR;
                CGrafPtr sp; GDHandle sd;
                EventRecord se;
                unsigned long tEnd;
                short cityCount = *(short *)(gs + 0x810);
                short armyCount = *(short *)(gs + 0x1602);
                short pi;
                Str255 ns;

                if (cityCount > 40) cityCount = 40;
                if (armyCount > 100) armyCount = 100;

                SetRect(&sumR, 0, 0, 360, 200);
                OffsetRect(&sumR, (qd.screenBits.bounds.right - 360) / 2,
                                 (qd.screenBits.bounds.bottom - 200) / 2);
                sumWin = NewCWindow(NULL, &sumR, "\p", true,
                                    plainDBox, (WindowPtr)-1L, false, 0);
                SetRect(&sumGR, 0, 0, 360, 200);
                if (sumWin) NewGWorld(&sumGW, 0, &sumGR, NULL, NULL, 0);
                if (sumWin && sumGW) {
                    GetGWorld(&sp, &sd);
                    SetGWorld(sumGW, NULL);
                    LockPixels(GetGWorldPixMap(sumGW));

                    {
                        RGBColor bg = {0x1500, 0x1500, 0x2500};
                        RGBForeColor(&bg);
                        PaintRect(&sumGR);
                    }
                    {
                        RGBColor bdr = {0x9999, 0x8888, 0x4444};
                        RGBForeColor(&bdr);
                        PenSize(2, 2);
                        FrameRect(&sumGR);
                        PenSize(1, 1);
                    }
                    {
                        RGBColor gold = {0xFFFF, 0xDDDD, 0x5555};
                        RGBForeColor(&gold);
                        TextFont(2); TextSize(12); TextFace(bold);
                        MoveTo(100, 22);
                        DrawString(GetCachedString(STR_MISC, 12, "\pTurn "));
                        NumToString((long)turn, ns); DrawString(ns);
                        DrawString(GetCachedString(STR_MISC, 13, "\p Summary"));
                        TextFace(0); TextFont(3); TextSize(9);
                    }

                    /* Column headers */
                    {
                        RGBColor hdr = {0xAAAA, 0xAAAA, 0xCCCC};
                        RGBForeColor(&hdr);
                        TextFace(bold);
                        MoveTo(20, 42);
                        DrawString(GetCachedString(STR_REPORT, 10, "\pFaction        Cities  Armies  Gold"));
                        TextFace(0);
                    }

                    /* Per-player stats */
                    for (pi = 0; pi < 8; pi++) {
                        short yCities = 0, yArmies = 0;
                        short gold;
                        short yp = 58 + pi * 17;
                        short ci2, ai2;

                        if (*(short *)(gs + 0x138 + pi * 2) == 0) continue;

                        /* Count cities and armies */
                        for (ci2 = 0; ci2 < cityCount; ci2++) {
                            unsigned char *c = gs + 0x812 + ci2 * 0x20;
                            short sType = (short)(unsigned char)c[0x18];
                            if (sType == 2 || sType == 5 || sType == 6) continue;
                            if (*(short *)(c + 0x04) == pi) yCities++;
                        }
                        for (ai2 = 0; ai2 < armyCount; ai2++) {
                            unsigned char *a = gs + 0x1604 + ai2 * 0x42;
                            if ((short)(unsigned char)a[0x15] == pi) yArmies++;
                        }
                        gold = *(short *)(gs + 0x186 + pi * 0x14);

                        /* Faction name */
                        {
                            unsigned char *fn = gs + pi * FACTION_NAME_LEN;
                            Str255 pn;
                            short fl = 0;
                            while (fl < 12 && fn[fl]) fl++;
                            pn[0] = fl;
                            BlockMoveData(fn, pn + 1, fl);
                            RGBForeColor(&sPlayerColors[pi + 1]);
                            MoveTo(20, yp);
                            DrawString(pn);
                        }
                        /* Stats */
                        {
                            RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                            RGBForeColor(&white);
                            MoveTo(140, yp);
                            NumToString((long)yCities, ns); DrawString(ns);
                            MoveTo(200, yp);
                            NumToString((long)yArmies, ns); DrawString(ns);
                            MoveTo(260, yp);
                            NumToString((long)gold, ns); DrawString(ns);
                        }
                    }

                    UnlockPixels(GetGWorldPixMap(sumGW));
                    SetGWorld(sp, sd);
                    SetPort(sumWin);
                    {
                        Rect dr = sumWin->portRect;
                        LockPixels(GetGWorldPixMap(sumGW));
                        CopyBits((BitMap *)*GetGWorldPixMap(sumGW),
                                 &((GrafPtr)sumWin)->portBits,
                                 &sumGR, &dr, srcCopy, NULL);
                        UnlockPixels(GetGWorldPixMap(sumGW));
                    }

                    /* Auto-dismiss after 3 seconds or on click/key */
                    tEnd = TickCount() + SpeedTicks(180);  /* 3 seconds */
                    while (TickCount() < tEnd) {
                        if (WaitNextEvent(mDownMask | keyDownMask, &se, 10, NULL)) {
                            if (se.what == mouseDown || se.what == keyDown) break;
                        }
                    }
                }
                if (sumGW) DisposeGWorld(sumGW);
                if (sumWin) DisposeWindow(sumWin);
            }

            /* Process neutral city armies (Strong/Active mode) */
            ProcessNeutralCities();

            /* Reset turn order */
            for (i = 0; i < 8; i++)
                *(short *)(gs + 0x164 + i * 2) = i;
            /* Random turn order: shuffle via 20 random swaps (matches original) */
            if (sOptRandomTurns) {
                short sw;
                for (sw = 0; sw < 20; sw++) {
                    short a = (short)((unsigned short)Random() % 8);
                    short b = (short)((unsigned short)Random() % 8);
                    if (a != b) {
                        short tmp = *(short *)(gs + 0x164 + a * 2);
                        *(short *)(gs + 0x164 + a * 2) = *(short *)(gs + 0x164 + b * 2);
                        *(short *)(gs + 0x164 + b * 2) = tmp;
                    }
                }
            }
            *(short *)(gs + 0x174) = 0;
            *(short *)(gs + 0x118) = 0;
        }

        /* Check player elimination: mark dead if no cities and no armies */
        {
            short pi;
            for (pi = 0; pi < 8; pi++) {
                if (*(short *)(gs + 0x138 + pi * 2) == 0) continue; /* already dead */
                {
                    short hasCities = 0, hasArmies = 0;
                    short ci, ai2;
                    short cc = *(short *)(gs + 0x810);
                    short ac2 = *(short *)(gs + 0x1602);
                    if (cc > 40) cc = 40;
                    if (ac2 > 100) ac2 = 100;
                    for (ci = 0; ci < cc; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        if (*(short *)(city + 0x04) == pi) { hasCities = 1; break; }
                    }
                    for (ai2 = 0; ai2 < ac2; ai2++) {
                        unsigned char *army = gs + 0x1604 + ai2 * 0x42;
                        if ((short)(unsigned char)army[0x15] == pi) { hasArmies = 1; break; }
                    }
                    if (!hasCities && !hasArmies) {
                        *(short *)(gs + 0x138 + pi * 2) = 0;
                        *(short *)(gs + 0x148 + pi * 2) = 0;
                    }
                }
            }
        }

        /* Get next player from order */
        orderIdx = *(short *)(gs + 0x174);
        nextPlayer = *(short *)(gs + 0x164 + orderIdx * 2);
        *(short *)(gs + 0x110) = nextPlayer;

        /* Advance order index */
        *(short *)(gs + 0x174) = orderIdx + 1;
        if (*(short *)(gs + 0x174) > 7)
            *(short *)(gs + 0x118) = 1;

        /* Check if alive */
        if (*(short *)(gs + 0x138 + nextPlayer * 2) != 0) {
            if (*(short *)(gs + 0xd0 + nextPlayer * 2) == 0) {
                /* Human player: center viewport on their capital */
                {
                    unsigned char *ps = gs + 0x186 + nextPlayer * 0x14;
                    short cx2 = *(short *)(ps + 0x04);
                    short cy2 = *(short *)(ps + 0x06);
                    if (cx2 > 0 || cy2 > 0) {
                        sViewportX = cx2 - 7;
                        sViewportY = cy2 - 5;
                    }
                    if (sViewportX < 0) sViewportX = 0;
                    if (sViewportY < 0) sViewportY = 0;
                    if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
                    if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
                }
                foundHuman = true;
            } else {
                /* AI player: show thinking banner, then execute turn */
                if (*gMainGameWindow != 0) {
                    WindowPtr mw = (WindowPtr)*gMainGameWindow;
                    Rect bannerR;
                    short colorIdx = (nextPlayer >= 0 && nextPlayer < 8) ? nextPlayer + 1 : 0;
                    RGBColor bannerBg = {0x2222, 0x2222, 0x2222};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    SetPort(mw);
                    SetRect(&bannerR, mw->portRect.left, mw->portRect.top,
                            mw->portRect.right, mw->portRect.top + 18);
                    RGBForeColor(&bannerBg);
                    PaintRect(&bannerR);
                    RGBForeColor(&sPlayerColors[colorIdx]);
                    PenSize(2, 2);
                    FrameRect(&bannerR);
                    PenNormal();
                    RGBForeColor(&white);
                    TextFont(3);
                    TextSize(9);
                    MoveTo(bannerR.left + 10, bannerR.top + 13);
                    {
                        unsigned char *fname = gs + nextPlayer * FACTION_NAME_LEN;
                        Str255 pname;
                        short len = 0;
                        while (len < 12 && fname[len] != 0) len++;
                        pname[0] = (unsigned char)len;
                        BlockMoveData(fname, pname + 1, len);
                        DrawString(pname);
                    }
                    DrawString(GetCachedString(STR_MISC, 14, "\p is thinking..."));
                }
                ExecuteAITurn(nextPlayer);
                /* Redraw map after AI turn */
                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
                if (*gOverviewWindow != 0) {
                    SetPort((WindowPtr)*gOverviewWindow);
                    InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                }
            }
        }

        loopGuard++;
        if (loopGuard > 64) {
            /* Safety: no human players found, just stop */
            foundHuman = true;
        }
    } while (!foundHuman);

    /* Process start-of-turn: income, production, hero hire */
    if (loopGuard <= 64) {
        short curPlayer = *(short *)(gs + 0x110);

        /* Autosave at start of human turn */
        DoAutosave();

        /* Show turn start banner (PICT 3100 castle gate) */
        PlaySound(SND_TURN);
        LoadAndPlayMusic(MUSIC_STATE_TURN);
        ShowTurnSplash(curPlayer);

        /* Voice narration: territory status (every 3 turns to avoid spam) */
        {
            short turn2 = *(short *)(gs + 0x136);
            if (turn2 <= 1) {
                PlayVoice(SND_VGREET0);
            } else if (turn2 % 3 == 0) {
                /* Count cities owned vs total to determine territory % */
                short cc = *(short *)(gs + 0x810);
                short myCities = 0, totalCities = 0, ci2;
                short numAlive = 0, pi2;
                if (cc > 40) cc = 40;
                for (ci2 = 0; ci2 < cc; ci2++) {
                    unsigned char *ct = gs + 0x812 + ci2 * 0x20;
                    short ct_type = (short)(unsigned char)ct[0x18];
                    if (ct_type == 2 || ct_type == 5 || ct_type == 6) continue;
                    totalCities++;
                    if (*(short *)(ct + 0x04) == curPlayer) myCities++;
                }
                for (pi2 = 0; pi2 < 8; pi2++)
                    if (*(short *)(gs + 0x138 + pi2 * 2) != 0) numAlive++;
                if (numAlive < 2) numAlive = 2;

                if (totalCities > 0) {
                    /* fair share = 100/numAlive; compare against that */
                    short pct = (myCities * 100) / totalCities;
                    short fair = 100 / numAlive;
                    if (pct >= fair * 3)     PlayVoice(SND_VWIN35);
                    else if (pct >= fair * 2) PlayVoice(SND_VWIN25);
                    else if (pct > fair + 5)  PlayVoice(SND_VWIN15);
                    else if (pct > fair)      PlayVoice(SND_VWIN05);
                    else if (pct >= fair - 5) PlayVoice(SND_VGREET0);  /* neutral */
                    else if (pct >= fair / 2) PlayVoice(SND_VLOSE10);
                    else if (pct > 0)         PlayVoice(SND_VLOSE25);
                    else                      PlayVoice(SND_VLOSE35);
                }
            }
        }

        /* Update window title with current player and turn */
        if (*gMainGameWindow != 0) {
            WindowPtr mw = (WindowPtr)*gMainGameWindow;
            short turn2 = *(short *)(gs + 0x136);
            Str255 wTitle;
            unsigned char *fname = gs + curPlayer * FACTION_NAME_LEN;
            short fLen = 0;
            while (fLen < 14 && fname[fLen] != 0) fLen++;
            BlockMoveData("\pWarlords II - ", wTitle, 15);
            BlockMoveData(fname, wTitle + wTitle[0] + 1, fLen);
            wTitle[0] += fLen;
            wTitle[++wTitle[0]] = ' ';
            wTitle[++wTitle[0]] = '(';
            wTitle[++wTitle[0]] = 'T';
            {
                Str255 tns;
                short ti;
                NumToString((long)turn2, tns);
                for (ti = 1; ti <= tns[0] && wTitle[0] < 250; ti++)
                    wTitle[++wTitle[0]] = tns[ti];
            }
            wTitle[++wTitle[0]] = ')';
            SetWTitle(mw, wTitle);
        }

        /* Random turn events */
        if (sOptRandomTurns && *(short *)(gs + 0x136) > 1) {
            short rEvt = (short)((unsigned short)Random() % 100);
            if (rEvt < 12) {
                /* ~12% chance of random event per turn */
                short evtType = (short)((unsigned short)Random() % 5);
                WindowPtr reWin;
                Rect reR;
                const unsigned char *evtMsg = "\p";
                unsigned long reTk;
                EventRecord reEv;

                SetRect(&reR, 0, 0, 300, 60);
                OffsetRect(&reR, 190, 200);

                switch (evtType) {
                case 0: { /* Gold windfall: +25-75 gold */
                    short bonus = 25 + ((unsigned short)Random() % 51);
                    *(short *)(gs + 0x186 + curPlayer * 0x14) += bonus;
                    evtMsg = "\pA trader offers tribute! Gold gained.";
                    RecordEvent(*(short *)(gs + 0x136), HIST_EVT_DIPLOMACY,
                                curPlayer, "Random: gold windfall");
                    break;
                }
                case 1: { /* Plague: random army loses 1 HP per unit */
                    short ac = *(short *)(gs + 0x1602);
                    short ai, target = -1;
                    if (ac > 100) ac = 100;
                    for (ai = 0; ai < ac; ai++) {
                        unsigned char *a = gs + 0x1604 + ai * 0x42;
                        if ((short)(unsigned char)a[0x15] == curPlayer) {
                            target = ai;
                            if (((unsigned short)Random() % 3) == 0) break;
                        }
                    }
                    if (target >= 0) {
                        unsigned char *a = gs + 0x1604 + target * 0x42;
                        short sl;
                        for (sl = 0; sl < 4; sl++) {
                            if (a[0x16 + sl] != 0xFF && a[0x1e + sl] > 1)
                                a[0x1e + sl]--;
                        }
                        evtMsg = "\pPlague strikes! An army is weakened.";
                    } else {
                        evtMsg = "\pA plague sweeps through, but spares you.";
                    }
                    break;
                }
                case 2: { /* Divine blessing: heal a random army */
                    short ac = *(short *)(gs + 0x1602);
                    short ai, target = -1;
                    if (ac > 100) ac = 100;
                    for (ai = 0; ai < ac; ai++) {
                        unsigned char *a = gs + 0x1604 + ai * 0x42;
                        if ((short)(unsigned char)a[0x15] == curPlayer) {
                            target = ai;
                            if (((unsigned short)Random() % 3) == 0) break;
                        }
                    }
                    if (target >= 0) {
                        unsigned char *a = gs + 0x1604 + target * 0x42;
                        short sl;
                        for (sl = 0; sl < 4; sl++) {
                            if (a[0x16 + sl] != 0xFF && a[0x1e + sl] > 0)
                                a[0x1e + sl] += 2;
                        }
                        evtMsg = "\pDivine blessing! An army is strengthened.";
                    } else {
                        evtMsg = "\pThe gods smile upon you.";
                    }
                    break;
                }
                case 3: { /* City income boost: random city +2 income this turn */
                    short cc = *(short *)(gs + 0x810);
                    short ci, target = -1;
                    if (cc > 40) cc = 40;
                    for (ci = 0; ci < cc; ci++) {
                        unsigned char *c = gs + 0x812 + ci * 0x20;
                        if (*(short *)(c + 0x04) == curPlayer) {
                            target = ci;
                            if (((unsigned short)Random() % 3) == 0) break;
                        }
                    }
                    if (target >= 0) {
                        *(short *)(gs + 0x186 + curPlayer * 0x14) +=
                            *(short *)(gs + 0x812 + target * 0x20 + 0x08);
                        evtMsg = "\pA bountiful harvest! Extra city income.";
                    } else {
                        evtMsg = "\pThe harvest is plentiful this season.";
                    }
                    break;
                }
                case 4: { /* Movement bonus: +50 gold (winds of fortune) */
                    short bonus = 30 + ((unsigned short)Random() % 41);
                    *(short *)(gs + 0x186 + curPlayer * 0x14) += bonus;
                    evtMsg = "\pFavorable winds bring fortune! Gold gained.";
                    RecordEvent(*(short *)(gs + 0x136), HIST_EVT_DIPLOMACY,
                                curPlayer, "Random: fortune winds");
                    break;
                }
                }

                /* Voice narration for random events */
                PlayVoice(SND_VMESS00 + (short)((unsigned short)Random() % 4));

                /* Show event notification */
                reWin = NewCWindow(NULL, &reR, "\p", true,
                                   plainDBox, (WindowPtr)-1, false, 0);
                if (reWin) {
                    RGBColor reBg = {0x1800, 0x0800, 0x2800};
                    RGBColor reGold = {0xFFFF, 0xDDDD, 0x3333};
                    RGBColor reWh = {0xFFFF, 0xFFFF, 0xFFFF};
                    SetPort(reWin);
                    RGBForeColor(&reBg); PaintRect(&reWin->portRect);
                    RGBForeColor(&reGold); PenSize(2,2);
                    FrameRect(&reWin->portRect); PenNormal();
                    TextFont(3); TextSize(11); TextFace(bold);
                    MoveTo(15, 18);
                    DrawString(GetCachedString(STR_MISC, 15, "\pRandom Event!"));
                    TextFace(0); TextSize(10);
                    RGBForeColor(&reWh);
                    MoveTo(15, 40);
                    DrawString(evtMsg);

                    reTk = TickCount() + SpeedTicks(120);
                    while (TickCount() < reTk) {
                        if (WaitNextEvent(mDownMask | keyDownMask, &reEv, 5, NULL))
                            break;
                    }
                    DisposeWindow(reWin);
                }
            }
        }

        /* HP recovery: armies resting at friendly cities heal 1 HP per turn */
        {
            short armyCount = *(short *)(gs + 0x1602);
            short cityCount2 = *(short *)(gs + 0x810);
            short ai;
            if (armyCount > 100) armyCount = 100;
            if (cityCount2 > 40) cityCount2 = 40;
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)army[0x15] != curPlayer) continue;
                /* Only heal if army didn't move (full movement remaining) */
                if ((short)(unsigned char)army[0x2e] < (short)(unsigned char)army[0x1a]) continue;
                /* Check if at a friendly city */
                {
                    short ax = *(short *)(army + 0x00);
                    short ay = *(short *)(army + 0x02);
                    short ci;
                    for (ci = 0; ci < cityCount2; ci++) {
                        unsigned char *city = gs + 0x812 + ci * 0x20;
                        short sType = (short)(unsigned char)city[0x18];
                        if (sType == 2 || sType == 5 || sType == 6) continue;
                        if (*(short *)(city + 0x04) == curPlayer &&
                            *(short *)(city + 0x00) == ax &&
                            *(short *)(city + 0x02) == ay) {
                            /* Heal each unit by 1 HP (up to starting HP) */
                            short u;
                            static const unsigned char maxHP[] = {3, 4, 5, 3, 6, 4};
                            for (u = 0; u < 4; u++) {
                                short ut = (short)(unsigned char)army[0x16 + u];
                                short hp = (short)(unsigned char)army[0x1e + u];
                                short mhp;
                                if (ut == 0xFF || hp <= 0) continue;
                                if (ut == 0x1C) mhp = 9; /* hero max HP */
                                else if (ut <= 5) mhp = maxHP[ut];
                                else mhp = 5;
                                if (hp < mhp) {
                                    army[0x1e + u] = (unsigned char)(hp + 1);
                                }
                            }
                            /* Recalculate army strength */
                            {
                                short str = 0;
                                for (u = 0; u < 4; u++)
                                    if ((unsigned char)army[0x16 + u] != 0xFF)
                                        str += (short)(unsigned char)army[0x1e + u];
                                *(short *)(army + 0x2a) = str;
                            }
                            break;
                        }
                    }
                }
            }
        }

        /* Reset movement points for all of this player's armies */
        {
            short armyCount = *(short *)(gs + 0x1602);
            short ai;
            if (armyCount > 100) armyCount = 100;
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)army[0x15] == curPlayer) {
                    /* Movement points = max movement of primary unit */
                    short maxMov = (short)(unsigned char)army[0x1a];
                    if (maxMov <= 0) maxMov = 10;  /* default */
                    /* Item bonus: movement items double the stack's move pts */
                    {
                        short bB, cB, gB;
                        Boolean fB, mB;
                        GetHeroItemBonus(ai, &bB, &cB, &gB, &fB, &mB);
                        if (mB) maxMov *= 2;
                    }
                    army[0x2e] = (unsigned char)(maxMov);
                }
            }
        }

        /* Reset extended state army flags for this player's armies */
        if (*gExtState != 0) {
            unsigned char *ext = (unsigned char *)*gExtState;
            short ac2 = *(short *)(gs + 0x1602);
            short ai2;
            if (ac2 > 100) ac2 = 100;
            for (ai2 = 0; ai2 < ac2; ai2++) {
                unsigned char *a2 = gs + 0x1604 + ai2 * 0x42;
                if ((short)(unsigned char)a2[0x15] == curPlayer) {
                    ext[0x11e + ai2] &= ~0x01;  /* clear 'moved this turn' flag */
                    ext[0x182 + ai2] = 0;        /* reset move counter */
                }
            }
        }

        /* Auto-move armies with movement orders toward their targets */
        if (*(short *)(gs + 0xd0 + curPlayer * 2) == 0) {
            /* Human player only: execute queued movement orders */
            short armyCount = *(short *)(gs + 0x1602);
            short ai;
            if (armyCount > 100) armyCount = 100;
            for (ai = 0; ai < armyCount; ai++) {
                unsigned char *army = gs + 0x1604 + ai * 0x42;
                if ((short)(unsigned char)army[0x15] != curPlayer) continue;
                if (*(short *)(army + 0x32) == 0) continue;  /* no orders */

                {
                    short tgtX = *(short *)(army + 0x34);
                    short tgtY = *(short *)(army + 0x36);
                    short step;
                    short prevMX = -1, prevMY = -1;

                    static const short aDirX[8] = {1, -1, 0, 0, 1, -1, 1, -1};
                    static const short aDirY[8] = {0, 0, 1, -1, 1, 1, -1, -1};

                    for (step = 0; step < 10; step++) {
                        short curX, curY, movePts, unitClass;
                        short ddx, ddy, stX = 0, stY = 0, nX, nY, cost;

                        armyCount = *(short *)(gs + 0x1602);
                        if (armyCount > 100) armyCount = 100;
                        if (ai >= armyCount) break;
                        army = gs + 0x1604 + ai * 0x42;
                        if ((short)(unsigned char)army[0x15] != curPlayer) break;

                        movePts = (short)(unsigned char)army[0x2e];
                        if (movePts <= 0) break;

                        curX = *(short *)(army + 0x00);
                        curY = *(short *)(army + 0x02);
                        ddx = tgtX - curX;
                        ddy = tgtY - curY;

                        if (ddx > 0) stX = 1; else if (ddx < 0) stX = -1;
                        if (ddy > 0) stY = 1; else if (ddy < 0) stY = -1;
                        if (stX == 0 && stY == 0) {
                            *(short *)(army + 0x32) = 0;
                            break;
                        }

                        nX = curX + stX;
                        nY = curY + stY;
                        unitClass = (short)(unsigned char)army[0x16];
                        cost = GetMovementCost(nX, nY, unitClass);

                        /* Anti-oscillation */
                        if (cost > 0 && nX == prevMX && nY == prevMY)
                            cost = 0;

                        if (cost == 0) {
                            /* Try all 8 directions */
                            long bestD = 999999L;
                            short bestC = 0, bestX = -1, bestY = -1, d;
                            for (d = 0; d < 8; d++) {
                                short nx2 = curX + aDirX[d];
                                short ny2 = curY + aDirY[d];
                                short nc;
                                long nd;
                                if (nx2 < 0 || nx2 >= sMapWidth ||
                                    ny2 < 0 || ny2 >= sMapHeight) continue;
                                if (nx2 == prevMX && ny2 == prevMY) continue;
                                nc = GetMovementCost(nx2, ny2, unitClass);
                                if (nc <= 0 || nc > movePts) continue;
                                nd = (long)(tgtX - nx2) * (tgtX - nx2) +
                                     (long)(tgtY - ny2) * (tgtY - ny2) + nc * 2;
                                if (nd < bestD) {
                                    bestD = nd; bestC = nc;
                                    bestX = nx2; bestY = ny2;
                                }
                            }
                            if (bestX < 0) break;
                            nX = bestX; nY = bestY; cost = bestC;
                        }
                        if (movePts < cost) break;

                        prevMX = curX; prevMY = curY;
                        *(short *)(army + 0x00) = nX;
                        *(short *)(army + 0x02) = nY;
                        army[0x2e] = (unsigned char)(movePts - cost);

                        if (sOptHiddenMap)
                            FogReveal(curPlayer, nX, nY);

                        if (CheckAndResolveCombat(ai)) {
                            armyCount = *(short *)(gs + 0x1602);
                            if (armyCount > 100) armyCount = 100;
                            break;
                        }

                        if (*(short *)(army + 0x00) == tgtX &&
                            *(short *)(army + 0x02) == tgtY) {
                            *(short *)(army + 0x32) = 0;
                            break;
                        }
                    }
                }
            }
        }

        /* Calculate income from owned cities */
        {
            short cityCount = *(short *)(gs + 0x810);
            short ci, cityIncome = 0, totalUpkeep = 0;
            if (cityCount > 40) cityCount = 40;

            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs + 0x812 + ci * 0x20;
                short cityOwner = *(short *)(city + 0x04);
                if (cityOwner == curPlayer) {
                    cityIncome += *(short *)(city + 0x08);
                }
            }

            /* Hero item gold bonuses: gold-type items add per city */
            {
                short armyCount2 = *(short *)(gs + 0x1602);
                short ai2;
                short ownedCities = 0;
                if (armyCount2 > 100) armyCount2 = 100;
                /* Count player's cities for gold item bonus */
                for (ci = 0; ci < cityCount; ci++) {
                    unsigned char *ct = gs + 0x812 + ci * 0x20;
                    if (*(short *)(ct + 0x04) == curPlayer) ownedCities++;
                }
                for (ai2 = 0; ai2 < armyCount2; ai2++) {
                    unsigned char *a = gs + 0x1604 + ai2 * 0x42;
                    if ((short)(unsigned char)a[0x15] == curPlayer) {
                        short slot;
                        for (slot = 0; slot < 4; slot++) {
                            if ((unsigned char)a[0x16 + slot] != 0xFF)
                                totalUpkeep += 2;
                        }
                        /* Gold item bonus */
                        {
                            short bB, cB, gB;
                            Boolean fB, mB;
                            GetHeroItemBonus(ai2, &bB, &cB, &gB, &fB, &mB);
                            if (gB > 0)
                                cityIncome += gB * ownedCities;
                        }
                    }
                }
            }

            /* Add net income to gold */
            {
                short netIncome = cityIncome - totalUpkeep;
                *(short *)(gs + 0x186 + curPlayer * 0x14) += netIncome;

                /* Show income summary for human players */
                if (*(short *)(gs + 0xd0 + curPlayer * 2) == 0) {
                    short newGold = *(short *)(gs + 0x186 + curPlayer * 0x14);
                    ShowIncomeSummary(cityIncome, totalUpkeep, newGold);
                    CheckQuestProgress(curPlayer);

                    /* Bankruptcy check: warn if gold below -100 */
                    if (newGold < -100) {
                        WindowPtr bkWin;
                        Rect bkR;
                        EventRecord bkEvt;
                        Boolean bkDone = false;
                        Str255 goldStr;
                        short disbanded = 0;

                        SetRect(&bkR, 0, 0, 320, 140);
                        OffsetRect(&bkR, (512 - 320) / 2, (384 - 140) / 2);
                        bkWin = NewCWindow(NULL, &bkR, "\p", true, plainDBox, (WindowPtr)-1, false, 0);
                        if (bkWin) {
                            SetPort(bkWin);
                            {
                                RGBColor warnBg = {0x3333, 0x1111, 0x1111};
                                RGBColor yellow = {0xFFFF, 0xDD00, 0x0000};
                                RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                                RGBColor black = {0, 0, 0};
                                Rect okR, disbandR;

                                RGBForeColor(&warnBg);
                                PaintRect(&bkWin->portRect);
                                RGBForeColor(&yellow);
                                PenSize(2, 2);
                                FrameRect(&bkWin->portRect);
                                PenNormal();

                                TextFont(2);
                                TextSize(12);
                                TextFace(bold);
                                RGBForeColor(&yellow);
                                MoveTo(20, 22);
                                DrawString(GetCachedString(STR_MISC, 18, "\pTreasury Warning!"));

                                TextFace(0);
                                TextFont(3);
                                TextSize(9);
                                RGBForeColor(&white);
                                MoveTo(20, 42);
                                DrawString(GetCachedString(STR_MISC, 19, "\pYour treasury is dangerously low: "));
                                NumToString((long)newGold, goldStr);
                                DrawString(goldStr);
                                DrawString(GetCachedString(STR_MISC, 20, "\p gold."));

                                MoveTo(20, 58);
                                DrawString(GetCachedString(STR_MISC, 21, "\pUpkeep exceeds income. You must reduce"));
                                MoveTo(20, 72);
                                DrawString(GetCachedString(STR_MISC, 22, "\pyour armies or capture more cities."));

                                /* OK button */
                                SetRect(&okR, 50, 100, 150, 120);
                                RGBForeColor(&black);
                                PaintRoundRect(&okR, 8, 8);
                                RGBForeColor(&white);
                                PenSize(2, 2);
                                FrameRoundRect(&okR, 8, 8);
                                PenNormal();
                                MoveTo(82, 114);
                                DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));

                                /* Disband button */
                                SetRect(&disbandR, 170, 100, 290, 120);
                                RGBForeColor(&black);
                                PaintRoundRect(&disbandR, 8, 8);
                                {
                                    RGBColor red = {0xFFFF, 0x4444, 0x4444};
                                    RGBForeColor(&red);
                                }
                                PenSize(2, 2);
                                FrameRoundRect(&disbandR, 8, 8);
                                PenNormal();
                                MoveTo(186, 114);
                                DrawString(GetCachedString(STR_MISC, 23, "\pDisband Weak"));

                                while (!bkDone) {
                                    if (WaitNextEvent(mDownMask | keyDownMask, &bkEvt, 30, NULL)) {
                                        if (bkEvt.what == mouseDown) {
                                            Point mp;
                                            mp = bkEvt.where;
                                            GlobalToLocal(&mp);
                                            if (PtInRect(mp, &okR)) {
                                                bkDone = true;
                                            } else if (PtInRect(mp, &disbandR)) {
                                                /* Disband weakest army group */
                                                short armyCount3 = *(short *)(gs + 0x1602);
                                                short weakIdx = -1, weakStr = 9999;
                                                short ai3;
                                                if (armyCount3 > 100) armyCount3 = 100;
                                                for (ai3 = 0; ai3 < armyCount3; ai3++) {
                                                    unsigned char *wa = gs + 0x1604 + ai3 * 0x42;
                                                    if ((short)(unsigned char)wa[0x15] == curPlayer) {
                                                        short str = (short)(unsigned char)wa[0x2a];
                                                        if (str < weakStr) {
                                                            weakStr = str;
                                                            weakIdx = ai3;
                                                        }
                                                    }
                                                }
                                                if (weakIdx >= 0) {
                                                    /* Remove army by swapping with last */
                                                    short last = armyCount3 - 1;
                                                    if (weakIdx != last) {
                                                        unsigned char *src = gs + 0x1604 + last * 0x42;
                                                        unsigned char *dst = gs + 0x1604 + weakIdx * 0x42;
                                                        BlockMoveData(src, dst, 0x42);
                                                    }
                                                    *(short *)(gs + 0x1602) = armyCount3 - 1;
                                                    disbanded++;
                                                    /* Recalculate upkeep savings */
                                                    *(short *)(gs + 0x186 + curPlayer * 0x14) += 8; /* ~4 units * 2 gold */
                                                    bkDone = true;
                                                }
                                            }
                                        } else if (bkEvt.what == keyDown) {
                                            char ch = bkEvt.message & charCodeMask;
                                            if (ch == 13 || ch == 3 || ch == 27) /* Return, Enter, Esc */
                                                bkDone = true;
                                        }
                                    }
                                }
                            }
                            DisposeWindow(bkWin);
                        }
                    }
                }
            }
        }

        /* Process city production */
        if (*gExtState != 0) {
            unsigned char *ext = (unsigned char *)*gExtState;
            short cityCount = *(short *)(gs + 0x810);
            short ci;
            if (cityCount > 40) cityCount = 40;

            for (ci = 0; ci < cityCount; ci++) {
                unsigned char *city = gs + 0x812 + ci * 0x20;
                unsigned char *extCity = ext + 0x24c + ci * 0x5c;
                short cityOwner = *(short *)(city + 0x04);
                short producing = *(short *)(extCity + 0x02);
                short prodTurns = *(short *)(extCity + 0x58);

                if (cityOwner != curPlayer || producing < 0)
                    continue;

                /* Decrement production turns */
                prodTurns--;
                *(short *)(extCity + 0x58) = prodTurns;

                if (prodTurns <= 0) {
                    /* Production complete: create new army at city */
                    short armyCount = *(short *)(gs + 0x1602);
                    PlaySound(SND_DING);  /* notification for production complete */
                    if (armyCount < 100) {
                        unsigned char *newArmy = gs + 0x1604 + armyCount * 0x42;
                        short j;

                        /* Zero out the new army record */
                        for (j = 0; j < 0x42; j++)
                            newArmy[j] = 0;

                        /* Place at city location */
                        *(short *)(newArmy + 0x00) = *(short *)(city + 0x00);
                        *(short *)(newArmy + 0x02) = *(short *)(city + 0x02);

                        /* Name: "Unit" + type number */
                        newArmy[0x04] = 'U';
                        newArmy[0x05] = 'n';
                        newArmy[0x06] = 'i';
                        newArmy[0x07] = 't';

                        /* Owner */
                        newArmy[0x15] = (unsigned char)curPlayer;

                        /* Unit type in slot 0 */
                        newArmy[0x16] = (unsigned char)producing;
                        newArmy[0x17] = 0xFF;
                        newArmy[0x18] = 0xFF;
                        newArmy[0x19] = 0xFF;

                        /* Type-specific stats: [LtInf, HvInf, Cav, Archers, Siege, Naval] */
                        {
                            /* Sprite index per unit type: LtInf=0, HvInf=2, Cav=4, Arch=6, Siege=8, Naval=10 */
                            static unsigned char spriteIdx[] = {0, 2, 4, 6, 8, 10};
                            static unsigned char unitHP[]  = {3, 4, 5, 3, 6, 4};
                            static unsigned char unitMov[] = {10, 8, 14, 10, 6, 12};
                            short idx = producing;
                            if (idx < 0 || idx > 5) idx = 0;
                            newArmy[0x14] = spriteIdx[idx]; /* sprite index */
                            newArmy[0x1a] = unitMov[idx]; /* movement */
                            newArmy[0x1e] = unitHP[idx];  /* hits */
                            newArmy[0x22] = 0;            /* bonus */
                            newArmy[0x26] = 0;            /* experience */
                            *(short *)(newArmy + 0x2a) = (short)unitHP[idx];
                            newArmy[0x2e] = (unsigned char)(unitMov[idx]); /* move pts */
                        }

                        /* Apply vectoring: if target city set, give army move orders */
                        {
                            short vecDest = *(short *)(extCity + 0x3e);
                            if (vecDest >= 0 && vecDest < cityCount) {
                                unsigned char *destCity = gs + 0x812 + vecDest * 0x20;
                                *(short *)(newArmy + 0x34) = *(short *)(destCity + 0x00);
                                *(short *)(newArmy + 0x36) = *(short *)(destCity + 0x02);
                                *(short *)(newArmy + 0x32) = 1;  /* has_orders = true */
                            }
                        }

                        *(short *)(gs + 0x1602) = armyCount + 1;

                        /* Record production event */
                        RecordEvent(*(short *)(gs + 0x136), HIST_EVT_PRODUCED,
                                    curPlayer, "Army produced");

                        /* Show production notification for human players */
                        if (*(short *)(gs + 0xd0 + curPlayer * 2) == 0) {
                            PlaySound(SND_CHORD);
                            Str255 unitName;
                            GetUnitTypeName(producing, unitName);
                            {
                                WindowPtr pnWin;
                                Rect pnR;
                                SetRect(&pnR, 0, 0, 250, 50);
                                OffsetRect(&pnR, 10, 40);
                                pnWin = NewCWindow(NULL, &pnR, "\p", true,
                                                   plainDBox, (WindowPtr)-1, false, 0);
                                if (pnWin) {
                                    RGBColor bg = {0x1800, 0x2000, 0x1800};
                                    RGBColor gold = {0xFFFF, 0xDDDD, 0x3333};
                                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                                    EventRecord pnEvt;
                                    unsigned long pnTicks;
                                    SetPort(pnWin);
                                    RGBForeColor(&bg);
                                    PaintRect(&pnWin->portRect);
                                    RGBForeColor(&gold);
                                    PenSize(2, 2);
                                    FrameRect(&pnWin->portRect);
                                    PenNormal();
                                    TextFont(3); TextSize(10); TextFace(bold);
                                    RGBForeColor(&white);
                                    MoveTo(10, 18);
                                    DrawString(GetCachedString(STR_CITY_DIALOG, 29, "\pProduction Complete!"));
                                    TextFace(0); TextSize(9);
                                    RGBForeColor(&gold);
                                    MoveTo(10, 36);
                                    DrawString(unitName);
                                    DrawString(GetCachedString(STR_CITY_DIALOG, 30, "\p at "));
                                    if (ci < sCityNameCount && sCityNames[ci][0] != '\0') {
                                        Str255 cn;
                                        char *s = sCityNames[ci];
                                        short nl = 0;
                                        while (nl < MAX_CITY_NAME - 1 && s[nl]) nl++;
                                        cn[0] = (unsigned char)nl;
                                        BlockMoveData(s, cn + 1, nl);
                                        DrawString(cn);
                                    } else {
                                        DrawString(GetCachedString(STR_CITY_DIALOG, 31, "\pcity"));
                                    }
                                    pnTicks = TickCount() + SpeedTicks(90);
                                    while (TickCount() < pnTicks) {
                                        if (WaitNextEvent(mDownMask | keyDownMask, &pnEvt, 5, NULL))
                                            break;
                                    }
                                    DisposeWindow(pnWin);
                                }
                            }
                        }
                    }

                    /* Reset production: start producing the same type again */
                    *(short *)(extCity + 0x58) = GetProductionTurns(producing);
                }
            }
        }

        /* Offer hero hire (original: FUN_1000d1a4) */
        PlayVoice(SND_VHERO00);
        ShowHeroHire(curPlayer, false);

        /* Check victory/defeat conditions */
        {
            short victoryResult = CheckVictoryConditions();
            if (victoryResult == 1) {
                LoadAndPlayMusic(MUSIC_STATE_VICTORY);
                ShowVictoryDialog(true);
            } else if (victoryResult == -1) {
                LoadAndPlayMusic(MUSIC_STATE_VICTORY);
                ShowVictoryDialog(false);
                /* Mark player as dead */
                *(short *)(gs + 0x138 + curPlayer * 2) = 0;
                *(short *)(gs + 0x148 + curPlayer * 2) = 0;
            }
        }
    }

    /* Update fog of war for new player */
    {
        short curPlayer = *(short *)(gs + 0x110);
        FogUpdatePlayer(curPlayer);
    }

    /* Auto-select first unmoved army for new player */
    sSelectedArmy = -1;
    SelectNextArmy();

    /* Redraw the map and minimap for the new player */
    if (gMainGameWindow != NULL) {
        SetPort((WindowPtr)*gMainGameWindow);
        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
    }
    if (gOverviewWindow != NULL && *gOverviewWindow != 0) {
        SetPort((WindowPtr)*gOverviewWindow);
        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
    }
    if (gInfoWindow != NULL && *gInfoWindow != 0) {
        SetPort((WindowPtr)*gInfoWindow);
        InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
    }
    if (gStatusWindow != NULL && *gStatusWindow != 0) {
        SetPort((WindowPtr)*gStatusWindow);
        InvalRect(&((WindowPtr)*gStatusWindow)->portRect);
    }
}


/* ===================================================================
 * Save/Load Game — simple flat binary format
 * Format: 'WL2S' magic (4B) + version (2B) + gameState (0x2FCC) +
 *         extState (0x4000) + mapTiles (0x8880) +
 *         viewport/selection state (20B)
 * =================================================================== */
#define SAVE_MAGIC  0x574C3253   /* 'WL2S' */
#define SAVE_VERSION 3

static FSSpec sSaveFileSpec;
static Boolean sSaveFileValid = false;
static FSSpec sAutosaveSpec;
static Boolean sAutosaveValid = false;

static Boolean SaveGameToFile(FSSpec *spec);  /* forward declaration */

static void DoAutosave(void)
{
    OSErr err;
    if (!sAutosaveValid) {
        /* Create autosave spec in same directory as app */
        short vRefNum;
        long dirID;
        err = HGetVol(NULL, &vRefNum, &dirID);
        if (err != noErr) return;
        err = FSMakeFSSpec(vRefNum, dirID, "\pWL2 Autosave", &sAutosaveSpec);
        if (err != noErr && err != fnfErr) return;
        sAutosaveValid = true;
    }
    SaveGameToFile(&sAutosaveSpec);
}

static Boolean SaveGameToFile(FSSpec *spec)
{
    short refNum;
    long count;
    OSErr err;
    long magic = SAVE_MAGIC;
    short version = SAVE_VERSION;
    short stateBlock[10];

    /* Create/open file */
    FSpDelete(spec);
    err = FSpCreate(spec, 'WL2!', 'WL2S', smSystemScript);
    if (err != noErr) return false;

    err = FSpOpenDF(spec, fsWrPerm, &refNum);
    if (err != noErr) return false;

    /* Header */
    count = 4; FSWrite(refNum, &count, &magic);
    count = 2; FSWrite(refNum, &count, &version);

    /* Game state */
    if (*gGameState != 0) {
        count = 0x2FCC;
        FSWrite(refNum, &count, (void *)*gGameState);
    }

    /* Extended state */
    if (*gExtState != 0) {
        count = 0x4000;
        FSWrite(refNum, &count, (void *)*gExtState);
    }

    /* Map tiles */
    if (*gMapTiles != 0) {
        count = 0x8880;
        FSWrite(refNum, &count, (void *)*gMapTiles);
    }

    /* UI state block */
    stateBlock[0] = sViewportX;
    stateBlock[1] = sViewportY;
    stateBlock[2] = sSelectedArmy;
    stateBlock[3] = sMinimapZoom;
    stateBlock[4] = sNeutralCities;
    stateBlock[5] = sRazingCities;
    stateBlock[6] = (short)sOptHiddenMap;
    stateBlock[7] = (short)sOptQuests;
    stateBlock[8] = (short)sOptDiplomacy;
    stateBlock[9] = (short)sOptViewEnemies;
    count = 20;
    FSWrite(refNum, &count, stateBlock);

    /* v2: Road data */
    if (*gRoadData != 0) {
        count = 0x4440;
        FSWrite(refNum, &count, (void *)*gRoadData);
    } else {
        /* Write zero-filled road data placeholder */
        Ptr zeroBuf = NewPtrClear(0x4440);
        if (zeroBuf) {
            count = 0x4440;
            FSWrite(refNum, &count, zeroBuf);
            DisposePtr(zeroBuf);
        }
    }

    /* v2: City names */
    {
        short nameCount = sCityNameCount;
        count = 2;
        FSWrite(refNum, &count, &nameCount);
        count = sizeof(sCityNames);
        FSWrite(refNum, &count, sCityNames);
    }

    /* v3: Additional game options */
    {
        short optBlock[8];
        optBlock[0] = sComputerSkill;
        optBlock[1] = sOptionsPreset;
        optBlock[2] = (short)sOptViewProd;
        optBlock[3] = (short)sOptIntenseCombat;
        optBlock[4] = (short)sOptMilAdvisor;
        optBlock[5] = (short)sOptQuickStart;
        optBlock[6] = (short)sOptRandomTurns;
        optBlock[7] = 0;  /* reserved */
        count = sizeof(optBlock);
        FSWrite(refNum, &count, optBlock);
    }

    /* v3: Signposts */
    {
        count = 2;
        FSWrite(refNum, &count, &sSignpostCount);
        count = sizeof(sSignposts);
        FSWrite(refNum, &count, sSignposts);
    }

    /* v3: History events */
    {
        count = 2;
        FSWrite(refNum, &count, &sHistoryCount);
        count = sizeof(sHistoryEvents);
        FSWrite(refNum, &count, sHistoryEvents);
        count = 2;
        FSWrite(refNum, &count, &sHistoryTurnCount);
        count = sizeof(sGoldHistory);
        FSWrite(refNum, &count, sGoldHistory);
        count = sizeof(sCityHistory);
        FSWrite(refNum, &count, sCityHistory);
    }

    /* v3: Fog of war data */
    {
        count = sizeof(sFogExplored);
        FSWrite(refNum, &count, sFogExplored);
        count = sizeof(sFogVisible);
        FSWrite(refNum, &count, sFogVisible);
    }

    FSClose(refNum);
    return true;
}

static Boolean LoadGameFromFile(FSSpec *spec)
{
    short refNum;
    long count;
    OSErr err;
    long magic;
    short version;
    short stateBlock[10];

    err = FSpOpenDF(spec, fsRdPerm, &refNum);
    if (err != noErr) return false;

    /* Verify magic */
    count = 4;
    FSRead(refNum, &count, &magic);
    if (magic != SAVE_MAGIC) { FSClose(refNum); return false; }

    count = 2;
    FSRead(refNum, &count, &version);
    if (version > SAVE_VERSION) { FSClose(refNum); return false; }

    /* Allocate state if needed */
    if (*gGameState == 0) *gGameState = (pint)NewPtrClear(0x2FCC);
    if (*gExtState == 0)  *gExtState  = (pint)NewPtrClear(0x4000);
    if (*gMapTiles == 0)  *gMapTiles  = (pint)NewPtrClear(0x8880);

    if (*gGameState == 0 || *gExtState == 0 || *gMapTiles == 0) {
        FSClose(refNum);
        return false;
    }

    /* Read game state */
    count = 0x2FCC;
    FSRead(refNum, &count, (void *)*gGameState);

    /* Read extended state */
    count = 0x4000;
    FSRead(refNum, &count, (void *)*gExtState);

    /* Read map tiles */
    count = 0x8880;
    FSRead(refNum, &count, (void *)*gMapTiles);

    /* Read UI state */
    count = 20;
    if (FSRead(refNum, &count, stateBlock) == noErr && count == 20) {
        sViewportX     = stateBlock[0];
        sViewportY     = stateBlock[1];
        sSelectedArmy  = stateBlock[2];
        sMinimapZoom   = stateBlock[3];
        sNeutralCities = stateBlock[4];
        sRazingCities  = stateBlock[5];
        sOptHiddenMap  = (Boolean)stateBlock[6];
        sOptQuests     = (Boolean)stateBlock[7];
        sOptDiplomacy  = (Boolean)stateBlock[8];
        sOptViewEnemies = (Boolean)stateBlock[9];
    }

    /* v2: Road data */
    if (version >= 2) {
        if (*gRoadData == 0)
            *gRoadData = (pint)NewPtrClear(0x4440);
        if (*gRoadData != 0) {
            count = 0x4440;
            FSRead(refNum, &count, (void *)*gRoadData);
        }
    }

    /* v2: City names */
    if (version >= 2) {
        short nameCount = 0;
        count = 2;
        if (FSRead(refNum, &count, &nameCount) == noErr) {
            sCityNameCount = nameCount;
            if (sCityNameCount > 40) sCityNameCount = 40;
            count = sizeof(sCityNames);
            FSRead(refNum, &count, sCityNames);
        }
    }

    /* v3: Additional game options */
    if (version >= 3) {
        short optBlock[8];
        count = sizeof(optBlock);
        if (FSRead(refNum, &count, optBlock) == noErr) {
            sComputerSkill     = optBlock[0];
            sOptionsPreset     = optBlock[1];
            sOptViewProd       = (Boolean)optBlock[2];
            sOptIntenseCombat  = (Boolean)optBlock[3];
            sOptMilAdvisor     = (Boolean)optBlock[4];
            sOptQuickStart     = (Boolean)optBlock[5];
            sOptRandomTurns    = (Boolean)optBlock[6];
        }
    }

    /* v3: Signposts */
    if (version >= 3) {
        short spCount = 0;
        count = 2;
        if (FSRead(refNum, &count, &spCount) == noErr) {
            sSignpostCount = spCount;
            if (sSignpostCount > MAX_SIGNPOSTS) sSignpostCount = MAX_SIGNPOSTS;
            count = sizeof(sSignposts);
            FSRead(refNum, &count, sSignposts);
        }
    }

    /* v3: History events */
    if (version >= 3) {
        short hCount = 0;
        count = 2;
        if (FSRead(refNum, &count, &hCount) == noErr) {
            sHistoryCount = hCount;
            if (sHistoryCount > MAX_HISTORY_EVENTS) sHistoryCount = MAX_HISTORY_EVENTS;
            count = sizeof(sHistoryEvents);
            FSRead(refNum, &count, sHistoryEvents);

            count = 2;
            if (FSRead(refNum, &count, &hCount) == noErr) {
                sHistoryTurnCount = hCount;
                if (sHistoryTurnCount > MAX_HIST_TURNS) sHistoryTurnCount = MAX_HIST_TURNS;
                count = sizeof(sGoldHistory);
                FSRead(refNum, &count, sGoldHistory);
                count = sizeof(sCityHistory);
                FSRead(refNum, &count, sCityHistory);
            }
        }
    }

    /* v3: Fog of war data */
    if (version >= 3) {
        count = sizeof(sFogExplored);
        FSRead(refNum, &count, sFogExplored);
        count = sizeof(sFogVisible);
        FSRead(refNum, &count, sFogVisible);
    }

    FSClose(refNum);
    sMapLoaded = true;
    return true;
}

static void DoSaveAs(void)
{
    StandardFileReply reply;
    StandardPutFile("\pSave game as:", "\pWarlords II Save", &reply);
    if (reply.sfGood) {
        sSaveFileSpec = reply.sfFile;
        sSaveFileValid = true;
        SaveGameToFile(&sSaveFileSpec);
    }
}

static void DoSave(void)
{
    if (sSaveFileValid) {
        SaveGameToFile(&sSaveFileSpec);
    } else {
        DoSaveAs();
    }
}

static void DoOpen(void)
{
    SFTypeList types;
    StandardFileReply reply;

    types[0] = 'WL2S';
    StandardGetFile(NULL, 1, types, &reply);
    if (reply.sfGood) {
        if (LoadGameFromFile(&reply.sfFile)) {
            sSaveFileSpec = reply.sfFile;
            sSaveFileValid = true;
            /* Invalidate all windows */
            if (gMainGameWindow != NULL && *gMainGameWindow != 0) {
                SetPort((WindowPtr)*gMainGameWindow);
                InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
            }
            if (gOverviewWindow != NULL && *gOverviewWindow != 0) {
                SetPort((WindowPtr)*gOverviewWindow);
                InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
            }
            if (gInfoWindow != NULL && *gInfoWindow != 0) {
                SetPort((WindowPtr)*gInfoWindow);
                InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
            }
        }
    }
}


/* ===================================================================
 * ShowVectoringDialog — set city vectoring targets
 *
 * Vectoring routes newly produced armies from one city to another.
 * cityIndex is the producing city in the gs+0x812 site table.
 * =================================================================== */
static void ShowVectoringDialog(short cityIndex)
{
    WindowPtr vecWin;
    GWorldPtr offGW = NULL;
    Rect winRect, gwRect;
    Boolean done = false;
    unsigned char *gs, *ext, *city, *extCity;
    short cityCount, curPlayer, cityOwner;
    short vecTarget;  /* target city index, -1=none */
    short ownedCities[40];
    short ownedCount = 0;
    short ci;

    if (*gGameState == 0 || *gExtState == 0) return;
    gs = (unsigned char *)*gGameState;
    ext = (unsigned char *)*gExtState;
    curPlayer = *(short *)(gs + 0x110);
    cityCount = *(short *)(gs + 0x810);
    if (cityCount > 40) cityCount = 40;
    if (cityIndex < 0 || cityIndex >= cityCount) return;

    city = gs + 0x812 + cityIndex * 0x20;
    cityOwner = *(short *)(city + 0x04);
    if (cityOwner != curPlayer) {
        ShowBriefMessage("\pMust own city for vectoring");
        return;
    }

    extCity = ext + 0x24c + cityIndex * 0x5c;
    vecTarget = *(short *)(extCity + 0x3e);  /* vectoring_targets[0] */

    /* Build list of owned cities (excluding this one) */
    for (ci = 0; ci < cityCount; ci++) {
        unsigned char *c2 = gs + 0x812 + ci * 0x20;
        short sType = (short)(unsigned char)c2[0x18];
        if (ci != cityIndex && *(short *)(c2 + 0x04) == curPlayer &&
            sType != 2 && sType != 5 && sType != 6) {
            ownedCities[ownedCount++] = ci;
        }
    }

    SetRect(&winRect, 0, 0, 320, 200);
    OffsetRect(&winRect, (qd.screenBits.bounds.right - 320) / 2,
                         (qd.screenBits.bounds.bottom - 200) / 2);
    vecWin = NewCWindow(NULL, &winRect, "\p", true,
                        plainDBox, (WindowPtr)-1L, false, 0);
    if (vecWin == NULL) return;
    SetPort(vecWin);

    SetRect(&gwRect, 0, 0, 320, 200);
    NewGWorld(&offGW, 0, &gwRect, NULL, NULL, 0);

    FlushEvents(everyEvent, 0);

    {
        Boolean needsRedraw = true;
        Rect okRect, cancelRect, targetRect;

        SetRect(&okRect, 200, 160, 290, 182);
        SetRect(&cancelRect, 30, 160, 120, 182);
        SetRect(&targetRect, 30, 90, 290, 110);

        while (!done) {
            EventRecord evt;

            if (needsRedraw && offGW != NULL) {
                CGrafPtr sp;
                GDHandle sd;
                GetGWorld(&sp, &sd);
                SetGWorld(offGW, NULL);
                LockPixels(GetGWorldPixMap(offGW));

                /* Background */
                DrawMarbleBackground(&gwRect);

                /* Border */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    FrameRect(&gwRect);
                }

                /* Title */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    TextFont(2);
                    TextSize(14);
                    TextFace(bold);
                    MoveTo(90, 25);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 13, "\pCity Vectoring"));
                    TextFace(0);
                }

                /* Source city name */
                {
                    RGBColor labelClr = {0x3333, 0x3333, 0x3333};
                    short srcOwner = *(short *)(city + 0x04);
                    TextFont(3);
                    TextSize(10);
                    RGBForeColor(&labelClr);
                    MoveTo(30, 50);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 14, "\pFrom: "));
                    if (srcOwner >= 0 && srcOwner < 8) {
                        Str255 pN;
                        unsigned char *np = gs + srcOwner * 20;
                        short nl = 0;
                        while (nl < 20 && np[nl] != 0) nl++;
                        pN[0] = (unsigned char)nl;
                        BlockMoveData(np, pN + 1, nl);
                        DrawString(pN);
                    }
                    DrawString("\p City");
                }

                /* Production info */
                {
                    RGBColor valClr = {0x0000, 0x0000, 0x6666};
                    short producing = *(short *)(extCity + 0x02);
                    RGBForeColor(&valClr);
                    MoveTo(30, 68);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 5, "\pProducing:"));
                    DrawString("\p ");
                    if (producing >= 0) {
                        Str255 pn;
                        GetUnitTypeName(producing, pn);
                        DrawString(pn);
                    } else {
                        DrawString(GetCachedString(STR_CITY_DIALOG, 6, "\pNothing"));
                    }
                }

                /* Target label and selector */
                {
                    RGBColor black = {0, 0, 0};
                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                    RGBForeColor(&black);
                    MoveTo(30, 86);
                    DrawString(GetCachedString(STR_CITY_DIALOG, 15, "\pVector to:"));

                    /* Target city selector box */
                    RGBForeColor(&white);
                    PaintRect(&targetRect);
                    RGBForeColor(&black);
                    FrameRect(&targetRect);

                    MoveTo(36, 104);
                    if (vecTarget < 0 || vecTarget >= cityCount) {
                        DrawString(GetCachedString(STR_CITY_DIALOG, 16, "\p(None - armies stay here)"));
                    } else {
                        /* Show target city faction name */
                        unsigned char *tc = gs + 0x812 + vecTarget * 0x20;
                        short tOwner = *(short *)(tc + 0x04);
                        if (tOwner >= 0 && tOwner < 8) {
                            Str255 pN;
                            unsigned char *np = gs + tOwner * 20;
                            short nl = 0;
                            while (nl < 20 && np[nl] != 0) nl++;
                            pN[0] = (unsigned char)nl;
                            BlockMoveData(np, pN + 1, nl);
                            DrawString(pN);
                        }
                        DrawString("\p City (");
                        {
                            Str255 ns;
                            NumToString((long)*(short *)(tc + 0x00), ns);
                            DrawString(ns);
                            DrawString("\p,");
                            NumToString((long)*(short *)(tc + 0x02), ns);
                            DrawString(ns);
                        }
                        DrawString("\p)");
                    }

                    /* Click hint */
                    {
                        RGBColor hint = {0x6666, 0x6666, 0x6666};
                        RGBForeColor(&hint);
                        TextSize(9);
                        MoveTo(30, 125);
                        DrawString(GetCachedString(STR_CITY_DIALOG, 17, "\pClick the box to cycle through your cities"));
                        TextSize(10);
                    }
                }

                /* Buttons */
                {
                    RGBColor black = {0, 0, 0};
                    RGBForeColor(&black);
                    FrameRoundRect(&okRect, 8, 8);
                    MoveTo(232, 176);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                    FrameRoundRect(&cancelRect, 8, 8);
                    MoveTo(55, 176);
                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 0, "\pCancel"));
                }

                UnlockPixels(GetGWorldPixMap(offGW));
                SetGWorld(sp, sd);

                /* Blit */
                SetPort(vecWin);
                {
                    Rect dr = vecWin->portRect;
                    LockPixels(GetGWorldPixMap(offGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(offGW),
                             &((GrafPtr)vecWin)->portBits,
                             &gwRect, &dr, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(offGW));
                }
                needsRedraw = false;
            }

            if (WaitNextEvent(mDownMask | keyDownMask | updateMask, &evt, 30, NULL)) {
                if (evt.what == mouseDown) {
                    Point mp = evt.where;
                    SetPort(vecWin);
                    GlobalToLocal(&mp);

                    if (PtInRect(mp, &okRect)) {
                        /* Apply vectoring target */
                        *(short *)(extCity + 0x3e) = vecTarget;
                        done = true;
                    } else if (PtInRect(mp, &cancelRect)) {
                        done = true;
                    } else if (PtInRect(mp, &targetRect)) {
                        /* Cycle through owned cities: none → city0 → city1 → ... → none */
                        if (ownedCount == 0) {
                            vecTarget = -1;
                        } else {
                            short curIdx = -1;
                            for (ci = 0; ci < ownedCount; ci++) {
                                if (ownedCities[ci] == vecTarget) {
                                    curIdx = ci;
                                    break;
                                }
                            }
                            if (curIdx < 0)
                                vecTarget = ownedCities[0];
                            else if (curIdx + 1 >= ownedCount)
                                vecTarget = -1;
                            else
                                vecTarget = ownedCities[curIdx + 1];
                        }
                        needsRedraw = true;
                    }
                } else if (evt.what == keyDown) {
                    char ch = evt.message & charCodeMask;
                    if (ch == '\r' || ch == 3) {
                        *(short *)(extCity + 0x3e) = vecTarget;
                        done = true;
                    } else if (ch == 27) {
                        done = true;
                    }
                } else if (evt.what == updateEvt) {
                    if ((WindowPtr)evt.message == vecWin) {
                        BeginUpdate(vecWin);
                        needsRedraw = true;
                        EndUpdate(vecWin);
                    }
                }
            }
        }
    }

    if (offGW != NULL) DisposeGWorld(offGW);
    if (vecWin != NULL) DisposeWindow(vecWin);
}


/* ===================================================================
 * HandleMenuChoice — translate MenuSelect/MenuKey result
 * =================================================================== */
static void HandleMenuChoice(long menuResult)
{
    short menuID   = (short)((menuResult >> 16) & 0xFFFF);
    short menuItem = (short)(menuResult & 0xFFFF);

    if (menuID == 0)
        return;

    switch (menuID) {

    /* ---- Apple menu (ID 1) ---- */
    case 1:
        if (menuItem == 1) {
            ShowAboutDialog();
        } else {
            /* Desk Accessories */
            Str255 daName;
            GetMenuItemText(GetMenuHandle(1), menuItem, daName);
            OpenDeskAcc(daName);
        }
        break;

    /* ---- File menu (ID 2) ---- */
    case 2:
        switch (menuItem) {
        case 1: /* New */
            if (!ShowScenarioSelection())
                TryLoadScenario();
            break;
        case 2: /* Open... (Cmd+O) */
            DoOpen();
            break;
        case 4: /* Close (Cmd+W) */
            {
                WindowPtr front = FrontWindow();
                if (front != NULL) {
                    if (gMainGameWindow != NULL && front == (WindowPtr)*gMainGameWindow)
                        sDone = true;
                    else
                        HideWindow(front);
                }
            }
            break;
        case 5: /* Save (Cmd+S) */
            DoSave();
            break;
        case 6: /* Save As... */
            DoSaveAs();
            break;
        case 7: /* Revert */
            if (sSaveFileValid) {
                LoadGameFromFile(&sSaveFileSpec);
                if (gMainGameWindow != NULL && *gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
                if (gOverviewWindow != NULL && *gOverviewWindow != 0) {
                    SetPort((WindowPtr)*gOverviewWindow);
                    InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                }
            }
            break;
        case 9: /* Quit (Cmd+Q) */
            sDone = true;
            break;
        }
        break;

    /* ---- Edit menu (ID 3) ---- */
    case 3:
        if (menuItem == 1 && sUndoArmyIdx >= 0 && *gGameState != 0) {
            /* Undo: reverse last army move */
            unsigned char *gs = (unsigned char *)*gGameState;
            short armyCount = *(short *)(gs + 0x1602);
            if (sUndoArmyIdx < armyCount) {
                unsigned char *army = gs + 0x1604 + sUndoArmyIdx * 0x42;
                *(short *)(army + 0x00) = sUndoFromX;
                *(short *)(army + 0x02) = sUndoFromY;
                army[0x2e] = (unsigned char)(sUndoMovePts);
                *(short *)(army + 0x32) = 0;  /* clear pending orders */
                sSelectedArmy = sUndoArmyIdx;
                sUndoArmyIdx = -1;  /* can only undo once */
                /* Scroll map to show army */
                sViewportX = sUndoFromX - 7;
                sViewportY = sUndoFromY - 5;
                if (sViewportX < 0) sViewportX = 0;
                if (sViewportY < 0) sViewportY = 0;
                if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
                if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
                /* Invalidate map and info windows */
                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
                if (gInfoWindow != NULL && *gInfoWindow != 0) {
                    SetPort((WindowPtr)*gInfoWindow);
                    InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
                }
                if (gOverviewWindow != NULL && *gOverviewWindow != 0) {
                    SetPort((WindowPtr)*gOverviewWindow);
                    InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                }
            }
        }
        break;

    /* ---- Orders menu (ID 4) ---- */
    /* Menu: Group Stack/G;Ungroup;(-;Move Group/M;Move All Armies;Cancel Path;
     *       (-;Next Group/N;Leave Group/L;Defend;Deselect Group;
     *       (-;Show current army;Show army's shadow;
     *       (-;Fight Order...;Disband Group;Change Signpost...;(-;Resign... */
    case 4:
        switch (menuItem) {
        case 1:  /* Group Stack (cmd 0x578) — merge units from other armies at same tile */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                short sx = *(short *)(army + 0x00);
                short sy = *(short *)(army + 0x02);
                short curPlayer = *(short *)(gs + 0x110);
                short armyCount = *(short *)(gs + 0x1602);
                short ai;
                Boolean merged = false;
                if (armyCount > 100) armyCount = 100;

                /* Try to merge units from other friendly armies at same tile */
                for (ai = 0; ai < armyCount; ai++) {
                    unsigned char *other;
                    short slot;
                    if (ai == sSelectedArmy) continue;
                    other = gs + 0x1604 + ai * 0x42;
                    if (*(short *)(other + 0x00) != sx ||
                        *(short *)(other + 0x02) != sy ||
                        (short)(unsigned char)other[0x15] != curPlayer)
                        continue;

                    /* Try to move units from other army into selected army's empty slots */
                    for (slot = 0; slot < 4; slot++) {
                        if (army[0x16 + slot] == 0xFF) {
                            /* Find a unit in other army to transfer */
                            short oSlot;
                            for (oSlot = 0; oSlot < 4; oSlot++) {
                                if (other[0x16 + oSlot] != 0xFF) {
                                    army[0x16 + slot] = other[0x16 + oSlot];
                                    army[0x1a + slot] = other[0x1a + oSlot];
                                    army[0x1e + slot] = other[0x1e + oSlot];
                                    army[0x22 + slot] = other[0x22 + oSlot];
                                    army[0x26 + slot] = other[0x26 + oSlot];
                                    other[0x16 + oSlot] = 0xFF;
                                    other[0x1a + oSlot] = 0;
                                    other[0x1e + oSlot] = 0;
                                    other[0x22 + oSlot] = 0;
                                    other[0x26 + oSlot] = 0;
                                    merged = true;
                                    break;
                                }
                            }
                        }
                    }

                    /* If other army is now empty, remove it */
                    if (other[0x16] == 0xFF && other[0x17] == 0xFF &&
                        other[0x18] == 0xFF && other[0x19] == 0xFF) {
                        RemoveArmy(ai);
                        if (ai < sSelectedArmy) sSelectedArmy--;
                        armyCount = *(short *)(gs + 0x1602);
                        if (armyCount > 100) armyCount = 100;
                        ai--;  /* re-check this index */
                    }
                }

                /* Recalculate strength display */
                if (merged) {
                    short totalHP = 0, s;
                    for (s = 0; s < 4; s++) {
                        if (army[0x16 + s] != 0xFF)
                            totalHP += (short)(unsigned char)army[0x1e + s];
                    }
                    *(short *)(army + 0x2a) = totalHP;
                }

                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
                if (gInfoWindow != NULL && *gInfoWindow != 0) {
                    SetPort((WindowPtr)*gInfoWindow);
                    InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
                }
            }
            break;
        case 2:  /* Ungroup (cmd 0x579) — split last unit into new army */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                short armyCount = *(short *)(gs + 0x1602);
                short unitCount = 0, lastSlot = -1, slot;

                /* Count active units and find last occupied slot */
                for (slot = 0; slot < 4; slot++) {
                    if (army[0x16 + slot] != 0xFF) {
                        unitCount++;
                        lastSlot = slot;
                    }
                }

                /* Need at least 2 units to split, and room for a new army */
                if (unitCount >= 2 && armyCount < 100 && lastSlot >= 0) {
                    unsigned char *newArmy = gs + 0x1604 + armyCount * 0x42;
                    short j;

                    /* Zero out new army */
                    for (j = 0; j < 0x42; j++) newArmy[j] = 0;

                    /* Place at same location */
                    *(short *)(newArmy + 0x00) = *(short *)(army + 0x00);
                    *(short *)(newArmy + 0x02) = *(short *)(army + 0x02);
                    newArmy[0x15] = army[0x15]; /* same owner */
                    newArmy[0x14] = army[0x14]; /* sprite */

                    /* Transfer last unit to new army slot 0 */
                    newArmy[0x16] = army[0x16 + lastSlot];
                    newArmy[0x1a] = army[0x1a + lastSlot];
                    newArmy[0x1e] = army[0x1e + lastSlot];
                    newArmy[0x22] = army[0x22 + lastSlot];
                    newArmy[0x26] = army[0x26 + lastSlot];
                    newArmy[0x17] = 0xFF; newArmy[0x18] = 0xFF; newArmy[0x19] = 0xFF;

                    /* Set new army sprite to match the transferred unit type */
                    {
                        static unsigned char sprIdx[] = {0, 2, 4, 6, 8, 10};
                        short ut = (short)(unsigned char)newArmy[0x16];
                        if (ut >= 0 && ut <= 5) newArmy[0x14] = sprIdx[ut];
                    }

                    /* Set new army strength and movement */
                    *(short *)(newArmy + 0x2a) = (short)(unsigned char)newArmy[0x1e];
                    newArmy[0x2e] = (unsigned char)(newArmy[0x1a]);

                    /* Remove unit from original army */
                    army[0x16 + lastSlot] = 0xFF;
                    army[0x1a + lastSlot] = 0;
                    army[0x1e + lastSlot] = 0;
                    army[0x22 + lastSlot] = 0;
                    army[0x26 + lastSlot] = 0;

                    /* Recalculate original army strength */
                    {
                        short totalHP = 0;
                        for (slot = 0; slot < 4; slot++) {
                            if (army[0x16 + slot] != 0xFF)
                                totalHP += (short)(unsigned char)army[0x1e + slot];
                        }
                        *(short *)(army + 0x2a) = totalHP;
                    }

                    *(short *)(gs + 0x1602) = armyCount + 1;

                    /* Select the new army */
                    sSelectedArmy = armyCount;
                } else {
                    /* Can't split: cycle to next */
                    SelectNextArmy();
                }

                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
                if (gInfoWindow != NULL && *gInfoWindow != 0) {
                    SetPort((WindowPtr)*gInfoWindow);
                    InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
                }
            }
            break;
        case 4:  /* Move Group (cmd 0x57A) — FUN_1007c618 */
            MoveAllArmies();
            break;
        case 5:  /* Move All Armies (cmd 0x57B) — FUN_10041cf8 */
            MoveAllArmies();
            break;
        case 6:  /* Cancel Path (cmd 0x57C) */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                *(short *)(army + 0x32) = 0;
                *(short *)(army + 0x34) = -1;
                *(short *)(army + 0x36) = -1;
                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
            }
            break;
        case 8:  /* Next Group (cmd 0x57D) — FUN_10055f30 */
            SelectNextArmy();
            break;
        case 9:  /* Leave Group (cmd 0x57E) — split units from selected army */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                short armyCount = *(short *)(gs + 0x1602);
                unsigned char *army;
                short unitCount = 0, ui;
                if (armyCount > 100) armyCount = 100;
                if (sSelectedArmy >= armyCount) break;
                army = gs + 0x1604 + sSelectedArmy * 0x42;
                /* Count units in this stack */
                for (ui = 0; ui < 4; ui++)
                    if (army[0x16 + ui] != 0xFF && army[0x1e + ui] > 0) unitCount++;
                if (unitCount < 2) break;  /* need 2+ units to split */
                if (armyCount >= 100) break;  /* no room for new army */
                /* Show split dialog */
                {
                    WindowPtr spWin;
                    Rect spR;
                    Boolean spDone = false;
                    Boolean leaving[4] = {false, false, false, false};
                    Boolean needsRedraw2 = true;
                    SetRect(&spR, 0, 0, 280, 170);
                    OffsetRect(&spR, 190, 180);
                    spWin = NewCWindow(NULL, &spR, "\p", true,
                                       plainDBox, (WindowPtr)-1L, false, 0);
                    if (spWin) {
                        Rect unitRects[4], okR2, cancelR2;
                        SetRect(&okR2, 40, 138, 120, 158);
                        SetRect(&cancelR2, 160, 138, 240, 158);
                        while (!spDone) {
                            EventRecord spEvt;
                            if (needsRedraw2) {
                                RGBColor bg = {0x1800, 0x1000, 0x2800};
                                RGBColor gold = {0xFFFF, 0xDDDD, 0x3333};
                                RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                                RGBColor checkOn = {0x4444, 0xFFFF, 0x4444};
                                RGBColor checkOff = {0x3333, 0x3333, 0x3333};
                                SetPort(spWin);
                                RGBForeColor(&bg); PaintRect(&spWin->portRect);
                                RGBForeColor(&gold); PenSize(2,2); FrameRect(&spWin->portRect); PenNormal();
                                TextFont(3); TextSize(11); TextFace(bold);
                                RGBForeColor(&gold);
                                MoveTo(15, 18);
                                DrawString(GetCachedString(STR_STACK_INFO, 12, "\pLeave Group"));
                                TextFace(0); TextSize(9);
                                RGBForeColor(&white);
                                MoveTo(15, 32);
                                DrawString(GetCachedString(STR_STACK_INFO, 13, "\pSelect units to leave behind:"));
                                for (ui = 0; ui < 4; ui++) {
                                    short ut = (short)(unsigned char)army[0x16 + ui];
                                    short hp = (short)(unsigned char)army[0x1e + ui];
                                    short yp = 46 + ui * 20;
                                    Str255 typeName;
                                    Str255 ns;
                                    Rect chk;
                                    SetRect(&unitRects[ui], 15, yp - 2, 265, yp + 14);
                                    SetRect(&chk, 15, yp, 27, yp + 12);
                                    if (ut == 0xFF || hp <= 0) {
                                        RGBForeColor(&checkOff); PaintRect(&chk);
                                        continue;
                                    }
                                    RGBForeColor(leaving[ui] ? &checkOn : &checkOff);
                                    PaintRect(&chk);
                                    RGBForeColor(&white); FrameRect(&chk);
                                    if (leaving[ui]) {
                                        MoveTo(chk.left + 2, chk.bottom - 2);
                                        LineTo(chk.left + 5, chk.bottom - 1);
                                        LineTo(chk.right - 2, chk.top + 1);
                                    }
                                    RGBForeColor(&white);
                                    MoveTo(32, yp + 10);
                                    GetUnitTypeName(ut, typeName);
                                    DrawString(typeName);
                                    DrawString(GetCachedString(STR_STACK_INFO, 14, "\p  HP:"));
                                    NumToString((long)hp, ns); DrawString(ns);
                                    {
                                        short xp = (short)(unsigned char)army[0x26 + ui];
                                        if (xp > 0) {
                                            RGBForeColor(&gold);
                                            DrawString(GetCachedString(STR_STACK_INFO, 15, "\p  XP:"));
                                            NumToString((long)xp, ns); DrawString(ns);
                                        }
                                    }
                                }
                                /* Buttons */
                                {
                                    RGBColor btnBg = {0, 0, 0};
                                    RGBForeColor(&btnBg); PaintRoundRect(&okR2, 8, 8);
                                    PaintRoundRect(&cancelR2, 8, 8);
                                    RGBForeColor(&white);
                                    PenSize(2,2); FrameRoundRect(&okR2, 8, 8);
                                    FrameRoundRect(&cancelR2, 8, 8); PenNormal();
                                    MoveTo(okR2.left + 22, okR2.bottom - 6);
                                    DrawString(GetCachedString(STR_STACK_INFO, 16, "\pSplit"));
                                    MoveTo(cancelR2.left + 14, cancelR2.bottom - 6);
                                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 0, "\pCancel"));
                                }
                                needsRedraw2 = false;
                            }
                            if (WaitNextEvent(mDownMask | keyDownMask, &spEvt, 30, NULL)) {
                                if (spEvt.what == mouseDown) {
                                    Point mp = spEvt.where;
                                    SetPort(spWin);
                                    GlobalToLocal(&mp);
                                    if (PtInRect(mp, &okR2)) {
                                        /* Count how many are leaving vs staying */
                                        short leaveN = 0, stayN = 0;
                                        for (ui = 0; ui < 4; ui++) {
                                            if (army[0x16 + ui] == 0xFF || army[0x1e + ui] <= 0) continue;
                                            if (leaving[ui]) leaveN++; else stayN++;
                                        }
                                        if (leaveN > 0 && stayN > 0) {
                                            /* Create new army with leaving units */
                                            unsigned char *newArmy = gs + 0x1604 + armyCount * 0x42;
                                            short j;
                                            for (j = 0; j < 0x42; j++) newArmy[j] = 0;
                                            *(short *)(newArmy + 0x00) = *(short *)(army + 0x00);
                                            *(short *)(newArmy + 0x02) = *(short *)(army + 0x02);
                                            newArmy[0x15] = army[0x15]; /* same owner */
                                            newArmy[0x17] = 0xFF; newArmy[0x18] = 0xFF; newArmy[0x19] = 0xFF;
                                            {
                                                short newSlot = 0, str = 0;
                                                for (ui = 0; ui < 4; ui++) {
                                                    if (!leaving[ui]) continue;
                                                    if (army[0x16 + ui] == 0xFF) continue;
                                                    newArmy[0x16 + newSlot] = army[0x16 + ui];
                                                    newArmy[0x1e + newSlot] = army[0x1e + ui];
                                                    newArmy[0x22 + newSlot] = army[0x22 + ui];
                                                    newArmy[0x26 + newSlot] = army[0x26 + ui];
                                                    str += (short)(unsigned char)army[0x1e + ui];
                                                    /* Copy sprite + movement from first unit */
                                                    if (newSlot == 0) {
                                                        newArmy[0x14] = army[0x14];
                                                        newArmy[0x1a] = army[0x1a + ui];
                                                    }
                                                    /* Clear from original */
                                                    army[0x16 + ui] = 0xFF;
                                                    army[0x1e + ui] = 0;
                                                    army[0x22 + ui] = 0;
                                                    army[0x26 + ui] = 0;
                                                    newSlot++;
                                                }
                                                /* Fill remaining slots in new army */
                                                for (j = newSlot; j < 4; j++)
                                                    newArmy[0x16 + j] = 0xFF;
                                                *(short *)(newArmy + 0x2a) = str;
                                                newArmy[0x2e] = (unsigned char)(newArmy[0x1a]);
                                                if ((short)(unsigned char)newArmy[0x2e] <= 0)
                                                    newArmy[0x2e] = (unsigned char)(10);
                                            }
                                            /* Compact original army slots */
                                            {
                                                short dst = 0;
                                                unsigned char tmpType[4], tmpHits[4], tmpBonus[4], tmpXP[4];
                                                for (ui = 0; ui < 4; ui++) {
                                                    tmpType[ui] = army[0x16 + ui];
                                                    tmpHits[ui] = army[0x1e + ui];
                                                    tmpBonus[ui] = army[0x22 + ui];
                                                    tmpXP[ui] = army[0x26 + ui];
                                                }
                                                for (ui = 0; ui < 4; ui++) {
                                                    if (tmpType[ui] != 0xFF && tmpHits[ui] > 0) {
                                                        army[0x16 + dst] = tmpType[ui];
                                                        army[0x1e + dst] = tmpHits[ui];
                                                        army[0x22 + dst] = tmpBonus[ui];
                                                        army[0x26 + dst] = tmpXP[ui];
                                                        dst++;
                                                    }
                                                }
                                                for (j = dst; j < 4; j++) {
                                                    army[0x16 + j] = 0xFF;
                                                    army[0x1e + j] = 0;
                                                    army[0x22 + j] = 0;
                                                    army[0x26 + j] = 0;
                                                }
                                                /* Recalculate original army strength */
                                                {
                                                    short str2 = 0;
                                                    for (j = 0; j < 4; j++)
                                                        if (army[0x16 + j] != 0xFF)
                                                            str2 += (short)(unsigned char)army[0x1e + j];
                                                    *(short *)(army + 0x2a) = str2;
                                                }
                                            }
                                            *(short *)(gs + 0x1602) = armyCount + 1;
                                            sSelectedArmy = armyCount; /* select new army */
                                        }
                                        spDone = true;
                                    } else if (PtInRect(mp, &cancelR2)) {
                                        spDone = true;
                                    } else {
                                        /* Check unit checkboxes */
                                        for (ui = 0; ui < 4; ui++) {
                                            if (army[0x16 + ui] == 0xFF || army[0x1e + ui] <= 0) continue;
                                            if (PtInRect(mp, &unitRects[ui])) {
                                                leaving[ui] = !leaving[ui];
                                                needsRedraw2 = true;
                                                break;
                                            }
                                        }
                                    }
                                } else if (spEvt.what == keyDown) {
                                    char ch = spEvt.message & charCodeMask;
                                    if (ch == 27) spDone = true;
                                }
                            }
                        }
                        DisposeWindow(spWin);
                    }
                }
                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
                if (gInfoWindow != NULL && *gInfoWindow != 0) {
                    SetPort((WindowPtr)*gInfoWindow);
                    InvalRect(&((WindowPtr)*gInfoWindow)->portRect);
                }
            }
            break;
        case 10: /* Defend (cmd 0x57F) — set army to defend mode */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                /* Set fortification counter: army will gain defense bonus */
                army[0x2d] = (army[0x2d] > 0) ? 0 : 3;  /* toggle defend */
                *(short *)(army + 0x32) = 0;  /* clear movement orders */
                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
            }
            break;
        case 11: /* Deselect Group (cmd 0x580) — FUN_100219a8 */
            sSelectedArmy = -1;
            if (*gMainGameWindow != 0) {
                SetPort((WindowPtr)*gMainGameWindow);
                InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
            }
            break;
        case 13: /* Show current army (cmd 0x581) — FUN_1003fe04 */
            if (sSelectedArmy >= 0)
                ShowArmyInspect(sSelectedArmy);
            break;
        case 14: /* Show army's shadow (cmd 0x582) — center viewport on target */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                short tgtX = *(short *)(army + 0x34);
                short tgtY = *(short *)(army + 0x36);
                if (tgtX >= 0 && tgtY >= 0) {
                    short tilesWide = 10, tilesHigh = 10;
                    if (*gMainGameWindow != 0) {
                        Rect p = ((WindowPtr)*gMainGameWindow)->portRect;
                        tilesWide = (p.right - p.left - SCROLLBAR_W) / TERRAIN_TILE_W;
                        tilesHigh = (p.bottom - p.top - SCROLLBAR_H) / TERRAIN_TILE_H;
                    }
                    sViewportX = tgtX - tilesWide / 2;
                    sViewportY = tgtY - tilesHigh / 2;
                    if (sViewportX < 0) sViewportX = 0;
                    if (sViewportY < 0) sViewportY = 0;
                    if (*gMainGameWindow != 0) {
                        SetPort((WindowPtr)*gMainGameWindow);
                        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                    }
                    if (*gOverviewWindow != 0) {
                        SetPort((WindowPtr)*gOverviewWindow);
                        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                    }
                }
            }
            break;
        case 16: /* Fight Order... (cmd 0x583) — reorder unit slots */
            if (sSelectedArmy >= 0)
                ShowFightOrder(sSelectedArmy);
            break;
        case 17: /* Disband Group (cmd 0x584) — remove selected army */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                /* Confirmation dialog */
                WindowPtr dbWin;
                Rect dbR;
                Boolean dbConfirm = false, dbDone2 = false;
                SetRect(&dbR, 0, 0, 260, 80);
                OffsetRect(&dbR, 220, 200);
                dbWin = NewCWindow(NULL, &dbR, "\p", true,
                                   plainDBox, (WindowPtr)-1L, false, 0);
                if (dbWin != NULL) {
                    Rect yesR, noR;
                    RGBColor bg = {0xEEEE, 0xEEEE, 0xDDDD};
                    RGBColor black = {0, 0, 0};
                    SetPort(dbWin);
                    RGBForeColor(&bg);
                    PaintRect(&dbWin->portRect);
                    RGBForeColor(&black);
                    FrameRect(&dbWin->portRect);
                    TextSize(10);
                    MoveTo(30, 22);
                    DrawString(GetCachedString(STR_MISC, 57, "\pDisband this army group?"));
                    SetRect(&yesR, 40, 42, 110, 62);
                    SetRect(&noR, 150, 42, 220, 62);
                    FrameRoundRect(&yesR, 8, 8);
                    FrameRoundRect(&noR, 8, 8);
                    MoveTo(60, 56); DrawString(GetCachedString(STR_COMMON_BUTTONS, 3, "\pYes"));
                    MoveTo(170, 56); DrawString(GetCachedString(STR_COMMON_BUTTONS, 2, "\pNo"));
                    PenSize(2, 2); FrameRoundRect(&noR, 8, 8); PenNormal();

                    FlushEvents(everyEvent, 0);
                    while (!dbDone2) {
                        EventRecord dbEvt;
                        if (WaitNextEvent(mDownMask | keyDownMask, &dbEvt, 30, NULL)) {
                            if (dbEvt.what == mouseDown) {
                                Point dp = dbEvt.where;
                                SetPort(dbWin);
                                GlobalToLocal(&dp);
                                if (PtInRect(dp, &yesR)) { dbConfirm = true; dbDone2 = true; }
                                else if (PtInRect(dp, &noR)) { dbDone2 = true; }
                            } else if (dbEvt.what == keyDown) {
                                char dk = dbEvt.message & charCodeMask;
                                if (dk == 'y' || dk == 'Y') { dbConfirm = true; dbDone2 = true; }
                                else if (dk == 'n' || dk == 'N' || dk == 27) { dbDone2 = true; }
                                else if (dk == '\r' || dk == 3) { dbDone2 = true; } /* No = default */
                            }
                        }
                    }
                    DisposeWindow(dbWin);
                }

                if (dbConfirm) {
                    RemoveArmy(sSelectedArmy);
                    sSelectedArmy = -1;
                    if (*gMainGameWindow != 0) {
                        SetPort((WindowPtr)*gMainGameWindow);
                        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                    }
                    if (*gOverviewWindow != 0) {
                        SetPort((WindowPtr)*gOverviewWindow);
                        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                    }
                }
            }
            break;
        case 18: /* Change Signpost... (cmd 0x585) */
            ShowChangeSignpost();
            if (*gMainGameWindow != 0) {
                SetPort((WindowPtr)*gMainGameWindow);
                InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
            }
            break;
        case 20: /* Resign... (cmd 0x586) — eliminate current player */
            if (*gGameState != 0) {
                /* Confirmation dialog */
                WindowPtr rWin;
                GWorldPtr rGW;
                Rect rWinR, rGWR;
                Boolean rConfirmed = false;
                Boolean rDone = false;
                EventRecord rEvt;
                CGrafPtr rSP; GDHandle rSD;

                SetRect(&rWinR, 0, 0, 260, 100);
                OffsetRect(&rWinR, 220, 180);
                rWin = NewCWindow(NULL, &rWinR, "\pResign", true,
                                  dBoxProc, (WindowPtr)-1, false, 0);
                SetRect(&rGWR, 0, 0, 260, 100);
                NewGWorld(&rGW, 0, &rGWR, NULL, NULL, 0);

                if (rGW != NULL) {
                    GetGWorld(&rSP, &rSD);
                    SetGWorld(rGW, NULL);
                    LockPixels(GetGWorldPixMap(rGW));
                    {
                        RGBColor bg = {0xDDDD, 0xDDDD, 0xDDDD};
                        RGBColor bk = {0, 0, 0};
                        Rect btn;
                        RGBForeColor(&bg); PaintRect(&rGWR);
                        RGBForeColor(&bk); FrameRect(&rGWR);
                        TextSize(12); TextFace(bold);
                        MoveTo(30, 30); DrawString(GetCachedString(STR_MISC, 58, "\pAre you sure you"));
                        MoveTo(30, 48); DrawString(GetCachedString(STR_MISC, 59, "\pwant to resign?"));
                        TextFace(0); TextSize(10);
                        SetRect(&btn, 40, 65, 110, 85);
                        FrameRoundRect(&btn, 10, 10);
                        TextFace(bold); MoveTo(60, 79); DrawString(GetCachedString(STR_COMMON_BUTTONS, 3, "\pYes"));
                        TextFace(0);
                        SetRect(&btn, 150, 65, 220, 85);
                        FrameRoundRect(&btn, 10, 10);
                        MoveTo(175, 79); DrawString(GetCachedString(STR_COMMON_BUTTONS, 2, "\pNo"));
                    }
                    UnlockPixels(GetGWorldPixMap(rGW));
                    SetGWorld(rSP, rSD);
                    SetPort((WindowPtr)rWin);
                    LockPixels(GetGWorldPixMap(rGW));
                    CopyBits((BitMap *)*GetGWorldPixMap(rGW),
                             &((GrafPtr)rWin)->portBits,
                             &rGWR, &rGWR, srcCopy, NULL);
                    UnlockPixels(GetGWorldPixMap(rGW));

                    while (!rDone) {
                        WaitNextEvent(mDownMask | keyDownMask, &rEvt, 30, NULL);
                        if (rEvt.what == mouseDown) {
                            Point cp = rEvt.where;
                            Rect yBtn, nBtn;
                            SetPort((WindowPtr)rWin); GlobalToLocal(&cp);
                            SetRect(&yBtn, 40, 65, 110, 85);
                            SetRect(&nBtn, 150, 65, 220, 85);
                            if (PtInRect(cp, &yBtn)) { rConfirmed = true; rDone = true; }
                            else if (PtInRect(cp, &nBtn)) { rDone = true; }
                        } else if (rEvt.what == keyDown) {
                            char k = rEvt.message & charCodeMask;
                            if (k == 'y' || k == 'Y') { rConfirmed = true; rDone = true; }
                            else if (k == 'n' || k == 'N' || k == 0x1B) { rDone = true; }
                        }
                    }
                    DisposeGWorld(rGW);
                }
                DisposeWindow(rWin);

                if (rConfirmed) {
                    unsigned char *gs = (unsigned char *)*gGameState;
                    short curPlayer = *(short *)(gs + 0x110);
                    *(short *)(gs + 0x138 + curPlayer * 2) = 0;
                    *(short *)(gs + 0x148 + curPlayer * 2) = 0;
                    sSelectedArmy = -1;
                    AdvanceToNextPlayer();
                }
            }
            break;
        }
        break;

    /* ---- Reports menu (ID 5) ---- */
    /* Menu: Show Report.../R;(-;Armies...;Cities...;Gold...;Production...;Winning...;
     *       (-;Diplomacy...;Quest... */
    case 5:
        switch (menuItem) {
        case 1:  /* Show Report... (cmd 0x5DC) — last used tab */
            ShowReportDialog(-1);
            break;
        case 3:  /* Armies... (cmd 0x5DD) */
            ShowReportDialog(0);
            break;
        case 4:  /* Cities... (cmd 0x5DE) */
            ShowReportDialog(1);
            break;
        case 5:  /* Gold... (cmd 0x5DF) */
            ShowReportDialog(2);
            break;
        case 6:  /* Production... (cmd 0x5E0) */
            ShowReportDialog(3);
            break;
        case 7:  /* Winning... (cmd 0x5E1) */
            ShowReportDialog(4);
            break;
        case 9:  /* Diplomacy... (cmd 0x5E2) */
            ShowDiplomacyDialog();
            break;
        case 10: /* Quest... (cmd 0x5E3) */
            ShowQuestDialog();
            break;
        }
        break;

    /* ---- Heroes menu (ID 6) ---- */
    /* Menu: Inspect Heroes...;Plant Flag;Hero Levels...;Search... */
    case 6:
        switch (menuItem) {
        case 1: /* Inspect Heroes... (cmd 0x640) */
            ShowHeroInspect();
            break;
        case 2: /* Plant Flag (cmd 0x641) — set waypoint for selected hero */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                /* Plant flag = set defend mode on hero's army */
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                army[0x2d] = 3;  /* fortify */
                *(short *)(army + 0x32) = 0;
                if (*gMainGameWindow != 0) {
                    SetPort((WindowPtr)*gMainGameWindow);
                    InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                }
            } else {
                ShowBriefMessage("\pSelect a hero army first");
            }
            break;
        case 3: /* Hero Levels... (cmd 0x642) — show hero level progression */
            ShowHeroLevels();
            break;
        case 4: /* Search... (cmd 0x643) — search ruins at hero location */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                short ax = *(short *)(army + 0x00);
                short ay = *(short *)(army + 0x02);
                short siteCount = *(short *)(gs + 0x810);
                short ci;
                Boolean foundRuin = false;
                if (siteCount > 40) siteCount = 40;

                for (ci = 0; ci < siteCount; ci++) {
                    unsigned char *site = gs + 0x812 + ci * 0x20;
                    if (*(short *)(site + 0x00) == ax &&
                        *(short *)(site + 0x02) == ay) {
                        short siteType = (short)(unsigned char)site[0x18];
                        if (siteType == 2 || siteType == 5 || siteType == 6) {
                            short curPlayer = *(short *)(gs + 0x110);
                            short gold = 0;
                            short rewardType;  /* 0=gold, 1=item, 2=ally */
                            short foundItemId = 0;
                            Boolean gotAlly = false;
                            WindowPtr rwWin;
                            GWorldPtr rwGW = NULL;
                            Rect rwR, rwGR;
                            const unsigned char *siteTypeName;
                            long rndSeed = (long)TickCount();

                            if (siteType == 2)      siteTypeName = "\pTemple";
                            else if (siteType == 6)  siteTypeName = "\pLibrary";
                            else                     siteTypeName = "\pRuin";

                            /* Determine reward type:
                             * Ruin: 40% item, 25% ally, 35% gold
                             * Temple: 20% item, 10% ally, 70% gold (more gold)
                             * Library: 50% item, 10% ally, 40% gold (more items) */
                            {
                                short r100 = (short)(rndSeed % 100);
                                if (siteType == 5) {  /* ruin */
                                    rewardType = (r100 < 40) ? 1 : (r100 < 65) ? 2 : 0;
                                } else if (siteType == 6) {  /* library */
                                    rewardType = (r100 < 50) ? 1 : (r100 < 60) ? 2 : 0;
                                } else {  /* temple */
                                    rewardType = (r100 < 20) ? 1 : (r100 < 30) ? 2 : 0;
                                }
                            }

                            if (rewardType == 1) {
                                /* Item reward: pick a random item */
                                foundItemId = (short)((rndSeed / 7) % MAX_ITEMS) + 1;
                                if (!GiveItemToHero(sSelectedArmy, foundItemId)) {
                                    /* Slots full — fall back to gold */
                                    rewardType = 0;
                                    foundItemId = 0;
                                }
                            }

                            if (rewardType == 2) {
                                /* Ally joins: add a unit to an empty slot */
                                short slot;
                                gotAlly = false;
                                for (slot = 0; slot < 4; slot++) {
                                    if ((unsigned char)army[0x16 + slot] == 0xFF) {
                                        /* Pick ally type: 0=LtInf,1=HvInf,2=Cav,3=Arch */
                                        short allyType = (short)((rndSeed / 13) % 4);
                                        static const unsigned char allyHP[] = {3, 4, 5, 3};
                                        static const unsigned char allyMv[] = {10, 8, 14, 10};
                                        army[0x16 + slot] = (unsigned char)allyType;
                                        army[0x1e + slot] = allyHP[allyType];
                                        army[0x1a + slot] = allyMv[allyType];
                                        army[0x22 + slot] = 0;
                                        army[0x26 + slot] = 0;
                                        /* Update army strength */
                                        *(short *)(army + 0x2a) += allyHP[allyType];
                                        gotAlly = true;
                                        break;
                                    }
                                }
                                if (!gotAlly) {
                                    rewardType = 0;  /* no room, give gold instead */
                                }
                            }

                            if (rewardType == 0) {
                                /* Gold reward */
                                if (siteType == 2)
                                    gold = (short)(rndSeed % 400) + 300;
                                else if (siteType == 6)
                                    gold = (short)(rndSeed % 350) + 250;
                                else
                                    gold = (short)(rndSeed % 300) + 200;
                                *(short *)(gs + 0x186 + curPlayer * 0x14) += gold;
                            }

                            site[0x18] = 0;  /* mark as searched */
                            foundRuin = true;
                            PlaySound(SND_ORCH);  /* fanfare for ruin discovery */

                            /* Update quest progress for explore quests */
                            if (sPlayerQuests[curPlayer].active &&
                                sPlayerQuests[curPlayer].type == QUEST_EXPLORE &&
                                !sPlayerQuests[curPlayer].completed) {
                                sPlayerQuests[curPlayer].progress++;
                                CheckQuestProgress(curPlayer);
                            }

                            RecordEvent(*(short *)(gs + 0x136), HIST_EVT_HERO,
                                        curPlayer,
                                        rewardType == 1 ? "Found artifact in ruins" :
                                        rewardType == 2 ? "Recruited ally in ruins" :
                                        "Found treasure in ruins");

                            /* Show reward dialog */
                            {
                                /* Try search scene PICT (4100=ruin, 4101=temple) */
                                PicHandle srchPict = GetPicture(siteType == 2 ? 4101 : 4100);
                                short rwW = 300, rwH = 170;
                                if (srchPict) {
                                    Rect pf = (**srchPict).picFrame;
                                    rwW = pf.right - pf.left;
                                    rwH = pf.bottom - pf.top;
                                }
                                SetRect(&rwR, 0, 0, rwW, rwH);
                                OffsetRect(&rwR, (qd.screenBits.bounds.right - rwW) / 2,
                                                 (qd.screenBits.bounds.bottom - rwH) / 2);
                            }
                            rwWin = NewCWindow(NULL, &rwR, "\p", true,
                                               plainDBox, (WindowPtr)-1L, false, 0);
                            {
                                short rwW2 = rwR.right - rwR.left;
                                short rwH2 = rwR.bottom - rwR.top;
                                SetRect(&rwGR, 0, 0, rwW2, rwH2);
                            }
                            if (rwWin) NewGWorld(&rwGW, 0, &rwGR, NULL, NULL, 0);
                            if (rwWin && rwGW) {
                                CGrafPtr sp; GDHandle sd;
                                EventRecord re;
                                Boolean rd = false;
                                PicHandle srchPict2 = GetPicture(siteType == 2 ? 4101 : 4100);
                                GetGWorld(&sp, &sd);
                                SetGWorld(rwGW, NULL);
                                LockPixels(GetGWorldPixMap(rwGW));

                                /* Background: search scene PICT or marble fallback */
                                if (srchPict2) DrawPicture(srchPict2, &rwGR);
                                else DrawMarbleBackground(&rwGR);
                                /* Border */
                                {
                                    RGBColor gbdr = {0xCCCC, 0xAAAA, 0x3333};
                                    RGBForeColor(&gbdr);
                                    PenSize(2, 2);
                                    FrameRect(&rwGR);
                                    PenSize(1, 1);
                                }
                                /* Title */
                                {
                                    RGBColor titleC = {0xFFFF, 0xDDDD, 0x5555};
                                    RGBForeColor(&titleC);
                                    TextFont(2); TextSize(14); TextFace(bold);
                                    MoveTo(60, 28);
                                    DrawString(siteTypeName);
                                    DrawString(GetCachedString(STR_SEARCH_TEMPLE, 0, "\p Explored!"));
                                    TextFace(0);
                                }
                                /* Reward text */
                                {
                                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                                    RGBForeColor(&white);
                                    TextFont(3); TextSize(12);

                                    if (rewardType == 1 && foundItemId > 0) {
                                        const ItemDef *itm = &sItemTable[foundItemId - 1];
                                        Str255 iname;
                                        short nl = 0;
                                        MoveTo(30, 60);
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 1, "\pYour hero discovers an artifact!"));
                                        MoveTo(30, 82);
                                        {
                                            RGBColor cyan = {0x6666, 0xFFFF, 0xFFFF};
                                            RGBForeColor(&cyan);
                                        }
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 2, "\pFound: "));
                                        while (nl < 19 && itm->name[nl]) nl++;
                                        iname[0] = (unsigned char)nl;
                                        BlockMoveData(itm->name, iname + 1, nl);
                                        DrawString(iname);
                                        MoveTo(30, 102);
                                        RGBForeColor(&white);
                                        switch (itm->type) {
                                            case ITEM_TYPE_BATTLE:
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 3, "\pBattle bonus: +"));
                                                { Str255 vs; NumToString((long)itm->value, vs); DrawString(vs); }
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 4, "\p strength"));
                                                break;
                                            case ITEM_TYPE_COMMAND:
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 5, "\pCommand bonus: +"));
                                                { Str255 vs; NumToString((long)itm->value, vs); DrawString(vs); }
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 6, "\p to all stacked"));
                                                break;
                                            case ITEM_TYPE_FLYING:
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 7, "\pGrants flight to stack!"));
                                                break;
                                            case ITEM_TYPE_MOVEMENT:
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 8, "\pDoubles stack movement!"));
                                                break;
                                            case ITEM_TYPE_GOLD:
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 9, "\pGold bonus: +"));
                                                { Str255 vs; NumToString((long)itm->value, vs); DrawString(vs); }
                                                DrawString(GetCachedString(STR_SEARCH_TEMPLE, 10, "\p per city per turn"));
                                                break;
                                        }
                                    } else if (rewardType == 2 && gotAlly) {
                                        static const unsigned char *allyNames[] = {
                                            "\pLight Infantry", "\pHeavy Infantry",
                                            "\pCavalry", "\pArchers"
                                        };
                                        short allyT = (short)((rndSeed / 13) % 4);
                                        MoveTo(30, 60);
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 11, "\pA warrior emerges from the shadows!"));
                                        MoveTo(30, 82);
                                        {
                                            RGBColor green = {0x4444, 0xFFFF, 0x4444};
                                            RGBForeColor(&green);
                                        }
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 12, "\pAllied: "));
                                        DrawString(allyNames[allyT]);
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 13, "\p joins your army!"));
                                    } else {
                                        Str255 numStr;
                                        MoveTo(30, 60);
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 14, "\pYour hero discovers treasure!"));
                                        MoveTo(30, 82);
                                        DrawString(GetCachedString(STR_MISC, 4, "\pReward: "));
                                        NumToString((long)gold, numStr);
                                        DrawString(numStr);
                                        DrawString(GetCachedString(STR_SEARCH_TEMPLE, 15, "\p gold pieces"));
                                    }
                                }
                                /* OK button */
                                {
                                    Rect okR;
                                    RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                                    SetRect(&okR, 110, 130, 190, 152);
                                    RGBForeColor(&white);
                                    FrameRoundRect(&okR, 8, 8);
                                    MoveTo(136, 146);
                                    DrawString(GetCachedString(STR_COMMON_BUTTONS, 1, "\pOK"));
                                }

                                UnlockPixels(GetGWorldPixMap(rwGW));
                                SetGWorld(sp, sd);
                                SetPort(rwWin);
                                {
                                    Rect dr = rwWin->portRect;
                                    LockPixels(GetGWorldPixMap(rwGW));
                                    CopyBits((BitMap *)*GetGWorldPixMap(rwGW),
                                             &((GrafPtr)rwWin)->portBits,
                                             &rwGR, &dr, srcCopy, NULL);
                                    UnlockPixels(GetGWorldPixMap(rwGW));
                                }

                                /* Modal wait */
                                while (!rd) {
                                    if (WaitNextEvent(mDownMask | keyDownMask, &re, 30, NULL)) {
                                        if (re.what == mouseDown || re.what == keyDown)
                                            rd = true;
                                    }
                                }
                            }
                            if (rwGW) DisposeGWorld(rwGW);
                            if (rwWin) DisposeWindow(rwWin);
                        }
                        break;
                    }
                }
                if (!foundRuin)
                    ShowBriefMessage("\pNo ruins at this location");
            } else {
                ShowBriefMessage("\pSelect an army to search");
            }
            break;
        }
        break;

    /* ---- View menu (ID 7) ---- */
    /* Menu: Army Bonuses.../B;Items.../I;(-;Build...;Cities...;Production.../P;
     *       Vectoring...;Ruins...;Stack.../K */
    case 7:
        switch (menuItem) {
        case 1: /* Army Bonuses... (cmd 0x6A4) — show army inspect */
            if (sSelectedArmy >= 0)
                ShowArmyInspect(sSelectedArmy);
            else
                ShowBriefMessage("\pSelect an army first");
            break;
        case 2: /* Items... (cmd 0x6A5) — show items for selected hero */
            if (sSelectedArmy >= 0 && *gGameState != 0) {
                unsigned char *sa = (unsigned char *)*gGameState + 0x1604 + sSelectedArmy * 0x42;
                short uu;
                Boolean isHero = false;
                for (uu = 0; uu < 4; uu++)
                    if ((unsigned char)sa[0x16 + uu] == 0x1C) { isHero = true; break; }
                if (isHero)
                    ShowItemsDialog(sSelectedArmy);
                else
                    ShowHeroInspect();
            } else {
                ShowHeroInspect();
            }
            break;
        case 4: /* Build... (cmd 0x6A7) — change production at selected city */
        {
            Boolean foundCity = false;
            if (*gGameState != 0 && sSelectedArmy >= 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                short ac = *(short *)(gs + 0x1602);
                if (sSelectedArmy < ac) {
                    unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                    short ax = *(short *)(army + 0x00);
                    short ay = *(short *)(army + 0x02);
                    short curP = *(short *)(gs + 0x110);
                    short cc = *(short *)(gs + 0x810);
                    short bci;
                    if (cc > 40) cc = 40;
                    for (bci = 0; bci < cc; bci++) {
                        unsigned char *c = gs + 0x812 + bci * 0x20;
                        short sType = (short)(unsigned char)c[0x18];
                        if (sType == 2 || sType == 5 || sType == 6) continue;
                        if (*(short *)(c + 0x00) == ax && *(short *)(c + 0x02) == ay &&
                            *(short *)(c + 0x04) == curP) {
                            ShowCityProductionDialog(bci);
                            foundCity = true;
                            break;
                        }
                    }
                }
            }
            if (!foundCity) ShowReportDialog(3);
        }
            break;
        case 5: /* Cities... (cmd 0x6A6) — show cities report */
            ShowReportDialog(1);
            break;
        case 6: /* Production... (cmd 0x6A8) — show production report */
            ShowReportDialog(3);
            break;
        case 7: /* Vectoring... (cmd 0x6A9) — set city production routing */
            if (*gGameState != 0 && sSelectedArmy >= 0) {
                /* Find the city at the selected army's location */
                unsigned char *gs = (unsigned char *)*gGameState;
                unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                short ax = *(short *)(army + 0x00);
                short ay = *(short *)(army + 0x02);
                short cityCount = *(short *)(gs + 0x810);
                short ci;
                Boolean found = false;
                if (cityCount > 40) cityCount = 40;
                for (ci = 0; ci < cityCount; ci++) {
                    unsigned char *c = gs + 0x812 + ci * 0x20;
                    if (*(short *)(c + 0x00) == ax && *(short *)(c + 0x02) == ay) {
                        short sType = (short)(unsigned char)c[0x18];
                        if (sType != 2 && sType != 5 && sType != 6) {
                            ShowVectoringDialog(ci);
                            found = true;
                        }
                        break;
                    }
                }
                if (!found) ShowBriefMessage("\pNo owned cities found");
            } else {
                ShowBriefMessage("\pSelect an army first");
            }
            break;
        case 8: /* Ruins... (cmd 0x6AA) — show ruins/temples/libraries */
            ShowRuinsDialog();
            break;
        case 9: /* Stack... (cmd 0x6AB) — show all armies at selected location */
            ShowStackDialog();
            break;
        }
        break;

    /* ---- History menu (ID 8) ---- */
    /* Menu: Show History.../H;(-;Cities...;Events...;Gold...;Winners...;
     *       (-;Triumphs.../T */
    case 8:
        switch (menuItem) {
        case 1: /* Show History... (cmd 0x708) — last used tab */
            ShowHistoryDialog(-1);
            break;
        case 3: /* Cities... (cmd 0x709) */
            ShowHistoryDialog(0);
            break;
        case 4: /* Events... (cmd 0x70A) */
            ShowHistoryDialog(1);
            break;
        case 5: /* Gold... (cmd 0x70B) */
            ShowHistoryDialog(2);
            break;
        case 6: /* Winners... (cmd 0x70C) */
            ShowHistoryDialog(3);
            break;
        case 8: /* Triumphs... (cmd 0x70D) */
            ShowTriumphsDialog();
            break;
        }
        break;

    /* ---- Game menu (ID 9) ---- */
    /* Menu: End Turn/E;Save and End Turn;(-;Strategy Map;Control Window;
     *       Info Window;Clean Up Windows;(-;Game Settings...;Sound Volumes...;Shortcuts... */
    case 9:
        switch (menuItem) {
        case 1: /* End Turn (cmd 0x76C) */
        {
            Boolean doEnd = true;
            /* Check for unmoved armies */
            if (*gGameState != 0) {
                unsigned char *gs = (unsigned char *)*gGameState;
                short curP = *(short *)(gs + 0x110);
                short ac = *(short *)(gs + 0x1602);
                short unmovedCount = 0, ua;
                if (ac > 100) ac = 100;
                for (ua = 0; ua < ac; ua++) {
                    unsigned char *arm = gs + 0x1604 + ua * 0x42;
                    if ((short)(unsigned char)arm[0x15] == curP &&
                        (short)(unsigned char)arm[0x2e] > 0 &&
                        *(short *)(arm + 0x32) == 0 &&
                        arm[0x2d] == 0) {
                        unmovedCount++;
                    }
                }
                if (unmovedCount > 0) {
                    WindowPtr confWin;
                    Rect confR;
                    SetRect(&confR, 0, 0, 300, 80);
                    OffsetRect(&confR, 190, 200);
                    confWin = NewCWindow(NULL, &confR, "\p", true,
                                         plainDBox, (WindowPtr)-1, false, 0);
                    if (confWin) {
                        RGBColor cbg = {0x1800, 0x1800, 0x2800};
                        RGBColor cwh = {0xFFFF, 0xFFFF, 0xFFFF};
                        RGBColor cg = {0x4444, 0xFFFF, 0x4444};
                        RGBColor cr = {0xFFFF, 0x8888, 0x4444};
                        Rect yR, nR;
                        Boolean confDone = false;
                        EventRecord confEvt;
                        Str255 ns;

                        SetRect(&yR, 150, 52, 220, 72);
                        SetRect(&nR, 230, 52, 290, 72);
                        SetPort(confWin);
                        RGBForeColor(&cbg); PaintRect(&confWin->portRect);
                        RGBForeColor(&cwh);
                        TextFont(3); TextSize(11); TextFace(bold);
                        MoveTo(15, 20);
                        DrawString(GetCachedString(STR_MISC, 28, "\pYou have "));
                        NumToString((long)unmovedCount, ns); DrawString(ns);
                        DrawString(GetCachedString(STR_MISC, 29, "\p unmoved "));
                        DrawString(unmovedCount == 1 ? "\parmy." : "\parmies.");
                        TextFace(0); TextSize(10);
                        MoveTo(15, 40);
                        DrawString(GetCachedString(STR_MISC, 30, "\pEnd turn anyway?"));
                        RGBForeColor(&cg);
                        FrameRoundRect(&yR, 6, 6);
                        MoveTo(168, 67); DrawString(GetCachedString(STR_COMMON_BUTTONS, 3, "\pYes"));
                        RGBForeColor(&cr);
                        FrameRoundRect(&nR, 6, 6);
                        MoveTo(246, 67); DrawString(GetCachedString(STR_COMMON_BUTTONS, 2, "\pNo"));

                        while (!confDone) {
                            if (WaitNextEvent(mDownMask | keyDownMask, &confEvt, 30, NULL)) {
                                if (confEvt.what == keyDown) {
                                    char ch = confEvt.message & charCodeMask;
                                    if (ch == '\r' || ch == 'y' || ch == 'Y') confDone = true;
                                    else if (ch == 27 || ch == 'n' || ch == 'N') {
                                        doEnd = false; confDone = true;
                                    }
                                } else if (confEvt.what == mouseDown) {
                                    Point cp = confEvt.where;
                                    SetPort(confWin); GlobalToLocal(&cp);
                                    if (PtInRect(cp, &yR)) confDone = true;
                                    else if (PtInRect(cp, &nR)) {
                                        doEnd = false; confDone = true;
                                    }
                                }
                            }
                        }
                        DisposeWindow(confWin);
                    }
                }
            }
            if (doEnd) {
                sSelectedArmy = -1;
                sUndoArmyIdx = -1;
                /* Execute all queued army orders before ending turn */
                MoveAllArmies();
                AdvanceToNextPlayer();
            }
        }
            break;
        case 2: /* Save and End Turn (cmd 0x773) */
            DoSave();
            sSelectedArmy = -1;
            sUndoArmyIdx = -1;
            /* Execute all queued army orders before ending turn */
            MoveAllArmies();
            AdvanceToNextPlayer();
            break;
        case 4: /* Strategy Map (cmd 0x76F) — toggle overview window */
            if (gOverviewWindow != NULL) {
                WindowPtr ow = (WindowPtr)*gOverviewWindow;
                if (((WindowPeek)ow)->visible)
                    HideWindow(ow);
                else
                    ShowWindow(ow);
            }
            break;
        case 5: /* Control Window (cmd 0x770) — toggle info panel (same as Info Window) */
            if (gInfoWindow != NULL) {
                WindowPtr iw2 = (WindowPtr)*gInfoWindow;
                if (((WindowPeek)iw2)->visible)
                    HideWindow(iw2);
                else
                    ShowWindow(iw2);
            }
            break;
        case 6: /* Info Window (cmd 0x771) — toggle info panel */
            if (gInfoWindow != NULL) {
                WindowPtr iw = (WindowPtr)*gInfoWindow;
                if (((WindowPeek)iw)->visible)
                    HideWindow(iw);
                else
                    ShowWindow(iw);
            }
            break;
        case 7: /* Clean Up Windows (cmd 0x772) — reset positions */
            if (gMainGameWindow != NULL) {
                MoveWindow((WindowPtr)*gMainGameWindow, 2, 40, false);
                SizeWindow((WindowPtr)*gMainGameWindow, 508, 342, true);
            }
            if (gOverviewWindow != NULL)
                MoveWindow((WindowPtr)*gOverviewWindow, 514, 40, false);
            if (gInfoWindow != NULL)
                MoveWindow((WindowPtr)*gInfoWindow, 514, 204, false);
            if (gStatusWindow != NULL)
                MoveWindow((WindowPtr)*gStatusWindow, 2, 384, false);
            break;
        case 9:  /* Game Settings... (cmd 0x76D) */
            ShowGameSettingsDialog();
            break;
        case 10: /* Sound Volumes... (cmd 0x774) */
            ShowSoundVolumesDialog();
            break;
        case 11: /* Shortcuts... (cmd 0x76E) */
            ShowShortcutsDialog();
            break;
        }
        break;
    }

    HiliteMenu(0);
}


/* ===================================================================
 * TryAutoSearchRuin — If armyIdx has a hero and is on a ruin, auto-search.
 * Dispatches to Heroes > Search menu handler.
 * =================================================================== */
static void TryAutoSearchRuin(short armyIdx)
{
    unsigned char *gs, *army;
    short ax, ay, slot;
    Boolean hasHero = false;

    if (*gGameState == 0 || armyIdx < 0) return;
    gs = (unsigned char *)*gGameState;
    {
        short ac = *(short *)(gs + 0x1602);
        if (armyIdx >= ac) return;
    }
    army = gs + 0x1604 + armyIdx * 0x42;
    ax = *(short *)(army + 0x00);
    ay = *(short *)(army + 0x02);

    /* Check for hero unit (type 0x1C) */
    for (slot = 0; slot < 4; slot++) {
        if ((unsigned char)army[0x16 + slot] == 0x1C) {
            hasHero = true;
            break;
        }
    }
    if (!hasHero) return;

    /* Check if standing on a ruin/temple/library */
    {
        short siteCount = *(short *)(gs + 0x810);
        short ci;
        if (siteCount > 40) siteCount = 40;
        for (ci = 0; ci < siteCount; ci++) {
            unsigned char *site = gs + 0x812 + ci * 0x20;
            short siteType = (short)(unsigned char)site[0x18];
            if (*(short *)(site + 0x00) == ax &&
                *(short *)(site + 0x02) == ay &&
                (siteType == 2 || siteType == 5 || siteType == 6)) {
                /* Auto-search: dispatch to Heroes > Search handler */
                HandleMenuChoice((6L << 16) | 4);
                return;
            }
        }
    }
}


/* ===================================================================
 * MoveSelectedArmyBy — Move the selected army by (dx, dy) if possible.
 * Used by numpad movement and keyboard shortcuts.
 * Returns true if movement occurred.
 * =================================================================== */
static Boolean MoveSelectedArmyBy(short dx, short dy)
{
    unsigned char *gs, *selArmy;
    short curX, curY, newX, newY;
    short movePts, unitCls, cost;
    short armyCount, currentPlayer;

    if (!sMapLoaded || *gGameState == 0 || sSelectedArmy < 0)
        return false;

    gs = (unsigned char *)*gGameState;
    currentPlayer = *(short *)(gs + 0x110);
    armyCount = *(short *)(gs + 0x1602);
    if (sSelectedArmy >= armyCount)
        return false;

    selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
    if ((short)(unsigned char)selArmy[0x15] != currentPlayer)
        return false;

    curX = *(short *)(selArmy + 0x00);
    curY = *(short *)(selArmy + 0x02);
    newX = curX + dx;
    newY = curY + dy;

    if (newX < 0 || newX >= sMapWidth || newY < 0 || newY >= sMapHeight)
        return false;

    movePts = (short)(unsigned char)selArmy[0x2e];
    unitCls = (short)(unsigned char)selArmy[0x16];
    cost = GetMovementCost(newX, newY, unitCls);

    if (cost <= 0 || movePts < cost)
        return false;

    /* Save undo state */
    sUndoArmyIdx = sSelectedArmy;
    sUndoFromX = curX;
    sUndoFromY = curY;
    sUndoMovePts = movePts;

    /* Move the army */
    *(short *)(selArmy + 0x00) = newX;
    *(short *)(selArmy + 0x02) = newY;
    selArmy[0x2e] = (unsigned char)(movePts - cost);

    /* Fog of war reveal */
    if (sOptHiddenMap) {
        FogReveal((short)(unsigned char)selArmy[0x15], newX, newY);
    }

    /* Check for combat — invalidates undo if combat occurs */
    if (CheckAndResolveCombat(sSelectedArmy))
        sUndoArmyIdx = -1;

    /* Try merging with friendly army at destination */
    if (sSelectedArmy >= 0) {
        if (TryMergeArmies(sSelectedArmy))
            sSelectedArmy = -1;
    }

    /* Auto-search ruins if hero army */
    if (sSelectedArmy >= 0)
        TryAutoSearchRuin(sSelectedArmy);

    /* Auto-select next army if this one exhausted */
    if (sSelectedArmy >= 0) {
        armyCount = *(short *)(gs + 0x1602);
        if (sSelectedArmy < armyCount) {
            selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
            if ((short)(unsigned char)selArmy[0x2e] <= 0 &&
                *(short *)(selArmy + 0x32) == 0) {
                SelectNextArmy();
            }
        }
    }

    return true;
}


/* ===================================================================
 * HandleMouseDown — route mouseDown to appropriate handler
 * =================================================================== */
static void HandleMouseDown(EventRecord *event)
{
    WindowPtr   whichWindow;
    short       partCode;

    partCode = FindWindow(event->where, &whichWindow);

    switch (partCode) {
    case inMenuBar:
        HandleMenuChoice(MenuSelect(event->where));
        break;

    case inDrag:
        DragWindow(whichWindow, event->where, &qd.screenBits.bounds);
        break;

    case inGoAway:
        if (TrackGoAway(whichWindow, event->where)) {
            if (gMainGameWindow != NULL && whichWindow == (WindowPtr)*gMainGameWindow)
                sDone = true;   /* close main = quit */
            else
                HideWindow(whichWindow);
        }
        break;

    case inZoomIn:
    case inZoomOut:
        if (TrackBox(whichWindow, event->where, partCode)) {
            /* Overview window zoom box = toggle minimap size */
            if (gOverviewWindow != NULL && whichWindow == (WindowPtr)*gOverviewWindow) {
                ToggleMinimapZoom();
            } else {
                SetPort(whichWindow);
                EraseRect(&whichWindow->portRect);
                ZoomWindow(whichWindow, partCode, true);
                /* Reposition scrollbar controls after zoom */
                if (gMainGameWindow != NULL &&
                    whichWindow == (WindowPtr)*gMainGameWindow) {
                    Rect p = whichWindow->portRect;
                    if (sVScrollBar != NULL) {
                        MoveControl(sVScrollBar, p.right - SCROLLBAR_W, p.top);
                        SizeControl(sVScrollBar, SCROLLBAR_W,
                                    p.bottom - p.top - SCROLLBAR_H + 1);
                    }
                    if (sHScrollBar != NULL) {
                        short hLeft = p.left + SHIELD_AREA_W + 50;
                        MoveControl(sHScrollBar, hLeft, p.bottom - SCROLLBAR_H);
                        SizeControl(sHScrollBar,
                                    p.right - SCROLLBAR_W - hLeft + 1, SCROLLBAR_H);
                    }
                }
                InvalRect(&whichWindow->portRect);
            }
        }
        break;

    case inGrow:
    {
        Rect limitRect;
        long newSize;
        SetRect(&limitRect, 128, 128, 1024, 768);
        newSize = GrowWindow(whichWindow, event->where, &limitRect);
        if (newSize != 0) {
            Rect p;
            SizeWindow(whichWindow, (short)(newSize & 0xFFFF), (short)((newSize >> 16) & 0xFFFF), true);
            SetPort(whichWindow);
            p = whichWindow->portRect;
            /* Reposition scrollbar controls after resize */
            if (sVScrollBar != NULL) {
                MoveControl(sVScrollBar, p.right - SCROLLBAR_W, p.top);
                SizeControl(sVScrollBar, SCROLLBAR_W, p.bottom - p.top - SCROLLBAR_H + 1);
            }
            if (sHScrollBar != NULL) {
                short hLeft = p.left + SHIELD_AREA_W + 50;
                MoveControl(sHScrollBar, hLeft, p.bottom - SCROLLBAR_H);
                SizeControl(sHScrollBar, p.right - SCROLLBAR_W - hLeft + 1, SCROLLBAR_H);
            }
            InvalRect(&p);
        }
        break;
    }

    case inContent:
        if (whichWindow != FrontWindow()) {
            SelectWindow(whichWindow);
        } else if (sMapLoaded && gOverviewWindow != NULL &&
                   whichWindow == (WindowPtr)*gOverviewWindow) {
            /* Check for click on zoom button (top-right corner) */
            {
                Point zPt = event->where;
                Rect oPort = whichWindow->portRect;
                Rect zoomBtn;
                SetPort(whichWindow);
                GlobalToLocal(&zPt);
                SetRect(&zoomBtn, oPort.right - 13, oPort.top + 2,
                        oPort.right - 2, oPort.top + 13);
                if (PtInRect(zPt, &zoomBtn)) {
                    ToggleMinimapZoom();
                    break;
                }
            }
            /* Click-and-drag in minimap: scroll main map while mouse held */
            {
                Rect  oPort = whichWindow->portRect;
                short tilesWide, tilesHigh, scale;
                short oldVX, oldVY;
                Point dragPt;

                SetPort(whichWindow);
                scale = (sMinimapZoom >= 1) ? 2 : 1;
                tilesWide = (((WindowPtr)*gMainGameWindow)->portRect.right -
                             ((WindowPtr)*gMainGameWindow)->portRect.left - SCROLLBAR_W)
                            / TERRAIN_TILE_W;
                tilesHigh = (((WindowPtr)*gMainGameWindow)->portRect.bottom -
                             ((WindowPtr)*gMainGameWindow)->portRect.top - SCROLLBAR_H)
                            / TERRAIN_TILE_H;

                /* Process initial click + drag loop */
                do {
                    GetMouse(&dragPt);  /* local coords in overview window */
                    oldVX = sViewportX;
                    oldVY = sViewportY;

                    sViewportX = (dragPt.h - oPort.left) / scale - tilesWide / 2;
                    sViewportY = (dragPt.v - oPort.top) / scale - tilesHigh / 2;
                    if (sViewportX < 0) sViewportX = 0;
                    if (sViewportY < 0) sViewportY = 0;
                    if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
                    if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;

                    /* Only redraw if viewport actually moved */
                    if (sViewportX != oldVX || sViewportY != oldVY) {
                        SetPort((WindowPtr)*gMainGameWindow);
                        DrawMapInWindow((WindowPtr)*gMainGameWindow);

                        SetPort(whichWindow);
                        DrawOverviewInWindow(whichWindow);
                    }
                } while (StillDown());
            }
        } else if (sMapLoaded && gMainGameWindow != NULL &&
                   whichWindow == (WindowPtr)*gMainGameWindow) {
            /* Click in main map: handle scrollbar clicks or map viewport click */
            Point localPt = event->where;
            Rect  port = whichWindow->portRect;
            ControlHandle hitCtrl = NULL;
            short ctrlPart;
            SetPort(whichWindow);
            GlobalToLocal(&localPt);

            ctrlPart = FindControl(localPt, whichWindow, &hitCtrl);
            if (ctrlPart != 0 && hitCtrl != NULL &&
                (hitCtrl == sVScrollBar || hitCtrl == sHScrollBar)) {
                /* Clicked on a native scrollbar control */
                short scrollAmt = 3;
                short tilesW = (port.right - port.left - SCROLLBAR_W) / TERRAIN_TILE_W;
                short tilesH = (port.bottom - port.top - SCROLLBAR_H) / TERRAIN_TILE_H;

                if (ctrlPart == inThumb) {
                    /* Thumb drag */
                    TrackControl(hitCtrl, localPt, NULL);
                } else {
                    /* Arrow or page click — adjust value manually */
                    short val = GetControlValue(hitCtrl);
                    short max = GetControlMaximum(hitCtrl);
                    short pageAmt = (hitCtrl == sVScrollBar) ? tilesH : tilesW;
                    switch (ctrlPart) {
                        case inUpButton:   val -= scrollAmt; break;
                        case inDownButton: val += scrollAmt; break;
                        case inPageUp:     val -= pageAmt;   break;
                        case inPageDown:   val += pageAmt;   break;
                    }
                    if (val < 0) val = 0;
                    if (val > max) val = max;
                    SetControlValue(hitCtrl, val);
                }

                /* Read back control values to update viewport */
                if (hitCtrl == sVScrollBar) {
                    sViewportY = GetControlValue(sVScrollBar);
                } else {
                    sViewportX = GetControlValue(sHScrollBar);
                }
                InvalRect(&port);
                if (*gOverviewWindow != 0) {
                    SetPort((WindowPtr)*gOverviewWindow);
                    InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                }
            } else if (localPt.h < port.right - SCROLLBAR_W &&
                       localPt.v < port.bottom - SCROLLBAR_H) {
                /* Click in map area — army selection and movement */
                short clickTileX = sViewportX + (localPt.h - port.left) / TERRAIN_TILE_W;
                short clickTileY = sViewportY + (localPt.v - port.top) / TERRAIN_TILE_H;

                if (*gGameState != 0) {
                    unsigned char *gs = (unsigned char *)*gGameState;
                    short currentPlayer = *(short *)(gs + 0x110);
                    short armyCount = *(short *)(gs + 0x1602);
                    short clickedArmy = -1;
                    short ai;

                    /* Option+drag = pan map; Option+click on own city = production */
                    if (event->modifiers & optionKey) {
                        /* Track mouse to distinguish click from drag */
                        Point startPt = localPt;
                        short startVX = sViewportX, startVY = sViewportY;
                        Boolean didDrag = false;

                        if (sHandCursor != NULL) SetCCursor(sHandCursor);

                        while (StillDown()) {
                            Point curPt;
                            short dx, dy;
                            GetMouse(&curPt);
                            dx = curPt.h - startPt.h;
                            dy = curPt.v - startPt.v;
                            if (dx > 4 || dx < -4 || dy > 4 || dy < -4)
                                didDrag = true;
                            if (didDrag) {
                                short newVX = startVX - dx / TERRAIN_TILE_W;
                                short newVY = startVY - dy / TERRAIN_TILE_H;
                                if (newVX < 0) newVX = 0;
                                if (newVY < 0) newVY = 0;
                                if (newVX > sMapWidth - 1) newVX = sMapWidth - 1;
                                if (newVY > sMapHeight - 1) newVY = sMapHeight - 1;
                                if (newVX != sViewportX || newVY != sViewportY) {
                                    sViewportX = newVX;
                                    sViewportY = newVY;
                                    SetPort(whichWindow);
                                    DrawMapInWindow(whichWindow);
                                    if (*gOverviewWindow != 0) {
                                        SetPort((WindowPtr)*gOverviewWindow);
                                        DrawOverviewInWindow((WindowPtr)*gOverviewWindow);
                                    }
                                    SetPort(whichWindow);
                                }
                            }
                        }

                        if (sDefaultCursor != NULL) SetCCursor(sDefaultCursor);
                        else InitCursor();

                        if (didDrag) {
                            /* Update scrollbars after drag-pan */
                            if (sVScrollBar) SetControlValue(sVScrollBar, sViewportY);
                            if (sHScrollBar) SetControlValue(sHScrollBar, sViewportX);
                            goto doneMapClick;
                        }

                        /* Wasn't a drag — fall through to Option-click on city */
                        {
                            short cityCount = *(short *)(gs + 0x810);
                            short ci;
                            if (cityCount > 40) cityCount = 40;
                            for (ci = 0; ci < cityCount; ci++) {
                                unsigned char *city = gs + 0x812 + ci * 0x20;
                                if (*(short *)(city + 0x00) == clickTileX &&
                                    *(short *)(city + 0x02) == clickTileY &&
                                    *(short *)(city + 0x04) == currentPlayer) {
                                    short sType = (short)(unsigned char)city[0x18];
                                    if (sType == 0) {
                                        ShowCityProductionDialog(ci);
                                        SetPort(whichWindow);
                                        InvalRect(&port);
                                        goto doneMapClick;
                                    }
                                }
                            }
                        }
                    }

                    /* Control-click: inspect tile */
                    if (event->modifiers & 0x1000) {  /* controlKey */
                        WindowPtr tipWin;
                        Rect tipR;
                        short tipW = 200, tipH = 100;
                        SetRect(&tipR, 0, 0, tipW, tipH);
                        OffsetRect(&tipR, (qd.screenBits.bounds.right - tipW) / 2,
                                          (qd.screenBits.bounds.bottom - tipH) / 2);
                        tipWin = NewCWindow(NULL, &tipR, "\p", true,
                                            plainDBox, (WindowPtr)-1L, false, 0);
                        if (tipWin != NULL) {
                            RGBColor bg = {0xEEEE, 0xEEEE, 0xDDDD};
                            RGBColor black = {0, 0, 0};
                            Str255 numStr;
                            short terrType = 0;
                            unsigned char terrIdx = 0;
                            EventRecord tipEvt;

                            SetPort(tipWin);
                            RGBForeColor(&bg);
                            PaintRect(&tipWin->portRect);
                            RGBForeColor(&black);
                            FrameRect(&tipWin->portRect);

                            /* Terrain info */
                            if (*gMapTiles != 0 && clickTileX >= 0 && clickTileX < sMapWidth &&
                                clickTileY >= 0 && clickTileY < sMapHeight) {
                                unsigned char *mapData = (unsigned char *)*gMapTiles;
                                terrIdx = mapData[clickTileY * 0xE0 + clickTileX * 2];
                                if (*gGameState != 0)
                                    terrType = (short)(unsigned char)((unsigned char *)*gGameState)[terrIdx + 0x711];
                            }
                            TextFont(3); TextSize(9);
                            MoveTo(10, 14);
                            DrawString(GetCachedString(STR_MISC, 60, "\pTile ("));
                            NumToString((long)clickTileX, numStr); DrawString(numStr);
                            DrawString("\p, ");
                            NumToString((long)clickTileY, numStr); DrawString(numStr);
                            DrawString(GetCachedString(STR_MISC, 61, "\p)  Terrain: "));
                            {
                                static const unsigned char *tNames[] = {
                                    "\pPlains", "\pForest", "\pMountain", "\pHills",
                                    "\pSwamp", "\pDesert", "\pShallow", "\pDeep Water",
                                    "\pTundra", "\pWasteland", "\pRoad", "\pOcean"
                                };
                                if (terrType >= 0 && terrType < 12)
                                    DrawString(tNames[terrType]);
                            }

                            /* Movement cost for selected army */
                            if (sSelectedArmy >= 0) {
                                short ac2 = *(short *)(gs + 0x1602);
                                if (sSelectedArmy < ac2) {
                                    unsigned char *sa = gs + 0x1604 + sSelectedArmy * 0x42;
                                    short uCls = (short)(unsigned char)sa[0x16];
                                    short mvCost = GetMovementCost(clickTileX, clickTileY, uCls);
                                    RGBColor costCol = {0x0000, 0x0000, 0x8888};
                                    RGBForeColor(&costCol);
                                    MoveTo(10, 24);
                                    DrawString(GetCachedString(STR_MISC, 62, "\pMove cost: "));
                                    if (mvCost == 0) {
                                        RGBColor red = {0xCCCC, 0, 0};
                                        RGBForeColor(&red);
                                        DrawString(GetCachedString(STR_MISC, 63, "\pImpassable"));
                                    } else {
                                        NumToString((long)mvCost, numStr);
                                        DrawString(numStr);
                                        DrawString(GetCachedString(STR_MISC, 64, "\p pts"));
                                    }
                                }
                            }

                            /* City at tile? */
                            {
                                short cCount = *(short *)(gs + 0x810);
                                short ci;
                                if (cCount > 40) cCount = 40;
                                for (ci = 0; ci < cCount; ci++) {
                                    unsigned char *c = gs + 0x812 + ci * 0x20;
                                    if (*(short *)(c + 0x00) == clickTileX &&
                                        *(short *)(c + 0x02) == clickTileY) {
                                        short cOwn = *(short *)(c + 0x04);
                                        MoveTo(10, 38);
                                        DrawString(GetCachedString(STR_MISC, 65, "\pCity owned by "));
                                        if (cOwn >= 0 && cOwn < 8) {
                                            unsigned char *fn = gs + cOwn * FACTION_NAME_LEN;
                                            Str255 cn;
                                            short nl = 0;
                                            while (nl < 12 && fn[nl]) nl++;
                                            cn[0] = nl;
                                            BlockMoveData(fn, cn + 1, nl);
                                            RGBForeColor(&sPlayerColors[cOwn + 1]);
                                            DrawString(cn);
                                        } else {
                                            DrawString(GetCachedString(STR_CITY_DIALOG, 8, "\pNeutral"));
                                        }
                                        break;
                                    }
                                }
                            }

                            /* Armies at tile? */
                            {
                                short aCount = *(short *)(gs + 0x1602);
                                short ai2, yy = 54;
                                short enemyCount = 0;
                                if (aCount > 100) aCount = 100;
                                for (ai2 = 0; ai2 < aCount && yy < 90; ai2++) {
                                    unsigned char *a = gs + 0x1604 + ai2 * 0x42;
                                    if (*(short *)(a + 0x00) == clickTileX &&
                                        *(short *)(a + 0x02) == clickTileY) {
                                        short aOwn = (short)(unsigned char)a[0x15];
                                        short cidx = (aOwn >= 0 && aOwn < 8) ? aOwn + 1 : 0;
                                        /* Hide enemy army details when View Enemies off */
                                        if (!sOptViewEnemies && aOwn != currentPlayer) {
                                            enemyCount++;
                                            continue;
                                        }
                                        {
                                            short aStr = *(short *)(a + 0x2a);
                                            Str255 uName;
                                            RGBForeColor(&sPlayerColors[cidx]);
                                            MoveTo(10, yy);
                                            GetUnitTypeName((short)(unsigned char)a[0x16], uName);
                                            DrawString(uName);
                                            DrawString(GetCachedString(STR_MISC, 66, "\p str:"));
                                            NumToString((long)aStr, numStr);
                                            DrawString(numStr);
                                            yy += 12;
                                        }
                                    }
                                }
                                if (enemyCount > 0 && yy < 90) {
                                    RGBColor foeCol = {0xAAAA, 0x3333, 0x3333};
                                    RGBForeColor(&foeCol);
                                    MoveTo(10, yy);
                                    DrawString(GetCachedString(STR_MISC, 67, "\pEnemy forces present"));
                                    yy += 12;
                                }
                            }

                            FlushEvents(everyEvent, 0);
                            while (1) {
                                if (WaitNextEvent(mDownMask | keyDownMask, &tipEvt, 30, NULL))
                                    break;
                            }
                            DisposeWindow(tipWin);
                        }
                        goto doneMapClick;
                    }

                    if (armyCount > 100) armyCount = 100;

                    /* Check if clicked on one of our armies */
                    for (ai = 0; ai < armyCount; ai++) {
                        unsigned char *army = gs + 0x1604 + ai * 0x42;
                        short ax = *(short *)(army + 0x00);
                        short ay = *(short *)(army + 0x02);
                        short owner = (short)(unsigned char)army[0x15];
                        if (ax == clickTileX && ay == clickTileY &&
                            owner == currentPlayer) {
                            clickedArmy = ai;
                            break;
                        }
                    }

                    /* Double-click detection: city info on double-click with no army */
                    {
                        unsigned long now = TickCount();
                        Boolean isDoubleClick = (now - sLastMapClickTick < 30 &&
                                                 sLastMapClickX == clickTileX &&
                                                 sLastMapClickY == clickTileY);
                        sLastMapClickTick = now;
                        sLastMapClickX = clickTileX;
                        sLastMapClickY = clickTileY;

                        if (isDoubleClick && clickedArmy < 0) {
                            /* Double-click on empty tile: check for city */
                            short cCount = *(short *)(gs + 0x810);
                            short ci;
                            if (cCount > 40) cCount = 40;
                            for (ci = 0; ci < cCount; ci++) {
                                unsigned char *c = gs + 0x812 + ci * 0x20;
                                if (*(short *)(c + 0x00) == clickTileX &&
                                    *(short *)(c + 0x02) == clickTileY) {
                                    ShowCityInfo(ci);
                                    SetPort(whichWindow);
                                    InvalRect(&port);
                                    goto doneMapClick;
                                }
                            }
                        }
                    }

                    if (clickedArmy >= 0) {
                        if (clickedArmy == sSelectedArmy) {
                            /* Re-clicked already selected army: inspect it */
                            ShowArmyInspect(clickedArmy);
                            SetPort(whichWindow);
                        } else {
                            /* Clicked a different army: select it */
                            sSelectedArmy = clickedArmy;
                            PlaySound(SND_ARMY);
                        }
                        InvalRect(&port);
                    } else if (sSelectedArmy >= 0 && sSelectedArmy < armyCount) {
                        /* Clicked empty tile with army selected */
                        unsigned char *selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
                        short owner = (short)(unsigned char)selArmy[0x15];

                        if (owner == currentPlayer) {
                            short curX = *(short *)(selArmy + 0x00);
                            short curY = *(short *)(selArmy + 0x02);
                            short dx = clickTileX - curX;
                            short dy = clickTileY - curY;
                            short absDx = dx < 0 ? -dx : dx;
                            short absDy = dy < 0 ? -dy : dy;
                            short isAdjacent = (absDx <= 1 && absDy <= 1 && (absDx + absDy) > 0);

                            if (isAdjacent) {
                                /* Adjacent tile: move directly, no waypoint */
                                short movePts = (short)(unsigned char)selArmy[0x2e];
                                short unitCls = (short)(unsigned char)selArmy[0x16];
                                short cost = GetMovementCost(clickTileX, clickTileY, unitCls);

                                if (cost > 0 && movePts >= cost &&
                                    clickTileX >= 0 && clickTileX < sMapWidth &&
                                    clickTileY >= 0 && clickTileY < sMapHeight) {
                                    /* Brief movement animation: flash army
                                     * at old pos (to show it leaving) then
                                     * update and redraw at new pos */
                                    {
                                        /* Quick visual: redraw map (army blinks away) */
                                        long dummy;
                                        *(short *)(selArmy + 0x00) = clickTileX;
                                        *(short *)(selArmy + 0x02) = clickTileY;
                                        DrawMapInWindow(whichWindow);
                                        SetPort(whichWindow);
                                        Delay(4, &dummy);  /* ~66ms pause */
                                    }
                                    selArmy[0x2e] = (unsigned char)(movePts - cost);

                                    if (sOptHiddenMap) {
                                        short armyOwner = (short)(unsigned char)selArmy[0x15];
                                        FogReveal(armyOwner, clickTileX, clickTileY);
                                    }
                                    CheckAndResolveCombat(sSelectedArmy);

                                    /* Try merging with friendly army at destination */
                                    if (sSelectedArmy >= 0) {
                                        if (TryMergeArmies(sSelectedArmy)) {
                                            sSelectedArmy = -1;
                                        }
                                    }

                                    /* Auto-search ruins if hero on ruin */
                                    if (sSelectedArmy >= 0)
                                        TryAutoSearchRuin(sSelectedArmy);

                                    /* Auto-select next army if this one exhausted */
                                    if (sSelectedArmy >= 0) {
                                        armyCount = *(short *)(gs + 0x1602);
                                        if (sSelectedArmy < armyCount) {
                                            selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
                                            if ((short)(unsigned char)selArmy[0x2e] <= 0 &&
                                                *(short *)(selArmy + 0x32) == 0) {
                                                SelectNextArmy();
                                            }
                                        }
                                    }
                                }
                            } else {
                                /* Distant tile: set movement target */
                                short stepX = 0, stepY = 0;
                                short movePts = (short)(unsigned char)selArmy[0x2e];
                                *(short *)(selArmy + 0x32) = 1;
                                *(short *)(selArmy + 0x34) = clickTileX;
                                *(short *)(selArmy + 0x36) = clickTileY;

                                /* Execute one movement step immediately */
                                if (dx > 0) stepX = 1;
                                else if (dx < 0) stepX = -1;
                                if (dy > 0) stepY = 1;
                                else if (dy < 0) stepY = -1;

                                if ((stepX != 0 || stepY != 0) && movePts > 0) {
                                    short newX = curX + stepX;
                                    short newY = curY + stepY;
                                    short unitCls = (short)(unsigned char)selArmy[0x16];
                                    short cost = GetMovementCost(newX, newY, unitCls);

                                    if (cost > 0 && movePts >= cost &&
                                        newX >= 0 && newX < sMapWidth &&
                                        newY >= 0 && newY < sMapHeight) {
                                        sUndoArmyIdx = sSelectedArmy;
                                        sUndoFromX = curX;
                                        sUndoFromY = curY;
                                        sUndoMovePts = movePts;

                                        *(short *)(selArmy + 0x00) = newX;
                                        *(short *)(selArmy + 0x02) = newY;
                                        selArmy[0x2e] = (unsigned char)(movePts - cost);

                                        if (sOptHiddenMap) {
                                            short armyOwner = (short)(unsigned char)selArmy[0x15];
                                            FogReveal(armyOwner, newX, newY);
                                        }
                                        if (CheckAndResolveCombat(sSelectedArmy))
                                            sUndoArmyIdx = -1;

                                        /* Auto-search ruins if hero on ruin */
                                        if (sSelectedArmy >= 0)
                                            TryAutoSearchRuin(sSelectedArmy);
                                    } else if (cost == 0) {
                                        *(short *)(selArmy + 0x32) = 0;
                                    }
                                }

                                /* Check if reached destination */
                                if (sSelectedArmy >= 0) {
                                    armyCount = *(short *)(gs + 0x1602);
                                    if (sSelectedArmy < armyCount) {
                                        selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
                                        if (*(short *)(selArmy + 0x00) == clickTileX &&
                                            *(short *)(selArmy + 0x02) == clickTileY) {
                                            *(short *)(selArmy + 0x32) = 0;
                                        }
                                    }
                                }
                            }

                            InvalRect(&port);
                            if (*gOverviewWindow != 0) {
                                SetPort((WindowPtr)*gOverviewWindow);
                                InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                            }
                        }
                    } else {
                        /* No army and no selection: check for city click */
                        short cityCount = *(short *)(gs + 0x810);
                        short ci;
                        Boolean foundCity = false;
                        if (cityCount > 40) cityCount = 40;

                        for (ci = 0; ci < cityCount; ci++) {
                            unsigned char *city = gs + 0x812 + ci * 0x20;
                            short cx = *(short *)(city + 0x00);
                            short cy = *(short *)(city + 0x02);
                            if (cx == clickTileX && cy == clickTileY) {
                                /* Own city: show production dialog; enemy/neutral: show info */
                                if (*(short *)(city + 0x04) == currentPlayer)
                                    ShowCityProductionDialog(ci);
                                else
                                    ShowCityInfo(ci);
                                foundCity = true;
                                /* Redraw after modal closes */
                                SetPort(whichWindow);
                                InvalRect(&port);
                                break;
                            }
                        }

                        if (!foundCity) {
                            sSelectedArmy = -1;
                            InvalRect(&port);
                        }
                    }
                }
                doneMapClick: ;
            }
        } else if (gInfoWindow != NULL &&
                   whichWindow == (WindowPtr)*gInfoWindow) {
            /* Click in control panel (View 1008 layout).
             * Hit-test against the button zones. */
            Point localPt = event->where;
            Rect port = whichWindow->portRect;
            short lx, ly;
            SetPort(whichWindow);
            GlobalToLocal(&localPt);
            lx = localPt.h - port.left;
            ly = localPt.v - port.top;

            /* 3x3 scroll directional pad (right-aligned, matches drawing code) */
            if (lx >= (port.right - port.left) - 62 &&
                lx < (port.right - port.left) - 62 + 54 &&
                ly >= 10 && ly < 64) {
                short padX = (port.right - port.left) - 62;
                short sc = ((lx - padX) / 18) + ((ly - 10) / 18) * 3;
                /* Scroll map in the clicked direction */
                static const short sdx[9] = {-3, 0, 3, -3, 0, 3, -3, 0, 3};
                static const short sdy[9] = {-3,-3,-3,  0, 0, 0,  3, 3, 3};
                if (sc >= 0 && sc < 9) {
                    sViewportX += sdx[sc];
                    sViewportY += sdy[sc];
                    if (sViewportX < 0) sViewportX = 0;
                    if (sViewportY < 0) sViewportY = 0;
                    if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
                    if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
                    if (*gMainGameWindow != 0) {
                        SetPort((WindowPtr)*gMainGameWindow);
                        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                    }
                    if (*gOverviewWindow != 0) {
                        SetPort((WindowPtr)*gOverviewWindow);
                        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                    }
                }
            }
            /* Bottom shortcut slots (y=84, 4 buttons at 37px each) */
            else if (ly >= 84 && ly < 119 && lx >= 3 && lx < 3 + 4 * 37) {
                short slotIdx = (lx - 3) / 37;
                if (slotIdx >= 0 && slotIdx < NUM_SHORTCUT_SLOTS) {
                    short cmdIdx = sShortcutSlot[slotIdx];
                    unsigned short cmd = sButtonCommands[cmdIdx];
                    /* Flash */
                    Rect flashR;
                    SetRect(&flashR, 3 + slotIdx * 37, 84,
                            3 + slotIdx * 37 + 35, 119);
                    InvertRect(&flashR);
                    /* Dispatch */
                    if (cmd == 0x076C)      HandleMenuChoice((9L << 16) | 1);
                    else if (cmd == 0x0773) HandleMenuChoice((9L << 16) | 2);
                    else if (cmd == 0x057B) HandleMenuChoice((4L << 16) | 5);
                    else if (cmd == 0x0643) HandleMenuChoice((6L << 16) | 4);
                    else SysBeep(1);
                }
            }
        }
        break;

    case inSysWindow:
        SystemClick(event, whichWindow);
        break;
    }
}


/* ===================================================================
 * HandleUpdate — redraw window contents
 * =================================================================== */
static void HandleUpdate(EventRecord *event)
{
    WindowPtr win = (WindowPtr)event->message;
    Rect      r;

    SetPort(win);
    BeginUpdate(win);

    r = win->portRect;

    /* Skip EraseRect for game windows that paint every pixel, to avoid flash */
    if (gMainGameWindow != NULL && win == (WindowPtr)*gMainGameWindow) {
        /* Main game window: DrawMapInWindow covers all pixels */
    } else if (gOverviewWindow != NULL && win == (WindowPtr)*gOverviewWindow) {
        /* Minimap: DrawOverviewInWindow fills background */
    } else if (gInfoWindow != NULL && win == (WindowPtr)*gInfoWindow) {
        /* Info panel: PaintRect fills entire background */
    } else {
        EraseRect(&r);
    }

    if (gMainGameWindow != NULL &&
        win == (WindowPtr)*gMainGameWindow) {
        if (sMapLoaded) {
            DrawMapInWindow(win);
        } else {
            /* Show title art until a scenario is loaded */
            PicHandle pic = (PicHandle)GetResource('PICT', 1000);
            if (pic != NULL) {
                DrawPicture(pic, &r);
            }
            TextFont(3);
            TextSize(9);
            MoveTo(r.left + 4, r.bottom - 4);
            DrawString(GetCachedString(STR_MISC, 70, "\pUse File > Open to load a scenario"));
        }
    }
    else if (gOverviewWindow != NULL &&
             win == (WindowPtr)*gOverviewWindow) {
        if (sMapLoaded) {
            DrawOverviewInWindow(win);
        } else {
            TextFont(3);
            TextSize(9);
            MoveTo(r.left + 4, r.top + 14);
            DrawString(GetCachedString(STR_MISC, 71, "\pOverview"));
        }
    }
    else if (gInfoWindow != NULL &&
             win == (WindowPtr)*gInfoWindow) {
        /* Control panel matching View 1008 layout (224x114).
         * Top row: 5 command buttons (move/next/leave/guard/deselect)
         * Middle: cancel-path + disband (wide), 3x3 scroll pad, diplomacy
         * Bottom: 4 configurable shortcut slots from cicn 2000-2025 */
        short bx, by;
        Rect iconR;
        RGBColor bordCol = {0x8888, 0x8888, 0x8888};
        RGBColor hiliteCol = {0xFFFF, 0xFFFF, 0xFFFF};
        RGBColor shadowCol = {0x5555, 0x5555, 0x5555};

        /* Marble background for entire info panel */
        DrawMarbleBackground(&r);

        /* Shared button face color and corner radius for rounded 3D buttons */
        #define BTN_ROUND 6
        #define INFO_LEFT_PAD 7

        /* --- Row 1: 5 command buttons (22x22 each, 10px gap) --- */
        /* All top buttons shifted down 7px */
        {
            RGBColor btnFace = {0xCCCC, 0xCCCC, 0xCCCC};
            short cmdIds[5] = {0, 2, 1, 3, 4}; /* move, arrow, alert, guard, deselect */
            short ci;
            by = r.top + 10;  /* +7px down */
            bx = r.left + INFO_LEFT_PAD;
            for (ci = 0; ci < 5; ci++) {
                SetRect(&iconR, bx, by, bx + 22, by + 22);
                RGBForeColor(&btnFace);
                PaintRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
                RGBForeColor(&hiliteCol);
                PenSize(1, 1);
                FrameRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
                RGBForeColor(&shadowCol);
                MoveTo(iconR.right - 1, iconR.top + 2);
                LineTo(iconR.right - 1, iconR.bottom - 2);
                MoveTo(iconR.left + 2, iconR.bottom - 1);
                LineTo(iconR.right - 2, iconR.bottom - 1);
                SetRect(&iconR, bx, by, bx + 22, by + 22);
                if (sCtrlIconsLoaded && sCmdIcons[cmdIds[ci]] != NULL) {
                    Rect inner;
                    SetRect(&inner, bx + 3, by + 3, bx + 19, by + 19);
                    PlotCIcon(&inner, sCmdIcons[cmdIds[ci]]);
                }
                bx += 32;  /* 22 + 10px gap */
            }
        }

        /* --- Row 2: Cancel Path + ? diamond + Disband (same left pad as other rows) --- */
        {
            RGBColor btnFace = {0xCCCC, 0xCCCC, 0xCCCC};
            bx = r.left + INFO_LEFT_PAD;
            by = r.top + 41;  /* centered between top (10+22=32) and bottom (74) rows */

            /* Left button: cicn 1005 (56x23, icon centered) */
            SetRect(&iconR, bx, by, bx + 56, by + 23);
            RGBForeColor(&btnFace);
            PaintRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
            RGBForeColor(&hiliteCol);
            FrameRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
            RGBForeColor(&shadowCol);
            MoveTo(iconR.right - 1, iconR.top + 2);
            LineTo(iconR.right - 1, iconR.bottom - 2);
            MoveTo(iconR.left + 2, iconR.bottom - 1);
            LineTo(iconR.right - 2, iconR.bottom - 1);
            if (sStatusIconsLoaded && sStatusIcons[0] != NULL) {
                Rect inner;
                SetRect(&inner, bx + 3, by + 2, bx + 53, by + 21);
                PlotCIcon(&inner, sStatusIcons[0]);
            }

            /* ? diamond button (23x23, rotated square) with cicn 1020 centered */
            bx += 60;
            {
                short cx = bx + 11;  /* center x */
                short cy = by + 11;  /* center y */
                short half = 11;     /* half-diagonal */
                PolyHandle poly;

                poly = OpenPoly();
                MoveTo(cx, cy - half);
                LineTo(cx + half, cy);
                LineTo(cx, cy + half);
                LineTo(cx - half, cy);
                LineTo(cx, cy - half);
                ClosePoly();

                RGBForeColor(&btnFace);
                PaintPoly(poly);
                RGBForeColor(&hiliteCol);
                FramePoly(poly);
                RGBForeColor(&shadowCol);
                MoveTo(cx + half, cy);
                LineTo(cx, cy + half);
                LineTo(cx - half, cy);

                KillPoly(poly);

                /* cicn 1020 centered in diamond */
                if (sDiplomIcon != NULL) {
                    Rect inner;
                    SetRect(&inner, cx - 7, cy - 7, cx + 7, cy + 7);
                    PlotCIcon(&inner, sDiplomIcon);
                }
            }

            /* Right button: cicn 1006 (56x23, icon centered) */
            bx += 27;
            SetRect(&iconR, bx, by, bx + 56, by + 23);
            RGBForeColor(&btnFace);
            PaintRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
            RGBForeColor(&hiliteCol);
            FrameRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
            RGBForeColor(&shadowCol);
            MoveTo(iconR.right - 1, iconR.top + 2);
            LineTo(iconR.right - 1, iconR.bottom - 2);
            MoveTo(iconR.left + 2, iconR.bottom - 1);
            LineTo(iconR.right - 2, iconR.bottom - 1);
            if (sStatusIconsLoaded && sStatusIcons[1] != NULL) {
                Rect inner;
                SetRect(&inner, bx + 3, by + 2, bx + 53, by + 21);
                PlotCIcon(&inner, sStatusIcons[1]);
            }
        }

        /* --- 3x3 Scroll Directional Pad (right side, 16x16 buttons) --- */
        /* Shifted down 7px with the rest of the top section */
        {
            RGBColor btnFace = {0xCCCC, 0xCCCC, 0xCCCC};
            short si, sx, sy;
            short padX = r.right - 62;  /* right-aligned */
            short padY = r.top + 10;    /* +7px down */
            static const short padOrder[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
            for (si = 0; si < 9; si++) {
                sx = padX + (si % 3) * 18;
                sy = padY + (si / 3) * 18;
                SetRect(&iconR, sx, sy, sx + 16, sy + 16);
                RGBForeColor(&btnFace);
                PaintRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
                RGBForeColor(&hiliteCol);
                FrameRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
                RGBForeColor(&shadowCol);
                MoveTo(iconR.right - 1, iconR.top + 2);
                LineTo(iconR.right - 1, iconR.bottom - 2);
                MoveTo(iconR.left + 2, iconR.bottom - 1);
                LineTo(iconR.right - 2, iconR.bottom - 1);
                if (sCtrlIconsLoaded && sScrollIcons[padOrder[si]] != NULL) {
                    Rect inner;
                    SetRect(&inner, sx + 4, sy + 4, sx + 12, sy + 12);
                    PlotCIcon(&inner, sScrollIcons[padOrder[si]]);
                }
            }
        }

        /* --- Bottom row: 4 configurable shortcut slots (35x35, 2px more gap) --- */
        /* Moved up 10px total from old position (84 → 74) */
        by = r.top + 76;
        bx = r.left + INFO_LEFT_PAD;
        {
            RGBColor btnFace = {0xCCCC, 0xCCCC, 0xCCCC};
            short si;
            for (si = 0; si < NUM_SHORTCUT_SLOTS; si++) {
                short slotIdx = sShortcutSlot[si];
                SetRect(&iconR, bx, by, bx + 35, by + 35);
                RGBForeColor(&btnFace);
                PaintRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
                RGBForeColor(&hiliteCol);
                FrameRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
                RGBForeColor(&shadowCol);
                MoveTo(iconR.right - 1, iconR.top + 2);
                LineTo(iconR.right - 1, iconR.bottom - 2);
                MoveTo(iconR.left + 2, iconR.bottom - 1);
                LineTo(iconR.right - 2, iconR.bottom - 1);
                if (sCtrlIconsLoaded && slotIdx >= 0 && slotIdx < NUM_SHORTCUT_ICONS
                    && sShortcutIcons[slotIdx] != NULL) {
                    Rect inner;
                    SetRect(&inner, bx + 4, by + 4, bx + 31, by + 31);
                    PlotCIcon(&inner, sShortcutIcons[slotIdx]);
                }
                bx += 39;  /* 35 + 4px gap (was 2, now +2 more) */
            }
        }

        /* --- Bottom-right: Crossed swords button (cicn 4300) --- */
        /* Size = 3x3 arrow grid + 2px = 54x54.
         * Positioned 5px from bottom-right edges. */
        {
            RGBColor btnFace = {0xCCCC, 0xCCCC, 0xCCCC};
            short btnSz = 54;
            short sbx = r.right - 5 - btnSz;
            short sby = r.bottom - 5 - btnSz;
            SetRect(&iconR, sbx, sby, sbx + btnSz, sby + btnSz);
            RGBForeColor(&btnFace);
            PaintRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
            RGBForeColor(&hiliteCol);
            FrameRoundRect(&iconR, BTN_ROUND, BTN_ROUND);
            RGBForeColor(&shadowCol);
            MoveTo(iconR.right - 1, iconR.top + 2);
            LineTo(iconR.right - 1, iconR.bottom - 2);
            MoveTo(iconR.left + 2, iconR.bottom - 1);
            LineTo(iconR.right - 2, iconR.bottom - 1);

            /* Crossed swords icon from cicn 4300 */
            if (sSwordsIcon != NULL) {
                Rect inner;
                SetRect(&inner, sbx + 3, sby + 3, sbx + btnSz - 3, sby + btnSz - 3);
                PlotCIcon(&inner, sSwordsIcon);
            }
        }
    }
    else if (gStatusWindow != NULL &&
             win == (WindowPtr)*gStatusWindow) {
        /* Status window: current player gold/cities/armies on marble */

        /* Tile MARBLE background (PICT 1001) */
        DrawMarbleBackground(&r);

        if (*gGameState != 0) {
            unsigned char *gs = (unsigned char *)*gGameState;
            short curPlayer = *(short *)(gs + 0x110);
            short cityTotal = *(short *)(gs + 0x810);
            short ci;
            Str255 numStr;

            if (cityTotal > 40) cityTotal = 40;

            /* --- Cities, gold, income, armies with Illuria font --- */
            {
                RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                short gold, myCities = 0, myArmies = 0, myIncome = 0;
                short armyCount;
                short infoX = r.left + 15;
                short infoY = (r.top + r.bottom) / 2;
                short icoW = ABITS_CELL_W;
                short icoH = ABITS_CELL_H;
                Rect iconR;

                gold = *(short *)(gs + 0x186 + curPlayer * 0x14);

                /* Count cities (site_type == 0 only) and estimate income */
                for (ci = 0; ci < cityTotal; ci++) {
                    unsigned char *city = gs + 0x812 + ci * 0x20;
                    unsigned char siteType = city[0x18];
                    if (siteType == 0 && *(short *)(city + 0x04) == curPlayer) {
                        myCities++;
                        myIncome += 10;  /* base income per city */
                    }
                }

                /* Count armies (owner byte at army+0x15) */
                armyCount = *(short *)(gs + 0x1602);
                if (armyCount > 200) armyCount = 200;
                for (ci = 0; ci < armyCount; ci++) {
                    unsigned char *army = gs + 0x1604 + ci * 0x42;
                    if ((short)(unsigned char)army[0x15] == curPlayer)
                        myArmies++;
                }

                /* Illuria font (FOND 1602), size 17 → NFNT 3352 */
                TextFont(1602);
                TextSize(17);
                TextFace(0);
                RGBForeColor(&white);

                /* Helper macro: draw ABITS region by pixel coords at current infoX */
                #define DRAW_ABITS_RECT(sx, sy, sw, sh) \
                    do { \
                        if (sAbitsLoaded && sAbitsGW != NULL) { \
                            PixMapHandle _pm = GetGWorldPixMap(sAbitsGW); \
                            Rect _srcR, _dstR; \
                            RGBColor _savedBg; \
                            SetRect(&_srcR, (sx), (sy), (sx) + (sw), (sy) + (sh)); \
                            SetRect(&_dstR, infoX, infoY - (sh)/2, \
                                    infoX + (sw), infoY + (sh)/2); \
                            LockPixels(_pm); \
                            GetBackColor(&_savedBg); \
                            RGBBackColor(&sAbitsBgColor); \
                            CopyBits((BitMap *)*_pm, \
                                     &((GrafPtr)win)->portBits, \
                                     &_srcR, &_dstR, 36, NULL); \
                            RGBBackColor(&_savedBg); \
                            UnlockPixels(_pm); \
                            infoX += (sw) + 2; \
                        } \
                    } while(0)

                /* 1. Cities (castle icon at pixel 341,0 — 43px wide) + count */
                DRAW_ABITS_RECT(341, 0, 43, 20);
                MoveTo(infoX, infoY + 6);
                NumToString((long)myCities, numStr);
                DrawString(numStr);
                infoX += StringWidth(numStr) + 15;

                /* 2. Income (treasure chest at pixel 344,20 — 24px wide) + per-turn */
                DRAW_ABITS_RECT(344, 20, 24, 20);
                MoveTo(infoX, infoY + 6);
                NumToString((long)myIncome, numStr);
                DrawString(numStr);
                DrawString("\pgp");
                infoX += StringWidth(numStr) + StringWidth("\pgp") + 15;

                /* 3. Gold (coins icon at pixel 384,0 — 24px wide) + treasury */
                DRAW_ABITS_RECT(384, 0, 24, 20);
                MoveTo(infoX, infoY + 6);
                NumToString((long)gold, numStr);
                DrawString(numStr);
                DrawString("\pgp");
                infoX += StringWidth(numStr) + StringWidth("\pgp") + 15;

                /* 4. Armies (hand icon at pixel 384,20 — 32px wide) + count */
                DRAW_ABITS_RECT(384, 20, 32, 20);
                MoveTo(infoX, infoY + 6);
                NumToString((long)myArmies, numStr);
                DrawString(numStr);
                DrawString("\pgp");

                #undef DRAW_ABITS_RECT
            }
        }
    }

    EndUpdate(win);
}


/* ===================================================================
 * main — Application entry point
 * =================================================================== */
int main(void)
{
    EventRecord event;

    /* Classic Mac OS Toolbox initialization sequence */
    InitGraf(&qd.thePort);
    InitFonts();
    InitWindows();
    InitMenus();
    TEInit();
    InitDialogs(NULL);
    FlushEvents(everyEvent, 0);
    InitCursor();

    /* Initialize sound system early so first sound plays without delay */
    InitSoundSystem();
    InitMusicSystem();

    /* Pre-load resource data tables */
    LoadDATMasterStrings();
    LoadDATItemDefs();

    /* === Startup Movie === */
    {
        OSErr       err;
        FSSpec      movieSpec;
        short       movieResFile = 0;
        Movie       theMovie = NULL;
        short       movieResID = 0;
        Boolean     wasChanged;
        Rect        movieBox;
        WindowPtr   movieWin = NULL;

        /* EnterMovies at startup, keep QT alive for PICT decompression.
         * ExitMovies is called at app quit, not here. */
        err = EnterMovies();
        if (err == noErr) {
            /* Find "Startup movie" in the same folder as the app.
             * Use the app's own vRefNum/dirID (set by system on launch). */
            short mvRefNum;
            long mvDirID;
            err = HGetVol(NULL, &mvRefNum, &mvDirID);
            if (err == noErr)
                err = FSMakeFSSpec(mvRefNum, mvDirID, "\pStartup movie", &movieSpec);
            if (err == noErr)
                err = OpenMovieFile(&movieSpec, &movieResFile, fsRdPerm);
            if (err == noErr) {
                err = NewMovieFromFile(&theMovie, movieResFile, &movieResID,
                                       NULL, newMovieActive, &wasChanged);
                CloseMovieFile(movieResFile);
            }
            /* Debug: show error if movie failed to load */
            if (err != noErr) {
                Str255 errStr;
                NumToString((long)err, errStr);
                ParamText("\pStartup movie error:", errStr, "\p", "\p");
                Alert(1000, NULL);  /* reuse file-not-found alert */
            }
            if (err == noErr && theMovie != NULL) {
                Rect screenRect;
                EventRecord movieEvt;

                GetMovieBox(theMovie, &movieBox);
                OffsetRect(&movieBox, -movieBox.left, -movieBox.top);

                /* Center movie on screen */
                screenRect = qd.screenBits.bounds;
                OffsetRect(&movieBox,
                    (screenRect.right - movieBox.right) / 2,
                    (screenRect.bottom - movieBox.bottom) / 2);

                movieWin = NewCWindow(NULL, &movieBox, "\p", true,
                                      plainDBox, (WindowPtr)-1L, false, 0);
                if (movieWin != NULL) {
                    SetPort(movieWin);
                    SetMovieGWorld(theMovie, (CGrafPtr)movieWin, NULL);
                    SetMovieBox(theMovie, &movieWin->portRect);
                    GoToBeginningOfMovie(theMovie);
                    StartMovie(theMovie);

                    /* Play until done or user interrupts */
                    while (!IsMovieDone(theMovie)) {
                        MoviesTask(theMovie, 0);
                        if (WaitNextEvent(mDownMask | keyDownMask, &movieEvt, 0, NULL)) {
                            if (movieEvt.what == mouseDown ||
                                movieEvt.what == keyDown)
                                break;
                        }
                    }
                    StopMovie(theMovie);
                    DisposeWindow(movieWin);
                }
                DisposeMovie(theMovie);
            }
            /* Don't ExitMovies here — keep QT alive for PICT decompression */
        }
    }

    /* Title music */
    LoadAndPlayMusic(MUSIC_STATE_TITLE);

    /* === Splash Screen === */
    {
        PicHandle   splashPic;
        WindowPtr   splashWin;
        Rect        picRect, winRect;
        EventRecord splashEvt;

        splashPic = (PicHandle)GetResource('PICT', 1000);
        if (splashPic != NULL) {
            picRect = (*splashPic)->picFrame;
            {
                short pw = picRect.right - picRect.left;
                short ph = picRect.bottom - picRect.top;
                short sx = (qd.screenBits.bounds.right - pw) / 2;
                short sy = (qd.screenBits.bounds.bottom - ph) / 2;
                SetRect(&winRect, sx, sy, sx + pw, sy + ph);
            }
            splashWin = NewCWindow(NULL, &winRect, "\p", true,
                                   plainDBox, (WindowPtr)-1L, false, 0);
            if (splashWin != NULL) {
                SetPort(splashWin);
                DrawPicture(splashPic, &splashWin->portRect);
                while (1) {
                    WaitNextEvent(everyEvent, &splashEvt, 60, NULL);
                    if (splashEvt.what == mouseDown ||
                        splashEvt.what == keyDown)
                        break;
                }
                DisposeWindow(splashWin);
                InvalidateAllGameWindows();
            }
        }
    }

    /* === 256-Color Switch === */
    /* Force 256-color (8-bit) mode for correct palette-quantized rendering.
       PlotCIcon maps cicn CLUT colors to nearest palette entries at 8-bit,
       producing the authentic look. At higher depths, raw CLUT colors are used. */
    {
        GDHandle mainGD = GetMainDevice();
        short curDepth = (**((**mainGD).gdPMap)).pixelSize;
        if (curDepth != 8) {
            if (HasDepth(mainGD, 8, 0, 0)) {
                sOriginalDepth = curDepth;
                SetDepth(mainGD, 8, 0, 0);
            }
        }
    }

    /* Allocate game data buffers before scenario selection */
    *gGameState = (pint)NewPtrClear(0x2FCC);
    *gMapTiles  = (pint)NewPtrClear(0x8880);

    /* === Load marble background early (needed by dialogs) === */
    sMarbleGW = LoadPICTIntoGWorld(1001);

    /* === Build menus early so File > Quit is available from scenario selection === */
    {
        MenuHandle m;

        /* 1 - Apple menu */
        m = NewMenu(1, "\p\024");
        AppendMenu(m, "\pAbout Warlords II...");
        AppendResMenu(m, 'DRVR');
        InsertMenu(m, 0);

        /* 2 - File */
        m = NewMenu(2, "\pFile");
        AppendMenu(m, "\pNew;Open.../O;(-;Close/W;Save/S;Save As...;Revert;(-;Quit/Q");
        InsertMenu(m, 0);

        /* 3 - Edit */
        m = NewMenu(3, "\pEdit");
        AppendMenu(m, "\pUndo/Z;(-;Cut/X;Copy/C;Paste/V;Clear");
        InsertMenu(m, 0);

        DrawMenuBar();
    }

    /* === Scenario Selection Screen (before creating game windows) === */
    {
        Boolean scenarioLoaded = ShowScenarioSelection();
        if (!scenarioLoaded) {
            /* Fallback: let user pick a file via StandardGetFile */
            TryLoadScenario();
        }
    }

    /* Scan for available army sets before showing game setup */
    ScanArmySets();

    /* === Game Setup Dialog === */
    if (sMapLoaded) {
        ShowGameSetup();
    }

    /* === Create windows and menus === */
    {
        Rect    mainRect, overRect, infoRect;

        /* Add remaining game menus (Apple/File/Edit already created before scenario selection) */
        {
            MenuHandle m;

            /* 4 - Orders */
            m = NewMenu(4, "\pOrders");
            AppendMenu(m, "\pGroup Stack/G;Ungroup;(-;Move Group/M;Move All Armies;Cancel Path");
            AppendMenu(m, "\p(-;Next Group/N;Leave Group/L;Defend;Deselect Group");
            AppendMenu(m, "\p(-;Show current army;Show army's shadow");
            AppendMenu(m, "\p(-;Fight Order...;Disband Group;Change Signpost...;(-;Resign...");
            InsertMenu(m, 0);

            /* 5 - Reports */
            m = NewMenu(5, "\pReports");
            AppendMenu(m, "\pShow Report.../R;(-;Armies...;Cities...;Gold...;Production...;Winning...");
            AppendMenu(m, "\p(-;Diplomacy...;Quest...");
            InsertMenu(m, 0);

            /* 6 - Heroes */
            m = NewMenu(6, "\pHeroes");
            AppendMenu(m, "\pInspect Heroes...;Plant Flag;Hero Levels...;Search...");
            InsertMenu(m, 0);

            /* 7 - View */
            m = NewMenu(7, "\pView");
            AppendMenu(m, "\pArmy Bonuses.../B;Items.../I;(-;Build...;Cities...;Production.../P;Vectoring...;Ruins...;Stack.../K");
            InsertMenu(m, 0);

            /* 8 - History */
            m = NewMenu(8, "\pHistory");
            AppendMenu(m, "\pShow History.../H;(-;Cities...;Events...;Gold...;Winners...;(-;Triumphs.../T");
            InsertMenu(m, 0);

            /* 9 - Game */
            m = NewMenu(9, "\pGame");
            AppendMenu(m, "\pEnd Turn/E;Save and End Turn;(-;Strategy Map;Control Window;Info Window;Clean Up Windows");
            AppendMenu(m, "\p(-;Game Settings...;Sound Volumes...;Shortcuts...");
            InsertMenu(m, 0);

            DrawMenuBar();
        }

        /* Main game window — zoomDocProc (8) gives close box + zoom box + grow box.
         * Extends to x=512 to fill space left of minimap (at x=514). */
        SetRect(&mainRect, 2, 40, 512, 382);
        *gMainGameWindow = (pint)NewCWindow(
            NULL, &mainRect,
            "\pWarlords II", true,
            8 /* zoomDocProc */, (WindowPtr)-1L, true, 0);

        /* Create native Mac scrollbar controls for the main game window */
        if (*gMainGameWindow != 0) {
            Rect port = ((WindowPtr)*gMainGameWindow)->portRect;
            Rect vsbRect, hsbRect;
            short hLeft = port.left + SHIELD_AREA_W + 50;

            SetRect(&vsbRect, port.right - SCROLLBAR_W, port.top,
                    port.right, port.bottom - SCROLLBAR_H + 1);
            sVScrollBar = NewControl((WindowPtr)*gMainGameWindow, &vsbRect,
                                     "\p", true, 0, 0, 100, scrollBarProc, 0);

            SetRect(&hsbRect, hLeft, port.bottom - SCROLLBAR_H,
                    port.right - SCROLLBAR_W + 1, port.bottom);
            sHScrollBar = NewControl((WindowPtr)*gMainGameWindow, &hsbRect,
                                     "\p", true, 0, 0, 100, scrollBarProc, 0);
        }

        /* Game palette (pltt 1000) applied after all windows are created below. */

        /* Overview (minimap) window — floating palette (WDEF 3 = Infinity Windoid)
         * procID = WDEF_ID * 16 + variant; WDEF 3 * 16 = 48
         * The original game uses TTripleSizeFloatWindow (3 zoom levels).
         * We draw a custom zoom button in the top-right of the content area.
         * goAwayFlag=true gives a close box on the palette. */
        sMinimapZoom = 1;  /* Start at medium zoom */
        {
            short mdW = sMapWidth * 2;
            short mdH = sMapHeight * 2;
            if (mdW > 300) mdW = 300;
            if (mdH > 350) mdH = 350;
            SetRect(&overRect, 516, 35, 516 + mdW, 35 + mdH);
        }
        *gOverviewWindow = (pint)NewCWindow(
            NULL, &overRect,
            "\pOverview", true,
            48, (WindowPtr)-1L, true, 0);

        /* Info panel window — floating palette matching View 1008 layout.
         * Width matches the minimap window above it. */
        {
            short infoTop = overRect.bottom + 2;
            short infoW = overRect.right - overRect.left;
            SetRect(&infoRect, 514, infoTop, 514 + infoW, infoTop + 124);
        }
        *gInfoWindow = (pint)NewCWindow(
            NULL, &infoRect,
            "\pInfo", true,
            48, (WindowPtr)-1L, true, 0);

        /* Status window — gold/cities/armies on marble, below main map.
         * procID 48 = floating palette (WDEF 3) with small title bar.
         * +12px gap below main map to avoid overlap. */
        {
            Rect statusRect;
            SetRect(&statusRect, 2, mainRect.bottom + 19, 343, mainRect.bottom + 99);
            *gStatusWindow = (pint)NewCWindow(
                NULL, &statusRect,
                "\pStatus", true,
                48, (WindowPtr)-1L, true, 0);
        }
    }

    /* Apply game palette (pltt 1000 "Main") to the main game window.
     * ActivatePalette forces the device color table to match, which
     * affects all windows on the same screen. */
    if (*gMainGameWindow != 0) {
        PaletteHandle gamePal = GetNewPalette(1000);
        if (gamePal != NULL) {
            SetPalette((WindowPtr)*gMainGameWindow, gamePal, true);
            ActivatePalette((WindowPtr)*gMainGameWindow);
        }
    }

    /* Bring game windows to front */
    if (*gMainGameWindow != 0)
        SelectWindow((WindowPtr)*gMainGameWindow);

    /* === Load status bar icons (cicn 1005-1009 from app resource fork) === */
    {
        short si;
        for (si = 0; si < 5; si++)
            sStatusIcons[si] = GetCIcon(1005 + si);
        sStatusIconsLoaded = true;
    }

    /* === Load ABITS sprite sheet (PICT 10004) for status bar icons === */
    /* 544x40 px, 34 cols x 2 rows of 16x20 cells.
     * Col 28 row 0 = cities pennant, col 29 row 0 = gold coins,
     * col 28 row 1 = treasure chest, col 29 row 1 = army icon. */
    {
        PicHandle pic = GetPicture(10004);
        if (pic != NULL) {
            Rect picRect = (**pic).picFrame;
            short pw = picRect.right - picRect.left;
            short ph = picRect.bottom - picRect.top;
            Rect bounds;
            OSErr perr;
            SetRect(&bounds, 0, 0, pw, ph);
            perr = NewGWorld(&sAbitsGW, 0, &bounds, NULL, NULL, 0);
            if (perr == noErr && sAbitsGW != NULL) {
                CGrafPtr sp; GDHandle sd;
                GetGWorld(&sp, &sd);
                SetGWorld(sAbitsGW, NULL);
                LockPixels(GetGWorldPixMap(sAbitsGW));
                EraseRect(&bounds);
                DrawPicture(pic, &bounds);
                GetCPixel(0, 0, &sAbitsBgColor);
                UnlockPixels(GetGWorldPixMap(sAbitsGW));
                SetGWorld(sp, sd);
                sAbitsLoaded = true;
            }
        }
    }

    /* === Load sprite sheets from asset folders === */
    LoadTerrainSprites();
    LoadArmySprites();
    LoadCitySprites();
    LoadShieldIcons();
    /* RemapShieldColors() disabled — raw cicn CLUT colors from terrain file
     * look more accurate than palette-snapped versions at >8-bit depth */
    LoadButtonIcons();
    LoadDialogIcons();

    /* Load minimap crosshair cursor (crsr 1001, hotspot 5,7) */
    sDefaultCursor = GetCCursor(1000);
    sMinimapCursor = GetCCursor(1001);
    sTargetCursor  = GetCCursor(1002);
    sHandCursor    = GetCCursor(1003);

    /* === Force initial draw of all game windows before dialogs === */
    if (sMapLoaded && *gMainGameWindow != 0) {
        SetPort((WindowPtr)*gMainGameWindow);
        DrawMapInWindow((WindowPtr)*gMainGameWindow);
    }
    if (*gOverviewWindow != 0) {
        SetPort((WindowPtr)*gOverviewWindow);
        DrawOverviewInWindow((WindowPtr)*gOverviewWindow);
    }

    /* === First turn: turn splash, hero hire, army selection === */
    if (sMapLoaded && *gGameState != 0) {
        unsigned char *gs = (unsigned char *)*gGameState;
        short startPlayer = *(short *)(gs + 0x110);

        /* "Let the war begin!" voice after game setup completes */
        PlayVoice(SND_VBEGIN);

        /* Turn 1 announcement splash (castle gate with faction name) */
        PlaySound(SND_CHORD);
        ShowTurnSplash(startPlayer);

        /* Hero offer then army selection */
        ShowHeroHire(startPlayer, true);
        ShowArmySelection(startPlayer);
    }

    /* Force-redraw all game windows before entering event loop.
     * Modal dialogs (turn splash, hero hire, army selection) leave
     * windows exposed but not yet painted. */
    InvalidateAllGameWindows();
    {
        EventRecord flushEvt;
        short i;
        for (i = 0; i < 8; i++)
            if (WaitNextEvent(updateMask, &flushEvt, 0, NULL))
                HandleUpdate(&flushEvt);
    }

    /* Main event loop */
    while (!sDone) {
        WaitNextEvent(everyEvent, &event, 6, NULL);

        /* Cursor management: context-sensitive cursors */
        {
            Point cursPos;
            WindowPtr cursWin;
            short partCode;
            GetMouse(&cursPos);
            LocalToGlobal(&cursPos);
            partCode = FindWindow(cursPos, &cursWin);
            if (partCode == inContent && gOverviewWindow != NULL &&
                *gOverviewWindow != 0 && cursWin == (WindowPtr)*gOverviewWindow &&
                sMinimapCursor != NULL) {
                SetCCursor(sMinimapCursor);
            } else if (partCode == inContent && gMainGameWindow != NULL &&
                       *gMainGameWindow != 0 && cursWin == (WindowPtr)*gMainGameWindow) {
                /* Main map: Option held = hand cursor (pan mode),
                 * edge zone = hand cursor, center = game/target cursor */
                Point lp = cursPos;
                Rect port = cursWin->portRect;
                Boolean optionHeld;
                SetPort(cursWin);
                GlobalToLocal(&lp);
                /* Use event modifiers for Option key detection (works for all
                 * event types on classic Mac OS, including null events) */
                optionHeld = (event.modifiers & optionKey) != 0;
                if (optionHeld) {
                    if (sHandCursor) SetCCursor(sHandCursor);
                    else InitCursor();
                } else if (lp.h < port.left + 8 || lp.h > port.right - 8 ||
                    lp.v < port.top + 8 || lp.v > port.bottom - 8) {
                    if (sHandCursor) SetCCursor(sHandCursor);
                    else InitCursor();
                } else if (sSelectedArmy >= 0 && sTargetCursor) {
                    SetCCursor(sTargetCursor);
                } else if (sDefaultCursor) {
                    SetCCursor(sDefaultCursor);
                } else {
                    InitCursor();
                }
            } else {
                InitCursor();
            }
        }

        /* Edge scrolling: when mouse is near window edges, auto-scroll */
        if (event.what == nullEvent && sMapLoaded &&
            gMainGameWindow != NULL && *gMainGameWindow != 0) {
            WindowPtr mw = (WindowPtr)*gMainGameWindow;
            if (mw == FrontWindow()) {
                Point mousePt;
                Rect port = mw->portRect;
                short edgeZone = 8;
                Boolean edgeScrolled = false;
                short scrollAmt = 2;

                GetMouse(&mousePt);
                SetPort(mw);
                GlobalToLocal(&mousePt);

                if (mousePt.h >= port.left && mousePt.h < port.right &&
                    mousePt.v >= port.top && mousePt.v < port.bottom) {
                    if (mousePt.h < port.left + edgeZone) {
                        sViewportX -= scrollAmt; edgeScrolled = true;
                    } else if (mousePt.h > port.right - SCROLLBAR_W - edgeZone) {
                        sViewportX += scrollAmt; edgeScrolled = true;
                    }
                    if (mousePt.v < port.top + edgeZone) {
                        sViewportY -= scrollAmt; edgeScrolled = true;
                    } else if (mousePt.v > port.bottom - SCROLLBAR_H - edgeZone) {
                        sViewportY += scrollAmt; edgeScrolled = true;
                    }
                }

                if (edgeScrolled) {
                    if (sViewportX < 0) sViewportX = 0;
                    if (sViewportY < 0) sViewportY = 0;
                    if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
                    if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
                    InvalRect(&port);
                    if (*gOverviewWindow != 0) {
                        SetPort((WindowPtr)*gOverviewWindow);
                        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                    }
                    /* Dismiss tooltip on scroll */
                    if (sTooltipWin) { DisposeWindow(sTooltipWin); sTooltipWin = NULL; }
                }

                /* Terrain tooltip on hover + status bar coordinates */
                if (!edgeScrolled && *gGameState != 0) {
                    short tileX = mousePt.h / TERRAIN_TILE_W + sViewportX;
                    short tileY = mousePt.v / TERRAIN_TILE_H + sViewportY;

                    /* Update status bar coordinates (don't reset on click) */
                    if (tileX >= 0 && tileX < sMapWidth &&
                        tileY >= 0 && tileY < sMapHeight &&
                        (tileX != sStatusTileX || tileY != sStatusTileY)) {
                        sStatusTileX = tileX;
                        sStatusTileY = tileY;
                        /* Tile coords tracked for status display */
                    }

                    if (tileX != sTooltipTileX || tileY != sTooltipTileY) {
                        /* Mouse moved to new tile: reset hover timer */
                        sTooltipTileX = tileX;
                        sTooltipTileY = tileY;
                        sTooltipHoverStart = TickCount();
                        if (sTooltipWin) { DisposeWindow(sTooltipWin); sTooltipWin = NULL; }
                    } else if (sTooltipWin == NULL &&
                               TickCount() - sTooltipHoverStart > 30 &&
                               tileX >= 0 && tileX < sMapWidth &&
                               tileY >= 0 && tileY < sMapHeight) {
                        /* Show tooltip after ~0.5 sec hover */
                        unsigned char *gs = (unsigned char *)*gGameState;
                        unsigned char *mapData = (unsigned char *)*gMapTiles;
                        short terrainIdx = (short)(unsigned char)mapData[(tileY * sMapWidth + tileX) * 2];
                        short terrainType = (short)(unsigned char)gs[terrainIdx + 0x711];
                        short moveCost = 0;
                        const unsigned char *tName;
                        static const unsigned char *terrNames[] = {
                            "\pPlains", "\pForest", "\pSwamp", "\pHills",
                            "\pMountains", "\pShore", "\pBridge", "\pRoad",
                            "\pRiver", "\pSea"
                        };
                        Rect ttR;
                        Point globalMouse;
                        Str255 costStr;

                        if (terrainType <= 9)
                            tName = terrNames[terrainType];
                        else if (terrainType == 10)
                            tName = "\pRoad";
                        else if (terrainType == 11)
                            tName = "\pWater";
                        else
                            tName = "\pUnknown";

                        /* Calculate movement cost for selected army */
                        if (sSelectedArmy >= 0) {
                            unsigned char *selArmy = gs + 0x1604 + sSelectedArmy * 0x42;
                            short uc = (short)(unsigned char)selArmy[0x16];
                            moveCost = GetMovementCost(tileX, tileY, uc);
                        }

                        /* Position tooltip near cursor */
                        GetMouse(&globalMouse);
                        LocalToGlobal(&globalMouse);
                        SetRect(&ttR, 0, 0, 120, moveCost > 0 ? 36 : 22);
                        OffsetRect(&ttR, globalMouse.h + 12, globalMouse.v + 12);

                        sTooltipWin = NewCWindow(NULL, &ttR, "\p", true,
                                                  plainDBox, (WindowPtr)-1, false, 0);
                        if (sTooltipWin) {
                            RGBColor bg = {0xFFFF, 0xFFFF, 0xCCCC};
                            RGBColor black = {0, 0, 0};
                            SetPort(sTooltipWin);
                            RGBForeColor(&bg);
                            PaintRect(&sTooltipWin->portRect);
                            RGBForeColor(&black);
                            FrameRect(&sTooltipWin->portRect);
                            TextFont(3); TextSize(9); TextFace(bold);
                            MoveTo(4, 12);
                            DrawString(tName);
                            if (moveCost > 0) {
                                TextFace(0);
                                MoveTo(4, 26);
                                DrawString(GetCachedString(STR_MISC, 72, "\pMove: "));
                                NumToString((long)moveCost, costStr);
                                DrawString(costStr);
                            } else if (moveCost == 0 && sSelectedArmy >= 0) {
                                TextFace(0);
                                MoveTo(4, 26);
                                DrawString(GetCachedString(STR_MISC, 63, "\pImpassable"));
                            }
                        }
                    }
                }
            }
        }

        /* Blink timer: invalidate selected army tile every 15 ticks */
        if (event.what == nullEvent && sSelectedArmy >= 0 &&
            sMapLoaded && gMainGameWindow != NULL && *gMainGameWindow != 0 &&
            *gGameState != 0) {
            static unsigned long sLastBlinkPhase = 0;
            unsigned long curPhase = (TickCount() / 15) & 1;
            if (curPhase != sLastBlinkPhase) {
                sLastBlinkPhase = curPhase;
                {
                    unsigned char *gs2 = (unsigned char *)*gGameState;
                    short ac2 = *(short *)(gs2 + 0x1602);
                    if (sSelectedArmy < ac2) {
                        unsigned char *sa2 = gs2 + 0x1604 + sSelectedArmy * 0x42;
                        short sax = *(short *)(sa2 + 0x00);
                        short say = *(short *)(sa2 + 0x02);
                        WindowPtr mw2 = (WindowPtr)*gMainGameWindow;
                        Rect bInv;
                        short bsx = mw2->portRect.left + (sax - sViewportX) * TERRAIN_TILE_W;
                        short bsy = mw2->portRect.top  + (say - sViewportY) * TERRAIN_TILE_H;
                        SetRect(&bInv, bsx - 2, bsy - 2,
                                bsx + TERRAIN_TILE_W + 2, bsy + TERRAIN_TILE_H + 2);
                        SetPort(mw2);
                        InvalRect(&bInv);
                    }
                }
            }
        }

        /* Dismiss tooltip on any interaction */
        if (event.what == mouseDown || event.what == keyDown || event.what == autoKey) {
            if (sTooltipWin) { DisposeWindow(sTooltipWin); sTooltipWin = NULL; }
            sTooltipTileX = -1;
        }

        switch (event.what) {
        case mouseDown:
            HandleMouseDown(&event);
            break;

        case keyDown:
        case autoKey:
        {
            char key = event.message & charCodeMask;
            if (event.modifiers & cmdKey) {
                /* Check Cmd+Shift combinations FIRST (before plain Cmd+key) */
                if ((event.modifiers & shiftKey) && (key == 'e' || key == 'E')) {
                    /* Cmd+Shift+E = Save and End Turn */
                    HandleMenuChoice((9L << 16) | 2);
                } else if ((event.modifiers & shiftKey) && (key == 'g' || key == 'G')) {
                    /* Cmd+Shift+G = Ungroup */
                    HandleMenuChoice((4L << 16) | 2);
                } else if ((event.modifiers & shiftKey) && (key == 'm' || key == 'M')) {
                    /* Cmd+Shift+M = Move All Armies */
                    HandleMenuChoice((4L << 16) | 5);
                } else if ((event.modifiers & shiftKey) && (key == 'd' || key == 'D')) {
                    /* Cmd+Shift+D = Diplomacy */
                    HandleMenuChoice((5L << 16) | 8);
                } else if ((event.modifiers & shiftKey) && (key == 'h' || key == 'H')) {
                    /* Cmd+Shift+H = Inspect Heroes */
                    HandleMenuChoice((6L << 16) | 1);
                } else if ((event.modifiers & shiftKey) && (key == 'r' || key == 'R')) {
                    /* Cmd+Shift+R = Ruins */
                    HandleMenuChoice((7L << 16) | 8);
                } else if ((event.modifiers & shiftKey) && (key == 'p' || key == 'P')) {
                    /* Cmd+Shift+P = Plant Flag */
                    HandleMenuChoice((6L << 16) | 2);
                } else if ((event.modifiers & shiftKey) && (key == 'l' || key == 'L')) {
                    /* Cmd+Shift+L = Hero Levels */
                    HandleMenuChoice((6L << 16) | 3);
                } else if ((event.modifiers & shiftKey) && (key == 's' || key == 'S')) {
                    /* Cmd+Shift+S = Search */
                    HandleMenuChoice((6L << 16) | 4);
                } else if ((event.modifiers & shiftKey) && (key == 'q' || key == 'Q')) {
                    /* Cmd+Shift+Q = Quest */
                    HandleMenuChoice((5L << 16) | 10);
                } else if (key == 'q' || key == 'Q') {
                    sDone = true;
                } else if (key == 'o' || key == 'O') {
                    if (!ShowScenarioSelection())
                        TryLoadScenario();
                } else {
                    HandleMenuChoice(MenuKey(key));
                }
            } else if (sMapLoaded) {
                Boolean scrolled = false;

                /* --- Army movement: arrow keys, QWEASDZXC grid, numpad ---
                 * Arrow keys move selected army in cardinal directions.
                 * QWEASDZXC layout (matches original):
                 *   Q(NW)  W(N)   E(NE)
                 *   A(W)   S(skip) D(E)
                 *   Z(SW)  X(S)   C(SE)
                 * Numpad: 7=NW 8=N 9=NE / 4=W 5=skip 6=E / 1=SW 2=S 3=SE */
                if (sSelectedArmy >= 0 && *gGameState != 0) {
                    short moveDx = 0, moveDy = 0;
                    Boolean isMove = false, isSkip = false;

                    /* Arrow keys = cardinal movement */
                    if (key == 0x1C) { moveDx = -1; isMove = true; }      /* Left=W */
                    else if (key == 0x1D) { moveDx = 1; isMove = true; }  /* Right=E */
                    else if (key == 0x1E) { moveDy = -1; isMove = true; } /* Up=N */
                    else if (key == 0x1F) { moveDy = 1; isMove = true; }  /* Down=S */
                    /* QWEASDZXC movement grid */
                    else if (key == 'q' || key == 'Q') { moveDx = -1; moveDy = -1; isMove = true; }
                    else if (key == 'w' || key == 'W') { moveDy = -1; isMove = true; }
                    else if (key == 'e' || key == 'E') { moveDx = 1; moveDy = -1; isMove = true; }
                    else if (key == 'a' || key == 'A') { moveDx = -1; isMove = true; }
                    else if (key == 's' || key == 'S') { isSkip = true; }
                    else if (key == 'd' || key == 'D') { moveDx = 1; isMove = true; }
                    else if (key == 'z' || key == 'Z') { moveDx = -1; moveDy = 1; isMove = true; }
                    else if (key == 'x' || key == 'X') { moveDy = 1; isMove = true; }
                    else if (key == 'c' || key == 'C') { moveDx = 1; moveDy = 1; isMove = true; }
                    /* Numpad 1-9 */
                    else if (key >= '1' && key <= '9') {
                        static const short numDx[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
                        static const short numDy[] = { 1, 1, 1,  0, 0, 0, -1,-1,-1};
                        short ni = key - '1';
                        if (ni == 4) { isSkip = true; }
                        else { moveDx = numDx[ni]; moveDy = numDy[ni]; isMove = true; }
                    }

                    if (isSkip) {
                        /* S / numpad 5 = skip (deduct all movement, advance to next) */
                        unsigned char *gs2 = (unsigned char *)*gGameState;
                        short ac = *(short *)(gs2 + 0x1602);
                        if (sSelectedArmy < ac) {
                            unsigned char *a = gs2 + 0x1604 + sSelectedArmy * 0x42;
                            a[0x2e] = 0;
                            SelectNextArmy();
                        }
                        scrolled = true;
                    }
                    else if (isMove && MoveSelectedArmyBy(moveDx, moveDy)) {
                        /* Center viewport on army if it's near edge */
                        if (sSelectedArmy >= 0) {
                            unsigned char *gs2 = (unsigned char *)*gGameState;
                            short ac = *(short *)(gs2 + 0x1602);
                            if (sSelectedArmy < ac) {
                                unsigned char *a = gs2 + 0x1604 + sSelectedArmy * 0x42;
                                short ax = *(short *)(a + 0x00);
                                short ay = *(short *)(a + 0x02);
                                short tw = 10, th = 10;
                                if (*gMainGameWindow != 0) {
                                    Rect wp = ((WindowPtr)*gMainGameWindow)->portRect;
                                    tw = (wp.right - wp.left - SCROLLBAR_W) / TERRAIN_TILE_W;
                                    th = (wp.bottom - wp.top - SCROLLBAR_H) / TERRAIN_TILE_H;
                                }
                                if (ax < sViewportX + 2 || ax >= sViewportX + tw - 2 ||
                                    ay < sViewportY + 2 || ay >= sViewportY + th - 2) {
                                    sViewportX = ax - tw / 2;
                                    sViewportY = ay - th / 2;
                                }
                            }
                        }
                        scrolled = true;
                    }
                }

                /* --- Non-movement keys --- */
                if (key == ' ') {
                    /* Space = center on selected army (original behavior) */
                    if (sSelectedArmy >= 0 && *gGameState != 0) {
                        unsigned char *gs = (unsigned char *)*gGameState;
                        short ac = *(short *)(gs + 0x1602);
                        if (sSelectedArmy < ac) {
                            unsigned char *sa = gs + 0x1604 + sSelectedArmy * 0x42;
                            short tw = 10, th = 10;
                            if (*gMainGameWindow != 0) {
                                Rect wp = ((WindowPtr)*gMainGameWindow)->portRect;
                                tw = (wp.right - wp.left - SCROLLBAR_W) / TERRAIN_TILE_W;
                                th = (wp.bottom - wp.top - SCROLLBAR_H) / TERRAIN_TILE_H;
                            }
                            sViewportX = *(short *)(sa + 0x00) - tw / 2;
                            sViewportY = *(short *)(sa + 0x02) - th / 2;
                            scrolled = true;
                        }
                    }
                } else if (key == '\t') {
                    /* Tab = End Turn (original alias) */
                    HandleMenuChoice((9L << 16) | 1);
                } else if (key == 0x0D || key == 0x03) {
                    /* Return/Enter = End Turn */
                    HandleMenuChoice((9L << 16) | 1);
                } else if (key == 0x08 || key == 0x7F) {
                    /* Backspace/Delete = Cancel Path (original) */
                    if (sSelectedArmy >= 0 && *gGameState != 0) {
                        unsigned char *gs = (unsigned char *)*gGameState;
                        unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                        *(short *)(army + 0x32) = 0;
                        *(short *)(army + 0x34) = -1;
                        *(short *)(army + 0x36) = -1;
                        scrolled = true;
                    }
                } else if (key == 0x1B) {
                    /* Escape = Cancel Path / Deselect */
                    if (sSelectedArmy >= 0 && *gGameState != 0) {
                        unsigned char *gs = (unsigned char *)*gGameState;
                        unsigned char *army = gs + 0x1604 + sSelectedArmy * 0x42;
                        if (*(short *)(army + 0x32) != 0) {
                            *(short *)(army + 0x32) = 0;
                            *(short *)(army + 0x34) = -1;
                            *(short *)(army + 0x36) = -1;
                        } else {
                            sSelectedArmy = -1;
                        }
                        scrolled = true;
                    }
                } else if (key == 't' || key == 'T') {
                    sDebugShowTileSheet = !sDebugShowTileSheet;
                    scrolled = true;
                }
                /* Clamp viewport */
                if (sViewportX < 0) sViewportX = 0;
                if (sViewportY < 0) sViewportY = 0;
                if (sViewportX > sMapWidth - 1) sViewportX = sMapWidth - 1;
                if (sViewportY > sMapHeight - 1) sViewportY = sMapHeight - 1;
                if (scrolled) {
                    if (*gMainGameWindow != 0) {
                        SetPort((WindowPtr)*gMainGameWindow);
                        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
                    }
                    if (*gOverviewWindow != 0) {
                        SetPort((WindowPtr)*gOverviewWindow);
                        InvalRect(&((WindowPtr)*gOverviewWindow)->portRect);
                    }
                }
            }
            break;
        }

        case updateEvt:
            HandleUpdate(&event);
            break;

        case activateEvt: {
            WindowPtr win = (WindowPtr)event.message;
            if (event.modifiers & activeFlag) {
                SelectWindow(win);
            }
            break;
        }

        case kHighLevelEvent:
            break;
        }
    }

    PlayVoice(SND_VQUIT);
    CleanupVoiceSystem();
    CleanupMusicSystem();
    CleanupSoundSystem();
    ExitMovies();

    /* Restore original display depth if we changed it */
    if (sOriginalDepth != 0) {
        GDHandle mainGD = GetMainDevice();
        SetDepth(mainGD, sOriginalDepth, 0, 0);
    }

    return 0;
}

#else /* MODERN_BUILD */

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    return 0;
}

#endif /* MODERN_BUILD */
