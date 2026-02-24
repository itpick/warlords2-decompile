// Warlords II - Decompiled 68k Code
// Segment: CODE_106
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000000c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = *(short *)(_DAT_00028978 + 0x24a);
  do {
    sVar1 = sVar2 + -1;
    if (sVar2 == 0) {
      return 0;
    }
    iVar3 = sVar1 * 0x5c + _DAT_00028978;
    sVar2 = sVar1;
  } while ((*(short *)(iVar3 + 0x24c) == 0) || (*(short *)(iVar3 + 0x250) != param_1._0_2_));
  return 1;
}



// Function: FUN_0000004a at 0000004a
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000004a(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x24c) = 0;
  *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x24e) = 0xffff;
  *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250) = 0xffff;
  *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a6) = 0;
  *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x2a4) = 0;
  sVar2 = 4;
  while (sVar2 != 0) {
    *(undefined2 *)((short)(sVar2 + -1) * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x252) = 0xffff
    ;
    sVar2 = sVar2 + -1;
  }
  sVar2 = 6;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    *(undefined2 *)(sVar1 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x27e) = 0xffff;
    *(undefined2 *)(sVar1 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x272) = 0xffff;
    *(undefined2 *)(sVar1 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x292) = 0xffff;
    *(undefined2 *)(sVar1 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) = 0xffff;
    sVar2 = sVar1;
  }
  sVar2 = 4;
  while (sVar2 != 0) {
    *(undefined2 *)((short)(sVar2 + -1) * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x28a) = 0xffff
    ;
    sVar2 = sVar2 + -1;
  }
  return;
}



