// Warlords II - Decompiled 68k Code
// Segment: CODE_074
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000082 at 00000082
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000082(undefined4 param_1)

{
  char cVar1;
  short local_10;
  short local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x00003ac0(*(undefined4 *)(_DAT_0002884c + 0x17e));
  cVar1 = (**(code **)(*_DAT_00027fb8 + 0x1d8))();
  if (cVar1 != '\0') {
    local_10 = param_1._2_2_ * 0x28;
    local_e = param_1._0_2_ * 0x28;
    local_c = 0;
    local_a = 0;
    local_8 = 0x28;
    local_6 = 0x28;
    FUN_00002378(0x141b0,&local_c,&local_10,0x10024);
  }
  return;
}



// Function: FUN_000001de at 000001de
// Size: 652 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001de(void)

{
  short sVar2;
  int iVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  int *extraout_A0_02;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_39a [256];
  undefined1 auStack_29a [256];
  undefined1 auStack_19a [256];
  undefined1 auStack_9a [80];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000029e8();
  sVar2 = FUN_00002b50((char)*(undefined2 *)(_DAT_000288ac + 2));
  if (_DAT_00027e86 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00027e86 = extraout_A0;
    FUN_00001bf0((char)extraout_A0);
  }
  (**(code **)(*_DAT_00027e86 + 0x194))();
  iVar1 = sVar2 * 0x20 + _DAT_0002884c + 0x816;
  FUN_00002ad8(0,(short)iVar1);
  uVar3 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  puVar7 = auStack_9a;
  uVar6 = 0x7c;
  func_0x000076d0((short)puVar7,(short)extraout_A0_00);
  func_0x00007320((short)auStack_19a,(short)auStack_9a,(short)((uint)puVar7 >> 0x10),uVar3,
                  (short)((uint)iVar1 >> 0x10));
  uVar5 = (undefined2)((uint)extraout_A0_01 >> 0x10);
  uVar4 = 0x6c69;
  uVar3 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
  func_0x00006e38((short)_DAT_00027e86,0x6e31,(short)extraout_A0_01);
  FUN_00002ad8(1,uVar3,uVar4,uVar5,uVar6);
  func_0x00007320(auStack_29a,extraout_A0w);
  func_0x00006e38(_DAT_00027e86,0x6c696e32,extraout_A0w_00);
  FUN_00002ad8(2);
  func_0x00007320(auStack_39a,extraout_A0w_01);
  func_0x00006e38(_DAT_00027e86,0x6c696e33,extraout_A0w_02);
  (**(code **)(*_DAT_00027e86 + 0x188))(_DAT_00027e86,0x71756573);
  if (extraout_A0_02 != (int *)0x0) {
    (**(code **)(*extraout_A0_02 + 0x3a0))();
  }
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((char)auStack_4a);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*_DAT_00027e86 + 0x40c))();
    (**(code **)(*_DAT_00027e86 + 0x3a0))();
    _DAT_00027e86 = (int *)0x0;
    (**(code **)(*_DAT_00027fb4 + 0x268))();
    (**(code **)(*_DAT_00027fbc + 0x268))();
    (**(code **)(*_DAT_00027fc4 + 0x268))();
    (**(code **)(*_DAT_00027fc8 + 0x268))();
    if (iVar1 == 0x71756573) {
      FUN_0000046a();
    }
    else {
      FUN_0000048e();
    }
    _DAT_00025f52 = local_10;
  }
  else {
    if (_DAT_00027e86 != (int *)0x0) {
      (**(code **)(*_DAT_00027e86 + 0x3a0))();
    }
    _DAT_00027e86 = (int *)0x0;
    func_0x00001c10((char)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_0000046a at 0000046a
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000046a(void)

{
  FUN_000016a8();
  func_0x00003e20(*(undefined4 *)(_DAT_000297f4 + 0x80),0x5e3);
  return;
}



// Function: FUN_0000048e at 0000048e
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000048e(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = *_DAT_000288ac;
  uVar1 = FUN_00002b50(_DAT_000288ac[1]);
  FUN_00002ad8(uVar2,uVar1);
  return;
}



// Function: FUN_000004b6 at 000004b6
// Size: 578 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004b6(void)

{
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined1 extraout_A0b;
  undefined1 extraout_A0b_00;
  short *psVar2;
  bool bVar3;
  undefined1 auStack_14a [256];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar3 = *(short *)(_DAT_00028846 * 0xc + _DAT_0002884c + 0x1142) != 0;
  psVar2 = (short *)(*(short *)(_DAT_00028846 * 0xc + _DAT_0002884c + 0x1146) * 0x16 + _DAT_00028854
                    );
  if (((*psVar2 < 0) || (psVar2[1] < 0)) || (*(char *)(psVar2 + 2) != '\x1c')) {
    bVar3 = false;
  }
  if (_DAT_00027e86 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00027e86 = extraout_A0;
    FUN_00001bf0((char)extraout_A0);
  }
  (**(code **)(*_DAT_00027e86 + 0x194))();
  if (!bVar3) {
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x6c);
    if (extraout_A0_00 != (int *)0x0) {
      (**(code **)(*extraout_A0_00 + 0x334))();
    }
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x6f);
    if (extraout_A0_01 != (int *)0x0) {
      (**(code **)(*extraout_A0_01 + 0x334))();
    }
    FUN_00002ad8(0xff);
    func_0x00007320((short)auStack_14a,extraout_A0b);
    func_0x00006e38((short)_DAT_00027e86,0x6e65,extraout_A0b_00);
  }
  func_0x00006e70(0,0);
  if (bVar3) {
    FUN_000006f8();
    func_0x00002968((char)*(undefined2 *)
                           (*(short *)(_DAT_00028846 * 0xc + _DAT_0002884c + 0x1146) * 0x16 +
                            _DAT_00028854 + 2));
  }
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((char)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_00027e86 + 0x40c))();
    (**(code **)(*_DAT_00027e86 + 0x3a0))();
    _DAT_00027e86 = (int *)0x0;
    _DAT_00025f52 = local_10;
  }
  else {
    if (_DAT_00027e86 != (int *)0x0) {
      (**(code **)(*_DAT_00027e86 + 0x3a0))();
    }
    _DAT_00027e86 = (int *)0x0;
    func_0x00001c10((char)((uint)local_14 >> 0x10));
  }
  func_0x00003e20((short)*(undefined4 *)(_DAT_000297f4 + 0x80),0xfa);
  return;
}



