// Warlords II - Decompiled 68k Code
// Segment: CODE_135
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0000000c(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = 0;
  for (sVar2 = 0; sVar2 < 0x1c; sVar2 = sVar2 + 1) {
    if (*(char *)(_DAT_00028864 + 4 + sVar2 * 6) == '\x02') {
      sVar3 = sVar3 + 1;
    }
  }
  sVar1 = func_0x00002ad0(sVar3);
  sVar3 = 0;
  for (sVar2 = 0; sVar2 < 0x1c; sVar2 = sVar2 + 1) {
    if (*(char *)(_DAT_00028864 + 4 + sVar2 * 6) == '\x02') {
      if (sVar3 == sVar1) break;
      sVar3 = sVar3 + 1;
    }
  }
  if (((0x1b < sVar2) || (sVar2 < 0)) || (*(char *)(_DAT_00028864 + 4 + sVar2 * 6) != '\x02')) {
    sVar2 = 0x19;
  }
  return sVar2;
}



// Function: FUN_00000098 at 00000098
// Size: 356 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000098(undefined2 param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00006e70(1,0);
  if (_DAT_00027e86 == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))();
    _DAT_00027e86 = extraout_A0;
    func_0x00001bf0(extraout_A0);
  }
  (**(code **)(*_DAT_00027e86 + 0x194))();
  func_0x00006e70(0,0);
  FUN_000001fc(param_1);
  func_0x00002968();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_00027e86 + 0x40c))();
    (**(code **)(*_DAT_00027e86 + 0x3a0))();
    _DAT_00027e86 = (int *)0x0;
    FUN_00000636();
    _DAT_00025f52 = local_10;
  }
  else {
    if (_DAT_00027e86 != (int *)0x0) {
      (**(code **)(*_DAT_00027e86 + 0x3a0))();
    }
    _DAT_00027e86 = (int *)0x0;
    func_0x00001c10();
  }
  func_0x00003e20((short)*(undefined4 *)(_DAT_000297f4 + 0x80),0x3fa);
  return;
}



