// Warlords II - Decompiled 68k Code
// Segment: CODE_015
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000000c(void)

{
  int in_stack_00000010;
  undefined4 local_192;
  undefined4 local_18e;
  undefined4 local_18a;
  undefined1 auStack_186 [104];
  undefined1 auStack_11e [282];
  
  func_0x00007030(auStack_186);
  local_192 = *(undefined4 *)(in_stack_00000010 + 0x94);
  local_18e = *(undefined4 *)(in_stack_00000010 + 0x98);
  local_18a = *(undefined4 *)(in_stack_00000010 + 0x9c);
  FUN_00001df8(&local_192);
  FUN_00005760(auStack_11e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000432 at 00000432
// Size: 144 bytes

void FUN_00000432(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_62 [42];
  short local_38;
  undefined1 auStack_36 [42];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_62);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_c);
  func_0x00007038(auStack_36,auStack_c);
  do {
    cVar1 = FUN_00006d40((short)auStack_36,(short)&local_38);
    if (cVar1 == '\0') {
      uVar3 = 0xffff;
      puVar2 = auStack_36;
      FUN_00006d38((short)puVar2);
      FUN_00006d30((short)auStack_62,(short)((uint)puVar2 >> 0x10),uVar3);
      return;
    }
  } while (local_38 < 4);
  FUN_00001dd8(0x5c7c);
  func_0x00007258((short)auStack_c);
  return;
}



// Function: FUN_000004ca at 000004ca
// Size: 144 bytes

void FUN_000004ca(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_62 [42];
  short local_38;
  undefined1 auStack_36 [42];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_62);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_c);
  func_0x00007038(auStack_36,auStack_c);
  do {
    cVar1 = FUN_00006d40((short)auStack_36,(short)&local_38);
    if (cVar1 == '\0') {
      uVar3 = 0xffff;
      puVar2 = auStack_36;
      FUN_00006d38((short)puVar2);
      FUN_00006d30((short)auStack_62,(short)((uint)puVar2 >> 0x10),uVar3);
      return;
    }
  } while (local_38 < 4);
  FUN_00001dd8(0x9830);
  func_0x00007258((short)auStack_c);
  return;
}



// Function: FUN_00000562 at 00000562
// Size: 202 bytes

void FUN_00000562(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_7a [42];
  short local_50;
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_7a);
  FUN_00006d60();
  FUN_000004ca(param_1,(short)param_2,(short)param_3);
  (**(code **)(*param_2 + 0x148))(param_2,param_3,auStack_14);
  (**(code **)(*param_2 + 0x214))(param_2,auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,auStack_c);
  func_0x00007038(auStack_4e,auStack_14);
  do {
    cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_50);
    if (cVar1 == '\0') {
      uVar3 = 0xffff;
      puVar2 = auStack_4e;
      FUN_00006d38((short)puVar2);
      FUN_00006d30((short)auStack_7a,(short)((uint)puVar2 >> 0x10),uVar3);
      return;
    }
  } while (local_50 < 4);
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(0x5c7c);
}



// Function: FUN_000006a0 at 000006a0
// Size: 150 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000006a0(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_7a [42];
  short local_50;
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_7a);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_14);
  (**(code **)(*param_2 + 0x214))(param_2,auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,auStack_c);
  func_0x00007038(auStack_4e,auStack_14);
  cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_50);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_4e;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_7a,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (3 < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x9842);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000790 at 00000790
// Size: 38 bytes

void FUN_00000790(void)

{
  int unaff_A6;
  
  FUN_00006d38(unaff_A6 + -0x4a);
  FUN_00006d30((short)unaff_A6 + -0x76);
  return;
}



// Function: FUN_000007b6 at 000007b6
// Size: 190 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007b6(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_7a [42];
  short local_50;
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_7a);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_14);
  (**(code **)(*param_2 + 0x214))(param_2,auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,auStack_c);
  func_0x00007038(auStack_4e,auStack_14);
  cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_50);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_4e;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_7a,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (3 < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x9842);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008da at 000008da
// Size: 188 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000008da(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_7a [42];
  short local_50;
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_7a);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_14);
  (**(code **)(*param_2 + 0x214))(param_2,auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,auStack_c);
  func_0x00007038(auStack_4e,auStack_14);
  cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_50);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_4e;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_7a,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (3 < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x9842);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000009f0 at 000009f0
// Size: 190 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000009f0(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_7a [42];
  short local_50;
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_7a);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_14);
  (**(code **)(*param_2 + 0x214))(param_2,auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,auStack_c);
  func_0x00007038(auStack_4e,auStack_14);
  cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_50);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_4e;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_7a,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (3 < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x9842);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000b14 at 00000b14
// Size: 192 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b14(undefined4 param_1,int *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_7a [42];
  short local_50;
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_7a);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x148))(param_2,param_3,(short)auStack_14);
  (**(code **)(*param_2 + 0x214))(param_2,auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,auStack_c);
  func_0x00007038(auStack_4e,auStack_14);
  cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_50);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_4e;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_7a,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (3 < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00005768(0x963a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000cd6 at 00000cd6
// Size: 208 bytes

void FUN_00000cd6(int *param_1)

{
  undefined1 auStack_14e [42];
  undefined1 auStack_124 [16];
  undefined1 local_114 [256];
  undefined2 local_14;
  short local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_114[0] = 0;
  func_0x00007030(auStack_14e);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_124);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_124,&local_14);
  (**(code **)(*param_1 + 0x43c))();
  (**(code **)(*param_1 + 0x440))();
  (**(code **)(*param_1 + 0x3fc))(param_1,local_114);
  local_c = local_14;
  local_8 = local_10;
  local_6 = local_e;
  local_a = *(short *)((int)param_1 + 0xca) + 3 + local_12;
  FUN_0000000c(local_114,&local_c,0xfffe,param_1,param_1 + 0x33,0xf800fc,0xfc);
  FUN_00006d30((short)auStack_14e);
  return;
}



// Function: FUN_00000da6 at 00000da6
// Size: 86 bytes

void FUN_00000da6(int *param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x82);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_00005c38(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  func_0x00005c40(uVar1,param_1,param_2);
  (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  return;
}



// Function: FUN_00000dfc at 00000dfc
// Size: 224 bytes

int FUN_00000dfc(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x3b0))();
  if ((char)iVar1 == '\0') {
    if (param_2._0_1_ == 0) {
      iVar1 = (**(code **)(*param_1 + 0x3a8))();
    }
    else if (param_2._0_1_ == 1) {
      cVar2 = (**(code **)(*param_1 + 0x2a0))();
      if (cVar2 == '\0') {
        iVar1 = (**(code **)(*param_1 + 0x3a8))();
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x3a8))();
      }
    }
    else {
      iVar1 = param_2._0_1_ - 2;
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x2a0))(), (char)iVar1 != '\0')) {
        (**(code **)(*param_1 + 0x3a8))();
        iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
      }
    }
  }
  return iVar1;
}



