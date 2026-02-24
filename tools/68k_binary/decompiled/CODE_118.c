// Warlords II - Decompiled 68k Code
// Segment: CODE_118
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000000c(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short local_8;
  short local_6;
  
  sVar1 = func_0x000032b0(param_1._2_2_);
  if ((int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) <
      *(char *)((int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15ea) + 0x1e) {
    local_8 = 1;
    local_6 = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar2 = &local_8;
    }
    else {
      psVar2 = &local_6;
    }
    if (5 < *psVar2) {
      return 0;
    }
  }
  *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f0) = (char)param_1;
  iVar3 = param_1._0_2_ * 0x42 + _DAT_0002884c;
  *(undefined1 *)(iVar3 + 0x15f1) = *(undefined1 *)(sVar1 + iVar3 + 0x15de);
  if (param_2._0_2_ == 0) {
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f6) = 0;
  }
  else {
    FUN_000000ec(param_2._2_2_);
  }
  func_0x00007450();
  return 1;
}



// Function: FUN_000000ec at 000000ec
// Size: 186 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000ec(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = func_0x00002dd8();
  if (sVar1 == 0) {
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f6) = 0;
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f8) = 0xffff;
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15fa) = 0xffff;
    func_0x00007450();
  }
  else {
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f8) =
         *(undefined2 *)(param_1._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15fa) =
         *(undefined2 *)(param_1._2_2_ * 0x42 + _DAT_0002884c + 0x15c6);
    *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f6) = 1;
    func_0x00007450();
  }
  return;
}



// Function: FUN_000001a6 at 000001a6
// Size: 422 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000001a6(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  short local_14 [3];
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_c = 0;
  sVar3 = -1;
  sVar2 = 4;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    iVar4 = (int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c;
    local_6 = (short)*(char *)(iVar4 + 0x15da);
    sVar2 = sVar1;
    if (-1 < local_6) {
      local_14[0] = (short)*(char *)(iVar4 + 0x15de);
      if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xf0) == 0) {
        local_14[2] = 0;
      }
      else {
        local_14[2] = 2;
      }
      local_14[2] = local_14[2] + *(char *)(iVar4 + 0x15e2);
      local_e = 9;
      if (local_14[2] < 10) {
        psVar5 = local_14 + 2;
      }
      else {
        psVar5 = &local_e;
      }
      local_8 = *psVar5;
      if (*(char *)(_DAT_00028864 + 5 + local_6 * 6) == '\x01') {
        local_8 = local_8 + 2;
      }
      if ((param_1._2_2_ != 6) && (local_8 < 3)) {
        local_14[0] = local_14[0] + 1;
      }
      local_14[1] = 10;
      if (local_14[0] < 0xb) {
        psVar5 = local_14;
      }
      else {
        psVar5 = local_14 + 1;
      }
      if (((*(char *)(_DAT_00028864 + local_6 * 6) != '\0') || (param_1._2_2_ != 4)) &&
         (local_a = local_8 * *(short *)(param_1._2_2_ * 2 + 0x15e90) +
                    *(short *)(param_1._2_2_ * 2 + 0x15e9e) * (10 - *psVar5) +
                    (short)(((int)(short)*(char *)((int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c
                                                  + 0x15e6) *
                            (int)*(short *)(param_1._2_2_ * 2 + 0x15e82)) / 2), local_c < local_a))
      {
        sVar3 = local_6;
        local_c = local_a;
      }
    }
  }
  if (param_2._2_2_ == 0) {
    if (sVar3 == -1) {
      sVar3 = 0;
    }
    else {
      if (param_2._0_2_ == -1) {
        FUN_0000000c(sVar3,0);
      }
      else {
        FUN_0000000c(sVar3,CONCAT22(1,param_2._0_2_));
      }
      sVar3 = 1;
    }
  }
  return sVar3;
}



