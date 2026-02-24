// Warlords II - Decompiled 68k Code
// Segment: CODE_041
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000001a at 0000001a
// Size: 44 bytes

void FUN_0000001a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x18);
  if (extraout_A0 != 0) {
    FUN_00000046(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000046 at 00000046
// Size: 60 bytes

void FUN_00000046(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x133be;
  param_1[3] = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_00000082 at 00000082
// Size: 46 bytes

void FUN_00000082(int param_1,undefined4 *param_2,undefined4 param_3)

{
  thunk_FUN_00000e12(param_1);
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined1 *)(param_1 + 0x16) = param_3._0_1_;
  return;
}



// Function: FUN_000000b0 at 000000b0
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000b0(int param_1)

{
  if (*(char *)(param_1 + 0x16) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00000db8((short)param_1);
  return;
}



// Function: FUN_000000de at 000000de
// Size: 78 bytes

int * FUN_000000de(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    if (param_3._0_1_ == '\0') {
      *(undefined4 *)(param_1 + 0x28) = param_2;
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x350))();
      if ((char)piVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x28) = param_2;
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
    }
  }
  return piVar1;
}



// Function: FUN_0000012c at 0000012c
// Size: 92 bytes

void FUN_0000012c(int *param_1,int param_2,int param_3,undefined1 param_4)

{
  if (param_2 == 0x22) {
    (**(code **)(*param_1 + 0xd0))((short)param_1,(short)*(undefined4 *)(param_3 + 0x16));
  }
  else {
    func_0x00003468((short)param_1,(short)param_2,(short)param_3,param_4);
  }
  return;
}



// Function: FUN_00000188 at 00000188
// Size: 402 bytes

void FUN_00000188(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  char cVar4;
  undefined4 uVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 == (int *)0x0) || (cVar4 = (**(code **)(*piVar1 + 0x74))(), cVar4 == '\0')) {
    func_0x00005be0(param_1,param_2);
    return;
  }
  sVar2 = *(short *)(param_2 + 0x22);
  if ((sVar2 == 3) || (sVar2 == 0xd)) {
    if (*(int *)(param_1 + 0x20) == 0x20202020) {
      func_0x00005be0(param_1,param_2);
      return;
    }
    (**(code **)(*piVar1 + 0x188))(piVar1,*(undefined4 *)(param_1 + 0x20));
    if (extraout_A0_00 != (int *)0x0) {
      cVar4 = (**(code **)(*extraout_A0_00 + 0x74))();
      if (cVar4 == '\0') {
        return;
      }
      uVar3 = (**(code **)(*extraout_A0_00 + 0x29c))(extraout_A0_00,piVar1,0);
      (**(code **)(*extraout_A0_00 + 0x6c))(extraout_A0_00,uVar3);
      return;
    }
    (**(code **)(*piVar1 + 0x6c))(piVar1,0x16,piVar1,0);
    return;
  }
  if (sVar2 != 0x1b) {
    func_0x00005be0(param_1,param_2);
    return;
  }
  if (*(short *)(param_2 + 0x24) == 0x47) {
    func_0x00005be0(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x24) == 0x20202020) {
    func_0x00005be0(param_1,param_2);
    return;
  }
  (**(code **)(*piVar1 + 0x188))(piVar1,*(undefined4 *)(param_1 + 0x24));
  if (extraout_A0 != (int *)0x0) {
    cVar4 = (**(code **)(*extraout_A0 + 0x74))();
    if (cVar4 == '\0') {
      return;
    }
    uVar3 = (**(code **)(*extraout_A0 + 0x29c))(extraout_A0,piVar1,0);
    (**(code **)(*extraout_A0 + 0x6c))(extraout_A0,uVar3);
    return;
  }
  (**(code **)(*piVar1 + 0x6c))(piVar1,0x15,piVar1,0);
  return;
}



// Function: FUN_0000031a at 0000031a
// Size: 188 bytes

void FUN_0000031a(int param_1,int param_2)

{
  int *piVar1;
  char cVar3;
  undefined4 uVar2;
  int *extraout_A0;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((piVar1 == (int *)0x0) || (cVar3 = (**(code **)(*piVar1 + 0x74))(), cVar3 == '\0')) ||
      (*(short *)(param_2 + 0x22) != 0x2e)) || (*(int *)(param_1 + 0x24) == 0x20202020)) {
    func_0x00005bd8(param_1,param_2);
    return;
  }
  (**(code **)(*piVar1 + 0x188))(piVar1,*(undefined4 *)(param_1 + 0x24));
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0x15,piVar1,0);
    return;
  }
  cVar3 = (**(code **)(*extraout_A0 + 0x74))();
  if (cVar3 == '\0') {
    return;
  }
  uVar2 = (**(code **)(*extraout_A0 + 0x29c))(extraout_A0,piVar1,0);
  (**(code **)(*extraout_A0 + 0x6c))(extraout_A0,uVar2);
  return;
}



// Function: FUN_000003d6 at 000003d6
// Size: 68 bytes

void FUN_000003d6(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x11e);
  }
  func_0x000025e0(param_1,uVar1);
  *param_1 = 0xc8bc;
  return;
}



// Function: FUN_0000041a at 0000041a
// Size: 68 bytes

void FUN_0000041a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x11e);
  }
  func_0x000025e0(param_1,uVar1);
  *param_1 = 0xc8bc;
  return;
}



// Function: FUN_0000045e at 0000045e
// Size: 18 bytes

void FUN_0000045e(undefined4 param_1)

{
  FUN_000025f0(param_1);
  return;
}



// Function: FUN_00000470 at 00000470
// Size: 18 bytes

void FUN_00000470(undefined4 param_1)

{
  func_0x000025f8(param_1);
  return;
}



// Function: FUN_00000482 at 00000482
// Size: 100 bytes

void FUN_00000482(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((uint)param_1 >> 0x10);
  uVar3 = 0x90;
  func_0x000037a8((char)param_1);
  uVar2 = 0;
  func_0x000026b0(0x20,uVar4);
  func_0x000026b0(0x21,uVar2,uVar3);
  iVar1 = (**(code **)(*param_1 + 0x150))();
  if (iVar1 != 0) {
    uVar3 = 0;
    func_0x000026b0(0x1e);
    func_0x000026b0(0x22,uVar3);
  }
  return;
}



// Function: FUN_000004e6 at 000004e6
// Size: 8 bytes

void FUN_000004e6(void)

{
  return;
}



// Function: FUN_000004ee at 000004ee
// Size: 16 bytes

undefined4 FUN_000004ee(int param_1)

{
  return *(undefined4 *)(param_1 + 0x126);
}



// Function: FUN_000004fe at 000004fe
// Size: 18 bytes

void FUN_000004fe(undefined4 param_1)

{
  FUN_00000df0(param_1);
  return;
}



// Function: FUN_00000510 at 00000510
// Size: 18 bytes

void FUN_00000510(undefined4 param_1)

{
  FUN_00000df0(param_1);
  return;
}



// Function: FUN_00000522 at 00000522
// Size: 16 bytes

void FUN_00000522(void)

{
  return;
}



// Function: FUN_00000532 at 00000532
// Size: 48 bytes

void FUN_00000532(int param_1,int param_2)

{
  undefined4 extraout_A0;
  
  if (param_2 != *(int *)(param_1 + 0x134)) {
    FUN_00000e10(*(undefined4 *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x134) = extraout_A0;
    *(int *)(param_1 + 0x134) = param_2;
  }
  return;
}



// Function: FUN_00000562 at 00000562
// Size: 8 bytes

void FUN_00000562(void)

{
  return;
}



// Function: FUN_0000056a at 0000056a
// Size: 54 bytes

undefined1 * FUN_0000056a(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)(param_1 + 0x1e);
  puVar3 = param_2;
  for (iVar1 = *(byte *)(param_1 + 0x1e) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// Function: FUN_000005a0 at 000005a0
// Size: 148 bytes

void FUN_000005a0(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar5;
  int local_68 [25];
  
  FUN_0000041a((short)local_68,(short)param_1);
  pbVar2 = (byte *)(param_1 + 0x1e);
  pbVar3 = param_2;
  for (iVar1 = *param_2 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar2 = *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  FUN_0000045e((short)local_68);
  piVar5 = extraout_A0;
  while (cVar4 = (**(code **)(local_68[0] + 8))(), cVar4 != '\0') {
    (**(code **)(*piVar5 + 0x3d0))((short)piVar5,(short)param_2);
    FUN_00000470((short)local_68);
    piVar5 = extraout_A0_00;
  }
  FUN_00002510((short)local_68);
  return;
}



// Function: FUN_00000634 at 00000634
// Size: 18 bytes

void FUN_00000634(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x126) = param_2;
  return;
}



// Function: FUN_00000646 at 00000646
// Size: 10 bytes

void FUN_00000646(void)

{
  return;
}



// Function: FUN_00000650 at 00000650
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000067c at 0000067c
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000067c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000006ba at 000006ba
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000006ba(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000006e6 at 000006e6
// Size: 26 bytes

void FUN_000006e6(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x138) + 0x70))();
  return;
}



// Function: FUN_00000700 at 00000700
// Size: 16 bytes

void FUN_00000700(void)

{
  return;
}



// Function: FUN_00000710 at 00000710
// Size: 110 bytes

void FUN_00000710(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte local_44;
  byte abStack_43 [63];
  
  FUN_000005a0(param_1,param_2);
  if (*param_2 < 0x40) {
    local_44 = *param_2;
  }
  else {
    local_44 = 0x3f;
  }
  pbVar1 = abStack_43;
  for (uVar2 = (uint)local_44; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2 = param_2 + 1;
    *pbVar1 = *param_2;
    pbVar1 = pbVar1 + 1;
  }
  (**(code **)(**(int **)(param_1 + 0x138) + 0xa4))(*(int **)(param_1 + 0x138),&local_44);
  return;
}



// Function: FUN_0000077e at 0000077e
// Size: 42 bytes

undefined4 FUN_0000077e(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x114))(*(int **)(param_1 + 8),param_2);
  }
  return uVar1;
}



// Function: FUN_000007a8 at 000007a8
// Size: 34 bytes

void FUN_000007a8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x70))();
  }
  return;
}



// Function: FUN_000007ca at 000007ca
// Size: 16 bytes

void FUN_000007ca(void)

{
  return;
}



// Function: FUN_000007da at 000007da
// Size: 54 bytes

void FUN_000007da(int *param_1,int param_2)

{
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x70))();
  FUN_00000e10(param_1[2]);
  param_1[2] = extraout_A0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// Function: FUN_00000810 at 00000810
// Size: 38 bytes

void FUN_00000810(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xd0))(*(int **)(param_1 + 8),param_2);
  }
  return;
}



// Function: FUN_00000836 at 00000836
// Size: 38 bytes

void FUN_00000836(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x150))(*(int **)(param_1 + 8),param_2);
  }
  return;
}



// Function: FUN_0000085c at 0000085c
// Size: 116 bytes

void FUN_0000085c(void)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 auStack_104 [256];
  
  if (DAT_00025ee8 == '\0') {
    if (DAT_000264d0 != '\0') {
      func_0x00001490();
      func_0x000073b0(0xc2);
      if (extraout_A0 != 0) {
        FUN_000014a8(extraout_A0);
      }
    }
    func_0x00007320(auStack_104,0xc060,0x66776e64);
    FUN_00001c78(extraout_A0_00);
    DAT_00025ee8 = '\x01';
  }
  return;
}



