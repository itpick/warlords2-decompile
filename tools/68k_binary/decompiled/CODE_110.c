// Warlords II - Decompiled 68k Code
// Segment: CODE_110
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000294 at 00000294
// Size: 734 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000294(void)

{
  int iVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  short *psVar9;
  byte abStackY_8010 [32716];
  undefined1 auStack_1a [6];
  short local_14;
  short local_12;
  byte abStack_10 [6];
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  iVar1 = *(int *)((int)_DAT_000288ac + 0xf);
  local_6 = *_DAT_000288ac;
  local_8 = _DAT_000288ac[1];
  local_a = 100;
  sVar3 = func_0x00002da0();
  sVar4 = func_0x00004938(local_8);
  if ((int)*(char *)((short)(ushort)((uint)(iVar1 << 1) >> 0x19) * 0x42 + _DAT_0002884c + 0x15d9) ==
      (int)*(short *)(_DAT_0002884c + 0x110)) {
    if ((sVar4 < 0) ||
       (sVar3 = func_0x00002db8((short)((uint)abStack_10 >> 0x10),(short)((uint)auStack_1a >> 0x10))
       , sVar3 == 0)) {
      func_0x00002db8((short)((uint)abStack_10 >> 0x10),(short)((uint)auStack_1a >> 0x10));
    }
    sVar3 = 1000;
    sVar4 = 6;
    uVar7 = 0xffff;
    while (sVar6 = sVar4 + -1, sVar4 != 0) {
      uVar5 = (ushort)abStack_10[sVar6];
      sVar4 = sVar6;
      if ((uVar5 != 0xff) && ((*(byte *)((short)uVar5 + _DAT_00028978 + 0x11e) & 1) == 0)) {
        if (*(short *)(_DAT_0002884c + 0x11a) != 0) {
          local_a = func_0x00002cb8(*(undefined2 *)((short)uVar5 * 0x42 + _DAT_0002884c + 0x15c6));
        }
        if ((0x4a < local_a) &&
           (sVar6 = func_0x00006e48(local_8,*(undefined2 *)
                                             ((short)uVar5 * 0x42 + _DAT_0002884c + 0x15c6)),
           sVar6 < sVar3)) {
          sVar3 = sVar6;
          uVar7 = uVar5;
        }
      }
    }
    if (uVar7 == 0xffff) {
      if (*(short *)(_DAT_0002884c + 0x124) != 0) {
        local_14 = 1;
        local_12 = *(short *)(_DAT_0002884c + 0x136);
        if (*(short *)(_DAT_0002884c + 0x136) < 2) {
          psVar9 = &local_14;
        }
        else {
          psVar9 = &local_12;
        }
        if (*psVar9 < 10) {
          sVar3 = 0;
          do {
            if (7 < sVar3) {
              return 0;
            }
            if (*(int *)(&DAT_000288b4 + sVar3 * 4) != 0) {
              sVar4 = *(short *)(_DAT_0002884c + 0x182);
              do {
                sVar6 = sVar4 + -1;
                sVar8 = -1;
                if (sVar4 == 0) break;
                sVar4 = sVar6;
                sVar8 = sVar6;
              } while (sVar6 * 0x16 + _DAT_00028854 != *(int *)(&DAT_000288b4 + sVar3 * 4));
              if (sVar8 != -1) {
                func_0x00002c40(0xffff);
              }
            }
            sVar3 = sVar3 + 1;
          } while( true );
        }
      }
    }
    else {
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        if ((*(int *)(&DAT_000288b4 + sVar3 * 4) != 0) &&
           (*(char *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 5) != -1)) {
          iVar1 = *(int *)(&DAT_000288b4 + sVar3 * 4);
          pbVar2 = (byte *)(iVar1 + 0xe);
          *pbVar2 = *pbVar2 & 0xf;
          pbVar2 = (byte *)(iVar1 + 0xe);
          *pbVar2 = *pbVar2 | 0x10;
          *(uint *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xf) =
               *(uint *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xf) & 0x80ffffff |
               (uint)(uVar7 & 0x7f) << 0x18;
          func_0x00002dd0((short)*(undefined4 *)(&DAT_000288b4 + sVar3 * 4),uVar7);
          func_0x00007448((short)*(undefined4 *)(&DAT_000288b4 + sVar3 * 4));
        }
      }
    }
  }
  else if (sVar3 == 0) {
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      if ((*(int *)(&DAT_000288b4 + sVar3 * 4) != 0) &&
         (*(char *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 5) != -1)) {
        *(byte *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xe) =
             *(byte *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xe) & 0xf;
        *(byte *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xf) =
             *(byte *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0xf) & 0x80;
        *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0x14) = 0xffff;
        *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar3 * 4) + 0x12) = 0xffff;
        func_0x00007448(sVar3 * 0x16 + (short)_DAT_00028854);
      }
    }
    return 0;
  }
  return 1;
}



