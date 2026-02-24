// Warlords II - Decompiled 68k Code
// Segment: CODE_075
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000066 at 00000066
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000066(int param_1)

{
  int *piVar1;
  char cVar3;
  undefined4 uVar2;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 auStack_150 [76];
  undefined1 local_104 [256];
  
  piVar1 = *(int **)(param_1 + 8);
  func_0x00001bf0((char)piVar1);
  (**(code **)(*piVar1 + 0x188))((short)piVar1,0x74);
  uVar2 = 0;
  if (extraout_A0 != (int *)0x0) {
    FUN_00000d90((char)extraout_A0,(char)piVar1);
    uVar6 = (undefined1)((uint)extraout_A0 >> 0x10);
    uVar7 = SUB42(extraout_A0,0);
    FUN_00000fc6(uVar7);
    if (*(short *)(extraout_A0 + 0x1f) < 1) {
      uVar2 = FUN_00000248((char)param_1);
    }
    else {
      uVar11 = 0x80;
      uVar9 = (undefined1)((uint)auStack_150 >> 0x10);
      uVar10 = SUB41(auStack_150,0);
      func_0x00007028(uVar10);
      func_0x00006ed0((short)auStack_150,0x7374,uVar9,uVar11);
      sVar5 = 1;
      if (extraout_A0_00 != (undefined4 *)0x0) {
        for (sVar4 = 1; sVar5 = 1, sVar4 <= *(short *)(extraout_A0 + 0x1f); sVar4 = sVar4 + 1) {
          local_104[0] = 0;
          uVar10 = SUB41(local_104,0);
          uVar9 = (undefined1)sVar4;
          uVar8 = (short)((uint)extraout_A0 >> 0x10);
          (**(code **)(*extraout_A0 + 0x44c))(uVar7,(char)((uint)local_104 >> 0x10));
          cVar3 = func_0x00007308((short)local_104,(short)*extraout_A0_00,uVar8,uVar9,uVar10);
          sVar5 = sVar4;
          if (cVar3 == '\x01') break;
        }
        uVar10 = (undefined1)((uint)extraout_A0_00 >> 0x10);
        uVar9 = 0x30;
        func_0x00001d08((char)extraout_A0_00);
      }
      (**(code **)(*extraout_A0 + 0x47c))(uVar7,uVar9);
      uVar2 = func_0x00006ec8((short)auStack_150,uVar6,sVar5,uVar10);
    }
  }
  if (_DAT_000297f8 != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_000297f8 + 0x3a0))();
    _DAT_000297f8 = (int *)0x0;
  }
  return uVar2;
}



// Function: FUN_00000192 at 00000192
// Size: 182 bytes

void FUN_00000192(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar3;
  undefined4 uVar2;
  int *piVar4;
  int *extraout_A0;
  
  if (param_2 == 8) {
    FUN_00000248(param_1);
  }
  else if (param_2 == 0x21) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      (**(code **)(*piVar1 + 0x188))(piVar1,*(undefined4 *)(param_1 + 0x20));
      piVar4 = extraout_A0;
    }
    if (piVar4 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar4 + 0x74))();
      if (cVar3 != '\0') {
        uVar2 = (**(code **)(*piVar4 + 0x29c))(piVar4,piVar1,0);
        (**(code **)(*piVar4 + 0x6c))(piVar4,uVar2);
        goto LAB_00000226;
      }
    }
    FUN_00000d38(param_1);
  }
