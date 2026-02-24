// Warlords II - Decompiled 68k Code
// Segment: CODE_167
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000018a at 0000018a
// Size: 216 bytes

short FUN_0000018a(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int local_10;
  int local_c;
  short local_8;
  short sStack_6;
  
  sVar2 = 0;
  sVar3 = 0;
  if (((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x10))) && (0 < *(short *)(param_1 + 0x14)))
  {
    if (*(short *)(param_1 + 0x14) == 1) {
      if (0 < *(short *)(**(int **)(param_1 + 0x16) + 2)) {
        local_10 = (int)*(short *)(param_1 + 0xe);
        local_c = param_2 / (int)*(short *)(**(int **)(param_1 + 0x16) + 2) + 1;
        if (local_c < *(short *)(param_1 + 0xe)) {
          piVar4 = &local_c;
        }
        else {
          piVar4 = &local_10;
        }
        sVar3 = (short)*piVar4;
      }
    }
    else if (param_2 == 0) {
      sVar3 = 1;
    }
    else {
      param_2 = param_2 + 1;
      sVar3 = 0;
      for (; (int)sVar2 <= *(short *)(param_1 + 0x14) + -1; sVar2 = sVar2 + 1) {
        uVar1 = *(undefined4 *)(**(int **)(param_1 + 0x16) + sVar2 * 4);
        sStack_6 = (short)uVar1;
        local_8 = (short)((uint)uVar1 >> 0x10);
        param_2 = param_2 - (int)sStack_6 * (int)local_8;
        sVar3 = local_8 + sVar3;
        if (param_2 < 1) {
          return (short)(param_2 / (int)sStack_6) + sVar3;
        }
      }
      sVar3 = *(short *)(param_1 + 0xe);
    }
  }
  return sVar3;
}



// Function: FUN_00000262 at 00000262
// Size: 90 bytes

undefined2 FUN_00000262(int *param_1)

{
  char cVar2;
  undefined2 uVar1;
  short local_6;
  
  if (*(short *)(param_1 + 5) == 1) {
    uVar1 = *(undefined2 *)(**(int **)((int)param_1 + 0x16) + 2);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x60))();
    if (cVar2 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined2 *)(**(int **)((int)param_1 + 0x16) + 2 + local_6 * 4);
    }
  }
  return uVar1;
}



// Function: FUN_000002bc at 000002bc
// Size: 410 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000002bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_14 [4];
  short local_10;
  short local_6;
  
  if (((*(short *)((int)param_1 + 0xe) < param_2._0_2_) && (0 < *(short *)(param_1 + 5))) &&
     (param_3._0_2_ ==
      *(short *)(**(int **)((int)param_1 + 0x16) + 2 + (*(short *)(param_1 + 5) + -1) * 4))) {
    psVar1 = (short *)(**(int **)((int)param_1 + 0x16) + (*(short *)(param_1 + 5) + -1) * 4);
    *psVar1 = param_2._2_2_ + *psVar1;
  }
  else {
    puVar4 = auStack_14;
    cVar2 = (**(code **)(*param_1 + 0x60))();
    if ((cVar2 == '\0') ||
       (param_3._0_2_ != *(short *)(**(int **)((int)param_1 + 0x16) + 2 + local_6 * 4))) {
      if ((local_6 < 1) ||
         ((local_10 != 1 ||
          (iVar3 = (local_6 + -1) * 4,
          param_3._0_2_ != *(short *)(**(int **)((int)param_1 + 0x16) + 2 + iVar3))))) {
        func_0x000075d0(*(undefined4 *)((int)param_1 + 0x16),puVar4);
        if ((1 < local_10) && (param_2._0_2_ <= *(short *)((int)param_1 + 0xe))) {
          *(short *)(**(int **)((int)param_1 + 0x16) + local_6 * 4) = local_10 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      psVar1 = (short *)(**(int **)((int)param_1 + 0x16) + iVar3);
      *psVar1 = param_2._2_2_ + *psVar1;
    }
    else {
      psVar1 = (short *)(**(int **)((int)param_1 + 0x16) + local_6 * 4);
      *psVar1 = param_2._2_2_ + *psVar1;
    }
  }
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(short *)((int)param_1 + 0xe) = param_2._2_2_ + *(short *)((int)param_1 + 0xe);
  param_1[4] = (int)param_2._2_2_ * (int)param_3._0_2_ + param_1[4];
  return;
}



// Function: FUN_00000498 at 00000498
// Size: 260 bytes

int FUN_00000498(int *param_1,undefined4 param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int local_c;
  short local_8;
  short local_6;
  
  iVar3 = 0;
  if (*(short *)(param_1 + 5) == 1) {
    iVar3 = (int)param_2._2_2_ * (int)*(short *)(**(int **)((int)param_1 + 0x16) + 2);
  }
  else if (param_2._0_2_ == 1) {
    cVar2 = (**(code **)(*param_1 + 0x60))();
    if (cVar2 != '\0') {
      iVar3 = local_c + (int)local_8 *
                        (int)*(short *)(**(int **)((int)param_1 + 0x16) + 2 + local_6 * 4);
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x60))();
    if (cVar2 != '\0') {
      sVar1 = *(short *)(**(int **)((int)param_1 + 0x16) + 2 + local_6 * 4);
      cVar2 = (**(code **)(*param_1 + 0x60))();
      if (cVar2 != '\0') {
        iVar3 = (int)local_8 * (int)*(short *)(**(int **)((int)param_1 + 0x16) + 2 + local_6 * 4) -
                (int)sVar1 * (local_8 + -1);
      }
    }
  }
  return iVar3;
}



