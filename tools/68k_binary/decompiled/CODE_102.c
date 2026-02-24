// Warlords II - Decompiled 68k Code
// Segment: CODE_102
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  if (_DAT_00028950 == 0) {
    func_0x00001e98(0x4b0);
    _DAT_00028950 = 1;
    _DAT_00028974 = extraout_A0;
  }
  if (_DAT_00028952 == 0) {
    func_0x00002d52(_DAT_00028974);
    _DAT_0002897c = extraout_A0_00;
  }
  return;
}



// Function: FUN_00000054 at 00000054
// Size: 150 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000054(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  
  uVar5 = 0;
  iVar3 = FUN_0000000c();
  sVar4 = 6;
  while( true ) {
    uVar2 = (undefined2)((uint)iVar3 >> 0x10);
    sVar1 = sVar4 + -1;
    if (sVar4 == 0) break;
    if (param_1._2_2_ == *(byte *)(param_1._0_2_ * 6 + _DAT_0002897c + (int)sVar1)) {
      uVar5 = 1;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + sVar1) =
           *(undefined1 *)(param_1._0_2_ * 6 + _DAT_0002897c + (int)sVar1);
    }
    iVar3 = 0;
    sVar4 = sVar1;
    if (param_3 != 0) {
      iVar3 = param_1._0_2_ * 6;
      *(undefined1 *)(param_3 + sVar1) = *(undefined1 *)((int)sVar1 + iVar3 + _DAT_0002897c + 600);
    }
  }
  if ((_DAT_00028952 == 0) && (uVar2 = 0, _DAT_00028974 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT22(uVar2,uVar5);
}



// Function: FUN_000000ec at 000000ec
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000000ec(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = *(short *)(_DAT_00028978 + 0x24a);
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    iVar4 = sVar2 * 0x5c + _DAT_00028978;
    sVar3 = sVar2;
    if ((*(short *)(iVar4 + 0x24c) != 0) && (param_1._0_2_ == *(short *)(iVar4 + 0x250))) {
      return 0;
    }
  }
  cVar1 = *(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_);
  if ((cVar1 == '\b') || (cVar1 == '\x05')) {
    return 1;
  }
  if ((param_1._2_2_ != 0) && (cVar1 == '\x06')) {
    return 1;
  }
  return 0;
}



// Function: FUN_00000158 at 00000158
// Size: 106 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000158(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
  sVar1 = *psVar3;
  uVar2 = *(undefined4 *)psVar3;
  if (*(char *)(psVar3 + 2) == '\x1c') {
    func_0x00004950(psVar3,*(undefined4 *)psVar3);
  }
  func_0x00007440(param_1._0_2_ * 0x16 + _DAT_00028854);
  if ((param_1._2_2_ != 0) && (sVar1 != -1)) {
    FUN_000013e6(uVar2);
  }
  return;
}



// Function: FUN_000001c2 at 000001c2
// Size: 1970 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000001c2(int param_1)

