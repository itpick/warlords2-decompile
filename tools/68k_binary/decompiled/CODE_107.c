// Warlords II - Decompiled 68k Code
// Segment: CODE_107
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000000c(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  
  sVar3 = -1;
  sVar4 = -1;
  sVar2 = 8;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    sVar2 = sVar1;
    if (*(short *)(param_1 + sVar1 * 2) != -1) {
      psVar5 = (short *)(*(short *)(param_1 + sVar1 * 2) * 0x16 + _DAT_00028854);
      sVar3 = *psVar5;
      sVar4 = psVar5[1];
      func_0x00002d88((uint)*(ushort *)(param_1 + sVar1 * 2) << 0x10);
    }
  }
  if ((param_2._0_2_ != 0) && (sVar3 != -1)) {
    func_0x00002d98(CONCAT22(sVar3,sVar4));
  }
  func_0x000074c0();
  return;
}



// Function: FUN_00000078 at 00000078
// Size: 744 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000078(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  undefined2 *puVar9;
  int iVar10;
  short asStackY_10014 [32733];
  undefined2 uVar11;
  undefined2 uVar12;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short asStack_14 [8];
  
  bVar3 = false;
  sVar5 = FUN_0000053e(*(undefined2 *)(param_1._0_2_ * 0x16 + _DAT_00028854 + 2));
  iVar10 = param_1._0_2_ * 0x16 + _DAT_00028854;
  if ((*(char *)(iVar10 + 8) < '\x03') || (*(char *)(iVar10 + 6) < '\b')) {
    bVar3 = true;
  }
  if ((*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + param_1._0_2_ * 0x16) * 6) ==
       '\0') && (bVar3)) {
    func_0x00002d88(1);
  }
  else {
    sVar6 = func_0x00003e40(*(undefined2 *)(param_1._0_2_ * 0x16 + _DAT_00028854 + 2),
                            (short)asStack_14);
    if (sVar6 != 0) {
      bVar4 = false;
      sVar7 = 8;
      while (sVar2 = sVar7 + -1, sVar7 != 0) {
        sVar7 = sVar2;
        if ((asStack_14[sVar2] != -1) &&
           (*(char *)(_DAT_00028854 + 7 + asStack_14[sVar2] * 0x16) < '\b')) {
          asStack_14[sVar2] = -1;
          bVar4 = true;
        }
      }
      local_1a = 0;
      local_18 = 0;
      local_16 = 0;
      sVar7 = 8;
      while (sVar2 = sVar7 + -1, sVar7 != 0) {
        local_1c = asStack_14[sVar2];
        sVar7 = sVar2;
        if (asStack_14[sVar2] != -1) {
          if (*(char *)(_DAT_00028864 + (short)*(char *)(_DAT_00028854 + 4 + local_1c * 0x16) * 6)
              == '\0') {
            if (*(char *)(_DAT_00028854 + 4 + local_1c * 0x16) == '\x1c') {
              local_18 = local_18 + 1;
            }
            else {
              local_1a = local_1a + 1;
            }
          }
          else {
            local_16 = local_16 + 1;
          }
        }
      }
      if (((local_16 != 0) && (local_18 != 0)) && (local_1a != 0)) {
        sVar7 = 8;
        while (sVar2 = sVar7 + -1, sVar7 != 0) {
          local_1e = asStack_14[sVar2];
          sVar7 = sVar2;
          if (((asStack_14[sVar2] != -1) &&
              (cVar1 = *(char *)(_DAT_00028854 + 4 + asStack_14[sVar2] * 0x16),
              *(char *)(_DAT_00028864 + (short)cVar1 * 6) == '\0')) && (cVar1 != '\x1c')) {
            asStack_14[sVar2] = -1;
            bVar4 = true;
          }
        }
      }
      if (bVar4) {
        func_0x00002de8((short)asStack_14);
      }
      if ((sVar6 < 2) && (bVar3)) {
        func_0x00002d88(1);
      }
      else {
        func_0x00007410(*(undefined2 *)(_DAT_000288ac + 0x14));
        if (_DAT_000288b0 == 0) {
          local_22 = ((short)*(char *)(_DAT_00028854 + 8 + param_1._0_2_ * 0x16) / 2) * 10;
        }
        else {
          local_22 = 0x32;
        }
        local_20 = sVar5 + 10;
        if ((short)(sVar5 + 10) < local_22) {
          psVar8 = &local_20;
        }
        else {
          psVar8 = &local_22;
        }
        sVar5 = *psVar8;
        puVar9 = (undefined2 *)(param_1._0_2_ * 0x16 + _DAT_00028854);
        uVar11 = puVar9[1];
        uVar12 = _DAT_000288fc;
        func_0x00002e10(*puVar9,_DAT_000288fa);
        sVar5 = FUN_00000360(sVar5,uVar11,uVar12);
        if (sVar5 == -1) {
          FUN_0000000c((short)asStack_14);
        }
        else {
          uVar12 = 0;
          uVar11 = 1;
          psVar8 = asStack_14;
          func_0x00003e38((short)psVar8,sVar5);
          func_0x00002c38(*(undefined2 *)(_DAT_000288ac + 0x14),(short)((uint)psVar8 >> 0x10),uVar11
                          ,uVar12);
        }
      }
    }
  }
  return;
}



