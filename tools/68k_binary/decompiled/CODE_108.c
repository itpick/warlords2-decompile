// Warlords II - Decompiled 68k Code
// Segment: CODE_108
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000000c(undefined4 param_1)

{
  short sVar1;
  short *psVar2;
  short local_8;
  short local_6;
  
  if (((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 0) &&
      (*(short *)(param_1._2_2_ * 2 + _DAT_0002884c + 0xd0) == 0)) &&
     (*(short *)(_DAT_00028978 + 0x42) != 0)) {
    local_8 = 1;
    local_6 = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar2 = &local_8;
    }
    else {
      psVar2 = &local_6;
    }
    if (*psVar2 < 10) {
      if (param_1._0_2_ == *(short *)(_DAT_00028978 + 0x46)) {
        return 0;
      }
      sVar1 = func_0x00003c78();
      if (sVar1 < 200) {
        FUN_00000484(0);
      }
      else {
        FUN_00000596();
      }
      return 1;
    }
  }
  return 0;
}



// Function: FUN_000000c4 at 000000c4
// Size: 326 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000c4(undefined4 param_1)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  
  bVar2 = false;
  if ((*(short *)(_DAT_0002884c + 0x11e) != 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) != 0)) {
    sVar3 = (short)DAT_0002868d;
    while (sVar1 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar1;
      if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1146) * 0x16 +
          _DAT_00028854 == *(int *)(sVar1 * 4 + 0x2866c)) {
        bVar2 = true;
      }
    }
    if ((bVar2) &&
       (((sVar3 = *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1144),
         sVar3 == 4 || (sVar3 == 5)) &&
        (sVar3 = func_0x00004938(param_1),
        sVar3 == *(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148))))) {
      *(short *)(_DAT_00028978 + 0x4a) = *(short *)(_DAT_00028978 + 0x4a) + 1;
      *(undefined2 *)(_DAT_00028978 + 0x46) = 0xffff;
      if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1144) == 5) {
        FUN_00000484(CONCAT22(sVar3,1));
        if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) != 0) {
          func_0x00002878(0x20000);
        }
      }
      else if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) != 0) {
        func_0x00002878(0x40000);
      }
    }
  }
  return;
}



// Function: FUN_00000484 at 00000484
// Size: 274 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000484(undefined4 param_1)

{
  short sVar1;
  short sVar3;
  undefined4 uVar2;
  short sVar4;
  short sVar5;
  byte abStackY_8010 [6];
  byte abStackY_800a [32712];
  byte abStack_10 [6];
  byte abStack_a [6];
  
  sVar3 = func_0x00003c78();
  if (param_1._2_2_ == 0) {
    sVar5 = 0;
    func_0x00002d78((uint)param_1._0_2_ << 0x10,(short)abStack_a,(short)abStack_10);
    sVar4 = 6;
    while (sVar1 = sVar4 + -1, sVar4 != 0) {
      sVar4 = sVar1;
      if (((abStack_a[sVar1] != 0xff) &&
          ((int)*(char *)((short)(ushort)abStack_a[sVar1] * 0x42 + _DAT_0002884c + 0x15d9) ==
           (int)*(short *)(_DAT_0002884c + 0x110))) && (abStack_10[sVar1] < 0x2d)) {
        sVar5 = sVar5 + 1;
      }
    }
    if (2 < sVar5) {
      return 0xffffffff;
    }
  }
  if ((sVar3 < 900) && (*(short *)(_DAT_0002884c + 0x114) != 0)) {
    func_0x000076d0(0x278a8,0x5ed6,param_1._0_2_ * 0x42 + (short)_DAT_0002884c + 0x15c8);
    func_0x00002c30(0x278a8);
    func_0x00007548();
    uVar2 = FUN_000008e2(*(undefined4 *)((short)param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4));
  }
  else {
    FUN_00000596();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: FUN_00000596 at 00000596
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000596(undefined4 param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  
  sVar2 = func_0x00003c78();
  bVar4 = *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xc0) != 2;
  bVar1 = *(byte *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f3);
  if ((bVar1 != 0xf) && (*(short *)((uint)bVar1 * 2 + _DAT_0002884c + 0xd0) == 0)) {
    bVar4 = true;
  }
  sVar3 = func_0x00002ad0(2);
  if ((sVar3 != 0) && (899 < sVar2)) {
    bVar4 = true;
  }
  if (bVar4) {
    if (sVar2 == 0) {
      FUN_00000674();
    }
    else {
      func_0x000076d0(0x78a8,0x5ec2,(short)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c8));
      func_0x00002c30(0x278a8);
      func_0x00007540(CONCAT22(*(undefined2 *)(_DAT_0002884c + 0x110),param_1._0_2_));
    }
  }
  return;
}



