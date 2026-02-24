// Warlords II - Decompiled 68k Code
// Segment: CODE_033
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(undefined4 param_1,undefined4 param_2)

{
  func_0x00002430(param_1,param_2,_DAT_000266a8);
  return;
}



// Function: FUN_0000002e at 0000002e
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000002e(undefined4 param_1,undefined4 param_2)

{
  func_0x00002430(param_1,param_2,_DAT_000266a8);
  return;
}



// Function: FUN_00000050 at 00000050
// Size: 14 bytes

void FUN_00000050(void)

{
  return;
}



// Function: FUN_0000005e at 0000005e
// Size: 44 bytes

void FUN_0000005e(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x3c);
  if (extraout_A0 != 0) {
    FUN_0000008a(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000008a at 0000008a
// Size: 44 bytes

void FUN_0000008a(undefined4 *param_1)

{
  func_0x000024c8(param_1);
  *param_1 = 77000;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0xe] = 0;
  return;
}



// Function: FUN_000000b6 at 000000b6
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000b6(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x000024d0(param_1,param_2,_DAT_000266a8);
  *(undefined4 *)(param_1 + 0x38) = param_3;
  return;
}



// Function: FUN_000000e2 at 000000e2
// Size: 692 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000e2(int *param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int *extraout_A0_01;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_146 [25];
  undefined4 local_e2;
  int *local_de;
  int *local_da;
  undefined1 auStack_d6 [52];
  undefined2 local_a2;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [52];
  undefined2 local_5c;
  undefined4 local_5a;
  undefined1 *local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000b46((short)param_1,param_2,param_3);
  local_da = (int *)0x0;
  local_de = (int *)0x0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    func_0x000073b0(0x1e);
    piVar3 = (int *)0x0;
    if (extraout_A0 != 0) {
      func_0x00006fc8((short)extraout_A0);
      piVar3 = extraout_A0_00;
    }
    local_da = piVar3;
    func_0x00002280((short)piVar3);
    local_5c = 0;
    local_5a = 0;
    local_52 = 0;
    local_4e = 0;
    local_56 = _DAT_00025f52;
    _DAT_00025f52 = auStack_90;
    iVar1 = func_0x000076a8((short)auStack_90);
    if (iVar1 == 0) {
      func_0x000020e0();
      uVar8 = (undefined2)((uint)local_da >> 0x10);
      uVar7 = 0x616c;
      uVar6 = 0x2d2d;
      piVar3 = *(int **)((int)param_1 + 0x2e);
      uVar5 = (undefined1)((uint)piVar3 >> 0x10);
      local_de = extraout_A0_01;
      (**(code **)(*piVar3 + 0xa4))((char)piVar3,0x2d2d,0x6973,(short)local_da);
      func_0x00002600((short)local_146,(short)local_da,uVar5,uVar6,uVar7,uVar8);
      func_0x00002610((short)local_146);
      uVar4 = extraout_A0_02;
      while( true ) {
        cVar2 = (**(code **)(local_146[0] + 8))();
        if (cVar2 == '\0') break;
        local_e2 = (int *)0x0;
        (**(code **)(*_DAT_000266a8 + 0x1bc))((short)_DAT_000266a8,param_2);
        local_a2 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0;
        local_9c = _DAT_00025f52;
        _DAT_00025f52 = auStack_d6;
        local_e2 = extraout_A0_03;
        iVar1 = func_0x000076a8((short)auStack_d6);
        uVar7 = (undefined2)uVar4;
        uVar6 = (undefined2)((uint)local_e2 >> 0x10);
        if (iVar1 == 0) {
          (**(code **)(*local_e2 + 100))((short)local_e2,uVar7);
          FUN_00001c00();
          (**(code **)(*local_de + 0xec))((short)local_de,local_e2._2_2_);
          _DAT_00025f52 = local_9c;
        }
        else {
          FUN_00000e10((short)local_e2);
          FUN_00001c10((short)((uint)local_a0 >> 0x10),uVar6);
        }
        (**(code **)(*local_da + 0xa0))((short)local_da,uVar7);
        FUN_00001d08(uVar7);
        func_0x00002618((char)local_146);
        uVar4 = extraout_A0_04;
      }
      func_0x00002608((short)local_146);
    }
    else {
      if (local_da != (int *)0x0) {
        (**(code **)(*local_da + 0x94))();
      }
      if (local_de != (int *)0x0) {
        (**(code **)(*local_de + 0x90))();
      }
      FUN_00001c10((short)((uint)local_5a >> 0x10));
    }
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10((short)((uint)local_14 >> 0x10));
  }
  (**(code **)(*local_da + 0x4c))();
  param_1[0xe] = (int)local_de;
  return;
}



// Function: FUN_00000396 at 00000396
// Size: 14 bytes

void FUN_00000396(void)

{
  return;
}



// Function: FUN_000003a4 at 000003a4
// Size: 44 bytes

