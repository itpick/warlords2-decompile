// Warlords II - Decompiled 68k Code
// Segment: CODE_150
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000001a at 0000001a
// Size: 44 bytes

void FUN_0000001a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x2e);
  if (extraout_A0 != 0) {
    func_0x00006f48(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000046 at 00000046
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000046(int param_1)

{
  (**(code **)(*_DAT_000266a8 + 0x1c4))(_DAT_000266a8,*(undefined4 *)(param_1 + 4));
  return;
}



// Function: FUN_00000066 at 00000066
// Size: 146 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000066(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_000266a8 + 0x1c8))((short)_DAT_000266a8,(short)param_1[1],param_1[0xe]);
    _DAT_00025f52 = local_10;
  }
  else {
    uVar2 = (undefined2)((uint)param_1 >> 0x10);
    uVar3 = local_16;
    uVar4 = local_14;
    (**(code **)(*param_1 + 0xb8))();
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar2,uVar3,uVar4);
  }
  return;
}



// Function: FUN_000000f8 at 000000f8
// Size: 38 bytes

void FUN_000000f8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0xac))(*(int **)(param_1 + 0x58),param_2);
  }
  return;
}



// Function: FUN_0000011e at 0000011e
// Size: 66 bytes

void FUN_0000011e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xa4))(*(int **)(param_1 + 0x5c),param_2);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x5c) + 0xac))(*(int **)(param_1 + 0x5c),param_2);
    }
  }
  return;
}



// Function: FUN_00000160 at 00000160
// Size: 32 bytes

void FUN_00000160(void)

{
  func_0x00007310(0x25b76);
  return;
}



// Function: FUN_00000218 at 00000218
// Size: 586 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000218(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char unaff_D3b;
  short sVar4;
  undefined1 extraout_A0b;
  undefined4 extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_198 [2];
  undefined2 uStack_196;
  undefined1 local_194 [4];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 local_160 [4];
  undefined1 local_15c [78];
  undefined1 auStack_10e [88];
  undefined1 local_b6 [2];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [4];
  undefined4 ****local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  undefined1 auStack_90 [52];
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined1 *puStack_56;
  undefined4 uStack_52;
  undefined4 uStack_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_a0 = param_3;
  local_94 = 0;
  func_0x00007208(auStack_a8);
  local_98 = (undefined4 *)0x0;
  (**(code **)(*param_1 + 0x1d0))
            ((short)param_1,(short)param_2,(short)&local_ac,(short)&local_9c,(short)local_b6,
             (short)auStack_a8,(short)&local_b0,(short)&local_b4,(short)local_160,(short)local_15c,
             (char)&local_98);
  piVar1 = local_9c;
  func_0x000075d0();
  sVar4 = (short)((uint)piVar1 >> 2);
  if (sVar4 == 0) {
    sVar4 = -1;
    local_a4 = &local_a4;
  }
  else {
    func_0x000073a0((char)local_9c);
    local_a4 = (undefined4 ****)*local_9c;
  }
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8((char)auStack_4a);
  if (iVar2 != 0) {
    uVar6 = (undefined2)((uint)local_9c >> 0x10);
    FUN_00001d08((char)local_9c);
    uVar5 = (undefined2)((uint)local_94 >> 0x10);
    local_9c._3_1_ = extraout_A0b;
    FUN_00000e10((short)local_94);
    local_94 = extraout_A0;
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar5,uVar6);
    FUN_00001d08((undefined1)local_9c);
    if (unaff_D3b == '\0') {
      FUN_00000e10((char)local_94);
    }
    else {
      uStack_5c = 0;
      uStack_5a = 0;
      uStack_52 = 0;
      uStack_4e = 0;
      puStack_56 = _DAT_00025f52;
      _DAT_00025f52 = auStack_90;
      iVar2 = func_0x000076a8((char)auStack_90);
      if (iVar2 == 0) {
        func_0x000020e0();
        *local_a0 = extraout_A0_00;
        (**(code **)(*(int *)*local_a0 + 0xec))((short)(int *)*local_a0,(char)local_94);
        _DAT_00025f52 = puStack_56;
      }
      else {
        if (*local_a0 != 0) {
          FUN_00000e10((char)*local_a0);
          *local_a0 = extraout_A0_01;
        }
        uVar5 = (undefined2)((uint)local_94 >> 0x10);
        FUN_00000e10((char)local_94);
        FUN_00001c10((short)((uint)uStack_5a >> 0x10),uVar5);
      }
    }
    return unaff_D3b;
  }
  uVar6 = (undefined2)((uint)param_2 >> 0x10);
  uVar5 = (undefined2)((uint)param_1 >> 0x10);
  (**(code **)(*param_1 + 0x1bc))((short)param_1,(char)param_2);
  FUN_00001cf0(0xfffe,(short)_DAT_00025cd0,(short)_DAT_000267d2);
  FUN_00001c00(uVar5,uVar6);
  if (local_98 == (undefined4 *)0x0) {
    local_98 = &param_2;
  }
  if (DAT_00025b38 != '\0') {
    (**(code **)(*_DAT_000264b2 + 0xe8))();
    func_0x00007210((short)auStack_a8,(short)local_194,(short)((uint)auStack_10e >> 0x10),
                    (short)((uint)local_a4 >> 0x10),sVar4,local_ac._2_2_);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001f10(local_ac._2_2_,(short)local_98,(char)auStack_170);
  FUN_00001f10(local_b0._2_2_,(short)local_98,(char)auStack_180);
  FUN_00001f10(local_b4._2_2_,(short)local_98,(char)auStack_190);
  (**(code **)(*_DAT_000264b2 + 0xe8))();
  func_0x00007210((short)auStack_a8,(short)local_198);
  cVar3 = func_0x00007310(0x5b76,uStack_196);
  return cVar3;
}



// Function: FUN_000003b8 at 000003b8
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_000003b8(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  int unaff_A6;
  undefined2 uStack00000008;
  int *piStack0000000e;
  int iStack00000012;
  
  (**(code **)(*_DAT_000264b2 + 0xfc))();
  cVar1 = *(char *)(unaff_A6 + -0x10a);
  if (cVar1 != '\0') {
    iStack00000012 = unaff_A6 + -0x10a;
    piStack0000000e = *(int **)(unaff_A6 + -0x90);
    (**(code **)(*piStack0000000e + 0x5c))();
  }
  _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
  iStack00000012 = *(undefined4 *)(unaff_A6 + -0x98);
  piStack0000000e = (int *)0x536;
  FUN_00001d08();
  *(undefined4 *)(unaff_A6 + -0x98) = extraout_A0;
  if (cVar1 == '\0') {
    iStack00000012 = *(undefined4 *)(unaff_A6 + -0x90);
    piStack0000000e = (int *)0x5e8;
    FUN_00000e10();
    *(undefined4 *)(unaff_A6 + -0x90) = extraout_A0_03;
  }
  else {
    *(undefined2 *)(unaff_A6 + -0x58) = 0;
    *(undefined4 *)(unaff_A6 + -0x56) = 0;
    *(undefined4 *)(unaff_A6 + -0x52) = 0;
    *(undefined4 *)(unaff_A6 + -0x4e) = 0;
    *(undefined4 *)(unaff_A6 + -0x4a) = 0;
    *(int *)(unaff_A6 + -0x52) = _DAT_00025f52;
    _DAT_00025f52 = unaff_A6 + -0x8c;
    iStack00000012 = unaff_A6 + -0x8c;
    piStack0000000e = (int *)0x572;
    iVar2 = func_0x000076a8();
    if (iVar2 == 0) {
      iStack00000012 = 0x57e;
      func_0x000020e0();
      **(undefined4 **)(unaff_A6 + -0x9c) = extraout_A0_00;
      iStack00000012 = *(undefined4 *)(unaff_A6 + -0x90);
      piStack0000000e = (int *)**(undefined4 **)(unaff_A6 + -0x9c);
      (**(code **)(*piStack0000000e + 0xec))();
      _DAT_00025f52 = *(int *)(unaff_A6 + -0x52);
    }
    else {
      if (**(int **)(unaff_A6 + -0x9c) != 0) {
        iStack00000012 = **(int **)(unaff_A6 + -0x9c);
        piStack0000000e = (int *)0x5b4;
        FUN_00000e10();
        **(undefined4 **)(unaff_A6 + -0x9c) = extraout_A0_01;
      }
      iStack00000012 = *(undefined4 *)(unaff_A6 + -0x90);
      piStack0000000e = (int *)0x5c6;
      FUN_00000e10();
      *(undefined4 *)(unaff_A6 + -0x90) = extraout_A0_02;
      piStack0000000e = *(int **)(unaff_A6 + -0x56);
      uStack00000008 = 0;
      FUN_00001c10();
    }
  }
  return cVar1;
}



// Function: FUN_000005f8 at 000005f8
// Size: 38 bytes

void FUN_000005f8(int param_1)

{
  FUN_000003b8(*(undefined4 *)(param_1 + 0x22),*(undefined4 *)(param_1 + 0x1e));
  return;
}



// Function: FUN_0000061e at 0000061e
// Size: 182 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000061e(void)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00001ea8();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001ea8();
  FUN_00001c10((short)((uint)local_14 >> 0x10));
  cVar2 = func_0x00001e50();
  if (cVar2 == '\0') {
    FUN_00001c58();
    FUN_00001c10(0);
  }
  return;
}



// Function: FUN_00000752 at 00000752
// Size: 12 bytes

undefined4 FUN_00000752(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



// Function: FUN_0000075e at 0000075e
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000075e(void)

{
  if (_DAT_000264b2 != (int *)0x0) {
    (**(code **)(*_DAT_000264b2 + 0xd4))();
  }
  return;
}



// Function: FUN_00000780 at 00000780
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000780(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_A0;
  int extraout_A0_00;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 local_14e [256];
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_4e = (int *)0x0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1c0))((short)param_1,param_2,0,0);
    (**(code **)(*param_1 + 0x1b8))((char)param_1,uVar2);
    local_4e = extraout_A0;
    func_0x00001bf0(extraout_A0);
    (**(code **)(*local_4e + 300))();
    (**(code **)(*local_4e + 0x130))();
    local_14e[0] = 0;
    (**(code **)(*local_4e + 0x14c))((short)local_4e,(short)local_14e);
    (**(code **)(*local_4e + 400))(local_4e,local_14e);
    func_0x00001e60();
    (**(code **)(*local_4e + 0x134))();
    _DAT_00025f52 = local_10;
  }
  else {
    if (local_4e != (int *)0x0) {
      FUN_00000e10(local_4e);
      local_4e = (int *)extraout_A0_00;
    }
    uVar4 = 0x820005;
    uVar3 = (undefined1)local_16;
    uVar2 = local_14;
    FUN_00001be8();
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar3,uVar2,uVar4);
  }
  return;
}



// Function: FUN_000008a8 at 000008a8
// Size: 649 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008a8(int *param_1,undefined2 param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  char cVar6;
  undefined2 uVar5;
  char cVar7;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined1 extraout_A0b;
  int *extraout_A0_03;
  undefined4 extraout_A0_04;
  int *extraout_A0_05;
  undefined2 uVar8;
  undefined1 auStack_208 [256];
  byte abStack_108 [64];
  int aiStack_c8 [25];
  int iStack_64;
  undefined4 uStack_60;
  int local_5c;
  short local_58;
  undefined4 local_56;
  undefined1 auStack_52 [52];
  short sStack_1e;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_56 = 0;
  local_58 = 0;
  local_5c = 0;
  FUN_000025e0((short)aiStack_c8,(short)param_3);
  FUN_000025f0((short)aiStack_c8);
  local_c = extraout_A0;
  while ((cVar7 = (**(code **)(aiStack_c8[0] + 8))(), cVar7 != '\0' && (local_58 == 0))) {
    local_8 = (int *)0x0;
    local_56 = 0;
    abStack_108[0] = 0;
    (**(code **)(*local_c + 0xd0))((short)local_c,(char)abStack_108);
    (**(code **)(*param_3 + 0xc4))((short)param_3,(char)local_c);
    sStack_1e = 0;
    iStack_1c = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    puStack_18 = _DAT_00025f52;
    _DAT_00025f52 = auStack_52;
    iVar4 = func_0x000076a8((short)auStack_52);
    if (iVar4 == 0) {
      FUN_00001e68((short)&uStack_60,(char)&iStack_64);
      func_0x00001ec8((short)uStack_60,(char)(iStack_64 / 2));
      (**(code **)(*param_1 + 0x1b0))(param_1,(short)local_c);
      cVar7 = (**(code **)(*local_c + 0x118))();
      if ((extraout_A0_00 == (int *)0x0) || (cVar7 != '\0')) {
        cVar6 = (**(code **)(*param_1 + 0x1a8))((char)param_1,param_2,(char)local_c);
        piVar3 = local_c;
        if (cVar6 == '\0') {
          FUN_00001c10(0);
        }
        else {
          local_c = (int *)0x0;
          uVar5 = (**(code **)(*param_1 + 0x1c0))
                            ((short)param_1,(char)param_2,(short)piVar3,(char)piVar3);
          (**(code **)(*param_1 + 0x1b8))((char)param_1,uVar5);
          local_8 = extraout_A0_02;
          func_0x00001bf0((char)extraout_A0_02);
          if (cVar7 == '\0') {
            (**(code **)(*local_8 + 0x140))();
          }
          else {
            (**(code **)(*param_1 + 0x1bc))((short)param_1,(char)param_2);
            (**(code **)(*local_8 + 0x144))((short)local_8,extraout_A0b);
            local_c = (int *)0x0;
            local_56 = 0;
          }
          (**(code **)(*local_8 + 0x130))();
          if (cVar7 != '\0') {
            auStack_208[0] = 0;
            (**(code **)(*local_8 + 0x14c))((short)local_8,(char)auStack_208);
            (**(code **)(*local_8 + 400))((short)local_8,(char)auStack_208);
          }
          func_0x00001e60();
          uVar8 = (undefined2)((uint)iStack_64 >> 0x10);
          uVar5 = (undefined2)((uint)uStack_60 >> 0x10);
          func_0x00001ec8((short)uStack_60,(char)iStack_64);
          (**(code **)(*local_8 + 0x134))((short)local_8,uVar5,uVar8);
        }
      }
      else {
        (**(code **)(*extraout_A0_00 + 0x138))((char)extraout_A0_00,param_2,(char)local_8);
        FUN_00000e10((short)local_c);
        local_c = extraout_A0_01;
        func_0x00001ec8(uStack_60,(short)iStack_64);
      }
      _DAT_00025f52 = puStack_18;
    }
    else {
      if (iStack_1c == 0) {
        pbVar1 = (byte *)0x25fa8;
        pbVar2 = abStack_108;
        for (iVar4 = abStack_108[0] + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pbVar1 = *pbVar2;
          pbVar1 = pbVar1 + 1;
          pbVar2 = pbVar2 + 1;
        }
      }
      if (local_8 != (int *)0x0) {
        FUN_00000e10((char)local_8);
        local_8 = extraout_A0_03;
      }
      FUN_00000e10((char)local_56);
      local_56 = extraout_A0_04;
      func_0x00001ec8((char)uStack_60,(short)iStack_64);
      local_58 = sStack_1e;
      local_5c = iStack_1c;
      if (iStack_1c == 0) {
        local_5c = 0x820006;
      }
    }
    FUN_000025f8((char)aiStack_c8);
    local_c = extraout_A0_05;
  }
  FUN_000025e8((short)aiStack_c8);
  if (local_58 != 0) {
    FUN_00001c10((short)((uint)local_5c >> 0x10));
  }
  return;
}



