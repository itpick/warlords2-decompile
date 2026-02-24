// Warlords II - Decompiled 68k Code
// Segment: CODE_104
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000164 at 00000164
// Size: 622 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000164(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short local_10 [3];
  short local_a;
  short local_8 [2];
  
  if (((_DAT_000288ac[6] & 0x1000U) == 0) &&
     (((*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\x03' ||
       (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\x02')) && (_DAT_000288fa != 2)))) {
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      if (((*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) &&
          (*(char *)(_DAT_00028864 + (short)*(char *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 4) * 6)
           == '\0')) &&
         (sVar1 = func_0x00006e58(*(undefined4 *)(&DAT_000288b4 + sVar2 * 4)), sVar1 == 0)) {
        *(ushort *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 0xc) =
             *(ushort *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 0xc) | 0x1000;
        *(undefined1 *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 7) = 0;
      }
    }
    _DAT_000288f6 = 0;
  }
  if (_DAT_000288f4 == 0) {
    local_10[0] = *(char *)((int)_DAT_000288ac + 7) - _DAT_000287c8;
    local_10[1] = 0;
    if (local_10[0] < 0) {
      psVar3 = local_10 + 1;
    }
    else {
      psVar3 = local_10;
    }
    *(char *)((int)_DAT_000288ac + 7) = (char)*psVar3;
    *_DAT_000288ac = param_1._0_2_;
    _DAT_000288ac[1] = param_1._2_2_;
    _DAT_000288ac[9] = -1;
    _DAT_000288ac[10] = -1;
  }
  else {
    local_8[0] = _DAT_000288f6 - _DAT_000287c8;
    local_8[1] = 0;
    if ((short)(_DAT_000288f6 - _DAT_000287c8) < 0) {
      psVar3 = local_8 + 1;
    }
    else {
      psVar3 = local_8;
    }
    _DAT_000288f6 = *psVar3;
    sVar2 = 8;
    while (sVar1 = sVar2 + -1, sVar2 != 0) {
      sVar2 = sVar1;
      if (*(int *)(&DAT_000288b4 + sVar1 * 4) != 0) {
        **(short **)(&DAT_000288b4 + sVar1 * 4) = param_1._0_2_;
        *(short *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 2) = param_1._2_2_;
        *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x12) = 0xffff;
        *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 0x14) = 0xffff;
        local_10[2] = *(char *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 7) - _DAT_000287c8;
        local_a = 0;
        if (local_10[2] < 0) {
          psVar3 = &local_a;
        }
        else {
          psVar3 = local_10 + 2;
        }
        *(char *)(*(int *)(&DAT_000288b4 + sVar1 * 4) + 7) = (char)*psVar3;
      }
    }
  }
  if ((param_2._0_2_ != -1) &&
     (((param_2._0_2_ <= *(short *)(_DAT_0002884c + 0x178) ||
       (*(short *)(_DAT_0002884c + 0x17c) <= param_2._0_2_)) ||
      ((param_2._2_2_ <= *(short *)(_DAT_0002884c + 0x176) ||
       (*(short *)(_DAT_0002884c + 0x17a) <= param_2._2_2_)))))) {
    func_0x00003af8(param_2);
  }
  return;
}



// Function: FUN_000003d2 at 000003d2
// Size: 604 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000003d2(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar5;
  short sVar6;
  undefined4 uVar4;
  short sVar7;
  short sVar8;
  short sVar9;
  short *psVar10;
  short local_14;
  short local_12 [3];
  short local_c;
  ushort local_a;
  char local_8;
  char local_7;
  short local_6;
  
  local_a = 1;
  sVar8 = 0;
  sVar7 = 0;
  DAT_000287c6 = '\0';
  _DAT_0002859a = 0;
  local_7 = '\0';
  iVar3 = 0;
  if ((DAT_0002868d == '\0') || (iVar3 = (int)DAT_0002868c, iVar3 == 0)) {
    local_7 = '\x01';
    _DAT_0002859a = 1;
  }
  while (uVar5 = (undefined2)((uint)iVar3 >> 0x10), local_7 == '\0') {
    local_8 = '\0';
    local_14 = 0;
    local_12[2] = (short)(char)(&DAT_0002868e)[sVar8];
    local_c = 1;
    if ((char)(&DAT_0002868e)[sVar8] < 1) {
      psVar10 = &local_c;
    }
    else {
      psVar10 = local_12 + 2;
    }
    sVar1 = *psVar10;
    local_12[0] = (short)(char)(&DAT_000286ae)[sVar7];
    local_12[1] = 1;
    if ((char)(&DAT_000286ae)[sVar7] < 1) {
      psVar10 = local_12 + 1;
    }
    else {
      psVar10 = local_12;
    }
    local_6 = *psVar10;
    iVar3 = CONCAT22(uVar5,local_6);
    while (local_8 == '\0') {
      if (*(short *)(_DAT_0002884c + 0x126) == 0) {
        uVar5 = 0x14;
      }
      else {
        uVar5 = 0x18;
      }
      sVar6 = func_0x00002ad0(uVar5);
      uVar4 = func_0x00002ad0();
      sVar9 = (short)uVar4;
      iVar3 = CONCAT22((short)((uint)uVar4 >> 0x10),local_14);
      sVar2 = local_14 + 1;
      if (10000 < local_14) {
        sVar6 = 0;
        sVar9 = 100;
      }
      local_14 = sVar2;
      if (((sVar1 < sVar6) || (local_6 < sVar9)) && ((sVar6 <= sVar1 || (sVar9 <= local_6)))) {
        if (((sVar1 < sVar6) || (sVar9 <= local_6)) ||
           ((*(short *)(_DAT_0002884c + 0x12e) != 0 &&
            ((((&DAT_000286d6)[sVar7] == '\x1c' &&
              (*(short *)(DAT_0002877f * 2 + _DAT_0002884c + 0xd0) == 0)) &&
             (DAT_0002877e == '\x0f')))))) {
          if (((sVar1 < sVar6) && (sVar9 <= local_6)) &&
             ((&DAT_00028706)[sVar8] = (&DAT_00028706)[sVar8] + -1,
             (char)(&DAT_00028706)[sVar8] < '\0')) {
            local_8 = '\x01';
            (&DAT_0002872e)[sVar8] = 0;
            sVar8 = sVar8 + 1;
            (&DAT_0002879e)[(short)DAT_000287c6] = 0;
            DAT_000287c6 = DAT_000287c6 + '\x01';
          }
        }
        else {
          (&DAT_00028726)[sVar7] = (&DAT_00028726)[sVar7] + -1;
          if ((char)(&DAT_00028726)[sVar7] < '\0') {
            local_8 = '\x01';
            (&DAT_0002874e)[sVar7] = 0;
            sVar7 = sVar7 + 1;
            (&DAT_0002879e)[(short)DAT_000287c6] = 1;
            DAT_000287c6 = DAT_000287c6 + '\x01';
          }
        }
        if (((int)sVar8 == (int)DAT_0002868c) || (iVar3 = (int)DAT_0002868d, sVar7 == iVar3)) {
          local_7 = '\x01';
          iVar3 = 0;
          local_a = (ushort)((int)sVar8 == (int)DAT_0002868c);
        }
      }
    }
  }
  return CONCAT22(uVar5,local_a);
}



// Function: FUN_0000062e at 0000062e
// Size: 728 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000062e(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 extraout_A0w;
  int *extraout_A0;
  undefined1 auStack_2a [8];
  short local_22;
  short local_20;
  short local_1e;
  undefined1 auStack_1c [8];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar3 = 0;
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    if ((*(short *)(sVar2 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(sVar2 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      sVar3 = sVar3 + 1;
    }
  }
  if ((((sVar3 < 2) || (*(short *)(_DAT_0002884c + 0x124) == 0)) ||
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) &&
     (((*(short *)(_DAT_0002884c + 0x124) == 0 || ((_DAT_000276e4 == 0 && (_DAT_0002884a == 0)))) ||
      ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x80) != 0)))) {
    func_0x00003ac0((char)*(undefined2 *)(_DAT_0002884c + 0x180));
    func_0x00003ad8();
    if (param_2._0_2_ != 0) {
      local_c = _DAT_00015b3a;
      local_8 = _DAT_00015b3e;
      if (param_1._0_2_ == *(short *)(_DAT_0002884c + 0x178)) {
        local_c._0_2_ = (short)((uint)_DAT_00015b3a >> 0x10);
        local_c._2_2_ = (short)_DAT_00015b3a;
        local_c = CONCAT22(local_c._0_2_ + 0x28,local_c._2_2_);
        local_8._0_2_ = (short)((uint)_DAT_00015b3e >> 0x10);
        local_8._2_2_ = (short)_DAT_00015b3e;
        local_8 = CONCAT22(local_8._0_2_ + -0x30,local_8._2_2_);
      }
      if (param_1._0_2_ == *(short *)(_DAT_0002884c + 0x17c)) {
        local_8 = CONCAT22(local_8._0_2_ + -0x30,local_8._2_2_);
      }
      if (param_1._2_2_ == *(short *)(_DAT_0002884c + 0x176)) {
        local_c = CONCAT22(local_c._0_2_,local_c._2_2_ + 0x28);
        local_8 = CONCAT22(local_8._0_2_,local_8._2_2_ + -0x28);
      }
      if (param_1._2_2_ == *(short *)(_DAT_0002884c + 0x17a)) {
        local_8 = CONCAT22(local_8._0_2_,local_8._2_2_ + -0x28);
      }
      if (param_1._2_2_ == *(short *)(_DAT_0002884c + 0x176)) {
        sVar3 = 0;
      }
      else {
        sVar3 = 0x28;
      }
      FUN_00002380(0x142ac,0,0x780078,0x40b4,
                   (param_1._2_2_ - *(short *)(_DAT_0002884c + 0x176)) * 0x28 - sVar3,0x24);
    }
    func_0x000071f0((char)auStack_1c);
    func_0x00002ae0(0);
    FUN_000029d0((short)auStack_1c,extraout_A0w);
    FUN_00002a48(auStack_2a,0,CONCAT22(_DAT_000150f8,_DAT_000150f6));
    (**(code **)(*_DAT_00027fb4 + 0x188))(_DAT_00027fb4,0x6d617020);
    if (((DAT_000150fa != '\0') && (extraout_A0 != (int *)0x0)) &&
       (cVar1 = (**(code **)(*extraout_A0 + 0x1d8))(), cVar1 != '\0')) {
      local_22 = *(short *)(_DAT_0002884c + 0x176) * 0x28;
      local_1e = *(short *)(_DAT_0002884c + 0x178) * 0x28;
      local_14 = 0;
      local_12 = 0;
      local_10 = _DAT_000150f6;
      local_e = _DAT_000150f8;
      local_20 = local_22;
      FUN_00002378(0x140b4,(short)&local_14,(short)&local_20,0);
    }
    if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
       (param_2._0_2_ != 0)) {
      FUN_000029c0((short)auStack_1c);
    }
    if (param_2._0_2_ != 0) {
      func_0x000049f0();
    }
    FUN_000029b8((short)auStack_1c);
  }
  return;
}