{
  ushort *puVar1;
  char *pcVar2;
  char cVar3;
  byte *pbVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  short *psVar10;
  int iVar11;
  short asStackY_100a8 [10];
  short asStackY_10094 [40];
  short asStackY_10044 [32681];
  short local_b6;
  short local_b4 [3];
  short local_ae;
  short local_ac;
  short local_aa;
  short asStack_a8 [8];
  ushort local_98;
  short local_96;
  short local_94 [32];
  short local_54;
  short local_52;
  short local_50;
  char local_4d;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44 [32];
  
  iVar11 = param_1._0_2_ * 0x42 + _DAT_0002884c;
  local_46 = *(short *)(iVar11 + 0x15c4);
  local_48 = *(short *)(iVar11 + 0x15c6);
  sVar6 = -1;
  local_50 = 0;
  local_4a = 0;
  local_96 = 0;
  local_52 = 0;
  local_98 = (ushort)*(byte *)(param_1._0_2_ + _DAT_00028978 + 0x182);
  local_aa = 0;
  if ((param_1 < 0) || (*(short *)(_DAT_0002884c + 0x15c2) <= param_1._0_2_)) {
    return 0;
  }
  sVar7 = 8;
  while (sVar7 != 0) {
    asStack_a8[(short)(sVar7 + -1)] = -1;
    sVar7 = sVar7 + -1;
  }
  pbVar4 = (byte *)(param_1._0_2_ + _DAT_00028978 + 0x11e);
  *pbVar4 = *pbVar4 | 4;
  sVar7 = 0x20;
  while (sVar8 = sVar7 + -1, sVar7 != 0) {
    local_44[sVar8] = -1;
    local_94[sVar8] = -1;
    sVar7 = sVar8;
  }
  *(undefined1 *)(param_1._0_2_ + _DAT_00028978 + 0x182) = 0;
  sVar7 = *(short *)(_DAT_0002884c + 0x182);
  sVar8 = 0;
  while (sVar5 = sVar7 + -1, sVar7 != 0) {
    psVar10 = (short *)(sVar5 * 0x16 + _DAT_00028854);
    sVar7 = sVar5;
    if ((((local_46 <= *psVar10) && ((int)*psVar10 <= local_46 + 1)) && (local_48 <= psVar10[1])) &&
       ((int)psVar10[1] <= local_48 + 1)) {
      if (*(char *)(_DAT_0002884c + 0x111) != *(char *)((int)psVar10 + 5)) {
        FUN_00000158(1);
      }
      pcVar2 = (char *)(param_1._0_2_ + _DAT_00028978 + 0x182);
      *pcVar2 = *pcVar2 + '\x01';
      iVar11 = _DAT_00028854;
      if (((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar5 * 0x16) >> 0x1c) == 1) &&
         ((int)param_1._0_2_ == (uint)(*(int *)(_DAT_00028854 + 0xf + sVar5 * 0x16) << 1) >> 0x19))
      {
        pbVar4 = (byte *)(_DAT_00028854 + 0xe + sVar5 * 0x16);
        *pbVar4 = *pbVar4 & 0xf;
        pbVar4 = (byte *)(iVar11 + 0xf + sVar5 * 0x16);
        *pbVar4 = *pbVar4 & 0x80;
        func_0x00007448(sVar5 * 0x16 + (short)iVar11);
      }
      if ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar5 * 0x16) >> 0x1c) != 0) {
        local_50 = local_50 + 1;
      }
      if ((*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16) == '\x1c') && (local_aa < 8)) {
        asStack_a8[local_aa] = sVar5;
        local_4a = local_4a + 1;
        sVar6 = sVar5;
        local_aa = local_aa + 1;
      }
      if (*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16) * 6) != '\0')
      {
        local_52 = local_52 + 1;
      }
      if (*(char *)(_DAT_00028864 + 4 + (short)*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16) * 6) !=
          '\0') {
        local_96 = local_96 + 1;
      }
      if (sVar8 < 0x20) {
        local_94[sVar8] = sVar5;
        sVar8 = sVar8 + 1;
      }
      else {
        FUN_00000158(0);
      }
    }
  }
  if (sVar6 != -1) {
    _DAT_000288b0 = sVar6 * 0x16 + _DAT_00028854;
    FUN_0000155a(*(undefined2 *)(_DAT_000288b0 + 2));
  }
  if (1 < local_4a) {
    FUN_0000174c((short)asStack_a8);
  }
  pbVar4 = (byte *)(param_1._0_2_ + _DAT_00028978 + 0x11e);
  *pbVar4 = *pbVar4 & 0xcf;
  if (local_4a != 0) {
    pbVar4 = (byte *)(param_1._0_2_ + _DAT_00028978 + 0x11e);
    *pbVar4 = *pbVar4 | 0x20;
  }
  if (local_96 != 0) {
    pbVar4 = (byte *)(param_1._0_2_ + _DAT_00028978 + 0x11e);
    *pbVar4 = *pbVar4 | 0x10;
  }
  if (0x10 < sVar8) {
    local_98 = 0;
    local_50 = 0;
  }
  if ((2 < local_50) && (*(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) != '\a')) {
    return 1;
  }
  if ((((param_1._2_2_ == 0) && (local_4a == 0)) &&
      (local_98 == *(byte *)(param_1._0_2_ + _DAT_00028978 + 0x182))) &&
     (((iVar11 = *(short *)(_DAT_0002884c + 0x110) * 2,
       *(short *)(iVar11 + 0x28810) < *(short *)(iVar11 + 0x28820) &&
       (sVar6 = func_0x00002ad0(6), sVar6 != 0)) &&
      ((*(byte *)((local_48 + 1) * 0xe0 + _DAT_00028850 + 1 + (local_46 + 1) * 2) & 0x10) == 0)))) {
    return 1;
  }
  *(undefined1 *)(param_1._0_2_ + _DAT_00028978 + 0x1e6) = 0;
  cVar3 = *(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_);
  if (((cVar3 == '\x04') || (cVar3 == '\x05')) || (cVar3 == '\b')) {
    sVar6 = FUN_00000974();
    if ((sVar8 < 2) && (sVar8 < sVar6)) {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) = 4;
    }
    else if (sVar8 < sVar6) {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) = 5;
    }
    else {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) = 8;
    }
  }
  local_54 = FUN_00000b4e(sVar8,(short)local_94,(short)local_44);
  if ((param_1._2_2_ == 0) && (8 < *(byte *)(param_1._0_2_ + _DAT_00028978 + 0xba))) {
    local_4d = *(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_);
    if ((local_4d == '\x04') ||
       (((local_4d == '\x05' || (local_4d == '\x06')) || (local_4d == '\b')))) {
      FUN_000010e6((short)((uint)local_44 >> 0x10));
    }
  }
  if (0x18 < sVar8) {
    for (sVar6 = 0x18; sVar6 < sVar8; sVar6 = sVar6 + 1) {
      if (local_44[sVar6] != -1) {
        local_44[sVar6] = -1;
        FUN_00000158(0);
      }
    }
  }
  if (*(short *)(_DAT_0002884c + 0x128) != 0) {
    local_b4[1] = 1;
    local_b4[2] = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar10 = local_b4 + 1;
    }
    else {
      psVar10 = local_b4 + 2;
    }
    if (*psVar10 < 3) goto LAB_00000680;
  }
  if (sVar8 < 2) {
    *(undefined1 *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) = 4;
  }
