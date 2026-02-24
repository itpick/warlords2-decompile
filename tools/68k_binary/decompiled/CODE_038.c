// Warlords II - Decompiled 68k Code
// Segment: CODE_038
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000025c at 0000025c
// Size: 118 bytes

void FUN_0000025c(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_A0;
  undefined2 uStack_14;
  
  FUN_00000e00();
  uStack_14 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x1f8))();
  *(undefined4 *)((int)param_1 + 0x72) = extraout_A0;
  (**(code **)(**(int **)((int)param_1 + 0x72) + 0x90))
            (*(int **)((int)param_1 + 0x72),(short)param_2);
  FUN_00000e00();
  (**(code **)(*param_2 + 0x58))(param_2,uStack_14);
  if (param_3._2_1_ != '\0') {
    (**(code **)(*param_2 + 0x6c))((short)param_2,(char)param_1);
  }
  return;
}



// Function: FUN_000002d2 at 000002d2
// Size: 240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002d2(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar2;
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  int *piVar3;
  undefined2 uVar4;
  int local_68;
  undefined4 local_64;
  
  if (*(int *)((int)param_1 + 0x72) != 0) {
    uVar4 = SUB42(param_1,0);
    func_0x00003360((short)&local_68,uVar4);
    func_0x00003370((short)&local_68);
    piVar3 = extraout_A0;
    while( true ) {
      cVar2 = (**(code **)(local_68 + 8))();
      if (cVar2 == '\0') break;
      if (piVar3 == param_2) {
        if (param_3._0_1_ != '\0') {
          (**(code **)(*piVar3 + 0x6c))((short)piVar3,uVar4);
        }
        (**(code **)(*param_2 + 0x5c))((short)param_2,uVar4);
        (**(code **)(**(int **)((int)param_1 + 0x72) + 0x68))
                  (*(int **)((int)param_1 + 0x72),local_64,1);
      }
      func_0x00003378((short)&local_68);
      piVar3 = extraout_A0_00;
    }
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0x72) + 0x58))();
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x208))(uVar4,1);
      if (extraout_A0_01 == _DAT_000267f8) {
        FUN_00000e10((short)*(undefined4 *)((int)param_1 + 0x72));
        *(undefined4 *)((int)param_1 + 0x72) = extraout_A0_02;
      }
    }
    func_0x00003368((short)&local_68);
  }
  return;
}



// Function: FUN_000003c2 at 000003c2
// Size: 242 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003c2(int *param_1,int param_2,undefined4 param_3)

{
  char cVar2;
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  int *piVar3;
  undefined2 uVar4;
  int local_68;
  undefined4 local_64;
  
  if (*(int *)((int)param_1 + 0x72) != 0) {
    uVar4 = SUB42(param_1,0);
    func_0x00003360((short)&local_68,uVar4);
    func_0x00003370((short)&local_68);
    piVar3 = extraout_A0;
    while( true ) {
      cVar2 = (**(code **)(local_68 + 8))();
      if (cVar2 == '\0') break;
      if (piVar3[1] == param_2) {
        if (param_3._0_1_ != '\0') {
          (**(code **)(*piVar3 + 0x6c))((short)piVar3,uVar4);
        }
        (**(code **)(*piVar3 + 0x5c))((short)piVar3,uVar4);
        (**(code **)(**(int **)((int)param_1 + 0x72) + 0x68))
                  (*(int **)((int)param_1 + 0x72),local_64,1);
      }
      func_0x00003378((short)&local_68);
      piVar3 = extraout_A0_00;
    }
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0x72) + 0x58))();
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x208))(uVar4,1);
      if (extraout_A0_01 == _DAT_000267f8) {
        FUN_00000e10((short)*(undefined4 *)((int)param_1 + 0x72));
        *(undefined4 *)((int)param_1 + 0x72) = extraout_A0_02;
      }
    }
    func_0x00003368((short)&local_68);
  }
  return;
}



// Function: FUN_000004b4 at 000004b4
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004b4(int param_1)

{
  int iVar1;
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x72) == 0) {
    func_0x000073b0(0x1e);
    piVar2 = (int *)0x0;
    if (extraout_A0 != 0) {
      func_0x00006f30((char)extraout_A0,extraout_A0,extraout_A0);
      piVar2 = extraout_A0_00;
    }
    func_0x00005590((char)piVar2);
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*piVar2 + 0x90))((short)piVar2,(short)_DAT_000267f8);
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*piVar2 + 0x4c))();
      func_0x00001c10((short)((uint)local_14 >> 0x10));
    }
  }
  return;
}



