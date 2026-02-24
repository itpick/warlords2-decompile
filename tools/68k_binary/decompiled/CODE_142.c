// Warlords II - Decompiled 68k Code
// Segment: CODE_142
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000046 at 00000046
// Size: 50 bytes

void FUN_00000046(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0xa8ee;
  *param_1 = 0x1251e;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = param_3._0_1_;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  return;
}



// Function: FUN_00000078 at 00000078
// Size: 68 bytes

undefined4 * FUN_00000078(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x1251e;
    if (*(int *)((int)param_1 + 0xe) != 0) {
      puVar1 = (undefined4 *)FUN_00000b88((short)*(undefined4 *)((int)param_1 + 0xe));
    }
    if (0 < param_2._0_2_) {
      puVar1 = (undefined4 *)func_0x000073c8((short)param_1);
    }
  }
  return puVar1;
}



// Function: FUN_000000bc at 000000bc
// Size: 16 bytes

void FUN_000000bc(void)

{
  return;
}



// Function: FUN_000000cc at 000000cc
// Size: 36 bytes

void FUN_000000cc(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_1 + 0x18))();
  return;
}



// Function: FUN_000000f0 at 000000f0
// Size: 36 bytes

void FUN_000000f0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x18))();
  return;
}



// Function: FUN_00000114 at 00000114
// Size: 28 bytes

void FUN_00000114(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return;
}



// Function: FUN_00000130 at 00000130
// Size: 20 bytes

void FUN_00000130(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}



// Function: FUN_00000144 at 00000144
// Size: 32 bytes

bool FUN_00000144(int *param_1)

{
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x18))();
  return extraout_A0 != 0;
}



// Function: FUN_00000164 at 00000164
// Size: 154 bytes

void FUN_00000164(undefined4 *param_1,undefined2 param_2,undefined4 param_3)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  
  FUN_00000046((short)param_1,param_2);
  *param_1 = 0x12542;
  if (param_3._0_1_ == '\0') {
    func_0x000073c0(0x10);
    uVar1 = 0;
    if (extraout_A0_01 != 0) {
      FUN_00000b80((short)extraout_A0_01,4);
      uVar1 = extraout_A0_02;
    }
    *(undefined4 *)((int)param_1 + 0xe) = uVar1;
  }
  else {
    func_0x000073c0(0x10);
    uVar1 = 0;
    if (extraout_A0 != 0) {
      FUN_00000b80((short)extraout_A0,1);
      uVar1 = extraout_A0_00;
    }
    *(undefined4 *)((int)param_1 + 0xe) = uVar1;
  }
  FUN_00001bf0((char)*(undefined4 *)((int)param_1 + 0xe));
  return;
}



// Function: FUN_000001fe at 000001fe
// Size: 58 bytes

undefined4 FUN_000001fe(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x12542;
    uVar1 = FUN_00000078((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = func_0x000073c8((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00000238 at 00000238
// Size: 46 bytes

void FUN_00000238(int param_1)

{
  undefined4 extraout_A0;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00000360(param_1,*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = extraout_A0;
  }
  return;
}



// Function: FUN_00000266 at 00000266
// Size: 90 bytes

void FUN_00000266(int param_1)

{
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  int iVar1;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x14))();
  iVar1 = extraout_A0;
  while (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x14))();
    iVar1 = extraout_A0_00;
  }
  FUN_00000360((short)param_1,(short)*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = extraout_A0_01;
  return;
}



// Function: FUN_000002c0 at 000002c0
// Size: 160 bytes

undefined4 FUN_000002c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x14))();
  if (extraout_A0 != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x10))
              (*(int *)(param_1 + 0xe),extraout_A0);
    FUN_00000b50(extraout_A0,1);
    if (param_2 == extraout_A0_00) {
      uVar1 = FUN_00000b50(extraout_A0,2);
      return uVar1;
    }
    iVar2 = 2;
    while (FUN_00000b50(extraout_A0,iVar2), extraout_A0_02 != 0) {
      FUN_00000b50(extraout_A0,iVar2);
      if (param_2 == extraout_A0_01) {
        uVar1 = FUN_00000b50(extraout_A0,iVar2 + 1);
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}



// Function: FUN_00000360 at 00000360
// Size: 246 bytes

void FUN_00000360(int param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int iVar1;
  
  if (param_3._0_1_ == '\0') {
    FUN_00000b50(param_2,1);
    if (extraout_A0_00 == 0) {
      FUN_000002c0(param_1,param_2);
      iVar1 = extraout_A0_01;
      while ((iVar1 == 0 &&
             ((**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x14))(), extraout_A0_02 != 0))
            ) {
        FUN_000002c0(param_1,extraout_A0_02);
        iVar1 = extraout_A0_03;
      }
    }
    else {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x10))(*(int *)(param_1 + 0xe),param_2)
      ;
      FUN_00000b50(param_2,1);
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x14))();
    if (extraout_A0 == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x10))(*(int *)(param_1 + 0xe),param_2)
      ;
      FUN_00000b50(param_2,1);
    }
    else {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 0xc) + 0x10))
                (*(int *)(param_1 + 0xe),extraout_A0);
      FUN_000002c0(param_1,param_2);
    }
  }
  return;
}



// Function: FUN_00000456 at 00000456
// Size: 54 bytes

void FUN_00000456(undefined4 *param_1,undefined4 param_2)

{
  FUN_00000046(param_1,0);
  *param_1 = 0x12566;
  *(undefined4 *)((int)param_1 + 0x12) = param_2;
  *(undefined4 *)((int)param_1 + 0x16) = 1;
  return;
}



// Function: FUN_0000048c at 0000048c
// Size: 58 bytes

undefined4 FUN_0000048c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x12566;
    uVar1 = FUN_00000078((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = func_0x000073c8((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_000004c6 at 000004c6
// Size: 46 bytes

void FUN_000004c6(int param_1)

{
  undefined4 extraout_A0;
  
  *(int *)(param_1 + 0x16) = *(int *)(param_1 + 0x16) + 1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x12) + 0xc) + 0x18))
            (*(int *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x16));
  *(undefined4 *)(param_1 + 8) = extraout_A0;
  return;
}



// Function: FUN_000004f4 at 000004f4
// Size: 48 bytes

void FUN_000004f4(int param_1)

{
  undefined4 extraout_A0;
  
  *(undefined4 *)(param_1 + 0x16) = 1;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x12) + 0xc) + 0x18))(*(int *)(param_1 + 0x12),1);
  *(undefined4 *)(param_1 + 8) = extraout_A0;
  return;
}



// Function: FUN_00000524 at 00000524
// Size: 92 bytes

void FUN_00000524(undefined4 *param_1)

{
  func_0x00003658(param_1);
  *param_1 = 0x11fea;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  return;
}



// Function: FUN_00000580 at 00000580
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000580(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_3 == 0) {
    param_3 = _DAT_000266a8;
  }
  func_0x00003660(param_1,param_2,0,param_3);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 0x1b) = param_4._0_1_;
  *(undefined1 *)(param_1 + 0x1c) = param_4._2_1_;
  *(undefined4 *)(param_1 + 0x12) = param_5;
  *(int *)(param_1 + 0x16) = param_3;
  return;
}



// Function: FUN_000005d6 at 000005d6
// Size: 16 bytes