// Function: FUN_000006f8 at 000006f8
// Size: 3812 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000006f8(void)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w;
  undefined4 extraout_A0;
  undefined2 extraout_A0w_00;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined4 extraout_A0_03;
  undefined2 extraout_A0w_03;
  undefined4 extraout_A0_04;
  undefined2 extraout_A0w_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  undefined2 *puVar6;
  undefined1 extraout_A0b_00;
  int iVar7;
  undefined2 *puVar8;
  undefined2 extraout_A0w_07;
  undefined4 extraout_A0_07;
  undefined2 extraout_A0w_08;
  undefined4 extraout_A0_08;
  undefined2 extraout_A0w_09;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined2 extraout_A0w_10;
  undefined2 extraout_A0w_11;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  undefined4 extraout_A0_14;
  undefined2 extraout_A0w_12;
  undefined2 extraout_A0w_13;
  undefined4 extraout_A0_15;
  undefined2 extraout_A0w_14;
  undefined2 extraout_A0w_15;
  undefined2 extraout_A0w_16;
  undefined2 extraout_A0w_17;
  undefined2 extraout_A0w_18;
  undefined4 extraout_A0_16;
  undefined2 extraout_A0w_19;
  undefined4 extraout_A0_17;
  undefined2 extraout_A0w_20;
  undefined4 extraout_A0_18;
  undefined2 extraout_A0w_21;
  undefined2 extraout_A0w_22;
  undefined4 extraout_A0_19;
  undefined2 extraout_A0w_23;
  undefined2 extraout_A0w_24;
  undefined2 extraout_A0w_25;
  undefined2 extraout_A0w_26;
  undefined4 extraout_A0_20;
  undefined2 extraout_A0w_27;
  undefined4 extraout_A0_21;
  undefined2 extraout_A0w_28;
  undefined4 extraout_A0_22;
  undefined2 extraout_A0w_29;
  undefined2 extraout_A0w_30;
  undefined4 extraout_A0_23;
  undefined2 extraout_A0w_31;
  undefined4 extraout_A0_24;
  undefined4 extraout_A0_25;
  undefined4 extraout_A0_26;
  undefined1 extraout_A0b_01;
  undefined4 extraout_A0_27;
  undefined2 extraout_A0w_32;
  undefined2 extraout_A0w_33;
  undefined2 extraout_A0w_34;
  undefined4 extraout_A0_28;
  undefined4 extraout_A0_29;
  undefined2 extraout_A0w_35;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  undefined1 *puVar16;
  undefined1 auStack_26b4 [256];
  undefined1 auStack_25b4 [256];
  undefined1 auStack_24b4 [256];
  undefined1 auStack_23b4 [256];
  undefined1 auStack_22b4 [256];
  undefined1 auStack_21b4 [256];
  undefined1 auStack_20b4 [256];
  undefined1 auStack_1fb4 [256];
  undefined1 auStack_1eb4 [256];
  undefined1 auStack_1db4 [256];
  undefined1 auStack_1cb4 [256];
  undefined1 auStack_1bb4 [256];
  undefined1 auStack_1ab4 [256];
  undefined1 auStack_19b4 [256];
  undefined1 auStack_18b4 [256];
  undefined1 auStack_17b4 [256];
  undefined1 auStack_16b4 [256];
  undefined1 auStack_15b4 [256];
  undefined1 auStack_14b4 [256];
  undefined1 auStack_13b4 [256];
  undefined1 auStack_12b4 [256];
  undefined1 auStack_11b4 [256];
  undefined1 auStack_10b4 [256];
  undefined1 auStack_fb4 [256];
  undefined1 auStack_eb4 [256];
  undefined1 auStack_db4 [256];
  undefined1 auStack_cb4 [256];
  undefined1 auStack_bb4 [256];
  undefined1 auStack_ab4 [256];
  undefined1 auStack_9b4 [256];
  undefined1 auStack_8b4 [256];
  undefined1 auStack_7b4 [256];
  undefined1 auStack_6b4 [256];
  undefined1 auStack_5b4 [256];
  undefined1 auStack_4b4 [256];
  undefined1 auStack_3b4 [256];
  undefined1 auStack_2b4 [256];
  undefined1 auStack_1b4 [256];
  short local_b4;
  int local_b2;
  short local_ae;
  int local_ac;
  short local_a8;
  int local_a6;
  short local_a2;
  int local_a0;
  short local_9c;
  int local_9a;
  short local_96;
  int local_94;
  short local_90;
  int local_8e;
  short local_8a;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 *local_68;
  undefined2 local_64;
  undefined2 local_62;
  undefined1 auStack_60 [80];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar2 = true;
  iVar5 = _DAT_00028846 * 0xc + _DAT_0002884c;
  local_10 = *(undefined4 *)(iVar5 + 0x1142);
  local_8 = *(undefined4 *)(iVar5 + 0x114a);
  local_c._0_2_ = (short)((uint)*(undefined4 *)(iVar5 + 0x1146) >> 0x10);
  iVar3 = (short)*(char *)(_DAT_00028854 + 10 + local_c._0_2_ * 0x16) * 0x14 + _DAT_0002884c + 0x224
  ;
  uVar9 = (undefined2)((uint)iVar3 >> 0x10);
  uVar11 = 1;
  puVar16 = auStack_60;
  local_c = *(undefined4 *)(iVar5 + 0x1146);
  func_0x000076d0((short)puVar16,0x56ab,(char)iVar3);
  func_0x00007320((short)auStack_1b4,(char)auStack_60,(short)((uint)puVar16 >> 0x10),uVar11,uVar9);
  func_0x00006e38((short)_DAT_00027e86,0x7231,extraout_A0b);
  iVar3 = (int)local_10._2_2_;
  switch(local_10._2_2_) {
  case 0:
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_2b4,extraout_A0w);
    uVar9 = (undefined2)((uint)extraout_A0 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7232,(short)extraout_A0);
    FUN_00002ad8(1,uVar10,uVar11,uVar9);
    func_0x00007320((short)auStack_3b4,extraout_A0w_00);
    uVar12 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    uVar15 = 0x7374;
    uVar13 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7233,(short)extraout_A0_00);
    iVar3 = _DAT_0002884c + (short)*(char *)(_DAT_00028854 + 5 + local_c._2_2_ * 0x16) * 0x14;
    uVar9 = (undefined2)((uint)iVar3 >> 0x10);
    FUN_00002ad8(2,(char)iVar3);
    uVar11 = (undefined2)((uint)extraout_A0_01 >> 0x10);
    puVar16 = auStack_60;
    uVar10 = 0x4a;
    func_0x000076d0((short)puVar16,(short)extraout_A0_01);
    func_0x00007320((short)auStack_4b4,(char)auStack_60,(short)((uint)puVar16 >> 0x10),uVar11,uVar9,
                    uVar13,uVar15,uVar12);
    uVar15 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    uVar9 = 0x7374;
    uVar11 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7234,(char)extraout_A0_02);
    FUN_00002ad8(3,uVar11,uVar9,uVar15,uVar10);
    func_0x00007320(auStack_5b4,extraout_A0w_01);
    uVar9 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((char)_DAT_00027e86,0x73747235,extraout_A0w_02);
    puVar8 = (undefined2 *)(local_c._0_2_ * 0x16 + _DAT_00028854);
    puVar6 = (undefined2 *)(local_c._2_2_ * 0x16 + _DAT_00028854);
    uVar11 = *puVar6;
    uVar10 = (undefined1)*puVar8;
    uVar14 = 0xd4;
    sVar4 = func_0x00004940(puVar8[1],(char)puVar6[1]);
    func_0x00007320((short)auStack_6b4,(short)*(undefined4 *)(sVar4 * 4 + 0x15baa),uVar10,uVar11,
                    uVar9);
    uVar13 = (undefined1)((uint)extraout_A0_03 >> 0x10);
    uVar12 = 0x7374;
    uVar9 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7236,(short)extraout_A0_03);
    puVar6 = (undefined2 *)(local_c._0_2_ * 0x16 + _DAT_00028854);
    puVar8 = (undefined2 *)(local_c._2_2_ * 0x16 + _DAT_00028854);
    uVar15 = 0x39;
    uVar10 = (undefined1)*puVar8;
    uVar11 = *puVar6;
    FUN_00002930(puVar6[1],puVar8[1],uVar9,uVar12,uVar13,uVar14);
    uVar9 = 0x39;
    iVar3 = local_c._2_2_ * 0x16 + _DAT_00028854;
    FUN_00002910((short)iVar3,uVar11,uVar10,uVar15);
    FUN_00002918(local_c._2_2_ * 0x16 + (short)_DAT_00028854,(short)((uint)iVar3 >> 0x10),uVar9);
    iVar3 = func_0x00006e78(0);
    break;
  case 1:
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_7b4,extraout_A0w_03);
    uVar9 = (undefined2)((uint)extraout_A0_04 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar14 = 0xb2;
    func_0x00006e38((short)_DAT_00027e86,0x7232,(short)extraout_A0_04);
    FUN_00002ad8(1,uVar10,uVar11,uVar9);
    func_0x00007320((short)auStack_8b4,extraout_A0w_04);
    uVar9 = (undefined2)((uint)extraout_A0_05 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar13 = 0xe6;
    func_0x00006e38((short)_DAT_00027e86,0x7233,(short)extraout_A0_05);
    func_0x00007320((short)auStack_9b4,local_c._2_2_ * 0x1e + (short)_DAT_0002884c + 0xd12,uVar10,
                    uVar11,uVar9,uVar14);
    uVar9 = (undefined2)((uint)extraout_A0_06 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7234,(short)extraout_A0_06);
    FUN_00002ad8(2,uVar10,uVar11,uVar9,uVar13);
    func_0x00007320((short)auStack_ab4,extraout_A0w_05);
    func_0x00006e38((short)_DAT_00027e86,0x7236,extraout_A0w_06);
    uVar9 = SUB42(&local_64,0);
    puVar8 = &local_62;
    uVar13 = (undefined1)local_c;
    FUN_000000fa();
    puVar6 = (undefined2 *)(local_c._0_2_ * 0x16 + _DAT_00028854);
    uVar10 = (undefined1)local_62;
    uVar11 = *puVar6;
    sVar4 = func_0x00004940(puVar6[1],local_64);
    func_0x00007320((char)auStack_bb4,(char)*(undefined4 *)(sVar4 * 4 + 0x15baa),uVar11,uVar10,
                    uVar13,puVar8,uVar9);
    func_0x00006e38((short)_DAT_00027e86,0x37,extraout_A0b_00);
    iVar7 = local_c._2_2_ * 0x1e + _DAT_0002884c;
    iVar5 = (int)*(char *)(iVar7 + 0xd28);
    iVar3 = 0;
    if (iVar5 != 0) {
      if (iVar5 != 1) {
        if (iVar5 == 2) {
          puVar1 = (ushort *)(*(short *)(iVar7 + 0xd2a) * 0x20 + _DAT_0002884c + 0x830);
          *puVar1 = (ushort)(1 << ((int)_DAT_00028846 & 0x3fU)) | *puVar1;
        }
        else if (iVar5 + -3 != 0) {
          return iVar5 + -3;
        }
      }
      puVar8 = (undefined2 *)(local_c._0_2_ * 0x16 + _DAT_00028854);
      uVar13 = 0x39;
      uVar11 = *puVar8;
      uVar9 = local_62;
      FUN_00002930(puVar8[1],local_64);
      uVar15 = 0x39;
      uVar10 = (undefined1)local_62;
      func_0x00002920((char)local_64,uVar11,uVar9,uVar13);
      FUN_00002928(local_64,uVar10,uVar15);
      iVar3 = func_0x00006e78(0);
    }
    break;
  case 2:
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_cb4,extraout_A0w_07);
    uVar9 = (undefined2)((uint)extraout_A0_07 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar14 = 0x9e;
    func_0x00006e38((short)_DAT_00027e86,0x7232,(short)extraout_A0_07);
    FUN_00002ad8(1,uVar10,uVar11,uVar9);
    func_0x00007320((short)auStack_db4,extraout_A0w_08);
    uVar9 = (undefined2)((uint)extraout_A0_08 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar13 = 0xd2;
    func_0x00006e38((short)_DAT_00027e86,0x7233,(short)extraout_A0_08);
    FUN_00002ad8(2,uVar10,uVar11,uVar9,uVar14);
    func_0x00007320((short)auStack_eb4,extraout_A0w_09);
    uVar9 = (undefined2)((uint)extraout_A0_09 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7234,(short)extraout_A0_09);
    FUN_000032f8(uVar10,uVar11,uVar9,uVar13);
    uVar9 = (undefined2)((uint)extraout_A0_10 >> 0x10);
    uVar11 = 1;
    puVar16 = auStack_60;
    func_0x000076d0((short)puVar16,0x56a8,(char)extraout_A0_10);
    func_0x00007320(auStack_fb4,(short)auStack_60,(short)((uint)puVar16 >> 0x10),uVar11,uVar9);
    func_0x00006e38((char)_DAT_00027e86,0x73747235,extraout_A0w_10);
    func_0x00002958(0,local_c._2_2_,0);
    iVar3 = func_0x00006e78(0);
    break;
  case 3:
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_10b4,extraout_A0w_11);
    uVar15 = (undefined2)((uint)extraout_A0_11 >> 0x10);
    uVar9 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7232,(short)extraout_A0_11);
    sVar4 = local_8._0_2_ >> 0xf;
    FUN_00002ad8(1,(char)((uint)local_8 >> 0x10));
    uVar11 = (undefined2)((uint)extraout_A0_12 >> 0x10);
    puVar16 = auStack_60;
    uVar13 = 200;
    func_0x000076d0((short)puVar16,(short)extraout_A0_12);
    func_0x00007320((short)auStack_11b4,(char)auStack_60,(short)((uint)puVar16 >> 0x10),uVar11,sVar4
                    ,uVar10,uVar9,uVar15);
    uVar15 = (undefined2)((uint)extraout_A0_13 >> 0x10);
    uVar9 = 0x7374;
    uVar11 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    uVar10 = 0xf0;
    func_0x00006e38((short)_DAT_00027e86,0x7233,(char)extraout_A0_13);
    func_0x00007320((short)auStack_12b4,(char)_DAT_0002884c + (char)local_c * '\x14',uVar11,uVar9,
                    uVar15,uVar13);
    uVar15 = (undefined2)((uint)extraout_A0_14 >> 0x10);
    uVar9 = 0x7374;
    uVar11 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7234,(char)extraout_A0_14);
    FUN_00002ad8(2,uVar11,uVar9,uVar15,uVar10);
    func_0x00007320(auStack_13b4,extraout_A0w_12);
    uVar9 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((char)_DAT_00027e86,0x73747236,extraout_A0w_13);
    sVar4 = local_8._2_2_ >> 0xf;
    FUN_00002ad8(3,(char)local_8);
    uVar10 = (undefined1)((uint)extraout_A0_15 >> 0x10);
    uVar11 = (undefined2)((uint)auStack_60 >> 0x10);
    func_0x000076d0((char)auStack_60,(short)extraout_A0_15);
    func_0x00007320((short)auStack_14b4,(short)auStack_60,uVar11,uVar10,sVar4,uVar9);
    func_0x00006e38((short)_DAT_00027e86,0x7237,extraout_A0w_14);
    func_0x00002958(0,0xffff,0);
    iVar3 = func_0x00006e78(0);
    break;
  case 4:
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      local_8a = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
      local_88 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0x70 + _DAT_00028858;
      if ((*(byte *)(local_88 + local_8a) & 0x20) == 0) {
        local_90 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
        local_8e = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0x70 + _DAT_00028858;
        if ((*(byte *)(local_8e + local_90) & 0x20) == 0) {
          local_96 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) + 1;
          local_94 = (*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0x70 +
                     _DAT_00028858;
          if ((*(byte *)(local_94 + local_96) & 0x20) == 0) {
            local_9c = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
            local_9a = (*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0x70 +
                       _DAT_00028858;
            if ((*(byte *)(local_9a + local_9c) & 0x20) == 0) {
              bVar2 = false;
            }
          }
        }
      }
    }
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_15b4,extraout_A0w_15);
    func_0x00006e38((short)_DAT_00027e86,0x7232,extraout_A0w_16);
    if (bVar2) {
      FUN_00002ad8(1,(char)local_c * 'B' + (char)_DAT_0002884c + -0x38);
      func_0x000076d0((short)auStack_60,extraout_A0w_17);
    }
    else {
      FUN_00002ad8(2,(char)local_c * 'B' + (char)_DAT_0002884c + -0x38);
      func_0x000076d0((short)auStack_60,extraout_A0w_18);
    }
    func_0x00007320((short)auStack_16b4,(short)auStack_60);
    uVar9 = (undefined2)((uint)extraout_A0_16 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar14 = 0xb4;
    func_0x00006e38((short)_DAT_00027e86,0x7233,(short)extraout_A0_16);
    FUN_00002ad8(3,uVar10,uVar11,uVar9);
    func_0x00007320((short)auStack_17b4,extraout_A0w_19);
    uVar9 = (undefined2)((uint)extraout_A0_17 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar13 = 0xe8;
    func_0x00006e38((short)_DAT_00027e86,0x7234,(short)extraout_A0_17);
    FUN_00002ad8(4,uVar10,uVar11,uVar9,uVar14);
    func_0x00007320((short)auStack_18b4,extraout_A0w_20);
    uVar9 = (undefined2)((uint)extraout_A0_18 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7235,(short)extraout_A0_18);
    FUN_00002ad8(5,uVar10,uVar11,uVar9,uVar13);
    func_0x00007320((short)auStack_19b4,extraout_A0w_21);
    func_0x00006e38((short)_DAT_00027e86,0x7236,extraout_A0w_22);
    local_68 = (undefined4 *)(local_c._0_2_ * 0x16 + _DAT_00028854);
    local_6c = local_c._2_2_ * 0x42 + _DAT_0002884c;
    uVar14 = 0x8c;
    sVar4 = func_0x00004940(*local_68,*(undefined2 *)(local_6c + 0x15c6));
    func_0x00007320((short)auStack_1ab4,(short)*(undefined4 *)(sVar4 * 4 + 0x15baa));
    uVar13 = (undefined1)((uint)extraout_A0_19 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((char)_DAT_00027e86,0x7237,(short)extraout_A0_19);
    local_70 = local_c._0_2_ * 0x16 + _DAT_00028854;
    local_74 = local_c._2_2_ * 0x42 + _DAT_0002884c;
    FUN_00002930(*(undefined2 *)(local_70 + 2),(char)*(undefined2 *)(local_74 + 0x15c6),uVar10,
                 uVar11,uVar13,uVar14);
    FUN_000028f0(0x39);
    iVar3 = FUN_00002900(0x39);
    break;
  case 5:
    if (*(short *)(_DAT_0002884c + 0x124) != 0) {
      local_a2 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
      local_a0 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0x70 + _DAT_00028858;
      if ((*(byte *)(local_a0 + local_a2) & 0x20) == 0) {
        local_a8 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
        local_a6 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0x70 + _DAT_00028858;
        if ((*(byte *)(local_a6 + local_a8) & 0x20) == 0) {
          local_ae = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) + 1;
          local_ac = (*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0x70 +
                     _DAT_00028858;
          if ((*(byte *)(local_ac + local_ae) & 0x20) == 0) {
            local_b4 = *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4);
            local_b2 = (*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) + 1) * 0x70 +
                       _DAT_00028858;
            if ((*(byte *)(local_b2 + local_b4) & 0x20) == 0) {
              bVar2 = false;
            }
          }
        }
      }
    }
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_1bb4,extraout_A0w_23);
    func_0x00006e38((short)_DAT_00027e86,0x7232,extraout_A0w_24);
    if (bVar2) {
      FUN_00002ad8(1,(char)local_c * 'B' + (char)_DAT_0002884c + -0x38);
      func_0x000076d0((short)auStack_60,extraout_A0w_25);
    }
    else {
      FUN_00002ad8(2,(char)local_c * 'B' + (char)_DAT_0002884c + -0x38);
      func_0x000076d0((short)auStack_60,extraout_A0w_26);
    }
    func_0x00007320((short)auStack_1cb4,(short)auStack_60);
    uVar9 = (undefined2)((uint)extraout_A0_20 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar14 = 0xe;
    func_0x00006e38((short)_DAT_00027e86,0x7233,(short)extraout_A0_20);
    FUN_00002ad8(3,uVar10,uVar11,uVar9);
    func_0x00007320((short)auStack_1db4,extraout_A0w_27);
    uVar9 = (undefined2)((uint)extraout_A0_21 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar13 = 0x42;
    func_0x00006e38((short)_DAT_00027e86,0x7234,(short)extraout_A0_21);
    FUN_00002ad8(4,uVar10,uVar11,uVar9,uVar14);
    func_0x00007320((short)auStack_1eb4,extraout_A0w_28);
    uVar9 = (undefined2)((uint)extraout_A0_22 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7235,(short)extraout_A0_22);
    FUN_00002ad8(5,uVar10,uVar11,uVar9,uVar13);
    func_0x00007320((short)auStack_1fb4,extraout_A0w_29);
    func_0x00006e38((short)_DAT_00027e86,0x7236,extraout_A0w_30);
    local_78 = (undefined4 *)(local_c._0_2_ * 0x16 + _DAT_00028854);
    local_7c = local_c._2_2_ * 0x42 + _DAT_0002884c;
    uVar14 = 0xe6;
    sVar4 = func_0x00004940(*local_78,*(undefined2 *)(local_7c + 0x15c6));
    func_0x00007320((short)auStack_20b4,(short)*(undefined4 *)(sVar4 * 4 + 0x15baa));
    uVar13 = (undefined1)((uint)extraout_A0_23 >> 0x10);
    uVar11 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((char)_DAT_00027e86,0x7237,(short)extraout_A0_23);
    local_80 = local_c._0_2_ * 0x16 + _DAT_00028854;
    local_84 = local_c._2_2_ * 0x42 + _DAT_0002884c;
    FUN_00002930(*(undefined2 *)(local_80 + 2),(char)*(undefined2 *)(local_84 + 0x15c6),uVar10,
                 uVar11,uVar13,uVar14);
    FUN_000028f0(0x39);
    iVar3 = FUN_00002900(0x39);
    break;
  case 6:
    FUN_00002ad8(0);
    func_0x00007320((short)auStack_21b4,extraout_A0w_31);
    uVar15 = (undefined2)((uint)extraout_A0_24 >> 0x10);
    uVar9 = 0x7374;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7232,(short)extraout_A0_24);
    sVar4 = local_8._0_2_ >> 0xf;
    FUN_00002ad8(1,(char)((uint)local_8 >> 0x10));
    uVar11 = (undefined2)((uint)extraout_A0_25 >> 0x10);
    puVar16 = auStack_60;
    uVar13 = 0xd0;
    func_0x000076d0((short)puVar16,(short)extraout_A0_25);
    func_0x00007320((short)auStack_22b4,(char)auStack_60,(short)((uint)puVar16 >> 0x10),uVar11,sVar4
                    ,uVar10,uVar9,uVar15);
    uVar15 = (undefined2)((uint)extraout_A0_26 >> 0x10);
    uVar9 = 0x7374;
    uVar11 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    uVar10 = 0xf8;
    func_0x00006e38((short)_DAT_00027e86,0x7233,(char)extraout_A0_26);
    FUN_00002ad8(2,uVar11,uVar9,uVar15,uVar13);
    func_0x00007320((short)auStack_23b4,extraout_A0b_01);
    uVar15 = (undefined2)((uint)extraout_A0_27 >> 0x10);
    uVar9 = 0x7374;
    uVar11 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7234,(char)extraout_A0_27);
    FUN_00002ad8(3,uVar11,uVar9,uVar15,uVar10);
    func_0x00007320(auStack_24b4,extraout_A0w_32);
    uVar11 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((char)_DAT_00027e86,0x73747235,extraout_A0w_33);
    FUN_00002ad8(4,uVar11);
    func_0x00007320((char)auStack_25b4,extraout_A0w_34);
    uVar9 = (undefined2)((uint)extraout_A0_28 >> 0x10);
    uVar13 = 0x74;
    uVar10 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x36,(short)extraout_A0_28);
    sVar4 = local_8._2_2_ >> 0xf;
    FUN_00002ad8(5,local_8._2_2_);
    uVar11 = (undefined2)((uint)extraout_A0_29 >> 0x10);
    puVar16 = auStack_60;
    func_0x000076d0((short)puVar16,(short)extraout_A0_29);
    func_0x00007320((short)auStack_26b4,(short)auStack_60,(short)((uint)puVar16 >> 0x10),uVar11,
                    sVar4,uVar10,uVar13,uVar9);
    iVar3 = func_0x00006e38((short)_DAT_00027e86,0x7237,extraout_A0w_35);
  }
  return iVar3;
}