// Function: FUN_00000580 at 00000580
// Size: 128 bytes

void FUN_00000580(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  func_0x00004b40((short)local_68,param_1);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x1a4))((short)piVar2,param_2);
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  (**(code **)(*param_1 + 500))();
  func_0x00002798((short)local_68);
  return;
}



// Function: FUN_00000600 at 00000600
// Size: 68 bytes

void FUN_00000600(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_A0;
  
  if (*(int *)((int)param_1 + 0x6e) != param_2) {
    FUN_00000e10(*(undefined4 *)((int)param_1 + 0x6e));
    *(undefined4 *)((int)param_1 + 0x6e) = extraout_A0;
    *(int *)((int)param_1 + 0x6e) = param_2;
  }
  if (param_3._0_1_ != '\0') {
    (**(code **)(*param_1 + 0x26c))();
  }
  return;
}



// Function: FUN_00000644 at 00000644
// Size: 54 bytes

undefined4 FUN_00000644(int *param_1,undefined4 param_2)

{
  char cVar2;
  undefined4 uVar1;
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x304))(param_1,auStack_14);
  cVar2 = func_0x00003988(auStack_14,param_2);
  if (cVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



// Function: FUN_0000067a at 0000067a
// Size: 116 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000067a(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [70];
  undefined4 local_52;
  undefined1 auStack_4e [74];
  
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x1dc))();
    if (cVar1 != '\0') {
      func_0x00001c90(auStack_98);
      func_0x00001c90(auStack_4e);
      (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x148))
                (*(int **)((int)param_1 + 0x1e),param_2,auStack_a0);
      func_0x00007258(auStack_a0,local_52);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_0000079a at 0000079a
// Size: 262 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000079a(int *param_1,undefined2 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *extraout_A0;
  undefined2 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  uVar2 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x310))(uVar2,(char)auStack_14);
  cVar1 = func_0x00003950(param_2,(short)auStack_14);
  if (cVar1 != '\0') {
    func_0x00003920(param_2);
    *(undefined4 *)((int)param_1 + 0x2a) = *extraout_A0;
    *(undefined4 *)((int)param_1 + 0x2e) = extraout_A0[1];
    func_0x00003980(param_2,(short)&local_1c);
    *(undefined4 *)((int)param_1 + 0x32) = local_1c;
    *(undefined4 *)((int)param_1 + 0x36) = local_18;
    (**(code **)(*param_1 + 0x1e0))();
    (**(code **)(*param_1 + 500))();
    (**(code **)(*_DAT_000266a8 + 0x22c))();
    if (param_3._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x1b0))(uVar2,(short)auStack_14,(char)param_2);
    }
    (**(code **)(*param_1 + 0x1b4))(uVar2,(short)auStack_14,param_2);
    if (*(int *)((int)param_1 + 0x1e) != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x1d4))
                ((short)*(int **)((int)param_1 + 0x1e),uVar2,(short)auStack_14,param_2);
    }
    (**(code **)(*param_1 + 0x1b8))(uVar2,(short)auStack_14,param_2);
  }
  return;
}



// Function: FUN_000008a0 at 000008a0
// Size: 154 bytes

void FUN_000008a0(int *param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  if (*(int *)((int)param_1 + 0x72) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      func_0x00003360((short)local_68,(char)param_1);
      func_0x00003370((short)local_68);
      piVar2 = extraout_A0;
      while( true ) {
        cVar1 = (**(code **)(local_68[0] + 8))();
        if (cVar1 == '\0') break;
        (**(code **)(*piVar2 + 0x70))((short)piVar2,(short)param_1,param_2,param_3);
        func_0x00003378(local_68);
        piVar2 = extraout_A0_00;
      }
      func_0x00003368((short)local_68);
    }
  }
  return;
}



// Function: FUN_0000093a at 0000093a
// Size: 120 bytes

void FUN_0000093a(undefined1 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  func_0x00004b40((short)local_68,param_1);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x1d0))((short)piVar2,param_2,param_3);
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  func_0x00002798((short)local_68);
  return;
}



// Function: FUN_000009b2 at 000009b2
// Size: 92 bytes

