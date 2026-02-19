/*
 * reconstructed_2.c - Reconstructed Warlords II functions (batch 2)
 *
 * 30 functions from address range 0x10011590-0x1003FE04
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
static char _tvect_dummy_r2[0x2000] = {0};
#define DOT_TVECT ((void **)(_tvect_dummy_r2 + 0x1000))
#else
extern char *TVect_OCECToRString;
#define DOT_TVECT ((void **)&TVect_OCECToRString)
#endif

/* ===== Extern globals NOT already in wl2_globals.h ===== */

/* piRam globals not already mapped */
extern pint *piRam10115cf0;
extern pint *piRam10115dc4;
extern pint *piRam101163ac;
extern pint *piRam10115e34;

/* piRam101174b0 -> gTargetCoords (short[2]) -- cast used as pint* for raw arithmetic */
#define piRam101174b0 ((pint *)(void *)gTargetCoords)

/* piRam10117468 -> gExtState (already declared in wl2_globals.h but no macro) */
#define piRam10117468 gExtState

/* psRam1011677c -> gSelectedArmy */
#define psRam1011677c (&gSelectedArmy)

/* piRam10115d88 -> gResourceHandle */
#define piRam10115d88 ((pint *)gResourceHandle)

/* piRam1011639c - global data pointer (in globals_extra.c) */
extern pint *piRam1011639c;

/* piRam10116200 - global data pointer (in globals_extra.c) */
extern pint *piRam10116200;

/* psRam globals (short pointers) */
extern short *psRam1011760c;
extern short *psRam10115e80;
extern short *psRam10115d80;
extern short *psRam10115ce0;
extern short *psRam10116304;
extern short *psRam101174cc;
extern short *psRam10117544;
extern short *psRam10117558;
extern short *psRam101176e4;

/* puRam globals (unsigned pointers) */
extern unsigned short *puRam10115db4;
extern unsigned short *puRam10115db0;
extern unsigned short *puRam10115dd0;
extern unsigned short *puRam10115dcc;
extern unsigned short *puRam101174f4;
extern unsigned short *puRam101174f8;
extern pint *puRam101175f8;

/* iRam globals (integers used as addresses) */
extern long iRam10117474;
extern long iRam1011773c;
extern long iRam1011757c;
extern long iRam10115ba4;
extern long iRam10117604;
extern long iRam101176e8;

/* uRam globals (unsigned int data) */
extern int uRam1011772c;
extern int uRam101174bc;
extern int uRam101174fc;
extern int uRam10116a54;

/* Overlapping symbol pointer */
extern short *_FUN_10115e4c;

/* Forward declarations for functions defined in this file */
void FUN_1002b91c(void);
unsigned long long LookupCityAtPos(short param_1,short param_2);
void LaunchAllianceDefense(short param_1);
void FUN_1003dc28(void);


/* ======================================================================
 * FUN_10011590 - Army targeting logic
 * Address: 0x10011590, Size: 420 bytes
 * ====================================================================== */
void FUN_10011590(void)
{
  unsigned char bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long long lVar5;
  unsigned long long uVar6;
  pint *piVar7;
  pint *piVar8;
  int iVar9;
  int iVar10;
  long long lVar11;
  unsigned long long uVar12;

  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  iVar3 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0x14;
  iVar9 = LookupCityAtPos(*(short *)(iVar3 + 0x194),*(short *)(iVar3 + 0x196));
  sVar2 = *(short *)(*piVar8 + 0x1602);
  uVar6 = 0xffffffffffffffff;
  iVar3 = 10000;
  while (sVar2 != 0) {
    sVar2 = sVar2 + -1;
    uVar12 = (unsigned long long)sVar2;
    iVar10 = *piVar8;
    iVar4 = iVar10 + (sVar2 * 0x20 + (int)sVar2) * 2;
    lVar5 = -(long long)
             *(char *)(iVar10 + (*(unsigned int *)(*piVar7 + *(short *)(iVar4 + 0x1606) * 0xe0 +
                                          *(short *)(iVar4 + 0x1604) * 2) >> 0x18) + 0x711);
    lVar11 = lVar5 + 10;
    if ((lVar11 + (-(unsigned long long)(lVar11 == 0) - (lVar5 + 9)) & 0xff) == 0) {
      bVar1 = *(unsigned char *)(iVar4 + 0x1633);
      if (((unsigned short)bVar1 != *(unsigned short *)(iVar10 + 0x110)) &&
         ((bVar1 == 0xf || (*(short *)((unsigned int)bVar1 * 2 + iVar10 + 0x138) == 0)))) {
        iVar10 = *piVar8 + (int)(((uVar12 & 0x7ffffff) * 0x20 + uVar12 & 0xffffffff) << 1);
        iVar4 = *piVar8 + iVar9 * 0x42;
        iVar10 = CalcDistance(*(short *)(iVar10 + 0x1604),*(short *)(iVar10 + 0x1606),
                              *(short *)(iVar4 + 0x1604),*(short *)(iVar4 + 0x1606));
        if ((iVar10 < 0x28) && (iVar10 < iVar3)) {
          uVar6 = uVar12;
          iVar3 = iVar10;
        }
      }
    }
  }
  if ((int)uVar6 != -1) {
    *(char *)(*piVar8 + (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1) + 0x1633) =
         (char)*(short *)(*piVar8 + 0x110);
  }
  return;
}


/* ======================================================================
 * FUN_10011734 - Diplomacy check
 * Address: 0x10011734, Size: 208 bytes
 * ====================================================================== */
long long FUN_10011734(short param_1)
{
  int bVar1;
  int iVar2;
  long long uVar3;
  int iVar4;
  int iVar5;

  uVar3 = 0;
  if ((*(short *)(*piRam1011735c + 0x11c) != 0) && (*(short *)(*piRam10117468 + 0x38) != 0)) {
    if (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2 + 0xd0) == 0) {
      return 0;
    }
    iVar5 = 7;
    do {
      iVar2 = iVar5 * 2;
      iVar4 = *piRam1011735c + iVar2;
      if ((((*(short *)(iVar4 + 0x138) != 0) && (*(short *)(iVar4 + 0xd0) == 0)) &&
          ((*(unsigned int *)(*piRam1011735c + param_1 * 0x10 + iVar2 + 0x1582) >> 0x1a & 3) == 2)) &&
         (*(short *)(iVar2 + iRam10117474) != 0)) {
        uVar3 = 1;
      }
      bVar1 = iVar5 != 0;
      iVar5 = (int)(short)((short)iVar5 + -1);
    } while (bVar1);
    return uVar3;
  }
  return 0;
}


/* ======================================================================
 * FUN_100169c0 - City garrison logic
 * Address: 0x100169c0, Size: 512 bytes
 * ====================================================================== */
void FUN_100169c0(int param_1,short param_2)
{
  int bVar1;
  short sVar2;
  int iVar3;
  pint *piVar4;
  pint *piVar5;
  pint *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned long long uVar11;
  short sVar12;

  piVar6 = piRam101174b0;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  if (*piRam101174b0 != 0) {
    sVar7 = (short)param_1;
    uVar11 = (unsigned long long)
             *(char *)(*piRam1011735c +
                       (*(unsigned int *)(*piRam10117358 + param_2 * 0xe0 + sVar7 * 2) >> 0x18) + 0x711);
    sVar12 = (10 - ((10 < uVar11) + 10)) +
             (unsigned short)(9 < uVar11 && (unsigned long long)(10 < uVar11) <= uVar11 - 10);
    if (*(char *)(*piRam101174b0 + 4) == '\x1c') {
      if (sVar12 != 0) {
        param_1 = LookupCityAtPos((int)sVar7,(int)param_2);
      }
      uVar11 = 0x15;
      do {
        iVar3 = (int)uVar11;
        iVar9 = *piVar4 + iVar3 * 0x1e;
        if (*(char *)(iVar9 + 0xd28) == '\x01') {
          if (sVar12 == 0) {
            if ((*(short *)(iVar9 + 0xd2c) == sVar7) && (*(short *)(iVar9 + 0xd2e) == param_2)) {
LAB_10016b20:
              *(char *)
               (*piVar4 + (int)(((uVar11 & 0xfffffff) * 0x10 - uVar11 & 0xffffffff) << 1) + 0xd28) =
                   3;
              iVar9 = (int)(short)(*(short *)(*piVar4 + 0x182) + -1);
              iVar10 = iVar9;
              if (*(short *)(*piVar4 + 0x182) != 0) {
                do {
                  iVar10 = iVar9;
                  if (*piVar5 + iVar9 * 0x16 == *piVar6) break;
                  iVar10 = (int)(short)((short)iVar9 + -1);
                  bVar1 = iVar9 != 0;
                  iVar9 = iVar10;
                } while (bVar1);
              }
              *(short *)(*piVar4 + (int)(((uVar11 & 0xfffffff) * 0x10 - uVar11 & 0xffffffff) << 1) +
                        0xd2a) = (short)iVar10;
            }
          }
          else if (param_1 != -1) {
            iVar9 = *piVar4 + (int)(((uVar11 & 0xfffffff) * 0x10 - uVar11 & 0xffffffff) << 1);
            iVar10 = *piVar4 + param_1 * 0x42;
            sVar2 = *(short *)(iVar10 + 0x1604);
            iVar8 = (int)*(short *)(iVar9 + 0xd2c);
            if ((sVar2 <= iVar8) && (iVar8 <= sVar2 + 1)) {
              sVar2 = *(short *)(iVar10 + 0x1606);
              iVar9 = (int)*(short *)(iVar9 + 0xd2e);
              if ((sVar2 <= iVar9) && (iVar9 <= sVar2 + 1)) goto LAB_10016b20;
            }
          }
        }
        uVar11 = (unsigned long long)(short)((short)uVar11 + -1);
      } while (iVar3 != 0);
    }
  }
  return;
}


/* ======================================================================
 * FUN_10016df0 - Unit assignment with local arrays
 * Address: 0x10016df0, Size: 784 bytes
 * ====================================================================== */