// Function: FUN_00000edc at 00000edc
// Size: 122 bytes

void FUN_00000edc(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)param_1 + 0xb2);
  local_8 = param_2;
  if (param_2 < *(int *)((int)param_1 + 0xb2)) {
    piVar1 = &local_8;
  }
  else {
    piVar1 = &local_c;
  }
  local_14 = *piVar1;
  local_10 = *(int *)((int)param_1 + 0xae);
  if (*piVar1 < *(int *)((int)param_1 + 0xae)) {
    piVar1 = &local_10;
  }
  else {
    piVar1 = &local_14;
  }
  if ((*piVar1 != *(int *)((int)param_1 + 0xaa)) &&
     (*(int *)((int)param_1 + 0xaa) = *piVar1, param_3._0_1_ != '\0')) {
    (**(code **)(*param_1 + 0x244))(param_1,param_1 + 0x2f);
  }
  return;
}



// Function: FUN_00000f56 at 00000f56
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f56(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != *(char *)(param_1 + 0x20)) {
    *(char *)(param_1 + 0x20) = param_2._0_1_;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0x200))((short)param_1,(char)_DAT_00026800);
    }
    else {
      (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_00026800);
    }
    if (param_2._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x218))();
    }
  }
  return;
}



// Function: FUN_00000fc6 at 00000fc6
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000fc6(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != *(char *)((int)param_1 + 0x81)) {
    *(char *)((int)param_1 + 0x81) = param_2._0_1_;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0x200))((short)param_1,(char)_DAT_000267f4);
    }
    else {
      (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_000267f4);
    }
    if (param_2._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x248))();
    }
  }
  return;
}



// Function: FUN_00001036 at 00001036
// Size: 244 bytes

void FUN_00001036(int *param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 auStack_156 [42];
  undefined1 auStack_12c [16];
  undefined1 local_11c [256];
  undefined1 auStack_1c [8];
  undefined2 local_14;
  short local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x00007030(auStack_156);
  FUN_00006d60();
  uVar6 = (undefined2)((uint)param_1 >> 0x10);
  uVar7 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x39c))(uVar7,auStack_12c);
  (**(code **)(*param_1 + 0x148))(uVar7,(short)auStack_12c,(short)&local_14);
  cVar3 = (char)param_1 + -0x44;
  (**(code **)(*param_1 + 0x148))(uVar7,cVar3,(short)auStack_1c);
  FUN_00006d60();
  if (*(char *)(param_1 + 0x20) != '\0') {
    func_0x00007250(auStack_1c);
    return;
  }
  (**(code **)(*param_1 + 0x440))();
  local_11c[0] = 0;
  (**(code **)(*param_1 + 0x3fc))(param_1,local_11c);
  local_c = local_14;
  local_8 = local_10;
  local_6 = local_e;
  local_a = *(short *)((int)param_1 + 0xca) + 3 + local_12;
  uVar8 = 0xfa;
  uVar5 = 0xff;
  uVar4 = 0xff;
  param_1 = param_1 + 0x33;
  puVar2 = &local_c;
  puVar1 = local_11c;
  FUN_0000000c((short)puVar1,(short)puVar2,0xfffe,uVar7,(short)param_1,0xff,0xff);
  FUN_00006d30((short)auStack_156,(short)((uint)puVar1 >> 0x10),(short)((uint)puVar2 >> 0x10),cVar3,
               uVar6,(short)((uint)param_1 >> 0x10),uVar4,uVar5,uVar8);
  return;
}



// Function: FUN_00001148 at 00001148
// Size: 166 bytes

void FUN_00001148(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  short local_72;
  undefined1 auStack_70 [42];
  undefined1 auStack_46 [42];
  undefined1 auStack_1c [4];
  int local_18;
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_70);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x39c))((short)param_1,(short)auStack_1c);
  local_18 = param_1[0x32] + local_18;
  (**(code **)(*param_1 + 0x148))(param_1,auStack_1c,auStack_c);
  func_0x00007038(auStack_46,auStack_c);
  do {
    cVar1 = FUN_00006d40((short)auStack_46,(short)&local_72);
    if (cVar1 == '\0') {
      uVar3 = 0xffff;
      puVar2 = auStack_46;
      FUN_00006d38((short)puVar2);
      FUN_00006d30((short)auStack_70,(short)((uint)puVar2 >> 0x10),uVar3);
      return;
    }
  } while (1 < local_72);
  func_0x00007250((short)auStack_c);
  return;
}



// Function: FUN_0000122c at 0000122c
// Size: 194 bytes

void FUN_0000122c(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 auStack_62 [42];
  short local_38;
  undefined1 auStack_36 [42];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_62);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x148))(param_1,(short)param_1 + 0xbc,(short)auStack_c);
  func_0x00007038(auStack_36,auStack_c);
  cVar1 = FUN_00006d40((short)auStack_36,(short)&local_38);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_36;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_62,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (2 < local_38) {
    cVar1 = (**(code **)(*param_1 + 0x3b0))();
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00005768(0x961c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x9848);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(0x5c76);
}



// Function: FUN_000013b6 at 000013b6
// Size: 56 bytes

void FUN_000013b6(int *param_1)

{
  undefined1 auStack_60 [84];
  undefined1 auStack_c [8];
  
  func_0x00007030(auStack_60);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x148))(param_1,param_1 + 0x2f,auStack_c);
  func_0x00007250(auStack_c);
  return;
}



// Function: FUN_000014da at 000014da
// Size: 48 bytes

void FUN_000014da(int *param_1,int *param_2,undefined4 param_3)

{
  param_1[0x33] = *param_2;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 1);
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_0000150a at 0000150a
// Size: 174 bytes

void FUN_0000150a(int *param_1)

{
  undefined1 auStack_14e [42];
  undefined1 auStack_124 [16];
  undefined1 local_114 [256];
  undefined2 local_14;
  short local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_114[0] = 0;
  func_0x00007030(auStack_14e);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_124);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_124,&local_14);
  (**(code **)(*param_1 + 0x43c))();
  (**(code **)(*param_1 + 0x440))();
  (**(code **)(*param_1 + 0x3fc))(param_1,local_114);
  local_c = local_14;
  local_8 = local_10;
  local_6 = local_e;
  local_a = *(short *)((int)param_1 + 0xca) + 4 + local_12;
  FUN_0000000c(local_114,&local_c,0xfffe,param_1,param_1 + 0x33,0xf800fc,0xfc);
  FUN_00006d30((short)auStack_14e);
  return;
}



// Function: FUN_000015b8 at 000015b8
// Size: 34 bytes

void FUN_000015b8(void)

{
  int unaff_A6;
  
  FUN_0000000c(unaff_A6 + -0x110);
  FUN_00006d30((short)unaff_A6 + -0x14a);
  return;
}



// Function: FUN_000015da at 000015da
// Size: 86 bytes

