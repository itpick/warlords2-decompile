// Warlords II - Decompiled 68k Code
// Segment: CODE_125
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0000000c(void)

{
  return *(undefined1 *)(_DAT_000297f4 + 0x199);
}



// Function: FUN_00000024 at 00000024
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00000024(void)

{
  return *(undefined2 *)(_DAT_000297f4 + 0x19a);
}



// Function: FUN_0000003c at 0000003c
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0000003c(void)

{
  return *(undefined1 *)(_DAT_000297f4 + 0x19c);
}



// Function: FUN_00000054 at 00000054
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00000054(void)

{
  return *(undefined2 *)(_DAT_000297f4 + 0x19e);
}



// Function: FUN_0000006c at 0000006c
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0000006c(void)

{
  return *(undefined1 *)(_DAT_000297f4 + 0x1a0);
}



// Function: FUN_00000084 at 00000084
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00000084(void)

{
  return *(undefined2 *)(_DAT_000297f4 + 0x1a2);
}



// Function: FUN_0000009c at 0000009c
// Size: 176 bytes

/* WARNING: Control flow encountered bad instruction data */

int * FUN_0000009c(int *param_1,undefined4 param_2)

{
  char cVar2;
  int *piVar1;
  int extraout_A0;
  undefined2 uVar3;
  int local_68 [25];
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 0;
    if (param_1[1] != 0) {
      func_0x00002600((char)local_68,(short)param_1[1]);
      func_0x00002610((short)local_68);
      cVar2 = (**(code **)(local_68[0] + 8))();
      if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = (undefined2)((uint)param_1[1] >> 0x10);
      FUN_00000e10((char)param_1[1]);
      param_1[1] = extraout_A0;
      piVar1 = (int *)func_0x00002608((char)local_68,uVar3);
    }
    if (0 < param_2._0_2_) {
      piVar1 = (int *)func_0x000073c8((char)param_1);
    }
  }
  return piVar1;
}



// Function: FUN_00000172 at 00000172
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000172(int *param_1,undefined4 param_2)

