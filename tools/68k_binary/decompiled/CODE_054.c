// Warlords II - Decompiled 68k Code
// Segment: CODE_054
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 28 bytes

void FUN_0000000c(int param_1,undefined4 param_2)

{
  *(int *)(param_1 + 0x162) = param_2._0_2_ + 0x709;
  return;
}



// Function: FUN_00000028 at 00000028
// Size: 242 bytes

void FUN_00000028(undefined4 param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x16);
  if (iVar1 == 0x63697479) {
    FUN_00001614();
  }
  else if (iVar1 == 0x6576656e) {
    FUN_00001614();
  }
  else if (iVar1 == 0x676f6c64) {
    FUN_00001614();
  }
  else if ((iVar1 == 0x6c656674) || (iVar1 == 0x72696768)) {
    FUN_0000167e(2);
  }
  else if (((((iVar1 == 0x73696430) || (iVar1 == 0x73696431)) || (iVar1 == 0x73696432)) ||
           ((iVar1 == 0x73696433 || (iVar1 == 0x73696434)))) ||
          ((iVar1 == 0x73696435 || ((iVar1 == 0x73696436 || (iVar1 == 0x73696437)))))) {
    FUN_00001e9c();
  }
  else if (iVar1 == 0x77696e6e) {
    FUN_00001614();
  }
  else {
    func_0x00004a30(param_1,param_2,(short)param_3,param_4);
  }
  return;
}



// Function: FUN_0000011a at 0000011a
// Size: 96 bytes

void FUN_0000011a(undefined2 param_1,uint param_2)

{
  if ((param_2 < 0x73696430) || (0x73696437 < param_2)) {
    if (param_2 == 0x646f6e65) {
      func_0x00005360();
    }
    else {
      func_0x00005308(param_1,(short)param_2);
    }
  }
  else {
    func_0x00005360();
  }
  return;
}



// Function: FUN_0000017a at 0000017a
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000017a(void)

{
  FUN_0000167e();
  func_0x00006d80(_DAT_000297f4);
  return;
}



// Function: FUN_0000019a at 0000019a
// Size: 20 bytes

void FUN_0000019a(void)

{
  FUN_000003b2(0x10001);
  return;
}



// Function: FUN_000001ae at 000001ae
// Size: 8 bytes

void FUN_000001ae(void)

{
  return;
}



// Function: FUN_000001b6 at 000001b6
// Size: 14 bytes

void FUN_000001b6(void)

{
  func_0x00003f50();
  return;
}



// Function: FUN_000001c4 at 000001c4
// Size: 74 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001c4(short *param_1)

