// Warlords II - Decompiled 68k Code
// Segment: CODE_067
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000ae at 000000ae
// Size: 278 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000ae(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0x86) = param_2._0_2_;
  *(undefined2 *)(param_1 + 0x84) = param_2._2_2_;
  if ((-1 < *(char *)(_DAT_000288ac + 5)) && (*(char *)(_DAT_000288ac + 5) < '\t')) {
    FUN_00002370(param_1 + 0x88);
    if ((*(byte *)(_DAT_000288ac + 0xc) & 0x10) == 0) {
      sVar1 = (short)*(char *)(_DAT_000288ac + 4);
    }
    else {
      sVar1 = 5;
    }
    if ((sVar1 == 0x1c) &&
       (*(short *)(*(char *)(_DAT_000288ac + 10) * 2 + _DAT_0002884c + 0x594) == 1)) {
      sVar1 = 0x1d;
    }
    for (sVar2 = 0; sVar2 < 7; sVar2 = sVar2 + 1) {
      FUN_00002380((short)((short)*(char *)(_DAT_000288ac + 5) + 0x15U & 0xff) * 0x1c + 0x14098,
                   (sVar1 / 0x10) * 0x1e,0x20001d,(short)param_1 + 0x88);
    }
  }
  return;
}



// Function: FUN_000001c4 at 000001c4
// Size: 130 bytes

void FUN_000001c4(int *param_1)

{
  char cVar1;
  short local_10;
  short local_e;
  undefined2 local_c;
  short local_a;
  undefined2 local_8;
  short local_6;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (cVar1 != '\0') {
      local_e = *(short *)((int)param_1 + 0x86) * 0x28 + 8;
      local_10 = *(short *)(param_1 + 0x21) * 0x28 + 7;
      local_a = *(short *)((int)param_1 + 0x82) * 0x20;
      local_c = 0;
      local_8 = 0x1e;
      local_6 = local_a + 0x20;
      func_0x00002378(param_1 + 0x22,&local_c,&local_10,0x10024);
    }
  }
  return;
}



// Function: FUN_00000246 at 00000246
// Size: 250 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000246(int *param_1,undefined4 param_2)

{
  int *extraout_A0;
  undefined1 auStack_4c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  (**(code **)(*param_1 + 0x1d8))();
  (**(code **)(*param_1 + 0x2fc))();
  (**(code **)(*extraout_A0 + 0x304))(extraout_A0,auStack_2c);
  (**(code **)(*param_1 + 0x164))(param_1,auStack_2c);
  FUN_00003980(auStack_2c,&local_3c);
  local_c = local_3c;
  local_8 = local_38;
  local_1c = _DAT_00025b5a;
  local_18 = _DAT_00025b5e;
  local_14 = local_3c;
  local_10 = local_38;
  local_30 = param_2._0_2_ * 0x28 + (0x28 - local_38) / 2;
  local_34 = param_2._2_2_ * 0x28 + (0x28 - local_3c) / 2;
  FUN_00003928(&local_1c,auStack_4c,&local_34,(short)&local_c);
  (**(code **)(*param_1 + 0x290))(param_1,auStack_4c);
  FUN_000010c0();
  return;
}



// Function: FUN_00000340 at 00000340
// Size: 528 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000340(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *extraout_A0;
  int *piVar4;
  undefined1 auStack_8c [16];
  int local_7c;
  int local_78;
  int local_74 [3];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  (**(code **)(*param_1 + 0x1d8))();
  (**(code **)(*param_1 + 0x2fc))();
  (**(code **)(*extraout_A0 + 0x304))((short)extraout_A0,(short)auStack_2c);
  (**(code **)(*param_1 + 0x164))(param_1,(short)auStack_2c);
  FUN_00003980(auStack_2c,&local_7c);
  local_c = local_7c;
  local_8 = local_78;
  local_74[2] = local_78;
  local_68 = 0x118;
  if (local_78 < 0x119) {
    piVar4 = local_74 + 2;
  }
  else {
    piVar4 = &local_68;
  }
  iVar1 = *piVar4;
  local_74[0] = local_7c;
  local_74[1] = 0x118;
  if (local_7c < 0x119) {
    piVar4 = local_74;
  }
  else {
    piVar4 = local_74 + 1;
  }
  iVar2 = *piVar4;
  local_1c = 0;
  local_18 = 0;
  local_54 = param_2._2_2_ * 0x28 + (0x28 - iVar2) / 2;
  local_50 = param_2._0_2_ * 0x28 + (0x28 - iVar1) / 2;
  local_14 = iVar2;
  local_10 = iVar1;
  FUN_00003938((char)&local_1c,(char)&local_54);
  cVar3 = func_0x00003990((short)auStack_2c,(short)&local_1c);
  if (cVar3 == '\0') {
    local_4c = param_2._2_2_ * 0x28;
    local_48 = param_2._0_2_ * 0x28;
    local_44 = param_2._2_2_ * 0x28 + 0x28;
    local_40 = param_2._0_2_ * 0x28 + 0x28;
    cVar3 = func_0x00003990((char)auStack_2c,(char)&local_4c);
    if (cVar3 == '\0') {
      local_3c = _DAT_00025b5a;
      local_38 = _DAT_00025b5e;
      local_34 = local_c;
      local_30 = local_8;
      local_58 = param_2._0_2_ * 0x28 + (0x28 - local_8) / 2;
      local_5c = param_2._2_2_ * 0x28 + (0x28 - local_c) / 2;
      FUN_00003928((short)&local_3c,(short)auStack_8c,(short)&local_5c,(short)&local_c);
      (**(code **)(*param_1 + 0x290))((short)param_1,(short)auStack_8c);
    }
    else {
      local_64 = iVar2;
      local_60 = iVar1;
      (**(code **)(*param_1 + 0x290))((short)param_1,(short)&local_1c,(short)&local_64);
    }
  }
  FUN_000010c0();
  return;
}



// Function: FUN_00000550 at 00000550
// Size: 134 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000550(int *param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x20) != '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0x1d8))(), cVar1 != '\0')) {
    FUN_00002380(param_1 + 0x22);
  }
  return;
}



// Function: FUN_000005d6 at 000005d6
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000005d6(int *param_1,undefined4 param_2)

{
  undefined1 auStack_34 [48];
  
  if (*(char *)(param_1 + 0x26) != '\0') {
    func_0x00006d60();
    (**(code **)(*param_1 + 0x148))(param_1,param_2,auStack_34);
                    /* WARNING: Subroutine does not return */
    FUN_00005768(0x2964c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000868 at 00000868
// Size: 146 bytes

void FUN_00000868(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_14 [16];
  
  (**(code **)(*param_1 + 0x310))(param_1,auStack_14);
  FUN_00005218(param_1,(short)param_2);
  cVar1 = thunk_EXT_FUN_00007258(param_2,auStack_14);
  if (cVar1 != '\0') {
    if (param_1[0x29] == 0) {
      *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_1 + 0xe);
      *(undefined2 *)((int)param_1 + 0x8e) = *(undefined2 *)(param_1 + 0xd);
      FUN_00002360(param_1 + 0x1f);
    }
    func_0x00006e70(0x10001,0);
    if (param_3._0_1_ != '\0') {
      (**(code **)(*param_1 + 0x26c))();
    }
  }
  return;
}



// Function: FUN_000008fa at 000008fa
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000008fa(void)

{
  int iVar1;
  
  iVar1 = _DAT_00028cce;
  if (_DAT_00028cce != 0) {
    for (; *(int *)(iVar1 + 0xa4) != 0; iVar1 = *(int *)(iVar1 + 0xa4)) {
    }
  }
  if (iVar1 != 0) {
    _DAT_000273a2 = iVar1 + 0x7c;
  }
  return iVar1;
}



// Function: FUN_0000092a at 0000092a
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000092a(void)

{
  int iVar1;
  short sVar2;
  
  *(undefined1 *)(_DAT_00027fb8 + 0x80) = 0;
  iVar1 = _DAT_00027fb8;
  if ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
     (sVar2 = FUN_00002990(*(undefined2 *)(_DAT_00027fb8 + 0x84)),
     (*(char *)(sVar2 + 0x150fc) == '\0') != true)) {
    return;
  }
  FUN_000013c8(*(undefined2 *)(iVar1 + 0x84));
  return;
}



// Function: FUN_0000098a at 0000098a
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000098a(undefined2 param_1)

{
  FUN_000000ae(_DAT_00027fb8,param_1);
  return;
}



// Function: FUN_000009a6 at 000009a6
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009a6(undefined2 param_1)

{
  FUN_000000ae(_DAT_00027fb8,param_1);
  return;
}



// Function: FUN_000009c2 at 000009c2
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009c2(void)

{
  int *piVar1;
  int *extraout_A0;
  
  piVar1 = _DAT_00027fb8;
  if (_DAT_00027fb8 != (int *)0x0) {
    *(undefined1 *)((int)_DAT_00027fb8 + 0xae) = 1;
    (**(code **)(*piVar1 + 0x26c))();
    (**(code **)(*piVar1 + 0x268))();
  }
  if (_DAT_00027fbc != (int *)0x0) {
    (**(code **)(*_DAT_00027fbc + 0x188))(_DAT_00027fbc,0x6f766572);
    if (extraout_A0 != (int *)0x0) {
      *(undefined1 *)(extraout_A0 + 0x26) = 1;
      (**(code **)(*extraout_A0 + 0x26c))();
      (**(code **)(*extraout_A0 + 0x268))();
    }
  }
  return;
}



// Function: FUN_00000a42 at 00000a42
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000a42(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *piVar2;
  
  if (_DAT_00027fc4 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    (**(code **)(*_DAT_00027fc4 + 0x188))(_DAT_00027fc4,0x696e666f);
    piVar2 = extraout_A0;
  }
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    *(undefined1 *)(piVar2 + 0x29) = 0;
    uVar1 = (**(code **)(*piVar2 + 0x248))();
  }
  return uVar1;
}



// Function: FUN_00000a8a at 00000a8a
// Size: 8 bytes

void FUN_00000a8a(void)

{
  return;
}



// Function: FUN_00000a92 at 00000a92
// Size: 8 bytes

void FUN_00000a92(void)

{
  return;
}



// Function: FUN_00000a9a at 00000a9a
// Size: 786 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00000a9a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int *piVar7;
  int *extraout_A0;
  short asStackY_10054 [8];
  ushort auStackY_10044 [8];
  undefined2 auStackY_10034 [16];
  short asStackY_10014 [32559];
  undefined1 auStack_6c [8];
  undefined2 local_64;
  short local_62;
  undefined2 local_60;
  short local_5e;
  undefined2 local_5c;
  short local_5a;
  undefined2 local_58;
  short local_56;
  short local_54 [8];
  ushort local_44 [8];
  undefined2 local_34 [8];
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  short local_14 [8];
  
  if (_DAT_00027fb4 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    (**(code **)(*_DAT_00027fb4 + 0x188))((short)_DAT_00027fb4,0x726e);
    piVar7 = extraout_A0;
  }
  iVar1 = 0;
  if ((piVar7 != (int *)0x0) && (iVar1 = (**(code **)(*piVar7 + 0x1d8))(), (char)iVar1 != '\0')) {
    sVar4 = *(short *)(piVar7 + 0xe);
    sVar5 = 0;
    sVar6 = 0;
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      iVar1 = sVar2 * 2;
      if (*(short *)(iVar1 + _DAT_0002884c + 0x138) != 0) {
        sVar5 = sVar5 + 1;
      }
    }
    if (sVar5 != 0) {
      for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
        local_14[sVar2] = 0;
        local_34[sVar2] = 0xffff;
        local_44[sVar2] = 0;
        local_54[sVar2] = 0;
      }
      sVar2 = 0;
      for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
        if (*(short *)(*(short *)(sVar3 * 2 + _DAT_0002884c + 0x164) * 2 + _DAT_0002884c + 0x138) !=
            0) {
          local_34[sVar2] = *(undefined2 *)(sVar3 * 2 + _DAT_0002884c + 0x164);
          local_14[sVar2] = (sVar2 + (8 - sVar5)) * 0x10 + sVar4 + -0x80;
          if (*(short *)(sVar3 * 2 + _DAT_0002884c + 0x164) == *(short *)(_DAT_0002884c + 0x110)) {
            sVar6 = sVar2;
          }
          sVar2 = sVar2 + 1;
        }
      }
      if ((sVar6 == 0) || (sVar5 == 1)) {
        local_44[0] = (ushort)(sVar5 != 1);
        local_54[sVar5 + -1] = 1;
      }
      else if ((int)sVar6 == sVar5 + -1) {
        local_44[sVar5 + -1] = (ushort)(1 < sVar5);
        local_54[sVar5 + -2] = 1;
      }
      else {
        local_44[sVar6] = (ushort)(1 < sVar5);
        local_54[sVar6 + -1] = 1;
      }
      if (param_1._0_2_ != 0) {
        local_20 = _DAT_00025b5e;
        uStack_1c = *(undefined4 *)((int)piVar7 + 0x32);
        local_18 = *(int *)((int)piVar7 + 0x36);
        local_24 = _DAT_00025b5a + 1;
        if (param_2._0_2_ == 0) {
          local_18 = local_18 + -0x80;
        }
        (**(code **)(*piVar7 + 0x148))((short)piVar7,(short)&local_24,(short)auStack_6c);
        iVar1 = func_0x00007258(auStack_6c);
        return iVar1;
      }
      sVar2 = -1;
      sVar6 = -1;
      for (sVar4 = 0; sVar4 < sVar5; sVar4 = sVar4 + 1) {
        if (local_54[sVar4] != 0) {
          sVar2 = sVar4;
        }
      }
      for (sVar4 = 0; sVar4 < sVar5; sVar4 = sVar4 + 1) {
        if (local_44[sVar4] != 0) {
          sVar6 = sVar4;
        }
      }
      if ((-1 < sVar2) && (param_1._2_2_ == 0)) {
        FUN_00002a98();
        local_56 = local_14[sVar2] + 0xe;
        local_5a = local_14[sVar2] + -3;
        local_5c = 1;
        local_58 = 0x10;
        iVar1 = func_0x00007258((short)&local_5c);
        return iVar1;
      }
      if ((-1 < sVar6) && (param_1._2_2_ == 0)) {
        FUN_00002a98();
        local_5e = local_14[sVar6] + 0xe;
        local_62 = local_14[sVar6] + -3;
        local_64 = 1;
        local_60 = 0x10;
        iVar1 = func_0x00007258((short)&local_64);
        return iVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00005768(0x9052);
    }
  }
  return iVar1;
}



// Function: FUN_00000ebe at 00000ebe
// Size: 8 bytes

void FUN_00000ebe(void)