LAB_00000680:
  sVar6 = 4;
  while (sVar7 = sVar6 + -1, sVar6 != 0) {
    pbVar4 = (byte *)(((int)*(short *)(sVar7 * 2 + 0x15f32) + (int)local_48) * 0xe0 + _DAT_00028850
                      + 1 + ((int)*(short *)(sVar7 * 2 + 0x15f3a) + (int)local_46) * 2);
    *pbVar4 = *pbVar4 & 0xef;
    sVar6 = sVar7;
  }
  if (((*(short *)(_DAT_0002884c + 0x124) != 0) &&
      (*(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) == '\v')) &&
     (*(short *)(_DAT_00028978 + 0x24) < 5)) {
    sVar7 = 2 - (sVar8 - local_52);
    sVar6 = local_52;
    if (0 < sVar7) {
      sVar6 = local_52 - sVar7;
    }
    if (*(short *)(_DAT_0002884c + 0x128) != 0) {
      local_b6 = 1;
      local_b4[0] = *(short *)(_DAT_0002884c + 0x136);
      if (*(short *)(_DAT_0002884c + 0x136) < 2) {
        psVar10 = &local_b6;
      }
      else {
        psVar10 = local_b4;
      }
      if (*psVar10 < 3) {
        sVar6 = 1;
      }
    }
    for (sVar7 = 0; sVar7 < sVar8; sVar7 = sVar7 + 1) {
      if (((0 < sVar6) && (sVar5 = local_44[sVar7], sVar5 != -1)) &&
         (*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + sVar5 * 0x16) * 6) != '\0')
         ) {
        *(short *)(_DAT_00028978 + 0x24) = *(short *)(_DAT_00028978 + 0x24) + 1;
        puVar1 = (ushort *)(_DAT_00028854 + 0xc + sVar5 * 0x16);
        *puVar1 = *puVar1 | 0x20;
        func_0x00002c40(0xffff);
        func_0x00007448(sVar5 * 0x16 + (short)_DAT_00028854);
        local_44[sVar7] = -1;
        sVar6 = sVar6 + -1;
      }
    }
  }
  cVar3 = *(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_);
  if ((cVar3 == '\x03') || (cVar3 == '\x02')) {
    uVar9 = 1;
    local_4c = 8;
  }
  else {
    uVar9 = (ushort)(local_54 == 0);
    local_4c = local_54;
    if (local_54 == 0) {
      local_4c = 8;
    }
  }
  for (sVar6 = 0; sVar6 < sVar8; sVar6 = sVar6 + 1) {
    sVar7 = local_44[sVar6];
    if (sVar7 != -1) {
      if (uVar9 == 0) {
        pcVar2 = (char *)(param_1._0_2_ + _DAT_00028978 + 0x1e6);
        *pcVar2 = *pcVar2 + '\x01';
      }
      local_44[sVar6] = -1;
      iVar11 = param_1._0_2_ * 0x42 + _DAT_0002884c;
      local_ac = *(short *)((short)uVar9 * 2 + 0x15f3a) + *(short *)(iVar11 + 0x15c4);
      local_ae = *(short *)((short)uVar9 * 2 + 0x15f32) + *(short *)(iVar11 + 0x15c6);
      *(short *)(_DAT_00028854 + sVar7 * 0x16) = local_ac;
      *(short *)(_DAT_00028854 + 2 + sVar7 * 0x16) = local_ae;
      *(undefined2 *)(_DAT_00028854 + 0x14 + sVar7 * 0x16) = 0xffff;
      *(undefined2 *)(_DAT_00028854 + 0x12 + sVar7 * 0x16) = 0xffff;
      *(undefined1 *)(_DAT_00028854 + 0x11 + sVar7 * 0x16) = 0;
      iVar11 = _DAT_00028854;
      pbVar4 = (byte *)(_DAT_00028854 + 0xe + sVar7 * 0x16);
      *pbVar4 = *pbVar4 & 0xf1;
      *(char *)(iVar11 + 0x10 + sVar7 * 0x16) = (char)((uint)param_1 >> 0x10);
      puVar1 = (ushort *)(_DAT_00028854 + 0xc + sVar7 * 0x16);
      *puVar1 = *puVar1 & 0xffbf;
      pbVar4 = (byte *)(local_ae * 0xe0 + _DAT_00028850 + 1 + local_ac * 2);
      *pbVar4 = *pbVar4 | 0x10;
      local_4c = local_4c + -1;
      if (local_4c == 0) {
        uVar9 = uVar9 + 1;
        local_4c = 8;
      }
      func_0x00007448(sVar7 * 0x16 + (short)_DAT_00028854);
    }
  }
  FUN_000013e6(*(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6));
  return 1;
}



// Function: FUN_00000974 at 00000974
// Size: 474 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00000974(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  byte abStackY_800c [32704];
  undefined1 auStack_22 [6];
  short local_1c;
  int local_1a;
  short local_16;
  int local_14;
  short local_10;
  short local_e;
  byte abStack_c [7];
  char local_5;
  
  sVar3 = 0;
  sVar7 = 0;
  uVar5 = 2;
  FUN_00000054(0,(short)abStack_c,auStack_22);
  sVar6 = 6;
LAB_00000ae2:
  do {
    do {
      do {
        do {
          sVar1 = sVar6 + -1;
          if (sVar6 == 0) {
            if (sVar7 == 0) {
              if (sVar3 < 2) {
                if (sVar3 == 0) {
                  if (0x14 < *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800)) {
                    sVar3 = FUN_00001c36();
                    if (0x13 < sVar3) {
                      uVar5 = 1;
                    }
                  }
                }
                else {
                  uVar5 = 3;
                }
              }
              else {
                uVar5 = 4;
              }
            }
            else {
              uVar5 = 8;
            }
            return uVar5;
          }
          uVar2 = (ushort)abStack_c[sVar1];
          sVar6 = sVar1;
        } while (uVar2 == 0xff);
        local_5 = *(char *)((short)uVar2 * 0x42 + _DAT_0002884c + 0x15d9);
      } while (local_5 == '\x0f');
    } while ((int)local_5 == (int)*(short *)(_DAT_0002884c + 0x110));
    uVar4 = (ushort)abStack_c[sVar1];
  } while (*(char *)((*(uint *)(*(short *)((short)uVar2 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                _DAT_00028850 +
                               *(short *)((short)uVar4 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18
                     ) + _DAT_0002884c + 0x711) != '\n');
  if (*(short *)(*(char *)((short)uVar4 * 0x42 + _DAT_0002884c + 0x15d9) * 2 + _DAT_0002884c + 0xd0)
      != 0) goto code_r0x00000a50;
  goto LAB_00000a94;
code_r0x00000a50:
  local_10 = (short)*(char *)((short)uVar4 * 0x42 + _DAT_0002884c + 0x15d9);
  local_e = *(short *)(_DAT_0002884c + 0x110);
  if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                            (int)local_10) << 6) >> 0x1e) != 0) {
LAB_00000a94:
    sVar3 = sVar3 + 1;
    local_1c = (short)*(char *)((short)uVar4 * 0x42 + _DAT_0002884c + 0x15d9);
    local_16 = *(short *)(_DAT_0002884c + 0x110);
    local_14 = _DAT_0002884c + 0x1582;
    local_1a = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
    if ((byte)((uint)(*(int *)(local_1a + local_1c) << 6) >> 0x1e) == 2) {
      sVar7 = sVar7 + 1;
    }
  }
  goto LAB_00000ae2;
}