{
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_8 = param_1[3] + param_1[1];
  local_6 = param_1[2] + *param_1;
  local_c = param_1[1];
  local_a = *param_1;
  func_0x00007258(&local_c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000218 at 00000218
// Size: 410 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000218(undefined4 param_1)

{
  int iVar1;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  short *psVar2;
  short local_52;
  short local_50 [3];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  _DAT_00015a8e = param_1._0_2_;
  if (param_1._0_2_ == 4) {
    FUN_00001a4e();
  }
  else {
    FUN_0000000c((short)*(undefined4 *)(_DAT_000297f4 + 0x80));
    local_50[1] = 1;
    local_50[2] = *(short *)(_DAT_0002884c + 0x136);
    if (*(short *)(_DAT_0002884c + 0x136) < 2) {
      psVar2 = local_50 + 1;
    }
    else {
      psVar2 = local_50 + 2;
    }
    if (*psVar2 < 2) {
      func_0x00002ad8(1);
      func_0x00002ad8(0,extraout_A0w);
      func_0x00002b68(extraout_A0w_00);
    }
    else {
      local_52 = 1;
      local_50[0] = *(short *)(_DAT_0002884c + 0x136);
      if (*(short *)(_DAT_0002884c + 0x136) < 2) {
        psVar2 = &local_52;
      }
      else {
        psVar2 = local_50;
      }
      _DAT_000283fc = *psVar2;
      if (0xc9 < _DAT_000283fc) {
        _DAT_000283fc = 0xc9;
      }
      _DAT_000283fa = _DAT_000283fc + -1;
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar1 = func_0x000076a8((short)auStack_4a);
      if (iVar1 == 0) {
        FUN_000003b2(1);
        FUN_0000147e();
        if (_DAT_00028416 != (int *)0x0) {
          (**(code **)(*_DAT_00028416 + 0x40c))();
          FUN_00001a40();
          (**(code **)(*_DAT_00028416 + 0x3a0))();
          _DAT_00028416 = (int *)0x0;
        }
        _DAT_00025f52 = local_10;
      }
      else {
        if (_DAT_00028416 != (int *)0x0) {
          (**(code **)(*_DAT_00028416 + 0x3a0))();
        }
        _DAT_00028416 = (int *)0x0;
        FUN_00001c10((short)((uint)local_14 >> 0x10));
      }
    }
  }
  return;
}



// Function: FUN_000003b2 at 000003b2
// Size: 900 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003b2(undefined4 param_1)

{
  short sVar1;
  int extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined1 extraout_A0b;
  undefined1 extraout_A0b_00;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  undefined1 extraout_A0b_01;
  int *extraout_A0_06;
  int *extraout_A0_07;
  undefined1 extraout_A0b_02;
  undefined1 auStack_254 [256];
  undefined1 auStack_154 [256];
  undefined1 auStack_54 [80];
  
  if (param_1._0_2_ != 0) {
    if (_DAT_00028416 == (int *)0x0) {
      sVar1 = FUN_00001ebc();
      if (sVar1 == 0) {
        return;
      }
      if (DAT_000264d0 != '\0') {
        func_0x000066a0();
        func_0x000073b0(0x3a);
        if (extraout_A0 != 0) {
          func_0x00007128((char)extraout_A0);
        }
      }
      if (DAT_000264d0 != '\0') {
        func_0x000066b8();
        func_0x000073b0(0xa4);
        if (extraout_A0_00 != 0) {
          func_0x00007130((char)extraout_A0_00);
        }
      }
      (**(code **)(*_DAT_000257ee + 0x68))
                ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
      _DAT_00028416 = extraout_A0_01;
      FUN_00001bf0((char)extraout_A0_01);
    }
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x65);
    if (extraout_A0_02 != (int *)0x0) {
      func_0x00002ad8((char)_DAT_00015a8e);
      func_0x00007320((short)auStack_154,extraout_A0b);
      (**(code **)(*extraout_A0_02 + 1000))((short)extraout_A0_02,extraout_A0b_00);
    }
  }
  (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x6d);
  if (extraout_A0_03 != (int *)0x0) {
    (**(code **)(*extraout_A0_03 + 0x334))();
  }
  (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x67);
  if (extraout_A0_04 != (int *)0x0) {
    (**(code **)(*extraout_A0_04 + 0x334))();
  }
  if ((param_1._2_2_ != 0) || (param_1._0_2_ != 0)) {
    func_0x000076d0((short)auStack_54,0x5a76,(char)_DAT_000283fa);
    (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x726e);
    if (extraout_A0_05 != (int *)0x0) {
      func_0x00007320((short)auStack_254,(char)auStack_54);
      (**(code **)(*extraout_A0_05 + 1000))((short)extraout_A0_05,extraout_A0b_01);
    }
  }
  if (param_1._0_2_ != 0) {
    if (_DAT_00015a8e == 1) {
      FUN_00002620();
    }
    else {
      FUN_0000086c();
    }
  }
  if (((param_1._0_2_ != 0) || (param_1._2_2_ != 0)) && (_DAT_00015a8e == 1)) {
    if ((_DAT_00028416 != (int *)0x0) &&
       ((**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x70),
       extraout_A0_06 != (int *)0x0)) {
      (**(code **)(*extraout_A0_06 + 0x1d8))();
    }
    FUN_000024d2();
    if (param_1._0_2_ == 0) {
      FUN_00002620();
    }
  }
  if (((param_1._0_2_ != 0) || (param_1._2_2_ != 0)) && (_DAT_00015a8e != 1)) {
    if ((_DAT_00028416 != (int *)0x0) &&
       ((**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x70),
       extraout_A0_07 != (int *)0x0)) {
      (**(code **)(*extraout_A0_07 + 0x1d8))();
    }
    _DAT_0002840e =
         (short)(((int)_DAT_000283fa * (int)_DAT_00015a8a) / (_DAT_000283fc + -1)) + _DAT_00015a86;
    _DAT_0002840a = _DAT_0002840e;
    _DAT_0002840c = _DAT_00015a88 + -2;
    _DAT_00028410 = _DAT_00015a88 + _DAT_00015a8c + 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1._0_2_ != 0) {
    func_0x00006e70(0,0);
  }
  if ((param_1._2_2_ != 0) || (param_1._0_2_ != 0)) {
    FUN_00001fde();
    FUN_00002950(0,extraout_A0b_02);
    func_0x00006e78(0);
  }
  (**(code **)(*_DAT_00028416 + 0x194))();
  return;
}



// Function: FUN_0000086c at 0000086c
// Size: 544 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000086c(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  short *psVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  undefined1 auStack_44 [64];
  
  if ((_DAT_00028416 != (int *)0x0) &&
     ((**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x6170), extraout_A0 != (int *)0x0)
     ) {
    (**(code **)(*extraout_A0 + 0x1d8))();
    uVar6 = 0xb8;
    (**(code **)(*extraout_A0 + 0x304))(extraout_A0,(short)auStack_44);
    _DAT_00015a86 = 0x23;
    _DAT_00015a88 = 5;
    puVar5 = auStack_44;
    sVar1 = func_0x00003978((short)puVar5);
    _DAT_00015a8a = (sVar1 - _DAT_00015a86) + -10;
    sVar1 = func_0x00003978((short)auStack_44,(short)((uint)puVar5 >> 0x10),uVar6);
    _DAT_00015a8c = (sVar1 - _DAT_00015a88) + -0x1e;
  }
  if (_DAT_00015a8e == 0) {
    _DAT_00028412 = 0x3f20;
    sVar1 = 10;
    for (sVar2 = 1; (int)sVar2 <= _DAT_000283fc + -1; sVar2 = sVar2 + 1) {
      FUN_00001fa4();
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        local_48 = *(short *)(sVar3 * 2 + extraout_A0_00);
        local_46 = sVar1;
        if (local_48 < sVar1) {
          psVar4 = &local_46;
        }
        else {
          psVar4 = &local_48;
        }
        sVar1 = *psVar4;
      }
    }
  }
  else if (_DAT_00015a8e == 2) {
    _DAT_00028412 = 0x3f30;
    sVar1 = 500;
    for (sVar2 = 1; (int)sVar2 <= _DAT_000283fc + -1; sVar2 = sVar2 + 1) {
      FUN_00002052();
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        local_4c = *(short *)(sVar3 * 2 + extraout_A0_01);
        local_4a = sVar1;
        if (local_4c < sVar1) {
          psVar4 = &local_4a;
        }
        else {
          psVar4 = &local_4c;
        }
        sVar1 = *psVar4;
      }
    }
  }
  else if (_DAT_00015a8e == 3) {
    _DAT_00028412 = 0x3f28;
    sVar1 = 100;
    for (sVar2 = 1; (int)sVar2 <= _DAT_000283fc + -1; sVar2 = sVar2 + 1) {
      FUN_00002018();
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        local_50 = *(short *)(sVar3 * 2 + extraout_A0_02);
        local_4e = sVar1;
        if (local_50 < sVar1) {
          psVar4 = &local_4e;
        }
        else {
          psVar4 = &local_50;
        }
        sVar1 = *psVar4;
      }
    }
  }
  func_0x00002a98();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000147e at 0000147e
