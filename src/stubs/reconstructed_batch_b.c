/*
 * reconstructed_batch_b.c - Reconstructed Warlords II functions (batch B)
 *
 * 36 functions from address range 0x10040fb8-0x1007ceb0
 * Extracted from Ghidra decompilation output.
 *
 * Reconstructed from Ghidra-decompiled PowerPC binary.
 * Original developer: Strategic Studies Group (Steve Fawkner)
 */

#include "warlords2.h"

/* Ghidra helper macros */
#ifndef ZEXT48
#define ZEXT48(x) ((unsigned long long)(unsigned int)(x))
#endif
#ifndef CONCAT44
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#endif
#ifndef CONCAT13
#define CONCAT13(hi, lo) (((unsigned int)(unsigned char)(hi) << 24) | ((unsigned int)(lo) & 0x00FFFFFF))
#endif

/* TVect pointer - PEF import table base for global offset calculations */
#ifdef MODERN_BUILD
static char _tvect_dummy_bb[0x2000] = {0};
#define DOT_TVECT ((void **)(_tvect_dummy_bb + 0x1000))
#else
extern char *TVect_OCECToRString;
#define DOT_TVECT ((void **)&TVect_OCECToRString)
#endif

/* ===== Extern globals NOT already in wl2_globals.h ===== */

extern pint *piRam10115e34;
extern pint *gActiveDocView;
extern pint *gInfoWindow;
extern pint *gMainGameWindow;
extern pint *piRam101176b4;
extern pint *piRam101176b0;
extern pint *piRam101176ac;

#define piRam10117468 gExtState
#define piRam101174b0 ((pint *)(void *)gTargetCoords)

extern int *piRam10115f50;
extern int *piRam10115f64;
extern int *piRam10115fc8;
extern int *piRam10116018;

extern short *gAutoModeFlag;
extern short *psRam10115fd4;
extern short *psRam10115fe0;
extern short *gForceRedrawFlag;
extern short *gUIShortGlobal;
extern short *psRam10117558;
extern short *psRam10117600;
extern short *psRam101175fc;
extern short *_FUN_10115e4c;

extern unsigned short *puRam10115e98;
extern unsigned short *puRam10115f40;
extern unsigned short *puRam101174f4;
extern unsigned short *puRam101174f8;
extern unsigned short *puRam101176e4;

extern unsigned int *puRam1011735c;
extern unsigned int *puRam10117624;
extern unsigned int *puRam10117628;
extern unsigned int *puRam10117644;
extern unsigned int *puRam101169c4;

extern int *puRam1011734c;
extern int *puRam101175d0;
extern int *puRam10117370;
extern int *puRam101176a8;
extern int *puRam101176a4;
extern int *puRam101176a0;
extern int *puRam1011769c;
extern int *puRam10117698;
extern int *puRam10117694;
extern int *_FUN_10117690;
extern int *puRam1011768c;
extern int *puRam101176d0;
extern int *puRam101176c8;
extern int *puRam101176c4;
extern int *puRam10117618;
extern int *puRam10117730;

extern long gSpriteTable;
extern long gCombatDisplayPieces;
extern long iRam10117654;
extern long iRam10115fdc;
extern long iRam10117634;
extern long iRam10117638;
extern long iRam1011763c;
extern long iRam10117640;
extern long iRam101176ec;
extern long gDisplayState;
extern long iRam101176f4;
extern long iRam101176f8;

extern int uRam10115edc;
extern int uRam10115ee0;
extern int uRam10115f28;
extern int uRam1011626c;
extern int uRam101175f8;
extern int gColorPalette;
extern int uRam10116098;

extern char *pcRam101161c8;

/* psRam101176fc -> gAIPathThreshold (already in wl2_globals.h as macro) */

/* Forward declarations */
void FUN_1002b91c(void);
unsigned long long LookupCityAtPos(short, short);
void FUN_10025758(short, short, short);
int FUN_1005f50c(short, short, short);
short RandomRange(short, short, short);
void DispatchNextPhase(int *, long long);
void FUN_10044d8c(short);
short CheckQuestCondition(short);
void GetUnitStats(short, int *);


/* ======================================================================
 * FUN_10040fb8 - Game initialization / new turn setup
 * Address: 0x10040fb8, Size: 308 bytes
 * ====================================================================== */
void FUN_10040fb8(void)
{
  int *piVar1;
  void **ppuVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;

  iVar5 = gCombatDisplayPieces;
  piVar1 = piRam1011735c;
  ppuVar2 = DOT_TVECT;
  if (*(short *)(*piRam1011735c + 0x15c) == 0) {
    FUN_10027448();
    FUN_1003e0b0();
    FUN_10008f70();
    *(int *)ppuVar2[-0xfc] = 0;
    *(int *)ppuVar2[-0x70] = 0;
    iVar4 = 0;
    do {
      *(int *)(iVar4 * 4 + iVar5) = 0;
      sVar6 = (short)iVar4 + 1;
      iVar4 = (int)sVar6;
    } while (sVar6 < 8);
    FUN_1002c85c();
    FUN_10007f78();
    FUN_1003d6c4();
    sVar6 = 0;
    iVar5 = 0;
    do {
      iVar4 = *piVar1 + iVar5 * 2;
      if ((*(short *)(iVar4 + 0x138) != 0) && (*(short *)(iVar4 + 0xd0) == 0)) {
        sVar6 = sVar6 + 1;
      }
      sVar7 = (short)iVar5 + 1;
      iVar5 = (int)sVar7;
    } while (sVar7 < 8);
    if ((1 < sVar6) && (*(short *)(*piVar1 + 0x124) != 0)) {
      FUN_1003d5d4();
    }
    FUN_1003d4dc();
    iVar5 = *(int *)ppuVar2[-0x155];
    *(char *)(iVar5 + 0x9a) = 1;
    uVar3 = GetTickCount();
    *(int *)(iVar5 + 0x9c) = uVar3;
  }
  return;
}


/* ======================================================================
 * FUN_100410ec - Turn start / player initialization
 * Address: 0x100410ec, Size: 540 bytes
 * ====================================================================== */
void FUN_100410ec(void)
{
  int iVar1;
  unsigned short *puVar2;
  pint *piVar3;
  int *puVar4;
  pint *piVar5;
  int iVar6;
  short sVar7;

  piVar5 = piRam1011735c;
  puVar4 = puRam1011734c;
  piVar3 = gActiveDocView;
  puVar2 = puRam10115e98;
  if ((*(short *)(*piRam1011735c + 0x15c) == 0) || (*(short *)(*piRam1011735c + 0x158) == 0)) {
    iVar6 = 0;
    do {
      iVar1 = *piRam1011735c + iVar6 * 2;
      if ((*(short *)(iVar1 + 0x138) != 0) && (*(short *)(iVar1 + 0xd0) == 0)) break;
      sVar7 = (short)iVar6 + 1;
      iVar6 = (int)sVar7;
    } while (sVar7 < 8);
    FUN_100013f8(0xffffffffffffffffLL, 0);
    UpdateArmyDisplay(*(unsigned short *)(*piVar5 + 0x110));
    FUN_1002b91c();
    FUN_10044110(*(unsigned short *)(*piVar5 + 0x110), 1);
    FUN_10027040();
    FUN_1006616c();
    FUN_1002febc(*(unsigned short *)(*piVar5 + 0x110));
    FUN_10009700();
    iVar6 = ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x5f0), 1);
    if ((iVar6 != 0) && (*(short *)(*piVar5 + *(short *)(*piVar5 + 0x110) * 2 + 0xd0) == 1)) {
      ResourceRead_Dispatch((int)*(int **)(iVar6 + 0x90) + (int)*(short *)(**(int **)(iVar6 + 0x90) + 0x738),
                   1, 1);
      ResourceRead_Dispatch((int)*(int **)(iVar6 + 0x94) + (int)*(short *)(**(int **)(iVar6 + 0x94) + 0x738),
                   1, 1);
    }
    FUN_10075894(*puVar4);
    if (*(short *)(*piVar5 + *(short *)(*piVar5 + 0x110) * 2 + 0xd0) == 1) {
      SelectMusic(2);
      *puVar2 = *(unsigned short *)(*piVar5 + 0x110);
      FUN_100651cc();
    }
    else {
      FUN_10065b2c(*(unsigned short *)(*piVar5 + 0x110));
      *puVar2 = *(unsigned short *)(*piVar5 + 0x110);
    }
  }
  return;
}


/* ======================================================================
 * FUN_10041cf8 - Movement continuation
 * Address: 0x10041cf8, Size: 180 bytes
 * ====================================================================== */
void FUN_10041cf8(void)
{
  pint *piVar1;
  int iVar2;

  piVar1 = piRam101176e0;
  ResourceRead_Dispatch((int)*(int **)(*piRam1011734c + 0x88) +
               (int)*(short *)(**(int **)(*piRam1011734c + 0x88) + 0x228));
  iVar2 = *piVar1;
  if ((iVar2 != 0) && (-1 < *(short *)(iVar2 + 0x12))) {
    FUN_100419b0(*(short *)(iVar2 + 0x12), *(unsigned short *)(iVar2 + 0x14), 1);
  }
  iVar2 = GetNextDefender();
  while (iVar2 != 0) {
    *(unsigned short *)(iVar2 + 0xc) = *(unsigned short *)(iVar2 + 0xc) | 0x200;
    if (-1 < *(short *)(iVar2 + 0x12)) {
      PrepareDefender(iVar2);
      FUN_1005cc8c();
      iVar2 = *piVar1;
      FUN_100419b0(*(unsigned short *)(iVar2 + 0x12), *(unsigned short *)(iVar2 + 0x14), 1);
    }
    iVar2 = GetNextDefender();
  }
  FUN_1003dc28();
  return;
}


/* ======================================================================
 * FUN_10044d8c - Unit type display
 * Address: 0x10044d8c, Size: 832 bytes
 * ====================================================================== */
