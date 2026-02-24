// Warlords II - Decompiled 68k Code
// Segment: CODE_061
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000082 at 00000082
// Size: 140 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000082(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 auStack_ee [80];
  undefined1 auStack_9e [150];
  undefined4 local_8;
  
  _DAT_00027f00 = 1;
  _DAT_0001572e = param_3;
  func_0x00002ad8(0x43ffff,param_1);
  func_0x000076d0(auStack_9e,extraout_A0);
  func_0x00002ad8(0x44ffff,param_2);
  func_0x000076d0(auStack_ee,extraout_A0_00);
  local_8 = 0;
  (**(code **)(*_DAT_000257ee + 0x68))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000512 at 00000512
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000512(void)

{
  undefined1 auStack_54 [80];
  
  if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
     (_DAT_00028840 != 0)) {
    func_0x000076d0((short)auStack_54,0x571e,_DAT_0001572e * 0x42 + _DAT_0002884c + 0x15c8);
    func_0x00002b68(auStack_54,0);
    func_0x000048a0(1);
    _DAT_00027f00 = 0;
  }
  func_0x00007548();
  return;
}



// Function: FUN_0000059a at 0000059a
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000059a(void)

{
  if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
     (_DAT_00028840 != 0)) {
    func_0x000048a0(0);
    _DAT_00027f00 = 0;
  }
  func_0x00007540(_DAT_0001572e);
  return;
}



// Function: FUN_000005ea at 000005ea
// Size: 54 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005ea(void)

{
  if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) != 0) {
    func_0x00002878(0x40000);
  }
  FUN_00000620();
  return;
}



// Function: FUN_00000620 at 00000620
// Size: 50 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000620(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_000297f4 + 0x80);
  *(undefined2 *)(iVar1 + 0x1d6) = _DAT_0001572e;
  func_0x00003e20(iVar1,0x3f0);
  return;
}



// Function: FUN_00000652 at 00000652
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000652(void)

{
  if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
     (_DAT_00028840 != 0)) {
    func_0x000048a0(0);
    _DAT_00027f00 = 0;
  }
  func_0x00007538(_DAT_0001572e);
  return;
}



// Function: FUN_000006a2 at 000006a2
// Size: 1222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000006a2(void)

