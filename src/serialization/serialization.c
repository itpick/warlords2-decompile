/*
 * serialization.c - Warlords II Save/Load & Game Serialization
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * All file I/O uses MacApp TStream/TResourceStream hierarchy.
 * Data stored in Mac resource forks (big-endian 68K format).
 *
 * Original developer: Strategic Studies Group (Steve Fawkner)
 */

#include "warlords2.h"

/* =========================================================================
 * MacApp Stream API Wrappers (extern declarations)
 * ========================================================================= */

/* Virtual method dispatch -- universal dispatcher for vtable calls.
 * In the decompiled code, FUN_10117884 dispatches ALL virtual calls:
 *   FUN_10117884(obj + vtable_offset, arg1, arg2, ...)
 */
extern long  VtableDispatch(int vtableCall, ...);           /* FUN_10117884 */

/* Stream operations (declared extern, implemented via vtable dispatch) */
extern int  *GetResourceStream(unsigned long resType, short resID,
                                short openMode);             /* FUN_10052184 */
extern int  *OpenStream(int resourceRef, short openMode,
                         short isWritable);                  /* FUN_100522dc */
extern void  CloseStream(int *stream, short release);        /* FUN_100523a8 */
extern void  StreamRead(int *stream, void *buffer, long count);  /* FUN_10052490 */
extern void  StreamWrite(int *stream, void *buffer, long count); /* FUN_100524d4 */
extern void  StreamSetPosition(int *stream, long position, short mode); /* FUN_10052518 */

/* Memory allocation */
extern void *AllocateBlock(long size);                       /* FUN_100f1640 */
extern void  FreeBlock(void *ptr);                           /* FUN_100ef580 */

/* MacApp object lifecycle */
extern void  FocusObject(void *obj);                         /* FUN_100db26c */
extern void  EndFocus(void);                                 /* FUN_100db2f4 */
extern void  MarkChanged(void);                              /* FUN_100db328 */

/* MacApp resource stream factory */
extern void *NewResourceReader(int param);                   /* FUN_100fb260 */
extern void  SetResourceType(void *reader, long resType, short resID); /* FUN_100fb300 */

/* Resource management */
extern void *GetNamedResource(long resType, short resID);    /* FUN_10003558 */
extern void  AddResource(int handle, long resType, short resID, void *data); /* FUN_10002568 */
extern void  DetachResource(void *h);                        /* FUN_10002598 */
#ifndef MODERN_BUILD
extern void  DisposeHandle(int h);                           /* FUN_10002ad8 */
extern void  ReleaseResource(int h);                         /* FUN_100002a0 */
#endif
extern void  DisposeHandleFull(int h);                       /* FUN_10002ce8 */

/* Alias manager */
extern void *NewAlias(void *path);                           /* FUN_100b1c84 */
extern void  MakeAlias(void *a, void *b, int *outAlias);    /* FUN_100006d8 */
extern void  ResolveAlias(void *res, void *a, void *b, void *path); /* FUN_10001758 */
extern void  CopyResourceToDoc(void *doc, void *res);        /* FUN_10029dcc */

/* String/memory utilities */
#ifndef MODERN_BUILD
extern void  BlockMoveData(void *dst, void *src);            /* FUN_10001e78 */
#endif
extern void  DisposeGeneric(void *param);                    /* FUN_10000318 */
extern void  GetString(long param, void *outBuf);            /* FUN_10001bd8 */

/* Game subsystem calls */
extern void *GetCityByIndex(short cityIndex);                /* FUN_1000d910 */
extern void  ReleaseCityData(short cityIndex);               /* FUN_1000d9ac */
extern void  FlushCityCache(void);                           /* FUN_1000c7b4 */
extern void  PostLoadCityInit(void);                         /* FUN_1004248c */
extern void  GetScoreSnapshot(void *outBuf);                 /* FUN_10050bb0 */
extern void  GetAIStateSnapshot(void);                       /* FUN_1002bdc4 */
extern void  InitCityNames(void);                            /* FUN_10045170 */
extern void  InitArmyData(void);                             /* FUN_10045ac8 */
extern void  InitSpecialLocations(void);                     /* FUN_1001d15c */
extern void  PostLoadInitialization(void);                   /* FUN_1002869c */

/* Progress dialog */
extern void *GetSTRValueAt(short resID, short index);        /* FUN_1005f678 */
extern void  InitDataStructures(void *a, void *b, void *c,
                                 void *d, void *e, void *f,
                                 void *g);                   /* FUN_10040408 */
extern void  ProgressCreate(void *bar, void *rect, short resID); /* FUN_100513b4 */
extern void  ProgressUpdate(void *bar, short percent);       /* FUN_100514d8 */
extern void  ProgressDelay(int param);                       /* FUN_1005f144 */

/* External globals - declared in wl2_globals.h as pint* */
/* gGameState, gExtState, gMapTiles, gUnitTypeTable, gResourcePtr
 * are already declared via warlords2.h -> wl2_globals.h */
extern void        *gRoadData;             /* piRam10117354 */
extern void        *gCityOwnership;        /* piRam10115cf0 */
extern void        *gProgressBar;          /* puRam10115f7c */
extern char         gSCENInfo[];           /* iRam10117604 - 0x54 bytes */


/* =========================================================================
 * SECTION 1: Byte-Swapping Utilities
 *
 * The original Warlords II was 68K Mac (big-endian). The PowerPC port
 * byte-swaps all multi-byte fields on read/write. All resource data is
 * stored in big-endian (68K native order).
 * ========================================================================= */

/*
 * ByteSwap16 -- FUN_100525a0
 * Address: 0x100525a0, Size: 44 bytes
 *
 * Swaps bytes of a 16-bit value (big-endian <-> little-endian).
 * Called after reading or before writing each short field.
 *
 * Original decompiled: return param_1 * 0x100 + (param_1 >> 8)
 */
short ByteSwap16(unsigned short val)                         /* FUN_100525a0 */
{
    return (short)(val * 0x100 + (val >> 8));
}


/*
 * ByteSwap32 -- FUN_100525cc
 * Address: 0x100525cc, Size: 60 bytes
 *
 * Swaps bytes of a 32-bit value.
 *
 * Original decompiled logic reverses 4 bytes:
 *   byte[0] -> byte[3], byte[1] -> byte[2], etc.
 */
long ByteSwap32(unsigned long val)                           /* FUN_100525cc */
{
    unsigned char b0 = (unsigned char)(val >> 0x18);
    unsigned char b1 = (unsigned char)(val >> 0x10);
    unsigned char b2 = (unsigned char)(val >> 8);
    unsigned char b3 = (unsigned char)(val);

    return (unsigned long)b3 * 0x1000000
         + (unsigned long)b2 * 0x10000
         + (unsigned long)b1 * 0x100
         + (unsigned long)b0;
}


/* =========================================================================
 * SECTION 2: Scenario Loading
 * ========================================================================= */

/*
 * LoadMapResources -- FUN_10057334
 * Address: 0x10057334, Size: 276 bytes
 *
 * Loads MAP and RD (road) resources from the current scenario file.
 *   MAP: 0x8880 bytes (112 x 156 tiles, 2 bytes each)
 *   RD:  0x4440 bytes (112 x 156 tiles, 1 byte each)
 */
