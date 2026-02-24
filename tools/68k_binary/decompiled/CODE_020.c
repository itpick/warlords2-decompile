// Warlords II - Decompiled 68k Code
// Segment: CODE_020
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000050 at 00000050
// Size: 80 bytes

void FUN_00000050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xba);
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(int *)(param_1 + 0x88) = (int)sVar1 + *(int *)(param_1 + 0x88);
  FUN_00004650(param_1,param_2,param_3,param_4,param_5);
  *(short *)(param_1 + 0xba) = sVar1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - (int)sVar1;
  return;
}



// Function: FUN_000000a0 at 000000a0
// Size: 80 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000a0(int *param_1)

{
  undefined1 auStack_32 [6];
  undefined1 auStack_2c [32];
  undefined1 auStack_c [2];
  short local_a;
  short local_6;
  
  (**(code **)(*param_1 + 0x39c))(param_1,auStack_2c);
  (**(code **)(*param_1 + 0x148))(param_1,auStack_2c,auStack_c);
  local_6 = *(short *)((int)param_1 + 0xba) + local_a + -5;
  FUN_00005760(auStack_32);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000001aa at 000001aa
// Size: 62 bytes

void FUN_000001aa(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xba);
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(int *)(param_1 + 0x88) = (int)sVar1 + *(int *)(param_1 + 0x88);
  FUN_00005708(param_1);
  *(short *)(param_1 + 0xba) = sVar1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - (int)sVar1;
  return;
}



// Function: FUN_000001e8 at 000001e8
// Size: 236 bytes

void FUN_000001e8(undefined2 param_1,int param_2)

{
  if (param_2 == 0x616c6c79) {
    FUN_00005360();
  }
  else if (param_2 == 0x61726d79) {
    FUN_00005360();
  }
  else if (param_2 == 0x63697469) {
    FUN_00005360();
  }
  else if (param_2 == 0x63697479) {
    FUN_00005360();
  }
  else if (param_2 == 0x666f7265) {
    FUN_00005360();
  }
  else if (param_2 == 0x68696c6c) {
    FUN_00005360();
  }
  else if (param_2 == 0x73686965) {
    FUN_00005360();
  }
  else if (param_2 == 0x74657272) {
    FUN_00005360();
  }
  else if (param_2 == 0x77617465) {
    FUN_00005360();
  }
  else {
    FUN_00005308(param_1,(short)param_2);
  }
  return;
}



