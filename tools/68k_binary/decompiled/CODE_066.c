// Warlords II - Decompiled 68k Code
// Segment: CODE_066
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000032 at 00000032
// Size: 146 bytes

void FUN_00000032(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x16);
  if (iVar1 == 0x6974656d) {
    FUN_0000071c();
  }
  else if (iVar1 == 0x6d617073) {
    FUN_00000740();
  }
  else if (iVar1 == 0x6d6f6e65) {
    FUN_00000630();
  }
  else if (iVar1 == 0x6f766572) {
    FUN_0000082e(CONCAT22((short)((param_2 & 0x7f00) / 0x100),(short)param_2) & 0xffff00ff);
  }
  else {
    func_0x00004a30(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000000c4 at 000000c4
// Size: 280 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000000c4(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  
  (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x6974656d);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x334))();
    (**(code **)(*extraout_A0 + 0x70))();
  }
  (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x6d6f6e65);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x334))();
    (**(code **)(*extraout_A0_00 + 0x70))();
  }
  (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x6d617073);
  if (extraout_A0_01 != (int *)0x0) {
    (**(code **)(*extraout_A0_01 + 0x334))();
    (**(code **)(*extraout_A0_01 + 0x70))();
  }
  (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x646f6e65);
  uVar1 = 0;
  if (extraout_A0_02 != (int *)0x0) {
    (**(code **)(*extraout_A0_02 + 0x334))();
    uVar1 = (**(code **)(*extraout_A0_02 + 0x70))();
  }
  return uVar1;
}



// Function: FUN_000001dc at 000001dc
// Size: 154 bytes

void FUN_000001dc(undefined2 param_1,int param_2)

{
  if (param_2 == 0x646f6e65) {
    func_0x00005360();
  }
  else if (param_2 == 0x6974656d) {
    func_0x00005360();
  }
  else if (param_2 == 0x6d617073) {
    func_0x00005360();
  }
  else if (param_2 == 0x6d6f6e65) {
    func_0x00005360();
  }
  else if (param_2 == 0x6f766572) {
    func_0x00005358();
    func_0x00005348(0x984e,0x9832);
  }
  else {
    func_0x00005308(param_1,(short)param_2);
  }
  return;
}



// Function: FUN_00000276 at 00000276
// Size: 74 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000276(short *param_1)

{
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_8 = param_1[3] + param_1[1];
  local_6 = param_1[2] + *param_1;
  local_c = param_1[1];
  local_a = *param_1;
  func_0x00007258(&local_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000002ca at 000002ca
// Size: 352 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002ca(code *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  char *pcVar5;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  _DAT_000283f6 = param_3._2_2_;
  pcVar5 = &DAT_000283de;
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  _DAT_000283da = param_1;
  for (_DAT_000283d6 = param_3._0_2_; 4 < _DAT_000283d6; _DAT_000283d6 = _DAT_000283d6 + -1) {
  }
  FUN_0000042a();
  if (_DAT_000283f2 != (int *)0x0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar3 = func_0x000076a8((short)auStack_4a);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*_DAT_000283f2 + 0x40c))();
      (**(code **)(*_DAT_000283f2 + 0x198))();
      bVar2 = false;
      if (iVar3 == 0x6f6b2020) {
        (**(code **)(*_DAT_000283f2 + 0x188))((short)_DAT_000283f2,0x7374);
        if (extraout_A0 != (int *)0x0) {
          sVar4 = (**(code **)(*extraout_A0 + 0x488))();
          if (0 < sVar4) {
            (*param_1)();
            bVar2 = true;
          }
        }
      }
      if (!bVar2) {
        (*param_1)();
      }
      (**(code **)(*_DAT_000283f2 + 0x3a0))();
      _DAT_000283f2 = (int *)0x0;
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_000283f2 != (int *)0x0) {
        (**(code **)(*_DAT_000283f2 + 0x3a0))();
      }
      _DAT_000283f2 = (int *)0x0;
      func_0x00001c10((short)((uint)local_14 >> 0x10));
    }
  }
  return;
}