{
  int iVar1;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  int *extraout_A0_02;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  int *extraout_A0_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  int *extraout_A0_04;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  int *extraout_A0_05;
  undefined2 extraout_A0w_08;
  int extraout_A0_06;
  int *extraout_A0_07;
  undefined2 extraout_A0w_09;
  int *extraout_A0_08;
  undefined2 extraout_A0w_10;
  int extraout_A0_09;
  undefined1 uVar2;
  short sVar3;
  undefined1 auStack_7dc [256];
  undefined1 auStack_6dc [256];
  undefined1 auStack_5dc [256];
  undefined1 auStack_4dc [256];
  undefined1 auStack_3dc [256];
  undefined1 auStack_2dc [256];
  undefined1 auStack_1dc [256];
  undefined1 auStack_dc [2];
  undefined1 auStack_da [60];
  undefined1 auStack_9e [80];
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  iVar1 = func_0x000076a8((char)auStack_4e);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((char)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    local_8 = extraout_A0;
    func_0x00001bf0((char)extraout_A0);
    (**(code **)(*local_8 + 0x400))();
    if (extraout_A0_00 != 0) {
      *(undefined4 *)(extraout_A0_00 + 0x20) = 0x70696374;
    }
    (**(code **)(*local_8 + 0x188))((short)local_8,100);
    if (extraout_A0_01 != (int *)0x0) {
      func_0x00002ad8();
      func_0x00007320((char)auStack_1dc,extraout_A0w);
      (**(code **)(*extraout_A0_01 + 1000))((char)extraout_A0_01,extraout_A0w_00);
    }
    func_0x00002a50(0xe0,0xf9);
    sVar3 = _DAT_0001572e * 0x42 + (short)_DAT_0002884c + 0x15c8;
    func_0x00002ad8();
    func_0x000076d0((short)auStack_9e,extraout_A0w_01,sVar3);
    (**(code **)(*local_8 + 0x188))((short)local_8,0x7231);
    if (extraout_A0_02 != (int *)0x0) {
      func_0x00007320((char)auStack_2dc,(short)auStack_9e);
      (**(code **)(*extraout_A0_02 + 1000))((char)extraout_A0_02,extraout_A0w_02);
    }
    func_0x00002ad8(0,(char)_DAT_00027f0c);
    func_0x000076d0((short)auStack_9e,extraout_A0w_03);
    (**(code **)(*local_8 + 0x188))((short)local_8,0x7232);
    if (extraout_A0_03 != (int *)0x0) {
      func_0x00007320((char)auStack_3dc,(short)auStack_9e);
      (**(code **)(*extraout_A0_03 + 1000))((char)extraout_A0_03,extraout_A0w_04);
    }
    func_0x00002ad8(_DAT_00027f08 != 1,(char)_DAT_00027f08);
    func_0x000076d0((short)auStack_9e,extraout_A0w_05);
    (**(code **)(*local_8 + 0x188))((short)local_8,0x7233);
    if (extraout_A0_04 != (int *)0x0) {
      func_0x00007320((char)auStack_4dc,(short)auStack_9e);
      (**(code **)(*extraout_A0_04 + 1000))((char)extraout_A0_04,extraout_A0w_06);
    }
    func_0x00002ad8(_DAT_00027f0a != 1,(char)_DAT_00027f0a);
    func_0x000076d0((short)auStack_9e,extraout_A0w_07);
    (**(code **)(*local_8 + 0x188))((short)local_8,0x7234);
    if (extraout_A0_05 != (int *)0x0) {
      func_0x00007320((char)auStack_5dc,(short)auStack_9e);
      (**(code **)(*extraout_A0_05 + 1000))((char)extraout_A0_05,extraout_A0w_08);
    }
    for (sVar3 = 0; sVar3 < _DAT_00027f08; sVar3 = sVar3 + 1) {
      (**(code **)(*local_8 + 0x188))((short)local_8,(char)sVar3 + '1');
      if (extraout_A0_06 != 0) {
        uVar2 = 0x9e;
        func_0x00004768((char)extraout_A0_06,*(undefined2 *)(_DAT_0002884c + 0x110));
        func_0x00004778((short)extraout_A0_06,0,uVar2);
      }
      func_0x000049a8((short)((uint)auStack_dc >> 0x10));
      (**(code **)(*local_8 + 0x188))((char)local_8,(char)sVar3 + '1');
      if (extraout_A0_07 != (int *)0x0) {
        func_0x00007320((char)auStack_6dc,(short)auStack_da);
        (**(code **)(*extraout_A0_07 + 1000))((char)extraout_A0_07,extraout_A0w_09);
      }
      func_0x000076d0((short)auStack_9e,0x5718,(char)*(undefined2 *)(&DAT_00027f0e + sVar3 * 2));
      (**(code **)(*local_8 + 0x188))((short)local_8,sVar3 + 0x6c31);
      if (extraout_A0_08 != (int *)0x0) {
        func_0x00007320((char)auStack_7dc,(short)auStack_9e);
        (**(code **)(*extraout_A0_08 + 1000))((char)extraout_A0_08,extraout_A0w_10);
      }
    }
    for (; sVar3 < 3; sVar3 = sVar3 + 1) {
      (**(code **)(*local_8 + 0x188))((short)local_8,(char)sVar3 + '1');
      if (extraout_A0_09 != 0) {
        uVar2 = 0xbe;
        func_0x00004768((char)extraout_A0_09,*(undefined2 *)(_DAT_0002884c + 0x110));
        func_0x00004778((short)extraout_A0_09,0,uVar2);
      }
    }
    (**(code **)(*local_8 + 0x40c))();
    (**(code **)(*local_8 + 0x3a0))();
    local_8 = (int *)0x0;
    _DAT_00025f52 = local_14;
  }
  else {
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 0x3a0))();
      local_8 = (int *)0x0;
    }
    func_0x00001c10((short)((uint)local_18 >> 0x10));
  }
  if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) == 0) {
    iVar1 = 0;
  }
  else {
    sVar3 = func_0x00002878((char)_DAT_00027f0c);
    iVar1 = (int)sVar3;
  }
  return iVar1;
}



// Function: FUN_00000b68 at 00000b68
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000b68(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 auStack_42 [30];
  short local_24;
  
  sVar4 = 0;
  sVar1 = func_0x000032d8();
  if (sVar1 < 2) {
    sVar4 = 0;
  }
  else {
    for (sVar3 = 1; sVar3 < sVar1; sVar3 = sVar3 + 1) {
      func_0x000049a8((short)((uint)auStack_42 >> 0x10));
      sVar2 = func_0x000076d8((int)local_24);
      sVar4 = sVar2 / 2 + sVar4;
    }
  }
  return sVar4;
}



// Function: FUN_00000be2 at 00000be2
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000be2(void)

{
  short sVar1;
  undefined1 auStack_42 [30];
  short local_24;
  
  sVar1 = func_0x000032d8();
  if (sVar1 < 1) {
    sVar1 = 0;
  }
  else {
    func_0x000049a8((short)((uint)auStack_42 >> 0x10));
    sVar1 = func_0x000076d8((int)local_24);
    sVar1 = sVar1 / 2;
  }
  return sVar1;
}



// Function: FUN_00000c54 at 00000c54
// Size: 258 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c54(undefined4 param_1)