void FUN_10044d8c(short param_1)
{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  int uVar4;
  int uVar5;
  int iVar6;
  long long uVar7;
  int iVar9;
  char *puVar10;
  long long uVar8;
  int iVar11;
  unsigned short *puVar12;
  unsigned long long uVar13;
  int local_d4;
  unsigned short local_98[2];
  char auStack_94[56];
  char auStack_5c[92];

  piVar1 = puRam1011734c;
  iVar6 = gSpriteTable;
  uVar5 = uRam10115ee0;
  uVar4 = uRam10115edc;
  uVar13 = (unsigned long long)param_1;
  puVar12 = (unsigned short *)(&local_98);
  puVar10 = auStack_94;
  uVar7 = FUN_100014b8();
  if (((*(unsigned int *)((int)(((uVar13 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2) + iVar6) >> 0x18 & 1)
       == 0) ||
     (iVar9 = FUN_100001e0(uVar5, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0x8c), iVar9 == 0)) {
    if (*(unsigned int *)((int)(((uVar13 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2) + iVar6) >> 0x1e == 3) {
      FUN_1007ee44(*(int *)(*piVar1 + 0x88));
      if (param_1 == 0x2a) {
        DrawNumber(puVar10, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0xb4, uVar4);
      }
      else {
        DrawNumber(puVar10, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0xc0, uVar4, uVar13 - 0x10);
      }
    }
    else if (*(unsigned int *)((int)(((uVar13 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2) + iVar6) >> 0x1e == 1) {
      piVar1 = *(int **)(*(int *)(*piVar1 + 0x88) + 0x148);
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
      puVar10 = (char *)FUN_1005f6b0(3, uVar13);
    }
    else if (*(unsigned int *)((int)(((uVar13 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2) + iVar6) >> 0x1e == 2) {
      piVar1 = *(int **)(*(int *)(*piVar1 + 0x88) + 0x14c);
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
      puVar10 = (char *)FUN_1005f6b0(3, uVar13);
    }
    else {
      FUN_100efc78(*(unsigned short *)(local_d4 + -0x60));
      puVar10 = (char *)FUN_1005f6b0(3, uVar13);
    }
  }
  else {
    FUN_1007f034(*(int *)(*piVar1 + 0x88));
    if (param_1 == 9) {
      DrawNumber(puVar10, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0x90, uVar5);
    }
    else if (param_1 == 5) {
      DrawNumber(puVar10, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0x98, uVar5);
    }
    else if (param_1 == 0x26) {
      DrawNumber(puVar10, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0xa0, uVar5);
    }
    else {
      DrawNumber(puVar10, (unsigned long long)*(unsigned int *)(local_d4 + -0x19c8) + 0xa8, uVar5, uVar13 - 0x47);
    }
  }
  iVar9 = FUN_10044c60(*(int *)
                        ((int)(((uVar13 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 2) + iVar6 + 4),
                       auStack_5c, puVar10);
  if (iVar9 == 0) {
    FocusObject(0);
  }
  iVar3 = (param_1 * 4 + (int)param_1) * 4;
  iVar9 = iVar3 + iVar6;
  uVar2 = *(unsigned int *)(iVar3 + iVar6);
  *(unsigned int *)(iVar3 + iVar6) = uVar2 | 0x20000000;
  if ((uVar2 >> 0x1a & 1) != 0) {
    uVar8 = HLock_Thunk_Sound(*(int *)(*(int *)(iVar9 + 4) + 0x10));
    iVar11 = FUN_10001d70(uVar8);
    if (iVar11 != 0) {
      *puVar12 = (unsigned short)((unsigned int)*(int *)(iVar3 + iVar6) >> 0x19) & 1;
      FUN_1005262c(puVar12, *(int *)(iVar9 + 4), *(int *)(iVar9 + 0xc),
                   *(unsigned short *)(iVar9 + 0x10));
      *(unsigned int *)(iVar3 + iVar6) =
           ((int)(short)*puVar12 & 1U) << 0x19 | *(unsigned int *)(iVar3 + iVar6) & 0xfdffffff;
      HUnlock_Thunk(uVar8);
    }
  }
  DisposeGeneric(uVar7);
  return;
}


/* ======================================================================
 * FUN_100450f4 - Clear unit flags
 * Address: 0x100450f4, Size: 124 bytes
 * ====================================================================== */
void FUN_100450f4(short param_1)
{
  int iVar1;
  void **ppuVar2;
  int iVar3;

  ppuVar2 = DOT_TVECT;
  iVar3 = param_1 * 0x14;
  iVar1 = iVar3 + gSpriteTable;
  *(unsigned int *)(iVar3 + gSpriteTable) = *(unsigned int *)(iVar3 + gSpriteTable) & 0xddffffff;
  FUN_1000a094(*(int *)(iVar1 + 4));
  if ((*(unsigned int *)((pint)ppuVar2[-0x66f] + iVar3) >> 0x1a & 1) != 0) {
    FUN_1000a094(*(int *)(iVar1 + 0xc));
  }
  return;
}


/* ======================================================================
 * FUN_10045f0c - Check/load unit resources
 * Address: 0x10045f0c, Size: 288 bytes
 * ====================================================================== */
void FUN_10045f0c(short param_1)
{
  int bVar1;
  int iVar2;
  long long uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned long long uVar6;

  iVar2 = gSpriteTable;
  uVar6 = (unsigned long long)param_1;
  iVar4 = *(int *)((int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 2) + gSpriteTable + 4);
  bVar1 = 1;
  if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) {
    uVar3 = HLock_Thunk_Sound(iVar4);
    if ((int)uVar3 != 0) {
      iVar4 = FUN_10001d70(uVar3);
      if (iVar4 != 0) {
        HUnlock_Thunk(uVar3);
        bVar1 = 0;
      }
    }
  }
  iVar4 = (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 2);
  uVar5 = *(unsigned int *)(iVar4 + iVar2) >> 0x1a & 1;
  if ((((uVar5 != 0) && (iVar4 = *(int *)(iVar4 + iVar2 + 0xc), iVar4 != 0)) &&
      (iVar4 = *(int *)(iVar4 + 0x10), iVar4 != 0)) &&
     ((uVar3 = HLock_Thunk_Sound(iVar4), (int)uVar3 != 0 && (iVar4 = FUN_10001d70(uVar3), iVar4 != 0))))
  {
    HUnlock_Thunk(uVar3);
    uVar5 = 0;
  }
  if ((bVar1) || (uVar5 != 0)) {
    FUN_10044d8c(uVar6);
  }
  return;
}


/* ======================================================================
 * CheckQuestCondition - Army auxiliary strength calculation
 * Address: 0x1004639c, Size: 192 bytes
 * ====================================================================== */
short CheckQuestCondition(short param_1)
{
  pint *piVar1;
  short sVar2;
  unsigned short uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  char auStack_58[30];
  unsigned short local_3a;

  piVar1 = piRam1011735c;
  sVar2 = FUN_10048c3c((int)param_1);
  sVar4 = 0;
  if (sVar2 < 2) {
    sVar4 = 0;
  }
  else {
    iVar6 = 1;
    if (1 < sVar2) {
      do {
        GetUnitStats(*(char *)(*piVar1 + param_1 * 0x42 + iVar6 + 0x161a), (int *)auStack_58);
        uVar3 = AbsShort(local_3a);
        sVar4 = sVar4 + ((short)uVar3 >> 1) + (unsigned short)((short)uVar3 < 0 && (uVar3 & 1) != 0);
        sVar5 = (short)iVar6 + 1;
        iVar6 = (int)sVar5;
      } while (sVar5 < sVar2);
    }
  }
  return sVar4;
}


/* ======================================================================
 * GetUnitStats - Unit type info copy from instance table
 * Address: 0x10049628, Size: 256 bytes
 * ====================================================================== */
void GetUnitStats(short param_1, int *param_2)
{
  int uVar1;
  unsigned int uVar8;
  pint *piVar9;
  int *puVar10;
  int iVar11;
  short sVar12;
  int uVar2;
  int uVar3;
  int uVar4;
  int uVar5;
  int uVar6;
  int uVar7;

  piVar9 = puRam101175d0;
  LockUnitData();
  iVar11 = 0;
  do {
    puVar10 = (int *)(*piVar9 + iVar11 * 0x3e);
    if (*(short *)(*piVar9 + iVar11 * 0x3e) == param_1) {
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      uVar4 = puVar10[4];
      uVar5 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      *param_2 = *puVar10;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      param_2[4] = uVar4;
      param_2[5] = uVar5;
      param_2[6] = uVar6;
      param_2[7] = uVar7;
      uVar1 = puVar10[9];
      uVar2 = puVar10[10];
      uVar3 = puVar10[0xb];
      uVar4 = puVar10[0xc];
      uVar5 = puVar10[0xd];
      uVar6 = puVar10[0xe];
      uVar8 = puVar10[0xf];
      param_2[8] = puVar10[8];
      param_2[9] = uVar1;
      param_2[10] = uVar2;
      param_2[0xb] = uVar3;
      param_2[0xc] = uVar4;
      param_2[0xd] = uVar5;
      param_2[0xe] = uVar6;
      param_2[0xf] = uVar8 & 0xffff0000;
      break;
    }
    sVar12 = (short)iVar11 + 1;
    iVar11 = (int)sVar12;
  } while (sVar12 < 0x1d);
  UnlockUnitData();
  return;
}


/* ======================================================================
 * FUN_1004bd0c - Quest/search dialog
 * Address: 0x1004bd0c, Size: 940 bytes
 * ====================================================================== */
void FUN_1004bd0c(void)
{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int *puVar4;
  void **ppuVar5;
  unsigned long long uVar6;
  int iVar8;
  long long uVar7;
  int *piVar9;
  int local_4b4;
  char auStack_490[256];
  char auStack_390[256];
  char auStack_290[256];
  char auStack_190[80];
  char auStack_140[256];
  unsigned short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  puVar4 = puRam10117370;
  puVar3 = puRam1011735c;
  piVar2 = piRam10115f64;
  ppuVar5 = DOT_TVECT;
  SelectMusic(5);
  uVar6 = LookupRuinAtPos(**(unsigned short **)ppuVar5[-0x70], (*(unsigned short **)ppuVar5[-0x70])[1]);
  if (*piVar2 == 0) {
    iVar8 = ResourceRead_Dispatch((int)*(int **)ppuVar5[-0x79] +
                         (int)*(short *)(**(int **)ppuVar5[-0x79] + 200), 0x100e,
                         *(int *)(*(int *)ppuVar5[-0x155] + 0x88));
    *piVar2 = iVar8;
    FocusObject();
  }
  ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 800));
  uVar7 = FUN_1005f678(0x14, 0);
  DrawNumber(auStack_190, uVar7, (unsigned long long)*puVar3 + (uVar6 & 0x7ffffff) * 0x20 + 0x816);
  BuildPascalString(auStack_290, auStack_190);
  FUN_10090e0c(*piVar2, 0x6c696e31, auStack_290, 1);
  uVar7 = FUN_1005f678(0x14, 1);
  BuildPascalString(auStack_390, uVar7);
  FUN_10090e0c(*piVar2, 0x6c696e32, auStack_390, 1);
  uVar7 = FUN_1005f678(0x14, 2);
  BuildPascalString(auStack_490, uVar7);
  FUN_10090e0c(*piVar2, 0x6c696e33, auStack_490, 1);
  piVar9 = (int *)ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308), 0x71756573);
  if (piVar9 == (int *)0x0) goto LAB_1004bf3c;
  uVar1 = *puVar3;
  if (*(short *)(uVar1 + 0x11e) == 0) {
LAB_1004bf0c:
    uVar7 = 1;
  }
  else {
    if ((*(short *)(*(short *)(uVar1 + 0x110) * 0xc + uVar1 + 0x1142) != 0) ||
       (**(int **)(local_4b4 + -0x3f0) == 0)) goto LAB_1004bf0c;
    uVar7 = 0;
  }
  ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x738), uVar7, 1);
LAB_1004bf3c:
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = *puVar4;
  *puVar4 = (int)auStack_140;
  iVar8 = TrySetjmp(auStack_140);
  if (iVar8 == 0) {
    iVar8 = ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
    *piVar2 = 0;
    ResourceRead_Dispatch(**(int **)(local_4b4 + -0x1698) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x1698) + 0x4c8));
    ResourceRead_Dispatch(**(int **)(local_4b4 + -0x1504) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x1504) + 0x4c8));
    ResourceRead_Dispatch(**(int **)(local_4b4 + -0x18fc) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x18fc) + 0x4c8));
    ResourceRead_Dispatch(**(int **)(local_4b4 + -0x16a0) +
                 (int)*(short *)(*(int *)**(int **)(local_4b4 + -0x16a0) + 0x4c8));
    if (iVar8 == 0x71756573) {
      FUN_1004bc90();
    }
    else {
      FUN_1004bcd0();
    }
    *puVar4 = local_38;
  }
  else {
    piVar9 = (int *)*piVar2;
    if (piVar9 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x738));
    }
    *piVar2 = 0;
    FUN_100db158(local_40, local_3c);
  }
  return;
}


/* ======================================================================
 * FUN_1004d0d0 - Production dialog
 * Address: 0x1004d0d0, Size: 820 bytes
 * ====================================================================== */