// Function: FUN_00000674 at 00000674
// Size: 210 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000674(undefined4 param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  
  sVar2 = func_0x00003c80();
  bVar4 = *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xc0) != 2;
  bVar1 = *(byte *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f3);
  if ((bVar1 != 0xf) && (*(short *)((uint)bVar1 * 2 + _DAT_0002884c + 0xd0) == 0)) {
    bVar4 = true;
  }
  sVar3 = func_0x00002ad0(2);
  if ((sVar3 != 0) && (299 < sVar2)) {
    bVar4 = true;
  }
  if ((bVar4) && (sVar2 != 0)) {
    func_0x000076d0(0x78a8,0x5eac,(short)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c8));
    func_0x00002c30(0x278a8);
    func_0x00007538(CONCAT22(*(undefined2 *)(_DAT_0002884c + 0x110),param_1._0_2_));
  }
  return;
}



// Function: FUN_00000746 at 00000746
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000746(undefined2 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int extraout_A0;
  short local_8 [2];
  
  sVar3 = 0;
  local_8[0] = *(short *)(_DAT_00028978 + 0x20);
  local_8[1] = 1;
  if (*(short *)(_DAT_00028978 + 0x20) < 1) {
    psVar5 = local_8 + 1;
  }
  else {
    psVar5 = local_8;
  }
  sVar1 = *psVar5;
  sVar4 = sVar1;
  while (sVar2 = sVar4 + -1, sVar4 != 0) {
    func_0x00002c28(param_1);
    sVar4 = sVar2;
    _DAT_00028906 = extraout_A0;
    if (*(short *)(extraout_A0 + 2) == 0) {
      sVar3 = sVar3 + 1;
    }
  }
  return CONCAT22(sVar1 >> 0xf,(short)((sVar3 * 100) / (int)sVar1));
}