// Function: FUN_00000b30 at 00000b30
// Size: 179 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b30(void)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int in_D1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined1 *in_A0;
  undefined4 extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined1 *in_A1;
  int *unaff_A2;
  int *unaff_A4;
  int unaff_A6;
  undefined2 uVar5;
  undefined2 uVar6;
  
  do {
    do {
      *in_A0 = *in_A1;
      in_D1 = in_D1 + -1;
      in_A0 = in_A0 + 1;
      in_A1 = in_A1 + 1;
    } while (in_D1 != 0);
    do {
      do {
        if (*(int *)(unaff_A6 + -4) != 0) {
          FUN_00000e10((char)*(undefined4 *)(unaff_A6 + -4));
          *(undefined4 *)(unaff_A6 + -4) = extraout_A0_03;
        }
        FUN_00000e10((char)*(undefined4 *)(unaff_A6 + -0x52));
        *(undefined4 *)(unaff_A6 + -0x52) = extraout_A0_04;
        func_0x00001ec8((char)*(undefined4 *)(unaff_A6 + -0x5c),
                        (short)*(undefined4 *)(unaff_A6 + -0x60));
        *(undefined2 *)(unaff_A6 + -0x54) = *(undefined2 *)(unaff_A6 + -0x1a);
        *(undefined4 *)(unaff_A6 + -0x58) = *(undefined4 *)(unaff_A6 + -0x18);
        if (*(int *)(unaff_A6 + -0x58) == 0) {
          *(undefined4 *)(unaff_A6 + -0x58) = 0x820006;
        }
        while( true ) {
          cVar1 = (char)unaff_A6;
          FUN_000025f8(cVar1 + '<');
          *(undefined4 *)(unaff_A6 + -8) = extraout_A0_05;
          cVar4 = (**(code **)(*(int *)(unaff_A6 + -0xc4) + 8))();
          if ((cVar4 == '\0') || (*(short *)(unaff_A6 + -0x54) != 0)) {
            FUN_000025e8((short)unaff_A6 + -0xc4);
            if (*(short *)(unaff_A6 + -0x54) != 0) {
              FUN_00001c10((short)((uint)*(undefined4 *)(unaff_A6 + -0x58) >> 0x10));
            }
            return;
          }
          *(undefined4 *)(unaff_A6 + -4) = 0;
          *(undefined4 *)(unaff_A6 + -0x52) = 0;
          *(undefined1 *)(unaff_A6 + -0x104) = 0;
          (**(code **)(**(int **)(unaff_A6 + -8) + 0xd0))
                    ((short)*(int **)(unaff_A6 + -8),cVar1 + -4);
          (**(code **)(*unaff_A4 + 0xc4))();
          *(undefined2 *)(unaff_A6 + -0x1a) = 0;
          *(undefined4 *)(unaff_A6 + -0x18) = 0;
          *(undefined4 *)(unaff_A6 + -0x14) = 0;
          *(undefined4 *)(unaff_A6 + -0x10) = 0;
          *(undefined4 *)(unaff_A6 + -0xc) = 0;
          *(int *)(unaff_A6 + -0x14) = _DAT_00025f52;
          _DAT_00025f52 = unaff_A6 + -0x4e;
          iVar2 = func_0x000076a8((short)(unaff_A6 + -0x4e));
          if (iVar2 != 0) break;
          FUN_00001e68((short)(unaff_A6 + -0x5c),cVar1 + -0x60);
          func_0x00001ec8((short)*(undefined4 *)(unaff_A6 + -0x5c),
                          (char)(*(int *)(unaff_A6 + -0x60) / 2));
          (**(code **)(*unaff_A2 + 0x1b0))();
          cVar4 = (**(code **)(**(int **)(unaff_A6 + -8) + 0x118))();
          if ((extraout_A0 == (int *)0x0) || (cVar4 != '\0')) {
            cVar3 = (**(code **)(*unaff_A2 + 0x1a8))();
            if (cVar3 == '\0') {
              FUN_00001c10(0);
            }
            else {
              *(undefined4 *)(unaff_A6 + -8) = 0;
              (**(code **)(*unaff_A2 + 0x1c0))();
              (**(code **)(*unaff_A2 + 0x1b8))();
              *(undefined4 *)(unaff_A6 + -4) = extraout_A0_01;
              func_0x00001bf0((char)extraout_A0_01);
              if (cVar4 == '\0') {
                (**(code **)(**(int **)(unaff_A6 + -4) + 0x140))();
              }
              else {
                (**(code **)(*unaff_A2 + 0x1bc))();
                *(undefined4 *)(unaff_A6 + -0x52) = extraout_A0_02;
                (**(code **)(**(int **)(unaff_A6 + -4) + 0x144))
                          ((short)*(int **)(unaff_A6 + -4),(char)*(undefined4 *)(unaff_A6 + -0x52));
                *(undefined4 *)(unaff_A6 + -8) = 0;
                *(undefined4 *)(unaff_A6 + -0x52) = 0;
              }
              (**(code **)(**(int **)(unaff_A6 + -4) + 0x130))();
              if (cVar4 != '\0') {
                *(undefined1 *)(unaff_A6 + -0x204) = 0;
                (**(code **)(**(int **)(unaff_A6 + -4) + 0x14c))
                          ((short)*(int **)(unaff_A6 + -4),cVar1 + -4);
                (**(code **)(**(int **)(unaff_A6 + -4) + 400))
                          ((short)*(int **)(unaff_A6 + -4),cVar1 + -4);
              }
              func_0x00001e60();
              uVar6 = (undefined2)((uint)*(undefined4 *)(unaff_A6 + -0x60) >> 0x10);
              uVar5 = (undefined2)((uint)*(undefined4 *)(unaff_A6 + -0x5c) >> 0x10);
              func_0x00001ec8((short)*(undefined4 *)(unaff_A6 + -0x5c),
                              (char)*(undefined4 *)(unaff_A6 + -0x60));
              (**(code **)(**(int **)(unaff_A6 + -4) + 0x134))
                        ((short)*(int **)(unaff_A6 + -4),uVar5,uVar6);
            }
          }
          else {
            (**(code **)(*extraout_A0 + 0x138))();
            FUN_00000e10((short)*(undefined4 *)(unaff_A6 + -8));
            *(undefined4 *)(unaff_A6 + -8) = extraout_A0_00;
            func_0x00001ec8(*(undefined4 *)(unaff_A6 + -0x5c),
                            (short)*(undefined4 *)(unaff_A6 + -0x60));
          }
          _DAT_00025f52 = *(int *)(unaff_A6 + -0x14);
        }
      } while (*(int *)(unaff_A6 + -0x18) != 0);
      in_D1 = *(byte *)(unaff_A6 + -0x104) + 1;
      in_A0 = (undefined1 *)0x25fa8;
      in_A1 = (undefined1 *)(unaff_A6 + -0x104);
    } while (in_D1 == 0);
  } while( true );
}



// Function: FUN_00000be4 at 00000be4
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000be4(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  *param_5 = 0xe866;
  *param_6 = _DAT_00025b72;
  (**(code **)(*param_1 + 0x1d4))(param_1,param_2,param_4);
  *param_3 = 0;
  *param_7 = 0;
  *param_8 = _DAT_0000a23c;
  *param_9 = 0;
  *param_10 = 0;
  *param_11 = 0;
  return;
}



// Function: FUN_00000c3c at 00000c3c
// Size: 36 bytes

void FUN_00000c3c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 extraout_A0;
  
  func_0x00001e98(4);
  *param_3 = extraout_A0;
  **(undefined4 **)*param_3 = *(undefined4 *)(param_1 + 0x22);
  return;
}



// Function: FUN_00000c60 at 00000c60
// Size: 14 bytes

void FUN_00000c60(void)

{
  return;
}



// Function: FUN_00000c6e at 00000c6e
// Size: 44 bytes

void FUN_00000c6e(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x1e);
  if (extraout_A0 != 0) {
    FUN_00000c9a(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000c9a at 00000c9a
// Size: 78 bytes

void FUN_00000c9a(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x12788;
  param_1[1] = 0x20202020;
  param_1[2] = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0x7fffffff;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  return;
}



// Function: FUN_00000ce8 at 00000ce8
// Size: 28 bytes

void FUN_00000ce8(int param_1,undefined4 param_2)

{
  FUN_00000dd8(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_00000d04 at 00000d04
// Size: 18 bytes

void FUN_00000d04(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x12) = param_2;
  return;
}



// Function: FUN_00000d16 at 00000d16
// Size: 86 bytes

undefined4 FUN_00000d16(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    if (*(int *)((int)param_1 + 0x12) == 0) {
      (**(code **)(*param_1 + 0x68))(param_1,param_2);
      uVar1 = (**(code **)(*param_2 + 0x6c))(param_2,param_1);
    }
    else {
      uVar1 = (**(code **)(**(int **)((int)param_1 + 0x12) + 0x94))
                        (*(int **)((int)param_1 + 0x12),param_2);
    }
  }
  return uVar1;
}



// Function: FUN_00000d6c at 00000d6c
// Size: 18 bytes

void FUN_00000d6c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// Function: FUN_00000d7e at 00000d7e
// Size: 18 bytes

void FUN_00000d7e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe) = param_2;
  return;
}



// Function: FUN_00000d90 at 00000d90
// Size: 14 bytes

void FUN_00000d90(void)

{
  return;
}



// Function: FUN_00000d9e at 00000d9e
// Size: 14 bytes

void FUN_00000d9e(void)

{
  return;
}



// Function: FUN_00000dac at 00000dac
// Size: 44 bytes

void FUN_00000dac(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xa4);
  if (extraout_A0 != 0) {
    FUN_00000dd8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000dd8 at 00000dd8
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000dd8(undefined4 *param_1)

{
  FUN_0000241a(param_1);
  *param_1 = 0x10d36;
  param_1[0x1f] = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  param_1[0x21] = _DAT_00025b62;
  param_1[0x22] = _DAT_00025b66;
  param_1[0x23] = _DAT_00025b6a;
  param_1[0x24] = _DAT_00025b6e;
  param_1[0x25] = _DAT_00025ca0;
  param_1[0x26] = _DAT_00025ca4;
  param_1[0x27] = _DAT_00025ca8;
  *(undefined2 *)(param_1 + 0x28) = 0xffff;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  return;
}



// Function: FUN_00000e00 at 00000e00
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e00(void)

{
  int unaff_A2;
  
  *(undefined1 *)(unaff_A2 + 0x82) = 1;
  *(undefined4 *)(unaff_A2 + 0x84) = _DAT_00025b62;
  *(undefined4 *)(unaff_A2 + 0x88) = _DAT_00025b66;
  *(undefined4 *)(unaff_A2 + 0x8c) = _DAT_00025b6a;
  *(undefined4 *)(unaff_A2 + 0x90) = _DAT_00025b6e;
  *(undefined4 *)(unaff_A2 + 0x94) = _DAT_00025ca0;
  *(undefined4 *)(unaff_A2 + 0x98) = _DAT_00025ca4;
  *(undefined4 *)(unaff_A2 + 0x9c) = _DAT_00025ca8;
  *(undefined2 *)(unaff_A2 + 0xa0) = 0xffff;
  *(undefined1 *)(unaff_A2 + 0xa2) = 0;
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(void)

{
  undefined4 *in_A0;
  undefined4 *in_A1;
  int unaff_A2;
  
  *in_A1 = *in_A0;
  in_A1[1] = in_A0[1];
  in_A1[2] = in_A0[2];
  in_A1[3] = in_A0[3];
  *(undefined4 *)(unaff_A2 + 0x94) = _DAT_00025ca0;
  *(undefined4 *)(unaff_A2 + 0x98) = _DAT_00025ca4;
  *(undefined4 *)(unaff_A2 + 0x9c) = _DAT_00025ca8;
  *(undefined2 *)(unaff_A2 + 0xa0) = 0xffff;
  *(undefined1 *)(unaff_A2 + 0xa2) = 0;
  return;
}



// Function: FUN_00000e44 at 00000e44
// Size: 86 bytes

void FUN_00000e44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x26);
  }
  FUN_0000250c(param_1,uVar1,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x94) = *param_6;
  *(undefined4 *)(param_1 + 0x98) = param_6[1];
  *(undefined4 *)(param_1 + 0x9c) = param_6[2];
  return;
}



