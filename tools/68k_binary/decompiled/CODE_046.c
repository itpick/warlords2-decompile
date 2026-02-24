// Warlords II - Decompiled 68k Code
// Segment: CODE_046
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000050 at 00000050
// Size: 96 bytes

void FUN_00000050(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_4._0_1_ != '\0') &&
     ((((param_2._0_2_ != *(short *)(param_1 + 0x2a) ||
        (param_2._2_2_ != *(short *)((int)param_1 + 0xaa))) ||
       (param_3._0_2_ != *(short *)(param_1 + 0x2b))) ||
      (param_3._2_2_ != *(short *)((int)param_1 + 0xae))))) {
    (**(code **)(*param_1 + 0x26c))();
  }
  *(short *)(param_1 + 0x2a) = param_2._0_2_;
  *(short *)((int)param_1 + 0xaa) = param_2._2_2_;
  *(short *)(param_1 + 0x2b) = param_3._0_2_;
  *(short *)((int)param_1 + 0xae) = param_3._2_2_;
  return;
}



// Function: FUN_000000b0 at 000000b0
// Size: 82 bytes

void FUN_000000b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_3._2_1_ != '\0') &&
     (((param_2._0_2_ != *(short *)(param_1 + 0x2c) ||
       (param_2._2_2_ != *(short *)((int)param_1 + 0xb2))) ||
      (param_3._0_2_ != *(short *)(param_1 + 0x2d))))) {
    (**(code **)(*param_1 + 0x26c))();
  }
  *(short *)(param_1 + 0x2c) = param_2._0_2_;
  *(short *)((int)param_1 + 0xb2) = param_2._2_2_;
  *(short *)(param_1 + 0x2d) = param_3._0_2_;
  return;
}



// Function: FUN_00000102 at 00000102
// Size: 176 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000102(int *param_1,undefined4 param_2)

