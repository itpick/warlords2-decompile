// Warlords II - Decompiled 68k Code
// Segment: CODE_060
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000068 at 00000068
// Size: 182 bytes

void FUN_00000068(undefined2 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d4a < param_2)) {
    if (param_2 == 0x63616e63) {
      func_0x00005360();
    }
    else if (param_2 == 0x646f6e65) {
      func_0x00005360();
    }
    else if (param_2 == 0x6c656674) {
      func_0x00005360();
    }
    else if (param_2 == 0x72657365) {
      func_0x00005360();
    }
    else if (param_2 == 0x72696768) {
      func_0x00005360();
    }
    else {
      func_0x00005308(param_1,(short)param_2);
    }
  }
  else {
    FUN_00000bcc();
  }
  return;
}



// Function: FUN_0000011e at 0000011e
// Size: 78 bytes

void FUN_0000011e(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 local_8;
  
  sVar1 = 0x10;
  if ((0x61726d2f < param_2) && (param_2 < 0x61726d4b)) {
    sVar1 = 0x12;
  }
  local_8 = CONCAT22(*(undefined2 *)(sVar1 * 0x1c + 0x140aa),*(undefined2 *)(sVar1 * 0x1c + 0x140a8)
                    );
  *param_3 = local_8;
  return;
}



