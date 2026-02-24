// Warlords II - Decompiled 68k Code
// Segment: CODE_155
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000004a at 0000004a
// Size: 412 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000004a(int *param_1,undefined2 param_2,undefined2 *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined2 local_56;
  undefined2 local_54;
  int *local_52;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_52 = param_4;
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar2 = func_0x000076a8(auStack_4e);
  if (iVar2 == 0) {
    local_56 = *param_3;
    local_54 = param_3[1];
    (**(code **)(*local_52 + 0xdc))((short)local_52,param_2,&local_56);
    local_52 = (int *)0x0;
    local_8 = extraout_A0;
    while (local_8 != (int *)0x0) {
      cVar3 = (**(code **)(*local_8 + 0xb0))();
      if (cVar3 != '\0') break;
      cVar3 = (**(code **)(*param_1 + 0x178))();
      if (cVar3 != '\0') {
        (**(code **)(*local_8 + 0xe0))();
        local_8 = extraout_A0_00;
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0xe4))();
    }
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_52 != (int *)0x0) {
      (**(code **)(*local_52 + 0x98))();
      cVar3 = (**(code **)(*local_52 + 0x58))();
      if (cVar3 != '\0') {
        puVar1 = (undefined4 *)(*(int *)((int)local_52 + 0x16) + 0x1a);
        if (local_52 == (int *)*puVar1) {
          *puVar1 = 0;
        }
        FUN_00000e10(local_52);
        local_52 = extraout_A0_01;
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x98))();
      cVar3 = (**(code **)(*local_8 + 0x58))();
      if (cVar3 != '\0') {
        puVar1 = (undefined4 *)(*(int *)((int)local_8 + 0x16) + 0x1a);
        if (local_8 == (int *)*puVar1) {
          *puVar1 = 0;
        }
        FUN_00000e10(local_8);
        local_8 = extraout_A0_02;
      }
    }
    FUN_00001c10();
  }
  return;
}



// Function: FUN_000001e6 at 000001e6
// Size: 58 bytes

void FUN_000001e6(int *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    (**(code **)(*param_1 + 0x74))();
    (**(code **)(*param_1 + 0x78))();
  }
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_00000220 at 00000220
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000220(int param_1)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    if (*(int *)(param_1 + 0x1e) == *(int *)(_DAT_000264b2 + 0x48)) {
      *(undefined4 *)(_DAT_000264b2 + 0x4c) = 0;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x1e) + 0x128))();
      *(undefined4 *)(param_1 + 0x1e) = 0;
    }
  }
  return;
}



// Function: FUN_00000260 at 00000260
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000260(int param_1)

{
  if (((*(int *)(param_1 + 0x22) != 0) &&
      (*(int *)(param_1 + 0x22) != *(int *)(_DAT_000264b2 + 0x48))) &&
     ((*(int *)(param_1 + 0x26) == 0 || (*(int *)(param_1 + 0x26) == *(int *)(param_1 + 0x16))))) {
    (**(code **)(**(int **)(param_1 + 0x22) + 0x128))();
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  return;
}



// Function: FUN_000002aa at 000002aa
// Size: 8 bytes

void FUN_000002aa(void)

{
  return;
}



// Function: FUN_000002b2 at 000002b2
// Size: 8 bytes

void FUN_000002b2(void)

{
  return;
}



// Function: FUN_000002ba at 000002ba
// Size: 8 bytes

void FUN_000002ba(void)

{
  return;
}



// Function: FUN_000002c2 at 000002c2
// Size: 22 bytes

void FUN_000002c2(int *param_1)

{
  (**(code **)(*param_1 + 0x84))();
  return;
}



// Function: FUN_000002d8 at 000002d8
// Size: 8 bytes

void FUN_000002d8(void)

{
  return;
}



// Function: FUN_000002e0 at 000002e0
// Size: 44 bytes

void FUN_000002e0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x3e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x3c0))(*(int **)(param_1 + 0x3e),param_2);
  }
  return;
}



// Function: FUN_0000030c at 0000030c
// Size: 38 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000030c(int param_1)

{
  if (*(int *)(param_1 + 0x2e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x37c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000033c at 0000033c
// Size: 56 bytes

void FUN_0000033c(int param_1)

{
  if (*(int *)(param_1 + 0x2e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x380))();
  }
  return;
}



// Function: FUN_00000374 at 00000374
// Size: 60 bytes

void FUN_00000374(int param_1)

{
  if (*(int *)(param_1 + 0x2e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2e) + 900))();
  }
  return;
}



// Function: FUN_000003b0 at 000003b0
// Size: 108 bytes

void FUN_000003b0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x2e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x388))();
  }
  if ((param_2._0_1_ == '\x02') && (*(int *)(param_1 + 0x2e) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x2a0))();
  }
  return;
}



