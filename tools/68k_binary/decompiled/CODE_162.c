// Warlords II - Decompiled 68k Code
// Segment: CODE_162
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000c6 at 000000c6
// Size: 98 bytes

byte * FUN_000000c6(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    pbVar2 = &DAT_00025b76;
    pbVar3 = param_2;
    for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pbVar3 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    }
  }
  else {
    pbVar2 = (byte *)**(undefined4 **)(param_1 + 0xa8);
    pbVar3 = param_2;
    for (iVar1 = *(byte *)**(undefined4 **)(param_1 + 0xa8) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pbVar3 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    }
  }
  return param_2;
}



// Function: FUN_00000128 at 00000128
// Size: 30 bytes

void FUN_00000128(int param_1)

{
  undefined4 extraout_A0;
  
  func_0x00001d08(*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = extraout_A0;
  return;
}



// Function: FUN_00000146 at 00000146
// Size: 78 bytes

void FUN_00000146(int *param_1,char *param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x3d8))();
  if (*param_2 != '\0') {
    func_0x00007310(param_2);
    return;
  }
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_000001b0 at 000001b0
// Size: 120 bytes

void FUN_000001b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 local_110;
  int *local_10c;
  undefined1 local_104 [256];
  
  local_10c = param_1;
  local_110 = 0x1c6;
  (**(code **)(*param_1 + 0x3d8))();
  *(undefined2 *)(param_1 + 0x29) = param_2._0_2_;
  *(undefined2 *)((int)param_1 + 0xa6) = param_2._2_2_;
  puVar2 = (undefined4 *)&stack0xfffffef8;
  if (*(short *)(param_1 + 0x29) != -1) {
    local_104[0] = 0;
    local_10c = (int *)local_104;
    puVar2 = &local_110;
    local_110 = CONCAT22(*(undefined2 *)((int)param_1 + 0xa6),*(undefined2 *)(param_1 + 0x29));
    func_0x00007658();
    FUN_00001c08();
    (**(code **)(*param_1 + 0x3dc))(param_1,(short)local_104);
  }
  if (param_3._0_1_ != '\0') {
    *(int **)((int)puVar2 + -4) = param_1;
    pcVar1 = *(code **)(**(int **)((int)puVar2 + -4) + 0x26c);
    *(undefined4 *)((int)puVar2 + -8) = 0x220;
    (*pcVar1)();
  }
  return;
}



// Function: FUN_00000228 at 00000228
// Size: 16 bytes

undefined4 FUN_00000228(int param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// Function: FUN_00000238 at 00000238
// Size: 164 bytes

void FUN_00000238(int param_1,int param_2)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  int local_68 [25];
  
  uVar3 = (undefined2)param_1;
  func_0x00004b40((short)local_68,uVar3);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    if (param_2 == *(int *)((int)piVar2 + 0x16)) {
      (**(code **)(*piVar2 + 0x68))(piVar2,0x1f,uVar3,0);
    }
    else {
      (**(code **)(*piVar2 + 0x68))(piVar2,0x20,uVar3,0);
    }
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  *(int *)(param_1 + 0xac) = param_2;
  FUN_00002798((short)local_68);
  return;
}



// Function: FUN_000002dc at 000002dc
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002dc(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000051d0(param_1);
  extraout_A0[0x2a] = 0;
  *(undefined1 *)((int)extraout_A0 + 0xa5) = 1;
  *(undefined1 *)(extraout_A0 + 0x29) = 1;
  *(undefined2 *)((int)extraout_A0 + 0xa6) = 0xffff;
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*extraout_A0 + 0x3d8))();
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*extraout_A0 + 0x4c))();
      FUN_00001c10();
    }
  }
  return;
}



// Function: FUN_0000039c at 0000039c
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000039c(int param_1)

{
  *(undefined2 *)(param_1 + 0xa6) = 0xffff;
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa5) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000003d0 at 000003d0
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000003d0(int *param_1)

{
  (**(code **)(*param_1 + 0x3d0))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000450 at 00000450
// Size: 102 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000450(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3d0))();
  *(undefined2 *)((int)param_1 + 0xa6) = param_2._0_2_;
  if (*(short *)((int)param_1 + 0xa6) != -1) {
    if (*(char *)(param_1 + 0x29) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x2a] == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)((int)param_1 + 0xa5) = 1;
    FUN_00001bf8(param_1[0x2a]);
  }
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_000004f0 at 000004f0
// Size: 16 bytes

void FUN_000004f0(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x26c))();
  return;
}



// Function: FUN_00000500 at 00000500
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000500(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000051d0(param_1);
  *(undefined2 *)(extraout_A0 + 0x29) = 0xffff;
  *(undefined4 *)((int)extraout_A0 + 0xa6) = 0;
  if (*(int *)(param_1 + 0xa6) != 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*extraout_A0 + 0x3d4))();
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*extraout_A0 + 0x4c))();
      FUN_00001c10();
    }
  }
  return;
}



// Function: FUN_000005ac at 000005ac
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005ac(int param_1)

{
  *(undefined2 *)(param_1 + 0xa4) = 0xffff;
  if (*(int *)(param_1 + 0xa6) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000005d2 at 000005d2
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005d2(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3d0))();
  *(undefined2 *)(param_1 + 0x29) = param_2._0_2_;
  if (*(short *)(param_1 + 0x29) != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000632 at 00000632
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000632(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000051d0(param_1);
  extraout_A0[0x2a] = 0;
  *(undefined1 *)(extraout_A0 + 0x29) = 1;
  *(undefined1 *)((int)extraout_A0 + 0xa5) = 1;
  *(undefined2 *)((int)extraout_A0 + 0xa6) = 0xffff;
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*extraout_A0 + 0x3d8))();
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*extraout_A0 + 0x4c))();
      FUN_00001c10();
    }
  }
  return;
}



// Function: FUN_000006f2 at 000006f2
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000006f2(int param_1)

{
  *(undefined2 *)(param_1 + 0xa6) = 0xffff;
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa5) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000726 at 00000726
// Size: 78 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000726(int *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x3d0))();
  param_1[0x2a] = param_2;
  if (*(char *)((int)param_1 + 0xa5) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000786 at 00000786
// Size: 108 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000786(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3d0))();
  *(undefined2 *)((int)param_1 + 0xa6) = param_2._0_2_;
  if (*(short *)((int)param_1 + 0xa6) != -1) {
    if (*(char *)(param_1 + 0x29) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x2a] == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)((int)param_1 + 0xa5) = 1;
    FUN_00001bf8(param_1[0x2a]);
  }
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_0000080c at 0000080c
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000080c(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000051d0(param_1);
  *(undefined2 *)(extraout_A0 + 0x29) = 0xffff;
  *(undefined4 *)((int)extraout_A0 + 0xa6) = 0;
  if (*(int *)(param_1 + 0xa6) != 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*extraout_A0 + 0x3d8))();
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*extraout_A0 + 0x4c))();
      FUN_00001c10();
    }
  }
  return;
}



// Function: FUN_000008b8 at 000008b8
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000008b8(int param_1)

