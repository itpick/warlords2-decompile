// Warlords II - Decompiled 68k Code
// Segment: CODE_034
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000018 at 00000018
// Size: 12 bytes

void FUN_00000018(void)

{
  return;
}



// Function: FUN_00000024 at 00000024
// Size: 56 bytes

undefined4 FUN_00000024(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_0000005c at 0000005c
// Size: 30 bytes

bool FUN_0000005c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00000024(param_1,param_2);
  return cVar1 == '\0';
}



// Function: FUN_0000007a at 0000007a
// Size: 30 bytes

void FUN_0000007a(int param_1)

{
  if (*(int *)(param_1 + 4) < 2) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}



// Function: FUN_00000098 at 00000098
// Size: 22 bytes

bool FUN_00000098(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



// Function: FUN_000000ae at 000000ae
// Size: 68 bytes

void FUN_000000ae(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x58);
  }
  FUN_000025e0(param_1,uVar1);
  *param_1 = 0x12a70;
  return;
}



// Function: FUN_000000f2 at 000000f2
// Size: 18 bytes

void FUN_000000f2(undefined4 param_1)

{
  func_0x000025f0(param_1);
  return;
}



// Function: FUN_00000104 at 00000104
// Size: 18 bytes

void FUN_00000104(undefined4 param_1)

{
  FUN_000025f8(param_1);
  return;
}



// Function: FUN_00000116 at 00000116
// Size: 268 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000116(void)

{
  char cVar1;
  int *extraout_A0;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  if (_DAT_000266a8 != (int *)0x0) {
    uVar3 = 0xff;
    (**(code **)(*_DAT_000266a8 + 0x244))((char)_DAT_000266a8,0xffff);
    *(undefined1 *)(_DAT_000264b2 + 0x42) = 0;
    (**(code **)(*_DAT_000266a8 + 0x1a4))();
    (**(code **)(*extraout_A0 + 0x94))();
    if (*(char *)((int)_DAT_000266a8 + 0x52) != '\0') {
      uVar7 = 0;
      uVar6 = 0x84;
      func_0x000026b0(0x65);
      uVar2 = 0;
      uVar5 = 0x92;
      func_0x000026b0(0x67,uVar7,uVar3);
      uVar4 = 0;
      uVar3 = 0xa0;
      func_0x000026b0(0x68,uVar2,uVar6);
      uVar2 = 0;
      func_0x000026b0(0x69,uVar4,uVar5);
      func_0x000026b0(0x6a,uVar2,uVar3);
      (**(code **)(*_DAT_000266a8 + 0x244))();
    }
    uVar3 = 0;
    func_0x000026b0(1);
    func_0x000026b0(0xff00,uVar3);
    cVar1 = FUN_00002698(1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*_DAT_000266a8 + 400))();
      if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}



// Function: FUN_00000258 at 00000258
// Size: 46 bytes

undefined4 FUN_00000258(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_3 + 0x11) < *(char *)(param_2 + 0x11)) {
    uVar1 = 0xffffffff;
  }
  else if (*(char *)(param_2 + 0x11) < *(char *)(param_3 + 0x11)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00000286 at 00000286
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000286(undefined2 param_1,undefined1 param_2)

{
  undefined1 uVar2;
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = func_0x00000e00();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a,uVar2);
  if (iVar1 == 0) {
    FUN_00002138(param_1,param_2);
    _DAT_00025f52 = local_10;
  }
  else {
    func_0x00000e00();
    FUN_00001c10((short)((uint)local_14 >> 0x10));
  }
  func_0x00000e00();
  return;
}



// Function: FUN_0000030e at 0000030e
// Size: 14 bytes

void FUN_0000030e(void)

{
  return;
}



// Function: FUN_0000031c at 0000031c
// Size: 44 bytes

void FUN_0000031c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x2e);
  if (extraout_A0 != 0) {
    func_0x00006f40(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000348 at 00000348
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000348(void)

{
  int iVar1;
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
    *(undefined1 *)((int)_DAT_000266a8 + 0x3a) = 1;
    (**(code **)(*_DAT_000266a8 + 0x1d8))();
    _DAT_00025f52 = local_10;
  }
  else {
    *(undefined1 *)((int)_DAT_000266a8 + 0x3a) = 0;
    FUN_00001c10();
  }
  return;
}



// Function: FUN_000003c8 at 000003c8
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_000003c8(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*_DAT_000266a8 + 400))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0x2b);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_000003f2 at 000003f2
// Size: 10 bytes

undefined4 FUN_000003f2(void)

{
  return 0;
}



// Function: FUN_000003fc at 000003fc
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003fc(void)

{
  (**(code **)(*_DAT_000266a8 + 0x188))();
  return;
}



// Function: FUN_0000041e at 0000041e
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000041e(void)

{
  if (_DAT_000265ce != (int *)0x0) {
    (**(code **)(*_DAT_000265ce + 0x5c))();
  }
  return;
}



// Function: FUN_00000444 at 00000444
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000444(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000452 at 00000452
// Size: 170 bytes

short FUN_00000452(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int *extraout_A0;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  sVar2 = 1;
  if (((param_3._0_2_ == *(short *)((int)param_1 + 0x3e)) && (0 < *(short *)(param_1 + 0xf))) &&
     ((uint)(*(int *)(param_2 + 0x18) - param_1[0x11]) < uRam000002f0)) {
    local_8 = *(undefined2 *)(param_2 + 0x1c);
    local_6 = *(undefined2 *)(param_2 + 0x1e);
    local_c = *(undefined2 *)(param_1 + 0x10);
    local_a = *(undefined2 *)((int)param_1 + 0x42);
    (**(code **)(*param_1 + 0x1a4))(param_1,&local_c,&local_8);
    cVar1 = (**(code **)(*extraout_A0 + 0x78))();
    if (cVar1 != '\0') {
      sVar2 = *(short *)(param_1 + 0xf) + 1;
    }
  }
  param_1[0x10] = *(int *)(param_2 + 0x1c);
  *(short *)((int)param_1 + 0x3e) = param_3._0_2_;
  *(short *)(param_1 + 0xf) = sVar2;
  return sVar2;
}



// Function: FUN_000004fc at 000004fc
// Size: 38 bytes

void FUN_000004fc(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0xc4))(*(int **)(param_1 + 0x5c),param_2);
  }
  return;
}



// Function: FUN_00000522 at 00000522
// Size: 268 bytes

undefined4 FUN_00000522(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 1) {
      uVar2 = (**(code **)(*param_1 + 0x15c))(param_1,param_2);
    }
    else if (iVar1 == 2) {
      uVar2 = (**(code **)(*param_1 + 0x164))(param_1,param_2);
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 == 4) {
          uVar2 = (**(code **)(*param_1 + 0x158))(param_1,param_2);
          return uVar2;
        }
        if (iVar1 != 5) {
          if (iVar1 == 6) {
            uVar2 = (**(code **)(*param_1 + 0x170))(param_1,param_2);
            return uVar2;
          }
          if (iVar1 == 7) {
            uVar2 = (**(code **)(*param_1 + 0x14c))(param_1,param_2);
            return uVar2;
          }
          if (iVar1 == 8) {
            uVar2 = (**(code **)(*param_1 + 0x148))(param_1,param_2);
            return uVar2;
          }
          if (iVar1 != 0xf) {
            if (iVar1 != 0x17) {
              uVar2 = (**(code **)(*param_1 + 300))(param_1,param_2);
              return uVar2;
            }
            uVar2 = (**(code **)(*param_1 + 0x150))(param_1,param_2);
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x168))(param_1,param_2);
          return uVar2;
        }
      }
      uVar2 = (**(code **)(*param_1 + 0x154))(param_1,param_2);
    }
  }
  return uVar2;
}