// Function: FUN_0000041c at 0000041c
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000041c(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000454 at 00000454
// Size: 102 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000454(int *param_1)

{
  int extraout_A0;
  
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    if (param_1[0x1d] != 0) {
      (**(code **)(*param_1 + 0xc4))();
    }
    (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
    return;
  }
  if (param_1[0x1d] == 0) {
    func_0x00001ea0(0x6c);
    param_1[0x1d] = extraout_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000004f2 at 000004f2
// Size: 138 bytes

void FUN_000004f2(int *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[0x1d] = *(int *)(param_2 + 0x74);
    *(undefined1 *)((int)param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
    param_1[0x1e] = *(int *)(param_2 + 0x78);
    *(undefined1 *)((int)param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
    param_1[0x11] = *(int *)(param_2 + 0x44);
    param_1[0x12] = *(int *)(param_2 + 0x48);
    param_1[0x13] = *(int *)(param_2 + 0x4c);
    param_1[0x14] = *(int *)(param_2 + 0x50);
    param_1[0x15] = *(int *)(param_2 + 0x54);
    param_1[0x16] = *(int *)(param_2 + 0x58);
    param_1[0x17] = *(int *)(param_2 + 0x5c);
    param_1[0x18] = *(int *)(param_2 + 0x60);
    param_1[0x19] = *(int *)(param_2 + 100);
    param_1[0x1a] = *(int *)(param_2 + 0x68);
    param_1[0x1b] = *(int *)(param_2 + 0x6c);
    param_1[0x1c] = *(int *)(param_2 + 0x70);
  }
  (**(code **)(*param_1 + 200))();
  return;
}



// Function: FUN_0000057c at 0000057c
// Size: 130 bytes

void FUN_0000057c(int *param_1)

{
  undefined1 auStack_1c [16];
  int local_c;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x3b) != '\0') && (*(int *)((int)param_1 + 0x2e) != 0)) {
    (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x304))
              ((short)*(int **)((int)param_1 + 0x2e),(char)auStack_1c);
    func_0x000038f8((short)param_1 + 0x54,(short)auStack_1c);
  }
  if (*(char *)((int)param_1 + 0x3a) != '\0') {
    local_c = param_1[0x15];
    local_8 = param_1[0x16];
    (**(code **)(*param_1 + 0xb4))
              (param_1,(short)((uint)(param_1 + 0x11) >> 0x10),
               (short)((uint)(param_1 + 0x13) >> 0x10),(short)((uint)&local_c >> 0x10));
    param_1[0x15] = local_c;
    param_1[0x16] = local_8;
  }
  return;
}



// Function: FUN_000005fe at 000005fe
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005fe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000698 at 00000698
// Size: 256 bytes

void FUN_00000698(int *param_1)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x2e);
  local_c = param_1[0x11];
  local_8 = param_1[0x12];
  local_14 = param_1[0x13];
  local_10 = param_1[0x14];
  local_1c = param_1[0x15];
  local_18 = param_1[0x16];
  (**(code **)(*param_1 + 0xbc))
            (param_1,(short)((uint)&local_c >> 0x10),(short)((uint)&local_14 >> 0x10),
             (short)((uint)&local_1c >> 0x10));
  param_1[0x11] = local_c;
  param_1[0x12] = local_8;
  param_1[0x13] = local_14;
  param_1[0x14] = local_10;
  param_1[0x15] = local_1c;
  param_1[0x16] = local_18;
  if (extraout_A0 == param_1) {
    if (iVar1 != *(int *)((int)param_1 + 0x2e)) {
      (**(code **)(*param_1 + 0xcc))((short)param_1,(char)param_1);
    }
  }
  else {
    if (extraout_A0 == (int *)0x0) {
      (**(code **)(*param_1 + 0xc4))();
    }
    else {
      (**(code **)(*extraout_A0 + 0xcc))((short)extraout_A0,(char)param_1);
    }
    cVar2 = (**(code **)(*param_1 + 0x58))();
    if (cVar2 != '\0') {
      if ((*(int *)((int)param_1 + 0x16) != 0) &&
         (param_1 == *(int **)(*(int *)((int)param_1 + 0x16) + 0x1a))) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x1a) = 0;
      }
      (**(code **)(*param_1 + 0x4c))();
    }
  }
  return;
}



// Function: FUN_00000798 at 00000798
// Size: 202 bytes

undefined4 FUN_00000798(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *extraout_A0;
  undefined2 uVar2;
  undefined2 uStack_18;
  undefined1 uVar3;
  
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x11] = *param_2;
  param_1[0x12] = param_2[1];
  param_1[0x13] = *param_2;
  param_1[0x14] = param_2[1];
  param_1[0x15] = *param_2;
  param_1[0x16] = param_2[1];
  param_1[0x1e] = *param_3;
  uVar3 = 0xe8;
  (**(code **)(*param_1 + 0xcc))(param_1,0);
  uVar2 = (undefined2)((uint)param_1 >> 0x10);
  uStack_18 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0xd4))();
  param_1[0x11] = param_1[0x15];
  param_1[0x12] = param_1[0x16];
  param_1[0x13] = param_1[0x15];
  param_1[0x14] = param_1[0x16];
  (**(code **)(*param_1 + 0xd8))(uStack_18,uVar2,uVar3);
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    extraout_A0[0x11] = extraout_A0[0x15];
    extraout_A0[0x12] = extraout_A0[0x16];
    extraout_A0[0x13] = extraout_A0[0x15];
    extraout_A0[0x14] = extraout_A0[0x16];
    uVar1 = (**(code **)(*extraout_A0 + 0xd0))();
  }
  return uVar1;
}



// Function: FUN_00000862 at 00000862
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000862(int *param_1)

