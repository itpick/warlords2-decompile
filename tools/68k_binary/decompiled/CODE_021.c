// Warlords II - Decompiled 68k Code
// Segment: CODE_021
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000042 at 00000042
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000042(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x3d4))();
  param_1[0x2a] = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000009e at 0000009e
// Size: 138 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000009e(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_2._0_2_ != -1) {
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00001c10((short)((uint)local_14 >> 0x10));
    if (param_3._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x26c))();
    }
  }
  return;
}



// Function: FUN_0000015e at 0000015e
// Size: 40 bytes

void FUN_0000015e(int *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 0xa6) = param_2._0_2_;
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000186 at 00000186
// Size: 48 bytes

void FUN_00000186(int *param_1,undefined4 param_2)

{
  FUN_00000042(param_1,param_2);
  (**(code **)(*param_1 + 0x3e4))();
  return;
}



// Function: FUN_000001b6 at 000001b6
// Size: 52 bytes

void FUN_000001b6(int *param_1)

{
  FUN_0000009e(param_1);
  (**(code **)(*param_1 + 0x3e4))();
  return;
}



// Function: FUN_000001ea at 000001ea
// Size: 140 bytes

void FUN_000001ea(int *param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 unaff_D3;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  uVar2 = (undefined2)((uint)unaff_D3 >> 0x10);
  (**(code **)(*param_1 + 0x39c))((short)param_1,(char)auStack_14);
  func_0x00003980(auStack_14,auStack_1c);
  sVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,auStack_1c);
  if (sVar1 == 0xc) {
    uVar2 = 0xff;
  }
  else if (sVar1 == 0x10) {
    uVar2 = 0;
  }
  else if (sVar1 == 0x20) {
    uVar2 = 0;
  }
  (**(code **)(*param_1 + 0x3dc))(param_1,uVar2);
  return;
}



// Function: FUN_00000276 at 00000276
// Size: 16 bytes

undefined1 FUN_00000276(int param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