undefined4 FUN_000005d6(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// Function: FUN_000005e6 at 000005e6
// Size: 16 bytes

undefined1 FUN_000005e6(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



// Function: FUN_000005f6 at 000005f6
// Size: 16 bytes

undefined1 FUN_000005f6(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



// Function: FUN_00000606 at 00000606
// Size: 16 bytes

undefined1 FUN_00000606(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



// Function: FUN_00000616 at 00000616
// Size: 16 bytes

undefined1 FUN_00000616(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



// Function: FUN_00000626 at 00000626
// Size: 92 bytes

void FUN_00000626(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  cVar2 = (**(code **)(*param_1 + 0xa8))();
  if ((cVar2 != '\0') && (*(int *)((int)param_1 + 0x12) != 0)) {
    if (*(char *)((int)param_1 + 0x1a) == '\0') {
      uVar1 = 0x65;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0xac))();
    }
    (**(code **)(**(int **)((int)param_1 + 0x12) + 0x20))
              (*(int **)((int)param_1 + 0x12),uVar1,param_1);
  }
  return;
}



// Function: FUN_00000682 at 00000682
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000682(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa4))();
  if (cVar1 != '\0') {
    FUN_00000d90(*(undefined4 *)((int)param_1 + 0x16),param_1);
    if ((*(char *)((int)param_1 + 0x1d) != '\0') || (param_1[1] == 0x69)) {
      FUN_00000d90(_DAT_000264b2,param_1);
    }
  }
  return;
}



// Function: FUN_000006d0 at 000006d0
// Size: 162 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006d0(int param_1,int param_2,int param_3,int param_4)

{
  if (((param_2 == 0x24) && (param_3 == _DAT_000264b2)) && (*(int *)(param_1 + 4) == 0x69)) {
    (**(code **)(**(int **)(param_1 + 0x16) + 0x118))();
  }
  else if (((param_2 == 0x23) && (param_3 == _DAT_000264b2)) &&
          (param_4 == *(int *)(param_1 + 0x22))) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  else if (((param_2 == 0x23) && (param_3 == _DAT_000264b2)) &&
          (param_4 == *(int *)(param_1 + 0x1e))) {
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  else if (((param_2 == 0x1c) && (param_3 == *(int *)(param_1 + 0x16))) || (param_2 == 0x1e)) {
    (**(code **)(**(int **)(param_1 + 0x16) + 0x118))();
  }
  return;
}



// Function: FUN_00000772 at 00000772
// Size: 16 bytes

undefined1 FUN_00000772(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



// Function: FUN_00000782 at 00000782
// Size: 40 bytes

void FUN_00000782(int param_1)

{
  if (*(int *)(param_1 + 0x16) != 0) {
    (**(code **)(**(int **)(param_1 + 0x16) + 0x114))(*(int **)(param_1 + 0x16),param_1);
  }
  return;
}



// Function: FUN_000007aa at 000007aa
// Size: 10 bytes

undefined4 FUN_000007aa(void)

{
  return 1;
}



// Function: FUN_000007b4 at 000007b4
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000007b4(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x78))();
  *(int *)((int)param_1 + 0x22) = _DAT_000264b2[0x12];
  *(undefined4 *)((int)param_1 + 0x26) = *(undefined4 *)((int)param_1 + 0x16);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (**(code **)(*_DAT_000264b2 + 0x100))
                      (_DAT_000264b2,param_2,*(undefined4 *)((int)param_1 + 0x16));
    *(int *)((int)param_1 + 0x1e) = param_2;
  }
  return uVar1;
}



// Function: FUN_0000080e at 0000080e
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000080e(int *param_1)

{
  if (*(char *)((int)param_1 + 0x1a) == '\0') {
    (**(code **)(*param_1 + 0x9c))(param_1,*(undefined4 *)((int)param_1 + 0x1e));
  }
  else if ((*(int *)((int)param_1 + 0x22) != 0) &&
          (_DAT_000264b2[0x13] == *(int *)((int)param_1 + 0x16))) {
    (**(code **)(*_DAT_000264b2 + 0x100))
              (_DAT_000264b2,*(undefined4 *)((int)param_1 + 0x22),
               *(undefined4 *)((int)param_1 + 0x26));
  }
  return;
}



// Function: FUN_0000086a at 0000086a
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000086a(undefined4 *param_1)

{
  FUN_00000524(param_1);
  *param_1 = 0x1209a;
  func_0x00007208(param_1 + 0x1e);
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = _DAT_00025b5a;
  *(undefined4 *)((int)param_1 + 0x36) = _DAT_00025b5e;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 1;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  param_1[0x11] = _DAT_00025b5a;
  param_1[0x12] = _DAT_00025b5e;
  param_1[0x13] = _DAT_00025b5a;
  param_1[0x14] = _DAT_00025b5e;
  param_1[0x15] = _DAT_00025b5a;
  param_1[0x16] = _DAT_00025b5e;
  param_1[0x17] = _DAT_00025b5a;
  param_1[0x18] = _DAT_00025b5e;
  param_1[0x19] = _DAT_00025b5a;
  param_1[0x1a] = _DAT_00025b5e;
  param_1[0x1b] = _DAT_00025b5a;
  param_1[0x1c] = _DAT_00025b5e;
  param_1[0x1d] = 0;
  param_1[0x1e] = _DAT_00025b56;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



// Function: FUN_00000932 at 00000932
// Size: 74 bytes

void FUN_00000932(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  FUN_00000580(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x2e) = param_6;
  *(undefined4 *)(param_1 + 0x3e) = param_7;
  *(undefined4 *)(param_1 + 0x32) = *param_8;
  *(undefined4 *)(param_1 + 0x36) = param_8[1];
  return;
}



// Function: FUN_0000097c at 0000097c
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000097c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_A0;
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(short *)((int)_DAT_000266a8 + 0x6a) == 1) {
    FUN_00001ee8();
  }
  local_8 = _DAT_00025f56;
  local_6 = _DAT_00025f58;
  (**(code **)(*_DAT_000266a8 + 0x160))(_DAT_000266a8,param_1 + 0x32,&local_8,param_1);
  uVar2 = 0;
  if ((extraout_A0 != 0) &&
     (piVar1 = *(int **)(extraout_A0 + 0x16), uVar2 = 0, piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,extraout_A0);
  }
  return uVar2;
}



// Function: FUN_000009f4 at 000009f4
// Size: 44 bytes

void FUN_000009f4(undefined4 *param_1)

{
  FUN_00000524(param_1);
  *param_1 = 0x12182;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  return;
}



// Function: FUN_00000a20 at 00000a20
// Size: 38 bytes

void FUN_00000a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00000580(param_1,param_2,param_3);
  return;
}



// Function: FUN_00000a46 at 00000a46
// Size: 40 bytes

void FUN_00000a46(undefined4 *param_1)

{
  FUN_000009f4(param_1);
  *param_1 = 0x12236;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  return;
}



// Function: FUN_00000a6e at 00000a6e
// Size: 38 bytes

void FUN_00000a6e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00000a20(param_1,param_2,param_3);
  return;
}



// Function: FUN_00000a94 at 00000a94
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a94(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = (undefined2)((uint)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x36) != '\0') {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
      FUN_00001cf0(0xfffe,(short)_DAT_00025cd0,(short)_DAT_000267d2);
      FUN_00001c00();
      _DAT_00025f52 = local_10;
    }
    else {
      uVar4 = (undefined2)local_14;
      uVar3 = local_16;
      (**(code **)(*param_1 + 0xb8))((short)param_1,(short)((uint)local_14 >> 0x10));
      FUN_00001c10((short)((uint)local_14 >> 0x10),uVar2,uVar3,uVar4);
    }
  }
  FUN_00000782((short)param_1);
  return;
}



// Function: FUN_00000b40 at 00000b40
// Size: 16 bytes

void FUN_00000b40(int param_1,undefined4 param_2)

{
  undefined1 auStack_104 [256];
  
  if ((*(int *)(param_1 + 0x32) != 0) && (*(int *)(*(int *)(param_1 + 0x32) + 4) != 0x6e756c6c)) {
    auStack_104[0] = 0;
    func_0x00000e30(0x80,auStack_104);
    (**(code **)(**(int **)(param_1 + 0x32) + 0xb4))
              (*(int **)(param_1 + 0x32),0x6572726e,(int)param_2._0_2_);
    (**(code **)(**(int **)(param_1 + 0x32) + 0xb8))
              (*(int **)(param_1 + 0x32),0x65727273,auStack_104);
  }
  return;
}



// Function: FUN_00000b50 at 00000b50
// Size: 48 bytes

void FUN_00000b50(void)

{
  int unaff_A2;
  int unaff_A6;
  
  if (*(int *)(*(int *)(unaff_A2 + 0x32) + 4) != 0x6e756c6c) {
    *(undefined1 *)(unaff_A6 + -0x100) = 0;
    func_0x00000e30(0x80,unaff_A6 + -0x100);
    (**(code **)(**(int **)(unaff_A2 + 0x32) + 0xb4))
              (*(int **)(unaff_A2 + 0x32),0x6572726e,(int)*(short *)(unaff_A6 + 0xc));
    (**(code **)(**(int **)(unaff_A2 + 0x32) + 0xb8))
              (*(int **)(unaff_A2 + 0x32),0x65727273,unaff_A6 + -0x100);
  }
  return;
}



// Function: FUN_00000b80 at 00000b80
// Size: 8 bytes

void FUN_00000b80(void)

{
  int unaff_A2;
  int unaff_A6;
  
  (**(code **)(**(int **)(unaff_A2 + 0x32) + 0xb4))();
  (**(code **)(**(int **)(unaff_A2 + 0x32) + 0xb8))
            (*(int **)(unaff_A2 + 0x32),0x65727273,unaff_A6 + -0x100);
  return;
}



// Function: FUN_00000b88 at 00000b88
// Size: 40 bytes

