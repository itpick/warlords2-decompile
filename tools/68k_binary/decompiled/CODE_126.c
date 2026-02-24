// Warlords II - Decompiled 68k Code
// Segment: CODE_126
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000188 at 00000188
// Size: 306 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000188(void)

{
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 local_c;
  undefined4 local_8;
  
  _DAT_00027fd2 = (short)(_DAT_00027fd4 != (int *)0x0);
  if (_DAT_00027fd2 == 0) {
    func_0x00006d80(_DAT_000297f4);
    (**(code **)(*_DAT_000257ee + 0x68))();
    func_0x00001bf0(extraout_A0);
    _DAT_00027fd4 = extraout_A0;
    (**(code **)(*extraout_A0 + 0x194))();
    (**(code **)(*extraout_A0 + 0x268))();
    _DAT_00027fd2 = 1;
  }
  func_0x00002ad8(0x8b0006);
  func_0x00002ad8(0x8b0005,extraout_A0_00);
  func_0x00002ad8(4,extraout_A0_01);
  func_0x00002ad8(3,extraout_A0w);
  func_0x00002ad8(2,extraout_A0w_00);
  func_0x00002ad8(0x8b0001,extraout_A0w_01);
  func_0x00002ad8(0x8b0000,extraout_A0_02);
  FUN_00000300(extraout_A0_03);
  local_c = 0xca;
  local_8 = 0x3c;
  func_0x00003328(_DAT_00027fd4,(short)&local_c);
  func_0x00003330((short)_DAT_00027fd4);
  return;
}



// Function: FUN_000002ba at 000002ba
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002ba(void)

{
  if (_DAT_00027fd2 != 0) {
    (**(code **)(*_DAT_00027fd4 + 0x3a0))();
    _DAT_00027fd4 = (int *)0x0;
    _DAT_00027fd2 = 0;
  }
  return;
}



// Function: FUN_000002e8 at 000002e8
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002e8(void)

{
  func_0x00003330(_DAT_00027fd4);
  return;
}



// Function: FUN_00000300 at 00000300
// Size: 500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000300(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int *extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  undefined2 extraout_A0w_00;
  int *extraout_A0_01;
  undefined2 extraout_A0w_01;
  int *extraout_A0_02;
  undefined2 extraout_A0w_02;
  int *extraout_A0_03;
  undefined2 extraout_A0w_03;
  int *extraout_A0_04;
  undefined2 extraout_A0w_04;
  undefined1 auStack_604 [256];
  undefined1 auStack_504 [256];
  undefined1 auStack_404 [256];
  undefined1 auStack_304 [256];
  undefined1 auStack_204 [256];
  undefined1 auStack_104 [256];
  
  (**(code **)(*_DAT_00027fd4 + 0x188))((short)_DAT_00027fd4,0x31);
  if (extraout_A0 != (int *)0x0) {
    func_0x00007320((short)auStack_104,param_2);
    (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,extraout_A0w);
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  (**(code **)(*_DAT_00027fd4 + 0x188))((short)_DAT_00027fd4,0x32);
  if (extraout_A0_00 != (int *)0x0) {
    func_0x00007320((short)auStack_204,param_3);
    (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0w_00);
    (**(code **)(*extraout_A0_00 + 0x26c))();
  }
  (**(code **)(*_DAT_00027fd4 + 0x188))((short)_DAT_00027fd4,0x33);
  if (extraout_A0_01 != (int *)0x0) {
    func_0x00007320((short)auStack_304,param_4);
    (**(code **)(*extraout_A0_01 + 1000))((short)extraout_A0_01,extraout_A0w_01);
    (**(code **)(*extraout_A0_01 + 0x26c))();
  }
  (**(code **)(*_DAT_00027fd4 + 0x188))((short)_DAT_00027fd4,0x34);
  if (extraout_A0_02 != (int *)0x0) {
    func_0x00007320((short)auStack_404,param_5);
    (**(code **)(*extraout_A0_02 + 1000))((short)extraout_A0_02,extraout_A0w_02);
    (**(code **)(*extraout_A0_02 + 0x26c))();
  }
  (**(code **)(*_DAT_00027fd4 + 0x188))((short)_DAT_00027fd4,0x35);
  if (extraout_A0_03 != (int *)0x0) {
    func_0x00007320((short)auStack_504,param_6);
    (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0w_03);
    (**(code **)(*extraout_A0_03 + 0x26c))();
  }
  (**(code **)(*_DAT_00027fd4 + 0x188))((short)_DAT_00027fd4,0x36);
  if (extraout_A0_04 != (int *)0x0) {
    func_0x00007320((short)auStack_604,param_7);
    (**(code **)(*extraout_A0_04 + 1000))((short)extraout_A0_04,extraout_A0w_04);
    (**(code **)(*extraout_A0_04 + 0x26c))();
  }
  (**(code **)(*_DAT_00027fd4 + 0x268))();
  return;
}