{
  undefined1 auStack_8 [4];
  
  *(undefined1 *)((int)param_1 + 0x42) = 1;
  func_0x00007208(auStack_8);
  (**(code **)(*param_1 + 200))();
  func_0x00007218(auStack_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000b06 at 00000b06
// Size: 128 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000b06(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  *(undefined1 *)((int)param_1 + 0x42) = 2;
  (**(code **)(*param_1 + 200))();
  if (*(char *)(param_1 + 0x1f) == '\0') {
    param_1[0x15] = param_1[0x13];
    param_1[0x16] = param_1[0x14];
    (**(code **)(*param_1 + 0xd0))();
    (**(code **)(*param_1 + 0xd8))();
    uVar1 = 0;
    if (extraout_A0 != (int *)0x0) {
      uVar1 = (**(code **)(*extraout_A0 + 0xc4))();
    }
    return uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000c0e at 00000c0e
// Size: 32 bytes

void FUN_00000c0e(int *param_1)

{
  (**(code **)(*param_1 + 0xb0))();
  FUN_000001e6(param_1);
  return;
}



// Function: FUN_00000c2e at 00000c2e
// Size: 46 bytes

void FUN_00000c2e(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x2e));
  *(undefined4 *)(param_1 + 0x2e) = extraout_A0;
  FUN_00000e10(*(undefined4 *)(param_1 + 0x32));
  *(undefined4 *)(param_1 + 0x32) = extraout_A0_00;
  return;
}



// Function: FUN_00000c5c at 00000c5c
// Size: 84 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000c5c(int param_1)

{
  if ((*(int *)(param_1 + 0x2e) != 0) && (*(int *)(param_1 + 0x32) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000cc2 at 00000cc2
// Size: 66 bytes

void FUN_00000cc2(int *param_1)

{
  uint uVar1;
  
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x6c))();
    if ((uVar1 & 0xf) == 1) {
      (**(code **)(*param_1 + 0xbc))();
    }
  }
  return;
}



// Function: FUN_00000d04 at 00000d04
// Size: 14 bytes

void FUN_00000d04(void)

{
  return;
}



// Function: FUN_00000d12 at 00000d12
// Size: 44 bytes

void FUN_00000d12(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x7e);
  if (extraout_A0 != 0) {
    func_0x00006f98(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000d3e at 00000d3e
// Size: 46 bytes

void FUN_00000d3e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x000024a8(param_1,param_2,param_3);
  return;
}



// Function: FUN_00000d90 at 00000d90
// Size: 8 bytes

void FUN_00000d90(void)

{
  return;
}



// Function: FUN_00000db8 at 00000db8
// Size: 88 bytes

void FUN_00000db8(void)

{
  undefined4 *puVar1;
  short sVar2;
  char cVar3;
  undefined4 *unaff_D4;
  undefined4 *unaff_D5;
  int unaff_A2;
  undefined4 *unaff_A3;
  int unaff_A6;
  short sStack00000004;
  undefined1 uStack00000006;
  
  *(undefined4 *)(unaff_A6 + -8) = *unaff_D4;
  *(undefined4 *)(unaff_A6 + -4) = unaff_D4[1];
  sVar2 = (short)unaff_A6;
  func_0x000038c0((short)*(undefined4 *)(unaff_A2 + 0x3e) + 0x84,sVar2 + -0x28,
                  (short)*(undefined4 *)(unaff_A2 + 0x3e) + 0x3a);
  *(undefined4 **)(unaff_A6 + -0x34) = (undefined4 *)(unaff_A6 + -0x28);
  func_0x000038c0();
  *(undefined4 *)(unaff_A6 + -0x18) = *(undefined4 *)(unaff_A6 + -0x30);
  *(undefined4 *)(unaff_A6 + -0x14) = *(undefined4 *)(unaff_A6 + -0x2c);
  *(undefined4 *)(unaff_A6 + -0x10) = *(undefined4 *)(unaff_A6 + -0x28);
  *(undefined4 *)(unaff_A6 + -0xc) = *(undefined4 *)(unaff_A6 + -0x24);
  func_0x000038f8((short)(unaff_A6 + -8),sVar2 + -0x18);
  cVar3 = func_0x000038e0(unaff_A6 + -8,0x5b5a);
  if (cVar3 != '\0') {
    uStack00000006 = 1;
    sStack00000004 = sVar2 + -8;
    (**(code **)(*(int *)CONCAT22((short)((uint)*(undefined4 *)(unaff_A2 + 0x3e) >> 0x10),
                                  (short)*(undefined4 *)(unaff_A2 + 0x3e)) + 0x3c0))();
    (**(code **)(**(int **)(unaff_A2 + 0x3e) + 0x268))();
  }
  sStack00000004 = (short)((uint)(unaff_A6 + -8) >> 0x10);
  uStack00000006 = (undefined1)((uint)(unaff_A6 + -8) >> 8);
  func_0x000038d0();
  puVar1 = *(undefined4 **)(unaff_A6 + 0x12);
  *puVar1 = *unaff_A3;
  puVar1[1] = unaff_A3[1];
  *unaff_D5 = *unaff_A3;
  unaff_D5[1] = unaff_A3[1];
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 128 bytes

void FUN_00000e10(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *unaff_D5;
  int unaff_A2;
  undefined4 *unaff_A3;
  int unaff_A6;
  undefined2 uStack0000000c;
  undefined2 uStack0000000e;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack00000016;
  undefined2 uStack00000018;
  short sStack0000001c;
  undefined1 uStack0000001e;
  
  _uStack00000014 = unaff_A6 + -0x18;
  _uStack00000010 = unaff_A6 + -8;
  uStack0000000c = 0;
  uStack0000000e = 0xe22;
  func_0x000038f8();
  uStack0000000c = 2;
  uStack0000000e = 0x5b5a;
  cVar3 = func_0x000038e0();
  if (cVar3 != '\0') {
    uStack0000001e = 1;
    sStack0000001c = (short)unaff_A6 + -8;
    piVar1 = *(int **)(unaff_A2 + 0x3e);
    uStack00000016 = (undefined2)((uint)piVar1 >> 0x10);
    uStack00000018 = SUB42(piVar1,0);
    uStack00000012 = 0;
    uStack00000014 = 0xe50;
    (**(code **)(*piVar1 + 0x3c0))();
    piVar1 = *(int **)(unaff_A2 + 0x3e);
    uStack00000012 = (undefined2)((uint)piVar1 >> 0x10);
    uStack00000014 = SUB42(piVar1,0);
    uStack0000000e = 0;
    uStack00000010 = 0xe5e;
    (**(code **)(*piVar1 + 0x268))();
  }
  sStack0000001c = (short)((uint)(unaff_A6 + -8) >> 0x10);
  uStack0000001e = (undefined1)((uint)(unaff_A6 + -8) >> 8);
  uStack00000018 = (undefined2)((uint)unaff_A3 >> 0x10);
  uStack00000014 = 0;
  uStack00000016 = 0xe6e;
  func_0x000038d0();
  puVar2 = *(undefined4 **)(unaff_A6 + 0x12);
  *puVar2 = *unaff_A3;
  puVar2[1] = unaff_A3[1];
  *unaff_D5 = *unaff_A3;
  unaff_D5[1] = unaff_A3[1];
  return;
}



// Function: FUN_00000e90 at 00000e90
// Size: 8 bytes

void FUN_00000e90(void)

{
  return;
}



// Function: FUN_00000e98 at 00000e98
// Size: 8 bytes

void FUN_00000e98(void)

{
  return;
}



// Function: FUN_00000ea0 at 00000ea0
// Size: 60 bytes

void FUN_00000ea0(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  func_0x00001d20(*(undefined4 *)(param_1 + 0x92));
  *(undefined4 *)(param_1 + 0x92) = extraout_A0;
  func_0x00001d20(*(undefined4 *)(param_1 + 0x96));
  *(undefined4 *)(param_1 + 0x96) = extraout_A0_00;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  FUN_000001e6(param_1);
  return;
}



// Function: FUN_00000edc at 00000edc
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000edc(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x86) = *param_2;
  if (*(char *)(param_1 + 0x82) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000f66 at 00000f66
// Size: 100 bytes

void FUN_00000f66(int param_1,undefined2 *param_2)

{
  char cVar1;
  undefined1 auStack_18 [8];
  undefined2 local_10;
  undefined2 local_e;
  undefined1 auStack_c [8];
  
  local_10 = *param_2;
  local_e = param_2[1];
  cVar1 = (**(code **)(**(int **)(param_1 + 0x7e) + 0x3a4))(*(int **)(param_1 + 0x7e),&local_10);
  if (cVar1 == '\0') {
    return;
  }
  if ((*(char *)(*(int *)(param_1 + 0x7e) + 0x8a) == '\0') && (*(char *)(param_1 + 0x82) != '\0')) {
    func_0x00007210(param_1 + 0x86,auStack_18);
    return;
  }
  func_0x00007250(auStack_c);
  return;
}



// Function: FUN_00001062 at 00001062
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001062(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000010c6 at 000010c6
// Size: 8 bytes

void FUN_000010c6(void)

{
  return;
}



// Function: FUN_000010ce at 000010ce
// Size: 210 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000010ce(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  
  if (param_4._6_1_ != '\0') {
    func_0x00007208((short)auStack_8);
    local_10 = *param_4._2_4_;
    local_c = param_4._2_4_[1];
    (**(code **)(**(int **)((int)param_1 + 0x7e) + 0x304))
              ((short)*(int **)((int)param_1 + 0x7e),(short)auStack_20);
    func_0x000038f8(&local_10,(short)auStack_20);
    (**(code **)(**(int **)((int)param_1 + 0x7e) + 0x434))
              (*(int **)((int)param_1 + 0x7e),auStack_8,&local_10);
    sVar2 = (short)param_1;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0xe8))(sVar2,(short)auStack_8);
      if (*(char *)((int)param_1 + 0x83) != '\0') {
        func_0x00007210(sVar2 + 0x86,(short)auStack_24);
        return;
      }
    }
    cVar1 = func_0x00007240((short)auStack_8,sVar2 + 0x8a);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xec))(sVar2,(short)auStack_8);
      (**(code **)(*param_1 + 0xf0))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_000011c2 at 000011c2
// Size: 124 bytes

void FUN_000011c2(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x7e) + 0x8a) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x7e) + 0x428))
              ((short)*(int **)(param_1 + 0x7e),(char)*(undefined4 *)(param_1 + 0x8e));
  }
  else {
    func_0x00007260((short)**(undefined4 **)(param_1 + 0x8e) + 2);
    (**(code **)(**(int **)(param_1 + 0x7e) + 0x420))((short)*(int **)(param_1 + 0x7e),0xf8);
  }
  return;
}