void FUN_00000b88(void)

{
  int in_A1;
  int unaff_A2;
  int unaff_A6;
  
  (**(code **)(in_A1 + 0xb4))();
  (**(code **)(**(int **)(unaff_A2 + 0x32) + 0xb8))
            (*(int **)(unaff_A2 + 0x32),0x65727273,unaff_A6 + -0x100);
  return;
}



// Function: FUN_00000bb0 at 00000bb0
// Size: 40 bytes

void FUN_00000bb0(undefined4 *param_1)

{
  FUN_000009f4(param_1);
  *param_1 = 0x122f2;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  return;
}



// Function: FUN_00000bd8 at 00000bd8
// Size: 38 bytes

undefined4 FUN_00000bd8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2e) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x2e) + 0x68))();
  }
  return uVar1;
}



// Function: FUN_00000bfe at 00000bfe
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00000bfe(int *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 extraout_A0;
  
  uVar2 = 1;
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    if (*(char *)((int)param_1 + 0x36) == '\0') {
      uVar1 = (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x6c))();
      if ((uVar1 & 0xf) == 3) {
        (**(code **)(*param_1 + 0xbc))();
        (**(code **)(*param_1 + 0xb8))(param_1,extraout_A0);
      }
      else {
        uVar1 = (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x6c))();
        if ((uVar1 & 0xf) == 2) {
          (**(code **)(*param_1 + 0xbc))();
          (**(code **)(*_DAT_000266a8 + 0x254))(_DAT_000266a8,param_1);
          uVar2 = 0;
        }
      }
    }
    else {
      uVar1 = (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x6c))();
      if (((uVar1 & 0xf) == 2) && (*(int *)((int)param_1 + 0x32) == 0)) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// Function: FUN_00000cd2 at 00000cd2
// Size: 48 bytes

void FUN_00000cd2(int param_1)

{
  if (*(int *)(param_1 + 0x2e) != 0) {
    *(undefined1 *)(param_1 + 0x36) = 1;
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x5c))();
  }
  return;
}



// Function: FUN_00000d02 at 00000d02
// Size: 18 bytes

void FUN_00000d02(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x32) = param_2;
  return;
}



// Function: FUN_00000d14 at 00000d14
// Size: 58 bytes

undefined4 FUN_00000d14(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xc8bc;
    uVar1 = FUN_0000179e((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00001328((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00000d4e at 00000d4e
// Size: 66 bytes

void FUN_00000d4e(undefined4 *param_1,int param_2)

{
  *param_1 = 0xa8ee;
  *param_1 = 0xba62;
  FUN_00000d90(param_1,param_2,*(undefined2 *)(param_2 + 0x7c));
  return;
}



// Function: FUN_00000d90 at 00000d90
// Size: 72 bytes

void FUN_00000d90(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int local_14;
  int local_10;
  int local_c [2];
  
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + 6) = 0xffff;
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *(undefined1 *)((int)param_1 + 10) = 1;
    (**(code **)(*param_1 + 0xc))();
  }
  else {
    local_c[0] = (int)param_3._0_2_;
    local_c[1] = 1;
    if (param_3._0_2_ < 1) {
      piVar1 = local_c + 1;
    }
    else {
      piVar1 = local_c;
    }
    *(short *)((int)param_1 + 6) = (short)*piVar1;
    local_14 = (int)param_3._2_2_;
    local_10 = (int)*(short *)(param_2 + 0x7c);
    if ((int)*(short *)(param_2 + 0x7c) < (int)param_3._2_2_) {
      piVar1 = &local_10;
    }
    else {
      piVar1 = &local_14;
    }
    *(short *)(param_1 + 2) = (short)*piVar1;
    *(undefined1 *)((int)param_1 + 10) = param_4._0_1_;
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}



// Function: FUN_00000dd8 at 00000dd8
// Size: 49 bytes

void FUN_00000dd8(void)

{
  int in_D0;
  undefined4 *puVar1;
  int *unaff_A2;
  int unaff_A6;
  
  if (in_D0 < *(int *)(unaff_A6 + -0x10)) {
    puVar1 = (undefined4 *)(unaff_A6 + -0xc);
  }
  else {
    puVar1 = (undefined4 *)(unaff_A6 + -0x10);
  }
  *(short *)(unaff_A2 + 2) = (short)*puVar1;
  *(undefined1 *)((int)unaff_A2 + 10) = *(undefined1 *)(unaff_A6 + 0x14);
  (**(code **)(*unaff_A2 + 0xc))();
  return;
}



// Function: FUN_00000e2a at 00000e2a
// Size: 29 bytes

undefined2 FUN_00000e2a(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  return *(undefined2 *)(param_1 + 1);
}



// Function: FUN_00000e48 at 00000e48
// Size: 52 bytes

undefined2 FUN_00000e48(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x10))();
  }
  return *(undefined2 *)(param_1 + 1);
}



// Function: FUN_00000e7c at 00000e7c
// Size: 24 bytes

bool FUN_00000e7c(int param_1)

{
  return *(short *)(param_1 + 4) != -1;
}



// Function: FUN_00000e94 at 00000e94
// Size: 50 bytes

void FUN_00000e94(int param_1)

{
  if (*(short *)(param_1 + 8) < *(short *)(param_1 + 6)) {
    *(undefined2 *)(param_1 + 4) = 0xffff;
  }
  else if (*(char *)(param_1 + 10) == '\0') {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 8);
  }
  else {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);
  }
  return;
}



// Function: FUN_00000ec6 at 00000ec6
// Size: 64 bytes

void FUN_00000ec6(int param_1)

{
  if (*(char *)(param_1 + 10) == '\0') {
    if (*(short *)(param_1 + 6) < *(short *)(param_1 + 4)) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    else {
      *(undefined2 *)(param_1 + 4) = 0xffff;
    }
  }
  else if (*(short *)(param_1 + 4) < *(short *)(param_1 + 8)) {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  }
  else {
    *(undefined2 *)(param_1 + 4) = 0xffff;
  }
  return;
}



// Function: FUN_00000f06 at 00000f06
// Size: 66 bytes

void FUN_00000f06(undefined4 *param_1,int param_2)

{
  *param_1 = 0xa8ee;
  *param_1 = 0xba76;
  FUN_00000f48(param_1,param_2,*(undefined2 *)(param_2 + 0x7e));
  return;
}



// Function: FUN_00000f48 at 00000f48
// Size: 154 bytes

void FUN_00000f48(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int local_14;
  int local_10;
  int local_c [2];
  
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + 6) = 0xffff;
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *(undefined1 *)((int)param_1 + 10) = 1;
    (**(code **)(*param_1 + 0xc))();
  }
  else {
    local_c[0] = (int)param_3._0_2_;
    local_c[1] = 1;
    if (param_3._0_2_ < 1) {
      piVar1 = local_c + 1;
    }
    else {
      piVar1 = local_c;
    }
    *(short *)((int)param_1 + 6) = (short)*piVar1;
    local_14 = (int)param_3._2_2_;
    local_10 = (int)*(short *)(param_2 + 0x7e);
    if ((int)*(short *)(param_2 + 0x7e) < (int)param_3._2_2_) {
      piVar1 = &local_10;
    }
    else {
      piVar1 = &local_14;
    }
    *(short *)(param_1 + 2) = (short)*piVar1;
    *(undefined1 *)((int)param_1 + 10) = param_4._0_1_;
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}



// Function: FUN_00000fe2 at 00000fe2
// Size: 30 bytes

undefined2 FUN_00000fe2(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  return *(undefined2 *)(param_1 + 1);
}



// Function: FUN_00001000 at 00001000
// Size: 52 bytes

undefined2 FUN_00001000(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x10))();
  }
  return *(undefined2 *)(param_1 + 1);
}



// Function: FUN_00001034 at 00001034
// Size: 24 bytes

bool FUN_00001034(int param_1)

{
  return *(short *)(param_1 + 4) != -1;
}



// Function: FUN_0000104c at 0000104c
// Size: 50 bytes

void FUN_0000104c(int param_1)

{
  if (*(short *)(param_1 + 8) < *(short *)(param_1 + 6)) {
    *(undefined2 *)(param_1 + 4) = 0xffff;
  }
  else if (*(char *)(param_1 + 10) == '\0') {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 8);
  }
  else {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);
  }
  return;
}



// Function: FUN_0000107e at 0000107e
// Size: 64 bytes

void FUN_0000107e(int param_1)