// Function: FUN_0000016c at 0000016c
// Size: 480 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000016c(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_4._6_1_ != '\0') {
    local_c = *param_4._2_4_;
    local_8 = param_4._2_4_[1];
    (**(code **)(*param_1 + 0x16c))((short)param_1,(short)&local_c);
    (**(code **)(*param_1 + 0xa0))();
    func_0x00001bf0(extraout_A0);
    if ((param_5._0_1_ == '\0') && (cVar1 = (**(code **)(*extraout_A0 + 0x1d8))(), cVar1 != '\0')) {
      local_4c = 0xf;
      local_48 = 0xf;
      func_0x000038b8(&local_c,(short)&local_6c,(short)&local_4c);
      local_54 = 0xf;
      local_50 = 0xf;
      func_0x000038c0(&local_c,&local_74,&local_54);
      local_1c = local_74;
      local_18 = local_70;
      local_14 = local_6c;
      local_10 = local_68;
      (**(code **)(*param_1 + 0x148))(param_1,&local_1c,auStack_3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2._0_1_ == '\x01') {
      for (uVar2 = 0x61726d30; uVar2 < 0x61726d4b; uVar2 = uVar2 + 1) {
        (**(code **)(*extraout_A0 + 0x188))((short)extraout_A0,(short)uVar2);
        if (extraout_A0_00 != (int *)0x0) {
          local_34 = local_c;
          local_30 = local_8;
          (**(code **)(*extraout_A0_00 + 0x170))((short)extraout_A0_00,(short)&local_34);
          cVar1 = (**(code **)(*extraout_A0_00 + 0x2a0))(extraout_A0_00,&local_34);
          if (cVar1 != '\0') {
            FUN_00000c2e();
          }
        }
      }
    }
    else if (param_2._0_1_ == '\x02') {
      FUN_00000da2();
    }
    if ((param_5._0_1_ != '\0') && (cVar1 = (**(code **)(*extraout_A0 + 0x1d8))(), cVar1 != '\0')) {
      local_5c = 0xf;
      local_58 = 0xf;
      func_0x000038b8(&local_c,(short)local_7c,(short)&local_5c);
      local_64 = 0xf;
      local_60 = 0xf;
      func_0x000038c0(&local_c,local_84,&local_64);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_0000039a at 0000039a
// Size: 30 bytes

void FUN_0000039a(void)

{
  FUN_00000ace();
  return;
}



// Function: FUN_000003b8 at 000003b8
// Size: 354 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003b8(void)

{
  int iVar1;
  short sVar2;
  int *extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (_DAT_000284de == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_000284de = extraout_A0;
    func_0x00001bf0((short)extraout_A0);
  }
  _DAT_00015b00 = 0xffff;
  func_0x00001ea0(0x1d);
  _DAT_000284e2 = extraout_A0_00;
  func_0x00001ea0(0x1d);
  _DAT_000284e6 = extraout_A0_01;
  for (sVar2 = 0; sVar2 < 0x1d; sVar2 = sVar2 + 1) {
    *(undefined1 *)(_DAT_000284e2 + sVar2) =
         *(undefined1 *)((int)sVar2 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
  }
  FUN_0000051a();
  FUN_0000070c();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    if (_DAT_000284de != (int *)0x0) {
      iVar1 = (**(code **)(*_DAT_000284de + 0x40c))();
      if (iVar1 == 0x646f6e65) {
        FUN_00000826();
      }
      else {
        FUN_00000870();
      }
      (**(code **)(*_DAT_000284de + 0x3a0))();
    }
    _DAT_000284de = (int *)0x0;
    _DAT_00025f52 = local_10;
  }
  else {
    if (_DAT_000284de != (int *)0x0) {
      (**(code **)(*_DAT_000284de + 0x3a0))();
    }
    _DAT_000284de = (int *)0x0;
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_0000051a at 0000051a
// Size: 498 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000051a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A0w;
  int extraout_A0_01;
  undefined2 extraout_A0w_00;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 auStack_254 [256];
  undefined1 auStack_154 [256];
  undefined1 auStack_54 [80];
  
  if (param_1._0_2_ == 0) {
    for (sVar3 = 0; sVar3 < 2; sVar3 = sVar3 + 1) {
      (**(code **)(*_DAT_000284de + 0x188))((short)_DAT_000284de,(char)sVar3 + '1');
      if (extraout_A0 != (int *)0x0) {
        if (*(short *)((int)extraout_A0 + 0x7e) != 5) {
          *(undefined2 *)((int)extraout_A0 + 0x7e) = 5;
          (**(code **)(*extraout_A0 + 0x248))();
        }
        if (_DAT_00028846 != *(short *)(extraout_A0 + 0x1f)) {
          *(short *)(extraout_A0 + 0x1f) = _DAT_00028846;
          (**(code **)(*extraout_A0 + 0x26c))();
        }
      }
    }
    func_0x00002a50(0xe0,0xf9);
    iVar1 = _DAT_0002884c + _DAT_00028846 * 0x14;
    uVar7 = (undefined1)((uint)iVar1 >> 0x10);
    func_0x00002ad8(1,(short)iVar1);
    uVar6 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    puVar5 = auStack_54;
    func_0x000076d0((short)puVar5,(char)extraout_A0_00);
    func_0x00007320(auStack_154,(short)auStack_54,(short)((uint)puVar5 >> 0x10),uVar6,uVar7);
    func_0x00006e38(_DAT_000284de,0x73756274,extraout_A0w);
  }
  uVar2 = func_0x00002a50(0xe0,0xf9);
  for (sVar3 = 0; sVar3 < 0x1b; sVar3 = sVar3 + 1) {
    sVar4 = 0;
    while ((sVar4 < 0x1d &&
           ((int)*(char *)((int)sVar4 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) != (int)sVar3)
           )) {
      sVar4 = sVar4 + 1;
    }
    (**(code **)(*_DAT_000284de + 0x188))((short)_DAT_000284de,(char)sVar3 + '0');
    uVar2 = 0;
    if (extraout_A0_01 != 0) {
      uVar7 = 0x82;
      func_0x00004768((char)extraout_A0_01,_DAT_00028846);
      uVar2 = func_0x00004778((short)extraout_A0_01,0,uVar7);
    }
    if (param_1._0_2_ == 0) {
      uVar6 = (undefined2)((uint)(sVar3 + 1) >> 0x10);
      uVar8 = 1;
      uVar7 = (undefined1)((uint)auStack_54 >> 0x10);
      func_0x000076d0((short)auStack_54,0x5afa,(char)(sVar3 + 1));
      func_0x00007320((short)auStack_254,(short)auStack_54,uVar7,uVar8,uVar6);
      uVar2 = func_0x00006e38((short)_DAT_000284de,sVar3 + 0x7230,extraout_A0w_00);
    }
  }
  return uVar2;
}



// Function: FUN_0000070c at 0000070c
// Size: 282 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000070c(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  
  (**(code **)(*_DAT_000284de + 0x188))(_DAT_000284de,0x6c656674);
  (**(code **)(*_DAT_000284de + 0x188))(_DAT_000284de,0x72696768);
  uVar1 = 0;
  if ((extraout_A0 != (int *)0x0) && (uVar1 = 0, extraout_A0_00 != (int *)0x0)) {
    if (_DAT_00015b00 < 0) {
      (**(code **)(*extraout_A0 + 0x3a0))();
      uVar1 = (**(code **)(*extraout_A0_00 + 0x3a0))();
    }
    else if (_DAT_00015b00 == 0) {
      (**(code **)(*extraout_A0 + 0x3a0))();
      uVar1 = (**(code **)(*extraout_A0_00 + 0x3a0))();
    }
    else if (_DAT_00015b00 == 0x1a) {
      (**(code **)(*extraout_A0 + 0x3a0))();
      uVar1 = (**(code **)(*extraout_A0_00 + 0x3a0))();
    }
    else {
      (**(code **)(*extraout_A0 + 0x3a0))();
      uVar1 = (**(code **)(*extraout_A0_00 + 0x3a0))();
    }
  }
  return uVar1;
}



// Function: FUN_00000826 at 00000826
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000826(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  func_0x00001d18(_DAT_000284e2);
  _DAT_000284e2 = extraout_A0;
  func_0x00001d18(extraout_A0);
  _DAT_000284e6 = extraout_A0_00;
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))(*(int **)(_DAT_000297f4 + 0x80),0,0);
  return;
}



