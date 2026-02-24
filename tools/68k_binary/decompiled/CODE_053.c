// Warlords II - Decompiled 68k Code
// Segment: CODE_053
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 28 bytes

void FUN_0000000c(int param_1,undefined4 param_2)

{
  *(int *)(param_1 + 0x15e) = param_2._0_2_ + 0x5dd;
  return;
}



// Function: FUN_00000028 at 00000028
// Size: 152 bytes

void FUN_00000028(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x16);
  if (iVar1 == 0x61726d79) {
    FUN_000009ac();
  }
  else if (iVar1 == 0x63697479) {
    FUN_000009ac();
  }
  else if (iVar1 == 0x676f6c64) {
    FUN_000009ac();
  }
  else if (iVar1 == 0x70726f64) {
    FUN_000009ac();
  }
  else if (iVar1 == 0x77696e6e) {
    FUN_000009ac();
  }
  else {
    func_0x00004a30(param_1,param_2,(short)param_3,param_4);
  }
  return;
}



// Function: FUN_000000c0 at 000000c0
// Size: 162 bytes

void FUN_000000c0(undefined2 param_1,int param_2)

{
  if (param_2 == 0x61726d79) {
    func_0x00005360();
  }
  else if (param_2 == 0x63697479) {
    func_0x00005360();
  }
  else if (param_2 == 0x646f6e65) {
    func_0x00005360();
  }
  else if (param_2 == 0x676f6c64) {
    func_0x00005360();
  }
  else if (param_2 == 0x70726f64) {
    func_0x00005360();
  }
  else if (param_2 == 0x77696e6e) {
    func_0x00005360();
  }
  else {
    func_0x00005308(param_1,(short)param_2);
  }
  return;
}



// Function: FUN_00000162 at 00000162
// Size: 42 bytes

void FUN_00000162(undefined4 param_1,undefined4 param_2)

{
  if (param_2._2_2_ < param_2._0_2_) {
    func_0x00002a98();
    return;
  }
  func_0x00002a98();
  return;
}



// Function: FUN_000002a4 at 000002a4
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000002a4(void)

{
  char cVar1;
  
  func_0x000049b0();
  cVar1 = *(char *)(_DAT_00027ed2 + 800);
  func_0x000049b8();
  return (short)cVar1;
}



// Function: FUN_000002cc at 000002cc
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002cc(void)

{
  short *psVar1;
  short local_8;
  short local_6;
  
  func_0x000049b0();
  local_8 = 5;
  local_6 = (short)*(char *)(_DAT_00027ed2 + 800);
  if (*(char *)(_DAT_00027ed2 + 800) < 5) {
    psVar1 = &local_6;
  }
  else {
    psVar1 = &local_8;
  }
  _DAT_00027eda = *psVar1;
  _DAT_00027edc = 0;
  func_0x000049b8();
  return;
}



// Function: FUN_00000314 at 00000314
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000314(undefined4 param_1)

{
  undefined2 uVar1;
  
  _DAT_00015590 = param_1._0_2_;
  uVar1 = (undefined2)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10);
  FUN_0000000c((short)*(undefined4 *)(_DAT_000297f4 + 0x80));
  FUN_0000038c(uVar1);
  FUN_00000860();
  if (_DAT_00027e9e != (int *)0x0) {
    (**(code **)(*_DAT_00027e9e + 0x194))();
    (**(code **)(*_DAT_00027e9e + 0x40c))();
    (**(code **)(*_DAT_00027e9e + 0x3a0))();
    _DAT_00027e9e = (int *)0x0;
  }
  return;
}



// Function: FUN_0000038c at 0000038c
// Size: 1226 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000038c(undefined4 param_1)