{
  if (*(char *)(param_1 + 10) == '\0') {
    if (*(short *)(param_1 + 6) < *(short *)(param_1 + 4)) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    }
    else {
      *(undefined2 *)(param_1 + 4) = 0xffff;
    }
  }
  else if (*(short *)(param_1 + 4) < *(short *)(param_1 + 8)) {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  }
  else {
    *(undefined2 *)(param_1 + 4) = 0xffff;
  }
  return;
}



// Function: FUN_000010be at 000010be
// Size: 82 bytes

void FUN_000010be(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0xa8ee;
  *param_1 = 0xba8a;
  func_0x00007208(param_1 + 1);
  FUN_00000d4e((int)param_1 + 10,param_2);
  FUN_00000f06((int)param_1 + 0x16,param_2);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// Function: FUN_00001110 at 00001110
// Size: 50 bytes

void FUN_00001110(int *param_1,undefined2 *param_2)

{
  (**(code **)(*param_1 + 0xc))();
  *param_2 = *(undefined2 *)(param_1 + 1);
  param_2[1] = *(undefined2 *)((int)param_1 + 6);
  return;
}



// Function: FUN_00001142 at 00001142
// Size: 50 bytes

void FUN_00001142(int *param_1,undefined2 *param_2)

{
  (**(code **)(*param_1 + 0x10))();
  *param_2 = *(undefined2 *)(param_1 + 1);
  param_2[1] = *(undefined2 *)((int)param_1 + 6);
  return;
}



// Function: FUN_00001174 at 00001174
// Size: 62 bytes

undefined4 FUN_00001174(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 10) + 8))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(int *)(param_1 + 0x16) + 8))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// Function: FUN_000011b2 at 000011b2
// Size: 46 bytes

void FUN_000011b2(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00000e2a(param_1 + 10);
  *(undefined2 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_00000fe2(param_1 + 0x16);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}



// Function: FUN_000011e0 at 000011e0
// Size: 194 bytes

void FUN_000011e0(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_00000e48(param_1 + 10);
    *(undefined2 *)(param_1 + 4) = uVar1;
    cVar2 = (**(code **)(*(int *)(param_1 + 10) + 8))();
    if (cVar2 == '\0') {
      uVar1 = FUN_00001000(param_1 + 0x16);
      *(undefined2 *)(param_1 + 6) = uVar1;
      cVar2 = (**(code **)(*(int *)(param_1 + 0x16) + 8))();
      if (cVar2 != '\0') {
        uVar1 = FUN_00000e2a(param_1 + 10);
        *(undefined2 *)(param_1 + 4) = uVar1;
      }
    }
  }
  else {
    uVar1 = FUN_00001000(param_1 + 0x16);
    *(undefined2 *)(param_1 + 6) = uVar1;
    cVar2 = (**(code **)(*(int *)(param_1 + 0x16) + 8))();
    if (cVar2 == '\0') {
      uVar1 = FUN_00000e48(param_1 + 10);
      *(undefined2 *)(param_1 + 4) = uVar1;
      cVar2 = (**(code **)(*(int *)(param_1 + 10) + 8))();
      if (cVar2 != '\0') {
        uVar1 = FUN_00000fe2(param_1 + 0x16);
        *(undefined2 *)(param_1 + 6) = uVar1;
      }
    }
  }
  return;
}



// Function: FUN_000012a2 at 000012a2
// Size: 10 bytes

undefined4 FUN_000012a2(void)

{
  return 0;
}



// Function: FUN_000012ac at 000012ac
// Size: 8 bytes

void FUN_000012ac(void)

{
  return;
}



// Function: FUN_000012b4 at 000012b4
// Size: 8 bytes

void FUN_000012b4(void)

{
  return;
}



// Function: FUN_000012bc at 000012bc
// Size: 48 bytes

int FUN_000012bc(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(int *)(param_1 + 0x5c) = param_2;
    *(int *)(*(int *)(param_1 + 0x60) + 0x5c) = param_1;
    *(int *)(param_2 + 0x60) = param_1;
  }
  return param_2;
}



// Function: FUN_000012ec at 000012ec
// Size: 60 bytes

void FUN_000012ec(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = param_1;
  *(int *)(param_1 + 0x5c) = param_1;
  return;
}



// Function: FUN_00001328 at 00001328
// Size: 8 bytes

void FUN_00001328(void)

{
  return;
}



// Function: FUN_00001330 at 00001330
// Size: 84 bytes

void FUN_00001330(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0xa8ee;
  *param_1 = 0xa240;
  *(undefined2 *)((int)param_1 + 0x4a) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_00001406(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_00001384 at 00001384
// Size: 130 bytes

void FUN_00001384(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0xa8ee;
  *param_1 = 0xa240;
  *(undefined2 *)((int)param_1 + 0x4a) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (param_2 == (int *)0x0) {
    FUN_00001406(param_1,0,0,0);
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x58))();
    FUN_00001406(param_1,param_2,1,uVar1);
  }
  return;
}



// Function: FUN_00001406 at 00001406
// Size: 242 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00001406(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 extraout_A0;
  
  *(int *)(param_1 + 0x60) = param_1;
  *(int *)(param_1 + 0x5c) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(char *)(param_1 + 0x14) = param_5._0_1_;
  *(int **)(param_1 + 0x10) = param_2;
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x58))();
    uVar1 = FUN_00001dc8(0,param_4,uVar1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = FUN_00001dc8(1,param_3,*(int *)(param_1 + 0xc) + 1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (param_5._0_1_ == '\0') {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
    }
    else {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
    }
    FUN_000012bc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = extraout_A0;
    uVar1 = 0x16;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x50) = _DAT_00025f52;
    _DAT_00025f52 = param_1 + 0x16;
    *(undefined4 *)(param_1 + 0x54) = 0x25b0;
    *(int *)(param_1 + 0x58) = param_1;
  }
  return uVar1;
}



// Function: FUN_000014f8 at 000014f8
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000014f8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xa240;
    if (param_1[4] != 0) {
      _DAT_00025f52 = param_1[0x14];
      puVar1 = (undefined4 *)FUN_00001540(param_1);
    }
    if (0 < param_2._0_2_) {
      puVar1 = (undefined4 *)FUN_00001328(param_1);
    }
  }
  return puVar1;
}



// Function: FUN_00001540 at 00001540
// Size: 80 bytes

void FUN_00001540(int param_1)

{
  undefined4 extraout_A0;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_000012ec(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = extraout_A0;
    if ((*(char *)(*(int *)(param_1 + 0x10) + 0x18) != '\0') &&
       (*(int *)(*(int *)(param_1 + 0x10) + 4) == 0)) {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x4c))();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// Function: FUN_00001590 at 00001590
// Size: 18 bytes

void FUN_00001590(undefined4 param_1)

{
  FUN_00001540(param_1);
  return;
}



// Function: FUN_000015a2 at 000015a2
// Size: 60 bytes

void FUN_000015a2(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (*(int *)(param_1 + 4) < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// Function: FUN_000015de at 000015de
// Size: 240 bytes

void FUN_000015de(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 < *(int *)(param_1 + 8)) {
    local_c = param_2;
    local_8 = *(int *)(param_1 + 8) - param_3;
    if (param_2 < local_8) {
      piVar1 = &local_8;
    }
    else {
      piVar1 = &local_c;
    }
    *(int *)(param_1 + 8) = *piVar1;
  }
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    local_14 = param_2 + -1;
    local_10 = *(int *)(param_1 + 0xc) - param_3;
    if (param_2 + -1 < local_10) {
      piVar1 = &local_10;
    }
    else {
      piVar1 = &local_14;
    }
    *(int *)(param_1 + 0xc) = *piVar1;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (param_2 < *(int *)(param_1 + 4)) {
      local_24 = param_2;
      local_20 = *(int *)(param_1 + 4) - param_3;
      if (param_2 < local_20) {
        piVar1 = &local_20;
      }
      else {
        piVar1 = &local_24;
      }
      *(int *)(param_1 + 4) = *piVar1;
    }
  }
  else if (param_2 <= *(int *)(param_1 + 4)) {
    local_1c = param_2 + -1;
    local_18 = *(int *)(param_1 + 4) - param_3;
    if (param_2 + -1 < local_18) {
      piVar1 = &local_18;
    }
    else {
      piVar1 = &local_1c;
    }
    *(int *)(param_1 + 4) = *piVar1;
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(*(int *)(param_1 + 0x10) + 4)) {
    FUN_000015de(*(undefined4 *)(param_1 + 0x60),param_2,param_3);
  }
  return;
}



// Function: FUN_000016ce at 000016ce
// Size: 108 bytes

void FUN_000016ce(int param_1,int param_2,int param_3)

{
  if (param_2 <= *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = param_3 + *(int *)(param_1 + 8);
  }
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_3 + *(int *)(param_1 + 0xc);
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (param_2 < *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = param_3 + *(int *)(param_1 + 4);
    }
  }
  else if (param_2 <= *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = param_3 + *(int *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(*(int *)(param_1 + 0x10) + 4)) {
    FUN_000016ce(*(undefined4 *)(param_1 + 0x60),param_2,param_3);
  }
  return;
}



// Function: FUN_0000173a at 0000173a
// Size: 22 bytes

bool FUN_0000173a(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



// Function: FUN_00001750 at 00001750
// Size: 32 bytes

void FUN_00001750(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  }
  return;
}



// Function: FUN_00001770 at 00001770
// Size: 46 bytes

void FUN_00001770(undefined4 *param_1,undefined4 param_2)

{
  FUN_00001384(param_1,param_2);
  *param_1 = 0xa258;
  return;
}



// Function: FUN_0000179e at 0000179e
// Size: 58 bytes

undefined4 FUN_0000179e(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xa258;
    uVar1 = FUN_000014f8((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00001328((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_000017d8 at 000017d8
// Size: 70 bytes

void FUN_000017d8(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xc))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x94))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_0000181e at 0000181e
// Size: 70 bytes

void FUN_0000181e(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x10))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x94))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_00001864 at 00001864
// Size: 46 bytes

