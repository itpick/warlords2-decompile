// Warlords II - Decompiled 68k Code
// Segment: CODE_082
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000004a at 0000004a
// Size: 2226 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000004a(void)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  ushort *puVar11;
  int iVar12;
  short *psVar13;
  short asStack_10024 [8];
  short asStack_10014 [32651];
  short local_2c [4];
  short asStack_24 [8];
  short asStack_14 [8];
  
  FUN_00000c54();
  if (*(short *)(_DAT_0002884c + 0x11c) != 0) {
    _DAT_00028944 = func_0x00002cf8();
    sVar8 = 8;
    while (sVar9 = sVar8 + -1, sVar8 != 0) {
      pbVar2 = (byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 + (int)sVar9)
      ;
      *pbVar2 = *pbVar2 & 0xf3;
      *(undefined2 *)(sVar9 * 2 + 0x28934) = 0;
      *(undefined2 *)(sVar9 * 2 + 0x28924) = 0;
      *(undefined2 *)(sVar9 * 2 + 0x28914) = 0;
      asStack_24[sVar9] = 0;
      asStack_14[sVar9] = 0;
      sVar8 = sVar9;
      if ((byte)((uint)(*(int *)(sVar9 * 8 + _DAT_0002884c + 0x1582 +
                                (int)*(short *)(_DAT_0002884c + 0x110)) << 4) >> 0x1e) == 0) {
        asStack_14[sVar9] = 1;
      }
      else if ((byte)((uint)(*(int *)(sVar9 * 8 + _DAT_0002884c + 0x1582 +
                                     (int)*(short *)(_DAT_0002884c + 0x110)) << 4) >> 0x1e) == 2) {
        asStack_24[sVar9] = 1;
      }
    }
    sVar8 = 0;
    sVar9 = *(short *)(_DAT_0002884c + 0x15c2);
    while (sVar7 = sVar9 + -1, sVar9 != 0) {
      if (*(char *)((*(uint *)(*(short *)(sVar7 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                               _DAT_00028850 + *(short *)(sVar7 * 0x42 + _DAT_0002884c + 0x15c4) * 2
                              ) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
        sVar8 = sVar8 + 1;
      }
      sVar9 = sVar7;
      if (FUN_000015d4[sVar7 * 0x42 + _DAT_0002884c + 5] != (code)0xf) {
        iVar12 = (char)FUN_000015d4[sVar7 * 0x42 + _DAT_0002884c + 5] * 2;
        psVar13 = (short *)(iVar12 + 0x28924);
        *psVar13 = *psVar13 + 1;
        if ((*(byte *)(sVar7 + _DAT_00028978 + 0x11e) & 1) == 0) {
          psVar13 = (short *)(iVar12 + 0x28914);
          *psVar13 = *psVar13 + 1;
        }
        if ((int)(char)FUN_000015d4[sVar7 * 0x42 + _DAT_0002884c + 5] ==
            (int)*(short *)(_DAT_0002884c + 0x110)) {
          bVar3 = *(byte *)(sVar7 * 0x42 + _DAT_0002884c + 0x15f3);
          if (bVar3 != 0xf) {
            psVar13 = (short *)((uint)bVar3 * 2 + 0x28934);
            *psVar13 = *psVar13 + 1;
          }
        }
        else {
          iVar12 = sVar7 * 0x42 + _DAT_0002884c;
          if ((ushort)*(byte *)(iVar12 + 0x15f3) == *(ushort *)(_DAT_0002884c + 0x110)) {
            psVar13 = (short *)((char)FUN_000015d4[iVar12 + 5] * 2 + 0x28934);
            *psVar13 = *psVar13 + 1;
          }
        }
      }
    }
    sVar9 = 8;
    while (sVar7 = sVar9 + -1, sVar9 != 0) {
      sVar9 = sVar7;
      if ((sVar7 != *(short *)(_DAT_0002884c + 0x110)) &&
         (*(short *)(sVar7 * 2 + _DAT_0002884c + 0x138) != 0)) {
        sVar10 = (asStack_14[sVar7] - asStack_24[sVar7]) * 2;
        if ((int)*(short *)(sVar7 * 2 + 0x28934) < sVar10 + 4) {
          if (sVar10 + 8 <= (int)*(short *)(sVar7 * 2 + 0x28934)) {
            iVar12 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
            pbVar2 = (byte *)(iVar12 + sVar7);
            *pbVar2 = *pbVar2 & 0xf3;
            pbVar2 = (byte *)(iVar12 + sVar7);
            *pbVar2 = *pbVar2 | 8;
          }
        }
        else {
          iVar12 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
          pbVar2 = (byte *)(iVar12 + sVar7);
          *pbVar2 = *pbVar2 & 0xf3;
          pbVar2 = (byte *)(iVar12 + sVar7);
          *pbVar2 = *pbVar2 | 4;
        }
      }
    }
    sVar9 = 8;
    while (sVar10 = _DAT_00028944, sVar7 = sVar9 + -1, sVar9 != 0) {
      sVar9 = sVar7;
      if ((sVar7 != *(short *)(_DAT_0002884c + 0x110)) &&
         (*(short *)(sVar7 * 2 + _DAT_0002884c + 0x138) != 0)) {
        sVar4 = *(short *)(sVar7 * 2 + _DAT_00028978 + 0x3bc) * 2 +
                *(short *)(sVar7 * 2 + _DAT_00028978 + 0x40c) * 4 +
                *(short *)(sVar7 * 2 + _DAT_00028978 + 0x3ec);
        sVar10 = (asStack_14[sVar7] - asStack_24[sVar7]) * 2;
        if ((int)sVar4 < sVar10 + 5) {
          if (sVar10 + 10 <= (int)sVar4) {
            iVar12 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
            pbVar2 = (byte *)(iVar12 + sVar7);
            *pbVar2 = *pbVar2 & 0xf3;
            pbVar2 = (byte *)(iVar12 + sVar7);
            *pbVar2 = *pbVar2 | 8;
          }
        }
        else {
          local_2c[2] = 1;
          local_2c[3] = (short)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 +
                                                _DAT_0002884c + 0x1582 + (int)sVar7) << 4) >> 0x1e);
          if ((ushort)local_2c[3] < 2) {
            puVar11 = (ushort *)(local_2c + 2);
          }
          else {
            puVar11 = (ushort *)(local_2c + 3);
          }
          puVar1 = (uint *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                           (int)sVar7);
          *puVar1 = *puVar1 & 0xf3ffffff | (*puVar11 & 3) << 0x1a;
        }
      }
    }
    if (_DAT_00028944 != -1) {
      iVar12 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
      pbVar2 = (byte *)(iVar12 + _DAT_00028944);
      *pbVar2 = *pbVar2 & 0xf3;
      pbVar2 = (byte *)(iVar12 + sVar10);
      *pbVar2 = *pbVar2 | 8;
    }
    sVar9 = 4;
    while (sVar7 = sVar9 + -1, sVar9 != 0) {
      sVar9 = sVar7;
      if (*(short *)(sVar7 * 0x5c + _DAT_00028978 + 0x24c) != 0) {
        sVar7 = *(short *)(sVar7 * 0x5c + _DAT_00028978 + 0x24e);
        iVar12 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
        pbVar2 = (byte *)(iVar12 + sVar7);
        *pbVar2 = *pbVar2 & 0xf3;
        pbVar2 = (byte *)(iVar12 + sVar7);
        *pbVar2 = *pbVar2 | 8;
      }
    }
    sVar9 = 0;
    sVar7 = -1;
    sVar10 = 8;
    while (sVar4 = sVar10 + -1, sVar10 != 0) {
      sVar10 = sVar4;
      if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0x138) != 0) {
        local_2c[0] = sVar8;
        local_2c[1] = 1;
        if (sVar8 < 1) {
          psVar13 = local_2c + 1;
        }
        else {
          psVar13 = local_2c;
        }
        if (*(short *)(sVar4 * 2 + _DAT_0002884c + 0xd0) == 0) {
          sVar6 = *(short *)(_DAT_00028978 + 0x44);
        }
        else {
          sVar6 = 0x32;
        }
        if ((sVar9 < *(short *)(sVar4 * 2 + 0x28924)) &&
           (sVar6 < (short)((*(short *)(sVar4 * 2 + 0x28924) * 100) / (int)*psVar13))) {
          sVar9 = *(short *)(sVar4 * 2 + 0x28924);
          sVar7 = sVar4;
        }
      }
    }
    if ((sVar7 != -1) && (sVar7 != *(short *)(_DAT_0002884c + 0x110))) {
      sVar8 = 8;
      while (sVar9 = sVar8 + -1, sVar8 != 0) {
        sVar8 = sVar9;
        if (*(short *)(sVar9 * 2 + _DAT_0002884c + 0x138) != 0) {
          if ((sVar9 == sVar7) || (sVar9 == _DAT_00028944)) {
            iVar12 = *(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582;
            pbVar2 = (byte *)(iVar12 + sVar9);
            *pbVar2 = *pbVar2 & 0xf3;
            pbVar2 = (byte *)(iVar12 + sVar9);
            *pbVar2 = *pbVar2 | 8;
          }
          else {
            pbVar2 = (byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                             (int)sVar9);
            *pbVar2 = *pbVar2 & 0xf3;
          }
        }
      }
    }
    if (*(short *)(_DAT_00028978 + 0x38) != 0) {
      bVar5 = false;
      sVar8 = 8;
      while (sVar9 = sVar8 + -1, sVar8 != 0) {
        sVar8 = sVar9;
        if (((*(short *)(sVar9 * 2 + _DAT_0002884c + 0x138) != 0) &&
            (*(short *)(sVar9 * 2 + _DAT_0002884c + 0xd0) != 0)) &&
           (sVar9 != *(short *)(_DAT_0002884c + 0x110))) {
          if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582
                                    + (int)sVar9) << 4) >> 0x1e) != 0) {
            sVar7 = func_0x00002d00();
            if (sVar7 != 0) {
              pbVar2 = (byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                               (int)sVar9);
              *pbVar2 = *pbVar2 & 0xf3;
            }
          }
        }
      }
      sVar8 = 8;
      while (sVar9 = sVar8 + -1, sVar8 != 0) {
        sVar8 = sVar9;
        if ((*(short *)(sVar9 * 2 + _DAT_0002884c + 0x138) != 0) &&
           (*(short *)(sVar9 * 2 + _DAT_0002884c + 0xd0) != 1)) {
          if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582
                                    + (int)sVar9) << 6) >> 0x1e) == 2) {
            bVar5 = true;
          }
        }
      }
      if (bVar5) {
        sVar8 = 8;
        while (sVar9 = sVar8 + -1, sVar8 != 0) {
          sVar8 = sVar9;
          if (((*(short *)(sVar9 * 2 + _DAT_0002884c + 0x138) != 0) &&
              (*(short *)(sVar9 * 2 + _DAT_0002884c + 0xd0) == 1)) &&
             (*(short *)(sVar9 * 2 + 0x28984) != 0)) {
            pbVar2 = (byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                             (int)sVar9);
            *pbVar2 = *pbVar2 & 0xf3;
          }
        }
      }
    }
    if (*(short *)(_DAT_0002884c + 0x116) != 0) {
      FUN_000008fc();
    }
    sVar8 = 8;
    while (sVar9 = sVar8 + -1, sVar8 != 0) {
      sVar8 = sVar9;
      if (*(short *)(sVar9 * 2 + 0x28914) == 0) {
        pbVar2 = (byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                         (int)sVar9);
        *pbVar2 = *pbVar2 & 0xf3;
      }
    }
    sVar8 = 4;
    while (sVar9 = sVar8 + -1, sVar8 != 0) {
      sVar8 = sVar9;
      if (*(short *)(sVar9 * 0x5c + _DAT_00028978 + 0x24c) != 0) {
        if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                                  (int)*(short *)(sVar9 * 0x5c + _DAT_00028978 + 0x24e)) << 4) >>
                  0x1e) == 0) {
          func_0x00002ce8();
        }
      }
    }
    func_0x00007468();
  }
  return;
}