// Function: FUN_00000e9a at 00000e9a
// Size: 14 bytes

void FUN_00000e9a(void)

{
  return;
}



// Function: FUN_00000ea8 at 00000ea8
// Size: 44 bytes

void FUN_00000ea8(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xb8);
  if (extraout_A0 != 0) {
    FUN_00000ed4(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000ed4 at 00000ed4
// Size: 60 bytes

void FUN_00000ed4(undefined4 *param_1)

{
  FUN_00000dd8(param_1);
  *param_1 = 0x11106;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined2 *)((int)param_1 + 0xb6) = 0;
  return;
}



// Function: FUN_00000f10 at 00000f10
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f10(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined1 param_8,
                 undefined2 param_9)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000e44((short)param_1,param_2,param_3,param_4);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x3d0))((short)param_1,param_6,param_7,param_8,param_9);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10((char)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_00000fc4 at 00000fc4
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000fc4(int *param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  int iVar1;
  undefined2 uStack00000018;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x2f8))();
  iVar1 = extraout_A0;
  if (extraout_A0 == 0) {
    iVar1 = _DAT_00025cc4;
  }
  *(undefined2 *)((int)param_1 + 0xb6) = uStack00000018;
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_14);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_14,auStack_1c);
  func_0x00007258(auStack_1c,iVar1);
  func_0x00007310(param_2,extraout_A0_00);
  return;
}



// Function: FUN_000010c4 at 000010c4
// Size: 14 bytes

void FUN_000010c4(void)

{
  return;
}



// Function: FUN_000010d2 at 000010d2
// Size: 14 bytes

void FUN_000010d2(void)

{
  return;
}



// Function: FUN_000010e0 at 000010e0
// Size: 44 bytes

void FUN_000010e0(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xba);
  if (extraout_A0 != 0) {
    FUN_0000110c(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000110c at 0000110c
// Size: 48 bytes

void FUN_0000110c(undefined4 *param_1)

{
  FUN_00000ed4(param_1);
  *param_1 = 0x1152e;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x1f] = 0xe;
  return;
}



// Function: FUN_0000113c at 0000113c
// Size: 104 bytes

void FUN_0000113c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00000f10(param_1,param_2,param_3,param_4);
  *(char *)(param_1 + 0xb8) = param_6._0_1_;
  if (param_6._0_1_ == '\x01') {
    *(undefined4 *)(param_1 + 0x7c) = 0xe;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 0xf;
  }
  return;
}



// Function: FUN_000011a4 at 000011a4
// Size: 14 bytes

void FUN_000011a4(void)

{
  return;
}



// Function: FUN_000011b2 at 000011b2
// Size: 14 bytes

void FUN_000011b2(void)

{
  return;
}



// Function: FUN_000011c0 at 000011c0
// Size: 44 bytes

void FUN_000011c0(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xbe);
  if (extraout_A0 != 0) {
    FUN_000011ec(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000011ec at 000011ec
// Size: 40 bytes

void FUN_000011ec(undefined4 *param_1)

{
  FUN_0000110c(param_1);
  *param_1 = 0x11962;
  *(undefined4 *)((int)param_1 + 0xba) = 0;
  return;
}



// Function: FUN_00001214 at 00001214
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001214(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0000113c(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x344))();
  (**(code **)(*param_1 + 0x424))();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    func_0x000020e0();
    *(undefined4 *)((int)param_1 + 0xba) = extraout_A0;
    (**(code **)(*param_1 + 0x434))(param_1,param_7._2_4_);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_000012e4 at 000012e4
// Size: 108 bytes

undefined4 FUN_000012e4(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x16) == 0x20202020) {
      local_8._1_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0x16);
      if (*(char *)(param_1 + 0xb8) == '\0') {
        local_8 = CONCAT13(0x76,local_8._1_3_);
      }
      else {
        local_8 = CONCAT13(0x68,local_8._1_3_);
      }
      *(undefined4 *)(param_1 + 0x16) = local_8;
    }
    (**(code **)(**(int **)(param_1 + 0xba) + 0xac))(*(int **)(param_1 + 0xba),param_2);
    uVar1 = (**(code **)(*param_2 + 0x3ac))(param_2,(short)param_1);
  }
  return uVar1;
}



// Function: FUN_00001350 at 00001350
// Size: 14 bytes

void FUN_00001350(void)

{
  return;
}



// Function: FUN_0000135e at 0000135e
// Size: 44 bytes

void FUN_0000135e(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x2e);
  if (extraout_A0 != 0) {
    FUN_0000138a(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000138a at 0000138a
// Size: 70 bytes

void FUN_0000138a(undefined4 *param_1)

{
  FUN_00000c9a(param_1);
  *param_1 = 0xcc18;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = 0x20202020;
  param_1[9] = 0x20202020;
  param_1[10] = 0x20202020;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}



// Function: FUN_00001402 at 00001402
// Size: 14 bytes

void FUN_00001402(void)

{
  return;
}



// Function: FUN_00001410 at 00001410
// Size: 44 bytes

void FUN_00001410(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x138);
  if (extraout_A0 != 0) {
    FUN_0000143c(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000143c at 0000143c
// Size: 108 bytes

void FUN_0000143c(undefined4 *param_1)

{
  FUN_000034c0(param_1);
  *param_1 = 0xca34;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  func_0x00007350((int)param_1 + 0x1e,0xcbdc);
  *(undefined4 *)((int)param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  *(undefined4 *)((int)param_1 + 0x12e) = 0;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)((int)param_1 + 0x12a) = 1;
  *(undefined1 *)((int)param_1 + 299) = 1;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x132) = 1;
  *(undefined1 *)((int)param_1 + 0x133) = 1;
  return;
}



// Function: FUN_000014a8 at 000014a8
// Size: 166 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000014a8(int *param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000034c8(param_1,_DAT_000266a8);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_000266a8 + 0x1dc))(_DAT_000266a8,param_1);
    func_0x000020e0();
    *(undefined4 *)((int)param_1 + 0x11e) = extraout_A0;
    func_0x000020e0();
    *(undefined4 *)((int)param_1 + 0x122) = extraout_A0_00;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_0000154e at 0000154e
// Size: 66 bytes

void FUN_0000154e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x122) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x122) + 0xa4))(*(int **)(param_1 + 0x122),param_2);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x122) + 0xac))(*(int **)(param_1 + 0x122),param_2);
    }
  }
  return;
}



// Function: FUN_00001590 at 00001590
// Size: 66 bytes

void FUN_00001590(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x11e) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x11e) + 0xa4))(*(int **)(param_1 + 0x11e),param_2);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x11e) + 0xac))(*(int **)(param_1 + 0x11e),param_2);
    }
  }
  return;
}



// Function: FUN_000015d2 at 000015d2
// Size: 8 bytes

void FUN_000015d2(void)

{
  return;
}



// Function: FUN_000015da at 000015da
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015da(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  if (param_2._0_1_ == '\0') {
    (**(code **)(*_DAT_000257ee + 0x68))();
    uVar1 = extraout_A0_00;
  }
  else {
    (**(code **)(*_DAT_000257ee + 0x6c))(_DAT_000257ee,param_1,0);
    uVar1 = extraout_A0;
  }
  func_0x00001bf0(uVar1);
  return;
}



// Function: FUN_0000163e at 0000163e
// Size: 76 bytes

undefined4 FUN_0000163e(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  
  if (param_2._0_1_ == '\0') {
    (**(code **)(*param_1 + 0x148))();
  }
  (**(code **)(*param_1 + 0x17c))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x188))(param_1,extraout_A0);
  }
  return uVar1;
}



// Function: FUN_0000168a at 0000168a
// Size: 122 bytes

void FUN_0000168a(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *extraout_A0;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  if (*(char *)(param_1 + 0x132) == '\0') {
    if ((*(int *)(param_1 + 0x11e) != 0) &&
       ((**(code **)(**(int **)(param_1 + 0x11e) + 0x98))(), extraout_A0 != (int *)0x0)) {
      (**(code **)(*extraout_A0 + 0x3c4))();
    }
    return;
  }
  puVar2 = local_104;
  puVar3 = (undefined1 *)(param_1 + 0x1e);
  for (iVar1 = *(byte *)(param_1 + 0x1e) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  func_0x00007310(0x25b76,local_104);
  return;
}



// Function: FUN_00001736 at 00001736
// Size: 118 bytes

void FUN_00001736(undefined2 param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  func_0x00004a48((short)local_68,param_1);
  func_0x00004a58(local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    if (*(char *)((int)piVar2 + 0xa6) != '\0') {
      (**(code **)(*piVar2 + 0x194))();
    }
    func_0x00004a60((char)local_68);
    piVar2 = extraout_A0_00;
  }
  FUN_00002510((short)local_68);
  return;
}



// Function: FUN_000017ac at 000017ac
// Size: 142 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017ac(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 local_108;
  undefined2 local_106;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  if (_DAT_0000cc16 == 1) {
    func_0x00007658(0x1200fa,param_2);
    _DAT_0000cc16 = _DAT_0000cc16 + 1;
  }
  else {
    func_0x00007658(0x800fa,param_2);
    func_0x00007640(local_104,(int)_DAT_0000cc16);
    cVar1 = FUN_00001c70(param_2,&local_106,&local_108);
    if (cVar1 != '\0') {
      cVar1 = FUN_00001c88(param_2,local_104,CONCAT22(local_106,local_108));
      if (cVar1 != '\0') {
        _DAT_0000cc16 = _DAT_0000cc16 + 1;
      }
    }
  }
  return;
}



// Function: FUN_0000183a at 0000183a
// Size: 14 bytes

void FUN_0000183a(void)

{
  return;
}



// Function: FUN_00001848 at 00001848
// Size: 44 bytes

void FUN_00001848(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x3c);
  if (extraout_A0 != 0) {
    FUN_00001874(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001874 at 00001874
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001874(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xc83c;
  func_0x00007208(param_1 + 1);
  param_1[1] = 0x10001;
  *(undefined2 *)(param_1 + 2) = 8;
  FUN_00001e20(0xfffff8d8,(int)param_1 + 10);
  *(undefined4 *)((int)param_1 + 0x12) = _DAT_00025c76;
  *(undefined2 *)((int)param_1 + 0x16) = _DAT_00025c7a;
  param_1[6] = _DAT_00025c7c;
  *(undefined2 *)(param_1 + 7) = _DAT_00025c80;
  return;
}



// Function: FUN_000018ec at 000018ec
// Size: 18 bytes

void FUN_000018ec(undefined4 param_1)

{
  FUN_00000dd8(param_1);
  return;
}



// Function: FUN_000018fe at 000018fe
// Size: 14 bytes

void FUN_000018fe(void)

{
  return;
}



// Function: FUN_0000190c at 0000190c
// Size: 44 bytes

void FUN_0000190c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x140);
  if (extraout_A0 != 0) {
    FUN_00001938(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001938 at 00001938
// Size: 48 bytes

void FUN_00001938(undefined4 *param_1)

{
  FUN_0000143c(param_1);
  *param_1 = 0xc12a;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0x20202020;
  return;
}



// Function: FUN_00001968 at 00001968
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001968(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int extraout_A0;
  int extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000014a8(param_1);
  param_1[0x4f] = param_3;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x1a8))(param_1,10);
      param_2 = extraout_A0;
    }
    (**(code **)(*param_1 + 0x1ac))(param_1,param_2);
    param_1[0x4e] = extraout_A0_00;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_00001a18 at 00001a18
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a18(undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*_DAT_000266a8 + 0x1bc))(_DAT_000266a8,param_2);
  return;
}



// Function: FUN_00001a34 at 00001a34
// Size: 72 bytes

void FUN_00001a34(undefined4 param_1,undefined4 param_2)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0xe);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_00001ab6(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  FUN_00001aec(uVar1,param_1,param_2);
  return;
}



// Function: FUN_00001a7c at 00001a7c
// Size: 14 bytes

void FUN_00001a7c(void)

{
  return;
}



// Function: FUN_00001a8a at 00001a8a
// Size: 44 bytes

