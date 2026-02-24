// Warlords II - Decompiled 68k Code
// Segment: CODE_022
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 44 bytes

void FUN_0000000c(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  func_0x00004398(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0xb4) = uVar1;
  return;
}



// Function: FUN_00000038 at 00000038
// Size: 44 bytes

void FUN_00000038(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_0000000c(param_1,param_2);
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  return;
}



// Function: FUN_00000064 at 00000064
// Size: 114 bytes

void FUN_00000064(int param_1,int *param_2)

{
  undefined1 uVar2;
  undefined2 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000031a8(param_1,param_2);
  uVar2 = (**(code **)(*param_2 + 0x84))();
  *(undefined1 *)(param_1 + 0x7c) = uVar2;
  (**(code **)(*param_2 + 0x94))(param_2,&local_c);
  *(undefined4 *)(param_1 + 0x7e) = local_c;
  *(undefined4 *)(param_1 + 0x82) = local_8;
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x86) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x88) = uVar1;
  return;
}



