// Warlords II - Decompiled 68k Code
// Segment: CODE_140
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000292 at 00000292
// Size: 558 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00000292(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 extraout_A0w;
  int *extraout_A0_01;
  undefined2 extraout_A0w_00;
  int *extraout_A0_02;
  undefined2 extraout_A0w_01;
  int *extraout_A0_03;
  undefined2 extraout_A0w_02;
  int *extraout_A0_04;
  undefined2 extraout_A0w_03;
  int local_552;
  undefined1 auStack_54e [256];
  undefined1 auStack_44e [256];
  undefined1 auStack_34e [256];
  undefined1 auStack_24e [256];
  undefined1 auStack_14e [256];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  (**(code **)(*_DAT_000257ee + 0x68))
            ((short)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
  local_8 = extraout_A0;
  func_0x00001bf0((char)extraout_A0);
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar1 = func_0x000076a8((short)auStack_4e);
  if (iVar1 == 0) {
    (**(code **)(*local_8 + 0x188))((short)local_8,100);
    if (extraout_A0_00 != (int *)0x0) {
      func_0x00007320((short)auStack_14e,param_1);
      (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0w);
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,0x31);
    if (extraout_A0_01 != (int *)0x0) {
      func_0x00007320((short)auStack_24e,param_2);
      (**(code **)(*extraout_A0_01 + 1000))((short)extraout_A0_01,extraout_A0w_00);
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,0x32);
    if (extraout_A0_02 != (int *)0x0) {
      func_0x00007320((short)auStack_34e,param_3);
      (**(code **)(*extraout_A0_02 + 1000))((short)extraout_A0_02,extraout_A0w_01);
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,0x33);
    if (extraout_A0_03 != (int *)0x0) {
      func_0x00007320((short)auStack_44e,param_4);
      (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0w_02);
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,0x34);
    if (extraout_A0_04 != (int *)0x0) {
      func_0x00007320((short)auStack_54e,param_5);
      (**(code **)(*extraout_A0_04 + 1000))((short)extraout_A0_04,extraout_A0w_03);
    }
    (**(code **)(*local_8 + 0x194))();
    local_552 = (**(code **)(*local_8 + 0x40c))();
    (**(code **)(*local_8 + 0x3a0))();
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
    }
    local_8 = (int *)0x0;
    func_0x00001c10((short)((uint)local_18 >> 0x10));
  }
  return local_552 == 0x6f6b2020;
}