// Function: FUN_000008d0 at 000008d0
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000008d0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  cVar2 = FUN_00003540(param_1);
  if (cVar2 != '\0') {
    iVar1 = **(int **)(_DAT_fffff8e8 + 0x1c);
    local_c = *(undefined2 *)(iVar1 + 2);
    local_a = *(undefined2 *)(iVar1 + 4);
    local_8 = *(undefined2 *)(iVar1 + 6);
    local_6 = *(undefined2 *)(iVar1 + 8);
    cVar2 = func_0x000072a0(&local_c);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_00000928 at 00000928
// Size: 68 bytes

void FUN_00000928(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x22);
  }
  func_0x000025e0(param_1,uVar1);
  *param_1 = 0x7d38;
  return;
}



// Function: FUN_0000096c at 0000096c
// Size: 68 bytes

void FUN_0000096c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x22);
  }
  func_0x000025e0(param_1,uVar1);
  *param_1 = 0x7d38;
  return;
}



// Function: FUN_000009b0 at 000009b0
// Size: 18 bytes

void FUN_000009b0(undefined4 param_1)

{
  FUN_000025f0(param_1);
  return;
}



// Function: FUN_000009c2 at 000009c2
// Size: 18 bytes

void FUN_000009c2(undefined4 param_1)

{
  func_0x000025f8(param_1);
  return;
}



// Function: FUN_000009d4 at 000009d4
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009d4(undefined1 *param_1)

{
  FUN_00000a48(param_1 + 10);
  *(undefined4 *)(param_1 + 6) = _DAT_0002580c;
  *param_1 = DAT_00025816;
  param_1[1] = DAT_00025810;
  *(undefined4 *)(param_1 + 2) = _DAT_00025812;
  return;
}



// Function: FUN_00000a0e at 00000a0e
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a0e(undefined1 *param_1)

{
  _DAT_0002580c = *(undefined4 *)(param_1 + 6);
  DAT_00025816 = *param_1;
  DAT_00025810 = param_1[1];
  _DAT_00025812 = *(undefined4 *)(param_1 + 2);
  FUN_00000a7e(param_1 + 10);
  return;
}



// Function: FUN_00000a48 at 00000a48
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000a48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000a7e at 00000a7e
// Size: 72 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a7e(int param_1)

{
  char cVar1;
  undefined1 extraout_A0b;
  
  if (_DAT_fffff8e8 != *(int *)(param_1 + 4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00007260((short)_DAT_fffff8e8 + 0x10);
  cVar1 = func_0x00007240(extraout_A0b,param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000ad2 at 00000ad2
// Size: 42 bytes

void FUN_00000ad2(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x72) != 0) {
    (**(code **)(**(int **)(param_1 + 0x72) + 0x94))(*(int **)(param_1 + 0x72),param_2);
  }
  return;
}



// Function: FUN_00000afc at 00000afc
// Size: 140 bytes

void FUN_00000afc(int param_1,int param_2)

{
  char cVar1;
  int extraout_A0;
  int extraout_A0_00;
  int iVar2;
  int local_68 [25];
  
  if (*(int *)(param_1 + 0x72) != 0) {
    FUN_00003360((short)local_68,(short)param_1);
    FUN_00003370((short)local_68);
    iVar2 = extraout_A0;
    while (cVar1 = (**(code **)(local_68[0] + 8))(), cVar1 != '\0') {
      if (*(int *)(iVar2 + 4) == param_2) {
        FUN_00003368((short)local_68);
        return;
      }
      FUN_00003378((short)local_68);
      iVar2 = extraout_A0_00;
    }
    FUN_00003368((short)local_68);
  }
  return;
}



// Function: FUN_00000b88 at 00000b88
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b88(int *param_1)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x30c))(param_1,auStack_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000bc0 at 00000bc0
// Size: 26 bytes

void FUN_00000bc0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x304))(param_1,param_2);
  return;
}



// Function: FUN_00000bda at 00000bda
// Size: 10 bytes

undefined4 FUN_00000bda(void)

{
  return 0;
}



// Function: FUN_00000be4 at 00000be4
// Size: 32 bytes

void FUN_00000be4(int *param_1)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x30c))(param_1,auStack_c);
  func_0x00007258(auStack_c);
  return;
}



// Function: FUN_00000c0e at 00000c0e
// Size: 212 bytes

void FUN_00000c0e(int *param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  int local_88 [25];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x310))(uVar3,(char)&local_24);
  local_14 = local_24;
  local_10 = local_20;
  local_c = local_1c;
  local_8 = local_18;
  (**(code **)(*param_1 + 0x1cc))(uVar3,(short)&local_14);
  cVar1 = FUN_00003950(&local_14,&local_24);
  if (cVar1 == '\0') {
    FUN_0000096c((short)local_88,(char)param_1);
    FUN_000009b0((short)local_88);
    piVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(local_88[0] + 8))();
      if (cVar1 == '\0') break;
      (**(code **)(*piVar2 + 0x1c4))();
      FUN_000009c2((short)local_88);
      piVar2 = extraout_A0_00;
    }
    FUN_00002798((short)local_88);
  }
  else {
    (**(code **)(*param_1 + 0x1ac))(uVar3,(short)&local_14);
  }
  return;
}



// Function: FUN_00000ce2 at 00000ce2
// Size: 146 bytes

void FUN_00000ce2(int *param_1)

{
  char cVar1;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *piVar2;
  int local_68 [25];
  
  cVar1 = (**(code **)(*param_1 + 0xa4))();
  if (cVar1 == '\0') {
    FUN_0000096c((short)local_68,(short)param_1);
    FUN_000009b0((short)local_68);
    piVar2 = extraout_A0;
    while ((cVar1 = (**(code **)(local_68[0] + 8))(), cVar1 != '\0' &&
           ((**(code **)(*piVar2 + 0x358))(), extraout_A0_00 == 0))) {
      FUN_000009c2((short)local_68);
      piVar2 = extraout_A0_01;
    }
    FUN_00002798((short)local_68);
  }
  return;
}



// Function: FUN_00000d74 at 00000d74
// Size: 26 bytes

void FUN_00000d74(int *param_1)

{
  (**(code **)(*param_1 + 0x260))();
  return;
}



// Function: FUN_00000d8e at 00000d8e
// Size: 16 bytes

undefined1 FUN_00000d8e(int param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



// Function: FUN_00000d9e at 00000d9e
// Size: 52 bytes

char FUN_00000d9e(undefined2 param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int aiStack_68 [25];
  
  cVar1 = '\0';
  if (param_2 != (int *)0x0) {
    FUN_0000096c((short)aiStack_68,param_1);
    FUN_000009b0((short)aiStack_68);
    piVar3 = extraout_A0;
    cVar1 = '\0';
    while( true ) {
      cVar2 = (**(code **)(aiStack_68[0] + 8))();
      if (cVar2 == '\0') break;
      if (piVar3 == param_2) {
        cVar1 = '\x01';
        break;
      }
      cVar1 = (**(code **)(*piVar3 + 0x18c))((short)piVar3,(short)param_2);
      if (cVar1 != '\0') break;
      FUN_000009c2((short)aiStack_68);
      piVar3 = extraout_A0_00;
    }
    FUN_00002798((short)aiStack_68);
  }
  return cVar1;
}



// Function: thunk_FUN_00000e12 at 00000dd8
// Size: 2 bytes

void thunk_FUN_00000e12(void)

{
  int unaff_A6;
  
  FUN_00002798(unaff_A6 + -100);
  return;
}



// Function: FUN_00000df0 at 00000df0
// Size: 32 bytes

char FUN_00000df0(void)

{
  char cVar1;
  char unaff_D3b;
  int *extraout_A0;
  int *unaff_A3;
  int unaff_A6;
  
  do {
    FUN_000009c2((short)unaff_A6 + -100);
    cVar1 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
    if (cVar1 == '\0') break;
    if (extraout_A0 == unaff_A3) {
      unaff_D3b = '\x01';
      break;
    }
    unaff_D3b = (**(code **)(*extraout_A0 + 0x18c))();
  } while (unaff_D3b == '\0');
  FUN_00002798((short)unaff_A6 + -100);
  return unaff_D3b;
}



// Function: FUN_00000e10 at 00000e10
// Size: 2 bytes

char FUN_00000e10(void)

{
  char cVar1;
  char unaff_D3b;
  int *extraout_A0;
  int *unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  undefined1 in_ZF;
  
  do {
    if ((bool)in_ZF) {
FUN_00000e12:
      FUN_00002798((short)unaff_A6 + -100);
      return unaff_D3b;
    }
    if (unaff_A2 == unaff_A3) {
      unaff_D3b = '\x01';
      goto FUN_00000e12;
    }
    unaff_D3b = (**(code **)(*unaff_A2 + 0x18c))();
    if (unaff_D3b != '\0') goto FUN_00000e12;
    FUN_000009c2((short)unaff_A6 + -100);
    cVar1 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
    in_ZF = cVar1 == '\0';
    unaff_A2 = extraout_A0;
  } while( true );
}



// Function: FUN_00000e12 at 00000e12
// Size: 26 bytes

void FUN_00000e12(void)

{
  int unaff_A6;
  
  FUN_00002798(unaff_A6 + -100);
  return;
}



// Function: FUN_00000e2c at 00000e2c
// Size: 26 bytes

void FUN_00000e2c(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x310))(param_1,param_2);
  return;
}



// Function: FUN_00000e46 at 00000e46
// Size: 38 bytes

void FUN_00000e46(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  func_0x00001c90(auStack_4e);
  func_0x00007258(param_2,local_8);
  return;
}



// Function: FUN_00000eca at 00000eca
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000eca(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  func_0x00001c90(auStack_4e);
  cVar1 = func_0x00007240(param_3,&DAT_00025b56);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00007258(param_2,local_8);
  return;
}



// Function: FUN_00000f52 at 00000f52
// Size: 508 bytes

void FUN_00000f52(int *param_1,undefined2 param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  undefined4 extraout_A0_07;
  int *extraout_A0_08;
  undefined1 extraout_A0b;
  int *extraout_A0_09;
  undefined1 uVar5;
  undefined2 uVar6;
  
  bVar2 = false;
  for (cVar3 = '\0'; cVar3 < '\x02'; cVar3 = cVar3 + '\x01') {
    uVar6 = SUB42(param_1,0);
    switch(*(undefined1 *)((int)param_1 + (short)cVar3 + 0x42)) {
    case 0:
      if (*(int *)((int)param_1 + 0x1e) == 0) {
        if (!bVar2) {
          (**(code **)(*param_1 + 0x1c8))(uVar6,0xec);
          bVar2 = true;
        }
        func_0x00003980(0xec,0xd4);
        FUN_000038a8(0xd4);
        iVar4 = *extraout_A0_03;
      }
      else {
        FUN_000038a8((char)*(undefined4 *)((int)param_1 + 0x1e) + '2');
        iVar4 = *extraout_A0_02;
      }
      break;
    case 1:
      func_0x00003980((char)param_2,0xdc);
      FUN_000038a8(0xdc);
      iVar4 = *extraout_A0_01;
      break;
    case 2:
      if (!bVar2) {
        (**(code **)(*param_1 + 0x1c8))(uVar6,0xec);
        bVar2 = true;
      }
      func_0x00003980(0xec,0xcc);
      FUN_000038a8(0xcc);
      iVar4 = *extraout_A0_04;
      break;
    case 3:
      if (!bVar2) {
        (**(code **)(*param_1 + 0x1c8))(uVar6,0xec);
        bVar2 = true;
      }
      func_0x00003980(0xec,0xc4);
      FUN_000038a8(0xc4);
      iVar4 = *extraout_A0_05;
      break;
    case 4:
      if (!bVar2) {
        (**(code **)(*param_1 + 0x1c8))(uVar6,0xec);
        bVar2 = true;
      }
      func_0x00003980(0xec,0xe4);
      FUN_000038a8(0xe4);
      iVar4 = *extraout_A0;
      break;
    case 5:
      FUN_000038a8((char)param_1 + '2');
      iVar4 = *extraout_A0_00;
      break;
    default:
      if (!bVar2) {
        (**(code **)(*param_1 + 0x1c8))(uVar6,0xec);
        bVar2 = true;
      }
      func_0x00003980(0xec,0xbc);
      FUN_000038a8(0xbc);
      iVar4 = *extraout_A0_06;
    }
    FUN_00003918(param_2);
    uVar6 = (undefined2)((uint)extraout_A0_07 >> 0x10);
    uVar5 = 0x20;
    FUN_000038a8((char)extraout_A0_07);
    iVar1 = *extraout_A0_08;
    FUN_00003918(param_2,uVar5);
    FUN_000038a8(extraout_A0b,uVar6);
    *extraout_A0_09 = iVar1 + iVar4;
  }
  return;
}