void FUN_000015da(int *param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x82);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_00005c38(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  func_0x00005c40(uVar1,param_1,param_2);
  (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  return;
}



// Function: FUN_00001630 at 00001630
// Size: 224 bytes

int FUN_00001630(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x3b0))();
  if ((char)iVar1 == '\0') {
    if (param_2._0_1_ == 0) {
      iVar1 = (**(code **)(*param_1 + 0x3a8))();
    }
    else if (param_2._0_1_ == 1) {
      cVar2 = (**(code **)(*param_1 + 0x2a0))();
      if (cVar2 == '\0') {
        iVar1 = (**(code **)(*param_1 + 0x3a8))();
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x3a8))();
      }
    }
    else {
      iVar1 = param_2._0_1_ - 2;
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x2a0))(), (char)iVar1 != '\0')) {
        (**(code **)(*param_1 + 0x3a8))();
        iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
      }
    }
  }
  return iVar1;
}



// Function: FUN_00001710 at 00001710
// Size: 116 bytes

void FUN_00001710(int *param_1,int param_2)

{
  int *piVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)param_1 + 0xb2);
  local_8 = param_2;
  if (param_2 < *(int *)((int)param_1 + 0xb2)) {
    piVar1 = &local_8;
  }
  else {
    piVar1 = &local_c;
  }
  local_14 = *piVar1;
  local_10 = *(int *)((int)param_1 + 0xae);
  if (*piVar1 < *(int *)((int)param_1 + 0xae)) {
    piVar1 = &local_10;
  }
  else {
    piVar1 = &local_14;
  }
  if (*piVar1 != *(int *)((int)param_1 + 0xaa)) {
    *(int *)((int)param_1 + 0xaa) = *piVar1;
    (**(code **)(*param_1 + 0x244))(param_1,param_1 + 0x2f);
  }
  return;
}



// Function: FUN_00001784 at 00001784
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001784(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != *(char *)(param_1 + 0x20)) {
    *(char *)(param_1 + 0x20) = param_2._0_1_;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0x200))((short)param_1,(char)_DAT_00026800);
    }
    else {
      (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_00026800);
    }
    if (param_2._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x218))();
    }
  }
  return;
}



// Function: FUN_000017f4 at 000017f4
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017f4(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != *(char *)((int)param_1 + 0x81)) {
    *(char *)((int)param_1 + 0x81) = param_2._0_1_;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0x200))((short)param_1,(char)_DAT_000267f4);
    }
    else {
      (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_000267f4);
    }
    if (param_2._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x248))();
    }
  }
  return;
}



// Function: FUN_00001864 at 00001864
// Size: 246 bytes

void FUN_00001864(int *param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 auStack_156 [42];
  undefined1 auStack_12c [16];
  undefined1 local_11c [256];
  undefined2 local_1c;
  short local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  short local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined1 auStack_c [8];
  
  func_0x00007030(auStack_156);
  FUN_00006d60();
  uVar6 = (undefined2)((uint)param_1 >> 0x10);
  uVar7 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x39c))(uVar7,auStack_12c);
  (**(code **)(*param_1 + 0x148))(uVar7,(short)auStack_12c,(short)&local_1c);
  cVar3 = (char)param_1 + -0x44;
  (**(code **)(*param_1 + 0x148))(uVar7,cVar3,(short)auStack_c);
  FUN_00006d60();
  if (*(char *)(param_1 + 0x20) != '\0') {
    func_0x00007250(auStack_c);
    return;
  }
  (**(code **)(*param_1 + 0x440))();
  local_11c[0] = 0;
  (**(code **)(*param_1 + 0x3fc))(param_1,local_11c);
  local_14 = local_1c;
  local_10 = local_18;
  local_e = local_16;
  local_12 = *(short *)((int)param_1 + 0xca) + 4 + local_1a;
  uVar8 = 0xfa;
  uVar5 = 0xff;
  uVar4 = 0xff;
  param_1 = param_1 + 0x33;
  puVar2 = &local_14;
  puVar1 = local_11c;
  FUN_0000000c((short)puVar1,(short)puVar2,0xfffe,uVar7,(short)param_1,0xff,0xff);
  FUN_00006d30((short)auStack_156,(short)((uint)puVar1 >> 0x10),(short)((uint)puVar2 >> 0x10),cVar3,
               uVar6,(short)((uint)param_1 >> 0x10),uVar4,uVar5,uVar8);
  return;
}



// Function: FUN_000019d4 at 000019d4
// Size: 166 bytes

void FUN_000019d4(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  short local_72;
  undefined1 auStack_70 [42];
  undefined1 auStack_46 [42];
  undefined1 auStack_1c [4];
  int local_18;
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_70);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x39c))((short)param_1,(short)auStack_1c);
  local_18 = param_1[0x32] + local_18;
  (**(code **)(*param_1 + 0x148))(param_1,auStack_1c,auStack_c);
  func_0x00007038(auStack_46,auStack_c);
  do {
    cVar1 = FUN_00006d40((short)auStack_46,(short)&local_72);
    if (cVar1 == '\0') {
      uVar3 = 0xffff;
      puVar2 = auStack_46;
      FUN_00006d38((short)puVar2);
      FUN_00006d30((short)auStack_70,(short)((uint)puVar2 >> 0x10),uVar3);
      return;
    }
  } while (1 < local_72);
  func_0x00007250((short)auStack_c);
  return;
}



// Function: FUN_00001ab8 at 00001ab8
// Size: 184 bytes

void FUN_00001ab8(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  short local_62;
  undefined1 auStack_60 [42];
  undefined1 auStack_36 [42];
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_60);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x148))(param_1,(short)param_1 + 0xbc,(short)auStack_c);
  func_0x00007038(auStack_36,auStack_c);
  cVar1 = FUN_00006d40((short)auStack_36,(short)&local_62);
  if (cVar1 == '\0') {
    uVar3 = 0xffff;
    puVar2 = auStack_36;
    FUN_00006d38((short)puVar2);
    FUN_00006d30((short)auStack_60,(short)((uint)puVar2 >> 0x10),uVar3);
    return;
  }
  if (2 < local_62) {
    cVar1 = (**(code **)(*param_1 + 0x3b0))();
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00001de0(0x9848);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x5c76);
  }
  func_0x00007258((short)auStack_c);
  return;
}



// Function: FUN_00001b7c at 00001b7c
// Size: 56 bytes

void FUN_00001b7c(int *param_1)

{
  undefined1 auStack_8c [128];
  undefined1 auStack_c [8];
  
  func_0x00007030(auStack_8c);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x148))(param_1,param_1 + 0x2f,auStack_c);
  func_0x00007250(auStack_c);
  return;
}



// Function: FUN_00001c90 at 00001c90
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ca8 at 00001ca8
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ca8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d50 at 00001d50
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d60 at 00001d60
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001dd8 at 00001dd8
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001de0 at 00001de0
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001df8 at 00001df8
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001df8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000023e6 at 000023e6
// Size: 48 bytes