{
  func_0x00001bf0(*(undefined4 *)((int)param_1 + 0x26));
  func_0x00006e10(*(undefined4 *)(_DAT_000297f4 + 0x80));
  if (*(int *)((int)param_1 + 0xa6) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(*(int *)((int)param_1 + 0xa6) + 0x8e) = param_2._0_2_;
  func_0x00003310(*(undefined4 *)((int)param_1 + 0xa6));
  (**(code **)(**(int **)((int)param_1 + 0xa6) + 0x334))();
  *(undefined1 *)(param_1 + 0x29) = 1;
  (**(code **)(*param_1 + 0x248))();
  (**(code **)(**(int **)((int)param_1 + 0xa6) + 0x248))();
  (**(code **)(*param_1 + 0x268))();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000038c at 0000038c
// Size: 54 bytes

void FUN_0000038c(int param_1)

{
  undefined1 in_stack_fffffff7;
  
  if (*(int *)(param_1 + 0xa6) == 0) {
    in_stack_fffffff7 = 0;
    FUN_00000102((short)param_1);
  }
  func_0x00003310((short)*(undefined4 *)(param_1 + 0xa6),CONCAT11(1,in_stack_fffffff7));
  return;
}



// Function: FUN_000003c2 at 000003c2
// Size: 116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003c2(int *param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x29) = 1;
  func_0x00007350((int)param_1 + 0xaa,param_2);
  local_14 = _DAT_00025b5a;
  local_10 = _DAT_00025b5e;
  local_c = *(undefined4 *)((int)param_1 + 0x32);
  local_8 = *(undefined4 *)((int)param_1 + 0x36);
  if (*(int *)((int)param_1 + 0xa6) != 0) {
    local_c = *(undefined4 *)(*(int *)((int)param_1 + 0xa6) + 0x2a);
  }
  (**(code **)(*param_1 + 0x270))(param_1,&local_14);
  (**(code **)(*param_1 + 0x268))();
  return;
}



// Function: FUN_00000436 at 00000436
// Size: 1008 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000436(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  ushort uVar6;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined1 extraout_A0b;
  int extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 uVar7;
  undefined1 extraout_A0b_00;
  undefined1 extraout_A0b_01;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 auStack_4e [50];
  undefined1 auStack_1c [20];
  ushort local_8;
  ushort local_6;
  
  iVar2 = *(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2);
  cVar5 = *(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18) +
                    _DAT_0002884c + 0x711);
  if ((uint)(*(int *)(param_1._2_2_ * 0x70 + _DAT_00028858 + (int)param_1._0_2_) << 3) >> 0x1b != 0)
  {
    cVar5 = '\0';
  }
  local_8 = (ushort)((uint)*(undefined4 *)
                            (param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) >> 0x1f);
  local_6 = (ushort)((uint)(*(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2)
                           << 3) >> 0x1f);
  sVar3 = func_0x00006e68(param_1._2_2_);
  piVar1 = *(int **)(_DAT_000297f4 + 0x80);
  uVar9 = (undefined1)param_1;
  if (param_2._0_2_ == 1) {
    uVar8 = SUB41(piVar1,0);
    uVar10 = (undefined1)param_3;
    switch(sVar3) {
    case 0:
      if (_DAT_000288ac != 0) {
        (**(code **)(*piVar1 + 0x8c))(uVar8,0x80);
      }
      break;
    case 2:
    case 5:
    case 6:
    case 0xb:
      func_0x000073b0(0x56);
      uVar7 = 0;
      if (extraout_A0_01 != 0) {
        func_0x00007160((char)extraout_A0_01);
        uVar7 = extraout_A0_02;
      }
      if (sVar3 == 5) {
        uVar4 = 0x834;
      }
      else {
        uVar4 = 0x57a;
      }
      func_0x00006e28((short)uVar7,(short)piVar1,uVar4,(short)_DAT_00027fb8,uVar10,uVar9);
      (**(code **)(*piVar1 + 0x104))(piVar1,uVar7);
      break;
    case 3:
      sVar3 = func_0x00004938(uVar9);
      if ((int)*(char *)(sVar3 * 0x42 + _DAT_0002884c + 0x15d9) == (int)(short)_DAT_00028846) {
        *(short *)((int)piVar1 + 0x1d6) = sVar3;
        func_0x00003e20(uVar8,0xf0);
      }
      else {
        *(short *)((int)piVar1 + 0x1d6) = sVar3;
        func_0x00003e20(uVar8,0xf6);
      }
      break;
    case 4:
      func_0x000073b0(0x7e);
      uVar7 = 0;
      if (extraout_A0 != 0) {
        func_0x00006f98((char)extraout_A0);
        uVar7 = extraout_A0_00;
      }
      (**(code **)(*_DAT_00027fb8 + 0x2fc))((short)_DAT_00027fb8,(short)((uint)param_3 >> 0x10));
      func_0x00000fa8((short)uVar7,0,(short)piVar1,(short)_DAT_00027fb8,extraout_A0b,uVar10);
      (**(code **)(*_DAT_00027fb8 + 0x108))(_DAT_00027fb8,uVar7);
      break;
    case 7:
      sVar3 = func_0x00004938(uVar9);
      if (sVar3 < 0) {
        func_0x000047f0();
      }
      else {
        func_0x000047f0();
      }
      break;
    case 8:
    case 10:
      func_0x00002cc0(uVar9);
      break;
    case 9:
      func_0x00002d28(uVar9);
    }
  }
  else if ((param_2._0_2_ == 2) && (sVar3 = func_0x000049e0(), sVar3 != 0)) {
    if ((local_6 == 0) ||
       (((uVar6 = (ushort)((uint)(iVar2 << 4) >> 0x1c), *(short *)(_DAT_0002884c + 0x12a) == 0 &&
         (uVar6 != _DAT_00028846)) &&
        ((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x20) == 0)))) {
      if (cVar5 == '\n') {
        func_0x00005358();
        func_0x00004938(uVar9);
        func_0x00005338();
      }
      else if (cVar5 == '\v') {
        sVar3 = func_0x00004938(uVar9);
        if (sVar3 < 0) {
          func_0x00005358();
          func_0x00002b50(uVar9);
          func_0x00005340();
        }
        else {
          func_0x00005358();
          func_0x00005338();
        }
      }
      else if (cVar5 == '\t') {
        func_0x00004888(uVar9);
      }
      else {
        func_0x00005358();
        if (local_8 == 0) {
          FUN_0000083e((short)((uint)auStack_1c >> 0x10),(short)((uint)auStack_4e >> 0x10));
          func_0x00005348((short)auStack_1c,(short)auStack_4e);
        }
        else {
          func_0x00005348(0xef,0xd0);
        }
      }
    }
    else {
      func_0x00005358();
      if (((*(byte *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) & 0x20) == 0) ||
         (uVar6 == _DAT_00028846)) {
        func_0x00005330(uVar9);
      }
      else {
        func_0x00002ad8(1);
        func_0x00002ad8(0,extraout_A0b_00);
        func_0x00005348(extraout_A0b_01);
      }
    }
  }
  return;
}



// Function: FUN_00000938 at 00000938
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000938(void)

{
  if ((*(short *)(_DAT_0002884c + 0x124) != 0) && (_DAT_00028840 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000a5a at 00000a5a
// Size: 26 bytes

void FUN_00000a5a(void)

{
  func_0x00007598();
  func_0x000075a8();
  func_0x000075a0();
  return;
}



// Function: FUN_00000a74 at 00000a74
// Size: 32 bytes

void FUN_00000a74(int *param_1)

{
  (**(code **)(*param_1 + 0x6c))(param_1,10,param_1,0);
  return;
}



