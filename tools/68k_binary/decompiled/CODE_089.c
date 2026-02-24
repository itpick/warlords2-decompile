// Warlords II - Decompiled 68k Code
// Segment: CODE_089
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    sVar2 = sVar1;
    if ((*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) == *(char *)(_DAT_0002884c + 0x111)) &&
       ((*(byte *)(sVar1 + _DAT_00028978 + 0x11e) & 4) == 0)) {
      func_0x00002d90(0);
    }
  }
  return;
}



