// Warlords II - Decompiled 68k Code
// Segment: CODE_079
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000024a at 0000024a
// Size: 194 bytes

void FUN_0000024a(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x16);
  if (((((iVar1 == 0x61726d30) || (iVar1 == 0x61726d31)) || (iVar1 == 0x61726d32)) ||
      ((iVar1 == 0x61726d33 || (iVar1 == 0x61726d34)))) ||
     ((iVar1 == 0x61726d35 || ((iVar1 == 0x61726d36 || (iVar1 == 0x61726d37)))))) {
    FUN_00001380();
  }
  else if ((((iVar1 == 0x63686530) || (iVar1 == 0x63686531)) || (iVar1 == 0x63686532)) ||
          (((iVar1 == 0x63686533 || (iVar1 == 0x63686534)) ||
           ((iVar1 == 0x63686535 || ((iVar1 == 0x63686536 || (iVar1 == 0x63686537)))))))) {
    FUN_000014b8();
  }
  else if (iVar1 == 0x67726f75) {
    FUN_00001548();
  }
  else if (iVar1 == 0x756e6772) {
    FUN_000015c6();
  }
  else {
    func_0x00004a30(param_1,param_2,(short)param_3,param_4);
  }
  return;
}



// Function: FUN_0000030c at 0000030c
// Size: 210 bytes

void FUN_0000030c(undefined2 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if ((param_2 < 0x63686530) || (0x63686537 < param_2)) {
      if (param_2 == 0x6f6b2020) {
        func_0x00005360();
      }
      else if (param_2 == 0x63616e63) {
        func_0x00005360();
      }
      else if (param_2 == 0x67726f75) {
        func_0x00005360();
      }
      else if (param_2 == 0x756e6772) {
        func_0x00005360();
      }
      else {
        func_0x00005308(param_1,(short)param_2);
      }
    }
    else {
      func_0x00005360();
    }
  }
  else {
    func_0x00005360();
  }
  return;
}



// Function: FUN_000003de at 000003de
// Size: 126 bytes

void FUN_000003de(int param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  short sVar2;
  int *extraout_A0;
  int *piVar3;
  undefined4 local_8;
  
  piVar3 = (int *)0x0;
  if ((0x61726d2f < param_2) && (param_2 < 0x61726d38)) {
    (**(code **)(**(int **)(param_1 + 8) + 0x188))(*(int **)(param_1 + 8),param_2);
    piVar3 = extraout_A0;
  }
  sVar2 = 0x10;
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x74))();
    if (cVar1 != '\0') {
      sVar2 = 0x12;
    }
  }
  local_8 = CONCAT22(*(undefined2 *)(sVar2 * 0x1c + 0x140aa),*(undefined2 *)(sVar2 * 0x1c + 0x140a8)
                    );
  *param_3 = local_8;
  return;
}



// Function: FUN_0000045c at 0000045c
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000045c(void)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*_DAT_000257ee + 0x68))();
  func_0x00001bf0(extraout_A0);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    FUN_0000053c(extraout_A0);
    (**(code **)(*extraout_A0 + 0x194))();
    (**(code **)(*extraout_A0 + 0x40c))();
    (**(code **)(*extraout_A0 + 0x3a0))();
    _DAT_00025f52 = local_10;
  }
  else {
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3a0))();
    }
    FUN_00001c10();
  }
  return;
}



