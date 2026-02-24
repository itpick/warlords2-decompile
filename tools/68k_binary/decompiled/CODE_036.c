// Warlords II - Decompiled 68k Code
// Segment: CODE_036
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000108 at 00000108
// Size: 104 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000108(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 auStack_9c [70];
  undefined4 local_56;
  
  (**(code **)(*param_1 + 0x400))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    func_0x00006460();
    uVar1 = FUN_00000de0(extraout_A0,extraout_A0_00);
    if ((char)uVar1 != '\0') {
      FUN_00001c90(auStack_9c);
      FUN_000008ca(extraout_A0,param_2,local_56);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar1;
}



// Function: FUN_00000354 at 00000354
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000354(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000590 at 00000590
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000590(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar2;
  int iVar1;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 local_15e [2];
  undefined1 auStack_15c [258];
  undefined2 local_5a;
  undefined2 local_58;
  undefined1 auStack_56 [8];
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x400))();
  if (extraout_A0 != 0) {
    func_0x00006460();
    cVar2 = FUN_00000de0(extraout_A0,extraout_A0_00);
    if (cVar2 != '\0') {
      FUN_000008ca(extraout_A0,param_2,param_3);
      local_16 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_10 = _DAT_00025f52;
      _DAT_00025f52 = auStack_4a;
      iVar1 = func_0x000076a8(auStack_4a);
      if (iVar1 != 0) {
        return;
      }
      func_0x00007208(&local_4e);
      FUN_0000091c(extraout_A0,param_2,param_3,auStack_15c,&local_4e,auStack_56,local_15e);
      local_5a = local_4e;
      local_58 = local_4c;
      FUN_00000bfe(extraout_A0,param_2,param_3,auStack_15c,&local_5a,(short)auStack_56);
      _DAT_00025f52 = (undefined1 *)local_10;
      return;
    }
  }
  func_0x00004c38(param_1,param_2,param_3);
  return;
}



// Function: FUN_0000068c at 0000068c
// Size: 104 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0000068c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 auStack_9c [70];
  undefined4 local_56;
  
  (**(code **)(*param_1 + 0x400))();
  uVar1 = 0;
  if (extraout_A0 != 0) {
    func_0x00006460();
    uVar1 = FUN_00000de0(extraout_A0,extraout_A0_00);
    if ((char)uVar1 != '\0') {
      FUN_00001c90(auStack_9c);
      FUN_000008ca(extraout_A0,param_2,local_56);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar1;
}



// Function: FUN_000008ca at 000008ca
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000008ca(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  *(undefined4 *)(param_1 + 0x32) = 0;
  cVar3 = '\0';
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00000c90(param_1,iVar1,param_1 + 0x32,param_2,param_3);
    cVar3 = (char)uVar2;
  }
  if ((cVar3 != '\0') && (iVar1 != *(int *)(param_1 + 0x32))) {
    return uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000091c at 0000091c
// Size: 322 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000091c(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int *piVar1;
  char cVar2;
  undefined4 local_106 [32];
  undefined1 auStack_86 [74];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_10 [12];
  
  if (*(int *)((int)param_1 + 0x36) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)param_1[2];
  if (*(int *)((int)param_1 + 0x32) != 0) {
    (**(code **)(*_DAT_000266a8 + 0x210))(_DAT_000266a8,0x3e80001);
    func_0x00007208(auStack_10);
    (**(code **)(*param_1 + 0xdc))
              (param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x32) + 0x16),auStack_10);
    cVar2 = func_0x00007248(auStack_10,0x25b56);
    if (cVar2 == '\0') {
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x1d8))();
        if (cVar2 != '\0') {
          FUN_00001c90(auStack_86);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *param_4 = 5;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)((int)param_1 + 0x36);
      cVar2 = (**(code **)(**(int **)((int)param_1 + 0x32) + 0x1d8))();
      if ((cVar2 != '\0') && (param_3 != (int *)0x0)) {
        local_3c = *(undefined4 *)(*param_3 + 2);
        local_38 = *(undefined4 *)(*param_3 + 6);
        *param_6 = local_3c;
        param_6[1] = local_38;
        (**(code **)(**(int **)((int)param_1 + 0x32) + 0x144))
                  (*(int **)((int)param_1 + 0x32),local_106,param_2);
        *param_5 = local_106[0];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x1d8))();
        }
      }
    }
  }
  return;
}