// Function: FUN_0000016e at 0000016e
// Size: 186 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000016e(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  
  sVar4 = -1;
  uVar5 = 0xffff;
  sVar2 = 0;
  do {
    if (7 < sVar2) {
      _DAT_000288b0 = 0;
      _DAT_000288ac = 0;
      if ((param_1._0_2_ != 0) && (sVar4 != -1)) {
        func_0x00002d98(CONCAT22(sVar4,uVar5));
      }
      func_0x000074c0();
      return;
    }
    if (*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) {
      uVar3 = *(ushort *)(_DAT_0002884c + 0x182);
      do {
        uVar1 = uVar3 - 1;
        if (uVar3 == 0) break;
        uVar3 = uVar1;
      } while ((short)uVar1 * 0x16 + _DAT_00028854 != *(int *)(&DAT_000288b4 + sVar2 * 4));
      sVar4 = **(short **)(&DAT_000288b4 + sVar2 * 4);
      uVar5 = *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 2);
      if (uVar1 != 0xffff) {
        func_0x00002d88((uint)uVar1 << 0x10);
      }
      *(undefined4 *)(&DAT_000288b4 + sVar2 * 4) = 0;
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_00000228 at 00000228
// Size: 198 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000228(void)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  
  if (*_DAT_00028978 != 0) {
    func_0x00002ee8();
    sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
    while (sVar2 = sVar3 + -1, sVar3 != 0) {
      sVar3 = sVar2;
      if (((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) ==
           (int)*(short *)(_DAT_0002884c + 0x110)) &&
         (pcVar1 = (char *)((int)_DAT_00028978 + sVar2 + 0x56), *pcVar1 == '\a')) {
        *pcVar1 = '\b';
      }
    }
    if (_DAT_00028978[0x125] != 0) {
      for (sVar3 = 0; sVar3 < _DAT_00028978[0x125]; sVar3 = sVar3 + 1) {
        if (_DAT_00028978[sVar3 * 0x2e + 0x126] != 0) {
          *(undefined1 *)((int)_DAT_00028978 + _DAT_00028978[sVar3 * 0x2e + 0x128] + 0x56) = 7;
          sVar2 = FUN_000002ee();
          if (sVar2 != 0) {
            _DAT_00028978[sVar3 * 0x2e + 0x126] = _DAT_00028978[sVar3 * 0x2e + 0x126] + 1;
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_000002ee at 000002ee
// Size: 524 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002ee(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  short sVar5;
  undefined4 uVar4;
  short sVar6;
  int iVar7;
  undefined2 uVar8;
  
  sVar5 = func_0x00004938(*(undefined2 *)
                           (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x196));
  cVar1 = *(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9);
  if ((cVar1 != '\x0f') && ((int)cVar1 != (int)*(short *)(_DAT_0002884c + 0x110))) {
    bVar3 = false;
    sVar6 = *(short *)(_DAT_00028978 + 0x24a);
    while (sVar2 = sVar6 + -1, sVar6 != 0) {
      iVar7 = sVar2 * 0x5c + _DAT_00028978;
      sVar6 = sVar2;
      if (*(short *)(iVar7 + 0x24c) != 0) {
        if ((int)*(short *)(iVar7 + 0x24e) == (int)*(char *)(sVar5 * 0x42 + _DAT_0002884c + 0x15d9))
        {
          bVar3 = true;
        }
        else if (*(short *)(sVar2 * 0x5c + _DAT_00028978 + 0x24c) == 0) {
          bVar3 = true;
        }
      }
    }
    if (!bVar3) {
      FUN_0000080a();
      return 0;
    }
  }
  sVar5 = FUN_00000604();
  if (sVar5 == 0) {
    FUN_0000085e();
    uVar4 = 0;
  }
  else {
    FUN_0000175a();
    bVar3 = false;
    sVar5 = *(short *)(_DAT_00028978 + 0x24a);
    while (sVar6 = sVar5 + -1, sVar5 != 0) {
      iVar7 = sVar6 * 0x5c + _DAT_00028978;
      sVar5 = sVar6;
      if (((*(short *)(iVar7 + 0x24c) != 0) && (sVar6 != param_1._0_2_)) &&
         (*(short *)(iVar7 + 0x250) == *(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250))) {
        bVar3 = true;
      }
    }
    if (((bVar3) ||
        ((int)*(char *)(*(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250) * 0x42 +
                        _DAT_0002884c + 0x15d9) != (int)*(short *)(_DAT_0002884c + 0x110))) &&
       (sVar5 = FUN_000004fa(), sVar5 == 0)) {
      return 0;
    }
    FUN_00000b74();
    if (*(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x24c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar8 = *(undefined2 *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250);
      func_0x00002d90(1);
      sVar5 = FUN_000008dc(uVar8);
      if ((sVar5 != 0) && (-1 < *(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250))) {
        func_0x00002d90(1);
      }
      if (*(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x24c) == 0) {
        uVar4 = 0;
      }
      else {
        FUN_000018d8();
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



// Function: FUN_000004fa at 000004fa
// Size: 266 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000004fa(undefined4 param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte abStackY_8010 [32718];
  undefined1 auStack_1a [6];
  undefined2 local_14;
  undefined2 local_12;
  byte abStack_10 [6];
  undefined2 local_a;
  undefined2 local_8;
  short local_6;
  
  uVar3 = *(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250);
  iVar6 = (short)uVar3 * 0x42 + _DAT_0002884c;
  local_8 = *(undefined2 *)(iVar6 + 0x15c4);
  local_a = *(undefined2 *)(iVar6 + 0x15c6);
  func_0x00002d78((uint)uVar3 << 0x10,(short)abStack_10,(short)auStack_1a);
  sVar5 = 1000;
  sVar4 = 6;
  uVar3 = 0xffff;
  while (sVar2 = sVar4 + -1, sVar4 != 0) {
    bVar1 = abStack_10[sVar2];
    sVar4 = sVar2;
    if ((bVar1 != 0xff) &&
       ((int)*(char *)((short)(ushort)bVar1 * 0x42 + _DAT_0002884c + 0x15d9) ==
        (int)*(short *)(_DAT_0002884c + 0x110))) {
      sVar2 = FUN_0000000c();
      if (sVar2 == 0) {
        iVar6 = (short)(ushort)bVar1 * 0x42 + _DAT_0002884c;
        local_14 = *(undefined2 *)(iVar6 + 0x15c6);
        local_12 = *(undefined2 *)(iVar6 + 0x15c4);
        local_6 = func_0x00006e48(local_14,local_a);
        if (local_6 < sVar5) {
          sVar5 = local_6;
          uVar3 = (ushort)bVar1;
        }
      }
    }
  }
  if (uVar3 == 0xffff) {
    FUN_0000085e();
  }
  else {
    *(ushort *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250) = uVar3;
  }
  return uVar3 != 0xffff;
}



// Function: FUN_00000604 at 00000604
// Size: 518 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000604(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  byte abStackY_8016 [6];
  byte abStackY_8010 [32724];
  byte abStack_16 [6];
  byte abStack_10 [6];
  short local_a;
  short local_8;
  ushort local_6;
  
  local_8 = 0;
  local_a = *(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x24e);
  for (sVar4 = 0; sVar4 < 6; sVar4 = sVar4 + 1) {
    sVar2 = *(short *)(sVar4 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a);
    if (sVar2 != -1) {
      if ((sVar2 == *(short *)(_DAT_00028978 + 0x46)) ||
         ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) != (int)local_a)) {
        *(undefined2 *)(sVar4 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) = 0xffff;
      }
      else {
        local_8 = local_8 + 1;
      }
    }
  }
  func_0x00002d78(0,abStack_16,abStack_10);
  sVar4 = 6;
  do {
    do {
      do {
        sVar2 = sVar4 + -1;
        if (sVar4 == 0) {
          return local_8;
        }
        local_6 = (ushort)abStack_16[sVar2];
        sVar4 = sVar2;
      } while (((local_6 == 0xff) ||
               ((int)*(char *)((short)local_6 * 0x42 + _DAT_0002884c + 0x15d9) != (int)local_a)) ||
              ((*(byte *)((short)local_6 + _DAT_00028978 + 0x11e) & 1) != 0));
      bVar3 = true;
      sVar5 = 6;
      while( true ) {
        sVar6 = sVar5 + -1;
        if (sVar5 == 0) break;
        sVar5 = sVar6;
        if (*(ushort *)(sVar6 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) == local_6) {
          bVar3 = false;
        }
      }
    } while (!bVar3);
    local_8 = local_8 + 1;
    sVar5 = 0;
    sVar6 = 6;
    sVar7 = -1;
    while( true ) {
      sVar1 = sVar6 + -1;
      if (sVar6 == 0) break;
      if (*(short *)(sVar1 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) == -1) {
        sVar5 = -1;
        sVar7 = sVar1;
        break;
      }
      iVar8 = param_1._0_2_ * 0x5c + _DAT_00028978;
      sVar6 = sVar1;
      if (sVar5 < *(short *)(sVar1 * 2 + iVar8 + 0x272)) {
        sVar5 = *(short *)(sVar1 * 2 + iVar8 + 0x272);
        sVar7 = sVar1;
      }
    }
    if ((sVar7 != -1) && ((sVar5 == -1 || ((short)(ushort)abStack_10[sVar2] < sVar5)))) {
      *(ushort *)(sVar7 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) = local_6;
      *(ushort *)(sVar7 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x272) =
           (ushort)abStack_10[sVar2];
    }
  } while( true );
}



// Function: FUN_0000080a at 0000080a
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000080a(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar3 = *(short *)(_DAT_00028978 + 0x24a);
  sVar5 = -1;
  sVar4 = -1;
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    sVar1 = *(short *)(sVar2 * 0x5c + _DAT_00028978 + 0x24c);
    sVar3 = sVar2;
    if ((sVar1 != 0) && (sVar5 < sVar1)) {
      sVar5 = sVar1;
      sVar4 = sVar2;
    }
  }
  if (sVar4 != -1) {
    FUN_0000085e();
  }
  return;
}



// Function: FUN_0000085e at 0000085e
// Size: 126 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000085e(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  *(undefined1 *)
   (_DAT_00028978 + 0x56 + (int)*(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250)) = 8;
  sVar2 = 4;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    iVar3 = param_1._0_2_ * 0x5c + _DAT_00028978;
    sVar2 = sVar1;
    if (*(short *)(sVar1 * 2 + iVar3 + 0x252) != -1) {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)*(short *)(sVar1 * 2 + iVar3 + 0x252)) = 8;
    }
  }
  FUN_0000004a();
  return;
}



// Function: FUN_000008dc at 000008dc
// Size: 484 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000008dc(undefined4 param_1)

{
  uint *puVar1;
  short sVar2;
  short sVar4;
  undefined4 uVar3;
  short sVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  short asStackY_10014 [32738];
  undefined2 uVar10;
  short local_22 [3];
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short asStack_14 [8];
  
  sVar7 = -1;
  local_18 = -1;
  sVar4 = func_0x00003e40(*(undefined2 *)
                           (*(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250) * 0x42 +
                            _DAT_0002884c + 0x15c6),(short)asStack_14);
  if (sVar4 == 0) {
    uVar3 = 0;
  }
  else {
    for (sVar6 = 0; sVar6 < 6; sVar6 = sVar6 + 1) {
      iVar9 = param_1._0_2_ * 0x5c + _DAT_00028978;
      sVar2 = *(short *)(sVar6 * 2 + iVar9 + 0x25a);
      if (sVar2 != -1) {
        local_22[2] = _DAT_000288f6 + -2;
        local_1c = 1;
        if ((short)(_DAT_000288f6 + -2) < 1) {
          psVar8 = &local_1c;
        }
        else {
          psVar8 = local_22 + 2;
        }
        local_16 = *(short *)(sVar6 * 2 + iVar9 + 0x272) / *psVar8 + 1;
        iVar9 = sVar2 * 0x42 + _DAT_0002884c;
        uVar10 = *(undefined2 *)(iVar9 + 0x15c4);
        local_1a = func_0x00002cb8(*(undefined2 *)(iVar9 + 0x15c6));
        sVar5 = func_0x00002ad0(4,uVar10);
        local_22[0] = 10 - local_16;
        local_22[1] = 0;
        if ((short)(10 - local_16) < 0) {
          psVar8 = local_22 + 1;
        }
        else {
          psVar8 = local_22;
        }
        sVar5 = sVar5 + *psVar8 + local_1a +
                        *(short *)(sVar6 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x27e);
        if (local_16 == 1) {
          sVar5 = sVar5 + 100;
        }
        if (((0x4b < local_1a) || (7 < sVar4)) && (local_18 < sVar5)) {
          local_18 = sVar5;
          sVar7 = sVar2;
        }
      }
    }
    if (sVar7 == -1) {
      uVar3 = 0;
    }
    else {
      FUN_00000ac0((short)((uint)asStack_14 >> 0x10));
      sVar4 = 8;
      while (sVar6 = sVar4 + -1, sVar4 != 0) {
        sVar4 = sVar6;
        if (asStack_14[sVar6] != -1) {
          puVar1 = (uint *)(_DAT_00028854 + 0xe + asStack_14[sVar6] * 0x16);
          *puVar1 = *puVar1 & 0xf1ffffff | ((int)param_1._0_2_ + 1U & 7) << 0x19;
        }
      }
      FUN_000010aa((short)((uint)asStack_14 >> 0x10),sVar7);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// Function: FUN_00000b74 at 00000b74
// Size: 390 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000b74(undefined4 param_1)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  short asStackY_10014 [32746];
  undefined2 uVar8;
  short asStack_14 [8];
  
  sVar6 = 4;
  do {
    sVar1 = sVar6 + -1;
    if (sVar6 == 0) {
      return 1;
    }
    do {
      bVar2 = true;
      FUN_00001404();
      iVar7 = param_1._0_2_ * 0x5c + _DAT_00028978;
      sVar6 = sVar1;
      if (*(short *)(sVar1 * 2 + iVar7 + 0x28a) == -1) break;
      sVar4 = *(short *)(sVar1 * 2 + iVar7 + 0x28a);
      sVar3 = func_0x00002de0(*(undefined2 *)(sVar4 * 0x16 + _DAT_00028854 + 2),(short)asStack_14,
                              (ushort)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar4 * 0x16) >>
                                      0x1c));
      if (sVar3 == 0) break;
      uVar8 = *(undefined2 *)(_DAT_000288ac + 0x12);
      func_0x00007410(*(undefined2 *)(_DAT_000288ac + 0x14));
      func_0x00002e10(*(undefined2 *)(sVar4 * 0x16 + _DAT_00028854),_DAT_000288fa,uVar8);
      sVar4 = FUN_00000cfa();
      if (sVar4 == 0) {
        uVar5 = 0xffff;
        sVar4 = 8;
        do {
          sVar3 = sVar4 + -1;
          if (sVar4 == 0) goto LAB_00000cc8;
          sVar4 = sVar3;
        } while (asStack_14[sVar3] == -1);
        if ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + asStack_14[sVar3] * 0x16) >> 0x1c) ==
            1) {
          uVar5 = (ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + asStack_14[sVar3] * 0x16) << 1) >>
                          0x19);
        }
