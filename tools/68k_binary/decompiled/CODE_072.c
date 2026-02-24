// Warlords II - Decompiled 68k Code
// Segment: CODE_072
// Decompiled by Ghidra 12.0.3

// Function: FUN_000001b8 at 000001b8
// Size: 70 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000001b8(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  sVar1 = 0;
  while ((sVar2 < 4 &&
         ((int)*(char *)((int)sVar2 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da) !=
          (int)param_1._2_2_))) {
    sVar1 = sVar1 + 1;
    sVar2 = sVar2 + 1;
  }
  if (3 < sVar1) {
    sVar1 = 0;
  }
  return sVar1;
}



// Function: FUN_00000268 at 00000268
// Size: 582 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000268(undefined4 param_1)

{
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_01;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined2 extraout_A0w_05;
  undefined4 extraout_A0_05;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  undefined2 extraout_A0w_08;
  undefined4 extraout_A0_06;
  undefined2 extraout_A0w_09;
  undefined2 extraout_A0w_10;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 auStack_804 [256];
  undefined1 auStack_704 [256];
  undefined1 auStack_604 [256];
  undefined1 auStack_504 [256];
  undefined1 auStack_404 [256];
  undefined1 auStack_304 [256];
  undefined1 auStack_204 [256];
  undefined1 auStack_104 [256];
  
  if (param_1._0_2_ == 0) {
    (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x31);
    uVar2 = (undefined2)((uint)extraout_A0 >> 0x10);
    func_0x00001bf0((char)extraout_A0);
    (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x7332);
    func_0x00001bf0((short)extraout_A0_00);
    if (_DAT_0002886c == 1) {
      func_0x00002ad8(2);
      func_0x00007320((short)auStack_104,extraout_A0w);
      uVar1 = (undefined2)((uint)extraout_A0_01 >> 0x10);
      (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,(short)extraout_A0_01);
      func_0x00002ad8(3,uVar2,uVar1);
      func_0x00007320(auStack_204,extraout_A0w_00);
      (**(code **)(*extraout_A0_00 + 1000))(extraout_A0_00,extraout_A0w_01);
    }
    else {
      func_0x00002ad8(0);
      func_0x00007320((short)auStack_304,extraout_A0w_02);
      uVar1 = (undefined2)((uint)extraout_A0_02 >> 0x10);
      (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,(short)extraout_A0_02);
      func_0x00002ad8(1,uVar2,uVar1);
      func_0x00007320(auStack_404,extraout_A0w_03);
      (**(code **)(*extraout_A0_00 + 1000))(extraout_A0_00,extraout_A0w_04);
    }
  }
  else {
    (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x31);
    uVar2 = (undefined2)((uint)extraout_A0_03 >> 0x10);
    func_0x00001bf0((char)extraout_A0_03);
    (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x7332);
    func_0x00001bf0((short)extraout_A0_04);
    if (_DAT_0002886c == 2) {
      func_0x00002ad8(2);
      func_0x00007320((short)auStack_504,extraout_A0w_05);
      uVar1 = (undefined2)((uint)extraout_A0_05 >> 0x10);
      (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,(short)extraout_A0_05);
      func_0x00002ad8(3,uVar2,uVar1);
      func_0x00007320(auStack_604,extraout_A0w_06);
      (**(code **)(*extraout_A0_04 + 1000))(extraout_A0_04,extraout_A0w_07);
    }
    else {
      func_0x00002ad8(0);
      func_0x00007320((short)auStack_704,extraout_A0w_08);
      uVar1 = (undefined2)((uint)extraout_A0_06 >> 0x10);
      (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,(short)extraout_A0_06);
      func_0x00002ad8(1,uVar2,uVar1);
      func_0x00007320(auStack_804,extraout_A0w_09);
      (**(code **)(*extraout_A0_04 + 1000))(extraout_A0_04,extraout_A0w_10);
    }
  }
  return;
}



// Function: FUN_000004ae at 000004ae
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000004ae(void)

{
  int iVar1;
  
  if (_DAT_00015df0 == 2) {
    func_0x00002948(0,0xfffe);
    iVar1 = func_0x00006e78(0);
  }
  else {
    iVar1 = _DAT_00015df0 + -3;
    if (iVar1 == 0) {
      if (_DAT_0002886e == 0) {
        func_0x00002948(0,0xfffe);
      }
      else {
        func_0x00002960(0);
      }
      iVar1 = func_0x00006e78(0);
    }
  }
  return iVar1;
}



// Function: FUN_00000520 at 00000520
// Size: 40 bytes

