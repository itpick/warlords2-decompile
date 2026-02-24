// Warlords II - Decompiled 68k Code
// Segment: CODE_151
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000096 at 00000096
// Size: 320 bytes

undefined1 FUN_00000096(int *param_1,undefined4 param_2,int *param_3)

{
  undefined1 auVar1 [4];
  int *piVar2;
  short sVar3;
  short sVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  undefined1 local_ee [4];
  undefined4 local_ea;
  undefined1 *local_e6;
  undefined1 auStack_d2 [4];
  undefined1 auStack_ce [4];
  undefined1 auStack_ca [4];
  undefined1 auStack_c6 [4];
  undefined1 auStack_c2 [2];
  undefined4 local_c0;
  undefined1 auStack_bc [4];
  undefined1 local_b8 [64];
  int *local_78;
  code *local_74;
  undefined4 auStack_70 [4];
  undefined1 *local_5e;
  
  local_e6 = auStack_bc;
  local_ea._0_2_ = 0;
  local_ea._2_2_ = 0xac;
  func_0x00007208();
  local_c0 = 0;
  uVar6 = 0;
  local_b8[0] = 0;
  local_ea = &local_c0;
  local_ee = (undefined1  [4])auStack_ce;
  (**(code **)(*param_1 + 0x1d0))
            (param_1,param_2,&local_74,&local_78,auStack_c2,auStack_bc,auStack_c6,(short)auStack_ca,
             (char)auStack_d2);
  (**(code **)(*param_3 + 0xd0))(param_3,local_b8);
  piVar2 = local_78;
  func_0x000075d0();
  auVar1 = local_ee;
  sVar3 = (short)((uint)piVar2 >> 2);
  ppuVar5 = &local_e6;
  local_ee._2_2_ = SUB42(param_3,0);
  local_ee._0_2_ = (undefined2)((uint)param_3 >> 0x10);
  if (sVar3 == 0) {
    if (local_74 == (code *)0x0) {
      uVar6 = 1;
    }
    else {
      local_ea = auStack_70;
      sVar3 = (**(code **)(*param_3 + 0xa4))();
      auVar1 = (undefined1  [4])CONCAT22(local_ee._0_2_,local_ee._2_2_);
      ppuVar5 = &local_e6;
      if (sVar3 == 0) {
        local_5e = local_b8;
        unique0x00012700 = auStack_70;
        local_ee._0_2_ = 0;
        (*local_74)();
        auVar1 = (undefined1  [4])CONCAT22(local_ee._0_2_,local_ee._2_2_);
        ppuVar5 = (undefined1 **)local_ee;
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
  }
  else {
    for (sVar4 = 0; sVar4 < sVar3; sVar4 = sVar4 + 1) {
      if (*(int *)((int)param_3 + 0x4e) == *(int *)(*local_78 + sVar4 * 4)) {
        if (local_74 == (code *)0x0) {
          uVar6 = 1;
        }
        else {
          local_ea = auStack_70;
          sVar3 = (**(code **)(*param_3 + 0xa4))();
          auVar1 = (undefined1  [4])CONCAT22(local_ee._0_2_,local_ee._2_2_);
          ppuVar5 = &local_e6;
          if (sVar3 == 0) {
            local_5e = local_b8;
            unique0x00012700 = auStack_70;
            local_ee._0_2_ = 0;
            (*local_74)();
            auVar1 = (undefined1  [4])CONCAT22(local_ee._0_2_,local_ee._2_2_);
            ppuVar5 = (undefined1 **)local_ee;
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
        }
        break;
      }
    }
  }
  local_ee = auVar1;
  ppuVar5[-1] = (undefined1 *)local_78;
  ppuVar5[-2] = (undefined1 *)0x1c6;
  func_0x00001d08();
  return uVar6;
}



// Function: FUN_000001d6 at 000001d6
// Size: 8 bytes

void FUN_000001d6(void)

{
  return;
}



// Function: FUN_000001de at 000001de
// Size: 8 bytes

void FUN_000001de(void)

{
  return;
}



