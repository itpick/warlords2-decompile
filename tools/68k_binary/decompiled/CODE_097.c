// Warlords II - Decompiled 68k Code
// Segment: CODE_097
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  ushort *puVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short *psVar6;
  
  sVar5 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar3 = sVar5 + -1, sVar5 != 0) {
    psVar6 = (short *)(sVar3 * 0x16 + _DAT_00028854);
    sVar5 = sVar3;
    if (((((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)((int)psVar6 + 5)) &&
         (*psVar6 != -1)) && (*(char *)(psVar6 + 3) + 2 <= (int)*(char *)((int)psVar6 + 7))) &&
       (*(char *)((*(uint *)(*(short *)(_DAT_00028854 + 2 + sVar3 * 0x16) * 0xe0 + _DAT_00028850 +
                            *(short *)(_DAT_00028854 + sVar3 * 0x16) * 2) >> 0x18) + _DAT_0002884c +
                 0x711) != '\n')) {
      puVar1 = (ushort *)(_DAT_00028854 + 0xc + sVar3 * 0x16);
      *puVar1 = *puVar1 & 0xff5f;
      iVar4 = _DAT_00028854;
      pbVar2 = (byte *)(_DAT_00028854 + 0xe + sVar3 * 0x16);
      *pbVar2 = *pbVar2 & 0xf;
      *(undefined2 *)(iVar4 + 0x14 + sVar3 * 0x16) = 0xffff;
      *(undefined2 *)(_DAT_00028854 + 0x12 + sVar3 * 0x16) = 0xffff;
      func_0x00007448(sVar3 * 0x16 + _DAT_00028854);
      func_0x00002cd0();
    }
  }
  return;
}