void FUN_10016df0(int param_1)
{
  int bVar1;
  char cVar2;
  pint *piVar3;
  unsigned int *puVar4;
  pint *piVar5;
  short *psVar6;
  unsigned long long uVar7;
  short sVar9;
  long long lVar8;
  int iVar11;
  unsigned long long uVar10;
  int iVar12;
  int iVar13;
  char local_110 [8];
  char local_108 [8];
  char local_100 [8];
  char local_f8 [8];
  char local_f0 [176];
  char local_40 [64];

  iVar13 = iRam1011773c;
  psVar6 = psRam1011760c;
  piVar5 = piRam10117468;
  puVar4 = (unsigned int *)piRam10117360;
  piVar3 = piRam1011735c;
  iVar12 = 0;
  do {
    local_f8[iVar12] = 0;
    local_100[iVar12] = 0;
    local_108[iVar12] = 0;
    local_40[iVar12] = '\0';
    local_110[iVar12] = '\0';
    iVar11 = 0x15;
    do {
      local_f0[iVar12 * 0x16 + iVar11] = -1;
      bVar1 = iVar11 != 0;
      iVar11 = (int)(short)((short)iVar11 + -1);
    } while (bVar1);
    sVar9 = (short)iVar12 + 1;
    iVar12 = (int)sVar9;
  } while (sVar9 < 8);
  iVar12 = 0;
  do {
    sVar9 = *(short *)(param_1 + iVar12 * 2);
    if (sVar9 != -1) {
      FUN_1003aeb0(2,0,0,(unsigned long long)*puVar4 + (long long)sVar9 * 0x16);
      iVar11 = 0;
      if (0 < *psVar6) {
        do {
          sVar9 = *(short *)(iVar11 * 2 + iVar13);
          local_f0[iVar11 + iVar12 * 0x16] = (char)sVar9;
          if ((int)*(char *)(*piVar3 + sVar9 * 0x1e + 0xd26) - 1U < 8) {
            return;
          }
          local_110[iVar12] = local_110[iVar12] + '\x01';
          sVar9 = (short)iVar11 + 1;
          iVar11 = (int)sVar9;
        } while (sVar9 < *psVar6);
      }
    }
    sVar9 = (short)iVar12 + 1;
    iVar12 = (int)sVar9;
  } while (sVar9 < 8);
  FUN_10016cc4(param_1,local_108,local_f0,6);
  FUN_10016cc4(param_1,local_100,local_f0,5);
  FUN_10016cc4(param_1,local_f8,local_f0,7);
  do {
    bVar1 = 1;
    iVar13 = 0;
    do {
      if ((*(short *)(param_1 + iVar13 * 2) != -1) &&
         (lVar8 = (long long)local_40[iVar13], lVar8 != 0)) {
        uVar7 = 0xffffffffffffffff;
        uVar10 = 0;
        do {
          if (((iVar13 != (int)uVar10) &&
              (*(short *)(param_1 + (int)((uVar10 & 0xffffffff) << 1)) != -1)) &&
             ((int)local_40[(int)uVar10] < (int)lVar8)) {
            uVar7 = uVar10;
            lVar8 = (long long)local_40[(int)uVar10];
          }
          sVar9 = (short)uVar10 + 1;
          uVar10 = (unsigned long long)sVar9;
        } while (sVar9 < 8);
        iVar12 = (int)uVar7;
        if (iVar12 != -1) {
          iVar11 = 0;
          do {
            cVar2 = local_f0[iVar13 * 0x16 + iVar11];
            uVar10 = (unsigned long long)cVar2;
            if ((cVar2 != (char)0xff) &&
               (((cVar2 = *(char *)(*piVar3 + (int)(((uVar10 & 0xfffffff) * 0x10 - uVar10 &
                                                    0xffffffff) << 1) + 0xd26), cVar2 == '\x01' ||
                 (cVar2 == '\x02')) || (cVar2 == '\b')))) {
              local_f0[iVar13 * 0x16 + iVar11] = -1;
              *(short *)(*piVar5 + 0x4c) = *(short *)(*piVar5 + 0x4c) + 1;
              *(short *)
               (*piVar3 + (int)(((uVar10 & 0xfffffff) * 0x10 - uVar10 & 0xffffffff) << 1) + 0xd2a) =
                   *(short *)(param_1 + (int)((uVar7 & 0xffffffff) << 1));
              local_40[iVar13] = local_40[iVar13] + -1;
              local_40[iVar12] = local_40[iVar12] + '\x01';
              bVar1 = 0;
              break;
            }
            sVar9 = (short)iVar11 + 1;
            iVar11 = (int)sVar9;
          } while (sVar9 < 0x16);
        }
      }
      sVar9 = (short)iVar13 + 1;
      iVar13 = (int)sVar9;
    } while (sVar9 < 8);
    if (bVar1) {
      return;
    }
  } while( 1 );
}


/* ======================================================================
 * FindNearestEnemy - Distance calculation to armies
 * Address: 0x100186cc, Size: 308 bytes
 * ====================================================================== */
long long FindNearestEnemy(short param_1,short param_2,short param_3)
{
  char cVar1;
  short sVar2;
  short uVar3;
  short uVar4;
  pint *piVar5;
  pint *piVar6;
  long long uVar7;
  int iVar9;
  long long uVar8;
  int iVar10;

  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x182) == 0) {
    uVar7 = 1000;
  }
  else {
    sVar2 = *(short *)(*piRam1011735c + 0x182);
    uVar7 = 1000;
    do {
      sVar2 = sVar2 + -1;
      iVar9 = *piVar6;
      iVar10 = iVar9 + sVar2 * 0x16;
      cVar1 = *(char *)(iVar10 + 5);
      if (cVar1 != '\x0f') {
        uVar4 = *(short *)(sVar2 * 0x16 + iVar9);
        uVar3 = *(short *)(iVar10 + 2);
        if (param_3 == -1) {
          if (cVar1 != (char)*(short *)(*piVar5 + 0x110)) {
LAB_10018784:
            if (((*(short *)(*piVar5 + 0x124) == 0) ||
                (iVar9 = IsPositionReachable(uVar4,uVar3), iVar9 != 0)) &&
               (uVar8 = CalcDistance(param_1,param_2,uVar4,uVar3), (int)uVar8 < (int)uVar7)) {
              uVar7 = uVar8;
            }
          }
        }
        else if ((int)*(char *)(*piVar6 + sVar2 * 0x16 + 5) == (int)param_3) goto LAB_10018784;
      }
    } while (sVar2 != 0);
  }
  return uVar7;
}


/* ======================================================================
 * AssignToDefense - Army movement
 * Address: 0x1001a348, Size: 296 bytes
 * ====================================================================== */
void AssignToDefense(short param_1,short param_2)
{
  int bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  pint *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short local_30 [24];

  piVar5 = piRam10117360;
  iVar8 = (int)param_1;
  iVar7 = 7;
  do {
    local_30[iVar7] = -1;
    bVar1 = iVar7 != 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
  } while (bVar1);
  local_30[0] = param_1;
  MoveArmyToTarget(local_30,4,0,0x20);
  cVar2 = *(char *)(*piVar5 + param_1 * 0x16 + 7);
  sVar6 = (short)cVar2 / 5 + 1;
  if ('\x01' < cVar2) {
    while( 1 ) {
      iVar7 = iVar8 * 0x16;
      sVar4 = *(short *)(*piVar5 + iVar7);
      sVar3 = *(short *)(*piVar5 + iVar7 + 2);
      FUN_1001a12c(iVar8,param_2);
      if ((sVar4 == *(short *)(iVar7 + *piVar5)) && (sVar3 == *(short *)(iVar7 + *piVar5 + 2)))
      break;
      iVar7 = *piVar5 + iVar8 * 0x16;
      cVar2 = *(char *)(iVar7 + 7);
      if (cVar2 < '\x04') {
        return;
      }
      if (sVar6 == 0) {
        return;
      }
      if ((*(unsigned short *)(iVar7 + 0xc) & 0x20) == 0) {
        return;
      }
      sVar6 = sVar6 + -1;
      if (cVar2 < '\x02') {
        return;
      }
    }
  }
  return;
}


/* ======================================================================
 * FUN_1001ae14 - Sets army state to 8 (searching)
 * Address: 0x1001ae14, Size: 140 bytes
 * ====================================================================== */
void FUN_1001ae14(short param_1)
{
  int bVar1;
  short sVar2;
  pint *piVar3;
  int iVar4;

  piVar3 = piRam10117468;
  *(char *)(*piRam10117468 + (int)*(short *)(*piRam10117468 + param_1 * 0x5c + 0x250) + 0x56)
       = 8;
  iVar4 = 3;
  do {
    sVar2 = *(short *)(*piVar3 + param_1 * 0x5c + iVar4 * 2 + 0x252);
    if (sVar2 != -1) {
      *(char *)((int)sVar2 + *piVar3 + 0x56) = 8;
    }
    bVar1 = iVar4 != 0;
    iVar4 = (int)(short)((short)iVar4 + -1);
  } while (bVar1);
  ActivateAttackEvent();
  return;
}


/* ======================================================================
 * LaunchAllianceDefense - City strength evaluation
 * Address: 0x1001ba60, Size: 400 bytes
 * ====================================================================== */
void LaunchAllianceDefense(short param_1)
{
  int bVar1;
  unsigned char bVar2;
  pint *piVar3;
  int uVar4;
  void **ppuVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;

  uVar4 = uRam1011772c;
  piVar3 = piRam1011735c;
  ppuVar5 = DOT_TVECT;
  iVar9 = (int)param_1;
  iVar6 = CheckQuestCondition(iVar9);
  bVar1 = *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0xc0) != 2;
  bVar2 = *(unsigned char *)(*piVar3 + iVar9 * 0x42 + 0x1633);
  if ((bVar2 != 0xf) && (*(short *)((unsigned int)bVar2 * 2 + *piVar3 + 0xd0) == 0)) {
    bVar1 = 1;
  }
  iVar7 = RandomRange(1,2,0xffffffffffffffff);
  if ((iVar7 != 0) && (899 < iVar6)) {
    bVar1 = 1;
  }
  if (bVar1) {
    if (iVar6 == 0) {
      FUN_1001b8e0(iVar9);
    }
    else {
      DrawNumber(uVar4,ZEXT48(ppuVar5[-0x6d4]) + 0x18,*piVar3 + iVar9 * 0x42 + 0x1608);
      FUN_10030454(uVar4);
      FUN_10046edc(iVar9);
      sVar8 = RandomRange(1,10,0);
      *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0x1122) =
           *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0x1122) + sVar8 + 5;
      iVar9 = *piVar3 + *(short *)(*piVar3 + 0x110) * 0x14;
      *(short *)(iVar9 + 0x186) = *(short *)(iVar9 + 0x186) + (short)iVar6;
    }
  }
  return;
}


/* ======================================================================
 * LaunchAllianceAttack - Army evaluation
 * Address: 0x1001bbf0, Size: 472 bytes
 * ====================================================================== */
long long LaunchAllianceAttack(short param_1,short param_2)
{
  int bVar1;
  unsigned char bVar2;
  pint *piVar3;
  int uVar4;
  void **ppuVar5;
  int iVar7;
  long long uVar6;
  int iVar8;
  short sVar9;
  int iVar10;
  unsigned char abStack_30 [8];
  unsigned char abStack_28 [40];

  uVar4 = uRam1011772c;
  piVar3 = piRam1011735c;
  ppuVar5 = DOT_TVECT;
  iVar10 = (int)param_1;
  iVar7 = CheckQuestCondition(iVar10);
  if (param_2 == 0) {
    GetAdjacentArmies(iVar10,0,(char *)abStack_28,(char *)abStack_30);
    sVar9 = 0;
    iVar8 = 5;
    do {
      bVar2 = abStack_28[iVar8];
      if (((bVar2 != 0xff) &&
          ((int)*(char *)(*piVar3 + (unsigned int)bVar2 * 0x42 + 0x1619) == (int)*(short *)(*piVar3 + 0x110)
          )) && (abStack_30[iVar8] < 0x2d)) {
        sVar9 = sVar9 + 1;
      }
      bVar1 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar1);
    if (2 < sVar9) {
      return 0xffffffffffffffff;
    }
  }
  if ((iVar7 < 900) && (*(short *)(*piVar3 + 0x114) != 0)) {
    iVar10 = iVar10 * 0x42;
    DrawNumber(uVar4,ZEXT48(ppuVar5[-0x6d4]) + 0x2c,*piVar3 + iVar10 + 0x1608);
    FUN_10030454(uVar4);
    FUN_1004f438(*(short *)(iVar10 + *piVar3 + 0x1604),
                 *(short *)(iVar10 + *piVar3 + 0x1606),1);
    sVar9 = RandomRange(1,0xf,0);
    *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0x1122) =
         *(short *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 2 + 0x1122) + sVar9 + 10;
    RefreshMapAfterCombat(*(short *)(iVar10 + *piVar3 + 0x1604),
                 *(short *)(iVar10 + *piVar3 + 0x1606));
    uVar6 = FUN_1001f5e8(*(short *)(iVar10 + *piVar3 + 0x1604),
                         *(short *)(iVar10 + *piVar3 + 0x1606));
  }
  else {
    LaunchAllianceDefense(iVar10);
    uVar6 = 0xffffffffffffffff;
  }
  return uVar6;
}


/* ======================================================================
 * FUN_1001fcc0 - AI army deployment priorities (large, with gotos)
 * Address: 0x1001fcc0, Size: 2160 bytes
 * ====================================================================== */
