// Warlords II - Decompiled 68k Code
// Segment: CODE_099
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  sVar5 = *(short *)(_DAT_00028978 + 0x24a);
  while (sVar4 = sVar5 + -1, sVar5 != 0) {
    iVar7 = sVar4 * 0x5c + _DAT_00028978;
    sVar5 = sVar4;
    if (((*(short *)(iVar7 + 0x24c) != 0) && (sVar1 = *(short *)(iVar7 + 0x250), sVar1 != -1)) &&
       ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) ==
        (int)*(short *)(_DAT_0002884c + 0x110))) {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 7;
      sVar6 = 4;
      while (sVar3 = sVar6 + -1, sVar6 != 0) {
        sVar2 = *(short *)(sVar3 * 2 + sVar4 * 0x5c + _DAT_00028978 + 0x252);
        sVar6 = sVar3;
        if ((sVar2 != -1) && (*(char *)(_DAT_00028978 + 0x56 + (int)sVar2) == '\x06')) {
          func_0x00002b90(sVar1);
        }
      }
    }
  }
  return;
}