// Function: FUN_0000042a at 0000042a
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000042a(void)

{
  int *extraout_A0;
  undefined2 extraout_A0w;
  undefined1 auStack_104 [256];
  
  if (_DAT_000283f2 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    _DAT_000283f2 = extraout_A0;
    func_0x00001bf0(extraout_A0);
  }
  (**(code **)(*_DAT_000283f2 + 0x194))();
  func_0x00007320(auStack_104,0x83de);
  func_0x00006e38(_DAT_000283f2,0x6e616d65,extraout_A0w);
  FUN_000004ae();
  return;
}



// Function: FUN_000004ae at 000004ae
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000004ae(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  undefined2 uVar2;
  undefined2 local_c;
  undefined2 uVar3;
  
  (**(code **)(*_DAT_000283f2 + 0x188))((short)_DAT_000283f2,0x7374);
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar3 = *(undefined2 *)(extraout_A0 + 0x1f);
    uVar2 = (undefined2)((uint)extraout_A0 >> 0x10);
    local_c = SUB42(extraout_A0,0);
    (**(code **)(*extraout_A0 + 0x45c))();
    (**(code **)(*extraout_A0 + 0x470))(local_c,uVar2,uVar3);
    uVar1 = (**(code **)(*extraout_A0 + 0x47c))();
  }
  return uVar1;
}



// Function: FUN_00000520 at 00000520
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000520(undefined4 param_1)

{
  undefined2 extraout_A0w;
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  FUN_0000126e();
  iVar3 = (uint)(ushort)_DAT_000288b0[1] << 0x10;
  uVar2 = *_DAT_000288b0;
  func_0x00003268();
  uVar1 = 6;
  func_0x000029e8(uVar2,iVar3);
  func_0x00003290(uVar1);
  func_0x00002ad8(0,(short)((short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224));
  func_0x000076d0(0x78f8,extraout_A0w);
  func_0x00003298(0x278f8);
  func_0x00002a08();
  func_0x00006d80((short)_DAT_000297f4);
  func_0x00002b68(0,0);
  func_0x00002ab0();
  func_0x00003ae8(_DAT_000288b0[1]);
  if (_DAT_00027e86 != (int *)0x0) {
    (**(code **)(*_DAT_00027e86 + 0x3a0))();
  }
  _DAT_00027e86 = (int *)0x0;
  func_0x00003e20((short)*(undefined4 *)(_DAT_000297f4 + 0x80),0x3fa);
  iVar3 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar3 + 0x1d6) = param_1._0_2_;
  func_0x00003e20((short)iVar3,0x3f8);
  return;
}



// Function: FUN_00000630 at 00000630
// Size: 214 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000630(void)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  
  sVar1 = func_0x00002ad0(0x301f4);
  iVar2 = (int)sVar1 +
          (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186);
  if (30000 < iVar2) {
    iVar2 = 30000;
  }
  *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) = (short)iVar2;
  func_0x00007488();
  func_0x00002ad8(0x3c0000);
  FUN_0000122e(extraout_A0);
  func_0x00002ad8(0x3c0001,(int)sVar1);
  func_0x000076d0(0x278f8,extraout_A0_00);
  FUN_0000122e(0x278f8);
  (**(code **)(*_DAT_00027e86 + 0x400))();
  func_0x00001bf0(extraout_A0_01);
  FUN_000000c4(extraout_A0_01);
  return;
}



// Function: FUN_00000706 at 00000706
// Size: 22 bytes

void FUN_00000706(void)

{
  func_0x00006e70(0x10001,0);
  return;
}



// Function: FUN_0000071c at 0000071c
// Size: 36 bytes

void FUN_0000071c(void)

{
  FUN_0000126e();
  FUN_000002ca(0x3ba8,0x154fc,0x1022);
  return;
}



