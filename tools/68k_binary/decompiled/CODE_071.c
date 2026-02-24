// Warlords II - Decompiled 68k Code
// Segment: CODE_071
// Decompiled by Ghidra 12.0.3

// Function: FUN_000004f8 at 000004f8
// Size: 84 bytes

void FUN_000004f8(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_14 [16];
  
  *(short *)((int)param_1 + 0x8a) = param_2._0_2_ + *(short *)((int)param_1 + 0x8a);
  if (param_2._2_1_ != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
      (**(code **)(*param_1 + 0x244))(param_1,auStack_14);
    }
  }
  return;
}



// Function: FUN_0000054c at 0000054c
// Size: 192 bytes

void FUN_0000054c(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_1c [16];
  undefined1 auStack_c [2];
  short local_a;
  short local_6;
  
  if (param_2._0_2_ < *(short *)((int)param_1 + 0x8a)) {
    *(short *)((int)param_1 + 0x8a) = param_2._0_2_;
    if (param_2._2_1_ != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1d8))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x304))(param_1,auStack_1c);
        (**(code **)(*param_1 + 0x148))(param_1,auStack_1c,auStack_c);
        local_6 = (short)((*(int *)((int)param_1 + 0x36) * (int)*(short *)((int)param_1 + 0x8a)) /
                         (int)*(short *)(param_1 + 0x23)) + local_a;
        (**(code **)(*param_1 + 0x274))(param_1,auStack_c);
        (**(code **)(*param_1 + 0x268))();
      }
    }
  }
  else {
    FUN_000004f8(param_1);
  }
  return;
}



// Function: FUN_0000060c at 0000060c
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000060c(void)

{
  undefined4 uVar1;
  int extraout_A0;
  int iVar2;
  
  if (_DAT_00027fc4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*_DAT_00027fc4 + 0x188))((short)_DAT_00027fc4,0x666f);
    iVar2 = extraout_A0;
  }
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = func_0x00004780((short)iVar2);
  }
  return uVar1;
}



// Function: FUN_00000656 at 00000656
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000656(void)

{
  undefined4 uVar1;
  int extraout_A0;
  int iVar2;
  
  if (_DAT_00027fc4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*_DAT_00027fc4 + 0x188))((short)_DAT_00027fc4,0x666f);
    iVar2 = extraout_A0;
  }
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = func_0x00004788((short)iVar2);
  }
  return uVar1;
}



// Function: FUN_0000069a at 0000069a
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000069a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007d2 at 000007d2
// Size: 176 bytes

undefined4 FUN_000007d2(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  int *extraout_A0_00;
  undefined2 extraout_A0w;
  undefined1 auStack_10e [256];
  undefined1 auStack_e [10];
  
  (**(code **)(*param_1 + 0x188))(param_1,0x70726f67);
  if (extraout_A0 != 0) {
    FUN_0000054c(extraout_A0);
  }
  (**(code **)(*param_1 + 0x188))(param_1,0x73747235);
  uVar1 = 0;
  if (extraout_A0_00 != (int *)0x0) {
    func_0x000076d0(auStack_e,0x15536,(int)param_2._0_2_);
    func_0x00007320(auStack_10e,(short)auStack_e);
    (**(code **)(*extraout_A0_00 + 1000))(extraout_A0_00,extraout_A0w);
    (**(code **)(*extraout_A0_00 + 0x26c))();
    uVar1 = (**(code **)(*param_1 + 0x268))();
  }
  return uVar1;
}



