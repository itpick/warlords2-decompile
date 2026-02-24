// Warlords II - Decompiled 68k Code
// Segment: CODE_029
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000e2 at 000000e2
// Size: 62 bytes

void FUN_000000e2(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 extraout_A0;
  
  if ((param_2 < 0x3e9) || (0x3ed < param_2)) {
    FUN_00001e98(0);
    *param_3 = extraout_A0;
  }
  else {
    FUN_000012e8(param_1,param_2,param_3);
  }
  return;
}



// Function: thunk_FUN_00000122 at 00000110
// Size: 2 bytes

void thunk_FUN_00000122(void)

{
  return;
}



// Function: FUN_00000122 at 00000122
// Size: 6 bytes

void FUN_00000122(void)

{
  return;
}



// Function: FUN_00000128 at 00000128
// Size: 80 bytes

void FUN_00000128(int param_1,int *param_2)

{
  undefined1 uVar1;
  
  FUN_00002fe8(param_1,param_2);
  (**(code **)(*param_2 + 0x78))();
  uVar1 = (**(code **)(*param_2 + 0x7c))();
  func_0x000061c0((short)param_1);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}



// Function: FUN_00000178 at 00000178
// Size: 224 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000178(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    FUN_00001bf0(0);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
    FUN_00003120(param_1,param_1 + 0x9d,1);
    FUN_00003120(param_1,param_1 + 0x94,4);
    FUN_0000026c(param_1);
  }
  sVar1 = 0x7f - *(short *)(param_1 + 0x92);
  if (param_3 <= sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (sVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 < 1) {
    return;
  }
  FUN_0000026c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000026c at 0000026c
// Size: 248 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000026c(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_98 [5];
  undefined1 auStack_84 [128];
  
  if (*(char *)(param_1 + 0x9d) != '\0') {
    uVar6 = 0;
    uVar5 = 0x3fc;
    FUN_00001bd8(0);
    FUN_00001c10(0x82,uVar5,uVar6);
    return;
  }
  local_98[2] = 0x7f;
  local_98[3] = *(int *)(param_1 + 0x94);
  if (*(int *)(param_1 + 0x94) < 0x7f) {
    piVar4 = local_98 + 3;
  }
  else {
    piVar4 = local_98 + 2;
  }
  sVar3 = (short)*piVar4;
  if (sVar3 == 0) {
    FUN_00001c00();
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - (int)sVar3;
  uVar5 = (undefined2)param_1;
  func_0x00000108(uVar5);
  iVar1 = func_0x00000108(uVar5);
  iVar2 = thunk_FUN_00000122(uVar5);
  local_98[0] = iVar2 - iVar1;
  local_98[1] = 0x80;
  if (iVar2 - iVar1 < 0x81) {
    piVar4 = local_98;
  }
  else {
    piVar4 = local_98 + 1;
  }
  FUN_00003120(param_1,auStack_84,*piVar4);
  *(short *)(param_1 + 0x92) = 0x7f - sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000382 at 00000382
// Size: 86 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000382(int param_1,undefined2 param_2)

{
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_2;
  FUN_000004b0((short)param_1,uVar1);
  *(undefined1 *)(param_1 + 0x140) = 1;
  if (_DAT_0002884c == 0) {
    uVar1 = 0;
    func_0x00001ea0(0x8e);
    _DAT_0002884c = extraout_A0;
  }
  if (_DAT_00028850 == 0) {
    uVar1 = 0;
    func_0x00001ea0(0x80);
    _DAT_00028850 = extraout_A0_00;
  }
  if (_DAT_00028854 == 0) {
    uVar1 = 0;
    func_0x00001ea0(0xf0);
    _DAT_00028854 = extraout_A0_01;
  }
  if (_DAT_00028858 == 0) {
    uVar1 = 0;
    func_0x00001ea0(0x40);
    _DAT_00028858 = extraout_A0_02;
  }
  if (*(char *)(param_1 + 0x166) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_000009a0(param_2,uVar1);
  if (*(short *)(_DAT_0002884c + 0x2f8c) != 0) {
    *(undefined1 *)(param_1 + 0x168) = 1;
    *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(_DAT_0002884c + 0x110);
  }
  if ((*(short *)(_DAT_0002884c + 0x124) == 0) && (*(char *)(_DAT_000297f4 + 0x92) == '\0')) {
    func_0x00003af8((char)*(undefined2 *)(_DAT_0002884c + 0x180));
  }
  if ((*(char *)(_DAT_0002884c + 0x2f8d) != '\0') && (*(char *)(_DAT_000297f4 + 0x92) != '\0')) {
    *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000003d8 at 000003d8
// Size: 250 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003d8(void)

{
  undefined4 in_A0;
  int extraout_A0;
  int extraout_A0_00;
  int unaff_A2;
  
  _DAT_00028850 = in_A0;
  if (_DAT_00028854 == 0) {
    func_0x00001ea0();
    _DAT_00028854 = extraout_A0;
  }
  if (_DAT_00028858 == 0) {
    func_0x00001ea0();
    _DAT_00028858 = extraout_A0_00;
  }
  if (*(char *)(unaff_A2 + 0x166) == '\0') {
    FUN_000009a0();
    if (*(short *)(_DAT_0002884c + 0x2f8c) != 0) {
      *(undefined1 *)(unaff_A2 + 0x168) = 1;
      *(undefined2 *)(unaff_A2 + 0x1cc) = *(undefined2 *)(_DAT_0002884c + 0x110);
    }
    if ((*(short *)(_DAT_0002884c + 0x124) == 0) && (*(char *)(_DAT_000297f4 + 0x92) == '\0')) {
      func_0x00003af8();
    }
    if ((*(char *)(_DAT_0002884c + 0x2f8d) != '\0') && (*(char *)(_DAT_000297f4 + 0x92) != '\0')) {
      *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000004b0 at 000004b0
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000004b0(void)

{
  undefined4 in_D0;
  int unaff_A4;
  
  *(undefined4 *)(unaff_A4 + 0x94) = in_D0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000006a4 at 000006a4
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006a4(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x142));
  *(undefined4 *)(param_1 + 0x142) = extraout_A0;
  func_0x000073b0(100);
  uVar1 = 0;
  if (extraout_A0_00 != 0) {
    func_0x000003d0(extraout_A0_00);
    uVar1 = extraout_A0_01;
  }
  *(undefined4 *)(param_1 + 0x142) = uVar1;
  FUN_000003d8(*(undefined4 *)(param_1 + 0x142),0x57324453,*(undefined4 *)(_DAT_000266a8 + 0x1e));
  (**(code **)(**(int **)(param_1 + 0x142) + 0x58))(*(int **)(param_1 + 0x142),param_2);
  return;
}



// Function: FUN_00000724 at 00000724
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000724(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x146));
  *(undefined4 *)(param_1 + 0x146) = extraout_A0;
  func_0x000073b0(100);
  uVar1 = 0;
  if (extraout_A0_00 != 0) {
    func_0x000003d0(extraout_A0_00);
    uVar1 = extraout_A0_01;
  }
  *(undefined4 *)(param_1 + 0x146) = uVar1;
  FUN_000003d8(*(undefined4 *)(param_1 + 0x146),0x57324454,*(undefined4 *)(_DAT_000266a8 + 0x1e));
  (**(code **)(**(int **)(param_1 + 0x146) + 0x58))(*(int **)(param_1 + 0x146),param_2);
  return;
}



// Function: FUN_000007a4 at 000007a4
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007a4(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x14a));
  *(undefined4 *)(param_1 + 0x14a) = extraout_A0;
  func_0x000073b0(100);
  uVar1 = 0;
  if (extraout_A0_00 != 0) {
    func_0x000003d0(extraout_A0_00);
    uVar1 = extraout_A0_01;
  }
  *(undefined4 *)(param_1 + 0x14a) = uVar1;
  FUN_000003d8(*(undefined4 *)(param_1 + 0x14a),0x57324441,*(undefined4 *)(_DAT_000266a8 + 0x1e));
  (**(code **)(**(int **)(param_1 + 0x14a) + 0x58))(*(int **)(param_1 + 0x14a),param_2);
  return;
}



// Function: FUN_00000824 at 00000824
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000824(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x14e));
  *(undefined4 *)(param_1 + 0x14e) = extraout_A0;
  func_0x000073b0(100);
  uVar1 = 0;
  if (extraout_A0_00 != 0) {
    func_0x000003d0(extraout_A0_00);
    uVar1 = extraout_A0_01;
  }
  *(undefined4 *)(param_1 + 0x14e) = uVar1;
  FUN_000003d8(*(undefined4 *)(param_1 + 0x14e),0x57324443,*(undefined4 *)(_DAT_000266a8 + 0x1e));
  (**(code **)(**(int **)(param_1 + 0x14e) + 0x58))(*(int **)(param_1 + 0x14e),param_2);
  return;
}



// Function: FUN_000008a4 at 000008a4
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008a4(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x152));
  *(undefined4 *)(param_1 + 0x152) = extraout_A0;
  func_0x000073b0(100);
  uVar1 = 0;
  if (extraout_A0_00 != 0) {
    func_0x000003d0(extraout_A0_00);
    uVar1 = extraout_A0_01;
  }
  *(undefined4 *)(param_1 + 0x152) = uVar1;
  FUN_000003d8(*(undefined4 *)(param_1 + 0x152),0x57324448,*(undefined4 *)(_DAT_000266a8 + 0x1e));
  (**(code **)(**(int **)(param_1 + 0x152) + 0x58))(*(int **)(param_1 + 0x152),param_2);
  return;
}



