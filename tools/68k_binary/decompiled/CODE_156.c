// Warlords II - Decompiled 68k Code
// Segment: CODE_156
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000016 at 00000016
// Size: 82 bytes

int FUN_00000016(int param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x42) == '\0') {
    iVar1 = -1;
  }
  else {
    *param_3 = *(undefined4 *)(param_1 + 0x3e);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x364))
                      ((short)*(int **)(param_1 + 0x48),param_2,*param_3);
    if (iVar1 < 0) {
      func_0x00001c10();
    }
  }
  return iVar1;
}



// Function: FUN_00000068 at 00000068
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000068(int *param_1)

{
  int iVar1;
  undefined2 extraout_A0w;
  undefined2 uStack_4c;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xe0))();
    _DAT_00025f52 = local_10;
    uStack_4c = extraout_A0w;
  }
  else {
    uStack_4c = (undefined2)param_1[0x11];
    if (local_14 == 0) {
      local_14 = 0x82000a;
    }
    if (_DAT_000266a8 != (int *)0x0) {
      (**(code **)(*_DAT_000266a8 + 0x270))();
    }
  }
  (**(code **)(*param_1 + 0x100))((short)param_1,uStack_4c,0);
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}



// Function: FUN_0000011e at 0000011e
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000011e(int param_1)

{
  int extraout_A0;
  int iVar1;
  
  (**(code **)(*_DAT_000266a8 + 0x260))();
  iVar1 = extraout_A0;
  if (extraout_A0 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  func_0x00000e08(iVar1);
  return;
}



// Function: FUN_00000156 at 00000156
// Size: 390 bytes

void FUN_00000156(int *param_1,int *param_2,int param_3)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined2 local_7c;
  int local_68 [25];
  
  if (param_1[0x14] != 0) {
    sVar1 = (**(code **)(*(int *)param_1[0x14] + 0x184))();
    if (sVar1 == 0) {
      piVar4 = (int *)param_1[0x14];
    }
    else {
      (**(code **)(**(int **)(param_1[0x14] + 0x22) + 0x98))();
      piVar4 = extraout_A0;
    }
    func_0x00004b40((char)local_68,(char)piVar4);
    func_0x00004b48((short)local_68);
    piVar3 = extraout_A0_00;
    while( true ) {
      cVar2 = (**(code **)(local_68[0] + 8))();
      if (cVar2 == '\0') break;
      (**(code **)(*piVar3 + 0x26c))();
      (**(code **)(*piVar4 + 0x178))((short)piVar4,(char)piVar3);
      cVar2 = (**(code **)(*(int *)param_1[0x14] + 0x338))();
      if (cVar2 != '\0') {
        (**(code **)(*piVar3 + 0x198))();
      }
      func_0x00004b50((char)local_68);
      piVar3 = extraout_A0_01;
    }
    local_7c = (undefined2)((uint)param_2 >> 0x10);
    (**(code **)(*piVar4 + 0x174))((char)piVar4,(char)param_2);
    cVar2 = (**(code **)(*(int *)param_1[0x14] + 0x338))();
    if (cVar2 != '\0') {
      (**(code **)(*param_2 + 0x194))();
    }
    uVar8 = 0x5a;
    (**(code **)(*param_2 + 0x1c4))();
    uVar7 = local_7c;
    (**(code **)(*param_2 + 0x294))();
    (**(code **)(*param_2 + 0x26c))();
    uVar6 = (undefined2)((uint)param_1[0x14] >> 0x10);
    piVar4 = (int *)param_1[0x14];
    uVar5 = (undefined2)((uint)piVar4 >> 0x10);
    (**(code **)(*piVar4 + 0x3b4))((short)piVar4,(short)param_1[0x14]);
    *(bool *)(param_1 + 0x15) = param_2 == (int *)param_1[0x11];
    func_0x00002798((short)local_68,uVar5,uVar6,local_7c,uVar7,uVar8);
  }
  (**(code **)(*param_2 + 0x70))();
  (**(code **)(*param_1 + 0x20))((short)param_1,0x24,(short)param_1);
  param_1[0x12] = (int)param_2;
  param_1[0x13] = param_3;
  return;
}



// Function: FUN_000002dc at 000002dc
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000002dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000030e at 0000030e
// Size: 8 bytes

void FUN_0000030e(void)

{
  return;
}