void LoadMapResources(void)                                  /* FUN_10057334 */
{
    int *mapPtr  = (int *)gMapTiles;     /* piRam10117358 */
    int *roadPtr = (int *)gRoadData;     /* piRam10117354 */
    int *docStream;
    int *stream;

    /* Get the document stream object */
    docStream = *(int **)(*(int *)(*(int *)gResourcePtr + 0x88) + 0x148);

    /* vtable dispatch: CalcMinSize (+0x2B8) */
    VtableDispatch((int)docStream + (int)*(short *)(*docStream + 0x2B8));

    /* Load MAP resource (type 'MAP ', ID 10000) */
    stream = GetResourceStream(0x4D415020, 10000, 1);       /* FUN_10052184 */

    /* Allocate map buffer if needed */
    if (*mapPtr == 0) {
        *mapPtr = (int)AllocateBlock(0x8880);                /* FUN_100f1640 */
    }

    /* Read 0x8880 bytes of map tile data */
    StreamRead(stream, (void *)*mapPtr, 0x8880);             /* FUN_10052490 */
    CloseStream(stream, 1);                                  /* FUN_100523a8 */

    /* Load RD resource (type 'RD  ', ID 10000) */
    stream = GetResourceStream(0x52442020, 10000, 1);

    /* Allocate road buffer if needed */
    if (*roadPtr == 0) {
        *roadPtr = (int)AllocateBlock(0x4440);
    }

    /* Read 0x4440 bytes of road overlay data */
    StreamRead(stream, (void *)*roadPtr, 0x4440);
    CloseStream(stream, 1);
}


/*
 * ReadSCNResource -- FUN_1005668c
 * Address: 0x1005668c, Size: 3240 bytes
 *
 * The main game state deserializer. Reads from the SCN resource
 * stream into the game state buffer. All 16-bit fields are byte-swapped
 * (big-endian 68K format -> little-endian PowerPC).
 *
 * param_1: TStream pointer (opened on 'SCN ' resource)
 * param_2: pointer to game state buffer (0x2FCC bytes)
 */
void ReadSCNResource(int *stream, int gameState)             /* FUN_1005668c */
{
    short i, j, k;
    int   base;
    short swapped;

    FocusObject(stream);                                     /* FUN_100db26c */

    /* Step 1: Read raw header block (0xA0 bytes at +0x000) */
    /* vtable +0xE0: ReadData */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   gameState, 0xA0);

    /* Step 2: Read player race at +0xA0 (8 x short, swapped) */
    /* Transform: 0 -> 0xFF (not present), 0xF -> 0 (active) */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 2;
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        swapped = ByteSwap16(0);
        *(short *)(base + 0xA0) = swapped;
        if (swapped == 0) {
            *(short *)(base + 0xA0) = (short)0xFF;
        } else if (*(short *)(base + 0xA0) == 0xF) {
            *(short *)(base + 0xA0) = 0;
        }
    }

    /* Step 3: Read player alliance at +0xB0 (8 x short, same transform) */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 2;
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        swapped = ByteSwap16(0);
        *(short *)(base + 0xB0) = swapped;
        if (swapped == 0) {
            *(short *)(base + 0xB0) = (short)0xFF;
        } else if (*(short *)(base + 0xB0) == 0xF) {
            *(short *)(base + 0xB0) = 0;
        }
    }

    /* Step 4: Read player status at +0xC0 (8 x short, swapped) */
    for (i = 0; i < 8; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0xC0) = ByteSwap16(0);
    }

    /* Step 5: Read player gold/income at +0xD0 (8 x short, swapped) */
    for (i = 0; i < 8; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0xD0) = ByteSwap16(0);
    }

    /* Step 6: Read player strength at +0xE0 (8 x short, swapped) */
    for (i = 0; i < 8; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0xE0) = ByteSwap16(0);
    }

    /* Step 7: Read player city count at +0xF0 (8 x short, swapped) */
    for (i = 0; i < 8; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0xF0) = ByteSwap16(0);
    }

    /* Step 8: Read misc flags at +0x100 (0x10 bytes raw) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   gameState + 0x100, 0x10);

    /* Step 9: Read per-field shorts at +0x110 (18 shorts, swapped) */
    {
        short *ptr = (short *)(gameState + 0x110);
        for (i = 0; i < 18; i++) {                          /* 0x12 = 18 */
            VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *ptr = ByteSwap16(0);
            ptr++;
        }
    }

    /* Step 10: Read single flag byte at +0x134 */
    /* vtable +0xE8: ReadByte */
    *(char *)(gameState + 0x134) = (char)VtableDispatch(
        (int)stream + (int)*(short *)(*stream + 0xE8));

    /* Step 11: Read turn info/misc at +0x136 (39 shorts, swapped) */
    {
        short *ptr = (short *)(gameState + 0x136);
        for (i = 0; i < 39; i++) {                          /* 0x27 = 39 */
            VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *ptr = ByteSwap16(0);
            ptr++;
        }
    }

    /* Step 12: Read 8 player records at +0x184 (0x14 bytes each) */
    /* Each: 7 shorts (swapped) + 2 bytes + 2 shorts (swapped) */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 0x14;

        /* 7 swapped shorts: gold, income, cities, armies, production, strength, control */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x184) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x186) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x188) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x18A) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x18C) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x18E) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x190) = ByteSwap16(0);           /* 400 decimal */

        /* 2 raw bytes: player type bytes */
        *(char *)(base + 0x192) = (char)VtableDispatch(
            (int)stream + (int)*(short *)(*stream + 0xE8));
        *(char *)(base + 0x193) = (char)VtableDispatch(
            (int)stream + (int)*(short *)(*stream + 0xE8));

        /* 2 swapped shorts: AI strategy, diplomacy */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x194) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x196) = ByteSwap16(0);
    }

    /* Step 13: Read army name data at +0x224 (800 bytes raw) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   gameState + 0x224, 800);

    /* Step 14: Read production queue at +0x544 (80 shorts, swapped) */
    {
        short *ptr = (short *)(gameState + 0x544);
        for (i = 0; i < 80; i++) {                          /* 0x50 = 80 */
            VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *ptr = ByteSwap16(0);
            ptr++;
        }
    }

    /* Step 15: Read extended data at +0x5E4 (0x22C bytes raw) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   gameState + 0x5E4, 0x22C);

    /* Step 16: Read city count at +0x810 (1 short, swapped) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(gameState + 0x810) = ByteSwap16(0);

    /* Step 17: Read 40 city records at +0x812 (0x20 bytes each) */
    /* Each: 2 shorts (X,Y) + 0x17 bytes (name) + 2 shorts (owner, defense) */
    for (i = 0; i < 40; i++) {                              /* 0x28 = 40 */
        base = gameState + i * 0x20;

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x812) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x814) = ByteSwap16(0);

        /* City name: 0x17 bytes raw (Pascal string) */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                       base + 0x816, 0x17);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x82E) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x830) = ByteSwap16(0);
    }

    /* Step 18: Read 22 hero name records at +0xD12 (0x1E bytes each) */
    /* Each: 0x17 bytes raw (name) + 3 shorts (type, level, status) */
    for (i = 0; i < 22; i++) {                              /* 0x16 = 22 */
        base = gameState + i * 0x1E;

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                       base + 0xD12, 0x17);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0xD2A) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0xD2C) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0xD2E) = ByteSwap16(0);
    }

    /* Step 19: Read raw block at +0xFA6 (0xA0 bytes) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   gameState + 0xFA6, 0xA0);

    /* Step 20: Read ruin/temple status at +0x1046 (10 shorts, swapped) */
    for (i = 0; i < 10; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0x1046) = ByteSwap16(0);
    }

    /* Step 21: Read extended feature data at +0x105A (100 shorts, swapped) */
    for (i = 0; i < 100; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0x105A) = ByteSwap16(0);
    }

    /* Step 22: Read victory points at +0x1122 (8 shorts, swapped) */
    for (i = 0; i < 8; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0x1122) = ByteSwap16(0);
    }

    /* Step 23: Read misc per-player at +0x1132 (8 shorts, swapped) */
    for (i = 0; i < 8; i++) {
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(gameState + i * 2 + 0x1132) = ByteSwap16(0);
    }

    /* Step 24: Read combat modifiers at +0x1142 (8 records x 6 shorts) */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 0x0C;
        for (j = 0; j < 6; j++) {
            VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
            *(short *)(base + 0x1142 + j * 2) = ByteSwap16(0);
        }
    }

    /* Step 25: Read production slots at +0x11A2 (8 x 8 x 5 shorts) */
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            for (k = 0; k < 5; k++) {
                VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
                *(short *)(gameState + i * 0x50 + j * 10 + k * 2 + 0x11A2) =
                    ByteSwap16(0);
            }
        }
    }

    /* Step 26: Read 8 AI command records at +0x1422 (0x2C bytes each) */
    /* Each: 3 bytes raw + 4 shorts (swapped) + 0x20 bytes raw */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 0x2C;

        /* 3 bytes raw: command type flags */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                       base + 0x1422, 3);

        /* 4 swapped shorts: target X, target Y, priority, flags */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x1426) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x1428) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x142A) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(base + 0x142C) = ByteSwap16(0);

        /* 0x20 bytes raw: command data */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                       base + 0x142E, 0x20);
    }

    /* Step 27: Read fog/visibility data at +0x1582 (0x40 bytes raw) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                   gameState + 0x1582, 0x40);

    /* Step 28: Read army count at +0x1602 (1 short, swapped) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
    *(short *)(gameState + 0x1602) = ByteSwap16(0);

    /* Step 29: Read up to 100 army records at +0x1604 (0x42 bytes each) */
    for (i = 0; i < 100; i++) {
        int armyBase = gameState + i * 0x42;

        /* 2 shorts (swapped): X, Y */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1604) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1606) = ByteSwap16(0);

        /* 0x26 bytes raw: army data block */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                       armyBase + 0x1608, 0x26);

        /* 1 short (swapped): movement points */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x162E) = ByteSwap16(0);

        /* 5 bytes raw: flags/stats */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0xE0),
                       armyBase + 0x1630, 5);

        /* 3 shorts (swapped): strength, hit points, army type */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1636) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1638) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x163A) = ByteSwap16(0);

        /* 2 bytes raw (packed bits): owner field at +0x163C */
        {
            unsigned int packed = *(unsigned int *)(armyBase + 0x163C);
            int byte1 = (int)VtableDispatch(
                (int)stream + (int)*(short *)(*stream + 0xE8));
            packed = (byte1 << 24) | (packed & 0x00FFFFFF);
            int byte2 = (int)VtableDispatch(
                (int)stream + (int)*(short *)(*stream + 0xE8));
            *(unsigned int *)(armyBase + 0x163C) =
                ((byte2 & 0xFF) << 16) | (byte1 << 24) | (packed & 0x0000FFFF);
        }

        /* 4 shorts (swapped): status, experience, group ID, special flags */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x163E) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1640) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1642) = ByteSwap16(0);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x100));
        *(short *)(armyBase + 0x1644) = ByteSwap16(0);
    }
}


