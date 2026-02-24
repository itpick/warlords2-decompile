// Warlords II - Decompiled 68k Code
// Segment: CODE_048
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000052 at 00000052
// Size: 154 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000052(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_00001bf0(0);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
    *(undefined1 *)(param_1 + 0x9d) = 0;
    func_0x00004280(param_1,param_1 + 0x9d,1);
    *(undefined4 *)(param_1 + 0x94) = 0;
    uVar1 = FUN_00000108(param_1);
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    func_0x00004280(param_1,param_1 + 0x94,4);
  }
  *(int *)(param_1 + 0x94) = param_3 + *(int *)(param_1 + 0x94);
  if (param_3 + *(short *)(param_1 + 0x92) < 0x7f) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000108 at 00000108
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000108(void)

{
  int in_D0;
  int iVar1;
  int unaff_D4;
  int unaff_D5;
  int unaff_A2;
  int iVar2;
  int iStack00000004;
  undefined2 uStack00000008;
  
  iVar2 = unaff_D5 + in_D0;
  for (iVar1 = unaff_D4 - unaff_D5; 0x7e < iVar1; iVar1 = iVar1 + -0x7f) {
    uStack00000008 = 0x7f;
    iStack00000004 = iVar2;
    FUN_00000150();
    iVar2 = iVar2 + 0x7f;
  }
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_A2 + 0x92) = 0;
  return;
}



// Function: FUN_00000150 at 00000150
// Size: 78 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000150(int param_1)

{
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(undefined1 *)(param_1 + 0x9c) = 1;
    *(undefined1 *)(param_1 + 0x9d) = 0;
  }
  if (*(char *)(param_1 + 0x9d) != '\0') {
    FUN_00001bf0(0);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000001be at 000001be
// Size: 110 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001be(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
    if (*(char *)(param_1 + 0x166) == '\0') {
      uVar1 = 0x5732444d;
    }
    else {
      uVar1 = 0x57324447;
    }
  }
  else if (*(char *)(param_1 + 0x166) == '\0') {
    uVar1 = 0x57324444;
  }
  else {
    uVar1 = 0x57324442;
  }
  FUN_000003b8(uVar1,0x57324420);
  return;
}



// Function: FUN_0000022c at 0000022c
// Size: 98 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000022c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
    if (*(char *)(param_1 + 0x166) == '\0') {
      uVar1 = 0x5732444d;
    }
    else {
      uVar1 = 0x57324447;
    }
  }
  else if (*(char *)(param_1 + 0x166) == '\0') {
    uVar1 = 0x57324444;
  }
  else {
    uVar1 = 0x57324442;
  }
  *(undefined4 *)(param_2 + 0x4e) = uVar1;
  if (*(char *)(param_1 + 0x166) == '\0') {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x5a) = uVar2;
  return;
}