// Function: FUN_0000123e at 0000123e
// Size: 156 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000123e(int param_1,short *param_2)

{
  char cVar1;
  undefined1 auStack_20 [8];
  short local_18;
  short local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = *param_2;
  local_16 = param_2[1];
  cVar1 = (**(code **)(**(int **)(param_1 + 0x7e) + 0x3a4))(*(int **)(param_1 + 0x7e),&local_18);
  if (cVar1 == '\0') {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x7e) + 0x8a) != '\0') {
    local_14 = *(undefined4 *)param_2;
    local_10 = CONCAT22(*param_2 + 1,param_2[1] + 1);
    local_8 = local_10;
    local_c = local_14;
    func_0x00007258(&local_c,*(undefined4 *)(param_1 + 0x8e));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00007210(param_1 + 0x86,auStack_20);
  return;
}



// Function: FUN_00001340 at 00001340
// Size: 264 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001340(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  
  func_0x00007208((short)auStack_8);
  if (param_4._6_1_ != '\0') {
    (**(code **)(**(int **)((int)param_1 + 0x7e) + 0x304))
              ((short)*(int **)((int)param_1 + 0x7e),(short)auStack_20);
    local_10 = *param_4._2_4_;
    local_c = param_4._2_4_[1];
    func_0x000038f8((short)&local_10,(short)auStack_20);
    (**(code **)(**(int **)((int)param_1 + 0x7e) + 0x434))
              (*(int **)((int)param_1 + 0x7e),auStack_8,&local_10);
    sVar2 = (short)param_1;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0xe8))(sVar2,(short)auStack_8);
      if (*(char *)((int)param_1 + 0x83) != '\0') {
        func_0x00007210(sVar2 + 0x86,(short)auStack_24);
        return;
      }
    }
    cVar1 = func_0x00007240((short)auStack_8,sVar2 + 0x8a);
    if (cVar1 != '\0') {
      if ((*(char *)((int)param_1 + 0x82) == '\0') && (param_2._0_1_ != '\0')) {
        (**(code **)(*param_1 + 0xe8))(sVar2,(short)auStack_8);
        if (*(char *)((int)param_1 + 0x83) != '\0') {
          func_0x00007210(sVar2 + 0x86,(short)auStack_28);
          return;
        }
      }
      (**(code **)(*param_1 + 0xec))(sVar2,(short)auStack_8);
      (**(code **)(*param_1 + 0xf0))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00001480 at 00001480
// Size: 32 bytes

void FUN_00001480(int param_1,undefined4 param_2)

{
  FUN_00000edc(param_1,param_2);
  *(undefined2 *)(param_1 + 0x88) = 1;
  return;
}



// Function: FUN_000014a0 at 000014a0
// Size: 40 bytes

void FUN_000014a0(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(*(int *)(param_1 + 0x7e) + 0x7e);
  FUN_0000123e(param_1,param_2);
  return;
}



// Function: FUN_000014c8 at 000014c8
// Size: 32 bytes

void FUN_000014c8(int param_1,undefined4 param_2)

{
  FUN_00000edc(param_1,param_2);
  *(undefined2 *)(param_1 + 0x86) = 1;
  return;
}



// Function: FUN_000014e8 at 000014e8
// Size: 38 bytes

void FUN_000014e8(int param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)(*(int *)(param_1 + 0x7e) + 0x7c);
  FUN_0000123e(param_1,param_2);
  return;
}