void FUN_00001a8a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xe);
  if (extraout_A0 != 0) {
    FUN_00001ab6(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001ab6 at 00001ab6
// Size: 54 bytes

void FUN_00001ab6(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xc06e;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  return;
}



// Function: FUN_00001aec at 00001aec
// Size: 38 bytes

void FUN_00001aec(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00000dd8(param_1);
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_00001b12 at 00001b12
// Size: 14 bytes

void FUN_00001b12(void)

{
  return;
}



// Function: FUN_00001b20 at 00001b20
// Size: 14 bytes

void FUN_00001b20(void)

{
  return;
}



// Function: FUN_00001b2e at 00001b2e
// Size: 44 bytes

void FUN_00001b2e(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xc2);
  if (extraout_A0 != 0) {
    FUN_00001b5a(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001b5a at 00001b5a
// Size: 94 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b5a(undefined4 *param_1)

{
  undefined4 *extraout_A0;
  
  FUN_000034d2(param_1);
  *param_1 = 0xbc38;
  param_1[0x23] = _DAT_000257a4;
  param_1[0x24] = _DAT_000257a8;
  func_0x00007260((short)param_1 + 0x8c);
  *extraout_A0 = _DAT_00025b56;
  *(undefined1 *)((int)param_1 + 0xb3) = 1;
  *(undefined1 *)((int)param_1 + 0xa7) = 1;
  *(undefined1 *)((int)param_1 + 0xb2) = 1;
  *(undefined1 *)((int)param_1 + 0xb5) = 0;
  return;
}



// Function: FUN_00001bb8 at 00001bb8
// Size: 48 bytes

void FUN_00001bb8(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_000035ca(param_1,param_2,param_3);
  *(undefined2 *)(param_3 + 0x6c) = 0x80;
  return;
}



// Function: FUN_00001be8 at 00001be8
// Size: 13 bytes

void FUN_00001be8(void)

{
  return;
}



// Function: FUN_00001bf6 at 00001bf6
// Size: 10 bytes

void FUN_00001bf6(void)

{
  return;
}



// Function: FUN_00001c00 at 00001c00
// Size: 4 bytes

void FUN_00001c00(void)

{
  return;
}



// Function: FUN_00001c04 at 00001c04
// Size: 12 bytes

void FUN_00001c04(void)

{
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 2 bytes

void FUN_00001c10(void)

{
  return;
}



// Function: FUN_00001c12 at 00001c12
// Size: 44 bytes

void FUN_00001c12(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x126);
  if (extraout_A0 != 0) {
    FUN_00001c3e(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001c3e at 00001c3e
// Size: 26 bytes

void FUN_00001c3e(undefined4 *param_1)

{
  int *piVar1;
  int iStack_c;
  int iStack_8;
  
  FUN_00000c9a(param_1);
  *param_1 = 0xa7fa;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  func_0x00007350((int)param_1 + 0x1e,0xa8d2);
  iStack_c = 0xff;
  iStack_8 = (int)DAT_0000018e;
  if (DAT_0000018e < 0xff) {
    piVar1 = &iStack_8;
  }
  else {
    piVar1 = &iStack_c;
  }
  *(int *)((int)param_1 + 0x11e) = *piVar1;
  return;
}



// Function: FUN_00001c58 at 00001c58
// Size: 24 bytes

void FUN_00001c58(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_A2;
  int unaff_A6;
  
  *(undefined1 *)(unaff_A2 + 0x1e) = 0;
  *(undefined4 *)(unaff_A2 + 0x122) = 0;
  func_0x00007350(unaff_A2 + 0x1e,0xa8d2);
  *(undefined4 *)(unaff_A6 + -8) = 0xff;
  iVar1 = (int)DAT_0000018e;
  *(int *)(unaff_A6 + -4) = iVar1;
  if (iVar1 < *(int *)(unaff_A6 + -8)) {
    puVar2 = (undefined4 *)(unaff_A6 + -4);
  }
  else {
    puVar2 = (undefined4 *)(unaff_A6 + -8);
  }
  *(undefined4 *)(unaff_A2 + 0x11e) = *puVar2;
  return;
}



// Function: FUN_00001c70 at 00001c70
// Size: 24 bytes

void FUN_00001c70(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_A2;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -8) = 0xff;
  iVar1 = (int)DAT_0000018e;
  *(int *)(unaff_A6 + -4) = iVar1;
  if (iVar1 < *(int *)(unaff_A6 + -8)) {
    puVar2 = (undefined4 *)(unaff_A6 + -4);
  }
  else {
    puVar2 = (undefined4 *)(unaff_A6 + -8);
  }
  *(undefined4 *)(unaff_A2 + 0x11e) = *puVar2;
  return;
}



// Function: FUN_00001c88 at 00001c88
// Size: 29 bytes

void FUN_00001c88(void)

{
  undefined4 *puVar1;
  int unaff_A2;
  int unaff_A6;
  char in_NF;
  char in_VF;
  
  if (in_VF == in_NF) {
    puVar1 = (undefined4 *)(unaff_A6 + -8);
  }
  else {
    puVar1 = (undefined4 *)(unaff_A6 + -4);
  }
  *(undefined4 *)(unaff_A2 + 0x11e) = *puVar1;
  return;
}



// Function: FUN_00001ca6 at 00001ca6
// Size: 18 bytes

void FUN_00001ca6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x11e) = param_2;
  return;
}



// Function: FUN_00001cb8 at 00001cb8
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cb8(int param_1)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  int local_68 [25];
  
  FUN_000025a0((short)local_68,(short)_DAT_00025c9c);
  (**(code **)(local_68[0] + 0xc))();
  while( true ) {
    iVar1 = local_68[1];
    cVar2 = FUN_000025d0((char)local_68);
    if (cVar2 == '\0') {
      FUN_000025a8((short)local_68);
      return;
    }
    (**(code **)(*_DAT_00025c9c + 0x74))((short)_DAT_00025c9c,(char)iVar1);
    if (*extraout_A0 == param_1) break;
    (**(code **)(local_68[0] + 0x10))();
  }
  FUN_000025a8((short)local_68);
  return;
}



// Function: FUN_00001cf0 at 00001cf0
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cf0(void)

{
  char cVar1;
  int *extraout_A0;
  int unaff_A6;
  
  do {
    (**(code **)(*_DAT_00025c9c + 0x74))();
    if (*extraout_A0 == *(int *)(unaff_A6 + 8)) {
      FUN_000025a8();
      return;
    }
    (**(code **)(*(int *)(unaff_A6 + -100) + 0x10))();
    cVar1 = FUN_000025d0();
  } while (cVar1 != '\0');
  FUN_000025a8();
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 94 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d08(void)

{
  undefined4 uVar1;
  char cVar2;
  int *extraout_A0;
  int unaff_A6;
  undefined1 in_ZF;
  short sStack00000004;
  undefined2 uStack00000006;
  
  while( true ) {
    if ((bool)in_ZF) {
      uStack00000006 = 0xffff;
      sStack00000004 = (short)unaff_A6 + -100;
      FUN_000025a8();
      return;
    }
    _sStack00000004 = (int *)(unaff_A6 + -100);
    (**(code **)(*_sStack00000004 + 0x10))();
    uVar1 = *(undefined4 *)(unaff_A6 + -0x60);
    _sStack00000004 = (int *)(unaff_A6 + -100);
    cVar2 = FUN_000025d0();
    if (cVar2 == '\0') break;
    sStack00000004 = (short)((uint)uVar1 >> 0x10);
    uStack00000006 = (undefined2)uVar1;
    (**(code **)(*_DAT_00025c9c + 0x74))();
    in_ZF = *extraout_A0 == *(int *)(unaff_A6 + 8);
  }
  uStack00000006 = 0xffff;
  sStack00000004 = (short)unaff_A6 + -100;
  FUN_000025a8();
  return;
}



// Function: FUN_00001d66 at 00001d66
// Size: 64 bytes

void FUN_00001d66(undefined4 param_1)

{
  int extraout_A0;
  
  FUN_00001cb8(param_1);
  if (extraout_A0 == 0) {
    FUN_00001c10();
  }
  else {
    FUN_00000b30(extraout_A0);
  }
  return;
}



// Function: FUN_00001da6 at 00001da6
// Size: 48 bytes

void FUN_00001da6(undefined4 param_1,char *param_2)

{
  if (*param_2 == '\0') {
    FUN_00001d66(param_1);
  }
  else {
    func_0x00000b70(param_2);
  }
  return;
}



// Function: FUN_00001dd6 at 00001dd6
// Size: 14 bytes

void FUN_00001dd6(void)

{
  return;
}



// Function: FUN_00001de4 at 00001de4
// Size: 44 bytes

void FUN_00001de4(void)

{
  int extraout_A0;
  
  func_0x000073b0(4);
  if (extraout_A0 != 0) {
    func_0x00006fe8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001e10 at 00001e10
// Size: 14 bytes

void FUN_00001e10(void)

{
  return;
}



// Function: FUN_00001e1e at 00001e1e
// Size: 1 bytes

void FUN_00001e1e(void)

{
  return;
}



// Function: FUN_00001e20 at 00001e20
// Size: 12 bytes

byte FUN_00001e20(void)

{
  byte in_D0b;
  
  return in_D0b | 0xf9;
}



// Function: FUN_00001e2c at 00001e2c
// Size: 44 bytes

void FUN_00001e2c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xb8);
  if (extraout_A0 != 0) {
    FUN_00001e58(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001e58 at 00001e58
// Size: 11 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e58(undefined4 *param_1)

{
  FUN_0000241a(param_1);
  *param_1 = &DAT_0000962c;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x21] = _DAT_00025b5a;
  param_1[0x22] = _DAT_00025b5e;
  *(undefined1 *)((int)param_1 + 0xb6) = 1;
  *(undefined4 *)((int)param_1 + 0xa6) = _DAT_00025b62;
  *(undefined4 *)((int)param_1 + 0xaa) = _DAT_00025b66;
  *(undefined4 *)((int)param_1 + 0xae) = _DAT_00025b6a;
  *(undefined4 *)((int)param_1 + 0xb2) = _DAT_00025b6e;
  param_1[0x26] = 0x20202020;
  param_1[0x25] = 0x20202020;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x1f] = _DAT_00025b5a;
  param_1[0x20] = _DAT_00025b5e;
  param_1[0x27] = 0x10;
  param_1[0x28] = 0x10;
  return;
}



// Function: FUN_00001e68 at 00001e68
// Size: 57 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e68(void)

{
  uint unaff_D2;
  undefined4 in_A0;
  undefined4 *unaff_A2;
  int unaff_A6;
  
  *_DAT_0000962c = *_DAT_0000962c & ~('\x01' << (unaff_D2 & 7));
  *unaff_A2 = in_A0;
  *(undefined1 *)((int)unaff_A2 + 0xa5) = 0;
  *(undefined1 *)(unaff_A2 + 0x29) = 0;
  unaff_A2[0x21] = _DAT_00025b5a;
  unaff_A2[0x22] = _DAT_00025b5e;
  *(undefined1 *)((int)unaff_A2 + 0xb6) = 1;
  *(undefined4 *)((int)unaff_A2 + 0xa6) = _DAT_00025b62;
  *(undefined4 *)((int)unaff_A2 + 0xaa) = _DAT_00025b66;
  *(undefined4 *)((int)unaff_A2 + 0xae) = _DAT_00025b6a;
  *(undefined4 *)((int)unaff_A2 + 0xb2) = _DAT_00025b6e;
  unaff_A2[0x26] = 0x20202020;
  unaff_A2[0x25] = 0x20202020;
  unaff_A2[0x24] = 0;
  unaff_A2[0x23] = 0;
  unaff_A2[0x1f] = _DAT_00025b5a;
  unaff_A2[0x20] = _DAT_00025b5e;
  *(undefined4 *)(unaff_A6 + -8) = 0x10;
  *(undefined4 *)(unaff_A6 + -4) = 0x10;
  unaff_A2[0x27] = *(undefined4 *)(unaff_A6 + -8);
  unaff_A2[0x28] = *(undefined4 *)(unaff_A6 + -4);
  return;
}



// Function: FUN_00001ea8 at 00001ea8
// Size: 67 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ea8(void)

{
  uint *in_A0;
  int unaff_A2;
  uint *unaff_A4;
  int unaff_A6;
  
  *in_A0 = *in_A0 | 0x257c2020;
  *unaff_A4 = *unaff_A4 | 0x42aa0090;
  *(undefined4 *)(unaff_A2 + 0x8c) = 0;
  *(undefined4 *)(unaff_A2 + 0x7c) = _DAT_00025b5a;
  *(undefined4 *)(unaff_A2 + 0x80) = _DAT_00025b5e;
  *(undefined4 *)(unaff_A6 + -8) = 0x10;
  *(undefined4 *)(unaff_A6 + -4) = 0x10;
  *(undefined4 *)(unaff_A2 + 0x9c) = *(undefined4 *)(unaff_A6 + -8);
  *(undefined4 *)(unaff_A2 + 0xa0) = *(undefined4 *)(unaff_A6 + -4);
  return;
}



// Function: FUN_00001eec at 00001eec
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001eec(int *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5,
                 undefined2 param_6,undefined4 param_7)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_7e;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_52;
  undefined4 uStack_4e;
  undefined1 auStack_4a [52];
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = (undefined2)*(undefined4 *)(param_2 + 0x26);
  }
  uStack_7e = (undefined2)((uint)param_1 >> 0x10);
  uVar3 = SUB42(param_1,0);
  FUN_0000250c(uVar3,uVar2,(char)param_2,param_3,param_4);
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  puStack_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uStack_52 = 0x10;
    uStack_4e = 0x10;
    puVar4 = &uStack_52;
    (**(code **)(*param_1 + 0x3a8))(uVar3,(short)puVar4);
    (**(code **)(*param_1 + 0x3a4))(uVar3,param_6,uStack_7e,(short)((uint)puVar4 >> 0x10));
    if (param_7._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x39c))();
    }
    if (param_7._2_1_ != '\0') {
      (**(code **)(*param_1 + 0x39c))();
    }
    _DAT_00025f52 = puStack_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10((short)((uint)uStack_14 >> 0x10));
  }
  if ((param_7._0_1_ != '\0') || (param_7._2_1_ != '\0')) {
    (**(code **)(*param_1 + 0x3a0))();
  }
  return;
}



// Function: FUN_00001f10 at 00001f10
// Size: 250 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f10(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  char unaff_D3b;
  char unaff_D4b;
  byte *in_A0;
  byte *unaff_A2;
  byte *pbVar4;
  byte *unaff_A4;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined2 uStack00000008;
  undefined1 uStack0000000c;
  undefined1 uStack0000000d;
  undefined1 uStack0000000e;
  undefined2 local_8;
  
  pbVar4 = unaff_A2 + 1;
  *unaff_A2 = *unaff_A2 | 0x2e;
  *in_A0 = *in_A0 | 0x2e;
  *unaff_A4 = *unaff_A4 | 0x2e;
  in_A0[1] = in_A0[1] | 0xc;
  local_8 = (undefined2)((uint)pbVar4 >> 0x10);
  FUN_0000250c((short)pbVar4);
  *(undefined2 *)(unaff_A6 + -0x12) = 0;
  *(undefined4 *)(unaff_A6 + -0x10) = 0;
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar3 = func_0x000076a8((short)unaff_A6 + -0x46);
  uStack0000000d = SUB41(pbVar4,0);
  uVar2 = uStack0000000d;
  uStack0000000c = (undefined1)((uint)pbVar4 >> 8);
  uVar1 = uStack0000000c;
  if (iVar3 == 0) {
    uStack0000000e = 0;
    uStack0000000c = 0;
    *(undefined4 *)(unaff_A6 + -0x4e) = 0x10;
    *(undefined4 *)(unaff_A6 + -0x4a) = 0x10;
    uStack00000008 = (undefined2)((uint)(unaff_A6 + -0x4e) >> 0x10);
    uStack00000004 = local_8;
    (**(code **)(*(int *)pbVar4 + 0x3a8))();
    (**(code **)(*(int *)pbVar4 + 0x3a4))();
    if (unaff_D4b != '\0') {
      uStack0000000e = 1;
      uStack00000008 = 0x1fac;
      uStack0000000c = uVar1;
      (**(code **)(*(int *)pbVar4 + 0x39c))();
    }
    if (unaff_D3b != '\0') {
      uStack0000000e = 0;
      uStack00000008 = 0x1fc0;
      uStack0000000c = uVar1;
      uStack0000000d = uVar2;
      (**(code **)(*(int *)pbVar4 + 0x39c))();
    }
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
  }
  else {
    uStack0000000c = (undefined1)((uint)pbVar4 >> 0x18);
    uStack0000000d = (undefined1)((uint)pbVar4 >> 0x10);
    uStack00000008 = 0;
    uStack0000000e = uVar1;
    (**(code **)(*(int *)pbVar4 + 0x4c))();
    uStack00000008 = (undefined2)((uint)*(undefined4 *)(unaff_A6 + -0x10) >> 0x10);
    uStack00000004 = 0x1fe6;
    FUN_00001c10();
  }
  if ((unaff_D4b != '\0') || (unaff_D3b != '\0')) {
    uStack0000000e = 0;
    uStack00000008 = 0x2000;
    uStack0000000c = uVar1;
    uStack0000000d = uVar2;
    (**(code **)(*(int *)pbVar4 + 0x3a0))();
  }
  return;
}