void FUN_000023e6(int *param_1,int *param_2,undefined4 param_3)

{
  param_1[0x33] = *param_2;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 1);
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00002416 at 00002416
// Size: 86 bytes

void FUN_00002416(int *param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x82);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_00005c38(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  func_0x00005c40(uVar1,param_1,param_2);
  (**(code **)(*param_1 + 0x108))(param_1,uVar1);
  return;
}



// Function: FUN_0000246c at 0000246c
// Size: 224 bytes

int FUN_0000246c(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x3b0))();
  if ((char)iVar1 == '\0') {
    if (param_2._0_1_ == 0) {
      iVar1 = (**(code **)(*param_1 + 0x3a8))();
    }
    else if (param_2._0_1_ == 1) {
      cVar2 = (**(code **)(*param_1 + 0x2a0))();
      if (cVar2 == '\0') {
        iVar1 = (**(code **)(*param_1 + 0x3a8))();
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x3a8))();
      }
    }
    else {
      iVar1 = param_2._0_1_ - 2;
      if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x2a0))(), (char)iVar1 != '\0')) {
        (**(code **)(*param_1 + 0x3a8))();
        iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
      }
    }
  }
  return iVar1;
}



// Function: FUN_0000254c at 0000254c
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000254c(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  if (param_2._0_1_ != *(char *)(param_1 + 0x20)) {
    *(char *)(param_1 + 0x20) = param_2._0_1_;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0x200))((short)param_1,(char)_DAT_00026800);
    }
    else {
      (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_00026800);
    }
    if (param_2._2_1_ != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x340))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x218))();
      }
    }
  }
  return;
}



// Function: FUN_000025ce at 000025ce
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025ce(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != *(char *)((int)param_1 + 0x81)) {
    *(char *)((int)param_1 + 0x81) = param_2._0_1_;
    if (param_2._0_1_ == '\0') {
      (**(code **)(*param_1 + 0x200))((short)param_1,(char)_DAT_000267f4);
    }
    else {
      (**(code **)(*param_1 + 0x1fc))((short)param_1,(short)_DAT_000267f4);
    }
    if (param_2._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x248))();
    }
  }
  return;
}



// Function: FUN_0000263e at 0000263e
// Size: 120 bytes

void FUN_0000263e(int *param_1)

{
  undefined1 auStack_11c [8];
  undefined1 auStack_114 [16];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_114);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_114,auStack_11c);
  (**(code **)(*param_1 + 0x3fc))(param_1,local_104);
  FUN_0000000c(local_104,auStack_11c,1,param_1,0x25c76,0xf500f9,0xfa);
  return;
}



// Function: FUN_000026b6 at 000026b6
// Size: 88 bytes

void FUN_000026b6(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  short sStack_72;
  undefined1 auStack_70 [42];
  undefined1 auStack_46 [42];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  func_0x00007030((short)auStack_70);
  FUN_00006d60();
  uVar3 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x39c))(uVar3,(short)auStack_14);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_14,auStack_1c);
  func_0x00007038(auStack_46,auStack_1c);
  while( true ) {
    cVar1 = FUN_00006d40((short)auStack_46,(short)&sStack_72);
    if (cVar1 == '\0') break;
    if (sStack_72 < 4) {
      if (*(char *)(param_1 + 0x20) == '\0') {
        (**(code **)(*(int *)param_1[0x2f] + 0x60))
                  ((short)(int *)param_1[0x2f],uVar3,(short)auStack_14);
        (**(code **)(*param_1 + 0x240))(param_1,auStack_14);
      }
      else {
        (**(code **)(*param_1 + 0x240))(uVar3,(short)auStack_14);
        (**(code **)(*(int *)param_1[0x2f] + 0x60))((int *)param_1[0x2f],param_1,(short)auStack_14);
      }
    }
    else {
      (**(code **)(*(int *)param_1[0x2f] + 0x60))
                ((short)(int *)param_1[0x2f],uVar3,(short)auStack_14);
      (**(code **)(*param_1 + 0x240))(param_1,auStack_14);
    }
  }
  uVar3 = 0xffff;
  puVar2 = auStack_46;
  FUN_00006d38((short)puVar2);
  FUN_00006d30((short)auStack_70,(short)((uint)puVar2 >> 0x10),uVar3);
  return;
}



// Function: FUN_00002798 at 00002798
// Size: 56 bytes

void FUN_00002798(void)

{
  char cVar1;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uVar2;
  
  while( true ) {
    cVar1 = FUN_00006d40((short)unaff_A6 + -0x42);
    if (cVar1 == '\0') break;
    if (*(short *)(unaff_A6 + -0x6e) < 4) {
      if (*(char *)(unaff_A2 + 0x20) == '\0') {
        (**(code **)(*(int *)unaff_A2[0x2f] + 0x60))();
        (**(code **)(*unaff_A2 + 0x240))();
      }
      else {
        (**(code **)(*unaff_A2 + 0x240))();
        (**(code **)(*(int *)unaff_A2[0x2f] + 0x60))();
      }
    }
    else {
      (**(code **)(*(int *)unaff_A2[0x2f] + 0x60))();
      (**(code **)(*unaff_A2 + 0x240))();
    }
  }
  uVar2 = (undefined2)((uint)(unaff_A6 + -0x42) >> 0x10);
  FUN_00006d38();
  FUN_00006d30((short)unaff_A6 + -0x6c,uVar2);
  return;
}



// Function: FUN_000027d0 at 000027d0
// Size: 70 bytes

void FUN_000027d0(int *param_1)

{
  undefined1 auStack_70 [84];
  undefined1 auStack_1c [16];
  undefined1 auStack_c [8];
  
  func_0x00007030(auStack_70);
  FUN_00006d60();
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_1c);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_1c,auStack_c);
  func_0x00007250(auStack_c);
  return;
}



