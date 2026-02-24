// Warlords II - Decompiled 68k Code
// Segment: CODE_081
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000106 at 00000106
// Size: 334 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000106(void)

{
  char cVar1;
  byte *pbVar2;
  short sVar3;
  undefined1 uVar4;
  short sVar5;
  short *psVar6;
  short local_10;
  short local_e [3];
  short local_8;
  short local_6;
  
  *(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28984) =
       *(undefined2 *)(_DAT_00028978 + 0x38);
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar3 = sVar5 + -1, sVar5 != 0) {
    sVar5 = sVar3;
    if ((int)*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) ==
        (int)*(short *)(_DAT_0002884c + 0x110)) {
      cVar1 = *(char *)(_DAT_00028978 + 0x56 + (int)sVar3);
      if ((cVar1 == '\r') || (cVar1 == '\v')) {
        local_8 = 1;
        local_6 = *(short *)(_DAT_0002884c + 0x136);
        if (*(short *)(_DAT_0002884c + 0x136) < 2) {
          psVar6 = &local_8;
        }
        else {
          psVar6 = &local_6;
        }
        if (*psVar6 < 5) {
          uVar4 = 4;
        }
        else {
          uVar4 = 8;
        }
        *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar3) = uVar4;
      }
      if ((*(short *)(_DAT_0002884c + 0x128) != 0) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
        local_e[1] = 1;
        local_e[2] = *(short *)(_DAT_0002884c + 0x136);
        if (*(short *)(_DAT_0002884c + 0x136) < 2) {
          psVar6 = local_e + 1;
        }
        else {
          psVar6 = local_e + 2;
        }
        if (*psVar6 == 1) {
          *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar3) = 0xd;
        }
        else {
          local_10 = 1;
          local_e[0] = *(short *)(_DAT_0002884c + 0x136);
          if (*(short *)(_DAT_0002884c + 0x136) < 2) {
            psVar6 = &local_10;
          }
          else {
            psVar6 = local_e;
          }
          if (*psVar6 < 3) {
            *(undefined1 *)(_DAT_00028978 + 0x56 + (int)sVar3) = 0xb;
          }
        }
      }
      pbVar2 = (byte *)(sVar3 + _DAT_00028978 + 0x11e);
      *pbVar2 = *pbVar2 & 0xfb;
    }
  }
  return;
}



