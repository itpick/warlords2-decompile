// Warlords II - Decompiled 68k Code
// Segment: CODE_045
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000017c at 0000017c
// Size: 876 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000017c(int param_1,uint param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  int iVar3;
  
  uVar1 = _DAT_00028846;
  if (param_2 == 0x6f766572) {
    func_0x00005358();
    switch(_DAT_00015df0) {
    case 0:
    case 1:
      func_0x00002ad8(1);
      func_0x00002ad8(0,extraout_A0w);
      func_0x00005348(extraout_A0w_00);
      break;
    case 2:
      func_0x00002ad8(5);
      func_0x00002ad8(4,extraout_A0w_03);
      func_0x00005348(extraout_A0w_04);
      break;
    case 3:
      func_0x00002ad8(7);
      func_0x00002ad8(6,extraout_A0w_05);
      func_0x00005348(extraout_A0w_06);
      break;
    case 4:
      func_0x00002ad8(3);
      func_0x00002ad8(2,extraout_A0w_01);
      func_0x00005348(extraout_A0w_02);
    }
  }
  else if (param_2 == 0x70696374) {
    func_0x00005358();
    func_0x00005348(_DAT_00015dee * 0x42 + (short)_DAT_0002884c + 0x15c8,0xffc7);
  }
  else if (((*(int *)(param_1 + 0x2e) == 0x6962616b) && (0x61726d30 < param_2)) &&
          (param_2 < 0x61726d35)) {
    sVar2 = (short)param_2 + -0x6d31;
    if (*(char *)((int)sVar2 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da) < '\0') {
      func_0x00005358();
      func_0x00005348(_DAT_00015dee * 0x42 + (short)_DAT_0002884c + 0x15c8,0xffac);
    }
    else {
      _DAT_00028846 = (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
      iVar3 = (int)sVar2 + _DAT_00015dee * 0x42 + _DAT_0002884c;
      func_0x00005320((short)*(char *)(iVar3 + 0x15de),(short)*(char *)(iVar3 + 0x15ea));
      _DAT_00028846 = uVar1;
    }
  }
  else if (((param_2 == 0x61726d31) || (param_2 == 0x61726d32)) ||
          ((param_2 == 0x61726d33 || (param_2 == 0x61726d34)))) {
    func_0x00005360();
  }
  else if (param_2 == 0x6275696c) {
    func_0x00005360();
  }
  else if (param_2 == 0x62757072) {
    func_0x00005360();
  }
  else if (param_2 == 0x64657374) {
    func_0x00005360();
  }
  else if (param_2 == 0x696e666f) {
    func_0x00005360();
  }
  else if (param_2 == 0x6f6b2020) {
    func_0x00005360();
  }
  else if (param_2 == 0x70726f64) {
    func_0x00005360();
  }
  else if (param_2 == 0x72617a65) {
    func_0x00005360();
  }
  else if (param_2 == 0x72656e61) {
    func_0x00005360();
  }
  else if (param_2 == 0x73656520) {
    func_0x00005360();
  }
  else if (param_2 == 0x73746f70) {
    func_0x00005360();
  }
  else if (param_2 == 0x746f2020) {
    func_0x00005360();
  }
  else if (param_2 == 0x76656374) {
    func_0x00005360();
  }
  else {
    func_0x00005308((short)param_1,(short)param_2);
  }
  return;
}



// Function: FUN_000004f2 at 000004f2
// Size: 110 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004f2(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 local_8;
  
  sVar1 = 0x10;
  if (((0x61726d30 < param_2) && (param_2 < 0x61726d35)) &&
     (-1 < *(char *)(param_2 + _DAT_00015dee * 0x42 + _DAT_0002884c + -0x61725757))) {
    sVar1 = 0x12;
  }
  local_8 = CONCAT22(*(undefined2 *)(sVar1 * 0x1c + 0x140aa),*(undefined2 *)(sVar1 * 0x1c + 0x140a8)
                    );
  *param_3 = local_8;
  return;
}



// Function: FUN_00000560 at 00000560
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000560(undefined4 param_1,undefined4 param_2)

{
  FUN_000007c8(param_1,param_2);
  FUN_00003b08();
  FUN_00003b08();
  FUN_00003b08();
  FUN_00003b08();
  return;
}



// Function: FUN_000005a0 at 000005a0
// Size: 264 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005a0(void)

{
  FUN_00003b08();
  FUN_00003b08();
  FUN_00003b08();
  FUN_00003b08();
  return;
}



// Function: FUN_000006a8 at 000006a8
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006a8(undefined4 param_1)

