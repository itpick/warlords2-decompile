// Warlords II - Decompiled 68k Code
// Segment: CODE_160
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000040 at 00000040
// Size: 12 bytes

void FUN_00000040(void)

{
  int *in_A0;
  
  (**(code **)(*in_A0 + 0x3a8))();
  return;
}



// Function: FUN_0000004c at 0000004c
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000004c(void)

{
  if (_DAT_000261b6 != (int *)0x0) {
    (**(code **)(*_DAT_000261b6 + 0x58))();
  }
  return;
}



// Function: FUN_00000072 at 00000072
// Size: 37 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000072(undefined4 param_1)

{
  if (_DAT_000261b6 != (int *)0x0) {
    (**(code **)(*_DAT_000261b6 + 0x60))(_DAT_000261b6,param_1);
  }
  return;
}



// Function: FUN_00000098 at 00000098
// Size: 264 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000098(byte *param_1)

{
  int iVar1;
  char cVar2;
  int extraout_A0;
  undefined2 uVar3;
  int local_68 [25];
  
  FUN_000025a0((short)local_68,(short)*(undefined4 *)(_DAT_000261b2 + 4));
  (**(code **)(local_68[0] + 0xc))();
  while( true ) {
    iVar1 = local_68[1];
    cVar2 = FUN_000025d0((char)local_68);
    if (cVar2 == '\0') break;
    (**(code **)(**(int **)(_DAT_000261b2 + 4) + 0x94))
              ((short)*(int **)(_DAT_000261b2 + 4),(char)iVar1);
    while( true ) {
      uVar3 = SUB42(param_1,0);
      cVar2 = func_0x00007308(uVar3,(short)**(undefined4 **)(extraout_A0 + 4));
      if (cVar2 == '\0') break;
      func_0x00007318(uVar3,*(undefined1 *)**(undefined4 **)(extraout_A0 + 4));
      if ((uint)*(byte *)**(undefined4 **)(extraout_A0 + 8) + (uint)*param_1 < 0x100) {
        func_0x000072e8(uVar3,(short)**(undefined4 **)(extraout_A0 + 8),0xff);
      }
    }
    (**(code **)(local_68[0] + 0x10))();
  }
  func_0x000025a8((short)local_68);
  return;
}



// Function: FUN_000001a0 at 000001a0
// Size: 174 bytes

void FUN_000001a0(int param_1,int param_2,int *param_3,undefined2 param_4)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  if ((param_2 == 0xc) && (param_1 == *(int *)((int)param_3 + 0x1e))) {
    func_0x00004b40((short)local_68,(short)param_1);
    func_0x00004b48((short)local_68);
    piVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(local_68[0] + 8))();
      if (cVar1 == '\0') break;
      if (piVar2 != param_3) {
        (**(code **)(*piVar2 + 0x6c))(piVar2,0x20,(short)param_1,0);
      }
      func_0x00004b50((short)local_68);
      piVar2 = extraout_A0_00;
    }
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((int)param_3 + 0x16);
    FUN_00002798((short)local_68);
  }
  FUN_00003538(param_1,(short)param_2,(short)param_3,param_4);
  return;
}



// Function: FUN_0000024e at 0000024e
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000024e(int param_1,undefined4 param_2)

{
  undefined1 auStack_20 [28];
  
  func_0x00007208(auStack_20);
  if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_00000440 at 00000440
// Size: 84 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000440(int *param_1)

{
  undefined1 auStack_136 [8];
  undefined1 auStack_12e [42];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  (**(code **)(*param_1 + 0x3d4))(param_1,local_104);
  FUN_00000098(local_104);
  FUN_00001ca8((short)auStack_12e);
  FUN_00001d50(auStack_136);
  func_0x00007310(local_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000542 at 00000542
// Size: 72 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000542(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    cVar1 = func_0x00001d60(*(undefined4 *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_00000682 at 00000682
// Size: 108 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000682(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_2a [8];
  undefined1 auStack_22 [30];
  
  if (*(int *)((int)param_1 + 0xa6) != 0) {
    cVar1 = func_0x00001d60(*(undefined4 *)((int)param_1 + 0xa6));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)((int)param_1 + 0xa6) != 0) {
      (**(code **)(*param_1 + 0x39c))(param_1,auStack_22);
      (**(code **)(*param_1 + 0x148))(param_1,auStack_22,auStack_2a);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_00000728 at 00000728
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000750 at 00000750
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000750(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    cVar1 = func_0x00001d60(*(undefined4 *)(param_1 + 0xa8));
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0xa5) == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_0000081a at 0000081a
// Size: 104 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000081a(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  if (*(int *)((int)param_1 + 0xa6) != 0) {
    cVar1 = func_0x00001d60(*(undefined4 *)((int)param_1 + 0xa6));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)((int)param_1 + 0xa6) != 0) {
      (**(code **)(*param_1 + 0x39c))(param_1,auStack_14);
      (**(code **)(*param_1 + 0x148))(param_1,auStack_14,auStack_1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_000008b4 at 000008b4
// Size: 230 bytes

int FUN_000008b4(int *param_1)

{
  char cVar3;
  int iVar1;
  short sVar2;
  
  cVar3 = (**(code **)(*param_1 + 0x344))();
  if (cVar3 == '\0') {
    iVar1 = FUN_00000728((short)param_1);
    return iVar1;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xd6) + 0x3a) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x26c))();
    goto LAB_00000972;
  }
  sVar2 = FUN_00001d30();
  iVar1 = (int)sVar2;
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0xd6) + 0x3e);
      if (iVar1 != *(int *)(*(int *)((int)param_1 + 0xd6) + 0x88)) {
        iVar1 = (**(code **)(*param_1 + 0x26c))();
      }
      goto LAB_00000972;
    }
    if (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      if ((iVar1 == 0) &&
         (iVar1 = *(int *)(*(int *)((int)param_1 + 0xd6) + 0x88) / 2,
         iVar1 != *(int *)(*(int *)((int)param_1 + 0xd6) + 0x3e))) {
        iVar1 = (**(code **)(*param_1 + 0x26c))();
      }
      goto LAB_00000972;
    }
  }
  iVar1 = 0;
  if (*(int *)(*(int *)((int)param_1 + 0xd6) + 0x3e) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x26c))();
  }
LAB_00000972:
  if (*(int *)((int)param_1 + 0xd2) != 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0xd2) + 0x404))();
  }
  return iVar1;
}



// Function: FUN_0000099a at 0000099a
// Size: 38 bytes

void FUN_0000099a(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xd2) != 0) {
    (**(code **)(**(int **)(param_1 + 0xd2) + 0x354))(*(int **)(param_1 + 0xd2),param_2);
  }
  return;
}



// Function: FUN_000009c0 at 000009c0
// Size: 76 bytes

undefined4 FUN_000009c0(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0xd2) != 0) {
    (**(code **)(*param_1 + 0x110))(param_1,0);
    (**(code **)(*extraout_A0 + 0x118))();
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0xd2) + 0x348))();
  }
  return uVar1;
}



// Function: FUN_00000a0c at 00000a0c
// Size: 40 bytes

void FUN_00000a0c(int *param_1,undefined4 param_2)

{
  *(undefined1 *)((int)param_1 + 0xae) = param_2._0_1_;
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000a34 at 00000a34
// Size: 18 bytes

void FUN_00000a34(undefined4 param_1,undefined4 param_2)

{
  FUN_00000098(param_2);
  return;
}



// Function: FUN_00000a46 at 00000a46
// Size: 132 bytes

void FUN_00000a46(int *param_1,undefined4 param_2)

{
  undefined1 auStack_114 [16];
  undefined1 local_104;
  undefined1 auStack_103 [255];
  
  if (param_1[0x2a] != 0) {
    local_104 = 0;
    (**(code **)(*param_1 + 0x3d4))(param_1,&local_104);
    (**(code **)(*param_1 + 0x3d0))(param_1,&local_104);
    (**(code **)(*param_1 + 0x39c))(param_1,auStack_114);
    (**(code **)(*param_1 + 0x3d8))(param_1,auStack_103,local_104,(short)auStack_114);
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_00000aca at 00000aca
// Size: 82 bytes

undefined1 * FUN_00000aca(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    puVar2 = &DAT_00025b76;
    puVar3 = param_2;
    for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    param_2 = (undefined1 *)FUN_00001d00(**(undefined4 **)(param_1 + 0xa8),param_2);
  }
  return param_2;
}



// Function: FUN_00000b1c at 00000b1c
// Size: 80 bytes

void FUN_00000b1c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x148))(param_1,param_4,auStack_c);
  func_0x00001db8(param_2,param_3,auStack_c);
  return;
}



// Function: FUN_00000b6c at 00000b6c
// Size: 88 bytes

bool FUN_00000b6c(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  char cVar1;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *param_4;
  local_6 = param_4[1];
  cVar1 = func_0x00005d08(param_1,param_2,param_3,&local_8);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
  }
  return cVar1 != '\0';
}



// Function: FUN_00000bc4 at 00000bc4
// Size: 48 bytes

void FUN_00000bc4(int *param_1)

{
  if (*(int *)((int)param_1 + 0xb2) == 0) {
    (**(code **)(*param_1 + 0x408))();
  }
  FUN_00003708((char)param_1);
  return;
}



// Function: FUN_00000bf4 at 00000bf4
// Size: 94 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bf4(int *param_1)

{
  if (*(int *)((int)param_1 + 0xb2) == 0) {
    (**(code **)(*param_1 + 0x408))();
    (**(code **)(*_DAT_000266a8 + 0x1a0))
              ((short)_DAT_000266a8,(short)*(undefined4 *)((int)param_1 + 0xb2));
  }
  else {
    (**(code **)(*_DAT_000266a8 + 0x1a0))
              ((short)_DAT_000266a8,(char)*(undefined4 *)((int)param_1 + 0xb2));
  }
  func_0x00003710((char)param_1);
  return;
}



// Function: FUN_00000c52 at 00000c52
// Size: 44 bytes

void FUN_00000c52(int *param_1)

{
  (**(code **)(*param_1 + 0x3f4))(param_1,0x7fff);
  (**(code **)(*param_1 + 0x3fc))();
  return;
}



// Function: FUN_00000c7e at 00000c7e
// Size: 68 bytes