// Function: FUN_0000062e at 0000062e
// Size: 162 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000062e(int *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  ushort extraout_D0u;
  ushort extraout_D0u_00;
  ushort uVar1;
  int iVar2;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8((short)auStack_4a);
  if (iVar2 == 0) {
    if (param_4 == 0x28) {
      (**(code **)(*param_1 + 0x13c))((short)param_1,param_2);
      uVar1 = extraout_D0u_00;
    }
    else {
      (**(code **)(*param_1 + 0x1a4))(param_1,param_4,param_2,param_3);
      FUN_00003740(extraout_A0);
      uVar1 = extraout_D0u;
    }
    _DAT_00025f52 = (undefined1 *)local_10;
    return (uint)uVar1 << 0x10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000006d8 at 000006d8
// Size: 274 bytes

void FUN_000006d8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar4;
  int *extraout_A0_01;
  int *extraout_A0_02;
  int *piVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_68 [25];
  
  func_0x000073b0(0x18);
  piVar4 = (int *)0x0;
  if (extraout_A0 != 0) {
    func_0x00004a10((char)extraout_A0);
    piVar4 = extraout_A0_00;
  }
  uVar8 = (undefined2)((uint)param_2 >> 0x10);
  uVar7 = (undefined2)((uint)piVar4 >> 0x10);
  (**(code **)(*piVar4 + 0x58))((short)piVar4,(short)param_2);
  FUN_000025e0(local_68,(short)*(undefined4 *)((int)param_1 + 0x2a),uVar7,uVar8);
  func_0x000025f0(local_68);
  piVar6 = extraout_A0_01;
  while( true ) {
    cVar3 = (**(code **)(local_68[0] + 8))();
    piVar5 = (int *)0x0;
    if (cVar3 == '\0') break;
    iVar1 = (**(code **)(*piVar4 + 0x68))();
    iVar2 = (**(code **)(*piVar6 + 0xb4))();
    piVar5 = piVar6;
    if (iVar2 == iVar1) break;
    FUN_000025f8((char)local_68);
    piVar6 = extraout_A0_02;
  }
  if (piVar5 == (int *)0x0) {
    FUN_00000e10((char)piVar4);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x2a) + 0xc4))
              ((short)*(int **)((int)param_1 + 0x2a),(char)piVar5);
    (**(code **)(*piVar5 + 0xb8))((short)piVar5,(short)piVar4);
    (**(code **)(*param_1 + 0x108))(param_1,piVar5);
  }
  func_0x000025e8((short)local_68);
  return;
}



// Function: FUN_000007ea at 000007ea
// Size: 366 bytes

void FUN_000007ea(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *piVar2;
  int extraout_A0_02;
  int *extraout_A0_03;
  undefined4 extraout_A0_04;
  undefined4 in_stack_ffffffd0;
  
  if (param_2 == 0x29) {
    cVar1 = (**(code **)(*param_1 + 0x178))();
    if ((cVar1 != '\0') && (cVar1 = FUN_00001d80(), cVar1 != '\0')) {
      FUN_00003798(param_1,0x14);
      return;
    }
    if (*(char *)((int)param_1 + 0x2e) != '\0') {
      (**(code **)(*param_1 + 0x1a4))(param_1,0x29);
      FUN_00003798(extraout_A0);
    }
  }
  else if (param_2 == 0x2a) {
    func_0x000073b0(0x3c);
    piVar2 = (int *)0x0;
    if (extraout_A0_02 != 0) {
      func_0x00005b90(extraout_A0_02);
      piVar2 = extraout_A0_03;
    }
    (**(code **)(*piVar2 + 0xb4))
              (piVar2,0x2a,param_1,
               CONCAT22((short)((uint)in_stack_ffffffd0 >> 0x10),(ushort)(byte)in_stack_ffffffd0) &
               0xffffff,0,param_3,param_4);
    (**(code **)(*param_1 + 0x108))(param_1,piVar2);
  }
  else if (param_2 == 0x2b) {
    func_0x000073b0(0x3c);
    piVar2 = (int *)0x0;
    if (extraout_A0_00 != 0) {
      func_0x00006f50(extraout_A0_00);
      piVar2 = extraout_A0_01;
    }
    (**(code **)(*piVar2 + 0xb4))
              (piVar2,0x2b,param_1,
               CONCAT22((short)((uint)in_stack_ffffffd0 >> 0x10),(ushort)(byte)in_stack_ffffffd0) &
               0xffffff,0,param_3,param_4);
    (**(code **)(*param_1 + 0x108))(param_1,piVar2);
  }
  else if (param_2 == 0x2c) {
    (**(code **)(*param_1 + 0x1a4))(param_1,0x24);
    FUN_00003798(extraout_A0_04);
  }
  else {
    thunk_EXT_FUN_00007210(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_00000958 at 00000958
// Size: 84 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000958(int *param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x8c))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x248))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00003748(param_1,param_2);
  return;
}



// Function: FUN_000009c4 at 000009c4
// Size: 318 bytes

void FUN_000009c4(int *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  
  sVar1 = *(short *)(param_2 + 0x24);
  if (sVar1 == 0x47) {
    (**(code **)(*param_1 + 0x248))();
    cVar2 = FUN_00002698(0x6a);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x1a4))(param_1,0x6a);
      FUN_00003798(extraout_A0_03);
    }
  }
  else if (sVar1 == 99) {
    (**(code **)(*param_1 + 0x248))();
    cVar2 = FUN_00002698(0x68);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x1a4))(param_1,0x68);
      FUN_00003798(extraout_A0_01);
    }
  }
  else if (sVar1 == 0x76) {
    (**(code **)(*param_1 + 0x248))();
    cVar2 = FUN_00002698(0x69);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x1a4))(param_1,0x69);
      FUN_00003798(extraout_A0_02);
    }
  }
  else if (sVar1 == 0x78) {
    (**(code **)(*param_1 + 0x248))();
    cVar2 = FUN_00002698(0x67);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x1a4))(param_1,0x67);
      FUN_00003798(extraout_A0_00);
    }
  }
  else {
    if (sVar1 != 0x7a) {
      FUN_00000b30();
      return;
    }
    (**(code **)(*param_1 + 0x248))();
    cVar2 = FUN_00002698(0x65);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x1a4))(param_1,0x65);
      FUN_00003798(extraout_A0);
    }
  }
  return;
}



// Function: FUN_00000a8e at 00000a8e
// Size: 46 bytes

void FUN_00000a8e(void)

{
  char cVar1;
  int *unaff_A2;
  
  cVar1 = FUN_00002698();
  if (cVar1 != '\0') {
    (**(code **)(*unaff_A2 + 0x1a4))();
    FUN_00003798();
  }
  return;
}



// Function: FUN_00000b30 at 00000b30
// Size: 20 bytes

void FUN_00000b30(void)

{
  FUN_00003778();
  return;
}



// Function: FUN_00000b44 at 00000b44
// Size: 160 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b44(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  func_0x000037a8(param_1);
  uVar1 = *(undefined2 *)(param_1 + 0x6c);
  uVar6 = (undefined2)((uint)_DAT_00025a40 >> 0x10);
  (**(code **)(*_DAT_00025a40 + 0x5c))();
  uVar3 = *(undefined2 *)(param_1 + 0x6e);
  uVar7 = (undefined2)((uint)_DAT_00025a40 >> 0x10);
  (**(code **)(*_DAT_00025a40 + 0x60))((short)_DAT_00025a40,uVar6,uVar1);
  uVar2 = 0x86;
  FUN_00001e90();
  uVar6 = 0;
  uVar5 = 0x96;
  func_0x000026b0(1,uVar7,uVar3);
  uVar1 = 0xffff;
  uVar4 = 0xa4;
  func_0x000026b0(0xff00,uVar6,uVar2);
  uVar3 = 0;
  uVar2 = 0xbc;
  func_0x000026b0(0x24,uVar1,uVar5);
  uVar1 = 0;
  func_0x000026b0(10,uVar3,uVar4);
  func_0x000026b0(0x14,uVar1,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000c28 at 00000c28
// Size: 8 bytes

void FUN_00000c28(void)

{
  return;
}



// Function: FUN_00000c30 at 00000c30
// Size: 208 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000c30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  int local_e;
  int local_a;
  
  FUN_00001d38(param_3);
  FUN_00001cb8(&local_e);
  (**(code **)(local_e + 0xc))();
  do {
    iVar1 = local_a;
    cVar2 = func_0x00001cc8(&local_e);
    if (cVar2 == '\0') {
      return;
    }
    (**(code **)(*param_1 + 500))(param_1,iVar1);
    if (extraout_A0 != (int *)0x0) {
      cVar2 = (**(code **)(*extraout_A0 + 0x338))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*extraout_A0 + 0x2c0))();
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*extraout_A0 + 0x1d8))();
          if (cVar2 != '\0') {
            (**(code **)(*extraout_A0 + 0x15c))(extraout_A0,*(undefined4 *)(iVar1 + 0x18));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    (**(code **)(local_e + 0x10))();
  } while( true );
}



// Function: FUN_00000d16 at 00000d16
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000d16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000d78 at 00000d78
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000de2 at 00000de2
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000de2(int *param_1)