void FUN_00001864(undefined4 *param_1,undefined4 param_2)

{
  FUN_00001384(param_1,param_2);
  *param_1 = 0xa270;
  return;
}



// Function: FUN_00001892 at 00001892
// Size: 58 bytes

undefined4 FUN_00001892(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xa270;
    uVar1 = FUN_000014f8((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00001328((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_000018cc at 000018cc
// Size: 58 bytes

void FUN_000018cc(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x98))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_00001906 at 00001906
// Size: 70 bytes

void FUN_00001906(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xc))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x98))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_0000194c at 0000194c
// Size: 70 bytes

void FUN_0000194c(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x10))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[4] + 0x98))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_00001992 at 00001992
// Size: 46 bytes

void FUN_00001992(undefined4 *param_1,undefined4 param_2)

{
  FUN_00001384(param_1,param_2);
  *param_1 = 0xa288;
  return;
}



// Function: FUN_000019c0 at 000019c0
// Size: 58 bytes

undefined4 FUN_000019c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xa288;
    uVar1 = FUN_000014f8((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00001328((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_000019fa at 000019fa
// Size: 70 bytes

undefined4 FUN_000019fa(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0xc))();
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1[4] + 0x94))((int *)param_1[4],param_1[1]);
  }
  return uVar1;
}



// Function: FUN_00001a40 at 00001a40
// Size: 70 bytes

undefined4 FUN_00001a40(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x10))();
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1[4] + 0x94))((int *)param_1[4],param_1[1]);
  }
  return uVar1;
}



// Function: FUN_00001a86 at 00001a86
// Size: 8 bytes

void FUN_00001a86(void)

{
  return;
}



// Function: FUN_00001a8e at 00001a8e
// Size: 64 bytes

undefined4 FUN_00001a8e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short *extraout_A0;
  
  (**(code **)(*(int *)param_2[1] + 0x74))((int *)param_2[1],param_1);
  if (*(short *)*param_2 < *extraout_A0) {
    uVar1 = 0xffffffff;
  }
  else if (*extraout_A0 < *(short *)*param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001ace at 00001ace
// Size: 38 bytes

undefined4 FUN_00001ace(undefined4 param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 < *param_2) {
    uVar1 = 1;
  }
  else if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001af4 at 00001af4
// Size: 38 bytes

void FUN_00001af4(int *param_1,undefined2 param_2)

{
  undefined1 local_8 [2];
  undefined2 local_6;
  
  local_6 = param_2;
  (**(code **)(*param_1 + 0x88))(param_1,local_8);
  return;
}



// Function: FUN_00001b1a at 00001b1a
// Size: 92 bytes

undefined2 FUN_00001b1a(int *param_1)

{
  char cVar2;
  undefined2 uVar1;
  int extraout_A0;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_c = &stack0x00000008;
  local_8 = param_1;
  cVar2 = (**(code **)(*param_1 + 0x8c))(param_1,0x2648,&local_c,&local_10);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x74))(param_1,local_10);
    uVar1 = *(undefined2 *)(extraout_A0 + 2);
  }
  return uVar1;
}



// Function: FUN_00001b76 at 00001b76
// Size: 38 bytes

undefined4 FUN_00001b76(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 < *param_2) {
    uVar1 = 1;
  }
  else if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001b9c at 00001b9c
// Size: 64 bytes