void FUN_00000c7e(int param_1)

{
  FUN_00000a0c(param_1);
  if (*(int *)(param_1 + 0xb2) != 0) {
    (**(code **)(**(int **)(param_1 + 0xb2) + 0x3f0))();
  }
  return;
}



// Function: FUN_00000cc2 at 00000cc2
// Size: 116 bytes

bool FUN_00000cc2(int *param_1)

{
  int iVar1;
  int *extraout_A0;
  
  if (*(int *)((int)param_1 + 0xb2) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0xb2) + 0x110))(*(int **)((int)param_1 + 0xb2),0);
    (**(code **)(*extraout_A0 + 0x118))();
  }
  iVar1 = (**(code **)(*param_1 + 0x348))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x354))(param_1,iVar1);
  }
  else {
    (**(code **)(*param_1 + 0x404))();
  }
  return iVar1 == 0;
}



// Function: FUN_00000d36 at 00000d36
// Size: 8 bytes

void FUN_00000d36(void)

{
  return;
}



// Function: FUN_00000d3e at 00000d3e
// Size: 134 bytes

undefined1 * FUN_00000d3e(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *extraout_A0;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0xb2) == 0) {
    param_2 = (undefined1 *)FUN_00000aca(param_1,param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xb2) + 0x3fc))();
    puVar5 = extraout_A0;
    func_0x000075d0();
    local_c = puVar5;
    local_8 = (undefined4 *)0xff;
    if ((int)puVar5 < 0x100) {
      ppuVar3 = &local_c;
    }
    else {
      ppuVar3 = &local_8;
    }
    puVar5 = *ppuVar3;
    *param_2 = (char)puVar5;
    param_2 = param_2 + 1;
    puVar1 = (undefined1 *)*extraout_A0;
    puVar2 = param_2;
    for (iVar4 = (int)(short)puVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return param_2;
}



// Function: FUN_00000dc4 at 00000dc4
// Size: 76 bytes

void FUN_00000dc4(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_c [8];
  
  if (-1 < param_3) {
    (**(code **)(*param_1 + 0x148))(param_1,param_4,auStack_c);
    func_0x00001db8(param_2,param_3,auStack_c);
  }
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 10 bytes

void FUN_00000e10(void)

{
  return;
}



// Function: FUN_00000e1a at 00000e1a
// Size: 126 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e1a(int *param_1)

{
  int *extraout_A0;
  undefined2 uVar1;
  
  uVar1 = SUB42(param_1,0);
  if (*(int *)((int)param_1 + 0xb2) == 0) {
    (**(code **)(*param_1 + 0x410))();
    (**(code **)(*extraout_A0 + 0x420))(extraout_A0,uVar1);
    *(int **)((int)param_1 + 0xb2) = extraout_A0;
  }
  if (*(char *)((int)param_1 + 0x81) != '\0') {
    (**(code **)(*param_1 + 0x200))(uVar1,(short)_DAT_000267f4);
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    (**(code **)(*param_1 + 0x200))(uVar1,(short)_DAT_00026800);
  }
  return;
}



// Function: FUN_00000e98 at 00000e98
// Size: 14 bytes

void FUN_00000e98(void)

{
  FUN_0000004c();
  return;
}



// Function: FUN_00000ea6 at 00000ea6
// Size: 30 bytes

void FUN_00000ea6(int param_1)

{
  FUN_00000072(*(undefined4 *)(param_1 + 0xb2));
  *(undefined4 *)(param_1 + 0xb2) = 0;
  return;
}



// Function: FUN_00000ec4 at 00000ec4
// Size: 194 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_00000ec4(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [4];
  int local_18;
  undefined1 auStack_14 [16];
  
  uVar5 = (undefined2)((uint)auStack_14 >> 0x10);
  uVar4 = (undefined2)((uint)param_1 >> 0x10);
  (**(code **)(*param_1 + 0x304))((short)param_1,(char)auStack_14);
  local_28[1] = 0xfffffff6;
  local_28[2] = 0xfffffff6;
  piVar2 = local_28 + 1;
  puVar3 = auStack_14;
  FUN_00003948((short)puVar3,(short)piVar2);
  local_2c = 30000;
  local_28[0] = FUN_00003978((short)auStack_14,(short)((uint)puVar3 >> 0x10),
                             (short)((uint)piVar2 >> 0x10),uVar4,uVar5);
  if (local_28[0] < local_2c) {
    piVar2 = local_28;
  }
  else {
    piVar2 = &local_2c;
  }
  iVar1 = *piVar2;
  local_34 = 30000;
  local_30 = FUN_00003978((short)auStack_14);
  if (local_30 < local_34) {
    piVar2 = &local_30;
  }
  else {
    piVar2 = &local_34;
  }
  local_28[3] = *piVar2;
  local_18 = iVar1;
  (**(code **)(*param_1 + 0x290))((short)param_1,(short)auStack_14,(short)local_28 + 0xc);
  return;
}



// Function: FUN_00000f86 at 00000f86
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f86(int *param_1)

{
  if (*(int *)((int)param_1 + 0xb2) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0xb2) + 0x420))((short)*(int **)((int)param_1 + 0xb2),0);
    (**(code **)(*param_1 + 0x414))();
  }
  if (*(char *)((int)param_1 + 0x81) != '\0') {
    (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_000267f4);
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_00026800);
  }
  return;
}



// Function: FUN_00001002 at 00001002
// Size: 54 bytes

void FUN_00001002(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xb2) != 0) {
    if (param_3._0_1_ != '\0') {
      (**(code **)(**(int **)(param_1 + 0xb2) + 0x340))();
    }
    (**(code **)(**(int **)(param_1 + 0xb2) + 0x3e4))();
  }
  return;
}



// Function: FUN_00001038 at 00001038
// Size: 28 bytes

void FUN_00001038(void)

{
  int unaff_A2;
  
  (**(code **)(**(int **)(unaff_A2 + 0xb2) + 0x3e4))();
  return;
}



// Function: FUN_00001054 at 00001054
// Size: 68 bytes

int FUN_00001054(int param_1)

{
  int iVar1;
  short sVar2;
  
  iVar1 = func_0x00004e38(param_1);
  if ((iVar1 == 0) && (*(int *)(param_1 + 0xb2) != 0)) {
    sVar2 = (**(code **)(**(int **)(param_1 + 0xb2) + 0x3ec))();
    if (*(short *)(param_1 + 0xb0) < sVar2) {
      iVar1 = 5;
    }
  }
  return iVar1;
}



// Function: FUN_00001098 at 00001098
// Size: 52 bytes

undefined4 FUN_00001098(int *param_1)

{
  char cVar1;
  
  if (((*(char *)((int)param_1 + 0x51) != '\0') && (*(int *)((int)param_1 + 0xb2) == 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x74))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_000010cc at 000010cc
// Size: 18 bytes

void FUN_000010cc(undefined4 param_1)

{
  FUN_00003848(param_1);
  return;
}



// Function: FUN_000010de at 000010de
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000010de(int param_1)

{
  char cVar2;
  undefined4 uVar1;
  int extraout_A0;
  
  (**(code **)(*_DAT_000266a8 + 0x1a4))();
  if (param_1 == extraout_A0) {
LAB_00001120:
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xb2) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xb2) + 0xd0))();
      if (cVar2 != '\0') goto LAB_00001120;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001128 at 00001128
// Size: 58 bytes

void FUN_00001128(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_14,auStack_1c);
  func_0x00007258(auStack_1c,param_3);
  return;
}



// Function: FUN_0000116c at 0000116c
// Size: 134 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000116c(int *param_1)

{
  undefined4 extraout_A0;
  undefined1 local_12c [10];
  undefined2 local_122;
  undefined1 auStack_120 [26];
  undefined2 local_106;
  char local_104 [256];
  
  local_104[0] = '\0';
  (**(code **)(*param_1 + 0x3d4))(param_1,local_104);
  if (local_104[0] != '\0') {
    local_106 = 0;
    local_122 = 0;
    func_0x000072f8(local_104,&local_106,auStack_120,&local_122);
    func_0x00007698(extraout_A0);
    func_0x00007688(local_12c,auStack_120);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_0000120a at 0000120a
// Size: 52 bytes

void FUN_0000120a(int *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x5c))();
  }
  else {
    param_1[1] = 0;
  }
  return;
}



// Function: FUN_0000123e at 0000123e
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000123e(void)

{
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int iVar1;
  int *in_stack_ffffffde;
  
  iVar1 = 0;
  if (_DAT_000266a8 != 0) {
    in_stack_ffffffde = _DAT_000257ee;
    (**(code **)(*_DAT_000257ee + 0x6c))(_DAT_000257ee,0,0);
    iVar1 = extraout_A0;
  }
  if (iVar1 == 0) {
    func_0x000073b0(0xda);
    iVar1 = 0;
    if (extraout_A0_00 != 0) {
      func_0x00004428(extraout_A0_00);
      iVar1 = extraout_A0_01;
    }
    func_0x00004430(iVar1,0,0,0x25b5a,0x25b5a,
                    CONCAT13(1,(int3)CONCAT22((short)((uint)in_stack_ffffffde >> 0x10),
                                              CONCAT11(4,(char)in_stack_ffffffde))),0x25b62,0x5ca0);
  }
  *(undefined2 *)(iVar1 + 0xca) = 1;
  return;
}



// Function: FUN_000012e2 at 000012e2
// Size: 38 bytes

void FUN_000012e2(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = extraout_A0;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_00001308 at 00001308
// Size: 186 bytes

void FUN_00001308(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int extraout_A0;
  int extraout_A0_00;
  
  if (param_2 == 0x1a) {
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x188))(param_1,param_1[0x1f]);
      if (param_3 == extraout_A0) {
        (**(code **)(*param_1 + 0x3a0))();
      }
    }
    FUN_00003868(param_1,0x1a,param_3,param_4);
  }
  else if (param_2 == 0x1b) {
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x188))(param_1,param_1[0x1f]);
      if (param_3 == extraout_A0_00) {
        (**(code **)(*param_1 + 0x3a0))();
      }
    }
    FUN_00003868(param_1,0x1b,param_3,param_4);
  }
  else {
    FUN_00003868(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000013c2 at 000013c2
// Size: 114 bytes

void FUN_000013c2(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  char cVar1;
  int *extraout_A0;
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x188))(param_1,param_1[0x1f]);
  if (extraout_A0 != (int *)0x0) {
    cVar1 = (**(code **)(*extraout_A0 + 0xa4))();
    if (cVar1 != '\0') {
      (**(code **)(*extraout_A0 + 0xc4))();
    }
  }
  local_8 = *param_4;
  local_6 = param_4[1];
  func_0x00005d08(param_1,param_2,param_3,&local_8);
  return;
}



