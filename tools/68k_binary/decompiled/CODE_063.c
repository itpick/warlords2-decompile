// Warlords II - Decompiled 68k Code
// Segment: CODE_063
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000088 at 00000088
// Size: 168 bytes

void FUN_00000088(int param_1,int param_2,int *param_3,undefined2 param_4,undefined1 param_5)

{
  int *piVar1;
  char cVar3;
  undefined2 uVar2;
  int *extraout_A0;
  
  if (param_2 == 8) {
    if (param_3 != (int *)0x0) {
      cVar3 = (**(code **)(*param_3 + 0x410))();
      if (cVar3 != '\0') {
        piVar1 = *(int **)(param_1 + 8);
        func_0x00001bf0((char)piVar1);
        if (*(int *)((int)param_3 + 0x16) == 0x63617272) {
          uVar2 = 0x6f75;
        }
        else {
          uVar2 = 0x7272;
        }
        (**(code **)(*piVar1 + 0x188))((short)piVar1,uVar2);
        if (extraout_A0 != (int *)0x0) {
          (**(code **)(*extraout_A0 + 0x424))();
        }
      }
    }
    FUN_00000e6c();
  }
  FUN_00000c40(param_1,param_2,(short)param_3,param_4,param_5);
  return;
}



// Function: FUN_00000130 at 00000130
// Size: 162 bytes

void FUN_00000130(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x16);
  if (iVar1 == 0x646f776e) {
    FUN_000013b0();
  }
  else if (iVar1 == 0x6c656674) {
    FUN_000012a8();
  }
  else if (iVar1 == 0x6f766572) {
    FUN_0000180e(CONCAT22((short)((param_2 & 0x7f00) / 0x100),(short)param_2) & 0xffff00ff);
  }
  else if (iVar1 == 0x72696768) {
    FUN_00001272();
  }
  else if (iVar1 == 0x75702020) {
    FUN_00001420();
  }
  else {
    func_0x00004a30(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000001d2 at 000001d2
// Size: 218 bytes

void FUN_000001d2(undefined2 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if (param_2 == 0x646f6e65) {
      func_0x00005360();
    }
    else if (param_2 == 0x646f776e) {
      func_0x00005360();
    }
    else if (param_2 == 0x6c656674) {
      func_0x00005360();
    }
    else if (param_2 == 0x6f766572) {
      func_0x00005358();
      func_0x00005348(0xd414,0xd3fc);
    }
    else if (param_2 == 0x72696768) {
      func_0x00005360();
    }
    else if (param_2 == 0x75702020) {
      func_0x00005360();
    }
    else {
      func_0x00005308(param_1,(short)param_2);
    }
  }
  else {
    FUN_00001892();
  }
  return;
}



// Function: FUN_000002ac at 000002ac
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002ac(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  short local_a;
  undefined4 local_8;
  
  uVar2 = 0x10;
  if ((0x61726d2f < param_2) && (param_2 < 0x61726d38)) {
    func_0x00002b28(*(undefined2 *)
                     (*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854 + 2),
                    &local_a);
    if ((short)((short)param_2 + -0x6d30) < local_a) {
      bVar1 = 0x12;
    }
    else {
      bVar1 = 0x10;
    }
    uVar2 = (ushort)bVar1;
  }
  local_8 = CONCAT22(*(undefined2 *)((short)uVar2 * 0x1c + 0x140aa),
                     *(undefined2 *)((short)uVar2 * 0x1c + 0x140a8));
  *param_3 = local_8;
  return;
}



// Function: FUN_0000033e at 0000033e
// Size: 482 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000033e(int param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [16];
  
  if (*(int *)(param_1 + 0x16) == 0x63617272) {
    psVar2 = (short *)(&DAT_0002841c + (param_2._0_2_ + -1) * 2);
  }
  else {
    psVar2 = (short *)(&DAT_00028458 + (param_2._0_2_ + -1) * 2);
  }
  sVar1 = *psVar2;
  if (*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd28) == '\0') {
    func_0x000076d0(auStack_14,0x1d3e4);
  }
  else if (*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd26) == '\b') {
    func_0x000076d0(auStack_14,0x1d3dc);
  }
  else if (*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd26) == '\x02') {
    func_0x000076d0(auStack_14,0x1d3d4,(int)*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd27));
  }
  else if (*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd26) == '\x01') {
    func_0x000076d0(auStack_14,0x1d3cc,(int)*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd27));
  }
  else if (*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd26) == '\x05') {
    func_0x000076d0(auStack_14,0x27f16);
  }
  else if (*(char *)(sVar1 * 0x1e + _DAT_0002884c + 0xd26) == '\x06') {
    func_0x000076d0(auStack_14,0x1d3c7);
  }
  else {
    iVar3 = sVar1 * 0x1e + _DAT_0002884c;
    if (*(char *)(iVar3 + 0xd26) == '\a') {
      func_0x000076d0(auStack_14,0x1d3be,(int)*(char *)(iVar3 + 0xd27));
    }
  }
  func_0x000076d0(auStack_48,0x1d3b6,sVar1 * 0x1e + _DAT_0002884c + 0xd12,auStack_14);
  func_0x00007350();
  local_20 = *(undefined4 *)(param_1 + 0x9c);
  local_1c = *(undefined4 *)(param_1 + 0xa0);
  local_18 = *(undefined4 *)(param_1 + 0xa4);
  func_0x00007310();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000055c at 0000055c