void FUN_000003a4(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x3c);
  if (extraout_A0 != 0) {
    func_0x00006f50(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000003d0 at 000003d0
// Size: 26 bytes

void FUN_000003d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000000b6(param_1,param_2,param_3);
  return;
}



// Function: FUN_000003ea at 000003ea
// Size: 14 bytes

void FUN_000003ea(void)

{
  return;
}



// Function: FUN_000003f8 at 000003f8
// Size: 44 bytes

void FUN_000003f8(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x3c);
  if (extraout_A0 != 0) {
    FUN_00000424(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000424 at 00000424
// Size: 42 bytes

void FUN_00000424(undefined4 *param_1)

{
  FUN_0000008a(param_1);
  *param_1 = 0x12e40;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  return;
}



// Function: FUN_0000044e at 0000044e
// Size: 14 bytes

void FUN_0000044e(void)

{
  return;
}



// Function: FUN_0000045c at 0000045c
// Size: 44 bytes

void FUN_0000045c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x2e);
  if (extraout_A0 != 0) {
    func_0x00006f58(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000488 at 00000488
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000488(undefined4 param_1,undefined4 param_2)

{
  func_0x00002430(param_1,param_2,_DAT_000266a8);
  return;
}



// Function: FUN_000004aa at 000004aa
// Size: 14 bytes

void FUN_000004aa(void)

{
  return;
}



// Function: FUN_000004b8 at 000004b8
// Size: 44 bytes

void FUN_000004b8(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x2e);
  if (extraout_A0 != 0) {
    func_0x00006f60(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000004e4 at 000004e4
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004e4(int param_1,undefined4 param_2)

{
  func_0x00002430(param_1,param_2,_DAT_000266a8);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0x11) = 0x5f;
  return;
}



// Function: FUN_00000520 at 00000520
// Size: 534 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000520(int *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  short sVar4;
  char cVar5;
  int iVar3;
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar6;
  int extraout_A0_00;
  undefined2 extraout_A0w_00;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  int extraout_A0_04;
  undefined2 extraout_A0w_01;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = param_2 - 1;
  uVar10 = (undefined1)param_2;
  uVar8 = SUB42(param_1,0);
  if (uVar2 == 0) {
    func_0x000073b0(0x2e);
    uVar9 = 0;
    if (extraout_A0_04 != 0) {
      func_0x00006f58((char)extraout_A0_04);
      uVar9 = extraout_A0w_01;
    }
    FUN_00000488(uVar9,uVar10);
    (**(code **)(*param_1 + 0x108))(uVar8,uVar9);
    return;
  }
  if (uVar2 < 0x29) {
    sVar4 = (short)uVar2;
    if (SBORROW2(sVar4,9) == (int)((uint)(ushort)(sVar4 - 9U) << 0x10) < 0) {
      if (SBORROW2(sVar4 - 9U,10) != (int)((uint)(ushort)(sVar4 - 0x13U) << 0x10) < 0) {
LAB_000005ca:
        func_0x000073b0(0x2e);
        uVar9 = 0;
        if (extraout_A0_00 != 0) {
          func_0x00006f48((char)extraout_A0_00);
          uVar9 = extraout_A0w_00;
        }
        FUN_0000002e(uVar9,uVar10);
        (**(code **)(*param_1 + 0x108))(uVar8,uVar9);
        return;
      }
      uVar9 = (undefined2)param_2;
      if (SBORROW2(sVar4 - 0x13U,10) != (int)((uint)(ushort)(sVar4 - 0x1dU) << 0x10) < 0) {
        local_4e = 0;
        cVar5 = (**(code **)(*param_1 + 0x1b4))(uVar8,uVar9,(char)&local_4e);
        if (cVar5 == '\0') {
          return;
        }
        uVar7 = 0;
        local_16 = 0;
        local_14 = 0;
        local_c = 0;
        local_8 = 0;
        local_10 = _DAT_00025f52;
        _DAT_00025f52 = auStack_4a;
        iVar3 = func_0x000076a8((char)auStack_4a);
        if (iVar3 == 0) {
          func_0x000073b0(0x3c);
          uVar7 = 0;
          if (extraout_A0_01 != 0) {
            func_0x00006f50((char)extraout_A0_01);
            uVar7 = extraout_A0_02;
          }
          FUN_000003d0((short)uVar7,uVar9,(char)local_4e);
          _DAT_00025f52 = local_10;
        }
        else {
          uVar9 = (undefined2)((uint)local_4e >> 0x10);
          FUN_00000e10((char)local_4e);
          local_4e = extraout_A0_03;
          FUN_00001c10((short)((uint)local_14 >> 0x10),uVar9);
        }
        (**(code **)(*param_1 + 0x108))(uVar8,(char)uVar7);
        return;
      }
      if ((ushort)(sVar4 - 0x1dU) != 0) {
        if (sVar4 == 0x1e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar1 = sVar4 - 0x23;
        if (SBORROW2(sVar4 + -0x1e,5) == (int)((uint)uVar1 << 0x10) < 0) {
          if (uVar1 == 0) {
            FUN_00000e00();
            func_0x000073b0(0x2e);
            uVar6 = 0;
            if (extraout_A0 != 0) {
              func_0x00006f40((char)extraout_A0);
              uVar6 = extraout_A0w;
            }
            FUN_00000e00();
            FUN_0000000c(uVar6,uVar9);
            (**(code **)(*param_1 + 0x108))(uVar8,uVar6);
            return;
          }
          if (SBORROW2(uVar1,5) == (int)((uint)(ushort)(sVar4 - 0x28) << 0x10) < 0)
          goto LAB_000005ca;
        }
      }
    }
  }
  FUN_00000c64(uVar8,uVar10);
  return;
}



// Function: FUN_0000074c at 0000074c
// Size: 322 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000074c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined2 extraout_A0w;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  short sStack_4c;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar3 = (short)((uint)param_2 >> 0x10);
  if (sVar3 != 0) {
    iVar1 = func_0x000026a0((char)param_2);
    if ((iVar1 < 0) && (sVar3 == 1)) {
      func_0x000026c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((100 < iVar1) && (iVar1 < 0x6b)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = func_0x000076a8((char)auStack_4a);
    uVar6 = (undefined1)iVar1;
    if (iVar2 == 0) {
      if (*(char *)((int)param_1 + 0x52) != '\0') {
        (**(code **)(*param_1 + 0x288))();
      }
      (**(code **)(*param_1 + 0x1a4))((short)param_1,uVar6);
      func_0x00003798(extraout_A0w);
      if (*(char *)((int)param_1 + 0x52) != '\0') {
        (**(code **)(*param_1 + 0x288))();
      }
      _DAT_00025f52 = local_10;
    }
    else {
      if (*(char *)((int)param_1 + 0x52) != '\0') {
        (**(code **)(*param_1 + 0x288))();
      }
      sStack_4c = (short)iVar1;
      uVar5 = (undefined2)local_14;
      uVar4 = local_16;
      FUN_00001be8((short)((uint)local_14 >> 0x10),sStack_4c >> 0xf);
      FUN_00001c10((short)((uint)local_14 >> 0x10),uVar4,uVar5,uVar6);
    }
  }
  return;
}



// Function: FUN_000008ae at 000008ae
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000008ae(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008d6 at 000008d6
// Size: 86 bytes

undefined4 FUN_000008d6(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x84))((int *)param_1[2],param_2);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xa0))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_0000092c at 0000092c
// Size: 86 bytes

undefined4 FUN_0000092c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x7c))((int *)param_1[2],param_2);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xa8))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_00000982 at 00000982
// Size: 86 bytes

