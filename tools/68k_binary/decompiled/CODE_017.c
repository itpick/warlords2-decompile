// Warlords II - Decompiled 68k Code
// Segment: CODE_017
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000028 at 00000028
// Size: 28 bytes

void FUN_00000028(undefined4 param_1)

{
  func_0x00005380(param_1,0x67726261);
  return;
}



// Function: FUN_00000044 at 00000044
// Size: 26 bytes

void FUN_00000044(int *param_1)

{
  (**(code **)(*param_1 + 0x78))();
  return;
}



// Function: FUN_0000005e at 0000005e
// Size: 28 bytes

void FUN_0000005e(undefined4 param_1)

{
  func_0x00005380(param_1,0x33646c74);
  return;
}



// Function: FUN_0000007a at 0000007a
// Size: 28 bytes

void FUN_0000007a(undefined4 param_1)

{
  func_0x00005380(param_1,0x33646c62);
  return;
}



// Function: FUN_00000096 at 00000096
// Size: 28 bytes

void FUN_00000096(undefined4 param_1)

{
  func_0x00005380(param_1,0x33646c6c);
  return;
}



// Function: FUN_000000b2 at 000000b2
// Size: 28 bytes

void FUN_000000b2(undefined4 param_1)

{
  func_0x00005380(param_1,0x33646c72);
  return;
}



// Function: FUN_000000ce at 000000ce
// Size: 28 bytes

void FUN_000000ce(undefined4 param_1)

{
  func_0x00005380(param_1,0x33646672);
  return;
}



// Function: FUN_000000ea at 000000ea
// Size: 182 bytes

void FUN_000000ea(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int extraout_A0;
  int local_14;
  int local_c;
  
  func_0x00004540(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x228))();
  if (extraout_A0 != 0) {
    uVar1 = *(undefined2 *)(extraout_A0 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xd2) = *(undefined4 *)(extraout_A0 + 0x18);
    *(undefined2 *)((int)param_1 + 0xd6) = uVar1;
    (**(code **)(*param_1 + 0x3c8))((char)param_1,(short)extraout_A0 + 0x12);
  }
  (**(code **)(*param_1 + 0x39c))((short)param_1,0xec);
  iVar2 = ((local_c - local_14) + -0xe) / 2;
  param_1[0x2f] = iVar2 + param_1[0x2f];
  param_1[0x31] = iVar2 + param_1[0x31];
  return;
}



// Function: FUN_000001a0 at 000001a0
// Size: 58 bytes

void FUN_000001a0(int param_1)

{
  int extraout_A0;
  
  func_0x000056d0(param_1);
  *(undefined4 *)(extraout_A0 + 0xd2) = *(undefined4 *)(param_1 + 0xd2);
  *(undefined2 *)(extraout_A0 + 0xd6) = *(undefined2 *)(param_1 + 0xd6);
  *(undefined4 *)(extraout_A0 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined2 *)(extraout_A0 + 0xd0) = *(undefined2 *)(param_1 + 0xd0);
  return;
}



// Function: FUN_000001da at 000001da
// Size: 182 bytes

void FUN_000001da(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int extraout_A0;
  int local_14;
  int local_c;
  
  func_0x00004570(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x228))();
  if (extraout_A0 != 0) {
    uVar1 = *(undefined2 *)(extraout_A0 + 0x1c);
    *(undefined4 *)((int)param_1 + 0xd2) = *(undefined4 *)(extraout_A0 + 0x18);
    *(undefined2 *)((int)param_1 + 0xd6) = uVar1;
    (**(code **)(*param_1 + 0x3c8))((char)param_1,(short)extraout_A0 + 0x12);
  }
  (**(code **)(*param_1 + 0x39c))((short)param_1,0xec);
  iVar2 = ((local_c - local_14) + -0xc) / 2;
  param_1[0x2f] = iVar2 + param_1[0x2f];
  param_1[0x31] = iVar2 + param_1[0x31];
  return;
}



// Function: FUN_00000290 at 00000290
// Size: 58 bytes

void FUN_00000290(int param_1)

{
  int extraout_A0;
  
  func_0x000056d0(param_1);
  *(undefined4 *)(extraout_A0 + 0xd2) = *(undefined4 *)(param_1 + 0xd2);
  *(undefined2 *)(extraout_A0 + 0xd6) = *(undefined2 *)(param_1 + 0xd6);
  *(undefined4 *)(extraout_A0 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined2 *)(extraout_A0 + 0xd0) = *(undefined2 *)(param_1 + 0xd0);
  return;
}



// Function: FUN_000002ca at 000002ca
// Size: 72 bytes

void FUN_000002ca(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 in_stack_fffffff0;
  
  func_0x00004510(param_1,param_2,param_3,param_4,
                  CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),
                           CONCAT11(param_5._2_1_,(char)in_stack_fffffff0)) & 0xffffff,param_6);
  if (param_1[0x2f] == 0) {
    (**(code **)(*param_1 + 0x42c))();
  }
  return;
}