// Function: FUN_0000059c at 0000059c
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000059c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000604 at 00000604
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000604(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000670 at 00000670
// Size: 112 bytes

void FUN_00000670(int param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  undefined4 *extraout_A0_00;
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00004bc0(param_1,param_2);
  local_c = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10);
  local_8 = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10);
  puVar3 = &local_c;
  puVar2 = &local_14;
  func_0x00003918((short)param_2);
  uVar1 = (undefined2)((uint)extraout_A0 >> 0x10);
  func_0x000038b8((char)extraout_A0,puVar2,puVar3);
  func_0x00003918((short)param_2,uVar1);
  *extraout_A0_00 = local_14;
  extraout_A0_00[1] = local_10;
  return;
}



// Function: FUN_000006e0 at 000006e0
// Size: 62 bytes

undefined4 FUN_000006e0(int param_1,short *param_2)

{
  undefined4 uVar1;
  
  if ((((param_2[1] < 1) || (*param_2 < 1)) || (*(short *)(param_1 + 0x7e) < param_2[1])) ||
     (*(short *)(param_1 + 0x7c) < *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_0000071e at 0000071e
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000071e(int param_1,short *param_2,int *param_3)

{
  short sVar2;
  int iVar1;
  
  if ((((param_2[1] < 1) || (*param_2 < 1)) || (*(short *)(param_1 + 0x7e) < param_2[1])) ||
     (*(short *)(param_1 + 0x7c) < *param_2)) {
    *param_3 = _DAT_00025b62;
    param_3[1] = _DAT_00025b66;
    param_3[2] = _DAT_00025b6a;
    param_3[3] = _DAT_00025b6e;
  }
  else {
    sVar2 = (**(code **)(**(int **)(param_1 + 0x80) + 0x68))();
    if (*(short *)(*(int *)(param_1 + 0x80) + 0x14) == 1) {
      param_3[1] = (param_2[1] + -1) * (int)sVar2;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x80) + 0x6c))
                        ((short)*(int **)(param_1 + 0x80),param_2[1] + -1);
      param_3[1] = iVar1;
    }
    param_3[3] = param_3[1] + (int)sVar2;
    sVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x68))();
    if (*(short *)(*(int *)(param_1 + 0x84) + 0x14) == 1) {
      *param_3 = (*param_2 + -1) * (int)sVar2;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0x6c))
                        ((short)*(int **)(param_1 + 0x84),*param_2 + -1);
      *param_3 = iVar1;
    }
    param_3[2] = *param_3 + (int)sVar2;
  }
  return;
}



// Function: FUN_0000082e at 0000082e
// Size: 238 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000082e(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  short sVar3;
  int iVar2;
  int iVar4;
  
  if (((param_2._0_2_ < 1) || (param_2._2_2_ < 1)) ||
     ((int)*(short *)((int)param_1 + 0x7e) < (int)param_2._2_2_ + (int)param_2._0_2_ + -1)) {
    *param_3 = _DAT_00025b62;
    param_3[1] = _DAT_00025b66;
    param_3[2] = _DAT_00025b6a;
    param_3[3] = _DAT_00025b6e;
  }
  else {
    if (*(short *)(param_1[0x20] + 0x14) == 1) {
      sVar3 = (**(code **)(*param_1 + 0x3e0))();
      iVar4 = (int)sVar3 * (param_2._0_2_ + -1);
      iVar2 = (int)param_2._2_2_ * (int)sVar3;
    }
    else {
      iVar4 = (**(code **)(*(int *)param_1[0x20] + 0x6c))
                        ((short)(int *)param_1[0x20],param_2._0_2_ + -1);
      iVar2 = (**(code **)(*(int *)param_1[0x20] + 0x6c))((int *)param_1[0x20],param_2._2_2_);
    }
    uVar1 = *(undefined4 *)(param_1[0x21] + 0x10);
    *param_3 = 0;
    param_3[1] = iVar4;
    param_3[2] = uVar1;
    param_3[3] = iVar2 + iVar4;
  }
  return;
}



// Function: FUN_00000b0a at 00000b0a
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b0a(void)

{
  undefined1 auStack_22 [30];
  
  func_0x00007208(auStack_22);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000ed4 at 00000ed4
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000ed4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000f0c at 00000f0c
// Size: 114 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_4e [74];
  
  if ((param_3._0_1_ != param_3._2_1_) && (cVar2 = (**(code **)(*param_1 + 0x1d8))(), cVar2 != '\0')
     ) {
    (**(code **)(*param_1 + 0x3c0))(param_1,param_2,_DAT_00025de6);
    iVar1 = (int)param_3._2_1_ + (int)param_3._0_1_;
    if (iVar1 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar1 == 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar1 == 6) {
      func_0x00001c90(auStack_4e);
      return;
    }
  }
  return;
}



// Function: FUN_00000fe6 at 00000fe6
// Size: 208 bytes

void FUN_00000fe6(int *param_1,int param_2)