// Function: FUN_0000150e at 0000150e
// Size: 70 bytes

undefined4 FUN_0000150e(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_00001dc8(param_2,param_2 * ((param_1 + param_2 / 2) / param_2),param_3);
  }
  return uVar1;
}



// Function: FUN_00001554 at 00001554
// Size: 432 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001554(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined4 *extraout_A0_02;
  undefined4 *extraout_A0_03;
  int *extraout_A0_04;
  undefined1 extraout_A0b;
  int *extraout_A0_05;
  int *extraout_A0_06;
  undefined4 extraout_A0_07;
  int *extraout_A0_08;
  int *extraout_A0_09;
  int *extraout_A0_10;
  int *extraout_A0_11;
  undefined4 *extraout_A0_12;
  undefined4 extraout_A0_13;
  int *extraout_A0_14;
  int *extraout_A0_15;
  undefined4 *extraout_A0_16;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 auStack_14 [16];
  
  *param_3 = _DAT_00025b5a;
  param_3[1] = _DAT_00025b5e;
  cVar8 = (char)param_1;
  (**(code **)(*param_1 + 0x304))(cVar8,(char)auStack_14);
  for (cVar3 = '\0'; cVar3 < '\x02'; cVar3 = cVar3 + '\x01') {
    func_0x00003918((char)auStack_14);
    uVar4 = (undefined1)((uint)extraout_A0 >> 0x10);
    func_0x000038a8((char)extraout_A0);
    iVar1 = *extraout_A0_00;
    uVar5 = (undefined1)((uint)param_2 >> 0x10);
    uVar6 = (undefined1)param_2;
    func_0x000038b0(uVar6,uVar4);
    if (*extraout_A0_01 < iVar1) {
      func_0x000038a8(cVar8 + ':');
      uVar10 = (undefined1)*extraout_A0_02;
      uVar7 = (undefined1)((uint)(param_1 + 0x27) >> 0x10);
      func_0x000038a8((char)(param_1 + 0x27),(char)((uint)*extraout_A0_02 >> 0x10));
      uVar9 = (undefined1)*extraout_A0_03;
      uVar4 = 0xea;
      func_0x000038b0(uVar6,(char)((uint)*extraout_A0_03 >> 0x10));
      iVar1 = *extraout_A0_04;
      func_0x00003918((short)auStack_14,uVar4);
      func_0x000038a8(extraout_A0b,uVar5,uVar7,uVar9,uVar10);
      uVar5 = (undefined1)((uint)(*extraout_A0_05 - iVar1) >> 0x10);
      iVar1 = FUN_0000150e((char)(*extraout_A0_05 - iVar1));
      func_0x000038a8((char)param_3,uVar5);
      *extraout_A0_06 = -iVar1;
    }
    else {
      func_0x00003918((char)auStack_14);
      uVar5 = (undefined1)((uint)extraout_A0_07 >> 0x10);
      func_0x000038a8((char)extraout_A0_07);
      iVar1 = *extraout_A0_08;
      func_0x000038b0(uVar6,uVar5);
      if (iVar1 < *extraout_A0_09) {
        uVar5 = (undefined1)((uint)((int)param_1 + 0x3a) >> 0x10);
        func_0x000038a8((char)((int)param_1 + 0x3a));
        iVar1 = *extraout_A0_10;
        func_0x000038a8(cVar8 + -0x7c,uVar5);
        uVar7 = (undefined1)(*extraout_A0_11 - iVar1);
        uVar5 = (undefined1)((uint)(param_1 + 0x27) >> 0x10);
        func_0x000038a8((char)(param_1 + 0x27),(char)((uint)(*extraout_A0_11 - iVar1) >> 0x10));
        uVar4 = (undefined1)((uint)*extraout_A0_12 >> 0x10);
        func_0x00003918((char)auStack_14,uVar5,(char)*extraout_A0_12,uVar7);
        uVar5 = (undefined1)((uint)extraout_A0_13 >> 0x10);
        func_0x000038a8((char)extraout_A0_13,uVar4);
        iVar1 = *extraout_A0_14;
        func_0x000038b0(uVar6,uVar5);
        uVar5 = (undefined1)((uint)(*extraout_A0_15 - iVar1) >> 0x10);
        uVar2 = FUN_0000150e((char)(*extraout_A0_15 - iVar1));
        func_0x000038a8((char)param_3,uVar5);
        *extraout_A0_16 = uVar2;
      }
    }
  }
  return;
}



