// Warlords II - Decompiled 68k Code
// Segment: CODE_095
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 190 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_14 [16];
  
  sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar1 = sVar3 + -1, sVar3 != 0) {
    iVar4 = sVar1 * 0x42 + _DAT_0002884c;
    sVar3 = sVar1;
    if ((((*(char *)(iVar4 + 0x15d9) == *(char *)(_DAT_0002884c + 0x111)) &&
         ((*(byte *)(sVar1 + _DAT_00028978 + 0x11e) & 0x20) != 0)) &&
        (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) != '\a')) &&
       (((sVar2 = func_0x00002de0(*(undefined2 *)(iVar4 + 0x15c6),(short)auStack_14,0), sVar2 != 0
         && (sVar2 = func_0x00002c70((short)auStack_14), sVar2 != 0)) &&
        ((sVar2 == 1 && (sVar2 = func_0x00002dd8(), sVar2 == 0)))))) {
      *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar1) = 0xd;
    }
  }
  return;
}