// Size: 44 bytes

void FUN_0000055c(int *param_1,undefined4 param_2)

{
  func_0x00004c70(param_1,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,8,param_2);
  return;
}



// Function: FUN_00000588 at 00000588
// Size: 94 bytes

void FUN_00000588(int param_1,undefined4 param_2,int param_3,undefined2 *param_4)

{
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(short *)(param_3 + 0x26) == 1) {
    local_8 = *param_4;
    local_6 = param_4[1];
    func_0x00000238(param_1,param_2,param_3,&local_8);
  }
  else if (*(int *)(param_1 + 0x16) == 0x67726f75) {
    FUN_00001420();
  }
  else {
    FUN_000013b0();
  }
  return;
}



// Function: FUN_000005e6 at 000005e6
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005e6(short *param_1,int param_2)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  
  if (-1 < param_2) {
    *(undefined1 *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd28) = 3;
    sVar3 = *(short *)(_DAT_0002884c + 0x182);
    do {
      sVar2 = sVar3 + -1;
      if (sVar3 == 0) goto LAB_00000642;
      sVar3 = sVar2;
    } while ((short *)(sVar2 * 0x16 + _DAT_00028854) != param_1);
    *(short *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd2a) = sVar2;
LAB_00000642:
    if (param_2._0_2_ < 8) {
      pbVar1 = (byte *)(param_1[1] * 0x70 + _DAT_00028858 + (int)*param_1);
      *pbVar1 = *pbVar1 & 0xbf;
    }
  }
  return;
}



// Function: FUN_00000668 at 00000668
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000668(short *param_1,int param_2)