{
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
  FUN_000005a0(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000006ea at 000006ea
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006ea(void)

{
  FUN_000009ea(*(undefined2 *)(_DAT_0002884c + 0x17e));
  return;
}



// Function: FUN_00000714 at 00000714
// Size: 186 bytes

void FUN_00000714(short param_1,undefined4 param_2,undefined4 param_3,char *param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  undefined2 extraout_A0w;
  undefined4 extraout_A0;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  int extraout_A0_00;
  char *extraout_A0_01;
  char *pcVar3;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w_04;
  undefined4 extraout_A0_03;
  undefined1 *puVar4;
  undefined2 uVar5;
  short sVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 auStack_854 [256];
  undefined1 auStack_754 [256];
  undefined1 auStack_654 [256];
  undefined1 auStack_554 [256];
  undefined1 auStack_454 [256];
  undefined1 auStack_354 [256];
  undefined1 auStack_254 [256];
  undefined1 auStack_154 [256];
  undefined1 auStack_54 [80];
  
  if (param_1 != 0) {
    FUN_000032f8();
    func_0x00007320((short)auStack_154,extraout_A0w);
    uVar11 = (undefined2)((uint)extraout_A0 >> 0x10);
    uVar10 = 0x6172;
    uVar7 = (undefined2)((uint)param_5 >> 0x10);
    uVar9 = SUB41(param_5,0);
    uVar8 = uVar7;
    func_0x00006e38(uVar9,0x6d79,(short)extraout_A0);
    sVar6 = param_2._0_2_ >> 0xf;
    uVar5 = 1;
    puVar4 = auStack_54;
    func_0x000076d0((short)puVar4,0x5e16,(char)((uint)param_2 >> 0x10));
    func_0x00007320(auStack_254,(short)auStack_54,(short)((uint)puVar4 >> 0x10),uVar5,sVar6,uVar8,
                    uVar10,uVar11);
    func_0x00006e38(param_5,0x74696d65,extraout_A0w_00);
    func_0x000076d0(auStack_54,0x15e0d,(int)param_2._2_2_);
    func_0x00007320(auStack_354,(short)auStack_54);
    func_0x00006e38(param_5,0x636f7374,extraout_A0w_01);
    func_0x000076d0(auStack_54,0x15e00,(int)param_3._0_2_);
    func_0x00007320(auStack_454,(short)auStack_54);
    func_0x00006e38(param_5,0x73747265,extraout_A0w_02);
    func_0x000076d0(auStack_54,0x15df7,(int)param_3._2_2_);
    func_0x00007320(auStack_554,(short)auStack_54);
    func_0x00006e38(param_5,0x6d6f7665,extraout_A0w_03);
    (**(code **)(*param_5 + 0x188))(param_5,0x626f6e75);
    if (extraout_A0_00 != 0) {
      uVar8 = (undefined2)extraout_A0_00;
      if (*param_4 == '\0') {
        if ((param_4[1] == '\0') || (param_4[2] == '\0')) {
          if (param_4[1] == '\0') {
            if (param_4[2] == '\0') {
              func_0x00003b70(uVar8,2,0x24);
            }
            else {
              func_0x00003b70(uVar8,2,0x24);
            }
          }
          else {
            func_0x00003b70(uVar8,2,0x24);
          }
        }
        else {
          func_0x00003b70(uVar8,2,0x24);
        }
      }
      else {
        func_0x00003b70(uVar8,2,0x24);
      }
    }
    uVar12 = 0;
    func_0x00002f98(0);
    uVar2 = 0xffffffff;
    pcVar3 = extraout_A0_01;
    do {
      uVar2 = uVar2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uVar2 < 6) || (extraout_A0_01[3] != '&')) {
      func_0x00007320((short)auStack_854,(short)extraout_A0_01);
      uVar5 = (undefined2)((uint)extraout_A0_03 >> 0x10);
      uVar8 = 0x626f;
      func_0x00006e38(uVar9,0x6e31,(short)extraout_A0_03);
      func_0x00006e38((short)param_5,0x6e32,0x5b76,uVar7,uVar8,uVar5,uVar12);
    }
    else {
      func_0x00007320((short)auStack_654,0x5df2);
      uVar5 = (undefined2)((uint)extraout_A0_02 >> 0x10);
      uVar8 = 0x626f;
      func_0x00006e38(uVar9,0x6e31,(short)extraout_A0_02);
      func_0x00007320((short)auStack_754,(short)extraout_A0_01 + 5,uVar7,uVar8,uVar5);
      func_0x00006e38((short)param_5,0x6e32,extraout_A0w_04);
    }
  }
  return;
}



// Function: FUN_000007c8 at 000007c8
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007c8(void)

{
  bool in_ZF;
  bool in_CF;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000009ea at 000009ea
// Size: 836 bytes

/* WARNING: Removing unreachable block (ram,0x00000cf6) */
/* WARNING: Removing unreachable block (ram,0x00000cfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009ea(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  int *extraout_A0;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  int iVar4;
  bool bVar5;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(_DAT_000297f4 + 0x80);
  (**(code **)(*piVar1 + 0x118))();
  _DAT_0002886c = 0;
  if (param_1._0_2_ == 4) {
    sVar2 = FUN_000030b6(param_2._0_2_);
    if (sVar2 == -1) {
      return;
    }
    sVar3 = func_0x000049e0(*(undefined2 *)(sVar2 * 0x20 + _DAT_0002884c + 0x812));
    if (sVar3 == 0) {
      return;
    }
    if (((_DAT_00015df0 == 4) && (sVar2 == _DAT_00015dee)) && (_DAT_00028868 != (int *)0x0)) {
      FUN_00000e5c();
      return;
    }
    iVar4 = sVar2 * 0x20 + _DAT_0002884c;
    _DAT_00015dec = *(undefined2 *)(iVar4 + 0x812);
    _DAT_00015dea = *(undefined2 *)(iVar4 + 0x814);
    _DAT_00015dee = sVar2;
  }
  else if (param_1._0_2_ == 0) {
    sVar2 = FUN_00002b58(param_2._0_2_,1);
    if (sVar2 == -1) {
      return;
    }
    if (((_DAT_00015df0 == 0) && (sVar2 == _DAT_00015dee)) && (_DAT_00028868 != (int *)0x0)) {
      FUN_00000e5c();
      return;
    }
    iVar4 = sVar2 * 0x42 + _DAT_0002884c;
    _DAT_00015dec = *(undefined2 *)(iVar4 + 0x15c4);
    _DAT_00015dea = *(undefined2 *)(iVar4 + 0x15c6);
    _DAT_00015dee = sVar2;
  }
  else {
    sVar2 = FUN_00002b58(param_2._0_2_,1);
    if ((((param_1._0_2_ == _DAT_00015df0) && (sVar2 == _DAT_00015dee)) &&
        (_DAT_00028868 != (int *)0x0)) && (param_1._0_2_ != 1)) {
      FUN_00000e5c();
      return;
    }
    if (*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
      _DAT_00015de8 = -1;
    }
    else {
      _DAT_00015de8 = (short)*(char *)(sVar2 * 0x42 + _DAT_0002884c + 0x15f0);
    }
    iVar4 = sVar2 * 0x42 + _DAT_0002884c;
    _DAT_00015dec = *(undefined2 *)(iVar4 + 0x15c4);
    _DAT_00015dea = *(undefined2 *)(iVar4 + 0x15c6);
    _DAT_00015dee = sVar2;
  }
  if (-1 < _DAT_00015dee) {
    _DAT_00015df0 = param_1._0_2_;
    bVar5 = _DAT_00028868 == (int *)0x0;
    if (bVar5) {
      (**(code **)(*_DAT_000257ee + 0x68))((short)_DAT_000257ee,(short)((uint)piVar1 >> 0x10));
      _DAT_00028868 = extraout_A0;
    }
    FUN_000011ca();
    FUN_00002c58();
    FUN_00000e5c();
    if (*(short *)(_DAT_0002884c + 0x12e) != 0) {
      if ((*(byte *)(_DAT_0002884c + 0x134) & 2) == 0) {
        *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 2;
        func_0x00002ae0(1);
        func_0x00003c60(extraout_A0w);
      }
      if (((*(byte *)(_DAT_0002884c + 0x134) & 0x20) == 0) &&
         (1 < *(short *)(_DAT_00028846 * 2 + 0x28800))) {
        *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 0x20;
        func_0x00002ae0(6);
        func_0x00003c60(extraout_A0w_00);
      }
    }
    if (bVar5) {
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar4 = func_0x000076a8((short)auStack_4a);
      if (iVar4 == 0) {
        if (_DAT_00028868 != (int *)0x0) {
          (**(code **)(*_DAT_00028868 + 0x40c))();
        }
        FUN_00000d2e();
        _DAT_00025f52 = local_10;
      }
      else {
        _DAT_00028868 = (int *)0x0;
        func_0x00001c10((short)((uint)local_14 >> 0x10));
      }
    }
  }
  return;
}



// Function: FUN_00000d2e at 00000d2e
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d2e(void)

{
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar1;
  undefined2 extraout_A0w_00;
  
  if (_DAT_00028868 != (int *)0x0) {
    (**(code **)(*_DAT_00028868 + 0x198))();
    func_0x000073b0(0x2e);
    uVar1 = 0;
    if (extraout_A0 != 0) {
      func_0x000070e8((short)extraout_A0);
      uVar1 = extraout_A0w;
    }
    func_0x00006dd0(uVar1,(short)_DAT_00028868);
    (**(code **)(*_DAT_00028868 + 0x104))(_DAT_00028868,uVar1);
  }
  _DAT_00028868 = (int *)0x0;
  func_0x000048a0(1);
  if ((*(short *)(_DAT_0002884c + 0x12e) != 0) && ((*(byte *)(_DAT_0002884c + 0x134) & 4) == 0)) {
    *(byte *)(_DAT_0002884c + 0x134) = *(byte *)(_DAT_0002884c + 0x134) | 4;
    func_0x00002ae0(2);
    func_0x00003c60(extraout_A0w_00);
  }
  return;
}



// Function: FUN_00000de6 at 00000de6
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000de6(void)

{
  FUN_000009ea(_DAT_00015dec);
  return;
}



// Function: FUN_00000e02 at 00000e02
// Size: 30 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e02(void)

{
  FUN_000009ea(_DAT_00015dec);
  return;
}



// Function: FUN_00000e20 at 00000e20
// Size: 30 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e20(void)

{
  FUN_000009ea(_DAT_00015dec);
  return;
}



// Function: FUN_00000e3e at 00000e3e
// Size: 30 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e3e(void)

{
  FUN_000009ea(_DAT_00015dec);
  return;
}



// Function: FUN_00000e5c at 00000e5c
// Size: 878 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000e5c(void)

{
  undefined2 extraout_D0u;
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  
  if (_DAT_00015df0 == 2) {
    (**(code **)(*_DAT_00028868 + 0x188))(_DAT_00028868,0x73746f70);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3a0))();
      (**(code **)(*extraout_A0 + 0x70))();
    }
  }
  if (_DAT_00015df0 == 3) {
    (**(code **)(*_DAT_00028868 + 0x188))(_DAT_00028868,0x73656520);
    if (extraout_A0_00 != (int *)0x0) {
      (**(code **)(*extraout_A0_00 + 0x3a8))();
    }
    func_0x000032b8();
    (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x20);
    (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
    if ((extraout_A0_01 != (int *)0x0) && (extraout_A0_02 != (int *)0x0)) {
      uVar5 = SUB42(extraout_A0_02,0);
      uVar3 = SUB42(extraout_A0_01,0);
      if (_DAT_0002886c == 0) {
        uVar2 = 0xb2;
        (**(code **)(*extraout_A0_01 + 0x3a8))();
        uVar4 = 0xc2;
        (**(code **)(*extraout_A0_02 + 0x3a8))(uVar5,uVar2);
        uVar2 = 0xda;
        (**(code **)(*extraout_A0_01 + 0x3a0))(uVar3,uVar4);
        (**(code **)(*extraout_A0_02 + 0x3a0))(uVar5,uVar2);
      }
      else if (_DAT_0002886c == 1) {
        uVar2 = 0x18;
        (**(code **)(*extraout_A0_01 + 0x3a8))();
        uVar4 = 0x28;
        (**(code **)(*extraout_A0_02 + 0x3a8))(uVar5,uVar2);
        uVar2 = 0x38;
        (**(code **)(*extraout_A0_01 + 0x3a0))(uVar3,uVar4);
        (**(code **)(*extraout_A0_02 + 0x3a0))(uVar5,uVar2);
      }
      else if (_DAT_0002886c == 2) {
        uVar2 = 0x72;
        (**(code **)(*extraout_A0_01 + 0x3a8))();
        uVar4 = 0x84;
        (**(code **)(*extraout_A0_02 + 0x3a8))(uVar5,uVar2);
        uVar2 = 0x9c;
        (**(code **)(*extraout_A0_01 + 0x3a0))(uVar3,uVar4);
        (**(code **)(*extraout_A0_02 + 0x3a0))(uVar5,uVar2);
      }
      (**(code **)(*extraout_A0_01 + 0x26c))();
      (**(code **)(*extraout_A0_02 + 0x26c))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x188))(_DAT_00028868,0x72617a65);
  uVar3 = 0;
  if (extraout_A0_03 != (int *)0x0) {
    (**(code **)(*extraout_A0_03 + 0x3a0))();
    uVar3 = extraout_D0u;
  }
  uVar1 = CONCAT22(uVar3,*(short *)(_DAT_0002884c + 0x110));
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800) < 1) {
    (**(code **)(*_DAT_00028868 + 0x188))(_DAT_00028868,0x6275696c);
    if (extraout_A0_04 != (int *)0x0) {
      (**(code **)(*extraout_A0_04 + 0x3a0))();
    }
    (**(code **)(*_DAT_00028868 + 0x188))(_DAT_00028868,0x70726f64);
    if (extraout_A0_05 != (int *)0x0) {
      (**(code **)(*extraout_A0_05 + 0x3a0))();
    }
    (**(code **)(*_DAT_00028868 + 0x188))(_DAT_00028868,0x76656374);
    uVar1 = 0;
    if (extraout_A0_06 != (int *)0x0) {
      uVar1 = (**(code **)(*extraout_A0_06 + 0x3a0))();
    }
  }
  return uVar1;
}



// Function: FUN_000011ca at 000011ca
// Size: 525 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000011ca(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  short sVar8;
  short unaff_D6w;
  short unaff_D7w;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  int extraout_A0_01;
  undefined4 *extraout_A0_02;
  undefined4 *extraout_A0_03;
  int *extraout_A0_04;
  undefined4 extraout_A0_05;
  int *extraout_A0_06;
  undefined1 extraout_A0b;
  int *extraout_A0_07;
  int *extraout_A0_08;
  undefined2 extraout_A0w;
  int *extraout_A0_09;
  undefined1 extraout_A0b_00;
  undefined2 extraout_A0w_00;
  int *extraout_A0_10;
  undefined1 extraout_A0b_01;
  char *extraout_A0_11;
  char *extraout_A0_12;
  undefined2 extraout_A0w_01;
  int *extraout_A0_13;
  undefined1 extraout_A0b_02;
  int *extraout_A0_14;
  int *extraout_A0_15;
  int *extraout_A0_16;
  int *extraout_A0_17;
  int *extraout_A0_18;
  undefined1 extraout_A0b_03;
  int *extraout_A0_19;
  undefined2 extraout_A0w_02;
  int extraout_A0_20;
  undefined1 extraout_A0b_04;
  int *extraout_A0_21;
  undefined1 extraout_A0b_05;
  undefined1 extraout_A0b_06;
  int *extraout_A0_22;
  undefined1 extraout_A0b_07;
  int *extraout_A0_23;
  undefined1 extraout_A0b_08;
  int *extraout_A0_24;
  int *extraout_A0_25;
  undefined1 extraout_A0b_09;
  int extraout_A0_26;
  undefined4 extraout_A0_27;
  undefined2 extraout_A0w_03;
  undefined4 extraout_A0_28;
  int *extraout_A0_29;
  int *extraout_A0_30;
  int *extraout_A0_31;
  int *extraout_A0_32;
  int *extraout_A0_33;
  int *extraout_A0_34;
  int *extraout_A0_35;
  int *extraout_A0_36;
  int *extraout_A0_37;
  int *extraout_A0_38;
  int *extraout_A0_39;
  undefined2 extraout_A0w_04;
  int extraout_A0_40;
  int *extraout_A0_41;
  undefined1 extraout_A0b_10;
  int extraout_A0_42;
  int extraout_A0_43;
  int extraout_A0_44;
  int extraout_A0_45;
  int *extraout_A0_46;
  int *extraout_A0_47;
  undefined2 extraout_A0w_05;
  int *extraout_A0_48;
  undefined1 extraout_A0b_11;
  undefined2 extraout_A0w_06;
  int *extraout_A0_49;
  undefined1 extraout_A0b_12;
  char *extraout_A0_50;
  char *extraout_A0_51;
  char *pcVar9;
  undefined2 extraout_A0w_07;
  int *extraout_A0_52;
  undefined1 extraout_A0b_13;
  int *extraout_A0_53;
  int *extraout_A0_54;
  int *extraout_A0_55;
  int *extraout_A0_56;
  char *pcVar10;
  bool bVar11;
  short asStackY_1017c [30678];
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined1 auStack_117e [256];
  undefined1 auStack_107e [256];
  undefined1 auStack_f7e [256];
  undefined1 auStack_e7e [256];
  undefined1 auStack_d7e [256];
  undefined1 auStack_c7e [256];
  undefined1 auStack_b7e [256];
  undefined1 auStack_a7e [256];
  undefined1 auStack_97e [256];
  undefined1 auStack_87e [256];
  undefined1 auStack_77e [256];
  undefined1 auStack_67e [256];
  undefined1 auStack_57e [256];
  undefined1 auStack_47e [256];
  undefined1 auStack_37e [256];
  undefined1 auStack_27e [256];
  short sStack_17e;
  short asStack_17c [4];
  char acStack_174 [50];
  int iStack_142;
  short *psStack_13e;
  int iStack_13a;
  int iStack_136;
  short *psStack_132;
  int iStack_12e;
  int iStack_12a;
  int iStack_126;
  int iStack_122;
  int iStack_11e;
  short sStack_11a;
  short sStack_118;
  short sStack_116;
  short sStack_114;
  undefined4 uStack_112;
  undefined4 uStack_10e;
  undefined4 uStack_10a;
  undefined4 uStack_106;
  undefined4 uStack_102;
  undefined4 uStack_fe;
  undefined4 uStack_fa;
  undefined4 uStack_f6;
  undefined4 uStack_f2;
  undefined4 uStack_ee;
  undefined1 uStack_e9;
  short sStack_e8;
  short sStack_e6;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 uStack_d7;
  short asStack_d6 [20];
  undefined1 auStack_ae [40];
  undefined1 auStack_86 [40];
  undefined1 auStack_5e [40];
  char acStack_36 [50];
  
  if ((param_1._0_2_ != 0) && (_DAT_00028868 == (int *)0x0)) {
    if (DAT_000264d0 != '\0') {
      func_0x000064a0();
      func_0x000073b0(0x3a);
      if (extraout_A0 != (undefined4 *)0x0) {
        FUN_000013d8((char)extraout_A0);
        *extraout_A0 = 0x2198c;
        *(undefined4 *)((int)extraout_A0 + 0x2e) = 0x20202020;
        *(undefined4 *)((int)extraout_A0 + 0x32) = 0;
        *(undefined4 *)((int)extraout_A0 + 0x36) = 0;
        *extraout_A0 = 0x1f212;
      }
    }
    if (DAT_000264d0 != '\0') {
      func_0x000064b8();
      func_0x000073b0(0xb6);
      if (extraout_A0_00 != (undefined4 *)0x0) {
                    /* WARNING: Call to offcut address within same function */
        func_0x00001348((char)extraout_A0_00);
        *extraout_A0_00 = 0x1f2f6;
        *(undefined2 *)(extraout_A0_00 + 0x29) = 0;
        *(undefined2 *)((int)extraout_A0_00 + 0xa6) = 0;
        *(undefined2 *)(extraout_A0_00 + 0x2a) = 0;
        *(undefined2 *)((int)extraout_A0_00 + 0xaa) = 0;
        *(undefined2 *)(extraout_A0_00 + 0x2b) = 0;
        *(undefined2 *)((int)extraout_A0_00 + 0xae) = 0;
        *(undefined2 *)(extraout_A0_00 + 0x2c) = 1;
        *(undefined2 *)((int)extraout_A0_00 + 0xb2) = 0;
        *(undefined2 *)(extraout_A0_00 + 0x2d) = 0;
      }
    }
    if (DAT_000264d0 != '\0') {
      func_0x000064d0();
      func_0x000073b0(0xac);
      if (extraout_A0_01 != 0) {
        func_0x000070d8((char)extraout_A0_01);
      }
    }
    if (DAT_000264d0 != '\0') {
      func_0x000064e8();
      func_0x000073b0(0x3a);
      if (extraout_A0_02 != (undefined4 *)0x0) {
        FUN_000013d8((char)extraout_A0_02);
        *extraout_A0_02 = 0x2198c;
        *(undefined4 *)((int)extraout_A0_02 + 0x2e) = 0x20202020;
        *(undefined4 *)((int)extraout_A0_02 + 0x32) = 0;
        *(undefined4 *)((int)extraout_A0_02 + 0x36) = 0;
        *extraout_A0_02 = 0x1faa2;
      }
    }
    if (DAT_000264d0 != '\0') {
      func_0x00006500();
      func_0x000073b0(0xb6);
      if (extraout_A0_03 != (undefined4 *)0x0) {
                    /* WARNING: Call to offcut address within same function */
        func_0x00001348((char)extraout_A0_03);
        *extraout_A0_03 = 0x1f2f6;
        *(undefined2 *)(extraout_A0_03 + 0x29) = 0;
        *(undefined2 *)((int)extraout_A0_03 + 0xa6) = 0;
        *(undefined2 *)(extraout_A0_03 + 0x2a) = 0;
        *(undefined2 *)((int)extraout_A0_03 + 0xaa) = 0;
        *(undefined2 *)(extraout_A0_03 + 0x2b) = 0;
        *(undefined2 *)((int)extraout_A0_03 + 0xae) = 0;
        *(undefined2 *)(extraout_A0_03 + 0x2c) = 1;
        *(undefined2 *)((int)extraout_A0_03 + 0xb2) = 0;
        *(undefined2 *)(extraout_A0_03 + 0x2d) = 0;
        *extraout_A0_03 = 0x1fb86;
      }
    }
    (**(code **)(*_DAT_000257ee + 0x68))
              ((short)_DAT_000257ee,(char)((uint)*(undefined4 *)(_DAT_000297f4 + 0x80) >> 0x10));
    _DAT_00028868 = extraout_A0_04;
  }
  if (_DAT_00028868 == (int *)0x0) {
    FUN_00001bf0(0);
  }
  uStack_d7 = 0;
  uStack_e9 = 0;
  (**(code **)(*_DAT_00028868 + 0x400))();
  uVar13 = (undefined1)((uint)extraout_A0_05 >> 0x10);
  uVar12 = uVar13;
  FUN_00001bf0((char)extraout_A0_05);
  (**(code **)(*_DAT_00028868 + 0x188))((char)_DAT_00028868,0x6d65);
  uVar18 = (undefined2)((uint)extraout_A0_06 >> 0x10);
  FUN_00001bf0((short)extraout_A0_06);
  cVar7 = (char)((uint)param_1 >> 0x10);
  func_0x00007320((char)auStack_27e,(char)_DAT_00015dee * 'B' + (char)_DAT_0002884c + -0x38,uVar18,
                  uVar12);
  (**(code **)(*extraout_A0_06 + 1000))((char)extraout_A0_06,extraout_A0b);
  uVar18 = (undefined2)extraout_A0_05;
  switch(_DAT_00015df0) {
  case 0:
    uStack_f2 = 0x14;
    uStack_ee = 0xf5;
    func_0x000048f0(uVar18,0x6b,(short)((uint)&uStack_f2 >> 0x10));
    for (sVar5 = 0; uVar18 = SUB42(extraout_A0_07,0), sVar5 < 2; sVar5 = sVar5 + 1) {
      (**(code **)(*extraout_A0_07 + 0x188))(uVar18,(char)sVar5 + '1');
      if (extraout_A0_08 != (int *)0x0) {
        if (*(short *)((int)extraout_A0_08 + 0x7e) != 5) {
          *(undefined2 *)((int)extraout_A0_08 + 0x7e) = 5;
        }
        sVar6 = (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
        if ((sVar6 != *(short *)(extraout_A0_08 + 0x1f)) &&
           (*(short *)(extraout_A0_08 + 0x1f) = sVar6, cVar7 != '\0')) {
          (**(code **)(*extraout_A0_08 + 0x26c))();
        }
      }
    }
    sStack_114 = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      uVar12 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
    }
    else {
      uVar12 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(0,uVar12);
    func_0x000076d0((char)acStack_36,extraout_A0w);
    (**(code **)(*extraout_A0_07 + 0x188))((char)extraout_A0_07,0x636f);
    if (extraout_A0_09 != (int *)0x0) {
      func_0x00007320((short)auStack_37e,(char)acStack_36);
      (**(code **)(*extraout_A0_09 + 1000))((short)extraout_A0_09,extraout_A0b_00);
    }
    sStack_116 = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      uVar12 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
    }
    else {
      uVar12 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(1,uVar12);
    func_0x000076d0((char)acStack_36,extraout_A0w_00);
    (**(code **)(*extraout_A0_07 + 0x188))((char)extraout_A0_07,0x6665);
    if (extraout_A0_10 != (int *)0x0) {
      func_0x00007320((short)auStack_47e,(char)acStack_36);
      (**(code **)(*extraout_A0_10 + 1000))((short)extraout_A0_10,extraout_A0b_01);
    }
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(3);
        pcVar9 = acStack_36;
        pcVar10 = extraout_A0_12;
        do {
          cVar1 = *pcVar10;
          *pcVar9 = cVar1;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
      }
      else {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(4,(char)_DAT_0002884c +
                          *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
        func_0x000076d0((char)acStack_36,extraout_A0w_01);
      }
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(2);
      pcVar9 = acStack_36;
      pcVar10 = extraout_A0_11;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
    }
    (**(code **)(*extraout_A0_07 + 0x188))(uVar18,0x65);
    if (extraout_A0_13 != (int *)0x0) {
      func_0x00007320((short)auStack_57e,(char)acStack_36);
      (**(code **)(*extraout_A0_13 + 1000))((short)extraout_A0_13,extraout_A0b_02);
    }
    (**(code **)(*extraout_A0_07 + 0x188))(uVar18,0x74);
    if (extraout_A0_14 != (int *)0x0) {
      (**(code **)(*extraout_A0_14 + 0x334))();
    }
    if ((*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                              _DAT_00028850 +
                             *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                   + _DAT_0002884c + 0x711) == '\n') &&
       ((*(short *)(_DAT_0002884c + 0x132) == 0 ||
        ((int)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == (int)_DAT_00028846)))) {
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        (**(code **)(*extraout_A0_07 + 0x188))(uVar18,(char)sVar5 + '1');
        if (extraout_A0_15 != (int *)0x0) {
          uVar19 = SUB42(extraout_A0_15,0);
          uVar13 = 0xce;
          func_0x00004768(uVar19,*(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
          uVar12 = 0xe0;
          func_0x00004778(uVar19,0,uVar13);
          (**(code **)(*extraout_A0_15 + 0x334))(uVar19,uVar12);
        }
      }
    }
    else {
      if (extraout_A0_14 != (int *)0x0) {
        *(short *)((int)extraout_A0_14 + 0xaa) = _DAT_00015dee;
      }
      uStack_e9 = 1;
      for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
        (**(code **)(*extraout_A0_07 + 0x188))(uVar18,(char)sVar5 + '1');
        if (extraout_A0_16 != (int *)0x0) {
          (**(code **)(*extraout_A0_16 + 0x334))();
        }
      }
    }
    if (extraout_A0_14 != (int *)0x0) {
      (**(code **)(*extraout_A0_14 + 0x334))();
    }
    (**(code **)(*extraout_A0_07 + 0x188))(uVar18,0x69);
    for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
      iStack_11e = _DAT_00015dee * 0x42 + _DAT_0002884c;
      iStack_122 = sVar5 * 0x14 + _DAT_0002884c;
      if ((*(short *)(iStack_11e + 0x15c4) == *(short *)(iStack_122 + 0x194)) &&
         (*(short *)(iStack_11e + 0x15c6) == *(short *)(iStack_122 + 0x196))) {
        if (extraout_A0_17 != (int *)0x0) {
          if (*(short *)((int)extraout_A0_17 + 0x7e) != 6) {
            *(undefined2 *)((int)extraout_A0_17 + 0x7e) = 6;
          }
          if ((sVar5 != *(short *)(extraout_A0_17 + 0x1f)) &&
             (*(short *)(extraout_A0_17 + 0x1f) = sVar5, cVar7 != '\0')) {
            (**(code **)(*extraout_A0_17 + 0x26c))();
          }
          uStack_d7 = 1;
        }
        break;
      }
    }
    if (extraout_A0_17 != (int *)0x0) {
      (**(code **)(*extraout_A0_17 + 0x334))();
    }
    FUN_00002ede(_DAT_00015dee,(char)auStack_ae,(short)auStack_86,(char)auStack_5e);
    for (sVar5 = 0; sVar5 < 3; sVar5 = sVar5 + 1) {
      (**(code **)(*extraout_A0_07 + 0x188))(uVar18,(char)sVar5 + '1');
      if (extraout_A0_18 != (int *)0x0) {
        func_0x00007320((short)auStack_67e,(char)auStack_ae + (char)sVar5 * '(');
        (**(code **)(*extraout_A0_18 + 1000))((short)extraout_A0_18,extraout_A0b_03);
      }
    }
    break;
  case 1:
    uStack_112 = 0x14;
    uStack_10e = 0xf5;
    func_0x000048f0(uVar18,0x6b,(short)((uint)&uStack_112 >> 0x10));
    for (sVar5 = 0; sVar5 < 2; sVar5 = sVar5 + 1) {
      (**(code **)(*extraout_A0_46 + 0x188))((short)extraout_A0_46,(char)sVar5 + '1');
      if (extraout_A0_47 != (int *)0x0) {
        if (*(short *)((int)extraout_A0_47 + 0x7e) != 5) {
          *(undefined2 *)((int)extraout_A0_47 + 0x7e) = 5;
        }
        sVar6 = (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
        if ((sVar6 != *(short *)(extraout_A0_47 + 0x1f)) &&
           (*(short *)(extraout_A0_47 + 0x1f) = sVar6, cVar7 != '\0')) {
          (**(code **)(*extraout_A0_47 + 0x26c))();
        }
      }
    }
    sStack_118 = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      uVar12 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
    }
    else {
      uVar12 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(0,uVar12);
    func_0x000076d0((char)acStack_36,extraout_A0w_05);
    (**(code **)(*extraout_A0_46 + 0x188))((char)extraout_A0_46,0x636f);
    if (extraout_A0_48 != (int *)0x0) {
      func_0x00007320((short)auStack_f7e,(char)acStack_36);
      (**(code **)(*extraout_A0_48 + 1000))((short)extraout_A0_48,extraout_A0b_11);
    }
    sStack_11a = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      uVar12 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
    }
    else {
      uVar12 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(1,uVar12);
    func_0x000076d0((char)acStack_36,extraout_A0w_06);
    (**(code **)(*extraout_A0_46 + 0x188))((char)extraout_A0_46,0x6665);
    if (extraout_A0_49 != (int *)0x0) {
      func_0x00007320((short)auStack_107e,(char)acStack_36);
      (**(code **)(*extraout_A0_49 + 1000))((short)extraout_A0_49,extraout_A0b_12);
    }
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(3);
        pcVar9 = acStack_36;
        pcVar10 = extraout_A0_51;
        do {
          cVar7 = *pcVar10;
          *pcVar9 = cVar7;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar7 != '\0');
      }
      else {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(4,(char)_DAT_0002884c +
                          *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
        func_0x000076d0((char)acStack_36,extraout_A0w_07);
      }
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(2);
      pcVar9 = acStack_36;
      pcVar10 = extraout_A0_50;
      do {
        cVar7 = *pcVar10;
        *pcVar9 = cVar7;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar7 != '\0');
    }
    (**(code **)(*extraout_A0_46 + 0x188))((short)extraout_A0_46,0x65);
    if (extraout_A0_52 != (int *)0x0) {
      func_0x00007320((short)auStack_117e,(char)acStack_36);
      (**(code **)(*extraout_A0_52 + 1000))((short)extraout_A0_52,extraout_A0b_13);
    }
    break;
  case 2:
    uStack_102 = 0x14;
    uStack_fe = 0xf5;
    func_0x000048f0(uVar18,0x6b,(short)((uint)&uStack_102 >> 0x10));
    iStack_e0 = _DAT_00015dee * 0x42 + _DAT_0002884c;
    bVar11 = *(short *)(iStack_e0 + 0x15f6) == 0;
    if (!bVar11) {
      unaff_D6w = func_0x00004938((char)*(undefined2 *)(iStack_e0 + 0x15fa));
    }
    uVar18 = SUB42(extraout_A0_24,0);
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x65);
    for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
      iStack_126 = _DAT_00015dee * 0x42 + _DAT_0002884c;
      iStack_12a = sVar5 * 0x14 + _DAT_0002884c;
      if ((*(short *)(iStack_126 + 0x15c4) == *(short *)(iStack_12a + 0x194)) &&
         (*(short *)(iStack_126 + 0x15c6) == *(short *)(iStack_12a + 0x196))) {
        if (extraout_A0_25 != (int *)0x0) {
          if (*(short *)((int)extraout_A0_25 + 0x7e) != 6) {
            *(undefined2 *)((int)extraout_A0_25 + 0x7e) = 6;
          }
          if ((sVar5 != *(short *)(extraout_A0_25 + 0x1f)) &&
             (*(short *)(extraout_A0_25 + 0x1f) = sVar5, cVar7 != '\0')) {
            (**(code **)(*extraout_A0_25 + 0x26c))();
          }
          uStack_d7 = 1;
        }
        break;
      }
    }
    if (extraout_A0_25 != (int *)0x0) {
      (**(code **)(*extraout_A0_25 + 0x334))();
    }
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
      pcVar9 = acStack_36;
      pcVar10 = &DAT_00015dc2;
      do {
        cVar7 = *pcVar10;
        *pcVar9 = cVar7;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar7 != '\0');
    }
    else {
      iStack_12e = _DAT_00015dee * 0x42 + _DAT_0002884c;
      func_0x000076d0((char)acStack_36,0x5dc4,*(undefined1 *)(iStack_12e + 0x15f1));
    }
    if (!bVar11) {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(1);
      func_0x00007708((short)acStack_36,extraout_A0b_09);
      pcVar9 = acStack_174;
      pcVar10 = (char *)(unaff_D6w * 0x42 + _DAT_0002884c + 0x15c8);
      do {
        cVar7 = *pcVar10;
        *pcVar9 = cVar7;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar7 != '\0');
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x72);
    if (extraout_A0_26 != 0) {
      func_0x00004768((short)extraout_A0_26,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    uVar12 = SUB41(extraout_A0_24,0);
    uVar19 = (undefined2)((uint)extraout_A0_24 >> 0x10);
    if (bVar11) {
      func_0x00007320((short)auStack_d7e,(char)acStack_36);
      uVar20 = (undefined2)((uint)extraout_A0_28 >> 0x10);
      uVar17 = 0x74;
      uVar16 = 0x50;
      uVar14 = uVar19;
      func_0x00006e38(uVar12,0x7232,(char)extraout_A0_28);
      uVar15 = 2;
      uVar13 = 0x74;
      func_0x00006e38(uVar12,0x7233,0x76,uVar14,uVar17,uVar20);
      func_0x00006e38(extraout_A0_24,0x73747234,0x5b76,uVar19,uVar13,uVar15,uVar16);
    }
    else {
      uVar15 = 2;
      uVar13 = 0x74;
      uVar16 = 0xe4;
      uVar14 = uVar19;
      func_0x00006e38(uVar12,0x7232,0x76);
      func_0x00007320((short)auStack_b7e,(char)acStack_36,uVar14,uVar13,uVar15);
      uVar14 = (undefined2)((uint)extraout_A0_27 >> 0x10);
      uVar13 = 0x74;
      func_0x00006e38(uVar12,0x7233,(char)extraout_A0_27);
      func_0x00007320(auStack_c7e,(short)acStack_174,uVar19,uVar13,uVar14,uVar16);
      func_0x00006e38(extraout_A0_24,0x73747234,extraout_A0w_03);
    }
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      (**(code **)(*extraout_A0_24 + 0x188))(uVar18,(char)sVar5 + '1');
      sVar6 = (short)*(char *)((int)sVar5 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da);
      uVar19 = SUB42(extraout_A0_29,0);
      if (sVar6 < 0) {
        if (extraout_A0_29 != (int *)0x0) {
          (**(code **)(*extraout_A0_29 + 0x334))();
        }
      }
      else {
        if (sVar6 == _DAT_00015de8) {
          sStack_e6 = _DAT_00028846 + 2;
          unaff_D7w = sVar5;
        }
        else {
          sStack_e6 = 1;
        }
        if (extraout_A0_29 != (int *)0x0) {
          uVar16 = 0x12;
          func_0x00004768(uVar19,*(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
          uVar13 = 0x22;
          func_0x00004778(uVar19,0,uVar16);
          (**(code **)(*extraout_A0_29 + 0x334))(uVar19,uVar13);
        }
      }
    }
    if (-1 < _DAT_00015de8) {
      iStack_dc = (int)unaff_D7w + _DAT_00015dee * 0x42 + _DAT_0002884c;
      FUN_00000714(1,(short)*(char *)(iStack_dc + 0x15ea),*(undefined1 *)(iStack_dc + 0x15e6),
                   _DAT_00015de8 * 6 + (short)_DAT_00028864,uVar12);
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x61);
    if (extraout_A0_30 != (int *)0x0) {
      (**(code **)(*extraout_A0_30 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x79);
    if (extraout_A0_31 != (int *)0x0) {
      (**(code **)(*extraout_A0_31 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x65);
    if (extraout_A0_32 != (int *)0x0) {
      (**(code **)(*extraout_A0_32 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x74);
    if (extraout_A0_33 != (int *)0x0) {
      (**(code **)(*extraout_A0_33 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x65);
    if (extraout_A0_34 != (int *)0x0) {
      (**(code **)(*extraout_A0_34 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x65);
    if (extraout_A0_35 != (int *)0x0) {
      (**(code **)(*extraout_A0_35 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x75);
    if (extraout_A0_36 != (int *)0x0) {
      (**(code **)(*extraout_A0_36 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x31);
    if (extraout_A0_37 != (int *)0x0) {
      (**(code **)(*extraout_A0_37 + 0x334))();
    }
    (**(code **)(*extraout_A0_24 + 0x188))(uVar18,0x32);
    if (extraout_A0_38 != (int *)0x0) {
      (**(code **)(*extraout_A0_38 + 0x334))();
    }
    break;
  case 3:
    uStack_10a = 0x14;
    uStack_106 = 0xf5;
    func_0x000048f0(uVar18,0x6b,(short)((uint)&uStack_10a >> 0x10));
    asStack_d6[9] = -1;
    asStack_d6[8] = -1;
    iStack_e4 = _DAT_00015dee * 0x42 + _DAT_0002884c;
    if (*(short *)(iStack_e4 + 0x15f6) != 0) {
      sVar6 = func_0x00004938((char)*(undefined2 *)(iStack_e4 + 0x15fa));
      sVar5 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar2 = sVar5 + -1, sVar5 != 0) {
        psStack_132 = (short *)(sVar2 * 0x16 + _DAT_00028854);
        sVar5 = sVar2;
        if (((((int)_DAT_00015dee == (int)*(char *)((int)psStack_132 + 9)) && (*psStack_132 == -1))
            && ((int)sVar6 == (uint)(*(int *)(_DAT_00028854 + 0xf + sVar2 * 0x16) << 1) >> 0x19)) &&
           (iStack_136 = sVar2 * 0x16 + _DAT_00028854,
           (int)_DAT_00028846 == (int)*(char *)(iStack_136 + 5))) {
          if (*(char *)(iStack_136 + 0x10) == 'e') {
            asStack_d6[8] = (short)*(char *)(_DAT_00028854 + 4 + sVar2 * 0x16);
          }
          else {
            asStack_d6[9] = (short)*(char *)(_DAT_00028854 + 4 + sVar2 * 0x16);
          }
        }
      }
    }
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
      pcVar9 = acStack_36;
      pcVar10 = &DAT_00015dc2;
      do {
        cVar7 = *pcVar10;
        *pcVar9 = cVar7;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar7 != '\0');
    }
    else {
      iStack_13a = _DAT_00015dee * 0x42 + _DAT_0002884c;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(1,*(undefined1 *)(iStack_13a + 0x15f1));
      func_0x000076d0((char)acStack_36,extraout_A0w_04);
    }
    uVar18 = SUB42(extraout_A0_39,0);
    (**(code **)(*extraout_A0_39 + 0x188))(uVar18,0x65);
    if (extraout_A0_40 != 0) {
      func_0x00004768((short)extraout_A0_40,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    (**(code **)(*extraout_A0_39 + 0x188))(uVar18,0x72);
    if (extraout_A0_41 != (int *)0x0) {
      func_0x00007320((short)auStack_e7e,(char)acStack_36);
      (**(code **)(*extraout_A0_41 + 1000))((short)extraout_A0_41,extraout_A0b_10);
    }
    (**(code **)(*extraout_A0_39 + 0x188))(uVar18,0x31);
    if (extraout_A0_42 != 0) {
      func_0x00004768((short)extraout_A0_42,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    (**(code **)(*extraout_A0_39 + 0x188))(uVar18,0x32);
    if (extraout_A0_43 != 0) {
      func_0x00004768((short)extraout_A0_43,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    func_0x000032b8((short)((uint)asStack_17c >> 0x10),(char)((uint)&sStack_17e >> 0x10));
    sStack_e8 = 0;
    sVar6 = 0;
    asStack_d6[7] = 0xffff;
    asStack_d6[6] = 0xffff;
    asStack_d6[5] = 0xffff;
    asStack_d6[4] = 0xffff;
    asStack_d6[3] = 0xffff;
    asStack_d6[2] = 0xffff;
    asStack_d6[1] = 0xffff;
    asStack_d6[0] = -1;
    for (sVar5 = 0; sVar5 < sStack_17e; sVar5 = sVar5 + 1) {
      sVar2 = asStack_17c[sVar5];
      sVar8 = *(short *)(_DAT_0002884c + 0x182);
      while (((sVar4 = sStack_e8, sVar3 = sVar8 + -1, sVar8 != 0 && (sVar6 < 4)) && (sStack_e8 < 4))
            ) {
        psStack_13e = (short *)(sVar3 * 0x16 + _DAT_00028854);
        sVar8 = sVar3;
        if ((((int)sVar2 == (int)*(char *)((int)psStack_13e + 9)) && (*psStack_13e == -1)) &&
           ((int)_DAT_00015dee == (uint)(*(int *)(_DAT_00028854 + 0xf + sVar3 * 0x16) << 1) >> 0x19)
           ) {
          iStack_142 = sVar3 * 0x16 + _DAT_00028854;
          if ((int)_DAT_00028846 == (int)*(char *)(iStack_142 + 5)) {
            if (*(char *)(iStack_142 + 0x10) == 'e') {
              sStack_e8 = sStack_e8 + 1;
              asStack_d6[sVar4] = (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16);
            }
            else {
              asStack_d6[sVar6 + 4] = (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16);
              sVar6 = sVar6 + 1;
            }
          }
        }
      }
    }
    for (sVar5 = 0; sVar5 < 4; sVar5 = sVar5 + 1) {
      (**(code **)(*extraout_A0_39 + 0x188))(uVar18,(char)sVar5 + '1');
      if (extraout_A0_44 != 0) {
        func_0x00004768((short)extraout_A0_44,
                        *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
      }
      (**(code **)(*extraout_A0_39 + 0x188))(uVar18,(char)sVar5 + '5');
      if (extraout_A0_45 != 0) {
        func_0x00004768((short)extraout_A0_45,
                        *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
      }
    }
    uVar12 = 0;
    FUN_000032c0();
    FUN_000032c0(uVar12);
    break;
  case 4:
    uStack_fa = 0x14;
    uStack_f6 = 0xf5;
    uVar16 = SUB41(&uStack_fa,0);
    uVar19 = 0xce9;
    uVar12 = 0x62;
    func_0x000048f0(uVar18,0x6b,(short)((uint)&uStack_fa >> 0x10));
    func_0x00007320((char)auStack_77e,_DAT_00015dee * 0x20 + (short)_DAT_0002884c + 0x816,uVar13,
                    uVar12,uVar19,uVar16);
    (**(code **)(*extraout_A0_06 + 1000))((char)extraout_A0_06,extraout_A0w_02);
    if (*(char *)(_DAT_00015dee * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      sVar5 = 0;
    }
    else {
      sVar5 = _DAT_00015dee % 5 + 1;
    }
    uVar18 = SUB42(extraout_A0_19,0);
    (**(code **)(*extraout_A0_19 + 0x188))(uVar18,0x6e);
    if (extraout_A0_20 != 0) {
      func_0x00003b70((short)extraout_A0_20,(char)((uint)(sVar5 * 8 + 0x28870) >> 0x10),0x24);
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(*(undefined1 *)(_DAT_00015dee * 0x20 + _DAT_0002884c + 0x82a));
    func_0x000076d0((short)acStack_36,extraout_A0b_04);
    (**(code **)(*extraout_A0_19 + 0x188))(uVar18,0x65);
    if (extraout_A0_21 != (int *)0x0) {
      func_0x00007320((short)auStack_87e,(char)acStack_36);
      (**(code **)(*extraout_A0_21 + 1000))((short)extraout_A0_21,extraout_A0b_05);
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8((*(byte *)(_DAT_00015dea * 0xe0 + _DAT_00028850 + 1 + _DAT_00015dec * 2) & 0x40)
                    != 0);
    func_0x000076d0((short)acStack_36,extraout_A0b_06);
    (**(code **)(*extraout_A0_19 + 0x188))(uVar18,0x6c);
    if (extraout_A0_22 != (int *)0x0) {
      func_0x00007320((short)auStack_97e,(char)acStack_36);
      (**(code **)(*extraout_A0_22 + 1000))((short)extraout_A0_22,extraout_A0b_07);
    }
    FUN_00002ede(_DAT_00015dee,(char)auStack_ae,(short)auStack_86,(char)auStack_5e);
    for (sVar5 = 0; sVar5 < 3; sVar5 = sVar5 + 1) {
      (**(code **)(*extraout_A0_19 + 0x188))(uVar18,(char)sVar5 + '0');
      if (extraout_A0_23 != (int *)0x0) {
        func_0x00007320((short)auStack_a7e,(char)auStack_ae + (char)sVar5 * '(');
        (**(code **)(*extraout_A0_23 + 1000))((short)extraout_A0_23,extraout_A0b_08);
      }
    }
  }
  uVar12 = 0x6e;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6f);
  if (extraout_A0_53 != (int *)0x0) {
    uVar18 = (undefined2)((uint)extraout_A0_53 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_53 + 0x334))();
      (**(code **)(*extraout_A0_53 + 0x70))((char)extraout_A0_53,uVar18,uVar12);
    }
    else {
      (**(code **)(*extraout_A0_53 + 0x3a8))();
    }
  }
  uVar12 = 0x75;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6c);
  if (extraout_A0_54 != (int *)0x0) {
    uVar18 = (undefined2)((uint)extraout_A0_54 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_54 + 0x334))();
      (**(code **)(*extraout_A0_54 + 0x70))((char)extraout_A0_54,uVar18,uVar12);
    }
    else {
      (**(code **)(*extraout_A0_54 + 0x3a8))();
    }
  }
  uVar12 = 0x72;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,100);
  if (extraout_A0_55 != (int *)0x0) {
    uVar18 = (undefined2)((uint)extraout_A0_55 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_55 + 0x334))();
      (**(code **)(*extraout_A0_55 + 0x70))((char)extraout_A0_55,uVar18,uVar12);
    }
    else {
      (**(code **)(*extraout_A0_55 + 0x3a8))();
    }
  }
  uVar12 = 0x65;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
  if (extraout_A0_56 != (int *)0x0) {
    uVar18 = (undefined2)((uint)extraout_A0_56 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_56 + 0x334))();
      (**(code **)(*extraout_A0_56 + 0x70))((char)extraout_A0_56,uVar18,uVar12);
    }
    else {
      (**(code **)(*extraout_A0_56 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_000013d8 at 000013d8
// Size: 3398 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013d8(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char unaff_D3b;
  short sVar6;
  short sVar7;
  short unaff_D6w;
  short unaff_D7w;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  undefined1 extraout_A0b;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined2 extraout_A0w;
  int *extraout_A0_03;
  undefined1 extraout_A0b_00;
  undefined2 extraout_A0w_00;
  int *extraout_A0_04;
  undefined1 extraout_A0b_01;
  char *extraout_A0_05;
  char *extraout_A0_06;
  undefined2 extraout_A0w_01;
  int *extraout_A0_07;
  undefined1 extraout_A0b_02;
  int *extraout_A0_08;
  int *extraout_A0_09;
  int *extraout_A0_10;
  int *extraout_A0_11;
  int *extraout_A0_12;
  undefined1 extraout_A0b_03;
  int *extraout_A0_13;
  undefined2 extraout_A0w_02;
  int extraout_A0_14;
  undefined1 extraout_A0b_04;
  int *extraout_A0_15;
  undefined1 extraout_A0b_05;
  undefined1 extraout_A0b_06;
  int *extraout_A0_16;
  undefined1 extraout_A0b_07;
  int *extraout_A0_17;
  undefined1 extraout_A0b_08;
  int *extraout_A0_18;
  int *extraout_A0_19;
  undefined1 extraout_A0b_09;
  int extraout_A0_20;
  undefined4 extraout_A0_21;
  undefined2 extraout_A0w_03;
  undefined4 extraout_A0_22;
  int *extraout_A0_23;
  int *extraout_A0_24;
  int *extraout_A0_25;
  int *extraout_A0_26;
  int *extraout_A0_27;
  int *extraout_A0_28;
  int *extraout_A0_29;
  int *extraout_A0_30;
  int *extraout_A0_31;
  int *extraout_A0_32;
  int *extraout_A0_33;
  int iVar8;
  undefined2 extraout_A0w_04;
  int extraout_A0_34;
  int *extraout_A0_35;
  undefined1 extraout_A0b_10;
  int extraout_A0_36;
  int extraout_A0_37;
  short *psVar9;
  int extraout_A0_38;
  int extraout_A0_39;
  int *extraout_A0_40;
  int *extraout_A0_41;
  undefined2 extraout_A0w_05;
  int *extraout_A0_42;
  undefined1 extraout_A0b_11;
  undefined2 extraout_A0w_06;
  int *extraout_A0_43;
  undefined1 extraout_A0b_12;
  char *extraout_A0_44;
  char *extraout_A0_45;
  char *pcVar10;
  undefined2 extraout_A0w_07;
  int *extraout_A0_46;
  undefined1 extraout_A0b_13;
  int *extraout_A0_47;
  int *extraout_A0_48;
  int *extraout_A0_49;
  int *extraout_A0_50;
  char *pcVar11;
  int unaff_A6;
  bool bVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  
  *(undefined1 *)(unaff_A6 + -0xd3) = 0;
  *(undefined1 *)(unaff_A6 + -0xe5) = 0;
  (**(code **)(*_DAT_00028868 + 0x400))();
  uVar14 = (undefined1)((uint)extraout_A0 >> 0x10);
  uVar13 = uVar14;
  FUN_00001bf0((char)extraout_A0);
  (**(code **)(*_DAT_00028868 + 0x188))((char)_DAT_00028868,0x6d65);
  uVar19 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  FUN_00001bf0((short)extraout_A0_00);
  cVar2 = (char)unaff_A6;
  func_0x00007320(cVar2 + -0x7a,(char)_DAT_00015dee * 'B' + (char)_DAT_0002884c + -0x38,uVar19,
                  uVar13);
  (**(code **)(*extraout_A0_00 + 1000))((char)extraout_A0_00,extraout_A0b);
  uVar19 = (undefined2)extraout_A0;
  sVar6 = (short)unaff_A6;
  switch(_DAT_00015df0) {
  case 0:
    *(undefined4 *)(unaff_A6 + -0xee) = 0x14;
    *(undefined4 *)(unaff_A6 + -0xea) = 0xf5;
    func_0x000048f0(uVar19,0x6b,(short)((uint)(unaff_A6 + -0xee) >> 0x10));
    for (sVar4 = 0; uVar19 = SUB42(extraout_A0_01,0), sVar4 < 2; sVar4 = sVar4 + 1) {
      (**(code **)(*extraout_A0_01 + 0x188))(uVar19,(char)sVar4 + '1');
      if (extraout_A0_02 != (int *)0x0) {
        if (*(short *)((int)extraout_A0_02 + 0x7e) != 5) {
          *(undefined2 *)((int)extraout_A0_02 + 0x7e) = 5;
        }
        sVar5 = (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
        if ((sVar5 != *(short *)(extraout_A0_02 + 0x1f)) &&
           (*(short *)(extraout_A0_02 + 0x1f) = sVar5, unaff_D3b != '\0')) {
          (**(code **)(*extraout_A0_02 + 0x26c))();
        }
      }
    }
    *(short *)(unaff_A6 + -0x110) = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x110) * 0x42 + _DAT_0002884c +
                                       0x15c6) * 0xe0 + _DAT_00028850 +
                            *(short *)(*(short *)(unaff_A6 + -0x110) * 0x42 + _DAT_0002884c + 0x15c4
                                      ) * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      uVar13 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
    }
    else {
      uVar13 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(0,uVar13);
    func_0x000076d0(cVar2 + -0x32,extraout_A0w);
    (**(code **)(*extraout_A0_01 + 0x188))((char)extraout_A0_01,0x636f);
    if (extraout_A0_03 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x37a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0b_00);
    }
    *(short *)(unaff_A6 + -0x112) = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x112) * 0x42 + _DAT_0002884c +
                                       0x15c6) * 0xe0 + _DAT_00028850 +
                            *(short *)(*(short *)(unaff_A6 + -0x112) * 0x42 + _DAT_0002884c + 0x15c4
                                      ) * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      uVar13 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
    }
    else {
      uVar13 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(1,uVar13);
    func_0x000076d0(cVar2 + -0x32,extraout_A0w_00);
    (**(code **)(*extraout_A0_01 + 0x188))((char)extraout_A0_01,0x6665);
    if (extraout_A0_04 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x47a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_04 + 1000))((short)extraout_A0_04,extraout_A0b_01);
    }
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(3);
        pcVar10 = (char *)(unaff_A6 + -0x32);
        pcVar11 = extraout_A0_06;
        do {
          cVar1 = *pcVar11;
          *pcVar10 = cVar1;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
      }
      else {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(4,(char)_DAT_0002884c +
                          *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
        func_0x000076d0(cVar2 + -0x32,extraout_A0w_01);
      }
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(2);
      pcVar10 = (char *)(unaff_A6 + -0x32);
      pcVar11 = extraout_A0_05;
      do {
        cVar1 = *pcVar11;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    }
    (**(code **)(*extraout_A0_01 + 0x188))(uVar19,0x65);
    if (extraout_A0_07 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x57a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_07 + 1000))((short)extraout_A0_07,extraout_A0b_02);
    }
    (**(code **)(*extraout_A0_01 + 0x188))(uVar19,0x74);
    if (extraout_A0_08 != (int *)0x0) {
      (**(code **)(*extraout_A0_08 + 0x334))();
    }
    if ((*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                              _DAT_00028850 +
                             *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                   + _DAT_0002884c + 0x711) == '\n') &&
       ((*(short *)(_DAT_0002884c + 0x132) == 0 ||
        ((int)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == (int)_DAT_00028846)))) {
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        (**(code **)(*extraout_A0_01 + 0x188))(uVar19,(char)sVar4 + '1');
        if (extraout_A0_09 != (int *)0x0) {
          uVar20 = SUB42(extraout_A0_09,0);
          uVar14 = 0xce;
          func_0x00004768(uVar20,*(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
          uVar13 = 0xe0;
          func_0x00004778(uVar20,0,uVar14);
          (**(code **)(*extraout_A0_09 + 0x334))(uVar20,uVar13);
        }
      }
    }
    else {
      if (extraout_A0_08 != (int *)0x0) {
        *(short *)((int)extraout_A0_08 + 0xaa) = _DAT_00015dee;
      }
      *(undefined1 *)(unaff_A6 + -0xe5) = 1;
      for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
        (**(code **)(*extraout_A0_01 + 0x188))(uVar19,(char)sVar4 + '1');
        if (extraout_A0_10 != (int *)0x0) {
          (**(code **)(*extraout_A0_10 + 0x334))();
        }
      }
    }
    if (extraout_A0_08 != (int *)0x0) {
      (**(code **)(*extraout_A0_08 + 0x334))();
    }
    (**(code **)(*extraout_A0_01 + 0x188))(uVar19,0x69);
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      *(int *)(unaff_A6 + -0x11a) = _DAT_00015dee * 0x42 + _DAT_0002884c;
      iVar8 = sVar4 * 0x14 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x11e) = iVar8;
      if ((*(short *)(*(int *)(unaff_A6 + -0x11a) + 0x15c4) == *(short *)(iVar8 + 0x194)) &&
         (*(short *)(*(int *)(unaff_A6 + -0x11a) + 0x15c6) == *(short *)(iVar8 + 0x196))) {
        if (extraout_A0_11 != (int *)0x0) {
          if (*(short *)((int)extraout_A0_11 + 0x7e) != 6) {
            *(undefined2 *)((int)extraout_A0_11 + 0x7e) = 6;
          }
          if ((sVar4 != *(short *)(extraout_A0_11 + 0x1f)) &&
             (*(short *)(extraout_A0_11 + 0x1f) = sVar4, unaff_D3b != '\0')) {
            (**(code **)(*extraout_A0_11 + 0x26c))();
          }
          *(undefined1 *)(unaff_A6 + -0xd3) = 1;
        }
        break;
      }
    }
    if (extraout_A0_11 != (int *)0x0) {
      (**(code **)(*extraout_A0_11 + 0x334))();
    }
    FUN_00002ede(_DAT_00015dee,cVar2 + 'V',sVar6 + -0x82,cVar2 + -0x5a);
    for (sVar4 = 0; sVar4 < 3; sVar4 = sVar4 + 1) {
      (**(code **)(*extraout_A0_01 + 0x188))(uVar19,(char)sVar4 + '1');
      if (extraout_A0_12 != (int *)0x0) {
        func_0x00007320(sVar6 + -0x67a,cVar2 + 'V' + (char)sVar4 * '(');
        (**(code **)(*extraout_A0_12 + 1000))((short)extraout_A0_12,extraout_A0b_03);
      }
    }
    break;
  case 1:
    *(undefined4 *)(unaff_A6 + -0x10e) = 0x14;
    *(undefined4 *)(unaff_A6 + -0x10a) = 0xf5;
    func_0x000048f0(uVar19,0x6b,(short)((uint)(unaff_A6 + -0x10e) >> 0x10));
    for (sVar4 = 0; sVar4 < 2; sVar4 = sVar4 + 1) {
      (**(code **)(*extraout_A0_40 + 0x188))((short)extraout_A0_40,(char)sVar4 + '1');
      if (extraout_A0_41 != (int *)0x0) {
        if (*(short *)((int)extraout_A0_41 + 0x7e) != 5) {
          *(undefined2 *)((int)extraout_A0_41 + 0x7e) = 5;
        }
        sVar5 = (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
        if ((sVar5 != *(short *)(extraout_A0_41 + 0x1f)) &&
           (*(short *)(extraout_A0_41 + 0x1f) = sVar5, unaff_D3b != '\0')) {
          (**(code **)(*extraout_A0_41 + 0x26c))();
        }
      }
    }
    *(short *)(unaff_A6 + -0x114) = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x114) * 0x42 + _DAT_0002884c +
                                       0x15c6) * 0xe0 + _DAT_00028850 +
                            *(short *)(*(short *)(unaff_A6 + -0x114) * 0x42 + _DAT_0002884c + 0x15c4
                                      ) * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      uVar13 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
    }
    else {
      uVar13 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(0,uVar13);
    func_0x000076d0(cVar2 + -0x32,extraout_A0w_05);
    (**(code **)(*extraout_A0_40 + 0x188))((char)extraout_A0_40,0x636f);
    if (extraout_A0_42 != (int *)0x0) {
      func_0x00007320(sVar6 + -0xf7a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_42 + 1000))((short)extraout_A0_42,extraout_A0b_11);
    }
    *(short *)(unaff_A6 + -0x116) = _DAT_00015dee;
    if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c +
                                       0x15c6) * 0xe0 + _DAT_00028850 +
                            *(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c4
                                      ) * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
      uVar13 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
    }
    else {
      uVar13 = 0;
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(1,uVar13);
    func_0x000076d0(cVar2 + -0x32,extraout_A0w_06);
    (**(code **)(*extraout_A0_40 + 0x188))((char)extraout_A0_40,0x6665);
    if (extraout_A0_43 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x107a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_43 + 1000))((short)extraout_A0_43,extraout_A0b_12);
    }
    if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18)
                  + _DAT_0002884c + 0x711) == '\n') {
      if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(3);
        pcVar10 = (char *)(unaff_A6 + -0x32);
        pcVar11 = extraout_A0_45;
        do {
          cVar1 = *pcVar11;
          *pcVar10 = cVar1;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
      }
      else {
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8(4,(char)_DAT_0002884c +
                          *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
        func_0x000076d0(cVar2 + -0x32,extraout_A0w_07);
      }
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(2);
      pcVar10 = (char *)(unaff_A6 + -0x32);
      pcVar11 = extraout_A0_44;
      do {
        cVar1 = *pcVar11;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    }
    (**(code **)(*extraout_A0_40 + 0x188))((short)extraout_A0_40,0x65);
    if (extraout_A0_46 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x117a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_46 + 1000))((short)extraout_A0_46,extraout_A0b_13);
    }
    break;
  case 2:
    *(undefined4 *)(unaff_A6 + -0xfe) = 0x14;
    *(undefined4 *)(unaff_A6 + -0xfa) = 0xf5;
    func_0x000048f0(uVar19,0x6b,(short)((uint)(unaff_A6 + -0xfe) >> 0x10));
    iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
    *(int *)(unaff_A6 + -0xdc) = iVar8;
    bVar12 = *(short *)(iVar8 + 0x15f6) == 0;
    if (!bVar12) {
      unaff_D6w = func_0x00004938((char)*(undefined2 *)(*(int *)(unaff_A6 + -0xdc) + 0x15fa));
    }
    uVar19 = SUB42(extraout_A0_18,0);
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x65);
    for (sVar4 = 0; sVar4 < 8; sVar4 = sVar4 + 1) {
      *(int *)(unaff_A6 + -0x122) = _DAT_00015dee * 0x42 + _DAT_0002884c;
      iVar8 = sVar4 * 0x14 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x126) = iVar8;
      if ((*(short *)(*(int *)(unaff_A6 + -0x122) + 0x15c4) == *(short *)(iVar8 + 0x194)) &&
         (*(short *)(*(int *)(unaff_A6 + -0x122) + 0x15c6) == *(short *)(iVar8 + 0x196))) {
        if (extraout_A0_19 != (int *)0x0) {
          if (*(short *)((int)extraout_A0_19 + 0x7e) != 6) {
            *(undefined2 *)((int)extraout_A0_19 + 0x7e) = 6;
          }
          if ((sVar4 != *(short *)(extraout_A0_19 + 0x1f)) &&
             (*(short *)(extraout_A0_19 + 0x1f) = sVar4, unaff_D3b != '\0')) {
            (**(code **)(*extraout_A0_19 + 0x26c))();
          }
          *(undefined1 *)(unaff_A6 + -0xd3) = 1;
        }
        break;
      }
    }
    if (extraout_A0_19 != (int *)0x0) {
      (**(code **)(*extraout_A0_19 + 0x334))();
    }
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
      pcVar10 = (char *)(unaff_A6 + -0x32);
      pcVar11 = &DAT_00015dc2;
      do {
        cVar1 = *pcVar11;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    }
    else {
      iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x12a) = iVar8;
      func_0x000076d0(cVar2 + -0x32,0x5dc4,*(undefined1 *)(iVar8 + 0x15f1));
    }
    if (!bVar12) {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(1);
      func_0x00007708(sVar6 + -0x32,extraout_A0b_09);
      pcVar10 = (char *)(unaff_A6 + -0x170);
      pcVar11 = (char *)(unaff_D6w * 0x42 + _DAT_0002884c + 0x15c8);
      do {
        cVar1 = *pcVar11;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x72);
    if (extraout_A0_20 != 0) {
      func_0x00004768((short)extraout_A0_20,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    uVar13 = SUB41(extraout_A0_18,0);
    uVar20 = (undefined2)((uint)extraout_A0_18 >> 0x10);
    if (bVar12) {
      func_0x00007320(sVar6 + -0xd7a,cVar2 + -0x32);
      uVar21 = (undefined2)((uint)extraout_A0_22 >> 0x10);
      uVar18 = 0x74;
      uVar17 = 0x50;
      uVar15 = uVar20;
      func_0x00006e38(uVar13,0x7232,(char)extraout_A0_22);
      uVar16 = 2;
      uVar14 = 0x74;
      func_0x00006e38(uVar13,0x7233,0x76,uVar15,uVar18,uVar21);
      func_0x00006e38(extraout_A0_18,0x73747234,0x5b76,uVar20,uVar14,uVar16,uVar17);
    }
    else {
      uVar16 = 2;
      uVar14 = 0x74;
      uVar17 = 0xe4;
      uVar15 = uVar20;
      func_0x00006e38(uVar13,0x7232,0x76);
      func_0x00007320(sVar6 + -0xb7a,cVar2 + -0x32,uVar15,uVar14,uVar16);
      uVar15 = (undefined2)((uint)extraout_A0_21 >> 0x10);
      uVar14 = 0x74;
      func_0x00006e38(uVar13,0x7233,(char)extraout_A0_21);
      func_0x00007320(unaff_A6 + -0xc7a,sVar6 + -0x170,uVar20,uVar14,uVar15,uVar17);
      func_0x00006e38(extraout_A0_18,0x73747234,extraout_A0w_03);
    }
    for (sVar6 = 0; sVar6 < 4; sVar6 = sVar6 + 1) {
      (**(code **)(*extraout_A0_18 + 0x188))(uVar19,(char)sVar6 + '1');
      sVar4 = (short)*(char *)((int)sVar6 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da);
      uVar20 = SUB42(extraout_A0_23,0);
      if (sVar4 < 0) {
        if (extraout_A0_23 != (int *)0x0) {
          (**(code **)(*extraout_A0_23 + 0x334))();
        }
      }
      else {
        if (sVar4 == _DAT_00015de8) {
          *(short *)(unaff_A6 + -0xe2) = _DAT_00028846 + 2;
          unaff_D7w = sVar6;
        }
        else {
          *(undefined2 *)(unaff_A6 + -0xe2) = 1;
        }
        if (extraout_A0_23 != (int *)0x0) {
          uVar17 = 0x12;
          func_0x00004768(uVar20,*(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
          uVar14 = 0x22;
          func_0x00004778(uVar20,0,uVar17);
          (**(code **)(*extraout_A0_23 + 0x334))(uVar20,uVar14);
        }
      }
    }
    if (-1 < _DAT_00015de8) {
      *(int *)(unaff_A6 + -0xd8) = (int)unaff_D7w + _DAT_00015dee * 0x42 + _DAT_0002884c;
      FUN_00000714(1,(short)*(char *)(*(int *)(unaff_A6 + -0xd8) + 0x15ea),
                   *(undefined1 *)(*(int *)(unaff_A6 + -0xd8) + 0x15e6),
                   _DAT_00015de8 * 6 + (short)_DAT_00028864,uVar13);
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x61);
    if (extraout_A0_24 != (int *)0x0) {
      (**(code **)(*extraout_A0_24 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x79);
    if (extraout_A0_25 != (int *)0x0) {
      (**(code **)(*extraout_A0_25 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x65);
    if (extraout_A0_26 != (int *)0x0) {
      (**(code **)(*extraout_A0_26 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x74);
    if (extraout_A0_27 != (int *)0x0) {
      (**(code **)(*extraout_A0_27 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x65);
    if (extraout_A0_28 != (int *)0x0) {
      (**(code **)(*extraout_A0_28 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x65);
    if (extraout_A0_29 != (int *)0x0) {
      (**(code **)(*extraout_A0_29 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x75);
    if (extraout_A0_30 != (int *)0x0) {
      (**(code **)(*extraout_A0_30 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x31);
    if (extraout_A0_31 != (int *)0x0) {
      (**(code **)(*extraout_A0_31 + 0x334))();
    }
    (**(code **)(*extraout_A0_18 + 0x188))(uVar19,0x32);
    if (extraout_A0_32 != (int *)0x0) {
      (**(code **)(*extraout_A0_32 + 0x334))();
    }
    break;
  case 3:
    *(undefined4 *)(unaff_A6 + -0x106) = 0x14;
    *(undefined4 *)(unaff_A6 + -0x102) = 0xf5;
    func_0x000048f0(uVar19,0x6b,(short)((uint)(unaff_A6 + -0x106) >> 0x10));
    *(undefined2 *)(unaff_A6 + -0xc0) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xc2) = 0xffff;
    iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
    *(int *)(unaff_A6 + -0xe0) = iVar8;
    if (*(short *)(iVar8 + 0x15f6) != 0) {
      sVar5 = func_0x00004938((char)*(undefined2 *)(*(int *)(unaff_A6 + -0xe0) + 0x15fa));
      sVar4 = *(short *)(_DAT_0002884c + 0x182);
      while (sVar7 = sVar4 + -1, sVar4 != 0) {
        psVar9 = (short *)(sVar7 * 0x16 + _DAT_00028854);
        *(short **)(unaff_A6 + -0x12e) = psVar9;
        sVar4 = sVar7;
        if ((((int)_DAT_00015dee == (int)*(char *)((int)psVar9 + 9)) && (*psVar9 == -1)) &&
           ((int)sVar5 == (uint)(*(int *)(_DAT_00028854 + 0xf + sVar7 * 0x16) << 1) >> 0x19)) {
          iVar8 = sVar7 * 0x16 + _DAT_00028854;
          *(int *)(unaff_A6 + -0x132) = iVar8;
          if ((int)_DAT_00028846 == (int)*(char *)(iVar8 + 5)) {
            if (*(char *)(iVar8 + 0x10) == 'e') {
              *(short *)(unaff_A6 + -0xc2) = (short)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16);
            }
            else {
              *(short *)(unaff_A6 + -0xc0) = (short)*(char *)(_DAT_00028854 + 4 + sVar7 * 0x16);
            }
          }
        }
      }
    }
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
      pcVar10 = (char *)(unaff_A6 + -0x32);
      pcVar11 = &DAT_00015dc2;
      do {
        cVar1 = *pcVar11;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    }
    else {
      iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x136) = iVar8;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(1,*(undefined1 *)(iVar8 + 0x15f1));
      func_0x000076d0(cVar2 + -0x32,extraout_A0w_04);
    }
    uVar19 = SUB42(extraout_A0_33,0);
    (**(code **)(*extraout_A0_33 + 0x188))(uVar19,0x65);
    if (extraout_A0_34 != 0) {
      func_0x00004768((short)extraout_A0_34,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    (**(code **)(*extraout_A0_33 + 0x188))(uVar19,0x72);
    if (extraout_A0_35 != (int *)0x0) {
      func_0x00007320(sVar6 + -0xe7a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_35 + 1000))((short)extraout_A0_35,extraout_A0b_10);
    }
    (**(code **)(*extraout_A0_33 + 0x188))(uVar19,0x31);
    if (extraout_A0_36 != 0) {
      func_0x00004768((short)extraout_A0_36,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    (**(code **)(*extraout_A0_33 + 0x188))(uVar19,0x32);
    if (extraout_A0_37 != 0) {
      func_0x00004768((short)extraout_A0_37,
                      *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
    }
    func_0x000032b8((short)((uint)(unaff_A6 + -0x178) >> 0x10),
                    (char)((uint)(unaff_A6 + -0x17a) >> 0x10));
    *(undefined2 *)(unaff_A6 + -0xe4) = 0;
    sVar4 = 0;
    *(undefined2 *)(unaff_A6 + -0xc4) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xc6) = 0xffff;
    *(undefined2 *)(unaff_A6 + -200) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xca) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xcc) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xce) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xd0) = 0xffff;
    *(undefined2 *)(unaff_A6 + -0xd2) = 0xffff;
    for (sVar6 = 0; sVar6 < *(short *)(unaff_A6 + -0x17a); sVar6 = sVar6 + 1) {
      sVar5 = *(short *)(unaff_A6 + -0x178 + sVar6 * 2);
      sVar7 = *(short *)(_DAT_0002884c + 0x182);
      while (((sVar3 = sVar7 + -1, sVar7 != 0 && (sVar4 < 4)) && (*(short *)(unaff_A6 + -0xe4) < 4))
            ) {
        psVar9 = (short *)(sVar3 * 0x16 + _DAT_00028854);
        *(short **)(unaff_A6 + -0x13a) = psVar9;
        sVar7 = sVar3;
        if ((((int)sVar5 == (int)*(char *)((int)psVar9 + 9)) && (*psVar9 == -1)) &&
           ((int)_DAT_00015dee == (uint)(*(int *)(_DAT_00028854 + 0xf + sVar3 * 0x16) << 1) >> 0x19)
           ) {
          iVar8 = sVar3 * 0x16 + _DAT_00028854;
          *(int *)(unaff_A6 + -0x13e) = iVar8;
          if ((int)_DAT_00028846 == (int)*(char *)(iVar8 + 5)) {
            if (*(char *)(iVar8 + 0x10) == 'e') {
              cVar2 = *(char *)(_DAT_00028854 + 4 + sVar3 * 0x16);
              sVar3 = *(short *)(unaff_A6 + -0xe4);
              *(short *)(unaff_A6 + -0xe4) = *(short *)(unaff_A6 + -0xe4) + 1;
              *(short *)(unaff_A6 + -0xd2 + sVar3 * 2) = (short)cVar2;
            }
            else {
              *(short *)(unaff_A6 + -0xca + sVar4 * 2) =
                   (short)*(char *)(_DAT_00028854 + 4 + sVar3 * 0x16);
              sVar4 = sVar4 + 1;
            }
          }
        }
      }
    }
    for (sVar6 = 0; sVar6 < 4; sVar6 = sVar6 + 1) {
      (**(code **)(*extraout_A0_33 + 0x188))(uVar19,(char)sVar6 + '1');
      if (extraout_A0_38 != 0) {
        func_0x00004768((short)extraout_A0_38,
                        *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
      }
      (**(code **)(*extraout_A0_33 + 0x188))(uVar19,(char)sVar6 + '5');
      if (extraout_A0_39 != 0) {
        func_0x00004768((short)extraout_A0_39,
                        *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9));
      }
    }
    uVar13 = 0;
    FUN_000032c0();
    FUN_000032c0(uVar13);
    break;
  case 4:
    *(undefined4 *)(unaff_A6 + -0xf6) = 0x14;
    *(undefined4 *)(unaff_A6 + -0xf2) = 0xf5;
    uVar17 = (undefined1)(unaff_A6 + -0xf6);
    uVar20 = 0xce9;
    uVar13 = 0x62;
    func_0x000048f0(uVar19,0x6b,(short)((uint)(unaff_A6 + -0xf6) >> 0x10));
    func_0x00007320(cVar2 + -0x7a,_DAT_00015dee * 0x20 + (short)_DAT_0002884c + 0x816,uVar14,uVar13,
                    uVar20,uVar17);
    (**(code **)(*extraout_A0_00 + 1000))((char)extraout_A0_00,extraout_A0w_02);
    if (*(char *)(_DAT_00015dee * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
      sVar4 = 0;
    }
    else {
      sVar4 = _DAT_00015dee % 5 + 1;
    }
    uVar19 = SUB42(extraout_A0_13,0);
    (**(code **)(*extraout_A0_13 + 0x188))(uVar19,0x6e);
    if (extraout_A0_14 != 0) {
      func_0x00003b70((short)extraout_A0_14,(char)((uint)(sVar4 * 8 + 0x28870) >> 0x10),0x24);
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(*(undefined1 *)(_DAT_00015dee * 0x20 + _DAT_0002884c + 0x82a));
    func_0x000076d0((short)(unaff_A6 + -0x32),extraout_A0b_04);
    (**(code **)(*extraout_A0_13 + 0x188))(uVar19,0x65);
    if (extraout_A0_15 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x87a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_15 + 1000))((short)extraout_A0_15,extraout_A0b_05);
    }
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8((*(byte *)(_DAT_00015dea * 0xe0 + _DAT_00028850 + 1 + _DAT_00015dec * 2) & 0x40)
                    != 0);
    func_0x000076d0((short)(unaff_A6 + -0x32),extraout_A0b_06);
    (**(code **)(*extraout_A0_13 + 0x188))(uVar19,0x6c);
    if (extraout_A0_16 != (int *)0x0) {
      func_0x00007320(sVar6 + -0x97a,cVar2 + -0x32);
      (**(code **)(*extraout_A0_16 + 1000))((short)extraout_A0_16,extraout_A0b_07);
    }
    FUN_00002ede(_DAT_00015dee,cVar2 + 'V',sVar6 + -0x82,cVar2 + -0x5a);
    for (sVar4 = 0; sVar4 < 3; sVar4 = sVar4 + 1) {
      (**(code **)(*extraout_A0_13 + 0x188))(uVar19,(char)sVar4 + '0');
      if (extraout_A0_17 != (int *)0x0) {
        func_0x00007320(sVar6 + -0xa7a,cVar2 + 'V' + (char)sVar4 * '(');
        (**(code **)(*extraout_A0_17 + 1000))((short)extraout_A0_17,extraout_A0b_08);
      }
    }
  }
  uVar13 = 0x6e;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6f);
  if (extraout_A0_47 != (int *)0x0) {
    uVar19 = (undefined2)((uint)extraout_A0_47 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_47 + 0x334))();
      (**(code **)(*extraout_A0_47 + 0x70))((char)extraout_A0_47,uVar19,uVar13);
    }
    else {
      (**(code **)(*extraout_A0_47 + 0x3a8))();
    }
  }
  uVar13 = 0x75;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6c);
  if (extraout_A0_48 != (int *)0x0) {
    uVar19 = (undefined2)((uint)extraout_A0_48 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_48 + 0x334))();
      (**(code **)(*extraout_A0_48 + 0x70))((char)extraout_A0_48,uVar19,uVar13);
    }
    else {
      (**(code **)(*extraout_A0_48 + 0x3a8))();
    }
  }
  uVar13 = 0x72;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,100);
  if (extraout_A0_49 != (int *)0x0) {
    uVar19 = (undefined2)((uint)extraout_A0_49 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_49 + 0x334))();
      (**(code **)(*extraout_A0_49 + 0x70))((char)extraout_A0_49,uVar19,uVar13);
    }
    else {
      (**(code **)(*extraout_A0_49 + 0x3a8))();
    }
  }
  uVar13 = 0x65;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
  if (extraout_A0_50 != (int *)0x0) {
    uVar19 = (undefined2)((uint)extraout_A0_50 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_50 + 0x334))();
      (**(code **)(*extraout_A0_50 + 0x70))((char)extraout_A0_50,uVar19,uVar13);
    }
    else {
      (**(code **)(*extraout_A0_50 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 237 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  char cVar1;
  int in_D0;
  short sVar2;
  int in_A0;
  undefined1 extraout_A0b;
  int *extraout_A0;
  undefined1 extraout_A0b_00;
  int *extraout_A0_00;
  undefined1 extraout_A0b_01;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *unaff_A2;
  short unaff_A6w;
  undefined2 uVar3;
  undefined1 uVar4;
  
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8((*(byte *)(in_D0 + in_A0 + 1 + _DAT_00015dec * 2) & 0x40) != 0);
  func_0x000076d0(unaff_A6w + -0x32,extraout_A0b);
  (**(code **)(*unaff_A2 + 0x188))();
  cVar1 = (char)unaff_A6w;
  if (extraout_A0 != (int *)0x0) {
    func_0x00007320(unaff_A6w + -0x97a,cVar1 + -0x32);
    (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,extraout_A0b_00);
  }
  FUN_00002ede(_DAT_00015dee,cVar1 + 'V',unaff_A6w + -0x82,cVar1 + -0x5a);
  for (sVar2 = 0; sVar2 < 3; sVar2 = sVar2 + 1) {
    (**(code **)(*unaff_A2 + 0x188))();
    if (extraout_A0_00 != (int *)0x0) {
      func_0x00007320(unaff_A6w + -0xa7a,cVar1 + 'V' + (char)sVar2 * '(');
      (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0b_01);
    }
  }
  uVar4 = 0x6e;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6f);
  if (extraout_A0_01 != (int *)0x0) {
    uVar3 = (undefined2)((uint)extraout_A0_01 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_01 + 0x334))();
      (**(code **)(*extraout_A0_01 + 0x70))((short)extraout_A0_01,uVar3,uVar4);
    }
    else {
      (**(code **)(*extraout_A0_01 + 0x3a8))();
    }
  }
  uVar4 = 0x75;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6c);
  if (extraout_A0_02 != (int *)0x0) {
    uVar3 = (undefined2)((uint)extraout_A0_02 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_02 + 0x334))();
      (**(code **)(*extraout_A0_02 + 0x70))((short)extraout_A0_02,uVar3,uVar4);
    }
    else {
      (**(code **)(*extraout_A0_02 + 0x3a8))();
    }
  }
  uVar4 = 0x72;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,100);
  if (extraout_A0_03 != (int *)0x0) {
    uVar3 = (undefined2)((uint)extraout_A0_03 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_03 + 0x334))();
      (**(code **)(*extraout_A0_03 + 0x70))((short)extraout_A0_03,uVar3,uVar4);
    }
    else {
      (**(code **)(*extraout_A0_03 + 0x3a8))();
    }
  }
  uVar4 = 0x65;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
  if (extraout_A0_04 != (int *)0x0) {
    uVar3 = (undefined2)((uint)extraout_A0_04 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_04 + 0x334))();
      (**(code **)(*extraout_A0_04 + 0x70))((short)extraout_A0_04,uVar3,uVar4);
    }
    else {
      (**(code **)(*extraout_A0_04 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 399 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d08(void)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char unaff_D3b;
  short sVar7;
  short unaff_D5w;
  short unaff_D6w;
  short unaff_D7w;
  int iVar8;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  char *pcVar9;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int *extraout_A0_08;
  int *extraout_A0_09;
  int *extraout_A0_10;
  int *extraout_A0_11;
  int *extraout_A0_12;
  int *extraout_A0_13;
  int *extraout_A0_14;
  int *extraout_A0_15;
  int *extraout_A0_16;
  char *pcVar10;
  int *unaff_A2;
  int unaff_A6;
  char cStack00000004;
  char cStack00000005;
  char cStack00000006;
  undefined2 uStack00000008;
  short sStack0000000a;
  char cStack0000000c;
  char cStack0000000d;
  char cStack0000000e;
  char cStack0000000f;
  undefined1 uVar11;
  
  iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
  *(int *)(unaff_A6 + -0xdc) = iVar8;
  if (*(short *)(iVar8 + 0x15f6) != 0) {
    unaff_D5w = 1;
    uVar1 = *(undefined2 *)(*(int *)(unaff_A6 + -0xdc) + 0x15fa);
    cStack0000000e = (char)((ushort)uVar1 >> 8);
    cStack0000000f = (char)uVar1;
    uVar1 = *(undefined2 *)(*(int *)(unaff_A6 + -0xdc) + 0x15f8);
    cStack0000000c = (char)((ushort)uVar1 >> 8);
    cStack0000000d = (char)uVar1;
    uStack00000008 = 0;
    sStack0000000a = 0x1d3c;
    unaff_D6w = func_0x00004938();
  }
  cStack0000000c = 0x73;
  cStack0000000d = 0x69;
  cStack0000000e = 100;
  cStack0000000f = 0x65;
  uStack00000008 = (undefined2)((uint)unaff_A2 >> 0x10);
  uVar1 = uStack00000008;
  sStack0000000a = (short)unaff_A2;
  uVar6 = sStack0000000a;
  cStack00000004 = 0;
  cStack00000005 = 0;
  cStack00000006 = 0x1d;
  (**(code **)(*unaff_A2 + 0x188))();
  sVar7 = 0;
  do {
    if (7 < sVar7) {
LAB_00001dd4:
      if (extraout_A0 != (int *)0x0) {
        cStack0000000c = *(undefined1 *)(unaff_A6 + -0xd3);
        uStack00000008 = (undefined2)((uint)extraout_A0 >> 0x10);
        sStack0000000a = (short)extraout_A0;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x1d;
        (**(code **)(*extraout_A0 + 0x334))();
      }
      if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
        sVar7 = -1;
        pcVar9 = (char *)(unaff_A6 + -0x32);
        pcVar10 = &DAT_00015dc2;
        do {
          cVar2 = *pcVar10;
          *pcVar9 = cVar2;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
      }
      else {
        iVar8 = _DAT_00015dee * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x12a) = iVar8;
        sVar7 = (short)*(char *)(iVar8 + 0x15f0);
        cStack0000000f = *(char *)(iVar8 + 0x15f1);
        cStack0000000c = cStack0000000f >> 7;
        uStack00000008 = 1;
        sStack0000000a = 0x5dc4;
        iVar8 = unaff_A6 + -0x32;
        cStack00000004 = (char)((uint)iVar8 >> 0x18);
        cStack00000005 = (char)((uint)iVar8 >> 0x10);
        cStack00000006 = (char)((uint)iVar8 >> 8);
        cStack0000000d = cStack0000000c;
        cStack0000000e = cStack0000000c;
        func_0x000076d0();
      }
      if (unaff_D5w != 0) {
        cStack0000000c = 0;
        cStack0000000d = 0x76;
        cStack0000000e = 0;
        cStack0000000f = 1;
        uStack00000008 = 0;
        sStack0000000a = 0x1e5c;
                    /* WARNING: Call to offcut address within same function */
        func_0x00002ad8();
        cStack0000000c = (char)((uint)extraout_A0_00 >> 0x18);
        cStack0000000d = (char)((uint)extraout_A0_00 >> 0x10);
        cStack0000000e = (char)((uint)extraout_A0_00 >> 8);
        cStack0000000f = (char)extraout_A0_00;
        _uStack00000008 = unaff_A6 + -0x32;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x1e;
        func_0x00007708();
        pcVar9 = (char *)(unaff_A6 + -0x170);
        pcVar10 = (char *)(unaff_D6w * 0x42 + _DAT_0002884c + 0x15c8);
        do {
          cVar2 = *pcVar10;
          *pcVar9 = cVar2;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
      }
      cStack0000000c = 99;
      cStack0000000d = 0x75;
      cStack0000000e = 0x72;
      cStack0000000f = 0x72;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x1e;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_01 != 0) {
        cStack0000000d = *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
        cStack0000000c = cStack0000000d >> 7;
        cStack00000006 = (char)((uint)extraout_A0_01 >> 0x18);
        uStack00000008 = (undefined2)extraout_A0_01;
        cStack00000004 = 0x1e;
        cStack00000005 = 0xc6;
        sStack0000000a = sVar7;
        func_0x00004768();
      }
      cStack00000005 = (char)unaff_A2;
      uVar4 = cStack00000005;
      cStack00000004 = (char)((uint)unaff_A2 >> 8);
      uVar3 = cStack00000004;
      if (unaff_D5w == 0) {
        iVar8 = unaff_A6 + -0x32;
        sStack0000000a = (short)((uint)iVar8 >> 0x10);
        cStack0000000c = (char)((uint)iVar8 >> 8);
        cStack0000000d = (char)iVar8;
        cStack00000006 = (char)((uint)(unaff_A6 + -0xd7a) >> 0x18);
        uStack00000008 = (undefined2)(unaff_A6 + -0xd7a);
        cStack00000004 = 0x1f;
        cStack00000005 = 0x3e;
        func_0x00007320();
        sStack0000000a = (short)((uint)extraout_A0_02 >> 0x10);
        cStack0000000c = (char)((uint)extraout_A0_02 >> 8);
        cStack0000000d = (char)extraout_A0_02;
        cStack00000006 = 0x73;
        uStack00000008 = 0x7232;
        cStack00000004 = uVar3;
        cStack00000005 = uVar4;
        func_0x00006e38();
        func_0x00006e38();
        func_0x00006e38();
      }
      else {
        sStack0000000a = 2;
        cStack0000000c = 0x5b;
        cStack0000000d = 0x76;
        cStack00000006 = 0x73;
        uStack00000008 = 0x7232;
        func_0x00006e38();
        sVar7 = (short)unaff_A6;
        func_0x00007320(sVar7 + -0xb7a,sVar7 + -0x32);
        func_0x00006e38();
        func_0x00007320(unaff_A6 + -0xc7a,sVar7 + -0x170);
        func_0x00006e38();
      }
      for (sVar7 = 0; sVar7 < 4; sVar7 = sVar7 + 1) {
        iVar8 = sVar7 + 0x61726d31;
        cStack0000000c = (char)((uint)iVar8 >> 0x18);
        cStack0000000d = (char)((uint)iVar8 >> 0x10);
        cStack0000000e = (char)((uint)iVar8 >> 8);
        cStack0000000f = (char)iVar8;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x1f;
        uStack00000008 = uVar1;
        sStack0000000a = uVar6;
        (**(code **)(*unaff_A2 + 0x188))();
        sStack0000000a =
             (short)*(char *)((int)sVar7 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da);
        uStack00000008 = SUB42(extraout_A0_03,0);
        uVar5 = uStack00000008;
        if (sStack0000000a < 0) {
          if (extraout_A0_03 != (int *)0x0) {
            cStack0000000c = 0;
            cStack00000004 = 0;
            cStack00000005 = 0;
            cStack00000006 = 0x20;
            sStack0000000a = uStack00000008;
            uStack00000008 = (short)((uint)extraout_A0_03 >> 0x10);
            (**(code **)(*extraout_A0_03 + 0x334))();
          }
        }
        else {
          if (sStack0000000a == _DAT_00015de8) {
            *(short *)(unaff_A6 + -0xe2) = _DAT_00028846 + 2;
            unaff_D7w = sVar7;
          }
          else {
            *(undefined2 *)(unaff_A6 + -0xe2) = 1;
          }
          if (extraout_A0_03 != (int *)0x0) {
            cStack0000000d = *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
            cStack0000000c = cStack0000000d >> 7;
            cStack00000006 = (char)((uint)extraout_A0_03 >> 0x18);
            cStack00000004 = 0x20;
            cStack00000005 = 0x12;
            func_0x00004768();
            uVar11 = 0x22;
            func_0x00004778(uVar5);
            (**(code **)(*extraout_A0_03 + 0x334))(uVar5,uVar11);
          }
        }
      }
      if (-1 < _DAT_00015de8) {
        *(int *)(unaff_A6 + -0xd8) = (int)unaff_D7w + _DAT_00015dee * 0x42 + _DAT_0002884c;
        cStack0000000c = (char)((uint)unaff_A2 >> 0x18);
        cStack0000000d = (char)((uint)unaff_A2 >> 0x10);
        _uStack00000008 = _DAT_00015de8 * 6 + _DAT_00028864;
        cStack00000006 = *(char *)(*(int *)(unaff_A6 + -0xd8) + 0x15e6) >> 7;
        cStack00000005 = *(char *)(*(int *)(unaff_A6 + -0xd8) + 0x15e2);
        cStack00000004 = cStack00000005 >> 7;
        cStack0000000e = uVar3;
        cStack0000000f = uVar4;
        FUN_00000714(1);
      }
      cStack0000000c = 0x62;
      cStack0000000d = 0x69;
      cStack0000000e = 0x67;
      cStack0000000f = 0x61;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x20;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_04 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_04 >> 0x10);
        sStack0000000a = (short)extraout_A0_04;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x20;
        (**(code **)(*extraout_A0_04 + 0x334))();
      }
      cStack0000000c = 0x61;
      cStack0000000d = 0x72;
      cStack0000000e = 0x6d;
      cStack0000000f = 0x79;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x21;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_05 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_05 >> 0x10);
        sStack0000000a = (short)extraout_A0_05;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x21;
        (**(code **)(*extraout_A0_05 + 0x334))();
      }
      cStack0000000c = 0x74;
      cStack0000000d = 0x69;
      cStack0000000e = 0x6d;
      cStack0000000f = 0x65;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x21;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_06 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_06 >> 0x10);
        sStack0000000a = (short)extraout_A0_06;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x21;
        (**(code **)(*extraout_A0_06 + 0x334))();
      }
      cStack0000000c = 99;
      cStack0000000d = 0x6f;
      cStack0000000e = 0x73;
      cStack0000000f = 0x74;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x21;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_07 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_07 >> 0x10);
        sStack0000000a = (short)extraout_A0_07;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x21;
        (**(code **)(*extraout_A0_07 + 0x334))();
      }
      cStack0000000c = 0x73;
      cStack0000000d = 0x74;
      cStack0000000e = 0x72;
      cStack0000000f = 0x65;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x21;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_08 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_08 >> 0x10);
        sStack0000000a = (short)extraout_A0_08;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x21;
        (**(code **)(*extraout_A0_08 + 0x334))();
      }
      cStack0000000c = 0x6d;
      cStack0000000d = 0x6f;
      cStack0000000e = 0x76;
      cStack0000000f = 0x65;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x21;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_09 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_09 >> 0x10);
        sStack0000000a = (short)extraout_A0_09;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x22;
        (**(code **)(*extraout_A0_09 + 0x334))();
      }
      cStack0000000c = 0x62;
      cStack0000000d = 0x6f;
      cStack0000000e = 0x6e;
      cStack0000000f = 0x75;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x22;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_10 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_10 >> 0x10);
        sStack0000000a = (short)extraout_A0_10;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x22;
        (**(code **)(*extraout_A0_10 + 0x334))();
      }
      cStack0000000c = 0x62;
      cStack0000000d = 0x6f;
      cStack0000000e = 0x6e;
      cStack0000000f = 0x31;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x22;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_11 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_11 >> 0x10);
        sStack0000000a = (short)extraout_A0_11;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x22;
        (**(code **)(*extraout_A0_11 + 0x334))();
      }
      cStack0000000c = 0x62;
      cStack0000000d = 0x6f;
      cStack0000000e = 0x6e;
      cStack0000000f = 0x32;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x22;
      uStack00000008 = uVar1;
      sStack0000000a = uVar6;
      (**(code **)(*unaff_A2 + 0x188))();
      if (extraout_A0_12 != (int *)0x0) {
        cStack0000000c = -1 < _DAT_00015de8;
        uStack00000008 = (undefined2)((uint)extraout_A0_12 >> 0x10);
        sStack0000000a = (short)extraout_A0_12;
        cStack00000004 = 0;
        cStack00000005 = 0;
        cStack00000006 = 0x22;
        (**(code **)(*extraout_A0_12 + 0x334))();
      }
      cStack0000000c = 0x69;
      cStack0000000d = 0x6e;
      cStack0000000e = 0x66;
      cStack0000000f = 0x6f;
      uStack00000008 = (undefined2)((uint)_DAT_00028868 >> 0x10);
      sStack0000000a = (short)_DAT_00028868;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x2a;
      (**(code **)(*_DAT_00028868 + 0x188))();
      if (extraout_A0_13 != (int *)0x0) {
        sStack0000000a = (short)extraout_A0_13;
        uStack00000008 = (undefined2)((uint)extraout_A0_13 >> 0x10);
        if (_DAT_00015df0 == 4) {
          cStack0000000c = 0;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2a;
          (**(code **)(*extraout_A0_13 + 0x334))();
          cStack00000006 = 0;
          cStack00000004 = (char)((uint)extraout_A0_13 >> 8);
          cStack00000005 = (char)extraout_A0_13;
          (**(code **)(*extraout_A0_13 + 0x70))();
        }
        else {
          cStack0000000c = _DAT_00015df0 == 0;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2a;
          (**(code **)(*extraout_A0_13 + 0x3a8))();
        }
      }
      cStack0000000c = 0x62;
      cStack0000000d = 0x75;
      cStack0000000e = 0x69;
      cStack0000000f = 0x6c;
      uStack00000008 = (undefined2)((uint)_DAT_00028868 >> 0x10);
      sStack0000000a = (short)_DAT_00028868;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x2b;
      (**(code **)(*_DAT_00028868 + 0x188))();
      if (extraout_A0_14 != (int *)0x0) {
        sStack0000000a = (short)extraout_A0_14;
        uStack00000008 = (undefined2)((uint)extraout_A0_14 >> 0x10);
        if (_DAT_00015df0 == 4) {
          cStack0000000c = 0;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2b;
          (**(code **)(*extraout_A0_14 + 0x334))();
          cStack00000006 = 0;
          cStack00000004 = (char)((uint)extraout_A0_14 >> 8);
          cStack00000005 = (char)extraout_A0_14;
          (**(code **)(*extraout_A0_14 + 0x70))();
        }
        else {
          cStack0000000c = _DAT_00015df0 == 1;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2b;
          (**(code **)(*extraout_A0_14 + 0x3a8))();
        }
      }
      cStack0000000c = 0x70;
      cStack0000000d = 0x72;
      cStack0000000e = 0x6f;
      cStack0000000f = 100;
      uStack00000008 = (undefined2)((uint)_DAT_00028868 >> 0x10);
      sStack0000000a = (short)_DAT_00028868;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x2b;
      (**(code **)(*_DAT_00028868 + 0x188))();
      if (extraout_A0_15 != (int *)0x0) {
        sStack0000000a = (short)extraout_A0_15;
        uStack00000008 = (undefined2)((uint)extraout_A0_15 >> 0x10);
        if (_DAT_00015df0 == 4) {
          cStack0000000c = 0;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2b;
          (**(code **)(*extraout_A0_15 + 0x334))();
          cStack00000006 = 0;
          cStack00000004 = (char)((uint)extraout_A0_15 >> 8);
          cStack00000005 = (char)extraout_A0_15;
          (**(code **)(*extraout_A0_15 + 0x70))();
        }
        else {
          cStack0000000c = _DAT_00015df0 == 2;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2b;
          (**(code **)(*extraout_A0_15 + 0x3a8))();
        }
      }
      cStack0000000c = 0x76;
      cStack0000000d = 0x65;
      cStack0000000e = 99;
      cStack0000000f = 0x74;
      uStack00000008 = (undefined2)((uint)_DAT_00028868 >> 0x10);
      sStack0000000a = (short)_DAT_00028868;
      cStack00000004 = 0;
      cStack00000005 = 0;
      cStack00000006 = 0x2b;
      (**(code **)(*_DAT_00028868 + 0x188))();
      if (extraout_A0_16 != (int *)0x0) {
        sStack0000000a = (short)extraout_A0_16;
        uStack00000008 = (undefined2)((uint)extraout_A0_16 >> 0x10);
        if (_DAT_00015df0 == 4) {
          cStack0000000c = 0;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2c;
          (**(code **)(*extraout_A0_16 + 0x334))();
          cStack00000006 = 0;
          cStack00000004 = (char)((uint)extraout_A0_16 >> 8);
          cStack00000005 = (char)extraout_A0_16;
          (**(code **)(*extraout_A0_16 + 0x70))();
        }
        else {
          cStack0000000c = _DAT_00015df0 == 3;
          cStack00000004 = 0;
          cStack00000005 = 0;
          cStack00000006 = 0x2c;
          (**(code **)(*extraout_A0_16 + 0x3a8))();
        }
      }
      cStack0000000c = (char)((uint)_DAT_00028868 >> 0x18);
      cStack0000000d = (char)((uint)_DAT_00028868 >> 0x10);
      cStack0000000e = (char)((uint)_DAT_00028868 >> 8);
      cStack0000000f = (char)_DAT_00028868;
      uStack00000008 = 0;
      sStack0000000a = 0x2c4e;
      (**(code **)(*_DAT_00028868 + 0x194))();
      return;
    }
    *(int *)(unaff_A6 + -0x122) = _DAT_00015dee * 0x42 + _DAT_0002884c;
    iVar8 = sVar7 * 0x14 + _DAT_0002884c;
    *(int *)(unaff_A6 + -0x126) = iVar8;
    if ((*(short *)(*(int *)(unaff_A6 + -0x122) + 0x15c4) == *(short *)(iVar8 + 0x194)) &&
       (*(short *)(*(int *)(unaff_A6 + -0x122) + 0x15c6) == *(short *)(iVar8 + 0x196))) {
      if (extraout_A0 != (int *)0x0) {
        if (*(short *)((int)extraout_A0 + 0x7e) != 6) {
          *(undefined2 *)((int)extraout_A0 + 0x7e) = 6;
        }
        if ((sVar7 != *(short *)(extraout_A0 + 0x1f)) &&
           (*(short *)(extraout_A0 + 0x1f) = sVar7, unaff_D3b != '\0')) {
          cStack0000000c = (char)((uint)extraout_A0 >> 0x18);
          cStack0000000d = (char)((uint)extraout_A0 >> 0x10);
          cStack0000000e = (char)((uint)extraout_A0 >> 8);
          cStack0000000f = (char)extraout_A0;
          uStack00000008 = 0;
          sStack0000000a = 0x1dc2;
          (**(code **)(*extraout_A0 + 0x26c))();
        }
        *(undefined1 *)(unaff_A6 + -0xd3) = 1;
      }
      goto LAB_00001dd4;
    }
    sVar7 = sVar7 + 1;
  } while( true );
}