// Function: FUN_0000028e at 0000028e
// Size: 304 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000028e(int param_1,undefined2 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  func_0x00003d70((char)param_1,param_2,(short)param_3,(char)param_4);
  *param_3 = *param_3 + 0x196d2;
  if (*(char *)(param_1 + 0x166) != '\0') {
    *param_4 = *param_4 + 0x1a;
    if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
      *param_4 = *param_4 + 0x80;
    }
    if ((*(char *)(_DAT_000297f4 + 0x92) != '\0') || (*(char *)(_DAT_000297f4 + 0x91) != '\0')) {
      *param_4 = *param_4 + 0x1a;
    }
  }
  uVar5 = 1;
  uVar4 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x156) >> 0x10);
  func_0x00002810((short)*(undefined4 *)(param_1 + 0x156));
  uVar3 = (undefined2)((uint)extraout_A0 >> 0x10);
  iVar1 = (**(code **)(*extraout_A0 + 0x60))();
  *param_3 = iVar1 + 4 + *param_3;
  uVar2 = 0x2a;
  func_0x00002818((short)extraout_A0,uVar3,uVar4,uVar5);
  func_0x00002810(*(undefined4 *)(param_1 + 0x15a),uVar2);
  iVar1 = (**(code **)(*extraout_A0_00 + 0x60))();
  *param_3 = iVar1 + 4 + *param_3;
  func_0x00002818((short)extraout_A0_00);
  *param_3 = *param_3 + 0x2610;
  *param_3 = *param_3 + 2;
  func_0x00007578();
  if (extraout_A0_01 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x4000;
  }
  *param_3 = iVar1 + *param_3;
  if (*(char *)(param_1 + 0x166) != '\0') {
    *param_4 = *param_4 + 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000003b8 at 000003b8
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000003b8(void)

{
  int unaff_A3;
  int unaff_A6;
  
  FUN_00001c00();
  (**(code **)(**(int **)(unaff_A3 + 0x142) + 0xc0))(*(int **)(unaff_A3 + 0x142),unaff_A6 + -0x1cc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000057a at 0000057a
// Size: 542 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000057a(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined2 uVar2;
  undefined1 auStack_15c [256];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00003d80((short)param_1,(short)param_2);
  func_0x00007320(auStack_15c,0xe026);
  if (*(char *)(param_1 + 0x166) == '\0') {
    FUN_00001180((char)param_2);
  }
  else {
    FUN_000009a0((char)param_2);
    local_58 = 0;
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
      uVar2 = 0;
      FUN_00001e98(2);
      *(undefined2 *)*extraout_A0 = 1;
      func_0x00007310(0x25b76,0x5479,(short)((uint)extraout_A0 >> 0x10),uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = (undefined2)((uint)local_58 >> 0x10);
    func_0x00001d08((char)local_58);
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar2);
    if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
      (**(code **)(*param_2 + 0x160))();
      local_4e = 0;
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar1 = func_0x000076a8((short)auStack_4a);
      if (iVar1 == 0) {
        FUN_00001e98(99);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = (undefined2)((uint)local_4e >> 0x10);
      func_0x00001d08((char)local_4e);
      FUN_00001c10((short)((uint)local_14 >> 0x10),uVar2);
    }
    if ((*(char *)(_DAT_000297f4 + 0x92) != '\0') || (*(char *)(_DAT_000297f4 + 0x91) != '\0')) {
      local_5c = 0;
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar1 = func_0x000076a8((char)auStack_4a);
      if (iVar1 == 0) {
        uVar2 = 0;
        FUN_00001e98(2);
        *(undefined1 *)*extraout_A0_00 = *(undefined1 *)(_DAT_000297f4 + 0x91);
        func_0x00007310(0x25b76,0x5475,(short)((uint)extraout_A0_00 >> 0x10),uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar2 = (undefined2)((uint)local_5c >> 0x10);
      func_0x00001d08((char)local_5c);
      FUN_00001c10((short)((uint)local_14 >> 0x10),uVar2);
    }
  }
  return;
}



// Function: FUN_00000846 at 00000846
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000846(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5,
                 undefined4 param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,int *param_11)

{
  undefined1 uVar1;
  
  func_0x00003db0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11);
  if (param_2 == 0x13) {
    func_0x00007350(param_3,0x1e012);
    func_0x00007350(param_4,0x1e002);
  }
  else {
    if (*(char *)(_DAT_0002884c + 0x2f8d) == '\0') {
      if ((*(char *)(_DAT_000297f4 + 0x92) == '\0') && (*(char *)(_DAT_000297f4 + 0x91) == '\0')) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0x167) = uVar1;
    }
    else {
      *(bool *)(param_1 + 0x167) = *(char *)(param_1 + 0x166) == '\0';
    }
    if (*(char *)(param_1 + 0x167) == '\0') {
      *(undefined1 *)(param_1 + 0x166) = 1;
    }
    *param_5 = 0x5dc;
    *param_7 = 0x6de8;
    *param_11 = param_1;
  }
  return;
}



// Function: FUN_0000092a at 0000092a
// Size: 116 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000092a(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 extraout_A0;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  short sVar6;
  
  for (sVar2 = 0; uVar3 = (undefined2)((uint)param_1 >> 0x10), sVar2 < 8; sVar2 = sVar2 + 1) {
    sVar6 = sVar2;
    func_0x00003e28();
    uVar5 = 0;
    uVar4 = (undefined2)((uint)extraout_A0 >> 0x10);
    func_0x00002830((short)param_1,(short)extraout_A0,0x42c);
    func_0x00003e30(uVar3,uVar4,uVar5,sVar6);
  }
  func_0x00002d70();
  uVar1 = func_0x00002830((short)param_1,(short)_DAT_0002897c,0x4b0);
  if ((_DAT_00028952 == 0) && (uVar1 = 0, _DAT_00028974 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar1;
}



// Function: FUN_000009a0 at 000009a0
// Size: 952 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009a0(int *param_1)

{
  int iVar1;
  ushort *puVar2;
  short sVar3;
  short sVar4;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  int *extraout_A0_01;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  undefined4 extraout_A0_04;
  int extraout_A0_05;
  short *psVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 local_42e;
  undefined2 uVar8;
  undefined2 auStack_2ac [207];
  undefined4 local_10e;
  short local_10a [131];
  
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(_DAT_0002884c + 0x120) = 0;
  if (_DAT_0002883e != 0) {
    func_0x00004918();
    sVar4 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar3 = sVar4 + -1, sVar4 != 0) {
      iVar6 = sVar3 * 0x16 + _DAT_00028854;
      sVar4 = sVar3;
      if (*(char *)(_DAT_0002884c + 0x111) == *(char *)(iVar6 + 5)) {
        puVar2 = (ushort *)(iVar6 + 0xc);
        *puVar2 = *puVar2 & 0xfdff;
        psVar5 = (short *)(sVar3 * 0x16 + _DAT_00028854);
        if ((psVar5[9] == *psVar5) && (psVar5[10] == psVar5[1])) {
          psVar5[9] = -1;
          *(undefined2 *)(_DAT_00028854 + 0x14 + sVar3 * 0x16) = 0xffff;
        }
      }
    }
  }
  func_0x00002810((short)param_1);
  if (extraout_A0 != (int *)0x0) {
    uVar8 = SUB42(extraout_A0,0);
    if (_DAT_0002883e != 0) {
      func_0x00002830(uVar8,0x8834,2);
    }
    local_10a[0] = _DAT_00028836;
    func_0x00002830(uVar8,(short)local_10a,2);
    func_0x00002830(extraout_A0,0x27724,0x54);
    if (_DAT_0002883e != 0) {
      for (local_10a[0] = 0; local_10a[0] < 8; local_10a[0] = local_10a[0] + 1) {
        auStack_2ac[local_10a[0]] = *(undefined2 *)(local_10a[0] * 2 + _DAT_0002884c + 0x148);
        *(undefined2 *)(local_10a[0] * 2 + _DAT_0002884c + 0x148) = 1;
      }
    }
    func_0x00002830(uVar8,(short)_DAT_0002884c,0x2f8e);
    if (_DAT_0002883e != 0) {
      for (local_10a[0] = 0; local_10a[0] < 8; local_10a[0] = local_10a[0] + 1) {
        *(undefined2 *)(local_10a[0] * 2 + _DAT_0002884c + 0x148) = auStack_2ac[local_10a[0]];
      }
    }
    local_42e = (undefined2)((uint)extraout_A0 >> 0x10);
    func_0x00002830(uVar8,(short)_DAT_00028850,0x8880);
    func_0x00002830(extraout_A0,_DAT_00028854,22000);
    func_0x00002830(extraout_A0,_DAT_00028858,0x4440);
    func_0x00002d52(_DAT_00028860);
    _DAT_0002885c = extraout_A0_00;
    func_0x00002830(uVar8,(char)extraout_A0_00,0x4440);
    if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00002810((short)*(undefined4 *)(iVar1 + 0x156));
    local_10e = (**(code **)(*extraout_A0_01 + 0x60))();
    func_0x00001ea0((short)local_10e);
    func_0x00002820(extraout_A0_01,extraout_A0_02,local_10e);
    func_0x00002830(extraout_A0,&local_10e,4);
    uVar7 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    func_0x00002830(uVar8,(char)extraout_A0_02,local_10e);
    func_0x00002818((short)extraout_A0_01,local_42e,uVar7);
    FUN_00001d18(extraout_A0_02);
    func_0x00002810(*(undefined4 *)(iVar1 + 0x15a));
    if (extraout_A0_03 == (int *)0x0) {
      local_10e = 0;
      func_0x00002830(uVar8,(short)&local_10e,4);
    }
    else {
      local_10e = (**(code **)(*extraout_A0_03 + 0x60))();
      func_0x00001ea0((short)local_10e);
      func_0x00002820(extraout_A0_03,(short)extraout_A0_04,(short)local_10e);
      func_0x00002830(extraout_A0,&local_10e,4);
      func_0x00002830(extraout_A0,extraout_A0_04,local_10e);
      func_0x00002818((short)extraout_A0_03);
      FUN_00001d18((short)extraout_A0_04);
    }
    FUN_0000092a(extraout_A0);
    func_0x00007578();
    local_10a[0] = (short)(extraout_A0_05 != 0);
    func_0x00002830(uVar8,(short)local_10a,2);
    if (extraout_A0_05 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(_DAT_0002884c + 0x120) == 0) {
      (**(code **)(*param_1 + 0x160))();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(*extraout_A0 + 0x4c))();
  }
  return;
}



// Function: FUN_00001124 at 00001124
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001124(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001180 at 00001180
// Size: 1774 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001180(undefined2 param_1)

{
  undefined1 uVar5;
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar6;
  short sVar7;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  int *extraout_A0_01;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  short *psVar8;
  int extraout_A0_04;
  int extraout_A0_05;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  short sVar16;
  short sVar17;
  undefined1 auStack_8a [16];
  undefined1 auStack_7a [100];
  short local_16;
  short local_14;
  byte local_12;
  byte bStack_11;
  int local_a;
  short local_6;
  
  *(undefined2 *)(_DAT_0002884c + 0x120) = 0;
  func_0x00002810(param_1);
  if (extraout_A0 != (int *)0x0) {
    uVar5 = func_0x00002aa0();
    uVar14 = (undefined2)((uint)extraout_A0 >> 0x10);
    uVar15 = SUB42(extraout_A0,0);
    uVar1 = uVar14;
    (**(code **)(*extraout_A0 + 0xcc))();
    uVar4 = 0;
    uVar12 = 2;
    uVar2 = uVar14;
    (**(code **)(*extraout_A0 + 0xbc))(uVar15,0x7724,0x3a);
    func_0x00002aa0(uVar2,uVar12,uVar4,uVar1,uVar5);
    (**(code **)(*extraout_A0 + 0xcc))();
    (**(code **)(*extraout_A0 + 0xbc))(uVar15,0x7760,0x10);
    for (local_6 = 0; local_6 < 4; local_6 = local_6 + 1) {
      func_0x00002aa0();
      (**(code **)(*extraout_A0 + 0xcc))();
    }
    if (*(short *)(_DAT_0002884c + 0x2f8c) != 0) {
      *(short *)(_DAT_0002884c + 0x2f8c) = *(short *)(_DAT_0002884c + 0x110) + 1;
    }
    uVar2 = (undefined2)((uint)_DAT_0002884c >> 0x10);
    uVar5 = (undefined1)((uint)extraout_A0 >> 0x10);
    FUN_0000189a(uVar15,(char)_DAT_0002884c);
    func_0x00002aa0(uVar5,uVar2);
    (**(code **)(*extraout_A0 + 0xcc))();
    func_0x00002830(uVar15,(short)_DAT_00028850,0x8880);
    for (sVar6 = 0; sVar6 < 1000; sVar6 = sVar6 + 1) {
      iVar9 = sVar6 * 0x16 + _DAT_00028854;
      uVar5 = func_0x00002aa0();
      uVar2 = uVar14;
      (**(code **)(*extraout_A0 + 0xcc))();
      uVar5 = func_0x00002aa0(uVar2,uVar5);
      uVar1 = uVar14;
      (**(code **)(*extraout_A0 + 0xcc))();
      uVar12 = 0;
      iVar10 = iVar9 + 4;
      uVar2 = uVar14;
      (**(code **)(*extraout_A0 + 0xbc))(uVar15,(short)iVar10,8);
      uVar1 = func_0x00002aa0(uVar2,(short)((uint)iVar10 >> 0x10),uVar12,uVar1,uVar5);
      uVar2 = uVar14;
      (**(code **)(*extraout_A0 + 0xcc))();
      local_12 = (byte)(((*(uint *)(iVar9 + 0xf) & 0x7f000000) << 1) >> 0x18);
      iVar10 = ((uint)(*(int *)(iVar9 + 0xe) << 7) >> 0x1e) << 0x17;
      local_12 = local_12 | (byte)((uint)iVar10 >> 0x18);
      bStack_11 = (byte)((uint)iVar10 >> 0x10) |
                  (byte)((((uint)(*(int *)(iVar9 + 0xe) << 4) >> 0x1d) << 0x1c) >> 0x18) |
                  (byte)((uint)*(undefined4 *)(iVar9 + 0xe) >> 0x1c);
      func_0x00002aa0(uVar2,uVar1);
      (**(code **)(*extraout_A0 + 0xcc))();
      (**(code **)(*extraout_A0 + 0xbc))(extraout_A0,iVar9 + 0x10,2);
      uVar5 = func_0x00002aa0();
      uVar2 = uVar14;
      (**(code **)(*extraout_A0 + 0xcc))();
      func_0x00002aa0(uVar2,uVar5);
      (**(code **)(*extraout_A0 + 0xcc))();
    }
    func_0x00002830(uVar15,(short)_DAT_00028858,0x40);
    func_0x00002d52((short)_DAT_00028860);
    _DAT_0002885c = extraout_A0_00;
    func_0x00002830(uVar15,(short)extraout_A0_00,0x4440);
    if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar10 = *(int *)(_DAT_000297f4 + 0x80);
    func_0x00002810((short)*(undefined4 *)(iVar10 + 0x156));
    local_a = (**(code **)(*extraout_A0_01 + 0x60))();
    func_0x00001ea0((short)local_a);
    func_0x00002820((short)extraout_A0_01,(short)extraout_A0_02,(short)local_a);
    uVar2 = func_0x00002aa8((short)local_a);
    (**(code **)(*extraout_A0 + 0xd0))(uVar15,uVar2);
    func_0x00002830(extraout_A0,extraout_A0_02,(short)local_a);
    func_0x00002818((short)extraout_A0_01);
    uVar5 = 0x88;
    FUN_00001d18((short)extraout_A0_02);
    func_0x00002810((short)*(undefined4 *)(iVar10 + 0x15a),uVar5);
    local_a = (**(code **)(*extraout_A0_03 + 0x60))();
    uVar2 = (undefined2)((uint)extraout_A0_03 >> 0x10);
    uVar1 = SUB42(extraout_A0_03,0);
    if (0 < local_a) {
      func_0x00002820(uVar1,(short)&local_a,4);
    }
    uVar5 = func_0x00002aa8((char)local_a);
    (**(code **)(*extraout_A0 + 0xd0))(uVar15,uVar5);
    if (0 < local_a) {
      uVar5 = func_0x00002aa8((char)local_a);
      (**(code **)(*extraout_A0 + 0xd0))(uVar15,uVar5);
    }
    local_16 = 1;
    local_14 = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar8 = &local_16;
    }
    else {
      psVar8 = &local_14;
    }
    sVar6 = *psVar8;
    if (0xc9 < sVar6) {
      sVar6 = 0xc9;
    }
    for (local_6 = 1; (int)local_6 <= sVar6 + -1; local_6 = local_6 + 1) {
      (**(code **)(*extraout_A0_03 + 0x84))();
      func_0x00002aa0();
      (**(code **)(*extraout_A0 + 0xcc))();
      for (sVar7 = 0; sVar7 < 0x18; sVar7 = sVar7 + 1) {
        (**(code **)(*extraout_A0_03 + 0x84))();
        func_0x00002aa0();
        (**(code **)(*extraout_A0 + 0xcc))();
      }
      sVar7 = *(short *)(_DAT_0002884c + 0x15c2);
      if ((*(short *)(_DAT_0002884c + 0x15c2) != 0) &&
         ((int)*(short *)(_DAT_0002884c + 0x15c2) / 2 ==
          (*(short *)(_DAT_0002884c + 0x15c2) + -1) / 2)) {
        sVar7 = sVar7 + 1;
      }
      sVar16 = sVar7 >> 0xf;
      uVar5 = (undefined1)((uint)auStack_7a >> 0x10);
      uVar13 = uVar2;
      sVar17 = sVar16;
      (**(code **)(*extraout_A0_03 + 0x74))(uVar1,(short)auStack_7a,(char)sVar7);
      puVar11 = auStack_7a;
      uVar4 = uVar14;
      (**(code **)(*extraout_A0 + 0xbc))(uVar15,(short)puVar11,sVar7);
      uVar12 = uVar2;
      sVar3 = (**(code **)(*extraout_A0_03 + 0x84))();
      func_0x00002aa0(uVar12,uVar4,(short)((uint)puVar11 >> 0x10),sVar16,uVar13,uVar5,sVar17);
      (**(code **)(*extraout_A0 + 0xcc))();
      for (sVar7 = 0; sVar7 < sVar3; sVar7 = sVar7 + 1) {
        (**(code **)(*extraout_A0_03 + 0x78))();
        (**(code **)(*extraout_A0 + 0xc0))();
        (**(code **)(*extraout_A0_03 + 0x78))();
        (**(code **)(*extraout_A0 + 0xc0))();
        (**(code **)(*extraout_A0_03 + 0x84))();
        uVar4 = func_0x00002aa0();
        uVar12 = uVar14;
        (**(code **)(*extraout_A0 + 0xcc))();
        (**(code **)(*extraout_A0_03 + 0x84))();
        func_0x00002aa0(uVar12,uVar4);
        (**(code **)(*extraout_A0 + 0xcc))();
        (**(code **)(*extraout_A0_03 + 0x74))(uVar1,(short)auStack_8a,0x10);
        (**(code **)(*extraout_A0 + 0xbc))(extraout_A0,auStack_8a,0x10);
      }
    }
    func_0x00002818(uVar1);
    for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
      func_0x00003e28();
      for (sVar7 = 0; sVar7 < 0x2b; sVar7 = sVar7 + 1) {
        func_0x00002aa0();
        (**(code **)(*extraout_A0 + 0xcc))();
      }
      uVar1 = 0;
      uVar5 = (undefined1)((uint)(extraout_A0_04 + 0x56) >> 0x10);
      uVar2 = uVar14;
      (**(code **)(*extraout_A0 + 0xbc))(uVar15,(short)(extraout_A0_04 + 0x56),0xf4);
      func_0x00002aa0(uVar2,uVar5,uVar1);
      (**(code **)(*extraout_A0 + 0xcc))();
      for (local_6 = 0; local_6 < 0xb8; local_6 = local_6 + 1) {
        func_0x00002aa0();
        (**(code **)(*extraout_A0 + 0xcc))();
      }
      for (local_6 = 0; local_6 < 0x38; local_6 = local_6 + 1) {
        func_0x00002aa0();
        (**(code **)(*extraout_A0 + 0xcc))();
      }
      func_0x00003e30();
    }
    func_0x00002d70();
    func_0x00002830(uVar15,(short)_DAT_0002897c,0xb0);
    if ((_DAT_00028952 == 0) && (_DAT_00028974 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00007578();
    local_6 = (short)(extraout_A0_05 != 0);
    func_0x00002830(uVar15,(short)&local_6,2);
    if (extraout_A0_05 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00002818(uVar15);
  }
  return;
}



// Function: FUN_0000189a at 0000189a
// Size: 854 bytes

void FUN_0000189a(int *param_1,int param_2)

{
  undefined1 uVar4;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 uVar12;
  
  uVar12 = (undefined2)((uint)param_1 >> 0x10);
  FUN_00001bf0((char)param_1);
  uVar10 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0xbc))(uVar10,(short)param_2,0xa0);
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  (**(code **)(*param_1 + 0xbc))(uVar10,(short)(param_2 + 0x100),0x10);
  for (sVar5 = 0; sVar5 < 0x12; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  (**(code **)(*param_1 + 0xc0))();
  for (sVar5 = 0; sVar5 < 0x27; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    uVar4 = func_0x00002aa0();
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar4);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar1 = func_0x00002aa0(uVar8,uVar2);
    uVar9 = 0x72;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar4 = 0x8a;
    uVar2 = uVar12;
    (**(code **)(*param_1 + 0xc0))(uVar10,uVar8,uVar1);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xc0))(uVar10,uVar2,uVar9);
    uVar2 = func_0x00002aa0(uVar8,uVar4);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    func_0x00002aa0(uVar8,uVar2);
    (**(code **)(*param_1 + 0xcc))();
  }
  (**(code **)(*param_1 + 0xbc))(uVar10,(short)(param_2 + 0x224),0x20);
  for (sVar5 = 0; sVar5 < 0x50; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  uVar2 = 0;
  iVar11 = param_2 + 0x5e4;
  uVar8 = uVar12;
  (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,0x2c);
  func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar2);
  (**(code **)(*param_1 + 0xcc))();
  for (sVar5 = 0; sVar5 < 0x28; sVar5 = sVar5 + 1) {
    uVar4 = func_0x00002aa0();
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar1 = func_0x00002aa0(uVar8,uVar4);
    uVar2 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar3 = 0;
    iVar11 = sVar5 * 0x20 + param_2 + 0x816;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,0x17);
    uVar2 = func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar3,uVar2,uVar1);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    func_0x00002aa0(uVar8,uVar2);
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 0x16; sVar5 = sVar5 + 1) {
    uVar2 = 0;
    iVar11 = sVar5 * 0x1e + param_2 + 0xd12;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,0x17);
    uVar2 = func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    func_0x00002aa0(uVar8,uVar2);
    (**(code **)(*param_1 + 0xcc))();
  }
  (**(code **)(*param_1 + 0xbc))(uVar10,(short)(param_2 + 0xfa6),0xa0);
  for (sVar5 = 0; sVar5 < 10; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 100; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    uVar4 = func_0x00002aa0();
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar4);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    func_0x00002aa0(uVar8,uVar2);
    (**(code **)(*param_1 + 0xcc))();
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
      for (sVar7 = 0; sVar7 < 5; sVar7 = sVar7 + 1) {
        func_0x00002aa0();
        (**(code **)(*param_1 + 0xcc))();
      }
    }
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    uVar2 = 0;
    iVar11 = sVar5 * 0x2c + param_2 + 0x1422;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,3);
    uVar2 = func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar2 = func_0x00002aa0(uVar8,uVar2);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    func_0x00002aa0(uVar8,uVar2);
    (**(code **)(*param_1 + 0xcc))();
    (**(code **)(*param_1 + 0xbc))(uVar10,sVar5 * 0x2c + (short)param_2 + 0x142e,0x20);
  }
  uVar2 = 0;
  iVar11 = param_2 + 0x1582;
  uVar8 = uVar12;
  (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,0x40);
  func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar2);
  (**(code **)(*param_1 + 0xcc))();
  for (sVar5 = 0; sVar5 < 100; sVar5 = sVar5 + 1) {
    uVar4 = func_0x00002aa0();
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar1 = func_0x00002aa0(uVar8,uVar4);
    uVar2 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar3 = 0;
    iVar11 = sVar5 * 0x42 + param_2 + 0x15c8;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,0x26);
    uVar1 = func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar3,uVar2,uVar1);
    uVar2 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar3 = 0;
    iVar11 = sVar5 * 0x42 + param_2 + 0x15f0;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xbc))(uVar10,(short)iVar11,5);
    uVar4 = func_0x00002aa0(uVar8,(short)((uint)iVar11 >> 0x10),uVar3,uVar2,uVar1);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar4 = func_0x00002aa0(uVar8,uVar4);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar1 = func_0x00002aa0(uVar8,uVar4);
    uVar9 = 0xea;
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar4 = 6;
    uVar2 = uVar12;
    (**(code **)(*param_1 + 0xc0))(uVar10,uVar8,uVar1);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xc0))(uVar10,uVar2,uVar9);
    uVar2 = func_0x00002aa0(uVar8,uVar4);
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar1 = func_0x00002aa0(uVar8,uVar2);
    uVar2 = uVar12;
    (**(code **)(*param_1 + 0xcc))();
    uVar3 = func_0x00002aa0();
    uVar8 = uVar12;
    (**(code **)(*param_1 + 0xcc))(uVar10,uVar2,uVar1);
    func_0x00002aa0();
    (**(code **)(*param_1 + 0xcc))(uVar10,uVar8,uVar3);
  }
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 16 bytes