undefined2 FUN_00000520(void)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_00000548();
  if (sVar1 < 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// Function: FUN_00000548 at 00000548
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000548(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  for (sVar1 = 0; sVar1 < 4; sVar1 = sVar1 + 1) {
    if (-1 < *(char *)((int)sVar1 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da)) {
      sVar2 = sVar2 + 1;
    }
  }
  return sVar2;
}



// Function: FUN_00000578 at 00000578
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000578(void)

{
  int iVar1;
  short sVar2;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar2 = 4;
  do {
    _DAT_00027ee6 = sVar2 + -1;
    if ((sVar2 == 0) || (_DAT_00027ee6 == 0)) break;
    iVar1 = _DAT_00015dee * 0x42 + _DAT_0002884c;
    sVar2 = _DAT_00027ee6;
  } while ((-1 < *(char *)(_DAT_00027ee6 + iVar1 + 0x15da)) ||
          (*(char *)(_DAT_00027ee6 + iVar1 + 0x15d9) < '\0'));
  if (_DAT_00027ede == (int *)0x0) {
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(short)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00027ede = extraout_A0;
    func_0x00001bf0((short)extraout_A0);
  }
  func_0x00004750();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    if (_DAT_00027ede != (int *)0x0) {
      (**(code **)(*_DAT_00027ede + 0x40c))();
      func_0x00004758();
      (**(code **)(*_DAT_00027ede + 0x3a0))();
    }
    _DAT_00027ede = (int *)0x0;
    _DAT_00025f52 = local_10;
  }
  else {
    if (_DAT_00027ede != (int *)0x0) {
      (**(code **)(*_DAT_00027ede + 0x3a0))();
    }
    _DAT_00027ede = (int *)0x0;
    func_0x00001c10((short)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_000006b0 at 000006b0
// Size: 282 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006b0(undefined4 param_1,undefined4 param_2)

{
  short *psVar1;
  undefined1 uVar2;
  
  func_0x000027f8();
  *(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da) =
       (char)*(undefined2 *)(_DAT_00027ee2 + param_2._0_2_ * 0x3e);
  *(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15de) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x18 + param_2._0_2_ * 0x3e);
  *(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15ea) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x1a + param_2._0_2_ * 0x3e);
  *(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e2) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x16 + param_2._0_2_ * 0x3e);
  *(char *)((int)param_1._2_2_ + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e6) =
       (char)*(undefined2 *)(_DAT_00027ee2 + 0x1c + param_2._0_2_ * 0x3e);
  uVar2 = FUN_00000520();
  *(undefined1 *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d8) = uVar2;
  func_0x00007450();
  psVar1 = (short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186);
  *psVar1 = *psVar1 - *(short *)(_DAT_00027ee2 + 0x1e + param_2._0_2_ * 0x3e);
  func_0x00007488();
  func_0x000049a0();
  return;
}



// Function: FUN_00000846 at 00000846
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000846(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  
  func_0x000027f8();
  sVar2 = 0;
  while( true ) {
    if (0x1c < sVar2) goto LAB_00000890;
    if (param_1._0_2_ == *(short *)(_DAT_00027ee2 + sVar2 * 0x3e)) break;
    sVar2 = sVar2 + 1;
  }
  pcVar3 = &DAT_00027eec;
  pcVar4 = (char *)(sVar2 * 0x3e + _DAT_00027ee2 + 2);
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
LAB_00000890:
  func_0x000049a0();
  return;
}



// Function: FUN_000008a2 at 000008a2
// Size: 580 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008a2(undefined4 param_1)

{
  short sVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short local_3e;
  short local_14 [4];
  short local_c [4];
  
  if (-1 < *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da)) {
    for (sVar6 = 0;
        (sVar6 < 4 &&
        (local_14[sVar6] =
              (short)*(char *)((int)sVar6 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da),
        -1 < local_14[sVar6])); sVar6 = sVar6 + 1) {
      func_0x000049a8();
      sVar4 = func_0x000076d8((int)local_3e);
      local_c[sVar6] = sVar4;
    }
    for (sVar4 = 1; sVar5 = sVar4, sVar4 < sVar6; sVar4 = sVar4 + 1) {
      for (; (0 < sVar5 && (local_c[sVar5] < local_c[sVar5 + -1])); sVar5 = sVar5 + -1) {
        sVar1 = local_c[sVar5];
        local_c[sVar5] = local_c[sVar5 + -1];
        local_c[sVar5 + -1] = sVar1;
        puVar3 = (undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15da);
        uVar2 = *puVar3;
        *puVar3 = *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
        *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9) = uVar2;
        puVar3 = (undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e2);
        uVar2 = *puVar3;
        *puVar3 = *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e1);
        *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e1) = uVar2;
        puVar3 = (undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15ea);
        uVar2 = *puVar3;
        *puVar3 = *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e9);
        *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e9) = uVar2;
        puVar3 = (undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e6);
        uVar2 = *puVar3;
        *puVar3 = *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e5);
        *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15e5) = uVar2;
        puVar3 = (undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15de);
        uVar2 = *puVar3;
        *puVar3 = *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15dd);
        *(undefined1 *)((int)sVar5 + param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15dd) = uVar2;
      }
    }
  }
  return;
}