// Function: FUN_00001e98 at 00001e98
// Size: 1068 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e98(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short unaff_D5w;
  short unaff_D7w;
  int extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int *extraout_A0_08;
  int *extraout_A0_09;
  int *extraout_A0_10;
  int *extraout_A0_11;
  int *extraout_A0_12;
  int *extraout_A0_13;
  code *in_A1;
  int *unaff_A2;
  int unaff_A6;
  char cStack00000004;
  char cStack00000005;
  undefined1 uStack00000006;
  undefined1 uVar4;
  undefined1 uStack_4;
  undefined1 uVar5;
  
  (*in_A1)();
  if (extraout_A0 != 0) {
    cStack00000005 = *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
    cStack00000004 = cStack00000005 >> 7;
    func_0x00004768();
  }
  uStack_4 = (undefined1)((uint)unaff_A2 >> 8);
  if (unaff_D5w == 0) {
    cStack00000004 = (char)((uint)(unaff_A6 + -0x32) >> 8);
    cStack00000005 = (char)(unaff_A6 + -0x32);
    func_0x00007320();
    cStack00000004 = (char)((ushort)extraout_A0w >> 8);
    cStack00000005 = (char)extraout_A0w;
    func_0x00006e38();
    func_0x00006e38();
    func_0x00006e38();
  }
  else {
    cStack00000004 = 0x5b;
    cStack00000005 = 0x76;
    func_0x00006e38();
    sVar3 = (short)unaff_A6;
    func_0x00007320(sVar3 + -0xb7a,sVar3 + -0x32);
    func_0x00006e38();
    func_0x00007320(unaff_A6 + -0xc7a,sVar3 + -0x170);
    func_0x00006e38();
  }
  for (sVar3 = 0; sVar3 < 4; sVar3 = sVar3 + 1) {
    iVar1 = sVar3 + 0x61726d31;
    cStack00000004 = (char)((uint)iVar1 >> 0x18);
    cStack00000005 = (char)((uint)iVar1 >> 0x10);
    uStack00000006 = (undefined1)((uint)iVar1 >> 8);
    (**(code **)(*unaff_A2 + 0x188))();
    sVar2 = (short)*(char *)((int)sVar3 + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da);
    if (sVar2 < 0) {
      if (extraout_A0_00 != (int *)0x0) {
        cStack00000004 = 0;
        (**(code **)(*extraout_A0_00 + 0x334))();
      }
    }
    else {
      if (sVar2 == _DAT_00015de8) {
        *(short *)(unaff_A6 + -0xe2) = _DAT_00028846 + 2;
        unaff_D7w = sVar3;
      }
      else {
        *(undefined2 *)(unaff_A6 + -0xe2) = 1;
      }
      if (extraout_A0_00 != (int *)0x0) {
        cStack00000005 = *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
        cStack00000004 = cStack00000005 >> 7;
        uVar5 = 0x12;
        func_0x00004768();
        uVar4 = 0x22;
        func_0x00004778((short)extraout_A0_00,0,uVar5);
        (**(code **)(*extraout_A0_00 + 0x334))((short)extraout_A0_00,uVar4);
      }
    }
  }
  if (-1 < _DAT_00015de8) {
    *(int *)(unaff_A6 + -0xd8) = (int)unaff_D7w + _DAT_00015dee * 0x42 + _DAT_0002884c;
    cStack00000004 = (char)((uint)unaff_A2 >> 0x18);
    cStack00000005 = (char)((uint)unaff_A2 >> 0x10);
    uStack00000006 = uStack_4;
    FUN_00000714(1,(short)*(char *)(*(int *)(unaff_A6 + -0xd8) + 0x15ea),
                 *(undefined1 *)(*(int *)(unaff_A6 + -0xd8) + 0x15e6));
  }
  cStack00000004 = 0x62;
  cStack00000005 = 0x69;
  uStack00000006 = 0x67;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_01 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_01 + 0x334))();
  }
  cStack00000004 = 0x61;
  cStack00000005 = 0x72;
  uStack00000006 = 0x6d;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_02 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_02 + 0x334))();
  }
  cStack00000004 = 0x74;
  cStack00000005 = 0x69;
  uStack00000006 = 0x6d;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_03 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_03 + 0x334))();
  }
  cStack00000004 = 99;
  cStack00000005 = 0x6f;
  uStack00000006 = 0x73;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_04 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_04 + 0x334))();
  }
  cStack00000004 = 0x73;
  cStack00000005 = 0x74;
  uStack00000006 = 0x72;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_05 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_05 + 0x334))();
  }
  cStack00000004 = 0x6d;
  cStack00000005 = 0x6f;
  uStack00000006 = 0x76;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_06 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_06 + 0x334))();
  }
  cStack00000004 = 0x62;
  cStack00000005 = 0x6f;
  uStack00000006 = 0x6e;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_07 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_07 + 0x334))();
  }
  cStack00000004 = 0x62;
  cStack00000005 = 0x6f;
  uStack00000006 = 0x6e;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_08 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_08 + 0x334))();
  }
  cStack00000004 = 0x62;
  cStack00000005 = 0x6f;
  uStack00000006 = 0x6e;
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_09 != (int *)0x0) {
    cStack00000004 = -1 < _DAT_00015de8;
    (**(code **)(*extraout_A0_09 + 0x334))();
  }
  cStack00000004 = 0x69;
  cStack00000005 = 0x6e;
  uStack00000006 = 0x66;
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_10 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      cStack00000004 = 0;
      (**(code **)(*extraout_A0_10 + 0x334))();
      (**(code **)(*extraout_A0_10 + 0x70))();
    }
    else {
      cStack00000004 = _DAT_00015df0 == 0;
      (**(code **)(*extraout_A0_10 + 0x3a8))();
    }
  }
  cStack00000004 = 0x62;
  cStack00000005 = 0x75;
  uStack00000006 = 0x69;
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_11 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      cStack00000004 = 0;
      (**(code **)(*extraout_A0_11 + 0x334))();
      (**(code **)(*extraout_A0_11 + 0x70))();
    }
    else {
      cStack00000004 = _DAT_00015df0 == 1;
      (**(code **)(*extraout_A0_11 + 0x3a8))();
    }
  }
  cStack00000004 = 0x70;
  cStack00000005 = 0x72;
  uStack00000006 = 0x6f;
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_12 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      cStack00000004 = 0;
      (**(code **)(*extraout_A0_12 + 0x334))();
      (**(code **)(*extraout_A0_12 + 0x70))();
    }
    else {
      cStack00000004 = _DAT_00015df0 == 2;
      (**(code **)(*extraout_A0_12 + 0x3a8))();
    }
  }
  cStack00000004 = 0x76;
  cStack00000005 = 0x65;
  uStack00000006 = 99;
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_13 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      cStack00000004 = 0;
      (**(code **)(*extraout_A0_13 + 0x334))();
      (**(code **)(*extraout_A0_13 + 0x70))();
    }
    else {
      cStack00000004 = _DAT_00015df0 == 3;
      (**(code **)(*extraout_A0_13 + 0x3a8))();
    }
  }
  cStack00000004 = (char)((uint)_DAT_00028868 >> 0x18);
  cStack00000005 = (char)((uint)_DAT_00028868 >> 0x10);
  uStack00000006 = (undefined1)((uint)_DAT_00028868 >> 8);
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_000027d0 at 000027d0
// Size: 54 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000027d0(void)

