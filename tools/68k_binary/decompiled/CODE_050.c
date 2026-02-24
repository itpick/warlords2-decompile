// Warlords II - Decompiled 68k Code
// Segment: CODE_050
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000001a at 0000001a
// Size: 14 bytes

void FUN_0000001a(void)

{
  return;
}



// Function: FUN_00000028 at 00000028
// Size: 44 bytes

void FUN_00000028(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x84);
  if (extraout_A0 != 0) {
    FUN_00000054(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000054 at 00000054
// Size: 52 bytes

void FUN_00000054(undefined4 *param_1)

{
  FUN_000015a0(param_1);
  *param_1 = 0xd9c2;
  param_1[0x1f] = 0x20202020;
  param_1[0x20] = 0x20202020;
  return;
}



// Function: FUN_00000088 at 00000088
// Size: 78 bytes

undefined4 FUN_00000088(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  FUN_000015b8(param_1,param_2);
  (**(code **)(*param_1 + 0xa0))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x408))(extraout_A0,param_1[0x1f],param_1[0x20]);
  }
  return uVar1;
}



// Function: FUN_000000d6 at 000000d6
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000d6(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000031a8(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_2 + 0xa0))();
    param_1[0x1f] = iVar1;
    iVar1 = (**(code **)(*param_2 + 0xa0))();
    param_1[0x20] = iVar1;
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_0000017a at 0000017a
// Size: 14 bytes

void FUN_0000017a(void)

{
  return;
}



// Function: FUN_00000188 at 00000188
// Size: 14 bytes

void FUN_00000188(void)

{
  return;
}



// Function: FUN_00000196 at 00000196
// Size: 44 bytes

void FUN_00000196(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xb0);
  if (extraout_A0 != 0) {
    FUN_000001c2(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000001c2 at 000001c2
// Size: 64 bytes

void FUN_000001c2(undefined4 *param_1)

{
  func_0x00001348(param_1);
  *param_1 = 0xdd5e;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  param_1[0x2b] = 0x20202020;
  param_1[0x1f] = 5;
  return;
}



// Function: FUN_00000202 at 00000202
// Size: 246 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000202(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined4 local_15e;
  int *local_15a;
  int aiStack_14a [64];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_15a = param_2;
  local_15e = param_1;
  func_0x00002ff0();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar4 = func_0x000076a8((short)auStack_4a);
  if (iVar4 != 0) {
    local_15a = param_1;
    local_15e = (int *)0x2e2;
    (**(code **)(*param_1 + 0x4c))();
    local_15e = (int *)local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00001c10();
  }
  piVar2 = aiStack_14a;
  puVar3 = &DAT_00025b76;
  for (iVar4 = DAT_00025b76 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar2 = *puVar3;
    piVar2 = (int *)((int)piVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  local_15a = param_2;
  local_15e = (int *)0x286;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x29) = uVar5;
  local_15e = param_2;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xa6) = uVar5;
  puVar6 = (undefined4 *)&stack0xfffffeaa;
  if (*(short *)(param_1 + 0x29) != -1) {
    local_15a = aiStack_14a;
    puVar6 = &local_15e;
    local_15e = (int *)CONCAT22(*(undefined2 *)((int)param_1 + 0xa6),*(undefined2 *)(param_1 + 0x29)
                               );
    func_0x00007658();
  }
  *(undefined1 *)((int)puVar6 + -2) = 0;
  *(int **)((int)puVar6 + -6) = aiStack_14a;
  *(int **)((int)puVar6 + -10) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar6 + -10) + 0x3dc);
  *(undefined4 *)((int)puVar6 + -0xe) = 0x2c8;
  (*pcVar1)();
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_000002fc at 000002fc
// Size: 14 bytes

void FUN_000002fc(void)

{
  return;
}



// Function: FUN_0000030a at 0000030a
// Size: 14 bytes

void FUN_0000030a(void)

{
  return;
}



// Function: FUN_00000318 at 00000318
// Size: 44 bytes

void FUN_00000318(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xac);
  if (extraout_A0 != 0) {
    FUN_00000344(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000344 at 00000344
// Size: 64 bytes

void FUN_00000344(undefined4 *param_1)

{
  func_0x00001348(param_1);
  *param_1 = 0xe14a;
  param_1[0x2a] = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 1;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined2 *)((int)param_1 + 0xa6) = 0xffff;
  param_1[0x1f] = 7;
  return;
}



// Function: FUN_00000384 at 00000384
// Size: 190 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000384(int *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = 0xa0;
  FUN_00001350(param_1,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x29) = param_6._2_1_;
  *(undefined1 *)((int)param_1 + 0xa5) = param_6._2_1_;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x3d8))((char)param_1,uVar2);
    _DAT_00025f52 = (undefined1 *)local_10;
    (**(code **)(*param_1 + 0x70))();
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10((char)((uint)local_14 >> 0x10));
}