// Function: FUN_000028ba at 000028ba
// Size: 382 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028ba(undefined4 param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 auStack_78 [42];
  undefined1 auStack_4e [42];
  undefined1 auStack_24 [16];
  short local_14;
  undefined4 local_12;
  undefined2 local_e;
  undefined1 auStack_c [8];
  
  func_0x00007030((short)auStack_78);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x39c))((short)param_2,(short)auStack_24);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_24,(short)auStack_c);
  func_0x00007038(auStack_4e,auStack_c);
  do {
    cVar1 = FUN_00006d40((short)auStack_4e,(short)&local_14);
    if (cVar1 == '\0') {
      uVar4 = 0xffff;
      puVar3 = auStack_4e;
      FUN_00006d38((short)puVar3);
      FUN_00006d30((short)auStack_78,(short)((uint)puVar3 >> 0x10),uVar4);
      return;
    }
    if (7 < local_14) {
      if (*(char *)(param_2 + 0x20) == '\0') {
        cVar1 = (**(code **)(*param_2 + 0x3b0))();
        if (cVar1 == '\0') {
          sVar2 = 0xf7;
        }
        else {
          sVar2 = 0xf6;
        }
      }
      else {
        sVar2 = 0xf9;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00005768(sVar2 * 6 + -0x6fae);
    }
    if (local_14 == 4) {
      if (*(char *)(param_2 + 0x20) == '\0') {
        cVar1 = (**(code **)(*param_2 + 0x3b0))();
        if (cVar1 == '\0') {
          func_0x00007390((short)&local_12,0xc000);
        }
        else {
          local_12 = _DAT_00029830;
          local_e = _DAT_00029834;
        }
      }
      else {
        func_0x00007390((short)&local_12,0x8000);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00001de0((short)&local_12);
    }
  } while (3 < local_14);
  if (*(char *)(param_2 + 0x20) != '\0') {
    func_0x00007258((short)auStack_c);
    return;
  }
  FUN_00001dd8(0x5c7c);
  func_0x00007258((short)auStack_c);
  return;
}



// Function: FUN_00002be4 at 00002be4
// Size: 94 bytes

void FUN_00002be4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_3._0_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00005768(0x2963a);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00005768(0x29634);
}



// Function: FUN_00003182 at 00003182
// Size: 106 bytes

void FUN_00003182(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 auStack_1e [18];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *param_2;
  local_8 = param_2[1];
  if (param_3._0_1_ != '\0') {
    func_0x00007390(auStack_1e,0x20002000);
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(auStack_1e);
  }
  func_0x00007390(auStack_1e,0x20002000);
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(auStack_1e);
}



// Function: FUN_00003760 at 00003760
// Size: 14 bytes

void FUN_00003760(undefined4 param_1,undefined4 param_2)

{
  func_0x00007258(param_2);
  return;
}



// Function: FUN_0000377e at 0000377e
// Size: 42 bytes

void FUN_0000377e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_5._0_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_3);
}



// Function: FUN_00003866 at 00003866
// Size: 42 bytes

void FUN_00003866(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_5._0_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_3);
}



// Function: FUN_0000394e at 0000394e
// Size: 42 bytes

void FUN_0000394e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_5._0_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_3);
}



// Function: FUN_00003980 at 00003980
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003980(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003a46 at 00003a46
// Size: 42 bytes

void FUN_00003a46(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_5._0_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_4);
}



// Function: FUN_00003b3e at 00003b3e
// Size: 248 bytes

void FUN_00003b3e(int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  undefined1 auStack_d6 [70];
  undefined2 local_90;
  undefined2 local_8e;
  undefined1 auStack_8c [112];
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  
  func_0x00007030(auStack_d6);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x39c))(param_2,auStack_8c);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_8c,&local_14);
  local_1c = local_14;
  local_1a = local_12;
  local_18 = local_10;
  local_16 = local_e;
  local_90 = 0xffee;
  local_8e = 0xffee;
  func_0x00007288(&local_1c,&local_90);
  if ((*(ushort *)(param_1 + 10) & 1) != 0) {
    local_1c = local_1c + 0x12;
  }
  if ((*(ushort *)(param_1 + 10) & 2) != 0) {
    local_18 = local_18 + -0x12;
  }
  if ((*(ushort *)(param_1 + 10) & 4) != 0) {
    local_1a = local_1a + 0x12;
  }
  if ((*(ushort *)(param_1 + 10) & 8) != 0) {
    local_16 = local_16 + -0x12;
  }
  if (*(char *)(param_2 + 0x20) == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x3b0))();
    if (cVar1 == '\0') {
      sVar2 = 0xf7;
    }
    else {
      sVar2 = 0xf6;
    }
  }
  else {
    sVar2 = 0xf9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00005768(sVar2 * 6 + 0x29052);
}



// Function: FUN_000044fe at 000044fe
// Size: 186 bytes

void FUN_000044fe(undefined4 param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  undefined2 local_54;
  undefined2 local_52;
  undefined1 auStack_4a [16];
  undefined1 auStack_3a [42];
  undefined2 local_10;
  undefined2 local_e;
  undefined1 auStack_c [8];
  
  func_0x00007030(auStack_3a);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x39c))(param_2,auStack_4a);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_4a,auStack_c);
  func_0x000072b8(auStack_c,&local_54);
  local_10 = local_54;
  local_e = local_52;
  if (*(char *)(param_2 + 0x20) == '\0') {
    cVar1 = (**(code **)(*param_2 + 0x3b0))();
    if (cVar1 == '\0') {
      sVar2 = 0xf7;
    }
    else {
      sVar2 = 0xf6;
    }
  }
  else {
    sVar2 = 0xf9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00005768(sVar2 * 6 + 0x29052);
}



// Function: FUN_00004a38 at 00004a38
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004a38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00004a7a at 00004a7a
// Size: 114 bytes

void FUN_00004a7a(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined1 auStack_a4 [126];
  undefined1 auStack_26 [26];
  undefined1 auStack_c [8];
  
  func_0x00007030(auStack_a4);
  FUN_00006d60();
  (**(code **)(*param_2 + 0x39c))(param_2,auStack_26);
  (**(code **)(*param_2 + 0x148))(param_2,auStack_26,auStack_c);
  cVar1 = (**(code **)(*param_2 + 0x3b0))();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(0x29848);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(0x25c76);
}



// Function: FUN_00004b40 at 00004b40
// Size: 72 bytes

void FUN_00004b40(void)

{
  short sVar1;
  char cVar2;
  int unaff_A6;
  
  do {
    sVar1 = (short)unaff_A6;
    if (*(short *)(unaff_A6 + -0x12) < 4) {
      *(undefined2 *)(unaff_A6 + -0x10) = *(undefined2 *)(unaff_A6 + -8);
      *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(unaff_A6 + -6);
      *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(unaff_A6 + -4);
      *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(unaff_A6 + -2);
      FUN_00006d60();
      func_0x00007250(sVar1 + -0x10);
      return;
    }
    cVar2 = FUN_00006d40(sVar1 + -0x4c,sVar1 + -0x12);
  } while (cVar2 != '\0');
  FUN_00006d38(sVar1 + -0x4c);
  FUN_00006d30(sVar1 + -0xa0);
  return;
}



// Function: FUN_00004b48 at 00004b48
// Size: 39 bytes

void FUN_00004b48(void)

{
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -0x10) = *(undefined2 *)(unaff_A6 + -8);
  *(undefined2 *)(unaff_A6 + -0xe) = *(undefined2 *)(unaff_A6 + -6);
  *(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(unaff_A6 + -4);
  *(undefined2 *)(unaff_A6 + -10) = *(undefined2 *)(unaff_A6 + -2);
  FUN_00006d60();
  func_0x00007250(unaff_A6 + -0x10);
  return;
}