// Function: FUN_00000312 at 00000312
// Size: 40 bytes

void FUN_00000312(undefined4 param_1)

{
  int *extraout_A0;
  
  func_0x000056d0(param_1);
  (**(code **)(*extraout_A0 + 0x42c))();
  return;
}



// Function: FUN_0000033a at 0000033a
// Size: 28 bytes

void FUN_0000033a(undefined4 param_1)

{
  func_0x00005380(param_1,0x33646961);
  return;
}



// Function: FUN_00000356 at 00000356
// Size: 126 bytes

void FUN_00000356(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  
  uVar1 = 0x96;
  func_0x00001350(param_1,param_2,param_3,param_4);
  *(undefined2 *)((int)param_1 + 0xa6) = param_6;
  param_1[0x1f] = 0x44c;
  (**(code **)(*param_1 + 0x3dc))(param_1,(short)((uint)param_7 >> 0x10),uVar1);
  (**(code **)(*param_1 + 0x70))();
  return;
}



// Function: FUN_000003d4 at 000003d4
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000003d4(int param_1)

{
  int extraout_A0;
  
  func_0x000051d0((short)param_1);
  *(undefined4 *)(extraout_A0 + 0xa8) = 0;
  *(undefined2 *)(extraout_A0 + 0xa6) = *(undefined2 *)(param_1 + 0xa6);
  if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000042e at 0000042e
// Size: 186 bytes

void FUN_0000042e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 unaff_D3;
  undefined4 in_stack_ffffffe4;
  
  if (param_6._0_2_ == 0xc) {
    unaff_D3 = 0xff0000;
  }
  else if (param_6._0_2_ == 0x10) {
    unaff_D3 = 0xff00;
  }
  else if (param_6._0_2_ == 0x20) {
    unaff_D3 = 0xff;
  }
  (**(code **)(*param_1 + 0x3d0))
            (param_1,param_2,param_3,param_4,
             CONCAT22((short)((uint)in_stack_ffffffe4 >> 0x10),
                      CONCAT11(param_5._2_1_,(char)in_stack_ffffffe4)) & 0xffffff,
             CONCAT22(param_6._2_2_,5),unaff_D3);
  *(short *)(param_1 + 0x2e) = param_6._0_2_;
  *(undefined2 *)(param_1 + 0x2d) = param_7._0_2_;
  *(undefined1 *)((int)param_1 + 0xb6) = param_7._2_1_;
  param_1[0x1f] = 0x44e;
  if (*(char *)((int)param_1 + 0xb6) != '\0') {
    (**(code **)(*param_1 + 0x3a8))();
  }
  if (param_1[0x2c] == 0) {
    (**(code **)(*param_1 + 0x3f0))();
  }
  return;
}



// Function: FUN_000004e8 at 000004e8
// Size: 76 bytes

void FUN_000004e8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00004390(param_1,param_2,param_3,param_4);
  if (param_1[0x2c] == 0) {
    (**(code **)(*param_1 + 0x3dc))();
  }
  return;
}



// Function: FUN_00000534 at 00000534
// Size: 178 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000534(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000290(param_1);
  *(undefined4 *)((int)extraout_A0 + 0xda) = 0;
  *(undefined1 *)((int)extraout_A0 + 0xde) = 1;
  *(undefined2 *)(extraout_A0 + 0x36) = 0xffff;
  if (*(int *)(param_1 + 0xda) != 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar1 = func_0x000076a8(auStack_4a);
    if (iVar1 == 0) {
      func_0x00005e90(extraout_A0);
      _DAT_00025f52 = local_10;
    }
    else {
      (**(code **)(*extraout_A0 + 0x4c))();
      func_0x00001c10();
    }
  }
  return;
}



// Function: FUN_000005e6 at 000005e6
// Size: 14 bytes

undefined4 FUN_000005e6(void)

{
  return 0x636b6579;
}



// Function: FUN_000005f4 at 000005f4
// Size: 62 bytes

void FUN_000005f4(int param_1,undefined4 param_2)

{
  if ((param_2._0_1_ < 'A') || ('Z' < param_2._0_1_)) {
    *(char *)(param_1 + 0x1e) = param_2._0_1_;
    *(char *)(param_1 + 0x1f) = param_2._0_1_ + -0x20;
  }
  else {
    *(char *)(param_1 + 0x1e) = param_2._0_1_ + ' ';
    *(char *)(param_1 + 0x1f) = param_2._0_1_;
  }
  return;
}



// Function: FUN_00000632 at 00000632
// Size: 22 bytes

void FUN_00000632(undefined4 param_1,undefined4 param_2)

{
  func_0x00001308(param_1,param_2);
  return;
}



// Function: FUN_00000648 at 00000648
// Size: 70 bytes

void FUN_00000648(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x000015a8(param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  func_0x00002370((short)param_1 + 0x88);
  return;
}