int FUN_1001fcc0(void)
{
  int bVar1;
  int bVar2;
  char cVar3;
  unsigned char bVar4;
  short sVar5;
  int iVar6;
  pint *piVar7;
  pint *piVar8;
  pint *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned long long uVar13;
  unsigned long long uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int *piVar18;
  unsigned long long uVar19;
  unsigned long long uVar20;
  int local_48 [2];
  short local_40 [2];
  short asStack_3c [30];

  piVar9 = piRam10117468;
  piVar8 = piRam10117364;
  piVar7 = piRam1011735c;
  iVar6 = iRam10115ba4;
  piVar18 = local_48;
  sVar16 = *(short *)(*piRam10117468 + 0x24a);
  sVar15 = 0;
  while (sVar16 != 0) {
    sVar16 = sVar16 + -1;
    if (*(short *)(*piRam10117468 + sVar16 * 0x5c + 0x24c) != 0) {
      sVar15 = sVar15 + 1;
    }
  }
  *(short *)(*piRam10117468 + 0x40) = 0;
  *(short *)(*piVar9 + 0x3e) = *(short *)(*piVar9 + 0x40);
  *(short *)(*piVar9 + 0x3c) = *(short *)(*piVar9 + 0x3e);
  *(short *)(*piVar9 + 0x3a) = *(short *)(*piVar9 + 0x3c);
  iVar11 = 7;
  do {
    asStack_3c[iVar11] = 0;
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  sVar16 = *(short *)(*piVar7 + 0x1602);
  while (sVar16 != 0) {
    sVar16 = sVar16 + -1;
    iVar11 = sVar16 * 0x42;
    if ((((int)*(char *)(*piVar7 + iVar11 + 0x1619) == (int)*(short *)(*piVar7 + 0x110)) &&
        (*(unsigned char *)(*piVar9 + (int)sVar16 + 0x11e) = *(unsigned char *)(*piVar9 + (int)sVar16 + 0x11e) & 0x37,
        *(char *)(*piVar9 + (int)sVar16 + 0x56) != '\a')) &&
       (iVar10 = GetArmyInfo((int)sVar16,local_40), iVar10 != 0)) {
      iVar11 = iVar11 + *piVar7 + (int)local_40[0];
      cVar3 = *(char *)(iVar11 + 0x1622);
      iVar10 = (int)cVar3;
      if (*(char *)(*piVar8 + *(char *)(iVar11 + 0x161a) * 6 + 5) == '\x01') {
        iVar10 = (int)(short)(cVar3 + 2);
      }
      iVar12 = -1;
      iVar11 = iVar10;
      iVar17 = 7;
      do {
        if (asStack_3c[iVar17] == 0) {
          asStack_3c[iVar17] = (short)iVar10;
          iVar12 = -1;
          break;
        }
        if (asStack_3c[iVar17] < iVar11) {
          iVar11 = (int)asStack_3c[iVar17];
          iVar12 = iVar17;
        }
        bVar1 = iVar17 != 0;
        iVar17 = (int)(short)((short)iVar17 + -1);
      } while (bVar1);
      if (iVar12 != -1) {
        asStack_3c[iVar12] = (short)iVar10;
      }
    }
  }
  local_48[0] = 100;
  iVar11 = 7;
  do {
    sVar16 = asStack_3c[iVar11];
    if ((sVar16 != 0) && (sVar16 < local_48[0])) {
      local_48[0] = (int)sVar16;
    }
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  local_48[1] = 4;
  if (4 < local_48[0]) {
    piVar18 = local_48 + 1;
  }
  *(short *)(*piVar9 + 0x3a) = (short)*piVar18;
  if (sVar15 == 4) {
    sVar16 = *(short *)(*piVar7 + 0x1602);
    while (sVar16 != 0) {
      sVar16 = sVar16 + -1;
      uVar19 = (unsigned long long)sVar16;
      if ((((int)*(char *)(*piVar7 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1)
                          + 0x1619) == (int)*(short *)(*piVar7 + 0x110)) &&
          (iVar11 = CanArmyEnterCity(uVar19,1), iVar11 != 0)) &&
         ((*(unsigned char *)((int)sVar16 + *piVar9 + 0x11e) & 2) != 0)) {
        bVar1 = 0;
        iVar11 = 3;
        do {
          iVar10 = *piVar7 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1) +
                   iVar11;
          uVar13 = (unsigned long long)*(char *)(iVar10 + 0x161a);
          if (((-1 < (long long)uVar13) &&
              (*(char *)(*piVar8 + (int)(((uVar13 & 0x3fffffff) * 4 - uVar13 & 0xffffffff) << 1)) !=
               '\0')) && ('\x04' < *(char *)(iVar10 + 0x1622))) {
            bVar1 = 1;
          }
          bVar2 = iVar11 != 0;
          iVar11 = (int)(short)((short)iVar11 + -1);
        } while (bVar2);
        if (bVar1) {
          *(short *)(*piVar9 + 0x3c) = *(short *)(*piVar9 + 0x3c) + 1;
          *(unsigned char *)(*piVar9 + (int)sVar16 + 0x11e) = *(unsigned char *)(*piVar9 + (int)sVar16 + 0x11e) | 0x40;
        }
      }
    }
  }
  if (*(short *)(*piVar9 + 0x3c) < 4) {
    sVar16 = *(short *)(*piVar9 + 0x3c);
  }
  else {
    sVar16 = *(short *)(*piVar9 + 0x3c) + -4;
  }
  if (2 < sVar15) {
    sVar5 = *(short *)(*piVar7 + 0x1602);
joined_r0x100200ac:
    if (sVar5 != 0) {
      sVar5 = sVar5 + -1;
      uVar19 = (unsigned long long)sVar5;
      if (((int)*(char *)(*piVar7 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1)
                         + 0x1619) == (int)*(short *)(*piVar7 + 0x110)) &&
         (iVar11 = CanArmyEnterCity(uVar19,1), iVar11 != 0)) {
        bVar4 = *(unsigned char *)(*piVar9 + (int)sVar5 + 0x11e);
        if ((bVar4 & 0x40) != 0) {
          if (sVar16 == 0) goto joined_r0x100200ac;
          *(unsigned char *)(*piVar9 + (int)sVar5 + 0x11e) = bVar4 & 0xbf;
          sVar16 = sVar16 + -1;
        }
        bVar1 = 0;
        iVar11 = 3;
        do {
          iVar10 = *piVar7 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1) +
                   iVar11;
          uVar13 = (unsigned long long)*(char *)(iVar10 + 0x161a);
          if (((-1 < (long long)uVar13) &&
              ((*(char *)(*piVar8 + (int)(((uVar13 & 0x3fffffff) * 4 - uVar13 & 0xffffffff) << 1) +
                         5) == '\x01' ||
               ((int)*(short *)(*piVar9 + 0x3a) <= (int)*(char *)(iVar10 + 0x1622))))) &&
             ('\x0f' < *(char *)(*piVar7 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff)
                                                << 1) + iVar11 + 0x1626))) {
            bVar1 = 1;
          }
          bVar2 = iVar11 != 0;
          iVar11 = (int)(short)((short)iVar11 + -1);
        } while (bVar2);
        if (bVar1) {
          *(short *)(*piVar9 + 0x3e) = *(short *)(*piVar9 + 0x3e) + 1;
          *(unsigned char *)(*piVar9 + (int)sVar5 + 0x11e) = *(unsigned char *)(*piVar9 + (int)sVar5 + 0x11e) | 0x80;
        }
      }
      goto joined_r0x100200ac;
    }
  }
  sVar16 = *(short *)(*piVar9 + 0x3e);
  uVar13 = (unsigned long long)sVar16;
  uVar19 = (unsigned long long)(uVar13 < 8);
  if (sVar16 < 4) {
    sVar16 = *(short *)(*piVar9 + 0x3e);
  }
  else {
    sVar16 = sVar16 + -4;
  }
  if (1 < sVar15) {
    sVar15 = *(short *)(*piVar7 + 0x1602);
joined_r0x1002026c:
    if (sVar15 != 0) {
      sVar15 = sVar15 + -1;
      uVar20 = (unsigned long long)sVar15;
      if (((int)*(char *)(*piVar7 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1)
                         + 0x1619) == (int)*(short *)(*piVar7 + 0x110)) &&
         (iVar11 = CanArmyEnterCity(uVar20,1), iVar11 != 0)) {
        bVar4 = *(unsigned char *)(*piVar9 + (int)sVar15 + 0x11e);
        if ((bVar4 & 0x40) == 0) {
          if ((bVar4 & 0x80) != 0) {
            if (sVar16 == 0) goto joined_r0x1002026c;
            *(unsigned char *)(*piVar9 + (int)sVar15 + 0x11e) = bVar4 & 0x7f;
            sVar16 = sVar16 + -1;
          }
          bVar1 = 0;
          iVar11 = 3;
          do {
            iVar10 = *piVar7 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 & 0xffffffff) << 1) +
                     iVar11;
            uVar14 = (unsigned long long)*(char *)(iVar10 + 0x161a);
            if ((-1 < (long long)uVar14) &&
               ((((*(char *)(*piVar8 + (int)(((uVar14 & 0x3fffffff) * 4 - uVar14 & 0xffffffff) << 1)
                            + 5) == '\x01' ||
                  ((int)*(short *)(*piVar9 + 0x3a) <= (int)*(char *)(iVar10 + 0x1622))) &&
                 (cVar3 = *(char *)(*piVar7 + (int)(((uVar20 & 0x7ffffff) * 0x20 + uVar20 &
                                                    0xffffffff) << 1) + iVar11 + 0x1626),
                 '\v' < cVar3)) &&
                (((((unsigned long long)(uVar13 < 8) + 0xe) -
                   ((unsigned long long)(uVar19 < 0xfffffffffffffff9 && uVar19 + 7 < 0xfffffffffffffff9) -
                   ((long long)(uVar13 << 0x20) >> 0x3f)) & 1) == 0 || ('\x0f' < cVar3)))))) {
              bVar1 = 1;
            }
            bVar2 = iVar11 != 0;
            iVar11 = (int)(short)((short)iVar11 + -1);
          } while (bVar2);
          if (bVar1) {
            *(short *)(*piVar9 + 0x40) = *(short *)(*piVar9 + 0x40) + 1;
            *(unsigned char *)(*piVar9 + (int)sVar15 + 0x11e) = *(unsigned char *)(*piVar9 + (int)sVar15 + 0x11e) | 8;
          }
        }
      }
      goto joined_r0x1002026c;
    }
  }
  if (*(short *)(*piVar9 + 0x40) < 4) {
    sVar16 = *(short *)(*piVar9 + 0x40);
  }
  else {
    sVar16 = *(short *)(*piVar9 + 0x40) + -4;
  }
  sVar15 = *(short *)(*piVar7 + 0x1602);
  while (sVar15 != 0) {
    sVar15 = sVar15 + -1;
    if ((int)*(char *)(*piVar7 + sVar15 * 0x42 + 0x1619) == (int)*(short *)(*piVar7 + 0x110)) {
      bVar4 = *(unsigned char *)(*piVar9 + (int)sVar15 + 0x11e);
      if ((((bVar4 & 0xc0) == 0) && ((bVar4 & 8) != 0)) && (sVar16 != 0)) {
        *(unsigned char *)(*piVar9 + (int)sVar15 + 0x11e) = bVar4 & 0xf7;
        sVar16 = sVar16 + -1;
      }
    }
  }
  iVar11 = *(short *)(*piVar9 + 0x24a) + -1;
  sVar15 = (short)iVar11;
  sVar16 = *(short *)(*piVar9 + 0x24a);
  while( 1 ) {
    sVar5 = sVar15;
    if (sVar16 == 0) {
      return iVar11;
    }
    iVar10 = *piVar9 + sVar5 * 0x5c;
    if ((*(short *)(iVar10 + 0x24c) != 0) &&
       (*(short *)(iVar10 + 0x2a4) = 8, (unsigned int)(int)sVar5 < 4)) break;
    sVar15 = sVar5 + -1;
    sVar16 = sVar5;
  }
  return iVar6 + *(int *)(iVar6 + sVar5 * 4);
}


/* ======================================================================
 * FUN_100214e8 - Clears unit data
 * Address: 0x100214e8, Size: 60 bytes
 * ====================================================================== */
void FUN_100214e8(short *param_1)
{
  *(char *)(param_1 + 2) = 0xff;
  *(char *)((int)param_1 + 5) = 0xff;
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  *(unsigned int *)(param_1 + 6) = *(unsigned int *)(param_1 + 6) & 0xffff0180;
  *(char *)(param_1 + 8) = 0xff;
  *(char *)((int)param_1 + 7) = 0;
  return;
}


/* ======================================================================
 * FUN_1002171c - UI rendering with local structs
 * Address: 0x1002171c, Size: 296 bytes
 * ====================================================================== */