// Function: FUN_00000b4e at 00000b4e
// Size: 1432 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000b4e(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short *psVar12;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (param_1._2_2_ < 0xd) {
    local_c = (short)*(char *)(param_1._2_2_ + 0x15f24);
  }
  else {
    local_c = 8;
  }
  local_12 = 0;
  uVar8 = 0;
  local_a = 0;
  local_1a = 0;
  bVar4 = false;
  if (*(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) == '\a') {
    sVar7 = 0;
    local_14 = 0;
    sVar9 = param_1._2_2_;
    while (sVar3 = sVar9 + -1, sVar9 != 0) {
      sVar10 = *(short *)(param_2 + sVar3 * 2);
      sVar9 = sVar3;
      if (sVar10 != -1) {
        if (*(char *)(_DAT_00028854 + 4 + sVar10 * 0x16) == '\x1c') {
          local_14 = local_14 + 1;
        }
        else {
          iVar11 = sVar10 * 0x16 + _DAT_00028854;
          if ((*(char *)(_DAT_00028864 + (short)*(char *)(iVar11 + 4) * 6) != '\0') &&
             (('\x03' < *(char *)(iVar11 + 8) || (sVar7 == 0)))) {
            sVar7 = sVar7 + 1;
          }
        }
      }
    }
    if ((sVar7 != 0) && (local_14 != 0)) {
      sVar7 = local_14 + sVar7;
    }
    if (((3 < sVar7) && (param_1._2_2_ < 0x11)) || ((2 < sVar7 && (param_1._2_2_ < 9)))) {
      bVar4 = true;
    }
    sVar7 = 4;
    while (sVar9 = sVar7 + -1, sVar7 != 0) {
      iVar11 = sVar9 * 0x5c + _DAT_00028978;
      sVar7 = sVar9;
      if ((*(short *)(iVar11 + 0x24c) != 0) && (*(short *)(iVar11 + 0x250) == param_1._0_2_)) {
        if ((*(ushort *)(iVar11 + 0x2a6) & 0x10) == 0) {
          if ((*(ushort *)(sVar9 * 0x5c + _DAT_00028978 + 0x2a6) & 8) == 0) {
            local_a = *(short *)(sVar9 * 0x5c + _DAT_00028978 + 0x2a4);
          }
          else {
            local_a = 0x10;
          }
        }
        else {
          local_a = 0xc;
        }
        if ((*(ushort *)(sVar9 * 0x5c + _DAT_00028978 + 0x2a6) & 0x20) != 0) {
          bVar4 = true;
        }
      }
    }
  }
  uVar6 = *(byte *)(param_1._0_2_ + _DAT_00028978 + 0xba) / 3;
  sVar7 = 3 - (short)uVar6;
  if (((0 < sVar7) && (sVar7 < param_1._2_2_)) &&
     (uVar6 = (uint)sVar7, (int)param_1._2_2_ - (int)local_c < (int)uVar6)) {
    uVar6 = (uint)sVar7;
    local_c = param_1._2_2_ - sVar7;
  }
  do {
    local_18 = -1;
    local_6 = -1;
    local_16 = -1;
    local_8 = -1;
    sVar7 = param_1._2_2_;
    while( true ) {
      uVar5 = (undefined2)(uVar6 >> 0x10);
      uVar6 = CONCAT22(uVar5,sVar7);
      sVar9 = sVar7 + -1;
      if (sVar7 == 0) break;
      sVar3 = *(short *)(param_2 + sVar9 * 2);
      sVar7 = sVar9;
      if (sVar3 != -1) {
        sVar10 = (short)*(char *)(_DAT_00028854 + 8 + sVar3 * 0x16);
        if (local_12 < local_c) {
          cVar1 = *(char *)(_DAT_00028854 + 4 + sVar3 * 0x16);
          cVar2 = *(char *)(_DAT_00028864 + 5 + (short)cVar1 * 6);
          if (((uVar8 & 1) == 0) && (cVar1 == '\x1c')) {
            sVar10 = sVar10 + 1000;
          }
          else {
            iVar11 = sVar3 * 0x16 + _DAT_00028854;
            if ((int)local_a <= (int)*(char *)(iVar11 + 6)) {
              if (((uVar8 & 0x10) == 0) &&
                 (*(char *)(_DAT_00028864 + (short)*(char *)(iVar11 + 4) * 6) != '\0')) {
                sVar10 = sVar10 + 900;
              }
              else if (!bVar4) {
                if (((uVar8 & 2) == 0) && (cVar2 == '\x02')) {
                  sVar10 = sVar10 + 800;
                }
                else if (((uVar8 & 4) == 0) && (cVar2 == '\x03')) {
                  sVar10 = sVar10 + 700;
                }
                else if (((uVar8 & 0x80) == 0) &&
                        (*(char *)(_DAT_00028864 + 4 +
                                  (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) * 6) != '\0'))
                {
                  sVar10 = sVar10 + 600;
                }
                else if (((uVar8 & 8) == 0) && (cVar2 == '\x01')) {
                  sVar10 = sVar10 + 500;
                }
                else if (((uVar8 & 0x20) == 0) &&
                        (*(char *)(_DAT_00028864 + 1 +
                                  (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) * 6) != '\0'))
                {
                  sVar10 = sVar10 + 400;
                }
                else if (((uVar8 & 0x40) == 0) &&
                        (*(char *)(_DAT_00028864 + 2 +
                                  (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) * 6) != '\0'))
                {
                  sVar10 = sVar10 + 300;
                }
              }
            }
          }
        }
        else {
          uVar8 = 0xfff;
        }
        if (((uVar8 & 1) != 0) && (*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) == '\x1c')) {
          sVar10 = 1;
        }
        if (((uVar8 & 0x80) != 0) &&
           (*(char *)(_DAT_00028864 + 4 + (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) * 6) !=
            '\0')) {
          sVar10 = 2;
        }
        uVar6 = (uint)local_a;
        if ((int)*(char *)(_DAT_00028854 + 6 + sVar3 * 0x16) < (int)uVar6) {
LAB_00000f40:
          if (local_16 < sVar10) {
            local_16 = sVar10;
            local_8 = sVar9;
          }
        }
        else {
          if (bVar4) {
            cVar1 = *(char *)(_DAT_00028854 + 4 + sVar3 * 0x16);
            uVar6 = (short)cVar1 * 6;
            if ((*(char *)(_DAT_00028864 + uVar6) == '\0') && (cVar1 != '\x1c')) goto LAB_00000f40;
          }
          if (local_18 < sVar10) {
            local_18 = sVar10;
            local_6 = sVar9;
          }
        }
      }
    }
    if ((local_8 == -1) && (local_6 == -1)) {
      local_1e = local_1a;
      local_1c = local_c;
      if (local_c < local_1a) {
        psVar12 = &local_1c;
      }
      else {
        psVar12 = &local_1e;
      }
      return CONCAT22(uVar5,*psVar12);
    }
    if (uVar8 != 0xfff) {
      if (local_6 == -1) {
        sVar7 = *(short *)(param_2 + local_8 * 2);
      }
      else {
        sVar7 = *(short *)(param_2 + local_6 * 2);
      }
      uVar6 = sVar7 * 0x16;
      cVar1 = *(char *)(_DAT_00028854 + 4 + uVar6);
      cVar2 = *(char *)(_DAT_00028864 + 5 + (short)cVar1 * 6);
      if (cVar1 == '\x1c') {
        uVar8 = uVar8 | 1;
      }
      else {
        if (cVar2 == '\x02') {
          uVar8 = uVar8 | 2;
        }
        if (cVar2 == '\x03') {
          uVar8 = uVar8 | 4;
        }
        if (*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16) * 6) !=
            '\0') {
          uVar8 = uVar8 | 0x10;
        }
        if (*(char *)(_DAT_00028864 + 4 + (short)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16) * 6) !=
            '\0') {
          uVar8 = uVar8 | 0x80;
        }
        if (cVar2 == '\x01') {
          uVar8 = uVar8 | 8;
        }
        if (*(char *)(_DAT_00028864 + 1 + (short)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16) * 6) !=
            '\0') {
          uVar8 = uVar8 | 0x20;
        }
        uVar6 = (short)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16) * 6;
        if (*(char *)(_DAT_00028864 + 2 + uVar6) != '\0') {
          uVar8 = uVar8 | 0x40;
        }
      }
    }
    uVar5 = (undefined2)(uVar6 >> 0x10);
    if (local_6 == -1) {
      uVar6 = CONCAT22(uVar5,local_8);
      *(undefined2 *)(param_3 + local_12 * 2) = *(undefined2 *)(param_2 + local_8 * 2);
      *(undefined2 *)(param_2 + local_8 * 2) = 0xffff;
      local_12 = local_12 + 1;
    }
    else {
      uVar6 = CONCAT22(uVar5,local_6);
      *(undefined2 *)(param_3 + local_12 * 2) = *(undefined2 *)(param_2 + local_6 * 2);
      *(undefined2 *)(param_2 + local_6 * 2) = 0xffff;
      local_1a = local_1a + 1;
      local_12 = local_12 + 1;
    }
  } while( true );
}