// Function: FUN_000001fc at 000001fc
// Size: 1082 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000001fc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_A0;
  undefined1 extraout_A0b;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w_02;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined2 extraout_A0w_03;
  undefined4 extraout_A0_04;
  undefined2 extraout_A0w_04;
  undefined4 extraout_A0_05;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  undefined4 extraout_A0_06;
  undefined2 extraout_A0w_07;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined2 extraout_A0w_08;
  undefined2 extraout_A0w_09;
  undefined4 extraout_A0_10;
  undefined2 extraout_A0w_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined2 extraout_A0w_11;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  short sVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined1 auStack_f60 [256];
  undefined1 auStack_e60 [256];
  undefined1 auStack_d60 [256];
  undefined1 auStack_c60 [256];
  undefined1 auStack_b60 [256];
  undefined1 auStack_a60 [256];
  undefined1 auStack_960 [256];
  undefined1 auStack_860 [256];
  undefined1 auStack_760 [256];
  undefined1 auStack_660 [256];
  undefined1 auStack_560 [256];
  undefined1 auStack_460 [256];
  undefined1 auStack_360 [256];
  undefined1 auStack_260 [256];
  undefined1 auStack_160 [256];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [80];
  
  iVar2 = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c;
  local_60 = *(undefined4 *)(iVar2 + 0x1142);
  local_58 = *(undefined4 *)(iVar2 + 0x114a);
  local_5c._0_2_ = (short)((uint)*(undefined4 *)(iVar2 + 0x1146) >> 0x10);
  iVar1 = (short)*(char *)(_DAT_00028854 + 10 + local_5c._0_2_ * 0x16) * 0x14 + _DAT_0002884c +
          0x224;
  uVar5 = (undefined2)((uint)iVar1 >> 0x10);
  uVar3 = 1;
  puVar12 = auStack_54;
  uVar8 = 0x62;
  local_5c = *(undefined4 *)(iVar2 + 0x1146);
  func_0x000076d0((short)puVar12,0x56ab,(char)iVar1);
  func_0x00007320((short)auStack_160,(char)auStack_54,(short)((uint)puVar12 >> 0x10),uVar3,uVar5);
  uVar7 = (undefined2)((uint)extraout_A0 >> 0x10);
  uVar5 = 0x7374;
  uVar3 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
  uVar4 = 0x8a;
  func_0x00006e38((short)_DAT_00027e86,0x7231,(char)extraout_A0);
  func_0x00002ad8(0,uVar3,uVar5,uVar7,uVar8);
  func_0x00007320((short)auStack_260,extraout_A0b);
  uVar7 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  uVar5 = 0x7374;
  uVar3 = (undefined2)((uint)_DAT_00027e86 >> 0x10);
  func_0x00006e38((short)_DAT_00027e86,0x7232,(char)extraout_A0_00);
  func_0x00002ad8(1,uVar3,uVar5,uVar7,uVar4);
  func_0x00007320((short)auStack_360,extraout_A0w);
  func_0x00006e38((short)_DAT_00027e86,0x7233,extraout_A0w_00);
  iVar1 = (int)param_1._0_2_;
  if (iVar1 == 0) {
    func_0x00002ad8(0);
    func_0x00007320((short)auStack_760,extraout_A0w_03);
    uVar5 = (undefined2)((uint)extraout_A0_04 >> 0x10);
    uVar3 = 0x7374;
    uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar8 = 0x3c;
    func_0x00006e38((short)_DAT_00027e86,0x7235,(short)extraout_A0_04);
    func_0x00002ad8(1,uVar4,uVar3,uVar5);
    func_0x00007320((short)auStack_860,extraout_A0w_04);
    uVar5 = (undefined2)((uint)extraout_A0_05 >> 0x10);
    uVar3 = 0x7374;
    uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7236,(short)extraout_A0_05);
    func_0x00007320((short)auStack_960,param_1._2_2_ * 0x1e + (short)_DAT_0002884c + 0xd12,uVar4,
                    uVar3,uVar5,uVar8);
    iVar1 = func_0x00006e38((short)_DAT_00027e86,0x7237,extraout_A0w_05);
  }
  else if (iVar1 == 1) {
    func_0x00002ad8(0);
    func_0x00007320((short)auStack_460,extraout_A0w_01);
    uVar5 = (undefined2)((uint)extraout_A0_01 >> 0x10);
    uVar3 = 0x7374;
    uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar11 = 0x4a;
    func_0x00006e38((short)_DAT_00027e86,0x7235,(short)extraout_A0_01);
    func_0x00002ad8(1,uVar4,uVar3,uVar5);
    func_0x00007320((short)auStack_560,extraout_A0w_02);
    uVar5 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    uVar3 = 0x7374;
    uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    uVar8 = 0x7e;
    func_0x00006e38((short)_DAT_00027e86,0x7236,(short)extraout_A0_02);
    func_0x00007320((short)auStack_660,param_1._2_2_ * 0x20 + (short)_DAT_0002884c + 0x816,uVar4,
                    uVar3,uVar5,uVar11);
    uVar5 = (undefined2)((uint)extraout_A0_03 >> 0x10);
    uVar3 = 0x7374;
    uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
    func_0x00006e38((short)_DAT_00027e86,0x7237,(short)extraout_A0_03);
    func_0x00002930(*(undefined2 *)(local_5c._0_2_ * 0x16 + _DAT_00028854 + 2),
                    (char)*(undefined2 *)(param_1._2_2_ * 0x20 + _DAT_0002884c + 0x814),uVar4,uVar3,
                    uVar5,uVar8);
    func_0x000028f8(0x39);
    iVar1 = func_0x00002908(0x39);
  }
  else {
    sVar6 = param_1._2_2_ >> 0xf;
    if (iVar1 == 2) {
      func_0x00002ad8(0);
      func_0x00007320((short)auStack_d60,extraout_A0w_09);
      uVar5 = (undefined2)((uint)extraout_A0_10 >> 0x10);
      uVar3 = 0x7374;
      uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
      func_0x00006e38((short)_DAT_00027e86,0x7235,(short)extraout_A0_10);
      func_0x00002ad8(1,uVar4,uVar3,uVar5);
      func_0x00007320((short)auStack_e60,extraout_A0w_10);
      uVar10 = (undefined2)((uint)extraout_A0_11 >> 0x10);
      uVar9 = 0x7374;
      uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
      func_0x00006e38((short)_DAT_00027e86,0x7236,(short)extraout_A0_11);
      uVar7 = 1;
      func_0x00002ad8(2,param_1._2_2_,0x8d);
      uVar5 = (undefined2)((uint)extraout_A0_12 >> 0x10);
      uVar3 = (undefined2)((uint)auStack_54 >> 0x10);
      func_0x000076d0((char)auStack_54,(short)extraout_A0_12);
      func_0x00007320((short)auStack_f60,(short)auStack_54,uVar3,uVar5,sVar6,uVar7,uVar4,uVar9,
                      uVar10);
      iVar1 = func_0x00006e38((short)_DAT_00027e86,0x7237,extraout_A0w_11);
    }
    else {
      iVar1 = iVar1 + -3;
      if (iVar1 == 0) {
        func_0x00002ad8(0);
        func_0x00007320((short)auStack_a60,extraout_A0w_06);
        uVar5 = (undefined2)((uint)extraout_A0_06 >> 0x10);
        uVar3 = 0x7374;
        uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
        uVar8 = 0xe0;
        func_0x00006e38((short)_DAT_00027e86,0x7235,(short)extraout_A0_06);
        func_0x00002ad8(1,uVar4,uVar3,uVar5);
        func_0x00007320((short)auStack_b60,extraout_A0w_07);
        uVar5 = (undefined2)((uint)extraout_A0_07 >> 0x10);
        uVar3 = 0x7374;
        uVar4 = (undefined1)((uint)_DAT_00027e86 >> 0x10);
        func_0x00006e38((short)_DAT_00027e86,0x7236,(short)extraout_A0_07);
        func_0x000032f8(uVar4,uVar3,uVar5,uVar8);
        uVar7 = (undefined2)((uint)extraout_A0_08 >> 0x10);
        func_0x00002ad8(2,param_1._2_2_,(char)extraout_A0_08);
        uVar5 = (undefined2)((uint)extraout_A0_09 >> 0x10);
        uVar3 = (undefined2)((uint)auStack_54 >> 0x10);
        func_0x000076d0((char)auStack_54,(short)extraout_A0_09);
        func_0x00007320((short)auStack_c60,(short)auStack_54,uVar3,uVar5,sVar6,uVar7);
        iVar1 = func_0x00006e38((short)_DAT_00027e86,0x7237,extraout_A0w_08);
      }
    }
  }
  return iVar1;
}