// Function: FUN_0000200a at 0000200a
// Size: 342 bytes

void FUN_0000200a(int *param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *piVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  int local_78 [25];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = false;
  FUN_0000267a((short)param_1,param_2);
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    for (cVar2 = '\0'; cVar2 < '\x02'; cVar2 = cVar2 + '\x01') {
      if ((param_1[cVar2 + 0x25] != 0x20202020) && (param_1[cVar2 + 0x23] == 0)) {
        (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x188))
                  ((short)*(int **)((int)param_1 + 0x1e),(char)param_1[cVar2 + 0x25]);
        if (extraout_A0 != (int *)0x0) {
          (**(code **)(*extraout_A0 + 0x434))((short)extraout_A0,(char)param_1);
          bVar1 = true;
        }
      }
    }
  }
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  func_0x00004b40((short)local_78,(char)param_1);
  func_0x00004b48((short)local_78);
  piVar3 = extraout_A0_00;
  while( true ) {
    cVar2 = (**(code **)(local_78[0] + 8))();
    if (cVar2 == '\0') break;
    if (*(char *)(piVar3 + 0x14) != '\0') {
      (**(code **)(*piVar3 + 0x310))((short)piVar3,(char)auStack_88);
      FUN_00003960(&local_14,(short)&local_14,(short)auStack_88);
    }
    func_0x00004b50((char)local_78);
    piVar3 = extraout_A0_01;
  }
  FUN_00003980((short)&local_14,(short)auStack_90);
  (**(code **)(*param_1 + 0x3a4))((short)param_1,(short)auStack_90);
  if (bVar1) {
    (**(code **)(*param_1 + 0x3a0))();
  }
  FUN_00002798((short)local_78);
  return;
}



// Function: FUN_00002160 at 00002160
// Size: 224 bytes

void FUN_00002160(int *param_1,int *param_2)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  int local_78 [25];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = (undefined2)((uint)param_1 >> 0x10);
  uVar4 = SUB42(param_1,0);
  FUN_000026a8(uVar4,(char)param_2);
  (**(code **)(*param_2 + 0x1a0))((short)param_2,uVar4);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  func_0x00004b40(local_78,param_1);
  func_0x00004b48(local_78);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_78[0] + 8))();
    if (cVar1 == '\0') break;
    if (*(char *)(param_2 + 0x14) != '\0') {
      (**(code **)(*piVar2 + 0x310))((short)piVar2,(char)auStack_88);
      FUN_00003960(&local_14,(short)&local_14,(short)auStack_88);
    }
    func_0x00004b50((char)local_78);
    piVar2 = extraout_A0_00;
  }
  FUN_00003980((short)&local_14,(short)auStack_90);
  puVar5 = auStack_90;
  (**(code **)(*param_1 + 0x3a4))(uVar4,(short)puVar5);
  FUN_00002798((short)local_78,uVar3,(short)((uint)puVar5 >> 0x10));
  return;
}



// Function: FUN_00002240 at 00002240
// Size: 118 bytes

void FUN_00002240(int param_1)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  undefined4 *extraout_A0_01;
  undefined4 uVar2;
  
  func_0x000073b0(0xbe);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_000011ec(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  uVar2 = 0x2284;
  func_0x000038a8((short)param_1 + 0x84);
  FUN_00001214(uVar1,*(undefined4 *)(param_1 + 0x1e),&DAT_00025b5a,&DAT_00025b5a,
               CONCAT13(4,(int3)CONCAT22((short)((uint)uVar2 >> 0x10),CONCAT11(4,(char)uVar2))),
               (short)((uint)*extraout_A0_01 >> 0x10));
  return;
}



// Function: FUN_000022b6 at 000022b6
// Size: 14 bytes

void FUN_000022b6(void)

{
  return;
}



// Function: FUN_000022c4 at 000022c4
// Size: 44 bytes

void FUN_000022c4(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x28);
  if (extraout_A0 != 0) {
    FUN_000022f0(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000022f0 at 000022f0
// Size: 54 bytes

void FUN_000022f0(undefined4 *param_1)

{
  FUN_00000c9a(param_1);
  *param_1 = 0x8d3e;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// Function: FUN_00002326 at 00002326
// Size: 34 bytes

void FUN_00002326(int param_1,undefined4 param_2)

{
  FUN_00000ce8(param_1,0x74616262);
  *(undefined1 *)(param_1 + 0x1e) = param_2._0_1_;
  return;
}



// Function: FUN_00002348 at 00002348
// Size: 14 bytes

void FUN_00002348(void)

{
  return;
}



// Function: FUN_00002356 at 00002356
// Size: 44 bytes

void FUN_00002356(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x28);
  if (extraout_A0 != 0) {
    func_0x00006ff0(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00002382 at 00002382
// Size: 22 bytes

void FUN_00002382(undefined4 param_1)

{
  FUN_00002326(param_1);
  return;
}



// Function: FUN_00002398 at 00002398
// Size: 14 bytes

void FUN_00002398(void)

{
  return;
}



// Function: FUN_000023a6 at 000023a6
// Size: 44 bytes

void FUN_000023a6(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x28);
  if (extraout_A0 != 0) {
    func_0x00006ff8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000023d2 at 000023d2
// Size: 14 bytes

void FUN_000023d2(void)

{
  return;
}



// Function: FUN_000023e0 at 000023e0
// Size: 14 bytes

void FUN_000023e0(void)

{
  return;
}



// Function: FUN_000023ee at 000023ee
// Size: 44 bytes

void FUN_000023ee(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x7c);
  if (extraout_A0 != 0) {
    FUN_0000241a(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000241a at 0000241a
// Size: 242 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000241a(undefined4 *param_1)

{
  FUN_000034c0(param_1);
  *param_1 = 0x7d50;
  func_0x00007208((int)param_1 + 0x52);
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = _DAT_00025b5a;
  *(undefined4 *)((int)param_1 + 0x2e) = _DAT_00025b5e;
  *(undefined4 *)((int)param_1 + 0x32) = _DAT_00025b5a;
  *(undefined4 *)((int)param_1 + 0x36) = _DAT_00025b5e;
  *(undefined4 *)((int)param_1 + 0x3a) = _DAT_00025b5a;
  *(undefined4 *)((int)param_1 + 0x3e) = _DAT_00025b5e;
  *(undefined1 *)((int)param_1 + 0x43) = 4;
  *(undefined1 *)((int)param_1 + 0x42) = 4;
  *(undefined1 *)(param_1 + 0x11) = 4;
  *(undefined1 *)((int)param_1 + 0x45) = 2;
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined2 *)((int)param_1 + 0x4a) = 0xffff;
  *(undefined2 *)(param_1 + 0x13) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x4e) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = _DAT_00025b56;
  *(undefined4 *)((int)param_1 + 0x56) = _DAT_00025b5a;
  *(undefined4 *)((int)param_1 + 0x5a) = _DAT_00025b5e;
  *(undefined4 *)((int)param_1 + 0x5e) = _DAT_00025b62;
  *(undefined4 *)((int)param_1 + 0x62) = _DAT_00025b66;
  *(undefined4 *)((int)param_1 + 0x66) = _DAT_00025b6a;
  *(undefined4 *)((int)param_1 + 0x6a) = _DAT_00025b6e;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0x300;
  return;
}



// Function: FUN_0000250c at 0000250c
// Size: 4 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000250c(int *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_000034c8(param_1,param_3);
  *(undefined4 *)((int)param_1 + 0x2a) = *param_4;
  *(undefined4 *)((int)param_1 + 0x2e) = param_4[1];
  *(undefined4 *)((int)param_1 + 0x32) = *param_5;
  *(undefined4 *)((int)param_1 + 0x36) = param_5[1];
  *(undefined1 *)((int)param_1 + 0x43) = param_6._0_1_;
  *(undefined1 *)((int)param_1 + 0x42) = param_6._2_1_;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  puStack_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x174))(param_3,param_1);
    }
    (**(code **)(*param_1 + 0x19c))(param_1,param_2);
    _DAT_00025f52 = puStack_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_00002510 at 00002510
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002510(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_A6;
  
  piVar1 = *(int **)(unaff_A6 + 8);
  piVar2 = *(int **)(unaff_A6 + 0x10);
  FUN_000034c8(piVar1,piVar2);
  puVar3 = *(undefined4 **)(unaff_A6 + 0x14);
  *(undefined4 *)((int)piVar1 + 0x2a) = *puVar3;
  *(undefined4 *)((int)piVar1 + 0x2e) = puVar3[1];
  puVar3 = *(undefined4 **)(unaff_A6 + 0x18);
  *(undefined4 *)((int)piVar1 + 0x32) = *puVar3;
  *(undefined4 *)((int)piVar1 + 0x36) = puVar3[1];
  *(undefined1 *)((int)piVar1 + 0x43) = *(undefined1 *)(unaff_A6 + 0x1c);
  *(undefined1 *)((int)piVar1 + 0x42) = *(undefined1 *)(unaff_A6 + 0x1e);
  *(undefined2 *)(unaff_A6 + -0x12) = 0;
  *(undefined4 *)(unaff_A6 + -0x10) = 0;
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar4 = func_0x000076a8((short)unaff_A6 + -0x46);
  if (iVar4 == 0) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x174))(piVar2,piVar1);
    }
    (**(code **)(*piVar1 + 0x19c))(piVar1,*(undefined4 *)(unaff_A6 + 0xc));
    _DAT_00025f52 = *(int *)(unaff_A6 + -0xc);
  }
  else {
    (**(code **)(*piVar1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_000025a0 at 000025a0
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025a0(void)

{
  int unaff_A6;
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x19c))();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_000025a8 at 000025a8
// Size: 14 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025a8(void)

{
  code *in_A1;
  int unaff_A6;
  
  (*in_A1)();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_000025d0 at 000025d0
// Size: 12 bytes

void FUN_000025d0(void)

{
  return;
}



// Function: FUN_000025dc at 000025dc
// Size: 4 bytes

void FUN_000025dc(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int aiStack_68 [25];
  
  if (*(int *)((int)param_1 + 0x26) == 0) {
    (**(code **)(*param_1 + 0x19c))(param_1,param_2);
  }
  func_0x00004b40(aiStack_68,param_1);
  func_0x00004b48((short)aiStack_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(aiStack_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x120))(piVar2,param_2);
    func_0x00004b50((short)aiStack_68);
    piVar2 = extraout_A0_00;
  }
  (**(code **)(*param_1 + 0x124))(param_1,param_2);
  FUN_00002798((short)aiStack_68);
  return;
}



// Function: FUN_000025e0 at 000025e0
// Size: 8 bytes

void FUN_000025e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar4;
  int unaff_A6;
  
  piVar1 = *(int **)(unaff_A6 + 8);
  uVar2 = *(undefined4 *)(unaff_A6 + 0xc);
  if (*(int *)((int)piVar1 + 0x26) == 0) {
    (**(code **)(*piVar1 + 0x19c))(piVar1,uVar2);
  }
  func_0x00004b40(unaff_A6 + -100,piVar1);
  func_0x00004b48((short)(unaff_A6 + -100));
  piVar4 = extraout_A0;
  while( true ) {
    cVar3 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
    if (cVar3 == '\0') break;
    (**(code **)(*piVar4 + 0x120))(piVar4,uVar2);
    func_0x00004b50((short)(unaff_A6 + -100));
    piVar4 = extraout_A0_00;
  }
  (**(code **)(*piVar1 + 0x124))(piVar1,uVar2);
  FUN_00002798((short)unaff_A6 + -100);
  return;
}



// Function: FUN_000025e8 at 000025e8
// Size: 8 bytes

void FUN_000025e8(void)

{
  undefined4 uVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *unaff_A2;
  int *piVar3;
  int unaff_A6;
  
  uVar1 = *(undefined4 *)(unaff_A6 + 0xc);
  if (*(int *)((int)unaff_A2 + 0x26) == 0) {
    (**(code **)(*unaff_A2 + 0x19c))();
  }
  func_0x00004b40(unaff_A6 + -100);
  func_0x00004b48((short)(unaff_A6 + -100));
  piVar3 = extraout_A0;
  while( true ) {
    cVar2 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
    if (cVar2 == '\0') break;
    (**(code **)(*piVar3 + 0x120))(piVar3,uVar1);
    func_0x00004b50((short)(unaff_A6 + -100));
    piVar3 = extraout_A0_00;
  }
  (**(code **)(*unaff_A2 + 0x124))();
  FUN_00002798((short)unaff_A6 + -100);
  return;
}



// Function: FUN_000025f0 at 000025f0
// Size: 8 bytes

void FUN_000025f0(void)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *unaff_A2;
  int *piVar2;
  int unaff_A6;
  bool in_ZF;
  
  if (in_ZF) {
    (**(code **)(*unaff_A2 + 0x19c))();
  }
  func_0x00004b40(unaff_A6 + -100);
  func_0x00004b48((short)(unaff_A6 + -100));
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x120))();
    func_0x00004b50((short)(unaff_A6 + -100));
    piVar2 = extraout_A0_00;
  }
  (**(code **)(*unaff_A2 + 0x124))();
  FUN_00002798((short)unaff_A6 + -100);
  return;
}



