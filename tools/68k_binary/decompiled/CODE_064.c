// Warlords II - Decompiled 68k Code
// Segment: CODE_064
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000074 at 00000074
// Size: 140 bytes

void FUN_00000074(undefined2 param_1,int param_2)

{
  if (param_2 == 0x646f6e74) {
    func_0x00005360();
  }
  else if (param_2 == 0x66656d61) {
    func_0x00005360();
  }
  else if (param_2 == 0x68697265) {
    func_0x00005360();
  }
  else if (param_2 == 0x6d616c65) {
    func_0x00005360();
  }
  else if (param_2 == 0x6e616d65) {
    func_0x00005360();
  }
  else {
    func_0x00005308(param_1,(short)param_2);
  }
  return;
}



// Function: FUN_00000100 at 00000100
// Size: 334 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000100(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 uVar5;
  short local_3a;
  short local_38;
  undefined1 auStack_36 [50];
  
  func_0x00006e70(0,0);
  func_0x00007498(-_DAT_000284b6);
  _DAT_000284b6 = 0;
  local_3a = 1;
  local_38 = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar4 = &local_3a;
  }
  else {
    psVar4 = &local_38;
  }
  sVar1 = 0;
  if (*psVar4 != 1) {
    uVar5 = 0;
    func_0x00004960();
    sVar1 = func_0x00002ad0(100,uVar5);
    if (sVar1 < 0x46) {
      sVar2 = 1;
    }
    else if (sVar1 < 0x5f) {
      sVar2 = 2;
    }
    else {
      sVar2 = 3;
    }
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      sVar1 = 0;
    }
    else {
      sVar1 = 1;
    }
    if (sVar1 == 0) {
      if (sVar2 == 1) {
        func_0x00002ad8(0);
        func_0x000076d0((short)auStack_36,extraout_A0w);
      }
      else {
        func_0x00002ad8(1,sVar2);
        func_0x000076d0((short)auStack_36,extraout_A0w_00);
      }
      sVar1 = func_0x00002b68((short)auStack_36,0);
    }
    for (sVar3 = 0; sVar3 < sVar2; sVar3 = sVar3 + 1) {
      sVar1 = func_0x000049c8(_DAT_000284b8);
    }
  }
  return sVar1;
}



// Function: FUN_0000024e at 0000024e
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000024e(void)

{
  FUN_000004ae();
  FUN_0000026e(0x84be);
  return;
}



// Function: FUN_0000026e at 0000026e
// Size: 576 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000026e(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short *extraout_A0;
  short *psVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  short local_4a;
  short local_48;
  undefined1 auStack_46 [23];
  undefined1 local_2f;
  undefined1 local_29;
  short local_8;
  short local_6;
  
  uVar8 = _DAT_000284b4;
  sVar4 = 0;
  while ((sVar4 < 0x28 && (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x544) != 0))) {
    sVar4 = sVar4 + 1;
  }
  uVar10 = (undefined2)((uint)param_1 >> 0x10);
  uVar9 = 1;
  iVar2 = sVar4 * 0x14 + _DAT_0002884c + 0x224;
  uVar6 = (undefined2)((uint)iVar2 >> 0x10);
  func_0x000076d0((char)iVar2,0x5ac4,(short)param_1);
  *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0x544) = 1;
  *(undefined2 *)(sVar4 * 2 + _DAT_0002884c + 0x594) = param_2._0_2_;
  pbVar1 = (byte *)(_DAT_0002884c + 0x5e4 + (int)sVar4);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(_DAT_0002884c + 0x5e4 + (int)sVar4);
  *pbVar1 = *pbVar1 & 3;
  func_0x00007490(uVar6,uVar9,uVar10);
  func_0x000049c0(1,&local_6,(short)&local_8);
  func_0x00002b30();
  if (extraout_A0 != (short *)0x0) {
    *extraout_A0 = local_6;
    extraout_A0[1] = local_8;
    _DAT_000284b8 = local_6;
    _DAT_000284ba = local_8;
    *(undefined1 *)(extraout_A0 + 2) = 0x1c;
    puVar11 = auStack_46;
    uVar9 = 0x1c;
    func_0x000049a8((short)((uint)puVar11 >> 0x10));
    *(undefined1 *)((int)extraout_A0 + 7) = local_29;
    *(undefined1 *)(extraout_A0 + 3) = local_29;
    *(undefined1 *)(extraout_A0 + 4) = local_2f;
    *(char *)((int)extraout_A0 + 9) = (char)uVar8;
    *(char *)(extraout_A0 + 5) = (char)sVar4;
    *(undefined1 *)((int)extraout_A0 + 0xb) = 0;
    uVar6 = *(undefined2 *)(local_8 * 0xe0 + _DAT_00028850 + local_6 * 2);
    uVar8 = *(undefined2 *)(_DAT_0002884c + 0x110);
    uVar7 = (undefined1)local_8;
    sVar4 = local_6;
    func_0x000074c8(uVar7,uVar9,(short)puVar11);
    *(undefined2 *)(local_8 * 0xe0 + _DAT_00028850 + local_6 * 2) = uVar6;
    func_0x00007438((short)extraout_A0,sVar4,uVar8);
    local_4a = 1;
    local_48 = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar5 = &local_4a;
    }
    else {
      psVar5 = &local_48;
    }
    if (*psVar5 < 2) {
      *(undefined1 *)(*(short *)(_DAT_0002884c + 0x110) * 0x1e + _DAT_0002884c + 0xd28) = 3;
      sVar4 = *(short *)(_DAT_0002884c + 0x182);
      do {
        sVar3 = sVar4 + -1;
        if (sVar4 == 0) break;
        sVar4 = sVar3;
      } while ((short *)(sVar3 * 0x16 + _DAT_00028854) != extraout_A0);
      *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x1e + _DAT_0002884c + 0xd2a) = sVar3;
      func_0x00007460();
    }
    else {
      FUN_00000100();
    }
    func_0x00006e50(uVar7,0,(short)param_1);
  }
  return;
}