// Function: FUN_000007be at 000007be
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000007be(undefined4 param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short *psVar5;
  short local_6;
  
  sVar2 = FUN_00000746();
  uVar1 = *_DAT_000288ac;
  sVar3 = (short)*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
  if ((sVar3 == 0xf) ||
     ((byte)((uint)(*(int *)(sVar3 * 8 + _DAT_0002884c + 0x1582 +
                            (int)*(short *)(_DAT_0002884c + 0x110)) << 6) >> 0x1e) == 2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((*(short *)(_DAT_0002884c + 0x116) != 0) &&
     (*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0)) {
    bVar4 = true;
  }
  if (((sVar3 != 0xf) && (*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0)) &&
     (sVar3 = func_0x00002ad0(4), sVar3 == 0)) {
    bVar4 = true;
  }
  if ((!bVar4) || (sVar2 < 0x33)) {
    func_0x00002e10(uVar1,_DAT_000288fa);
    local_6 = FUN_0000091a();
    if (local_6 == -1) {
      psVar5 = (short *)&param_1;
    }
    else {
      psVar5 = &local_6;
    }
    param_1._0_2_ = *psVar5;
  }
  return param_1._0_2_;
}



// Function: FUN_000008e2 at 000008e2
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008e2(void)

{
  func_0x00002e10();
  FUN_0000091a();
  return;
}



// Function: FUN_0000091a at 0000091a
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0000091a(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short local_6;
  
  func_0x00002e40();
  local_6 = -1;
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar6 = -1;
LAB_00000ae8:
  do {
    sVar2 = sVar5 + -1;
    if (sVar5 == 0) {
      func_0x00002e48();
      return sVar6;
    }
    sVar5 = sVar2;
  } while ((((param_2._0_2_ != 0) &&
            ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) ==
             (int)*(short *)(_DAT_0002884c + 0x110))) ||
           (*(char *)((*(uint *)(*(short *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                 _DAT_00028850 +
                                *(short *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                      _DAT_0002884c + 0x711) != '\n')) ||
          ((sVar2 == *(short *)(_DAT_00028978 + 0x46) ||
           ((*(byte *)(sVar2 + _DAT_00028978 + 0x11e) & 1) != 0))));
  cVar1 = *(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9);
  if ((cVar1 != '\x0f') && ((int)cVar1 != (int)*(short *)(_DAT_0002884c + 0x110)))
  goto code_r0x000009fc;
  goto LAB_00000a3c;
code_r0x000009fc:
  if ((byte)((uint)(*(int *)((short)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) * 8 +
                             _DAT_0002884c + 0x1582 + (int)*(short *)(_DAT_0002884c + 0x110)) << 6)
            >> 0x1e) == 2) {
LAB_00000a3c:
    sVar3 = func_0x00002e00();
    if (param_1._0_2_ != -1) {
      if ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)*(short *)(_DAT_0002884c + 0x110)) {
        sVar4 = 0xf;
        sVar3 = sVar3 + 0x14;
      }
      else {
        sVar4 = FUN_00000746(*(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6));
      }
      if ((sVar4 < 0x33) || (_DAT_000288f6 <= sVar3)) {
        if (sVar4 < 0xb) {
          sVar3 = -2;
        }
        else {
          sVar3 = sVar4 * 5 + (100 - sVar3);
        }
      }
      else {
        sVar3 = sVar4 * 10 + (400 - sVar3);
      }
      if (local_6 < sVar3) {
        sVar6 = sVar2;
        local_6 = sVar3;
      }
    }
  }
  goto LAB_00000ae8;
}



// Function: FUN_00000b02 at 00000b02
// Size: 734 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b02(undefined4 param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined4 extraout_A0_01;
  short *psVar4;
  short local_8 [2];
  
  _DAT_000287ca = param_1._0_2_;
  _DAT_000287cc = param_1._2_2_;
  if (_DAT_000288ac != 0) {
    (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x118))();
    uVar3 = (ushort)(byte)((uint)*(undefined4 *)
                                  (param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18
                          );
    if (((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) << 3) >> 0x1b ==
         0) && (*(short *)(*(char *)((short)uVar3 + _DAT_0002884c + 0x711) * 2 + 0x15cbe) == 7)) {
      func_0x00002a20();
    }
    else if (((_DAT_000288fa == 2) ||
             (0 < *(short *)(*(char *)((short)uVar3 + _DAT_0002884c + 0x711) * 2 + 0x15cbe))) ||
            ((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) << 3) >>
             0x1b != 0)) {
      sVar1 = func_0x00004938(param_1);
      if (((*(short *)(_DAT_0002884c + 0x11c) == 0) ||
          (uVar3 = (ushort)((uint)(*(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 +
                                           param_1._0_2_ * 2) << 4) >> 0x1c), uVar3 == 0xf)) ||
         (((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                                 (int)(short)uVar3) << 6) >> 0x1e) != 0 &&
          ((sVar1 < 1 ||
           ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                                  (int)(short)uVar3) << 6) >> 0x1e) != 1)))))) {
        func_0x00003a78();
        if (((_DAT_000288f4 == 0) || (0 < _DAT_000288f6)) &&
           ((_DAT_000288f4 != 0 || ('\0' < *(char *)(_DAT_000288ac + 7))))) {
          uVar3 = (ushort)(byte)((uint)*(undefined4 *)
                                        (param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2)
                                >> 0x18);
          local_8[0] = *(short *)(*(char *)((short)uVar3 + _DAT_0002884c + 0x711) * 2 + 0x15cbe);
          local_8[1] = 2;
          if (local_8[0] < 2) {
            psVar4 = local_8 + 1;
          }
          else {
            psVar4 = local_8;
          }
          _DAT_000287c8 = *psVar4;
          if (((int)*(short *)(_DAT_0002884c + 0x110) !=
               (uint)(*(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) << 4)
               >> 0x1c) &&
             ((*(char *)((short)uVar3 + _DAT_0002884c + 0x711) == '\n' ||
              ((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x10) != 0
              )))) {
            FUN_00000de0();
          }
        }
        else {
          func_0x000073f8();
          func_0x000048d0();
        }
      }
      else {
        func_0x00002ad8(0x8d0004);
        func_0x00002ad8(0x8d0003,extraout_A0);
        func_0x00002ad8(2,extraout_A0_00);
        func_0x00002ad8(1,extraout_A0w);
        func_0x00002ad8(0x8d0000,extraout_A0w_00);
        cVar2 = func_0x000027d8(extraout_A0_01);
        if (cVar2 == '\0') {
          FUN_000011d6();
        }
        else {
          FUN_00000ef8();
        }
      }
    }
    else {
      func_0x00002a20();
    }
  }
  return;
}