// Function: FUN_000002d4 at 000002d4
// Size: 1294 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000006d4) */
/* WARNING: Removing unreachable block (ram,0x00000584) */
/* WARNING: Removing unreachable block (ram,0x00000352) */
/* WARNING: Removing unreachable block (ram,0x00000370) */
/* WARNING: Removing unreachable block (ram,0x00000374) */
/* WARNING: Removing unreachable block (ram,0x0000037a) */
/* WARNING: Removing unreachable block (ram,0x00000384) */
/* WARNING: Removing unreachable block (ram,0x00000390) */
/* WARNING: Removing unreachable block (ram,0x0000038c) */
/* WARNING: Removing unreachable block (ram,0x00000392) */
/* WARNING: Removing unreachable block (ram,0x00000380) */
/* WARNING: Removing unreachable block (ram,0x000003a4) */
/* WARNING: Removing unreachable block (ram,0x000003aa) */
/* WARNING: Removing unreachable block (ram,0x000003ae) */
/* WARNING: Removing unreachable block (ram,0x000003ce) */
/* WARNING: Removing unreachable block (ram,0x000003d2) */
/* WARNING: Removing unreachable block (ram,0x000003d8) */
/* WARNING: Removing unreachable block (ram,0x000003e2) */
/* WARNING: Removing unreachable block (ram,0x000003ee) */
/* WARNING: Removing unreachable block (ram,0x000003ea) */
/* WARNING: Removing unreachable block (ram,0x000003f0) */
/* WARNING: Removing unreachable block (ram,0x000003de) */
/* WARNING: Removing unreachable block (ram,0x00000402) */
/* WARNING: Removing unreachable block (ram,0x00000408) */
/* WARNING: Removing unreachable block (ram,0x0000040c) */
/* WARNING: Removing unreachable block (ram,0x0000042c) */
/* WARNING: Removing unreachable block (ram,0x00000430) */
/* WARNING: Removing unreachable block (ram,0x00000436) */
/* WARNING: Removing unreachable block (ram,0x00000440) */
/* WARNING: Removing unreachable block (ram,0x0000044c) */
/* WARNING: Removing unreachable block (ram,0x00000448) */
/* WARNING: Removing unreachable block (ram,0x0000044e) */
/* WARNING: Removing unreachable block (ram,0x0000043c) */
/* WARNING: Removing unreachable block (ram,0x00000460) */
/* WARNING: Removing unreachable block (ram,0x00000466) */
/* WARNING: Removing unreachable block (ram,0x0000046a) */
/* WARNING: Removing unreachable block (ram,0x0000048a) */
/* WARNING: Removing unreachable block (ram,0x0000048e) */
/* WARNING: Removing unreachable block (ram,0x00000494) */
/* WARNING: Removing unreachable block (ram,0x0000049e) */
/* WARNING: Removing unreachable block (ram,0x000004aa) */
/* WARNING: Removing unreachable block (ram,0x000004a6) */
/* WARNING: Removing unreachable block (ram,0x000004ac) */
/* WARNING: Removing unreachable block (ram,0x0000049a) */
/* WARNING: Removing unreachable block (ram,0x000004be) */
/* WARNING: Removing unreachable block (ram,0x000004c4) */
/* WARNING: Removing unreachable block (ram,0x000004c8) */
/* WARNING: Removing unreachable block (ram,0x000004e2) */
/* WARNING: Removing unreachable block (ram,0x00000628) */
/* WARNING: Removing unreachable block (ram,0x00000780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002d4(int param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 *extraout_A0_02;
  undefined4 extraout_A0_03;
  undefined4 *extraout_A0_04;
  undefined4 extraout_A0_05;
  undefined4 *extraout_A0_06;
  undefined4 extraout_A0_07;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 auStack_9e [76];
  undefined4 *local_52;
  undefined4 *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar4 = 0x80;
  uVar6 = (undefined2)((uint)auStack_9e >> 0x10);
  FUN_00007028((char)auStack_9e);
  FUN_00006ed0((short)auStack_9e,100,uVar6,uVar4);
  if (extraout_A0 == 0) {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = FUN_000076a8((char)auStack_4a);
    if (iVar2 == 0) {
      uVar6 = SUB42(piVar1,0);
      FUN_000073b0(0x1e);
      if (extraout_A0_00 != (undefined4 *)0x0) {
        FUN_00006f88((char)extraout_A0_00);
        *extraout_A0_00 = 0x192ca;
      }
      *(undefined4 **)(param_1 + 0x3a) = extraout_A0_00;
      uVar5 = 0x46;
      uVar7 = 0;
      uVar4 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x3a) >> 0x10);
      FUN_000020c0((short)*(undefined4 *)(param_1 + 0x3a),0);
      uVar3 = (undefined2)param_1;
      iVar2 = FUN_00000a00(uVar3,uVar4,uVar7,uVar5);
      uVar4 = (undefined1)param_1;
      if (iVar2 != 1) {
        FUN_000007e4(uVar4,(short)((uint)iVar2 >> 0x10),
                     (char)((uint)*(undefined4 *)(param_1 + 0x3a) >> 0x10));
        (**(code **)(*piVar1 + 0x188))(uVar6,0x7272);
        FUN_00000b2e(param_1,extraout_A0_01,*(undefined4 *)(param_1 + 0x3a),0);
      }
      FUN_000073b0(0x1e);
      if (extraout_A0_02 != (undefined4 *)0x0) {
        FUN_00006f88((char)extraout_A0_02);
        *extraout_A0_02 = 0x192ca;
      }
      *(undefined4 **)(param_1 + 0x3e) = extraout_A0_02;
      uVar8 = 0x46;
      uVar7 = 0;
      uVar5 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x3e) >> 0x10);
      FUN_000020c0((short)*(undefined4 *)(param_1 + 0x3e),0);
      iVar2 = FUN_00000a00(uVar3,uVar5,uVar7,uVar8);
      if (iVar2 != 1) {
        FUN_000007e4(uVar4,(short)((uint)iVar2 >> 0x10),
                     (char)((uint)*(undefined4 *)(param_1 + 0x3e) >> 0x10));
        (**(code **)(*piVar1 + 0x188))(uVar6,0x6d79);
        FUN_00000b2e(param_1,extraout_A0_03,*(undefined4 *)(param_1 + 0x3e),0);
      }
      FUN_000073b0(0x1e);
      local_4e = extraout_A0_04;
      if (extraout_A0_04 != (undefined4 *)0x0) {
        FUN_00006f88((char)extraout_A0_04);
        *local_4e = 0x192ca;
      }
      *(undefined4 **)(param_1 + 0x42) = local_4e;
      uVar8 = 0x46;
      uVar7 = 0;
      uVar5 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x42) >> 0x10);
      FUN_000020c0((short)*(undefined4 *)(param_1 + 0x42),0);
      iVar2 = FUN_00000a00(uVar3,uVar5,uVar7,uVar8);
      if (iVar2 != 1) {
        FUN_000007e4(uVar4,(short)((uint)iVar2 >> 0x10),
                     (char)((uint)*(undefined4 *)(param_1 + 0x42) >> 0x10));
        (**(code **)(*piVar1 + 0x188))(uVar6,0x7479);
        FUN_00000b2e(param_1,extraout_A0_05,*(undefined4 *)(param_1 + 0x42),0);
      }
      FUN_000073b0(0x1e);
      local_52 = extraout_A0_06;
      if (extraout_A0_06 != (undefined4 *)0x0) {
        FUN_00006f88((char)extraout_A0_06);
        *local_52 = 0x192ca;
      }
      *(undefined4 **)(param_1 + 0x46) = local_52;
      uVar8 = 0x46;
      uVar7 = 0;
      uVar5 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x46) >> 0x10);
      FUN_000020c0((short)*(undefined4 *)(param_1 + 0x46),0);
      iVar2 = FUN_00000a00(uVar3,uVar5,uVar7,uVar8);
      if (iVar2 != 1) {
        FUN_000007e4(uVar4,(short)((uint)iVar2 >> 0x10),
                     (char)((uint)*(undefined4 *)(param_1 + 0x46) >> 0x10));
        (**(code **)(*piVar1 + 0x188))(uVar6,0x6965);
        FUN_00000b2e(param_1,extraout_A0_07,*(undefined4 *)(param_1 + 0x46),0);
      }
      FUN_00001d08(0);
      _DAT_00025f52 = local_10;
    }
    else {
      uVar4 = 0;
      FUN_00001d08(0);
      FUN_00001c10((short)((uint)local_14 >> 0x10),uVar4);
    }
    FUN_00006ec8((char)auStack_9e);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007e4 at 000007e4
// Size: 76 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000a00 at 00000a00
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000b2e at 00000b2e
// Size: 148 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b2e(undefined4 param_1,int *param_2,int *param_3)

{
  short sVar1;
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    (**(code **)(*param_2 + 0x434))();
    sVar1 = (**(code **)(*param_2 + 0x454))();
    if (0 < sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = (**(code **)(*param_3 + 0x58))();
    if (sVar1 != 0) {
      if (0 < sVar1) {
        (**(code **)(*param_3 + 0x74))(param_3,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00000c22 at 00000c22
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c22(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  _DAT_00015cfe = param_1._0_2_;
  FUN_00000cd6();
  uVar2 = 0;
  FUN_00000e92();
  uVar1 = 1;
  FUN_00000e92(uVar2);
  uVar2 = 2;
  FUN_00000e92(uVar1);
  uVar1 = 3;
  FUN_00000e92(uVar2);
  FUN_0000106e();
  uVar2 = 0;
  FUN_00001262(uVar1);
  uVar1 = 1;
  FUN_00001262(uVar2);
  uVar2 = 2;
  FUN_00001262(uVar1);
  uVar1 = 3;
  FUN_00001262(uVar2);
  FUN_000015a8();
  FUN_000017e8();
  FUN_00001cba();
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(100,uVar1);
}



// Function: FUN_00000cd6 at 00000cd6
// Size: 314 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00000cd6(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = (int)_DAT_00015cfe;
  if (iVar2 == 0) {
    iVar2 = 0;
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      psVar1 = (short *)(_DAT_00027e96 + 0x7c + sVar4 * 4);
      *psVar1 = *(short *)(&DAT_00015cf6 + sVar4 * 2) * 0x23 + *psVar1;
      iVar2 = *(short *)(&DAT_00015cee + sVar4 * 2) * 0x32;
      psVar1 = (short *)(_DAT_00027e96 + 0x7e + sVar4 * 4);
      *psVar1 = (short)iVar2 + *psVar1;
    }
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      *(undefined2 *)(sVar4 * 8 + _DAT_00027e96 + 0x8c) =
           *(undefined2 *)(_DAT_00027e96 + 0x7c + sVar4 * 4);
      *(undefined2 *)(sVar4 * 8 + _DAT_00027e96 + 0x8e) =
           *(undefined2 *)(_DAT_00027e96 + 0x7e + sVar4 * 4);
      iVar3 = ((sVar4 + 1) % 4) * 4;
      *(undefined2 *)(sVar4 * 8 + _DAT_00027e96 + 0x90) =
           *(undefined2 *)(_DAT_00027e96 + 0x7c + iVar3);
      iVar2 = sVar4 * 8;
      *(undefined2 *)(iVar2 + _DAT_00027e96 + 0x92) = *(undefined2 *)(_DAT_00027e96 + 0x7e + iVar3);
    }
    _DAT_00015d02 = 3;
    _DAT_00015d00 = 7;
  }
  else if (iVar2 == 1) {
    iVar2 = 0;
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      psVar1 = (short *)(_DAT_00027e96 + 0x7c + sVar4 * 4);
      *psVar1 = *(short *)(&DAT_00015cf6 + sVar4 * 2) * 0x14 + *psVar1;
      iVar2 = *(short *)(&DAT_00015cee + sVar4 * 2) * 0x19;
      psVar1 = (short *)(_DAT_00027e96 + 0x7e + sVar4 * 4);
      *psVar1 = (short)iVar2 + *psVar1;
    }
    for (sVar4 = 0; sVar4 < 4; sVar4 = sVar4 + 1) {
      *(undefined2 *)(sVar4 * 8 + _DAT_00027e96 + 0x8c) =
           *(undefined2 *)(_DAT_00027e96 + 0x7c + sVar4 * 4);
      *(undefined2 *)(sVar4 * 8 + _DAT_00027e96 + 0x8e) =
           *(undefined2 *)(_DAT_00027e96 + 0x7e + sVar4 * 4);
      iVar3 = ((sVar4 + 1) % 4) * 4;
      *(undefined2 *)(sVar4 * 8 + _DAT_00027e96 + 0x90) =
           *(undefined2 *)(_DAT_00027e96 + 0x7c + iVar3);
      iVar2 = sVar4 * 8;
      *(undefined2 *)(iVar2 + _DAT_00027e96 + 0x92) = *(undefined2 *)(_DAT_00027e96 + 0x7e + iVar3);
    }
    _DAT_00015d02 = 4;
    _DAT_00015d00 = 9;
  }
  else {
    iVar2 = iVar2 + -2;
    if (iVar2 == 0) {
      _DAT_00015d02 = 10;
      _DAT_00015d00 = 0x10;
    }
  }
  return iVar2;
}



// Function: FUN_00000e10 at 00000e10
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(void)

{
  int iVar1;
  short unaff_D3w;
  int in_A0;
  int in_A1;
  
  while( true ) {
    *(undefined2 *)(in_A1 * 8 + in_A0 + 0x8c) = *(undefined2 *)(in_A0 + 0x7c + unaff_D3w * 4);
    *(undefined2 *)(unaff_D3w * 8 + _DAT_00027e96 + 0x8e) =
         *(undefined2 *)(_DAT_00027e96 + 0x7e + unaff_D3w * 4);
    iVar1 = ((unaff_D3w + 1) % 4) * 4;
    *(undefined2 *)(unaff_D3w * 8 + _DAT_00027e96 + 0x90) =
         *(undefined2 *)(_DAT_00027e96 + 0x7c + iVar1);
    *(undefined2 *)(unaff_D3w * 8 + _DAT_00027e96 + 0x92) =
         *(undefined2 *)(_DAT_00027e96 + 0x7e + iVar1);
    unaff_D3w = unaff_D3w + 1;
    if (3 < unaff_D3w) break;
    in_A1 = (int)unaff_D3w;
    in_A0 = _DAT_00027e96;
  }
  _DAT_00015d02 = 3;
  _DAT_00015d00 = 7;
  return;
}



// Function: FUN_00000e92 at 00000e92
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e92(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  bool bVar3;
  undefined4 local_8;
  
  sVar2 = (short)((param_1._0_2_ + 1) % 4);
  bVar3 = _DAT_00015cfe == 2;
  if (*(short *)(_DAT_00027e96 + 0x2c + param_1._0_2_ * 2) < 3) {
    *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x244) =
         *(undefined4 *)(param_1._0_2_ * 8 + _DAT_00027e96 + 0x8c);
    *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254) =
         *(undefined4 *)(param_1._0_2_ * 8 + _DAT_00027e96 + 0x90);
  }
  else {
    uVar1 = *(undefined4 *)(param_1._0_2_ * 8 + _DAT_00027e96 + 0x8c);
    local_8._0_2_ = (short)((uint)uVar1 >> 0x10);
    local_8._2_2_ = (short)uVar1;
    local_8 = CONCAT22(_DAT_00015d02 * -*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0xac) +
                       local_8._0_2_,
                       _DAT_00015d02 * -*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0xae) +
                       local_8._2_2_);
    FUN_000091d4(&local_8,(int)&local_8 + 2,bVar3);
    *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) = 7;
    *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x244) = local_8;
    uVar1 = *(undefined4 *)(param_1._0_2_ * 8 + _DAT_00027e96 + 0x90);
    local_8._0_2_ = (short)((uint)uVar1 >> 0x10);
    local_8._2_2_ = (short)uVar1;
    local_8 = CONCAT22(_DAT_00015d02 * -*(short *)(sVar2 * 4 + _DAT_00027e96 + 0xac) + local_8._0_2_
                       ,_DAT_00015d02 * -*(short *)(sVar2 * 4 + _DAT_00027e96 + 0xae) +
                        local_8._2_2_);
    FUN_000091d4(&local_8,(int)&local_8 + 2,CONCAT22(_DAT_00015d00,(ushort)bVar3));
    *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) = 7;
    *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254) = local_8;
  }
  return;
}



// Function: FUN_0000106e at 0000106e
// Size: 106 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0000125a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000106e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001262 at 00001262
// Size: 838 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001262(undefined4 param_1)

{
  short *psVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  sVar5 = 0;
  bVar2 = false;
  *(undefined4 *)(param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x104) =
       *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x244);
  *(undefined2 *)(param_1._0_2_ * 2 + _DAT_00027e96 + 0xfc) = 1;
  if (*(short *)(_DAT_00027e96 + 0x2c + param_1._0_2_ * 2) < 3) {
    psVar1 = (short *)(param_1._0_2_ * 2 + _DAT_00027e96 + 0xfc);
    *psVar1 = *psVar1 + 1;
    *(undefined4 *)(param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x108) =
         *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254);
  }
  else if (((((*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x244) == 0) ||
             (*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x246) == 0)) ||
            (*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x244) == 0x6f)) ||
           (*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x246) == 0x9b)) &&
          (((*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254) == 0 ||
            (*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x256) == 0)) ||
           ((*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254) == 0x6f ||
            (*(short *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x256) == 0x9b)))))) {
    psVar1 = (short *)(param_1._0_2_ * 2 + _DAT_00027e96 + 0xfc);
    *psVar1 = *psVar1 + 1;
    *(undefined4 *)(param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x108) =
         *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254);
  }
  else {
    sVar3 = FUN_000022b2(*(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254),
                         *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x244));
    sVar3 = sVar3 / (short)(*(short *)(_DAT_00027e96 + 0x2c + param_1._0_2_ * 2) + -1);
    while (!bVar2) {
      FUN_00001da4(*(undefined4 *)(sVar5 * 4 + param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x104),
                   *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254),&local_c);
      iVar6 = param_1._0_2_ * 0x50 + _DAT_00027e96;
      local_6 = local_c * sVar3 + *(short *)(sVar5 * 4 + iVar6 + 0x104);
      local_8 = local_a * sVar3 + *(short *)(sVar5 * 4 + iVar6 + 0x106);
      FUN_000091d4(&local_6,&local_8,(uint)(ushort)(sVar3 / 2) << 0x10);
      sVar5 = sVar5 + 1;
      *(undefined1 *)((int)local_6 + local_8 * 0x70 + _DAT_00027e9a + 0x34a) = 7;
      FUN_00002a40(sVar5 * 4 + param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x104,
                   CONCAT22(local_6,local_8));
      psVar1 = (short *)(param_1._0_2_ * 2 + _DAT_00027e96 + 0xfc);
      *psVar1 = *psVar1 + 1;
      sVar4 = FUN_000022b2(*(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254),
                           *(undefined4 *)(sVar5 * 4 + param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x104)
                          );
      if ((sVar4 < sVar3) ||
         (*(short *)(_DAT_00027e96 + 0x2c + param_1._0_2_ * 2) + -1 <=
          (int)*(short *)(param_1._0_2_ * 2 + _DAT_00027e96 + 0xfc))) {
        bVar2 = true;
      }
    }
    *(undefined4 *)((short)(sVar5 + 1) * 4 + param_1._0_2_ * 0x50 + _DAT_00027e96 + 0x104) =
         *(undefined4 *)(param_1._0_2_ * 4 + _DAT_00027e96 + 0x254);
    psVar1 = (short *)(param_1._0_2_ * 2 + _DAT_00027e96 + 0xfc);
    *psVar1 = *psVar1 + 1;
  }
  return;
}



// Function: FUN_000015a8 at 000015a8
// Size: 576 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015a8(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  sVar4 = 0;
  do {
    if (3 < sVar4) {
      return;
    }
    for (sVar5 = 0; (int)sVar5 < *(short *)(sVar4 * 2 + _DAT_00027e96 + 0xfc) + -1;
        sVar5 = sVar5 + 1) {
      iVar7 = sVar4 * 0x50 + _DAT_00027e96;
      if ((((*(short *)(sVar5 * 4 + iVar7 + 0x104) == 0) ||
           (*(short *)(sVar5 * 4 + iVar7 + 0x106) == 0)) ||
          (*(short *)(sVar5 * 4 + iVar7 + 0x104) == 0x6f)) ||
         (*(short *)(sVar5 * 4 + iVar7 + 0x106) == 0x9b)) {
        iVar7 = (sVar5 + 1) * 4;
        iVar6 = sVar4 * 0x50 + _DAT_00027e96;
        if (((*(short *)(iVar7 + iVar6 + 0x104) != 0) && (*(short *)(iVar7 + iVar6 + 0x106) != 0))
           && ((*(short *)(iVar7 + iVar6 + 0x104) != 0x6f &&
               (*(short *)(iVar7 + iVar6 + 0x106) != 0x9b)))) goto LAB_00001684;
        iVar7 = sVar4 * 0x50 + _DAT_00027e96;
        FUN_00001ac2(*(undefined4 *)(sVar5 * 4 + iVar7 + 0x104),
                     *(undefined4 *)((sVar5 + 1) * 4 + iVar7 + 0x104));
      }
      else {
LAB_00001684:
        iVar7 = sVar4 * 0x50 + _DAT_00027e96;
        FUN_000019aa(*(undefined4 *)(sVar5 * 4 + iVar7 + 0x104),
                     *(undefined4 *)((sVar5 + 1) * 4 + iVar7 + 0x104));
      }
    }
    sVar3 = (short)((sVar4 + 1) % 4);
    iVar7 = sVar4 * 0x50 + _DAT_00027e96;
    if (((*(short *)(sVar5 * 4 + iVar7 + 0x104) == 0) ||
        (*(short *)(sVar5 * 4 + iVar7 + 0x106) == 0)) ||
       ((*(short *)(sVar5 * 4 + iVar7 + 0x104) == 0x6f ||
        (*(short *)(sVar5 * 4 + iVar7 + 0x106) == 0x9b)))) {
      iVar7 = sVar3 * 0x50 + _DAT_00027e96;
      sVar1 = *(short *)(iVar7 + 0x104);
      if ((((sVar1 != 0) && (sVar2 = *(short *)(iVar7 + 0x106), sVar2 != 0)) && (sVar1 != 0x6f)) &&
         (sVar2 != 0x9b)) goto LAB_000017a6;
      FUN_00001ac2(*(undefined4 *)(sVar5 * 4 + sVar4 * 0x50 + _DAT_00027e96 + 0x104),
                   *(undefined4 *)(sVar3 * 0x50 + _DAT_00027e96 + 0x104));
    }
    else {
LAB_000017a6:
      FUN_000019aa(*(undefined4 *)(sVar5 * 4 + sVar4 * 0x50 + _DAT_00027e96 + 0x104),
                   *(undefined4 *)(sVar3 * 0x50 + _DAT_00027e96 + 0x104));
    }
    sVar4 = sVar4 + 1;
  } while( true );
}



// Function: FUN_000017e8 at 000017e8
// Size: 450 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017e8(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar4 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\a') {
        *(undefined1 *)((int)sVar4 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 3;
      }
      else {
        *(undefined1 *)((int)sVar4 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 0;
      }
    }
  }
  for (sVar4 = 0; sVar4 < 2; sVar4 = sVar4 + 1) {
    for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
      for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
        sVar2 = FUN_000023cc(sVar5);
        if (sVar2 != 0) {
          *(undefined1 *)((int)sVar3 + sVar5 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
        }
      }
    }
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      for (sVar5 = 0; sVar5 < 0x70; sVar5 = sVar5 + 1) {
        sVar2 = FUN_000023cc(sVar3);
        if (sVar2 != 0) {
          *(undefined1 *)((int)sVar5 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
        }
      }
    }
    sVar3 = 0x70;
    while (sVar5 = sVar3 + -1, sVar3 != 0) {
      sVar2 = 0x9c;
      while (sVar1 = sVar2 + -1, sVar3 = sVar5, sVar2 != 0) {
        sVar3 = FUN_000023cc(sVar1);
        sVar2 = sVar1;
        if (sVar3 != 0) {
          *(undefined1 *)((int)sVar5 + sVar1 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
        }
      }
    }
    sVar3 = 0x9c;
    while (sVar5 = sVar3 + -1, sVar3 != 0) {
      sVar2 = 0x70;
      while (sVar1 = sVar2 + -1, sVar3 = sVar5, sVar2 != 0) {
        sVar3 = FUN_000023cc(sVar5);
        sVar2 = sVar1;
        if (sVar3 != 0) {
          *(undefined1 *)((int)sVar1 + sVar5 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
        }
      }
    }
  }
  for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar4 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x02') {
        *(undefined1 *)((int)sVar4 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
      }
      else {
        *(undefined1 *)((int)sVar4 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 7;
      }
    }
  }
  return;
}



// Function: FUN_000019aa at 000019aa
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000019aa(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  short sVar2;
  short local_1e;
  short sVar3;
  undefined1 auStack_10 [4];
  short local_c;
  short local_a;
  undefined4 local_8;
  
  bVar1 = false;
  local_8 = param_1;
  sVar3 = (short)param_2;
  FUN_00001da4((short)param_1,sVar3,(short)auStack_10);
  while( true ) {
    if (bVar1) {
      return;
    }
    local_1e = (short)((uint)param_2 >> 0x10);
    FUN_00001da4((short)local_8,sVar3,(short)&local_c);
    sVar2 = FUN_000022b2(local_8,param_2);
    if (2 < sVar2) break;
    local_8 = CONCAT22(local_c + local_8._0_2_,local_a + local_8._2_2_);
    FUN_000091a4((short)&local_8,(short)&local_8 + 2);
    *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) = 7;
    if ((local_8._0_2_ == local_1e) && (local_8._2_2_ == sVar3)) {
      bVar1 = true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(3);
}



// Function: FUN_00001ac2 at 00001ac2
// Size: 334 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001ac2(undefined4 param_1,undefined4 param_2)

{
  short sVar2;
  short sVar3;
  int iVar1;
  short unaff_D5w;
  short *psVar4;
  short local_14;
  short local_12;
  undefined4 local_10;
  short local_c;
  short local_a;
  undefined4 local_8;
  
  sVar2 = FUN_00002310(param_1);
  sVar3 = FUN_00002310(param_2);
  if (sVar2 == sVar3) {
    FUN_00001da4(param_1,param_2,&local_c);
    local_8 = param_1;
    while( true ) {
      if ((local_8._0_2_ == param_2._0_2_) && (local_8._2_2_ == param_2._2_2_)) break;
      local_8 = CONCAT22(local_c + local_8._0_2_,local_a + local_8._2_2_);
      FUN_000091a4(&local_8,(int)&local_8 + 2);
      *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) = 7;
    }
  }
  else {
    iVar1 = func_0x000076d8((int)sVar2 - (int)sVar3);
    if (iVar1 == 2) {
      FUN_000019aa(param_1,param_2);
    }
    else {
      iVar1 = func_0x000076d8((int)sVar2 - (int)sVar3);
      if (iVar1 == 3) {
        unaff_D5w = 0;
      }
      else {
        iVar1 = func_0x000076d8((int)sVar2 - (int)sVar3);
        if (iVar1 == 1) {
          local_14 = sVar3;
          local_12 = sVar2;
          if (sVar3 < sVar2) {
            psVar4 = &local_12;
          }
          else {
            psVar4 = &local_14;
          }
          unaff_D5w = *psVar4;
        }
      }
      local_10 = *(undefined4 *)(_DAT_00027e96 + 0x7c + unaff_D5w * 4);
      FUN_00001da4(param_1,local_10,&local_c);
      local_8 = param_1;
      while( true ) {
        if ((local_8._0_2_ == local_10._0_2_) && (local_8._2_2_ == local_10._2_2_)) break;
        local_8 = CONCAT22(local_c + local_8._0_2_,local_a + local_8._2_2_);
        FUN_000091a4(&local_8,(int)&local_8 + 2);
        *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) = 7;
      }
      FUN_00001da4(param_2,local_10,&local_c);
      local_8 = param_2;
      while( true ) {
        if ((local_8._0_2_ == local_10._0_2_) && (local_8._2_2_ == local_10._2_2_)) break;
        local_8 = CONCAT22(local_c + local_8._0_2_,local_a + local_8._2_2_);
        FUN_000091a4(&local_8,(int)&local_8 + 2);
        *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) = 7;
      }
    }
  }
  return;
}



// Function: FUN_00001c10 at 00001c10
// Size: 170 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c10(void)

{
  int unaff_A6;
  
  while( true ) {
    FUN_000091a4(unaff_A6 + -4);
    *(undefined1 *)
     ((int)*(short *)(unaff_A6 + -4) + *(short *)(unaff_A6 + -2) * 0x70 + _DAT_00027e9a + 0x34a) = 7
    ;
    if ((*(short *)(unaff_A6 + -4) == *(short *)(unaff_A6 + -0xc)) &&
       (*(short *)(unaff_A6 + -2) == *(short *)(unaff_A6 + -10))) break;
    *(short *)(unaff_A6 + -4) = *(short *)(unaff_A6 + -8) + *(short *)(unaff_A6 + -4);
    *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -6) + *(short *)(unaff_A6 + -2);
  }
  FUN_00001da4(*(undefined4 *)(unaff_A6 + 0xc),*(undefined4 *)(unaff_A6 + -0xc));
  *(undefined4 *)(unaff_A6 + -4) = *(undefined4 *)(unaff_A6 + 0xc);
  while ((*(short *)(unaff_A6 + -4) != *(short *)(unaff_A6 + -0xc) ||
         (*(short *)(unaff_A6 + -2) != *(short *)(unaff_A6 + -10)))) {
    *(short *)(unaff_A6 + -4) = *(short *)(unaff_A6 + -8) + *(short *)(unaff_A6 + -4);
    *(short *)(unaff_A6 + -2) = *(short *)(unaff_A6 + -6) + *(short *)(unaff_A6 + -2);
    FUN_000091a4(unaff_A6 + -4);
    *(undefined1 *)
     ((int)*(short *)(unaff_A6 + -4) + *(short *)(unaff_A6 + -2) * 0x70 + _DAT_00027e9a + 0x34a) = 7
    ;
  }
  return;
}



// Function: FUN_00001cba at 00001cba
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001cba(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x02') {
        sVar1 = FUN_000024d0(sVar3);
        if (sVar1 != 0) {
          *(undefined1 *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 3;
          sVar1 = FUN_0000255c(sVar3);
          if (sVar1 != 0) {
            *(undefined1 *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 3;
          }
          sVar1 = FUN_0000255c(sVar3);
          if (sVar1 != 0) {
            *(undefined1 *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 3;
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00001d08 at 00001d08
// Size: 107 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d08(void)

{
  short sVar1;
  short unaff_D3w;
  short unaff_D4w;
  
  do {
    sVar1 = FUN_0000255c(unaff_D4w);
    if (sVar1 != 0) {
      *(undefined1 *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) = 3;
    }
    sVar1 = FUN_0000255c(unaff_D4w);
    if (sVar1 != 0) {
      *(undefined1 *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) = 3;
    }
    do {
      do {
        unaff_D4w = unaff_D4w + 1;
        while (0x9b < unaff_D4w) {
          unaff_D3w = unaff_D3w + 1;
          if (0x6f < unaff_D3w) {
            return;
          }
          unaff_D4w = 0;
        }
      } while (*(char *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) != '\x02');
      sVar1 = FUN_000024d0(unaff_D4w);
    } while (sVar1 == 0);
    *(undefined1 *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) = 3;
  } while( true );
}



// Function: FUN_00001d74 at 00001d74
// Size: 48 bytes

void FUN_00001d74(undefined4 param_1)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < param_1._0_2_; sVar1 = sVar1 + 1) {
    FUN_00008002(0);
  }
  FUN_000086e4();
  return;
}



// Function: FUN_00001da4 at 00001da4
// Size: 234 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001da4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_2._0_2_ == param_1._0_2_) {
    if (param_1._2_2_ == param_2._2_2_) {
      FUN_00002a40(param_3,0);
      FUN_000022ac();
      return;
    }
    if (param_2._2_2_ < param_1._2_2_) {
      FUN_00002a40(param_3,0xffff);
      FUN_000022ac();
      return;
    }
    if (param_1._2_2_ < param_2._2_2_) {
      FUN_00002a40(param_3,1);
      FUN_000022ac();
      return;
    }
  }
  else {
    if (param_2._2_2_ != param_1._2_2_) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1._0_2_ == param_2._0_2_) {
      FUN_00002a40(param_3,0);
      FUN_000022ac();
      return;
    }
    if (param_2._0_2_ < param_1._0_2_) {
      FUN_00002a40(param_3,0xffff0000);
      FUN_000022ac();
      return;
    }
    if (param_1._0_2_ < param_2._0_2_) {
      FUN_00002a40(param_3,0x10000);
      FUN_000022ac();
      return;
    }
  }
  return;
}



// Function: FUN_00001e98 at 00001e98
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001e98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ea0 at 00001ea0
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001ea8 at 00001ea8
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001ea8(void)

{
  int in_D0;
  short in_D1w;
  int unaff_A6;
  
  *(int *)(unaff_A6 + -0x24) = in_D1w - in_D0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000020c0 at 000020c0
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000020c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000022ac at 000022ac
// Size: 6 bytes

void FUN_000022ac(void)

{
  return;
}



// Function: FUN_000022b2 at 000022b2
// Size: 94 bytes

short FUN_000022b2(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  short local_8;
  short local_6;
  
  sVar1 = func_0x000076d8((int)param_1._0_2_ - (int)param_2._0_2_);
  local_8 = func_0x000076d8((int)param_1._2_2_ - (int)param_2._2_2_);
  local_6 = sVar1;
  if (local_8 < sVar1) {
    psVar2 = &local_6;
  }
  else {
    psVar2 = &local_8;
  }
  return *psVar2;
}



// Function: FUN_00002310 at 00002310
// Size: 54 bytes

undefined4 FUN_00002310(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (param_1._0_2_ == 0) {
    uVar1 = 3;
  }
  else if (param_1._2_2_ == 0) {
    uVar1 = 0;
  }
  else if (param_1._0_2_ == 0x6f) {
    uVar1 = 1;
  }
  else if (param_1._2_2_ == 0x9b) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_00002346 at 00002346
// Size: 90 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002346(short *param_1)

{
  short sVar1;
  
  sVar1 = 0;
  while ((sVar1 < 8 &&
         ((*param_1 != *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbc) ||
          (param_1[1] != *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbe)))))) {
    sVar1 = sVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10005);
}



// Function: FUN_000023cc at 000023cc
// Size: 260 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000023cc(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1._0_2_ + param_1._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) == '\x03') {
    uVar1 = 0;
  }
  else if (*(char *)((int)param_1._0_2_ + param_1._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) == '\x01') {
    uVar1 = 0;
  }
  else if (((((param_1._0_2_ == 0) || (param_1._2_2_ == 0)) || (param_1._0_2_ == 0x6f)) ||
           (param_1._2_2_ == 0x9b)) &&
          (*(char *)((int)param_1._0_2_ + param_1._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) == '\0')) {
    uVar1 = 1;
  }
  else if (*(char *)((int)param_1._0_2_ + param_1._2_2_ * 0x70 + _DAT_00027e9a + 0x34b) == '\x02') {
    uVar1 = 1;
  }
  else if (*(char *)((int)param_1._0_2_ + param_1._2_2_ * 0x70 + _DAT_00027e9a + 0x349) == '\x02') {
    uVar1 = 1;
  }
  else if (*(char *)((int)param_1._0_2_ + (param_1._2_2_ + 1) * 0x70 + _DAT_00027e9a + 0x34a) ==
           '\x02') {
    uVar1 = 1;
  }
  else if (*(char *)((int)param_1._0_2_ + (param_1._2_2_ + -1) * 0x70 + _DAT_00027e9a + 0x34a) ==
           '\x02') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_000024d0 at 000024d0
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000024d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  while( true ) {
    if (7 < sVar3) {
      return 0;
    }
    iVar1 = (int)*(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbc) + (int)param_1._0_2_;
    if ((((-1 < iVar1) &&
         (iVar2 = (int)*(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbe) + (int)param_1._2_2_, -1 < iVar2
         )) && (iVar1 < 0x70)) &&
       ((iVar2 < 0x9c && (*(char *)(iVar1 + iVar2 * 0x70 + _DAT_00027e9a + 0x34a) == '\a')))) break;
    sVar3 = sVar3 + 1;
  }
  return 1;
}



// Function: FUN_0000255c at 0000255c
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000255c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  while( true ) {
    if (7 < sVar3) {
      return 0;
    }
    iVar1 = (int)*(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbc) + (int)param_1._0_2_;
    if ((((-1 < iVar1) &&
         (iVar2 = (int)*(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbe) + (int)param_1._2_2_, -1 < iVar2
         )) && (iVar1 < 0x70)) &&
       ((iVar2 < 0x9c &&
        ((int)*(char *)(iVar1 + iVar2 * 0x70 + _DAT_00027e9a + 0x34a) == (int)param_2._0_2_))))
    break;
    sVar3 = sVar3 + 1;
  }
  return 1;
}



// Function: FUN_000025f0 at 000025f0
// Size: 162 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025f0(void)

{
  int extraout_A0;
  undefined1 uVar1;
  char local_7;
  undefined2 local_6;
  
  local_6 = (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x146) + 0x160))();
  uVar1 = 0x34;
  FUN_000076d0(0xf8,0x15c2a,(int)*(short *)(_DAT_0002884c + 0x162));
  func_0x00002800(0x44415420,0x78f8,uVar1);
  if (extraout_A0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00002820(extraout_A0,&local_7,1);
  FUN_00002818((short)extraout_A0);
  if (local_7 == '0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026aa at 000026aa
// Size: 38 bytes

void FUN_000026aa(void)

{
  short sVar1;
  
  FUN_000026d0();
  while( true ) {
    sVar1 = FUN_0000274a();
    if (sVar1 != 0) break;
    FUN_00002768();
    FUN_00002a96();
  }
  return;
}



// Function: FUN_000026d0 at 000026d0
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000026d0(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = 0;
  for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      cVar1 = *(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a);
      if (((cVar1 == '\a') || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
        sVar4 = sVar4 + 1;
      }
    }
  }
  *(short *)(&DAT_00001f54 + _DAT_00027e96) = *(short *)(_DAT_00027e96 + 0x3c) * (sVar4 / 100);
  *(undefined2 *)(&DAT_00001f52 + _DAT_00027e96) = 0;
  return;
}



// Function: FUN_0000274a at 0000274a
// Size: 30 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0000274a(void)

{
  return *(short *)(&DAT_00001f54 + _DAT_00027e96) <= *(short *)(&DAT_00001f52 + _DAT_00027e96);
}



// Function: FUN_00002768 at 00002768
// Size: 46 bytes

/* WARNING: Removing unreachable block (ram,0x000027bc) */