// Function: FUN_0000115a at 0000115a
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000115a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000117a at 0000117a
// Size: 74 bytes

undefined4 FUN_0000117a(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  cVar1 = (**(code **)(*param_1 + 0x338))();
  if ((cVar1 != '\0') && (cVar1 = FUN_00003988(auStack_14,param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_000011c4 at 000011c4
// Size: 38 bytes

undefined4 FUN_000011c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x22) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x22) + 0x58))();
  }
  return uVar1;
}



// Function: FUN_000011ea at 000011ea
// Size: 64 bytes

undefined4 FUN_000011ea(int *param_1)

{
  char cVar1;
  
  if (((*(char *)((int)param_1 + 0x46) == '\0') ||
      (cVar1 = (**(code **)(*param_1 + 0x74))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 700))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// Function: FUN_0000122a at 0000122a
// Size: 54 bytes

undefined4 FUN_0000122a(int param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x47) != '\0') && (*(int *)(param_1 + 0x22) != 0)) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x22) + 0x7c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_00001260 at 00001260
// Size: 44 bytes

undefined4 FUN_00001260(int *param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x12) == '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0x2c4))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// Function: FUN_0000128c at 0000128c
// Size: 54 bytes

undefined4 FUN_0000128c(int param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x49) != '\0') && (*(int *)(param_1 + 0x22) != 0)) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x22) + 0x7c))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_000012c2 at 000012c2
// Size: 8 bytes

void FUN_000012c2(void)

{
  return;
}



// Function: FUN_000012ca at 000012ca
// Size: 44 bytes

undefined1 FUN_000012ca(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x344))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)((int)param_1 + 0x45);
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x11);
  }
  return uVar2;
}



// Function: FUN_000012f6 at 000012f6
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000012f6(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 auStack_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  sVar1 = (**(code **)(*param_1 + 0x2e0))();
  if (sVar1 != -1) {
    (**(code **)(*param_1 + 0x144))(param_1,&local_c,param_2);
    local_8 = local_c;
    local_6 = local_a;
    func_0x00007210(&local_8,auStack_10);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001390 at 00001390
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001390(void)

{
  undefined4 in_stack_00000014;
  
  func_0x00007218(in_stack_00000014);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001414 at 00001414
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00001414(int *param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar2;
  uint uVar1;
  undefined1 auStack_15e [2];
  undefined1 auStack_15c [258];
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined1 auStack_56 [8];
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined1 auStack_4a [52];
  short local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00007208(&uStack_4e);
  sVar2 = (**(code **)(*param_1 + 0x2d4))();
  uVar1 = (uint)(ushort)(sVar2 + 1U);
  if ((ushort)(sVar2 + 1U) != 0) {
    (**(code **)(*param_1 + 0x2f4))((short)param_1,(short)param_2,param_3);
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    uVar1 = func_0x000076a8(auStack_4a);
    if (uVar1 == 0) {
      (**(code **)(*param_1 + 0x2e4))
                (param_1,param_2,param_3,auStack_15c,(short)&uStack_4e,(short)auStack_56,auStack_15e
                );
      uStack_5a = uStack_4e;
      uStack_58 = uStack_4c;
      uVar1 = (**(code **)(*param_1 + 0x2e8))
                        (param_1,param_2,param_3,auStack_15c,&uStack_5a,(short)auStack_56);
      _DAT_00025f52 = local_10;
    }
    else if (local_16 != -0x359) {
      uVar1 = FUN_00001c10();
    }
  }
  return uVar1;
}



// Function: FUN_000014a8 at 000014a8
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000014a8(void)

{
  int in_A1;
  int *unaff_A2;
  int unaff_A6;
  
  (**(code **)(in_A1 + 0x2e4))();
  *(undefined2 *)(unaff_A6 + -0x56) = *(undefined2 *)(unaff_A6 + -0x4a);
  *(undefined2 *)(unaff_A6 + -0x54) = *(undefined2 *)(unaff_A6 + -0x48);
  (**(code **)(*unaff_A2 + 0x2e8))();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00001508 at 00001508
// Size: 238 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001508(int *param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  int local_b2 [25];
  undefined1 auStack_4e [72];
  undefined2 uStack_6;
  
  (**(code **)(*param_1 + 0x308))((short)param_1,param_3);
  cVar1 = (**(code **)(*param_1 + 700))();
  if (cVar1 != '\0') {
    func_0x00001c90((short)auStack_4e);
    FUN_0000096c((short)local_b2,(short)param_1);
    FUN_000009b0(local_b2);
    piVar2 = extraout_A0;
    while (cVar1 = (**(code **)(local_b2[0] + 8))(), cVar1 != '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x2b8))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar2 + 0x308))((short)piVar2,uStack_6);
        (**(code **)(*piVar2 + 0x15c))(piVar2,uStack_6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_000009c2((short)local_b2);
      piVar2 = extraout_A0_00;
    }
    uVar3 = 0xffff;
    piVar2 = local_b2;
    FUN_00002798((short)piVar2);
    FUN_00001c98((short)auStack_4e,(short)((uint)piVar2 >> 0x10),uVar3);
  }
  return;
}



// Function: FUN_00001620 at 00001620
// Size: 238 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001620(int *param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  int local_b2 [25];
  undefined1 auStack_4e [72];
  undefined2 uStack_6;
  
  (**(code **)(*param_1 + 0x308))((short)param_1,param_3);
  cVar1 = (**(code **)(*param_1 + 0x2c4))();
  if (cVar1 != '\0') {
    func_0x00001c90((short)auStack_4e);
    FUN_0000096c((short)local_b2,(short)param_1);
    FUN_000009b0(local_b2);
    piVar2 = extraout_A0;
    while (cVar1 = (**(code **)(local_b2[0] + 8))(), cVar1 != '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x2c0))();
      if (cVar1 != '\0') {
        (**(code **)(*piVar2 + 0x308))((short)piVar2,uStack_6);
        (**(code **)(*piVar2 + 0x15c))(piVar2,uStack_6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_000009c2((short)local_b2);
      piVar2 = extraout_A0_00;
    }
    uVar3 = 0xffff;
    piVar2 = local_b2;
    FUN_00002798((short)piVar2);
    FUN_00001c98((short)auStack_4e,(short)((uint)piVar2 >> 0x10),uVar3);
  }
  return;
}



// Function: FUN_00001738 at 00001738
// Size: 44 bytes

void FUN_00001738(int param_1,undefined4 *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000038c0(param_1 + 0x2a,&local_c,param_1 + 0x3a);
  *param_2 = local_c;
  param_2[1] = local_8;
  return;
}



// Function: FUN_00001764 at 00001764
// Size: 126 bytes

void FUN_00001764(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [8];
  
  func_0x000038c8(param_2,auStack_c);
  cVar1 = FUN_000038e0((int)param_1 + 0x3a,auStack_c);
  if (cVar1 != '\0') {
    func_0x000038c8(param_2,&local_14);
    *(undefined4 *)((int)param_1 + 0x3a) = local_14;
    *(undefined4 *)((int)param_1 + 0x3e) = local_10;
    (**(code **)(*param_1 + 0x1e0))();
    (**(code **)(*param_1 + 500))();
    if (param_3._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x26c))();
    }
  }
  return;
}



// Function: FUN_000017e2 at 000017e2
// Size: 66 bytes

void FUN_000017e2(int param_1)

{
  if (*(int *)(param_1 + 0x1e) == 0) {
    if (*(int *)(param_1 + 0x26) != 0) {
      (**(code **)(**(int **)(param_1 + 0x26) + 0x17c))();
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x254))();
  }
  return;
}



// Function: FUN_00001824 at 00001824
// Size: 70 bytes

void FUN_00001824(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1e) == 0) {
    if (*(int *)(param_1 + 0x26) != 0) {
      (**(code **)(**(int **)(param_1 + 0x26) + 0x180))(*(int **)(param_1 + 0x26),param_2);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1e) + 600))(*(int **)(param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_0000186a at 0000186a
// Size: 70 bytes

void FUN_0000186a(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1e) == 0) {
    if (*(int *)(param_1 + 0x26) != 0) {
      (**(code **)(**(int **)(param_1 + 0x26) + 0x184))(*(int **)(param_1 + 0x26),param_2);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x25c))(*(int **)(param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_000018b0 at 000018b0
// Size: 16 bytes

void FUN_000018b0(void)

{
  return;
}



// Function: FUN_000018c0 at 000018c0
// Size: 52 bytes

void FUN_000018c0(int *param_1)

{
  if (*(int *)((int)param_1 + 0x6e) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x6e) + 0x5c))();
  }
  (**(code **)(*param_1 + 0x230))();
  return;
}



// Function: FUN_000018f4 at 000018f4
// Size: 34 bytes

void FUN_000018f4(int param_1)

{
  if (*(int *)(param_1 + 0x6e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x6e) + 0x60))();
  }
  return;
}



// Function: FUN_00001916 at 00001916
// Size: 34 bytes

void FUN_00001916(int param_1)

{
  if (*(int *)(param_1 + 0x6e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x6e) + 100))();
  }
  return;
}



// Function: FUN_00001938 at 00001938
// Size: 8 bytes

void FUN_00001938(void)

{
  return;
}



// Function: FUN_00001940 at 00001940
// Size: 44 bytes

void FUN_00001940(int *param_1)

{
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x244))(param_1,auStack_14);
  return;
}



