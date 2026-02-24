// Warlords II - Decompiled 68k Code
// Segment: CODE_133
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000046 at 00000046
// Size: 2048 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000046(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  short sVar2;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar3;
  short sVar6;
  undefined1 uVar8;
  int iVar7;
  undefined1 uVar9;
  undefined2 extraout_A0w;
  short *psVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  short local_c [3];
  undefined2 local_6;
  
  FUN_00000846();
  FUN_00000dc2();
  sVar4 = func_0x00004938();
  if ((-1 < sVar4) && (param_1._0_2_ == 1)) {
    if (_DAT_000288b0 == 0) {
      if ((7 < (int)DAT_0002868c + (int)DAT_0002868d) && ('\x02' < DAT_0002868c)) {
        uVar12 = 0x5b52;
        uVar8 = 2;
        uVar5 = func_0x00004938();
        func_0x00006e50(uVar8,uVar5,uVar12);
      }
    }
    else {
      iVar7 = (short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224;
      uVar8 = 0xae;
      uVar5 = func_0x00004938();
      func_0x00006e50(uVar8,uVar5,(short)iVar7);
    }
  }
  _DAT_000288f8 = 0;
  sVar4 = 8;
  while (sVar4 != 0) {
    *(undefined4 *)(&DAT_000288b4 + (short)(sVar4 + -1) * 4) = 0;
    sVar4 = sVar4 + -1;
  }
  _DAT_000288ac = 0;
  for (sVar4 = 0; (int)sVar4 < (int)DAT_0002868d; sVar4 = sVar4 + 1) {
    if ((&DAT_0002874e)[sVar4] != '\0') {
      iVar7 = (int)_DAT_000288f8;
      _DAT_000288f8 = _DAT_000288f8 + 1;
      *(undefined4 *)(&DAT_000288b4 + iVar7 * 4) = *(undefined4 *)(&DAT_0002866c + sVar4 * 4);
      _DAT_000288ac = *(undefined4 *)(&DAT_0002866c + sVar4 * 4);
    }
  }
  sVar4 = 0;
  while( true ) {
    uVar9 = (undefined1)param_1;
    uVar8 = (undefined1)((uint)param_2 >> 0x10);
    if ((int)DAT_0002868d <= (int)sVar4) break;
    if ((&DAT_0002874e)[sVar4] == '\0') {
      if ((&DAT_000286d6)[sVar4] == '\x1c') {
        local_6 = CONCAT11(uVar9,uVar8);
        func_0x00004938();
        func_0x00006e50(uVar9);
        func_0x00004950(*(undefined4 *)(&DAT_0002866c + sVar4 * 4));
      }
      func_0x00007440((short)*(undefined4 *)(&DAT_0002866c + sVar4 * 4));
    }
    else {
      if ((&DAT_000286d6)[sVar4] == '\x1c') {
        func_0x000074a8((short)*(undefined4 *)(&DAT_0002866c + sVar4 * 4));
      }
      func_0x00007448((short)*(undefined4 *)(&DAT_0002866c + sVar4 * 4));
    }
    sVar4 = sVar4 + 1;
  }
  for (sVar4 = 0; (int)sVar4 < (int)DAT_0002868c; sVar4 = sVar4 + 1) {
    if ((&DAT_0002872e)[sVar4] == '\0') {
      if ((&DAT_000286b6)[sVar4] == '\x1c') {
        local_c[2] = CONCAT11(uVar9,uVar8);
        uVar11 = uVar9;
        func_0x00004938();
        func_0x00006e50(uVar11);
        func_0x00004950(*(undefined4 *)(&DAT_000285ec + sVar4 * 4));
      }
      func_0x00007440((short)*(undefined4 *)(&DAT_000285ec + sVar4 * 4));
    }
    else {
      if ((&DAT_000286b6)[sVar4] == '\x1c') {
        func_0x000074a8((short)*(undefined4 *)(&DAT_000285ec + sVar4 * 4));
      }
      func_0x00007448((short)*(undefined4 *)(&DAT_000285ec + sVar4 * 4));
    }
  }
  func_0x00004930();
  func_0x00004920();
  func_0x00004928();
  if (param_1._0_2_ == 0) {
    func_0x000074c8(_DAT_00028792);
    func_0x00004918();
    if (*(char *)((_DAT_00028780 >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      func_0x00007450();
    }
    uVar3 = 1;
  }
  else {
    sVar4 = (short)DAT_0002877f;
    uVar5 = _DAT_0002878a;
    func_0x000074c8(_DAT_00028792);
    uVar8 = (undefined1)_DAT_0002878a;
    func_0x000049d8(_DAT_00028792);
    func_0x000049d0(_DAT_00028792,uVar8,uVar5,sVar4);
    if ((_DAT_00028780 & 0x200000) != 0) {
      pbVar1 = (byte *)(param_2._0_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._2_2_ * 2);
      *pbVar1 = *pbVar1 & 0xdf;
      func_0x000074c0();
    }
    if (*(char *)((_DAT_00028780 >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      if (DAT_0002877e == '\x0f') {
        sVar4 = 0;
      }
      else if (*(short *)(DAT_0002877e * 2 + 0x28800) < 2) {
        sVar4 = *(short *)((short)DAT_0002877e * 0x14 + _DAT_0002884c + 0x186);
      }
      else {
        sVar4 = *(short *)((short)DAT_0002877e * 0x14 + _DAT_0002884c + 0x186) /
                *(short *)(DAT_0002877e * 2 + 0x28800);
      }
      local_c[0] = sVar4 / 2;
      local_c[1] = 0;
      if (sVar4 / 2 < 0) {
        psVar10 = local_c + 1;
      }
      else {
        psVar10 = local_c;
      }
      sVar4 = *psVar10;
      if ((*(short *)(DAT_0002877f * 2 + _DAT_0002884c + 0xd0) == 0) && (0 < sVar4)) {
        func_0x00002ad8(0,sVar4);
        func_0x000076d0(0x9c,extraout_A0w);
        FUN_0000151c(0x859c);
      }
      if (DAT_0002877e < '\b') {
        iVar7 = (int)sVar4 + (int)*(short *)((short)DAT_0002877f * 0x14 + _DAT_0002884c + 0x186);
        if (30000 < iVar7) {
          iVar7 = 30000;
        }
        func_0x00007498((short)iVar7 -
                        *(short *)((short)DAT_0002877f * 0x14 + _DAT_0002884c + 0x186));
        func_0x00007498(sVar4 * -2);
      }
      if (*(char *)((int)_DAT_0002879a + 0x15) != '\x0f') {
        if (*(ushort *)(_DAT_0002884c + 0x110) == (ushort)*(byte *)((int)_DAT_0002879a + 0x2f)) {
          uVar8 = 0xf;
        }
        else {
          uVar8 = *(undefined1 *)((int)_DAT_0002879a + 0x15);
        }
        *(undefined1 *)((int)_DAT_0002879a + 0x2f) = uVar8;
      }
      *(undefined1 *)(_DAT_0002879a + 0x18) = 0;
      *(char *)((int)_DAT_0002879a + 0x15) = DAT_0002877f;
      *(undefined1 *)((int)_DAT_0002879a + 0x2d) = 0;
      func_0x000074e0((short)_DAT_0002879a);
      sVar4 = 4;
      while (sVar6 = sVar4 + -1, sVar4 != 0) {
        pbVar1 = (byte *)(*(short *)(&DAT_00028792 + sVar6 * 2) * 0xe0 + _DAT_00028850 + 1 +
                         *(short *)(&DAT_0002878a + sVar6 * 2) * 2);
        *pbVar1 = *pbVar1 & 0xef;
        uVar5 = *(undefined2 *)(&DAT_0002878a + sVar6 * 2);
        func_0x000049d8(*(undefined2 *)(&DAT_00028792 + sVar6 * 2));
        func_0x000049d0(*(undefined2 *)(&DAT_00028792 + sVar6 * 2),uVar5);
        sVar4 = sVar6;
      }
      func_0x00004990(1);
      _DAT_0002879a[0x19] = 0;
      sVar6 = func_0x00004938(_DAT_0002879a[1]);
      sVar4 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar2 = sVar4 + -1, sVar4 != 0) {
        psVar10 = (short *)(sVar2 * 0x16 + _DAT_00028854);
        sVar4 = sVar2;
        if ((((DAT_0002877e == *(char *)((int)psVar10 + 5)) && (*psVar10 == -1)) &&
            ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar2 * 0x16) >> 0x1c) == 1)) &&
           ((int)sVar6 == (uint)(*(int *)(_DAT_00028854 + 0xf + sVar2 * 0x16) << 1) >> 0x19)) {
          func_0x00007440(sVar2 * 0x16 + (short)_DAT_00028854);
        }
      }
      for (sVar4 = 0; sVar4 < *(short *)(&DAT_000015c2 + _DAT_0002884c); sVar4 = sVar4 + 1) {
        iVar7 = sVar4 * 0x42 + _DAT_0002884c;
        if (((*(short *)(&DAT_000015f6 + iVar7) != 0) &&
            (*(short *)(&DAT_000015f8 + iVar7) == *_DAT_0002879a)) &&
           (*(short *)(&DAT_000015fa + iVar7) == _DAT_0002879a[1])) {
          *(short *)(&DAT_000015f6 + iVar7) = 0;
          *(undefined2 *)(&DAT_000015fa + sVar4 * 0x42 + _DAT_0002884c) = 0xffff;
          *(undefined2 *)(&DAT_000015f8 + sVar4 * 0x42 + _DAT_0002884c) = 0xffff;
          func_0x00007450();
        }
      }
      func_0x00004930();
      func_0x00004920();
      func_0x00004928();
      uVar5 = (undefined2)(((int)_DAT_0002879a - (_DAT_0002884c + 0x15c4)) / 0x42);
      func_0x00007450();
      func_0x00007558((short)(((int)_DAT_0002879a - (_DAT_0002884c + 0x15c4)) / 0x42),uVar5);
      uVar3 = 0x21;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// Function: FUN_00000846 at 00000846
// Size: 1404 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000846(void)

{
  short *psVar1;
  bool bVar2;
  short sVar3;
  short unaff_D5w;
  short sVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = DAT_0002877f == '\x0f';
  bVar6 = DAT_0002877e == '\x0f';
  if ((bVar5) || (bVar6)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868d; sVar3 = sVar3 + 1) {
    if ((&DAT_0002874e)[sVar3] == '\0') {
      if ((&DAT_00028756)[sVar3] != '\0') {
        if (!bVar5) {
          psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c +
                            0x11a8);
          *psVar1 = *psVar1 + 1;
        }
        if (bVar2) {
          psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c +
                            0x11a8);
          *psVar1 = *psVar1 + 1;
        }
      }
      if ((&DAT_000286d6)[sVar3] == '\x1c') {
        if (!bVar5) {
          psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c +
                            0x11a6);
          *psVar1 = *psVar1 + 1;
        }
        if (bVar2) {
          psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c +
                            0x11a6);
          *psVar1 = *psVar1 + 1;
        }
      }
      else if (*(char *)(_DAT_00028864 + 4 + (short)(char)(&DAT_000286d6)[sVar3] * 6) == '\0') {
        if (*(char *)(_DAT_00028864 + 4 + (short)(char)(&DAT_000286d6)[sVar3] * 6) == '\0') {
          if (!bVar5) {
            psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c
                              + 0x11a2);
            *psVar1 = *psVar1 + 1;
          }
          if (bVar2) {
            psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c
                              + 0x11a2);
            *psVar1 = *psVar1 + 1;
          }
        }
      }
      else {
        if (!bVar5) {
          psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c +
                            0x11a4);
          *psVar1 = *psVar1 + 1;
        }
        if (bVar2) {
          psVar1 = (short *)((short)DAT_0002877f * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c +
                            0x11a4);
          *psVar1 = *psVar1 + 1;
        }
      }
    }
    else {
      unaff_D5w = 1;
    }
  }
  for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868c; sVar3 = sVar3 + 1) {
    if ((&DAT_0002872e)[sVar3] == '\0') {
      if ((&DAT_0002875e)[sVar3] != '\0') {
        if (!bVar6) {
          psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c +
                            0x11a8);
          *psVar1 = *psVar1 + 1;
        }
        if (bVar2) {
          psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c +
                            0x11a8);
          *psVar1 = *psVar1 + 1;
        }
      }
      if ((&DAT_000286b6)[sVar3] == '\x1c') {
        if (!bVar6) {
          psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c +
                            0x11a6);
          *psVar1 = *psVar1 + 1;
        }
        if (bVar2) {
          psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c +
                            0x11a6);
          *psVar1 = *psVar1 + 1;
        }
      }
      else if (*(char *)(_DAT_00028864 + 4 + (short)(char)(&DAT_000286b6)[sVar3] * 6) == '\0') {
        if (*(char *)(_DAT_00028864 + 4 + (short)(char)(&DAT_000286b6)[sVar3] * 6) == '\0') {
          if (!bVar6) {
            psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c
                              + 0x11a2);
            *psVar1 = *psVar1 + 1;
          }
          if (bVar2) {
            psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c
                              + 0x11a2);
            *psVar1 = *psVar1 + 1;
          }
        }
      }
      else {
        if (!bVar6) {
          psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877e * 0x50 + _DAT_0002884c +
                            0x11a4);
          *psVar1 = *psVar1 + 1;
        }
        if (bVar2) {
          psVar1 = (short *)((short)DAT_0002877e * 10 + (short)DAT_0002877f * 0x50 + _DAT_0002884c +
                            0x11a4);
          *psVar1 = *psVar1 + 1;
        }
      }
    }
    else {
      unaff_D5w = 0;
    }
  }
  if (unaff_D5w == 0) {
    for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868d; sVar3 = sVar3 + 1) {
      if ((&DAT_000286d6)[sVar3] == '\x1c') {
        func_0x00006e60(0,(short)((uint)*(undefined4 *)(&DAT_0002866c + sVar3 * 4) >> 0x10));
        for (sVar4 = 0; sVar4 < _DAT_000283d8; sVar4 = sVar4 + 1) {
          if (*(short *)(&DAT_00027fda + sVar4 * 2) < 8) {
            if (bVar2) {
              psVar1 = (short *)((short)DAT_0002877f * 10 +
                                 (short)DAT_0002877e * 0x50 + _DAT_0002884c + 0x11aa);
              *psVar1 = *psVar1 + 1;
            }
            if (!bVar5) {
              psVar1 = (short *)((short)DAT_0002877f * 10 +
                                 (short)DAT_0002877f * 0x50 + _DAT_0002884c + 0x11aa);
              *psVar1 = *psVar1 + 1;
            }
          }
        }
      }
    }
  }
  else {
    for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868c; sVar3 = sVar3 + 1) {
      if ((&DAT_000286b6)[sVar3] == '\x1c') {
        func_0x00006e60(0,(short)((uint)*(undefined4 *)(&DAT_000285ec + sVar3 * 4) >> 0x10));
        for (sVar4 = 0; sVar4 < _DAT_000283d8; sVar4 = sVar4 + 1) {
          if (*(short *)(&DAT_00027fda + sVar4 * 2) < 8) {
            if (bVar2) {
              psVar1 = (short *)((short)DAT_0002877e * 10 +
                                 (short)DAT_0002877f * 0x50 + _DAT_0002884c + 0x11aa);
              *psVar1 = *psVar1 + 1;
            }
            if (!bVar6) {
              psVar1 = (short *)((short)DAT_0002877e * 10 +
                                 (short)DAT_0002877e * 0x50 + _DAT_0002884c + 0x11aa);
              *psVar1 = *psVar1 + 1;
            }
          }
        }
      }
    }
  }
  sVar3 = (short)DAT_0002877e;
  func_0x00007500();
  func_0x00007500(sVar3);
  return;
}