// Function: FUN_00000740 at 00000740
// Size: 238 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000740(void)

{
  undefined2 extraout_A0w;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w_00;
  undefined1 extraout_A0b_00;
  
  (**(code **)(*_DAT_00027e86 + 0x400))();
  func_0x00001bf0(extraout_A0w);
  FUN_000000c4((char)extraout_A0w);
  (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x6e65);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x334))();
    (**(code **)(*extraout_A0 + 0x70))();
  }
  (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x72);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x70))();
    *(undefined1 *)(extraout_A0_00 + 0x12) = 1;
  }
  func_0x00002ad8(0);
  FUN_0000122e(extraout_A0b);
  func_0x00002ad8(1);
  FUN_0000122e(extraout_A0w_00);
  func_0x00002ad8(2);
  FUN_0000122e(extraout_A0b_00);
  return;
}



// Function: FUN_0000082e at 0000082e
// Size: 494 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000082e(undefined4 param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  short *psVar8;
  undefined1 uVar9;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  uVar9 = 8;
  uVar4 = 1;
  local_c = func_0x00002ad0(5);
  local_c = param_1._0_2_ - local_c;
  uVar7 = 8;
  uVar6 = 1;
  local_a = func_0x00002ad0(5,uVar4,uVar9);
  local_a = param_1._2_2_ - local_a;
  uVar5 = 0xf;
  uVar4 = 1;
  local_8 = func_0x00002ad0(10,uVar6,uVar7);
  local_6 = func_0x00002ad0(10,uVar4,uVar5);
  if (local_c < 0) {
    local_c = 0;
  }
  if (local_a < 0) {
    local_a = 0;
  }
  if (0x6f < (int)local_8 + (int)local_c) {
    local_8 = 0x6f - local_c;
  }
  if (0x9b < (int)local_a + (int)local_6) {
    local_6 = 0x9b - local_a;
  }
  local_14 = local_c * 2;
  local_12 = local_a * 2;
  local_10 = local_8 * 2;
  local_e = local_6 * 2;
  for (sVar2 = local_c; sVar3 = local_a, (int)sVar2 < (int)local_8 + (int)local_c; sVar2 = sVar2 + 1
      ) {
    for (; (int)sVar3 < (int)local_6 + (int)local_a; sVar3 = sVar3 + 1) {
      func_0x000049d8((char)sVar3);
    }
  }
  iVar1 = *(short *)(_DAT_0002884c + 0x110) * 2;
  if (*(short *)(iVar1 + _DAT_0002884c + 0xd0) == 0) {
    func_0x000047a8();
    uVar9 = 0;
    func_0x00002a98();
    psVar8 = &local_14;
    FUN_00000276((short)psVar8);
    func_0x00002ab0((short)((uint)psVar8 >> 0x10),uVar9);
    func_0x00006e70(1,0);
    func_0x00006e78(0);
    (**(code **)(*_DAT_00027e86 + 0x400))();
    func_0x00001bf0(extraout_A0);
    FUN_000000c4(extraout_A0);
    (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x6f766572);
    iVar1 = 0;
    if (extraout_A0_00 != (int *)0x0) {
      iVar1 = (**(code **)(*extraout_A0_00 + 0x70))();
      *(undefined1 *)(extraout_A0_00 + 0x12) = 0;
    }
  }
  return iVar1;
}