// Function: FUN_00000906 at 00000906
// Size: 380 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000906(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *extraout_A0;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined1 auStack_34e [256];
  undefined1 auStack_24e [256];
  undefined1 auStack_14e [256];
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(short *)(_DAT_0002884c + 300) != 0) {
    local_4e = (int *)0x0;
    (**(code **)(*_DAT_000257ee + 0x68))();
    local_4e = extraout_A0;
    FUN_00001bf0(extraout_A0);
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((char)auStack_4a);
    if (iVar1 == 0) {
      uVar2 = FUN_00000a82(param_1);
      func_0x00002ad8(0xffff);
      func_0x00007320((short)auStack_14e,extraout_A0w);
      func_0x00006e38(local_4e,0x7231,extraout_A0w_00);
      func_0x00002ad8(0xffff);
      func_0x00007320(auStack_24e,extraout_A0w_01);
      func_0x00006e38(local_4e,0x73747232,extraout_A0w_02);
      func_0x00002ad8(uVar2);
      func_0x00007320(auStack_34e,extraout_A0w_03);
      func_0x00006e38(local_4e,0x73747233,extraout_A0w_04);
      (**(code **)(*local_4e + 0x40c))();
      (**(code **)(*local_4e + 0x3a0))();
      _DAT_00025f52 = local_10;
    }
    else {
      if (local_4e != (int *)0x0) {
        (**(code **)(*local_4e + 0x3a0))();
      }
      local_4e = (int *)0x0;
      func_0x00001c10();
    }
  }
  return;
}



// Function: FUN_00000a82 at 00000a82
// Size: 66 bytes

short FUN_00000a82(undefined2 param_1)

{
  short sVar1;
  short sVar2;
  int extraout_A0;
  
  sVar1 = 0;
  for (sVar2 = 0; sVar2 < 0x13; sVar2 = sVar2 + 1) {
    func_0x00002c28(param_1);
    if (0 < *(short *)(extraout_A0 + 6)) {
      sVar1 = sVar1 + 1;
    }
  }
  return sVar1 / 2;
}



// Function: FUN_00000c5e at 00000c5e
// Size: 296 bytes

void FUN_00000c5e(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  
  sVar3 = 0;
  sVar4 = 0;
  sVar1 = FUN_0000154a();
  bVar5 = sVar1 == 0;
  for (sVar1 = 0; (int)sVar1 < (int)DAT_000287c6; sVar1 = sVar1 + 1) {
    if ((&DAT_0002879e)[sVar1] == '\x01') {
      FUN_00000ac4(*(undefined2 *)(&DAT_000284f8 + (sVar3 + 0x20) * 2));
      sVar3 = sVar3 + 1;
      if (bVar5) {
        sVar2 = FUN_0000154a();
        bVar5 = sVar2 == 0;
      }
    }
    else {
      FUN_00000ac4(*(undefined2 *)(&DAT_000284f8 + sVar4 * 2));
      sVar4 = sVar4 + 1;
      if (bVar5) {
        sVar2 = FUN_0000154a();
        bVar5 = sVar2 == 0;
      }
    }
    if (bVar5) {
      sVar2 = FUN_0000154a();
      bVar5 = sVar2 == 0;
    }
    else {
      FUN_0000154a();
    }
  }
  return;
}



// Function: FUN_00000d86 at 00000d86
// Size: 1696 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d86(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  undefined2 *puVar10;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined1 uVar11;
  undefined2 uVar12;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00001426();
  cVar3 = DAT_0002868c;
  if (param_1._0_2_ != 0) {
    cVar3 = *(char *)(_DAT_0002879a + 0x14);
  }
  uVar5 = (ushort)cVar3;
  uVar9 = (ushort)DAT_0002868d;
  sVar8 = 0;
  if (param_1._0_2_ != 0) {
    DAT_0002877e = 8;
  }
  _DAT_00028598 = uVar5 + uVar9;
  for (sVar6 = 0; sVar6 < 0x28; sVar6 = sVar6 + 1) {
    *(undefined2 *)(&DAT_000284f8 + sVar6 * 2) = 0xffff;
    *(undefined2 *)(&DAT_00028548 + sVar6 * 2) = 0xffff;
  }
  while (uVar5 != 0) {
    if ((short)uVar5 < 8) {
      sVar6 = 4 - (short)(((short)uVar5 + 1) / 2);
      uVar7 = uVar5;
      if (uVar5 != 0) {
        while (uVar2 = uVar7 - 1, uVar7 != 0) {
          iVar4 = ((int)(short)uVar2 + (int)sVar8) * 2;
          if ((uVar5 & 1) == 0) {
            puVar10 = (undefined2 *)(((int)(short)uVar2 + (int)sVar6) * 2 + 0x15b20);
          }
          else {
            puVar10 = (undefined2 *)(((int)(short)uVar2 + (int)sVar6) * 2 + 0x15b12);
          }
          *(undefined2 *)(&DAT_000284f8 + iVar4) = *puVar10;
          *(undefined2 *)(&DAT_00028548 + iVar4) = *(undefined2 *)(&DAT_00015b30 + (sVar8 / 8) * 2);
          uVar7 = uVar2;
        }
      }
      sVar8 = uVar5 + sVar8;
      uVar5 = 0;
    }
    else {
      sVar6 = 8;
      while (sVar1 = sVar6 + -1, sVar6 != 0) {
        iVar4 = ((int)sVar1 + (int)sVar8) * 2;
        *(undefined2 *)(&DAT_000284f8 + iVar4) = *(undefined2 *)(sVar1 * 2 + 0x15b20);
        *(undefined2 *)(&DAT_00028548 + iVar4) = *(undefined2 *)(&DAT_00015b30 + (sVar8 / 8) * 2);
        sVar6 = sVar1;
      }
      sVar8 = sVar8 + 8;
      uVar5 = uVar5 - 8;
    }
  }
  sVar8 = 4 - (short)(((short)uVar9 + 1) / 2);
  uVar5 = uVar9;
  if (uVar9 != 0) {
    while (uVar7 = uVar5 - 1, uVar5 != 0) {
      iVar4 = ((short)uVar7 + 0x20) * 2;
      if ((uVar9 & 1) == 0) {
        puVar10 = (undefined2 *)(((int)(short)uVar7 + (int)sVar8) * 2 + 0x15b20);
      }
      else {
        puVar10 = (undefined2 *)(((int)(short)uVar7 + (int)sVar8) * 2 + 0x15b12);
      }
      *(undefined2 *)(&DAT_000284f8 + iVar4) = *puVar10;
      *(undefined2 *)(&DAT_00028548 + iVar4) = _DAT_00015b38;
      uVar5 = uVar7;
    }
  }
  if (_DAT_000284ee == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x6c))((short)_DAT_000257ee,0,0);
    _DAT_000284ee = extraout_A0;
    FUN_00001bf0(extraout_A0);
  }
  if (_DAT_000284f2 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x6c))((short)_DAT_000257ee,0,0);
    _DAT_000284f2 = extraout_A0_00;
    FUN_00001bf0(extraout_A0_00);
  }
  for (sVar8 = 0; sVar8 < 0x28; sVar8 = sVar8 + 1) {
    if (*(short *)(&DAT_000284f8 + sVar8 * 2) != -1) {
      if (sVar8 < 0x20) {
        if ((&DAT_0002875e)[sVar8] != '\0') {
          (**(code **)(*_DAT_000284ee + 0x48))();
          uVar12 = (undefined2)((uint)extraout_A0_03 >> 0x10);
          uVar11 = (undefined1)((uint)_DAT_000284ea >> 0x10);
          (**(code **)(*_DAT_000284ea + 0x174))((short)_DAT_000284ea,(short)extraout_A0_03);
          *(int *)((int)extraout_A0_03 + 0x16) = sVar8 + 0x626f6174;
          local_34 = *(short *)(&DAT_00028548 + sVar8 * 2) + 0x20;
          local_30 = *(short *)(&DAT_000284f8 + sVar8 * 2) + 0x20;
          local_3c = *(short *)(&DAT_00028548 + sVar8 * 2) + 0xe;
          local_38 = (int)*(short *)(&DAT_000284f8 + sVar8 * 2);
          (**(code **)(*extraout_A0_03 + 0x1ac))(extraout_A0_03,(short)&local_3c,uVar11,uVar12);
          local_44 = 0x19;
          local_42 = 0x29;
          local_40 = 0x2b;
          local_3e = 0x49;
          func_0x00003b70(extraout_A0_03);
        }
        (**(code **)(*_DAT_000284f2 + 0x48))();
        uVar12 = (undefined2)((uint)extraout_A0_04 >> 0x10);
        uVar11 = (undefined1)((uint)_DAT_000284ea >> 0x10);
        (**(code **)(*_DAT_000284ea + 0x174))((short)_DAT_000284ea,(short)extraout_A0_04);
        *(int *)((int)extraout_A0_04 + 0x16) = sVar8 + 0x61726d79;
        local_4c = *(short *)(&DAT_00028548 + sVar8 * 2) + 0x24;
        local_48 = *(short *)(&DAT_000284f8 + sVar8 * 2) + 0x20;
        local_54 = *(short *)(&DAT_00028548 + sVar8 * 2) + 4;
        local_50 = (int)*(short *)(&DAT_000284f8 + sVar8 * 2);
        (**(code **)(*extraout_A0_04 + 0x1ac))(extraout_A0_04,(short)&local_54,uVar11,uVar12);
        uVar11 = 0xcc;
        func_0x00004768((short)extraout_A0_04);
        func_0x00004778(extraout_A0_04,0,uVar11);
      }
      else {
        if ((&DAT_00028736)[sVar8] != '\0') {
          (**(code **)(*_DAT_000284ee + 0x48))();
          uVar12 = (undefined2)((uint)extraout_A0_01 >> 0x10);
          uVar11 = (undefined1)((uint)_DAT_000284ea >> 0x10);
          (**(code **)(*_DAT_000284ea + 0x174))((short)_DAT_000284ea,(short)extraout_A0_01);
          *(int *)((int)extraout_A0_01 + 0x16) = sVar8 + 0x626f6174;
          local_c = *(short *)(&DAT_00028548 + sVar8 * 2) + 0x20;
          local_8 = *(short *)(&DAT_000284f8 + sVar8 * 2) + 0x20;
          local_14 = *(short *)(&DAT_00028548 + sVar8 * 2) + 0xe;
          local_10 = (int)*(short *)(&DAT_000284f8 + sVar8 * 2);
          (**(code **)(*extraout_A0_01 + 0x1ac))(extraout_A0_01,(short)&local_14,uVar11,uVar12);
          local_1c = 0x19;
          local_1a = 0x29;
          local_18 = 0x2b;
          local_16 = 0x49;
          func_0x00003b70(extraout_A0_01);
        }
        (**(code **)(*_DAT_000284f2 + 0x48))();
        uVar12 = (undefined2)((uint)extraout_A0_02 >> 0x10);
        uVar11 = (undefined1)((uint)_DAT_000284ea >> 0x10);
        (**(code **)(*_DAT_000284ea + 0x174))((short)_DAT_000284ea,(short)extraout_A0_02);
        *(int *)((int)extraout_A0_02 + 0x16) = sVar8 + 0x61726d79;
        local_24 = *(short *)(&DAT_00028548 + sVar8 * 2) + 0x24;
        local_20 = *(short *)(&DAT_000284f8 + sVar8 * 2) + 0x20;
        local_2c = *(short *)(&DAT_00028548 + sVar8 * 2) + 4;
        local_28 = (int)*(short *)(&DAT_000284f8 + sVar8 * 2);
        (**(code **)(*extraout_A0_02 + 0x1ac))(extraout_A0_02,(short)&local_2c,uVar11,uVar12);
        uVar11 = 0xf0;
        func_0x00004768((short)extraout_A0_02);
        func_0x00004778(extraout_A0_02,0,uVar11);
      }
    }
  }
  (**(code **)(*_DAT_000284ea + 0x194))();
  (**(code **)(*_DAT_000284ea + 0x26c))();
  (**(code **)(*_DAT_000284ea + 0x268))();
  return;
}



