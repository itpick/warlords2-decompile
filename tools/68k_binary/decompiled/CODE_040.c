// Warlords II - Decompiled 68k Code
// Segment: CODE_040
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000244 at 00000244
// Size: 564 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_00000244(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  short *extraout_A0;
  undefined4 extraout_A0_00;
  short *extraout_A0_01;
  short *extraout_A0_02;
  undefined4 extraout_A0_03;
  short *extraout_A0_04;
  int *piVar2;
  undefined1 extraout_A0b;
  undefined4 *extraout_A0_05;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [6];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = param_2[3];
  local_38[3] = 2;
  local_38[4] = 2;
  uVar4 = (undefined2)((uint)(local_38 + 3) >> 0x10);
  uVar7 = (undefined1)((uint)&local_14 >> 0x10);
  uVar6 = 0x88;
  func_0x00003948((short)&local_14,(char)(local_38 + 3));
  uVar5 = (undefined1)((uint)(param_1 + 0xba) >> 0x10);
  uVar3 = 0x96;
  func_0x00007220((short)(param_1 + 0xba),uVar7,uVar4);
  sVar1 = *extraout_A0;
  func_0x00007260((short)param_1 + 0x8c,uVar3);
  uVar4 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  func_0x00007220((char)extraout_A0_00,uVar5,uVar6);
  local_3c = (int)sVar1 + (int)*extraout_A0_01;
  local_38[0] = func_0x00003978((short)&local_14,uVar4);
  if (local_38[0] < local_3c) {
    piVar2 = local_38;
  }
  else {
    piVar2 = &local_3c;
  }
  local_18 = *piVar2;
  iVar8 = param_1 + 0xba;
  uVar3 = 0xfc;
  func_0x00007220((short)iVar8);
  sVar1 = *extraout_A0_02;
  func_0x00007260((short)param_1 + 0x8c,uVar3);
  uVar4 = (undefined2)((uint)extraout_A0_03 >> 0x10);
  func_0x00007220((char)extraout_A0_03,(short)((uint)iVar8 >> 0x10));
  local_44 = (int)sVar1 + (int)*extraout_A0_04;
  local_40 = func_0x00003978((char)&local_14,uVar4);
  if (local_40 < local_44) {
    piVar2 = &local_40;
  }
  else {
    piVar2 = &local_44;
  }
  local_1c = *piVar2;
  if ((*(int *)(param_1 + 0x2a) < local_14) ||
     (local_c < ((local_1c + *(int *)(param_1 + 0x2a)) - (int)*(short *)(param_1 + 0xba)) + -1)) {
    if (*(int *)(param_1 + 0x2a) < local_14) {
      *param_3 = local_14;
    }
    else {
      *param_3 = (local_c - local_1c) + (int)*(short *)(param_1 + 0xb6);
    }
  }
  else {
    *param_3 = *(int *)(param_1 + 0x2a);
  }
  if ((*(int *)(param_1 + 0x2e) < local_10) ||
     (local_8 < ((local_18 + *(int *)(param_1 + 0x2e)) - (int)*(short *)(param_1 + 0xbc)) + -1)) {
    if (*(int *)(param_1 + 0x2e) < local_10) {
      param_3[1] = local_10;
    }
    else {
      param_3[1] = (local_8 - local_18) + (int)*(short *)(param_1 + 0xb8);
    }
  }
  else {
    param_3[1] = *(int *)(param_1 + 0x2e);
  }
  local_38[5] = (int)*(short *)(param_1 + 0xba);
  local_20 = (int)*(short *)(param_1 + 0xbc);
  local_38[1] = 1;
  local_38[2] = 1;
  uVar9 = SUB41(local_38 + 1,0);
  uVar4 = SUB42(&local_4c,0);
  uVar7 = SUB41(local_38 + 5,0);
  uVar6 = SUB41(auStack_54,0);
  uVar5 = SUB41(&local_1c,0);
  uVar3 = SUB41(auStack_5c,0);
  func_0x00003918((short)param_3,(short)((uint)auStack_5c >> 0x10),(short)((uint)&local_1c >> 0x10),
                  (char)((uint)auStack_54 >> 0x10),(short)((uint)(local_38 + 5) >> 0x10),
                  (char)((uint)&local_4c >> 0x10),(short)((uint)(local_38 + 1) >> 0x10));
  func_0x000038b8(extraout_A0b,uVar3,uVar5,uVar6,uVar7,uVar4,uVar9);
  func_0x000038c0((char)auStack_5c);
  uVar4 = (undefined2)((uint)auStack_54 >> 0x10);
  func_0x000038c0((char)auStack_54);
  func_0x00003918((char)param_3,uVar4);
  *extraout_A0_05 = local_4c;
  extraout_A0_05[1] = local_48;
  return;
}