{
  char cVar1;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 auStack_2a [34];
  undefined2 local_8;
  undefined2 local_6;
  
  if (param_2 == 0x6e) {
    FUN_00002548((char)auStack_2a,param_1);
    FUN_00002550((short)auStack_2a,(short)&local_36);
    local_8 = local_36;
    local_6 = local_34;
    while (cVar1 = FUN_00002560(auStack_2a), cVar1 != '\0') {
      local_2e = local_8;
      local_2c = local_6;
      cVar1 = (**(code **)(*param_1 + 0x3a4))((char)param_1,&local_2e);
      if (cVar1 != '\0') {
        local_32 = local_8;
        local_30 = local_6;
        (**(code **)(*param_1 + 0x420))((short)param_1,(short)&local_32);
      }
      FUN_00002558((char)auStack_2a,&local_8);
    }
  }
  else {
    func_0x00005c18((char)param_1,param_2);
  }
  return;
}



// Function: FUN_000010b6 at 000010b6
// Size: 200 bytes

void FUN_000010b6(int *param_1,undefined2 param_2,int *param_3)

{
  char cVar1;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x00007208((char)&local_8);
  cVar1 = (**(code **)(*param_1 + 1000))(param_1,param_2,(short)&local_8);
  if (cVar1 != '\0') {
    local_c = local_8;
    local_a = local_6;
    cVar1 = (**(code **)(*param_1 + 0x3a4))((short)param_1,(char)&local_c);
    if (cVar1 != '\0') {
      func_0x000073b0(0x9a);
      uVar2 = 0;
      if (extraout_A0 != 0) {
        func_0x00005cb8((char)extraout_A0);
        uVar2 = extraout_A0_00;
      }
      (**(code **)(*param_3 + 0x78))();
      (**(code **)(*param_3 + 0x7c))();
      func_0x00005cc0(uVar2,(short)param_1,param_2);
      (**(code **)(*param_1 + 0x108))(param_1,uVar2);
    }
  }
  return;
}



// Function: FUN_0000117e at 0000117e
// Size: 852 bytes

void FUN_0000117e(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined1 extraout_A0b;
  int *piVar7;
  undefined1 extraout_A0b_00;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  bool bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int local_80 [3];
  int local_74;
  undefined2 local_70;
  undefined2 local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  undefined2 local_64;
  undefined2 local_62;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  short local_2c;
  short local_2a;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  func_0x00007208((char)&local_18);
  func_0x00007208((short)&local_2c);
  local_3c = *param_2;
  local_38 = param_2[1];
  local_34 = param_2[2];
  local_30 = param_2[3];
  func_0x00007208((short)&local_40);
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = param_2[2];
  local_1c = param_2[3];
  uVar10 = SUB42(param_1,0);
  if ((0 < *(short *)(param_1 + 0x1f)) && (0 < *(short *)((int)param_1 + 0x7e))) {
    func_0x00003918((short)&local_3c);
    (**(code **)(*param_1 + 0x438))(uVar10,(short)&local_18,extraout_A0b);
    if (*(char *)((int)param_1 + 0x89) != '\0') {
      local_80[2] = local_18._2_2_ + -1;
      local_74 = 1;
      if (local_18._2_2_ + -1 < 1) {
        piVar7 = &local_74;
      }
      else {
        piVar7 = local_80 + 2;
      }
      local_18 = CONCAT22(local_18._0_2_,(short)*piVar7);
    }
    if (*(char *)(param_1 + 0x22) != '\0') {
      local_80[0] = local_18._0_2_ + -1;
      local_80[1] = 1;
      if (local_18._0_2_ + -1 < 1) {
        piVar7 = local_80 + 1;
      }
      else {
        piVar7 = local_80;
      }
      local_18 = CONCAT22((short)*piVar7,local_18._2_2_);
    }
    func_0x00003918((short)&local_3c);
    (**(code **)(*param_1 + 0x438))(uVar10,(short)&local_2c,extraout_A0b_00);
    local_64 = local_18._0_2_;
    local_62 = local_18._2_2_;
    (**(code **)(*param_1 + 0x3b4))(param_1,&local_64,(short)&local_14);
    local_68 = local_2c;
    local_66 = local_2a;
    uVar9 = 0xce;
    (**(code **)(*param_1 + 0x3b4))(param_1,&local_68,&iStack_50);
    piVar7 = &local_14;
    func_0x00003918((short)piVar7);
    uVar1 = *extraout_A0;
    uVar2 = extraout_A0[1];
    func_0x00003918((short)&iStack_50,(short)((uint)piVar7 >> 0x10),uVar9);
    *extraout_A0_00 = uVar1;
    extraout_A0_00[1] = uVar2;
    local_28 = iStack_50;
    local_24 = iStack_4c;
    local_20 = iStack_48;
    local_1c = iStack_44;
    local_40 = local_18;
    local_60 = iStack_50;
    iStack_5c = iStack_4c;
    iStack_58 = iStack_48;
    iStack_54 = iStack_44;
    if (local_c - (int)*(short *)(param_1 + 0x23) / 2 <= local_3c) {
      local_40._0_2_ = (short)((uint)local_18 >> 0x10);
      local_40._2_2_ = (undefined2)local_18;
      local_40 = CONCAT22(local_40._0_2_ + 1,local_40._2_2_);
      iVar3 = func_0x00003978((short)&local_14);
      local_60 = iVar3 + local_60;
    }
    local_6c = local_2c;
    local_6a = local_2a;
    local_70 = local_40._0_2_;
    local_6e = local_40._2_2_;
    (**(code **)(*param_1 + 0x3ac))(uVar10,(short)&local_70,(short)&local_6c,(char)&local_60);
    if (*(char *)((int)param_1 + 0x89) != '\0') {
      sVar4 = 0;
      local_14 = local_28;
      local_10 = local_24;
      local_c = local_20;
      local_8 = local_1c;
      bVar8 = *(short *)(param_1[0x20] + 0x14) != 1;
      if (!bVar8) {
        sVar4 = (**(code **)(*param_1 + 0x3e0))();
      }
      for (sVar6 = local_18._2_2_; sVar6 <= local_2a; sVar6 = sVar6 + 1) {
        if (bVar8) {
          sVar5 = (**(code **)(*param_1 + 0x3e0))();
          local_8 = local_10 + sVar5;
        }
        else {
          local_8 = local_10 + sVar4;
        }
        (**(code **)(*param_1 + 0x39c))(uVar10,(short)((uint)&local_14 >> 0x10));
        local_10 = local_8;
      }
    }
    if (*(char *)(param_1 + 0x22) != '\0') {
      sVar4 = 0;
      local_14 = local_28;
      local_10 = local_24;
      local_c = local_20;
      local_8 = local_1c;
      bVar8 = *(short *)(param_1[0x21] + 0x14) != 1;
      if (!bVar8) {
        sVar4 = (**(code **)(*param_1 + 0x3e4))();
      }
      for (sVar6 = local_18._0_2_; sVar6 <= local_2c; sVar6 = sVar6 + 1) {
        if (bVar8) {
          sVar5 = (**(code **)(*param_1 + 0x3e4))();
          local_c = local_14 + sVar5;
        }
        else {
          local_c = local_14 + sVar4;
        }
        (**(code **)(*param_1 + 0x3a0))(uVar10,(short)((uint)&local_14 >> 0x10));
        local_14 = local_c;
      }
    }
  }
  func_0x00004c98(uVar10,(char)&local_28);
  return;
}