undefined4 FUN_00000982(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x80))((int *)param_1[2],param_2);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xac))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_000009d8 at 000009d8
// Size: 86 bytes

undefined4 FUN_000009d8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      uVar1 = (**(code **)(*(int *)param_1[2] + 0x8c))((int *)param_1[2],param_2);
    }
  }
  else {
    uVar1 = (**(code **)(*extraout_A0 + 0xb0))(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_00000a2e at 00000a2e
// Size: 80 bytes

undefined4 FUN_00000a2e(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  int *extraout_A0;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_8 = *param_4;
    local_6 = param_4[1];
    uVar1 = (**(code **)(*extraout_A0 + 0xbc))(extraout_A0,param_2,param_3,&local_8);
  }
  return uVar1;
}



// Function: FUN_00000a7e at 00000a7e
// Size: 80 bytes

undefined4 FUN_00000a7e(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  int *extraout_A0;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x74))();
  if (extraout_A0 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_8 = *param_4;
    local_6 = param_4[1];
    uVar1 = (**(code **)(*extraout_A0 + 0xc0))(extraout_A0,param_2,param_3,&local_8);
  }
  return uVar1;
}



// Function: FUN_00000ace at 00000ace
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ace(int param_1,int param_2)

{
  int extraout_A0;
  
  if (param_2 == 0x23) {
    (**(code **)(*_DAT_000266a8 + 0x19c))();
    if (extraout_A0 == *(int *)(param_1 + 0x50)) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x3a0))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x194))();
      (**(code **)(**(int **)(param_1 + 0x50) + 0x3c4))();
    }
  }
  else {
    FUN_000009d8((short)param_1,(char)param_2);
  }
  return;
}



// Function: FUN_00000b46 at 00000b46
// Size: 148 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b46(int *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000024c0(param_1,param_2,param_3);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
  FUN_00001c10((char)((uint)local_14 >> 0x10));
  return;
}



// Function: FUN_00000c64 at 00000c64
// Size: 180 bytes

void FUN_00000c64(int *param_1,int param_2)

{
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = SUB42(param_1,0);
  if (param_2 == 0x65) {
    (**(code **)(*param_1 + 0x11c))();
    if ((extraout_A0 == 0) || (param_1 != *(int **)(extraout_A0 + 0x16))) {
      FUN_00001288(uVar2,0x65);
    }
    else {
      FUN_00000e00();
      func_0x000073b0(0x2e);
      uVar1 = 0;
      if (extraout_A0_00 != 0) {
        func_0x00005af8((char)extraout_A0_00);
        uVar1 = extraout_A0_01;
      }
      FUN_00000e00();
      FUN_00001ad0((short)uVar1,0x65,uVar2);
      (**(code **)(*param_1 + 0x108))(param_1,uVar1);
    }
  }
  else {
    FUN_00001288(uVar2,(char)param_2);
  }
  return;
}



// Function: FUN_00000d18 at 00000d18
// Size: 32 bytes

void FUN_00000d18(int *param_1)

{
  func_0x000037b0(param_1);
  (**(code **)(*param_1 + 0x10c))();
  return;
}



// Function: FUN_00000d38 at 00000d38
// Size: 14 bytes

void FUN_00000d38(void)

{
  return;
}



// Function: FUN_00000d46 at 00000d46
// Size: 44 bytes

void FUN_00000d46(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x82);
  if (extraout_A0 != 0) {
    FUN_00000d72(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000d72 at 00000d72
// Size: 50 bytes

void FUN_00000d72(undefined4 *param_1)

{
  func_0x000024a0(param_1);
  *param_1 = 0x10c4e;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  return;
}



// Function: FUN_00000da4 at 00000da4
// Size: 76 bytes

void FUN_00000da4(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x2fc))();
  func_0x000024a8(param_1,400,param_2);
  *(int **)(param_1 + 0x7e) = param_2;
  return;
}