// Function: FUN_0000053c at 0000053c
// Size: 614 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000053c(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *extraout_A0;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  int *extraout_A0_00;
  undefined2 extraout_A0w_02;
  int iVar5;
  int iVar6;
  short asStackY_10030 [32489];
  undefined1 auStack_234 [256];
  undefined1 auStack_134 [256];
  short local_34;
  char local_32;
  char local_31;
  short local_30 [22];
  
  sVar3 = 0;
  sVar4 = 0;
  for (sVar2 = 8; sVar2 < 0x16; sVar2 = sVar2 + 1) {
    local_30[sVar4] = sVar2;
    sVar4 = sVar4 + 1;
  }
  sVar2 = 1;
  do {
    sVar1 = sVar2;
    if (sVar4 <= sVar2) {
      for (sVar2 = 0; sVar2 < sVar4; sVar2 = sVar2 + 1) {
        (**(code **)(*param_1 + 0x188))((short)param_1,(char)sVar2 + '0');
        if (extraout_A0 != (int *)0x0) {
          func_0x00007320((short)auStack_134,local_30[sVar2] * 0x1e + (short)_DAT_0002884c + 0xd12);
          (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,extraout_A0w);
        }
        if (*(char *)(local_30[sVar2] * 0x1e + _DAT_0002884c + 0xd26) == '\x01') {
          sVar3 = 1;
        }
        else if (*(char *)(local_30[sVar2] * 0x1e + _DAT_0002884c + 0xd26) == '\x02') {
          sVar3 = 2;
        }
        else if (*(char *)(local_30[sVar2] * 0x1e + _DAT_0002884c + 0xd26) == '\x05') {
          sVar3 = 3;
        }
        else if (*(char *)(local_30[sVar2] * 0x1e + _DAT_0002884c + 0xd26) == '\x06') {
          sVar3 = 4;
        }
        else if (*(char *)(local_30[sVar2] * 0x1e + _DAT_0002884c + 0xd26) == '\a') {
          sVar3 = 5;
        }
        if (sVar3 == 3) {
          func_0x00002ad8(3,0x16);
          func_0x000076d0(0x78a8,extraout_A0w_00);
        }
        else {
          func_0x00002ad8(sVar3,*(undefined1 *)(local_30[sVar2] * 0x1e + _DAT_0002884c + 0xd27));
          func_0x000076d0(0x78a8,extraout_A0w_01);
        }
        (**(code **)(*param_1 + 0x188))((short)param_1,(char)sVar2 + '0');
        if (extraout_A0_00 != (int *)0x0) {
          func_0x00007320((short)auStack_234,0x78a8);
          (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0w_02);
        }
      }
      return;
    }
    for (; 0 < sVar1; sVar1 = sVar1 + -1) {
      iVar5 = local_30[sVar1 + -1] * 0x1e + _DAT_0002884c;
      iVar6 = local_30[sVar1] * 0x1e + _DAT_0002884c;
      local_31 = *(char *)(iVar5 + 0xd26);
      local_32 = *(char *)(iVar6 + 0xd26);
      if ((local_31 <= local_32) &&
         ((local_32 != local_31 || (*(char *)(iVar5 + 0xd27) <= *(char *)(iVar6 + 0xd27))))) break;
      local_34 = local_30[sVar1];
      local_30[sVar1] = local_30[sVar1 + -1];
      local_30[sVar1 + -1] = local_34;
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_000007a2 at 000007a2
// Size: 30 bytes

void FUN_000007a2(void)

{
  undefined4 extraout_A0;
  
  func_0x00002ae0(0x450000);
  func_0x00003c60(extraout_A0);
  return;
}



// Function: FUN_000007c0 at 000007c0
// Size: 126 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007c0(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x118))();
  sVar1 = *(short *)(&DAT_00027c90 + param_1._0_2_ * 2);
  for (sVar2 = 0; sVar2 < _DAT_00027cc2; sVar2 = sVar2 + 1) {
    *(ushort *)(&DAT_00027ca0 + sVar2 * 2) =
         (ushort)(sVar1 == *(short *)(&DAT_00027c90 + sVar2 * 2));
  }
  uVar3 = 0;
  func_0x00002b18();
  func_0x00006008(uVar3);
  func_0x000048d0();
  func_0x00004970();
  return;
}



// Function: FUN_0000083e at 0000083e
// Size: 270 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000083e(undefined4 param_1)

{
  short sVar1;
  undefined2 unaff_D5w;
  undefined2 uVar2;
  short local_14 [8];
  
  if (*(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) == 0) {
    for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
      if (*(short *)(&DAT_00027ca0 + sVar1 * 2) != 0) {
        unaff_D5w = *(undefined2 *)(&DAT_00027c90 + sVar1 * 2);
        break;
      }
    }
    *(undefined2 *)(&DAT_00027c90 + param_1._0_2_ * 2) = unaff_D5w;
    *(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) =
         (short)(*(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) == 0);
  }
  else {
    for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
      local_14[sVar1] = 0;
    }
    for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
      local_14[*(short *)(&DAT_00027c90 + sVar1 * 2)] =
           local_14[*(short *)(&DAT_00027c90 + sVar1 * 2)] + 1;
    }
    if (local_14[*(short *)(&DAT_00027c90 + param_1._0_2_ * 2)] != 1) {
      for (sVar1 = 0; (sVar1 < 8 && (local_14[sVar1] != 0)); sVar1 = sVar1 + 1) {
      }
      *(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) =
           (short)(*(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) == 0);
      *(short *)(&DAT_00027c90 + param_1._0_2_ * 2) = sVar1;
    }
  }
  uVar2 = 1;
  func_0x00002b18();
  func_0x00006008(uVar2);
  func_0x000048d0();
  func_0x00004970();
  return;
}



// Function: FUN_0000094c at 0000094c
// Size: 422 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000094c(void)

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
  
  if (_DAT_000288ac != 0) {
    _DAT_00027d16 = _DAT_00027cc2;
    for (sVar2 = 0; sVar2 < _DAT_00027d16; sVar2 = sVar2 + 1) {
      *(undefined4 *)(&DAT_00027cc4 + sVar2 * 4) = *(undefined4 *)(&DAT_00027c70 + sVar2 * 4);
      *(undefined2 *)(&DAT_00027ce4 + sVar2 * 2) = *(undefined2 *)(&DAT_00027c90 + sVar2 * 2);
      *(undefined2 *)(&DAT_00027cf4 + sVar2 * 2) = *(undefined2 *)(&DAT_00027ca0 + sVar2 * 2);
      *(undefined2 *)(&DAT_00027d04 + sVar2 * 2) = *(undefined2 *)(&DAT_00027cb0 + sVar2 * 2);
    }
    _DAT_00027d14 = _DAT_00027cc0;
    (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x118))();
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8((short)auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*_DAT_000257ee + 0x68))();
      _DAT_00027bd0 = extraout_A0;
      func_0x00001bf0(extraout_A0);
      FUN_00000af2(0);
      FUN_0000124e();
      (**(code **)(*_DAT_00027bd0 + 0x194))();
      iVar1 = (**(code **)(*_DAT_00027bd0 + 0x40c))();
      if (iVar1 == 0x6f6b2020) {
        FUN_000012da();
      }
      else {
        FUN_0000130e();
      }
      (**(code **)(*_DAT_00027bd0 + 0x3a0))();
      _DAT_00027bd0 = (int *)0x0;
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_00027bd0 != (int *)0x0) {
        (**(code **)(*_DAT_00027bd0 + 0x3a0))();
      }
      _DAT_00027bd0 = (int *)0x0;
      FUN_00001c10();
    }
  }
  return;
}