// Function: FUN_00001426 at 00001426
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00001426(void)

{
  short sVar2;
  short sVar3;
  int *piVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  
  if (_DAT_000284ea == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    _DAT_000284ea = extraout_A0;
    FUN_00001bf0(extraout_A0);
  }
  _DAT_000284f6 = 0;
  if (DAT_0002877f == '\x0f') {
    sVar2 = 8;
  }
  else {
    sVar2 = (short)DAT_0002877f;
  }
  if (DAT_0002877e == '\x0f') {
    sVar3 = 8;
  }
  else {
    sVar3 = (short)DAT_0002877e;
  }
  (**(code **)(*_DAT_000284ea + 0x188))((short)_DAT_000284ea,0x73686564);
  if (extraout_A0_00 != (int *)0x0) {
    if (sVar3 != *(short *)(extraout_A0_00 + 0x1f)) {
      *(short *)(extraout_A0_00 + 0x1f) = sVar3;
      (**(code **)(*extraout_A0_00 + 0x26c))();
    }
    if (*(short *)((int)extraout_A0_00 + 0x7e) != 5) {
      *(undefined2 *)((int)extraout_A0_00 + 0x7e) = 5;
      (**(code **)(*extraout_A0_00 + 0x248))();
    }
  }
  (**(code **)(*_DAT_000284ea + 0x188))((short)_DAT_000284ea,0x73686561);
  piVar1 = extraout_A0_01;
  if (extraout_A0_01 != (int *)0x0) {
    if (sVar2 != *(short *)(extraout_A0_01 + 0x1f)) {
      *(short *)(extraout_A0_01 + 0x1f) = sVar2;
      piVar1 = (int *)(**(code **)(*extraout_A0_01 + 0x26c))();
    }
    if (*(short *)((int)extraout_A0_01 + 0x7e) != 5) {
      *(undefined2 *)((int)extraout_A0_01 + 0x7e) = 5;
      piVar1 = (int *)(**(code **)(*extraout_A0_01 + 0x248))();
    }
  }
  return piVar1;
}