void FUN_1002171c(void)
{
  int iVar1;
  int bVar2;
  pint *piVar3;
  short *psVar4;
  int bVar5;
  short sVar6;
  int iVar7;
  unsigned long long uVar8;
  int local_74;
  int local_50;
  int uStack_4c;
  int uStack_48;
  int uStack_44;
  unsigned int uStack_40;

  iVar1 = iRam101176e8;
  psVar4 = psRam101176e4;
  piVar3 = piRam101176e0;
  if (*piRam101176e0 != 0) {
    bVar2 = 0;
    ResourceRead_Dispatch((int)*(int **)(*piRam1011734c + 0x88) +
                 (int)*(short *)(**(int **)(*piRam1011734c + 0x88) + 0x228));
    if (**(short **)(local_74 + -0x154c) == 0) {
      if (*(char *)(*piVar3 + 4) == '\x1c') {
        bVar2 = 1;
      }
    }
    else {
      iVar7 = 0;
      bVar5 = 0;
      if (0 < *psVar4) {
        do {
          bVar2 = bVar5;
          if (*(char *)(*(int *)(iVar7 * 4 + iVar1) + 4) == '\x1c') {
            bVar2 = 1;
          }
          sVar6 = (short)iVar7 + 1;
          iVar7 = (int)sVar6;
          bVar5 = bVar2;
        } while (sVar6 < *psVar4);
      }
    }
    local_50 = CONCAT13(**(char **)(local_74 + -0x1b3c),local_50 & 0x00FFFFFF);
    if (bVar2) {
      iVar1 = *(int *)(local_74 + -0x1b3c);
      local_50 = *(int *)(iVar1 + 4);
      uStack_4c = *(int *)(iVar1 + 8);
      uStack_48 = *(int *)(iVar1 + 0xc);
      uStack_44 = *(int *)(iVar1 + 0x10);
      uStack_40 = *(unsigned int *)(iVar1 + 0x14) & 0xffffff00;
    }
    uVar8 = (unsigned long long)*(unsigned int *)(local_74 + -0x1b3c);
    FUN_10050ffc(uVar8 + 0x18,uVar8 + 0x20,uVar8 + 0x34,uVar8 + 0x4c,&local_50,
                 *(int *)(local_74 + -0x1b30),*(int *)(local_74 + -0x1b2c));
  }
  return;
}


/* ======================================================================
 * FUN_10025758 - Info panel display
 * Address: 0x10025758, Size: 1296 bytes
 * ====================================================================== */
void FUN_10025758(short param_1,short param_2,short param_3)
{
  pint *piVar1;
  short *psVar2;
  pint *piVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  short *psVar6;
  short *psVar7;
  pint *piVar8;
  int *puVar9;
  int iVar11;
  unsigned long long uVar10;
  int iVar12;
  int iVar13;
  short sVar14;
  int local_174;
  char auStack_150 [256];
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;

  puVar9 = (int *)piRam10117370;
  piVar8 = piRam1011735c;
  psVar7 = psRam1011677c;
  psVar6 = psRam10115e80;
  puVar5 = puRam10115db4;
  puVar4 = puRam10115db0;
  piVar3 = (pint *)piRam10115d88;
  psVar2 = psRam10115d80;
  piVar1 = (pint *)*(int *)(*piRam1011734c + 0x88);
  ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x228));
  iVar13 = *piVar3;
  if (iVar13 == 0) {
    iVar11 = ResourceRead_Dispatch(**(int **)(local_174 + -0x1e4) +
                          (int)*(short *)(*(int *)**(int **)(local_174 + -0x1e4) + 200),0xce4,piVar1
                         );
    *piVar3 = iVar11;
  }
  **(short **)(local_174 + -0x1b1c) = 0;
  if (param_1 == 4) {
    uVar10 = FUN_1002c200(param_2,param_3,1);
    if (((int)uVar10 == -1) ||
       (iVar11 = *piVar8 + (int)((uVar10 & 0xffffffff) << 5),
       iVar11 = FUN_10009630(1,*(short *)(iVar11 + 0x812),*(short *)(iVar11 + 0x814)),
       iVar11 == 0)) {
      ResourceRead_Dispatch(*piVar3 + (int)*(short *)(*(int *)*piVar3 + 0x738));
      *piVar3 = 0;
      return;
    }
    if (((*psVar2 == 4) && ((int)*psVar7 == (int)uVar10)) && (*psVar6 != 0)) {
      FUN_1002279c();
      return;
    }
    *psVar7 = (short)uVar10;
    iVar11 = *piVar8 + (int)((uVar10 & 0xffffffff) << 5);
    *puVar5 = *(unsigned short *)(iVar11 + 0x812);
    *puVar4 = *(unsigned short *)(iVar11 + 0x814);
  }
  else if (param_1 == 0) {
    uVar10 = FUN_1002bf64(param_2,param_3,0xe,1);
    iVar11 = (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0x7fffffff) << 1);
    iVar12 = FUN_10009630(1,*(short *)(*piVar8 + iVar11 + 0x1604),
                          *(short *)(*piVar8 + iVar11 + 0x1606));
    if (((iVar12 == 0) &&
        (iVar12 = FUN_10009630(1,*(short *)(iVar11 + *piVar8 + 0x1604) + 1,
                               *(short *)(iVar11 + *piVar8 + 0x1606)), iVar12 == 0)) &&
       ((iVar12 = FUN_10009630(1,*(short *)(iVar11 + *piVar8 + 0x1604),
                               *(short *)(iVar11 + *piVar8 + 0x1606) + 1), iVar12 == 0 &&
        (iVar11 = FUN_10009630(1,*(short *)(iVar11 + *piVar8 + 0x1604) + 1,
                               *(short *)(iVar11 + *piVar8 + 0x1606) + 1), iVar11 == 0)))) {
      return;
    }
    if (((*psVar2 == 0) && ((int)*psVar7 == (int)uVar10)) && (*psVar6 != 0)) {
      FUN_1002279c();
      return;
    }
    *psVar7 = (short)uVar10;
    iVar11 = *piVar8 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1);
    *puVar5 = *(unsigned short *)(iVar11 + 0x1604);
    *puVar4 = *(unsigned short *)(iVar11 + 0x1606);
  }
  else {
    iVar11 = FUN_1002bf64(param_2,param_3,*(short *)(*piVar8 + 0x110),1);
    if ((((*psVar2 == param_1) && (*psVar7 == iVar11)) && (*psVar6 != 0)) && (param_1 != 1)) {
      FUN_1002279c();
      return;
    }
    *psVar7 = (short)iVar11;
    iVar11 = *piVar8 + iVar11 * 0x42;
    if (*(char *)(iVar11 + 0x1631) < '\x01') {
      sVar14 = -1;
    }
    else {
      sVar14 = (short)*(char *)(iVar11 + 0x1630);
    }
    **(short **)(local_174 + -0x1b08) = sVar14;
    iVar11 = *piVar8 + *psVar7 * 0x42;
    *puVar5 = *(unsigned short *)(iVar11 + 0x1604);
    *puVar4 = *(unsigned short *)(iVar11 + 0x1606);
  }
  if (-1 < *psVar7) {
    *psVar2 = param_1;
    FUN_100230e8(1);
    FUN_10025598();
    *psVar6 = 1;
    FUN_1002279c();
    iVar11 = *piVar8;
    if (*(short *)(iVar11 + 0x12e) != 0) {
      if ((*(unsigned int *)(iVar11 + 0x134) >> 0x19 & 1) == 0) {
        *(unsigned int *)(iVar11 + 0x134) = *(unsigned int *)(iVar11 + 0x134) | 0x2000000;
        FUN_1005f6b0(0x19,1);
        FUN_10040040();
      }
      iVar11 = *piVar8;
      if (((*(unsigned int *)(iVar11 + 0x134) >> 0x1d & 1) == 0) &&
         (1 < *(short *)(*(short *)(iVar11 + 0x110) * 2 + *(int *)(local_174 + -0x324)))) {
        *(unsigned int *)(iVar11 + 0x134) = *(unsigned int *)(iVar11 + 0x134) | 0x20000000;
        FUN_1005f6b0(0x19,6);
        FUN_10040040();
      }
    }
    if (iVar13 == 0) {
      piVar1 = (pint *)*piVar3;
      if (piVar1 != (pint *)0x0) {
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x810));
      }
      local_50 = 0;
      local_4c = 0;
      local_44 = 0;
      local_40 = 0;
      local_48 = *puVar9;
      *puVar9 = (int)auStack_150;
      iVar13 = FUN_10000090(auStack_150);
      if (iVar13 == 0) {
        FUN_1002565c();
        *puVar9 = local_48;
      }
      else {
        piVar1 = (pint *)*piVar3;
        if (piVar1 != (pint *)0x0) {
          ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
        }
        *piVar3 = 0;
        FUN_100db158(local_50,local_4c);
      }
    }
  }
  return;
}


/* ======================================================================
 * FUN_1002656c - Diplomacy dialog
 * Address: 0x1002656c, Size: 376 bytes
 * ====================================================================== */
void FUN_1002656c(void)
{
  pint *piVar1;
  pint *piVar2;
  int *puVar3;
  int iVar4;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;

  puVar3 = (int *)piRam10117370;
  piVar2 = piRam10115dc4;
  if (*(short *)(*piRam1011735c + 0x11c) != 0) {
    if (*piRam10115dc4 == 0) {
      iVar4 = ResourceRead_Dispatch(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0x10cc,
                           *(int *)(*piRam1011734c + 0x88));
      *piVar2 = iVar4;
      FocusObject();
    }
    ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 800));
    FUN_10026310();
    FUN_10026568();
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puVar3;
    *puVar3 = (int)auStack_128;
    iVar4 = FUN_10000090(auStack_128);
    if (iVar4 == 0) {
      ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
      ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
      *piVar2 = 0;
      *puVar3 = local_20;
    }
    else {
      piVar1 = (pint *)*piVar2;
      if (piVar1 != (pint *)0x0) {
        ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
      }
      *piVar2 = 0;
      FUN_100db158(local_28,local_24);
    }
  }
  return;
}


/* ======================================================================
 * FUN_10029ac0 - Battle resolution
 * Address: 0x10029ac0, Size: 780 bytes
 * ====================================================================== */
void FUN_10029ac0(long long param_1,short param_2,char param_3,char param_4)
{
  pint *piVar1;
  pint *piVar2;
  short *psVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  short *psVar6;
  pint *piVar7;
  pint *piVar8;
  int iVar10;
  int uVar11;
  long long uVar9;
  int bVar12;
  int local_9c;
  char auStack_78 [120];

  piVar8 = piRam1011735c;
  piVar7 = (pint *)piRam1011734c;
  piVar2 = piRam1011639c;
  psVar6 = psRam10116304;
  puVar5 = puRam10115dd0;
  puVar4 = puRam10115dcc;
  psVar3 = psRam10115ce0;
  if (param_3 == '\0') {
    iVar10 = FUN_10028e10(param_1,*(short *)(param_2 * 2 + iRam1011773c),1,0);
  }
  else {
    iVar10 = FUN_10028b30(param_1,*(short *)(param_2 * 2 + iRam1011773c),1,0);
  }
  InitArmyProduction();
  InitPlayerData();
  if ((*psVar3 != 0) && (iVar10 != 0)) {
    FUN_1003d5d4();
    ShowMinimapCursor();
  }
  if ((*psVar6 != 0) || (*psVar3 == 0)) {
    FUN_10091334();
  }
  GetAIStateSnapshot();
  FUN_1002bbd4();
  FUN_1002bcd8();
  UpdateArmyDisplay(*(short *)(*piVar8 + 0x110));
  FUN_1002b91c();
  FUN_10044110(*(short *)(*piVar8 + 0x110),1);
  FUN_1003e13c(*psVar6,0);
  *psVar6 = 0;
  if (*(short *)(*piVar8 + 0x124) == 0) {
    FUN_1000848c(*puVar4,*puVar5);
  }
  piVar1 = (pint *)*piVar2;
  ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  piVar2 = (pint *)*piVar2;
  ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
  if (*(short *)(*piVar8 + 0x124) == 0) {
    RefreshDisplay(1,1,0);
  }
  FUN_10064850(1,0);
  FUN_10064850(0,0);
  if ((*(char *)(*(int *)(*piVar7 + 0x88) + 0x16e) == '\0') ||
     (*(char *)(*(int *)(*piVar7 + 0x88) + 0x16f) == '\0')) {
    bVar12 = 0;
  }
  else {
    bVar12 = 1;
  }
  if (bVar12) {
    iVar10 = *piVar7;
    *(char *)(iVar10 + 0x9a) = 1;
    uVar11 = FUN_10001a88();
    *(int *)(iVar10 + 0x9c) = uVar11;
  }
  else if ((*(char *)(*piVar7 + 0x9a) == '\0') && (param_4 != '\0')) {
    uVar9 = FUN_1005f678(0x30,1);
    DrawNumber((int)auStack_78,uVar9,*piVar8 + *(short *)(*piVar8 + 0x110) * 0x14);
    FUN_1003c938(auStack_78);
    ResourceRead_Dispatch(**(int **)(local_9c + -0x1698) +
                 (int)*(short *)(*(int *)**(int **)(local_9c + -0x1698) + 0x4c8));
    if (*(short *)(*piVar8 + 0x124) != 0) {
      FUN_1000848c(*puVar4,*puVar5);
      RefreshDisplay(1,1,0);
    }
    FUN_1005cc8c();
  }
  FUN_1002c85c();
  SelectMusic(1);
  return;
}


