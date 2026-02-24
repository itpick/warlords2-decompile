// Warlords II - Decompiled 68k Code
// Segment: CODE_103
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 178 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0000000c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
  sVar4 = 0;
  while( true ) {
    sVar1 = sVar3 + -1;
    if (sVar3 == 0) break;
    sVar3 = sVar1;
    if ((int)*(char *)(sVar1 * 0x42 + _DAT_0002884c + 0x15d9) ==
        (int)*(short *)(_DAT_0002884c + 0x110)) {
      sVar2 = 0;
      if (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) == '\a') {
        sVar2 = func_0x00002ad0(0x10064);
      }
      else if (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) == '\x02') {
        sVar2 = func_0x00002ad0(0x10064);
      }
      else if (*(char *)(_DAT_00028978 + 0x56 + (int)sVar1) == '\x03') {
        sVar2 = func_0x00002ad0(0x10064);
      }
      if (sVar4 < sVar2) {
        param_1._0_2_ = sVar1;
        sVar4 = sVar2;
      }
    }
  }
  return param_1._0_2_;
}



// Function: FUN_000000be at 000000be
// Size: 570 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000000be(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  int iVar8;
  bool bVar9;
  short local_8;
  short local_6;
  
  sVar3 = 0;
  sVar6 = 0;
  _DAT_000284b6 = 0;
  if (*(short *)(_DAT_0002884c + 0x15e) == 0) {
    local_8 = 1;
    local_6 = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar7 = &local_8;
    }
    else {
      psVar7 = &local_6;
    }
    if (*psVar7 == 1) {
      iVar8 = *(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c;
      _DAT_000284b8 = *(undefined2 *)(iVar8 + 0x18a);
      _DAT_000284ba = *(undefined2 *)(iVar8 + 0x18c);
      _DAT_000284b4 = func_0x00004938(_DAT_000284ba);
      uVar2 = 1;
    }
    else {
      sVar5 = 5;
      func_0x00004930();
      if (0x27 < *(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800)) {
        sVar5 = 6;
      }
      _DAT_000284bc = 0;
      sVar4 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar1 = sVar4 + -1, sVar4 != 0) {
        iVar8 = sVar1 * 0x16 + _DAT_00028854;
        sVar4 = sVar1;
        if ((*(char *)(iVar8 + 4) == '\x1c') &&
           (sVar3 = sVar3 + 1, *(char *)(_DAT_0002884c + 0x111) == *(char *)(iVar8 + 5))) {
          _DAT_000284bc = 1;
          sVar6 = sVar6 + 1;
        }
      }
      if ((sVar3 < 0x28) && (sVar6 < sVar5)) {
        if (_DAT_000284bc == 0) {
          _DAT_000284b6 = func_0x00002ad0(400);
        }
        else {
          _DAT_000284b6 = func_0x00002ad0(600);
        }
        if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) <
            _DAT_000284b6) {
          uVar2 = 0;
        }
        else {
          sVar3 = func_0x00002ad0(0x1e);
          if (sVar3 < 7) {
            sVar5 = -1;
            sVar4 = func_0x00002ad0(*(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800)
                                   );
            sVar6 = 1;
            for (sVar3 = 0; sVar3 < *(short *)(_DAT_0002884c + 0x15c2); sVar3 = sVar3 + 1) {
              if (*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) ==
                  *(char *)(_DAT_0002884c + 0x111)) {
                bVar9 = sVar6 == sVar4;
                sVar6 = sVar6 + 1;
                sVar5 = sVar3;
                if (bVar9) break;
              }
            }
            if (sVar5 == -1) {
              uVar2 = 0;
            }
            else {
              _DAT_000284b4 = sVar5;
              func_0x00003be0();
              if ((_DAT_00028952 == 0) &&
                 (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                _DAT_000284b4 = FUN_0000000c();
                uVar2 = 1;
              }
              else {
                uVar2 = 1;
                _DAT_000284b4 = sVar5;
              }
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