{
  return;
}



// Function: FUN_00000ec6 at 00000ec6
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ec6(undefined4 param_1)

{
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x707) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x707) = 1;
    _DAT_000276e0 = -1;
  }
  if (*(char *)(unaff_A5 + -0x708) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x708) = 1;
    _DAT_000276e2 = -1;
  }
  if ((_DAT_000276e0 != param_1._0_2_) || (_DAT_000276e2 != param_1._2_2_)) {
    _DAT_000276e0 = param_1._0_2_;
    _DAT_000276e2 = param_1._2_2_;
    (**(code **)(*_DAT_00027fbc + 0x26c))();
    (**(code **)(*_DAT_00027fbc + 0x268))();
  }
  return;
}



// Function: FUN_00000f40 at 00000f40
// Size: 50 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000f40(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  uVar1 = FUN_000008fa();
  if ((_DAT_000276de != 0) && (uVar1 = 0, extraout_A0 != (int *)0x0)) {
    *(undefined1 *)((int)extraout_A0 + 0x99) = 0;
    uVar1 = (**(code **)(*extraout_A0 + 0x26c))();
  }
  return uVar1;
}



// Function: FUN_00000f72 at 00000f72
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000f72(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  FUN_000008fa();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    *(undefined1 *)((int)extraout_A0 + 0x99) = 1;
    uVar1 = (**(code **)(*extraout_A0 + 0x26c))();
  }
  _DAT_000276de = 1;
  return uVar1;
}



// Function: FUN_00000fa6 at 00000fa6
// Size: 154 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000fa6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 extraout_A0;
  undefined1 extraout_A0b;
  undefined4 extraout_A0_00;
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_00001d18(param_1[2]);
  param_1[2] = extraout_A0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = SUB42(param_1,0);
  func_0x00007260(uVar1);
  func_0x00007280(uVar1,extraout_A0b);
  local_c = 1;
  local_a = 1;
  uVar3 = SUB42(&local_c,0);
  puVar2 = &local_10;
  func_0x00007260(uVar1);
  uVar1 = (undefined2)((uint)extraout_A0_00 >> 0x10);
  func_0x00007228((char)extraout_A0_00,puVar2,uVar3);
  local_8 = local_10;
  local_6 = local_e;
  func_0x00001ea8(uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000105e at 0000105e
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000105e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  func_0x000075c8(param_1[2]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001098 at 00001098
// Size: 40 bytes

void FUN_00001098(void)

{
  FUN_0000447e();
  if (DAT_000150fa != '\0') {
    FUN_0000323e();
  }
  FUN_000033dc();
  FUN_000030f2();
  return;
}



// Function: FUN_000010c0 at 000010c0
// Size: 776 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000010c0(void)

{
  short sVar2;
  int iVar1;
  char cVar3;
  int unaff_A5;
  short local_10;
  short local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if (*(char *)(unaff_A5 + -0x704) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x704) = 1;
    _DAT_000276d8 = 0;
  }
  if (*(char *)(unaff_A5 + -0x705) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x705) = 1;
    _DAT_000276da = -100;
  }
  if (*(char *)(unaff_A5 + -0x706) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x706) = 1;
    _DAT_000276dc = -100;
  }
  if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 1) &&
     (*(short *)(_DAT_0002884c + 0x15a) == 0)) {
    return 0;
  }
  if ((((_DAT_000276e4 != 0) && (_DAT_000288ac != (short *)0x0)) &&
      (sVar2 = FUN_00002990(), *(char *)(sVar2 + 0x150fc) == '\x0e')) &&
     (((_DAT_000276d8 == 0 ||
       (iVar1 = func_0x000076d8((int)*_DAT_000288ac - (int)_DAT_000276da), 1 < iVar1)) ||
      (iVar1 = func_0x000076d8((int)_DAT_000288ac[1] - (int)_DAT_000276dc), 1 < iVar1)))) {
    _DAT_000276d8 = 0;
    return 0;
  }
  if ((_DAT_000276e4 == 0) || (sVar2 = FUN_00002990(), *(char *)(sVar2 + 0x150fc) != '\x0e')) {
    _DAT_000276d8 = 1;
  }
  else {
    if (((_DAT_000276d8 == 0) ||
        (iVar1 = func_0x000076d8((int)*(short *)(_DAT_0002884c + 0x17e) - (int)_DAT_000276da),
        1 < iVar1)) ||
       (iVar1 = func_0x000076d8((int)*(short *)(_DAT_0002884c + 0x180) - (int)_DAT_000276dc),
       1 < iVar1)) {
      _DAT_000276d8 = 0;
      return 0;
    }
    _DAT_000276d8 = 0;
  }
  _DAT_000276da = *(undefined2 *)(_DAT_0002884c + 0x17e);
  _DAT_000276dc = *(undefined2 *)(_DAT_0002884c + 0x180);
  FUN_00000ec6(*(undefined4 *)(_DAT_0002884c + 0x17e));
  FUN_00001098();
  if (((_DAT_000288ac != (short *)0x0) && (*(char *)((int)_DAT_000288ac + 5) != -1)) &&
     ((*(short *)(_DAT_0002884c + 0x124) == 0 ||
      (*(char *)(((int)*_DAT_000288ac - (int)*(short *)(_DAT_0002884c + 0x178)) * 0x9c +
                 _DAT_000273a8 + (int)(short)(_DAT_000288ac[1] - *(short *)(_DAT_0002884c + 0x176)))
       != '\x0e')))) {
    if (_DAT_000288f4 == 0) {
      FUN_0000098a(*(undefined4 *)_DAT_000288ac);
    }
    else {
      FUN_000009a6(*(undefined4 *)_DAT_000288ac);
    }
  }
  FUN_00000550(_DAT_00027fb8);
  if (((DAT_000150fa != '\0') && (_DAT_00027fb8 != (int *)0x0)) &&
     (cVar3 = (**(code **)(*_DAT_00027fb8 + 0x1d8))(), cVar3 != '\0')) {
    local_10 = *(short *)(_DAT_0002884c + 0x176) * 0x28;
    local_e = *(short *)(_DAT_0002884c + 0x178) * 0x28;
    local_c = 0;
    local_a = 0;
    local_8 = _DAT_000150f6;
    local_6 = _DAT_000150f8;
    func_0x00002378(0x140b4,(short)&local_c,(short)&local_10,0);
  }
  return 1;
}



// Function: FUN_000013c8 at 000013c8
// Size: 282 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013c8(undefined4 param_1)

{
  short sVar1;
  char cVar2;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if ((((((*(short *)(_DAT_0002884c + 0x178) <= param_1._0_2_) &&
         (param_1._0_2_ <= *(short *)(_DAT_0002884c + 0x17c))) &&
        (*(short *)(_DAT_0002884c + 0x176) <= param_1._2_2_)) &&
       ((param_1._2_2_ <= *(short *)(_DAT_0002884c + 0x17a) &&
        (*(short *)(_DAT_0002884c + 0x15a) != 0)))) &&
      ((_DAT_000276e4 == 0 || (sVar1 = FUN_00002990(), *(char *)(sVar1 + 0x150fc) != '\x0e')))) &&
     (((FUN_00001098(), DAT_000150fa != '\0' && (_DAT_00027fb8 != (int *)0x0)) &&
      (cVar2 = (**(code **)(*_DAT_00027fb8 + 0x1d8))(), cVar2 != '\0')))) {
    local_c = (param_1._2_2_ - *(short *)(_DAT_0002884c + 0x176)) * 0x28;
    local_a = (param_1._0_2_ - *(short *)(_DAT_0002884c + 0x178)) * 0x28;
    local_10 = param_1._2_2_ * 0x28;
    local_e = param_1._0_2_ * 0x28;
    local_8 = local_c + 0x28;
    local_6 = local_a + 0x28;
    func_0x00002378(0x140b4,(short)&local_c,(short)&local_10,0);
  }
  return;
}



// Function: FUN_000014e2 at 000014e2
// Size: 190 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000014e2(undefined4 param_1,undefined4 param_2,short param_3)

{
  if (param_1._2_2_ == 0xf) {
    param_1._2_2_ = 8;
  }
  FUN_00002380((short)(ushort)(byte)((char)param_1._2_2_ + 0x15) * 0x1c + 0x14098,
               (param_2._0_2_ / 0x10) * 0x1e,0x20001d,(short)(ushort)param_1._0_1_ * 0x1c + 0x14098,
               param_3 * 0x28 + 7,0x10024);
  FUN_00002a98();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000016ae at 000016ae
// Size: 118 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016ae(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = _DAT_000288ac;
  if (_DAT_000288ac == (short *)0x0) {
    psVar2 = (short *)(_DAT_0002884c + 0x17e);
  }
  if (_DAT_000288ac == (short *)0x0) {
    psVar3 = (short *)(_DAT_0002884c + 0x180);
  }
  else {
    psVar3 = _DAT_000288ac + 1;
  }
  sVar1 = *psVar3;
  if ((*psVar2 == -1) || (sVar1 == -1)) {
    sVar1 = *(short *)(_DAT_0002884c + 0x180);
  }
  FUN_00000340(_DAT_00027fb8,sVar1);
  return;
}



// Function: FUN_00001724 at 00001724
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001724(undefined2 param_1)

{
  FUN_00000246(_DAT_00027fb8,param_1);
  return;
}



// Function: FUN_00001740 at 00001740
// Size: 202 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001740(undefined4 param_1)

{
  if (_DAT_00027fb2 != 0) {
    switch(param_1._0_2_) {
    case 0:
      *(short *)(_DAT_0002884c + 0x180) = *(short *)(_DAT_0002884c + 0x180) + -1;
      break;
    case 1:
      *(short *)(_DAT_0002884c + 0x180) = *(short *)(_DAT_0002884c + 0x180) + -1;
      *(short *)(_DAT_0002884c + 0x17e) = *(short *)(_DAT_0002884c + 0x17e) + 1;
      break;
    case 2:
      *(short *)(_DAT_0002884c + 0x17e) = *(short *)(_DAT_0002884c + 0x17e) + 1;
      break;
    case 3:
      *(short *)(_DAT_0002884c + 0x180) = *(short *)(_DAT_0002884c + 0x180) + 1;
      *(short *)(_DAT_0002884c + 0x17e) = *(short *)(_DAT_0002884c + 0x17e) + 1;
      break;
    case 4:
      *(short *)(_DAT_0002884c + 0x180) = *(short *)(_DAT_0002884c + 0x180) + 1;
      break;
    case 5:
      *(short *)(_DAT_0002884c + 0x180) = *(short *)(_DAT_0002884c + 0x180) + 1;
      *(short *)(_DAT_0002884c + 0x17e) = *(short *)(_DAT_0002884c + 0x17e) + -1;
      break;
    case 6:
      *(short *)(_DAT_0002884c + 0x17e) = *(short *)(_DAT_0002884c + 0x17e) + -1;
      break;
    case 7:
      *(short *)(_DAT_0002884c + 0x180) = *(short *)(_DAT_0002884c + 0x180) + -1;
      *(short *)(_DAT_0002884c + 0x17e) = *(short *)(_DAT_0002884c + 0x17e) + -1;
    }
    FUN_00001724(*(undefined2 *)(_DAT_0002884c + 0x180));
    func_0x00004970();
  }
  return;
}



// Function: FUN_0000181a at 0000181a
// Size: 172 bytes

void FUN_0000181a(undefined4 param_1)

{
  undefined1 local_10 [2];
  undefined2 local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_e = param_1._2_2_;
  local_c = (short)(((int)param_1._0_2_ % 0x60) / 0x10) * 0x28;
  local_a = (param_1._0_2_ % 0x10) * 0x28;
  local_8 = local_c + 0x28;
  local_6 = local_a + 0x28;
  func_0x00002378((short)(ushort)(byte)((char)(param_1._0_2_ / 0x60) + 0x24) * 0x1c + 0x14098,
                  &local_c,local_10,0);
  return;
}



// Function: FUN_000018c6 at 000018c6
// Size: 842 bytes

void FUN_000018c6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char *pcVar6;
  char acStackY_801e [32626];
  undefined1 auStack_68 [2];
  undefined1 local_66 [2];
  short local_64;
  undefined1 local_62 [2];
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  undefined2 local_4c;
  short local_4a;
  undefined2 local_48;
  short local_46;
  undefined2 local_44;
  short local_42;
  undefined2 local_40;
  short local_3e;
  char local_3c [10];
  undefined1 auStack_32 [10];
  undefined1 auStack_28 [10];
  undefined1 auStack_1e [10];
  short local_14 [6];
  short asStack_8 [2];
  
  iVar2 = param_1;
  if (param_1._2_2_ == 0xf) {
    param_1._2_2_ = 8;
  }
  for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
    local_14[sVar4 * 2] = param_2._2_2_;
    if (sVar4 < 2) {
      sVar5 = 0;
    }
    else {
      sVar5 = 0x24;
    }
    local_14[sVar4 * 2 + 1] = sVar5 + sVar4 * 10 + param_3._0_2_;
    if (param_6._0_2_ == 2) {
      local_14[sVar4 * 2 + 1] = local_14[sVar4 * 2 + 1] + -0x14;
    }
  }
  if (param_6._0_2_ == 2) {
    func_0x000076d0((short)local_3c,0x50f0,(undefined1)param_3);
    func_0x000076d0(auStack_32,0x50f0,param_4._0_2_);
    func_0x000076d0(auStack_28,0x150f0,(int)param_5._0_2_);
    func_0x000076d0(auStack_1e,0x150f0,(int)param_4._2_2_);
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      if (2 < sVar4) {
        local_14[sVar4 * 2] = local_14[sVar4 * 2] + 8;
        local_14[sVar4 * 2 + 1] = local_14[sVar4 * 2 + 1] + -0xf;
        sVar5 = 0;
        while( true ) {
          sVar3 = -1;
          pcVar6 = local_3c + sVar4 * 10;
          do {
            sVar3 = sVar3 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (sVar3 <= sVar5) break;
          local_5a = local_14[sVar4 * 2 + 1];
          local_58 = local_14[sVar4 * 2];
          sVar3 = (local_3c[(int)sVar5 + sVar4 * 10] + -0x30) * 8;
          local_56 = sVar3 + 0xf7;
          if (param_2._0_1_ == 0) {
            local_44 = 0x1f;
            local_40 = 0x26;
            local_3e = sVar3 + 0xfe;
            local_5e = local_5a;
            local_5c = local_14[sVar4 * 2];
            local_42 = local_56;
            func_0x00002378(0x4140,(short)&local_44,(short)&local_5e,0x24);
          }
          else {
            FUN_00002380(0x14140,0x1f,7,(ushort)param_2._0_1_ * 0x1c + 0x4098,local_5a,0x24);
          }
          local_14[sVar4 * 2] = local_14[sVar4 * 2] + 8;
          sVar5 = sVar5 + 1;
        }
      }
    }
  }
  if (param_5._2_2_ != 0) {
    if ((param_5._2_2_ == 1) && (param_1._0_2_ == -1)) {
      sVar4 = 0x1d7;
    }
    else {
      sVar4 = (param_5._2_2_ + -1) * 0x20 + 0xb7;
    }
    if (param_2._0_1_ == 0) {
      local_60 = param_2._2_2_;
      local_4c = 0;
      local_48 = 0x1e;
      local_46 = sVar4 + 0x20;
      local_4a = sVar4;
      func_0x00002378(0x4140,(short)&local_4c,(short)local_62,0x24);
    }
    else {
      FUN_00002380(0x14140,0,0x1e,(ushort)param_2._0_1_ * 0x1c + 0x4098);
    }
  }
  if (-1 < iVar2) {
    sVar5 = (param_1._0_2_ / 0x10) * 0x1e;
    func_0x00007040((short)auStack_68);
    sVar4 = (short)((int)param_1._0_2_ % 0x10 << 5);
    if (param_2._0_1_ == 0) {
      local_64 = param_2._2_2_;
      local_50 = sVar5 + 0x1e;
      local_4e = sVar4 + 0x20;
      local_54 = sVar5;
      local_52 = sVar4;
      func_0x00002378((ushort)(byte)((char)param_1._2_2_ + 0x15) * 0x1c + 0x4098,(short)&local_54,
                      (short)local_66,0x24);
    }
    else {
      FUN_00002380((short)(ushort)(byte)((char)param_1._2_2_ + 0x15) * 0x1c + 0x14098,sVar5,0x1e,
                   (ushort)param_2._0_1_ * 0x1c + 0x4098);
    }
    func_0x00006d48((short)auStack_68);
  }
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 90 bytes