// Function: FUN_00000a1c at 00000a1c
// Size: 1364 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000a1c(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w;
  undefined1 extraout_A0b_00;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined1 extraout_A0b_01;
  undefined2 extraout_A0w_02;
  undefined4 extraout_A0_03;
  int iVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined1 auStack_8c [128];
  int local_c;
  int local_8;
  
  if (param_1 < 0) {
    uVar10 = 0x74;
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x6d);
    if (extraout_A0 != (int *)0x0) {
      uVar9 = (undefined2)((uint)extraout_A0 >> 0x10);
      (**(code **)(*extraout_A0 + 0x334))();
      uVar8 = 0x70;
      (**(code **)(*extraout_A0 + 0x70))((short)extraout_A0,uVar9,uVar10);
      (**(code **)(*extraout_A0 + 0x3a0))((short)extraout_A0,uVar8);
    }
    uVar10 = 0x6f;
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x65);
    if (extraout_A0_00 != (int *)0x0) {
      uVar9 = (undefined2)((uint)extraout_A0_00 >> 0x10);
      (**(code **)(*extraout_A0_00 + 0x334))();
      (**(code **)(*extraout_A0_00 + 0x70))((short)extraout_A0_00,uVar9,uVar10);
    }
    uVar10 = 0x61;
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x73);
    if (extraout_A0_01 != (int *)0x0) {
      uVar9 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      (**(code **)(*extraout_A0_01 + 0x334))();
      uVar8 = 0x1a;
      (**(code **)(*extraout_A0_01 + 0x70))((short)extraout_A0_01,uVar9,uVar10);
      (**(code **)(*extraout_A0_01 + 0x3a0))((short)extraout_A0_01,uVar8);
    }
    uVar10 = 0x6f;
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x65);
    uVar2 = 0;
    if (extraout_A0_02 != (int *)0x0) {
      uVar9 = (undefined2)((uint)extraout_A0_02 >> 0x10);
      (**(code **)(*extraout_A0_02 + 0x334))();
      uVar2 = (**(code **)(*extraout_A0_02 + 0x70))((short)extraout_A0_02,uVar9,uVar10);
    }
  }
  else {
    sVar4 = *(short *)(&DAT_00027fda + param_1._0_2_ * 2);
    if (sVar4 == -1) {
      func_0x00002ad8(2);
      FUN_0000122e(extraout_A0b);
      func_0x00002ad8(1);
      FUN_0000122e(extraout_A0w);
      sVar5 = 0;
      sVar6 = 10000;
      for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x810); sVar4 = sVar4 + 1) {
        iVar7 = sVar4 * 0x20 + _DAT_0002884c;
        if (((*(short *)(iVar7 + 0x82e) != 0) &&
            ((1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU) & (int)*(short *)(iVar7 + 0x830)
             ) == 0)) &&
           ((sVar3 = func_0x00006e48(*(undefined2 *)(iVar7 + 0x814),(char)_DAT_00027e8c),
            sVar3 < 0x23 &&
            ((iVar7 = sVar4 * 0x20 + _DAT_0002884c, *(char *)(iVar7 + 0x82a) == '\x04' &&
             (sVar3 = func_0x00006e48(*(undefined2 *)(iVar7 + 0x814),(char)_DAT_00027e8c),
             sVar3 < sVar6)))))) {
          sVar6 = sVar3;
          sVar5 = sVar4;
        }
      }
    }
    else if (sVar4 == -2) {
      func_0x00002ad8(3);
      FUN_0000122e(extraout_A0b_00);
      func_0x00002ad8(1);
      FUN_0000122e(extraout_A0w_00);
      sVar5 = 0;
      sVar6 = 10000;
      for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x810); sVar4 = sVar4 + 1) {
        iVar7 = sVar4 * 0x20 + _DAT_0002884c;
        if ((((*(short *)(iVar7 + 0x82e) != 0) &&
             ((1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU) &
              (int)*(short *)(iVar7 + 0x830)) == 0)) &&
            (sVar3 = func_0x00006e48(*(undefined2 *)(iVar7 + 0x814),(char)_DAT_00027e8c),
            sVar3 < 0x23)) &&
           ((iVar7 = sVar4 * 0x20 + _DAT_0002884c, *(char *)(iVar7 + 0x82a) == '\x05' &&
            (sVar3 = func_0x00006e48(*(undefined2 *)(iVar7 + 0x814),(char)_DAT_00027e8c),
            sVar3 < sVar6)))) {
          sVar6 = sVar3;
          sVar5 = sVar4;
        }
      }
    }
    else {
      func_0x00002ad8(0,(char)sVar4 * '\x1e' + (char)_DAT_0002884c + '\x12');
      func_0x000076d0((char)auStack_8c,extraout_A0w_01);
      FUN_0000122e((short)auStack_8c);
      func_0x00002ad8(1);
      FUN_0000122e(extraout_A0b_01);
      sVar5 = 0;
      while ((sVar5 < *(short *)(_DAT_0002884c + 0x810) &&
             ((char)sVar4 != *(char *)(sVar5 * 0x20 + _DAT_0002884c + 0x82b)))) {
        sVar5 = sVar5 + 1;
      }
    }
    puVar1 = (ushort *)(sVar5 * 0x20 + _DAT_0002884c + 0x830);
    *puVar1 = (ushort)(1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU)) | *puVar1;
    cVar11 = (char)sVar5;
    func_0x00007470();
    local_8 = sVar5 * 0x20 + _DAT_0002884c;
    uVar9 = *(undefined2 *)(local_8 + 0x812);
    func_0x000049d8((char)*(undefined2 *)(local_8 + 0x814));
    func_0x000047a8();
    func_0x00002938(uVar9,cVar11);
    func_0x00006e70(1,0);
    func_0x00002ad8(7,(char)sVar5 * ' ' + (char)_DAT_0002884c + '\x16');
    func_0x000076d0(0x78f8,extraout_A0w_02);
    FUN_0000122e(0x278f8);
    func_0x000028f8(CONCAT22(sVar5,0x39));
    func_0x00002908(CONCAT22(sVar5,0x39));
    local_c = sVar5 * 0x20 + _DAT_0002884c;
    func_0x00002930(*(undefined2 *)(_DAT_000288b0 + 2));
    func_0x00002968();
    func_0x00006e78(0);
    (**(code **)(*_DAT_00027e86 + 0x400))();
    func_0x00001bf0(extraout_A0_03);
    uVar2 = FUN_000000c4(extraout_A0_03);
  }
  return uVar2;
}