LAB_00000226:
  FUN_00000c40(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_00000248 at 00000248
// Size: 561 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000248(int param_1)

{
  int *piVar1;
  short sVar3;
  undefined2 uVar4;
  char cVar6;
  undefined2 uVar5;
  undefined4 uVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined2 *extraout_A0_05;
  undefined2 *puVar7;
  int *extraout_A0_06;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined2 local_3dc;
  undefined2 auStack_19e [205];
  
  piVar1 = *(int **)(param_1 + 8);
  func_0x00001bf0((char)piVar1);
  uVar5 = SUB42(piVar1,0);
  (**(code **)(*piVar1 + 0x188))(uVar5,0x7374);
  func_0x00001bf0((short)extraout_A0);
  sVar3 = (**(code **)(*extraout_A0 + 0x488))();
  if (sVar3 != *(short *)(param_1 + 0x3a)) {
    uVar4 = (**(code **)(*extraout_A0 + 0x488))();
    *(undefined2 *)(param_1 + 0x3a) = uVar4;
    (**(code **)(*piVar1 + 0x188))(uVar5,0x6d65);
    local_3dc = (undefined2)((uint)extraout_A0_00 >> 0x10);
    func_0x00001bf0((short)extraout_A0_00);
    (**(code **)(*piVar1 + 0x188))((char)piVar1,0x64657363);
    func_0x00001bf0((short)extraout_A0_01);
    (**(code **)(*piVar1 + 0x188))(uVar5,0x7479);
    func_0x00001bf0(extraout_A0_02);
    (**(code **)(*piVar1 + 0x188))(uVar5,0x6e);
    func_0x00001bf0((short)extraout_A0_03);
    (**(code **)(*piVar1 + 0x188))(piVar1,0x6179);
    func_0x00001bf0(extraout_A0_04);
    cVar6 = (**(code **)(*extraout_A0 + 0x410))();
    if (cVar6 != '\0') {
      uVar5 = (**(code **)(*extraout_A0 + 0x488))();
      (**(code **)(**(int **)((int)extraout_A0 + 0xb2) + 0x74))
                ((short)*(int **)((int)extraout_A0 + 0xb2),uVar5);
      sVar3 = 0x22;
      puVar7 = extraout_A0_05;
      puVar8 = auStack_19e;
      do {
        *puVar8 = *puVar7;
        sVar3 = sVar3 + -1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (sVar3 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = 2;
    (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,0x76);
    uVar10 = 0x20;
    (**(code **)(*extraout_A0_01 + 1000))(extraout_A0_01,0x5b76,local_3dc,uVar4);
    uVar9 = 2;
    uVar4 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    (**(code **)(*extraout_A0_02 + 1000))((short)extraout_A0_02,0x5b76);
    (**(code **)(*extraout_A0_03 + 1000))(extraout_A0_03,0x5b76,uVar4,uVar9,uVar10);
    (**(code **)(*extraout_A0_04 + 1000))((short)extraout_A0_04,0x5b76);
    (**(code **)(*extraout_A0_00 + 0x26c))();
    (**(code **)(*extraout_A0_01 + 0x26c))();
    (**(code **)(*extraout_A0_02 + 0x26c))();
    (**(code **)(*extraout_A0_03 + 0x26c))();
    (**(code **)(*extraout_A0_04 + 0x26c))();
  }
  (**(code **)(*piVar1 + 0x188))(uVar5,0x72);
  uVar2 = 0;
  if ((extraout_A0 != (int *)0x0) && (uVar2 = 0, extraout_A0_06 != (int *)0x0)) {
    (**(code **)(*extraout_A0 + 0x410))();
    uVar2 = (**(code **)(*extraout_A0_06 + 0x3a0))();
  }
  return uVar2;
}



// Function: FUN_000003b8 at 000003b8
// Size: 80 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000003b8(void)

{
  undefined4 in_D0;
  undefined4 in_A0;
  int *extraout_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x3a8) = in_D0;
  *(undefined4 *)(unaff_A6 + -0x3a4) = in_A0;
  func_0x00003180();
  func_0x00003188((short)extraout_A0,0x454e);
  (**(code **)(*extraout_A0 + 0x74))(extraout_A0,unaff_A6 + -0x54,0x54);
  (**(code **)(*extraout_A0 + 0x4c))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000005f0 at 000005f0
// Size: 1422 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  byte bVar8;
  int extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int *extraout_A0_06;
  undefined2 *extraout_A0_07;
  int *extraout_A0_08;
  undefined2 *extraout_A0_09;
  int *extraout_A0_10;
  undefined2 *extraout_A0_11;
  int *extraout_A0_12;
  undefined2 *extraout_A0_13;
  undefined2 *puVar9;
  int *extraout_A0_14;
  int extraout_A0_15;
  undefined4 extraout_A0_16;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined1 auStack_a2 [76];
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  if (DAT_000264d0 != '\0') {
    func_0x00006988();
    func_0x000073b0(0xea);
    if (extraout_A0 != 0) {
      func_0x000071d8((short)extraout_A0);
    }
  }
  local_8 = (int *)0x0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x26);
  uVar16 = (undefined2)iVar1;
  (**(code **)(*_DAT_000257ee + 0x68))((char)_DAT_000257ee,(short)((uint)iVar1 >> 0x10));
  local_8 = extraout_A0_00;
  func_0x00001bf0((short)extraout_A0_00);
  (**(code **)(*local_8 + 0x400))();
  iVar3 = (**(code **)(*local_8 + 0x40c))();
  (**(code **)(*local_8 + 0x198))();
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar4 = func_0x000076a8((short)auStack_4e);
  if (iVar4 == 0) {
    if (iVar3 == 0x6f6b2020) {
      (**(code **)(**(int **)(param_1 + 8) + 0x198))();
      _DAT_00027722 = 1;
      (**(code **)(*local_8 + 0x188))((short)local_8,0x7465);
      func_0x00001bf0((short)extraout_A0_02);
      _DAT_00015258 = *(short *)(extraout_A0_02 + 0xe0);
      local_56 = func_0x00002a08((short)extraout_A0_02);
      if (_DAT_00015258 == -1) {
        _DAT_00015258 = func_0x00002ad0(*(undefined2 *)(extraout_A0_02 + 0xe4));
      }
      (**(code **)(*local_8 + 0x188))((short)local_8,0x6c6c);
      func_0x00001bf0((short)extraout_A0_03);
      _DAT_0001525a = *(short *)(extraout_A0_03 + 0xe0);
      local_54 = func_0x00002a08((short)extraout_A0_03);
      if (_DAT_0001525a == -1) {
        _DAT_0001525a = func_0x00002ad0(*(undefined2 *)(extraout_A0_03 + 0xe4));
      }
      (**(code **)(*local_8 + 0x188))((short)local_8,0x7469);
      func_0x00001bf0((short)extraout_A0_04);
      _DAT_0001525c = *(short *)(extraout_A0_04 + 0xe0);
      local_52 = func_0x00002a08((short)extraout_A0_04);
      if (_DAT_0001525c == -1) {
        _DAT_0001525c = func_0x00002ad0(*(undefined2 *)(extraout_A0_04 + 0xe4));
      }
      (**(code **)(*local_8 + 0x188))((short)local_8,0x7265);
      func_0x00001bf0((short)extraout_A0_05);
      _DAT_0001525e = *(short *)(extraout_A0_05 + 0xe0);
      local_50 = func_0x00002a08((short)extraout_A0_05);
      if (_DAT_0001525e == -1) {
        _DAT_0001525e = func_0x00002ad0(*(undefined2 *)(extraout_A0_05 + 0xe4));
      }
      (**(code **)(**(int **)(extraout_A0_01 + 8) + 0x188))
                ((short)*(int **)(extraout_A0_01 + 8),0x7272);
      if (extraout_A0_06 == (int *)0x0) {
        sVar6 = 1;
      }
      else {
        sVar6 = (**(code **)(*extraout_A0_06 + 0x440))();
      }
      (**(code **)(**(int **)(extraout_A0_01 + 0x3a) + 0x74))
                ((short)*(int **)(extraout_A0_01 + 0x3a),sVar6);
      sVar5 = 0x22;
      puVar9 = extraout_A0_07;
      puVar11 = (undefined2 *)&DAT_0002777a;
      do {
        *puVar11 = *puVar9;
        sVar5 = sVar5 + -1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (sVar5 != -1);
      _DAT_00027778 = sVar6 + -1;
      func_0x00005de0(uVar16,0x777a);
      (**(code **)(**(int **)(iVar1 + 0x146) + 0x90))();
      (**(code **)(**(int **)(extraout_A0_01 + 8) + 0x188))
                ((short)*(int **)(extraout_A0_01 + 8),0x6d79);
      if (extraout_A0_08 == (int *)0x0) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)(*extraout_A0_08 + 0x440))();
      }
      (**(code **)(**(int **)(extraout_A0_01 + 0x3e) + 0x74))
                ((short)*(int **)(extraout_A0_01 + 0x3e),uVar7);
      sVar6 = 0x22;
      puVar9 = extraout_A0_09;
      puVar11 = (undefined2 *)&DAT_000277ca;
      do {
        *puVar11 = *puVar9;
        sVar6 = sVar6 + -1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (sVar6 != -1);
      DAT_000277c4 = 1;
      func_0x00005de8(uVar16,0x77ca);
      (**(code **)(**(int **)(iVar1 + 0x14a) + 0x90))();
      (**(code **)(**(int **)(extraout_A0_01 + 8) + 0x188))
                ((short)*(int **)(extraout_A0_01 + 8),0x7479);
      if (extraout_A0_10 == (int *)0x0) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)(*extraout_A0_10 + 0x440))();
      }
      (**(code **)(**(int **)(extraout_A0_01 + 0x42) + 0x74))
                ((short)*(int **)(extraout_A0_01 + 0x42),uVar7);
      sVar6 = 0x22;
      puVar9 = extraout_A0_11;
      puVar11 = (undefined2 *)&DAT_00027810;
      do {
        *puVar11 = *puVar9;
        sVar6 = sVar6 + -1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (sVar6 != -1);
      DAT_000277c6 = 1;
      if (iVar1 != 0) {
        func_0x00005df0(uVar16,0x7810);
        (**(code **)(**(int **)(iVar1 + 0x14e) + 0x90))();
      }
      (**(code **)(**(int **)(extraout_A0_01 + 8) + 0x188))
                ((short)*(int **)(extraout_A0_01 + 8),0x6965);
      if (extraout_A0_12 == (int *)0x0) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)(*extraout_A0_12 + 0x440))();
      }
      (**(code **)(**(int **)(extraout_A0_01 + 0x46) + 0x74))
                ((short)*(int **)(extraout_A0_01 + 0x46),uVar7);
      sVar6 = 0x22;
      puVar9 = extraout_A0_13;
      puVar11 = (undefined2 *)&DAT_00027856;
      do {
        *puVar11 = *puVar9;
        sVar6 = sVar6 + -1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (sVar6 != -1);
      DAT_000277c8 = 1;
      func_0x00005df8(uVar16,0x7856);
      (**(code **)(**(int **)(iVar1 + 0x152) + 0x90))();
      (**(code **)(*local_8 + 0x188))((short)local_8,0x6c79);
      if (extraout_A0_14 == (int *)0x0) {
        _DAT_000277c0 = 0;
      }
      else {
        bVar8 = (**(code **)(*extraout_A0_14 + 0x428))();
        _DAT_000277c0 = (ushort)bVar8;
      }
      uVar16 = 0x80;
      puVar14 = auStack_a2;
      func_0x00007028((short)puVar14);
      func_0x00001ea8((short)((uint)puVar14 >> 0x10),uVar16);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(*local_8 + 0x3a0))();
    local_8 = (int *)0x0;
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
    }
    func_0x00001c10((short)((uint)local_18 >> 0x10));
  }
  if (iVar3 == 0x6f6b2020) {
    piVar2 = *(int **)(param_1 + 8);
    uVar7 = (undefined2)((uint)piVar2 >> 0x10);
    (**(code **)(*piVar2 + 0x198))();
    FUN_00000ec2((short)param_1,uVar16);
    func_0x000073b0(0x2e);
    uVar10 = 0;
    if (extraout_A0_15 != 0) {
      func_0x000070e8((short)extraout_A0_15);
      uVar10 = extraout_A0_16;
    }
    uVar13 = (undefined1)((uint)uVar10 >> 0x10);
    uVar15 = uVar7;
    func_0x00006dd0((short)uVar10,(short)piVar2);
    uVar12 = (undefined2)((uint)uVar10 >> 0x10);
    (**(code **)(*piVar2 + 0x104))((short)piVar2,(short)uVar10);
    func_0x00002a18(uVar7,uVar12,uVar13,uVar15);
    func_0x00003e20(uVar16,0x3f5);
  }
  return;
}