void FUN_1004d0d0(void)
{
  int bVar1;
  pint *piVar2;
  int *piVar3;
  int *piVar4;
  pint *piVar5;
  int *puVar6;
  int iVar8;
  int *piVar9;
  long long uVar7;
  int iVar10;
  char auStack_238[256];
  char auStack_138[256];
  unsigned short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;

  puVar6 = puRam10117370;
  piVar5 = piRam10117360;
  piVar2 = piRam1011735c;
  piVar4 = puRam1011734c;
  piVar3 = piRam10115f64;
  bVar1 = *(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0xc + 0x1142) != 0;
  iVar10 = *(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0xc + 0x1146) * 0x16;
  iVar8 = *piRam10117360 + iVar10;
  if (((*(short *)(*piRam10117360 + iVar10) < 0) || (*(short *)(iVar8 + 2) < 0)) ||
     (*(char *)(iVar8 + 4) != '\x1c')) {
    bVar1 = 0;
  }
  if (*piRam10115f64 == 0) {
    iVar8 = ResourceRead_Dispatch(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200), 0x1068,
                         *(int *)(*piRam1011734c + 0x88));
    *piVar3 = iVar8;
    FocusObject();
  }
  ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 800));
  if (!bVar1) {
    piVar9 = (int *)ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308), 0x7469746c);
    if (piVar9 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x660), 1, 1);
    }
    piVar9 = (int *)ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x308), 0x7363726f);
    if (piVar9 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x660), 0, 1);
    }
    uVar7 = FUN_1005f678(0x15, 0xffffffffffffffffLL);
    BuildPascalString(auStack_238, uVar7);
    FUN_10090e0c(*piVar3, 0x6e6f6e65, auStack_238, 1);
  }
  RefreshDisplay(0, 0, 0);
  if (bVar1) {
    FUN_1004c0b8();
    iVar8 = *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0xc + 0x1146) * 0x16;
    DrawMovementPathArrow(*(unsigned short *)(*piVar5 + iVar8), *(unsigned short *)(*piVar5 + iVar8 + 2), 1);
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = *puVar6;
  *puVar6 = (int)auStack_138;
  iVar8 = TrySetjmp(auStack_138);
  if (iVar8 == 0) {
    ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x810));
    ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x738));
    *piVar3 = 0;
    *puVar6 = local_30;
  }
  else {
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    }
    *piVar3 = 0;
    FUN_100db158(local_38, local_34);
  }
  DispatchNextPhase(*(int *)(*piVar4 + 0x88), 0x3fa);
  return;
}


/* ======================================================================
 * FUN_10050a48 - Army UI update
 * Address: 0x10050a48, Size: 240 bytes
 * ====================================================================== */
void FUN_10050a48(unsigned short param_1)
{
  int *piVar1;
  int *piVar2;

  piVar2 = piRam10115f50;
  *puRam10115f40 = param_1;
  FUN_1007f094(*(int *)(*puRam1011734c + 0x88), param_1);
  FUN_100501f4(1);
  FUN_10050830();
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar1 + 800) + (int)piVar1);
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
    *piVar2 = 0;
  }
  return;
}


/* ======================================================================
 * ScanDefenseGrid - Site/ruin interaction
 * Address: 0x1005447c, Size: 824 bytes
 * ====================================================================== */
void ScanDefenseGrid(void)
{
  short sVar1;
  short *psVar2;
  pint *piVar3;
  int iVar4;
  short *psVar5;
  pint *piVar6;
  pint *piVar7;
  pint *piVar8;
  int bVar9;
  char cVar10;
  int iVar11;
  unsigned long long uVar12;
  unsigned long long uVar13;
  int unaff_r31;

  piVar8 = piRam101174b0;
  piVar7 = piRam1011735c;
  piVar6 = piRam10117358;
  piVar3 = puRam1011734c;
  psVar5 = gAutoModeFlag;
  if ((*piRam101176e0 != 0) && ('\0' < *(char *)(*piRam101176e0 + 7))) {
    psVar2 = (short *)*piRam101176e0;
    sVar1 = *psVar2;
    uVar13 = (unsigned long long)sVar1;
    *psRam10117600 = sVar1;
    sVar1 = psVar2[1];
    uVar12 = (unsigned long long)sVar1;
    *psRam101175fc = sVar1;
    cVar10 = *(char *)(*piVar7 + (int)(short)(unsigned short)(unsigned char)((unsigned int)*(int *)
                                                                   (*piVar6 + (int)(((uVar12 &
                                                  0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5) +
                                                  (int)((uVar13 & 0xffffffff) << 1)) >> 0x18) +
                      0x711);
    iVar11 = 0;
    if (cVar10 == '\v') {
      unaff_r31 = LookupRuinAtPos(uVar13, uVar12);
      if (unaff_r31 < 0) {
        cVar10 = '\a';
      }
      else {
        iVar11 = *piVar7 + unaff_r31 * 0x20 + 0x812;
      }
    }
    if (*piVar8 == 0) {
      if ((cVar10 == '\v') && (*(char *)(iVar11 + 0x18) == '\x01')) {
        FUN_10052900(unaff_r31);
      }
    }
    else if ((cVar10 == '\v') &&
            ((*(unsigned int *)(*piVar6 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5) +
                       (int)((uVar13 & 0xffffffff) << 1)) >> 0x16 & 1) == 0)) {
      if (*(char *)(iVar11 + 0x18) == '\x03') {
        FUN_1003357c(*piVar8, 3);
        FUN_10038c60(*(unsigned short *)(*piVar7 + 0x110), 6, 0x65, 0,
                     *piVar7 + *(char *)(*piVar8 + 10) * 0x14 + 0x224);
        if ((*psVar5 == 0) && (*(short *)(*piVar7 + *(short *)(*piVar7 + 0x110) * 2 + 0xd0) != 1)) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        if (bVar9) {
          FUN_100126a4(unaff_r31);
          iVar11 = *piVar6 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5);
          iVar4 = (int)((uVar13 & 0xffffffff) << 1);
          *(unsigned int *)(iVar11 + iVar4) = *(unsigned int *)(iVar11 + iVar4) | 0x400000;
        }
        else {
          FUN_10052fdc(unaff_r31);
          iVar11 = *piVar6 + (int)(((uVar12 & 0x1fffffff) * 8 - uVar12 & 0xffffffff) << 5);
          iVar4 = (int)((uVar13 & 0xffffffff) << 1);
          *(unsigned int *)(iVar11 + iVar4) = *(unsigned int *)(iVar11 + iVar4) | 0x400000;
        }
      }
      else if (*(char *)(iVar11 + 0x18) == '\x01') {
        if ((*psVar5 == 0) && (*(short *)(*piVar7 + *(short *)(*piVar7 + 0x110) * 2 + 0xd0) != 1)) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        if (bVar9) {
          FUN_10052900(unaff_r31);
        }
        else {
          DispatchNextPhase(*(int *)(*piVar3 + 0x88), 0x3f9);
        }
      }
      else {
        FUN_100539e8(iVar11, uVar13, uVar12);
      }
      piVar3 = *(int **)(*piVar3 + 0x88);
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x228));
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x38), 0, 0);
    }
  }
  return;
}


/* ======================================================================
 * FUN_10055408 - Army info dialog
 * Address: 0x10055408, Size: 944 bytes
 * ====================================================================== */
void FUN_10055408(unsigned short param_1)
{
  int *piVar1;
  int *piVar2;
  int *puVar3;
  int iVar5;
  long long uVar4;
  int *piVar6;
  int local_664;
  char auStack_640[256];
  char auStack_540[256];
  char auStack_440[256];
  char auStack_340[256];
  char auStack_240[256];
  char auStack_140[256];
  unsigned short local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  puVar3 = puRam10117370;
  piVar2 = puRam1011734c;
  piVar1 = piRam10115f64;
  if (*piRam10115f64 == 0) {
    iVar5 = ResourceRead_Dispatch(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200), 0x1018,
                         *(int *)(*piRam1011734c + 0x88));
    *piVar1 = iVar5;
    FocusObject();
  }
  ResourceRead_Dispatch(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 800));
  uVar4 = FUN_1005f678(0x40, 0);
  BuildPascalString(auStack_240, uVar4);
  FUN_10090e0c(*piVar1, 0x73747231, auStack_240, 1);
  uVar4 = FUN_1005f678(0x40, 1);
  BuildPascalString(auStack_340, uVar4);
  FUN_10090e0c(*piVar1, 0x73747232, auStack_340, 1);
  uVar4 = FUN_1005f678(0x40, 2);
  BuildPascalString(auStack_440, uVar4);
  FUN_10090e0c(*piVar1, 0x73747233, auStack_440, 1);
  uVar4 = FUN_1005f678(0x40, 3);
  BuildPascalString(auStack_540, uVar4);
  FUN_10090e0c(*piVar1, 0x73747234, auStack_540, 1);
  uVar4 = FUN_1005f678(0x40, 4);
  BuildPascalString(auStack_640, uVar4);
  FUN_10090e0c(*piVar1, 0x73747235, auStack_640, 1);
  piVar6 = (int *)ResourceRead_Dispatch(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308), 0x6974656d);
  if (piVar6 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar6 + 0x738) + (int)piVar6,
                 ((long long)**(short **)(local_664 + -0x294) + -1 +
                  (unsigned long long)((long long)**(short **)(local_664 + -0x294) != 0) << 0x20) >> 0x3f, 1);
  }
  piVar6 = (int *)ResourceRead_Dispatch(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308), 0x6d617073);
  if (piVar6 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar6 + 0x738) + (int)piVar6,
                 *(short *)(**(int **)(local_664 + -0x544) + 0x124) == 0, 1);
  }
  FUN_100614ac(0, param_1);
  FUN_10061354(0);
  **(unsigned short **)(local_664 + -0x1938) = 1;
  piVar6 = (int *)*piVar1;
  if (piVar6 != (int *)0x0) {
    ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x810));
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = *puVar3;
    *puVar3 = (int)auStack_140;
    iVar5 = TrySetjmp(auStack_140);
    if (iVar5 == 0) {
      ResourceRead_Dispatch(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x738));
      *piVar1 = 0;
      FUN_10054928();
      *puVar3 = local_38;
    }
    else {
      piVar6 = (int *)*piVar1;
      if (piVar6 != (int *)0x0) {
        ResourceRead_Dispatch((int)*(short *)(*piVar6 + 0x738) + (int)piVar6);
      }
      *piVar1 = 0;
      FUN_100db158(local_40, local_3c);
    }
  }
  DispatchNextPhase(*(int *)(*piVar2 + 0x88), 0x3fa);
  return;
}


/* ======================================================================
 * FUN_1005bdb8 - Port/ship dialog
 * Address: 0x1005bdb8, Size: 1308 bytes
 * ====================================================================== */