// Function: FUN_00000af2 at 00000af2
// Size: 1884 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000af2(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  undefined1 extraout_A0b_00;
  undefined1 extraout_A0b_01;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  undefined1 auStack_12e [256];
  short local_2e;
  short local_2c;
  short local_2a;
  undefined2 local_28 [8];
  ushort local_18;
  short local_16;
  short local_14;
  undefined1 auStack_12 [10];
  short local_8;
  short local_6;
  
  (**(code **)(*_DAT_00027bd0 + 0x188))((short)_DAT_00027bd0,99);
  uVar2 = 0;
  if ((extraout_A0 != (int *)0x0) &&
     (uVar2 = (**(code **)(*extraout_A0 + 0x1d8))(), (char)uVar2 != '\0')) {
    if (param_1._0_2_ != 0) {
      func_0x000076d0(0xa8,0x52cc,(char)*(undefined2 *)(_DAT_0002884c + 0x112));
      (**(code **)(*_DAT_00027bd0 + 0x188))((short)_DAT_00027bd0,0x7862);
      if (extraout_A0_00 != (int *)0x0) {
        func_0x00007320((char)auStack_12e,0xa8);
        (**(code **)(*extraout_A0_00 + 1000))((char)extraout_A0_00,extraout_A0b);
      }
    }
    FUN_00001b02((char)local_28);
    sVar1 = param_2._0_2_;
    if (param_1._2_2_ == 0) {
      param_2._0_2_ = 7;
      sVar1 = 0;
    }
    uVar2 = func_0x00002a50(0xe0,0xf9);
    for (sVar4 = 0; sVar4 < _DAT_00027cc2; sVar4 = sVar4 + 1) {
      uVar13 = (undefined1)((uint)(sVar4 + 0x63686530) >> 0x10);
      (**(code **)(*_DAT_00027bd0 + 0x188))((short)_DAT_00027bd0,(char)(sVar4 + 0x63686530));
      if ((extraout_A0_01 != (int *)0x0) && (*(short *)(&DAT_00027cb0 + sVar4 * 2) != -1)) {
        uVar13 = 1;
        func_0x00003b70((short)extraout_A0_01,
                        (char)((uint)(*(short *)(&DAT_00027cb0 + sVar4 * 2) * 8 + 0x27c40) >> 0x10),
                        0x24);
      }
      uVar2 = 0;
      if (extraout_A0_01 != (int *)0x0) {
        uVar11 = (undefined1)((uint)extraout_A0_01 >> 0x10);
        (**(code **)(*extraout_A0_01 + 0x334))();
        uVar2 = (**(code **)(*extraout_A0_01 + 0x70))((char)extraout_A0_01,uVar11,uVar13);
      }
    }
    for (; sVar4 < 8; sVar4 = sVar4 + 1) {
      (**(code **)(*_DAT_00027bd0 + 0x188))((short)_DAT_00027bd0,(char)sVar4 + '0');
      uVar2 = 0;
      if (extraout_A0_02 != (int *)0x0) {
        uVar2 = (**(code **)(*extraout_A0_02 + 0x70))();
      }
    }
    for (; sVar1 <= param_2._0_2_; sVar1 = sVar1 + 1) {
      (**(code **)(*_DAT_00027bd0 + 0x188))((short)_DAT_00027bd0,(char)sVar1 + '0');
      uVar2 = 0;
      if (extraout_A0_03 != (int *)0x0) {
        uVar13 = (undefined1)((uint)extraout_A0_03 >> 0x10);
        uVar7 = SUB42(extraout_A0_03,0);
        uVar6 = (undefined2)((uint)extraout_A0_03 >> 0x10);
        if (sVar1 < _DAT_00027cc2) {
          sVar4 = (short)(((int)*(short *)(&DAT_00027c90 + sVar1 * 2) +
                          (int)*(short *)(_DAT_0002884c + 0x110)) % 8) + 2;
          local_18 = (ushort)(*(short *)(&DAT_00027ca0 + sVar1 * 2) == 0);
          sVar3 = (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4);
          uVar11 = 0x78;
          func_0x00004768((char)extraout_A0_03,(char)*(undefined2 *)(_DAT_0002884c + 0x110));
          uVar9 = local_18;
          func_0x00004778(uVar7,0,uVar11);
          (**(code **)(*extraout_A0_03 + 0x70))(uVar7,uVar6,sVar4,uVar9,uVar13,sVar3);
          if ((*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) != '\x1c') &&
             (*(char *)(_DAT_00028864 + 4 +
                       (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) * 6) == '\0')) {
            for (sVar4 = 0; (int)sVar4 < (int)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 10);
                sVar4 = sVar4 + 1) {
              local_2e = (sVar4 % 2) * 9 + *(short *)(&DAT_000152d8 + sVar1 * 4) + 8;
              local_2c = (sVar4 / 2) * 8 + *(short *)(&DAT_000152d6 + sVar1 * 4) + 0x20;
              local_16 = local_2e;
              local_14 = local_2c;
              func_0x00002378(0x4140,(char)sVar4 * '\b' + -0x2c,(short)&local_16,0x24);
            }
          }
          if (*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) == '\x1c') {
            func_0x00002ab8(*(short *)(&DAT_000152d8 + sVar1 * 4) + 5,
                            *(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 10) * '\x14' +
                            (char)_DAT_0002884c + '$');
          }
          else {
            func_0x000032f8();
            func_0x00002ab8(*(short *)(&DAT_000152d8 + sVar1 * 4) + 5,extraout_A0b_00);
          }
          sVar4 = (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 8);
          if (*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) == '\x1c') {
            sVar3 = func_0x00002d58((char)*(undefined4 *)(&DAT_00027c70 + sVar1 * 4));
            sVar4 = sVar3 + sVar4;
          }
          if (9 < sVar4) {
            sVar4 = 9;
          }
          func_0x000076d0((char)auStack_12,0x53c9,(char)sVar4);
          func_0x00002ab8(*(short *)(&DAT_000152d8 + sVar1 * 4) + 5,(short)auStack_12);
          if (*(short *)(&DAT_00027ca0 + sVar1 * 2) != 0) {
            func_0x000076d0((char)auStack_12,0x52c6,(char)local_28[sVar1]);
            func_0x00002ab8(*(short *)(&DAT_000152d8 + sVar1 * 4) + 5,(short)auStack_12);
          }
          func_0x000076d0((char)auStack_12,0x53c9,
                          *(undefined1 *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 7));
          func_0x00002ab8(*(short *)(&DAT_000152d8 + sVar1 * 4) + 5,(short)auStack_12);
          local_2a = *(short *)(&DAT_000152d8 + sVar1 * 4) + 8;
          local_6 = *(short *)(&DAT_000152d6 + sVar1 * 4) + 0x100;
          local_8 = local_2a;
          if ((*(char *)(_DAT_00028864 +
                        (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) * 6) == '\0') &&
             ((*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) != '\x1c' ||
              (sVar4 = func_0x00006e58((char)*(undefined4 *)(&DAT_00027c70 + sVar1 * 4)), sVar4 == 0
              )))) {
            if ((*(ushort *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 0xc) & 0x1000) == 0) {
              iVar5 = (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) * 6 + _DAT_00028864;
              if ((*(char *)(iVar5 + 1) == '\0') || (*(char *)(iVar5 + 2) == '\0')) {
                if (*(char *)(_DAT_00028864 + 1 +
                             (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) * 6) == '\0')
                {
                  if (*(char *)(_DAT_00028864 + 2 +
                               (short)*(char *)(*(int *)(&DAT_00027c70 + sVar1 * 4) + 4) * 6) !=
                      '\0') {
                    func_0x00002378(0x44a4,0x1c,(short)&local_8,0x24);
                  }
                }
                else {
                  func_0x00002378(0x44a4,0x24,(short)&local_8,0x24);
                }
              }
              else {
                func_0x00002378(0x44a4,0x2c,(short)&local_8,0x24);
              }
            }
            else {
              func_0x00002378(0x44a4,0x34,(short)&local_8,0x24);
            }
          }
          else {
            func_0x00002378(0x44a4,0x14,(short)&local_8,0x24);
          }
          FUN_000016f4((char)((uint)*(undefined4 *)(&DAT_00027c70 + sVar1 * 4) >> 0x10));
          uVar2 = func_0x00002ab8(*(short *)(&DAT_000152d8 + sVar1 * 4) + 5,extraout_A0b_01);
        }
        else {
          uVar12 = 0xffff;
          uVar11 = 0x18;
          func_0x00004768((char)extraout_A0_03,(char)*(undefined2 *)(_DAT_0002884c + 0x110));
          uVar10 = 0;
          uVar8 = 1;
          func_0x00004778(uVar7,0,uVar11);
          uVar2 = (**(code **)(*extraout_A0_03 + 0x70))(uVar7,uVar6,uVar8,uVar10,uVar13,uVar12);
        }
      }
    }
  }
  return uVar2;
}



