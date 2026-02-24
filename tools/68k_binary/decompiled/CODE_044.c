// Warlords II - Decompiled 68k Code
// Segment: CODE_044
// Decompiled by Ghidra 12.0.3

// Function: FUN_000001a4 at 000001a4
// Size: 1476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000001a4(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar6;
  short sVar5;
  undefined4 uVar4;
  short sVar7;
  undefined4 extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  char *pcVar8;
  int *extraout_A0_02;
  undefined1 extraout_A0b;
  int extraout_A0_03;
  int extraout_A0_04;
  char *pcVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined1 auStack_320 [256];
  undefined4 local_220;
  undefined4 local_21c;
  char acStack_218 [20];
  undefined1 local_204 [256];
  undefined1 local_104 [256];
  
  *(undefined1 *)(param_1 + 0x29) = 2;
  if (*(int *)((int)param_1 + 0x1aa) == 0) {
    uVar10 = 0x5a;
    (**(code **)(*_DAT_000257ee + 0x6c))
              ((short)_DAT_000257ee,(char)*(undefined4 *)((int)param_1 + 0x26),(short)param_1,2);
    *(undefined4 *)((int)param_1 + 0x1aa) = extraout_A0;
    (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x26c))();
  }
  else {
    uVar10 = 0x5a;
    cVar6 = func_0x000038e0((short)*(undefined4 *)((int)param_1 + 0x1aa) + 0x2a,0x5a);
    if (cVar6 != '\0') {
      (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x1bc))
                ((short)*(int **)((int)param_1 + 0x1aa),0x5a);
    }
  }
  (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x334))
            ((short)*(int **)((int)param_1 + 0x1aa),uVar10);
  if (_DAT_000288ac == 0) {
    local_220 = 0;
    local_21c = 0xffff8300;
    (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x1bc))
              ((short)*(int **)((int)param_1 + 0x1aa),(char)&local_220);
    uVar4 = (**(code **)(*param_1 + 0x26c))();
  }
  else {
    for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
      (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x188))
                ((short)*(int **)((int)param_1 + 0x1aa),(char)sVar5 + '0');
      (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x188))
                ((short)*(int **)((int)param_1 + 0x1aa),(char)sVar5 + '0');
      if ((extraout_A0_00 != 0) && (extraout_A0_01 != (int *)0x0)) {
        uVar10 = (undefined1)((uint)extraout_A0_00 >> 0x10);
        uVar12 = (undefined2)extraout_A0_00;
        if (sVar5 < _DAT_00027cc2) {
          sVar7 = (short)*(char *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 4);
          if ((sVar7 == 0x1c) &&
             (*(short *)(*(char *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 10) * 2 + _DAT_0002884c +
                        0x594) == 1)) {
            sVar7 = 0x1d;
          }
          func_0x00004768(uVar12,(char)*(undefined2 *)(_DAT_0002884c + 0x110));
          uVar11 = 0x82;
          func_0x00004770(uVar12,0,(short)*(char *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 8),uVar10,
                          sVar7);
          uVar10 = 0x96;
          func_0x00004778(uVar12,2,uVar11);
          if (*(int *)((int)param_1 + 0x36) < 0x71) {
            uVar12 = (undefined2)
                     ((uint)(*(short *)(&DAT_00027cb0 + sVar5 * 2) * 8 + 0x27c50) >> 0x10);
          }
          else {
            uVar12 = (undefined2)
                     ((uint)(*(short *)(&DAT_00027cb0 + sVar5 * 2) * 8 + 0x27c40) >> 0x10);
          }
          func_0x00003b70(extraout_A0_01,uVar12,0x24,uVar10);
          (**(code **)(*extraout_A0_01 + 0x334))();
        }
        else {
          uVar13 = 0xffff;
          func_0x00004768(uVar12,(char)*(undefined2 *)(_DAT_0002884c + 0x110));
          uVar11 = 0x38;
          func_0x00004770(uVar12,0,0,uVar10,uVar13);
          uVar10 = 0x4c;
          func_0x00004778(uVar12,0,uVar11);
          (**(code **)(*extraout_A0_01 + 0x334))((short)extraout_A0_01,uVar10);
        }
      }
    }
    func_0x00002bf0(0x7c70,0xa0);
    if (_DAT_000288ac == 0) {
      pcVar8 = acStack_218;
      pcVar9 = &DAT_0001c85b;
      do {
        cVar6 = *pcVar9;
        *pcVar8 = cVar6;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
    }
    else {
      func_0x000076d0((char)acStack_218,0xc856,(char)_DAT_000288f6);
    }
    (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x188))
              ((short)*(int **)((int)param_1 + 0x1aa),0x65);
    if (extraout_A0_02 != (int *)0x0) {
      local_104[0] = 0;
      uVar10 = (undefined1)((uint)local_104 >> 0x10);
      uVar12 = (undefined2)((uint)extraout_A0_02 >> 0x10);
      uVar13 = SUB42(extraout_A0_02,0);
      (**(code **)(*extraout_A0_02 + 0x3d4))(uVar13,(char)local_104);
      func_0x00007320((short)auStack_320,(char)acStack_218,uVar12,uVar10);
      (**(code **)(*extraout_A0_02 + 1000))(uVar13,extraout_A0b);
      local_204[0] = 0;
      (**(code **)(*extraout_A0_02 + 0x3d4))(uVar13,(short)local_204);
      sVar5 = FUN_00001cf8((short)local_204,(short)local_104);
      if (sVar5 != 0) {
        (**(code **)(*extraout_A0_02 + 0x26c))();
      }
    }
    (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x188))
              ((short)*(int **)((int)param_1 + 0x1aa),0x75);
    if (extraout_A0_03 != 0) {
      uVar12 = 0x24;
      sVar5 = FUN_0000227c(1);
      func_0x00003b70((short)extraout_A0_03,(char)((uint)(sVar5 * 8 + 0x27c60) >> 0x10),uVar12);
    }
    bVar1 = true;
    bVar2 = false;
    bVar3 = false;
    for (sVar5 = 0; sVar5 < _DAT_00027cc2; sVar5 = sVar5 + 1) {
      if (*(short *)(&DAT_00027ca0 + sVar5 * 2) != 0) {
        if (*(char *)(_DAT_00028864 + 1 +
                     (short)*(char *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 4) * 6) != '\0') {
          bVar2 = true;
        }
        if (*(char *)(_DAT_00028864 + 2 +
                     (short)*(char *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 4) * 6) != '\0') {
          bVar3 = true;
        }
        if ((*(ushort *)(*(int *)(&DAT_00027c70 + sVar5 * 4) + 0xc) & 0x1000) == 0) {
          bVar1 = false;
        }
      }
    }
    (**(code **)(**(int **)((int)param_1 + 0x1aa) + 0x188))
              ((short)*(int **)((int)param_1 + 0x1aa),0x20);
    uVar4 = 0;
    if (extraout_A0_04 != 0) {
      uVar10 = (undefined1)_DAT_00027cc2;
      sVar5 = func_0x00004988(0x7c70,0xa0);
      uVar12 = (undefined2)extraout_A0_04;
      if (sVar5 == 0) {
        if (bVar1) {
          uVar4 = func_0x00003b70(uVar12,2,0x24,uVar10);
        }
        else if ((bVar2) && (bVar3)) {
          uVar4 = func_0x00003b70(uVar12,2,0x24,uVar10);
        }
        else if (bVar2) {
          uVar4 = func_0x00003b70(uVar12,2,0x24,uVar10);
        }
        else if (bVar3) {
          uVar4 = func_0x00003b70(uVar12,2,0x24,uVar10);
        }
        else {
          uVar4 = func_0x00003b70(uVar12,2,0x24,uVar10);
        }
      }
      else {
        uVar4 = func_0x00003b70(uVar12,2,0x24,uVar10);
      }
    }
  }
  return uVar4;
}