// Function: FUN_00000478 at 00000478
// Size: 30 bytes

void FUN_00000478(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x420))(param_1,param_2,param_3);
  return;
}



// Function: FUN_00000496 at 00000496
// Size: 198 bytes

void FUN_00000496(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [24];
  
  for (sVar3 = 0; sVar3 < 3; sVar3 = sVar3 + 1) {
    func_0x00003980(sVar3 * 0x10 + param_1 + 0xc2,auStack_1c);
    cVar2 = func_0x000038e8(param_1 + 0x32,auStack_1c);
    if (cVar2 != '\0') break;
  }
  if (sVar3 == 3) {
    sVar3 = 2;
  }
  func_0x000038b8(param_1 + 0x2a,&local_24,param_1 + 0x32);
  uVar1 = *(undefined4 *)(param_1 + 0x2e);
  iVar4 = sVar3 * 0x10 + param_1;
  *(undefined4 *)(iVar4 + 0xc2) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined4 *)(iVar4 + 0xc6) = uVar1;
  *(undefined4 *)(iVar4 + 0xca) = local_24;
  *(undefined4 *)(iVar4 + 0xce) = local_20;
  sVar3 = sVar3 + 1;
  if (sVar3 == 3) {
    sVar3 = 0;
  }
  param_1 = sVar3 * 0x10 + param_1;
  *param_3 = *(undefined4 *)(param_1 + 0xc2);
  param_3[1] = *(undefined4 *)(param_1 + 0xc6);
  param_3[2] = *(undefined4 *)(param_1 + 0xca);
  param_3[3] = *(undefined4 *)(param_1 + 0xce);
  return;
}



// Function: FUN_0000055c at 0000055c
// Size: 428 bytes