void FUN_1005bdb8(void)
{
  short sVar1;
  int bVar2;
  int *puVar3;
  int *puVar4;
  short *psVar5;
  unsigned int *puVar6;
  pint *piVar8;
  unsigned short uVar11;
  long long uVar7;
  short sVar12;
  pint *piVar9;
  int *piVar10;
  short sVar13;
  int iVar14;
  int local_47c;
  char auStack_458[256];
  char auStack_358[256];
  char local_258[256];
  char auStack_158[256];
  unsigned short local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;

  piVar9 = piRam101176e0;
  puVar6 = puRam10117624;
  psVar5 = (short *)puRam10117618 + 2;  /* psRam10117620 */
  puVar4 = puRam10117618;
  puVar3 = puRam10117370;
  if (*piRam101176e0 != 0) {
    bVar2 = 0;
    if (*(char *)(*piRam1011735c +
                  (*(unsigned int *)(*piRam10117358 + ((short *)*piRam101176e0)[1] * 0xe0 +
                            *(short *)*piRam101176e0 * 2) >> 0x18) + 0x711) == '\t') {
      piVar10 = *(int **)(*puRam1011734c + 0x88);
      ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x228));
      piVar8 = (pint *)FUN_100522dc(piVar10[0x57], 1, 0);
      if (piVar8 != (pint *)0x0) {
        uVar11 = ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0xb8));
        **(unsigned short **)(local_47c + -0x284) = uVar11;
        uVar7 = AllocateBlock(uVar11);
        *puVar4 = (int)uVar7;
        StreamRead(piVar8, uVar7, uVar11);
        CloseStream(piVar8, 1);
        sVar1 = *(short *)*puVar4;
        *puVar6 = (unsigned int)((short *)*puVar4 + 1);
        iVar14 = 0;
        do {
          sVar12 = ByteSwap16(*(unsigned short *)(*puVar6 + iVar14 * 0x68));
          if ((sVar12 == *(short *)*piVar9) &&
             (sVar12 = ByteSwap16(*(unsigned short *)(*puVar6 + iVar14 * 0x68 + 2)),
             sVar12 == *(short *)(*piVar9 + 2))) {
            bVar2 = 1;
          }
          sVar12 = (short)iVar14;
          sVar13 = sVar12 + 1;
          iVar14 = (int)sVar13;
          if (bVar2) {
            *(short *)psVar5 = sVar12;
            local_58 = 0;
            local_54 = 0;
            local_4c = 0;
            local_48 = 0;
            local_50 = *puVar3;
            *puVar3 = (int)auStack_158;
            iVar14 = TrySetjmp(auStack_158);
            if (iVar14 == 0) {
              piVar9 = (pint *)ResourceRead_Dispatch(**(int **)(local_47c + -0x1e4) +
                                           (int)*(short *)(*(int *)**(int **)(local_47c + -0x1e4) +
                                                          200), 0xf3c, piVar10);
              FocusObject();
              piVar10 = (int *)ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),
                                            0x6c696e31);
              if (piVar10 != (int *)0x0) {
                BuildPascalString(auStack_358, (unsigned long long)*puVar6 + (long long)*(short *)psVar5 * 0x68 + 4);
                ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8), auStack_358, 0);
              }
              piVar10 = (int *)ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),
                                            0x6c696e32);
              if (piVar10 != (int *)0x0) {
                BuildPascalString(auStack_458, (unsigned long long)*puVar6 + (long long)*(short *)psVar5 * 0x68 + 0x36);
                ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8), auStack_458, 0);
              }
              ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 800));
              iVar14 = ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x810));
              ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x328));
              if (iVar14 == 0x6f6b2020) {
                local_258[0] = 0;
                piVar10 = (int *)ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),
                                              0x6c696e31);
                if (piVar10 != (int *)0x0) {
                  ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x7a0), local_258);
                  uVar7 = FUN_100b1b08(local_258);
                  BlockMoveData_Thunk((unsigned long long)*puVar6 + (long long)*(short *)psVar5 * 0x68 + 4, uVar7);
                }
                piVar10 = (int *)ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),
                                              0x6c696e32);
                if (piVar10 != (int *)0x0) {
                  ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x7a0), local_258);
                  uVar7 = FUN_100b1b08(local_258);
                  BlockMoveData_Thunk((unsigned long long)*puVar6 + (long long)*(short *)psVar5 * 0x68 + 0x36, uVar7);
                }
                FUN_1005bd28(piVar9);
              }
              ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x738));
              *puVar3 = local_50;
              return;
            }
            FUN_100db158(local_58, local_54);
            return;
          }
        } while (sVar13 < sVar1);
        FreeBlock(*puVar4);
      }
    }
  }
  return;
}


/* ======================================================================
 * FUN_1005e858 - Diplomacy dialog
 * Address: 0x1005e858, Size: 548 bytes
 * ====================================================================== */
void FUN_1005e858(void)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned long long uVar14;
  short sVar15;
  int local_154;
  char auStack_130[256];
  unsigned short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;

  iVar12 = iRam101176f8;
  iVar11 = iRam101176f4;
  iVar10 = gDisplayState;
  iVar9 = iRam101176ec;
  iVar8 = iRam10117640;
  iVar7 = iRam1011763c;
  iVar6 = iRam10117638;
  iVar13 = iRam10117634;
  puVar5 = puRam10117370;
  psVar4 = psRam10115fd4;
  piVar3 = piRam10115fc8;
  if (*piRam101176e0 != 0) {
    sVar15 = *gUIShortGlobal;
    *psRam10115fd4 = sVar15;
    uVar14 = 0;
    if (0 < sVar15) {
      do {
        iVar2 = (int)((uVar14 & 0xffffffff) << 2);
        *(int *)(iVar2 + iVar8) = *(int *)(iVar2 + iVar12);
        iVar2 = (int)((uVar14 & 0x7fffffff) << 1);
        *(unsigned short *)(iVar2 + iVar7) = *(unsigned short *)(iVar2 + iVar9);
        *(unsigned short *)(iVar2 + iVar6) = *(unsigned short *)(iVar2 + iVar10);
        *(unsigned short *)(iVar2 + iVar13) = *(unsigned short *)(iVar2 + iVar11);
        sVar15 = (short)uVar14 + 1;
        uVar14 = (unsigned long long)sVar15;
      } while (sVar15 < *psVar4);
    }
    *puRam10117644 = *puRam10117628;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = *puVar5;
    *puVar5 = (int)auStack_130;
    iVar13 = TrySetjmp(auStack_130);
    if (iVar13 == 0) {
      iVar13 = ResourceRead_Dispatch(**(int **)(local_154 + -0x1e4) +
                            (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200), 0xe24,
                            *(int *)(**(int **)(local_154 + -0x554) + 0x88));
      *piVar3 = iVar13;
      FocusObject();
      FUN_1005dd84(1, 0, 0xffffffffffffffffLL);
      FUN_1005e698();
      ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 800));
      iVar13 = ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x810));
      if (iVar13 == 0x6f6b2020) {
        FUN_1005e794();
      }
      else {
        FUN_1005e7c4();
      }
      ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x738));
      *piVar3 = 0;
      *puVar5 = local_28;
    }
    else {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
      }
      *piVar3 = 0;
      FUN_100db158(local_30, local_2c);
    }
  }
  return;
}


/* ======================================================================
 * FUN_1005ef84 - Terrain info dialog
 * Address: 0x1005ef84, Size: 448 bytes
 * ====================================================================== */
void FUN_1005ef84(void)
{
  int *piVar1;
  int *piVar2;
  pint *piVar3;
  int *puVar4;
  int iVar5;
  short sVar6;
  int local_154;
  char auStack_130[256];
  unsigned short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;

  puVar4 = puRam10117370;
  piVar3 = piRam1011735c;
  piVar1 = piRam10117350;
  piVar2 = piRam10115fc8;
  *puRam10117730 = 0;
  if (*piVar1 == 0) {
    iVar5 = AllocateBlock(0x3a);
    *piVar1 = iVar5;
    if (iVar5 == 0) {
      return;
    }
  }
  iVar5 = 0;
  do {
    *(short *)(*piVar1 + *(char *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0x1d + iVar5 + 0x60c) * 2
              ) = (short)iVar5;
    sVar6 = (short)iVar5 + 1;
    iVar5 = (int)sVar6;
  } while (sVar6 < 0x1d);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = *puVar4;
  *puVar4 = (int)auStack_130;
  iVar5 = TrySetjmp(auStack_130);
  if (iVar5 == 0) {
    iVar5 = ResourceRead_Dispatch(**(int **)(local_154 + -0x1e4) +
                         (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200), 0xe10,
                         *(int *)(**(int **)(local_154 + -0x554) + 0x88));
    *piVar2 = iVar5;
    FocusObject();
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 800));
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
    *piVar2 = 0;
    *puVar4 = local_28;
  }
  else {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    }
    *piVar2 = 0;
    FUN_100db158(local_30, local_2c);
  }
  return;
}


/* ======================================================================
 * RandomRange - Random range calculation
 * Address: 0x1005f230, Size: 272 bytes
 * ====================================================================== */
short FUN_1005f230(short param_1, short param_2, short param_3)
{
  double *pdVar1;
  unsigned int uVar2;
  short sVar3;
  short sVar5;
  long long lVar4;
  long long lVar6;
  int local_54;
  short sStack_1a;

  if (param_2 != 0) {
    lVar6 = (long long)param_3;
    sVar3 = 0;
    sVar5 = 0;
    if (0 < (long long)param_1) {
      do {
        uVar2 = FUN_10002970();
        pdVar1 = *(double **)(local_54 + -0x18c8);
        sStack_1a = (short)(int)((ABS((double)(float)((double)CONCAT44(0x43300000, uVar2 ^ 0x80000000
                                                                      ) - pdVar1[2])) / *pdVar1) *
                                 (double)(float)((double)CONCAT44(0x43300000,
                                                                  (int)param_2 ^ 0x80000000) -
                                                pdVar1[2]) + pdVar1[1]);
        sVar3 = sVar3 + sStack_1a;
        sVar5 = sVar5 + 1;
      } while ((int)sVar5 < (int)param_1);
    }
    param_3 = sVar3 + param_3;
    lVar4 = lVar6 + param_1;
    if ((int)param_3 < (int)lVar4) {
      param_3 = (short)lVar4;
    }
    else {
      lVar6 = (long long)(int)param_1 * (long long)(int)param_2 + lVar6;
      if ((int)lVar6 < (int)param_3) {
        param_3 = (short)lVar6;
      }
    }
  }
  return param_3;
}


/* ======================================================================
 * FUN_1005f50c - String resource lookup
 * Address: 0x1005f50c, Size: 364 bytes
 * ====================================================================== */
int FUN_1005f50c(short param_1, short param_2, short param_3)
{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar8;
  long long lVar7;
  unsigned int uVar9;
  int iVar10;

  iVar6 = iRam10117654;
  psVar5 = psRam10115fe0;
  iVar4 = iRam10115fdc;
  iVar10 = (int)param_3;
  *(char *)(*psRam10115fe0 * 0x50 + iRam10117654) = 0;
  iVar3 = (int)(((long long)param_1 & 0xffffffffU) << 2);
  HLock_Thunk_Sound(**(int **)(iVar3 + iVar4));
  piVar2 = (int *)**(int **)(iVar3 + iVar4);
  if (piVar2 != (int *)0x0) {
    DetachResource(piVar2);
  }
  iVar3 = *piVar2;
  iVar8 = ByteSwap16(*(unsigned short *)(param_2 * 4 + iVar3));
  lVar7 = ByteSwap16(*(unsigned short *)(param_2 * 4 + iVar3 + 2));
  if (param_3 < 0) {
    iVar10 = RandomRange(1, lVar7, 0xffffffffffffffffLL);
  }
  if ((int)(lVar7 + -1) < iVar10) {
    iVar10 = (int)(short)(lVar7 + -1);
  }
  iVar10 = ByteSwap16(*(unsigned short *)(iVar3 + iVar8 + iVar10 * 2));
  BlockMoveData_Thunk(*psVar5 * 0x50 + iVar6, iVar3 + iVar10);
  iVar3 = **(int **)((int)(((long long)param_1 & 0xffffffffU) << 2) + iVar4);
  if (iVar3 != 0) {
    DisposeHandle_Thunk(iVar3);
  }
  sVar1 = *psVar5;
  uVar9 = (int)sVar1 + 1;
  *psVar5 = (short)uVar9 -
            (short)(((long long)((int)uVar9 >> 3) + (unsigned long long)((int)uVar9 < 0 && (uVar9 & 7) != 0) &
                    0xffffffff) << 3);
  return sVar1 * 0x50 + iVar6;
}


/* ======================================================================
 * FUN_10063784 - Load game data/resources
 * Address: 0x10063784, Size: 884 bytes
 * ====================================================================== */