// Function: FUN_00000df0 at 00000df0
// Size: 16 bytes

void FUN_00000df0(int *param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x82);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_00000d72(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  FUN_00000da4(uVar1,param_1,param_2);
  (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  return;
}



// Function: FUN_00000e00 at 00000e00
// Size: 16 bytes

void FUN_00000e00(void)

{
  int in_A0;
  undefined4 extraout_A0;
  undefined4 uVar1;
  int unaff_A6;
  
  uVar1 = 0;
  if (in_A0 != 0) {
    *(int *)(unaff_A6 + -8) = in_A0;
    *(int *)(unaff_A6 + -4) = in_A0;
    FUN_00000d72();
    uVar1 = extraout_A0;
  }
  FUN_00000da4(uVar1,*(undefined4 *)(unaff_A6 + 8));
  (**(code **)(**(int **)(unaff_A6 + 8) + 0x108))(*(int **)(unaff_A6 + 8),uVar1);
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 54 bytes

void FUN_00000e10(void)

{
  undefined4 extraout_A0;
  int unaff_A6;
  
  FUN_00000d72();
  FUN_00000da4(extraout_A0,*(undefined4 *)(unaff_A6 + 8),*(undefined4 *)(unaff_A6 + 0xc));
  (**(code **)(**(int **)(unaff_A6 + 8) + 0x108))(*(int **)(unaff_A6 + 8),extraout_A0);
  return;
}



// Function: FUN_00000e46 at 00000e46
// Size: 8 bytes

void FUN_00000e46(void)

{
  return;
}



// Function: FUN_00000e4e at 00000e4e
// Size: 240 bytes

int FUN_00000e4e(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2._0_1_ == 0) {
    iVar1 = (**(code **)(*param_1 + 0x3a8))();
  }
  else if (param_2._0_1_ == 1) {
    (**(code **)(*param_1 + 0x2a0))();
    iVar1 = (**(code **)(*param_1 + 0x3a8))();
  }
  else {
    iVar1 = param_2._0_1_ - 2;
    if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x2a0))(), (char)iVar1 != '\0')) {
      uVar2 = SUB42(param_1,0);
      if (param_1[0x1f] == 4) {
        (**(code **)(*param_1 + 0x6c))(uVar2,0x21,uVar2,0);
      }
      else if (param_1[0x1f] == 0xc) {
        (**(code **)(*param_1 + 0x6c))(uVar2,0x1f,uVar2,0);
      }
      else {
        (**(code **)(*param_1 + 0x6c))(uVar2,0x20,uVar2,0);
      }
      iVar1 = (**(code **)(*param_1 + 0x6c))(uVar2,(short)param_1[0x1f],uVar2,0);
    }
  }
  return iVar1;
}



// Function: FUN_00000f3e at 00000f3e
// Size: 92 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f3e(int *param_1,undefined2 param_2)