// Function: FUN_00000316 at 00000316
// Size: 334 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000316(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 extraout_A0b;
  undefined4 extraout_A0;
  undefined4 *extraout_A0_00;
  undefined2 uVar3;
  undefined1 uStack_4e;
  undefined1 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_30;
  undefined4 local_2c;
  short local_28;
  short local_26;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [8];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x00004bc0(param_1,param_2);
  if (param_1[0x20] != 0) {
    if (*(char *)((int)param_1 + 0x7d) == '\0') {
      if (DAT_000262f2 == '\0') {
        iVar1 = *(int *)param_1[0x20];
        local_c = *(undefined2 *)(iVar1 + 2);
        local_a = *(undefined2 *)(iVar1 + 4);
        local_8 = *(undefined2 *)(iVar1 + 6);
        local_6 = *(undefined2 *)(iVar1 + 8);
        func_0x000072b8(&local_c,&local_28);
        local_1c = (int)local_28;
        local_18 = (int)local_26;
        piVar6 = &local_1c;
        puVar5 = &local_30;
        func_0x00003918((short)param_2);
        uVar3 = (undefined2)((uint)extraout_A0 >> 0x10);
        func_0x000038b8((char)extraout_A0,puVar5,piVar6);
        func_0x00003918((short)param_2,uVar3);
        *extraout_A0_00 = local_30;
        extraout_A0_00[1] = local_2c;
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x1d8))();
      if (cVar2 != '\0') {
        func_0x00001df8(0x25ca0);
        if (*(int *)((int)param_1 + 0x1e) != 0) {
          (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x310))
                    (*(int **)((int)param_1 + 0x1e),param_2);
          (**(code **)(*param_1 + 0x164))((char)param_1,(char)param_2);
        }
        (**(code **)(*param_1 + 0x148))((char)param_1,param_2,auStack_14);
        iVar1 = param_1[0x20];
        uVar3 = (undefined2)((uint)iVar1 >> 0x10);
        uStack_4e = (undefined1)((uint)iVar1 >> 8);
        uVar4 = (undefined1)iVar1;
        func_0x000075d0();
        if (CONCAT31(CONCAT21(uVar3,uStack_4e),uVar4) < 32000) {
          func_0x00007258((char)auStack_14);
          func_0x00007258((char)auStack_14,extraout_A0b);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return;
}



// Function: FUN_000004c4 at 000004c4
// Size: 242 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004c4(int param_1)

{
  undefined1 uVar2;
  int iVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 uVar3;
  undefined1 local_52 [4];
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(short *)(param_1 + 0x7e) != *(short *)(_DAT_000264b2 + 0x36)) {
    func_0x00001d08((char)*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = extraout_A0;
    uVar2 = FUN_000002dc(0x4354,(short)local_52);
    *(undefined1 *)(param_1 + 0x7c) = uVar2;
    uVar2 = FUN_000002dc(0x5854,(short)local_52);
    *(undefined1 *)(param_1 + 0x7d) = uVar2;
    if ((*(char *)(param_1 + 0x7c) != '\0') || (*(char *)(param_1 + 0x7d) != '\0')) {
      local_4e = 0;
      func_0x00001e98(0);
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      local_4e = extraout_A0_00;
      iVar1 = func_0x000076a8((short)auStack_4a);
      if (iVar1 == 0) {
        func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = (undefined2)((uint)local_4e >> 0x10);
      func_0x00001d08((char)local_4e);
      *(undefined4 *)(param_1 + 0x80) = 0;
      func_0x00001c10((short)((uint)local_14 >> 0x10),uVar3);
    }
  }
  return;
}



// Function: FUN_00000600 at 00000600
// Size: 414 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000600(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_62 [5];
  undefined1 local_5d;
  undefined4 local_5c;
  char local_53;
  undefined4 local_52 [2];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_53 = '\0';
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x39c))();
    if (*(char *)((int)param_1 + 0x7d) != '\0') {
      func_0x00001df8(0x25cac);
      (**(code **)(*param_1 + 0x30c))(param_1,local_52);
      local_53 = 1;
      local_5d = func_0x00007398(param_1[0x20]);
      iVar1 = param_1[0x20];
      func_0x000075d0(iVar1);
      func_0x00001db8(*(undefined4 *)param_1[0x20],iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x1f) != '\0') {
      if (DAT_000262f2 == '\0') {
        func_0x000072b8(*(int *)param_1[0x20] + 2,local_62);
        local_5c = CONCAT22(_DAT_00025b56,_DAT_00025b58);
        local_52[0] = local_5c;
      }
      else {
        (**(code **)(*param_1 + 0x30c))(param_1,local_52);
      }
      func_0x00007258(local_52,param_1[0x20]);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)((int)param_1 + 0x7e) != *(short *)(_DAT_000264b2 + 0x36)) {
      (**(code **)(*param_1 + 0x284))(param_1,local_52);
      *(undefined2 *)((int)param_1 + 0x7e) = *(undefined2 *)(_DAT_000264b2 + 0x36);
      *(undefined1 *)(_DAT_000264b2 + 0x54) = 1;
    }
    _DAT_00025f52 = local_10;
  }
  else if (local_53 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00004c98(param_1,param_2);
  return;
}