// Function: FUN_0000154a at 0000154a
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000154a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001592 at 00001592
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001592(undefined4 param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x20) == 0) {
    switch(*(undefined1 *)
            ((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
             _DAT_0002884c + 0x711)) {
    case 4:
      uVar1 = 2;
      break;
    case 5:
    case 6:
      uVar1 = 3;
      break;
    default:
      uVar1 = 1;
      break;
    case 10:
    case 0xb:
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_0000161a at 0000161a
// Size: 1492 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000161a(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar4;
  short sVar5;
  int iVar3;
  short sVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  short *psVar10;
  int iVar11;
  char acStackY_806b [32];
  char acStackY_804b [32521];
  undefined2 uStack_100;
  undefined2 uStack_fc;
  short asStack_f8 [3];
  short sStack_f2;
  short asStack_f0 [3];
  short sStack_ea;
  short sStack_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short sStack_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short asStack_cc [3];
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  short asStack_b4 [2];
  int local_b0 [8];
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short sStack_76;
  short sStack_74;
  short local_72;
  short local_70;
  short local_6e;
  undefined2 uStack_6c;
  char local_6a [31];
  char acStack_4b [41];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_10;
  short sStack_e;
  
  local_78 = 0;
  local_72 = 0;
  local_6e = 0;
  local_7a = 0;
  local_82 = 0;
  local_70 = 0;
  local_7c = 0;
  local_84 = 0;
  local_86 = 0;
  local_88 = 0;
  local_8a = 0;
  local_8c = 0;
  local_8e = 0;
  local_90 = 0;
  local_7e = 0;
  local_80 = 0;
  sVar4 = FUN_00001592(param_1);
  DAT_0002877f = *(char *)(_DAT_0002884c + 0x111);
  DAT_0002877e = (byte)((uint)(*(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2
                                       ) << 4) >> 0x1c);
  if (DAT_0002877e < 8) {
    sVar5 = (short)(char)DAT_0002877e;
  }
  else {
    sVar5 = 8;
  }
  if (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    DAT_00028788 = '\x04';
    sVar9 = 0;
    while ((sVar9 < *(short *)(_DAT_0002884c + 0x15c2) &&
           (((sVar6 = *(short *)(sVar9 * 0x42 + _DAT_0002884c + 0x15c4), sVar6 != param_1._0_2_ &&
             ((int)sVar6 != param_1._0_2_ + -1)) ||
            ((sVar6 = *(short *)(sVar9 * 0x42 + _DAT_0002884c + 0x15c6), param_1._2_2_ != sVar6 &&
             ((int)sVar6 != param_1._2_2_ + -1))))))) {
      sVar9 = sVar9 + 1;
    }
    sVar6 = 4;
    while (sVar2 = sVar6 + -1, sVar6 != 0) {
      iVar11 = sVar9 * 0x42 + _DAT_0002884c;
      iVar3 = (int)*(short *)(sVar2 * 2 + 0x15b0a) + (int)*(short *)(iVar11 + 0x15c4);
      iVar11 = (int)*(short *)(sVar2 * 2 + 0x15b02) + (int)*(short *)(iVar11 + 0x15c6);
      *(undefined2 *)(&DAT_00028780 + sVar2 * 2) =
           *(undefined2 *)(iVar11 * 0xe0 + _DAT_00028850 + iVar3 * 2);
      uStack_fc = (undefined2)iVar3;
      *(undefined2 *)(&DAT_0002878a + sVar2 * 2) = uStack_fc;
      uStack_100 = (undefined2)iVar11;
      *(undefined2 *)(&DAT_00028792 + sVar2 * 2) = uStack_100;
      sVar6 = sVar2;
    }
    _DAT_0002879a = sVar9 * 0x42 + _DAT_0002884c + 0x15c4;
  }
  else {
    DAT_00028788 = '\x01';
    _DAT_00028780 = *(ushort *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2);
    _DAT_0002878a = param_1._0_2_;
    _DAT_00028792 = param_1._2_2_;
    _DAT_0002879a = 0;
  }
  for (sVar9 = 0; sVar9 < 8; sVar9 = sVar9 + 1) {
    local_b0[sVar9] = *(int *)(&DAT_000288b4 + sVar9 * 4);
    *(undefined4 *)(&DAT_000288b4 + sVar9 * 4) = 0;
  }
  _DAT_000288f8 = 0;
  for (sVar9 = 0; sVar9 < 8; sVar9 = sVar9 + 1) {
    if (local_b0[sVar9] != 0) {
      iVar3 = (int)_DAT_000288f8;
      _DAT_000288f8 = _DAT_000288f8 + 1;
      *(int *)(&DAT_000288b4 + iVar3 * 4) = local_b0[sVar9];
    }
  }
  _DAT_000288f4 = (ushort)(1 < _DAT_000288f8);
  if (_DAT_000288f4 == 0) {
    DAT_0002868d = '\x01';
  }
  else {
    DAT_0002868d = (char)_DAT_000288f8;
  }
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868d; sVar9 = sVar9 + 1) {
    (&DAT_0002874e)[sVar9] = 1;
  }
  if (_DAT_000288f4 == 0) {
    _DAT_0002866c = _DAT_000288ac;
  }
  else {
    for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868d; sVar9 = sVar9 + 1) {
      *(undefined4 *)(&DAT_0002866c + sVar9 * 4) = *(undefined4 *)(&DAT_000288b4 + sVar9 * 4);
    }
  }
  DAT_0002868c = '\0';
  if (DAT_00028788 == '\x04') {
    sVar9 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar6 = sVar9 + -1, sVar9 != 0) {
      psVar10 = (short *)(sVar6 * 0x16 + _DAT_00028854);
      sVar9 = sVar6;
      if (((*(char *)(_DAT_0002884c + 0x111) != *(char *)((int)psVar10 + 5)) &&
          (_DAT_0002878a <= *psVar10)) &&
         (((int)*psVar10 <= _DAT_0002878a + 1 &&
          ((_DAT_00028792 <= psVar10[1] && ((int)psVar10[1] <= _DAT_00028792 + 1)))))) {
        iVar3 = (int)DAT_0002868c;
        DAT_0002868c = DAT_0002868c + '\x01';
        *(short **)(&DAT_000285ec + iVar3 * 4) = psVar10;
      }
    }
  }
  else {
    sVar9 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar6 = sVar9 + -1, sVar9 != 0) {
      psVar10 = (short *)(sVar6 * 0x16 + _DAT_00028854);
      sVar9 = sVar6;
      if (((*(char *)(_DAT_0002884c + 0x111) != *(char *)((int)psVar10 + 5)) &&
          (_DAT_0002878a == *psVar10)) && (_DAT_00028792 == psVar10[1])) {
        iVar3 = (int)DAT_0002868c;
        DAT_0002868c = DAT_0002868c + '\x01';
        *(short **)(&DAT_000285ec + iVar3 * 4) = psVar10;
      }
    }
  }
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868c; sVar9 = sVar9 + 1) {
    (&DAT_0002872e)[sVar9] = 1;
  }
  if ((((*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) == '\x02') ||
       (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\x03')) ||
      (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                 _DAT_0002884c + 0x711) == '\x06')) &&
     ((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) << 3) >> 0x1b == 0)
     ) {
    local_84 = 1;
  }
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868c; sVar9 = sVar9 + 1) {
    cVar8 = *(char *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 4);
    local_6a[sVar9] = *(char *)((int)(short)cVar8 + sVar5 * 0x1d + _DAT_0002884c + 0x60c);
    if (((local_7e == 0) && (cVar8 == '\x1c')) &&
       (local_7e = 1,
       *(short *)((short)(char)DAT_0002877e * 0xc + _DAT_0002884c + 0x1146) * 0x16 + _DAT_00028854
       == *(int *)(&DAT_000285ec + sVar9 * 4))) {
      local_6a[sVar9] = local_6a[sVar9] + '2';
    }
  }
  for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
    cVar8 = *(char *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 4);
    acStack_4b[sVar5 + 1] =
         *(char *)((int)(short)cVar8 + (short)DAT_0002877f * 0x1d + _DAT_0002884c + 0x60c);
    if (((local_80 == 0) && (cVar8 == '\x1c')) &&
       (local_80 = 1,
       *(short *)((short)DAT_0002877f * 0xc + _DAT_0002884c + 0x1146) * 0x16 + _DAT_00028854 ==
       *(int *)(&DAT_0002866c + sVar5 * 4))) {
      acStack_4b[sVar5 + 1] = acStack_4b[sVar5 + 1] + '2';
    }
  }
  if (local_84 != 0) {
    if (local_7e != 0) {
      for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868c; sVar5 = sVar5 + 1) {
        if (((*(ushort *)(*(int *)(&DAT_000285ec + sVar5 * 4) + 0xc) & 0x1000) == 0) &&
           (*(char *)(_DAT_00028864 + (short)*(char *)(*(int *)(&DAT_000285ec + sVar5 * 4) + 4) * 6)
            != '\0')) {
          local_6a[sVar5] = local_6a[sVar5] + 'P';
          break;
        }
      }
    }
    if (local_80 != 0) {
      for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
        if (((*(ushort *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 0xc) & 0x1000) == 0) &&
           (*(char *)(_DAT_00028864 + (short)*(char *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 4) * 6)
            != '\0')) {
          acStack_4b[sVar5 + 1] = acStack_4b[sVar5 + 1] + 'P';
          break;
        }
      }
    }
  }
  for (sVar5 = 1; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
    sVar9 = sVar5;
    if (acStack_4b[sVar5 + 1] < acStack_4b[sVar5]) {
      for (; (0 < sVar9 && (acStack_4b[sVar9 + 1] < acStack_4b[sVar9])); sVar9 = sVar9 + -1) {
        uVar1 = *(undefined4 *)(&DAT_0002866c + sVar9 * 4);
        iVar3 = (sVar9 + -1) * 4;
        *(undefined4 *)(&DAT_0002866c + sVar9 * 4) = *(undefined4 *)(&DAT_0002866c + iVar3);
        *(undefined4 *)(&DAT_0002866c + iVar3) = uVar1;
        cVar8 = acStack_4b[sVar9 + 1];
        uStack_6c = (short)cVar8;
        acStack_4b[sVar9 + 1] = acStack_4b[sVar9];
        acStack_4b[sVar9] = cVar8;
      }
    }
  }
  for (sVar5 = 1; (int)sVar5 < (int)DAT_0002868c; sVar5 = sVar5 + 1) {
    sVar9 = sVar5;
    if (local_6a[sVar5] < local_6a[sVar5 + -1]) {
      for (; (0 < sVar9 && (local_6a[sVar9] < local_6a[sVar9 + -1])); sVar9 = sVar9 + -1) {
        uVar1 = *(undefined4 *)(&DAT_000285ec + sVar9 * 4);
        iVar3 = (sVar9 + -1) * 4;
        *(undefined4 *)(&DAT_000285ec + sVar9 * 4) = *(undefined4 *)(&DAT_000285ec + iVar3);
        *(undefined4 *)(&DAT_000285ec + iVar3) = uVar1;
        cVar8 = local_6a[sVar9];
        uStack_6c = (short)cVar8;
        local_6a[sVar9] = local_6a[sVar9 + -1];
        local_6a[sVar9 + -1] = cVar8;
      }
    }
  }
  sVar5 = (short)DAT_0002868d;
  while (sVar9 = sVar5 + -1, sVar5 != 0) {
    (&DAT_00028726)[sVar9] = 1;
    (&DAT_000286d6)[sVar9] = *(undefined1 *)(*(int *)(&DAT_0002866c + sVar9 * 4) + 4);
    sVar5 = sVar9;
    if ((&DAT_000286d6)[sVar9] == '\x1c') {
      *(undefined1 *)(sVar9 + 0x286fe) =
           *(undefined1 *)
            (*(char *)(*(int *)(&DAT_0002866c + sVar9 * 4) + 10) * 2 + _DAT_0002884c + 0x595);
    }
  }
  sVar5 = (short)DAT_0002868c;
  while (sVar9 = sVar5 + -1, sVar5 != 0) {
    (&DAT_00028706)[sVar9] = 1;
    (&DAT_000286b6)[sVar9] = *(undefined1 *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 4);
    sVar5 = sVar9;
    if ((&DAT_000286b6)[sVar9] == '\x1c') {
      (&DAT_000286de)[sVar9] =
           *(undefined1 *)
            (*(char *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 10) * 2 + _DAT_0002884c + 0x595);
    }
  }
  sStack_76 = 0;
  sVar5 = 0;
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868d; sVar9 = sVar9 + 1) {
    func_0x000049a8();
    if ((&DAT_000286d6)[sVar9] == '\x1c') {
      uStack_6c = FUN_00002782(*(undefined4 *)(&DAT_0002866c + sVar9 * 4));
      uStack_6c = uStack_6c + *(char *)(*(int *)(&DAT_0002866c + sVar9 * 4) + 8);
      if (sVar5 < uStack_6c) {
        asStack_b4[0] = uStack_6c;
        asStack_b4[1] = 9;
        if (uStack_6c < 10) {
          psVar10 = asStack_b4;
        }
        else {
          psVar10 = asStack_b4 + 1;
        }
        sVar5 = *psVar10;
      }
    }
    if (sStack_e == 1) {
      local_86 = 1;
    }
    if (sStack_e == 2) {
      local_8a = 1;
    }
    if (sStack_e == 3) {
      local_8c = 1;
    }
    if (sStack_e == 4) {
      local_78 = 1;
    }
    if (sStack_10 != 0) {
      sStack_b8 = sStack_10;
      sStack_b6 = local_7c;
      if (local_7c < sStack_10) {
        psVar10 = &sStack_b6;
      }
      else {
        psVar10 = &sStack_b8;
      }
      local_7c = *psVar10;
    }
    if ((sVar4 == 0) && (sStack_1a != 0)) {
      sStack_bc = sStack_1a;
      sStack_ba = local_6e;
      if (sStack_1a < local_6e) {
        psVar10 = &sStack_ba;
      }
      else {
        psVar10 = &sStack_bc;
      }
      local_6e = *psVar10;
    }
    if ((sVar4 == 1) && (sStack_18 != 0)) {
      sStack_c0 = sStack_18;
      sStack_be = local_6e;
      if (sStack_18 < local_6e) {
        psVar10 = &sStack_be;
      }
      else {
        psVar10 = &sStack_c0;
      }
      local_6e = *psVar10;
    }
    if ((sVar4 == 2) && (sStack_16 != 0)) {
      sStack_c4 = sStack_16;
      sStack_c2 = local_6e;
      if (sStack_16 < local_6e) {
        psVar10 = &sStack_c2;
      }
      else {
        psVar10 = &sStack_c4;
      }
      local_6e = *psVar10;
    }
    if ((sVar4 == 3) && (sStack_14 != 0)) {
      asStack_cc[2] = sStack_14;
      sStack_c6 = local_6e;
      if (sStack_14 < local_6e) {
        psVar10 = &sStack_c6;
      }
      else {
        psVar10 = asStack_cc + 2;
      }
      local_6e = *psVar10;
    }
    if ((&DAT_000286d6)[sVar9] == '\x1c') {
      sVar6 = FUN_000027de(*(undefined4 *)(&DAT_0002866c + sVar9 * 4));
      sStack_76 = sVar6 + sStack_76;
    }
  }
  local_82 = *(short *)(&DAT_00015b54 + sVar5 * 2) + sStack_76;
  sStack_76 = 0;
  sVar5 = 0;
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868c; sVar9 = sVar9 + 1) {
    func_0x000049a8();
    if ((&DAT_000286b6)[sVar9] == '\x1c') {
      uStack_6c = FUN_00002782(*(undefined4 *)(&DAT_000285ec + sVar9 * 4));
      uStack_6c = uStack_6c + *(char *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 8);
      if (sVar5 < uStack_6c) {
        asStack_cc[0] = uStack_6c;
        asStack_cc[1] = 9;
        if (uStack_6c < 10) {
          psVar10 = asStack_cc;
        }
        else {
          psVar10 = asStack_cc + 1;
        }
        sVar5 = *psVar10;
      }
    }
    if (sStack_e == 1) {
      local_88 = 1;
    }
    if (sStack_e == 2) {
      local_8e = 1;
    }
    if (sStack_e == 3) {
      local_90 = 1;
    }
    if (sStack_10 != 0) {
      sStack_d0 = sStack_10;
      sStack_ce = local_7a;
      if (local_7a < sStack_10) {
        psVar10 = &sStack_ce;
      }
      else {
        psVar10 = &sStack_d0;
      }
      local_7a = *psVar10;
    }
    if (sStack_e == 4) {
      local_72 = 1;
    }
    if ((sVar4 == 0) && (sStack_1a != 0)) {
      sStack_d4 = sStack_1a;
      sStack_d2 = local_70;
      if (sStack_1a < local_70) {
        psVar10 = &sStack_d2;
      }
      else {
        psVar10 = &sStack_d4;
      }
      local_70 = *psVar10;
    }
    if ((sVar4 == 1) && (sStack_18 != 0)) {
      sStack_d8 = sStack_18;
      sStack_d6 = local_70;
      if (sStack_18 < local_70) {
        psVar10 = &sStack_d6;
      }
      else {
        psVar10 = &sStack_d8;
      }
      local_70 = *psVar10;
    }
    if ((sVar4 == 2) && (sStack_16 != 0)) {
      sStack_dc = sStack_16;
      sStack_da = local_70;
      if (sStack_16 < local_70) {
        psVar10 = &sStack_da;
      }
      else {
        psVar10 = &sStack_dc;
      }
      local_70 = *psVar10;
    }
    if ((sVar4 == 3) && (sStack_14 != 0)) {
      sStack_e0 = sStack_14;
      sStack_de = local_70;
      if (sStack_14 < local_70) {
        psVar10 = &sStack_de;
      }
      else {
        psVar10 = &sStack_e0;
      }
      local_70 = *psVar10;
    }
    if ((&DAT_000286b6)[sVar9] == '\x1c') {
      sVar6 = FUN_000027de(*(undefined4 *)(&DAT_000285ec + sVar9 * 4));
      sStack_76 = sVar6 + sStack_76;
    }
  }
  if ((local_88 == 0) && (local_78 != 0)) {
    local_78 = 1;
  }
  else {
    local_78 = 0;
  }
  if ((local_86 == 0) && ((sVar4 == 0 || (local_72 != 0)))) {
    if ((_DAT_00028780 & 0x20) == 0) {
      if (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                    _DAT_0002884c + 0x711) == '\v') {
        local_72 = 2;
      }
      else if (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >>
                         0x18) + _DAT_0002884c + 0x711) == '\n') {
        local_72 = (short)*(char *)(_DAT_0002879a + 0x14);
      }
    }
    else {
      local_72 = 1;
    }
    if (DAT_0002877e == 0xf) {
      local_72 = local_72 / 2;
    }
  }
  else {
    local_72 = 0;
  }
  sVar9 = 0;
  if (local_8e == 0) {
    sVar9 = local_82;
  }
  if (local_90 == 0) {
    sVar9 = local_6e + sVar9;
  }
  sStack_e4 = local_78 + sVar9;
  sStack_e2 = *(short *)(_DAT_0002884c + 0x112);
  if (*(short *)(_DAT_0002884c + 0x112) < (short)(local_78 + sVar9)) {
    psVar10 = &sStack_e2;
  }
  else {
    psVar10 = &sStack_e4;
  }
  sVar9 = *psVar10;
  cVar8 = (char)local_7a;
  sStack_74 = 0;
  if (local_8a == 0) {
    sStack_74 = *(short *)(&DAT_00015b54 + sVar5 * 2) + sStack_76;
  }
  if (local_8c == 0) {
    sStack_74 = local_70 + sStack_74;
  }
  sStack_74 = local_72 + sStack_74;
  sStack_e8 = sStack_74;
  sStack_e6 = *(short *)(_DAT_0002884c + 0x112);
  if (*(short *)(_DAT_0002884c + 0x112) < sStack_74) {
    psVar10 = &sStack_e6;
  }
  else {
    psVar10 = &sStack_e8;
  }
  sStack_74 = local_7c + *psVar10;
  for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
    func_0x000049a8();
    (&DAT_00028756)[sVar5] = 0;
    if (((*(ushort *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_000286ae)[sVar5] =
           *(char *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 8) + cVar8 + (char)sVar9;
      if ((&DAT_000286d6)[sVar5] == '\x1c') {
        cVar7 = FUN_00002782(*(undefined4 *)(&DAT_0002866c + sVar5 * 4));
        (&DAT_000286ae)[sVar5] = cVar7 + (&DAT_000286ae)[sVar5];
      }
      if ((sVar4 == 0) && (uStack_22 != 0)) {
        (&DAT_000286ae)[sVar5] = (char)uStack_22 + (&DAT_000286ae)[sVar5];
      }
      if ((sVar4 == 1) && (uStack_20 != 0)) {
        (&DAT_000286ae)[sVar5] = (char)uStack_20 + (&DAT_000286ae)[sVar5];
      }
      if ((sVar4 == 2) && (uStack_1e != 0)) {
        (&DAT_000286ae)[sVar5] = (char)uStack_1e + (&DAT_000286ae)[sVar5];
      }
      if ((sVar4 == 3) && (uStack_1c != 0)) {
        (&DAT_000286ae)[sVar5] = (char)uStack_1c + (&DAT_000286ae)[sVar5];
      }
      asStack_f0[0] = (short)(char)(&DAT_000286ae)[sVar5];
      asStack_f0[1] = 0xf;
      if ((char)(&DAT_000286ae)[sVar5] < 0x10) {
        psVar10 = asStack_f0;
      }
      else {
        psVar10 = asStack_f0 + 1;
      }
      (&DAT_000286ae)[sVar5] = (char)*psVar10;
    }
    else {
      asStack_f0[2] = (short)*(char *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 8);
      sStack_ea = 4;
      if (*(char *)(*(int *)(&DAT_0002866c + sVar5 * 4) + 8) < 5) {
        psVar10 = asStack_f0 + 2;
      }
      else {
        psVar10 = &sStack_ea;
      }
      (&DAT_000286ae)[sVar5] = (char)*psVar10;
      (&DAT_00028756)[sVar5] = 1;
    }
  }
  for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868c; sVar5 = sVar5 + 1) {
    func_0x000049a8();
    (&DAT_0002875e)[sVar5] = 0;
    if (((*(ushort *)(*(int *)(&DAT_000285ec + sVar5 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_0002868e)[sVar5] = *(char *)(*(int *)(&DAT_000285ec + sVar5 * 4) + 8) + (char)sStack_74;
      if ((&DAT_000286b6)[sVar5] == '\x1c') {
        cVar8 = FUN_00002782(*(undefined4 *)(&DAT_000285ec + sVar5 * 4));
        (&DAT_0002868e)[sVar5] = cVar8 + (&DAT_0002868e)[sVar5];
      }
      if ((sVar4 == 0) && (uStack_22 != 0)) {
        (&DAT_0002868e)[sVar5] = (char)uStack_22 + (&DAT_0002868e)[sVar5];
      }
      if ((sVar4 == 1) && (uStack_20 != 0)) {
        (&DAT_0002868e)[sVar5] = (char)uStack_20 + (&DAT_0002868e)[sVar5];
      }
      if ((sVar4 == 2) && (uStack_1e != 0)) {
        (&DAT_0002868e)[sVar5] = (char)uStack_1e + (&DAT_0002868e)[sVar5];
      }
      if ((sVar4 == 3) && (uStack_1c != 0)) {
        (&DAT_0002868e)[sVar5] = (char)uStack_1c + (&DAT_0002868e)[sVar5];
      }
      asStack_f8[0] = (short)(char)(&DAT_0002868e)[sVar5];
      asStack_f8[1] = 0xf;
      if ((char)(&DAT_0002868e)[sVar5] < 0x10) {
        psVar10 = asStack_f8;
      }
      else {
        psVar10 = asStack_f8 + 1;
      }
      (&DAT_0002868e)[sVar5] = (char)*psVar10;
    }
    else {
      asStack_f8[2] = (short)*(char *)(*(int *)(&DAT_000285ec + sVar5 * 4) + 8);
      sStack_f2 = 4;
      if (*(char *)(*(int *)(&DAT_000285ec + sVar5 * 4) + 8) < 5) {
        psVar10 = asStack_f8 + 2;
      }
      else {
        psVar10 = &sStack_f2;
      }
      (&DAT_0002868e)[sVar5] = (char)*psVar10;
      (&DAT_0002875e)[sVar5] = 1;
    }
  }
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 1927 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  short sVar5;
  undefined2 uVar6;
  char cVar7;
  short unaff_D3w;
  short sVar8;
  short sVar9;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  int in_A0;
  undefined1 *puVar10;
  short *psVar11;
  undefined2 *puVar12;
  int unaff_A6;
  
  while (((*(ushort *)(in_A0 + 0xc) & 0x1000) != 0 ||
         (*(char *)(_DAT_00028864 +
                   (short)*(char *)(*(int *)(&DAT_000285ec + unaff_D3w * 4) + 4) * 6) == '\0'))) {
    unaff_D3w = unaff_D3w + 1;
    if ((int)DAT_0002868c <= (int)unaff_D3w) goto LAB_00001c3c;
    in_A0 = *(int *)(&DAT_000285ec + unaff_D3w * 4);
  }
  pcVar1 = (char *)(unaff_A6 + -0x66 + (int)unaff_D3w);
  *pcVar1 = *pcVar1 + 'P';
LAB_00001c3c:
  if (*(short *)(unaff_A6 + -0x7c) != 0) {
    for (sVar8 = 0; (int)sVar8 < (int)DAT_0002868d; sVar8 = sVar8 + 1) {
      if (((*(ushort *)(*(int *)(&DAT_0002866c + sVar8 * 4) + 0xc) & 0x1000) == 0) &&
         (*(char *)(_DAT_00028864 + (short)*(char *)(*(int *)(&DAT_0002866c + sVar8 * 4) + 4) * 6)
          != '\0')) {
        pcVar1 = (char *)(unaff_A6 + -0x46 + (int)sVar8);
        *pcVar1 = *pcVar1 + 'P';
        break;
      }
    }
  }
  for (sVar8 = 1; (int)sVar8 < (int)DAT_0002868d; sVar8 = sVar8 + 1) {
    sVar9 = sVar8;
    if (*(char *)(unaff_A6 + -0x46 + (int)sVar8) < *(char *)(unaff_A6 + -0x46 + sVar8 + -1)) {
      for (; (0 < sVar9 &&
             (*(char *)(unaff_A6 + -0x46 + (int)sVar9) < *(char *)(unaff_A6 + -0x46 + sVar9 + -1)));
          sVar9 = sVar9 + -1) {
        uVar2 = *(undefined4 *)(&DAT_0002866c + sVar9 * 4);
        iVar4 = (sVar9 + -1) * 4;
        *(int *)(unaff_A6 + -0x108) = iVar4;
        *(undefined4 *)(&DAT_0002866c + sVar9 * 4) = *(undefined4 *)(&DAT_0002866c + iVar4);
        *(undefined4 *)(&DAT_0002866c + iVar4) = uVar2;
        *(short *)(unaff_A6 + -0x68) = (short)*(char *)(unaff_A6 + -0x46 + (int)sVar9);
        puVar10 = (undefined1 *)(sVar9 + -1 + unaff_A6 + -0x46);
        *(undefined1 **)(unaff_A6 + -0x10c) = puVar10;
        *(undefined1 *)(unaff_A6 + -0x46 + (int)sVar9) = *puVar10;
        *puVar10 = *(undefined1 *)(unaff_A6 + -0x67);
      }
    }
  }
  for (sVar8 = 1; (int)sVar8 < (int)DAT_0002868c; sVar8 = sVar8 + 1) {
    sVar9 = sVar8;
    if (*(char *)(unaff_A6 + -0x66 + (int)sVar8) < *(char *)(unaff_A6 + -0x66 + sVar8 + -1)) {
      for (; (0 < sVar9 &&
             (*(char *)(unaff_A6 + -0x66 + (int)sVar9) < *(char *)(unaff_A6 + -0x66 + sVar9 + -1)));
          sVar9 = sVar9 + -1) {
        uVar2 = *(undefined4 *)(&DAT_000285ec + sVar9 * 4);
        iVar4 = (sVar9 + -1) * 4;
        *(int *)(unaff_A6 + -0x110) = iVar4;
        *(undefined4 *)(&DAT_000285ec + sVar9 * 4) = *(undefined4 *)(&DAT_000285ec + iVar4);
        *(undefined4 *)(&DAT_000285ec + iVar4) = uVar2;
        *(short *)(unaff_A6 + -0x68) = (short)*(char *)(unaff_A6 + -0x66 + (int)sVar9);
        puVar10 = (undefined1 *)(sVar9 + -1 + unaff_A6 + -0x66);
        *(undefined1 **)(unaff_A6 + -0x114) = puVar10;
        *(undefined1 *)(unaff_A6 + -0x66 + (int)sVar9) = *puVar10;
        *puVar10 = *(undefined1 *)(unaff_A6 + -0x67);
      }
    }
  }
  sVar8 = (short)DAT_0002868d;
  while (sVar9 = sVar8 + -1, sVar8 != 0) {
    (&DAT_00028726)[sVar9] = 1;
    (&DAT_000286d6)[sVar9] = *(undefined1 *)(*(int *)(&DAT_0002866c + sVar9 * 4) + 4);
    sVar8 = sVar9;
    if ((&DAT_000286d6)[sVar9] == '\x1c') {
      *(undefined1 *)(sVar9 + 0x286fe) =
           *(undefined1 *)
            (*(char *)(*(int *)(&DAT_0002866c + sVar9 * 4) + 10) * 2 + _DAT_0002884c + 0x595);
    }
  }
  sVar8 = (short)DAT_0002868c;
  while (sVar9 = sVar8 + -1, sVar8 != 0) {
    (&DAT_00028706)[sVar9] = 1;
    (&DAT_000286b6)[sVar9] = *(undefined1 *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 4);
    sVar8 = sVar9;
    if ((&DAT_000286b6)[sVar9] == '\x1c') {
      (&DAT_000286de)[sVar9] =
           *(undefined1 *)
            (*(char *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 10) * 2 + _DAT_0002884c + 0x595);
    }
  }
  *(undefined2 *)(unaff_A6 + -0x72) = 0;
  sVar8 = 0;
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868d; sVar9 = sVar9 + 1) {
    func_0x000049a8();
    if ((&DAT_000286d6)[sVar9] == '\x1c') {
      sVar5 = FUN_00002782(*(undefined4 *)(&DAT_0002866c + sVar9 * 4));
      sVar5 = sVar5 + *(char *)(*(int *)(&DAT_0002866c + sVar9 * 4) + 8);
      *(short *)(unaff_A6 + -0x68) = sVar5;
      if (sVar8 < sVar5) {
        *(short *)(unaff_A6 + -0xb0) = sVar5;
        *(undefined2 *)(unaff_A6 + -0xae) = 9;
        if (*(short *)(unaff_A6 + -0xae) < sVar5) {
          psVar11 = (short *)(unaff_A6 + -0xae);
        }
        else {
          psVar11 = (short *)(unaff_A6 + -0xb0);
        }
        sVar8 = *psVar11;
      }
    }
    if (*(short *)(unaff_A6 + -10) == 1) {
      *(undefined2 *)(unaff_A6 + -0x82) = 1;
    }
    if (*(short *)(unaff_A6 + -10) == 2) {
      *(undefined2 *)(unaff_A6 + -0x86) = 1;
    }
    if (*(short *)(unaff_A6 + -10) == 3) {
      *(undefined2 *)(unaff_A6 + -0x88) = 1;
    }
    if (*(short *)(unaff_A6 + -10) == 4) {
      *(undefined2 *)(unaff_A6 + -0x74) = 1;
    }
    if (*(short *)(unaff_A6 + -0xc) != 0) {
      *(undefined2 *)(unaff_A6 + -0xb4) = *(undefined2 *)(unaff_A6 + -0xc);
      *(undefined2 *)(unaff_A6 + -0xb2) = *(undefined2 *)(unaff_A6 + -0x78);
      if (*(short *)(unaff_A6 + -0xb2) < *(short *)(unaff_A6 + -0xb4)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xb2);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xb4);
      }
      *(undefined2 *)(unaff_A6 + -0x78) = *puVar12;
    }
    if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x16) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xb8) = *(undefined2 *)(unaff_A6 + -0x16);
      *(undefined2 *)(unaff_A6 + -0xb6) = *(undefined2 *)(unaff_A6 + -0x6a);
      if (*(short *)(unaff_A6 + -0xb8) < *(short *)(unaff_A6 + -0xb6)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xb6);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xb8);
      }
      *(undefined2 *)(unaff_A6 + -0x6a) = *puVar12;
    }
    if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x14) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xbc) = *(undefined2 *)(unaff_A6 + -0x14);
      *(undefined2 *)(unaff_A6 + -0xba) = *(undefined2 *)(unaff_A6 + -0x6a);
      if (*(short *)(unaff_A6 + -0xbc) < *(short *)(unaff_A6 + -0xba)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xba);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xbc);
      }
      *(undefined2 *)(unaff_A6 + -0x6a) = *puVar12;
    }
    if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x12) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xc0) = *(undefined2 *)(unaff_A6 + -0x12);
      *(undefined2 *)(unaff_A6 + -0xbe) = *(undefined2 *)(unaff_A6 + -0x6a);
      if (*(short *)(unaff_A6 + -0xc0) < *(short *)(unaff_A6 + -0xbe)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xbe);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xc0);
      }
      *(undefined2 *)(unaff_A6 + -0x6a) = *puVar12;
    }
    if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x10) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xc4) = *(undefined2 *)(unaff_A6 + -0x10);
      *(undefined2 *)(unaff_A6 + -0xc2) = *(undefined2 *)(unaff_A6 + -0x6a);
      if (*(short *)(unaff_A6 + -0xc4) < *(short *)(unaff_A6 + -0xc2)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xc2);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xc4);
      }
      *(undefined2 *)(unaff_A6 + -0x6a) = *puVar12;
    }
    if ((&DAT_000286d6)[sVar9] == '\x1c') {
      sVar5 = FUN_000027de(*(undefined4 *)(&DAT_0002866c + sVar9 * 4));
      *(short *)(unaff_A6 + -0x72) = sVar5 + *(short *)(unaff_A6 + -0x72);
    }
  }
  *(short *)(unaff_A6 + -0x7e) =
       *(short *)(&DAT_00015b54 + sVar8 * 2) + *(short *)(unaff_A6 + -0x72);
  *(undefined2 *)(unaff_A6 + -0x72) = 0;
  sVar8 = 0;
  for (sVar9 = 0; (int)sVar9 < (int)DAT_0002868c; sVar9 = sVar9 + 1) {
    func_0x000049a8();
    if ((&DAT_000286b6)[sVar9] == '\x1c') {
      sVar5 = FUN_00002782(*(undefined4 *)(&DAT_000285ec + sVar9 * 4));
      sVar5 = sVar5 + *(char *)(*(int *)(&DAT_000285ec + sVar9 * 4) + 8);
      *(short *)(unaff_A6 + -0x68) = sVar5;
      if (sVar8 < sVar5) {
        *(short *)(unaff_A6 + -200) = sVar5;
        *(undefined2 *)(unaff_A6 + -0xc6) = 9;
        if (*(short *)(unaff_A6 + -0xc6) < sVar5) {
          psVar11 = (short *)(unaff_A6 + -0xc6);
        }
        else {
          psVar11 = (short *)(unaff_A6 + -200);
        }
        sVar8 = *psVar11;
      }
    }
    if (*(short *)(unaff_A6 + -10) == 1) {
      *(undefined2 *)(unaff_A6 + -0x84) = 1;
    }
    if (*(short *)(unaff_A6 + -10) == 2) {
      *(undefined2 *)(unaff_A6 + -0x8a) = 1;
    }
    if (*(short *)(unaff_A6 + -10) == 3) {
      *(undefined2 *)(unaff_A6 + -0x8c) = 1;
    }
    if (*(short *)(unaff_A6 + -0xc) != 0) {
      *(undefined2 *)(unaff_A6 + -0xcc) = *(undefined2 *)(unaff_A6 + -0xc);
      *(undefined2 *)(unaff_A6 + -0xca) = *(undefined2 *)(unaff_A6 + -0x76);
      if (*(short *)(unaff_A6 + -0xca) < *(short *)(unaff_A6 + -0xcc)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xca);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xcc);
      }
      *(undefined2 *)(unaff_A6 + -0x76) = *puVar12;
    }
    if (*(short *)(unaff_A6 + -10) == 4) {
      *(undefined2 *)(unaff_A6 + -0x6e) = 1;
    }
    if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x16) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xd0) = *(undefined2 *)(unaff_A6 + -0x16);
      *(undefined2 *)(unaff_A6 + -0xce) = *(undefined2 *)(unaff_A6 + -0x6c);
      if (*(short *)(unaff_A6 + -0xd0) < *(short *)(unaff_A6 + -0xce)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xce);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xd0);
      }
      *(undefined2 *)(unaff_A6 + -0x6c) = *puVar12;
    }
    if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x14) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xd4) = *(undefined2 *)(unaff_A6 + -0x14);
      *(undefined2 *)(unaff_A6 + -0xd2) = *(undefined2 *)(unaff_A6 + -0x6c);
      if (*(short *)(unaff_A6 + -0xd4) < *(short *)(unaff_A6 + -0xd2)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xd2);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xd4);
      }
      *(undefined2 *)(unaff_A6 + -0x6c) = *puVar12;
    }
    if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x12) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xd8) = *(undefined2 *)(unaff_A6 + -0x12);
      *(undefined2 *)(unaff_A6 + -0xd6) = *(undefined2 *)(unaff_A6 + -0x6c);
      if (*(short *)(unaff_A6 + -0xd8) < *(short *)(unaff_A6 + -0xd6)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xd6);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xd8);
      }
      *(undefined2 *)(unaff_A6 + -0x6c) = *puVar12;
    }
    if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x10) != 0)) {
      *(undefined2 *)(unaff_A6 + -0xdc) = *(undefined2 *)(unaff_A6 + -0x10);
      *(undefined2 *)(unaff_A6 + -0xda) = *(undefined2 *)(unaff_A6 + -0x6c);
      if (*(short *)(unaff_A6 + -0xdc) < *(short *)(unaff_A6 + -0xda)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xda);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xdc);
      }
      *(undefined2 *)(unaff_A6 + -0x6c) = *puVar12;
    }
    if ((&DAT_000286b6)[sVar9] == '\x1c') {
      sVar5 = FUN_000027de(*(undefined4 *)(&DAT_000285ec + sVar9 * 4));
      *(short *)(unaff_A6 + -0x72) = sVar5 + *(short *)(unaff_A6 + -0x72);
    }
  }
  if ((*(short *)(unaff_A6 + -0x84) == 0) && (*(short *)(unaff_A6 + -0x74) != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined2 *)(unaff_A6 + -0x74) = uVar6;
  if ((*(short *)(unaff_A6 + -0x82) == 0) &&
     ((unaff_D5w == 0 || (*(short *)(unaff_A6 + -0x6e) != 0)))) {
    if ((DAT_00028781 & 0x20) == 0) {
      if (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                    _DAT_0002884c + 0x711) == '\v') {
        *(undefined2 *)(unaff_A6 + -0x6e) = 2;
      }
      else if (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\n') {
        *(short *)(unaff_A6 + -0x6e) = (short)*(char *)(_DAT_0002879a + 0x14);
      }
    }
    else {
      *(undefined2 *)(unaff_A6 + -0x6e) = 1;
    }
    if (DAT_0002877e == '\x0f') {
      *(short *)(unaff_A6 + -0x6e) = *(short *)(unaff_A6 + -0x6e) / 2;
    }
  }
  else {
    *(undefined2 *)(unaff_A6 + -0x6e) = 0;
  }
  sVar9 = *(short *)(&DAT_00015b54 + sVar8 * 2);
  sVar8 = 0;
  if (*(short *)(unaff_A6 + -0x8a) == 0) {
    sVar8 = *(short *)(unaff_A6 + -0x7e);
  }
  if (*(short *)(unaff_A6 + -0x8c) == 0) {
    sVar8 = *(short *)(unaff_A6 + -0x6a) + sVar8;
  }
  sVar8 = *(short *)(unaff_A6 + -0x74) + sVar8;
  *(short *)(unaff_A6 + -0xe0) = sVar8;
  *(undefined2 *)(unaff_A6 + -0xde) = *(undefined2 *)(_DAT_0002884c + 0x112);
  if (*(short *)(unaff_A6 + -0xde) < sVar8) {
    puVar12 = (undefined2 *)(unaff_A6 + -0xde);
  }
  else {
    puVar12 = (undefined2 *)(unaff_A6 + -0xe0);
  }
  uVar6 = *puVar12;
  uVar3 = *(undefined2 *)(unaff_A6 + -0x76);
  *(undefined2 *)(unaff_A6 + -0x70) = 0;
  if (*(short *)(unaff_A6 + -0x86) == 0) {
    *(short *)(unaff_A6 + -0x70) =
         sVar9 + *(short *)(unaff_A6 + -0x72) + *(short *)(unaff_A6 + -0x70);
  }
  if (*(short *)(unaff_A6 + -0x88) == 0) {
    *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x6c) + *(short *)(unaff_A6 + -0x70);
  }
  *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x6e) + *(short *)(unaff_A6 + -0x70);
  *(undefined2 *)(unaff_A6 + -0xe4) = *(undefined2 *)(unaff_A6 + -0x70);
  *(undefined2 *)(unaff_A6 + -0xe2) = *(undefined2 *)(_DAT_0002884c + 0x112);
  if (*(short *)(unaff_A6 + -0xe2) < *(short *)(unaff_A6 + -0xe4)) {
    puVar12 = (undefined2 *)(unaff_A6 + -0xe2);
  }
  else {
    puVar12 = (undefined2 *)(unaff_A6 + -0xe4);
  }
  *(undefined2 *)(unaff_A6 + -0x70) = *puVar12;
  *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x78) + *(short *)(unaff_A6 + -0x70);
  for (sVar8 = 0; (int)sVar8 < (int)DAT_0002868d; sVar8 = sVar8 + 1) {
    func_0x000049a8();
    (&DAT_00028756)[sVar8] = 0;
    if (((*(ushort *)(*(int *)(&DAT_0002866c + sVar8 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_000286ae)[sVar8] =
           *(char *)(*(int *)(&DAT_0002866c + sVar8 * 4) + 8) + (char)uVar3 + (char)uVar6;
      if ((&DAT_000286d6)[sVar8] == '\x1c') {
        cVar7 = FUN_00002782(*(undefined4 *)(&DAT_0002866c + sVar8 * 4));
        (&DAT_000286ae)[sVar8] = cVar7 + (&DAT_000286ae)[sVar8];
      }
      if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x1e) != 0)) {
        (&DAT_000286ae)[sVar8] = *(char *)(unaff_A6 + -0x1d) + (&DAT_000286ae)[sVar8];
      }
      if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x1c) != 0)) {
        (&DAT_000286ae)[sVar8] = *(char *)(unaff_A6 + -0x1b) + (&DAT_000286ae)[sVar8];
      }
      if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x1a) != 0)) {
        (&DAT_000286ae)[sVar8] = *(char *)(unaff_A6 + -0x19) + (&DAT_000286ae)[sVar8];
      }
      if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x18) != 0)) {
        (&DAT_000286ae)[sVar8] = *(char *)(unaff_A6 + -0x17) + (&DAT_000286ae)[sVar8];
      }
      *(short *)(unaff_A6 + -0xec) = (short)(char)(&DAT_000286ae)[sVar8];
      *(undefined2 *)(unaff_A6 + -0xea) = 0xf;
      if (*(short *)(unaff_A6 + -0xea) < *(short *)(unaff_A6 + -0xec)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xea);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xec);
      }
      (&DAT_000286ae)[sVar8] = (char)*puVar12;
    }
    else {
      *(short *)(unaff_A6 + -0xe8) = (short)*(char *)(*(int *)(&DAT_0002866c + sVar8 * 4) + 8);
      *(undefined2 *)(unaff_A6 + -0xe6) = 4;
      if (*(short *)(unaff_A6 + -0xe6) < *(short *)(unaff_A6 + -0xe8)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xe6);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xe8);
      }
      (&DAT_000286ae)[sVar8] = (char)*puVar12;
      (&DAT_00028756)[sVar8] = 1;
    }
  }
  for (sVar8 = 0; (int)sVar8 < (int)DAT_0002868c; sVar8 = sVar8 + 1) {
    func_0x000049a8();
    (&DAT_0002875e)[sVar8] = 0;
    if (((*(ushort *)(*(int *)(&DAT_000285ec + sVar8 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_0002868e)[sVar8] =
           *(char *)(*(int *)(&DAT_000285ec + sVar8 * 4) + 8) +
           (char)*(undefined2 *)(unaff_A6 + -0x70);
      if ((&DAT_000286b6)[sVar8] == '\x1c') {
        cVar7 = FUN_00002782(*(undefined4 *)(&DAT_000285ec + sVar8 * 4));
        (&DAT_0002868e)[sVar8] = cVar7 + (&DAT_0002868e)[sVar8];
      }
      if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x1e) != 0)) {
        (&DAT_0002868e)[sVar8] = *(char *)(unaff_A6 + -0x1d) + (&DAT_0002868e)[sVar8];
      }
      if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x1c) != 0)) {
        (&DAT_0002868e)[sVar8] = *(char *)(unaff_A6 + -0x1b) + (&DAT_0002868e)[sVar8];
      }
      if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x1a) != 0)) {
        (&DAT_0002868e)[sVar8] = *(char *)(unaff_A6 + -0x19) + (&DAT_0002868e)[sVar8];
      }
      if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x18) != 0)) {
        (&DAT_0002868e)[sVar8] = *(char *)(unaff_A6 + -0x17) + (&DAT_0002868e)[sVar8];
      }
      *(short *)(unaff_A6 + -0xf4) = (short)(char)(&DAT_0002868e)[sVar8];
      *(undefined2 *)(unaff_A6 + -0xf2) = 0xf;
      if (*(short *)(unaff_A6 + -0xf2) < *(short *)(unaff_A6 + -0xf4)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xf2);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xf4);
      }
      (&DAT_0002868e)[sVar8] = (char)*puVar12;
    }
    else {
      *(short *)(unaff_A6 + -0xf0) = (short)*(char *)(*(int *)(&DAT_000285ec + sVar8 * 4) + 8);
      *(undefined2 *)(unaff_A6 + -0xee) = 4;
      if (*(short *)(unaff_A6 + -0xee) < *(short *)(unaff_A6 + -0xf0)) {
        puVar12 = (undefined2 *)(unaff_A6 + -0xee);
      }
      else {
        puVar12 = (undefined2 *)(unaff_A6 + -0xf0);
      }
      (&DAT_0002868e)[sVar8] = (char)*puVar12;
      (&DAT_0002875e)[sVar8] = 1;
    }
  }
  return;
}