{
  undefined1 local_12 [4];
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x144))((short)param_1,(short)&local_e,param_2);
  local_8 = local_e;
  local_6 = local_c;
  if (param_1[0x29] != 0) {
    func_0x00007210((short)&local_8,(short)local_12,(short)param_1[0x29]);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001072 at 00001072
// Size: 14 bytes

void FUN_00001072(void)

{
  return;
}



// Function: FUN_00001080 at 00001080
// Size: 44 bytes

void FUN_00001080(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x32);
  if (extraout_A0 != 0) {
    FUN_000010ac(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000010ac at 000010ac
// Size: 40 bytes

void FUN_000010ac(undefined4 *param_1)

{
  func_0x00002428(param_1);
  *param_1 = 0xc8d4;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  return;
}



// Function: FUN_000010d4 at 000010d4
// Size: 50 bytes

void FUN_000010d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00002430(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x2e) = param_3;
  return;
}



// Function: FUN_00001106 at 00001106
// Size: 14 bytes

void FUN_00001106(void)

{
  return;
}



// Function: FUN_00001114 at 00001114
// Size: 44 bytes

void FUN_00001114(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x32);
  if (extraout_A0 != 0) {
    FUN_00001140(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001140 at 00001140
// Size: 40 bytes

void FUN_00001140(undefined4 *param_1)

{
  func_0x00002428(param_1);
  *param_1 = 0xc984;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  return;
}



// Function: FUN_00001168 at 00001168
// Size: 50 bytes

void FUN_00001168(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00002430(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x2e) = param_3;
  return;
}



// Function: FUN_0000119a at 0000119a
// Size: 238 bytes

void FUN_0000119a(int *param_1,int param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = SUB42(param_1,0);
  if (((param_2 == 0x1e) || (param_2 == 0x20)) || (param_2 == 0x21)) {
    FUN_00000e00();
    func_0x000073b0(0x32);
    uVar1 = 0;
    if (extraout_A0 != 0) {
      FUN_000010ac((char)extraout_A0);
      uVar1 = extraout_A0_00;
    }
    FUN_00000e00();
    FUN_000010d4((short)uVar1,(short)param_2,uVar2);
    (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  }
  else if (param_2 == 0x22) {
    FUN_00000e00();
    func_0x000073b0(0x32);
    uVar1 = 0;
    if (extraout_A0_01 != 0) {
      FUN_00001140((char)extraout_A0_01);
      uVar1 = extraout_A0_02;
    }
    FUN_00000e00();
    FUN_00001168((short)uVar1,0x22,uVar2);
    (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  }
  else {
    FUN_00000c64(uVar2,(char)param_2);
  }
  return;
}



// Function: FUN_00001288 at 00001288
// Size: 48 bytes

undefined4 FUN_00001288(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x5c))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = func_0x00003798(extraout_A0,param_2);
  }
  return uVar1;
}



// Function: FUN_000012b8 at 000012b8
// Size: 14 bytes

void FUN_000012b8(void)

{
  return;
}



// Function: FUN_000012c6 at 000012c6
// Size: 44 bytes

void FUN_000012c6(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x9a);
  if (extraout_A0 != 0) {
    FUN_000012f2(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000012f2 at 000012f2
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012f2(undefined4 *param_1)

{
  func_0x000024a0(param_1);
  *param_1 = 0xb692;
  func_0x00007208((int)param_1 + 0x86);
  func_0x00007208((int)param_1 + 0x8a);
  *(undefined4 *)((int)param_1 + 0x86) = _DAT_00025b56;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  return;
}



// Function: FUN_00001362 at 00001362
// Size: 194 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001362(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_2 + 0x2fc))();
  func_0x000024a8(param_1,0,param_2);
  *(undefined1 *)((int)param_1 + 0x82) = param_4._0_1_;
  *(undefined1 *)((int)param_1 + 0x83) = param_4._2_1_;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  *(int **)((int)param_1 + 0x7e) = param_2;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    func_0x00001c68();
    *(undefined4 *)((int)param_1 + 0x92) = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
  FUN_00001c10((short)((uint)local_14 >> 0x10));
  return;
}



// Function: FUN_0000144a at 0000144a
// Size: 14 bytes

void FUN_0000144a(void)

{
  return;
}



// Function: FUN_00001458 at 00001458
// Size: 44 bytes

void FUN_00001458(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x9a);
  if (extraout_A0 != 0) {
    func_0x00006fa0(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001484 at 00001484
// Size: 14 bytes

void FUN_00001484(void)

{
  return;
}



// Function: FUN_00001492 at 00001492
// Size: 44 bytes

void FUN_00001492(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x9a);
  if (extraout_A0 != 0) {
    func_0x00006fa8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000014be at 000014be
// Size: 14 bytes

void FUN_000014be(void)

{
  return;
}



// Function: FUN_000014cc at 000014cc
// Size: 44 bytes

void FUN_000014cc(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x9a);
  if (extraout_A0 != 0) {
    func_0x00006fb0(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000014f8 at 000014f8
// Size: 8 bytes

void FUN_000014f8(void)

{
  return;
}



// Function: FUN_00001500 at 00001500
// Size: 8 bytes

void FUN_00001500(void)

{
  return;
}



// Function: FUN_00001508 at 00001508
// Size: 564 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00001508(int *param_1,undefined4 *param_2,undefined4 param_3,undefined2 *param_4)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  int local_68 [25];
  
  uVar7 = (undefined2)((uint)param_1 >> 0x10);
  cVar1 = (**(code **)(*param_1 + 0x74))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xa4))(), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0xc4))();
  }
  uVar8 = SUB42(param_1,0);
  func_0x00004b38((short)local_68,uVar8);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    uVar6 = (undefined2)param_3;
    if (cVar1 == '\0') break;
    local_74 = *param_2;
    local_70 = param_2[1];
    uVar5 = SUB42(piVar2,0);
    (**(code **)(*piVar2 + 0x160))(uVar5,(char)&local_74);
    cVar1 = (**(code **)(*piVar2 + 0x2a0))(uVar5,(short)&local_74);
    if (cVar1 != '\0') {
      local_80 = *param_4;
      local_7e = param_4[1];
      cVar1 = (**(code **)(*piVar2 + 0x2a4))(uVar5,(short)&local_74,uVar6,(char)&local_80);
      if (cVar1 != '\0') {
        func_0x00002798((short)local_68);
        return true;
      }
    }
    func_0x00004b50((char)local_68);
    piVar2 = extraout_A0_00;
  }
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 == '\0') {
    func_0x00002798((short)local_68);
    bVar3 = false;
  }
  else {
    local_7c = *param_2;
    local_78 = param_2[1];
    cVar1 = (**(code **)(*_DAT_000266a8 + 0x238))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x144))(uVar8,(short)&local_90,(char)param_2);
      local_6c = local_90;
      local_6a = local_8e;
      func_0x00007218((short)&local_6c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar3 = true;
    (**(code **)(*param_1 + 0xf0))();
    uVar5 = (undefined2)((uint)param_3 >> 0x10);
    if (extraout_A0_01 != (int *)0x0) {
      local_88 = *param_4;
      local_86 = param_4[1];
      cVar1 = (**(code **)(*extraout_A0_01 + 0xbc))
                        ((short)extraout_A0_01,(short)&local_7c,uVar6,(char)&local_88);
      bVar3 = cVar1 == '\0';
    }
    if ((bVar3) && (cVar1 = (**(code **)(*param_1 + 0x74))(), cVar1 != '\0')) {
      local_8c = *param_4;
      local_8a = param_4[1];
      uVar9 = (undefined2)((uint)&local_8c >> 0x10);
      puVar4 = &local_7c;
      (**(code **)(*param_1 + 0x2ac))(uVar8,(short)puVar4,uVar6,(char)&local_8c);
      func_0x00002798((short)local_68,uVar7,(short)((uint)puVar4 >> 0x10),uVar5,uVar9);
      return true;
    }
    bVar3 = !bVar3;
    func_0x00002798((short)local_68);
  }
  return bVar3;
}