// Function: FUN_00000636 at 00000636
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000636(void)

{
  short local_6;
  
  func_0x00002b28(*(undefined2 *)(_DAT_000288b0 + 2),(short)&local_6);
  _DAT_000288ac = _DAT_000288b0;
  if (0 < local_6) {
    func_0x00002b38(2,0);
    func_0x00002b00((short)_DAT_000288ac);
  }
  func_0x000048a0(1);
  return;
}



// Function: FUN_0000069e at 0000069e
// Size: 784 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000069e(short *param_1)

{
  bool bVar1;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar2;
  short sVar6;
  int iVar7;
  undefined2 *puVar8;
  short *psVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined2 local_2c;
  short local_8;
  short local_6;
  
  puVar13 = &stack0xffffffd6;
  bVar1 = true;
  psVar9 = (short *)(*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146) *
                     0x16 + _DAT_00028854);
  if (*(char *)((*(uint *)(psVar9[1] * 0xe0 + _DAT_00028850 + *psVar9 * 2) >> 0x18) + _DAT_0002884c
               + 0x711) != '\n') {
    for (sVar5 = 0; sVar5 < 0x1c; sVar5 = sVar5 + 1) {
      pcVar10 = (char *)(sVar5 * 6 + _DAT_00028864);
      if ((pcVar10[4] == '\x02') && (*pcVar10 == '\0')) {
        bVar1 = false;
      }
    }
  }
  sVar5 = 0;
  for (sVar6 = 0; sVar6 < 0x16; sVar6 = sVar6 + 1) {
    iVar7 = sVar6 * 0x1e + _DAT_0002884c;
    if (*(char *)(iVar7 + 0xd28) == '\0') {
      puVar8 = (undefined2 *)(iVar7 + 0xd30);
      sVar3 = 0xe;
      do {
        puVar11 = puVar13;
        puVar8 = puVar8 + -1;
        *(undefined2 *)(puVar11 + -2) = *puVar8;
        sVar3 = sVar3 + -1;
        puVar13 = puVar11 + -2;
      } while (sVar3 != -1);
      *(undefined4 *)(puVar11 + -6) = 0x746;
      sVar3 = func_0x00004968();
      puVar13 = puVar11 + 0x1c;
      if ((sVar3 != 0) && ((7 < sVar6 || (sVar6 == *(short *)(_DAT_0002884c + 0x110))))) {
        sVar5 = sVar5 + 1;
      }
    }
  }
  sVar6 = 0;
  for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x810); sVar3 = sVar3 + 1) {
    *(short *)(puVar13 + -2) = sVar3;
    *(undefined4 *)(puVar13 + -6) = 0x778;
    sVar4 = FUN_000009ae();
    if (sVar4 != 0) {
      sVar6 = sVar6 + 1;
    }
  }
  if (((*(short *)(_DAT_0002884c + 0x124) != 0) || (*(short *)(_DAT_0002884c + 0x116) != 0)) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1)) {
    sVar5 = 0;
    sVar6 = sVar5;
  }
  if (0 < sVar5) {
    *(undefined2 *)(puVar13 + -2) = 0;
    *(undefined4 *)(puVar13 + -6) = 0x10003;
    *(undefined4 *)(puVar13 + -10) = 0x7d2;
    sVar3 = func_0x00002ad0();
    if (sVar3 == 1) {
      *(undefined2 *)(puVar13 + -2) = 0;
      *(short *)(puVar13 + -4) = sVar5;
      *(undefined2 *)(puVar13 + -6) = 1;
      *(undefined4 *)(puVar13 + -10) = 0x7e6;
      sVar3 = func_0x00002ad0();
      sVar5 = 0;
      for (sVar6 = 0; sVar6 < 0x16; sVar6 = sVar6 + 1) {
        iVar7 = sVar6 * 0x1e + _DAT_0002884c;
        if (*(char *)(iVar7 + 0xd28) == '\0') {
          puVar8 = (undefined2 *)(iVar7 + 0xd30);
          sVar4 = 0xe;
          do {
            puVar12 = puVar13;
            puVar8 = puVar8 + -1;
            *(undefined2 *)(puVar12 + -2) = *puVar8;
            sVar4 = sVar4 + -1;
            puVar13 = puVar12 + -2;
          } while (sVar4 != -1);
          *(undefined4 *)(puVar12 + -6) = 0x818;
          sVar4 = func_0x00004968();
          puVar13 = puVar12 + 0x1c;
          if (((sVar4 != 0) && ((7 < sVar6 || (sVar6 == *(short *)(_DAT_0002884c + 0x110))))) &&
             (sVar5 = sVar5 + 1, sVar5 == sVar3)) break;
        }
      }
      *param_1 = sVar6;
      return 0;
    }
  }
  if ((sVar5 < 1) && (0 < sVar6)) {
    *(undefined2 *)(puVar13 + -2) = 0;
    *(undefined4 *)(puVar13 + -6) = 0x10003;
    *(undefined4 *)(puVar13 + -10) = 0x862;
    sVar5 = func_0x00002ad0();
    if (sVar5 == 1) {
      sVar6 = 10000;
      sVar3 = 0;
      for (sVar5 = 0; sVar5 < *(short *)(_DAT_0002884c + 0x810); sVar5 = sVar5 + 1) {
        *(short *)(puVar13 + -2) = sVar5;
        *(undefined4 *)(puVar13 + -6) = 0x87e;
        sVar4 = FUN_000009ae();
        if (sVar4 != 0) {
          *(int *)(puVar13 + -4) =
               (int)*(short *)(sVar5 * 0x20 + _DAT_0002884c + 0x812) -
               (int)*(short *)(_DAT_00028854 +
                              *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c +
                                        0x1146) * 0x16);
          *(undefined4 *)(puVar13 + -8) = 0x8c4;
          sVar4 = func_0x000076d8();
          *(int *)(puVar13 + -8) =
               (int)*(short *)(sVar5 * 0x20 + _DAT_0002884c + 0x814) -
               (int)*(short *)(_DAT_00028854 + 2 +
                              *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c +
                                        0x1146) * 0x16);
          *(undefined4 *)(puVar13 + -0xc) = 0x906;
          local_8 = func_0x000076d8();
          local_6 = sVar4;
          if (local_8 < sVar4) {
            psVar9 = &local_6;
          }
          else {
            psVar9 = &local_8;
          }
          if (*psVar9 < sVar6) {
            sVar6 = *psVar9;
            sVar3 = sVar5;
          }
        }
      }
      *param_1 = sVar3;
      return 1;
    }
  }
  if (bVar1) {
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 600) {
      *(undefined2 *)(puVar13 + -2) = 0xffff;
      *(undefined4 *)(puVar13 + -6) = 0x10002;
      *(undefined4 *)(puVar13 + -10) = 0x972;
      sVar5 = func_0x00002ad0();
      if (sVar5 == 0) goto LAB_00000990;
    }
    *(undefined2 *)(puVar13 + -2) = 2;
    *(undefined4 *)(puVar13 + -6) = 0x10003;
    *(undefined4 *)(puVar13 + -10) = 0x988;
    sVar5 = func_0x00002ad0();
    *param_1 = sVar5;
    uVar2 = 3;
  }
  else {
LAB_00000990:
    *(undefined2 *)(puVar13 + -2) = 1000;
    *(undefined4 *)(puVar13 + -6) = 0x203e8;
    *(undefined4 *)(puVar13 + -10) = 0x9a0;
    sVar5 = func_0x00002ad0();
    *param_1 = sVar5;
    uVar2 = 2;
  }
  return uVar2;
}