{
  char cVar1;
  undefined1 auStack_8 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x178))();
  if (cVar1 != '\0') {
    func_0x00007208(auStack_8);
    func_0x00007218(auStack_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e10(void)

{
  func_0x00007218();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000f00 at 00000f00
// Size: 66 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f00(int *param_1)

{
  if (*(short *)((int)param_1 + 0x6a) < 2) {
    (**(code **)(*param_1 + 0x288))();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000fc0 at 00000fc0
// Size: 142 bytes

void FUN_00000fc0(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *extraout_A0;
  int local_e;
  undefined4 local_a;
  
  FUN_00001cb8(&local_e);
  (**(code **)(local_e + 0xc))();
  while ((uVar1 = local_a, cVar2 = func_0x00001cc8(&local_e), cVar2 != '\0' &&
         ((((**(code **)(*param_1 + 500))(param_1,uVar1), extraout_A0 == (int *)0x0 ||
           (cVar2 = (**(code **)(*extraout_A0 + 0x338))(), cVar2 == '\0')) ||
          (*(char *)((int)extraout_A0 + 0xb2) != '\0'))))) {
    (**(code **)(local_e + 0x10))();
  }
  return;
}



// Function: FUN_0000104e at 0000104e
// Size: 170 bytes

void FUN_0000104e(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *extraout_A0;
  int local_e;
  undefined4 local_a;
  
  FUN_00001cb8(&local_e);
  (**(code **)(local_e + 0xc))();
  while ((uVar1 = local_a, cVar2 = func_0x00001cc8(&local_e), cVar2 != '\0' &&
         (((((**(code **)(*param_1 + 500))(param_1,uVar1), extraout_A0 == (int *)0x0 ||
            (cVar2 = (**(code **)(*extraout_A0 + 0x338))(), cVar2 == '\0')) ||
           (cVar2 = (**(code **)(*extraout_A0 + 0x344))(), cVar2 == '\0')) ||
          ((*(char *)((int)extraout_A0 + 0xb2) != '\0' && (param_2._0_1_ == '\0'))))))) {
    (**(code **)(local_e + 0x10))();
  }
  return;
}



// Function: FUN_000010f8 at 000010f8
// Size: 176 bytes

undefined4 FUN_000010f8(int param_1)

{
  char cVar2;
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0x26);
  local_10 = 0x12a5c;
  local_c = (**(code **)(*local_8 + 0x58))();
  FUN_00000a8e(&local_10);
  piVar4 = extraout_A0;
  while ((cVar2 = FUN_00000098(&local_10), piVar3 = (int *)0x0, cVar2 != '\0' &&
         (cVar2 = (**(code **)(*piVar4 + 0x60))(), piVar3 = piVar4, cVar2 == '\0'))) {
    func_0x00000a48(&local_10);
    piVar4 = extraout_A0_00;
  }
  uVar1 = 0;
  if ((piVar3 != (int *)0x0) && (uVar1 = (**(code **)(*piVar3 + 100))(), (char)uVar1 == '\0')) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x26) + 0xc4))(*(int **)(param_1 + 0x26),piVar3);
  }
  return uVar1;
}



// Function: FUN_000011a8 at 000011a8
// Size: 16 bytes

void FUN_000011a8(void)

{
  return;
}



// Function: FUN_000011b8 at 000011b8
// Size: 134 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000011b8(int *param_1,int param_2)

{
  int *extraout_A0;
  int extraout_A0_00;
  
  (**(code **)(*param_1 + 500))((char)param_1,(char)*(undefined4 *)(param_2 + 0x14));
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 300))((char)param_1,(char)param_2);
  }
  else {
    if (*(char *)((int)extraout_A0 + 0xb2) != '\0') {
      (**(code **)(*param_1 + 0x198))();
      if (extraout_A0_00 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    (**(code **)(*extraout_A0 + 400))();
  }
  return;
}



// Function: FUN_00001240 at 00001240
// Size: 160 bytes

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00001240(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  int *piVar2;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = *(int **)(param_1 + 0x60);
  local_14 = 0xc4aa;
  local_c = local_10;
  if (local_10 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    (**(code **)(*local_10 + 0x5c))();
    local_8 = extraout_A0;
  }
  (**(code **)(local_14 + 0xc))();
  piVar2 = local_10;
  while( true ) {
    cVar1 = FUN_000036e8(&local_14);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = (**(code **)(*piVar2 + 100))(piVar2,param_2);
    if (cVar1 != '\0') break;
    (**(code **)(local_14 + 0x10))();
    piVar2 = local_c;
  }
  return;
}



// Function: FUN_000012e0 at 000012e0
// Size: 26 bytes

void FUN_000012e0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x134))(param_1,param_2);
  return;
}



// Function: FUN_000012fa at 000012fa
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000012fa(int *param_1)

{
  (**(code **)(*param_1 + 0x248))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001348 at 00001348
// Size: 126 bytes

void FUN_00001348(int *param_1,int *param_2)

{
  char cVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  
  (**(code **)(*param_1 + 0x1a4))(param_1,param_2);
  (**(code **)(*extraout_A0 + 0x88))();
  cVar1 = (**(code **)(*param_2 + 0x78))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x1a4))(param_1,param_2);
    FUN_00003788(extraout_A0_01);
  }
  else {
    (**(code **)(*param_1 + 0x1a4))(param_1,param_2);
    FUN_00003750(extraout_A0_00);
  }
  return;
}



// Function: FUN_000013c6 at 000013c6
// Size: 80 bytes

void FUN_000013c6(int *param_1,int param_2)

{
  int *extraout_A0;
  undefined4 extraout_A0_00;
  
  *(undefined1 *)(param_2 + 0x10) = 0;
  (**(code **)(*param_1 + 0x1a4))(param_1,param_2);
  (**(code **)(*extraout_A0 + 0x88))();
  (**(code **)(*param_1 + 0x1a4))(param_1,param_2);
  FUN_00003790(extraout_A0_00);
  return;
}



// Function: FUN_00001416 at 00001416
// Size: 26 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001416(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000015b2 at 000015b2
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000015b2(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001686 at 00001686
// Size: 258 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_00001686(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_A0;
  undefined1 extraout_A0b;
  int extraout_A0_00;
  int extraout_A0_01;
  undefined2 uVar3;
  undefined1 uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x14) >> 0x18;
  if (uVar1 == 1) {
    uVar3 = (undefined2)((uint)param_1 >> 0x10);
    if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
      uVar4 = 0x2e;
      func_0x00004f78();
      (**(code **)(*param_1 + 0x264))();
      (**(code **)(*param_1 + 0x19c))((short)param_1,uVar3,uVar4);
      if (extraout_A0_01 != 0) {
        func_0x000019e8((char)*(undefined4 *)(extraout_A0_01 + 0x7c));
      }
    }
    else {
      func_0x00004f78();
      if (extraout_A0 != 0) {
        func_0x00004f78();
        func_0x000019e8(extraout_A0b);
      }
      (**(code **)(*param_1 + 0x268))();
      (**(code **)(*param_1 + 0x198))();
      if (extraout_A0_00 != 0) {
        FUN_000019e0((char)*(undefined4 *)(extraout_A0_00 + 0x7c));
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x22c))();
  }
  else {
    iVar2 = uVar1 - 0xfa;
    if (iVar2 == 0) {
      *(undefined1 *)(param_2 + 0x10) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar2;
}



// Function: FUN_000017ba at 000017ba
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017ba(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  bool bVar3;
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
    bVar3 = true;
    (**(code **)(*param_1 + 0xf0))();
    if (extraout_A0 != (int *)0x0) {
      cVar2 = (**(code **)(*extraout_A0 + 0xcc))(extraout_A0,param_2);
      bVar3 = cVar2 == '\0';
    }
    if (bVar3) {
      (**(code **)(*param_1 + 0x140))(param_1,param_2);
    }
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x144))(param_1,param_2);
    FUN_00001c10();
  }
  (**(code **)(*param_1 + 0x144))(param_1,param_2);
  return;
}



// Function: FUN_00001886 at 00001886
// Size: 84 bytes

void FUN_00001886(int *param_1,int param_2)

{
  int *extraout_A0;
  
  *(undefined1 *)(param_2 + 0x10) = 0;
  (**(code **)(*param_1 + 500))(param_1,*(undefined4 *)(param_2 + 0x14));
  if (extraout_A0 == (int *)0x0) {
    (**(code **)(*param_1 + 300))(param_1,param_2);
  }
  else {
    (**(code **)(*extraout_A0 + 0x268))();
  }
  return;
}