{
  char cVar1;
  char unaff_D3b;
  short unaff_D4w;
  short sVar2;
  int *extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  undefined2 extraout_A0w_00;
  int *extraout_A0_01;
  char *extraout_A0_02;
  char *extraout_A0_03;
  char *pcVar3;
  undefined2 extraout_A0w_01;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int *extraout_A0_08;
  char *pcVar4;
  int *unaff_A2;
  int unaff_A6;
  
  while (unaff_D4w = unaff_D4w + 1, unaff_D4w < 2) {
    (**(code **)(*unaff_A2 + 0x188))();
    if (extraout_A0 != (int *)0x0) {
      if (*(short *)((int)extraout_A0 + 0x7e) != 5) {
        *(undefined2 *)((int)extraout_A0 + 0x7e) = 5;
      }
      sVar2 = (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9);
      if ((sVar2 != *(short *)(extraout_A0 + 0x1f)) &&
         (*(short *)(extraout_A0 + 0x1f) = sVar2, unaff_D3b != '\0')) {
        (**(code **)(*extraout_A0 + 0x26c))();
      }
    }
  }
  *(short *)(unaff_A6 + -0x114) = _DAT_00015dee;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(0);
  cVar1 = (char)unaff_A6;
  func_0x000076d0(cVar1 + -0x32,extraout_A0w);
  (**(code **)(*unaff_A2 + 0x188))();
  sVar2 = (short)unaff_A6;
  if (extraout_A0_00 != (int *)0x0) {
    func_0x00007320(sVar2 + -0xf7a);
    (**(code **)(*extraout_A0_00 + 1000))();
  }
  *(short *)(unaff_A6 + -0x116) = _DAT_00015dee;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(1);
  func_0x000076d0(cVar1 + -0x32,extraout_A0w_00);
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_01 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x107a);
    (**(code **)(*extraout_A0_01 + 1000))();
  }
  if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8();
      pcVar3 = (char *)(unaff_A6 + -0x32);
      pcVar4 = extraout_A0_03;
      do {
        cVar1 = *pcVar4;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(4);
      func_0x000076d0(cVar1 + -0x32,extraout_A0w_01);
    }
  }
  else {
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8();
    pcVar3 = (char *)(unaff_A6 + -0x32);
    pcVar4 = extraout_A0_02;
    do {
      cVar1 = *pcVar4;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_04 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x117a);
    (**(code **)(*extraout_A0_04 + 1000))();
  }
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_05 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_05 + 0x334))();
      (**(code **)(*extraout_A0_05 + 0x70))();
    }
    else {
      (**(code **)(*extraout_A0_05 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_06 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_06 + 0x334))();
      (**(code **)(*extraout_A0_06 + 0x70))();
    }
    else {
      (**(code **)(*extraout_A0_06 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_07 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_07 + 0x334))();
      (**(code **)(*extraout_A0_07 + 0x70))();
    }
    else {
      (**(code **)(*extraout_A0_07 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_08 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_08 + 0x334))();
      (**(code **)(*extraout_A0_08 + 0x70))();
    }
    else {
      (**(code **)(*extraout_A0_08 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002808 at 00002808
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002808(void)

{
  char cVar1;
  short sVar2;
  char cVar3;
  int in_D0;
  int in_A0;
  undefined2 extraout_A0w;
  int *extraout_A0;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w_00;
  int *extraout_A0_00;
  undefined1 extraout_A0b_00;
  char *extraout_A0_01;
  char *extraout_A0_02;
  char *pcVar4;
  undefined2 extraout_A0w_01;
  int *extraout_A0_03;
  undefined1 extraout_A0b_01;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int in_A1;
  char *pcVar5;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uVar6;
  undefined1 uVar7;
  
  if (*(char *)((*(uint *)(in_A0 + *(short *)(in_D0 + in_A1 + 0x15c4) * 2) >> 0x18) + _DAT_0002884c
               + 0x711) == '\n') {
    uVar7 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(0,uVar7);
  cVar3 = (char)unaff_A6;
  func_0x000076d0(cVar3 + -0x32,extraout_A0w);
  (**(code **)(*unaff_A2 + 0x188))();
  sVar2 = (short)unaff_A6;
  if (extraout_A0 != (int *)0x0) {
    func_0x00007320(sVar2 + -0xf7a,cVar3 + -0x32);
    (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,extraout_A0b);
  }
  *(short *)(unaff_A6 + -0x116) = _DAT_00015dee;
  if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c6)
                           * 0xe0 + _DAT_00028850 +
                          *(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c4)
                          * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
    uVar7 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(1,uVar7);
  func_0x000076d0(cVar3 + -0x32,extraout_A0w_00);
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_00 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x107a,cVar3 + -0x32);
    (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0b_00);
  }
  if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(3);
      pcVar4 = (char *)(unaff_A6 + -0x32);
      pcVar5 = extraout_A0_02;
      do {
        cVar1 = *pcVar5;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(4,(char)_DAT_0002884c +
                        *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
      func_0x000076d0(cVar3 + -0x32,extraout_A0w_01);
    }
  }
  else {
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(2);
    pcVar4 = (char *)(unaff_A6 + -0x32);
    pcVar5 = extraout_A0_01;
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_03 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x117a,cVar3 + -0x32);
    (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0b_01);
  }
  uVar7 = 0x6e;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6f);
  if (extraout_A0_04 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_04 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_04 + 0x334))();
      (**(code **)(*extraout_A0_04 + 0x70))((short)extraout_A0_04,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_04 + 0x3a8))();
    }
  }
  uVar7 = 0x75;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6c);
  if (extraout_A0_05 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_05 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_05 + 0x334))();
      (**(code **)(*extraout_A0_05 + 0x70))((short)extraout_A0_05,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_05 + 0x3a8))();
    }
  }
  uVar7 = 0x72;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,100);
  if (extraout_A0_06 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_06 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_06 + 0x334))();
      (**(code **)(*extraout_A0_06 + 0x70))((short)extraout_A0_06,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_06 + 0x3a8))();
    }
  }
  uVar7 = 0x65;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
  if (extraout_A0_07 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_07 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_07 + 0x334))();
      (**(code **)(*extraout_A0_07 + 0x70))((short)extraout_A0_07,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_07 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002818 at 00002818
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002818(void)

{
  char cVar1;
  short sVar2;
  char cVar3;
  int in_D1;
  undefined2 extraout_A0w;
  int *extraout_A0;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w_00;
  int *extraout_A0_00;
  undefined1 extraout_A0b_00;
  char *extraout_A0_01;
  char *extraout_A0_02;
  char *pcVar4;
  undefined2 extraout_A0w_01;
  int *extraout_A0_03;
  undefined1 extraout_A0b_01;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  char *pcVar5;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uVar6;
  undefined1 uVar7;
  
  if (*(char *)(in_D1 + _DAT_0002884c + 0x711) == '\n') {
    uVar7 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(0,uVar7);
  cVar3 = (char)unaff_A6;
  func_0x000076d0(cVar3 + -0x32,extraout_A0w);
  (**(code **)(*unaff_A2 + 0x188))();
  sVar2 = (short)unaff_A6;
  if (extraout_A0 != (int *)0x0) {
    func_0x00007320(sVar2 + -0xf7a,cVar3 + -0x32);
    (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,extraout_A0b);
  }
  *(short *)(unaff_A6 + -0x116) = _DAT_00015dee;
  if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c6)
                           * 0xe0 + _DAT_00028850 +
                          *(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c4)
                          * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
    uVar7 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(1,uVar7);
  func_0x000076d0(cVar3 + -0x32,extraout_A0w_00);
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_00 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x107a,cVar3 + -0x32);
    (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0b_00);
  }
  if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(3);
      pcVar4 = (char *)(unaff_A6 + -0x32);
      pcVar5 = extraout_A0_02;
      do {
        cVar1 = *pcVar5;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(4,(char)_DAT_0002884c +
                        *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
      func_0x000076d0(cVar3 + -0x32,extraout_A0w_01);
    }
  }
  else {
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(2);
    pcVar4 = (char *)(unaff_A6 + -0x32);
    pcVar5 = extraout_A0_01;
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_03 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x117a,cVar3 + -0x32);
    (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0b_01);
  }
  uVar7 = 0x6e;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6f);
  if (extraout_A0_04 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_04 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_04 + 0x334))();
      (**(code **)(*extraout_A0_04 + 0x70))((short)extraout_A0_04,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_04 + 0x3a8))();
    }
  }
  uVar7 = 0x75;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6c);
  if (extraout_A0_05 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_05 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_05 + 0x334))();
      (**(code **)(*extraout_A0_05 + 0x70))((short)extraout_A0_05,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_05 + 0x3a8))();
    }
  }
  uVar7 = 0x72;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,100);
  if (extraout_A0_06 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_06 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_06 + 0x334))();
      (**(code **)(*extraout_A0_06 + 0x70))((short)extraout_A0_06,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_06 + 0x3a8))();
    }
  }
  uVar7 = 0x65;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
  if (extraout_A0_07 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_07 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_07 + 0x334))();
      (**(code **)(*extraout_A0_07 + 0x70))((short)extraout_A0_07,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_07 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002820 at 00002820
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002820(void)

{
  char cVar1;
  short sVar2;
  char cVar3;
  int in_A0;
  undefined2 extraout_A0w;
  int *extraout_A0;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w_00;
  int *extraout_A0_00;
  undefined1 extraout_A0b_00;
  char *extraout_A0_01;
  char *extraout_A0_02;
  char *pcVar4;
  undefined2 extraout_A0w_01;
  int *extraout_A0_03;
  undefined1 extraout_A0b_01;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  char *pcVar5;
  int *unaff_A2;
  int unaff_A6;
  undefined2 uVar6;
  undefined1 uVar7;
  
  if (*(char *)(in_A0 + 0x711) == '\n') {
    uVar7 = (undefined1)*(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15ee);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(0,uVar7);
  cVar3 = (char)unaff_A6;
  func_0x000076d0(cVar3 + -0x32,extraout_A0w);
  (**(code **)(*unaff_A2 + 0x188))();
  sVar2 = (short)unaff_A6;
  if (extraout_A0 != (int *)0x0) {
    func_0x00007320(sVar2 + -0xf7a,cVar3 + -0x32);
    (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,extraout_A0b);
  }
  *(short *)(unaff_A6 + -0x116) = _DAT_00015dee;
  if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c6)
                           * 0xe0 + _DAT_00028850 +
                          *(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c4)
                          * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
    uVar7 = *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8(1,uVar7);
  func_0x000076d0(cVar3 + -0x32,extraout_A0w_00);
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_00 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x107a,cVar3 + -0x32);
    (**(code **)(*extraout_A0_00 + 1000))((short)extraout_A0_00,extraout_A0b_00);
  }
  if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(3);
      pcVar4 = (char *)(unaff_A6 + -0x32);
      pcVar5 = extraout_A0_02;
      do {
        cVar1 = *pcVar5;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8(4,(char)_DAT_0002884c +
                        *(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * '\x14');
      func_0x000076d0(cVar3 + -0x32,extraout_A0w_01);
    }
  }
  else {
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8(2);
    pcVar4 = (char *)(unaff_A6 + -0x32);
    pcVar5 = extraout_A0_01;
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_03 != (int *)0x0) {
    func_0x00007320(sVar2 + -0x117a,cVar3 + -0x32);
    (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0b_01);
  }
  uVar7 = 0x6e;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6f);
  if (extraout_A0_04 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_04 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_04 + 0x334))();
      (**(code **)(*extraout_A0_04 + 0x70))((short)extraout_A0_04,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_04 + 0x3a8))();
    }
  }
  uVar7 = 0x75;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x6c);
  if (extraout_A0_05 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_05 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_05 + 0x334))();
      (**(code **)(*extraout_A0_05 + 0x70))((short)extraout_A0_05,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_05 + 0x3a8))();
    }
  }
  uVar7 = 0x72;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,100);
  if (extraout_A0_06 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_06 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_06 + 0x334))();
      (**(code **)(*extraout_A0_06 + 0x70))((short)extraout_A0_06,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_06 + 0x3a8))();
    }
  }
  uVar7 = 0x65;
  (**(code **)(*_DAT_00028868 + 0x188))((short)_DAT_00028868,0x74);
  if (extraout_A0_07 != (int *)0x0) {
    uVar6 = (undefined2)((uint)extraout_A0_07 >> 0x10);
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_07 + 0x334))();
      (**(code **)(*extraout_A0_07 + 0x70))((short)extraout_A0_07,uVar6,uVar7);
    }
    else {
      (**(code **)(*extraout_A0_07 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002860 at 00002860
// Size: 231 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002860(void)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int *extraout_A0;
  undefined2 extraout_A0w;
  int *extraout_A0_00;
  undefined2 extraout_A0w_00;
  char *extraout_A0_01;
  char *extraout_A0_02;
  char *pcVar5;
  int *extraout_A0_03;
  undefined2 extraout_A0w_01;
  int *extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  char *pcVar6;
  int *unaff_A2;
  int unaff_A6;
  short sStack00000004;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  
  func_0x000076d0();
  (**(code **)(*unaff_A2 + 0x188))();
  sVar2 = (short)unaff_A6;
  if (extraout_A0 != (int *)0x0) {
    uStack00000008 = (undefined1)((uint)(unaff_A6 + -0x32) >> 8);
    uStack00000009 = (undefined1)(unaff_A6 + -0x32);
    sStack00000004 = sVar2 + -0xf7a;
    func_0x00007320();
    uStack00000008 = (undefined1)((ushort)extraout_A0w >> 8);
    uStack00000009 = (undefined1)extraout_A0w;
    sStack00000004 = (short)extraout_A0;
    (**(code **)(*extraout_A0 + 1000))();
  }
  *(short *)(unaff_A6 + -0x116) = _DAT_00015dee;
  if (*(char *)((*(uint *)(*(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c6)
                           * 0xe0 + _DAT_00028850 +
                          *(short *)(*(short *)(unaff_A6 + -0x116) * 0x42 + _DAT_0002884c + 0x15c4)
                          * 2) >> 0x18) + _DAT_0002884c + 0x711) == '\n') {
    iVar4 = (int)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d8);
  }
  else {
    iVar4 = 0;
  }
  uStack00000008 = (undefined1)((uint)iVar4 >> 0x18);
  uStack00000009 = (undefined1)((uint)iVar4 >> 0x10);
  uStack0000000a = (undefined1)((uint)iVar4 >> 8);
  sStack00000004 = 0x75;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002ad8();
  func_0x000076d0();
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_00 != (int *)0x0) {
    uStack00000008 = (undefined1)((uint)(unaff_A6 + -0x32) >> 8);
    uStack00000009 = (undefined1)(unaff_A6 + -0x32);
    sStack00000004 = sVar2 + -0x107a;
    func_0x00007320();
    uStack00000008 = (undefined1)((ushort)extraout_A0w_00 >> 8);
    uStack00000009 = (undefined1)extraout_A0w_00;
    sStack00000004 = (short)extraout_A0_00;
    (**(code **)(*extraout_A0_00 + 1000))();
  }
  if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
      uStack00000008 = 0;
      uStack00000009 = 0x75;
      uStack0000000a = 0;
      sStack00000004 = 0;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8();
      pcVar5 = (char *)(unaff_A6 + -0x32);
      pcVar6 = extraout_A0_02;
      do {
        cVar1 = *pcVar6;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
    }
    else {
      iVar4 = _DAT_0002884c + (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * 0x14
      ;
      uStack00000008 = (undefined1)((uint)iVar4 >> 0x18);
      uStack00000009 = (undefined1)((uint)iVar4 >> 0x10);
      uStack0000000a = (undefined1)((uint)iVar4 >> 8);
      sStack00000004 = 0x75;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8();
      func_0x000076d0();
    }
  }
  else {
    uStack00000008 = 0;
    uStack00000009 = 0x75;
    uStack0000000a = 0;
    sStack00000004 = 0;
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8();
    pcVar5 = (char *)(unaff_A6 + -0x32);
    pcVar6 = extraout_A0_01;
    do {
      cVar1 = *pcVar6;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  uStack00000008 = 0x6f;
  uStack00000009 = 0x77;
  uStack0000000a = 0x6e;
  sStack00000004 = (short)((uint)unaff_A2 >> 0x10);
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_03 != (int *)0x0) {
    uStack00000008 = (undefined1)((uint)(unaff_A6 + -0x32) >> 8);
    uStack00000009 = (undefined1)(unaff_A6 + -0x32);
    sStack00000004 = sVar2 + -0x117a;
    func_0x00007320();
    uStack00000008 = (undefined1)((ushort)extraout_A0w_01 >> 8);
    uStack00000009 = (undefined1)extraout_A0w_01;
    sStack00000004 = (short)extraout_A0_03;
    (**(code **)(*extraout_A0_03 + 1000))();
  }
  uStack00000008 = 0x69;
  uStack00000009 = 0x6e;
  uStack0000000a = 0x66;
  sStack00000004 = (short)((uint)_DAT_00028868 >> 0x10);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_04 != (int *)0x0) {
    sStack00000004 = (short)((uint)extraout_A0_04 >> 0x10);
    uVar3 = sStack00000004;
    if (_DAT_00015df0 == 4) {
      uStack00000008 = 0;
      (**(code **)(*extraout_A0_04 + 0x334))();
      (**(code **)(*(int *)CONCAT22(uVar3,(short)extraout_A0_04) + 0x70))();
    }
    else {
      uStack00000008 = _DAT_00015df0 == 0;
      (**(code **)(*extraout_A0_04 + 0x3a8))();
    }
  }
  uStack00000008 = 0x62;
  uStack00000009 = 0x75;
  uStack0000000a = 0x69;
  sStack00000004 = (short)((uint)_DAT_00028868 >> 0x10);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_05 != (int *)0x0) {
    sStack00000004 = (short)((uint)extraout_A0_05 >> 0x10);
    uVar3 = sStack00000004;
    if (_DAT_00015df0 == 4) {
      uStack00000008 = 0;
      (**(code **)(*extraout_A0_05 + 0x334))();
      (**(code **)(*(int *)CONCAT22(uVar3,(short)extraout_A0_05) + 0x70))();
    }
    else {
      uStack00000008 = _DAT_00015df0 == 1;
      (**(code **)(*extraout_A0_05 + 0x3a8))();
    }
  }
  uStack00000008 = 0x70;
  uStack00000009 = 0x72;
  uStack0000000a = 0x6f;
  sStack00000004 = (short)((uint)_DAT_00028868 >> 0x10);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_06 != (int *)0x0) {
    sStack00000004 = (short)((uint)extraout_A0_06 >> 0x10);
    uVar3 = sStack00000004;
    if (_DAT_00015df0 == 4) {
      uStack00000008 = 0;
      (**(code **)(*extraout_A0_06 + 0x334))();
      (**(code **)(*(int *)CONCAT22(uVar3,(short)extraout_A0_06) + 0x70))();
    }
    else {
      uStack00000008 = _DAT_00015df0 == 2;
      (**(code **)(*extraout_A0_06 + 0x3a8))();
    }
  }
  uStack00000008 = 0x76;
  uStack00000009 = 0x65;
  uStack0000000a = 99;
  sStack00000004 = (short)((uint)_DAT_00028868 >> 0x10);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_07 != (int *)0x0) {
    sStack00000004 = (short)((uint)extraout_A0_07 >> 0x10);
    uVar3 = sStack00000004;
    if (_DAT_00015df0 == 4) {
      uStack00000008 = 0;
      (**(code **)(*extraout_A0_07 + 0x334))();
      (**(code **)(*(int *)CONCAT22(uVar3,(short)extraout_A0_07) + 0x70))();
    }
    else {
      uStack00000008 = _DAT_00015df0 == 3;
      (**(code **)(*extraout_A0_07 + 0x3a8))();
    }
  }
  uStack00000008 = (undefined1)((uint)_DAT_00028868 >> 0x18);
  uStack00000009 = (undefined1)((uint)_DAT_00028868 >> 0x10);
  uStack0000000a = (undefined1)((uint)_DAT_00028868 >> 8);
  sStack00000004 = 0;
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002948 at 00002948
// Size: 526 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002948(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_A0;
  char *extraout_A0_00;
  char *extraout_A0_01;
  char *pcVar3;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  undefined4 extraout_A0_04;
  int *extraout_A0_05;
  int *extraout_A0_06;
  int *extraout_A0_07;
  int *extraout_A0_08;
  char *pcVar4;
  int *unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  bool in_ZF;
  short sStack0000000c;
  undefined2 uStack0000000e;
  undefined1 uStack00000010;
  undefined1 uStack00000011;
  undefined1 uStack00000012;
  
  if (!in_ZF) {
    iVar2 = unaff_A6 + -0x32;
    uStack0000000e = (undefined2)((uint)iVar2 >> 0x10);
    uStack00000010 = (undefined1)((uint)iVar2 >> 8);
    uStack00000011 = (undefined1)iVar2;
    sStack0000000c = (short)unaff_A6 + -0x107a;
    func_0x00007320();
    uStack0000000e = (undefined2)((uint)extraout_A0 >> 0x10);
    uStack00000010 = (undefined1)((uint)extraout_A0 >> 8);
    uStack00000011 = (undefined1)extraout_A0;
    sStack0000000c = (short)unaff_A3;
    (**(code **)(*unaff_A3 + 1000))();
  }
  if (*(char *)((*(uint *)(*(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) == '\x0f') {
      uStack00000010 = 0;
      uStack00000011 = 0x75;
      uStack00000012 = 0;
      sStack0000000c = 0;
      uStack0000000e = 0x2a00;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8();
      pcVar3 = (char *)(unaff_A6 + -0x32);
      pcVar4 = extraout_A0_01;
      do {
        cVar1 = *pcVar4;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    else {
      iVar2 = _DAT_0002884c + (short)*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15d9) * 0x14
      ;
      uStack00000010 = (undefined1)((uint)iVar2 >> 0x18);
      uStack00000011 = (undefined1)((uint)iVar2 >> 0x10);
      uStack00000012 = (undefined1)((uint)iVar2 >> 8);
      sStack0000000c = 0x75;
      uStack0000000e = 4;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002ad8();
      sStack0000000c = (short)((uint)extraout_A0_02 >> 0x10);
      uStack0000000e = (undefined2)extraout_A0_02;
      func_0x000076d0();
    }
  }
  else {
    uStack00000010 = 0;
    uStack00000011 = 0x75;
    uStack00000012 = 0;
    sStack0000000c = 0;
    uStack0000000e = 0x29ce;
                    /* WARNING: Call to offcut address within same function */
    func_0x00002ad8();
    pcVar3 = (char *)(unaff_A6 + -0x32);
    pcVar4 = extraout_A0_00;
    do {
      cVar1 = *pcVar4;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  uStack00000010 = 0x6f;
  uStack00000011 = 0x77;
  uStack00000012 = 0x6e;
  sStack0000000c = (short)((uint)unaff_A2 >> 0x10);
  uStack0000000e = SUB42(unaff_A2,0);
  (**(code **)(*unaff_A2 + 0x188))();
  if (extraout_A0_03 != (int *)0x0) {
    iVar2 = unaff_A6 + -0x32;
    uStack0000000e = (undefined2)((uint)iVar2 >> 0x10);
    uStack00000010 = (undefined1)((uint)iVar2 >> 8);
    uStack00000011 = (undefined1)iVar2;
    sStack0000000c = (short)unaff_A6 + -0x117a;
    func_0x00007320();
    uStack0000000e = (undefined2)((uint)extraout_A0_04 >> 0x10);
    uStack00000010 = (undefined1)((uint)extraout_A0_04 >> 8);
    uStack00000011 = (undefined1)extraout_A0_04;
    sStack0000000c = (short)extraout_A0_03;
    (**(code **)(*extraout_A0_03 + 1000))();
  }
  uStack00000010 = 0x69;
  uStack00000011 = 0x6e;
  uStack00000012 = 0x66;
  sStack0000000c = (short)((uint)_DAT_00028868 >> 0x10);
  uStack0000000e = SUB42(_DAT_00028868,0);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_05 != (int *)0x0) {
    uStack0000000e = SUB42(extraout_A0_05,0);
    sStack0000000c = (short)((uint)extraout_A0_05 >> 0x10);
    if (_DAT_00015df0 == 4) {
      uStack00000010 = 0;
      (**(code **)(*extraout_A0_05 + 0x334))();
      (**(code **)(*extraout_A0_05 + 0x70))();
    }
    else {
      uStack00000010 = _DAT_00015df0 == 0;
      (**(code **)(*extraout_A0_05 + 0x3a8))();
    }
  }
  uStack00000010 = 0x62;
  uStack00000011 = 0x75;
  uStack00000012 = 0x69;
  sStack0000000c = (short)((uint)_DAT_00028868 >> 0x10);
  uStack0000000e = SUB42(_DAT_00028868,0);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_06 != (int *)0x0) {
    uStack0000000e = SUB42(extraout_A0_06,0);
    sStack0000000c = (short)((uint)extraout_A0_06 >> 0x10);
    if (_DAT_00015df0 == 4) {
      uStack00000010 = 0;
      (**(code **)(*extraout_A0_06 + 0x334))();
      (**(code **)(*extraout_A0_06 + 0x70))();
    }
    else {
      uStack00000010 = _DAT_00015df0 == 1;
      (**(code **)(*extraout_A0_06 + 0x3a8))();
    }
  }
  uStack00000010 = 0x70;
  uStack00000011 = 0x72;
  uStack00000012 = 0x6f;
  sStack0000000c = (short)((uint)_DAT_00028868 >> 0x10);
  uStack0000000e = SUB42(_DAT_00028868,0);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_07 != (int *)0x0) {
    uStack0000000e = SUB42(extraout_A0_07,0);
    sStack0000000c = (short)((uint)extraout_A0_07 >> 0x10);
    if (_DAT_00015df0 == 4) {
      uStack00000010 = 0;
      (**(code **)(*extraout_A0_07 + 0x334))();
      (**(code **)(*extraout_A0_07 + 0x70))();
    }
    else {
      uStack00000010 = _DAT_00015df0 == 2;
      (**(code **)(*extraout_A0_07 + 0x3a8))();
    }
  }
  uStack00000010 = 0x76;
  uStack00000011 = 0x65;
  uStack00000012 = 99;
  sStack0000000c = (short)((uint)_DAT_00028868 >> 0x10);
  uStack0000000e = SUB42(_DAT_00028868,0);
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_08 != (int *)0x0) {
    uStack0000000e = SUB42(extraout_A0_08,0);
    sStack0000000c = (short)((uint)extraout_A0_08 >> 0x10);
    if (_DAT_00015df0 == 4) {
      uStack00000010 = 0;
      (**(code **)(*extraout_A0_08 + 0x334))();
      (**(code **)(*extraout_A0_08 + 0x70))();
    }
    else {
      uStack00000010 = _DAT_00015df0 == 3;
      (**(code **)(*extraout_A0_08 + 0x3a8))();
    }
  }
  uStack00000010 = (undefined1)((uint)_DAT_00028868 >> 0x18);
  uStack00000011 = (undefined1)((uint)_DAT_00028868 >> 0x10);
  uStack00000012 = (undefined1)((uint)_DAT_00028868 >> 8);
  sStack0000000c = 0;
  uStack0000000e = 0x2c4e;
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002b58 at 00002b58
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b58(void)

{
  int *extraout_A0;
  int *extraout_A0_00;
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x3a8))();
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0 + 0x334))();
      (**(code **)(*extraout_A0 + 0x70))();
    }
    else {
      (**(code **)(*extraout_A0 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x188))();
  if (extraout_A0_00 != (int *)0x0) {
    if (_DAT_00015df0 == 4) {
      (**(code **)(*extraout_A0_00 + 0x334))();
      (**(code **)(*extraout_A0_00 + 0x70))();
    }
    else {
      (**(code **)(*extraout_A0_00 + 0x3a8))();
    }
  }
  (**(code **)(*_DAT_00028868 + 0x194))();
  return;
}