// Function: FUN_0000196c at 0000196c
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000196c(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [148];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00003958(param_2,auStack_d8,(int)param_1 + 0x5e);
  cVar2 = FUN_00003970(auStack_d8);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x338))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x1d8))();
      if (cVar2 != '\0') {
        iVar1 = **(int **)(_DAT_fffff8e8 + 0x1c);
        local_1c = *(undefined2 *)(iVar1 + 2);
        local_1a = *(undefined2 *)(iVar1 + 4);
        local_18 = *(undefined2 *)(iVar1 + 6);
        local_16 = *(undefined2 *)(iVar1 + 8);
        cVar2 = func_0x000072a0(&local_1c);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x140))(param_1,&local_1c,auStack_b0);
          FUN_00003958(param_2,&local_e8,auStack_b0);
          local_14 = local_e8;
          local_10 = local_e4;
          local_c = local_e0;
          local_8 = local_dc;
          cVar2 = FUN_00003970(&local_14);
          if (cVar2 == '\0') {
            (**(code **)(*param_1 + 0x148))(param_1,&local_14,auStack_b8);
            func_0x00007258(auStack_b8);
            return;
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c24 at 00001c24
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c24(undefined4 param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [100];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = param_2[3];
  FUN_00003360(auStack_78,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c78 at 00001c78
// Size: 65 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00001c7a) overlaps instruction at (ram,0x00001c78)
    */

void FUN_00001c78(void)

{
  ushort *puVar1;
  ushort uVar2;
  char cVar3;
  int unaff_D4;
  int *extraout_A0;
  int *unaff_A2;
  undefined4 unaff_A3;
  int unaff_A4;
  int unaff_A6;
  short sStack00000004;
  undefined2 uStack00000006;
  
  while( true ) {
    puVar1 = (ushort *)(unaff_A4 + unaff_D4 * 2);
    uVar2 = *puVar1 | 0x4e91;
    *puVar1 = uVar2;
    if (uVar2 != 0) {
      _sStack00000004 = (int *)(unaff_A6 + -0x10);
      (**(code **)(*unaff_A2 + 0x60))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _sStack00000004 = (int *)(unaff_A6 + -0x74);
    FUN_00003378();
    _sStack00000004 = (int *)(unaff_A6 + -0x74);
    cVar3 = (**(code **)(*_sStack00000004 + 8))();
    if (cVar3 == '\0') break;
    sStack00000004 = (short)((uint)unaff_A3 >> 0x10);
    uStack00000006 = (undefined2)unaff_A3;
    (**(code **)(*extraout_A0 + 0x74))();
    unaff_A2 = extraout_A0;
  }
  uStack00000006 = 0xffff;
  sStack00000004 = (short)unaff_A6 + -0x74;
  FUN_00003368();
  return;
}



// Function: FUN_00001c98 at 00001c98
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001cb8 at 00001cb8
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001cb8(void)

{
  char cVar1;
  int *extraout_A0;
  code *in_A1;
  int *unaff_A2;
  int unaff_A6;
  
  while( true ) {
    cVar1 = (*in_A1)();
    if (cVar1 == '\0') {
      FUN_00003368();
      return;
    }
    cVar1 = (**(code **)(*unaff_A2 + 0x74))();
    if (cVar1 != '\0') break;
    FUN_00003378();
    in_A1 = *(code **)(*(int *)(unaff_A6 + -0x74) + 8);
    unaff_A2 = extraout_A0;
  }
  (**(code **)(*unaff_A2 + 0x60))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001cc8 at 00001cc8
// Size: 16 bytes

void FUN_00001cc8(void)

{
  FUN_00003368();
  return;
}



// Function: FUN_00001cd8 at 00001cd8
// Size: 160 bytes

void FUN_00001cd8(int param_1,int param_2)

{
  char cVar1;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *piVar2;
  int local_68 [25];
  
  if (param_2 != *(int *)(param_1 + 0x16)) {
    FUN_0000096c((short)local_68,(short)param_1);
    FUN_000009b0((short)local_68);
    piVar2 = extraout_A0;
    while (((cVar1 = (**(code **)(local_68[0] + 8))(), cVar1 != '\0' &&
            (param_2 != *(int *)((int)piVar2 + 0x16))) &&
           ((*(int *)((int)piVar2 + 0x22) == 0 ||
            ((**(code **)(*piVar2 + 0x188))((short)piVar2,(short)param_2), extraout_A0_00 == 0)))))
    {
      FUN_000009c2((short)local_68);
      piVar2 = extraout_A0_01;
    }
    FUN_00002798((short)local_68);
  }
  return;
}



// Function: FUN_00001d78 at 00001d78
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001d78(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  undefined1 auStack_10 [12];
  
  cVar2 = (**(code **)(*param_1 + 0x1e4))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x1dc))();
    if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0;
  }
  else {
    if (param_1 == _DAT_00025812) {
      (**(code **)(*param_1 + 0x30c))(param_1,auStack_10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00001d90 at 00001d90
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001d90(void)

{
  char cVar2;
  undefined4 uVar1;
  int *unaff_A2;
  bool in_ZF;
  
  if (in_ZF) {
    cVar2 = (**(code **)(*unaff_A2 + 0x1dc))();
    if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0;
  }
  else {
    if (unaff_A2 == _DAT_00025812) {
      (**(code **)(*unaff_A2 + 0x30c))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00001e68 at 00001e68
// Size: 38 bytes

undefined4 FUN_00001e68(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1e) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x1e) + 0x1d8))();
  }
  return uVar1;
}



// Function: FUN_00001e8e at 00001e8e
// Size: 98 bytes

void FUN_00001e8e(int *param_1)

{
  char cVar1;
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x33c))();
  if (cVar1 != '\0') {
    func_0x00001c90(auStack_4e);
    (**(code **)(*param_1 + 0x308))(param_1,local_8);
    (**(code **)(*param_1 + 0x278))(param_1,local_8);
    FUN_00001c98((short)auStack_4e);
  }
  return;
}



// Function: FUN_00001ef0 at 00001ef0
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001ef0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == _DAT_0002580c) {
    uVar1 = 1;
  }
  else if (param_1 == _DAT_00025812) {
    _DAT_0002580c = param_1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001f1c at 00001f1c
// Size: 42 bytes

void FUN_00001f1c(int *param_1)

{
  if (*(int *)((int)param_1 + 0x26) == 0) {
    (**(code **)(*param_1 + 0xa0))();
  }
  return;
}



// Function: FUN_00001f46 at 00001f46
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f46(int *param_1,undefined4 *param_2)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x14c))(param_1,auStack_1c);
  FUN_000038c0(auStack_1c,auStack_24,(int)param_1 + 0x2a);
  local_14 = _DAT_00025b5a;
  local_10 = _DAT_00025b5e;
  local_c = *(undefined4 *)((int)param_1 + 0x32);
  local_8 = *(undefined4 *)((int)param_1 + 0x36);
  FUN_00003930(&local_14,&uStack_34,auStack_24);
  *param_2 = uStack_34;
  param_2[1] = uStack_30;
  param_2[2] = uStack_2c;
  param_2[3] = uStack_28;
  return;
}



// Function: FUN_00001fc0 at 00001fc0
// Size: 36 bytes

void FUN_00001fc0(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x30c))(param_1,auStack_c);
  func_0x00007258(auStack_c,param_2);
  return;
}



// Function: FUN_00001fee at 00001fee
// Size: 86 bytes

void FUN_00001fee(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_000038b8(param_1 + 0x2a,&local_1c,param_1 + 0x32);
  uVar1 = *(undefined4 *)(param_1 + 0x2e);
  *param_2 = *(undefined4 *)(param_1 + 0x2a);
  param_2[1] = uVar1;
  param_2[2] = local_1c;
  param_2[3] = local_18;
  return;
}



// Function: FUN_00002044 at 00002044
// Size: 102 bytes

void FUN_00002044(int param_1)

{
  int extraout_A0;
  
  if ((((*(int *)(param_1 + 0x6e) == 0) ||
       ((**(code **)(**(int **)(param_1 + 0x6e) + 0x58))(), extraout_A0 == 0)) &&
      (DAT_00025816 == '\0')) && ((DAT_00025810 == '\0' && (*(int *)(param_1 + 0x1e) != 0)))) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x2f8))();
  }
  return;
}



// Function: FUN_000020aa at 000020aa
// Size: 48 bytes

void FUN_000020aa(int *param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_14,param_2);
  return;
}



// Function: FUN_000020da at 000020da
// Size: 66 bytes

void FUN_000020da(int param_1)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x2fc))();
  }
  return;
}



// Function: FUN_0000211c at 0000211c
// Size: 48 bytes

void FUN_0000211c(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x318))(param_1,auStack_c);
  (**(code **)(*param_1 + 0x140))(param_1,auStack_c,param_2);
  return;
}



// Function: FUN_0000214c at 0000214c
// Size: 106 bytes

void FUN_0000214c(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_56 [70];
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00001c90(auStack_56);
  (**(code **)(*param_1 + 0x328))(param_1,local_10);
  local_c = *(undefined4 *)(*local_10 + 2);
  local_8 = *(undefined4 *)(*local_10 + 6);
  *param_2 = local_c;
  param_2[1] = local_8;
  FUN_00001c98((short)auStack_56);
  return;
}



// Function: FUN_000021b6 at 000021b6
// Size: 66 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000021b6(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_c [8];
  
  cVar1 = FUN_00003970((int)param_1 + 0x5e);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x148))(param_1,(int)param_1 + 0x5e,auStack_c);
  func_0x00007258(auStack_c,param_2);
  return;
}



// Function: FUN_00002216 at 00002216
// Size: 48 bytes

void FUN_00002216(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 800))(param_1,auStack_c);
  (**(code **)(*param_1 + 0x140))(param_1,auStack_c,param_2);
  return;
}



// Function: FUN_00002246 at 00002246
// Size: 106 bytes

void FUN_00002246(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_56 [70];
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00001c90(auStack_56);
  (**(code **)(*param_1 + 0x324))(param_1,local_10);
  local_c = *(undefined4 *)(*local_10 + 2);
  local_8 = *(undefined4 *)(*local_10 + 6);
  *param_2 = local_c;
  param_2[1] = local_8;
  FUN_00001c98((short)auStack_56);
  return;
}



// Function: FUN_000022b0 at 000022b0
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000022b0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x328))(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000022e4 at 000022e4
// Size: 16 bytes

undefined2 FUN_000022e4(int param_1)

{
  return *(undefined2 *)(param_1 + 0x4c);
}



// Function: FUN_000022f4 at 000022f4
// Size: 16 bytes

undefined2 FUN_000022f4(int param_1)

{
  return *(undefined2 *)(param_1 + 0x4e);
}



// Function: FUN_00002304 at 00002304
// Size: 34 bytes

bool FUN_00002304(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x74))();
  return cVar1 == '\0';
}



// Function: FUN_00002326 at 00002326
// Size: 16 bytes

undefined2 FUN_00002326(int param_1)

{
  return *(undefined2 *)(param_1 + 0x4a);
}



// Function: FUN_00002336 at 00002336
// Size: 66 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002336(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,short *param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar1 = (**(code **)(*param_1 + 0x2dc))((short)param_1,param_4,param_5,param_6,param_7);
  uVar2 = (**(code **)(*param_1 + 0x2d8))();
  (**(code **)(*param_1 + 0x2d4))((short)param_1,uVar1);
  (**(code **)(*_DAT_000266a8 + 0x210))((short)_DAT_000266a8,uVar2);
  if (param_3 != (int *)0x0) {
    uStack_c = *(undefined4 *)(*param_3 + 2);
    uStack_8 = *(undefined4 *)(*param_3 + 6);
    *param_6 = uStack_c;
    param_6[1] = uStack_8;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      (**(code **)(*param_1 + 0x144))(param_1,&uStack_10,param_2);
      *(undefined4 *)param_5 = uStack_10;
    }
  }
  return;
}



// Function: FUN_00002378 at 00002378
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002378(void)

{
  int iVar1;
  undefined4 *unaff_D3;
  int *unaff_D4;
  short *unaff_A3;
  int *unaff_A4;
  int unaff_A6;
  int iStack0000000a;
  undefined4 uStack0000000e;
  
  (**(code **)(*unaff_A4 + 0x2d4))();
  (**(code **)(*_DAT_000266a8 + 0x210))();
  if (unaff_D4 != (int *)0x0) {
    iVar1 = *unaff_D4;
    *(undefined2 *)(unaff_A6 + -8) = *(undefined2 *)(iVar1 + 2);
    *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(iVar1 + 4);
    *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(iVar1 + 6);
    *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(iVar1 + 8);
    *unaff_D3 = *(undefined4 *)(unaff_A6 + -8);
    unaff_D3[1] = *(undefined4 *)(unaff_A6 + -4);
    if ((unaff_A3[1] < 0) || (*unaff_A3 < 0)) {
      uStack0000000e = *(undefined4 *)(unaff_A6 + 0xc);
      iStack0000000a = unaff_A6 + -0xc;
      (**(code **)(*unaff_A4 + 0x144))();
      *(undefined4 *)unaff_A3 = *(undefined4 *)(unaff_A6 + -0xc);
    }
  }
  return;
}



// Function: FUN_000023fa at 000023fa
// Size: 42 bytes

void FUN_000023fa(int param_1)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x300))();
  }
  return;
}