// Function: FUN_00000dc2 at 00000dc2
// Size: 396 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000dc2(void)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  char *pcVar4;
  char *pcVar5;
  short asStackY_10030 [32755];
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  char local_34;
  char local_33;
  undefined1 local_32;
  short local_30 [8];
  undefined2 local_20;
  undefined2 local_1e;
  short local_1c;
  short local_1a;
  char acStack_18 [20];
  
  if ((((DAT_0002877f < '\0') || ('\a' < DAT_0002877f)) || (DAT_0002877e < '\0')) ||
     ('\a' < DAT_0002877e)) {
    return;
  }
  local_3a = 1;
  local_34 = DAT_0002877f;
  local_33 = DAT_0002877e;
  local_32 = 0;
  local_20 = _DAT_0002878a;
  local_1e = _DAT_00028792;
  local_38 = 0;
  local_36 = 0;
  local_1c = 0;
  local_1a = 0;
  for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868c; sVar3 = sVar3 + 1) {
    if ((&DAT_000286b6)[sVar3] == '\x1c') {
      local_36 = 1;
    }
    if ((&DAT_0002872e)[sVar3] == '\0') {
      if ((&DAT_000286b6)[sVar3] == '\x1c') {
        local_1a = local_1a + 1;
      }
      else {
        local_1c = local_1c + 1;
      }
    }
    else {
      local_38 = 1;
    }
  }
  for (sVar3 = 0; (int)sVar3 < (int)DAT_0002868d; sVar3 = sVar3 + 1) {
    local_30[sVar3] = (short)(char)(&DAT_000286d6)[sVar3];
  }
  for (; sVar3 < 8; sVar3 = sVar3 + 1) {
    local_30[sVar3] = -1;
  }
  bVar2 = false;
  sVar3 = 0;
  while( true ) {
    if ((int)DAT_0002868d <= (int)sVar3) goto LAB_00000f16;
    if ((&DAT_000286d6)[sVar3] == '\x1c') break;
    sVar3 = sVar3 + 1;
  }
  pcVar4 = acStack_18;
  pcVar5 = (char *)((short)*(char *)(*(int *)(&DAT_0002866c + sVar3 * 4) + 10) * 0x14 +
                    _DAT_0002884c + 0x224);
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  bVar2 = true;
LAB_00000f16:
  if (!bVar2) {
    pcVar4 = acStack_18;
    pcVar5 = (char *)((short)DAT_0002877f * 0x14 + _DAT_0002884c);
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  func_0x00007560(&local_3a);
  return;
}