// Function: FUN_000018da at 000018da
// Size: 276 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000018da(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  undefined4 extraout_A0_01;
  int *piVar3;
  undefined1 auStack_6a [52];
  undefined2 local_36;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_36 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_00025f52;
  _DAT_00025f52 = auStack_6a;
  iVar1 = func_0x000076a8((char)auStack_6a);
  if (iVar1 == 0) {
    if (param_2._0_1_ == '\0') {
      if (DAT_000260ac != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = FUN_00001e90();
      if (cVar2 == '\0') {
        halt_baddata();
      }
      (**(code **)(*param_1 + 0x274))();
    }
    local_10 = (int *)param_1[0x18];
    local_14 = 0xc4aa;
    local_c = local_10;
    if (local_10 == (int *)0x0) {
      local_8 = 0;
    }
    else {
      (**(code **)(*local_10 + 0x5c))();
      local_8 = extraout_A0;
    }
    (**(code **)(local_14 + 0xc))();
    piVar3 = local_10;
    while (cVar2 = FUN_000036e8((char)&local_14), cVar2 != '\0') {
      FUN_00003768((short)piVar3);
      (**(code **)(local_14 + 0x10))();
      piVar3 = local_c;
    }
    (**(code **)(*param_1 + 0x1a4))();
    iStack_24 = 0xc4aa;
    piStack_20 = extraout_A0_00;
    piStack_1c = extraout_A0_00;
    if (extraout_A0_00 == (int *)0x0) {
      uStack_18 = 0;
    }
    else {
      (**(code **)(*extraout_A0_00 + 0x5c))();
      uStack_18 = extraout_A0_01;
    }
    (**(code **)(iStack_24 + 0xc))();
    while (cVar2 = FUN_000036e8((char)&iStack_24), cVar2 != '\0') {
      FUN_00003768((short)piStack_20);
      (**(code **)(iStack_24 + 0x10))();
      piStack_20 = piStack_1c;
    }
    _DAT_00025f52 = local_30;
  }
  else {
    DAT_000260ad = 1;
    FUN_00001c10((short)((uint)local_34 >> 0x10));
  }
  return;
}



// Function: FUN_000019e0 at 000019e0
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000019e0(void)

{
  uint in_D0;
  char cVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  code *in_A1;
  int unaff_A4;
  int unaff_A6;
  
  *(byte *)(unaff_A4 + -1) = *(byte *)(unaff_A4 + -1) & ~('\x01' << (in_D0 & 7));
  (*in_A1)();
  *(undefined4 *)(unaff_A6 + -0x20) = 0xa8ee;
  *(undefined4 *)(unaff_A6 + -0x20) = 0xc4aa;
  *(int **)(unaff_A6 + -0x1c) = extraout_A0;
  *(int **)(unaff_A6 + -0x18) = extraout_A0;
  if (extraout_A0 == (int *)0x0) {
    *(undefined4 *)(unaff_A6 + -0x14) = 0;
  }
  else {
    (**(code **)(*extraout_A0 + 0x5c))();
    *(undefined4 *)(unaff_A6 + -0x14) = extraout_A0_00;
  }
  (**(code **)(*(int *)(unaff_A6 + -0x20) + 0xc))();
  while( true ) {
    cVar1 = FUN_000036e8();
    if (cVar1 == '\0') break;
    FUN_00003768();
    (**(code **)(*(int *)(unaff_A6 + -0x20) + 0x10))();
  }
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0x2c);
  return;
}



// Function: FUN_00001a08 at 00001a08
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a08(void)

{
  char cVar1;
  undefined4 extraout_A0;
  int *unaff_A2;
  undefined4 uVar2;
  int unaff_A6;
  
  (**(code **)(*unaff_A2 + 0x5c))();
  *(undefined4 *)(unaff_A6 + -0x14) = extraout_A0;
  (**(code **)(*(int *)(unaff_A6 + -0x20) + 0xc))();
  uVar2 = *(undefined4 *)(unaff_A6 + -0x1c);
  while( true ) {
    cVar1 = FUN_000036e8((char)unaff_A6 + -0x20);
    if (cVar1 == '\0') break;
    FUN_00003768((short)uVar2);
    (**(code **)(*(int *)(unaff_A6 + -0x20) + 0x10))();
    uVar2 = *(undefined4 *)(unaff_A6 + -0x18);
  }
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0x2c);
  return;
}



// Function: FUN_00001a94 at 00001a94
// Size: 228 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00001a94(int *param_1,undefined4 param_2)

{
  char cVar2;
  undefined4 uVar1;
  undefined4 extraout_A0;
  int *extraout_A0_00;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  if (param_2._0_1_ == '\0') {
    return 0;
  }
  local_10 = (int *)param_1[0x18];
  local_14 = 0xc4aa;
  local_c = local_10;
  if (local_10 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    (**(code **)(*local_10 + 0x5c))();
    local_8 = extraout_A0;
  }
  (**(code **)(local_14 + 0xc))();
  cVar2 = FUN_000036e8(&local_14);
  if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x1a4))();
  if (extraout_A0_00 != (int *)0x0) {
    (**(code **)(*extraout_A0_00 + 0x5c))();
  }
  (*_DAT_0000c4b6)();
  uVar1 = FUN_00001bf0();
  return uVar1;
}



// Function: FUN_00001be8 at 00001be8
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001be8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001bf0(void)

{
  char cVar1;
  int unaff_A6;
  
  cVar1 = FUN_000036e8(unaff_A6 + -0x20);
  if (cVar1 == '\0') {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c0c at 00001c0c
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c10 at 00001c10
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001c48 at 00001c48
// Size: 16 bytes

undefined4 FUN_00001c48(void)

{
  int in_D0;
  undefined4 uVar1;
  bool in_ZF;
  
  if ((in_ZF) || (in_D0 == 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001c70 at 00001c70
// Size: 24 bytes

undefined4 FUN_00001c70(void)

{
  undefined4 in_D0;
  char cVar1;
  int *unaff_A2;
  int unaff_A6;
  bool in_ZF;
  
  if (!in_ZF) {
    *(undefined4 *)(unaff_A6 + -4) = in_D0;
    cVar1 = (**(code **)(*unaff_A2 + 0x414))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_00001c88 at 00001c88
// Size: 10 bytes

undefined4 FUN_00001c88(void)

{
  return 0;
}



// Function: FUN_00001c94 at 00001c94
// Size: 10 bytes

undefined4 FUN_00001c94(void)

{
  return 0;
}



// Function: FUN_00001c9e at 00001c9e
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001c9e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001cb8 at 00001cb8
// Size: 37 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001cb8(void)

{
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x10) = *(undefined4 *)(*(int *)(unaff_A6 + 8) + 0x30);
  *(undefined4 *)(unaff_A6 + -0xc) = *(undefined4 *)(*(int *)(unaff_A6 + 8) + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001cf2 at 00001cf2
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001cf2(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x178))();
  if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d08(void)

{
  int unaff_A6;
  bool in_ZF;
  
  if (in_ZF) {
    *(undefined4 *)(unaff_A6 + -8) = *(undefined4 *)(*(int *)(unaff_A6 + 8) + 0x30);
    *(undefined4 *)(unaff_A6 + -4) = *(undefined4 *)(*(int *)(unaff_A6 + 8) + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001d36 at 00001d36
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d36(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d38 at 00001d38
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d48 at 00001d48
// Size: 36 bytes

void FUN_00001d48(int *param_1)

{
  (**(code **)(*param_1 + 0x230))();
  (**(code **)(*param_1 + 0x234))();
  return;
}



// Function: FUN_00001d6c at 00001d6c
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d6c(int param_1)

{
  if (*(int *)(param_1 + 0x76) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001d80 at 00001d80
// Size: 4 bytes

void FUN_00001d80(void)

{
  return;
}



// Function: FUN_00001d84 at 00001d84
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d84(int *param_1)

{
  char cVar1;
  
  if (*(int *)((int)param_1 + 0x7a) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (**(code **)(*param_1 + 0x178))();
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001dde at 00001dde
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001dde(void)

{
  if (_DAT_0002580c != (int *)0x0) {
    (**(code **)(*_DAT_0002580c + 0x1e0))();
  }
  return;
}



// Function: FUN_00001e00 at 00001e00
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e2a at 00001e2a
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e2a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001e40 at 00001e40
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_00001e40(undefined2 param_1,int *param_2)

{
  int iVar1;
  
  FUN_00003850(param_1,param_2);
  if (((*(short *)((int)param_2 + 0x12) == 3) || (*(short *)((int)param_2 + 0x12) == 4)) ||
     (iVar1 = *(ushort *)((int)param_2 + 0x12) - 5, iVar1 == 0)) {
    iVar1 = (**(code **)(*param_2 + 0x78))();
    if ((char)iVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar1;
}



// Function: FUN_00001e60 at 00001e60
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_00001e60(void)

{
  int iVar1;
  int *unaff_A2;
  bool in_ZF;
  
  if (((in_ZF) || (*(short *)((int)unaff_A2 + 0x12) == 4)) ||
     (iVar1 = *(ushort *)((int)unaff_A2 + 0x12) - 5, iVar1 == 0)) {
    iVar1 = (**(code **)(*unaff_A2 + 0x78))();
    if ((char)iVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar1;
}



// Function: FUN_00001e90 at 00001e90
// Size: 31 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ee8 at 00001ee8
// Size: 16 bytes

void FUN_00001ee8(void)

{
  undefined4 in_D0;
  int unaff_A2;
  
  *(ushort *)(unaff_A2 + 0x22) = (ushort)((uint)in_D0 >> 0x10) & 0xff;
  return;
}



// Function: FUN_00001ef8 at 00001ef8
// Size: 4 bytes

void FUN_00001ef8(void)

{
  return;
}



// Function: FUN_00001efc at 00001efc
// Size: 46 bytes

void FUN_00001efc(int *param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 0;
  while (*(char *)((int)param_1 + 0x3a) == '\0') {
    (**(code **)(*param_1 + 0x184))();
  }
  return;
}



// Function: FUN_00001f2a at 00001f2a
// Size: 30 bytes

void FUN_00001f2a(undefined4 param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x6c))();
  }
  return;
}



// Function: FUN_00001f48 at 00001f48
// Size: 270 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001f48(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_A0;
  undefined1 auStack_4a [52];
  short local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(undefined1 *)((int)param_1 + 0x2f);
  *(undefined1 *)((int)param_1 + 0x2f) = param_2._0_1_;
  *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + 1;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8(auStack_4a);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x100))();
    uVar3 = 0;
    if (extraout_A0 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x250))((short)param_1,extraout_A0);
    }
    if (*(char *)((int)param_1 + 0x52) != '\0') {
      (**(code **)(*_DAT_000264b2 + 0xf0))();
      uVar3 = (**(code **)(*param_1 + 0x280))();
    }
    _DAT_00025f52 = local_10;
    *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
    if (*(short *)((int)param_1 + 0x6a) == 0) {
      DAT_000260ad = 0;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x2f) = uVar1;
    *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
    if (*(short *)((int)param_1 + 0x6a) == 0) {
      if (local_16 != 0) {
        FUN_00001ee8();
        (**(code **)(*param_1 + 0x270))();
      }
      uVar3 = FUN_00002688();
    }
    else {
      uVar3 = FUN_00001c10();
    }
  }
  *(undefined1 *)((int)param_1 + 0x2f) = uVar1;
  return uVar3;
}



// Function: FUN_00002056 at 00002056
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002056(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002138 at 00002138
// Size: 36 bytes

void FUN_00002138(void)

{
  int *unaff_A2;
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0xf0))();
  (**(code **)(*unaff_A2 + 0x280))();
  return;
}



// Function: FUN_00002174 at 00002174
// Size: 166 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002174(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
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
    cVar2 = (**(code **)(*param_2 + 0x5c))();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x26) + 0xac))((short)*(int **)(param_1 + 0x26),param_2);
    }
    _DAT_00025f52 = local_10;
  }
  else {
    cVar2 = (**(code **)(*param_2 + 0x58))();
    if (cVar2 != '\0') {
      FUN_00000e10(param_2);
    }
    FUN_00001c10();
  }
  return;
}



// Function: FUN_0000221a at 0000221a
// Size: 34 bytes

void FUN_0000221a(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x104))(param_1,param_2);
  }
  return;
}