// Size: 406 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000147e(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  
  (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x63697479);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3a8))();
  }
  (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x6576656e);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x3a8))();
  }
  (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x676f6c64);
  if (extraout_A0_01 != (int *)0x0) {
    (**(code **)(*extraout_A0_01 + 0x3a8))();
  }
  (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x77696e6e);
  if (extraout_A0_02 != (int *)0x0) {
    (**(code **)(*extraout_A0_02 + 0x3a8))();
  }
  (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x6c656674);
  if (extraout_A0_03 != (int *)0x0) {
    (**(code **)(*extraout_A0_03 + 0x3a0))();
  }
  (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x72696768);
  uVar1 = 0;
  if (extraout_A0_04 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0_04 + 0x3a0))();
  }
  return uVar1;
}



// Function: FUN_00001614 at 00001614
// Size: 106 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001614(undefined4 param_1)

{
  int *extraout_A0;
  
  (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x6170);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  _DAT_00015a8e = param_1._0_2_;
  FUN_0000000c((short)*(undefined4 *)(_DAT_000297f4 + 0x80));
  FUN_000003b2(1);
  FUN_0000147e();
  return;
}



// Function: FUN_00001a40 at 00001a40
// Size: 14 bytes

void FUN_00001a40(void)

{
  FUN_00001f68();
  return;
}



