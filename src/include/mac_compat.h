/*
 * mac_compat.h - Mac OS Toolbox Compatibility Layer
 *
 * When building on modern systems (MODERN_BUILD=1), this header
 * provides stub definitions for Mac OS Toolbox types and functions.
 * On actual Mac OS / PowerPC builds, the real headers are used instead.
 */

#ifndef MAC_COMPAT_H
#define MAC_COMPAT_H

#ifdef MODERN_BUILD

/* ===== Basic Types ===== */
typedef unsigned char   Boolean;
typedef signed char     SignedByte;
typedef unsigned char   Byte;
typedef char           *Ptr;
typedef Ptr            *Handle;
typedef long            Size;
typedef short           OSErr;
typedef unsigned long   OSType;
typedef unsigned long   ResType;
typedef short           ScriptCode;

/* ===== Ghidra decompiler types (not cleaned by extract_functions.py) ===== */
typedef signed char     int8;
typedef long long       longlong;
typedef unsigned long long ulonglong;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned char   byte;
typedef int             bool;
typedef int             undefined;
typedef int             undefined4;
typedef short           undefined2;
typedef char            undefined1;
typedef long long       undefined8;

typedef unsigned char   Str255[256];
typedef unsigned char   Str63[64];
typedef unsigned char   Str31[32];
typedef unsigned char   Str27[28];
typedef unsigned char   Str15[16];

#define noErr           0
#define nil             NULL
#define true            1
#define false           0

/* ===== QuickDraw Types ===== */
typedef struct Point {
    short   v;
    short   h;
} Point;

typedef struct Rect {
    short   top;
    short   left;
    short   bottom;
    short   right;
} Rect;

typedef struct RGBColor {
    unsigned short red;
    unsigned short green;
    unsigned short blue;
} RGBColor;

typedef struct BitMap {
    Ptr     baseAddr;
    short   rowBytes;
    Rect    bounds;
} BitMap;

typedef struct PixMap {
    Ptr             baseAddr;
    short           rowBytes;
    Rect            bounds;
    short           pmVersion;
    short           packType;
    long            packSize;
    long            hRes;
    long            vRes;
    short           pixelType;
    short           pixelSize;
    short           cmpCount;
    short           cmpSize;
    long            planeBytes;
    Handle          pmTable;
    long            pmReserved;
} PixMap;

typedef PixMap *PixMapPtr;
typedef PixMapPtr *PixMapHandle;

typedef struct GrafPort {
    short       device;
    BitMap      portBits;
    Rect        portRect;
    /* ... simplified */
} GrafPort;

typedef GrafPort *GrafPtr;
typedef GrafPtr WindowPtr;

typedef struct CGrafPort {
    short       device;
    PixMapHandle portPixMap;
    Rect        portRect;
    /* ... simplified */
} CGrafPort;

typedef CGrafPort *CGrafPtr;
typedef CGrafPtr CWindowPtr;

typedef struct GWorldPtr_s *GWorldPtr;

typedef struct FontInfo {
    short   ascent;
    short   descent;
    short   widMax;
    short   leading;
} FontInfo;

/* ===== Resource Manager ===== */
typedef Handle  PicHandle;
typedef Handle  CIconHandle;

/* ===== Sound Types ===== */
typedef struct SndChannel {
    /* simplified */
    long    data[32];
} SndChannel;

typedef SndChannel *SndChannelPtr;

/* ===== QuickDraw Stubs ===== */
#define CopyBits(src, dst, srcRect, dstRect, mode, rgn) \
    do { /* stub */ } while(0)
#define CopyMask(src, mask, dst, srcRect, maskRect, dstRect) \
    do { /* stub */ } while(0)
#define SetRect(r, l, t, ri, b) \
    do { (r)->left=(l); (r)->top=(t); (r)->right=(ri); (r)->bottom=(b); } while(0)