// Function: FUN_00001434 at 00001434
// Size: 50 bytes

void FUN_00001434(int *param_1,undefined4 param_2)

{
  undefined1 auStack_56 [74];
  undefined1 auStack_c [8];
  
  FUN_00001c90(auStack_56);
  (**(code **)(*param_1 + 0x30c))(param_1,auStack_c);
  func_0x00007258(auStack_c,param_2);
  return;
}



// Function: FUN_000014bc at 000014bc
// Size: 72 bytes

void FUN_000014bc(int *param_1)

{
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  FUN_00001c90(auStack_4e);
  (**(code **)(*param_1 + 0x39c))(param_1,local_8);
  (**(code **)(*param_1 + 0x278))(param_1,local_8);
  FUN_00001c98((short)auStack_4e);
  return;
}



// Function: FUN_00001504 at 00001504
// Size: 96 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001504(int *param_1)

{
  int extraout_A0;
  int extraout_A0_00;
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x188))(param_1,param_1[0x1f]);
  (**(code **)(*_DAT_000266a8 + 0x1a4))();
  if (extraout_A0_00 == extraout_A0) {
    FUN_00001c90(auStack_4e);
    (**(code **)(*param_1 + 0x39c))(param_1,local_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001578 at 00001578
// Size: 140 bytes

void FUN_00001578(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x29c))();
  if (((param_2 == iVar1) && (param_3 != param_1)) &&
     (cVar2 = (**(code **)(*param_1 + 0x74))(), cVar2 != '\0')) {
    cVar2 = (**(code **)(*param_1 + 0x3b0))();
    if (cVar2 != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0x3a4))();
    FUN_00003538(param_1,param_2,param_1,param_4);
    return;
  }
  FUN_00003538(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_00001604 at 00001604
// Size: 58 bytes

void FUN_00001604(int *param_1,int param_2,undefined2 param_3,undefined1 param_4)

{
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x430))();
  }
  FUN_00003538(param_1,(short)param_2,param_3,param_4);
  return;
}



// Function: FUN_0000163e at 0000163e
// Size: 30 bytes

bool FUN_0000163e(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x3e0))();
  return iVar1 != 0;
}



// Function: FUN_0000165c at 0000165c
// Size: 34 bytes

void FUN_0000165c(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3ec))(param_1,param_2._0_1_);
  return;
}



// Function: FUN_0000167e at 0000167e
// Size: 52 bytes

void FUN_0000167e(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x428))();
  (**(code **)(*param_1 + 0x3ec))(param_1,cVar1 == '\0');
  return;
}



// Function: FUN_000016b2 at 000016b2
// Size: 80 bytes

void FUN_000016b2(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x428))();
  if (cVar1 == param_2._0_1_) {
    cVar1 = (**(code **)(*param_1 + 0x428))();
    (**(code **)(*param_1 + 0x3ec))((short)param_1,cVar1 == '\0');
  }
  return;
}



// Function: FUN_00001702 at 00001702
// Size: 178 bytes

void FUN_00001702(int *param_1,int param_2,undefined2 param_3,undefined1 param_4)

{
  char cVar1;
  
  if (param_2 == 0xc) {
    cVar1 = (**(code **)(*param_1 + 0x428))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x430))();
    }
    FUN_00003538(param_1,0xc,param_3,param_4);
  }
  else if (param_2 == 0x1f) {
    (**(code **)(*param_1 + 0x42c))();
  }
  else if (param_2 == 0x20) {
    (**(code **)(*param_1 + 0x42c))();
  }
  else {
    FUN_00003538(param_1,(short)param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000017b4 at 000017b4
// Size: 30 bytes

bool FUN_000017b4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x3e0))();
  return iVar1 != 0;
}



// Function: FUN_000017d2 at 000017d2
// Size: 34 bytes

void FUN_000017d2(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3ec))(param_1,param_2._0_1_);
  return;
}



// Function: FUN_000017f4 at 000017f4
// Size: 52 bytes

void FUN_000017f4(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x428))();
  (**(code **)(*param_1 + 0x3ec))(param_1,cVar1 == '\0');
  return;
}



// Function: FUN_00001828 at 00001828
// Size: 80 bytes

void FUN_00001828(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x428))();
  if (cVar1 == param_2._0_1_) {
    cVar1 = (**(code **)(*param_1 + 0x428))();
    (**(code **)(*param_1 + 0x3ec))((short)param_1,cVar1 == '\0');
  }
  return;
}



// Function: FUN_00001878 at 00001878
// Size: 22 bytes

void FUN_00001878(undefined4 param_1,undefined4 param_2)

{
  FUN_00003568(param_1,param_2);
  return;
}



// Function: FUN_0000188e at 0000188e
// Size: 102 bytes

void FUN_0000188e(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  char cVar1;
  int local_14;
  int local_10;
  int local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 == '\0') {
    local_14 = param_1[0x25];
    local_10 = param_1[0x26];
    local_c = param_1[0x27];
    FUN_00001df8(&local_14);
  }
  local_8 = *param_4;
  local_6 = param_4[1];
  func_0x00005c60(param_1,param_2,param_3,&local_8);
  return;
}



// Function: FUN_000018f4 at 000018f4
// Size: 204 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000018f4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar3;
  undefined2 uVar2;
  undefined4 *extraout_A0;
  undefined2 uVar4;
  undefined1 local_104 [256];
  
  uVar1 = (**(code **)(*param_1 + 0x434))();
  if (extraout_A0 != param_2) {
    if (extraout_A0 != (undefined4 *)0x0) {
      cVar3 = FUN_000026b8((char)extraout_A0);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x424))();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar3 = func_0x00001d60((char)extraout_A0);
      if (cVar3 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0;
    if (param_2 != (undefined4 *)0x0) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)*param_2;
      local_104[0] = 0;
      uVar4 = (undefined2)((uint)local_104 >> 0x10);
      uVar2 = (undefined2)((uint)param_1 >> 0x10);
      (**(code **)(*param_1 + 0x438))((short)param_1,(char)local_104);
      (**(code **)(*param_1 + 0x3d0))(param_1,local_104,1,0,0,uVar2,uVar4);
      uVar2 = (**(code **)(*param_1 + 0x454))();
      uVar1 = (**(code **)(*param_1 + 0x3f0))(param_1,1,1,uVar2);
    }
  }
  return uVar1;
}



// Function: FUN_000019d4 at 000019d4
// Size: 32 bytes

void FUN_000019d4(int *param_1)

{
  (**(code **)(*param_1 + 0x448))();
  FUN_000026c8();
  return;
}



// Function: FUN_000019f4 at 000019f4
// Size: 160 bytes

undefined1 * FUN_000019f4(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *extraout_A0;
  byte abStack_104 [256];
  
  if (*(short *)(param_1 + 0x32) == -1) {
    (**(code **)(*param_1 + 0x434))();
    if (extraout_A0 == (int *)0x0) {
      puVar2 = &DAT_00025b76;
      puVar3 = param_2;
      for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      pbVar4 = (byte *)(*extraout_A0 + 0xe);
      pbVar5 = abStack_104;
      for (iVar1 = *(byte *)(*extraout_A0 + 0xe) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar5 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      }
      param_2 = (undefined1 *)FUN_00001d00(abStack_104,param_2);
    }
  }
  else {
    param_2 = (undefined1 *)
              func_0x00007658(CONCAT22(*(undefined2 *)((int)param_1 + 0xca),
                                       *(undefined2 *)(param_1 + 0x32)),param_2);
  }
  return param_2;
}



// Function: FUN_00001a94 at 00001a94
// Size: 50 bytes

void FUN_00001a94(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x444))();
  (**(code **)(*param_1 + 0x44c))();
  func_0x000026a0(uVar1);
  return;
}



// Function: FUN_00001ac6 at 00001ac6
// Size: 22 bytes

void FUN_00001ac6(int *param_1)

{
  (**(code **)(*param_1 + 0x400))();
  return;
}



// Function: FUN_00001adc at 00001adc
// Size: 78 bytes

undefined2 FUN_00001adc(int *param_1)

{
  undefined2 uVar1;
  
  if (((param_1[0x29] == 0) || (*(int *)(*(int *)param_1[0x29] + 0x1c) == 0)) ||
     (uVar1 = *(undefined2 *)(**(int **)(*(int *)param_1[0x29] + 0x1c) + 8),
     *(short *)(**(int **)(*(int *)param_1[0x29] + 0x1c) + 8) == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x440))();
  }
  return uVar1;
}



// Function: FUN_00001b2a at 00001b2a
// Size: 16 bytes

undefined2 FUN_00001b2a(int param_1)

{
  return *(undefined2 *)(param_1 + 0xb8);
}



// Function: FUN_00001b3a at 00001b3a
// Size: 78 bytes

undefined2 FUN_00001b3a(int *param_1)

{
  undefined2 uVar1;
  
  if (((param_1[0x29] == 0) || (*(int *)(*(int *)param_1[0x29] + 0x1c) == 0)) ||
     (uVar1 = *(undefined2 *)(**(int **)(*(int *)param_1[0x29] + 0x1c) + 6),
     *(short *)(**(int **)(*(int *)param_1[0x29] + 0x1c) + 6) == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x448))();
  }
  return uVar1;
}



// Function: FUN_00001b88 at 00001b88
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_00001b88(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x434))();
  if (extraout_A0 == 0) {
    puVar2 = &DAT_00025b76;
    puVar3 = param_2._2_4_;
    for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return param_2._2_4_;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001bd0 at 00001bd0
// Size: 18 bytes

void FUN_00001bd0(void)

{
  int in_D1;
  undefined1 *in_A0;
  undefined1 *in_A1;
  
  for (; in_D1 != 0; in_D1 = in_D1 + -1) {
    *in_A0 = *in_A1;
    in_A1 = in_A1 + 1;
    in_A0 = in_A0 + 1;
  }
  return;
}



// Function: FUN_00001be2 at 00001be2
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001be2(int *param_1)

{
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x434))();
  if (extraout_A0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x3f4))((short)param_1,0);
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 14 bytes