// Function: FUN_00001a4e at 00001a4e
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a4e(void)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  _DAT_0002841a = _DAT_00028846;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    FUN_00001b12();
    FUN_00001e3c();
    if (_DAT_00028416 != (int *)0x0) {
      (**(code **)(*_DAT_00028416 + 0x40c))();
      (**(code **)(*_DAT_00028416 + 0x3a0))();
      _DAT_00028416 = (int *)0x0;
    }
    _DAT_00025f52 = local_10;
  }
  else {
    if (_DAT_00028416 != (int *)0x0) {
      (**(code **)(*_DAT_00028416 + 0x3a0))();
    }
    _DAT_00028416 = (int *)0x0;
    FUN_00001c10((short)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_00001b12 at 00001b12
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b12(undefined4 param_1)

{
  short sVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int *extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined2 extraout_A0w_01;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined1 auStack_266 [256];
  undefined1 auStack_166 [256];
  undefined4 uStack_66;
  undefined4 uStack_62;
  undefined2 uStack_5e;
  undefined1 auStack_5c [80];
  undefined2 uStack_c;
  short sStack_a;
  undefined2 uStack_8;
  short sStack_6;
  
  if ((param_1._0_2_ != 0) && (_DAT_00028416 == (int *)0x0)) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((char)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00028416 = extraout_A0;
    FUN_00001bf0((char)extraout_A0);
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,0x6d65);
    if (extraout_A0_00 != (int *)0x0) {
      func_0x00002ad8(0);
      func_0x00007320((char)auStack_166,extraout_A0w);
      (**(code **)(*extraout_A0_00 + 1000))((char)extraout_A0_00,extraout_A0w_00);
    }
  }
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,(char)sVar1 + '0');
    if (extraout_A0_01 != 0) {
      uStack_c = 0x1b;
      sStack_a = sVar1 * 0x1f;
      uStack_8 = 0x3f;
      sStack_6 = sVar1 * 0x1f + 0x1f;
      func_0x00003b78((char)extraout_A0_01,(short)((uint)&uStack_c >> 0x10),0x24);
    }
  }
  sVar1 = 0;
  while ((sVar1 < 0x1d && (*(char *)(_DAT_00028864 + 4 + sVar1 * 6) != '\0'))) {
    sVar1 = sVar1 + 1;
  }
  sVar1 = 0x19;
  while ((-1 < sVar1 && (*(char *)(_DAT_00028864 + 4 + sVar1 * 6) == '\0'))) {
    sVar1 = sVar1 + -1;
  }
  uStack_66 = _DAT_00015a60;
  uStack_62 = _DAT_00015a64;
  uStack_5e = _DAT_00015a68;
  for (sVar1 = 0; sVar1 < 5; sVar1 = sVar1 + 1) {
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,(char)sVar1 + '0');
    if (extraout_A0_02 != 0) {
      uVar2 = 0xb8;
      func_0x00004768((char)extraout_A0_02,_DAT_0002841a);
      func_0x00004778((short)extraout_A0_02,0,uVar2);
    }
  }
  func_0x00002a50(0xe0,0xf9);
  for (sVar1 = 0; sVar1 < 5; sVar1 = sVar1 + 1) {
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,(char)sVar1 + '0');
    if (extraout_A0_03 != (int *)0x0) {
      if (*(short *)(&DAT_000011a2 +
                    sVar1 * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) < 1) {
        (**(code **)(*extraout_A0_03 + 1000))((char)extraout_A0_03,0x5b76);
      }
      else {
        sVar4 = *(short *)(&DAT_000011a2 +
                          sVar1 * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) >>
                0xf;
        func_0x00002ad8(*(short *)(&DAT_000011a2 +
                                  sVar1 * 2 +
                                  _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) != 1,
                        (char)*(short *)(&DAT_000011a2 +
                                        sVar1 * 2 +
                                        _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c));
        uVar3 = (undefined1)((uint)extraout_A0_04 >> 0x10);
        uVar2 = (undefined1)((uint)auStack_5c >> 0x10);
        func_0x000076d0((short)auStack_5c,(short)extraout_A0_04);
        func_0x00007320((short)auStack_266,(short)auStack_5c,uVar2,uVar3,sVar4);
        (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0w_01);
      }
    }
  }
  (**(code **)(*_DAT_00028416 + 0x194))();
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  short in_D0w;
  short unaff_D3w;
  short sVar1;
  undefined1 extraout_A0u;
  int extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  undefined2 extraout_A0w;
  int unaff_A2;
  int unaff_A6;
  undefined1 uVar2;
  undefined1 uVar3;
  
  do {
    *(short *)(unaff_A6 + -6) = in_D0w;
    *(undefined2 *)(unaff_A6 + -4) = 0x3f;
    *(short *)(unaff_A6 + -2) = unaff_D3w * 0x1f + 0x1f;
    func_0x00003b78((char)unaff_A2,(short)((uint)(unaff_A6 + -8) >> 0x10));
    do {
      unaff_D3w = unaff_D3w + 1;
      if (7 < unaff_D3w) {
        sVar1 = 0;
        while ((sVar1 < 0x1d && (*(char *)(_DAT_00028864 + 4 + sVar1 * 6) != '\0'))) {
          sVar1 = sVar1 + 1;
        }
        sVar1 = 0x19;
        while ((-1 < sVar1 && (*(char *)(_DAT_00028864 + 4 + sVar1 * 6) == '\0'))) {
          sVar1 = sVar1 + -1;
        }
        *(undefined4 *)(unaff_A6 + -0x62) = _DAT_00015a60;
        *(undefined4 *)(unaff_A6 + -0x5e) = _DAT_00015a64;
        *(undefined2 *)(unaff_A6 + -0x5a) = _DAT_00015a68;
        for (sVar1 = 0; sVar1 < 5; sVar1 = sVar1 + 1) {
          (**(code **)(*(int *)CONCAT22((short)((uint)_DAT_00028416 >> 0x10),(short)_DAT_00028416) +
                      0x188))();
          if (extraout_A0_00 != 0) {
            uVar2 = 0xb8;
            func_0x00004768((char)extraout_A0_00);
            func_0x00004778((short)extraout_A0_00,0,uVar2);
          }
        }
        func_0x00002a50();
        for (sVar1 = 0; sVar1 < 5; sVar1 = sVar1 + 1) {
          (**(code **)(*(int *)CONCAT22((short)((uint)_DAT_00028416 >> 0x10),(short)_DAT_00028416) +
                      0x188))();
          if (extraout_A0_01 != (int *)0x0) {
            if (*(short *)(&DAT_000011a2 +
                          sVar1 * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) < 1
               ) {
              (**(code **)(*extraout_A0_01 + 1000))();
            }
            else {
              func_0x00002ad8();
              uVar3 = (undefined1)((uint)(unaff_A6 + -0x58) >> 0x10);
              uVar2 = extraout_A0u;
              func_0x000076d0((short)(unaff_A6 + -0x58));
              func_0x00007320((short)unaff_A6 + -0x262,(short)unaff_A6 + -0x58,uVar3,uVar2);
              (**(code **)(*extraout_A0_01 + 1000))((short)extraout_A0_01,extraout_A0w);
            }
          }
        }
        (**(code **)(*_DAT_00028416 + 0x194))();
        return;
      }
      (**(code **)(*(int *)CONCAT22((short)((uint)_DAT_00028416 >> 0x10),(short)_DAT_00028416) +
                  0x188))();
    } while (extraout_A0 == 0);
    *(undefined2 *)(unaff_A6 + -8) = 0x1b;
    in_D0w = unaff_D3w * 0x1f;
    unaff_A2 = extraout_A0;
  } while( true );
}



