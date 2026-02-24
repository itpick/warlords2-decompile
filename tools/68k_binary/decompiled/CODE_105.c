// Warlords II - Decompiled 68k Code
// Segment: CODE_105
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000045c at 0000045c
// Size: 226 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0000045c(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  short sVar1;
  short unaff_D2w;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar5 = 0;
  for (sVar3 = 0; sVar3 < 6; sVar3 = sVar3 + 1) {
    sVar6 = 10000;
    sVar2 = *(short *)(_DAT_0002884c + 0x15c2);
    sVar4 = -1;
    while( true ) {
      sVar1 = sVar2 + -1;
      if (sVar2 == 0) break;
      sVar2 = sVar1;
      if (((((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == (int)param_1._2_2_) &&
           ((*(byte *)(sVar1 + _DAT_00028978 + 0x11e) & 1) == 0)) &&
          (*(short *)(_DAT_0002894a + sVar1 * 2) != 0)) &&
         (*(short *)(sVar1 * 2 + _DAT_0002894a + 200) < sVar6)) {
        sVar6 = *(short *)(sVar1 * 2 + _DAT_0002894a + 200);
        sVar4 = sVar1;
      }
    }
    unaff_D2w = -1;
    if (sVar4 == -1) break;
    param_2[sVar3] = sVar4;
    param_3[sVar3] = sVar6;
    *(undefined2 *)(_DAT_0002894a + sVar4 * 2) = 0;
    sVar5 = sVar5 + 1;
  }
  if ((sVar5 == 0) && ((*(byte *)(unaff_D2w + _DAT_00028978 + 0x11e) & 1) == 0)) {
    *param_2 = param_1._0_2_;
    *param_3 = 100;
    sVar5 = 1;
  }
  return sVar5;
}



// Function: FUN_0000053e at 0000053e
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0000053e(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  byte abStackY_800a [32730];
  undefined1 auStack_12 [6];
  ushort local_c;
  byte abStack_a [6];
  
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar6 = 0;
  sVar7 = -1;
LAB_000005ee:
  do {
    sVar2 = sVar4 + -1;
    if (sVar4 == 0) {
      return sVar7;
    }
    sVar4 = sVar2;
  } while ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) != (int)param_1._0_2_);
  func_0x00002d78(0,(short)abStack_a,(short)auStack_12);
  sVar5 = 1;
  sVar3 = 6;
  while( true ) {
    sVar1 = sVar3 + -1;
    if (sVar3 == 0) break;
    local_c = (ushort)abStack_a[sVar1];
    sVar3 = sVar1;
    if ((local_c != 0xff) &&
       ((int)*(char *)((short)local_c * 0x42 + _DAT_0002884c + 0x15d9) == (int)param_1._0_2_)) {
      sVar5 = sVar5 + 1;
    }
  }
  if (sVar5 <= sVar6) goto code_r0x000005d0;
  goto LAB_000005ea;
code_r0x000005d0:
  if (sVar5 == sVar6) {
    sVar3 = func_0x00002ad0(2);
    if (sVar3 != 0) {
LAB_000005ea:
      sVar6 = sVar5;
      sVar7 = sVar2;
    }
  }
  goto LAB_000005ee;
}