undefined4 FUN_00001b9c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*(int *)param_2[1] + 0x74))((int *)param_2[1],param_1);
  if (*(int *)*param_2 < *extraout_A0) {
    uVar1 = 0xffffffff;
  }
  else if (*extraout_A0 < *(int *)*param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001bdc at 00001bdc
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001bdc(int *param_1,int param_2,undefined2 *param_3,ushort *param_4)

{
  undefined2 *puVar1;
  ushort *puVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined4 *puStack_10;
  int *piStack_c;
  int iStack_8;
  
  puVar2 = param_4;
  puVar1 = param_3;
  iStack_8 = 0;
  puStack_10 = &param_2;
  piStack_c = param_1;
  if (param_2 < 0) {
    *param_3 = (short)((uint)-param_2 >> 8);
    *param_4 = -(short)param_2 & 0xff;
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x8c))(param_1,0x2660,&puStack_10,&iStack_8);
    if (cVar3 == '\0') {
      *puVar1 = 0;
      *puVar2 = 0;
    }
    else {
      do {
        iStack_8 = iStack_8 + -1;
        if (iStack_8 == 0) break;
        (**(code **)(*param_1 + 0x74))(param_1,iStack_8);
      } while (*extraout_A0 == param_2);
      do {
        iStack_8 = iStack_8 + 1;
        (**(code **)(*param_1 + 0x74))(param_1,iStack_8);
        if (*extraout_A0_00 == param_2) {
          *puVar1 = *(undefined2 *)(extraout_A0_00 + 1);
          *puVar2 = *(ushort *)((int)extraout_A0_00 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      } while (*extraout_A0_00 == param_2);
    }
  }
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001bf0(void)

{
  char cVar1;
  ushort *unaff_D3;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 *unaff_A3;
  int *unaff_A4;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = unaff_A6 + 0xc;
  *(int **)(unaff_A6 + -8) = unaff_A4;
  if (*(int *)(unaff_A6 + 0xc) < 0) {
    *unaff_A3 = (short)((uint)-*(int *)(unaff_A6 + 0xc) >> 8);
    *unaff_D3 = -(short)*(undefined4 *)(unaff_A6 + 0xc) & 0xff;
  }
  else {
    cVar1 = (**(code **)(*unaff_A4 + 0x8c))();
    if (cVar1 == '\0') {
      *unaff_A3 = 0;
      *unaff_D3 = 0;
    }
    else {
      do {
        *(int *)(unaff_A6 + -4) = *(int *)(unaff_A6 + -4) + -1;
        if (*(int *)(unaff_A6 + -4) == 0) break;
        (**(code **)(*unaff_A4 + 0x74))();
      } while (*extraout_A0 == *(int *)(unaff_A6 + 0xc));
      *(int *)(unaff_A6 + -4) = *(int *)(unaff_A6 + -4) + 1;
      do {
        (**(code **)(*unaff_A4 + 0x74))();
        if (*extraout_A0_00 == *(int *)(unaff_A6 + 0xc)) {
          *unaff_A3 = *(undefined2 *)(extraout_A0_00 + 1);
          *unaff_D3 = *(ushort *)((int)extraout_A0_00 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(int *)(unaff_A6 + -4) = *(int *)(unaff_A6 + -4) + 1;
      } while (*extraout_A0_00 == *(int *)(unaff_A6 + 0xc));
    }
  }
  return;
}



// Function: FUN_00001c00 at 00001c00
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c00(void)

{
  char cVar1;
  ushort *unaff_D3;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 *unaff_A3;
  int *unaff_A4;
  int unaff_A6;
  
  if (*(int *)(unaff_A6 + 0xc) < 0) {
    *unaff_A3 = (short)((uint)-*(int *)(unaff_A6 + 0xc) >> 8);
    *unaff_D3 = -(short)*(undefined4 *)(unaff_A6 + 0xc) & 0xff;
  }
  else {
    cVar1 = (**(code **)(*unaff_A4 + 0x8c))();
    if (cVar1 == '\0') {
      *unaff_A3 = 0;
      *unaff_D3 = 0;
    }
    else {
      do {
        *(int *)(unaff_A6 + -4) = *(int *)(unaff_A6 + -4) + -1;
        if (*(int *)(unaff_A6 + -4) == 0) break;
        (**(code **)(*unaff_A4 + 0x74))();
      } while (*extraout_A0 == *(int *)(unaff_A6 + 0xc));
      *(int *)(unaff_A6 + -4) = *(int *)(unaff_A6 + -4) + 1;
      do {
        (**(code **)(*unaff_A4 + 0x74))();
        if (*extraout_A0_00 == *(int *)(unaff_A6 + 0xc)) {
          *unaff_A3 = *(undefined2 *)(extraout_A0_00 + 1);
          *unaff_D3 = *(ushort *)((int)extraout_A0_00 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(int *)(unaff_A6 + -4) = *(int *)(unaff_A6 + -4) + 1;
      } while (*extraout_A0_00 == *(int *)(unaff_A6 + 0xc));
    }
  }
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 28 bytes

void FUN_00001c10(void)

{
  ushort *unaff_D3;
  int unaff_A6;
  
  *unaff_D3 = -(short)*(undefined4 *)(unaff_A6 + 0xc) & 0xff;
  return;
}



// Function: FUN_00001cc0 at 00001cc0
// Size: 40 bytes

int FUN_00001cc0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *extraout_A0;
  
  if (param_2._2_2_ < 0) {
    uVar1 = (uint)param_2._2_2_;
  }
  else {
    if (0 < param_2._2_2_) {
      for (iVar3 = 1; iVar2 = (**(code **)(*param_1 + 0x58))(), iVar3 <= iVar2; iVar3 = iVar3 + 1) {
        (**(code **)(*param_1 + 0x74))(param_1,iVar3);
        if ((param_2._0_2_ == *(short *)(extraout_A0 + 1)) &&
           (param_2._2_2_ == *(short *)((int)extraout_A0 + 6))) {
          return *extraout_A0;
        }
      }
    }
    uVar1 = (int)param_2._2_2_ | (int)param_2._0_2_ << 8;
  }
  return -uVar1;
}



// Function: FUN_00001ce8 at 00001ce8
// Size: 8 bytes

int FUN_00001ce8(void)

{
  int iVar1;
  short unaff_D3w;
  int unaff_D4;
  short unaff_D5w;
  int *extraout_A0;
  int *unaff_A3;
  
  while (((**(code **)(*unaff_A3 + 0x74))(), unaff_D5w != *(short *)(extraout_A0 + 1) ||
         (unaff_D3w != *(short *)((int)extraout_A0 + 6)))) {
    unaff_D4 = unaff_D4 + 1;
    iVar1 = (**(code **)(*unaff_A3 + 0x58))();
    if (iVar1 < unaff_D4) {
      return -((int)unaff_D3w | (int)unaff_D5w << 8);
    }
  }
  return *extraout_A0;
}



// Function: FUN_00001cf0 at 00001cf0
// Size: 70 bytes

int FUN_00001cf0(void)

{
  int iVar1;
  short unaff_D3w;
  int unaff_D4;
  short unaff_D5w;
  int *extraout_A0;
  int in_A1;
  int *unaff_A3;
  
  while (((**(code **)(in_A1 + 0x74))(), unaff_D5w != *(short *)(extraout_A0 + 1) ||
         (unaff_D3w != *(short *)((int)extraout_A0 + 6)))) {
    unaff_D4 = unaff_D4 + 1;
    iVar1 = (**(code **)(*unaff_A3 + 0x58))();
    if (iVar1 < unaff_D4) {
      return -((int)unaff_D3w | (int)unaff_D5w << 8);
    }
    in_A1 = *unaff_A3;
  }
  return *extraout_A0;
}



// Function: FUN_00001d36 at 00001d36
// Size: 50 bytes

void FUN_00001d36(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  short sStack_8;
  short sStack_6;
  
  iVar2 = 1;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x58))();
    if (iVar1 < iVar2) break;
    (**(code **)(*param_1 + 0x70))(param_1,iVar2,&uStack_c,1);
    if ((param_3._0_2_ == sStack_8) && (param_3._2_2_ <= sStack_6)) {
      sStack_6 = sStack_6 + 1;
      (**(code **)(*param_1 + 100))(param_1,iVar2,&uStack_c,1);
    }
    iVar2 = iVar2 + 1;
  }
  uStack_c = param_2;
  sStack_6 = param_3._2_2_;
  (**(code **)(*param_1 + 0x88))(param_1,&uStack_c);
  return;
}



// Function: FUN_00001d68 at 00001d68
// Size: 94 bytes

void FUN_00001d68(void)

{
  int iVar1;
  int unaff_D3;
  short unaff_D4w;
  short unaff_D5w;
  int *unaff_A2;
  int unaff_A6;
  undefined1 in_ZF;
  
  while( true ) {
    if (((bool)in_ZF) && (unaff_D4w <= *(short *)(unaff_A6 + -2))) {
      *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -2) + 1;
      (**(code **)(*unaff_A2 + 100))();
    }
    unaff_D3 = unaff_D3 + 1;
    iVar1 = (**(code **)(*unaff_A2 + 0x58))();
    if (iVar1 < unaff_D3) break;
    (**(code **)(*unaff_A2 + 0x70))();
    in_ZF = unaff_D5w == *(short *)(unaff_A6 + -4);
  }
  *(undefined4 *)(unaff_A6 + -8) = *(undefined4 *)(unaff_A6 + 0xc);
  *(short *)(unaff_A6 + -4) = unaff_D5w;
  *(short *)(unaff_A6 + -2) = unaff_D4w;
  (**(code **)(*unaff_A2 + 0x88))();
  return;
}



// Function: FUN_00001dc8 at 00001dc8
// Size: 6 bytes

void FUN_00001dc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sStack_10;
  short sStack_e;
  undefined1 auStack_c [4];
  short sStack_8;
  short sStack_6;
  
  DAT_00004e75 = DAT_00004e75 + -0x5e;
  (**(code **)(*param_1 + 0x90))(param_1,param_2,&sStack_10,&sStack_e);
  iVar2 = 1;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x58))();
    if (iVar1 < iVar2) break;
    (**(code **)(*param_1 + 0x70))(param_1,iVar2,auStack_c,1);
    if (sStack_8 == sStack_10) {
      if (sStack_6 == sStack_e) {
        (**(code **)(*param_1 + 0x68))(param_1,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      else if (sStack_e < sStack_6) {
        sStack_6 = sStack_6 + -1;
        (**(code **)(*param_1 + 100))(param_1,iVar2,auStack_c,1);
      }
    }
    iVar2 = iVar2 + 1;
  }
  return;
}



// Function: FUN_00001dce at 00001dce
// Size: 186 bytes

void FUN_00001dce(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short local_10;
  short local_e;
  undefined1 auStack_c [4];
  short local_8;
  short local_6;
  
  (**(code **)(*param_1 + 0x90))(param_1,param_2,&local_10,&local_e);
  iVar2 = 1;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x58))();
    if (iVar1 < iVar2) break;
    (**(code **)(*param_1 + 0x70))(param_1,iVar2,auStack_c,1);
    if (local_8 == local_10) {
      if (local_6 == local_e) {
        (**(code **)(*param_1 + 0x68))(param_1,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      else if (local_e < local_6) {
        local_6 = local_6 + -1;
        (**(code **)(*param_1 + 100))(param_1,iVar2,auStack_c,1);
      }
    }
    iVar2 = iVar2 + 1;
  }
  return;
}



// Function: FUN_00001e88 at 00001e88
// Size: 38 bytes