// Function: FUN_000014d2 at 000014d2
// Size: 156 bytes

void FUN_000014d2(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 auStack_5e [74];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_4[2];
  local_8 = param_4[3];
  local_10 = (int)*(short *)((int)param_1 + 0x8e) / 2 + param_4[1];
  local_14 = (int)*(short *)(param_1 + 0x23) / 2 + *param_4;
  if (*(short *)(param_1[0x20] + 0x14) == 1) {
    (**(code **)(*param_1 + 0x3e0))();
  }
  if (*(short *)(param_1[0x21] + 0x14) == 1) {
    (**(code **)(*param_1 + 0x3e4))();
  }
  func_0x00001c90((short)auStack_5e);
  return;
}



// Function: FUN_000016be at 000016be
// Size: 8 bytes

void FUN_000016be(void)

{
  return;
}



// Function: FUN_000016c6 at 000016c6
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016c6(int *param_1,undefined2 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *extraout_A0;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  short local_14;
  short local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00007208((char)&local_14);
  func_0x00007208((short)&local_8);
  local_8 = _DAT_00025b56;
  cVar2 = (**(code **)(*param_1 + 0x410))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)param_1[0x24];
    local_14 = *(short *)(iVar1 + 2);
    local_12 = *(short *)(iVar1 + 4);
    local_1c = *(undefined4 *)(iVar1 + 2);
    local_18 = *(undefined4 *)(iVar1 + 6);
    local_10 = local_1c;
    local_c = local_18;
    if (**(short **)param_1[0x24] == 10) {
      func_0x00007260((short)&local_10);
      local_8 = *extraout_A0;
    }
    else {
      for (; (int)local_14 <= *(short *)(iVar1 + 6) + -1; local_14 = local_14 + 1) {
        if ((int)local_12 <= *(short *)(iVar1 + 8) + -1) {
          func_0x00007210((short)&local_14,(short)auStack_20);
          return;
        }
      }
    }
  }
  *param_2 = local_8._0_2_;
  param_2[1] = local_8._2_2_;
  return;
}



// Function: FUN_000017da at 000017da
// Size: 54 bytes

undefined4 FUN_000017da(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_2._0_2_ < 1) || (*(short *)(param_1 + 0x7e) < param_2._0_2_)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x80) + 0x68))();
  }
  return uVar1;
}



// Function: FUN_00001810 at 00001810
// Size: 54 bytes

undefined4 FUN_00001810(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_2._0_2_ < 1) || (*(short *)(param_1 + 0x7c) < param_2._0_2_)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0x68))();
  }
  return uVar1;
}



// Function: FUN_00001846 at 00001846
// Size: 62 bytes

void FUN_00001846(int *param_1,undefined2 *param_2)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [16];
  
  local_18 = *param_2;
  local_16 = param_2[1];
  (**(code **)(*param_1 + 0x3b4))(param_1,&local_18,auStack_14);
  (**(code **)(*param_1 + 0x270))(param_1,auStack_14);
  return;
}



// Function: FUN_00001884 at 00001884
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001884(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x3c0))(param_1,param_1[0x24],_DAT_00025df6);
    (**(code **)(*param_1 + 0x278))(param_1,_DAT_00025df6);
  }
  return;
}



