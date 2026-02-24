// Warlords II - Decompiled 68k Code
// Segment: CODE_112
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000017e at 0000017e
// Size: 94 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000017e(undefined4 param_1)

{
  if (((_DAT_00028868 == 0) || (param_1._0_2_ != _DAT_00015dee)) || (_DAT_00015df0 != 4)) {
    if ((_DAT_00028868 != 0) && (_DAT_00015df0 == 4)) {
      func_0x00004818();
      func_0x00004808();
    }
  }
  else {
    func_0x00004810();
    func_0x00004818();
    func_0x00004808();
  }
  return;
}



// Function: FUN_000001dc at 000001dc
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001dc(short param_1,undefined4 param_2)

{
  if (((_DAT_00028868 == 0) || (param_1 != _DAT_00015dee)) || (_DAT_00015df0 == 4)) {
    if ((_DAT_00028868 != 0) && (_DAT_00015df0 != 4)) {
      func_0x00004818();
    }
  }
  else {
    switch(param_2._0_2_) {
    case 0:
      func_0x00002b68(0x15d72,0);
      break;
    case 1:
      func_0x00002b68(0x15d20,0);
      break;
    case 2:
      func_0x00002b68(0x15d55,0);
      break;
    case 3:
      func_0x00002b68(0x15d3a,0);
      break;
    case 4:
      func_0x00002b68(0x15d04,0);
    }
  }
  return;
}



// Function: FUN_0000029a at 0000029a
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000029a(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1._0_2_ * 8 + _DAT_0002884c + 0x1582 + (int)param_1._2_2_);
  *puVar1 = *puVar1 & 0xf3ffffff | (param_2 >> 0x10 & 3) << 0x1a;
  if ((_DAT_0002883a != 0) && (_DAT_00015cbc == 0)) {
    func_0x00003fb8();
  }
  return;
}



// Function: FUN_000002ec at 000002ec
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002ec(void)

{
  if (_DAT_0002883a != 0) {
    if (_DAT_00015cbc == 0) {
      func_0x00003fb8();
    }
    else {
      func_0x00003fa8();
    }
  }
  return;
}



