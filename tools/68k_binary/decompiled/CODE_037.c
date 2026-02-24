// Warlords II - Decompiled 68k Code
// Segment: CODE_037
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000f8 at 000000f8
// Size: 134 bytes

void FUN_000000f8(int *param_1)

{
  char cVar1;
  undefined1 auStack_c [8];
  
  cVar1 = func_0x00003970((int)param_1 + 0x5e);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x338))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1d8))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 800))(param_1,auStack_c);
        cVar1 = func_0x000072a0(auStack_c);
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x274))(param_1,auStack_c);
          (**(code **)(*param_1 + 0x268))();
        }
      }
    }
  }
  return;
}



