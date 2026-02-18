/*
 * reconstructed_2.c - Reconstructed Warlords II functions (batch 2)
 *
 * 30 functions from address range 0x10011590-0x1003FE04
 * Extracted from Ghidra decompilation output.
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

/* Globals declared via warlords2.h / wl2_globals.h.
 * Additional globals not covered by the header #defines: */
extern pint *piRam10117468;
extern pint *piRam101174b0;
extern pint *piRam10115cf0;
extern pint *piRam10115d88;
extern pint *piRam10115dc4;
extern pint *piRam1011639c;
extern pint *piRam10116200;
extern pint *piRam10115e34;

extern int puRam10115db4;
extern int puRam10115db0;
extern int puRam10115dd0;
extern int puRam10115dcc;
extern int puRam101174f4;
extern int puRam101174f8;
extern int puRam101175f8;

extern int psRam1011760c;
extern int psRam10115e80;
extern int psRam10115d80;
extern int psRam10115ce0;
extern int psRam10116304;
extern int psRam1011677c;
extern int psRam101174cc;
extern int psRam10117544;
extern int psRam10117558;
extern int psRam101176e4;

extern int iRam10117474;
extern int iRam1011773c;
extern int iRam1011757c;
extern int iRam10115ba4;
extern int iRam10117604;
extern int iRam101176e8;

extern int uRam1011772c;
extern int uRam101174bc;
extern int uRam101174fc;
extern int uRam10116a54;

/* Forward declarations for called functions */
int FUN_1002be50(short, short);
int FUN_1000a884(short, short, short, short);
void FUN_1003aeb0(int, int, int, int);
void FUN_10016cc4(int, char *, char *, int);
void FUN_1001e160(short *, int, int, int);
void FUN_1001a12c(int, short);
int FUN_1001f174(short, short);
int FUN_1000f708(int, int);
int FUN_1004639c(int);
int FUN_1005f230(int, int, int);
void FUN_10001dd0(int, int, int);
void FUN_10030454(int);
void FUN_10046edc(int);
void FUN_1004f438(short, short, int);
void FUN_1000fba8(short, short);
long long FUN_1001f5e8(short, short);
void FUN_1000da14(int, int, char *, char *);
void FUN_1001b8e0(int);
void FUN_1001ba60(short);
int FUN_1001f648(int, short *);
void FUN_1000de24(void);
void FUN_10117884();
int FUN_10050ffc();
int FUN_10009630(int, short, short);
int FUN_1002c200(short, short, int);
void FUN_1002279c(void);
int FUN_1002bf64(short, short, short, int);
void FUN_100230e8(int);
void FUN_10025598(void);
void FUN_1005f6b0(int, int);
void FUN_10040040(void);
int FUN_10000090(char *);
void FUN_1002565c(void);
void FUN_100db158(short, int);
void FUN_100db26c();
void FUN_10026310(void);
void FUN_10026568(void);
int FUN_10028e10(long long, short, int, int);
int FUN_10028b30(long long, short, int, int);
void FUN_10049e68(void);
void FUN_10025f98(void);
void FUN_1003d5d4(void);
void FUN_1009142c(void);
void FUN_10091334(void);
void FUN_1002bdc4(void);
void FUN_1002bbd4(void);
void FUN_1002bcd8(void);
void FUN_10039ec8(short);
void FUN_1002b91c(void);
void FUN_10044110(short, int);
void FUN_1003e13c(short, int);
void FUN_1000848c(short, short);
void FUN_10060608(int, int, int);
void FUN_10064850(int, int);
int FUN_10001a88(void);
long long FUN_1005f678(int, int);
void FUN_1003c938(char *);
void FUN_1005cc8c(void);
void FUN_1002c85c(void);
void FUN_10092484(int);
int *FUN_100522dc(int, int, int);
void FUN_100524d4(int *, int, int);
void FUN_100523a8(int *, int);
int FUN_10052490(int *, int, int);
int FUN_100525a0(short);
int FUN_100525cc(int);
void FUN_10058c64(int *, int);
int FUN_100f1640(void);
void FUN_100ef580(int);
void FUN_1001e330(int *);
int FUN_10001bd8(int, void *);
void FUN_100db2f4(void);
long long FUN_10003558(int, int);
void FUN_10029dcc(int *, long long);
void FUN_10001758(long long, char *, char *, char *);
void FUN_10002ce8(long long);
int FUN_100b1c84(char *);
void FUN_10002568(int, int, int, int);
void FUN_100db328(void);
void FUN_100002a0(int);
void FUN_100006d8(char *, char *, int *);
void FUN_10000318(int);
void FUN_10002598(int *);
void FUN_10002ad8(int);
short *FUN_1000d910(short);
void FUN_1000d9ac(short);
void FUN_1000c7b4(void);
void FUN_1002b230(short);
void FUN_1003d734(void);
long long FUN_1002e7d4(short, int, int);
void FUN_10031f54();
void FUN_10001e78(int, long long);
void FUN_10031fc4(void);
void FUN_1002122c(int, int, char *);
void FUN_10055c64(void);
void FUN_1002f194(short);
void FUN_1003f674(int, int, int);
void FUN_1007c714(int, int);
void FUN_1004e384(int, int, int, int);
void FUN_100472f4(int, int, int, long long);
void FUN_10035d7c(void);
void FUN_1007f0a4(int, short);
void FUN_1003ced4(long long, long long);
void FUN_100376d8(int, int);
void FUN_10037cdc(void);
void FUN_10037fc4(void);
void FUN_1003a230(int *);
void FUN_1003a5f8(void);
void FUN_10047de8(int, short *, short *);
void FUN_10092be0(void);
void FUN_10079ee8(int, int, short, int);
void FUN_1007a018(int, short, int, int, int);
void FUN_100b19f4(char *, int);
void FUN_10090e0c(int *, long long, char *, int);
void FUN_1007f034(int);
void FUN_10007f78(void);


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
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  long long lVar11;
  unsigned long long uVar12;

  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  iVar3 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0x14;
  iVar9 = FUN_1002be50(*(short *)(iVar3 + 0x194),*(short *)(iVar3 + 0x196));
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
        iVar10 = FUN_1000a884(*(short *)(iVar10 + 0x1604),*(short *)(iVar10 + 0x1606),
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
  int *piVar4;
  int *piVar5;
  int *piVar6;
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
        param_1 = FUN_1002be50((int)sVar7,(int)param_2);
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