void FUN_00001bf0(void)

{
  short unaff_D3w;
  short sVar1;
  short sVar2;
  short sVar3;
  int *unaff_A2;
  char in_NF;
  char in_VF;
  
  while (in_VF != in_NF) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xc0))();
    (**(code **)(*unaff_A2 + 0xc0))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    in_NF = (short)(unaff_D3w + -7) < 0;
    in_VF = SBORROW2(unaff_D3w + 1,8);
    unaff_D3w = unaff_D3w + 1;
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  for (sVar1 = 0; sVar1 < 0x50; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar1 = 0; sVar1 < 0x28; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 0x16; sVar1 = sVar1 + 1) {
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  for (sVar1 = 0; sVar1 < 10; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 100; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      for (sVar3 = 0; sVar3 < 5; sVar3 = sVar3 + 1) {
        func_0x00002aa0();
        (**(code **)(*unaff_A2 + 0xcc))();
      }
    }
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar1 = 0; sVar1 < 100; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xc0))();
    (**(code **)(*unaff_A2 + 0xc0))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  return;
}



// Function: FUN_00001c00 at 00001c00
// Size: 16 bytes

void FUN_00001c00(void)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *in_A0;
  int *unaff_A2;
  undefined2 uStack00000008;
  
  (**(code **)(*in_A0 + 0xbc))();
  for (sVar2 = 0; uStack00000008 = SUB42(unaff_A2,0), uVar1 = uStack00000008, sVar2 < 0x50;
      sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1c1e;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  uStack00000008 = 0;
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar2 = 0; sVar2 < 0x28; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1c86;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar2 = 0; sVar2 < 0x16; sVar2 = sVar2 + 1) {
    uStack00000008 = 0;
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  uStack00000008 = 0;
  (**(code **)(*unaff_A2 + 0xbc))();
  for (sVar2 = 0; sVar2 < 10; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1df4;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar2 = 0; sVar2 < 100; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1e26;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1e58;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1e8a;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x1ebc;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      for (sVar4 = 0; sVar4 < 5; sVar4 = sVar4 + 1) {
        uStack00000008 = 0x1fb0;
        func_0x00002aa0();
        uStack00000008 = uVar1;
        (**(code **)(*unaff_A2 + 0xcc))();
      }
    }
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    uStack00000008 = 0;
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
  }
  uStack00000008 = 0;
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar2 = 0; sVar2 < 100; sVar2 = sVar2 + 1) {
    uStack00000008 = 0x20f8;
    func_0x00002aa0();
    uStack00000008 = uVar1;
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xc0))();
    (**(code **)(*unaff_A2 + 0xc0))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 263 bytes