// Function: FUN_000004ae at 000004ae
// Size: 424 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004ae(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  int extraout_A0_00;
  char *pcVar6;
  char *pcVar7;
  
  sVar4 = 0;
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  func_0x000076d0(0x278a8,0x5ab6,*(undefined2 *)(_DAT_0002884c + 0x110));
  sVar2 = func_0x00002840(0x20,0x278a8);
  if (sVar2 == 0) {
    func_0x000076d0(0x78a8,0x5aa8,(char)*(undefined2 *)(_DAT_0002884c + 0x110));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00002800(0x5420,0x78a8);
  if (extraout_A0 == (int *)0x0) {
    _DAT_000284d2 = 0;
    pcVar6 = &DAT_000284be;
    pcVar7 = &DAT_00015a9d;
    do {
      cVar1 = *pcVar7;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar3 = (**(code **)(*extraout_A0 + 0x60))();
  func_0x00001ea0(sVar3);
  func_0x00002820(extraout_A0,extraout_A0_00,sVar3);
  func_0x00002818((short)extraout_A0);
  sVar2 = 0;
  if (*(short *)(_DAT_0002884c + 0x136) == 1) {
    sVar4 = func_0x00002ad0(8);
  }
  else {
    for (sVar5 = 0; sVar5 < sVar3; sVar5 = sVar5 + 1) {
      if (*(char *)(extraout_A0_00 + sVar5) == '#') {
        sVar4 = sVar4 + 1;
      }
    }
    sVar4 = func_0x00002ad0(sVar4);
  }
  for (sVar5 = 0; sVar5 < sVar3; sVar5 = sVar5 + 1) {
    if ((*(char *)(extraout_A0_00 + sVar5) == '#') && (sVar2 = sVar2 + 1, sVar2 == sVar4)) {
      sVar5 = sVar5 + 1;
      break;
    }
  }
  _DAT_000284d2 = (ushort)(*(char *)(extraout_A0_00 + sVar5) != '0');
  sVar4 = sVar5 + 2;
  while( true ) {
    if (sVar3 <= sVar4) goto LAB_00000676;
    if (*(char *)(extraout_A0_00 + sVar4) < ' ') break;
    sVar4 = sVar4 + 1;
  }
  *(undefined1 *)(extraout_A0_00 + sVar4) = 0;
  pcVar6 = &DAT_000284be;
  pcVar7 = (char *)(extraout_A0_00 + (short)(sVar5 + 2));
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
LAB_00000676:
  func_0x00001d18((char)extraout_A0_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000068e at 0000068e
// Size: 1636 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000068e(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  undefined1 extraout_A0b_00;
  undefined2 extraout_A0w;
  undefined1 extraout_A0b_01;
  undefined1 extraout_A0b_02;
  undefined1 extraout_A0b_03;
  undefined2 extraout_A0w_00;
  undefined1 extraout_A0b_04;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined1 extraout_A0b_05;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  undefined1 extraout_A0b_06;
  undefined2 extraout_A0w_06;
  int *extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w_07;
  undefined4 extraout_A0_03;
  undefined2 extraout_A0w_08;
  undefined2 extraout_A0w_09;
  int *extraout_A0_04;
  int *extraout_A0_05;
  undefined1 extraout_A0b_07;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 auStack_640 [256];
  undefined1 auStack_540 [256];
  undefined1 auStack_440 [256];
  undefined1 auStack_340 [256];
  undefined1 auStack_240 [256];
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  short local_138;
  short local_136;
  undefined1 auStack_134 [50];
  undefined1 auStack_102 [50];
  undefined1 auStack_d0 [50];
  undefined1 auStack_9e [80];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_138 = 1;
  local_136 = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar3 = &local_138;
  }
  else {
    psVar3 = &local_136;
  }
  sVar1 = *psVar3;
  if (DAT_000264d0 != '\0') {
    func_0x00006688();
    func_0x000073b0(0x3a);
    if (extraout_A0 != 0) {
      func_0x00007120((char)extraout_A0);
    }
  }
  local_8 = (int *)0x0;
  (**(code **)(*_DAT_000257ee + 0x68))
            ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
  local_8 = extraout_A0_00;
  func_0x00001bf0((char)extraout_A0_00);
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar2 = func_0x000076a8((short)auStack_4e);
  if (iVar2 == 0) {
    uVar7 = 0;
    uVar4 = 1;
    func_0x00006e70(1,0);
    func_0x00002968((char)*(undefined2 *)(_DAT_000284b4 * 0x42 + _DAT_0002884c + 0x15c6),uVar4,uVar7
                   );
    func_0x00006e78(0);
    FUN_000004ae();
    if (sVar1 == 1) {
      if (_DAT_000284d2 == 0) {
        func_0x00002ad8(0);
        func_0x000076d0((short)auStack_9e,extraout_A0b);
        func_0x00002ad8(1);
        func_0x000076d0((short)auStack_d0,extraout_A0b_00);
        func_0x00002ad8(2);
        func_0x000076d0((short)auStack_102,extraout_A0w);
        func_0x00002ad8(3,_DAT_000284b4 * 0x42 + _DAT_0002884c + 0x15c8);
        func_0x000076d0((short)auStack_134,extraout_A0b_01);
      }
      else {
        func_0x00002ad8(8);
        func_0x000076d0((short)auStack_9e,extraout_A0b_02);
        func_0x00002ad8(9);
        func_0x000076d0((short)auStack_d0,extraout_A0b_03);
        func_0x00002ad8(10);
        func_0x000076d0((short)auStack_102,extraout_A0w_00);
        func_0x00002ad8(0xb,_DAT_000284b4 * 0x42 + _DAT_0002884c + 0x15c8);
        func_0x000076d0((short)auStack_134,extraout_A0b_04);
      }
    }
    else if (_DAT_000284d2 == 0) {
      func_0x00002ad8(4,(char)_DAT_000284b4 * 'B' + (char)_DAT_0002884c + -0x38);
      func_0x000076d0((char)auStack_9e,extraout_A0w_01);
      func_0x00002ad8(5,_DAT_000284b6);
      func_0x000076d0((short)auStack_d0,extraout_A0w_02);
      func_0x00002ad8(6,(int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c +
                                       0x186));
      func_0x000076d0((short)auStack_102,extraout_A0b_05);
      func_0x00002ad8(7);
      func_0x000076d0((short)auStack_134,extraout_A0w_03);
    }
    else {
      func_0x00002ad8(0xc,(char)_DAT_000284b4 * 'B' + (char)_DAT_0002884c + -0x38);
      func_0x000076d0((char)auStack_9e,extraout_A0w_04);
      func_0x00002ad8(0xd,_DAT_000284b6);
      func_0x000076d0((short)auStack_d0,extraout_A0w_05);
      func_0x00002ad8(0xe,(int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c +
                                         0x186));
      func_0x000076d0((short)auStack_102,extraout_A0b_06);
      func_0x00002ad8(0xf);
      func_0x000076d0((short)auStack_134,extraout_A0w_06);
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,0x74);
    if (extraout_A0_01 != (int *)0x0) {
      (**(code **)(*extraout_A0_01 + 0x3d8))();
    }
    func_0x00007320((short)auStack_240,(char)auStack_9e);
    uVar5 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    uVar7 = 0x74;
    uVar4 = (undefined2)((uint)local_8 >> 0x10);
    func_0x00006e38((char)local_8,0x7231,(char)extraout_A0_02);
    func_0x00007320((short)auStack_340,(short)auStack_d0,uVar4,uVar7,uVar5);
    uVar7 = 0x96;
    func_0x00006e38(local_8,0x7232,extraout_A0w_07);
    func_0x00007320((short)auStack_440,(short)auStack_102);
    uVar6 = (undefined2)((uint)extraout_A0_03 >> 0x10);
    uVar5 = 0x7374;
    uVar4 = (undefined2)((uint)local_8 >> 0x10);
    func_0x00006e38((short)local_8,0x7233,(short)extraout_A0_03);
    func_0x00007320(auStack_540,(short)auStack_134,uVar4,uVar5,uVar6,uVar7);
    func_0x00006e38(local_8,0x73747234,extraout_A0w_08);
    func_0x00007320(auStack_640,0x84be);
    func_0x00006e38(local_8,0x6e616d65,extraout_A0w_09);
    (**(code **)(*local_8 + 0x188))(local_8,0x73657820);
    if (extraout_A0_04 != (int *)0x0) {
      if (_DAT_000284d2 == 0) {
        uVar7 = 0x65;
      }
      else {
        uVar7 = 0x61;
      }
      (**(code **)(*extraout_A0_04 + 1000))((short)extraout_A0_04,uVar7);
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,0x74);
    if (extraout_A0_05 != (int *)0x0) {
      local_13c = 1;
      local_13a = *(undefined2 *)(_DAT_0002884c + 0x136);
      uVar7 = 0xa6;
      (**(code **)(*extraout_A0_05 + 0x3a0))();
      local_140 = 1;
      local_13e = *(undefined2 *)(_DAT_0002884c + 0x136);
      (**(code **)(*extraout_A0_05 + 0x334))((short)extraout_A0_05,uVar7);
    }
    (**(code **)(*local_8 + 0x194))();
    if ((*(short *)(_DAT_0002884c + 0x12e) != 0) && ((*(byte *)(_DAT_0002884c + 0x134) & 1) == 0)) {
      *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 1;
      func_0x00002ae0(0);
      func_0x00003c60(extraout_A0b_07);
    }
    iVar2 = (**(code **)(*local_8 + 0x40c))();
    (**(code **)(*local_8 + 0x198))();
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    (**(code **)(*_DAT_00027fbc + 0x268))();
    (**(code **)(*_DAT_00027fc4 + 0x268))();
    (**(code **)(*_DAT_00027fc8 + 0x268))();
    if (iVar2 == 0x68697265) {
      FUN_00000cf2((undefined1)local_8);
    }
    else {
      FUN_00000e0e((undefined1)local_8);
    }
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
    }
    local_8 = (int *)0x0;
    func_0x00001c10((char)((uint)local_18 >> 0x10));
  }
  return;
}



// Function: FUN_00000cf2 at 00000cf2
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000cf2(int *param_1)

{
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 extraout_A0w;
  int extraout_A0_01;
  undefined2 extraout_A0w_00;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  uVar3 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x188))(uVar3,0x6d65);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3d4))((short)extraout_A0,(short)local_104);
  }
  (**(code **)(*param_1 + 0x188))(uVar3,0x7820);
  if (extraout_A0_00 != (int *)0x0) {
    iVar1 = (**(code **)(*extraout_A0_00 + 0x3e4))();
    _DAT_000284d2 = (short)(iVar1 != 0x6d616c65);
  }
  func_0x000072f8((short)local_104);
  FUN_0000026e(extraout_A0w);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x198))();
    func_0x000073b0(0x2e);
    uVar2 = 0;
    if (extraout_A0_01 != 0) {
      func_0x000070e8((short)extraout_A0_01);
      uVar2 = extraout_A0w_00;
    }
    func_0x00006dd0(uVar2,uVar3);
    (**(code **)(*param_1 + 0x104))(uVar3,uVar2);
  }
  func_0x000048a0(0);
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar1 + 0x1d4) = 1;
  func_0x00003e20((short)iVar1,0x3ef);
  return;
}



// Function: FUN_00000e0e at 00000e0e
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e0e(int *param_1)

{
  int iVar1;
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar2;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x198))();
    func_0x000073b0(0x2e);
    uVar2 = 0;
    if (extraout_A0 != 0) {
      func_0x000070e8((short)extraout_A0);
      uVar2 = extraout_A0w;
    }
    func_0x00006dd0(uVar2,(short)param_1);
    (**(code **)(*param_1 + 0x104))((short)param_1,uVar2);
  }
  func_0x000048a0(0);
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar1 + 0x1d4) = 1;
  func_0x00003e20((short)iVar1,0x3ef);
  return;
}