{
  bool bVar1;
  
  if (-1 < param_2) {
    if (*(char *)((*(uint *)(param_1[1] * 0xe0 + _DAT_00028850 + *param_1 * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\x02') {
      *(undefined1 *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd28) = 0;
      if ((_DAT_00028952 == 0) &&
         (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) != 1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        func_0x00002a10();
      }
    }
    else {
      *(undefined1 *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd28) = 1;
      *(undefined2 *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd2a) = 0;
      *(short *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd2c) = *param_1;
      *(short *)(param_2._0_2_ * 0x1e + _DAT_0002884c + 0xd2e) = param_1[1];
    }
  }
  return;
}



// Function: FUN_00000738 at 00000738
// Size: 488 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000738(void)

{
  int *piVar1;
  short sVar3;
  int iVar2;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar5 = 1000;
  _DAT_000284ac = 0;
  sVar4 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar3 = sVar4 + -1, sVar4 != 0) {
    iVar2 = sVar3 * 0x16 + _DAT_00028854;
    sVar4 = sVar3;
    if ((*(char *)(iVar2 + 4) == '\x1c') && ((int)_DAT_00028846 == (int)*(char *)(iVar2 + 5))) {
      iVar2 = (int)_DAT_000284ac;
      _DAT_000284ac = _DAT_000284ac + 1;
      *(short *)(&DAT_00028498 + iVar2 * 2) = sVar3;
    }
  }
  if (0 < _DAT_000284ac) {
    for (sVar4 = 0; sVar4 < _DAT_000284ac; sVar4 = sVar4 + 1) {
      sVar3 = func_0x00006e48(*(undefined2 *)(_DAT_0002884c + 0x180),
                              *(undefined4 *)
                               (*(short *)(&DAT_00028498 + sVar4 * 2) * 0x16 + _DAT_00028854));
      if (sVar3 < sVar5) {
        sVar5 = sVar3;
        _DAT_000284ae = sVar4;
      }
    }
    piVar1 = *(int **)(_DAT_000297f4 + 0x80);
    (**(code **)(*piVar1 + 0x118))();
    if (_DAT_000284b0 == (int *)0x0) {
      (**(code **)(*_DAT_000257ee + 0x68))();
      _DAT_000284b0 = extraout_A0;
      func_0x00001bf0(extraout_A0);
    }
    FUN_00000920();
    FUN_00000e6c();
    FUN_00001778();
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = func_0x000076a8(auStack_4a);
    if (iVar2 == 0) {
      if (_DAT_000284b0 != (int *)0x0) {
        (**(code **)(*_DAT_000284b0 + 0x40c))();
        (**(code **)(*_DAT_000284b0 + 0x3a0))();
        _DAT_000284b0 = (int *)0x0;
        func_0x00003e20((short)piVar1,0x3fa);
        func_0x00003e20(piVar1,0x3fb);
      }
      _DAT_00025f52 = local_10;
    }
    else {
      if (_DAT_000284b0 != (int *)0x0) {
        (**(code **)(*_DAT_000284b0 + 0x3a0))();
      }
      _DAT_000284b0 = (int *)0x0;
      func_0x00001c10();
    }
  }
  return;
}



// Function: FUN_00000920 at 00000920
// Size: 798 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000920(void)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  undefined2 extraout_A0w;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  undefined2 extraout_A0w_04;
  undefined2 extraout_A0w_05;
  undefined2 extraout_A0w_06;
  undefined2 extraout_A0w_07;
  undefined2 extraout_A0w_08;
  undefined2 *puVar7;
  int iVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 auStack_85e [256];
  undefined1 auStack_75e [256];
  undefined1 auStack_65e [256];
  undefined1 auStack_55e [256];
  undefined1 auStack_45e [256];
  undefined1 auStack_35e [256];
  undefined1 auStack_25e [256];
  undefined1 auStack_15e [256];
  short sStack_5e;
  int iStack_5c;
  short sStack_58;
  short local_56;
  undefined1 auStack_54 [80];
  
  if (_DAT_000284b0 != (int *)0x0) {
    puVar7 = (undefined2 *)(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854);
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    uVar12 = (undefined2)((uint)&local_56 >> 0x10);
    uVar11 = uVar5;
    func_0x00002b28((char)uVar1,(char)&local_56);
    uVar10 = (undefined1)uVar5;
    sVar2 = func_0x00004938(uVar1);
    uVar9 = 0xe;
    sVar3 = func_0x00002b58(uVar1,1);
    func_0x00007320(auStack_15e,
                    *(char *)(_DAT_00028854 + 10 +
                             *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16) * 0x14 +
                    (short)_DAT_0002884c + 0x224,uVar5,uVar9,uVar10,uVar11,uVar12);
    func_0x00006e38((char)_DAT_000284b0,0x6e616d65,extraout_A0w);
    (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x6d30);
    if (extraout_A0 != 0) {
      uVar10 = 0x3a;
      func_0x00004768((short)extraout_A0,_DAT_00028846);
      func_0x00004778((short)extraout_A0,0,uVar10);
    }
    sVar6 = 1;
    for (sVar4 = 0; sVar4 < local_56; sVar4 = sVar4 + 1) {
      if (*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854 !=
          *(int *)(&DAT_000288d4 + sVar4 * 4)) {
        (**(code **)(*_DAT_000284b0 + 0x188))((char)_DAT_000284b0,(char)sVar6 + '0');
        if (extraout_A0_00 != 0) {
          uVar10 = 0xf4;
          func_0x00004768((short)extraout_A0_00,_DAT_00028846);
          func_0x00004778((short)extraout_A0_00,0,uVar10);
        }
        sVar6 = sVar6 + 1;
      }
    }
    for (; sVar6 < 8; sVar6 = sVar6 + 1) {
      (**(code **)(*_DAT_000284b0 + 0x188))((char)_DAT_000284b0,(char)sVar6 + '0');
      if (extraout_A0_01 != 0) {
        uVar10 = 0x56;
        func_0x00004768((short)extraout_A0_01,_DAT_00028846);
        func_0x00004778((short)extraout_A0_01,0,uVar10);
      }
    }
    func_0x00002ad8(-1 < sVar2);
    func_0x00007320((short)auStack_25e,extraout_A0w_00);
    func_0x00006e38((char)_DAT_000284b0,0x6974,extraout_A0w_01);
    func_0x00002ad8(6,_DAT_000284ae + 1,_DAT_000284ac);
    func_0x000076d0(auStack_54,extraout_A0w_02);
    func_0x00007320((short)auStack_35e,(short)auStack_54);
    func_0x00006e38((short)_DAT_000284b0,0x6d62,extraout_A0w_03);
    iVar8 = *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854;
    sVar2 = func_0x00002d58((short)iVar8);
    sVar2 = sVar2 + *(char *)(iVar8 + 8);
    if (9 < sVar2) {
      sVar2 = 9;
    }
    iVar8 = *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854;
    uVar5 = (undefined2)((uint)iVar8 >> 0x10);
    sVar4 = func_0x00002d60((char)iVar8);
    sVar2 = *(short *)(sVar2 * 2 + 0x15b54);
    func_0x00007320((char)auStack_45e,sVar3 * 0x42 + (short)_DAT_0002884c + 0x15c8,uVar5);
    func_0x00006e38((short)_DAT_000284b0,0x72,extraout_A0w_04);
    uVar5 = func_0x00002d58(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 +
                            (short)_DAT_00028854);
    func_0x000076d0(auStack_54,0x5a94,uVar5);
    func_0x00007320((short)auStack_55e,(short)auStack_54);
    func_0x00006e38((short)_DAT_000284b0,0x7474,extraout_A0w_05);
    func_0x000076d0(auStack_54,0x15a94,sVar4 + sVar2);
    func_0x00007320(auStack_65e,(short)auStack_54);
    func_0x00006e38(_DAT_000284b0,0x636f6d6d,extraout_A0w_06);
    sStack_58 = (short)*(char *)(_DAT_00028854 + 10 +
                                *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16);
    func_0x000076d0(auStack_54,0x15a90,
                    ((uint)(*(int *)(_DAT_0002884c + 0x5e4 + (int)sStack_58) << 6) >> 0x1e) + 1);
    func_0x00007320(auStack_75e,(short)auStack_54);
    func_0x00006e38(_DAT_000284b0,0x6c657665,extraout_A0w_07);
    sStack_5e = (short)*(char *)(_DAT_00028854 + 10 +
                                *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16);
    iStack_5c = _DAT_0002884c + 0x5e4;
    func_0x000076d0(auStack_54,0x15a90,*(uint *)(iStack_5c + sStack_5e) >> 0x1a);
    func_0x00007320(auStack_85e,(short)auStack_54);
    func_0x00006e38(_DAT_000284b0,0x65787065,extraout_A0w_08);
    func_0x00006e60(0x60000);
    FUN_00001110();
  }
  return;
}



// Function: FUN_00000c40 at 00000c40
// Size: 556 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c40(void)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short unaff_D3w;
  short unaff_D6w;
  short unaff_D7w;
  int in_A0;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 extraout_A0w_01;
  undefined2 extraout_A0w_02;
  undefined2 extraout_A0w_03;
  int unaff_A6;
  
  pbVar1 = (byte *)(in_A0 + 9 + unaff_D7w * 8);
  *pbVar1 = *pbVar1 | 2;
  sVar3 = func_0x00002d60(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854);
  sVar5 = *(short *)(unaff_D3w * 2 + 0x15b54);
  func_0x00007320(unaff_A6 + -0x45a,unaff_D6w * 0x42 + (short)_DAT_0002884c + 0x15c8);
  func_0x00006e38(_DAT_000284b0,0x6e656172,extraout_A0w);
  sVar4 = func_0x00002d58(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854);
  func_0x000076d0(unaff_A6 + -0x50,0x15a94,(int)sVar4);
  sVar4 = (short)unaff_A6;
  func_0x00007320(unaff_A6 + -0x55a,sVar4 + -0x50);
  func_0x00006e38(_DAT_000284b0,0x62617474,extraout_A0w_00);
  func_0x000076d0(unaff_A6 + -0x50,0x15a94,(int)(short)(sVar3 + sVar5));
  func_0x00007320(unaff_A6 + -0x65a,sVar4 + -0x50);
  func_0x00006e38(_DAT_000284b0,0x636f6d6d,extraout_A0w_01);
  sVar5 = (short)*(char *)(_DAT_00028854 + 10 + *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16
                          );
  *(short *)(unaff_A6 + -0x54) = sVar5;
  func_0x000076d0(unaff_A6 + -0x50,0x15a90,
                  ((uint)(*(int *)(_DAT_0002884c + 0x5e4 + (int)sVar5) << 6) >> 0x1e) + 1);
  func_0x00007320(unaff_A6 + -0x75a,sVar4 + -0x50);
  func_0x00006e38(_DAT_000284b0,0x6c657665,extraout_A0w_02);
  sVar5 = (short)*(char *)(_DAT_00028854 + 10 + *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16
                          );
  *(short *)(unaff_A6 + -0x5a) = sVar5;
  iVar2 = _DAT_0002884c + 0x5e4;
  *(int *)(unaff_A6 + -0x58) = iVar2;
  func_0x000076d0(unaff_A6 + -0x50,0x15a90,*(uint *)(iVar2 + sVar5) >> 0x1a);
  func_0x00007320(unaff_A6 + -0x85a,sVar4 + -0x50);
  func_0x00006e38(_DAT_000284b0,0x65787065,extraout_A0w_03);
  func_0x00006e60(0x60000);
  FUN_00001110();
  return;
}