void FUN_10063784(void)
{
  int iVar1;
  int *puVar2;
  int *puVar3;
  int *puVar4;
  int *puVar5;
  int *puVar6;
  int *puVar7;
  int *puVar8;
  int *puVar9;
  pint *piVar10;
  pint *piVar11;
  pint *piVar12;
  long long uVar13;
  int *piVar14;
  int uVar15;
  int iVar16;
  int iVar17;
  short sVar18;
  unsigned long long uVar19;
  int local_5c;

  piVar12 = piRam101176b4;
  piVar11 = piRam101176b0;
  piVar10 = piRam101176ac;
  puVar9 = puRam101176a8;
  puVar8 = puRam101176a4;
  puVar7 = puRam101176a0;
  puVar6 = puRam1011769c;
  puVar5 = puRam10117698;
  puVar4 = puRam10117694;
  puVar3 = _FUN_10117690;
  puVar2 = puRam1011768c;
  uVar15 = uRam101175f8;
  piVar14 = *(int **)(*(int *)(*puRam1011734c + 0x88) + 0x14c);
  ResourceRead_Dispatch((int)piVar14 + (int)*(short *)(*piVar14 + 0x2b8));
  uVar13 = FUN_1005f6b0(0x17, 0);
  DrawNumber(uVar15, uVar13, *(unsigned short *)(**(int **)(local_5c + -0x544) + 0x162));
  piVar14 = (int *)FUN_10051f98(0x44415420, uVar15, 1);
  uVar15 = AllocateBlock(0x100);
  *puVar9 = uVar15;
  uVar15 = AllocateBlock(0x100);
  *puVar8 = uVar15;
  uVar15 = AllocateBlock(0x100);
  *puVar7 = uVar15;
  uVar15 = AllocateBlock(0x100);
  *puVar6 = uVar15;
  uVar15 = AllocateBlock(0x14);
  *puVar5 = uVar15;
  uVar15 = AllocateBlock(0x14);
  *puVar4 = uVar15;
  uVar15 = AllocateBlock(0x14);
  *puVar3 = uVar15;
  uVar15 = AllocateBlock(0x14);
  *puVar2 = uVar15;
  iVar16 = AllocateBlock(0x20);
  *piVar12 = iVar16;
  iVar16 = AllocateBlock(0x20);
  *piVar11 = iVar16;
  iVar16 = AllocateBlock(0x20);
  *piVar10 = iVar16;
  StreamRead(piVar14, *puVar9, 0x100);
  StreamRead(piVar14, *puVar8, 0x100);
  StreamRead(piVar14, *puVar7, 0x100);
  StreamRead(piVar14, *puVar6, 0x100);
  uVar19 = 0;
  do {
    iVar16 = *piVar12;
    iVar1 = (int)((uVar19 & 0xffffffff) << 1);
    ResourceRead_Dispatch((int)piVar14 + (int)*(short *)(*piVar14 + 0x100));
    iVar17 = ByteSwap16();
    *(short *)(iVar16 + iVar1) = (short)iVar17;
    if (iVar17 == 0) {
      *(unsigned short *)(iVar1 + iVar16) = 0xff;
    }
    else {
      iVar16 = (int)((uVar19 & 0xffffffff) << 1);
      if (*(short *)(*piVar12 + iVar16) == 0xf) {
        *(unsigned short *)(*piVar12 + iVar16) = 0;
      }
    }
    sVar18 = (short)uVar19 + 1;
    uVar19 = (unsigned long long)sVar18;
  } while (sVar18 < 0x10);
  uVar19 = 0;
  do {
    iVar16 = *piVar11;
    iVar1 = (int)((uVar19 & 0xffffffff) << 1);
    ResourceRead_Dispatch((int)piVar14 + (int)*(short *)(*piVar14 + 0x100));
    iVar17 = ByteSwap16();
    *(short *)(iVar16 + iVar1) = (short)iVar17;
    if (iVar17 == 0) {
      *(unsigned short *)(iVar1 + iVar16) = 0xff;
    }
    else {
      iVar16 = (int)((uVar19 & 0xffffffff) << 1);
      if (*(short *)(*piVar11 + iVar16) == 0xf) {
        *(unsigned short *)(*piVar11 + iVar16) = 0;
      }
    }
    sVar18 = (short)uVar19 + 1;
    uVar19 = (unsigned long long)sVar18;
  } while (sVar18 < 0x10);
  return;
}


/* ======================================================================
 * FUN_10065500 - End turn processing
 * Address: 0x10065500, Size: 700 bytes
 * ====================================================================== */
void FUN_10065500(short param_1)
{
  int bVar1;
  unsigned int uVar2;
  int iVar3;
  int bVar4;
  short *psVar5;
  unsigned int *puVar6;
  int iVar7;
  void **ppuVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  unsigned long long uVar12;
  int local_94;
  char auStack_70[112];

  iVar7 = gCombatDisplayPieces;
  puVar6 = puRam1011735c;
  psVar5 = gForceRedrawFlag;
  ppuVar8 = DOT_TVECT;
  uVar12 = (unsigned long long)param_1;
  *(unsigned short *)(*puRam1011735c + 0x15a) =
       *(unsigned short *)(*puRam1011735c + (int)((uVar12 & 0xffffffff) << 1) + 0x148);
  sVar10 = 0;
  iVar11 = 0;
  bVar4 = 0;
  bVar1 = 1;
  do {
    iVar3 = *puVar6 + iVar11 * 2;
    if ((*(short *)(iVar3 + 0x138) != 0) && (*(short *)(iVar3 + 0xd0) == 0)) {
      sVar10 = sVar10 + 1;
      bVar1 = 0;
    }
    sVar9 = (short)iVar11 + 1;
    iVar11 = (int)sVar9;
  } while (sVar9 < 8);
  if ((sVar10 == 1) && (*(short *)(*puVar6 + 0x124) != 0)) {
    sVar9 = 1;
  }
  else {
    sVar9 = 0;
  }
  *psVar5 = sVar9;
  if (bVar1) {
    *(unsigned short *)(*puVar6 + 0x15a) = 1;
  }
  if (1 < sVar10) {
    uVar2 = *puVar6;
    if (*(short *)(uVar2 + 0x124) == 0) goto LAB_1006564c;
    if (*(short *)(uVar2 + (int)((uVar12 & 0xffffffff) << 1) + 0x148) == 0) {
      *(unsigned short *)(uVar2 + 0x15a) = 0;
    }
  }
  if (*(short *)(*puVar6 + 0x124) != 0) {
    ppuVar8 = DOT_TVECT;
    FUN_10008e8c();
    FUN_10009520();
    bVar4 = 1;
    if ((bVar1) || ((*(short *)(*puVar6 + 0x15a) != 0 && (*psVar5 == 0)))) {
      CenterMapOnArmy(uVar12);
    }
  }
LAB_1006564c:
  if ((bVar1) || ((*(short *)(*puVar6 + 0x15a) != 0 && (*psVar5 == 0)))) {
    RefreshDisplay(1, 1, 0);
  }
  DrawNumber(auStack_70, ZEXT48(ppuVar8[-0x623]) + 0xc,
               (unsigned long long)*puVar6 + ((uVar12 & 0x3fffffff) * 4 + uVar12 & 0x3fffffff) * 4);
  FUN_1003cac4(auStack_70, 0);
  FUN_10040334();
  UpdateProgressBar(0);
  UpdateProgressBar(5);
  if (*(short *)((int)((uVar12 & 0xffffffff) << 1) + *(int *)(local_94 + -0x324)) < 1) {
    FUN_10064850(0, 0);
    FUN_10040334();
    UpdateProgressBar(0x19);
    UpdateProgressBar(0x32);
    UpdateProgressBar(0x4b);
    UpdateProgressBar(100);
  }
  else {
    YieldToEventLoop();
    FUN_1000c648(1);
    YieldToEventLoop();
    iVar11 = 7;
    do {
      *(int *)(iVar11 * 4 + iVar7) = 0;
      bVar1 = iVar11 != 0;
      iVar11 = (int)(short)((short)iVar11 + -1);
    } while (bVar1);
    **(int **)(local_94 + -0x1c0) = 0;
    **(int **)(local_94 + -0x3f0) = 0;
    FUN_1002c85c();
    if (bVar4) {
      FUN_10008f70();
    }
  }
  return;
}


/* ======================================================================
 * FUN_100657bc - Turn display setup
 * Address: 0x100657bc, Size: 880 bytes
 * ====================================================================== */
void FUN_100657bc(void)
{
  unsigned int uVar1;
  pint *piVar2;
  pint *piVar3;
  void **ppuVar4;
  long long uVar5;
  int *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  short sVar11;
  void **local_284;
  char auStack_260[256];
  char auStack_160[56];
  char auStack_128[256];
  short local_28;

  piVar3 = piRam1011735c;
  piVar2 = puRam1011734c;
  piVar10 = piRam10116018;
  piVar7 = (int *)*piRam10116018;
  ppuVar4 = DOT_TVECT;
  if (piVar7 != (int *)0x0) {
    ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x328));
    uVar5 = FUN_1007a894(0);
    FUN_1007a95c(uVar5, *piVar10);
    ResourceRead_Dispatch(*piVar10 + (int)*(short *)(*(int *)*piVar10 + 0x200), uVar5);
    *piVar10 = 0;
    ppuVar4 = local_284;
  }
  if (*(char *)ppuVar4[-0x14a] != '\0') {
    FUN_100852b8();
    FUN_100852c8(0);
  }
  if (*(char *)ppuVar4[-0x14a] != '\0') {
    FUN_100909d0();
    puVar6 = (int *)NewPtr_Thunk(0x40);
    if (puVar6 != (int *)0x0) {
      FUN_100d568c(puVar6);
      puVar6[0xd] = 0x20202020;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      *puVar6 = (int)ppuVar4[-0x4c0];
    }
  }
  piVar7 = (int *)ResourceRead_Dispatch((int)*(int **)ppuVar4[-0x79] +
                               (int)*(short *)(**(int **)ppuVar4[-0x79] + 200), 0xc1c,
                               *(int *)(*piVar2 + 0x88));
  FocusObject(piVar7);
  iVar8 = ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x7f8));
  if (iVar8 != 0) {
    *(int *)(iVar8 + 0x28) = 0x70696374;
    *(int *)(iVar8 + 0x24) = 0x70696374;
  }
  piVar9 = (int *)ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x308), 0x70696374);
  if ((piVar9 != (int *)0x0) &&
     (iVar8 = ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x448)), iVar8 != 0)) {
    uVar1 = *(unsigned int *)((int)(local_284[-0x75] +
                           *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0xa0) * 6) + 4);
    *(int *)(iVar8 + 0x12) =
         *(int *)
          ((pint)local_284[-0x75] + *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0xa0) * 6);
    *(unsigned int *)(iVar8 + 0x16) = uVar1 & 0xffff0000;
  }
  *piVar10 = (int)piVar7;
  *(char *)(*piVar2 + 0x99) = 1;
  piVar10 = (int *)ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x308), 0x6e616d65);
  if (piVar10 != (int *)0x0) {
    BuildPascalString(auStack_128, *piVar3 + *(short *)(*piVar3 + 0x110) * 0x14);
    ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8), auStack_128, 0);
  }
  local_28 = *(short *)(*piVar3 + 0x136);
  sVar11 = local_28;
  if (local_28 < 2) {
    sVar11 = 1;
  }
  DrawNumber(auStack_160, ZEXT48(local_284[-0x623]) + 0x10, sVar11);
  piVar10 = (int *)ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x308), 0x7475726e);
  if (piVar10 != (int *)0x0) {
    BuildPascalString(auStack_260, auStack_160);
    ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8), auStack_260, 0);
  }
  PlayFanfareSound();
  FUN_100013f8(0xffffffffffffffffLL, 0);
  FUN_1003e0b0();
  ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 800));
  return;
}