// Function: FUN_00000bfe at 00000bfe
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bfe(int param_1)

{
  undefined4 in_stack_00000014;
  
  if (*(int *)(param_1 + 0x36) != 0) {
    func_0x00007218(in_stack_00000014);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000c90 at 00000c90
// Size: 270 bytes

char FUN_00000c90(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  undefined2 uVar4;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68 [25];
  
  cVar1 = '\0';
  uVar4 = SUB42(param_2,0);
  func_0x00004b40((short)local_68,uVar4);
  func_0x00004b48((short)local_68);
  piVar3 = extraout_A0;
  while( true ) {
    cVar2 = (**(code **)(local_68[0] + 8))();
    if ((cVar2 == '\0') || (cVar1 != '\0')) break;
    local_70 = *param_4;
    local_6c = param_4[1];
    (**(code **)(*piVar3 + 0x160))((short)piVar3,(short)&local_70);
    cVar1 = FUN_00000c90(param_1,piVar3,param_3,&local_70,(short)param_5);
    (**(code **)(*piVar3 + 0x15c))(piVar3,param_5);
    func_0x00004b50(local_68);
    piVar3 = extraout_A0_00;
  }
  if (cVar1 == '\0') {
    cVar2 = (**(code **)(*param_2 + 0x2c0))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_2 + 0x2a0))(uVar4,(short)param_4);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*param_2 + 0x338))();
        if (cVar2 != '\0') {
          cVar1 = '\x01';
          (**(code **)(*param_2 + 0x308))(uVar4,(short)param_5);
          *param_3 = param_2;
        }
      }
    }
  }
  func_0x00002798((short)local_68);
  return cVar1;
}



// Function: FUN_00000d9e at 00000d9e
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d9e(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_8;
  
  local_8 = CONCAT22(_DAT_0001426a,_DAT_00014268);
  *param_3 = local_8;
  return;
}



// Function: FUN_00000dca at 00000dca
// Size: 8 bytes

void FUN_00000dca(void)

{
  return;
}



// Function: FUN_00000dd2 at 00000dd2
// Size: 12 bytes

void FUN_00000dd2(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_52;
  undefined2 uStack_50;
  
  sVar1 = func_0x000049e0();
  if (sVar1 != 0) {
    (**(code **)(*param_1 + 0x144))((short)param_1,(short)&uStack_62,param_2);
    uStack_52 = uStack_62;
    uStack_50 = uStack_60;
    func_0x00007218(&uStack_52);
    return;
  }
  return;
}



// Function: FUN_00000de0 at 00000de0
// Size: 94 bytes

void FUN_00000de0(void)

{
  short sVar1;
  int unaff_A6;
  
  sVar1 = func_0x000049e0();
  if (sVar1 != 0) {
    (**(code **)(**(int **)(unaff_A6 + 8) + 0x144))
              ((short)*(int **)(unaff_A6 + 8),(short)unaff_A6 + -0x5e);
    *(undefined2 *)(unaff_A6 + -0x4e) = *(undefined2 *)(unaff_A6 + -0x5e);
    *(undefined2 *)(unaff_A6 + -0x4c) = *(undefined2 *)(unaff_A6 + -0x5c);
    func_0x00007218(unaff_A6 + -0x4e);
    return;
  }
  return;
}



// Function: FUN_00000fc8 at 00000fc8
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000fc8(int *param_1,undefined4 param_2)

{
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  
  local_56 = _DAT_0001426a;
  local_54 = _DAT_00014268;
  (**(code **)(*param_1 + 0x144))(param_1,&local_62,param_2);
  local_52 = local_62;
  local_50 = local_60;
  func_0x00007218(&local_52);
  return;
}