// Function: FUN_00000e6c at 00000e6c
// Size: 676 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000e6c(void)

{
  undefined2 uVar1;
  char cVar3;
  undefined4 uVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined1 uVar4;
  undefined2 local_1c;
  
  (**(code **)(*_DAT_000284b0 + 0x188))(_DAT_000284b0,0x6c656674);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3a0))();
  }
  (**(code **)(*_DAT_000284b0 + 0x188))(_DAT_000284b0,0x72696768);
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x3a0))();
  }
  (**(code **)(*_DAT_000284b0 + 0x188))(_DAT_000284b0,0x75702020);
  (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x6e);
  (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x72);
  local_1c = SUB42(extraout_A0_01,0);
  uVar1 = local_1c;
  local_1c = SUB42(extraout_A0_02,0);
  if ((extraout_A0_03 != (int *)0x0) &&
     (cVar3 = (**(code **)(*extraout_A0_03 + 0x410))(), cVar3 != '\0')) {
    if (extraout_A0_01 != (int *)0x0) {
      (**(code **)(*extraout_A0_01 + 0x334))();
      uVar4 = 0x7e;
      (**(code **)(*extraout_A0_01 + 0x70))();
      (**(code **)(*extraout_A0_01 + 0x3a0))(uVar1,uVar4);
    }
    if (extraout_A0_02 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*extraout_A0_02 + 0x334))();
    uVar4 = 0xc0;
    (**(code **)(*extraout_A0_02 + 0x70))();
    uVar2 = (**(code **)(*extraout_A0_02 + 0x3a0))(local_1c,uVar4);
    return uVar2;
  }
  (**(code **)(*_DAT_000284b0 + 0x188))(_DAT_000284b0,0x67726f75);
  if ((extraout_A0_04 == (int *)0x0) ||
     (cVar3 = (**(code **)(*extraout_A0_04 + 0x410))(), cVar3 == '\0')) {
    if (extraout_A0_02 != (int *)0x0) {
      (**(code **)(*extraout_A0_02 + 0x334))();
      uVar4 = 0xb0;
      (**(code **)(*extraout_A0_02 + 0x70))();
      (**(code **)(*extraout_A0_02 + 0x3a0))(local_1c,uVar4);
    }
    uVar2 = 0;
    if (extraout_A0_01 != (int *)0x0) {
      (**(code **)(*extraout_A0_01 + 0x334))();
      uVar4 = 0xf0;
      (**(code **)(*extraout_A0_01 + 0x70))();
      uVar2 = (**(code **)(*extraout_A0_01 + 0x3a0))(uVar1,uVar4);
    }
    return uVar2;
  }
  if (extraout_A0_02 != (int *)0x0) {
    (**(code **)(*extraout_A0_02 + 0x334))();
    uVar4 = 0x32;
    (**(code **)(*extraout_A0_02 + 0x70))();
    (**(code **)(*extraout_A0_02 + 0x3a0))(local_1c,uVar4);
  }
  if (extraout_A0_01 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*extraout_A0_01 + 0x334))();
  uVar4 = 0x74;
  (**(code **)(*extraout_A0_01 + 0x70))();
  uVar2 = (**(code **)(*extraout_A0_01 + 0x3a0))(uVar1,uVar4);
  return uVar2;
}