LAB_00000cc8:
        if (uVar5 != 0xffff) {
          FUN_000010aa((short)((uint)asStack_14 >> 0x10),uVar5);
        }
        bVar2 = false;
      }
      else if ((sVar4 == 1) || ((sVar4 != 2 && (sVar4 == 3)))) {
        bVar2 = false;
      }
    } while (bVar2);
  } while( true );
}



// Function: FUN_00000cfa at 00000cfa
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000cfa(undefined4 param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined2 extraout_A0u;
  undefined1 auStack_8 [2];
  undefined1 auStack_6 [2];
  
  func_0x00002e40();
  sVar4 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar6 = 1000;
  sVar5 = -1;
  while (sVar1 = sVar4 + -1, sVar4 != 0) {
    sVar4 = sVar1;
    if ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == (int)param_2) {
      sVar2 = func_0x00002e00((short)((uint)auStack_6 >> 0x10),(short)((uint)auStack_8 >> 0x10),
                              extraout_A0u,0);
      if ((sVar2 < 0x32) && (sVar2 < _DAT_000288f6)) {
        sVar3 = func_0x00002cb8(*(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6));
        if ((0x4b < sVar3) && (sVar2 < sVar6)) {
          sVar6 = sVar2;
          sVar5 = sVar1;
        }
      }
    }
  }
  sVar4 = FUN_00000dde();
  if ((sVar4 != 0) && (sVar5 != -1)) {
    sVar4 = FUN_000010aa();
  }
  func_0x00002e48();
  return sVar4;
}