/* ======================================================================
 * FUN_10065d24 - End/next turn logic
 * Address: 0x10065d24, Size: 1096 bytes
 * ====================================================================== */
void FUN_10065d24(short param_1)
{
  pint *piVar1;
  pint *piVar2;
  int iVar3;
  int *piVar4;
  pint *piVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int local_3c;

  piVar5 = piRam1011735c;
  piVar2 = gMainGameWindow;
  piVar4 = piRam10116018;
  sVar7 = *(short *)(*piRam1011735c + 0x136);
  if (sVar7 < 2) {
    sVar7 = 1;
  }
  if (param_1 == -1) {
    iVar6 = ResourceRead_Dispatch(*gActiveDocView + (int)*(short *)(*(int *)*gActiveDocView + 0x5f0), 1);
    if (iVar6 != 0) {
      ResourceRead_Dispatch((int)*(int **)(iVar6 + 0x90) + (int)*(short *)(**(int **)(iVar6 + 0x90) + 0x738),
                   0, 1);
      ResourceRead_Dispatch((int)*(int **)(iVar6 + 0x94) + (int)*(short *)(**(int **)(iVar6 + 0x94) + 0x738),
                   0, 1);
    }
    iVar6 = IsGlobalSoundPlaying();
    while (iVar6 != 0) {
      iVar6 = IsGlobalSoundPlaying();
    }
    piVar1 = (pint *)*piVar4;
    ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    *piVar4 = 0;
    sVar7 = 0;
    iVar6 = 0;
    do {
      iVar3 = *piVar5 + iVar6 * 2;
      if ((*(short *)(iVar3 + 0x138) != 0) && (*(short *)(iVar3 + 0xd0) == 0)) {
        sVar7 = sVar7 + 1;
      }
      sVar8 = (short)iVar6 + 1;
      iVar6 = (int)sVar8;
    } while (sVar8 < 8);
    if ((1 < sVar7) && (*(short *)(*piVar5 + 0x124) != 0)) {
      RefreshDisplay(1, 1, 0);
      iVar6 = *piVar5 + *(short *)(*piVar5 + 0x110) * 0x14;
      FUN_1000848c(*(unsigned short *)(iVar6 + 0x18a), *(unsigned short *)(iVar6 + 0x18c));
    }
    piVar2 = (pint *)*piVar2;
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
    FUN_10021f6c(0xffffffffffffffffLL, 0xffffffffffffffffLL);
    if (*(short *)(*piVar5 + *(short *)(*piVar5 + 0x110) * 0xc + 0x1142) != 0) {
      ProcessQuestEvent(0xffffffffffffffffLL, 0, 0, 0);
    }
    FUN_10092c5c(5);
    iVar6 = *(int *)(**(int **)(local_3c + -0x554) + 0x88);
    *(unsigned short *)(iVar6 + 0x1dc) = 0;
    DispatchNextPhase(iVar6, 0x3ef);
  }
  else if ((*(short *)(*piRam1011735c + 0x15c) == 0) || (*(short *)(*piRam1011735c + 0x158) != 0)) {
    if ((*(short *)(*piRam1011735c + 0x15e) == 0) || (*(short *)(*piRam1011735c + 0x160) != 0)) {
      if (param_1 < 1) {
        FUN_10033b4c();
        iVar6 = FUN_10032a24();
        if (iVar6 != 0) {
          if (*(short *)(*piVar5 + 0x15c) == 0) {
            SelectMusic(1);
          }
          FUN_1003442c();
          piVar2 = (pint *)*piVar2;
          ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
          ResourceRead_Dispatch(**(int **)(local_3c + -0x1504) +
                       (int)*(short *)(*(int *)**(int **)(local_3c + -0x1504) + 0x4c8));
          ResourceRead_Dispatch(**(int **)(local_3c + -0x18fc) +
                       (int)*(short *)(*(int *)**(int **)(local_3c + -0x18fc) + 0x4c8));
          ResourceRead_Dispatch(**(int **)(local_3c + -0x16a0) +
                       (int)*(short *)(*(int *)**(int **)(local_3c + -0x16a0) + 0x4c8));
          return;
        }
        if (*(short *)(*piVar5 + 0x15c) == 0) {
          SelectMusic(1);
        }
      }
      if ((param_1 < 2) && (sVar7 == 1)) {
        iVar6 = *piVar5 + *(short *)(*piVar5 + 0x110) * 0x14;
        FUN_10025758(2, *(unsigned short *)(iVar6 + 0x18a), *(unsigned short *)(iVar6 + 0x18c));
      }
      else {
        if ((param_1 < 3) && (iVar6 = FUN_1004a854(), iVar6 != 0)) {
          FUN_1004af7c();
        }
        FUN_1005cc8c();
        FUN_1003dc28();
        iVar6 = *piVar5;
        if (((*(short *)(iVar6 + 0x12e) != 0) && (sVar7 == 2)) &&
           ((*(unsigned int *)(iVar6 + 0x134) >> 0x1e & 1) == 0)) {
          *(unsigned int *)(iVar6 + 0x134) = *(unsigned int *)(iVar6 + 0x134) | 0x40000000;
          FUN_1005f6b0(0x19, 7);
          FUN_10040040();
        }
      }
    }
    else {
      FUN_10040da4();
    }
  }
  else {
    FUN_10040a38();
  }
  return;
}


/* ======================================================================
 * FUN_100668a4 - UI component initialization
 * Address: 0x100668a4, Size: 848 bytes
 * ====================================================================== */
void FUN_100668a4(void)
{
  int uVar2;
  int *puVar3;
  unsigned long long uVar1;
  int local_2c;

  uVar2 = FUN_10000a98(uRam10116098, 0x3d0, 1);
  **(int **)(local_2c + -0x1804) = uVar2;
  uVar2 = FUN_10000a98(*(int *)(local_2c + -0x1800), 0x3d0, 1);
  **(int **)(local_2c + -0x17fc) = uVar2;
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100662bc();
    FUN_100662c4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006632c();
    FUN_10066334(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006639c();
    FUN_100663a4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006640c();
    FUN_10066414(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006647c();
    FUN_10066484(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100664ec();
    FUN_100664f4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006655c();
    FUN_10066564(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100665cc();
    FUN_100665d4(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_1006663c();
    FUN_10066644(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_10066700();
    FUN_10066708(0);
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667c4();
    puVar3 = (int *)NewPtr_Thunk(0xec);
    if (puVar3 != (int *)0x0) {
      FUN_10066708(puVar3);
      *puVar3 = *(int *)(local_2c + -0x17f8);
      *(unsigned short *)(puVar3 + 0x38) = 0xffff;
      puVar3[0x39] = 0;
      *(char *)(puVar3 + 0x3a) = 1;
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667cc();
    puVar3 = (int *)NewPtr_Thunk(200);
    if (puVar3 != (int *)0x0) {
      FUN_100d451c(puVar3);
      *puVar3 = *(int *)(local_2c + -0x17f4);
      puVar3[0x31] = 0;
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667d4();
    puVar3 = (int *)NewPtr_Thunk(0xb4);
    if (puVar3 != (int *)0x0) {
      FUN_100cd9a4(puVar3);
      *puVar3 = *(int *)(local_2c + -0x17f0);
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667dc();
    uVar1 = NewPtr_Thunk(0xc0);
    if ((uVar1 & 0xffffffff) != 0) {
      FUN_10066234(uVar1);
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667e4();
    puVar3 = (int *)NewPtr_Thunk(0xc);
    if (puVar3 != (int *)0x0) {
      FUN_100b2578(puVar3);
      *puVar3 = *(int *)(local_2c + -0x17ec);
    }
  }
  if (**(char **)(local_2c + -0x528) != '\0') {
    FUN_100667ec();
    FUN_100667f4(0);
  }
  return;
}


/* ======================================================================
 * FUN_10073250 - Sound check/init
 * Address: 0x10073250, Size: 192 bytes
 * ====================================================================== */
void FUN_10073250(void)
{
  char *pcVar1;
  int iVar2;
  char cVar3;
  unsigned int local_10[4];

  pcVar1 = pcRam101161c8;
  iVar2 = FUN_10000648(0x6f636575, local_10);
  if (iVar2 == 0) {
    if ((local_10[0] == 0) || ((local_10[0] & 0x3fffffff) == 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    *pcVar1 = cVar3;
  }
  if (*pcVar1 != '\0') {
    iVar2 = FUN_100011b8(0);
    if (iVar2 != 0) {
      *pcVar1 = '\0';
    }
    if (*pcVar1 != '\0') {
      FUN_10098814();
      EndFocus();
    }
  }
  return;
}


/* ======================================================================
 * FUN_10073310 - Object allocator
 * Address: 0x10073310, Size: 120 bytes
 * ====================================================================== */
int *FUN_10073310(int *param_1)
{
  void **ppuVar1;

  ppuVar1 = DOT_TVECT;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = DOT_TVECT, param_1 = (int *)NewPtr_Thunk(0x88),
     param_1 != (int *)0x0)) {
    FUN_100b74ac(param_1);
    *param_1 = (int)ppuVar1[-0x5b5];
    *(int **)ppuVar1[-0x5b4] = param_1;
    param_1[0x21] = 0;
  }
  return param_1;
}


/* ======================================================================
 * FUN_10075570 - Button state update
 * Address: 0x10075570, Size: 336 bytes
 * ====================================================================== */
void FUN_10075570(int param_1, long long param_2, char param_3)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;

  piVar2 = gInfoWindow;
  EnableMenuItem(param_2, param_3);
  if (*piVar2 != 0) {
    piVar1 = (int *)ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308), 0x6c62616b);
    piVar2 = (int *)ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308), 0x7362616b);
    iVar5 = 0;
    do {
      iVar3 = FUN_10075d94(param_1, *(unsigned short *)(param_1 + iVar5 * 2 + 0x8c));
      if (iVar3 == (int)param_2) {
        if ((piVar1 != (int *)0x0) &&
           (piVar1 = (int *)ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                         iVar5 + 0x62757431), piVar1 != (int *)0x0)) {
          ResourceRead_Dispatch((int)*(short *)(*piVar1 + 0x738) + (int)piVar1, param_3 == '\0', 1);
        }
        if (piVar2 == (int *)0x0) {
          return;
        }
        piVar2 = (int *)ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     iVar5 + 0x62757431);
        if (piVar2 == (int *)0x0) {
          return;
        }
        ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x738), param_3 == '\0', 1);
        return;
      }
      sVar4 = (short)iVar5 + 1;
      iVar5 = (int)sVar4;
    } while (sVar4 < 4);
  }
  return;
}


/* ======================================================================
 * FUN_10078fa4 - Getter (return uRam1011626c)
 * Address: 0x10078fa4, Size: 16 bytes
 * ====================================================================== */
int FUN_10078fa4(void)
{
  return uRam1011626c;
}


/* ======================================================================
 * FUN_10078fb4 - Object allocator
 * Address: 0x10078fb4, Size: 104 bytes
 * ====================================================================== */