// Function: FUN_000018d2 at 000018d2
// Size: 276 bytes

char FUN_000018d2(int *param_1,int *param_2,short *param_3)

{
  char cVar1;
  char cVar2;
  undefined4 local_24;
  int local_20;
  int local_1c;
  short local_18;
  short local_16;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  cVar2 = '\0';
  (**(code **)(*param_1 + 0x434))(param_1,&local_24,param_2);
  *(undefined4 *)param_3 = local_24;
  cVar1 = func_0x00007240(param_3,&DAT_00025b56);
  if (cVar1 != '\0') {
    local_18 = *param_3;
    local_16 = param_3[1];
    (**(code **)(*param_1 + 0x3b4))(param_1,&local_18,&local_14);
    local_20 = (int)*(short *)(param_1 + 0x23) / 2;
    local_1c = (int)*(short *)((int)param_1 + 0x8e) / 2;
    func_0x00003948(&local_14,&local_20);
    cVar2 = '\x01';
    if (0 < *(short *)((int)param_1 + 0x8e)) {
      if (param_2[1] < local_10) {
        cVar2 = '\x03';
      }
      else if (local_8 <= param_2[1]) {
        cVar2 = '\x03';
        param_3[1] = param_3[1] + 1;
        if (*(short *)((int)param_1 + 0x7e) < param_3[1]) {
          cVar2 = '\0';
        }
      }
    }
    if (0 < *(short *)(param_1 + 0x23)) {
      if (*param_2 < local_14) {
        if (cVar2 == '\x03') {
          cVar2 = '\x04';
        }
        else {
          cVar2 = '\x02';
        }
      }
      else if (local_c <= *param_2) {
        if (cVar2 == '\x03') {
          cVar2 = '\x04';
        }
        else {
          cVar2 = '\x02';
        }
        *param_3 = *param_3 + 1;
        if (*(short *)(param_1 + 0x1f) < *param_3) {
          cVar2 = '\0';
        }
      }
    }
  }
  return cVar2;
}



// Function: FUN_000019e6 at 000019e6
// Size: 196 bytes

void FUN_000019e6(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_24 [3];
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if ((0 < param_2._0_2_) && (0 < param_2._2_2_)) {
    (**(code **)(*(int *)param_1[0x20] + 0x58))();
    *(short *)((int)param_1 + 0x7e) = param_2._2_2_ + *(short *)((int)param_1 + 0x7e);
    (**(code **)(*param_1 + 0x1c4))();
    local_24[2] = (int)param_2._0_2_;
    local_18 = 1;
    local_24[0] = ((int)*(short *)((int)param_1 + 0x7e) - (int)param_2._0_2_) + 1;
    local_24[1] = 1;
    if (local_24[0] < 1) {
      piVar1 = local_24 + 1;
    }
    else {
      piVar1 = local_24;
    }
    (**(code **)(*param_1 + 0x3b8))((short)param_1,(short)*piVar1,auStack_14);
    (**(code **)(*param_1 + 0x270))((short)param_1,(short)auStack_14);
  }
  return;
}



// Function: FUN_00001aaa at 00001aaa
// Size: 196 bytes

void FUN_00001aaa(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_24 [3];
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if ((0 < param_2._0_2_) && (0 < param_2._2_2_)) {
    (**(code **)(*(int *)param_1[0x21] + 0x58))();
    *(short *)(param_1 + 0x1f) = param_2._2_2_ + *(short *)(param_1 + 0x1f);
    (**(code **)(*param_1 + 0x1c4))();
    local_24[2] = (int)param_2._0_2_;
    local_18 = 1;
    local_24[0] = ((int)*(short *)(param_1 + 0x1f) - (int)param_2._0_2_) + 1;
    local_24[1] = 1;
    if (local_24[0] < 1) {
      piVar1 = local_24 + 1;
    }
    else {
      piVar1 = local_24;
    }
    (**(code **)(*param_1 + 0x3bc))((short)param_1,(short)*piVar1,auStack_14);
    (**(code **)(*param_1 + 0x270))((short)param_1,(short)auStack_14);
  }
  return;
}



// Function: FUN_00001b6e at 00001b6e
// Size: 44 bytes

void FUN_00001b6e(int *param_1)

{
  (**(code **)(*param_1 + 0x3ec))();
  return;
}



// Function: FUN_00001b9a at 00001b9a
// Size: 44 bytes

void FUN_00001b9a(int *param_1)

{
  (**(code **)(*param_1 + 0x3f0))();
  return;
}



// Function: FUN_00001bc6 at 00001bc6
// Size: 34 bytes

void FUN_00001bc6(int *param_1)

{
  (**(code **)(*param_1 + 0x3ec))();
  return;
}



// Function: FUN_00001be8 at 00001be8
// Size: 34 bytes

void FUN_00001be8(int *param_1)

{
  (**(code **)(*param_1 + 0x3f0))();
  return;
}



// Function: FUN_00001c0a at 00001c0a
// Size: 20 bytes

void FUN_00001c0a(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_8 [4];
  
  func_0x00007210(param_2,auStack_8);
  return;
}