// Function: FUN_00000dde at 00000dde
// Size: 716 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00000dde(short *param_1,undefined4 param_2,int *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short *psVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  undefined2 local_8;
  short local_6;
  
  sVar9 = *param_1;
  psVar12 = (short *)(sVar9 * 0x16 + _DAT_00028854);
  local_a = *psVar12;
  local_c = psVar12[1];
  sVar11 = -1;
  local_6 = -1;
  local_e = 0;
  local_8 = 0;
  if ((psVar12[6] & 0x1000U) == 0) {
    for (sVar8 = local_a - param_2._2_2_; (int)sVar8 < (int)param_2._2_2_ + (int)local_a;
        sVar8 = sVar8 + 1) {
      for (sVar10 = local_c - param_2._2_2_; (int)sVar10 < (int)param_2._2_2_ + (int)local_c;
          sVar10 = sVar10 + 1) {
        if ((((((-1 < sVar8) && (-1 < sVar10)) && (sVar8 < 0x70)) &&
             (((sVar10 < 0x9c &&
               ((*(byte *)(sVar10 * 0xe0 + _DAT_00028850 + 1 + sVar8 * 2) & 0x10) != 0)) &&
              (((ushort)((uint)(*(int *)(sVar10 * 0xe0 + _DAT_00028850 + 1 + sVar8 * 2) << 4) >>
                        0x1c) == param_2._0_2_ &&
               ((cVar3 = *(char *)((*(uint *)(sVar10 * 0xe0 + _DAT_00028850 + sVar8 * 2) >> 0x18) +
                                   _DAT_0002884c + 0x711), cVar3 != '\n' && (cVar3 != '\x03'))))))))
            && (cVar3 != '\x02')) &&
           ((iVar4 = (int)_DAT_000288f6,
            iVar5 = func_0x000076d8(*(undefined2 *)(sVar8 * 0x138 + *param_3 + sVar10 * 2)),
            iVar5 <= iVar4 + -1 &&
            ((*(byte *)(sVar10 * 0x70 + _DAT_00028858 + (int)sVar8) & 0x20) != 0)))) {
          FUN_00001a42(sVar10,(short)&local_10,(short)&local_12,(short)&local_14);
          sVar6 = func_0x00002cb8(sVar10);
          if (((0x4b < sVar6) && (((2 < local_10 && (10 < local_12)) || (local_14 != 0)))) &&
             (local_e < sVar6)) {
            local_e = sVar6;
            local_6 = sVar10;
            sVar11 = sVar8;
          }
        }
      }
    }
    if (sVar11 != -1) {
      if ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar9 * 0x16) >> 0x1c) == 1) {
        uVar7 = (ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar9 * 0x16) << 1) >> 0x19);
      }
      else {
        uVar7 = 0xffff;
      }
      uVar16 = 0x20;
      uVar15 = 4;
      uVar14 = (undefined2)((uint)param_1 >> 0x10);
      func_0x00003e38((short)param_1,0);
      *(short *)(_DAT_000288ac + 0x12) = sVar11;
      *(short *)(_DAT_000288ac + 0x14) = local_6;
      uVar13 = (undefined2)((uint)_DAT_000288ac >> 0x10);
      func_0x00007448((short)_DAT_000288ac);
      func_0x00002c38(local_6,uVar13,uVar14,uVar15,uVar16);
      for (sVar9 = 0; iVar4 = _DAT_00028854, sVar9 < 8; sVar9 = sVar9 + 1) {
        if (param_1[sVar9] != -1) {
          if ((int)*(short *)(_DAT_0002884c + 0x110) ==
              (int)*(char *)(_DAT_00028854 + 5 + param_1[sVar9] * 0x16)) {
            if (uVar7 != 0xffff) {
              sVar11 = param_1[sVar9];
              pbVar1 = (byte *)(_DAT_00028854 + 0xe + sVar11 * 0x16);
              *pbVar1 = *pbVar1 & 0xf;
              pbVar1 = (byte *)(iVar4 + 0xe + sVar11 * 0x16);
              *pbVar1 = *pbVar1 | 0x10;
              puVar2 = (uint *)(iVar4 + 0xf + param_1[sVar9] * 0x16);
              *puVar2 = *puVar2 & 0x80ffffff | (uVar7 & 0x7f) << 0x18;
              func_0x00007448(param_1[sVar9] * 0x16 + (short)iVar4);
            }
          }
          else {
            param_1[sVar9] = -1;
          }
        }
      }
      local_8 = 2;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_00001404 at 00001404