// Function: FUN_00004c66 at 00004c66
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004c66(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_16;
  undefined2 local_12;
  
  if (param_3._0_1_ != '\0') {
    func_0x00007390((short)&local_16,0x4444);
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(&local_16);
  }
  local_16 = _DAT_00029836;
  local_12 = _DAT_0002983a;
                    /* WARNING: Subroutine does not return */
  FUN_00001de0((short)&local_16);
}



// Function: FUN_00004c98 at 00004c98
// Size: 26 bytes

void FUN_00004c98(void)

{
  int unaff_A6;
  
  func_0x00007390(unaff_A6 + -0x12,0x44444444);
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(unaff_A6 + -0x12);
}



// Function: FUN_00005114 at 00005114
// Size: 86 bytes

void FUN_00005114(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_10 [12];
  
  if (param_3._0_1_ != '\0') {
    func_0x00007390(auStack_10,0x20002000);
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(auStack_10);
  }
  func_0x00007390(auStack_10,0xc000c000);
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(auStack_10);
}



// Function: FUN_00005378 at 00005378
// Size: 19 bytes

void FUN_00005378(void)

{
  int unaff_A6;
  
  func_0x00007390(unaff_A6 + -0xc);
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(unaff_A6 + -0xc);
}



// Function: FUN_000055a2 at 000055a2
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000055a2(void)

{
  FUN_00006d60();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000564a at 0000564a
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000564a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000056ea at 000056ea
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000056ea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00005720 at 00005720
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005720(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00005760 at 00005760
// Size: 4 bytes

void FUN_00005760(void)

{
  return;
}



// Function: FUN_00005764 at 00005764
// Size: 4 bytes

void FUN_00005764(void)

{
  undefined4 in_stack_00000010;
  
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(in_stack_00000010);
}



// Function: FUN_00005768 at 00005768
// Size: 16 bytes

void FUN_00005768(void)

{
  int unaff_A6;
  
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(*(undefined4 *)(unaff_A6 + 0x14));
}



// Function: FUN_000057c2 at 000057c2
// Size: 20 bytes

void FUN_000057c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_3);
}



// Function: FUN_0000582c at 0000582c
// Size: 20 bytes

void FUN_0000582c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_3);
}



// Function: FUN_0000589e at 0000589e
// Size: 42 bytes

void FUN_0000589e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_5._0_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00001de0(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00001de0(param_4);
}



// Function: FUN_00005996 at 00005996
// Size: 26 bytes

void FUN_00005996(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x39c))(param_1,param_2);
  return;
}



// Function: FUN_000059b0 at 000059b0
// Size: 38 bytes

void FUN_000059b0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 1000))();
  FUN_00004c98(param_1,param_2);
  return;
}



// Function: FUN_000059d6 at 000059d6
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000059d6(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    cVar1 = FUN_00001d60(*(undefined4 *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00005a78 at 00005a78
// Size: 26 bytes

void FUN_00005a78(int *param_1)

{
  (**(code **)(*param_1 + 1000))();
  return;
}



// Function: FUN_00005a92 at 00005a92
// Size: 58 bytes

void FUN_00005a92(int *param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    (**(code **)(*param_1 + 1000))();
  }
  else {
    (**(code **)(*param_1 + 1000))();
  }
  return;
}



// Function: FUN_00005acc at 00005acc
// Size: 134 bytes

void FUN_00005acc(int *param_1,int *param_2)

{
  short sVar2;
  int iVar1;
  undefined1 auStack_c [8];
  
  (**(code **)(*param_1 + 0x39c))(param_1,param_2);
  FUN_00003980(param_2,auStack_c);
  sVar2 = (**(code **)(*param_1 + 0x3f8))(param_1,auStack_c);
  iVar1 = (int)sVar2;
  *param_2 = ((param_2[2] - *param_2) - iVar1) / 2 + *param_2;
  param_2[2] = iVar1 + *param_2;
  param_2[1] = ((param_2[3] - param_2[1]) - iVar1) / 2 + param_2[1];
  param_2[3] = iVar1 + param_2[1];
  return;
}



// Function: FUN_00005b52 at 00005b52
// Size: 16 bytes

undefined2 FUN_00005b52(int param_1)

{
  return *(undefined2 *)(param_1 + 0xb8);
}



// Function: FUN_00005b62 at 00005b62
// Size: 64 bytes

void FUN_00005b62(int *param_1)

{
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  (**(code **)(*(int *)param_1[0x2c] + 0x60))((int *)param_1[0x2c],param_1,auStack_14);
  FUN_00005a92(param_1);
  return;
}



// Function: FUN_00005ba2 at 00005ba2
// Size: 18 bytes

void FUN_00005ba2(undefined4 param_1)

{
  FUN_00005a78(param_1);
  return;
}



// Function: FUN_00005bb4 at 00005bb4
// Size: 36 bytes

int FUN_00005bb4(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x3b0))();
  if ((char)iVar2 == '\0') {
    if (param_2._0_1_ == 0) {
      *(undefined1 *)((int)param_1 + 0xb6) = *(undefined1 *)(param_1 + 0x20);
      iVar2 = (**(code **)(*param_1 + 0x3a8))();
    }
    else if (param_2._0_1_ == 1) {
      cVar3 = (**(code **)(*param_1 + 0x2a0))(param_1,param_4._2_4_);
      if (cVar3 == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x3a8))();
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x3a8))();
      }
    }
    else {
      iVar2 = param_2._0_1_ - 2;
      if ((iVar2 == 0) &&
         (iVar2 = (**(code **)(*param_1 + 0x2a0))(param_1,param_4._2_4_), (char)iVar2 != '\0')) {
        sVar1 = *(short *)(param_1 + 0x2d);
        if (sVar1 == 1) {
          if (*(char *)(param_1 + 0x20) != '\0') {
            (**(code **)(*param_1 + 0x3a8))();
          }
        }
        else if (sVar1 == 2) {
          (**(code **)(*param_1 + 0x3a8))();
        }
        else if ((sVar1 == 3) && (*(char *)(param_1 + 0x20) == '\0')) {
          (**(code **)(*param_1 + 0x3a8))();
        }
        iVar2 = (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
      }
    }
  }
  return iVar2;
}



// Function: FUN_00005bd8 at 00005bd8
// Size: 8 bytes

int FUN_00005bd8(void)

{
  short sVar1;
  int in_D0;
  char cVar3;
  int iVar2;
  int *unaff_A2;
  bool in_ZF;
  
  if (in_ZF) {
    *(undefined1 *)((int)unaff_A2 + 0xb6) = *(undefined1 *)(unaff_A2 + 0x20);
    iVar2 = (**(code **)(*unaff_A2 + 0x3a8))();
  }
  else if (in_D0 == 1) {
    cVar3 = (**(code **)(*unaff_A2 + 0x2a0))();
    if (cVar3 == '\0') {
      iVar2 = (**(code **)(*unaff_A2 + 0x3a8))();
    }
    else {
      iVar2 = (**(code **)(*unaff_A2 + 0x3a8))();
    }
  }
  else {
    iVar2 = in_D0 + -2;
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*unaff_A2 + 0x2a0))(), (char)iVar2 != '\0')) {
      sVar1 = *(short *)(unaff_A2 + 0x2d);
      if (sVar1 == 1) {
        if (*(char *)(unaff_A2 + 0x20) != '\0') {
          (**(code **)(*unaff_A2 + 0x3a8))();
        }
      }
      else if (sVar1 == 2) {
        (**(code **)(*unaff_A2 + 0x3a8))();
      }
      else if ((sVar1 == 3) && (*(char *)(unaff_A2 + 0x20) == '\0')) {
        (**(code **)(*unaff_A2 + 0x3a8))();
      }
      iVar2 = (**(code **)(*unaff_A2 + 0x6c))();
    }
  }
  return iVar2;
}