void FUN_00001c10(void)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short unaff_D3w;
  short sVar4;
  short sVar5;
  short sVar6;
  int *unaff_A2;
  int unaff_A3;
  undefined2 *unaff_A4;
  short sStack00000006;
  undefined2 uStack00000008;
  undefined2 uStack0000000a;
  
  for (; uStack00000008 = SUB42(unaff_A2,0), uVar3 = uStack00000008,
      sStack00000006 = (short)((uint)unaff_A2 >> 0x10), uVar2 = sStack00000006, unaff_D3w < 0x50;
      unaff_D3w = unaff_D3w + 1) {
    uStack0000000a = *unaff_A4;
    sStack00000006 = 0;
    uStack00000008 = 0x1c1e;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
    unaff_A4 = unaff_A4 + 1;
  }
  uStack00000008 = 0;
  uStack0000000a = 0x22c;
  sVar1 = (short)unaff_A3;
  sStack00000006 = sVar1 + 0x5e4;
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar4 = 0; sVar4 < 0x28; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(sVar4 * 0x20 + unaff_A3 + 0x812);
    sStack00000006 = 0;
    uStack00000008 = 0x1c86;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar4 = 0; sVar4 < 0x16; sVar4 = sVar4 + 1) {
    uStack00000008 = 0;
    uStack0000000a = 0x17;
    sStack00000006 = sVar4 * 0x1e + sVar1 + 0xd12;
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  uStack00000008 = 0;
  uStack0000000a = 0xa0;
  sStack00000006 = (short)(unaff_A3 + 0xfa6);
  (**(code **)(*unaff_A2 + 0xbc))();
  for (sVar4 = 0; sVar4 < 10; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(&DAT_00001046 + sVar4 * 2 + unaff_A3);
    sStack00000006 = 0;
    uStack00000008 = 0x1df4;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar4 = 0; sVar4 < 100; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(&DAT_0000105a + sVar4 * 2 + unaff_A3);
    sStack00000006 = 0;
    uStack00000008 = 0x1e26;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(sVar4 * 2 + unaff_A3 + 0x1122);
    sStack00000006 = 0;
    uStack00000008 = 0x1e58;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(sVar4 * 2 + unaff_A3 + 0x1132);
    sStack00000006 = 0;
    uStack00000008 = 0x1e8a;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(&DAT_00001142 + sVar4 * 0xc + unaff_A3);
    sStack00000006 = 0;
    uStack00000008 = 0x1ebc;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
      for (sVar6 = 0; sVar6 < 5; sVar6 = sVar6 + 1) {
        uStack0000000a = *(undefined2 *)(sVar6 * 2 + sVar5 * 10 + sVar4 * 0x50 + unaff_A3 + 0x11a2);
        sStack00000006 = 0;
        uStack00000008 = 0x1fb0;
        uStack0000000a = func_0x00002aa0();
        sStack00000006 = uVar2;
        uStack00000008 = uVar3;
        (**(code **)(*unaff_A2 + 0xcc))();
      }
    }
  }
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    uStack00000008 = 0;
    uStack0000000a = 3;
    sStack00000006 = sVar4 * 0x2c + sVar1 + 0x1422;
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
  }
  uStack00000008 = 0;
  uStack0000000a = 0x40;
  sStack00000006 = sVar1 + 0x1582;
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar4 = 0; sVar4 < 100; sVar4 = sVar4 + 1) {
    uStack0000000a = *(undefined2 *)(sVar4 * 0x42 + unaff_A3 + 0x15c4);
    sStack00000006 = 0;
    uStack00000008 = 0x20f8;
    uStack0000000a = func_0x00002aa0();
    sStack00000006 = uVar2;
    uStack00000008 = uVar3;
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xc0))();
    (**(code **)(*unaff_A2 + 0xc0))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  return;
}



