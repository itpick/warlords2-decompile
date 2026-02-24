// Warlords II - Decompiled 68k Code
// Segment: CODE_043
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000036 at 00000036
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000036(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  }
  if (param_1 == _DAT_00028cce) {
    _DAT_00028cce = *(int *)(param_1 + 0xa4);
  }
  func_0x00002360(param_1 + 0x7c);
  func_0x00005168(param_1);
  return;
}