// Function: FUN_00002378 at 00002378
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002378(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  short unaff_D3w;
  short sVar4;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  undefined2 *puVar5;
  int unaff_A6;
  
  uVar1 = *(undefined2 *)(unaff_A6 + -0xde);
  uVar2 = *(undefined2 *)(unaff_A6 + -0x76);
  *(undefined2 *)(unaff_A6 + -0x70) = 0;
  if (*(short *)(unaff_A6 + -0x86) == 0) {
    *(short *)(unaff_A6 + -0x70) = unaff_D3w + *(short *)(unaff_A6 + -0x70);
  }
  if (*(short *)(unaff_A6 + -0x88) == 0) {
    *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x6c) + *(short *)(unaff_A6 + -0x70);
  }
  *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x6e) + *(short *)(unaff_A6 + -0x70);
  *(undefined2 *)(unaff_A6 + -0xe4) = *(undefined2 *)(unaff_A6 + -0x70);
  *(undefined2 *)(unaff_A6 + -0xe2) = *(undefined2 *)(_DAT_0002884c + 0x112);
  if (*(short *)(unaff_A6 + -0xe2) < *(short *)(unaff_A6 + -0xe4)) {
    puVar5 = (undefined2 *)(unaff_A6 + -0xe2);
  }
  else {
    puVar5 = (undefined2 *)(unaff_A6 + -0xe4);
  }
  *(undefined2 *)(unaff_A6 + -0x70) = *puVar5;
  *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x78) + *(short *)(unaff_A6 + -0x70);
  for (sVar4 = 0; (int)sVar4 < (int)DAT_0002868d; sVar4 = sVar4 + 1) {
    func_0x000049a8();
    (&DAT_00028756)[sVar4] = 0;
    if (((*(ushort *)(*(int *)(&DAT_0002866c + sVar4 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_000286ae)[sVar4] =
           *(char *)(*(int *)(&DAT_0002866c + sVar4 * 4) + 8) + (char)uVar2 + (char)uVar1;
      if ((&DAT_000286d6)[sVar4] == '\x1c') {
        cVar3 = FUN_00002782(*(undefined4 *)(&DAT_0002866c + sVar4 * 4));
        (&DAT_000286ae)[sVar4] = cVar3 + (&DAT_000286ae)[sVar4];
      }
      if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x1e) != 0)) {
        (&DAT_000286ae)[sVar4] = *(char *)(unaff_A6 + -0x1d) + (&DAT_000286ae)[sVar4];
      }
      if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x1c) != 0)) {
        (&DAT_000286ae)[sVar4] = *(char *)(unaff_A6 + -0x1b) + (&DAT_000286ae)[sVar4];
      }
      if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x1a) != 0)) {
        (&DAT_000286ae)[sVar4] = *(char *)(unaff_A6 + -0x19) + (&DAT_000286ae)[sVar4];
      }
      if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x18) != 0)) {
        (&DAT_000286ae)[sVar4] = *(char *)(unaff_A6 + -0x17) + (&DAT_000286ae)[sVar4];
      }
      *(short *)(unaff_A6 + -0xec) = (short)(char)(&DAT_000286ae)[sVar4];
      *(undefined2 *)(unaff_A6 + -0xea) = 0xf;
      if (*(short *)(unaff_A6 + -0xea) < *(short *)(unaff_A6 + -0xec)) {
        puVar5 = (undefined2 *)(unaff_A6 + -0xea);
      }
      else {
        puVar5 = (undefined2 *)(unaff_A6 + -0xec);
      }
      (&DAT_000286ae)[sVar4] = (char)*puVar5;
    }
    else {
      *(short *)(unaff_A6 + -0xe8) = (short)*(char *)(*(int *)(&DAT_0002866c + sVar4 * 4) + 8);
      *(undefined2 *)(unaff_A6 + -0xe6) = 4;
      if (*(short *)(unaff_A6 + -0xe6) < *(short *)(unaff_A6 + -0xe8)) {
        puVar5 = (undefined2 *)(unaff_A6 + -0xe6);
      }
      else {
        puVar5 = (undefined2 *)(unaff_A6 + -0xe8);
      }
      (&DAT_000286ae)[sVar4] = (char)*puVar5;
      (&DAT_00028756)[sVar4] = 1;
    }
  }
  for (sVar4 = 0; (int)sVar4 < (int)DAT_0002868c; sVar4 = sVar4 + 1) {
    func_0x000049a8();
    (&DAT_0002875e)[sVar4] = 0;
    if (((*(ushort *)(*(int *)(&DAT_000285ec + sVar4 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_0002868e)[sVar4] =
           *(char *)(*(int *)(&DAT_000285ec + sVar4 * 4) + 8) +
           (char)*(undefined2 *)(unaff_A6 + -0x70);
      if ((&DAT_000286b6)[sVar4] == '\x1c') {
        cVar3 = FUN_00002782(*(undefined4 *)(&DAT_000285ec + sVar4 * 4));
        (&DAT_0002868e)[sVar4] = cVar3 + (&DAT_0002868e)[sVar4];
      }
      if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x1e) != 0)) {
        (&DAT_0002868e)[sVar4] = *(char *)(unaff_A6 + -0x1d) + (&DAT_0002868e)[sVar4];
      }
      if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x1c) != 0)) {
        (&DAT_0002868e)[sVar4] = *(char *)(unaff_A6 + -0x1b) + (&DAT_0002868e)[sVar4];
      }
      if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x1a) != 0)) {
        (&DAT_0002868e)[sVar4] = *(char *)(unaff_A6 + -0x19) + (&DAT_0002868e)[sVar4];
      }
      if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x18) != 0)) {
        (&DAT_0002868e)[sVar4] = *(char *)(unaff_A6 + -0x17) + (&DAT_0002868e)[sVar4];
      }
      *(short *)(unaff_A6 + -0xf4) = (short)(char)(&DAT_0002868e)[sVar4];
      *(undefined2 *)(unaff_A6 + -0xf2) = 0xf;
      if (*(short *)(unaff_A6 + -0xf2) < *(short *)(unaff_A6 + -0xf4)) {
        puVar5 = (undefined2 *)(unaff_A6 + -0xf2);
      }
      else {
        puVar5 = (undefined2 *)(unaff_A6 + -0xf4);
      }
      (&DAT_0002868e)[sVar4] = (char)*puVar5;
    }
    else {
      *(short *)(unaff_A6 + -0xf0) = (short)*(char *)(*(int *)(&DAT_000285ec + sVar4 * 4) + 8);
      *(undefined2 *)(unaff_A6 + -0xee) = 4;
      if (*(short *)(unaff_A6 + -0xee) < *(short *)(unaff_A6 + -0xf0)) {
        puVar5 = (undefined2 *)(unaff_A6 + -0xee);
      }
      else {
        puVar5 = (undefined2 *)(unaff_A6 + -0xf0);
      }
      (&DAT_0002868e)[sVar4] = (char)*puVar5;
      (&DAT_0002875e)[sVar4] = 1;
    }
  }
  return;
}



