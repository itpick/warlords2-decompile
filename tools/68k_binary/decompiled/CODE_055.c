// Warlords II - Decompiled 68k Code
// Segment: CODE_055
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000224 at 00000224
// Size: 416 bytes

/* WARNING: Removing unreachable block (ram,0x000002c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000224(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 uVar3;
  byte bVar4;
  undefined4 uVar2;
  short sVar5;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined2 uVar6;
  
  piVar1 = *(int **)(param_1 + 8);
  func_0x00001bf0((char)*(undefined4 *)((int)piVar1 + 0x26));
  if (param_2._0_1_ == '\0') {
    uVar3 = 10;
  }
  else {
    uVar3 = 4;
  }
  uVar6 = SUB42(piVar1,0);
  (**(code **)(*piVar1 + 0x188))(uVar6,0x73);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x42c))();
  }
  (**(code **)(*piVar1 + 0x188))(uVar6,0x65);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x3d4))((short)extraout_A0_00,0xfc);
    *(undefined2 *)(extraout_A0_00 + 0x2c) = uVar3;
    (**(code **)(*extraout_A0_00 + 1000))((char)extraout_A0_00,0xfc);
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    if (((*(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) == 0) &&
        (*(short *)(sVar5 * 2 + _DAT_0002884c + 0x138) != 0)) &&
       ((**(code **)(*piVar1 + 0x188))(uVar6,(char)sVar5 + '0'), extraout_A0_01 != (int *)0x0)) {
      (**(code **)(*extraout_A0_01 + 0x70))();
      if (param_2._0_1_ == '\0') {
        bVar4 = 0xff;
      }
      else {
        bVar4 = 0xf8;
      }
      (**(code **)(*extraout_A0_01 + 0x3c8))((short)extraout_A0_01,(ushort)bVar4 * 6 + -0x6fae);
    }
  }
  (**(code **)(*piVar1 + 0x188))(uVar6,0x65);
  uVar2 = 0;
  if ((extraout_A0_02 != (int *)0x0) &&
     (uVar2 = (**(code **)(*extraout_A0_02 + 0xc4))(), (char)uVar2 != '\0')) {
    uVar2 = (**(code **)(*extraout_A0_02 + 0xcc))();
  }
  return uVar2;
}