// Function: FUN_000015ea at 000015ea
// Size: 190 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000015ea(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  short asStackY_10026 [8];
  short asStackY_10016 [32744];
  short local_26 [8];
  short local_16 [8];
  short local_6;
  
  if (*(short *)(_DAT_0002884c + 0x11c) == 0) {
    uVar1 = 1;
  }
  else if (param_1._0_2_ == 0xf) {
    uVar1 = 1;
  }
  else {
    func_0x00003fc0(&local_6,local_16,local_26);
    for (sVar2 = 0; sVar2 < local_6; sVar2 = sVar2 + 1) {
      if ((param_1._0_2_ == local_16[sVar2]) && (local_26[sVar2] == 7)) {
        return 1;
      }
    }
    if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                              (int)param_1._0_2_) << 6) >> 0x1e) == 2) {
      uVar1 = 1;
    }
    else if ((*(short *)(_DAT_0002884c + 0x116) == 0) ||
            (*(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0xd0) != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// Function: FUN_000016a8 at 000016a8
// Size: 2121 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016a8(undefined4 param_1)

{
  ushort *puVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined2 uVar12;
  short unaff_D4w;
  undefined2 unaff_D7w;
  undefined2 *puVar13;
  int iVar14;
  short *psVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined2 local_5c;
  short local_a;
  short local_8;
  short local_6;
  
  local_a = 0;
  func_0x00006e50();
  puVar19 = &stack0xffffffa6;
  do {
    local_a = local_a + 1;
    uVar4 = (int)_DAT_000288b0 - _DAT_00028854;
    if (param_1._0_2_ == 0) {
      *(undefined2 *)(puVar19 + -2) = 0xffff;
      *(undefined2 *)(puVar19 + -4) = 0xb;
      *(undefined2 *)(puVar19 + -6) = 1;
      *(undefined4 *)(puVar19 + -10) = 0x1776;
      sVar6 = FUN_00002ad0();
      unaff_D7w = *(undefined2 *)(sVar6 * 2 + 0x15692);
    }
    else if (local_a == 1) {
      *(undefined2 *)(puVar19 + -2) = 0xffff;
      *(undefined4 *)(puVar19 + -6) = 0x10005;
      *(undefined4 *)(puVar19 + -10) = 0x1742;
      sVar6 = FUN_00002ad0();
      if ((sVar6 == 0) && (*(short *)(_DAT_0002884c + 0x114) != 0)) {
        unaff_D7w = 5;
      }
      else {
        unaff_D7w = 4;
      }
    }
    else if (local_a == 2) {
      unaff_D7w = 3;
    }
    else if (local_a == 3) {
      unaff_D7w = 6;
    }
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 1;
    *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146) =
         (short)(uVar4 / 0x16);
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1144) = unaff_D7w;
    switch(unaff_D7w) {
    case 0:
      sVar6 = 0;
      sVar11 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar7 = sVar11 + -1, sVar11 != 0) {
        sVar11 = sVar7;
        if ((*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16) == '\x1c') &&
           (cVar3 = *(char *)(_DAT_00028854 + 5 + sVar7 * 0x16),
           (int)*(short *)(_DAT_0002884c + 0x110) != (int)cVar3)) {
          *(short *)(puVar19 + -2) = (short)cVar3;
          *(undefined4 *)(puVar19 + -6) = 0x182c;
          sVar7 = FUN_000015ea();
          if (sVar7 != 0) {
            sVar6 = sVar6 + 1;
          }
        }
      }
      if (0 < sVar6) {
        *(undefined2 *)(puVar19 + -2) = 0;
        *(short *)(puVar19 + -4) = sVar6;
        *(undefined2 *)(puVar19 + -6) = 1;
        *(undefined4 *)(puVar19 + -10) = 0x1850;
        sVar7 = FUN_00002ad0();
        sVar6 = 0;
        sVar11 = *(short *)(_DAT_0002884c + 0x182);
        goto LAB_000018ae;
      }
      break;
    case 1:
      if (param_1._0_2_ == 0) {
        sVar6 = 0x32;
      }
      else {
        sVar6 = 0x1e;
      }
      sVar11 = 0;
      for (sVar7 = 0; sVar7 < 0x16; sVar7 = sVar7 + 1) {
        *(short **)(puVar19 + -4) = &local_8;
        *(short **)(puVar19 + -8) = &local_6;
        *(short *)(puVar19 + -10) = sVar7;
        *(undefined4 *)(puVar19 + -0xe) = 0x18f2;
        FUN_000000fa();
        iVar14 = sVar7 * 0x1e + _DAT_0002884c;
        if (*(char *)(iVar14 + 0xd28) == '\x02') {
          puVar13 = (undefined2 *)(iVar14 + 0xd30);
          sVar10 = 0xe;
          do {
            puVar16 = puVar19;
            puVar13 = puVar13 + -1;
            *(undefined2 *)(puVar16 + -2) = *puVar13;
            sVar10 = sVar10 + -1;
            puVar19 = puVar16 + -2;
          } while (sVar10 != -1);
          *(undefined4 *)(puVar16 + -6) = 0x191c;
          sVar10 = func_0x00004968();
          puVar19 = puVar16 + 0x1c;
          if (sVar10 == 0) {
            *(int *)(puVar16 + 0x18) = (int)*_DAT_000288b0 - (int)local_6;
            *(undefined4 *)(puVar16 + 0x14) = 0x1946;
            iVar14 = func_0x000076d8();
            puVar19 = puVar16 + 0x1c;
            if (iVar14 < sVar6) {
              *(int *)(puVar16 + 0x18) = (int)_DAT_000288b0[1] - (int)local_8;
              *(undefined4 *)(puVar16 + 0x14) = 0x1972;
              iVar14 = func_0x000076d8();
              puVar19 = puVar16 + 0x1c;
              if (iVar14 < sVar6) {
                sVar11 = sVar11 + 1;
                puVar19 = puVar16 + 0x1c;
              }
            }
          }
        }
      }
      if (0 < sVar11) {
        *(undefined2 *)(puVar19 + -2) = 0;
        *(short *)(puVar19 + -4) = sVar11;
        *(undefined2 *)(puVar19 + -6) = 1;
        *(undefined4 *)(puVar19 + -10) = 0x199a;
        sVar10 = FUN_00002ad0();
        sVar7 = 0;
        sVar11 = 0;
        goto LAB_00001a46;
      }
      break;
    case 2:
      bVar5 = false;
      sVar6 = 0;
      while ((sVar6 < 5 && (!bVar5))) {
        *(undefined2 *)(puVar19 + -2) = 0;
        *(undefined4 *)(puVar19 + -6) = 0x1afe;
        unaff_D4w = func_0x00004960();
        bVar5 = false;
        sVar11 = *(short *)(_DAT_0002884c + 0x182);
        do {
          do {
            sVar7 = sVar11 + -1;
            if (sVar11 == 0) goto LAB_00001b82;
            sVar11 = sVar7;
          } while (((int)unaff_D4w != (int)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16)) ||
                  (cVar3 = *(char *)(_DAT_00028854 + 5 + sVar7 * 0x16),
                  (int)*(short *)(_DAT_0002884c + 0x110) == (int)cVar3));
          *(short *)(puVar19 + -2) = (short)cVar3;
          *(undefined4 *)(puVar19 + -6) = 0x1b56;
          sVar10 = FUN_000015ea();
        } while ((sVar10 == 0) ||
                ((psVar15 = (short *)(sVar7 * 0x16 + _DAT_00028854), *psVar15 < 0 ||
                 (psVar15[1] < 0))));
        bVar5 = true;
LAB_00001b82:
        sVar6 = sVar6 + 1;
      }
      if (bVar5) {
        *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
        return;
      }
      break;
    case 3:
      if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
        for (sVar6 = 0; sVar6 < 200; sVar6 = sVar6 + 1) {
          *(undefined2 *)(puVar19 + -2) = 0xffff;
          *(undefined4 *)(puVar19 + -6) = 0x10008;
          *(undefined4 *)(puVar19 + -10) = 0x1bd0;
          unaff_D4w = FUN_00002ad0();
          if ((unaff_D4w != *(short *)(_DAT_0002884c + 0x110)) &&
             (*(short *)(unaff_D4w * 2 + _DAT_0002884c + 0x138) != 0)) {
            *(short *)(puVar19 + -2) = unaff_D4w;
            *(undefined4 *)(puVar19 + -6) = 0x1bfc;
            sVar11 = FUN_000015ea();
            if (sVar11 != 0) break;
          }
        }
        if (sVar6 < 200) {
          *(undefined2 *)(puVar19 + -2) = 10;
          *(undefined4 *)(puVar19 + -6) = 0x1000c;
          *(undefined4 *)(puVar19 + -10) = 0x1c26;
          sVar7 = FUN_00002ad0();
          sVar6 = 0;
          sVar11 = *(short *)(_DAT_0002884c + 0x182);
          while (sVar10 = sVar11 + -1, sVar11 != 0) {
            psVar15 = (short *)(sVar10 * 0x16 + _DAT_00028854);
            sVar11 = sVar10;
            if ((((int)unaff_D4w == (int)*(char *)((int)psVar15 + 5)) && (-1 < *psVar15)) &&
               (-1 < psVar15[1])) {
              sVar6 = sVar6 + 1;
            }
          }
          if (sVar7 <= sVar6) {
            *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w
            ;
            *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114a) = sVar7;
            *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114c) = 0;
            return;
          }
        }
      }
      break;
    case 4:
      if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
        sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
        sVar11 = 0;
        unaff_D4w = -1;
        while (sVar7 = sVar6 + -1, sVar6 != 0) {
          if (param_1._0_2_ == 0) {
            sVar10 = 0x3c;
          }
          else {
            sVar10 = 0x28;
          }
          sVar6 = sVar7;
          if (((int)*(char *)(sVar7 * 0x42 + _DAT_0002884c + 0x15d9) !=
               (int)*(short *)(_DAT_0002884c + 0x110)) &&
             (*(char *)((*(uint *)(*(short *)(sVar7 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                   _DAT_00028850 +
                                  *(short *)(sVar7 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                        _DAT_0002884c + 0x711) == '\n')) {
            *(short *)(puVar19 + -2) = (short)*(char *)(sVar7 * 0x42 + _DAT_0002884c + 0x15d9);
            *(undefined4 *)(puVar19 + -6) = 0x1d54;
            sVar8 = FUN_000015ea();
            if (sVar8 != 0) {
              *(undefined2 *)(puVar19 + -2) = 0;
              *(undefined4 *)(puVar19 + -6) = 0x10032;
              *(undefined4 *)(puVar19 + -10) = 0x1d6a;
              sVar9 = FUN_00002ad0();
              iVar14 = sVar7 * 0x42 + _DAT_0002884c;
              uVar12 = *(undefined2 *)(iVar14 + 0x15c4);
              sVar2 = _DAT_000288b0[1];
              sVar8 = *_DAT_000288b0;
              *(undefined2 *)(puVar19 + -8) = *(undefined2 *)(iVar14 + 0x15c6);
              *(undefined2 *)(puVar19 + -10) = uVar12;
              *(short *)(puVar19 + -0xc) = sVar2;
              *(short *)(puVar19 + -0xe) = sVar8;
              *(undefined4 *)(puVar19 + -0x12) = 0x1dae;
              sVar8 = func_0x00006e48();
              if (sVar8 < sVar10) {
                sVar9 = sVar9 + 0x32;
              }
              cVar3 = *(char *)(sVar7 * 0x42 + _DAT_0002884c + 0x15d9);
              if (cVar3 != '\x0f') {
                *(short *)(puVar19 + -2) = (short)cVar3;
                *(undefined4 *)(puVar19 + -6) = 0x1de4;
                sVar10 = FUN_000015ea();
                if (sVar10 != 0) {
                  *(undefined2 *)(puVar19 + -2) = 0;
                  *(undefined4 *)(puVar19 + -6) = 0x10032;
                  *(undefined4 *)(puVar19 + -10) = 0x1df8;
                  sVar10 = FUN_00002ad0();
                  sVar9 = sVar10 + sVar9;
                }
              }
              if (sVar11 < sVar9) {
                sVar11 = sVar9;
                unaff_D4w = sVar7;
              }
            }
          }
        }
        if (unaff_D4w != -1) {
          *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
          return;
        }
      }
      break;
    case 5:
      if ((*(short *)(_DAT_0002884c + 0x15c) == 0) && (*(short *)(_DAT_0002884c + 0x114) != 0)) {
        for (sVar6 = 0; sVar6 < 200; sVar6 = sVar6 + 1) {
          uVar12 = *(undefined2 *)(_DAT_0002884c + 0x15c2);
          *(undefined2 *)(puVar19 + -2) = 0xffff;
          *(undefined2 *)(puVar19 + -4) = uVar12;
          *(undefined2 *)(puVar19 + -6) = 1;
          *(undefined4 *)(puVar19 + -10) = 0x1e68;
          unaff_D4w = FUN_00002ad0();
          if (((int)*(char *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15d9) !=
               (int)*(short *)(_DAT_0002884c + 0x110)) &&
             (*(char *)((*(uint *)(*(short *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                   _DAT_00028850 +
                                  *(short *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18
                        ) + _DAT_0002884c + 0x711) == '\n')) {
            *(short *)(puVar19 + -2) = (short)*(char *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15d9);
            *(undefined4 *)(puVar19 + -6) = 0x1eee;
            sVar11 = FUN_000015ea();
            if (sVar11 != 0) {
              iVar14 = unaff_D4w * 0x42 + _DAT_0002884c;
              uVar12 = *(undefined2 *)(iVar14 + 0x15c4);
              sVar7 = _DAT_000288b0[1];
              sVar11 = *_DAT_000288b0;
              *(undefined2 *)(puVar19 + -2) = *(undefined2 *)(iVar14 + 0x15c6);
              *(undefined2 *)(puVar19 + -4) = uVar12;
              *(short *)(puVar19 + -6) = sVar7;
              *(short *)(puVar19 + -8) = sVar11;
              *(undefined4 *)(puVar19 + -0xc) = 0x1f36;
              sVar11 = func_0x00006e48();
              if ((sVar11 < 0x3d) || (99 < sVar6)) break;
            }
          }
        }
        if (sVar6 < 200) {
          *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
          return;
        }
      }
      break;
    case 6:
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = 0;
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114c) = 0;
      *(undefined2 *)(puVar19 + -2) = 500;
      *(undefined4 *)(puVar19 + -6) = 0x3012c;
      *(undefined4 *)(puVar19 + -10) = 0x1fa2;
      uVar12 = FUN_00002ad0();
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114a) = uVar12;
    default:
      goto switchD_000017cc_default;
    }
  } while( true );
LAB_00001a46:
  if (0x15 < sVar7) {
LAB_00001a4e:
    *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = sVar7;
    *(short **)(puVar19 + -4) = &local_8;
    *(short **)(puVar19 + -8) = &local_6;
    *(short *)(puVar19 + -10) = sVar7;
    *(undefined4 *)(puVar19 + -0xe) = 0x1a70;
    FUN_000000fa();
    *(short *)(puVar19 + -0xc) = local_8;
    *(short *)(puVar19 + -0xe) = local_6;
    *(undefined4 *)(puVar19 + -0x12) = 0x1a7e;
    func_0x000049d8();
    *(short *)(puVar19 + -0x10) = local_8;
    *(short *)(puVar19 + -0x12) = local_6;
    *(undefined4 *)(puVar19 + -0x16) = 0x1a8c;
    sVar6 = FUN_00002b50();
    if (-1 < sVar6) {
      puVar1 = (ushort *)(sVar6 * 0x20 + _DAT_0002884c + 0x830);
      *puVar1 = (ushort)(1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU)) | *puVar1;
      *(short *)(puVar19 + -2) = sVar6;
      *(undefined4 *)(puVar19 + -6) = 0x1ac0;
      func_0x00007470();
      *(short *)(puVar19 + -4) = local_8;
      *(short *)(puVar19 + -6) = local_6;
      *(undefined2 *)(puVar19 + -8) = 1;
      *(undefined4 *)(puVar19 + -0xc) = 0x1ad2;
      func_0x00002978();
    }
    *(undefined4 *)(puVar19 + -4) = 0x1ada;
    func_0x000047a8();
    *(undefined4 *)(puVar19 + -4) = 0;
    *(undefined4 *)(puVar19 + -8) = 0x10001;
    *(undefined4 *)(puVar19 + -0xc) = 0x1ae8;
    func_0x00006e70();
    return;
  }
  *(short **)(puVar19 + -4) = &local_8;
  *(short **)(puVar19 + -8) = &local_6;
  *(short *)(puVar19 + -10) = sVar7;
  *(undefined4 *)(puVar19 + -0xe) = 0x19b6;
  FUN_000000fa();
  iVar14 = sVar7 * 0x1e + _DAT_0002884c;
  puVar18 = puVar19;
  if (*(char *)(iVar14 + 0xd28) == '\x02') {
    puVar13 = (undefined2 *)(iVar14 + 0xd30);
    sVar8 = 0xe;
    do {
      puVar17 = puVar19;
      puVar13 = puVar13 + -1;
      *(undefined2 *)(puVar17 + -2) = *puVar13;
      sVar8 = sVar8 + -1;
      puVar19 = puVar17 + -2;
    } while (sVar8 != -1);
    *(undefined4 *)(puVar17 + -6) = 0x19e0;
    sVar8 = func_0x00004968();
    puVar18 = puVar17 + 0x1c;
    if (sVar8 == 0) {
      *(int *)(puVar17 + 0x18) = (int)*_DAT_000288b0 - (int)local_6;
      *(undefined4 *)(puVar17 + 0x14) = 0x1a0a;
      iVar14 = func_0x000076d8();
      puVar18 = puVar17 + 0x1c;
      if (iVar14 < sVar6) {
        *(int *)(puVar17 + 0x18) = (int)_DAT_000288b0[1] - (int)local_8;
        *(undefined4 *)(puVar17 + 0x14) = 0x1a36;
        iVar14 = func_0x000076d8();
        puVar19 = puVar17 + 0x1c;
        puVar18 = puVar17 + 0x1c;
        if ((iVar14 < sVar6) && (sVar11 = sVar11 + 1, puVar18 = puVar17 + 0x1c, sVar11 == sVar10))
        goto LAB_00001a4e;
      }
    }
  }
  sVar7 = sVar7 + 1;
  puVar19 = puVar18;
  goto LAB_00001a46;
  while( true ) {
    *(short *)(puVar19 + -2) = (short)cVar3;
    *(undefined4 *)(puVar19 + -6) = 0x18a2;
    sVar8 = FUN_000015ea();
    if ((sVar8 != 0) && (sVar6 = sVar6 + 1, sVar6 == sVar7)) break;
LAB_000018ae:
    do {
      sVar10 = sVar11 + -1;
      if (sVar11 == 0) goto LAB_000018b6;
      sVar11 = sVar10;
    } while ((*(char *)(_DAT_00028854 + 4 + sVar10 * 0x16) != '\x1c') ||
            (cVar3 = *(char *)(_DAT_00028854 + 5 + sVar10 * 0x16),
            (int)*(short *)(_DAT_0002884c + 0x110) == (int)cVar3));
  }
LAB_000018b6:
  *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = sVar10;
switchD_000017cc_default:
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 189 bytes

/* WARNING: Instruction at (ram,0x00001bf2) overlaps instruction at (ram,0x00001bf0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  ushort *puVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  short unaff_D3w;
  short unaff_D4w;
  undefined2 unaff_D7w;
  undefined2 *puVar10;
  int iVar11;
  short *psVar12;
  int unaff_A6;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  
code_r0x00001bf4:
  *(short *)((int)register0x0000003c + -2) = unaff_D4w;
  *(undefined4 *)((int)register0x0000003c + -6) = 0x1bfc;
  sVar4 = FUN_000015ea();
  if (sVar4 == 0) goto LAB_00001c06;
LAB_00001c0e:
  if (unaff_D3w < 200) {
    *(undefined2 *)((int)register0x0000003c + -2) = 10;
    *(undefined4 *)((int)register0x0000003c + -6) = 0x1000c;
    *(undefined4 *)((int)register0x0000003c + -10) = 0x1c26;
    sVar5 = FUN_00002ad0();
    sVar4 = 0;
    sVar8 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar6 = sVar8 + -1, sVar8 != 0) {
      psVar12 = (short *)(sVar6 * 0x16 + _DAT_00028854);
      sVar8 = sVar6;
      if ((((int)unaff_D4w == (int)*(char *)((int)psVar12 + 5)) && (-1 < *psVar12)) &&
         (-1 < psVar12[1])) {
        sVar4 = sVar4 + 1;
      }
    }
    if (sVar5 <= sVar4) {
      *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
      *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114a) = sVar5;
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114c) = 0;
      return;
    }
  }
LAB_000016fa:
  *(short *)(unaff_A6 + -6) = *(short *)(unaff_A6 + -6) + 1;
  *(short **)(unaff_A6 + -0x20) = _DAT_000288b0;
  uVar2 = *(int *)(unaff_A6 + -0x20) - _DAT_00028854;
  if (*(short *)(unaff_A6 + 8) == 0) {
    *(undefined2 *)((int)register0x0000003c + -2) = 0xffff;
    *(undefined2 *)((int)register0x0000003c + -4) = *(undefined2 *)(unaff_A6 + -0x1a);
    *(undefined2 *)((int)register0x0000003c + -6) = 1;
    *(undefined4 *)((int)register0x0000003c + -10) = 0x1776;
    sVar4 = FUN_00002ad0();
    unaff_D7w = *(undefined2 *)(sVar4 * 2 + 0x15692);
  }
  else {
    sVar4 = *(short *)(unaff_A6 + -6);
    if (sVar4 == 1) {
      *(undefined2 *)((int)register0x0000003c + -2) = 0xffff;
      *(undefined4 *)((int)register0x0000003c + -6) = 0x10005;
      *(undefined4 *)((int)register0x0000003c + -10) = 0x1742;
      sVar4 = FUN_00002ad0();
      if ((sVar4 == 0) && (*(short *)(_DAT_0002884c + 0x114) != 0)) {
        unaff_D7w = 5;
      }
      else {
        unaff_D7w = 4;
      }
    }
    else if (sVar4 == 2) {
      unaff_D7w = 3;
    }
    else if (sVar4 == 3) {
      unaff_D7w = 6;
    }
  }
  *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 1;
  *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146) =
       (short)(uVar2 / 0x16);
  *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1144) = unaff_D7w;
  switch(unaff_D7w) {
  case 0:
    sVar4 = 0;
    sVar8 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar5 = sVar8 + -1, sVar8 != 0) {
      sVar8 = sVar5;
      if ((*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16) == '\x1c') &&
         (*(undefined1 *)(unaff_A6 + -7) = *(undefined1 *)(_DAT_00028854 + 5 + sVar5 * 0x16),
         (int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(unaff_A6 + -7))) {
        *(short *)((int)register0x0000003c + -2) = (short)*(char *)(unaff_A6 + -7);
        *(undefined4 *)((int)register0x0000003c + -6) = 0x182c;
        sVar5 = FUN_000015ea();
        if (sVar5 != 0) {
          sVar4 = sVar4 + 1;
        }
      }
    }
    if (0 < sVar4) {
      *(undefined2 *)((int)register0x0000003c + -2) = 0;
      *(short *)((int)register0x0000003c + -4) = sVar4;
      *(undefined2 *)((int)register0x0000003c + -6) = 1;
      *(undefined4 *)((int)register0x0000003c + -10) = 0x1850;
      sVar5 = FUN_00002ad0();
      sVar4 = 0;
      sVar8 = *(short *)(_DAT_0002884c + 0x182);
      goto LAB_000018ae;
    }
    goto LAB_000016fa;
  case 1:
    if (*(short *)(unaff_A6 + 8) == 0) {
      sVar4 = 0x32;
    }
    else {
      sVar4 = 0x1e;
    }
    sVar8 = 0;
    for (sVar5 = 0; sVar5 < 0x16; sVar5 = sVar5 + 1) {
      *(int *)((int)register0x0000003c + -4) = unaff_A6 + -4;
      *(int *)((int)register0x0000003c + -8) = unaff_A6 + -2;
      *(short *)((int)register0x0000003c + -10) = sVar5;
      *(undefined4 *)((int)register0x0000003c + -0xe) = 0x18f2;
      FUN_000000fa();
      iVar11 = sVar5 * 0x1e + _DAT_0002884c;
      if (*(char *)(iVar11 + 0xd28) == '\x02') {
        puVar10 = (undefined2 *)(iVar11 + 0xd30);
        sVar6 = 0xe;
        puVar16 = (undefined1 *)register0x0000003c;
        do {
          puVar13 = puVar16;
          puVar10 = puVar10 + -1;
          *(undefined2 *)(puVar13 + -2) = *puVar10;
          sVar6 = sVar6 + -1;
          puVar16 = puVar13 + -2;
        } while (sVar6 != -1);
        *(undefined4 *)(puVar13 + -6) = 0x191c;
        sVar6 = func_0x00004968();
        register0x0000003c = (BADSPACEBASE *)(puVar13 + 0x1c);
        if (sVar6 == 0) {
          *(int *)(unaff_A6 + -0x36) = (int)sVar4;
          *(int *)(puVar13 + 0x18) = (int)*_DAT_000288b0 - (int)*(short *)(unaff_A6 + -2);
          *(undefined4 *)(puVar13 + 0x14) = 0x1946;
          iVar11 = func_0x000076d8();
          register0x0000003c = (BADSPACEBASE *)(puVar13 + 0x1c);
          if (iVar11 < *(int *)(unaff_A6 + -0x36)) {
            *(int *)(unaff_A6 + -0x36) = (int)sVar4;
            *(int *)(puVar13 + 0x18) = (int)_DAT_000288b0[1] - (int)*(short *)(unaff_A6 + -4);
            *(undefined4 *)(puVar13 + 0x14) = 0x1972;
            iVar11 = func_0x000076d8();
            register0x0000003c = (BADSPACEBASE *)(puVar13 + 0x1c);
            if (iVar11 < *(int *)(unaff_A6 + -0x36)) {
              sVar8 = sVar8 + 1;
              register0x0000003c = (BADSPACEBASE *)(puVar13 + 0x1c);
            }
          }
        }
      }
    }
    if (0 < sVar8) {
      *(undefined2 *)((int)register0x0000003c + -2) = 0;
      *(short *)((int)register0x0000003c + -4) = sVar8;
      *(undefined2 *)((int)register0x0000003c + -6) = 1;
      *(undefined4 *)((int)register0x0000003c + -10) = 0x199a;
      sVar6 = FUN_00002ad0();
      sVar5 = 0;
      sVar8 = 0;
      puVar16 = (undefined1 *)register0x0000003c;
      goto LAB_00001a46;
    }
    goto LAB_000016fa;
  case 2:
    bVar3 = false;
    sVar4 = 0;
    while ((sVar4 < 5 && (!bVar3))) {
      *(undefined2 *)((int)register0x0000003c + -2) = 0;
      *(undefined4 *)((int)register0x0000003c + -6) = 0x1afe;
      unaff_D4w = func_0x00004960();
      bVar3 = false;
      sVar8 = *(short *)(_DAT_0002884c + 0x182);
      do {
        do {
          do {
            sVar5 = sVar8 + -1;
            if (sVar8 == 0) goto LAB_00001b82;
            sVar8 = sVar5;
          } while (((int)unaff_D4w != (int)*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16)) ||
                  (*(undefined1 *)(unaff_A6 + -9) =
                        *(undefined1 *)(_DAT_00028854 + 5 + sVar5 * 0x16),
                  (int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(unaff_A6 + -9)));
          *(short *)((int)register0x0000003c + -2) = (short)*(char *)(unaff_A6 + -9);
          *(undefined4 *)((int)register0x0000003c + -6) = 0x1b56;
          sVar6 = FUN_000015ea();
        } while (sVar6 == 0);
        psVar12 = (short *)(sVar5 * 0x16 + _DAT_00028854);
        *(short **)(unaff_A6 + -0xe) = psVar12;
      } while ((*psVar12 < 0) || (psVar12[1] < 0));
      bVar3 = true;
LAB_00001b82:
      sVar4 = sVar4 + 1;
    }
    if (bVar3) {
      *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
      return;
    }
    goto LAB_000016fa;
  case 3:
    break;
  case 4:
    if (*(short *)(_DAT_0002884c + 0x15c) == 0) {
      sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
      sVar8 = 0;
      unaff_D4w = -1;
      while (sVar5 = sVar4 + -1, sVar4 != 0) {
        if (*(short *)(unaff_A6 + 8) == 0) {
          uVar9 = 0x3c;
        }
        else {
          uVar9 = 0x28;
        }
        *(undefined2 *)(unaff_A6 + -0x1c) = uVar9;
        sVar4 = sVar5;
        if (((int)*(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9) !=
             (int)*(short *)(_DAT_0002884c + 0x110)) &&
           (*(char *)((*(uint *)(*(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                 _DAT_00028850 +
                                *(short *)(sVar5 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) == '\n')) {
          *(short *)((int)register0x0000003c + -2) =
               (short)*(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9);
          *(undefined4 *)((int)register0x0000003c + -6) = 0x1d54;
          sVar6 = FUN_000015ea();
          if (sVar6 != 0) {
            *(undefined2 *)((int)register0x0000003c + -2) = 0;
            *(undefined4 *)((int)register0x0000003c + -6) = 0x10032;
            *(undefined4 *)((int)register0x0000003c + -10) = 0x1d6a;
            sVar6 = FUN_00002ad0();
            iVar11 = sVar5 * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x12) = iVar11;
            *(undefined2 *)(unaff_A6 + -0x28) = *(undefined2 *)(iVar11 + 0x15c6);
            *(undefined2 *)(unaff_A6 + -0x26) = *(undefined2 *)(iVar11 + 0x15c4);
            psVar12 = _DAT_000288b0;
            *(short *)(unaff_A6 + -0x24) = _DAT_000288b0[1];
            *(short *)(unaff_A6 + -0x22) = *psVar12;
            *(undefined2 *)((int)register0x0000003c + -8) = *(undefined2 *)(unaff_A6 + -0x28);
            *(undefined2 *)((int)register0x0000003c + -10) = *(undefined2 *)(unaff_A6 + -0x26);
            *(undefined2 *)((int)register0x0000003c + -0xc) = *(undefined2 *)(unaff_A6 + -0x24);
            *(undefined2 *)((int)register0x0000003c + -0xe) = *(undefined2 *)(unaff_A6 + -0x22);
            *(undefined4 *)((int)register0x0000003c + -0x12) = 0x1dae;
            sVar7 = func_0x00006e48();
            if (sVar7 < *(short *)(unaff_A6 + -0x1c)) {
              sVar6 = sVar6 + 0x32;
            }
            *(undefined1 *)(unaff_A6 + -0x13) =
                 *(undefined1 *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9);
            if (*(char *)(unaff_A6 + -0x13) != '\x0f') {
              *(short *)((int)register0x0000003c + -2) = (short)*(char *)(unaff_A6 + -0x13);
              *(undefined4 *)((int)register0x0000003c + -6) = 0x1de4;
              sVar7 = FUN_000015ea();
              if (sVar7 != 0) {
                *(undefined2 *)((int)register0x0000003c + -2) = 0;
                *(undefined4 *)((int)register0x0000003c + -6) = 0x10032;
                *(undefined4 *)((int)register0x0000003c + -10) = 0x1df8;
                sVar7 = FUN_00002ad0();
                sVar6 = sVar7 + sVar6;
              }
            }
            if (sVar8 < sVar6) {
              sVar8 = sVar6;
              unaff_D4w = sVar5;
            }
          }
        }
      }
      if (unaff_D4w != -1) {
        *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
        return;
      }
    }
    goto LAB_000016fa;
  case 5:
    if ((*(short *)(_DAT_0002884c + 0x15c) == 0) && (*(short *)(_DAT_0002884c + 0x114) != 0)) {
      for (sVar4 = 0; sVar4 < 200; sVar4 = sVar4 + 1) {
        *(undefined2 *)(unaff_A6 + -0x2a) = *(undefined2 *)(_DAT_0002884c + 0x15c2);
        *(undefined2 *)((int)register0x0000003c + -2) = 0xffff;
        *(undefined2 *)((int)register0x0000003c + -4) = *(undefined2 *)(unaff_A6 + -0x2a);
        *(undefined2 *)((int)register0x0000003c + -6) = 1;
        *(undefined4 *)((int)register0x0000003c + -10) = 0x1e68;
        unaff_D4w = FUN_00002ad0();
        if (((int)*(char *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15d9) !=
             (int)*(short *)(_DAT_0002884c + 0x110)) &&
           (*(char *)((*(uint *)(*(short *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                 _DAT_00028850 +
                                *(short *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                      + _DAT_0002884c + 0x711) == '\n')) {
          *(short *)((int)register0x0000003c + -2) =
               (short)*(char *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15d9);
          *(undefined4 *)((int)register0x0000003c + -6) = 0x1eee;
          sVar8 = FUN_000015ea();
          if (sVar8 != 0) {
            iVar11 = unaff_D4w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x18) = iVar11;
            *(undefined2 *)(unaff_A6 + -0x32) = *(undefined2 *)(iVar11 + 0x15c6);
            *(undefined2 *)(unaff_A6 + -0x30) = *(undefined2 *)(iVar11 + 0x15c4);
            psVar12 = _DAT_000288b0;
            *(short *)(unaff_A6 + -0x2e) = _DAT_000288b0[1];
            *(short *)(unaff_A6 + -0x2c) = *psVar12;
            *(undefined2 *)((int)register0x0000003c + -2) = *(undefined2 *)(unaff_A6 + -0x32);
            *(undefined2 *)((int)register0x0000003c + -4) = *(undefined2 *)(unaff_A6 + -0x30);
            *(undefined2 *)((int)register0x0000003c + -6) = *(undefined2 *)(unaff_A6 + -0x2e);
            *(undefined2 *)((int)register0x0000003c + -8) = *(undefined2 *)(unaff_A6 + -0x2c);
            *(undefined4 *)((int)register0x0000003c + -0xc) = 0x1f36;
            sVar8 = func_0x00006e48();
            if ((sVar8 < 0x3d) || (99 < sVar4)) break;
          }
        }
      }
      if (sVar4 < 200) {
        *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = unaff_D4w;
        return;
      }
    }
    goto LAB_000016fa;
  case 6:
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = 0;
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114c) = 0;
    *(undefined2 *)((int)register0x0000003c + -2) = 500;
    *(undefined4 *)((int)register0x0000003c + -6) = 0x3012c;
    *(undefined4 *)((int)register0x0000003c + -10) = 0x1fa2;
    uVar9 = FUN_00002ad0();
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114a) = uVar9;
  default:
    goto switchD_000017cc_default;
  }
  if (*(short *)(_DAT_0002884c + 0x15c) == 0) goto code_r0x00001bba;
  goto LAB_000016fa;
code_r0x00001bba:
  for (unaff_D3w = 0; unaff_D3w < 200; unaff_D3w = unaff_D3w + 1) {
    *(undefined2 *)((int)register0x0000003c + -2) = 0xffff;
    *(undefined4 *)((int)register0x0000003c + -6) = 0x10008;
    *(undefined4 *)((int)register0x0000003c + -10) = 0x1bd0;
    unaff_D4w = FUN_00002ad0();
    if ((unaff_D4w != *(short *)(_DAT_0002884c + 0x110)) &&
       (*(short *)(unaff_D4w * 2 + _DAT_0002884c + 0x138) != 0)) goto code_r0x00001bf4;
LAB_00001c06:
  }
  goto LAB_00001c0e;
LAB_00001a46:
  if (0x15 < sVar5) {
LAB_00001a4e:
    *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = sVar5;
    *(int *)(puVar16 + -4) = unaff_A6 + -4;
    *(int *)(puVar16 + -8) = unaff_A6 + -2;
    *(short *)(puVar16 + -10) = sVar5;
    *(undefined4 *)(puVar16 + -0xe) = 0x1a70;
    FUN_000000fa();
    *(undefined2 *)(puVar16 + -0xc) = *(undefined2 *)(unaff_A6 + -4);
    *(undefined2 *)(puVar16 + -0xe) = *(undefined2 *)(unaff_A6 + -2);
    *(undefined4 *)(puVar16 + -0x12) = 0x1a7e;
    func_0x000049d8();
    *(undefined2 *)(puVar16 + -0x10) = *(undefined2 *)(unaff_A6 + -4);
    *(undefined2 *)(puVar16 + -0x12) = *(undefined2 *)(unaff_A6 + -2);
    *(undefined4 *)(puVar16 + -0x16) = 0x1a8c;
    sVar4 = FUN_00002b50();
    if (-1 < sVar4) {
      puVar1 = (ushort *)(sVar4 * 0x20 + _DAT_0002884c + 0x830);
      *puVar1 = (ushort)(1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU)) | *puVar1;
      *(short *)(puVar16 + -2) = sVar4;
      *(undefined4 *)(puVar16 + -6) = 0x1ac0;
      func_0x00007470();
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)(unaff_A6 + -4);
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)(unaff_A6 + -2);
      *(undefined2 *)(puVar16 + -8) = 1;
      *(undefined4 *)(puVar16 + -0xc) = 0x1ad2;
      func_0x00002978();
    }
    *(undefined4 *)(puVar16 + -4) = 0x1ada;
    func_0x000047a8();
    *(undefined4 *)(puVar16 + -4) = 0;
    *(undefined4 *)(puVar16 + -8) = 0x10001;
    *(undefined4 *)(puVar16 + -0xc) = 0x1ae8;
    func_0x00006e70();
    return;
  }
  *(int *)(puVar16 + -4) = unaff_A6 + -4;
  *(int *)(puVar16 + -8) = unaff_A6 + -2;
  *(short *)(puVar16 + -10) = sVar5;
  *(undefined4 *)(puVar16 + -0xe) = 0x19b6;
  FUN_000000fa();
  iVar11 = sVar5 * 0x1e + _DAT_0002884c;
  puVar15 = puVar16;
  if (*(char *)(iVar11 + 0xd28) == '\x02') {
    puVar10 = (undefined2 *)(iVar11 + 0xd30);
    sVar7 = 0xe;
    do {
      puVar14 = puVar16;
      puVar10 = puVar10 + -1;
      *(undefined2 *)(puVar14 + -2) = *puVar10;
      sVar7 = sVar7 + -1;
      puVar16 = puVar14 + -2;
    } while (sVar7 != -1);
    *(undefined4 *)(puVar14 + -6) = 0x19e0;
    sVar7 = func_0x00004968();
    puVar15 = puVar14 + 0x1c;
    if (sVar7 == 0) {
      *(int *)(unaff_A6 + -0x36) = (int)sVar4;
      *(int *)(puVar14 + 0x18) = (int)*_DAT_000288b0 - (int)*(short *)(unaff_A6 + -2);
      *(undefined4 *)(puVar14 + 0x14) = 0x1a0a;
      iVar11 = func_0x000076d8();
      puVar15 = puVar14 + 0x1c;
      if (iVar11 < *(int *)(unaff_A6 + -0x36)) {
        *(int *)(unaff_A6 + -0x36) = (int)sVar4;
        *(int *)(puVar14 + 0x18) = (int)_DAT_000288b0[1] - (int)*(short *)(unaff_A6 + -4);
        *(undefined4 *)(puVar14 + 0x14) = 0x1a36;
        iVar11 = func_0x000076d8();
        puVar16 = puVar14 + 0x1c;
        puVar15 = puVar14 + 0x1c;
        if ((iVar11 < *(int *)(unaff_A6 + -0x36)) &&
           (sVar8 = sVar8 + 1, puVar15 = puVar14 + 0x1c, sVar8 == sVar6)) goto LAB_00001a4e;
      }
    }
  }
  sVar5 = sVar5 + 1;
  puVar16 = puVar15;
  goto LAB_00001a46;
  while( true ) {
    *(short *)((int)register0x0000003c + -2) = (short)*(char *)(unaff_A6 + -8);
    *(undefined4 *)((int)register0x0000003c + -6) = 0x18a2;
    sVar7 = FUN_000015ea();
    if ((sVar7 != 0) && (sVar4 = sVar4 + 1, sVar4 == sVar5)) break;
LAB_000018ae:
    do {
      sVar6 = sVar8 + -1;
      if (sVar8 == 0) goto LAB_000018b6;
      sVar8 = sVar6;
    } while ((*(char *)(_DAT_00028854 + 4 + sVar6 * 0x16) != '\x1c') ||
            (*(undefined1 *)(unaff_A6 + -8) = *(undefined1 *)(_DAT_00028854 + 5 + sVar6 * 0x16),
            (int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(unaff_A6 + -8)));
  }
LAB_000018b6:
  *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148) = sVar6;
switchD_000017cc_default:
  return;
}



// Function: FUN_00001fbe at 00001fbe
// Size: 526 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001fbe(void)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  
  if ((_DAT_000288ac != (short *)0x0) && ('\0' < *(char *)((int)_DAT_000288ac + 7))) {
    sVar2 = *_DAT_000288ac;
    sVar3 = _DAT_000288ac[1];
    cVar6 = *(char *)((short)(ushort)(byte)((uint)*(undefined4 *)
                                                   (sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >>
                                           0x18) + _DAT_0002884c + 0x711);
    iVar7 = 0;
    _DAT_00027e8a = sVar2;
    _DAT_00027e8c = sVar3;
    if (cVar6 == '\v') {
      sVar5 = FUN_00002b50(sVar3);
      if (sVar5 < 0) {
        cVar6 = '\a';
      }
      else {
        iVar7 = sVar5 * 0x20 + _DAT_0002884c + 0x812;
      }
    }
    if (_DAT_000288b0 == 0) {
      if ((cVar6 == '\v') && (*(char *)(iVar7 + 0x18) == '\x01')) {
        FUN_00002ad8();
      }
    }
    else if ((cVar6 == '\v') &&
            ((*(byte *)(sVar3 * 0xe0 + _DAT_00028850 + 1 + sVar2 * 2) & 0x40) == 0)) {
      if (*(char *)(iVar7 + 0x18) == '\x03') {
        func_0x000074a8((short)_DAT_000288b0);
        func_0x00006e50();
        if ((_DAT_00028952 == 0) &&
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          func_0x00002c80();
        }
        else {
          func_0x00003b98();
        }
        func_0x000074d8(sVar3);
      }
      else if (*(char *)(iVar7 + 0x18) == '\x01') {
        if ((_DAT_00028952 == 0) &&
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_00002ad8();
        }
        else {
          func_0x00003e20((short)*(undefined4 *)(_DAT_000297f4 + 0x80),0x3f9);
        }
      }
      else {
        FUN_000021cc((short)iVar7,sVar3);
      }
      piVar1 = *(int **)(_DAT_000297f4 + 0x80);
      (**(code **)(*piVar1 + 0x118))();
      (**(code **)(*piVar1 + 0x20))(piVar1,0,0);
    }
  }
  return;
}



// Function: FUN_000021cc at 000021cc
// Size: 428 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000021cc(int param_1,undefined4 param_2)

{
  short *psVar1;
  bool bVar2;
  short sVar4;
  int iVar3;
  char cVar6;
  short sVar5;
  undefined2 extraout_A0w;
  undefined1 extraout_A0b;
  undefined1 extraout_A0b_00;
  undefined4 extraout_A0;
  undefined2 extraout_A0w_00;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined1 extraout_A0b_01;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined1 auStack_a [2];
  undefined2 uStack_8;
  undefined2 local_6;
  
  if ((_DAT_00028952 == 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_6 = FUN_00002b50(param_2._2_2_);
  func_0x00003a78();
  if (!bVar2) {
    uVar12 = 0;
    uVar10 = *_DAT_000288b0;
    FUN_00000082(_DAT_000288b0[1]);
    uVar7 = local_6;
    FUN_00002d6c(uVar10,uVar12);
    func_0x00002a08(uVar7);
  }
  uVar9 = 0;
  func_0x000074a8((short)_DAT_000288b0);
  if (*(char *)(param_1 + 0x18) != '\x05') {
    if (*(char *)(param_1 + 0x1a) == '\0') {
      if (!bVar2) {
        FUN_00002ad8(0);
        FUN_00002dd6(extraout_A0w);
        (**(code **)(*_DAT_00027e86 + 0x40c))();
      }
    }
    else {
      if (!bVar2) {
        cVar6 = *(char *)(*(char *)(param_1 + 0x1a) * 0x10 + _DAT_0002884c + 0xfa6);
        if (('@' < cVar6) && (cVar6 < '[')) {
          cVar6 = cVar6 + ' ';
        }
        if ((((cVar6 == 'a') || (cVar6 == 'e')) || (cVar6 == 'o')) ||
           ((cVar6 == 'i' || (cVar6 == 'u')))) {
          FUN_00002ad8(3,(short)((short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224)
                       ,(short)(*(char *)(param_1 + 0x1a) * 0x10 + _DAT_0002884c + 0xfa6));
          func_0x000076d0(0x78f8,extraout_A0b);
        }
        else {
          FUN_00002ad8(0,(short)((short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224)
                       ,(short)(*(char *)(param_1 + 0x1a) * 0x10 + _DAT_0002884c + 0xfa6));
          func_0x000076d0(0x78f8,extraout_A0b_00);
        }
        uVar7 = 2;
        FUN_00002dd6(0x78f8);
        uVar10 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
        (**(code **)(*_DAT_00027e86 + 0x40c))();
        uVar9 = 1;
        func_0x00002a08(uVar10,uVar7);
      }
      sVar4 = FUN_000029e6((short)param_1);
      if (sVar4 != 0) {
        uStack_8 = CONCAT11(*(undefined1 *)((int)_DAT_000288b0 + 1),
                            *(undefined1 *)((int)_DAT_000288b0 + 3));
        iVar3 = (short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224;
        uVar10 = 0xfffe;
        uVar8 = (undefined1)*(undefined2 *)(_DAT_0002884c + 0x110);
        func_0x00006e50(uVar9,uStack_8,(short)iVar3);
        psVar1 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0x5a + _DAT_0002884c + 0x11a6);
        *psVar1 = *psVar1 + 1;
        func_0x00006e60(0,(short)((uint)_DAT_000288b0 >> 0x10),uVar8,uVar10,
                        (short)((uint)iVar3 >> 0x10));
        for (sVar4 = 0; sVar4 < _DAT_000283d8; sVar4 = sVar4 + 1) {
          if (*(short *)(&DAT_00027fda + sVar4 * 2) < 8) {
            psVar1 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0x5a + _DAT_0002884c + 0x11aa);
            *psVar1 = *psVar1 + 1;
          }
        }
        func_0x00007500();
        func_0x00004950((short)_DAT_000288b0,_DAT_000288b0[1]);
        func_0x00007440((char)_DAT_000288b0);
        _DAT_000288b0 = (undefined2 *)0x0;
        _DAT_000288ac = 0;
        func_0x00004918();
        if (!bVar2) {
          FUN_00002ad8(1);
          uVar10 = (undefined2)((uint)extraout_A0 >> 0x10);
          FUN_00002dd6((short)extraout_A0);
          FUN_00002e16(uVar10);
          func_0x00005fe8();
          func_0x000048d0();
          if (_DAT_00027fb8 != (int *)0x0) {
            (**(code **)(*_DAT_00027fb8 + 0x26c))();
          }
        }
        if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) == 0) {
          return 0;
        }
                    /* WARNING: Call to offcut address within same function */
        sVar4 = func_0x00002878(0);
        return (int)sVar4;
      }
      if (!bVar2) {
        FUN_00002ad8(2);
        FUN_00002dd6(extraout_A0w_00);
        (**(code **)(*_DAT_00027e86 + 0x40c))();
      }
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
  }
  cVar6 = *(char *)(param_1 + 0x18);
  if (cVar6 == '\x02') {
    if (bVar2) {
      *(undefined1 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd28) = 3;
      *(short *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd2a) =
           (short)((uint)((int)_DAT_000288b0 - _DAT_00028854) / 0x16);
      *(undefined2 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd2c) = 0;
      *(undefined2 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd2e) = 0;
    }
    else {
      iVar3 = (short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd12;
      iVar11 = (short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224;
      FUN_00002ad8(0,(short)iVar11,(short)iVar3);
      uVar9 = (undefined1)((uint)extraout_A0_00 >> 0x10);
      uVar7 = 2;
      func_0x000076d0(0x78f8,(char)extraout_A0_00);
      uVar10 = 2;
      FUN_00002dd6(0x78f8);
      *(undefined1 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd28) = 1;
      *(undefined2 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd2a) = 0;
      *(undefined2 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd2c) =
           param_2._0_2_;
      *(undefined2 *)((short)*(char *)(param_1 + 0x19) * 0x1e + _DAT_0002884c + 0xd2e) =
           param_2._2_2_;
      FUN_00002e16(uVar10,uVar7,uVar9,(short)((uint)iVar11 >> 0x10),(short)((uint)iVar3 >> 0x10));
    }
    func_0x00007460();
    func_0x00006e50();
    func_0x000074d8(param_2._2_2_);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else if (cVar6 == '\x04') {
    if (*(short *)(param_1 + 0x1c) == 0) {
      sVar4 = FUN_00002ad0(500);
    }
    else {
      sVar4 = FUN_00002ad0(1000);
    }
    func_0x000074d8(param_2._2_2_);
    uVar9 = 0x74;
    func_0x00007498(sVar4);
    if (!bVar2) {
      sVar5 = sVar4 >> 0xf;
      iVar3 = (short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224;
      FUN_00002ad8(0,(short)iVar3,sVar4);
      uVar8 = (undefined1)((uint)extraout_A0_01 >> 0x10);
      uVar9 = (undefined1)extraout_A0_01;
      uVar7 = 2;
      func_0x000076d0(0x78f8,uVar9);
      uVar10 = 2;
      FUN_00002dd6(0x78f8);
      FUN_00002e16(uVar10,uVar7,uVar8,(short)((uint)iVar3 >> 0x10),sVar5);
    }
    func_0x00006e50(uVar9,local_6,*(char *)(_DAT_000288b0 + 5) * 0x14 + (short)_DAT_0002884c + 0x224
                   );
  }
  else if (cVar6 == '\x05') {
    func_0x000074d8(param_2._2_2_);
    sVar4 = FUN_00002ad0(2);
    if (*(short *)(param_1 + 0x1c) != 0) {
      sVar4 = sVar4 + 2;
    }
    if (sVar4 < 2) {
      iVar3 = (short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224;
      FUN_000032f8((short)((uint)iVar3 >> 0x10));
      FUN_00002ad8(0,extraout_A0w_03,(short)iVar3);
      uVar9 = extraout_A0b_01;
      func_0x000076d0(0x78f8,extraout_A0b_01);
    }
    else {
      iVar3 = (short)*(char *)(_DAT_000288b0 + 5) * 0x14 + _DAT_0002884c + 0x224;
      FUN_000032f8((short)((uint)iVar3 >> 0x10));
      uVar9 = (undefined1)sVar4;
      FUN_00002ad8(1,uVar9,extraout_A0w_01,(short)iVar3);
      func_0x000076d0(0x78f8,extraout_A0w_02);
    }
    if (!bVar2) {
      uVar10 = 2;
      FUN_00002dd6(0x78f8);
      uVar9 = 0;
      FUN_00002e16(uVar10);
    }
    for (sVar5 = 0; sVar5 < sVar4; sVar5 = sVar5 + 1) {
      uVar9 = 0;
      func_0x000049c8();
    }
    func_0x00006e50(uVar9,local_6,*(char *)(_DAT_000288b0 + 5) * 0x14 + (short)_DAT_0002884c + 0x224
                   );
    if (_DAT_000288ac != 0) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        FUN_00002b28(param_2._2_2_,(short)auStack_a);
        FUN_00002b38(2,0);
        func_0x00002b00((short)_DAT_000288ac);
        func_0x000048d0();
      }
    }
  }
  iVar3 = func_0x00007470();
  return iVar3;
}



// Function: FUN_00002378 at 00002378
// Size: 1399 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00002378(void)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  short sVar5;
  int iVar4;
  short unaff_D3w;
  short sVar6;
  undefined2 unaff_D5w;
  undefined2 unaff_D6w;
  undefined2 extraout_A0w;
  int unaff_A2;
  int unaff_A6;
  undefined2 uStack00000004;
  short sStack00000008;
  undefined2 uVar7;
  undefined2 uVar8;
  
  FUN_00002ad8();
  func_0x000076d0(0x78f8);
  sStack00000008 = 2;
  uStack00000004 = 0;
  FUN_00002dd6();
  uStack00000004 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
  (**(code **)(*_DAT_00027e86 + 0x40c))();
  func_0x00002a08();
  sStack00000008 = (short)((uint)unaff_A2 >> 0x10);
  uStack00000004 = 0;
  sVar5 = FUN_000029e6();
  iVar4 = _DAT_000288b0;
  if (sVar5 == 0) {
    if (unaff_D3w != 0) {
      sStack00000008 = 0x34;
      uStack00000004 = 0;
      FUN_00002ad8();
      uStack00000004 = 0;
      FUN_00002dd6();
      uStack00000004 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
      (**(code **)(*_DAT_00027e86 + 0x40c))();
    }
    *(undefined1 *)(unaff_A2 + 0x1a) = 0;
    cVar2 = *(char *)(unaff_A2 + 0x18);
    if (cVar2 == '\x02') {
      if (unaff_D3w == 0) {
        *(undefined1 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd28) = 3;
        *(short *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd2a) =
             (short)((uint)(_DAT_000288b0 - _DAT_00028854) / 0x16);
        *(undefined2 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd2c) = 0;
        *(undefined2 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd2e) = 0;
      }
      else {
        sStack00000008 =
             (short)((uint)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd12) >>
                    0x10);
        uStack00000004 =
             (undefined2)
             ((uint)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224) >> 0x10);
        FUN_00002ad8();
        uVar8 = 2;
        func_0x000076d0(0x78f8);
        uVar7 = 2;
        FUN_00002dd6(0x78f8);
        *(undefined1 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd28) = 1;
        *(undefined2 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd2a) = 0;
        *(undefined2 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd2c) =
             unaff_D6w;
        *(undefined2 *)((short)*(char *)(unaff_A2 + 0x19) * 0x1e + _DAT_0002884c + 0xd2e) =
             unaff_D5w;
        FUN_00002e16(uVar7,uVar8);
      }
      sStack00000008 = 0x26d8;
      func_0x00007460();
      sStack00000008 = *(char *)(_DAT_000288b0 + 10) * 0x14 + (short)_DAT_0002884c + 0x224;
      uStack00000004 = *(undefined2 *)(unaff_A6 + -2);
      func_0x00006e50();
      func_0x000074d8();
      *(undefined1 *)(unaff_A2 + 0x18) = 0;
    }
    else if (cVar2 == '\x04') {
      if (*(short *)(unaff_A2 + 0x1c) == 0) {
        sStack00000008 = 500;
        uStack00000004 = 0x2740;
        sVar5 = FUN_00002ad0();
      }
      else {
        sStack00000008 = 1000;
        uStack00000004 = 0x2754;
        sVar5 = FUN_00002ad0();
      }
      uStack00000004 = 0;
      func_0x000074d8();
      uStack00000004 = *(undefined2 *)(_DAT_0002884c + 0x110);
      func_0x00007498();
      if (unaff_D3w != 0) {
        sStack00000008 = sVar5 >> 0xf;
        uStack00000004 =
             (undefined2)
             ((uint)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224) >> 0x10);
        FUN_00002ad8();
        uVar8 = 2;
        func_0x000076d0(0x78f8);
        uVar7 = 2;
        FUN_00002dd6(0x78f8);
        FUN_00002e16(uVar7,uVar8);
      }
      sStack00000008 =
           (short)((uint)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224) >>
                  0x10);
      uStack00000004 = 0x66;
      func_0x00006e50();
    }
    else if (cVar2 == '\x05') {
      uStack00000004 = 0;
      func_0x000074d8();
      uStack00000004 = 2;
      sVar5 = FUN_00002ad0();
      if (*(short *)(unaff_A2 + 0x1c) != 0) {
        sVar5 = sVar5 + 2;
      }
      if (sVar5 < 2) {
        sStack00000008 =
             (short)((uint)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224) >>
                    0x10);
        uStack00000004 = 0x28bc;
        FUN_000032f8();
        FUN_00002ad8();
        func_0x000076d0(0x78f8);
      }
      else {
        sStack00000008 =
             (short)((uint)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224) >>
                    0x10);
        uStack00000004 = 0x2866;
        FUN_000032f8();
        FUN_00002ad8(1);
        func_0x000076d0(0x78f8,extraout_A0w);
      }
      if (unaff_D3w != 0) {
        sStack00000008 = 2;
        uStack00000004 = 0;
        FUN_00002dd6();
        uStack00000004 = 0x28f8;
        FUN_00002e16();
      }
      for (sVar6 = 0; sVar6 < sVar5; sVar6 = sVar6 + 1) {
        uStack00000004 = 0x2910;
        func_0x000049c8();
      }
      sStack00000008 =
           (short)((uint)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224) >>
                  0x10);
      uStack00000004 = 100;
      func_0x00006e50();
      if (_DAT_000288ac != 0) {
        if ((_DAT_00028952 == 0) &&
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          sStack00000008 = (short)((uint)(unaff_A6 + -6) >> 0x10);
          uStack00000004 = unaff_D6w;
          FUN_00002b28();
          FUN_00002b38(2);
          func_0x00002b00((short)_DAT_000288ac);
          func_0x000048d0();
        }
      }
    }
    sStack00000008 = 0x29dc;
    iVar4 = func_0x00007470();
  }
  else {
    *(undefined1 *)(unaff_A6 + -4) = *(undefined1 *)(_DAT_000288b0 + 1);
    *(undefined1 *)(unaff_A6 + -3) = *(undefined1 *)(iVar4 + 3);
    sStack00000008 =
         (short)((uint)((short)*(char *)(iVar4 + 10) * 0x14 + _DAT_0002884c + 0x224) >> 0x10);
    uStack00000004 = 0xfffe;
    func_0x00006e50();
    psVar1 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0x5a + _DAT_0002884c + 0x11a6);
    *psVar1 = *psVar1 + 1;
    func_0x00006e60(0,(short)((uint)_DAT_000288b0 >> 0x10));
    for (sVar5 = 0; sVar5 < _DAT_000283d8; sVar5 = sVar5 + 1) {
      if (*(short *)(&DAT_00027fda + sVar5 * 2) < 8) {
        psVar1 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0x5a + _DAT_0002884c + 0x11aa);
        *psVar1 = *psVar1 + 1;
      }
    }
    sStack00000008 = 0x2496;
    func_0x00007500();
    sStack00000008 = *(undefined2 *)(_DAT_000288b0 + 2);
    uStack00000004 = (undefined2)_DAT_000288b0;
    func_0x00004950();
    func_0x00007440();
    _DAT_000288b0 = 0;
    _DAT_000288ac = 0;
    func_0x00004918();
    if (unaff_D3w != 0) {
      sStack00000008 = 0x34;
      uStack00000004 = 0;
      FUN_00002ad8();
      uStack00000004 = 0;
      FUN_00002dd6();
      uStack00000004 = 0x24f6;
      FUN_00002e16();
      uStack00000004 = 0x24fc;
      func_0x00005fe8();
      uStack00000004 = 0x2502;
      func_0x000048d0();
      if (_DAT_00027fb8 != (int *)0x0) {
        sStack00000008 = (short)((uint)_DAT_00027fb8 >> 0x10);
        uStack00000004 = 0;
        (**(code **)(*_DAT_00027fb8 + 0x26c))();
      }
    }
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) == 0) {
      iVar4 = 0;
    }
    else {
      sStack00000008 = 0;
      uStack00000004 = 0;
                    /* WARNING: Call to offcut address within same function */
      sVar5 = func_0x00002878();
      iVar4 = (int)sVar5;
    }
  }
  return iVar4;
}