{
  *(undefined2 *)(param_1 + 0xa4) = 0xffff;
  if (*(int *)(param_1 + 0xa6) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000008de at 000008de
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000008de(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3d0))();
  *(undefined4 *)((int)param_1 + 0xa6) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000936 at 00000936
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000936(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3d0))();
  *(undefined2 *)(param_1 + 0x29) = param_2._0_2_;
  if (*(short *)(param_1 + 0x29) != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000990 at 00000990
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000990(int param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00001dd6(param_1);
  *(undefined4 *)(extraout_A0 + 0xd2) = 0;
  *(undefined4 *)(extraout_A0 + 0xd6) = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8(auStack_4a);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0xd6) != 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 0xd6) + 0x22);
      (**(code **)(*piVar1 + 0xc4))(piVar1,param_1);
      (**(code **)(**(int **)(param_1 + 0xd6) + 0x48))();
      *(undefined4 *)(extraout_A0 + 0xd6) = extraout_A0_00;
      (**(code **)(**(int **)(extraout_A0 + 0xd6) + 0x174))
                (*(int **)(extraout_A0 + 0xd6),(short)extraout_A0);
      piVar1 = *(int **)(*(int *)(extraout_A0 + 0xd6) + 0x22);
      (**(code **)(*piVar1 + 0xac))(piVar1,extraout_A0);
      piVar1 = *(int **)(*(int *)(param_1 + 0xd6) + 0x22);
      (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
    }
    _DAT_00025f52 = local_10;
  }
  else {
    FUN_00000e10(extraout_A0);
    FUN_00001c10();
  }
  return;
}



// Function: FUN_00000a10 at 00000a10
// Size: 102 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a10(void)

{
  int *piVar1;
  undefined4 extraout_A0;
  code *in_A1;
  int unaff_A2;
  int unaff_A6;
  
  (*in_A1)();
  *(undefined4 *)(*(int *)(unaff_A6 + -0x4a) + 0xd6) = extraout_A0;
  piVar1 = *(int **)(*(int *)(unaff_A6 + -0x4a) + 0xd6);
  (**(code **)(*piVar1 + 0x174))(piVar1,*(undefined4 *)(unaff_A6 + -0x4a));
  piVar1 = *(int **)(*(int *)(*(int *)(unaff_A6 + -0x4a) + 0xd6) + 0x22);
  (**(code **)(*piVar1 + 0xac))(piVar1,*(undefined4 *)(unaff_A6 + -0x4a));
  (**(code **)(**(int **)(*(int *)(unaff_A2 + 0xd6) + 0x22) + 0xac))();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00000a96 at 00000a96
// Size: 430 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000a96(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int local_120;
  int local_11c;
  int local_118;
  undefined1 auStack_114 [16];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  if (*(int *)((int)param_1 + 0xd2) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0xd2) + 0x178))
              ((char)*(int **)((int)param_1 + 0xd2),(char)*(undefined4 *)((int)param_1 + 0xd6));
    *(undefined4 *)((int)param_1 + 0xd2) = 0;
  }
  if (param_2 == (int *)0x0) {
    *(undefined4 *)((int)param_1 + 0xd2) = 0;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)((int)param_2 + 0xa2);
  *(undefined4 *)((int)param_1 + 0xc6) = *(undefined4 *)((int)param_2 + 0xb6);
  *(undefined2 *)(param_1 + 0x27) = *(undefined2 *)(param_2 + 0x2c);
  param_1[0x22] = _DAT_00025b62;
  param_1[0x23] = _DAT_00025b66;
  param_1[0x24] = _DAT_00025b6a;
  param_1[0x25] = _DAT_00025b6e;
  uVar10 = (undefined2)((uint)param_2 >> 0x10);
  uVar5 = 0xfe;
  (**(code **)(*param_2 + 0x264))();
  uVar3 = (undefined2)((uint)param_1 >> 0x10);
  uVar7 = SUB42(param_1,0);
  uVar6 = 0x14;
  (**(code **)(*param_1 + 0x404))(uVar7,uVar5);
  uVar5 = 0x26;
  (**(code **)(*param_1 + 0x3f0))(uVar7,uVar6);
  local_120 = param_2[0x25];
  local_11c = param_2[0x26];
  local_118 = param_2[0x27];
  (**(code **)(*param_1 + 0x408))(uVar7,0,(short)((uint)&local_120 >> 0x10),uVar5);
  (**(code **)(*param_2 + 0x39c))(param_2,auStack_114);
  if (*(char *)((int)param_1 + 0xbe) == '\0') {
    *(undefined1 *)((int)param_1 + 0x43) = 4;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x43) = 0;
    *(undefined1 *)((int)param_1 + 0x42) = 4;
  }
  uVar9 = (undefined1)((uint)auStack_114 >> 0x10);
  piVar1 = *(int **)((int)param_1 + 0x1e);
  uVar8 = (undefined2)((uint)piVar1 >> 0x10);
  (**(code **)(*piVar1 + 0x1ac))((short)piVar1,(short)auStack_114);
  uVar6 = (undefined1)((uint)local_104 >> 0x10);
  (**(code **)(*param_2 + 0x3d4))((char)param_2,(short)local_104);
  uVar5 = (undefined1)((uint)local_104 >> 0x10);
  uVar4 = uVar3;
  (**(code **)(*param_1 + 0x40c))(uVar7,(short)local_104);
  (**(code **)(*param_1 + 0x1c4))();
  *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0x3e) = 0;
  sVar2 = FUN_00001d30(uVar3,uVar4,uVar5,uVar10,uVar6,uVar8,uVar9);
  if (sVar2 != -2) {
    if (sVar2 == -1) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x1e) + 0x3e) =
           *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0x88);
      goto LAB_00000c18;
    }
    if (sVar2 != 0) {
      if (sVar2 == 1) {
        *(int *)(*(int *)((int)param_1 + 0xd6) + 0x3e) =
             *(int *)(*(int *)((int)param_1 + 0xd6) + 0x88) / 2;
      }
      goto LAB_00000c18;
    }
  }
  *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0x3a) = 0;
