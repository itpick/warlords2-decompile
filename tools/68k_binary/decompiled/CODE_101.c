// Warlords II - Decompiled 68k Code
// Segment: CODE_101
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int extraout_A0;
  
  _DAT_0002894e = 1;
  sVar2 = 8;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    func_0x00001e98(0x42c);
    *(int *)(sVar1 * 4 + 0x28954) = extraout_A0;
    sVar2 = sVar1;
    if (extraout_A0 == 0) {
      func_0x00001bf0(0);
    }
  }
  if (param_1._0_2_ != 0) {
    FUN_00000060();
  }
  return;
}



// Function: FUN_00000060 at 00000060
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000060(void)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  undefined4 extraout_A0;
  undefined2 uVar4;
  
  if (_DAT_0002894e == 0) {
    FUN_0000000c();
  }
  sVar3 = 8;
  do {
    sVar2 = sVar3 + -1;
    if (sVar3 == 0) {
      return;
    }
    uVar1 = *(undefined4 *)(sVar2 * 4 + 0x28954);
    uVar4 = (undefined2)((uint)uVar1 >> 0x10);
    func_0x00002d52((short)uVar1);
    _DAT_00028978 = extraout_A0;
    func_0x00003e48(uVar4);
    sVar3 = sVar2;
  } while (*(int *)(sVar2 * 4 + 0x28954) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000000c0 at 000000c0
// Size: 860 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000000c0(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  iVar1 = (int)param_1._0_2_;
  if (iVar1 == 0) {
    *(undefined2 *)(_DAT_00028978 + 10) = 0x1e;
    *(undefined2 *)(_DAT_00028978 + 0x48) = 1;
    uVar2 = func_0x00002ad0(0x10004);
    *(undefined2 *)(_DAT_00028978 + 0x18) = uVar2;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = func_0x00002ad0(4);
    *(undefined2 *)(_DAT_00028978 + 0x1e) = uVar2;
    iVar1 = func_0x00002ad0(4,uVar3,uVar4);
    *(short *)(_DAT_00028978 + 0x1a) = (short)iVar1;
    *(undefined2 *)(_DAT_00028978 + 0x24a) = 1;
    *(undefined2 *)(_DAT_00028978 + 0x38) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x10) = 0xffff;
    *(undefined2 *)(_DAT_00028978 + 0x12) = 0xffff;
    *(undefined2 *)(_DAT_00028978 + 0x26) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x28) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x2a) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x2c) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x2e) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x30) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x32) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x34) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x36) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x42) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x44) = 0x50;
  }
  else if (iVar1 == 1) {
    *(undefined2 *)(_DAT_00028978 + 10) = 0x14;
    *(undefined2 *)(_DAT_00028978 + 0x48) = 0;
    uVar2 = func_0x00002ad0(0x10004);
    *(undefined2 *)(_DAT_00028978 + 0x18) = uVar2;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = func_0x00002ad0(4);
    *(undefined2 *)(_DAT_00028978 + 0x1e) = uVar2;
    iVar1 = func_0x00002ad0(8,uVar3,uVar4);
    *(short *)(_DAT_00028978 + 0x1c) = (short)iVar1;
    *(ushort *)(_DAT_00028978 + 0xc) = *(ushort *)(_DAT_00028978 + 0xc) | 1;
    *(undefined2 *)(_DAT_00028978 + 0x38) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x24a) = 2;
    *(undefined2 *)(_DAT_00028978 + 0x10) = 0xffff;
    *(undefined2 *)(_DAT_00028978 + 0x12) = 0xffff;
    *(undefined2 *)(_DAT_00028978 + 0x26) = 5;
    *(undefined2 *)(_DAT_00028978 + 0x28) = 10;
    *(undefined2 *)(_DAT_00028978 + 0x2a) = 0x14;
    *(undefined2 *)(_DAT_00028978 + 0x2c) = 1;
    *(undefined2 *)(_DAT_00028978 + 0x2e) = 5;
    *(undefined2 *)(_DAT_00028978 + 0x34) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x32) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x30) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x36) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x42) = 0;
    *(undefined2 *)(_DAT_00028978 + 0x44) = 0x23;
  }
  else {
    iVar1 = iVar1 + -2;
    if (iVar1 == 0) {
      *(undefined2 *)(_DAT_00028978 + 10) = 10;
      *(undefined2 *)(_DAT_00028978 + 0x48) = 0;
      uVar2 = func_0x00002ad0(0x1000a);
      *(undefined2 *)(_DAT_00028978 + 0x18) = uVar2;
      uVar4 = 0;
      uVar3 = 1;
      uVar2 = func_0x00002ad0(8);
      *(undefined2 *)(_DAT_00028978 + 0x1a) = uVar2;
      iVar1 = func_0x00002ad0(6,uVar3,uVar4);
      *(short *)(_DAT_00028978 + 0x1c) = (short)iVar1;
      *(undefined2 *)(_DAT_00028978 + 0x24a) = 4;
      *(undefined2 *)(_DAT_00028978 + 0x38) = 1;
      *(ushort *)(_DAT_00028978 + 0xc) = *(ushort *)(_DAT_00028978 + 0xc) | 1;
      *(undefined2 *)(_DAT_00028978 + 0x10) = 0xffff;
      *(undefined2 *)(_DAT_00028978 + 0x12) = 0xffff;
      *(undefined2 *)(_DAT_00028978 + 0x26) = 5;
      *(undefined2 *)(_DAT_00028978 + 0x28) = 10;
      *(undefined2 *)(_DAT_00028978 + 0x2a) = 0x14;
      *(undefined2 *)(_DAT_00028978 + 0x2c) = 5;
      *(undefined2 *)(_DAT_00028978 + 0x2e) = 0x32;
      *(undefined2 *)(_DAT_00028978 + 0x34) = 0;
      *(undefined2 *)(_DAT_00028978 + 0x32) = 0;
      *(undefined2 *)(_DAT_00028978 + 0x30) = 0;
      *(undefined2 *)(_DAT_00028978 + 0x36) = 0x32;
      *(undefined2 *)(_DAT_00028978 + 0x42) = 1;
      *(undefined2 *)(_DAT_00028978 + 0x44) = 0x23;
    }
  }
  return iVar1;
}