// Function: FUN_00005be0 at 00005be0
// Size: 6 bytes

void FUN_00005be0(void)

{
  short sVar1;
  char cVar2;
  int *unaff_A2;
  bool in_ZF;
  
  if ((in_ZF) && (cVar2 = (**(code **)(*unaff_A2 + 0x2a0))(), cVar2 != '\0')) {
    sVar1 = *(short *)(unaff_A2 + 0x2d);
    if (sVar1 == 1) {
      if (*(char *)(unaff_A2 + 0x20) != '\0') {
        (**(code **)(*unaff_A2 + 0x3a8))();
      }
    }
    else if (sVar1 == 2) {
      (**(code **)(*unaff_A2 + 0x3a8))();
    }
    else if ((sVar1 == 3) && (*(char *)(unaff_A2 + 0x20) == '\0')) {
      (**(code **)(*unaff_A2 + 0x3a8))();
    }
    (**(code **)(*unaff_A2 + 0x6c))();
  }
  return;
}



// Function: FUN_00005c38 at 00005c38
// Size: 29 bytes

void FUN_00005c38(void)

{
  uint *puVar1;
  short unaff_D2w;
  int in_A1;
  int unaff_A6;
  
  puVar1 = (uint *)(unaff_A6 + 0x50 + unaff_D2w * 2);
  *puVar1 = *puVar1 | 0x2f0a2057;
  (**(code **)(in_A1 + 0x3a8))();
  return;
}



// Function: FUN_00005cf2 at 00005cf2
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005cf2(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    cVar1 = FUN_00001d60(*(undefined4 *)(param_1 + 0xa8));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00005e62 at 00005e62
// Size: 50 bytes

void FUN_00005e62(int *param_1,undefined4 param_2)

{
  FUN_000015b8(param_1,param_2);
  if (param_1[0x2c] == 0) {
    (**(code **)(*param_1 + 0x3dc))();
  }
  return;
}



// Function: FUN_00005e94 at 00005e94
// Size: 110 bytes

void FUN_00005e94(int *param_1)

{
  undefined4 *extraout_A0;
  
  func_0x000073b0(10);
  if (extraout_A0 != (undefined4 *)0x0) {
    FUN_00005378((char)extraout_A0);
    *extraout_A0 = 0x233d8;
  }
  func_0x00005380((short)extraout_A0,0x6261);
  param_1[0x2c] = (int)extraout_A0;
  (**(code **)(*param_1 + 0x1fc))(param_1,extraout_A0);
  return;
}



// Function: FUN_00005f02 at 00005f02
// Size: 72 bytes

void FUN_00005f02(int *param_1)

{
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  (**(code **)(*(int *)param_1[0x2c] + 0x60))((int *)param_1[0x2c],param_1,auStack_14);
  (**(code **)(*param_1 + 0x240))(param_1,auStack_14);
  return;
}



// Function: FUN_00005f4a at 00005f4a
// Size: 52 bytes

void FUN_00005f4a(int *param_1,undefined4 param_2)

{
  if ((param_2._0_1_ != *(char *)((int)param_1 + 0x81)) &&
     (*(char *)((int)param_1 + 0x81) = param_2._0_1_, param_2._2_1_ != '\0')) {
    (**(code **)(*param_1 + 0x248))();
  }
  return;
}



// Function: FUN_00005f7e at 00005f7e
// Size: 126 bytes

void FUN_00005f7e(int *param_1)

{
  undefined2 uVar1;
  undefined4 *extraout_A0;
  
  func_0x000073b0(0xc);
  if (extraout_A0 != (undefined4 *)0x0) {
    FUN_00005378((char)extraout_A0);
    *extraout_A0 = 0x233d8;
    *extraout_A0 = 0x23450;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x2e);
  func_0x00005380((short)extraout_A0,0x6261);
  *(undefined2 *)((int)extraout_A0 + 10) = uVar1;
  param_1[0x2c] = (int)extraout_A0;
  (**(code **)(*param_1 + 0x1fc))(param_1,extraout_A0);
  return;
}



// Function: FUN_00005ffc at 00005ffc
// Size: 118 bytes

void FUN_00005ffc(int *param_1)

{
  undefined4 *extraout_A0;
  
  func_0x000073b0(10);
  if (extraout_A0 != (undefined4 *)0x0) {
    FUN_00005378((char)extraout_A0);
    *extraout_A0 = 0x233d8;
    *extraout_A0 = 0x234c8;
  }
  func_0x00005380((short)extraout_A0,0x6261);
  param_1[0x2c] = (int)extraout_A0;
  (**(code **)(*param_1 + 0x1fc))(param_1,extraout_A0);
  return;
}



// Function: FUN_00006072 at 00006072
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006072(int param_1)

{
  undefined1 auStack_10 [12];
  
  func_0x00007208(auStack_10);
  if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000063c8 at 000063c8
// Size: 112 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000063c8(int *param_1)

{
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [36];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  (**(code **)(*param_1 + 0x3d4))(param_1,local_104);
  FUN_00000790(local_104);
  FUN_00001ca8((short)auStack_138);
  func_0x00007208(auStack_128);
  (**(code **)(*param_1 + 0x3c0))(param_1,auStack_128);
  FUN_00001d50(auStack_140);
  func_0x00007310(local_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00006502 at 00006502
// Size: 68 bytes

void FUN_00006502(int *param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  FUN_000015b8(param_1,param_2);
  (**(code **)(*param_1 + 0x310))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x1ac))(param_1,(short)auStack_14);
  return;
}



// Function: FUN_00006546 at 00006546
// Size: 8 bytes

void FUN_00006546(void)

{
  return;
}



// Function: FUN_0000654e at 0000654e
// Size: 78 bytes

void FUN_0000654e(int param_1,int param_2)

{
  FUN_00005bd8(param_1,param_2);
  if (((int)*(short *)(param_2 + 0x22) == (int)*(char *)(param_1 + 0x1e)) ||
     ((int)*(short *)(param_2 + 0x22) == (int)*(char *)(param_1 + 0x1f))) {
    FUN_000065f0(param_1);
  }
  return;
}



// Function: FUN_0000659c at 0000659c
// Size: 84 bytes

void FUN_0000659c(int param_1,int param_2)

{
  FUN_00005be0(param_1,param_2);
  if ((*(char *)(param_1 + 0x20) == '\0') &&
     (((int)*(short *)(param_2 + 0x22) == (int)*(char *)(param_1 + 0x1e) ||
      ((int)*(short *)(param_2 + 0x22) == (int)*(char *)(param_1 + 0x1f))))) {
    FUN_000065f0(param_1);
  }
  return;
}



// Function: FUN_000065f0 at 000065f0
// Size: 124 bytes

void FUN_000065f0(int param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x22);
  if (*(int *)(param_1 + 8) != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x74))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x3b0))();
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(param_1 + 8) + 0x3a4))();
        uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x29c))
                          (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 8),0);
        (**(code **)(**(int **)(param_1 + 8) + 0x6c))(*(int **)(param_1 + 8),uVar1);
      }
    }
  }
  return;
}