int *FUN_10078fb4(int *param_1)
{
  void **ppuVar1;

  ppuVar1 = DOT_TVECT;
  if ((param_1 != (int *)0x0) ||
     (ppuVar1 = DOT_TVECT, param_1 = (int *)NewPtr_Thunk(0xa8),
     param_1 != (int *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = (int)ppuVar1[-0x58c];
  }
  return param_1;
}


/* ======================================================================
 * FUN_1007a748 - Menu resource setup
 * Address: 0x1007a748, Size: 272 bytes
 * ====================================================================== */
void FUN_1007a748(void)
{
  int *puVar1;
  int *puVar2;
  int *puVar3;
  int uVar5;
  long long uVar4;
  short sVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  int local_3c;

  puVar3 = puRam101176d0;
  puVar2 = puRam101176c8;
  puVar1 = puRam101176c4;
  uVar7 = (unsigned long long)gColorPalette;
  uVar5 = FUN_10001218(1000);
  *puVar3 = uVar5;
  uVar4 = FUN_10001230(1000);
  **(int **)(local_3c + -0x1cc) = (int)uVar4;
  FUN_10001248(*puVar3, uVar4);
  uVar8 = 0;
  do {
    uVar4 = FUN_100b2264(((uVar8 & 0x3fffffff) * 4 - uVar8 & 0x7fffffff) * 2 + uVar7);
    FUN_10001278(*puVar3, uVar8, uVar4);
    sVar6 = (short)uVar8 + 1;
    uVar8 = (unsigned long long)sVar6;
  } while (sVar6 < 0x100);
  uVar5 = FUN_10001218(0x3e9);
  *puVar2 = uVar5;
  uVar4 = FUN_10001230(0x3e9);
  **(int **)(local_3c + -0x1c8) = (int)uVar4;
  FUN_10001248(*puVar2, uVar4);
  uVar5 = FUN_10001218(0x3ec);
  *puVar1 = uVar5;
  uVar4 = FUN_10001230(0x3ec);
  **(int **)(local_3c + -0x1c4) = (int)uVar4;
  FUN_10001248(*puVar1, uVar4);
  return;
}


/* ======================================================================
 * FUN_1007b218 - Dialog with done button
 * Address: 0x1007b218, Size: 468 bytes
 * ====================================================================== */
void FUN_1007b218(int *param_1)
{
  int *puVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  long long uVar2;
  char auStack_12c[256];
  unsigned short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  puVar1 = puRam10117370;
  piVar3 = (int *)ResourceRead_Dispatch(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200), 0xbd6,
                               param_1);
  FocusObject();
  ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 800));
  iVar4 = ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x810));
  ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x328));
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar1;
  *puVar1 = (int)auStack_12c;
  iVar5 = TrySetjmp(auStack_12c);
  if (iVar5 == 0) {
    if ((iVar4 == 0x646f6e65) &&
       (uVar2 = ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x7f8)), (int)uVar2 != 0)) {
      FUN_1008b804(uVar2);
    }
    ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x738));
    *puVar1 = local_24;
  }
  else {
    iVar4 = FUN_100f5790(piVar3);
    if (iVar4 != 0) {
      ResourceRead_Dispatch((int)piVar3 + (int)*(short *)(*piVar3 + 0x738));
    }
    FUN_100db158(local_2c, local_28);
  }
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x110), 0x3fa);
  return;
}


/* ======================================================================
 * FUN_1007ba3c - Game setup dialog
 * Address: 0x1007ba3c, Size: 1648 bytes
 * ====================================================================== */
void FUN_1007ba3c(int *param_1, char param_2, char param_3)
{
  int bVar1;
  unsigned int *puVar2;
  int *puVar3;
  void **ppuVar4;
  int *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  short sVar10;
  int iVar12;
  long long lVar11;
  long long uVar13;
  unsigned long long uVar14;
  int local_2bc;
  char auStack_298[80];
  char auStack_248[256];
  char auStack_148[256];
  unsigned short local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;

  puVar3 = puRam10117370;
  puVar2 = puRam1011735c;
  ppuVar4 = DOT_TVECT;
  if (param_2 != '\0') {
    ppuVar4 = DOT_TVECT;
    FUN_100981f8(auStack_298, 0x80);
    puVar5 = (int *)FUN_10098320(auStack_298, 0x53657475, 1000);
    param_3 = puVar5 == (int *)0x0;
    if (puVar5 != (int *)0x0) {
      param_3 = *(char *)*puVar5 == '\0';
    }
    ReleaseHandle_Mapgen(puVar5);
    FUN_100982e8(auStack_298, 2);
  }
  if (param_3 == '\0') {
    uVar13 = 0xbcc;
  }
  else {
    uVar13 = 0xbd0;
  }
  piVar6 = (int *)ResourceRead_Dispatch((int)*(int **)ppuVar4[-0x79] +
                               (int)*(short *)(**(int **)ppuVar4[-0x79] + 200), uVar13, param_1);
  FocusObject();
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = *puVar3;
  *puVar3 = (int)auStack_148;
  iVar7 = TrySetjmp(auStack_148);
  if (iVar7 == 0) {
    if (param_2 == '\0') {
      FUN_10057e5c(0xffffffffffffffffLL, 0, piVar6);
      FUN_100584c8(piVar6);
      FUN_100586a0(piVar6);
    }
    else {
      **(unsigned short **)(local_2bc + -0x159c) = 0;
      FUN_1005887c(1, 1, 1, 0, piVar6);
      InitCityNames();
      InitArmyData();
    }
    if (*(short *)(*puVar2 + 0x12e) == 0) {
      ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x7f8));
      FUN_1008a100();
      piVar8 = (int *)ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x308), 0x67726561);
      if (piVar8 != (int *)0x0) {
        ResourceRead_Dispatch((int)*(short *)(*piVar8 + 0x850) + (int)piVar8,
                     *(unsigned short *)(*puVar2 + 0x116) & 0xff, 0);
      }
      piVar8 = (int *)ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x308), 0x73696465);
      if (piVar8 != (int *)0x0) {
        bVar1 = 0;
        uVar14 = 0;
        do {
          piVar9 = (int *)ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),
                                       uVar14 + 0x73696430);
          if (piVar9 != (int *)0x0) {
            BuildPascalString(auStack_248,
                         (unsigned long long)*puVar2 + ((uVar14 & 0x3fffffff) * 4 + uVar14 & 0x3fffffff) * 4);
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x818), auStack_248, 0);
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x738),
                         *(short *)(*puVar2 + (int)((uVar14 & 0xffffffff) << 1) + 0x138) == 0, 0);
          }
          iVar12 = (int)((uVar14 & 0x7fffffff) << 1);
          iVar7 = *puVar2 + iVar12;
          if (*(short *)(iVar7 + 0x138) == 0) {
            piVar9 = (int *)ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),
                                         uVar14 + 0x73686930);
            if (piVar9 != (int *)0x0) {
              ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x660), 0, 0);
            }
          }
          else if ((bVar1) || (*(short *)(iVar7 + 0xd0) != 0)) {
            *(unsigned short *)(*puVar2 + (int)((uVar14 & 0xffffffff) << 1) + 0xd0) = 1;
          }
          else {
            ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x7c8), uVar14 + 0x73696430);
            *(unsigned short *)(iVar12 + *puVar2 + 0xd0) = 0;
            bVar1 = 1;
          }
          sVar10 = (short)uVar14 + 1;
          uVar14 = (unsigned long long)sVar10;
        } while (sVar10 < 8);
        if (!bVar1) {
          iVar7 = 0;
          do {
            if (*(short *)(*puVar2 + iVar7 * 2 + 0x138) != 0) {
              ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x7c8), iVar7 + 0x73696430);
              *(unsigned short *)(*puVar2 + iVar7 * 2 + 0xd0) = 0;
            }
            sVar10 = (short)iVar7 + 1;
            iVar7 = (int)sVar10;
          } while (sVar10 < 8);
        }
      }
      piVar8 = (int *)ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x308), 0x636f6d70);
      if (piVar8 != (int *)0x0) {
        iVar7 = 0;
        do {
          iVar12 = *puVar2 + iVar7 * 2;
          if (((*(short *)(iVar12 + 0x138) != 0) && (*(short *)(iVar12 + 0xd0) == 1)) &&
             (lVar11 = (long long)*(short *)(iVar12 + 0xc0), *(short *)(iVar12 + 0xc0) != 3)) break;
          sVar10 = (short)iVar7 + 1;
          iVar7 = (int)sVar10;
          lVar11 = 0;
        } while (sVar10 < 8);
        iVar7 = 0;
        do {
          iVar12 = *puVar2 + iVar7 * 2;
          if ((*(short *)(iVar12 + 0x138) != 0) && (*(short *)(iVar12 + 0xd0) == 1)) {
            *(short *)(iVar12 + 0xc0) = (short)lVar11;
          }
          sVar10 = (short)iVar7 + 1;
          iVar7 = (int)sVar10;
        } while (sVar10 < 8);
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x7c8), lVar11 + 0x636f6d30);
      }
      ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 800));
      ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 800));
      piVar6 = (int *)ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x308), 0x706f7075);
      if (piVar6 != (int *)0x0) {
        FUN_10098f74(piVar6[0x2a]);
        ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
        ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x4c8));
      }
    }
    *puVar3 = local_40;
  }
  else {
    if (piVar6 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar6 + (int)*(short *)(*piVar6 + 0x738));
    }
    ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2c0));
    FUN_100db158(local_48, local_44);
  }
  return;
}


/* ======================================================================
 * FUN_1007c618 - Create scrollbar
 * Address: 0x1007c618, Size: 188 bytes
 * ====================================================================== */
void FUN_1007c618(int *param_1, unsigned short param_2, unsigned short param_3)
{
  void **ppuVar1;
  int *puVar2;

  ppuVar1 = DOT_TVECT;
  puVar2 = (int *)NewPtr_Thunk(0x10c);
  if (puVar2 != (int *)0x0) {
    ConstructCommand(puVar2);
    *puVar2 = (int)ppuVar1[-0x43f];
    puVar2[0xc] = 0;
    *(unsigned short *)(puVar2 + 0xd) = 0;
    *(unsigned short *)((int)puVar2 + 0x36) = 0;
    *(unsigned short *)(puVar2 + 0x42) = 0;
  }
  InitCommand(puVar2, 0x57a, param_1, 1, 1, param_1);
  puVar2[0xc] = (int)param_1;
  *(unsigned short *)(puVar2 + 0xd) = param_2;
  *(unsigned short *)((int)puVar2 + 0x36) = param_3;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x200), puVar2);
  param_1[0x76] = (int)puVar2;
  return;
}


/* ======================================================================
 * FUN_1007c6d8 - Scroll viewport
 * Address: 0x1007c6d8, Size: 60 bytes
 * ====================================================================== */
void FUN_1007c6d8(long long param_1, short param_2)
{
  FUN_10025758(param_2 + -0x6a6, *(unsigned short *)(*piRam1011735c + 0x17e),
               *(unsigned short *)(*piRam1011735c + 0x180));
  return;
}


/* ======================================================================
 * DispatchNextPhase - Create action event
 * Address: 0x1007c714, Size: 160 bytes
 * ====================================================================== */
void DispatchNextPhase(int *param_1, long long param_2)
{
  void **ppuVar1;
  int *puVar2;

  ppuVar1 = DOT_TVECT;
  puVar2 = (int *)NewPtr_Thunk(0x34);
  if (puVar2 != (int *)0x0) {
    ConstructCommand(puVar2);
    *puVar2 = (int)ppuVar1[-0x504];
    puVar2[0xc] = 0;
  }
  InitCommand(puVar2, param_2, param_1, 0, 0, 0);
  puVar2[0xc] = (int)param_2;
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x200), puVar2);
  return;
}


/* ======================================================================
 * FUN_1007c7b4 - Window layout
 * Address: 0x1007c7b4, Size: 1788 bytes
 * ====================================================================== */