// Function: FUN_00000360 at 00000360
// Size: 478 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000360(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short local_c;
  short local_6;
  
  local_6 = 1000;
  func_0x00002e40();
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar8 = -1;
  sVar7 = 1000;
  sVar6 = -1;
LAB_0000051c:
  do {
    sVar2 = sVar5 + -1;
    if (sVar5 == 0) {
      func_0x00002e48();
      if (sVar6 == -1) {
        sVar6 = sVar8;
      }
      return sVar6;
    }
    sVar5 = sVar2;
  } while ((((*(char *)((*(uint *)(*(short *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                   _DAT_00028850 +
                                  *(short *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                        _DAT_0002884c + 0x711) != '\n') ||
            ((*(byte *)(sVar2 + _DAT_00028978 + 0x11e) & 1) != 0)) ||
           (sVar2 == *(short *)(_DAT_00028978 + 0x46))) ||
          (sVar3 = func_0x00002e00(), local_c == -1));
  if ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) !=
      (int)*(short *)(_DAT_0002884c + 0x110)) goto code_r0x0000044c;
  if (*(char *)(_DAT_00028978 + 0x56 + (int)sVar2) == '\a') {
    sVar4 = 10;
  }
  else {
    sVar4 = 0x1e;
  }
  sVar3 = sVar4 + sVar3;
  if (3 < param_1._0_2_) {
    sVar3 = sVar3 + 100;
  }
  goto LAB_00000496;
code_r0x0000044c:
  sVar4 = func_0x00002cb8(*(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6));
  if (0x4a < sVar4) {
LAB_00000496:
    cVar1 = *(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9);
    if (((cVar1 == '\x0f') || ((int)cVar1 == (int)*(short *)(_DAT_0002884c + 0x110))) ||
       ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                              (int)(short)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9)) << 6) >>
              0x1e) == 2)) {
      if (sVar3 < sVar7) {
        sVar7 = sVar3;
        sVar6 = sVar2;
      }
    }
    else if (sVar3 < local_6) {
      sVar8 = sVar2;
      local_6 = sVar3;
    }
  }
  goto LAB_0000051c;
}



// Function: FUN_0000053e at 0000053e
// Size: 206 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0000053e(undefined2 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar3 = 10000;
  while( true ) {
    sVar1 = sVar2 + -1;
    if (sVar2 == 0) break;
    sVar2 = sVar1;
    if ((*(char *)((*(uint *)(*(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                              _DAT_00028850 + *(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4) * 2)
                   >> 0x18) + _DAT_0002884c + 0x711) == '\n') &&
       ((param_2._0_2_ == -1 ||
        ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == (int)param_2._0_2_)))) {
      sVar1 = func_0x00006e48(param_1,*(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 < sVar3) {
        sVar3 = sVar1;
      }
    }
  }
  return sVar3;
}



