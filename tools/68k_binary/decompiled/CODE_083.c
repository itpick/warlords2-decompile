// Warlords II - Decompiled 68k Code
// Segment: CODE_083
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000050 at 00000050
// Size: 462 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000050(void)

{
  byte *pbVar1;
  ushort *puVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  
  bVar4 = false;
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar6 = sVar5 + -1, sVar5 != 0) {
    sVar5 = sVar6;
    if (((int)*(char *)(sVar6 * 0x42 + _DAT_0002884c + 0x15d9) ==
         (int)*(short *)(_DAT_0002884c + 0x110)) &&
       (*(char *)(_DAT_00028978 + 0x56 + (int)sVar6) == '\a')) {
      bVar4 = true;
    }
  }
  *(undefined2 *)(_DAT_00028978 + 0x22) = 0;
  *(undefined2 *)(_DAT_00028978 + 0x24) = 0;
  for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
    sVar6 = *(short *)(_DAT_0002884c + 0x182);
    while (iVar9 = _DAT_00028854, sVar3 = sVar6 + -1, sVar6 != 0) {
      psVar7 = (short *)(sVar3 * 0x16 + _DAT_00028854);
      sVar6 = sVar3;
      if (((((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar7 + 5)) && (*psVar7 != -1)) &&
           ((psVar7[6] & 0x20U) != 0)) && ((*(char *)(psVar7 + 2) != '\x1c' || (sVar5 == 0)))) &&
         ((*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) == '\x1c' || (sVar5 != 0)))) {
        if (((*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16) == '\x1c') && (bVar4)) ||
           ((iVar8 = sVar3 * 0x16 + _DAT_00028854,
            *(char *)(_DAT_00028864 + (short)*(char *)(iVar8 + 4) * 6) != '\0' &&
            ((7 < *(short *)(_DAT_00028978 + 0x24) && (*(char *)(iVar8 + 8) < '\x04')))))) {
          pbVar1 = (byte *)(_DAT_00028854 + 0xe + sVar3 * 0x16);
          *pbVar1 = *pbVar1 & 0xf;
          pbVar1 = (byte *)(iVar9 + 0xf + sVar3 * 0x16);
          *pbVar1 = *pbVar1 & 0x80;
          puVar2 = (ushort *)(iVar9 + 0xc + sVar3 * 0x16);
          *puVar2 = *puVar2 & 0xffdf;
          func_0x00007448(sVar3 * 0x16 + _DAT_00028854);
        }
        else {
          func_0x00002c40(CONCAT22(sVar3,0xffff));
          iVar9 = sVar3 * 0x16 + _DAT_00028854;
          if ((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar9 + 5)) {
            if (*(char *)(_DAT_00028864 + (short)*(char *)(iVar9 + 4) * 6) == '\0') {
              *(short *)(_DAT_00028978 + 0x22) = *(short *)(_DAT_00028978 + 0x22) + 1;
            }
            else {
              *(short *)(_DAT_00028978 + 0x24) = *(short *)(_DAT_00028978 + 0x24) + 1;
            }
          }
        }
      }
    }
  }
  return;
}