// Function: FUN_00000c40 at 00000c40
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c40(void)

{
  undefined4 uVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  int unaff_D3;
  int unaff_D4;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar5;
  int in_A1;
  undefined4 unaff_A3;
  int unaff_A6;
  undefined1 *puVar6;
  
  sVar3 = *(short *)(in_A1 + -2);
  sVar4 = sVar3 + 1;
  *(short *)(in_A1 + -2) = sVar4;
  if (sVar4 == 0 || sVar3 < -1) {
    func_0x00006ee0((short)(unaff_A6 + -0x9e));
    func_0x00001d08();
    func_0x00006ec8();
    (**(code **)(**(int **)(unaff_A6 + -4) + 0x3a0))();
    *(undefined4 *)(unaff_A6 + -4) = 0;
    _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0x10);
    puVar6 = &stack0x0000000a;
  }
  else {
    func_0x00001c10();
    puVar6 = &stack0x00000004;
  }
  if (unaff_D4 == 0x6f6b2020) {
    uVar1 = *(undefined4 *)(unaff_D3 + 8);
    *(undefined4 *)(puVar6 + -4) = uVar1;
    pcVar2 = *(code **)(**(int **)(puVar6 + -4) + 0x198);
    *(undefined4 *)(puVar6 + -8) = 0xcce;
    (*pcVar2)();
    *(undefined4 *)(puVar6 + -8) = unaff_A3;
    *(int *)(puVar6 + -0xc) = unaff_D3;
    *(undefined4 *)(puVar6 + -0x10) = 0xcd8;
    FUN_00000ec2();
    *(undefined4 *)(puVar6 + -0x10) = 0x2e;
    *(undefined4 *)(puVar6 + -0x14) = 0xce2;
    func_0x000073b0();
    uVar5 = 0;
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0xd8) = extraout_A0;
      *(int *)(unaff_A6 + -0xdc) = extraout_A0;
      *(int *)(puVar6 + -4) = extraout_A0;
      *(undefined4 *)(puVar6 + -8) = 0xcfc;
      func_0x000070e8();
      uVar5 = extraout_A0_00;
    }
    *(undefined4 *)(puVar6 + -4) = uVar1;
    *(undefined4 *)(puVar6 + -8) = uVar5;
    *(undefined4 *)(puVar6 + -0xc) = 0xd0a;
    func_0x00006dd0();
    *(undefined4 *)(puVar6 + -0xc) = uVar5;
    *(undefined4 *)(puVar6 + -0x10) = uVar1;
    pcVar2 = *(code **)(**(int **)(puVar6 + -0x10) + 0x104);
    *(undefined4 *)(puVar6 + -0x14) = 0xd18;
    (*pcVar2)();
    *(undefined2 *)(puVar6 + -0x12) = 0;
    *(undefined4 *)(puVar6 + -0x16) = 0xd20;
    func_0x00002a18();
    *(undefined4 *)(puVar6 + -0x16) = 0x3f5;
    *(undefined4 *)(puVar6 + -0x1a) = unaff_A3;
    *(undefined4 *)(puVar6 + -0x1e) = 0xd2c;
    func_0x00003e20();
  }
  return;
}