// Function: FUN_000013e6 at 000013e6
// Size: 98 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013e6(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(short *)(_DAT_0002884c + 0x110) * 2;
  if ((((*(short *)(iVar1 + _DAT_0002884c + 0x148) != 0) ||
       (*(short *)(iVar1 + _DAT_0002884c + 0xd0) != 1)) &&
      (*(short *)(_DAT_0002884c + 0x178) <= param_1._0_2_)) &&
     (((param_1._0_2_ <= *(short *)(_DAT_0002884c + 0x17c) &&
       (*(short *)(_DAT_0002884c + 0x176) <= param_1._2_2_)) &&
      (param_1._2_2_ <= *(short *)(_DAT_0002884c + 0x17a))))) {
    func_0x00003ae0();
  }
  return;
}



// Function: FUN_00001448 at 00001448
// Size: 274 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001448(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short unaff_D6w;
  
  sVar6 = 0;
  sVar5 = (short)*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
  if (sVar5 == 0xf) {
    uVar3 = 1;
  }
  else if ((*(short *)(_DAT_0002884c + 0x116) == 0) ||
          (*(short *)(sVar5 * 2 + _DAT_0002884c + 0xd0) != 0)) {
    sVar4 = 8;
    while (sVar1 = sVar4 + -1, sVar4 != 0) {
      sVar4 = sVar1;
      if ((*(short *)(sVar1 * 2 + _DAT_0002884c + 0x138) != 0) &&
         ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                                (int)sVar1) << 6) >> 0x1e) == 2)) {
        sVar6 = sVar6 + 1;
        unaff_D6w = sVar1;
      }
    }
    uVar2 = (uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                           (int)sVar5) << 6) >> 0x1e;
    if (uVar2 == 0) {
      if (((sVar6 == 0) || ((sVar6 == 1 && (unaff_D6w == sVar5)))) &&
         ((*(ushort *)(_DAT_00028978 + 0xc) & 1) != 0)) {
        return 1;
      }
    }
    else if (uVar2 == 1) {
      if ((*(ushort *)(_DAT_00028978 + 0xc) & 1) != 0) {
        return 1;
      }
    }
    else if (uVar2 == 2) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_0000155a at 0000155a
// Size: 382 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000155a(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = *(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                    _DAT_0002884c + 0x711) == '\n';
  if ((_DAT_000288b0 == 0) || (*(char *)(_DAT_000288b0 + 4) != '\x1c')) {
    return;
  }
  if (bVar7) {
    unaff_D4w = func_0x00004938(param_1._2_2_);
  }
  sVar3 = 0x16;
LAB_000016c6:
  do {
    do {
      sVar2 = sVar3 + -1;
      if (sVar3 == 0) {
        return;
      }
      sVar3 = sVar2;
    } while (*(char *)(sVar2 * 0x1e + _DAT_0002884c + 0xd28) != '\x01');
    if (bVar7) goto LAB_00001608;
    iVar6 = sVar2 * 0x1e + _DAT_0002884c;
  } while ((*(short *)(iVar6 + 0xd2c) != param_1._0_2_) ||
          (*(short *)(iVar6 + 0xd2e) != param_1._2_2_));
  goto LAB_00001672;