// Function: FUN_000011be at 000011be
// Size: 520 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000011be(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 extraout_A0w;
  int iVar1;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined1 auStack_36 [50];
  
  local_42 = 0;
  local_40 = 0;
  local_3e = 0x80;
  local_3c = 0xf0;
  func_0x00002378(0x14290,&local_42,0x25b56,0);
  func_0x00002a50(0xe0,0xf9);
  func_0x000032f8();
  func_0x00002ac0(8,extraout_A0w);
  func_0x00003b10(_DAT_00028846);
  func_0x000076d0(auStack_36,0x15fc3,(int)param_2._0_2_);
  func_0x00002ac8(0x680042,auStack_36);
  func_0x000076d0(auStack_36,0x15fb6,(int)param_3._0_2_);
  func_0x00002ab8(0x780042,auStack_36);
  func_0x000076d0(auStack_36,0x15fad,(int)param_1._2_2_);
  func_0x00002ac8(0x680056,auStack_36);
  func_0x000076d0(auStack_36,0x15fa4,(int)param_2._2_2_);
  func_0x00002ab8(0x780056,auStack_36);
  local_3a = 0x67;
  local_38 = 0x5d;
  if (*(char *)(_DAT_00028864 + param_1._0_2_ * 6) == '\0') {
    iVar1 = param_1._0_2_ * 6 + _DAT_00028864;
    if ((*(char *)(iVar1 + 1) == '\0') || (*(char *)(iVar1 + 2) == '\0')) {
      if (*(char *)(_DAT_00028864 + 1 + param_1._0_2_ * 6) == '\0') {
        if (*(char *)(_DAT_00028864 + 2 + param_1._0_2_ * 6) != '\0') {
          func_0x00002378(0x144a4,0x27c1c,&local_3a,0x10024);
        }
      }
      else {
        func_0x00002378(0x144a4,0x27c24,&local_3a,0x10024);
      }
    }
    else {
      func_0x00002378(0x144a4,0x27c2c,&local_3a,0x10024);
    }
  }
  else {
    func_0x00002378(0x144a4,0x27c14,&local_3a,0x10024);
  }
  return;
}



// Function: FUN_000013c6 at 000013c6
// Size: 846 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013c6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 extraout_A0w;
  int iVar1;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined1 auStack_36 [50];
  
  if (param_1._0_2_ != -1) {
    local_42 = 0;
    local_40 = 0;
    local_3e = 0x80;
    local_3c = 0xf0;
    func_0x00002378(0x4290,(short)&local_42,0x5b56,0);
    func_0x00002a50(0xe0,0xf9);
    if ((param_1._0_2_ == 0x1c) || (param_1._0_2_ == 0x1d)) {
      func_0x00002ac0(8,param_3._2_2_ * 0x14 + (short)_DAT_0002884c + 0x224);
    }
    else {
      func_0x000032f8();
      func_0x00002ac0(8,extraout_A0w);
    }
    func_0x00003b10(_DAT_00028846,0x60,0,0,1,0);
    if (((param_1._0_2_ != 0x1c) && (param_1._0_2_ != 0x1d)) && (0 < param_3._2_2_)) {
      local_46 = 0x24;
      local_44 = 0x80;
      func_0x00002378(0x4140,0x7bd4,(short)&local_46,0x24);
      if (1 < param_3._2_2_) {
        local_4a = 0x24;
        local_48 = 0x58;
        func_0x00002378(0x4140,0x7bdc,(short)&local_4a,0x24);
      }
      if (2 < param_3._2_2_) {
        local_4e = 0x2d;
        local_4c = 0x80;
        func_0x00002378(0x4140,0x7be4,(short)&local_4e,0x24);
      }
      if (3 < param_3._2_2_) {
        local_52 = 0x2d;
        local_50 = 0x58;
        func_0x00002378(0x4140,0x7bec,(short)&local_52,0x24);
      }
    }
    func_0x00002a50(0xe0,0xf9);
    func_0x000076d0((short)auStack_36,0x5fc3,param_2._0_2_);
    func_0x00002ac8(0x680042,(short)auStack_36);
    func_0x000076d0(auStack_36,0x15fb6,(int)param_1._2_2_);
    func_0x00002ab8(0x780042,auStack_36);
    func_0x000076d0(auStack_36,0x15f99,(int)param_3._0_2_);
    func_0x00002ac8(0x680056,auStack_36);
    func_0x000076d0(auStack_36,0x15f8e,(int)param_2._2_2_);
    func_0x00002ab8(0x780056,auStack_36);
    if ((param_1._0_2_ != 0x1c) && (param_1._0_2_ != 0x1d)) {
      local_3a = 0x67;
      local_38 = 0x5d;
      if (*(char *)(_DAT_00028864 + param_1._0_2_ * 6) == '\0') {
        iVar1 = param_1._0_2_ * 6 + _DAT_00028864;
        if ((*(char *)(iVar1 + 1) == '\0') || (*(char *)(iVar1 + 2) == '\0')) {
          if (*(char *)(_DAT_00028864 + 1 + param_1._0_2_ * 6) == '\0') {
            if (*(char *)(_DAT_00028864 + 2 + param_1._0_2_ * 6) != '\0') {
              func_0x00002378(0x44a4,0x7c1c,(short)&local_3a,0x24);
            }
          }
          else {
            func_0x00002378(0x44a4,0x7c24,(short)&local_3a,0x24);
          }
        }
        else {
          func_0x00002378(0x44a4,0x7c2c,(short)&local_3a,0x24);
        }
      }
      else {
        func_0x00002378(0x44a4,0x7c14,(short)&local_3a,0x24);
      }
    }
  }
  return;
}