// Function: FUN_00000768 at 00000768
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000768(void)

{
  undefined1 local_6 [2];
  
  if (_DAT_000288ac == 0) {
    FUN_000022c0();
  }
  else {
    func_0x00002b28(*(undefined2 *)(_DAT_000288ac + 2),local_6);
    func_0x00002b38(2,0);
    if (_DAT_000288f4 == 0) {
      _DAT_000288f8 = 1;
      _DAT_000288b4 = _DAT_000288ac;
    }
  }
  return;
}



// Function: FUN_000007c8 at 000007c8
// Size: 114 bytes

void FUN_000007c8(undefined2 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if (param_2 == 0x67726f75) {
      FUN_000025f6();
    }
    else if (param_2 == 0x696e666f) {
      FUN_000025f6();
    }
    else {
      func_0x00005308(param_1,(short)param_2);
    }
  }
  else {
    FUN_000025f6();
  }
  return;
}



// Function: FUN_0000083a at 0000083a
// Size: 168 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000083a(int param_1,uint param_2,undefined4 *param_3)

{
  short sVar1;
  int *extraout_A0;
  undefined4 local_c;
  undefined1 auStack_8 [4];
  
  sVar1 = 0x10;
  if ((0x61726d2f < param_2) && (param_2 < (int)_DAT_00027cc2 + 0x61726d30U)) {
    sVar1 = 0x12;
  }
  local_c = CONCAT22(*(undefined2 *)(sVar1 * 0x1c + 0x140aa),*(undefined2 *)(sVar1 * 0x1c + 0x140a8)
                    );
  *param_3 = local_c;
  if (param_2 == 0x696e666f) {
    (**(code **)(**(int **)(param_1 + 8) + 0x188))(*(int **)(param_1 + 8),0x696e666f);
    FUN_00001bf0(extraout_A0);
    (**(code **)(*extraout_A0 + 0x1d8))();
    func_0x00007208(auStack_8);
    func_0x00007218(auStack_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000009ea at 000009ea
// Size: 294 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000009ea(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4,short *param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  int *extraout_A0;
  undefined4 local_106 [13];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 auStack_5a [86];
  
  uVar1 = (**(code **)(*param_1 + 0x2dc))((short)param_1,param_4,param_5,param_6,param_7);
  uVar2 = (**(code **)(*param_1 + 0x2d8))();
  (**(code **)(*param_1 + 0x2d4))((short)param_1,uVar1);
  (**(code **)(*_DAT_000266a8 + 0x210))((short)_DAT_000266a8,uVar2);
  if (param_1[0x29] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0xa0))();
  cVar3 = (**(code **)(*extraout_A0 + 0x1d8))();
  if (cVar3 != '\0') {
    FUN_00001c90(auStack_5a);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = 5;
  *(int *)(param_4 + 1) = param_1[0x29];
  cVar3 = (**(code **)(*param_1 + 0x1d8))();
  if ((cVar3 != '\0') && (param_3 != (int *)0x0)) {
    local_d0 = *(undefined4 *)(*param_3 + 2);
    local_cc = *(undefined4 *)(*param_3 + 6);
    *param_6 = local_d0;
    param_6[1] = local_cc;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      (**(code **)(*param_1 + 0x144))(param_1,local_106,param_2);
      *(undefined4 *)param_5 = local_106[0];
    }
  }
  return;
}



// Function: FUN_00000d38 at 00000d38
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000d38(int param_1)

{
  if (*(char *)(param_1 + 0xae) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000dd6 at 00000dd6
// Size: 126 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000dd6(undefined4 param_1,int *param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short local_10;
  short local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  sVar3 = func_0x000049e0();
  if (sVar3 != 0) {
    local_c = 0;
    local_a = 0;
    local_8 = 0x28;
    local_6 = 0x28;
    local_10 = (short)(iVar1 / 0x28) * 0x28;
    local_e = (short)(iVar2 / 0x28) * 0x28;
    func_0x00007278((short)&local_c,&local_10);
    func_0x00007258(&local_c,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e64 at 00000e64
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e64(int param_1)

{
  if (*(char *)(param_1 + 0x98) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000f02 at 00000f02
// Size: 162 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f02(int param_1,int *param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int *)(param_1 + 0x36) < 0x71) {
    sVar3 = 1;
  }
  else {
    sVar3 = 2;
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  sVar4 = func_0x000049e0();
  if (sVar4 != 0) {
    local_c = sVar3 * -2;
    local_8 = sVar3 * 2;
    local_6 = sVar3 * 2;
    local_10 = (short)(iVar1 / (int)sVar3) * sVar3;
    local_e = (short)(iVar2 / (int)sVar3) * sVar3;
    local_a = local_c;
    func_0x00007278((short)&local_c,&local_10);
    func_0x00007258(&local_c,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000fb4 at 00000fb4
// Size: 320 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000fb4(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4,short *param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined4 local_108 [14];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 auStack_4e [74];
  
  uVar1 = (**(code **)(*param_1 + 0x2dc))((short)param_1,param_4,param_5,param_6,param_7);
  uVar2 = (**(code **)(*param_1 + 0x2d8))();
  (**(code **)(*param_1 + 0x2d4))((short)param_1,uVar1);
  (**(code **)(*_DAT_000266a8 + 0x210))((short)_DAT_000266a8,uVar2);
  if (*(int *)((int)param_1 + 0x9a) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0xa0))();
  cVar3 = (**(code **)(*extraout_A0 + 0x1d8))();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0xa0))();
    (**(code **)(*extraout_A0_00 + 0x3c4))();
    FUN_00001c90(auStack_4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = 5;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)((int)param_1 + 0x9a);
  cVar3 = (**(code **)(*param_1 + 0x1d8))();
  if ((cVar3 != '\0') && (param_3 != (int *)0x0)) {
    local_d0 = *(undefined4 *)(*param_3 + 2);
    local_cc = *(undefined4 *)(*param_3 + 6);
    *param_6 = local_d0;
    param_6[1] = local_cc;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      (**(code **)(*param_1 + 0x144))(param_1,local_108,param_2);
      *(undefined4 *)param_5 = local_108[0];
    }
  }
  return;
}



// Function: FUN_00001382 at 00001382
// Size: 134 bytes

void FUN_00001382(undefined2 param_1)

{
  undefined1 auStack_70 [50];
  undefined1 auStack_3e [50];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_c = 0;
  local_a = 0;
  local_8 = 0x4b;
  local_6 = 0x100;
  func_0x00002378(0x14274,&local_c,&DAT_00025b56,0);
  FUN_00001bda(param_1,auStack_3e,auStack_70);
  func_0x00002a50(0xe0,0xf9);
  func_0x00002ac0(0x78000b,auStack_3e);
  func_0x00002ac0(0x780023,auStack_70);
  return;
}



// Function: FUN_00001408 at 00001408
// Size: 260 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001408(undefined4 param_1,undefined4 *param_2)

{
  short sVar1;
  char cVar2;
  undefined4 local_8;
  
  sVar1 = func_0x000049e0();
  if (sVar1 == 0) {
    *param_2 = _DAT_00025b56;
  }
  else {
    cVar2 = *(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18)
                      + _DAT_0002884c + 0x711);
    if ((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) << 3) >> 0x1b !=
        0) {
      cVar2 = '\0';
    }
    sVar1 = 0x10;
    if (((-1 < *(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) << 3) ||
        (((*(short *)(_DAT_0002884c + 0x12a) == 0 &&
          ((ushort)((uint)(*(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) <<
                          4) >> 0x1c) != _DAT_00028846)) &&
         ((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x20) == 0))))
       && (cVar2 == '\t')) {
      sVar1 = 0x11;
    }
    local_8 = CONCAT22(*(undefined2 *)(sVar1 * 0x1c + 0x140aa),
                       *(undefined2 *)(sVar1 * 0x1c + 0x140a8));
    *param_2 = local_8;
  }
  return;
}



// Function: FUN_0000150c at 0000150c
// Size: 346 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000150c(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 extraout_A0w;
  int iVar2;
  byte local_104 [256];
  
  if ((param_1._0_2_ < 1) || (4 < param_1._0_2_)) {
    if ((param_1._0_2_ < 5) || (0x18 < param_1._0_2_)) {
      if ((param_1._0_2_ < 0x21) || (0x24 < param_1._0_2_)) {
        if ((param_1._0_2_ < 0x25) || (0x2c < param_1._0_2_)) {
          if ((0x2c < param_1._0_2_) && (param_1._0_2_ < 0x48)) {
            func_0x00003cd0();
          }
        }
        else {
          func_0x00002f90();
        }
      }
      else {
        uVar1 = func_0x00006d98((short)_DAT_000297f4);
        local_104[0] = 0;
        func_0x000026a8(uVar1,(short)local_104);
        if (local_104[(short)(ushort)local_104[0]] == 0xffffffc9) {
          local_104[0] = local_104[0] - 1;
        }
        func_0x00005358();
        func_0x000072f8((short)local_104);
        func_0x00005350(0x5ac8,extraout_A0w);
      }
    }
    else {
      func_0x00004760();
    }
  }
  else {
    iVar2 = param_1._0_2_ + -1 + _DAT_00015dee * 0x42 + _DAT_0002884c;
    if (-1 < *(char *)(iVar2 + 0x15da)) {
      func_0x00005320((short)*(char *)(iVar2 + 0x15de),(short)*(char *)(iVar2 + 0x15ea));
    }
  }
  return;
}



// Function: FUN_00001666 at 00001666
// Size: 60 bytes

void FUN_00001666(undefined4 param_1,undefined4 param_2)

{
  func_0x00004970();
  if (param_1._0_2_ != 0) {
    func_0x00003ae0();
  }
  if (param_1._2_2_ != 0) {
    func_0x00006e70(0x10001,0);
  }
  if (param_2._0_2_ != 0) {
    FUN_00002224();
  }
  return;
}



// Function: FUN_000016a2 at 000016a2
// Size: 852 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000016a2(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *extraout_A0;
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
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    FUN_00001ad0();
    (**(code **)(*param_1 + 0x188))(param_1,0x68656c70);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6d6f7665);
    if (extraout_A0_00 != (int *)0x0) {
      (**(code **)(*extraout_A0_00 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6e657874);
    if (extraout_A0_01 != (int *)0x0) {
      (**(code **)(*extraout_A0_01 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6c656176);
    if (extraout_A0_02 != (int *)0x0) {
      (**(code **)(*extraout_A0_02 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x67756172);
    if (extraout_A0_03 != (int *)0x0) {
      (**(code **)(*extraout_A0_03 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x64657365);
    if (extraout_A0_04 != (int *)0x0) {
      (**(code **)(*extraout_A0_04 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x70617468);
    if (extraout_A0_05 != (int *)0x0) {
      (**(code **)(*extraout_A0_05 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x64656c65);
    if (extraout_A0_06 != (int *)0x0) {
      (**(code **)(*extraout_A0_06 + 0x3a0))();
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x63656e74);
    if (extraout_A0_07 != (int *)0x0) {
      (**(code **)(*extraout_A0_07 + 0x3a0))();
    }
    for (sVar2 = 0; sVar2 < 8; sVar2 = sVar2 + 1) {
      (**(code **)(*param_1 + 0x188))(param_1,sVar2 + 0x73637230);
      if (extraout_A0_08 != (int *)0x0) {
        (**(code **)(*extraout_A0_08 + 0x3a0))();
      }
    }
    (**(code **)(*param_1 + 0x188))(param_1,0x6469706c);
    uVar1 = 0;
    if (extraout_A0_09 != (int *)0x0) {
      sVar2 = 0x3ef;
      if ((*(short *)(_DAT_0002884c + 0x11c) != 0) &&
         ((*(byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                    (int)*(short *)(_DAT_0002884c + 0x110)) & 0x10) != 0)) {
        if ((*(byte *)(*(short *)(_DAT_0002884c + 0x110) * 8 + _DAT_0002884c + 0x1582 +
                      (int)*(short *)(_DAT_0002884c + 0x110)) & 0x20) == 0) {
          sVar2 = 1;
        }
        else {
          sVar2 = 2;
        }
        sVar2 = sVar2 + 0x3ef;
      }
      if (sVar2 != *(short *)((int)extraout_A0_09 + 0xa6)) {
        (**(code **)(*extraout_A0_09 + 0x3d8))();
      }
      uVar1 = (**(code **)(*extraout_A0_09 + 0x3a0))();
    }
  }
  return uVar1;
}



// Function: FUN_000019f6 at 000019f6
// Size: 218 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000019f6(void)

{
  if (((_DAT_000288ac == (short *)0x0) || (_DAT_000288ac[9] < 0)) || (_DAT_000288ac[10] < 0)) {
    if (_DAT_000288ac != (short *)0x0) {
      func_0x00003af8(*(undefined4 *)_DAT_000288ac);
    }
  }
  else if (((*_DAT_000288ac < *(short *)(_DAT_0002884c + 0x178)) ||
           (*(short *)(_DAT_0002884c + 0x17c) < *_DAT_000288ac)) ||
          ((_DAT_000288ac[1] < *(short *)(_DAT_0002884c + 0x176) ||
           (*(short *)(_DAT_0002884c + 0x17a) < _DAT_000288ac[1])))) {
    func_0x00003af8(*(undefined4 *)_DAT_000288ac);
  }
  else if ((*(short *)(_DAT_0002884c + 0x17e) == _DAT_000288ac[9]) &&
          (*(short *)(_DAT_0002884c + 0x180) == _DAT_000288ac[10])) {
    func_0x00003af8(*(undefined4 *)_DAT_000288ac);
  }
  else {
    func_0x00003af8(*(undefined4 *)(_DAT_000288ac + 9));
  }
  func_0x00004970();
  return;
}



// Function: FUN_00001ad0 at 00001ad0
// Size: 266 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001ad0(void)

{
  short sVar1;
  short sVar3;
  short sVar4;
  undefined4 uVar2;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short *psVar9;
  short local_6;
  
  local_6 = 10000;
  sVar5 = *(short *)(_DAT_0002884c + 0x182);
  sVar7 = -1;
  sVar8 = 10000;
  sVar6 = -1;
  while (sVar1 = sVar5 + -1, sVar5 != 0) {
    psVar9 = (short *)(sVar1 * 0x16 + _DAT_00028854);
    sVar5 = sVar1;
    if ((((*(char *)(_DAT_0002884c + 0x111) == *(char *)((int)psVar9 + 5)) &&
         (sVar4 = *psVar9, -1 < sVar4)) && ((psVar9[6] & 1U) != 0)) && ((psVar9[6] & 0x40U) == 0)) {
      sVar3 = func_0x000076d8((int)*(short *)(_DAT_00028854 + 2 + sVar1 * 0x16) - (int)_DAT_00027e84
                             );
      sVar4 = func_0x000076d8((int)sVar4 - (int)_DAT_00027e82);
      sVar3 = sVar3 + sVar4;
      if (sVar3 == 0) {
        sVar3 = 9000;
      }
      if ((*(ushort *)(_DAT_00028854 + 0xc + sVar1 * 0x16) & 0x200) == 0) {
        if (sVar3 < sVar8) {
          sVar8 = sVar3;
          sVar6 = sVar1;
        }
      }
      else if (sVar3 < local_6) {
        sVar7 = sVar1;
        local_6 = sVar3;
      }
    }
  }
  if (sVar6 == -1) {
    if (sVar7 == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_00001bda at 00001bda
// Size: 20 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bda(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar9;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar3;
  undefined2 uVar7;
  undefined2 uVar8;
  short sVar10;
  int *extraout_A0;
  char *pcVar11;
  char *pcVar12;
  short sStack_6c;
  short sStack_6a;
  char acStack_68 [50];
  char acStack_36 [50];
  
  bVar2 = false;
  FUN_00002810((short)*(undefined4 *)(*(int *)(_DAT_000297f4 + 0x80) + 0x156));
  if (extraout_A0 == (int *)0x0) {
    *param_3 = '\0';
    *param_2 = '\0';
  }
  else {
    uVar9 = (**(code **)(*extraout_A0 + 0x84))();
    sVar4 = func_0x00002aa0();
    sVar5 = func_0x00002aa0(uVar9);
    sVar6 = func_0x00002aa0();
    sVar10 = 0;
    do {
      FUN_00002820((short)extraout_A0,(short)&sStack_6c,0x68);
      if ((sVar5 == sStack_6c) && (sVar6 == sStack_6a)) {
        bVar2 = true;
      }
      sVar10 = sVar10 + 1;
    } while ((!bVar2) && (sVar10 < sVar4));
    FUN_00002818((short)extraout_A0);
    if (bVar2) {
      pcVar11 = param_2;
      pcVar12 = acStack_68;
      do {
        cVar1 = *pcVar12;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      pcVar11 = param_3;
      pcVar12 = acStack_36;
      do {
        cVar1 = *pcVar12;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar11 = param_2;
      pcVar12 = &DAT_00015455;
      do {
        cVar1 = *pcVar12;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      pcVar11 = param_3;
      pcVar12 = &DAT_00015455;
      do {
        cVar1 = *pcVar12;
        *pcVar11 = cVar1;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
    }
    iVar3 = func_0x00007710((short)param_2,0x55);
    if ((iVar3 == 0) && (iVar3 = func_0x00007710((short)param_3,0x55), iVar3 == 0)) {
      uVar9 = (undefined1)sVar5;
      uVar7 = func_0x00002aa0();
      uVar8 = func_0x00002aa0(uVar9);
      func_0x000076d0(param_2,0x1544e,uVar7,uVar8);
    }
  }
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 159 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  char cVar1;
  undefined1 uVar6;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar2;
  short unaff_D5w;
  short sVar7;
  undefined1 *in_A0;
  int *extraout_A0;
  char *pcVar8;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  
  *in_A0 = *in_A0;
  FUN_00002810((short)*(undefined4 *)(*(int *)(_DAT_000297f4 + 0x80) + 0x156));
  if (extraout_A0 == (int *)0x0) {
    *unaff_A4 = '\0';
    *unaff_A3 = '\0';
  }
  else {
    uVar6 = (**(code **)(*extraout_A0 + 0x84))();
    sVar3 = func_0x00002aa0();
    sVar4 = func_0x00002aa0(uVar6);
    sVar5 = func_0x00002aa0();
    sVar7 = 0;
    do {
      FUN_00002820((short)extraout_A0,(short)unaff_A6 + -0x68,0x68);
      if ((sVar4 == *(short *)(unaff_A6 + -0x68)) && (sVar5 == *(short *)(unaff_A6 + -0x66))) {
        unaff_D5w = 1;
      }
      sVar7 = sVar7 + 1;
    } while ((unaff_D5w == 0) && (sVar7 < sVar3));
    FUN_00002818((short)extraout_A0);
    if (unaff_D5w == 0) {
      pcVar8 = &DAT_00015455;
      do {
        cVar1 = *pcVar8;
        *unaff_A3 = cVar1;
        unaff_A3 = unaff_A3 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar8 = &DAT_00015455;
      do {
        cVar1 = *pcVar8;
        *unaff_A4 = cVar1;
        unaff_A4 = unaff_A4 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar8 = (char *)(unaff_A6 + -100);
      do {
        cVar1 = *pcVar8;
        *unaff_A3 = cVar1;
        unaff_A3 = unaff_A3 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar8 = (char *)(unaff_A6 + -0x32);
      do {
        cVar1 = *pcVar8;
        *unaff_A4 = cVar1;
        unaff_A4 = unaff_A4 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    iVar2 = func_0x00007710();
    if ((iVar2 == 0) && (iVar2 = func_0x00007710(), iVar2 == 0)) {
      uVar6 = (undefined1)sVar4;
      func_0x00002aa0();
      func_0x00002aa0(uVar6);
      func_0x000076d0();
    }
  }
  return;
}



// Function: FUN_00001c90 at 00001c90
// Size: 104 bytes

void FUN_00001c90(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *unaff_A3;
  char *unaff_A4;
  int unaff_A6;
  bool in_ZF;
  
  if (in_ZF) {
    pcVar3 = &DAT_00015455;
    do {
      cVar1 = *pcVar3;
      *unaff_A3 = cVar1;
      unaff_A3 = unaff_A3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = &DAT_00015455;
    do {
      cVar1 = *pcVar3;
      *unaff_A4 = cVar1;
      unaff_A4 = unaff_A4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar3 = (char *)(unaff_A6 + -100);
    do {
      cVar1 = *pcVar3;
      *unaff_A3 = cVar1;
      unaff_A3 = unaff_A3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)(unaff_A6 + -0x32);
    do {
      cVar1 = *pcVar3;
      *unaff_A4 = cVar1;
      unaff_A4 = unaff_A4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  iVar2 = func_0x00007710();
  if ((iVar2 == 0) && (iVar2 = func_0x00007710(), iVar2 == 0)) {
    func_0x00002aa0();
    func_0x00002aa0();
    func_0x000076d0();
  }
  return;
}



// Function: FUN_00001cf8 at 00001cf8
// Size: 32 bytes

void FUN_00001cf8(void)

{
  func_0x00002aa0();
  func_0x000076d0();
  return;
}



// Function: FUN_00001d18 at 00001d18
// Size: 18 bytes

void FUN_00001d18(void)

{
  func_0x000076d0();
  return;
}



// Function: FUN_00001d2a at 00001d2a
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d2a(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int *extraout_A0;
  int extraout_A0_00;
  char *pcVar6;
  undefined2 uVar7;
  short local_6c;
  short local_6a;
  char acStack_68 [50];
  char acStack_36 [50];
  
  bVar3 = false;
  uVar7 = (undefined2)*(undefined4 *)(*(int *)(_DAT_000297f4 + 0x80) + 0x156);
  FUN_00002810(uVar7);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x84))();
    sVar4 = func_0x00002aa0();
    sVar2 = 0;
    do {
      sVar5 = sVar2;
      FUN_00002820((short)extraout_A0,(short)&local_6c,0x68);
      if ((local_6c == param_1._0_2_) && (local_6a == param_1._2_2_)) {
        bVar3 = true;
      }
      sVar2 = sVar5 + 1;
    } while ((!bVar3) && (sVar2 < sVar4));
    FUN_00002818((short)extraout_A0);
    if (bVar3) {
      FUN_00002810(uVar7);
      if (extraout_A0_00 != 0) {
        pcVar6 = acStack_68;
        do {
          cVar1 = *param_2;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          param_2 = param_2 + 1;
        } while (cVar1 != '\0');
        pcVar6 = acStack_36;
        do {
          cVar1 = *param_3;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          param_3 = param_3 + 1;
        } while (cVar1 != '\0');
        FUN_00002838((short)extraout_A0_00,sVar5 * 0x68 + 2);
        FUN_00002830(extraout_A0_00,(short)&local_6c,0x68);
        FUN_00002818((short)extraout_A0_00);
      }
    }
  }
  return;
}



// Function: FUN_00001e36 at 00001e36
// Size: 106 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001e36(void)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar6;
  short sVar7;
  int iVar5;
  short sVar8;
  int *extraout_A0;
  short *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  undefined2 extraout_A0w;
  int *extraout_A0_03;
  undefined2 extraout_A0w_00;
  int *extraout_A0_04;
  char *extraout_A0_05;
  int *extraout_A0_06;
  char *extraout_A0_07;
  short *psVar9;
  char *pcVar10;
  undefined1 auStack_34e [256];
  undefined1 auStack_24e [256];
  undefined1 auStack_14e [256];
  undefined1 auStack_4e [52];
  undefined2 uStack_1a;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  bVar4 = false;
  if ((_DAT_000288ac != (short *)0x0) &&
     (*(char *)((*(uint *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + *_DAT_000288ac * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\t')) {
    piVar1 = *(int **)(_DAT_000297f4 + 0x80);
    (**(code **)(*piVar1 + 0x118))();
    (**(code **)(*piVar1 + 0x20))((short)piVar1,0,0);
    FUN_00002810((char)*(undefined4 *)((int)piVar1 + 0x156));
    if (extraout_A0 != (int *)0x0) {
      uVar6 = (**(code **)(*extraout_A0 + 0x60))();
      _DAT_00027d22 = uVar6;
      FUN_00001ea0(uVar6);
      _DAT_00027d1e = extraout_A0_00;
      FUN_00002820(extraout_A0,(short)extraout_A0_00,uVar6);
      FUN_00002818((short)extraout_A0);
      sVar2 = *_DAT_00027d1e;
      _DAT_00027d26 = _DAT_00027d1e + 1;
      sVar7 = 0;
      do {
        sVar8 = sVar7;
        sVar7 = func_0x00002aa0();
        if ((sVar7 == *_DAT_000288ac) && (sVar7 = func_0x00002aa0(), sVar7 == _DAT_000288ac[1])) {
          bVar4 = true;
        }
        sVar7 = sVar8 + 1;
      } while ((!bVar4) && (sVar7 < sVar2));
      if (bVar4) {
        piStack_8 = (int *)0x0;
        uStack_1a = 0;
        uStack_18 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        puStack_14 = _DAT_00025f52;
        _DAT_00025f52 = auStack_4e;
        _DAT_00027d24 = sVar8;
        iVar5 = func_0x000076a8((char)auStack_4e);
        if (iVar5 == 0) {
          (**(code **)(*_DAT_000257ee + 0x68))((short)_DAT_000257ee,(short)((uint)piVar1 >> 0x10));
          piStack_8 = extraout_A0_01;
          FUN_00001bf0((char)extraout_A0_01);
          (**(code **)(*piStack_8 + 0x188))((short)piStack_8,0x6e31);
          if (extraout_A0_02 != (int *)0x0) {
            func_0x00007320((short)auStack_24e,(short)_DAT_00027d26 + 4 + _DAT_00027d24 * 0x68);
            (**(code **)(*extraout_A0_02 + 1000))((short)extraout_A0_02,extraout_A0w);
          }
          (**(code **)(*piStack_8 + 0x188))((short)piStack_8,0x32);
          if (extraout_A0_03 != (int *)0x0) {
            func_0x00007320((short)auStack_34e,(short)_DAT_00027d26 + 0x36 + _DAT_00027d24 * 0x68);
            (**(code **)(*extraout_A0_03 + 1000))((short)extraout_A0_03,extraout_A0w_00);
          }
          (**(code **)(*piStack_8 + 0x194))();
          iVar5 = (**(code **)(*piStack_8 + 0x40c))();
          (**(code **)(*piStack_8 + 0x198))();
          if (iVar5 == 0x6f6b2020) {
            auStack_14e[0] = 0;
            (**(code **)(*piStack_8 + 0x188))((short)piStack_8,0x31);
            if (extraout_A0_04 != (int *)0x0) {
              (**(code **)(*extraout_A0_04 + 0x3d4))((short)extraout_A0_04,(char)auStack_14e);
              func_0x000072f8((short)auStack_14e);
              psVar9 = _DAT_00027d26 + _DAT_00027d24 * 0x34 + 2;
              pcVar10 = extraout_A0_05;
              do {
                cVar3 = *pcVar10;
                *(char *)psVar9 = cVar3;
                psVar9 = (short *)((int)psVar9 + 1);
                pcVar10 = pcVar10 + 1;
              } while (cVar3 != '\0');
            }
            (**(code **)(*piStack_8 + 0x188))((short)piStack_8,0x32);
            if (extraout_A0_06 != (int *)0x0) {
              (**(code **)(*extraout_A0_06 + 0x3d4))((short)extraout_A0_06,(char)auStack_14e);
              func_0x000072f8((short)auStack_14e);
              psVar9 = _DAT_00027d26 + _DAT_00027d24 * 0x34 + 0x1b;
              pcVar10 = extraout_A0_07;
              do {
                cVar3 = *pcVar10;
                *(char *)psVar9 = cVar3;
                psVar9 = (short *)((int)psVar9 + 1);
                pcVar10 = pcVar10 + 1;
              } while (cVar3 != '\0');
            }
            FUN_000021ea((char)piStack_8);
          }
          (**(code **)(*piStack_8 + 0x3a0))();
          _DAT_00025f52 = puStack_14;
        }
        else {
          if (piStack_8 != (int *)0x0) {
            (**(code **)(*piStack_8 + 0x3a0))();
          }
          piStack_8 = (int *)0x0;
          func_0x00001c10((short)((uint)uStack_18 >> 0x10));
        }
      }
      else {
        FUN_00001d18((char)_DAT_00027d1e);
      }
    }
  }
  return;
}



// Function: FUN_00001ea0 at 00001ea0
// Size: 842 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ea0(void)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  short sVar5;
  int iVar4;
  short sVar6;
  short unaff_D4w;
  int *extraout_A0;
  short *extraout_A0_00;
  undefined4 extraout_A0_01;
  int *extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  char *extraout_A0_05;
  int *extraout_A0_06;
  char *extraout_A0_07;
  short *psVar7;
  int in_A1;
  char *pcVar8;
  int unaff_A3;
  int unaff_A6;
  short sStack00000004;
  short sStack00000008;
  short sStack0000000c;
  undefined1 uStack0000000e;
  
  (**(code **)(in_A1 + 0x20))();
  FUN_00002810((char)*(undefined4 *)(unaff_A3 + 0x156));
  if (extraout_A0 != (int *)0x0) {
    sStack0000000c = (short)((uint)extraout_A0 >> 0x10);
    uStack0000000e = (undefined1)((uint)extraout_A0 >> 8);
    sStack00000008 = 0;
    _DAT_00027d22 = (**(code **)(*extraout_A0 + 0x60))();
    sStack00000008 = _DAT_00027d22 >> 0xf;
    sVar2 = sStack00000008;
    sStack00000004 = 0;
    FUN_00001ea0();
    _DAT_00027d1e = extraout_A0_00;
    sStack00000004 = sVar2;
    FUN_00002820(extraout_A0);
    FUN_00002818((short)extraout_A0);
    sVar2 = *_DAT_00027d1e;
    _DAT_00027d26 = _DAT_00027d1e + 1;
    sVar5 = 0;
    do {
      sVar6 = sVar5;
      uStack0000000e = (undefined1)((ushort)_DAT_00027d26[sVar6 * 0x34] >> 8);
      sStack0000000c = 8000;
      sVar5 = func_0x00002aa0();
      if (sVar5 == *_DAT_000288ac) {
        uStack0000000e = (undefined1)((ushort)_DAT_00027d26[sVar6 * 0x34 + 1] >> 8);
        sStack0000000c = 0x1f60;
        sVar5 = func_0x00002aa0();
        if (sVar5 == _DAT_000288ac[1]) {
          unaff_D4w = 1;
        }
      }
    } while ((unaff_D4w == 0) && (sVar5 = sVar6 + 1, (short)(sVar6 + 1) < sVar2));
    if (unaff_D4w == 0) {
      sStack0000000c = (short)((uint)_DAT_00027d1e >> 0x10);
      uStack0000000e = (undefined1)((uint)_DAT_00027d1e >> 8);
      sStack00000008 = 0;
      FUN_00001d18();
    }
    else {
      _DAT_00027d24 = sVar6;
      *(undefined4 *)(unaff_A6 + -4) = 0;
      *(undefined2 *)(unaff_A6 + -0x16) = 0;
      *(undefined4 *)(unaff_A6 + -0x14) = 0;
      *(undefined4 *)(unaff_A6 + -0x10) = 0;
      *(undefined4 *)(unaff_A6 + -0xc) = 0;
      *(undefined4 *)(unaff_A6 + -8) = 0;
      *(int *)(unaff_A6 + -0x10) = _DAT_00025f52;
      _DAT_00025f52 = unaff_A6 + -0x4a;
      sStack0000000c = (short)((uint)(unaff_A6 + -0x4a) >> 0x10);
      uStack0000000e = (undefined1)((uint)(unaff_A6 + -0x4a) >> 8);
      sStack00000008 = 0;
      iVar4 = func_0x000076a8();
      if (iVar4 == 0) {
        sStack0000000c = (short)((uint)unaff_A3 >> 0x10);
        uStack0000000e = (undefined1)((uint)unaff_A3 >> 8);
        sStack00000008 = (short)_DAT_000257ee;
        sStack00000004 = 0x1fee;
        (**(code **)(*_DAT_000257ee + 0x68))();
        *(undefined4 *)(unaff_A6 + -4) = extraout_A0_01;
        sStack0000000c = (short)((uint)extraout_A0_01 >> 0x10);
        uStack0000000e = (undefined1)((uint)extraout_A0_01 >> 8);
        sStack00000008 = 0;
        FUN_00001bf0();
        sStack00000008 = 0x6c69;
        sStack00000004 = (short)((uint)*(int **)(unaff_A6 + -4) >> 0x10);
        (**(code **)(**(int **)(unaff_A6 + -4) + 0x188))();
        if (extraout_A0_02 != (int *)0x0) {
          uStack0000000e = 0;
          sStack0000000c = (short)_DAT_00027d26 + 4 + _DAT_00027d24 * 0x68;
          sStack00000008 = (short)unaff_A6 + -0x24a;
          sStack00000004 = 0x203c;
          func_0x00007320();
          sStack00000008 = (short)extraout_A0_02;
          sStack00000004 = 0x204c;
          (**(code **)(*extraout_A0_02 + 1000))();
        }
        sStack0000000c = 0x6c69;
        uStack0000000e = 0x6e;
        sStack00000008 = (short)((uint)*(int **)(unaff_A6 + -4) >> 0x10);
        sStack00000004 = 0;
        (**(code **)(**(int **)(unaff_A6 + -4) + 0x188))();
        if (extraout_A0_03 != (int *)0x0) {
          uStack0000000e = 0;
          sStack0000000c = (short)_DAT_00027d26 + 0x36 + _DAT_00027d24 * 0x68;
          sStack00000008 = (short)unaff_A6 + -0x34a;
          sStack00000004 = 0x208a;
          func_0x00007320();
          sStack00000008 = (short)extraout_A0_03;
          sStack00000004 = 0x209a;
          (**(code **)(*extraout_A0_03 + 1000))();
        }
        piVar1 = *(int **)(unaff_A6 + -4);
        sStack0000000c = (short)((uint)piVar1 >> 0x10);
        uStack0000000e = (undefined1)((uint)piVar1 >> 8);
        sStack00000008 = 0;
        (**(code **)(*piVar1 + 0x194))();
        sStack00000008 = (short)((uint)*(int **)(unaff_A6 + -4) >> 0x10);
        sStack00000004 = 0;
        iVar4 = (**(code **)(**(int **)(unaff_A6 + -4) + 0x40c))();
        sStack00000004 = (short)((uint)*(int **)(unaff_A6 + -4) >> 0x10);
        (**(code **)(**(int **)(unaff_A6 + -4) + 0x198))();
        if (iVar4 == 0x6f6b2020) {
          *(undefined1 *)(unaff_A6 + -0x14a) = 0;
          sStack0000000c = 0x6c69;
          uStack0000000e = 0x6e;
          sStack00000008 = (short)((uint)*(int **)(unaff_A6 + -4) >> 0x10);
          sStack00000004 = 0;
          (**(code **)(**(int **)(unaff_A6 + -4) + 0x188))();
          if (extraout_A0_04 != (int *)0x0) {
            sStack0000000c = (short)((uint)(unaff_A6 + -0x14a) >> 0x10);
            uStack0000000e = (undefined1)((uint)(unaff_A6 + -0x14a) >> 8);
            sStack00000008 = (short)((uint)extraout_A0_04 >> 0x10);
            sStack00000004 = 0;
            (**(code **)(*extraout_A0_04 + 0x3d4))();
            sStack00000004 = (short)((uint)(unaff_A6 + -0x14a) >> 0x10);
            func_0x000072f8();
            psVar7 = _DAT_00027d26 + _DAT_00027d24 * 0x34 + 2;
            pcVar8 = extraout_A0_05;
            do {
              cVar3 = *pcVar8;
              *(char *)psVar7 = cVar3;
              psVar7 = (short *)((int)psVar7 + 1);
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
          }
          sStack0000000c = 0x6c69;
          uStack0000000e = 0x6e;
          sStack00000008 = (short)((uint)*(int **)(unaff_A6 + -4) >> 0x10);
          sStack00000004 = 0;
          (**(code **)(**(int **)(unaff_A6 + -4) + 0x188))();
          if (extraout_A0_06 != (int *)0x0) {
            sStack0000000c = (short)((uint)(unaff_A6 + -0x14a) >> 0x10);
            uStack0000000e = (undefined1)((uint)(unaff_A6 + -0x14a) >> 8);
            sStack00000008 = (short)((uint)extraout_A0_06 >> 0x10);
            sStack00000004 = 0;
            (**(code **)(*extraout_A0_06 + 0x3d4))();
            sStack00000004 = (short)((uint)(unaff_A6 + -0x14a) >> 0x10);
            func_0x000072f8();
            psVar7 = _DAT_00027d26 + _DAT_00027d24 * 0x34 + 0x1b;
            pcVar8 = extraout_A0_07;
            do {
              cVar3 = *pcVar8;
              *(char *)psVar7 = cVar3;
              psVar7 = (short *)((int)psVar7 + 1);
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
          }
          sStack0000000c = (short)((uint)*(undefined4 *)(unaff_A6 + -4) >> 0x10);
          uStack0000000e = (undefined1)((uint)*(undefined4 *)(unaff_A6 + -4) >> 8);
          sStack00000008 = 0;
          FUN_000021ea();
        }
        piVar1 = *(int **)(unaff_A6 + -4);
        sStack0000000c = (short)((uint)piVar1 >> 0x10);
        uStack0000000e = (undefined1)((uint)piVar1 >> 8);
        sStack00000008 = 0;
        (**(code **)(*piVar1 + 0x3a0))();
        *(undefined4 *)(unaff_A6 + -4) = 0;
        _DAT_00025f52 = *(int *)(unaff_A6 + -0x10);
      }
      else {
        if (*(int *)(unaff_A6 + -4) != 0) {
          piVar1 = *(int **)(unaff_A6 + -4);
          sStack0000000c = (short)((uint)piVar1 >> 0x10);
          uStack0000000e = (undefined1)((uint)piVar1 >> 8);
          sStack00000008 = 0;
          (**(code **)(*piVar1 + 0x3a0))();
        }
        *(undefined4 *)(unaff_A6 + -4) = 0;
        sStack0000000c = (short)((uint)*(undefined4 *)(unaff_A6 + -0x14) >> 0x10);
        uStack0000000e = (undefined1)((uint)*(undefined4 *)(unaff_A6 + -0x14) >> 8);
        sStack00000008 = 0x21e0;
        func_0x00001c10();
      }
    }
  }
  return;
}



// Function: FUN_000021ea at 000021ea
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000021ea(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_6c [26];
  
  sVar1 = 0x19;
  puVar2 = (undefined4 *)(_DAT_00027d24 * 0x68 + _DAT_00027d26);
  puVar3 = auStack_6c;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  func_0x00007420(auStack_6c);
  FUN_00001d18(_DAT_00027d1e);
  return;
}



// Function: FUN_00002224 at 00002224
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002224(void)

{
  int extraout_A0;
  int iVar1;
  
  _DAT_000153cc = 0;
  if (_DAT_00027fc4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    (**(code **)(*_DAT_00027fc4 + 0x188))(_DAT_00027fc4,0x696e666f);
    iVar1 = extraout_A0;
  }
  if (iVar1 != 0) {
    FUN_000001a4(iVar1);
  }
  (**(code **)(*_DAT_00027fc4 + 0x268))();
  return;
}



// Function: FUN_0000227c at 0000227c
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0000227c(void)

{
  short sVar1;
  undefined2 uVar2;
  
  uVar2 = 1;
  if (_DAT_000288ac == 0) {
    uVar2 = 0;
  }
  else if (_DAT_00027cc2 == 1) {
    uVar2 = 1;
  }
  else {
    for (sVar1 = 0; sVar1 < _DAT_00027cc2; sVar1 = sVar1 + 1) {
      if (*(short *)(&DAT_00027ca0 + sVar1 * 2) == 0) {
        return 0;
      }
    }
  }
  return uVar2;
}



// Function: FUN_000022c0 at 000022c0
// Size: 821 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022c0(void)

{
  bool bVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  undefined1 auStack_36 [50];
  
  _DAT_000153cc = 1;
  if ((_DAT_00027fc4 == 0) || (0xe0 < *(int *)(_DAT_00027fc4 + 0x36))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((_DAT_00027fc4 == 0) || (0x70 < *(int *)(_DAT_00027fc4 + 0x36))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar3 = (undefined2 *)0x153fe;
  }
  else if (bVar2) {
    puVar3 = (undefined2 *)0x1540e;
  }
  else {
    puVar3 = (undefined2 *)&DAT_0001541e;
  }
  if (bVar1) {
    puVar4 = (undefined1 *)0x153ce;
  }
  else if (bVar2) {
    puVar4 = (undefined1 *)0x153de;
  }
  else {
    puVar4 = &DAT_000153ee;
  }
  func_0x00002a50();
  local_5a = puVar3[1];
  local_58 = *puVar3;
  local_3e = _DAT_00015430;
  local_3c = _DAT_0001542e;
  local_3a = _DAT_00015434 + _DAT_00015430;
  local_38 = _DAT_00015432 + _DAT_0001542e;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002378(0x14140,&local_3e,&local_5a,0x10024);
  func_0x000076d0(auStack_36,0x153c9,
                  (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800));
  func_0x00002ab8(*(undefined2 *)(puVar4 + 2),auStack_36);
  local_5e = puVar3[3];
  local_5c = puVar3[2];
  local_46 = _DAT_00015438;
  local_44 = _DAT_00015436;
  local_42 = _DAT_0001543c + _DAT_00015438;
  local_40 = _DAT_0001543a + _DAT_00015436;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002378(0x14140,&local_46,&local_5e,0x10024);
  func_0x000076d0(auStack_36,0x153c4,
                  (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186))
  ;
  func_0x00002ab8(*(undefined2 *)(puVar4 + 6),auStack_36);
  local_62 = puVar3[5];
  local_60 = puVar3[4];
  local_4e = _DAT_00015440;
  local_4c = _DAT_0001543e;
  local_4a = _DAT_00015444 + _DAT_00015440;
  local_48 = _DAT_00015442 + _DAT_0001543e;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002378(0x14140,&local_4e,&local_62,0x10024);
  func_0x000076d0(auStack_36,0x153c4,
                  (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28820));
  func_0x00002ab8(*(undefined2 *)(puVar4 + 10),auStack_36);
  local_66 = puVar3[7];
  local_64 = puVar3[6];
  local_56 = _DAT_00015448;
  local_54 = _DAT_00015446;
  local_52 = _DAT_0001544c + _DAT_00015448;
  local_50 = _DAT_0001544a + _DAT_00015446;
                    /* WARNING: Call to offcut address within same function */
  func_0x00002378(0x14140,&local_56,&local_66,0x10024);
  func_0x000076d0(auStack_36,0x153c4,
                  (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28810));
  func_0x00002ab8(*(undefined2 *)(puVar4 + 0xe),auStack_36);
  return;
}



// Function: FUN_000025f6 at 000025f6
// Size: 537 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000025f6(undefined4 param_1)

{
  int iVar1;
  short sVar2;
  undefined1 auStack_36 [50];
  
  if (_DAT_000153cc == 0) {
    if (param_1._0_2_ < 8) {
      if (param_1._0_2_ < _DAT_00027cc2) {
        sVar2 = (short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 4);
        if ((sVar2 == 0x1c) &&
           (*(short *)(*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4) + 10) * 2 +
                       _DAT_0002884c + 0x594) == 1)) {
          sVar2 = 0x1d;
        }
        iVar1 = func_0x00005328(CONCAT22(sVar2,(short)*(char *)(*(int *)(&DAT_00027c70 +
                                                                        param_1._0_2_ * 4) + 6)),
                                CONCAT22((short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4
                                                                  ) + 8),
                                         (short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4
                                                                  ) + 0xb)),
                                CONCAT22((short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4
                                                                  ) + 7),
                                         (short)*(char *)(*(int *)(&DAT_00027c70 + param_1._0_2_ * 4
                                                                  ) + 10)));
      }
      else {
        func_0x00005358();
        iVar1 = func_0x00005348(0x153b8,0x1539c);
      }
    }
    else {
      func_0x00005358();
      iVar1 = func_0x00005348(0x1538e,0x15378);
    }
  }
  else {
    func_0x00005358();
    iVar1 = (int)param_1._0_2_;
    if (iVar1 == 0) {
      func_0x000076d0(auStack_36,0x15364,
                      (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800));
      iVar1 = func_0x00005348(0x15352,auStack_36);
    }
    else if (iVar1 == 1) {
      func_0x000076d0(auStack_36,0x15340,
                      (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c +
                                     0x186));
      iVar1 = func_0x00005348(0x15332,auStack_36);
    }
    else if (iVar1 == 2) {
      func_0x000076d0(auStack_36,0x15320,
                      (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28820));
      iVar1 = func_0x00005348(0x15314,auStack_36);
    }
    else {
      iVar1 = iVar1 + -3;
      if (iVar1 == 0) {
        func_0x000076d0(auStack_36,0x15302,
                        (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28810));
        iVar1 = func_0x00005348(0x152f6,auStack_36);
      }
    }
  }
  return iVar1;
}



// Function: FUN_00002810 at 00002810
// Size: 8 bytes

void FUN_00002810(void)

{
  return;
}



// Function: FUN_00002818 at 00002818
// Size: 4 bytes

void FUN_00002818(void)

{
  return;
}



// Function: FUN_00002820 at 00002820
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002820(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002830 at 00002830
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002830(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002838 at 00002838
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002838(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