/*
 * WriteSCNResource -- FUN_10058c64
 * Address: 0x10058c64, Size: 3864 bytes
 *
 * The exact mirror of ReadSCNResource. Writes game state back to
 * an SCN stream with byte-swapping. Same field order and sizes.
 *
 * Notable: player race values 0xFF -> 0, 0 -> 0xF on write.
 */
void WriteSCNResource(int *stream, int gameState)            /* FUN_10058c64 */
{
    short i, j, k;
    int   base, vt;
    long  sw;
    short sVar;

    FocusObject(stream);                                     /* FUN_100db26c */

    /* Header block: 0xA0 bytes raw (vtable +0x170: WriteData) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                   gameState, 0xA0);

    /* Player race at +0xA0: 8 shorts, with value transform */
    /* Internal 0xFF -> writes as 0, internal 0 -> writes as 0xF */
    for (i = 0; i < 8; i++) {
        sVar = *(short *)(gameState + i * 2 + 0xA0);
        if (sVar == (short)0xFF) {
            sVar = 0;
        } else if (sVar == 0) {
            sVar = 0xF;
        }
        vt = *stream;
        sw = ByteSwap16((unsigned short)sVar);
        /* vtable +0x190 (400 decimal): WriteSwappedShort */
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Player alliance at +0xB0: same transform */
    for (i = 0; i < 8; i++) {
        sVar = *(short *)(gameState + i * 2 + 0xB0);
        if (sVar == (short)0xFF) {
            sVar = 0;
        } else if (sVar == 0) {
            sVar = 0xF;
        }
        vt = *stream;
        sw = ByteSwap16((unsigned short)sVar);
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Player status +0xC0, gold +0xD0, strength +0xE0, cities +0xF0 */
    for (i = 0; i < 8; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0xC0));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }
    for (i = 0; i < 8; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0xD0));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }
    for (i = 0; i < 8; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0xE0));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }
    for (i = 0; i < 8; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0xF0));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Misc flags at +0x100: 0x10 bytes raw */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                   gameState + 0x100, 0x10);

    /* Per-field shorts at +0x110: 18 shorts */
    {
        short *ptr = (short *)(gameState + 0x110);
        for (i = 0; i < 18; i++) {
            vt = *stream;
            sw = ByteSwap16((unsigned short)*ptr);
            VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
            ptr++;
        }
    }

    /* Single byte at +0x134 (vtable +0x178: WriteByte) */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x178),
                   *(unsigned char *)(gameState + 0x134));

    /* Turn info at +0x136: 39 shorts */
    {
        short *ptr = (short *)(gameState + 0x136);
        for (i = 0; i < 39; i++) {
            vt = *stream;
            sw = ByteSwap16((unsigned short)*ptr);
            VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
            ptr++;
        }
    }

    /* Player records at +0x184: 8 x 0x14 */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 0x14;

        /* 7 swapped shorts */
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x184));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x186));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x188));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x18A));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x18C));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x18E));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x190));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

        /* 2 raw bytes */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x178),
                       *(unsigned char *)(base + 0x192));
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x178),
                       *(unsigned char *)(base + 0x193));

        /* 2 swapped shorts */
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x194));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x196));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Army names at +0x224: 800 bytes raw */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                   gameState + 0x224, 800);

    /* Production queue at +0x544: 80 shorts */
    {
        short *ptr = (short *)(gameState + 0x544);
        for (i = 0; i < 80; i++) {
            vt = *stream;
            sw = ByteSwap16((unsigned short)*ptr);
            VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
            ptr++;
        }
    }

    /* Extended data at +0x5E4: 0x22C bytes raw */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                   gameState + 0x5E4, 0x22C);

    /* City count at +0x810 */
    vt = *stream;
    sw = ByteSwap16(*(unsigned short *)(gameState + 0x810));
    VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

    /* City records at +0x812: 40 x 0x20 */
    for (i = 0; i < 40; i++) {
        base = gameState + i * 0x20;

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x812));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x814));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                       base + 0x816, 0x17);

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x82E));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x830));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Hero records at +0xD12: 22 x 0x1E */
    for (i = 0; i < 22; i++) {
        base = gameState + i * 0x1E;

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                       base + 0xD12, 0x17);

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0xD2A));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0xD2C));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0xD2E));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Raw block at +0xFA6: 0xA0 bytes */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                   gameState + 0xFA6, 0xA0);

    /* Ruin/temple status at +0x1046: 10 shorts */
    for (i = 0; i < 10; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0x1046));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Extended feature data at +0x105A: 100 shorts */
    for (i = 0; i < 100; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0x105A));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Victory points at +0x1122: 8 shorts */
    for (i = 0; i < 8; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0x1122));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Misc per-player at +0x1132: 8 shorts */
    for (i = 0; i < 8; i++) {
        vt = *stream;
        sw = ByteSwap16(*(unsigned short *)(gameState + i * 2 + 0x1132));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }

    /* Combat modifiers at +0x1142: 8 x 6 shorts */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 0x0C;
        for (j = 0; j < 6; j++) {
            vt = *stream;
            sw = ByteSwap16(*(unsigned short *)(base + 0x1142 + j * 2));
            VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        }
    }

    /* Production slots at +0x11A2: 8 x 8 x 5 shorts */
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            for (k = 0; k < 5; k++) {
                vt = *stream;
                sw = ByteSwap16(*(unsigned short *)
                    (gameState + i * 0x50 + j * 10 + k * 2 + 0x11A2));
                VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
            }
        }
    }

    /* AI command records at +0x1422: 8 x 0x2C */
    for (i = 0; i < 8; i++) {
        base = gameState + i * 0x2C;

        /* 3 bytes raw */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                       base + 0x1422, 3);

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x1426));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x1428));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x142A));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(base + 0x142C));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

        /* 0x20 bytes raw */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                       base + 0x142E, 0x20);
    }

    /* Visibility data at +0x1582: 0x40 bytes raw */
    VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                   gameState + 0x1582, 0x40);

    /* Army count at +0x1602 */
    vt = *stream;
    sw = ByteSwap16(*(unsigned short *)(gameState + 0x1602));
    VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

    /* Army records at +0x1604: 100 x 0x42 */
    for (i = 0; i < 100; i++) {
        int armyBase = gameState + i * 0x42;

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1604));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1606));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                       armyBase + 0x1608, 0x26);

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x162E));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x170),
                       armyBase + 0x1630, 5);

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1636));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1638));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x163A));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);

        /* Owner: write high byte then second byte from packed 32-bit field */
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x178),
                       *(unsigned int *)(armyBase + 0x163C) >> 0x18);
        VtableDispatch((int)stream + (int)*(short *)(*stream + 0x178),
                       (*(unsigned int *)(armyBase + 0x163C) >> 0x10) & 0xFF);

        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x163E));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1640));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1642));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
        vt = *stream; sw = ByteSwap16(*(unsigned short *)(armyBase + 0x1644));
        VtableDispatch((int)stream + (int)*(short *)(vt + 400), sw);
    }
}