// Function: FUN_00001704 at 00001704
// Size: 98 bytes

void FUN_00001704(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  
  FUN_00001d08(*(undefined4 *)(param_1 + 0x3a));
  *(undefined4 *)(param_1 + 0x3a) = extraout_A0;
  FUN_00001d08(*(undefined4 *)(param_1 + 0x3e));
  *(undefined4 *)(param_1 + 0x3e) = extraout_A0_00;
  FUN_00001d08(*(undefined4 *)(param_1 + 0x46));
  *(undefined4 *)(param_1 + 0x46) = extraout_A0_01;
  FUN_00001d08(*(undefined4 *)(param_1 + 0x4a));
  *(undefined4 *)(param_1 + 0x4a) = extraout_A0_02;
  FUN_00001d08(*(undefined4 *)(param_1 + 0x4e));
  *(undefined4 *)(param_1 + 0x4e) = extraout_A0_03;
  FUN_000001e6(param_1);
  return;
}



// Function: FUN_00001766 at 00001766
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001766(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  if (*(short *)(param_1 + 0x36) < *(short *)(param_1 + 0x38)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    local_c = 0;
    iVar1 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0x52);
    local_8 = -iVar1;
    if (iVar1 == 0 || local_8 < 0) {
      piVar2 = &local_c;
    }
    else {
      piVar2 = &local_8;
    }
    func_0x00001ec0(*(undefined4 *)(param_1 + 0x4e),*piVar2);
  }
  return;
}



// Function: FUN_000017c0 at 000017c0
// Size: 50 bytes

void FUN_000017c0(int param_1)

{
  if (*(short *)(param_1 + 0x42) < *(short *)(param_1 + 0x44)) {
    func_0x000075d0(*(undefined4 *)(*(int *)(param_1 + 0x2e) + 0x80));
    return;
  }
  return;
}



// Function: FUN_00001880 at 00001880
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001880(int param_1)

{
  int *piVar1;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x46) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    local_c = 0;
    local_8 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0x52);
    if (local_8 < 1) {
      piVar1 = &local_c;
    }
    else {
      piVar1 = &local_8;
    }
    func_0x00001ec0(*(undefined4 *)(param_1 + 0x4e),*piVar1);
  }
  return;
}



// Function: FUN_000018e6 at 000018e6
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000018e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001908 at 00001908
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001908(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000019cc at 000019cc
// Size: 80 bytes

void FUN_000019cc(int *param_1)

{
  if (param_1[1] != 0x68) {
    (**(code **)(*param_1 + 0xb4))();
  }
  (**(code **)(*param_1 + 0xb8))();
  if (param_1[1] != 0x68) {
    (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x3bc))();
  }
  return;
}



// Function: FUN_00001a1c at 00001a1c
// Size: 64 bytes

void FUN_00001a1c(int *param_1)

{
  char cVar1;
  
  func_0x00002468(param_1);
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa4))();
    if (cVar1 != '\0') {
      FUN_00000d90(*(undefined4 *)((int)param_1 + 0x2e),param_1);
    }
  }
  return;
}



// Function: FUN_00001a5c at 00001a5c
// Size: 82 bytes

