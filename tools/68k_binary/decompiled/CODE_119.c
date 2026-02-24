// Warlords II - Decompiled 68k Code
// Segment: CODE_119
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000fc at 000000fc
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000000fc(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  sVar3 = -1;
  sVar4 = 10;
  sVar1 = 0;
  while ((sVar2 = -1, sVar1 < 4 &&
         (sVar2 = sVar1, *(char *)((int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da) != -1
         ))) {
    iVar5 = (int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c;
    sVar2 = (short)*(char *)(iVar5 + 0x15e2);
    if (*(char *)(_DAT_00028864 + 5 + (short)*(char *)(iVar5 + 0x15da) * 6) == '\x01') {
      sVar2 = sVar2 + 2;
    }
    if (sVar2 < sVar4) {
      sVar4 = sVar2;
      sVar3 = sVar1;
    }
    sVar1 = sVar1 + 1;
  }
  if (sVar2 == -1) {
    sVar2 = sVar3;
  }
  return sVar2;
}