// Function: FUN_00001c34 at 00001c34
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c50 at 00001c50
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c50(int *param_1,undefined2 *param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00007208((short)&local_10);
  func_0x00007208((short)&local_14);
  local_14 = _DAT_00025b56;
  cVar2 = (**(code **)(*param_1 + 0x410))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)param_1[0x24];
    local_1c = *(undefined4 *)(iVar1 + 2);
    local_18 = *(undefined4 *)(iVar1 + 6);
    local_8._2_2_ = (short)local_18;
    local_8._0_2_ = (short)((uint)local_18 >> 0x10);
    if (**(short **)param_1[0x24] == 10) {
      local_10 = CONCAT22(local_8._0_2_ + -1,local_8._2_2_ + -1);
      local_14 = local_10;
    }
    else {
      while (local_8._0_2_ = local_8._0_2_ + -1, *(short *)(iVar1 + 2) <= local_8._0_2_) {
        if (*(short *)(iVar1 + 4) <= (short)(local_8._2_2_ + -1)) {
          local_10 = CONCAT22(local_8._0_2_,local_8._2_2_ + -1);
          local_c = local_1c;
          local_8 = local_18;
          func_0x00007210((short)&local_10,(short)auStack_20);
          return;
        }
      }
    }
  }
  *param_2 = local_14._0_2_;
  param_2[1] = local_14._2_2_;
  return;
}



// Function: FUN_00001d64 at 00001d64
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d64(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  short sVar3;
  int iVar2;
  int iVar4;
  
  if (((param_2._0_2_ < 1) || (param_2._2_2_ < 1)) ||
     ((int)*(short *)(param_1 + 0x7c) < (int)param_2._2_2_ + (int)param_2._0_2_ + -1)) {
    *param_3 = _DAT_00025b62;
    param_3[1] = _DAT_00025b66;
    param_3[2] = _DAT_00025b6a;
    param_3[3] = _DAT_00025b6e;
  }
  else {
    if (*(short *)(*(int *)(param_1 + 0x84) + 0x14) == 1) {
      sVar3 = (**(code **)(**(int **)(param_1 + 0x84) + 0x68))();
      iVar4 = (int)sVar3 * (param_2._0_2_ + -1);
      iVar2 = (int)param_2._2_2_ * (int)sVar3;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x84) + 0x6c))
                        ((short)*(int **)(param_1 + 0x84),param_2._0_2_ + -1);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x6c))
                        (*(int **)(param_1 + 0x84),param_2._2_2_);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 0x10);
    *param_3 = iVar4;
    param_3[1] = 0;
    param_3[2] = iVar2 + iVar4;
    param_3[3] = iVar1;
  }
  return;
}



// Function: FUN_00001e54 at 00001e54
// Size: 356 bytes

void FUN_00001e54(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 *extraout_A0;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  short local_50;
  short local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined1 auStack_48 [16];
  int local_38;
  int local_34;
  short local_30;
  short local_2e;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  undefined2 local_c;
  undefined2 local_a;
  short local_8;
  short local_6;
  
  cVar2 = (**(code **)(*param_1 + 0x410))();
  uVar6 = SUB42(param_1,0);
  if (cVar2 == '\0') {
    func_0x000039f8(uVar6);
  }
  else {
    iVar1 = *(int *)param_1[0x24];
    local_c = *(undefined2 *)(iVar1 + 2);
    local_a = *(undefined2 *)(iVar1 + 4);
    local_8 = *(short *)(iVar1 + 6);
    local_6 = *(short *)(iVar1 + 8);
    uVar5 = SUB41(auStack_1c,0);
    func_0x00007260((char)&local_c,(short)((uint)auStack_1c >> 0x10));
    local_4c = *extraout_A0;
    local_4a = extraout_A0[1];
    (**(code **)(*param_1 + 0x3b4))(uVar6,(char)&local_4c,uVar5);
    local_50 = local_8 + -1;
    local_4e = local_6 + -1;
    local_30 = local_50;
    local_2e = local_4e;
    (**(code **)(*param_1 + 0x3b4))(param_1,(short)&local_50,(short)auStack_2c);
    uVar5 = 0xc;
    func_0x00003960(auStack_1c,auStack_48,auStack_2c);
    puVar4 = auStack_2c;
    local_58 = func_0x00003978((short)puVar4);
    local_54 = func_0x00003978((short)auStack_1c,(short)((uint)puVar4 >> 0x10),uVar5);
    if (local_58 < local_54) {
      piVar3 = &local_54;
    }
    else {
      piVar3 = &local_58;
    }
    iVar1 = *piVar3;
    uVar5 = (undefined1)((uint)auStack_2c >> 0x10);
    local_60 = func_0x00003978((short)auStack_2c);
    local_5c = func_0x00003978((short)auStack_1c,uVar5);
    if (local_60 < local_5c) {
      piVar3 = &local_5c;
    }
    else {
      piVar3 = &local_60;
    }
    local_38 = *piVar3;
    local_34 = iVar1;
    (**(code **)(*param_1 + 0x290))(uVar6,(char)auStack_48,(short)&local_38);
  }
  return;
}



// Function: FUN_00001fb8 at 00001fb8
// Size: 70 bytes

void FUN_00001fb8(int *param_1,undefined2 *param_2)

{
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_c = *param_2;
  local_a = param_2[1];
  local_8 = *param_2;
  local_6 = param_2[1];
  (**(code **)(*param_1 + 0x42c))(param_1,&local_c);
  return;
}



