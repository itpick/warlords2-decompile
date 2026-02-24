// Warlords II - Decompiled 68k Code
// Segment: CODE_084
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000044 at 00000044
// Size: 328 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000044(void)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  ushort *puVar8;
  undefined1 auStack_14 [16];
  
  sVar6 = *(short *)(_DAT_0002884c + 0x182);
  do {
    do {
      do {
        sVar2 = sVar6 + -1;
        if (sVar6 == 0) {
          return;
        }
        psVar7 = (short *)(sVar2 * 0x16 + _DAT_00028854);
        sVar6 = sVar2;
      } while (((*(char *)(_DAT_0002884c + 0x111) != *(char *)((int)psVar7 + 5)) || (*psVar7 == -1))
              || (puVar8 = (ushort *)(psVar7 + 6), (*puVar8 & 0x100) == 0));
      *puVar8 = *puVar8 & 0xfeff;
      func_0x00007448(sVar2 * 0x16 + _DAT_00028854);
    } while (*(char *)(_DAT_00028854 + 4 + sVar2 * 0x16) != '\x1c');
    bVar3 = true;
    do {
      if (((!bVar3) ||
          (sVar4 = func_0x00002de0(*(undefined2 *)(sVar2 * 0x16 + _DAT_00028854 + 2),
                                   (short)auStack_14), sVar4 == 0)) ||
         (psVar7 = (short *)(sVar2 * 0x16 + _DAT_00028854), *(char *)((int)psVar7 + 7) < '\x03'))
      break;
      sVar4 = *psVar7;
      sVar1 = psVar7[1];
      sVar5 = func_0x00002c70(auStack_14);
      if (sVar5 == 0) {
        bVar3 = false;
      }
      else if (sVar5 == 1) {
        bVar3 = false;
      }
      psVar7 = (short *)(sVar2 * 0x16 + _DAT_00028854);
    } while (((sVar4 != *psVar7) || (sVar1 != psVar7[1])) ||
            (*(char *)(psVar7 + 3) <= *(char *)((int)psVar7 + 7)));
  } while( true );
}



