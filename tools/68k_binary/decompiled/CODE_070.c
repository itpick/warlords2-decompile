// Warlords II - Decompiled 68k Code
// Segment: CODE_070
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000002e at 0000002e
// Size: 458 bytes

void FUN_0000002e(int param_1,undefined1 param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  short sVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  
  if (*(int *)(param_3 + 0x16) == 0x72656a65) {
    func_0x00002868();
    *(undefined1 *)(param_1 + 0x3a) = 1;
    piVar1 = *(int **)(param_1 + 8);
    for (sVar2 = 0; uVar5 = SUB42(piVar1,0), sVar2 < 3; sVar2 = sVar2 + 1) {
      (**(code **)(*piVar1 + 0x188))(uVar5,(char)sVar2 + '0');
      if (extraout_A0 != (int *)0x0) {
        (**(code **)(*extraout_A0 + 0x334))();
      }
    }
    for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
      (**(code **)(*piVar1 + 0x188))(uVar5,(char)sVar2 + '0');
      if (extraout_A0_00 != (int *)0x0) {
        (**(code **)(*extraout_A0_00 + 0x334))();
      }
    }
    uVar6 = 99;
    (**(code **)(*piVar1 + 0x188))(uVar5,0x65);
    if (extraout_A0_01 != (int *)0x0) {
      uVar4 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      (**(code **)(*extraout_A0_01 + 0x334))();
      (**(code **)(*extraout_A0_01 + 0x70))((short)extraout_A0_01,uVar4,uVar6);
    }
    uVar6 = 0x65;
    (**(code **)(*piVar1 + 0x188))(uVar5,0x65);
    if (extraout_A0_02 != (int *)0x0) {
      uVar4 = (undefined2)((uint)extraout_A0_02 >> 0x10);
      (**(code **)(*extraout_A0_02 + 0x334))();
      (**(code **)(*extraout_A0_02 + 0x70))((short)extraout_A0_02,uVar4,uVar6);
    }
    (**(code **)(*piVar1 + 0x188))(uVar5,0x74);
    if (extraout_A0_03 != (int *)0x0) {
      (**(code **)(*extraout_A0_03 + 0x70))();
    }
    piVar3 = extraout_A0_03;
    for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
      (**(code **)(*piVar1 + 0x188))(uVar5,(char)sVar2 + '0');
      piVar3 = extraout_A0_04;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x70))();
    }
    (**(code **)(*piVar1 + 0x26c))();
    (**(code **)(*piVar1 + 0x268))();
  }
  else {
    func_0x00004a30((short)param_1,param_2,(short)param_3,param_4);
  }
  return;
}



// Function: FUN_000001f8 at 000001f8
// Size: 312 bytes

/* WARNING: Removing unreachable block (ram,0x000002f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001f8(void)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*_DAT_00027fb4 + 0x268))();
  (**(code **)(*_DAT_00027fbc + 0x268))();
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  func_0x000029e8();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    func_0x00001bf0(extraout_A0);
    (**(code **)(*extraout_A0 + 0x194))();
    (**(code **)(*extraout_A0 + 0x40c))();
    (**(code **)(*extraout_A0 + 0x3a0))();
    _DAT_00025f52 = local_10;
  }
  else {
    func_0x00001c10();
  }
  *(undefined2 *)(_DAT_0002884c + 0x158) = 1;
  FUN_00000330();
  return;
}



// Function: FUN_00000330 at 00000330
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000330(void)

{
  int iVar1;
  
  func_0x00003b60();
  *(undefined2 *)(_DAT_0002884c + 0x124) = 0;
  func_0x000048a0(1);
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar1 + 0x1d4) = 0;
  func_0x00003e20(iVar1,0x3ef);
  return;
}



// Function: FUN_0000037a at 0000037a
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000037a(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar1 + 0x1d4) = 0;
  func_0x00003e20(iVar1,0x3ef);
  return;
}