// Function: FUN_00001ffe at 00001ffe
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ffe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002032 at 00002032
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002032(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_4e [74];
  
  if (param_3._2_1_ != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00001c90(auStack_4e);
  return;
}



// Function: FUN_0000216c at 0000216c
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000216c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = func_0x00007290(param_2,0x25b4e);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000021e0 at 000021e0
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000021e0(int param_1,short *param_2,undefined4 *param_3)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 100))(*(int **)(param_1 + 0x84),*param_3);
  sVar2 = (**(code **)(**(int **)(param_1 + 0x80) + 100))(*(int **)(param_1 + 0x80),param_3[1]);
  if ((sVar2 == 0) || (sVar1 == 0)) {
    *param_2 = _DAT_00025b56;
    param_2[1] = _DAT_00025b58;
  }
  else {
    *param_2 = sVar1;
    param_2[1] = sVar2;
  }
  return;
}



// Function: FUN_0000225a at 0000225a
// Size: 116 bytes

void FUN_0000225a(int param_1,short *param_2,undefined4 *param_3)

{
  short local_8;
  short local_6;
  
  func_0x00007208(&local_8);
  local_6 = (**(code **)(**(int **)(param_1 + 0x80) + 100))(*(int **)(param_1 + 0x80),param_3[1]);
  if (local_6 == 0) {
    local_6 = *(short *)(param_1 + 0x7e);
  }
  local_8 = (**(code **)(**(int **)(param_1 + 0x84) + 100))(*(int **)(param_1 + 0x84),*param_3);
  if (local_8 == 0) {
    local_8 = *(short *)(param_1 + 0x7c);
  }
  *param_2 = local_8;
  param_2[1] = local_6;
  return;
}



// Function: FUN_000022ce at 000022ce
// Size: 128 bytes

void FUN_000022ce(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  short sVar1;
  undefined1 uVar2;
  undefined2 local_110;
  undefined2 local_10e;
  undefined1 auStack_10c [8];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  local_110 = *param_2;
  local_10e = param_2[1];
  (**(code **)(*param_1 + 0x440))(param_1,&local_110,local_104);
  sVar1 = (**(code **)(*param_1 + 0x3e0))();
  if (0 < sVar1) {
    uVar2 = 0x2c;
    (**(code **)(*param_1 + 0x148))(param_1,param_3,auStack_10c);
    func_0x00001dc0((short)local_104,(short)auStack_10c,uVar2);
  }
  return;
}



// Function: FUN_0000234e at 0000234e
// Size: 46 bytes

bool FUN_0000234e(int *param_1)

{
  char cVar1;
  
  cVar1 = func_0x00004cc0(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x448))();
  }
  return cVar1 != '\0';
}



// Function: FUN_0000237c at 0000237c
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000237c(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = *(undefined4 *)(param_1 + 0x9c);
  local_c = *(undefined4 *)(param_1 + 0xa0);
  local_8 = *(undefined4 *)(param_1 + 0xa4);
  func_0x00001df8(&local_10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000023a6 at 000023a6
// Size: 50 bytes

undefined1 * FUN_000023a6(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_00025b76;
  puVar3 = param_3;
  for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_3;
}



// Function: FUN_000023d8 at 000023d8
// Size: 74 bytes

undefined4 FUN_000023d8(int *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *param_2;
  local_6 = param_2[1];
  cVar1 = FUN_000006e0((short)param_1,(short)&local_8);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x454))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// Function: FUN_00002422 at 00002422
// Size: 36 bytes

undefined4 FUN_00002422(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_2._0_2_ < 1) || (*(short *)(param_1 + 0x7c) < param_2._0_2_)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00002446 at 00002446
// Size: 212 bytes

void FUN_00002446(int *param_1,byte *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  short sVar3;
  short *psVar4;
  undefined1 *puVar5;
  byte local_104 [256];
  
  local_104[0] = 0;
  uVar2 = (**(code **)(*param_1 + 0x450))();
  puVar5 = &stack0xfffffee8;
  for (sVar3 = 1; sVar3 <= *(short *)(param_1 + 0x1f); sVar3 = sVar3 + 1) {
    *(short *)(puVar5 + -2) = sVar3;
    *(int **)(puVar5 + -6) = param_1;
    pcVar1 = *(code **)(**(int **)(puVar5 + -6) + 0x450);
    *(undefined4 *)(puVar5 + -10) = 0x2480;
    uVar2 = (*pcVar1)();
    *(byte **)(puVar5 + -10) = local_104;
    *(undefined2 *)(puVar5 + -0xc) = uVar2;
    *(int **)(puVar5 + -0x10) = param_1;
    pcVar1 = *(code **)(**(int **)(puVar5 + -0x10) + 0x44c);
    *(undefined4 *)(puVar5 + -0x14) = 0x2494;
    (*pcVar1)();
    *(ushort *)(puVar5 + -0x12) = (ushort)local_104[0] - (ushort)*param_2;
    *(ushort *)(puVar5 + -0x14) = *param_2 + 1;
    *(byte **)(puVar5 + -0x18) = local_104;
    *(undefined4 *)(puVar5 + -0x1c) = 0x24b8;
    func_0x00007318();
    *(byte **)(puVar5 + -0x1c) = local_104;
    *(byte **)(puVar5 + -0x20) = param_2;
    puVar5[-0x22] = 0;
    psVar4 = (short *)(puVar5 + -0x24);
    puVar5[-0x24] = 1;
    *(undefined4 *)(puVar5 + -0x28) = 0x24cc;
    func_0x00007638();
    puVar5 = puVar5 + -0xc;
    if (-1 < *psVar4) break;
  }
  puVar5[-2] = 1;
  puVar5[-4] = 1;
  puVar5[-6] = 0;
  *(undefined2 *)(puVar5 + -8) = uVar2;
  *(int **)(puVar5 + -0xc) = param_1;
  pcVar1 = *(code **)(**(int **)(puVar5 + -0xc) + 0x47c);
  *(undefined4 *)(puVar5 + -0x10) = 0x24fe;
  (*pcVar1)();
  puVar5[-0xe] = 1;
  *(int **)(puVar5 + -0x12) = param_1;
  pcVar1 = *(code **)(**(int **)(puVar5 + -0x12) + 0x260);
  *(undefined4 *)(puVar5 + -0x16) = 0x250e;
  (*pcVar1)();
  return;
}



// Function: FUN_0000251a at 0000251a
// Size: 46 bytes

undefined2 FUN_0000251a(int *param_1)

{
  undefined2 local_c [4];
  
  (**(code **)(*param_1 + 0x3dc))(param_1,local_c);
  return local_c[0];
}



// Function: FUN_00002548 at 00002548
// Size: 4 bytes

void FUN_00002548(void)

{
  return;
}



// Function: FUN_0000254c at 0000254c
// Size: 4 bytes

void FUN_0000254c(int *param_1)

{
  (**(code **)(*param_1 + 0x3e4))();
  return;
}



// Function: FUN_00002550 at 00002550
// Size: 8 bytes

void FUN_00002550(void)

{
  int unaff_A6;
  
  (**(code **)(**(int **)(unaff_A6 + 8) + 0x3e4))();
  return;
}



// Function: FUN_00002558 at 00002558
// Size: 8 bytes

void FUN_00002558(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x3e4))();
  return;
}



