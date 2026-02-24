// Warlords II - Decompiled 68k Code
// Segment: CODE_093
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000040 at 00000040
// Size: 138 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000040(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  byte abStack_800a [32756];
  byte abStack_a [6];
  
  func_0x00002b70();
  sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
LAB_000000ba:
  do {
    do {
      sVar2 = sVar3 + -1;
      if (sVar3 == 0) {
        return;
      }
      sVar3 = sVar2;
    } while (*(char *)(_DAT_00028978 + 0x56 + (int)sVar2) != '\x02');
    func_0x00002db8();
    sVar4 = 6;
    do {
      sVar1 = sVar4 + -1;
      if (sVar4 == 0) goto LAB_000000ba;
      sVar4 = sVar1;
    } while ((abStack_a[sVar1] == 0xff) ||
            ((*(byte *)((short)(ushort)abStack_a[sVar1] + _DAT_00028978 + 0x11e) & 1) != 0));
    *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar2) = 3;
  } while( true );
}