// Function: FUN_0000223c at 0000223c
// Size: 30 bytes

void FUN_0000223c(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x2a) + 0xac))(*(int **)(param_1 + 0x2a),param_2);
  return;
}



// Function: FUN_0000225a at 0000225a
// Size: 80 bytes

undefined4 FUN_0000225a(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) && (*(char *)(param_2 + 4) != '\0')) {
    FUN_00002688();
  }
  func_0x00001ea8();
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x58))();
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_00000e10((char)param_2);
    }
  }
  return uVar1;
}



// Function: FUN_000022aa at 000022aa
// Size: 166 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022aa(int *param_1)

{
  int iVar1;
  char cVar2;
  int *extraout_A0;
  undefined2 uStack_1e;
  int local_e [2];
  
  uStack_1e = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x288))();
  (**(code **)(*_DAT_000264b2 + 0xfc))();
  FUN_00001cb8(local_e);
  (**(code **)(local_e[0] + 0xc))();
  while( true ) {
    iVar1 = local_e[1];
    cVar2 = func_0x00001cc8((char)local_e);
    if (cVar2 == '\0') break;
    (**(code **)(*param_1 + 500))(uStack_1e,(char)iVar1);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 0x3c0))();
    }
    (**(code **)(local_e[0] + 0x10))();
  }
  return;
}



// Function: FUN_00002350 at 00002350
// Size: 140 bytes

void FUN_00002350(int *param_1)

{
  FUN_00001ee8();
  FUN_00001e60();
  DAT_000266ac = 1;
  (**(code **)(*param_1 + 0x25c))();
  if (DAT_00025b26 == '\0') {
    FUN_00001ee8();
    (**(code **)(*param_1 + 0x1ac))();
  }
  FUN_00001ee8();
  if (*(char *)((int)param_1 + 0x7e) != '\0') {
    uRam00000144 = 0xffff;
  }
  *(undefined2 *)((int)param_1 + 0x6a) = 0;
  (**(code **)(*param_1 + 0x130))();
  (**(code **)(*param_1 + 0x264))();
  FUN_00001c48();
  return;
}



// Function: FUN_000023dc at 000023dc
// Size: 88 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000023dc(int param_1,int param_2)

{
  char cVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = func_0x00004f68(param_2);
  if (cVar1 == '\0') {
    func_0x00004f78();
    func_0x00001a00();
    iVar2 = extraout_A0_00;
    iVar3 = extraout_A0_01;
  }
  else {
    FUN_00001a08();
    iVar2 = extraout_A0;
  }
  if (iVar2 == param_2) {
    *(undefined2 *)(param_1 + 0x3e) = 0;
    return;
  }
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x000019e8(iVar2);
  cVar1 = func_0x00004f70(param_2);
  if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002428 at 00002428
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002428(void)

{
  char cVar1;
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x000019e8();
  cVar1 = func_0x00004f70();
  if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000246c at 0000246c
// Size: 86 bytes

void FUN_0000246c(int *param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    param_2 = param_1;
  }
  if (param_2 != *(int **)((int)param_1 + 0x66)) {
    (**(code **)(**(int **)((int)param_1 + 0x66) + 0xc0))();
    *(int **)((int)param_1 + 0x66) = param_2;
    (**(code **)(**(int **)((int)param_1 + 0x66) + 0xbc))();
    (**(code **)(*param_1 + 0x22c))();
  }
  return;
}



// Function: FUN_0000259c at 0000259c
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000259c(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x178))();
  if (cVar1 != '\0') {
    cVar1 = FUN_00002690();
    if (cVar1 != '\0') {
      (**(code **)(*_DAT_00025a40 + 0x58))();
      FUN_000026e0(0x57a0,0);
      (**(code **)(*_DAT_00025a40 + 0x6c))();
      cVar1 = FUN_00002690();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x248))();
      }
    }
  }
  return;
}



// Function: FUN_000025e0 at 000025e0
// Size: 22 bytes

void FUN_000025e0(void)

{
  char cVar1;
  int unaff_A6;
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x6c))();
  cVar1 = FUN_00002690();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(unaff_A6 + 8) + 0x248))();
  }
  return;
}



// Function: FUN_000025f8 at 000025f8
// Size: 22 bytes

void FUN_000025f8(void)

{
  int unaff_A6;
  bool in_ZF;
  
  if (!in_ZF) {
    (**(code **)(**(int **)(unaff_A6 + 8) + 0x248))();
  }
  return;
}



// Function: FUN_0000260e at 0000260e
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000260e(int *param_1)

