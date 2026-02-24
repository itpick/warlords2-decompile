// Warlords II - Decompiled 68k Code
// Segment: CODE_025
// Decompiled by Ghidra 12.0.3

// Function: FUN_000004a4 at 000004a4
// Size: 298 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004a4(void)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  int *local_4e;
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
    (**(code **)(*extraout_A0 + 0x400))();
    (**(code **)(*extraout_A0 + 0x188))(extraout_A0,0x6564);
    if ((extraout_A0_00 != (int *)0x0) && (extraout_A0_01 != 0)) {
      (**(code **)(*extraout_A0_00 + 0xa4))((short)extraout_A0_00,3,(short)extraout_A0_01,0);
    }
    _DAT_00025f52 = local_10;
    local_4e = extraout_A0;
  }
  else {
    cVar2 = func_0x00000e18(0);
    if (cVar2 != '\0') {
      (**(code **)(iRam00000000 + 0x3a0))();
    }
    local_4e = (int *)0x0;
    func_0x00001c10();
  }
  (**(code **)(*local_4e + 0x40c))();
  (**(code **)(*local_4e + 0x3a0))();
  return;
}



