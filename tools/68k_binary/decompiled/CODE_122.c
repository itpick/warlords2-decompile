// Warlords II - Decompiled 68k Code
// Segment: CODE_122
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000d0 at 000000d0
// Size: 316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000d0(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  if (_DAT_000288f4 == 0) {
    if (*(char *)(_DAT_000288ac + 1) == '\x1c') {
      func_0x00004950(_DAT_000288ac,*_DAT_000288ac);
    }
    func_0x00007440(_DAT_000288ac);
  }
  else {
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      if (*(int *)(&DAT_000288b4 + sVar2 * 4) != 0) {
        if (*(char *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 4) == '\x1c') {
          func_0x00004950(*(undefined4 *)(&DAT_000288b4 + sVar2 * 4),
                          CONCAT22(**(undefined2 **)(&DAT_000288b4 + sVar2 * 4),
                                   *(undefined2 *)(*(int *)(&DAT_000288b4 + sVar2 * 4) + 2)));
          iVar3 = *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c;
          psVar1 = (short *)(iVar3 + 0x1142);
          if ((*psVar1 != 0) &&
             (*(short *)(iVar3 + 0x1146) * 0x16 + _DAT_00028854 ==
              *(int *)(&DAT_000288b4 + sVar2 * 4))) {
            *psVar1 = 0;
          }
        }
        func_0x00007440(*(undefined4 *)(&DAT_000288b4 + sVar2 * 4));
      }
    }
  }
  _DAT_000288ac = (undefined4 *)0x0;
  _DAT_000288b0 = 0;
  _DAT_000288f4 = 0;
  func_0x00004918();
  func_0x00004920();
  func_0x00003a78();
  func_0x00003ae0();
  func_0x000048d0();
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))(*(int **)(_DAT_000297f4 + 0x80),0,0);
  return;
}



