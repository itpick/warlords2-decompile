// Warlords II - Decompiled 68k Code
// Segment: CODE_137
// Decompiled by Ghidra 12.0.3

// Function: FUN_000002d2 at 000002d2
// Size: 572 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002d2(int param_1)

{
  short sVar2;
  int iVar1;
  
  if (param_1 < 0) {
    param_1._0_2_ = *(short *)(_DAT_0002884c + 0x17e);
  }
  if (param_1._2_2_ < 0) {
    param_1._2_2_ = *(short *)(_DAT_0002884c + 0x180);
  }
  if (_DAT_0002883e == 0) {
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
      _DAT_00027fd0 = 1;
      return 1;
    }
    if (*(short *)(_DAT_0002884c + 0x15a) != 0) {
      if (*(short *)(_DAT_0002884c + 0x124) == 0) {
        _DAT_00027fd0 = 1;
        return 1;
      }
      sVar2 = func_0x00003b38();
      if (*(char *)(sVar2 + 0x150fc) != '\x0e') {
        _DAT_00027fd0 = 1;
        return 1;
      }
      if (((_DAT_00027fd0 != 0) &&
          (iVar1 = func_0x000076d8((int)param_1._0_2_ - (int)_DAT_00027fcc), iVar1 < 2)) &&
         (iVar1 = func_0x000076d8((int)param_1._2_2_ - (int)_DAT_00027fce), iVar1 < 2)) {
        _DAT_00027fd0 = 0;
        return 1;
      }
    }
  }
  else {
    if (_DAT_00028840 == 0) {
      if (((*(short *)(_DAT_0002884c + 0x178) + -1 <= (int)param_1._0_2_) &&
          ((int)param_1._0_2_ <= *(short *)(_DAT_0002884c + 0x17c) + 1)) &&
         ((*(short *)(_DAT_0002884c + 0x176) + -1 <= (int)param_1._2_2_ &&
          ((int)param_1._2_2_ <= *(short *)(_DAT_0002884c + 0x17a) + 1)))) {
        _DAT_00027fd0 = 1;
        return 1;
      }
      return 0;
    }
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
      _DAT_00027fd0 = 1;
      return 1;
    }
    if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0x148) != 0) {
      if (*(short *)(_DAT_0002884c + 0x124) == 0) {
        _DAT_00027fd0 = 1;
        return 1;
      }
      sVar2 = func_0x00003b38();
      if (*(char *)(sVar2 + 0x150fc) != '\x0e') {
        _DAT_00027fd0 = 1;
        return 1;
      }
      if (((_DAT_00027fd0 != 0) &&
          (iVar1 = func_0x000076d8((int)param_1._0_2_ - (int)_DAT_00027fcc), iVar1 < 2)) &&
         (iVar1 = func_0x000076d8((int)param_1._2_2_ - (int)_DAT_00027fce), iVar1 < 2)) {
        _DAT_00027fd0 = 0;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_0000050e at 0000050e
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000050e(int param_1,undefined4 param_2)

{
  if (_DAT_00027fd0 == 0) {
    param_2._0_2_ = 0;
  }
  if (param_1 < 0) {
    param_1._0_2_ = *(short *)(_DAT_0002884c + 0x17e);
  }
  if (param_1._2_2_ < 0) {
    param_1._2_2_ = *(short *)(_DAT_0002884c + 0x180);
  }
  if (_DAT_0002883e == 0) {
    if (param_2._0_2_ == 0) {
      func_0x00003ae0();
    }
    else {
      func_0x00003af8(CONCAT22(param_1._0_2_,param_1._2_2_));
    }
  }
  else if (_DAT_00028840 == 0) {
    if ((((*(short *)(_DAT_0002884c + 0x178) + -1 <= (int)param_1._0_2_) &&
         ((int)param_1._0_2_ <= *(short *)(_DAT_0002884c + 0x17c) + 1)) &&
        (*(short *)(_DAT_0002884c + 0x176) + -1 <= (int)param_1._2_2_)) &&
       ((int)param_1._2_2_ <= *(short *)(_DAT_0002884c + 0x17a) + 1)) {
      func_0x00003ae0();
    }
  }
  else if (param_2._0_2_ == 0) {
    func_0x00003ae0();
  }
  else {
    func_0x00003af8(CONCAT22(param_1._0_2_,param_1._2_2_));
  }
  _DAT_00027fcc = *(undefined2 *)(_DAT_0002884c + 0x17e);
  _DAT_00027fce = *(undefined2 *)(_DAT_0002884c + 0x180);
  return;
}



// Function: FUN_000005fa at 000005fa
// Size: 202 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000005fa(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  
  if (*(short *)(_DAT_0002884c + 0x124) == 0) {
    uVar1 = 1;
  }
  else {
    sVar3 = param_1._2_2_;
    if (_DAT_00028848 == 0) {
      uVar1 = 0;
    }
    else {
      for (; sVar2 = param_1._0_2_, (int)sVar3 < (int)param_2._2_2_ + (int)param_1._2_2_;
          sVar3 = sVar3 + 1) {
        for (; (int)sVar2 < (int)param_2._0_2_ + (int)param_1._0_2_; sVar2 = sVar2 + 1) {
          if (_DAT_000276e4 == 0) {
            if (_DAT_0002884a == 0) {
              uVar4 = (ushort)((uint)(*(int *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) << 2) >>
                              0x1f);
            }
            else {
              uVar4 = (ushort)((uint)*(undefined4 *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) >>
                              0x1f);
            }
          }
          else {
            uVar4 = (ushort)((uint)*(undefined4 *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) >>
                            0x1f);
          }
          if (uVar4 != 0) {
            return 1;
          }
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