LAB_00000c18:
  if (param_3._0_1_ == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00000a10(0,(char)param_1[0x1f]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00000a10(0xff,(char)param_1[0x1f]);
}



// Function: FUN_00000cb6 at 00000cb6
// Size: 196 bytes

int FUN_00000cb6(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0000264c((short)param_1,(char)param_2);
  if (*(char *)(param_1 + 0xbe) == '\0') {
    iVar1 = *(byte *)(param_1 + 0x43) - 4;
    if ((iVar1 == 0) && (*(char *)(param_1 + 0xbd) == '\0')) {
      local_14 = func_0x00003978((short)param_2);
      local_10 = *(int *)(*(int *)(param_1 + 0xd6) + 0x36);
      if (local_14 < local_10) {
        piVar2 = &local_10;
      }
      else {
        piVar2 = &local_14;
      }
      iVar1 = param_2[1] + *piVar2;
      param_2[3] = iVar1;
    }
  }
  else {
    iVar1 = *(byte *)(param_1 + 0x42) - 4;
    if ((iVar1 == 0) && (*(char *)(param_1 + 0xbd) == '\0')) {
      local_c = func_0x00003978((short)param_2);
      local_8 = *(int *)(*(int *)(param_1 + 0xd6) + 0x32);
      if (local_c < local_8) {
        piVar2 = &local_8;
      }
      else {
        piVar2 = &local_c;
      }
      iVar1 = *param_2 + *piVar2;
      param_2[2] = iVar1;
    }
  }
  return iVar1;
}



// Function: FUN_00000d7a at 00000d7a
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d7a(int param_1)

{
  int iVar1;
  int *extraout_A0;
  int local_52;
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000051d0(param_1);
  extraout_A0[0x2a] = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  local_4e = extraout_A0;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    local_52 = *(int *)(param_1 + 0xa8);
    if (local_52 != 0) {
      func_0x00001eb0(&local_52);
    }
    local_4e[0x2a] = local_52;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*local_4e + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 14 bytes

void FUN_00000e10(void)

{
  return;
}



// Function: FUN_00000e1e at 00000e1e
// Size: 30 bytes

void FUN_00000e1e(int param_1)

{
  undefined4 extraout_A0;
  
  func_0x00001d08(*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = extraout_A0;
  return;
}



// Function: FUN_00000e3c at 00000e3c
// Size: 40 bytes

void FUN_00000e3c(int *param_1,undefined4 param_2)

{
  *(undefined2 *)(param_1 + 0x2b) = param_2._0_2_;
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000e64 at 00000e64
// Size: 68 bytes

void FUN_00000e64(int *param_1,undefined4 param_2)

{
  short sVar1;
  
  if (param_1[0x2a] != 0) {
    sVar1 = FUN_00001cf8(param_2,*(undefined4 *)param_1[0x2a]);
    if (sVar1 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x3e0))();
  func_0x00007310(param_2);
  return;
}



// Function: FUN_00000f24 at 00000f24
// Size: 120 bytes

void FUN_00000f24(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 local_110;
  int *local_10c;
  undefined1 local_104 [256];
  
  local_10c = param_1;
  local_110 = 0xf3a;
  (**(code **)(*param_1 + 0x3e0))();
  *(undefined2 *)(param_1 + 0x29) = param_2._0_2_;
  *(undefined2 *)((int)param_1 + 0xa6) = param_2._2_2_;
  puVar2 = (undefined4 *)&stack0xfffffef8;
  if (*(short *)(param_1 + 0x29) != -1) {
    local_104[0] = 0;
    local_10c = (int *)local_104;
    puVar2 = &local_110;
    local_110 = CONCAT22(*(undefined2 *)((int)param_1 + 0xa6),*(undefined2 *)(param_1 + 0x29));
    func_0x00007658();
    FUN_00001c08();
    (**(code **)(*param_1 + 1000))(param_1,(short)local_104);
  }
  if (param_3._0_1_ != '\0') {
    *(int **)((int)puVar2 + -4) = param_1;
    pcVar1 = *(code **)(**(int **)((int)puVar2 + -4) + 0x26c);
    *(undefined4 *)((int)puVar2 + -8) = 0xf94;
    (*pcVar1)();
  }
  return;
}



// Function: FUN_00000f9c at 00000f9c
// Size: 22 bytes

void FUN_00000f9c(undefined4 param_1,undefined4 param_2)

{
  func_0x000042c8(param_1,param_2);
  return;
}



// Function: FUN_00000fb2 at 00000fb2
// Size: 150 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000fb2(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte local_104 [256];
  
  if (param_2 != 0) {
    local_104[0] = 0;
    if (param_2 != -1) {
      if ((param_2 < 1) || (5 < param_2)) {
        param_2 = 1;
      }
      func_0x00007658(CONCAT22((short)param_2,300),local_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x2a] != 0) {
      pbVar2 = *(byte **)param_1[0x2a];
      pbVar3 = local_104;
      for (iVar1 = **(byte **)param_1[0x2a] + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar3 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      }
      (**(code **)(*param_1 + 0x3f0))(param_1,local_104);
    }
  }
  return;
}



// Function: FUN_00001056 at 00001056
// Size: 82 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001056(int *param_1,undefined2 param_2)

{
  char cVar1;
  
  if (*(int *)((int)param_1 + 0xb2) != 0) {
    cVar1 = (**(code **)(**(int **)((int)param_1 + 0xb2) + 0x1d8))();
    if (cVar1 != '\0') {
      func_0x00007258(0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  (**(code **)(*param_1 + 1000))((short)param_1,param_2);
  return;
}



// Function: FUN_00001110 at 00001110
// Size: 68 bytes

void FUN_00001110(int param_1)

{
  if (*(int *)(param_1 + 0xb2) != 0) {
    (**(code **)(**(int **)(param_1 + 0xb2) + 0x404))();
  }
  FUN_00000e3c(param_1);
  return;
}



// Function: FUN_00001154 at 00001154
// Size: 170 bytes

void FUN_00001154(int *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  short sVar3;
  undefined1 local_204 [256];
  byte local_104 [256];
  
  iVar1 = *param_2 + 1;
  pbVar2 = local_104;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar2 = *param_2;
    pbVar2 = pbVar2 + 1;
    param_2 = param_2 + 1;
  }
  if (*(short *)(param_1 + 0x2c) < (short)(ushort)local_104[0]) {
    local_104[0] = *(byte *)((int)param_1 + 0xb1);
  }
  if (*(int *)((int)param_1 + 0xb2) == 0) {
    FUN_00000e64((short)param_1,(short)local_104);
  }
  else {
    local_204[0] = 0;
    (**(code **)(*param_1 + 0x3d4))((short)param_1,(char)local_204);
    sVar3 = FUN_00001cf8((short)local_204,(short)local_104);
    if (sVar3 != 0) {
      (**(code **)(*param_1 + 0x3e0))();
      func_0x00007310((short)local_104);
      return;
    }
  }
  return;
}



// Function: FUN_000012ae at 000012ae
// Size: 50 bytes

void FUN_000012ae(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xc4))();
  if (param_2._0_1_ != '\0') {
    (**(code **)(*param_1 + 0xcc))();
  }
  return;
}



// Function: FUN_000012e0 at 000012e0
// Size: 92 bytes

void FUN_000012e0(int *param_1)

{
  undefined1 local_104 [256];
  
  if (*(int *)((int)param_1 + 0xb2) != 0) {
    local_104[0] = 0;
    (**(code **)(**(int **)((int)param_1 + 0xb2) + 0x3b0))();
    (**(code **)(*param_1 + 0x3d4))(param_1,local_104);
    (**(code **)(*param_1 + 0x40c))();
    (**(code **)(*param_1 + 1000))(param_1,(short)local_104);
  }
  return;
}



// Function: FUN_0000133c at 0000133c
// Size: 82 bytes

void FUN_0000133c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_104 [256];
  
  uVar1 = FUN_00001dc8(*(undefined4 *)((int)param_1 + 0xba),param_2,
                       *(undefined4 *)((int)param_1 + 0xbe));
  local_104[0] = 0;
  func_0x00007640(local_104,uVar1);
  (**(code **)(*param_1 + 1000))(param_1,(short)local_104);
  return;
}



// Function: FUN_0000138e at 0000138e
// Size: 172 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000138e(int *param_1)

{
  ushort uVar2;
  undefined4 uVar1;
  undefined4 extraout_A0;
  undefined1 auStack_12c [10];
  short local_122;
  undefined1 auStack_120 [2];
  short local_11e;
  short local_106;
  byte local_104 [256];
  
  local_104[0] = 0;
  (**(code **)(*param_1 + 0x3d4))(param_1,local_104);
  if (local_104[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (ushort)local_104[0];
    local_106 = 0;
    local_122 = 0;
    func_0x000072f8(local_104,&local_106,auStack_120,&local_122);
    func_0x00007698(extraout_A0);
    if (((local_122 != 0) && (local_106 = local_106 + 1, (short)uVar2 < local_106)) &&
       (-1 < local_11e)) {
      func_0x00007688(auStack_12c,auStack_120);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 4;
  }
  return uVar1;
}



// Function: FUN_0000147a at 0000147a
// Size: 78 bytes

void FUN_0000147a(int *param_1,undefined2 param_2,undefined4 param_3)

{
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x3a0))();
  }
  func_0x00005218((short)param_1,param_2);
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x3a0))();
  }
  return;
}