// Function: FUN_00001110 at 00001110
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001110(void)

{
  undefined4 uVar1;
  short sVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_10;
  undefined2 uVar5;
  
  _DAT_00028496 = 0;
  _DAT_00028494 = 0;
  for (sVar2 = 0; sVar2 < _DAT_000283d8; sVar2 = sVar2 + 1) {
    if (*(char *)(*(short *)(&DAT_00027fda + sVar2 * 2) * 0x1e + _DAT_0002884c + 0xd28) == '\x03') {
      *(undefined2 *)(&DAT_0002841c + _DAT_00028494 * 2) =
           *(undefined2 *)(&DAT_00027fda + sVar2 * 2);
      _DAT_00028494 = _DAT_00028494 + 1;
    }
    else {
      *(undefined2 *)(&DAT_00028458 + _DAT_00028496 * 2) =
           *(undefined2 *)(&DAT_00027fda + sVar2 * 2);
      _DAT_00028496 = _DAT_00028496 + 1;
    }
  }
  (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x7272);
  if (extraout_A0 != (int *)0x0) {
    uVar5 = *(undefined2 *)(extraout_A0 + 0x1f);
    uVar3 = (undefined2)((uint)extraout_A0 >> 0x10);
    local_10 = SUB42(extraout_A0,0);
    uVar4 = uVar3;
    (**(code **)(*extraout_A0 + 0x45c))();
    sVar2 = _DAT_00028494;
    (**(code **)(*extraout_A0 + 0x470))(local_10,uVar4,uVar5);
    (**(code **)(*extraout_A0 + 0x424))(local_10,uVar3,sVar2);
  }
  (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x6f75);
  uVar1 = 0;
  if (extraout_A0_00 != (int *)0x0) {
    uVar5 = *(undefined2 *)(extraout_A0_00 + 0x1f);
    uVar3 = (undefined2)((uint)extraout_A0_00 >> 0x10);
    local_10 = SUB42(extraout_A0_00,0);
    uVar4 = uVar3;
    (**(code **)(*extraout_A0_00 + 0x45c))();
    sVar2 = _DAT_00028496;
    (**(code **)(*extraout_A0_00 + 0x470))(local_10,uVar4,uVar5);
    uVar1 = (**(code **)(*extraout_A0_00 + 0x424))(local_10,uVar3,sVar2);
  }
  return uVar1;
}