void FUN_000009b2(int *param_1,undefined4 *param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000038b8(param_2,&local_1c,(int)param_1 + 0x32);
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = local_1c;
  local_8 = local_18;
  (**(code **)(*param_1 + 0x1ac))(param_1,&local_14);
  return;
}



// Function: FUN_00000a0e at 00000a0e
// Size: 98 bytes

void FUN_00000a0e(int param_1,int *param_2)

{
  int *extraout_A0;
  
  if (*(int *)(param_1 + 0x22) != 0) {
    (**(code **)(**(int **)(param_1 + 0x22) + 0x98))();
    if (extraout_A0 != param_2) {
      (**(code **)(**(int **)(param_1 + 0x22) + 0xc4))(*(int **)(param_1 + 0x22),param_2);
      (**(code **)(**(int **)(param_1 + 0x22) + 0xe8))(*(int **)(param_1 + 0x22),param_2);
      (**(code **)(*param_2 + 0x26c))();
    }
  }
  return;
}



// Function: FUN_00000a70 at 00000a70
// Size: 98 bytes

void FUN_00000a70(int param_1,int *param_2)

{
  int *extraout_A0;
  
  if (*(int *)(param_1 + 0x22) != 0) {
    (**(code **)(**(int **)(param_1 + 0x22) + 0x9c))();
    if (extraout_A0 != param_2) {
      (**(code **)(**(int **)(param_1 + 0x22) + 0xc4))(*(int **)(param_1 + 0x22),param_2);
      (**(code **)(**(int **)(param_1 + 0x22) + 0xec))(*(int **)(param_1 + 0x22),param_2);
      (**(code **)(*param_2 + 0x26c))();
    }
  }
  return;
}



// Function: FUN_00000ad2 at 00000ad2
// Size: 38 bytes

void FUN_00000ad2(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x390))(*(int **)(param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_00000af8 at 00000af8
// Size: 116 bytes

void FUN_00000af8(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  
  if (*(int *)((int)param_1 + 0x22) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x22) + 0xc4))(*(int **)((int)param_1 + 0x22),param_2);
    cVar1 = (**(code **)(**(int **)((int)param_1 + 0x22) + 0x7c))();
    if (cVar1 != '\0') {
      FUN_00000e10(*(undefined4 *)((int)param_1 + 0x22));
      *(undefined4 *)((int)param_1 + 0x22) = extraout_A0;
    }
  }
  (**(code **)(*param_1 + 0x390))(param_1,param_2);
  (**(code **)(*param_2 + 0x394))(param_2,0);
  return;
}



// Function: FUN_00000b6c at 00000b6c
// Size: 94 bytes

void FUN_00000b6c(int *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000038b8((int)param_1 + 0x2a,&local_1c,param_2);
  local_14 = *(undefined4 *)((int)param_1 + 0x2a);
  local_10 = *(undefined4 *)((int)param_1 + 0x2e);
  local_c = local_1c;
  local_8 = local_18;
  (**(code **)(*param_1 + 0x1ac))(param_1,&local_14);
  return;
}



// Function: FUN_00000bca at 00000bca
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bca(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != *(char *)(param_1 + 0x14)) {
    if (param_2._2_1_ != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 1;
      (**(code **)(*param_1 + 0x26c))();
    }
    (**(code **)(*param_1 + 0x1e0))();
    (**(code **)(*_DAT_000266a8 + 0x22c))();
    *(char *)(param_1 + 0x14) = param_2._0_1_;
  }
  return;
}



// Function: FUN_00000c22 at 00000c22
// Size: 8 bytes

void FUN_00000c22(void)

{
  return;
}



// Function: FUN_00000c2a at 00000c2a
// Size: 280 bytes