{
  char cVar1;
  
  if (*(short *)((int)param_1 + 0x6a) == 1) {
    FUN_00001ee8();
  }
  if (0 < param_1[0x13]) {
    cVar1 = (**(code **)(*param_1 + 0x178))();
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00002672 at 00002672
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002672(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = *param_2;
  local_6 = param_2[1];
  (**(code **)(*param_1 + 0x204))(param_1,&local_8,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002688 at 00002688
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002688(void)

{
  int unaff_A6;
  
  (**(code **)(**(int **)(unaff_A6 + 8) + 0x204))(*(int **)(unaff_A6 + 8),unaff_A6 + -4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002690 at 00002690
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002690(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x204))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002698 at 00002698
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002698(void)

{
  code *in_A1;
  
  (*in_A1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026a6 at 000026a6
// Size: 30 bytes

void FUN_000026a6(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  func_0x00007210(param_2,auStack_14);
  return;
}



// Function: FUN_000026e0 at 000026e0
// Size: 8 bytes

undefined4 FUN_000026e0(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  int in_A1;
  short *unaff_A3;
  int unaff_A4;
  int unaff_A6;
  
  (**(code **)(in_A1 + 500))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x2b8))();
    if ((char)uVar1 != '\0') {
      *(int *)(unaff_A6 + -8) = (int)*unaff_A3;
      *(int *)(unaff_A6 + -4) = (int)unaff_A3[1];
      (**(code **)(*extraout_A0 + 0x160))();
      (**(code **)(*extraout_A0 + 0x2c8))
                (extraout_A0,unaff_A6 + -8,*(undefined4 *)(unaff_A4 + 0x76));
      uVar1 = (**(code **)(*extraout_A0 + 0x15c))(extraout_A0,*(undefined4 *)(unaff_A6 + 0x10));
    }
  }
  return uVar1;
}



// Function: FUN_000026e8 at 000026e8
// Size: 8 bytes

void FUN_000026e8(void)

{
  char cVar1;
  int *unaff_A2;
  short *unaff_A3;
  int unaff_A6;
  
  if (unaff_A2 != (int *)0x0) {
    cVar1 = (**(code **)(*unaff_A2 + 0x2b8))();
    if (cVar1 != '\0') {
      *(int *)(unaff_A6 + -8) = (int)*unaff_A3;
      *(int *)(unaff_A6 + -4) = (int)unaff_A3[1];
      (**(code **)(*unaff_A2 + 0x160))();
      (**(code **)(*unaff_A2 + 0x2c8))();
      (**(code **)(*unaff_A2 + 0x15c))();
    }
  }
  return;
}



// Function: FUN_000026f0 at 000026f0
// Size: 94 bytes

void FUN_000026f0(void)

{
  char cVar1;
  int *unaff_A2;
  short *unaff_A3;
  int unaff_A6;
  int *in_stack_00000000;
  
  cVar1 = (**(code **)(*in_stack_00000000 + 0x2b8))();
  if (cVar1 != '\0') {
    *(int *)(unaff_A6 + -8) = (int)*unaff_A3;
    *(int *)(unaff_A6 + -4) = (int)unaff_A3[1];
    (**(code **)(*unaff_A2 + 0x160))();
    (**(code **)(*unaff_A2 + 0x2c8))();
    (**(code **)(*unaff_A2 + 0x15c))();
  }
  return;
}



// Function: FUN_0000274e at 0000274e
// Size: 62 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000274e(int *param_1,undefined2 *param_2)

{
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x230))();
  local_8 = *param_2;
  local_6 = param_2[1];
  (**(code **)(*param_1 + 0x21c))(param_1,&local_8,*(undefined4 *)((int)param_1 + 0x76));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000027da at 000027da
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000027da(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002836 at 00002836
// Size: 30 bytes

void FUN_00002836(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  func_0x00007210(param_2,auStack_14);
  return;
}



// Function: FUN_000028dc at 000028dc
// Size: 62 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000028dc(int *param_1,undefined2 *param_2)

{
  undefined2 local_8;
  undefined2 local_6;
  
  (**(code **)(*param_1 + 0x234))();
  local_8 = *param_2;
  local_6 = param_2[1];
  (**(code **)(*param_1 + 0x228))(param_1,&local_8,*(undefined4 *)((int)param_1 + 0x7a));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002968 at 00002968
// Size: 90 bytes

void FUN_00002968(int *param_1)

{
  int iVar1;
  int *extraout_A0;
  
  *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + 1;
  iVar1 = 500;
  while( true ) {
    (**(code **)(*param_1 + 0x128))();
    if ((extraout_A0 == (int *)0x0) || (iVar1 == 0)) break;
    (**(code **)(*extraout_A0 + 0x6c))();
    iVar1 = iVar1 + -1;
  }
  *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
  return;
}



// Function: FUN_000029c2 at 000029c2
// Size: 18 bytes

void FUN_000029c2(undefined4 param_1,undefined4 param_2)

{
  func_0x00004f80(param_2);
  return;
}



// Function: FUN_000029d4 at 000029d4
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000029d4(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
  FUN_00001ef8(param_1);
  return;
}



// Function: FUN_000029f0 at 000029f0
// Size: 32 bytes

void FUN_000029f0(void)

{
  FUN_00001bf0();
  FUN_00001ef8();
  return;
}



// Function: FUN_00002a10 at 00002a10
// Size: 30 bytes

undefined1 FUN_00002a10(int param_1,undefined8 param_2)

{
  undefined1 local_c;
  
  (**(code **)(param_1 + 2))();
  local_c = (undefined1)((ulonglong)param_2 >> 0x28);
  return local_c;
}



// Function: FUN_00002a2e at 00002a2e
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a2e(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
  FUN_00001ef8(param_1);
  return;
}



// Function: FUN_00002a6a at 00002a6a
// Size: 18 bytes

void FUN_00002a6a(int param_1)

{
  (**(code **)(param_1 + 2))();
  return;
}



// Function: FUN_00002a7c at 00002a7c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a7c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
  FUN_00001ef8(param_1);
  return;
}



// Function: FUN_00002ab8 at 00002ab8
// Size: 22 bytes

void FUN_00002ab8(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 2))(param_2);
  return;
}



// Function: FUN_00002ace at 00002ace
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ace(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
  FUN_00001ef8(param_1);
  return;
}



// Function: FUN_00002b0a at 00002b0a
// Size: 22 bytes

void FUN_00002b0a(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 2))(param_2);
  return;
}



// Function: FUN_00002b20 at 00002b20
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b20(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
  FUN_00001ef8(param_1);
  return;
}



// Function: FUN_00002b5c at 00002b5c
// Size: 22 bytes

undefined1 FUN_00002b5c(int param_1)

{
  undefined1 uStack_6;
  
  (**(code **)(param_1 + 2))();
  return uStack_6;
}



// Function: FUN_00002b72 at 00002b72
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b72(int param_1,uint param_2)

{
  *(uint *)(param_1 + 6) = _DAT_00025b42 & param_2;
  FUN_00001bf0(*(undefined4 *)(param_1 + 6));
  FUN_00001ef8(param_1);
  return;
}



// Function: FUN_00002bae at 00002bae
// Size: 22 bytes

undefined1 FUN_00002bae(int param_1)

{
  undefined1 uStack_6;
  
  (**(code **)(param_1 + 2))();
  return uStack_6;
}



// Function: FUN_00002bc4 at 00002bc4
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002bc4(void)

{
  if ((_DAT_000265ce != (int *)0x0) && (DAT_00026578 == '\0')) {
    (**(code **)(*_DAT_000265ce + 0x6c))();
  }
  return;
}



// Function: FUN_00002bf4 at 00002bf4
// Size: 62 bytes

undefined4 FUN_00002bf4(void)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000904;
  FUN_00002bc4();
  FUN_00002a10(0x265d2);
  return uVar1;
}



// Function: FUN_00002c66 at 00002c66
// Size: 52 bytes

undefined4 FUN_00002c66(void)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000904;
  FUN_00002bc4();
  FUN_00002bae(0x26618);
  return uVar1;
}



// Function: FUN_00002c9a at 00002c9a
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002c9a(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000904;
  if (_DAT_000265ce != (int *)0x0) {
    (**(code **)(*_DAT_000265ce + 0x70))();
  }
  DAT_0002652a = 1;
  _DAT_00026570 = param_1;
  FUN_00002ab8(0x265ee,param_1);
  return uVar1;
}



// Function: FUN_00002cee at 00002cee
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002cee(undefined4 *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  
  if (_DAT_000265ce != (int *)0x0) {
    (**(code **)(*_DAT_000265ce + 0x70))();
  }
  if (param_1 == (undefined4 *)&DAT_0002657a) {
    DAT_00026579 = 1;
  }
  else {
    DAT_0002652a = 0;
    sVar1 = 0x10;
    puVar2 = (undefined4 *)&DAT_0002652c;
    do {
      *puVar2 = *param_1;
      sVar1 = sVar1 + -1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    } while (sVar1 != -1);
  }
  return;
}



// Function: FUN_00002d42 at 00002d42
// Size: 52 bytes

undefined4 FUN_00002d42(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000904;
  FUN_00002cee(param_1);
  FUN_00002b0a(0x265fc,param_1);
  return uVar1;
}



// Function: FUN_00002da6 at 00002da6
// Size: 38 bytes

void FUN_00002da6(int *param_1)

{
  short *psVar1;
  
  psVar1 = (short *)*param_1;
  psVar1[1] = psVar1[1] + 1;
  if (*psVar1 <= psVar1[1]) {
    psVar1[1] = 0;
  }
  return;
}



// Function: FUN_00002dcc at 00002dcc
// Size: 170 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002dcc(void)