{
  char cVar1;
  short sVar3;
  undefined4 uVar2;
  int *extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  int *extraout_A0_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  char *pcVar4;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w_04;
  undefined1 extraout_A0b_00;
  undefined2 extraout_A0w_05;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  undefined4 extraout_A0_05;
  int *extraout_A0_06;
  undefined2 extraout_A0w_08;
  char *pcVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 auStack_37c [256];
  undefined1 auStack_27c [256];
  undefined1 auStack_17c [256];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char acStack_54 [80];
  
  if ((param_1._0_2_ != 0) && (_DAT_00027e9e == (int *)0x0)) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((char)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00027e9e = extraout_A0;
    func_0x00001bf0((char)extraout_A0);
  }
  (**(code **)(*_DAT_00027e9e + 0x400))();
  func_0x00001bf0((char)extraout_A0w);
  (**(code **)(*_DAT_00027e9e + 0x188))((short)_DAT_00027e9e,0x6d65);
  if (extraout_A0_00 != (int *)0x0) {
    func_0x00002ad8(_DAT_00015590);
    func_0x00007320((char)auStack_17c,extraout_A0w_00);
    (**(code **)(*extraout_A0_00 + 1000))((char)extraout_A0_00,extraout_A0w_01);
  }
  (**(code **)(*_DAT_00027e9e + 0x188))((short)_DAT_00027e9e,99);
  if (extraout_A0_01 != (int *)0x0) {
    func_0x00002ad8(_DAT_00015590);
    func_0x00007320((char)auStack_27c,extraout_A0w_02);
    (**(code **)(*extraout_A0_01 + 1000))((char)extraout_A0_01,extraout_A0w_03);
  }
  sVar3 = FUN_00000a14();
  FUN_00000e08();
  func_0x00002a50(*(undefined2 *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xa0),0xf9
                 );
  pcVar4 = acStack_54;
  pcVar5 = &DAT_00015553;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar8 = (undefined1)sVar3;
  switch(_DAT_00015590) {
  case 0:
    local_5c = 0x14;
    local_58 = 0xf5;
    func_0x000048f0(extraout_A0w,0x616b,(short)((uint)&local_5c >> 0x10));
    func_0x00006e70(1,0);
    func_0x00002958(0,0xffffffff,1);
    func_0x00006e78(0);
    if (sVar3 == 1) {
      func_0x00002ad8(0);
      func_0x000076d0((short)acStack_54,extraout_A0b);
    }
    else {
      func_0x00002ad8(1,uVar8);
      func_0x000076d0((short)acStack_54,extraout_A0w_04);
    }
    break;
  case 1:
    local_64 = 0x14;
    local_60 = 0xf5;
    func_0x000048f0(extraout_A0w,0x616b,(short)((uint)&local_64 >> 0x10));
    func_0x00006e70(1,0);
    func_0x00006e78(0);
    if (sVar3 == 1) {
      func_0x00002ad8(0);
      func_0x000076d0((short)acStack_54,extraout_A0b_00);
    }
    else {
      func_0x00002ad8(1,uVar8);
      func_0x000076d0((short)acStack_54,extraout_A0w_05);
    }
    break;
  case 2:
    local_6c = 0x14;
    local_68 = 0xf5;
    func_0x000048f0(extraout_A0w,0x616b,(short)((uint)&local_6c >> 0x10));
    func_0x00006e70(1,0);
    func_0x00006e78(0);
    func_0x00004928();
    func_0x00004920();
    func_0x00002ad8(0x4e0000,(int)sVar3);
    func_0x000076d0(acStack_54,extraout_A0_02);
    break;
  case 3:
    local_74 = 0x14;
    local_70 = 0xf5;
    func_0x000048f0(extraout_A0w,0x616b,(short)((uint)&local_74 >> 0x10));
    if (((extraout_A0_03 != (int *)0x0) &&
        ((**(code **)(*extraout_A0_03 + 0x188))((short)extraout_A0_03,0x74),
        extraout_A0_04 != (int *)0x0)) && (sVar3 != *(short *)(extraout_A0_04 + 0x1f))) {
      if (*(short *)(extraout_A0_04 + 0x1f) < sVar3) {
        (**(code **)(*extraout_A0_04 + 0x3f8))((short)extraout_A0_04,0x1e);
      }
      else {
        (**(code **)(*extraout_A0_04 + 0x3d8))();
      }
    }
    uVar7 = 0;
    uVar6 = 0;
    func_0x00006e70(1,0);
    func_0x00002960(0,uVar6,uVar7);
    func_0x00006e78(0);
    if (sVar3 == 1) {
      func_0x00002ad8(1,1);
      func_0x000076d0((short)acStack_54,extraout_A0w_06);
    }
    else {
      func_0x00002ad8(0,uVar8);
      func_0x000076d0((short)acStack_54,extraout_A0w_07);
    }
    break;
  case 4:
    local_7c = 0x14;
    local_78 = 0xf5;
    func_0x000048f0(extraout_A0w,0x616b,(short)((uint)&local_7c >> 0x10));
    func_0x00006e70(1,0);
    func_0x00006e78(0);
    func_0x00002ad8(CONCAT22(0x50,sVar3));
    func_0x000076d0(acStack_54,extraout_A0_05);
  }
  (**(code **)(*_DAT_00027e9e + 0x188))((short)_DAT_00027e9e,0x79);
  uVar2 = 0;
  if (extraout_A0_06 != (int *)0x0) {
    func_0x00007320((char)auStack_37c,(short)acStack_54);
    uVar2 = (**(code **)(*extraout_A0_06 + 1000))((char)extraout_A0_06,extraout_A0w_08);
  }
  return uVar2;
}