// Function: FUN_0000123c at 0000123c
// Size: 54 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000123c(void)

{
  int iVar1;
  short sVar2;
  
  func_0x00004928();
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0xc + _DAT_0002884c + 0x1142) == 0) {
    iVar1 = 0;
  }
  else {
    sVar2 = func_0x00002878(0x30000);
    iVar1 = (int)sVar2;
  }
  return iVar1;
}



// Function: FUN_00001272 at 00001272
// Size: 54 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001272(void)

{
  _DAT_000284ae = (short)((_DAT_000284ae + 1) % (int)_DAT_000284ac);
  FUN_00000920();
  FUN_00001778();
  FUN_00000e6c();
  return;
}



// Function: FUN_000012a8 at 000012a8
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012a8(void)

{
  _DAT_000284ae = (short)(((int)_DAT_000284ac + (int)_DAT_000284ae + -1) % (int)_DAT_000284ac);
  FUN_00000920();
  FUN_00001778();
  FUN_00000e6c();
  return;
}



// Function: FUN_000012e8 at 000012e8
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000012e8(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  for (sVar1 = 0; sVar1 < 0x16; sVar1 = sVar1 + 1) {
    iVar3 = sVar1 * 0x1e + _DAT_0002884c;
    if ((*(char *)(iVar3 + 0xd28) == '\x03') &&
       ((short)((uint)(param_1 - _DAT_00028854) / 0x16) == *(short *)(iVar3 + 0xd2a))) {
      if (*(char *)(iVar3 + 0xd26) == '\b') {
        sVar2 = sVar2 + 1;
      }
      else {
        iVar3 = sVar1 * 0x1e + _DAT_0002884c;
        if (*(char *)(iVar3 + 0xd26) == '\x02') {
          sVar2 = *(char *)(iVar3 + 0xd27) + sVar2;
        }
      }
    }
  }
  return sVar2;
}