// Function: FUN_00002424 at 00002424
// Size: 38 bytes

void FUN_00002424(int param_1)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0xa0))();
  }
  return;
}



// Function: FUN_0000244a at 0000244a
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000244a(int *param_1,undefined4 *param_2,undefined2 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int aiStack_68 [25];
  
  cVar1 = (**(code **)(*param_1 + 700))();
  if (cVar1 != '\0') {
    FUN_00000928((short)aiStack_68,(short)param_1);
    FUN_000009b0((short)aiStack_68);
    piVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(aiStack_68[0] + 8))();
      if (cVar1 == '\0') break;
      uStack_70 = *param_2;
      uStack_6c = param_2[1];
      uVar3 = SUB42(piVar2,0);
      (**(code **)(*piVar2 + 0x160))(uVar3,(char)&uStack_70);
      cVar1 = (**(code **)(*piVar2 + 0x2a0))(uVar3,(short)&uStack_70);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar2 + 0x2b8))();
        if (cVar1 != '\0') {
          (**(code **)(*piVar2 + 0x2c8))(uVar3,(short)&uStack_70,(char)param_3);
          (**(code **)(*piVar2 + 0x15c))(uVar3,param_3);
          break;
        }
      }
      FUN_000009c2((char)aiStack_68);
      piVar2 = extraout_A0_00;
    }
    FUN_00002798((short)aiStack_68);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002510 at 00002510
// Size: 38 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002510(void)

{
  char cVar1;
  undefined4 *unaff_D3;
  int *extraout_A0;
  int *unaff_A3;
  int unaff_A6;
  int *piVar2;
  
  do {
    cVar1 = (**(code **)(*piVar2 + 8))();
    if (cVar1 == '\0') {
LAB_00002522:
      FUN_00002798();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_A6 + -0x6c) = *unaff_D3;
    *(undefined4 *)(unaff_A6 + -0x68) = unaff_D3[1];
    (**(code **)(*unaff_A3 + 0x160))();
    cVar1 = (**(code **)(*unaff_A3 + 0x2a0))(unaff_A3,(short)(unaff_A6 + -0x6c));
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*unaff_A3 + 0x2b8))();
      if (cVar1 != '\0') {
        (**(code **)(*unaff_A3 + 0x2c8))((short)unaff_A3,(short)unaff_A6 + -0x6c);
        (**(code **)(*unaff_A3 + 0x15c))();
        goto LAB_00002522;
      }
    }
    FUN_000009c2();
    piVar2 = (int *)(unaff_A6 + -100);
    unaff_A3 = extraout_A0;
  } while( true );
}



// Function: FUN_000025a0 at 000025a0
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000025a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000025a8 at 000025a8
// Size: 40 bytes

void FUN_000025a8(void)

{
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x2d0))();
  (**(code **)(*unaff_A2 + 0x2b4))();
  return;
}



// Function: FUN_000025d0 at 000025d0
// Size: 2 bytes

void FUN_000025d0(void)

{
  return;
}



// Function: FUN_000025d2 at 000025d2
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000025d2(int *param_1,undefined4 *param_2,undefined2 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int aiStack_68 [25];
  
  cVar1 = (**(code **)(*param_1 + 0x2c4))();
  if (cVar1 != '\0') {
    FUN_00000928((short)aiStack_68,(short)param_1);
    FUN_000009b0((short)aiStack_68);
    piVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(aiStack_68[0] + 8))();
      if (cVar1 == '\0') break;
      uStack_70 = *param_2;
      uStack_6c = param_2[1];
      uVar3 = SUB42(piVar2,0);
      (**(code **)(*piVar2 + 0x160))(uVar3,(char)&uStack_70);
      cVar1 = (**(code **)(*piVar2 + 0x2a0))(uVar3,(short)&uStack_70);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar2 + 0x2c0))();
        if (cVar1 != '\0') {
          (**(code **)(*piVar2 + 0x2cc))(uVar3,(short)&uStack_70,(char)param_3);
          (**(code **)(*piVar2 + 0x15c))(uVar3,param_3);
          break;
        }
      }
      FUN_000009c2((char)aiStack_68);
      piVar2 = extraout_A0_00;
    }
    FUN_00002798((short)aiStack_68);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000025f0 at 000025f0
// Size: 204 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000025f0(void)

{
  char cVar1;
  undefined4 *unaff_D3;
  int *extraout_A0;
  int *extraout_A0_00;
  code *in_A1;
  int *piVar2;
  int unaff_A6;
  
  cVar1 = (*in_A1)();
  if (cVar1 != '\0') {
    FUN_00000928((short)(unaff_A6 + -100));
    FUN_000009b0((short)(unaff_A6 + -100));
    piVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
      if (cVar1 == '\0') break;
      *(undefined4 *)(unaff_A6 + -0x6c) = *unaff_D3;
      *(undefined4 *)(unaff_A6 + -0x68) = unaff_D3[1];
      (**(code **)(*piVar2 + 0x160))();
      cVar1 = (**(code **)(*piVar2 + 0x2a0))((short)piVar2,(short)(unaff_A6 + -0x6c));
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*piVar2 + 0x2c0))();
        if (cVar1 != '\0') {
          (**(code **)(*piVar2 + 0x2cc))((short)piVar2,(short)(unaff_A6 + -0x6c));
          (**(code **)(*piVar2 + 0x15c))();
          break;
        }
      }
      FUN_000009c2();
      piVar2 = extraout_A0_00;
    }
    FUN_00002798();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002712 at 00002712
// Size: 38 bytes

undefined4 FUN_00002712(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1e) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x1e) + 0x264))();
  }
  return uVar1;
}



// Function: FUN_00002738 at 00002738
// Size: 48 bytes

void FUN_00002738(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x148))(param_1,param_2,auStack_c);
  (**(code **)(*param_1 + 0x274))(param_1,auStack_c);
  return;
}



// Function: FUN_00002768 at 00002768
// Size: 30 bytes

void FUN_00002768(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  func_0x00001c90(auStack_4e);
  func_0x00007258(param_2,local_8);
  return;
}



// Function: FUN_00002798 at 00002798
// Size: 26 bytes

void FUN_00002798(void)

{
  int *in_A0;
  short unaff_A6w;
  
  (**(code **)(*in_A0 + 0x278))();
  FUN_00001c98(unaff_A6w + -0x4a);
  return;
}



// Function: FUN_000027b2 at 000027b2
// Size: 84 bytes

void FUN_000027b2(int *param_1)

{
  char cVar1;
  undefined1 auStack_56 [8];
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x148))(param_1,(int)param_1 + 0x5e,auStack_56);
    func_0x00001c90(auStack_4e);
    func_0x00007258(auStack_56,local_8);
    return;
  }
  return;
}



// Function: FUN_0000284e at 0000284e
// Size: 38 bytes

void FUN_0000284e(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x27c))(*(int **)(param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_00002874 at 00002874
// Size: 14 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002874(void)

{
  _DAT_0002580c = 0;
  return;
}



// Function: FUN_00002882 at 00002882
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00002882(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (((DAT_00025810 == '\0') || (param_1 != _DAT_00025812)) && (*(int *)(param_1 + 0x1e) != 0)) {
    if ((cVar1 == '\0') ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x1e) + 0x338))(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  return cVar1;
}



// Function: FUN_000028d2 at 000028d2
// Size: 38 bytes

undefined4 FUN_000028d2(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1e) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x1e) + 0x344))();
  }
  return uVar1;
}



// Function: FUN_000028f8 at 000028f8
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_000028f8(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x338))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}



// Function: FUN_00002948 at 00002948
// Size: 112 bytes

bool FUN_00002948(int *param_1)

{
  char cVar1;
  undefined1 auStack_c [8];
  
  cVar1 = (**(code **)(*param_1 + 0x338))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1e4))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x318))(param_1,auStack_c);
      cVar1 = func_0x000072a0(auStack_c);
      goto LAB_000029b2;
    }
  }
  cVar1 = FUN_00003970((int)param_1 + 0x5e);
LAB_000029b2:
  return cVar1 == '\0';
}



// Function: FUN_000029b8 at 000029b8
// Size: 40 bytes

void FUN_000029b8(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x14c))(param_1,auStack_c);
  FUN_000038d0(param_2,auStack_c);
  return;
}



// Function: FUN_000029e0 at 000029e0
// Size: 40 bytes

void FUN_000029e0(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x14c))(param_1,auStack_c);
  func_0x00003938(param_2,auStack_c);
  return;
}



// Function: FUN_00002a08 at 00002a08
// Size: 112 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a08(int *param_1)

{
  undefined2 local_14;
  undefined2 local_12;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [8];
  
  func_0x00007208(auStack_10);
  local_14 = _DAT_00025b56;
  local_12 = _DAT_00025b58;
  (**(code **)(*param_1 + 0x13c))(param_1,&local_14,auStack_c);
  (**(code **)(*param_1 + 0x154))(param_1,auStack_c);
  if (*(int *)((int)param_1 + 0x1e) == 0) {
    FUN_000038a0(auStack_c,auStack_10);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x144))
              (*(int **)((int)param_1 + 0x1e),auStack_10,auStack_c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002a68 at 00002a68
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002a68(void)

{
  int *in_A0;
  
  (**(code **)(*in_A0 + 0x144))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002a9a at 00002a9a
// Size: 60 bytes

void FUN_00002a9a(int *param_1,undefined4 param_2)

{
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    (**(code **)(*param_1 + 0x154))(param_1,param_2);
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x16c))(*(int **)((int)param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_00002ad6 at 00002ad6
// Size: 62 bytes

void FUN_00002ad6(int param_1,short *param_2,undefined4 *param_3)

{
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = (int)*param_2;
  local_8 = (int)param_2[1];
  FUN_000038b8(&local_c,&local_14,param_1 + 0x56);
  *param_3 = local_14;
  param_3[1] = local_10;
  return;
}



// Function: FUN_00002b14 at 00002b14
// Size: 60 bytes

void FUN_00002b14(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 extraout_A0;
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_00003908(auStack_24,param_2,&uStack_14,param_1 + 0x56);
  FUN_00003928(extraout_A0);
  *param_3 = uStack_14;
  param_3[1] = uStack_10;
  param_3[2] = uStack_c;
  param_3[3] = uStack_8;
  return;
}



// Function: FUN_00002b50 at 00002b50
// Size: 62 bytes

void FUN_00002b50(int *param_1)

{
  undefined1 auStack_56 [8];
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x148))(param_1,(int)param_1 + 0x5e,auStack_56);
  func_0x00001c90(auStack_4e);
  func_0x00007258(auStack_56,local_8);
  return;
}



// Function: FUN_00002bd8 at 00002bd8
// Size: 40 bytes

void FUN_00002bd8(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x14c))(param_1,auStack_c);
  func_0x000038d8(param_2,auStack_c);
  return;
}



// Function: FUN_00002c00 at 00002c00
// Size: 40 bytes

void FUN_00002c00(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x14c))(param_1,auStack_c);
  FUN_00003940(param_2,auStack_c);
  return;
}



// Function: FUN_00002c28 at 00002c28
// Size: 150 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c28(int *param_1)

{
  undefined2 local_14;
  undefined2 local_12;
  undefined1 local_10 [4];
  undefined1 auStack_c [8];
  
  func_0x00007208(local_10);
  local_14 = _DAT_00025b56;
  local_12 = _DAT_00025b58;
  (**(code **)(*param_1 + 0x13c))(param_1,&local_14,auStack_c);
  (**(code **)(*param_1 + 0x154))(param_1,auStack_c);
  if (*(int *)((int)param_1 + 0x1e) == 0) {
    FUN_000038a0(auStack_c,local_10);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x144))
              (*(int **)((int)param_1 + 0x1e),local_10,auStack_c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002cc6 at 00002cc6
// Size: 54 bytes

void FUN_00002cc6(int *param_1)

{
  if (*(int *)((int)param_1 + 0x1e) == 0) {
    (**(code **)(*param_1 + 0x248))();
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x268))();
  }
  return;
}