void FUN_00002768(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10070);
}



// Function: FUN_00002818 at 00002818
// Size: 301 bytes

/* WARNING: Removing unreachable block (ram,0x00002a8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002818(void)

{
  undefined2 in_D0w;
  short unaff_D3w;
  short unaff_D7w;
  undefined4 *in_A0;
  undefined4 *unaff_A5;
  int unaff_A6;
  undefined2 uStack00000004;
  
  *unaff_A5 = *in_A0;
  *(undefined2 *)(unaff_A6 + -0x22 + unaff_D3w * 2) = in_D0w;
  *(undefined2 *)(unaff_A6 + -0x10) = 6;
  *(undefined2 *)(unaff_A6 + -0x12) = 4;
  if (7 < (short)(unaff_D3w + 1)) {
    *(undefined1 *)((int)unaff_D7w + *(short *)(unaff_A6 + -0xe) * 0x70 + _DAT_00027e9a + 0x34a) = 4
    ;
    *(short *)(&DAT_00001f52 + _DAT_00027e96) = *(short *)(&DAT_00001f52 + _DAT_00027e96) + 1;
    *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(unaff_A6 + -0xe);
    *(short *)(unaff_A6 + -2) = unaff_D7w;
    *(undefined2 *)(unaff_A6 + -0x24) = 0;
    FUN_00002a74();
    return;
  }
  uStack00000004 = 5;
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0();
}



// Function: FUN_00002a40 at 00002a40
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002a40(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002a74 at 00002a74
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a74(void)

{
  char *pcVar1;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D6w;
  undefined2 unaff_D7w;
  int unaff_A6;
  
  if (*(short *)(unaff_A6 + -0x24) < *(short *)(unaff_A6 + -0x22 + unaff_D4w * 2)) {
    *(short *)(unaff_A6 + -2) =
         *(short *)(unaff_D4w * 4 + _DAT_00027e96 + 0xbc) + *(short *)(unaff_A6 + -2);
    *(short *)(unaff_A6 + -4) =
         *(short *)(unaff_D4w * 4 + _DAT_00027e96 + 0xbe) + *(short *)(unaff_A6 + -4);
    FUN_000091a4((short)unaff_A6 + -2,unaff_A6 + -4);
    pcVar1 = (char *)((int)*(short *)(unaff_A6 + -2) +
                      *(short *)(unaff_A6 + -4) * 0x70 + _DAT_00027e9a + 0x34a);
    if (*pcVar1 == '\a') {
      *pcVar1 = '\x04';
      *(short *)(&DAT_00001f52 + _DAT_00027e96) = *(short *)(&DAT_00001f52 + _DAT_00027e96) + 1;
    }
    *(short *)(unaff_A6 + -0x26) = (short)((unaff_D4w + 2) % 8);
    *(short *)(unaff_A6 + -0x28) = (short)((unaff_D4w + 6) % 8);
    *(short *)(unaff_A6 + -0x2a) = *(short *)(unaff_A6 + -0x10) - (short)(unaff_D6w + 1) / 2;
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0();
  }
  if (7 < (short)(unaff_D3w + 1)) {
    return;
  }
  *(undefined2 *)(unaff_A6 + -4) = *(undefined2 *)(unaff_A6 + -0xe);
  *(undefined2 *)(unaff_A6 + -2) = unaff_D7w;
  *(undefined2 *)(unaff_A6 + -0x24) = 0;
  FUN_00002a74();
  return;
}



// Function: FUN_00002a96 at 00002a96
// Size: 10 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a96(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  
  for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\a') {
        bVar4 = *(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04';
        if (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x349) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (2 < bVar4) {
          *(undefined1 *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 4;
          *(short *)(&DAT_00001f52 + _DAT_00027e96) = *(short *)(&DAT_00001f52 + _DAT_00027e96) + 1;
        }
      }
    }
  }
  sVar2 = 1;
  do {
    if (0x6e < sVar2) {
      return;
    }
    for (sVar3 = 1; sVar3 < 0x9b; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
        if ((((*(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') &&
             (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04')) &&
            ((cVar1 = *(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34b),
             cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
           ((cVar1 = *(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x349),
            cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
        if ((((*(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04') &&
             (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04')) &&
            ((cVar1 = *(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x349),
             cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
           ((cVar1 = *(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34b),
            cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
      }
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: thunk_FUN_00002b74 at 00002aa0
// Size: 4 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00002b74(void)

{
  char cVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  int unaff_A6;
  byte bVar4;
  
  for (; unaff_D3w < 0x70; unaff_D3w = unaff_D3w + 1) {
    for (sVar2 = 0; sVar2 < 0x9c; sVar2 = sVar2 + 1) {
      if (*(char *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) == '\a') {
        bVar4 = *(char *)((int)unaff_D3w + (sVar2 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04';
        if (*(char *)((int)unaff_D3w + (sVar2 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x349) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (2 < bVar4) {
          *(undefined1 *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) = 4;
          *(short *)(&DAT_00001f52 + _DAT_00027e96) = *(short *)(&DAT_00001f52 + _DAT_00027e96) + 1;
        }
      }
    }
  }
  sVar2 = 1;
  do {
    if (0x6e < sVar2) {
      return;
    }
    for (sVar3 = 1; sVar3 < 0x9b; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
        if ((((*(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') &&
             (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04')) &&
            ((cVar1 = *(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34b),
             cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
           ((cVar1 = *(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x349),
            cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
        if ((((*(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04') &&
             (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04')) &&
            ((*(undefined1 *)(unaff_A6 + -1) =
                   *(undefined1 *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x349),
             *(char *)(unaff_A6 + -1) == '\x05' ||
             ((*(char *)(unaff_A6 + -1) == '\x03' || (*(char *)(unaff_A6 + -1) == '\a')))))) &&
           ((*(undefined1 *)(unaff_A6 + -2) =
                  *(undefined1 *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34b),
            *(char *)(unaff_A6 + -2) == '\x05' ||
            ((*(char *)(unaff_A6 + -2) == '\x03' || (*(char *)(unaff_A6 + -2) == '\a')))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
      }
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_00002ad0 at 00002ad0
// Size: 164 bytes

/* WARNING: Instruction at (ram,0x00002ad2) overlaps instruction at (ram,0x00002ad0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ad0(void)

{
  ushort *puVar1;
  char cVar2;
  int in_D0;
  short unaff_D3w;
  short sVar3;
  short unaff_D4w;
  short sVar4;
  short unaff_D5w;
  int in_A0;
  int unaff_A6;
  
  puVar1 = (ushort *)(in_A0 + 2 + (int)(short)in_D0);
  *puVar1 = *puVar1 | 0x2079;
  do {
    if (*(char *)((int)unaff_D3w + in_D0 + in_A0 + 0x34a) == '\x04') {
      unaff_D5w = unaff_D5w + 1;
    }
    if (*(char *)((int)unaff_D3w + (unaff_D4w + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
      unaff_D5w = unaff_D5w + 1;
    }
    if (*(char *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') {
      unaff_D5w = unaff_D5w + 1;
    }
    if (*(char *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x349) == '\x04') {
      unaff_D5w = unaff_D5w + 1;
    }
    if (2 < unaff_D5w) {
      *(undefined1 *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) = 4;
      *(short *)(&DAT_00001f52 + _DAT_00027e96) = *(short *)(&DAT_00001f52 + _DAT_00027e96) + 1;
    }
    do {
      unaff_D4w = unaff_D4w + 1;
      while (0x9b < unaff_D4w) {
        unaff_D3w = unaff_D3w + 1;
        if (0x6f < unaff_D3w) {
          sVar3 = 1;
          do {
            if (0x6e < sVar3) {
              return;
            }
            for (sVar4 = 1; sVar4 < 0x9b; sVar4 = sVar4 + 1) {
              if (*(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
                if ((((*(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04')
                     && (*(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x349) ==
                         '\x04')) &&
                    ((cVar2 = *(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34b),
                     cVar2 == '\x05' || ((cVar2 == '\x03' || (cVar2 == '\a')))))) &&
                   ((cVar2 = *(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x349),
                    cVar2 == '\x05' || ((cVar2 == '\x03' || (cVar2 == '\a')))))) {
                    /* WARNING: Subroutine does not return */
                  FUN_00002ad0(0x1000a);
                }
                if (((*(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04')
                    && (*(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34b) ==
                        '\x04')) &&
                   ((((*(undefined1 *)(unaff_A6 + -1) =
                            *(undefined1 *)
                             ((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x349),
                      *(char *)(unaff_A6 + -1) == '\x05' || (*(char *)(unaff_A6 + -1) == '\x03')) ||
                     (*(char *)(unaff_A6 + -1) == '\a')) &&
                    (((*(undefined1 *)(unaff_A6 + -2) =
                            *(undefined1 *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34b)
                      , *(char *)(unaff_A6 + -2) == '\x05' || (*(char *)(unaff_A6 + -2) == '\x03'))
                     || (*(char *)(unaff_A6 + -2) == '\a')))))) {
                    /* WARNING: Subroutine does not return */
                  FUN_00002ad0(0x1000a);
                }
              }
            }
            sVar3 = sVar3 + 1;
          } while( true );
        }
        unaff_D4w = 0;
      }
      unaff_D5w = 0;
    } while (*(char *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) != '\a');
    in_D0 = (unaff_D4w + 1) * 0x70;
    in_A0 = _DAT_00027e9a;
  } while( true );
}



// Function: FUN_00002b74 at 00002b74
// Size: 427 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002b74(void)

