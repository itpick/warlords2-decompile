// Warlords II - Decompiled 68k Code
// Segment: CODE_076
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000080 at 00000080
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000080(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000028e at 0000028e
// Size: 206 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000028e(int param_1)

{
  int *piVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 uVar2;
  undefined1 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  func_0x00001bf0((char)piVar1);
  (**(code **)(*piVar1 + 0x188))((short)piVar1,0x74);
  if (extraout_A0 != (int *)0x0) {
    uVar3 = (undefined1)*(undefined2 *)(extraout_A0 + 0x1f);
    uVar2 = (undefined1)((uint)extraout_A0 >> 0x10);
    (**(code **)(*extraout_A0 + 0x45c))();
    (**(code **)(*_DAT_00027d2a + 0x58))();
    (**(code **)(*extraout_A0 + 0x470))((short)extraout_A0,uVar2,uVar3);
    FUN_00000d90(extraout_A0,(short)piVar1);
    (**(code **)(*extraout_A0 + 0x47c))();
  }
  (**(code **)(*_DAT_00027d2a + 0x48))();
  *(undefined4 *)(param_1 + 0x50) = extraout_A0_00;
  return;
}



// Function: FUN_0000035c at 0000035c
// Size: 82 bytes

void FUN_0000035c(undefined4 param_1,int param_2,undefined2 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  if (param_2 == 8) {
    FUN_000003ae(param_1);
    func_0x00005010((short)param_1,0x2020);
  }
  FUN_00000c40((short)param_1,(short)param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_000003ae at 000003ae
// Size: 932 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000003ae(int param_1)

{
  int *piVar1;
  short sVar3;
  char cVar4;
  undefined4 uVar2;
  short sVar5;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int *extraout_A0_08;
  int *extraout_A0_09;
  int *extraout_A0_10;
  int *extraout_A0_11;
  int *extraout_A0_12;
  int *extraout_A0_13;
  undefined2 local_12c;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 local_104 [256];
  
  piVar1 = *(int **)(param_1 + 8);
  func_0x00001bf0((char)piVar1);
  uVar6 = SUB42(piVar1,0);
  (**(code **)(*piVar1 + 0x188))(uVar6,0x7374);
  local_12c = (undefined2)((uint)extraout_A0 >> 0x10);
  func_0x00001bf0((short)extraout_A0);
  sVar3 = (**(code **)(*extraout_A0 + 0x488))();
  if (sVar3 != 0) {
    if (sVar3 < 4) {
      for (sVar5 = 0; sVar5 < 0xb; sVar5 = sVar5 + 1) {
        *(undefined2 *)(param_1 + 0x3a + sVar5 * 2) =
             *(undefined2 *)((sVar3 + -1) * 0x16 + 0x154ae + sVar5 * 2);
      }
    }
    else {
      (**(code **)(*_DAT_00027d2a + 0x74))((short)_DAT_00027d2a,(char)sVar3 + -3);
      for (sVar5 = 0; sVar5 < 0xb; sVar5 = sVar5 + 1) {
        *(undefined2 *)(param_1 + 0x3a + sVar5 * 2) =
             *(undefined2 *)(sVar5 * 2 + extraout_A0_00 + 0x104);
      }
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x65);
    if (extraout_A0_01 != (int *)0x0) {
      local_104[0] = 0;
      uVar7 = SUB41(local_104,0);
      (**(code **)(*extraout_A0 + 0x44c))((short)extraout_A0,(char)((uint)local_104 >> 0x10));
      (**(code **)(*extraout_A0_01 + 1000))(extraout_A0_01,(short)local_104,local_12c,sVar3,uVar7);
      (**(code **)(*extraout_A0_01 + 0x3f4))(extraout_A0_01,0x7fff);
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x74);
    if (extraout_A0_02 != (int *)0x0) {
      (**(code **)(*extraout_A0_02 + 1000))
                ((short)extraout_A0_02,(char)*(undefined2 *)(param_1 + 0x3a) + '1');
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x69);
    if (extraout_A0_03 != (int *)0x0) {
      if (*(short *)(param_1 + 0x46) == 0xf) {
        cVar4 = '\x02';
      }
      else {
        cVar4 = (char)*(undefined2 *)(param_1 + 0x46);
      }
      (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,cVar4 + '1');
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x6c);
    if (extraout_A0_04 != (int *)0x0) {
      (**(code **)(*extraout_A0_04 + 0x3ec))
                ((short)extraout_A0_04,(char)*(undefined2 *)(param_1 + 0x3c));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x73);
    if (extraout_A0_05 != (int *)0x0) {
      (**(code **)(*extraout_A0_05 + 0x3ec))
                ((short)extraout_A0_05,(char)*(undefined2 *)(param_1 + 0x3e));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,100);
    if (extraout_A0_06 != (int *)0x0) {
      (**(code **)(*extraout_A0_06 + 0x3ec))
                ((short)extraout_A0_06,(char)*(undefined2 *)(param_1 + 0x40));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x65);
    if (extraout_A0_07 != (int *)0x0) {
      (**(code **)(*extraout_A0_07 + 0x3ec))
                ((short)extraout_A0_07,(char)*(undefined2 *)(param_1 + 0x42));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x6f);
    if (extraout_A0_08 != (int *)0x0) {
      (**(code **)(*extraout_A0_08 + 0x3ec))((short)extraout_A0_08,*(short *)(param_1 + 0x44) == 0);
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x6e);
    if (extraout_A0_09 != (int *)0x0) {
      (**(code **)(*extraout_A0_09 + 0x3ec))
                ((short)extraout_A0_09,(char)*(undefined2 *)(param_1 + 0x48));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,99);
    if (extraout_A0_10 != (int *)0x0) {
      (**(code **)(*extraout_A0_10 + 0x3ec))
                ((short)extraout_A0_10,(char)*(undefined2 *)(param_1 + 0x4a));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,0x69);
    if (extraout_A0_11 != (int *)0x0) {
      (**(code **)(*extraout_A0_11 + 0x3ec))
                ((short)extraout_A0_11,(char)*(undefined2 *)(param_1 + 0x4c));
    }
    (**(code **)(*piVar1 + 0x188))(uVar6,100);
    if (extraout_A0_12 != (int *)0x0) {
      (**(code **)(*extraout_A0_12 + 0x3ec))
                ((short)extraout_A0_12,(char)*(undefined2 *)(param_1 + 0x4e));
    }
  }
  (**(code **)(*piVar1 + 0x188))(uVar6,0x65);
  uVar2 = 0;
  if (extraout_A0_13 != (int *)0x0) {
    uVar2 = (**(code **)(*extraout_A0_13 + 0x3a0))();
  }
  return uVar2;
}



// Function: FUN_00000752 at 00000752
// Size: 836 bytes

/* WARNING: Removing unreachable block (ram,0x00000814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000752(int param_1)

{
  int *piVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  short sVar7;
  char cVar8;
  int iVar6;
  short sVar9;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  int extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  int extraout_A0_08;
  int *extraout_A0_09;
  int extraout_A0_10;
  undefined1 *puVar10;
  int **ppiVar11;
  char acStack_294 [4];
  undefined4 uStack_290;
  undefined2 uStack_28c;
  char cStack_28a;
  undefined1 uStack_289;
  undefined1 local_288;
  undefined1 uStack_287;
  undefined1 auStack_286 [4];
  undefined2 uStack_282;
  undefined2 local_280;
  undefined2 uStack_27e;
  int *local_27c;
  undefined4 local_278;
  int *local_274;
  undefined1 auStack_250 [50];
  int local_21e;
  byte local_21a [256];
  undefined2 local_11a [11];
  byte local_104 [256];
  
  piVar1 = *(int **)(param_1 + 8);
  local_278 = 0x76c;
  local_274 = piVar1;
  func_0x00001bf0();
  local_278 = 0x6e616d65;
  local_280 = 0;
  uStack_27e = 0x77e;
  local_27c = piVar1;
  (**(code **)(*piVar1 + 0x188))();
  local_280 = (undefined2)((uint)extraout_A0 >> 0x10);
  uStack_27e = SUB42(extraout_A0,0);
  uVar5 = uStack_27e;
  auStack_286._2_2_ = 0;
  uStack_282 = 0x788;
  func_0x00001bf0();
  local_104[0] = 0;
  unique0x00012700 = local_104;
  ppiVar11 = (int **)&local_288;
  local_288 = (undefined1)((uint)extraout_A0 >> 0x18);
  uStack_287 = (undefined1)((uint)extraout_A0 >> 0x10);
  uStack_28c = 0;
  cStack_28a = 7;
  uStack_289 = 0x9c;
  auStack_286._0_2_ = uVar5;
  (**(code **)(*extraout_A0 + 0x3d4))();
  sVar9 = -1;
  uStack_28c = 1;
  cStack_28a = -0x6b;
  uStack_289 = 0x84;
  uStack_290 = local_104;
  acStack_294[0] = '\0';
  acStack_294[1] = 0;
  acStack_294[2] = 7;
  acStack_294[3] = 0xae;
  func_0x00007310();
  uStack_290._0_2_ = (undefined2)((uint)extraout_A0_00 >> 0x10);
  uStack_290._2_2_ = (undefined2)extraout_A0_00;
  acStack_294[2] = 0;
  acStack_294[0] = '\0';
  func_0x000075e8();
  if (acStack_294[0] == '\0') {
    uStack_282 = 1;
    local_280 = 0x9577;
    auStack_286 = (undefined1  [4])local_104;
    cStack_28a = 0;
    uStack_289 = 0;
    local_288 = 7;
    uStack_287 = 0xda;
    func_0x00007310();
    auStack_286._0_2_ = (undefined2)((uint)extraout_A0_01 >> 0x10);
    auStack_286._2_2_ = (undefined2)extraout_A0_01;
    local_288 = 0;
    cStack_28a = '\0';
    uStack_290._2_2_ = 0;
    uStack_28c = 0x7e8;
    func_0x000075e8();
    if (cStack_28a == '\0') {
      uStack_290._2_2_ = 1;
      uStack_28c = 0x956e;
      acStack_294[2] = (char)((uint)local_104 >> 0x18);
      acStack_294[3] = (char)((uint)local_104 >> 0x10);
      uStack_290._0_2_ = SUB42(local_104,0);
      acStack_294[0] = '\b';
      acStack_294[1] = 2;
      func_0x00007310();
      acStack_294[2] = (char)((uint)extraout_A0_02 >> 0x18);
      acStack_294[3] = (char)((uint)extraout_A0_02 >> 0x10);
      uStack_290._0_2_ = (undefined2)extraout_A0_02;
      acStack_294[0] = '\0';
      func_0x000075e8();
      ppiVar11 = (int **)acStack_294;
    }
    else {
      sVar9 = 1;
    }
  }
  else {
    sVar9 = 0;
    ppiVar11 = &local_27c;
  }
  if (sVar9 == -1) {
    ppiVar11[-1] = (int *)_DAT_00027d2a;
    pcVar2 = *(code **)(*ppiVar11[-1] + 0x58);
    ppiVar11[-2] = (int *)0x862;
    sVar7 = (*pcVar2)();
    for (sVar9 = 1; puVar10 = (undefined1 *)ppiVar11, sVar9 <= sVar7; sVar9 = sVar9 + 1) {
      *(int *)((int)ppiVar11 + -4) = (int)sVar9;
      *(undefined4 *)((int)ppiVar11 + -8) = _DAT_00027d2a;
      pcVar2 = *(code **)(**(int **)((int)ppiVar11 + -8) + 0x74);
      *(undefined4 *)((int)ppiVar11 + -0xc) = 0x882;
      (*pcVar2)();
      *(int *)((int)ppiVar11 + -0xc) = extraout_A0_04 + 4;
      *(undefined4 *)((int)ppiVar11 + -0x10) = 0x88e;
      func_0x00007310();
      *(undefined4 *)((int)ppiVar11 + -0xc) = extraout_A0_05;
      *(byte **)((int)ppiVar11 + -0x10) = local_104;
      *(undefined4 *)((int)ppiVar11 + -0x14) = 0x89c;
      func_0x00007310();
      *(undefined4 *)((int)ppiVar11 + -0x10) = extraout_A0_06;
      *(undefined1 *)((int)ppiVar11 + -0x12) = 0;
      *(undefined1 *)((int)ppiVar11 + -0x14) = 0;
      *(undefined4 *)((int)ppiVar11 + -0x18) = 0x8aa;
      func_0x000075e8();
      if (*(char *)((int)ppiVar11 + -0x14) != '\0') {
        DAT_00028b1a = '\0';
        *(undefined4 *)((int)ppiVar11 + -0x10) = 0;
        *(byte **)((int)ppiVar11 + -0x14) = local_104;
        *(undefined4 *)((int)ppiVar11 + -0x18) = 0x8c4;
        func_0x000072f8();
        *(undefined4 *)((int)ppiVar11 + -0x14) = extraout_A0_07;
        *(undefined4 *)((int)ppiVar11 + -0x18) = 0x19504;
        *(undefined4 *)((int)ppiVar11 + -0x1c) = 0x1951a;
        *(undefined4 *)((int)ppiVar11 + -0x20) = 0x19530;
        *(undefined4 *)((int)ppiVar11 + -0x24) = 0x8e0;
        cVar8 = func_0x000027d8();
        if (cVar8 != '\0') {
          *(undefined4 *)((int)ppiVar11 + -0x10) = 0x8ee;
          FUN_00000c00();
        }
        if (DAT_00028b1a == '\0') {
          return;
        }
        *(undefined4 *)((int)ppiVar11 + -0x10) = 1;
        *(int *)((int)ppiVar11 + -0x14) = (int)sVar9;
        *(undefined4 *)((int)ppiVar11 + -0x18) = _DAT_00027d2a;
        pcVar2 = *(code **)(**(int **)((int)ppiVar11 + -0x18) + 0x68);
        *(undefined4 *)((int)ppiVar11 + -0x1c) = 0x90e;
        (*pcVar2)();
        *(undefined4 *)((int)ppiVar11 + -0x1c) = 0x4c697374;
        *(int **)((int)ppiVar11 + -0x20) = piVar1;
        pcVar2 = *(code **)(**(int **)((int)ppiVar11 + -0x20) + 0x188);
        *(undefined4 *)((int)ppiVar11 + -0x24) = 0x920;
        (*pcVar2)();
        puVar10 = (undefined1 *)((int)ppiVar11 + -0xc);
        if (extraout_A0_08 != 0) {
          *(undefined2 *)((int)ppiVar11 + -0xe) = 1;
          *(int *)((int)ppiVar11 + -0x12) = extraout_A0_08;
          pcVar2 = *(code **)(**(int **)((int)ppiVar11 + -0x12) + 0x460);
          *(undefined4 *)((int)ppiVar11 + -0x16) = 0x93a;
          (*pcVar2)();
          puVar10 = (undefined1 *)((int)ppiVar11 + -0xc);
        }
        break;
      }
      ppiVar11 = (int **)((int)ppiVar11 + -0xc);
    }
    *(int **)(puVar10 + -4) = extraout_A0;
    pcVar2 = *(code **)(**(int **)(puVar10 + -4) + 0x400);
    *(undefined4 *)(puVar10 + -8) = 0x956;
    cVar8 = (*pcVar2)();
    if (cVar8 != '\0') {
      local_21a[0] = 0;
      for (sVar9 = 0; sVar9 < 0xb; sVar9 = sVar9 + 1) {
        local_11a[sVar9] = *(undefined2 *)(param_1 + 0x3a + sVar9 * 2);
      }
      pbVar3 = local_21a;
      pbVar4 = local_104;
      for (iVar6 = local_104[0] + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar3 = *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      }
      *(undefined4 *)(puVar10 + -4) = _DAT_00027d2a;
      pcVar2 = *(code **)(**(int **)(puVar10 + -4) + 0x58);
      *(undefined4 *)(puVar10 + -8) = 0x9b2;
      iVar6 = (*pcVar2)();
      local_21e = iVar6 + 1;
      *(int **)(puVar10 + -8) = &local_21e;
      *(undefined4 *)(puVar10 + -0xc) = _DAT_00027d2a;
      pcVar2 = *(code **)(**(int **)(puVar10 + -0xc) + 0x88);
      *(undefined4 *)(puVar10 + -0x10) = 0x9ce;
      (*pcVar2)();
      *(undefined4 *)(puVar10 + -0x10) = _DAT_00027d2a;
      pcVar2 = *(code **)(**(int **)(puVar10 + -0x10) + 0x58);
      *(undefined4 *)(puVar10 + -0x14) = 0x9de;
      sVar7 = (*pcVar2)();
      for (sVar9 = 1; sVar9 <= sVar7; sVar9 = sVar9 + 1) {
        *(int *)(puVar10 + -4) = (int)sVar9;
        *(undefined4 *)(puVar10 + -8) = _DAT_00027d2a;
        pcVar2 = *(code **)(**(int **)(puVar10 + -8) + 0x74);
        *(undefined4 *)(puVar10 + -0xc) = 0x9fe;
        (*pcVar2)();
        if (*extraout_A0_09 == local_21e) break;
      }
      *(undefined4 *)(puVar10 + -4) = 0x4c697374;
      *(int **)(puVar10 + -8) = piVar1;
      pcVar2 = *(code **)(**(int **)(puVar10 + -8) + 0x188);
      *(undefined4 *)(puVar10 + -0xc) = 0xa22;
      (*pcVar2)();
      if (extraout_A0_10 != 0) {
        *(undefined2 *)(extraout_A0_10 + 0xb2) = 0;
        *(int *)(puVar10 + -4) = extraout_A0_10;
        pcVar2 = *(code **)(**(int **)(puVar10 + -4) + 0xc4);
        *(undefined4 *)(puVar10 + -8) = 0xa3a;
        (*pcVar2)();
        *(undefined2 *)(puVar10 + -6) = 1;
        *(int *)(puVar10 + -10) = extraout_A0_10;
        pcVar2 = *(code **)(**(int **)(puVar10 + -10) + 0x474);
        *(undefined4 *)(puVar10 + -0xe) = 0xa4a;
        (*pcVar2)();
        puVar10[-0xc] = 1;
        puVar10[-0xe] = 1;
        puVar10[-0x10] = 0;
        *(short *)(puVar10 + -0x12) = sVar9 + 3;
        *(int *)(puVar10 + -0x16) = extraout_A0_10;
        pcVar2 = *(code **)(**(int **)(puVar10 + -0x16) + 0x47c);
        *(undefined4 *)(puVar10 + -0x1a) = 0xa68;
        (*pcVar2)();
        *(int *)(puVar10 + -0x1a) = extraout_A0_10;
        pcVar2 = *(code **)(**(int **)(puVar10 + -0x1a) + 0x26c);
        *(undefined4 *)(puVar10 + -0x1e) = 0xa74;
        (*pcVar2)();
      }
      puVar10[-2] = 1;
      *(undefined4 *)(puVar10 + -6) = 0x6f6b2020;
      *(int *)(puVar10 + -10) = param_1;
      *(undefined4 *)(puVar10 + -0xe) = 0xa8a;
      func_0x00005010();
    }
  }
  else {
    ppiVar11[-1] = (int *)local_104;
    ppiVar11[-2] = (int *)0x826;
    func_0x000072f8();
    ppiVar11[-1] = (int *)extraout_A0_03;
    ppiVar11[-2] = (int *)0x19554;
    ppiVar11[-3] = (int *)auStack_250;
    ppiVar11[-4] = (int *)0x83a;
    func_0x000076d0();
    ppiVar11[-4] = (int *)0x1953c;
    ppiVar11[-5] = (int *)auStack_250;
    ppiVar11[-6] = (int *)0x84a;
    func_0x00002b68();
  }
  return;
}



// Function: FUN_00000a96 at 00000a96
// Size: 362 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a96(int param_1)

{
  int *piVar1;
  char cVar3;
  short sVar2;
  int *extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  undefined2 uVar4;
  short sVar5;
  undefined2 uVar6;
  undefined1 auStack_13a [50];
  undefined2 local_108;
  short local_106;
  undefined1 local_104 [256];
  
  piVar1 = *(int **)(param_1 + 8);
  func_0x00001bf0(piVar1);
  (**(code **)(*piVar1 + 0x188))(piVar1,0x4c697374);
  func_0x00001bf0(extraout_A0);
  local_104[0] = 0;
  (**(code **)(*extraout_A0 + 0x488))((short)extraout_A0,local_104);
  (**(code **)(*extraout_A0 + 0x44c))();
  func_0x000072f8((short)local_104);
  func_0x000076d0((short)auStack_13a,0x9500,extraout_A0w);
  DAT_00028b1a = '\0';
  cVar3 = func_0x000027d8(0x194f2,0x1951a,0x194dc,auStack_13a,0);
  if (cVar3 != '\0') {
    FUN_00000c00();
  }
  if (DAT_00028b1a != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    func_0x00001bf0(piVar1);
    (**(code **)(*piVar1 + 0x188))(piVar1,0x4c697374);
    func_0x00001bf0(extraout_A0_00);
    sVar2 = (**(code **)(*extraout_A0_00 + 0x488))();
    uVar6 = 0;
    sVar5 = (short)(sVar2 + -3) >> 0xf;
    uVar4 = (undefined2)((uint)_DAT_00027d2a >> 0x10);
    (**(code **)(*_DAT_00027d2a + 0x68))((short)_DAT_00027d2a,sVar2 + -3,1);
    (**(code **)(*extraout_A0_00 + 0x460))((short)extraout_A0_00,uVar4,sVar5,uVar6);
    (**(code **)(*extraout_A0_00 + 0x26c))();
    local_108 = *(undefined2 *)(extraout_A0_00 + 0x1f);
    local_106 = sVar2;
    (**(code **)(*extraout_A0_00 + 0x47c))();
  }
  return;
}



// Function: FUN_00000c00 at 00000c00
// Size: 16 bytes

void FUN_00000c00(void)

{
  DAT_00028b1a = 1;
  return;
}



// Function: FUN_00000c10 at 00000c10
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c10(int param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  int extraout_A0_03;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_204 [256];
  undefined1 auStack_104 [256];
  
  if (*(int *)(param_1 + 0x20) != 0x6f6b2020) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x188))(*(int **)(param_1 + 8),0x6e616d65);
  puVar9 = &stack0xfffffddc;
  if (extraout_A0 != 0) {
    sVar3 = (**(code **)(*_DAT_00027d2a + 0x58))();
    sVar5 = 1;
    puVar9 = &stack0xfffffddc;
    do {
      *(undefined4 *)(puVar9 + -4) = 0x194d5;
      *(undefined1 **)(puVar9 + -8) = auStack_104;
      *(undefined4 *)(puVar9 + -0xc) = 0xc6e;
      func_0x00007320();
      if (1 < sVar5) {
        puVar9[-2] = 0x20;
        *(undefined1 **)(puVar9 + -6) = auStack_104;
        *(undefined4 *)(puVar9 + -10) = 0xc84;
        func_0x00007348();
        auStack_204[0] = 0;
        *(int *)(puVar9 + -10) = (int)sVar5;
        *(undefined1 **)(puVar9 + -0xe) = auStack_204;
        *(undefined4 *)(puVar9 + -0x12) = 0xc96;
        func_0x00007640();
        *(undefined1 **)(puVar9 + -0x12) = auStack_204;
        *(undefined1 **)(puVar9 + -0x16) = auStack_104;
        *(undefined4 *)(puVar9 + -0x1a) = 0xca4;
        func_0x00007340();
        puVar9 = puVar9 + -8;
      }
      bVar2 = true;
      for (sVar6 = 1; sVar6 <= sVar3; sVar6 = sVar6 + 1) {
        *(int *)(puVar9 + -4) = (int)sVar6;
        *(int **)(puVar9 + -8) = _DAT_00027d2a;
        pcVar1 = *(code **)(**(int **)(puVar9 + -8) + 0x74);
        *(undefined4 *)(puVar9 + -0xc) = 0xcc4;
        (*pcVar1)();
        *(int *)(puVar9 + -0xc) = extraout_A0_00 + 4;
        *(undefined4 *)(puVar9 + -0x10) = 0xcd0;
        func_0x00007310();
        *(undefined4 *)(puVar9 + -0xc) = extraout_A0_01;
        *(undefined1 **)(puVar9 + -0x10) = auStack_104;
        *(undefined4 *)(puVar9 + -0x14) = 0xcde;
        func_0x00007310();
        *(undefined4 *)(puVar9 + -0x10) = extraout_A0_02;
        puVar9[-0x12] = 0;
        pcVar7 = puVar9 + -0x14;
        puVar9[-0x14] = 0;
        *(undefined4 *)(puVar9 + -0x18) = 0xcec;
        func_0x000075e8();
        puVar8 = puVar9 + -0xc;
        puVar9 = puVar9 + -0xc;
        if (*pcVar7 != '\0') {
          bVar2 = false;
          break;
        }
        puVar9 = puVar8;
      }
      if (bVar2) goto code_r0x00000d00;
      sVar5 = sVar5 + 1;
    } while( true );
  }
LAB_00000d5c:
  puVar9[-2] = 1;
  *(undefined4 *)(puVar9 + -6) = 0x6e657720;
  *(int *)(puVar9 + -10) = param_1;
  *(undefined4 *)(puVar9 + -0xe) = 0xd6e;
  func_0x00005010();
  return;
code_r0x00000d00:
  puVar9[-2] = 1;
  *(undefined1 **)(puVar9 + -6) = auStack_104;
  *(int *)(puVar9 + -10) = extraout_A0;
  pcVar1 = *(code **)(**(int **)(puVar9 + -10) + 1000);
  *(undefined4 *)(puVar9 + -0xe) = 0xd14;
  (*pcVar1)();
  *(undefined4 *)(puVar9 + -4) = _DAT_000266a8;
  pcVar1 = *(code **)(**(int **)(puVar9 + -4) + 0x1a4);
  *(undefined4 *)(puVar9 + -8) = 0xd30;
  (*pcVar1)();
  if (extraout_A0 != extraout_A0_03) {
    *(int *)(puVar9 + -4) = extraout_A0;
    pcVar1 = *(code **)(**(int **)(puVar9 + -4) + 0xc4);
    *(undefined4 *)(puVar9 + -8) = 0xd44;
    cVar4 = (*pcVar1)();
    if (cVar4 != '\0') {
      puVar9[-2] = 1;
      *(int *)(puVar9 + -6) = extraout_A0;
      pcVar1 = *(code **)(**(int **)(puVar9 + -6) + 0xcc);
      *(undefined4 *)(puVar9 + -10) = 0xd5a;
      (*pcVar1)();
    }
  }
  goto LAB_00000d5c;
}



// Function: FUN_00000c40 at 00000c40
// Size: 314 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c40(void)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  int extraout_A0_02;
  int unaff_A2;
  undefined4 unaff_A3;
  int unaff_A6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  puVar9 = &stack0x00000008;
  if (unaff_A2 != 0) {
    sVar3 = (**(code **)(*_DAT_00027d2a + 0x58))();
    sVar5 = 1;
    puVar9 = &stack0x00000008;
    do {
      *(undefined4 *)(puVar9 + -4) = 0x194d5;
      *(int *)(puVar9 + -8) = unaff_A6 + -0x100;
      *(undefined4 *)(puVar9 + -0xc) = 0xc6e;
      func_0x00007320();
      if (1 < sVar5) {
        puVar9[-2] = 0x20;
        *(int *)(puVar9 + -6) = unaff_A6 + -0x100;
        *(undefined4 *)(puVar9 + -10) = 0xc84;
        func_0x00007348();
        *(undefined1 *)(unaff_A6 + -0x200) = 0;
        *(int *)(puVar9 + -10) = (int)sVar5;
        *(int *)(puVar9 + -0xe) = unaff_A6 + -0x200;
        *(undefined4 *)(puVar9 + -0x12) = 0xc96;
        func_0x00007640();
        *(int *)(puVar9 + -0x12) = unaff_A6 + -0x200;
        *(int *)(puVar9 + -0x16) = unaff_A6 + -0x100;
        *(undefined4 *)(puVar9 + -0x1a) = 0xca4;
        func_0x00007340();
        puVar9 = puVar9 + -8;
      }
      bVar2 = true;
      for (sVar6 = 1; sVar6 <= sVar3; sVar6 = sVar6 + 1) {
        *(int *)(puVar9 + -4) = (int)sVar6;
        *(int **)(puVar9 + -8) = _DAT_00027d2a;
        pcVar1 = *(code **)(**(int **)(puVar9 + -8) + 0x74);
        *(undefined4 *)(puVar9 + -0xc) = 0xcc4;
        (*pcVar1)();
        *(int *)(puVar9 + -0xc) = extraout_A0 + 4;
        *(undefined4 *)(puVar9 + -0x10) = 0xcd0;
        func_0x00007310();
        *(undefined4 *)(puVar9 + -0xc) = extraout_A0_00;
        *(int *)(puVar9 + -0x10) = unaff_A6 + -0x100;
        *(undefined4 *)(puVar9 + -0x14) = 0xcde;
        func_0x00007310();
        *(undefined4 *)(puVar9 + -0x10) = extraout_A0_01;
        puVar9[-0x12] = 0;
        pcVar7 = puVar9 + -0x14;
        puVar9[-0x14] = 0;
        *(undefined4 *)(puVar9 + -0x18) = 0xcec;
        func_0x000075e8();
        puVar8 = puVar9 + -0xc;
        puVar9 = puVar9 + -0xc;
        if (*pcVar7 != '\0') {
          bVar2 = false;
          break;
        }
        puVar9 = puVar8;
      }
      if (bVar2) goto code_r0x00000d00;
      sVar5 = sVar5 + 1;
    } while( true );
  }
LAB_00000d5c:
  puVar9[-2] = 1;
  *(undefined4 *)(puVar9 + -6) = 0x6e657720;
  *(undefined4 *)(puVar9 + -10) = unaff_A3;
  *(undefined4 *)(puVar9 + -0xe) = 0xd6e;
  func_0x00005010();
  return;
code_r0x00000d00:
  puVar9[-2] = 1;
  *(int *)(puVar9 + -6) = unaff_A6 + -0x100;
  *(int *)(puVar9 + -10) = unaff_A2;
  pcVar1 = *(code **)(**(int **)(puVar9 + -10) + 1000);
  *(undefined4 *)(puVar9 + -0xe) = 0xd14;
  (*pcVar1)();
  *(undefined4 *)(puVar9 + -4) = _DAT_000266a8;
  pcVar1 = *(code **)(**(int **)(puVar9 + -4) + 0x1a4);
  *(undefined4 *)(puVar9 + -8) = 0xd30;
  (*pcVar1)();
  if (unaff_A2 != extraout_A0_02) {
    *(int *)(puVar9 + -4) = unaff_A2;
    pcVar1 = *(code **)(**(int **)(puVar9 + -4) + 0xc4);
    *(undefined4 *)(puVar9 + -8) = 0xd44;
    cVar4 = (*pcVar1)();
    if (cVar4 != '\0') {
      puVar9[-2] = 1;
      *(int *)(puVar9 + -6) = unaff_A2;
      pcVar1 = *(code **)(**(int **)(puVar9 + -6) + 0xcc);
      *(undefined4 *)(puVar9 + -10) = 0xd5a;
      (*pcVar1)();
    }
  }
  goto LAB_00000d5c;
}



// Function: FUN_00000d7a at 00000d7a
// Size: 22 bytes

void FUN_00000d7a(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined2 extraout_A0w;
  
  FUN_00000080();
  cVar1 = FUN_00000de0((char)param_2,extraout_A0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x400))();
    func_0x00005010(extraout_A0w,0x7720);
  }
  func_0x00003810((char)param_1,param_2);
  return;
}



// Function: FUN_00000d90 at 00000d90
// Size: 72 bytes

void FUN_00000d90(void)

{
  char cVar1;
  undefined2 extraout_A0w;
  int *unaff_A4;
  
  cVar1 = FUN_00000de0();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_A4 + 0x400))();
    func_0x00005010(extraout_A0w,0x7720);
  }
  func_0x00003810();
  return;
}



// Function: FUN_00000de0 at 00000de0
// Size: 145 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00000de0(void)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int extraout_A0;
  int unaff_A6;
  
  sVar1 = *(short *)(unaff_A6 + 0xc);
  pbVar5 = *(byte **)(unaff_A6 + 0xe);
  if (sVar1 == 1) {
    pbVar5 = (byte *)func_0x00007350(pbVar5,0x1949e);
  }
  else if (sVar1 == 2) {
    pbVar5 = (byte *)func_0x00007350(pbVar5,0x19491);
  }
  else if (sVar1 == 3) {
    pbVar5 = (byte *)func_0x00007350(pbVar5,0x19488);
  }
  else {
    (**(code **)(*_DAT_00027d2a + 0x74))(_DAT_00027d2a,sVar1 + -3);
    pbVar3 = pbVar5;
    pbVar4 = (byte *)(extraout_A0 + 4);
    for (iVar2 = *(byte *)(extraout_A0 + 4) + 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *pbVar4;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    }
  }
  return pbVar5;
}



// Function: FUN_00000e72 at 00000e72
// Size: 44 bytes

void FUN_00000e72(int *param_1,undefined4 param_2)

{
  func_0x00004c70(param_1,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,8,param_2);
  return;
}



// Function: FUN_00000e9e at 00000e9e
// Size: 18 bytes

void FUN_00000e9e(undefined4 param_1)

{
  FUN_00000eb0(param_1);
  return;
}



// Function: FUN_00000eb0 at 00000eb0
// Size: 972 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000eb0(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  undefined4 extraout_A0_14;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_44e [256];
  undefined1 auStack_34e [256];
  undefined1 auStack_24e [256];
  byte local_14e [256];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  (**(code **)(*_DAT_000257ee + 0x68))();
  local_8 = extraout_A0;
  func_0x00001bf0(extraout_A0);
  (**(code **)(*local_8 + 0x400))();
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar6 = func_0x000076a8((short)auStack_4e);
  if (iVar6 == 0) {
    (**(code **)(*local_8 + 0x194))();
    FUN_0000127c();
    iVar6 = (**(code **)(*local_8 + 0x40c))();
    piVar1 = *(int **)(extraout_A0_00 + 0x50);
    (**(code **)(*local_8 + 0x198))();
    if (iVar6 == 0x6f6b2020) {
      (**(code **)(*local_8 + 0x188))((short)local_8,0x4c697374);
      puVar14 = &stack0xfffffb96;
      if (extraout_A0_01 != (int *)0x0) {
        local_14e[0] = 0;
        sVar7 = (**(code **)(*extraout_A0_01 + 0x488))();
        puVar14 = &stack0xfffffb96;
        if (sVar7 == 0) {
          (**(code **)(*local_8 + 0x188))((short)local_8,0x6e616d65);
          puVar14 = &stack0xfffffb96;
          if (extraout_A0_02 != (int *)0x0) {
            (**(code **)(*extraout_A0_02 + 0x3d4))((short)extraout_A0_02,local_14e);
            sVar8 = (**(code **)(*_DAT_00027d2a + 0x58))();
            iVar6 = 0;
            puVar11 = &stack0xfffffb96;
            for (sVar9 = 1; puVar14 = puVar11, sVar9 <= sVar8; sVar9 = sVar9 + 1) {
              *(int *)(puVar11 + -4) = (int)sVar9;
              *(int **)(puVar11 + -8) = _DAT_00027d2a;
              pcVar2 = *(code **)(**(int **)(puVar11 + -8) + 0x74);
              *(undefined4 *)(puVar11 + -0xc) = 0x1010;
              (*pcVar2)();
              *(int *)(puVar11 + -0xc) = extraout_A0_03 + 4;
              *(undefined4 *)(puVar11 + -0x10) = 0x101c;
              func_0x00007310();
              *(undefined4 *)(puVar11 + -0xc) = extraout_A0_04;
              *(byte **)(puVar11 + -0x10) = local_14e;
              *(undefined4 *)(puVar11 + -0x14) = 0x102a;
              func_0x00007310();
              *(undefined4 *)(puVar11 + -0x10) = extraout_A0_05;
              puVar11[-0x12] = 0;
              pcVar10 = puVar11 + -0x14;
              puVar11[-0x14] = 0;
              *(undefined4 *)(puVar11 + -0x18) = 0x1038;
              func_0x000075e8();
              puVar14 = puVar11 + -0xc;
              puVar11 = puVar11 + -0xc;
              iVar6 = extraout_A0_03;
              if (*pcVar10 != '\0') break;
            }
            if (sVar8 < sVar9) {
              sVar9 = -1;
              *(undefined4 *)(puVar14 + -6) = 0x1546c;
              *(undefined1 **)(puVar14 + -10) = auStack_24e;
              *(undefined4 *)(puVar14 + -0xe) = 0x1092;
              func_0x00007320();
              *(undefined4 *)(puVar14 + -6) = extraout_A0_06;
              *(undefined4 *)(puVar14 + -10) = 0x109c;
              func_0x00007310();
              *(undefined4 *)(puVar14 + -6) = extraout_A0_07;
              *(byte **)(puVar14 + -10) = local_14e;
              *(undefined4 *)(puVar14 + -0xe) = 0x10aa;
              func_0x00007310();
              *(undefined4 *)(puVar14 + -10) = extraout_A0_08;
              puVar14[-0xc] = 0;
              puVar14[-0xe] = 0;
              *(undefined4 *)(puVar14 + -0x12) = 0x10b8;
              func_0x000075e8();
              if (puVar14[-0xe] == '\0') {
                *(undefined4 *)(puVar14 + -0x12) = 0x1545f;
                *(undefined1 **)(puVar14 + -0x16) = auStack_34e;
                *(undefined4 *)(puVar14 + -0x1a) = 0x10d4;
                func_0x00007320();
                *(undefined4 *)(puVar14 + -0x12) = extraout_A0_09;
                *(undefined4 *)(puVar14 + -0x16) = 0x10de;
                func_0x00007310();
                *(undefined4 *)(puVar14 + -0x12) = extraout_A0_10;
                *(byte **)(puVar14 + -0x16) = local_14e;
                *(undefined4 *)(puVar14 + -0x1a) = 0x10ec;
                func_0x00007310();
                *(undefined4 *)(puVar14 + -0x16) = extraout_A0_11;
                puVar14[-0x18] = 0;
                puVar14[-0x1a] = 0;
                *(undefined4 *)(puVar14 + -0x1e) = 0x10fa;
                func_0x000075e8();
                if (puVar14[-0x1a] == '\0') {
                  *(undefined4 *)(puVar14 + -0x1e) = 0x15456;
                  *(undefined1 **)(puVar14 + -0x22) = auStack_44e;
                  *(undefined4 *)(puVar14 + -0x26) = 0x1114;
                  func_0x00007320();
                  *(undefined4 *)(puVar14 + -0x1e) = extraout_A0_12;
                  *(undefined4 *)(puVar14 + -0x22) = 0x111e;
                  func_0x00007310();
                  *(undefined4 *)(puVar14 + -0x1e) = extraout_A0_13;
                  *(byte **)(puVar14 + -0x22) = local_14e;
                  *(undefined4 *)(puVar14 + -0x26) = 0x112c;
                  func_0x00007310();
                  *(undefined4 *)(puVar14 + -0x22) = extraout_A0_14;
                  puVar14[-0x24] = 0;
                  pcVar12 = puVar14 + -0x26;
                  puVar14[-0x26] = 0;
                  *(undefined4 *)(puVar14 + -0x2a) = 0x113a;
                  func_0x000075e8();
                  puVar13 = puVar14 + -0x24;
                  puVar14 = puVar14 + -0x24;
                  if (*pcVar12 != '\0') {
                    sVar9 = 2;
                    puVar14 = puVar13;
                  }
                }
                else {
                  sVar9 = 1;
                  puVar14 = puVar14 + -0x18;
                }
              }
              else {
                sVar9 = 0;
                puVar14 = puVar14 + -0xc;
              }
              if (sVar9 != -1) {
                bVar3 = true;
                for (sVar8 = 0; sVar8 < 0xb; sVar8 = sVar8 + 1) {
                  if (*(short *)(extraout_A0_00 + 0x3a + sVar8 * 2) !=
                      *(short *)(sVar9 * 0x16 + 0x154ae + sVar8 * 2)) {
                    bVar3 = false;
                    break;
                  }
                }
                if (bVar3) {
                  sVar7 = sVar9 + 1;
                }
              }
            }
            else {
              bVar3 = true;
              for (sVar8 = 0; sVar8 < 0xb; sVar8 = sVar8 + 1) {
                if (*(short *)(extraout_A0_00 + 0x3a + sVar8 * 2) !=
                    *(short *)(sVar8 * 2 + iVar6 + 0x104)) {
                  bVar3 = false;
                  break;
                }
              }
              if (bVar3) {
                sVar7 = sVar9 + 3;
              }
            }
          }
        }
        if (sVar7 == 0) {
          _DAT_00027d2e = -3;
          _DAT_00027d38 = 1;
          pbVar4 = &DAT_00027d3c;
          pbVar5 = local_14e;
          for (iVar6 = local_14e[0] + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pbVar4 = *pbVar5;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
          }
          for (sVar7 = 0; sVar7 < 0xb; sVar7 = sVar7 + 1) {
            *(undefined2 *)(sVar7 * 2 + 0x27e3c) =
                 *(undefined2 *)(extraout_A0_00 + 0x3a + sVar7 * 2);
          }
        }
        else {
          if (sVar7 < 4) {
            _DAT_00027d2e = -(sVar7 + -1);
          }
          else {
            _DAT_00027d2e = sVar7 + -3;
          }
          _DAT_00027d38 = 0;
        }
      }
      *(undefined4 *)(puVar14 + -4) = param_1;
      *(undefined4 *)(puVar14 + -8) = 0x1204;
      func_0x00003ec0();
      *(int **)(puVar14 + -8) = piVar1;
      *(undefined4 *)(puVar14 + -0xc) = 0x120c;
      func_0x00000e10();
      DAT_00027d36 = 1;
    }
    else {
      func_0x00000e10(_DAT_00027d2a);
      puVar14 = &stack0xfffffb96;
      _DAT_00027d2a = piVar1;
    }
    *(int **)(puVar14 + -4) = local_8;
    pcVar2 = *(code **)(**(int **)(puVar14 + -4) + 0x3a0);
    *(undefined4 *)(puVar14 + -8) = 0x123a;
    (*pcVar2)();
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
    }
    local_8 = (int *)0x0;
    func_0x00001c10();
  }
  return;
}



// Function: FUN_0000127c at 0000127c
// Size: 8 bytes

void FUN_0000127c(void)

{
  return;
}