// Function: FUN_00002380 at 00002380
// Size: 1026 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002380(void)

{
  undefined2 uVar1;
  char cVar2;
  short unaff_D3w;
  short sVar3;
  char unaff_D4b;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  undefined2 *puVar4;
  int unaff_A6;
  
  uVar1 = *(undefined2 *)(unaff_A6 + -0x76);
  *(undefined2 *)(unaff_A6 + -0x70) = 0;
  if (*(short *)(unaff_A6 + -0x86) == 0) {
    *(short *)(unaff_A6 + -0x70) = unaff_D3w + *(short *)(unaff_A6 + -0x70);
  }
  if (*(short *)(unaff_A6 + -0x88) == 0) {
    *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x6c) + *(short *)(unaff_A6 + -0x70);
  }
  *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x6e) + *(short *)(unaff_A6 + -0x70);
  *(undefined2 *)(unaff_A6 + -0xe4) = *(undefined2 *)(unaff_A6 + -0x70);
  *(undefined2 *)(unaff_A6 + -0xe2) = *(undefined2 *)(_DAT_0002884c + 0x112);
  if (*(short *)(unaff_A6 + -0xe2) < *(short *)(unaff_A6 + -0xe4)) {
    puVar4 = (undefined2 *)(unaff_A6 + -0xe2);
  }
  else {
    puVar4 = (undefined2 *)(unaff_A6 + -0xe4);
  }
  *(undefined2 *)(unaff_A6 + -0x70) = *puVar4;
  *(short *)(unaff_A6 + -0x70) = *(short *)(unaff_A6 + -0x78) + *(short *)(unaff_A6 + -0x70);
  for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868d; sVar3 = sVar3 + 1) {
    func_0x000049a8();
    (&DAT_00028756)[sVar3] = 0;
    if (((*(ushort *)(*(int *)(&DAT_0002866c + sVar3 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_000286ae)[sVar3] =
           *(char *)(*(int *)(&DAT_0002866c + sVar3 * 4) + 8) + (char)uVar1 + unaff_D4b;
      if ((&DAT_000286d6)[sVar3] == '\x1c') {
        cVar2 = FUN_00002782(*(undefined4 *)(&DAT_0002866c + sVar3 * 4));
        (&DAT_000286ae)[sVar3] = cVar2 + (&DAT_000286ae)[sVar3];
      }
      if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x1e) != 0)) {
        (&DAT_000286ae)[sVar3] = *(char *)(unaff_A6 + -0x1d) + (&DAT_000286ae)[sVar3];
      }
      if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x1c) != 0)) {
        (&DAT_000286ae)[sVar3] = *(char *)(unaff_A6 + -0x1b) + (&DAT_000286ae)[sVar3];
      }
      if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x1a) != 0)) {
        (&DAT_000286ae)[sVar3] = *(char *)(unaff_A6 + -0x19) + (&DAT_000286ae)[sVar3];
      }
      if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x18) != 0)) {
        (&DAT_000286ae)[sVar3] = *(char *)(unaff_A6 + -0x17) + (&DAT_000286ae)[sVar3];
      }
      *(short *)(unaff_A6 + -0xec) = (short)(char)(&DAT_000286ae)[sVar3];
      *(undefined2 *)(unaff_A6 + -0xea) = 0xf;
      if (*(short *)(unaff_A6 + -0xea) < *(short *)(unaff_A6 + -0xec)) {
        puVar4 = (undefined2 *)(unaff_A6 + -0xea);
      }
      else {
        puVar4 = (undefined2 *)(unaff_A6 + -0xec);
      }
      (&DAT_000286ae)[sVar3] = (char)*puVar4;
    }
    else {
      *(short *)(unaff_A6 + -0xe8) = (short)*(char *)(*(int *)(&DAT_0002866c + sVar3 * 4) + 8);
      *(undefined2 *)(unaff_A6 + -0xe6) = 4;
      if (*(short *)(unaff_A6 + -0xe6) < *(short *)(unaff_A6 + -0xe8)) {
        puVar4 = (undefined2 *)(unaff_A6 + -0xe6);
      }
      else {
        puVar4 = (undefined2 *)(unaff_A6 + -0xe8);
      }
      (&DAT_000286ae)[sVar3] = (char)*puVar4;
      (&DAT_00028756)[sVar3] = 1;
    }
  }
  for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868c; sVar3 = sVar3 + 1) {
    func_0x000049a8();
    (&DAT_0002875e)[sVar3] = 0;
    if (((*(ushort *)(*(int *)(&DAT_000285ec + sVar3 * 4) + 0xc) & 0x1000) == 0) ||
       ((*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x02' &&
        (*(char *)((*(uint *)(unaff_D6w * 0xe0 + _DAT_00028850 + unaff_D7w * 2) >> 0x18) +
                   _DAT_0002884c + 0x711) != '\x03')))) {
      (&DAT_0002868e)[sVar3] =
           *(char *)(*(int *)(&DAT_000285ec + sVar3 * 4) + 8) +
           (char)*(undefined2 *)(unaff_A6 + -0x70);
      if ((&DAT_000286b6)[sVar3] == '\x1c') {
        cVar2 = FUN_00002782(*(undefined4 *)(&DAT_000285ec + sVar3 * 4));
        (&DAT_0002868e)[sVar3] = cVar2 + (&DAT_0002868e)[sVar3];
      }
      if ((unaff_D5w == 0) && (*(short *)(unaff_A6 + -0x1e) != 0)) {
        (&DAT_0002868e)[sVar3] = *(char *)(unaff_A6 + -0x1d) + (&DAT_0002868e)[sVar3];
      }
      if ((unaff_D5w == 1) && (*(short *)(unaff_A6 + -0x1c) != 0)) {
        (&DAT_0002868e)[sVar3] = *(char *)(unaff_A6 + -0x1b) + (&DAT_0002868e)[sVar3];
      }
      if ((unaff_D5w == 2) && (*(short *)(unaff_A6 + -0x1a) != 0)) {
        (&DAT_0002868e)[sVar3] = *(char *)(unaff_A6 + -0x19) + (&DAT_0002868e)[sVar3];
      }
      if ((unaff_D5w == 3) && (*(short *)(unaff_A6 + -0x18) != 0)) {
        (&DAT_0002868e)[sVar3] = *(char *)(unaff_A6 + -0x17) + (&DAT_0002868e)[sVar3];
      }
      *(short *)(unaff_A6 + -0xf4) = (short)(char)(&DAT_0002868e)[sVar3];
      *(undefined2 *)(unaff_A6 + -0xf2) = 0xf;
      if (*(short *)(unaff_A6 + -0xf2) < *(short *)(unaff_A6 + -0xf4)) {
        puVar4 = (undefined2 *)(unaff_A6 + -0xf2);
      }
      else {
        puVar4 = (undefined2 *)(unaff_A6 + -0xf4);
      }
      (&DAT_0002868e)[sVar3] = (char)*puVar4;
    }
    else {
      *(short *)(unaff_A6 + -0xf0) = (short)*(char *)(*(int *)(&DAT_000285ec + sVar3 * 4) + 8);
      *(undefined2 *)(unaff_A6 + -0xee) = 4;
      if (*(short *)(unaff_A6 + -0xee) < *(short *)(unaff_A6 + -0xf0)) {
        puVar4 = (undefined2 *)(unaff_A6 + -0xee);
      }
      else {
        puVar4 = (undefined2 *)(unaff_A6 + -0xf0);
      }
      (&DAT_0002868e)[sVar3] = (char)*puVar4;
      (&DAT_0002875e)[sVar3] = 1;
    }
  }
  return;
}