// Function: FUN_00000f70 at 00000f70
// Size: 702 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f70(void)

{
  int iVar1;
  int *extraout_A0;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  undefined2 extraout_A0w_08;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined1 auStack_54a [256];
  undefined1 auStack_44a [256];
  undefined1 auStack_34a [256];
  undefined1 auStack_24a [256];
  undefined1 auStack_14a [256];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (_DAT_00027e86 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00027e86 = extraout_A0;
    func_0x00001bf0((char)extraout_A0);
  }
  (**(code **)(*_DAT_00027e86 + 0x194))();
  func_0x00002ad8(0);
  func_0x00007320((short)auStack_14a,extraout_A0w);
  func_0x00006e38(_DAT_00027e86,0x7231,extraout_A0w_00);
  func_0x00002ad8(1);
  func_0x00007320(auStack_24a,extraout_A0w_01);
  func_0x00006e38(_DAT_00027e86,0x73747232,extraout_A0w_02);
  func_0x00002ad8(2);
  func_0x00007320(auStack_34a,extraout_A0w_03);
  func_0x00006e38(_DAT_00027e86,0x73747233,extraout_A0w_04);
  func_0x00002ad8(3);
  func_0x00007320(auStack_44a,extraout_A0w_05);
  func_0x00006e38(_DAT_00027e86,0x73747234,extraout_A0w_06);
  func_0x00002ad8(4);
  func_0x00007320(auStack_54a,extraout_A0w_07);
  func_0x00006e38(_DAT_00027e86,0x73747235,extraout_A0w_08);
  (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x6974656d);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x3a0))();
  }
  (**(code **)(*_DAT_00027e86 + 0x188))((char)_DAT_00027e86,0x73);
  if (extraout_A0_01 != (int *)0x0) {
    (**(code **)(*extraout_A0_01 + 0x3a0))();
  }
  func_0x00002940(0);
  func_0x00006e78(0);
  _DAT_00015502 = 1;
  if (_DAT_00027e86 != (int *)0x0) {
    (**(code **)(*_DAT_00027e86 + 0x40c))();
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((char)auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*_DAT_00027e86 + 0x3a0))();
      _DAT_00027e86 = (int *)0x0;
      FUN_00000706();
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_00027e86 != (int *)0x0) {
        (**(code **)(*_DAT_00027e86 + 0x3a0))();
      }
      _DAT_00027e86 = (int *)0x0;
      func_0x00001c10((char)((uint)local_14 >> 0x10));
    }
  }
  func_0x00003e20((char)*(undefined4 *)(_DAT_000297f4 + 0x80),0xfa);
  return;
}