// Function: FUN_000008fc at 000008fc
// Size: 856 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008fc(void)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  int iVar10;
  short local_48 [2];
  int aiStack_44 [8];
  int aiStack_24 [8];
  
  local_48[0] = *(short *)(_DAT_0002884c + 0x15c2) / 0xf;
  local_48[1] = 1;
  if (local_48[0] < 1) {
    psVar9 = local_48 + 1;
  }
  else {
    psVar9 = local_48;
  }
  sVar8 = *psVar9;
  iVar10 = 8;
  while (iVar10 != 0) {
    aiStack_24[iVar10 + -1] = -1;
    iVar10 = iVar10 + -1;
  }
  iVar10 = 8;
  do {
    iVar7 = iVar10 + -1;
    iVar6 = -1;
    if (iVar10 == 0) break;
    iVar10 = iVar7;
  } while ((*(short *)(iVar7 * 2 + _DAT_0002884c + 0x138) == 0) ||
          (iVar6 = iVar7, *(short *)(iVar7 * 2 + _DAT_0002884c + 0xd0) != 0));
  if (iVar6 != -1) {
    iVar10 = (int)*(short *)(iVar6 * 2 + 0x28800) / (int)sVar8 + 1;
    iVar7 = 0;
    while( true ) {
      iVar4 = 8;
      iVar5 = -1;
      sVar8 = 10000;
      while (iVar2 = iVar4 + -1, iVar4 != 0) {
        iVar4 = iVar2;
        if ((((*(short *)(iVar2 * 2 + _DAT_0002884c + 0x138) != 0) && (aiStack_24[iVar2] == -1)) &&
            (*(short *)(iVar2 * 2 + _DAT_0002884c + 0xd0) != 0)) &&
           (sVar3 = func_0x00006e48(), sVar3 < sVar8)) {
          iVar5 = iVar2;
          sVar8 = sVar3;
        }
      }
      if (iVar5 == -1) break;
      aiStack_24[iVar5] = iVar7;
      iVar7 = iVar7 + 1;
    }
    while (iVar10 != 0) {
      iVar7 = 1000;
      iVar4 = 8;
      iVar5 = -1;
      while (iVar2 = iVar4 + -1, iVar4 != 0) {
        iVar4 = iVar2;
        if (((*(short *)(iVar2 * 2 + _DAT_0002884c + 0x138) != 0) && (aiStack_24[iVar2] != -1)) &&
           ((*(short *)(iVar2 * 2 + _DAT_0002884c + 0xd0) != 0 && (aiStack_24[iVar2] < iVar7)))) {
          iVar7 = aiStack_24[iVar2];
          iVar5 = iVar2;
        }
      }
      if (iVar5 == -1) break;
      aiStack_24[iVar5] = -1;
      iVar10 = iVar10 + -1;
      if (iVar5 == *(short *)(_DAT_0002884c + 0x110)) {
        iVar7 = (short)iVar5 * 8 + _DAT_0002884c + 0x1582;
        pbVar1 = (byte *)(iVar7 + (short)iVar6);
        *pbVar1 = *pbVar1 & 0xf3;
        pbVar1 = (byte *)(iVar7 + (short)iVar6);
        *pbVar1 = *pbVar1 | 8;
        func_0x00007468();
      }
    }
    iVar10 = 8;
    while (iVar10 != 0) {
      aiStack_44[iVar10 + -1] = 0;
      iVar10 = iVar10 + -1;
    }
    iVar10 = 8;
    while (iVar7 = iVar10 + -1, iVar10 != 0) {
      iVar10 = iVar7;
      if ((*(short *)(iVar7 * 2 + _DAT_0002884c + 0x138) != 0) &&
         (*(short *)(iVar7 * 2 + _DAT_0002884c + 0xd0) != 0)) {
        iVar6 = 8;
        while (iVar4 = iVar6 + -1, iVar6 != 0) {
          iVar6 = iVar4;
          if (((*(short *)(iVar4 * 2 + _DAT_0002884c + 0x138) != 0) &&
              (*(short *)(iVar4 * 2 + _DAT_0002884c + 0xd0) != 1)) &&
             ((byte)((uint)(*(int *)((short)iVar7 * 8 + _DAT_0002884c + 0x1582 + (int)(short)iVar4)
                           << 6) >> 0x1e) == 2)) {
            aiStack_44[iVar7] = 1;
          }
        }
      }
    }
    iVar10 = 8;
    while (iVar7 = iVar10 + -1, iVar10 != 0) {
      iVar10 = iVar7;
      if (((*(short *)(iVar7 * 2 + _DAT_0002884c + 0x138) != 0) &&
          (*(short *)(iVar7 * 2 + _DAT_0002884c + 0xd0) != 0)) &&
         ((aiStack_44[*(short *)(_DAT_0002884c + 0x110)] != 0 || (aiStack_44[iVar7] != 0)))) {
        pbVar1 = (byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                         (int)(short)iVar7);
        *pbVar1 = *pbVar1 & 0xf3;
      }
    }
  }
  return;
}