void FUN_00000c2a(int *param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  int *extraout_A0_01;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar3 = func_0x00003950(param_2,param_3);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x310))((short)param_1,(char)&local_24);
    local_14 = local_24;
    local_10 = local_20;
    local_c = local_1c;
    local_8 = local_18;
    for (cVar3 = '\0'; cVar3 < '\x02'; cVar3 = cVar3 + '\x01') {
      if (*(char *)((int)param_1 + (short)cVar3 + 0x42) == '\x01') {
        func_0x00003980((char)param_2,(short)auStack_34);
        puVar6 = auStack_34;
        uVar5 = 0xa8;
        func_0x000038a8((short)puVar6);
        iVar1 = *extraout_A0;
        func_0x00003980(param_3,(short)auStack_2c,(short)((uint)puVar6 >> 0x10));
        puVar6 = auStack_2c;
        uVar4 = 0xc6;
        func_0x000038a8((short)puVar6);
        iVar2 = *extraout_A0_00;
        func_0x00003918((short)&local_14,uVar4);
        func_0x000038a8(extraout_A0b,(short)((uint)puVar6 >> 0x10),uVar5);
        *extraout_A0_01 = (iVar2 - iVar1) + *extraout_A0_01;
      }
    }
    (**(code **)(*param_1 + 0x1cc))((short)param_1,(char)&local_14);
    cVar3 = func_0x00003950((char)&local_24,(short)&local_14);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x1ac))((char)param_1,(short)&local_14);
    }
  }
  return;
}



// Function: FUN_00000d42 at 00000d42
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d42(int *param_1)

{
  (**(code **)(*param_1 + 0x2f8))();
  (**(code **)(*param_1 + 0x1e0))();
  DAT_00025810 = 1;
  _DAT_00025812 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e00 at 00000e00
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e10 at 00000e10
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e10(void)

{
  int unaff_A6;
  
  func_0x00001bf0(*(undefined4 *)(unaff_A6 + -0x4a));
  func_0x00007258(unaff_A6 + -0xc2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000f04 at 00000f04
// Size: 8 bytes

void FUN_00000f04(void)

{
  return;
}



// Function: FUN_00000f0c at 00000f0c
// Size: 8 bytes

void FUN_00000f0c(void)

{
  return;
}



// Function: FUN_00000f14 at 00000f14
// Size: 8 bytes

void FUN_00000f14(void)

{
  return;
}



// Function: FUN_00000f1c at 00000f1c
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000f76 at 00000f76
// Size: 8 bytes

void FUN_00000f76(void)

{
  return;
}



// Function: FUN_00000f7e at 00000f7e
// Size: 286 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f7e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 *extraout_A0;
  undefined2 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x310))(uVar2,(char)auStack_24);
  local_14 = *param_4;
  local_10 = param_4[1];
  local_c = param_4[2];
  local_8 = param_4[3];
  func_0x00003938((short)&local_14,(short)((int)param_1 + 0x2a));
  cVar1 = func_0x00003950((short)&local_14,(short)auStack_24);
  if (cVar1 != '\0') {
    func_0x00003918((short)&local_14);
    *(undefined4 *)((int)param_1 + 0x2a) = *extraout_A0;
    *(undefined4 *)((int)param_1 + 0x2e) = extraout_A0[1];
    func_0x00003980((short)&local_14,(short)&local_2c);
    *(undefined4 *)((int)param_1 + 0x32) = local_2c;
    *(undefined4 *)((int)param_1 + 0x36) = local_28;
    (**(code **)(*param_1 + 0x1e0))();
    (**(code **)(*param_1 + 500))();
    (**(code **)(*_DAT_000266a8 + 0x22c))();
    if (param_5._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x1b0))(uVar2,(short)auStack_24,(char)&local_14);
    }
    (**(code **)(*param_1 + 0x1b4))(uVar2,(short)auStack_24,(short)&local_14);
    if (*(int *)((int)param_1 + 0x1e) != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x1d4))
                ((short)*(int **)((int)param_1 + 0x1e),uVar2,(short)auStack_24,(short)&local_14);
    }
  }
  return;
}



// Function: FUN_0000109c at 0000109c
// Size: 90 bytes

void FUN_0000109c(int param_1,int *param_2)

{
  int local_c;
  int local_8;
  
  local_c = *param_2;
  local_8 = param_2[1];
  if (*(short *)(param_1 + 0x92) < local_8) {
    local_8 = (int)*(short *)(param_1 + 0x92);
  }
  if (*(short *)(param_1 + 0x90) < local_c) {
    local_c = (int)*(short *)(param_1 + 0x90);
  }
  FUN_00000b6c(param_1,&local_c);
  return;
}



// Function: FUN_000010f6 at 000010f6
// Size: 594 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000010f6(int *param_1)