// Function: FUN_000007b2 at 000007b2
// Size: 98 bytes

void FUN_000007b2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  
  func_0x00003980(param_3,auStack_c);
  func_0x00003980(param_2,auStack_14,auStack_c);
  cVar1 = func_0x000038e0(auStack_14);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1c4))();
    if (param_4._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x26c))();
    }
  }
  return;
}



// Function: FUN_00000814 at 00000814
// Size: 8 bytes

void FUN_00000814(void)

{
  return;
}



// Function: FUN_0000081c at 0000081c
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000081c(int *param_1)

{
  (**(code **)(*param_1 + 0x1a4))(param_1,*(undefined4 *)(_DAT_000264b2 + 0x50));
  (**(code **)(*param_1 + 0x4c))();
  return;
}



// Function: FUN_0000084a at 0000084a
// Size: 312 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000084a(int *param_1,undefined4 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 **ppuVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 *local_6e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar5 = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  local_6e = auStack_4a;
  iVar3 = func_0x000076a8();
  ppuVar6 = (undefined1 **)&stack0xffffff96;
  if (iVar3 == 0) {
    if (param_3 == 0x54455854) {
      uVar7 = (undefined2)((uint)param_1[0x20] >> 0x10);
      uVar8 = (undefined2)param_1[0x20];
      func_0x000075d0();
      ppuVar6 = &local_6e;
      iVar5 = CONCAT22(uVar7,uVar8);
      if (param_2 != (undefined4 *)0x0) {
        func_0x00001ec0((short)param_2,uVar8);
        puVar1 = *(undefined1 **)param_1[0x20];
        puVar2 = (undefined1 *)*param_2;
        for (iVar3 = iVar5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        ppuVar6 = &local_6e;
      }
    }
    else if (param_3 == 0x7374796c) {
      if (*(char *)((int)param_1 + 0xbd) == '\x01') {
        local_6e = (undefined1 *)0x7fff;
        cVar4 = (**(code **)(*param_1 + 0x410))((short)param_1,0);
        if (cVar4 != '\0') {
          local_6e = (undefined1 *)param_1[0x1f];
          FUN_00000a10(0x7fff);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_6e = (undefined1 *)0x0;
        func_0x00001c10();
        ppuVar6 = (undefined1 **)&stack0xffffff96;
      }
    }
    else {
      local_6e = (undefined1 *)0x0;
      func_0x00001c10();
      ppuVar6 = (undefined1 **)&stack0xffffff96;
    }
    *(undefined4 *)((int)ppuVar6 + -4) = 0xa10;
    func_0x00001e60();
    _DAT_00025f52 = local_10;
  }
  else {
    local_6e = (undefined1 *)0x0;
    func_0x00001d08();
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  return iVar5;
}



// Function: FUN_00000a10 at 00000a10
// Size: 20 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a10(void)

{
  int unaff_A6;
  
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00000a44 at 00000a44
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a44(int *param_1)

{
  (**(code **)(*_DAT_000264b2 + 0x20))(_DAT_000264b2,0x23,param_1);
  if (*(int *)((int)param_1 + 0x26) == 0) {
    (**(code **)(*param_1 + 0x4c))();
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x124))();
  }
  return;
}



// Function: FUN_00000a94 at 00000a94
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000a94(void)

{
  func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000ad2 at 00000ad2
// Size: 198 bytes

/* WARNING: Removing unreachable block (ram,0x00000b74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ad2(int *param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined2 uVar2;
  undefined2 uVar3;
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
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x35c))();
    uVar2 = (undefined2)((uint)extraout_A0 >> 0x10);
    uVar3 = (undefined2)extraout_A0;
    func_0x00001bf0(uVar3);
    (**(code **)(*_DAT_000264b2 + 0xe4))((short)_DAT_000264b2,0x4354,uVar3);
    func_0x00001c00(uVar2);
    func_0x00001d10(uVar3);
    _DAT_00025f52 = local_10;
  }
  else {
    func_0x00001c10();
  }
  return;
}