// Function: FUN_00001714 at 00001714
// Size: 202 bytes

void FUN_00001714(undefined2 param_1)

{
  short sVar1;
  uint uVar2;
  short local_6;
  
  func_0x00002b28(param_1,(short)&local_6);
  if (local_6 != 0) {
    func_0x00002b38(2,0);
    uVar2 = ((short)(0x70 - (short)((local_6 * 0x18) / 2)) + 4 >> 3) << 3;
    for (sVar1 = 0; sVar1 < local_6; sVar1 = sVar1 + 1) {
      func_0x00003b10((short)*(char *)(*(int *)(&DAT_000288d4 + sVar1 * 4) + 5),(short)uVar2,0,
                      (short)*(char *)(*(int *)(&DAT_000288d4 + sVar1 * 4) + 7),0,0);
      uVar2 = (uint)(ushort)((short)uVar2 + 0x18);
    }
  }
  return;
}



// Function: FUN_000017de at 000017de
// Size: 698 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017de(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined1 auStack_1e [10];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  func_0x00002a50(0xe0,0xf9);
  func_0x00002ac0(0x78000b,param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c8);
  if (*(char *)((*(uint *)(*(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) == '\n') {
    cVar1 = *(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9);
    if (cVar1 < '\b') {
      func_0x00003b18(CONCAT22((short)cVar1,2),0,10);
      func_0x00003b18(CONCAT22((short)*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9),2),0,
                      0xd0000a);
    }
    local_22 = 0x24;
    local_20 = 0x30;
    local_c = 0;
    local_a = 0x264;
    local_8 = 0xb;
    local_6 = 0x27c;
    func_0x00002378(0x14140,&local_c,(short)&local_22,0x24);
    func_0x000076d0(auStack_1e,0x15f84,
                    (int)*(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15ee));
    func_0x00002ab8(0x500021,auStack_1e);
    local_26 = 0x24;
    local_24 = 0x94;
    local_14 = 0x1c;
    local_12 = 0x31;
    local_10 = 0x27;
    local_e = 0x40;
    func_0x00002378(0x141cc,&local_14,&local_26,0x10024);
    func_0x000076d0(auStack_1e,0x15f84,(int)*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d8)
                   );
    func_0x00002ab8(0xb40021,auStack_1e);
  }
  else {
    func_0x00002ac0(0x23,0x5f87);
  }
  sVar2 = 0;
  while( true ) {
    if (7 < sVar2) {
      return;
    }
    iVar3 = param_1._0_2_ * 0x42 + _DAT_0002884c;
    iVar4 = sVar2 * 0x14 + _DAT_0002884c;
    if ((*(short *)(iVar4 + 0x194) == *(short *)(iVar3 + 0x15c4)) &&
       (*(short *)(iVar4 + 0x196) == *(short *)(iVar3 + 0x15c6))) break;
    sVar2 = sVar2 + 1;
  }
  if (*(char *)((*(uint *)(*(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c6) * 0xe0 +
                           _DAT_00028850 +
                          *(short *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15c4) * 2) >> 0x18) +
                _DAT_0002884c + 0x711) != '\n') {
    func_0x00003b18(CONCAT22(sVar2,6),0,10);
    func_0x00003b18(CONCAT22(sVar2,6),0,0xc8000a);
    return;
  }
  func_0x00003b18(CONCAT22(sVar2,6),0,0x22);
  return;
}



// Function: FUN_00001a98 at 00001a98
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a98(undefined4 param_1)

{
  func_0x00002a50(0x3c,0xf9);
  func_0x00002ac0(0x78000b,param_1._0_2_ * 0x20 + _DAT_0002884c + 0x816);
  func_0x00002a50(0xe0,0xf9);
  if (*(char *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x82a) == '\x01') {
    func_0x00002ac0(0x23,0x5f70);
  }
  else if ((*(byte *)(*(short *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x814) * 0xe0 +
                      _DAT_00028850 + 1 +
                     *(short *)(param_1._0_2_ * 0x20 + _DAT_0002884c + 0x812) * 2) & 0x40) == 0) {
    func_0x00002ac0(0x23,0x5f64);
  }
  else {
    func_0x00002ac0(0x21,0x5f5a);
  }
  return;
}