// Function: FUN_0000122e at 0000122e
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000122e(undefined4 param_1)

{
  undefined4 extraout_A0;
  undefined1 auStack_104 [256];
  
  func_0x00007320(auStack_104,param_1);
  func_0x00006e38(_DAT_00027e86,_DAT_00015502 + 0x6c696e30,extraout_A0);
  _DAT_00015502 = _DAT_00015502 + 1;
  return;
}



// Function: FUN_0000126e at 0000126e
// Size: 468 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000126e(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  sVar6 = 0;
  bVar2 = false;
  bVar3 = false;
  for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x810); sVar5 = sVar5 + 1) {
    iVar9 = sVar5 * 0x20 + _DAT_0002884c;
    if (((*(short *)(iVar9 + 0x82e) != 0) &&
        ((1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU) & (int)*(short *)(iVar9 + 0x830)) ==
         0)) && ((*(byte *)(*(short *)(sVar5 * 0x20 + _DAT_0002884c + 0x814) * 0xe0 + _DAT_00028850
                            + 1 + *(short *)(sVar5 * 0x20 + _DAT_0002884c + 0x812) * 2) & 0x40) == 0
                )) {
      sVar4 = func_0x00006e48(*(undefined2 *)(sVar5 * 0x20 + _DAT_0002884c + 0x814),_DAT_00027e8c);
      if (sVar4 < 0x23) {
        if (*(char *)(sVar5 * 0x20 + _DAT_0002884c + 0x82a) == '\x04') {
          if (!bVar2) {
            bVar2 = true;
            *(undefined2 *)(&DAT_00027fda + sVar6 * 2) = 0xffff;
            pcVar7 = &DAT_00028016 + sVar6 * 0x20;
            pcVar8 = &DAT_000154f7;
            do {
              cVar1 = *pcVar8;
              *pcVar7 = cVar1;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            sVar6 = sVar6 + 1;
          }
        }
        else if (*(char *)(sVar5 * 0x20 + _DAT_0002884c + 0x82a) == '\x05') {
          if (!bVar3) {
            bVar3 = true;
            *(undefined2 *)(&DAT_00027fda + sVar6 * 2) = 0xfffe;
            pcVar7 = &DAT_00028016 + sVar6 * 0x20;
            pcVar8 = &DAT_000154f0;
            do {
              cVar1 = *pcVar8;
              *pcVar7 = cVar1;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            sVar6 = sVar6 + 1;
          }
        }
        else {
          iVar9 = sVar5 * 0x20 + _DAT_0002884c;
          if (*(char *)(iVar9 + 0x82a) == '\x02') {
            *(short *)(&DAT_00027fda + sVar6 * 2) = (short)*(char *)(iVar9 + 0x82b);
            pcVar7 = &DAT_00028016 + sVar6 * 0x20;
            pcVar8 = (char *)(*(short *)(&DAT_00027fda + sVar6 * 2) * 0x1e + _DAT_0002884c + 0xd12);
            do {
              cVar1 = *pcVar8;
              *pcVar7 = cVar1;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            sVar6 = sVar6 + 1;
          }
        }
      }
    }
  }
  _DAT_000283d8 = sVar6;
  return;
}