// Function: FUN_00001c10 at 00001c10
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  short unaff_D3w;
  short sVar1;
  int extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int unaff_A6;
  
  do {
    func_0x00003b78();
    do {
      unaff_D3w = unaff_D3w + 1;
      if (7 < unaff_D3w) {
        sVar1 = 0;
        while ((sVar1 < 0x1d && (*(char *)(_DAT_00028864 + 4 + sVar1 * 6) != '\0'))) {
          sVar1 = sVar1 + 1;
        }
        sVar1 = 0x19;
        while ((-1 < sVar1 && (*(char *)(_DAT_00028864 + 4 + sVar1 * 6) == '\0'))) {
          sVar1 = sVar1 + -1;
        }
        *(undefined4 *)(unaff_A6 + -0x62) = _DAT_00015a60;
        *(undefined4 *)(unaff_A6 + -0x5e) = _DAT_00015a64;
        *(undefined2 *)(unaff_A6 + -0x5a) = _DAT_00015a68;
        for (sVar1 = 0; sVar1 < 5; sVar1 = sVar1 + 1) {
          (**(code **)(*_DAT_00028416 + 0x188))();
          if (extraout_A0_00 != 0) {
            func_0x00004768();
            func_0x00004778((short)extraout_A0_00);
          }
        }
        func_0x00002a50();
        for (sVar1 = 0; sVar1 < 5; sVar1 = sVar1 + 1) {
          (**(code **)(*_DAT_00028416 + 0x188))();
          if (extraout_A0_01 != (int *)0x0) {
            if (*(short *)(&DAT_000011a2 +
                          sVar1 * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) < 1
               ) {
              (**(code **)(*extraout_A0_01 + 1000))();
            }
            else {
              func_0x00002ad8();
              func_0x000076d0();
              func_0x00007320((short)unaff_A6 + -0x262);
              (**(code **)(*extraout_A0_01 + 1000))();
            }
          }
        }
        (**(code **)(*_DAT_00028416 + 0x194))();
        return;
      }
      (**(code **)(*_DAT_00028416 + 0x188))();
    } while (extraout_A0 == 0);
    *(undefined2 *)(unaff_A6 + -8) = 0x1b;
    *(short *)(unaff_A6 + -6) = unaff_D3w * 0x1f;
    *(undefined2 *)(unaff_A6 + -4) = 0x3f;
    *(short *)(unaff_A6 + -2) = unaff_D3w * 0x1f + 0x1f;
  } while( true );
}



// Function: thunk_FUN_00001e1a at 00001d08
// Size: 4 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00001e1a(void)