/*
 * LoadScenario -- FUN_10057448
 * Address: 0x10057448, Size: 936 bytes
 *
 * Main entry point for loading a scenario file.
 */
long LoadScenario(short showProgress)                        /* FUN_10057448 */
{
    int *gsPtr = (int *)gGameState;
    int *scnStream;

    /* Set up progress dialog if requested */
    if (showProgress != 0) {
        void *s0 = GetSTRValueAt(0x88, 0);
        void *s1 = GetSTRValueAt(0x88, 1);
        void *s2 = GetSTRValueAt(0x88, 2);
        void *s3 = GetSTRValueAt(0x88, 3);
        void *s4 = GetSTRValueAt(0x88, 4);
        void *s5 = GetSTRValueAt(0x88, 5);
        void *s6 = GetSTRValueAt(0x88, 6);
        InitDataStructures(s0, s1, s2, s3, s4, s5, s6);

        {
            int rect[2] = { 0xCA, 0x3C };
            ProgressCreate(*(void **)gProgressBar, rect, 0x3F3);
            ProgressUpdate(*(void **)gProgressBar, 0);
        }
    }

    /* Load SCEN info header (type 'SCEN', ID 10000, 0x54 bytes) */
    {
        int *scenReader = (int *)NewResourceReader(0);
        SetResourceType(scenReader, 0x5343454E, 10000);

        /* Read 0x54 bytes into global SCEN info buffer */
        VtableDispatch((int)scenReader + (int)*(short *)(*scenReader + 0xE0),
                       (int)gSCENInfo, 0x54);

        /* Close reader (vtable +0x90) */
        VtableDispatch((int)scenReader + (int)*(short *)(*scenReader + 0x90));
    }

    /* Load SCN data into game state (type 'SCN ', ID 10000) */
    scnStream = GetResourceStream(0x53434E20, 10000, 1);

    /* Allocate game state buffer if needed (0x2FCC bytes) */
    if (*gsPtr == 0) {
        *gsPtr = (int)AllocateBlock(0x2FCC);
    }

    ReadSCNResource(scnStream, *gsPtr);
    CloseStream(scnStream, 1);

    /* Set up map descriptor via sub-document */
    {
        int resBase = *(int *)(*(int *)gResourcePtr + 0x88);
        int *subDocList;
        FocusObject((void *)resBase);
        subDocList = *(int **)(resBase + 0x148);
        FocusObject(subDocList);
    }

    /* Initialize city names and army data */
    InitCityNames();                                         /* FUN_10045170 */
    InitArmyData();                                          /* FUN_10045ac8 */

    /* Load MAP and RD resources */
    LoadMapResources();                                      /* FUN_10057334 */

    if (showProgress != 0) {
        ProgressUpdate(*(void **)gProgressBar, 0x3C);
    }

    /* Initialize special locations */
    InitSpecialLocations();                                  /* FUN_1001d15c */

    if (showProgress != 0) {
        ProgressUpdate(*(void **)gProgressBar, 100);
        ProgressDelay(10);                                   /* FUN_1005f144 */
    }

    /* Post-load initialization */
    PostLoadInitialization();                                 /* FUN_1002869c */

    /* Set player defaults for inactive players */
    {
        short sVar;
        int idx = 0;
        do {
            if (*(short *)(*gsPtr + idx * 2 + 0x138) == 0) {
                /* Player not alive: set state to 3 (inactive) */
                *(short *)(idx * 2 + *gsPtr + 0xC0) = 3;
            }
            sVar = (short)idx + 1;
            idx = (int)sVar;
        } while (sVar < 8);
    }

    return 1;   /* Success */
}


/* =========================================================================
 * SECTION 3: Turn State Serialization
 * ========================================================================= */

/*
 * ClearCommandRecords -- FUN_10038860
 * Address: 0x10038860, Size: 48 bytes
 *
 * Zeros out all 8 AI command record type flags after saving turn state.
 */
void ClearCommandRecords(void)                               /* FUN_10038860 */
{
    int *gsPtr = (int *)gGameState;                          /* piRam1011735c */
    short sVar;
    int   i = 0;

    do {
        /* Clear the command type byte at gameState + player * 0x2C + 0x1422 */
        *(unsigned char *)(*gsPtr + i * 0x2C + 0x1422) = 0;
        sVar = (short)i + 1;
        i = (int)sVar;
    } while (sVar < 8);
}


/*
 * SerializeMoveData -- FUN_1003865c
 * Address: 0x1003865c, Size: 516 bytes
 *
 * Serializes AI command records from gameState + 0x1422 into compact
 * format for the turn replay stream. Each command is 0x2C (44) bytes
 * in memory, serialized to 0x16 (22) bytes per move.
 *
 * param_1: output buffer
 * param_2: pointer to receive total byte size
 *
 * Returns: number of moves serialized
 */