// Function: FUN_00002782 at 00002782
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00002782(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  func_0x00006e60(0x20000);
  for (sVar1 = 0; sVar1 < _DAT_000283d8; sVar1 = sVar1 + 1) {
    iVar3 = *(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c;
    if (*(char *)(iVar3 + 0xd26) == '\x01') {
      sVar2 = *(char *)(iVar3 + 0xd27) + sVar2;
    }
  }
  return sVar2;
}



// Function: FUN_000027de at 000027de
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000027de(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  func_0x00006e60(0x20000);
  for (sVar1 = 0; sVar1 < _DAT_000283d8; sVar1 = sVar1 + 1) {
    iVar3 = *(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c;
    if (*(char *)(iVar3 + 0xd26) == '\x02') {
      sVar2 = *(char *)(iVar3 + 0xd27) + sVar2;
    }
    if (*(char *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd26) == '\b') {
      sVar2 = sVar2 + 1;
    }
  }
  return sVar2;
}



// Function: FUN_000029b8 at 000029b8
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000029b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000029c0 at 000029c0
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000029c0(void)

{
  int in_D0;
  int unaff_D3;
  int unaff_A6;
  
  *(uint *)(unaff_A6 + -0x2e81) =
       *(uint *)(unaff_A6 + -0x2e81) & ~((1 << in_D0) + -1 << (0x20 - unaff_D3) - in_D0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000029d0 at 000029d0
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000029d0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002a48 at 00002a48
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002a48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