// Function: FUN_000014c8 at 000014c8
// Size: 208 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000014c8(int *param_1,short param_2)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  short local_c;
  short local_6;
  
  cVar2 = (**(code **)(*param_1 + 0x60))();
  if (cVar2 != '\0') {
    for (sVar3 = 1; sVar3 <= param_2; sVar3 = sVar3 + 1) {
      param_1[4] = param_1[4] - (int)*(short *)(**(int **)((int)param_1 + 0x16) + 2 + local_6 * 4);
      psVar1 = (short *)(**(int **)((int)param_1 + 0x16) + local_6 * 4);
      *psVar1 = *psVar1 + -1;
      if (*(short *)(**(int **)((int)param_1 + 0x16) + local_6 * 4) < local_c) {
        local_c = 1;
        if (*(short *)(**(int **)((int)param_1 + 0x16) + local_6 * 4) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_6 = local_6 + 1;
      }
    }
    *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - param_2;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined2 *)((int)param_1 + 6) = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 1;
  }
  return;
}



// Function: FUN_000015d8 at 000015d8
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000015d8(void)

{
  short in_D0w;
  int unaff_D5;
  int *in_A0;
  int in_A1;
  
  *(short *)(*in_A0 + unaff_D5) = *(short *)(in_A1 + in_D0w * 4) + *(short *)(*in_A0 + unaff_D5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001638 at 00001638
// Size: 406 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001638(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  func_0x000051d0((short)param_1);
  *(undefined2 *)((int)extraout_A0 + 0x7e) = 0;
  *(undefined2 *)(extraout_A0 + 0x1f) = 0;
  extraout_A0[0x20] = 0;
  extraout_A0[0x21] = 0;
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  local_8 = extraout_A0;
  iVar1 = func_0x000076a8((short)auStack_4e);
  if (iVar1 == 0) {
    func_0x000073b0(0x1a);
    iVar1 = 0;
    if (extraout_A0_00 != 0) {
      func_0x00004598((short)extraout_A0_00);
      iVar1 = extraout_A0_01;
    }
    func_0x000045a0((short)iVar1);
    local_8[0x20] = iVar1;
    func_0x000073b0(0x1a);
    iVar1 = 0;
    if (extraout_A0_02 != 0) {
      func_0x00004598((short)extraout_A0_02);
      iVar1 = extraout_A0_03;
    }
    func_0x000045a0((short)iVar1);
    local_8[0x21] = iVar1;
    func_0x00001c68();
    local_8[0x24] = extraout_A0_04;
    func_0x00001c68();
    local_8[0x25] = extraout_A0_05;
    func_0x00001c68();
    local_8[0x26] = extraout_A0_06;
    if (0 < *(short *)((int)param_1 + 0x7e)) {
      uVar2 = (**(code **)(*param_1 + 0x3e0))();
      (**(code **)(*local_8 + 0x3f4))((short)local_8,uVar2);
    }
    if (0 < *(short *)(param_1 + 0x1f)) {
      uVar2 = (**(code **)(*param_1 + 0x3e4))();
      (**(code **)(*local_8 + 0x3f8))((short)local_8,uVar2);
    }
    _DAT_00025f52 = local_14;
  }
  else {
    (**(code **)(*local_8 + 0x4c))();
    FUN_00001c10((short)((uint)local_18 >> 0x10));
  }
  return;
}



// Function: FUN_000017ce at 000017ce
// Size: 210 bytes

void FUN_000017ce(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_24 [3];
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if (((0 < param_2._0_2_) && (0 < param_2._2_2_)) &&
     ((int)param_2._2_2_ + (int)param_2._0_2_ + -1 <= (int)*(short *)((int)param_1 + 0x7e))) {
    local_24[2] = (int)param_2._0_2_;
    local_18 = 1;
    local_24[0] = ((int)*(short *)((int)param_1 + 0x7e) - (int)param_2._0_2_) + 1;
    local_24[1] = 1;
    if (local_24[0] < 1) {
      piVar1 = local_24 + 1;
    }
    else {
      piVar1 = local_24;
    }
    (**(code **)(*param_1 + 0x3b8))(param_1,(short)*piVar1,auStack_14);
    (**(code **)(*(int *)param_1[0x20] + 0x5c))((int *)param_1[0x20],param_2);
    *(short *)((int)param_1 + 0x7e) = *(short *)((int)param_1 + 0x7e) - param_2._2_2_;
    (**(code **)(*param_1 + 0x1c4))();
    (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
  }
  return;
}



// Function: FUN_000018a0 at 000018a0
// Size: 210 bytes

void FUN_000018a0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_24 [3];
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if (((0 < param_2._0_2_) && (0 < param_2._2_2_)) &&
     ((int)param_2._2_2_ + (int)param_2._0_2_ + -1 <= (int)*(short *)(param_1 + 0x1f))) {
    local_24[2] = (int)param_2._0_2_;
    local_18 = 1;
    local_24[0] = ((int)*(short *)(param_1 + 0x1f) - (int)param_2._0_2_) + 1;
    local_24[1] = 1;
    if (local_24[0] < 1) {
      piVar1 = local_24 + 1;
    }
    else {
      piVar1 = local_24;
    }
    (**(code **)(*param_1 + 0x3bc))(param_1,(short)*piVar1,auStack_14);
    (**(code **)(*(int *)param_1[0x21] + 0x5c))((int *)param_1[0x21],param_2);
    *(short *)(param_1 + 0x1f) = *(short *)(param_1 + 0x1f) - param_2._2_2_;
    (**(code **)(*param_1 + 0x1c4))();
    (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
  }
  return;
}



// Function: FUN_00001972 at 00001972
// Size: 30 bytes

void FUN_00001972(int *param_1)

{
  (**(code **)(*param_1 + 0x3c4))();
  return;
}



// Function: FUN_00001990 at 00001990
// Size: 30 bytes

void FUN_00001990(int *param_1)

{
  (**(code **)(*param_1 + 0x3c8))();
  return;
}



// Function: FUN_000019ae at 000019ae
// Size: 48 bytes

void FUN_000019ae(int *param_1)

{
  (**(code **)(*param_1 + 0x3c4))();
  return;
}



// Function: FUN_000019de at 000019de
// Size: 48 bytes

void FUN_000019de(int *param_1)

{
  (**(code **)(*param_1 + 0x3c8))();
  return;
}



// Function: FUN_00001a0e at 00001a0e
// Size: 304 bytes

void FUN_00001a0e(int *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int local_2c [3];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if ((1 < *(short *)(param_1[0x20] + 0x14)) ||
     (sVar1 = (**(code **)(*param_1 + 0x3e0))(), param_3._0_2_ != sVar1)) {
    local_1c = (int)param_2._0_2_;
    local_18 = 1;
    local_2c[2] = ((int)*(short *)((int)param_1 + 0x7e) - (int)param_2._0_2_) + 1;
    local_20 = 1;
    if (local_2c[2] < 1) {
      piVar2 = &local_20;
    }
    else {
      piVar2 = local_2c + 2;
    }
    (**(code **)(*param_1 + 0x3b8))((short)param_1,(short)*piVar2,(short)auStack_14);
    (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
    (**(code **)(*(int *)param_1[0x20] + 0x5c))((int *)param_1[0x20],param_2);
    (**(code **)(*(int *)param_1[0x20] + 0x58))();
    (**(code **)(*param_1 + 0x1c4))();
    local_2c[0] = ((int)*(short *)((int)param_1 + 0x7e) - (int)param_2._0_2_) + 1;
    local_2c[1] = 1;
    if (local_2c[0] < 1) {
      piVar2 = local_2c + 1;
    }
    else {
      piVar2 = local_2c;
    }
    (**(code **)(*param_1 + 0x3b8))(param_1,(short)*piVar2,auStack_14);
    (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
  }
  return;
}



// Function: FUN_00001b3e at 00001b3e
// Size: 187 bytes

void FUN_00001b3e(int *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int aiStack_2c [3];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if ((*(short *)(param_1[0x21] + 0x14) != 1) ||
     (sVar1 = (**(code **)(*param_1 + 0x3e4))(), param_3._0_2_ != sVar1)) {
    local_1c = (int)param_2._0_2_;
    local_18 = 1;
    aiStack_2c[2] = ((int)*(short *)(param_1 + 0x1f) - (int)param_2._0_2_) + 1;
    local_20 = 1;
    if (aiStack_2c[2] < 1) {
      piVar2 = &local_20;
    }
    else {
      piVar2 = aiStack_2c + 2;
    }
    (**(code **)(*param_1 + 0x3bc))((short)param_1,(short)*piVar2,(short)auStack_14);
    (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
    (**(code **)(*(int *)param_1[0x21] + 0x5c))((int *)param_1[0x21],param_2);
    (**(code **)(*(int *)param_1[0x21] + 0x58))();
    (**(code **)(*param_1 + 0x1c4))();
    aiStack_2c[0] = ((int)*(short *)(param_1 + 0x1f) - (int)param_2._0_2_) + 1;
    aiStack_2c[1] = 1;
    if (aiStack_2c[0] < 1) {
      piVar2 = aiStack_2c + 1;
    }
    else {
      piVar2 = aiStack_2c;
    }
    (**(code **)(*param_1 + 0x3bc))(param_1,(short)*piVar2,auStack_14);
    (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
  }
  return;
}



// Function: FUN_00001bf8 at 00001bf8
// Size: 8 bytes

void FUN_00001bf8(void)

{
  short unaff_D3w;
  int *unaff_A2;
  int unaff_A6;
  
  (**(code **)(*(int *)unaff_A2[0x21] + 0x58))();
  (**(code **)(*unaff_A2 + 0x1c4))();
  *(int *)(unaff_A6 + -0x28) = ((int)*(short *)(unaff_A2 + 0x1f) - (int)unaff_D3w) + 1;
  *(undefined4 *)(unaff_A6 + -0x24) = 1;
  (**(code **)(*unaff_A2 + 0x3bc))();
  (**(code **)(*unaff_A2 + 0x270))();
  return;
}



// Function: FUN_00001c00 at 00001c00
// Size: 8 bytes

void FUN_00001c00(void)

{
  short unaff_D3w;
  int *unaff_A2;
  int unaff_A6;
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x58))();
  (**(code **)(*unaff_A2 + 0x1c4))();
  *(int *)(unaff_A6 + -0x28) = ((int)*(short *)(unaff_A2 + 0x1f) - (int)unaff_D3w) + 1;
  *(undefined4 *)(unaff_A6 + -0x24) = 1;
  (**(code **)(*unaff_A2 + 0x3bc))();
  (**(code **)(*unaff_A2 + 0x270))();
  return;
}



// Function: FUN_00001c08 at 00001c08
// Size: 8 bytes

void FUN_00001c08(void)

{
  short unaff_D3w;
  code *in_A1;
  int *unaff_A2;
  int unaff_A6;
  
  (*in_A1)();
  (**(code **)(*unaff_A2 + 0x1c4))();
  *(int *)(unaff_A6 + -0x28) = ((int)*(short *)(unaff_A2 + 0x1f) - (int)unaff_D3w) + 1;
  *(undefined4 *)(unaff_A6 + -0x24) = 1;
  (**(code **)(*unaff_A2 + 0x3bc))();
  (**(code **)(*unaff_A2 + 0x270))();
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 80 bytes

void FUN_00001c10(void)

{
  short unaff_D3w;
  int in_A1;
  int *unaff_A2;
  int unaff_A6;
  
  (**(code **)(in_A1 + 0x1c4))();
  *(int *)(unaff_A6 + -0x28) = ((int)*(short *)(unaff_A2 + 0x1f) - (int)unaff_D3w) + 1;
  *(undefined4 *)(unaff_A6 + -0x24) = 1;
  (**(code **)(*unaff_A2 + 0x3bc))();
  (**(code **)(*unaff_A2 + 0x270))();
  return;
}



// Function: FUN_00001c60 at 00001c60
// Size: 13 bytes

void FUN_00001c60(void)

{
  code *in_A1;
  
  (*in_A1)();
  return;
}



// Function: FUN_00001c6e at 00001c6e
// Size: 18 bytes

void FUN_00001c6e(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x8a) = param_2._0_1_;
  return;
}



// Function: FUN_00001c80 at 00001c80
// Size: 30 bytes

void FUN_00001c80(int *param_1,undefined2 param_2)

{
  (**(code **)(*param_1 + 0x3c8))(param_1,param_2);
  return;
}



// Function: FUN_00001c9e at 00001c9e
// Size: 8 bytes

void FUN_00001c9e(int *param_1)

{
  (**(code **)(*param_1 + 0x458))();
  return;
}



// Function: FUN_00001ca8 at 00001ca8
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ca8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001cb0 at 00001cb0
// Size: 12 bytes

void FUN_00001cb0(void)

{
  int *in_A0;
  
  (**(code **)(*in_A0 + 0x458))();
  return;
}



// Function: FUN_00001cbc at 00001cbc
// Size: 48 bytes

void FUN_00001cbc(int *param_1)

{
  (**(code **)(*param_1 + 0x458))();
  return;
}



// Function: FUN_00001cec at 00001cec
// Size: 10 bytes

void FUN_00001cec(int param_1,undefined2 param_2)

{
  int *piVar1;
  char cVar2;
  
  func_0x00005218((short)param_1,param_2);
  if (*(short *)(param_1 + 0x7e) == 1) {
    cVar2 = func_0x000038e0((short)param_1 + 0x32,0xf4);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 0x10);
      *piVar1 = (*(int *)(param_1 + 0x36) -
                (int)*(short *)(**(int **)(*(int *)(param_1 + 0x80) + 0x16) + 2)) + *piVar1;
      *(undefined2 *)(**(int **)(*(int *)(param_1 + 0x80) + 0x16) + 2) =
           *(undefined2 *)(param_1 + 0x38);
    }
  }
  return;
}



// Function: FUN_00001cf8 at 00001cf8
// Size: 55 bytes

void FUN_00001cf8(void)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int unaff_A2;
  char unaff_A6b;
  
  pbVar1 = (byte *)(*(int *)(unaff_A2 + 0x36) + -4);
  *pbVar1 = *pbVar1 | 0xf8;
  func_0x00005218();
  if (*(short *)(unaff_A2 + 0x7e) == 1) {
    cVar3 = func_0x000038e0((short)unaff_A2 + 0x32,unaff_A6b + -8);
    if (cVar3 != '\0') {
      piVar2 = (int *)(*(int *)(unaff_A2 + 0x80) + 0x10);
      *piVar2 = (*(int *)(unaff_A2 + 0x36) -
                (int)*(short *)(**(int **)(*(int *)(unaff_A2 + 0x80) + 0x16) + 2)) + *piVar2;
      *(undefined2 *)(**(int **)(*(int *)(unaff_A2 + 0x80) + 0x16) + 2) =
           *(undefined2 *)(unaff_A2 + 0x38);
    }
  }
  return;
}



// Function: FUN_00001d30 at 00001d30
// Size: 54 bytes

void FUN_00001d30(void)

{
  int *piVar1;
  int unaff_A2;
  bool in_ZF;
  
  if (!in_ZF) {
    piVar1 = (int *)(*(int *)(unaff_A2 + 0x80) + 0x10);
    *piVar1 = (*(int *)(unaff_A2 + 0x36) -
              (int)*(short *)(**(int **)(*(int *)(unaff_A2 + 0x80) + 0x16) + 2)) + *piVar1;
    *(undefined2 *)(**(int **)(*(int *)(unaff_A2 + 0x80) + 0x16) + 2) =
         *(undefined2 *)(unaff_A2 + 0x38);
  }
  return;
}



// Function: FUN_00001d66 at 00001d66
// Size: 34 bytes

void FUN_00001d66(int *param_1,undefined2 param_2)

{
  (**(code **)(*param_1 + 0x41c))(param_1,param_2);
  return;
}



// Function: FUN_00001d88 at 00001d88
// Size: 32 bytes

void FUN_00001d88(int *param_1)

{
  (**(code **)(*param_1 + 0x418))(param_1,0x10001);
  return;
}



// Function: FUN_00001da8 at 00001da8
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001da8(void)

{
  if (_DAT_00025850 != (int *)0x0) {
    (**(code **)(*_DAT_00025850 + 0x3dc))();
  }
  return;
}



// Function: FUN_00001dc8 at 00001dc8
// Size: 8 bytes

void FUN_00001dc8(void)

{
  return;
}



// Function: FUN_00001dd6 at 00001dd6
// Size: 291 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001dd6(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_90 [38];
  undefined4 local_6a;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_52 = 0;
  local_5e = 0;
  local_62 = 0;
  local_56 = 0;
  local_5a = 0;
  func_0x000051d0((char)param_1);
  extraout_A0[0x1f] = 0;
  extraout_A0[0x21] = 0;
  extraout_A0[0x20] = 0;
  *(undefined4 *)((int)extraout_A0 + 0xa6) = 0;
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  local_8 = extraout_A0;
  iVar1 = func_0x000076a8((short)auStack_4e);
  if (iVar1 != 0) {
    func_0x00001d08((char)local_5e);
    func_0x00001d08((short)local_62);
    func_0x00001d08((short)local_56);
    func_0x00001d08(local_5a);
    func_0x00001d08(local_52);
    (**(code **)(*local_8 + 0x4c))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_6a = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00001ca8((short)auStack_90);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00025f52 = (undefined1 *)local_14;
  (**(code **)(*local_8 + 0x400))();
  return;
}



// Function: FUN_00001ea8 at 00001ea8
// Size: 65 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ea8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_A2;
  int unaff_A6;
  
  puVar1 = (undefined4 *)**(int **)(unaff_A2 + 0x7c);
  *(undefined4 *)(unaff_A6 + -0x6e) = *puVar1;
  *(undefined4 *)(unaff_A6 + -0x6a) = puVar1[1];
  iVar2 = **(int **)(unaff_A2 + 0x7c);
  *(undefined4 *)(unaff_A6 + -0x76) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(unaff_A6 + -0x72) = *(undefined4 *)(iVar2 + 0xc);
  if (*(char *)(unaff_A2 + 0xbd) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002206 at 00002206
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002206(void)

{
  undefined1 auStack_20 [28];
  
  func_0x00007208(auStack_20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000243c at 0000243c
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000243c(int param_1)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002458 at 00002458
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002458(int *param_1,int param_2)

{
  if (param_1[0x1f] != 0) {
    if (param_2 == 0) {
      *(undefined4 *)(*(int *)param_1[0x1f] + 0x52) = _DAT_00025cc4;
      (**(code **)(*param_1 + 0x3ac))();
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    else {
      *(int *)(*(int *)param_1[0x1f] + 0x52) = param_2;
    }
  }
  func_0x000051f8(param_1,param_2);
  return;
}



// Function: FUN_000024b4 at 000024b4
// Size: 124 bytes

void FUN_000024b4(int param_1,int *param_2)

{
  short sVar1;
  int local_c [2];
  
  if ((*(int *)(param_1 + 0x7c) != 0) && (param_2 != (int *)0x0)) {
    if (*(short *)(**(int **)(param_1 + 0x7c) + 0x18) < 1) {
      sVar1 = sRam00000ba8;
      if (sRam00000ba8 == 0) {
        sVar1 = 0xc;
      }
    }
    else {
      sVar1 = *(short *)(**(int **)(param_1 + 0x7c) + 0x18);
    }
    local_c[0] = (int)sVar1;
    local_c[1] = 0x10;
    (**(code **)(*param_2 + 0x3a8))(param_2,local_c);
  }
  FUN_000015d8(param_1,param_2);
  return;
}



// Function: FUN_00002530 at 00002530
// Size: 194 bytes

void FUN_00002530(int *param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  undefined4 *extraout_A0_00;
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  func_0x00004bc0(param_1,param_2);
  local_14 = (**(code **)(*param_1 + 0x3b4))();
  local_10 = (*(int *)((int)param_1 + 0x36) - param_1[0x23]) - param_1[0x25];
  local_8 = local_10;
  if (((*(char *)((int)param_1 + 0x43) == '\x04') && (*(char *)((int)param_1 + 0xbd) == '\0')) &&
     (*(char *)((int)param_1 + 0xbe) == '\0')) {
    local_18 = *(int *)((int)param_1 + 0xa2);
    local_1c = local_14;
    local_8 = local_18;
  }
  puVar3 = &local_c;
  puVar2 = &local_24;
  local_c = local_14;
  func_0x00003918((short)param_2);
  uVar1 = (undefined2)((uint)extraout_A0 >> 0x10);
  func_0x000038b8((char)extraout_A0,puVar2,puVar3);
  func_0x00003918((short)param_2,uVar1);
  *extraout_A0_00 = local_24;
  extraout_A0_00[1] = local_20;
  return;
}



// Function: FUN_000025f2 at 000025f2
// Size: 90 bytes

void FUN_000025f2(int *param_1,undefined4 param_2)

{
  *(char *)((int)param_1 + 0xbe) = param_2._0_1_;
  if (param_2._0_1_ == '\0') {
    *(undefined2 *)(*(int *)param_1[0x1f] + 0x48) = 0xffff;
  }
  else {
    *(undefined2 *)(*(int *)param_1[0x1f] + 0x48) = 0;
  }
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x400))();
    (**(code **)(*param_1 + 0x3bc))();
  }
  return;
}



// Function: FUN_0000264c at 0000264c
// Size: 218 bytes

void FUN_0000264c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  undefined4 extraout_A0_01;
  int *extraout_A0_02;
  undefined1 extraout_A0b;
  int *extraout_A0_03;
  int *piVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  short sVar8;
  undefined2 uVar9;
  int local_c [2];
  
  sVar8 = (short)param_1;
  func_0x00004bd8(sVar8,(char)param_2);
  cVar4 = '\0';
  do {
    if ('\x01' < cVar4) {
      local_c[0] = *(int *)(param_2 + 8);
      local_c[1] = 30000;
      if (*(int *)(param_2 + 8) < 0x7531) {
        piVar5 = local_c;
      }
      else {
        piVar5 = local_c + 1;
      }
      *(int *)(param_2 + 8) = *piVar5;
      return;
    }
    cVar3 = *(char *)(param_1 + 0x42 + (int)(short)cVar4);
    if (cVar3 == '\0') {
      if (*(int *)(param_1 + 0x1e) == 0) goto LAB_0000268a;
    }
    else if ((cVar3 != '\x01') && (cVar3 != '\x05')) {
LAB_0000268a:
      func_0x00003918(sVar8 + 0x88);
      uVar9 = (undefined2)((uint)extraout_A0 >> 0x10);
      uVar6 = 0xa4;
      func_0x000038a8((char)extraout_A0);
      iVar1 = *extraout_A0_00;
      func_0x00003918(sVar8 + 0x88,uVar6);
      uVar7 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      uVar6 = 0xc0;
      func_0x000038a8((char)extraout_A0_01,uVar9);
      iVar2 = *extraout_A0_02;
      func_0x00003918((short)param_2,uVar6);
      func_0x000038a8(extraout_A0b,uVar7);
      *extraout_A0_03 = iVar1 + iVar2 + *extraout_A0_03;
    }
    cVar4 = cVar4 + '\x01';
  } while( true );
}



// Function: FUN_00002726 at 00002726
// Size: 34 bytes

void FUN_00002726(int param_1)

{
  if (*(int *)(param_1 + 0xa6) != 0) {
    (**(code **)(**(int **)(param_1 + 0xa6) + 0xdc))();
  }
  return;
}



// Function: FUN_00002748 at 00002748
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002776 at 00002776
// Size: 16 bytes

void FUN_00002776(void)

{
  return;
}



// Function: FUN_00002786 at 00002786
// Size: 18 bytes

void FUN_00002786(int *param_1)

{
  (**(code **)(*param_1 + 0x238))();
  *(undefined1 *)(param_1 + 0x11) = 2;
  func_0x00003818(param_1);
  return;
}



// Function: FUN_00002798 at 00002798
// Size: 36 bytes

void FUN_00002798(void)

{
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x238))();
  *(undefined1 *)(unaff_A2 + 0x11) = 2;
  func_0x00003818();
  return;
}



