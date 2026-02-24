// Warlords II - Decompiled 68k Code
// Segment: CODE_027
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000e2 at 000000e2
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000e2(undefined4 param_1)

{
  func_0x00002a00();
  FUN_00000154(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000154 at 00000154
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000154(int param_1)

{
  if (*(char *)(param_1 + 0x1a6) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000192 at 00000192
// Size: 18 bytes

void FUN_00000192(void)

{
  func_0x00002a18();
  return;
}