LAB_00001608:
  if (unaff_D4w != -1) {
    iVar6 = unaff_D4w * 0x42 + _DAT_0002884c;
    iVar5 = sVar2 * 0x1e + _DAT_0002884c;
    sVar4 = *(short *)(iVar6 + 0x15c4);
    sVar1 = *(short *)(iVar5 + 0xd2c);
    if ((sVar4 <= sVar1) && ((int)sVar1 <= sVar4 + 1)) {
      sVar4 = *(short *)(iVar6 + 0x15c6);
      sVar1 = *(short *)(iVar5 + 0xd2e);
      if ((sVar4 <= sVar1) && ((int)sVar1 <= sVar4 + 1)) {
LAB_00001672:
        *(undefined1 *)(sVar2 * 0x1e + _DAT_0002884c + 0xd28) = 3;
        sVar4 = *(short *)(_DAT_0002884c + 0x182);
        do {
          sVar1 = sVar4 + -1;
          if (sVar4 == 0) break;
          sVar4 = sVar1;
        } while (sVar1 * 0x16 + _DAT_00028854 != _DAT_000288b0);
        *(short *)(sVar2 * 0x1e + _DAT_0002884c + 0xd2a) = sVar1;
        func_0x00007460();
      }
    }
  }
  goto LAB_000016c6;
}



// Function: FUN_000016d8 at 000016d8
// Size: 70 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000016d8(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  sVar1 = 0;
  while( true ) {
    if (*(short *)(_DAT_0002884c + 0x810) <= sVar1) {
      return -1;
    }
    if (sVar1 == param_1._0_2_) break;
    if ((*(char *)(sVar1 * 0x20 + _DAT_0002884c + 0x82a) == '\x01') && (sVar2 < 4)) {
      sVar2 = sVar2 + 1;
    }
    sVar1 = sVar1 + 1;
  }
  return sVar2;
}



// Function: FUN_0000171e at 0000171e
// Size: 46 bytes

undefined2 FUN_0000171e(void)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_000016d8();
  if (sVar1 == -1) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = *(undefined2 *)(sVar1 * 2 + 0x15f0e);
  }
  return uVar2;
}



// Function: FUN_0000174c at 0000174c
// Size: 624 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000174c(int param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char acStackY_80bc [32668];
  char local_de [8];
  char local_d6 [8];
  char local_ce [8];
  char local_c6 [9];
  char local_bd;
  char local_bc [176];
  char local_c [8];
  
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    local_d6[sVar2] = '\0';
    local_ce[sVar2] = '\0';
    local_c6[sVar2] = '\0';
    local_c[sVar2] = '\0';
    local_de[sVar2] = '\0';
    sVar3 = 0x16;
    while (sVar3 != 0) {
      local_bc[(int)(short)(sVar3 + -1) + sVar2 * 0x16] = -1;
      sVar3 = sVar3 + -1;
    }
  }
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    sVar3 = *(short *)(param_1 + sVar2 * 2);
    if (sVar3 != -1) {
      func_0x00006e60(0x20000,(short)((uint)(sVar3 * 0x16 + _DAT_00028854) >> 0x10));
      for (sVar3 = 0; sVar3 < _DAT_000283d8; sVar3 = sVar3 + 1) {
        local_bc[(int)sVar3 + sVar2 * 0x16] = (char)*(undefined2 *)(&DAT_00027fda + sVar3 * 2);
        switch(*(undefined1 *)(*(short *)(&DAT_00027fda + sVar3 * 2) * 0x1e + _DAT_0002884c + 0xd26)
              ) {
        case 1:
        case 2:
        case 8:
          local_c[sVar2] = local_c[sVar2] + '\x01';
          break;
        case 5:
          local_ce[sVar2] = local_ce[sVar2] + '\x01';
          break;
        case 6:
          local_c6[sVar2] = local_c6[sVar2] + '\x01';
          break;
        case 7:
          local_d6[sVar2] = local_d6[sVar2] + '\x01';
        }
        local_de[sVar2] = local_de[sVar2] + '\x01';
      }
    }
  }
  FUN_000019ce(param_1,local_c6,(short)local_bc);
  FUN_000019ce(param_1,local_ce,(short)local_bc);
  FUN_000019ce(param_1,local_d6,(short)local_bc);
  bVar1 = false;
  do {
    if (bVar1) {
      return;
    }
    bVar1 = true;
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      if ((*(short *)(param_1 + sVar2 * 2) != -1) && (local_c[sVar2] != '\0')) {
        sVar4 = (short)local_c[sVar2];
        sVar5 = -1;
        for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
          if (((sVar2 != sVar3) && (*(short *)(param_1 + sVar3 * 2) != -1)) &&
             ((int)local_c[sVar3] < (int)sVar4)) {
            sVar4 = (short)local_c[sVar3];
            sVar5 = sVar3;
          }
        }
        if (sVar5 != -1) {
          for (sVar3 = 0; sVar3 < 0x16; sVar3 = sVar3 + 1) {
            sVar4 = (short)local_bc[(int)sVar3 + sVar2 * 0x16];
            if ((sVar4 != 0xff) &&
               (((local_bd = *(char *)(sVar4 * 0x1e + _DAT_0002884c + 0xd26), local_bd == '\x01' ||
                 (local_bd == '\x02')) || (local_bd == '\b')))) {
              local_bc[(int)sVar3 + sVar2 * 0x16] = -1;
              bVar1 = false;
              *(short *)(_DAT_00028978 + 0x4c) = *(short *)(_DAT_00028978 + 0x4c) + 1;
              *(undefined2 *)(sVar4 * 0x1e + _DAT_0002884c + 0xd2a) =
                   *(undefined2 *)(param_1 + sVar5 * 2);
              func_0x00007460();
              local_c[sVar2] = local_c[sVar2] + -1;
              local_c[sVar5] = local_c[sVar5] + '\x01';
              break;
            }
          }
        }
      }
    }
  } while( true );
}