// Function: FUN_00000c54 at 00000c54
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c54(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  
  sVar2 = func_0x00004938(*(undefined2 *)
                           (*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x196));
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar7 = 10000;
  sVar6 = -1;
  while (sVar1 = sVar5 + -1, sVar5 != 0) {
    sVar5 = sVar1;
    if (((*(char *)((*(uint *)(*(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                               _DAT_00028850 + *(short *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4) * 2
                              ) >> 0x18) + _DAT_0002884c + 0x711) == '\n') &&
        (uVar3 = (ushort)*(byte *)(sVar1 * 0x42 + _DAT_0002884c + 0x15f3),
        uVar3 != *(ushort *)(_DAT_0002884c + 0x110))) &&
       ((uVar3 == 0xf || (*(short *)((short)uVar3 * 2 + _DAT_0002884c + 0x138) == 0)))) {
      sVar4 = func_0x00006e48(*(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6),
                              *(undefined2 *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6));
      if ((sVar4 < 0x28) && (sVar4 < sVar7)) {
        sVar7 = sVar4;
        sVar6 = sVar1;
      }
    }
  }
  if (sVar6 != -1) {
    *(undefined1 *)(sVar6 * 0x42 + _DAT_0002884c + 0x15f3) = *(undefined1 *)(_DAT_0002884c + 0x111);
    func_0x00007450();
  }
  return;
}



// Function: FUN_00000da8 at 00000da8
// Size: 950 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000da8(void)

{
  byte *pbVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  short asStackY_10044 [6];
  short asStackY_10038 [32719];
  short *psVar11;
  short sVar12;
  undefined1 auStack_6a [16];
  short local_5a;
  int local_58;
  int local_54;
  short *local_50;
  int local_4c;
  short local_48;
  short local_46;
  short asStack_44 [6];
  short asStack_38 [20];
  ushort local_10;
  
  *(undefined2 *)(_DAT_00028978 + 0x46) = 0xffff;
  if (((*(short *)(_DAT_0002884c + 0x11e) != 0) &&
      (iVar9 = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c,
      *(short *)(iVar9 + 0x1142) != 0)) &&
     ((sVar8 = *(short *)(iVar9 + 0x1144), sVar8 == 4 || (sVar8 == 5)))) {
    *(undefined2 *)(_DAT_00028978 + 0x46) =
         *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1148);
  }
  FUN_0000115e((short)asStack_44);
  sVar8 = 6;
LAB_0000114c:
  do {
    sVar4 = sVar8 + -1;
    if (sVar8 == 0) {
      return;
    }
    sVar2 = asStack_44[sVar4];
    sVar8 = sVar4;
  } while (((sVar2 == -1) ||
           (iVar9 = sVar2 * 0x16 + _DAT_00028854,
           (int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(iVar9 + 5))) ||
          (*(char *)(iVar9 + 4) != '\x1c'));
  FUN_00001992();
  if (-1 < asStack_38[sVar4]) {
    func_0x00002d90(1);
  }
  if (*(short *)(_DAT_0002884c + 0x11e) != 0) goto code_r0x00000e82;
  goto LAB_00000eb4;
code_r0x00000e82:
  local_4c = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c;
  if (((*(short *)(local_4c + 0x1142) == 0) || (sVar2 != *(short *)(local_4c + 0x1146))) ||
     (sVar6 = FUN_000016f0((short)((uint)asStack_44 >> 0x10)), sVar6 == 0)) {
LAB_00000eb4:
    if (*(uint *)(_DAT_00028854 + 0xe + sVar2 * 0x16) >> 0x1c == 3) {
      sVar6 = FUN_0000201c(sVar2);
      if (sVar6 == 0) {
        uVar3 = *(undefined4 *)(_DAT_00028854 + 0xe + sVar2 * 0x16);
        sVar6 = *(short *)(_DAT_0002884c + 0x182);
        while (iVar9 = _DAT_00028854, sVar7 = sVar6 + -1, sVar6 != 0) {
          psVar10 = (short *)(sVar7 * 0x16 + _DAT_00028854);
          sVar6 = sVar7;
          if ((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar10 + 5)) {
            local_50 = (short *)(sVar2 * 0x16 + _DAT_00028854);
            if (((*psVar10 == *local_50) && (psVar10[1] == local_50[1])) &&
               ((int)(short)(ushort)((uint)uVar3 >> 0x1c) ==
                *(uint *)(_DAT_00028854 + 0xe + sVar7 * 0x16) >> 0x1c)) {
              pbVar1 = (byte *)(_DAT_00028854 + 0xe + sVar7 * 0x16);
              *pbVar1 = *pbVar1 & 0xf;
              pbVar1 = (byte *)(iVar9 + 0xf + sVar7 * 0x16);
              *pbVar1 = *pbVar1 & 0x80;
              *(undefined2 *)(iVar9 + 0x14 + sVar7 * 0x16) = 0xffff;
              *(undefined2 *)(_DAT_00028854 + 0x12 + sVar7 * 0x16) = 0xffff;
              func_0x00007448(sVar7 * 0x16 + (short)_DAT_00028854);
            }
          }
        }
      }
      else {
        local_10 = (ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar2 * 0x16) << 1) >> 0x19);
        FUN_0000129a(3,(short)asStack_44);
      }
    }
    sVar7 = 1;
    sVar6 = 0;
    bVar5 = false;
    while (((sVar7 != 0 && (sVar6 < 2)) && ('\x03' < *(char *)(_DAT_00028854 + 7 + sVar2 * 0x16))))
    {
      sVar6 = sVar6 + 1;
      psVar10 = asStack_44;
      sVar12 = sVar4;
      FUN_00001a7e((short)((uint)psVar10 >> 0x10));
      psVar11 = asStack_44;
      sVar7 = sVar4;
      FUN_00001c96((short)((uint)psVar11 >> 0x10),sVar12,(short)psVar10);
      FUN_00001de4((short)((uint)asStack_44 >> 0x10),sVar7,(short)psVar11);
      local_5a = FUN_0000189a();
      if (local_5a == 1) {
        sVar7 = FUN_0000129a(0,(short)asStack_44);
      }
      else if ((local_5a == 2) || (local_5a == 3)) {
        bVar5 = true;
        sVar7 = FUN_0000129a(local_5a,(short)asStack_44);
      }
      else if (local_5a == 4) {
        bVar5 = true;
        sVar7 = FUN_000015d4((short)((uint)asStack_44 >> 0x10));
      }
      else {
        if ((bVar5) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
          local_48 = 1;
          local_46 = *(short *)(_DAT_0002884c + 0x136);
          if (*(short *)(_DAT_0002884c + 0x136) < 2) {
            psVar10 = &local_48;
          }
          else {
            psVar10 = &local_46;
          }
          if (*psVar10 < 10) {
            local_54 = sVar2 * 0x16 + _DAT_00028854;
            sVar7 = func_0x00003e40(*(undefined2 *)(local_54 + 2),(short)auStack_6a);
            if (sVar7 == 1) {
              func_0x00002c40(0xffff);
            }
          }
        }
        sVar7 = 0;
      }
      local_58 = sVar2 * 0x16 + _DAT_00028854;
      if (((int)*(short *)(_DAT_0002884c + 0x110) != (int)*(char *)(local_58 + 5)) ||
         (*(char *)(local_58 + 4) != '\x1c')) {
        sVar7 = 0;
      }
    }
  }
  goto LAB_0000114c;
}



