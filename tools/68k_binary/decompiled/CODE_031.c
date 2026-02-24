// Warlords II - Decompiled 68k Code
// Segment: CODE_031
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000038 at 00000038
// Size: 238 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000038(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  
  _DAT_00027fc8 = 0;
  _DAT_00027fc4 = 0;
  _DAT_00027fbc = 0;
  _DAT_00027fb4 = 0;
  _DAT_00027fb8 = 0;
  _DAT_00027fc0 = 0;
  func_0x000020e8(*(undefined4 *)(param_1 + 0x11e));
  *(undefined4 *)(param_1 + 0x11e) = extraout_A0;
  func_0x000020e8(*(undefined4 *)(param_1 + 0x122));
  *(undefined4 *)(param_1 + 0x122) = extraout_A0_00;
  func_0x00000e10(*(undefined4 *)(param_1 + 0x142));
  *(undefined4 *)(param_1 + 0x142) = extraout_A0_01;
  func_0x00000e10(*(undefined4 *)(param_1 + 0x146));
  *(undefined4 *)(param_1 + 0x146) = extraout_A0_02;
  func_0x00000e10(*(undefined4 *)(param_1 + 0x14a));
  *(undefined4 *)(param_1 + 0x14a) = extraout_A0_03;
  func_0x00000e10(*(undefined4 *)(param_1 + 0x14e));
  *(undefined4 *)(param_1 + 0x14e) = extraout_A0_04;
  func_0x00000e10(*(undefined4 *)(param_1 + 0x152));
  *(undefined4 *)(param_1 + 0x152) = extraout_A0_05;
  if (*(int *)(param_1 + 0x156) != 0) {
    (**(code **)(**(int **)(param_1 + 0x156) + 0x8c))();
  }
  func_0x00000e10(*(undefined4 *)(param_1 + 0x156));
  *(undefined4 *)(param_1 + 0x156) = extraout_A0_06;
  if (*(int *)(param_1 + 0x15a) != 0) {
    (**(code **)(**(int **)(param_1 + 0x15a) + 0x8c))();
  }
  func_0x00000e10(*(undefined4 *)(param_1 + 0x15a));
  *(undefined4 *)(param_1 + 0x15a) = extraout_A0_07;
  func_0x00005110(param_1);
  return;
}



// Function: FUN_00000126 at 00000126
// Size: 262 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000126(int param_1)

{
  FUN_0000022c(param_1);
  if (_DAT_00027fc8 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc8 + 0x198))();
    (**(code **)(*_DAT_00027fc8 + 0x4c))();
  }
  _DAT_00027fc8 = (int *)0x0;
  if (_DAT_00027fc4 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc4 + 0x198))();
    (**(code **)(*_DAT_00027fc4 + 0x4c))();
  }
  _DAT_00027fc4 = (int *)0x0;
  if (_DAT_00027fbc != (int *)0x0) {
    (**(code **)(*_DAT_00027fbc + 0x198))();
    (**(code **)(*_DAT_00027fbc + 0x4c))();
  }
  _DAT_00027fbc = (int *)0x0;
  if (_DAT_00027fb4 != (int *)0x0) {
    (**(code **)(*_DAT_00027fb4 + 0x198))();
    (**(code **)(*_DAT_00027fb4 + 0x4c))();
  }
  _DAT_00027fb4 = (int *)0x0;
  _DAT_00027fb8 = 0;
  _DAT_00027fc0 = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 1;
  *(undefined1 *)(_DAT_000297f4 + 0x92) = 0;
  func_0x00004a70(param_1);
  return;
}



// Function: FUN_0000022c at 0000022c
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000022c(void)

{
  func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000004a8 at 000004a8
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
    *(undefined4 *)(param_1 + 0x126) = 0;
  }
  FUN_0000022c(param_1);
  uVar4 = _DAT_00027fc8;
  uVar3 = _DAT_00027fc4;
  uVar2 = _DAT_00027fbc;
  uVar1 = _DAT_00027fb4;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar5 = func_0x000076a8((short)auStack_4a);
  if (iVar5 == 0) {
    _DAT_00027fc8 = 0;
    _DAT_00027fc4 = 0;
    _DAT_00027fbc = 0;
    _DAT_00027fb4 = 0;
    func_0x000050a8(param_1);
    _DAT_00025f52 = local_10;
  }
  else {
    _DAT_00027fb4 = uVar1;
    _DAT_00027fbc = uVar2;
    _DAT_00027fc4 = uVar3;
    _DAT_00027fc8 = uVar4;
    func_0x00001c10();
  }
  *(undefined1 *)(_DAT_000297f4 + 0x92) = 0;
  return;
}



// Function: FUN_0000058c at 0000058c
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000058c(int param_1)

{
  func_0x00002360(param_1 + 0x88);
  func_0x00002358();
  _DAT_000150f6 = 0;
  _DAT_000150f8 = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