// Function: FUN_000028f0 at 000028f0
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000028f0(void)

{
  bool bVar1;
  short sVar2;
  short unaff_D7w;
  undefined1 uVar3;
  
  uVar3 = 0;
  FUN_00002e16();
  for (sVar2 = 0; sVar2 < unaff_D7w; sVar2 = sVar2 + 1) {
    uVar3 = 0;
    func_0x000049c8();
  }
  func_0x00006e50(uVar3);
  if (_DAT_000288ac != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00002b28();
      FUN_00002b38(2,0);
      func_0x00002b00(_DAT_000288ac);
      func_0x000048d0();
    }
  }
  func_0x00007470();
  return;
}



// Function: FUN_00002900 at 00002900
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002900(void)

{
  bool bVar1;
  short sVar2;
  short unaff_D7w;
  
  for (sVar2 = 0; sVar2 < unaff_D7w; sVar2 = sVar2 + 1) {
    func_0x000049c8();
  }
  func_0x00006e50();
  if (_DAT_000288ac != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00002b28();
      FUN_00002b38(2,0);
      func_0x00002b00(_DAT_000288ac);
      func_0x000048d0();
    }
  }
  func_0x00007470();
  return;
}



// Function: FUN_00002910 at 00002910
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002910(void)

{
  bool bVar1;
  short unaff_D4w;
  short unaff_D7w;
  int unaff_A2;
  short unaff_A6w;
  short sStack00000004;
  
  while (unaff_D4w = unaff_D4w + 1, unaff_D4w < unaff_D7w) {
    func_0x000049c8();
  }
  sStack00000004 = *(char *)(_DAT_000288b0 + 10) * 0x14 + (short)_DAT_0002884c + 0x224;
  func_0x00006e50();
  if (_DAT_000288ac != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      sStack00000004 = unaff_A6w + -6;
      FUN_00002b28();
      FUN_00002b38(2,0);
      func_0x00002b00(_DAT_000288ac);
      func_0x000048d0();
    }
  }
  sStack00000004 = (short)((unaff_A2 - (_DAT_0002884c + 0x812)) / 0x20);
  func_0x00007470();
  return;
}