{
  short unaff_D3w;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  int unaff_A6;
  int iVar1;
  undefined2 uVar2;
  short sVar3;
  
  for (; unaff_D3w < 5; unaff_D3w = unaff_D3w + 1) {
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,(char)unaff_D3w + '0');
    if (extraout_A0 != (int *)0x0) {
      if (*(short *)(&DAT_000011a2 +
                    unaff_D3w * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) < 1)
      {
        (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,0x5b76);
      }
      else {
        sVar3 = *(short *)(&DAT_000011a2 +
                          unaff_D3w * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c)
                >> 0xf;
        func_0x00002ad8(*(short *)(&DAT_000011a2 +
                                  unaff_D3w * 2 +
                                  _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) != 1,
                        (char)*(short *)(&DAT_000011a2 +
                                        unaff_D3w * 2 +
                                        _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c));
        uVar2 = (undefined2)((uint)extraout_A0_00 >> 0x10);
        iVar1 = unaff_A6 + -0x58;
        func_0x000076d0((short)iVar1,(short)extraout_A0_00);
        func_0x00007320(unaff_A6 + -0x262,(short)unaff_A6 + -0x58,(short)((uint)iVar1 >> 0x10),uVar2
                        ,sVar3);
        (**(code **)(*extraout_A0 + 1000))(extraout_A0,extraout_A0w);
      }
    }
  }
  (**(code **)(*_DAT_00028416 + 0x194))();
  return;
}



// Function: FUN_00001d18 at 00001d18
// Size: 258 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d18(void)

{
  short unaff_D3w;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  int unaff_A6;
  int iVar1;
  undefined2 uVar2;
  
  do {
    (**(code **)(*_DAT_00028416 + 0x188))();
    if (extraout_A0 != (int *)0x0) {
      if (*(short *)(&DAT_000011a2 +
                    unaff_D3w * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) < 1)
      {
        (**(code **)(*extraout_A0 + 1000))();
      }
      else {
        func_0x00002ad8(*(short *)(&DAT_000011a2 +
                                  unaff_D3w * 2 +
                                  _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) != 1);
        uVar2 = (undefined2)((uint)extraout_A0_00 >> 0x10);
        iVar1 = unaff_A6 + -0x58;
        func_0x000076d0((short)iVar1,(short)extraout_A0_00);
        func_0x00007320(unaff_A6 + -0x262,(short)unaff_A6 + -0x58,(short)((uint)iVar1 >> 0x10),uVar2
                       );
        (**(code **)(*extraout_A0 + 1000))(extraout_A0,extraout_A0w);
      }
    }
    unaff_D3w = unaff_D3w + 1;
  } while (unaff_D3w < 5);
  (**(code **)(*_DAT_00028416 + 0x194))();
  return;
}



// Function: FUN_00001e1a at 00001e1a
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e1a(void)

{
  short unaff_D3w;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  int unaff_A6;
  int iVar1;
  undefined2 uVar2;
  short sVar3;
  
  for (; unaff_D3w < 5; unaff_D3w = unaff_D3w + 1) {
    (**(code **)(*_DAT_00028416 + 0x188))((short)_DAT_00028416,(char)unaff_D3w + '0');
    if (extraout_A0 != (int *)0x0) {
      if (*(short *)(&DAT_000011a2 +
                    unaff_D3w * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) < 1)
      {
        (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,0x5b76);
      }
      else {
        sVar3 = *(short *)(&DAT_000011a2 +
                          unaff_D3w * 2 + _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c)
                >> 0xf;
        func_0x00002ad8(*(short *)(&DAT_000011a2 +
                                  unaff_D3w * 2 +
                                  _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c) != 1,
                        (char)*(short *)(&DAT_000011a2 +
                                        unaff_D3w * 2 +
                                        _DAT_0002841a * 10 + _DAT_00028846 * 0x50 + _DAT_0002884c));
        uVar2 = (undefined2)((uint)extraout_A0_00 >> 0x10);
        iVar1 = unaff_A6 + -0x58;
        func_0x000076d0((short)iVar1,(short)extraout_A0_00);
        func_0x00007320(unaff_A6 + -0x262,(short)unaff_A6 + -0x58,(short)((uint)iVar1 >> 0x10),uVar2
                        ,sVar3);
        (**(code **)(*extraout_A0 + 1000))(extraout_A0,extraout_A0w);
      }
    }
  }
  (**(code **)(*_DAT_00028416 + 0x194))();
  return;
}



// Function: FUN_00001e3c at 00001e3c
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e3c(void)

{
  short sVar1;
  int *extraout_A0;
  
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,sVar1 + 0x73696430);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3a8))();
    }
  }
  return;
}



// Function: FUN_00001e98 at 00001e98
// Size: 4 bytes

void FUN_00001e98(void)

{
  return;
}



// Function: FUN_00001e9c at 00001e9c
// Size: 4 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e9c(undefined4 param_1)

{
  _DAT_0002841a = param_1._0_2_;
  FUN_00001b12();
  FUN_00001e3c();
  return;
}



// Function: FUN_00001ea0 at 00001ea0
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ea0(void)

{
  int unaff_A6;
  
  _DAT_0002841a = *(undefined2 *)(unaff_A6 + 8);
  FUN_00001b12();
  FUN_00001e3c();
  return;
}



// Function: FUN_00001ebc at 00001ebc
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00001ebc(void)

