// Warlords II - Decompiled 68k Code
// Segment: CODE_087
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 472 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  
  sVar6 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar4 = sVar6 + -1, sVar6 != 0) {
    psVar9 = (short *)(sVar4 * 0x16 + _DAT_00028854);
    sVar6 = sVar4;
    if ((((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar9 + 5)) && (*psVar9 != -1)) &&
        (*(char *)(psVar9 + 3) <= *(char *)((int)psVar9 + 7))) &&
       (*(char *)((*(uint *)(*(short *)(_DAT_00028854 + 2 + sVar4 * 0x16) * 0xe0 + _DAT_00028850 +
                            *(short *)(_DAT_00028854 + sVar4 * 0x16) * 2) >> 0x18) + _DAT_0002884c +
                 0x711) != '\n')) {
      if (((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar4 * 0x16) >> 0x1c) == 1) &&
         (uVar7 = (ushort)((uint)(*(int *)(_DAT_00028854 + 0xf + sVar4 * 0x16) << 1) >> 0x19),
         *(char *)((*(uint *)(*(short *)((short)uVar7 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                              _DAT_00028850 +
                             *(short *)((short)uVar7 * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                   + _DAT_0002884c + 0x711) != '\n')) {
        iVar2 = *(int *)(_DAT_00028854 + 0xf + sVar4 * 0x16);
        sVar8 = *(short *)(_DAT_0002884c + 0x182);
        while (iVar5 = _DAT_00028854, sVar3 = sVar8 + -1, sVar8 != 0) {
          psVar9 = (short *)(sVar3 * 0x16 + _DAT_00028854);
          sVar8 = sVar3;
          if (((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar9 + 5)) &&
              (psVar10 = (short *)(sVar4 * 0x16 + _DAT_00028854), *psVar9 == *psVar10)) &&
             ((psVar9[1] == psVar10[1] &&
              (((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar3 * 0x16) >> 0x1c) == 1 &&
               ((int)(short)(ushort)((uint)(iVar2 << 1) >> 0x19) ==
                (uint)(*(int *)(_DAT_00028854 + 0xf + sVar3 * 0x16) << 1) >> 0x19)))))) {
            pbVar1 = (byte *)(_DAT_00028854 + 0xe + sVar3 * 0x16);
            *pbVar1 = *pbVar1 & 0xf;
            pbVar1 = (byte *)(iVar5 + 0xe + sVar3 * 0x16);
            *pbVar1 = *pbVar1 & 0xf1;
            func_0x00007448(sVar3 * 0x16 + (short)iVar5);
          }
        }
      }
      if (((*(ushort *)(_DAT_00028854 + 0xc + sVar4 * 0x16) & 0x20) == 0) &&
         ((byte)((uint)*(undefined4 *)(_DAT_00028854 + 0xe + sVar4 * 0x16) >> 0x1c) == 0)) {
        func_0x00002cd0();
      }
    }
  }
  return;
}