// Function: FUN_000009ae at 000009ae
// Size: 174 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000009ae(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1._0_2_ * 0x20 + _DAT_0002884c;
  if (*(short *)(iVar2 + 0x82e) == 0) {
    uVar1 = 0;
  }
  else if ((1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU) &
           (int)*(short *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x830)) == 0) {
    if (*(char *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\0') {
      uVar1 = 0;
    }
    else if (*(char *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      uVar1 = 0;
    }
    else if ((*(byte *)(*(short *)(iVar2 + 0x814) * 0xe0 + _DAT_00028850 + 1 +
                       *(short *)(iVar2 + 0x812) * 2) & 0x40) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00000a5c at 00000a5c
// Size: 510 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a5c(undefined4 param_1)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  if (param_1._0_2_ == 0) {
    *(undefined1 *)(param_1._2_2_ * 0x1e + _DAT_0002884c + 0xd28) = 3;
    *(undefined2 *)(param_1._2_2_ * 0x1e + _DAT_0002884c + 0xd2a) =
         *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146);
    func_0x00007460();
  }
  else if (param_1._0_2_ == 1) {
    puVar1 = (ushort *)(param_1._2_2_ * 0x20 + _DAT_0002884c + 0x830);
    *puVar1 = (ushort)(1 << ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU)) | *puVar1;
    if (((*(short *)(_DAT_0002884c + 0x15a) != 0) && (_DAT_000276e4 == 0)) ||
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) {
      iVar2 = param_1._2_2_ * 0x20 + _DAT_0002884c;
      uVar6 = *(undefined2 *)(iVar2 + 0x812);
      func_0x000049d8(*(undefined2 *)(iVar2 + 0x814));
      func_0x000047a8();
      func_0x00002938(uVar6);
    }
  }
  else if (param_1._0_2_ == 2) {
    iVar2 = (int)param_1._2_2_ +
            (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186);
    if (30000 < iVar2) {
      iVar2 = 30000;
    }
    *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) = (short)iVar2;
    func_0x00007488();
  }
  else if (param_1._0_2_ == 3) {
    _DAT_00027ed0 = FUN_0000000c();
    for (sVar3 = 0; sVar3 < param_1._2_2_; sVar3 = sVar3 + 1) {
      func_0x000049c8(*(undefined2 *)
                       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146)
                        * 0x16 + _DAT_00028854));
    }
  }
  puVar4 = (undefined2 *)
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146) * 0x16 +
           _DAT_00028854);
  iVar2 = (short)*(char *)(puVar4 + 5) * 0x14 + _DAT_0002884c + 0x224;
  uVar6 = *puVar4;
  uVar5 = *(undefined2 *)(_DAT_0002884c + 0x110);
  func_0x00006e50();
  func_0x000074a8(*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146) *
                  0x16 + (short)_DAT_00028854,uVar5,uVar6,(short)((uint)iVar2 >> 0x10));
  return;
}