{
  int iVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  
  FUN_00002810(*(undefined4 *)(*(int *)(_DAT_000297f4 + 0x80) + 0x15a));
  if (extraout_A0 != (int *)0x0) {
    iVar1 = (**(code **)(*extraout_A0 + 0x60))();
    FUN_00001e98(iVar1 + -4);
    _DAT_000283fe = extraout_A0_00;
    func_0x00002d52(extraout_A0_00);
    _DAT_00028402 = extraout_A0_01;
    FUN_00002838(extraout_A0,4);
    FUN_00002820(extraout_A0,_DAT_00028402,iVar1 + -4);
    FUN_00002818((short)extraout_A0);
    FUN_00001ea0(0x900);
    _DAT_00028406 = extraout_A0_02;
  }
  return extraout_A0 != (int *)0x0;
}



// Function: FUN_00001f68 at 00001f68
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f68(void)

{
  undefined4 extraout_A0;
  
  if (_DAT_000283fe != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  thunk_FUN_00001e1a(0);
  FUN_00001d18(_DAT_00028406);
  _DAT_00028406 = extraout_A0;
  return;
}



// Function: FUN_00001fa4 at 00001fa4
// Size: 58 bytes

void FUN_00001fa4(undefined4 param_1)

{
  short sVar1;
  
  for (sVar1 = 1; sVar1 < param_1._0_2_; sVar1 = sVar1 + 1) {
  }
  return;
}



// Function: FUN_00001fde at 00001fde
// Size: 58 bytes

void FUN_00001fde(undefined4 param_1)

{
  short sVar1;
  
  for (sVar1 = 1; sVar1 < param_1._0_2_; sVar1 = sVar1 + 1) {
  }
  return;
}



// Function: FUN_00002018 at 00002018
// Size: 58 bytes

void FUN_00002018(undefined4 param_1)

{
  short sVar1;
  
  for (sVar1 = 1; sVar1 < param_1._0_2_; sVar1 = sVar1 + 1) {
  }
  return;
}



// Function: FUN_00002052 at 00002052
// Size: 56 bytes

void FUN_00002052(undefined4 param_1)

{
  short sVar1;
  
  for (sVar1 = 1; sVar1 < param_1._0_2_; sVar1 = sVar1 + 1) {
  }
  return;
}



// Function: FUN_0000208a at 0000208a
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000208a(undefined4 param_1)

{
  short sVar1;
  
  for (sVar1 = 1; sVar1 < param_1._0_2_; sVar1 = sVar1 + 1) {
  }
  return ((*(short *)(_DAT_0002884c + 0x15c2) + 1) / 2 + 0x19) * 2;
}



// Function: FUN_000020e2 at 000020e2
// Size: 984 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000020e2(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined4 extraout_A0_08;
  undefined4 extraout_A0_09;
  undefined4 extraout_A0_10;
  undefined4 extraout_A0_11;
  undefined4 extraout_A0_12;
  undefined4 extraout_A0_13;
  undefined4 extraout_A0_14;
  undefined4 extraout_A0_15;
  
  switch(param_1._0_1_) {
  case 0:
    func_0x00002ad8(0x5f0000);
    func_0x000076d0(0x278f8,extraout_A0);
    break;
  case 1:
    if (param_1._2_2_ == -1) {
      func_0x00002ad8(0x5f0001);
      func_0x000076d0(0x278f8,extraout_A0_00);
    }
    else if (param_1._2_2_ == -2) {
      func_0x00002ad8(0x5f0002);
      func_0x000076d0(0x278f8,extraout_A0_01);
    }
    else {
      func_0x00002ad8(0x5f0003);
      func_0x000076d0(0x278f8,extraout_A0_02);
    }
    break;
  case 2:
    func_0x00002ad8(0x5f0004);
    func_0x000076d0(0x278f8,extraout_A0_03);
    break;
  case 3:
    func_0x00002ad8(0x5f0005);
    func_0x000076d0(0x278f8,extraout_A0_04);
    break;
  case 4:
    func_0x00002ad8(0x5f0006,_DAT_0002884c + param_1._2_2_ * 0x14);
    func_0x000076d0(0x278f8,extraout_A0_05);
    break;
  case 5:
    if (param_1._2_2_ == -1) {
      func_0x00002ad8(0x5f0007);
      func_0x000076d0(0x278f8,extraout_A0_06);
    }
    else {
      func_0x00002ad8(0x5f0008,_DAT_0002884c + param_1._2_2_ * 0x14,
                      param_2._0_2_ * 0x42 + _DAT_0002884c + 0x15c8);
      func_0x000076d0(0x278f8,extraout_A0_07);
    }
    break;
  case 6:
    if (param_1._2_2_ == 100) {
      func_0x00002ad8(0x5f000d);
      func_0x00002ad8(0x5f0009);
      func_0x000076d0(0x278f8,extraout_A0_08);
    }
    else if (param_1._2_2_ == 0x65) {
      func_0x00002ad8(0x5f000e);
      func_0x00002ad8(0x5f0009);
      func_0x000076d0(0x278f8,extraout_A0_09);
    }
    else if (param_1._2_2_ == 0x66) {
      func_0x00002ad8(0x5f000f);
      func_0x00002ad8(0x5f0009);
      func_0x000076d0(0x278f8,extraout_A0_10);
    }
    else {
      func_0x00002ad8(0x5f0009);
      func_0x000076d0(0x278f8,extraout_A0_11);
    }
    break;
  case 7:
    func_0x00002ad8(0x5f000a,_DAT_0002884c + param_1._2_2_ * 0x14);
    func_0x000076d0(0x278f8,extraout_A0_12);
    break;
  case 8:
    func_0x00002ad8(0x5f0010,_DAT_0002884c + param_1._2_2_ * 0x14,
                    _DAT_0002884c + param_2._0_2_ * 0x14);
    func_0x000076d0(0x278f8,extraout_A0_15);
    break;
  case 9:
    func_0x00002ad8(0x5f000b,_DAT_0002884c + param_1._2_2_ * 0x14,
                    _DAT_0002884c + param_2._0_2_ * 0x14);
    func_0x000076d0(0x278f8,extraout_A0_13);
    break;
  case 10:
    func_0x00002ad8(0x5f000c,_DAT_0002884c + param_1._2_2_ * 0x14,
                    _DAT_0002884c + param_2._0_2_ * 0x14);
    func_0x000076d0(0x278f8,extraout_A0_14);
    break;
  case 0xb:
    func_0x000076d0(0x278f8,0x15a4e);
  }
  return;
}