// Function: FUN_0000176e at 0000176e
// Size: 446 bytes

bool FUN_0000176e(int *param_1,undefined4 *param_2,undefined4 param_3,undefined2 *param_4)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68 [25];
  
  uVar5 = (undefined2)((uint)param_1 >> 0x10);
  func_0x00004b38((short)local_68,(short)param_1);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    uVar7 = (undefined2)param_3;
    if (cVar1 == '\0') break;
    local_70 = *param_2;
    local_6c = param_2[1];
    uVar6 = SUB42(piVar2,0);
    (**(code **)(*piVar2 + 0x160))(uVar6,(char)&local_70);
    cVar1 = (**(code **)(*piVar2 + 0x2a0))(uVar6,(short)&local_70);
    if (cVar1 != '\0') {
      local_7c = *param_4;
      local_7a = param_4[1];
      cVar1 = (**(code **)(*piVar2 + 0x2a8))(uVar6,(short)&local_70,uVar7,(char)&local_7c);
      if (cVar1 != '\0') {
        func_0x00002798((short)local_68);
        return true;
      }
    }
    func_0x00004b50((char)local_68);
    piVar2 = extraout_A0_00;
  }
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 == '\0') {
    func_0x00002798((short)local_68);
    bVar3 = false;
  }
  else {
    local_78 = *param_2;
    local_74 = param_2[1];
    bVar3 = true;
    (**(code **)(*param_1 + 0xf0))();
    uVar6 = (undefined2)((uint)param_3 >> 0x10);
    if (extraout_A0_01 != (int *)0x0) {
      local_80 = *param_4;
      local_7e = param_4[1];
      cVar1 = (**(code **)(*extraout_A0_01 + 0xc0))
                        ((short)extraout_A0_01,(short)&local_78,uVar7,(char)&local_80);
      bVar3 = cVar1 == '\0';
    }
    if ((bVar3) && (cVar1 = (**(code **)(*param_1 + 0x74))(), cVar1 != '\0')) {
      local_84 = *param_4;
      local_82 = param_4[1];
      uVar8 = (undefined2)((uint)&local_84 >> 0x10);
      puVar4 = &local_78;
      (**(code **)(*param_1 + 0x2b0))((short)param_1,(short)puVar4,uVar7,(char)&local_84);
      func_0x00002798((short)local_68,uVar5,(short)((uint)puVar4 >> 0x10),uVar6,uVar8);
      return true;
    }
    bVar3 = !bVar3;
    func_0x00002798((short)local_68);
  }
  return bVar3;
}



// Function: FUN_0000192c at 0000192c
// Size: 14 bytes

void FUN_0000192c(void)

{
  return;
}



// Function: FUN_0000193a at 0000193a
// Size: 44 bytes

