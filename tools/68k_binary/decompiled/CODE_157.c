// Warlords II - Decompiled 68k Code
// Segment: CODE_157
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000014c at 0000014c
// Size: 38 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000014c(undefined4 param_1,undefined4 param_2)

{
  func_0x00007350(param_2,0xc6fd);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000001f0 at 000001f0
// Size: 74 bytes

undefined4 FUN_000001f0(short param_1,undefined4 param_2)

{
  char cVar2;
  undefined4 uVar1;
  
  cVar2 = FUN_0000014c(param_1 + 1000,param_2);
  if (cVar2 == '\0') {
    uVar1 = FUN_0000014c(param_1,param_2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