// Function: FUN_00002c58 at 00002c58
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c58(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  switch(_DAT_00015df0) {
  case 0:
  case 1:
    uVar2 = 0;
    uVar1 = 1;
    func_0x00006e70(1,0);
    func_0x00006e80(0,uVar1,uVar2);
    func_0x00006e78(0);
    break;
  case 2:
  case 3:
    func_0x000032c8();
    break;
  case 4:
    func_0x00002940(0);
    func_0x00006e78(0);
  }
  return;
}



// Function: FUN_00002cce at 00002cce
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002cce(undefined2 param_1)

{
  switch(_DAT_00015df0) {
  case 0:
  case 1:
    FUN_000009ea();
    break;
  case 2:
    FUN_000032fa(param_1);
    break;
  case 3:
    FUN_00003658(param_1);
    break;
  case 4:
    FUN_000009ea();
  }
  return;
}



// Function: FUN_00002d52 at 00002d52
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d52(void)

{
  _DAT_000288a0 = 0;
  _DAT_000288aa = 0;
  FUN_00001d08(_DAT_000288a2);
  return;
}



// Function: FUN_00002d78 at 00002d78
// Size: 340 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d78(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined1 auStack_38 [50];
  undefined2 local_6;
  
  if (((param_1._0_2_ == _DAT_000288a0) && (_DAT_000288a2 != (int *)0x0)) && (*_DAT_000288a2 != 0))
  {
    return;
  }
  if ((_DAT_000288aa == 0) || (_DAT_000288a2 == (int *)0x0)) {
    _DAT_000288aa = 1;
    FUN_00001e98(8000);
    _DAT_000288a2 = extraout_A0;
  }
  else if (*_DAT_000288a2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00002d52(_DAT_000288a2);
  _DAT_000288a0 = param_1._0_2_;
  _DAT_000288a6 = extraout_A0_00;
  local_6 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
  func_0x00002ae0(CONCAT22(0x16,_DAT_000288a0 + -1),0x27760,0x27760);
  func_0x000076d0(auStack_38,extraout_A0_01);
  if (_DAT_000288a0 == 1) {
    uVar1 = 0x43545920;
  }
  else {
    uVar1 = 0x53504320;
  }
  FUN_00002808(uVar1,1);
  FUN_00002820(extraout_A0_02,_DAT_000288a6,8000);
  FUN_00002818((short)extraout_A0_02);
  for (sVar2 = 0; sVar2 < 8000; sVar2 = sVar2 + 1) {
    if (*(char *)(_DAT_000288a6 + sVar2) == '|') {
      *(undefined1 *)(_DAT_000288a6 + sVar2) = 0;
    }
  }
  if (_DAT_000288a2 != (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002ede at 00002ede
// Size: 304 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002ede(undefined2 param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int extraout_A0;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_e [10];
  
  *param_4 = '\0';
  *param_3 = '\0';
  *param_2 = '\0';
  FUN_00002d78();
  FUN_00002d52((short)_DAT_000288a2);
  _DAT_000288a6 = extraout_A0;
  *param_4 = '\0';
  *param_3 = '\0';
  *param_2 = '\0';
  sVar4 = 0;
  func_0x000076d0(auStack_e,0x5dbc,param_1);
  sVar3 = 0;
  do {
    if (7999 < sVar3) {
      if (_DAT_000288a2 == 0) {
        return 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(char *)(_DAT_000288a6 + sVar3) == '#') &&
       (iVar2 = func_0x00007710((short)_DAT_000288a6 + sVar3 + 1,(short)auStack_e), iVar2 == 0)) {
      for (; sVar3 < 8000; sVar3 = sVar3 + 1) {
        if ((*(char *)(_DAT_000288a6 + sVar3) != '\0') || (sVar4 != 0)) {
          if ((*(char *)(_DAT_000288a6 + sVar3) == '\0') && (sVar4 == 1)) {
            pcVar5 = param_3;
            pcVar6 = (char *)(sVar3 + 1 + _DAT_000288a6);
            do {
              cVar1 = *pcVar6;
              *pcVar5 = cVar1;
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            sVar4 = 2;
            goto LAB_00002fe6;
          }
          if ((*(char *)(_DAT_000288a6 + sVar3) != '\0') || (sVar4 != 2)) goto LAB_00002fe6;
          pcVar5 = param_4;
          pcVar6 = (char *)(sVar3 + 1 + _DAT_000288a6);
          do {
            cVar1 = *pcVar6;
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          break;
        }
        pcVar5 = param_2;
        pcVar6 = (char *)(sVar3 + 1 + _DAT_000288a6);
        do {
          cVar1 = *pcVar6;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        sVar4 = 1;
LAB_00002fe6:
      }
    }
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_00003010 at 00003010
// Size: 166 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003010(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  short sVar4;
  char acStack_14 [16];
  
  pcVar2 = acStack_14;
  pcVar3 = (char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c8);
  do {
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_000027d0(0x15db0,0x15d9a,0x15d90,(short)acStack_14,0xf);
  if (cVar1 != '\0') {
    pcVar2 = (char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15c8);
    pcVar3 = acStack_14;
    do {
      cVar1 = *pcVar3;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    sVar4 = _DAT_00015dee;
    func_0x00007450();
    func_0x00007558(_DAT_00015dee,sVar4);
  }
  FUN_00000e3e();
  return;
}



// Function: FUN_000030b6 at 000030b6
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000030b6(undefined2 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  sVar4 = -1;
  sVar5 = 1000;
  sVar1 = *(short *)(_DAT_0002884c + 0x110);
  sVar3 = 0;
  do {
    if (*(short *)(_DAT_0002884c + 0x810) <= sVar3) {
      return sVar4;
    }
    iVar6 = sVar3 * 0x20 + _DAT_0002884c;
    if (((ushort)(1 << ((int)sVar1 & 0x3fU)) & *(ushort *)(iVar6 + 0x830)) != 0) {
      if ((*(short *)(_DAT_0002884c + 0x124) != 0) && (param_2._0_2_ != 0)) {
        sVar2 = FUN_00002860(*(undefined2 *)(iVar6 + 0x814),0x10001);
        if (sVar2 == 0) goto LAB_00003160;
      }
      sVar2 = func_0x00006e48(param_1,*(undefined4 *)(sVar3 * 0x20 + _DAT_0002884c + 0x812));
      if (sVar2 < sVar5) {
        sVar5 = sVar2;
        sVar4 = sVar3;
      }
    }
LAB_00003160:
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_0000317a at 0000317a
// Size: 106 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000317a(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1._0_2_ + _DAT_00015dee * 0x42 + _DAT_0002884c + 0x15da);
  if ((-1 < cVar1) && ((int)_DAT_00015de8 != (int)cVar1)) {
    _DAT_00015de8 = (short)cVar1;
    FUN_000031e4();
    (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))(*(int **)(_DAT_000297f4 + 0x80),0,0);
  }
  return;
}



// Function: FUN_000031e4 at 000031e4
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031e4(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = _DAT_00015dee;
  sVar1 = FUN_000032b0(_DAT_00015de8);
  *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f0) = DAT_00015de9;
  iVar2 = _DAT_00015dee * 0x42 + _DAT_0002884c;
  *(undefined1 *)(iVar2 + 0x15f1) = *(undefined1 *)(sVar1 + iVar2 + 0x15de);
  sVar1 = _DAT_00015dee;
  func_0x00007450(sVar3);
  FUN_000011ca(sVar1);
  FUN_00002c58();
  FUN_00000e5c();
  return;
}



// Function: FUN_0000325e at 0000325e
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000325e(void)

{
  short sVar1;
  
  *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) = 0;
  *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f6) = 0;
  *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f8) = 0xffff;
  *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15fa) = 0xffff;
  _DAT_00015de8 = 0xffff;
  *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f0) = 0xff;
  sVar1 = _DAT_00015dee;
  func_0x00007450();
  FUN_000011ca(sVar1);
  FUN_00002c58();
  FUN_00000e5c();
  return;
}



// Function: FUN_000032b0 at 000032b0
// Size: 15 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032b0(void)

{
  int in_A0;
  short sVar1;
  
  *(undefined2 *)(in_A0 + 0x15fa) = 0xffff;
  _DAT_00015de8 = 0xffff;
  *(undefined1 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f0) = 0xff;
  sVar1 = _DAT_00015dee;
  func_0x00007450();
  FUN_000011ca(sVar1);
  FUN_00002c58();
  FUN_00000e5c();
  return;
}



// Function: FUN_000032c0 at 000032c0
// Size: 55 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032c0(void)

{
  short in_D0w;
  short sVar1;
  
  *(undefined1 *)((int)in_D0w * (int)_DAT_00015dee + _DAT_0002884c + 0x15f0) = 0xff;
  sVar1 = _DAT_00015dee;
  func_0x00007450();
  FUN_000011ca(sVar1);
  FUN_00002c58();
  FUN_00000e5c();
  return;
}



// Function: FUN_000032f8 at 000032f8
// Size: 2 bytes

void FUN_000032f8(void)

{
  return;
}



// Function: FUN_000032fa at 000032fa
// Size: 410 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032fa(undefined2 param_1,undefined4 param_2)

{
  char cVar2;
  short sVar1;
  short local_6;
  
  if (((param_2._0_2_ == 1) && (cVar2 = func_0x00001d88(), cVar2 == '\0')) && (_DAT_0002886c == 0))
  {
    sVar1 = FUN_00002b58(param_1,0);
    if (sVar1 != _DAT_00015dee) {
      FUN_000009ea();
    }
  }
  else {
    if (*(char *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f1) < '\x01') {
      return;
    }
    sVar1 = FUN_00002b58(param_1,0);
    func_0x000032b8();
    if (sVar1 == _DAT_00015dee) {
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f6) = 0;
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f8) = 0xffff;
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15fa) = 0xffff;
      sVar1 = _DAT_00015dee;
      func_0x00007450();
      FUN_000011ca(sVar1);
      FUN_00002c58();
    }
    else if (local_6 < 4) {
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f6) = 1;
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15f8) =
           *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4);
      *(undefined2 *)(_DAT_00015dee * 0x42 + _DAT_0002884c + 0x15fa) =
           *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6);
      sVar1 = _DAT_00015dee;
      func_0x00007450();
      FUN_000011ca(sVar1);
      FUN_00002c58();
    }
  }
  FUN_00000e5c();
  return;
}