long SerializeMoveData(int outBuffer, short *outSize)        /* FUN_1003865c */
{
    unsigned int *gsPtr = (unsigned int *)gGameState;        /* puRam1011735c */
    long   moveCount = 0;
    int    outIdx = 0;
    short  activeSlots[16];         /* local_48: [player*2 + slot] */
    short  sVar;
    int    i;

    /* Pass 1: Initialize active slot tracking */
    i = 0;
    do {
        activeSlots[i * 2 + 1] = 0;
        activeSlots[i * 2] = 0;
        sVar = (short)i + 1;
        i = (int)sVar;
    } while (sVar < 8);

    /* Pass 2: Mark primary commands (command type byte > 0) */
    i = 0;
    do {
        if (*(char *)(*gsPtr + i * 0x2C + 0x1422) > '\0') {
            moveCount = (long)(short)((short)moveCount + 1);
            activeSlots[i * 2] = 1;
        }
        sVar = (short)i + 1;
        i = (int)sVar;
    } while (sVar < 8);

    /* Pass 3: Mark secondary commands (byte > 1, max 10 total moves) */
    i = 0;
    do {
        if (*(char *)(*gsPtr + i * 0x2C + 0x1422) > '\x01' &&
            (int)moveCount < 10) {
            moveCount = (long)(short)((short)moveCount + 1);
            activeSlots[i * 2 + 1] = 1;
        }
        sVar = (short)i + 1;
        i = (int)sVar;
    } while (sVar < 8);

    /* Pass 4: Clamp commands with only primary to type 1 */
    i = 0;
    do {
        if (activeSlots[i * 2] != 0 && activeSlots[i * 2 + 1] == 0) {
            *(unsigned char *)(*gsPtr + i * 0x2C + 0x1422) = 1;
        }
        sVar = (short)i + 1;
        i = (int)sVar;
    } while (sVar < 8);

    /* Pass 5: Serialize active commands to output buffer */
    /* Output per move (0x16 = 22 bytes):
     *   +0x00: 1 byte  - player index
     *   +0x01: 1 byte  - command sub-type
     *   +0x02: 2 bytes - target/priority
     *   +0x04: 2 bytes - destination
     *   +0x06: 16 bytes - command data
     */
    {
        int player = 0;
        int slot;

        outIdx = 0;
        do {
            slot = 0;
            do {
                int slotIdx = player * 2 + slot;
                if (activeSlots[slotIdx] != 0) {
                    int cmdOfs = (int)(player * 0x2C);
                    int outOfs = outBuffer + outIdx * 0x16;

                    *(char *)(outOfs) = (char)player;
                    *(unsigned char *)(outOfs + 1) =
                        *(unsigned char *)(*gsPtr + cmdOfs + slot + 0x1423);
                    *(short *)(outOfs + 2) =
                        *(short *)(cmdOfs + *gsPtr + slot * 2 + 0x1426);
                    *(short *)(outOfs + 4) =
                        *(short *)(cmdOfs + *gsPtr + slot * 2 + 0x142A);

                    /* Copy 16 bytes of command data */
                    BlockMoveData(
                        (void *)((unsigned long)*gsPtr + player * 0x2C +
                                 slot * 0x10 + 0x142E),
                        (void *)(outOfs + 6),
                        16);

                    outIdx = (int)(short)((short)outIdx + 1);
                }
                sVar = (short)slot + 1;
                slot = (int)sVar;
            } while (sVar < 2);
            sVar = (short)player + 1;
            player = (int)sVar;
        } while (sVar < 8);
    }

    /* Return total byte size of serialized move data */
    *outSize = (short)moveCount * 0x16;

    return moveCount;
}


/*
 * SaveTurnState -- FUN_10038890
 * Address: 0x10038890, Size: 976 bytes
 *
 * Saves a snapshot of the current turn's state into the per-turn
 * replay stream. Called at end-of-turn processing (from FUN_1003d4dc).
 *
 * Data written per turn:
 *   - Record size (2 bytes)
 *   - Gold per player (8 x 2 = 16 bytes from gameState+0x186)
 *   - Score snapshot (16 bytes via FUN_10050bb0)
 *   - AI state (16 bytes)
 *   - Army visibility (army_count bytes, 0xFF if hidden)
 *   - Move data size + serialized AI commands
 *   - Stream position checksum (4 bytes written back to start)
 */
void SaveTurnState(void)                                     /* FUN_10038890 */
{
    int    *gsPtr  = (int *)gGameState;                      /* piRam1011735c */
    int    *mapPtr = (int *)gMapTiles;                       /* piRam10117358 */
    int     resHandle;
    short   turnNumber, clampedTurn;
    short   recordSize;
    short   moveDataSize;
    long    moveCountVal;
    unsigned short armyCount;
    unsigned char  armyVisibility[104];     /* local_b0 */
    short   playerGold[8];                  /* local_c0 */
    unsigned char  scoreSnapshot[16];       /* auStack_d4 */
    unsigned char  moveBuffer[224];         /* auStack_1b4 */
    short   moveCountField;                 /* local_1b8 */
    short   moveSizeField;                  /* local_c2 */
    long    streamPos;
    int    *turnStream;
    short   sVar;
    int     i;

    /* Get the document's resource handle for turn history */
    resHandle = *(int *)(*(int *)(*(int *)gResourcePtr + 0x88) + 0x160);

    /* Get current turn number */
    turnNumber = *(short *)(*(int *)gsPtr + 0x136);
    clampedTurn = turnNumber;
    if (turnNumber < 2) {
        clampedTurn = 1;
    }

    /* Special case: Turn 2 -- create initial stream with 4-byte header */
    if (clampedTurn == 2) {
        int *initStream = OpenStream(resHandle, 6, 0);
        if (initStream == NULL) {
            return;
        }
        streamPos = 4;
        StreamWrite(initStream, &streamPos, 4);
        CloseStream(initStream, 1);
    } else {
        /* Check turn limit: max 201 turns of history */
        short checkTurn = *(short *)(*(int *)gsPtr + 0x136);
        clampedTurn = checkTurn;
        if (checkTurn < 2) {
            clampedTurn = 1;
        }
        if (clampedTurn > 0xC9) {
            return;
        }
    }

    /* Read current stream position from type 1 resource */
    {
        int *posStream = OpenStream(resHandle, 1, 0);
        StreamRead(posStream, &streamPos, 4);
        CloseStream(posStream, 1);
    }

    /* Open type 2 stream (turn history) for appending */
    turnStream = OpenStream(resHandle, 2, 0);

    /* Seek to the stored position */
    {
        int vt = *turnStream;
        long pos = VtableDispatch(
            (int)turnStream + (int)*(short *)(vt + 0xB8),
            vt, *(unsigned long *)(vt + 0xBC));
        VtableDispatch(
            (int)turnStream + (int)*(short *)(vt + 0xB0), pos);
    }

    /* Build army visibility snapshot */
    if (0 < *(short *)(*(int *)gsPtr + 0x1602)) {
        i = 0;
        do {
            int armyBase = *(int *)gsPtr +
                (int)(((i & 0x7FFFFFF) * 0x20 + i) << 1);
            int tileVal = *(int *)(*(int *)mapPtr +
                *(short *)(armyBase + 0x1606) * 0xE0 +
                *(short *)(armyBase + 0x1604) * 2);
            char terrainProp = *(char *)(*(int *)gsPtr +
                (unsigned int)((unsigned int)tileVal >> 0x18) + 0x711);

            /* Check if terrain hides the army (terrain type ~10) */
            long negProp = -(long)terrainProp;
            long check = negProp + 10;
            if ((check + (-(unsigned long)(check == 0) - (negProp + 9)) & 0xFF) == 0) {
                /* Terrain visible: store army owner byte at +0x15 offset */
                armyVisibility[i] = *(unsigned char *)(
                    *(int *)gsPtr +
                    (int)(((i & 0x7FFFFFF) * 0x20 + i) << 1) + 0x1619);
            } else {
                /* Hidden terrain: store 0xFF */
                armyVisibility[i] = 0xFF;
            }
            sVar = (short)i + 1;
            i = (int)sVar;
        } while (sVar < *(short *)(*(int *)gsPtr + 0x1602));
    }

    /* Build player gold snapshot */
    i = 0;
    do {
        playerGold[i] = *(short *)(*(int *)gsPtr +
            (int)(((i & 0x3FFFFFFF) * 4 + i) << 2) + 0x186);
        sVar = (short)i + 1;
        i = (int)sVar;
    } while (sVar < 8);

    /* Get score snapshot */
    GetScoreSnapshot(scoreSnapshot);                         /* FUN_10050bb0 */

    /* Get AI state snapshot */
    GetAIStateSnapshot();                                    /* FUN_1002bdc4 */

    /* Serialize move data */
    moveCountField = (short)SerializeMoveData((int)moveBuffer, &moveSizeField);

    /* Calculate record size */
    armyCount = *(unsigned short *)(*(int *)gsPtr + 0x1602);
    recordSize = (short)armyCount + moveSizeField + 0x34;

    /* Pad army count to even for 16-bit alignment */
    if ((int)(short)armyCount % 2 == 1) {
        armyCount = armyCount + 1;
        recordSize = recordSize + 1;
    }

    /* Write turn record */
    StreamWrite(turnStream, &recordSize, 2);                 /* Record size */
    StreamWrite(turnStream, playerGold, 0x10);               /* Player gold */
    StreamWrite(turnStream, scoreSnapshot, 0x10);            /* Score */
    /* AI state (0x10 bytes from separate global) */
    StreamWrite(turnStream, (void *)0, 0x10);                /* AI state ptr */
    StreamWrite(turnStream, armyVisibility, armyCount);      /* Visibility */
    StreamWrite(turnStream, &moveCountField, 2);             /* Move count */
    StreamWrite(turnStream, moveBuffer, moveSizeField);      /* Move data */

    /* Update stream position bookmark */
    streamPos = VtableDispatch(
        (int)turnStream + (int)*(short *)(*(int *)turnStream + 0xA8));

    /* Seek to beginning and write new position */
    StreamSetPosition(turnStream, 0, 0);
    StreamWrite(turnStream, &streamPos, 4);

    /* Close the turn history stream */
    CloseStream(turnStream, 1);

    /* Clear command records for next turn */
    ClearCommandRecords();                                   /* FUN_10038860 */
}