// Function: FUN_0000124e at 0000124e
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000124e(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  
  (**(code **)(*_DAT_00027bd0 + 0x188))(_DAT_00027bd0,0x67726f75);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3a0))();
  }
  (**(code **)(*_DAT_00027bd0 + 0x188))(_DAT_00027bd0,0x756e6772);
  uVar1 = 0;
  if (extraout_A0_00 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0_00 + 0x3a0))();
  }
  return uVar1;
}



// Function: FUN_000012da at 000012da
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012da(void)

{
  func_0x00006008();
  func_0x000048d0();
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))(*(int **)(_DAT_000297f4 + 0x80),0,0);
  return;
}



// Function: FUN_0000130e at 0000130e
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000130e(void)

{
  short sVar1;
  
  _DAT_00027cc2 = _DAT_00027d16;
  for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
    *(undefined4 *)(&DAT_00027c70 + sVar1 * 4) = *(undefined4 *)(&DAT_00027cc4 + sVar1 * 4);
    *(undefined2 *)(&DAT_00027c90 + sVar1 * 2) = *(undefined2 *)(&DAT_00027ce4 + sVar1 * 2);
    *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = *(undefined2 *)(&DAT_00027cf4 + sVar1 * 2);
    *(undefined2 *)(&DAT_00027cb0 + sVar1 * 2) = *(undefined2 *)(&DAT_00027d04 + sVar1 * 2);
  }
  _DAT_00027cc0 = _DAT_00027d14;
  return;
}



