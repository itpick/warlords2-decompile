// Warlords II - Decompiled 68k Code
// Segment: CODE_114
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000009a at 0000009a
// Size: 1554 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000009a(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  short local_14;
  undefined1 auStack_12 [8];
  short local_a;
  short local_8;
  short local_6;
  
  local_a = 0;
  _DAT_000287ca = param_1._0_2_;
  _DAT_000287cc = param_1._2_2_;
  uVar4 = (ushort)((uint)(*(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) <<
                         4) >> 0x1c);
  if ((*(short *)(_DAT_0002884c + 0x15a) == 0) &&
     ((7 < uVar4 || (*(short *)((short)uVar4 * 2 + _DAT_0002884c + 0xd0) != 0)))) {
    sVar2 = 0;
  }
  else {
    sVar2 = 1;
  }
  if (((*(short *)(_DAT_0002884c + 0x15a) == 0) || (7 < uVar4)) &&
     ((7 < uVar4 || (*(short *)((short)uVar4 * 2 + _DAT_0002884c + 0xd0) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (_DAT_0002883e != 0) {
    bVar1 = false;
  }
  local_6 = 0;
  if (((_DAT_000276e4 != 0) || (_DAT_0002884a != 0)) &&
     ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x80) == 0)) {
    bVar1 = false;
    sVar2 = 0;
  }
  func_0x00002d50(param_1._2_2_);
  if (param_2._0_2_ == 0) {
    _DAT_000287f8 = (short)DAT_0002868c;
    _DAT_000287fa = 0;
    _DAT_000287fc = (short)DAT_0002868d;
    _DAT_000287fe = 0;
    func_0x00002d18();
    sVar2 = (short)DAT_0002868d;
    while (sVar3 = sVar2 + -1, sVar2 != 0) {
      sVar2 = sVar3;
      if (*(char *)(sVar3 + 0x2874e) != '\0') {
        _DAT_000287fe = _DAT_000287fe + 1;
      }
    }
    sVar2 = (short)DAT_0002868c;
    while (sVar3 = sVar2 + -1, sVar2 != 0) {
      sVar2 = sVar3;
      if (*(char *)(sVar3 + 0x2872e) != '\0') {
        _DAT_000287fa = _DAT_000287fa + 1;
      }
    }
    return;
  }
  local_14 = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if ((*(short *)(local_8 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(local_8 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      local_14 = local_14 + 1;
    }
  }
  local_a = (short)(1 < local_14);
  sVar3 = sVar2;
  if ((local_a != 0) && (*(short *)(_DAT_0002884c + 0x124) != 0)) {
    bVar1 = false;
    sVar3 = 0;
    local_6 = sVar2;
  }
  if (_DAT_0002879a != 0) {
    if (((*(short *)(_DAT_0002884c + 0x11c) != 0) && (*(char *)(_DAT_0002879a + 0x15) != '\x0f')) &&
       ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                              (int)(short)*(char *)(_DAT_0002879a + 0x15)) << 6) >> 0x1e) != 2)) {
      func_0x00002cc8();
    }
    *(byte *)(_DAT_0002879a + 0x30) =
         (byte)*(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x15b68) |
         *(byte *)(_DAT_0002879a + 0x30);
  }
  if (((sVar3 != 0) && (sVar2 = func_0x00002850(param_1._2_2_), sVar2 != 0)) &&
     ((local_a == 0 || ((*(short *)(_DAT_0002884c + 0x124) == 0 || (_DAT_0002884a != 0)))))) {
    func_0x00002d20(param_1._2_2_);
  }
  func_0x00002d10(param_1._2_2_,0xffff);
  if (sVar3 == 0) {
    if (local_6 == 0) {
      _DAT_000287f6 = 0;
      goto LAB_000003d0;
    }
  }
  else {
    func_0x00003ac0(param_1._2_2_);
  }
  if (uVar4 < 8) {
    func_0x00002ad8(0,(short)(_DAT_0002884c + (short)uVar4 * 0x14));
    func_0x000076d0(0x859c,extraout_A0w);
  }
  else {
    func_0x00002ad8(0);
    func_0x000076d0(0x859c,extraout_A0w_00);
  }
  func_0x00003e50(0x859c,*(undefined2 *)(_DAT_0002884c + 0x110));
  _DAT_000287f6 = 1;