/* =========================================================================
 * SECTION 4: City Record I/O
 * ========================================================================= */

/*
 * WriteCityRecords -- FUN_1001e330
 * Address: 0x1001e330, Size: 188 bytes
 *
 * Writes 8 city records (each 0x42C bytes) plus a shared 0x4B0 byte
 * city data block to the save stream. City data is NOT inline in the
 * main game state but in separate allocations via GetCityByIndex.
 */
void WriteCityRecords(int *stream)                           /* FUN_1001e330 */
{
    short i;
    void *cityData;

    i = 0;
    do {
        /* Get city data pointer by index */
        cityData = GetCityByIndex(i);                        /* FUN_1000d910 */

        /* Write 0x42C bytes of city data */
        StreamWrite(stream, cityData, 0x42C);                /* FUN_100524d4 */

        /* Release the city data handle */
        ReleaseCityData(i);                                  /* FUN_1000d9ac */

        i = i + 1;
    } while (i < 8);

    /* Flush city cache */
    FlushCityCache();                                        /* FUN_1000c7b4 */

    /* Write shared city data block (0x4B0 bytes) */
    /* Original: FUN_100524d4(param_1, **(undefined4 **)(iVar2 + -0x430), 0x4b0) */
    /* The pointer comes from a global offset relative to the base pointer
     * established by ZEXT48(&.TVect::OCECToRString) -- architecture-specific */
}


/*
 * ReadCityRecords -- FUN_1001e3ec
 * Address: 0x1001e3ec, Size: 196 bytes
 *
 * Reads 8 city records (each 0x42C bytes) plus the shared 0x4B0 byte
 * city data block from the save stream.
 */
void ReadCityRecords(int *stream)                            /* FUN_1001e3ec */
{
    short i;
    void *cityData;

    i = 0;
    do {
        /* Get city data pointer by index */
        cityData = GetCityByIndex(i);                        /* FUN_1000d910 */

        /* Read 0x42C bytes of city data */
        StreamRead(stream, cityData, 0x42C);                 /* FUN_10052490 */

        /* Release the city data handle */
        ReleaseCityData(i);                                  /* FUN_1000d9ac */

        i = i + 1;
    } while (i < 8);

    /* Flush city cache */
    FlushCityCache();                                        /* FUN_1000c7b4 */

    /* Read shared city data block (0x4B0 bytes) */
    /* Original: FUN_10052490(param_1, **(undefined4 **)(iVar2 + -0x430), 0x4b0) */

    /* Post-load city initialization */
    PostLoadCityInit();                                      /* FUN_1004248c */
}


/* =========================================================================
 * SECTION 5: Full Game Save
 * ========================================================================= */

/*
 * WriteGameState -- FUN_10029e84
 * Address: 0x10029e84, Size: 2160 bytes
 *
 * Writes the full game state to the document's resource fork (native format).
 * This is the "bulk write" path -- no per-field byte-swapping.
 *
 * Resources written:
 *   Main data stream (type=6, writable):
 *     SCEN info (0x54) + game state (0x2FCC) + MAP (0x8880) +
 *     hero data (22000) + road (0x4440) + city ownership (0x4440) +
 *     embedded resources (size-prefixed) + city records (8 x 0x42C + 0x4B0)
 *   Player name aliases (NAME + alis resources per player)
 */