// Function: FUN_00002cfc at 00002cfc
// Size: 10 bytes

undefined4 FUN_00002cfc(void)

{
  return 0;
}



// Function: FUN_00002d06 at 00002d06
// Size: 58 bytes

bool FUN_00002d06(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x348))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x354))(param_1,iVar1);
  }
  return iVar1 == 0;
}



// Function: FUN_00002d40 at 00002d40
// Size: 8 bytes

void FUN_00002d40(void)

{
  return;
}



// Function: FUN_00002d48 at 00002d48
// Size: 164 bytes

char FUN_00002d48(int *param_1)

{
  char cVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int local_68 [25];
  
  cVar1 = (**(code **)(*param_1 + 0x34c))();
  if (cVar1 != '\0') {
    FUN_0000096c((short)local_68,(short)param_1);
    FUN_000009b0((short)local_68);
    piVar3 = extraout_A0;
    while (cVar2 = (**(code **)(local_68[0] + 8))(), cVar2 != '\0') {
      cVar1 = (**(code **)(*piVar3 + 0x350))();
      if (cVar1 == '\0') {
        FUN_00002798((short)local_68);
        return '\0';
      }
      FUN_000009c2((short)local_68);
      piVar3 = extraout_A0_00;
    }
    FUN_00002798((short)local_68);
  }
  return cVar1;
}



// Function: FUN_00002dec at 00002dec
// Size: 48 bytes

void FUN_00002dec(int *param_1,undefined4 param_2)

{
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x148))(param_1,param_2,auStack_c);
  (**(code **)(*param_1 + 0x284))(param_1,auStack_c);
  return;
}



// Function: FUN_00002e1c at 00002e1c
// Size: 30 bytes

void FUN_00002e1c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  func_0x00001c90(auStack_4e);
  func_0x00007258(param_2,local_8);
  return;
}



// Function: FUN_00002e66 at 00002e66
// Size: 84 bytes

void FUN_00002e66(int *param_1)

{
  char cVar1;
  undefined1 auStack_56 [8];
  undefined1 auStack_4e [70];
  undefined4 local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x148))(param_1,(int)param_1 + 0x5e,auStack_56);
    func_0x00001c90(auStack_4e);
    func_0x00007258(auStack_56,local_8);
    return;
  }
  return;
}



// Function: FUN_00002f02 at 00002f02
// Size: 38 bytes

void FUN_00002f02(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x28c))(*(int **)(param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_00002f28 at 00002f28
// Size: 50 bytes

void FUN_00002f28(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x70))();
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00002f5a at 00002f5a
// Size: 74 bytes

void FUN_00002f5a(int param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined1 auStack_10 [8];
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_000038c0(param_3,auStack_10,param_1 + 0x56,&local_8);
  FUN_000038a0(auStack_10);
  *param_2 = local_8;
  param_2[1] = local_6;
  return;
}



// Function: FUN_00002fa4 at 00002fa4
// Size: 62 bytes

void FUN_00002fa4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_1c [16];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00003930(param_2,auStack_1c,param_1 + 0x56,&local_c);
  FUN_00003900(auStack_1c);
  *param_3 = local_c;
  param_3[1] = local_8;
  return;
}



// Function: FUN_00002fe2 at 00002fe2
// Size: 60 bytes

void FUN_00002fe2(int *param_1,undefined4 param_2)

{
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x170))(*(int **)((int)param_1 + 0x1e),param_2);
    (**(code **)(*param_1 + 0x160))(param_1,param_2);
  }
  return;
}



// Function: FUN_0000301e at 0000301e
// Size: 750 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000301e(int *param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  short sVar3;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 auStack_114 [8];
  int local_10c;
  int local_108;
  short local_104;
  short local_102;
  int local_100;
  int local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [16];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94 [25];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_a8 = *(undefined2 *)((int)param_1 + 0x52);
  local_a6 = *(undefined2 *)(param_1 + 0x15);
  local_b0 = *(undefined4 *)((int)param_1 + 0x56);
  local_ac = *(undefined4 *)((int)param_1 + 0x5a);
  local_2c = *(undefined4 *)((int)param_1 + 0x5e);
  local_28 = *(undefined4 *)((int)param_1 + 0x62);
  local_24 = *(undefined4 *)((int)param_1 + 0x66);
  local_20 = *(undefined4 *)((int)param_1 + 0x6a);
  sVar3 = (short)param_1;
  if (*(int *)((int)param_1 + 0x1e) == 0) {
    *(undefined4 *)((int)param_1 + 0x56) = _DAT_00025b5a;
    *(undefined4 *)((int)param_1 + 0x5a) = _DAT_00025b5e;
    *(undefined4 *)((int)param_1 + 0x52) = _DAT_00025b56;
    (**(code **)(*param_1 + 0x304))(sVar3,(short)&uStack_f8);
    *(undefined4 *)((int)param_1 + 0x5e) = uStack_f8;
    *(undefined4 *)((int)param_1 + 0x62) = uStack_f4;
    *(undefined4 *)((int)param_1 + 0x66) = uStack_f0;
    *(undefined4 *)((int)param_1 + 0x6a) = uStack_ec;
  }
  else {
    (**(code **)(*param_1 + 0x14c))(sVar3,(short)auStack_b8);
    local_100 = (int)*(short *)(*(int *)((int)param_1 + 0x1e) + 0x52);
    local_fc = (int)*(short *)(*(int *)((int)param_1 + 0x1e) + 0x54);
    FUN_000038b8(*(int *)((int)param_1 + 0x1e) + 0x56,auStack_114,&local_100,&local_c,
                 (short)auStack_b8);
    FUN_000038c0(auStack_114);
    *(int *)((int)param_1 + 0x56) = local_c;
    *(int *)((int)param_1 + 0x5a) = local_8;
    (**(code **)(*param_1 + 0x304))(param_1,auStack_c8);
    local_a4 = 0xffff8ad0;
    local_a0 = 0xffff8ad0;
    local_9c = 30000;
    local_98 = 30000;
    cVar1 = FUN_00003990(&local_a4,auStack_c8);
    if (cVar1 == '\0') {
      local_102 = (short)(local_8 % 0x400);
      local_104 = (short)(local_c % 0x400);
      local_30 = CONCAT22(local_104,local_102);
      local_10c = (int)local_104;
      local_108 = (int)local_102;
      FUN_000038c0((short)&local_c,(short)&local_120,(short)&local_10c);
      *(undefined4 *)((int)param_1 + 0x56) = local_120;
      *(undefined4 *)((int)param_1 + 0x5a) = local_11c;
      *(undefined4 *)((int)param_1 + 0x52) = local_30;
    }
    else {
      FUN_000038a0((short)&local_c,(short)&local_118);
      *(undefined4 *)((int)param_1 + 0x52) = local_118;
      *(undefined4 *)((int)param_1 + 0x56) = _DAT_00025b5a;
      *(undefined4 *)((int)param_1 + 0x5a) = _DAT_00025b5e;
    }
    if (param_1 == _DAT_00025812) {
      (**(code **)(*param_1 + 0x304))(sVar3,(short)&uStack_d8);
      *(undefined4 *)((int)param_1 + 0x5e) = uStack_d8;
      *(undefined4 *)((int)param_1 + 0x62) = uStack_d4;
      *(undefined4 *)((int)param_1 + 0x66) = uStack_d0;
      *(undefined4 *)((int)param_1 + 0x6a) = uStack_cc;
    }
    else {
      (**(code **)(*param_1 + 0x310))(sVar3,(short)auStack_e8);
      FUN_00003958(auStack_e8,&local_130,(short)*(undefined4 *)((int)param_1 + 0x1e) + 0x5e);
      local_1c = local_130;
      local_18 = local_12c;
      local_14 = local_128;
      local_10 = local_124;
      (**(code **)(*param_1 + 0x164))(param_1,&local_1c);
      *(undefined4 *)((int)param_1 + 0x5e) = local_1c;
      *(undefined4 *)((int)param_1 + 0x62) = local_18;
      *(undefined4 *)((int)param_1 + 0x66) = local_14;
      *(undefined4 *)((int)param_1 + 0x6a) = local_10;
    }
  }
  cVar1 = func_0x00007240(sVar3 + 0x52,(short)&local_a8);
  if (((cVar1 == '\0') && (cVar1 = FUN_000038e0(sVar3 + 0x56,(short)&local_b0), cVar1 == '\0')) &&
     (cVar1 = FUN_00003950(sVar3 + 0x5e,(short)&local_2c), cVar1 == '\0')) {
    return;
  }
  FUN_0000096c((short)local_94,sVar3);
  FUN_000009b0((short)local_94);
  piVar2 = extraout_A0;
  while (cVar1 = (**(code **)(local_94[0] + 8))(), cVar1 != '\0') {
    (**(code **)(*piVar2 + 500))();
    FUN_000009c2((short)local_94);
    piVar2 = extraout_A0_00;
  }
  FUN_00002798((short)local_94);
  return;
}



// Function: FUN_0000330c at 0000330c
// Size: 28 bytes

void FUN_0000330c(int *param_1)

{
  (**(code **)(*param_1 + 0xf4))(param_1,0x646c6f67);
  return;
}



// Function: FUN_00003328 at 00003328
// Size: 10 bytes

undefined4 FUN_00003328(void)

{
  return 1;
}



// Function: FUN_00003332 at 00003332
// Size: 44 bytes

void FUN_00003332(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x414))();
  if (cVar1 == '\0') {
    func_0x000026b0(0x1f);
    func_0x000037a8((short)param_1);
  }
  return;
}



// Function: FUN_00003360 at 00003360
// Size: 8 bytes

byte FUN_00003360(void)

{
  byte in_D0b;
  
  return in_D0b | 0xa8;
}



// Function: FUN_00003368 at 00003368
// Size: 6 bytes

void FUN_00003368(void)

{
  return;
}



// Function: FUN_0000336e at 0000336e
// Size: 1 bytes

undefined4 FUN_0000336e(int *param_1)

{
  char cVar1;
  
  if ((*(char *)((int)param_1 + 0x46) != '\0') &&
     ((cVar1 = (**(code **)(*param_1 + 0x344))(), cVar1 != '\0' ||
      (*(char *)((int)param_1 + 0xa7) != '\0')))) {
    return 1;
  }
  return 0;
}



// Function: FUN_00003370 at 00003370
// Size: 8 bytes

undefined4 FUN_00003370(void)

{
  int *piVar1;
  char cVar2;
  int unaff_A6;
  
  piVar1 = *(int **)(unaff_A6 + 8);
  if ((*(char *)((int)piVar1 + 0x46) != '\0') &&
     ((cVar2 = (**(code **)(*piVar1 + 0x344))(), cVar2 != '\0' ||
      (*(char *)((int)piVar1 + 0xa7) != '\0')))) {
    return 1;
  }
  return 0;
}



// Function: FUN_00003378 at 00003378
// Size: 42 bytes

undefined4 FUN_00003378(void)

{
  char cVar1;
  int *unaff_A2;
  
  if ((*(char *)((int)unaff_A2 + 0x46) != '\0') &&
     ((cVar1 = (**(code **)(*unaff_A2 + 0x344))(), cVar1 != '\0' ||
      (*(char *)((int)unaff_A2 + 0xa7) != '\0')))) {
    return 1;
  }
  return 0;
}



// Function: FUN_000033a2 at 000033a2
// Size: 52 bytes

undefined4 FUN_000033a2(int *param_1)