// Size: 214 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001404(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 auStack_10014 [4];
  undefined2 auStack_1000c [32758];
  undefined2 auStack_14 [4];
  undefined2 auStack_c [4];
  
  sVar3 = 4;
  while (sVar2 = sVar3 + -1, sVar3 != 0) {
    auStack_14[sVar2] = 0xffff;
    auStack_c[sVar2] = 0xffff;
    iVar4 = param_1._0_2_ * 0x5c + _DAT_00028978;
    sVar3 = sVar2;
    if (*(short *)(sVar2 * 2 + iVar4 + 0x28a) != -1) {
      sVar1 = *(short *)(sVar2 * 2 + iVar4 + 0x28a);
      if (((int)*(short *)(_DAT_0002884c + 0x110) ==
           (int)*(char *)(_DAT_00028854 + 5 + sVar1 * 0x16)) &&
         ((int)param_1._0_2_ + 1U ==
          (uint)(*(int *)(_DAT_00028854 + 0xe + sVar1 * 0x16) << 4) >> 0x1d)) {
        puVar5 = (undefined2 *)(sVar1 * 0x16 + _DAT_00028854);
        auStack_c[sVar2] = *puVar5;
        auStack_14[sVar2] = puVar5[1];
      }
      else {
        *(undefined2 *)(sVar2 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x28a) = 0xffff;
      }
    }
  }
  return;
}