// Function: FUN_00000602 at 00000602
// Size: 354 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000602(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  byte abStackY_8010 [6];
  byte abStackY_800a [32730];
  byte abStack_10 [6];
  byte abStack_a [6];
  
  sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar8 = sVar6 + -1, sVar6 != 0) {
    *(undefined2 *)(sVar8 * 2 + _DAT_0002894a + 400) = 0;
    *(undefined2 *)(sVar8 * 2 + _DAT_0002894a + 200) = 0;
    *(undefined2 *)(_DAT_0002894a + sVar8 * 2) = 0;
    sVar6 = sVar8;
  }
  *(undefined2 *)(_DAT_0002894a + param_1._0_2_ * 2) = 1;
  do {
    bVar4 = false;
    sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
    while (sVar8 = sVar6 + -1, sVar6 != 0) {
      sVar6 = sVar8;
      if ((*(short *)(_DAT_0002894a + sVar8 * 2) != 0) &&
         (*(short *)(sVar8 * 2 + _DAT_0002894a + 400) == 0)) {
        bVar4 = true;
        sVar1 = *(short *)(sVar8 * 2 + _DAT_0002894a + 200);
        *(undefined2 *)(sVar8 * 2 + _DAT_0002894a + 400) = 1;
        func_0x00002d78(0,abStack_a,abStack_10);
        sVar8 = 6;
        while (sVar3 = sVar8 + -1, sVar8 != 0) {
          uVar5 = (ushort)abStack_a[sVar3];
          sVar8 = sVar3;
          if (uVar5 != 0xff) {
            sVar2 = (ushort)abStack_10[sVar3] + sVar1;
            uVar7 = (ushort)abStack_a[sVar3];
            if (*(short *)(_DAT_0002894a + (short)uVar5 * 2) == 0) {
              *(undefined2 *)(_DAT_0002894a + (short)uVar7 * 2) = 1;
              *(short *)((short)uVar7 * 2 + _DAT_0002894a + 200) = sVar2;
            }
            else if (sVar2 < *(short *)((short)uVar5 * 2 + _DAT_0002894a + 200)) {
              *(short *)((short)uVar7 * 2 + _DAT_0002894a + 200) = sVar2;
            }
          }
        }
      }
    }
  } while (bVar4);
  return;
}



// Function: FUN_00000764 at 00000764
// Size: 396 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000764(undefined4 param_1)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  
  iVar3 = *(short *)(_DAT_0002884c + 0x110) * 2;
  sVar1 = *(short *)(iVar3 + _DAT_0002884c + 0xc0);
  sVar5 = *(short *)(_DAT_00028978 + 2) * *(short *)(_DAT_00028978 + 0x2c);
  if (*(short *)(iVar3 + _DAT_0002884c + 0xd0) == 0) {
    sVar5 = *(short *)(_DAT_00028978 + 0x2e) + sVar5;
  }
  else if (sVar1 == 2) {
    sVar5 = *(short *)(_DAT_00028978 + 0x30) + sVar5;
  }
  else if (sVar1 == 1) {
    sVar5 = *(short *)(_DAT_00028978 + 0x32) + sVar5;
  }
  else if (sVar1 == 0) {
    sVar5 = *(short *)(_DAT_00028978 + 0x34) + sVar5;
  }
  *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) = 0;
  if ((*(short *)(_DAT_00028978 + 0x26) != 0) &&
     (sVar1 = *(short *)(_DAT_00028978 + 0x26), sVar4 = func_0x00002ad0(0x103e8),
     (int)sVar4 < (int)sVar5 + (int)sVar1)) {
    puVar2 = (ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6);
    *puVar2 = *puVar2 | 1;
    return;
  }
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 100) {
    sVar5 = *(short *)(_DAT_00028978 + 0x36) + sVar5;
  }
  if ((*(short *)(_DAT_00028978 + 0x28) != 0) &&
     (sVar1 = *(short *)(_DAT_00028978 + 0x28), sVar4 = func_0x00002ad0(0x103e8),
     (int)sVar4 < (int)sVar5 + (int)sVar1)) {
    puVar2 = (ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6);
    *puVar2 = *puVar2 | 2;
    return;
  }
  if ((*(short *)(_DAT_00028978 + 0x2a) != 0) &&
     (sVar1 = *(short *)(_DAT_00028978 + 0x2a), sVar4 = func_0x00002ad0(0x103e8),
     (int)sVar4 < (int)sVar5 + (int)sVar1)) {
    puVar2 = (ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6);
    *puVar2 = *puVar2 | 4;
  }
  return;
}