// Function: FUN_00000f4e at 00000f4e
// Size: 1486 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f4e(undefined4 param_1)

{
  short sVar1;
  bool bVar2;
  short sVar4;
  short sVar5;
  int iVar3;
  short sVar6;
  short *psVar7;
  int *extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  undefined2 extraout_A0w_08;
  undefined4 extraout_A0_03;
  undefined2 extraout_A0w_09;
  undefined2 extraout_A0w_10;
  undefined2 extraout_A0w_11;
  undefined4 extraout_A0_04;
  undefined2 extraout_A0w_12;
  int unaff_A2;
  bool bVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 auStack_85a [256];
  undefined1 auStack_75a [256];
  undefined1 auStack_65a [256];
  undefined1 auStack_55a [256];
  undefined1 auStack_45a [256];
  undefined1 auStack_35a [256];
  undefined1 auStack_25a [256];
  undefined1 auStack_15a [256];
  short local_5a;
  char local_58;
  char local_57;
  short local_56;
  short local_54;
  short local_52 [2];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  sVar6 = 0;
  bVar8 = false;
  for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
    if (*(int *)(&DAT_000288b4 + sVar4 * 4) != 0) {
      if ((*(char *)(*(int *)(&DAT_000288b4 + sVar4 * 4) + 4) != '\x1c') &&
         (*(char *)(_DAT_00028864 + 4 +
                   (short)*(char *)(*(int *)(&DAT_000288b4 + sVar4 * 4) + 4) * 6) == '\0')) {
        sVar6 = sVar6 + 1;
      }
      if ((*(ushort *)(*(int *)(&DAT_000288b4 + sVar4 * 4) + 0xc) & 0x1000) != 0) {
        bVar8 = true;
      }
    }
  }
  sVar4 = 0;
  sVar5 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar5 + -1, sVar5 != 0) {
    iVar3 = sVar1 * 0x16 + _DAT_00028854;
    sVar5 = sVar1;
    if (((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar3 + 5)) &&
         (local_57 = *(char *)(iVar3 + 4), local_57 != '\x1c')) &&
        (*(char *)(_DAT_00028864 + 4 + (short)local_57 * 6) == '\0')) &&
       ('\0' < *(char *)(iVar3 + 10))) {
      sVar4 = sVar4 + 1;
    }
  }
  local_52[0] = sVar4 * -5 + 0x28;
  local_52[1] = 0xc;
  if (local_52[0] < 0xc) {
    psVar7 = local_52 + 1;
  }
  else {
    psVar7 = local_52;
  }
  local_5a = *psVar7;
  if ((DAT_0002868d < '\x02') || (DAT_0002868c < '\x02')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_56 = 1;
  local_54 = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar7 = &local_56;
  }
  else {
    psVar7 = &local_54;
  }
  if (((*psVar7 < 0x14) && (!bVar2)) && (('\0' < DAT_0002868c && ('\x03' < DAT_0002868e)))) {
    bVar2 = true;
  }
  if ((((!bVar8) && (param_1._0_2_ == 1)) && (bVar2)) && (0 < sVar6)) {
    sVar4 = func_0x00002ad0(100);
    if ((sVar4 < local_5a) && (_DAT_000288b0 != 0)) {
      sVar5 = func_0x00002ad0(sVar6);
      sVar4 = 0;
      for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
        if (((*(int *)(&DAT_000288b4 + sVar6 * 4) != 0) &&
            (local_58 = *(char *)(*(int *)(&DAT_000288b4 + sVar6 * 4) + 4), local_58 != '\x1c')) &&
           (*(char *)(_DAT_00028864 + 4 + (short)local_58 * 6) == '\0')) {
          bVar8 = sVar4 == sVar5;
          sVar4 = sVar4 + 1;
          if (bVar8) {
            unaff_A2 = *(int *)(&DAT_000288b4 + sVar6 * 4);
            break;
          }
        }
      }
      if (*(char *)(unaff_A2 + 10) < '\x04') {
        *(char *)(unaff_A2 + 10) = *(char *)(unaff_A2 + 10) + '\x01';
        bVar8 = '\x0e' < *(char *)(unaff_A2 + 8);
        if (bVar8) {
          *(char *)(unaff_A2 + 6) = *(char *)(unaff_A2 + 6) + '\x01';
        }
        else {
          func_0x00004900((short)unaff_A2);
        }
        if (*(short *)(DAT_0002877f * 2 + _DAT_0002884c + 0xd0) == 0) {
          uVar10 = 8;
          func_0x000029e8();
          local_8 = (int *)0x0;
          (**(code **)(*_DAT_000257ee + 0x68))
                    ((short)_DAT_000257ee,
                     (short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10),uVar10);
          local_8 = extraout_A0;
          func_0x00001bf0((short)extraout_A0);
          local_1a = 0;
          local_18 = 0;
          local_10 = 0;
          local_c = 0;
          local_14 = _DAT_00025f52;
          _DAT_00025f52 = auStack_4e;
          iVar3 = func_0x000076a8((short)auStack_4e);
          if (iVar3 == 0) {
            (**(code **)(*local_8 + 0x188))((short)local_8,0x61);
            if (extraout_A0_00 != (int *)0x0) {
              (**(code **)(*extraout_A0_00 + 0x3d8))();
            }
            (**(code **)(*local_8 + 0x188))((short)local_8,0x79);
            if (extraout_A0_01 != 0) {
              uVar10 = 0x82;
              func_0x00004768((short)extraout_A0_01,(short)*(char *)(unaff_A2 + 5));
              func_0x00004778((short)extraout_A0_01,0,uVar10);
            }
            func_0x00002ad8(0xffff);
            func_0x00007320((short)auStack_15a,extraout_A0w);
            uVar12 = (undefined2)((uint)extraout_A0_02 >> 0x10);
            uVar11 = 0x6c69;
            uVar9 = (undefined2)((uint)local_8 >> 0x10);
            func_0x00006e38((char)local_8,0x6e31,(short)extraout_A0_02);
            func_0x000032f8(uVar9,uVar11,uVar12);
            func_0x00002ad8(0,extraout_A0w_00);
            func_0x000076d0(0x278a8,extraout_A0w_01);
            func_0x00007320((short)auStack_25a,0x78a8);
            func_0x00006e38(local_8,0x6e32,extraout_A0w_02);
            func_0x00002ad8(0xffff);
            func_0x00007320((short)auStack_35a,extraout_A0w_03);
            func_0x00006e38(local_8,0x6e33,extraout_A0w_04);
            func_0x00002ad8(*(char *)(unaff_A2 + 10) + -1);
            func_0x00007320(auStack_45a,extraout_A0w_05);
            func_0x00006e38(local_8,0x6c696e34,extraout_A0w_06);
            if (bVar8) {
              func_0x00002ad8(1);
              func_0x00007320((short)auStack_75a,extraout_A0w_10);
              func_0x00006e38((char)local_8,0x6e35,extraout_A0w_11);
              func_0x00002ad8(0xa30002,*(char *)(unaff_A2 + 6) + -1,(short)*(char *)(unaff_A2 + 6));
              uVar9 = 2;
              func_0x000076d0(0xa8,extraout_A0_04);
              func_0x00007320(auStack_85a,0x78a8,uVar9);
              func_0x00006e38((char)local_8,0x6c696e36,extraout_A0w_12);
            }
            else {
              func_0x00002ad8(0);
              func_0x00007320((short)auStack_55a,extraout_A0w_07);
              func_0x00006e38((char)local_8,0x6e35,extraout_A0w_08);
              func_0x00002ad8(0xa30002,*(char *)(unaff_A2 + 8) + -1,(short)*(char *)(unaff_A2 + 8));
              uVar9 = 2;
              func_0x000076d0(0xa8,extraout_A0_03);
              func_0x00007320(auStack_65a,0x78a8,uVar9);
              func_0x00006e38((char)local_8,0x6c696e36,extraout_A0w_09);
            }
            (**(code **)(*local_8 + 0x40c))();
            (**(code **)(*local_8 + 0x3a0))();
            local_8 = (int *)0x0;
            _DAT_00025f52 = local_14;
          }
          else {
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 0x3a0))();
            }
            local_8 = (int *)0x0;
            func_0x00001c10((short)((uint)local_18 >> 0x10));
          }
          func_0x000029e8();
        }
      }
    }
  }
  return;
}



// Function: FUN_0000151c at 0000151c
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000151c(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_104 [256];
  
  func_0x00007320(auStack_104,param_1);
  iVar1 = (int)_DAT_000284f6;
  _DAT_000284f6 = _DAT_000284f6 + 1;
  func_0x00006e38(_DAT_000284ea,iVar1 + 0x6c696e31,extraout_A0);
  (**(code **)(*_DAT_000284ea + 0x268))();
  return;
}



// Function: FUN_0000156c at 0000156c
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000156c(void)

{
  if (_DAT_000284ea != (int *)0x0) {
    (**(code **)(*_DAT_000284ea + 0x40c))();
    (**(code **)(*_DAT_000284ea + 0x3a0))();
    _DAT_000284ea = (int *)0x0;
  }
  return;
}



