// Warlords II - Decompiled 68k Code
// Segment: CODE_136
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 138 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(void)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    if ((*(short *)(sVar1 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(sVar1 * 2 + _DAT_0002884c + 0xd0) == 1)) {
      *(undefined2 *)(sVar1 * 2 + _DAT_0002884c + 0x138) = 0;
    }
  }
  *(undefined2 *)(_DAT_0002884c + 0x15c) = 1;
  func_0x00006e50();
  func_0x00003348();
  return;
}



// Function: FUN_00000096 at 00000096
// Size: 134 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000096(void)

{
  short sVar1;
  short sVar2;
  
  func_0x000029e8();
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    if (*(short *)(sVar1 * 2 + _DAT_0002884c + 0x138) != 0) {
      for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
        if ((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
           (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 0)) {
          *(undefined2 *)(sVar1 * 2 + _DAT_0002884c + 0x1132) =
               *(undefined2 *)(_DAT_0002884c + 0x110);
        }
      }
    }
  }
  return;
}



// Function: FUN_0000011c at 0000011c
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000011c(void)

{
  int iVar1;
  int *extraout_A0;
  int *piVar2;
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
  piVar2 = (int *)0x0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    piVar2 = extraout_A0;
    func_0x00001bf0(extraout_A0);
    (**(code **)(*piVar2 + 0x194))();
    *(undefined2 *)(_DAT_0002884c + 0x160) = 1;
    iVar1 = (**(code **)(*piVar2 + 0x40c))();
    (**(code **)(*piVar2 + 0x3a0))();
    if (iVar1 == 0x61636365) {
      FUN_0000000c();
    }
    else {
      func_0x00003350(iVar1,0);
    }
    _DAT_00025f52 = local_10;
  }
  else {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x3a0))();
    }
    func_0x00001c10();
  }
  return;
}