int FUN_0000055c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  undefined2 extraout_A0w;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 8);
  if (param_2 != *(int *)(param_1 + 0x20)) {
    (**(code **)(*piVar1 + 0x188))((short)piVar1,(char)*(undefined4 *)(param_1 + 0x20));
    uVar5 = (undefined2)((uint)extraout_A0 >> 0x10);
    (**(code **)(*extraout_A0 + 0x20c))((char)extraout_A0,0x746c);
    if (extraout_A0_00 != 0) {
      uVar9 = (undefined2)((uint)extraout_A0_00 >> 0x10);
      uVar8 = SUB42(extraout_A0,0);
      (**(code **)(*extraout_A0 + 0x200))(uVar8,(short)extraout_A0_00);
      (**(code **)(*extraout_A0 + 0x3c4))((char)extraout_A0,0x62,uVar5,uVar9);
      (**(code **)(*extraout_A0 + 0x310))(uVar8,(short)auStack_24);
      local_3c = 4;
      local_38 = 4;
      func_0x00003948(auStack_24,(short)&local_3c);
      (**(code **)(*extraout_A0 + 0x1ac))(uVar8,(short)auStack_24);
    }
  }
  *(int *)(param_1 + 0x20) = param_2;
  (**(code **)(*piVar1 + 0x188))((short)piVar1,(char)*(undefined4 *)(param_1 + 0x20));
  iVar2 = 0;
  if (extraout_A0_01 != (int *)0x0) {
    uVar5 = SUB42(extraout_A0_01,0);
    (**(code **)(*extraout_A0_01 + 0x20c))(uVar5,0x6c);
    iVar2 = extraout_A0_02;
    if (extraout_A0_02 == 0) {
      uVar10 = (undefined2)((uint)auStack_34 >> 0x10);
      uVar9 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      uVar8 = uVar9;
      (**(code **)(*extraout_A0_01 + 0x310))(uVar5,(char)auStack_34);
      local_44 = 0xfffffffc;
      local_40 = 0xfffffffc;
      uVar7 = (undefined1)((uint)&local_44 >> 0x10);
      uVar6 = (undefined2)((uint)auStack_34 >> 0x10);
      uVar4 = 0x72;
      func_0x00003948((char)auStack_34,(short)&local_44);
      puVar3 = auStack_34;
      (**(code **)(*extraout_A0_01 + 0x1ac))(uVar5,(short)puVar3,uVar6,uVar7,uVar8,uVar10);
      local_14 = 4;
      local_10 = 4;
      local_c = 4;
      local_8 = 4;
      (**(code **)(*extraout_A0_01 + 0x3c4))
                (extraout_A0_01,(short)&local_14,uVar9,(short)((uint)puVar3 >> 0x10),uVar4);
      func_0x000073b0(10);
      uVar8 = 0;
      if (extraout_A0_03 != 0) {
        func_0x00006f28((char)extraout_A0_03);
        uVar8 = extraout_A0w;
      }
      uVar4 = 0xe8;
      func_0x00005570(uVar8,0x746c);
      iVar2 = (**(code **)(*extraout_A0_01 + 0x1fc))(uVar5,uVar8,uVar4);
    }
  }
  return iVar2;
}



// Function: FUN_00000708 at 00000708
// Size: 182 bytes

undefined4 FUN_00000708(int *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined1 uVar2;
  undefined1 auStack_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000056a0((short)param_1,param_2);
  (**(code **)(*param_1 + 0xa0))();
  (**(code **)(*extraout_A0 + 0x400))();
  uVar1 = 0;
  if (extraout_A0_00 != 0) {
    uVar2 = 0x5a;
    func_0x00003980(param_2,(char)auStack_14);
    local_c = 0;
    local_8 = 0;
    func_0x000048f0(extraout_A0_00,0x616b,(short)((uint)&local_c >> 0x10),uVar2);
    func_0x00001bf0(extraout_A0_01);
    uVar1 = func_0x00004978();
  }
  return uVar1;
}



// Function: FUN_000007be at 000007be
// Size: 190 bytes

uint FUN_000007be(int *param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  
  sVar3 = (short)param_1;
  uVar1 = func_0x00005218(sVar3,param_2);
  if (*(int *)((int)param_1 + 0xa6) != 0) {
    (**(code **)(*param_1 + 0x178))(sVar3,(char)*(undefined4 *)((int)param_1 + 0xa6));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0xa6) + 0x4c))();
    *(undefined4 *)((int)param_1 + 0xa6) = 0;
  }
  if (*(int *)((int)param_1 + 0x1aa) != 0) {
    (**(code **)(*param_1 + 0x178))(sVar3,(char)*(undefined4 *)((int)param_1 + 0x1aa));
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x4c))();
    *(undefined4 *)((int)param_1 + 0x1aa) = 0;
  }
  if ((((param_3._0_1_ != '\0') && (uVar1 = func_0x000038e0(sVar3 + 0x32,0xf4), (char)uVar1 != '\0')
       ) && (uVar2 = (uint)*(byte *)(param_1 + 0x29), uVar1 = uVar2, *(byte *)(param_1 + 0x29) != 0)
      ) && ((uVar1 = 0, uVar2 != 1 && (uVar1 = uVar2 - 2, uVar1 == 0)))) {
    uVar1 = func_0x00004838((char)param_1);
  }
  return uVar1;
}