// Function: FUN_000019ce at 000019ce
// Size: 242 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000019ce(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  
  bVar2 = false;
  do {
    if (bVar2) {
      return;
    }
    bVar2 = true;
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      if ((*(short *)(param_1 + sVar4 * 2) != -1) && ('\x01' < *(char *)(param_2 + sVar4))) {
        for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
          if (((sVar4 != sVar5) &&
              (uVar1 = *(undefined2 *)(param_1 + sVar5 * 2), *(short *)(param_1 + sVar5 * 2) != -1))
             && (*(char *)(param_2 + sVar5) == '\0')) {
            for (sVar6 = 0; sVar6 < 0x16; sVar6 = sVar6 + 1) {
              pcVar7 = (char *)((int)sVar6 + sVar4 * 0x16 + param_3);
              sVar3 = (short)*pcVar7;
              if ((sVar3 != 0xff) &&
                 ((int)*(char *)(sVar3 * 0x1e + _DAT_0002884c + 0xd26) == (int)param_4._0_2_)) {
                bVar2 = false;
                *pcVar7 = -1;
                *(short *)(_DAT_00028978 + 0x4c) = *(short *)(_DAT_00028978 + 0x4c) + 1;
                *(undefined2 *)(sVar3 * 0x1e + _DAT_0002884c + 0xd2a) = uVar1;
                func_0x00007460();
                *(char *)(param_2 + sVar4) = *(char *)(param_2 + sVar4) + -1;
                *(char *)(param_2 + sVar5) = *(char *)(param_2 + sVar5) + '\x01';
                break;
              }
            }
          }
        }
      }
    }
  } while( true );
}



// Function: FUN_00001bd4 at 00001bd4
// Size: 98 bytes

ushort FUN_00001bd4(undefined8 param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  byte abStack_800a [32754];
  byte abStack_a [6];
  
  sVar2 = FUN_00001ac0();
  if (sVar2 == 0) {
    uVar3 = 0xff;
  }
  else {
    sVar2 = 6;
    do {
      sVar1 = sVar2 + -1;
      if (sVar2 == 0) {
        return 0xff;
      }
      uVar3 = (ushort)abStack_a[sVar1];
      sVar2 = sVar1;
    } while ((uVar3 == 0xff) || ('\x02' < *(char *)(param_1._2_4_ + (short)uVar3)));
  }
  return uVar3;
}



// Function: FUN_00001c36 at 00001c36
// Size: 190 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00001c36(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x182);
  sVar4 = 1000;
LAB_00001ce0:
  do {
    do {
      sVar2 = sVar3 + -1;
      if (sVar3 == 0) {
        return sVar4;
      }
      iVar5 = sVar2 * 0x16 + _DAT_00028854;
      sVar3 = sVar2;
    } while (*(char *)(iVar5 + 5) == '\x0f');
    uVar1 = *(undefined2 *)(iVar5 + 2);
    if (param_2._0_2_ != -1) goto LAB_00001c8e;
  } while (*(char *)(_DAT_0002884c + 0x111) == *(char *)(_DAT_00028854 + 5 + sVar2 * 0x16));
  goto LAB_00001ca8;
LAB_00001c8e:
  if ((int)param_2._0_2_ == (int)*(char *)(_DAT_00028854 + 5 + sVar2 * 0x16)) {
LAB_00001ca8:
    if ((*(short *)(_DAT_0002884c + 0x124) == 0) || (sVar2 = FUN_0000206e(uVar1), sVar2 != 0)) {
      sVar2 = func_0x00006e48(param_1,uVar1);
      if (sVar2 < sVar4) {
        sVar4 = sVar2;
      }
    }
  }
  goto LAB_00001ce0;
}



// Function: FUN_00001cf4 at 00001cf4
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cf4(short *param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  short local_8;
  short local_6;
  
  local_6 = -1;
  local_8 = -1;
  if (param_2._0_2_ != 4) {
    if (param_2._0_2_ == 1) {
      iVar2 = param_2._2_2_ * 0x42 + _DAT_0002884c;
      local_6 = *(short *)(iVar2 + 0x15c4);
      local_8 = *(short *)(iVar2 + 0x15c6);
      if ((int)*(char *)(iVar2 + 0x15d9) == (int)*(short *)(_DAT_0002884c + 0x110)) {
        local_6 = local_6 + 1;
        local_8 = local_8 + 1;
      }
      else {
        FUN_00001df4(param_1[1],&local_6,&local_8);
      }
    }
    else if (param_2._0_2_ == 2) {
      iVar2 = param_2._2_2_ * 0x1e + _DAT_0002884c;
      local_6 = *(short *)(iVar2 + 0xd2c);
      local_8 = *(short *)(iVar2 + 0xd2e);
    }
    else if (param_2._0_2_ == 3) {
      iVar2 = param_2._2_2_ * 0x20 + _DAT_0002884c;
      local_6 = *(short *)(iVar2 + 0x812);
      local_8 = *(short *)(iVar2 + 0x814);
    }
    psVar1 = param_1;
    if (local_6 != -1) {
      psVar1 = &local_6;
    }
    param_1[9] = *psVar1;
    if (local_8 == -1) {
      psVar1 = param_1 + 1;
    }
    else {
      psVar1 = &local_8;
    }
    param_1[10] = *psVar1;
    func_0x00007448(param_1);
  }
  return;
}



// Function: FUN_00001df4 at 00001df4
// Size: 36 bytes

void FUN_00001df4(undefined4 param_1,short *param_2,short *param_3)

{
  if (*param_2 < param_1._0_2_) {
    *param_2 = *param_2 + 1;
  }
  if (*param_3 < param_1._2_2_) {
    *param_3 = *param_3 + 1;
  }
  return;
}