// Function: FUN_00001358 at 00001358
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00001358(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  for (sVar1 = 0; sVar1 < 0x16; sVar1 = sVar1 + 1) {
    iVar3 = sVar1 * 0x1e + _DAT_0002884c;
    if (((*(char *)(iVar3 + 0xd28) == '\x03') &&
        ((short)((uint)(param_1 - _DAT_00028854) / 0x16) == *(short *)(iVar3 + 0xd2a))) &&
       (*(char *)(iVar3 + 0xd26) == '\x01')) {
      sVar2 = *(char *)(iVar3 + 0xd27) + sVar2;
    }
  }
  return sVar2;
}



// Function: FUN_000013b0 at 000013b0
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000013b0(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x63617272);
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x488))();
    uVar1 = func_0x00007430(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 +
                            (short)_DAT_00028854);
  }
  return uVar1;
}



// Function: FUN_00001420 at 00001420
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001420(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*_DAT_000284b0 + 0x188))((short)_DAT_000284b0,0x67726f75);
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x488))();
    uVar1 = func_0x00007428(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 +
                            (short)_DAT_00028854);
  }
  return uVar1;
}



// Function: FUN_00001490 at 00001490
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001490(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  int iVar4;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [256];
  undefined1 auStack_18 [20];
  
  FUN_00000668((short)param_1);
  if ((_DAT_000284b0 != 0) &&
     (param_1 == *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854)) {
    FUN_00001110();
    iVar4 = *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854;
    sVar1 = FUN_00001358((short)iVar4);
    sVar1 = sVar1 + *(char *)(iVar4 + 8);
    if (9 < sVar1) {
      sVar1 = 9;
    }
    sVar2 = FUN_000012e8((short)(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 +
                                _DAT_00028854));
    sVar1 = *(short *)(sVar1 * 2 + 0x15b54);
    uVar3 = FUN_00001358(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + (short)_DAT_00028854
                        );
    func_0x000076d0(auStack_18,0x5a94,uVar3);
    func_0x00007320(auStack_118,(short)auStack_18);
    func_0x00006e38(_DAT_000284b0,0x62617474,extraout_A0w);
    func_0x000076d0(auStack_18,0x15a94,(int)(short)(sVar2 + sVar1));
    func_0x00007320(auStack_218,(short)auStack_18);
    func_0x00006e38(_DAT_000284b0,0x636f6d6d,extraout_A0w_00);
    FUN_00000e6c();
  }
  func_0x00003ae8(*(undefined2 *)(param_1 + 2));
  return;
}



