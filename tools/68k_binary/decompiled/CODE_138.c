// Warlords II - Decompiled 68k Code
// Segment: CODE_138
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000158 at 00000158
// Size: 186 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000158(undefined1 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte local_104 [256];
  
  func_0x00007320((short)local_104,param_2);
  if (local_104[(short)(local_104[0] - 3)] == 0x2e) {
    local_104[0] = local_104[0] - 4;
  }
  uVar1 = func_0x00007300((short)local_104,0x5504);
  uVar3 = 1;
  pbVar2 = local_104;
  func_0x00007318((short)pbVar2,uVar1);
  uVar1 = func_0x00007300((char)local_104,0x5504,(short)((uint)pbVar2 >> 0x10),uVar3);
  uVar3 = 1;
  func_0x00007318((short)local_104,uVar1);
  DAT_00000a5e = 0;
  func_0x00007310((short)local_104,param_1,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000342 at 00000342
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000342(void)

{
  DAT_00000a5e = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000496 at 00000496
// Size: 194 bytes

void FUN_00000496(int *param_1,undefined4 param_2)

{
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar1;
  int extraout_A0_01;
  int *extraout_A0_02;
  
  (**(code **)(*param_1 + 0x90))();
  func_0x00001c00();
  if (param_2._2_1_ == '\0') {
    func_0x000073b0(0x16);
    piVar1 = (int *)0x0;
    if (extraout_A0_01 != 0) {
      func_0x000071f8((char)extraout_A0_01);
      piVar1 = extraout_A0_02;
    }
    func_0x00003118((short)piVar1,(char)param_1);
  }
  else {
    func_0x000073b0(0x9e);
    piVar1 = (int *)0x0;
    if (extraout_A0 != 0) {
      func_0x000070f0((short)extraout_A0);
      piVar1 = extraout_A0_00;
    }
    func_0x00003118((short)piVar1,(char)param_1);
  }
  (**(code **)(*piVar1 + 0x5c))((short)piVar1,0);
  return;
}



// Function: FUN_00000558 at 00000558
// Size: 118 bytes

undefined4 FUN_00000558(int *param_1,undefined4 param_2)

{
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar1;
  undefined2 extraout_A0w;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x60))();
    (**(code **)(*param_1 + 0x5c))((short)param_1,uVar2);
    if (param_2._0_1_ != '\0') {
      func_0x000030f8();
      cVar3 = func_0x00000de0((short)param_1,extraout_A0w);
      if (cVar3 != '\0') {
        (**(code **)(**(int **)((int)param_1 + 0xe) + 0x70))();
        func_0x00001c00();
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x4c))();
  }
  return uVar1;
}



// Function: FUN_000005ce at 000005ce
// Size: 40 bytes

void FUN_000005ce(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x74))(param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_000005f6 at 000005f6
// Size: 150 bytes

short FUN_000005f6(int *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  char local_5;
  
  bVar1 = false;
  sVar3 = 0;
  while (!bVar1) {
    cVar2 = (**(code **)(*param_1 + 0x70))();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x74))(param_1,&local_5,1);
      if (local_5 == '\r') {
        *param_2 = '\0';
        bVar1 = true;
        (**(code **)(*param_1 + 0x74))(param_1,&local_5,1);
      }
      else if ((int)sVar3 < (int)((param_3 >> 0x10) - 1)) {
        *param_2 = local_5;
        sVar3 = sVar3 + 1;
        param_2 = param_2 + 1;
      }
    }
    else {
      *param_2 = '\0';
      if (sVar3 == 0) {
        sVar3 = -1;
      }
      bVar1 = true;
    }
  }
  return sVar3;
}



// Function: FUN_0000068c at 0000068c
// Size: 40 bytes

void FUN_0000068c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xbc))(param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_000006b4 at 000006b4
// Size: 34 bytes

void FUN_000006b4(int *param_1,undefined4 param_2)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  }
  return;
}



// Function: FUN_000006d6 at 000006d6
// Size: 182 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000006d6(undefined1 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte local_104 [256];
  
  func_0x00007320((short)local_104,param_2);
  if (local_104[(short)(local_104[0] - 3)] == 0x2e) {
    local_104[0] = local_104[0] - 4;
  }
  uVar1 = func_0x00007300((short)local_104,0x5282);
  uVar3 = 1;
  pbVar2 = local_104;
  func_0x00007318((short)pbVar2,uVar1);
  uVar1 = func_0x00007300((char)local_104,0x5282,(short)((uint)pbVar2 >> 0x10),uVar3);
  uVar3 = 1;
  func_0x00007318((short)local_104,uVar1);
  DAT_00000a5e = 0;
  func_0x00007310((short)local_104,param_1,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