LAB_000003d0:
  sVar2 = func_0x00002d18();
  func_0x00002d08(param_1._2_2_,0x85ec,0x866c);
  puVar6 = auStack_12;
  func_0x000071f0((short)puVar6);
  puVar5 = auStack_12;
  uVar7 = _DAT_00027318;
  func_0x000029c8((short)puVar5,(short)((uint)puVar6 >> 0x10));
  func_0x000029c8((short)auStack_12,(short)((uint)puVar5 >> 0x10),uVar7);
  if ((bVar1) || (local_6 != 0)) {
    uVar7 = 0;
    func_0x00002d38();
    func_0x00002ab0(uVar7);
    func_0x00002d30((short)auStack_12);
  }
  func_0x00002890();
  if (sVar2 == 1) {
    func_0x000074d0(param_1._2_2_);
  }
  else {
    *(undefined1 *)(_DAT_00027fb8 + 0x20) = 0;
  }
  if (((bVar1) || (local_6 != 0)) || (sVar3 != 0)) {
    if (sVar2 == 0) {
      func_0x00002ad8(0,(short)(_DAT_0002884c + *(short *)(_DAT_0002884c + 0x110) * 0x14));
      func_0x000076d0(0x859c,extraout_A0w_01);
    }
    else if (_DAT_000288b0 == 0) {
      func_0x00002ad8(0,(short)(_DAT_0002884c + *(short *)(_DAT_0002884c + 0x110) * 0x14));
      func_0x000076d0(0x859c,extraout_A0w_03);
    }
    else {
      func_0x00002ad8(0,(short)((short)*(char *)(_DAT_000288b0 + 10) * 0x14 + _DAT_0002884c + 0x224)
                     );
      func_0x000076d0(0x859c,extraout_A0w_02);
    }
    if ((bVar1) || (local_6 != 0)) {
      uVar7 = 2;
      func_0x000028a0(0x859c);
      func_0x00002d40(uVar7);
      if (_DAT_000284ea != (int *)0x0) {
        (**(code **)(*_DAT_000284ea + 0x3a0))();
        _DAT_000284ea = (int *)0x0;
      }
      (**(code **)(*_DAT_00027fb4 + 0x268))();
    }
    (**(code **)(*_DAT_00027fb8 + 0x26c))();
    (**(code **)(*_DAT_00027fb4 + 0x268))();
  }
  if (((sVar3 != 0) && (sVar2 = func_0x00002850(param_1._2_2_), sVar2 != 0)) &&
     ((local_a == 0 || ((*(short *)(_DAT_0002884c + 0x124) == 0 || (_DAT_0002884a != 0)))))) {
    func_0x00002d20(param_1._2_2_);
    func_0x00003a78();
    func_0x000074b8();
  }
  if (((bVar1) || (local_6 != 0)) || (sVar3 != 0)) {
    FUN_000006ac(0x859c);
  }
  func_0x00002898();
  func_0x00004918();
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) != 0) {
    func_0x00002878(0);
  }
  func_0x00002c90(param_1._2_2_);
  func_0x00007518();
  (**(code **)(*_DAT_00027fb4 + 0x268))();
  (**(code **)(*_DAT_00027fbc + 0x268))();
  (**(code **)(*_DAT_00027fc8 + 0x268))();
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  func_0x000029b8((short)auStack_12);
  return;
}



// Function: FUN_000006ac at 000006ac
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006ac(undefined4 param_1)

{
  if (_DAT_000287f6 != 0) {
    func_0x00003e50(param_1,*(undefined2 *)(_DAT_0002884c + 0x110));
  }
  return;
}