// Function: FUN_00001604 at 00001604
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001604(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  int iVar4;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [256];
  undefined1 auStack_18 [20];
  
  FUN_000005e6((short)param_1);
  if ((_DAT_000284b0 != 0) &&
     (param_1 == *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854)) {
    FUN_00001110();
    iVar4 = *(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854;
    sVar1 = FUN_00001358((short)iVar4);
    sVar1 = sVar1 + *(char *)(iVar4 + 8);
    if (9 < sVar1) {
      sVar1 = 9;
    }
    sVar2 = FUN_000012e8((short)(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 +
                                _DAT_00028854));
    sVar1 = *(short *)(sVar1 * 2 + 0x15b54);
    uVar3 = FUN_00001358(*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + (short)_DAT_00028854
                        );
    func_0x000076d0(auStack_18,0x5a94,uVar3);
    func_0x00007320(auStack_118,(short)auStack_18);
    func_0x00006e38(_DAT_000284b0,0x62617474,extraout_A0w);
    func_0x000076d0(auStack_18,0x15a94,(int)(short)(sVar2 + sVar1));
    func_0x00007320(auStack_218,(short)auStack_18);
    func_0x00006e38(_DAT_000284b0,0x636f6d6d,extraout_A0w_00);
    FUN_00000e6c();
  }
  func_0x00003ae8(*(undefined2 *)(param_1 + 2));
  return;
}



// Function: FUN_00001778 at 00001778
// Size: 150 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001778(void)

{
  short sVar1;
  
  func_0x00006e70(1,0);
  for (sVar1 = 0; sVar1 < _DAT_000284ac; sVar1 = sVar1 + 1) {
    if (sVar1 != _DAT_000284ae) {
      func_0x00002968();
    }
  }
  func_0x00002968();
  func_0x00006e78(0);
  return;
}



// Function: FUN_0000180e at 0000180e
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000180e(undefined2 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = _DAT_000284ae;
  sVar4 = 1000;
  for (sVar3 = 0; sVar3 < _DAT_000284ac; sVar3 = sVar3 + 1) {
    sVar2 = func_0x00006e48(param_1,*(undefined4 *)
                                     (*(short *)(&DAT_00028498 + sVar3 * 2) * 0x16 + _DAT_00028854))
    ;
    if (sVar2 < sVar4) {
      sVar4 = sVar2;
      _DAT_000284ae = sVar3;
    }
  }
  if (sVar1 != _DAT_000284ae) {
    FUN_00000920();
    FUN_00001778();
    FUN_00000e6c();
  }
  return;
}



// Function: FUN_00001892 at 00001892
// Size: 318 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001892(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  int unaff_A2;
  short asStackY_10016 [32752];
  short local_16 [8];
  short local_6;
  
  func_0x00002b28(*(undefined4 *)
                   (*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854),&local_6);
  if (param_1._0_2_ < local_6) {
    sVar2 = 1;
    for (sVar1 = 0; sVar1 < local_6; sVar1 = sVar1 + 1) {
      if (*(short *)(&DAT_00028498 + _DAT_000284ae * 2) * 0x16 + _DAT_00028854 ==
          *(int *)(&DAT_000288d4 + sVar1 * 4)) {
        local_16[sVar1] = 0;
      }
      else {
        local_16[sVar1] = sVar2;
        sVar2 = sVar2 + 1;
      }
    }
    for (sVar1 = 0; sVar1 < local_6; sVar1 = sVar1 + 1) {
      if (param_1._0_2_ == local_16[sVar1]) {
        unaff_A2 = *(int *)(&DAT_000288d4 + sVar1 * 4);
        break;
      }
    }
    sVar1 = (short)*(char *)(unaff_A2 + 4);
    if ((sVar1 == 0x1c) && (*(short *)(*(char *)(unaff_A2 + 10) * 2 + _DAT_0002884c + 0x594) == 1))
    {
      sVar1 = 0x1d;
    }
    func_0x00005328(CONCAT22(sVar1,(short)*(char *)(unaff_A2 + 6)),
                    CONCAT22((short)*(char *)(unaff_A2 + 8),(short)*(char *)(unaff_A2 + 0xb)),
                    CONCAT22((short)*(char *)(unaff_A2 + 7),(short)*(char *)(unaff_A2 + 10)));
  }
  else {
    func_0x00005358();
    func_0x00002ad8(0x850001);
    func_0x00002ad8(0x850000,extraout_A0);
    func_0x00005348(extraout_A0_00);
  }
  return;
}