// Function: FUN_00000c5a at 00000c5a
// Size: 3062 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000c5a(undefined4 param_1)

{
  undefined4 uVar1;
  short *psVar2;
  char *pcVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
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
  undefined2 extraout_A0w_09;
  undefined2 extraout_A0w_10;
  undefined2 extraout_A0w_11;
  undefined2 extraout_A0w_12;
  undefined2 extraout_A0w_13;
  undefined2 extraout_A0w_14;
  undefined2 extraout_A0w_15;
  undefined2 extraout_A0w_16;
  undefined2 extraout_A0w_17;
  undefined2 extraout_A0w_18;
  undefined2 extraout_A0w_19;
  undefined2 extraout_A0w_20;
  undefined2 extraout_A0w_21;
  undefined2 extraout_A0w_22;
  int iVar8;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar7 = 0;
  bVar4 = false;
  iVar8 = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c;
  local_10 = *(undefined4 *)(iVar8 + 0x1142);
  uVar1 = *(undefined4 *)(iVar8 + 0x1146);
  local_8 = *(undefined4 *)(iVar8 + 0x114a);
  local_c = uVar1;
  if ((int)*(short *)(_DAT_0002884c + 0x110) !=
      (int)*(char *)(_DAT_00028854 + 5 + *(short *)(iVar8 + 0x1146) * 0x16)) {
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      func_0x00002ad8(1);
      func_0x00002ad8(0,extraout_A0w);
      func_0x00002b68(extraout_A0w_00);
    }
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
    goto LAB_00001840;
  }
  local_c._2_2_ = (short)uVar1;
  local_c._0_2_ = (short)((uint)uVar1 >> 0x10);
  switch(param_1._0_2_) {
  case 0:
    for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
      if (local_c._0_2_ * 0x16 + _DAT_00028854 == *(int *)(&DAT_0002866c + sVar5 * 4)) {
        bVar4 = true;
        break;
      }
    }
    if (bVar4) {
      if ((local_10._2_2_ == 3) && ((int)DAT_0002877e == (int)local_c._2_2_)) {
        sVar5 = 0;
        for (sVar6 = 0; (int)sVar6 < (int)DAT_0002868c; sVar6 = sVar6 + 1) {
          if ((&DAT_0002872e)[sVar6] == '\0') {
            sVar5 = sVar5 + 1;
          }
        }
        psVar2 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114c);
        *psVar2 = sVar5 + *psVar2;
        iVar8 = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c;
        if (*(short *)(iVar8 + 0x114a) <= *(short *)(iVar8 + 0x114c)) {
          sVar7 = 1;
        }
      }
      else if (local_10._2_2_ == 2) {
        for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868c; sVar5 = sVar5 + 1) {
          if (((&DAT_0002872e)[sVar5] == '\0') &&
             ((int)(char)(&DAT_000286b6)[sVar5] == (int)local_c._2_2_)) {
            sVar7 = 1;
            break;
          }
        }
      }
      else if (local_10._2_2_ == 0) {
        for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868c; sVar5 = sVar5 + 1) {
          if (((&DAT_0002872e)[sVar5] == '\0') &&
             (local_c._2_2_ * 0x16 + _DAT_00028854 == *(int *)(&DAT_000285ec + sVar5 * 4))) {
            sVar7 = 1;
            break;
          }
        }
      }
    }
    break;
  case 1:
    for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
      if (local_c._0_2_ * 0x16 + _DAT_00028854 == *(int *)(&DAT_0002866c + sVar5 * 4)) {
        bVar4 = true;
        break;
      }
    }
    if ((((local_10._2_2_ == 5) || (local_10._2_2_ == 4)) &&
        ((int)*(char *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15d9) ==
         (int)*(short *)(_DAT_0002884c + 0x110))) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n')) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_17);
        func_0x00002b68(extraout_A0w_18);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    if (((bVar4) && (local_10._2_2_ == 6)) &&
       (psVar2 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x114c),
       *psVar2 = param_1._2_2_ + *psVar2,
       iVar8 = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c,
       *(short *)(iVar8 + 0x114a) <= *(short *)(iVar8 + 0x114c))) {
      sVar7 = 1;
    }
    break;
  case 2:
    for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
      if (local_c._0_2_ * 0x16 + _DAT_00028854 == *(int *)(&DAT_0002866c + sVar5 * 4)) {
        bVar4 = true;
        break;
      }
    }
    if (((local_10._2_2_ == 5) &&
        (*(char *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f')) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) != '\n')) {
      iVar8 = (int)local_c._0_2_;
      sVar5 = func_0x00004938(*(undefined2 *)(iVar8 * 0x16 + _DAT_00028854 + 2));
      uVar1 = local_c;
      if (sVar5 == local_c._2_2_) {
        if (!bVar4) {
          *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
          if ((_DAT_00028952 == 0) &&
             (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) {
            func_0x00002ad8(1);
            func_0x00002ad8(0,extraout_A0w_19);
            func_0x00002b68(extraout_A0w_20);
          }
          goto LAB_00001840;
        }
        sVar7 = 1;
      }
    }
    local_c = uVar1;
    uVar1 = local_c;
    if ((local_10._2_2_ == 4) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) != '\n')) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_21);
        func_0x00002b68(extraout_A0w_22);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    break;
  case 3:
    if (local_10._2_2_ == 1) {
      iVar8 = local_c._2_2_ * 0x1e + _DAT_0002884c;
      pcVar3 = (char *)(iVar8 + 0xd28);
      if ((*pcVar3 == '\x03') && (*(short *)(iVar8 + 0xd2a) == local_c._0_2_)) {
        *pcVar3 = '\0';
        func_0x00007460();
        sVar7 = 1;
        uVar1 = local_c;
      }
    }
    break;
  case 4:
    for (sVar5 = 0; (int)sVar5 < (int)DAT_0002868d; sVar5 = sVar5 + 1) {
      if (local_c._0_2_ * 0x16 + _DAT_00028854 == *(int *)(&DAT_0002866c + sVar5 * 4)) {
        bVar4 = true;
        break;
      }
    }
    if (((local_10._2_2_ == 4) &&
        ((int)*(char *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15d9) ==
         (int)*(short *)(_DAT_0002884c + 0x110))) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n')) {
      if (!bVar4) {
        *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
        if ((_DAT_00028952 == 0) &&
           (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          func_0x00002ad8(1);
          func_0x00002ad8(0,extraout_A0w_13);
          func_0x00002b68(extraout_A0w_14);
        }
        goto LAB_00001840;
      }
      sVar7 = 1;
    }
    if (((local_10._2_2_ == 5) &&
        ((int)*(char *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15d9) ==
         (int)*(short *)(_DAT_0002884c + 0x110))) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n')) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_15);
        func_0x00002b68(extraout_A0w_16);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    break;
  case 0xffff:
    if ((local_10._2_2_ == 4) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) != '\n')) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_01);
        func_0x00002b68(extraout_A0w_02);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    if ((local_10._2_2_ == 5) &&
       (*(char *)((*(uint *)(*(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) != '\n')) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_03);
        func_0x00002b68(extraout_A0w_04);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    if (((local_10._2_2_ == 5) || (local_10._2_2_ == 4)) &&
       ((int)*(char *)(local_c._2_2_ * 0x42 + _DAT_0002884c + 0x15d9) ==
        (int)*(short *)(_DAT_0002884c + 0x110))) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_05);
        func_0x00002b68(extraout_A0w_06);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    if ((local_10._2_2_ == 0) && (*(char *)(_DAT_00028854 + 4 + local_c._2_2_ * 0x16) != '\x1c')) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_07);
        func_0x00002b68(extraout_A0w_08);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    if ((local_10._2_2_ == 3) && (*(short *)(local_c._2_2_ * 2 + _DAT_0002884c + 0x138) == 0)) {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_09);
        func_0x00002b68(extraout_A0w_10);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
    if ((local_10._2_2_ == 1) && (*(char *)(local_c._2_2_ * 0x1e + _DAT_0002884c + 0xd28) == '\0'))
    {
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0w_11);
        func_0x00002b68(extraout_A0w_12);
      }
      *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
      goto LAB_00001840;
    }
  }
  local_c = uVar1;
  if (sVar7 != 0) {
    *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) = 0;
    FUN_0000069e((short)&local_12);
    FUN_00000a5c(local_12);
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      func_0x000029e8();
      FUN_00000098(local_12);
    }
  }
LAB_00001840:
  func_0x00007458();
  return sVar7;
}