// Function: FUN_0000115e at 0000115e
// Size: 316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000115e(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  
  sVar7 = 0;
  sVar8 = 6;
  while (sVar8 != 0) {
    *(undefined2 *)(param_1 + (short)(sVar8 + -1) * 2) = 0xffff;
    sVar8 = sVar8 + -1;
  }
  *(undefined2 *)(_DAT_00028978 + 0xe) = 0;
  sVar8 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar6 = sVar8 + -1, sVar8 != 0) {
    iVar9 = sVar6 * 0x16 + _DAT_00028854;
    sVar8 = sVar6;
    if ((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar9 + 5)) &&
        (*(char *)(iVar9 + 4) == '\x1c')) && (sVar7 < 6)) {
      *(short *)(param_1 + sVar7 * 2) = sVar6;
      psVar10 = (short *)(sVar6 * 0x16 + _DAT_00028854);
      sVar1 = *psVar10;
      sVar2 = psVar10[1];
      uVar4 = *(undefined4 *)psVar10;
      uVar3 = *(undefined4 *)psVar10;
      *(undefined2 *)(param_1 + 0x18 + sVar7 * 2) = 0xffff;
      *(undefined2 *)(param_1 + 0xc + sVar7 * 2) = 0xffff;
      *(undefined2 *)(param_1 + 0x24 + sVar7 * 2) = 0;
      if (*(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar1 * 2) >> 0x18) + _DAT_0002884c +
                   0x711) == '\n') {
        uVar5 = func_0x00004938(uVar3);
        *(undefined2 *)(param_1 + 0xc + sVar7 * 2) = uVar5;
      }
      else if (*(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar1 * 2) >> 0x18) +
                         _DAT_0002884c + 0x711) == '\v') {
        uVar5 = func_0x00002b50(uVar4);
        *(undefined2 *)(param_1 + 0x18 + sVar7 * 2) = uVar5;
      }
      sVar6 = func_0x00006e58(sVar6 * 0x16 + _DAT_00028854);
      if (sVar6 != 0) {
        *(undefined2 *)(param_1 + 0x24 + sVar7 * 2) = 1;
      }
      sVar7 = sVar7 + 1;
      *(short *)(_DAT_00028978 + 0xe) = *(short *)(_DAT_00028978 + 0xe) + 1;
    }
  }
  return;
}