// Function: FUN_00002918 at 00002918
// Size: 15 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002918(void)

{
  bool bVar1;
  
  func_0x00006e50();
  if (_DAT_000288ac != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00002b28();
      FUN_00002b38(2,0);
      func_0x00002b00(_DAT_000288ac);
      func_0x000048d0();
    }
  }
  func_0x00007470();
  return;
}



// Function: FUN_00002928 at 00002928
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002928(void)

{
  bool bVar1;
  
  func_0x00006e50();
  if (_DAT_000288ac != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00002b28();
      FUN_00002b38(2,0);
      func_0x00002b00(_DAT_000288ac);
      func_0x000048d0();
    }
  }
  func_0x00007470();
  return;
}



// Function: FUN_00002930 at 00002930
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002930(void)

{
  bool bVar1;
  
  func_0x00006e50();
  if (_DAT_000288ac != 0) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00002b28();
      FUN_00002b38(2,0);
      func_0x00002b00(_DAT_000288ac);
      func_0x000048d0();
    }
  }
  func_0x00007470();
  return;
}



// Function: FUN_000029e6 at 000029e6
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000029e6(int param_1)

{
  short sVar1;
  short sVar3;
  undefined4 uVar2;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  
  func_0x00006e60(0x20000,(short)((uint)_DAT_000288b0 >> 0x10));
  sVar5 = 0;
  for (sVar4 = 0; sVar4 < _DAT_000283d8; sVar4 = sVar4 + 1) {
    iVar6 = *(short *)(&DAT_00027fda + sVar4 * 2) * 0x1e + _DAT_0002884c;
    if (*(char *)(iVar6 + 0xd26) == '\x01') {
      sVar5 = *(char *)(iVar6 + 0xd27) + sVar5;
    }
  }
  sVar4 = 0;
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar3 + -1, sVar3 != 0) {
    psVar7 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar3 = sVar1;
    if ((*_DAT_000288b0 == *psVar7) && (_DAT_000288b0[1] == psVar7[1])) {
      sVar4 = sVar4 + 1;
    }
  }
  sVar3 = FUN_00002ad0(100);
  if (sVar3 <= (short)(((sVar5 + *(char *)(_DAT_000288b0 + 4)) -
                       *(short *)(*(char *)(param_1 + 0x1a) * 2 + _DAT_0002884c + 0x1046)) * 5 +
                      sVar4 * 3 + 0x5a)) {
    uVar2 = FUN_00002ad0();
    return uVar2;
  }
  return 1;
}