{
  char cVar1;
  
  if ((*(char *)((int)param_1 + 0x47) != '\0') &&
     ((cVar1 = (**(code **)(*param_1 + 0x344))(), cVar1 != '\0' ||
      (*(char *)((int)param_1 + 0xa7) != '\0')))) {
    return 1;
  }
  return 0;
}



// Function: FUN_000033d6 at 000033d6
// Size: 44 bytes

undefined4 FUN_000033d6(int *param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0x344))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_00003402 at 00003402
// Size: 44 bytes

undefined4 FUN_00003402(int *param_1)

{
  char cVar1;
  
  if ((*(char *)((int)param_1 + 0x49) != '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0x344))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_0000342e at 0000342e
// Size: 150 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000342e(int *param_1)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 *extraout_A0_00;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined1 auStack_a0 [74];
  undefined1 auStack_56 [8];
  undefined1 auStack_4e [74];
  
  if (*(char *)((int)param_1 + 0xa1) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x30c))(param_1,auStack_56);
      local_a4 = 0xf;
      local_a2 = 0xf;
      puVar4 = &local_a4;
      puVar3 = &local_a8;
      func_0x00007260((short)auStack_56);
      uVar2 = (undefined2)((uint)extraout_A0 >> 0x10);
      func_0x00007230((char)extraout_A0,puVar3,puVar4);
      func_0x00007260((short)auStack_56,uVar2);
      *extraout_A0_00 = local_a8;
      func_0x00001c90(auStack_a0);
      func_0x00001c90(auStack_4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00003534 at 00003534
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00003534(int *param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  cVar2 = (**(code **)(*param_1 + 0x1e4))();
  if (cVar2 == '\0') {
    if (param_1[0x1f] != 0) {
      (**(code **)(*param_1 + 0x2f8))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00003540 at 00003540
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00003540(void)

{
  char cVar2;
  undefined4 uVar1;
  int *unaff_A2;
  
  cVar2 = (**(code **)(*unaff_A2 + 0x1e4))();
  if (cVar2 == '\0') {
    if (unaff_A2[0x1f] != 0) {
      (**(code **)(*unaff_A2 + 0x2f8))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_0000361e at 0000361e
// Size: 10 bytes

undefined4 FUN_0000361e(void)

{
  return 0;
}



// Function: FUN_00003628 at 00003628
// Size: 40 bytes

void FUN_00003628(void)

{
  return;
}



// Function: FUN_00003650 at 00003650
// Size: 16 bytes

void FUN_00003650(void)

{
  return;
}



// Function: FUN_00003660 at 00003660
// Size: 12 bytes

void FUN_00003660(void)

{
  return;
}



// Function: FUN_0000366c at 0000366c
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000366c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000368c at 0000368c
// Size: 66 bytes

void FUN_0000368c(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *param_2;
  local_8 = param_2[1];
  (**(code **)(*param_1 + 0x154))(param_1,&local_c);
  FUN_000038a0(&local_c,auStack_18,auStack_14);
  func_0x00007210(auStack_18);
  return;
}



// Function: FUN_000036fc at 000036fc
// Size: 30 bytes

undefined1 FUN_000036fc(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0x6e);
  }
  return uVar1;
}



// Function: FUN_0000371a at 0000371a
// Size: 16 bytes

undefined1 FUN_0000371a(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



// Function: FUN_0000372a at 0000372a
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000372a(int *param_1)

{
  char cVar1;
  
  if (_DAT_fffff8e8 == param_1[0x1f]) {
    cVar1 = (**(code **)(*param_1 + 0x338))();
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_0000379e at 0000379e
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000379e(int *param_1)

{
  char cVar1;
  
  if (_DAT_fffff8e8 == param_1[0x1f]) {
    cVar1 = (**(code **)(*param_1 + 0x338))();
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00003812 at 00003812
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003812(int param_1)

{
  (**(code **)(*_DAT_000266a8 + 0x1ec))(_DAT_000266a8,*(undefined4 *)(param_1 + 0x7c));
  return;
}



// Function: FUN_00003832 at 00003832
// Size: 54 bytes

void FUN_00003832(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  (**(code **)(*param_1 + 0x154))(param_1,&local_18);
  local_c = *(undefined2 *)(param_1 + 0x21);
  uStack_a = *(undefined2 *)((int)param_1 + 0x86);
  uStack_8 = *(undefined2 *)(param_1 + 0x22);
  uStack_6 = *(undefined2 *)((int)param_1 + 0x8a);
  FUN_000038a0(&local_18,auStack_28,auStack_24,&local_c);
  func_0x00007210(auStack_28);
  return;
}



// Function: FUN_00003868 at 00003868
// Size: 52 bytes

void FUN_00003868(void)

{
  int in_D0;
  int unaff_A2;
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -6) = *(undefined2 *)(unaff_A2 + 2 + in_D0);
  *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(unaff_A2 + 4 + in_D0);
  *(undefined2 *)(unaff_A6 + -2) = *(undefined2 *)(unaff_A2 + 6 + in_D0);
  FUN_000038a0(unaff_A6 + -0x14,unaff_A6 + -0x24,unaff_A6 + -0x20,unaff_A6 + -8);
  func_0x00007210(unaff_A6 + -0x24);
  return;
}



// Function: FUN_000038a0 at 000038a0
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000038a8 at 000038a8
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038a8(void)

{
  char cVar1;
  undefined2 *extraout_A0;
  int *unaff_A2;
  int unaff_A6;
  undefined4 uStack00000006;
  code *pcStack0000000a;
  int iStack0000000e;
  undefined1 uStack00000012;
  
  cVar1 = (**(code **)(*unaff_A2 + 0x1d8))();
  if (cVar1 != '\0') {
    uStack00000012 = 0;
    iStack0000000e = unaff_A2[0x1f] + 0x10;
    pcStack0000000a = FUN_000038d0;
    func_0x00007260();
    *(undefined2 *)(unaff_A6 + -0xc) = *extraout_A0;
    *(undefined2 *)(unaff_A6 + -10) = extraout_A0[1];
    pcStack0000000a = (code *)(unaff_A6 + -0xc);
    uStack00000006 = 0x38e6;
    func_0x00007218();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000038b8 at 000038b8
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038b8(void)

{
  char in_D0b;
  undefined2 *extraout_A0;
  int unaff_A2;
  int unaff_A6;
  undefined4 uStack0000000a;
  code *pcStack0000000e;
  int iStack00000012;
  undefined1 uStack00000016;
  
  if (in_D0b != '\0') {
    uStack00000016 = 0;
    iStack00000012 = *(int *)(unaff_A2 + 0x7c) + 0x10;
    pcStack0000000e = FUN_000038d0;
    func_0x00007260();
    *(undefined2 *)(unaff_A6 + -0xc) = *extraout_A0;
    *(undefined2 *)(unaff_A6 + -10) = extraout_A0[1];
    pcStack0000000e = (code *)(unaff_A6 + -0xc);
    uStack0000000a = 0x38e6;
    func_0x00007218();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000038c0 at 000038c0
// Size: 15 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038c0(void)

{
  undefined2 *extraout_A0;
  int unaff_A2;
  int unaff_A6;
  
  func_0x00007260(*(int *)(unaff_A2 + 0x7c) + 0x10);
  *(undefined2 *)(unaff_A6 + -0xc) = *extraout_A0;
  *(undefined2 *)(unaff_A6 + -10) = extraout_A0[1];
  func_0x00007218(unaff_A6 + -0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000038d0 at 000038d0
// Size: 15 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038d0(void)

{
  undefined2 *in_A0;
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -0xc) = *in_A0;
  *(undefined2 *)(unaff_A6 + -10) = in_A0[1];
  func_0x00007218(unaff_A6 + -0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000038e0 at 000038e0
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038e0(void)

{
  func_0x00007218();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003900 at 00003900
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003900(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003908 at 00003908
// Size: 16 bytes

void FUN_00003908(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x1bc))();
  return;
}



// Function: FUN_00003918 at 00003918
// Size: 2 bytes

void FUN_00003918(void)

{
  return;
}



// Function: FUN_0000391a at 0000391a
// Size: 14 bytes

undefined1 FUN_0000391a(int *param_1)

{
  undefined1 uVar1;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x400))();
  if (extraout_A0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(extraout_A0 + 0x1e);
  }
  return uVar1;
}



// Function: FUN_00003928 at 00003928
// Size: 8 bytes

undefined1 FUN_00003928(void)

{
  undefined1 uVar1;
  int extraout_A0;
  int in_A1;
  
  (**(code **)(in_A1 + 0x400))();
  if (extraout_A0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(extraout_A0 + 0x1e);
  }
  return uVar1;
}



// Function: FUN_00003930 at 00003930
// Size: 15 bytes

undefined1 FUN_00003930(void)

{
  undefined1 uVar1;
  int unaff_A2;
  
  if (unaff_A2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(unaff_A2 + 0x1e);
  }
  return uVar1;
}



// Function: FUN_00003940 at 00003940
// Size: 4 bytes

void FUN_00003940(void)

{
  return;
}



// Function: FUN_00003944 at 00003944
// Size: 12 bytes

void FUN_00003944(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  if (param_2 != 0x1a) {
    FUN_00003988();
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x344))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x3b4))(param_1,param_3);
  }
  return;
}



// Function: FUN_00003950 at 00003950
// Size: 8 bytes

void FUN_00003950(void)

{
  char cVar1;
  int *unaff_A2;
  int unaff_A6;
  
  if (*(int *)(unaff_A6 + 0xc) != 0x1a) {
    FUN_00003988();
    return;
  }
  cVar1 = (**(code **)(*unaff_A2 + 0x344))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_A2 + 0x3b4))();
  }
  return;
}



// Function: FUN_00003958 at 00003958
// Size: 24 bytes

void FUN_00003958(void)

{
  char cVar1;
  int unaff_D3;
  int *unaff_A2;
  
  if (unaff_D3 != 0x1a) {
    FUN_00003988();
    return;
  }
  cVar1 = (**(code **)(*unaff_A2 + 0x344))();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_A2 + 0x3b4))();
  }
  return;
}



// Function: FUN_00003970 at 00003970
// Size: 23 bytes

void FUN_00003970(void)

{
  char in_D0b;
  int *unaff_A2;
  
  if (in_D0b != '\0') {
    (**(code **)(*unaff_A2 + 0x3b4))();
  }
  return;
}



// Function: FUN_00003988 at 00003988
// Size: 8 bytes

void FUN_00003988(void)

{
  FUN_00003868();
  return;
}



// Function: FUN_00003990 at 00003990
// Size: 8 bytes

void FUN_00003990(void)

{
  FUN_00003868();
  return;
}



// Function: FUN_00003998 at 00003998
// Size: 12 bytes

void FUN_00003998(void)

{
  return;
}



// Function: FUN_000039a4 at 000039a4
// Size: 68 bytes

int * FUN_000039a4(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    piVar1 = param_1;
  }
  if (piVar1 != (int *)param_1[0x25]) {
    (**(code **)(*(int *)param_1[0x25] + 0xb8))();
    param_1[0x25] = (int)piVar1;
    param_2 = (int *)(**(code **)(*piVar1 + 0xb4))();
  }
  return param_2;
}



// Function: FUN_000039e8 at 000039e8
// Size: 236 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000039e8(int *param_1)

{
  char cVar2;
  int iVar1;
  undefined1 auStack_62 [16];
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)((int)param_1 + 0x82) == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x264))();
    if (cVar2 != '\0') {
      *(undefined1 *)((int)param_1 + 0x82) = 1;
      (**(code **)(*param_1 + 0x1e0))();
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar1 = func_0x000076a8(auStack_4a);
      if (iVar1 == 0) {
        iVar1 = **(int **)(param_1[0x1f] + 0x7a);
        local_52 = *(undefined2 *)(iVar1 + 2);
        local_50 = *(undefined2 *)(iVar1 + 4);
        local_4e = *(undefined2 *)(iVar1 + 6);
        local_4c = *(undefined2 *)(iVar1 + 8);
        FUN_00003998(&local_52,auStack_62);
        (**(code **)(*param_1 + 0x164))(param_1,auStack_62);
        (**(code **)(*param_1 + 0x244))(param_1,auStack_62);
        _DAT_00025f52 = (undefined1 *)local_10;
        *(undefined1 *)((int)param_1 + 0x82) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00003b08 at 00003b08
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00003b08(int param_1)

{
  return param_1 != 0 && FUN_00000a7e == param_1;
}



// Function: FUN_00003b10 at 00003b10
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00003b10(void)

{
  int unaff_A6;
  bool in_ZF;
  bool bVar1;
  
  if (in_ZF) {
    bVar1 = false;
  }
  else {
    bVar1 = FUN_00000a7e == *(int *)(unaff_A6 + 8);
  }
  return bVar1;
}



// Function: FUN_00003b18 at 00003b18
// Size: 18 bytes

bool FUN_00003b18(void)

{
  int unaff_A6;
  int in_stack_00000000;
  
  return in_stack_00000000 == *(int *)(unaff_A6 + 8);
}



// Function: FUN_00003b2c at 00003b2c
// Size: 68 bytes

undefined1 FUN_00003b2c(int param_1)

{
  int extraout_A0;
  undefined1 uVar1;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x6e) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_00003cc6(param_1);
    if (extraout_A0 == 0) {
      uVar1 = *(short *)(param_1 + 0x6c) == 0x80;
    }
    else {
      uVar1 = *(undefined1 *)(extraout_A0 + 0xb2);
    }
  }
  return uVar1;
}



// Function: FUN_00003b70 at 00003b70
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00003b70(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00003bc0 at 00003bc0
// Size: 110 bytes

undefined1 FUN_00003bc0(int param_1)

{
  undefined1 uVar2;
  short sVar1;
  int *extraout_A0;
  
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_00003cc6(param_1);
    if (extraout_A0 == (int *)0x0) {
      sVar1 = FUN_00001d90(param_1);
      if ((((sVar1 == 1) || (sVar1 == 2)) || (sVar1 == 3)) || (sVar1 == 5)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = (**(code **)(*extraout_A0 + 0x410))();
    }
  }
  return uVar2;
}



// Function: FUN_00003c2e at 00003c2e
// Size: 152 bytes

void FUN_00003c2e(void)

{
  int iVar1;
  char cVar2;
  int local_e;
  int local_a;
  
  FUN_00001cb8(&local_e);
  (**(code **)(local_e + 0xc))();
  while ((iVar1 = local_a, cVar2 = FUN_00001cc8(&local_e), cVar2 != '\0' &&
         ((((cVar2 = FUN_00003b2c(iVar1), cVar2 != '\0' ||
            (cVar2 = FUN_00003b08(iVar1), cVar2 != '\0')) ||
           (cVar2 = FUN_00003b70(iVar1), cVar2 != '\0')) ||
          ((cVar2 = FUN_00003bc0(iVar1), cVar2 != '\0' || (*(char *)(iVar1 + 0x6e) == '\0'))))))) {
    (**(code **)(local_e + 0x10))();
  }
  return;
}



// Function: FUN_00003cc6 at 00003cc6
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003cc6(int param_1)

{
  int iVar1;
  char cVar2;
  int extraout_A0;
  int local_68 [25];
  
  if (_DAT_000257ea != (int *)0x0) {
    FUN_000025a0((short)local_68,(short)_DAT_000257ea);
    (**(code **)(local_68[0] + 0xc))();
    while (iVar1 = local_68[1], cVar2 = FUN_000025d0((char)local_68), cVar2 != '\0') {
      (**(code **)(*_DAT_000257ea + 0x74))((short)_DAT_000257ea,(char)iVar1);
      if (*(int *)(extraout_A0 + 4) == param_1) {
        FUN_000025a8((short)local_68);
        return;
      }
      (**(code **)(local_68[0] + 0x10))();
    }
    FUN_000025a8((short)local_68);
  }
  return;
}



// Function: FUN_00003d7c at 00003d7c
// Size: 276 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003d7c(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4)

{
  bool bVar1;
  char cVar4;
  undefined4 uVar2;
  short sVar3;
  int *extraout_A0;
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(char *)(_DAT_000297f4 + 0x91) != '\0') {
    return 0;
  }
  cVar4 = (**(code **)(*param_3 + 0x88))();
  if (cVar4 != '\0') {
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
      func_0x000052f8((char)param_1,param_2,param_3);
    }
    return 1;
  }
  local_8 = *param_4;
  local_6 = param_4[1];
  uVar2 = func_0x00005d40((short)param_1,(char)param_2,param_3,&local_8);
  return uVar2;
}



// Function: FUN_00003e9a at 00003e9a
// Size: 40 bytes

short FUN_00003e9a(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = FUN_0000368c(param_1,param_2);
  if (sVar1 == 5) {
    sVar1 = 3;
  }
  return sVar1;
}



// Function: FUN_00003ec2 at 00003ec2
// Size: 30 bytes

void FUN_00003ec2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *param_4;
  local_6 = param_4[1];
  func_0x00005d40(param_1,param_2,param_3,&local_8);
  return;
}



// Function: FUN_00003ee0 at 00003ee0
// Size: 14 bytes

void FUN_00003ee0(void)

{
  int unaff_A6;
  
  func_0x00005d40(*(undefined4 *)(unaff_A6 + 8));
  return;
}



// Function: FUN_00003eee at 00003eee
// Size: 114 bytes

void FUN_00003eee(int *param_1)

{
  undefined1 auStack_1c [16];
  undefined1 local_c [2];
  undefined2 local_a;
  
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_1c);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_1c,local_c);
  FUN_00003b10(*(undefined2 *)((int)param_1 + 0xa6),local_a,*(undefined2 *)(param_1 + 0x2a),
               *(undefined2 *)(param_1 + 0x2b),*(undefined2 *)(param_1 + 0x2c),
               *(undefined4 *)((int)param_1 + 0xb2));
  func_0x00006d60();
  return;
}