// Function: FUN_0000041c at 0000041c
// Size: 144 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000041c(void)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  
  if (_DAT_00027f5c == (int *)0x0) {
    func_0x00001e98(0x8880);
    _DAT_00027f5c = (int *)extraout_A0;
    if (_DAT_00027f60 == 0) {
      func_0x00001e98(0x4440);
      _DAT_00027f60 = extraout_A0_00;
    }
    if (_DAT_00027f64 == 0) {
      func_0x00001e98(0x10b8);
      _DAT_00027f64 = extraout_A0_01;
    }
    _DAT_00027f78 = 1;
    FUN_000004b8();
    return;
  }
  if (*_DAT_00027f5c == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000004b8 at 000004b8
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004b8(void)

{
  short sVar1;
  
  if (_DAT_00027f78 != 0) {
    sVar1 = 0x14;
    while (sVar1 != 0) {
      FUN_000004e2();
      sVar1 = sVar1 + -1;
    }
  }
  return;
}



// Function: FUN_000004e2 at 000004e2
// Size: 196 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000004e2(undefined4 param_1)

{
  short sVar1;
  int extraout_A0;
  
  func_0x00002d52(_DAT_00027f64);
  sVar1 = 200;
  _DAT_00027f74 = extraout_A0;
  while (sVar1 != 0) {
    *(undefined1 *)(param_1._0_2_ * 0xd6 + _DAT_00027f74 + 0xe + (int)(short)(sVar1 + -1)) = 0;
    sVar1 = sVar1 + -1;
  }
  *(undefined2 *)(_DAT_00027f74 + param_1._0_2_ * 0xd6) = 0;
  *(undefined2 *)(_DAT_00027f74 + 2 + param_1._0_2_ * 0xd6) = 0;
  *(undefined2 *)(_DAT_00027f74 + 4 + param_1._0_2_ * 0xd6) = 0;
  *(undefined2 *)(_DAT_00027f74 + 6 + param_1._0_2_ * 0xd6) = 0;
  *(undefined2 *)(_DAT_00027f74 + 8 + param_1._0_2_ * 0xd6) = 0;
  *(undefined2 *)(_DAT_00027f74 + 10 + param_1._0_2_ * 0xd6) = 0;
  *(undefined2 *)(_DAT_00027f74 + 0xc + param_1._0_2_ * 0xd6) = 0;
  if (_DAT_00027f64 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000005a8 at 000005a8
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005a8(void)

{
  undefined4 extraout_A0;
  
  if (_DAT_00027f78 == 0) {
    FUN_0000041c();
  }
  func_0x00002d52(_DAT_00027f5c);
  _DAT_00027f68 = extraout_A0;
  _DAT_00027f6c = &DAT_00027f68;
  return;
}



// Function: FUN_000005e2 at 000005e2
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005e2(void)

{
  if (_DAT_00027f5c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