// Function: FUN_00003494 at 00003494
// Size: 452 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003494(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_e [8];
  undefined2 local_6;
  
  if (param_1._0_2_ == 2) {
    _DAT_0002886e = (short)(_DAT_0002886e == 0);
    func_0x000032c8();
  }
  else if (param_1._0_2_ == 0) {
    if (_DAT_0002886c == 0) {
      _DAT_0002886c = 1;
      uVar1 = 0;
      uVar5 = _DAT_00015dee;
      FUN_00002948(0,0xffff);
      uVar4 = 0;
      func_0x00006e78(0);
      FUN_000032c0(uVar4,uVar1,uVar5);
    }
    else if (_DAT_0002886c == 1) {
      _DAT_0002886c = 0;
      func_0x000032c8();
      FUN_000032c0();
    }
    else if (_DAT_0002886c == 2) {
      _DAT_0002886c = 1;
      uVar2 = 0;
      uVar5 = _DAT_00015dee;
      FUN_00002948(0,0xffff);
      uVar1 = 0;
      func_0x00006e78(0);
      uVar4 = 0;
      FUN_000032c0(uVar1,uVar2,uVar5);
      FUN_000032c0(uVar4);
    }
  }
  else if (param_1._0_2_ == 1) {
    if (_DAT_0002886c == 0) {
      _DAT_0002886c = 2;
      puVar7 = &local_6;
      puVar6 = auStack_e;
      uVar4 = _DAT_00015dee;
      func_0x000032b8((short)((uint)puVar6 >> 0x10),(short)((uint)puVar7 >> 0x10));
      uVar2 = 0;
      uVar5 = _DAT_00015dee;
      FUN_00002948(0,local_6);
      uVar1 = 0;
      func_0x00006e78(0);
      FUN_000032c0(uVar1,uVar2,uVar5,uVar4,(short)puVar6,(short)puVar7);
    }
    else if (_DAT_0002886c == 1) {
      _DAT_0002886c = 2;
      puVar7 = &local_6;
      puVar6 = auStack_e;
      uVar4 = _DAT_00015dee;
      func_0x000032b8((short)((uint)puVar6 >> 0x10),(short)((uint)puVar7 >> 0x10));
      uVar3 = 0;
      uVar5 = _DAT_00015dee;
      FUN_00002948(0,local_6);
      uVar2 = 0;
      func_0x00006e78(0);
      uVar1 = 0;
      FUN_000032c0(uVar2,uVar3,uVar5,uVar4,(short)puVar6,(short)puVar7);
      FUN_000032c0(uVar1);
    }
    else if (_DAT_0002886c == 2) {
      _DAT_0002886c = 0;
      func_0x000032c8();
      FUN_000032c0();
    }
  }
  (**(code **)(**(int **)(_DAT_000297f4 + 0x80) + 0x20))((short)*(int **)(_DAT_000297f4 + 0x80),0,0)
  ;
  FUN_00000e5c();
  return;
}