// Function: FUN_00003f60 at 00003f60
// Size: 256 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003f60(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 extraout_A0u;
  
  if (((*(int *)(param_1 + 0xa6) != 0) && (*(char *)(param_1 + 0xa4) != '\x01')) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0xa6) + 0x338))(), cVar1 != '\0')) {
    (**(code **)(**(int **)(param_1 + 0xa6) + 0x334))();
  }
  if ((*(int *)(param_1 + 0x1aa) != 0) && (*(char *)(param_1 + 0xa4) != '\x02')) {
    (**(code **)(**(int **)(param_1 + 0x1aa) + 0x1bc))((short)*(int **)(param_1 + 0x1aa),0xec);
  }
  if (((*(char *)(param_1 + 0xa4) != '\0') && (*(char *)(param_1 + 0xa4) != '\x01')) &&
     (*(char *)(param_1 + 0xa4) != '\x02')) {
    cVar1 = *(char *)(param_1 + 0xa4);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar2 = 1;
        func_0x000072f8((char)param_1 + -0x56);
        FUN_00002a68((short)*(undefined4 *)(param_1 + 0x36) + -4,extraout_A0u,uVar2);
      }
      else if (cVar1 == '\x02') {
        func_0x00004840((char)param_1);
      }
    }
    if ((*(char *)(param_1 + 0xa4) == '\x02') && (_DAT_000288ac == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0x49) = uVar2;
    *(undefined1 *)(param_1 + 0x48) = uVar2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000040c6 at 000040c6
// Size: 194 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000040c6(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 auStack_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  sVar1 = -1;
  if ((*(char *)(_DAT_000297f4 + 0x92) == '\0') &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) {
    sVar1 = func_0x00006e68();
    sVar1 = sVar1 + 1000;
  }
  if (sVar1 != *(short *)(param_1 + 0x2b)) {
    param_1[0x2a] = 0;
    if (sVar1 != -1) {
      (**(code **)(*param_1 + 0x144))((short)param_1,(short)&local_c,param_2);
      local_8 = local_c;
      local_6 = local_a;
      func_0x00007210(&local_8,auStack_10);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00004200 at 00004200
// Size: 186 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004200(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 auStack_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(int *)(_DAT_00028cce + 0xa4) == 0) {
    sVar1 = func_0x00006e68();
    if ((short)(sVar1 + 1000) != *(short *)((int)param_1 + 0xa2)) {
      *(undefined4 *)((int)param_1 + 0x9e) = 0;
      if ((short)(sVar1 + 1000) != -1) {
        (**(code **)(*param_1 + 0x144))((short)param_1,(short)&local_c,param_2);
        local_8 = local_c;
        local_6 = local_a;
        func_0x00007210(&local_8,auStack_10);
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00004332 at 00004332
// Size: 46 bytes

void FUN_00004332(int param_1)

{
  FUN_00003b18(*(undefined2 *)(param_1 + 0x7e),0,0);
  return;
}



// Function: FUN_00004360 at 00004360
// Size: 18 bytes

void FUN_00004360(void)

{
  func_0x00002f88(0);
  return;
}



// Function: FUN_00004372 at 00004372
// Size: 32 bytes

void FUN_00004372(void)

{
  func_0x00003ab0(0x10000);
  func_0x00003ab0(0);
  return;
}



// Function: FUN_00004392 at 00004392
// Size: 96 bytes

void FUN_00004392(undefined4 param_1,int param_2,int *param_3,undefined1 param_4)

{
  FUN_0000012c(param_1,(short)param_2,(short)param_3,param_4);
  if ((param_2 == 4) && (*(int *)((int)param_3 + 0x16) == 0x6d736473)) {
    (**(code **)(*param_3 + 0x428))();
    FUN_00003ee0((short)param_1);
  }
  return;
}



// Function: FUN_000043f2 at 000043f2
// Size: 154 bytes

void FUN_000043f2(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short local_8;
  short local_6;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    sVar2 = func_0x000072b0(param_1 + 0x7e);
    uVar1 = *(undefined4 *)(param_1 + 0x32);
    sVar3 = func_0x000072b0((short)param_1 + 0x7e);
    local_6 = (short)((short)*(undefined4 *)(param_1 + 0x36) - sVar3) / 2;
    local_8 = (short)((short)uVar1 - sVar2) / 2;
    FUN_00002378((short)(ushort)*(byte *)(param_1 + 0x7c) * 0x1c + 0x14098,param_1 + 0x7e,&local_8,
                 CONCAT22(*(undefined2 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x86)));
  }
  return;
}



// Function: FUN_0000448c at 0000448c
// Size: 208 bytes

void FUN_0000448c(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 auStack_a [2];
  short local_8;
  short local_6;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar5 = 200;
    func_0x00007040(auStack_a);
    iVar4 = param_1 + 0xc2;
    sVar2 = func_0x000072b0((short)iVar4);
    uVar1 = *(undefined4 *)(param_1 + 0x32);
    sVar3 = func_0x000072b0((short)param_1 + 0xc2,(short)((uint)iVar4 >> 0x10),uVar5);
    local_6 = (short)((short)*(undefined4 *)(param_1 + 0x36) - sVar3) / 2;
    local_8 = (short)((short)uVar1 - sVar2) / 2;
    FUN_00002378((short)(ushort)*(byte *)(param_1 + 0xc0) * 0x1c + 0x14098,param_1 + 0xc2,&local_8,
                 CONCAT22(*(undefined2 *)(param_1 + 0xcc),*(undefined2 *)(param_1 + 0xca)));
    func_0x00006d48((short)auStack_a);
  }
  return;
}