// Function: FUN_000025f8 at 000025f8
// Size: 130 bytes

void FUN_000025f8(void)

{
  char cVar1;
  int *in_A0;
  int *extraout_A0;
  int *extraout_A0_00;
  int *unaff_A2;
  int *piVar2;
  int unaff_A6;
  
  (**(code **)(*in_A0 + 0x19c))();
  func_0x00004b40();
  func_0x00004b48((short)(unaff_A6 + -100));
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(*(int *)(unaff_A6 + -100) + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x120))();
    func_0x00004b50((short)(unaff_A6 + -100));
    piVar2 = extraout_A0_00;
  }
  (**(code **)(*unaff_A2 + 0x124))();
  FUN_00002798((short)unaff_A6 + -100);
  return;
}



// Function: FUN_0000267a at 0000267a
// Size: 8 bytes

void FUN_0000267a(void)

{
  return;
}



// Function: FUN_00002682 at 00002682
// Size: 38 bytes

void FUN_00002682(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e) + 0x38c))(*(int **)(param_1 + 0x1e),param_2);
  }
  return;
}



// Function: FUN_000026a8 at 000026a8
// Size: 92 bytes

undefined4 FUN_000026a8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_A0;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    if (*(int *)((int)param_1 + 0x22) == 0) {
      func_0x000020e0();
      *(undefined4 *)((int)param_1 + 0x22) = extraout_A0;
    }
    (**(code **)(**(int **)((int)param_1 + 0x22) + 0xec))(*(int **)((int)param_1 + 0x22),param_2);
    (**(code **)(*param_2 + 0x394))(param_2,param_1);
    uVar1 = (**(code **)(*param_1 + 0x38c))(param_1,param_2);
  }
  return uVar1;
}



// Function: FUN_00002704 at 00002704
// Size: 56 bytes

int FUN_00002704(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_2 != *(int *)(param_1 + 0x26))) {
    *(int *)(param_1 + 0x26) = param_2;
    param_2 = (**(code **)(**(int **)(param_1 + 0x26) + 0x194))(*(int **)(param_1 + 0x26),param_1);
  }
  return param_2;
}



// Function: FUN_0000273c at 0000273c
// Size: 64 bytes

void FUN_0000273c(int param_1,int *param_2)

{
  undefined1 auStack_c [8];
  
  if (param_2 != (int *)0x0) {
    FUN_000038b8(param_1 + 0x32,auStack_c,param_1 + 0x2a);
    (**(code **)(*param_2 + 0x3a4))(param_2,auStack_c);
  }
  return;
}



// Function: FUN_0000277c at 0000277c
// Size: 26 bytes

void FUN_0000277c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_A0;
  
  if (param_2 != *(int *)((int)param_1 + 0x1e)) {
    iVar1 = *(int *)((int)param_1 + 0x1e);
    *(int *)((int)param_1 + 0x1e) = param_2;
    (**(code **)(*param_1 + 0x1e0))();
    if (param_2 == 0) {
      if (iVar1 == param_1[1]) {
        param_1[1] = 0;
      }
      (**(code **)(*param_1 + 0x1a4))(param_1,0);
    }
    else {
      if (param_1[1] == 0) {
        param_1[1] = param_2;
      }
      (**(code **)(*param_1 + 0x2f8))();
      (**(code **)(*param_1 + 0x1a4))(param_1,extraout_A0);
    }
  }
  return;
}



// Function: FUN_00002798 at 00002798
// Size: 96 bytes

void FUN_00002798(void)

{
  int *unaff_A2;
  int unaff_A3;
  int unaff_A4;
  byte *unaff_A6;
  int *in_stack_00000000;
  
  *unaff_A6 = *unaff_A6 | 10;
  (**(code **)(*in_stack_00000000 + 0x1e0))();
  if (unaff_A3 == 0) {
    if (unaff_A4 == unaff_A2[1]) {
      unaff_A2[1] = 0;
    }
    (**(code **)(*unaff_A2 + 0x1a4))();
  }
  else {
    if (unaff_A2[1] == 0) {
      unaff_A2[1] = unaff_A3;
    }
    (**(code **)(*unaff_A2 + 0x2f8))();
    (**(code **)(*unaff_A2 + 0x1a4))();
  }
  return;
}



// Function: FUN_000027f8 at 000027f8
// Size: 62 bytes

void FUN_000027f8(void)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x3c);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    FUN_00001874(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  FUN_000018ec(uVar1);
  return;
}



// Function: FUN_00002836 at 00002836
// Size: 40 bytes

void FUN_00002836(int *param_1)

{
  undefined4 extraout_A0;
  
  if (*(int *)((int)param_1 + 0x6e) == 0) {
    (**(code **)(*param_1 + 0x21c))();
    *(undefined4 *)((int)param_1 + 0x6e) = extraout_A0;
  }
  return;
}



// Function: FUN_0000285e at 0000285e
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000285e(int *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    sVar2 = (**(code **)(*param_2 + 0x84))();
    for (sVar4 = 0; sVar4 < sVar2; sVar4 = sVar4 + 1) {
      local_4e = 0;
      cVar3 = (**(code **)(*param_2 + 0xb4))(param_2,&local_4e);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x174))(param_1,local_4e);
      }
    }
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_0000291a at 0000291a
// Size: 108 bytes

void FUN_0000291a(undefined2 param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  func_0x00004b40((short)local_68,param_1);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x194))();
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  FUN_00002798((short)local_68);
  return;
}



// Function: FUN_00002986 at 00002986
// Size: 14 bytes

void FUN_00002986(void)

{
  return;
}



// Function: FUN_00002994 at 00002994
// Size: 14 bytes

void FUN_00002994(void)

{
  return;
}



// Function: FUN_000029a2 at 000029a2
// Size: 44 bytes

void FUN_000029a2(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x188);
  if (extraout_A0 != 0) {
    FUN_000029ce(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000029ce at 000029ce
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000029ce(undefined4 *param_1)

{
  FUN_0000241a(param_1);
  *param_1 = 0x80ec;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x7e) = _DAT_00025b5a;
  *(undefined4 *)((int)param_1 + 0x82) = _DAT_00025b5e;
  func_0x00007350((int)param_1 + 0x86,0x8488);
  *(undefined2 *)((int)param_1 + 0x186) = 0x20;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



// Function: FUN_00002a28 at 00002a28
// Size: 114 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002a28(int *param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_0000267a((short)param_1,param_2);
  if (*(short *)(param_1 + 0x1f) != -1) {
    if (*(int *)((int)param_1 + 0x1e) != 0) {
      uVar2 = 2;
      uVar1 = (undefined2)((uint)param_1 >> 0x10);
      (**(code **)(*param_1 + 0x1bc))((short)param_1,0x5b5a);
      (**(code **)(*param_1 + 0x1c0))
                (param_1,(short)*(undefined4 *)((int)param_1 + 0x1e) + 0x32,uVar1,uVar2);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002c78 at 00002c78
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c78(int *param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined2 uStack00000014;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 100))();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x60))((short)param_1,(short)extraout_A0,uStack00000014);
    _DAT_00025f52 = local_10;
  }
  else {
    FUN_00000e10(extraout_A0);
    FUN_00001c10((char)((uint)local_14 >> 0x10));
  }
  return;
}



// Function: FUN_00002d28 at 00002d28
// Size: 350 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d28(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar1;
  undefined1 uVar2;
  short local_28;
  short local_26;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)0x0;
  if ((param_4._0_1_ != '\0') || (param_4._2_1_ != '\0')) {
    local_14 = _DAT_00025b62;
    local_10 = _DAT_00025b66;
    local_c = _DAT_00025b6a;
    local_8 = _DAT_00025b6e;
    local_1c = *(int *)((int)param_2 + 0x32);
    local_18 = *(int *)((int)param_2 + 0x36);
    uVar2 = 0x88;
    FUN_000038d8(&local_1c,param_5);
    if ((param_4._0_1_ != '\0') && (local_1c = local_1c + -0xf, param_4._2_1_ == '\0')) {
      local_8 = 0xfffffff1;
    }
    if ((param_4._2_1_ != '\0') && (local_18 = local_18 + -0xf, param_4._0_1_ == '\0')) {
      local_c = 0xfffffff1;
    }
    func_0x000073b0(0xb8);
    piVar1 = (int *)0x0;
    if (extraout_A0 != 0) {
      FUN_00001e58(extraout_A0);
      piVar1 = extraout_A0_00;
    }
    FUN_00001eec(piVar1,(short)param_2,(short)param_5,(short)&local_1c,uVar2,&DAT_00025b5a);
    *(undefined4 *)((int)piVar1 + 0xa6) = local_14;
    *(undefined4 *)((int)piVar1 + 0xaa) = local_10;
    *(undefined4 *)((int)piVar1 + 0xae) = local_c;
    *(undefined4 *)((int)piVar1 + 0xb2) = local_8;
  }
  if (piVar1 == (int *)0x0) {
    (**(code **)(*param_2 + 0x174))(param_2,param_3);
  }
  else {
    (**(code **)(*piVar1 + 0x174))(piVar1,param_3);
  }
  (**(code **)(*param_2 + 0x3b4))(param_2,param_3);
  func_0x000072b8((short)param_2[0x1f] + 0x10,(char)&local_28);
  local_24 = (int)local_28;
  local_20 = (int)local_26;
  (**(code **)(*param_2 + 0x1c0))((short)param_2,(char)&local_24);
  return;
}



// Function: FUN_00002e86 at 00002e86
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e86(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_A0;
  int extraout_A0_00;
  undefined2 extraout_A0w;
  undefined2 extraout_A0w_00;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = 0;
  uVar5 = SUB41(&local_50,0);
  (**(code **)(*_DAT_000266a8 + 0x1f0))
            ((short)_DAT_000266a8,0,(short)((uint)&local_4f >> 0x10),(char)((uint)&local_50 >> 0x10)
            );
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  local_4e = extraout_A0;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    uVar4 = 0;
    func_0x000073b0(0xc2);
    uVar2 = 0;
    if (extraout_A0_00 != 0) {
      uVar4 = (undefined1)((uint)extraout_A0_00 >> 0x10);
      FUN_000034d2((char)extraout_A0_00);
      uVar2 = extraout_A0w;
    }
    _DAT_00025f52 = local_10;
  }
  else {
    uVar3 = (undefined1)((uint)local_4e >> 0x10);
    uVar4 = (undefined1)local_4e;
    FUN_00001c58(uVar4);
    local_4e._2_2_ = extraout_A0w_00;
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar3,uVar5);
  }
  FUN_000035ca(uVar2,param_3._0_2_,local_4e._2_2_,uVar4);
  return;
}