// Function: FUN_00001e18 at 00001e18
// Size: 106 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001e18(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f1) == '\0') {
    uVar1 = 0;
  }
  else {
    sVar2 = func_0x000032b0((short)*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f0));
    iVar3 = param_1._0_2_ * 0x42 + _DAT_0002884c;
    if (*(char *)(iVar3 + 0x15f1) == *(char *)(sVar2 + iVar3 + 0x15de)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// Function: FUN_00001e82 at 00001e82
// Size: 250 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00001e82(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  short asStackY_10014 [32756];
  short local_14 [8];
  
  sVar2 = 8;
  while (sVar2 != 0) {
    local_14[(short)(sVar2 + -1)] = -1;
    sVar2 = sVar2 + -1;
  }
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  sVar3 = 0;
  do {
    do {
      sVar1 = sVar2 + -1;
      sVar4 = sVar3;
      if (sVar2 == 0) goto LAB_00001f46;
      psVar5 = (short *)(sVar1 * 0x16 + _DAT_00028854);
      sVar2 = sVar1;
    } while ((((*(char *)(_DAT_0002884c + 0x111) != *(char *)((int)psVar5 + 5)) ||
              (param_1._0_2_ != *psVar5)) || (param_1._2_2_ != psVar5[1])) ||
            ((((int)param_3._0_2_ !=
               (uint)(*(int *)(_DAT_00028854 + 0xe + sVar1 * 0x16) << 4) >> 0x1d ||
              ((int)param_3._2_2_ != *(uint *)(_DAT_00028854 + 0xe + sVar1 * 0x16) >> 0x1c)) ||
             ((param_4._0_2_ != 0 &&
              ((int)*(char *)(_DAT_00028854 + 6 + sVar1 * 0x16) < (int)param_4._0_2_))))));
    sVar4 = sVar3 + 1;
    local_14[sVar3] = sVar1;
    sVar3 = sVar4;
  } while (sVar4 < 8);
LAB_00001f46:
  if (sVar4 != 0) {
    FUN_00001f7c(local_14);
  }
  if (param_2 != 0) {
    sVar2 = 8;
    while( true ) {
      sVar3 = sVar2 + -1;
      if (sVar2 == 0) break;
      *(short *)(param_2 + sVar3 * 2) = local_14[sVar3];
      sVar2 = sVar3;
    }
  }
  return sVar4;
}



// Function: FUN_00001f7c at 00001f7c
// Size: 242 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f7c(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = -1;
  _DAT_000288f4 = 0;
  _DAT_000288f8 = 0;
  _DAT_000288f6 = 100;
  _DAT_000288ac = 0;
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    *(undefined4 *)(&DAT_000288b4 + sVar2 * 4) = 0;
    if (*(short *)(param_1 + sVar2 * 2) != -1) {
      if (sVar3 == -1) {
        sVar3 = *(short *)(param_1 + sVar2 * 2);
      }
      cVar1 = *(char *)(_DAT_00028854 + 7 + *(short *)(param_1 + sVar2 * 2) * 0x16);
      if ((int)cVar1 < (int)_DAT_000288f6) {
        _DAT_000288f6 = (short)cVar1;
      }
      _DAT_000288f8 = _DAT_000288f8 + 1;
    }
  }
  sVar2 = 0;
  if (_DAT_000288f8 != 0) {
    if (_DAT_000288f8 == 1) {
      _DAT_000288b4 = sVar3 * 0x16 + _DAT_00028854;
    }
    else {
      _DAT_000288f4 = 1;
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        if (*(short *)(param_1 + sVar3 * 2) != -1) {
          *(int *)(&DAT_000288b4 + sVar2 * 4) =
               *(short *)(param_1 + sVar3 * 2) * 0x16 + _DAT_00028854;
          sVar2 = sVar2 + 1;
        }
      }
    }
    _DAT_000288ac = _DAT_000288b4;
  }
  return;
}



// Function: FUN_0000206e at 0000206e
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000206e(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = param_1._0_2_ + -1;
  do {
    if (param_1._0_2_ + 1 < (int)sVar1) {
      return 0;
    }
    for (sVar2 = param_1._2_2_ + -1; (int)sVar2 <= param_1._2_2_ + 1; sVar2 = sVar2 + 1) {
      if ((((-1 < sVar1) && (-1 < sVar2)) && (sVar1 < 0x70)) &&
         ((sVar2 < 0x9c && ((*(byte *)(sVar2 * 0x70 + _DAT_00028858 + (int)sVar1) & 0x20) != 0)))) {
        return 1;
      }
    }
    sVar1 = sVar1 + 1;
  } while( true );
}



// Function: FUN_0000226a at 0000226a
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000226a(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  byte *pbVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  bVar4 = false;
  iVar7 = param_1._0_2_ * 0x42 + _DAT_0002884c;
  sVar1 = *(short *)(iVar7 + 0x15c4);
  sVar2 = *(short *)(iVar7 + 0x15c6);
  for (sVar5 = sVar1 + -1; (int)sVar5 <= sVar1 + 2; sVar5 = sVar5 + 1) {
    for (sVar6 = sVar2 + -1; (int)sVar6 <= sVar2 + 2; sVar6 = sVar6 + 1) {
      if ((*(byte *)(sVar6 * 0x70 + _DAT_00028858 + (int)sVar5) & 0x20) != 0) {
        bVar4 = true;
      }
    }
  }
  if (bVar4) {
    pbVar3 = (byte *)(param_1._0_2_ + _DAT_00028978 + 0x11e);
    *pbVar3 = *pbVar3 & 0xfe;
  }
  return;
}



// Function: FUN_000022ee at 000022ee
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022ee(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined1 auStack_dc [200];
  undefined2 local_14 [2];
  undefined2 local_10;
  ushort local_c;
  undefined2 local_a;
  undefined1 *local_8;
  
  _DAT_00027f7c = param_1._0_2_;
  local_10 = param_1._2_2_;
  local_14[0] = param_1._2_2_;
  local_8 = auStack_dc;
  local_a = param_2;
  local_c = param_3._0_2_ | 0x10;
  func_0x00002c00(local_14);
  return;
}