// Function: FUN_000008f0 at 000008f0
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008f0(undefined4 param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  sVar4 = *(short *)(_DAT_00028978 + 0x24a);
  while (sVar3 = sVar4 + -1, sVar4 != 0) {
    sVar4 = sVar3;
    if (*(short *)(sVar3 * 0x5c + _DAT_00028978 + 0x24c) != 0) {
      sVar5 = 4;
      while (sVar2 = sVar5 + -1, sVar5 != 0) {
        iVar6 = sVar3 * 0x5c + _DAT_00028978;
        sVar5 = sVar2;
        if (param_1._0_2_ == *(short *)(sVar2 * 2 + iVar6 + 0x252)) {
          *(undefined2 *)(sVar2 * 2 + iVar6 + 0x252) = 0xffff;
          psVar1 = (short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15f6);
          if (*psVar1 != 0) {
            *psVar1 = 0;
            func_0x00007450();
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00000982 at 00000982
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000982(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  byte abStackY_800c [32732];
  undefined1 auStack_12 [6];
  byte abStack_c [6];
  short local_6;
  
  local_6 = *(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x24e);
  for (sVar2 = 0; sVar2 < 6; sVar2 = sVar2 + 1) {
    if (*(short *)(sVar2 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) != -1) {
      sVar4 = 0;
      func_0x00002d78(0,abStack_c,auStack_12);
      sVar3 = 6;
      while (sVar1 = sVar3 + -1, sVar3 != 0) {
        sVar3 = sVar1;
        if ((abStack_c[sVar1] != 0xff) &&
           ((int)*(char *)((short)(ushort)abStack_c[sVar1] * 0x42 + _DAT_0002884c + 0x15d9) ==
            (int)local_6)) {
          sVar4 = sVar4 + 1;
        }
      }
      *(short *)(sVar2 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x27e) = sVar4;
    }
  }
  return;
}



// Function: FUN_00000a42 at 00000a42
// Size: 2138 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000a42(void)

{
  char cVar1;
  bool bVar2;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar3;
  short sVar8;
  short sVar9;
  short *psVar10;
  short asStackY_100e4 [27];
  short asStackY_100ae [21];
  short asStackY_10084 [8];
  short asStackY_10074 [8];
  short asStackY_10064 [8];
  short asStackY_10054 [8];
  short asStackY_10044 [8];
  short asStackY_10034 [8];
  short asStackY_10024 [8];
  short asStackY_10014 [16303];
  byte abStackY_80b6 [32674];
  undefined1 auStack_ea [6];
  short asStack_e4 [8];
  int local_d4;
  short local_d0;
  int local_ce;
  int local_ca;
  int local_c6;
  int local_c2;
  short local_be;
  int local_bc;
  short local_b8;
  byte abStack_b6 [6];
  short local_b0;
  short asStack_ae [8];
  char local_9d;
  int local_9c;
  int local_98;
  uint local_94;
  byte local_90;
  char local_8f;
  short local_8e;
  short local_8c;
  ushort local_8a;
  short local_88;
  short local_86;
  short asStack_84 [8];
  short asStack_74 [8];
  short asStack_64 [8];
  short asStack_54 [8];
  short asStack_44 [8];
  short asStack_34 [8];
  short asStack_24 [8];
  short asStack_14 [8];
  
  sVar4 = func_0x00004938(*(undefined2 *)
                           (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x196));
  local_b0 = *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0x1122);
  sVar5 = 8;
  while (sVar9 = sVar5 + -1, sVar5 != 0) {
    asStack_34[sVar9] = 0;
    asStack_14[sVar9] = 0;
    asStack_24[sVar9] = 0;
    asStack_84[sVar9] = 0;
    asStack_74[sVar9] = 0;
    asStack_64[sVar9] = 0;
    asStack_44[sVar9] = 0;
    sVar5 = func_0x00002ad0(10);
    asStack_ae[sVar9] = sVar5;
    asStack_e4[sVar9] = sVar9;
    sVar5 = sVar9;
  }
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar9 = sVar5 + -1, sVar5 != 0) {
    local_8f = *(char *)(sVar9 * 0x42 + _DAT_0002884c + 0x15d9);
    sVar5 = sVar9;
    if (local_8f != '\x0f') {
      asStack_24[local_8f] = asStack_24[local_8f] + 1;
      if ((*(byte *)(sVar9 + _DAT_00028978 + 0x11e) & 1) == 0) {
        asStack_34[local_8f] = asStack_34[local_8f] + 1;
      }
      if ((int)*(char *)(sVar9 * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)*(short *)(_DAT_0002884c + 0x110)) {
        local_90 = *(byte *)(sVar9 * 0x42 + _DAT_0002884c + 0x15f3);
        if (local_90 != 0xf) {
          asStack_64[local_90] = asStack_64[local_90] + 1;
        }
        func_0x00002d78(0,(short)abStack_b6,(short)auStack_ea);
        sVar8 = 6;
        while (sVar6 = sVar8 + -1, sVar8 != 0) {
          local_8a = (ushort)abStack_b6[sVar6];
          sVar8 = sVar6;
          if (local_8a != 0xff) {
            iVar3 = (short)local_8a * 0x42 + _DAT_0002884c;
            local_94 = (uint)*(short *)(_DAT_0002884c + 0x110);
            if (((int)*(char *)(iVar3 + 0x15d9) != local_94) &&
               (*(byte *)(iVar3 + 0x15f3) == local_94)) {
              asStack_74[*(char *)(sVar9 * 0x42 + _DAT_0002884c + 0x15d9)] =
                   asStack_74[*(char *)(sVar9 * 0x42 + _DAT_0002884c + 0x15d9)] + 1;
            }
          }
        }
      }
    }
  }
  local_86 = 0;
  sVar5 = *(short *)(_DAT_00028978 + 0x24a);
  while (sVar9 = sVar5 + -1, sVar5 != 0) {
    local_98 = sVar9 * 0x5c + _DAT_00028978;
    sVar5 = sVar9;
    if (*(short *)(local_98 + 0x24c) != 0) {
      asStack_44[*(short *)(local_98 + 0x24e)] = asStack_44[*(short *)(local_98 + 0x24e)] + 1;
      local_86 = local_86 + 1;
    }
  }
  cVar1 = *(char *)(sVar4 * 0x42 + _DAT_0002884c + 0x15d9);
  if ((cVar1 != '\x0f') && ((int)cVar1 != (int)*(short *)(_DAT_0002884c + 0x110))) {
    asStack_14[cVar1] = asStack_14[cVar1] + 0x14;
  }
  sVar5 = 0;
  sVar9 = 8;
  while (sVar8 = sVar9 + -1, sVar9 != 0) {
    sVar9 = sVar8;
    if (asStack_24[sVar8] != 0) {
      if (sVar8 != *(short *)(_DAT_0002884c + 0x110)) {
        sVar5 = sVar5 + 1;
      }
      local_9c = sVar8 * 0x14 + _DAT_0002884c;
      sVar6 = func_0x00004938(*(undefined2 *)(local_9c + 0x196));
      if ((int)*(char *)(sVar6 * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)*(short *)(_DAT_0002884c + 0x110)) {
        asStack_84[sVar8] = 1;
      }
    }
  }
  sVar9 = 8;
  while (sVar8 = sVar9 + -1, sVar9 != 0) {
    asStack_14[sVar8] = asStack_ae[sVar8] + asStack_14[sVar8];
    asStack_14[sVar8] = asStack_84[sVar8] * 0xf + asStack_14[sVar8];
    asStack_14[sVar8] = asStack_64[sVar8] * 4 + asStack_14[sVar8];
    asStack_14[sVar8] = asStack_74[sVar8] * 6 + asStack_14[sVar8];
    asStack_14[sVar8] = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3bc) * 4 + asStack_14[sVar8];
    asStack_14[sVar8] = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3cc) + asStack_14[sVar8];
    asStack_14[sVar8] = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3dc) + asStack_14[sVar8];
    asStack_14[sVar8] = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3ec) * 2 + asStack_14[sVar8];
    asStack_14[sVar8] = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3fc) * 2 + asStack_14[sVar8];
    asStack_14[sVar8] = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x40c) * 2 + asStack_14[sVar8];
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
      asStack_14[sVar8] = *(short *)(_DAT_00028978 + 0x18) + asStack_14[sVar8];
    }
    else if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xc0) == 2) {
      asStack_14[sVar8] = *(short *)(_DAT_00028978 + 0x1e) + asStack_14[sVar8];
    }
    else if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xc0) == 1) {
      asStack_14[sVar8] = *(short *)(_DAT_00028978 + 0x1a) + asStack_14[sVar8];
    }
    else if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xc0) == 0) {
      asStack_14[sVar8] = *(short *)(_DAT_00028978 + 0x1c) + asStack_14[sVar8];
    }
    iVar3 = func_0x000076d8(local_b0 - *(short *)(sVar8 * 2 + _DAT_0002884c + 0x1122));
    asStack_14[sVar8] = (short)(iVar3 / 8) + asStack_14[sVar8];
    iVar3 = func_0x000076d8(asStack_24[*(short *)(_DAT_0002884c + 0x110)] - asStack_24[sVar8]);
    asStack_14[sVar8] = (short)(iVar3 / 4) + asStack_14[sVar8];
    sVar9 = sVar8;
  }
  local_88 = 0;
  sVar9 = 8;
  while (sVar8 = sVar9 + -1, sVar9 != 0) {
    sVar9 = sVar8;
    if ((*(short *)(sVar8 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (sVar8 != *(short *)(_DAT_0002884c + 0x110))) {
      local_be = *(short *)(_DAT_0002884c + 0x110);
      local_bc = _DAT_0002884c + 0x1582;
      local_c2 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
      if ((byte)((uint)(*(int *)(local_c2 + sVar8) << 4) >> 0x1e) == 2) {
        local_88 = 1;
      }
    }
  }
  if ((*(short *)(_DAT_0002884c + 0x116) != 0) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 0)) {
    sVar9 = 8;
    while (sVar9 != 0) {
      asStack_54[(short)(sVar9 + -1)] = 0;
      sVar9 = sVar9 + -1;
    }
    sVar9 = 8;
    while (sVar8 = sVar9 + -1, sVar9 != 0) {
      sVar9 = sVar8;
      if ((*(short *)(sVar8 * 2 + _DAT_0002884c + 0x138) != 0) &&
         (*(short *)(sVar8 * 2 + _DAT_0002884c + 0xd0) != 0)) {
        sVar6 = 8;
        while (sVar7 = sVar6 + -1, sVar6 != 0) {
          sVar6 = sVar7;
          if ((*(short *)(sVar7 * 2 + _DAT_0002884c + 0x138) != 0) &&
             (*(short *)(sVar7 * 2 + _DAT_0002884c + 0xd0) != 1)) {
            local_c6 = _DAT_0002884c + 0x1582;
            local_ca = sVar8 * 8 + _DAT_0002884c + 0x1582;
            if ((byte)((uint)(*(int *)(local_ca + sVar7) << 6) >> 0x1e) == 2) {
              asStack_54[sVar8] = 1;
            }
          }
        }
      }
    }
    sVar9 = 8;
    while (sVar8 = sVar9 + -1, sVar9 != 0) {
      sVar9 = sVar8;
      if (((*(short *)(sVar8 * 2 + _DAT_0002884c + 0x138) != 0) &&
          (*(short *)(sVar8 * 2 + _DAT_0002884c + 0xd0) != 0)) &&
         ((asStack_54[*(short *)(_DAT_0002884c + 0x110)] != 0 || (asStack_54[sVar8] != 0)))) {
        asStack_14[sVar8] = 0;
      }
    }
  }
  sVar9 = 8;
  while (sVar8 = sVar9 + -1, sVar9 != 0) {
    sVar9 = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3fc);
    sVar6 = *(short *)(sVar8 * 2 + _DAT_00028978 + 0x3dc);
    if ((*(short *)(_DAT_0002884c + 0x128) == 0) && (0x27 < *(short *)(_DAT_0002884c + 0x15c2))) {
      local_b8 = 8;
    }
    else {
      local_b8 = 4;
    }
    sVar7 = FUN_0000129c();
    if (sVar7 != 0) {
      asStack_14[sVar8] = 0;
    }
    if (local_88 != 0) {
      local_d0 = *(short *)(_DAT_0002884c + 0x110);
      local_ce = _DAT_0002884c + 0x1582;
      local_d4 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
      if ((byte)((uint)(*(int *)(local_d4 + sVar8) << 4) >> 0x1e) == 0) {
        asStack_14[sVar8] = 0;
      }
    }
    if ((local_86 == 0) && (asStack_34[sVar8] == 0)) {
      asStack_14[sVar8] = 0;
    }
    local_8e = 1;
    local_8c = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar10 = &local_8e;
    }
    else {
      psVar10 = &local_8c;
    }
    if ((*psVar10 < local_b8) && ((short)(sVar9 + sVar6) == 0)) {
      asStack_14[sVar8] = 0;
    }
    sVar9 = sVar8;
    if ((1 < sVar5) && ((int)asStack_24[sVar8] / 4 < (int)asStack_44[sVar8])) {
      asStack_14[sVar8] = 0;
    }
  }
  asStack_14[*(short *)(_DAT_0002884c + 0x110)] = 0;
  sVar5 = 0;
  sVar9 = -1;
  sVar8 = 8;
  while (sVar6 = sVar8 + -1, sVar8 != 0) {
    sVar8 = sVar6;
    if ((asStack_24[sVar6] != 0) && (sVar5 < asStack_14[sVar6])) {
      sVar5 = asStack_14[sVar6];
      sVar9 = sVar6;
    }
  }
  iVar3 = sVar4 * 0x42;
  local_9d = *(char *)(iVar3 + _DAT_0002884c + 0x15d9);
  if ((local_9d != '\x0f') && (iVar3 = (int)*(short *)(_DAT_0002884c + 0x110), local_9d != iVar3)) {
    bVar2 = false;
    sVar5 = *(short *)(_DAT_00028978 + 0x24a);
    while( true ) {
      iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),sVar5);
      sVar8 = sVar5 + -1;
      if (sVar5 == 0) break;
      iVar3 = (int)asStack_44[sVar8];
      sVar5 = sVar8;
      if (*(char *)(sVar4 * 0x42 + _DAT_0002884c + 0x15d9) == iVar3) {
        bVar2 = true;
      }
    }
    if (!bVar2) {
      sVar9 = (short)*(char *)(sVar4 * 0x42 + _DAT_0002884c + 0x15d9);
    }
  }
  if ((sVar9 != -1) && (asStack_34[sVar9] == 0)) {
    sVar9 = -1;
  }
  return CONCAT22((short)((uint)iVar3 >> 0x10),sVar9);
}



// Function: FUN_0000129c at 0000129c
// Size: 178 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0000129c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  if ((*(short *)(_DAT_0002884c + 0x11c) == 0) || (*(short *)(_DAT_00028978 + 0x38) == 0)) {
    uVar3 = 0;
  }
  else if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
    uVar3 = 0;
  }
  else {
    sVar2 = 8;
    while (sVar1 = sVar2 + -1, sVar2 != 0) {
      sVar2 = sVar1;
      if ((((*(short *)(sVar1 * 2 + _DAT_0002884c + 0x138) != 0) &&
           (*(short *)(sVar1 * 2 + _DAT_0002884c + 0xd0) == 0)) &&
          ((byte)((uint)(*(int *)(param_1._0_2_ * 8 + _DAT_0002884c + 0x1582 + (int)sVar1) << 6) >>
                 0x1e) == 2)) && (*(short *)(sVar1 * 2 + 0x28984) != 0)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