{
  short sVar1;
  int in_A0;
  undefined4 *extraout_A0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_A5;
  
  _DAT_00026514 = unaff_A5;
  _DAT_00026526 = _DAT_00026574;
  if (((cRam000008cd == '\0') && (DAT_00026576 != '\0')) && (DAT_00026577 != '\0')) {
    if (_DAT_000265be == 0) {
      if (DAT_00026579 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (DAT_00026579 == '\0') {
        _DAT_000265c8 = 0;
      }
      if (_DAT_000265c8 <= _DAT_000265c4) {
        FUN_00002da6(_DAT_000265be,in_A0 + -8);
        sVar1 = 0x10;
        puVar2 = (undefined4 *)*extraout_A0;
        puVar3 = (undefined4 *)&DAT_0002657a;
        do {
          *puVar3 = *puVar2;
          sVar1 = sVar1 + -1;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_00026526 = _DAT_000265c2;
    }
  }
  return *(undefined4 *)(in_A0 + -4);
}



// Function: FUN_00002e82 at 00002e82
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e82(undefined4 param_1,undefined4 param_2)

{
  if ((DAT_00026576 != '\0') && (DAT_00026577 != '\0')) {
    if (DAT_00026579 != '\0') {
      if (DAT_0002652a != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_00026526 = param_2._0_2_;
  }
  return;
}



// Function: FUN_00002ec4 at 00002ec4
// Size: 30 bytes

void FUN_00002ec4(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  return;
}



// Function: FUN_00002ee2 at 00002ee2
// Size: 58 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00002ee2(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  if (param_2._2_1_ != '\0') {
    (**(code **)(*param_1 + 0x6c))();
  }
  uVar1 = DAT_00026576;
  DAT_00026576 = param_2._0_1_;
  return uVar1;
}



// Function: FUN_00002f1c at 00002f1c
// Size: 44 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f1c(int *param_1,undefined4 param_2)

{
  if (0 < param_2._0_2_) {
    _DAT_00026574 = param_2._0_2_;
    (**(code **)(*param_1 + 0x6c))();
  }
  return;
}



// Function: FUN_00002f48 at 00002f48
// Size: 26 bytes

void FUN_00002f48(int *param_1)

{
  (**(code **)(*param_1 + 0x6c))();
  return;
}



// Function: FUN_00002f62 at 00002f62
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f62(void)

{
  if ((DAT_00026576 != '\0') && (DAT_00026577 != '\0')) {
    DAT_00026579 = 0;
    _DAT_00026526 = _DAT_00026574;
  }
  return;
}



// Function: FUN_00002f8a at 00002f8a
// Size: 14 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f8a(void)

{
  _DAT_000265c8 = 0;
  return;
}



// Function: FUN_00002f98 at 00002f98
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002f98(undefined4 param_1,int param_2)

{
  _DAT_000265c4 = param_2 / (int)_DAT_000265c2;
  _DAT_000265c8 = 0;
  return;
}



// Function: FUN_00002fbc at 00002fbc
// Size: 28 bytes

undefined1 FUN_00002fbc(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = DAT_00026578;
  DAT_00026578 = param_2._0_1_;
  return uVar1;
}



// Function: FUN_00002fd8 at 00002fd8
// Size: 122 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fd8(int *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  short sVar2;
  int extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_00026576;
  DAT_00026576 = 0;
  FUN_00003066(param_1);
  (**(code **)(*param_1 + 0x58))();
  _DAT_000265be = extraout_A0;
  if (extraout_A0 != 0) {
    FUN_00002da6(extraout_A0);
    sVar2 = 0x10;
    puVar3 = (undefined4 *)*extraout_A0_00;
    puVar4 = (undefined4 *)&DAT_0002657a;
    do {
      *puVar4 = *puVar3;
      sVar2 = sVar2 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar2 != -1);
    _DAT_000265c2 = param_2;
    DAT_00026576 = uVar1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003066 at 00003066
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003066(void)

{
  undefined4 *extraout_A0;
  
  if (_DAT_000265be != (undefined4 *)0x0) {
    if (0 < *(short *)*_DAT_000265be) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00001d08(_DAT_000265be);
    _DAT_000265be = extraout_A0;
  }
  return;
}



// Function: FUN_000030ae at 000030ae
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000030ae(int param_1)

{
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_1 + 0x3a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000030e0 at 000030e0
// Size: 112 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000030e0(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xec))();
  if (*(short *)((int)param_1 + 0x26) != *(short *)((int)param_1 + 0x36)) {
    (**(code **)(*param_1 + 0x20))(param_1,0x1e,param_1);
    (**(code **)(*(int *)param_1[0x12] + 0x128))();
    param_1[0x12] = 0;
    if (0 < *(short *)(param_1 + 0xe)) {
      cVar1 = FUN_00001e90();
      if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    (**(code **)(*param_1 + 0xf8))();
  }
  return;
}



// Function: FUN_00003158 at 00003158
// Size: 30 bytes

void FUN_00003158(int *param_1,undefined4 param_2)

{
  if (param_2._0_1_ != '\0') {
    (**(code **)(*param_1 + 0xf0))();
  }
  return;
}



// Function: FUN_00003176 at 00003176
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003176(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  uVar3 = 0x84;
  FUN_00003470(param_1);
  uVar2 = 0;
  uVar1 = 0x92;
  func_0x000026b0(0x23);
  (**(code **)(*_DAT_000266a8 + 0x19c))((short)_DAT_000266a8,uVar2,uVar3);
  FUN_000026f0(0x23,3,uVar1);
  return;
}



// Function: FUN_000031ce at 000031ce
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031ce(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x48) != 0) && (*(char *)(param_1 + 0x42) == '\0')) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x360))
                      ((short)*(int **)(param_1 + 0x48),(char)param_2);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x42) = 1;
      *(undefined4 *)(param_1 + 0x3e) = param_2;
    }
  }
  if (*(char *)(_DAT_000266a8 + 0x52) == '\0') {
    func_0x000026b0(0x69);
  }
  return;
}



// Function: FUN_0000322a at 0000322a
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000322a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x323e;
  func_0x00007398(param_3);
  func_0x000075d0(param_3,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000326a at 0000326a
// Size: 36 bytes

void FUN_0000326a(undefined4 *param_1)

{
  FUN_00002428(param_1);
  *param_1 = 0x11df0;
  return;
}



// Function: FUN_0000328e at 0000328e
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000328e(int param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 auStack_4e [52];
  undefined2 local_1a;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (*(int *)(param_1 + 0x16) != 0) {
    (**(code **)(**(int **)(param_1 + 0x16) + 0x11c))();
    local_8 = extraout_A0;
  }
  if (local_8 != (int *)0x0) {
    local_1a = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_14 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4e;
    iVar2 = func_0x000076a8(auStack_4e);
    if (iVar2 == 0) {
      if (*(char *)((int)local_8 + 0x1a) == '\0') {
        (**(code **)(*local_8 + 0x88))();
      }
      else {
        (**(code **)(*local_8 + 0x8c))();
      }
      _DAT_00025f52 = local_14;
    }
    else {
      sVar1 = *(short *)((int)local_8 + 6);
      *(undefined4 *)(*(int *)(param_1 + 0x16) + 0x1a) = 0;
      (**(code **)(*local_8 + 0x98))();
      cVar3 = (**(code **)(*local_8 + 0x58))();
      if (cVar3 != '\0') {
        FUN_00000e10(local_8);
        local_8 = extraout_A0_00;
      }
      iVar2 = (int)sVar1;
      uVar4 = local_1a;
      uVar5 = local_18;
      FUN_00001be8();
      FUN_00001c10((short)((uint)local_18 >> 0x10),uVar4,uVar5,iVar2);
    }
    if (*(char *)((int)local_8 + 0x1d) != '\0') {
      (**(code **)(*local_8 + 0xa0))();
    }
    *(bool *)((int)local_8 + 0x1a) = *(char *)((int)local_8 + 0x1a) == '\0';
    (**(code **)(*local_8 + 0x90))();
  }
  return;
}



// Function: FUN_000033de at 000033de
// Size: 98 bytes

void FUN_000033de(int param_1)

{
  char cVar1;
  undefined4 extraout_A0;
  
  if (*(int *)(param_1 + 0x1a) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x1a) + 0x1a) != '\0') {
      (**(code **)(**(int **)(param_1 + 0x1a) + 0x80))();
    }
    (**(code **)(**(int **)(param_1 + 0x1a) + 0x98))();
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1a) + 0x58))();
    if (cVar1 != '\0') {
      FUN_00000e10(*(undefined4 *)(param_1 + 0x1a));
      *(undefined4 *)(param_1 + 0x1a) = extraout_A0;
    }
  }
  return;
}



// Function: FUN_00003440 at 00003440
// Size: 10 bytes

undefined4 FUN_00003440(void)

{
  return 0;
}



// Function: FUN_0000344a at 0000344a
// Size: 38 bytes