void WriteGameState(int *docHandle)                          /* FUN_10029e84 */
{
    int    *gsPtr    = (int *)gGameState;                    /* piRam1011735c */
    int    *cityOwn  = (int *)gCityOwnership;                /* piRam10115cf0 */
    int     resBase;
    int    *saveStream;
    int    *subStream;
    long    subSize;
    void   *tempBuf;
    int     aliasHandle;

    resBase = *(int *)(*(int *)gResourcePtr + 0x88);

    /* Clear message_pending flag */
    *(short *)(*gsPtr + 0x120) = 0;

    /* Open main data stream (type 6, writable) */
    saveStream = OpenStream((int)docHandle, 6, 1);           /* FUN_100522dc */
    if (saveStream == NULL) {
        return;
    }

    /* Write SCEN info header (0x54 bytes) */
    StreamWrite(saveStream, gSCENInfo, 0x54);                /* FUN_100524d4 */

    /* Write game state block (0x2FCC bytes) */
    StreamWrite(saveStream, (void *)*gsPtr, 0x2FCC);

    /* Write MAP tile data (0x8880 bytes) */
    StreamWrite(saveStream, *(void **)gMapTiles, 0x8880);

    /* Write hero/special location data (22000 bytes) */
    StreamWrite(saveStream, *(void **)gUnitTypeTable, 22000);

    /* Write road overlay data (0x4440 bytes) */
    StreamWrite(saveStream, *(void **)gRoadData, 0x4440);

    /* Write city ownership map (0x4440 bytes) */
    {
        void *ownerData = *(void **)cityOwn;
        if (ownerData != NULL) {
            DetachResource(ownerData);                       /* FUN_10002598 / HLock */
        }
        StreamWrite(saveStream, ownerData, 0x4440);
        if (*cityOwn != 0) {
            DisposeHandle(*cityOwn);                         /* FUN_10002ad8 / HUnlock */
        }
    }

    /* Write embedded resource 1 (from sub-document at resBase + 0x15C) */
    subStream = OpenStream(*(int *)(resBase + 0x15C), 1, 0);
    subSize = VtableDispatch(
        (int)subStream + (int)*(short *)(*subStream + 0xB8));
    tempBuf = AllocateBlock(subSize);
    StreamRead(subStream, tempBuf, subSize);
    StreamWrite(saveStream, &subSize, 4);
    StreamWrite(saveStream, tempBuf, subSize);
    CloseStream(subStream, 1);
    FreeBlock(tempBuf);

    /* Write embedded resource 2 (from sub-document at resBase + 0x160) */
    subStream = OpenStream(*(int *)(resBase + 0x160), 1, 0);
    subSize = VtableDispatch(
        (int)subStream + (int)*(short *)(*subStream + 0xB8));
    tempBuf = AllocateBlock(subSize);
    StreamRead(subStream, tempBuf, subSize);
    StreamWrite(saveStream, &subSize, 4);
    StreamWrite(saveStream, tempBuf, subSize);
    CloseStream(subStream, 1);
    FreeBlock(tempBuf);

    /* Write city records (8 x 0x42C + 0x4B0) */
    WriteCityRecords(saveStream);                            /* FUN_1001e330 */

    /* Write player name aliases (if message_pending == 0) */
    if (*(short *)(*gsPtr + 0x120) == 0) {
        int *playerDoc;
        void *nameRes;
        char pathBuf[256];

        /* Player 0: NAME #10000, alis #1000 */
        playerDoc = *(int **)(resBase + 0x148);
        FocusObject(playerDoc);
        VtableDispatch((int)playerDoc + (int)*(short *)(*playerDoc + 0x2B8));
        nameRes = GetNamedResource(0x4E414D45, 10000);      /* 'NAME' */
        if ((int)nameRes != 0) {
            CopyResourceToDoc(docHandle, nameRes);
            ResolveAlias(nameRes, NULL, NULL, pathBuf);
        }
        MakeAlias(NULL, NULL, &aliasHandle);
        if (aliasHandle != 0) {
            void *aliasData = NewAlias(pathBuf);
            AddResource(aliasHandle, 0x616C6973, 1000, aliasData); /* 'alis' */
            MarkChanged();
            ReleaseResource(aliasHandle);
            DisposeHandleFull(aliasHandle);
        }

        /* Player 1: NAME #30000, alis #1001 (0x3E9) */
        playerDoc = *(int **)(resBase + 0x14C);
        FocusObject(playerDoc);
        VtableDispatch((int)playerDoc + (int)*(short *)(*playerDoc + 0x2B8));
        nameRes = GetNamedResource(0x4E414D45, 30000);
        if ((int)nameRes == 0) {
            pathBuf[0] = 0;
        } else {
            CopyResourceToDoc(docHandle, nameRes);
            ResolveAlias(nameRes, NULL, NULL, pathBuf);
        }
        MakeAlias(NULL, NULL, &aliasHandle);
        if (aliasHandle != 0) {
            void *aliasData = NewAlias(pathBuf);
            AddResource(aliasHandle, 0x616C6973, 0x3E9, aliasData);
            MarkChanged();
            ReleaseResource(aliasHandle);
        }

        /* Player 2: NAME #20000, alis #1002 (0x3EA) -- if present */
        playerDoc = *(int **)(resBase + 0x150);
        if (playerDoc != NULL) {
            VtableDispatch((int)playerDoc + (int)*(short *)(*playerDoc + 0x2B8));
            nameRes = GetNamedResource(0x4E414D45, 20000);
            if ((int)nameRes == 0) {
                pathBuf[0] = 0;
            } else {
                CopyResourceToDoc(docHandle, nameRes);
                ResolveAlias(nameRes, NULL, NULL, pathBuf);
            }
            MakeAlias(NULL, NULL, &aliasHandle);
            if (aliasHandle != 0) {
                void *aliasData = NewAlias(pathBuf);
                AddResource(aliasHandle, 0x616C6973, 0x3EA, aliasData);
                MarkChanged();
                ReleaseResource(aliasHandle);
            }
        }

        /* Player 3: NAME #25000, alis #1003 (0x3EB) -- if present */
        playerDoc = *(int **)(resBase + 0x154);
        if (playerDoc != NULL) {
            VtableDispatch((int)playerDoc + (int)*(short *)(*playerDoc + 0x2B8));
            nameRes = GetNamedResource(0x4E414D45, 25000);
            if ((int)nameRes == 0) {
                pathBuf[0] = 0;
            } else {
                CopyResourceToDoc(docHandle, nameRes);
                ResolveAlias(nameRes, NULL, NULL, pathBuf);
            }
            MakeAlias(NULL, NULL, &aliasHandle);
            if (aliasHandle != 0) {
                void *aliasData = NewAlias(pathBuf);
                AddResource(aliasHandle, 0x616C6973, 0x3EB, aliasData);
                MarkChanged();
                ReleaseResource(aliasHandle);
            }
        }

        /* Player 4: NAME #15000, alis #1004 (0x3EC) -- if present */
        playerDoc = *(int **)(resBase + 0x158);
        if (playerDoc != NULL) {
            VtableDispatch((int)playerDoc + (int)*(short *)(*playerDoc + 0x2B8));
            nameRes = GetNamedResource(0x4E414D45, 15000);
            if ((int)nameRes == 0) {
                pathBuf[0] = 0;
            } else {
                CopyResourceToDoc(docHandle, nameRes);
                ResolveAlias(nameRes, NULL, NULL, pathBuf);
            }
            MakeAlias(NULL, NULL, &aliasHandle);
            if (aliasHandle != 0) {
                void *aliasData = NewAlias(pathBuf);
                AddResource(aliasHandle, 0x616C6973, 0x3EC, aliasData);
                MarkChanged();
                ReleaseResource(aliasHandle);
            }
        }
    }

    /* Close the main save stream (vtable +0x90) */
    VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x90));
}


/*
 * WriteGameStateCrossFormat -- FUN_1002a864
 * Address: 0x1002a864, Size: 2508 bytes
 *
 * Cross-platform save with individual field byte-swapping.
 * Mirrors LoadFullSave for writing. Writes:
 *   - SCEN header (0x3A raw + swapped fields + 0x10 raw + 4 swapped shorts)
 *   - Game state via WriteSCNResource (with byte-swapping)
 *   - MAP data (0x8880 bytes)
 *   - 1000 hero/location records (per-field byte-swapped)
 *   - Road data (0x4440) + city ownership (0x4440)
 *   - Embedded resources (size byte-swapped)
 *   - Turn history replay data
 *   - City records (per-field byte-swapped)
 *   - Extra city data (0x4B0)
 */
