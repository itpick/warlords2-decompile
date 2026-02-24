// Warlords II - Decompiled 68k Code
// Segment: CODE_026
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000112 at 00000112
// Size: 32 bytes

void FUN_00000112(int param_1,undefined4 param_2)

{
  func_0x00001290(param_1,param_2);
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// Function: FUN_00000132 at 00000132
// Size: 84 bytes

void FUN_00000132(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x6a) == '\0') ||
     (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 == '\0')) {
    if (param_1[0x20] != 0) {
      (**(code **)(*(int *)param_1[0x20] + 0x164))();
      param_1[0x20] = 0;
    }
    func_0x000012d0(param_1,param_2);
  }
  return;
}



// Function: FUN_00000186 at 00000186
// Size: 90 bytes

void FUN_00000186(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x6a) == '\0') ||
     (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 == '\0')) {
    if (param_1[0x20] != 0) {
      (**(code **)(*(int *)param_1[0x20] + 0x164))();
      param_1[0x20] = 0;
    }
    func_0x000012d8(param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_000001e0 at 000001e0
// Size: 96 bytes

undefined4 FUN_000001e0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int local_8;
  
  uVar1 = 0x14;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc4))((short)param_3,(short)&local_8);
    func_0x00001c00();
    if (local_8 == 0x57324442) {
      uVar1 = 0x17;
    }
    else {
      if (local_8 != 0x57324444) {
        if (local_8 == 0x57324447) {
          return 0x14;
        }
        if ((local_8 != 0x5732444d) && (local_8 == 0x57324453)) {
          return 0x15;
        }
      }
      uVar1 = 0x16;
    }
  }
  return uVar1;
}



// Function: FUN_00000240 at 00000240
// Size: 316 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined1 local_96 [64];
  undefined4 local_56;
  undefined4 local_52;
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined2 *)(_DAT_0002884c + 0x2f8c) = 0;
  *(undefined2 *)(param_1 + 0x1cc) = 0xffff;
  func_0x00001458(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x166) = param_4._0_1_;
  *(undefined1 *)(param_1 + 0x167) = 1;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  local_4e = (int *)0x0;
  local_52 = 0;
  local_56 = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    local_96[0] = 0;
    func_0x000073b0(0xe);
    piVar2 = (int *)0x0;
    if (extraout_A0 != 0) {
      func_0x00001480(extraout_A0);
      piVar2 = extraout_A0_00;
    }
    local_4e = piVar2;
    func_0x00001488(piVar2,param_1,0);
    local_96[0] = 0;
    (**(code **)(*local_4e + 0x78))((short)local_4e,local_96);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00000e10(local_4e);
  func_0x00000e10(local_52);
  *(undefined4 *)(param_1 + 0x156) = 0;
  func_0x00000e10(local_56);
  *(undefined4 *)(param_1 + 0x15a) = 0;
  func_0x00001c10();
  return;
}



// Function: FUN_0000051c at 0000051c
// Size: 54 bytes

void FUN_0000051c(int param_1)

{
  func_0x00001400(param_1);
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    func_0x00003e58(param_1);
  }
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  return;
}



// Function: FUN_00000552 at 00000552
// Size: 122 bytes

void FUN_00000552(int *param_1)

{
  undefined4 *extraout_A0;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar1 = 0x56e;
    func_0x000073b0(0x32);
    if (extraout_A0 != (undefined4 *)0x0) {
      uVar1 = 0x584;
      func_0x00002428(extraout_A0);
      *extraout_A0 = 0x1ee88;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
    }
    func_0x00002430(extraout_A0,0x3f3,param_1,
                    CONCAT22((short)((uint)uVar1 >> 0x10),(ushort)(byte)uVar1) & 0xffffff,0);
    *(undefined4 *)((int)extraout_A0 + 0x2e) = 0x3f3;
    (**(code **)(*param_1 + 0x104))(param_1,extraout_A0);
  }
  return;
}