// Function: FUN_0000129a at 0000129a
// Size: 826 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000129a(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  undefined2 extraout_D0u;
  uint uVar3;
  ushort uVar5;
  undefined4 uVar4;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  undefined2 *puVar10;
  int iVar11;
  short asStackY_10014 [32727];
  short *psVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  short local_1a;
  short local_18;
  short local_14 [8];
  
  uVar9 = 0;
  sVar1 = *(short *)(param_2 + param_1._0_2_ * 2);
  if (param_3._0_2_ == 0) {
    sVar8 = *(short *)(param_2 + 0x34);
  }
  else {
    sVar8 = *(short *)(param_2 + 0x30);
  }
  if ((param_1._2_2_ == 3) || (param_1._2_2_ == 0)) {
    iVar11 = sVar8 * 0x20 + _DAT_0002884c;
    uVar13 = *(undefined2 *)(iVar11 + 0x812);
    uVar15 = *(undefined2 *)(iVar11 + 0x814);
  }
  else {
    iVar11 = *(short *)(param_2 + 0x3c) * 0x1e + _DAT_0002884c;
    uVar13 = *(undefined2 *)(iVar11 + 0xd2c);
    uVar15 = *(undefined2 *)(iVar11 + 0xd2e);
    sVar8 = *(short *)(param_2 + 0x3c) + 1000;
  }
  puVar10 = (undefined2 *)(sVar1 * 0x16 + _DAT_00028854);
  uVar14 = *puVar10;
  func_0x00006e48(uVar15,puVar10[1]);
  uVar3 = func_0x00002de0(*(undefined2 *)(sVar1 * 0x16 + _DAT_00028854 + 2),(short)local_14,
                          (ushort)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar1 * 0x16) >> 0x1c
                                  ),uVar13,uVar14);
  uVar5 = (ushort)uVar3;
  if (uVar5 == 0) {
    uVar3 = uVar3 & 0xffff0000;
  }
  else {
    sVar7 = *(short *)(param_2 + 0xc + param_1._0_2_ * 2);
    if (sVar7 == -1) {
      local_18 = 100;
    }
    else {
      local_18 = func_0x00002dc8(*(undefined2 *)(sVar1 * 0x16 + _DAT_00028854 + 2));
      local_1a = -1;
      sVar6 = 8;
      while (sVar2 = sVar6 + -1, sVar6 != 0) {
        sVar6 = sVar2;
        if ((local_14[sVar2] != -1) &&
           (*(char *)(_DAT_00028864 +
                     (short)*(char *)(_DAT_00028854 + 4 + local_14[sVar2] * 0x16) * 6) != '\0')) {
          local_1a = local_14[sVar2];
        }
      }
      if (local_1a == -1) {
        if (0xe < local_18) {
          sVar6 = 8;
          while (sVar6 != 0) {
            local_14[(short)(sVar6 + -1)] = -1;
            sVar6 = sVar6 + -1;
          }
          uVar5 = 1;
          local_14[0] = sVar1;
          func_0x00002de8((short)local_14);
        }
      }
      else {
        sVar6 = 8;
        while (sVar6 != 0) {
          local_14[(short)(sVar6 + -1)] = -1;
          sVar6 = sVar6 + -1;
        }
        local_14[1] = local_1a;
        uVar5 = 2;
        local_14[0] = sVar1;
        func_0x00002de8((short)local_14);
      }
    }
    if ((((sVar7 == -1) || (uVar5 != *(byte *)(sVar7 + _DAT_00028978 + 0x182))) ||
        (2 < (short)uVar5)) || (0xe < local_18)) {
      if ((sVar7 != -1) && (uVar5 == 3)) {
        sVar7 = 8;
        while (sVar7 != 0) {
          local_14[(short)(sVar7 + -1)] = -1;
          sVar7 = sVar7 + -1;
        }
        local_14[0] = sVar1;
        func_0x00002de8((short)local_14);
      }
      func_0x00007410(*(undefined2 *)(_DAT_000288ac + 0x14));
      uVar13 = extraout_D0u;
      if (sVar8 != -1) {
        if (sVar8 < 1000) {
          uVar15 = 0;
          uVar13 = 3;
          psVar12 = local_14;
          func_0x00003e38((short)psVar12,sVar8);
          uVar4 = func_0x00002c38(*(undefined2 *)(_DAT_000288ac + 0x14),
                                  (short)((uint)psVar12 >> 0x10),uVar13,uVar15);
          uVar13 = (undefined2)((uint)uVar4 >> 0x10);
          if ((short)uVar4 == 4) {
            uVar9 = 1;
          }
        }
        else {
          uVar14 = 0;
          uVar15 = 4;
          psVar12 = local_14;
          func_0x00003e38((short)psVar12,0);
          iVar11 = (sVar8 + -1000) * 0x1e;
          *(undefined2 *)(_DAT_000288ac + 0x12) = *(undefined2 *)(iVar11 + _DAT_0002884c + 0xd2c);
          *(undefined2 *)(_DAT_000288ac + 0x14) = *(undefined2 *)(iVar11 + _DAT_0002884c + 0xd2e);
          uVar13 = (undefined2)((uint)_DAT_000288ac >> 0x10);
          func_0x00007448((short)_DAT_000288ac);
          uVar4 = func_0x00002c38(*(undefined2 *)(_DAT_000288ac + 0x14),uVar13,
                                  (short)((uint)psVar12 >> 0x10),uVar15,uVar14);
          uVar13 = (undefined2)((uint)uVar4 >> 0x10);
          if ((short)uVar4 == 4) {
            uVar9 = 1;
          }
        }
      }
      uVar3 = CONCAT22(uVar13,uVar9);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// Function: FUN_00001992 at 00001992
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001992(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined1 auStack_14 [16];
  
  for (sVar2 = 0; sVar2 < *(short *)(_DAT_0002884c + 0x810); sVar2 = sVar2 + 1) {
    iVar3 = sVar2 * 0x20 + _DAT_0002884c;
    psVar4 = (short *)(param_1._0_2_ * 0x16 + _DAT_00028854);
    if ((*(short *)(iVar3 + 0x812) == *psVar4) && (*(short *)(iVar3 + 0x814) == psVar4[1])) {
      sVar1 = FUN_0000201c();
      if (sVar1 != 0) {
        sVar1 = func_0x00002de0(*(undefined4 *)(param_1._0_2_ * 0x16 + _DAT_00028854),
                                (short)auStack_14,
                                (ushort)((uint)*(undefined4 *)
                                                (_DAT_00028854 + 0xe + param_1._0_2_ * 0x16) >> 0x1c
                                        ));
        if (sVar1 != 0) {
          func_0x00003e38((short)auStack_14,
                          (ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + param_1._0_2_ * 0x16) << 1)
                                  >> 0x19));
          func_0x00002c88(CONCAT22(param_1._0_2_,sVar2));
        }
      }
    }
  }
  return;
}