// Function: FUN_000027bc at 000027bc
// Size: 34 bytes

void FUN_000027bc(int *param_1)

{
  (**(code **)(*param_1 + 0x3b0))();
  func_0x00003828(param_1);
  return;
}



// Function: FUN_000027de at 000027de
// Size: 272 bytes

void FUN_000027de(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined1 extraout_A0b;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar1 = (short)param_1;
  func_0x00003918(sVar1 + 0x88);
  uVar2 = (undefined1)extraout_A0;
  puVar4 = &local_2c;
  func_0x00003920(param_2,(short)((uint)puVar4 >> 0x10),(short)((uint)extraout_A0 >> 0x10));
  uVar3 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  func_0x000038c0((char)extraout_A0_00,(short)puVar4,uVar2);
  func_0x00003918(sVar1 + 0x88,uVar3);
  uVar2 = (undefined1)extraout_A0_01;
  puVar4 = &local_34;
  func_0x00003920(param_2,(short)((uint)puVar4 >> 0x10),(short)((uint)extraout_A0_01 >> 0x10));
  uVar3 = (undefined2)((uint)extraout_A0_02 >> 0x10);
  func_0x000038b8((char)extraout_A0_02,(short)puVar4,uVar2);
  local_14 = local_34;
  local_10 = local_30;
  local_c = local_2c;
  local_8 = local_28;
  func_0x00003918(sVar1 + 0x88,uVar3);
  uVar2 = (undefined1)extraout_A0_03;
  puVar4 = &local_3c;
  func_0x00003920(param_3,(short)((uint)puVar4 >> 0x10),(short)((uint)extraout_A0_03 >> 0x10));
  uVar3 = (undefined2)((uint)extraout_A0_04 >> 0x10);
  func_0x000038c0((char)extraout_A0_04,(short)puVar4,uVar2);
  func_0x00003918(sVar1 + 0x88,uVar3);
  uVar2 = (undefined1)extraout_A0_05;
  puVar4 = &local_44;
  func_0x00003920(param_3,(short)((uint)puVar4 >> 0x10),(short)((uint)extraout_A0_05 >> 0x10));
  func_0x000038b8(extraout_A0b,(short)puVar4,uVar2);
  local_24 = local_44;
  local_20 = local_40;
  local_1c = local_3c;
  local_18 = local_38;
  func_0x00005210(param_1,(short)&local_14,(short)&local_24);
  return;
}