/* ======================================================================
 * WriteGameState - Game save function
 * Address: 0x10029e84, Size: 2160 bytes
 * ====================================================================== */
void FUN_10029e84(int *param_1)
{
  int iVar1;
  int *puVar2;
  int uVar3;
  int iVar4;
  pint *piVar5;
  void **ppuVar6;
  int *piVar9;
  int *piVar10;
  long long uVar7;
  long long uVar8;
  void **local_47c;
  char auStack_458 [72];
  char auStack_410 [72];
  int local_3c8;
  char *local_3c4;
  char *local_390;
  char auStack_388 [4];
  char auStack_384 [4];
  char auStack_380 [72];
  char local_338 [256];
  int local_238 [3];
  int local_22c;
  char local_228 [256];
  char auStack_128 [72];
  char auStack_e0 [72];
  char auStack_98 [152];

  piVar5 = piRam1011735c;
  piVar10 = (int *)piRam10115cf0;
  ppuVar6 = DOT_TVECT;
  iVar1 = *(int *)(*piRam1011734c + 0x88);
  *(short *)(*piRam1011735c + 0x120) = 0;
  piVar9 = (int *)FUN_100522dc((int)param_1,6,1);
  if (piVar9 != (int *)0x0) {
    StreamWrite(piVar9,(int)ppuVar6[-0xa7],0x54);
    StreamWrite(piVar9,*piVar5,0x2fcc);
    StreamWrite(piVar9,*(int *)ppuVar6[-0x152],0x8880);
    StreamWrite(piVar9,*(int *)ppuVar6[-0x150],22000);
    StreamWrite(piVar9,*(int *)ppuVar6[-0x153],0x4440);
    puVar2 = (int *)*piVar10;
    if (puVar2 != (int *)0x0) {
      DetachResource(puVar2);
      ppuVar6 = local_47c;
    }
    uVar3 = *puVar2;
    *(int *)ppuVar6[-0x6eb] = uVar3;
    StreamWrite(piVar9,uVar3,0x4440);
    iVar4 = *piVar10;
    if (iVar4 != 0) {
      DisposeHandle_Thunk(iVar4);
    }
    piVar10 = (int *)FUN_100522dc(*(int *)(iVar1 + 0x15c),1,0);
    local_238[0] = ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0xb8));
    uVar7 = FUN_100f1640();
    StreamRead(piVar10,uVar7,local_238[0]);
    StreamWrite(piVar9,local_238,4);
    StreamWrite(piVar9,uVar7,local_238[0]);
    CloseStream(piVar10,1);
    FreeBlock(uVar7);
    piVar10 = (int *)FUN_100522dc(*(int *)(iVar1 + 0x160),1,0);
    local_238[0] = ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0xb8));
    uVar7 = FUN_100f1640();
    StreamRead(piVar10,uVar7,local_238[0]);
    StreamWrite(piVar9,local_238,4);
    StreamWrite(piVar9,uVar7,local_238[0]);
    CloseStream(piVar10,1);
    FreeBlock(uVar7);
    WriteCityRecords(piVar9);
    if (*(short *)(*piVar5 + 0x120) == 0) {
      uVar7 = ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
      local_338[0] = 0;
      local_3c8 = 0x3c;
      local_3c4 = local_338;
      local_390 = auStack_380;
      GetString((unsigned long long)*(unsigned int *)local_47c[-0x3b7] + 0x32,&local_3c8);
      EndFocus();
      local_228[0] = 0;
      piVar10 = *(int **)(iVar1 + 0x148);
      FocusObject(piVar10);
      ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
      uVar8 = FUN_10003558(0x4e414d45,10000);
      if ((int)uVar8 != 0) {
        CopyResourceToDoc(param_1,uVar8);
        ResolveAlias(uVar8,auStack_384,auStack_388,local_228);
      }
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
      ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x178),auStack_410);
      MakeAlias(auStack_380,auStack_410,&local_22c);
      iVar4 = local_22c;
      if (local_22c != 0) {
        uVar8 = FUN_100b1c84(local_228);
        AddResource(iVar4,0x616c6973,1000,uVar8);
        MarkChanged();
        ReleaseResource_Thunk(local_22c);
        DisposeHandleFull(local_22c);
      }
      piVar10 = *(int **)(iVar1 + 0x14c);
      FocusObject(piVar10);
      ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
      uVar8 = FUN_10003558(0x4e414d45,30000);
      if ((int)uVar8 == 0) {
        local_228[0] = 0;
      }
      else {
        CopyResourceToDoc(param_1,uVar8);
        ResolveAlias(uVar8,auStack_384,auStack_388,local_228);
      }
      ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
      ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x178),auStack_458);
      MakeAlias(auStack_380,auStack_458,&local_22c);
      iVar4 = local_22c;
      if (local_22c != 0) {
        uVar8 = FUN_100b1c84(local_228);
        AddResource(iVar4,0x616c6973,0x3e9,uVar8);
        MarkChanged();
        ReleaseResource_Thunk(local_22c);
      }
      piVar10 = *(int **)(iVar1 + 0x150);
      if (piVar10 != (int *)0x0) {
        ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
        uVar8 = FUN_10003558(0x4e414d45,20000);
        if ((int)uVar8 == 0) {
          local_228[0] = 0;
        }
        else {
          CopyResourceToDoc(param_1,uVar8);
          ResolveAlias(uVar8,auStack_384,auStack_388,local_228);
        }
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
        ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x178));
        MakeAlias(auStack_380,auStack_128,&local_22c);
        iVar4 = local_22c;
        if (local_22c != 0) {
          uVar8 = FUN_100b1c84(local_228);
          AddResource(iVar4,0x616c6973,0x3ea,uVar8);
          MarkChanged();
          ReleaseResource_Thunk(local_22c);
        }
      }
      piVar10 = *(int **)(iVar1 + 0x154);
      if (piVar10 != (int *)0x0) {
        ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
        uVar8 = FUN_10003558(0x4e414d45,25000);
        if ((int)uVar8 == 0) {
          local_228[0] = 0;
        }
        else {
          CopyResourceToDoc(param_1,uVar8);
          ResolveAlias(uVar8,auStack_384,auStack_388,local_228);
        }
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
        ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x178));
        MakeAlias(auStack_380,auStack_e0,&local_22c);
        iVar4 = local_22c;
        if (local_22c != 0) {
          uVar8 = FUN_100b1c84(local_228);
          AddResource(iVar4,0x616c6973,0x3eb,uVar8);
          MarkChanged();
          ReleaseResource_Thunk(local_22c);
        }
      }
      piVar10 = *(int **)(iVar1 + 0x158);
      if (piVar10 != (int *)0x0) {
        ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x2b8));
        uVar8 = FUN_10003558(0x4e414d45,15000);
        if ((int)uVar8 == 0) {
          local_228[0] = 0;
        }
        else {
          CopyResourceToDoc(param_1,uVar8);
          ResolveAlias(uVar8,auStack_384,auStack_388,local_228);
        }
        ResourceRead_Dispatch((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
        ResourceRead_Dispatch((int)piVar10 + (int)*(short *)(*piVar10 + 0x178));
        MakeAlias(auStack_380,auStack_98,&local_22c);
        iVar1 = local_22c;
        if (local_22c != 0) {
          uVar8 = FUN_100b1c84(local_228);
          AddResource(iVar1,0x616c6973,0x3ec,uVar8);
          MarkChanged();
          ReleaseResource_Thunk(local_22c);
        }
      }
      DisposeGeneric(uVar7);
    }
    ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x90));
  }
  return;
}


/* ======================================================================
 * FUN_1002b4e0 - End-of-turn dialog
 * Address: 0x1002b4e0, Size: 456 bytes
 * ====================================================================== */
void FUN_1002b4e0(void)
{
  int *puVar1;
  int iVar3;
  int *piVar4;
  unsigned long long uVar2;
  int local_154;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  puVar1 = (int *)piRam10117370;
  if (*(short *)(*(short *)(*piRam1011735c + 0x110) * 2 + iRam1011757c) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = *(int *)piRam10117370;
    *(int *)piRam10117370 = (int)auStack_12c;
    iVar3 = FUN_10000090(auStack_12c);
    if (iVar3 == 0) {
      piVar4 = (int *)ResourceRead_Dispatch(**(int **)(local_154 + -0x1e4) +
                                   (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),
                                   0xd5c,*(int *)(**(int **)(local_154 + -0x554) + 0x88));
      FocusObject();
      ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 800));
      uVar2 = ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x810));
      ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x328));
      if ((uVar2 & 0xffffffff) != 0x706c6179) {
        FUN_1002b230((0x6772 - ((0x756e6772 < uVar2) + 0x6772)) +
                     (unsigned short)(0x756e6771 < uVar2 &&
                             (unsigned long long)(0x756e6772 < uVar2) <= uVar2 - 0x756e6772));
      }
      ResourceRead_Dispatch((int)piVar4 + (int)*(short *)(*piVar4 + 0x90));
      *puVar1 = local_24;
    }
    else {
      FUN_100db158(local_2c,local_28);
    }
  }
  return;
}


/* ======================================================================
 * FUN_1002b91c - Map ownership refresh
 * Address: 0x1002b91c, Size: 696 bytes
 * ====================================================================== */