// Function: FUN_00001380 at 00001380
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001380(undefined4 param_1)

{
  short sVar1;
  undefined2 unaff_D5w;
  int *extraout_A0;
  undefined2 uVar2;
  short local_14 [8];
  
  if (*(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) == 0) {
    for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
      if (*(short *)(&DAT_00027ca0 + sVar1 * 2) != 0) {
        unaff_D5w = *(undefined2 *)(&DAT_00027c90 + sVar1 * 2);
        break;
      }
    }
    *(undefined2 *)(&DAT_00027c90 + param_1._0_2_ * 2) = unaff_D5w;
    *(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) =
         (short)(*(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) == 0);
  }
  else {
    for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
      local_14[sVar1] = 0;
    }
    for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
      local_14[*(short *)(&DAT_00027c90 + sVar1 * 2)] =
           local_14[*(short *)(&DAT_00027c90 + sVar1 * 2)] + 1;
    }
    if (local_14[*(short *)(&DAT_00027c90 + param_1._0_2_ * 2)] != 1) {
      for (sVar1 = 0; (sVar1 < 8 && (local_14[sVar1] != 0)); sVar1 = sVar1 + 1) {
      }
      *(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) =
           (short)(*(short *)(&DAT_00027ca0 + param_1._0_2_ * 2) == 0);
      *(short *)(&DAT_00027c90 + param_1._0_2_ * 2) = sVar1;
    }
  }
  uVar2 = 1;
  func_0x00002b18();
  FUN_00000af2(0,uVar2);
  (**(code **)(*_DAT_00027bd0 + 0x188))(_DAT_00027bd0,0x73746163);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  FUN_0000124e();
  return;
}



// Function: FUN_000014b8 at 000014b8
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000014b8(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int *extraout_A0;
  undefined2 uVar3;
  
  sVar1 = *(short *)(&DAT_00027c90 + param_1._0_2_ * 2);
  for (sVar2 = 0; sVar2 < _DAT_00027cc2; sVar2 = sVar2 + 1) {
    *(ushort *)(&DAT_00027ca0 + sVar2 * 2) =
         (ushort)(sVar1 == *(short *)(&DAT_00027c90 + sVar2 * 2));
  }
  uVar3 = 0;
  func_0x00002b18();
  FUN_00000af2(0,uVar3);
  (**(code **)(*_DAT_00027bd0 + 0x188))(_DAT_00027bd0,0x73746163);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  FUN_0000124e();
  return;
}



// Function: FUN_00001548 at 00001548
// Size: 126 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001548(void)

{
  short sVar1;
  int *extraout_A0;
  undefined2 uVar2;
  
  for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
    *(undefined2 *)(&DAT_00027c90 + sVar1 * 2) = 0;
    *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = 1;
  }
  uVar2 = 1;
  func_0x00002b18();
  FUN_00000af2(0,uVar2);
  (**(code **)(*_DAT_00027bd0 + 0x188))(_DAT_00027bd0,0x73746163);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  FUN_0000124e();
  return;
}



// Function: FUN_000015c6 at 000015c6
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015c6(void)

{
  short sVar1;
  int *extraout_A0;
  undefined2 uVar2;
  
  for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
    *(short *)(&DAT_00027c90 + sVar1 * 2) = sVar1;
    *(undefined2 *)(&DAT_00027ca0 + sVar1 * 2) = 0;
  }
  _DAT_00027ca0 = 1;
  uVar2 = 1;
  func_0x00002b18();
  FUN_00000af2(0,uVar2);
  (**(code **)(*_DAT_00027bd0 + 0x188))(_DAT_00027bd0,0x73746163);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x26c))();
  }
  FUN_0000124e();
  return;
}



// Function: FUN_0000164a at 0000164a
// Size: 170 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000164a(undefined4 param_1)

{
  if (param_1._0_2_ < _DAT_00027cc2) {
    func_0x00005328(CONCAT22((short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 4),
                             (short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 6)),
                    CONCAT22((short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 8),
                             (short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 0xb)),
                    CONCAT22((short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 7),
                             (short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 10)));
  }
  else {
    func_0x00005358();
    func_0x00005348(0x153b8,0x1539c);
  }
  return;
}