// Function: FUN_000014da at 000014da
// Size: 640 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000014da(undefined4 param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  byte local_12 [6];
  short local_c;
  byte local_a [6];
  
  bVar3 = false;
  iVar9 = param_1._0_2_ * 0x5c + _DAT_00028978;
  local_c = *(short *)(iVar9 + 0x250);
  sVar1 = *(short *)(iVar9 + 0x24e);
  if (local_c == param_1._2_2_) {
    uVar4 = 0;
  }
  else {
    func_0x00002d90(1);
    for (sVar5 = 0; sVar5 < 6; sVar5 = sVar5 + 1) {
      if (*(short *)(sVar5 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) == param_1._2_2_) {
        *(undefined2 *)(sVar5 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) = 0xffff;
        break;
      }
    }
    sVar5 = 0;
    func_0x00002d78(0,(short)local_12,(short)local_a);
    for (sVar6 = 0; sVar6 < 6; sVar6 = sVar6 + 1) {
      if ((local_12[sVar6] != 0xff) &&
         ((int)*(char *)((short)(ushort)local_12[sVar6] * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)sVar1)) {
        if (local_a[sVar6] < 10) {
          sVar5 = sVar5 + 1;
        }
        if (local_a[sVar6] < 0x14) {
          sVar5 = sVar5 + 1;
        }
        if (local_a[sVar6] < 0x1e) {
          sVar5 = sVar5 + 1;
        }
        if (local_a[sVar6] < 0x32) {
          sVar5 = sVar5 + 1;
        }
      }
    }
    sVar6 = 0;
    func_0x00002d78(0,(short)local_12,(short)local_a);
    for (sVar7 = 0; sVar7 < 6; sVar7 = sVar7 + 1) {
      if ((local_12[sVar7] != 0xff) &&
         ((int)*(char *)((short)(ushort)local_12[sVar7] * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)sVar1)) {
        if (local_a[sVar7] < 10) {
          sVar6 = sVar6 + 1;
        }
        if (local_a[sVar7] < 0x14) {
          sVar6 = sVar6 + 1;
        }
        if (local_a[sVar7] < 0x1e) {
          sVar6 = sVar6 + 1;
        }
        if (local_a[sVar7] < 0x32) {
          sVar6 = sVar6 + 1;
        }
      }
    }
    if ((sVar5 == 0) && (sVar6 == 0)) {
      bVar3 = true;
    }
    if (sVar6 < sVar5) {
      psVar8 = (short *)((int)&param_1 + 2);
    }
    else {
      psVar8 = &local_c;
    }
    sVar1 = *psVar8;
    bVar2 = false;
    for (sVar5 = 0; sVar5 < 6; sVar5 = sVar5 + 1) {
      if (sVar1 == *(short *)(sVar5 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x292)) {
        bVar2 = true;
        break;
      }
    }
    if (!bVar2) {
      for (sVar5 = 0; sVar5 < 6; sVar5 = sVar5 + 1) {
        if (*(short *)(sVar5 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x292) == -1) {
          *(short *)(sVar5 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x292) = sVar1;
          break;
        }
      }
    }
    if (bVar3) {
      FUN_0000085e();
      uVar4 = 0;
    }
    else {
      *(short *)(param_1._0_2_ * 0x5c + _DAT_00028978 + 0x250) = sVar1;
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)param_1._2_2_) = 7;
      FUN_000018d8();
      uVar4 = 1;
    }
  }
  return uVar4;
}