void FUN_1002b91c(void)
{
  short sVar1;
  unsigned int uVar2;
  int iVar3;
  pint *piVar4;
  pint *piVar5;
  pint *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  iVar9 = 0;
  do {
    iVar10 = 0;
    do {
      iVar3 = *piVar4 + iVar10 * 0xe0;
      iVar8 = iVar9 * 2;
      *(unsigned int *)(iVar3 + iVar8) = *(unsigned int *)(iVar3 + iVar8) & 0xffefffff;
      iVar3 = iVar10 * 0xe0 + *piVar4;
      *(unsigned int *)(iVar3 + iVar8) = *(unsigned int *)(iVar3 + iVar8) | 0xf0000;
      sVar7 = (short)iVar10 + 1;
      iVar10 = (int)sVar7;
    } while (sVar7 < 0x9c);
    sVar7 = (short)iVar9 + 1;
    iVar9 = (int)sVar7;
  } while (sVar7 < 0x70);
  sVar7 = *(short *)(*piVar5 + 0x182);
  if (sVar7 != 0) {
    do {
      sVar7 = sVar7 + -1;
      iVar9 = *piVar6;
      iVar10 = sVar7 * 0x16;
      sVar1 = *(short *)(iVar9 + iVar10 + 2);
      if (-1 < sVar1) {
        iVar3 = *piVar4 + sVar1 * 0xe0;
        iVar9 = *(short *)(iVar10 + iVar9) * 2;
        *(unsigned int *)(iVar3 + iVar9) = *(unsigned int *)(iVar3 + iVar9) | 0x100000;
        iVar9 = *piVar6;
        iVar8 = iVar9 + iVar10;
        iVar3 = *piVar4 + *(short *)(iVar8 + 2) * 0xe0;
        iVar9 = *(short *)(iVar9 + iVar10) * 2;
        *(unsigned int *)(iVar3 + iVar9) =
             ((int)*(char *)(iVar8 + 5) & 0xfU) << 0x10 | *(unsigned int *)(iVar3 + iVar9) & 0xfff0ffff;
      }
    } while (sVar7 != 0);
  }
  sVar7 = *(short *)(*piVar5 + 0x1602);
  while (sVar7 != 0) {
    sVar7 = sVar7 + -1;
    iVar10 = sVar7 * 0x42;
    iVar9 = *piVar5 + iVar10;
    if (*(char *)(iVar9 + 0x1619) != '\x0f') {
      iVar3 = *piVar4 + *(short *)(iVar9 + 0x1606) * 0xe0;
      iVar8 = *(short *)(iVar9 + 0x1604) * 2;
      *(unsigned int *)(iVar3 + iVar8) =
           ((int)*(char *)(iVar9 + 0x1619) & 0xfU) << 0x10 | *(unsigned int *)(iVar3 + iVar8) & 0xfff0ffff;
      iVar9 = *piVar5 + iVar10;
      iVar3 = *piVar4 + *(short *)(iVar9 + 0x1606) * 0xe0 + *(short *)(iVar9 + 0x1604) * 2;
      *(unsigned int *)(iVar3 + 0xe0) =
           ((int)*(char *)(iVar9 + 0x1619) & 0xfU) << 0x10 | *(unsigned int *)(iVar3 + 0xe0) & 0xfff0ffff;
      iVar9 = *piVar5 + iVar10;
      iVar3 = *piVar4 + *(short *)(iVar9 + 0x1606) * 0xe0 + *(short *)(iVar9 + 0x1604) * 2;
      *(unsigned int *)(iVar3 + 2) =
           ((int)*(char *)(iVar9 + 0x1619) & 0xfU) << 0x10 | *(unsigned int *)(iVar3 + 2) & 0xfff0ffff;
      iVar10 = iVar10 + *piVar5;
      iVar9 = *piVar4 + *(short *)(iVar10 + 0x1606) * 0xe0 + *(short *)(iVar10 + 0x1604) * 2;
      *(unsigned int *)(iVar9 + 0xe2) =
           ((int)*(char *)(iVar10 + 0x1619) & 0xfU) << 0x10 | *(unsigned int *)(iVar9 + 0xe2) & 0xfff0ffff;
    }
  }
  iVar9 = 0;
  do {
    iVar10 = 0;
    do {
      iVar3 = *piVar4 + iVar10 * 0xe0;
      uVar2 = *(unsigned int *)(iVar3 + iVar9 * 2);
      if (((uVar2 >> 0x15 & 1) != 0) && ((uVar2 >> 0x14 & 1) == 0)) {
        *(unsigned int *)(iVar9 * 2 + iVar3) = uVar2 & 0xffdfffff;
      }
      sVar7 = (short)iVar10 + 1;
      iVar10 = (int)sVar7;
    } while (sVar7 < 0x9c);
    sVar7 = (short)iVar9 + 1;
    iVar9 = (int)sVar7;
  } while (sVar7 < 0x70);
  return;
}


/* ======================================================================
 * LookupCityAtPos - Find city at coords
 * Address: 0x1002be50, Size: 164 bytes
 * ====================================================================== */
unsigned long long LookupCityAtPos(short param_1,short param_2)
{
  short sVar1;
  int iVar2;
  unsigned long long uVar3;

  uVar3 = 0;
  if (0 < *(short *)(*piRam1011735c + 0x1602)) {
    do {
      iVar2 = (int)*(short *)(*piRam1011735c +
                              (int)(((uVar3 & 0x7ffffff) * 0x20 + uVar3 & 0xffffffff) << 1) + 0x1604
                             );
      if (((iVar2 == param_1) || (iVar2 == param_1 + -1)) &&
         ((iVar2 = (int)*(short *)(*piRam1011735c +
                                   (int)(((uVar3 & 0x7ffffff) * 0x20 + uVar3 & 0xffffffff) << 1) +
                                  0x1606), iVar2 == param_2 || (iVar2 == param_2 + -1)))) {
        return uVar3;
      }
      sVar1 = (short)uVar3 + 1;
      uVar3 = (unsigned long long)sVar1;
    } while (sVar1 < *(short *)(*piRam1011735c + 0x1602));
  }
  return 0xffffffffffffffff;
}


/* ======================================================================
 * FUN_1002e5c0 - City capture/raze
 * Address: 0x1002e5c0, Size: 532 bytes
 * ====================================================================== */
void FUN_1002e5c0(int param_1,short param_2,short param_3)
{
  pint *piVar1;
  short *psVar2;
  int iVar3;
  void **ppuVar4;
  short sVar5;
  int iVar6;
  char uVar7;
  int iVar8;
  short local_30 [2];
  short local_2c [22];

  iVar3 = iRam1011773c;
  psVar2 = psRam1011760c;
  piVar1 = piRam1011735c;
  ppuVar4 = DOT_TVECT;
  *(short *)(*piRam1011735c + *(char *)(param_1 + 10) * 2 + 0x544) = 0;
  FUN_1003aeb0(2,0,0,param_1);
  uVar7 = 1;
  if (0 < *psVar2) {
    if (*(char *)(*piVar1 + (*(unsigned int *)(*(int *)ppuVar4[-0x152] + param_3 * 0xe0 + param_2 * 2) >>
                            0x18) + 0x711) == '\x02') {
      PlayNotificationSound();
      uVar7 = 0;
    }
  }
  iVar8 = 0;
  if (0 < *psVar2) {
    do {
      iVar6 = iVar8 * 2;
      *(char *)(*piVar1 + *(short *)(iVar6 + iVar3) * 0x1e + 0xd28) = uVar7;
      *(short *)(*piVar1 + *(short *)(iVar6 + iVar3) * 0x1e + 0xd2a) = 0;
      *(short *)(*piVar1 + *(short *)(iVar6 + iVar3) * 0x1e + 0xd2c) = param_2;
      *(short *)(*piVar1 + *(short *)(iVar6 + iVar3) * 0x1e + 0xd2e) = param_3;
      if (*(short *)(iVar6 + iVar3) == *(short *)(*piVar1 + 0x110)) {
        FUN_10047de8(0xfffffffffffffffe,local_2c,local_30);
        iVar6 = 0;
        if (0 < local_30[0]) {
          do {
            *(short *)(*piVar1 + local_2c[iVar6] * 0x42 + 0x1636) = 0;
            *(short *)(*piVar1 + local_2c[iVar6] * 0x42 + 0x1638) = 0xffff;
            *(short *)(*piVar1 + local_2c[iVar6] * 0x42 + 0x163a) = 0xffff;
            sVar5 = (short)iVar6 + 1;
            iVar6 = (int)sVar5;
          } while (sVar5 < local_30[0]);
        }
      }
      sVar5 = (short)iVar8 + 1;
      iVar8 = (int)sVar5;
    } while (sVar5 < *psVar2);
  }
  return;
}


/* ======================================================================
 * FUN_1002f97c - Battle with UI updates
 * Address: 0x1002f97c, Size: 1016 bytes
 * ====================================================================== */
void FUN_1002f97c(short param_1,short param_2,short param_3,short param_4)
{
  pint *piVar1;
  pint *piVar2;
  pint *piVar3;
  unsigned int *puVar4;
  char **ppuVar5;
  int iVar6;
  long long uVar7;
  int uVar8;
  unsigned long long uVar9;
  long long lVar10;
  int iVar11;
  int iVar12;
  int local_4c;
  char auStack_28 [40];

  uVar8 = uRam101174fc;
  piVar1 = piRam101174b0;
  puVar4 = (unsigned int *)piRam1011735c;
  piVar3 = (pint *)piRam1011734c;
  piVar2 = piRam101163ac;
  ppuVar5 = (char **)DOT_TVECT;
  iVar12 = (int)param_4;
  iVar11 = (int)param_3;
  if (param_1 == 1) {
    if (*(char *)(*puVar4 + (int)param_2 + 0x711) == '\n') {
      if (*psRam101174cc != 0) {
        ppuVar5 = (char **)DOT_TVECT;
        FUN_1005f678(0x8e,0xffffffffffffffff);
        FUN_10031f54();
      }
      if (*piVar1 == 0) {
        lVar10 = (unsigned long long)*puVar4 +
                 (((long long)(char)*ppuVar5[-0x4d] & 0x3fffffffU) * 4 +
                  (long long)(char)*ppuVar5[-0x4d] & 0x3fffffff) * 4;
      }
      else {
        uVar9 = (unsigned long long)*(char *)(*piVar1 + 10);
        lVar10 = (unsigned long long)*puVar4 + ((uVar9 & 0x3fffffff) * 4 + uVar9 & 0x3fffffff) * 4 + 0x224;
      }
      BlockMoveData_Thunk((int)ppuVar5[-0xe8],lVar10);
      iVar6 = local_4c;
      uVar9 = LookupCityAtPos(iVar11,iVar12);
      BlockMoveData_Thunk(*(int *)(iVar6 + -0x39c),
                   (unsigned long long)*puVar4 + ((uVar9 & 0x7ffffff) * 0x20 + uVar9 & 0x7fffffff) * 2 +
                   0x1608);
      if (*piVar1 == 0) {
        FUN_1005f678(0x90,0);
        FUN_10031f54();
      }
      else {
        uVar7 = FUN_1005f678(0x8f,0);
        DrawNumber(uVar8,uVar7,
                     (unsigned long long)*puVar4 +
                     (((long long)*(char *)(*piVar1 + 10) & 0x3fffffffU) * 4 +
                      (long long)*(char *)(*piVar1 + 10) & 0x3fffffff) * 4 + 0x224);
        FUN_10031f54(uVar8);
      }
    }
    else if (*piRam101174b0 == 0) {
      FUN_1005f678(0x92,0);
      FUN_10031f54();
    }
    else {
      uVar7 = FUN_1005f678(0x91,0);
      DrawNumber(uVar8,uVar7,
                   (unsigned long long)*puVar4 +
                   (((long long)*(char *)(*piVar1 + 10) & 0x3fffffffU) * 4 +
                    (long long)*(char *)(*piVar1 + 10) & 0x3fffffff) * 4 + 0x224);
      FUN_10031f54(uVar8);
      FUN_1005f678(0x91,1);
      FUN_10031f54();
    }
  }
  else {
    FUN_1005f678(0x93,0);
    FUN_10031f54();
  }
  uVar9 = FUN_1002e7d4(param_1,iVar11,iVar12);
  piVar1 = (pint *)*piVar2;
  ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
  FUN_10031fc4();
  piVar2 = (pint *)*piVar2;
  ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x4d0));
  ResourceRead_Dispatch(**(int **)(local_4c + -0x1698) +
               (int)*(short *)(*(int *)**(int **)(local_4c + -0x1698) + 0x4c8));
  ResourceRead_Dispatch(**(int **)(local_4c + -0x1504) +
               (int)*(short *)(*(int *)**(int **)(local_4c + -0x1504) + 0x4c8));
  ResourceRead_Dispatch(**(int **)(local_4c + -0x16a0) +
               (int)*(short *)(*(int *)**(int **)(local_4c + -0x16a0) + 0x4c8));
  ResourceRead_Dispatch(**(int **)(local_4c + -0x18fc) +
               (int)*(short *)(*(int *)**(int **)(local_4c + -0x18fc) + 0x4c8));
  RefreshDisplay(1,1,0);
  if (param_1 == 1) {
    iVar6 = **(int **)(local_4c + -0x548) + iVar12 * 0xe0;
    *(unsigned int *)(iVar6 + iVar11 * 2) = *(unsigned int *)(iVar6 + iVar11 * 2) | 0x100000;
    uVar8 = FUN_1002122c(iVar11,iVar12,auStack_28);
    **(int **)(local_4c + -0x1c0) = uVar8;
    PrepareDefender();
  }
  FUN_1002f194(param_1);
  FUN_1003f674(1,1,1);
  piVar2 = *(pint **)(*piVar3 + 0x88);
  ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x38),0,0);
  iVar11 = *(int *)(*piVar3 + 0x88);
  *(char *)(iVar11 + 0x1e8) =
       ('!' - ((0x21 < uVar9) + '!')) + (0x20 < uVar9 && (unsigned long long)(0x21 < uVar9) <= uVar9 - 0x21);
  DispatchNextPhase(iVar11,0x3f7);
  return;
}