{
  char cVar1;
  short unaff_D3w;
  short sVar2;
  short sVar3;
  int unaff_A6;
  byte bVar4;
  
  for (; unaff_D3w < 0x70; unaff_D3w = unaff_D3w + 1) {
    for (sVar2 = 0; sVar2 < 0x9c; sVar2 = sVar2 + 1) {
      if (*(char *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) == '\a') {
        bVar4 = *(char *)((int)unaff_D3w + (sVar2 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04';
        if (*(char *)((int)unaff_D3w + (sVar2 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (*(char *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x349) == '\x04') {
          bVar4 = bVar4 + 1;
        }
        if (2 < bVar4) {
          *(undefined1 *)((int)unaff_D3w + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) = 4;
          *(short *)(&DAT_00001f52 + _DAT_00027e96) = *(short *)(&DAT_00001f52 + _DAT_00027e96) + 1;
        }
      }
    }
  }
  sVar2 = 1;
  do {
    if (0x6e < sVar2) {
      return;
    }
    for (sVar3 = 1; sVar3 < 0x9b; sVar3 = sVar3 + 1) {
      if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
        if ((((*(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04') &&
             (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04')) &&
            ((cVar1 = *(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34b),
             cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
           ((cVar1 = *(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x349),
            cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
        if ((((*(char *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04') &&
             (*(char *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04')) &&
            ((*(undefined1 *)(unaff_A6 + -1) =
                   *(undefined1 *)((int)sVar2 + (sVar3 + -1) * 0x70 + _DAT_00027e9a + 0x349),
             *(char *)(unaff_A6 + -1) == '\x05' ||
             ((*(char *)(unaff_A6 + -1) == '\x03' || (*(char *)(unaff_A6 + -1) == '\a')))))) &&
           ((*(undefined1 *)(unaff_A6 + -2) =
                  *(undefined1 *)((int)sVar2 + (sVar3 + 1) * 0x70 + _DAT_00027e9a + 0x34b),
            *(char *)(unaff_A6 + -2) == '\x05' ||
            ((*(char *)(unaff_A6 + -2) == '\x03' || (*(char *)(unaff_A6 + -2) == '\a')))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
      }
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_00002d52 at 00002d52
// Size: 99 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d52(void)

{
  char cVar1;
  int in_D0;
  short unaff_D3w;
  short unaff_D4w;
  int unaff_A6;
  
  do {
    *(undefined1 *)(unaff_A6 + -2) =
         *(undefined1 *)(in_D0 + (unaff_D4w + 1) * 0x70 + _DAT_00027e9a + 0x34b);
    if (((*(char *)(unaff_A6 + -2) == '\x05') || (*(char *)(unaff_A6 + -2) == '\x03')) ||
       (*(char *)(unaff_A6 + -2) == '\a')) {
                    /* WARNING: Subroutine does not return */
      FUN_00002ad0(0x1000a);
    }
    do {
      do {
        unaff_D4w = unaff_D4w + 1;
        while (0x9a < unaff_D4w) {
          unaff_D3w = unaff_D3w + 1;
          if (0x6e < unaff_D3w) {
            return;
          }
          unaff_D4w = 1;
        }
      } while (*(char *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) != '\x04');
      if ((((*(char *)((int)unaff_D3w + (unaff_D4w + 1) * 0x70 + _DAT_00027e9a + 0x34b) == '\x04')
           && (*(char *)((int)unaff_D3w + (unaff_D4w + -1) * 0x70 + _DAT_00027e9a + 0x349) == '\x04'
              )) && ((cVar1 = *(char *)((int)unaff_D3w + (unaff_D4w + -1) * 0x70 + _DAT_00027e9a +
                                       0x34b), cVar1 == '\x05' ||
                     ((cVar1 == '\x03' || (cVar1 == '\a')))))) &&
         ((cVar1 = *(char *)((int)unaff_D3w + (unaff_D4w + 1) * 0x70 + _DAT_00027e9a + 0x349),
          cVar1 == '\x05' || ((cVar1 == '\x03' || (cVar1 == '\a')))))) {
                    /* WARNING: Subroutine does not return */
        FUN_00002ad0(0x1000a);
      }
    } while (((*(char *)((int)unaff_D3w + (unaff_D4w + 1) * 0x70 + _DAT_00027e9a + 0x349) != '\x04')
             || (*(char *)((int)unaff_D3w + (unaff_D4w + -1) * 0x70 + _DAT_00027e9a + 0x34b) !=
                 '\x04')) ||
            (((*(undefined1 *)(unaff_A6 + -1) =
                    *(undefined1 *)
                     ((int)unaff_D3w + (unaff_D4w + -1) * 0x70 + _DAT_00027e9a + 0x349),
              *(char *)(unaff_A6 + -1) != '\x05' && (*(char *)(unaff_A6 + -1) != '\x03')) &&
             (*(char *)(unaff_A6 + -1) != '\a'))));
    in_D0 = (int)unaff_D3w;
  } while( true );
}



// Function: FUN_00002e06 at 00002e06
// Size: 54 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e06(void)

{
  *(undefined2 *)(_DAT_00027e9a + 0x348) = 0;
  FUN_00003302();
  FUN_00003234();
  FUN_000033d0();
  FUN_00003540();
  FUN_00002e3c();
  FUN_000031bc();
  return;
}



// Function: FUN_00002e3c at 00002e3c
// Size: 676 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e3c(void)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
    for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
      if ((((sVar3 != 0) && (sVar4 != 0)) && (sVar3 != 0x6f)) && (sVar4 != 0x9b)) {
        iVar5 = sVar4 * 0x70 + _DAT_00027e9a;
        pcVar1 = (char *)(sVar3 + iVar5 + 0x34a);
        if (*pcVar1 == '\a') {
          if (((*(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x06') &&
              (*(char *)(sVar3 + iVar5 + 0x34b) == '\x06')) &&
             ((*(char *)(sVar3 + iVar5 + 0x349) == '\x06' &&
              (*(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x06')))) {
            *pcVar1 = '\x06';
          }
          if (((*(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x05') &&
              (iVar5 = sVar4 * 0x70 + _DAT_00027e9a, *(char *)(sVar3 + iVar5 + 0x34b) == '\x05')) &&
             ((*(char *)(sVar3 + iVar5 + 0x349) == '\x05' &&
              (*(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x05')))) {
            *(undefined1 *)(sVar3 + iVar5 + 0x34a) = 5;
          }
        }
      }
      if (*(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) == '\x06') {
        sVar2 = FUN_0000255c(CONCAT22(sVar3,sVar4));
        if (sVar2 != 0) {
          *(undefined1 *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) = 7;
        }
      }
    }
  }
  sVar3 = 1;
  do {
    if (0x6e < sVar3) {
      return;
    }
    for (sVar4 = 1; sVar4 < 0x9b; sVar4 = sVar4 + 1) {
      if (*(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) == '\x06') {
        iVar5 = (sVar4 + 1) * 0x70 + _DAT_00027e9a;
        if ((((*(char *)(sVar3 + iVar5 + 0x34b) == '\x06') &&
             (iVar6 = (sVar4 + -1) * 0x70 + _DAT_00027e9a,
             *(char *)(sVar3 + iVar6 + 0x349) == '\x06')) &&
            (*(char *)(sVar3 + iVar6 + 0x34b) != '\x06')) &&
           (*(char *)(sVar3 + iVar5 + 0x349) != '\x06')) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
        iVar5 = (sVar4 + 1) * 0x70 + _DAT_00027e9a;
        if (((*(char *)(sVar3 + iVar5 + 0x349) == '\x06') &&
            (iVar6 = (sVar4 + -1) * 0x70 + _DAT_00027e9a, *(char *)(sVar3 + iVar6 + 0x34b) == '\x06'
            )) && ((*(char *)(sVar3 + iVar6 + 0x349) != '\x06' &&
                   (*(char *)(sVar3 + iVar5 + 0x34b) != '\x06')))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
      }
    }
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_00003138 at 00003138
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003138(void)

{
  short unaff_D3w;
  short unaff_D4w;
  int iVar1;
  int iVar2;
  int in_A0;
  int unaff_A6;
  
  do {
    if (*(char *)(in_A0 + 0x34a) != '\x06') {
                    /* WARNING: Subroutine does not return */
      FUN_00002ad0(0x1000a);
    }
    do {
      do {
        unaff_D4w = unaff_D4w + 1;
        while (0x9a < unaff_D4w) {
          unaff_D3w = unaff_D3w + 1;
          if (0x6e < unaff_D3w) {
            return;
          }
          unaff_D4w = 1;
        }
      } while (*(char *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) != '\x06');
      iVar1 = (unaff_D4w + 1) * 0x70 + _DAT_00027e9a;
      if ((((*(char *)(unaff_D3w + iVar1 + 0x34b) == '\x06') &&
           (iVar2 = (unaff_D4w + -1) * 0x70 + _DAT_00027e9a,
           *(char *)(unaff_D3w + iVar2 + 0x349) == '\x06')) &&
          (*(char *)(unaff_D3w + iVar2 + 0x34b) != '\x06')) &&
         (*(char *)(unaff_D3w + iVar1 + 0x349) != '\x06')) {
                    /* WARNING: Subroutine does not return */
        FUN_00002ad0(0x1000a);
      }
      iVar1 = (unaff_D4w + 1) * 0x70 + _DAT_00027e9a;
      *(int *)(unaff_A6 + -4) = iVar1;
    } while (((*(char *)(unaff_D3w + iVar1 + 0x349) != '\x06') ||
             (iVar1 = (unaff_D4w + -1) * 0x70 + _DAT_00027e9a,
             *(char *)(unaff_D3w + iVar1 + 0x34b) != '\x06')) ||
            (*(char *)(unaff_D3w + iVar1 + 0x349) == '\x06'));
    in_A0 = unaff_D3w + 1 + *(int *)(unaff_A6 + -4);
  } while( true );
}



// Function: FUN_00003140 at 00003140
// Size: 14 bytes

void FUN_00003140(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1000a);
}



// Function: FUN_000031bc at 000031bc
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031bc(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar2 = FUN_000025f0();
  if (sVar2 != 0) {
    for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
      for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
        cVar1 = *(char *)((int)sVar2 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a);
        if ((cVar1 != '\x06') && (cVar1 != '\x05')) {
          sVar3 = FUN_0000255c();
          if (sVar3 != 0) {
            *(undefined1 *)((int)sVar2 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) = 5;
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00003234 at 00003234
// Size: 14 bytes

/* WARNING: Removing unreachable block (ram,0x0000328a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003234(void)

{
  if (0 < *(short *)(_DAT_00027e96 + 0x36)) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10070);
  }
  return;
}



// Function: FUN_00003302 at 00003302
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003302(void)

{
  if (*(short *)(_DAT_00027e96 + 0x34) < 1) {
    return;
  }
  FUN_00003354();
  return;
}



// Function: FUN_00003328 at 00003328
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003328(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: thunk_FUN_00002ad0 at 00003330
// Size: 6 bytes

void thunk_FUN_00002ad0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0();
}



// Function: FUN_00003354 at 00003354
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003354(void)

{
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  
  if (unaff_D6w == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10070);
  }
  *(undefined1 *)((int)unaff_D3w + unaff_D4w * 0x70 + _DAT_00027e9a + 0x34a) = 6;
  *(short *)(_DAT_00027e9a + *(short *)(_DAT_00027e9a + 0x348) * 0xe) = unaff_D3w;
  *(short *)(_DAT_00027e9a + 2 + *(short *)(_DAT_00027e9a + 0x348) * 0xe) = unaff_D4w;
  *(undefined2 *)(_DAT_00027e9a + 4 + *(short *)(_DAT_00027e9a + 0x348) * 0xe) = 2;
  *(undefined2 *)(_DAT_00027e9a + 6 + *(short *)(_DAT_00027e9a + 0x348) * 0xe) = 0;
  *(short *)(_DAT_00027e9a + 0x348) = *(short *)(_DAT_00027e9a + 0x348) + 1;
  if (*(short *)(_DAT_00027e96 + 0x34) <= (short)(unaff_D5w + 1)) {
    return;
  }
  FUN_00003354();
  return;
}



// Function: FUN_000033d0 at 000033d0
// Size: 102 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000033d0(void)

{
  if ((1 < *(short *)(_DAT_00027e9a + 0x348)) && (0 < *(short *)(_DAT_00027e9a + 0x348))) {
    if (*(short *)(_DAT_00027e9a + 4) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00002ad0(0x10002);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10004);
  }
  return;
}



// Function: FUN_00003540 at 00003540
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003540(void)

{
  short sVar1;
  short sVar2;
  
  if (1 < *(short *)(_DAT_00027e9a + 0x348)) {
    for (sVar1 = 0; sVar1 < *(short *)(_DAT_00027e9a + 0x348); sVar1 = sVar1 + 1) {
      if (*(short *)(_DAT_00027e9a + 4 + sVar1 * 0xe) == 1) {
        if (*(short *)(_DAT_00027e9a + 6 + sVar1 * 0xe) == 0) {
          FUN_00003704(*(undefined4 *)(_DAT_00027e9a + sVar1 * 0xe));
        }
        else {
          for (sVar2 = 0; sVar2 < *(short *)(_DAT_00027e9a + 6 + sVar1 * 0xe); sVar2 = sVar2 + 1) {
            if (*(short *)(_DAT_00027e9a + 4 +
                          *(short *)(sVar1 * 0xe + _DAT_00027e9a + 8 + sVar2 * 2) * 0xe) == 1) {
              FUN_000037aa(*(undefined4 *)(_DAT_00027e9a + sVar1 * 0xe),
                           *(undefined4 *)
                            (_DAT_00027e9a +
                            *(short *)(sVar1 * 0xe + _DAT_00027e9a + 8 + sVar2 * 2) * 0xe));
            }
            else {
              FUN_0000377c(*(undefined4 *)(_DAT_00027e9a + sVar1 * 0xe),
                           *(undefined4 *)
                            (_DAT_00027e9a +
                            *(short *)(sVar1 * 0xe + _DAT_00027e9a + 8 + sVar2 * 2) * 0xe));
            }
          }
        }
      }
      else if (*(short *)(_DAT_00027e9a + 6 + sVar1 * 0xe) == 0) {
        FUN_0000368c(*(undefined4 *)(_DAT_00027e9a + sVar1 * 0xe));
      }
      else {
        for (sVar2 = 0; sVar2 < *(short *)(_DAT_00027e9a + 6 + sVar1 * 0xe); sVar2 = sVar2 + 1) {
          FUN_0000377c(*(undefined4 *)(_DAT_00027e9a + sVar1 * 0xe),
                       *(undefined4 *)
                        (_DAT_00027e9a +
                        *(short *)(sVar1 * 0xe + _DAT_00027e9a + 8 + sVar2 * 2) * 0xe));
        }
      }
    }
  }
  return;
}



// Function: FUN_0000368c at 0000368c
// Size: 20 bytes

void FUN_0000368c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10005);
}



// Function: FUN_00003704 at 00003704
// Size: 20 bytes

void FUN_00003704(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10005);
}



// Function: FUN_0000377c at 0000377c
// Size: 24 bytes

void FUN_0000377c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10002,6);
}



// Function: FUN_000037aa at 000037aa
// Size: 28 bytes

void FUN_000037aa(undefined4 param_1,undefined4 param_2)

{
  FUN_000037c6(param_1,param_2,0x30005);
  return;
}



// Function: FUN_000037c6 at 000037c6
// Size: 834 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000037c6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  short unaff_D7w;
  short local_5a;
  short sVar7;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar5 = false;
  local_8 = param_1;
  sVar7 = (short)param_2;
  FUN_00001da4((short)param_1,sVar7,(short)auStack_24);
  while( true ) {
    if (bVar5) {
      return;
    }
    local_5a = (short)((uint)param_2 >> 0x10);
    FUN_00001da4((short)local_8,sVar7,(short)&local_c);
    sVar6 = FUN_000022b2(local_8,param_2);
    if (2 < sVar6) break;
    local_1c = local_c._0_2_ + local_8._0_2_;
    local_8._2_2_ = local_c._2_2_ + local_8._2_2_;
    local_8 = CONCAT22(local_1c,local_8._2_2_);
    local_20 = local_c;
    for (sVar6 = 0; sVar6 < 8; sVar6 = sVar6 + 1) {
      if ((local_c._0_2_ == *(short *)(sVar6 * 4 + _DAT_00027e96 + 0xbc)) &&
         (local_c._2_2_ == *(short *)(sVar6 * 4 + _DAT_00027e96 + 0xbe))) {
        unaff_D7w = sVar6;
      }
    }
    sVar1 = (short)((unaff_D7w + 2) % 8);
    sVar3 = (short)((unaff_D7w + 6) % 8);
    sVar6 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbc);
    local_10 = sVar6 + local_1c;
    sVar1 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbe);
    local_e = sVar1 + local_8._2_2_;
    sVar2 = *(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbc);
    local_18 = sVar2 + local_1c;
    sVar3 = *(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbe);
    local_16 = sVar3 + local_8._2_2_;
    local_14 = sVar6 * 2 + local_1c;
    local_12 = local_8._2_2_ + sVar1 * 2;
    local_1c = sVar2 * 2 + local_1c;
    local_1a = local_8._2_2_ + sVar3 * 2;
    FUN_000091a4((short)&local_8,(short)&local_8 + 2);
    cVar4 = *(char *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a);
    if ((cVar4 == '\a') || (cVar4 == '\x05')) {
      *(undefined1 *)((int)local_8._0_2_ + local_8._2_2_ * 0x70 + _DAT_00027e9a + 0x34a) =
           (undefined1)param_3;
    }
    if ((local_8._0_2_ == local_5a) && (local_8._2_2_ == sVar7)) {
      bVar5 = true;
    }
    if (param_3._0_2_ == 2) {
      FUN_000091a4((short)&local_10,(short)&local_e);
      cVar4 = *(char *)((int)local_10 + local_e * 0x70 + _DAT_00027e9a + 0x34a);
      if ((cVar4 == '\a') || (cVar4 == '\x05')) {
        *(undefined1 *)((int)local_10 + local_e * 0x70 + _DAT_00027e9a + 0x34a) =
             (undefined1)param_3;
      }
      cVar4 = *(char *)((int)local_18 + local_16 * 0x70 + _DAT_00027e9a + 0x34a);
      if ((cVar4 == '\a') || (cVar4 == '\x05')) {
        *(undefined1 *)((int)local_18 + local_16 * 0x70 + _DAT_00027e9a + 0x34a) =
             (undefined1)param_3;
      }
    }
    if (param_3._0_2_ == 3) {
      FUN_000091a4((short)&local_14,(short)&local_12);
      cVar4 = *(char *)((int)local_14 + local_12 * 0x70 + _DAT_00027e9a + 0x34a);
      if ((cVar4 == '\a') || (cVar4 == '\x05')) {
        *(undefined1 *)((int)local_14 + local_12 * 0x70 + _DAT_00027e9a + 0x34a) =
             (undefined1)param_3;
      }
      cVar4 = *(char *)((int)local_1c + local_1a * 0x70 + _DAT_00027e9a + 0x34a);
      if ((cVar4 == '\a') || (cVar4 == '\x05')) {
        *(undefined1 *)((int)local_1c + local_1a * 0x70 + _DAT_00027e9a + 0x34a) =
             (undefined1)param_3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(3);
}



// Function: FUN_00003b76 at 00003b76
// Size: 26 bytes

void FUN_00003b76(void)

{
  FUN_00003c02();
  FUN_00004ae8();
  FUN_00004ae8();
  return;
}



// Function: FUN_00003b90 at 00003b90
// Size: 26 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003b90(void)

{
  FUN_0000518e();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002ad0((short)_DAT_00027fd4);
}



// Function: FUN_00003c02 at 00003c02
// Size: 562 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003c02(void)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  for (sVar5 = 0; sVar5 < 0x9c; sVar5 = sVar5 + 1) {
    for (sVar4 = 0; iVar7 = _DAT_00027e96, sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (((int)sVar5 + (int)sVar4 == 0) ||
         (((int)sVar5 + (int)sVar4) / 2 != ((int)sVar5 + (int)sVar4 + -1) / 2)) {
        sVar3 = 1;
      }
      else {
        sVar3 = 0;
      }
      iVar6 = sVar5 * 0x70 + _DAT_00027e9a;
      if ((((*(char *)(sVar4 + iVar6 + 0x34a) == '\n') &&
           (*(char *)((int)sVar4 + (sVar5 + -1) * 0x70 + _DAT_00027e9a + 0x34a) != '\n')) &&
          (*(char *)(sVar4 + iVar6 + 0x349) != '\n')) && ((0 < sVar4 && (0 < sVar5)))) {
        puVar1 = (uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2);
        *puVar1 = *puVar1 & 0xffffff | (uint)*(ushort *)(_DAT_00027e96 + 0x6e4) << 0x18;
        puVar1 = (uint *)(sVar5 * 0xe0 + _DAT_00028850 + (sVar4 + 1) * 2);
        *puVar1 = *puVar1 & 0xffffff | (*(short *)(iVar7 + 0x6e4) + 1) * 0x1000000;
        puVar1 = (uint *)((sVar5 + 1) * 0xe0 + _DAT_00028850 + sVar4 * 2);
        *puVar1 = *puVar1 & 0xffffff | (*(short *)(_DAT_00027e96 + 0x6e4) + 0x10) * 0x1000000;
        puVar1 = (uint *)((sVar5 + 1) * 0xe0 + _DAT_00028850 + (sVar4 + 1) * 2);
        *puVar1 = *puVar1 & 0xffffff | (*(short *)(_DAT_00027e96 + 0x6e4) + 0x11) * 0x1000000;
      }
      else if (*(char *)((int)sVar4 + sVar5 * 0x70 + _DAT_00027e9a + 0x34a) == '\v') {
        puVar1 = (uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2);
        *puVar1 = *puVar1 & 0xffffff | (uint)*(ushort *)(sVar3 * 2 + _DAT_00027e96 + 0x724) << 0x18;
      }
      else {
        cVar2 = *(char *)((int)sVar4 + sVar5 * 0x70 + _DAT_00027e9a + 0x34a);
        if (cVar2 != '\n') {
          puVar1 = (uint *)(sVar5 * 0xe0 + _DAT_00028850 + sVar4 * 2);
          *puVar1 = *puVar1 & 0xffffff |
                    (uint)*(ushort *)(sVar3 * 2 + cVar2 * 0x40 + _DAT_00027e96 + 0x464) << 0x18;
        }
      }
    }
  }
  for (sVar5 = 0; sVar5 < 8; sVar5 = sVar5 + 1) {
    iVar7 = sVar5 * 0x20 + _DAT_0002884c;
    puVar1 = (uint *)(*(short *)(iVar7 + 0x814) * 0xe0 + _DAT_00028850 +
                     *(short *)(iVar7 + 0x812) * 2);
    *puVar1 = *puVar1 & 0xffffff | (uint)*(ushort *)(_DAT_00027e96 + 0x728) << 0x18;
  }
  return;
}



// Function: FUN_00003e34 at 00003e34
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003e34(void)

{
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
                    /* WARNING: Subroutine does not return */
  FUN_00001ea8();
}



// Function: FUN_00003ea0 at 00003ea0
// Size: 2 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003ea0(void)

{
  short *unaff_A2;
  
  *unaff_A2 = *unaff_A2 + -7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003eb8 at 00003eb8
// Size: 204 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003eb8(void)

{
  int in_D0;
  char cVar1;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined2 uStack00000006;
  undefined2 uStack00000008;
  undefined4 uStack0000000a;
  
  if (in_D0 == 0) {
    uStack0000000a = 0x20;
    uStack00000006 = 0;
    uStack00000008 = 0x3ecc;
    FUN_000073b0();
    uVar2 = 0;
    if (extraout_A0 != 0) {
      *(int *)(unaff_A6 + -0x8b6) = extraout_A0;
      *(int *)(unaff_A6 + -0x8b2) = extraout_A0;
      uStack00000006 = 0;
      uStack00000008 = 0x3ee4;
      FUN_00003138();
      uVar2 = extraout_A0_00;
    }
    *(undefined4 *)(unaff_A6 + -8) = uVar2;
    uStack0000000a = 1000;
    uStack00000006 = (undefined2)((uint)*(undefined4 *)(unaff_A6 + -4) >> 0x10);
    uStack00000008 = (undefined2)*(undefined4 *)(unaff_A6 + -4);
    uStack00000004 = (undefined2)*(undefined4 *)(unaff_A6 + -8);
    FUN_00003140();
    (**(code **)(**(int **)(unaff_A6 + -8) + 0xbc))(*(int **)(unaff_A6 + -8),_DAT_00028850,0x8880);
    FUN_00000e10(*(undefined4 *)(unaff_A6 + -8));
    *(undefined4 *)(unaff_A6 + -8) = extraout_A0_01;
    FUN_00007310(0x25b76);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack0000000a = *(undefined4 *)(unaff_A6 + -8);
  uStack00000006 = 0;
  uStack00000008 = 0x4aa6;
  FUN_00000e10();
  *(undefined4 *)(unaff_A6 + -8) = extraout_A0_02;
  uStack00000006 = (undefined2)((uint)*(undefined4 *)(unaff_A6 + -4) >> 0x10);
  uStack00000008 = (undefined2)*(undefined4 *)(unaff_A6 + -4);
  uStack00000004 = 0x4ab4;
  cVar1 = func_0x00001d60();
  if (cVar1 == '\0') {
    uStack0000000a = *(undefined4 *)(unaff_A6 + -4);
    uStack00000006 = 0;
    uStack00000008 = 0x4ac4;
    FUN_00001d08();
    *(undefined4 *)(unaff_A6 + -4) = extraout_A0_03;
  }
  uStack0000000a = *(undefined4 *)(unaff_A6 + -0x18);
  uStack00000008 = *(undefined2 *)(unaff_A6 + -0x1a);
  uStack00000004 = 0;
  uStack00000006 = 0x4ad8;
  FUN_00001c10();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00004650 at 00004650
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00004938 at 00004938
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00004938(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00004ae8 at 00004ae8
// Size: 1316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004ae8(void)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  sVar4 = FUN_000025f0();
  for (sVar8 = 0; sVar8 < 0x9c; sVar8 = sVar8 + 1) {
    for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
      cVar3 = *(char *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a);
      if ((cVar3 == '\x02') || (cVar3 == '\x03')) {
        sVar6 = FUN_000053e2(sVar8);
        if (((int)sVar8 + (int)sVar7 == 0) ||
           (((int)sVar8 + (int)sVar7) / 2 != ((int)sVar8 + (int)sVar7 + -1) / 2)) {
          sVar5 = 1;
        }
        else {
          sVar5 = 0;
        }
        if (*(char *)(sVar6 + _DAT_00027e96 + 0x264) < '\0') {
          *(undefined1 *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 8;
          puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2);
          *puVar2 = *puVar2 & 0xffffff |
                    (uint)*(ushort *)(sVar5 * 2 + _DAT_00027e96 + 0x664) << 0x18;
          FUN_00005dee(sVar8);
          pbVar1 = (byte *)(sVar8 * 0xe0 + _DAT_00028850 + 1 + sVar7 * 2);
          *pbVar1 = *pbVar1 & 0x7f;
        }
        else {
          *(undefined1 *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
          puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2);
          *puVar2 = *puVar2 & 0xffffff |
                    (uint)*(ushort *)
                           (sVar5 * 2 + *(char *)(sVar6 + _DAT_00027e96 + 0x264) * 4 + _DAT_00027e96
                           + 0x4e4) << 0x18;
        }
      }
    }
  }
  for (sVar8 = 0; sVar8 < 0x9c; sVar8 = sVar8 + 1) {
    for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
      if (*(char *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) == '\x04') {
        sVar6 = FUN_00005496(sVar8);
        if (((int)sVar8 + (int)sVar7 == 0) ||
           (((int)sVar8 + (int)sVar7) / 2 != ((int)sVar8 + (int)sVar7 + -1) / 2)) {
          sVar5 = 1;
        }
        else {
          sVar5 = 0;
        }
        if (*(char *)(sVar6 + _DAT_00027e96 + 0x264) < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(10);
        }
        puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2);
        *puVar2 = *puVar2 & 0xffffff |
                  (uint)*(ushort *)
                         (sVar5 * 2 + *(char *)(sVar6 + _DAT_00027e96 + 0x264) * 4 + _DAT_00027e96 +
                         0x564) << 0x18;
        *(undefined1 *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 4;
      }
    }
  }
  for (sVar8 = 0; sVar8 < 0x9c; sVar8 = sVar8 + 1) {
    for (sVar7 = 0; sVar7 < 0x70; sVar7 = sVar7 + 1) {
      if (*(char *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) == '\x06') {
        sVar6 = FUN_00005536(sVar8);
        if (((int)sVar8 + (int)sVar7 == 0) ||
           (((int)sVar8 + (int)sVar7) / 2 != ((int)sVar8 + (int)sVar7 + -1) / 2)) {
          sVar5 = 1;
        }
        else {
          sVar5 = 0;
        }
        if (*(char *)(sVar6 + _DAT_00027e96 + 0x264) < '\0') {
          if (sVar4 == 0) {
            puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2);
            *puVar2 = *puVar2 & 0xffffff |
                      (uint)*(ushort *)(sVar5 * 2 + _DAT_00027e96 + 0x624) << 0x18;
            *(undefined1 *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 7;
          }
          else {
            puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2);
            *puVar2 = *puVar2 & 0xffffff |
                      (uint)*(ushort *)(sVar5 * 2 + _DAT_00027e96 + 0x5a4) << 0x18;
            *(undefined1 *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 5;
          }
        }
        else {
          puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2);
          *puVar2 = *puVar2 & 0xffffff |
                    (uint)*(ushort *)
                           (sVar5 * 2 + *(char *)(sVar6 + _DAT_00027e96 + 0x264) * 4 + _DAT_00027e96
                           + 0x5e4) << 0x18;
          *(undefined1 *)((int)sVar7 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 6;
        }
      }
    }
  }
  sVar8 = 0;
  do {
    if (0x9b < sVar8) {
      sVar8 = 0;
      do {
        if (0x9b < sVar8) {
          return;
        }
        for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
          if (*(char *)((int)sVar4 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) == '\b') {
                    /* WARNING: Subroutine does not return */
            FUN_00002ad0(10);
          }
        }
        sVar8 = sVar8 + 1;
      } while( true );
    }
    for (sVar4 = 0; sVar4 < 0x70; sVar4 = sVar4 + 1) {
      if (*(char *)((int)sVar4 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) == '\x05') {
        sVar7 = FUN_000055d6(sVar8);
        if (((int)sVar8 + (int)sVar4 == 0) ||
           (((int)sVar8 + (int)sVar4) / 2 != ((int)sVar8 + (int)sVar4 + -1) / 2)) {
          sVar6 = 1;
        }
        else {
          sVar6 = 0;
        }
        if (*(char *)(sVar7 + _DAT_00027e96 + 0x264) < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(10);
        }
        puVar2 = (uint *)(sVar8 * 0xe0 + _DAT_00028850 + sVar4 * 2);
        *puVar2 = *puVar2 & 0xffffff |
                  (uint)*(ushort *)
                         (sVar6 * 2 + *(char *)(sVar7 + _DAT_00027e96 + 0x264) * 4 + _DAT_00027e96 +
                         0x5a4) << 0x18;
        *(undefined1 *)((int)sVar4 + sVar8 * 0x70 + _DAT_00027e9a + 0x34a) = 5;
      }
    }
    sVar8 = sVar8 + 1;
  } while( true );
}



// Function: FUN_0000518e at 0000518e
// Size: 222 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000518e(void)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = 0;
  do {
    if (0x9b < sVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00002ad0(10);
    }
    for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
      if ((uint)(*(int *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3) << 3) >> 0x1b != 0) {
        sVar2 = FUN_00005684(sVar4);
        if (*(char *)(sVar2 + _DAT_00027e96 + 0x364) < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(10);
        }
        puVar1 = (uint *)(sVar4 * 0x70 + _DAT_00028858 + (int)sVar3);
        *puVar1 = *puVar1 & 0xe0ffffff |
                  ((int)*(char *)(sVar2 + _DAT_00027e96 + 0x364) + 1U & 0x1f) << 0x18;
      }
    }
    sVar4 = sVar4 + 1;
  } while( true );
}



// Function: FUN_00005308 at 00005308
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005308(void)

{
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  short sVar1;
  short unaff_D7w;
  int iVar2;
  int unaff_A6;
  undefined4 uStack00000006;
  undefined2 uStack0000000a;
  
  if ((byte)((uint)(*(int *)(unaff_D4w * 0x70 + _DAT_00028858 + (int)unaff_D3w) << 3) >> 0x1b) != 2)
  {
    sVar1 = unaff_D6w + 1;
    goto LAB_00005344;
  }
  iVar2 = unaff_D4w * 0x70 + _DAT_00028858;
  *(int *)(unaff_A6 + -4) = iVar2;
  *(byte *)(iVar2 + unaff_D3w) = *(byte *)(iVar2 + unaff_D3w) & 0xe0;
  *(byte *)(iVar2 + unaff_D3w) = *(byte *)(iVar2 + unaff_D3w) | 0x11;
  do {
    unaff_D5w = unaff_D5w + 1;
    if (unaff_D7w <= unaff_D5w) {
      uStack0000000a = 10;
      uStack00000006 = 0x1000a;
                    /* WARNING: Subroutine does not return */
      FUN_00002ad0();
    }
    sVar1 = 0;
LAB_00005344:
  } while (9999 < sVar1);
  uStack0000000a = 0xffff;
  uStack00000006 = 0x10070;
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0();
}



// Function: FUN_00005360 at 00005360
// Size: 48 bytes

/* WARNING: Removing unreachable block (ram,0x000053d4) */

void FUN_00005360(void)

{
  short in_D0w;
  undefined2 uStack00000004;
  
  if (0 < in_D0w) {
    uStack00000004 = 0xffff;
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0();
  }
  return;
}



// Function: FUN_000053e2 at 000053e2
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_000053e2(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort local_6;
  
  local_6 = 0;
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    sVar4 = *(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbc) + param_1._0_2_;
    sVar5 = *(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbe) + param_1._2_2_;
    bVar2 = 0x9b < sVar5 || (0x6f < sVar4 || (sVar5 < 0 || sVar4 < 0));
    cVar1 = *(char *)((int)sVar4 + sVar5 * 0x70 + _DAT_00027e9a + 0x34a);
    if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x01')) {
      bVar2 = true;
    }
    if (bVar2) {
      local_6 = (ushort)(1 << ((int)sVar3 & 0x3fU)) | local_6;
    }
  }
  return local_6;
}



// Function: FUN_00005496 at 00005496
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00005496(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  
  uVar4 = 0;
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    sVar2 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbc) + param_1._0_2_;
    sVar3 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbe) + param_1._2_2_;
    if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x04' ||
        (0x9b < sVar3 || (0x6f < sVar2 || (sVar3 < 0 || sVar2 < 0)))) {
      uVar4 = (ushort)(1 << ((int)sVar1 & 0x3fU)) | uVar4;
    }
  }
  return uVar4;
}



// Function: FUN_00005536 at 00005536
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00005536(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  
  uVar4 = 0;
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    sVar2 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbc) + param_1._0_2_;
    sVar3 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xbe) + param_1._2_2_;
    if (*(char *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) == '\x06' ||
        (0x9b < sVar3 || (0x6f < sVar2 || (sVar3 < 0 || sVar2 < 0)))) {
      uVar4 = (ushort)(1 << ((int)sVar1 & 0x3fU)) | uVar4;
    }
  }
  return uVar4;
}



// Function: FUN_000055d6 at 000055d6
// Size: 174 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_000055d6(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  
  uVar6 = 0;
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    sVar4 = *(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbc) + param_1._0_2_;
    sVar5 = *(short *)(sVar3 * 4 + _DAT_00027e96 + 0xbe) + param_1._2_2_;
    bVar2 = 0x9b < sVar5 || (0x6f < sVar4 || (sVar5 < 0 || sVar4 < 0));
    cVar1 = *(char *)((int)sVar4 + sVar5 * 0x70 + _DAT_00027e9a + 0x34a);
    if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = (ushort)(1 << ((int)sVar3 & 0x3fU)) | uVar6;
    }
  }
  return uVar6;
}



// Function: FUN_00005684 at 00005684
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00005684(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  
  uVar4 = 0;
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    sVar2 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xdc) + param_1._0_2_;
    sVar3 = *(short *)(sVar1 * 4 + _DAT_00027e96 + 0xde) + param_1._2_2_;
    if ((((-1 < sVar2) && (-1 < sVar3)) && (sVar2 < 0x70)) &&
       ((sVar3 < 0x9c &&
        (((uint)(*(int *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) << 3) >> 0x1b != 0 ||
         (*(char *)((*(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18) + _DAT_0002884c +
                   0x711) == '\x01')))))) {
      uVar4 = (ushort)(1 << ((int)sVar1 & 0x3fU)) | uVar4;
    }
  }
  return uVar4;
}



// Function: FUN_00005708 at 00005708
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00005708(void)

{
  uint in_D0;
  uint uVar1;
  short unaff_D2w;
  short sVar2;
  short sVar3;
  ushort unaff_D6w;
  int unaff_A6;
  
  uVar1 = in_D0 & 0xffffff00;
  do {
    if (*(char *)(uVar1 + _DAT_0002884c + 0x711) != '\x01') goto LAB_00005724;
    do {
      uVar1 = (uint)unaff_D2w;
      unaff_D6w = (ushort)(1 << (uVar1 & 0x3f)) | unaff_D6w;
LAB_00005724:
      do {
        unaff_D2w = unaff_D2w + 1;
        if (7 < unaff_D2w) {
          return CONCAT22((short)(uVar1 >> 0x10),unaff_D6w);
        }
        sVar2 = *(short *)(unaff_D2w * 4 + _DAT_00027e96 + 0xdc) + *(short *)(unaff_A6 + 8);
        sVar3 = *(short *)(unaff_D2w * 4 + _DAT_00027e96 + 0xde);
        uVar1 = (uint)sVar3;
        sVar3 = sVar3 + *(short *)(unaff_A6 + 10);
      } while ((((sVar2 < 0) || (sVar3 < 0)) || (0x6f < sVar2)) || (0x9b < sVar3));
    } while ((uint)(*(int *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2) << 3) >> 0x1b != 0);
    uVar1 = *(uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2) >> 0x18;
  } while( true );
}



// Function: FUN_00005738 at 00005738
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00005760 at 00005760
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005760(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000057e0 at 000057e0
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000057e0(void)

{
  (**(code **)(**(int **)(*(int *)(_DAT_000297f4 + 0x80) + 0x142) + 0x160))();
                    /* WARNING: Subroutine does not return */
  FUN_00001ea8();
}



// Function: FUN_0000594e at 0000594e
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000594e(void)

{
  if (*(short *)(_DAT_00027e96 + 0x2a) < 0x1f) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10005);
  }
  if (*(short *)(_DAT_00027e96 + 0x2a) < 0x29) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x1000a);
  }
  if (*(short *)(_DAT_00027e96 + 0x2a) < 0x33) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x1000f);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1001e);
}



// Function: FUN_00005dbc at 00005dbc
// Size: 20 bytes

void FUN_00005dbc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10003);
}



// Function: FUN_00005dee at 00005dee
// Size: 24 bytes

void FUN_00005dee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10005);
}



// Function: FUN_00005ed6 at 00005ed6
// Size: 170 bytes

/* WARNING: Removing unreachable block (ram,0x00005fae) */

void FUN_00005ed6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10066);
}



// Function: FUN_00006030 at 00006030
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006030(void)

{
  short sVar1;
  
  *(undefined2 *)(_DAT_0002884c + 0x15c2) = 0;
  FUN_00006362();
  FUN_00003eb8();
  FUN_00003ea0();
  for (sVar1 = *(short *)(_DAT_00027e96 + 0xa84); sVar1 < *(short *)(_DAT_00027e96 + 0x2a);
      sVar1 = sVar1 + 1) {
    FUN_0000640c();
  }
  return;
}



// Function: FUN_0000607c at 0000607c
// Size: 388 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000607c(void)

{
  short sVar1;
  short *psVar2;
  short local_10c [3];
  short local_106 [129];
  
  local_10c[0] = *(short *)(_DAT_00027e96 + 0x2a) / 2;
  local_10c[1] = 0x28;
  if (local_10c[0] < 0x29) {
    psVar2 = local_10c;
  }
  else {
    psVar2 = local_10c + 1;
  }
  *(short *)(_DAT_0002884c + 0x810) = *psVar2;
  for (sVar1 = 0; sVar1 < 0x28; sVar1 = sVar1 + 1) {
    *(undefined2 *)(sVar1 * 0x20 + _DAT_0002884c + 0x814) = 0xffff;
    *(undefined2 *)(sVar1 * 0x20 + _DAT_0002884c + 0x812) = 0xffff;
  }
  sVar1 = 0;
  while( true ) {
    if (*(short *)(_DAT_0002884c + 0x810) <= sVar1) {
      *(undefined2 *)(_DAT_0002884c + 0x810) = 0;
      return;
    }
    if ((short)((sVar1 * 10) / (int)*(short *)(_DAT_0002884c + 0x810)) != 0) break;
    FUN_00006a90((short)((uint)local_106 >> 0x10),(short)((uint)(local_10c + 2) >> 0x10));
    if (*(char *)((int)local_106[0] + local_10c[2] * 0x70 + _DAT_00027e9a + 0x34a) != '\x02') {
      *(short *)(_DAT_0002884c + 0x812) = local_106[0];
      *(short *)(_DAT_0002884c + 0x814) = local_10c[2];
      *(undefined1 *)((int)local_106[0] + local_10c[2] * 0x70 + _DAT_00027e9a + 0x34a) = 0xb;
      if (*(char *)(_DAT_0002884c + 0x82a) != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00002ad0(*(undefined2 *)(_DAT_00027e96 + 0xed2));
      }
                    /* WARNING: Subroutine does not return */
      FUN_00002ad0(10);
    }
    sVar1 = sVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002ad0((short)_DAT_00027fd4);
}



// Function: FUN_00006362 at 00006362
// Size: 170 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006362(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  for (sVar1 = 0; sVar1 < 0x70; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 0x9c; sVar2 = sVar2 + 1) {
      iVar3 = sVar2 * 0x70 + _DAT_00027e9a;
      if (((*(char *)(sVar1 + iVar3 + 0x34a) == '\n') &&
          (*(char *)((int)sVar1 + (sVar2 + -1) * 0x70 + _DAT_00027e9a + 0x34a) != '\n')) &&
         (*(char *)(sVar1 + iVar3 + 0x349) != '\n')) {
        *(short *)(_DAT_00027e96 + 0xa84) = *(short *)(_DAT_00027e96 + 0xa84) + 1;
        *(short *)(*(short *)(_DAT_0002884c + 0x15c2) * 0x42 + _DAT_0002884c + 0x15c4) = sVar1;
        *(short *)(*(short *)(_DAT_0002884c + 0x15c2) * 0x42 + _DAT_0002884c + 0x15c6) = sVar2;
        *(short *)(_DAT_0002884c + 0x15c2) = *(short *)(_DAT_0002884c + 0x15c2) + 1;
      }
    }
  }
  return;
}



// Function: FUN_0000640c at 0000640c
// Size: 174 bytes

/* WARNING: Removing unreachable block (ram,0x0000661a) */
/* WARNING: Removing unreachable block (ram,0x0000668a) */
/* WARNING: Removing unreachable block (ram,0x0000664c) */
/* WARNING: Removing unreachable block (ram,0x00006690) */

void FUN_0000640c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10066);
}



// Function: FUN_00006698 at 00006698
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006698(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  do {
    if (0x9b < sVar2) {
      *(undefined2 *)(_DAT_0002884c + 0x15c2) = 0;
      return;
    }
    for (sVar1 = 0; sVar1 < 0x70; sVar1 = sVar1 + 1) {
      if ((char)((uint)*(undefined4 *)(sVar2 * 0xe0 + _DAT_00028850 + sVar1 * 2) >> 0x18) == '`') {
        *(short *)(_DAT_0002884c + 0x15c4) = sVar1;
        *(short *)(_DAT_0002884c + 0x15c6) = sVar2;
        *(undefined1 *)(_DAT_0002884c + 0x15d9) = 0xf;
                    /* WARNING: Subroutine does not return */
        FUN_00002ad0(0x10003);
      }
    }
    sVar2 = sVar2 + 1;
  } while( true );
}



// Function: FUN_00006740 at 00006740
// Size: 416 bytes

/* WARNING: Removing unreachable block (ram,0x000068b8) */
/* WARNING: Removing unreachable block (ram,0x000068a4) */
/* WARNING: Removing unreachable block (ram,0x000068b2) */
/* WARNING: Removing unreachable block (ram,0x0000696e) */
/* WARNING: Removing unreachable block (ram,0x00006906) */
/* WARNING: Removing unreachable block (ram,0x0000691e) */
/* WARNING: Removing unreachable block (ram,0x0000690c) */
/* WARNING: Removing unreachable block (ram,0x00006910) */
/* WARNING: Removing unreachable block (ram,0x0000691a) */
/* WARNING: Removing unreachable block (ram,0x0000691c) */
/* WARNING: Removing unreachable block (ram,0x00006924) */
/* WARNING: Removing unreachable block (ram,0x00006928) */
/* WARNING: Removing unreachable block (ram,0x00006976) */
/* WARNING: Removing unreachable block (ram,0x00006980) */
/* WARNING: Removing unreachable block (ram,0x000069b8) */
/* WARNING: Removing unreachable block (ram,0x00006984) */
/* WARNING: Removing unreachable block (ram,0x000069be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006740(void)

{
  short sVar1;
  undefined2 local_14 [8];
  
  for (sVar1 = 0; sVar1 < 8; sVar1 = sVar1 + 1) {
    local_14[sVar1] = 0xffff;
    *(undefined2 *)(sVar1 * 0x14 + _DAT_0002884c + 0x18a) = 0xff9c;
    *(undefined2 *)(sVar1 * 0x14 + _DAT_0002884c + 0x18c) = 0xff9c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(CONCAT22(1,*(undefined2 *)(_DAT_0002884c + 0x15c2)));
}



// Function: FUN_000069c6 at 000069c6
// Size: 202 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000069c6(short *param_1,undefined4 param_2)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  
  sVar2 = *param_1;
  sVar3 = param_1[1];
  if (param_2._0_2_ < 6) {
    sVar5 = 0x62;
  }
  else {
    sVar5 = 0x80;
    param_2._0_2_ = param_2._0_2_ + -6;
  }
  uVar4 = param_2._0_2_ * 2 + sVar5;
  puVar1 = (uint *)(sVar3 * 0xe0 + _DAT_00028850 + sVar2 * 2);
  *puVar1 = *puVar1 & 0xffffff | (uint)uVar4 << 0x18;
  puVar1 = (uint *)(sVar3 * 0xe0 + _DAT_00028850 + (sVar2 + 1) * 2);
  *puVar1 = *puVar1 & 0xffffff | ((short)uVar4 + 1) * 0x1000000;
  puVar1 = (uint *)((sVar3 + 1) * 0xe0 + _DAT_00028850 + sVar2 * 2);
  *puVar1 = *puVar1 & 0xffffff | ((short)uVar4 + 0x10) * 0x1000000;
  puVar1 = (uint *)((sVar3 + 1) * 0xe0 + _DAT_00028850 + (sVar2 + 1) * 2);
  *puVar1 = *puVar1 & 0xffffff | ((short)uVar4 + 0x11) * 0x1000000;
  return;
}



// Function: FUN_00006a90 at 00006a90
// Size: 314 bytes

/* WARNING: Removing unreachable block (ram,0x00006cd0) */
/* WARNING: Removing unreachable block (ram,0x00006cd6) */
/* WARNING: Removing unreachable block (ram,0x00006c48) */
/* WARNING: Removing unreachable block (ram,0x00006c4e) */
/* WARNING: Removing unreachable block (ram,0x00006cc6) */
/* WARNING: Removing unreachable block (ram,0x00006c52) */
/* WARNING: Removing unreachable block (ram,0x00006d5e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006a90(void)

{
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x70d) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x70d) = 1;
    _DAT_00027ec4 = -1;
  }
  if (_DAT_00027ec4 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10014);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10010);
}



// Function: FUN_00006d8a at 00006d8a
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006d8a(void)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  
  sVar3 = 0;
  do {
    if (*(short *)(_DAT_0002884c + 0x15c2) <= sVar3) {
      if (_DAT_000277c0 != 0) {
        FUN_00007d52();
      }
      FUN_00007e88();
      return;
    }
    _DAT_00027ece = 0;
    _DAT_00027ecc = 0;
    _DAT_00027eca = 0;
    _DAT_00027ec8 = 0;
    _DAT_00027ec6 = 0;
    sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
    if (sVar1 == 0) {
      sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 != 0) goto LAB_00006e66;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00006e66;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00006e66;
    }
    else {
LAB_00006e66:
      _DAT_00027ec6 = 1;
    }
    sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
    if (sVar1 == 0) {
      sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 != 0) goto LAB_00006f28;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00006f28;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00006f28;
    }
    else {
LAB_00006f28:
      _DAT_00027ec8 = 1;
    }
    sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
    if (sVar1 == 0) {
      sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 != 0) goto LAB_00006fe2;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00006fe2;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00006fe2;
    }
    else {
LAB_00006fe2:
      _DAT_00027eca = 1;
    }
    sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
    if (sVar1 == 0) {
      sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 != 0) goto LAB_000070a4;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_000070a4;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_000070a4;
    }
    else {
LAB_000070a4:
      _DAT_00027ecc = 1;
    }
    sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
    if (sVar1 == 0) {
      sVar1 = FUN_0000255c(*(undefined2 *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 != 0) goto LAB_00007166;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00007166;
      sVar1 = FUN_0000255c(*(short *)(sVar3 * 0x42 + _DAT_0002884c + 0x15c6) + 1);
      if (sVar1 != 0) goto LAB_00007166;
    }
    else {
LAB_00007166:
      _DAT_00027ece = 1;
    }
    uVar2 = FUN_000071bc();
    FUN_00007260(uVar2);
    FUN_00007828(CONCAT22(sVar3,uVar2));
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_00006e40 at 00006e40
// Size: 135 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006e40(void)

{
  short sVar1;
  undefined2 uVar2;
  short unaff_D3w;
  short unaff_D4w;
  int unaff_D5;
  int iVar3;
  int unaff_A6;
  
  do {
    sVar1 = FUN_0000255c(*(short *)(unaff_D5 + 0x15c6) + 1);
    if (sVar1 == 0) goto LAB_00006e6e;
    do {
      do {
        do {
          _DAT_00027ec6 = 1;
LAB_00006e6e:
          sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
          if (sVar1 == 0) {
            sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
            if (sVar1 != 0) goto LAB_00006f28;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -4) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_00006f28;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -8) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_00006f28;
          }
          else {
LAB_00006f28:
            _DAT_00027ec8 = 1;
          }
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0xc) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 == 0) {
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x10) = iVar3;
            sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
            if (sVar1 != 0) goto LAB_00006fe2;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x14) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_00006fe2;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x18) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_00006fe2;
          }
          else {
LAB_00006fe2:
            _DAT_00027eca = 1;
          }
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x1c) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 == 0) {
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x20) = iVar3;
            sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
            if (sVar1 != 0) goto LAB_000070a4;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x24) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_000070a4;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x28) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_000070a4;
          }
          else {
LAB_000070a4:
            _DAT_00027ecc = 1;
          }
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x2c) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 == 0) {
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x30) = iVar3;
            sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
            if (sVar1 != 0) goto LAB_00007166;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x34) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_00007166;
            iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
            *(int *)(unaff_A6 + -0x38) = iVar3;
            sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
            if (sVar1 != 0) goto LAB_00007166;
          }
          else {
LAB_00007166:
            _DAT_00027ece = 1;
          }
          uVar2 = FUN_000071bc();
          FUN_00007260(uVar2);
          FUN_00007828(CONCAT22(unaff_D4w,uVar2));
          unaff_D4w = unaff_D4w + 1;
          if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D4w) {
            if (_DAT_000277c0 != 0) {
              FUN_00007d52();
            }
            FUN_00007e88();
            return;
          }
          _DAT_00027ece = 0;
          _DAT_00027ecc = 0;
          _DAT_00027eca = 0;
          _DAT_00027ec8 = 0;
          _DAT_00027ec6 = 0;
          sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c6));
          unaff_D3w = unaff_D4w;
        } while (sVar1 != 0);
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c6));
      } while (sVar1 != 0);
      sVar1 = FUN_0000255c(*(short *)(unaff_D4w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
    } while (sVar1 != 0);
    unaff_D5 = unaff_D4w * 0x42 + _DAT_0002884c;
  } while( true );
}



// Function: FUN_00006ec8 at 00006ec8
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006ec8(void)

{
  short in_D0w;
  short sVar1;
  undefined2 uVar2;
  short unaff_D3w;
  short unaff_D4w;
  int iVar3;
  int unaff_A6;
  
  do {
    iVar3 = (int)in_D0w * (int)unaff_D3w + _DAT_0002884c;
    *(int *)(unaff_A6 + -4) = iVar3;
    sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
    if (sVar1 == 0) {
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -8) = iVar3;
      sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
      if (sVar1 == 0) goto LAB_00006f30;
    }
    do {
      do {
        _DAT_00027ec8 = 1;
LAB_00006f30:
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0xc) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x10) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_00006fe2;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x14) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006fe2;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x18) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006fe2;
        }
        else {
LAB_00006fe2:
          _DAT_00027eca = 1;
        }
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x1c) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x20) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_000070a4;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x24) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_000070a4;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x28) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_000070a4;
        }
        else {
LAB_000070a4:
          _DAT_00027ecc = 1;
        }
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x2c) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x30) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_00007166;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x34) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00007166;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x38) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00007166;
        }
        else {
LAB_00007166:
          _DAT_00027ece = 1;
        }
        uVar2 = FUN_000071bc();
        FUN_00007260(uVar2);
        FUN_00007828(CONCAT22(unaff_D4w,uVar2));
        unaff_D3w = unaff_D4w + 1;
        if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D3w) {
          if (_DAT_000277c0 != 0) {
            FUN_00007d52();
          }
          FUN_00007e88();
          return;
        }
        _DAT_00027ece = 0;
        _DAT_00027ecc = 0;
        _DAT_00027eca = 0;
        _DAT_00027ec8 = 0;
        _DAT_00027ec6 = 0;
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        if (sVar1 == 0) {
          sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
          if (sVar1 != 0) goto LAB_00006e66;
          sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006e66;
          sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006e66;
        }
        else {
LAB_00006e66:
          _DAT_00027ec6 = 1;
        }
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        unaff_D4w = unaff_D3w;
      } while (sVar1 != 0);
      sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
    } while (sVar1 != 0);
    in_D0w = 0x42;
  } while( true );
}



// Function: FUN_00006ed0 at 00006ed0
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006ed0(void)

{
  int in_D0;
  short sVar1;
  undefined2 uVar2;
  short unaff_D3w;
  short unaff_D4w;
  int in_A0;
  int iVar3;
  int unaff_A6;
  
  do {
    *(int *)(unaff_A6 + -4) = in_D0 + in_A0;
    sVar1 = FUN_0000255c(*(short *)(in_D0 + in_A0 + 0x15c6) + 1);
    if (sVar1 == 0) {
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -8) = iVar3;
      sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
      if (sVar1 == 0) goto LAB_00006f30;
    }
    do {
      do {
        _DAT_00027ec8 = 1;
LAB_00006f30:
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0xc) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x10) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_00006fe2;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x14) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006fe2;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x18) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006fe2;
        }
        else {
LAB_00006fe2:
          _DAT_00027eca = 1;
        }
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x1c) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x20) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_000070a4;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x24) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_000070a4;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x28) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_000070a4;
        }
        else {
LAB_000070a4:
          _DAT_00027ecc = 1;
        }
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x2c) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x30) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_00007166;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x34) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00007166;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x38) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00007166;
        }
        else {
LAB_00007166:
          _DAT_00027ece = 1;
        }
        uVar2 = FUN_000071bc();
        FUN_00007260(uVar2);
        FUN_00007828(CONCAT22(unaff_D4w,uVar2));
        unaff_D3w = unaff_D4w + 1;
        if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D3w) {
          if (_DAT_000277c0 != 0) {
            FUN_00007d52();
          }
          FUN_00007e88();
          return;
        }
        _DAT_00027ece = 0;
        _DAT_00027ecc = 0;
        _DAT_00027eca = 0;
        _DAT_00027ec8 = 0;
        _DAT_00027ec6 = 0;
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        if (sVar1 == 0) {
          sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
          if (sVar1 != 0) goto LAB_00006e66;
          sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006e66;
          sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006e66;
        }
        else {
LAB_00006e66:
          _DAT_00027ec6 = 1;
        }
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        unaff_D4w = unaff_D3w;
      } while (sVar1 != 0);
      sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
    } while (sVar1 != 0);
    in_D0 = unaff_D3w * 0x42;
    in_A0 = _DAT_0002884c;
  } while( true );
}



// Function: FUN_00006f88 at 00006f88
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006f88(void)

{
  int in_D0;
  short sVar1;
  undefined2 uVar2;
  short unaff_D3w;
  short unaff_D4w;
  int iVar3;
  int unaff_A6;
  
  do {
    iVar3 = in_D0 + _DAT_0002884c;
    *(int *)(unaff_A6 + -0x14) = iVar3;
    sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
    if (sVar1 == 0) {
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x18) = iVar3;
      sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
      if (sVar1 == 0) goto LAB_00006fea;
    }
    do {
      do {
        _DAT_00027eca = 1;
LAB_00006fea:
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x1c) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x20) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_000070a4;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x24) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_000070a4;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x28) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_000070a4;
        }
        else {
LAB_000070a4:
          _DAT_00027ecc = 1;
        }
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x2c) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 == 0) {
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x30) = iVar3;
          sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
          if (sVar1 != 0) goto LAB_00007166;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x34) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00007166;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -0x38) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00007166;
        }
        else {
LAB_00007166:
          _DAT_00027ece = 1;
        }
        uVar2 = FUN_000071bc();
        FUN_00007260(uVar2);
        FUN_00007828(CONCAT22(unaff_D4w,uVar2));
        unaff_D3w = unaff_D4w + 1;
        if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D3w) {
          if (_DAT_000277c0 != 0) {
            FUN_00007d52();
          }
          FUN_00007e88();
          return;
        }
        _DAT_00027ece = 0;
        _DAT_00027ecc = 0;
        _DAT_00027eca = 0;
        _DAT_00027ec8 = 0;
        _DAT_00027ec6 = 0;
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        if (sVar1 == 0) {
          sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
          if (sVar1 != 0) goto LAB_00006e66;
          sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006e66;
          sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006e66;
        }
        else {
LAB_00006e66:
          _DAT_00027ec6 = 1;
        }
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        if (sVar1 == 0) {
          sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
          if (sVar1 != 0) goto LAB_00006f28;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -4) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006f28;
          iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
          *(int *)(unaff_A6 + -8) = iVar3;
          sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
          if (sVar1 != 0) goto LAB_00006f28;
        }
        else {
LAB_00006f28:
          _DAT_00027ec8 = 1;
        }
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0xc) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        unaff_D4w = unaff_D3w;
      } while (sVar1 != 0);
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x10) = iVar3;
      sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
    } while (sVar1 != 0);
    in_D0 = unaff_D3w * 0x42;
  } while( true );
}



// Function: FUN_00007028 at 00007028
// Size: 404 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007028(void)

{
  short sVar1;
  undefined2 uVar2;
  short unaff_D3w;
  short unaff_D4w;
  int in_A0;
  int iVar3;
  int unaff_A6;
  
  do {
    sVar1 = FUN_0000255c(*(undefined2 *)(in_A0 + 0x15c6));
    if (sVar1 == 0) {
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x24) = iVar3;
      sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
      if (sVar1 == 0) {
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x28) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 == 0) goto LAB_000070ac;
      }
    }
    do {
      _DAT_00027ecc = 1;
LAB_000070ac:
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x2c) = iVar3;
      sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
      if (sVar1 == 0) {
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x30) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 != 0) goto LAB_00007166;
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x34) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00007166;
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x38) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00007166;
      }
      else {
LAB_00007166:
        _DAT_00027ece = 1;
      }
      uVar2 = FUN_000071bc();
      FUN_00007260(uVar2);
      FUN_00007828(CONCAT22(unaff_D4w,uVar2));
      unaff_D3w = unaff_D4w + 1;
      if (*(short *)(_DAT_0002884c + 0x15c2) <= unaff_D3w) {
        if (_DAT_000277c0 != 0) {
          FUN_00007d52();
        }
        FUN_00007e88();
        return;
      }
      _DAT_00027ece = 0;
      _DAT_00027ecc = 0;
      _DAT_00027eca = 0;
      _DAT_00027ec8 = 0;
      _DAT_00027ec6 = 0;
      sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 == 0) {
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        if (sVar1 != 0) goto LAB_00006e66;
        sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00006e66;
        sVar1 = FUN_0000255c(*(short *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00006e66;
      }
      else {
LAB_00006e66:
        _DAT_00027ec6 = 1;
      }
      sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
      if (sVar1 == 0) {
        sVar1 = FUN_0000255c(*(undefined2 *)(unaff_D3w * 0x42 + _DAT_0002884c + 0x15c6));
        if (sVar1 != 0) goto LAB_00006f28;
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -4) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00006f28;
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -8) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00006f28;
      }
      else {
LAB_00006f28:
        _DAT_00027ec8 = 1;
      }
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0xc) = iVar3;
      sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
      if (sVar1 == 0) {
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x10) = iVar3;
        sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
        if (sVar1 != 0) goto LAB_00006fe2;
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x14) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00006fe2;
        iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
        *(int *)(unaff_A6 + -0x18) = iVar3;
        sVar1 = FUN_0000255c(*(short *)(iVar3 + 0x15c6) + 1);
        if (sVar1 != 0) goto LAB_00006fe2;
      }
      else {
LAB_00006fe2:
        _DAT_00027eca = 1;
      }
      iVar3 = unaff_D3w * 0x42 + _DAT_0002884c;
      *(int *)(unaff_A6 + -0x1c) = iVar3;
      sVar1 = FUN_0000255c(*(undefined2 *)(iVar3 + 0x15c6));
      unaff_D4w = unaff_D3w;
    } while (sVar1 != 0);
    in_A0 = unaff_D3w * 0x42 + _DAT_0002884c;
    *(int *)(unaff_A6 + -0x20) = in_A0;
  } while( true );
}



// Function: FUN_000071bc at 000071bc
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000071bc(undefined4 param_1)

{
  if (*(char *)(param_1._0_2_ * 0x42 + _DAT_0002884c + 0x15d9) != '\x0f') {
    return 9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10004);
}



// Function: FUN_00007260 at 00007260
// Size: 38 bytes

void FUN_00007260(void)

{
  FUN_000075c0();
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(8);
}



// Function: FUN_00007310 at 00007310
// Size: 118 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007310(void)

{
  undefined2 uVar1;
  short unaff_D4w;
  undefined2 *puVar2;
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -0x10c) = 0;
  *(short *)(unaff_A6 + -0x10a) = unaff_D4w;
  if (*(short *)(unaff_A6 + -0x10c) < unaff_D4w) {
    puVar2 = (undefined2 *)(unaff_A6 + -0x10a);
  }
  else {
    puVar2 = (undefined2 *)(unaff_A6 + -0x10c);
  }
  uVar1 = *puVar2;
  *(undefined2 *)(unaff_A6 + -0x110) = 9;
  *(undefined2 *)(unaff_A6 + -0x10e) = uVar1;
  if (((_DAT_00027ec8 == 0) && (_DAT_00027ece == 0)) && (_DAT_00027ecc == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10064);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10064);
}



// Function: FUN_000073b0 at 000073b0
// Size: 29 bytes

void FUN_000073b0(void)

{
  undefined2 uStack00000004;
  
  uStack00000004 = 0xffff;
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0();
}



// Function: FUN_000075c0 at 000075c0
// Size: 26 bytes

void FUN_000075c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1000a);
}



// Function: FUN_000076a8 at 000076a8
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000076a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000076d0 at 000076d0
// Size: 25 bytes

void FUN_000076d0(void)

{
  int unaff_A6;
  
  FUN_00007708(unaff_A6 + -0x14);
  FUN_00007802();
  return;
}



// Function: FUN_00007708 at 00007708
// Size: 28 bytes

void FUN_00007708(void)

{
  int unaff_A6;
  
  FUN_00007708(unaff_A6 + -0x14);
  FUN_00007802();
  return;
}



// Function: FUN_00007802 at 00007802
// Size: 38 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00007802(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int unaff_A6;
  
  pcVar2 = (char *)(*(short *)(unaff_A6 + 8) * 0x42 + _DAT_0002884c + 0x15c8);
  pcVar3 = pcVar2;
  pcVar4 = (char *)(unaff_A6 + -0x14);
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}



// Function: FUN_00007828 at 00007828
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10004);
}



// Function: FUN_00007d52 at 00007d52
// Size: 70 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007d52(void)

{
  short sVar1;
  undefined2 local_10a [131];
  
  for (sVar1 = 0; sVar1 < 100; sVar1 = sVar1 + 1) {
    local_10a[sVar1] = 0;
  }
  if (0x1e < *(short *)(_DAT_0002884c + 0x15c2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x20003);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10004);
}



// Function: FUN_00007e88 at 00007e88
// Size: 168 bytes

/* WARNING: Removing unreachable block (ram,0x00007f64) */
/* WARNING: Removing unreachable block (ram,0x00007f6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007e88(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  while( true ) {
    if (7 < sVar2) {
      return;
    }
    sVar1 = FUN_00004938(*(undefined2 *)(sVar2 * 0x14 + _DAT_0002884c + 0x18c));
    if (-1 < sVar1) break;
    sVar2 = sVar2 + 1;
  }
  sVar2 = 0;
  while ((sVar2 < 4 && (-1 < *(char *)((int)sVar2 + sVar1 * 0x42 + _DAT_0002884c + 0x15da)))) {
    sVar2 = sVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1c);
}



// Function: FUN_00007f90 at 00007f90
// Size: 114 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007f90(void)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < *(short *)(_DAT_00027e96 + 0x3a); sVar1 = sVar1 + 1) {
    FUN_00008002(1);
  }
  for (sVar1 = 0; sVar1 < *(short *)(_DAT_00027e96 + 0x38); sVar1 = sVar1 + 1) {
    FUN_00008002(1);
  }
  FUN_000086e4();
  FUN_00001cba();
  FUN_00002e3c();
  FUN_000031bc();
  FUN_000086e4();
  FUN_00001cba();
  return;
}



// Function: FUN_00008002 at 00008002
// Size: 1476 bytes

/* WARNING: Removing unreachable block (ram,0x000080a6) */
/* WARNING: Removing unreachable block (ram,0x000080aa) */
/* WARNING: Removing unreachable block (ram,0x00008100) */
/* WARNING: Removing unreachable block (ram,0x00008110) */
/* WARNING: Removing unreachable block (ram,0x0000811a) */
/* WARNING: Removing unreachable block (ram,0x0000811e) */
/* WARNING: Removing unreachable block (ram,0x00008120) */
/* WARNING: Removing unreachable block (ram,0x000086dc) */
/* WARNING: Removing unreachable block (ram,0x00008126) */
/* WARNING: Removing unreachable block (ram,0x00008176) */
/* WARNING: Removing unreachable block (ram,0x00008142) */
/* WARNING: Removing unreachable block (ram,0x0000815a) */
/* WARNING: Removing unreachable block (ram,0x00008172) */
/* WARNING: Removing unreachable block (ram,0x00008174) */
/* WARNING: Removing unreachable block (ram,0x0000817c) */
/* WARNING: Removing unreachable block (ram,0x000081c8) */
/* WARNING: Removing unreachable block (ram,0x0000821a) */
/* WARNING: Removing unreachable block (ram,0x00008220) */
/* WARNING: Removing unreachable block (ram,0x00008222) */
/* WARNING: Removing unreachable block (ram,0x00008274) */
/* WARNING: Removing unreachable block (ram,0x00008278) */
/* WARNING: Removing unreachable block (ram,0x0000827a) */
/* WARNING: Removing unreachable block (ram,0x0000852e) */
/* WARNING: Removing unreachable block (ram,0x00008282) */
/* WARNING: Removing unreachable block (ram,0x0000845a) */
/* WARNING: Removing unreachable block (ram,0x0000862a) */
/* WARNING: Removing unreachable block (ram,0x00008644) */
/* WARNING: Removing unreachable block (ram,0x0000864e) */
/* WARNING: Removing unreachable block (ram,0x00008650) */

void FUN_00008002(undefined4 param_1,undefined4 param_2)

{
  if (param_2._0_2_ == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00002ad0(0x10070);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1009c);
}



// Function: FUN_000086e4 at 000086e4
// Size: 974 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000086e4(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  
  for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
    for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
      uVar5 = 0;
      cVar1 = *(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a);
      if (((cVar1 == '\a') || (cVar1 == '\x05')) || (cVar1 == '\x06')) {
        cVar1 = *(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34a);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar5 = 1;
        }
        cVar1 = *(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34a);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar5 = uVar5 + 1;
        }
        cVar1 = *(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34b);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar5 = uVar5 + 1;
        }
        cVar1 = *(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x349);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          uVar5 = uVar5 + 1;
        }
        if (2 < uVar5) {
          *(undefined1 *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
        }
      }
    }
  }
  for (sVar3 = 0; sVar3 < 0x70; sVar3 = sVar3 + 1) {
    for (sVar4 = 0; sVar4 < 0x9c; sVar4 = sVar4 + 1) {
      if (*(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) == '\x03') {
        sVar2 = FUN_0000255c(CONCAT22(sVar3,sVar4));
        if (sVar2 == 0) {
          sVar2 = FUN_0000255c(CONCAT22(sVar3,sVar4));
          if (sVar2 == 0) {
            sVar2 = FUN_0000255c(CONCAT22(sVar3,sVar4));
            if (sVar2 == 0) {
              *(undefined1 *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
            }
          }
        }
      }
    }
  }
  sVar3 = 1;
  do {
    if (0x6e < sVar3) {
      return;
    }
    for (sVar4 = 1; sVar4 < 0x9b; sVar4 = sVar4 + 1) {
      cVar1 = *(char *)((int)sVar3 + sVar4 * 0x70 + _DAT_00027e9a + 0x34a);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        cVar1 = *(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34b);
        if ((((cVar1 == '\x02') || (cVar1 == '\x03')) &&
            ((cVar1 = *(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x349),
             cVar1 == '\x02' || (cVar1 == '\x03')))) &&
           (((cVar1 = *(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34b),
             cVar1 == '\x05' || ((cVar1 == '\x04' || (cVar1 == '\a')))) &&
            ((cVar1 = *(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x349),
             cVar1 == '\x05' || ((cVar1 == '\x04' || (cVar1 == '\a')))))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
        cVar1 = *(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x349);
        if (((cVar1 == '\x02') || (cVar1 == '\x03')) &&
           ((((cVar1 = *(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x34b),
              cVar1 == '\x02' || (cVar1 == '\x03')) &&
             ((cVar1 = *(char *)((int)sVar3 + (sVar4 + -1) * 0x70 + _DAT_00027e9a + 0x349),
              cVar1 == '\x05' || ((cVar1 == '\x04' || (cVar1 == '\a')))))) &&
            ((cVar1 = *(char *)((int)sVar3 + (sVar4 + 1) * 0x70 + _DAT_00027e9a + 0x34b),
             cVar1 == '\x05' || ((cVar1 == '\x04' || (cVar1 == '\a')))))))) {
                    /* WARNING: Subroutine does not return */
          FUN_00002ad0(0x1000a);
        }
      }
    }
    sVar3 = sVar3 + 1;
  } while( true );
}



// Function: FUN_00008b5c at 00008b5c
// Size: 114 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008b5c(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 local_c;
  undefined4 local_8;
  
  _DAT_000277c0 = param_3;
  local_c = 0xca;
  local_8 = 0x3c;
  FUN_00003328(_DAT_00027fd4,&local_c);
  FUN_00001e98(&LAB_00005dd6);
  FUN_00002d52(extraout_A0);
  _DAT_00027e96 = extraout_A0_00;
  FUN_00001e98(&DAT_0000478a);
  FUN_00002d52(extraout_A0_01);
  _DAT_00027e9a = extraout_A0_02;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00008ff8 at 00008ff8
// Size: 18 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008ff8(void)

{
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002ad0(_DAT_00027fd4);
}



// Function: FUN_0000911e at 0000911e
// Size: 134 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000911e(void)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  int extraout_A0;
  int extraout_A0_00;
  
  if (_DAT_00028850 == 0) {
    FUN_00001ea0(0x8880);
    _DAT_00028850 = extraout_A0;
  }
  if (_DAT_00028858 == 0) {
    FUN_00001ea0(&DAT_00004440);
    _DAT_00028858 = extraout_A0_00;
  }
  for (sVar2 = 0; sVar2 < 0x70; sVar2 = sVar2 + 1) {
    for (sVar3 = 0; sVar3 < 0x9c; sVar3 = sVar3 + 1) {
      *(undefined1 *)((int)sVar2 + sVar3 * 0x70 + _DAT_00027e9a + 0x34a) = 2;
      pbVar1 = (byte *)(sVar3 * 0x70 + _DAT_00028858 + (int)sVar2);
      *pbVar1 = *pbVar1 & 0xe0;
    }
  }
  return;
}



// Function: FUN_000091a4 at 000091a4
// Size: 48 bytes

void FUN_000091a4(short *param_1,short *param_2)

{
  if (*param_1 < 1) {
    *param_1 = 0;
  }
  if (*param_2 < 1) {
    *param_2 = 0;
  }
  if (0x6f < *param_1) {
    *param_1 = 0x6f;
  }
  if (0x9b < *param_2) {
    *param_2 = 0x9b;
  }
  return;
}



// Function: FUN_000091d4 at 000091d4
// Size: 34 bytes

void FUN_000091d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0();
}



// Function: FUN_000092ca at 000092ca
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000092ca(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00001e98(700);
  _DAT_00027e8e = extraout_A0;
  FUN_00002d52(extraout_A0);
  _DAT_00027e92 = extraout_A0_00;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00002ad0((short)_DAT_00027fd4);
}



// Function: FUN_00009476 at 00009476
// Size: 214 bytes

void FUN_00009476(int param_1)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0x32;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    *(undefined2 *)(sVar1 * 2 + param_1 + 500) = 0xffff;
    *(undefined2 *)(sVar1 * 2 + param_1 + 400) = 0xffff;
    *(undefined2 *)(sVar1 * 2 + param_1 + 200) = 0xffff;
    *(undefined2 *)(param_1 + 100 + sVar1 * 2) = 0xffff;
    *(undefined2 *)(param_1 + sVar1 * 2) = 0xffff;
    *(undefined2 *)(sVar1 * 2 + param_1 + 300) = 0;
    sVar2 = sVar1;
  }
  FUN_00009968(param_1);
  sVar2 = 0x32;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    sVar2 = sVar1;
    if (*(short *)(sVar1 * 2 + param_1 + 300) == 0) {
      *(undefined2 *)(sVar1 * 2 + param_1 + 500) = 0xffff;
      *(undefined2 *)(sVar1 * 2 + param_1 + 400) = 0xffff;
      *(undefined2 *)(sVar1 * 2 + param_1 + 200) = 0xffff;
      *(undefined2 *)(param_1 + 100 + sVar1 * 2) = 0xffff;
      *(undefined2 *)(param_1 + sVar1 * 2) = 0xffff;
    }
  }
  FUN_0000954c(param_1);
  return;
}



// Function: FUN_0000954c at 0000954c
// Size: 146 bytes

/* WARNING: Removing unreachable block (ram,0x00009702) */
/* WARNING: Removing unreachable block (ram,0x0000970c) */
/* WARNING: Removing unreachable block (ram,0x00009742) */
/* WARNING: Removing unreachable block (ram,0x00009752) */
/* WARNING: Removing unreachable block (ram,0x00009758) */
/* WARNING: Removing unreachable block (ram,0x00009714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000954c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(2);
}



// Function: FUN_00009760 at 00009760
// Size: 362 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009760(int param_1)

{
  short sVar1;
  int in_D0;
  short sVar3;
  short sVar4;
  int iVar2;
  short sVar5;
  short sVar6;
  short sVar7;
  
  if (*(short *)(param_1 + 400) == -1) {
    sVar5 = 0x32;
    while( true ) {
      in_D0 = CONCAT22((short)((uint)in_D0 >> 0x10),sVar5);
      sVar1 = sVar5 + -1;
      if (sVar5 == 0) break;
      sVar5 = sVar1;
      if (*(short *)(param_1 + sVar1 * 2) != -1) {
        sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
        sVar7 = 10000;
        while( true ) {
          sVar4 = sVar6 + -1;
          if (sVar6 == 0) break;
          sVar3 = func_0x00006e48();
          sVar6 = sVar4;
          if (sVar3 < sVar7) {
            sVar7 = sVar3;
          }
        }
        in_D0 = sVar1 * 2;
        *(short *)(in_D0 + param_1 + 400) = sVar7;
      }
    }
  }
  sVar5 = 0x32;
  while( true ) {
    iVar2 = CONCAT22((short)((uint)in_D0 >> 0x10),sVar5);
    sVar1 = sVar5 + -1;
    if (sVar5 == 0) break;
    in_D0 = sVar1 * 2;
    sVar5 = sVar1;
    if ((*(short *)(in_D0 + param_1 + 300) == 0) && (*(short *)(param_1 + sVar1 * 2) != -1)) {
      sVar6 = 0x32;
      sVar7 = 10000;
      while( true ) {
        sVar4 = sVar6 + -1;
        if (sVar6 == 0) break;
        sVar6 = sVar4;
        if (*(short *)(sVar4 * 2 + param_1 + 300) != 0) {
          sVar4 = func_0x00006e48();
          if (sVar4 < sVar7) {
            sVar7 = sVar4;
          }
        }
      }
      in_D0 = sVar1 * 2;
      *(short *)(in_D0 + param_1 + 500) = sVar7;
    }
  }
  sVar5 = 0x32;
  do {
    sVar1 = sVar5 + -1;
    if (sVar5 == 0) {
      return CONCAT22((short)((uint)iVar2 >> 0x10),0xffff);
    }
    iVar2 = sVar1 * 2;
    sVar5 = sVar1;
  } while ((*(short *)(iVar2 + param_1 + 300) != 0) || (*(short *)(param_1 + sVar1 * 2) == -1));
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1000f);
}



// Function: FUN_00009916 at 00009916
// Size: 82 bytes

short FUN_00009916(int param_1,undefined2 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = 10000;
  sVar2 = 0x32;
  while (sVar1 = sVar2 + -1, sVar2 != 0) {
    sVar2 = sVar1;
    if (*(short *)(param_1 + sVar1 * 2) != -1) {
      sVar1 = func_0x00006e48(param_2,*(undefined2 *)(param_1 + 100 + sVar1 * 2));
      if (sVar1 < sVar3) {
        sVar3 = sVar1;
      }
    }
  }
  return sVar3;
}



// Function: FUN_00009968 at 00009968
// Size: 898 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009968(int param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  
  sVar6 = 0;
  for (sVar8 = 1; sVar8 < 0x9a; sVar8 = sVar8 + 1) {
    for (sVar7 = 1; sVar7 < 0x6e; sVar7 = sVar7 + 1) {
      if (((((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) == '&')
           || ((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) ==
               '\x16')) &&
          (((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + (sVar7 + 1) * 2) >> 0x18) ==
            '(' || ((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + (sVar7 + 1) * 2) >>
                          0x18) == '\x18')))) ||
         ((((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) == '!'
           || ((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) ==
               '\x11')) &&
          (((char)((uint)*(undefined4 *)((sVar8 + 1) * 0xe0 + _DAT_00028850 + sVar7 * 2) >> 0x18) ==
            '$' || ((char)((uint)*(undefined4 *)((sVar8 + 1) * 0xe0 + _DAT_00028850 + sVar7 * 2) >>
                          0x18) == '\x14')))))) {
        bVar3 = false;
        uVar4 = (ushort)((char)((uint)*(undefined4 *)(sVar8 * 0xe0 + _DAT_00028850 + sVar7 * 2) >>
                               0x18) == '&');
        if (((uVar4 == 0) || (sVar5 = FUN_00009ea4(sVar8), sVar5 == 0)) ||
           (sVar5 = FUN_00009ea4(sVar8), sVar5 == 0)) {
          if (((uVar4 != 0) && (sVar5 = FUN_00009ea4(sVar8 + -1), sVar5 != 0)) &&
             (sVar5 = FUN_00009ea4(sVar8 + 2), sVar5 != 0)) {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (sVar6 < 0x32)) {
          *(short *)(param_1 + sVar6 * 2) = sVar7;
          *(short *)(param_1 + 100 + sVar6 * 2) = sVar8;
          *(ushort *)(sVar6 * 2 + param_1 + 200) = uVar4;
          sVar6 = sVar6 + 1;
        }
      }
    }
  }
  if (sVar6 != 0) {
    while (sVar6 = FUN_00009cea((short)param_1), sVar6 != -1) {
      *(undefined2 *)(sVar6 * 2 + param_1 + 300) = 1;
      sVar8 = *(short *)(param_1 + sVar6 * 2);
      sVar7 = *(short *)(param_1 + 100 + sVar6 * 2);
      if (*(short *)(sVar6 * 2 + param_1 + 200) == 0) {
        iVar9 = sVar7 * 0xe0 + _DAT_00028850;
        puVar1 = (ushort *)(iVar9 + sVar8 * 2);
        *puVar1 = *puVar1 & 0xff;
        puVar1 = (ushort *)(iVar9 + sVar8 * 2);
        *puVar1 = *puVar1 | 0x8400;
        iVar9 = (sVar7 + 1) * 0xe0 + _DAT_00028850;
        puVar1 = (ushort *)(iVar9 + sVar8 * 2);
        *puVar1 = *puVar1 & 0xff;
        puVar1 = (ushort *)(iVar9 + sVar8 * 2);
        *puVar1 = *puVar1 | 0x9400;
        *(undefined1 *)((int)sVar8 + (sVar7 + 1) * 0x70 + _DAT_00027e9a + 0x34a) = 1;
        *(undefined1 *)((int)sVar8 + sVar7 * 0x70 + _DAT_00027e9a + 0x34a) = 1;
        iVar9 = (sVar7 + 2) * 0x70 + _DAT_00028858;
        pbVar2 = (byte *)(iVar9 + sVar8);
        *pbVar2 = *pbVar2 & 0xe0;
        pbVar2 = (byte *)(iVar9 + sVar8);
        *pbVar2 = *pbVar2 | 1;
        iVar9 = (sVar7 + -1) * 0x70 + _DAT_00028858;
        pbVar2 = (byte *)(iVar9 + sVar8);
        *pbVar2 = *pbVar2 & 0xe0;
        pbVar2 = (byte *)(iVar9 + sVar8);
        *pbVar2 = *pbVar2 | 1;
      }
      else {
        iVar9 = sVar7 * 0xe0 + _DAT_00028850;
        puVar1 = (ushort *)(iVar9 + sVar8 * 2);
        *puVar1 = *puVar1 & 0xff;
        puVar1 = (ushort *)(iVar9 + sVar8 * 2);
        *puVar1 = *puVar1 | 0x8500;
        iVar9 = sVar7 * 0xe0 + _DAT_00028850;
        puVar1 = (ushort *)(iVar9 + (sVar8 + 1) * 2);
        *puVar1 = *puVar1 & 0xff;
        puVar1 = (ushort *)(iVar9 + (sVar8 + 1) * 2);
        *puVar1 = *puVar1 | 0x8600;
        *(undefined1 *)((int)sVar8 + sVar7 * 0x70 + _DAT_00027e9a + 0x34b) = 1;
        *(undefined1 *)((int)sVar8 + sVar7 * 0x70 + _DAT_00027e9a + 0x34a) = 1;
        iVar9 = sVar7 * 0x70 + _DAT_00028858;
        pbVar2 = (byte *)(iVar9 + (short)(sVar8 + 2));
        *pbVar2 = *pbVar2 & 0xe0;
        pbVar2 = (byte *)(iVar9 + (short)(sVar8 + 2));
        *pbVar2 = *pbVar2 | 1;
        iVar9 = sVar7 * 0x70 + _DAT_00028858;
        pbVar2 = (byte *)(iVar9 + (short)(sVar8 + -1));
        *pbVar2 = *pbVar2 & 0xe0;
        pbVar2 = (byte *)(iVar9 + (short)(sVar8 + -1));
        *pbVar2 = *pbVar2 | 1;
      }
    }
  }
  return;
}



// Function: FUN_00009cea at 00009cea
// Size: 364 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009cea(int param_1,undefined4 param_2)

{
  int in_D0;
  short sVar2;
  short sVar3;
  int iVar1;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  
  sVar4 = param_2._0_2_;
  sVar5 = param_2._0_2_;
  if (*(short *)(param_1 + 400) == -1) {
    while( true ) {
      in_D0 = CONCAT22((short)((uint)in_D0 >> 0x10),sVar4);
      if (sVar4 == 0) break;
      sVar6 = *(short *)(_DAT_0002884c + 0x15c2);
      sVar7 = 10000;
      while (sVar3 = sVar6 + -1, sVar6 != 0) {
        sVar2 = func_0x00006e48();
        sVar6 = sVar3;
        if (sVar2 < sVar7) {
          sVar7 = sVar2;
        }
      }
      in_D0 = (short)(sVar4 + -1) * 2;
      *(short *)(in_D0 + param_1 + 400) = sVar7;
      sVar4 = sVar4 + -1;
    }
  }
  while( true ) {
    iVar1 = CONCAT22((short)((uint)in_D0 >> 0x10),sVar5);
    sVar4 = sVar5 + -1;
    if (sVar5 == 0) break;
    sVar7 = 10000;
    in_D0 = sVar4 * 2;
    sVar5 = sVar4;
    sVar6 = param_2._0_2_;
    if (*(short *)(in_D0 + param_1 + 300) == 0) {
      while (sVar3 = sVar6 + -1, sVar6 != 0) {
        sVar6 = sVar3;
        if ((*(short *)(sVar3 * 2 + param_1 + 300) != 0) &&
           (sVar3 = func_0x00006e48(), sVar3 < sVar7)) {
          sVar7 = sVar3;
        }
      }
      in_D0 = sVar4 * 2;
      *(short *)(in_D0 + param_1 + 500) = sVar7;
    }
  }
  do {
    sVar4 = param_2._0_2_ + -1;
    if (param_2._0_2_ == 0) {
      return CONCAT22((short)((uint)iVar1 >> 0x10),0xffff);
    }
    iVar1 = sVar4 * 2;
    param_2._0_2_ = sVar4;
  } while ((*(short *)(iVar1 + param_1 + 300) != 0) ||
          (iVar1 = sVar4 * 2, *(short *)(iVar1 + param_1 + 500) < 10));
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1000f);
}



// Function: FUN_00009ea4 at 00009ea4
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009ea4(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)((int)param_1._0_2_ + param_1._2_2_ * 0x70 + _DAT_00027e9a + 0x34a);
  if (((cVar1 == '\a') || (cVar1 == '\x04')) || (cVar1 == '\x05')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_00009ee2 at 00009ee2
// Size: 50 bytes

/* WARNING: Removing unreachable block (ram,0x00009f50) */

void FUN_00009ee2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x1000c);
}