// Function: FUN_000024d2 at 000024d2
// Size: 334 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000024d2(void)

{
  short sVar1;
  char cVar2;
  short sVar3;
  short *extraout_A0;
  undefined4 extraout_A0_00;
  
  func_0x00002a50(0xe0,0xf9);
  FUN_0000208a();
  sVar1 = *extraout_A0;
  for (sVar3 = 0; sVar3 < sVar1; sVar3 = sVar3 + 1) {
    func_0x00003b18(1,0,sVar3 * 0x11 + 4);
    FUN_000020e2();
    func_0x00002a50(0xe0,0xf9);
    func_0x00002ab8(sVar3 * 0x11 + 3,extraout_A0_00);
    cVar2 = *(char *)((int)extraout_A0 + sVar3 * 0x16 + 3);
    if (((cVar2 == '\t') || (cVar2 == '\n')) || (cVar2 == '\b')) {
      func_0x00002a58((short)extraout_A0_00);
      func_0x00003b18(1,0,sVar3 * 0x11 + 4);
    }
  }
  return;
}



// Function: FUN_00002620 at 00002620
// Size: 334 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002620(void)

{
  short sVar1;
  int *extraout_A0;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_1c [16];
  undefined1 auStack_c [8];
  
  if (_DAT_00028416 != (int *)0x0) {
    (**(code **)(*_DAT_00028416 + 0x188))(_DAT_00028416,0x62617267);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x1d8))();
      uVar3 = 0x6a;
      (**(code **)(*extraout_A0 + 0x304))(extraout_A0,auStack_1c);
      _DAT_00015a7e = 1;
      _DAT_00015a80 = 1;
      puVar2 = auStack_1c;
      _DAT_00015a82 = func_0x00003978((short)puVar2);
      _DAT_00015a82 = _DAT_00015a82 + -2;
      _DAT_00015a84 = func_0x00003978((short)auStack_1c,(short)((uint)puVar2 >> 0x10),uVar3);
      _DAT_00015a84 = _DAT_00015a84 + -2;
    }
  }
  sVar1 = (short)(((int)_DAT_000283fa * (int)_DAT_00015a82) / (_DAT_000283fc + -1));
  if (_DAT_00015a82 < sVar1) {
    sVar1 = _DAT_00015a82;
  }
  func_0x00002a48(auStack_c,CONCAT22(_DAT_00015a7e,_DAT_00015a80),CONCAT22(sVar1,_DAT_00015a84));
  func_0x00002a98();
  FUN_000001c4((short)auStack_c);
  if ((int)sVar1 < _DAT_00015a82 + -8) {
    func_0x00002a48(auStack_c,CONCAT22(sVar1 + _DAT_00015a7e,_DAT_00015a80),
                    CONCAT22(_DAT_00015a82 - sVar1,_DAT_00015a84));
    func_0x00002a98();
    FUN_000001c4((short)auStack_c);
  }
  return;
}



// Function: FUN_0000276e at 0000276e
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000276e(undefined2 param_1,undefined2 param_2,int param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00002a88(param_1,param_2,param_3);
  return;
}



// Function: FUN_00002810 at 00002810
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002818 at 00002818
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002818(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002820 at 00002820
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002820(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002838 at 00002838
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002950 at 00002950
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002950(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