// Function: FUN_00000924 at 00000924
// Size: 114 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000924(undefined4 param_1)

{
  short sVar1;
  undefined4 extraout_A0;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  short sVar5;
  
  for (sVar1 = 0; uVar2 = (undefined2)((uint)param_1 >> 0x10), sVar1 < 8; sVar1 = sVar1 + 1) {
    sVar5 = sVar1;
    func_0x00003e28();
    uVar4 = 0;
    uVar3 = (undefined2)((uint)extraout_A0 >> 0x10);
    FUN_00002820((short)param_1,(short)extraout_A0,0x42c);
    func_0x00003e30(uVar2,uVar3,uVar4,sVar5);
  }
  FUN_00002d70();
  FUN_00002820((short)param_1,(short)_DAT_0002897c,0x4b0);
  if ((_DAT_00028952 == 0) && (_DAT_00028974 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002aa0();
}



// Function: FUN_000009a0 at 000009a0
// Size: 618 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009a0(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined2 extraout_A0w;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 auStack_54 [80];
  
  _DAT_00028844 = 1;
  _DAT_00028840 = 1;
  _DAT_00028848 = 1;
  _DAT_00028838 = 1;
  if (param_2._2_1_ == '\0') {
    sVar1 = FUN_0000142a(param_1,1);
  }
  else {
    sVar1 = FUN_00000c16(param_1,1);
  }
  _DAT_00028838 = 0;
  _DAT_00028846 = *(undefined2 *)(_DAT_0002884c + 0x110);
  func_0x00003eb8();
  func_0x00003ea0();
  if ((_DAT_00027fb2 != 0) && (sVar1 != 0)) {
    func_0x00003a90();
    func_0x00003ad0();
  }
  if ((_DAT_00015260 != 0) || (_DAT_00027fb2 == 0)) {
    func_0x00003ab8();
  }
  func_0x00004930();
  func_0x00004920();
  func_0x00004928();
  FUN_00002938();
  func_0x00004918();
  func_0x00004990(1);
  func_0x00003ea8(0);
  _DAT_00015260 = 0;
  if (*(short *)(_DAT_0002884c + 0x124) == 0) {
    func_0x00003af8(_DAT_00028832);
  }
  (**(code **)(*_DAT_00027fbc + 0x26c))();
  (**(code **)(*_DAT_00027fbc + 0x268))();
  if (*(short *)(_DAT_0002884c + 0x124) == 0) {
    func_0x00006e70(1,0);
  }
  uVar3 = 0;
  uVar2 = 1;
  func_0x00003ab0(0);
  func_0x00003ab0(0,uVar2,uVar3);
  if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
    *(undefined1 *)(_DAT_000297f4 + 0x92) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(char *)(_DAT_000297f4 + 0x92) == '\0') && (param_3._0_1_ != '\0')) {
    func_0x00002ad8(1,(short)(_DAT_0002884c + *(short *)(_DAT_0002884c + 0x110) * 0x14));
    func_0x000076d0((short)auStack_54,extraout_A0w);
    if (_DAT_00028840 != 0) {
      FUN_00002b68((short)auStack_54,0);
    }
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      func_0x00003af8(_DAT_00028832);
      func_0x00006e70(1,0);
    }
    func_0x000048d0();
    func_0x00003a78();
    FUN_000029e8();
  }
  return;
}