void FUN_0000344a(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int iStack_8;
  
  if (param_2 == 0x65) {
    *(int *)((int)param_1 + 0x126) = *(int *)((int)param_1 + 0x126) + -1;
  }
  else {
    local_c = 1;
    iVar1 = (**(code **)(*param_1 + 0x150))();
    iStack_8 = iVar1 + 1;
    if (local_c < iVar1 + 1) {
      piVar2 = &iStack_8;
    }
    else {
      piVar2 = &local_c;
    }
    (**(code **)(*param_1 + 0x154))(param_1,*piVar2);
  }
  FUN_00000d78(param_1,param_2,param_3);
  return;
}



// Function: FUN_00003470 at 00003470
// Size: 78 bytes

void FUN_00003470(void)

{
  int iVar1;
  int *unaff_A2;
  int unaff_A6;
  int *in_stack_00000000;
  
  iVar1 = (**(code **)(*in_stack_00000000 + 0x150))();
  *(int *)(unaff_A6 + -4) = iVar1 + 1;
  (**(code **)(*unaff_A2 + 0x154))();
  FUN_00000d78();
  return;
}



// Function: FUN_000034be at 000034be
// Size: 196 bytes

void FUN_000034be(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  short sVar5;
  undefined1 auStack_104 [256];
  
  cVar4 = (**(code **)(*param_2 + 0x84))();
  sVar5 = (short)param_1;
  if ((((cVar4 == '\0') && (cVar4 = (**(code **)(*param_2 + 0x88))(), cVar4 == '\0')) &&
      (0x1f < *(short *)((int)param_2 + 0x22))) && (*(short *)((int)param_2 + 0x22) < 0x80)) {
    if (*(uint *)((int)param_1 + 0x11e) <= (uint)(param_2[6] - *(int *)((int)param_1 + 0x122))) {
      func_0x00007350(sVar5 + 0x1e,0xd2);
    }
    func_0x00007348((short)((int)param_1 + 0x1e));
    puVar2 = auStack_104;
    puVar3 = (undefined1 *)((int)param_1 + 0x1e);
    for (iVar1 = *(byte *)((int)param_1 + 0x1e) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(*param_1 + 0xd0))(sVar5,(short)auStack_104);
    *(int *)((int)param_1 + 0x122) = param_2[6];
  }
  else {
    func_0x00005be0(sVar5,(char)param_2);
  }
  return;
}



// Function: FUN_00003582 at 00003582
// Size: 38 bytes

void FUN_00003582(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xd4))(*(int **)(param_1 + 8),param_2);
  }
  return;
}



// Function: FUN_000035a8 at 000035a8
// Size: 94 bytes

void FUN_000035a8(int param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x84))();
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x88))(), cVar1 == '\0')) &&
      (0x1f < *(short *)((int)param_2 + 0x22))) && (*(short *)((int)param_2 + 0x22) < 0x80)) {
    *(int *)(param_1 + 0x122) = param_2[6];
    return;
  }
  func_0x00005be8(param_1,param_2);
  return;
}



// Function: FUN_00003606 at 00003606
// Size: 202 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003606(int *param_1,int param_2,undefined2 param_3,undefined1 param_4)

{
  char cVar1;
  int extraout_A0;
  undefined2 extraout_A0w;
  undefined2 uVar2;
  
  if (param_2 == 0x2b) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      thunk_EXT_FUN_00007210((short)param_1,0x2b,param_3,param_4);
    }
  }
  if ((param_2 == 0x2b) && (_DAT_00027fb4 != (int *)0x0)) {
    func_0x00000e00();
    func_0x000073b0(0x32);
    uVar2 = 0;
    if (extraout_A0 != 0) {
      func_0x00005d28((char)extraout_A0);
      uVar2 = extraout_A0w;
    }
    func_0x00000e00();
    func_0x00005d30(uVar2,0x1f,(short)_DAT_00027fb4);
    (**(code **)(*_DAT_00027fb4 + 0x108))((short)_DAT_00027fb4,uVar2);
  }
  FUN_000007ea((short)param_1,(short)param_2,param_3,param_4);
  return;
}



// Function: FUN_000036d0 at 000036d0
// Size: 22 bytes

void FUN_000036d0(int param_1)

{
  FUN_000022aa(param_1);
  if (*(char *)(param_1 + 0x199) != '\0') {
    FUN_000029f0();
  }
  return;
}



// Function: FUN_000036e8 at 000036e8
// Size: 24 bytes

void FUN_000036e8(void)

{
  byte bVar1;
  byte bVar2;
  uint in_D0;
  byte *in_A1;
  int unaff_A2;
  undefined2 uStack00000004;
  
  bVar1 = *in_A1;
  bVar2 = '\x01' << (in_D0 & 7);
  *in_A1 = bVar1 & ~bVar2;
  if ((bVar1 & bVar2) != 0) {
    uStack00000004 = *(undefined2 *)(unaff_A2 + 0x19a);
    FUN_000029f0();
  }
  return;
}



// Function: FUN_00003700 at 00003700
// Size: 30 bytes

void FUN_00003700(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_14 [16];
  
  func_0x00007210(param_2,auStack_14);
  return;
}



// Function: thunk_EXT_FUN_00007210 at 00003738
// Size: 6 bytes

void thunk_EXT_FUN_00007210(void)

{
  func_0x00007210();
  return;
}



// Function: FUN_00003740 at 00003740
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003740(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003748 at 00003748
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003750 at 00003750
// Size: 24 bytes

undefined4 FUN_00003750(void)

{
  undefined4 uVar1;
  int *extraout_A0;
  short *unaff_A3;
  int *unaff_A4;
  int unaff_A6;
  
  (**(code **)(*unaff_A4 + 500))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x2b8))();
    if ((char)uVar1 != '\0') {
      *(int *)(unaff_A6 + -8) = (int)*unaff_A3;
      *(int *)(unaff_A6 + -4) = (int)unaff_A3[1];
      (**(code **)(*extraout_A0 + 0x160))(extraout_A0,unaff_A6 + -8);
      (**(code **)(*extraout_A0 + 0x2c8))
                (extraout_A0,unaff_A6 + -8,*(undefined4 *)((int)unaff_A4 + 0x76));
      uVar1 = (**(code **)(*extraout_A0 + 0x15c))(extraout_A0,*(undefined4 *)(unaff_A6 + 0x10));
    }
  }
  return uVar1;
}



// Function: FUN_00003768 at 00003768
// Size: 16 bytes

void FUN_00003768(void)

{
  char cVar1;
  int *unaff_A2;
  short *unaff_A3;
  int unaff_A6;
  
  cVar1 = (**(code **)(*unaff_A2 + 0x2b8))();
  if (cVar1 != '\0') {
    *(int *)(unaff_A6 + -8) = (int)*unaff_A3;
    *(int *)(unaff_A6 + -4) = (int)unaff_A3[1];
    (**(code **)(*unaff_A2 + 0x160))();
    (**(code **)(*unaff_A2 + 0x2c8))();
    (**(code **)(*unaff_A2 + 0x15c))();
  }
  return;
}



// Function: FUN_00003778 at 00003778
// Size: 16 bytes

void FUN_00003778(void)

{
  int *unaff_A2;
  short *unaff_A3;
  int unaff_A6;
  bool in_ZF;
  
  if (!in_ZF) {
    *(int *)(unaff_A6 + -8) = (int)*unaff_A3;
    *(int *)(unaff_A6 + -4) = (int)unaff_A3[1];
    (**(code **)(*unaff_A2 + 0x160))();
    (**(code **)(*unaff_A2 + 0x2c8))();
    (**(code **)(*unaff_A2 + 0x15c))();
  }
  return;
}



// Function: FUN_00003788 at 00003788
// Size: 8 bytes

void FUN_00003788(void)

{
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x160))();
  (**(code **)(*unaff_A2 + 0x2c8))();
  (**(code **)(*unaff_A2 + 0x15c))();
  return;
}



// Function: FUN_00003790 at 00003790
// Size: 8 bytes

void FUN_00003790(void)

{
  int *in_A0;
  int *unaff_A2;
  
  (**(code **)(*in_A0 + 0x160))();
  (**(code **)(*unaff_A2 + 0x2c8))();
  (**(code **)(*unaff_A2 + 0x15c))();
  return;
}



// Function: FUN_00003798 at 00003798
// Size: 47 bytes

void FUN_00003798(void)

{
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x2c8))();
  (**(code **)(*unaff_A2 + 0x15c))();
  return;
}



// Function: FUN_00003850 at 00003850
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003850(void)

{
  uint *puVar1;
  uint unaff_D5;
  short unaff_A3w;
  int *unaff_A4;
  int unaff_A6;
  
  *unaff_A4 = -*unaff_A4;
  puVar1 = (uint *)(unaff_A6 + -0x72 + (int)unaff_A3w);
  *puVar1 = unaff_D5 ^ *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