/* ======================================================================
 * FUN_1002fd74 - End turn handler
 * Address: 0x1002fd74, Size: 244 bytes
 * ====================================================================== */
void FUN_1002fd74(char param_1)
{
  void **ppuVar1;
  int iVar2;

  ppuVar1 = DOT_TVECT;
  if (param_1 == '\0') {
    if (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0xc + 0x1142) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = ProcessQuestEvent(0,0,0,0);
    }
    if (iVar2 == 0) {
      FUN_1005cc8c();
      FUN_1003dc28();
    }
  }
  else {
    if (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0xc + 0x1142) != 0) {
      ppuVar1 = DOT_TVECT;
      ProcessQuestEvent(0,0,0,0);
    }
    DispatchNextPhase(*(int *)(*(int *)ppuVar1[-0x155] + 0x88),0x3f4);
  }
  return;
}


/* ======================================================================
 * FUN_1002fe68 - Center on unit
 * Address: 0x1002fe68, Size: 84 bytes
 * ====================================================================== */
void FUN_1002fe68(void)
{
  char **ppuVar1;
  long long uVar2;

  ppuVar1 = (char **)DOT_TVECT;
  uVar2 = LookupCityAtPos(*puRam101174f4,*puRam101174f8);
  FUN_100472f4((int)ppuVar1[-0xe8],(int)ppuVar1[-0xe7],(int)*ppuVar1[-0x4c],uVar2);
  return;
}


/* ======================================================================
 * FUN_10033e7c - Patrol waypoint setting
 * Address: 0x10033e7c, Size: 504 bytes
 * ====================================================================== */
void FUN_10033e7c(void)
{
  char cVar1;
  int iVar2;
  pint *piVar3;
  pint *piVar4;
  pint *piVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;

  iVar2 = iRam1011773c;
  psVar6 = psRam1011760c;
  piVar5 = piRam101174b0;
  piVar4 = piRam1011735c;
  piVar3 = piRam10117354;
  if ((((*piRam101174b0 != 0) &&
       (cVar1 = *(char *)(*piRam1011735c +
                          (*(unsigned int *)(*piRam10117358 + ((short *)*piRam101174b0)[1] * 0xe0 +
                                    *(short *)*piRam101174b0 * 2) >> 0x18) + 0x711), cVar1 != '\x02'
       )) && (cVar1 != '\x03')) &&
     (((cVar1 != '\n' && (cVar1 != '\v')) &&
      ((*(unsigned int *)(*piRam10117354 + ((short *)*piRam101174b0)[1] * 0x70 +
                 (int)*(short *)*piRam101174b0) >> 0x1e & 1) == 0)))) {
    FUN_1003aeb0(2,0,0,*piRam101174b0);
    iVar8 = 0;
    if (0 < *psVar6) {
      do {
        iVar9 = iVar8 * 2;
        if (*(short *)(iVar9 + iVar2) == *(short *)(*piVar4 + 0x110)) {
          *(short *)(*piVar4 + *(short *)(iVar9 + iVar2) * 0x1e + 0xd2c) =
               *(short *)*piVar5;
          *(short *)(*piVar4 + *(short *)(iVar9 + iVar2) * 0x1e + 0xd2e) =
               *(short *)(*piVar5 + 2);
          *(char *)(*piVar4 + *(short *)(iVar9 + iVar2) * 0x1e + 0xd28) = 1;
          *(short *)(*piVar4 + *(short *)(iVar9 + iVar2) * 0x1e + 0xd2a) = 0;
          iVar2 = *piVar3 + ((short *)*piVar5)[1] * 0x70;
          sVar7 = *(short *)*piVar5;
          *(unsigned int *)(iVar2 + sVar7) = *(unsigned int *)(iVar2 + sVar7) | 0x40000000;
          FUN_10007f78();
          break;
        }
        sVar7 = (short)iVar8 + 1;
        iVar8 = (int)sVar7;
      } while (sVar7 < *psVar6);
    }
    FUN_1003dc28();
  }
  return;
}


/* ======================================================================
 * FUN_100351ec - Heroes display dialog
 * Address: 0x100351ec, Size: 1412 bytes
 * ====================================================================== */