// Function: FUN_00000446 at 00000446
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000446(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00002ff0(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((char)auStack_4a);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x29) = uVar2;
    *(undefined1 *)((int)param_1 + 0xa5) = *(undefined1 *)(param_1 + 0x29);
    uVar2 = 0xba;
    (**(code **)(*param_2 + 0x84))();
    (**(code **)(*param_1 + 0x3d8))((short)param_1,uVar2);
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00000500 at 00000500
// Size: 14 bytes

void FUN_00000500(void)

{
  return;
}



// Function: FUN_0000050e at 0000050e
// Size: 14 bytes

void FUN_0000050e(void)

{
  return;
}



// Function: FUN_0000051c at 0000051c
// Size: 44 bytes

void FUN_0000051c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xaa);
  if (extraout_A0 != 0) {
    FUN_00000548(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000548 at 00000548
// Size: 52 bytes

void FUN_00000548(undefined4 *param_1)

{
  func_0x00001348(param_1);
  *param_1 = 0xe526;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0xffff;
  param_1[0x1f] = 0x17;
  return;
}



// Function: FUN_0000057c at 0000057c
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000057c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00002ff0(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x84))();
    (**(code **)(*param_1 + 0x3d4))();
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00000620 at 00000620
// Size: 14 bytes

void FUN_00000620(void)

{
  return;
}



// Function: FUN_0000062e at 0000062e
// Size: 14 bytes

void FUN_0000062e(void)

{
  return;
}



// Function: FUN_0000063c at 0000063c
// Size: 44 bytes

void FUN_0000063c(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xac);
  if (extraout_A0 != 0) {
    FUN_00000668(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000668 at 00000668
// Size: 64 bytes

void FUN_00000668(undefined4 *param_1)

{
  func_0x00001348(param_1);
  *param_1 = 0xe8fe;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0xa5) = 1;
  *(undefined2 *)((int)param_1 + 0xa6) = 0xffff;
  param_1[0x1f] = 0x13;
  return;
}



// Function: FUN_000006a8 at 000006a8
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006a8(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00002ff0(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((char)auStack_4a);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x29) = uVar2;
    *(undefined1 *)((int)param_1 + 0xa5) = *(undefined1 *)(param_1 + 0x29);
    uVar2 = 0x1c;
    (**(code **)(*param_2 + 0x84))();
    (**(code **)(*param_1 + 0x3d8))((short)param_1,uVar2);
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00000762 at 00000762
// Size: 14 bytes

void FUN_00000762(void)

{
  return;
}



// Function: FUN_00000770 at 00000770
// Size: 14 bytes

void FUN_00000770(void)

{
  return;
}



// Function: FUN_0000077e at 0000077e
// Size: 44 bytes

void FUN_0000077e(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xaa);
  if (extraout_A0 != 0) {
    FUN_000007aa(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000007aa at 000007aa
// Size: 52 bytes

void FUN_000007aa(undefined4 *param_1)

{
  func_0x00001348(param_1);
  *param_1 = 0xecda;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0xffff;
  param_1[0x1f] = 10;
  return;
}



// Function: FUN_000007de at 000007de
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007de(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00002ff0(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x84))();
    (**(code **)(*param_1 + 0x3d8))();
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00000882 at 00000882
// Size: 14 bytes

void FUN_00000882(void)

{
  return;
}



// Function: FUN_00000890 at 00000890
// Size: 44 bytes

void FUN_00000890(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xda);
  if (extraout_A0 != 0) {
    FUN_000008bc(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000008bc at 000008bc
// Size: 44 bytes

void FUN_000008bc(undefined4 *param_1)

{
  FUN_00002316(param_1);
  *param_1 = 0xf0b6;
  *(undefined4 *)((int)param_1 + 0xd2) = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = 0;
  return;
}



// Function: FUN_000008e8 at 000008e8
// Size: 374 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008e8(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined1 uVar3;
  undefined1 auStack_90 [52];
  undefined2 local_5c;
  undefined4 local_5a;
  undefined1 *local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = (undefined1)((uint)param_8 >> 0x10);
  FUN_000023dc((short)param_1,param_2,param_3,param_4,param_5);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
    FUN_00001c10((short)((uint)local_14 >> 0x10));
  }
  func_0x000073b0(0xb8);
  piVar2 = (int *)0x0;
  if (extraout_A0 != 0) {
    FUN_00001520((char)extraout_A0);
    piVar2 = extraout_A0_00;
  }
  FUN_00001528((short)piVar2,0,0x5a,0x5b5a,uVar3,0x5b5a);
  local_5c = 0;
  local_5a = 0;
  local_52 = 0;
  local_4e = 0;
  local_56 = _DAT_00025f52;
  _DAT_00025f52 = auStack_90;
  iVar1 = func_0x000076a8((short)auStack_90);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0x174))((short)piVar2,(char)param_1);
    _DAT_00025f52 = (undefined1 *)local_10;
    *(int **)((int)param_1 + 0xd6) = piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (undefined1)((uint)piVar2 >> 0x10);
  FUN_00000e10((char)piVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00001c10((short)((uint)local_5a >> 0x10),uVar3);
}



// Function: FUN_00000a70 at 00000a70
// Size: 254 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a70(int *param_1,undefined1 param_2)

{
  int iVar1;
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = (undefined2)((uint)param_1 >> 0x10);
  FUN_00002510((short)param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  uVar3 = SUB41(auStack_4a,0);
  iVar1 = func_0x000076a8(uVar3);
  if (iVar1 == 0) {
    func_0x000073b0(0xb8);
    piVar2 = (int *)0x0;
    if (extraout_A0 != 0) {
      FUN_00001520((char)extraout_A0);
      piVar2 = extraout_A0_00;
    }
    FUN_00001528(piVar2,0,0x5b5a,0x5b5a,uVar3,0x5b5a);
    (**(code **)(*piVar2 + 0x174))(piVar2,param_1);
    _DAT_00025f52 = (undefined1 *)local_10;
    *(int **)((int)param_1 + 0xd6) = piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = 0;
  FUN_00000e10(0);
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10((char)((uint)local_14 >> 0x10),uVar4,uVar3);
}



// Function: FUN_00000b7c at 00000b7c
// Size: 14 bytes

void FUN_00000b7c(void)

{
  return;
}



// Function: FUN_00000b8a at 00000b8a
// Size: 14 bytes

void FUN_00000b8a(void)

{
  return;
}



// Function: FUN_00000b98 at 00000b98
// Size: 44 bytes

void FUN_00000b98(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xb0);
  if (extraout_A0 != 0) {
    FUN_00000bc4(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000bc4 at 00000bc4
// Size: 70 bytes

void FUN_00000bc4(undefined4 *param_1)

{
  func_0x00001348(param_1);
  *param_1 = 0xf4da;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0xae) = 1;
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  param_1[0x1f] = 0xd;
  return;
}



// Function: FUN_00000c0a at 00000c0a
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c0a(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar6;
  undefined2 uVar5;
  undefined4 *puVar7;
  undefined4 local_15e;
  int *local_15a;
  int aiStack_14a [64];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_15a = param_2;
  local_15e = param_1;
  func_0x00002ff0();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar4 = func_0x000076a8((short)auStack_4a);
  if (iVar4 != 0) {
    local_15a = param_1;
    local_15e = (int *)0xd1c;
    (**(code **)(*param_1 + 0x4c))();
    local_15e = (int *)local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00001c10();
  }
  local_15a = param_2;
  local_15e = (int *)0xc6a;
  uVar6 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)((int)param_1 + 0xae) = uVar6;
  local_15e = param_2;
  uVar6 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)((int)param_1 + 0xaf) = uVar6;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x2b) = uVar5;
  piVar2 = aiStack_14a;
  puVar3 = &DAT_00025b76;
  for (iVar4 = DAT_00025b76 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar2 = *puVar3;
    piVar2 = (int *)((int)piVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x29) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xa6) = uVar5;
  puVar7 = (undefined4 *)&stack0xfffffeaa;
  if (*(short *)(param_1 + 0x29) != -1) {
    local_15a = aiStack_14a;
    puVar7 = &local_15e;
    local_15e = (int *)CONCAT22(*(undefined2 *)((int)param_1 + 0xa6),*(undefined2 *)(param_1 + 0x29)
                               );
    func_0x00007658();
  }
  *(undefined1 *)((int)puVar7 + -2) = 0;
  *(int **)((int)puVar7 + -6) = aiStack_14a;
  *(int **)((int)puVar7 + -10) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar7 + -10) + 1000);
  *(undefined4 *)((int)puVar7 + -0xe) = 0xd02;
  (*pcVar1)();
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_00000d36 at 00000d36
// Size: 14 bytes

void FUN_00000d36(void)

{
  return;
}



// Function: FUN_00000d44 at 00000d44
// Size: 14 bytes

void FUN_00000d44(void)

{
  return;
}



// Function: FUN_00000d52 at 00000d52
// Size: 44 bytes

void FUN_00000d52(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xba);
  if (extraout_A0 != 0) {
    FUN_00000d7e(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000d7e at 00000d7e
// Size: 145 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d7e(int *param_1)

{
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_00000bc4(param_1);
  *param_1 = 0xf8ca;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0xff;
  *(undefined4 *)((int)param_1 + 0xb6) = 0xf0000100;
  param_1[0x25] = _DAT_00025ca0;
  param_1[0x26] = _DAT_00025ca4;
  param_1[0x27] = _DAT_00025ca8;
  local_8 = 1;
  local_6 = 1;
  local_c = 1;
  local_a = 1;
  (**(code **)(*param_1 + 0x3bc))(param_1,&local_c);
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  param_1[0x1f] = 6;
  *(undefined2 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 4 bytes

void FUN_00000e10(void)

{
  return;
}



// Function: FUN_00000e14 at 00000e14
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e14(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000c0a(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x2c) = uVar3;
    uVar2 = (**(code **)(*param_2 + 0x88))();
    *(undefined4 *)((int)param_1 + 0xb6) = uVar2;
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00000eb8 at 00000eb8
// Size: 14 bytes

void FUN_00000eb8(void)

{
  return;
}



// Function: FUN_00000ec6 at 00000ec6
// Size: 14 bytes

void FUN_00000ec6(void)

{
  return;
}



// Function: FUN_00000ed4 at 00000ed4
// Size: 44 bytes

void FUN_00000ed4(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xc2);
  if (extraout_A0 != 0) {
    FUN_00000f00(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00000f00 at 00000f00
// Size: 48 bytes

void FUN_00000f00(undefined4 *param_1)

{
  FUN_00000d7e(param_1);
  *param_1 = 0xfce2;
  *(undefined4 *)((int)param_1 + 0xbe) = 0x7fffffff;
  *(undefined4 *)((int)param_1 + 0xba) = 0;
  return;
}



// Function: FUN_00000f30 at 00000f30
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f30(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000e14(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_2 + 0x88))();
    uVar2 = (**(code **)(*param_2 + 0x88))();
    *(undefined4 *)((int)param_1 + 0xba) = uVar2;
    uVar2 = (**(code **)(*param_2 + 0x88))();
    *(undefined4 *)((int)param_1 + 0xbe) = uVar2;
    (**(code **)(*param_1 + 0x41c))(param_1,uVar3);
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00000ff4 at 00000ff4
// Size: 14 bytes

void FUN_00000ff4(void)

{
  return;
}



// Function: FUN_00001002 at 00001002
// Size: 44 bytes

void FUN_00001002(void)

{
  int extraout_A0;
  
  func_0x000073b0(8);
  if (extraout_A0 != 0) {
    FUN_00001b38(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_0000102e at 0000102e
// Size: 14 bytes

void FUN_0000102e(void)

{
  return;
}



// Function: FUN_0000103c at 0000103c
// Size: 14 bytes

void FUN_0000103c(void)

{
  return;
}



// Function: FUN_0000104a at 0000104a
// Size: 44 bytes

void FUN_0000104a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x80);
  if (extraout_A0 != 0) {
    FUN_00001076(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001076 at 00001076
// Size: 56 bytes

void FUN_00001076(undefined4 *param_1)

{
  FUN_000015a0(param_1);
  *param_1 = 0x10166;
  param_1[0x1f] = 0x20202020;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  return;
}



// Function: FUN_000010ae at 000010ae
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000010ae(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000031a8(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_2 + 0xa0))();
    param_1[0x1f] = iVar1;
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_0000113e at 0000113e
// Size: 14 bytes

void FUN_0000113e(void)

{
  return;
}



// Function: FUN_0000114c at 0000114c
// Size: 14 bytes

void FUN_0000114c(void)

{
  return;
}



// Function: FUN_0000115a at 0000115a
// Size: 44 bytes

void FUN_0000115a(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xbc);
  if (extraout_A0 != 0) {
    FUN_00001186(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001186 at 00001186
// Size: 54 bytes

void FUN_00001186(undefined4 *param_1)

{
  func_0x00001368(param_1);
  *param_1 = 0xcd04;
  param_1[0x1f] = 3;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xba) = 0xffff;
  return;
}



// Function: FUN_000011bc at 000011bc
// Size: 58 bytes

void FUN_000011bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00001370(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_000011f6 at 000011f6
// Size: 254 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000011f6(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined4 local_15e;
  int *local_15a;
  int aiStack_14a [64];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_15a = param_2;
  local_15e = param_1;
  func_0x00002ff0();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar4 = func_0x000076a8((short)auStack_4a);
  if (iVar4 != 0) {
    local_15a = param_1;
    local_15e = (int *)0x12de;
    (**(code **)(*param_1 + 0x4c))();
    local_15e = (int *)local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00001c10();
  }
  piVar2 = aiStack_14a;
  puVar3 = &DAT_00025b76;
  for (iVar4 = DAT_00025b76 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar2 = *puVar3;
    piVar2 = (int *)((int)piVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  local_15a = param_2;
  local_15e = (int *)0x127a;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x2e) = uVar5;
  local_15e = param_2;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xba) = uVar5;
  puVar6 = (undefined4 *)&stack0xfffffeaa;
  if (*(short *)(param_1 + 0x2e) != -1) {
    local_15a = aiStack_14a;
    puVar6 = &local_15e;
    local_15e = (int *)CONCAT22(*(undefined2 *)((int)param_1 + 0xba),*(undefined2 *)(param_1 + 0x2e)
                               );
    func_0x00007658();
  }
  *(undefined2 *)((int)puVar6 + -2) = 8;
  *(undefined4 *)((int)puVar6 + -6) = 0;
  *(undefined4 *)((int)puVar6 + -10) = 0;
  *(undefined4 *)((int)puVar6 + -0xe) = 0;
  *(int **)((int)puVar6 + -0x12) = aiStack_14a;
  *(int **)((int)puVar6 + -0x16) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar6 + -0x16) + 0x3d0);
  *(undefined4 *)((int)puVar6 + -0x1a) = 0x12c4;
  (*pcVar1)();
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_000012f8 at 000012f8
// Size: 14 bytes

void FUN_000012f8(void)

{
  return;
}



// Function: FUN_00001306 at 00001306
// Size: 14 bytes

void FUN_00001306(void)

{
  return;
}



// Function: FUN_00001314 at 00001314
// Size: 44 bytes

void FUN_00001314(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xbc);
  if (extraout_A0 != 0) {
    FUN_00001340(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001340 at 00001340
// Size: 11 bytes

void FUN_00001340(undefined4 *param_1)

{
                    /* WARNING: Call to offcut address within same function */
  func_0x00001368(param_1);
  *param_1 = 0xd12c;
  param_1[0x1f] = 4;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xba) = 0xffff;
  return;
}



// Function: FUN_00001350 at 00001350
// Size: 31 bytes

void FUN_00001350(void)

{
  char in_D0b;
  int in_A0;
  undefined1 *in_A1;
  int unaff_A2;
  int unaff_A4;
  
  *in_A1 = *(undefined1 *)(in_A0 + 0x41f9);
  *(char *)(unaff_A4 + 0x2488) = in_D0b + *(char *)(unaff_A4 + 0x2488);
  *(undefined4 *)(unaff_A2 + 0x7c) = 4;
  *(undefined2 *)(unaff_A2 + 0xb8) = 0xffff;
  *(undefined2 *)(unaff_A2 + 0xba) = 0xffff;
  return;
}



// Function: FUN_00001370 at 00001370
// Size: 6 bytes

void FUN_00001370(void)

{
  return;
}



// Function: FUN_00001376 at 00001376
// Size: 80 bytes

void FUN_00001376(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00001370(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x42c))();
  return;
}



// Function: FUN_000013c6 at 000013c6
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000013c6(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  byte bVar6;
  undefined2 uVar5;
  undefined4 *puVar7;
  undefined4 local_162;
  int *local_15e;
  int aiStack_14a [64];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_15e = param_2;
  local_162 = param_1;
  func_0x00002ff0();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar4 = func_0x000076a8((short)auStack_4a);
  if (iVar4 != 0) {
    local_15e = param_1;
    local_162 = (int *)0x14c4;
    (**(code **)(*param_1 + 0x4c))();
    local_162 = (int *)local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00001c10();
  }
  local_15e = param_2;
  local_162 = (int *)0x1426;
  bVar6 = (**(code **)(*param_2 + 0x7c))();
  piVar2 = aiStack_14a;
  puVar3 = &DAT_00025b76;
  for (iVar4 = DAT_00025b76 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar2 = *puVar3;
    piVar2 = (int *)((int)piVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  local_162 = param_2;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x2e) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xba) = uVar5;
  puVar7 = (undefined4 *)&stack0xfffffea6;
  if (*(short *)(param_1 + 0x2e) != -1) {
    local_15e = aiStack_14a;
    local_162 = (int *)CONCAT22(*(undefined2 *)((int)param_1 + 0xba),*(undefined2 *)(param_1 + 0x2e)
                               );
    func_0x00007658();
    puVar7 = &local_162;
  }
  *(undefined2 *)((int)puVar7 + -2) = 9;
  *(undefined4 *)((int)puVar7 + -6) = 1;
  *(undefined4 *)((int)puVar7 + -10) = 0;
  *(uint *)((int)puVar7 + -0xe) = (uint)bVar6;
  *(int **)((int)puVar7 + -0x12) = aiStack_14a;
  *(int **)((int)puVar7 + -0x16) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar7 + -0x16) + 0x3d0);
  *(undefined4 *)((int)puVar7 + -0x1a) = 0x14aa;
  (*pcVar1)();
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_000014de at 000014de
// Size: 14 bytes

void FUN_000014de(void)

{
  return;
}



// Function: FUN_000014ec at 000014ec
// Size: 14 bytes

void FUN_000014ec(void)

{
  return;
}



// Function: FUN_000014fa at 000014fa
// Size: 38 bytes

void FUN_000014fa(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xbc);
  if (extraout_A0 != 0) {
    FUN_00001526(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001520 at 00001520
// Size: 6 bytes

void FUN_00001520(void)

{
  return;
}



// Function: FUN_00001526 at 00001526
// Size: 1 bytes

void FUN_00001526(undefined4 *param_1)

{
  func_0x00001368(param_1);
  *param_1 = 0xd564;
  param_1[0x1f] = 0xc;
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xba) = 0xffff;
  return;
}



// Function: FUN_00001528 at 00001528
// Size: 52 bytes

void FUN_00001528(void)

{
  undefined4 *puVar1;
  int unaff_A6;
  
  puVar1 = *(undefined4 **)(unaff_A6 + 8);
  func_0x00001368(puVar1);
  *puVar1 = 0xd564;
  puVar1[0x1f] = 0xc;
  *(undefined2 *)(puVar1 + 0x2e) = 0xffff;
  *(undefined2 *)((int)puVar1 + 0xba) = 0xffff;
  return;
}



// Function: FUN_0000155c at 0000155c
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000155c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_00001370(param_1,param_2,param_3,param_4);
  local_16 = 0;
  local_14 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x42c))();
    cVar2 = (**(code **)(*param_1 + 0x428))();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x6c))((short)param_1,(short)param_1[0x1f],(short)param_1,0);
    }
    _DAT_00025f52 = (undefined1 *)uStack_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10((short)((uint)local_14 >> 0x10));
}



// Function: FUN_000015a0 at 000015a0
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015a0(void)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  int *unaff_A2;
  int unaff_A6;
  undefined4 uStack00000016;
  undefined2 uStack0000001c;
  undefined2 uStack00000020;
  
  *(undefined4 *)(unaff_A6 + -0xc) = 0;
  *(undefined4 *)(unaff_A6 + -8) = 0;
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar2 = func_0x000076a8(unaff_A6 + -0x46);
  if (iVar2 == 0) {
    uStack00000020 = 0x15e2;
    (**(code **)(*unaff_A2 + 0x42c))();
    uStack00000020 = SUB42(unaff_A2,0);
    uVar1 = uStack00000020;
    uStack0000001c = 0x15ee;
    cVar3 = (**(code **)(*unaff_A2 + 0x428))();
    if (cVar3 != '\0') {
      uStack00000020 = (undefined2)unaff_A2[0x1f];
      uStack00000016 = 0x160a;
      uStack0000001c = uVar1;
      (**(code **)(*unaff_A2 + 0x6c))();
    }
    _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
    return;
  }
  (**(code **)(*unaff_A2 + 0x4c))();
  uStack00000020 = *(undefined2 *)(unaff_A6 + -0x12);
  uStack0000001c = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_000015a8 at 000015a8
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015a8(void)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  int *unaff_A2;
  int unaff_A6;
  undefined4 uStack00000016;
  undefined2 uStack0000001c;
  undefined2 uStack00000020;
  
  *(undefined4 *)(unaff_A6 + -4) = 0;
  *(int *)(unaff_A6 + -0xc) = _DAT_00025f52;
  _DAT_00025f52 = unaff_A6 + -0x46;
  iVar2 = func_0x000076a8(unaff_A6 + -0x46);
  if (iVar2 == 0) {
    uStack00000020 = 0x15e2;
    (**(code **)(*unaff_A2 + 0x42c))();
    uStack00000020 = SUB42(unaff_A2,0);
    uVar1 = uStack00000020;
    uStack0000001c = 0x15ee;
    cVar3 = (**(code **)(*unaff_A2 + 0x428))();
    if (cVar3 != '\0') {
      uStack00000020 = (undefined2)unaff_A2[0x1f];
      uStack00000016 = 0x160a;
      uStack0000001c = uVar1;
      (**(code **)(*unaff_A2 + 0x6c))();
    }
    _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
    return;
  }
  (**(code **)(*unaff_A2 + 0x4c))();
  uStack00000020 = *(undefined2 *)(unaff_A6 + -0x12);
  uStack0000001c = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_000015b8 at 000015b8
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015b8(void)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  undefined4 in_A0;
  int *unaff_A2;
  int unaff_A6;
  undefined4 uStack00000016;
  undefined2 uStack0000001c;
  undefined2 uStack00000020;
  
  _DAT_00025f52 = in_A0;
  iVar2 = func_0x000076a8(unaff_A6 + -0x46);
  if (iVar2 == 0) {
    uStack00000020 = 0x15e2;
    (**(code **)(*unaff_A2 + 0x42c))();
    uStack00000020 = SUB42(unaff_A2,0);
    uVar1 = uStack00000020;
    uStack0000001c = 0x15ee;
    cVar3 = (**(code **)(*unaff_A2 + 0x428))();
    if (cVar3 != '\0') {
      uStack00000020 = (undefined2)unaff_A2[0x1f];
      uStack00000016 = 0x160a;
      uStack0000001c = uVar1;
      (**(code **)(*unaff_A2 + 0x6c))();
    }
    _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
    return;
  }
  (**(code **)(*unaff_A2 + 0x4c))();
  uStack00000020 = *(undefined2 *)(unaff_A6 + -0x12);
  uStack0000001c = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_0000163c at 0000163c
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000163c(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  byte bVar6;
  undefined2 uVar5;
  undefined4 *puVar7;
  undefined4 local_162;
  int *local_15e;
  int aiStack_14a [64];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_15e = param_2;
  local_162 = param_1;
  func_0x00002ff0();
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar4 = func_0x000076a8((short)auStack_4a);
  if (iVar4 != 0) {
    local_15e = param_1;
    local_162 = (int *)0x173a;
    (**(code **)(*param_1 + 0x4c))();
    local_162 = (int *)local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00001c10();
  }
  local_15e = param_2;
  local_162 = (int *)0x169c;
  bVar6 = (**(code **)(*param_2 + 0x7c))();
  piVar2 = aiStack_14a;
  puVar3 = &DAT_00025b76;
  for (iVar4 = DAT_00025b76 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar2 = *puVar3;
    piVar2 = (int *)((int)piVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  local_162 = param_2;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x2e) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xba) = uVar5;
  puVar7 = (undefined4 *)&stack0xfffffea6;
  if (*(short *)(param_1 + 0x2e) != -1) {
    local_15e = aiStack_14a;
    local_162 = (int *)CONCAT22(*(undefined2 *)((int)param_1 + 0xba),*(undefined2 *)(param_1 + 0x2e)
                               );
    func_0x00007658();
    puVar7 = &local_162;
  }
  *(undefined2 *)((int)puVar7 + -2) = 10;
  *(undefined4 *)((int)puVar7 + -6) = 1;
  *(undefined4 *)((int)puVar7 + -10) = 0;
  *(uint *)((int)puVar7 + -0xe) = (uint)bVar6;
  *(int **)((int)puVar7 + -0x12) = aiStack_14a;
  *(int **)((int)puVar7 + -0x16) = param_1;
  pcVar1 = *(code **)(**(int **)((int)puVar7 + -0x16) + 0x3d0);
  *(undefined4 *)((int)puVar7 + -0x1a) = 0x1720;
  (*pcVar1)();
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_00001754 at 00001754
// Size: 72 bytes

void FUN_00001754(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_000015b8(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0x428))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
  }
  return;
}



// Function: FUN_0000179c at 0000179c
// Size: 14 bytes

void FUN_0000179c(void)

{
  return;
}



// Function: FUN_000017aa at 000017aa
// Size: 44 bytes

void FUN_000017aa(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x1a);
  if (extraout_A0 != 0) {
    FUN_000017d6(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000017d6 at 000017d6
// Size: 70 bytes

void FUN_000017d6(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xa902;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[4] = 0;
  return;
}



// Function: FUN_0000181c at 0000181c
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000181c(int *param_1)

{
  int iVar1;
  undefined4 extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x00000dd8(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    FUN_00001e98(0);
    *(undefined4 *)((int)param_1 + 0x16) = extraout_A0;
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_000018a0 at 000018a0
// Size: 14 bytes

void FUN_000018a0(void)

{
  return;
}



// Function: FUN_000018ae at 000018ae
// Size: 14 bytes

void FUN_000018ae(void)

{
  return;
}



// Function: FUN_000018bc at 000018bc
// Size: 44 bytes

void FUN_000018bc(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x9c);
  if (extraout_A0 != 0) {
    FUN_000018e8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_000018e8 at 000018e8
// Size: 86 bytes

void FUN_000018e8(undefined4 *param_1)

{
  FUN_000015a0(param_1);
  *param_1 = 0xa972;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((int)param_1 + 0x8e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)((int)param_1 + 0x8a) = 1;
  return;
}



// Function: FUN_0000193e at 0000193e
// Size: 480 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000193e(int *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000031a8(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    sVar2 = (**(code **)(*param_2 + 0x84))();
    sVar3 = (**(code **)(*param_2 + 0x84))();
    uVar4 = (**(code **)(*param_2 + 0x84))();
    uVar5 = (**(code **)(*param_2 + 0x84))();
    uVar6 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x23) = uVar6;
    uVar6 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)((int)param_1 + 0x8e) = uVar6;
    uVar7 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x22) = uVar7;
    uVar7 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x89) = uVar7;
    uVar7 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0x8a) = uVar7;
    if ((*(ushort *)(param_1 + 0x23) & 1) != 0) {
      *(short *)(param_1 + 0x23) = *(short *)(param_1 + 0x23) + 1;
    }
    if ((*(ushort *)((int)param_1 + 0x8e) & 1) != 0) {
      *(short *)((int)param_1 + 0x8e) = *(short *)((int)param_1 + 0x8e) + 1;
    }
    func_0x000073b0(0x1a);
    iVar1 = 0;
    if (extraout_A0 != 0) {
      FUN_000017d6(extraout_A0);
      iVar1 = extraout_A0_00;
    }
    FUN_0000181c(iVar1);
    param_1[0x20] = iVar1;
    func_0x000073b0(0x1a);
    iVar1 = 0;
    if (extraout_A0_01 != 0) {
      FUN_000017d6(extraout_A0_01);
      iVar1 = extraout_A0_02;
    }
    FUN_0000181c(iVar1);
    param_1[0x21] = iVar1;
    FUN_00001c68();
    param_1[0x24] = extraout_A0_03;
    FUN_00001c68();
    param_1[0x25] = extraout_A0_04;
    FUN_00001c68();
    param_1[0x26] = extraout_A0_05;
    if (0 < sVar3) {
      (**(code **)(*param_1 + 0x3f4))(param_1,CONCAT22(sVar3,uVar5));
    }
    if (0 < sVar2) {
      (**(code **)(*param_1 + 0x3f8))(param_1,CONCAT22(sVar2,uVar4));
    }
    _DAT_00025f52 = (undefined1 *)local_10;
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00001b22 at 00001b22
// Size: 14 bytes

void FUN_00001b22(void)

{
  return;
}



// Function: FUN_00001b30 at 00001b30
// Size: 4 bytes

void FUN_00001b30(void)

{
  return;
}



// Function: FUN_00001b38 at 00001b38
// Size: 6 bytes

void FUN_00001b38(void)

{
  int unaff_A6;
  
  *(char *)(unaff_A6 + 0x4e5e) = *(char *)(unaff_A6 + 0x4e5e) + '\a';
  return;
}



// Function: FUN_00001b3e at 00001b3e
// Size: 44 bytes

void FUN_00001b3e(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xb2);
  if (extraout_A0 != 0) {
    FUN_00001b6a(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001b6a at 00001b6a
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b6a(undefined4 *param_1)

{
  FUN_000018e8(param_1);
  *param_1 = 0xadb2;
  param_1[0x27] = _DAT_00025ca0;
  param_1[0x28] = _DAT_00025ca4;
  param_1[0x29] = _DAT_00025ca8;
  *(undefined2 *)(param_1 + 0x2a) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return;
}



// Function: FUN_00001bbc at 00001bbc
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bbc(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iStack_56;
  int iStack_52;
  int iStack_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0000193e((short)param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x2a) = uVar2;
    if (*(short *)(param_1 + 0x2a) != -1) {
      func_0x00001df0();
      param_1[0x27] = iStack_56;
      param_1[0x28] = iStack_52;
      param_1[0x29] = iStack_4e;
    }
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x2b) = uVar3;
    _DAT_00025f52 = (undefined1 *)local_10;
    FUN_00001c84();
    return;
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10((short)((uint)local_14 >> 0x10));
}



// Function: FUN_00001c10 at 00001c10
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  int *in_stack_00000000;
  
  uVar1 = (**(code **)(*in_stack_00000000 + 0x84))();
  *(undefined2 *)(unaff_A2 + 0xa8) = uVar1;
  if (*(short *)(unaff_A2 + 0xa8) != -1) {
    func_0x00001df0();
    *(undefined4 *)(unaff_A2 + 0x9c) = *(undefined4 *)(unaff_A6 + -0x52);
    *(undefined4 *)(unaff_A2 + 0xa0) = *(undefined4 *)(unaff_A6 + -0x4e);
    *(undefined4 *)(unaff_A2 + 0xa4) = *(undefined4 *)(unaff_A6 + -0x4a);
  }
  uVar2 = (**(code **)(*unaff_A3 + 0x7c))();
  *(undefined1 *)(unaff_A2 + 0xac) = uVar2;
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  FUN_00001c84();
  return;
}



// Function: FUN_00001c68 at 00001c68
// Size: 24 bytes

void FUN_00001c68(void)

{
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00001c84 at 00001c84
// Size: 156 bytes

void FUN_00001c84(void)

{
  short sVar1;
  int *unaff_A2;
  
  (**(code **)(*unaff_A2 + 0x444))();
  if (0 < *(short *)(unaff_A2 + 0x1f)) {
    sVar1 = (**(code **)(*unaff_A2 + 0x3e4))();
    if (sVar1 == 0) {
      (**(code **)(*unaff_A2 + 0x41c))();
    }
  }
  if ((*(short *)((int)unaff_A2 + 0x7e) == 1) && (*(char *)((int)unaff_A2 + 0x43) != '\x05')) {
    sVar1 = (**(code **)(*unaff_A2 + 0x3e0))();
    if (sVar1 == 0) {
      (**(code **)(*unaff_A2 + 0x418))();
    }
  }
  return;
}



// Function: FUN_00001d20 at 00001d20
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001d20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001d98 at 00001d98
// Size: 14 bytes

void FUN_00001d98(void)

{
  return;
}



// Function: FUN_00001da6 at 00001da6
// Size: 14 bytes

void FUN_00001da6(void)

{
  return;
}



// Function: FUN_00001db4 at 00001db4
// Size: 44 bytes

void FUN_00001db4(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xb2);
  if (extraout_A0 != 0) {
    FUN_00001de0(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001de0 at 00001de0
// Size: 35 bytes

void FUN_00001de0(undefined4 *param_1)

{
  FUN_00001b6a(param_1);
  *param_1 = 0xb1fe;
  return;
}



// Function: FUN_00001e04 at 00001e04
// Size: 14 bytes

void FUN_00001e04(void)

{
  return;
}



// Function: FUN_00001e12 at 00001e12
// Size: 14 bytes

void FUN_00001e12(void)

{
  return;
}



// Function: FUN_00001e20 at 00001e20
// Size: 44 bytes

void FUN_00001e20(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xcc);
  if (extraout_A0 != 0) {
    FUN_00001e4c(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00001e4c at 00001e4c
// Size: 76 bytes

void FUN_00001e4c(undefined4 *param_1)

{
  func_0x00001368(param_1);
  *param_1 = 0x9a02;
  param_1[0x1f] = 0xb;
  *(undefined2 *)((int)param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((int)param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0xc2) = 0x20202020;
  *(undefined2 *)((int)param_1 + 0xc6) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xca) = 0xffff;
  return;
}



// Function: FUN_00001e98 at 00001e98
// Size: 6 bytes

void FUN_00001e98(void)

{
  return;
}



// Function: FUN_00001e9e at 00001e9e
// Size: 246 bytes

short FUN_00001e9e(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 0xbe) == 1) {
    sVar1 = 1;
  }
  else if (*(short *)(param_1 + 0xbe) == -1) {
    sVar1 = 0xff;
  }
  else {
    sVar1 = 0;
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    sVar1 = sVar1 + -0x8000;
  }
  else {
    if ((*(byte *)(param_1 + 0xbc) & 1) != 0) {
      sVar1 = sVar1 + 0x100;
    }
    if ((*(byte *)(param_1 + 0xbc) & 2) != 0) {
      sVar1 = sVar1 + 0x200;
    }
    if ((*(byte *)(param_1 + 0xbc) & 4) != 0) {
      sVar1 = sVar1 + 0x400;
    }
    if ((*(byte *)(param_1 + 0xbc) & 8) != 0) {
      sVar1 = sVar1 + 0x800;
    }
    if ((*(byte *)(param_1 + 0xbc) & 0x10) != 0) {
      sVar1 = sVar1 + 0x1000;
    }
    if ((*(byte *)(param_1 + 0xbc) & 0x20) != 0) {
      sVar1 = sVar1 + 0x2000;
    }
    if ((*(byte *)(param_1 + 0xbc) & 0x40) != 0) {
      sVar1 = sVar1 + 0x4000;
    }
  }
  return sVar1;
}



// Function: FUN_00001f94 at 00001f94
// Size: 40 bytes

short FUN_00001f94(int param_1)

{
  short sVar1;
  
  sVar1 = 0x3f8;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    sVar1 = 0x3fc;
  }
  if (*(char *)(param_1 + 0x43) == '\x05') {
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}



// Function: FUN_00001fbc at 00001fbc
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001fbc(int *param_1)

{
  (**(code **)(*param_1 + 0x448))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000216a at 0000216a
// Size: 352 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000216a(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 uVar5;
  short sVar6;
  undefined1 uVar7;
  undefined4 uVar4;
  undefined1 auStack_14a [256];
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = auStack_14a;
  puVar2 = &DAT_00025b76;
  for (iVar3 = DAT_00025b76 + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  func_0x00002ff0(param_1,param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar3 = func_0x000076a8((short)auStack_4a);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
    FUN_00001c10();
  }
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x2e) = uVar5;
  sVar6 = (**(code **)(*param_2 + 0x84))();
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xba) = uVar5;
  uVar7 = (**(code **)(*param_2 + 0x78))();
  *(undefined1 *)(param_1 + 0x2f) = uVar7;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xbe) = uVar5;
  uVar7 = (**(code **)(*param_2 + 0x7c))();
  *(undefined1 *)(param_1 + 0x30) = uVar7;
  uVar4 = (**(code **)(*param_2 + 0x88))();
  *(undefined4 *)((int)param_1 + 0xc2) = uVar4;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)(param_1 + 0x32) = uVar5;
  uVar5 = (**(code **)(*param_2 + 0x84))();
  *(undefined2 *)((int)param_1 + 0xca) = uVar5;
  (**(code **)(*param_1 + 0x438))(param_1,auStack_14a);
  (**(code **)(*param_1 + 0x3d0))(param_1,auStack_14a,(int)sVar6,0,0);
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_000022ce at 000022ce
// Size: 14 bytes

void FUN_000022ce(void)

{
  return;
}



// Function: FUN_000022dc at 000022dc
// Size: 14 bytes

void FUN_000022dc(void)

{
  return;
}



// Function: FUN_000022ea at 000022ea
// Size: 44 bytes

void FUN_000022ea(void)

{
  int extraout_A0;
  
  func_0x000073b0(0xd2);
  if (extraout_A0 != 0) {
    FUN_00002316(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



// Function: FUN_00002316 at 00002316
// Size: 198 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002316(undefined4 *param_1)

{
  FUN_000015a0(param_1);
  *param_1 = 0x84a6;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = _DAT_00025b62;
  param_1[0x23] = _DAT_00025b66;
  param_1[0x24] = _DAT_00025b6a;
  param_1[0x25] = _DAT_00025b6e;
  param_1[0x26] = 0x78;
  *(undefined2 *)(param_1 + 0x27) = 0x7fff;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = _DAT_00025ca0;
  *(undefined4 *)((int)param_1 + 0xae) = _DAT_00025ca4;
  *(undefined4 *)((int)param_1 + 0xb2) = _DAT_00025ca8;
  *(undefined2 *)((int)param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)((int)param_1 + 0xc6) = 0xf0002100;
  *(undefined2 *)((int)param_1 + 0xca) = 0x60;
  *(undefined1 *)((int)param_1 + 0xbd) = 1;
  *(undefined1 *)((int)param_1 + 0xbe) = 1;
  *(undefined1 *)((int)param_1 + 0xbf) = 1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((int)param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((int)param_1 + 0xce) = 0;
  *(undefined2 *)((int)param_1 + 0x4a) = 1;
  *(undefined2 *)((int)param_1 + 0xb6) = 0xffff;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  return;
}



// Function: FUN_000023dc at 000023dc
// Size: 256 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000023dc(int *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6,int *param_7,undefined4 *param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000015a8(param_1,param_2,param_3,param_4,param_5);
  param_1[0x22] = *param_7;
  param_1[0x23] = param_7[1];
  param_1[0x24] = param_7[2];
  param_1[0x25] = param_7[3];
  *(undefined4 *)((int)param_1 + 0xaa) = *param_8;
  *(undefined4 *)((int)param_1 + 0xae) = param_8[1];
  *(undefined4 *)((int)param_1 + 0xb2) = param_8[2];
  *(undefined2 *)((int)param_1 + 0xba) = param_9._0_2_;
  *(undefined1 *)((int)param_1 + 0xbd) = param_9._2_1_;
  *(undefined1 *)((int)param_1 + 0xbe) = param_10._0_1_;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x39c))();
    *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(*(int *)param_1[0x1f] + 0x20);
    *(undefined4 *)(*(int *)param_1[0x1f] + 0x2a) = _DAT_00025854;
    param_1[0x20] = *(int *)(*(int *)param_1[0x1f] + 0x3e);
    (**(code **)(*param_1 + 0xe0))((short)param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10();
}



// Function: FUN_00002510 at 00002510
// Size: 410 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002510(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar3;
  undefined2 uVar2;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  int iStack_5a;
  int iStack_56;
  int iStack_52;
  int iStack_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  func_0x000031a8((short)param_1,(short)param_2);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8((short)auStack_4a);
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0xbd) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0xbe) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x2f) = uVar3;
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)((int)param_1 + 0xbf) = uVar3;
    iVar1 = (**(code **)(*param_2 + 0x88))();
    param_1[0x26] = iVar1;
    uVar2 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)(param_1 + 0x27) = uVar2;
    (**(code **)(*param_2 + 0x98))(param_2,&iStack_5a);
    param_1[0x22] = iStack_5a;
    param_1[0x23] = iStack_56;
    param_1[0x24] = iStack_52;
    param_1[0x25] = iStack_4e;
    uVar2 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)((int)param_1 + 0xba) = uVar2;
    uVar2 = (**(code **)(*param_2 + 0x84))();
    *(undefined2 *)((int)param_1 + 0xb6) = uVar2;
    if (*(short *)((int)param_1 + 0xb6) != -1) {
      func_0x00001df0((short)((uint)&local_66 >> 0x10));
      *(undefined4 *)((int)param_1 + 0xaa) = local_66;
      *(undefined4 *)((int)param_1 + 0xae) = local_62;
      *(undefined4 *)((int)param_1 + 0xb2) = local_5e;
    }
    uVar3 = (**(code **)(*param_2 + 0x7c))();
    *(undefined1 *)(param_1 + 0x2e) = uVar3;
    (**(code **)(*param_1 + 0x39c))();
    _DAT_00025f52 = (undefined1 *)local_10;
    *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(*(int *)param_1[0x1f] + 0x20);
    *(undefined4 *)(*(int *)param_1[0x1f] + 0x2a) = _DAT_00025854;
    param_1[0x20] = *(int *)(*(int *)param_1[0x1f] + 0x3e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
                    /* WARNING: Subroutine does not return */
  FUN_00001c10((short)((uint)local_14 >> 0x10));
}



// Function: FUN_000026ba at 000026ba
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000026ba(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002828 at 00002828
// Size: 142 bytes

void FUN_00002828(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 *extraout_A0;
  undefined2 *extraout_A0_00;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_000015b8(param_1,param_2);
  sVar1 = (short)param_1;
  func_0x00007260(sVar1 + 0x8c);
  local_8 = *extraout_A0;
  local_6 = extraout_A0[1];
  uVar4 = SUB41(&local_8,0);
  func_0x00007260(sVar1 + 0x8c,(short)((uint)&local_8 >> 0x10));
  local_c = *extraout_A0_00;
  local_a = extraout_A0_00[1];
  uVar3 = (undefined2)((uint)&local_c >> 0x10);
  uVar2 = (undefined2)((uint)param_1 >> 0x10);
  (**(code **)(*param_1 + 1000))(sVar1,(char)&local_c,uVar4);
  (**(code **)(*param_1 + 0x3fc))(sVar1,uVar2,uVar3);
  (**(code **)(*param_1 + 0x3fc))();
  return;
}