// Function: FUN_00002560 at 00002560
// Size: 6 bytes

void FUN_00002560(void)

{
  code *in_A1;
  
  (*in_A1)();
  return;
}



// Function: FUN_00002566 at 00002566
// Size: 26 bytes

void FUN_00002566(int *param_1)

{
  (**(code **)(*param_1 + 0x3e0))();
  return;
}



// Function: FUN_00002580 at 00002580
// Size: 50 bytes

undefined1 * FUN_00002580(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = &DAT_00025b76;
  puVar3 = param_2._2_4_;
  for (iVar1 = DAT_00025b76 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2._2_4_;
}



// Function: FUN_000025b2 at 000025b2
// Size: 12 bytes

undefined2 FUN_000025b2(undefined4 param_1,undefined4 param_2)

{
  return param_2._0_2_;
}



// Function: FUN_000025be at 000025be
// Size: 32 bytes

void FUN_000025be(int *param_1)

{
  (**(code **)(*param_1 + 0x44c))();
  return;
}



// Function: FUN_000025de at 000025de
// Size: 56 bytes

void FUN_000025de(int *param_1,undefined2 param_2)

{
  (**(code **)(*param_1 + 0x3f0))(param_1,param_2);
  return;
}



// Function: FUN_00002616 at 00002616
// Size: 30 bytes

void FUN_00002616(int *param_1)

{
  (**(code **)(*param_1 + 0x46c))();
  return;
}



// Function: FUN_00002634 at 00002634
// Size: 40 bytes

void FUN_00002634(int *param_1)

{
  (**(code **)(*param_1 + 0x46c))();
  return;
}



// Function: FUN_0000265c at 0000265c
// Size: 50 bytes

void FUN_0000265c(int *param_1)

{
  undefined1 local_c [2];
  undefined2 local_a;
  undefined2 local_6;
  
  local_6 = 1;
  local_a = 1;
  (**(code **)(*param_1 + 0x404))(param_1,local_c);
  return;
}



// Function: FUN_0000268e at 0000268e
// Size: 50 bytes

void FUN_0000268e(int *param_1)

{
  undefined1 local_c [2];
  undefined2 local_a;
  undefined2 local_6;
  
  local_6 = 1;
  local_a = 1;
  (**(code **)(*param_1 + 0x40c))(param_1,local_c);
  return;
}



// Function: FUN_000026c0 at 000026c0
// Size: 50 bytes

undefined2 FUN_000026c0(int *param_1)

{
  undefined2 local_c [4];
  
  (**(code **)(*param_1 + 0x414))(param_1,local_c);
  return local_c[0];
}



// Function: FUN_000026f2 at 000026f2
// Size: 40 bytes

void FUN_000026f2(int *param_1)

{
  (**(code **)(*param_1 + 0x47c))();
  return;
}



// Function: FUN_0000271a at 0000271a
// Size: 88 bytes

void FUN_0000271a(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int local_14 [2];
  undefined1 local_c [2];
  undefined2 local_a;
  undefined2 local_6;
  
  local_14[0] = (int)param_2._0_2_;
  local_14[1] = 1;
  if (param_2._0_2_ < 2) {
    piVar1 = local_14;
  }
  else {
    piVar1 = local_14 + 1;
  }
  local_a = (undefined2)*piVar1;
  local_6 = local_a;
  FUN_00001fb8(param_1,local_c);
  return;
}