// Function: FUN_00001b02 at 00001b02
// Size: 269 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00001b02(int param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  short *psVar13;
  short sStack_56;
  short sStack_54;
  short asStack_52 [4];
  short local_4a;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  short sStack_e;
  
  sVar11 = 0;
  uVar12 = 0;
  local_44 = 0;
  local_46 = 0;
  local_48 = 0;
  local_4a = 0;
  uVar6 = func_0x00002d48(*_DAT_000288ac);
  uVar8 = uVar6;
  for (sVar10 = 0; sVar10 < _DAT_00027cc2; sVar10 = sVar10 + 1) {
    uVar5 = uVar12;
    if (*(short *)(&DAT_00027ca0 + sVar10 * 2) != 0) {
      iVar1 = *(int *)(&DAT_00027c70 + sVar10 * 4);
      uVar8 = *(ushort *)(iVar1 + 0xc) & 0x1000;
      if ((*(ushort *)(iVar1 + 0xc) & 0x1000) == 0) {
        if (*(char *)(iVar1 + 4) == '\x1c') {
          asStack_52[3] = func_0x00002d58(iVar1);
          asStack_52[2] = 9;
          asStack_52[3] = asStack_52[3] + *(char *)(iVar1 + 8);
          if (asStack_52[3] < 9) {
            psVar13 = asStack_52 + 3;
          }
          else {
            psVar13 = asStack_52 + 2;
          }
          sVar9 = *(short *)(*psVar13 * 2 + 0x15b54);
          uVar8 = func_0x00002d60(iVar1);
          sVar11 = uVar8 + sVar9 + sVar11;
        }
        else {
          uVar7 = func_0x000049a8();
          uVar4 = local_44;
          uVar3 = local_46;
          uVar8 = local_48;
          if (((uStack_14 == 0) || (uVar6 != 3)) || ((short)uStack_14 <= (short)uVar12)) {
            if (((uStack_16 == 0) || (uVar6 != 2)) ||
               (uVar7 = uStack_16, (short)uStack_16 <= (short)local_44)) {
              if (((uStack_18 == 0) || (uVar6 != 1)) ||
                 (uVar7 = uStack_18, (short)uStack_18 <= (short)local_46)) {
                if (((uStack_1a == 0) || (uVar6 != 0)) ||
                   (uVar7 = uStack_1a, (short)uStack_1a <= (short)local_48)) {
                  uVar8 = uVar7;
                  if (sStack_e == 4) {
                    local_4a = 1;
                  }
                }
                else {
                  sVar11 = (uStack_1a - local_48) + sVar11;
                  local_48 = uStack_1a;
                }
              }
              else {
                sVar11 = (uStack_18 - local_46) + sVar11;
                local_46 = uStack_18;
                uVar8 = uVar3;
              }
            }
            else {
              sVar11 = (uStack_16 - local_44) + sVar11;
              local_44 = uStack_16;
              uVar8 = uVar4;
            }
          }
          else {
            sVar11 = (uStack_14 - uVar12) + sVar11;
            uVar5 = uStack_14;
            uVar8 = uVar12;
          }
        }
      }
    }
    uVar12 = uVar5;
  }
  sVar11 = local_4a + sVar11;
  if (*(short *)(_DAT_0002884c + 0x112) < sVar11) {
    sVar11 = *(short *)(_DAT_0002884c + 0x112);
  }
  for (sVar10 = 0; sVar10 < _DAT_00027cc2; sVar10 = sVar10 + 1) {
    if (*(short *)(&DAT_00027ca0 + sVar10 * 2) != 0) {
      iVar1 = *(int *)(&DAT_00027c70 + sVar10 * 4);
      cVar2 = *(char *)(iVar1 + 4);
      *(short *)(param_1 + sVar10 * 2) = (short)*(char *)(iVar1 + 8);
      if (cVar2 != '\x1c') {
        func_0x000049a8();
      }
      if ((*(ushort *)(iVar1 + 0xc) & 0x1000) == 0) {
        if (cVar2 == '\x1c') {
          sVar9 = func_0x00002d58(iVar1);
          psVar13 = (short *)(param_1 + sVar10 * 2);
          *psVar13 = sVar9 + *psVar13;
        }
        else if ((sStack_1c == 0) || (uVar6 != 3)) {
          if ((sStack_1e == 0) || (uVar6 != 2)) {
            if ((sStack_20 == 0) || (uVar6 != 1)) {
              if ((sStack_22 != 0) && (uVar6 == 0)) {
                psVar13 = (short *)(param_1 + sVar10 * 2);
                *psVar13 = sStack_22 + *psVar13;
              }
            }
            else {
              psVar13 = (short *)(param_1 + sVar10 * 2);
              *psVar13 = sStack_20 + *psVar13;
            }
          }
          else {
            psVar13 = (short *)(param_1 + sVar10 * 2);
            *psVar13 = sStack_1e + *psVar13;
          }
        }
        else {
          psVar13 = (short *)(param_1 + sVar10 * 2);
          *psVar13 = sStack_1c + *psVar13;
        }
      }
      else {
        asStack_52[0] = *(short *)(param_1 + sVar10 * 2);
        asStack_52[1] = 4;
        if (asStack_52[0] < 5) {
          psVar13 = asStack_52;
        }
        else {
          psVar13 = asStack_52 + 1;
        }
        *(short *)(param_1 + sVar10 * 2) = *psVar13;
      }
      sStack_56 = 9;
      sStack_54 = *(short *)(param_1 + sVar10 * 2);
      if (sStack_54 < 9) {
        psVar13 = &sStack_54;
      }
      else {
        psVar13 = &sStack_56;
      }
      *(short *)(param_1 + sVar10 * 2) = *psVar13;
      uVar8 = *(ushort *)(iVar1 + 0xc) & 0x1000;
      if ((*(ushort *)(iVar1 + 0xc) & 0x1000) == 0) {
        psVar13 = (short *)(param_1 + sVar10 * 2);
        *psVar13 = sVar11 + *psVar13;
      }
    }
  }
  return uVar8;
}