// Function: FUN_00000860 at 00000860
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000860(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  
  (**(code **)(*_DAT_00027e9e + 0x188))(_DAT_00027e9e,0x61726d79);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3a8))();
  }
  (**(code **)(*_DAT_00027e9e + 0x188))(_DAT_00027e9e,0x63697479);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x3a8))();
  }
  (**(code **)(*_DAT_00027e9e + 0x188))(_DAT_00027e9e,0x676f6c64);
  if (extraout_A0_01 != (int *)0x0) {
    (**(code **)(*extraout_A0_01 + 0x3a8))();
  }
  (**(code **)(*_DAT_00027e9e + 0x188))(_DAT_00027e9e,0x70726f64);
  if (extraout_A0_02 != (int *)0x0) {
    (**(code **)(*extraout_A0_02 + 0x3a8))();
  }
  (**(code **)(*_DAT_00027e9e + 0x188))(_DAT_00027e9e,0x77696e6e);
  uVar1 = 0;
  if (extraout_A0_03 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0_03 + 0x3a8))();
  }
  return uVar1;
}



// Function: FUN_000009ac at 000009ac
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009ac(undefined4 param_1)

{
  int *extraout_A0;
  
  _DAT_00015590 = param_1._0_2_;
  FUN_0000000c((short)*(undefined4 *)(_DAT_000297f4 + 0x80));
  (**(code **)(*_DAT_00027e9e + 0x188))(_DAT_00027e9e,0x7267);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  FUN_0000038c();
  FUN_00000860();
  return;
}