void FUN_00001a5c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if ((param_2 == 0x1c) && (param_3 == *(int *)(param_1 + 0x2e))) {
    (**(code **)(**(int **)(param_1 + 0x16) + 0x118))();
  }
  else {
    func_0x00002470(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// Function: FUN_00001aae at 00001aae
// Size: 40 bytes

void FUN_00001aae(int *param_1)

{
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  (**(code **)(*param_1 + 0xbc))();
  return;
}



// Function: FUN_00001ad6 at 00001ad6
// Size: 118 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ad6(int *param_1)

{
  (**(code **)(*_DAT_000266a8 + 0x1a0))
            ((short)_DAT_000266a8,(char)*(undefined4 *)((int)param_1 + 0x2e));
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  (**(code **)(*param_1 + 0xc0))();
  (**(code **)(*param_1 + 0xc4))();
  (**(code **)(*param_1 + 0xb0))();
  if (param_1[1] != 0x68) {
    (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x3bc))();
  }
  return;
}



// Function: FUN_00001b4c at 00001b4c
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b4c(int *param_1)

{
  (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,*(undefined4 *)((int)param_1 + 0x2e));
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  (**(code **)(*param_1 + 0xb0))();
  (**(code **)(*param_1 + 0xbc))();
  return;
}



// Function: FUN_00001b9a at 00001b9a
// Size: 36 bytes

void FUN_00001b9a(int param_1)

{
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  FUN_00001704(param_1);
  return;
}



// Function: FUN_00001bbe at 00001bbe
// Size: 82 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bbe(int *param_1)

{
  int iVar1;
  char cVar2;
  int extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined1 uVar3;
  undefined1 auStack_8a [12];
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 uStack_76;
  undefined4 uStack_72;
  undefined4 uStack_6e;
  undefined4 uStack_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 uStack_5a;
  undefined4 uStack_56;
  undefined4 uStack_52;
  int *piStack_4e;
  undefined1 auStack_4a [52];
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  uVar3 = SUB41(auStack_8a,0);
  FUN_00001e00(uVar3,0,2);
  local_7e = 0x32;
  local_7a = 100;
  local_66 = 0x32;
  local_62 = 100;
  local_5e = 8;
  uStack_5a = 10;
  uStack_56 = 0;
  uStack_52 = 10;
  uStack_76 = 8;
  uStack_72 = 10;
  uStack_6e = 0;
  uStack_6a = 10;
  func_0x000073b0(0xd2);
  piStack_4e = (int *)0x0;
  if (extraout_A0 != 0) {
    func_0x00004678(extraout_A0);
    piStack_4e = extraout_A0_00;
  }
  func_0x00004680(piStack_4e,0,0,&DAT_00025b5a,&local_66,uVar3,(short)&uStack_76,(short)auStack_8a);
  *(undefined1 *)(piStack_4e + 0x2f) = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  puStack_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    cVar2 = (**(code **)(*param_1 + 0xa8))();
    if (cVar2 == '\0') {
      FUN_00001e60();
    }
    _DAT_00025f52 = puStack_10;
  }
  else {
    FUN_00000e10(piStack_4e);
    piStack_4e = extraout_A0_01;
    FUN_00001c10((short)((uint)uStack_14 >> 0x10));
  }
  (**(code **)(*piStack_4e + 0x418))((short)piStack_4e,*(undefined4 *)((int)param_1 + 0x3a));
  FUN_00001e60();
  if (*(char *)((int)piStack_4e + 0xbd) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001e60();
  *(undefined1 *)((int)piStack_4e + 0xbf) = 1;
  (**(code **)(*param_1 + 0x9c))((short)param_1,piStack_4e);
  *(undefined1 *)(param_1 + 0x16) = 1;
  (**(code **)(*param_1 + 0xbc))();
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 248 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  undefined2 uVar1;
  undefined4 in_D0;
  int iVar2;
  char cVar3;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar4;
  undefined4 extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  undefined1 uStack00000004;
  undefined1 uStack00000005;
  undefined2 uStack00000008;
  undefined2 uStack0000000c;
  
  *(undefined4 *)(unaff_A6 + -0x56) = in_D0;
  *(undefined4 *)(unaff_A6 + -0x52) = 0;
  *(undefined4 *)(unaff_A6 + -0x4e) = 10;
  *(undefined4 *)(unaff_A6 + -0x72) = *(undefined4 *)(unaff_A6 + -0x5a);
  *(undefined4 *)(unaff_A6 + -0x6e) = *(undefined4 *)(unaff_A6 + -0x56);
  *(undefined4 *)(unaff_A6 + -0x6a) = *(undefined4 *)(unaff_A6 + -0x52);
  *(undefined4 *)(unaff_A6 + -0x66) = *(undefined4 *)(unaff_A6 + -0x4e);
  func_0x000073b0(0xd2);
  uVar4 = 0;
  if (extraout_A0 != 0) {
    *(int *)(unaff_A6 + -0x8e) = extraout_A0;
    *(int *)(unaff_A6 + -0x8a) = extraout_A0;
    uStack0000000c = 0x1c52;
    func_0x00004678();
    uVar4 = extraout_A0_00;
  }
  *(undefined4 *)(unaff_A6 + -0x4a) = uVar4;
  uStack0000000c = 0;
  uStack00000008 = (undefined2)((uint)(unaff_A6 + -0x86) >> 0x10);
  uStack00000004 = (undefined1)((uint)(unaff_A6 + -0x72) >> 0x18);
  uStack00000005 = (undefined1)((uint)(unaff_A6 + -0x72) >> 0x10);
  func_0x00004680(*(undefined4 *)(unaff_A6 + -0x4a),0,0,&DAT_00025b5a,unaff_A6 + -0x62);
  *(undefined1 *)(*(int *)(unaff_A6 + -0x4a) + 0xbc) = 0;
  *(undefined2 *)(unaff_A6 + -0x12) = 0;
  *(undefined4 *)(unaff_A6 + -0x10) = 0;
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar2 = func_0x000076a8(unaff_A6 + -0x46);
  if (iVar2 == 0) {
    uStack0000000c = 0x1cdc;
    cVar3 = (**(code **)(*unaff_A2 + 0xa8))();
    if (cVar3 == '\0') {
      FUN_00001e60();
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
  }
  else {
    uStack0000000c = 0x1cfc;
    FUN_00000e10();
    *(undefined4 *)(unaff_A6 + -0x4a) = extraout_A0_01;
    uStack0000000c = (undefined2)*(undefined4 *)(unaff_A6 + -0x10);
    uStack00000008 = *(undefined2 *)(unaff_A6 + -0x12);
    uStack00000004 = 0;
    uStack00000005 = 0;
    FUN_00001c10();
  }
  uStack0000000c = SUB42(*(int **)(unaff_A6 + -0x4a),0);
  uStack00000008 = 0x1d24;
  (**(code **)(**(int **)(unaff_A6 + -0x4a) + 0x418))();
  uStack00000008 = 0x1d2a;
  FUN_00001e60();
  if (*(char *)(*(int *)(unaff_A6 + -0x4a) + 0xbd) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001e60();
  *(undefined1 *)(*(int *)(unaff_A6 + -0x4a) + 0xbf) = 1;
  uStack0000000c = SUB42(unaff_A2,0);
  uVar1 = uStack0000000c;
  uStack00000008 = 0x1d6e;
  (**(code **)(*unaff_A2 + 0x9c))();
  *(undefined1 *)(unaff_A2 + 0x16) = 1;
  uStack00000004 = 0x1d;
  uStack00000005 = 0x80;
  uStack00000008 = uVar1;
  (**(code **)(*unaff_A2 + 0xbc))();
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 127 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d08(void)

{
  int *unaff_A2;
  int unaff_A6;
  undefined4 uStack00000006;
  undefined2 uStack_2;
  
  FUN_00001c10();
  uStack00000006 = *(undefined4 *)((int)unaff_A2 + 0x3a);
  (**(code **)(**(int **)(unaff_A6 + -0x4a) + 0x418))();
  FUN_00001e60();
  if (*(char *)(*(int *)(unaff_A6 + -0x4a) + 0xbd) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack00000006 = 0x1d54;
  FUN_00001e60();
  *(undefined1 *)(*(int *)(unaff_A6 + -0x4a) + 0xbf) = 1;
  uStack00000006 = *(undefined4 *)(unaff_A6 + -0x4a);
  (**(code **)(*unaff_A2 + 0x9c))();
  *(undefined1 *)(unaff_A2 + 0x16) = 1;
  uStack_2 = (undefined2)((uint)unaff_A2 >> 0x10);
  (**(code **)(*(int *)CONCAT22(uStack_2,(short)unaff_A2) + 0xbc))();
  return;
}



// Function: FUN_00001d8a at 00001d8a
// Size: 32 bytes

void FUN_00001d8a(int param_1)

{
  if (*(int *)(param_1 + 4) == 0x67) {
    FUN_00001908(param_1);
  }
  return;
}



// Function: FUN_00001daa at 00001daa
// Size: 30 bytes

void FUN_00001daa(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x408))
            (*(int **)(param_1 + 0x2e),*(undefined2 *)(param_1 + 0x38));
  return;
}



// Function: FUN_00001dc8 at 00001dc8
// Size: 24 bytes

void FUN_00001dc8(void)

{
  int unaff_A2;
  
  (**(code **)(**(int **)(unaff_A2 + 0x2e) + 0x408))();
  return;
}



// Function: FUN_00001de0 at 00001de0
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001de0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x1d8))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e00 at 00001e00
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e00(void)

{
  byte *pbVar1;
  short unaff_D3w;
  int unaff_A6;
  
  pbVar1 = (byte *)(unaff_A6 + 0x6a + (int)unaff_D3w);
  *pbVar1 = *pbVar1 | 8;
  DAT_00002f0b = DAT_00002f0b | 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e60 at 00001e60
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e98 at 00001e98
// Size: 66 bytes

void FUN_00001e98(int *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = *(undefined4 *)((int)param_1 + 0x66);
  local_c = *(undefined4 *)((int)param_1 + 0x6a);
  local_8 = *(undefined4 *)((int)param_1 + 0x6e);
  (**(code **)(*param_1 + 200))(param_1,&local_10);
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xffdf;
  return;
}



// Function: FUN_00001eda at 00001eda
// Size: 110 bytes

void FUN_00001eda(int *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  (**(code **)(*param_1 + 0xb0))();
  if (*(char *)(*(int *)((int)param_1 + 0x2e) + 0xbd) == '\0') {
    local_10 = *(undefined4 *)((int)param_1 + 0x5a);
    local_c = *(undefined4 *)((int)param_1 + 0x5e);
    local_8 = *(undefined4 *)((int)param_1 + 0x62);
    (**(code **)(*param_1 + 200))(param_1,&local_10);
  }
  else {
    (**(code **)(*param_1 + 0xcc))(param_1,*(undefined4 *)((int)param_1 + 0x3e));
  }
  return;
}



// Function: FUN_00001f48 at 00001f48
// Size: 58 bytes

void FUN_00001f48(int *param_1)

{
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  (**(code **)(*param_1 + 0xb0))();
  (**(code **)(*param_1 + 0x84))();
  return;
}



// Function: FUN_00001f82 at 00001f82
// Size: 24 bytes

void FUN_00001f82(int param_1)

{
  func_0x000075d0(*(undefined4 *)(param_1 + 0x3a));
  return;
}



// Function: FUN_000020c6 at 000020c6
// Size: 32 bytes

void FUN_000020c6(int *param_1)

{
  (**(code **)(*param_1 + 0xdc))();
  FUN_00001ad6(param_1);
  return;
}



// Function: FUN_000020e6 at 000020e6
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000020e6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000020fa at 000020fa
// Size: 8 bytes

void FUN_000020fa(void)

{
  return;
}



// Function: FUN_00002102 at 00002102
// Size: 80 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002102(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3._6_1_ != '\0') {
    local_14 = *param_2._2_4_;
    local_10 = param_2._2_4_[1];
    local_c = *param_3._2_4_;
    local_8 = param_3._2_4_[1];
    func_0x00003968(&local_14);
    (**(code **)(*param_1 + 0x148))(param_1,&local_14,auStack_1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002168 at 00002168
// Size: 8 bytes

void FUN_00002168(void)

{
  return;
}



