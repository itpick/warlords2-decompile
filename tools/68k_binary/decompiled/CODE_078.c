// Warlords II - Decompiled 68k Code
// Segment: CODE_078
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000b2 at 000000b2
// Size: 376 bytes

void FUN_000000b2(int param_1)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 local_11c;
  short local_11a;
  undefined2 local_118;
  undefined2 local_116;
  char acStack_114 [256];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *(undefined2 *)(param_1 + 0xb6);
  local_6 = *(undefined2 *)(param_1 + 0xb4);
  local_118 = 0;
  local_116 = 0;
  local_c = 0;
  local_a = 0;
  func_0x00002378((short)(param_1 + 0xa4),(short)&local_c,(short)&local_118,0);
  if (*(char *)(param_1 + 0x81) == '\0') {
    if (*(short *)(param_1 + 0xe0) == -1) {
      sVar2 = (*(short *)(param_1 + 0xe4) + -1) * 0x10 + 0x5b;
    }
    else {
      sVar2 = (short)(((*(short *)(param_1 + 0xe4) + -1) * 0x10 *
                      ((int)*(short *)(param_1 + 0xe0) - (int)*(short *)(param_1 + 0xdc))) /
                     ((int)*(short *)(param_1 + 0xde) - (int)*(short *)(param_1 + 0xdc))) + 0x28;
    }
    func_0x00002370((short)(param_1 + 0xc0));
    local_10 = *(undefined2 *)(param_1 + 0xd2);
    local_e = *(undefined2 *)(param_1 + 0xd0);
    local_11c = 0xc;
    local_14 = 0;
    local_12 = 0;
    local_11a = sVar2;
    func_0x00002378((short)(param_1 + 0xc0),(short)&local_14,(short)&local_11c,0x24);
  }
  if (*(char *)(param_1 + 0xe7) == '\0') {
    if (*(short *)(param_1 + 0xe0) == -1) {
      pcVar3 = acStack_114;
      pcVar4 = &DAT_000179f2;
      do {
        cVar1 = *pcVar4;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    else if (*(short *)(param_1 + 0xde) < 100) {
      func_0x000076d0((short)acStack_114,0x79e5,(char)*(undefined2 *)(param_1 + 0xe0));
    }
    else {
      func_0x000076d0((short)acStack_114,0x79ec,(char)*(undefined2 *)(param_1 + 0xe0));
    }
    func_0x00002a60(0xe,(short)acStack_114);
  }
  return;
}



// Function: FUN_0000022a at 0000022a
// Size: 32 bytes

void FUN_0000022a(undefined4 param_1,undefined4 param_2)

{
  func_0x000015b8(param_1,param_2);
  FUN_0000024a(param_1);
  return;
}



// Function: FUN_0000024a at 0000024a
// Size: 178 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000024a(int param_1)

{
  short local_44;
  short local_42;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  func_0x000038a0(param_1 + 0x32,&local_44);
  local_c = _DAT_00025b56;
  local_a = _DAT_00025b58;
  local_8 = local_44;
  local_6 = local_42;
  local_44 = local_44 - _DAT_00025b56;
  *(short *)(param_1 + 0xb4) = local_42 - _DAT_00025b58;
  *(short *)(param_1 + 0xb6) = local_44;
  func_0x00002360(param_1 + 0xa4);
  func_0x00002380(0x14108,*(short *)(param_1 + 0x2c) + -7,*(undefined2 *)(param_1 + 0x34),
                  param_1 + 0xa4,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000520 at 00000520
// Size: 48 bytes

void FUN_00000520(int param_1)

{
  func_0x00002360(param_1 + 0xa4);
  func_0x00002360(param_1 + 0xc0);
  func_0x00005168(param_1);
  return;
}



// Function: FUN_00000550 at 00000550
// Size: 46 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00005768(param_3._0_2_ * 6 + 0x29052);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000638 at 00000638
// Size: 196 bytes

void FUN_00000638(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  
  if (param_4._6_1_ != '\0') {
    sVar1 = *(short *)(param_1 + 0x37) +
            (short)(((int)*(short *)((int)param_1 + 0xe2) / 2 +
                    (int)((short)((*(short *)(param_4._2_4_ + 6) + -0x2d) *
                                 (*(short *)((int)param_1 + 0xde) - *(short *)(param_1 + 0x37))) /
                         (short)((*(short *)(param_1 + 0x39) + -1) * 0x10))) /
                   (int)*(short *)((int)param_1 + 0xe2)) * *(short *)((int)param_1 + 0xe2);
    if (sVar1 < *(short *)(param_1 + 0x37)) {
      sVar1 = *(short *)(param_1 + 0x37);
    }
    else if (*(short *)((int)param_1 + 0xde) < sVar1) {
      if ((*(char *)((int)param_1 + 0xe6) == '\0') ||
         (*(short *)(param_4._2_4_ + 6) < (short)((*(short *)(param_1 + 0x39) + -1) * 0x10 + 0x46)))
      {
        sVar1 = *(short *)((int)param_1 + 0xde);
      }
      else {
        sVar1 = -1;
      }
    }
    if (sVar1 != *(short *)(param_1 + 0x38)) {
      *(short *)(param_1 + 0x38) = sVar1;
      (**(code **)(*param_1 + 0x248))();
    }
  }
  return;
}