void FUN_100351ec(void)
{
  int bVar1;
  char cVar2;
  unsigned int uVar3;
  pint *piVar4;
  pint *piVar5;
  int *piVar7;
  int iVar8;
  long long uVar6;
  short sVar9;
  short sVar10;
  unsigned int uVar11;
  int iVar12;
  long long lVar13;
  int local_89c;
  char auStack_878 [256];
  char auStack_778 [256];
  char auStack_678 [256];
  char auStack_578 [256];
  char auStack_478 [256];
  char auStack_378 [256];
  char auStack_278 [260];
  char auStack_174 [24];
  char auStack_15c [256];
  short local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;

  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  piVar7 = (int *)ResourceRead_Dispatch(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xfaa,
                               *(int *)(*piRam1011734c + 0x88));
  iVar8 = local_89c;
  FocusObject();
  local_5c = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = **(int **)(iVar8 + -0x530);
  **(int **)(iVar8 + -0x530) = (int)auStack_15c;
  iVar8 = FUN_10000090(auStack_15c);
  lVar13 = 0;
  if (iVar8 == 0) {
    uVar11 = 3;
    do {
      sVar9 = *(short *)(*piVar4 + 0x182);
      if (sVar9 != 0) {
        do {
          sVar9 = sVar9 + -1;
          iVar12 = (int)sVar9;
          iVar8 = *piVar5 + iVar12 * 0x16;
          if (*(char *)(iVar8 + 4) == '\x1c') {
            sVar10 = *(short *)(*piVar4 + 0x110);
            if ((int)*(char *)(iVar8 + 5) == (int)sVar10) {
              cVar2 = *(char *)(iVar8 + 10);
              if ((*(unsigned int *)((int)cVar2 + *piVar4 + 0x5e4) >> 0x18 & 3) == uVar11) {
                if (uVar11 == 3) {
                  sVar10 = sVar10 + 2;
                }
                else {
                  sVar10 = 1;
                }
                uVar6 = ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),
                                     lVar13 + 0x61726d30);
                iVar8 = local_89c;
                if ((int)uVar6 != 0) {
                  FUN_10079ee8(uVar6,0x1c,*(short *)(*piVar4 + 0x110),1);
                  FUN_1007a018(uVar6,sVar10,0,0,1);
                }
                BuildPascalString(auStack_278,*piVar4 + cVar2 * 0x14 + 0x224);
                FUN_10090e0c(piVar7,lVar13 + 0x6e616d30,auStack_278,1);
                if (*(short *)(*piVar4 + cVar2 * 2 + 0x594) == 0) {
                  uVar6 = FUN_1005f678(100,(unsigned char)((unsigned int)*(int *)
                                                         (*piVar4 + (int)cVar2 + 0x5e4) >> 0x18) & 3
                                      );
                  BuildPascalString(auStack_478,(int)uVar6);
                  FUN_10090e0c(piVar7,lVar13 + 0x6c657630,auStack_478,1);
                }
                else {
                  uVar6 = FUN_1005f678(0x65,(unsigned char)((unsigned int)*(int *)
                                                          (*piVar4 + (int)cVar2 + 0x5e4) >> 0x18) &
                                            3);
                  BuildPascalString(auStack_378,(int)uVar6);
                  FUN_10090e0c(piVar7,lVar13 + 0x6c657630,auStack_378,1);
                }
                DrawNumber((int)auStack_174,(unsigned long long)*(unsigned int *)(iVar8 + -0x1a7c) + 0x14,
                             *(unsigned int *)(*piVar4 + (int)cVar2 + 0x5e4) >> 0x1a);
                iVar8 = local_89c;
                BuildPascalString(auStack_578,(int)auStack_174);
                FUN_10090e0c(piVar7,lVar13 + 0x65787030,auStack_578,1);
                if ((*(unsigned int *)((int)cVar2 + *piVar4 + 0x5e4) >> 0x18 & 3) < 4) {
                  return;
                }
                BuildPascalString(auStack_678,(int)auStack_174);
                FUN_10090e0c(piVar7,lVar13 + 0x6e656530,auStack_678,1);
                uVar3 = *(unsigned int *)(iVar8 + -0x1a7c);
                DrawNumber((int)auStack_174,(unsigned long long)uVar3 + 0x28,
                             *(char *)(*piVar5 + iVar12 * 0x16 + 8));
                BuildPascalString(auStack_778,(int)auStack_174);
                FUN_10090e0c(piVar7,lVar13 + 0x73747230,auStack_778,1);
                DrawNumber((int)auStack_174,(unsigned long long)uVar3 + 0x2c,
                             *(char *)(iVar12 * 0x16 + *piVar5 + 6));
                BuildPascalString(auStack_878,(int)auStack_174);
                FUN_10090e0c(piVar7,lVar13 + 0x6d6f7630,auStack_878,1);
                lVar13 = (long long)(short)((short)lVar13 + 1);
              }
            }
          }
        } while (iVar12 != 0);
      }
      bVar1 = uVar11 != 0;
      uVar11 = (int)(short)((short)uVar11 + -1);
    } while (bVar1);
    if ((int)lVar13 < 6) {
      do {
        uVar6 = ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),lVar13 + 0x61726d30);
        if ((int)uVar6 != 0) {
          FUN_10079ee8(uVar6,0xffffffffffffffff,*(short *)(*piVar4 + 0x110),1);
          FUN_1007a018(uVar6,1,0,0,1);
        }
        sVar9 = (short)lVar13 + 1;
        lVar13 = (long long)sVar9;
      } while (sVar9 < 6);
    }
    ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x810));
    ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
    **(int **)(local_89c + -0x530) = local_54;
  }
  else {
    if (piVar7 != (int *)0x0) {
      ResourceRead_Dispatch((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
    }
    FUN_100db158(local_5c,local_58);
  }
  return;
}


/* ======================================================================
 * FUN_10037fe4 - History/replay dialog
 * Address: 0x10037fe4, Size: 504 bytes
 * ====================================================================== */
void FUN_10037fe4(short param_1)
{
  pint *piVar1;
  pint *piVar2;
  int *puVar3;
  short *psVar4;
  void **ppuVar5;
  long long uVar6;
  long long uVar7;
  int iVar8;
  short sVar9;
  char auStack_130 [256];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  short local_18;
  short local_16;

  psVar4 = psRam10117558;
  puVar3 = (int *)piRam10117370;
  piVar1 = piRam1011735c;
  piVar2 = piRam10115e34;
  ppuVar5 = DOT_TVECT;
  *_FUN_10115e4c = param_1;
  if (param_1 == 4) {
    FUN_10035d7c();
  }
  else {
    FUN_1007f0a4(*(int *)(*piRam1011734c + 0x88),param_1);
    local_18 = *(short *)(*piVar1 + 0x136);
    sVar9 = local_18;
    if (local_18 < 2) {
      sVar9 = 1;
    }
    if (sVar9 < 2) {
      uVar6 = FUN_1005f678(0x5e,1);
      uVar7 = FUN_1005f678(0x5e,0);
      FUN_1003ced4(uVar7,uVar6);
    }
    else {
      local_16 = *(short *)(*piVar1 + 0x136);
      sVar9 = local_16;
      if (local_16 < 2) {
        sVar9 = 1;
      }
      *psVar4 = sVar9;
      if (0xc9 < sVar9) {
        *psVar4 = 0xc9;
      }
      *(short *)ppuVar5[-0xd1] = *psVar4 + -1;
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = *puVar3;
      *puVar3 = (int)auStack_130;
      iVar8 = FUN_10000090(auStack_130);
      if (iVar8 == 0) {
        FUN_100376d8(1,1);
        FUN_10037cdc();
        piVar1 = (pint *)*piVar2;
        if (piVar1 != (pint *)0x0) {
          ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x810));
          FUN_10037fc4();
          ResourceRead_Dispatch(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
          *piVar2 = 0;
        }
        *puVar3 = local_28;
      }
      else {
        piVar1 = (pint *)*piVar2;
        if (piVar1 != (pint *)0x0) {
          ResourceRead_Dispatch((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
        }
        *piVar2 = 0;
        FUN_100db158(local_30,local_2c);
      }
    }
  }
  return;
}


/* ======================================================================
 * FUN_1003a5fc - Preferences dialog
 * Address: 0x1003a5fc, Size: 356 bytes
 * ====================================================================== */
void FUN_1003a5fc(void)
{
  int *puVar1;
  int *piVar2;
  int iVar3;
  char auStack_12c [256];
  short local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  puVar1 = (int *)piRam10117370;
  piVar2 = (int *)ResourceRead_Dispatch(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0xe1a,
                               *(int *)(*piRam1011734c + 0x88));
  FocusObject();
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = *puVar1;
  *puVar1 = (int)auStack_12c;
  iVar3 = FUN_10000090(auStack_12c);
  if (iVar3 == 0) {
    FUN_1003a230(piVar2);
    FUN_1003a5f8();
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 800));
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
    ResourceRead_Dispatch((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    *puVar1 = local_24;
  }
  else {
    if (piVar2 != (int *)0x0) {
      ResourceRead_Dispatch((int)*(short *)(*piVar2 + 0x738) + (int)piVar2);
    }
    FUN_100db158(local_2c,local_28);
  }
  return;
}


/* ======================================================================
 * FUN_1003dc28 - Toolbar button refresh
 * Address: 0x1003dc28, Size: 140 bytes
 * ====================================================================== */
void FUN_1003dc28(void)
{
  pint *piVar1;

  piVar1 = piRam10116200;
  if (*piRam10116200 != 0) {
    ResourceRead_Dispatch(*piRam10116200 + (int)*(short *)(*(int *)*piRam10116200 + 0x308),0x6c62616b);
    FUN_1003d734();
    ResourceRead_Dispatch(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x7362616b);
    FUN_1003d734();
  }
  return;
}


/* ======================================================================
 * FUN_1003fe04 - Center on selected unit + refresh
 * Address: 0x1003fe04, Size: 88 bytes
 * ====================================================================== */
void FUN_1003fe04(void)
{
  if (*piRam101176e0 != 0) {
    FUN_1000848c(*(short *)*piRam101176e0,((short *)*piRam101176e0)[1]);
    FUN_1003dc28();
  }
  return;
}


/* ======================================================================
 * WriteGameStateCrossFormat - Game load function
 * Address: 0x1002a864, Size: 2508 bytes
 * ====================================================================== */
void FUN_1002a864(long long param_1)
{
  int iVar1;
  int *puVar2;
  int uVar3;
  int *piVar4;
  pint *piVar5;
  int *piVar8;
  long long uVar6;
  int *piVar9;
  long long uVar7;
  char uVar12;
  short *puVar10;
  unsigned short uVar11;
  short sVar13;
  short sVar14;
  unsigned int uVar15;
  int iVar16;
  int iVar17;
  short *puVar18;
  int local_dc;
  char auStack_b8 [104];
  int local_50;
  unsigned short local_4c;
  char auStack_44 [16];
  short local_34;

  iVar17 = iRam10117604;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  piVar9 = (int *)piRam10115cf0;
  *(short *)(*piRam1011735c + 0x120) = 0;
  piVar8 = (int *)FUN_100522dc(param_1,6,0);
  if (piVar8 != (int *)0x0) {
    ResourceRead_Dispatch((int)*(short *)(*piVar8 + 0x170) + (int)piVar8,iVar17,0x3a);
    iVar1 = *piVar8;
    uVar6 = ByteSwap16(*(short *)(iVar17 + 0x3a));
    ResourceRead_Dispatch((int)*(short *)(iVar1 + 400) + (int)piVar8,uVar6);
    ResourceRead_Dispatch((int)*(short *)(*piVar8 + 0x170) + (int)piVar8,iVar17 + 0x3c,0x10);
    puVar18 = (short *)(iVar17 + 0x4c);
    sVar13 = 0;
    do {
      iVar17 = *piVar8;
      uVar6 = ByteSwap16(*puVar18);
      puVar18 = puVar18 + 1;
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 400),uVar6);
      sVar13 = sVar13 + 1;
    } while (sVar13 < 4);
    iVar17 = local_dc;
    WriteSCNResource(piVar8,*piVar4);
    StreamWrite(piVar8,**(int **)(iVar17 + -0x548),0x8880);
    iVar17 = 0;
    do {
      iVar16 = *piVar5 + iVar17 * 0x16;
      iVar1 = *piVar8;
      uVar6 = ByteSwap16(*(short *)(*piVar5 + iVar17 * 0x16));
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
      iVar1 = *piVar8;
      uVar6 = ByteSwap16(*(short *)(iVar16 + 2));
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x170),iVar16 + 4,8);
      iVar1 = *piVar8;
      uVar6 = ByteSwap16(*(short *)(iVar16 + 0xc));
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
      local_4c = (unsigned short)(*(unsigned int *)(iVar16 + 0xc) >> 0xc) & 0xf |
                 (unsigned short)(((*(unsigned int *)(iVar16 + 0xc) >> 9 & 7) << 0x14) >> 0x10) |
                 (unsigned short)(((*(unsigned int *)(iVar16 + 0xc) >> 7 & 3) << 0x17) >> 0x10) |
                 (unsigned short)((unsigned int)(*(int *)(iVar16 + 0xc) << 0x19) >> 0x10);
      iVar1 = *piVar8;
      uVar6 = ByteSwap16(local_4c);
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x170),iVar16 + 0x10,2);
      iVar1 = *piVar8;
      uVar6 = ByteSwap16(*(short *)(iVar16 + 0x12));
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
      iVar1 = *piVar8;
      uVar6 = ByteSwap16(*(short *)(iVar16 + 0x14));
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
      sVar13 = (short)iVar17 + 1;
      iVar17 = (int)sVar13;
    } while (sVar13 < 1000);
    iVar17 = local_dc;
    StreamWrite(piVar8,**(int **)(local_dc + -0x54c),0x4440);
    puVar2 = (int *)*piVar9;
    if (puVar2 != (int *)0x0) {
      DetachResource(puVar2);
      iVar17 = local_dc;
    }
    uVar3 = *puVar2;
    **(int **)(iVar17 + -0x1bac) = uVar3;
    StreamWrite(piVar8,uVar3,0x4440);
    iVar1 = *piVar9;
    if (iVar1 != 0) {
      DisposeHandle_Thunk(iVar1);
      iVar17 = local_dc;
    }
    iVar17 = *(int *)(**(int **)(iVar17 + -0x554) + 0x88);
    piVar9 = (int *)FUN_100522dc(*(int *)(iVar17 + 0x15c),1,0);
    local_50 = ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0xb8));
    uVar6 = FUN_100f1640();
    StreamRead(piVar9,uVar6,local_50);
    iVar1 = *piVar8;
    uVar7 = ByteSwap32(local_50);
    ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 0x198),uVar7);
    StreamWrite(piVar8,uVar6,local_50);
    CloseStream(piVar9,1);
    FreeBlock(uVar6);
    piVar9 = (int *)FUN_100522dc(*(int *)(iVar17 + 0x160),1,0);
    StreamRead(piVar9,&local_50,4);
    iVar17 = *piVar8;
    uVar6 = ByteSwap32(local_50);
    ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 0x198),uVar6);
    iVar17 = *piVar8;
    uVar6 = ByteSwap32(local_50);
    ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 0x198),uVar6);
    local_34 = *(short *)(*piVar4 + 0x136);
    iVar17 = (int)local_34;
    if (local_34 < 2) {
      iVar17 = 1;
    }
    if (0xc9 < iVar17) {
      iVar17 = 0xc9;
    }
    sVar13 = 1;
    if (0 < iVar17 + -1) {
      do {
        iVar1 = *piVar8;
        ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x100));
        uVar6 = ByteSwap16();
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
        sVar14 = 0;
        do {
          iVar1 = *piVar8;
          iVar16 = *piVar9;
          ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(iVar16 + 0x100),iVar16,
                       *(int *)(iVar16 + 0x104));
          uVar6 = ByteSwap16();
          ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar6);
          sVar14 = sVar14 + 1;
        } while (sVar14 < 0x18);
        sVar14 = *(short *)(*piVar4 + 0x1602);
        if ((sVar14 != 0) &&
           (uVar15 = (int)sVar14 - 1,
           ((int)sVar14 >> 1) + (unsigned int)(sVar14 < 0 && ((int)sVar14 & 1U) != 0) ==
           ((int)uVar15 >> 1) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 1) != 0))) {
          sVar14 = sVar14 + 1;
        }
        ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0xe0),auStack_b8,sVar14);
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x170),auStack_b8,sVar14);
        uVar6 = ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0x100));
        iVar1 = *piVar8;
        uVar7 = ByteSwap16(uVar6);
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar7);
        sVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            iVar1 = *piVar8;
            iVar16 = *piVar9;
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(iVar16 + 0xe8),iVar16,
                         *(int *)(iVar16 + 0xec));
            uVar12 = ByteSwap16();
            ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 0x178),uVar12);
            iVar1 = *piVar8;
            iVar16 = *piVar9;
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(iVar16 + 0xe8),iVar16,
                         *(int *)(iVar16 + 0xec));
            uVar12 = ByteSwap16();
            ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 0x178),uVar12);
            iVar1 = *piVar8;
            iVar16 = *piVar9;
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(iVar16 + 0x100),iVar16,
                         *(int *)(iVar16 + 0x104));
            uVar7 = ByteSwap16();
            ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar7);
            iVar1 = *piVar8;
            iVar16 = *piVar9;
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(iVar16 + 0x100),iVar16,
                         *(int *)(iVar16 + 0x104));
            uVar7 = ByteSwap16();
            ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar1 + 400),uVar7);
            ResourceRead_Dispatch((int)piVar9 + (int)*(short *)(*piVar9 + 0xe0),auStack_44,0x10);
            ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x170),auStack_44,0x10);
            sVar14 = sVar14 + 1;
          } while ((int)sVar14 < (int)uVar6);
        }
        sVar13 = sVar13 + 1;
      } while ((int)sVar13 <= iVar17 + -1);
    }
    CloseStream(piVar9,1);
    sVar13 = 0;
    do {
      puVar10 = (short *)FUN_1000d910(sVar13);
      sVar14 = 0;
      puVar18 = puVar10;
      do {
        iVar17 = *piVar8;
        uVar6 = ByteSwap16(*puVar18);
        puVar18 = puVar18 + 1;
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 400),uVar6);
        sVar14 = sVar14 + 1;
      } while (sVar14 < 0x2b);
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(*piVar8 + 0x170),puVar10 + 0x2b,500);
      iVar17 = *piVar8;
      uVar6 = ByteSwap16(puVar10[0x125]);
      ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 400),uVar6);
      puVar18 = puVar10 + 0x126;
      uVar11 = 0;
      do {
        iVar17 = *piVar8;
        uVar6 = ByteSwap16(*puVar18);
        puVar18 = puVar18 + 1;
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 400),uVar6);
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0xb8);
      puVar10 = puVar10 + 0x1de;
      uVar11 = 0;
      do {
        iVar17 = *piVar8;
        uVar6 = ByteSwap16(*puVar10);
        puVar10 = puVar10 + 1;
        ResourceRead_Dispatch((int)piVar8 + (int)*(short *)(iVar17 + 400),uVar6);
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0x38);
      iVar17 = local_dc;
      ReleaseCityData(sVar13);
      sVar13 = sVar13 + 1;
    } while (sVar13 < 8);
    FlushCityCache();
    StreamWrite(piVar8,**(int **)(iVar17 + -0x430),0x4b0);
    if ((**(short **)(iVar17 + -0x1a74) == 0) && (**(int **)(iVar17 + -0x3fc) != 0)) {
      DisposeHandle_Thunk(**(int **)(iVar17 + -0x3fc));
    }
    CloseStream(piVar8,1);
  }
  return;
}