// Function: FUN_00000a14 at 00000a14
// Size: 1002 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000a14(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  short local_18;
  short local_16;
  short local_14 [3];
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  sVar2 = 0;
  _DAT_00027ea2 = 0;
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    if (*(short *)(sVar3 * 2 + _DAT_0002884c + 0x138) == 0) {
      *(undefined2 *)(&DAT_00027eb4 + sVar3 * 2) = 1;
    }
    else {
      *(undefined2 *)(&DAT_00027eb4 + sVar3 * 2) = 0;
    }
    *(undefined2 *)(&DAT_00027ea4 + sVar3 * 2) = 0;
  }
  func_0x00004930();
  switch(_DAT_00015590) {
  case 0:
    sVar2 = *(short *)(_DAT_0002884c + 0x182);
    while (sVar3 = sVar2 + -1, sVar2 != 0) {
      cVar1 = *(char *)(_DAT_00028854 + 5 + sVar3 * 0x16);
      sVar2 = sVar3;
      if ((cVar1 < '\b') && (-1 < cVar1)) {
        *(short *)(&DAT_00027ea4 + cVar1 * 2) = *(short *)(&DAT_00027ea4 + cVar1 * 2) + 1;
      }
    }
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      local_8 = _DAT_00027ea2;
      local_6 = *(short *)(&DAT_00027ea4 + sVar2 * 2);
      if (_DAT_00027ea2 < *(short *)(&DAT_00027ea4 + sVar2 * 2)) {
        psVar5 = &local_6;
      }
      else {
        psVar5 = &local_8;
      }
      _DAT_00027ea2 = *psVar5;
    }
    if ((_DAT_00027ea2 != 0) && ((int)_DAT_00027ea2 / 2 == (_DAT_00027ea2 + -1) / 2)) {
      _DAT_00027ea2 = _DAT_00027ea2 + 1;
    }
    sVar2 = *(short *)(&DAT_00027ea4 + _DAT_00028846 * 2);
    break;
  case 1:
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      *(undefined2 *)(&DAT_00027ea4 + sVar2 * 2) = *(undefined2 *)(&DAT_00028800 + sVar2 * 2);
      local_c = _DAT_00027ea2;
      local_a = *(short *)(&DAT_00027ea4 + sVar2 * 2);
      if (_DAT_00027ea2 < *(short *)(&DAT_00027ea4 + sVar2 * 2)) {
        psVar5 = &local_a;
      }
      else {
        psVar5 = &local_c;
      }
      _DAT_00027ea2 = *psVar5;
    }
    if ((_DAT_00027ea2 != 0) && ((int)_DAT_00027ea2 / 2 == (_DAT_00027ea2 + -1) / 2)) {
      _DAT_00027ea2 = _DAT_00027ea2 + 1;
    }
    sVar2 = *(short *)(&DAT_00027ea4 + _DAT_00028846 * 2);
    break;
  case 2:
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      *(undefined2 *)(&DAT_00027ea4 + sVar2 * 2) =
           *(undefined2 *)(sVar2 * 0x14 + _DAT_0002884c + 0x186);
      local_14[2] = _DAT_00027ea2;
      local_e = *(short *)(&DAT_00027ea4 + sVar2 * 2);
      if (_DAT_00027ea2 < *(short *)(&DAT_00027ea4 + sVar2 * 2)) {
        psVar5 = &local_e;
      }
      else {
        psVar5 = local_14 + 2;
      }
      _DAT_00027ea2 = *psVar5;
    }
    if ((_DAT_00027ea2 != 0) && ((int)_DAT_00027ea2 / 2 == (_DAT_00027ea2 + -1) / 2)) {
      _DAT_00027ea2 = _DAT_00027ea2 + 1;
    }
    sVar2 = *(short *)(&DAT_00027ea4 + _DAT_00028846 * 2);
    break;
  case 3:
    sVar2 = FUN_000002a4();
    break;
  case 4:
    func_0x00004928();
    func_0x00004920();
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      sVar3 = 0;
      for (sVar4 = 0; sVar4 < *(short *)(_DAT_0002884c + 0x15c2); sVar4 = sVar4 + 1) {
        iVar6 = sVar4 * 0x42 + _DAT_0002884c;
        if ((char)sVar2 == *(char *)(iVar6 + 0x15d9)) {
          sVar3 = (short)*(char *)(iVar6 + 0x15d8) * *(short *)(iVar6 + 0x15ee) + sVar3;
        }
      }
      sVar4 = *(short *)(sVar2 * 0x14 + _DAT_0002884c + 0x186);
      if (10000 < sVar4) {
        sVar4 = 10000;
      }
      local_14[0] = *(short *)(_DAT_0002884c + 0x15c2) / 10;
      local_14[1] = 1;
      if (local_14[0] < 1) {
        psVar5 = local_14 + 1;
      }
      else {
        psVar5 = local_14;
      }
      *(short *)(&DAT_00027ea4 + sVar2 * 2) =
           (short)(((int)*(short *)(&DAT_00028810 + sVar2 * 2) + (int)sVar4 / 8 + (int)sVar3) /
                  (int)*psVar5);
      if (500 < *(short *)(&DAT_00027ea4 + sVar2 * 2)) {
        *(undefined2 *)(&DAT_00027ea4 + sVar2 * 2) = 500;
      }
      if (*(short *)(&DAT_00027ea4 + sVar2 * 2) < 1) {
        *(undefined2 *)(&DAT_00027ea4 + sVar2 * 2) = 1;
      }
    }
    sVar2 = 0;
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      if (*(short *)(&DAT_00027ea4 + _DAT_00028846 * 2) < *(short *)(&DAT_00027ea4 + sVar3 * 2)) {
        sVar2 = sVar2 + 1;
      }
    }
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      *(short *)(&DAT_00027ea4 + sVar3 * 2) = *(short *)(&DAT_00027ea4 + sVar3 * 2) / 5;
    }
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      local_18 = _DAT_00027ea2;
      local_16 = *(short *)(&DAT_00027ea4 + sVar3 * 2);
      if (_DAT_00027ea2 < *(short *)(&DAT_00027ea4 + sVar3 * 2)) {
        psVar5 = &local_16;
      }
      else {
        psVar5 = &local_18;
      }
      _DAT_00027ea2 = *psVar5;
    }
    _DAT_00027ea2 = 100;
  }
  return sVar2;
}