// Function: FUN_00002f64 at 00002f64
// Size: 114 bytes

int * FUN_00002f64(int *param_1)

{
  int *piVar1;
  int *extraout_A0;
  int extraout_A0_00;
  
  (**(code **)(*param_1 + 0x6c))();
  piVar1 = extraout_A0;
  if ((extraout_A0 != (int *)0x0) && (extraout_A0[0x26] != 0x20202020)) {
    (**(code **)(*extraout_A0 + 0x188))((short)extraout_A0,extraout_A0[0x26]);
    piVar1 = (int *)0x0;
    if (extraout_A0_00 != 0) {
      piVar1 = (int *)(**(code **)(*extraout_A0 + 0x3b4))((short)extraout_A0,extraout_A0_00);
    }
  }
  return piVar1;
}



// Function: FUN_00002fd6 at 00002fd6
// Size: 302 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fd6(int *param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  int *extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined2 uVar4;
  undefined1 auStack_152 [256];
  undefined4 local_52;
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_52 = 0;
  local_4e = (int *)0x0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x80))();
    local_4e = extraout_A0;
    sVar3 = (**(code **)(*extraout_A0 + 0x84))();
    if (sVar3 == 0x300) {
      (**(code **)(*param_1 + 0x74))((short)param_1,(short)local_4e,param_3,param_4._2_4_);
      local_52 = extraout_A0_00;
    }
    else {
      func_0x00007320((short)auStack_152,0x7cfe);
      FUN_00001c12(extraout_A0_01);
    }
    _DAT_00025f52 = local_10;
  }
  else {
    if (local_4e != (int *)0x0) {
      uVar2 = (**(code **)(*local_4e + 0x60))();
      (**(code **)(*local_4e + 0x5c))((short)local_4e,uVar2);
    }
    FUN_00000e10(local_4e);
    uVar4 = (undefined2)((uint)local_52 >> 0x10);
    local_4e = extraout_A0_02;
    FUN_00000e10((short)local_52);
    local_52 = extraout_A0_03;
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar4);
  }
  FUN_00000e10(local_4e);
  return;
}



// Function: FUN_00003104 at 00003104
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003104(undefined4 param_1,int *param_2,int *param_3,undefined2 param_4)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 auStack_56 [8];
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_4e = (int *)0x0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((char)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0xb4))((short)param_2,(char)&local_4e);
    if (local_4e != (int *)0x0) {
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 0x174))((short)param_3,(char)local_4e);
      }
      cVar2 = FUN_000038e0(param_4,0x5a);
      if (cVar2 != '\0') {
        FUN_000038b8((short)local_4e + 0x2a,(short)auStack_56,param_4);
        (**(code **)(*local_4e + 0x1bc))((short)local_4e,(short)auStack_56);
      }
    }
    _DAT_00025f52 = local_10;
  }
  else {
    uVar3 = (undefined2)((uint)local_4e >> 0x10);
    FUN_00000e10((char)local_4e);
    FUN_00001c10((short)((uint)local_14 >> 0x10),uVar3);
  }
  return;
}



// Function: FUN_00003140 at 00003140
// Size: 178 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003140(void)

{
  char cVar1;
  undefined4 extraout_A0;
  int unaff_A6;
  bool in_ZF;
  undefined2 uVar2;
  
  if (in_ZF) {
    (**(code **)(**(int **)(unaff_A6 + 0xc) + 0xb4))
              ((short)*(int **)(unaff_A6 + 0xc),(char)unaff_A6 + -0x4a);
    if (*(int *)(unaff_A6 + -0x4a) != 0) {
      if (*(int *)(unaff_A6 + 0x10) != 0) {
        (**(code **)(**(int **)(unaff_A6 + 0x10) + 0x174))
                  ((short)*(int **)(unaff_A6 + 0x10),(char)*(undefined4 *)(unaff_A6 + -0x4a));
      }
      cVar1 = FUN_000038e0((short)*(undefined4 *)(unaff_A6 + 0x14),0x5a);
      if (cVar1 != '\0') {
        FUN_000038b8((short)*(undefined4 *)(unaff_A6 + -0x4a) + 0x2a,(short)unaff_A6 + -0x52,
                     (short)*(undefined4 *)(unaff_A6 + 0x14));
        (**(code **)(**(int **)(unaff_A6 + -0x4a) + 0x1bc))
                  ((short)*(int **)(unaff_A6 + -0x4a),(short)unaff_A6 + -0x52);
      }
    }
    _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  }
  else {
    uVar2 = (undefined2)((uint)*(undefined4 *)(unaff_A6 + -0x4a) >> 0x10);
    FUN_00000e10((char)*(undefined4 *)(unaff_A6 + -0x4a));
    *(undefined4 *)(unaff_A6 + -0x4a) = extraout_A0;
    FUN_00001c10((short)((uint)*(undefined4 *)(unaff_A6 + -0x10) >> 0x10),uVar2);
  }
  return;
}



// Function: FUN_000031f2 at 000031f2
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031f2(int *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x70))(param_1,(short)param_2,param_3);
  uVar2 = 0;
  if (extraout_A0 != (int *)0x0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      (**(code **)(*extraout_A0 + 0x120))((short)extraout_A0,param_2);
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*extraout_A0 + 0x4c))();
      FUN_00001c10((short)((uint)local_14 >> 0x10));
    }
    uVar2 = (**(code **)(*extraout_A0 + 0x1c4))();
  }
  return uVar2;
}



// Function: FUN_000032a8 at 000032a8
// Size: 466 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032a8(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int extraout_A0;
  int *extraout_A0_00;
  int extraout_A0_01;
  int *extraout_A0_02;
  int *piVar2;
  int *extraout_A0_03;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 uStack_53;
  int *local_52;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_52 = (int *)0x0;
  local_8 = (int *)0x0;
  if (param_2._2_4_ != 0) {
    func_0x000073b0(0x20);
    piVar2 = (int *)0x0;
    if (extraout_A0 != 0) {
      func_0x00003138(extraout_A0);
      piVar2 = extraout_A0_00;
    }
    uVar5 = SUB41(piVar2,0);
    local_52 = piVar2;
    FUN_00003140(uVar5);
    local_1a = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4e;
    iVar1 = func_0x000076a8((short)auStack_4e);
    if (iVar1 == 0) {
      func_0x000073b0(8);
      piVar2 = (int *)0x0;
      if (extraout_A0_01 != 0) {
        func_0x00003050(extraout_A0_01);
        piVar2 = extraout_A0_02;
      }
      local_8 = piVar2;
      func_0x00003058(piVar2);
      puVar6 = &uStack_53;
      uVar4 = (undefined2)((uint)_DAT_000267f4 >> 0x10);
      uVar3 = (undefined2)((uint)local_8 >> 0x10);
      (**(code **)(*local_8 + 0x58))((short)local_8,(short)_DAT_000267f4);
      (**(code **)(*local_8 + 0x58))
                (local_8,_DAT_000267f8,(short)((uint)&uStack_53 >> 0x10),uVar3,uVar4,uVar5,puVar6);
      (**(code **)(*local_8 + 0x58))(local_8,_DAT_000267fc);
      (**(code **)(*local_8 + 0x58))(local_8,_DAT_00026800);
      (**(code **)(*local_8 + 0x58))(local_8,_DAT_00026804);
      (**(code **)(*local_8 + 0x58))(local_8,_DAT_00026808);
      (**(code **)(*local_8 + 0x58))(local_8,_DAT_0002680c);
      _DAT_00025f52 = local_14;
    }
    else {
      FUN_00000e10(local_52);
      local_52 = extraout_A0_03;
      FUN_00001c10();
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_52 + 0x68))(local_52,local_8);
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000348a at 0000348a
// Size: 14 bytes

void FUN_0000348a(void)

{
  return;
}



// Function: FUN_00003498 at 00003498
// Size: 14 bytes

void FUN_00003498(void)

{
  return;
}



// Function: FUN_000034a6 at 000034a6
// Size: 26 bytes

void FUN_000034a6(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xc2);
  if (extraout_A0 != 0) {
    FUN_000034d2(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000034c0 at 000034c0
// Size: 6 bytes

void FUN_000034c0(void)

{
  undefined4 in_A0;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -4) = in_A0;
  FUN_000034d2();
  return;
}



// Function: FUN_000034c8 at 000034c8
// Size: 10 bytes

byte FUN_000034c8(void)

{
  byte in_D0b;
  
  return in_D0b | 10;
}



// Function: FUN_000034d2 at 000034d2
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000034d2(undefined4 *param_1)

{
  FUN_0000241a(param_1);
  *param_1 = 0x7820;
  func_0x00007208((int)param_1 + 0xb6);
  func_0x00007208((int)param_1 + 0xba);
  *(undefined1 *)((int)param_1 + 0xad) = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 1;
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xba) = _DAT_00025b56;
  *(undefined4 *)((int)param_1 + 0xb6) = _DAT_00025b56;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0xa7) = 0;
  *(undefined1 *)((int)param_1 + 0xb2) = 0;
  *(undefined1 *)((int)param_1 + 0xb1) = 0;
  *(undefined1 *)((int)param_1 + 0xa3) = 0;
  *(undefined1 *)((int)param_1 + 0xb3) = 0;
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  *(undefined1 *)((int)param_1 + 0xa1) = 1;
  param_1[0x21] = _DAT_0002579c;
  param_1[0x22] = _DAT_000257a0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xab) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 1;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x23] = _DAT_000257a4;
  param_1[0x24] = _DAT_000257a8;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x25] = param_1;
  param_1[0x26] = *(undefined4 *)((int)param_1 + 0x16);
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)((int)param_1 + 0xb5) = 1;
  *(undefined2 *)((int)param_1 + 0xbe) = 0xffff;
  *(undefined2 *)(param_1 + 0x30) = 0xffff;
  return;
}



// Function: FUN_000035ca at 000035ca
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000035ca(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000038a0 at 000038a0
// Size: 19 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000038a0(void)

{
  int unaff_A6;
  
  FUN_00001a18();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0x52);
  FUN_000038d8();
  return;
}



// Function: FUN_000038b8 at 000038b8
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000038b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000038c0 at 000038c0
// Size: 24 bytes

void FUN_000038c0(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0x4c))();
  FUN_00001c10();
  return;
}



// Function: FUN_000038d8 at 000038d8
// Size: 8 bytes

void FUN_000038d8(void)

{
  return;
}



// Function: FUN_000038e0 at 000038e0
// Size: 24 bytes

int FUN_000038e0(void)

{
  int iVar1;
  int extraout_A0;
  
  func_0x00001a00();
  iVar1 = extraout_A0;
  if (extraout_A0 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_000038f8 at 000038f8
// Size: 6 bytes

void FUN_000038f8(void)

{
  return;
}



// Function: FUN_000038fe at 000038fe
// Size: 26 bytes

int FUN_000038fe(int *param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x400))();
  iVar1 = extraout_A0;
  if (extraout_A0 == 0) {
    if (param_2._0_1_ != '\0') {
      FUN_00000e00();
      func_0x000073b0(0x2e);
      uVar2 = 0;
      if (extraout_A0_00 != 0) {
        FUN_0000138a((char)extraout_A0_00);
        uVar2 = extraout_A0_01;
      }
      FUN_00000e00();
      FUN_000013d0(uVar2,0x2020,0x2020);
      iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
    }
  }
  else {
    *(char *)(extraout_A0 + 0x1e) = param_2._0_1_;
  }
  return iVar1;
}



// Function: FUN_00003918 at 00003918
// Size: 70 bytes

int FUN_00003918(void)

{
  int iVar1;
  char unaff_D3b;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar2;
  code *in_A1;
  int *unaff_A3;
  int unaff_A6;
  
  (*in_A1)();
  iVar1 = extraout_A0;
  if (extraout_A0 == 0) {
    if (unaff_D3b != '\0') {
      FUN_00000e00();
      func_0x000073b0();
      uVar2 = 0;
      if (extraout_A0_00 != 0) {
        *(int *)(unaff_A6 + -8) = extraout_A0_00;
        *(int *)(unaff_A6 + -4) = extraout_A0_00;
        FUN_0000138a();
        uVar2 = extraout_A0_01;
      }
      FUN_00000e00();
      FUN_000013d0(uVar2,0x2020,0x2020);
      iVar1 = (**(code **)(*unaff_A3 + 0xe8))();
    }
  }
  else {
    *(char *)(extraout_A0 + 0x1e) = unaff_D3b;
  }
  return iVar1;
}



// Function: FUN_00003960 at 00003960
// Size: 16 bytes

void FUN_00003960(void)

{
  int *unaff_A3;
  
  FUN_000013d0();
  (**(code **)(*unaff_A3 + 0xe8))();
  return;
}



// Function: FUN_00003970 at 00003970
// Size: 15 bytes

void FUN_00003970(void)

{
  int *unaff_A3;
  
  FUN_000013d0();
  (**(code **)(*unaff_A3 + 0xe8))();
  return;
}



// Function: FUN_00003980 at 00003980
// Size: 20 bytes

void FUN_00003980(void)

{
  int *in_A0;
  
  (**(code **)(*in_A0 + 0xe8))();
  return;
}