#define OffsetRect(r, dh, dv) \
    do { (r)->left+=(dh); (r)->top+=(dv); (r)->right+=(dh); (r)->bottom+=(dv); } while(0)
#define InsetRect(r, dh, dv) \
    do { (r)->left+=(dh); (r)->top+=(dv); (r)->right-=(dh); (r)->bottom-=(dv); } while(0)
#define PaintRect(r)                /* stub */
#define EraseRect(r)                /* stub */
#define FrameRect(r)                /* stub */
#define MoveTo(h, v)                /* stub */
#define LineTo(h, v)                /* stub */
#define DrawText(p, o, l)           /* stub */
#define GetFontInfo(fi)             do { (fi)->ascent=12; (fi)->descent=3; (fi)->widMax=8; (fi)->leading=2; } while(0)
#define StringWidth(s)              ((short)(s)[0] * 6)  /* rough estimate */
#define RGBForeColor(c)             /* stub */
#define RGBBackColor(c)             /* stub */

/* ===== GWorld Stubs ===== */
#define NewGWorld(gw, depth, bounds, ctab, gdev, flags) noErr
#define DisposeGWorld(gw)           /* stub */
#define LockPixels(pm)              true
#define UnlockPixels(pm)            /* stub */
#define GetGWorldPixMap(gw)         NULL
#define SetGWorld(gw, gd)           /* stub */
#define GetGWorld(gw, gd)           /* stub */

/* ===== Resource Manager Stubs ===== */
#define GetResource(type, id)       NULL
#define ReleaseResource(h)          /* stub */
#define Get1Resource(type, id)      NULL
#define CountResources(type)        0
#define GetPicture(id)              NULL
#define GetCIcon(id)                NULL
#define DisposeCIcon(h)             /* stub */
#define DrawPicture(pic, rect)      /* stub */
#define PlotCIcon(rect, icon)       /* stub */

/* ===== Memory Manager Stubs ===== */
#define NewPtr(size)                calloc(1, (size))
#define NewPtrClear(size)           calloc(1, (size))
#define DisposePtr(p)               free(p)
#define NewHandle(size)             ((Handle)calloc(1, sizeof(Ptr)))
#define DisposeHandle(h)            free(h)
#define HLock(h)                    /* stub */
#define HUnlock(h)                  /* stub */
#define GetHandleSize(h)            0L
#define BlockMoveData(s,d,n)        memcpy((d),(s),(n))

/* ===== Sound Manager Types & Stubs ===== */
typedef struct SndCommand {
    unsigned short cmd;
    short param1;
    long param2;
} SndCommand;

typedef void *SndCallbackUPP;
typedef SndCallbackUPP SndCallBackUPP; /* legacy spelling */
typedef Handle SndListHandle;

typedef struct SCStatus {
    long scStartTime;
    long scEndTime;
    long scCurrentTime;
    Boolean scChannelBusy;
    Boolean scChannelDisposed;
    Boolean scChannelPaused;
    Boolean scUnused;
    unsigned long scChannelAttributes;
    long scCPULoad;
} SCStatus;

typedef long ComponentResult;
typedef long Fixed;

#define SndNewChannel(chan, synth, init, proc) noErr
#define SndDisposeChannel(chan, quiet) noErr
#define SndDoCommand(chan, cmd, wait) noErr
#define SndDoImmediate(chan, cmd) noErr
#define SndChannelStatus(chan, size, status) noErr

/* ===== Misc Stubs ===== */
#define Random()                    ((unsigned long)rand())
#define NumToString(n, s)           do { sprintf((char*)(s)+1, "%ld", (long)(n)); (s)[0]=strlen((char*)(s)+1); } while(0)
#define CopyCStringToPascal(c, p)   do { size_t _l=strlen(c); if(_l>255)_l=255; (p)[0]=_l; memcpy((p)+1,(c),_l); } while(0)

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#endif /* MODERN_BUILD */

#endif /* MAC_COMPAT_H */