// Function: FUN_00000870 at 00000870
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000870(void)

{
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  for (sVar1 = 0; sVar1 < 0x1d; sVar1 = sVar1 + 1) {
    *(undefined1 *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) =
         *(undefined1 *)(_DAT_000284e2 + sVar1);
  }
  func_0x00001d18(_DAT_000284e2);
  _DAT_000284e2 = extraout_A0;
  func_0x00001d18(extraout_A0);
  _DAT_000284e6 = extraout_A0_00;
  return;
}



// Function: FUN_000008cc at 000008cc
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008cc(void)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < 0x1d; sVar1 = sVar1 + 1) {
    *(undefined1 *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) =
         *(undefined1 *)(sVar1 + _DAT_0002884c + 0x6f4);
  }
  _DAT_00015b00 = 0xffff;
  FUN_0000051a();
  FUN_0000070c();
  return;
}



// Function: FUN_0000091e at 0000091e
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000091e(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short sVar5;
  
  sVar3 = 0;
  while ((sVar4 = unaff_D4w, sVar3 < 0x1d &&
         (sVar4 = sVar3,
         (int)*(char *)((int)sVar3 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
         (int)_DAT_00015b00))) {
    sVar3 = sVar3 + 1;
  }
  sVar3 = 0;
  while ((sVar5 = unaff_D5w, sVar3 < 0x1d &&
         (sVar5 = sVar3,
         (int)*(char *)((int)sVar3 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
         _DAT_00015b00 + -1))) {
    sVar3 = sVar3 + 1;
  }
  puVar2 = (undefined1 *)((int)sVar4 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
  uVar1 = *puVar2;
  *puVar2 = *(undefined1 *)((int)sVar5 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
  *(undefined1 *)((int)sVar5 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = uVar1;
  _DAT_00015b00 = _DAT_00015b00 + -1;
  FUN_0000051a();
  FUN_0000070c();
  return;
}



// Function: FUN_000009f6 at 000009f6
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009f6(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short sVar5;
  
  sVar3 = 0;
  while ((sVar4 = unaff_D4w, sVar3 < 0x1d &&
         (sVar4 = sVar3,
         (int)*(char *)((int)sVar3 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
         (int)_DAT_00015b00))) {
    sVar3 = sVar3 + 1;
  }
  sVar3 = 0;
  while ((sVar5 = unaff_D5w, sVar3 < 0x1d &&
         (sVar5 = sVar3,
         (int)*(char *)((int)sVar3 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
         _DAT_00015b00 + 1))) {
    sVar3 = sVar3 + 1;
  }
  puVar2 = (undefined1 *)((int)sVar4 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
  uVar1 = *puVar2;
  *puVar2 = *(undefined1 *)((int)sVar5 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
  *(undefined1 *)((int)sVar5 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = uVar1;
  _DAT_00015b00 = _DAT_00015b00 + 1;
  FUN_0000051a();
  FUN_0000070c();
  return;
}



// Function: FUN_00000ace at 00000ace
// Size: 254 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ace(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  short sVar5;
  
  if (param_1._0_2_ == _DAT_00015b00) {
    _DAT_00015b00 = -1;
  }
  else if (_DAT_00015b00 < 0) {
    _DAT_00015b00 = param_1._0_2_;
  }
  else {
    sVar3 = 0;
    while ((sVar4 = unaff_D4w, sVar3 < 0x1d &&
           (sVar4 = sVar3,
           (int)*(char *)((int)sVar3 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
           (int)_DAT_00015b00))) {
      sVar3 = sVar3 + 1;
    }
    sVar3 = 0;
    while ((sVar5 = unaff_D5w, sVar3 < 0x1d &&
           (sVar5 = sVar3,
           (int)*(char *)((int)sVar3 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
           (int)param_1._0_2_))) {
      sVar3 = sVar3 + 1;
    }
    puVar2 = (undefined1 *)((int)sVar4 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
    uVar1 = *puVar2;
    *puVar2 = *(undefined1 *)((int)sVar5 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c);
    *(undefined1 *)((int)sVar5 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = uVar1;
    _DAT_00015b00 = -1;
  }
  FUN_0000051a();
  FUN_0000070c();
  return;
}



// Function: FUN_00000bcc at 00000bcc
// Size: 98 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bcc(undefined4 param_1)

{
  short sVar1;
  undefined2 local_2a;
  
  sVar1 = 0;
  while ((sVar1 < 0x1d &&
         ((int)*(char *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) !=
          (int)param_1._0_2_))) {
    sVar1 = sVar1 + 1;
  }
  func_0x000049a8();
  func_0x00005320(local_2a);
  return;
}



// Function: FUN_00000c2e at 00000c2e
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c2e(undefined4 param_1)

{
  short sVar1;
  undefined1 uVar2;
  char *pcVar3;
  
  uVar2 = (undefined1)((uint)param_1 >> 0x10);
  if (param_1._0_2_ < _DAT_00015afe) {
    for (sVar1 = 0; sVar1 < 0x1d; sVar1 = sVar1 + 1) {
      pcVar3 = (char *)(sVar1 + _DAT_000284e6);
      if (((int)*pcVar3 < (int)param_1._0_2_) || ((int)_DAT_00015afe <= (int)*pcVar3)) {
        if ((int)*pcVar3 == (int)_DAT_00015afe) {
          *(undefined1 *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = uVar2;
        }
        else {
          *(char *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = *pcVar3;
        }
      }
      else {
        *(char *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = *pcVar3 + '\x01';
      }
    }
  }
  else {
    for (sVar1 = 0; sVar1 < 0x1d; sVar1 = sVar1 + 1) {
      pcVar3 = (char *)(sVar1 + _DAT_000284e6);
      if (((int)_DAT_00015afe < (int)*pcVar3) && ((int)*pcVar3 <= (int)param_1._0_2_)) {
        *(char *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = *pcVar3 + -1;
      }
      else if ((int)*pcVar3 == (int)_DAT_00015afe) {
        *(undefined1 *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = uVar2;
      }
      else {
        *(char *)((int)sVar1 + _DAT_00028846 * 0x1d + _DAT_0002884c + 0x60c) = *pcVar3;
      }
    }
  }
  _DAT_00015b00 = param_1._0_2_;
  FUN_0000051a();
  FUN_0000070c();
  if (_DAT_000284de != (int *)0x0) {
    (**(code **)(*_DAT_000284de + 0x268))();
  }
  return;
}



// Function: FUN_00000da2 at 00000da2
// Size: 24 bytes

void FUN_00000da2(void)

{
  FUN_0000051a();
  FUN_0000070c();
  return;
}