// Function: FUN_00009f5a at 00009f5a
// Size: 156 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009f5a(undefined2 param_1,undefined4 param_2)

{
  short sVar2;
  undefined4 uVar1;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  sVar2 = FUN_00009ee2(*(undefined2 *)(param_2._0_2_ * 0x42 + _DAT_0002884c + 0x15c6),&local_8);
  if ((sVar2 == 0) ||
     (sVar2 = FUN_00009ee2(*(undefined2 *)(param_2._2_2_ * 0x42 + _DAT_0002884c + 0x15c6),&local_c),
     sVar2 == 0)) {
    return 0;
  }
  if ((local_8 == local_c) && (local_6 == local_a)) {
    return 0;
  }
  uVar1 = FUN_00009ff6(param_1,local_6);
  return uVar1;
}



// Function: FUN_00009ff6 at 00009ff6
// Size: 316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009ff6(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  short sVar4;
  undefined4 uVar3;
  short sVar5;
  short sVar6;
  int iVar7;
  char local_e0 [200];
  undefined1 local_18 [2];
  short local_16;
  short local_12;
  undefined2 local_10;
  undefined2 local_e;
  char *local_c;
  short local_8;
  short local_6;
  
  sVar6 = 0;
  local_16 = param_2._2_2_;
  local_12 = param_3._2_2_;
  local_c = local_e0;
  local_e = 1;
  local_10 = 0;
  sVar4 = func_0x00002c00((short)local_18);
  if (sVar4 == 0) {
    uVar3 = 0;
  }
  else {
    local_6 = param_2._0_2_;
    local_8 = param_2._2_2_;
    sVar4 = 0;
    while ((sVar4 < 200 &&
           ((((sVar6 = sVar6 + 1, local_6 != param_3._0_2_ || (param_3._2_2_ != local_8)) &&
             (local_e0[sVar4] != -1)) &&
            (sVar5 = FUN_00006e40((short)&local_6,(short)&local_8), sVar5 != 0))))) {
      if (((uint)(*(int *)(local_8 * 0x70 + _DAT_00028858 + (int)local_6) << 3) >> 0x1b != 0) &&
         (param_4._0_2_ != 0)) {
        return 1;
      }
      cVar2 = *(char *)((int)local_6 + local_8 * 0x70 + _DAT_00027e9a + 0x34a);
      if (((cVar2 != '\x03') && (cVar2 != '\x02')) && (cVar2 != '\x01')) {
        iVar7 = local_8 * 0x70 + _DAT_00028858;
        pbVar1 = (byte *)(iVar7 + local_6);
        *pbVar1 = *pbVar1 & 0xe0;
        pbVar1 = (byte *)(iVar7 + local_6);
        *pbVar1 = *pbVar1 | 1;
      }
      if (5 < sVar6) {
        sVar6 = 0;
        FUN_0000a24e(param_1,local_8);
      }
      sVar4 = sVar4 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_0000a132 at 0000a132
// Size: 254 bytes

/* WARNING: Removing unreachable block (ram,0x0000a17c) */
/* WARNING: Removing unreachable block (ram,0x0000a182) */
/* WARNING: Removing unreachable block (ram,0x0000a188) */
/* WARNING: Removing unreachable block (ram,0x0000a21e) */
/* WARNING: Removing unreachable block (ram,0x0000a1ba) */
/* WARNING: Removing unreachable block (ram,0x0000a1c4) */
/* WARNING: Removing unreachable block (ram,0x0000a1fe) */
/* WARNING: Removing unreachable block (ram,0x0000a204) */
/* WARNING: Removing unreachable block (ram,0x0000a226) */
/* WARNING: Removing unreachable block (ram,0x0000a22e) */
/* WARNING: Removing unreachable block (ram,0x0000a246) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a132(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(*(undefined2 *)(_DAT_0002884c + 0x15c2));
}



// Function: FUN_0000a24e at 0000a24e
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a24e(int param_1,undefined2 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = *(short *)(_DAT_0002884c + 0x15c2);
  while (sVar1 = sVar3 + -1, sVar3 != 0) {
    sVar2 = func_0x00006e48(param_2,*(undefined2 *)(sVar1 * 0x42 + _DAT_0002884c + 0x15c6));
    sVar3 = sVar1;
    if (sVar2 < 10) {
      *(undefined1 *)(sVar1 + param_1 + 600) = 1;
    }
  }
  return;
}



// Function: FUN_0000a2ae at 0000a2ae
// Size: 26 bytes

void FUN_0000a2ae(void)

{
  FUN_00006740();
  FUN_0000a2c8();
  FUN_0000a324();
  return;
}



// Function: FUN_0000a2c8 at 0000a2c8
// Size: 42 bytes

/* WARNING: Removing unreachable block (ram,0x0000a31c) */

void FUN_0000a2c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10005);
}