// Function: FUN_0000201c at 0000201c
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000201c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar4;
  undefined4 uVar3;
  short sVar5;
  short *psVar6;
  int iVar7;
  short local_c;
  short local_a [3];
  
  iVar7 = param_1._0_2_ * 0x20 + _DAT_0002884c;
  psVar6 = (short *)(iVar7 + 0x812);
  sVar1 = *psVar6;
  sVar2 = *(short *)(iVar7 + 0x814);
  sVar4 = func_0x00006e48(*(undefined4 *)psVar6,
                          *(undefined2 *)(param_1._2_2_ * 0x16 + _DAT_00028854 + 2));
  local_a[1] = 1;
  local_a[2] = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar6 = local_a + 1;
  }
  else {
    psVar6 = local_a + 2;
  }
  sVar5 = *psVar6 * 2 + 10;
  if (*(short *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x82e) != 0) {
    sVar5 = *psVar6 * 2 + 0x16;
  }
  if (*(short *)(_DAT_00028978 + 0x48) != 0) {
    local_c = 1;
    local_a[0] = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar6 = &local_c;
    }
    else {
      psVar6 = local_a;
    }
    sVar5 = *psVar6 * 2;
  }
  if (sVar4 < sVar5) {
    sVar4 = func_0x00002df0(sVar2);
    if (sVar4 == 0) {
      uVar3 = 0;
    }
    else if (*(char *)((*(uint *)(sVar2 * 0xe0 + _DAT_00028850 + sVar1 * 2) >> 0x18) + _DAT_0002884c
                      + 0x711) == '\v') {
      if (*(char *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
        uVar3 = 1;
      }
      else if ((*(byte *)(sVar2 * 0xe0 + _DAT_00028850 + 1 + sVar1 * 2) & 0x40) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// Function: FUN_00002170 at 00002170
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002170(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = param_1._0_2_ * 0x1e + _DAT_0002884c;
  sVar4 = *(short *)(iVar5 + 0xd2c);
  sVar1 = *(short *)(iVar5 + 0xd2e);
  if (*(char *)(iVar5 + 0xd28) == '\x01') {
    sVar3 = func_0x00002df0(sVar1);
    if (sVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(char *)((*(uint *)(sVar1 * 0xe0 + _DAT_00028850 + sVar4 * 2) >> 0x18) + _DAT_0002884c +
                   0x711) == '\n') {
        sVar4 = func_0x00004938(sVar1);
        if ((int)(char)FUN_000015d4[sVar4 * 0x42 + _DAT_0002884c + 5] !=
            (int)*(short *)(_DAT_0002884c + 0x110)) {
          return 0;
        }
      }
      else if (((*(byte *)(sVar1 * 0xe0 + _DAT_00028850 + 1 + sVar4 * 2) & 0x10) != 0) &&
              ((int)*(short *)(_DAT_0002884c + 0x110) !=
               (uint)(*(int *)(sVar1 * 0xe0 + _DAT_00028850 + 1 + sVar4 * 2) << 4) >> 0x1c)) {
        return 0;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_0000224e at 0000224e
// Size: 1704 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000224e(void)

{
  char cVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  short asStackY_10014 [32724];
  int local_28 [2];
  short local_20;
  short local_1e;
  short local_1c;
  short local_16;
  short asStack_14 [8];
  
  local_16 = 0;
  sVar10 = *(short *)(_DAT_00028978 + 0x24a);
  while (sVar12 = sVar10 + -1, sVar10 != 0) {
    sVar10 = sVar12;
    if (*(short *)(sVar12 * 0x5c + _DAT_00028978 + 0x24c) != 0) {
      local_16 = local_16 + 1;
    }
  }
  *(undefined2 *)(_DAT_00028978 + 0x40) = 0;
  *(undefined2 *)(_DAT_00028978 + 0x3e) = 0;
  *(undefined2 *)(_DAT_00028978 + 0x3c) = 0;
  *(undefined2 *)(_DAT_00028978 + 0x3a) = 0;
  sVar10 = 8;
  while (sVar10 != 0) {
    asStack_14[(short)(sVar10 + -1)] = 0;
    sVar10 = sVar10 + -1;
  }
  sVar10 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar12 = sVar10 + -1, sVar10 != 0) {
    sVar10 = sVar12;
    if ((((int)(char)FUN_000015d4[sVar12 * 0x42 + _DAT_0002884c + 5] ==
          (int)*(short *)(_DAT_0002884c + 0x110)) &&
        (pbVar2 = (byte *)(sVar12 + _DAT_00028978 + 0x11e), *pbVar2 = *pbVar2 & 0x37,
        *(char *)(_DAT_00028978 + 0x56 + (int)sVar12) != '\a')) &&
       (sVar6 = func_0x00002df8(), sVar6 != 0)) {
      iVar14 = (int)local_1c + sVar12 * 0x42 + _DAT_0002884c;
      sVar12 = (short)*(char *)(iVar14 + 0x15e2);
      if (*(char *)(_DAT_00028864 + 5 + (short)*(char *)(iVar14 + 0x15da) * 6) == '\x01') {
        sVar12 = sVar12 + 2;
      }
      sVar11 = 8;
      sVar7 = -1;
      sVar6 = sVar12;
      while (sVar4 = sVar11 + -1, sVar11 != 0) {
        if (asStack_14[sVar4] == 0) {
          asStack_14[sVar4] = sVar12;
          sVar7 = -1;
          break;
        }
        sVar11 = sVar4;
        if (asStack_14[sVar4] < sVar6) {
          sVar6 = asStack_14[sVar4];
          sVar7 = sVar4;
        }
      }
      if (sVar7 != -1) {
        asStack_14[sVar7] = sVar12;
      }
    }
  }
  sVar10 = 100;
  sVar12 = 8;
  while (sVar6 = sVar12 + -1, sVar12 != 0) {
    sVar12 = sVar6;
    if ((asStack_14[sVar6] != 0) && (asStack_14[sVar6] < sVar10)) {
      sVar10 = asStack_14[sVar6];
    }
  }
  local_28[0] = (int)sVar10;
  local_28[1] = 4;
  if (sVar10 < 5) {
    piVar13 = local_28;
  }
  else {
    piVar13 = local_28 + 1;
  }
  *(short *)(_DAT_00028978 + 0x3a) = (short)*piVar13;
  if (local_16 == 4) {
    sVar10 = *(short *)(_DAT_0002884c + 0x15c2);
    while (sVar12 = sVar10 + -1, sVar10 != 0) {
      sVar10 = sVar12;
      if ((((int)(char)FUN_000015d4[sVar12 * 0x42 + _DAT_0002884c + 5] ==
            (int)*(short *)(_DAT_0002884c + 0x110)) &&
          (sVar6 = func_0x00002d80(CONCAT22(sVar12,1)), sVar6 != 0)) &&
         ((*(byte *)(sVar12 + _DAT_00028978 + 0x11e) & 2) != 0)) {
        bVar5 = false;
        sVar6 = 4;
        while (sVar11 = sVar6 + -1, sVar6 != 0) {
          iVar14 = (int)sVar11 + sVar12 * 0x42 + _DAT_0002884c;
          sVar7 = (short)*(char *)(iVar14 + 0x15da);
          sVar6 = sVar11;
          if (((-1 < sVar7) && (*(char *)(_DAT_00028864 + sVar7 * 6) != '\0')) &&
             ('\x04' < *(char *)(iVar14 + 0x15e2))) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          *(short *)(_DAT_00028978 + 0x3c) = *(short *)(_DAT_00028978 + 0x3c) + 1;
          pbVar2 = (byte *)(sVar12 + _DAT_00028978 + 0x11e);
          *pbVar2 = *pbVar2 | 0x40;
        }
      }
    }
  }
  sVar10 = *(short *)(_DAT_00028978 + 0x3c);
  if (sVar10 < 4) {
    sVar12 = *(short *)(_DAT_00028978 + 0x3c);
  }
  else {
    sVar12 = *(short *)(_DAT_00028978 + 0x3c) + -4;
  }
  if (2 < local_16) {
    sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
LAB_000025c0:
    sVar11 = sVar6 + -1;
    if (sVar6 != 0) {
      sVar6 = sVar11;
      if (((int)(char)FUN_000015d4[sVar11 * 0x42 + _DAT_0002884c + 5] ==
           (int)*(short *)(_DAT_0002884c + 0x110)) &&
         (sVar7 = func_0x00002d80(CONCAT22(sVar11,1)), sVar7 != 0)) {
        pbVar2 = (byte *)(sVar11 + _DAT_00028978 + 0x11e);
        if ((*pbVar2 & 0x40) != 0) {
          if (sVar12 == 0) goto LAB_000025c0;
          *pbVar2 = *pbVar2 & 0xbf;
          sVar12 = sVar12 + -1;
        }
        bVar5 = false;
        sVar7 = 4;
        while (sVar4 = sVar7 + -1, sVar7 != 0) {
          iVar14 = (int)sVar4 + sVar11 * 0x42 + _DAT_0002884c;
          cVar1 = *(char *)(iVar14 + 0x15da);
          sVar7 = sVar4;
          if (((-1 < cVar1) &&
              ((*(char *)(_DAT_00028864 + 5 + (short)cVar1 * 6) == '\x01' ||
               ((int)*(short *)(_DAT_00028978 + 0x3a) <= (int)*(char *)(iVar14 + 0x15e2))))) &&
             ('\x0f' < *(char *)((int)sVar4 + sVar11 * 0x42 + _DAT_0002884c + 0x15e6))) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          *(short *)(_DAT_00028978 + 0x3e) = *(short *)(_DAT_00028978 + 0x3e) + 1;
          pbVar2 = (byte *)(sVar11 + _DAT_00028978 + 0x11e);
          *pbVar2 = *pbVar2 | 0x80;
        }
      }
      goto LAB_000025c0;
    }
  }
  sVar12 = *(short *)(_DAT_00028978 + 0x3e);
  local_1e = 0;
  sVar6 = *(short *)(_DAT_00028978 + 0x3e);
  if (sVar6 < 4) {
    sVar11 = *(short *)(_DAT_00028978 + 0x3e);
  }
  else {
    sVar11 = *(short *)(_DAT_00028978 + 0x3e) + -4;
  }
  if (1 < local_16) {
    sVar7 = *(short *)(_DAT_0002884c + 0x15c2);
LAB_0000272a:
    sVar4 = sVar7 + -1;
    if (sVar7 != 0) {
      sVar7 = sVar4;
      if (((int)(char)FUN_000015d4[sVar4 * 0x42 + _DAT_0002884c + 5] ==
           (int)*(short *)(_DAT_0002884c + 0x110)) &&
         (sVar8 = func_0x00002d80(CONCAT22(sVar4,1)), sVar8 != 0)) {
        pbVar2 = (byte *)(sVar4 + _DAT_00028978 + 0x11e);
        if ((*pbVar2 & 0x40) == 0) {
          if ((*pbVar2 & 0x80) != 0) {
            if (sVar11 == 0) goto LAB_0000272a;
            *pbVar2 = *pbVar2 & 0x7f;
            sVar11 = sVar11 + -1;
          }
          local_20 = 0;
          sVar8 = 4;
          while (sVar3 = sVar8 + -1, sVar8 != 0) {
            iVar14 = (int)sVar3 + sVar4 * 0x42 + _DAT_0002884c;
            cVar1 = *(char *)(iVar14 + 0x15da);
            sVar8 = sVar3;
            if ((-1 < cVar1) &&
               ((((*(char *)(_DAT_00028864 + 5 + (short)cVar1 * 6) == '\x01' ||
                  ((int)*(short *)(_DAT_00028978 + 0x3a) <= (int)*(char *)(iVar14 + 0x15e2))) &&
                 (cVar1 = *(char *)((int)sVar3 + sVar4 * 0x42 + _DAT_0002884c + 0x15e6),
                 '\v' < cVar1)) && ((local_1e = local_1e + 1, sVar12 < 8 || ('\x0f' < cVar1)))))) {
              local_20 = 1;
            }
          }
          if (local_20 != 0) {
            *(short *)(_DAT_00028978 + 0x40) = *(short *)(_DAT_00028978 + 0x40) + 1;
            pbVar2 = (byte *)(sVar4 + _DAT_00028978 + 0x11e);
            *pbVar2 = *pbVar2 | 8;
          }
        }
      }
      goto LAB_0000272a;
    }
  }
  sVar12 = *(short *)(_DAT_00028978 + 0x40);
  if (sVar12 < 4) {
    sVar11 = *(short *)(_DAT_00028978 + 0x40);
  }
  else {
    sVar11 = *(short *)(_DAT_00028978 + 0x40) + -4;
  }
  sVar7 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar4 = sVar7 + -1, sVar7 != 0) {
    sVar7 = sVar4;
    if ((int)(char)FUN_000015d4[sVar4 * 0x42 + _DAT_0002884c + 5] ==
        (int)*(short *)(_DAT_0002884c + 0x110)) {
      pbVar2 = (byte *)(sVar4 + _DAT_00028978 + 0x11e);
      if ((((*pbVar2 & 0xc0) == 0) && ((*pbVar2 & 8) != 0)) && (sVar11 != 0)) {
        *pbVar2 = *pbVar2 & 0xf7;
        sVar11 = sVar11 + -1;
      }
    }
  }
  sVar11 = *(short *)(_DAT_00028978 + 0x24a);
  while (sVar7 = sVar11 + -1, sVar11 != 0) {
    iVar14 = sVar7 * 0x5c + _DAT_00028978;
    sVar11 = sVar7;
    if (*(short *)(iVar14 + 0x24c) != 0) {
      *(undefined2 *)(iVar14 + 0x2a4) = 8;
      if (sVar7 == 0) {
        if (local_1e < 8) {
          uVar9 = 8;
        }
        else {
          uVar9 = 0xc;
        }
        *(undefined2 *)(_DAT_00028978 + 0x2a4) = uVar9;
      }
      else if (sVar7 == 1) {
        *(ushort *)(_DAT_00028978 + 0x302) = *(ushort *)(_DAT_00028978 + 0x302) & 0xffef;
        if (3 < sVar12) {
          *(ushort *)(_DAT_00028978 + 0x302) = *(ushort *)(_DAT_00028978 + 0x302) | 0x10;
          *(undefined2 *)(_DAT_00028978 + 0x300) = 0xc;
        }
      }
      else if (sVar7 == 2) {
        *(ushort *)(_DAT_00028978 + 0x35e) = *(ushort *)(_DAT_00028978 + 0x35e) & 0xfff7;
        if (3 < sVar6) {
          *(ushort *)(_DAT_00028978 + 0x35e) = *(ushort *)(_DAT_00028978 + 0x35e) | 8;
          *(undefined2 *)(_DAT_00028978 + 0x35c) = 0x10;
        }
      }
      else if ((sVar7 == 3) &&
              (*(ushort *)(_DAT_00028978 + 0x3ba) = *(ushort *)(_DAT_00028978 + 0x3ba) & 0xffdf,
              3 < sVar10)) {
        *(ushort *)(_DAT_00028978 + 0x3ba) = *(ushort *)(_DAT_00028978 + 0x3ba) | 0x20;
        *(undefined2 *)(_DAT_00028978 + 0x3b8) = 0xc;
      }
    }
  }
  return;
}