void FUN_00001c10(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x3f4))();
  return;
}



// Function: FUN_00001c1e at 00001c1e
// Size: 26 bytes

void FUN_00001c1e(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3fc))(param_1,param_2);
  return;
}



// Function: FUN_00001c38 at 00001c38
// Size: 32 bytes

void FUN_00001c38(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x3ec))(param_1,(int)param_2._0_2_);
  return;
}



// Function: FUN_00001c58 at 00001c58
// Size: 56 bytes

void FUN_00001c58(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x430))(param_1,param_2);
  (**(code **)(*param_1 + 0x45c))();
  if (param_3._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00001c90 at 00001c90
// Size: 6 bytes

void FUN_00001c90(void)

{
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x26c))();
  return;
}



// Function: FUN_00001c98 at 00001c98
// Size: 12 bytes

void FUN_00001c98(void)

{
  int unaff_A4;
  
  *(ushort *)(unaff_A4 + 0x584f) = *(ushort *)(unaff_A4 + 0x584f) & 0x4e91;
  return;
}



// Function: FUN_00001ca4 at 00001ca4
// Size: 4 bytes

void FUN_00001ca4(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x410))(param_1,param_2);
  return;
}



// Function: FUN_00001ca8 at 00001ca8
// Size: 23 bytes

void FUN_00001ca8(void)

{
  int unaff_A6;
  
  (**(code **)(**(int **)(unaff_A6 + 8) + 0x410))
            (*(int **)(unaff_A6 + 8),*(undefined4 *)(unaff_A6 + 0xc));
  return;
}



// Function: FUN_00001cc0 at 00001cc0
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cc0(int *param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000040(param_1,param_2,0x78);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)(**(int **)((int)param_1 + 0x32) + 0x20);
    *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)((int)param_1 + 0x42);
    *(undefined4 *)((int)param_1 + 0x46) = 0;
    func_0x00001e98(0);
    *(undefined4 *)((int)param_1 + 0x46) = extraout_A0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined2 *)((int)param_1 + 0x5a) = param_3._0_2_;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10((short)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_00001d00 at 00001d00
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d00(void)

{
  int iVar1;
  undefined4 extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined4 uStack00000006;
  
  iVar1 = func_0x000076a8(unaff_A6 + -0x46);
  if (iVar1 == 0) {
    *(undefined2 *)((int)unaff_A2 + 0x42) = *(undefined2 *)(**(int **)((int)unaff_A2 + 0x32) + 0x20)
    ;
    *(undefined2 *)(unaff_A2 + 0x11) = *(undefined2 *)((int)unaff_A2 + 0x42);
    *(undefined4 *)((int)unaff_A2 + 0x46) = 0;
    uStack00000006 = 0x1d34;
    func_0x00001e98();
    *(undefined4 *)((int)unaff_A2 + 0x46) = extraout_A0;
    *(undefined1 *)(unaff_A2 + 0x16) = 0;
    *(undefined2 *)((int)unaff_A2 + 0x5a) = *(undefined2 *)(unaff_A6 + 0x10);
    _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  }
  else {
    uStack00000006 = 0x1d5a;
    (**(code **)(*unaff_A2 + 0x4c))();
    uStack00000006 = *(undefined4 *)(unaff_A6 + -0x10);
    uStack00000004 = *(undefined2 *)(unaff_A6 + -0x12);
    FUN_00001c10();
  }
  return;
}



// Function: FUN_00001d30 at 00001d30
// Size: 30 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00001d30(void)

{
  byte in_D0b;
  undefined4 in_A0;
  int unaff_A2;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A2 + 0x46) = in_A0;
  *(undefined1 *)(unaff_A2 + 0x58) = 0;
  *(undefined2 *)(unaff_A2 + 0x5a) = *(undefined2 *)(unaff_A6 + 0x10);
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return in_D0b | 0x98;
}



// Function: FUN_00001d50 at 00001d50
// Size: 33 bytes

void FUN_00001d50(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x4c))();
  FUN_00001c10();
  return;
}



// Function: FUN_00001d72 at 00001d72
// Size: 44 bytes

void FUN_00001d72(int param_1)

{
  if (param_1 == *(int *)(*(int *)(param_1 + 0x2e) + 0xa6)) {
    *(undefined4 *)(*(int *)(param_1 + 0x2e) + 0xa6) = 0;
  }
  FUN_00001038(param_1);
  return;
}



// Function: FUN_00001d9e at 00001d9e
// Size: 34 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d9e(void)