// Function: FUN_0000a324 at 0000a324
// Size: 38 bytes

/* WARNING: Removing unreachable block (ram,0x0000a358) */

void FUN_0000a324(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x30032);
}



// Function: FUN_0000a35e at 0000a35e
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a35e(void)

{
  short sVar1;
  
  for (sVar1 = 0; sVar1 < *(short *)(_DAT_00027e96 + 0x40); sVar1 = sVar1 + 1) {
    FUN_0000a3b6();
  }
  for (sVar1 = 0; sVar1 < *(short *)(_DAT_00027e96 + 0x3e); sVar1 = sVar1 + 1) {
    FUN_0000a3b6();
  }
  FUN_0000a8d2();
  FUN_0000a9d2();
  FUN_000031bc();
  return;
}



// Function: FUN_0000a3b6 at 0000a3b6
// Size: 24 bytes

void FUN_0000a3b6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002ad0(0x10070);
}



// Function: FUN_0000a8d2 at 0000a8d2
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a8d2(void)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  for (sVar1 = 0; sVar1 < 0x70; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 0x9c; sVar2 = sVar2 + 1) {
      if ((((sVar1 != 0) && (sVar2 != 0)) && (sVar1 != 0x6f)) &&
         ((sVar2 != 0x9b && (*(char *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) == '\x05')
          ))) {
        bVar3 = *(char *)((int)sVar1 + (sVar2 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x06';
        if (*(char *)((int)sVar1 + (sVar2 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x06') {
          bVar3 = bVar3 + 1;
        }
        if (*(char *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x34b) == '\x06') {
          bVar3 = bVar3 + 1;
        }
        if (*(char *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x349) == '\x06') {
          bVar3 = bVar3 + 1;
        }
        if (2 < bVar3) {
          *(undefined1 *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) = 6;
        }
      }
    }
  }
  return;
}



// Function: FUN_0000a9d2 at 0000a9d2
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a9d2(void)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  for (sVar1 = 0; sVar1 < 0x70; sVar1 = sVar1 + 1) {
    for (sVar2 = 0; sVar2 < 0x9c; sVar2 = sVar2 + 1) {
      if ((((sVar1 != 0) && (sVar2 != 0)) && (sVar1 != 0x6f)) &&
         ((sVar2 != 0x9b && (*(char *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) == '\a')))
         ) {
        bVar3 = *(char *)((int)sVar1 + (sVar2 + 1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x05';
        if (*(char *)((int)sVar1 + (sVar2 + -1) * 0x70 + _DAT_00027e9a + 0x34a) == '\x05') {
          bVar3 = bVar3 + 1;
        }
        if (*(char *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x34b) == '\x05') {
          bVar3 = bVar3 + 1;
        }
        if (*(char *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x349) == '\x05') {
          bVar3 = bVar3 + 1;
        }
        if (2 < bVar3) {
          *(undefined1 *)((int)sVar1 + sVar2 * 0x70 + _DAT_00027e9a + 0x34a) = 5;
        }
      }
    }
  }
  return;
}