// Function: FUN_0000175a at 0000175a
// Size: 382 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000175a(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  undefined1 auStack_16 [6];
  byte local_10 [6];
  short local_a;
  ushort local_8;
  short local_6;
  
  local_6 = 0;
  uVar7 = 0xffffffff;
  sVar6 = 0;
  uVar3 = param_1._0_2_ * 0x5c;
  local_8 = *(ushort *)(uVar3 + _DAT_00028978 + 0x250);
  local_a = *(short *)(uVar3 + _DAT_00028978 + 0x24e);
  for (sVar5 = 0; sVar5 < 6; sVar5 = sVar5 + 1) {
    uVar3 = sVar5 * 2;
    if (*(short *)(uVar3 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) != -1) {
      uVar3 = sVar5 * 2;
      sVar6 = sVar6 + 1;
    }
  }
  if (sVar6 == 1) {
    uVar3 = func_0x00002d78(0,(short)local_10,(short)auStack_16);
    for (sVar6 = 0; sVar5 = (short)uVar7, sVar6 < 6; sVar6 = sVar6 + 1) {
      bVar2 = local_10[sVar6];
      uVar4 = (ushort)bVar2;
      uVar3 = (uint)bVar2;
      if ((uVar4 != 0xff) &&
         (bVar1 = *(byte *)((short)uVar4 + _DAT_00028978 + 0x11e), uVar3 = bVar1 & 1,
         (bVar1 & 1) == 0)) {
        uVar3 = (uint)local_a;
        if ((int)*(char *)((short)uVar4 * 0x42 + _DAT_0002884c + 0x15d9) == uVar3) {
          for (sVar5 = 0; sVar5 < 6; sVar5 = sVar5 + 1) {
            uVar3 = sVar5 * 2;
            if (*(short *)(uVar3 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) == -1) {
              uVar3 = sVar5 * 2;
              *(ushort *)(uVar3 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x25a) = uVar4;
              break;
            }
          }
        }
        else {
          uVar3 = (uint)*(short *)(_DAT_0002884c + 0x110);
          if ((int)*(char *)((short)(ushort)bVar2 * 0x42 + _DAT_0002884c + 0x15d9) == uVar3) {
            if (bVar2 == local_8) {
              local_6 = 1;
            }
            uVar3 = FUN_0000000c();
            if (((short)uVar3 == 0) && (sVar5 == -1)) {
              uVar7 = (uint)bVar2;
            }
          }
        }
      }
    }
    if ((local_6 == 0) && (sVar5 != -1)) {
      uVar3 = param_1._0_2_ * 0x5c;
      *(short *)(uVar3 + _DAT_00028978 + 0x250) = sVar5;
    }
  }
  return uVar3;
}