// Function: FUN_00000de0 at 00000de0
// Size: 280 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000de0(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined1 auStack_c [8];
  
  sVar2 = func_0x00002850(CONCAT22(param_2,param_3._0_2_));
  if (sVar2 != 0) {
    func_0x00002d20();
  }
  func_0x00002d10();
  func_0x00002d50();
  if (_DAT_0002879a != 0) {
    *(byte *)(_DAT_0002879a + 0x30) =
         (byte)*(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x15b68) |
         *(byte *)(_DAT_0002879a + 0x30);
  }
  uVar3 = func_0x00002d18();
  func_0x00002d08();
  func_0x000071f0(auStack_c);
  puVar6 = auStack_c;
  uVar7 = _DAT_00027318;
  func_0x000029c8((short)puVar6);
  puVar4 = auStack_c;
  uVar5 = _DAT_00027322;
  func_0x000029c8((short)puVar4,(short)((uint)puVar6 >> 0x10),uVar7);
  func_0x00002d38((short)((uint)puVar4 >> 0x10),uVar5);
  func_0x00002d30((short)auStack_c);
  func_0x000074c0();
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar1 + 0x1d8) = uVar3;
  *(undefined2 *)(iVar1 + 0x1da) = param_1._0_2_;
  *(undefined2 *)(iVar1 + 0x1dc) = param_2;
  *(undefined2 *)(iVar1 + 0x1de) = param_3._0_2_;
  func_0x00003e20(iVar1,0x3f1);
  func_0x000029b8((short)auStack_c);
  return;
}



// Function: FUN_00000ef8 at 00000ef8
// Size: 734 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ef8(void)

{
  byte *pbVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_A0w;
  undefined2 uVar6;
  
  uVar4 = (ushort)((uint)(*(int *)(_DAT_000287cc * 0xe0 + _DAT_00028850 + 1 + _DAT_000287ca * 2) <<
                         4) >> 0x1c);
  if (uVar4 != 0xf) {
    if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                              (int)(short)uVar4) << 6) >> 0x1e) == 0) {
      sVar3 = func_0x00002ad0(100);
      func_0x000074a0(sVar3 + 100);
    }
    else if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                                   (int)(short)uVar4) << 6) >> 0x1e) == 1) {
      sVar3 = func_0x00002ad0(0xf);
      func_0x000074a0(sVar3 + 10);
    }
    iVar5 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
    pbVar1 = (byte *)(iVar5 + (short)uVar4);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(iVar5 + (short)uVar4);
    *pbVar1 = *pbVar1 | 2;
    sVar3 = *(short *)(_DAT_0002884c + 0x110);
    iVar5 = (short)uVar4 * 8 + _DAT_0002884c + 0x1582;
    pbVar1 = (byte *)(iVar5 + sVar3);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(iVar5 + sVar3);
    *pbVar1 = *pbVar1 | 2;
    iVar5 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
    pbVar1 = (byte *)(iVar5 + (short)uVar4);
    *pbVar1 = *pbVar1 & 0xf3;
    pbVar1 = (byte *)(iVar5 + (short)uVar4);
    *pbVar1 = *pbVar1 | 8;
    sVar3 = *(short *)(_DAT_0002884c + 0x110);
    iVar5 = (short)uVar4 * 8 + _DAT_0002884c + 0x1582;
    pbVar1 = (byte *)(iVar5 + sVar3);
    *pbVar1 = *pbVar1 & 0xf3;
    pbVar1 = (byte *)(iVar5 + sVar3);
    *pbVar1 = *pbVar1 | 8;
    uVar6 = *(undefined2 *)(_DAT_0002884c + 0x110);
    func_0x00007468();
    func_0x00007468(uVar6);
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      (**(code **)(*_DAT_00027fb4 + 0x268))();
      (**(code **)(*_DAT_00027fbc + 0x268))();
      (**(code **)(*_DAT_00027fc4 + 0x268))();
      (**(code **)(*_DAT_00027fc8 + 0x268))();
      func_0x000048a0(0);
      FUN_00000b02(_DAT_000287cc);
    }
    if ((_DAT_00028952 == 0) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(short *)(_DAT_0002884c + 0x15a) != 0)) {
      func_0x00002ad8(2,(short)(_DAT_0002884c + (short)uVar4 * 0x14));
      func_0x000076d0(0xa8,extraout_A0w);
      func_0x00003e50(0x78a8,CONCAT22(0x14,*(undefined2 *)(_DAT_0002884c + 0x110)));
    }
    func_0x00006e50();
  }
  return;
}



// Function: FUN_000011d6 at 000011d6
// Size: 18 bytes

void FUN_000011d6(void)

{
  func_0x000048a0(0);
  return;
}