{
  short sVar1;
  char cVar3;
  int iVar2;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  short *psVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  short local_6a [3];
  short local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined1 auStack_5a [52];
  undefined2 local_26;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  func_0x00004e98((char)param_1);
  cVar3 = (**(code **)(*param_1 + 0x1d8))();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x2fc))();
    (**(code **)(*extraout_A0 + 0x304))((short)extraout_A0,(short)&local_14);
    uVar8 = 0x54;
    (**(code **)(*param_1 + 0x164))(param_1,&local_14);
    piVar7 = &local_14;
    iVar2 = func_0x00003978((short)piVar7);
    sVar1 = (short)((iVar2 + 0x27) / 0x28) + 1;
    sVar4 = sVar1 * 0x28;
    iVar2 = func_0x00003978((short)&local_14,(short)((uint)piVar7 >> 0x10),uVar8);
    local_6a[0] = (short)((iVar2 + 0x27) / 0x28) + 1;
    sVar5 = local_6a[0] * 0x28;
    *(short *)(_DAT_0002884c + 0x17e) = (short)((local_10 + local_8) / 0x50);
    *(short *)(_DAT_0002884c + 0x180) = (short)((local_14 + local_c) / 0x50);
    *(short *)(_DAT_0002884c + 0x178) = (short)(local_10 / 0x28);
    *(short *)(_DAT_0002884c + 0x176) = (short)(local_14 / 0x28);
    local_6a[2] = sVar1 + *(short *)(_DAT_0002884c + 0x178);
    local_64 = 0x70;
    if (local_6a[2] < 0x71) {
      psVar6 = local_6a + 2;
    }
    else {
      psVar6 = &local_64;
    }
    *(short *)(_DAT_0002884c + 0x17c) = *psVar6;
    local_6a[0] = local_6a[0] + *(short *)(_DAT_0002884c + 0x176);
    local_6a[1] = 0x9c;
    if (local_6a[0] < 0x9d) {
      psVar6 = local_6a;
    }
    else {
      psVar6 = local_6a + 1;
    }
    *(short *)(_DAT_0002884c + 0x17a) = *psVar6;
    if ((sVar4 != _DAT_000150f8) || (sVar5 != _DAT_000150f6)) {
      local_5e = *(undefined2 *)(_DAT_0002884c + 0x17a);
      local_5c = *(undefined2 *)(_DAT_0002884c + 0x17c);
      local_62 = *(undefined2 *)(_DAT_0002884c + 0x176);
      local_60 = *(undefined2 *)(_DAT_0002884c + 0x178);
      uVar9 = (undefined2)((uint)&local_62 >> 0x10);
      _DAT_000150f6 = sVar5;
      _DAT_000150f8 = sVar4;
      func_0x00003b68((char)&local_62);
      _DAT_000140c4 = _DAT_000150f8;
      _DAT_000140c6 = _DAT_000150f6;
      func_0x00002358(uVar9);
      local_26 = 0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      local_20 = _DAT_00025f52;
      _DAT_00025f52 = auStack_5a;
      iVar2 = func_0x000076a8((short)auStack_5a);
      if (iVar2 == 0) {
        func_0x00002368();
        DAT_000150fa = 1;
        _DAT_00025f52 = local_20;
      }
      else {
        DAT_000150fa = 0;
      }
    }
  }
  return;
}



// Function: FUN_00001348 at 00001348
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001348(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  (**(code **)(*_DAT_00027fbc + 0x26c))();
  (**(code **)(*_DAT_00027fbc + 0x268))();
  FUN_00000c2a(param_1,param_2,param_3);
  return;
}



// Function: FUN_00001386 at 00001386
// Size: 166 bytes

void FUN_00001386(int *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  int local_c [2];
  
  func_0x00003980((char)param_2,(short)auStack_1c);
  puVar3 = auStack_1c;
  func_0x000038a8((short)puVar3);
  iVar1 = *extraout_A0;
  func_0x00003980(param_3,(char)auStack_14,(short)((uint)puVar3 >> 0x10));
  func_0x000038a8((char)auStack_14);
  local_c[0] = *extraout_A0_00 - iVar1;
  local_c[1] = 0;
  func_0x000038b8((char)param_1 + '*',(short)auStack_24,(char)local_c);
  uVar4 = (undefined2)((uint)auStack_24 >> 0x10);
  uVar2 = (undefined1)((uint)param_1 >> 0x10);
  (**(code **)(*param_1 + 0x1bc))((short)param_1,(char)auStack_24);
  FUN_00000c2a((short)param_1,param_2,param_3,uVar2,uVar4);
  return;
}