void FUN_00001c10(void)

{
  int unaff_A6;
  
  FUN_00002380((short)(ushort)(byte)((char)*(undefined2 *)(unaff_A6 + 10) + 0x15) * 0x1c + 0x14098);
  func_0x00006d48();
  return;
}



// Function: FUN_00001c6a at 00001c6a
// Size: 2336 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c6a(int param_1,int param_2,undefined4 param_3)

{
  short local_de [2];
  short local_da [2];
  short local_d6 [2];
  short local_d2 [2];
  short local_ce [2];
  short local_ca;
  short local_c8;
  short local_c6 [2];
  short local_c2;
  short local_c0;
  short local_be [2];
  short local_ba [2];
  short local_b6 [2];
  short local_b2 [2];
  short local_ae [2];
  short local_aa [2];
  short local_a6 [2];
  short local_a2 [2];
  short local_9e [2];
  short asStack_9a [2];
  undefined2 local_96;
  short local_94;
  undefined2 local_92;
  short local_90;
  undefined2 local_8e;
  short local_8c;
  undefined2 local_8a;
  short local_88;
  undefined2 local_86;
  short local_84;
  undefined2 local_82;
  short local_80;
  undefined2 local_7e;
  short local_7c;
  undefined2 local_7a;
  short local_78;
  undefined2 local_76;
  short local_74;
  undefined2 local_72;
  short local_70;
  undefined2 local_6e;
  short local_6c;
  undefined2 local_6a;
  short local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  short local_5c;
  undefined2 local_5a;
  short local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  short local_4c;
  undefined2 local_4a;
  short local_48;
  undefined2 local_46;
  short local_44;
  undefined2 local_42;
  short local_40;
  undefined2 local_3e;
  short local_3c;
  undefined2 local_3a;
  short local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  short local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  short local_1c;
  undefined2 local_1a;
  short local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 local_6;
  
  local_6 = func_0x00006e10(*(undefined4 *)(_DAT_000297f4 + 0x80));
  if (((param_1._0_2_ == 0xf) || (param_1 < 0)) || (param_1._0_2_ == 8)) {
    switch(param_1._2_2_) {
    case 0:
      if (param_2 != 0) {
        FUN_00002380(0x1415c,0,8,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_9e[0] = param_3._2_2_;
      local_16 = 0;
      local_14 = 0;
      local_12 = 8;
      local_10 = 8;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x415c,&local_16,local_9e,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 3:
    case 4:
      if (-2 < param_1._0_2_) {
        if (param_2 != 0) {
          FUN_00002380(0x1415c,0,0x28,param_2,param_3,0x10024);
          switchD_00001cc0::caseD_1();
          return;
        }
        local_a6[0] = param_3._2_2_;
        local_26 = 0;
        local_24 = 9;
        local_22 = 0x28;
        local_20 = 0x31;
                    /* WARNING: Call to offcut address within same function */
        func_0x00002378(0x415c,&local_26,local_a6,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      if (param_2 != 0) {
        FUN_00002380(0x14178,0,0x1b,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_a2[0] = param_3._2_2_;
      local_1e = 0;
      local_1c = (param_1._0_2_ + 2) * -0x1a;
      local_1a = 0x1b;
      local_18 = (param_1._0_2_ + 2) * -0x1a + 0x1a;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x4178,&local_1e,local_a2,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 5:
      if (param_2 != 0) {
        FUN_00002380(0x1415c,0,0x24,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_aa[0] = param_3._2_2_;
      local_2e = 0;
      if (param_1._0_2_ == -1) {
        local_2c = 0x50;
      }
      else {
        local_2c = 0x31;
      }
      local_2a = 0x24;
      if (param_1._0_2_ == -1) {
        local_28 = 0x50;
      }
      else {
        local_28 = 0x31;
      }
      local_28 = local_28 + 0x1f;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x415c,&local_2e,local_aa,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 7:
      if (param_2 != 0) {
        FUN_00002380(0x1415c,8,10,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_ae[0] = param_3._2_2_;
      local_36 = 8;
      local_34 = 0;
      local_32 = 0x12;
      local_30 = 9;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x415c,&local_36,local_ae,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 0xffff:
      if (param_2 != 0) {
        FUN_00002380(0x14140,0x24,4,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      asStack_9a[0] = param_3._2_2_;
      uStack_e = 0x24;
      uStack_c = 0x48;
      uStack_a = 0x28;
      uStack_8 = 0x4c;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x4140,&uStack_e,asStack_9a,0x10024);
    }
  }
  else {
    switch(param_1._2_2_) {
    case 0:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,0,8,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_b6[0] = param_3._2_2_;
      local_46 = 0;
      local_44 = param_1._0_2_ * 8 + 0x138;
      local_42 = 8;
      local_40 = param_1._0_2_ * 8 + 0x140;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_46,local_b6,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 1:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,0x10,0xe,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_ba[0] = param_3._2_2_;
      local_4e = 0x10;
      local_4c = param_1._0_2_ * 0xb + 0x118;
      local_4a = 0x1e;
      local_48 = param_1._0_2_ * 0xb + 0x123;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_4e,local_ba,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 3:
      if (param_2 == 0) {
        local_c6[0] = param_3._2_2_;
        local_66 = 0;
        local_64 = 0x6f;
        local_62 = 0x28;
        local_60 = 0x97;
                    /* WARNING: Call to offcut address within same function */
        func_0x00002378(0x415c,&local_66,local_c6,0x10024);
        local_ca = param_3._2_2_ + 7;
        local_c8 = param_3._0_2_ + 7;
        local_6e = 0;
        local_6c = param_1._0_2_ * 0x1a;
        local_6a = 0x1b;
        local_68 = param_1._0_2_ * 0x1a + 0x1a;
                    /* WARNING: Call to offcut address within same function */
        func_0x00002378(0x446c,&local_6e,&local_ca,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      FUN_00002380(0x1415c,0,0x28,param_2,param_3,0x10024);
      FUN_00002380(0x1446c,0,0x1b,param_2,CONCAT22(param_3._0_2_ + 7,param_3._2_2_ + 7),0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 4:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,0,0x1b,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_ce[0] = param_3._2_2_;
      local_76 = 0;
      local_74 = param_1._0_2_ * 0x1a;
      local_72 = 0x1b;
      local_70 = param_1._0_2_ * 0x1a + 0x1a;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_76,local_ce,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 5:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,0x1b,0x24,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_d2[0] = param_3._2_2_;
      local_7e = 0x1b;
      local_7c = param_1._0_2_ * 0x1f;
      local_7a = 0x3f;
      local_78 = param_1._0_2_ * 0x1f + 0x1f;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_7e,local_d2,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 6:
      if (param_2 == 0) {
        local_be[0] = param_3._2_2_;
        local_56 = 0x1e;
        local_54 = 0x1cf;
        local_52 = 0x25;
        local_50 = 0x1ef;
                    /* WARNING: Call to offcut address within same function */
        func_0x00002378(0x4140,&local_56,local_be,0x10024);
      }
      else {
        FUN_00002380(0x14140,0x1e,7,param_2,param_3,0x10024);
      }
      param_3._0_2_ = param_3._0_2_ + 9;
      param_3._2_2_ = param_3._2_2_ + 7;
    case 2:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,0,0xf,param_2,CONCAT22(param_3._0_2_,param_3._2_2_),0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_5e = 0;
      local_5c = param_1._0_2_ * 0xd + 0xd0;
      local_5a = 0xf;
      local_58 = param_1._0_2_ * 0xd + 0xdd;
      local_c2 = param_3._2_2_;
      local_c0 = param_3._0_2_;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_5e,&local_c2,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 7:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,0xf,10,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_d6[0] = param_3._2_2_;
      local_86 = 0xf;
      local_84 = param_1._0_2_ * 9 + 0xd0;
      local_82 = 0x19;
      local_80 = param_1._0_2_ * 9 + 0xd9;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_86,local_d6,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 8:
      if (param_2 != 0) {
        FUN_00002380(0x1446c,8,8,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_da[0] = param_3._2_2_;
      local_8e = 8;
      local_8c = param_1._0_2_ * 8 + 0x138;
      local_8a = 0x10;
      local_88 = param_1._0_2_ * 8 + 0x140;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x446c,&local_8e,local_da,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    case 9:
      if (param_2 == 0) {
        local_de[0] = param_3._2_2_;
        local_96 = 0x22;
        local_94 = param_1._0_2_ * 0x10 + 0xf8;
        local_92 = 0x3f;
        local_90 = param_1._0_2_ * 0x10 + 0x108;
                    /* WARNING: Call to offcut address within same function */
        func_0x00002378(0x446c,&local_96,local_de,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      FUN_00002380(0x1446c,0x22,0x1d,param_2,param_3,0x10024);
      break;
    case 0xffff:
      if (param_2 != 0) {
        FUN_00002380(0x14140,0x24,4,param_2,param_3,0x10024);
        switchD_00001cc0::caseD_1();
        return;
      }
      local_b2[0] = param_3._2_2_;
      local_3e = 0x24;
      local_3c = param_1._0_2_ * 4 + 0x28;
      local_3a = 0x28;
      local_38 = param_1._0_2_ * 4 + 0x2c;
                    /* WARNING: Call to offcut address within same function */
      func_0x00002378(0x4140,&local_3e,local_b2,0x10024);
      switchD_00001cc0::caseD_1();
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ce0 at 00001ce0
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ce0(void)

{
  int unaff_A4;
  
  *(byte *)(unaff_A4 + -1) = *(byte *)(unaff_A4 + -1) | 0x44;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d18 at 00001d18
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d18(void)

{
  undefined1 *in_A0;
  
  *in_A0 = *in_A0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e98 at 00001e98
// Size: 6 bytes

void FUN_00001e98(void)

{
  int in_A0;
  
  *(byte *)(in_A0 + 9) = *(byte *)(in_A0 + 9) | 0x3c;
  FUN_00002380();
  switchD_00001cc0::caseD_1();
  return;
}



// Function: FUN_00001ea0 at 00001ea0
// Size: 19 bytes

void FUN_00001ea0(void)

{
  FUN_00002380(0x1415c);
  switchD_00001cc0::caseD_1();
  return;
}



// Function: FUN_00002360 at 00002360
// Size: 8 bytes

void FUN_00002360(void)

{
  FUN_00002380(0x1446c);
  switchD_00001cc0::caseD_1();
  return;
}



// Function: FUN_00002368 at 00002368
// Size: 8 bytes

void FUN_00002368(void)

{
  FUN_00002380(0x1446c);
  switchD_00001cc0::caseD_1();
  return;
}



// Function: FUN_00002370 at 00002370
// Size: 15 bytes

void FUN_00002370(void)

{
  FUN_00002380(0x1446c);
  switchD_00001cc0::caseD_1();
  return;
}



// Function: FUN_00002380 at 00002380
// Size: 24 bytes

void FUN_00002380(void)

{
  FUN_00002380(0x1446c);
  switchD_00001cc0::caseD_1();
  return;
}



// Function: caseD_1 at 0000264e
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void switchD_00001cc0::caseD_1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000265c at 0000265c
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000265c(void)

{
  short sVar1;
  short sVar2;
  int extraout_A0;
  undefined1 *extraout_A0_00;
  undefined1 *puVar3;
  
  FUN_00001e98(&PTR_FUN_00004440);
  _DAT_00028860 = extraout_A0;
  FUN_00002d52(extraout_A0);
  puVar3 = extraout_A0_00;
  _DAT_0002885c = extraout_A0_00;
  for (sVar2 = 0; sVar2 < 0x9c; sVar2 = sVar2 + 1) {
    for (sVar1 = 0; sVar1 < 0x70; sVar1 = sVar1 + 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000026bc at 000026bc
// Size: 128 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000026bc(void)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  byte *extraout_A0;
  byte *pbVar5;
  
  FUN_00002d52(_DAT_00028860);
  sVar2 = *(short *)(_DAT_0002884c + 0x110);
  pbVar5 = extraout_A0;
  _DAT_0002885c = extraout_A0;
  for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
    for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
      puVar1 = (uint *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3);
      *puVar1 = *puVar1 & 0xdfffffff |
                (int)((ushort)((ushort)(1 << ((int)sVar2 & 0x3fU)) & (ushort)*pbVar5) != 0) << 0x1d;
      pbVar5 = pbVar5 + 1;
    }
  }
  if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_0000273e at 0000273e
// Size: 310 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000273e(void)

{
  uint *puVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  byte *extraout_A0;
  byte *pbVar5;
  
  sVar4 = 0;
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    if ((*(short *)(sVar3 * 2 + _DAT_0002884c + 0x138) != 0) &&
       (*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0)) {
      sVar4 = sVar4 + 1;
    }
  }
  if ((sVar4 == 1) &&
     (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((_DAT_0002883e == 0) || (_DAT_00028840 != 0)) {
    if ((_DAT_0002883e != 0) &&
       ((_DAT_00028840 != 0 &&
        (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)))) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  FUN_00002d52(_DAT_00028860);
  pbVar5 = extraout_A0;
  _DAT_0002885c = extraout_A0;
  for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
    for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
      if (bVar2) {
        puVar1 = (uint *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3);
        *puVar1 = *puVar1 & 0x7fffffff |
                  (*(uint *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3) & 0x20000000) << 2;
      }
      *pbVar5 = (byte)(((uint)(*(int *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3) << 2) >> 0x1f) <<
                      ((int)*(short *)(_DAT_0002884c + 0x110) & 0x3fU)) | *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
  }
  if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00002876 at 00002876
// Size: 282 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002876(undefined4 param_1)

{
  undefined2 uVar1;
  uint in_D0;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  
  uVar6 = 0;
  if ((_DAT_000276e4 == 0) && (_DAT_0002884a == 0)) {
    for (sVar3 = 0; uVar1 = (undefined2)(in_D0 >> 0x10), sVar3 < 8; sVar3 = sVar3 + 1) {
      sVar4 = *(short *)(&DAT_000150e0 + sVar3 * 2) + param_1._0_2_;
      sVar5 = *(short *)(&DAT_000150d0 + sVar3 * 2) + param_1._2_2_;
      if (((sVar4 < 0) || (sVar5 < 0)) || ((0x6f < sVar4 || (0x9b < sVar5)))) {
        in_D0 = (uint)sVar3;
        uVar2 = (ushort)(1 << (in_D0 & 0x3f));
      }
      else {
        if ((*(byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4) & 0x20) == 0) {
          in_D0 = 1 << ((int)sVar3 & 0x3fU);
        }
        else {
          in_D0 = 0;
        }
        uVar2 = (ushort)in_D0;
      }
      uVar6 = uVar2 | uVar6;
    }
  }
  else {
    for (sVar3 = 0; uVar1 = (undefined2)(in_D0 >> 0x10), sVar3 < 8; sVar3 = sVar3 + 1) {
      sVar4 = *(short *)(&DAT_000150e0 + sVar3 * 2) + param_1._0_2_;
      sVar5 = *(short *)(&DAT_000150d0 + sVar3 * 2) + param_1._2_2_;
      if ((((sVar4 < 0) || (sVar5 < 0)) || (0x6f < sVar4)) || (0x9b < sVar5)) {
        in_D0 = (uint)sVar3;
        uVar2 = (ushort)(1 << (in_D0 & 0x3f));
      }
      else {
        if ((*(byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4) & 0x80) == 0) {
          in_D0 = 1 << ((int)sVar3 & 0x3fU);
        }
        else {
          in_D0 = 0;
        }
        uVar2 = (ushort)in_D0;
      }
      uVar6 = uVar2 | uVar6;
    }
  }
  return CONCAT22(uVar1,uVar6);
}



// Function: FUN_00002990 at 00002990
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002990(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint in_D0;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  
  uVar6 = 0;
  if ((_DAT_000276e4 == 0) && (_DAT_0002884a == 0)) {
    for (sVar3 = 0; uVar1 = (undefined2)(in_D0 >> 0x10), sVar3 < 8; sVar3 = sVar3 + 1) {
      sVar4 = *(short *)(&DAT_000150c0 + sVar3 * 2) + param_1._0_2_;
      sVar5 = *(short *)(&DAT_000150b0 + sVar3 * 2) + param_1._2_2_;
      if (((sVar4 < 0) || (sVar5 < 0)) || ((0x6f < sVar4 || (0x9b < sVar5)))) {
        in_D0 = (uint)sVar3;
        uVar2 = (ushort)((int)param_2._0_2_ << (in_D0 & 0x3f));
      }
      else {
        if ((*(byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4) & 0x20) == 0) {
          in_D0 = 1 << ((int)sVar3 & 0x3fU);
        }
        else {
          in_D0 = 0;
        }
        uVar2 = (ushort)in_D0;
      }
      uVar6 = uVar2 | uVar6;
    }
  }
  else {
    for (sVar3 = 0; uVar1 = (undefined2)(in_D0 >> 0x10), sVar3 < 8; sVar3 = sVar3 + 1) {
      sVar4 = *(short *)(&DAT_000150c0 + sVar3 * 2) + param_1._0_2_;
      sVar5 = *(short *)(&DAT_000150b0 + sVar3 * 2) + param_1._2_2_;
      if ((((sVar4 < 0) || (sVar5 < 0)) || (0x6f < sVar4)) || (0x9b < sVar5)) {
        in_D0 = (uint)sVar3;
        uVar2 = (ushort)((int)param_2._0_2_ << (in_D0 & 0x3f));
      }
      else {
        if ((*(byte *)(sVar5 * 0x70 + _DAT_00028858 + (int)sVar4) & 0x80) == 0) {
          in_D0 = 1 << ((int)sVar3 & 0x3fU);
        }
        else {
          in_D0 = 0;
        }
        uVar2 = (ushort)in_D0;
      }
      uVar6 = uVar2 | uVar6;
    }
  }
  return CONCAT22(uVar1,uVar6);
}



// Function: FUN_00002a78 at 00002a78
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00002a78(void)

{
  int in_D1;
  ushort uVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  ushort unaff_D6w;
  short unaff_D7w;
  int unaff_A6;
  
  do {
    unaff_D6w = (ushort)in_D1 | unaff_D6w;
    while( true ) {
      unaff_D3w = unaff_D3w + 1;
      if (7 < unaff_D3w) {
        return unaff_D6w;
      }
      sVar2 = *(short *)(&DAT_000150c0 + unaff_D3w * 2) + *(short *)(unaff_A6 + 8);
      sVar3 = *(short *)(&DAT_000150b0 + unaff_D3w * 2) + *(short *)(unaff_A6 + 10);
      if ((((sVar2 < 0) || (sVar3 < 0)) || (0x6f < sVar2)) || (0x9b < sVar3)) break;
      if ((*(byte *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) & 0x20) == 0) {
        uVar1 = (ushort)(1 << ((int)unaff_D3w & 0x3fU));
      }
      else {
        uVar1 = 0;
      }
      unaff_D6w = uVar1 | unaff_D6w;
    }
    in_D1 = (int)unaff_D7w << ((int)unaff_D3w & 0x3fU);
  } while( true );
}



// Function: FUN_00002a80 at 00002a80
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002a80(void)

{
  int in_D0;
  uint uVar1;
  short unaff_D3w;
  short unaff_D4w;
  short sVar2;
  ushort unaff_D6w;
  short unaff_D7w;
  int unaff_A6;
  
  do {
    if ((*(byte *)(in_D0 + _DAT_00028858 + (int)unaff_D4w) & 0x20) == 0) {
      uVar1 = 1 << ((int)unaff_D3w & 0x3fU);
    }
    else {
      uVar1 = 0;
    }
    unaff_D6w = (ushort)uVar1 | unaff_D6w;
    while( true ) {
      unaff_D3w = unaff_D3w + 1;
      if (7 < unaff_D3w) {
        return CONCAT22((short)(uVar1 >> 0x10),unaff_D6w);
      }
      unaff_D4w = *(short *)(&DAT_000150c0 + unaff_D3w * 2) + *(short *)(unaff_A6 + 8);
      sVar2 = *(short *)(&DAT_000150b0 + unaff_D3w * 2) + *(short *)(unaff_A6 + 10);
      if ((((-1 < unaff_D4w) && (-1 < sVar2)) && (unaff_D4w < 0x70)) && (sVar2 < 0x9c)) break;
      uVar1 = (uint)unaff_D3w;
      unaff_D6w = (ushort)((int)unaff_D7w << (uVar1 & 0x3f)) | unaff_D6w;
    }
    in_D0 = sVar2 * 0x70;
  } while( true );
}



// Function: FUN_00002a98 at 00002a98
// Size: 26 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002a98(void)

{
  uint in_D0;
  int in_D1;
  uint uVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  ushort unaff_D6w;
  short unaff_D7w;
  int unaff_A6;
  
  do {
    uVar1 = in_D1 << (in_D0 & 0x3f);
    while( true ) {
      unaff_D6w = (ushort)uVar1 | unaff_D6w;
      while( true ) {
        unaff_D3w = unaff_D3w + 1;
        if (7 < unaff_D3w) {
          return CONCAT22((short)(uVar1 >> 0x10),unaff_D6w);
        }
        sVar2 = *(short *)(&DAT_000150c0 + unaff_D3w * 2) + *(short *)(unaff_A6 + 8);
        sVar3 = *(short *)(&DAT_000150b0 + unaff_D3w * 2) + *(short *)(unaff_A6 + 10);
        if ((((-1 < sVar2) && (-1 < sVar3)) && (sVar2 < 0x70)) && (sVar3 < 0x9c)) break;
        uVar1 = (uint)unaff_D3w;
        unaff_D6w = (ushort)((int)unaff_D7w << (uVar1 & 0x3f)) | unaff_D6w;
      }
      if ((*(byte *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) & 0x20) == 0) break;
      uVar1 = 0;
    }
    in_D0 = (uint)unaff_D3w;
    in_D1 = 1;
  } while( true );
}



// Function: FUN_00002ab4 at 00002ab4
// Size: 362 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002ab4(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 uVar8;
  int extraout_A0;
  undefined1 *extraout_A0_00;
  undefined1 *puVar9;
  int iVar10;
  
  if (_DAT_00028858 == 0) {
    FUN_00001ea0(&PTR_FUN_00004440);
    _DAT_00028858 = extraout_A0;
  }
  FUN_00002d52(_DAT_00028860);
  if (*(short *)(_DAT_0002884c + 0x124) == 0) {
    uVar8 = 0xff;
  }
  else {
    uVar8 = 0;
  }
  puVar9 = extraout_A0_00;
  _DAT_0002885c = extraout_A0_00;
  for (sVar6 = 0; sVar6 < 0x9c; sVar6 = sVar6 + 1) {
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      *puVar9 = uVar8;
      pbVar1 = (byte *)(sVar6 * 0x70 + _DAT_00028858 + (int)sVar4);
      *pbVar1 = *pbVar1 | 0x20;
      pbVar1 = (byte *)(sVar6 * 0x70 + _DAT_00028858 + (int)sVar4);
      *pbVar1 = *pbVar1 & 0x7f;
      puVar9 = puVar9 + 1;
    }
  }
  func_0x00007700(_DAT_000273a8,0xffffffff,&PTR_FUN_00004440);
  for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
    for (sVar4 = 0; sVar4 < *(short *)(&DAT_000015c2 + _DAT_0002884c); sVar4 = sVar4 + 1) {
      iVar10 = sVar4 * 0x42 + _DAT_0002884c;
      if ((int)(char)(&DAT_000015d9)[iVar10] == (int)sVar6) {
        sVar2 = *(short *)(&DAT_000015c4 + iVar10);
        sVar3 = *(short *)(&DAT_000015c6 + iVar10);
        for (sVar5 = sVar2 + -2; (int)sVar5 <= sVar2 + 3; sVar5 = sVar5 + 1) {
          if ((-1 < sVar5) && (sVar5 < 0x70)) {
            for (sVar7 = sVar3 + -2; (int)sVar7 <= sVar3 + 3; sVar7 = sVar7 + 1) {
              if ((-1 < sVar7) && (sVar7 < 0x9c)) {
                _DAT_0002885c[(int)sVar5 + sVar7 * 0x70] =
                     (byte)(1 << ((int)sVar6 & 0x3fU)) | _DAT_0002885c[(int)sVar5 + sVar7 * 0x70];
              }
            }
          }
        }
      }
    }
  }
  if (_DAT_00028860 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_00002c20 at 00002c20
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002c20(undefined4 param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    if ((_DAT_000288fa == 2) ||
       (*(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                  _DAT_0002884c + 0x711) == '\n')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      sVar4 = -2;
    }
    else {
      sVar4 = -1;
    }
    sVar4 = param_1._0_2_ + sVar4;
    if (bVar1) {
      param_1._0_2_ = param_1._0_2_ + 2;
      sVar3 = -2;
    }
    else {
      param_1._0_2_ = param_1._0_2_ + 1;
      sVar3 = -1;
    }
    if (bVar1) {
      sVar5 = param_1._2_2_ + 2;
    }
    else {
      sVar5 = param_1._2_2_ + 1;
    }
    for (; sVar2 = param_1._2_2_ + sVar3, sVar4 <= param_1._0_2_; sVar4 = sVar4 + 1) {
      for (; sVar2 <= sVar5; sVar2 = sVar2 + 1) {
        if ((((-1 < sVar4) && (sVar4 < 0x70)) && (-1 < sVar2)) &&
           ((sVar2 < 0x9c && ((*(byte *)(sVar2 * 0x70 + _DAT_00028858 + (int)sVar4) & 0x20) == 0))))
        {
          FUN_00002d40(param_1._2_2_ + sVar3,sVar5);
          return 1;
        }
      }
    }
  }
  return 0;
}



// Function: FUN_00002d40 at 00002d40
// Size: 18 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d40(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  short sVar2;
  
  for (; sVar2 = param_1._2_2_, param_1._0_2_ <= param_2._0_2_; param_1._0_2_ = param_1._0_2_ + 1) {
    for (; sVar2 <= param_2._2_2_; sVar2 = sVar2 + 1) {
      if ((((-1 < param_1._0_2_) && (param_1._0_2_ < 0x70)) && (-1 < sVar2)) && (sVar2 < 0x9c)) {
        pbVar1 = (byte *)(sVar2 * 0x70 + _DAT_00028858 + (int)param_1._0_2_);
        *pbVar1 = *pbVar1 | 0x20;
      }
    }
  }
  return;
}



// Function: FUN_00002d52 at 00002d52
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d52(void)

{
  byte *pbVar1;
  short in_D1w;
  short unaff_D2w;
  int unaff_A6;
  char in_NF;
  char in_VF;
  
  do {
    if ((((in_VF == in_NF) && (in_D1w < 0x70)) && (-1 < unaff_D2w)) && (unaff_D2w < 0x9c)) {
      pbVar1 = (byte *)(unaff_D2w * 0x70 + _DAT_00028858 + (int)in_D1w);
      *pbVar1 = *pbVar1 | 0x20;
    }
    unaff_D2w = unaff_D2w + 1;
    while (*(short *)(unaff_A6 + 0xe) < unaff_D2w) {
      in_D1w = in_D1w + 1;
      if (*(short *)(unaff_A6 + 0xc) < in_D1w) {
        return;
      }
      unaff_D2w = *(short *)(unaff_A6 + 10);
    }
    in_VF = '\0';
    in_NF = in_D1w < 0;
  } while( true );
}



// Function: FUN_00002d8c at 00002d8c
// Size: 630 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d8c(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    _DAT_000273ac = 0;
    if (param_1 < 0) {
      psVar5 = (short *)(_DAT_0002884c + 0x178);
    }
    else {
      psVar5 = (short *)&param_1;
    }
    sVar4 = *psVar5;
    if (param_1._2_2_ < 0) {
      psVar5 = (short *)(_DAT_0002884c + 0x176);
    }
    else {
      psVar5 = (short *)((int)&param_1 + 2);
    }
    sVar1 = *psVar5;
    if (param_1 < 0) {
      param_1._0_2_ = *(short *)(_DAT_0002884c + 0x17c);
    }
    sVar2 = param_1._0_2_ + 1;
    if (param_1._2_2_ < 0) {
      param_1._2_2_ = *(short *)(_DAT_0002884c + 0x17a);
    }
    sVar3 = param_1._2_2_ + 1;
    param_1._0_2_ = sVar4;
    if ((_DAT_000276e4 == 0) && (_DAT_0002884a == 0)) {
      for (; param_1._2_2_ = sVar1, param_1._0_2_ < sVar2; param_1._0_2_ = param_1._0_2_ + 1) {
        for (; param_1._2_2_ < sVar3; param_1._2_2_ = param_1._2_2_ + 1) {
          if ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x20) == 0) {
            sVar4 = FUN_00002876(param_1._2_2_);
            *(undefined1 *)
             (((int)param_1._0_2_ - (int)*(short *)(_DAT_0002884c + 0x178)) * 0x9c + _DAT_000273a8 +
             (int)(short)(param_1._2_2_ - *(short *)(_DAT_0002884c + 0x176))) =
                 *(undefined1 *)(sVar4 + 0x150fc);
            _DAT_000273ac = _DAT_000273ac + 1;
          }
          else {
            *(undefined1 *)
             (((int)param_1._0_2_ - (int)*(short *)(_DAT_0002884c + 0x178)) * 0x9c + _DAT_000273a8 +
             (int)(short)(param_1._2_2_ - *(short *)(_DAT_0002884c + 0x176))) = 0xff;
          }
        }
      }
    }
    else {
      for (; param_1._2_2_ = sVar1, param_1._0_2_ < sVar2; param_1._0_2_ = param_1._0_2_ + 1) {
        for (; param_1._2_2_ < sVar3; param_1._2_2_ = param_1._2_2_ + 1) {
          if ((*(byte *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) & 0x80) == 0) {
            sVar4 = FUN_00002876(param_1._2_2_);
            *(undefined1 *)
             (((int)param_1._0_2_ - (int)*(short *)(_DAT_0002884c + 0x178)) * 0x9c + _DAT_000273a8 +
             (int)(short)(param_1._2_2_ - *(short *)(_DAT_0002884c + 0x176))) =
                 *(undefined1 *)(sVar4 + 0x150fc);
            _DAT_000273ac = _DAT_000273ac + 1;
          }
          else {
            *(undefined1 *)
             (((int)param_1._0_2_ - (int)*(short *)(_DAT_0002884c + 0x178)) * 0x9c + _DAT_000273a8 +
             (int)(short)(param_1._2_2_ - *(short *)(_DAT_0002884c + 0x176))) = 0xff;
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00003002 at 00003002
// Size: 156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003002(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  
  uVar3 = _DAT_0002884a;
  uVar2 = _DAT_000276e4;
  _DAT_000276e4 = 0;
  _DAT_0002884a = 0;
  for (sVar7 = 0; sVar7 < 2; sVar7 = sVar7 + 1) {
    for (sVar5 = 0; sVar5 < 0x70; sVar5 = sVar5 + 1) {
      for (sVar6 = 0; sVar6 < 0x9c; sVar6 = sVar6 + 1) {
        if ((*(byte *)(sVar6 * 0x70 + _DAT_00028858 + (int)sVar5) & 0x20) == 0) {
          sVar4 = FUN_00002876(sVar6);
          if (*(char *)(sVar4 + 0x150fc) == -1) {
            pbVar1 = (byte *)(sVar6 * 0x70 + _DAT_00028858 + (int)sVar5);
            *pbVar1 = *pbVar1 | 0x20;
          }
        }
      }
    }
  }
  _DAT_000276e4 = uVar2;
  _DAT_0002884a = uVar3;
  return;
}



// Function: FUN_0000309e at 0000309e
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000309e(void)

{
  func_0x00007700(_DAT_000273a8,0xffffffff,&PTR_FUN_00004440);
  return;
}



// Function: FUN_000030ba at 000030ba
// Size: 56 bytes

void FUN_000030ba(undefined4 param_1)

{
  DAT_0002736c = DAT_0002736c & 0x7f;
  FUN_00000fa6(&DAT_00027360,param_1);
  DAT_0002739a = DAT_0002739a & 0x7f;
  FUN_00000fa6(&DAT_0002738e,param_1);
  return;
}



// Function: FUN_000030f2 at 000030f2
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000030f2(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  _DAT_00027346 = _DAT_00027374;
  _DAT_00027348 = _DAT_00027376;
  _DAT_0002734a = _DAT_00027378;
  _DAT_0002734c = _DAT_0002737a;
  sVar2 = 8;
  puVar4 = (undefined2 *)&DAT_0002737c;
  puVar5 = (undefined2 *)&DAT_0002734e;
  do {
    *puVar5 = *puVar4;
    sVar2 = sVar2 + -1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (sVar2 != -1);
  FUN_0000105e(&DAT_00027360,&DAT_0002738e);
  DAT_0002736d = DAT_0002739b;
  _DAT_0002736e = _DAT_0002739c;
  _DAT_00027370 = _DAT_0002739e;
  _DAT_00027372 = _DAT_000273a0;
  DAT_0002736c = DAT_0002739a | 0x80;
  for (sVar2 = 0; sVar2 < _DAT_0002734a; sVar2 = sVar2 + 1) {
    for (sVar3 = 0; sVar3 < _DAT_0002734c; sVar3 = sVar3 + 1) {
      pbVar1 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                        ((int)sVar2 - (int)_DAT_00027362) * 10 + _DAT_00027368 + _DAT_00027360 * -10
                       + sVar3 * 10);
      *pbVar1 = *pbVar1 | 0x80;
    }
  }
  return;
}



// Function: FUN_0000323e at 0000323e
// Size: 414 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000323e(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((DAT_0002736c & 0x80) != 0) {
    if ((_DAT_00027346 != _DAT_00027374) || (_DAT_00027348 != _DAT_00027376)) {
      iVar1 = func_0x000076d8((int)_DAT_00027346 - (int)_DAT_00027374);
      if (1 < iVar1) {
        return;
      }
      iVar1 = func_0x000076d8((int)_DAT_00027348 - (int)_DAT_00027376);
      if (1 < iVar1) {
        return;
      }
      FUN_00004940(CONCAT22(_DAT_00027374,_DAT_00027376),CONCAT22(_DAT_00027346,_DAT_00027348));
      FUN_00004f86();
    }
    for (sVar2 = 0; sVar2 < _DAT_00027378; sVar2 = sVar2 + 1) {
      for (sVar3 = 0; sVar3 < _DAT_0002737a; sVar3 = sVar3 + 1) {
        pbVar5 = (byte *)(sVar3 * 10 +
                         (((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                         ((int)sVar2 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                         _DAT_00027360 * -10);
        if ((((*pbVar5 & 0x80) != 0) &&
            (pbVar4 = (byte *)(sVar3 * 10 +
                              (((int)_DAT_00027392 - (int)_DAT_0002738e) + 1) *
                              ((int)sVar2 - (int)_DAT_00027390) * 10 + _DAT_00027396 +
                              _DAT_0002738e * -10), *(int *)(pbVar4 + 4) == *(int *)(pbVar5 + 4)))
           && (*(int *)pbVar4 == *(int *)pbVar5)) {
          *pbVar4 = *pbVar4 & 0x7f;
        }
      }
    }
  }
  return;
}



// Function: FUN_000033dc at 000033dc
// Size: 178 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000033dc(void)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_00001ea0(_DAT_00027378 * 4 * (int)_DAT_0002737a);
  local_1a = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4e;
  local_8 = extraout_A0;
  iVar1 = func_0x000076a8(auStack_4e);
  if (iVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00001d18(local_8);
  FUN_00001c10();
  return;
}



// Function: FUN_00003928 at 00003928
// Size: 10 bytes

void FUN_00003928(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00005768();
}



// Function: FUN_00003938 at 00003938
// Size: 16 bytes

void FUN_00003938(void)

{
  int unaff_A6;
  
  func_0x00007258(unaff_A6 + -0x62);
  return;
}



// Function: thunk_EXT_FUN_00007258 at 00003950
// Size: 6 bytes

void thunk_EXT_FUN_00007258(void)

{
  func_0x00007258();
  return;
}



// Function: FUN_00003980 at 00003980
// Size: 2287 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003980(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short unaff_D6w;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined2 extraout_A0w;
  undefined4 extraout_A0_03;
  undefined2 extraout_A0w_00;
  undefined4 extraout_A0_04;
  undefined2 extraout_A0w_01;
  undefined4 extraout_A0_05;
  undefined4 extraout_A0_06;
  undefined4 extraout_A0_07;
  int unaff_A2;
  int iVar12;
  int unaff_A6;
  
  FUN_00002a80((char)*(undefined4 *)(unaff_A6 + -0xec));
  cVar6 = (char)unaff_A6;
  sVar5 = (short)unaff_A6;
  if ((*(byte *)(unaff_A2 + 0x26) & 8) != 0) {
    FUN_00002368();
    *(undefined4 *)(unaff_A6 + -0xf0) = extraout_A0;
    FUN_00002a78((short)*(undefined4 *)(unaff_A6 + -0xf0));
    *(undefined4 *)(unaff_A6 + -0x17e) = extraout_A0_00;
    for (sVar10 = 0; sVar10 < unaff_D6w; sVar10 = sVar10 + 1) {
      sVar8 = *(short *)(*(int *)(unaff_A6 + -4) + sVar10 * 4);
      sVar11 = *(short *)(*(int *)(unaff_A6 + -4) + 2 + sVar10 * 4);
      if ((*(byte *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1) *
                     ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                     *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 3 + sVar11 * 10
                    ) & 2) != 0) {
        if (DAT_000150fa == '\0') {
          sVar8 = *(short *)(_DAT_0002884c + 0x178) + sVar8;
          sVar11 = *(short *)(_DAT_0002884c + 0x176) + sVar11;
        }
        *(undefined2 *)(unaff_A6 + -0x72) = 0;
        *(undefined2 *)(unaff_A6 + -0x70) = 0;
        *(undefined2 *)(unaff_A6 + -0x6e) = 0x28;
        *(undefined2 *)(unaff_A6 + -0x6c) = 0x28;
        *(undefined2 *)(unaff_A6 + -0x10c) = 0x78;
        *(undefined2 *)(unaff_A6 + -0x10a) = 0x168;
        func_0x00007278(sVar5 + -0x72,cVar6 + -0xc);
        *(undefined2 *)(unaff_A6 + -0x7a) = 0;
        *(undefined2 *)(unaff_A6 + -0x78) = 0;
        *(undefined2 *)(unaff_A6 + -0x76) = 0x28;
        *(undefined2 *)(unaff_A6 + -0x74) = 0x28;
        *(short *)(unaff_A6 + -0x110) = sVar11 * 0x28;
        *(short *)(unaff_A6 + -0x10e) = sVar8 * 0x28;
        func_0x00007278(sVar5 + -0x7a,sVar5 + -0x110);
                    /* WARNING: Subroutine does not return */
        FUN_00005768(0x9058);
      }
    }
    FUN_00002a80((char)*(undefined4 *)(unaff_A6 + -0xf0));
  }
  if ((*(byte *)(unaff_A2 + 0x26) & 0x20) != 0) {
    FUN_00002368();
    *(undefined4 *)(unaff_A6 + -0xf4) = extraout_A0_01;
    FUN_00002a78((short)*(undefined4 *)(unaff_A6 + -0xf4));
    *(undefined4 *)(unaff_A6 + -0x182) = extraout_A0_02;
    for (sVar10 = 0; sVar10 < unaff_D6w; sVar10 = sVar10 + 1) {
      sVar8 = *(short *)(*(int *)(unaff_A6 + -4) + sVar10 * 4);
      sVar11 = *(short *)(*(int *)(unaff_A6 + -4) + 2 + sVar10 * 4);
      if ((*(byte *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1) *
                     ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                     *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 5 + sVar11 * 10
                    ) & 8) != 0) {
        iVar12 = *(int *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1
                          ) * ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                          *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 2 +
                         sVar11 * 10);
        if (DAT_000150fa == '\0') {
          sVar8 = *(short *)(_DAT_0002884c + 0x178) + sVar8;
          sVar11 = *(short *)(_DAT_0002884c + 0x176) + sVar11;
        }
        *(undefined2 *)(unaff_A6 + -0x82) = 0;
        *(undefined2 *)(unaff_A6 + -0x80) = 0;
        *(undefined2 *)(unaff_A6 + -0x7e) = 0x28;
        *(undefined2 *)(unaff_A6 + -0x7c) = 0x28;
        *(undefined2 *)(unaff_A6 + -0x114) = 0x28;
        *(ushort *)(unaff_A6 + -0x112) = (ushort)((uint)(iVar12 << 5) >> 0x1c) * 0x30 + 0xc0;
        func_0x00007278(sVar5 + -0x82,cVar6 + -0x14);
        *(undefined2 *)(unaff_A6 + -0x8a) = 0;
        *(undefined2 *)(unaff_A6 + -0x88) = 0;
        *(undefined2 *)(unaff_A6 + -0x86) = 0x28;
        *(undefined2 *)(unaff_A6 + -0x84) = 0x28;
        *(short *)(unaff_A6 + -0x118) = sVar11 * 0x28;
        *(short *)(unaff_A6 + -0x116) = sVar8 * 0x28;
        func_0x00007278(sVar5 + -0x8a,sVar5 + -0x118);
                    /* WARNING: Subroutine does not return */
        FUN_00005768(0x9058);
      }
    }
    FUN_00002a80((char)*(undefined4 *)(unaff_A6 + -0xf4));
  }
  if ((*(byte *)(unaff_A2 + 0x26) & 4) != 0) {
    FUN_00002368();
    FUN_00002a78(extraout_A0w);
    *(undefined4 *)(unaff_A6 + -0x186) = extraout_A0_03;
    for (sVar10 = 0; sVar10 < unaff_D6w; sVar10 = sVar10 + 1) {
      sVar8 = *(short *)(*(int *)(unaff_A6 + -4) + sVar10 * 4);
      sVar11 = *(short *)(*(int *)(unaff_A6 + -4) + 2 + sVar10 * 4);
      if ((*(byte *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1) *
                     ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                     *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 3 + sVar11 * 10
                    ) & 1) != 0) {
        if (DAT_000150fa == '\0') {
          sVar8 = *(short *)(_DAT_0002884c + 0x178) + sVar8;
          sVar11 = *(short *)(_DAT_0002884c + 0x176) + sVar11;
        }
        *(undefined2 *)(unaff_A6 + -0x92) = 0;
        *(undefined2 *)(unaff_A6 + -0x90) = 0;
        *(undefined2 *)(unaff_A6 + -0x8e) = 0x16;
        *(undefined2 *)(unaff_A6 + -0x8c) = 0x1e;
        *(undefined2 *)(unaff_A6 + -0x11c) = 0x20;
        *(undefined2 *)(unaff_A6 + -0x11a) = 0x1d0;
        func_0x00007278(sVar5 + -0x92,cVar6 + -0x1c);
        *(undefined2 *)(unaff_A6 + -0x9a) = 0;
        *(undefined2 *)(unaff_A6 + -0x98) = 0;
        *(undefined2 *)(unaff_A6 + -0x96) = 0x16;
        *(undefined2 *)(unaff_A6 + -0x94) = 0x1e;
        *(short *)(unaff_A6 + -0x120) = sVar11 * 0x28 + 0x12;
        *(short *)(unaff_A6 + -0x11e) = sVar8 * 0x28 + 5;
        func_0x00007278(sVar5 + -0x9a,sVar5 + -0x120);
                    /* WARNING: Subroutine does not return */
        FUN_00005768(0x9058);
      }
    }
    FUN_00002a80((char)extraout_A0w);
  }
  for (sVar10 = 0; sVar10 < 9; sVar10 = sVar10 + 1) {
    if (*(short *)(unaff_A2 + 8 + sVar10 * 2) != 0) {
      for (sVar8 = 0; sVar8 < unaff_D6w; sVar8 = sVar8 + 1) {
        sVar1 = *(short *)(*(int *)(unaff_A6 + -4) + sVar8 * 4);
        sVar9 = *(short *)(*(int *)(unaff_A6 + -4) + 2 + sVar8 * 4);
        sVar11 = *(short *)(unaff_A2 + 0x1a);
        sVar2 = *(short *)(unaff_A2 + 0x1e);
        sVar3 = *(short *)(unaff_A2 + 0x1c);
        *(int *)(unaff_A6 + -0x19c) = sVar9 * 10;
        iVar12 = *(int *)(unaff_A6 + -0x19c) +
                 (((int)sVar2 - (int)sVar11) + 1) * ((int)sVar1 - (int)sVar3) * 10 +
                 *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10;
        if (((((*(byte *)(iVar12 + 5) & 8) == 0) || ((*(byte *)(iVar12 + 6) & 4) != 0)) &&
            ((byte)((uint)*(undefined4 *)(iVar12 + 2) >> 0x1b) != 0)) &&
           ((uint)(*(int *)(iVar12 + 2) << 5) >> 0x1c == (int)sVar10)) {
          *(ushort *)(unaff_A6 + -0x188) = (ushort)((uint)(*(int *)(iVar12 + 1) << 2) >> 0x1b);
          *(ushort *)(unaff_A6 + -0x18a) = (ushort)((uint)*(undefined4 *)(iVar12 + 2) >> 0x1b);
          if (DAT_000150fa == '\0') {
            sVar9 = *(short *)(_DAT_0002884c + 0x176) + sVar9;
          }
          FUN_000014e2(sVar10,*(undefined2 *)(unaff_A6 + -0x18a),(char)sVar9);
        }
      }
    }
  }
  FUN_00002a78();
  if ((*(byte *)(unaff_A2 + 0x26) & 1) != 0) {
    FUN_00002368();
    FUN_00002a78(extraout_A0w_00);
    *(undefined4 *)(unaff_A6 + -0x18e) = extraout_A0_04;
    for (sVar10 = 0; sVar10 < unaff_D6w; sVar10 = sVar10 + 1) {
      sVar8 = *(short *)(*(int *)(unaff_A6 + -4) + sVar10 * 4);
      sVar11 = *(short *)(*(int *)(unaff_A6 + -4) + 2 + sVar10 * 4);
      if ((uint)(*(int *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1
                          ) * ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                          *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 5 +
                         sVar11 * 10) << 5) >> 0x1e != 0) {
        *(undefined2 *)(unaff_A6 + -0xce) = 0x1f0;
        if ((byte)((uint)(*(int *)((((int)*(short *)(unaff_A2 + 0x1e) -
                                    (int)*(short *)(unaff_A2 + 0x1a)) + 1) *
                                   ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                                   *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 5
                                  + sVar11 * 10) << 5) >> 0x1e) == 1) {
          uVar7 = 0x1f;
        }
        else {
          uVar7 = 0x30;
        }
        *(undefined2 *)(unaff_A6 + -0xcc) = uVar7;
        if (DAT_000150fa == '\0') {
          sVar8 = *(short *)(_DAT_0002884c + 0x178) + sVar8;
          sVar11 = *(short *)(_DAT_0002884c + 0x176) + sVar11;
        }
        *(undefined2 *)(unaff_A6 + -0xa2) = 0;
        *(undefined2 *)(unaff_A6 + -0xa0) = 0;
        *(undefined2 *)(unaff_A6 + -0x9e) = 0xe;
        *(undefined2 *)(unaff_A6 + -0x9c) = 0x10;
        *(undefined2 *)(unaff_A6 + -0x124) = *(undefined2 *)(unaff_A6 + -0xcc);
        *(undefined2 *)(unaff_A6 + -0x122) = *(undefined2 *)(unaff_A6 + -0xce);
        func_0x00007278(sVar5 + -0xa2,cVar6 + -0x24);
        *(undefined2 *)(unaff_A6 + -0xaa) = 0;
        *(undefined2 *)(unaff_A6 + -0xa8) = 0;
        *(undefined2 *)(unaff_A6 + -0xa6) = 0xe;
        *(undefined2 *)(unaff_A6 + -0xa4) = 0x10;
        *(short *)(unaff_A6 + -0x128) = sVar11 * 0x28 + 0xd;
        *(short *)(unaff_A6 + -0x126) = sVar8 * 0x28 + 0x10;
        func_0x00007278(sVar5 + -0xaa,sVar5 + -0x128);
                    /* WARNING: Subroutine does not return */
        FUN_00005768(0x9058);
      }
    }
    FUN_00002a80((char)extraout_A0w_00);
  }
  if ((*(byte *)(unaff_A2 + 0x27) & 0x80) != 0) {
    FUN_00002368();
    FUN_00002a78(extraout_A0w_01);
    *(undefined4 *)(unaff_A6 + -0x192) = extraout_A0_05;
    sVar10 = *(short *)(unaff_A2 + 0x2c);
    *(short *)(unaff_A6 + -0xce) = (short)((int)sVar10 % 0x10 << 5);
    *(short *)(unaff_A6 + -0xcc) = (sVar10 / 0x10) * 0x1d;
    sVar10 = *(short *)(unaff_A2 + 0x28);
    sVar8 = *(short *)(unaff_A2 + 0x2a);
    if (DAT_000150fa == '\0') {
      sVar10 = *(short *)(_DAT_0002884c + 0x178) + sVar10;
      sVar8 = *(short *)(_DAT_0002884c + 0x176) + sVar8;
    }
    *(undefined2 *)(unaff_A6 + -0xb2) = 0;
    *(undefined2 *)(unaff_A6 + -0xb0) = 0;
    *(undefined2 *)(unaff_A6 + -0xae) = 0x1d;
    *(undefined2 *)(unaff_A6 + -0xac) = 0x20;
    *(short *)(unaff_A6 + -300) = *(short *)(unaff_A6 + -0xcc) + 1;
    *(undefined2 *)(unaff_A6 + -0x12a) = *(undefined2 *)(unaff_A6 + -0xce);
    func_0x00007278(sVar5 + -0xb2,cVar6 + -0x2c);
    *(undefined2 *)(unaff_A6 + -0xba) = 0;
    *(undefined2 *)(unaff_A6 + -0xb8) = 0;
    *(undefined2 *)(unaff_A6 + -0xb6) = 0x1d;
    *(undefined2 *)(unaff_A6 + -0xb4) = 0x20;
    *(short *)(unaff_A6 + -0x130) = sVar8 * 0x28 + 5;
    *(short *)(unaff_A6 + -0x12e) = sVar10 * 0x28 + 8;
    func_0x00007278(sVar5 + -0xba,sVar5 + -0x130);
    *(undefined2 *)(unaff_A6 + -0xd4) = 0xebeb;
    *(undefined2 *)(unaff_A6 + -0xd2) = 0xa3a3;
    *(undefined2 *)(unaff_A6 + -0xd0) = 0x7777;
                    /* WARNING: Subroutine does not return */
    FUN_00005768(sVar5 + -0xd4);
  }
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    FUN_00002368();
    *(undefined4 *)(unaff_A6 + -0xf8) = extraout_A0_06;
    FUN_00002a78((short)*(undefined4 *)(unaff_A6 + -0xf8));
    *(undefined4 *)(unaff_A6 + -0x198) = extraout_A0_07;
    for (sVar10 = 0; sVar10 < unaff_D6w; sVar10 = sVar10 + 1) {
      sVar8 = *(short *)(*(int *)(unaff_A6 + -4) + sVar10 * 4);
      sVar11 = *(short *)(*(int *)(unaff_A6 + -4) + 2 + sVar10 * 4);
      if ((*(byte *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1) *
                     ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                     *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 4 + sVar11 * 10
                    ) & 0x80) != 0) {
        iVar12 = *(int *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) + 1
                          ) * ((int)sVar8 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                          *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 4 +
                         sVar11 * 10);
        if (DAT_000150fa == '\0') {
          sVar8 = *(short *)(_DAT_0002884c + 0x178) + sVar8;
          sVar11 = *(short *)(_DAT_0002884c + 0x176) + sVar11;
        }
        *(undefined2 *)(unaff_A6 + -0xc2) = 0;
        *(undefined2 *)(unaff_A6 + -0xc0) = 0;
        *(undefined2 *)(unaff_A6 + -0xbe) = 0x28;
        *(undefined2 *)(unaff_A6 + -0xbc) = 0x28;
        uVar4 = (ushort)((uint)(iVar12 << 1) >> 0x10);
        *(ushort *)(unaff_A6 + -0x134) = (uVar4 / 0x3800) * 0x29;
        *(ushort *)(unaff_A6 + -0x132) = ((uVar4 >> 0xb) % 7) * 0x30;
        func_0x00007278(sVar5 + -0xc2,cVar6 + -0x34);
        *(undefined2 *)(unaff_A6 + -0xca) = 0;
        *(undefined2 *)(unaff_A6 + -200) = 0;
        *(undefined2 *)(unaff_A6 + -0xc6) = 0x28;
        *(undefined2 *)(unaff_A6 + -0xc4) = 0x28;
        *(short *)(unaff_A6 + -0x138) = sVar11 * 0x28;
        *(short *)(unaff_A6 + -0x136) = sVar8 * 0x28;
        func_0x00007278(sVar5 + -0xca,sVar5 + -0x138);
                    /* WARNING: Subroutine does not return */
        FUN_00005768(0x9058);
      }
    }
    FUN_00002a80((char)*(undefined4 *)(unaff_A6 + -0xf8));
  }
  func_0x00006d30((short)(unaff_A6 + -0x16a));
  FUN_00002a80();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000447e at 0000447e
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000447e(void)

{
  _DAT_00027374 = *(undefined2 *)(_DAT_0002884c + 0x17e);
  _DAT_00027376 = *(undefined2 *)(_DAT_0002884c + 0x180);
  _DAT_00027378 = *(short *)(_DAT_0002884c + 0x17c) - *(short *)(_DAT_0002884c + 0x178);
  _DAT_0002737a = *(short *)(_DAT_0002884c + 0x17a) - *(short *)(_DAT_0002884c + 0x176);
  FUN_00004500(&DAT_00027374);
  FUN_0000467a(&DAT_00027374);
  FUN_0000481c(&DAT_00027374);
  FUN_00004b56(&DAT_00027374);
  FUN_00004d00(&DAT_00027374);
  return;
}



// Function: FUN_00004500 at 00004500
// Size: 378 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004500(int param_1)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ushort local_16 [9];
  
  sVar4 = 0;
  do {
    if (8 < sVar4) {
      for (sVar4 = 0; sVar4 < 9; sVar4 = sVar4 + 1) {
        *(undefined2 *)(param_1 + 8 + sVar4 * 2) = 0;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x22);
      func_0x000075c8(uVar7);
      FUN_00001ce0(*(undefined4 *)(param_1 + 0x22),uVar7);
      for (sVar4 = 0; sVar4 < *(short *)(param_1 + 4); sVar4 = sVar4 + 1) {
        for (sVar5 = 0; sVar5 < *(short *)(param_1 + 6); sVar5 = sVar5 + 1) {
          puVar6 = (undefined4 *)
                   (sVar5 * 10 +
                   (((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                   ((int)sVar4 - (int)*(short *)(param_1 + 0x1c)) * 10 + *(int *)(param_1 + 0x22) +
                   *(short *)(param_1 + 0x1a) * -10);
          *puVar6 = 0x80000000;
          uVar3 = (ushort)((uint)(*(int *)(((int)sVar5 + (int)*(short *)(_DAT_0002884c + 0x176)) *
                                           0xe0 + _DAT_00028850 + 1 +
                                          ((int)sVar4 + (int)*(short *)(_DAT_0002884c + 0x178)) * 2)
                                 << 4) >> 0x10);
          if (uVar3 >> 0xc < 8) {
            iVar2 = (int)(short)(uVar3 >> 0xc);
          }
          else {
            iVar2 = 8;
          }
          puVar1 = (uint *)((int)puVar6 + 1);
          *puVar1 = *puVar1 & 0xc1ffffff | (local_16[iVar2] & 0x1f) << 0x19;
        }
      }
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 0x80;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xbf;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xdf;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xef;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xf7;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfb;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfd;
      *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfe;
      *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0x7f;
      return;
    }
    for (uVar3 = 0; (short)uVar3 < 0x1d; uVar3 = uVar3 + 1) {
      if (*(char *)((int)(short)uVar3 + sVar4 * 0x1d + _DAT_0002884c + 0x60c) == '\0') {
        local_16[sVar4] = uVar3;
        break;
      }
    }
    sVar4 = sVar4 + 1;
  } while( true );
}



// Function: FUN_0000467a at 0000467a
// Size: 418 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000467a(int param_1)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint *puVar7;
  
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    FUN_00002d8c(0xffffffff);
  }
  sVar5 = 0;
  for (sVar3 = *(short *)(_DAT_0002884c + 0x178); sVar3 <= *(short *)(_DAT_0002884c + 0x17c);
      sVar3 = sVar3 + 1) {
    sVar6 = 0;
    for (sVar4 = *(short *)(_DAT_0002884c + 0x176); sVar4 <= *(short *)(_DAT_0002884c + 0x17a);
        sVar4 = sVar4 + 1) {
      uVar1 = *(ushort *)(sVar4 * 0xe0 + _DAT_00028850 + sVar3 * 2);
      puVar7 = (uint *)(sVar6 * 10 +
                       (((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                       ((int)sVar5 - (int)*(short *)(param_1 + 0x1c)) * 10 +
                       *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10);
      bVar2 = (byte)(uVar1 >> 8);
      if (bVar2 < 0x60) {
        *puVar7 = *puVar7 & 0xc03fffff | (((uint)uVar1 << 0x10) >> 0x18) << 0x16;
      }
      else {
        *puVar7 = *puVar7 & 0xc03fffff | ((int)(short)(ushort)bVar2 - 0x60U & 0xff) << 0x16;
        *(byte *)puVar7 = *(byte *)puVar7 | 0x40;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 0x40;
      }
      if ((uVar1 & 0x80) != 0) {
        *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar7 + 3) | 2;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 8;
      }
      if ((uVar1 & 0x20) != 0) {
        *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) | 8;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 0x20;
      }
      if ((uint)(*(int *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3) << 3) >> 0x1b != 0) {
        *(byte *)(puVar7 + 1) = *(byte *)(puVar7 + 1) | 2;
        puVar7[1] = puVar7[1] & 0xfe0fffff |
                    (((uint)(*(int *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3) << 3) >> 0x1b) - 1
                    & 0x1f) << 0x14;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 0x10;
      }
      if ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
         (-1 < *(char *)(sVar5 * 0x9c + _DAT_000273a8 + (int)sVar6))) {
        *(byte *)(puVar7 + 1) = *(byte *)(puVar7 + 1) | 0x80;
        puVar7[1] = puVar7[1] & 0x83ffffff |
                    (*(byte *)(sVar5 * 0x9c + _DAT_000273a8 + (int)sVar6) & 0x1f) << 0x1a;
      }
      sVar6 = sVar6 + 1;
    }
    sVar5 = sVar5 + 1;
  }
  return;
}



// Function: FUN_0000481c at 0000481c
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000481c(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x178);
  sVar11 = *(short *)(_DAT_0002884c + 0x17c);
  sVar4 = *(short *)(_DAT_0002884c + 0x176);
  sVar5 = *(short *)(_DAT_0002884c + 0x17a);
  sVar12 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar6 = sVar12 + -1, sVar12 != 0) {
    psVar14 = (short *)(sVar6 * 0x16 + _DAT_00028854);
    sVar12 = sVar6;
    if ((((*(char *)((int)psVar14 + 5) != -1) && (sVar3 <= *psVar14)) && (sVar4 <= psVar14[1])) &&
       ((psVar14[1] <= sVar5 && (*psVar14 <= sVar11)))) {
      iVar15 = ((int)psVar14[1] - (int)sVar4) * 10 +
               (((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
               ((int)(short)(*psVar14 - sVar3) - (int)*(short *)(param_1 + 0x1c)) * 10 +
               *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10;
      *(uint *)(iVar15 + 2) =
           *(uint *)(iVar15 + 2) & 0x7ffffff |
           (uint)(byte)((byte)((uint)*(undefined4 *)(iVar15 + 2) >> 0x1b) + 1) << 0x1b;
      if (*(char *)((int)psVar14 + 5) == '\x0f') {
        uVar8 = 8;
      }
      else {
        uVar8 = (uint)*(char *)((int)psVar14 + 5);
      }
      *(uint *)(iVar15 + 2) = *(uint *)(iVar15 + 2) & 0xf87fffff | (uVar8 & 0xf) << 0x17;
      uVar7 = (ushort)((uint)(*(int *)(iVar15 + 2) << 5) >> 0x1c);
      uVar8 = (uint)(*(int *)(iVar15 + 1) << 2) >> 0x1b;
      if (uVar8 == 0x1d) {
        uVar8 = 0x1c;
      }
      uVar10 = (uint)*(char *)(psVar14 + 2);
      iVar13 = (short)uVar7 * 0x1d + _DAT_0002884c;
      if (*(char *)(uVar8 + iVar13 + 0x60c) < *(char *)(uVar10 + iVar13 + 0x60c)) {
        if ((uVar10 == 0x1c) &&
           (*(short *)(*(char *)(psVar14 + 5) * 2 + _DAT_0002884c + 0x594) == 1)) {
          uVar10 = 0x1d;
        }
        *(uint *)(iVar15 + 1) = *(uint *)(iVar15 + 1) & 0xc1ffffff | (uVar10 & 0x1f) << 0x19;
      }
      if (((psVar14[6] & 0x1000U) != 0) &&
         ((*(byte *)(psVar14[1] * 0xe0 + _DAT_00028850 + 1 + *psVar14 * 2) & 0x80) == 0)) {
        *(byte *)(iVar15 + 1) = *(byte *)(iVar15 + 1) & 0xc1;
        *(byte *)(iVar15 + 1) = *(byte *)(iVar15 + 1) | 10;
      }
      *(undefined2 *)(param_1 + 8 + (short)uVar7 * 2) = 1;
    }
  }
  if ((((_DAT_000288ac != (short *)0x0) && (*(short *)(_DAT_0002884c + 0x178) <= *_DAT_000288ac)) &&
      (*_DAT_000288ac <= *(short *)(_DAT_0002884c + 0x17c))) &&
     ((*(short *)(_DAT_0002884c + 0x176) <= _DAT_000288ac[1] &&
      (_DAT_000288ac[1] <= *(short *)(_DAT_0002884c + 0x17a))))) {
    sVar3 = *_DAT_000288ac - *(short *)(_DAT_0002884c + 0x178);
    sVar11 = _DAT_000288ac[1] - *(short *)(_DAT_0002884c + 0x176);
    bVar9 = *(byte *)(_DAT_000288ac + 2);
    if ((bVar9 == 0x1c) &&
       (*(short *)(*(char *)(_DAT_000288ac + 5) * 2 + _DAT_0002884c + 0x594) == 1)) {
      bVar9 = 0x1d;
    }
    if ((*(byte *)(_DAT_000288ac + 6) & 0x10) != 0) {
      bVar9 = 5;
    }
    puVar1 = (uint *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                      ((int)sVar3 - (int)*(short *)(param_1 + 0x1c)) * 10 + *(int *)(param_1 + 0x22)
                      + *(short *)(param_1 + 0x1a) * -10 + 1 + sVar11 * 10);
    *puVar1 = *puVar1 & 0xc1ffffff | (bVar9 & 0x1f) << 0x19;
    pbVar2 = (byte *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                      ((int)sVar3 - (int)*(short *)(param_1 + 0x1c)) * 10 + *(int *)(param_1 + 0x22)
                      + *(short *)(param_1 + 0x1a) * -10 + 6 + sVar11 * 10);
    *pbVar2 = *pbVar2 | 4;
    puVar1 = (uint *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                      ((int)sVar3 - (int)*(short *)(param_1 + 0x1c)) * 10 + *(int *)(param_1 + 0x22)
                      + *(short *)(param_1 + 0x1a) * -10 + 2 + sVar11 * 10);
    *puVar1 = *puVar1 & 0xf87fffff |
              ((ushort)(short)*(char *)((int)_DAT_000288ac + 5) & 0xf) << 0x17;
  }
  return;
}



// Function: FUN_00004940 at 00004940
// Size: 533 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004940(void)

{
  uint *puVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int in_D0;
  char cVar7;
  uint unaff_D3;
  uint unaff_D4;
  uint unaff_D5;
  short sVar8;
  short unaff_D6w;
  short sVar9;
  short unaff_D7w;
  int in_A0;
  int unaff_A2;
  short *unaff_A3;
  int unaff_A4;
  int unaff_A6;
  
  do {
    *(int *)(unaff_A6 + -6) = in_D0 + in_A0;
    if (*(char *)(unaff_D4 + in_D0 + in_A0 + 0x60c) <
        *(char *)(unaff_D3 + *(int *)(unaff_A6 + -6) + 0x60c)) {
      if ((unaff_D3 == 0x1c) &&
         (*(short *)(*(char *)(unaff_A3 + 5) * 2 + _DAT_0002884c + 0x594) == 1)) {
        unaff_D3 = 0x1d;
      }
      *(uint *)(unaff_A4 + 1) = *(uint *)(unaff_A4 + 1) & 0xc1ffffff | (unaff_D3 & 0x1f) << 0x19;
    }
    if (((unaff_A3[6] & 0x1000U) != 0) &&
       ((*(byte *)(unaff_A3[1] * 0xe0 + _DAT_00028850 + 1 + *unaff_A3 * 2) & 0x80) == 0)) {
      *(byte *)(unaff_A4 + 1) = *(byte *)(unaff_A4 + 1) & 0xc1;
      *(byte *)(unaff_A4 + 1) = *(byte *)(unaff_A4 + 1) | 10;
    }
    *(undefined2 *)(unaff_A2 + 8 + (short)unaff_D5 * 2) = 1;
    sVar9 = unaff_D6w;
    do {
      unaff_D6w = sVar9 + -1;
      if (sVar9 == 0) {
        if ((((_DAT_000288ac != (short *)0x0) &&
             (*(short *)(_DAT_0002884c + 0x178) <= *_DAT_000288ac)) &&
            (*_DAT_000288ac <= *(short *)(_DAT_0002884c + 0x17c))) &&
           ((*(short *)(_DAT_0002884c + 0x176) <= _DAT_000288ac[1] &&
            (_DAT_000288ac[1] <= *(short *)(_DAT_0002884c + 0x17a))))) {
          sVar9 = *_DAT_000288ac - *(short *)(_DAT_0002884c + 0x178);
          sVar8 = _DAT_000288ac[1] - *(short *)(_DAT_0002884c + 0x176);
          cVar7 = *(char *)(_DAT_000288ac + 2);
          if ((cVar7 == '\x1c') &&
             (*(short *)(*(char *)(_DAT_000288ac + 5) * 2 + _DAT_0002884c + 0x594) == 1)) {
            cVar7 = '\x1d';
          }
          if ((*(byte *)(_DAT_000288ac + 6) & 0x10) != 0) {
            cVar7 = '\x05';
          }
          sVar3 = *(short *)(unaff_A2 + 0x1a);
          sVar4 = *(short *)(unaff_A2 + 0x1e);
          sVar5 = *(short *)(unaff_A2 + 0x1c);
          *(char *)(unaff_A6 + -0x10) = cVar7;
          puVar1 = (uint *)((((int)sVar4 - (int)sVar3) + 1) * ((int)sVar9 - (int)sVar5) * 10 +
                            *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 1 +
                           sVar8 * 10);
          *puVar1 = *puVar1 & 0xc1ffffff | (*(byte *)(unaff_A6 + -0x10) & 0x1f) << 0x19;
          pbVar2 = (byte *)((((int)*(short *)(unaff_A2 + 0x1e) - (int)*(short *)(unaff_A2 + 0x1a)) +
                            1) * ((int)sVar9 - (int)*(short *)(unaff_A2 + 0x1c)) * 10 +
                            *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 6 +
                           sVar8 * 10);
          *pbVar2 = *pbVar2 | 4;
          sVar3 = *(short *)(unaff_A2 + 0x1a);
          sVar4 = *(short *)(unaff_A2 + 0x1e);
          sVar5 = *(short *)(unaff_A2 + 0x1c);
          *(short *)(unaff_A6 + -0xe) = (short)*(char *)((int)_DAT_000288ac + 5);
          puVar1 = (uint *)((((int)sVar4 - (int)sVar3) + 1) * ((int)sVar9 - (int)sVar5) * 10 +
                            *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10 + 2 +
                           sVar8 * 10);
          *puVar1 = *puVar1 & 0xf87fffff | (*(ushort *)(unaff_A6 + -0xe) & 0xf) << 0x17;
        }
        return;
      }
      unaff_A3 = (short *)(unaff_D6w * 0x16 + _DAT_00028854);
      sVar9 = unaff_D6w;
    } while (((*(char *)((int)unaff_A3 + 5) == -1) || (*unaff_A3 < unaff_D7w)) ||
            ((unaff_A3[1] < *(short *)(unaff_A6 + -2) ||
             ((*(short *)(unaff_A6 + -10) < unaff_A3[1] || (*(short *)(unaff_A6 + -8) < *unaff_A3)))
             )));
    sVar9 = unaff_A3[1];
    *(short *)(unaff_A6 + -0xc) = *unaff_A3 - unaff_D7w;
    sVar8 = *(short *)(unaff_A2 + 0x1a);
    sVar3 = *(short *)(unaff_A2 + 0x1e);
    *(int *)(unaff_A6 + -0x14) = (int)*(short *)(unaff_A2 + 0x1c);
    unaff_A4 = ((int)sVar9 - (int)*(short *)(unaff_A6 + -2)) * 10 +
               (((int)sVar3 - (int)sVar8) + 1) *
               ((int)*(short *)(unaff_A6 + -0xc) - *(int *)(unaff_A6 + -0x14)) * 10 +
               *(int *)(unaff_A2 + 0x22) + *(short *)(unaff_A2 + 0x1a) * -10;
    *(uint *)(unaff_A4 + 2) =
         *(uint *)(unaff_A4 + 2) & 0x7ffffff |
         (uint)(byte)((byte)((uint)*(undefined4 *)(unaff_A4 + 2) >> 0x1b) + 1) << 0x1b;
    if (*(char *)((int)unaff_A3 + 5) == '\x0f') {
      uVar6 = 8;
    }
    else {
      uVar6 = (uint)*(char *)((int)unaff_A3 + 5);
    }
    *(uint *)(unaff_A4 + 2) = *(uint *)(unaff_A4 + 2) & 0xf87fffff | (uVar6 & 0xf) << 0x17;
    uVar6 = *(int *)(unaff_A4 + 2) << 5;
    unaff_D5 = uVar6 >> 0x1c;
    unaff_D4 = (uint)(*(int *)(unaff_A4 + 1) << 2) >> 0x1b;
    if (unaff_D4 == 0x1d) {
      unaff_D4 = 0x1c;
    }
    unaff_D3 = (uint)*(char *)(unaff_A3 + 2);
    in_D0 = (short)(ushort)(uVar6 >> 0x1c) * 0x1d;
    in_A0 = _DAT_0002884c;
  } while( true );
}



// Function: FUN_00004b56 at 00004b56
// Size: 426 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004b56(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x178);
  sVar4 = *(short *)(_DAT_0002884c + 0x17c);
  sVar5 = *(short *)(_DAT_0002884c + 0x176);
  sVar6 = *(short *)(_DAT_0002884c + 0x17a);
  uVar9 = 0x16;
  while (uVar7 = uVar9 - 1, uVar9 != 0) {
    iVar11 = (short)uVar7 * 0x1e + _DAT_0002884c;
    uVar9 = uVar7;
    if ((((*(char *)(iVar11 + 0xd28) == '\x01') && (sVar3 <= *(short *)(iVar11 + 0xd2c))) &&
        (*(short *)(iVar11 + 0xd2c) <= sVar4)) &&
       ((sVar5 <= *(short *)(iVar11 + 0xd2e) && (*(short *)(iVar11 + 0xd2e) <= sVar6)))) {
      sVar8 = *(short *)(iVar11 + 0xd2c) - sVar3;
      sVar10 = *(short *)(iVar11 + 0xd2e) - sVar5;
      if (*(int *)(*(short *)(iVar11 + 0xd2e) * 0x70 + _DAT_00028858 +
                  (int)*(short *)(iVar11 + 0xd2c)) << 1 < 0) {
        pbVar1 = (byte *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1)
                          * ((int)sVar8 - (int)*(short *)(param_1 + 0x1c)) * 10 +
                          *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10 + 3 +
                         sVar10 * 10);
        *pbVar1 = *pbVar1 | 0x40;
        puVar2 = (uint *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1)
                          * ((int)sVar8 - (int)*(short *)(param_1 + 0x1c)) * 10 +
                          *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10 + 3 +
                         sVar10 * 10);
        *puVar2 = *puVar2 & 0xc3ffffff | (uVar7 & 0xf) << 0x1a;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 2;
        *(undefined2 *)(param_1 + 8 + (short)uVar7 * 2) = 1;
      }
      else {
        pbVar1 = (byte *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1)
                          * ((int)sVar8 - (int)*(short *)(param_1 + 0x1c)) * 10 +
                          *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10 + 3 +
                         sVar10 * 10);
        *pbVar1 = *pbVar1 | 1;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 4;
      }
    }
  }
  return;
}



// Function: FUN_00004d00 at 00004d00
// Size: 646 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004d00(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  short *psVar10;
  
  if ((((_DAT_00028840 != 0) && (_DAT_000288ac != 0)) && (0 < _DAT_000276d2)) &&
     (_DAT_000276d4 < _DAT_000276d2)) {
    sVar8 = *(short *)(_DAT_0002884c + 0x176);
    sVar3 = *(short *)(_DAT_0002884c + 0x17a);
    sVar4 = *(short *)(_DAT_0002884c + 0x178);
    sVar5 = *(short *)(_DAT_0002884c + 0x17c);
    for (sVar9 = _DAT_000276d4; (int)sVar9 < _DAT_000276d2 + -1; sVar9 = sVar9 + 1) {
      iVar6 = sVar9 * 4;
      psVar10 = (short *)(iVar6 + 0x273ae);
      if (((sVar4 <= *psVar10) && (*psVar10 <= sVar5)) &&
         ((sVar8 <= *(short *)(iVar6 + 0x273b0) && (*(short *)(iVar6 + 0x273b0) <= sVar3)))) {
        if (sVar9 < _DAT_000276d6) {
          bVar7 = 1;
        }
        else {
          bVar7 = 2;
        }
        puVar2 = (uint *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1)
                          * ((int)(short)(*psVar10 - sVar4) - (int)*(short *)(param_1 + 0x1c)) * 10
                          + *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10 + 5 +
                         ((int)*(short *)(iVar6 + 0x273b0) - (int)sVar8) * 10);
        *puVar2 = *puVar2 & 0xf9ffffff | (uint)bVar7 << 0x19;
        *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 1;
      }
    }
    if (((sVar4 <= _DAT_000276ce) && (_DAT_000276ce <= sVar5)) &&
       ((sVar8 <= _DAT_000276d0 && (_DAT_000276d0 <= sVar3)))) {
      pbVar1 = (byte *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                        ((int)(short)(_DAT_000276ce - sVar4) - (int)*(short *)(param_1 + 0x1c)) * 10
                        + *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10 + 5 +
                       ((int)_DAT_000276d0 - (int)sVar8) * 10);
      *pbVar1 = *pbVar1 | 1;
      puVar2 = (uint *)((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(param_1 + 0x1a)) + 1) *
                        ((int)(short)(_DAT_000276ce - sVar4) - (int)*(short *)(param_1 + 0x1c)) * 10
                        + *(int *)(param_1 + 0x22) + *(short *)(param_1 + 0x1a) * -10 + 6 +
                       ((int)_DAT_000276d0 - (int)sVar8) * 10);
      *puVar2 = *puVar2 & 0x7ffffff | (uint)*(byte *)(_DAT_000288ac + 4) << 0x1b;
      *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 0x80;
      *(short *)(param_1 + 0x28) = _DAT_000276ce - sVar4;
      *(short *)(param_1 + 0x2a) = _DAT_000276d0 - sVar8;
      sVar8 = (short)*(char *)(_DAT_000288ac + 4);
      if ((sVar8 == 0x1c) &&
         (*(short *)(*(char *)(_DAT_000288ac + 10) * 2 + _DAT_0002884c + 0x594) == 1)) {
        sVar8 = 0x1d;
      }
      *(short *)(param_1 + 0x2c) = sVar8;
    }
  }
  return;
}



// Function: FUN_00004f86 at 00004f86
// Size: 2698 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004f86(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  sVar5 = _DAT_0002734c;
  sVar4 = _DAT_0002734a;
  if ((DAT_0002736c & 0x80) != 0) {
    switch(param_1._0_2_) {
    case 0:
      for (sVar3 = 0; (int)sVar3 < sVar5 + -1; sVar3 = sVar3 + 1) {
        for (sVar1 = 0; sVar1 < sVar4; sVar1 = sVar1 + 1) {
          iVar6 = (((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                  ((int)sVar1 - (int)_DAT_00027362) * 10 + _DAT_00027368 + _DAT_00027360 * -10;
          puVar9 = (undefined4 *)((sVar3 + 1) * 10 + iVar6);
          puVar8 = (undefined4 *)(sVar3 * 10 + iVar6);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
        }
      }
      for (sVar3 = 0; sVar3 < sVar4; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                          _DAT_00027360 * -10 + (sVar5 + -1) * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 1:
      for (sVar3 = 0; sVar1 = sVar4, (int)sVar3 < sVar5 + -1; sVar3 = sVar3 + 1) {
        while (sVar2 = sVar1 + -1, 0 < sVar2) {
          iVar6 = ((int)_DAT_00027364 - (int)_DAT_00027360) + 1;
          puVar9 = (undefined4 *)
                   ((sVar3 + 1) * 10 +
                   iVar6 * ((int)(short)(sVar1 + -2) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          puVar8 = (undefined4 *)
                   (sVar3 * 10 +
                   iVar6 * ((int)sVar2 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
          sVar1 = sVar2;
        }
      }
      for (sVar3 = 0; sVar3 < sVar4; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                          _DAT_00027360 * -10 + (sVar5 + -1) * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      for (sVar4 = 0; sVar4 < sVar5; sVar4 = sVar4 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) * -(int)_DAT_00027362 * 10
                          + _DAT_00027368 + _DAT_00027360 * -10 + sVar4 * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 2:
      while (sVar3 = sVar4, sVar4 = sVar3 + -1, 0 < sVar4) {
        for (sVar1 = 0; sVar1 < sVar5; sVar1 = sVar1 + 1) {
          iVar6 = ((int)_DAT_00027364 - (int)_DAT_00027360) + 1;
          puVar9 = (undefined4 *)
                   (sVar1 * 10 +
                   iVar6 * ((int)(short)(sVar3 + -2) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          puVar8 = (undefined4 *)
                   (sVar1 * 10 +
                   iVar6 * ((int)sVar4 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
        }
      }
      for (sVar4 = 0; sVar4 < sVar5; sVar4 = sVar4 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) * -(int)_DAT_00027362 * 10
                          + _DAT_00027368 + _DAT_00027360 * -10 + sVar4 * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 3:
      sVar3 = _DAT_0002734c;
      while (sVar3 = sVar3 + -1, sVar1 = sVar4, 0 < sVar3) {
        while (sVar2 = sVar1 + -1, 0 < sVar2) {
          iVar6 = ((int)_DAT_00027364 - (int)_DAT_00027360) + 1;
          puVar9 = (undefined4 *)
                   ((sVar3 + -1) * 10 +
                   iVar6 * ((int)(short)(sVar1 + -2) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          puVar8 = (undefined4 *)
                   (sVar3 * 10 +
                   iVar6 * ((int)sVar2 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
          sVar1 = sVar2;
        }
      }
      for (sVar3 = 0; sVar3 < sVar4; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                         _DAT_00027360 * -10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      for (sVar4 = 0; sVar4 < sVar5; sVar4 = sVar4 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) * -(int)_DAT_00027362 * 10
                          + _DAT_00027368 + _DAT_00027360 * -10 + sVar4 * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 4:
      sVar3 = _DAT_0002734c;
      while (sVar3 = sVar3 + -1, 0 < sVar3) {
        for (sVar1 = 0; sVar1 < sVar4; sVar1 = sVar1 + 1) {
          iVar6 = (((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                  ((int)sVar1 - (int)_DAT_00027362) * 10 + _DAT_00027368 + _DAT_00027360 * -10;
          puVar9 = (undefined4 *)((sVar3 + -1) * 10 + iVar6);
          puVar8 = (undefined4 *)(sVar3 * 10 + iVar6);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
        }
      }
      for (sVar3 = 0; sVar3 < sVar4; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                         _DAT_00027360 * -10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 5:
      sVar3 = _DAT_0002734c;
      while (sVar3 = sVar3 + -1, 0 < sVar3) {
        for (sVar1 = 0; (int)sVar1 < sVar4 + -1; sVar1 = sVar1 + 1) {
          iVar6 = ((int)_DAT_00027364 - (int)_DAT_00027360) + 1;
          puVar9 = (undefined4 *)
                   ((sVar3 + -1) * 10 +
                   iVar6 * ((int)(short)(sVar1 + 1) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          puVar8 = (undefined4 *)
                   (sVar3 * 10 +
                   iVar6 * ((int)sVar1 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
        }
      }
      for (sVar3 = 0; sVar3 < sVar4; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                         _DAT_00027360 * -10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      for (sVar3 = 0; sVar3 < sVar5; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)(short)(sVar4 + -1) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                          _DAT_00027360 * -10 + sVar3 * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 6:
      for (sVar3 = 0; (int)sVar3 < sVar4 + -1; sVar3 = sVar3 + 1) {
        for (sVar1 = 0; sVar1 < sVar5; sVar1 = sVar1 + 1) {
          iVar6 = ((int)_DAT_00027364 - (int)_DAT_00027360) + 1;
          puVar9 = (undefined4 *)
                   (sVar1 * 10 +
                   iVar6 * ((int)(short)(sVar3 + 1) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          puVar8 = (undefined4 *)
                   (sVar1 * 10 +
                   iVar6 * ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                   _DAT_00027360 * -10);
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 2);
        }
      }
      for (sVar3 = 0; sVar3 < sVar5; sVar3 = sVar3 + 1) {
        pbVar7 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                          ((int)(short)(sVar4 + -1) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                          _DAT_00027360 * -10 + sVar3 * 10);
        *pbVar7 = *pbVar7 & 0x7f;
      }
      break;
    case 7:
      FUN_00005a32();
    }
    sVar5 = sVar5 * 0x28;
    if (DAT_000150fa != '\0') {
      switch(param_1._0_2_) {
      case 0:
        FUN_00002380(0x140b4,0x28,sVar5 + -0x28,0x140b4,0,0);
        break;
      case 1:
        FUN_00002380(0x140b4,0x28,sVar5 + -0x28,0x140b4,0x280000,0);
        break;
      case 2:
        FUN_00002380(0x140b4,0,sVar5,0x140b4,0x280000,0);
        break;
      case 3:
        FUN_00002380(0x140b4,0,sVar5 + -0x28,0x140b4,0x280028,0);
        break;
      case 4:
        FUN_00002380(0x140b4,0,sVar5 + -0x28,0x140b4,0x28,0);
        break;
      case 5:
        FUN_00002380(0x140b4,0x280000,sVar5 + -0x28,0x140b4,0x28,0);
        break;
      case 6:
        FUN_00002380(0x140b4,0x280000,sVar5,0x140b4,0,0);
        break;
      case 7:
        FUN_00002380(0x140b4,0x280028,sVar5 + -0x28,0x140b4,0,0);
      }
    }
  }
  return;
}



// Function: FUN_00005218 at 00005218
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005218(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00005768 at 00005768
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005768(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00005a32 at 00005a32
// Size: 426 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005a32(void)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  for (sVar3 = 0; (int)sVar3 < _DAT_0002734a + -1; sVar3 = sVar3 + 1) {
    for (sVar4 = 0; (int)sVar4 < _DAT_0002734c + -1; sVar4 = sVar4 + 1) {
      iVar2 = ((int)_DAT_00027364 - (int)_DAT_00027360) + 1;
      puVar6 = (undefined4 *)
               ((sVar4 + 1) * 10 +
               iVar2 * ((int)(short)(sVar3 + 1) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
               _DAT_00027360 * -10);
      puVar5 = (undefined4 *)
               (sVar4 * 10 +
               iVar2 * ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 + _DAT_00027360 * -10)
      ;
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar6 + 2);
    }
  }
  for (sVar3 = 0; sVar3 < _DAT_0002734c; sVar3 = sVar3 + 1) {
    pbVar1 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                      ((int)(short)(_DAT_0002734a + -1) - (int)_DAT_00027362) * 10 + _DAT_00027368 +
                      _DAT_00027360 * -10 + sVar3 * 10);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  for (sVar3 = 0; sVar3 < _DAT_0002734a; sVar3 = sVar3 + 1) {
    pbVar1 = (byte *)((((int)_DAT_00027364 - (int)_DAT_00027360) + 1) *
                      ((int)sVar3 - (int)_DAT_00027362) * 10 + _DAT_00027368 + _DAT_00027360 * -10 +
                     (_DAT_0002734c + -1) * 10);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  return;
}



