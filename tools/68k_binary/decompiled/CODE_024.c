// Warlords II - Decompiled 68k Code
// Segment: CODE_024
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000354 at 00000354
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000354(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00004578(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x84))();
    FUN_00000444((short)param_1);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_000003f4 at 000003f4
// Size: 28 bytes

void FUN_000003f4(undefined4 param_1)

{
  FUN_00000410(param_1);
  func_0x00005048(param_1);
  return;
}



// Function: FUN_00000410 at 00000410
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000410(int param_1)

{
  *(undefined2 *)(param_1 + 0xd8) = 0xffff;
  if (*(int *)(param_1 + 0xda) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xde) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000444 at 00000444
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000444(int *param_1,undefined4 param_2)

{
  FUN_00000410(param_1);
  *(undefined2 *)(param_1 + 0x36) = param_2._0_2_;
  if (*(short *)(param_1 + 0x36) != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_000004ea at 000004ea
// Size: 168 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000004ea(int *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_1a0 [46];
  undefined1 auStack_172 [16];
  undefined1 local_162;
  undefined2 auStack_62 [25];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  local_162 = 0;
  func_0x00007030(auStack_1a0);
  func_0x00006d60();
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_172);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_172,auStack_30);
  (**(code **)(*param_1 + 0x148))(param_1,param_1 + 0x2f,auStack_20);
  func_0x00006d60();
  if (*(char *)(param_1 + 0x20) == '\0') {
    (**(code **)(*param_1 + 0x440))();
    sVar1 = 0x18;
    puVar2 = (undefined2 *)**(undefined4 **)((int)param_1 + 0xda);
    puVar3 = auStack_62;
    do {
      *puVar3 = *puVar2;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00007250(auStack_20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000782 at 00000782
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00000782(int param_1,undefined4 param_2)

{
  int iVar1;
  int *extraout_A0;
  
  iVar1 = param_2._0_2_ * 2;
  *(undefined2 *)(iVar1 + param_1 + 0x84) = param_2._2_2_;
  if (_DAT_00027fc8 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc8 + 0x188))(_DAT_00027fc8,param_2._0_2_ + 0x62757431);
    iVar1 = 0;
    if (extraout_A0 != (int *)0x0) {
      iVar1 = (**(code **)(*extraout_A0 + 0x3d8))();
    }
  }
  return iVar1;
}



// Function: FUN_000007ea at 000007ea
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007ea(void)

{
  func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008a0 at 000008a0
// Size: 258 bytes

/* WARNING: Removing unreachable block (ram,0x00000978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008a0(void)

{
  int iVar1;
  int *extraout_A0;
  int extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    func_0x00001bf0(extraout_A0);
    (**(code **)(*extraout_A0 + 0x194))();
    iVar1 = (**(code **)(*extraout_A0 + 0x40c))();
    if ((iVar1 == 0x6f6b2020) && ((**(code **)(*extraout_A0 + 0x400))(), extraout_A0_00 != 0)) {
      FUN_00000bd4(extraout_A0_00);
    }
    (**(code **)(*extraout_A0 + 0x3a0))();
    _DAT_00025f52 = local_10;
  }
  else {
    func_0x00001c10();
  }
  return;
}



// Function: FUN_000009a2 at 000009a2
// Size: 118 bytes

void FUN_000009a2(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if ((*(uint *)(param_3 + 0x16) < 0x73686f31) || (0x73686f4a < *(uint *)(param_3 + 0x16))) {
    if ((*(uint *)(param_3 + 0x16) < 0x62757431) || (0x62757434 < *(uint *)(param_3 + 0x16))) {
      func_0x00004a30(param_1,param_2,param_3,param_4);
    }
    else {
      FUN_00000a18(param_1,*(undefined4 *)(param_3 + 0x16));
    }
  }
  else {
    FUN_00000b5a(param_1,*(undefined4 *)(param_3 + 0x16));
  }
  return;
}



// Function: FUN_00000a18 at 00000a18
// Size: 190 bytes

undefined4 FUN_00000a18(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  short sVar3;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  
  piVar1 = *(int **)(param_1 + 8);
  for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
    (**(code **)(*piVar1 + 0x188))(piVar1,sVar3 + 0x62757431);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3a8))();
    }
  }
  (**(code **)(*piVar1 + 0x188))(piVar1,param_2);
  uVar2 = 0;
  if (extraout_A0_00 != 0) {
    sVar3 = *(short *)(extraout_A0_00 + 0xa6);
    (**(code **)(*piVar1 + 0x188))(piVar1,0x73686f72);
    uVar2 = 0;
    if (extraout_A0_01 != (int *)0x0) {
      uVar2 = (**(code **)(*extraout_A0_01 + 1000))(extraout_A0_01,sVar3 + 0x73686761);
    }
  }
  return uVar2;
}



// Function: FUN_00000ad6 at 00000ad6
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ad6(int param_1)

{
  int *piVar1;
  short sVar2;
  int *extraout_A0;
  
  piVar1 = *(int **)(param_1 + 8);
  for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
    *(undefined2 *)(param_1 + 0x3a + sVar2 * 2) = *(undefined2 *)(sVar2 * 2 + _DAT_000297f4 + 0x84);
    (**(code **)(*piVar1 + 0x188))(piVar1,sVar2 + 0x62757431);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3d8))();
    }
  }
  FUN_00000a18(param_1,0x62757431);
  return;
}



// Function: FUN_00000b5a at 00000b5a
// Size: 122 bytes

void FUN_00000b5a(int param_1,short param_2)

{
  int *piVar1;
  short sVar2;
  int *extraout_A0;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar3 = (int *)0x0;
  for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
    (**(code **)(*piVar1 + 0x188))(piVar1,sVar2 + 0x62757431);
    piVar3 = extraout_A0;
    if ((extraout_A0 != (int *)0x0) && (*(char *)(extraout_A0 + 0x20) != '\0')) break;
  }
  if ((sVar2 < 4) &&
     (*(short *)(param_1 + 0x3a + sVar2 * 2) = param_2 + -0x6761, piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x3d8))();
  }
  return;
}



// Function: FUN_00000bd4 at 00000bd4
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bd4(int param_1)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < 4; sVar1 = sVar1 + 1) {
    FUN_00000782(_DAT_000297f4,CONCAT22(sVar1,*(undefined2 *)(param_1 + 0x3a + sVar1 * 2)));
  }
  FUN_000007ea(_DAT_000297f4);
  return;
}



