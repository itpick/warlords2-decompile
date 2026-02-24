// Warlords II - Decompiled 68k Code
// Segment: CODE_088
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000004e at 0000004e
// Size: 506 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000004e(undefined4 param_1)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  short sVar5;
  
  FUN_00000248();
  func_0x00002b70();
  _DAT_00028978[4] = 0;
  _DAT_00028978[3] = 0;
  _DAT_00028978[2] = 0;
  _DAT_00028978[1] = 0;
  sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
  while( true ) {
    sVar2 = sVar5 + -1;
    if (sVar5 == 0) break;
    sVar5 = sVar2;
    if (*(char *)((*(uint *)(*(short *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 + *(short *)(sVar2 * 0x42 + _DAT_0002884c + 0x15c4) * 2)
                  >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      if ((int)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) == (int)param_1._0_2_) {
        _DAT_00028978[1] = _DAT_00028978[1] + 1;
        pcVar1 = (char *)((int)_DAT_00028978 + sVar2 + 0xba);
        *pcVar1 = *pcVar1 + '\x01';
        pcVar1 = (char *)((int)_DAT_00028978 + sVar2 + 0x56);
        if (*pcVar1 == '\0') {
          *pcVar1 = '\x01';
        }
      }
      else {
        if ((*(byte *)((int)_DAT_00028978 + sVar2 + 0x11e) & 1) != 0) {
          _DAT_00028978[4] = _DAT_00028978[4] + 1;
        }
        *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0x56) = 0;
        *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0xba) = 0;
        if (*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
          _DAT_00028978[3] = _DAT_00028978[3] + 1;
        }
        else {
          _DAT_00028978[2] = _DAT_00028978[2] + 1;
        }
      }
    }
    else {
      *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0x56) = 0;
      *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0xba) = 0;
    }
  }
  if (_DAT_00028978[1] != 0) {
    sVar5 = *(short *)(_DAT_0002884c + 0x15c2);
    while( true ) {
      sVar2 = sVar5 + -1;
      if (sVar5 == 0) break;
      pcVar1 = (char *)((int)_DAT_00028978 + sVar2 + 0x56);
      if ((((*pcVar1 == '\b') && (_DAT_00028978[4] != 0)) && (_DAT_00028978[0x12] < 5)) &&
         ((*(byte *)((int)_DAT_00028978 + sVar2 + 0x11e) & 2) != 0)) {
        *pcVar1 = '\v';
      }
      sVar5 = sVar2;
      if (*(char *)((int)_DAT_00028978 + sVar2 + 0x56) == '\x01') {
        sVar3 = func_0x00002db8();
        if (sVar3 == 0) {
          uVar4 = 5;
        }
        else {
          uVar4 = 3;
        }
        *(undefined1 *)((int)_DAT_00028978 + sVar2 + 0x56) = uVar4;
      }
    }
    *_DAT_00028978 = *_DAT_00028978 + 1;
  }
  return;
}



// Function: FUN_00000248 at 00000248
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000248(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  
  sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar3 = sVar6 + -1, sVar6 != 0) {
    sVar6 = sVar3;
    if (*(char *)((*(uint *)(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 + *(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c4) * 2)
                  >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      bVar4 = false;
      pbVar1 = (byte *)(sVar3 + _DAT_00028978 + 0x11e);
      *pbVar1 = *pbVar1 & 0xfd;
      sVar7 = 4;
      while (sVar2 = sVar7 + -1, sVar7 != 0) {
        sVar5 = (short)*(char *)((int)sVar2 + sVar3 * 0x42 + _DAT_0002884c + 0x15da);
        sVar7 = sVar2;
        if ((sVar5 != -1) && (*(char *)(_DAT_00028864 + sVar5 * 6) != '\0')) {
          bVar4 = true;
        }
      }
      if (bVar4) {
        pbVar1 = (byte *)(sVar3 + _DAT_00028978 + 0x11e);
        *pbVar1 = *pbVar1 | 2;
      }
    }
  }
  return;
}