// Function: FUN_00001b80 at 00001b80
// Size: 80 bytes

void FUN_00001b80(undefined4 param_1,undefined4 param_2)

{
  func_0x00002a50();
  func_0x00002ac0(0x78000b,param_1);
  func_0x00002a50(0xe0,0xf9);
  func_0x00002ac0(0x780023,param_2);
  return;
}



// Function: FUN_00001bd0 at 00001bd0
// Size: 80 bytes

void FUN_00001bd0(undefined4 param_1,undefined4 param_2)

{
  func_0x00002a50();
  func_0x00002ac0(0x78000b,param_1);
  func_0x00002a50(0xe0,0xf9);
  func_0x00002ac0(0x780023,param_2);
  return;
}



// Function: FUN_00001c20 at 00001c20
// Size: 60 bytes

void FUN_00001c20(void)

{
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_c = 0;
  local_a = 0;
  local_8 = 0x4b;
  local_6 = 0x100;
  func_0x00002378(0x14258,&local_c,0x25b56,0);
  return;
}



// Function: FUN_00001c5c at 00001c5c
// Size: 52 bytes

void FUN_00001c5c(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int extraout_A0;
  undefined2 uVar4;
  undefined2 uVar5;
  short *psVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  undefined1 auStack_68 [50];
  undefined1 auStack_36 [50];
  
  bVar1 = false;
  func_0x00002800(0x5020,0x5ae0);
  if (extraout_A0 != 0) {
    uVar7 = 0;
    psVar6 = &sStack_6e;
    uVar4 = (undefined2)((uint)extraout_A0 >> 0x10);
    uVar5 = (undefined2)extraout_A0;
    func_0x00002820(uVar5,(short)psVar6,2);
    sVar2 = func_0x00002aa0(uVar4,(short)((uint)psVar6 >> 0x10),uVar7);
    sVar3 = sStack_6e;
    sStack_6e = sVar2;
    sVar2 = func_0x00002aa0(sVar3);
    sVar3 = 0;
    do {
      func_0x00002820(uVar5,(short)&sStack_6c,0x68);
      sVar3 = sVar3 + 1;
      if (sVar2 == sStack_6c) {
        bVar1 = true;
        break;
      }
    } while (sVar3 < sStack_6e);
    func_0x00002818(uVar5);
    if (bVar1) {
      if (sStack_6a == 0) {
        FUN_00001c20();
        FUN_00001bd0((short)auStack_68,(char)auStack_36);
      }
      else {
        uVar8 = (undefined1)sStack_6a;
        sStack_6a = func_0x00002aa0();
        func_0x00004898(uVar8);
      }
    }
  }
  return;
}



// Function: FUN_00001c90 at 00001c90
// Size: 170 bytes

void FUN_00001c90(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short unaff_D5w;
  int unaff_A6;
  undefined1 uVar5;
  
  func_0x00002820();
  uVar3 = *(undefined2 *)(unaff_A6 + -0x6a);
  uVar1 = func_0x00002aa0();
  *(undefined2 *)(unaff_A6 + -0x6a) = uVar1;
  sVar2 = func_0x00002aa0(uVar3);
  sVar4 = 0;
  do {
    func_0x00002820();
    if (sVar2 == *(short *)(unaff_A6 + -0x68)) {
      unaff_D5w = 1;
    }
    sVar4 = sVar4 + 1;
  } while ((sVar2 != *(short *)(unaff_A6 + -0x68)) && (sVar4 < *(short *)(unaff_A6 + -0x6a)));
  func_0x00002818();
  if (unaff_D5w != 0) {
    if (*(short *)(unaff_A6 + -0x66) == 0) {
      FUN_00001c20();
      FUN_00001bd0((short)unaff_A6 + -100,(char)unaff_A6 + -0x32);
    }
    else {
      uVar5 = (undefined1)*(undefined2 *)(unaff_A6 + -0x66);
      uVar3 = func_0x00002aa0();
      *(undefined2 *)(unaff_A6 + -0x66) = uVar3;
      func_0x00004898(uVar5);
    }
  }
  return;
}



