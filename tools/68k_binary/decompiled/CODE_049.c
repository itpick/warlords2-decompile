// Warlords II - Decompiled 68k Code
// Segment: CODE_049
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 72 bytes

void FUN_00000044(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = (short)param_1;
  if (*(char *)(param_1 + 0x12) != '\0') {
    func_0x000046f8(sVar1,sVar1 + 0x13);
    *(undefined2 *)(param_1 + 0x92) = 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  FUN_00000118(sVar1,(short)param_2);
  return;
}



// Function: FUN_0000008c at 0000008c
// Size: 56 bytes

void FUN_0000008c(int param_1)

{
  short sVar1;
  
  sVar1 = (short)param_1;
  if (*(char *)(param_1 + 0x12) != '\0') {
    func_0x000046f8(sVar1,sVar1 + 0x13);
    *(undefined2 *)(param_1 + 0x92) = 0;
  }
  func_0x00000110(sVar1);
  return;
}



// Function: FUN_000000c4 at 000000c4
// Size: 60 bytes

void FUN_000000c4(int param_1,undefined2 param_2)

{
  short sVar1;
  
  sVar1 = (short)param_1;
  if (*(char *)(param_1 + 0x12) != '\0') {
    func_0x000046f8(sVar1,sVar1 + 0x13);
    *(undefined2 *)(param_1 + 0x92) = 0;
  }
  FUN_00000120(sVar1,param_2);
  return;
}



// Function: FUN_00000100 at 00000100
// Size: 8 bytes

void FUN_00000100(undefined4 param_1)

{
  FUN_00000178(param_1);
  FUN_00000108(param_1);
  return;
}



// Function: FUN_00000108 at 00000108
// Size: 15 bytes

void FUN_00000108(void)

{
  int unaff_A6;
  
  FUN_00000178();
  FUN_00000108(*(undefined4 *)(unaff_A6 + 8));
  return;
}



// Function: FUN_00000118 at 00000118
// Size: 4 bytes

void FUN_00000118(void)

{
  return;
}



// Function: FUN_0000011c at 0000011c
// Size: 4 bytes

void FUN_0000011c(undefined4 param_1,undefined4 param_2)

{
  FUN_00000178(param_1);
  FUN_00000118(param_1,param_2);
  return;
}



// Function: FUN_00000120 at 00000120
// Size: 28 bytes

void FUN_00000120(void)

{
  int unaff_A6;
  
  FUN_00000178(*(undefined4 *)(unaff_A6 + 8));
  FUN_00000118(*(undefined4 *)(unaff_A6 + 8),*(undefined4 *)(unaff_A6 + 0xc));
  return;
}



// Function: FUN_0000013c at 0000013c
// Size: 28 bytes

void FUN_0000013c(undefined4 param_1)

{
  FUN_00000178(param_1);
  func_0x00000110(param_1);
  return;
}



// Function: FUN_00000158 at 00000158
// Size: 32 bytes

void FUN_00000158(undefined4 param_1,undefined4 param_2)

{
  FUN_00000178(param_1);
  FUN_00000120(param_1,param_2);
  return;
}



// Function: FUN_00000178 at 00000178
// Size: 106 bytes

void FUN_00000178(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar1 = FUN_00000108(param_1);
    FUN_00000118(param_1,iVar1 - (0x800 - *(short *)(param_1 + 0x814)));
    *(undefined2 *)(param_1 + 0x814) = 0x800;
  }
  else {
    if (*(short *)(param_1 + 0x814) != 0) {
      func_0x00004280(param_1,param_1 + 0x13,(int)*(short *)(param_1 + 0x814));
    }
    *(undefined2 *)(param_1 + 0x814) = 0;
  }
  return;
}