// Function: FUN_00001c10 at 00001c10
// Size: 465 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  int iVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short in_D0w;
  short sVar5;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D7w;
  short *psVar6;
  undefined2 *puVar7;
  int unaff_A3;
  int unaff_A6;
  
  do {
    if (in_D0w <= *(short *)(unaff_A6 + -0x40)) goto LAB_00001c2e;
    unaff_D4w = (*(short *)(unaff_A6 + -0x12) - *(short *)(unaff_A6 + -0x40)) + unaff_D4w;
    *(undefined2 *)(unaff_A6 + -0x40) = *(undefined2 *)(unaff_A6 + -0x12);
    while( true ) {
      while( true ) {
        while( true ) {
          do {
            do {
              unaff_D3w = unaff_D3w + 1;
              if (_DAT_00027cc2 <= unaff_D3w) {
                sVar3 = *(short *)(unaff_A6 + -0x46) + unaff_D4w;
                if (*(short *)(_DAT_0002884c + 0x112) < sVar3) {
                  sVar3 = *(short *)(_DAT_0002884c + 0x112);
                }
                for (sVar4 = 0; sVar4 < _DAT_00027cc2; sVar4 = sVar4 + 1) {
                  if (*(short *)(&DAT_00027ca0 + sVar4 * 2) != 0) {
                    iVar1 = *(int *)(&DAT_00027c70 + sVar4 * 4);
                    cVar2 = *(char *)(iVar1 + 4);
                    *(short *)(unaff_A3 + sVar4 * 2) = (short)*(char *)(iVar1 + 8);
                    if (cVar2 != '\x1c') {
                      func_0x000049a8();
                    }
                    if ((*(ushort *)(iVar1 + 0xc) & 0x1000) == 0) {
                      if (cVar2 == '\x1c') {
                        sVar5 = func_0x00002d58(iVar1);
                        psVar6 = (short *)(unaff_A3 + sVar4 * 2);
                        *psVar6 = sVar5 + *psVar6;
                      }
                      else if ((*(short *)(unaff_A6 + -0x18) == 0) || (unaff_D5w != 3)) {
                        if ((*(short *)(unaff_A6 + -0x1a) == 0) || (unaff_D5w != 2)) {
                          if ((*(short *)(unaff_A6 + -0x1c) == 0) || (unaff_D5w != 1)) {
                            if ((*(short *)(unaff_A6 + -0x1e) != 0) && (unaff_D5w == 0)) {
                              psVar6 = (short *)(unaff_A3 + sVar4 * 2);
                              *psVar6 = *(short *)(unaff_A6 + -0x1e) + *psVar6;
                            }
                          }
                          else {
                            psVar6 = (short *)(unaff_A3 + sVar4 * 2);
                            *psVar6 = *(short *)(unaff_A6 + -0x1c) + *psVar6;
                          }
                        }
                        else {
                          psVar6 = (short *)(unaff_A3 + sVar4 * 2);
                          *psVar6 = *(short *)(unaff_A6 + -0x1a) + *psVar6;
                        }
                      }
                      else {
                        psVar6 = (short *)(unaff_A3 + sVar4 * 2);
                        *psVar6 = *(short *)(unaff_A6 + -0x18) + *psVar6;
                      }
                    }
                    else {
                      *(undefined2 *)(unaff_A6 + -0x4e) = *(undefined2 *)(unaff_A3 + sVar4 * 2);
                      *(undefined2 *)(unaff_A6 + -0x4c) = 4;
                      if (*(short *)(unaff_A6 + -0x4c) < *(short *)(unaff_A6 + -0x4e)) {
                        puVar7 = (undefined2 *)(unaff_A6 + -0x4c);
                      }
                      else {
                        puVar7 = (undefined2 *)(unaff_A6 + -0x4e);
                      }
                      *(undefined2 *)(unaff_A3 + sVar4 * 2) = *puVar7;
                    }
                    *(undefined2 *)(unaff_A6 + -0x52) = 9;
                    *(undefined2 *)(unaff_A6 + -0x50) = *(undefined2 *)(unaff_A3 + sVar4 * 2);
                    if (*(short *)(unaff_A6 + -0x50) < *(short *)(unaff_A6 + -0x52)) {
                      puVar7 = (undefined2 *)(unaff_A6 + -0x50);
                    }
                    else {
                      puVar7 = (undefined2 *)(unaff_A6 + -0x52);
                    }
                    *(undefined2 *)(unaff_A3 + sVar4 * 2) = *puVar7;
                    if ((*(ushort *)(iVar1 + 0xc) & 0x1000) == 0) {
                      psVar6 = (short *)(unaff_A3 + sVar4 * 2);
                      *psVar6 = sVar3 + *psVar6;
                    }
                  }
                }
                return;
              }
            } while (*(short *)(&DAT_00027ca0 + unaff_D3w * 2) == 0);
            iVar1 = *(int *)(&DAT_00027c70 + unaff_D3w * 4);
          } while ((*(ushort *)(iVar1 + 0xc) & 0x1000) != 0);
          if (*(char *)(iVar1 + 4) != '\x1c') break;
          sVar3 = func_0x00002d58(iVar1);
          *(undefined2 *)(unaff_A6 + -0x4a) = 9;
          sVar3 = sVar3 + *(char *)(iVar1 + 8);
          *(short *)(unaff_A6 + -0x48) = sVar3;
          if (sVar3 < *(short *)(unaff_A6 + -0x4a)) {
            psVar6 = (short *)(unaff_A6 + -0x48);
          }
          else {
            psVar6 = (short *)(unaff_A6 + -0x4a);
          }
          sVar3 = *psVar6;
          *(short *)(unaff_A6 + -0x54) = sVar3;
          sVar3 = *(short *)(sVar3 * 2 + 0x15b54);
          sVar4 = func_0x00002d60(iVar1);
          unaff_D4w = sVar4 + sVar3 + unaff_D4w;
        }
        func_0x000049a8();
        if (((*(short *)(unaff_A6 + -0x10) == 0) || (unaff_D5w != 3)) ||
           (*(short *)(unaff_A6 + -0x10) <= unaff_D7w)) break;
        unaff_D4w = (*(short *)(unaff_A6 + -0x10) - unaff_D7w) + unaff_D4w;
        unaff_D7w = *(short *)(unaff_A6 + -0x10);
      }
      if ((*(short *)(unaff_A6 + -0x12) != 0) && (unaff_D5w == 2)) break;
LAB_00001c2e:
      if (((*(short *)(unaff_A6 + -0x14) == 0) || (unaff_D5w != 1)) ||
         (*(short *)(unaff_A6 + -0x14) <= *(short *)(unaff_A6 + -0x42))) {
        if (((*(short *)(unaff_A6 + -0x16) == 0) || (unaff_D5w != 0)) ||
           (*(short *)(unaff_A6 + -0x16) <= *(short *)(unaff_A6 + -0x44))) {
          if (*(short *)(unaff_A6 + -10) == 4) {
            *(undefined2 *)(unaff_A6 + -0x46) = 1;
          }
        }
        else {
          unaff_D4w = (*(short *)(unaff_A6 + -0x16) - *(short *)(unaff_A6 + -0x44)) + unaff_D4w;
          *(undefined2 *)(unaff_A6 + -0x44) = *(undefined2 *)(unaff_A6 + -0x16);
        }
      }
      else {
        unaff_D4w = (*(short *)(unaff_A6 + -0x14) - *(short *)(unaff_A6 + -0x42)) + unaff_D4w;
        *(undefined2 *)(unaff_A6 + -0x42) = *(undefined2 *)(unaff_A6 + -0x14);
      }
    }
    in_D0w = *(short *)(unaff_A6 + -0x12);
  } while( true );
}



