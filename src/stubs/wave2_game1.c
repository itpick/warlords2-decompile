/*
 * wave2_game1.c - Reconstructed functions (wave2_game1)
 *
 * Auto-extracted from Ghidra decompilation with type cleanup.
 * 189 functions in address range wave2_game1
 */

#include "warlords2.h"

/* Helper macros for Ghidra patterns */
#ifndef CONCAT22
#define CONCAT22(hi, lo) ((int)(((unsigned int)(unsigned short)(hi) << 16) | (unsigned short)(lo)))
#endif
#ifndef CONCAT44
#define CONCAT44(hi, lo) ((long long)(((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo)))
#endif
#ifndef ZEXT48
#define ZEXT48(x) ((unsigned long long)(unsigned int)(x))
#endif
#ifndef SUB41
#define SUB41(x, n) ((char)((x) >> ((n) * 8)))
#endif
#ifndef SUB42
#define SUB42(x, n) ((short)((x) >> ((n) * 8)))
#endif

/* Forward declarations to avoid conflicting types */
void FUN_10012cc8(short param_1);
long long FUN_10013150(void);
long long FUN_10013d0c(short *param_1);
void FUN_100145c8(short param_1);
void FUN_10014e44(int param_1);
long long FUN_10015030(short param_1,short param_2);
void FUN_100151e8(short param_1);
long long FUN_10015324(short param_1,int param_2);
long long FUN_10015554(short param_1,short param_2,int param_3,short param_4);
void FUN_100159c8(short param_1,int param_2);
void FUN_10015dc8(short param_1,int param_2);
void FUN_10015f98(short param_1,int param_2);
char FUN_100161fc(short param_1,int param_2);
int FUN_10016bc0(short param_1,short param_2,short *param_3);
void FUN_100171d4(short *param_1,short param_2);
long long FUN_10017618(short param_1);
int FUN_10017844();
void FUN_10017c28(void);
long long FUN_10017cb4();
long long FUN_10017ddc(short param_1,short param_2,short param_3,short *param_4,
            short *param_5);
long long FUN_100180d0(short param_1,short param_2);
unsigned long long FUN_10018180();
void FUN_10018800(short param_1,char param_2,int param_3,int param_4,short *param_5);
unsigned short FUN_10018b14(short param_1,long long param_2);
void FUN_10018f00(short param_1,short param_2,short param_3,short *param_4,short *param_5,
                 short *param_6);
void FUN_10019080(short param_1,short param_2,short param_3,short *param_4,short *param_5,
                 short *param_6);
short FUN_10019174(short param_1,short *param_2,short *param_3,short *param_4,long long param_5,
            long long param_6);
long long FUN_10019718(short param_1,short param_2,short param_3);
long long FUN_10019a40(short param_1,short param_2,short param_3);
void FUN_10019e00(short param_1,short param_2,short param_3);
int FUN_10019f14(short param_1,short *param_2,short *param_3);
unsigned char FUN_1001a0a0(short param_1,int param_2);
void FUN_1001a470(short param_1,short param_2);
long long FUN_1001acdc();
short FUN_1001af38(short param_1);
void FUN_1001b198(short param_1,long long param_2,long long param_3,short param_4);
int FUN_1001b35c(short param_1);
void FUN_1001b4ac(short param_1);
void FUN_1001bdc8(short param_1);
long long FUN_1001bfa0(short param_1,short param_2);
unsigned long long FUN_1001c854(short param_1);
void FUN_1001ca30(short param_1,int param_2);
long long FUN_1001cb24(short param_1);
short FUN_1001d27c(short param_1,int param_2,int param_3);
void FUN_1001d66c(void);
int FUN_1001da40(short param_1,short param_2,unsigned short param_3);
void FUN_1001db60(void);
void FUN_1001dfe0(short param_1,short param_2,short *param_3,short *param_4);
long long FUN_1001e674(short param_1,short param_2,short param_3,short param_4);
int FUN_1001e9d0(short param_1);
void FUN_1001eaa4(short param_1);
void FUN_1001ec20();
int FUN_1001ed3c();
int FUN_1001ee88();
short FUN_1001eff8();
void FUN_1001f0ac(short param_1,short param_2,short *param_3,short *param_4,short *param_5);
unsigned long long FUN_1001f220(short param_1,short param_2,short param_3);
long long FUN_1001f48c();
void FUN_10020640(short param_1,short param_2);
void FUN_10020ae8(short param_1);
long long FUN_10020d88();
int FUN_10021364();
int FUN_10021434(void);
void FUN_10021524();
void FUN_10021848(void);
void FUN_100219a8();
void FUN_10021a3c();
int FUN_10021d50(void);
void FUN_10021e20(void);
unsigned short FUN_10021f6c(short param_1,short param_2);
void FUN_10022404(void);
void FUN_100226d4(short *param_1);
void FUN_10022738(short *param_1);
void FUN_10022d64(short param_1);
void FUN_10022f50(short param_1,short param_2,char *param_3,char *param_4,
                 char *param_5);
void FUN_10025c68(void);
void FUN_10025ca0(void);
void FUN_10025cd8(void);
void FUN_10025d10(void);
short FUN_10025d48(short param_1);
void FUN_10025e04(void);
void FUN_10025e44(void);
void FUN_10025eb4(long long param_1);
void FUN_10025f08(void);
void FUN_1002606c(short *param_1,int param_2);
void FUN_100266e4(short param_1);
void FUN_10026df0(void);
void FUN_10026df4(void);
void FUN_10026f70(short param_1,short param_2);
void FUN_10027040(void);
void FUN_10027150(void);
void FUN_1002774c(void);
void FUN_10027774(long long param_1,short param_2);
void FUN_100279a8(long long param_1,char *param_2);
void FUN_10027a58(unsigned char param_1,unsigned char *param_2,unsigned long long param_3,long long param_4);
void FUN_10028040(int param_1,int *param_2);
void FUN_100283f8(int param_1,short param_2,long long param_3);
unsigned long long FUN_1002b6a8(short param_1);
int FUN_1002c120(short param_1,short param_2);
void FUN_1002c310(short param_1,short param_2,short param_3);
void FUN_1002c460(short param_1,short param_2);
void FUN_1002c4b8(short param_1,short param_2);
void FUN_1002c508(short param_1,short param_2,short param_3);
void FUN_1002c614(short param_1,short param_2);
void FUN_1002c66c(short param_1,short param_2);
void FUN_1002c6bc(short *param_1,short param_2);
void FUN_1002c6f8(short *param_1,short param_2);
void FUN_1002c734(short param_1,short param_2,short param_3,short param_4,short param_5);
void FUN_1002c92c(short param_1,short param_2);
short FUN_1002c970(short param_1,short param_2,short param_3,short param_4);
void FUN_1002ca18(short *param_1,short param_2);
void FUN_1002cae8(short param_1);
void FUN_1002cfbc();
int FUN_1002d654(void);
void FUN_1002d93c();
void FUN_1002da54(short param_1,short param_2);
void FUN_1002dd8c();
void FUN_1002febc(short param_1);
void FUN_100300e8(void);
short * FUN_10030490();
void FUN_10030c3c();
short FUN_10030e0c(short param_1,short param_2);
void FUN_10030e90(short param_1,short param_2);
void FUN_100310bc(void);
long long FUN_100310ec();
void FUN_10031178(short param_1,short param_2,short param_3,unsigned short *param_4,long long param_5,
                 short param_6);
void FUN_100313d8(void);
void FUN_10031594(void);
void FUN_10031748();
void FUN_10032040(void);
void FUN_100321bc(long long param_1);
short FUN_10032208(short param_1,short param_2,short param_3,long long param_4,short param_5);
void FUN_100329b0(short param_1,short param_2,short param_3,short param_4);
long long FUN_10032a24(void);
int FUN_10032d4c(void);
void FUN_10032e2c(void);
void FUN_1003302c(void);
void FUN_10033280(long long param_1,short param_2);
void FUN_10033548(void);
void FUN_10033600(short param_1,short param_2,short param_3);
void FUN_10033b4c(void);
void FUN_10033c90(short *param_1,short param_2);
void FUN_10033d54(short *param_1,short param_2);
long long FUN_10034074();
void FUN_10034130(void);
void FUN_100341ec(int *param_1);
void FUN_10034374(int *param_1);
void FUN_1003442c(void);
void FUN_10034c94(short param_1,int *param_2);
void FUN_100358d4(unsigned short param_1);
void FUN_10035ccc(void);
void FUN_10035e9c(void);
unsigned short * FUN_10035f94(short param_1);
unsigned short * FUN_10035fdc(short param_1);
unsigned short * FUN_10036024(short param_1);
void FUN_1003606c();
void FUN_10036d3c();
unsigned short * FUN_10036efc(short param_1);
unsigned long long FUN_10036f64(char param_1);
void FUN_10037444();
unsigned short * FUN_10037690(short param_1);
void FUN_10037f68(void);
void FUN_100381dc(short param_1);
void FUN_10038288();
void FUN_10038624(short param_1);
void FUN_10038d8c(int param_1,int param_2,int param_3,short param_4,short param_5,short param_6);
void FUN_10038fb8(void);
long long FUN_100390e4(void);
void FUN_10039180();
short FUN_10039d80(long long param_1);
short FUN_10039e24();
int FUN_1003a0f4(short param_1);
void FUN_1003a760(void);
void FUN_1003a794();
void FUN_1003a9c4();
void FUN_1003aa68(void);
void FUN_1003ab38(void);
void FUN_1003abfc(int param_1,long long param_2,short param_3,short param_4);
void FUN_1003b3b0();
long long FUN_1003b4a4(short param_1,short param_2,char param_3);
void FUN_1003dcb4(int *param_1);
void FUN_1003e0b0();
void FUN_1003f6e8(void);
void FUN_1003fd64(void);
void FUN_1003fd90(void);
void FUN_1003fdd8(void);
void FUN_1003fe5c(void);
void FUN_1003fe94(void);
void FUN_1003ffa8(void);

/* Extern declarations for Ghidra globals */
extern long iRam10115d60;
extern long iRam10115d68;
extern long iRam10115e00;
extern long iRam10115e04;
extern long iRam10115e08;
extern long iRam10115e30;
extern long iRam10115e84;
extern long iRam101174d4;
extern long iRam101174e0;
extern long iRam101174e4;
extern long iRam101174f0;
extern long iRam1011750c;
extern long iRam10117510;
extern long iRam10117578;
extern long iRam1011757c;
extern long iRam101176e8;
extern long iRam1011773c;
extern long iRam10117784;
extern long iRam10117788;
extern long iRam1011778c;
extern long iRam10117790;
extern long iRam10117794;
extern long iRam1011779c;
extern long iRam101177f0;
extern char *pcRam101161f4;
extern char *pcRam101161f8;
extern char *pcRam10116398;
extern char *pcRam10117378;
extern char *pcRam101174d0;
extern char *pcRam101174d8;
extern char *pcRam101174dc;
extern char *pcRam1011776c;
extern char *pcRam10117770;
extern pint *piRam10115cf0;
extern pint *piRam10115dc4;
extern pint *piRam10115df0;
extern pint *piRam10115df8;
extern pint *piRam10115dfc;
extern pint *piRam10115e14;
extern pint *piRam10115e34;
extern pint *piRam10115e78;
extern pint *piRam10116200;
extern pint *piRam10116208;
extern pint *piRam10116478;
extern pint *piRam10117468;
extern pint *piRam101174a4;
extern pint *piRam101174a8;
extern pint *piRam101174b0;
extern pint *piRam101174b4;
extern pint *piRam101174b8;
extern pint *piRam1011754c;
extern pint *piRam101176e8;
extern short *psRam10115d4c;
extern short *psRam10115d90;
extern short *psRam10115d94;
extern short *psRam10115e28;
extern short *psRam10115e2c;
extern short *psRam10115e3c;
extern short *psRam10115e50;
extern short *psRam10115e80;
extern short *psRam10115e9c;
extern short *psRam10115ff8;
extern short *psRam10116354;
extern short *psRam1011677c;
extern short *psRam10117494;
extern short *psRam101174a0;
extern short *psRam101174f4;
extern short *psRam101174f8;
extern short *psRam10117508;
extern short *psRam1011752c;
extern short *psRam10117530;
extern short *psRam1011753c;
extern short *psRam10117544;
extern short *psRam10117558;
extern short *psRam1011755c;
extern short *psRam10117564;
extern short *psRam1011760c;
extern short *psRam101176e4;
extern short *psRam10117710;
extern unsigned int *puRam10115d80;
extern unsigned int *puRam10115d90;
extern unsigned int *puRam10115d94;
extern unsigned int *puRam10115db0;
extern unsigned int *puRam10115db4;
extern unsigned int *puRam10115dec;
extern unsigned int *puRam10115e28;
extern unsigned int *puRam10115e90;
extern unsigned int *puRam10115f7c;
extern unsigned int *puRam10115fe8;
extern unsigned int *puRam10116354;
extern unsigned int *puRam101163ac;
extern unsigned int *puRam101169c4;
extern unsigned int *puRam1011735c;
extern unsigned int *puRam10117360;
extern unsigned int *puRam10117370;
extern unsigned int *puRam10117470;
extern unsigned int *puRam10117494;
extern unsigned int *puRam101174ac;
extern unsigned int *puRam101174b8;
extern unsigned int *puRam101174cc;
extern unsigned int *puRam1011752c;
extern unsigned int *puRam10117534;
extern unsigned int *puRam10117538;
extern unsigned int *puRam1011753c;
extern unsigned int *puRam10117544;
extern unsigned int *puRam10117548;
extern unsigned int *puRam10117550;
extern unsigned int *puRam10117554;
extern unsigned int *puRam10117560;
extern unsigned int *puRam10117568;
extern unsigned int *puRam101175b4;
extern unsigned int *puRam101175f8;
extern unsigned int *puRam101176e0;
extern unsigned int *puRam10117700;
extern unsigned int *puRam10117710;
extern unsigned int *puRam10117738;
extern unsigned int *puRam10117754;
extern unsigned int uRam10115d7c;
extern unsigned int uRam10115dbc;
extern unsigned int uRam10115dc0;
extern unsigned int uRam10115e10;
extern unsigned int uRam10115e24;
extern unsigned int uRam10115e7c;
extern unsigned int uRam10116a54;
extern unsigned int uRam101174bc;
extern unsigned int uRam101174fc;
extern unsigned int uRam10117514;
extern unsigned int uRam1011756c;
extern unsigned int uRam101175f8;
extern unsigned int uRam10117604;
extern unsigned int uRam10117688;
extern unsigned int uRam1011772c;

/* Address: 0x10012cc8 Size: 888 bytes */
void FUN_10012cc8(short param_1)

{
  int bVar1;
  char cVar2;
  unsigned char bVar3;
  int iVar4;
  int iVar5;
  long long lVar6;
  int bVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short *psVar11;
  unsigned long long uVar12;
  int iVar13;
  unsigned char bVar14;
  long long lVar15;
  unsigned long long uVar16;
  unsigned char bVar17;
  int iVar18;
  short sVar19;
  unsigned long long uVar20;
  short sVar21;
  unsigned char bVar22;
  int iVar23;
  char auStack_78 [20];
  unsigned char abStack_64 [8];
  unsigned char abStack_5c [8];
  unsigned char abStack_54 [84];
  
  psVar11 = psRam101176fc;
  piVar10 = piRam10117468;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  uVar12 = ZEXT48(0 /* TVect base */);
  iVar13 = *piRam1011735c + param_1 * 0x42;
  sVar19 = *(short *)(iVar13 + 0x1604);
  uVar20 = 0xffffffffffffffff;
  bVar22 = 0;
  bVar7 = false;
  sVar21 = 100;
  if (*(char *)(*piRam10117468 + (int)param_1 + 0x56) == '\a') {
    if (*(unsigned char *)(*piRam10117468 + (int)param_1 + 0x182) < 0xc) {
      return;
    }
  }
  else {
    sVar19 = sVar19 + 1;
  }
  uVar16 = (unsigned long long)*(short *)(*piRam1011735c + 0x110);
  if ((*(short *)(*piRam1011735c + (int)(((uVar16 & 0x3fffffff) * 4 + uVar16 & 0xffffffff) << 2) +
                 0x186) < 0x28) &&
     (iVar23 = (int)((uVar16 & 0xffffffff) << 1),
     *(short *)(iVar23 + iRam1011762c) < *(short *)(iVar23 + iRam10117630))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    bVar17 = 0x41;
  }
  else {
    bVar17 = 0x55;
  }
  iVar13 = FUN_1001ed3c(sVar19,*(short *)(iVar13 + 0x1606),auStack_78,8);
  if ((iVar13 != 0) &&
     ((3 < iVar13 ||
      ((cVar2 = *(char *)(*piVar10 + (int)param_1 + 0x56), cVar2 != '\x06' && (cVar2 != '\a')))))) {
    FUN_1000da14((int)param_1,0,abStack_64,abStack_54);
    iVar23 = 5;
    do {
      abStack_5c[iVar23] = 0;
      bVar3 = abStack_64[iVar23];
      if ((bVar3 != 0xff) && (iVar18 = *piVar10, (*(unsigned char *)(iVar18 + (unsigned int)bVar3 + 0x11e) & 1) == 0)
         ) {
        iVar4 = *piVar9;
        iVar5 = iVar4 + (unsigned int)bVar3 * 0x42;
        cVar2 = *(char *)(iVar5 + 0x1619);
        if ((((int)cVar2 != (int)*(short *)(iVar4 + 0x110)) &&
            ((lVar6 = -(long long)
                       *(char *)((*(unsigned int *)(*piVar8 + *(short *)(iVar5 + 0x1606) * 0xe0 +
                                           *(short *)(iVar5 + 0x1604) * 2) >> 0x18) + iVar4 + 0x711)
             , lVar15 = lVar6 + 10, (lVar15 + (-(unsigned long long)(lVar15 == 0) - (lVar6 + 9)) & 0xff) == 0
             && ((unsigned short)bVar3 != *(unsigned short *)(iVar18 + 0x46))))) &&
           ((cVar2 == 0xf ||
            ((*(unsigned int *)(iVar4 + *(short *)(iVar4 + 0x110) * 0x10 + cVar2 * 2 + 0x1582) >> 0x1a & 3)
             == 2)))) {
          iVar18 = *piVar9 + (unsigned int)bVar3 * 0x42;
          bVar14 = FUN_1001eff8(*(short *)(iVar18 + 0x1604),*(short *)(iVar18 + 0x1606));
          abStack_5c[iVar23] = bVar14;
          if (bVar14 == 0) {
            if (((iVar13 < 4) && (abStack_54[iVar23] < 0x19)) ||
               ((iVar13 < 6 && (abStack_54[iVar23] < 0xf)))) {
              abStack_5c[iVar23] = 0xff;
              bVar7 = true;
            }
          }
          else if (bVar17 <= bVar14) {
            iVar18 = (int)(short)(*psVar11 + -2);
            if ((short)(*psVar11 + -2) < 1) {
              iVar18 = 1;
            }
            sVar19 = (short)((int)(unsigned int)abStack_54[iVar23] / iVar18) + 1;
            if ((sVar19 < sVar21) || ((sVar19 == sVar21 && (bVar22 < bVar14)))) {
              uVar20 = (unsigned long long)bVar3;
              sVar21 = sVar19;
              bVar22 = bVar14;
            }
          }
        }
      }
      iVar18 = (int)uVar12;
      bVar1 = iVar23 != 0;
      iVar23 = (int)(short)((short)iVar23 + -1);
    } while (bVar1);
    if ((!bVar7) && ((int)uVar20 != -1)) {
      FUN_1001e160(auStack_78,1,uVar20,0);
      FUN_10018180(*(short *)(**(int **)(iVar18 + -0x1c0) + 0x12),
                   *(short *)(**(int **)(iVar18 + -0x1c0) + 0x14),0);
    }
  }
  return;
}

/* Address: 0x10013150 Size: 820 bytes */
long long FUN_10013150(void)

{
  int bVar1;
  unsigned char bVar2;
  short uVar3;
  short uVar4;
  short *puVar5;
  unsigned short uVar6;
  int *piVar7;
  unsigned int *puVar8;
  int *piVar9;
  int iVar10;
  int iVar12;
  long long uVar11;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar17;
  long long lVar16;
  unsigned long long uVar18;
  char auStack_48 [8];
  unsigned char abStack_40 [8];
  short local_38;
  
  iVar10 = iRam101176e8;
  piVar9 = piRam10117468;
  puVar8 = puRam10117360;
  piVar7 = piRam1011735c;
  puVar5 = (short *)*puRam101176e0;
  uVar6 = (unsigned short)*(int *)(puVar5 + 6) & 0x7f;
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  iVar12 = FUN_100121f8(uVar6);
  uVar11 = FUN_1002be50(uVar3,uVar4);
  iVar13 = 100;
  if ((int)*(char *)(*piVar7 + ((short)uVar6 * 0x20 + (int)(short)uVar6) * 2 + 0x1619) ==
      (int)*(short *)(*piVar7 + 0x110)) {
    if (((int)uVar11 < 0) || (iVar12 = FUN_10018574(uVar11,abStack_40,auStack_48), iVar12 == 0)) {
      FUN_10018574(uVar6,abStack_40,auStack_48);
    }
    uVar18 = 0xffffffffffffffff;
    iVar17 = 1000;
    iVar12 = 5;
    do {
      bVar2 = abStack_40[iVar12];
      if ((bVar2 != 0xff) && ((*(unsigned char *)((unsigned int)bVar2 + *piVar9 + 0x11e) & 1) == 0)) {
        if (*(short *)(*piVar7 + 0x11a) != 0) {
          iVar13 = *piVar7 + (unsigned int)bVar2 * 0x42;
          iVar13 = FUN_1001eff8(*(short *)(iVar13 + 0x1604),*(short *)(iVar13 + 0x1606));
        }
        if ((0x4a < iVar13) &&
           (iVar14 = *piVar7 + (unsigned int)bVar2 * 0x42,
           iVar14 = FUN_1000a884(uVar3,uVar4,*(short *)(iVar14 + 0x1604),
                                 *(short *)(iVar14 + 0x1606)), iVar14 < iVar17)) {
          uVar18 = (unsigned long long)bVar2;
          iVar17 = iVar14;
        }
      }
      bVar1 = iVar12 != 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
    } while (bVar1);
    if ((unsigned int)uVar18 == 0xffffffff) {
      if (*(short *)(*piVar7 + 0x124) != 0) {
        local_38 = *(short *)(*piVar7 + 0x136);
        sVar15 = local_38;
        if (local_38 < 2) {
          sVar15 = 1;
        }
        if (sVar15 < 10) {
          iVar12 = 0;
          do {
            if (*(int *)(iVar12 * 4 + iVar10) != 0) {
              sVar15 = *(short *)(*piVar7 + 0x182);
              do {
                lVar16 = -1;
                if (sVar15 == 0) break;
                sVar15 = sVar15 + -1;
                lVar16 = (long long)sVar15;
              } while ((unsigned long long)*(unsigned int *)(iVar12 * 4 + iVar10) !=
                       ((unsigned long long)*puVar8 + lVar16 * 0x16 & 0xffffffff));
              if ((int)lVar16 != -1) {
                FUN_1001a348(lVar16,0xffffffffffffffff);
              }
            }
            sVar15 = (short)iVar12 + 1;
            iVar12 = (int)sVar15;
            if (7 < sVar15) {
              return 0;
            }
          } while( true );
        }
      }
    }
    else {
      iVar12 = 0;
      do {
        iVar17 = iVar12 * 4;
        iVar13 = *(int *)(iVar17 + iVar10);
        if (iVar13 != 0) {
          *(unsigned int *)(iVar13 + 0xc) = *(unsigned int *)(iVar13 + 0xc) & 0xffff0fff | 0x1000;
          *(unsigned int *)(*(int *)(iVar17 + iVar10) + 0xc) =
               (unsigned int)uVar18 & 0x7f | *(unsigned int *)(*(int *)(iVar17 + iVar10) + 0xc) & 0xffffff80;
          FUN_1001e014(*(int *)(iVar17 + iVar10),1,uVar18);
        }
        sVar15 = (short)iVar12 + 1;
        iVar12 = (int)sVar15;
      } while (sVar15 < 8);
    }
  }
  else if (iVar12 == 0) {
    iVar12 = 0;
    do {
      iVar17 = iVar12 * 4;
      iVar13 = *(int *)(iVar17 + iVar10);
      if (iVar13 != 0) {
        *(unsigned int *)(iVar13 + 0xc) = *(unsigned int *)(iVar13 + 0xc) & 0xffff0fff;
        *(unsigned int *)(*(int *)(iVar17 + iVar10) + 0xc) =
             *(unsigned int *)(*(int *)(iVar17 + iVar10) + 0xc) & 0xffffff80;
        *(short *)(*(int *)(iVar17 + iVar10) + 0x14) = 0xffff;
        *(short *)(*(int *)(iVar17 + iVar10) + 0x12) =
             *(short *)(*(int *)(iVar17 + iVar10) + 0x14);
      }
      sVar15 = (short)iVar12 + 1;
      iVar12 = (int)sVar15;
    } while (sVar15 < 8);
    return 0;
  }
  return 1;
}

/* Address: 0x10013d0c Size: 1288 bytes */
long long FUN_10013d0c(short *param_1)

{
  short uVar1;
  short sVar2;
  short uVar3;
  unsigned int uVar4;
  unsigned long long uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  unsigned long long uVar11;
  long long uVar12;
  int iVar13;
  short sVar14;
  int bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar22;
  unsigned long long uVar21;
  
  piVar10 = piRam101176e0;
  piVar9 = piRam10117468;
  piVar8 = piRam10117360;
  piVar7 = piRam1011735c;
  piVar6 = piRam10117358;
  iVar17 = -1;
  iVar20 = -1;
  iVar13 = -1;
  iVar22 = 0;
  do {
    if ((iVar20 == -1) && (*(char *)(*piRam10117360 + (short)param_1[iVar22] * 0x16 + 4) == '\x1c'))
    {
      iVar20 = (int)(short)param_1[iVar22];
    }
    if ((iVar13 == -1) &&
       (*(char *)(*piRam10117364 + *(char *)(*piRam10117360 + (short)param_1[iVar22] * 0x16 + 4) * 6
                 ) != '\0')) {
      iVar13 = (int)(short)param_1[iVar22];
    }
    sVar14 = (short)iVar22 + 1;
    iVar22 = (int)sVar14;
  } while (sVar14 < 8);
  if (iVar20 == -1) {
    uVar12 = 0;
  }
  else if (iVar13 == -1) {
    uVar12 = 1;
  }
  else {
    uVar3 = *(short *)(*piRam10117360 + iVar20 * 0x16);
    uVar1 = *(short *)(*piRam10117360 + iVar20 * 0x16 + 2);
    iVar22 = 0;
    do {
      param_1[iVar22] = 0xffff;
      sVar14 = (short)iVar22 + 1;
      iVar22 = (int)sVar14;
    } while (sVar14 < 8);
    *param_1 = (short)iVar20;
    param_1[1] = (short)iVar13;
    iVar13 = iVar13 * 0x16;
    *(unsigned int *)(*piVar8 + iVar13 + 0xc) = *(unsigned int *)(*piVar8 + iVar13 + 0xc) & 0xffff0fff;
    iVar22 = *piVar8 + iVar20 * 0x16;
    *(unsigned int *)(iVar22 + 0xc) =
         (*(unsigned int *)(iVar13 + *piVar8 + 0xc) >> 0xc & 0xf) << 0xc |
         *(unsigned int *)(iVar22 + 0xc) & 0xffff0fff;
    *(unsigned int *)(iVar13 + *piVar8 + 0xc) = *(unsigned int *)(iVar13 + *piVar8 + 0xc) & 0xffffff80;
    iVar22 = iVar20 * 0x16 + *piVar8;
    *(unsigned int *)(iVar22 + 0xc) =
         *(unsigned int *)(iVar13 + *piVar8 + 0xc) & 0x7f | *(unsigned int *)(iVar22 + 0xc) & 0xffffff80;
    sVar14 = *(short *)(*piVar7 + 0x810);
    uVar11 = 0xffffffffffffffff;
    iVar13 = -1;
joined_r0x10013ec8:
    iVar22 = iVar13;
    uVar5 = uVar11;
    if (sVar14 != 0) {
      sVar14 = sVar14 + -1;
      uVar21 = (unsigned long long)sVar14;
      iVar13 = *piVar7 + (int)((uVar21 & 0xffffffff) << 5);
      iVar19 = (int)*(short *)(iVar13 + 0x812);
      iVar18 = (int)*(short *)(iVar13 + 0x814);
      sVar2 = *(short *)(*piVar7 + 0x182);
      bVar15 = false;
      if (sVar2 != 0) {
        do {
          sVar2 = sVar2 + -1;
          iVar16 = (int)sVar2;
          iVar13 = *piVar8 + iVar16 * 0x16;
          if ((((*(char *)(iVar13 + 5) == (char)*(short *)(*piVar7 + 0x110)) &&
               (iVar20 != iVar16)) && (*(char *)(iVar13 + 4) == '\x1c')) &&
             (((*(unsigned int *)(iVar13 + 0xc) >> 0xc & 0xf) == 3 &&
              (((unsigned long long)*(unsigned int *)(iVar13 + 0xc) & 0x7f) == (uVar21 & 0xffffffff))))) {
            bVar15 = true;
            break;
          }
        } while (iVar16 != 0);
      }
      uVar11 = uVar5;
      iVar13 = iVar22;
      if ((!bVar15) && (iVar16 = FUN_1001f174(iVar19,iVar18), iVar16 != 0)) {
        uVar4 = *(unsigned int *)(*piVar6 + iVar18 * 0xe0 + iVar19 * 2);
        if ((*(char *)(*piVar7 + (uVar4 >> 0x18) + 0x711) == '\v') &&
           ((*(char *)((int)((uVar21 & 0xffffffff) << 5) + *piVar7 + 0x82a) != '\x01' &&
            ((uVar4 >> 0x16 & 1) == 0)))) {
          iVar18 = FUN_1000a884(uVar3,uVar1,iVar19,iVar18);
          if (iVar18 < 0xf) {
            uVar11 = uVar21;
            iVar13 = 0xd7 - iVar18;
            if (iVar22 < 0xd7 - iVar18) goto joined_r0x10013ec8;
          }
          uVar11 = uVar5;
          iVar13 = iVar22;
          if (iVar18 < 0x28) {
            if (iVar22 < 0x5a - iVar18) {
              uVar11 = uVar21;
              iVar13 = 0x5a - iVar18;
            }
          }
        }
      }
      goto joined_r0x10013ec8;
    }
    sVar14 = *(short *)(*piVar7 + 0x1602);
    iVar13 = iVar17;
    if (sVar14 != 0) {
      do {
        sVar14 = sVar14 + -1;
        iVar18 = *piVar7 + (sVar14 * 0x20 + (int)sVar14) * 2;
        iVar17 = iVar13;
        iVar19 = iVar22;
        if (*(char *)(iVar18 + 0x1619) == (char)*(short *)(*piVar7 + 0x110)) {
          iVar18 = FUN_1000a884(uVar3,uVar1,*(short *)(iVar18 + 0x1604),
                                *(short *)(iVar18 + 0x1606));
          if (*(char *)((int)sVar14 + *piVar9 + 0x56) == '\a') {
            iVar18 = (int)(short)((short)iVar18 + -0x50);
          }
          if (iVar18 < 0xf) {
            iVar17 = (int)sVar14;
            iVar19 = 0x73 - iVar18;
            if (iVar22 < 0x73 - iVar18) goto LAB_10014118;
          }
          iVar17 = iVar13;
          iVar19 = iVar22;
          if ((iVar18 < 0x28) && (iVar22 < 0x28 - iVar18)) {
            iVar17 = (int)sVar14;
            iVar19 = (int)(short)(0x28 - iVar18);
          }
        }
LAB_10014118:
        iVar22 = iVar19;
        iVar13 = iVar17;
      } while (sVar14 != 0);
    }
    if ((int)uVar5 == -1) {
      if (iVar17 == -1) {
        uVar12 = 0;
      }
      else {
        iVar13 = *piVar7 + iVar17 * 0x42;
        iVar13 = FUN_1000a884(uVar3,uVar1,*(short *)(iVar13 + 0x1604),
                              *(short *)(iVar13 + 0x1606));
        if (iVar13 < 3) {
          uVar12 = 0;
        }
        else {
          FUN_1001e160(param_1,1,iVar17,0);
          iVar13 = *piVar10;
          FUN_10018180(*(short *)(iVar13 + 0x12),*(short *)(iVar13 + 0x14),0);
          uVar12 = 0;
        }
      }
    }
    else {
      FUN_1001e160(param_1,3,uVar5,0x100);
      iVar13 = *piVar10;
      FUN_10018180(*(short *)(iVar13 + 0x12),*(short *)(iVar13 + 0x14),0);
      uVar12 = FUN_10013a10(iVar20,uVar5);
    }
  }
  return uVar12;
}

/* Address: 0x100145c8 Size: 948 bytes */
void FUN_100145c8(short param_1)

{
  int bVar1;
  char cVar2;
  unsigned char bVar3;
  short sVar4;
  int bVar5;
  int *piVar6;
  int *piVar7;
  int *ppuVar8;
  short sVar10;
  long long uVar9;
  short sVar11;
  int bVar13;
  unsigned long long uVar12;
  int iVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  short asStack_30 [8];
  short local_20;
  
  piVar7 = piRam10117364;
  piVar6 = piRam10117360;
  ppuVar8 = 0 /* TVect base */;
  iVar17 = (int)param_1;
  iVar14 = iVar17 * 0x16;
  sVar10 = FUN_1001acdc(*(short *)(*piRam10117360 + iVar14),
                        *(short *)(*piRam10117360 + iVar14 + 2),
                        *(short *)(*piRam1011735c + 0x110));
  bVar5 = false;
  if ((*(char *)(iVar14 + *piVar6 + 8) < '\x03') || (*(char *)(iVar14 + *piVar6 + 6) < '\b')) {
    bVar5 = true;
  }
  if ((*(char *)(*piVar7 + *(char *)(*piVar6 + iVar17 * 0x16 + 4) * 6) == '\0') && (bVar5)) {
    FUN_1000fc38(iVar17,1);
  }
  else {
    uVar9 = FUN_1001ed3c(*(short *)(*piVar6 + iVar17 * 0x16),
                         *(short *)(*piVar6 + iVar17 * 0x16 + 2),asStack_30,8);
    if ((int)uVar9 != 0) {
      bVar13 = false;
      iVar14 = 7;
      do {
        sVar11 = asStack_30[iVar14];
        if ((sVar11 != -1) && (*(char *)(*piVar6 + sVar11 * 0x16 + 7) < '\b')) {
          asStack_30[iVar14] = -1;
          bVar13 = true;
        }
        bVar1 = iVar14 != 0;
        iVar14 = (int)(short)((short)iVar14 + -1);
      } while (bVar1);
      sVar11 = 0;
      sVar16 = 0;
      sVar15 = 0;
      iVar14 = 7;
      do {
        sVar4 = asStack_30[iVar14];
        if (sVar4 != -1) {
          if (*(char *)(*piVar7 + *(char *)(*piVar6 + sVar4 * 0x16 + 4) * 6) == '\0') {
            if (*(char *)(*piVar6 + sVar4 * 0x16 + 4) == '\x1c') {
              sVar16 = sVar16 + 1;
            }
            else {
              sVar11 = sVar11 + 1;
            }
          }
          else {
            sVar15 = sVar15 + 1;
          }
        }
        bVar1 = iVar14 != 0;
        iVar14 = (int)(short)((short)iVar14 + -1);
      } while (bVar1);
      if (((sVar15 != 0) && (sVar16 != 0)) && (sVar11 != 0)) {
        iVar14 = 7;
        do {
          sVar11 = asStack_30[iVar14];
          if (((sVar11 != -1) &&
              (cVar2 = *(char *)(*piVar6 + sVar11 * 0x16 + 4),
              *(char *)(*piVar7 + cVar2 * 6) == '\0')) && (cVar2 != '\x1c')) {
            asStack_30[iVar14] = -1;
            bVar13 = true;
          }
          bVar1 = iVar14 != 0;
          iVar14 = (int)(short)((short)iVar14 + -1);
        } while (bVar1);
      }
      if (bVar13) {
        FUN_1001ec20(asStack_30);
      }
      if (((int)uVar9 < 2) && (bVar5)) {
        FUN_1000fc38(iVar17,1);
      }
      else {
        FUN_10041de8();
        if (*(int *)(*(int*)((char*)ppuVar8 - 0xfc)) == 0) {
          bVar3 = *(unsigned char *)(*piVar6 + param_1 * 0x16 + 8);
          uVar12 = (long long)((int)(char)bVar3 >> 1) +
                   (unsigned long long)((char)bVar3 < '\0' && (bVar3 & 1) != 0);
          sVar11 = (short)(((uVar12 & 0x3fffffff) * 4 + uVar12 & 0xffffffff) << 1);
        }
        else {
          sVar11 = 0x32;
        }
        local_20 = sVar10 + 10;
        if (local_20 < sVar11) {
          sVar11 = local_20;
        }
        FUN_100448e4(sVar11,*(short *)(*piVar6 + iVar17 * 0x16),
                     *(short *)(*piVar6 + iVar17 * 0x16 + 2),*(short *)ppuVar8[-100],
                     *(short *)(*(int*)((char*)ppuVar8 - 0xbb)));
        uVar9 = FUN_100143b8(uVar9);
        if ((int)uVar9 == -1) {
          FUN_1000fde4(asStack_30,1);
        }
        else {
          FUN_1001e160(asStack_30,1,uVar9,0);
          FUN_10018180(*(short *)(*(int *)(*(int*)((char*)ppuVar8 - 0x70)) + 0x12),
                       *(short *)(*(int *)(*(int*)((char*)ppuVar8 - 0x70)) + 0x14),0);
        }
      }
    }
  }
  return;
}

/* Address: 0x10014e44 Size: 492 bytes */
void FUN_10014e44(int param_1)

{
  int bVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  short uVar8;
  int iVar7;
  unsigned long long uVar9;
  unsigned long long uVar10;
  int iVar11;
  int iVar12;
  
  piVar6 = piRam10117468;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  iVar12 = 0;
  iVar7 = 5;
  do {
    *(short *)(param_1 + iVar7 * 2) = 0xffff;
    bVar1 = iVar7 != 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
  } while (bVar1);
  *(short *)(*piVar6 + 0xe) = 0;
  sVar2 = *(short *)(*piVar4 + 0x182);
  while (sVar2 != 0) {
    sVar2 = sVar2 + -1;
    iVar7 = sVar2 * 0x16;
    if ((((int)*(char *)(*piVar5 + iVar7 + 5) == (int)*(short *)(*piVar4 + 0x110)) &&
        (*(char *)(*piVar5 + iVar7 + 4) == '\x1c')) && (iVar12 < 6)) {
      iVar11 = param_1 + iVar12 * 2;
      *(short *)(param_1 + iVar12 * 2) = sVar2;
      uVar10 = (unsigned long long)*(short *)(*piVar5 + iVar7);
      uVar9 = (unsigned long long)*(short *)(*piVar5 + iVar7 + 2);
      *(short *)(iVar11 + 0x18) = 0xffff;
      *(short *)(iVar11 + 0xc) = 0xffff;
      *(short *)(iVar11 + 0x24) = 0;
      if (*(char *)(*piVar4 + (*(unsigned int *)(*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 &
                                                         0xffffffff) << 5) +
                                        (int)((uVar10 & 0xffffffff) << 1)) >> 0x18) + 0x711) == '\n'
         ) {
        uVar8 = FUN_1002be50(uVar10,uVar9);
        *(short *)(iVar11 + 0xc) = uVar8;
      }
      else if (*(char *)(*piVar4 + (*(unsigned int *)(*piVar3 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 &
                                                              0xffffffff) << 5) +
                                             (int)((uVar10 & 0xffffffff) << 1)) >> 0x18) + 0x711) ==
               '\v') {
        uVar8 = FUN_1002bef8(uVar10,uVar9);
        *(short *)(param_1 + iVar12 * 2 + 0x18) = uVar8;
      }
      iVar7 = FUN_10039e24(*piVar5 + sVar2 * 0x16);
      if (iVar7 != 0) {
        *(short *)(param_1 + iVar12 * 2 + 0x24) = 1;
      }
      iVar12 = (int)(short)((short)iVar12 + 1);
      iVar7 = *piVar6;
      *(short *)(iVar7 + 0xe) = *(short *)(iVar7 + 0xe) + 1;
    }
  }
  return;
}

/* Address: 0x10015030 Size: 440 bytes */
long long FUN_10015030(short param_1,short param_2)

{
  int *piVar1;
  int *piVar2;
  int *ppuVar3;
  short sVar6;
  long long uVar4;
  int iVar5;
  short sVar7;
  short sVar8;
  unsigned long long uVar9;
  unsigned long long uVar10;
  int iVar11;
  
  piVar2 = piRam1011735c;
  piVar1 = piRam10117358;
  ppuVar3 = 0 /* TVect base */;
  iVar11 = (int)param_1;
  iVar5 = *piRam1011735c + iVar11 * 0x20;
  uVar10 = (unsigned long long)*(short *)(iVar5 + 0x812);
  uVar9 = (unsigned long long)*(short *)(iVar5 + 0x814);
  sVar6 = FUN_1000a884(uVar10,uVar9,*(short *)(*piRam10117360 + param_2 * 0x16),
                       *(short *)(*piRam10117360 + param_2 * 0x16 + 2));
  sVar8 = *(short *)(*piVar2 + 0x136);
  if (sVar8 < 2) {
    sVar8 = 1;
  }
  sVar7 = sVar8 * 2 + 10;
  if (*(short *)(*piVar2 + iVar11 * 0x20 + 0x82e) != 0) {
    sVar7 = sVar8 * 2 + 0x16;
  }
  if (*(short *)(*(int *)(*(int*)((char*)ppuVar3 - 0x10e)) + 0x48) != 0) {
    sVar7 = *(short *)(*piVar2 + 0x136);
    if (sVar7 < 2) {
      sVar7 = 1;
    }
    sVar7 = sVar7 << 1;
  }
  if (sVar6 < sVar7) {
    iVar5 = FUN_1001f174(uVar10,uVar9);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else if (*(char *)(*piVar2 + (*(unsigned int *)(*piVar1 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 &
                                                            0xffffffff) << 5) +
                                           (int)((uVar10 & 0xffffffff) << 1)) >> 0x18) + 0x711) ==
             '\v') {
      if (*(char *)(*piVar2 + iVar11 * 0x20 + 0x82a) == '\x01') {
        uVar4 = 1;
      }
      else if ((*(unsigned int *)(*piVar1 + (int)(((uVar9 & 0x1fffffff) * 8 - uVar9 & 0xffffffff) << 5) +
                         (int)((uVar10 & 0xffffffff) << 1)) >> 0x16 & 1) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

/* Address: 0x100151e8 Size: 316 bytes */
void FUN_100151e8(short param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char auStack_30 [48];
  
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  if (0 < *(short *)(*piRam1011735c + 0x810)) {
    iVar6 = (int)param_1;
    iVar8 = 0;
    do {
      iVar4 = *piVar2 + iVar8 * 0x20;
      iVar7 = iVar6 * 0x16;
      if ((((*(short *)(iVar4 + 0x812) == *(short *)(*piVar3 + iVar7)) &&
           (*(short *)(iVar4 + 0x814) == *(short *)(*piVar3 + iVar7 + 2))) &&
          (iVar4 = FUN_10015030(iVar8,iVar6), iVar4 != 0)) &&
         (iVar4 = *piVar3 + iVar7, uVar1 = *(unsigned int *)(iVar4 + 0xc),
         iVar4 = FUN_1001ee88(*(short *)(*piVar3 + iVar7),*(short *)(iVar4 + 2),auStack_30
                              ,(unsigned short)(uVar1 >> 9) & 7,(unsigned short)(uVar1 >> 0xc) & 0xf,4), iVar4 != 0)
         ) {
        uVar1 = *(unsigned int *)(*piVar3 + iVar7 + 0xc);
        FUN_1001e160(auStack_30,(unsigned short)(uVar1 >> 0xc) & 0xf,(unsigned short)uVar1 & 0x7f,0);
        FUN_10013a10(iVar6,iVar8);
      }
      sVar5 = (short)iVar8 + 1;
      iVar8 = (int)sVar5;
    } while (sVar5 < *(short *)(*piVar2 + 0x810));
  }
  return;
}

/* Address: 0x10015324 Size: 560 bytes */
long long FUN_10015324(short param_1,int param_2)

{
  short uVar1;
  short uVar2;
  short sVar3;
  unsigned int uVar4;
  int bVar5;
  int *piVar6;
  int *piVar7;
  int *ppuVar8;
  short sVar11;
  long long uVar9;
  int iVar10;
  short sVar12;
  int iVar13;
  unsigned long long uVar14;
  char auStack_40 [16];
  short local_30;
  
  piVar7 = piRam10117360;
  piVar6 = piRam1011735c;
  ppuVar8 = 0 /* TVect base */;
  sVar3 = *(short *)(param_1 * 2 + param_2);
  sVar12 = *(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0xc + 0x1144);
  if ((sVar12 != 4) && (sVar12 != 5)) {
    return 0;
  }
  iVar10 = *piRam1011735c;
  sVar12 = *(short *)(iVar10 + *(short *)(iVar10 + 0x110) * 0xc + 0x1148);
  uVar14 = (unsigned long long)sVar12;
  iVar10 = iVar10 + (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0xffffffff) << 1);
  uVar1 = *(short *)(iVar10 + 0x1604);
  uVar2 = *(short *)(iVar10 + 0x1606);
  if ((*(unsigned char *)((int)sVar12 + *piRam10117468 + 0x11e) & 1) != 0) {
    return 0;
  }
  if (*(char *)(*piRam1011735c + (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0xffffffff) << 1) +
               0x1619) != '\x0f') {
    local_30 = *(short *)(*piRam1011735c + 0x136);
    sVar12 = local_30;
    if (local_30 < 2) {
      sVar12 = 1;
    }
    if (7 < sVar12) {
      bVar5 = false;
      goto LAB_10015428;
    }
  }
  bVar5 = true;
LAB_10015428:
  if (bVar5) {
    sVar12 = 1;
  }
  else {
    sVar12 = 2;
  }
  iVar10 = sVar3 * 0x16;
  sVar11 = FUN_1001ed3c(*(short *)(*piRam10117360 + iVar10),
                        *(short *)(*piRam10117360 + iVar10 + 2),auStack_40,8);
  if (sVar11 < sVar12) {
    uVar9 = 0;
  }
  else {
    uVar4 = *(unsigned int *)(*piVar7 + sVar3 * 0x16 + 0xc);
    if (((uVar4 >> 0xc & 0xf) != 1) || (((unsigned long long)uVar4 & 0x7f) != (uVar14 & 0xffffffff))) {
      iVar10 = *piVar7;
      iVar13 = sVar3 * 0x16;
      FUN_1000a884(uVar1,uVar2,*(short *)(iVar10 + iVar13),*(short *)(iVar10 + iVar13 + 2)
                  );
      iVar10 = *piVar6 + (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0xffffffff) << 1);
      iVar10 = FUN_1001eff8(*(short *)(iVar10 + 0x1604),*(short *)(iVar10 + 0x1606));
      if (iVar10 < 0x4b) {
        return 0;
      }
    }
    FUN_1001e160(auStack_40,1,uVar14,0);
    FUN_10018180(*(short *)(*(int *)(*(int*)((char*)ppuVar8 - 0x70)) + 0x12),
                 *(short *)(*(int *)(*(int*)((char*)ppuVar8 - 0x70)) + 0x14),0);
    uVar9 = 1;
  }
  return uVar9;
}

/* Address: 0x10015554 Size: 944 bytes */
long long FUN_10015554(short param_1,short param_2,int param_3,short param_4)

{
  int bVar1;
  short sVar2;
  short uVar3;
  short uVar4;
  short sVar5;
  short sVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *ppuVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  long long uVar16;
  unsigned long long uVar17;
  short local_48 [36];
  
  piVar10 = piRam101176e0;
  piVar9 = piRam10117364;
  piVar8 = piRam10117360;
  piVar7 = piRam1011735c;
  ppuVar11 = 0 /* TVect base */;
  sVar5 = *(short *)(param_1 * 2 + param_3);
  uVar16 = 0;
  if (param_4 == 0) {
    sVar2 = *(short *)(param_3 + 0x34);
  }
  else {
    sVar2 = *(short *)(param_3 + 0x30);
  }
  uVar17 = (unsigned long long)sVar2;
  if ((param_2 == 3) || (param_2 == 0)) {
    iVar14 = *piRam1011735c + (int)((uVar17 & 0xffffffff) << 5);
    uVar3 = *(short *)(iVar14 + 0x812);
    uVar4 = *(short *)(iVar14 + 0x814);
  }
  else {
    iVar14 = *piRam1011735c + *(short *)(param_3 + 0x3c) * 0x1e;
    uVar3 = *(short *)(iVar14 + 0xd2c);
    uVar4 = *(short *)(iVar14 + 0xd2e);
    uVar17 = (unsigned long long)(short)(*(short *)(param_3 + 0x3c) + 1000);
  }
  iVar14 = sVar5 * 0x16;
  FUN_1000a884(uVar3,uVar4,*(short *)(*piRam10117360 + iVar14),
               *(short *)(*piRam10117360 + iVar14 + 2));
  iVar13 = iVar14 + *piVar8;
  uVar12 = *(unsigned int *)(iVar13 + 0xc);
  uVar12 = FUN_1001ee88(*(short *)(iVar14 + *piVar8),*(short *)(iVar13 + 2),local_48,
                        (unsigned short)(uVar12 >> 9) & 7,(unsigned short)(uVar12 >> 0xc) & 0xf,0xc);
  if (uVar12 == 0) {
    uVar16 = 0;
  }
  else {
    sVar2 = *(short *)(param_3 + param_1 * 2 + 0xc);
    if (sVar2 != -1) {
      iVar14 = sVar5 * 0x16;
      iVar13 = FUN_100186cc(*(short *)(*piVar8 + iVar14),*(short *)(*piVar8 + iVar14 + 2),
                            0xffffffffffffffff);
      sVar15 = -1;
      iVar14 = 7;
      do {
        sVar6 = local_48[iVar14];
        if ((sVar6 != -1) &&
           (*(char *)(*piVar9 + *(char *)(*piVar8 + sVar6 * 0x16 + 4) * 6) != '\0')) {
          sVar15 = sVar6;
        }
        bVar1 = iVar14 != 0;
        iVar14 = (int)(short)((short)iVar14 + -1);
      } while (bVar1);
      if (sVar15 == -1) {
        if (0xe < iVar13) {
          iVar14 = 7;
          do {
            local_48[iVar14] = -1;
            bVar1 = iVar14 != 0;
            iVar14 = (int)(short)((short)iVar14 + -1);
          } while (bVar1);
          local_48[0] = sVar5;
          FUN_1001ec20(local_48);
          uVar12 = 1;
        }
      }
      else {
        iVar14 = 7;
        do {
          local_48[iVar14] = -1;
          bVar1 = iVar14 != 0;
          iVar14 = (int)(short)((short)iVar14 + -1);
        } while (bVar1);
        local_48[0] = sVar5;
        local_48[1] = sVar15;
        FUN_1001ec20(local_48);
        uVar12 = 2;
      }
      if (sVar2 != -1) {
        if (((uVar12 == *(unsigned char *)((int)sVar2 + *(int *)(*(int*)((char*)ppuVar11 - 0x10e)) + 0x182)) &&
            ((int)uVar12 < 3)) && (iVar13 < 0xf)) {
          return 0;
        }
        if ((sVar2 != -1) && (uVar12 == 3)) {
          iVar14 = 7;
          do {
            local_48[iVar14] = -1;
            bVar1 = iVar14 != 0;
            iVar14 = (int)(short)((short)iVar14 + -1);
          } while (bVar1);
          local_48[0] = sVar5;
          FUN_1001ec20(local_48);
        }
      }
    }
    FUN_10041de8();
    if ((int)uVar17 != -1) {
      if ((int)uVar17 < 1000) {
        FUN_1001e160(local_48,3,uVar17,0);
        iVar14 = FUN_10018180(*(short *)(*piVar10 + 0x12),*(short *)(*piVar10 + 0x14),0);
        if (iVar14 == 4) {
          uVar16 = 1;
        }
      }
      else {
        FUN_1001e160(local_48,4,0,0);
        iVar14 = (int)(((uVar17 & 0xfffffff) * 0x10 - uVar17 & 0xffffffff) << 1);
        *(short *)(*piVar10 + 0x12) = *(short *)(iVar14 + *piVar7 + -0x6804);
        *(short *)(*piVar10 + 0x14) = *(short *)(iVar14 + *piVar7 + -0x6802);
        iVar14 = FUN_10018180(*(short *)(*piVar10 + 0x12),*(short *)(*piVar10 + 0x14),0);
        if (iVar14 == 4) {
          uVar16 = 1;
        }
      }
    }
  }
  return uVar16;
}

/* Address: 0x100159c8 Size: 640 bytes */
void FUN_100159c8(short param_1,int param_2)

{
  int bVar1;
  short sVar2;
  int bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  unsigned short uVar8;
  short sVar9;
  short uVar12;
  unsigned int uVar10;
  unsigned int uVar11;
  short uVar14;
  unsigned int uVar13;
  short sVar15;
  short sVar16;
  short sVar17;
  unsigned int uVar18;
  
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  sVar2 = *(short *)(param_1 * 2 + param_2);
  uVar13 = 0xffffffff;
  uVar14 = 0xffff;
  uVar11 = 0xffffffff;
  uVar12 = 0xffff;
  sVar16 = 100;
  sVar15 = 100;
  if ((*(unsigned int *)(*piRam10117360 + sVar2 * 0x16 + 0xc) >> 0xc & 0xf) == 0) {
    sVar7 = 0x19;
  }
  else {
    sVar7 = 5;
  }
  sVar17 = sVar7;
  if (*(short *)(*piRam10117468 + 0x48) != 0) {
    sVar9 = *(short *)(*piRam1011735c + 0x136);
    if (sVar9 < 2) {
      sVar9 = 1;
    }
    sVar17 = sVar9 << 1;
    if (sVar7 < (short)(sVar9 << 1)) {
      sVar17 = sVar7;
    }
  }
  uVar18 = 0;
  if (0 < *(short *)(*piRam1011735c + 0x810)) {
    do {
      iVar6 = *piVar4 + uVar18 * 0x20;
      uVar12 = *(short *)(iVar6 + 0x812);
      uVar14 = *(short *)(iVar6 + 0x814);
      iVar6 = FUN_10015030(uVar18,sVar2);
      bVar3 = true;
      if (iVar6 != 0) {
        sVar7 = FUN_1000a884(uVar12,uVar14,*(short *)(*piVar5 + sVar2 * 0x16),
                             *(short *)(*piVar5 + sVar2 * 0x16 + 2));
        iVar6 = *piVar4;
        if (*(char *)(iVar6 + uVar18 * 0x20 + 0x82a) == '\x01') {
          if ((*(short *)(iVar6 + 0x11e) != 0) &&
             (*(short *)(iVar6 + *(short *)(iVar6 + 0x110) * 0xc + 0x1142) == 0)) {
            sVar9 = sVar17;
            if (0xb < sVar17) {
              sVar9 = 0xb;
            }
            if ((sVar7 < sVar9) && (uVar10 = uVar18, sVar9 = sVar7, sVar7 < sVar15))
            goto LAB_10015bec;
          }
          uVar8 = FUN_10015980(uVar18);
          uVar10 = uVar11;
          sVar9 = sVar15;
          if ((*(unsigned short *)(*piVar5 + sVar2 * 0x16 + 0xc) & uVar8) != 0) goto LAB_10015c0c;
        }
        else {
          iVar6 = 5;
          bVar3 = true;
          do {
            if ((((iVar6 != param_1) && (sVar9 = *(short *)(param_2 + iVar6 * 2), sVar9 != -1)) &&
                (uVar10 = *(unsigned int *)(*piVar5 + sVar9 * 0x16 + 0xc), (uVar10 >> 0xc & 0xf) == 3)) &&
               ((uVar10 & 0x7f) == uVar18)) {
              bVar3 = false;
            }
            bVar1 = iVar6 != 0;
            iVar6 = (int)(short)((short)iVar6 + -1);
            uVar10 = uVar11;
            sVar9 = sVar15;
          } while (bVar1);
        }
LAB_10015bec:
        uVar11 = uVar10;
        sVar15 = sVar9;
        if (((bVar3) && (sVar7 <= sVar17)) && (sVar7 < sVar16)) {
          uVar13 = uVar18;
          sVar16 = sVar7;
        }
      }
LAB_10015c0c:
      uVar14 = (short)uVar13;
      uVar12 = (short)uVar11;
      sVar7 = (short)uVar18 + 1;
      uVar18 = (unsigned int)sVar7;
    } while (sVar7 < *(short *)(*piVar4 + 0x810));
  }
  *(short *)(param_2 + 0x30) = uVar12;
  *(short *)(param_2 + 0x32) = sVar15;
  *(short *)(param_2 + 0x34) = uVar14;
  *(short *)(param_2 + 0x36) = sVar16;
  return;
}

/* Address: 0x10015dc8 Size: 464 bytes */
void FUN_10015dc8(short param_1,int param_2)

{
  int bVar1;
  short uVar2;
  short uVar3;
  short sVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  short sVar10;
  int bVar11;
  short sVar12;
  unsigned int uVar13;
  short sVar14;
  unsigned int uVar15;
  
  piVar8 = piRam10117360;
  piVar7 = piRam1011735c;
  sVar4 = *(short *)(param_1 * 2 + param_2);
  uVar13 = 0xffffffff;
  sVar14 = 100;
  sVar12 = 0;
  iVar9 = 0x15;
  do {
    iVar6 = *piRam1011735c + iVar9 * 0x1e;
    if ((*(char *)(iVar6 + 0xd28) == '\x03') && (*(short *)(iVar6 + 0xd2a) == sVar4)) {
      sVar12 = sVar12 + 1;
    }
    bVar11 = iVar9 != 0;
    iVar9 = (int)(short)((short)iVar9 + -1);
  } while (bVar11);
  if (sVar12 < 3) {
    if ((*(unsigned int *)(*piRam10117360 + sVar4 * 0x16 + 0xc) >> 0xc & 0xf) == 0) {
      sVar12 = 0x19;
    }
    else {
      sVar12 = 5;
    }
    uVar15 = 0x15;
    do {
      iVar9 = *piVar7 + uVar15 * 0x1e;
      uVar2 = *(short *)(iVar9 + 0xd2c);
      uVar3 = *(short *)(iVar9 + 0xd2e);
      iVar9 = FUN_10015c48(uVar15);
      bVar11 = true;
      if (iVar9 != 0) {
        iVar9 = 5;
        do {
          if ((((iVar9 != param_1) && (sVar10 = *(short *)(param_2 + iVar9 * 2), sVar10 != -1)) &&
              (uVar5 = *(unsigned int *)(*piVar8 + sVar10 * 0x16 + 0xc), (uVar5 >> 0xc & 0xf) == 2)) &&
             ((uVar5 & 0x7f) == uVar15)) {
            bVar11 = false;
          }
          bVar1 = iVar9 != 0;
          iVar9 = (int)(short)((short)iVar9 + -1);
        } while (bVar1);
        if (bVar11) {
          iVar9 = *piVar8;
          sVar10 = FUN_1000a884(uVar2,uVar3,*(short *)(iVar9 + sVar4 * 0x16),
                                *(short *)(iVar9 + sVar4 * 0x16 + 2));
          if ((sVar10 <= sVar12) && (sVar10 < sVar14)) {
            uVar13 = uVar15;
            sVar14 = sVar10;
          }
        }
      }
      bVar11 = uVar15 != 0;
      uVar15 = (int)(short)((short)uVar15 + -1);
    } while (bVar11);
    *(short *)(param_2 + 0x3c) = (short)uVar13;
    *(short *)(param_2 + 0x3e) = sVar14;
  }
  else {
    *(short *)(param_2 + 0x3c) = 0xffff;
  }
  return;
}

/* Address: 0x10015f98 Size: 612 bytes */
void FUN_10015f98(short param_1,int param_2)

{
  unsigned short uVar1;
  short sVar2;
  unsigned int uVar3;
  long long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  short sVar10;
  long long lVar11;
  int iVar12;
  short sVar13;
  short uVar15;
  int iVar14;
  short sVar16;
  unsigned short uVar17;
  int iVar18;
  char auStack_48 [72];
  
  piVar8 = piRam10117468;
  piVar7 = piRam10117360;
  piVar6 = piRam1011735c;
  piVar5 = piRam10117358;
  sVar2 = *(short *)(param_1 * 2 + param_2);
  *(short *)(param_2 + 0x3a) = 0xffff;
  *(short *)(param_2 + 0x38) = 0xffff;
  uVar3 = *(unsigned int *)(*piVar7 + sVar2 * 0x16 + 0xc);
  iVar14 = -1;
  uVar15 = 0xffff;
  iVar18 = 0x14;
  sVar16 = 0;
  if ((uVar3 >> 0xc & 0xf) == 1) {
    uVar17 = (unsigned short)uVar3 & 0x7f;
  }
  else {
    uVar17 = 0xffff;
  }
  iVar9 = sVar2 * 0x16;
  iVar12 = *piVar7 + iVar9;
  uVar3 = *(unsigned int *)(iVar12 + 0xc);
  iVar9 = FUN_1001ee88(*(short *)(*piVar7 + iVar9),*(short *)(iVar12 + 2),auStack_48,
                       (unsigned short)(uVar3 >> 9) & 7,(unsigned short)(uVar3 >> 0xc) & 0xf,0xc);
  if (iVar9 != 0) {
    if (iVar9 < 3) {
      sVar13 = 0x5f;
    }
    else {
      sVar13 = 0x4b;
    }
    uVar1 = *(unsigned short *)(*piVar6 + 0x1602);
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      iVar9 = *piVar6;
      iVar12 = iVar9 + ((short)uVar1 * 0x20 + (int)(short)uVar1) * 2;
      lVar4 = -(long long)
               *(char *)(iVar9 + (*(unsigned int *)(*piVar5 + *(short *)(iVar12 + 0x1606) * 0xe0 +
                                           *(short *)(iVar12 + 0x1604) * 2) >> 0x18) + 0x711);
      lVar11 = lVar4 + 10;
      if (((((lVar11 + (-(unsigned long long)(lVar11 == 0) - (lVar4 + 9)) & 0xff) == 0) &&
           ((*(unsigned char *)(*piVar8 + (int)(short)uVar1 + 0x11e) & 1) == 0)) &&
          (*(char *)(iVar12 + 0x1619) != '\x0f')) &&
         ((*(unsigned int *)(*(short *)(iVar9 + 0x110) * 0x10 + iVar9 + *(char *)(iVar12 + 0x1619) * 2 +
                    0x1582) >> 0x1a & 3) == 2)) {
        iVar9 = sVar2 * 0x16;
        iVar9 = FUN_1000a884((int)*(short *)(iVar12 + 0x1604),(int)*(short *)(iVar12 + 0x1606),
                             *(short *)(*piVar7 + iVar9),*(short *)(*piVar7 + iVar9 + 2));
        if ((iVar9 <= iVar18) || (uVar17 == uVar1)) {
          iVar12 = *piVar6 + (short)uVar1 * 0x42;
          sVar10 = FUN_1001eff8(*(short *)(iVar12 + 0x1604),*(short *)(iVar12 + 0x1606));
          if (uVar17 == uVar1) {
            sVar10 = sVar10 + 0x14;
          }
          if ((sVar13 <= sVar10) && ((sVar16 < sVar10 || ((sVar10 == sVar16 && (iVar9 < iVar18))))))
          {
            iVar14 = (int)(short)uVar1;
            iVar18 = iVar9;
            sVar16 = sVar10;
          }
        }
      }
      uVar15 = (short)iVar14;
    }
    *(short *)(param_2 + 0x38) = uVar15;
    *(short *)(param_2 + 0x3a) = (short)iVar18;
  }
  return;
}

/* Address: 0x100161fc Size: 328 bytes */
char FUN_100161fc(short param_1,int param_2)

{
  short sVar1;
  int *ppuVar2;
  int iVar3;
  char uVar4;
  int iVar5;
  
  ppuVar2 = 0 /* TVect base */;
  iVar3 = FUN_1005f230(1,0x14,0x14);
  uVar4 = *(short *)(param_2 + 0x30) != -1;
  iVar5 = 0;
  if ((int)uVar4) {
    iVar5 = (iVar3 - *(short *)(param_2 + 0x32)) + 100;
  }
  iVar3 = FUN_1005f230(1,0x14,0x14);
  iVar3 = (iVar3 - *(short *)(param_2 + 0x36)) + 100;
  if ((*(short *)(param_2 + 0x34) != -1) && (iVar5 < iVar3)) {
    uVar4 = 3;
    iVar5 = iVar3;
  }
  sVar1 = *(short *)(param_2 + param_1 * 2 + 0xc);
  if ((sVar1 == -1) || (4 < *(unsigned char *)((int)sVar1 + *(int *)(*(int*)((char*)ppuVar2 - 0x10e)) + 0x182))) {
    iVar3 = FUN_1005f230(1,0x14,0);
    iVar3 = (iVar3 - *(short *)(param_2 + 0x3a)) + 100;
    if ((*(short *)(param_2 + 0x38) != -1) && (iVar5 < iVar3)) {
      uVar4 = 4;
      iVar5 = iVar3;
    }
    iVar3 = FUN_1005f230(1,0x14,0);
    if ((*(short *)(param_2 + 0x3c) != -1) && (iVar5 < (iVar3 - *(short *)(param_2 + 0x3e)) + 100))
    {
      uVar4 = 2;
    }
  }
  return uVar4;
}

/* Address: 0x10016bc0 Size: 260 bytes */
int FUN_10016bc0(short param_1,short param_2,short *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  
  piVar3 = piRam1011735c;
  piVar2 = piRam10117358;
  uVar5 = (unsigned long long)param_2;
  uVar6 = (unsigned long long)param_1;
  if (*(char *)((*(unsigned int *)(*piRam10117358 +
                           (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0xffffffff) << 5) +
                          (int)((uVar6 & 0xffffffff) << 1)) >> 0x18) + *piRam1011735c + 0x711) ==
      '\v') {
    iVar4 = FUN_1002bef8(uVar6,uVar5);
    if (iVar4 < 0) {
      iVar4 = -1;
    }
    else {
      cVar1 = *(char *)(*piVar3 + iVar4 * 0x20 + 0x82a);
      *param_3 = (short)cVar1;
      if ((cVar1 != '\x01') &&
         ((*(unsigned int *)(*piVar2 + (int)(((uVar5 & 0x1fffffff) * 8 - uVar5 & 0xffffffff) << 5) +
                    (int)((uVar6 & 0xffffffff) << 1)) >> 0x16 & 1) != 0)) {
        iVar4 = -1;
      }
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

/* Address: 0x100171d4 Size: 1092 bytes */
void FUN_100171d4(short *param_1,short param_2)

{
  int bVar1;
  char cVar2;
  int *piVar3;
  short *puVar4;
  int iVar5;
  int bVar6;
  short *psVar7;
  char *pcVar8;
  short *psVar9;
  int *piVar10;
  short *puVar11;
  int *piVar12;
  short uVar13;
  short uVar14;
  int *ppuVar15;
  int iVar16;
  int iVar17;
  short sVar18;
  int bVar20;
  int iVar19;
  int iVar21;
  int iVar22;
  int **local_6c;
  short local_48;
  short local_46 [35];
  
  iVar5 = iRam101176e8;
  piVar12 = piRam101176e0;
  puVar11 = puRam10117494;
  piVar3 = piRam10117364;
  piVar10 = piRam1011735c;
  psVar9 = psRam10116354;
  pcVar8 = pcRam101161f8;
  psVar7 = psRam10115e9c;
  local_46[0] = *param_1;
  local_48 = param_1[1];
  iVar21 = 0;
  ppuVar15 = 0 /* TVect base */;
  if (0 < param_2) {
    do {
      uVar14 = local_46[0];
      uVar13 = local_48;
      iVar16 = FUN_10001a88();
      ppuVar15 = local_6c;
      FUN_10017170(local_46,&local_48,*(char *)(*(int *)(param_1 + 6) + iVar21));
      iVar22 = 0;
      if (*psVar9 != 0) {
        iVar17 = 7;
        do {
          puVar4 = *(short **)(iVar17 * 4 + iVar5);
          if (puVar4 != (short *)0x0) {
            *puVar4 = local_46[0];
            *(short *)(*(int *)(iVar17 * 4 + iVar5) + 2) = local_48;
          }
          bVar20 = iVar17 != 0;
          iVar17 = (int)(short)((short)iVar17 + -1);
        } while (bVar20);
      }
      *(short *)*piVar12 = local_46[0];
      *(short *)(*piVar12 + 2) = local_48;
      if ((*(short *)(*(int*)((char*)ppuVar15 - 0x69d)) == 0) &&
         (*(short *)(*piVar10 + *(short *)(*piVar10 + 0x110) * 2 + 0xd0) != 1)) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if (bVar20) {
        FUN_100169c0(local_46[0],local_48);
      }
      FUN_10021364(uVar14,uVar13);
      *psVar7 = *psVar7 + 1;
      iVar17 = FUN_1000931c(*(short *)(*piVar10 + 0x110),*(short *)*piVar12,
                            ((short *)*piVar12)[1]);
      if (iVar17 != 0) {
        FUN_100632a0(*(short *)*piVar12,((short *)*piVar12)[1],1);
      }
      FUN_10008418();
      while( true ) {
        iVar17 = FUN_10001a88();
        if (*pcVar8 == '\0') {
          iVar19 = 1;
        }
        else {
          iVar19 = 10;
        }
        if (((iVar17 < iVar16) || (iVar19 <= iVar17 - iVar16)) || (10000 < iVar22)) break;
        iVar22 = iVar22 + 1;
      }
      sVar18 = (short)iVar21 + 1;
      iVar21 = (int)sVar18;
      ppuVar15 = local_6c;
    } while (sVar18 < param_2);
  }
  if (param_1[5] == 1) {
    cVar2 = *(char *)(*piVar10 +
                      (*(unsigned int *)(*(int *)(*(int*)((char*)ppuVar15 - 0x152)) + ((short *)*piVar12)[1] * 0xe0 +
                                *(short *)*piVar12 * 2) >> 0x18) + 0x711);
    if ((param_1[4] & 8) == 0) {
      bVar6 = false;
      bVar20 = false;
      if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
        iVar21 = 7;
        do {
          iVar16 = *(int *)(iVar21 * 4 + iVar5);
          if (iVar16 != 0) {
            if (*(char *)(*piVar3 + *(char *)(iVar16 + 4) * 6) == '\0') {
              if (*(char *)(*(int *)(iVar21 * 4 + iVar5) + 4) != '\x1c') {
                bVar20 = true;
              }
            }
            else {
              bVar6 = true;
            }
          }
          bVar1 = iVar21 != 0;
          iVar21 = (int)(short)((short)iVar21 + -1);
        } while (bVar1);
        if (bVar20) {
          bVar6 = false;
        }
        iVar21 = 7;
        do {
          iVar16 = *(int *)(iVar21 * 4 + iVar5);
          if (((iVar16 != 0) &&
              (cVar2 = *(char *)(iVar16 + 4), *(char *)(*piVar3 + cVar2 * 6) == '\0')) &&
             ((cVar2 != '\x1c' || (!bVar6)))) {
            iVar16 = *(int *)(iVar21 * 4 + iVar5);
            *(unsigned short *)(iVar16 + 0xc) = *(unsigned short *)(iVar16 + 0xc) | 0x1000;
            *puVar11 = 1;
          }
          bVar20 = iVar21 != 0;
          iVar21 = (int)(short)((short)iVar21 + -1);
        } while (bVar20);
      }
    }
    else if (((cVar2 != '\x02') && (cVar2 != '\x03')) && (cVar2 != '\x01')) {
      iVar21 = 7;
      do {
        iVar16 = *(int *)(iVar21 * 4 + iVar5);
        if (iVar16 != 0) {
          *(unsigned short *)(iVar16 + 0xc) = *(unsigned short *)(iVar16 + 0xc) & 0xefff;
          *puVar11 = 2;
        }
        bVar20 = iVar21 != 0;
        iVar21 = (int)(short)((short)iVar21 + -1);
      } while (bVar20);
    }
  }
  piVar3 = (int *)(*(int*)((char*)ppuVar15 - 0x152));
  iVar5 = *piVar3 + ((short *)*piVar12)[1] * 0xe0;
  iVar21 = *(short *)*piVar12 * 2;
  *(unsigned int *)(iVar5 + iVar21) = *(unsigned int *)(iVar5 + iVar21) | 0x100000;
  iVar5 = *piVar3 + ((short *)*piVar12)[1] * 0xe0;
  iVar21 = *(short *)*piVar12 * 2;
  *(unsigned int *)(iVar5 + iVar21) =
       ((int)*(short *)(*piVar10 + 0x110) & 0xfU) << 0x10 | *(unsigned int *)(iVar5 + iVar21) & 0xfff0ffff;
  return;
}

/* Address: 0x10017618 Size: 556 bytes */
long long FUN_10017618(short param_1)

{
  short sVar1;
  short sVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  unsigned long long uVar10;
  unsigned long long uVar11;
  
  piVar6 = piRam1011735c;
  piVar5 = piRam10117358;
  piVar4 = piRam10117354;
  if ((*piRam101176e0 != 0) && (param_1 == 1)) {
    sVar1 = *(short *)*piRam101176e0;
    uVar10 = (unsigned long long)sVar1;
    sVar2 = ((short *)*piRam101176e0)[1];
    uVar11 = (unsigned long long)sVar2;
    if ((*(char *)(*piRam1011735c +
                   (*(unsigned int *)(*piRam10117358 +
                              (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                             (int)((uVar10 & 0xffffffff) << 1)) >> 0x18) + 0x711) == '\v') &&
       (iVar7 = FUN_1002bef8(uVar10,uVar11), -1 < iVar7)) {
      if (*(char *)(*piVar6 + iVar7 * 0x20 + 0x82a) == '\x01') {
        return 1;
      }
      if ((*(unsigned int *)(*piVar5 + (int)(((uVar11 & 0x1fffffff) * 8 - uVar11 & 0xffffffff) << 5) +
                    (int)((uVar10 & 0xffffffff) << 1)) >> 0x16 & 1) == 0) {
        return 1;
      }
    }
    sVar9 = sVar1 + -1;
    if ((int)sVar9 <= sVar1 + 1) {
      do {
        sVar8 = sVar2 + -1;
        if ((int)sVar8 <= sVar2 + 1) {
          do {
            uVar10 = (unsigned long long)sVar8;
            if ((((-1 < sVar9) && (-1 < sVar8)) && (sVar9 < 0x70)) && (sVar8 < 0x9c)) {
              if (*(char *)(*piVar6 + (*(unsigned int *)(*piVar5 + (int)(((uVar10 & 0x1fffffff) * 8 - uVar10
                                                                 & 0xffffffff) << 5) +
                                                (int)(((long long)sVar9 & 0xffffffffU) << 1)) >> 0x18
                                      ) + 0x711) == '\n') {
                return 1;
              }
              uVar3 = *(unsigned int *)(*piVar5 + (int)(((uVar10 & 0x1fffffff) * 8 - uVar10 & 0xffffffff) <<
                                               5) + (int)(((long long)sVar9 & 0xffffffffU) << 1));
              if (((uVar3 >> 0x14 & 1) != 0) &&
                 ((uVar3 >> 0x10 & 0xf) != (int)(char)*(short *)(*piVar6 + 0x110))) {
                return 1;
              }
              if ((*(unsigned int *)(*piVar4 + (int)(((uVar10 & 0x1fffffff) * 8 - uVar10 & 0xffffffff) << 4)
                            + (int)sVar9) >> 0x18 & 0x1f) != 0) {
                return 1;
              }
            }
            sVar8 = sVar8 + 1;
          } while ((int)sVar8 <= sVar2 + 1);
        }
        sVar9 = sVar9 + 1;
      } while ((int)sVar9 <= sVar1 + 1);
    }
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
int FUN_10017844() { return 0; }
























































































































































/* Address: 0x10017c28 Size: 140 bytes */
void FUN_10017c28(void)

{
  int bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = iRam101176e8;
  psVar3 = psRam10117494;
  iVar5 = 7;
  do {
    if (*(int *)(iVar5 * 4 + iVar4) != 0) {
      if (*psVar3 == 1) {
        iVar2 = *(int *)(iVar5 * 4 + iVar4);
        if ((*(unsigned short *)(iVar2 + 0xc) & 0x1000) != 0) {
          *(char *)(iVar2 + 7) = 0;
        }
      }
      else if ((*psVar3 == 2) &&
              (iVar2 = *(int *)(iVar5 * 4 + iVar4), (*(unsigned short *)(iVar2 + 0xc) & 0x1000) == 0)) {
        *(char *)(iVar2 + 7) = 0;
      }
    }
    bVar1 = iVar5 != 0;
    iVar5 = (int)(short)((short)iVar5 + -1);
  } while (bVar1);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10017cb4() { return 0; }














































/* Address: 0x10017ddc Size: 756 bytes */
long long
FUN_10017ddc(short param_1,short param_2,short param_3,short *param_4,
            short *param_5)

{
  int bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned long long uVar8;
  int iVar9;
  unsigned long long uVar10;
  
  iVar4 = iRam101176e8;
  piVar7 = piRam101176e0;
  piVar6 = piRam10117468;
  piVar5 = piRam1011735c;
  uVar10 = (unsigned long long)param_1;
  cVar2 = *(char *)(*piRam1011735c + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1)
                   + 0x1619);
  if (cVar2 == '\x0f') {
    if (*(short *)(*piRam1011735c + 0x15a) != 0) {
      FUN_10008418();
    }
    FUN_10030490(param_2,param_3,1);
    if (*(short *)(*piVar5 + 0x15a) != 0) {
      if (*piVar7 == 0) {
        FUN_10007f78();
      }
      else {
        FUN_10008418();
      }
    }
    if ((int)*(char *)(*piVar5 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) +
                      0x1619) == (int)*(short *)(*piVar5 + 0x110)) {
      *(char *)((int)param_1 + *piVar6 + 0x56) = 1;
    }
  }
  else if (*(char *)(*piRam1011735c +
                     (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) + 0x1619) !=
           (char)*(short *)(*piRam1011735c + 0x110)) {
    if (((int)param_1 != (int)*(short *)(*piRam10117468 + 0x46)) ||
       (uVar8 = uVar10, *piRam101174b0 == 0)) {
      uVar8 = FUN_1001f48c(uVar10,param_2,param_3);
    }
    if ((unsigned int)uVar8 != (int)param_1) {
      iVar9 = 7;
      do {
        iVar3 = *(int *)(iVar9 * 4 + iVar4);
        if (iVar3 != 0) {
          *(unsigned int *)(iVar3 + 0xc) = *(unsigned int *)(iVar3 + 0xc) & 0xffff0fff | 0x1000;
          iVar3 = *(int *)(iVar9 * 4 + iVar4);
          *(unsigned int *)(iVar3 + 0xc) = (unsigned int)uVar8 & 0x7f | *(unsigned int *)(iVar3 + 0xc) & 0xffffff80;
        }
        bVar1 = iVar9 != 0;
        iVar9 = (int)(short)((short)iVar9 + -1);
      } while (bVar1);
      iVar4 = (int)(((uVar8 & 0x7ffffff) * 0x20 + uVar8 & 0xffffffff) << 1);
      *param_4 = *(short *)(*piVar5 + iVar4 + 0x1604);
      *param_5 = *(short *)(iVar4 + *piVar5 + 0x1606);
      return 1;
    }
    if (*(short *)(*piVar5 + 0x15a) != 0) {
      FUN_10008418();
    }
    FUN_10030490(param_2,param_3,1);
    if ((int)*(char *)(*piVar5 + (int)(((uVar10 & 0x7ffffff) * 0x20 + uVar10 & 0xffffffff) << 1) +
                      0x1619) == (int)*(short *)(*piVar5 + 0x110)) {
      FUN_10012324(uVar10,cVar2);
    }
    if (*(short *)(*piVar5 + 0x15a) != 0) {
      if (*piVar7 == 0) {
        FUN_10007f78();
      }
      else {
        FUN_10008418();
      }
    }
  }
  iVar9 = 7;
  do {
    iVar3 = *(int *)(iVar9 * 4 + iVar4);
    if (iVar3 != 0) {
      *(unsigned int *)(iVar3 + 0xc) = *(unsigned int *)(iVar3 + 0xc) & 0xffff0fff;
      iVar3 = *(int *)(iVar9 * 4 + iVar4);
      *(unsigned int *)(iVar3 + 0xc) = *(unsigned int *)(iVar3 + 0xc) & 0xffffff80;
    }
    bVar1 = iVar9 != 0;
    iVar9 = (int)(short)((short)iVar9 + -1);
  } while (bVar1);
  return 0;
}

/* Address: 0x100180d0 Size: 176 bytes */
long long FUN_100180d0(short param_1,short param_2)

{
  int bVar1;
  int iVar2;
  int iVar3;
  long long lVar4;
  
  iVar2 = iRam101176e8;
  lVar4 = 0;
  if (*(short *)(*piRam1011735c + 0x15a) != 0) {
    FUN_10008418();
  }
  FUN_10030490(param_1,param_2,1);
  iVar3 = 7;
  do {
    if (*(int *)(iVar3 * 4 + iVar2) != 0) {
      lVar4 = (long long)(short)((short)lVar4 + 1);
    }
    bVar1 = iVar3 != 0;
    iVar3 = (int)(short)((short)iVar3 + -1);
  } while (bVar1);
  if ((int)lVar4 != 0) {
    FUN_10041de8();
  }
  return lVar4;
}

/* FUN_10018180 defined elsewhere */













































/* Address: 0x10018800 Size: 788 bytes */
void FUN_10018800(short param_1,char param_2,int param_3,int param_4,short *param_5)

{
  int bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  short *psVar8;
  unsigned long long uVar9;
  int iVar10;
  int iVar11;
  short sVar13;
  int iVar12;
  short sVar14;
  short sVar15;
  int iVar16;
  unsigned long long uVar17;
  unsigned char abStack_58 [8];
  unsigned char abStack_50 [80];
  
  psVar8 = psRam101174a0;
  piVar7 = piRam10117468;
  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  psVar4 = psRam10115d4c;
  uVar9 = ZEXT48(0 /* TVect base */);
  uVar17 = (unsigned long long)param_1;
  iVar11 = 100;
  while( true ) {
    iVar12 = 7;
    do {
      sVar13 = *(short *)(param_4 + iVar12 * 2);
      if ((sVar13 != -1) &&
         ((int)*(char *)(*piVar6 + sVar13 * 0x16 + 5) != (int)*(short *)(*piVar5 + 0x110))) {
        *(short *)(iVar12 * 2 + param_4) = 0xffff;
      }
      bVar1 = iVar12 != 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
    } while (bVar1);
    if (*(short *)(*piVar5 + 0x11a) != 0) {
      FUN_1001ec20(param_4);
    }
    iVar10 = FUN_10018574(uVar17,abStack_58,abStack_50);
    uVar17 = 0xffffffffffffffff;
    iVar12 = 1000;
    if (iVar10 == 0) {
      return;
    }
    iVar10 = 5;
    do {
      bVar2 = abStack_58[iVar10];
      if (((bVar2 != 0xff) && ((*(unsigned char *)((unsigned int)bVar2 + *piVar7 + 0x11e) & 1) == 0)) &&
         (*param_5 = 0, *(char *)((unsigned int)bVar2 + param_3) < '\x03')) {
        if (*(short *)(*piVar5 + 0x11a) != 0) {
          iVar11 = *piVar5 + (unsigned int)bVar2 * 0x42;
          iVar11 = FUN_1001eff8(*(short *)(iVar11 + 0x1604),*(short *)(iVar11 + 0x1606));
        }
        if (0x4a < iVar11) {
          sVar13 = FUN_1005f230(1,10,0);
          bVar3 = abStack_50[iVar10];
          if (bVar3 < 0x29) {
            sVar14 = 0;
          }
          else {
            sVar14 = 10;
          }
          if (abStack_50[iVar10] < 0x33) {
            sVar15 = 0;
          }
          else {
            sVar15 = 0x1e;
          }
          iVar16 = ((short)(sVar13 + (unsigned short)bVar3 + *(char *)(param_3 + (unsigned int)bVar2) * 10 + sVar14
                           + sVar15) - iVar11) + 100;
          if (iVar16 < iVar12) {
            uVar17 = (unsigned long long)bVar2;
            iVar12 = iVar16;
          }
        }
      }
      bVar1 = iVar10 != 0;
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (bVar1);
    iVar12 = (int)uVar17;
    if (iVar12 == -1) break;
    *(char *)(param_3 + iVar12) = *(char *)(param_3 + iVar12) + param_2;
    *psVar4 = (short)uVar17;
    *psVar8 = param_1;
    FUN_1001e160(param_4,1,uVar17,0x80);
    iVar12 = **(int **)((int)uVar9 + -0x1c0);
    FUN_10018180(*(short *)(iVar12 + 0x12),*(short *)(iVar12 + 0x14),0);
    if ((int)*(char *)(*piVar5 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                      0x1619) != (int)*(short *)(*piVar5 + 0x110)) {
      return;
    }
    if (*(short *)(*piVar7 + 0x48) != 0) {
      return;
    }
    iVar12 = *piVar5 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1);
    iVar12 = FUN_100186cc(*(short *)(iVar12 + 0x1604),*(short *)(iVar12 + 0x1606),
                          0xffffffffffffffff);
    if (iVar12 < 10) {
      return;
    }
  }
  if (((*(short *)(*piVar5 + 0x124) != 0) && (*psVar8 == param_1)) &&
     (sVar13 = *psVar4, sVar13 != -1)) {
    FUN_1001e160(param_4,1,sVar13,0x80);
  }
  return;
}

/* Address: 0x10018b14 Size: 1004 bytes */
unsigned short FUN_10018b14(short param_1,long long param_2)

{
  int bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  char cVar11;
  int *piVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  unsigned long long uVar17;
  int iVar18;
  int local_60 [2];
  unsigned short local_58 [2];
  short local_54 [8];
  short local_44 [34];
  
  piVar6 = piRam10117468;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  uVar17 = (unsigned long long)param_1;
  piVar12 = local_60;
  iVar7 = *piRam1011735c + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1);
  iVar7 = FUN_100186cc(*(short *)(iVar7 + 0x1604),*(short *)(iVar7 + 0x1606),
                       0xffffffffffffffff);
  local_58[0] = (unsigned short)(*(short *)(*piVar4 + 0x124) != 0);
  if (*(short *)(*piVar4 + 0x11a) == 0) {
    sVar10 = 1;
  }
  else {
    sVar10 = 8;
  }
  if (iVar7 < 5) {
    sVar16 = 2;
  }
  else {
    sVar16 = 0;
  }
  sVar16 = (unsigned short)(iVar7 < 0xf) + sVar16;
  if (*(short *)(*piVar6 + 0x48) != 0) {
    sVar16 = sVar16 + 2;
  }
  sVar14 = 0;
  iVar7 = 7;
  do {
    sVar14 = sVar14 + *(short *)(*piVar6 + iVar7 * 2 + 0x40c);
    bVar1 = iVar7 != 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
  } while (bVar1);
  local_60[1] = 2;
  local_60[0] = (int)sVar14;
  if (2 < local_60[0]) {
    piVar12 = local_60 + 1;
  }
  sVar16 = sVar16 + (short)*piVar12;
  iVar7 = 7;
  do {
    local_54[iVar7] = -1;
    local_44[iVar7] = -1;
    bVar1 = iVar7 != 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
  } while (bVar1);
  sVar14 = *(short *)(*piVar4 + 0x182);
  iVar18 = 0;
  iVar7 = 0;
  sVar15 = sVar16;
  if (sVar14 != 0) {
    do {
      sVar14 = sVar14 + -1;
      iVar18 = *piVar5;
      iVar9 = sVar14 * 0x16;
      iVar13 = iVar18 + iVar9;
      if ((((*(char *)(iVar13 + 5) == (char)*(short *)(*piVar4 + 0x110)) &&
           ((*(unsigned int *)(iVar13 + 0xc) >> 9 & 7) == 0)) && ((*(unsigned short *)(iVar13 + 0xc) & 0x40) == 0))
         && ((((*(unsigned int *)(iVar13 + 0xc) >> 0xc & 0xf) == 0 &&
              (iVar3 = *piVar4 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1),
              *(short *)(iVar9 + iVar18) == *(short *)(iVar3 + 0x1604))) &&
             (*(short *)(iVar13 + 2) == *(short *)(iVar3 + 0x1606))))) {
        if (sVar15 == 0) {
          sVar8 = (short)iVar7 + 1;
          local_44[iVar7] = sVar14;
          iVar18 = (int)sVar8;
          iVar7 = (int)sVar8;
          if (7 < sVar8) break;
        }
        else {
          sVar15 = sVar15 + -1;
        }
      }
      iVar18 = iVar7;
      iVar7 = iVar18;
    } while (sVar14 != 0);
  }
  if (iVar18 == 0) {
    return 0;
  }
  iVar7 = 0;
  while( true ) {
    iVar9 = -1;
    cVar11 = '\0';
    iVar18 = 7;
    do {
      sVar14 = local_44[iVar18];
      if ((sVar14 != -1) && (cVar2 = *(char *)(*piVar5 + sVar14 * 0x16 + 6), cVar11 < cVar2)) {
        iVar9 = iVar18;
        cVar11 = cVar2;
      }
      bVar1 = iVar18 != 0;
      iVar18 = (int)(short)((short)iVar18 + -1);
    } while (bVar1);
    if (iVar9 == -1) break;
    local_54[iVar7] = local_44[iVar9];
    local_44[iVar9] = -1;
    iVar7 = (int)(short)((short)iVar7 + 1);
  }
  do {
    iVar18 = 0;
    iVar7 = 7;
    do {
      local_44[iVar7] = -1;
      bVar1 = iVar7 != 0;
      iVar7 = (int)(short)((short)iVar7 + -1);
    } while (bVar1);
    iVar7 = 0;
    do {
      if (sVar10 <= iVar18) break;
      if (local_54[iVar7] != -1) {
        local_44[iVar18] = local_54[iVar7];
        local_54[iVar7] = -1;
        iVar18 = (int)(short)((short)iVar18 + 1);
      }
      sVar14 = (short)iVar7 + 1;
      iVar7 = (int)sVar14;
    } while (sVar14 < 8);
    if (iVar18 == 0) {
      return local_58[0];
    }
    if (((sVar16 == 0) && (*(short *)(*piVar4 + 0x124) != 0)) &&
       (iVar7 = *piVar4 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1),
       iVar7 = FUN_100186cc(*(short *)(iVar7 + 0x1604),*(short *)(iVar7 + 0x1606),
                            0xffffffffffffffff), iVar7 < 0xf)) {
      return local_58[0];
    }
    FUN_10018800(uVar17,iVar18,param_2,local_44,local_58);
  } while( true );
}

/* Address: 0x10018f00 Size: 384 bytes */
void FUN_10018f00(short param_1,short param_2,short param_3,short *param_4,short *param_5,
                 short *param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  
  piVar2 = piRam10117360;
  piVar1 = piRam10117354;
  iVar3 = param_1 * 0x16;
  if (*psRam10117710 == 2) {
    sVar4 = 2;
  }
  else {
    sVar4 = FUN_1000a884(*(short *)(*piRam10117360 + iVar3),
                         *(short *)(*piRam10117360 + iVar3 + 2),param_2,param_3);
  }
  if ((sVar4 < 4) &&
     ((((*(unsigned short *)(*piVar2 + param_1 * 0x16 + 0xc) & 0x1000) == 0 ||
       (iVar3 = FUN_10042a24(param_2,param_3), iVar3 != 0)) &&
      (sVar4 = param_2 + -1, (int)sVar4 <= param_2 + 1)))) {
    do {
      sVar5 = param_3 + -1;
      if ((int)sVar5 <= param_3 + 1) {
        do {
          if (((-1 < sVar4) && (-1 < sVar5)) &&
             ((sVar4 < 0x70 &&
              ((sVar5 < 0x9c && ((*(unsigned int *)(*piVar1 + sVar5 * 0x70 + (int)sVar4) >> 0x1d & 1) != 0))
              )))) {
            *param_4 = 1;
            *param_5 = param_2;
            *param_6 = param_3;
          }
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 <= param_3 + 1);
      }
      sVar4 = sVar4 + 1;
    } while ((int)sVar4 <= param_2 + 1);
  }
  return;
}

/* Address: 0x10019080 Size: 244 bytes */
void FUN_10019080(short param_1,short param_2,short param_3,short *param_4,short *param_5,
                 short *param_6)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  
  piVar1 = piRam10117354;
  if (*param_4 == 0) {
    if ((*(unsigned short *)(*piRam10117360 + param_1 * 0x16 + 0xc) & 0x1000) != 0) {
      return;
    }
    sVar2 = param_2 + -1;
    if ((int)sVar2 <= param_2 + 1) {
      do {
        sVar3 = param_3 + -1;
        if ((int)sVar3 <= param_3 + 1) {
          do {
            if ((((-1 < sVar2) && (-1 < sVar3)) && (sVar2 < 0x70)) &&
               ((sVar3 < 0x9c && ((*(unsigned int *)(*piVar1 + sVar3 * 0x70 + (int)sVar2) >> 0x1d & 1) != 0)
                ))) {
              *param_4 = 2;
              *param_5 = param_2;
              *param_6 = param_3;
            }
            sVar3 = sVar3 + 1;
          } while ((int)sVar3 <= param_3 + 1);
        }
        sVar2 = sVar2 + 1;
      } while ((int)sVar2 <= param_2 + 1);
    }
  }
  return;
}

/* Address: 0x10019174 Size: 1444 bytes */
short
FUN_10019174(short param_1,short *param_2,short *param_3,short *param_4,long long param_5,
            long long param_6)

{
  int bVar1;
  char cVar2;
  short sVar3;
  short uVar4;
  short uVar5;
  short sVar6;
  unsigned int uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  unsigned long long uVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  unsigned long long uVar23;
  unsigned long long uVar24;
  unsigned long long uVar25;
  short *psStack0000001c;
  short *psStack00000020;
  short local_50;
  
  piVar10 = piRam10117360;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117354;
  uVar11 = ZEXT48(0 /* TVect base */);
  iVar20 = (int)param_1;
  sVar6 = *(short *)(*piRam10117360 + iVar20 * 0x16);
  iVar21 = (int)sVar6;
  iVar16 = *piRam10117360 + iVar20 * 0x16;
  sVar3 = *(short *)(iVar16 + 2);
  iVar22 = (int)sVar3;
  iVar12 = *piRam1011735c + *(char *)(iVar16 + 9) * 0x42;
  uVar4 = *(short *)(iVar12 + 0x1604);
  uVar5 = *(short *)(iVar12 + 0x1606);
  local_50 = 0;
  sVar19 = 0;
  bVar1 = (*(unsigned short *)(iVar16 + 0xc) & 0x1000) != 0;
  *param_4 = 0;
  psStack0000001c = param_2;
  psStack00000020 = param_3;
  iVar12 = FUN_1005f230(1,4,0xffffffffffffffff);
  if ((((iVar12 == 0) &&
       (*(char *)(*piVar9 + (*(unsigned int *)(**(int **)((int)uVar11 + -0x548) + iVar22 * 0xe0 + iVar21 * 2
                                      ) >> 0x18) + 0x711) == '\n')) &&
      (iVar12 = FUN_10042a24(iVar21,iVar22), iVar12 != 0)) &&
     (*(char *)(*piVar10 + param_1 * 0x16 + 4) != '\x1c')) {
    bVar1 = true;
  }
  sVar18 = sVar6 + -5;
  if ((int)sVar18 < sVar6 + 5) {
    do {
      uVar23 = (unsigned long long)sVar18;
      sVar13 = sVar3 + -5;
      if ((int)sVar13 < sVar3 + 5) {
        do {
          uVar24 = (unsigned long long)sVar13;
          if (((-1 < sVar18) && (-1 < sVar13)) && ((sVar18 < 0x70 && (sVar13 < 0x9c)))) {
            uVar7 = *(unsigned int *)(**(int **)((int)uVar11 + -0x548) +
                              (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 & 0xffffffff) << 5) +
                             (int)((uVar23 & 0xffffffff) << 1));
            if ((*(char *)(*piVar9 + (uVar7 >> 0x18) + 0x711) == '\n') &&
               ((uVar7 >> 0x10 & 0xf) != (int)*(short *)(*piVar9 + 0x110))) {
              FUN_10018f00(iVar20,uVar23,uVar24,param_4,param_5,param_6);
            }
            if (*(char *)(*piVar9 + (*(unsigned int *)(**(int **)((int)uVar11 + -0x548) +
                                               (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 &
                                                     0xffffffff) << 5) +
                                              (int)((uVar23 & 0xffffffff) << 1)) >> 0x18) + 0x711)
                == '\v') {
              FUN_10019080(iVar20,uVar23,uVar24,param_4,param_5,param_6);
            }
            iVar12 = (int)uVar11;
            cVar2 = *(char *)(*piVar9 + (*(unsigned int *)(**(int **)(iVar12 + -0x548) +
                                                   (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 &
                                                         0xffffffff) << 5) +
                                                  (int)((uVar23 & 0xffffffff) << 1)) >> 0x18) +
                             0x711);
            if ((cVar2 != '\n') &&
               (((((**(short **)(iVar12 + -400) == 2 ||
                   ((*(unsigned int *)(*piVar8 + (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 & 0xffffffff) <<
                                              4) + (int)sVar18) >> 0x18 & 0x1f) != 0)) ||
                  ((**(unsigned short **)(iVar12 + -0x2ec) & 1) != 0)) || (cVar2 != '\x05')) &&
                (((*(unsigned int *)(*piVar8 + (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 & 0xffffffff) << 4)
                            + (int)sVar18) >> 0x1d & 1) == 0 &&
                 ((**(short **)(iVar12 + -400) == 2 ||
                  (*(short *)(*(char *)(*piVar9 + (*(unsigned int *)(**(int **)(iVar12 + -0x548) +
                                                             (int)(((uVar24 & 0x1fffffff) * 8 -
                                                                    uVar24 & 0xffffffff) << 5) +
                                                            (int)((uVar23 & 0xffffffff) << 1)) >>
                                                  0x18) + 0x711) * 2 + *(int *)(iVar12 + -0x1a1c))
                   != 0)))))))) {
              sVar14 = sVar18 + -1;
              uVar25 = 0;
              if ((int)sVar14 <= sVar18 + 1) {
                do {
                  sVar17 = sVar13 + -1;
                  if ((int)sVar17 <= sVar13 + 1) {
                    do {
                      if (((-1 < sVar14) && (-1 < sVar17)) &&
                         ((sVar14 < 0x70 &&
                          ((sVar17 < 0x9c &&
                           ((*(unsigned int *)(*piVar8 + sVar17 * 0x70 + (int)sVar14) >> 0x1d & 1) == 0)))))
                         ) {
                        uVar25 = (unsigned long long)(short)((short)uVar25 + 1);
                      }
                      sVar17 = sVar17 + 1;
                    } while ((int)sVar17 <= sVar13 + 1);
                  }
                  sVar14 = sVar14 + 1;
                } while ((int)sVar14 <= sVar18 + 1);
              }
              if (1 < (int)uVar25) {
                cVar2 = *(char *)(*piVar9 + (*(unsigned int *)(**(int **)(iVar12 + -0x548) +
                                                       (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 &
                                                             0xffffffff) << 5) +
                                                      (int)((uVar23 & 0xffffffff) << 1)) >> 0x18) +
                                 0x711);
                sVar14 = 0;
                if (bVar1) {
                  if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
                    sVar14 = 200;
                  }
                }
                else if ((cVar2 != '\x02') && (cVar2 != '\x03')) {
                  if (cVar2 != '\x05') {
                    sVar14 = 100;
                  }
                  if ((*(unsigned int *)(*piVar8 + (int)(((uVar24 & 0x1fffffff) * 8 - uVar24 & 0xffffffff)
                                                << 4) + (int)sVar18) >> 0x18 & 0x1f) != 0) {
                    sVar14 = sVar14 + 200;
                  }
                }
                sVar17 = FUN_1000a884(uVar23,uVar24,iVar21,iVar22);
                uVar24 = FUN_1000a884(uVar23,uVar24,uVar4,uVar5);
                sVar15 = FUN_1005f230(1,10,0);
                sVar17 = sVar15 + sVar17 * 2 + (short)uVar24 +
                         (short)(((uVar25 & 0x3fffffff) * 4 + uVar25 & 0xffffffff) << 1) + sVar14;
                if ((bVar1) && (sVar14 != 0)) {
                  if (0x32 < (int)uVar24) {
                    uVar24 = 0x32;
                  }
                  sVar17 = sVar17 + (short)(((uVar24 & 0x3fffffff) * 4 + uVar24 & 0xffffffff) << 1);
                }
                if (sVar19 < sVar17) {
                  *psStack0000001c = sVar18;
                  *psStack00000020 = sVar13;
                  local_50 = 1;
                  sVar19 = sVar17;
                }
              }
            }
          }
          sVar13 = sVar13 + 1;
        } while ((int)sVar13 < sVar3 + 5);
      }
      sVar18 = sVar18 + 1;
    } while ((int)sVar18 < sVar6 + 5);
  }
  return local_50;
}

/* Address: 0x10019718 Size: 808 bytes */
long long FUN_10019718(short param_1,short param_2,short param_3)

{
  int bVar1;
  long long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  unsigned long long uVar7;
  int *ppuVar8;
  int iVar10;
  long long uVar9;
  long long lVar11;
  short sVar12;
  int iVar13;
  unsigned short uVar14;
  int iVar15;
  short local_40 [8];
  unsigned short local_30;
  short local_2e;
  
  piVar6 = piRam10117468;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  uVar7 = ZEXT48(0 /* TVect base */);
  ppuVar8 = 0 /* TVect base */;
  sVar12 = *(short *)(*piRam1011735c + 0x1602);
  while (iVar15 = -1, sVar12 != 0) {
    sVar12 = sVar12 + -1;
    iVar15 = (int)sVar12;
    iVar10 = *piVar4;
    iVar13 = iVar10 + (sVar12 * 0x20 + (int)sVar12) * 2;
    lVar2 = -(long long)
             *(char *)(iVar10 + (*(unsigned int *)(*piVar3 + *(short *)(iVar13 + 0x1606) * 0xe0 +
                                          *(short *)(iVar13 + 0x1604) * 2) >> 0x18) + 0x711);
    lVar11 = lVar2 + 10;
    if (((((lVar11 + (-(unsigned long long)(lVar11 == 0) - (lVar2 + 9)) & 0xff) == 0) &&
         ((int)*(char *)(iVar13 + 0x1619) != (int)*(short *)(iVar10 + 0x110))) &&
        (sVar12 != *(short *)(*piVar6 + 0x46))) &&
       (iVar10 = FUN_1000a884((int)*(short *)(iVar13 + 0x1604),(int)*(short *)(iVar13 + 0x1606),
                              param_2,param_3), iVar10 < 3)) {
      iVar10 = FUN_100121f8(iVar15);
      ppuVar8 = (int **)uVar7;
      if (iVar10 != 0) {
        if ((*(unsigned char *)(*piVar6 + (int)sVar12 + 0x11e) & 1) == 0) break;
        FUN_1001f894(iVar15);
        ppuVar8 = (int **)uVar7;
        if ((*(unsigned char *)((int)sVar12 + *piVar6 + 0x11e) & 1) == 0) break;
      }
    }
    ppuVar8 = (int **)uVar7;
  }
  if (iVar15 == -1) {
    uVar9 = 0;
  }
  else {
    iVar10 = 7;
    do {
      local_40[iVar10] = -1;
      bVar1 = iVar10 != 0;
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (bVar1);
    local_40[0] = param_1;
    FUN_1001e160(local_40,4,0,0x20);
    iVar10 = *piVar4 + iVar15 * 0x42;
    iVar10 = FUN_1001eff8(*(short *)(iVar10 + 0x1604),*(short *)(iVar10 + 0x1606));
    iVar13 = *piVar5 + param_1 * 0x16;
    if ((*(char *)(iVar13 + 4) == '\x1c') || ('\x03' < *(char *)(iVar13 + 8))) {
      iVar13 = 0x4b;
    }
    else if ((int)*(short *)(*piVar6 + 6) < (int)*(short *)(*piVar4 + 0x1602) / 10) {
      iVar13 = 0x32;
    }
    else {
      local_30 = *(unsigned short *)(*piVar4 + 0x136);
      uVar14 = local_30;
      if ((short)local_30 < 2) {
        uVar14 = 1;
      }
      local_2e = 10;
      sVar12 = ((short)uVar14 >> 1) + (unsigned short)((short)uVar14 < 0 && (uVar14 & 1) != 0);
      if (10 < sVar12) {
        sVar12 = 10;
      }
      if (sVar12 < *(short *)(*piVar6 + 2)) {
        iVar13 = 0x4b;
      }
      else {
        iVar13 = 0x28;
      }
    }
    if (iVar10 < iVar13) {
      uVar9 = 0;
    }
    else {
      iVar10 = 7;
      do {
        local_40[iVar10] = -1;
        bVar1 = iVar10 != 0;
        iVar10 = (int)(short)((short)iVar10 + -1);
      } while (bVar1);
      iVar10 = *piVar5 + param_1 * 0x16;
      *(unsigned short *)(iVar10 + 0xc) = *(unsigned short *)(iVar10 + 0xc) & 0xffdf;
      local_40[0] = param_1;
      FUN_1001e160(local_40,1,iVar15,0x80);
      FUN_10018180(*(short *)(*(int *)(*(int*)((char*)ppuVar8 - 0x70)) + 0x12),
                   *(short *)(*(int *)(*(int*)((char*)ppuVar8 - 0x70)) + 0x14),0);
      uVar9 = 1;
    }
  }
  return uVar9;
}

/* Address: 0x10019a40 Size: 924 bytes */
long long FUN_10019a40(short param_1,short param_2,short param_3)

{
  int bVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *ppuVar7;
  long long uVar8;
  unsigned short uVar10;
  int iVar9;
  unsigned short uVar11;
  int iVar12;
  int iVar13;
  short local_40 [8];
  short local_30 [24];
  
  piVar6 = piRam101176e0;
  piVar5 = piRam10117364;
  piVar4 = piRam10117360;
  piVar3 = piRam1011735c;
  ppuVar7 = 0 /* TVect base */;
  iVar13 = (int)param_1;
  uVar8 = FUN_10016bc0((int)param_2,(int)param_3,local_30);
  if (((int)uVar8 == -1) || ((*(unsigned short *)(*piVar4 + param_1 * 0x16 + 0xc) & 0x1000) != 0)) {
    return 0;
  }
  if ((local_30[0] == 1) &&
     (uVar10 = FUN_10015980(uVar8), (*(unsigned short *)(*piVar4 + param_1 * 0x16 + 0xc) & uVar10) != 0)) {
    return 0;
  }
  if ((*(char *)(*piVar4 + param_1 * 0x16 + 4) != '\x1c') && (local_30[0] != 1)) {
    return 0;
  }
  uVar10 = (unsigned short)((unsigned int)*(int *)(*(int *)(*(int*)((char*)ppuVar7 - 0x152)) + param_3 * 0xe0 + param_2 * 2) >>
                   0x10) & 0xf;
  if ((uVar10 != 0xf) && (uVar10 != *(unsigned short *)(*piVar3 + 0x110))) {
    return 0;
  }
  iVar9 = 7;
  do {
    local_40[iVar9] = -1;
    bVar1 = iVar9 != 0;
    iVar9 = (int)(short)((short)iVar9 + -1);
  } while (bVar1);
  local_40[0] = param_1;
  FUN_1001e160(local_40,4,0,0);
  *(short *)(*piVar6 + 0x12) = param_2;
  *(short *)(*piVar6 + 0x14) = param_3;
  iVar9 = FUN_10018180(*(short *)(*piVar6 + 0x12),*(short *)(*piVar6 + 0x14),0);
  if (iVar9 == 1) {
    return 0;
  }
  if ((*(short *)(*piVar4 + iVar13 * 0x16) == param_2) &&
     (*(short *)(*piVar4 + iVar13 * 0x16 + 2) == param_3)) {
    iVar9 = *piVar4 + iVar13 * 0x16;
    *piVar6 = iVar9;
    if (*(char *)(iVar9 + 4) == '\x1c') {
      FUN_10013a10(iVar13,uVar8);
    }
    else {
      FUN_1005447c();
    }
    if ((local_30[0] == 5) && (sVar2 = *(short *)(*piVar3 + 0x182), sVar2 != 0)) {
      do {
        sVar2 = sVar2 + -1;
        iVar9 = sVar2 * 0x16;
        iVar12 = *piVar4 + iVar9;
        if (((*(char *)(iVar12 + 5) == (char)*(short *)(*piVar3 + 0x110)) &&
            ((((*(unsigned int *)(iVar12 + 0xc) >> 0xc & 0xf) == 0 &&
              (*(char *)(*piVar5 + *(char *)(iVar12 + 4) * 6 + 4) != '\0')) &&
             (*(short *)(iVar9 + *piVar4) == param_2)))) && (*(short *)(iVar12 + 2) == param_3)) {
          *(unsigned short *)(iVar12 + 0xc) = *(unsigned short *)(iVar12 + 0xc) | 0x20;
        }
      } while (sVar2 != 0);
    }
  }
  else {
    if (local_30[0] == 1) {
      uVar10 = *(unsigned short *)(*piVar4 + iVar13 * 0x16 + 0xc);
      if ((uVar10 & 0x1000) != 0) {
        uVar11 = FUN_10015980(uVar8);
        *(unsigned short *)(*piVar4 + iVar13 * 0x16 + 0xc) = uVar10 | uVar11;
      }
    }
    iVar9 = *piVar4 + iVar13 * 0x16;
    *(unsigned short *)(iVar9 + 0xc) = *(unsigned short *)(iVar9 + 0xc) | 0x40;
  }
  iVar13 = iVar13 * 0x16;
  *(unsigned short *)(*piVar4 + iVar13 + 0xc) = *(unsigned short *)(*piVar4 + iVar13 + 0xc) | 0x20;
  *(unsigned int *)(iVar13 + *piVar4 + 0xc) = *(unsigned int *)(iVar13 + *piVar4 + 0xc) & 0xffff0fff;
  *(unsigned int *)(iVar13 + *piVar4 + 0xc) = *(unsigned int *)(iVar13 + *piVar4 + 0xc) & 0xffffff80;
  *(short *)(iVar13 + *piVar4 + 0x14) = 0xffff;
  *(short *)(iVar13 + *piVar4 + 0x12) = *(short *)(iVar13 + *piVar4 + 0x14);
  return 1;
}

/* Address: 0x10019e00 Size: 276 bytes */
void FUN_10019e00(short param_1,short param_2,short param_3)

{
  int *piVar1;
  int *ppuVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = piRam10117360;
  ppuVar2 = 0 /* TVect base */;
  iVar4 = param_1 * 0x16;
  *(short *)(*piRam10117360 + iVar4 + 0x12) = param_2;
  *(short *)(iVar4 + *piVar1 + 0x14) = param_3;
  FUN_10055c64(iVar4 + *piVar1);
  iVar3 = FUN_10018180(*(short *)(*(int *)(*(int*)((char*)ppuVar2 - 0x70)) + 0x12),
                       *(short *)(*(int *)(*(int*)((char*)ppuVar2 - 0x70)) + 0x14),0);
  if (iVar3 == 1) {
    *(unsigned short *)(*piVar1 + iVar4 + 0xc) = *(unsigned short *)(*piVar1 + iVar4 + 0xc) & 0xffdf;
    *(unsigned int *)(*piVar1 + iVar4 + 0xc) = *(unsigned int *)(*piVar1 + iVar4 + 0xc) & 0xffff0fff;
    *(unsigned int *)(iVar4 + *piVar1 + 0xc) = *(unsigned int *)(iVar4 + *piVar1 + 0xc) & 0xffffff80;
  }
  iVar3 = param_1 * 0x16;
  *(unsigned short *)(*piVar1 + iVar3 + 0xc) = *(unsigned short *)(*piVar1 + iVar3 + 0xc) | 0x40;
  *(short *)(iVar3 + *piVar1 + 0x14) = 0xffff;
  *(short *)(iVar3 + *piVar1 + 0x12) = *(short *)(iVar3 + *piVar1 + 0x14);
  *(char *)(iVar3 + *piVar1 + 0x11) = 0;
  return;
}

/* Address: 0x10019f14 Size: 396 bytes */
int FUN_10019f14(short param_1,short *param_2,short *param_3)

{
  int bVar1;
  short uVar2;
  short sVar3;
  short uVar4;
  long long lVar5;
  unsigned long long uVar6;
  short sVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short sVar11;
  short sVar12;
  long long lVar13;
  int iVar14;
  int iVar15;
  unsigned long long uVar16;
  
  piVar10 = piRam10117468;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  uVar4 = *(short *)(*piRam10117360 + param_1 * 0x16);
  uVar2 = *(short *)(*piRam10117360 + param_1 * 0x16 + 2);
  sVar3 = *(short *)(*piRam1011735c + 0x1602);
  uVar6 = 0xffffffffffffffff;
  sVar7 = 10000;
  while (sVar3 != 0) {
    sVar3 = sVar3 + -1;
    uVar16 = (unsigned long long)sVar3;
    iVar14 = *piVar9 + (int)(((uVar16 & 0x7ffffff) * 0x20 + uVar16 & 0xffffffff) << 1);
    iVar15 = (int)*(short *)(iVar14 + 0x1604);
    iVar14 = (int)*(short *)(iVar14 + 0x1606);
    lVar5 = -(long long)
             *(char *)(*piVar9 + (*(unsigned int *)(*piVar8 + iVar14 * 0xe0 + iVar15 * 2) >> 0x18) + 0x711);
    lVar13 = lVar5 + 10;
    if (((lVar13 + (-(unsigned long long)(lVar13 == 0) - (lVar5 + 9)) & 0xff) == 0) &&
       ((*(unsigned char *)(*piVar10 + (int)sVar3 + 0x11e) & 1) != 0)) {
      sVar11 = FUN_1000a884(iVar15,iVar14,uVar4,uVar2);
      sVar12 = FUN_1005f230(1,10,0);
      if ((short)(sVar11 + sVar12) < sVar7) {
        uVar6 = uVar16;
        sVar7 = sVar11 + sVar12;
      }
    }
  }
  bVar1 = (int)uVar6 != -1;
  if (bVar1) {
    iVar14 = (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1);
    *param_2 = *(short *)(*piVar9 + iVar14 + 0x1604) + -1;
    *param_3 = *(short *)(iVar14 + *piVar9 + 0x1606) + -1;
  }
  return bVar1;
}

/* Address: 0x1001a0a0 Size: 140 bytes */
unsigned char FUN_1001a0a0(short param_1,int param_2)

{
  int bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char abStack_18 [8];
  char auStack_10 [16];
  
  iVar3 = FUN_10018574(param_1,abStack_18,auStack_10);
  if (iVar3 != 0) {
    iVar3 = 5;
    do {
      bVar2 = abStack_18[iVar3];
      if ((bVar2 != 0xff) && (*(char *)(param_2 + (unsigned int)bVar2) < '\x03')) {
        return bVar2;
      }
      bVar1 = iVar3 != 0;
      iVar3 = (int)(short)((short)iVar3 + -1);
    } while (bVar1);
  }
  return 0xff;
}

/* Address: 0x1001a470 Size: 1012 bytes */
void FUN_1001a470(short param_1,short param_2)

{
  int bVar1;
  int bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  char cVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  unsigned long long uVar19;
  int iVar20;
  short local_40 [8];
  short local_30;
  
  piVar9 = piRam10117468;
  piVar8 = piRam10117364;
  piVar7 = piRam10117360;
  piVar6 = piRam1011735c;
  uVar19 = (unsigned long long)param_1;
  iVar11 = *piRam1011735c + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1);
  sVar17 = *(short *)(iVar11 + 0x1604);
  sVar4 = *(short *)(iVar11 + 0x1606);
  iVar10 = FUN_100186cc(sVar17,sVar4,0xffffffffffffffff);
  iVar14 = 0;
  bVar2 = false;
  iVar11 = 3;
  do {
    if (*(short *)(*piVar9 + iVar11 * 0x5c + 0x24c) != 0) {
      bVar2 = true;
    }
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  if (iVar10 < 5) {
    sVar12 = 2;
  }
  else {
    sVar12 = 0;
  }
  sVar12 = (unsigned short)(iVar10 < 0xf) + sVar12;
  if (*(short *)(*piVar9 + 0x48) != 0) {
    sVar12 = sVar12 + 2;
  }
  sVar16 = 0;
  iVar11 = 7;
  do {
    sVar16 = sVar16 + *(short *)(*piVar9 + iVar11 * 2 + 0x40c);
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  local_30 = 2;
  if (2 < sVar16) {
    sVar16 = 2;
  }
  iVar11 = 7;
  do {
    local_40[iVar11 + -8] = -1;
    local_40[iVar11] = -1;
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  sVar5 = *(short *)(*piVar6 + 0x182);
  iVar11 = 0;
  sVar13 = sVar12 + sVar16;
  if (sVar5 != 0) {
    do {
      sVar5 = sVar5 + -1;
      iVar20 = (int)sVar5;
      iVar10 = *piVar7 + iVar20 * 0x16;
      if ((((((*(char *)(iVar10 + 5) == (char)*(short *)(*piVar6 + 0x110)) &&
             ((*(unsigned int *)(iVar10 + 0xc) >> 9 & 7) == 0)) && ((*(unsigned short *)(iVar10 + 0xc) & 0x40) == 0)
            ) && (((*(char *)(iVar10 + 4) != '\x1c' || (!bVar2)) &&
                  ((iVar10 = *piVar7 + iVar20 * 0x16, (*(unsigned int *)(iVar10 + 0xc) >> 0xc & 0xf) == 0 &&
                   ((param_2 == 0 || (*(char *)(*piVar8 + *(char *)(iVar10 + 4) * 6) != '\0'))))))))
          && (*(short *)(*piVar7 + iVar20 * 0x16) == sVar17)) &&
         (*(short *)(*piVar7 + iVar20 * 0x16 + 2) == sVar4)) {
        if (sVar13 == 0) {
          sVar18 = (short)iVar11 + 1;
          local_40[iVar11] = sVar5;
          iVar14 = (int)sVar18;
          iVar11 = (int)sVar18;
          if (7 < sVar18) break;
        }
        else {
          sVar13 = sVar13 + -1;
        }
      }
      iVar14 = iVar11;
      iVar11 = iVar14;
    } while (iVar20 != 0);
  }
  if (iVar14 == 0) {
    return;
  }
  iVar11 = 0;
  while( true ) {
    iVar14 = -1;
    cVar15 = '\0';
    iVar10 = 7;
    do {
      if ((local_40[iVar10] != -1) &&
         (cVar3 = *(char *)(*piVar7 + local_40[iVar10] * 0x16 + 6), cVar15 < cVar3)) {
        iVar14 = iVar10;
        cVar15 = cVar3;
      }
      bVar2 = iVar10 != 0;
      iVar10 = (int)(short)((short)iVar10 + -1);
    } while (bVar2);
    if (iVar14 == -1) break;
    local_40[iVar11 + -8] = local_40[iVar14];
    local_40[iVar14] = -1;
    iVar11 = (int)(short)((short)iVar11 + 1);
  }
  do {
    iVar11 = 7;
    do {
      local_40[iVar11] = -1;
      bVar2 = iVar11 != 0;
      iVar11 = (int)(short)((short)iVar11 + -1);
    } while (bVar2);
    iVar11 = 0;
    do {
      if (local_40[iVar11 + -8] != -1) {
        local_40[0] = local_40[iVar11 + -8];
        local_40[iVar11 + -8] = -1;
        break;
      }
      sVar17 = (short)iVar11 + 1;
      iVar11 = (int)sVar17;
    } while (sVar17 < 8);
    sVar17 = local_40[0];
    if (local_40[0] == -1) {
      return;
    }
    if ((((short)(sVar12 + sVar16) == 0) && (*(short *)(*piVar6 + 0x124) != 0)) &&
       (iVar11 = *piVar6 + (int)(((uVar19 & 0x7ffffff) * 0x20 + uVar19 & 0xffffffff) << 1),
       iVar11 = FUN_100186cc(*(short *)(iVar11 + 0x1604),*(short *)(iVar11 + 0x1606),
                             0xffffffffffffffff), iVar11 < 0xf)) {
      return;
    }
    FUN_1001a348(sVar17,uVar19);
  } while( true );
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1001acdc() { return 0; }








































/* Address: 0x1001af38 Size: 608 bytes */
short FUN_1001af38(short param_1)

{
  int bVar1;
  int bVar2;
  unsigned char bVar3;
  short uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  short sVar9;
  int iVar8;
  short sVar10;
  unsigned long long uVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  unsigned char abStack_30 [8];
  unsigned char abStack_28 [40];
  
  piVar6 = piRam10117468;
  piVar5 = piRam1011735c;
  iVar14 = *piRam10117468 + param_1 * 0x5c;
  sVar10 = *(short *)(iVar14 + 0x24e);
  uVar4 = *(short *)(iVar14 + 0x250);
  sVar13 = 0;
  uVar11 = 0;
  do {
    sVar9 = *(short *)(*piVar6 + param_1 * 0x5c + (int)((uVar11 & 0xffffffff) << 1) + 0x25a);
    iVar14 = (int)sVar10;
    if (sVar9 != -1) {
      if ((sVar9 == *(short *)(*piVar6 + 0x46)) ||
         (*(char *)(*piVar5 + sVar9 * 0x42 + 0x1619) != iVar14)) {
        *(short *)(*piVar6 + param_1 * 0x5c + (int)((uVar11 & 0xffffffff) << 1) + 0x25a) =
             0xffff;
      }
      else {
        sVar13 = sVar13 + 1;
      }
    }
    sVar9 = (short)uVar11 + 1;
    uVar11 = (unsigned long long)sVar9;
  } while (sVar9 < 6);
  FUN_1000da14(uVar4,0,abStack_30,abStack_28);
  iVar7 = 5;
  do {
    bVar3 = abStack_30[iVar7];
    if (((bVar3 != 0xff) && (*(char *)(*piVar5 + (unsigned int)bVar3 * 0x42 + 0x1619) == iVar14)) &&
       ((*(unsigned char *)((unsigned int)bVar3 + *piVar6 + 0x11e) & 1) == 0)) {
      bVar2 = true;
      iVar12 = 5;
      do {
        if (*(unsigned short *)(*piVar6 + param_1 * 0x5c + iVar12 * 2 + 0x25a) == (unsigned short)bVar3) {
          bVar2 = false;
        }
        bVar1 = iVar12 != 0;
        iVar12 = (int)(short)((short)iVar12 + -1);
      } while (bVar1);
      if (bVar2) {
        sVar13 = sVar13 + 1;
        iVar8 = -1;
        sVar10 = 0;
        iVar12 = 5;
        do {
          if (*(short *)(*piVar6 + param_1 * 0x5c + iVar12 * 2 + 0x25a) == -1) {
            sVar10 = -1;
            iVar8 = iVar12;
            break;
          }
          sVar9 = *(short *)(*piVar6 + param_1 * 0x5c + iVar12 * 2 + 0x272);
          if (sVar10 < sVar9) {
            iVar8 = iVar12;
            sVar10 = sVar9;
          }
          bVar2 = iVar12 != 0;
          iVar12 = (int)(short)((short)iVar12 + -1);
        } while (bVar2);
        if ((iVar8 != -1) && ((sVar10 == -1 || ((short)(unsigned short)abStack_28[iVar7] < sVar10)))) {
          *(unsigned short *)(*piVar6 + param_1 * 0x5c + iVar8 * 2 + 0x25a) = (unsigned short)bVar3;
          *(unsigned short *)(param_1 * 0x5c + *piVar6 + iVar8 * 2 + 0x272) = (unsigned short)abStack_28[iVar7];
        }
      }
    }
    bVar2 = iVar7 == 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
    if (bVar2) {
      return sVar13;
    }
  } while( true );
}

/* Address: 0x1001b198 Size: 452 bytes */
void FUN_1001b198(short param_1,long long param_2,long long param_3,short param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  short sVar3;
  int iVar4;
  int bVar5;
  int *piVar6;
  int *piVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned char local_38 [8];
  char auStack_30 [48];
  
  piVar7 = piRam10117468;
  piVar6 = piRam1011735c;
  iVar10 = *piRam10117468 + param_1 * 0x5c;
  uVar2 = *(unsigned short *)(iVar10 + 0x250);
  sVar3 = *(short *)(iVar10 + 0x24e);
  bVar5 = false;
  iVar10 = 0;
  sVar9 = 0;
  uVar12 = 0xffffffff;
  do {
    sVar8 = *(short *)(*piRam10117468 + param_1 * 0x5c + iVar10 * 2 + 0x25a);
    if (sVar8 != -1) {
      sVar9 = sVar9 + 1;
      param_4 = sVar8;
    }
    sVar8 = (short)iVar10 + 1;
    iVar10 = (int)sVar8;
  } while (sVar8 < 6);
  if (sVar9 == 1) {
    FUN_1000da14(param_4,0,local_38,auStack_30);
    iVar10 = 0;
    do {
      bVar1 = local_38[iVar10];
      if ((bVar1 != 0xff) && ((*(unsigned char *)((unsigned int)bVar1 + *piVar7 + 0x11e) & 1) == 0)) {
        if ((int)*(char *)(*piVar6 + (unsigned int)bVar1 * 0x42 + 0x1619) == (int)sVar3) {
          iVar11 = 0;
          do {
            iVar4 = *piVar7 + param_1 * 0x5c + iVar11 * 2;
            if (*(short *)(iVar4 + 0x25a) == -1) {
              *(unsigned short *)(iVar4 + 0x25a) = (unsigned short)bVar1;
              break;
            }
            sVar9 = (short)iVar11 + 1;
            iVar11 = (int)sVar9;
          } while (sVar9 < 6);
        }
        else {
          iVar11 = *piVar6;
          if ((int)*(char *)(iVar11 + (unsigned int)bVar1 * 0x42 + 0x1619) ==
              (int)*(short *)(iVar11 + 0x110)) {
            if (uVar2 == bVar1) {
              bVar5 = true;
            }
            iVar11 = FUN_1000f6a0((unsigned int)bVar1);
            if ((iVar11 == 0) && (uVar12 == 0xffffffff)) {
              uVar12 = (unsigned int)bVar1;
            }
          }
        }
      }
      sVar9 = (short)iVar10 + 1;
      iVar10 = (int)sVar9;
    } while (sVar9 < 6);
    if ((!bVar5) && (uVar12 != 0xffffffff)) {
      *(short *)(*piVar7 + param_1 * 0x5c + 0x250) = (short)uVar12;
    }
  }
  return;
}

/* Address: 0x1001b35c Size: 336 bytes */
int FUN_1001b35c(short param_1)

{
  int bVar1;
  unsigned char bVar2;
  short uVar3;
  short uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned char abStack_40 [8];
  char auStack_38 [56];
  
  piVar6 = piRam10117468;
  piVar5 = piRam1011735c;
  iVar8 = (int)*(short *)(*piRam10117468 + param_1 * 0x5c + 0x250);
  iVar11 = *piRam1011735c + iVar8 * 0x42;
  uVar3 = *(short *)(iVar11 + 0x1604);
  uVar4 = *(short *)(iVar11 + 0x1606);
  FUN_1000da14(iVar8,0,abStack_40,auStack_38);
  uVar9 = 0xffffffff;
  iVar8 = 1000;
  iVar11 = 5;
  do {
    bVar2 = abStack_40[iVar11];
    uVar10 = (unsigned int)bVar2;
    if (bVar2 != 0xff) {
      iVar7 = *piVar5;
      if ((((int)*(char *)(iVar7 + uVar10 * 0x42 + 0x1619) == (int)*(short *)(iVar7 + 0x110)) &&
          (iVar7 = FUN_1000f6a0(uVar10), iVar7 == 0)) &&
         (iVar7 = uVar10 * 0x42 + *piVar5,
         iVar7 = FUN_1000a884(*(short *)(iVar7 + 0x1604),*(short *)(iVar7 + 0x1606),uVar3,
                              uVar4), iVar7 < iVar8)) {
        uVar9 = uVar10;
        iVar8 = iVar7;
      }
    }
    bVar1 = iVar11 != 0;
    iVar11 = (int)(short)((short)iVar11 + -1);
  } while (bVar1);
  if (uVar9 == 0xffffffff) {
    FUN_1001ae14(param_1,1);
  }
  else {
    *(short *)(*piVar6 + param_1 * 0x5c + 0x250) = (short)uVar9;
  }
  return uVar9 != 0xffffffff;
}

/* Address: 0x1001b4ac Size: 216 bytes */
void FUN_1001b4ac(short param_1)

{
  int bVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short auStack_20 [4];
  short auStack_18 [12];
  
  piVar5 = piRam10117468;
  piVar4 = piRam10117360;
  piVar3 = piRam1011735c;
  iVar8 = 3;
  do {
    auStack_18[iVar8] = 0xffff;
    auStack_20[iVar8] = 0xffff;
    sVar2 = *(short *)(*piVar5 + param_1 * 0x5c + iVar8 * 2 + 0x28a);
    if (sVar2 != -1) {
      iVar6 = sVar2 * 0x16;
      iVar7 = *piVar4 + iVar6;
      if (((int)*(char *)(iVar7 + 5) == (int)*(short *)(*piVar3 + 0x110)) &&
         ((*(unsigned int *)(iVar7 + 0xc) >> 9 & 7) == (int)param_1 + 1U)) {
        auStack_20[iVar8] = *(short *)(*piVar4 + iVar6);
        auStack_18[iVar8] = *(short *)(iVar7 + 2);
      }
      else {
        *(short *)(*piVar5 + param_1 * 0x5c + iVar8 * 2 + 0x28a) = 0xffff;
      }
    }
    bVar1 = iVar8 != 0;
    iVar8 = (int)(short)((short)iVar8 + -1);
  } while (bVar1);
  return;
}

/* Address: 0x1001bdc8 Size: 468 bytes */
void FUN_1001bdc8(short param_1)

{
  int bVar1;
  unsigned char bVar2;
  short sVar3;
  short uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  unsigned long long uVar12;
  char auStack_50 [16];
  unsigned char abStack_40 [8];
  unsigned char abStack_38 [56];
  
  piVar7 = piRam101176e0;
  piVar6 = piRam10117468;
  piVar5 = piRam1011735c;
  iVar11 = *piRam10117468 + param_1 * 0x5c;
  sVar3 = *(short *)(iVar11 + 0x250);
  uVar4 = *(short *)(iVar11 + 0x2a4);
  iVar11 = 0;
  do {
    sVar10 = *(short *)(*piVar6 + param_1 * 0x5c + iVar11 * 2 + 0x292);
    uVar12 = (unsigned long long)sVar10;
    if ((sVar10 != -1) && (sVar10 != sVar3)) {
      if ((int)*(char *)(*piVar5 + (int)(((uVar12 & 0x7ffffff) * 0x20 + uVar12 & 0xffffffff) << 1) +
                        0x1619) == (int)*(short *)(*piVar5 + 0x110)) {
        FUN_1000da14(uVar12,0,abStack_38,abStack_40);
        sVar10 = 0;
        iVar8 = 5;
        do {
          bVar2 = abStack_38[iVar8];
          if (bVar2 != 0xff) {
            iVar9 = (int)*(char *)(*piVar5 + (unsigned int)bVar2 * 0x42 + 0x1619);
            if (((iVar9 != 0xf) && (iVar9 != *(short *)(*piVar5 + 0x110))) &&
               (abStack_40[iVar8] < 0x19)) {
              sVar10 = sVar10 + 1;
            }
          }
          bVar1 = iVar8 != 0;
          iVar8 = (int)(short)((short)iVar8 + -1);
        } while (bVar1);
        if (sVar10 == 0) {
          FUN_10010b30(uVar12,1);
          iVar8 = *piVar5 + (int)(((uVar12 & 0x7ffffff) * 0x20 + uVar12 & 0xffffffff) << 1);
          iVar8 = FUN_1001ee88(*(short *)(iVar8 + 0x1604) + 1,*(short *)(iVar8 + 0x1606),
                               auStack_50,0,0,uVar4);
          if (3 < iVar8) {
            FUN_1001e160(auStack_50,1,sVar3,0);
            FUN_10018180(*(short *)(*piVar7 + 0x12),*(short *)(*piVar7 + 0x14),0);
          }
        }
      }
    }
    sVar10 = (short)iVar11 + 1;
    iVar11 = (int)sVar10;
  } while (sVar10 < 6);
  return;
}

/* Address: 0x1001bfa0 Size: 828 bytes */
long long FUN_1001bfa0(short param_1,short param_2)

{
  unsigned char bVar1;
  int bVar2;
  int *piVar3;
  int *piVar4;
  long long uVar5;
  short sVar6;
  long long lVar7;
  int bVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  short sStack0000001e;
  unsigned char local_38 [8];
  unsigned char local_30 [48];
  
  piVar4 = piRam10117468;
  piVar3 = piRam1011735c;
  sVar11 = *(short *)(*piRam10117468 + param_1 * 0x5c + 0x250);
  lVar7 = (long long)sVar11;
  if (sVar11 == param_2) {
    uVar5 = 0;
  }
  else {
    sVar11 = *(short *)(*piRam10117468 + param_1 * 0x5c + 0x24e);
    bVar2 = false;
    sStack0000001e = param_2;
    FUN_10010b30(param_2,1);
    iVar9 = 0;
    do {
      iVar12 = *piVar4 + param_1 * 0x5c + iVar9 * 2;
      if (*(short *)(iVar12 + 0x25a) == sStack0000001e) {
        *(short *)(iVar12 + 0x25a) = 0xffff;
        break;
      }
      sVar10 = (short)iVar9 + 1;
      iVar9 = (int)sVar10;
    } while (sVar10 < 6);
    FUN_1000da14(sStack0000001e,0,local_38,local_30);
    sVar10 = 0;
    iVar9 = 0;
    do {
      bVar1 = local_38[iVar9];
      iVar12 = (int)sVar11;
      if ((bVar1 != 0xff) && (*(char *)(*piVar3 + (unsigned int)bVar1 * 0x42 + 0x1619) == iVar12)) {
        if (local_30[iVar9] < 10) {
          sVar10 = sVar10 + 1;
        }
        if (local_30[iVar9] < 0x14) {
          sVar10 = sVar10 + 1;
        }
        if (local_30[iVar9] < 0x1e) {
          sVar10 = sVar10 + 1;
        }
        if (local_30[iVar9] < 0x32) {
          sVar10 = sVar10 + 1;
        }
      }
      sVar6 = (short)iVar9 + 1;
      iVar9 = (int)sVar6;
    } while (sVar6 < 6);
    FUN_1000da14(lVar7,0,local_38,local_30);
    sVar11 = 0;
    iVar9 = 0;
    do {
      bVar1 = local_38[iVar9];
      if ((bVar1 != 0xff) && (*(char *)(*piVar3 + (unsigned int)bVar1 * 0x42 + 0x1619) == iVar12)) {
        if (local_30[iVar9] < 10) {
          sVar11 = sVar11 + 1;
        }
        if (local_30[iVar9] < 0x14) {
          sVar11 = sVar11 + 1;
        }
        if (local_30[iVar9] < 0x1e) {
          sVar11 = sVar11 + 1;
        }
        if (local_30[iVar9] < 0x32) {
          sVar11 = sVar11 + 1;
        }
      }
      sVar6 = (short)iVar9 + 1;
      iVar9 = (int)sVar6;
    } while (sVar6 < 6);
    if ((sVar10 == 0) && (sVar11 == 0)) {
      bVar2 = true;
    }
    if (sVar11 < sVar10) {
      lVar7 = (long long)sStack0000001e;
    }
    bVar8 = false;
    iVar9 = 0;
    do {
      if ((int)*(short *)(*piVar4 + param_1 * 0x5c + iVar9 * 2 + 0x292) == (int)lVar7) {
        bVar8 = true;
        break;
      }
      sVar11 = (short)iVar9 + 1;
      iVar9 = (int)sVar11;
    } while (sVar11 < 6);
    if (!bVar8) {
      iVar9 = 0;
      do {
        iVar12 = *piVar4 + param_1 * 0x5c + iVar9 * 2;
        if (*(short *)(iVar12 + 0x292) == -1) {
          *(short *)(iVar12 + 0x292) = (short)lVar7;
          break;
        }
        sVar11 = (short)iVar9 + 1;
        iVar9 = (int)sVar11;
      } while (sVar11 < 6);
    }
    if (bVar2) {
      FUN_1001ae14(param_1,3);
      uVar5 = 0;
    }
    else {
      *(short *)(*piVar4 + param_1 * 0x5c + 0x250) = (short)lVar7;
      *(char *)(*piVar4 + (int)sStack0000001e + 0x56) = 7;
      FUN_1001bdc8(param_1);
      uVar5 = 1;
    }
  }
  return uVar5;
}

/* Address: 0x1001c854 Size: 328 bytes */
unsigned long long FUN_1001c854(short param_1)

{
  int bVar1;
  short sVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  short *puVar6;
  short *puVar7;
  int iVar9;
  unsigned long long uVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  char auStack_48 [72];
  
  puVar7 = puRam10117710;
  puVar6 = puRam101175b4;
  piVar5 = piRam10117468;
  piVar4 = piRam10117360;
  iVar12 = 3;
  do {
    while( true ) {
      FUN_1001b4ac(param_1);
      sVar2 = *(short *)(*piVar5 + param_1 * 0x5c + iVar12 * 2 + 0x28a);
      if (sVar2 != -1) break;
LAB_1001c9f0:
      bVar1 = iVar12 == 0;
      iVar12 = (int)(short)((short)iVar12 + -1);
      if (bVar1) {
        return 1;
      }
    }
    iVar11 = sVar2 * 0x16;
    iVar9 = *piVar4;
    iVar10 = iVar9 + iVar11;
    uVar3 = *(unsigned int *)(iVar10 + 0xc);
    iVar9 = FUN_1001ee88(*(short *)(iVar9 + iVar11),*(short *)(iVar10 + 2),auStack_48,
                         (unsigned short)(uVar3 >> 9) & 7,(unsigned short)(uVar3 >> 0xc) & 0xf,0);
    if (iVar9 == 0) goto LAB_1001c9f0;
    FUN_10041de8();
    iVar9 = *piVar4;
    FUN_100448e4(0xf,*(short *)(iVar9 + iVar11),*(short *)(iVar9 + iVar11 + 2),*puVar7,
                 *puVar6);
    uVar8 = FUN_1001c6fc(param_1,auStack_48,*(short *)(param_1 * 0x5c + *piVar5 + 0x24e),0xf);
    if ((uVar8 & 0xffffffff) < 4) {
      return uVar8;
    }
  } while( true );
}

/* Address: 0x1001ca30 Size: 244 bytes */
void FUN_1001ca30(short param_1,int param_2)

{
  int bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 3;
  while (*(short *)(*piRam10117468 + param_1 * 0x5c + iVar6 * 2 + 0x28a) != -1) {
    bVar1 = iVar6 == 0;
    iVar6 = (int)(short)((short)iVar6 + -1);
    if (bVar1) {
      return;
    }
  }
  cVar5 = -1;
  iVar7 = 7;
  sVar3 = -1;
  do {
    sVar4 = *(short *)(param_2 + iVar7 * 2);
    if (sVar4 != -1) {
      if (*(char *)(*piRam10117360 + sVar4 * 0x16 + 4) == '\x1c') break;
      sVar4 = *(short *)(param_2 + iVar7 * 2);
      cVar2 = *(char *)(*piRam10117360 + sVar4 * 0x16 + 8);
      if (cVar5 < cVar2) {
        cVar5 = cVar2;
        sVar3 = sVar4;
      }
    }
    sVar4 = sVar3;
    bVar1 = iVar7 != 0;
    iVar7 = (int)(short)((short)iVar7 + -1);
    sVar3 = sVar4;
  } while (bVar1);
  if (sVar4 != -1) {
    *(short *)(*piRam10117468 + param_1 * 0x5c + iVar6 * 2 + 0x28a) = sVar4;
  }
  return;
}

/* Address: 0x1001cb24 Size: 580 bytes */
long long FUN_1001cb24(short param_1)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  int iVar7;
  long long uVar6;
  short sVar9;
  int iVar8;
  short sVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  long long lVar14;
  short sVar15;
  unsigned long long uVar16;
  short asStack_54 [42];
  
  psVar5 = psRam101176fc;
  piVar4 = piRam10117468;
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  lVar14 = (long long)param_1;
  iVar12 = *piRam1011735c + *(short *)(*piRam10117468 + param_1 * 0x5c + 0x250) * 0x42;
  iVar7 = FUN_1001ed3c(*(short *)(iVar12 + 0x1604) + 1,*(short *)(iVar12 + 0x1606),asStack_54,0
                      );
  iVar12 = -1;
  sVar13 = -1;
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar16 = 0;
    do {
      sVar11 = *(short *)(*piVar4 + param_1 * 0x5c + (int)((uVar16 & 0xffffffff) << 1) + 0x25a);
      if (sVar11 != -1) {
        iVar8 = (int)(short)(*psVar5 + -2);
        if ((short)(*psVar5 + -2) < 1) {
          iVar8 = 1;
        }
        sVar9 = (short)((int)*(short *)(*piVar4 + param_1 * 0x5c + (int)((uVar16 & 0xffffffff) << 1)
                                       + 0x272) / iVar8) + 1;
        iVar8 = *piVar2 + sVar11 * 0x42;
        iVar8 = FUN_1001eff8(*(short *)(iVar8 + 0x1604),*(short *)(iVar8 + 0x1606));
        sVar15 = 10 - sVar9;
        if (sVar15 < 0) {
          sVar15 = 0;
        }
        sVar10 = FUN_1005f230(1,4,0);
        sVar10 = sVar15 + (short)iVar8 +
                 *(short *)(*piVar4 + param_1 * 0x5c + (int)((uVar16 & 0xffffffff) << 1) + 0x27e) +
                 sVar10;
        if (sVar9 == 1) {
          sVar10 = sVar10 + 100;
        }
        if (((0x4b < iVar8) || (7 < iVar7)) && (sVar13 < sVar10)) {
          sVar13 = sVar10;
          iVar12 = (int)sVar11;
        }
      }
      sVar11 = (short)uVar16 + 1;
      uVar16 = (unsigned long long)sVar11;
    } while (sVar11 < 6);
    if (iVar12 == -1) {
      uVar6 = 0;
    }
    else {
      FUN_1001ca30(lVar14,asStack_54);
      iVar7 = 7;
      do {
        sVar13 = asStack_54[iVar7];
        if (sVar13 != -1) {
          iVar8 = *piVar3 + sVar13 * 0x16;
          *(unsigned int *)(iVar8 + 0xc) =
               (unsigned int)((lVar14 + 1U & 0xffffffff) << 9) & 0xe00 | *(unsigned int *)(iVar8 + 0xc) & 0xfffff1ff
          ;
        }
        bVar1 = iVar7 != 0;
        iVar7 = (int)(short)((short)iVar7 + -1);
      } while (bVar1);
      FUN_1001c2dc(lVar14,asStack_54,iVar12);
      uVar6 = 1;
    }
  }
  return uVar6;
}

/* Address: 0x1001d27c Size: 1008 bytes */
short FUN_1001d27c(short param_1,int param_2,int param_3)

{
  int bVar1;
  unsigned char bVar2;
  int *piVar3;
  long long uVar4;
  unsigned int uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  unsigned short uVar9;
  short sVar10;
  short sVar11;
  unsigned int uVar12;
  unsigned short uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  unsigned long long uVar17;
  int iVar18;
  char auStack_a0 [2];
  short local_9e;
  unsigned char local_9c [56];
  unsigned char local_64 [100];
  
  piVar3 = piRam1011735c;
  uVar17 = (unsigned long long)param_1;
  uVar4 = FUN_10044950();
  sVar7 = 0;
  iVar18 = 0x31;
  do {
    local_64[iVar18] = 0xff;
    local_9c[iVar18] = 0;
    bVar1 = iVar18 != 0;
    iVar18 = (int)(short)((short)iVar18 + -1);
  } while (bVar1);
  sVar10 = *(short *)(*piVar3 + 0x1602);
  while (sVar10 != 0) {
    sVar10 = sVar10 + -1;
    if (sVar10 != param_1) {
      uVar5 = FUN_10020d88(sVar10,&local_9e,auStack_a0,uVar4,0);
      if (local_9e != -1) {
        sVar7 = sVar7 + 1;
        iVar18 = -1;
        iVar8 = 0;
        uVar12 = uVar5;
        do {
          iVar6 = iVar8;
          if (local_64[iVar8] == 0xff) break;
          if ((int)uVar12 < (int)(unsigned int)local_9c[iVar8]) {
            iVar18 = iVar8;
            uVar12 = (unsigned int)local_9c[iVar8];
          }
          sVar16 = (short)iVar8 + 1;
          iVar8 = (int)sVar16;
          iVar6 = iVar18;
        } while (sVar16 < 0x32);
        if ((iVar6 != -1) &&
           ((local_64[iVar6] == 0xff || ((int)uVar5 < (int)(unsigned int)local_9c[iVar6])))) {
          local_64[iVar6] = (unsigned char)sVar10;
          local_9c[iVar6] = (unsigned char)uVar5;
        }
      }
    }
  }
  sVar11 = 0;
  sVar16 = 0;
  sVar10 = 0;
  sVar15 = 0;
  iVar18 = 0;
  do {
    iVar6 = -1;
    uVar9 = 10000;
    iVar8 = 0x31;
    do {
      if (local_64[iVar8] != 0xff) {
        uVar13 = (unsigned short)local_9c[iVar8];
        if (((((*(short *)(*piVar3 + (unsigned int)local_64[iVar8] * 0x42 + 0x1604) <
                *(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1)
                          + 0x1604)) && (2 < sVar10)) ||
             ((*(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1)
                         + 0x1604) < *(short *)(*piVar3 + (unsigned int)local_64[iVar8] * 0x42 + 0x1604) &&
              (2 < sVar15)))) ||
            ((*(short *)(*piVar3 + (unsigned int)local_64[iVar8] * 0x42 + 0x1606) <
              *(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                        0x1606) && (2 < sVar11)))) ||
           ((*(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                       0x1606) < *(short *)(*piVar3 + (unsigned int)local_64[iVar8] * 0x42 + 0x1606) &&
            (2 < sVar16)))) {
          uVar13 = local_9c[iVar8] + 0x32;
        }
        if (uVar13 < uVar9) {
          iVar6 = iVar8;
          uVar9 = uVar13;
        }
      }
      bVar1 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar1);
    if (iVar6 == -1) break;
    bVar2 = local_64[iVar6];
    *(unsigned char *)(param_2 + iVar18) = bVar2;
    if (*(short *)(*piVar3 + (unsigned int)bVar2 * 0x42 + 0x1604) <
        *(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                  0x1604)) {
      sVar10 = sVar10 + 1;
    }
    if (*(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                  0x1604) < *(short *)(*piVar3 + (unsigned int)*(unsigned char *)(param_2 + iVar18) * 0x42 + 0x1604))
    {
      sVar15 = sVar15 + 1;
    }
    if (*(short *)(*piVar3 + (unsigned int)*(unsigned char *)(param_2 + iVar18) * 0x42 + 0x1606) <
        *(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                  0x1606)) {
      sVar11 = sVar11 + 1;
    }
    if (*(short *)(*piVar3 + (int)(((uVar17 & 0x7ffffff) * 0x20 + uVar17 & 0xffffffff) << 1) +
                  0x1606) < *(short *)(*piVar3 + (unsigned int)*(unsigned char *)(param_2 + iVar18) * 0x42 + 0x1606))
    {
      sVar16 = sVar16 + 1;
    }
    sVar14 = (short)iVar18 + 1;
    *(unsigned char *)(iVar18 + param_3) = local_9c[iVar6];
    local_64[iVar6] = 0xff;
    iVar18 = (int)sVar14;
  } while (sVar14 != 6);
  FUN_100449bc();
  return sVar7;
}

/* Address: 0x1001d66c Size: 980 bytes */
void FUN_1001d66c(void)

{
  int bVar1;
  char cVar2;
  short uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  int iVar8;
  long long lVar9;
  short sVar10;
  long long lVar11;
  unsigned long long uVar12;
  unsigned long long uVar13;
  int iVar15;
  unsigned long long uVar14;
  
  puVar7 = puRam10117470;
  piVar6 = piRam1011735c;
  piVar5 = piRam10117358;
  uVar3 = *(short *)(*piRam1011735c + 0x110);
  uVar12 = 0;
  iVar15 = 99;
  do {
    iVar8 = 5;
    do {
      *(char *)(*puVar7 + iVar15 * 6 + iVar8) = 0xff;
      *(char *)(iVar15 * 6 + *puVar7 + iVar8 + 600) = 0;
      bVar1 = iVar8 != 0;
      iVar8 = (int)(short)((short)iVar8 + -1);
    } while (bVar1);
    bVar1 = iVar15 != 0;
    iVar15 = (int)(short)((short)iVar15 + -1);
  } while (bVar1);
  *(short *)(*piVar6 + 0x110) = 0;
  FUN_10044110(*(short *)(*piVar6 + 0x110),1);
  uVar14 = 0;
  if (0 < *(short *)(*piVar6 + 0x1602)) {
    do {
      cVar2 = *(char *)(*piVar6 + (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0xffffffff) << 1) +
                       0x1619);
      uVar13 = (unsigned long long)cVar2;
      sVar10 = (short)((int)(((uVar14 & 0x3fffffff) * 4 + uVar14 & 0xffffffff) << 2) /
                      (int)*(short *)(*piVar6 + 0x1602));
      if ((int)uVar12 != (int)sVar10) {
        FUN_1004099c((short)(((long long)sVar10 & 0xffffffffU) << 2) + sVar10);
        uVar12 = (long long)sVar10;
      }
      iVar15 = (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0x7fffffff) << 1);
      *(char *)(*piVar6 + iVar15 + 0x1619) = (char)*(short *)(*piVar6 + 0x110);
      iVar8 = iVar15 + *piVar6;
      iVar4 = *piVar5 + *(short *)(iVar8 + 0x1606) * 0xe0;
      iVar8 = *(short *)(iVar8 + 0x1604) * 2;
      *(unsigned int *)(iVar4 + iVar8) =
           ((int)*(short *)(*piVar6 + 0x110) & 0xfU) << 0x10 | *(unsigned int *)(iVar4 + iVar8) & 0xfff0ffff
      ;
      iVar8 = iVar15 + *piVar6;
      iVar8 = *piVar5 + *(short *)(iVar8 + 0x1606) * 0xe0 + *(short *)(iVar8 + 0x1604) * 2;
      *(unsigned int *)(iVar8 + 0xe2) =
           ((int)*(short *)(*piVar6 + 0x110) & 0xfU) << 0x10 | *(unsigned int *)(iVar8 + 0xe2) & 0xfff0ffff;
      iVar8 = iVar15 + *piVar6;
      iVar8 = *piVar5 + *(short *)(iVar8 + 0x1606) * 0xe0 + *(short *)(iVar8 + 0x1604) * 2;
      *(unsigned int *)(iVar8 + 0xe0) =
           ((int)*(short *)(*piVar6 + 0x110) & 0xfU) << 0x10 | *(unsigned int *)(iVar8 + 0xe0) & 0xfff0ffff;
      iVar8 = iVar15 + *piVar6;
      iVar8 = *piVar5 + *(short *)(iVar8 + 0x1606) * 0xe0 + *(short *)(iVar8 + 0x1604) * 2;
      *(unsigned int *)(iVar8 + 2) =
           ((int)*(short *)(*piVar6 + 0x110) & 0xfU) << 0x10 | *(unsigned int *)(iVar8 + 2) & 0xfff0ffff;
      FUN_100448e4(0x2d,*(short *)(iVar15 + *piVar6 + 0x1604),
                   *(short *)(iVar15 + *piVar6 + 0x1606),1,0);
      lVar11 = ((uVar14 & 0x3fffffff) * 4 - uVar14 & 0x7fffffff) * 2;
      lVar9 = (unsigned long long)*puVar7 + lVar11;
      iVar8 = FUN_1001d27c(uVar14,lVar9,lVar9 + 600);
      if (iVar8 == 0) {
        FUN_100448e4(0x3c,*(short *)(iVar15 + *piVar6 + 0x1604),
                     *(short *)(iVar15 + *piVar6 + 0x1606),1,0);
        lVar11 = (unsigned long long)*puVar7 + lVar11;
        FUN_1001d27c(uVar14,lVar11,lVar11 + 600);
      }
      iVar15 = (int)(((uVar14 & 0x7ffffff) * 0x20 + uVar14 & 0x7fffffff) << 1);
      *(char *)(*piVar6 + iVar15 + 0x1619) = cVar2;
      iVar8 = *piVar5 + *(short *)(iVar15 + *piVar6 + 0x1606) * 0xe0;
      iVar4 = *(short *)(iVar15 + *piVar6 + 0x1604) * 2;
      *(unsigned int *)(iVar8 + iVar4) =
           (unsigned int)((uVar13 & 0xffffffff) << 0x10) & 0xf0000 | *(unsigned int *)(iVar8 + iVar4) & 0xfff0ffff;
      iVar8 = *piVar5 + *(short *)(iVar15 + *piVar6 + 0x1606) * 0xe0 +
              *(short *)(iVar15 + *piVar6 + 0x1604) * 2;
      *(unsigned int *)(iVar8 + 0xe2) =
           (unsigned int)((uVar13 & 0xffffffff) << 0x10) & 0xf0000 | *(unsigned int *)(iVar8 + 0xe2) & 0xfff0ffff;
      iVar8 = *piVar5 + *(short *)(iVar15 + *piVar6 + 0x1606) * 0xe0 +
              *(short *)(iVar15 + *piVar6 + 0x1604) * 2;
      *(unsigned int *)(iVar8 + 0xe0) =
           (unsigned int)((uVar13 & 0xffffffff) << 0x10) & 0xf0000 | *(unsigned int *)(iVar8 + 0xe0) & 0xfff0ffff;
      iVar15 = *piVar5 + *(short *)(iVar15 + *piVar6 + 0x1606) * 0xe0 +
               *(short *)(iVar15 + *piVar6 + 0x1604) * 2;
      *(unsigned int *)(iVar15 + 2) =
           (unsigned int)((uVar13 & 0xffffffff) << 0x10) & 0xf0000 | *(unsigned int *)(iVar15 + 2) & 0xfff0ffff;
      sVar10 = (short)uVar14 + 1;
      uVar14 = (unsigned long long)sVar10;
    } while (sVar10 < *(short *)(*piVar6 + 0x1602));
  }
  FUN_1004099c(100);
  *(short *)(*piVar6 + 0x110) = uVar3;
  return;
}

/* Address: 0x1001da40 Size: 288 bytes */
int FUN_1001da40(short param_1,short param_2,unsigned short param_3)

{
  short sVar1;
  long long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  long long lVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = piRam1011735c;
  piVar3 = piRam10117358;
  if (*(short *)(*piRam1011735c + 0x1602) == 0) {
    iVar7 = -1;
  }
  else {
    sVar1 = *(short *)(*piRam1011735c + 0x1602);
    iVar7 = -1;
    iVar8 = 1000;
    do {
      sVar1 = sVar1 + -1;
      iVar5 = *piVar4 + sVar1 * 0x42;
      lVar2 = -(long long)
               *(char *)(*piVar4 + (*(unsigned int *)(*piVar3 + *(short *)(iVar5 + 0x1606) * 0xe0 +
                                             *(short *)(iVar5 + 0x1604) * 2) >> 0x18) + 0x711);
      lVar6 = lVar2 + 10;
      if (((lVar6 + (-(unsigned long long)(lVar6 == 0) - (lVar2 + 9)) & 0xff) == 0) &&
         (*(unsigned char *)(iVar5 + 0x1633) == param_3)) {
        iVar5 = FUN_1000a884(param_1,param_2,(int)*(short *)(iVar5 + 0x1604),
                             (int)*(short *)(iVar5 + 0x1606));
        if (iVar5 < iVar8) {
          iVar7 = (int)sVar1;
          iVar8 = iVar5;
        }
      }
    } while (sVar1 != 0);
  }
  return iVar7;
}

/* Address: 0x1001db60 Size: 1152 bytes */
void FUN_1001db60(void)

{
  int bVar1;
  short *psVar2;
  int *piVar3;
  int *piVar4;
  long long uVar5;
  short sVar9;
  int iVar7;
  int iVar8;
  unsigned long long uVar6;
  unsigned long long uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int local_cc;
  char auStack_a8 [72];
  int local_60;
  short local_5c [8];
  short local_4c [8];
  short local_3c [30];
  
  piVar4 = piRam101174a4;
  piVar3 = piRam1011735c;
  psVar2 = psRam10115e2c;
  iVar7 = *(int *)(*piRam1011734c + 0x88);
  FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x2b8));
  local_60 = FUN_10003558(0x41492020,10000);
  sVar11 = 0;
  sVar9 = 0;
  if (local_60 == 0) {
    FUN_10092484(0xb);
    FUN_10040788();
    FUN_1000c7b4();
    FUN_1001d66c();
    if ((*psVar2 == 0) && (*piVar4 != 0)) {
      FUN_10002ad8();
    }
    FUN_10040930();
    FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x178),
                 auStack_a8);
    FUN_1007ec7c(iVar7,auStack_a8);
    FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x2a0),
                 3,3);
    FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x118))
    ;
    local_60 = *piVar4;
    FUN_10002b50(&local_60);
    uVar5 = FUN_100b1c84(*(int *)(local_cc + -0xe4c));
    FUN_10002568(local_60,0x41492020,10000,uVar5);
    FUN_100002a0(local_60);
    FUN_1007ec7c(iVar7,auStack_a8);
    FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x118))
    ;
  }
  else {
    FUN_1000c7b4();
    if ((*psVar2 == 0) && (*piVar4 != 0)) {
      FUN_10002ad8();
    }
    FUN_10002ce8(local_60);
    FUN_100ef510(*piVar4);
    *piVar4 = local_60;
  }
  uVar6 = 7;
  do {
    iVar7 = (int)((uVar6 & 0x7fffffff) << 1);
    *(short *)((int)local_3c + iVar7) = 0;
    iVar7 = iVar7 + *piVar3;
    if (*(short *)(iVar7 + 0x138) != 0) {
      if (*(short *)(iVar7 + 0xd0) == 0) {
        sVar11 = sVar11 + 1;
      }
      else {
        *(short *)((int)local_3c + (int)((uVar6 & 0xffffffff) << 1)) = 1;
        sVar9 = sVar9 + 1;
      }
      iVar7 = *piVar3 + (int)(((uVar6 & 0x3fffffff) * 4 + uVar6 & 0xffffffff) << 2);
      iVar13 = (int)((uVar6 & 0xffffffff) << 1);
      *(short *)((int)local_4c + iVar13) = *(short *)(iVar7 + 0x18a);
      *(short *)((int)local_5c + iVar13) = *(short *)(iVar7 + 0x18c);
      iVar7 = FUN_1002be50();
      if (-1 < iVar7) {
        *(char *)(*piVar3 + iVar7 * 0x42 + 0x1633) = (char)uVar6;
      }
    }
    iVar7 = (int)uVar6;
    uVar6 = (long long)(short)((short)uVar6 + -1);
  } while (iVar7 != 0);
  if ((sVar9 == 0) && (sVar11 != 0)) {
    iVar7 = -1;
    iVar12 = 0;
    iVar13 = 7;
    do {
      if (*(short *)(*piVar3 + iVar13 * 2 + 0x138) != 0) {
        local_3c[iVar13] = 1;
        iVar8 = FUN_1005f230(1,100,0);
        if ((iVar7 == -1) || (iVar12 < iVar8)) {
          iVar7 = iVar13;
          iVar12 = iVar8;
        }
      }
      bVar1 = iVar13 != 0;
      iVar13 = (int)(short)((short)iVar13 + -1);
    } while (bVar1);
    if (iVar7 != -1) {
      local_3c[iVar7] = 0;
    }
  }
  uVar6 = 7;
  do {
    uVar10 = uVar6;
    if (*(short *)((int)local_3c + (int)((uVar6 & 0xffffffff) << 1)) != 0) break;
    iVar7 = (int)uVar6;
    uVar6 = (long long)(short)((short)uVar6 + -1);
    uVar10 = 0xffffffffffffffff;
  } while (iVar7 != 0);
  if ((int)uVar10 != -1) {
    iVar7 = (int)((uVar10 & 0xffffffff) << 1);
    uVar6 = FUN_1001da40(*(short *)((int)local_4c + iVar7),
                         *(short *)((int)local_5c + iVar7),0xf);
    iVar7 = (int)uVar6;
    while (-1 < iVar7) {
      *(char *)(*piVar3 + (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1) + 0x1633) =
           (char)uVar10;
      iVar7 = FUN_1005f230(1,10,0xffffffffffffffff);
      if (iVar7 < 5) {
        iVar7 = *piVar3 + (int)(((uVar10 & 0x3fffffff) * 4 + uVar10 & 0xffffffff) << 2);
        iVar13 = (int)((uVar10 & 0xffffffff) << 1);
        *(short *)((int)local_4c + iVar13) = *(short *)(iVar7 + 0x18a);
        *(short *)((int)local_5c + iVar13) = *(short *)(iVar7 + 0x18c);
      }
      else {
        iVar7 = *piVar3 + (int)(((uVar6 & 0x7ffffff) * 0x20 + uVar6 & 0xffffffff) << 1);
        iVar13 = (int)((uVar10 & 0xffffffff) << 1);
        *(short *)((int)local_4c + iVar13) = *(short *)(iVar7 + 0x1604);
        *(short *)((int)local_5c + iVar13) = *(short *)(iVar7 + 0x1606);
      }
      do {
        uVar10 = uVar10 + 1;
        uVar10 = (unsigned long long)
                 (short)((short)uVar10 -
                        (short)(((long long)((int)uVar10 >> 3) +
                                 (unsigned long long)((int)uVar10 < 0 && (uVar10 & 7) != 0) & 0xffffffff) <<
                               3));
        iVar7 = (int)((uVar10 & 0x7fffffff) << 1);
      } while (*(short *)((int)local_3c + iVar7) == 0);
      uVar6 = FUN_1001da40(*(short *)((int)local_4c + iVar7),
                           *(short *)((int)local_5c + iVar7),0xf);
      iVar7 = (int)uVar6;
    }
  }
  return;
}

/* Address: 0x1001dfe0 Size: 52 bytes */
void FUN_1001dfe0(short param_1,short param_2,short *param_3,short *param_4)

{
  if (*param_3 < param_1) {
    *param_3 = *param_3 + 1;
  }
  if (*param_4 < param_2) {
    *param_4 = *param_4 + 1;
  }
  return;
}

/* Address: 0x1001e674 Size: 288 bytes */
long long FUN_1001e674(short param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  unsigned long long uVar5;
  
  piVar2 = piRam1011735c;
  uVar5 = (unsigned long long)param_1;
  iVar3 = FUN_10047d80(uVar5,param_2);
  iVar1 = *piVar2;
  if ((int)*(short *)(iVar1 + *(short *)(iVar1 + 0x110) * 0x14 + 0x186) <
      *(char *)(iVar1 + (int)(((uVar5 & 0x7ffffff) * 0x20 + uVar5 & 0xffffffff) << 1) + iVar3 +
               0x162a) + 0x1e) {
    sVar4 = *(short *)(iVar1 + 0x136);
    if (sVar4 < 2) {
      sVar4 = 1;
    }
    if (5 < sVar4) {
      return 0;
    }
  }
  iVar1 = (param_1 * 0x20 + (int)param_1) * 2;
  *(char *)(*piVar2 + iVar1 + 0x1630) = (char)param_2;
  iVar1 = iVar1 + *piVar2;
  *(char *)(iVar1 + 0x1631) = *(char *)(iVar1 + iVar3 + 0x161e);
  if (param_3 == 0) {
    *(short *)
     (*piVar2 + (int)(((uVar5 & 0x7ffffff) * 0x20 + uVar5 & 0xffffffff) << 1) + 0x1636) = 0;
  }
  else {
    FUN_1001e564(uVar5,param_4);
  }
  return 1;
}

/* FUN_1001e9d0 defined elsewhere */


/* Address: 0x1001eaa4 Size: 380 bytes */
void FUN_1001eaa4(short param_1)

{
  int bVar1;
  int *piVar2;
  int *piVar3;
  unsigned long long uVar4;
  int iVar5;
  long long uVar6;
  long long uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char auStack_38 [2];
  char auStack_36 [2];
  char auStack_34 [2];
  char auStack_32 [2];
  short local_30 [24];
  
  piVar3 = piRam10117364;
  piVar2 = piRam1011735c;
  uVar4 = ZEXT48(0 /* TVect base */);
  iVar9 = (int)param_1;
  uVar6 = FUN_1001e9d0(iVar9);
  FUN_10048ccc();
  iVar10 = 0;
  do {
    if ((*(char *)(*piVar3 + iVar10 * 6) != '\0') && (*(char *)(*piVar3 + iVar10 * 6 + 4) == '\0'))
    {
      sVar8 = 3;
      do {
        bVar1 = sVar8 != 0;
        sVar8 = sVar8 + -1;
      } while (bVar1);
      uVar7 = FUN_1004a0c4(iVar10,auStack_32,auStack_34,auStack_36,local_30,auStack_38);
      iVar5 = (int)uVar4;
      local_30[0] = local_30[0] + 0x1e;
      if (local_30[0] <= *(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186)) {
        FUN_10049fa8(iVar9,uVar6,uVar7);
        FUN_100496c8(iVar9);
        iVar10 = (int)param_1 + **(int **)(iVar5 + -0x438);
        *(unsigned char *)(iVar10 + 0x11e) = *(unsigned char *)(iVar10 + 0x11e) | 2;
        *(char *)(*piVar2 + iVar9 * 0x42 + 0x1631) = 0;
        *(short *)(iVar9 * 0x42 + *piVar2 + 0x1636) = 0;
        goto LAB_1001ec04;
      }
    }
    sVar8 = (short)iVar10 + 1;
    iVar10 = (int)sVar8;
    if (0x1c < sVar8) {
LAB_1001ec04:
      FUN_10049010();
      return;
    }
  } while( true );
}

/* FUN_1001ec20 defined elsewhere */
























































/* FUN_1001ed3c defined elsewhere */




















































/* FUN_1001ee88 defined elsewhere */























































/* FUN_1001eff8 defined elsewhere */






























































/* Address: 0x1001f0ac Size: 200 bytes */
void FUN_1001f0ac(short param_1,short param_2,short *param_3,short *param_4,short *param_5)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = piRam10117360;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  sVar1 = *(short *)(*piRam1011735c + 0x182);
  if (sVar1 != 0) {
    do {
      sVar1 = sVar1 + -1;
      iVar3 = sVar1 * 0x16;
      if ((*(short *)(*piVar2 + iVar3) == param_1) && (*(short *)(*piVar2 + iVar3 + 2) == param_2))
      {
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + (short)*(char *)(*piVar2 + iVar3 + 8);
        if (*(char *)(iVar3 + *piVar2 + 4) == '\x1c') {
          *param_5 = *param_5 + 1;
        }
      }
    } while (sVar1 != 0);
  }
  return;
}

/* Address: 0x1001f220 Size: 620 bytes */
unsigned long long FUN_1001f220(short param_1,short param_2,short param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long long lVar5;
  unsigned long long uVar6;
  short sVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short *psVar11;
  long long uVar12;
  short sVar14;
  unsigned long long uVar13;
  long long lVar15;
  unsigned long long uVar16;
  short sStack0000001a;
  short uStack0000001e;
  
  psVar11 = psRam101176fc;
  piVar10 = piRam10117468;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  sStack0000001a = param_1;
  uStack0000001e = param_2;
  uVar12 = FUN_10044950();
  sVar2 = *(short *)(*piVar9 + 0x1602);
  uVar6 = 0xffffffffffffffff;
  sVar7 = -1;
  while (sVar2 != 0) {
    sVar2 = sVar2 + -1;
    uVar16 = (unsigned long long)sVar2;
    if ((param_3 == 0) ||
       ((int)*(char *)(*piVar9 + (int)(((uVar16 & 0x7ffffff) * 0x20 + uVar16 & 0xffffffff) << 1) +
                      0x1619) != (int)*(short *)(*piVar9 + 0x110))) {
      iVar3 = *piVar9;
      iVar4 = iVar3 + (sVar2 * 0x20 + (int)sVar2) * 2;
      lVar5 = -(long long)
               *(char *)(iVar3 + (*(unsigned int *)(*piVar8 + *(short *)(iVar4 + 0x1606) * 0xe0 +
                                           *(short *)(iVar4 + 0x1604) * 2) >> 0x18) + 0x711);
      lVar15 = lVar5 + 10;
      if (((lVar15 + (-(unsigned long long)(lVar15 == 0) - (lVar5 + 9)) & 0xff) == 0) &&
         ((sVar2 != *(short *)(*piVar10 + 0x46) &&
          ((*(unsigned char *)(*piVar10 + (int)sVar2 + 0x11e) & 1) == 0)))) {
        cVar1 = *(char *)(iVar4 + 0x1619);
        if (((cVar1 == 0xf) ||
            (((int)cVar1 == (int)*(short *)(iVar3 + 0x110) ||
             ((*(unsigned int *)(cVar1 * 0x10 + iVar3 + *(short *)(iVar3 + 0x110) * 2 + 0x1582) >> 0x1a & 3)
              == 2)))) &&
           (sVar14 = FUN_10020d88(uVar16,((char*)0 + 0x0000001a),((char*)0 + 0x0000001e),uVar12,0),
           sStack0000001a != -1)) {
          if ((int)*(char *)(*piVar9 + (int)(((uVar16 & 0x7ffffff) * 0x20 + uVar16 & 0xffffffff) <<
                                            1) + 0x1619) == (int)*(short *)(*piVar9 + 0x110)) {
            sVar14 = sVar14 + 0x14;
            uVar13 = 0xf;
          }
          else {
            iVar3 = *piVar9 + (int)(((uVar16 & 0x7ffffff) * 0x20 + uVar16 & 0xffffffff) << 1);
            uVar13 = FUN_1001eff8(*(short *)(iVar3 + 0x1604),*(short *)(iVar3 + 0x1606));
          }
          if (((int)uVar13 < 0x33) || (*psVar11 <= sVar14)) {
            if ((int)uVar13 < 0xb) {
              sVar14 = -2;
            }
            else {
              sVar14 = (((short)((uVar13 & 0xffffffff) << 2) + (short)uVar13) - sVar14) + 100;
            }
          }
          else {
            sVar14 = ((short)(((uVar13 & 0x3fffffff) * 4 + uVar13 & 0xffffffff) << 1) - sVar14) +
                     400;
          }
          if (sVar7 < sVar14) {
            uVar6 = uVar16;
            sVar7 = sVar14;
          }
        }
      }
    }
  }
  FUN_100449bc();
  return uVar6;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_1001f48c() { return 0; }















































/* Address: 0x10020640 Size: 1192 bytes */
void FUN_10020640(short param_1,short param_2)

{
  int *piVar1;
  int uVar2;
  short uVar4;
  int *piVar3;
  short sVar5;
  unsigned long long uVar6;
  short *puVar7;
  short local_80 [7];
  char auStack_72 [30];
  short local_54 [42];
  
  uVar2 = uRam101175f8;
  piVar1 = piRam10117468;
  piVar3 = piRam1011735c;
  uVar6 = (unsigned long long)param_2;
  puVar7 = local_80;
  if (param_1 == 0) {
    *(short *)(*piRam10117468 + 10) = 0x1e;
    *(short *)(*piVar1 + 0x48) = 1;
    uVar4 = FUN_1005f230(1,4,0);
    *(short *)(*piVar1 + 0x18) = uVar4;
    uVar4 = FUN_1005f230(1,4,0);
    *(short *)(*piVar1 + 0x1e) = uVar4;
    uVar4 = FUN_1005f230(1,4,0);
    *(short *)(*piVar1 + 0x1a) = uVar4;
    *(short *)(*piVar1 + 0x24a) = 1;
    *(short *)(*piVar1 + 0x38) = 0;
    *(short *)(*piVar1 + 0x10) = 0xffff;
    *(short *)(*piVar1 + 0x12) = 0xffff;
    *(short *)(*piVar1 + 0x26) = 0;
    *(short *)(*piVar1 + 0x28) = 0;
    *(short *)(*piVar1 + 0x2a) = 0;
    *(short *)(*piVar1 + 0x2c) = 0;
    *(short *)(*piVar1 + 0x2e) = 0;
    *(short *)(*piVar1 + 0x30) = 0;
    *(short *)(*piVar1 + 0x32) = 0;
    *(short *)(*piVar1 + 0x34) = 0;
    *(short *)(*piVar1 + 0x36) = 0;
    *(short *)(*piVar1 + 0x42) = 0;
    *(short *)(*piVar1 + 0x44) = 0x50;
  }
  else if (param_1 == 1) {
    *(short *)(*piRam10117468 + 10) = 0x14;
    *(short *)(*piVar1 + 0x48) = 0;
    uVar4 = FUN_1005f230(1,4);
    *(short *)(*piVar1 + 0x18) = uVar4;
    uVar4 = FUN_1005f230(1,4,0);
    *(short *)(*piVar1 + 0x1e) = uVar4;
    uVar4 = FUN_1005f230(1,8,0);
    *(short *)(*piVar1 + 0x1c) = uVar4;
    *(unsigned short *)(*piVar1 + 0xc) = *(unsigned short *)(*piVar1 + 0xc) | 1;
    *(short *)(*piVar1 + 0x38) = 0;
    *(short *)(*piVar1 + 0x24a) = 2;
    *(short *)(*piVar1 + 0x10) = 0xffff;
    *(short *)(*piVar1 + 0x12) = 0xffff;
    *(short *)(*piVar1 + 0x26) = 5;
    *(short *)(*piVar1 + 0x28) = 10;
    *(short *)(*piVar1 + 0x2a) = 0x14;
    *(short *)(*piVar1 + 0x2c) = 1;
    *(short *)(*piVar1 + 0x2e) = 5;
    *(short *)(*piVar1 + 0x34) = 0;
    *(short *)(*piVar1 + 0x32) = *(short *)(*piVar1 + 0x34);
    *(short *)(*piVar1 + 0x30) = *(short *)(*piVar1 + 0x32);
    *(short *)(*piVar1 + 0x36) = 0;
    *(short *)(*piVar1 + 0x42) = 0;
    *(short *)(*piVar1 + 0x44) = 0x23;
  }
  else if (param_1 == 2) {
    *(short *)(*piRam10117468 + 10) = 10;
    *(short *)(*piVar1 + 0x48) = 0;
    uVar4 = FUN_1005f230(1);
    *(short *)(*piVar1 + 0x18) = uVar4;
    uVar4 = FUN_1005f230(1,8,0);
    *(short *)(*piVar1 + 0x1a) = uVar4;
    uVar4 = FUN_1005f230(1,6,0);
    *(short *)(*piVar1 + 0x1c) = uVar4;
    *(short *)(*piVar1 + 0x24a) = 4;
    *(short *)(*piVar1 + 0x38) = 1;
    *(unsigned short *)(*piVar1 + 0xc) = *(unsigned short *)(*piVar1 + 0xc) | 1;
    *(short *)(*piVar1 + 0x10) = 0xffff;
    *(short *)(*piVar1 + 0x12) = 0xffff;
    *(short *)(*piVar1 + 0x26) = 5;
    *(short *)(*piVar1 + 0x28) = 10;
    *(short *)(*piVar1 + 0x2a) = 0x14;
    *(short *)(*piVar1 + 0x2c) = 5;
    *(short *)(*piVar1 + 0x2e) = 0x32;
    *(short *)(*piVar1 + 0x34) = 0;
    *(short *)(*piVar1 + 0x32) = *(short *)(*piVar1 + 0x34);
    *(short *)(*piVar1 + 0x30) = *(short *)(*piVar1 + 0x32);
    *(short *)(*piVar1 + 0x36) = 0x32;
    *(short *)(*piVar1 + 0x42) = 1;
    *(short *)(*piVar1 + 0x44) = 0x23;
  }
  if ((*(short *)(*piVar3 + (int)((uVar6 & 0xffffffff) << 1) + 0x138) != 0) &&
     (*(short *)(*piVar3 + (int)((uVar6 & 0xffffffff) << 1) + 0xd0) == 1)) {
    FUN_1005ad34(uVar6,1,uVar2);
    piVar3 = (int *)FUN_10051f98(0x43415244,uVar2,1);
    if (piVar3 != (int *)0x0) {
      sVar5 = 0;
      do {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x100));
        uVar4 = FUN_100525a0();
        *puVar7 = uVar4;
        sVar5 = sVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (sVar5 < 7);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0),auStack_72,0x1d);
      puVar7 = local_54;
      sVar5 = 0;
      do {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x100));
        uVar4 = FUN_100525a0();
        *puVar7 = uVar4;
        sVar5 = sVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (sVar5 < 0x1e);
      FUN_100523a8(piVar3,1);
    }
  }
  return;
}

/* Address: 0x10020ae8 Size: 672 bytes */
void FUN_10020ae8(short param_1)

{
  int bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  unsigned long long uVar6;
  char uVar7;
  int iVar8;
  
  piVar5 = piRam10117468;
  piVar4 = piRam1011735c;
  uVar6 = (unsigned long long)param_1;
  *(short *)(*piRam10117468 + 0x4a) = 0;
  *(short *)*piVar5 = 0;
  *(short *)(*piVar5 + 0x20) = 10;
  *(short *)(*piVar5 + 0x22) = 0;
  *(short *)(*piVar5 + 0x24) = 0;
  *(short *)(*piVar5 + 0xc) = 0;
  *(short *)(*piVar5 + 0x16) = 0;
  *(short *)(*piVar5 + 0x18) = 0;
  *(short *)(*piVar5 + 0x1a) = 0;
  *(short *)(*piVar5 + 0x1c) = 0;
  *(short *)(*piVar5 + 0x1e) = 0;
  *(short *)(*piVar5 + 0x4c) = 0;
  *(short *)(*piVar5 + 0x26) = 0;
  *(short *)(*piVar5 + 0x28) = 0;
  *(short *)(*piVar5 + 0x2a) = 0;
  *(short *)(*piVar5 + 0x2c) = 0;
  *(short *)(*piVar5 + 0x2e) = 0;
  *(short *)(*piVar5 + 0x30) = 0;
  *(short *)(*piVar5 + 0x32) = 0;
  *(short *)(*piVar5 + 0x34) = 0;
  *(short *)(*piVar5 + 0x36) = 0;
  sVar2 = *(short *)(*piVar4 + 0x1602);
  if (sVar2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar8 = (int)sVar2;
      if (*(short *)(*piVar4 + 0x128) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
      }
      *(char *)(*piVar5 + iVar8 + 0x56) = uVar7;
      *(char *)(iVar8 + *piVar5 + 0xba) = 0;
      *(char *)(iVar8 + *piVar5 + 0x11e) = 0;
      if (*(short *)(*piVar4 + 0x124) != 0) {
        *(unsigned char *)(*piVar5 + iVar8 + 0x11e) = *(unsigned char *)(*piVar5 + iVar8 + 0x11e) | 1;
      }
    } while (iVar8 != 0);
  }
  if (*(short *)(*piVar4 + (int)((uVar6 & 0xffffffff) << 1) + 0xd0) == 0) {
    FUN_10020640(2,uVar6);
  }
  else {
    sVar2 = *(short *)(*piVar4 + (int)((uVar6 & 0xffffffff) << 1) + 0xc0);
    if (sVar2 == 0) {
      FUN_10020640(0,uVar6);
    }
    else if (sVar2 == 1) {
      FUN_10020640(1,uVar6);
    }
    else {
      FUN_10020640(2,uVar6);
    }
  }
  iVar8 = 3;
  do {
    *(short *)(*piVar5 + iVar8 * 0x5c + 0x24c) = 0;
    bVar1 = iVar8 != 0;
    iVar8 = (int)(short)((short)iVar8 + -1);
  } while (bVar1);
  iVar8 = 7;
  do {
    iVar3 = iVar8 * 2;
    *(short *)(*piVar5 + iVar3 + 0x41c) = 0;
    *(short *)(iVar3 + *piVar5 + 0x40c) = *(short *)(iVar3 + *piVar5 + 0x41c);
    *(short *)(iVar3 + *piVar5 + 0x3fc) = *(short *)(iVar3 + *piVar5 + 0x40c);
    *(short *)(iVar3 + *piVar5 + 0x3ec) = *(short *)(iVar3 + *piVar5 + 0x3fc);
    *(short *)(iVar3 + *piVar5 + 0x3dc) = *(short *)(iVar3 + *piVar5 + 0x3ec);
    *(short *)(iVar3 + *piVar5 + 0x3cc) = *(short *)(iVar3 + *piVar5 + 0x3dc);
    *(short *)(iVar3 + *piVar5 + 0x3bc) = *(short *)(iVar3 + *piVar5 + 0x3cc);
    bVar1 = iVar8 != 0;
    iVar8 = (int)(short)((short)iVar8 + -1);
  } while (bVar1);
  return;
}

/* FUN_10020d88 defined elsewhere */








































/* Address: stubbed - had compile errors on 64-bit */
int FUN_10021364() { return 0; }






































/* Address: 0x10021434 Size: 180 bytes */
int FUN_10021434(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = piRam1011735c;
  iVar4 = 0;
  do {
    iVar3 = *piRam10117360 + iVar4 * 0x16;
    if (*(char *)(iVar3 + 5) == -1) break;
    sVar2 = (short)iVar4 + 1;
    iVar4 = (int)sVar2;
    iVar3 = 0;
  } while (sVar2 < 1000);
  if (iVar3 != 0) {
    if (*(short *)(*piRam1011735c + 0x182) <= iVar4) {
      *(short *)(*piRam1011735c + 0x182) = (short)iVar4 + 1;
    }
    *(char *)(iVar3 + 5) = (char)*(short *)(*piVar1 + 0x110);
    *(short *)(iVar3 + 0xc) = 1;
    *(unsigned int *)(iVar3 + 0xc) = *(unsigned int *)(iVar3 + 0xc) & 0xffff0f80;
    *(char *)(iVar3 + 0x10) = 0xff;
    *(char *)(iVar3 + 0x11) = 0;
    *(short *)(iVar3 + 0x12) = 0xffff;
    *(short *)(iVar3 + 0x14) = 0xffff;
    return iVar3;
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10021524() { }






































































/* Address: 0x10021848 Size: 352 bytes */
void FUN_10021848(void)

{
  short *puVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  int *puVar7;
  int iVar8;
  unsigned long long uVar9;
  int *ppuVar10;
  short sVar11;
  unsigned long long uVar12;
  
  iVar8 = iRam101176e8;
  puVar7 = puRam101176e0;
  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  psVar4 = psRam10116354;
  uVar9 = ZEXT48(0 /* TVect base */);
  ppuVar10 = 0 /* TVect base */;
  puVar1 = (short *)*puRam101176e0;
  if (*psRam10116354 == 0) {
    if (*(char *)(puVar1 + 2) == '\x1c') {
      ppuVar10 = 0 /* TVect base */;
      FUN_1002e5c0(puVar1,*puVar1,puVar1[1]);
    }
    FUN_100214e8(*puVar7);
  }
  else {
    uVar12 = 0;
    do {
      iVar3 = (int)((uVar12 & 0xffffffff) << 2);
      puVar1 = *(short **)(iVar3 + iVar8);
      if (puVar1 != (short *)0x0) {
        if (*(char *)(puVar1 + 2) == '\x1c') {
          FUN_1002e5c0(puVar1,*puVar1,puVar1[1]);
          sVar11 = *(short *)(*piVar5 + 0x110);
          iVar2 = *piVar5 + (sVar11 * 4 - (int)sVar11) * 4;
          if ((*(short *)(iVar2 + 0x1142) != 0) &&
             (*piVar6 + *(short *)(iVar2 + 0x1146) * 0x16 == *(int *)(iVar3 + iVar8))) {
            *(short *)(iVar2 + 0x1142) = 0;
          }
        }
        FUN_100214e8(*(int *)((int)((uVar12 & 0xffffffff) << 2) + iVar8));
      }
      ppuVar10 = (int **)uVar9;
      sVar11 = (short)uVar12 + 1;
      uVar12 = (unsigned long long)sVar11;
    } while (sVar11 < 8);
  }
  *puVar7 = 0;
  *(int *)(*(int*)((char*)ppuVar10 - 0xfc)) = 0;
  *psVar4 = 0;
  FUN_1002b91c();
  FUN_1002bbd4();
  FUN_1002c85c();
  FUN_10007f78();
  FUN_1005cc8c();
  return;
}

/* FUN_100219a8 defined elsewhere */
























/* Address: stubbed - had compile errors on 64-bit */
void FUN_10021a3c() { }





















































































































/* Address: 0x10021d50 Size: 208 bytes */
int FUN_10021d50(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short asStack_200 [256];
  
  iVar1 = 2;
  do {
    asStack_200[iVar1] = 0;
    sVar2 = (short)iVar1 + 1;
    iVar1 = (int)sVar2;
  } while (sVar2 < 0xff);
  sVar2 = *(short *)(*piRam1011735c + 0x182);
  if (sVar2 != 0) {
    do {
      sVar2 = sVar2 + -1;
      iVar3 = sVar2 * 0x16;
      iVar1 = *piRam10117360 + iVar3;
      if (((int)*(char *)(iVar1 + 5) == (int)*(short *)(*piRam1011735c + 0x110)) &&
         (-1 < *(short *)(iVar3 + *piRam10117360))) {
        asStack_200[*(unsigned char *)(iVar1 + 0x11)] = 1;
      }
    } while (sVar2 != 0);
  }
  iVar1 = 1;
  do {
    if (asStack_200[iVar1] == 0) {
      return iVar1;
    }
    sVar2 = (short)iVar1 + 1;
    iVar1 = (int)sVar2;
  } while (sVar2 < 0xff);
  return 0;
}

/* Address: 0x10021e20 Size: 332 bytes */
void FUN_10021e20(void)

{
  unsigned char bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  short sVar6;
  int iVar7;
  short asStack_208 [260];
  
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  iVar4 = 2;
  do {
    asStack_208[iVar4] = 0;
    sVar6 = (short)iVar4 + 1;
    iVar4 = (int)sVar6;
  } while (sVar6 < 0xff);
  sVar6 = *(short *)(*piRam1011735c + 0x182);
  if (sVar6 != 0) {
    do {
      sVar6 = sVar6 + -1;
      iVar7 = sVar6 * 0x16;
      iVar4 = *piRam10117360 + iVar7;
      if ((((int)*(char *)(iVar4 + 5) == (int)*(short *)(*piRam1011735c + 0x110)) &&
          (-1 < *(short *)(iVar7 + *piRam10117360))) && (bVar1 = *(unsigned char *)(iVar4 + 0x11), 1 < bVar1)
         ) {
        asStack_208[bVar1] = asStack_208[bVar1] + 1;
      }
    } while (sVar6 != 0);
  }
  uVar5 = 2;
  do {
    if ((asStack_208[uVar5] == 1) && (sVar6 = *(short *)(*piVar2 + 0x182), sVar6 != 0)) {
      do {
        sVar6 = sVar6 + -1;
        iVar4 = sVar6 * 0x16;
        iVar7 = *piVar3 + iVar4;
        if (((int)*(char *)(iVar7 + 5) == (int)*(short *)(*piVar2 + 0x110)) &&
           ((-1 < *(short *)(iVar4 + *piVar3) && (*(unsigned char *)(iVar7 + 0x11) == uVar5)))) {
          *(char *)(iVar7 + 0x11) = 0;
        }
      } while (sVar6 != 0);
    }
    uVar5 = (unsigned int)(short)((short)uVar5 + 1);
  } while ((int)uVar5 < 0xff);
  return;
}

/* Address: 0x10021f6c Size: 1176 bytes */
unsigned short FUN_10021f6c(short param_1,short param_2)

{
  short sVar1;
  short sVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int uVar9;
  unsigned long long uVar10;
  int *ppuVar11;
  int iVar13;
  long long uVar12;
  short sVar14;
  short sVar15;
  int iVar16;
  long long lVar17;
  int iVar18;
  short local_68 [8];
  int local_58 [22];
  
  uVar9 = uRam1011772c;
  iVar8 = iRam101176e8;
  piVar7 = piRam10117364;
  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  uVar10 = ZEXT48(0 /* TVect base */);
  ppuVar11 = 0 /* TVect base */;
  lVar17 = 0;
  iVar18 = 0;
  do {
    local_68[iVar18] = 1;
    sVar14 = (short)iVar18 + 1;
    iVar18 = (int)sVar14;
  } while (sVar14 < 8);
  uVar3 = *(unsigned int *)(*piVar4 + param_2 * 0xe0 + param_1 * 2);
  if (-1 < param_1) {
    if (((-1 < param_2) && (*(char *)(*piVar5 + (uVar3 >> 0x18) + 0x711) != '\x02')) &&
       ((uVar3 >> 0x17 & 1) == 0)) {
      return 0;
    }
    if ((-1 < param_1) && (-1 < param_2)) {
      sVar14 = *(short *)(*piVar5 + 0x182);
      iVar18 = 0;
      if (sVar14 != 0) {
        do {
          sVar14 = sVar14 + -1;
          iVar13 = sVar14 * 0x16;
          iVar16 = *piVar6 + iVar13;
          if (((*(short *)(*piVar6 + iVar13) == param_1) && (*(short *)(iVar16 + 2) == param_2)) &&
             ((int)*(char *)(iVar16 + 5) == (int)*(short *)(*piVar5 + 0x110))) {
            local_58[iVar18] = iVar16;
            iVar18 = (int)(short)((short)iVar18 + 1);
          }
        } while (sVar14 != 0);
      }
      iVar13 = FUN_100421f0(local_58,local_68,iVar18);
      ppuVar11 = (int **)uVar10;
      if ((iVar13 == 0) && (iVar13 = 0, 0 < iVar18)) {
        do {
          iVar16 = local_58[iVar13];
          if (((*(unsigned short *)(iVar16 + 0xc) & 0x1000) == 0) &&
             ((*(char *)(iVar16 + 4) != '\x1c' &&
              (*(char *)(*piVar7 + *(char *)(iVar16 + 4) * 6) == '\0')))) {
            lVar17 = (long long)(short)((short)lVar17 + 1);
            FUN_100214e8(iVar16);
          }
          ppuVar11 = (int **)uVar10;
          sVar14 = (short)iVar13 + 1;
          iVar13 = (int)sVar14;
        } while (sVar14 < iVar18);
      }
      goto LAB_100222e0;
    }
  }
  sVar14 = *(short *)(*piVar5 + 0x182);
  while( true ) {
    sVar14 = sVar14 + -1;
    if (sVar14 == 0) break;
    iVar13 = sVar14 * 0x16;
    iVar18 = *piVar6 + iVar13;
    sVar2 = *(short *)(*piVar6 + iVar13);
    sVar15 = *(short *)(iVar18 + 2);
    if (((-1 < sVar2) && (-1 < sVar15)) &&
       (((int)*(char *)(iVar18 + 5) == (int)*(short *)(*piVar5 + 0x110) &&
        ((uVar3 = *(unsigned int *)(*piVar4 + sVar15 * 0xe0 + sVar2 * 2),
         *(char *)((uVar3 >> 0x18) + *piVar5 + 0x711) == '\x02' || ((uVar3 >> 0x17 & 1) != 0)))))) {
      sVar1 = *(short *)(*piVar5 + 0x182);
      iVar18 = 0;
      while( true ) {
        sVar1 = sVar1 + -1;
        if (sVar1 == 0) break;
        iVar13 = sVar1 * 0x16;
        iVar16 = *piVar6 + iVar13;
        if (((*(short *)(*piVar6 + iVar13) == sVar2) && (*(short *)(iVar16 + 2) == sVar15)) &&
           ((int)*(char *)(iVar16 + 5) == (int)*(short *)(*piVar5 + 0x110))) {
          local_58[iVar18] = iVar16;
          iVar18 = (int)(short)((short)iVar18 + 1);
        }
      }
      iVar13 = FUN_100421f0(local_58,local_68,iVar18);
      if ((iVar13 == 0) && (iVar13 = 0, 0 < iVar18)) {
        do {
          iVar16 = local_58[iVar13];
          if (((*(unsigned short *)(iVar16 + 0xc) & 0x1000) == 0) &&
             ((*(char *)(iVar16 + 4) != '\x1c' &&
              (*(char *)(*piVar7 + *(char *)(iVar16 + 4) * 6) == '\0')))) {
            lVar17 = (long long)(short)((short)lVar17 + 1);
            FUN_100214e8(iVar16);
          }
          sVar15 = (short)iVar13 + 1;
          iVar13 = (int)sVar15;
        } while (sVar15 < iVar18);
      }
    }
    ppuVar11 = (int **)uVar10;
  }
LAB_100222e0:
  if (0 < (int)lVar17) {
    FUN_10092be0();
    *(int *)(*(int*)((char*)ppuVar11 - 0xfc)) = 0;
    *(int *)(*(int*)((char*)ppuVar11 - 0x70)) = 0;
    iVar18 = 0;
    do {
      *(int *)(iVar18 * 4 + iVar8) = 0;
      sVar14 = (short)iVar18 + 1;
      iVar18 = (int)sVar14;
    } while (sVar14 < 8);
    *(short *)(*(int*)((char*)ppuVar11 - 0x553)) = 0;
    *(short *)(*(int*)((char*)ppuVar11 - 0x6f)) = 0;
    FUN_1002b91c();
    FUN_10007f78();
    if ((int)lVar17 == 1) {
      uVar12 = FUN_1005f678(0xa9,2);
      FUN_10001dd0(uVar9,uVar12,lVar17);
    }
    else {
      uVar12 = FUN_1005f678(0xa9,0);
      FUN_10001dd0(uVar9,uVar12,lVar17);
    }
    uVar12 = FUN_1005f678(0xa9,1);
    FUN_1003ced4(uVar9,uVar12);
    if ((-1 < param_1) && (-1 < param_2)) {
      FUN_1000848c((int)param_1,(int)param_2);
    }
  }
  return (unsigned short)((-1 - lVar17) + (unsigned long long)(lVar17 == 0) >> 0x10) >> 0xf;
}

/* Address: 0x10022404 Size: 664 bytes */
void FUN_10022404(void)

{
  int *piVar2;
  long long uVar1;
  short in_r6;
  short in_r7;
  short in_r8;
  short in_r9;
  short in_r10;
  short in_stack_0000003a;
  int *in_stack_0000003c;
  int local_5ac;
  char auStack_588 [256];
  char auStack_488 [256];
  char auStack_388 [256];
  char auStack_288 [256];
  char auStack_188 [256];
  char auStack_88 [136];
  
  if (in_r7 != 0) {
    piVar2 = (int *)FUN_10117884((int)in_stack_0000003c +
                                 (int)*(short *)(*in_stack_0000003c + 0x308),0x61726d79);
    if (piVar2 != (int *)0x0) {
      uVar1 = FUN_1004a21c(in_r6);
      FUN_100b19f4(auStack_188,uVar1);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_188,1);
    }
    FUN_10001dd0(auStack_88,*(int *)(local_5ac + -0x1b28),in_r8);
    piVar2 = (int *)FUN_10117884((int)in_stack_0000003c +
                                 (int)*(short *)(*in_stack_0000003c + 0x308),0x74696d65);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_288,auStack_88);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7c8) + (int)piVar2,auStack_288,1);
    }
    FUN_10001dd0(auStack_88,(unsigned long long)*(unsigned int *)(local_5ac + -0x1b28) + 0xc,in_r9);
    piVar2 = (int *)FUN_10117884((int)in_stack_0000003c +
                                 (int)*(short *)(*in_stack_0000003c + 0x308),0x636f7374);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_388,auStack_88);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_388,1);
    }
    FUN_10001dd0(auStack_88,(unsigned long long)*(unsigned int *)(local_5ac + -0x1b28) + 0x18,in_r10);
    piVar2 = (int *)FUN_10117884((int)in_stack_0000003c +
                                 (int)*(short *)(*in_stack_0000003c + 0x308),0x73747265);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_488,auStack_88);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_488,1);
    }
    FUN_10001dd0(auStack_88,(unsigned long long)*(unsigned int *)(local_5ac + -0x1b28) + 0x28,in_stack_0000003a);
    piVar2 = (int *)FUN_10117884((int)in_stack_0000003c +
                                 (int)*(short *)(*in_stack_0000003c + 0x308),0x6d6f7665);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_588,auStack_88);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_588,1);
    }
  }
  return;
}

/* Address: 0x100226d4 Size: 100 bytes */
void FUN_100226d4(short *param_1)

{
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  local_6 = *param_1;
  local_8 = param_1[1];
  local_2 = local_6 + param_1[2];
  local_4 = local_8 + param_1[3];
  FUN_100b0578(&local_8);
  FUN_100021d8();
  return;
}

/* Address: 0x10022738 Size: 100 bytes */
void FUN_10022738(short *param_1)

{
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  local_6 = *param_1;
  local_8 = param_1[1];
  local_2 = local_6 + param_1[2];
  local_4 = local_8 + param_1[3];
  FUN_100b0578(&local_8);
  FUN_10002148();
  return;
}

/* Address: 0x10022d64 Size: 492 bytes */
void FUN_10022d64(short param_1)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  int *piVar4;
  int *ppuVar5;
  int iVar7;
  long long uVar6;
  short sVar8;
  int **local_74;
  char auStack_50 [80];
  
  piVar4 = piRam101174b8;
  piVar3 = piRam101174b4;
  psVar2 = psRam10115d94;
  ppuVar5 = 0 /* TVect base */;
  if (((*psRam10115d94 != param_1) || ((int *)*piRam101174b8 == (int *)0x0)) ||
     (*(int *)*piRam101174b8 == 0)) {
    if ((*psRam10115d90 == 0) || (*piRam101174b8 == 0)) {
      *psRam10115d90 = 1;
      ppuVar5 = 0 /* TVect base */;
      iVar7 = FUN_100f15e0(8000);
      *piVar4 = iVar7;
    }
    else if (*(int *)*piRam101174b8 == 0) {
      FUN_100004e0((int *)*piRam101174b8,8000);
      ppuVar5 = local_74;
      FUN_100db1ec();
    }
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      FUN_10002598(piVar1);
      ppuVar5 = local_74;
    }
    *piVar3 = *piVar1;
    *psVar2 = param_1;
    piVar1 = *(int **)(*(int *)(*(int *)(*(int*)((char*)ppuVar5 - 0x155)) + 0x88) + 0x148);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
    uVar6 = FUN_1005f6b0(0x16,*psVar2 + -1);
    FUN_10001dd0(auStack_50,uVar6,ZEXT48(local_74[-0xa7]) + 0x3c,ZEXT48(local_74[-0xa7]) + 0x3c);
    if (*psVar2 == 1) {
      uVar6 = 0x43545920;
    }
    else {
      uVar6 = 0x53504320;
    }
    uVar6 = FUN_10052184(uVar6,10000,1);
    FUN_10052490(uVar6,*piVar3,8000);
    FUN_100523a8(uVar6,1);
    iVar7 = 0;
    do {
      if (*(char *)(*piVar3 + iVar7) == '|') {
        *(char *)(iVar7 + *piVar3) = 0;
      }
      sVar8 = (short)iVar7 + 1;
      iVar7 = (int)sVar8;
    } while (sVar8 < 8000);
    if (*piVar4 != 0) {
      FUN_10002ad8(*piVar4);
    }
    FUN_10001f50(*piVar4);
  }
  return;
}

/* Address: 0x10022f50 Size: 408 bytes */
void FUN_10022f50(short param_1,short param_2,char *param_3,char *param_4,
                 char *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *ppuVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int **local_54;
  char auStack_30 [48];
  
  piVar3 = piRam101174b8;
  piVar2 = piRam101174b4;
  ppuVar4 = 0 /* TVect base */;
  FUN_10022d64(param_1);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    FUN_10002598(piVar1);
    ppuVar4 = local_54;
  }
  *piVar2 = *piVar1;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  FUN_10001dd0(auStack_30,ZEXT48((*(int*)((char*)ppuVar4 - 0x6c9))) + 0x38,param_2);
  sVar7 = 0;
  iVar8 = 0;
  do {
    if ((*(char *)(*piVar2 + iVar8) == '#') &&
       (iVar5 = FUN_100001e0(*piVar2 + iVar8 + 1,auStack_30), iVar5 == 0)) {
      if (iVar8 < 8000) goto LAB_10023010;
      break;
    }
    sVar6 = (short)iVar8 + 1;
    iVar8 = (int)sVar6;
  } while (sVar6 < 8000);
  goto LAB_100230bc;
LAB_10023010:
  do {
    if (*(char *)(*piVar2 + iVar8) == '\0') {
      if (sVar7 == 0) {
        FUN_10001e78(param_3,*piVar2 + iVar8 + 1);
        sVar7 = 1;
      }
      else if (sVar7 == 1) {
        FUN_10001e78(param_4,*piVar2 + iVar8 + 1);
        sVar7 = 2;
      }
      else if (sVar7 == 2) {
        FUN_10001e78(param_5,*piVar2 + iVar8 + 1);
        break;
      }
    }
    sVar6 = (short)iVar8 + 1;
    iVar8 = (int)sVar6;
  } while (sVar6 < 8000);
LAB_100230bc:
  iVar8 = *piVar3;
  if (iVar8 != 0) {
    FUN_10002ad8(iVar8);
  }
  return;
}

/* Address: 0x10025c68 Size: 56 bytes */
void FUN_10025c68(void)

{
  FUN_10025758(0,*puRam10115db4,*puRam10115db0);
  return;
}

/* Address: 0x10025ca0 Size: 56 bytes */
void FUN_10025ca0(void)

{
  FUN_10025758(2,*puRam10115db4,*puRam10115db0);
  return;
}

/* Address: 0x10025cd8 Size: 56 bytes */
void FUN_10025cd8(void)

{
  FUN_10025758(3,*puRam10115db4,*puRam10115db0);
  return;
}

/* Address: 0x10025d10 Size: 56 bytes */
void FUN_10025d10(void)

{
  FUN_10025758(1,*puRam10115db4,*puRam10115db0);
  return;
}

/* Address: 0x10025d48 Size: 80 bytes */
short FUN_10025d48(short param_1)

{
  if (*puRam10115d80 < 5) {
    return param_1;
  }
  return param_1;
}

/* Address: 0x10025e04 Size: 64 bytes */
void FUN_10025e04(void)

{
  *puRam10115d94 = 0;
  *puRam10115d90 = 0;
  FUN_100ef510(*puRam101174b8);
  return;
}

/* Address: 0x10025e44 Size: 112 bytes */
void FUN_10025e44(void)

{
  unsigned long long uVar1;
  
  uVar1 = (unsigned long long)uRam10115d7c;
  FUN_10050c0c(uVar1 + 0x70,uVar1 + 0x7c,uVar1 + 0x94,
               (unsigned long long)*puRam1011735c +
               (((long long)*psRam1011677c & 0x7ffffffU) * 0x20 + (long long)*psRam1011677c &
               0x7fffffff) * 2 + 0x1608,uRam10115dbc,uRam10115dc0,1,0xf);
  return;
}

/* Address: 0x10025eb4 Size: 84 bytes */
void FUN_10025eb4(long long param_1)

{
  FUN_10001e78((unsigned long long)*puRam1011735c +
               (((long long)*psRam1011677c & 0x7ffffffU) * 0x20 + (long long)*psRam1011677c &
               0x7fffffff) * 2 + 0x1608,param_1);
  FUN_10025d10();
  return;
}

/* Address: 0x10025f08 Size: 36 bytes */
void FUN_10025f08(void)

{
  FUN_10025d10();
  return;
}

/* Address: 0x1002606c Size: 324 bytes */
void FUN_1002606c(short *param_1,int param_2)

{
  short uVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = piRam1011735c;
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar4 = iVar6;
    if (*(short *)(*piVar2 + iVar5 * 2 + 0x138) != 0) {
      iVar4 = (int)(short)((short)iVar6 + 1);
      *(short *)(param_2 + iVar6 * 2) = (short)iVar5;
    }
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
    iVar6 = iVar4;
  } while (sVar3 < 8);
  *param_1 = (short)iVar4;
  iVar6 = 1;
  if (1 < iVar4) {
    do {
      iVar5 = iVar6;
      if (*(short *)(*piVar2 + *(short *)(param_2 + iVar6 * 2) * 2 + 0x1122) <
          *(short *)(*piVar2 + *(short *)(param_2 + iVar6 * 2 + -2) * 2 + 0x1122)) {
        do {
          if (iVar5 < 1) break;
          iVar4 = iVar5 * 2;
          uVar1 = *(short *)(param_2 + iVar4);
          *(short *)(param_2 + iVar4) = *(short *)(param_2 + iVar4 + -2);
          *(short *)(param_2 + iVar4 + -2) = uVar1;
          iVar5 = (int)(short)((short)iVar5 + -1);
        } while (*(short *)(*piVar2 + *(short *)(param_2 + iVar5 * 2) * 2 + 0x1122) <
                 *(short *)(*piVar2 + *(short *)(param_2 + iVar5 * 2 + -2) * 2 + 0x1122));
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < *param_1);
  }
  if ((int)*param_1 - 1U < 8) {
    return;
  }
  return;
}

/* Address: 0x100266e4 Size: 1756 bytes */
void FUN_100266e4(short param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  long long uVar4;
  int *piVar5;
  int *piVar6;
  short sVar7;
  long long lVar8;
  unsigned long long uVar9;
  char auStack_130 [256];
  int local_30;
  int local_2c;
  char auStack_28 [40];
  
  piVar3 = piRam1011735c;
  uVar4 = FUN_10117884(*piRam10115dc4 + (int)*(short *)(*(int *)*piRam10115dc4 + 0x7f8));
  FUN_100db26c();
  local_30 = 7;
  local_2c = 0x14;
  piVar5 = (int *)FUN_10078a30(uVar4,0x6162616b,0x10ce,&local_30,0);
  if (param_1 == 0) {
    piVar6 = (int *)FUN_10117884((int)*(short *)(*piVar5 + 0x308) + (int)piVar5,0x73696465);
    if (piVar6 != (int *)0x0) {
      if (*(short *)((int)piVar6 + 0x82) != 0) {
        *(short *)((int)piVar6 + 0x82) = 0;
      }
      if (*(short *)(*piVar3 + 0x110) != *(short *)(piVar6 + 0x20)) {
        *(short *)(piVar6 + 0x20) = *(short *)(*piVar3 + 0x110);
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
      }
    }
    FUN_100b19f4(auStack_130,*piVar3 + *(short *)(*piVar3 + 0x110) * 0x14);
    FUN_10090e0c(piVar5,0x6e616d65,auStack_130,1);
  }
  uVar9 = 0;
  lVar8 = 0;
  do {
    if ((int)*(short *)(*piVar3 + 0x110) != (int)uVar9) {
      piVar6 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),lVar8 + 0x73696431
                                  );
      if (piVar6 != (int *)0x0) {
        if (*(short *)((int)piVar6 + 0x82) != 0) {
          *(short *)((int)piVar6 + 0x82) = 0;
        }
        if ((int)uVar9 != (int)*(short *)(piVar6 + 0x20)) {
          *(short *)(piVar6 + 0x20) = (short)uVar9;
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
        }
      }
      uVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),lVar8 + 0x73746131);
      if (*(short *)(*piVar3 + (int)((uVar9 & 0xffffffff) << 1) + 0x138) == 0) {
        if ((int)uVar4 != 0) {
          FUN_1008521c(uVar4);
        }
      }
      else {
        FUN_100226b0(auStack_28,
                     ((unsigned short)((unsigned int)*(int *)
                                      (*piVar3 + (int)((uVar9 & 0xffffffff) << 4) +
                                       *(short *)(*piVar3 + 0x110) * 2 + 0x1582) >> 0x1a) & 3) *
                     0x78 + 0x50,0x2d,0x28,0x28);
        if ((int)uVar4 != 0) {
          FUN_100850e8(uVar4,0x2f,auStack_28,0x24,0xf,1);
        }
      }
      uVar4 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),lVar8 + 0x70726f31);
      iVar1 = *piVar3;
      if (*(short *)(iVar1 + (int)((uVar9 & 0xffffffff) << 1) + 0x138) == 0) {
LAB_10026a20:
        if ((int)uVar4 != 0) {
          FUN_1008521c(uVar4);
        }
      }
      else {
        uVar2 = *(unsigned int *)(iVar1 + (int)((uVar9 & 0xffffffff) << 4) + *(short *)(iVar1 + 0x110) * 2 +
                         0x1582);
        if ((uVar2 >> 0x1a & 3) == (uVar2 >> 0x1c & 3)) goto LAB_10026a20;
        FUN_100226b0(auStack_28,
                     ((unsigned short)((unsigned int)*(int *)
                                      (*piVar3 + (int)((uVar9 & 0xffffffff) << 4) +
                                       *(short *)(*piVar3 + 0x110) * 2 + 0x1582) >> 0x1c) & 3) *
                     0x78 + 0x50,0x2d,0x28,0x28);
        if ((int)uVar4 != 0) {
          FUN_100850e8(uVar4,0x2f,auStack_28,0x24,0xf,1);
        }
      }
      piVar6 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),lVar8 + 0x70656131
                                  );
      if (*(short *)(*piVar3 + (int)((uVar9 & 0xffffffff) << 1) + 0x138) == 0) {
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7a8),0xffffffffffffffff,1);
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xd8),0);
        }
      }
      else if ((*(unsigned int *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0x10 +
                          (int)((uVar9 & 0xffffffff) << 1) + 0x1582) >> 0x1c & 3) == 0) {
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x748),1,1);
        }
      }
      else if (piVar6 != (int *)0x0) {
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x748),0,1);
      }
      piVar6 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),lVar8 + 0x686f7331
                                  );
      if (*(short *)(*piVar3 + (int)((uVar9 & 0xffffffff) << 1) + 0x138) == 0) {
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7a8),0xffffffffffffffff,1);
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xd8),0);
        }
      }
      else if ((*(unsigned int *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0x10 +
                          (int)((uVar9 & 0xffffffff) << 1) + 0x1582) >> 0x1c & 3) == 1) {
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x748),1,1);
        }
      }
      else if (piVar6 != (int *)0x0) {
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x748),0,1);
      }
      piVar6 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),lVar8 + 0x77617231
                                  );
      if (*(short *)(*piVar3 + (int)((uVar9 & 0xffffffff) << 1) + 0x138) == 0) {
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7a8),0xffffffffffffffff,1);
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xd8),0);
        }
      }
      else if ((*(unsigned int *)(*piVar3 + *(short *)(*piVar3 + 0x110) * 0x10 +
                          (int)((uVar9 & 0xffffffff) << 1) + 0x1582) >> 0x1c & 3) == 2) {
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x748),1,1);
        }
      }
      else if (piVar6 != (int *)0x0) {
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x748),0,1);
      }
      lVar8 = (long long)(short)((short)lVar8 + 1);
    }
    sVar7 = (short)uVar9 + 1;
    uVar9 = (unsigned long long)sVar7;
    if (7 < sVar7) {
      return;
    }
  } while( true );
}

/* Address: 0x10026df0 Size: 4 bytes */
void FUN_10026df0(void)

{
  return;
}

/* Address: 0x10026df4 Size: 380 bytes */
void FUN_10026df4(void)

{
  int *piVar1;
  int *piVar2;
  int *puVar3;
  int iVar4;
  char auStack_128 [256];
  short local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar3 = puRam10117370;
  piVar2 = piRam10115dc4;
  if (*(short *)(*piRam1011735c + 0x11c) != 0) {
    if (*piRam10115dc4 == 0) {
      iVar4 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0x10cc,
                           *(int *)(*piRam1011734c + 0x88));
      *piVar2 = iVar4;
      FUN_100db26c();
    }
    FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 800));
    FUN_100266e4(0);
    FUN_10026df0();
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = *puVar3;
    *puVar3 = auStack_128;
    iVar4 = FUN_10000090(auStack_128);
    if (iVar4 == 0) {
      FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
      FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
      *piVar2 = 0;
      *puVar3 = local_20;
    }
    else {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
      }
      *piVar2 = 0;
      FUN_100db158(local_28,local_24);
    }
  }
  return;
}

/* Address: 0x10026f70 Size: 208 bytes */
void FUN_10026f70(short param_1,short param_2)

{
  short sVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  
  piVar2 = piRam1011735c;
  ppuVar3 = 0 /* TVect base */;
  iVar4 = (int)param_2;
  sVar1 = *(short *)(*piRam1011735c + 0x110);
  if ((*(short *)(*piRam1011735c + sVar1 * 2 + 0xd0) == 0) && (sVar1 <= param_2)) {
    iVar4 = (int)(short)(param_2 + 1);
  }
  iVar4 = *piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 0x10 + iVar4 * 2;
  *(unsigned int *)(iVar4 + 0x1582) = ((int)param_1 & 3U) << 0x1c | *(unsigned int *)(iVar4 + 0x1582) & 0xcfffffff;
  if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0xd0) == 0) {
    ppuVar3 = 0 /* TVect base */;
    FUN_100266e4(1);
    FUN_10026df0();
  }
  FUN_10117884((int)*(int **)(*(int *)(*(int*)((char*)ppuVar3 - 0x155)) + 0x88) +
               (int)*(short *)(**(int **)(*(int *)(*(int*)((char*)ppuVar3 - 0x155)) + 0x88) + 0x38),0,0);
  return;
}

/* Address: 0x10027040 Size: 272 bytes */
void FUN_10027040(void)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int bVar4;
  int bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar6 = piRam1011735c;
  sVar1 = *(short *)(*piRam1011735c + 0x110);
  iVar7 = (int)sVar1;
  iVar8 = *piRam1011735c + iVar7 * 0x12;
  *(unsigned int *)(iVar8 + 0x1582) = *(unsigned int *)(iVar8 + 0x1582) & 0xbfffffff;
  iVar8 = iVar7 * 0x12 + *piVar6;
  *(unsigned int *)(iVar8 + 0x1582) = *(unsigned int *)(iVar8 + 0x1582) & 0x7fffffff;
  bVar4 = false;
  iVar8 = 0;
  bVar5 = false;
  do {
    if (iVar8 != sVar1) {
      uVar2 = *(unsigned int *)(*piVar6 + iVar8 * 0x10 + iVar7 * 2 + 0x1582);
      uVar3 = uVar2 >> 0x1c & 3;
      uVar2 = uVar2 >> 0x1a & 3;
      if (uVar2 != uVar3) {
        if (uVar3 < uVar2) {
          bVar4 = true;
        }
        else {
          bVar5 = true;
        }
      }
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 8);
  if ((bVar4) || (bVar5)) {
    iVar8 = *piVar6 + iVar7 * 0x12;
    *(unsigned int *)(iVar8 + 0x1582) = *(unsigned int *)(iVar8 + 0x1582) | 0x40000000;
  }
  if ((bVar4) && (!bVar5)) {
    iVar8 = *piVar6 + iVar7 * 0x12;
    *(unsigned int *)(iVar8 + 0x1582) = *(unsigned int *)(iVar8 + 0x1582) | 0x80000000;
  }
  return;
}

/* Address: 0x10027150 Size: 756 bytes */
void FUN_10027150(void)

{
  short sVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  unsigned int *puVar9;
  int uVar10;
  long long uVar11;
  short sVar12;
  unsigned int uVar13;
  int bVar14;
  unsigned int uVar15;
  unsigned long long uVar16;
  unsigned long long uVar17;
  
  uVar10 = uRam1011772c;
  puVar9 = puRam1011735c;
  psVar8 = psRam10115e2c;
  sVar1 = *(short *)(*puRam1011735c + 0x110);
  uVar16 = (unsigned long long)sVar1;
  uVar17 = 0;
  do {
    if ((int)uVar17 != (int)sVar1) {
      iVar5 = (int)((uVar16 & 0xfffffff) << 4);
      iVar6 = (int)((uVar17 & 0x7fffffff) << 1);
      iVar3 = *puVar9 + iVar5 + iVar6;
      uVar2 = *(unsigned int *)(iVar3 + 0x1582);
      uVar13 = uVar2 >> 0x1c & 3;
      uVar15 = uVar2 >> 0x1a & 3;
      if (uVar15 != uVar13) {
        if (uVar15 < uVar13) {
          *(unsigned int *)(iVar3 + 0x1582) = uVar13 << 0x1a | uVar2 & 0xf3ffffff;
          iVar7 = (int)((uVar17 & 0xfffffff) << 4);
          iVar4 = (int)((uVar16 & 0x7fffffff) << 1);
          iVar3 = *puVar9 + iVar7 + iVar4;
          *(unsigned int *)(iVar3 + 0x1582) =
               (*(unsigned int *)(*puVar9 + iVar5 + iVar6 + 0x1582) >> 0x1c & 3) << 0x1a |
               *(unsigned int *)(iVar3 + 0x1582) & 0xf3ffffff;
          iVar4 = iVar7 + *puVar9 + iVar4;
          uVar2 = *(unsigned int *)(iVar4 + 0x1582);
          uVar13 = uVar2 >> 0x1a & 3;
          if ((uVar2 >> 0x1c & 3) < uVar13) {
            *(unsigned int *)(iVar4 + 0x1582) = uVar13 << 0x1c | uVar2 & 0xcfffffff;
          }
          if ((*(unsigned int *)(*puVar9 + (int)((uVar16 & 0xffffffff) << 4) +
                         (int)((uVar17 & 0xffffffff) << 1) + 0x1582) >> 0x1c & 3) == 2) {
            FUN_10038c60(uVar16,9,uVar16,uVar17,0);
            uVar2 = *puVar9;
            if (*(short *)(uVar2 + 0x15a) != 0) {
              if ((*psVar8 == 0) && (*(short *)(uVar2 + *(short *)(uVar2 + 0x110) * 2 + 0xd0) != 1))
              {
                bVar14 = false;
              }
              else {
                bVar14 = true;
              }
              if (bVar14) {
                uVar11 = FUN_1005f678(0x70,1);
                FUN_10001dd0(uVar10,uVar11,
                             (unsigned long long)*puVar9 +
                             ((uVar17 & 0x3fffffff) * 4 + uVar17 & 0x3fffffff) * 4);
                FUN_1003cac4(uVar10,0x14);
              }
            }
          }
        }
        else {
          iVar7 = (int)((uVar16 & 0xfffffff) << 4);
          iVar4 = (int)((uVar17 & 0x7fffffff) << 1);
          iVar3 = *puVar9 + iVar7 + iVar4;
          uVar2 = *(unsigned int *)(iVar3 + 0x1582);
          uVar13 = uVar2 >> 0x1c & 3;
          iVar5 = (int)((uVar17 & 0xfffffff) << 4);
          iVar6 = (int)((uVar16 & 0x7fffffff) << 1);
          if ((*(unsigned int *)(*puVar9 + iVar5 + iVar6 + 0x1582) >> 0x1c & 3) <= uVar13) {
            *(unsigned int *)(iVar3 + 0x1582) = uVar13 << 0x1a | uVar2 & 0xf3ffffff;
            iVar6 = iVar5 + *puVar9 + iVar6;
            *(unsigned int *)(iVar6 + 0x1582) =
                 (*(unsigned int *)(iVar7 + *puVar9 + iVar4 + 0x1582) >> 0x1c & 3) << 0x1a |
                 *(unsigned int *)(iVar6 + 0x1582) & 0xf3ffffff;
            if ((*(unsigned int *)(iVar7 + *puVar9 + iVar4 + 0x1582) >> 0x1c & 3) == 0) {
              FUN_10038c60(uVar16,10,uVar16,uVar17,0);
              uVar2 = *puVar9;
              if (*(short *)(uVar2 + 0x15a) != 0) {
                if ((*psVar8 == 0) &&
                   (*(short *)(uVar2 + *(short *)(uVar2 + 0x110) * 2 + 0xd0) != 1)) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                if (bVar14) {
                  uVar11 = FUN_1005f678(0x70,0);
                  FUN_10001dd0(uVar10,uVar11,
                               (unsigned long long)*puVar9 +
                               ((uVar17 & 0x3fffffff) * 4 + uVar17 & 0x3fffffff) * 4);
                  FUN_1003cac4(uVar10,0x14);
                }
              }
            }
          }
        }
      }
    }
    sVar12 = (short)uVar17 + 1;
    uVar17 = (unsigned long long)sVar12;
  } while (sVar12 < 8);
  return;
}

/* Address: 0x1002774c Size: 40 bytes */
void FUN_1002774c(void)

{
  FUN_10092c5c(4);
  return;
}

/* Address: 0x10027774 Size: 564 bytes */
void FUN_10027774(long long param_1,short param_2)

{
  int *piVar1;
  int *ppuVar2;
  int *piVar10;
  long long uVar3;
  long long uVar4;
  long long uVar5;
  long long uVar6;
  long long uVar7;
  long long uVar8;
  long long uVar9;
  int **local_3c;
  
  piVar1 = piRam10116478;
  piVar10 = (int *)*piRam10116478;
  ppuVar2 = 0 /* TVect base */;
  if (piVar10 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar10 + 0x738) + (int)piVar10);
    *piVar1 = 0;
    ppuVar2 = local_3c;
  }
  FUN_10075894(*(int *)(*(int*)((char*)ppuVar2 - 0x155)));
  piVar10 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar2 - 0x79)) +
                                (int)*(short *)(**(int **)(*(int*)((char*)ppuVar2 - 0x79)) + 200),0x3f2,param_1);
  FUN_100db26c();
  *(int **)local_3c[-0x649] = piVar10;
  FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 800));
  FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x4c8));
  if (param_2 == 0) {
    uVar3 = FUN_1005f678(0x87,6);
    uVar4 = FUN_1005f678(0x87,5);
    uVar5 = FUN_1005f678(0x87,4);
    uVar6 = FUN_1005f678(0x87,3);
    uVar7 = FUN_1005f678(0x87,2);
    uVar8 = FUN_1005f678(0x87,1);
    uVar9 = FUN_1005f678(0x87,0);
    FUN_10040408(uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3);
  }
  else {
    uVar3 = FUN_1005f678(0x86,6);
    uVar4 = FUN_1005f678(0x86,5);
    uVar5 = FUN_1005f678(0x86,4);
    uVar6 = FUN_1005f678(0x86,3);
    uVar7 = FUN_1005f678(0x86,2);
    uVar8 = FUN_1005f678(0x86,1);
    uVar9 = FUN_1005f678(0x86,0);
    FUN_10040408(uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3);
  }
  return;
}

/* Address: 0x100279a8 Size: 176 bytes */
void FUN_100279a8(long long param_1,char *param_2)

{
  long long uVar1;
  int iVar2;
  int local_134;
  char local_110 [256];
  char auStack_10 [4];
  char auStack_c [12];
  
  if ((int)param_1 == 0) {
    *param_2 = 0;
  }
  else {
    local_110[0] = 0;
    FUN_10001758(param_1,auStack_10,auStack_c,local_110);
    iVar2 = local_134;
    uVar1 = FUN_100b1b08(local_110);
    uVar1 = FUN_10002af0(uVar1,*(int *)(iVar2 + -0x1ad8));
    iVar2 = (int)uVar1;
    while (iVar2 != 0) {
      FUN_10001e78(param_2,uVar1);
      uVar1 = FUN_10002af0(0,(unsigned long long)*(unsigned int *)(local_134 + -0x1ad8) + 4);
      iVar2 = (int)uVar1;
    }
  }
  return;
}

/* Address: 0x10027a58 Size: 1512 bytes */
void FUN_10027a58(unsigned char param_1,unsigned char *param_2,unsigned long long param_3,long long param_4)

{
  int bVar1;
  unsigned int *puVar2;
  unsigned short uVar3;
  unsigned char *pbVar6;
  long long uVar4;
  int *puVar7;
  char *puVar8;
  unsigned char *pbVar9;
  int iVar10;
  unsigned int uVar11;
  long long uVar5;
  int *piVar12;
  char *puVar13;
  unsigned char *pbVar14;
  char *puVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  char *puVar18;
  char *pcVar19;
  char *puVar20;
  char *puVar21;
  char cVar22;
  unsigned int *puVar23;
  int local_e64;
  unsigned char local_e40 [256];
  char auStack_d40 [80];
  int local_cf0 [16];
  char auStack_cb0 [256];
  unsigned char local_bb0 [256];
  char local_ab0 [256];
  char auStack_9b0 [128];
  unsigned char local_930 [256];
  unsigned char local_830 [512];
  char local_630 [256];
  char local_530 [4];
  char local_52c [256];
  char local_42c [72];
  unsigned int local_3e4;
  unsigned char local_3e0 [256];
  char auStack_2e0 [256];
  int local_1e0;
  char auStack_1dc [312];
  short local_a4 [2];
  char auStack_a0 [4];
  char auStack_9c [156];
  
  uVar3 = (unsigned short)param_1;
  pbVar9 = ((char*)0) + -0xe40;
  puVar13 = ((char*)0) + -0xd40;
  puVar7 = (int *)(((char*)0) + -0xcf0);
  puVar8 = ((char*)0) + -0xcb0;
  pbVar14 = ((char*)0) + -0xbb0;
  puVar15 = ((char*)0) + -0xab0;
  pbVar16 = ((char*)0) + -0x930;
  pbVar17 = ((char*)0) + -0x830;
  puVar18 = ((char*)0) + -0x630;
  pcVar19 = ((char*)0) + -0x530;
  puVar21 = ((char*)0) + -0x52c;
  puVar20 = ((char*)0) + -0x42c;
  puVar23 = (unsigned int *)(((char*)0) + -0x3e4);
  *puVar7 = 0x3c;
  FUN_10001bd8((unsigned long long)*puRam101169c4 + 0x32,puVar7);
  FUN_100db2f4();
  *puVar21 = 0;
  FUN_100009d8(puVar21,0x3ea,uVar3 + 1);
  FUN_100b1ed0(pbVar9,puVar21,param_2);
  pbVar6 = pbVar17;
  if ((((char*)0) != (char *)0x830) ||
     (pbVar6 = (unsigned char *)FUN_100f56e4(0x100), pbVar6 != (unsigned char *)0x0)) {
    FUN_100012d8(pbVar9,pbVar6,(unsigned long long)*pbVar9 + 1);
  }
  uVar4 = FUN_100b1c84(pbVar17);
  puVar7 = (int *)FUN_10003540(0x4e414d45,uVar4);
  if (puVar7 != (int *)0x0) {
    param_2 = (unsigned char *)*puVar7;
  }
  pbVar6 = pbVar14;
  if ((((char*)0) != (char *)0xbb0) ||
     (pbVar6 = (unsigned char *)FUN_100f56e4(0x100), pbVar6 != (unsigned char *)0x0)) {
    FUN_100012d8(param_2,pbVar6,(unsigned long long)*param_2 + 1);
  }
  pbVar6 = ((char*)0) + -0x3e0;
  FUN_100b1ed0(pbVar6,puVar21,pbVar14);
  if ((((char*)0) != (char *)0xcb0) ||
     (puVar8 = (char *)FUN_100f56e4(0x100), puVar8 != (char *)0x0)) {
    FUN_100012d8(pbVar6,puVar8,(unsigned long long)*pbVar6 + 1);
  }
  pbVar6 = pbVar17;
  if (puVar7 != (int *)0x0) {
    pbVar6 = pbVar14;
  }
  pbVar9 = pbVar16;
  if ((((char*)0) != (char *)0x930) ||
     (pbVar9 = (unsigned char *)FUN_100f56e4(0x100), pbVar9 != (unsigned char *)0x0)) {
    FUN_100012d8(pbVar6,pbVar9,(unsigned long long)*pbVar6 + 1);
  }
  *puVar23 = 0;
  *pcVar19 = '\0';
  bVar1 = false;
  if ((unsigned int)param_3 != 0) {
    iVar10 = FUN_10002070(puVar20,param_3,param_4,pcVar19);
    bVar1 = iVar10 == 0;
    *puVar23 = (unsigned int)param_3;
    *pcVar19 = '\0';
  }
  if (!bVar1) {
    FUN_100981f8(puVar13,0x80);
    puVar8 = ((char*)0) + -0x2e0;
    if ((((char*)0) != (char *)0x2e0) ||
       (puVar8 = (char *)FUN_100f56e4(0x100), puVar8 != (char *)0x0)) {
      FUN_100012d8(pbVar17,puVar8,(unsigned long long)*pbVar17 + 1);
    }
    uVar11 = FUN_100984a4(puVar13,0x616c6973,puVar8);
    *puVar23 = uVar11;
    FUN_100982e8(puVar13,2);
    if ((*puVar23 != 0) && (iVar10 = FUN_10002070(puVar20,*puVar23,param_4,pcVar19), iVar10 == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar10 = FUN_100017e8(((char*)0) + -0x9b0);
      if (iVar10 == 0) {
        bVar1 = true;
        if (*puVar23 != 0) {
          FUN_100006c0(puVar20,param_4,*puVar23,pcVar19);
        }
      }
      if (!bVar1) {
        *puVar18 = 0;
        FUN_100009d8(puVar18,0x3e9,uVar3 + 1);
        uVar4 = FUN_100b1c84(pbVar14);
        uVar5 = FUN_100b1c84(puVar18);
        FUN_100009f0(uVar5,uVar4,0,0);
        iVar10 = FUN_100d8c9c(1000,0);
        FUN_100009f0(0,0,0,0);
        if (iVar10 == 2) {
          FUN_100db158(0,0x820000);
        }
        puVar2 = *(unsigned int **)(local_e64 + -0x554);
        FUN_100012d8(pbVar16,(unsigned long long)*puVar2 + 0xa0,(unsigned long long)*pbVar16 + 1);
        *(unsigned char *)(*puVar2 + 0x1a0) = param_1;
        iVar10 = FUN_10117884((int)*puVar2 + (int)*(short *)(*(int *)*puVar2 + 0x360),uVar3 + 0x3e9,
                              ((char*)0) + -0x1e0);
        if (iVar10 == 0) {
          FUN_100db158(0,0x820000);
        }
        puVar8 = ((char*)0) + -0x1dc;
        FUN_100ebf7c(puVar8,local_1e0,1);
        piVar12 = (int *)FUN_100ec060(puVar8);
        FUN_10117884((int)piVar12 + (int)*(short *)(*piVar12 + 0x178),param_4);
        FUN_100ebff4(puVar8,2);
        if (*puVar23 != 0) {
          FUN_100006c0(puVar20,param_4,*puVar23,pcVar19);
        }
      }
    }
  }
  cVar22 = '\x01';
  if (*puVar23 == 0) {
    FUN_100006d8(puVar20,param_4,puVar23);
    local_a4[0] = 0xffff;
  }
  else {
    cVar22 = *pcVar19;
    *puVar15 = 0;
    FUN_10001758(*puVar23,((char*)0) + -0xa4,((char*)0) + -0xa0,puVar15);
  }
  if (cVar22 != '\0') {
    puVar8 = ((char*)0) + -0x9c;
    FUN_100981f8(puVar8,0x80);
    FUN_100985fc(puVar8,*puVar23,0x616c6973,local_a4[0],pbVar17);
    FUN_100982e8(puVar8,2);
  }
  if ((unsigned long long)*puVar23 != (param_3 & 0xffffffff)) {
    uVar11 = FUN_100ef510((unsigned long long)*puVar23);
    *puVar23 = uVar11;
  }
  return;
}

/* Address: 0x10028040 Size: 952 bytes */
void FUN_10028040(int param_1,int *param_2)

{
  long long uVar1;
  char auStack_5a8 [256];
  char auStack_4a8 [256];
  char auStack_3a8 [256];
  char auStack_2a8 [256];
  char auStack_1a8 [256];
  char auStack_a8 [72];
  char auStack_60 [96];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
  uVar1 = FUN_10003558(0x4e414d45,10000);
  FUN_100db328();
  FUN_100279a8(uVar1,auStack_60);
  uVar1 = FUN_10003558(0x616c6973,1000);
  FUN_100b19f4(auStack_1a8,auStack_60);
  FUN_10027a58(0,auStack_1a8,uVar1,auStack_a8);
  FUN_1007ec7c(param_1,auStack_a8);
  FUN_10117884((int)*(int **)(param_1 + 0x148) +
               (int)*(short *)(**(int **)(param_1 + 0x148) + 0x118));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
  uVar1 = FUN_10003558(0x4e414d45,30000);
  FUN_100db328();
  FUN_100279a8(uVar1,auStack_60);
  uVar1 = FUN_10003558(0x616c6973,0x3e9);
  FUN_100b19f4(auStack_2a8,auStack_60);
  FUN_10027a58(1,auStack_2a8,uVar1,auStack_a8);
  FUN_1007ed14(param_1,auStack_a8);
  FUN_10117884((int)*(int **)(param_1 + 0x14c) +
               (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x118));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
  uVar1 = FUN_10003558(0x4e414d45,20000);
  if ((int)uVar1 != 0) {
    FUN_100279a8(uVar1,auStack_60);
    uVar1 = FUN_10003558(0x616c6973,0x3ea);
    FUN_100b19f4(auStack_3a8,auStack_60);
    FUN_10027a58(2,auStack_3a8,uVar1,auStack_a8);
    FUN_1007edac(param_1,auStack_a8);
    FUN_10117884((int)*(int **)(param_1 + 0x150) +
                 (int)*(short *)(**(int **)(param_1 + 0x150) + 0x118));
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
  uVar1 = FUN_10003558(0x4e414d45,25000);
  if ((int)uVar1 != 0) {
    FUN_100279a8(uVar1,auStack_60);
    uVar1 = FUN_10003558(0x616c6973,0x3eb);
    FUN_100b19f4(auStack_4a8,auStack_60);
    FUN_10027a58(3,auStack_4a8,uVar1,auStack_a8);
    FUN_1007eea4(param_1,auStack_a8);
    FUN_10117884((int)*(int **)(param_1 + 0x154) +
                 (int)*(short *)(**(int **)(param_1 + 0x154) + 0x118));
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
  uVar1 = FUN_10003558(0x4e414d45,15000);
  if ((int)uVar1 != 0) {
    FUN_100279a8(uVar1,auStack_60);
    uVar1 = FUN_10003558(0x616c6973,0x3ec);
    FUN_100b19f4(auStack_5a8,auStack_60);
    FUN_10027a58(4,auStack_5a8,uVar1,auStack_a8);
    FUN_1007ef9c(param_1,auStack_a8);
    FUN_10117884((int)*(int **)(param_1 + 0x158) +
                 (int)*(short *)(**(int **)(param_1 + 0x158) + 0x118));
  }
  return;
}

/* Address: 0x100283f8 Size: 676 bytes */
void FUN_100283f8(int param_1,short param_2,long long param_3)

{
  int iVar1;
  int *puVar2;
  int uVar3;
  int *piVar4;
  int *puVar5;
  int *piVar6;
  int *ppuVar7;
  long long uVar8;
  long long uVar9;
  int **local_4c;
  int local_28 [10];
  
  piVar6 = piRam1011735c;
  puVar5 = puRam10115f7c;
  piVar4 = piRam10115cf0;
  ppuVar7 = 0 /* TVect base */;
  FUN_10052490(param_3,uRam10117604,0x54);
  FUN_10052490(param_3,*piVar6,0x2fcc);
  iVar1 = *piVar6;
  *(short *)(*(int*)((char*)ppuVar7 - 0x6b5)) = *(short *)(iVar1 + 0x17e);
  *(short *)(*(int*)((char*)ppuVar7 - 0x6b4)) = *(short *)(iVar1 + 0x180);
  FUN_100514d8(*puVar5,0x14);
  FUN_10052490(param_3,*(int *)(*(int*)((char*)ppuVar7 - 0x152)),0x8880);
  FUN_10052490(param_3,*(int *)(*(int*)((char*)ppuVar7 - 0x150)),22000);
  FUN_10052490(param_3,*(int *)(*(int*)((char*)ppuVar7 - 0x153)),0x4440);
  FUN_100514d8(*puVar5,0x1e);
  puVar2 = (int *)*piVar4;
  if (puVar2 != (int *)0x0) {
    FUN_10002598(puVar2);
    ppuVar7 = local_4c;
  }
  uVar3 = *puVar2;
  *(int *)(*(int*)((char*)ppuVar7 - 0x6eb)) = uVar3;
  FUN_10052490(param_3,uVar3,0x4440);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    FUN_10002ad8(iVar1);
  }
  FUN_100514d8(*puVar5,0x28);
  FUN_10052490(param_3,local_28,4);
  uVar8 = FUN_100f1640(local_28[0]);
  FUN_10052490(param_3,uVar8,local_28[0]);
  uVar9 = FUN_100522dc(*(int *)(param_1 + 0x15c),6,0);
  FUN_100524d4(uVar9,uVar8,local_28[0]);
  FUN_100523a8(uVar9,1);
  FUN_100ef580(uVar8);
  FUN_100514d8(*puVar5,0x32);
  FUN_100514d8(*puVar5,0x3c);
  FUN_100514d8(*puVar5,0x46);
  FUN_10052490(param_3,local_28,4);
  uVar8 = FUN_100f1640(local_28[0]);
  FUN_100db1ec();
  FUN_10052490(param_3,uVar8,local_28[0]);
  uVar9 = FUN_100522dc(*(int *)(param_1 + 0x160),6,0);
  FUN_100524d4(uVar9,uVar8,local_28[0]);
  FUN_100523a8(uVar9,1);
  FUN_100ef580(uVar8);
  *(short *)(*piVar6 + 0x130) = 1;
  if (param_2 != 0) {
    FUN_1001e3ec(param_3);
  }
  return;
}

/* Address: 0x1002b6a8 Size: 404 bytes */
unsigned long long FUN_1002b6a8(short param_1)

{
  int uVar1;
  unsigned int uVar3;
  char cVar4;
  int *puVar5;
  int *piVar7;
  long long uVar6;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  unsigned long long uVar12;
  int local_3c;
  int uVar2;
  
  puVar5 = puRam101175f8;
  uVar12 = (unsigned long long)uRam101174bc;
  piVar7 = *(int **)(*(int *)(*piRam1011734c + 0x88) + 0x14c);
  FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x2b8));
  iVar8 = *(int *)(local_3c + -0x1ad8);
  uVar1 = *(int *)(iVar8 + 0x94);
  uVar2 = *(int *)(iVar8 + 0x98);
  uVar3 = *(unsigned int *)(iVar8 + 0x9c);
  *puVar5 = *(int *)(iVar8 + 0x90);
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3 & 0xff000000;
  piVar7 = (int *)FUN_10051f98(0x44415420,puVar5,1);
  if (piVar7 == (int *)0x0) {
    uVar12 = (unsigned long long)*(unsigned int *)(local_3c + -0x1ad8) + 0xa0;
  }
  else {
    uVar6 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0xb8));
    iVar8 = FUN_100f1640(uVar6);
    FUN_10052490(piVar7,iVar8,uVar6);
    FUN_100523a8(piVar7,1);
    iVar10 = 0;
    if (0 < (int)uVar6) {
      do {
        if ((*(char *)(iVar8 + iVar10) == '\r') || (*(char *)(iVar8 + iVar10) == '\n')) {
          *(char *)(iVar8 + iVar10) = 0;
        }
        sVar9 = (short)iVar10 + 1;
        iVar10 = (int)sVar9;
      } while ((int)sVar9 < (int)uVar6);
    }
    iVar10 = 3;
    for (sVar9 = 0; sVar9 != param_1; sVar9 = sVar9 + 1) {
      cVar4 = *(char *)(iVar8 + iVar10);
      while (cVar4 != '\0') {
        sVar11 = (short)iVar10 + 1;
        iVar10 = (int)sVar11;
        cVar4 = *(char *)(iVar8 + sVar11);
      }
      iVar10 = (int)(short)((short)iVar10 + 2);
    }
    FUN_10001e78(uVar12,iVar8 + iVar10);
    FUN_100025b0(iVar8);
  }
  return uVar12;
}

/* Address: 0x1002c120 Size: 224 bytes */
int FUN_1002c120(short param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_20;
  short local_1e [15];
  
  piVar1 = piRam1011735c;
  iVar2 = FUN_1002bf64(param_1,param_2,*(short *)(*piRam1011735c + 0x110),0);
  iVar3 = FUN_10034074(*(short *)(*piVar1 + 0x110),local_1e,&local_20);
  if (iVar3 != 0) {
    iVar3 = *piVar1 + iVar2 * 0x42;
    iVar3 = FUN_1000a884(param_1,param_2,*(short *)(iVar3 + 0x1604),
                         *(short *)(iVar3 + 0x1606));
    iVar4 = FUN_1000a884(param_1,param_2,local_1e[0],local_20);
    if (iVar4 < iVar3) {
      iVar2 = (int)(short)(*(short *)(*piVar1 + 0x110) + 100);
    }
  }
  return iVar2;
}

/* Address: 0x1002c310 Size: 336 bytes */
void FUN_1002c310(short param_1,short param_2,short param_3)

{
  short sVar1;
  int *puVar2;
  long long uVar3;
  unsigned long long uVar4;
  short sVar5;
  char auStack_28 [40];
  
  puVar2 = puRam10115fe8;
  uVar4 = (unsigned long long)param_2;
  if ((*(short *)(*piRam1011735c + 0x124) == 0) ||
     ((*(unsigned int *)(*piRam10117354 + (int)(((uVar4 & 0x1fffffff) * 8 - uVar4 & 0xffffffff) << 4) +
                (int)param_1) >> 0x1d & 1) != 0)) {
    param_1 = param_1 * 2;
    sVar1 = (short)((uVar4 & 0xffffffff) << 1);
    sVar5 = sVar1 + -1;
    uVar3 = FUN_100226b0(auStack_28,param_1,sVar1,4,4,uVar4);
    FUN_10047cbc(*puVar2,uVar3,param_3);
    FUN_1000a714(*puVar2,param_1 + -1,sVar5,6,0xff);
    FUN_1000a714(*puVar2,param_1,sVar1 + 4,4,0xff);
    FUN_1000a7cc(*puVar2,param_1 + -1,sVar5,5,0xff);
    FUN_1000a7cc(*puVar2,param_1 + 4,sVar5,5,0xff);
  }
  return;
}

/* Address: 0x1002c460 Size: 88 bytes */
void FUN_1002c460(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *piRam1011735c + param_1 * 0x42;
  FUN_1002c310(*(short *)(iVar1 + 0x1604),*(short *)(iVar1 + 0x1606),param_2);
  return;
}

/* Address: 0x1002c4b8 Size: 80 bytes */
void FUN_1002c4b8(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *piRam1011735c + param_1 * 0x20;
  FUN_1002c310(*(short *)(iVar1 + 0x812),*(short *)(iVar1 + 0x814),param_2);
  return;
}

/* Address: 0x1002c508 Size: 268 bytes */
void FUN_1002c508(short param_1,short param_2,short param_3)

{
  short sVar1;
  int *puVar2;
  unsigned long long uVar3;
  short sVar4;
  short sVar5;
  
  puVar2 = puRam10115fe8;
  uVar3 = (unsigned long long)param_2;
  if ((*(short *)(*piRam1011735c + 0x124) == 0) ||
     ((*(unsigned int *)(*piRam10117354 + (int)(((uVar3 & 0x1fffffff) * 8 - uVar3 & 0xffffffff) << 4) +
                (int)param_1) >> 0x1d & 1) != 0)) {
    sVar5 = param_1 * 2 + -2;
    sVar1 = (short)((uVar3 & 0xffffffff) << 1);
    sVar4 = sVar1 + -2;
    FUN_1000a714(*puRam10115fe8,sVar5,sVar4,8,param_3,uVar3);
    FUN_1000a714(*puVar2,sVar5,sVar1 + 5,8,param_3);
    FUN_1000a7cc(*puVar2,sVar5,sVar4,8,param_3);
    FUN_1000a7cc(*puVar2,param_1 * 2 + 5,sVar4,8,param_3);
  }
  return;
}

/* Address: 0x1002c614 Size: 88 bytes */
void FUN_1002c614(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *piRam1011735c + param_1 * 0x42;
  FUN_1002c508(*(short *)(iVar1 + 0x1604),*(short *)(iVar1 + 0x1606),param_2);
  return;
}

/* Address: 0x1002c66c Size: 80 bytes */
void FUN_1002c66c(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *piRam1011735c + param_1 * 0x20;
  FUN_1002c508(*(short *)(iVar1 + 0x812),*(short *)(iVar1 + 0x814),param_2);
  return;
}

/* Address: 0x1002c6bc Size: 60 bytes */
void FUN_1002c6bc(short *param_1,short param_2)

{
  FUN_1002c310(*param_1,param_1[1],param_2);
  return;
}

/* Address: 0x1002c6f8 Size: 60 bytes */
void FUN_1002c6f8(short *param_1,short param_2)

{
  FUN_1002c508(*param_1,param_1[1],param_2);
  return;
}

/* Address: 0x1002c734 Size: 296 bytes */
void FUN_1002c734(short param_1,short param_2,short param_3,short param_4,short param_5)

{
  int *ppuVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  
  ppuVar1 = 0 /* TVect base */;
  uVar2 = (unsigned long long)param_2;
  uVar3 = (unsigned long long)param_4;
  if ((*(short *)(*piRam1011735c + 0x124) == 0) ||
     (((*(unsigned int *)(*piRam10117354 + (int)(((uVar2 & 0x1fffffff) * 8 - uVar2 & 0xffffffff) << 4) +
                 (int)param_1) >> 0x1d & 1) != 0 &&
      ((*(short *)(*piRam1011735c + 0x124) == 0 ||
       ((*(unsigned int *)(*piRam10117354 + (int)(((uVar3 & 0x1fffffff) * 8 - uVar3 & 0xffffffff) << 4) +
                  (int)param_3) >> 0x1d & 1) != 0)))))) {
    FUN_100479f4(param_5);
    FUN_1003a794(*(int *)(*(int*)((char*)ppuVar1 - 0x62e)),param_1 * 2 + -2,
                 (short)((uVar2 & 0xffffffff) << 1) + -2,param_3 * 2 + -2,
                 (short)((uVar3 & 0xffffffff) << 1) + -2,0,param_5);
  }
  return;
}

/* FUN_1002c92c defined elsewhere */


/* Address: 0x1002c970 Size: 168 bytes */
short FUN_1002c970(short param_1,short param_2,short param_3,short param_4)

{
  short uVar1;
  
  if (param_1 == param_3) {
    if (param_2 < param_4) {
      uVar1 = 4;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  if (param_2 == param_4) {
    if (param_1 < param_3) {
      uVar1 = 2;
    }
    else {
      uVar1 = 6;
    }
    return uVar1;
  }
  if (param_3 < param_1) {
    if (param_4 < param_2) {
      uVar1 = 7;
    }
    else {
      uVar1 = 5;
    }
    return uVar1;
  }
  if (param_4 < param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

/* Address: 0x1002ca18 Size: 208 bytes */
void FUN_1002ca18(short *param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  piVar2 = piRam10117358;
  if (param_2 == 0xf) {
    param_2 = -1;
  }
  if (param_2 < 6) {
    sVar6 = 0x62;
    param_2 = param_2 << 1;
  }
  else {
    sVar6 = 0x80;
    param_2 = param_2 * 2 + -0xc;
  }
  iVar4 = (int)(short)(sVar6 + param_2);
  iVar5 = param_1[1] * 0xe0;
  iVar3 = *param_1 * 2;
  *(unsigned int *)(*piRam10117358 + iVar5 + iVar3) =
       iVar4 << 0x18 | *(unsigned int *)(*piRam10117358 + iVar5 + iVar3) & 0xffffff;
  iVar1 = iVar5 + *piVar2 + iVar3;
  *(unsigned int *)(iVar1 + 2) = (iVar4 + 1) * 0x1000000 | *(unsigned int *)(iVar1 + 2) & 0xffffff;
  iVar1 = iVar5 + *piVar2 + iVar3;
  *(unsigned int *)(iVar1 + 0xe0) = (iVar4 + 0x10) * 0x1000000 | *(unsigned int *)(iVar1 + 0xe0) & 0xffffff;
  iVar3 = iVar5 + *piVar2 + iVar3;
  *(unsigned int *)(iVar3 + 0xe2) = (iVar4 + 0x11) * 0x1000000 | *(unsigned int *)(iVar3 + 0xe2) & 0xffffff;
  return;
}

/* Address: 0x1002cae8 Size: 212 bytes */
void FUN_1002cae8(short param_1)

{
  int iVar1;
  int *piVar2;
  int *ppuVar3;
  int iVar4;
  unsigned long long uVar5;
  
  piVar2 = piRam1011735c;
  ppuVar3 = 0 /* TVect base */;
  uVar5 = (unsigned long long)param_1;
  iVar4 = *piRam1011735c + (int)(((uVar5 & 0x7ffffff) * 0x20 + uVar5 & 0xffffffff) << 1);
  iVar4 = FUN_1004a5f0(uVar5,*(short *)(iVar4 + 0x1604),*(short *)(iVar4 + 0x1606),
                       0xffffffffffffffff);
  if (iVar4 != 0) {
    *(char *)(iVar4 + 7) = 0;
    iVar4 = (int)(((uVar5 & 0x7ffffff) * 0x20 + uVar5 & 0x7fffffff) << 1);
    *(char *)(*piVar2 + iVar4 + 0x1630) = 0xff;
    *(char *)(iVar4 + *piVar2 + 0x1631) = 0;
    iVar1 = *(int *)(*(int*)((char*)ppuVar3 - 0x152)) + *(short *)(iVar4 + *piVar2 + 0x1606) * 0xe0;
    iVar4 = *(short *)(iVar4 + *piVar2 + 0x1604) * 2;
    *(unsigned int *)(iVar1 + iVar4) = *(unsigned int *)(iVar1 + iVar4) | 0x100000;
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002cfbc() { }


























































































































// FAILED to decompile: FUN_1002d3ac at 1002d3ac

/* Address: 0x1002d654 Size: 744 bytes */
int FUN_1002d654(void)

{
  int iVar1;
  int bVar2;
  int bVar3;
  int *piVar4;
  short *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned long long uVar13;
  char cVar14;
  char cVar15;
  short uVar16;
  int bVar17;
  short sVar18;
  char cVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  
  iVar12 = iRam1011778c;
  iVar11 = iRam10117788;
  iVar10 = iRam10117784;
  pcVar9 = pcRam101174dc;
  pcVar8 = pcRam101174d8;
  iVar7 = iRam101174d4;
  pcVar6 = pcRam101174d0;
  puVar5 = puRam101174cc;
  piVar4 = piRam1011735c;
  uVar13 = ZEXT48(0 /* TVect base */);
  *pcRam101174dc = '\0';
  *puVar5 = 0;
  bVar17 = true;
  iVar22 = 0;
  iVar21 = 0;
  bVar2 = false;
  if ((*pcVar6 == '\0') || (*pcVar8 == '\0')) {
    *puVar5 = 1;
    bVar2 = true;
  }
  do {
    if (bVar2) {
      return bVar17;
    }
    cVar19 = *(char *)(iVar22 + *(int *)((int)uVar13 + -0x100));
    bVar3 = false;
    sVar18 = 0;
    if (cVar19 < '\x01') {
      cVar19 = '\x01';
    }
    cVar20 = *(char *)(iVar21 + *(int *)((int)uVar13 + -0x108));
    if (cVar20 < '\x01') {
      cVar20 = '\x01';
    }
    do {
      if (*(short *)(*piVar4 + 0x126) == 0) {
        uVar16 = 0x14;
      }
      else {
        uVar16 = 0x18;
      }
      cVar14 = FUN_1005f230(1,uVar16,0);
      if (*(short *)(*piVar4 + 0x126) == 0) {
        uVar16 = 0x14;
      }
      else {
        uVar16 = 0x18;
      }
      cVar15 = FUN_1005f230(1,uVar16,0);
      if (10000 < sVar18) {
        cVar14 = '\0';
        cVar15 = 'd';
      }
      if (cVar19 < cVar14) {
        if (cVar15 <= cVar20) goto LAB_1002d7cc;
      }
      else if (cVar20 < cVar15) {
LAB_1002d7cc:
        iVar1 = (int)uVar13;
        if (cVar19 < cVar14) {
LAB_1002d884:
          if ((cVar15 <= cVar20) &&
             (cVar14 = *(char *)(iVar22 + iVar12) + -1, *(char *)(iVar22 + iVar12) = cVar14,
             cVar14 < '\0')) {
            *(char *)(iVar22 + *(int *)(iVar1 + -0x3bc)) = 0;
            iVar22 = (int)(short)((short)iVar22 + 1);
            cVar14 = *pcVar9;
            *(char *)(cVar14 + iVar7) = 0;
            *pcVar9 = cVar14 + '\x01';
            bVar3 = true;
          }
        }
        else if ((cVar20 < cVar15) &&
                ((((*(short *)(*piVar4 + 0x12e) == 0 || (*(char *)(iVar21 + iVar11) != '\x1c')) ||
                  (*(short *)(*piVar4 + **(char **)(iVar1 + -0x134) * 2 + 0xd0) != 0)) ||
                 (**(char **)(iVar1 + -0x130) != '\x0f')))) {
          cVar14 = *(char *)(iVar21 + iVar10) + -1;
          *(char *)(iVar21 + iVar10) = cVar14;
          if (cVar14 < '\0') {
            *(char *)(iVar21 + *(int *)(iVar1 + -0x3c0)) = 0;
            iVar21 = (int)(short)((short)iVar21 + 1);
            cVar14 = *pcVar9;
            *(char *)(cVar14 + iVar7) = 1;
            *pcVar9 = cVar14 + '\x01';
            bVar3 = true;
          }
        }
        else if (cVar19 < cVar14) goto LAB_1002d884;
        if ((iVar22 == *pcVar8) || (iVar21 == *pcVar6)) {
          bVar2 = true;
          bVar17 = iVar22 == *pcVar8;
        }
      }
      sVar18 = sVar18 + 1;
    } while (!bVar3);
  } while( true );
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002d93c() { }































/* Address: 0x1002da54 Size: 824 bytes */
void FUN_1002da54(short param_1,short param_2)

{
  short uVar1;
  short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar15;
  long long uVar10;
  long long uVar11;
  long long uVar12;
  long long uVar13;
  long long uVar14;
  short sVar16;
  unsigned long long uVar17;
  unsigned long long uVar18;
  int local_44;
  
  piVar9 = piRam101176e0;
  piVar8 = piRam1011735c;
  piVar7 = piRam10117358;
  iVar6 = iRam10115e84;
  uVar17 = (unsigned long long)param_2;
  uVar18 = (unsigned long long)param_1;
  *psRam101174f4 = param_1;
  *psRam101174f8 = param_2;
  if (*piVar9 == 0) {
    return;
  }
  FUN_10117884((int)*(int **)(*piRam1011734c + 0x88) +
               (int)*(short *)(**(int **)(*piRam1011734c + 0x88) + 0x228));
  if (((**(short **)(local_44 + -400) != 2) &&
      (*(short *)(*(char *)(*piVar8 + (int)(short)(unsigned short)(unsigned char)((unsigned int)*(int *)
                                                                        (*piVar7 + (int)(((uVar17 & 
                                                  0x1fffffff) * 8 - uVar17 & 0xffffffff) << 5) +
                                                  (int)((uVar18 & 0xffffffff) << 1)) >> 0x18) +
                           0x711) * 2 + iVar6) < 1)) &&
     ((*(unsigned int *)(**(int **)(local_44 + -0x54c) +
                 (int)(((uVar17 & 0x1fffffff) * 8 - uVar17 & 0xffffffff) << 4) + (int)param_1) >>
       0x18 & 0x1f) == 0)) {
    FUN_10093928();
    return;
  }
  iVar15 = FUN_1002be50(uVar18,uVar17);
  uVar5 = (unsigned short)((unsigned int)*(int *)
                          (*piVar7 + (int)(((uVar17 & 0x1fffffff) * 8 - uVar17 & 0xffffffff) << 5) +
                          (int)((uVar18 & 0xffffffff) << 1)) >> 0x10) & 0xf;
  iVar3 = *piVar8;
  if (((*(short *)(iVar3 + 0x11c) != 0) && (uVar5 != 0xf)) &&
     ((uVar4 = *(unsigned int *)(iVar3 + *(short *)(iVar3 + 0x110) * 0x10 + (short)uVar5 * 2 + 0x1582) >>
               0x1a & 3, uVar4 == 0 || ((0 < iVar15 && (uVar4 == 1)))))) {
    uVar10 = FUN_1005f678(0x8d,4);
    uVar11 = FUN_1005f678(0x8d,3);
    uVar12 = FUN_1005f678(0x8d,2);
    uVar13 = FUN_1005f678(0x8d,1);
    uVar14 = FUN_1005f678(0x8d,0);
    FUN_10050ffc(uVar14,uVar13,uVar12,uVar11,uVar10,*(int *)(local_44 + -0x1abc),
                 *(int *)(local_44 + -0x1ab8));
    return;
  }
  FUN_1002c85c();
  uVar1 = *(short *)*piVar9;
  uVar2 = ((short *)*piVar9)[1];
  if (**(short **)(local_44 + -0x154c) == 0) {
    if ('\0' < *(char *)(*piVar9 + 7)) goto LAB_1002dcb4;
  }
  else if (0 < **(short **)(local_44 + -0x1a4)) {
LAB_1002dcb4:
    uVar5 = (unsigned short)(unsigned char)((unsigned int)*(int *)
                                  (*piVar7 + (int)(((uVar17 & 0x1fffffff) * 8 - uVar17 & 0xffffffff)
                                                  << 5) + (int)((uVar18 & 0xffffffff) << 1)) >> 0x18
                          );
    sVar16 = *(short *)(*(char *)(*piVar8 + (int)(short)uVar5 + 0x711) * 2 + iVar6);
    if (sVar16 < 2) {
      sVar16 = 2;
    }
    **(short **)(local_44 + -0x3d8) = sVar16;
    uVar4 = *(unsigned int *)(*piVar7 + (int)(((uVar17 & 0x1fffffff) * 8 - uVar17 & 0xffffffff) << 5) +
                     (int)((uVar18 & 0xffffffff) << 1));
    if ((uVar4 >> 0x10 & 0xf) == (int)*(short *)(*piVar8 + 0x110)) {
      return;
    }
    if ((*(char *)(*piVar8 + (int)(short)uVar5 + 0x711) != '\n') && ((uVar4 >> 0x14 & 1) == 0)) {
      return;
    }
    FUN_1002d93c(uVar5,uVar1,uVar2,uVar18,uVar17);
    return;
  }
  FUN_100219a8(1,1,1);
  FUN_1005cc8c();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1002dd8c() { }

















































































































































































































































/* Address: 0x1002febc Size: 556 bytes */
void FUN_1002febc(short param_1)

{
  long long lVar1;
  int *piVar2;
  int *ppuVar3;
  unsigned long long uVar4;
  long long lVar5;
  int iVar6;
  unsigned long long uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  
  piVar2 = piRam1011735c;
  ppuVar3 = 0 /* TVect base */;
  uVar7 = (unsigned long long)param_1;
  if (param_1 < 8) {
    iVar8 = 0;
    sVar9 = 0;
    do {
      if (*(short *)(*piRam1011735c + iVar8 * 2 + 0x138) != 0) {
        sVar9 = sVar9 + 1;
      }
      sVar10 = (short)iVar8 + 1;
      iVar8 = (int)sVar10;
    } while (sVar10 < 8);
    if (sVar9 == 1) {
      iVar6 = (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x3fffffff) << 2);
      iVar8 = *piRam1011735c + iVar6;
      *(short *)(iVar8 + 0x18a) = *(short *)(iVar8 + 0x194);
      iVar6 = iVar6 + *piVar2;
      *(short *)(iVar6 + 0x18c) = *(short *)(iVar6 + 0x196);
    }
    else {
      FUN_1002bdc4();
      iVar8 = *piVar2 + (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0xffffffff) << 2);
      uVar4 = FUN_1002be50(*(short *)(iVar8 + 0x194),*(short *)(iVar8 + 0x196));
      if ((-1 < (int)uVar4) &&
         (iVar8 = *piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1),
         lVar1 = -(long long)
                  *(char *)(*piVar2 + (*(unsigned int *)(*(int *)(*(int*)((char*)ppuVar3 - 0x152)) +
                                                 *(short *)(iVar8 + 0x1606) * 0xe0 +
                                                *(short *)(iVar8 + 0x1604) * 2) >> 0x18) + 0x711),
         lVar5 = lVar1 + 10, (lVar5 + (-(unsigned long long)(lVar5 == 0) - (lVar1 + 9)) & 0xff) != 0)) {
        uVar4 = 0xffffffffffffffff;
      }
      if ((*(short *)((*(int*)((char*)ppuVar3 - 0xc9)) + (int)((uVar7 & 0xffffffff) << 1)) == 0) ||
         ((-1 < (int)uVar4 &&
          ((int)*(char *)(*piVar2 + (int)(((uVar4 & 0x7ffffff) * 0x20 + uVar4 & 0xffffffff) << 1) +
                         0x1619) == (int)param_1)))) {
        iVar6 = (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x3fffffff) << 2);
        iVar8 = *piVar2 + iVar6;
        *(short *)(iVar8 + 0x18a) = *(short *)(iVar8 + 0x194);
        iVar6 = iVar6 + *piVar2;
        *(short *)(iVar6 + 0x18c) = *(short *)(iVar6 + 0x196);
      }
      else {
        iVar8 = (int)(((uVar7 & 0x3fffffff) * 4 + uVar7 & 0x3fffffff) << 2);
        iVar6 = FUN_1002bf64(*(short *)(*piVar2 + iVar8 + 0x18a),
                             *(short *)(*piVar2 + iVar8 + 0x18c),uVar7,0);
        if (-1 < iVar6) {
          *(short *)(*piVar2 + iVar8 + 0x18a) =
               *(short *)(*piVar2 + iVar6 * 0x42 + 0x1604);
          *(short *)(*piVar2 + iVar8 + 0x18c) =
               *(short *)(iVar6 * 0x42 + *piVar2 + 0x1606);
        }
      }
    }
  }
  return;
}

/* Address: 0x100300e8 Size: 876 bytes */
void FUN_100300e8(void)

{
  short sVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned short uVar5;
  int iVar6;
  short *psVar7;
  unsigned int *puVar8;
  short *psVar9;
  short *psVar10;
  int uVar11;
  int *ppuVar12;
  short sVar14;
  long long uVar13;
  long long lVar15;
  int bVar16;
  int local_44;
  
  uVar11 = uRam1011772c;
  psVar10 = psRam101174f8;
  psVar9 = psRam101174f4;
  puVar8 = puRam1011735c;
  psVar7 = psRam10115e2c;
  ppuVar12 = 0 /* TVect base */;
  uVar5 = (unsigned short)((unsigned int)*(int *)
                          (*piRam10117358 + *psRam101174f8 * 0xe0 + *psRam101174f4 * 2) >> 0x10) &
          0xf;
  lVar15 = (long long)(short)uVar5;
  if (uVar5 != 0xf) {
    uVar2 = *puRam1011735c;
    sVar1 = *(short *)(uVar2 + 0x110);
    if ((*(unsigned int *)(uVar2 + sVar1 * 0x10 + (short)uVar5 * 2 + 0x1582) >> 0x1a & 3) == 0) {
      ppuVar12 = 0 /* TVect base */;
      sVar14 = FUN_1005f230(1,100,0);
      *(short *)(*puVar8 + *(short *)(*puVar8 + 0x110) * 2 + 0x1122) =
           *(short *)(sVar1 * 2 + uVar2 + 0x1122) + sVar14 + 100;
    }
    else {
      uVar2 = *puRam1011735c;
      sVar1 = *(short *)(uVar2 + 0x110);
      if ((*(unsigned int *)(uVar2 + sVar1 * 0x10 + (int)(lVar15 << 1) + 0x1582) >> 0x1a & 3) == 1) {
        ppuVar12 = 0 /* TVect base */;
        sVar14 = FUN_1005f230(1,0xf,0);
        *(short *)(*puVar8 + *(short *)(*puVar8 + 0x110) * 2 + 0x1122) =
             *(short *)(sVar1 * 2 + uVar2 + 0x1122) + sVar14 + 10;
      }
    }
    iVar4 = (int)(lVar15 << 1);
    iVar3 = *puVar8 + *(short *)(*puVar8 + 0x110) * 0x10 + iVar4;
    *(unsigned int *)(iVar3 + 0x1582) = *(unsigned int *)(iVar3 + 0x1582) & 0xf3ffffff | 0x8000000;
    iVar6 = (int)(lVar15 << 4);
    iVar3 = *puVar8 + iVar6 + *(short *)(*puVar8 + 0x110) * 2;
    *(unsigned int *)(iVar3 + 0x1582) = *(unsigned int *)(iVar3 + 0x1582) & 0xf3ffffff | 0x8000000;
    iVar4 = *puVar8 + *(short *)(*puVar8 + 0x110) * 0x10 + iVar4;
    *(unsigned int *)(iVar4 + 0x1582) = *(unsigned int *)(iVar4 + 0x1582) & 0xcfffffff | 0x20000000;
    iVar3 = iVar6 + *puVar8 + *(short *)(*puVar8 + 0x110) * 2;
    *(unsigned int *)(iVar3 + 0x1582) = *(unsigned int *)(iVar3 + 0x1582) & 0xcfffffff | 0x20000000;
    if ((*psVar7 == 0) && (*(short *)(*puVar8 + *(short *)(*puVar8 + 0x110) * 2 + 0xd0) != 1)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (!bVar16) {
      FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar12 - 0x5a6)) +
                   (int)*(short *)(**(int **)(*(int*)((char*)ppuVar12 - 0x5a6)) + 0x4c8));
      FUN_10117884(**(int **)(local_44 + -0x1504) +
                   (int)*(short *)(*(int *)**(int **)(local_44 + -0x1504) + 0x4c8));
      FUN_10117884(**(int **)(local_44 + -0x18fc) +
                   (int)*(short *)(*(int *)**(int **)(local_44 + -0x18fc) + 0x4c8));
      FUN_10117884(**(int **)(local_44 + -0x16a0) +
                   (int)*(short *)(*(int *)**(int **)(local_44 + -0x16a0) + 0x4c8));
      FUN_1003f674(0,0,0);
      FUN_1002da54(*psVar9,*psVar10);
    }
    if ((*psVar7 == 0) && (*(short *)(*puVar8 + *(short *)(*puVar8 + 0x110) * 2 + 0xd0) != 1)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((bVar16) && (*(short *)(*puVar8 + 0x15a) != 0)) {
      uVar13 = FUN_1005f678(0x70,2);
      FUN_10001dd0(uVar11,uVar13,(unsigned long long)*puVar8 + lVar15 * 0x14);
      FUN_1003cac4(uVar11,0x14);
    }
    FUN_10038c60(*(short *)(*puVar8 + 0x110),8,*(short *)(*puVar8 + 0x110),lVar15,0);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
short * FUN_10030490() { return 0; }








































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10030c3c() { }




























































/* Address: 0x10030e0c Size: 124 bytes */
short FUN_10030e0c(short param_1,short param_2)

{
  int iVar1;
  unsigned short uVar2;
  short sVar3;
  
  uVar2 = 0;
  sVar3 = 0;
  do {
    iVar1 = FUN_10030490(param_1,param_2,0);
    if (0 < *(short *)(iVar1 + 6)) {
      uVar2 = uVar2 + 1;
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x13);
  return ((short)uVar2 >> 1) + (unsigned short)((short)uVar2 < 0 && (uVar2 & 1) != 0);
}

/* Address: 0x10030e90 Size: 556 bytes */
void FUN_10030e90(short param_1,short param_2)

{
  int *puVar1;
  int *piVar4;
  int iVar5;
  long long uVar2;
  long long uVar3;
  char auStack_440 [256];
  char auStack_340 [256];
  char auStack_240 [260];
  char auStack_13c [256];
  short local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  puVar1 = puRam10117370;
  if (*(short *)(*piRam1011735c + 300) != 0) {
    piVar4 = (int *)FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),
                                 0x1144,*(int *)(*piRam1011734c + 0x88));
    FUN_100db26c();
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = *puVar1;
    *puVar1 = auStack_13c;
    iVar5 = FUN_10000090(auStack_13c);
    if (iVar5 == 0) {
      uVar2 = FUN_10030e0c(param_1,param_2);
      uVar3 = FUN_1005f678(0x7d,0xffffffffffffffff);
      FUN_100b19f4(auStack_240,uVar3);
      FUN_10090e0c(piVar4,0x73747231,auStack_240,0);
      uVar3 = FUN_1005f678(0x7e,0xffffffffffffffff);
      FUN_100b19f4(auStack_340,uVar3);
      FUN_10090e0c(piVar4,0x73747232,auStack_340,0);
      uVar2 = FUN_1005f678(0x7f,uVar2);
      FUN_100b19f4(auStack_440,uVar2);
      FUN_10090e0c(piVar4,0x73747233,auStack_440,0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x810));
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x738));
      *puVar1 = local_34;
    }
    else {
      if (piVar4 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar4 + 0x738) + (int)piVar4);
      }
      FUN_100db158(local_3c,local_38);
    }
  }
  return;
}

/* Address: 0x100310bc Size: 48 bytes */
void FUN_100310bc(void)

{
  FUN_1003f674(0,0,0);
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_100310ec() { return 0; }







































/* Address: 0x10031178 Size: 608 bytes */
void FUN_10031178(short param_1,short param_2,short param_3,unsigned short *param_4,long long param_5,
                 short param_6)

{
  int *piVar1;
  int iVar5;
  long long lVar2;
  int *piVar6;
  long long uVar3;
  long long uVar4;
  int local_64;
  int local_40 [2];
  int local_38;
  int local_34;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  piVar1 = piRam10115df0;
  iVar5 = FUN_10117884(*piRam10115df0 + (int)*(short *)(*(int *)*piRam10115df0 + 0x3a8));
  if (iVar5 != 0) {
    FUN_100226b0(&local_38,0x20,0,0x20,0x1d);
    FUN_1002269c(local_40,param_2,param_3);
    FUN_1004615c(9,local_38,local_34,local_40[0]);
  }
  if (*param_4 != 0) {
    if (param_6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 5;
    }
    FUN_100917d8(param_5,*(short *)(iVar5 * 2 + *(int *)(local_64 + -0x168)),1);
    if (*param_4 != 0) {
      lVar2 = FUN_100310ec(5);
      *param_4 = (unsigned short)(lVar2 == 0);
      goto LAB_1003128c;
    }
  }
  FUN_100310ec(2);
LAB_1003128c:
  piVar6 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),
                               (long long)param_1 + 0x61726d79);
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x660),0,0);
  }
  piVar6 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),
                               (long long)param_1 + 0x626f6174);
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x660),0,0);
  }
  uVar3 = FUN_10002208(0x3e9);
  if ((int)uVar3 != 0) {
    iVar5 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x3a8));
    if (iVar5 != 0) {
      local_30 = param_3 + 3;
      local_2a = param_2 + 0x20;
      local_2c = param_3 + 0x21;
      local_2e = param_2;
      uVar4 = FUN_100b0578(&local_30);
      FUN_10000ae0(uVar4,uVar3);
    }
    if ((int)uVar3 != 0) {
      FUN_10002da8(uVar3);
    }
  }
  return;
}

/* Address: 0x100313d8 Size: 444 bytes */
void FUN_100313d8(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  short *puVar5;
  long long lVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char auStack_38 [8];
  unsigned short local_30 [24];
  
  puVar5 = puRam10117738;
  iVar4 = iRam10117510;
  iVar3 = iRam1011750c;
  pcVar2 = pcRam101174dc;
  iVar1 = iRam101174d4;
  FUN_10091488(auStack_38);
  FUN_1009191c(auStack_38,*puVar5,0);
  FUN_1009191c(auStack_38,puVar5[5],5);
  lVar6 = FUN_100310ec(5);
  local_30[0] = (unsigned short)(lVar6 == 0);
  iVar8 = 0;
  iVar10 = 0;
  iVar9 = 0;
  if ('\0' < *pcVar2) {
    do {
      if (*(char *)(iVar8 + iVar1) == '\x01') {
        FUN_10031178((short)iVar9 + 0x20,*(short *)(iVar9 * 2 + iVar4 + 0x40),
                     *(short *)(iVar9 * 2 + iVar3 + 0x40),local_30,auStack_38,0);
        iVar9 = (int)(short)((short)iVar9 + 1);
        if (local_30[0] == 0) goto LAB_1003154c;
        lVar6 = FUN_100310ec(3);
LAB_10031524:
        local_30[0] = (unsigned short)(lVar6 == 0);
        if (local_30[0] == 0) goto LAB_1003154c;
        lVar6 = FUN_100310ec(5);
        local_30[0] = (unsigned short)(lVar6 == 0);
      }
      else {
        FUN_10031178(iVar10,*(short *)(iVar10 * 2 + iVar4),*(short *)(iVar10 * 2 + iVar3),
                     local_30,auStack_38,1);
        iVar10 = (int)(short)((short)iVar10 + 1);
        if (local_30[0] != 0) {
          lVar6 = FUN_100310ec(3);
          goto LAB_10031524;
        }
LAB_1003154c:
        FUN_100310ec(3);
      }
      sVar7 = (short)iVar8 + 1;
      iVar8 = (int)sVar7;
    } while ((int)sVar7 < (int)*pcVar2);
  }
  FUN_1009150c(auStack_38,2);
  return;
}





























































/* Address: 0x10031594 Size: 436 bytes */
void FUN_10031594(void)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int *ppuVar4;
  int iVar6;
  long long uVar5;
  short sVar7;
  short sVar8;
  int **local_4c;
  char auStack_28 [8];
  char auStack_20 [32];
  
  pcVar3 = pcRam10117770;
  pcVar2 = pcRam1011776c;
  piVar1 = piRam10115df0;
  ppuVar4 = 0 /* TVect base */;
  if (*piRam10115df0 == 0) {
    iVar6 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),0x1130,
                         *(int *)(*piRam1011734c + 0x88));
    *piVar1 = iVar6;
    ppuVar4 = local_4c;
    FUN_100db26c();
  }
  *(short *)(*(int*)((char*)ppuVar4 - 0x6ab)) = 0;
  if (*pcVar2 == '\x0f') {
    sVar7 = 8;
  }
  else {
    sVar7 = (short)*pcVar2;
  }
  if (*pcVar3 == '\x0f') {
    sVar8 = 8;
  }
  else {
    sVar8 = (short)*pcVar3;
  }
  uVar5 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73686564);
  if ((int)uVar5 != 0) {
    FUN_100226b0(auStack_20,sVar8 << 5,0,0x20,0x24);
    FUN_100850e8(uVar5,0x26,auStack_20,0x24,0xc,1);
  }
  uVar5 = FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),0x73686561);
  if ((int)uVar5 != 0) {
    FUN_100226b0(auStack_28,sVar7 << 5,0,0x20,0x24);
    FUN_100850e8(uVar5,0x26,auStack_28,0x24,0xc,1);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10031748() { }











































































































































































































































































/* Address: 0x10032040 Size: 44 bytes */
void FUN_10032040(void)

{
  FUN_10002910(uRam10115e10,uRam10117514);
  return;
}

/* Address: 0x100321bc Size: 76 bytes */
void FUN_100321bc(long long param_1)

{
  char auStack_108 [264];
  
  FUN_100b19f4(auStack_108,param_1);
  FUN_100b1c84(auStack_108);
  FUN_100006f0();
  return;
}

/* Address: 0x10032208 Size: 1624 bytes */
short FUN_10032208(short param_1,short param_2,short param_3,long long param_4,short param_5)

{
  int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  long long uVar6;
  long long uVar7;
  short uVar9;
  int iVar8;
  int *piVar10;
  short sVar11;
  char *puVar12;
  int uVar13;
  int local_134;
  char auStack_110 [8];
  char auStack_108 [8];
  short local_100;
  short local_fe;
  short local_fa;
  short local_f8;
  short local_f6;
  short local_f0;
  short local_ee;
  short local_e8;
  short local_e6;
  short local_e0;
  short local_de;
  char auStack_d8 [8];
  int local_d0;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  int local_80;
  int local_7c;
  short local_78 [4];
  int local_70 [2];
  char auStack_68 [8];
  char auStack_60 [8];
  char auStack_58 [8];
  char auStack_50 [80];
  
  iVar5 = iRam101177f0;
  piVar4 = piRam10115e14;
  puVar12 = auStack_d8;
  FUN_10001b18(&local_100);
  local_84 = param_3 + (local_100 + local_fe + local_fa) * 5;
  local_80 = CONCAT22(param_3,param_1);
  sVar11 = param_2;
  if (param_5 == -1) {
    sVar11 = param_2 + 2;
  }
  local_7c = CONCAT22(local_84,sVar11);
  local_88 = param_3;
  local_86 = param_1;
  local_82 = param_2;
  uVar6 = FUN_100012c0(param_4);
  FUN_100b2264(auStack_108);
  FUN_10001ad0();
  FUN_100ee844(auStack_110,0);
  if ((*piVar4 == 0) && (FUN_100efcd4(&local_80,0x100), *piVar4 == 0)) {
    uVar7 = FUN_100b0578(&local_80);
    FUN_100036d8(param_4,uVar6,uVar7,param_5);
    FUN_100ee8e8(auStack_110,2);
    return param_2;
  }
  uVar9 = FUN_100ef96c(local_78);
  uVar7 = FUN_100b0578(&local_80);
  FUN_10000e70((unsigned long long)**(unsigned int **)(*(int *)(iVar5 + 0xca) + 0x1c) + 2,uVar7,
               (unsigned long long)*(unsigned int *)*piVar4 + 8);
  puVar1 = *(int **)*piVar4;
  *puVar1 = local_80;
  puVar1[1] = local_7c;
  *(short *)(*(int *)*piVar4 + 2) = *(short *)(*(int *)*piVar4 + 2) + -1;
  *(short *)(*(int *)*piVar4 + 6) = *(short *)(*(int *)*piVar4 + 6) + 1;
  *(int *)(*(int *)*piVar4 + 0x52) = *(int *)(iVar5 + 0xca);
  *(short *)(*(int *)*piVar4 + 0x50) = *(short *)(*(int *)(iVar5 + 0xca) + 0x4a);
  *(short *)(*(int *)*piVar4 + 0x4a) = *(short *)(*(int *)(iVar5 + 0xca) + 0x44);
  *(char *)(*(int *)*piVar4 + 0x4c) = *(char *)(*(int *)(iVar5 + 0xca) + 0x46);
  *(short *)(*(int *)*piVar4 + 0x1a) = local_78[0];
  *(short *)(*(int *)*piVar4 + 0x18) = uVar9;
  *(short *)(*(int *)*piVar4 + 0x3a) = param_5;
  *(short *)(*(int *)*piVar4 + 0x48) = 0;
  *(int *)(*(int *)*piVar4 + 0x26) = **(int **)(local_134 + -0x1a88);
  local_70[0] = (int)uVar6;
  if (**(int **)(local_134 + -0x1a84) != 0) {
    if (local_70[0] < 0x101) {
      *(int *)(*(int *)*piVar4 + 0x3e) = **(int **)(local_134 + -0x1a84);
    }
    else {
      *(int *)(*(int *)*piVar4 + 0x3e) = **(int **)(local_134 + -0x378);
    }
  }
  local_70[1] = 32000;
  if (local_70[0] < 32000) {
    piVar10 = local_70;
  }
  else {
    piVar10 = local_70 + 1;
  }
  FUN_100030d8(param_4,*piVar10,*piVar4);
  iVar2 = *(int *)(*(int *)(iVar5 + 0xca) + 0x68);
  uVar6 = FUN_10000a98(*(int *)(local_134 + -0x1a80),0x340,1);
  iVar8 = local_134;
  FUN_100db26c(uVar6);
  uVar13 = (int)uVar6;
  if (iVar2 == 0) {
    iVar8 = FUN_100efa80(*(int *)(iVar5 + 0xca));
    local_d0 = uVar13;
    if (iVar8 == 0) {
      FUN_10002e98(puVar12);
      *(char **)(*(int *)(iVar5 + 0xca) + 0x68) = puVar12;
      iVar8 = local_134;
    }
    else {
      FUN_10002820(puVar12);
      *(char **)(*(int *)(iVar5 + 0xca) + 0x68) = puVar12;
      iVar8 = local_134;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar5 + 0xca) + 0x68);
    puVar12 = *(char **)(iVar3 + 8);
    *(int *)(iVar3 + 8) = uVar13;
  }
  if (param_5 == -1) {
    *(short *)(*(int *)*piVar4 + 6) = *(short *)(*(int *)*piVar4 + 6) + -4;
  }
  FUN_100b2268((unsigned long long)*(unsigned int *)(iVar8 + -0x1d4) + 0x5d0);
  FUN_100021c0();
  *(short *)(*(int *)*piVar4 + 2) = *(short *)(*(int *)*piVar4 + 2) + 1;
  *(short *)(*(int *)*piVar4 + 6) = *(short *)(*(int *)*piVar4 + 6) + 1;
  **(short **)*piVar4 = **(short **)*piVar4 + 2;
  *(short *)(*(int *)*piVar4 + 4) = *(short *)(*(int *)*piVar4 + 4) + 2;
  local_e0 = 2;
  local_de = 1;
  FUN_100b05d4(&local_88,auStack_68,&local_e0);
  uVar7 = FUN_100b0578(auStack_68);
  FUN_100027c0(uVar7,*piVar4);
  *(short *)(*(int *)*piVar4 + 2) = *(short *)(*(int *)*piVar4 + 2) + 1;
  *(short *)(*(int *)*piVar4 + 6) = *(short *)(*(int *)*piVar4 + 6) + 1;
  local_e8 = 2;
  local_e6 = 2;
  FUN_100b05d4(&local_88,auStack_60,&local_e8);
  uVar7 = FUN_100b0578(auStack_60);
  FUN_100027c0(uVar7,*piVar4);
  FUN_100b2268((unsigned long long)*(unsigned int *)(local_134 + -0x1d4) + 0x5e8);
  FUN_100021c0();
  *(short *)(*(int *)*piVar4 + 2) = *(short *)(*(int *)*piVar4 + 2) + -2;
  *(short *)(*(int *)*piVar4 + 6) = *(short *)(*(int *)*piVar4 + 6) + -2;
  **(short **)*piVar4 = **(short **)*piVar4 + -2;
  *(short *)(*(int *)*piVar4 + 4) = *(short *)(*(int *)*piVar4 + 4) + -2;
  uVar7 = FUN_100b0578(&local_88);
  FUN_100027c0(uVar7,*piVar4);
  *(short *)(*(int *)*piVar4 + 2) = *(short *)(*(int *)*piVar4 + 2) + 1;
  *(short *)(*(int *)*piVar4 + 6) = *(short *)(*(int *)*piVar4 + 6) + 1;
  local_f0 = 0;
  local_ee = 1;
  FUN_100b05d4(&local_88,auStack_58,&local_f0);
  uVar7 = FUN_100b0578(auStack_58);
  FUN_100027c0(uVar7,*piVar4);
  FUN_100b2268(auStack_108);
  FUN_100021c0();
  **(short **)*piVar4 = **(short **)*piVar4 + 1;
  *(short *)(*(int *)*piVar4 + 4) = *(short *)(*(int *)*piVar4 + 4) + 1;
  local_f8 = 1;
  local_f6 = 1;
  FUN_100b05d4(&local_88,auStack_50,&local_f8);
  uVar7 = FUN_100b0578(auStack_50);
  FUN_100027c0(uVar7,*piVar4);
  if (iVar2 == 0) {
    *(int *)(*(int *)(iVar5 + 0xca) + 0x68) = 0;
  }
  else {
    *(char **)(*(int *)(*(int *)(iVar5 + 0xca) + 0x68) + 8) = puVar12;
  }
  FUN_100ef5f0(uVar6);
  FUN_100ef5f0(0);
  FUN_100ee8e8(auStack_110,2);
  return param_2;
}

/* Address: 0x100329b0 Size: 116 bytes */
void FUN_100329b0(short param_1,short param_2,short param_3,short param_4)

{
  long long uVar1;
  char local_110 [272];
  
  local_110[0] = 0;
  FUN_10000ac8(param_3,local_110);
  uVar1 = FUN_100b1b08(local_110);
  FUN_10032860(param_1,param_2,uVar1,param_4);
  return;
}

/* Address: 0x10032a24 Size: 808 bytes */
long long FUN_10032a24(void)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  short *puVar4;
  short *psVar5;
  short sVar6;
  short sVar7;
  int *ppuVar8;
  long long uVar9;
  short uVar11;
  short sVar12;
  int iVar10;
  short sVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int bVar17;
  
  iVar16 = iRam1011757c;
  psVar5 = psRam10117530;
  puVar4 = puRam1011752c;
  piVar3 = piRam10117360;
  piVar2 = piRam1011735c;
  psVar1 = psRam10115e28;
  ppuVar8 = 0 /* TVect base */;
  *psRam10115e28 = 0;
  sVar14 = 0;
  sVar12 = 0;
  if (*(short *)(*piVar2 + 0x15e) == 0) {
    sVar13 = *(short *)(*piVar2 + 0x136);
    if (sVar13 < 2) {
      sVar13 = 1;
    }
    if (sVar13 == 1) {
      iVar16 = *piVar2 + *(short *)(*piVar2 + 0x110) * 0x14;
      *puRam10117534 = *(short *)(iVar16 + 0x18a);
      *puRam10117538 = *(short *)(iVar16 + 0x18c);
      uVar11 = FUN_1002be50();
      *puVar4 = uVar11;
      uVar9 = 1;
    }
    else {
      FUN_1002bdc4();
      sVar13 = 5;
      if (0x27 < *(short *)(*(short *)(*piVar2 + 0x110) * 2 + iVar16)) {
        sVar13 = 6;
      }
      *psVar5 = 0;
      sVar15 = *(short *)(*piVar2 + 0x182);
      sVar6 = 0;
      sVar7 = 0;
      if (sVar15 != 0) {
        do {
          sVar12 = sVar7;
          sVar14 = sVar6;
          sVar15 = sVar15 + -1;
          iVar10 = *piVar3 + sVar15 * 0x16;
          if ((*(char *)(iVar10 + 4) == '\x1c') &&
             (sVar14 = sVar14 + 1, *(char *)(iVar10 + 5) == (char)*(short *)(*piVar2 + 0x110)))
          {
            *psVar5 = 1;
            sVar12 = sVar12 + 1;
          }
          sVar6 = sVar14;
          sVar7 = sVar12;
        } while (sVar15 != 0);
      }
      if ((sVar14 < 0x28) && (sVar12 < sVar13)) {
        if (*psVar5 == 0) {
          sVar12 = FUN_1005f230(1,400,300);
        }
        else {
          sVar12 = FUN_1005f230(1,600,1000);
        }
        *psVar1 = sVar12;
        if (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 0x14 + 0x186) < sVar12) {
          uVar9 = 0;
        }
        else {
          iVar10 = FUN_1005f230(1,0x1e,0);
          if (iVar10 < 7) {
            sVar14 = FUN_1005f230(1,*(short *)(*(short *)(*piVar2 + 0x110) * 2 + iVar16),0);
            iVar16 = -1;
            iVar10 = 0;
            sVar12 = 1;
            if (0 < *(short *)(*piVar2 + 0x1602)) {
              do {
                sVar13 = sVar12;
                if (*(char *)(*piVar2 + iVar10 * 0x42 + 0x1619) ==
                    (char)*(short *)(*piVar2 + 0x110)) {
                  sVar13 = sVar12 + 1;
                  iVar16 = iVar10;
                  if (sVar12 == sVar14) break;
                }
                sVar15 = (short)iVar10 + 1;
                iVar10 = (int)sVar15;
                sVar12 = sVar13;
              } while (sVar15 < *(short *)(*piVar2 + 0x1602));
            }
            if (iVar16 == -1) {
              uVar9 = 0;
            }
            else {
              *puVar4 = (short)iVar16;
              if ((*(short *)(*(int*)((char*)ppuVar8 - 0x69d)) == 0) &&
                 (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0xd0) != 1)) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if (bVar17) {
                uVar11 = FUN_1000db10(iVar16);
                *puVar4 = uVar11;
                uVar9 = 1;
              }
              else {
                *puVar4 = (short)iVar16;
                uVar9 = 1;
              }
            }
          }
          else {
            uVar9 = 0;
          }
        }
      }
      else {
        uVar9 = 0;
      }
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

/* Address: 0x10032d4c Size: 224 bytes */
int FUN_10032d4c(void)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  
  piVar1 = piRam10117364;
  sVar2 = 0;
  iVar4 = 0;
  do {
    if (*(char *)(*piRam10117364 + iVar4 * 6 + 4) != '\0') {
      sVar2 = sVar2 + 1;
    }
    sVar3 = (short)iVar4 + 1;
    iVar4 = (int)sVar3;
  } while (sVar3 < 0x1c);
  sVar2 = FUN_1005f230(1,sVar2,0xffffffffffffffff);
  sVar3 = 0;
  iVar4 = 0;
  do {
    if (*(char *)(*piVar1 + iVar4 * 6 + 4) != '\0') {
      if (sVar3 == sVar2) {
        if (0x1b < iVar4) {
          return 0x19;
        }
        if (iVar4 < 0) {
          return 0x19;
        }
        return iVar4;
      }
      sVar3 = sVar3 + 1;
    }
    sVar5 = (short)iVar4 + 1;
    iVar4 = (int)sVar5;
    if (0x1b < sVar5) {
      return 0x19;
    }
  } while( true );
}

/* Address: 0x10032e2c Size: 512 bytes */
void FUN_10032e2c(void)

{
  int *piVar1;
  int *piVar2;
  short *puVar3;
  short *puVar4;
  int *ppuVar5;
  long long uVar6;
  int iVar8;
  long long uVar7;
  short *psVar9;
  int bVar10;
  short sVar11;
  short sVar12;
  char auStack_58 [56];
  short local_20;
  
  puVar4 = puRam10117538;
  puVar3 = puRam10117534;
  piVar2 = piRam1011735c;
  piVar1 = piRam10117358;
  psVar9 = psRam10115e28;
  ppuVar5 = 0 /* TVect base */;
  FUN_10060608(1,0,0);
  iVar8 = *piVar2 + *(short *)(*piVar2 + 0x110) * 0x14;
  *(short *)(iVar8 + 0x186) = *(short *)(iVar8 + 0x186) - *psVar9;
  *psVar9 = 0;
  local_20 = *(short *)(*piVar2 + 0x136);
  sVar12 = local_20;
  if (local_20 < 2) {
    sVar12 = 1;
  }
  if (sVar12 != 1) {
    uVar6 = FUN_10032d4c();
    iVar8 = FUN_1005f230(1,100,0);
    if (iVar8 < 0x46) {
      sVar12 = 1;
    }
    else if (iVar8 < 0x5f) {
      sVar12 = 2;
    }
    else {
      sVar12 = 3;
    }
    if ((*(short *)(*(int*)((char*)ppuVar5 - 0x69d)) == 0) &&
       (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0xd0) != 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) {
      if (sVar12 == 1) {
        uVar7 = FUN_1005f678(0x61,0);
        FUN_10001dd0(auStack_58,uVar7);
      }
      else {
        uVar7 = FUN_1005f678(0x61,1);
        FUN_10001dd0(auStack_58,uVar7,sVar12);
      }
      FUN_1003c938(auStack_58);
    }
    sVar11 = 0;
    if (sVar12 != 0) {
      do {
        psVar9 = (short *)FUN_10053838(uVar6,*puVar3,*puVar4);
        if (psVar9 != (short *)0x0) {
          iVar8 = *piVar1 + psVar9[1] * 0xe0;
          *(unsigned int *)(iVar8 + *psVar9 * 2) = *(unsigned int *)(iVar8 + *psVar9 * 2) | 0x100000;
        }
        sVar11 = sVar11 + 1;
      } while (sVar11 < sVar12);
    }
  }
  return;
}

/* Address: 0x1003302c Size: 596 bytes */
void FUN_1003302c(void)

{
  int *piVar1;
  int *piVar2;
  int uVar3;
  int iVar5;
  long long uVar4;
  int *piVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int local_3c;
  
  uVar3 = uRam1011772c;
  piVar2 = piRam1011735c;
  piVar1 = piRam1011734c;
  piVar6 = *(int **)(*(int *)(*piRam1011734c + 0x88) + 0x148);
  FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x2b8));
  FUN_10001dd0(uVar3,*(int *)(local_3c + -0x1a7c),*(short *)(*piVar2 + 0x110));
  iVar5 = FUN_1005f36c(0x44415420,uVar3);
  if (iVar5 == 0) {
    uVar4 = FUN_1005f6b0(0x14,*(short *)(*piVar2 + 0x110));
    FUN_10001dd0(uVar3,uVar4,*(short *)(*piVar2 + 0x162));
    piVar6 = *(int **)(*(int *)(*piVar1 + 0x88) + 0x14c);
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x2b8));
  }
  piVar6 = (int *)FUN_10051f98(0x44415420,uVar3,1);
  sVar7 = FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xb8));
  iVar5 = FUN_100f1640(sVar7);
  FUN_10052490(piVar6,iVar5,sVar7);
  FUN_100523a8(piVar6,1);
  sVar9 = 0;
  if (*(short *)(*piVar2 + 0x136) == 1) {
    sVar8 = FUN_1005f230(1,8,0);
  }
  else {
    sVar8 = FUN_1005f230(1,100,0);
  }
  iVar11 = 0;
  if (0 < sVar7) {
    do {
      if ((*(char *)(iVar5 + iVar11) == '#') && (sVar9 = sVar9 + 1, sVar9 == sVar8)) {
        iVar11 = (int)(short)((short)iVar11 + 1);
        break;
      }
      sVar10 = (short)iVar11 + 1;
      iVar11 = (int)sVar10;
    } while (sVar10 < sVar7);
  }
  **(unsigned short **)(local_3c + -0x364) = (unsigned short)(*(char *)(iVar5 + iVar11) != '0');
  sVar9 = (short)iVar11 + 2;
  iVar12 = (int)sVar9;
  iVar11 = iVar12;
  do {
    if (sVar7 <= sVar9) {
LAB_10033260:
      FUN_100ef580(iVar5);
      return;
    }
    if (*(char *)(iVar5 + iVar11) < ' ') {
      *(char *)(iVar5 + iVar11) = 0;
      FUN_10001e78(*(int *)(local_3c + -0x360),iVar5 + iVar12);
      goto LAB_10033260;
    }
    sVar9 = (short)iVar11 + 1;
    iVar11 = (int)sVar9;
  } while( true );
}

/* Address: 0x10033280 Size: 712 bytes */
void FUN_10033280(long long param_1,short param_2)

{
  int bVar1;
  short uVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  short *puVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  unsigned long long uVar11;
  int local_a4;
  char auStack_80 [23];
  char uStack_69;
  char uStack_63;
  unsigned short local_40;
  short local_38;
  short local_36;
  short local_34;
  
  puVar6 = puRam1011752c;
  piVar5 = piRam10117360;
  puVar4 = puRam1011735c;
  piVar3 = piRam10117358;
  uVar2 = *puRam1011752c;
  uVar11 = 0;
  do {
    if (*(short *)(*puRam1011735c + (int)((uVar11 & 0xffffffff) << 1) + 0x544) == 0) break;
    sVar8 = (short)uVar11 + 1;
    uVar11 = (unsigned long long)sVar8;
  } while (sVar8 < 0x28);
  FUN_10001dd0((unsigned long long)*puRam1011735c + ((uVar11 & 0x3fffffff) * 4 + uVar11 & 0x3fffffff) * 4 +
               0x224,(unsigned long long)uRam10115e24 + 0x10,param_1);
  iVar9 = (int)((uVar11 & 0xffffffff) << 1);
  *(short *)(*puVar4 + iVar9 + 0x544) = 1;
  *(short *)(iVar9 + *puVar4 + 0x594) = param_2;
  iVar9 = (int)uVar11 + *puVar4;
  *(unsigned int *)(iVar9 + 0x5e4) = *(unsigned int *)(iVar9 + 0x5e4) & 0xfcffffff;
  iVar9 = (int)uVar11 + *puVar4;
  *(unsigned int *)(iVar9 + 0x5e4) = *(unsigned int *)(iVar9 + 0x5e4) & 0x3ffffff;
  FUN_1004a350(uVar2,1,&local_36,&local_38);
  psVar7 = (short *)FUN_10021434();
  if (psVar7 != (short *)0x0) {
    *psVar7 = local_36;
    psVar7[1] = local_38;
    **(short **)(local_a4 + -0x36c) = local_36;
    **(short **)(local_a4 + -0x368) = local_38;
    *(char *)(psVar7 + 2) = 0x1c;
    FUN_10049628(0x1c,auStack_80);
    *(char *)((int)psVar7 + 7) = uStack_63;
    *(char *)(psVar7 + 3) = uStack_63;
    *(char *)(psVar7 + 4) = uStack_69;
    *(char *)((int)psVar7 + 9) = (char)uVar2;
    *(char *)(psVar7 + 5) = (char)uVar11;
    *(char *)((int)psVar7 + 0xb) = 0;
    iVar9 = *piVar3 + local_38 * 0xe0;
    local_40 = *(unsigned short *)(*puVar4 + 0x110) & 0xf | *(unsigned short *)(iVar9 + local_36 * 2) & 0xfff0;
    *(unsigned short *)(iVar9 + local_36 * 2) = local_40;
    iVar9 = *piVar3 + psVar7[1] * 0xe0;
    *(unsigned int *)(iVar9 + *psVar7 * 2) = *(unsigned int *)(iVar9 + *psVar7 * 2) | 0x100000;
    local_34 = *(short *)(*puVar4 + 0x136);
    sVar8 = local_34;
    if (local_34 < 2) {
      sVar8 = 1;
    }
    if (sVar8 < 2) {
      *(char *)(*puVar4 + *(short *)(*puVar4 + 0x110) * 0x1e + 0xd28) = 3;
      iVar9 = (int)(short)(*(short *)(*puVar4 + 0x182) + -1);
      iVar10 = iVar9;
      if (*(short *)(*puVar4 + 0x182) != 0) {
        do {
          iVar10 = iVar9;
          if ((short *)(*piVar5 + iVar9 * 0x16) == psVar7) break;
          iVar10 = (int)(short)((short)iVar9 + -1);
          bVar1 = iVar9 != 0;
          iVar9 = iVar10;
        } while (bVar1);
      }
      *(short *)(*puVar4 + *(short *)(*puVar4 + 0x110) * 0x1e + 0xd2a) = (short)iVar10;
    }
    else {
      FUN_10032e2c();
    }
    FUN_10038c60(*(short *)(*puVar4 + 0x110),0,*puVar6,0,param_1);
  }
  return;
}

/* Address: 0x10033548 Size: 52 bytes */
void FUN_10033548(void)

{
  int *ppuVar1;
  
  ppuVar1 = 0 /* TVect base */;
  FUN_1003302c();
  FUN_10033280((*(int*)((char*)ppuVar1 - 0xd8)),*(short *)(*(int*)((char*)ppuVar1 - 0xd9)));
  return;
}

/* Address: 0x10033600 Size: 1356 bytes */
void FUN_10033600(short param_1,short param_2,short param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  int *puVar6;
  int *ppuVar7;
  int *piVar9;
  int iVar10;
  int *piVar11;
  long long uVar8;
  int iVar12;
  short sVar13;
  int bVar14;
  int uVar15;
  short sVar16;
  int local_8b4;
  char auStack_890 [256];
  char auStack_790 [256];
  char auStack_690 [256];
  char auStack_590 [256];
  char auStack_490 [256];
  char auStack_390 [256];
  char auStack_290 [256];
  short local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  char auStack_174 [40];
  char auStack_14c [332];
  
  puVar6 = puRam10117370;
  piVar5 = piRam10117360;
  piVar4 = piRam1011735c;
  ppuVar7 = 0 /* TVect base */;
  iVar10 = param_1 * 0x16;
  sVar13 = (short)*(char *)(*piRam10117360 + iVar10 + 8);
  cVar1 = *(char *)(*piRam10117360 + iVar10 + 10);
  uVar3 = *(unsigned int *)((int)cVar1 + *piRam1011735c + 0x5e4);
  *(unsigned int *)((int)cVar1 + *piRam1011735c + 0x5e4) =
       ((uVar3 >> 0x18 & 3) + 1) * 0x1000000 & 0x3000000 | uVar3 & 0xfcffffff;
  FUN_10021200(iVar10 + *piVar5,1);
  iVar10 = iVar10 + *piVar5;
  cVar2 = *(char *)(iVar10 + 8);
  *(char *)(iVar10 + 6) = *(char *)(iVar10 + 6) + '\x02';
  if ((*(short *)(*(int*)((char*)ppuVar7 - 0x69d)) == 0) &&
     (*(short *)(*piVar4 + *(short *)(*piVar4 + 0x110) * 2 + 0xd0) != 1)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (!bVar14) {
    FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar7 - 0x5a6)) + (int)*(short *)(**(int **)(*(int*)((char*)ppuVar7 - 0x5a6)) + 0x4c8))
    ;
    FUN_10117884(**(int **)(local_8b4 + -0x1504) +
                 (int)*(short *)(*(int *)**(int **)(local_8b4 + -0x1504) + 0x4c8));
    FUN_10117884(**(int **)(local_8b4 + -0x18fc) +
                 (int)*(short *)(*(int *)**(int **)(local_8b4 + -0x18fc) + 0x4c8));
    FUN_10117884(**(int **)(local_8b4 + -0x16a0) +
                 (int)*(short *)(*(int *)**(int **)(local_8b4 + -0x16a0) + 0x4c8));
    FUN_10092484(7);
    uVar15 = 0;
    piVar9 = (int *)FUN_10117884(**(int **)(local_8b4 + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_8b4 + -0x1e4) + 200),0xfb4
                                 ,*(int *)(**(int **)(local_8b4 + -0x554) + 0x88));
    FUN_100db26c();
    local_190 = 0;
    local_188 = *puVar6;
    *puVar6 = auStack_290;
    local_18c = uVar15;
    local_184 = uVar15;
    local_180 = uVar15;
    iVar10 = FUN_10000090(auStack_290);
    if (iVar10 == 0) {
      piVar11 = (int *)FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),0x6c657665);
      if (piVar11 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar11 + 0x7a8) + (int)piVar11,
                     *(short *)(piVar11 + 0x2a) + param_3,1);
      }
      if (*(short *)(*piVar4 + cVar1 * 2 + 0x594) == 0) {
        sVar16 = 0;
      }
      else {
        sVar16 = 6;
      }
      uVar8 = FUN_1005f678(param_2,sVar16);
      FUN_100b19f4(auStack_390,uVar8);
      FUN_10090e0c(piVar9,0x6e616d65,auStack_390,1);
      FUN_100b19f4(auStack_490,*piVar4 + cVar1 * 0x14 + 0x224);
      FUN_10090e0c(piVar9,0x6c696e31,auStack_490,1);
      uVar8 = FUN_1005f678(param_2,sVar16 + 1);
      FUN_100b19f4(auStack_590,uVar8);
      FUN_10090e0c(piVar9,0x6c696e32,auStack_590,1);
      uVar8 = FUN_1005f678(param_2,sVar16 + 2);
      FUN_100b19f4(auStack_690,uVar8);
      FUN_10090e0c(piVar9,0x6c696e33,auStack_690,1);
      uVar8 = FUN_1005f678(param_2,sVar16 + 3);
      FUN_100b19f4(auStack_790,uVar8);
      FUN_10090e0c(piVar9,0x6c696e34,auStack_790,1);
      uVar8 = FUN_1005f678(param_2,sVar16 + 4);
      FUN_100b19f4(auStack_890,uVar8);
      FUN_10090e0c(piVar9,0x6c696e35,auStack_890,1);
      iVar10 = *piVar4;
      uVar8 = FUN_1005f678(param_2,sVar16 + 5);
      iVar12 = *piVar5 + param_1 * 0x16;
      FUN_10001dd0(auStack_174,uVar8,(*(unsigned int *)(cVar1 + iVar10 + 0x5e4) >> 0x18 & 3) + 1,
                   *(char *)(iVar12 + 8),cVar2 - sVar13,*(char *)(iVar12 + 6),2);
      FUN_100b19f4(auStack_14c,auStack_174);
      FUN_10090e0c(piVar9,0x6c696e36,auStack_14c,1);
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x810));
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x738));
      *puVar6 = local_188;
    }
    else {
      if (piVar9 != (int *)0x0) {
        FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x738));
      }
      FUN_100db158(local_190,local_18c);
    }
  }
  return;
}

/* Address: 0x10033b4c Size: 324 bytes */
void FUN_10033b4c(void)

{
  short sVar1;
  unsigned short uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = piRam10117360;
  piVar3 = piRam1011735c;
  if (*(short *)(*piRam1011735c + 0x182) != 0) {
    sVar1 = *(short *)(*piRam1011735c + 0x182);
    do {
      sVar1 = sVar1 + -1;
      iVar6 = (int)sVar1;
      iVar5 = *piVar4 + iVar6 * 0x16;
      if ((*(char *)(iVar5 + 4) == '\x1c') &&
         ((int)*(char *)(iVar5 + 5) == (int)*(short *)(*piVar3 + 0x110))) {
        uVar2 = *(unsigned short *)(*piVar3 + (int)*(char *)(iVar5 + 10) + 0x5e4);
        if (((uVar2 >> 8 & 3) == 0) && (0xe < uVar2 >> 10)) {
          FUN_10033600(iVar6,0x66,0);
        }
        else if (((uVar2 >> 8 & 3) == 1) && (0x1d < uVar2 >> 10)) {
          FUN_10033600(iVar6,0x67,1);
        }
        else if (((uVar2 >> 8 & 3) == 2) && (0x3b < uVar2 >> 10)) {
          FUN_10033600(iVar6,0x68,2);
        }
      }
    } while (sVar1 != 0);
  }
  return;
}

/* Address: 0x10033c90 Size: 196 bytes */
void FUN_10033c90(short *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned long long uVar5;
  
  piVar4 = piRam10117360;
  piVar3 = piRam1011735c;
  uVar5 = (unsigned long long)param_2;
  if (-1 < (long long)uVar5) {
    *(char *)
     (*piRam1011735c + (int)(((uVar5 & 0xfffffff) * 0x10 - uVar5 & 0xffffffff) << 1) + 0xd28) = 3;
    sVar1 = *(short *)(*piVar3 + 0x182);
    if (sVar1 != 0) {
      do {
        sVar1 = sVar1 + -1;
        if ((short *)(*piVar4 + sVar1 * 0x16) == param_1) {
          *(short *)(*piVar3 + (int)(((uVar5 & 0xfffffff) * 0x10 - uVar5 & 0xffffffff) << 1) + 0xd2a
                    ) = sVar1;
          break;
        }
      } while (sVar1 != 0);
    }
    if (param_2 < 8) {
      iVar2 = *piRam10117354 + param_1[1] * 0x70;
      *(unsigned int *)(iVar2 + *param_1) = *(unsigned int *)(iVar2 + *param_1) & 0xbfffffff;
    }
  }
  return;
}

/* Address: 0x10033d54 Size: 296 bytes */
void FUN_10033d54(short *param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  unsigned long long uVar3;
  int bVar4;
  
  piVar2 = piRam1011735c;
  uVar3 = (unsigned long long)param_2;
  if (-1 < (long long)uVar3) {
    if (*(char *)(*piRam1011735c +
                  (*(unsigned int *)(*piRam10117358 + param_1[1] * 0xe0 + *param_1 * 2) >> 0x18) + 0x711) ==
        '\x02') {
      *(char *)
       (*piRam1011735c + (int)(((uVar3 & 0xfffffff) * 0x10 - uVar3 & 0xffffffff) << 1) + 0xd28) = 0;
      if ((*psRam10115e2c == 0) &&
         (*(short *)(*piVar2 + *(short *)(*piVar2 + 0x110) * 2 + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        FUN_10092be0();
      }
    }
    else {
      iVar1 = (int)(((uVar3 & 0xfffffff) * 0x10 - uVar3 & 0x7fffffff) << 1);
      *(char *)(*piRam1011735c + iVar1 + 0xd28) = 1;
      *(short *)(iVar1 + *piVar2 + 0xd2a) = 0;
      *(short *)(iVar1 + *piVar2 + 0xd2c) = *param_1;
      *(short *)(iVar1 + *piVar2 + 0xd2e) = param_1[1];
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
long long FUN_10034074() { return 0; }

























/* Address: 0x10034130 Size: 188 bytes */
void FUN_10034130(void)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  char auStack_8 [2];
  char auStack_6 [6];
  
  piVar1 = piRam1011735c;
  iVar2 = FUN_10034074(*(short *)(*piRam1011735c + 0x110),auStack_8,auStack_6);
  if ((iVar2 == 0) && (iVar2 = 0, 0 < *(short *)(*piVar1 + 0x1602))) {
    do {
      iVar4 = *piVar1 + iVar2 * 0x42;
      if (((int)*(char *)(iVar4 + 0x1619) == (int)*(short *)(*piVar1 + 0x110)) &&
         ((*(short *)(iVar4 + 0x1636) != 0 && (*(short *)(iVar4 + 0x1638) == -2)))) {
        *(short *)(iVar4 + 0x1636) = 0;
      }
      sVar3 = (short)iVar2 + 1;
      iVar2 = (int)sVar3;
    } while (sVar3 < *(short *)(*piVar1 + 0x1602));
  }
  return;
}

/* Address: 0x100341ec Size: 392 bytes */
void FUN_100341ec(int *param_1)

{
  unsigned short *puVar1;
  int iVar2;
  int *piVar5;
  long long lVar3;
  long long uVar4;
  int local_134;
  char local_110 [272];
  
  puVar1 = puRam1011753c;
  local_110[0] = 0;
  piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e616d65);
  if (piVar5 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar5 + 0x7a0) + (int)piVar5,local_110);
  }
  piVar5 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x73657820);
  if (piVar5 != (int *)0x0) {
    lVar3 = FUN_10117884((int)*(short *)(*piVar5 + 0x7c0) + (int)piVar5);
    *puVar1 = (unsigned short)(lVar3 != 0x6d616c65);
  }
  iVar2 = local_134;
  uVar4 = FUN_100b1b08(local_110);
  FUN_10033280(uVar4,*puVar1);
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x328));
    uVar4 = FUN_1007a894(0);
    FUN_1007a95c(uVar4,param_1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),uVar4);
    iVar2 = local_134;
  }
  FUN_1003f674(1,0,1);
  iVar2 = *(int *)(**(int **)(iVar2 + -0x554) + 0x88);
  *(short *)(iVar2 + 0x1dc) = 1;
  FUN_1007c714(iVar2,0x3ef);
  return;
}

/* Address: 0x10034374 Size: 184 bytes */
void FUN_10034374(int *param_1)

{
  int iVar1;
  int *ppuVar2;
  long long uVar3;
  int **local_2c;
  
  ppuVar2 = 0 /* TVect base */;
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x328) + (int)param_1);
    uVar3 = FUN_1007a894(0);
    FUN_1007a95c(uVar3,param_1);
    FUN_10117884((int)*(short *)(*param_1 + 0x200) + (int)param_1,uVar3);
    ppuVar2 = local_2c;
  }
  FUN_1003f674(0,0,0);
  iVar1 = *(int *)(*(int *)(*(int*)((char*)ppuVar2 - 0x155)) + 0x88);
  *(short *)(iVar1 + 0x1dc) = 1;
  FUN_1007c714(iVar1,0x3ef);
  return;
}

/* Address: 0x1003442c Size: 2152 bytes */
void FUN_1003442c(void)

{
  unsigned int uVar1;
  short *puVar2;
  unsigned int *puVar3;
  int *puVar4;
  short *psVar5;
  short *psVar6;
  int *ppuVar7;
  int *piVar9;
  int iVar10;
  long long uVar8;
  int *piVar11;
  short uVar12;
  unsigned long long uVar13;
  short sVar14;
  int local_784;
  char auStack_760 [256];
  char auStack_660 [256];
  char auStack_560 [256];
  char auStack_460 [256];
  char auStack_360 [256];
  char auStack_260 [56];
  char auStack_228 [56];
  char auStack_1f0 [56];
  char auStack_1b8 [80];
  char auStack_168 [256];
  short local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  short local_4c;
  short local_4a;
  short local_48;
  
  psVar6 = psRam1011753c;
  psVar5 = psRam1011752c;
  puVar4 = puRam10117370;
  puVar3 = puRam1011735c;
  puVar2 = puRam10115e28;
  ppuVar7 = 0 /* TVect base */;
  local_4c = *(short *)(*puRam1011735c + 0x136);
  sVar14 = local_4c;
  if (local_4c < 2) {
    sVar14 = 1;
  }
  if (*pcRam10117378 != '\0') {
    ppuVar7 = 0 /* TVect base */;
    FUN_100802ec();
    FUN_100802fc(0);
  }
  piVar9 = (int *)FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar7 - 0x79)) +
                               (int)*(short *)(**(int **)(*(int*)((char*)ppuVar7 - 0x79)) + 200),0xc80,
                               *(int *)(*(int *)(*(int*)((char*)ppuVar7 - 0x155)) + 0x88));
  FUN_100db26c();
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_58 = 0;
  local_60 = *puVar4;
  *puVar4 = auStack_168;
  iVar10 = FUN_10000090(auStack_168);
  if (iVar10 == 0) {
    FUN_10060608(1,1,0);
    iVar10 = *puVar3 + *psVar5 * 0x42;
    FUN_10061980(*(short *)(iVar10 + 0x1604),*(short *)(iVar10 + 0x1606),1);
    FUN_10061354(0);
    FUN_1003302c();
    if (sVar14 == 1) {
      if (*psVar6 == 0) {
        uVar8 = FUN_1005f678(0x62,0);
        FUN_10001dd0(auStack_1b8,uVar8);
        uVar8 = FUN_1005f678(0x62,1);
        FUN_10001dd0(auStack_1f0,uVar8);
        uVar8 = FUN_1005f678(0x62,2);
        FUN_10001dd0(auStack_228,uVar8);
        uVar8 = FUN_1005f678(0x62,3);
        FUN_10001dd0(auStack_260,uVar8,
                     (unsigned long long)*puVar3 +
                     (((long long)*psVar5 & 0x7ffffffU) * 0x20 + (long long)*psVar5 & 0x7fffffff) * 2
                     + 0x1608);
      }
      else {
        uVar8 = FUN_1005f678(0x62,8);
        FUN_10001dd0(auStack_1b8,uVar8);
        uVar8 = FUN_1005f678(0x62,9);
        FUN_10001dd0(auStack_1f0,uVar8);
        uVar8 = FUN_1005f678(0x62,10);
        FUN_10001dd0(auStack_228,uVar8);
        uVar8 = FUN_1005f678(0x62,0xb);
        FUN_10001dd0(auStack_260,uVar8,
                     (unsigned long long)*puVar3 +
                     (((long long)*psVar5 & 0x7ffffffU) * 0x20 + (long long)*psVar5 & 0x7fffffff) * 2
                     + 0x1608);
      }
    }
    else if (*psVar6 == 0) {
      uVar8 = FUN_1005f678(0x62,4);
      FUN_10001dd0(auStack_1b8,uVar8,
                   (unsigned long long)*puVar3 +
                   (((long long)*psVar5 & 0x7ffffffU) * 0x20 + (long long)*psVar5 & 0x7fffffff) * 2 +
                   0x1608);
      uVar8 = FUN_1005f678(0x62,5);
      FUN_10001dd0(auStack_1f0,uVar8,*puVar2);
      uVar8 = FUN_1005f678(0x62,6);
      FUN_10001dd0(auStack_228,uVar8,
                   *(short *)(*puVar3 + *(short *)(*puVar3 + 0x110) * 0x14 + 0x186));
      uVar8 = FUN_1005f678(0x62,7);
      FUN_10001dd0(auStack_260,uVar8);
    }
    else {
      uVar8 = FUN_1005f678(0x62,0xc);
      FUN_10001dd0(auStack_1b8,uVar8,
                   (unsigned long long)*puVar3 +
                   (((long long)*psVar5 & 0x7ffffffU) * 0x20 + (long long)*psVar5 & 0x7fffffff) * 2 +
                   0x1608);
      uVar8 = FUN_1005f678(0x62,0xd);
      FUN_10001dd0(auStack_1f0,uVar8,*puVar2);
      uVar8 = FUN_1005f678(0x62,0xe);
      FUN_10001dd0(auStack_228,uVar8,
                   *(short *)(*puVar3 + *(short *)(*puVar3 + 0x110) * 0x14 + 0x186));
      uVar8 = FUN_1005f678(0x62,0xf);
      FUN_10001dd0(auStack_260,uVar8);
    }
    piVar11 = (int *)FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),0x70696374);
    if (piVar11 != (int *)0x0) {
      if (*psVar6 == 0) {
        uVar12 = 0xc80;
      }
      else {
        uVar12 = 0xc81;
      }
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x7a8),uVar12,0);
    }
    iVar10 = local_784;
    FUN_100b19f4(auStack_360,auStack_1b8);
    FUN_10090e0c(piVar9,0x73747231,auStack_360,0);
    FUN_100b19f4(auStack_460,auStack_1f0);
    FUN_10090e0c(piVar9,0x73747232,auStack_460,0);
    FUN_100b19f4(auStack_560,auStack_228);
    FUN_10090e0c(piVar9,0x73747233,auStack_560,0);
    FUN_100b19f4(auStack_660,auStack_260);
    FUN_10090e0c(piVar9,0x73747234,auStack_660,0);
    FUN_100b19f4(auStack_760,*(int *)(iVar10 + -0x360));
    FUN_10090e0c(piVar9,0x6e616d65,auStack_760,0);
    piVar11 = (int *)FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),0x73657820);
    if (piVar11 != (int *)0x0) {
      if (*psVar6 == 0) {
        uVar8 = 0x6d616c65;
      }
      else {
        uVar8 = 0x66656d61;
      }
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x7c8),uVar8);
    }
    piVar11 = (int *)FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x308),0x646f6e74);
    if (piVar11 != (int *)0x0) {
      local_4a = *(short *)(*puVar3 + 0x136);
      uVar13 = (unsigned long long)local_4a;
      if (local_4a < 2) {
        uVar13 = 1;
      }
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x738),
                   ('\x01' - ((1 < uVar13) + '\x01')) +
                   (uVar13 != 0 && (unsigned long long)(1 < uVar13) <= uVar13 - 1),0);
      local_48 = *(short *)(*puVar3 + 0x136);
      uVar13 = (unsigned long long)local_48;
      if (local_48 < 2) {
        uVar13 = 1;
      }
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x660),
                   ((unsigned long long)(uVar13 < 2) + 2) -
                   ((unsigned long long)((unsigned long long)(uVar13 < 2) < 0xfffffffffffffffe) -
                   ((long long)(uVar13 << 0x20) >> 0x3f)) & 1,0);
    }
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 800));
    uVar1 = *puVar3;
    if ((*(short *)(uVar1 + 0x12e) != 0) && ((*(unsigned int *)(uVar1 + 0x134) >> 0x18 & 1) == 0)) {
      *(unsigned int *)(uVar1 + 0x134) = *(unsigned int *)(uVar1 + 0x134) | 0x1000000;
      FUN_1005f6b0(0x19,0);
      FUN_10040040();
    }
    iVar10 = FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x810));
    FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x328));
    FUN_10117884(**(int **)(local_784 + -0x1698) +
                 (int)*(short *)(*(int *)**(int **)(local_784 + -0x1698) + 0x4c8));
    FUN_10117884(**(int **)(local_784 + -0x1504) +
                 (int)*(short *)(*(int *)**(int **)(local_784 + -0x1504) + 0x4c8));
    FUN_10117884(**(int **)(local_784 + -0x18fc) +
                 (int)*(short *)(*(int *)**(int **)(local_784 + -0x18fc) + 0x4c8));
    FUN_10117884(**(int **)(local_784 + -0x16a0) +
                 (int)*(short *)(*(int *)**(int **)(local_784 + -0x16a0) + 0x4c8));
    if (iVar10 == 0x68697265) {
      FUN_100341ec(piVar9);
    }
    else {
      FUN_10034374(piVar9);
    }
    *puVar4 = local_60;
  }
  else {
    if (piVar9 != (int *)0x0) {
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x738));
    }
    FUN_100db158(local_68,local_64);
  }
  return;
}

/* Address: 0x10034c94 Size: 1368 bytes */
void FUN_10034c94(short param_1,int *param_2)

{
  short *puVar1;
  unsigned int *puVar2;
  short *psVar3;
  short *psVar4;
  int *piVar6;
  long long uVar5;
  int *piVar7;
  short uVar8;
  short sVar9;
  char auStack_520 [256];
  char auStack_420 [256];
  char auStack_320 [256];
  char auStack_220 [256];
  char auStack_120 [56];
  char auStack_e8 [56];
  char auStack_b0 [56];
  char auStack_78 [56];
  short local_40;
  
  psVar4 = psRam1011753c;
  psVar3 = psRam1011752c;
  puVar2 = puRam1011735c;
  puVar1 = puRam10115e28;
  *psRam1011753c = param_1;
  piVar6 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x70696374);
  if (piVar6 != (int *)0x0) {
    if (*psVar4 == 0) {
      uVar8 = 0xc80;
    }
    else {
      uVar8 = 0xc81;
    }
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7a8),uVar8,0);
  }
  local_40 = *(short *)(*puVar2 + 0x136);
  sVar9 = local_40;
  if (local_40 < 2) {
    sVar9 = 1;
  }
  if (sVar9 == 1) {
    if (*psVar4 == 0) {
      uVar5 = FUN_1005f678(0x62,0);
      FUN_10001dd0(auStack_78,uVar5);
      uVar5 = FUN_1005f678(0x62,1);
      FUN_10001dd0(auStack_b0,uVar5);
      uVar5 = FUN_1005f678(0x62,2);
      FUN_10001dd0(auStack_e8,uVar5);
      uVar5 = FUN_1005f678(0x62,3);
      FUN_10001dd0(auStack_120,uVar5,
                   (unsigned long long)*puVar2 +
                   (((long long)*psVar3 & 0x7ffffffU) * 0x20 + (long long)*psVar3 & 0x7fffffff) * 2 +
                   0x1608);
    }
    else {
      uVar5 = FUN_1005f678(0x62,8);
      FUN_10001dd0(auStack_78,uVar5);
      uVar5 = FUN_1005f678(0x62,9);
      FUN_10001dd0(auStack_b0,uVar5);
      uVar5 = FUN_1005f678(0x62,10);
      FUN_10001dd0(auStack_e8,uVar5);
      uVar5 = FUN_1005f678(0x62,0xb);
      FUN_10001dd0(auStack_120,uVar5,
                   (unsigned long long)*puVar2 +
                   (((long long)*psVar3 & 0x7ffffffU) * 0x20 + (long long)*psVar3 & 0x7fffffff) * 2 +
                   0x1608);
    }
  }
  else if (*psVar4 == 0) {
    uVar5 = FUN_1005f678(0x62,4);
    FUN_10001dd0(auStack_78,uVar5,
                 (unsigned long long)*puVar2 +
                 (((long long)*psVar3 & 0x7ffffffU) * 0x20 + (long long)*psVar3 & 0x7fffffff) * 2 +
                 0x1608);
    uVar5 = FUN_1005f678(0x62,5);
    FUN_10001dd0(auStack_b0,uVar5,*puVar1);
    uVar5 = FUN_1005f678(0x62,6);
    FUN_10001dd0(auStack_e8,uVar5,
                 *(short *)(*puVar2 + *(short *)(*puVar2 + 0x110) * 0x14 + 0x186));
    uVar5 = FUN_1005f678(0x62,7);
    FUN_10001dd0(auStack_120,uVar5);
  }
  else {
    uVar5 = FUN_1005f678(0x62,0xc);
    FUN_10001dd0(auStack_78,uVar5,
                 (unsigned long long)*puVar2 +
                 (((long long)*psVar3 & 0x7ffffffU) * 0x20 + (long long)*psVar3 & 0x7fffffff) * 2 +
                 0x1608);
    uVar5 = FUN_1005f678(0x62,0xd);
    FUN_10001dd0(auStack_b0,uVar5,*puVar1);
    uVar5 = FUN_1005f678(0x62,0xe);
    FUN_10001dd0(auStack_e8,uVar5,
                 *(short *)(*puVar2 + *(short *)(*puVar2 + 0x110) * 0x14 + 0x186));
    uVar5 = FUN_1005f678(0x62,0xf);
    FUN_10001dd0(auStack_120,uVar5);
  }
  piVar7 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x73747231);
  if (piVar7 != (int *)0x0) {
    FUN_100b19f4(auStack_220,auStack_78);
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),auStack_220,0);
  }
  piVar7 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x73747232);
  if (piVar7 != (int *)0x0) {
    FUN_100b19f4(auStack_320,auStack_b0);
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),auStack_320,0);
  }
  piVar7 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x73747233);
  if (piVar7 != (int *)0x0) {
    FUN_100b19f4(auStack_420,auStack_e8);
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),auStack_420,0);
  }
  piVar7 = (int *)FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x308),0x73747234);
  if (piVar7 != (int *)0x0) {
    FUN_100b19f4(auStack_520,auStack_120);
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),auStack_520,0);
  }
  FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
  return;
}

/* Address: 0x100358d4 Size: 1016 bytes */
void FUN_100358d4(unsigned short param_1)

{
  int *puVar1;
  int *piVar2;
  int uVar3;
  int *piVar4;
  int *piVar5;
  short *psVar6;
  int *ppuVar7;
  int iVar9;
  int *piVar10;
  long long uVar8;
  short sVar11;
  short sVar12;
  unsigned long long uVar13;
  int **local_2b4;
  char auStack_290 [256];
  int local_190;
  int uStack_18c;
  unsigned int uStack_188;
  char auStack_180 [256];
  char auStack_80 [128];
  
  psVar6 = psRam10117544;
  piVar5 = piRam10117364;
  piVar4 = piRam1011735c;
  piVar10 = piRam1011734c;
  uVar3 = uRam10116a54;
  piVar2 = piRam10115e34;
  ppuVar7 = 0 /* TVect base */;
  if ((param_1 != 0) && (*piRam10115e34 == 0)) {
    FUN_1007f034(*(int *)(*piRam1011734c + 0x88));
    iVar9 = FUN_10117884((int)*(int **)(*(int*)((char*)ppuVar7 - 0x79)) +
                         (int)*(short *)(**(int **)(*(int*)((char*)ppuVar7 - 0x79)) + 200),0xdb6,
                         *(int *)(*piVar10 + 0x88));
    *piVar2 = iVar9;
    FUN_100db26c();
    piVar10 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),0x6e616d65);
    ppuVar7 = local_2b4;
    if (piVar10 != (int *)0x0) {
      uVar8 = FUN_1005f678(0x51,0);
      FUN_100b19f4(auStack_290,uVar8);
      FUN_10117884((int)*(short *)(*piVar10 + 0x7c8) + (int)piVar10,auStack_290,param_1 & 0xff);
    }
  }
  iVar9 = 0;
  do {
    if (*(char *)(*piVar5 + iVar9 * 6 + 4) == '\0') break;
    sVar11 = (short)iVar9 + 1;
    iVar9 = (int)sVar11;
  } while (sVar11 < 0x1d);
  uVar13 = 0x19;
  do {
    if (*(char *)(*piVar5 + (int)(((uVar13 & 0x3fffffff) * 4 - uVar13 & 0xffffffff) << 1) + 4) !=
        '\0') break;
    uVar13 = (unsigned long long)(short)((short)uVar13 + -1);
  } while (-1 < (long long)uVar13);
  puVar1 = (int *)(*(int*)((char*)ppuVar7 - 0x69a));
  local_190 = *puVar1;
  uStack_18c = puVar1[1];
  uStack_188 = puVar1[2] & 0xffff0000;
  iVar9 = 0;
  do {
    uVar8 = FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),iVar9 + 0x61726d30);
    if ((int)uVar8 != 0) {
      FUN_10079ee8(uVar8,*(short *)((int)&local_190 + iVar9 * 2),*psVar6);
      FUN_1007a018(uVar8,1,0,0,param_1 & 0xff);
    }
    sVar11 = (short)iVar9 + 1;
    iVar9 = (int)sVar11;
  } while (sVar11 < 5);
  FUN_1003206c(2,0xe0,0xff,0xf9);
  if (*psVar6 == *(short *)(*piVar4 + 0x110)) {
    sVar11 = 0x52;
  }
  else {
    sVar11 = 0x57;
  }
  uVar13 = 0;
  do {
    piVar10 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),
                                  uVar13 + 0x73747230);
    if (piVar10 != (int *)0x0) {
      if (*(short *)(*piVar4 + *(short *)(*piVar4 + 0x110) * 0x50 + *psVar6 * 10 +
                     (int)((uVar13 & 0xffffffff) << 1) + 0x11a2) < 1) {
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8),uVar3,param_1 & 0xff);
      }
      else {
        uVar8 = FUN_1005f678(sVar11 + (short)uVar13,
                             *(short *)(*piVar4 + *(short *)(*piVar4 + 0x110) * 0x50 + *psVar6 * 10
                                        + (int)((uVar13 & 0xffffffff) << 1) + 0x11a2) != 1);
        FUN_10001dd0(auStack_80,uVar8,
                     *(short *)
                      (*piVar4 + *(short *)(*piVar4 + 0x110) * 0x50 + *psVar6 * 10 +
                       (int)((uVar13 & 0xffffffff) << 1) + 0x11a2));
        FUN_100b19f4(auStack_180,auStack_80);
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x7c8),auStack_180,param_1 & 0xff);
      }
    }
    sVar12 = (short)uVar13 + 1;
    uVar13 = (unsigned long long)sVar12;
  } while (sVar12 < 5);
  FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 800));
  return;
}

/* Address: 0x10035ccc Size: 172 bytes */
void FUN_10035ccc(void)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  
  psVar2 = psRam10117544;
  piVar1 = piRam10115e34;
  uVar6 = 0;
  do {
    piVar3 = (int *)FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 0x308),
                                 uVar6 + 0x73696430);
    if (piVar3 != (int *)0x0) {
      uVar5 = (unsigned long long)*psVar2;
      FUN_10117884((int)*(short *)(*piVar3 + 0x748) + (int)piVar3,
                   (uVar5 <= uVar6 && (unsigned long long)(uVar5 < uVar6) <= uVar6 - uVar5) - (uVar5 < uVar6)
                   ,1);
    }
    sVar4 = (short)uVar6 + 1;
    uVar6 = (unsigned long long)sVar4;
  } while (sVar4 < 8);
  return;
}

/* Address: 0x10035e9c Size: 248 bytes */
void FUN_10035e9c(void)

{
  int *puVar1;
  int iVar2;
  int *piVar4;
  long long lVar3;
  int *puVar5;
  int uVar6;
  int local_34;
  
  puVar1 = puRam10117548;
  piVar4 = (int *)FUN_100522dc(*(int *)(*(int *)(*piRam1011734c + 0x88) + 0x160),1,0);
  if (piVar4 != (int *)0x0) {
    lVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xb8));
    iVar2 = local_34;
    puVar5 = (int *)FUN_100f15e0(lVar3 + -4);
    **(int **)(iVar2 + -0x354) = puVar5;
    if (puVar5 != (int *)0x0) {
      FUN_10002598(puVar5);
      iVar2 = local_34;
    }
    *puVar1 = *puVar5;
    FUN_10052518(piVar4,4,0);
    FUN_10052490(piVar4,*puVar1,lVar3 + -4);
    FUN_100523a8(piVar4,1);
    uVar6 = FUN_100f1640(0x900);
    **(int **)(iVar2 + -0x350) = uVar6;
  }
  return;
}

/* Address: 0x10035f94 Size: 72 bytes */
unsigned short * FUN_10035f94(short param_1)

{
  unsigned short uVar1;
  short sVar2;
  unsigned short *puVar3;
  
  puVar3 = (unsigned short *)*puRam10117548;
  sVar2 = 1;
  if (1 < param_1) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + (short)(((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0)
                               );
      sVar2 = sVar2 + 1;
    } while (sVar2 < param_1);
  }
  return puVar3 + 0x11;
}

/* Address: 0x10035fdc Size: 72 bytes */
unsigned short * FUN_10035fdc(short param_1)

{
  unsigned short uVar1;
  short sVar2;
  unsigned short *puVar3;
  
  puVar3 = (unsigned short *)*puRam10117548;
  sVar2 = 1;
  if (1 < param_1) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + (short)(((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0)
                               );
      sVar2 = sVar2 + 1;
    } while (sVar2 < param_1);
  }
  return puVar3 + 1;
}

/* Address: 0x10036024 Size: 72 bytes */
unsigned short * FUN_10036024(short param_1)

{
  unsigned short uVar1;
  short sVar2;
  unsigned short *puVar3;
  
  puVar3 = (unsigned short *)*puRam10117548;
  sVar2 = 1;
  if (1 < param_1) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + (short)(((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0)
                               );
      sVar2 = sVar2 + 1;
    } while (sVar2 < param_1);
  }
  return puVar3 + 9;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003606c() { }
















































































































































































































































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_10036d3c() { }


















































/* Address: 0x10036efc Size: 104 bytes */
unsigned short * FUN_10036efc(short param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  short sVar3;
  unsigned short *puVar4;
  
  puVar4 = (unsigned short *)*puRam10117548;
  sVar3 = 1;
  if (1 < param_1) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + (short)(((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0)
                               );
      sVar3 = sVar3 + 1;
    } while (sVar3 < param_1);
  }
  uVar2 = (int)*(short *)(*piRam1011735c + 0x1602) + 1;
  return puVar4 + ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 0x19;
}

/* Address: 0x10036f64 Size: 100 bytes */
unsigned long long FUN_10036f64(char param_1)

{
  if (((long long)param_1 & 0xffffffffU) < 0xb) {
    return (long long)param_1;
  }
  return (unsigned long long)uRam101175f8;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10037444() { }















































































































































/* Address: 0x10037690 Size: 72 bytes */
unsigned short * FUN_10037690(short param_1)

{
  unsigned short uVar1;
  short sVar2;
  unsigned short *puVar3;
  
  puVar3 = (unsigned short *)*puRam10117548;
  sVar2 = 1;
  if (1 < param_1) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + (short)(((short)uVar1 >> 1) + (unsigned short)((short)uVar1 < 0 && (uVar1 & 1) != 0)
                               );
      sVar2 = sVar2 + 1;
    } while (sVar2 < param_1);
  }
  return puVar3 + 0x19;
}

/* Address: 0x10037f68 Size: 92 bytes */
void FUN_10037f68(void)

{
  int *piVar1;
  int *puVar2;
  int uVar3;
  
  puVar2 = puRam10117550;
  piVar1 = piRam1011754c;
  if (*piRam1011754c != 0) {
    FUN_10002ad8();
  }
  FUN_100ef510(*piVar1);
  uVar3 = FUN_100ef580(*puVar2);
  *puVar2 = uVar3;
  return;
}

/* Address: 0x100381dc Size: 172 bytes */
void FUN_100381dc(short param_1)

{
  int *piVar1;
  int local_2c;
  
  piVar1 = (int *)FUN_10117884(*piRam10115e34 + (int)*(short *)(*(int *)*piRam10115e34 + 0x308),
                               0x67726170);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  **(short **)(local_2c + -0x1a54) = param_1;
  FUN_1007f0a4(*(int *)(**(int **)(local_2c + -0x554) + 0x88),param_1);
  FUN_100376d8(1,1);
  FUN_10037cdc();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10038288() { }

























































































/* Address: 0x10038624 Size: 56 bytes */
void FUN_10038624(short param_1)

{
  *puRam10117544 = param_1;
  FUN_100358d4(1);
  FUN_10035ccc();
  return;
}

/* Address: 0x10038d8c Size: 556 bytes */
void FUN_10038d8c(int param_1,int param_2,int param_3,short param_4,short param_5,short param_6)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long long lVar4;
  int iVar5;
  char auStack_f0 [22];
  short local_da;
  short local_d4;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_bc;
  short local_ba;
  short asStack_b2 [32];
  short asStack_72 [57];
  
  iVar3 = 0;
  lVar4 = 0;
  do {
    if ((((int)lVar4 != 0x1c) && ((int)lVar4 != 5)) &&
       (FUN_10049628(lVar4,auStack_f0), local_c0 != 0)) {
      asStack_72[iVar3 + 1] = (short)lVar4;
      asStack_b2[iVar3 + 1] =
           local_da + (local_c8 + local_c6 + local_c4 + local_c2) * 3 + local_ba * 2 + local_bc * 2
           + local_d4 / 5;
      iVar3 = (int)(short)((short)iVar3 + 1);
    }
    sVar2 = (short)lVar4 + 1;
    lVar4 = (long long)sVar2;
  } while (sVar2 < 0x1d);
  iVar5 = 1;
  if (1 < iVar3) {
    do {
      iVar1 = iVar5;
      if (asStack_b2[iVar5 + 1] < asStack_b2[iVar5]) {
        for (; 0 < iVar1; iVar1 = (int)(short)((short)iVar1 + -1)) {
          sVar2 = asStack_b2[iVar1 + 1];
          if (sVar2 < asStack_b2[iVar1]) {
            asStack_b2[iVar1 + 1] = asStack_b2[iVar1];
            asStack_b2[iVar1] = sVar2;
            sVar2 = asStack_72[iVar1 + 1];
            asStack_72[iVar1 + 1] = asStack_72[iVar1];
            asStack_72[iVar1] = sVar2;
          }
        }
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < iVar3);
  }
  iVar5 = (int)(short)((short)iVar3 + -1);
  iVar3 = 0;
  if (0 < param_4) {
    do {
      *(char *)(param_1 + iVar3) = (char)asStack_72[iVar5 + 1];
      if (0 < iVar5) {
        iVar5 = (int)(short)((short)iVar5 + -1);
      }
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while (sVar2 < param_4);
  }
  iVar3 = 0;
  if (0 < param_5) {
    do {
      *(char *)(param_2 + iVar3) = (char)asStack_72[iVar5 + 1];
      if (0 < iVar5) {
        iVar5 = (int)(short)((short)iVar5 + -1);
      }
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while (sVar2 < param_5);
  }
  iVar5 = 0;
  iVar3 = 0;
  if (0 < param_6) {
    do {
      *(char *)(param_3 + iVar3) = (char)asStack_72[iVar5 + 1];
      if (0 < iVar5) {
        iVar5 = (int)(short)((short)iVar5 + 1);
      }
      sVar2 = (short)iVar3 + 1;
      iVar3 = (int)sVar2;
    } while (sVar2 < param_6);
  }
  return;
}

/* Address: 0x10038fb8 Size: 300 bytes */
void FUN_10038fb8(void)

{
  int bVar1;
  int *piVar2;
  unsigned long long uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  piVar2 = piRam1011735c;
  sVar4 = *(short *)(*piRam1011735c + 0x810);
  sVar5 = (short)((sVar4 * 4 - (int)sVar4) / 10);
  iVar6 = 0;
  if (0 < sVar4) {
    do {
      *(short *)(*piVar2 + iVar6 * 0x20 + 0x82e) = 0;
      *(short *)(iVar6 * 0x20 + *piVar2 + 0x830) = 0xff;
      sVar4 = (short)iVar6 + 1;
      iVar6 = (int)sVar4;
    } while (sVar4 < *(short *)(*piVar2 + 0x810));
  }
  sVar4 = 0;
  if (0 < sVar5) {
    do {
      bVar1 = false;
      do {
        uVar3 = FUN_1005f230(1,*(short *)(*piVar2 + 0x810),0xffffffffffffffff);
        iVar6 = *piVar2 + (int)((uVar3 & 0xffffffff) << 5);
        if ((*(char *)(iVar6 + 0x82a) != '\x01') && (*(short *)(iVar6 + 0x82e) == 0)) {
          bVar1 = true;
        }
      } while (!bVar1);
      iVar6 = (int)((uVar3 & 0xffffffff) << 5);
      *(short *)(*piVar2 + iVar6 + 0x82e) = 1;
      if (*(short *)(*piVar2 + 0x11e) != 0) {
        *(short *)(iVar6 + *piVar2 + 0x830) = 0;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < sVar5);
  }
  return;
}

/* Address: 0x100390e4 Size: 156 bytes */
long long FUN_100390e4(void)

{
  int in_r8;
  char cStack0000002c;
  char cStack0000002d;
  
  cStack0000002c = (char)((unsigned int)in_r8 >> 0x18);
  if (cStack0000002c == '\x06') {
    return 1;
  }
  if (cStack0000002c == '\x05') {
    return 1;
  }
  if ((cStack0000002c == '\x02') &&
     (cStack0000002d = (char)((unsigned int)in_r8 >> 0x10), '\x01' < cStack0000002d)) {
    return 1;
  }
  if (cStack0000002c == '\b') {
    return 1;
  }
  return 0;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_10039180() { }



































































































































/* Address: 0x10039d80 Size: 164 bytes */
short FUN_10039d80(long long param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  
  iVar3 = iRam1011773c;
  psVar2 = psRam1011760c;
  piVar1 = piRam1011735c;
  FUN_1003aeb0(2,0,0,param_1);
  sVar6 = 0;
  iVar5 = 0;
  if (0 < *psVar2) {
    do {
      if (*(char *)(*piVar1 + *(short *)(iVar5 * 2 + iVar3) * 0x1e + 0xd26) == '\x06') {
        sVar6 = sVar6 + 1;
      }
      sVar4 = (short)iVar5 + 1;
      iVar5 = (int)sVar4;
    } while (sVar4 < *psVar2);
  }
  return sVar6;
}

/* FUN_10039e24 defined elsewhere */




























/* Address: 0x1003a0f4 Size: 96 bytes */
int FUN_1003a0f4(short param_1)

{
  if (*(unsigned char *)(*piRam1011735c + param_1 * 0x1e + 0xd28) < 4) {
    return (int)param_1;
  }
  return 1;
}

/* Address: 0x1003a760 Size: 52 bytes */
void FUN_1003a760(void)

{
  FUN_1005f6b0(0x45,0);
  FUN_10040040();
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003a794() { }

























































































































/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003a9c4() { }




















/* Address: 0x1003aa68 Size: 208 bytes */
void FUN_1003aa68(void)

{
  int *piVar1;
  int local_2c;
  
  piVar1 = (int *)FUN_10117884(*piRam10115e78 + (int)*(short *)(*(int *)*piRam10115e78 + 0x308),
                               0x6c697374);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x8b0) + (int)piVar1,*(short *)(piVar1 + 0x20));
    FUN_10117884((int)*(short *)(*piVar1 + 0x8d8) + (int)piVar1,**(short **)(local_2c + -0x294)
                );
    FUN_10117884((int)*(short *)(*piVar1 + 0x8f0) + (int)piVar1,**(short **)(local_2c + -0x33c) + 1,
                 0,1,1);
  }
  return;
}

/* Address: 0x1003ab38 Size: 196 bytes */
void FUN_1003ab38(void)

{
  int *piVar1;
  int iVar2;
  int local_12c;
  char auStack_108 [264];
  
  piVar1 = piRam10115e78;
  if (*piRam10115e78 == 0) {
    iVar2 = FUN_10117884(*piRam101176bc + (int)*(short *)(*(int *)*piRam101176bc + 200),
                         *puRam10117568,*(int *)(*piRam1011734c + 0x88));
    *piVar1 = iVar2;
    FUN_100db26c();
  }
  FUN_10117884(*piVar1 + (int)*(short *)(*(int *)*piVar1 + 800));
  FUN_100b19f4(auStack_108,*(int *)(local_12c + -0x334));
  FUN_10090e0c(*piVar1,0x6e616d65,auStack_108,1);
  FUN_1003aa68();
  return;
}

/* Address: 0x1003abfc Size: 692 bytes */
void FUN_1003abfc(int param_1,long long param_2,short param_3,short param_4)

{
  int bVar1;
  int *piVar2;
  int *puVar3;
  short *psVar4;
  short *psVar5;
  short *puVar6;
  int *piVar7;
  short sVar8;
  short uVar10;
  int iVar9;
  int local_15c;
  char auStack_138 [256];
  short local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar6 = puRam10117754;
  psVar5 = psRam1011760c;
  psVar4 = psRam10117564;
  puVar3 = puRam10117370;
  piVar2 = piRam10115e78;
  *puRam10117568 = param_4;
  FUN_10001e78(uRam1011756c);
  *psVar4 = param_3;
  **(int **)(local_15c + -0x330) = param_1;
  *puVar6 = 0;
  if (*psVar5 < 2) {
    uVar10 = 0xffff;
  }
  else {
    uVar10 = 1;
  }
  puVar6[1] = uVar10;
  if (*psVar5 < 3) {
    uVar10 = 0xffff;
  }
  else {
    uVar10 = 2;
  }
  puVar6[2] = uVar10;
  if (*psVar5 < 4) {
    uVar10 = 0xffff;
  }
  else {
    uVar10 = 3;
  }
  puVar6[3] = uVar10;
  if (*psVar5 < 5) {
    uVar10 = 0xffff;
  }
  else {
    uVar10 = 4;
  }
  puVar6[4] = uVar10;
  sVar8 = *psVar4;
  while (4 < sVar8) {
    *psVar4 = *psVar4 + -1;
    iVar9 = 0;
    do {
      puVar6[iVar9] = puVar6[iVar9] + 1;
      sVar8 = (short)iVar9 + 1;
      iVar9 = (int)sVar8;
    } while (sVar8 < 5);
    sVar8 = *psVar4;
  }
  FUN_1003ab38();
  if (*piVar2 != 0) {
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = *puVar3;
    *puVar3 = auStack_138;
    iVar9 = FUN_10000090(auStack_138);
    if (iVar9 == 0) {
      iVar9 = FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x810));
      FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x328));
      bVar1 = false;
      if (iVar9 == 0x6f6b2020) {
        piVar7 = (int *)FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x308),0x6c697374);
        if ((piVar7 != (int *)0x0) &&
           (iVar9 = FUN_10117884((int)*(short *)(*piVar7 + 0x908) + (int)piVar7), 0 < iVar9)) {
          FUN_10117884((short)iVar9 + -1);
          bVar1 = true;
        }
      }
      if (!bVar1) {
        FUN_10117884(0xffffffffffffffff);
      }
      FUN_10117884(*piVar2 + (int)*(short *)(*(int *)*piVar2 + 0x738));
      *piVar2 = 0;
      *puVar3 = local_30;
    }
    else {
      piVar7 = (int *)*piVar2;
      if (piVar7 != (int *)0x0) {
        FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x738));
      }
      *piVar2 = 0;
      FUN_100db158(local_38,local_34);
    }
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003b3b0() { }






























/* Address: 0x1003b4a4 Size: 1364 bytes */
long long FUN_1003b4a4(short param_1,short param_2,char param_3)

{
  char cVar1;
  short *puVar2;
  short *psVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  int bVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short *psVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long long uVar12;
  char cVar17;
  unsigned long long uVar18;
  unsigned long long uVar19;
  
  psVar11 = psRam10117710;
  piVar10 = piRam101176e0;
  piVar9 = piRam1011735c;
  piVar8 = piRam10117358;
  if (*psRam10115e80 != 0) {
    return 0;
  }
  uVar18 = (unsigned long long)param_2;
  uVar19 = (unsigned long long)param_1;
  if (*(short *)(*piRam1011735c + *(short *)(*piRam1011735c + 0x110) * 2 + 0xd0) != 0) {
    return 0;
  }
  if (param_3 == '\0') {
    iVar13 = FUN_100efb60();
    if (iVar13 != 0) {
      return 0xb;
    }
    return 1;
  }
  uVar4 = *(unsigned int *)(*piRam10117358 + (int)(((uVar18 & 0x1fffffff) * 8 - uVar18 & 0xffffffff) << 5) +
                   (int)((uVar19 & 0xffffffff) << 1));
  uVar5 = (unsigned short)(uVar4 >> 0x10) & 0xf;
  cVar1 = *(char *)(*piRam1011735c + (uVar4 >> 0x18) + 0x711);
  puVar2 = (short *)*piRam101176e0;
  if (puVar2 == (short *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = FUN_1000a884(uVar19,uVar18,*puVar2,puVar2[1]);
  }
  psVar3 = (short *)*piVar10;
  if (psVar3 == (short *)0x0) {
    cVar17 = '\a';
  }
  else {
    cVar17 = *(char *)(*piVar9 + (*(unsigned int *)(*piVar8 + psVar3[1] * 0xe0 + *psVar3 * 2) >> 0x18) +
                      0x711);
  }
  uVar6 = (unsigned short)((unsigned int)*(int *)
                          (*piVar8 + (int)(((uVar18 & 0x1fffffff) * 8 - uVar18 & 0xffffffff) << 5) +
                          (int)((uVar19 & 0xffffffff) << 1)) >> 0x14) & 1;
  iVar14 = FUN_10009630(1,uVar19,uVar18);
  iVar15 = FUN_100efbcc();
  iVar16 = FUN_100efba8();
  if (iVar16 != 0) {
    return 4;
  }
  if (iVar14 == 0) {
    return 0;
  }
  if (*piVar10 == 0) goto LAB_1003b8a0;
  if (((iVar13 < 2) && (uVar5 != *(unsigned short *)(*piVar9 + 0x110))) && ((cVar1 == '\n' || (uVar6 != 0)))
     ) {
    if ((*(unsigned short *)(*piVar10 + 0xc) & 0x1000) != 0) {
      if (((((*psVar11 == 1) && (cVar17 == '\x03')) && (cVar1 != '\x03')) &&
          ((cVar1 != '\x02' && (cVar1 != '\n')))) && (cVar1 != '\x01')) goto LAB_1003b840;
      if ((*(unsigned short *)(*piVar10 + 0xc) & 0x1000) != 0) goto LAB_1003b774;
    }
    if (((*psVar11 != 1) || (cVar1 != '\x03')) ||
       ((cVar17 == '\x03' || (((cVar17 == '\x02' || (cVar17 == '\n')) || (cVar17 == '\x01')))))) {
LAB_1003b774:
      if ((*(short *)(*piVar9 + 0x11c) == 0) || (uVar5 == 0xf)) {
        uVar12 = 8;
      }
      else if (cVar1 == '\n') {
        if ((*(unsigned int *)(*piVar9 + *(short *)(*piVar9 + 0x110) * 0x10 +
                       (int)((long long)(short)uVar5 << 1) + 0x1582) >> 0x1a & 3) == 2) {
          uVar12 = 8;
        }
        else {
          uVar12 = 10;
        }
      }
      else if ((*(unsigned int *)(*piVar9 + *(short *)(*piVar9 + 0x110) * 0x10 +
                          (int)((long long)(short)uVar5 << 1) + 0x1582) >> 0x1a & 3) == 0) {
        uVar12 = 10;
      }
      else {
        uVar12 = 8;
      }
      if ((iVar15 == 0) || (*(short *)(*piVar9 + 300) == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) {
        return uVar12;
      }
      return 9;
    }
  }
LAB_1003b840:
  if ((*piVar10 != 0) && (iVar14 = FUN_100efb60(), iVar14 != 0)) {
    if (((cVar1 == '\n') || (uVar6 != 0)) && (uVar5 != *(unsigned short *)(*piVar9 + 0x110))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      return 0;
    }
    return 0xb;
  }
LAB_1003b8a0:
  if ((cVar1 == '\n') && (uVar5 != *(unsigned short *)(*piVar9 + 0x110))) {
    if (iVar15 == 0) {
      uVar12 = 3;
    }
    else {
      uVar12 = 0;
    }
  }
  else if ((*piVar10 == 0) || (iVar13 < 1)) {
    if ((uVar6 == 0) || (uVar5 != *(unsigned short *)(*piVar9 + 0x110))) {
      if (cVar1 == '\v') {
        if (iVar15 == 0) {
          uVar12 = 7;
        }
        else {
          uVar12 = 0;
        }
      }
      else if (cVar1 == '\n') {
        if (iVar15 == 0) {
          uVar12 = 3;
        }
        else {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = 0;
      }
    }
    else if (iVar15 == 0) {
      uVar12 = 5;
    }
    else {
      uVar12 = 0;
    }
  }
  else if (iVar15 == 0) {
    if (*psVar11 == 2) {
      uVar12 = 6;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      uVar12 = 2;
    }
    else {
      uVar12 = 6;
    }
  }
  else if ((uVar6 == 0) || (uVar5 != *(unsigned short *)(*piVar9 + 0x110))) {
    if (cVar1 == '\v') {
      uVar12 = 7;
    }
    else if (cVar1 == '\n') {
      uVar12 = 3;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 5;
  }
  return uVar12;
}

/* Address: 0x1003dcb4 Size: 1020 bytes */
void FUN_1003dcb4(int *param_1)

{
  int *piVar1;
  short sVar2;
  long long lVar3;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6d6f7665);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6e657874);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6c656176);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x67756172);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64657365);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x70617468);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x64656c65);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x63656e74);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x6469706c);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),0x68656c70);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
    }
    lVar3 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   lVar3 + 0x73637230);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
      }
      sVar2 = (short)lVar3 + 1;
      lVar3 = (long long)sVar2;
    } while (sVar2 < 8);
    lVar3 = 0;
    do {
      piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),
                                   lVar3 + 0x62757431);
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),1,1);
      }
      sVar2 = (short)lVar3 + 1;
      lVar3 = (long long)sVar2;
    } while (sVar2 < 4);
  }
  return;
}

/* Address: stubbed - had compile errors on 64-bit */
void FUN_1003e0b0() { }



























/* Address: 0x1003f6e8 Size: 1660 bytes */
void FUN_1003f6e8(void)

{
  char cVar1;
  int bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *ppuVar9;
  unsigned long long uVar10;
  short sVar11;
  short sVar12;
  long long lVar13;
  long long lVar14;
  int iVar15;
  short sVar18;
  short sVar19;
  char cVar20;
  int iVar17;
  long long uVar16;
  long long uVar21;
  unsigned long long uVar22;
  int bVar23;
  
  piVar8 = piRam101176e0;
  iVar7 = iRam1011757c;
  piVar6 = piRam10117360;
  piVar5 = piRam1011735c;
  piVar4 = piRam10117358;
  piVar3 = piRam1011734c;
  ppuVar9 = 0 /* TVect base */;
  bVar23 = (short *)*piRam101176e0 != (short *)0x0;
  uVar21 = 0;
  sVar11 = 0;
  bVar2 = false;
  if (bVar23) {
    sVar18 = *(short *)*piRam101176e0;
  }
  else {
    sVar18 = 0;
  }
  if (bVar23) {
    sVar19 = *(short *)(*piRam101176e0 + 2);
  }
  else {
    sVar19 = 0;
  }
  uVar22 = (unsigned long long)sVar19;
  cVar1 = *(char *)(*piRam1011735c +
                    (*(unsigned int *)(*piRam10117358 +
                               (int)(((uVar22 & 0x1fffffff) * 8 - uVar22 & 0xffffffff) << 5) +
                              (int)(((long long)sVar18 & 0xffffffffU) << 1)) >> 0x18) + 0x711);
  if (bVar23) {
    cVar20 = *(char *)(*piRam101176e0 + 4);
  }
  else {
    cVar20 = -1;
  }
  sVar12 = *(short *)(*piRam1011735c + 0x182);
  if (sVar12 != 0) {
    do {
      sVar12 = sVar12 + -1;
      iVar17 = *piRam10117360 + sVar12 * 0x16;
      if ((*(char *)(iVar17 + 4) == '\x1c') &&
         ((int)*(char *)(iVar17 + 5) == (int)*(short *)(*piRam1011735c + 0x110))) {
        uVar21 = 1;
        break;
      }
    } while (sVar12 != 0);
  }
  if ((cVar1 == '\v') && (iVar17 = 0, 0 < *(short *)(*piRam1011735c + 0x810))) {
    do {
      iVar15 = *piRam1011735c + iVar17 * 0x20;
      if ((*(short *)(iVar15 + 0x812) == sVar18) && (*(short *)(iVar15 + 0x814) == sVar19)) {
        uVar10 = (unsigned long long)*(char *)(iVar15 + 0x82a);
        sVar11 = (1 - ((1 < uVar10) + 1)) +
                 (unsigned short)(uVar10 != 0 && (unsigned long long)(1 < uVar10) <= uVar10 - 1);
        bVar2 = true;
        break;
      }
      sVar12 = (short)iVar17 + 1;
      iVar17 = (int)sVar12;
    } while (sVar12 < *(short *)(*piRam1011735c + 0x810));
  }
  FUN_10075570(*piRam1011734c,0x583,1);
  FUN_10075570(*piVar3,0x584,bVar23);
  if ((bVar23) && (cVar1 == '\t')) {
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
  }
  FUN_10075570(*piVar3,0x585,uVar16);
  FUN_10075570(*piVar3,0x586,*(unsigned short *)(*(short *)(*piVar5 + 0x110) * 2 + iVar7) & 0xff);
  FUN_10075570(*piVar3,0x5dc,1);
  FUN_10075570(*piVar3,0x5dd,1);
  FUN_10075570(*piVar3,0x5de,1);
  FUN_10075570(*piVar3,0x5df,1);
  FUN_10075570(*piVar3,0x5e0,1);
  FUN_10075570(*piVar3,0x5e1,1);
  FUN_10075570(*piVar3,0x5e2,*(unsigned short *)(*piVar5 + 0x11c) & 0xff);
  FUN_10075570(*piVar3,0x5e3,*(unsigned short *)(*piVar5 + 0x11e) & 0xff);
  FUN_10075570(*piVar3,0x640,uVar21);
  if (((((bVar23) && (cVar20 == '\x1c')) &&
       (iVar17 = *piVar5 + *(short *)(*piVar5 + 0x110) * 0x1e, *(char *)(iVar17 + 0xd28) == '\x03'))
      && (((*piVar6 + *(short *)(iVar17 + 0xd2a) * 0x16 == *piVar8 &&
           ((*(unsigned int *)(*(int *)(*(int*)((char*)ppuVar9 - 0x153)) +
                       (int)(((uVar22 & 0x1fffffff) * 8 - uVar22 & 0xffffffff) << 4) + (int)sVar18)
             >> 0x1e & 1) == 0)) && ((cVar1 != '\n' && ((cVar1 != '\v' && (cVar1 != '\x02'))))))))
     && (cVar1 != '\x03')) {
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
  }
  FUN_10075570(*piVar3,0x641,uVar16);
  FUN_10075570(*piVar3,0x642,uVar21);
  if (((bVar2) && (bVar23)) &&
     (((cVar20 == '\x1c' || (sVar11 != 0)) &&
      (((cVar1 == '\v' &&
        ((*(unsigned int *)(*piVar4 + (int)(((uVar22 & 0x1fffffff) * 8 - uVar22 & 0xffffffff) << 5) +
                   (int)(((long long)sVar18 & 0xffffffffU) << 1)) >> 0x16 & 1) == 0)) &&
       ('\0' < *(char *)(*piVar8 + 7))))))) {
    uVar21 = 1;
  }
  else {
    uVar21 = 0;
  }
  FUN_10075570(*piVar3,0x643,uVar21);
  FUN_10075570(*piVar3,0x6a4,1);
  FUN_10075570(*piVar3,0x6a5,1);
  FUN_10075570(*piVar3,0x6a6,1);
  lVar13 = (long long)*(short *)(*(short *)(*piVar5 + 0x110) * 2 + iVar7);
  FUN_10075570(*piVar3,0x6a7,((-1 - lVar13) + (unsigned long long)(lVar13 == 0) << 0x20) >> 0x3f);
  lVar13 = (long long)*(short *)(*(short *)(*piVar5 + 0x110) * 2 + iVar7);
  FUN_10075570(*piVar3,0x6a8,((-1 - lVar13) + (unsigned long long)(lVar13 == 0) << 0x20) >> 0x3f);
  lVar13 = (long long)*(short *)(*(short *)(*piVar5 + 0x110) * 2 + iVar7);
  FUN_10075570(*piVar3,0x6a9,((-1 - lVar13) + (unsigned long long)(lVar13 == 0) << 0x20) >> 0x3f);
  lVar13 = FUN_1002c200(0,0,1);
  lVar14 = -lVar13 + -1;
  FUN_10075570(*piVar3,0x6aa,lVar14 + (-(unsigned long long)(lVar14 == 0) - (-lVar13 + -2)) & 0xff);
  FUN_10075570(*piVar3,0x6ab,bVar23);
  uVar22 = (unsigned long long)*(short *)(*piVar5 + 0x136);
  if (*(short *)(*piVar5 + 0x136) < 2) {
    uVar22 = 1;
  }
  bVar2 = (unsigned long long)(uVar22 < 2) == (long long)(uVar22 << 0x20) >> 0x3f;
  FUN_10075570(*piVar3,0x708,bVar2);
  FUN_10075570(*piVar3,0x709,bVar2);
  FUN_10075570(*piVar3,0x70a,bVar2);
  FUN_10075570(*piVar3,0x70b,bVar2);
  FUN_10075570(*piVar3,0x70c,bVar2);
  FUN_10075570(*piVar3,0x70d,bVar2);
  if ((*(char *)(*(int *)(*piVar3 + 0x88) + 0x144) == '\0') || (*(short *)(*piVar5 + 0x15c) != 0)) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  FUN_10075570(*piVar3,0x76c,uVar21);
  FUN_10075570(*piVar3,0x773,uVar21);
  FUN_1003dc28();
  return;
}

/* Address: 0x1003fd64 Size: 44 bytes */
void FUN_1003fd64(void)

{
  FUN_10055f30();
  FUN_1003dc28();
  return;
}

/* Address: 0x1003fd90 Size: 72 bytes */
void FUN_1003fd90(void)

{
  if (*piRam101176e0 == 0) {
    FUN_10055f30();
  }
  else {
    FUN_1005638c();
  }
  FUN_1003dc28();
  return;
}

/* Address: 0x1003fdd8 Size: 44 bytes */
void FUN_1003fdd8(void)

{
  FUN_1005641c();
  FUN_1003dc28();
  return;
}

/* Address: 0x1003fe5c Size: 56 bytes */
void FUN_1003fe5c(void)

{
  FUN_100219a8(1,1,1);
  FUN_1003dc28();
  return;
}

/* Address: 0x1003fe94 Size: 276 bytes */
void FUN_1003fe94(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  short *puVar5;
  
  psVar3 = (short *)*piRam101176e0;
  if (psVar3 != (short *)0x0) {
    if ((psVar3[9] < 0) || (psVar3[10] < 0)) {
      puVar5 = (short *)*piRam101176e0;
      if (puVar5 != (short *)0x0) {
        FUN_1000848c(*puVar5,puVar5[1]);
      }
    }
    else {
      sVar1 = *psVar3;
      iVar4 = *piRam1011735c;
      if ((*(short *)(iVar4 + 0x178) <= sVar1) && (sVar1 <= *(short *)(iVar4 + 0x17c))) {
        sVar2 = psVar3[1];
        if ((*(short *)(iVar4 + 0x176) <= sVar2) && (sVar2 <= *(short *)(iVar4 + 0x17a))) {
          if ((*(short *)(iVar4 + 0x17e) == psVar3[9]) && (*(short *)(iVar4 + 0x180) == psVar3[10]))
          {
            FUN_1000848c(sVar1,sVar2);
          }
          else {
            FUN_1000848c(*(short *)(*piRam101176e0 + 0x12),
                         *(short *)(*piRam101176e0 + 0x14));
          }
          goto LAB_1003ff8c;
        }
      }
      FUN_1000848c(*(short *)*piRam101176e0,((short *)*piRam101176e0)[1]);
    }
  }
LAB_1003ff8c:
  FUN_1003dc28();
  return;
}

/* Address: 0x1003ffa8 Size: 152 bytes */
void FUN_1003ffa8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = iRam101176e8;
  iVar3 = *piRam101176e0;
  if (((iVar3 != 0) && (-1 < *(short *)(iVar3 + 0x12))) && (-1 < *(short *)(iVar3 + 0x14))) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 * 4 + iVar2);
      if (iVar1 != 0) {
        *(short *)(iVar1 + 0x12) = 0xffff;
        *(short *)(*(int *)(iVar3 * 4 + iVar2) + 0x14) = 0xffff;
      }
      sVar4 = (short)iVar3 + 1;
      iVar3 = (int)sVar4;
    } while (sVar4 < 8);
    *puRam10115e90 = 0;
    FUN_10007f78();
  }
  FUN_1003dc28();
  return;
}