// Function: FUN_00000d38 at 00000d38
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d38(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar5;
  undefined2 uVar3;
  short sVar4;
  int *extraout_A0;
  undefined2 *extraout_A0_00;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 auStack_4e [35];
  undefined4 uStack_8;
  
  _DAT_00027722 = 0;
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *(int *)((int)piVar1 + 0x26);
  (**(code **)(*piVar1 + 0x188))(piVar1,0x4c697374);
  if ((extraout_A0 == (int *)0x0) || (cVar5 = (**(code **)(*extraout_A0 + 0x410))(), cVar5 == '\0'))
  {
    func_0x00001bf0(0);
  }
  uVar3 = (**(code **)(*extraout_A0 + 0x488))();
  *(undefined2 *)(param_1 + 0x3a) = uVar3;
  sVar4 = (**(code **)(*extraout_A0 + 0x488))();
  (**(code **)(**(int **)((int)extraout_A0 + 0xb2) + 0x74))
            (*(int **)((int)extraout_A0 + 0xb2),(int)sVar4);
  sVar4 = 0x22;
  puVar6 = extraout_A0_00;
  puVar7 = auStack_4e;
  do {
    *puVar7 = *puVar6;
    sVar4 = sVar4 + -1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (sVar4 != -1);
  func_0x00005dd8(iVar2,auStack_4e);
  (**(code **)(**(int **)(iVar2 + 0x142) + 0x90))();
  uStack_8 = 0;
  func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000d90 at 00000d90
// Size: 106 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000d90(void)

{
  undefined2 uVar1;
  short sVar2;
  int unaff_D5;
  int *in_A0;
  undefined2 *extraout_A0;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int *unaff_A3;
  int unaff_A4;
  int unaff_A6;
  
  uVar1 = (**(code **)(*in_A0 + 0x488))();
  *(undefined2 *)(unaff_D5 + 0x3a) = uVar1;
  sVar2 = (**(code **)(*unaff_A3 + 0x488))();
  (**(code **)(**(int **)((int)unaff_A3 + 0xb2) + 0x74))(*(int **)((int)unaff_A3 + 0xb2),(int)sVar2)
  ;
  sVar2 = 0x22;
  puVar3 = extraout_A0;
  puVar4 = (undefined2 *)(unaff_A6 + -0x4a);
  do {
    *puVar4 = *puVar3;
    sVar2 = sVar2 + -1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (sVar2 != -1);
  func_0x00005dd8();
  (**(code **)(**(int **)(unaff_A4 + 0x142) + 0x90))();
  *(undefined4 *)(unaff_A6 + -4) = 0;
  func_0x00001ea8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e10 at 00000e10
// Size: 178 bytes

void FUN_00000e10(void)

{
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined2 extraout_A0w;
  int *unaff_A2;
  byte *unaff_A4;
  int unaff_A6;
  int iVar1;
  undefined2 uVar2;
  
  *unaff_A4 = *unaff_A4 | 0x4c;
  uVar2 = 0x80;
  iVar1 = unaff_A6 + -0x96;
  func_0x00007028((short)iVar1);
  func_0x00006ee0(unaff_A6 + -0x96,*(undefined4 *)(unaff_A6 + -4),0x4c617374,2,
                  (short)((uint)iVar1 >> 0x10),uVar2);
  func_0x00001d08(*(undefined4 *)(unaff_A6 + -4));
  *(undefined4 *)(unaff_A6 + -4) = extraout_A0;
  func_0x00006ec8((short)unaff_A6 + -0x96);
  (**(code **)(*unaff_A2 + 0x198))();
  func_0x000073b0(0x2e);
  uVar2 = 0;
  if (extraout_A0_00 != 0) {
    *(int *)(unaff_A6 + -0x9e) = extraout_A0_00;
    *(int *)(unaff_A6 + -0x9a) = extraout_A0_00;
    func_0x000070e8((short)extraout_A0_00);
    uVar2 = extraout_A0w;
  }
  func_0x00006dd0(uVar2);
  (**(code **)(*unaff_A2 + 0x104))();
  func_0x00003e20(unaff_A4 + 1,0x3f5);
  return;
}



// Function: FUN_00000ec2 at 00000ec2
// Size: 216 bytes

void FUN_00000ec2(undefined4 param_1,int param_2)

{
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *piVar1;
  undefined1 auStack_4a [70];
  
  FUN_000003b8(0x57324453,0x57324420);
  func_0x000073b0(0xe);
  piVar1 = (int *)0x0;
  if (extraout_A0_00 != 0) {
    FUN_00001480(extraout_A0_00);
    piVar1 = extraout_A0_01;
  }
  FUN_00001488(piVar1,param_2,extraout_A0);
  (**(code **)(*piVar1 + 0x7c))((short)piVar1,0x13);
  (**(code **)(*extraout_A0 + 0xc0))(extraout_A0,auStack_4a);
  (**(code **)(*extraout_A0 + 0x80))();
  func_0x00005dd8(param_2,auStack_4a);
  (**(code **)(**(int **)(param_2 + 0x142) + 0x154))();
  (**(code **)(**(int **)(param_2 + 0x142) + 0x90))();
  (**(code **)(*piVar1 + 0x4c))();
  return;
}



// Function: FUN_00000f9a at 00000f9a
// Size: 44 bytes

void FUN_00000f9a(int *param_1,undefined4 param_2)

{
  func_0x00004c70(param_1,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,8,param_2);
  return;
}



// Function: FUN_00000fc6 at 00000fc6
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000fc6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001118 at 00001118
// Size: 40 bytes

void FUN_00001118(int param_1)

{
  undefined4 extraout_A0;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0xb2));
  *(undefined4 *)(param_1 + 0xb2) = extraout_A0;
  func_0x00005130(param_1);
  return;
}



// Function: FUN_00001140 at 00001140
// Size: 72 bytes

void FUN_00001140(int *param_1,int *param_2)

{
  *(int **)((int)param_1 + 0xb2) = param_2;
  (**(code **)(*param_1 + 0x45c))();
  (**(code **)(*param_2 + 0x58))();
  (**(code **)(*param_1 + 0x470))();
  return;
}



// Function: FUN_00001188 at 00001188
// Size: 234 bytes

void FUN_00001188(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar3;
  short sVar2;
  
  bVar1 = *(byte *)((int)param_2 + 0x23);
  cVar3 = (**(code **)(*param_2 + 0x84))();
  if (((((cVar3 != '\0') || (cVar3 = (**(code **)(*param_2 + 0x88))(), cVar3 != '\0')) ||
       (cVar3 = (**(code **)(*param_2 + 0x7c))(), cVar3 != '\0')) ||
      ((cVar3 = (**(code **)(*param_2 + 0x78))(), cVar3 != '\0' || (bVar1 < 0x1c)))) ||
     (0x1f < bVar1)) {
    func_0x00003778(param_1,param_2);
    return;
  }
  sVar2 = (**(code **)(*param_1 + 0x488))();
  if ((bVar1 == 0x1c) || (bVar1 == 0x1e)) {
    sVar2 = sVar2 + -1;
  }
  else if ((bVar1 == 0x1d) || (bVar1 == 0x1f)) {
    sVar2 = sVar2 + 1;
  }
  if ((sVar2 != 0) && (sVar2 <= *(short *)(param_1 + 0x1f))) {
    (**(code **)(*param_1 + 0x47c))();
    (**(code **)(*param_1 + 0x260))();
    return;
  }
  func_0x00001c40();
  return;
}



// Function: FUN_000012bc at 000012bc
// Size: 158 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000012bc(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined1 extraout_A0b;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 auStack_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = *param_2;
  local_1e = param_2[1];
  func_0x00000310(param_1,&local_20,param_3);
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0x10;
  func_0x00003920((short)param_3);
  func_0x00003938((short)&local_14,extraout_A0b);
  local_28 = 0;
  local_24 = 0x11;
  func_0x00003940(&local_14,(short)&local_28);
  (**(code **)(*param_1 + 0x148))(param_1,&local_14,auStack_1c);
  func_0x00007258(auStack_1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000136a at 0000136a
// Size: 92 bytes

void FUN_0000136a(int *param_1,undefined4 param_2,int param_3,undefined2 *param_4)

{
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(short *)(param_3 + 0x26) == 1) {
    local_8 = *param_4;
    local_6 = param_4[1];
    func_0x00000238(param_1,param_2,param_3,&local_8);
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,0x21,param_1);
  }
  return;
}



// Function: FUN_000013c6 at 000013c6
// Size: 50 bytes

undefined1 FUN_000013c6(void)

{
  undefined1 uStack_19;
  
  func_0x00007638();
  return uStack_19;
}



// Function: FUN_00001480 at 00001480
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001480(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001488 at 00001488
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001488(void)

{
  int in_A0;
  int in_A1;
  int unaff_A4;
  int unaff_A6;
  
  *(ushort *)(in_A1 + -2) =
       *(ushort *)(in_A1 + -2) & 0xf0f0 |
       ((*(byte *)(unaff_A4 + -1) & 0xf0) << 4 | *(byte *)(unaff_A4 + -1) & 0xf) + 0x8589;
  *(ushort *)(unaff_A6 + -2) =
       *(ushort *)(unaff_A6 + -2) & 0xf0f0 |
       ((*(byte *)(unaff_A4 + -2) & 0xf0) << 4 | *(byte *)(unaff_A4 + -2) & 0xf) + 0x878d;
  *(ushort *)(unaff_A6 + -4) =
       *(ushort *)(unaff_A6 + -4) & 0xf0f0 |
       ((*(byte *)(in_A0 + -1) & 0xf0) << 4 | *(byte *)(in_A0 + -1) & 0xf) + 0x9ea8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