// Function: FUN_00002ad0 at 00002ad0
// Size: 8 bytes

void FUN_00002ad0(void)

{
  return;
}



// Function: FUN_00002ad8 at 00002ad8
// Size: 79 bytes

/* WARNING: Removing unreachable block (ram,0x00002b0e) */
/* WARNING: Removing unreachable block (ram,0x00002b12) */
/* WARNING: Removing unreachable block (ram,0x00002b16) */
/* WARNING: Removing unreachable block (ram,0x00002b1a) */
/* WARNING: Removing unreachable block (ram,0x00002b1e) */
/* WARNING: Removing unreachable block (ram,0x00002b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ad8(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  int iVar5;
  undefined2 uVar6;
  
  for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x810); sVar3 = sVar3 + 1) {
    if (*(char *)(sVar3 * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      FUN_00002b28();
      return;
    }
  }
  sVar3 = 0;
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    iVar5 = _DAT_000288ac;
    if (_DAT_000288f4 != 0) {
      iVar5 = *(int *)(sVar4 * 4 + 0x288b4);
    }
    if (iVar5 != 0) {
      uVar6 = (undefined2)iVar5;
      if (param_1._0_2_ == -1) {
        if ((*(ushort *)(iVar5 + 0xc) & 2) == 0) {
          func_0x00004900(uVar6);
          *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 2;
          sVar3 = sVar3 + 1;
          if (*(char *)(iVar5 + 4) == '\x1c') {
            func_0x000074a8(uVar6);
          }
        }
      }
      else if (param_1._0_2_ == -1) {
        if ((*(ushort *)(iVar5 + 0xc) & 4) == 0) {
          func_0x00004900(uVar6);
          *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 4;
          sVar3 = sVar3 + 1;
          if (*(char *)(iVar5 + 4) == '\x1c') {
            func_0x000074a8(uVar6);
          }
        }
      }
      else if (param_1._0_2_ == -1) {
        if ((*(ushort *)(iVar5 + 0xc) & 8) == 0) {
          func_0x00004900(uVar6);
          *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 8;
          sVar3 = sVar3 + 1;
          if (*(char *)(iVar5 + 4) == '\x1c') {
            func_0x000074a8(uVar6);
          }
        }
      }
      else if ((param_1._0_2_ == -1) && ((*(ushort *)(iVar5 + 0xc) & 0x10) == 0)) {
        func_0x00004900(uVar6);
        *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 0x10;
        sVar3 = sVar3 + 1;
        if (*(char *)(iVar5 + 4) == '\x1c') {
          func_0x000074a8(uVar6);
        }
      }
      func_0x00007448(uVar6);
      if (_DAT_000288f4 == 0) break;
    }
  }
  if (sVar3 == 0) {
    FUN_00002ad8(0);
    func_0x000076d0(0x78f8,extraout_A0w);
  }
  else if (sVar3 == 1) {
    FUN_00002ad8(0);
    func_0x000076d0(0x78f8,extraout_A0w_00);
  }
  else {
    FUN_00002ad8(1,sVar3);
    func_0x000076d0(0x78f8,extraout_A0w_01);
  }
  if ((_DAT_00028952 == 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_00002ad8(2);
                    /* WARNING: Call to offcut address within same function */
    func_0x00002b68(0x78f8,extraout_A0w_02);
  }
  piVar1 = *(int **)(_DAT_000297f4 + 0x80);
  (**(code **)(*piVar1 + 0x118))();
  (**(code **)(*piVar1 + 0x20))(piVar1,0,0);
  return;
}