{
  short sVar2;
  int iVar1;
  undefined1 uVar3;
  undefined1 auStack_42 [30];
  short local_24;
  
  _DAT_00027f08 = 0;
  _DAT_00027f0c = 0;
  sVar2 = func_0x000032d8();
  if (0 < sVar2) {
    _DAT_00027f0a = sVar2 + -1;
    func_0x000049a8((short)((uint)auStack_42 >> 0x10));
    *(short *)(&DAT_00027f02 + _DAT_00027f08 * 2) =
         (short)*(char *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
    iVar1 = func_0x000076d8((int)local_24);
    *(short *)(&DAT_00027f0e + _DAT_00027f08 * 2) = (short)(iVar1 / 2);
    _DAT_00027f0c = *(short *)(&DAT_00027f0e + _DAT_00027f08 * 2) + _DAT_00027f0c;
    _DAT_00027f08 = _DAT_00027f08 + 1;
    *(undefined1 *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9) = 0xff;
    uVar3 = func_0x000032d0();
    *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d8) = uVar3;
  }
  return;
}



// Function: FUN_00000d56 at 00000d56
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d56(undefined4 param_1)

{
  short sVar2;
  int iVar1;
  undefined1 uVar3;
  short sVar4;
  undefined1 auStack_42 [30];
  short local_24;
  
  _DAT_00027f08 = 0;
  _DAT_00027f0c = 0;
  _DAT_00027f0a = 1;
  sVar2 = func_0x000032d8();
  if (1 < sVar2) {
    for (sVar4 = 1; sVar4 < sVar2; sVar4 = sVar4 + 1) {
      func_0x000049a8((short)((uint)auStack_42 >> 0x10));
      *(short *)(&DAT_00027f02 + _DAT_00027f08 * 2) =
           (short)*(char *)((int)sVar4 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da);
      iVar1 = func_0x000076d8((int)local_24);
      *(short *)(&DAT_00027f0e + _DAT_00027f08 * 2) = (short)(iVar1 / 2);
      _DAT_00027f0c = *(short *)(&DAT_00027f0e + _DAT_00027f08 * 2) + _DAT_00027f0c;
      _DAT_00027f08 = _DAT_00027f08 + 1;
      *(undefined1 *)((int)sVar4 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da) = 0xff;
    }
    uVar3 = func_0x000032d0();
    *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d8) = uVar3;
  }
  return;
}



// Function: FUN_00000e52 at 00000e52
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e52(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = param_1._2_2_;
  sVar1 = FUN_00000b68();
  FUN_00000d56(uVar3);
  iVar2 = (int)sVar1 + (int)*(short *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x186);
  if (30000 < iVar2) {
    iVar2 = 30000;
  }
  *(short *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x186) = (short)iVar2;
  *(short *)(&DAT_00001122 + param_1._0_2_ * 2 + _DAT_0002884c) =
       param_2._0_2_ + *(short *)(&DAT_00001122 + param_1._0_2_ * 2 + _DAT_0002884c);
  func_0x00007558(param_1._2_2_);
  if (_DAT_00028840 != 0) {
    if (*(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0xd0) == 0) {
      FUN_000006a2();
    }
    else if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) !=
             0) {
      func_0x00002878(sVar1);
    }
  }
  func_0x00003f60();
  return;
}



// Function: FUN_00000f30 at 00000f30
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f30(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  
  sVar1 = FUN_00000be2();
  iVar2 = (int)sVar1 + (int)*(short *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x186);
  if (30000 < iVar2) {
    iVar2 = 30000;
  }
  *(short *)(param_1._0_2_ * 0x14 + _DAT_0002884c + 0x186) = (short)iVar2;
  uVar3 = param_1._2_2_;
  FUN_00000c54();
  *(short *)(&DAT_00001122 + param_1._0_2_ * 2 + _DAT_0002884c) =
       param_2._0_2_ + *(short *)(&DAT_00001122 + param_1._0_2_ * 2 + _DAT_0002884c);
  func_0x00007558(param_1._2_2_,uVar3);
  if (_DAT_00028840 != 0) {
    if (*(short *)(param_1._0_2_ * 2 + _DAT_0002884c + 0xd0) == 0) {
      FUN_000006a2();
    }
    else if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) !=
             0) {
      func_0x00002878(sVar1);
    }
  }
  func_0x00003f60();
  return;
}



// Function: FUN_0000100c at 0000100c
// Size: 198 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000100c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  
  func_0x000027f0(*(undefined4 *)(param_1._2_2_ * 0x42 + _DAT_0002884c + 0x15c4));
  *(short *)(&DAT_00001122 + param_1._0_2_ * 2 + _DAT_0002884c) =
       param_2._0_2_ + *(short *)(&DAT_00001122 + param_1._0_2_ * 2 + _DAT_0002884c);
  func_0x00007558(param_1._2_2_);
  iVar1 = func_0x00002850(*(undefined4 *)(param_1._2_2_ * 0x42 + _DAT_0002884c + 0x15c4));
  if ((short)iVar1 != 0) {
    iVar1 = func_0x00002858();
  }
  if (_DAT_00028840 != 0) {
    if (*(short *)(&DAT_00001142 + *(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c) == 0) {
      iVar1 = 0;
    }
    else {
      sVar2 = func_0x00002878(0x20000);
      iVar1 = (int)sVar2;
    }
  }
  return iVar1;
}