// Function: FUN_000028ee at 000028ee
// Size: 406 bytes

void FUN_000028ee(int *param_1,undefined2 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar3;
  short sVar2;
  char cVar4;
  undefined1 extraout_A0b;
  undefined4 extraout_A0;
  undefined1 extraout_A0b_00;
  undefined1 extraout_A0b_01;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar8;
  undefined1 *puVar7;
  undefined2 uVar9;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 auStack_28 [4];
  undefined2 local_24;
  short local_22;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  undefined4 local_14;
  int local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  short local_6;
  
  local_14 = *(undefined4 *)((int)param_1 + 0x32);
  local_10 = *(int *)((int)param_1 + 0x36);
  uVar8 = (undefined2)((uint)param_1 >> 0x10);
  sVar2 = (short)param_1;
  func_0x00005218(sVar2,param_2);
  if (param_1[0x1f] == 0) {
    return;
  }
  cVar4 = (char)param_1;
  cVar3 = func_0x000038e0(cVar4 + '2',(char)&local_14);
  if (cVar3 == '\0') {
    return;
  }
  uVar9 = (undefined2)((uint)auStack_1c >> 0x10);
  uVar6 = uVar8;
  (**(code **)(*param_1 + 0x30c))(cVar4,(char)auStack_1c);
  puVar7 = auStack_20;
  func_0x00003918(sVar2 + 0x88,(short)((uint)puVar7 >> 0x10),uVar6,uVar9);
  func_0x000038a0(extraout_A0b,(short)puVar7);
  puVar7 = auStack_20;
  uVar5 = SUB41(&local_24,0);
  func_0x00007260((short)auStack_1c,(short)((uint)&local_24 >> 0x10),(short)((uint)puVar7 >> 0x10));
  uVar6 = (undefined2)((uint)extraout_A0 >> 0x10);
  func_0x00007230((char)extraout_A0,uVar5,(short)puVar7);
  puVar7 = auStack_28;
  func_0x00003918(sVar2 + 0x88,(short)((uint)puVar7 >> 0x10),uVar6);
  func_0x000038a0(extraout_A0b_00,(short)puVar7);
  puVar7 = auStack_28;
  uVar5 = SUB41(&local_2c,0);
  func_0x00007260((short)auStack_1c,(short)((uint)&local_2c >> 0x10),(short)((uint)puVar7 >> 0x10));
  func_0x00007228(extraout_A0b_01,uVar5,(short)puVar7);
  local_c = local_2c;
  local_a = local_2a;
  local_8 = local_24;
  local_6 = local_22;
  if ((*(int *)((int)param_1 + 0x36) == local_10) &&
     (local_22 == *(short *)(*(int *)param_1[0x1f] + 6))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  (**(code **)(*param_1 + 0x41c))(cVar4,(char)&local_c);
  if (!bVar1) {
    return;
  }
  uVar5 = 0x26;
  (**(code **)(*param_1 + 0x400))();
  (**(code **)(*param_1 + 0x3bc))();
  sVar2 = FUN_00001d30(uVar8,uVar5);
  if (param_3._0_1_ == '\0') {
    return;
  }
  if ((((*(char *)((int)param_1 + 0xbe) == '\0') ||
       (cVar4 = func_0x000038e0(cVar4 + '2',(char)&local_14), cVar4 == '\0')) && (sVar2 != -1)) &&
     (sVar2 != 1)) {
    return;
  }
  (**(code **)(*param_1 + 0x26c))();
  return;
}



// Function: FUN_00002a84 at 00002a84
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002a84(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002d70 at 00002d70
// Size: 166 bytes

void FUN_00002d70(int *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte abStack_108 [256];
  undefined4 local_8;
  
  if (param_1[0x1f] != 0) {
    pbVar2 = abStack_108;
    pbVar3 = param_2;
    for (iVar1 = *param_2 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pbVar2 = *pbVar3;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    }
    FUN_00001ea8();
    func_0x00007650(*param_2,&local_8,abStack_108 + 1);
    FUN_00001ea8();
    FUN_00001c00();
    (**(code **)(*param_1 + 0x418))(param_1,(short)local_8);
    func_0x000075d0(local_8);
    (**(code **)(*param_1 + 0x3e4))();
  }
  return;
}



// Function: FUN_00002e16 at 00002e16
// Size: 46 bytes

void FUN_00002e16(int *param_1)

{
  (**(code **)(*param_1 + 0x400))();
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  FUN_000004f0(param_1);
  return;
}



// Function: FUN_00002e44 at 00002e44
// Size: 102 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002e44(void)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00001bd0();
  return 0;
}



// Function: FUN_00002eda at 00002eda
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002eda(int param_1)

{
  if ((*(char *)(param_1 + 0xbd) == '\x01') && (*(int *)(param_1 + 0x7c) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002f6c at 00002f6c
// Size: 270 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002f6c(int *param_1,int param_2)

{
  short sVar1;
  int extraout_A0;
  int iVar2;
  
  if (param_1[0x1f] == 0) {
    return;
  }
  iVar2 = param_2;
  func_0x000075d0();
  sVar1 = *(short *)(*(int *)param_1[0x1f] + 0x22);
  if ((iVar2 <= sVar1) || (*(short *)(*(int *)param_1[0x1f] + 0x3c) <= sVar1)) {
    sVar1 = (short)iVar2;
  }
  if (*(short *)(param_1 + 0x27) < iVar2) {
    FUN_00001c10();
  }
  if (*(char *)((int)param_1 + 0xbd) != '\x01') {
    if ((param_2 != param_1[0x21]) && (param_2 != *(int *)(*(int *)param_1[0x1f] + 0x3e))) {
      func_0x00001d08(param_1[0x21]);
      param_1[0x21] = extraout_A0;
      param_1[0x21] = *(int *)(*(int *)param_1[0x1f] + 0x3e);
      *(int *)(*(int *)param_1[0x1f] + 0x3e) = param_2;
    }
    param_1[0x20] = param_2;
    *(short *)(*(int *)param_1[0x1f] + 0x3c) = (short)iVar2;
    if (*(char *)((int)param_1 + 0xbd) != '\x01') {
      (**(code **)(*param_1 + 0x400))();
                    /* WARNING: Subroutine does not return */
      FUN_00000a10(sVar1,(short)param_1[0x1f]);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00000a10(0x7fff,param_1[0x1f]);
}



// Function: FUN_000030c0 at 000030c0
// Size: 274 bytes

void FUN_000030c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  undefined1 auStack_2c [2];
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined1 auStack_1e [2];
  int local_1c;
  int local_18;
  undefined1 auStack_14 [4];
  short local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00001ca8(auStack_1e);
  local_2a = *(undefined4 *)(param_1 + 0xaa);
  local_26 = *(undefined4 *)(param_1 + 0xae);
  local_22 = *(undefined4 *)(param_1 + 0xb2);
  FUN_00001c60(&local_2a,auStack_14,auStack_2c);
  local_c = *param_2;
  local_8 = param_2[1];
  sVar3 = FUN_00001d30();
  if ((((*(char *)(param_1 + 0x43) == '\x04') && (sVar3 != 1)) &&
      (*(char *)(param_1 + 0xbd) == '\0')) && (*(char *)(param_1 + 0xbe) == '\0')) {
    if ((sVar3 == 0) || (sVar3 == -2)) {
      local_8 = CONCAT22(local_8._0_2_,local_10 + local_8._2_2_);
    }
    else {
      local_c = CONCAT22(local_c._0_2_,local_c._2_2_ - local_10);
    }
  }
  else {
    local_1c = (int)local_10 + (int)local_c._2_2_;
    local_18 = (int)local_8._2_2_;
    if ((int)local_10 + (int)local_c._2_2_ < (int)local_8._2_2_) {
      piVar4 = &local_18;
    }
    else {
      piVar4 = &local_1c;
    }
    local_8 = CONCAT22(local_8._0_2_,(short)*piVar4);
  }
  puVar1 = (undefined4 *)**(int **)(param_1 + 0x7c);
  *puVar1 = local_c;
  puVar1[1] = local_8;
  iVar2 = **(int **)(param_1 + 0x7c);
  *(undefined4 *)(iVar2 + 8) = local_c;
  *(undefined4 *)(iVar2 + 0xc) = local_8;
  FUN_00001cb0(auStack_1e);
  return;
}



// Function: FUN_000031d2 at 000031d2
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031d2(int *param_1)

{
  char cVar1;
  
  (**(code **)(*_DAT_000264b2 + 0xe4))(_DAT_000264b2,0x5854,(short)param_1[0x20]);
  FUN_00001c00();
  if (*(char *)((int)param_1 + 0xbd) == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x410))(param_1,0,0x7fff);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00000a10(0x7fff,(short)param_1[0x1f]);
    }
  }
  return;
}