// Function: FUN_000018d8 at 000018d8
// Size: 362 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000018d8(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte abStackY_8026 [6];
  byte abStackY_8020 [32718];
  undefined1 *puVar7;
  undefined2 uVar8;
  byte abStack_26 [6];
  byte abStack_20 [6];
  undefined2 local_1a;
  undefined1 auStack_18 [17];
  char local_7;
  ushort local_6;
  
  iVar6 = param_1._0_2_ * 0x5c + _DAT_00028978;
  local_6 = *(ushort *)(iVar6 + 0x250);
  local_1a = *(undefined2 *)(iVar6 + 0x2a4);
  for (sVar4 = 0; sVar4 < 6; sVar4 = sVar4 + 1) {
    uVar1 = *(ushort *)(sVar4 * 2 + param_1._0_2_ * 0x5c + _DAT_00028978 + 0x292);
    if (((uVar1 != 0xffff) && (uVar1 != local_6)) &&
       ((int)*(char *)((short)uVar1 * 0x42 + _DAT_0002884c + 0x15d9) ==
        (int)*(short *)(_DAT_0002884c + 0x110))) {
      func_0x00002d78(0,(short)abStack_20,abStack_26);
      sVar3 = 0;
      sVar5 = 6;
      while (sVar2 = sVar5 + -1, sVar5 != 0) {
        sVar5 = sVar2;
        if (((abStack_20[sVar2] != 0xff) &&
            (local_7 = *(char *)((short)(ushort)abStack_20[sVar2] * 0x42 + _DAT_0002884c + 0x15d9),
            local_7 != '\x0f')) &&
           (((int)local_7 != (int)*(short *)(_DAT_0002884c + 0x110) && (abStack_26[sVar2] < 0x19))))
        {
          sVar3 = sVar3 + 1;
        }
      }
      if (sVar3 == 0) {
        func_0x00002d90(CONCAT22(uVar1,1));
        sVar3 = func_0x00002de0(*(undefined2 *)((short)uVar1 * 0x42 + _DAT_0002884c + 0x15c6),
                                (short)auStack_18,0);
        if (3 < sVar3) {
          iVar6 = (uint)local_6 << 0x10;
          uVar8 = 1;
          puVar7 = auStack_18;
          func_0x00003e38((short)puVar7);
          func_0x00002c38(*(undefined2 *)(_DAT_000288ac + 0x14),(short)((uint)puVar7 >> 0x10),uVar8,
                          iVar6);
        }
      }
    }
  }
  return;
}



// Function: FUN_00001a42 at 00001a42
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a42(undefined4 param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  sVar2 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    psVar3 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar2 = sVar1;
    if ((param_1._0_2_ == *psVar3) && (param_1._2_2_ == psVar3[1])) {
      *param_2 = *param_2 + 1;
      *param_3 = (short)*(char *)(_DAT_00028854 + 8 + sVar1 * 0x16) + *param_3;
      if (*(char *)(_DAT_00028854 + 4 + sVar1 * 0x16) == '\x1c') {
        *param_4 = *param_4 + 1;
      }
    }
  }
  return;
}