{
  FUN_00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001dc8 at 00001dc8
// Size: 48 bytes

void FUN_00001dc8(void)

{
  int unaff_A2;
  int unaff_A6;
  
  FUN_00001ea8();
  *(short *)(unaff_A2 + 0x44) = *(short *)(unaff_A2 + 0x44) + 1;
  *(short *)(unaff_A2 + 0x52) = *(short *)(unaff_A2 + 0x52) + 1;
  if (*(int *)(unaff_A2 + 0x4e) != 0) {
    *(undefined4 *)(unaff_A6 + -8) = 0;
    *(int *)(unaff_A6 + -4) = -(*(int *)(unaff_A2 + 0x54) + (int)*(short *)(unaff_A2 + 0x52));
                    /* WARNING: Subroutine does not return */
    FUN_00001ec0((char)*(undefined4 *)(unaff_A2 + 0x4e));
  }
  return;
}



// Function: FUN_00001df8 at 00001df8
// Size: 30 bytes

void FUN_00001df8(void)

{
  int in_D0;
  undefined4 *puVar1;
  int unaff_A2;
  int unaff_A6;
  
  if (*(int *)(unaff_A6 + -8) < in_D0) {
    puVar1 = (undefined4 *)(unaff_A6 + -4);
  }
  else {
    puVar1 = (undefined4 *)(unaff_A6 + -8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001ec0(*(undefined4 *)(unaff_A2 + 0x4e),*puVar1);
}



// Function: FUN_00001e18 at 00001e18
// Size: 6 bytes

void FUN_00001e18(void)

{
  return;
}



// Function: FUN_00001e1e at 00001e1e
// Size: 46 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e1e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e90 at 00001e90
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ea8 at 00001ea8
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ea8(void)

{
  int *piVar1;
  char cVar2;
  short unaff_D3w;
  int unaff_A2;
  short unaff_A6w;
  short sVar3;
  undefined2 uVar4;
  
  uVar4 = 0xc;
  cVar2 = FUN_00001e18(unaff_A6w + -0x10,(short)**(undefined4 **)(unaff_A2 + 0x3e) + 10);
  if (cVar2 == '\0') {
    *(undefined1 *)(*(int *)(unaff_A2 + 0x2e) + 0xc0) = 1;
    sVar3 = (short)*(undefined4 *)(unaff_A2 + 0x3e);
    func_0x000075d0(sVar3,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00001ec0((short)*(undefined4 *)(unaff_A2 + 0x3e),sVar3 + 0x14);
  }
  piVar1 = (int *)(**(int **)(unaff_A2 + 0x3e) + 2);
  *piVar1 = *piVar1 + -1;
  if (*(int *)(unaff_A2 + 0x4e) != 0) {
    sVar3 = (short)*(undefined4 *)(unaff_A2 + 0x3a);
    func_0x000075d0(sVar3,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00001ec0((short)*(undefined4 *)(unaff_A2 + 0x4e),
                 (short)*(undefined4 *)(unaff_A2 + 0x54) + sVar3 + unaff_D3w);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ec0 at 00001ec0
// Size: 124 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ec0(void)

{
  int *piVar1;
  char in_D0b;
  int unaff_A2;
  
  if (in_D0b == '\0') {
    *(undefined1 *)(*(int *)(unaff_A2 + 0x2e) + 0xc0) = 1;
    func_0x000075d0();
                    /* WARNING: Subroutine does not return */
    FUN_00001ec0(*(undefined4 *)(unaff_A2 + 0x3e));
  }
  piVar1 = (int *)(**(int **)(unaff_A2 + 0x3e) + 2);
  *piVar1 = *piVar1 + -1;
  if (*(int *)(unaff_A2 + 0x4e) != 0) {
    func_0x000075d0();
                    /* WARNING: Subroutine does not return */
    FUN_00001ec0(*(undefined4 *)(unaff_A2 + 0x4e));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001fbc at 00001fbc
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001fbc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002060 at 00002060
// Size: 362 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000020d8) */
/* WARNING: Removing unreachable block (ram,0x000020ec) */

void FUN_00002060(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  undefined2 local_40;
  undefined2 uVar4;
  int local_1c;
  int local_18 [4];
  undefined1 local_8;
  
  local_40 = (undefined2)((uint)param_2 >> 0x10);
  uVar4 = SUB42(param_2,0);
  func_0x000075d0();
  if ((param_3._0_2_ != param_3._2_2_) || (CONCAT22(local_40,uVar4) <= (int)param_3._0_2_)) {
    return;
  }
  if ((int)param_3._0_2_ <= CONCAT22(local_40,uVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_8 = *(undefined1 *)(*param_2 + (int)param_3._0_2_);
  if ((*(short *)(param_1 + 0x42) <= param_3._0_2_) && (param_3._0_2_ < *(short *)(param_1 + 0x44)))
  {
    if (*(int *)(param_1 + 0x4e) == 0) {
      *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_1c = 0;
    iVar1 = *(int *)(param_1 + 0x54) + *(short *)(param_1 + 0x52) + -1;
    local_18[0] = -iVar1;
    if (iVar1 == 0 || local_18[0] < 0) {
      piVar2 = &local_1c;
    }
    else {
      piVar2 = local_18;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00001ec0((short)*(undefined4 *)(param_1 + 0x4e),(short)*piVar2);
  }
  sVar3 = (short)*(undefined4 *)(param_1 + 0x3a);
  func_0x000075d0(sVar3);
  if (*(char *)(*(int *)(param_1 + 0x2e) + 0xbd) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(int *)(param_1 + 0x4e) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001ec0((short)*(undefined4 *)(param_1 + 0x4e),
               (short)*(undefined4 *)(param_1 + 0x54) + sVar3 + 1);
}



// Function: FUN_000022b2 at 000022b2
// Size: 422 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022b2(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 uStack_6c;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined1 auStack_4e [3];
  undefined1 local_4b;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x268))();
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x1d8))();
  iVar4 = **(int **)((int)param_1 + 0x32);
  sVar2 = *(short *)(iVar4 + 0x20);
  sVar3 = *(short *)(iVar4 + 0x22);
  uVar1 = *(undefined4 *)(iVar4 + 0x3e);
  FUN_00001ca8((short)auStack_4e);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar4 = func_0x000076a8((short)auStack_4a);
  uVar6 = (undefined1)uVar1;
  uStack_6c = (undefined1)((uint)uVar1 >> 8);
  uVar5 = (undefined2)((uint)uVar1 >> 0x10);
  if (iVar4 == 0) {
    local_4b = FUN_00001ea8();
    if (param_2._0_2_ == 0x7f) {
      (**(code **)(*param_1 + 0xd4))((char)param_1,uVar6,(char)sVar3);
    }
    else if (param_2._0_2_ == 8) {
      if (((*(short *)((int)param_1 + 0x36) < sVar2) || (sVar2 < 1)) || (sVar2 != sVar3)) {
        if (*(short *)((int)param_1 + 0x42) < *(short *)(param_1 + 0x11)) {
          (**(code **)(*param_1 + 0xd0))((short)param_1,(short)uVar1);
        }
      }
      else {
        (**(code **)(*param_1 + 0xcc))((short)param_1,(short)uVar1);
      }
    }
    else {
      (**(code **)(*param_1 + 200))();
    }
    uVar7 = 0x23ce;
    local_4b = FUN_00001ea8();
    _DAT_00025f52 = local_10;
  }
  else {
    local_4b = FUN_00001ea8();
    uVar7 = (undefined2)local_14;
    FUN_00001c10((char)((uint)local_14 >> 0x10));
  }
  if (param_2._0_2_ != 0x7f) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (sVar2 != sVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x000075d0();
  if ((int)sVar2 < CONCAT31(CONCAT21(uVar5,uStack_6c),uVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x3bc))
            ((short)*(int **)((int)param_1 + 0x2e),uVar7);
  func_0x00001cb0((short)auStack_4e);
  return;
}



// Function: FUN_0000246c at 0000246c
// Size: 30 bytes

void FUN_0000246c(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))();
  return;
}



// Function: FUN_0000248a at 0000248a
// Size: 84 bytes

void FUN_0000248a(int param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(*(int *)(param_1 + 0x2e) + 0xbd) == '\x01') {
    psVar1 = (short *)**(int **)(param_1 + 0x3e);
    iVar2 = *(int *)(psVar1 + 1);
    if (0 < -iVar2) {
      for (sVar3 = 0; (int)sVar3 <= *psVar1 + -1; sVar3 = sVar3 + 1) {
        *(int *)(psVar1 + sVar3 * 10 + 1) = -iVar2 + *(int *)(psVar1 + sVar3 * 10 + 1);
      }
    }
  }
  return;
}



// Function: FUN_000024de at 000024de
// Size: 96 bytes

void FUN_000024de(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = (int)param_1._0_2_;
  if (param_1._0_2_ < 1) {
    piVar3 = &local_c;
  }
  else {
    piVar3 = &local_8;
  }
  iVar1 = *piVar3;
  *(short *)(*param_2 + 0x20) = (short)iVar1;
  uVar2 = FUN_00001dc8((int)(short)iVar1,(int)param_1._2_2_,(int)*(short *)(*param_2 + 0x3c));
  *(undefined2 *)(*param_2 + 0x22) = uVar2;
  return;
}



// Function: FUN_0000253e at 0000253e
// Size: 54 bytes

void FUN_0000253e(int *param_1)

{
  (**(code **)(*param_1 + 0x238))();
  *(undefined1 *)(param_1 + 0x11) = 4;
  FUN_00003708(param_1);
  return;
}



// Function: FUN_00002574 at 00002574
// Size: 36 bytes

void FUN_00002574(int *param_1)

{
  (**(code **)(*param_1 + 0x3b0))();
  func_0x00003710(param_1);
  return;
}



// Function: FUN_00002598 at 00002598
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_00002598(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  undefined1 auStack_1e [8];
  short sStack_16;
  undefined1 auStack_14 [12];
  undefined2 uStack_8;
  undefined1 auStack_6 [2];
  
  iVar3 = 0;
  FUN_00001ca8((short)auStack_6);
  iVar1 = *(int *)param_1[0x1f];
  if ((*(short *)(iVar1 + 0x3c) < 1) ||
     (*(char *)(**(int **)(iVar1 + 0x3e) + *(short *)(iVar1 + 0x3c) + -1) == '\r')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  sVar4 = *(short *)(iVar1 + 0x5e);
  if (*(char *)((int)param_1 + 0xbd) == '\x01') {
    if (0 < sVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2) {
      uStack_8 = 0xf;
      (**(code **)(*param_1 + 0x3f4))(param_1,0x7fff,(short)&uStack_8,(char)auStack_14);
      func_0x00001c60(auStack_14,auStack_1e,&sStack_16);
      iVar3 = (int)sStack_16;
    }
  }
  else {
    if (bVar2) {
      sVar4 = sVar4 + 1;
    }
    iVar3 = (int)sVar4 * (int)*(short *)(iVar1 + 0x18);
  }
  func_0x00001cb0((short)auStack_6);
  return iVar3;
}



// Function: FUN_000025a0 at 000025a0
// Size: 47 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_000025a0(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int unaff_A6;
  
  piVar2 = *(int **)(unaff_A6 + 8);
  iVar5 = 0;
  sVar4 = (short)unaff_A6;
  FUN_00001ca8(sVar4 + -2);
  iVar1 = *(int *)piVar2[0x1f];
  if ((*(short *)(iVar1 + 0x3c) < 1) ||
     (*(char *)(**(int **)(iVar1 + 0x3e) + *(short *)(iVar1 + 0x3c) + -1) == '\r')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  sVar6 = *(short *)(iVar1 + 0x5e);
  if (*(char *)((int)piVar2 + 0xbd) == '\x01') {
    if (0 < sVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar3) {
      *(undefined2 *)(unaff_A6 + -4) = 0xf;
      (**(code **)(*piVar2 + 0x3f4))(piVar2,0x7fff,sVar4 + -4,(char)unaff_A6 + -0x10);
      func_0x00001c60(unaff_A6 + -0x10,unaff_A6 + -0x1a,unaff_A6 + -0x12);
      iVar5 = (int)*(short *)(unaff_A6 + -0x12);
    }
  }
  else {
    if (bVar3) {
      sVar6 = sVar6 + 1;
    }
    iVar5 = (int)sVar6 * (int)*(short *)(iVar1 + 0x18);
  }
  func_0x00001cb0(sVar4 + -2);
  return iVar5;
}



// Function: FUN_000025d0 at 000025d0
// Size: 156 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_000025d0(void)

{
  int in_D0;
  int unaff_D3;
  short sVar1;
  int in_A1;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  bool bVar2;
  
  bVar2 = *(char *)(in_A1 + in_D0) == '\r';
  sVar1 = *(short *)(unaff_A2 + 0x5e);
  if (*(char *)((int)unaff_A3 + 0xbd) == '\x01') {
    if (0 < sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2) {
      *(undefined2 *)(unaff_A6 + -4) = 0xf;
      (**(code **)(*unaff_A3 + 0x3f4))();
      func_0x00001c60(unaff_A6 + -0x10,unaff_A6 + -0x1a,unaff_A6 + -0x12);
      unaff_D3 = *(short *)(unaff_A6 + -0x12) + unaff_D3;
    }
  }
  else {
    if (bVar2) {
      sVar1 = sVar1 + 1;
    }
    unaff_D3 = (int)sVar1 * (int)*(short *)(unaff_A2 + 0x18);
  }
  func_0x00001cb0((short)unaff_A6 + -2);
  return unaff_D3;
}



// Function: FUN_00002672 at 00002672
// Size: 82 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00002672(int *param_1)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)((int)param_1 + 0xbd) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      local_18 = *(undefined4 *)((int)param_1 + 0xaa);
      local_14 = *(undefined4 *)((int)param_1 + 0xae);
      local_10 = *(undefined4 *)((int)param_1 + 0xb2);
      FUN_00001df8((short)&local_18);
      func_0x00007398((short)*(undefined4 *)(*(int *)param_1[0x1f] + 0x3e));
      if (*(short *)(*(int *)param_1[0x1f] + 0x5e) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}



// Function: FUN_000026b8 at 000026b8
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000026b8(void)

{
  int unaff_A2;
  
  func_0x00007398((short)*(undefined4 *)(**(int **)(unaff_A2 + 0x7c) + 0x3e));
  if (*(short *)(**(int **)(unaff_A2 + 0x7c) + 0x5e) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026c8 at 000026c8
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000026c8(void)

{
  int *in_A0;
  int unaff_A2;
  
  func_0x00007398((short)*(undefined4 *)(*in_A0 + 0x3e));
  if (*(short *)(**(int **)(unaff_A2 + 0x7c) + 0x5e) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002762 at 00002762
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002762(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [8];
  undefined2 uStack_30;
  undefined1 auStack_8 [4];
  
  puVar2 = auStack_8;
  func_0x00007208((short)puVar2);
  FUN_00001ca8((short)auStack_38,(short)((uint)puVar2 >> 0x10));
  iVar1 = *(int *)param_1[0x1f];
  uStack_30 = *(undefined2 *)(iVar1 + 0x22);
  if ((*(short *)(iVar1 + 0x22) == *(short *)(iVar1 + 0x20)) && (param_1[3] == 0x7fffffff)) {
    (**(code **)(*param_1 + 0xe0))((char)param_1,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002798 at 00002798
// Size: 116 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002798(void)

{
  int *piVar1;
  undefined1 uVar2;
  short unaff_D3w;
  short unaff_D4w;
  int *unaff_A2;
  int unaff_A4;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined2 uStack00000006;
  undefined2 uStack00000008;
  
  *(undefined2 *)(unaff_A6 + -0x2c) = *(undefined2 *)(unaff_A4 + 0x22);
  piVar1 = *(int **)(unaff_A4 + 0x3e);
  if ((*(short *)(unaff_A4 + 0x22) == *(short *)(unaff_A4 + 0x20)) && (unaff_A2[3] == 0x7fffffff)) {
    uStack00000006 = 0;
    uStack00000008 = 0;
    uStack00000004 = SUB42(unaff_A2,0);
    (**(code **)(*unaff_A2 + 0xe0))();
  }
  if (((unaff_D4w == unaff_D3w) && (0 < unaff_D3w)) && (*(char *)(*piVar1 + unaff_D3w + -1) == '\r')
     ) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(unaff_A6 + -0x2d) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002972 at 00002972
// Size: 66 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002972(int param_1,undefined2 param_2)

{
  FUN_000024de(param_2,*(undefined4 *)(param_1 + 0x7c));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000029d6 at 000029d6
// Size: 22 bytes

bool FUN_000029d6(undefined4 param_1,int param_2)

{
  return param_2 == 0x54455854;
}



// Function: FUN_000029ec at 000029ec
// Size: 204 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000029ec(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint *puVar2;
  undefined1 auStack_e [2];
  uint local_c;
  uint local_8;
  
  if (param_2._0_1_ == '\x01') {
    if (((param_1[0x1f] != 0) &&
        (*(short *)(*(int *)param_1[0x1f] + 0x22) == *(short *)(*(int *)param_1[0x1f] + 0x20))) &&
       (cVar1 = (**(code **)(*param_1 + 0x74))(), cVar1 != '\0')) {
      if ((*(char *)(param_1 + 0x2f) != '\0') &&
         (cVar1 = (**(code **)(*param_1 + 0x340))(), cVar1 != '\0')) {
        FUN_00001ca8((short)auStack_e);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_c = 1;
      local_8 = DAT_000002f4 >> 1;
      if (DAT_000002f4 >> 1 < 2) {
        puVar2 = &local_c;
      }
      else {
        puVar2 = &local_8;
      }
      (**(code **)(*param_1 + 0xe0))((short)param_1,(char)*puVar2);
      return 0;
    }
    (**(code **)(*param_1 + 0xe0))((short)param_1,0xff);
  }
  return 0;
}



// Function: FUN_00002acc at 00002acc
// Size: 868 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002acc(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char cVar13;
  short sVar12;
  short sVar14;
  undefined2 uVar15;
  int *piVar16;
  undefined4 extraout_A0;
  short *psVar17;
  undefined1 *puVar18;
  short sStack_56;
  undefined1 uStack_54;
  undefined1 uStack_53;
  int local_32;
  int local_2e;
  int local_2a;
  int local_26;
  char local_11;
  
  bVar4 = false;
  local_11 = '\0';
  sVar14 = *(short *)(*(int *)param_1[0x1f] + 0x20);
  bVar3 = *(byte *)((int)param_2 + 0x23);
  sStack_56 = (short)((uint)param_1 >> 0x10);
  sVar5 = sStack_56;
  uStack_54 = (undefined1)((uint)param_1 >> 8);
  uVar11 = uStack_54;
  uStack_53 = SUB41(param_1,0);
  uVar7 = uStack_53;
  cVar13 = (**(code **)(*param_1 + 0x74))();
  psVar17 = (short *)&stack0xffffffae;
  puVar18 = &stack0xffffffae;
  if (cVar13 != '\0') {
    if ((0x1f < bVar3) || ((*(uint *)((int)param_1 + 0xc6) & 1 << (bVar3 & 0x3f)) != 0)) {
      if (((bVar3 == 0x1c) || (((bVar3 == 0x1d || (bVar3 == 0x1e)) || (bVar3 == 0x1f)))) &&
         (sStack_56 = sVar5, uStack_54 = uVar11, uStack_53 = uVar7,
         cVar13 = (**(code **)(*param_1 + 0x1d8))(), cVar13 != '\0')) {
        sStack_56 = sVar5;
        uStack_54 = uVar11;
        uStack_53 = uVar7;
        (**(code **)(*param_1 + 0x3ac))();
        uVar11 = uStack_53;
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((bVar3 != 0x1e) && (bVar3 != 0x1f)) {
          *(undefined1 *)((int)param_1 + 0xce) = 0;
        }
        if ((bVar3 == 0x1c) || (bVar3 == 0x1d)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = *(int *)param_1[0x1f];
        if (*(short *)(iVar1 + 0x20) == *(short *)(iVar1 + 0x22)) {
          *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(iVar1 + 0x20);
        }
        if (*(short *)(param_1 + 0x33) < 0) {
          if (bVar3 == 0x1e) {
            *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(iVar1 + 0x22);
          }
          else {
            *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(iVar1 + 0x20);
          }
        }
        if (*(short *)(param_1 + 0x33) == *(short *)(iVar1 + 0x22)) {
          uVar15 = *(undefined2 *)(iVar1 + 0x20);
        }
        else {
          uVar15 = *(undefined2 *)(iVar1 + 0x22);
        }
        uStack_53 = SUB41(param_2,0);
        uVar9 = uStack_53;
        uStack_54 = (undefined1)((uint)param_2 >> 8);
        uVar7 = uStack_54;
        sStack_56 = (short)((uint)param_2 >> 0x10);
        sVar5 = sStack_56;
        sStack_56 = (short)param_1;
        sVar6 = sStack_56;
        uStack_53 = (undefined1)uVar15;
        uVar10 = uStack_53;
        uStack_54 = (undefined1)((ushort)uVar15 >> 8);
        uVar8 = uStack_54;
        if ((bVar3 == 0x1e) &&
           (sVar12 = (**(code **)(*param_1 + 0x3c4))(), uVar11 = uStack_53, sVar12 == 0)) {
          sStack_56 = sVar5;
          uStack_54 = uVar7;
          uStack_53 = uVar9;
          local_11 = (**(code **)(*param_2 + 0x7c))();
          bVar4 = true;
          sVar14 = 0;
          *(undefined1 *)((int)param_1 + 0xce) = 0;
        }
        else {
          uStack_53 = uVar11;
          if ((bVar3 == 0x1f) &&
             (sStack_56 = sVar6, uStack_54 = uVar8, uStack_53 = uVar10,
             sVar12 = (**(code **)(*param_1 + 0x3c4))(),
             *(short *)(*(int *)param_1[0x1f] + 0x5e) + -1 == (int)sVar12)) {
            sStack_56 = sVar5;
            uStack_54 = uVar7;
            uStack_53 = uVar9;
            local_11 = (**(code **)(*param_2 + 0x7c))();
            bVar4 = true;
            sVar14 = *(short *)(*(int *)param_1[0x1f] + 0x3c);
            *(undefined1 *)((int)param_1 + 0xce) = 0;
          }
        }
        if (((!bVar4) && (0x1b < bVar3)) && (bVar3 < 0x20)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar4 = true;
        if (local_11 == '\0') {
          uStack_54 = 1;
          sStack_56 = sVar14;
          (**(code **)(*param_1 + 0x3e4))();
        }
        else {
          uStack_54 = 1;
          local_32 = (int)*(short *)(param_1 + 0x33);
          local_2e = (int)sVar14;
          if ((int)*(short *)(param_1 + 0x33) < (int)sVar14) {
            piVar16 = &local_2e;
          }
          else {
            piVar16 = &local_32;
          }
          sStack_56 = (short)*piVar16;
          local_2a = (int)*(short *)(param_1 + 0x33);
          local_26 = (int)sVar14;
          (**(code **)(*param_1 + 0x3e4))();
        }
        psVar17 = (short *)&stack0xffffffae;
        uStack_54 = 1;
        sStack_56 = sVar6;
        (**(code **)(*param_1 + 0x260))();
      }
      else {
        psVar17 = (short *)&stack0xffffffae;
        if (*(char *)(param_1 + 0x2f) != '\0') {
          sStack_56 = sVar5;
          uStack_54 = uVar11;
          uStack_53 = uVar7;
          cVar13 = (**(code **)(*param_1 + 0x1d8))();
          psVar17 = (short *)&stack0xffffffae;
          if (cVar13 != '\0') {
            psVar17 = (short *)&stack0xffffffae;
            if (((bVar3 != 8) && (psVar17 = (short *)&stack0xffffffae, bVar3 != 0x7f)) &&
               (psVar17 = (short *)&stack0xffffffae,
               *(short *)(*(int *)param_1[0x1f] + 0x20) == *(short *)(*(int *)param_1[0x1f] + 0x22))
               ) {
              iVar1 = param_1[0x20];
              func_0x000075d0();
              psVar17 = &sStack_56;
              if ((*(short *)(param_1 + 0x27) - iVar1 < 1) ||
                 (cVar13 = FUN_00001e90(), cVar13 != '\0')) {
                FUN_00001bd0();
                return;
              }
            }
            *(undefined1 *)((int)param_1 + 0xce) = 0;
            cVar13 = *(int *)((int)param_1 + 0xa6) == 0;
            if (!(bool)cVar13) {
              cVar13 = *(char *)(*(int *)((int)param_1 + 0xa6) + 0x58);
            }
            if (cVar13 == '\0') {
              *(ushort *)((int)psVar17 + -2) = (ushort)bVar3;
              *(undefined4 *)((int)psVar17 + -6) = *(undefined4 *)((int)param_1 + 0xa6);
              pcVar2 = *(code **)(**(int **)((int)psVar17 + -6) + 0xd8);
              *(undefined4 *)((int)psVar17 + -10) = 0x31c4;
              (*pcVar2)();
              *(undefined1 *)(param_2 + 4) = 0;
            }
            else {
              *(ushort *)((int)psVar17 + -2) = (ushort)bVar3;
              *(int **)((int)psVar17 + -6) = param_1;
              pcVar2 = *(code **)(**(int **)((int)psVar17 + -6) + 0x3a8);
              *(undefined4 *)((int)psVar17 + -10) = 0x3196;
              (*pcVar2)();
              *(undefined4 *)((int)param_1 + 0xa6) = extraout_A0;
              *(undefined4 *)((int)psVar17 + -10) = extraout_A0;
              *(int **)((int)psVar17 + -0xe) = param_1;
              pcVar2 = *(code **)(**(int **)((int)psVar17 + -0xe) + 0x108);
              *(undefined4 *)((int)psVar17 + -0x12) = 0x31aa;
              (*pcVar2)();
            }
            bVar4 = true;
          }
        }
      }
    }
    puVar18 = (undefined1 *)psVar17;
    if (param_1[3] == 0x7fffffff) {
      *(undefined4 *)((int)psVar17 + -4) = 0;
      *(int **)((int)psVar17 + -8) = param_1;
      pcVar2 = *(code **)(**(int **)((int)psVar17 + -8) + 0xe0);
      *(undefined4 *)((int)psVar17 + -0xc) = 0x31e4;
      (*pcVar2)();
    }
  }
  if (!bVar4) {
    *(int **)(puVar18 + -4) = param_2;
    *(int **)(puVar18 + -8) = param_1;
    *(undefined4 *)(puVar18 + -0xc) = 0x31f4;
    FUN_00003778();
  }
  return;
}



// Function: FUN_000031fe at 000031fe
// Size: 264 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000031fe(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined1 auStack_2e [2];
  int local_2c;
  int local_28 [3];
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  if ((param_3._0_1_ != '\0') && (cVar1 = (**(code **)(*param_1 + 0x1d8))(), cVar1 != '\0')) {
    FUN_00001ca8((short)auStack_2e);
    local_14 = 0;
    local_10 = (int)param_2._0_2_;
    local_1c = (int)*(short *)(*(int *)param_1[0x1f] + 0x3c);
    local_18 = (int)param_2._2_2_;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_2c = (int)*(short *)(*(int *)param_1[0x1f] + 0x3c);
  local_28[0] = (int)param_2._2_2_;
  if ((int)param_2._2_2_ < (int)*(short *)(*(int *)param_1[0x1f] + 0x3c)) {
    piVar2 = local_28;
  }
  else {
    piVar2 = &local_2c;
  }
  local_28[1] = 0;
  local_28[2] = (int)param_2._0_2_;
  FUN_000024de((short)*piVar2,(char)param_1[0x1f]);
  if (param_2._0_2_ == param_2._2_2_) {
    *(short *)(param_1 + 0x33) = param_2._0_2_;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// Function: FUN_0000338a at 0000338a
// Size: 80 bytes

void FUN_0000338a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x72);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    func_0x00007010((short)extraout_A0);
    uVar1 = extraout_A0_00;
  }
  func_0x00000078(uVar1,param_1,param_2,param_3);
  return;
}



// Function: FUN_000033da at 000033da
// Size: 72 bytes

void FUN_000033da(undefined2 param_1)

{
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar1;
  
  func_0x000073b0(0x5c);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    func_0x00007018((short)extraout_A0);
    uVar1 = extraout_A0w;
  }
  FUN_00001cc0(uVar1,param_1);
  return;
}



// Function: FUN_00003422 at 00003422
// Size: 164 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003422(int *param_1,undefined1 param_2,int *param_3)

{
  char cVar1;
  undefined1 auStack_e [4];
  undefined4 local_a;
  undefined1 auStack_6 [2];
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x33c))();
    if (cVar1 != '\0') {
      FUN_00001ca8((short)auStack_6);
      _DAT_00025850 = param_1;
      (**(code **)(*param_1 + 0x3ac))();
      *(undefined1 *)((int)param_1 + 0xce) = 0;
      *(undefined1 *)(param_1 + 0x30) = 1;
      (**(code **)(*param_1 + 0x144))(param_1,(short)auStack_e,param_2,&local_a);
      func_0x00007210((char)auStack_e);
      (**(code **)(*param_3 + 0x7c))((char)param_3,local_a);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00003520 at 00003520
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003520(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  
  FUN_000037a8((char)param_1);
  cVar1 = FUN_00001e90();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xbc) != '\0') {
      (**(code **)(*_DAT_000264b2 + 0xf4))((short)_DAT_000264b2,0x54);
    }
    func_0x000026b0(0x68);
  }
  uVar4 = 0;
  uVar3 = 0xa4;
  func_0x000026b0(0x6e);
  uVar2 = 0;
  func_0x000026b0(0x67,uVar4);
  func_0x000026b0(0x6a,uVar2,uVar3);
  return;
}



// Function: FUN_00003538 at 00003538
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003538(void)

{
  char cVar1;
  int unaff_A2;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  
  cVar1 = FUN_00001e90();
  if (cVar1 == '\0') {
    if (*(char *)(unaff_A2 + 0xbc) != '\0') {
      (**(code **)(*_DAT_000264b2 + 0xf4))();
    }
    func_0x000026b0();
  }
  uVar4 = 0;
  uVar3 = 0xa4;
  func_0x000026b0();
  uVar2 = 0;
  func_0x000026b0(0x67,uVar4);
  func_0x000026b0(0x6a,uVar2,uVar3);
  return;
}



// Function: FUN_00003568 at 00003568
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003568(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  (**(code **)(*_DAT_000264b2 + 0xf4))();
  func_0x000026b0();
  uVar3 = 0;
  uVar2 = 0xa4;
  func_0x000026b0();
  uVar1 = 0;
  func_0x000026b0(0x67,uVar3);
  func_0x000026b0(0x6a,uVar1,uVar2);
  return;
}



// Function: FUN_000035e8 at 000035e8
// Size: 120 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000035e8(int *param_1,undefined2 param_2)

{
  bool bVar1;
  undefined1 auStack_a2 [2];
  undefined1 auStack_a0 [156];
  
  FUN_00001ca8((short)auStack_a2);
  if ((DAT_00025816 == '\0') && (DAT_00025810 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x148))((short)param_1,param_2,(char)auStack_a0);
  func_0x00007258(auStack_a0);
  return;
}



// Function: FUN_00003708 at 00003708
// Size: 25 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003708(void)

{
  FUN_00001c98();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003730 at 00003730
// Size: 36 bytes

void FUN_00003730(void)

{
  short unaff_A6w;
  
  func_0x00004c98();
  func_0x00001cb0(unaff_A6w + -0x9e);
  return;
}



// Function: FUN_00003754 at 00003754
// Size: 36 bytes

int * FUN_00003754(int param_1,undefined1 *param_2)

{
  int *piVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int aiStack_c [2];
  
  puVar3 = &DAT_00025b76;
  puVar4 = param_2;
  for (iVar6 = DAT_00025b76 + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x80);
  piVar7 = piVar1;
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x7c) != 0)) {
    sVar2 = *(short *)(**(int **)(param_1 + 0x7c) + 0x20);
    aiStack_c[0] = (int)*(short *)(**(int **)(param_1 + 0x7c) + 0x22) - (int)sVar2;
    aiStack_c[1] = 0xff;
    if (aiStack_c[0] < 0x100) {
      piVar7 = aiStack_c;
    }
    else {
      piVar7 = aiStack_c + 1;
    }
    piVar7 = (int *)*piVar7;
    sVar5 = (short)piVar7;
    if (0 < sVar5) {
      *param_2 = (char)piVar7;
      piVar7 = (int *)(param_2 + 1);
      puVar3 = (undefined1 *)((int)sVar2 + *piVar1);
      piVar1 = piVar7;
      for (iVar6 = (int)sVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)piVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        piVar1 = (int *)((int)piVar1 + 1);
      }
    }
  }
  return piVar7;
}



// Function: FUN_00003778 at 00003778
// Size: 48 bytes

int * FUN_00003778(void)

{
  int *piVar1;
  short sVar2;
  undefined1 *puVar3;
  int unaff_D3;
  short sVar4;
  undefined1 *in_A0;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *in_A1;
  int unaff_A2;
  int *piVar7;
  undefined1 *unaff_A4;
  int unaff_A6;
  
  for (; unaff_D3 != 0; unaff_D3 = unaff_D3 + -1) {
    *in_A0 = *in_A1;
    in_A0 = in_A0 + 1;
    in_A1 = in_A1 + 1;
  }
  piVar1 = *(int **)(unaff_A2 + 0x80);
  piVar7 = piVar1;
  if ((piVar1 != (int *)0x0) && (*(int *)(unaff_A2 + 0x7c) != 0)) {
    sVar2 = *(short *)(**(int **)(unaff_A2 + 0x7c) + 0x20);
    iVar6 = (int)*(short *)(**(int **)(unaff_A2 + 0x7c) + 0x22) - (int)sVar2;
    *(int *)(unaff_A6 + -8) = iVar6;
    *(undefined4 *)(unaff_A6 + -4) = 0xff;
    if (*(int *)(unaff_A6 + -4) < iVar6) {
      puVar5 = (undefined4 *)(unaff_A6 + -4);
    }
    else {
      puVar5 = (undefined4 *)(unaff_A6 + -8);
    }
    piVar7 = (int *)*puVar5;
    sVar4 = (short)piVar7;
    if (0 < sVar4) {
      *unaff_A4 = (char)piVar7;
      piVar7 = (int *)(unaff_A4 + 1);
      puVar3 = (undefined1 *)((int)sVar2 + *piVar1);
      piVar1 = piVar7;
      for (iVar6 = (int)sVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)piVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        piVar1 = (int *)((int)piVar1 + 1);
      }
    }
  }
  return piVar7;
}



// Function: FUN_000037a8 at 000037a8
// Size: 86 bytes

undefined1 * FUN_000037a8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_D0;
  short sVar3;
  short unaff_D4w;
  int in_A0;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int *unaff_A3;
  undefined1 *unaff_A4;
  int unaff_A6;
  
  iVar5 = *(short *)(in_A0 + 0x22) - in_D0;
  *(int *)(unaff_A6 + -8) = iVar5;
  *(undefined4 *)(unaff_A6 + -4) = 0xff;
  if (*(int *)(unaff_A6 + -4) < iVar5) {
    puVar4 = (undefined4 *)(unaff_A6 + -4);
  }
  else {
    puVar4 = (undefined4 *)(unaff_A6 + -8);
  }
  puVar6 = (undefined1 *)*puVar4;
  sVar3 = (short)puVar6;
  if (0 < sVar3) {
    *unaff_A4 = (char)puVar6;
    puVar6 = unaff_A4 + 1;
    puVar1 = (undefined1 *)((int)unaff_D4w + *unaff_A3);
    puVar2 = puVar6;
    for (iVar5 = (int)sVar3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return puVar6;
}



// Function: FUN_000037fe at 000037fe
// Size: 42 bytes

undefined4 FUN_000037fe(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    func_0x000075d0(*(undefined4 *)(param_1 + 0x80));
    uVar1 = FUN_00003848();
    return uVar1;
  }
  return 0;
}



// Function: FUN_00003848 at 00003848
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003848(void)

{
  short unaff_D3w;
  short unaff_D6w;
  
  if (unaff_D6w <= unaff_D3w) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003856 at 00003856
// Size: 14 bytes

short FUN_00003856(int param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = **(int **)(param_1 + 0x7c);
  if (*(short *)(iVar1 + 0x5e) < 2) {
    sVar2 = 0;
  }
  else {
    sVar2 = *(short *)(iVar1 + 0x5e);
    do {
      sVar2 = sVar2 + -1;
    } while (param_2._0_2_ < *(short *)(iVar1 + 0x60 + sVar2 * 2));
  }
  return sVar2;
}



// Function: FUN_00003868 at 00003868
// Size: 12 bytes

undefined4 FUN_00003868(void)

{
  ushort *unaff_A6;
  
  *unaff_A6 = *unaff_A6 | 0x6e04;
  return 0;
}



// Function: FUN_0000388c at 0000388c
// Size: 16 bytes

undefined2 FUN_0000388c(int *param_1)

{
  short sVar1;
  undefined2 uVar2;
  
  if (*(short *)(*(int *)param_1[0x1f] + 0x5e) < 2) {
    uVar2 = 0;
  }
  else {
    sVar1 = (**(code **)(*param_1 + 0x3c4))();
    uVar2 = *(undefined2 *)(*(int *)param_1[0x1f] + 0x60 + sVar1 * 2);
  }
  return uVar2;
}



// Function: FUN_000038a0 at 000038a0
// Size: 14 bytes

undefined4 FUN_000038a0(void)

{
  ushort *unaff_A6;
  
  *unaff_A6 = *unaff_A6 | 0x6e04;
  return 0;
}



// Function: FUN_000038ce at 000038ce
// Size: 90 bytes

short FUN_000038ce(int param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = **(int **)(param_1 + 0x7c);
  if (*(short *)(iVar1 + 0x5e) < 2) {
    sVar2 = *(short *)(iVar1 + 0x3c);
  }
  else {
    sVar2 = *(short *)(iVar1 + 0x5e);
    do {
      sVar2 = sVar2 + -1;
    } while (param_2._0_2_ < *(short *)(iVar1 + 0x60 + sVar2 * 2));
    if ((int)sVar2 < *(short *)(iVar1 + 0x5e) + -1) {
      sVar2 = *(short *)(iVar1 + 0x60 + (sVar2 + 1) * 2) + -1;
    }
    else {
      sVar2 = *(short *)(iVar1 + 0x3c);
    }
  }
  return sVar2;
}



// Function: FUN_00003928 at 00003928
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003928(void)

{
  undefined1 auStack_8 [4];
  
  func_0x00007208(auStack_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003948 at 00003948
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003978 at 00003978
// Size: 22 bytes

void FUN_00003978(void)

{
  int unaff_A6;
  
  FUN_000038a0();
  *(short *)(unaff_A6 + -4) = *(short *)(unaff_A6 + -6) + *(short *)(unaff_A6 + -4);
  FUN_000039c6();
  return;
}



// Function: FUN_00003990 at 00003990
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003990(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000039c6 at 000039c6
// Size: 44 bytes

void FUN_000039c6(void)

{
  int *unaff_A2;
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(unaff_A6 + -4);
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(unaff_A6 + -2);
  (**(code **)(*unaff_A2 + 0x13c))();
  return;
}



// Function: FUN_000039f2 at 000039f2
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000039f2(int *param_1,undefined4 param_2)

{
  undefined1 local_c [4];
  undefined1 auStack_8 [4];
  
  func_0x00007208(auStack_8);
  (**(code **)(*param_1 + 0x144))(param_1,auStack_8,param_2);
  func_0x00007210(auStack_8,local_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003a3a at 00003a3a
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003a3a(int param_1)

{
  *(undefined1 *)(param_1 + 0xce) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003a50 at 00003a50
// Size: 290 bytes

void FUN_00003a50(int *param_1)

{
  short sVar1;
  char cVar2;
  undefined1 extraout_A0b;
  undefined4 extraout_A0;
  undefined1 extraout_A0b_00;
  undefined1 extraout_A0b_01;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 auStack_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_10 = *(undefined2 *)((int)param_1 + 0x52);
  local_e = *(undefined2 *)(param_1 + 0x15);
  local_20 = *(undefined4 *)((int)param_1 + 0x56);
  local_1c = *(undefined4 *)((int)param_1 + 0x5a);
  func_0x00004e98(param_1);
  cVar2 = func_0x00007240((int)param_1 + 0x52,&local_10);
  if ((cVar2 == '\0') && (cVar2 = func_0x000038e0((int)param_1 + 0x56,&local_20), cVar2 == '\0')) {
    return;
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*param_1 + 0x30c))(param_1,auStack_18);
    puVar5 = auStack_24;
    sVar1 = (short)param_1;
    func_0x00003918(sVar1 + 0x88);
    FUN_000038a0(extraout_A0b,puVar5);
    puVar5 = auStack_24;
    uVar3 = SUB41(&local_28,0);
    func_0x00007260((short)auStack_18,(short)((uint)&local_28 >> 0x10));
    uVar4 = (undefined2)((uint)extraout_A0 >> 0x10);
    func_0x00007230((char)extraout_A0,uVar3,puVar5);
    puVar5 = auStack_2c;
    func_0x00003918(sVar1 + 0x88,(short)((uint)puVar5 >> 0x10),uVar4);
    FUN_000038a0(extraout_A0b_00,(short)puVar5);
    puVar5 = auStack_2c;
    uVar3 = SUB41(&local_30,0);
    func_0x00007260((short)auStack_18,(short)((uint)&local_30 >> 0x10),(short)((uint)puVar5 >> 0x10)
                   );
    func_0x00007228(extraout_A0b_01,uVar3,(short)puVar5);
    local_c = local_30;
    local_a = local_2e;
    local_8 = local_28;
    local_6 = local_26;
    (**(code **)(*param_1 + 0x41c))(sVar1,(short)&local_c);
  }
  return;
}



// Function: FUN_00003b72 at 00003b72
// Size: 282 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003b72(int *param_1)

{
  char cVar1;
  int extraout_A0;
  int *piVar2;
  undefined2 uVar3;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 auStack_2c [16];
  undefined4 local_1c;
  int local_18;
  undefined1 auStack_14 [4];
  int local_10;
  
  (**(code **)(*param_1 + 0x2fc))();
  if ((extraout_A0 == 0) || (cVar1 = (**(code **)(*param_1 + 0x1d8))(), cVar1 == '\0')) {
    if ((*(char *)((int)param_1 + 0xbe) == '\0') && (param_1[0x1f] != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  uVar3 = SUB42(param_1,0);
  if (param_1[3] == 0x7fffffff) {
    (**(code **)(*param_1 + 0xe0))(uVar3,0);
  }
  (**(code **)(*param_1 + 0x314))(uVar3,(char)auStack_2c);
  (**(code **)(*param_1 + 0x3e0))(uVar3,(short)auStack_14);
  cVar1 = FUN_00003990((short)auStack_2c,(short)auStack_14);
  if (cVar1 != '\0') {
    return;
  }
  local_34 = FUN_00003978((short)auStack_14);
  local_3c = *(int *)((int)param_1 + 0x36) - local_10;
  local_38 = (int)*(short *)((int)param_1 + 0xca);
  if (*(short *)((int)param_1 + 0xca) < local_3c) {
    piVar2 = &local_38;
  }
  else {
    piVar2 = &local_3c;
  }
  local_30 = *piVar2;
  local_1c = local_34;
  local_18 = local_30;
  (**(code **)(*param_1 + 0x290))(uVar3,(short)auStack_14,(short)&local_1c);
  (**(code **)(*param_1 + 0x1d8))();
  return;
}



// Function: FUN_00003c8e at 00003c8e
// Size: 204 bytes

void FUN_00003c8e(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int unaff_D5;
  
  iVar2 = (**(code **)(*param_1 + 0x3b4))();
  if (((*(char *)((int)param_1 + 0x43) == '\x04') && (*(char *)((int)param_1 + 0xbd) == '\0')) &&
     (*(char *)((int)param_1 + 0xbe) == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar3 = (**(code **)(*param_1 + 0x3b8))();
    unaff_D5 = iVar3 + 2;
  }
  if ((iVar2 != *(int *)((int)param_1 + 0x9e)) ||
     ((bVar1 && (unaff_D5 != *(int *)((int)param_1 + 0xa2))))) {
    if (bVar1) {
      *(int *)((int)param_1 + 0xa2) = unaff_D5;
    }
    (**(code **)(*param_1 + 0x1c4))();
    *(int *)((int)param_1 + 0x9e) = iVar2;
  }
  if (param_2._0_1_ != '\0') {
    cVar4 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x260))();
      (**(code **)(*param_1 + 0x23c))();
      (**(code **)(*param_1 + 0x238))();
    }
  }
  return;
}



// Function: FUN_00003d5a at 00003d5a
// Size: 120 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003d5a(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_6 [2];
  
  FUN_00001ca8((short)auStack_6);
  if (param_1[0x1f] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      if (param_2._0_1_ != '\0') {
        if (param_1[3] == 0x7fffffff) {
          (**(code **)(*param_1 + 0xe0))((short)param_1,0);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x00001cb0((short)auStack_6);
  return;
}



// Function: FUN_00003e04 at 00003e04
// Size: 62 bytes

void FUN_00003e04(int *param_1,undefined4 param_2)

{
  if ((param_2._0_1_ != '\0') && (param_1[3] == 0x7fffffff)) {
    (**(code **)(*param_1 + 0xe0))((short)param_1,0);
  }
  FUN_00003730((short)param_1);
  return;
}