void WriteGameStateCrossFormat(int *docHandle)               /* FUN_1002a864 */
{
    int    *gsPtr     = (int *)gGameState;
    int    *unitTypes = (int *)gUnitTypeTable;
    int    *cityOwn   = (int *)gCityOwnership;
    int     scenInfo  = (int)gSCENInfo;
    int    *saveStream;
    int    *histStream;
    int     resBase;
    int     vt;
    long    sw;
    short   i, j;
    short   turnNumber, clampedTurn;

    resBase = *(int *)(*(int *)gResourcePtr + 0x88);

    /* Clear message_pending flag */
    *(short *)(*gsPtr + 0x120) = 0;

    /* Open main data stream (type 6, read-write) */
    saveStream = OpenStream((int)docHandle, 6, 0);           /* FUN_100522dc */
    if (saveStream == NULL) {
        return;
    }

    /* Write SCEN header: first 0x3A bytes raw */
    VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                   scenInfo, 0x3A);

    /* Byte-swap field at offset 0x3A */
    sw = ByteSwap16(*(unsigned short *)(scenInfo + 0x3A));
    vt = *saveStream;
    VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

    /* Next 0x10 bytes raw (0x3C to 0x4B) */
    VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                   scenInfo + 0x3C, 0x10);

    /* 4 swapped shorts at offsets 0x4C-0x52 */
    {
        unsigned short *pField = (unsigned short *)(scenInfo + 0x4C);
        for (i = 0; i < 4; i++) {
            vt = *saveStream;
            sw = ByteSwap16(*pField);
            pField++;
            VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
        }
    }

    /* Write game state via WriteSCNResource (byte-swapped) */
    WriteSCNResource(saveStream, *gsPtr);

    /* Write MAP data raw (0x8880 bytes) */
    StreamWrite(saveStream, *(void **)gMapTiles, 0x8880);

    /* Write 1000 hero/location records (0x16 bytes each, byte-swapped) */
    for (i = 0; i < 1000; i++) {
        int recBase = *unitTypes + i * 0x16;

        /* X position (swapped) */
        vt = *saveStream;
        sw = ByteSwap16(*(unsigned short *)(recBase));
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

        /* Y position (swapped) */
        vt = *saveStream;
        sw = ByteSwap16(*(unsigned short *)(recBase + 2));
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

        /* 8 bytes raw data */
        VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                       recBase + 4, 8);

        /* Type/flags at +0x0C (swapped) */
        vt = *saveStream;
        sw = ByteSwap16(*(unsigned short *)(recBase + 0x0C));
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

        /* Packed field: bit repacking from +0x0C */
        {
            unsigned short packed =
                ((*(unsigned int *)(recBase + 0x0C) >> 0x0C) & 0xF) |
                (unsigned short)(((*(unsigned int *)(recBase + 0x0C) >> 9 & 7) << 0x14) >> 0x10) |
                (unsigned short)(((*(unsigned int *)(recBase + 0x0C) >> 7 & 3) << 0x17) >> 0x10) |
                (unsigned short)((unsigned int)(*(int *)(recBase + 0x0C) << 0x19) >> 0x10);
            vt = *saveStream;
            sw = ByteSwap16(packed);
            VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
        }

        /* 2 bytes raw at +0x10 */
        VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                       recBase + 0x10, 2);

        /* Status at +0x12 (swapped) */
        vt = *saveStream;
        sw = ByteSwap16(*(unsigned short *)(recBase + 0x12));
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

        /* Experience at +0x14 (swapped) */
        vt = *saveStream;
        sw = ByteSwap16(*(unsigned short *)(recBase + 0x14));
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
    }

    /* Write road data (0x4440 bytes raw) */
    StreamWrite(saveStream, *(void **)gRoadData, 0x4440);

    /* Write city ownership map (0x4440 bytes) */
    {
        void *ownerData = *(void **)cityOwn;
        if (ownerData != NULL) {
            DetachResource(ownerData);
        }
        StreamWrite(saveStream, ownerData, 0x4440);
        if (*cityOwn != 0) {
            DisposeHandle(*cityOwn);
        }
    }

    /* Write embedded resource 1 (size byte-swapped via +0x198) */
    {
        int *subStream = OpenStream(*(int *)(resBase + 0x15C), 1, 0);
        long subSize = VtableDispatch(
            (int)subStream + (int)*(short *)(*subStream + 0xB8));
        void *buf = AllocateBlock(subSize);
        StreamRead(subStream, buf, subSize);

        vt = *saveStream;
        sw = ByteSwap32(subSize);
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 0x198), sw);

        StreamWrite(saveStream, buf, subSize);
        CloseStream(subStream, 1);
        FreeBlock(buf);
    }

    /* Write embedded resource 2 */
    histStream = OpenStream(*(int *)(resBase + 0x160), 1, 0);
    {
        long subSize2;
        StreamRead(histStream, &subSize2, 4);

        vt = *saveStream;
        sw = ByteSwap32(subSize2);
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 0x198), sw);

        vt = *saveStream;
        sw = ByteSwap32(subSize2);
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 0x198), sw);
    }

    /* Write turn history (per-turn replay data) */
    turnNumber = *(short *)(*gsPtr + 0x136);
    clampedTurn = turnNumber;
    if (turnNumber < 2) clampedTurn = 1;
    if (clampedTurn > 0xC9) clampedTurn = 0xC9;

    if (0 < clampedTurn - 1) {
        short turn;
        for (turn = 1; turn <= clampedTurn - 1; turn++) {
            unsigned char turnBuf[104];

            /* Read and re-write turn record size (swapped) */
            VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0x100));
            vt = *saveStream;
            sw = ByteSwap16(0);
            VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

            /* 24 swapped shorts (per-turn stats) */
            for (j = 0; j < 0x18; j++) {
                VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0x100));
                vt = *saveStream;
                sw = ByteSwap16(0);
                VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
            }

            /* Army visibility bytes (padded to even) */
            {
                short armyCnt = *(short *)(*gsPtr + 0x1602);
                if (armyCnt != 0 && armyCnt % 2 == 1) {
                    armyCnt = armyCnt + 1;
                }
                VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0xE0),
                               (int)turnBuf, armyCnt);
                VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                               (int)turnBuf, armyCnt);
            }

            /* Move count (swapped) + per-move data */
            {
                short moveCountVal;
                VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0x100));
                moveCountVal = ByteSwap16(0);

                vt = *saveStream;
                sw = ByteSwap16(moveCountVal);
                VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

                for (j = 0; j < moveCountVal; j++) {
                    unsigned char moveBuf[16];
                    unsigned char b1, b2;

                    /* 2 bytes */
                    b1 = (unsigned char)VtableDispatch(
                        (int)histStream + (int)*(short *)(*histStream + 0xE8));
                    VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x178), b1);

                    b2 = (unsigned char)VtableDispatch(
                        (int)histStream + (int)*(short *)(*histStream + 0xE8));
                    VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x178), b2);

                    /* 2 swapped shorts */
                    VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0x100));
                    vt = *saveStream; sw = ByteSwap16(0);
                    VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

                    VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0x100));
                    vt = *saveStream; sw = ByteSwap16(0);
                    VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

                    /* 16 bytes raw */
                    VtableDispatch((int)histStream + (int)*(short *)(*histStream + 0xE0),
                                   (int)moveBuf, 0x10);
                    VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                                   (int)moveBuf, 0x10);
                }
            }
        }
    }

    CloseStream(histStream, 1);

    /* Write city records (8 cities, per-field byte-swapped) */
    for (i = 0; i < 8; i++) {
        unsigned short *cityData = (unsigned short *)GetCityByIndex(i);
        unsigned short *pField;

        /* 0x2B (43) swapped shorts */
        pField = cityData;
        for (j = 0; j < 0x2B; j++) {
            vt = *saveStream;
            sw = ByteSwap16(*pField);
            pField++;
            VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
        }

        /* 500 bytes raw (name/description) */
        VtableDispatch((int)saveStream + (int)*(short *)(*saveStream + 0x170),
                       (int)(cityData + 0x2B), 500);

        /* 1 extra swapped short at offset 0x125 */
        vt = *saveStream;
        sw = ByteSwap16(cityData[0x125]);
        VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);

        /* 0xB8 (184) swapped shorts (production data) */
        pField = cityData + 0x126;
        for (j = 0; j < 0xB8; j++) {
            vt = *saveStream;
            sw = ByteSwap16(*pField);
            pField++;
            VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
        }

        /* 0x38 (56) swapped shorts (extended data) */
        pField = cityData + 0x1DE;
        for (j = 0; j < 0x38; j++) {
            vt = *saveStream;
            sw = ByteSwap16(*pField);
            pField++;
            VtableDispatch((int)saveStream + (int)*(short *)(vt + 400), sw);
        }

        ReleaseCityData(i);                                  /* FUN_1000d9ac */
    }

    /* Flush city cache */
    FlushCityCache();                                        /* FUN_1000c7b4 */

    /* Write shared city data block (0x4B0 bytes raw) */
    /* Original: FUN_100524d4(piVar8, **(undefined4 **)(iVar17 + -0x430), 0x4b0) */

    /* Close the save stream */
    CloseStream(saveStream, 1);
}