undefined4 FUN_00001e88(undefined4 *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 < *(short *)*param_1) {
    uVar1 = 0xffffffff;
  }
  else if (*(short *)*param_1 < *param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001eae at 00001eae
// Size: 36 bytes

void FUN_00001eae(int *param_1)

{
  undefined1 auStack_8 [4];
  
  (**(code **)(*param_1 + 0xb4))(param_1,0x2678,&stack0x00000008,auStack_8);
  return;
}



// Function: FUN_00001ed2 at 00001ed2
// Size: 22 bytes

undefined4 FUN_00001ed2(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(short *)*param_3 < *(short *)*param_2) {
    uVar1 = 1;
  }
  else if (*(short *)*param_2 < *(short *)*param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001ee8 at 00001ee8
// Size: 20 bytes

undefined4 FUN_00001ee8(void)

{
  short in_D0w;
  undefined4 uVar1;
  short in_D1w;
  char in_NF;
  bool in_ZF;
  char in_VF;
  
  if (in_ZF || in_VF != in_NF) {
    if (in_D0w < in_D1w) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00001efc at 00001efc
// Size: 16 bytes

void FUN_00001efc(void)

{
  DAT_0000a1ae = 1;
  return;
}



// Function: FUN_00001f0c at 00001f0c
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001f0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001f98 at 00001f98
// Size: 14 bytes

void FUN_00001f98(void)

{
  DAT_0000a1ae = 0;
  return;
}



// Function: FUN_00001fa6 at 00001fa6
// Size: 14 bytes

undefined1 FUN_00001fa6(void)

{
  return DAT_0000a1ae;
}



// Function: FUN_00001fb4 at 00001fb4
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001fb4(void)

{
  FUN_00001efc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001fc4 at 00001fc4
// Size: 14 bytes

void FUN_00001fc4(void)

{
  DAT_0000a1ac = 0;
  return;
}



// Function: FUN_00001fd2 at 00001fd2
// Size: 14 bytes

undefined1 FUN_00001fd2(void)

{
  return DAT_0000a1ac;
}



// Function: FUN_00001fe0 at 00001fe0
// Size: 90 bytes

bool FUN_00001fe0(undefined4 param_1)

{
  int *extraout_A0;
  bool bVar1;
  undefined1 auStack_8 [2];
  short local_6;
  
  FUN_000020c2(param_1,auStack_8,&local_6);
  if (extraout_A0 == (int *)0x0) {
    bVar1 = false;
  }
  else if ((local_6 < 1) || (0x1f < local_6)) {
    bVar1 = true;
  }
  else {
    bVar1 = (*(int *)(*extraout_A0 + 10) >> ((int)local_6 & 0x3fU) & 1U) != 0;
  }
  return bVar1;
}



// Function: FUN_0000203a at 0000203a
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000203a(undefined2 param_1)

{
  (**(code **)(*_DAT_00025a34 + 0x94))(_DAT_00025a34,param_1);
  return;
}



// Function: FUN_0000205a at 0000205a
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000205a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*_DAT_00025a34 + 0x90))(_DAT_00025a34,param_1,param_2,param_3);
  return;
}



// Function: FUN_0000207e at 0000207e
// Size: 66 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000207e(undefined4 param_1,undefined2 param_2)

{
  int extraout_A0;
  undefined1 auStack_8 [2];
  undefined1 local_6 [2];
  
  func_0x00007350(param_2,0xa17c);
  FUN_000020c2(param_1,auStack_8,(short)local_6);
  if (extraout_A0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000020c2 at 000020c2
// Size: 54 bytes

void FUN_000020c2(undefined4 param_1,short *param_2,undefined2 param_3)

{
  FUN_0000205a(param_1,(short)param_2,param_3);
  if (*param_2 != 0) {
    FUN_000021e8();
  }
  return;
}



// Function: FUN_000020f8 at 000020f8
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000020f8(undefined4 param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined1 auStack_8 [2];
  undefined1 local_6 [2];
  
  FUN_000020c2(param_1,auStack_8,local_6);
  if (extraout_A0 == 0) {
    return 0;
  }
  if (param_2._0_1_ != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002138 at 00002138
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000021c4 at 000021c4
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000021c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*_DAT_00025a38 + 0xa8))(_DAT_00025a38,param_1);
  return iVar1 != 0;
}



// Function: FUN_000021e8 at 000021e8
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000021e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000221c at 0000221c
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000221c(void)

{
  int extraout_A0;
  
  FUN_00001b1a(_DAT_00025a3c);
  FUN_000021e8();
  if (extraout_A0 == 0) {
    FUN_00002138();
  }
  return;
}



// Function: FUN_00002260 at 00002260
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002260(undefined4 *param_1)

{
  (**(code **)(*_DAT_00025a38 + 0xb0))(_DAT_00025a38,param_1);
  FUN_00001af4(_DAT_00025a3c,*(undefined2 *)*param_1);
  return;
}



// Function: FUN_00002294 at 00002294
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002294(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000022d8 at 000022d8
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022d8(int *param_1)

{
  if (*(int *)(*param_1 + 6) == _DAT_00025a30) {
    *(undefined2 *)(*param_1 + 2) = 0;
  }
  return;
}



// Function: FUN_000022fc at 000022fc
// Size: 20 bytes

void FUN_000022fc(void)

{
  int *in_stack_00000010;
  
  *(undefined2 *)(*in_stack_00000010 + 2) = 0;
  return;
}



// Function: FUN_00002310 at 00002310
// Size: 88 bytes

undefined4 FUN_00002310(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  char cVar3;
  undefined4 uVar2;
  
  cVar3 = FUN_00001d68(param_1);
  if (cVar3 == '\0') {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)*param_1;
    if (sVar1 == 1) {
      uVar2 = 0;
    }
    else if ((param_2._0_1_ == '\0') || ((-1 < sVar1 && (sVar1 < 0xec)))) {
      if ((sVar1 < 1) || (0x3f < sVar1)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_00002368 at 00002368
// Size: 18 bytes

void FUN_00002368(undefined2 *param_1)

{
  *param_1 = 0;
  return;
}



// Function: FUN_0000237a at 0000237a
// Size: 78 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000237a(short *param_1,int *param_2)

{
  *(int **)(param_1 + *param_1 * 2 + 1) = param_2;
  *(byte *)((int)param_1 + *param_1 + 0x102) = (byte)*(undefined4 *)(*param_2 + 10) & 1;
  *(undefined4 *)(param_1 + *param_1 * 2 + 0xa1) = *(undefined4 *)(*param_2 + 6);
  *param_1 = *param_1 + 1;
  *(undefined4 *)(*param_2 + 6) = _DAT_00025a30;
  *(undefined4 *)(*param_2 + 10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000023fa at 000023fa
// Size: 122 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000023fa(short *param_1)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  
  sVar2 = 0;
  while( true ) {
    if (*param_1 <= sVar2) {
      return;
    }
    piVar1 = *(int **)(param_1 + sVar2 * 2 + 1);
    uVar3 = 0;
    if (*(uint *)(*piVar1 + 10) != 0) {
      uVar3 = *(uint *)(*piVar1 + 10) | 1;
      *(uint *)(*piVar1 + 10) = uVar3;
    }
    if (((uVar3 & 1) == 1) != (bool)*(char *)((int)param_1 + sVar2 + 0x102)) {
      FUN_00001fb4();
    }
    *(undefined4 *)(*piVar1 + 6) = *(undefined4 *)(param_1 + sVar2 * 2 + 0xa1);
    if (*(short *)(*piVar1 + 2) == 0) break;
    sVar2 = sVar2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002476 at 00002476
// Size: 192 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002476(code *param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  undefined1 auStack_2aa [578];
  int local_68 [25];
  
  FUN_00002368((char)auStack_2aa);
  FUN_000025f0((short)local_68);
  FUN_0000266c((short)local_68);
  uVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    cVar1 = FUN_00002310((short)uVar2);
    if (cVar1 != '\0') {
      FUN_0000237a((short)auStack_2aa,(char)uVar2);
    }
    FUN_0000267e((char)local_68);
    uVar2 = extraout_A0_00;
  }
  FUN_00002620((short)local_68);
  (*param_1)(param_2);
  FUN_000023fa((short)auStack_2aa);
  cVar1 = FUN_00001fd2();
  if (cVar1 != '\0') {
    cVar1 = FUN_00001ce8();
    if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00001fc4();
  }
  FUN_00001f98();
  return;
}



// Function: FUN_00002538 at 00002538
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00002538(undefined2 param_1,undefined2 param_2)

{
  int extraout_A0;
  undefined1 auStack_8 [2];
  undefined1 local_6 [2];
  
  FUN_000020c2(param_1,(short)auStack_8,local_6);
  if (extraout_A0 != 0) {
    func_0x00007310(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00002576 at 00002576
// Size: 44 bytes

void FUN_00002576(undefined4 param_1)

{
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  func_0x00007658();
  FUN_00002538(param_1,local_104);
  return;
}



// Function: FUN_000025a2 at 000025a2
// Size: 48 bytes

void FUN_000025a2(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  if (param_3._2_1_ != '\0') {
    param_2 = param_3._0_2_;
  }
  FUN_00002576(param_1,param_2);
  return;
}



// Function: FUN_000025d2 at 000025d2
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_000025d2(undefined4 param_1)

{
  if (param_1._0_2_ == 0) {
    if (FUN_00000a20 == 0) {
      return 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000025f0 at 000025f0
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025f0(undefined4 *param_1)

{
  FUN_00001864(param_1,_DAT_00025a38);
  *param_1 = 0xa0c4;
  return;
}



// Function: FUN_00002620 at 00002620
// Size: 58 bytes

undefined4 FUN_00002620(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xa0c4;
    uVar1 = FUN_00001892((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00001328((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_0000265a at 0000265a
// Size: 18 bytes

void FUN_0000265a(undefined4 param_1)

{
  FUN_000018cc(param_1);
  return;
}



// Function: FUN_0000266c at 0000266c
// Size: 18 bytes

void FUN_0000266c(undefined4 param_1)

{
  FUN_00001906(param_1);
  return;
}



// Function: FUN_0000267e at 0000267e
// Size: 18 bytes

void FUN_0000267e(undefined4 param_1)

{
  FUN_0000194c(param_1);
  return;
}



// Function: FUN_00002690 at 00002690
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002690(int *param_1)

{
  char cVar1;
  
  FUN_000015a2(param_1);
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    FUN_0000265a(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000026e0 at 000026e0
// Size: 72 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000026e0(int param_1)

{
  undefined1 auStack_304 [768];
  
  func_0x00007320(auStack_304,0xa164);
  FUN_00000dd8(param_1);
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  FUN_00001f0c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000027d6 at 000027d6
// Size: 18 bytes

void FUN_000027d6(int param_1,undefined4 param_2)

{
  *(undefined2 *)(param_1 + 6) = param_2._0_2_;
  return;
}



// Function: FUN_000027e8 at 000027e8
// Size: 16 bytes

undefined2 FUN_000027e8(int param_1)

{
  return *(undefined2 *)(param_1 + 6);
}



// Function: FUN_000027f8 at 000027f8
// Size: 18 bytes

void FUN_000027f8(int param_1,undefined4 param_2)

{
  *(undefined2 *)(param_1 + 10) = param_2._0_2_;
  return;
}



// Function: FUN_0000280a at 0000280a
// Size: 16 bytes

undefined2 FUN_0000280a(int param_1)

{
  return *(undefined2 *)(param_1 + 10);
}



// Function: FUN_0000281a at 0000281a
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000281a(int param_1)

{
  if (((*(short *)(param_1 + 4) == *(short *)(param_1 + 6)) || (*(short *)(param_1 + 6) == -1)) &&
     ((*(short *)(param_1 + 8) == *(short *)(param_1 + 10) || (*(short *)(param_1 + 10) == -1)))) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000028be at 000028be
// Size: 24 bytes

void FUN_000028be(int param_1)

{
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  return;
}



// Function: FUN_000028d6 at 000028d6
// Size: 162 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028d6(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 local_308 [256];
  undefined1 local_208 [512];
  undefined4 local_8;
  
  local_8 = 0;
  uVar3 = 0;
  puVar2 = local_308;
  func_0x00007320((short)puVar2,0xa164);
  cVar1 = func_0x00007308((short)param_2,(short)local_308,(short)((uint)puVar2 >> 0x10),uVar3);
  if (cVar1 != '\0') {
    local_208[0] = 0;
    (**(code **)(*_DAT_000266a8 + 0x29c))((short)_DAT_000266a8,(short)local_208);
    func_0x00007318((short)param_2,local_308[0]);
    func_0x000072e8(param_2,(short)local_208,0xff);
  }
  if (DAT_00025b28 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002abc at 00002abc
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002abc(undefined4 param_1,char *param_2)

{
  int extraout_A0;
  
  FUN_000021e8();
  if ((extraout_A0 != 0) && (*param_2 != '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002b6c at 00002b6c
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b6c(undefined4 param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined1 local_8 [2];
  short local_6;
  
  (**(code **)(*_DAT_00025a34 + 0x90))(_DAT_00025a34,param_2,(short)&local_6,(short)local_8);
  if (local_6 != 0) {
    FUN_000021e8();
    if (extraout_A0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00001dce((short)_DAT_00025a34,(short)param_2);
  }
  return;
}



// Function: FUN_00002bd6 at 00002bd6
// Size: 76 bytes

void FUN_00002bd6(int *param_1,int *param_2)

{
  if ((param_2 == (int *)0x0) || (*(short *)((int)param_2 + 0x22) != 9)) {
    func_0x00005be0((short)param_1,(char)param_2);
  }
  else {
    (**(code **)(*param_2 + 0x7c))();
    (**(code **)(*param_1 + 0xd0))();
  }
  return;
}



// Function: FUN_00002c22 at 00002c22
// Size: 106 bytes

void FUN_00002c22(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xd4))();
  (**(code **)(*param_1 + 0xdc))();
  if (param_1[9] == 0) {
    param_1[9] = param_1[8];
  }
  if (param_1[9] != 0) {
    cVar1 = (**(code **)(*(int *)param_1[9] + 0xc4))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)param_1[9] + 0xcc))();
    }
  }
  return;
}



// Function: FUN_00002c8c at 00002c8c
// Size: 24 bytes

void FUN_00002c8c(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



// Function: FUN_00002ca4 at 00002ca4
// Size: 286 bytes

void FUN_00002ca4(int *param_1,undefined2 param_2)

{
  bool bVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int local_68 [25];
  
  func_0x00004b38((short)local_68,param_2);
  func_0x00004b48(local_68);
  piVar3 = extraout_A0;
  do {
    cVar2 = (**(code **)(local_68[0] + 8))();
    if (cVar2 == '\0') {
      FUN_00002f00((short)local_68);
      return;
    }
    cVar2 = (**(code **)(*piVar3 + 0x74))();
    if (((cVar2 == '\0') || (cVar2 = (**(code **)(*piVar3 + 0x338))(), cVar2 == '\0')) ||
       (cVar2 = (**(code **)(*piVar3 + 0xa4))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_1[8] == 0) && (bVar1)) {
      param_1[8] = (int)piVar3;
    }
    cVar2 = (**(code **)(*piVar3 + 0xd0))();
    if (cVar2 == '\0') {
      if (((*(char *)((int)param_1 + 0x1f) != '\0') && (param_1[9] == 0)) && (bVar1)) {
        param_1[9] = (int)piVar3;
        FUN_00002f00((short)local_68);
        return;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x1f) = 1;
    }
    if (*(char *)((int)param_1 + 0x1e) != '\0') {
      (**(code **)(*param_1 + 0xd8))((short)param_1,(short)piVar3);
    }
    func_0x00004b50((char)local_68);
    piVar3 = extraout_A0_00;
  } while( true );
}



// Function: FUN_00002dc2 at 00002dc2
// Size: 18 bytes

void FUN_00002dc2(undefined4 param_1)

{
  func_0x00000df0(param_1);
  return;
}



// Function: FUN_00002dd4 at 00002dd4
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002dd4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002ede at 00002ede
// Size: 34 bytes

void FUN_00002ede(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))(param_1,param_1[2]);
  return;
}



// Function: FUN_00002f00 at 00002f00
// Size: 58 bytes

undefined4 FUN_00002f00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x7d38;
    uVar1 = FUN_0000179e((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00001328((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00002f3a at 00002f3a
// Size: 16 bytes

undefined1 FUN_00002f3a(int param_1)

{
  return *(undefined1 *)(param_1 + 0x178);
}



// Function: FUN_00002f4a at 00002f4a
// Size: 30 bytes

void FUN_00002f4a(int *param_1)

{
  *(undefined2 *)((int)param_1 + 0x176) = 0;
  (**(code **)(*param_1 + 0x10))();
  return;
}



// Function: FUN_00002f68 at 00002f68
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00003098) */

void FUN_00002f68(int param_1)

{
  *(short *)(param_1 + 0x176) = *(short *)(param_1 + 0x176) + 1;
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x176);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_1 + 0x172);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000030a0 at 000030a0
// Size: 42 bytes

void FUN_000030a0(int *param_1,undefined2 *param_2)

{
  short sVar1;
  undefined2 *puVar2;
  
  (**(code **)(*param_1 + 0xc))();
  sVar1 = 0x22;
  puVar2 = (undefined2 *)((int)param_1 + 0x17a);
  do {
    *param_2 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != -1);
  return;
}



// Function: FUN_000030ca at 000030ca
// Size: 42 bytes

void FUN_000030ca(int *param_1,undefined2 *param_2)

{
  short sVar1;
  undefined2 *puVar2;
  
  (**(code **)(*param_1 + 0x10))();
  sVar1 = 0x22;
  puVar2 = (undefined2 *)((int)param_1 + 0x17a);
  do {
    *param_2 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != -1);
  return;
}