// Function: FUN_0000666c at 0000666c
// Size: 152 bytes

void FUN_0000666c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int local_68 [25];
  
  FUN_00005bd8((short)param_1,(char)param_2);
  cVar1 = (**(code **)(*param_2 + 0x8c))();
  if (cVar1 == '\0') {
    FUN_00004b40((short)local_68,(char)*(undefined4 *)(param_1 + 8));
    FUN_00004b48((short)local_68);
    uVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(local_68[0] + 8))();
      if (cVar1 == '\0') break;
      FUN_0000679a((short)uVar2,(short)param_2);
      func_0x00004b50((short)local_68);
      uVar2 = extraout_A0_00;
    }
    FUN_00002798((short)local_68);
  }
  return;
}



// Function: FUN_00006704 at 00006704
// Size: 150 bytes

void FUN_00006704(int param_1,int *param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int local_68 [25];
  
  FUN_00005be0((short)param_1,(char)param_2);
  cVar1 = (**(code **)(*param_2 + 0x8c))();
  if (cVar1 == '\0') {
    FUN_00004b40((short)local_68,(char)*(undefined4 *)(param_1 + 8));
    FUN_00004b48((short)local_68);
    uVar2 = extraout_A0;
    while( true ) {
      cVar1 = (**(code **)(local_68[0] + 8))();
      if (cVar1 == '\0') break;
      FUN_0000679a((short)uVar2,(short)param_2);
      func_0x00004b50((short)local_68);
      uVar2 = extraout_A0_00;
    }
    FUN_00002798((short)local_68);
  }
  return;
}



// Function: FUN_0000679a at 0000679a
// Size: 234 bytes

void FUN_0000679a(int *param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int local_68 [25];
  
  (**(code **)(*param_1 + 0xf0))();
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x74))();
    piVar4 = extraout_A0;
    piVar5 = extraout_A0_00;
    while (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x74))();
      piVar4 = piVar5;
      piVar5 = extraout_A0_01;
    }
    iVar1 = piVar4[2];
    piVar4[2] = 0;
    if (param_3._0_1_ == '\0') {
      (**(code **)(*extraout_A0 + 0xa8))((short)extraout_A0,(char)param_2);
    }
    else {
      (**(code **)(*extraout_A0 + 0xa0))((short)extraout_A0,(char)param_2);
    }
    piVar4[2] = iVar1;
  }
  FUN_00004b40((short)local_68,(char)param_1);
  FUN_00004b48((short)local_68);
  uVar3 = extraout_A0_02;
  while( true ) {
    cVar2 = (**(code **)(local_68[0] + 8))();
    if (cVar2 == '\0') break;
    FUN_0000679a((short)uVar3,param_2);
    func_0x00004b50((short)local_68);
    uVar3 = extraout_A0_03;
  }
  FUN_00002798((short)local_68);
  return;
}



// Function: FUN_00006884 at 00006884
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006884(int param_1,undefined4 param_2)

{
  FUN_000015b8(param_1,param_2);
  *(int *)(param_1 + 0xa4) = _DAT_00028cce;
  if (*(int *)(param_1 + 0xa4) != 0) {
    *(int *)(*(int *)(param_1 + 0xa4) + 0xa8) = param_1;
  }
  _DAT_00028cce = param_1;
  if (*(int *)(param_1 + 0xa4) == 0) {
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  return;
}



// Function: FUN_000068d0 at 000068d0
// Size: 154 bytes

void FUN_000068d0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *extraout_A0;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 == (int *)0x0) ||
     (((*(short *)(param_2 + 0x22) != 0xd && (*(short *)(param_2 + 0x22) != 3)) &&
      (*(short *)(param_2 + 0x22) != 0x20)))) {
    FUN_00004a38(param_1,param_2);
  }
  else {
    (**(code **)(*piVar1 + 0x188))(piVar1,0x70696374);
    if ((extraout_A0 != (int *)0x0) && (cVar2 = (**(code **)(*extraout_A0 + 0x74))(), cVar2 != '\0')
       ) {
      (**(code **)(*extraout_A0 + 0x6c))(extraout_A0,extraout_A0[0x1f],extraout_A0,0);
      return;
    }
    FUN_00004a38(param_1,param_2);
  }
  return;
}



// Function: FUN_0000696a at 0000696a
// Size: 8 bytes

void FUN_0000696a(void)

{
  return;
}



// Function: FUN_00006972 at 00006972
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006972(void)

{
  undefined1 auStack_a0 [156];
  
  FUN_00001c90(auStack_a0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00006ad8 at 00006ad8
// Size: 206 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006ad8(int *param_1)

{
  short sVar1;
  undefined2 extraout_A0u;
  undefined2 uVar2;
  undefined1 auStack_130 [20];
  undefined1 auStack_11c [16];
  undefined1 local_10c [2];
  undefined2 local_10a;
  undefined2 local_106;
  undefined1 local_104 [256];
  
  if (param_1[0x2a] != 0) {
    local_104[0] = 0;
    uVar2 = SUB42(param_1,0);
    (**(code **)(*param_1 + 0x3d4))(uVar2,(short)local_104);
    (**(code **)(*param_1 + 0x3d0))(uVar2,(short)local_104);
    (**(code **)(*param_1 + 0x39c))(param_1,(short)auStack_11c);
    func_0x000072f8(local_104);
    sVar1 = FUN_00001d50(auStack_130);
    if (*(int *)((int)param_1 + 0x32) + -3 <= (int)sVar1) {
      func_0x00007310((short)local_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(*param_1 + 0x148))(uVar2,(short)auStack_11c,(short)local_10c);
    func_0x00002a68(CONCAT22(local_10a,local_106),extraout_A0u,*(undefined2 *)(param_1 + 0x2b));
  }
  return;
}



// Function: FUN_00006d30 at 00006d30
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006d30(void)

{
  undefined2 *unaff_A2;
  
  *unaff_A2 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00006d38 at 00006d38
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00006d40 at 00006d40
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006d40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00006d60 at 00006d60
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006d60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