// Function: FUN_00000c16 at 00000c16
// Size: 356 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c16(int *param_1,short param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int extraout_A0;
  char *pcVar5;
  undefined2 uVar6;
  short sVar7;
  char acStack_2a [30];
  undefined4 local_c;
  undefined4 local_8;
  
  if ((_DAT_00015260 == 0) && (_DAT_00027fb2 != 0)) {
    pcVar4 = acStack_2a;
    pcVar5 = &DAT_00027768;
    do {
      cVar2 = *pcVar5;
      *pcVar4 = cVar2;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  else {
    pcVar4 = acStack_2a;
    pcVar5 = &DAT_00015cba;
    do {
      cVar2 = *pcVar5;
      *pcVar4 = cVar2;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  FUN_00002a90();
  func_0x000049f0();
  func_0x000049f8();
  if (_DAT_00028854 == 0) {
    func_0x00001ea0(22000);
    _DAT_00028854 = extraout_A0;
  }
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    *(undefined1 *)(_DAT_00028854 + 5 + iVar3 * 0x16) = 0xf;
    *(undefined2 *)(_DAT_00028854 + 2 + iVar3 * 0x16) = 0xffff;
    *(undefined2 *)(_DAT_00028854 + iVar3 * 0x16) = 0xffff;
  }
  _DAT_000288b0 = 0;
  _DAT_000288ac = 0;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(&DAT_000288b4 + iVar3 * 4) = 0;
  }
  uVar1 = *(undefined4 *)(_DAT_000297f4 + 0x80);
  uVar6 = (undefined2)((uint)uVar1 >> 0x10);
  sVar7 = param_2;
  FUN_00002988((short)uVar1);
  local_c = 0xca;
  local_8 = 0x3c;
  func_0x00003328(_DAT_00027fd4,(short)&local_c,uVar6,sVar7);
  func_0x00003330((short)_DAT_00027fd4);
  (**(code **)(*param_1 + 0x160))();
  FUN_00000e2e(uVar1,param_1);
  func_0x00003330((short)_DAT_00027fd4);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00002aa0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002aa0();
}



// Function: FUN_00000e10 at 00000e10
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(void)

{
  int *in_A0;
  
  (**(code **)(*in_A0 + 0x3a0))();
  _DAT_00027fd4 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e2e at 00000e2e
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e2e(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x160))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000010d6 at 000010d6
// Size: 528 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000010d6(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  int extraout_A0_04;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  short local_10;
  undefined4 local_8;
  
  if (_DAT_0002883e != 0) {
    FUN_00002820();
  }
  FUN_00002820();
  if (1 < local_10) {
    uVar2 = 1;
    uVar1 = 1;
    FUN_00002b68(0x5c89,0x5c5a);
    FUN_00001c10(0,uVar1,uVar2);
  }
  _DAT_00028836 = local_10;
  FUN_00002820();
  FUN_00002820();
  _DAT_00028830 = *(undefined2 *)(_DAT_0002884c + 0x17e);
  _DAT_00028832 = *(undefined2 *)(_DAT_0002884c + 0x180);
  func_0x00003330((short)_DAT_00027fd4);
  FUN_00002820();
  FUN_00002820();
  FUN_00002820();
  func_0x00003330((short)_DAT_00027fd4);
  FUN_00002d52((short)_DAT_00028860);
  _DAT_0002885c = extraout_A0;
  FUN_00002820();
  if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00003330((short)_DAT_00027fd4);
  FUN_00002820();
  func_0x00001ea0((short)local_8);
  FUN_00002820();
  FUN_00002810(*(undefined4 *)(param_1 + 0x156));
  uVar3 = 0x6e;
  func_0x00002830(extraout_A0_01,extraout_A0_00,local_8);
  uVar2 = (undefined2)((uint)extraout_A0_01 >> 0x10);
  FUN_00002818((short)extraout_A0_01);
  uVar1 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  FUN_00001d18((short)extraout_A0_00);
  func_0x00003330((short)_DAT_00027fd4,uVar1,uVar2,uVar3);
  FUN_00002820();
  func_0x00001ea0((short)local_8);
  FUN_00001be0();
  FUN_00002820();
  FUN_00002810(*(undefined4 *)(param_1 + 0x15a));
  (**(code **)(*extraout_A0_03 + 0x5c))(extraout_A0_03,0);
  func_0x00002830(extraout_A0_03,extraout_A0_02,local_8);
  (**(code **)(*extraout_A0_03 + 100))(extraout_A0_03,local_8);
  FUN_00002818((short)extraout_A0_03);
  FUN_00001d18(extraout_A0_02);
  func_0x00003330((short)_DAT_00027fd4);
  *(undefined2 *)(_DAT_0002884c + 0x130) = 1;
  if (param_2._0_2_ != 0) {
    FUN_00000924();
  }
  func_0x00007578();
  if (0 < _DAT_00028836) {
    FUN_00002820();
    if ((local_10 != 0) && (extraout_A0_04 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_000012e8 at 000012e8
// Size: 164 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012e8(void)

{
  int extraout_A0;
  int *unaff_A3;
  int unaff_A6;
  undefined4 uStack00000062;
  
  func_0x00002830();
  (**(code **)(*unaff_A3 + 100))();
  FUN_00002818();
  FUN_00001d18();
  func_0x00003330((short)_DAT_00027fd4);
  *(undefined2 *)(_DAT_0002884c + 0x130) = 1;
  if (*(short *)(unaff_A6 + 0xc) != 0) {
    FUN_00000924();
  }
  func_0x00007578();
  if (0 < _DAT_00028836) {
    uStack00000062 = 0x136c;
    FUN_00002820();
    if ((*(short *)(unaff_A6 + -0xc) != 0) && (extraout_A0 != 0)) {
      *(int *)(unaff_A6 + -10) = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_000013b4 at 000013b4
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000013b4(int param_1,undefined1 *param_2)

{
  if (param_1 == 0) {
    *param_2 = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000142a at 0000142a
// Size: 354 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000142a(undefined4 param_1,short param_2)

{
  char cVar1;
  char *pcVar2;
  int extraout_A0;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  short sVar6;
  char acStack_7e [34];
  undefined4 local_5c;
  undefined4 local_58;
  int local_8;
  
  if ((_DAT_00015260 == 0) && (_DAT_00027fb2 != 0)) {
    pcVar2 = acStack_7e;
    pcVar3 = &DAT_00027768;
    do {
      cVar1 = *pcVar3;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar2 = acStack_7e;
    pcVar3 = &DAT_00015cba;
    do {
      cVar1 = *pcVar3;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  FUN_00002a90();
  func_0x000049f0();
  func_0x000049f8();
  if (_DAT_00028854 == 0) {
    func_0x00001ea0(22000);
    _DAT_00028854 = extraout_A0;
  }
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    *(undefined1 *)(_DAT_00028854 + 5 + local_8 * 0x16) = 0xf;
    *(undefined2 *)(_DAT_00028854 + 2 + local_8 * 0x16) = 0xffff;
    *(undefined2 *)(_DAT_00028854 + local_8 * 0x16) = 0xffff;
  }
  _DAT_000288b0 = 0;
  _DAT_000288ac = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined4 *)(&DAT_000288b4 + local_8 * 4) = 0;
  }
  uVar4 = (undefined2)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10);
  sVar6 = param_2;
  FUN_00002988((short)*(undefined4 *)(_DAT_000297f4 + 0x80));
  local_5c = 0xca;
  local_58 = 0x3c;
  func_0x00003328(_DAT_00027fd4,(short)&local_5c,uVar4,sVar6);
  uVar5 = 0;
  uVar4 = (undefined2)((uint)_DAT_00027fd4 >> 0x10);
  func_0x00003330((short)_DAT_00027fd4);
  func_0x00003330((short)_DAT_00027fd4,uVar4,uVar5);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00002aa0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002aa0();
}



// Function: FUN_00001bd8 at 00001bd8
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001c42) */
/* WARNING: Removing unreachable block (ram,0x00001cee) */
/* WARNING: Removing unreachable block (ram,0x00001d12) */
/* WARNING: Removing unreachable block (ram,0x00001d1c) */
/* WARNING: Removing unreachable block (ram,0x00001d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00001bd8(void)

{
  undefined2 uVar1;
  int extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  char in_NF;
  bool in_ZF;
  char in_VF;
  
  if (!in_ZF && in_VF == in_NF) {
    (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  FUN_00002818();
  FUN_00001d18();
  *(undefined2 *)(_DAT_0002884c + 0x130) = 1;
  if (*(short *)(unaff_A6 + 0xe) != 0) {
    func_0x00003e28();
    (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  func_0x00007578();
  if (((0 < *(short *)(unaff_A6 + -0x7c)) && (FUN_00002820(), *(int *)(unaff_A6 + -4) != 0)) &&
     (extraout_A0 != 0)) {
    *(int *)(unaff_A6 + -0xe) = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00002818();
  func_0x00003330((short)_DAT_00027fd4);
  uVar1 = FUN_00002ba8();
  if (*(short *)(_DAT_0002884c + 0x120) != 0) {
    func_0x00004820();
  }
  func_0x00003330((short)_DAT_00027fd4);
  func_0x00003eb0();
  (**(code **)(*_DAT_00027fd4 + 0x3a0))();
  _DAT_00027fd4 = (int *)0x0;
  return uVar1;
}



// Function: FUN_00001be0 at 00001be0
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001c42) */
/* WARNING: Removing unreachable block (ram,0x00001cee) */
/* WARNING: Removing unreachable block (ram,0x00001d12) */
/* WARNING: Removing unreachable block (ram,0x00001d1c) */
/* WARNING: Removing unreachable block (ram,0x00001d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00001be0(void)

{
  undefined2 uVar1;
  int extraout_A0;
  undefined4 unaff_A2;
  int unaff_A6;
  
  FUN_00002818();
  FUN_00001d18();
  *(undefined2 *)(_DAT_0002884c + 0x130) = 1;
  if (*(short *)(unaff_A6 + 0xe) != 0) {
    func_0x00003e28();
    (**(code **)(*(int *)CONCAT22((short)((uint)unaff_A2 >> 0x10),(short)unaff_A2) + 0x84))();
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  func_0x00007578();
  if (((0 < *(short *)(unaff_A6 + -0x7c)) && (FUN_00002820(), *(int *)(unaff_A6 + -4) != 0)) &&
     (extraout_A0 != 0)) {
    *(int *)(unaff_A6 + -0xe) = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00002818();
  func_0x00003330((short)_DAT_00027fd4);
  uVar1 = FUN_00002ba8();
  if (*(short *)(_DAT_0002884c + 0x120) != 0) {
    func_0x00004820();
  }
  func_0x00003330((short)_DAT_00027fd4);
  func_0x00003eb0();
  (**(code **)(*_DAT_00027fd4 + 0x3a0))();
  _DAT_00027fd4 = (int *)0x0;
  return uVar1;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001c42) */
/* WARNING: Removing unreachable block (ram,0x00001cee) */
/* WARNING: Removing unreachable block (ram,0x00001d12) */
/* WARNING: Removing unreachable block (ram,0x00001d1c) */
/* WARNING: Removing unreachable block (ram,0x00001d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00001bf0(void)

{
  undefined2 uVar1;
  int extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  short sStack00000004;
  undefined2 uStack00000006;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  
  *(undefined2 *)(_DAT_0002884c + 0x130) = 1;
  uStack00000006 = (undefined2)((uint)unaff_A2 >> 0x10);
  uVar1 = uStack00000006;
  if (*(short *)(unaff_A6 + 0xe) != 0) {
    uStack00000008 = 0;
    uStack00000009 = 0;
    sStack00000004 = 0;
    uStack00000006 = 0x1c16;
    func_0x00003e28();
    uStack00000008 = (undefined1)((uint)unaff_A2 >> 8);
    uStack00000009 = SUB41(unaff_A2,0);
    sStack00000004 = 0x1c2c;
    uStack00000006 = uVar1;
    uVar1 = (**(code **)(*unaff_A2 + 0x84))();
    uStack00000008 = (undefined1)((ushort)uVar1 >> 8);
    uStack00000009 = (undefined1)uVar1;
    sStack00000004 = 0;
    uStack00000006 = 0x1c36;
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  uStack00000006 = 0;
  uStack00000008 = 0x1d;
  uStack00000009 = 0x2c;
  func_0x00007578();
  if (0 < *(short *)(unaff_A6 + -0x7c)) {
    uStack00000006 = 0;
    uStack00000008 = 0;
    uStack00000009 = 2;
    sStack00000004 = (short)unaff_A6 + -4;
    FUN_00002820();
    if ((*(int *)(unaff_A6 + -4) != 0) && (extraout_A0 != 0)) {
      *(int *)(unaff_A6 + -0xe) = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uStack00000008 = 1;
  uStack00000006 = SUB42(unaff_A2,0);
  sStack00000004 = uVar1;
  FUN_00002818();
  uStack00000008 = 0;
  uStack00000009 = 0x50;
  sStack00000004 = (short)((uint)_DAT_00027fd4 >> 0x10);
  uStack00000006 = SUB42(_DAT_00027fd4,0);
  func_0x00003330();
  uVar1 = FUN_00002ba8();
  if (*(short *)(_DAT_0002884c + 0x120) != 0) {
    uStack00000006 = 0;
    uStack00000008 = 0x1d;
    uStack00000009 = 0xc2;
    func_0x00004820();
  }
  uStack00000008 = 0;
  uStack00000009 = 100;
  sStack00000004 = (short)((uint)_DAT_00027fd4 >> 0x10);
  uStack00000006 = SUB42(_DAT_00027fd4,0);
  func_0x00003330();
  func_0x00003eb0();
  (**(code **)(*_DAT_00027fd4 + 0x3a0))();
  _DAT_00027fd4 = (int *)0x0;
  return uVar1;
}



// Function: FUN_00001c00 at 00001c00
// Size: 66 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001c42) */
/* WARNING: Removing unreachable block (ram,0x00001cee) */
/* WARNING: Removing unreachable block (ram,0x00001d12) */
/* WARNING: Removing unreachable block (ram,0x00001d1c) */
/* WARNING: Removing unreachable block (ram,0x00001d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00001c00(void)

{
  undefined2 uVar1;
  int extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  bool in_ZF;
  short sStack00000004;
  undefined2 uStack00000006;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  
  uStack00000006 = (undefined2)((uint)unaff_A2 >> 0x10);
  uVar1 = uStack00000006;
  if (!in_ZF) {
    uStack00000008 = 0;
    uStack00000009 = 0;
    sStack00000004 = 0;
    uStack00000006 = 0x1c16;
    func_0x00003e28();
    uStack00000008 = (undefined1)((uint)unaff_A2 >> 8);
    uStack00000009 = SUB41(unaff_A2,0);
    sStack00000004 = 0x1c2c;
    uStack00000006 = uVar1;
    uVar1 = (**(code **)(*unaff_A2 + 0x84))();
    uStack00000008 = (undefined1)((ushort)uVar1 >> 8);
    uStack00000009 = (undefined1)uVar1;
    sStack00000004 = 0;
    uStack00000006 = 0x1c36;
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  uStack00000006 = 0;
  uStack00000008 = 0x1d;
  uStack00000009 = 0x2c;
  func_0x00007578();
  if (0 < *(short *)(unaff_A6 + -0x7c)) {
    uStack00000006 = 0;
    uStack00000008 = 0;
    uStack00000009 = 2;
    sStack00000004 = (short)unaff_A6 + -4;
    FUN_00002820();
    if ((*(int *)(unaff_A6 + -4) != 0) && (extraout_A0 != 0)) {
      *(int *)(unaff_A6 + -0xe) = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uStack00000008 = 1;
  uStack00000006 = SUB42(unaff_A2,0);
  sStack00000004 = uVar1;
  FUN_00002818();
  uStack00000008 = 0;
  uStack00000009 = 0x50;
  sStack00000004 = (short)((uint)_DAT_00027fd4 >> 0x10);
  uStack00000006 = SUB42(_DAT_00027fd4,0);
  func_0x00003330();
  uVar1 = FUN_00002ba8();
  if (*(short *)(_DAT_0002884c + 0x120) != 0) {
    uStack00000006 = 0;
    uStack00000008 = 0x1d;
    uStack00000009 = 0xc2;
    func_0x00004820();
  }
  uStack00000008 = 0;
  uStack00000009 = 100;
  sStack00000004 = (short)((uint)_DAT_00027fd4 >> 0x10);
  uStack00000006 = SUB42(_DAT_00027fd4,0);
  func_0x00003330();
  func_0x00003eb0();
  (**(code **)(*_DAT_00027fd4 + 0x3a0))();
  _DAT_00027fd4 = (int *)0x0;
  return uVar1;
}



// Function: FUN_00001c10 at 00001c10
// Size: 86 bytes

/* WARNING: Removing unreachable block (ram,0x00001c42) */

void FUN_00001c10(void)

{
  undefined4 unaff_A2;
  undefined2 uStack_2;
  
  func_0x00003e28();
  uStack_2 = (undefined2)((uint)unaff_A2 >> 0x10);
  (**(code **)(*(int *)CONCAT22(uStack_2,(short)unaff_A2) + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00001d18 at 00001d18
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d18(void)

{
  int unaff_A3;
  
  if (unaff_A3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002aa0();
}



// Function: FUN_00001dfc at 00001dfc
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001dfc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e98 at 00001e98
// Size: 19 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e98(void)

{
  int unaff_A6;
  
  func_0x00007310(unaff_A6 + -0x14a,0x4e414d45);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000024e0 at 000024e0
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000024e0(void)

{
  func_0x000049b0();
  *(undefined1 *)(_DAT_00027ed2 + 800) = 0;
  return;
}



// Function: FUN_000024f8 at 000024f8
// Size: 362 bytes

/* WARNING: Removing unreachable block (ram,0x00002698) */
/* WARNING: Removing unreachable block (ram,0x000026b4) */
/* WARNING: Removing unreachable block (ram,0x00002620) */
/* WARNING: Removing unreachable block (ram,0x00002624) */
/* WARNING: Removing unreachable block (ram,0x000025bc) */
/* WARNING: Removing unreachable block (ram,0x000025c0) */
/* WARNING: Removing unreachable block (ram,0x00002558) */
/* WARNING: Removing unreachable block (ram,0x0000255c) */
/* WARNING: Removing unreachable block (ram,0x0000258a) */
/* WARNING: Removing unreachable block (ram,0x0000258e) */
/* WARNING: Removing unreachable block (ram,0x000025ee) */
/* WARNING: Removing unreachable block (ram,0x000025f2) */
/* WARNING: Removing unreachable block (ram,0x00002652) */
/* WARNING: Removing unreachable block (ram,0x00002674) */
/* WARNING: Removing unreachable block (ram,0x000026d8) */

void FUN_000024f8(int *param_1,undefined4 param_2)

{
  FUN_00001bf0((short)param_1);
  (**(code **)(*param_1 + 0x74))(param_1,param_2,0xa0);
  (**(code **)(*param_1 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002810 at 00002810
// Size: 8 bytes

void FUN_00002810(void)

{
  undefined2 in_D0w;
  short unaff_D3w;
  int in_A0;
  int *unaff_A2;
  int unaff_A3;
  undefined4 *unaff_A5;
  
  *unaff_A5 = *(undefined4 *)(in_A0 + -4);
  *(undefined2 *)(unaff_D3w * 0x14 + unaff_A3 + 0x194) = in_D0w;
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002818 at 00002818
// Size: 8 bytes

void FUN_00002818(void)

{
  undefined2 in_D0w;
  int in_D1;
  int in_A0;
  int *unaff_A2;
  
  *(undefined2 *)(in_D1 + in_A0 + 0x194) = in_D0w;
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002820 at 00002820
// Size: 19 bytes

void FUN_00002820(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002846 at 00002846
// Size: 134 bytes

/* WARNING: Removing unreachable block (ram,0x00002894) */

void FUN_00002846(void)

{
  short unaff_D3w;
  int *unaff_A2;
  
  if (7 < unaff_D3w) {
    (**(code **)(*unaff_A2 + 0x74))();
    (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002938 at 00002938
// Size: 16 bytes

void FUN_00002938(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002988 at 00002988
// Size: 56 bytes

void FUN_00002988(void)

{
  FUN_00002a16();
  return;
}



// Function: FUN_000029e8 at 000029e8
// Size: 28 bytes

void FUN_000029e8(void)

{
  undefined2 in_D0w;
  int in_D1;
  int in_A0;
  int *unaff_A2;
  
  *(undefined2 *)(in_D1 + in_A0 + 0xd2c) = in_D0w;
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002a16 at 00002a16
// Size: 90 bytes

/* WARNING: Removing unreachable block (ram,0x00002a68) */
/* WARNING: Removing unreachable block (ram,0x00002a6c) */
/* WARNING: Removing unreachable block (ram,0x00002a9a) */

void FUN_00002a16(void)

{
  short unaff_D3w;
  int *unaff_A2;
  
  if (0x15 < unaff_D3w) {
    (**(code **)(*unaff_A2 + 0x74))();
    (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  (**(code **)(*unaff_A2 + 0x74))();
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002a90 at 00002a90
// Size: 14 bytes

void FUN_00002a90(void)

{
  short unaff_D3w;
  undefined4 unaff_A2;
  undefined2 uStack_2;
  
  if (99 < (short)(unaff_D3w + 1)) {
    FUN_00002ac6();
    return;
  }
  uStack_2 = (undefined2)((uint)unaff_A2 >> 0x10);
  (**(code **)(*(int *)CONCAT22(uStack_2,(short)unaff_A2) + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002aa0 at 00002aa0
// Size: 8 bytes

void FUN_00002aa0(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002aa8 at 00002aa8
// Size: 12 bytes

void FUN_00002aa8(void)

{
  code *in_A1;
  
  (*in_A1)();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002ac6 at 00002ac6
// Size: 49 bytes

void FUN_00002ac6(void)

{
  short unaff_D3w;
  int *unaff_A2;
  
  if (7 < unaff_D3w) {
    FUN_00002af8();
    return;
  }
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: thunk_FUN_00002aa0 at 00002ae0
// Size: 6 bytes

void thunk_FUN_00002aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002af8 at 00002af8
// Size: 13 bytes

void FUN_00002af8(void)

{
  short unaff_D3w;
  int *unaff_A2;
  
  if (7 < unaff_D3w) {
    FUN_00002bd6();
    return;
  }
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002b68 at 00002b68
// Size: 24 bytes

void FUN_00002b68(void)

{
  undefined1 unaff_D6b;
  int in_A0;
  int *in_stack_00000000;
  
  (&DAT_00002f0a)[in_A0] = unaff_D6b;
  (**(code **)(*in_stack_00000000 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002ba8 at 00002ba8
// Size: 28 bytes

void FUN_00002ba8(void)

{
  undefined2 in_D0w;
  int in_D1;
  int in_A0;
  int *unaff_A2;
  
  *(undefined2 *)(in_D1 + in_A0 + 0x114a) = in_D0w;
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002bd6 at 00002bd6
// Size: 170 bytes

/* WARNING: Removing unreachable block (ram,0x00002c2a) */
/* WARNING: Removing unreachable block (ram,0x00002d0e) */
/* WARNING: Removing unreachable block (ram,0x00002c32) */
/* WARNING: Removing unreachable block (ram,0x00002c3a) */

void FUN_00002bd6(void)

{
  short unaff_D3w;
  int *unaff_A2;
  
  if (7 < unaff_D3w) {
    (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
    FUN_00002aa0();
  }
  (**(code **)(*unaff_A2 + 0x84))();
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002d52 at 00002d52
// Size: 10 bytes

void FUN_00002d52(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002d70 at 00002d70
// Size: 14 bytes

void FUN_00002d70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: thunk_FUN_00002aa0 at 00002e38
// Size: 6 bytes

void thunk_FUN_00002aa0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002aa0();
}



// Function: FUN_00002f1e at 00002f1e
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002f1e(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    func_0x000046e0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0x814) = 0x800;
  }
  sVar1 = 0x800 - *(short *)(param_1 + 0x814);
  if (param_3 <= sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (sVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0000306a();
  return;
}



// Function: FUN_00002f30 at 00002f30
// Size: 170 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002f30(void)

{
  int unaff_D3;
  byte *in_A0;
  byte *unaff_A2;
  
  *in_A0 = *in_A0 | 0x2a;
  *unaff_A2 = *unaff_A2 | 0x14;
  func_0x000046e0();
  unaff_A2[0x12] = 0;
  unaff_A2[0x814] = 8;
  unaff_A2[0x815] = 0;
  if (unaff_D3 <= (short)(0x800 - *(short *)(unaff_A2 + 0x814))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((short)(0x800 - *(short *)(unaff_A2 + 0x814)) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0000306a();
  return;
}



// Function: FUN_00002fe8 at 00002fe8
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002fe8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000306a at 0000306a
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000306a(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_D3;
  short sVar3;
  undefined4 *puVar4;
  int unaff_A2;
  int unaff_A6;
  
  if (unaff_D3 < 1) {
    return;
  }
  uVar1 = func_0x00000108();
  *(undefined4 *)(unaff_A6 + -0x1c) = uVar1;
  iVar2 = thunk_FUN_00000122();
  iVar2 = iVar2 - *(int *)(unaff_A6 + -0x1c);
  *(int *)(unaff_A6 + -8) = iVar2;
  *(undefined4 *)(unaff_A6 + -4) = 0x800;
  if (*(int *)(unaff_A6 + -4) < iVar2) {
    puVar4 = (undefined4 *)(unaff_A6 + -4);
  }
  else {
    puVar4 = (undefined4 *)(unaff_A6 + -8);
  }
  *(short *)(unaff_A2 + 0x814) = 0x800 - (short)*puVar4;
  *(int *)(unaff_A6 + -0x10) = iVar2;
  *(undefined4 *)(unaff_A6 + -0xc) = 0x800;
  FUN_00003120();
  sVar3 = 0x800 - *(short *)(unaff_A2 + 0x814);
  if (sVar3 == 0) {
    FUN_00001c00();
  }
  *(int *)(unaff_A6 + -0x18) = (int)sVar3;
  *(int *)(unaff_A6 + -0x14) = unaff_D3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003120 at 00003120
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