// Function: FUN_00002b28 at 00002b28
// Size: 17 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b28(void)

{
  int *piVar1;
  bool bVar2;
  short unaff_D3w;
  short sVar3;
  short sVar4;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  int iVar5;
  int unaff_A6;
  undefined2 uVar6;
  
  while (unaff_D3w = unaff_D3w + 1, unaff_D3w < *(short *)(_DAT_0002884c + 0x810)) {
    if (*(char *)(unaff_D3w * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      if (unaff_D5w < 0) {
        FUN_00002b28();
        return;
      }
      if (unaff_D6w < 0) {
        FUN_00002b28();
        return;
      }
      if (unaff_D7w < 0) {
        FUN_00002b28();
        return;
      }
      if (*(short *)(unaff_A6 + -2) < 0) {
        *(short *)(unaff_A6 + -2) = unaff_D3w;
      }
    }
  }
  sVar4 = 0;
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    iVar5 = _DAT_000288ac;
    if (_DAT_000288f4 != 0) {
      iVar5 = *(int *)(sVar3 * 4 + 0x288b4);
    }
    if (iVar5 != 0) {
      uVar6 = (undefined2)iVar5;
      if (unaff_D5w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(iVar5 + 0xc) & 2) == 0) {
          func_0x00004900(uVar6);
          *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 2;
          sVar4 = sVar4 + 1;
          if (*(char *)(iVar5 + 4) == '\x1c') {
            func_0x000074a8(uVar6);
          }
        }
      }
      else if (unaff_D6w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(iVar5 + 0xc) & 4) == 0) {
          func_0x00004900(uVar6);
          *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 4;
          sVar4 = sVar4 + 1;
          if (*(char *)(iVar5 + 4) == '\x1c') {
            func_0x000074a8(uVar6);
          }
        }
      }
      else if (unaff_D7w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(iVar5 + 0xc) & 8) == 0) {
          func_0x00004900(uVar6);
          *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 8;
          sVar4 = sVar4 + 1;
          if (*(char *)(iVar5 + 4) == '\x1c') {
            func_0x000074a8(uVar6);
          }
        }
      }
      else if ((*(short *)(unaff_A6 + 8) == *(short *)(unaff_A6 + -2)) &&
              ((*(ushort *)(iVar5 + 0xc) & 0x10) == 0)) {
        func_0x00004900(uVar6);
        *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) | 0x10;
        sVar4 = sVar4 + 1;
        if (*(char *)(iVar5 + 4) == '\x1c') {
          func_0x000074a8(uVar6);
        }
      }
      func_0x00007448(uVar6);
      if (_DAT_000288f4 == 0) break;
    }
  }
  if (sVar4 == 0) {
    FUN_00002ad8(0);
    func_0x000076d0(0x78f8,extraout_A0w);
  }
  else if (sVar4 == 1) {
    FUN_00002ad8(0);
    func_0x000076d0(0x78f8,extraout_A0w_00);
  }
  else {
    FUN_00002ad8(1,sVar4);
    func_0x000076d0(0x78f8,extraout_A0w_01);
  }
  if ((_DAT_00028952 == 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_00002ad8(2);
                    /* WARNING: Call to offcut address within same function */
    func_0x00002b68(0x78f8,extraout_A0w_02);
  }
  piVar1 = *(int **)(_DAT_000297f4 + 0x80);
  (**(code **)(*piVar1 + 0x118))();
  (**(code **)(*piVar1 + 0x20))(piVar1,0,0);
  return;
}