void FUN_1007c7b4(void)
{
  unsigned long long uVar1;
  int iVar2;
  long long uVar3;
  int *piVar4;
  int *puVar5;
  int *puVar6;
  int bVar7;
  int iVar8;
  unsigned long long uVar9;
  int *puVar10;
  int iVar11;
  int local_36c;
  char local_348[256];
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  short local_190;
  short local_18e;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int iStack_174;
  int local_170;
  char *local_16c;
  unsigned int local_150;
  char *local_138;
  char auStack_130[72];
  char local_e8;
  unsigned char local_e7;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;

  local_16c = local_348;
  puVar10 = &local_1a0;
  local_348[0] = 0;
  local_170 = 0x3c;
  local_138 = auStack_130;
  Game_GetString((unsigned long long)*puRam101169c4 + 0x32);
  iVar2 = local_36c;
  EndFocus();
  local_e8 = local_150 < 0x300000;
  FUN_100b08d4(&local_190, (unsigned long long)*(unsigned int *)(iVar2 + -0xb0) + 0x56);
  if (local_150 < 0x300000) {
    if (0x280 < local_18e) {
      local_18e = 0x280;
    }
    if (0x1e0 < local_190) {
      local_190 = 0x1e0;
    }
  }
  uVar9 = (unsigned long long)local_18e;
  uVar1 = (unsigned long long)(0x27f < uVar9);
  local_e7 = (0x27f < uVar9) - (!CARRY8(uVar9, uVar1) && !CARRY8(uVar9, uVar9 + uVar1)) & 1;
  if (local_e7 == 0) {
    iVar8 = 0xe0;
  }
  else {
    iVar8 = 0x70;
  }
  local_e4 = (local_18e - iVar8) + -3;
  local_198 = 0x9c;
  local_194 = 0x70;
  local_1a0 = 0x138;
  local_19c = 0xe0;
  if (**(int **)(iVar2 + -0x1504) != 0) {
    local_e0 = 0x22;
    if ((local_e8 == '\0') && (local_e7 == 0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = 1;
    }
    puVar5 = puVar10;
    if (bVar7) {
      puVar5 = &local_198;
    }
    if ((local_e8 == '\0') && (local_e7 == 0)) {
      bVar7 = 0;
    }
    else {
      bVar7 = 1;
    }
    puVar6 = &local_198;
    if (bVar7) {
      puVar6 = puVar10;
    }
    local_dc = local_e4;
    FUN_1007723c(**(int **)(iVar2 + -0x1504), &local_e0, puVar5, puVar6, 1);
  }
  local_d8 = 0x27;
  local_d4 = 0x70;
  local_198 = 0x27;
  local_194 = 0x70;
  local_d0 = 0x72;
  local_cc = 0xe0;
  local_1a0 = 0x72;
  local_19c = 0xe0;
  if (**(int **)(iVar2 + -0x16a0) != 0) {
    local_c8 = *(int *)(**(int **)(iVar2 + -0x1504) + 0x2c) +
               *(int *)(**(int **)(iVar2 + -0x1504) + 0x34) + 0x10;
    local_c4 = local_e4;
    puVar5 = &local_198;
    if (local_190 < 0x1e0) {
      puVar5 = puVar10;
      puVar10 = &local_198;
    }
    FUN_1007723c(**(int **)(iVar2 + -0x16a0), &local_c8, puVar10, puVar5, 1);
  }
  iVar8 = *(int *)(**(int **)(iVar2 + -0x16a0) + 0x2c) +
          *(int *)(**(int **)(iVar2 + -0x16a0) + 0x34);
  iVar11 = iVar8 + 0x10;
  local_184 = local_e4;
  local_1e8 = 0x42;
  local_1e4 = 0x168;
  local_1a8 = 0x81;
  local_1a4 = 0xe0;
  local_1b0 = 0x78;
  local_1ac = 0x70;
  local_188 = iVar11;
  if (**(int **)(iVar2 + -0x18fc) != 0) {
    if (local_e7 == 0) {
      if (iVar8 + 3 < local_190 + -0x46) {
        FUN_100e10b0(&local_78, &local_188, &local_1a8);
        local_228 = local_188;
        local_224 = local_184;
        local_220 = local_78;
        local_21c = local_74;
        local_180 = local_188;
        local_17c = local_184;
        local_178 = local_78;
        iStack_174 = local_74;
        uVar3 = FUN_100e1580(&local_180, 1);
        FUN_100e10f8(&local_70, uVar3, &local_1b0);
        piVar4 = (int *)FUN_100e1580(&local_180, 1);
        local_238 = local_70;
        local_234 = local_6c;
        local_230 = *piVar4;
        local_22c = piVar4[1];
        local_1d0 = local_70;
        iStack_1cc = local_6c;
        iStack_1c8 = local_230;
        iStack_1c4 = local_22c;
        uVar3 = FUN_100e1580(&local_180, 1);
        FUN_100e10f8(&local_68, uVar3, &local_1e8);
        piVar4 = (int *)FUN_100e1580(&local_180, 1);
        local_248 = local_68;
        local_244 = local_64;
        local_240 = *piVar4;
        local_23c = piVar4[1];
        local_1e0 = local_68;
        iStack_1dc = local_64;
        iVar11 = local_190 + 0xd;
        iStack_1d8 = local_240;
        iStack_1d4 = local_23c;
      }
      else {
        iVar11 = local_190 + -0x46;
        local_5c = 2;
        local_184 = 2;
        local_188 = iVar11;
        local_60 = iVar11;
        FUN_100e10b0(&local_58, &local_188, &local_1e8);
        local_1f8 = local_188;
        local_1f4 = local_184;
        local_1f0 = local_58;
        local_1ec = local_54;
        local_180 = local_188;
        local_17c = local_184;
        local_178 = local_58;
        iStack_174 = local_54;
        local_208 = local_58 - local_1a8;
        local_1fc = local_184 + local_1a4;
        local_204 = local_184;
        local_200 = local_58;
        iStack_1cc = local_184;
        iStack_1c8 = local_58;
        local_218 = local_58 - local_1b0;
        local_20c = local_184 + local_1ac;
        local_214 = local_184;
        local_210 = local_58;
        iStack_1dc = local_184;
        iStack_1d8 = local_58;
        local_1e0 = local_218;
        iStack_1d4 = local_20c;
        local_1d0 = local_208;
        iStack_1c4 = local_1fc;
      }
    }
    else {
      FUN_100e10b0(&local_c0, &local_188, &local_1b0);
      local_b8 = local_188;
      local_b4 = local_184;
      local_b0 = local_c0;
      local_ac = local_bc;
      local_180 = local_188;
      local_17c = local_184;
      local_178 = local_c0;
      iStack_174 = local_bc;
      uVar3 = FUN_100e1580(&local_180, 1);
      FUN_100e10f8(&local_a8, uVar3, &local_1e8);
      piVar4 = (int *)FUN_100e1580(&local_180, 1);
      local_a0 = local_a8;
      local_9c = local_a4;
      iStack_1c8 = *piVar4;
      iStack_1c4 = piVar4[1];
      local_1d0 = local_a8;
      iStack_1cc = local_a4;
      local_98 = iStack_1c8;
      local_94 = iStack_1c4;
      uVar3 = FUN_100e1580(&local_180, 1);
      FUN_100e10f8(&local_90, uVar3, &local_1a8);
      piVar4 = (int *)FUN_100e1580(&local_180, 1);
      local_88 = local_90;
      local_84 = local_8c;
      iStack_1d8 = *piVar4;
      iStack_1d4 = piVar4[1];
      local_1e0 = local_90;
      iStack_1dc = local_8c;
      iVar11 = local_190 + 0xd;
      local_80 = iStack_1d8;
      local_7c = iStack_1d4;
    }
    piVar4 = (int *)**(int **)(iVar2 + -0x18fc);
    ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x350), &local_180, 1);
    piVar4[0x32] = local_180;
    piVar4[0x33] = local_17c;
    piVar4[0x34] = local_178;
    piVar4[0x35] = iStack_174;
    piVar4[0x36] = local_1d0;
    piVar4[0x37] = iStack_1cc;
    piVar4[0x38] = iStack_1c8;
    piVar4[0x39] = iStack_1c4;
    piVar4[0x3a] = local_1e0;
    piVar4[0x3b] = iStack_1dc;
    piVar4[0x3c] = iStack_1d8;
    piVar4[0x3d] = iStack_1d4;
    iVar2 = local_36c;
  }
  if (**(int **)(iVar2 + -0x1698) != 0) {
    local_1b4 = local_e4 + -6;
    local_1b8 = iVar11 + -0x38;
    local_1c0 = 0;
    local_1bc = 0;
    local_50 = 0x28;
    local_4c = 2;
    FUN_100e1630(&local_1c0);
    ResourceRead_Dispatch(**(int **)(iVar2 + -0x1698) +
                 (int)*(short *)(*(int *)**(int **)(iVar2 + -0x1698) + 0x350), &local_1c0, 1);
  }
  return;
}


/* ======================================================================
 * FUN_1007ceb0 - Save game handler
 * Address: 0x1007ceb0, Size: 696 bytes
 * ====================================================================== */
void FUN_1007ceb0(int *param_1)
{
  int iVar1;
  pint *piVar2;
  int *piVar5;
  long long uVar3;
  unsigned char *pbVar6;
  long long uVar4;
  int local_36c;
  char auStack_348[72];
  int local_300;
  char auStack_2fc[256];
  int local_1fc;
  char local_1f8[64];
  int local_1b8;
  unsigned short local_1b4;
  char auStack_1b2[70];
  int local_16c;
  int local_168;
  unsigned char local_160[256];
  unsigned short local_60;
  char *local_5e;
  int local_5a;
  int local_56;
  int local_52;
  int local_4e;
  unsigned short local_4a;
  int local_48;
  int local_44;
  char local_40;
  int *local_3e;
  int local_3a;
  int local_36;
  char local_32;

  piVar2 = piRam1011735c;
  piVar5 = (int *)ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
  FocusObject();
  local_1f8[0] = 0;
  ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x138), local_1f8);
  piVar5 = (int *)ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x128));
  FocusObject();
  uVar3 = FUN_100b1b08(local_1f8);
  FUN_10001320(uVar3, 0, auStack_348, 0x40);
  FUN_10073874(**(int **)(local_36c + -0x16d0), &local_300);
  local_1fc = 0;
  FUN_10002988(param_1[*(short *)(*piVar2 + 0x110) + 0x5c], &local_1fc, local_300);
  EndFocus();
  local_1b8 = 0;
  local_1b4 = 0;
  ResourceRead_Dispatch((int)piVar5 + (int)*(short *)(*piVar5 + 0x178), auStack_1b2);
  local_16c = piVar5[0x15];
  local_168 = piVar5[0x14];
  local_60 = 0;
  local_5a = local_300;
  local_56 = local_1fc;
  local_52 = 0;
  local_4e = 0;
  local_4a = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 2;
  local_3a = 0;
  local_36 = 0;
  local_32 = 1;
  local_5e = auStack_348;
  local_3e = &local_1b8;
  FUN_10000f90(&local_60);
  EndFocus();
  iVar1 = *piVar2;
  BuildPascalString(local_160, iVar1 + *(short *)(iVar1 + 0x110) * 0x14);
  FUN_100b1fb4(local_160, 0xffffffffffffffd5LL);
  if (local_160[(short)(local_160[0] - 1)] != 0x73) {
    FUN_100b1fb4(local_160, 0x73);
  }
  pbVar6 = (unsigned char *)FUN_10002c40(*(int *)(local_1fc + 0x28));
  FUN_100012d8(pbVar6, auStack_2fc, (unsigned long long)*pbVar6 + 1);
  ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2c0));
  uVar3 = FUN_100b1c84(auStack_2fc);
  uVar4 = FUN_100b1c84(local_160);
  FUN_100009f0(uVar4, uVar3, 0, 0);
  FUN_100d8c9c(0xbd8, 0);
  FUN_100009f0(0, 0, 0, 0);
  return;
}