// Function: FUN_00000e08 at 00000e08
// Size: 576 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000e08(void)

{
  bool bVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  undefined1 auStack_3c [8];
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (_DAT_00015590 == 3) {
    uVar2 = FUN_0000120e();
  }
  else {
    (**(code **)(*_DAT_00027e9e + 0x188))((short)_DAT_00027e9e,0x7267);
    uVar2 = 0;
    if ((extraout_A0 != (int *)0x0) &&
       (uVar2 = (**(code **)(*extraout_A0 + 0x1d8))(), (char)uVar2 != '\0')) {
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        if (*(short *)(&DAT_00027eb4 + sVar3 * 2) == 0) {
          local_a = *(short *)(&DAT_00015574 + sVar3 * 2);
          local_6 = 8;
          local_c = 9;
          if (_DAT_00027ea2 < 1) {
            local_8 = 1;
          }
          else {
            if (*(short *)(&DAT_00027ea4 + sVar3 * 2) < 0) {
              *(undefined2 *)(&DAT_00027ea4 + sVar3 * 2) = 0;
            }
            local_8 = (short)((*(short *)(&DAT_00027ea4 + sVar3 * 2) * 0xf0) / (int)_DAT_00027ea2);
          }
          if (local_8 < 1) {
            local_8 = 1;
          }
          sVar4 = 0;
          local_34 = local_8 / 8;
          sVar5 = local_8 % 8;
          bVar1 = false;
          while (!bVar1) {
            if (sVar4 == local_34) {
              bVar1 = true;
              if (0 < sVar5) {
                local_28 = *(short *)(&DAT_00015556 + sVar3 * 4);
                local_12 = *(short *)(&DAT_00015554 + sVar3 * 4);
                local_2e = local_a;
                local_2c = sVar4 * 8 + local_c;
                local_10 = local_28 + 8;
                local_e = sVar5 + local_12;
                local_14 = local_28;
                func_0x00002378(0x1446c,&local_14,(short)&local_2e,0);
              }
            }
            else {
              local_2a = *(short *)(&DAT_00015556 + sVar3 * 4);
              local_1a = *(short *)(&DAT_00015554 + sVar3 * 4);
              local_32 = local_a;
              local_30 = sVar4 * 8 + local_c;
              local_18 = local_2a + 8;
              local_16 = local_1a + 8;
              local_1c = local_2a;
              func_0x00002378(0x1446c,&local_1c,(short)&local_32,0);
              sVar4 = sVar4 + 1;
            }
            func_0x00002a48(auStack_3c,local_a + -1,local_6 + 2);
            FUN_00000162(auStack_3c,0xfc00f8);
          }
        }
      }
      uVar2 = func_0x00002a98();
      return uVar2;
    }
  }
  return uVar2;
}



// Function: FUN_0000120e at 0000120e
// Size: 14 bytes

void FUN_0000120e(void)

{
  FUN_000002cc();
  return;
}



// Function: FUN_0000121c at 0000121c
// Size: 70 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000121c(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  uVar1 = _DAT_00015590;
  _DAT_00015590 = 4;
  FUN_00000a14();
  for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
    *(undefined2 *)(param_1 + sVar2 * 2) = *(undefined2 *)(&DAT_00027ea4 + sVar2 * 2);
  }
  _DAT_00015590 = uVar1;
  return;
}



// Function: FUN_00001262 at 00001262
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001262(void)

{
  if ((_DAT_00027e9e != 0) && ((_DAT_00015590 == 2 || (_DAT_00015590 == 4)))) {
    FUN_0000038c();
  }
  return;
}



// Function: FUN_00001292 at 00001292
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001292(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (_DAT_00027e9e != 0) {
    switch(_DAT_00015590) {
    case 0:
    case 1:
    case 4:
      FUN_0000038c();
      break;
    case 2:
      func_0x00006e70(1,0);
      break;
    case 3:
      uVar2 = 0;
      uVar1 = 0;
      func_0x00006e70(1,0);
      func_0x00002960(0,uVar1,uVar2);
    }
  }
  return;
}