// Function: FUN_00002b38 at 00002b38
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b38(void)

{
  int *piVar1;
  bool bVar2;
  short sVar3;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  int iVar4;
  int unaff_A6;
  undefined2 uVar5;
  
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    iVar4 = _DAT_000288ac;
    if (_DAT_000288f4 != 0) {
      iVar4 = *(int *)(sVar3 * 4 + 0x288b4);
    }
    if (iVar4 != 0) {
      uVar5 = (undefined2)iVar4;
      if (unaff_D5w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(iVar4 + 0xc) & 2) == 0) {
          func_0x00004900(uVar5);
          *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 2;
          unaff_D4w = unaff_D4w + 1;
          if (*(char *)(iVar4 + 4) == '\x1c') {
            func_0x000074a8(uVar5);
          }
        }
      }
      else if (unaff_D6w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(iVar4 + 0xc) & 4) == 0) {
          func_0x00004900(uVar5);
          *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 4;
          unaff_D4w = unaff_D4w + 1;
          if (*(char *)(iVar4 + 4) == '\x1c') {
            func_0x000074a8(uVar5);
          }
        }
      }
      else if (unaff_D7w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(iVar4 + 0xc) & 8) == 0) {
          func_0x00004900(uVar5);
          *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 8;
          unaff_D4w = unaff_D4w + 1;
          if (*(char *)(iVar4 + 4) == '\x1c') {
            func_0x000074a8(uVar5);
          }
        }
      }
      else if ((*(short *)(unaff_A6 + 8) == *(short *)(unaff_A6 + -2)) &&
              ((*(ushort *)(iVar4 + 0xc) & 0x10) == 0)) {
        func_0x00004900(uVar5);
        *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 0x10;
        unaff_D4w = unaff_D4w + 1;
        if (*(char *)(iVar4 + 4) == '\x1c') {
          func_0x000074a8(uVar5);
        }
      }
      func_0x00007448(uVar5);
      if (_DAT_000288f4 == 0) break;
    }
  }
  if (unaff_D4w == 0) {
    FUN_00002ad8(0);
    func_0x000076d0(0x78f8,extraout_A0w);
  }
  else if (unaff_D4w == 1) {
    FUN_00002ad8(0);
    func_0x000076d0(0x78f8,extraout_A0w_00);
  }
  else {
    FUN_00002ad8(1,unaff_D4w);
    func_0x000076d0(0x78f8,extraout_A0w_01);
  }
  if ((_DAT_00028952 == 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_00002ad8(2);
                    /* WARNING: Call to offcut address within same function */
    func_0x00002b68(0x78f8,extraout_A0w_02);
  }
  piVar1 = *(int **)(_DAT_000297f4 + 0x80);
  (**(code **)(*piVar1 + 0x118))();
  (**(code **)(*piVar1 + 0x20))(piVar1,0,0);
  return;
}



// Function: FUN_00002b50 at 00002b50
// Size: 538 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b50(void)

{
  int *piVar1;
  bool bVar2;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  int unaff_A2;
  int unaff_A6;
  undefined2 uVar3;
  
  do {
    if (unaff_A2 != 0) {
      uVar3 = (undefined2)unaff_A2;
      if (unaff_D5w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(unaff_A2 + 0xc) & 2) == 0) {
          func_0x00004900(uVar3);
          *(ushort *)(unaff_A2 + 0xc) = *(ushort *)(unaff_A2 + 0xc) | 2;
          unaff_D4w = unaff_D4w + 1;
          if (*(char *)(unaff_A2 + 4) == '\x1c') {
            func_0x000074a8(uVar3);
          }
        }
      }
      else if (unaff_D6w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(unaff_A2 + 0xc) & 4) == 0) {
          func_0x00004900(uVar3);
          *(ushort *)(unaff_A2 + 0xc) = *(ushort *)(unaff_A2 + 0xc) | 4;
          unaff_D4w = unaff_D4w + 1;
          if (*(char *)(unaff_A2 + 4) == '\x1c') {
            func_0x000074a8(uVar3);
          }
        }
      }
      else if (unaff_D7w == *(short *)(unaff_A6 + 8)) {
        if ((*(ushort *)(unaff_A2 + 0xc) & 8) == 0) {
          func_0x00004900(uVar3);
          *(ushort *)(unaff_A2 + 0xc) = *(ushort *)(unaff_A2 + 0xc) | 8;
          unaff_D4w = unaff_D4w + 1;
          if (*(char *)(unaff_A2 + 4) == '\x1c') {
            func_0x000074a8(uVar3);
          }
        }
      }
      else if ((*(short *)(unaff_A6 + 8) == *(short *)(unaff_A6 + -2)) &&
              ((*(ushort *)(unaff_A2 + 0xc) & 0x10) == 0)) {
        func_0x00004900(uVar3);
        *(ushort *)(unaff_A2 + 0xc) = *(ushort *)(unaff_A2 + 0xc) | 0x10;
        unaff_D4w = unaff_D4w + 1;
        if (*(char *)(unaff_A2 + 4) == '\x1c') {
          func_0x000074a8(uVar3);
        }
      }
      func_0x00007448(uVar3);
      if (_DAT_000288f4 == 0) {
LAB_00002c82:
        if (unaff_D4w == 0) {
          FUN_00002ad8(0);
          func_0x000076d0(0x78f8,extraout_A0w);
        }
        else if (unaff_D4w == 1) {
          FUN_00002ad8(0);
          func_0x000076d0(0x78f8,extraout_A0w_00);
        }
        else {
          FUN_00002ad8(1,unaff_D4w);
          func_0x000076d0(0x78f8,extraout_A0w_01);
        }
        if ((_DAT_00028952 == 0) &&
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          FUN_00002ad8(2);
                    /* WARNING: Call to offcut address within same function */
          func_0x00002b68(0x78f8,extraout_A0w_02);
        }
        piVar1 = *(int **)(_DAT_000297f4 + 0x80);
        (**(code **)(*piVar1 + 0x118))();
        (**(code **)(*piVar1 + 0x20))(piVar1,0,0);
        return;
      }
    }
    unaff_D3w = unaff_D3w + 1;
    if (7 < unaff_D3w) goto LAB_00002c82;
    unaff_A2 = _DAT_000288ac;
    if (_DAT_000288f4 != 0) {
      unaff_A2 = *(int *)(unaff_D3w * 4 + 0x288b4);
    }
  } while( true );
}



// Function: FUN_00002d6c at 00002d6c
// Size: 106 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d6c(void)

{
  int *extraout_A0;
  
  if (_DAT_00027e86 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    _DAT_00027e86 = extraout_A0;
    FUN_00001bf0(extraout_A0);
  }
  (**(code **)(*_DAT_00027e86 + 0x194))();
  (**(code **)(*_DAT_00027e86 + 0x268))();
  _DAT_00015502 = 1;
  return;
}



// Function: FUN_00002dd6 at 00002dd6
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002dd6(undefined4 param_1)

{
  undefined4 extraout_A0;
  undefined1 auStack_104 [256];
  
  func_0x00007320(auStack_104,param_1);
  func_0x00006e38(_DAT_00027e86,_DAT_00015502 + 0x6c696e30,extraout_A0);
  _DAT_00015502 = _DAT_00015502 + 1;
  return;
}



// Function: FUN_00002e16 at 00002e16
// Size: 614 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00002e16(undefined4 param_1)

{
  int iVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int extraout_A0_02;
  undefined2 extraout_A0w;
  int extraout_A0_03;
  int *piVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined4 local_72;
  undefined4 local_6e;
  undefined1 auStack_6a [16];
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x74);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x70))();
  }
  uVar4 = 0x6f;
  (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x65);
  if (extraout_A0_00 != (int *)0x0) {
    uVar3 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    (**(code **)(*extraout_A0_00 + 0x334))();
    (**(code **)(*extraout_A0_00 + 0x70))((char)extraout_A0_00,uVar3,uVar4);
  }
  piVar2 = extraout_A0_00;
  if (param_1._0_2_ != 0) {
    uVar4 = 0x61;
    (**(code **)(*_DAT_00027e86 + 0x188))((short)_DAT_00027e86,0x65);
    piVar2 = extraout_A0_01;
    if (extraout_A0_01 != (int *)0x0) {
      uVar3 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      (**(code **)(*extraout_A0_01 + 0x334))();
      (**(code **)(*extraout_A0_01 + 0x70))((char)extraout_A0_01,uVar3,uVar4);
    }
  }
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    uVar6 = (undefined1)((uint)auStack_6a >> 0x10);
    uVar5 = (undefined2)((uint)piVar2 >> 0x10);
    (**(code **)(*piVar2 + 0x310))((short)piVar2,(char)auStack_6a);
    local_72 = 0xfffffffc;
    local_6e = 0xfffffffc;
    uVar4 = (undefined1)((uint)&local_72 >> 0x10);
    uVar3 = (undefined2)((uint)auStack_6a >> 0x10);
    func_0x00003948((char)auStack_6a,(char)&local_72);
    (**(code **)(*piVar2 + 0x1ac))(piVar2,(short)auStack_6a,uVar3,uVar4,uVar5,uVar6);
    local_5a = 4;
    local_56 = 4;
    local_52 = 4;
    local_4e = 4;
    (**(code **)(*piVar2 + 0x3c4))(piVar2,(short)&local_5a);
    func_0x000073b0(10);
    uVar3 = 0;
    if (extraout_A0_02 != 0) {
      func_0x00006f28((char)extraout_A0_02);
      uVar3 = extraout_A0w;
    }
    uVar4 = 0x84;
    func_0x00005570(uVar3,0x6c);
    (**(code **)(*piVar2 + 0x1fc))((short)piVar2,uVar3,uVar4);
    (**(code **)(*_DAT_00027e86 + 0x400))();
    iVar1 = extraout_A0_03;
    if (extraout_A0_03 != 0) {
      *(undefined4 *)(extraout_A0_03 + 0x20) = *(undefined4 *)((int)piVar2 + 0x16);
    }
  }
  if (_DAT_00027e86 != (int *)0x0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((char)auStack_4a);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*_DAT_00027e86 + 0x40c))();
      (**(code **)(*_DAT_00027e86 + 0x3a0))();
      _DAT_00027e86 = (int *)0x0;
      if (iVar1 == 0x646f6e65) {
        iVar1 = FUN_0000318a();
      }
      else {
        iVar1 = FUN_0000307c();
      }
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_00027e86 != (int *)0x0) {
        (**(code **)(*_DAT_00027e86 + 0x3a0))();
      }
      _DAT_00027e86 = (int *)0x0;
      iVar1 = func_0x00001c10((char)((uint)local_14 >> 0x10));
    }
  }
  return iVar1;
}



// Function: FUN_0000307c at 0000307c
// Size: 270 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000307c(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  undefined2 *extraout_A0;
  undefined1 local_6 [2];
  
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  do {
    sVar1 = sVar3 + -1;
    if (sVar3 == 0) break;
    sVar3 = sVar1;
  } while ((undefined2 *)(sVar1 * 0x16 + _DAT_00028854) != _DAT_000288b0);
  func_0x00006e60(*_DAT_000288b0,0);
  for (sVar3 = 0; sVar3 < _DAT_000283d8; sVar3 = sVar3 + 1) {
    *(short *)(*(short *)(&DAT_00027fda + sVar3 * 2) * 0x1e + _DAT_0002884c + 0xd2a) = sVar1;
    *(undefined1 *)(*(short *)(&DAT_00027fda + sVar3 * 2) * 0x1e + _DAT_0002884c + 0xd28) = 3;
  }
  FUN_00002b28(_DAT_000288b0[1],(short)local_6);
  _DAT_000288ac = extraout_A0;
  if (_DAT_000288b0 != (undefined2 *)0x0) {
    _DAT_000288ac = _DAT_000288b0;
  }
  FUN_00002b38(2,0);
  func_0x00002b00((short)_DAT_000288ac);
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) == 0) {
    iVar2 = 0;
  }
  else {
    sVar3 = func_0x00002878(0);
    iVar2 = (int)sVar3;
  }
  return iVar2;
}



// Function: FUN_0000318a at 0000318a
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000318a(void)

{
  int extraout_A0;
  short local_6;
  
  FUN_00002b28(_DAT_00027e8c,(short)&local_6);
  _DAT_000288ac = extraout_A0;
  if (_DAT_000288b0 != 0) {
    _DAT_000288ac = _DAT_000288b0;
  }
  if (0 < local_6) {
    FUN_00002b38(2,0);
    func_0x00002b00(_DAT_000288ac);
  }
  return;
}



// Function: FUN_000032f8 at 000032f8
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000032f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