// Function: FUN_00003994 at 00003994
// Size: 162 bytes

int FUN_00003994(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x400))();
  iVar1 = extraout_A0;
  if (extraout_A0 == 0) {
    if ((param_2 != 0x20202020) || (param_3 != 0x20202020)) {
      FUN_00000e00();
      func_0x000073b0(0x2e);
      uVar2 = 0;
      if (extraout_A0_00 != 0) {
        FUN_0000138a((char)extraout_A0_00);
        uVar2 = extraout_A0_01;
      }
      FUN_00000e00();
      FUN_000013d0(uVar2,(short)((uint)param_2 >> 0x10),(short)((uint)param_3 >> 0x10));
      iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
    }
  }
  else {
    *(int *)(extraout_A0 + 0x20) = param_2;
    *(int *)(extraout_A0 + 0x24) = param_3;
  }
  return iVar1;
}



// Function: FUN_00003a36 at 00003a36
// Size: 198 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003a36(int *param_1)

{
  char cVar1;
  undefined1 extraout_A0b;
  undefined1 *puVar2;
  undefined1 auStack_34 [4];
  short local_30;
  short local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [24];
  int local_c;
  int local_8;
  
  *(undefined1 *)((int)param_1 + 0xad) = 1;
  func_0x000072b8(0x74,&local_30);
  local_c = (int)local_30;
  local_8 = (int)local_2e;
  local_2c = 0x156;
  local_28 = 0x200;
  FUN_000038d8((short)&local_c,(short)&local_2c);
  (**(code **)(*param_1 + 0x310))(param_1,auStack_24);
  cVar1 = FUN_000038e0(&local_c,&DAT_00025b5a);
  if (cVar1 == '\0') {
    puVar2 = auStack_34;
    FUN_00003918((short)auStack_24);
    FUN_000038a0(extraout_A0b,puVar2);
    cVar1 = func_0x000072c0(0x74,auStack_34);
    if (cVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003baa at 00003baa
// Size: 354 bytes

void FUN_00003baa(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 extraout_A0b;
  int iVar1;
  short *psVar2;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  int local_18;
  int local_14;
  short local_8;
  short local_6;
  
  if (param_1[0x1f] != 0) {
    *(char *)((int)param_1 + 0xae) = param_2._0_1_;
    *(char *)((int)param_1 + 0xaf) = param_2._2_1_;
    (**(code **)(*param_1 + 0x3fc))();
    psVar2 = &local_28;
    iVar1 = **(int **)(param_1[0x1f] + 0x72) + 2;
    func_0x000072b8((short)iVar1,(short)psVar2);
    local_8 = local_28;
    local_6 = local_26;
    (**(code **)(*param_1 + 0x3fc))
              ((short)param_1,(short)((uint)iVar1 >> 0x10),(short)((uint)psVar2 >> 0x10));
    (**(code **)(*param_1 + 0x310))(param_1,&local_18);
    (**(code **)(*param_1 + 0x3e4))(param_1,&local_20);
    func_0x000072b8(&local_20,&local_2c);
    local_24 = local_2c;
    local_22 = local_2a;
    if (param_2._0_1_ != '\0') {
      local_14 = ((int)local_2a - (int)local_6) / 2 +
                 (int)*(short *)(param_1 + 0x2e) + (int)local_1e;
    }
    if (param_2._2_1_ != '\0') {
      if (param_3._0_1_ == '\0') {
        local_18 = ((int)local_2c - (int)local_8) / 2 +
                   (int)*(short *)((int)param_1 + 0xb6) + (int)local_20;
      }
      else {
        local_18 = ((int)local_2c - (int)local_8) / 3 +
                   (int)*(short *)((int)param_1 + 0xb6) + (int)local_20;
      }
    }
    FUN_00003918((short)&local_18);
    (**(code **)(*param_1 + 0x1bc))((short)param_1,extraout_A0b);
  }
  return;
}



// Function: FUN_00003d0c at 00003d0c
// Size: 270 bytes

void FUN_00003d0c(int *param_1,short *param_2)

{
  short local_30;
  short local_2e;
  undefined2 local_2c;
  short local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 auStack_24 [16];
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  undefined2 local_8;
  short local_6;
  
  (**(code **)(*param_1 + 0x310))(param_1,auStack_24);
  FUN_000038fe(auStack_24,&local_30);
  local_c = local_30;
  local_a = local_2e;
  local_8 = local_2c;
  local_6 = local_2a;
  (**(code **)(*param_1 + 0x3e4))(param_1,&local_14);
  local_28 = 4;
  local_26 = 4;
  func_0x00007288(&local_14,&local_28);
  if (local_c < local_14) {
    *param_2 = (local_14 - local_c) + *(short *)((int)param_1 + 0xb6);
  }
  else if (local_10 < local_c) {
    *param_2 = (local_10 - local_c) - *(short *)((int)param_1 + 0xb6);
  }
  if (local_a < local_12) {
    param_2[1] = (local_12 - local_a) + *(short *)(param_1 + 0x2e);
  }
  else if (local_e < local_a) {
    param_2[1] = (local_e - local_6) - *(short *)(param_1 + 0x2e);
  }
  return;
}



// Function: FUN_00003e1a at 00003e1a
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003e1a(int *param_1)

{
  undefined1 auStack_98 [148];
  
  *(undefined1 *)((int)param_1 + 0xb1) = 1;
  func_0x00001c90(auStack_98);
  (**(code **)(*param_1 + 0x3fc))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003fa0 at 00003fa0
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003fa0(int *param_1,int *param_2)

{
  char local_104 [256];
  
  local_104[0] = '\0';
  FUN_00002704(param_1,param_2);
  if ((*(int *)((int)param_1 + 0x26) != 0) && (param_2 != *(int **)((int)param_1 + 0x26))) {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x1a4))(*(int **)((int)param_1 + 0x26),param_1);
  }
  if (param_2 == (int *)0x0) {
    (**(code **)(*_DAT_000266a8 + 0x1e0))(_DAT_000266a8,param_1);
    param_1[1] = (int)_DAT_000266a8;
  }
  else {
    (**(code **)(*_DAT_000266a8 + 0x1e8))(_DAT_000266a8,param_1);
    (**(code **)(*param_2 + 0x198))(param_2,param_1);
    (**(code **)(*param_2 + 0x18c))(param_2,local_104);
    if (local_104[0] != '\0') {
      (**(code **)(*param_1 + 0x3d0))(param_1,local_104);
    }
    param_1[1] = (int)param_2;
  }
  return;
}



// Function: FUN_00004060 at 00004060
// Size: 398 bytes

void FUN_00004060(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x338))();
  if (cVar1 == '\0') {
    func_0x000072b8((short)param_1[0x1f] + 0x10,0xe8);
    (**(code **)(*param_1 + 0x1c0))((short)param_1,0xf4);
    if ((*(char *)(param_1 + 0x2a) != '\0') && (*(char *)((int)param_1 + 0xad) == '\0')) {
      (**(code **)(*param_1 + 0x3d4))();
    }
    if (((*(char *)((int)param_1 + 0xa9) != '\0') && (*(char *)((int)param_1 + 0xae) == '\0')) ||
       ((*(char *)((int)param_1 + 0xaa) != '\0' && (*(char *)((int)param_1 + 0xaf) == '\0')))) {
      (**(code **)(*param_1 + 0x410))();
      (**(code **)(*param_1 + 0x3dc))();
    }
    if ((*(char *)((int)param_1 + 0xab) != '\0') && (*(char *)(param_1 + 0x2c) == '\0')) {
      if ((*(char *)(param_1 + 0x2b) != '\0') && (*(char *)((int)param_1 + 0xb1) == '\0')) {
        (**(code **)(*param_1 + 0x3d8))();
        *(undefined1 *)((int)param_1 + 0xb1) = 0;
      }
      (**(code **)(*param_1 + 0x3e0))((short)param_1,0xec,0xb4);
    }
    if ((*(char *)(param_1 + 0x2b) != '\0') && (*(char *)((int)param_1 + 0xb1) == '\0')) {
      (**(code **)(*param_1 + 0x3d8))();
    }
    cVar1 = FUN_00003970((char)param_1 + '^');
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 500))();
    }
    if (param_1[0x25] != 0) {
      (**(code **)(*(int *)param_1[0x25] + 0xcc))();
    }
    (**(code **)(*param_1 + 0x334))();
  }
  FUN_0000291a((char)param_1);
  return;
}



// Function: FUN_000041ee at 000041ee
// Size: 252 bytes

void FUN_000041ee(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_A0;
  undefined1 auStack_34 [16];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = *param_2;
  local_8 = *param_3;
  param_1[0x23] = local_c;
  param_1[0x24] = local_8;
  if ((*(ushort *)(param_1 + 0x20) & 8) != 0) {
    iVar1 = **(int **)(param_1[0x1f] + 0x82);
    local_1c = *(int *)((int)param_1 + 0x2e) + (int)(short)*param_3 + -1;
    local_18 = (int)*(short *)(iVar1 + 0xe);
    if (*(short *)(iVar1 + 0xe) < local_1c) {
      piVar2 = &local_18;
    }
    else {
      piVar2 = &local_1c;
    }
    *(short *)(iVar1 + 0xe) = (short)*piVar2;
    local_24 = *(int *)((int)param_1 + 0x2a) + (int)*(short *)param_3 + -1;
    local_20 = (int)*(short *)(iVar1 + 0xc);
    if (*(short *)(iVar1 + 0xc) < local_24) {
      piVar2 = &local_20;
    }
    else {
      piVar2 = &local_24;
    }
    *(short *)(iVar1 + 0xc) = (short)*piVar2;
  }
  local_14 = *(undefined4 *)((int)param_1 + 0x32);
  local_10 = *(undefined4 *)((int)param_1 + 0x36);
  func_0x00003908(auStack_34,param_1 + 0x23);
  FUN_000038f8(&local_14,extraout_A0);
  (**(code **)(*param_1 + 0x33c))();
  (**(code **)(*param_1 + 0x1c0))((short)param_1,(short)&local_14);
  return;
}



// Function: FUN_000042ea at 000042ea
// Size: 450 bytes

void FUN_000042ea(int *param_1,short *param_2,short *param_3)

{
  int iVar1;
  short sVar2;
  short *extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 extraout_A0b;
  undefined4 *extraout_A0_01;
  int *piVar3;
  undefined1 extraout_A0b_00;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [8];
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x2c) = 1;
  uVar9 = (undefined2)((uint)auStack_14 >> 0x10);
  uVar7 = (undefined1)((uint)param_1 >> 0x10);
  uVar4 = 0x14;
  (**(code **)(*param_1 + 0x310))((short)param_1,(char)auStack_14);
  uVar8 = (undefined2)((uint)(param_1 + 0x21) >> 0x10);
  func_0x00007260((char)(param_1 + 0x21),uVar7,uVar9);
  local_24 = (int)*extraout_A0;
  local_20 = (int)extraout_A0[1];
  local_1c = local_24;
  local_18 = local_20;
  FUN_00003918((short)auStack_14,uVar8,uVar4);
  uVar7 = (undefined1)extraout_A0_00;
  puVar6 = &local_3c;
  piVar3 = &local_1c;
  uVar4 = SUB41(auStack_44,0);
  FUN_00003918((short)auStack_14,(short)((uint)auStack_44 >> 0x10),(short)((uint)piVar3 >> 0x10),
               (short)((uint)puVar6 >> 0x10),(short)((uint)extraout_A0_00 >> 0x10));
  FUN_000038b8(extraout_A0b,uVar4,(short)piVar3,(short)puVar6,uVar7);
  puVar5 = auStack_44;
  FUN_000038c0((short)puVar5);
  FUN_00003918((short)auStack_14,(short)((uint)puVar5 >> 0x10));
  *extraout_A0_01 = local_3c;
  extraout_A0_01[1] = local_38;
  if (param_2[1] < 0) {
    local_8 = (int)*(short *)((int)param_1 + 0x86);
  }
  if (*param_2 < 0) {
    local_c = (int)*(short *)(param_1 + 0x21);
  }
  if ((param_2[1] == 0) || (*param_2 == 0)) {
    sVar2 = 0;
  }
  else {
    sVar2 = *param_2;
    puVar5 = auStack_14;
    iVar1 = func_0x00003978((short)puVar5);
    local_34 = (iVar1 + *param_2 + -1) / (int)sVar2;
    sVar2 = param_2[1];
    iVar1 = func_0x00003978((char)auStack_14,(short)((uint)puVar5 >> 0x10));
    local_30 = (iVar1 + param_2[1] + -1) / (int)sVar2;
    if (local_30 < local_34) {
      piVar3 = &local_30;
    }
    else {
      piVar3 = &local_34;
    }
    sVar2 = (short)*piVar3;
  }
  if (sVar2 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = *param_3 % sVar2;
  }
  if (sVar2 != 0) {
    local_2c = (int)sVar2 * (int)*param_2;
    local_28 = (int)sVar2 * (int)param_2[1];
    piVar3 = &local_2c;
    uVar4 = SUB41(auStack_4c,0);
    FUN_00003918((short)auStack_14,(char)((uint)auStack_4c >> 0x10),(short)((uint)piVar3 >> 0x10));
    FUN_000038b8(extraout_A0b_00,uVar4,(short)piVar3);
    (**(code **)(*param_1 + 0x1bc))((char)param_1,(short)auStack_4c);
  }
  *param_3 = *param_3 + 1;
  return;
}