void FUN_0000193a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x32);
  if (extraout_A0 != 0) {
    FUN_00001966(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001966 at 00001966
// Size: 40 bytes

void FUN_00001966(undefined4 *param_1)

{
  func_0x00002428(param_1);
  *param_1 = 0x7770;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  return;
}



// Function: FUN_0000198e at 0000198e
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000198e(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00002430(param_1,param_2,_DAT_000266a8);
  *(undefined4 *)(param_1 + 0x2e) = param_3;
  return;
}



// Function: FUN_000019ba at 000019ba
// Size: 136 bytes

void FUN_000019ba(int *param_1,int param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  if (param_2 == 0x1f) {
    FUN_00000e00();
    func_0x000073b0(0x32);
    uVar1 = 0;
    if (extraout_A0 != 0) {
      FUN_00001966((char)extraout_A0);
      uVar1 = extraout_A0_00;
    }
    FUN_00000e00();
    FUN_0000198e((short)uVar1,0x1f,(short)param_1);
    (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  }
  else {
    FUN_00000c64((short)param_1,(char)param_2);
  }
  return;
}



// Function: FUN_00001a42 at 00001a42
// Size: 128 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00001a42(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  int *extraout_A0;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  uVar4 = 1;
  uVar7 = (undefined2)((uint)param_2 >> 0x10);
  uVar8 = (undefined2)param_2;
  uVar5 = (undefined2)((uint)param_1 >> 0x10);
  uVar6 = SUB42(param_1,0);
  sVar2 = (**(code **)(*param_1 + 0x32c))(uVar6,uVar8);
  bVar1 = true;
  (**(code **)(*_DAT_000266a8 + 0x19c))((short)_DAT_000266a8,uVar5,uVar7);
  if (extraout_A0 != param_1) {
    if (*(char *)((int)param_1 + 0xb2) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((sVar2 != 4) || (cVar3 = (**(code **)(*param_3 + 0x78))(), cVar3 == '\0')) {
      (**(code **)(*param_1 + 0x3c4))();
    }
    if (sVar2 == 3) {
      if (*(char *)((int)param_1 + 0xa7) == '\0') {
        bVar1 = false;
      }
      else {
        (**(code **)(*_DAT_000266a8 + 0x18c))();
        sVar2 = (**(code **)(*param_1 + 0x32c))((char)param_1,uVar8);
      }
    }
  }
  if (bVar1) {
    switch(sVar2) {
    case 3:
      uStack_8 = *param_4;
      uStack_6 = param_4[1];
      uVar4 = FUN_00001508(uVar6,(char)param_2,(short)param_3,(short)&uStack_8);
      break;
    case 4:
      (**(code **)(*param_1 + 0x370))(uVar6,uVar8);
      break;
    case 5:
      (**(code **)(*param_1 + 0x374))(uVar6,uVar8);
      break;
    case 6:
      (**(code **)(*param_1 + 0x36c))(uVar6,uVar8);
      break;
    case 7:
    case 8:
      (**(code **)(*param_1 + 0x378))(uVar6,uVar8);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// Function: FUN_00001ad0 at 00001ad0
// Size: 186 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00001ad0(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  short unaff_D3w;
  undefined1 unaff_D4b;
  char unaff_D5b;
  int *unaff_D6;
  int *extraout_A0;
  int in_A1;
  int *unaff_A2;
  undefined4 unaff_A3;
  undefined2 *unaff_A4;
  int unaff_A6;
  undefined4 *puVar3;
  bool in_ZF;
  int *piStack0000000a;
  
  piStack0000000a = (int *)((ulonglong)param_2 >> 0x10);
  if (!in_ZF) {
    (**(code **)(in_A1 + 0x19c))();
    puVar3 = (undefined4 *)((int)&stack0x00000008 + 6);
    if (extraout_A0 == unaff_A2) goto LAB_00001af4;
    if (*(char *)((int)unaff_A2 + 0xb2) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((unaff_D3w != 4) ||
       (piStack0000000a = unaff_D6, cVar2 = (**(code **)(*unaff_D6 + 0x78))(), cVar2 == '\0')) {
      piStack0000000a = unaff_A2;
      (**(code **)(*unaff_A2 + 0x3c4))();
    }
    puVar3 = (undefined4 *)((int)&stack0x00000008 + 6);
    if (unaff_D3w != 3) goto LAB_00001af4;
    if (*(char *)((int)unaff_A2 + 0xa7) == '\0') {
      unaff_D5b = '\0';
      puVar3 = (undefined4 *)((int)&stack0x00000008 + 6);
      goto LAB_00001af4;
    }
    register0x0000003c = (BADSPACEBASE *)((int)&stack0x00000008 + 2);
    piStack0000000a = _DAT_000266a8;
  }
  pcVar1 = *(code **)(**(int **)register0x0000003c + 0x18c);
  *(undefined4 *)((int)register0x0000003c + -4) = 0x1adc;
  (*pcVar1)();
  *(undefined4 *)((int)register0x0000003c + -4) = unaff_A3;
  *(int **)((int)register0x0000003c + -8) = unaff_A2;
  pcVar1 = *(code **)(**(int **)((int)register0x0000003c + -8) + 0x32c);
  *(undefined4 *)((int)register0x0000003c + -0xc) = 0x1aea;
  unaff_D3w = (*pcVar1)();
  puVar3 = (undefined4 *)((int)register0x0000003c + 4);
LAB_00001af4:
  if (unaff_D5b == '\0') {
    unaff_D4b = 0;
  }
  else {
    switch(unaff_D3w) {
    case 3:
      *(undefined2 *)(unaff_A6 + -4) = *unaff_A4;
      *(undefined2 *)(unaff_A6 + -2) = unaff_A4[1];
      puVar3[-1] = unaff_A6 + -4;
      puVar3[-2] = unaff_D6;
      puVar3[-3] = unaff_A3;
      puVar3[-4] = unaff_A2;
      puVar3[-5] = 0x1b3c;
      unaff_D4b = FUN_00001508();
      break;
    case 4:
      puVar3[-1] = unaff_A3;
      puVar3[-2] = unaff_A2;
      pcVar1 = *(code **)(*(int *)puVar3[-2] + 0x370);
      puVar3[-3] = 0x1b52;
      (*pcVar1)();
      break;
    case 5:
      puVar3[-1] = unaff_A3;
      puVar3[-2] = unaff_A2;
      pcVar1 = *(code **)(*(int *)puVar3[-2] + 0x374);
      puVar3[-3] = 0x1b64;
      (*pcVar1)();
      break;
    case 6:
      puVar3[-1] = unaff_A3;
      puVar3[-2] = unaff_A2;
      pcVar1 = *(code **)(*(int *)puVar3[-2] + 0x36c);
      puVar3[-3] = 0x1b76;
      (*pcVar1)();
      break;
    case 7:
    case 8:
      *(short *)((int)puVar3 + -2) = unaff_D3w;
      *(undefined4 *)((int)puVar3 + -6) = unaff_A3;
      *(int **)((int)puVar3 + -10) = unaff_A2;
      pcVar1 = *(code **)(**(int **)((int)puVar3 + -10) + 0x378);
      *(undefined4 *)((int)puVar3 + -0xe) = 0x1b8a;
      (*pcVar1)();
    }
  }
  return unaff_D4b;
}



// Function: FUN_00001b9c at 00001b9c
// Size: 87 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b9c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 *extraout_A0;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sStack_4c;
  undefined1 auStack_4a [52];
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  sVar3 = (short)((uint)param_2 >> 0x10);
  if (sVar3 != 0) {
    iVar1 = func_0x000026a0((char)param_2);
    if ((iVar1 < 0) && (sVar3 == 1)) {
      func_0x000026c0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((100 < iVar1) && (iVar1 < 0x6b)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uStack_16 = 0;
    uStack_14 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    puStack_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = func_0x000076a8((char)auStack_4a);
    if (iVar2 == 0) {
      if (*(char *)((int)param_1 + 0x52) != '\0') {
        (**(code **)(*param_1 + 0x288))();
      }
      uVar5 = 0x82;
      func_0x000073b0(0x32);
      if (extraout_A0 != (undefined4 *)0x0) {
        uVar5 = 0x98;
        func_0x00002428((char)extraout_A0);
        *extraout_A0 = 0x1ef38;
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      }
      func_0x00002430(extraout_A0,0xffff,(short)param_1,uVar5,0);
      *(int *)((int)extraout_A0 + 0x2e) = iVar1;
      (**(code **)(*param_1 + 0x104))(param_1,extraout_A0);
      if (*(char *)((int)param_1 + 0x52) != '\0') {
        (**(code **)(*param_1 + 0x288))();
      }
      _DAT_00025f52 = puStack_10;
    }
    else {
      if (*(char *)((int)param_1 + 0x52) != '\0') {
        (**(code **)(*param_1 + 0x288))();
      }
      sStack_4c = (short)iVar1;
      uVar6 = (undefined1)iVar1;
      uVar5 = (undefined1)uStack_14;
      uVar4 = uStack_16;
      FUN_00001be8((char)((uint)uStack_14 >> 0x10),sStack_4c >> 0xf);
      FUN_00001c10((short)((uint)uStack_14 >> 0x10),uVar4,uVar5,uVar6);
    }
  }
  return;
}



// Function: FUN_00001be8 at 00001be8
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001be8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c00 at 00001c00
// Size: 6 bytes

void FUN_00001c00(void)

{
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 239 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  int in_D0;
  int iVar1;
  undefined4 *extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  if (*(int *)(unaff_A6 + -0x4a) <= in_D0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_A6 + -0x12) = 0;
  *(undefined4 *)(unaff_A6 + -0x10) = 0;
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar1 = func_0x000076a8((char)unaff_A6 + -0x46);
  if (iVar1 == 0) {
    if (*(char *)((int)unaff_A2 + 0x52) != '\0') {
      (**(code **)(*unaff_A2 + 0x288))();
    }
    func_0x000073b0(0x32);
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -0x14e) = extraout_A0;
      func_0x00002428((char)extraout_A0);
      *extraout_A0 = 0x1ef38;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    }
    func_0x00002430(extraout_A0,0xffff);
    *(undefined4 *)((int)extraout_A0 + 0x2e) = *(undefined4 *)(unaff_A6 + -0x4a);
    (**(code **)(*unaff_A2 + 0x104))();
    if (*(char *)((int)unaff_A2 + 0x52) != '\0') {
      (**(code **)(*unaff_A2 + 0x288))();
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
  }
  else {
    if (*(char *)((int)unaff_A2 + 0x52) != '\0') {
      (**(code **)(*unaff_A2 + 0x288))();
    }
    uVar4 = (undefined1)*(short *)(unaff_A6 + -0x48);
    uVar3 = (undefined1)*(undefined4 *)(unaff_A6 + -0x10);
    uVar2 = *(undefined2 *)(unaff_A6 + -0x12);
    FUN_00001be8((char)((uint)*(undefined4 *)(unaff_A6 + -0x10) >> 0x10),
                 *(short *)(unaff_A6 + -0x48) >> 0xf);
    FUN_00001c10((short)((uint)*(undefined4 *)(unaff_A6 + -0x10) >> 0x10),uVar2,uVar3,uVar4);
  }
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 58 bytes

void FUN_00001d08(void)

{
  code *in_A1;
  int unaff_A6;
  
  (*in_A1)();
  FUN_00001be8((short)((uint)*(undefined4 *)(unaff_A6 + -0x10) >> 0x10));
  FUN_00001c10();
  return;
}



// Function: FUN_00001d42 at 00001d42
// Size: 256 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001d42(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4)

{
  bool bVar1;
  char cVar4;
  undefined4 uVar2;
  short sVar3;
  int *extraout_A0;
  undefined2 local_8;
  undefined2 local_6;
  
  cVar4 = (**(code **)(*param_3 + 0x88))();
  if (cVar4 == '\0') {
    local_8 = *param_4;
    local_6 = param_4[1];
    uVar2 = FUN_00001a42((short)param_1,(char)param_2,param_3,&local_8);
    return uVar2;
  }
  sVar3 = (**(code **)(*param_1 + 0x32c))(param_1,param_2);
  bVar1 = true;
  (**(code **)(*_DAT_000266a8 + 0x19c))();
  if (extraout_A0 != param_1) {
    if (*(char *)((int)param_1 + 0xb2) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((sVar3 != 4) || (cVar4 = (**(code **)(*param_3 + 0x78))(), cVar4 == '\0')) {
      (**(code **)(*param_1 + 0x3c4))();
    }
    if (sVar3 == 3) {
      if (*(char *)((int)param_1 + 0xa7) == '\0') {
        bVar1 = false;
      }
      else {
        (**(code **)(*_DAT_000266a8 + 0x18c))();
        sVar3 = (**(code **)(*param_1 + 0x32c))((char)param_1,param_2);
      }
    }
  }
  if ((bVar1) && (sVar3 == 3)) {
    func_0x000052e8((char)param_1,param_2,param_3);
  }
  return 1;
}



// Function: FUN_00001e4c at 00001e4c
// Size: 44 bytes

void FUN_00001e4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *param_4;
  local_6 = param_4[1];
  FUN_00001a42(param_1,param_2,param_3,&local_8);
  return;
}