{
  short sVar1;
  
  if ((param_2._0_2_ != 0) && (*param_1 != 0)) {
    sVar1 = FUN_00000054();
    if (sVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00000206 at 00000206
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000206(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000286 at 00000286
// Size: 172 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000286(undefined4 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte local_104 [256];
  
  func_0x00007320((short)local_104,param_2);
  if (local_104[(short)(local_104[0] - 3)] == 0x2e) {
    local_104[0] = local_104[0] - 4;
  }
  uVar1 = func_0x00007300((short)local_104,0x50ae);
  uVar3 = 1;
  pbVar2 = local_104;
  func_0x00007318((short)pbVar2,uVar1);
  uVar1 = func_0x00007300((short)local_104,0x50ae,(short)((uint)pbVar2 >> 0x10),uVar3);
  func_0x00007318((short)local_104,uVar1);
  func_0x00007310((short)local_104,0x6420);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000003b2 at 000003b2
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000003b2(void)

{
  if (_DAT_0002732c == 0) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000402 at 00000402
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000402(void)

{
  if (_DAT_0002732c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_00027330 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00027330 = 0;
  _DAT_0002732c = 0;
  return;
}



// Function: FUN_0000043e at 0000043e
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000043e(undefined4 param_1)

{
  if (((param_1._0_2_ != 0) && (_DAT_0002732c != 0)) && (_DAT_00027330 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000049c at 0000049c
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000049c(undefined4 param_1)

{
  char cVar1;
  
  if (param_1._0_2_ != 0) {
    do {
      cVar1 = FUN_000003b2();
    } while (cVar1 != '\0');
    FUN_00000402();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000542 at 00000542
// Size: 168 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000542(undefined1 param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte local_104 [256];
  
  func_0x00007320((short)local_104,param_1);
  if (local_104[(short)(local_104[0] - 3)] == 0x2e) {
    local_104[0] = local_104[0] - 4;
  }
  uVar1 = func_0x00007300((short)local_104,0x50ae);
  uVar3 = 1;
  pbVar2 = local_104;
  func_0x00007318((short)pbVar2,uVar1);
  uVar1 = func_0x00007300((short)local_104,0x50ae,(short)((uint)pbVar2 >> 0x10),uVar3);
  func_0x00007318((short)local_104,uVar1);
  func_0x00007310((short)local_104,0x6420);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000061e at 0000061e
// Size: 74 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000061e(void)

{
  short sVar1;
  
  if (_DAT_00027338 == 0) {
    return;
  }
  sVar1 = FUN_00000024();
  if (sVar1 * 0x1800 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000067e at 0000067e
// Size: 92 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000067e(void)

{
  char cVar1;
  
  if (_DAT_00027338 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = func_0x00001d60(_DAT_0002733c);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = func_0x00001d60(_DAT_00027340);
  if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00027340 = 0;
  _DAT_0002733c = 0;
  return;
}



// Function: FUN_000006f2 at 000006f2
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000006f2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000096a at 0000096a
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000096a(void)

{
  if (((_DAT_00027338 != 0) && (_DAT_0002733c != 0)) && (_DAT_00027340 != 0)) {
    FUN_00000024();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000a0a at 00000a0a
// Size: 1030 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a0a(undefined4 param_1)

{
  bool bVar1;
  char cVar4;
  int iVar2;
  short sVar3;
  undefined1 extraout_A0b;
  undefined2 extraout_A0w;
  undefined1 extraout_A0b_00;
  undefined2 extraout_A0w_00;
  undefined1 extraout_A0b_01;
  undefined2 extraout_A0w_01;
  undefined1 extraout_A0b_02;
  undefined2 extraout_A0w_02;
  undefined1 extraout_A0b_03;
  undefined2 extraout_A0w_03;
  undefined1 extraout_A0b_04;
  undefined2 extraout_A0w_04;
  undefined1 extraout_A0b_05;
  undefined2 extraout_A0w_05;
  undefined1 extraout_A0b_06;
  undefined2 extraout_A0w_06;
  undefined1 extraout_A0b_07;
  undefined2 extraout_A0w_07;
  undefined1 extraout_A0b_08;
  undefined2 extraout_A0w_08;
  undefined1 extraout_A0b_09;
  undefined2 extraout_A0w_09;
  undefined1 extraout_A0b_10;
  undefined2 extraout_A0w_10;
  undefined1 extraout_A0b_11;
  undefined2 extraout_A0w_11;
  undefined1 extraout_A0b_12;
  undefined2 extraout_A0w_12;
  undefined1 extraout_A0b_13;
  undefined2 extraout_A0w_13;
  undefined1 uVar5;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((DAT_00025b39 == '\0') || (cVar4 = FUN_0000000c(), cVar4 == '\0')) {
    _DAT_000150ac = param_1._0_2_;
    return;
  }
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar2 = func_0x000076a8((char)auStack_4a);
  if (iVar2 != 0) {
    return;
  }
  if (param_1._0_2_ == _DAT_000150ac) {
    cVar4 = func_0x00006e88();
    if (cVar4 != '\0') {
      _DAT_00025f52 = (undefined1 *)local_10;
      return;
    }
    FUN_0000067e();
  }
  _DAT_000150ac = param_1._0_2_;
  cVar4 = func_0x00006e88();
  if (cVar4 != '\0') {
    FUN_0000061e();
  }
  FUN_0000067e();
  if (param_1._0_2_ == 0) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b);
    uVar5 = 0xd4;
    FUN_000006f2(extraout_A0w);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 3) {
    func_0x00002ae0(0xff);
    func_0x00002ae0(0,extraout_A0b_00);
    uVar5 = 0x14;
    FUN_000006f2(extraout_A0w_00);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 1) {
    func_0x00002ae0(0xff);
    func_0x00002ae0(0,extraout_A0b_01);
    uVar5 = 0x54;
    FUN_000006f2(extraout_A0w_01);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 2) {
    bVar1 = true;
    for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
      if ((*(short *)(sVar3 * 2 + _DAT_0002884c + 0x138) != 0) &&
         (*(short *)(sVar3 * 2 + _DAT_0002884c + 0xd0) == 0)) {
        bVar1 = false;
        break;
      }
    }
    if (bVar1) {
      sVar3 = func_0x00002ad0(100);
      if (sVar3 < 6) {
        func_0x00002ae0(0xff);
        func_0x00002ae0(0,extraout_A0b_02);
        FUN_000006f2(extraout_A0w_02);
      }
      else if (sVar3 < 0x35) {
        func_0x00002ae0(0xff);
        func_0x00002ae0(0,extraout_A0b_03);
        FUN_000006f2(extraout_A0w_03);
      }
      else {
        func_0x00002ae0(0xff);
        func_0x00002ae0(0,extraout_A0b_04);
        FUN_000006f2(extraout_A0w_04);
      }
    }
    else {
      func_0x00002ae0(0xff);
      func_0x00002ae0(0,extraout_A0b_05);
      FUN_000006f2(extraout_A0w_05);
    }
    FUN_0000096a();
  }
  else if (param_1._0_2_ == 4) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b_06);
    uVar5 = 0xb2;
    FUN_000006f2(extraout_A0w_06);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 5) {
    func_0x00002ae0(0xff);
    func_0x00002ae0(0,extraout_A0b_07);
    uVar5 = 0xf2;
    FUN_000006f2(extraout_A0w_07);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 6) {
    func_0x00002ae0(0xff);
    func_0x00002ae0(0,extraout_A0b_08);
    uVar5 = 0x32;
    FUN_000006f2(extraout_A0w_08);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 7) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b_09);
    uVar5 = 0x72;
    FUN_000006f2(extraout_A0w_09);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 8) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b_10);
    uVar5 = 0xb2;
    FUN_000006f2(extraout_A0w_10);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 9) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b_11);
    uVar5 = 0xf2;
    FUN_000006f2(extraout_A0w_11);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 10) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b_12);
    uVar5 = 0x30;
    FUN_000006f2(extraout_A0w_12);
    FUN_0000096a(uVar5);
  }
  else if (param_1._0_2_ == 0xb) {
    func_0x00002ae0(0);
    func_0x00002ae0(0,extraout_A0b_13);
    uVar5 = 0x6e;
    FUN_000006f2(extraout_A0w_13);
    FUN_0000096a(uVar5);
  }
  _DAT_00025f52 = (undefined1 *)local_10;
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 66 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(void)

{
  undefined4 extraout_A0;
  int unaff_A6;
  
  func_0x00002ae0();
  func_0x00002ae0(0x70000);
  FUN_000006f2(extraout_A0);
  FUN_0000096a();
  _DAT_00025f52 = *(undefined4 *)(unaff_A6 + -0xc);
  return;
}



// Function: FUN_00000e8e at 00000e8e
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e8e(void)

{
  if (_DAT_00027338 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000ec2 at 00000ec2
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ec2(void)

{
  if (_DAT_000150ac != -1) {
    FUN_00000a0a();
  }
  return;
}



// Function: FUN_00000ee2 at 00000ee2
// Size: 30 bytes

void FUN_00000ee2(void)

{
  char cVar1;
  
  cVar1 = func_0x00006e88();
  if (cVar1 != '\0') {
    FUN_0000061e();
  }
  FUN_0000067e();
  return;
}



// Function: FUN_00000f00 at 00000f00
// Size: 148 bytes

void FUN_00000f00(undefined4 param_1)

{
  char cVar3;
  ushort uVar1;
  undefined2 uVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  cVar3 = FUN_0000003c();
  if (cVar3 != '\0') {
    if (param_1._0_2_ == 0) {
      func_0x00002ae0(0x250000);
      uVar1 = FUN_00000542(extraout_A0);
      if (-1 < (short)uVar1) {
        uVar2 = FUN_00000054();
        FUN_0000049c(CONCAT22(uVar1,uVar2));
        FUN_0000043e((uint)uVar1 << 0x10);
      }
    }
    else {
      func_0x00002ae0(0x250001);
      uVar1 = FUN_00000542(extraout_A0_00);
      if (-1 < (short)uVar1) {
        uVar2 = FUN_00000054();
        FUN_0000049c(CONCAT22(uVar1,uVar2));
        FUN_0000043e((uint)uVar1 << 0x10);
      }
    }
  }
  return;
}



// Function: FUN_00000f94 at 00000f94
// Size: 80 bytes

void FUN_00000f94(void)

{
  char cVar3;
  ushort uVar1;
  undefined2 uVar2;
  undefined4 extraout_A0;
  
  cVar3 = FUN_0000003c();
  if (cVar3 != '\0') {
    func_0x00002ae0(0x270000);
    uVar1 = FUN_00000542(extraout_A0);
    if (-1 < (short)uVar1) {
      uVar2 = FUN_00000054();
      FUN_0000049c(CONCAT22(uVar1,uVar2));
      FUN_0000043e((uint)uVar1 << 0x10);
    }
  }
  return;
}



// Function: FUN_00000fe4 at 00000fe4
// Size: 2412 bytes

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00000fe4(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  char cVar4;
  undefined1 uVar5;
  short sVar3;
  short sVar6;
  char *extraout_A0;
  char *extraout_A0_00;
  char *extraout_A0_01;
  char *extraout_A0_02;
  char *extraout_A0_03;
  char *extraout_A0_04;
  char *extraout_A0_05;
  char *extraout_A0_06;
  char *extraout_A0_07;
  char *extraout_A0_08;
  char *extraout_A0_09;
  char *extraout_A0_10;
  char *extraout_A0_11;
  char *extraout_A0_12;
  short *psVar7;
  char *extraout_A0_13;
  char *extraout_A0_14;
  char *extraout_A0_15;
  char *extraout_A0_16;
  char *pcVar8;
  undefined1 extraout_A0b;
  int *extraout_A0_17;
  int *extraout_A0_18;
  undefined1 extraout_A0b_00;
  undefined1 extraout_A0b_01;
  undefined1 extraout_A0b_02;
  undefined1 extraout_A0b_03;
  char *pcVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 *puVar12;
  undefined1 uVar13;
  short local_ea;
  short local_e8 [3];
  int local_e2;
  int local_de;
  undefined1 auStack_da [4];
  short local_d6;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined1 auStack_b2 [8];
  int local_aa;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined1 auStack_9e [52];
  undefined2 local_6a;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  char acStack_54 [80];
  
  uVar2 = FUN_0000006c();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (param_1._0_2_ != 5) goto LAB_00001534;
  if (0x27 < *(short *)((short)*(ushort *)(_DAT_0002884c + 0x110) * 2 + 0x28800)) {
    return (uint)*(ushort *)(_DAT_0002884c + 0x110);
  }
  sVar3 = 0;
  sVar6 = *(short *)(_DAT_0002884c + 0x182);
  while (sVar1 = sVar6 + -1, sVar6 != 0) {
    iVar10 = sVar1 * 0x16 + _DAT_00028854;
    sVar6 = sVar1;
    if ((*(char *)(iVar10 + 4) == '\x1c') &&
       ((int)*(short *)(_DAT_0002884c + 0x110) == (int)*(char *)(iVar10 + 5))) {
      sVar3 = sVar3 + 1;
    }
  }
  iVar10 = *(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c;
  if ((*(char *)(iVar10 + 0x100) == '\x02') &&
     ((int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800) <
      (int)*(char *)(iVar10 + 0x108))) {
LAB_000010ce:
    iVar10 = ((int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800) / 5) * 5;
    *(undefined1 *)(*(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c + 0x100) = 2;
    *(char *)(*(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c + 0x108) = (char)iVar10;
    sVar3 = (short)iVar10;
    if (sVar3 == 0) {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
    else if (sVar3 == 5) {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0_00;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
    else if (sVar3 == 10) {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0_01;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
    else if (sVar3 == 0xf) {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0_02;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
    else if (sVar3 == 0x14) {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0_03;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
    else if (sVar3 == 0x19) {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0_04;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
    else {
      func_0x00002ae0(0xff);
      pcVar8 = acStack_54;
      pcVar9 = extraout_A0_05;
      do {
        cVar4 = *pcVar9;
        *pcVar8 = cVar4;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
    }
  }
  else {
    iVar10 = *(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c;
    if ((*(char *)(iVar10 + 0x100) != '\x02') &&
       ((int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800) <
        (int)*(char *)(iVar10 + 0x108))) goto LAB_000010ce;
    iVar10 = *(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c;
    if ((*(char *)(iVar10 + 0x100) == '\x02') &&
       (*(char *)(iVar10 + 0x108) + 5 <=
        (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800))) {
LAB_0000128a:
      iVar10 = ((int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800) / 5) * 5;
      *(undefined1 *)(*(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c + 0x100) = 1;
      *(char *)(*(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c + 0x108) = (char)iVar10;
      sVar3 = (short)iVar10;
      if (sVar3 == 5) {
LAB_000013be:
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_12;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else if (sVar3 == 10) {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_11;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else if (sVar3 == 0xf) {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_10;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else if (sVar3 == 0x14) {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_09;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else if (sVar3 == 0x19) {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_08;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else if (sVar3 == 0x1e) {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_07;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else {
        if (sVar3 != 0x23) goto LAB_000013be;
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_06;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
    }
    else {
      iVar10 = *(short *)(_DAT_0002884c + 0x110) + _DAT_0002884c;
      if ((*(char *)(iVar10 + 0x100) != '\x02') &&
         (*(char *)(iVar10 + 0x108) + 5 <=
          (int)*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + 0x28800))) goto LAB_0000128a;
      local_e8[1] = 1;
      local_e8[2] = *(short *)(_DAT_0002884c + 0x136);
      if (*(short *)(_DAT_0002884c + 0x136) < 2) {
        psVar7 = local_e8 + 1;
      }
      else {
        psVar7 = local_e8 + 2;
      }
      if ((int)*psVar7 % 7 != 0) {
        return (int)*psVar7 / 7;
      }
      if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 100) {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_13;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
      else if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 0x14 + _DAT_0002884c + 0x186) < 0xaf1)
      {
        if (sVar3 < 1) {
          func_0x00002ae0(0xff);
          pcVar8 = acStack_54;
          pcVar9 = extraout_A0_15;
          do {
            cVar4 = *pcVar9;
            *pcVar8 = cVar4;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
        }
        else if (sVar3 < 5) {
          sVar3 = func_0x00002ad0(5);
          if ((ushort)(sVar3 - 1U) != 0) {
            return (uint)(ushort)(sVar3 - 1U);
          }
          func_0x00002ae0(0xff);
          func_0x000076d0((char)acStack_54,extraout_A0b);
        }
        else {
          func_0x00002ae0(0xff);
          pcVar8 = acStack_54;
          pcVar9 = extraout_A0_16;
          do {
            cVar4 = *pcVar9;
            *pcVar8 = cVar4;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
        }
      }
      else {
        func_0x00002ae0(0xff);
        pcVar8 = acStack_54;
        pcVar9 = extraout_A0_14;
        do {
          cVar4 = *pcVar9;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
      }
    }
  }
  local_ea = 1;
  local_e8[0] = *(short *)(_DAT_0002884c + 0x136);
  if (*(short *)(_DAT_0002884c + 0x136) < 2) {
    psVar7 = &local_ea;
  }
  else {
    psVar7 = local_e8;
  }
  if (*psVar7 == 1) {
    return 0;
  }
LAB_00001534:
  do {
    cVar4 = FUN_000003b2();
  } while (cVar4 != '\0');
  local_58 = (int *)0x0;
  (**(code **)(*_DAT_000257ee + 0x68))((char)_DAT_000257ee,0);
  local_6a = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_64 = _DAT_00025f52;
  _DAT_00025f52 = auStack_9e;
  local_58 = extraout_A0_17;
  uVar2 = func_0x000076a8((short)auStack_9e);
  if (uVar2 == 0) {
    (**(code **)(*local_58 + 0x410))();
    (**(code **)(*local_58 + 0x3dc))();
    (**(code **)(*local_58 + 0x310))((short)local_58,(short)auStack_b2);
    (**(code **)(*local_58 + 0x3e4))(local_58,(short)auStack_da);
    if (local_d6 < local_aa) {
      uVar5 = (undefined1)((uint)auStack_b2 >> 0x10);
      func_0x00003918((char)auStack_b2);
      local_de = extraout_A0_18[1];
      local_e2 = *extraout_A0_18 - (local_aa - local_d6);
      (**(code **)(*local_58 + 0x1bc))((short)local_58,(short)&local_e2,uVar5);
    }
    (**(code **)(*local_58 + 0x194))();
    (**(code **)(*local_58 + 0x268))();
    switch(param_1._0_2_) {
    case 0:
      do {
        cVar4 = FUN_000003b2();
      } while (cVar4 != '\0');
      func_0x00002ae0(0);
      sVar3 = FUN_00000542(extraout_A0b_01);
      if (-1 < sVar3) {
        uVar5 = FUN_00000084();
        FUN_0000049c(uVar5);
        FUN_0000043e(0);
      }
      break;
    case 1:
      do {
        cVar4 = FUN_000003b2();
      } while (cVar4 != '\0');
      func_0x00002ae0(0);
      sVar3 = FUN_00000542(extraout_A0b_02);
      if (-1 < sVar3) {
        uVar5 = FUN_00000084();
        FUN_0000049c(uVar5);
        FUN_0000043e(0);
      }
      break;
    case 2:
      func_0x00002ae0(0);
      sVar3 = FUN_00000542(extraout_A0b_00);
      if (-1 < sVar3) {
        uVar5 = FUN_00000084();
        FUN_0000049c(uVar5);
        FUN_0000043e(0);
      }
      break;
    case 4:
      do {
        cVar4 = FUN_000003b2();
      } while (cVar4 != '\0');
      func_0x00002ae0(0);
      sVar3 = FUN_00000542(extraout_A0b_03);
      if (-1 < sVar3) {
        uVar5 = FUN_00000084();
        FUN_0000049c(uVar5);
        FUN_0000043e(0);
      }
      break;
    case 5:
      do {
        cVar4 = FUN_000003b2();
      } while (cVar4 != '\0');
      sVar3 = FUN_00000542((char)acStack_54);
      if (-1 < sVar3) {
        uVar5 = FUN_00000084();
        FUN_0000049c(uVar5);
        FUN_0000043e(0);
      }
    }
    sVar3 = func_0x00002ad0(0x1e);
    while (cVar4 = FUN_000003b2(), cVar4 != '\0') {
      func_0x00002ab0();
      sVar3 = sVar3 + 1;
      if (0x28 < sVar3) {
        sVar3 = 0;
        local_a2 = 0xf6;
        local_a0 = 0x4e;
        local_ba = 0x2f;
        local_b8 = 0;
        local_b6 = 0x5e;
        local_b4 = 0x9e;
        puVar12 = &local_ba;
        uVar13 = 1;
        uVar5 = (undefined1)((uint)&local_a2 >> 0x10);
        uVar11 = 1;
        func_0x00002378(0x4124,(short)puVar12,(char)&local_a2,0x24);
        func_0x00002ab0(uVar11,(short)((uint)puVar12 >> 0x10),uVar5,uVar13);
        local_c2 = 0x5e;
        local_c0 = 0;
        local_be = 0x8d;
        local_bc = 0x9e;
        func_0x00002378(0x14124,&local_c2,&local_a2,0x24);
        func_0x00002ab0();
        local_ca = 0x2f;
        local_c8 = 0;
        local_c6 = 0x5e;
        local_c4 = 0x9e;
        func_0x00002378(0x14124,&local_ca,&local_a2,0x24);
        func_0x00002ab0();
        local_d2 = 0;
        local_d0 = 0;
        local_ce = 0x2f;
        local_cc = 0x9e;
        func_0x00002378(0x14124,&local_d2,&local_a2,0x24);
      }
    }
    do {
      cVar4 = FUN_000003b2();
    } while (cVar4 != '\0');
    cVar4 = FUN_0000006c();
    if (cVar4 != '\0') {
      func_0x00002ab0();
    }
    uVar2 = (**(code **)(*local_58 + 0x3a0))();
    _DAT_00025f52 = local_64;
  }
  else if (local_58 != (int *)0x0) {
    uVar2 = (**(code **)(*local_58 + 0x3a0))();
  }
  return uVar2;
}



// Function: FUN_0000195c at 0000195c
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000195c(void)

{
  char cVar2;
  undefined2 uVar1;
  
  cVar2 = FUN_0000003c();
  if ((cVar2 != '\0') && (_DAT_00028840 != 0)) {
    uVar1 = FUN_00000054();
    FUN_0000049c(CONCAT22(_DAT_0002731c,uVar1));
    FUN_0000043e((uint)_DAT_0002731c << 0x10);
  }
  return;
}



// Function: FUN_0000199a at 0000199a
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000199a(void)

{
  char cVar2;
  undefined2 uVar1;
  
  cVar2 = FUN_0000003c();
  if ((cVar2 != '\0') && (_DAT_00028840 != 0)) {
    uVar1 = FUN_00000054();
    FUN_0000049c(CONCAT22(_DAT_0002731a,uVar1));
    FUN_0000043e((uint)_DAT_0002731a << 0x10);
  }
  return;
}



// Function: FUN_000019d8 at 000019d8
// Size: 80 bytes

void FUN_000019d8(void)

{
  char cVar3;
  ushort uVar1;
  undefined2 uVar2;
  undefined4 extraout_A0;
  
  cVar3 = FUN_0000003c();
  if (cVar3 != '\0') {
    func_0x00002ae0(0x3f0000);
    uVar1 = FUN_00000542(extraout_A0);
    if (-1 < (short)uVar1) {
      uVar2 = FUN_00000054();
      FUN_0000049c(CONCAT22(uVar1,uVar2));
      FUN_0000043e((uint)uVar1 << 0x10);
    }
  }
  return;
}



// Function: FUN_00001a28 at 00001a28
// Size: 138 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001a28(void)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  
  func_0x00002ae0(0x400000);
  _DAT_00027318 = FUN_00000542(extraout_A0);
  func_0x00002ae0(0x400001);
  _DAT_0002731a = FUN_00000542(extraout_A0_00);
  func_0x00002ae0(0x400002);
  _DAT_0002731c = FUN_00000542(extraout_A0_01);
  func_0x00002ae0(0x400005);
  _DAT_00027322 = FUN_00000542(extraout_A0_02);
  _DAT_0002732c = 0;
  _DAT_00027330 = 0;
  _DAT_00027334 = 0;
  return;
}



