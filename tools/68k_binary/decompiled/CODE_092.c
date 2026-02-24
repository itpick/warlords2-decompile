// Warlords II - Decompiled 68k Code
// Segment: CODE_092
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000003a at 0000003a
// Size: 162 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000003a(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  
  if (*(short *)(_DAT_00028978 + 0x48) == 0) {
    sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
    while (sVar3 = sVar5 + -1, sVar5 != 0) {
      sVar5 = sVar3;
      if ((int)*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) ==
          (int)*(short *)(_DAT_0002884c + 0x110)) {
        bVar4 = false;
        sVar6 = 0;
        while (*(short *)(&DAT_00015f16 + sVar6 * 2) != -1) {
          sVar2 = sVar6 + 1;
          iVar1 = (int)sVar6;
          sVar6 = sVar2;
          if ((ushort)*(byte *)(_DAT_00028978 + 0x56 + (int)sVar3) ==
              *(ushort *)(&DAT_00015f16 + iVar1 * 2)) {
            bVar4 = true;
          }
        }
        if ((bVar4) && (3 < *(byte *)(sVar3 + _DAT_00028978 + 0x182))) {
          FUN_000000dc();
        }
      }
    }
  }
  return;
}



// Function: FUN_000000dc at 000000dc
// Size: 828 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000dc(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  short *psVar9;
  bool bVar10;
  byte abStackY_8038 [30];
  byte abStackY_801a [14];
  byte abStackY_800c [32672];
  undefined1 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  byte abStack_38 [6];
  undefined2 local_32;
  short local_30;
  undefined1 auStack_2e [16];
  short local_1e [2];
  byte abStack_1a [6];
  short local_14;
  ushort local_12;
  short local_10;
  short local_e;
  byte abStack_c [6];
  short local_6;
  
  local_12 = 0;
  local_6 = 100;
  local_14 = 0;
  local_32 = *(undefined2 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6);
  if ((*(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_) != '\a') ||
     (0xb < *(byte *)(param_1._0_2_ + _DAT_00028978 + 0x182))) {
    if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 0x28) &&
       (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28820) <
        *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28810))) {
      local_30 = 0x41;
    }
    else {
      local_30 = 0x55;
    }
    sVar4 = func_0x00003e40(local_32,(short)auStack_2e);
    if ((sVar4 != 0) &&
       ((3 < sVar4 ||
        ((cVar1 = *(char *)(_DAT_00028978 + 0x56 + (int)param_1._0_2_), cVar1 != '\x06' &&
         (cVar1 != '\a')))))) {
      func_0x00002d78(0,(short)abStack_38,(short)abStack_c);
      sVar7 = 6;
      uVar8 = 0xffff;
      while (sVar3 = sVar7 + -1, sVar7 != 0) {
        abStack_1a[sVar3] = 0;
        bVar2 = abStack_38[sVar3];
        uVar5 = (ushort)bVar2;
        sVar7 = sVar3;
        if ((((uVar5 != 0xff) && ((*(byte *)((short)uVar5 + _DAT_00028978 + 0x11e) & 1) == 0)) &&
            ((int)*(char *)((short)uVar5 * 0x42 + _DAT_0002884c + 0x15d9) !=
             (int)*(short *)(_DAT_0002884c + 0x110))) &&
           ((*(char *)((*(uint *)(*(short *)((short)uVar5 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                                  _DAT_00028850 +
                                 *(short *)((short)uVar5 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >>
                       0x18) + _DAT_0002884c + 0x711) == '\n' &&
            (uVar5 != *(ushort *)(_DAT_00028978 + 0x46))))) {
          local_e = (short)*(char *)((short)uVar5 * 0x42 + _DAT_0002884c + 0x15d9);
          if (local_e == 0xf) {
            bVar10 = true;
          }
          else {
            bVar10 = (byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 +
                                            _DAT_0002884c + 0x1582 + (int)local_e) << 6) >> 0x1e) ==
                     2;
            if ((*(short *)(_DAT_0002884c + 0x116) != 0) &&
               (*(short *)(local_e * 2 + _DAT_0002884c + 0xd0) == 0)) {
              bVar10 = true;
            }
          }
          if (bVar10) {
            bVar6 = func_0x00002cb8(*(undefined2 *)
                                     ((short)(ushort)bVar2 * 0x42 + _DAT_0002884c + 0x15c6));
            abStack_1a[sVar3] = bVar6;
            uVar5 = (ushort)bVar6;
            if (uVar5 == 0) {
              if (((sVar4 < 4) && (abStack_c[sVar3] < 0x19)) ||
                 ((sVar4 < 6 && (abStack_c[sVar3] < 0xf)))) {
                local_14 = 1;
                abStack_1a[sVar3] = 0xff;
              }
            }
            else if (local_30 <= (short)uVar5) {
              local_1e[0] = _DAT_000288f6 + -2;
              local_1e[1] = 1;
              if ((short)(_DAT_000288f6 + -2) < 1) {
                psVar9 = local_1e + 1;
              }
              else {
                psVar9 = local_1e;
              }
              local_10 = (short)((int)(uint)abStack_c[sVar3] / (int)*psVar9) + 1;
              if ((local_10 < local_6) ||
                 ((local_10 == local_6 && ((short)local_12 < (short)uVar5)))) {
                local_12 = uVar5;
                local_6 = local_10;
                uVar8 = (ushort)bVar2;
              }
            }
          }
        }
      }
      if ((local_14 == 0) && (uVar8 != 0xffff)) {
        uVar13 = 0;
        uVar12 = 1;
        puVar11 = auStack_2e;
        func_0x00003e38((short)puVar11,uVar8);
        func_0x00002c38(*(undefined2 *)(_DAT_000288ac + 0x14),(short)((uint)puVar11 >> 0x10),uVar12,
                        uVar13);
      }
    }
  }
  return;
}