// Function: FUN_00001de0 at 00001de0
// Size: 316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001de0(void)

{
  int iVar1;
  short sVar2;
  int extraout_A0;
  int *extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  _DAT_00027d1c = 0;
  if (_DAT_00027d18 == 0) {
                    /* WARNING: Call to offcut address within same function */
    func_0x00001ea0(0x3a);
    _DAT_00027d18 = extraout_A0;
  }
  if (_DAT_00027d18 != 0) {
    for (sVar2 = 0; sVar2 < 0x1d; sVar2 = sVar2 + 1) {
      *(short *)(_DAT_00027d18 +
                *(char *)((int)sVar2 + *(short *)(_DAT_0002884c + 0x110) * 0x1d + _DAT_0002884c +
                         0x60c) * 2) = sVar2;
    }
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*_DAT_000257ee + 0x68))();
      _DAT_00027bd0 = extraout_A0_00;
      func_0x00001bf0(extraout_A0_00);
      (**(code **)(*_DAT_00027bd0 + 0x194))();
      (**(code **)(*_DAT_00027bd0 + 0x40c))();
      (**(code **)(*_DAT_00027bd0 + 0x3a0))();
      _DAT_00027bd0 = (int *)0x0;
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_00027bd0 != (int *)0x0) {
        (**(code **)(*_DAT_00027bd0 + 0x3a0))();
      }
      _DAT_00027bd0 = (int *)0x0;
      FUN_00001c10();
    }
  }
  return;
}