// Function: FUN_00001d18 at 00001d18
// Size: 385 bytes

void FUN_00001d18(void)

{
  short unaff_D3w;
  short sVar1;
  short sVar2;
  short sVar3;
  int *in_A0;
  int *unaff_A2;
  
  while( true ) {
    (**(code **)(*in_A0 + 0xcc))();
    unaff_D3w = unaff_D3w + 1;
    if (0x27 < unaff_D3w) break;
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    in_A0 = unaff_A2;
  }
  for (sVar1 = 0; sVar1 < 0x16; sVar1 = sVar1 + 1) {
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  for (sVar1 = 0; sVar1 < 10; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 100; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      for (sVar3 = 0; sVar3 < 5; sVar3 = sVar3 + 1) {
        func_0x00002aa0();
        (**(code **)(*unaff_A2 + 0xcc))();
      }
    }
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar1 = 0; sVar1 < 100; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xc0))();
    (**(code **)(*unaff_A2 + 0xc0))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  return;
}



// Function: FUN_00001e98 at 00001e98
// Size: 1059 bytes

void FUN_00001e98(void)

{
  short unaff_D3w;
  short sVar1;
  short sVar2;
  short sVar3;
  code *in_A1;
  int *unaff_A2;
  
  while( true ) {
    (*in_A1)();
    unaff_D3w = unaff_D3w + 1;
    if (7 < unaff_D3w) break;
    func_0x00002aa0();
    in_A1 = *(code **)(*unaff_A2 + 0xcc);
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      for (sVar3 = 0; sVar3 < 5; sVar3 = sVar3 + 1) {
        func_0x00002aa0();
        (**(code **)(*unaff_A2 + 0xcc))();
      }
    }
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
  }
  (**(code **)(*unaff_A2 + 0xbc))();
  func_0x00002aa0();
  (**(code **)(*unaff_A2 + 0xcc))();
  for (sVar1 = 0; sVar1 < 100; sVar1 = sVar1 + 1) {
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xbc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    (**(code **)(*unaff_A2 + 0xc0))();
    (**(code **)(*unaff_A2 + 0xc0))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
    func_0x00002aa0();
    (**(code **)(*unaff_A2 + 0xcc))();
  }
  return;
}



// Function: FUN_000022bc at 000022bc
// Size: 100 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000022bc(int param_1,undefined4 param_2,int param_3)

{
  if (*(char *)(param_1 + 0x12) == '\0') {
    func_0x000046e0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined2 *)(param_1 + 0x814) = 0;
  }
  if (param_3 + *(short *)(param_1 + 0x814) < 0x800) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