// Function: FUN_00003658 at 00003658
// Size: 410 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003658(undefined2 param_1,undefined4 param_2)

{
  char cVar2;
  short sVar1;
  short sVar3;
  int iVar4;
  short asStackY_1000c [32742];
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 auStack_18 [8];
  short local_10;
  short local_e;
  short local_c [4];
  
  if ((param_2._0_2_ == 1) && (cVar2 = func_0x00001d88(), cVar2 != '\0')) {
    FUN_000032fa(param_1);
    _DAT_0002886c = 0;
    return;
  }
  sVar1 = FUN_00002b58(param_1,0);
  func_0x000032b8((short)((uint)auStack_18 >> 0x10),(short)((uint)&local_10 >> 0x10));
  func_0x000032b8();
  if (((((_DAT_0002886c == 2) && (0 < local_e)) && ((int)local_10 + (int)local_e < 5)) &&
      ((sVar1 != local_c[0] && (sVar1 != local_c[1])))) &&
     ((sVar1 != local_c[2] && (sVar1 != local_c[3])))) {
    for (sVar3 = 0; sVar3 < local_e; sVar3 = sVar3 + 1) {
      *(undefined2 *)(local_c[sVar3] * 0x42 + _DAT_0002884c + 0x15f8) =
           *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c4);
      *(undefined2 *)(local_c[sVar3] * 0x42 + _DAT_0002884c + 0x15fa) =
           *(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6);
      func_0x00007450();
    }
  }
  if (_DAT_0002886c == 1) {
    FUN_000032fa(param_1);
  }
  sVar3 = _DAT_00015dee;
  if ((_DAT_0002886c != 1) && (sVar1 < 100)) {
    sVar3 = sVar1;
  }
  _DAT_0002886c = 0;
  iVar4 = sVar3 * 0x42 + _DAT_0002884c;
  uVar7 = *(undefined2 *)(iVar4 + 0x15c6);
  uVar6 = 3;
  FUN_000009ea(*(undefined2 *)(iVar4 + 0x15c4));
  func_0x000032c8();
  uVar5 = 0;
  FUN_000032c0(uVar6,uVar7);
  FUN_000032c0(uVar5);
  FUN_00000e5c();
  return;
}



// Function: FUN_00003b08 at 00003b08
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003b08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



