// Warlords II - Decompiled 68k Code
// Segment: CODE_159
// Decompiled by Ghidra 12.0.3

// Function: FUN_000000d4 at 000000d4
// Size: 94 bytes

undefined4 FUN_000000d4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  short sVar3;
  short sVar4;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *param_3;
  sVar3 = FUN_00000344(uVar1);
  sVar4 = FUN_00000344(uVar2);
  if (sVar3 < sVar4) {
    uVar2 = 1;
  }
  else {
    sVar3 = FUN_00000344(uVar1);
    sVar4 = FUN_00000344(uVar2);
    if (sVar4 < sVar3) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_00000172 at 00000172
// Size: 172 bytes

undefined4 FUN_00000172(undefined4 param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  short local_238;
  undefined1 uStackY_22d;
  undefined1 uVar5;
  byte local_208 [256];
  undefined1 local_108 [4];
  byte abStack_104 [256];
  
  (**(code **)(**(int **)(param_2 + 0x102) + 0x70))
            ((short)*(int **)(param_2 + 0x102),param_1,local_108,1);
  uVar5 = local_108[1];
  FUN_0000032a(local_108._2_2_,(short)local_208);
  pbVar2 = local_208;
  pbVar3 = abStack_104;
  for (iVar1 = local_208[0] + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar3 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uStackY_22d = (undefined1)param_2;
  local_238 = CONCAT11(1,(undefined1)local_238);
  func_0x00007638();
  if (local_238 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    func_0x00007638(uVar5,(short)abStack_104,(short)param_2);
    if (CONCAT11(1,uStackY_22d) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// Function: FUN_0000021e at 0000021e
// Size: 84 bytes

undefined4 FUN_0000021e(undefined4 param_1,int param_2)

{
  short sVar2;
  undefined4 uVar1;
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_2 + 0x102) + 0x70))(*(int **)(param_2 + 0x102),param_1,&local_8,1);
  sVar2 = FUN_00000344(local_8);
  if (*(short *)(param_2 + 0x100) < sVar2) {
    uVar1 = 0xffffffff;
  }
  else if (sVar2 < *(short *)(param_2 + 0x100)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00000272 at 00000272
// Size: 46 bytes

void FUN_00000272(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  FUN_000002d0(param_1,0);
  return;
}



// Function: FUN_000002a0 at 000002a0
// Size: 48 bytes

void FUN_000002a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  FUN_000002d0(param_1,param_5);
  return;
}



// Function: FUN_000002d0 at 000002d0
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002d0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00000518();
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_0000041a(param_1,param_2);
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(int *)(param_1 + 4) = _DAT_0002650e;
  _DAT_0002650e = param_1;
  return;
}



// Function: FUN_0000030e at 0000030e
// Size: 28 bytes

undefined4 FUN_0000030e(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((code *)*param_1 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)*param_1)();
  }
  return uVar1;
}



// Function: FUN_0000032a at 0000032a
// Size: 26 bytes

void FUN_0000032a(int param_1,undefined4 param_2)

{
  func_0x00007320(param_2,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_00000344 at 00000344
// Size: 16 bytes

undefined2 FUN_00000344(int param_1)

{
  return *(undefined2 *)(param_1 + 0x10);
}



// Function: FUN_00000354 at 00000354
// Size: 16 bytes

undefined4 FUN_00000354(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// Function: FUN_00000364 at 00000364
// Size: 28 bytes

void FUN_00000364(void)

{
  return;
}



// Function: FUN_00000380 at 00000380
// Size: 154 bytes

undefined4 FUN_00000380(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int extraout_A0;
  int extraout_A0_00;
  int iVar3;
  int local_16 [4];
  
  if (param_1 == param_2) {
    uVar1 = 1;
  }
  else {
    func_0x000023e8((short)local_16,(short)param_1);
    (**(code **)(local_16[0] + 0x1c))();
    iVar3 = extraout_A0;
    while (cVar2 = (**(code **)(local_16[0] + 8))(), cVar2 != '\0') {
      if (iVar3 == param_2) {
        func_0x000023f0((short)local_16);
        return 1;
      }
      (**(code **)(local_16[0] + 0x20))();
      iVar3 = extraout_A0_00;
    }
    func_0x000023f0((short)local_16);
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_0000041a at 0000041a
// Size: 30 bytes

void FUN_0000041a(int param_1,int param_2)

{
  if ((param_1 != param_2) && (*(int *)(param_1 + 0x12) == 0)) {
    *(int *)(param_1 + 0x12) = param_2;
  }
  return;
}



// Function: FUN_00000438 at 00000438
// Size: 224 bytes

void FUN_00000438(int param_1,int param_2)

{
  char cVar1;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int extraout_A0_01;
  int extraout_A0_02;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int local_1e [6];
  
  if (param_2 != param_1) {
    if (*(int *)(param_1 + 0x16) == 0) {
      func_0x000073c0(0x10);
      uVar2 = 0;
      if (extraout_A0 != 0) {
        FUN_000006d6((short)extraout_A0,1);
        uVar2 = extraout_A0_00;
      }
      *(undefined4 *)(param_1 + 0x16) = uVar2;
      func_0x00001bf0((short)*(undefined4 *)(param_1 + 0x16));
    }
    func_0x00002408((short)local_1e,(short)*(undefined4 *)(param_1 + 0x16));
    (**(code **)(local_1e[0] + 0x1c))();
    iVar3 = extraout_A0_01;
    while (cVar1 = (**(code **)(local_1e[0] + 8))(), cVar1 != '\0') {
      if (iVar3 == param_2) {
        func_0x00002410((short)local_1e);
        return;
      }
      (**(code **)(local_1e[0] + 0x20))();
      iVar3 = extraout_A0_02;
    }
    uVar5 = (undefined2)((uint)param_2 >> 0x10);
    iVar3 = *(int *)(param_1 + 0x16);
    uVar4 = (undefined2)((uint)iVar3 >> 0x10);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))((short)iVar3,(short)param_2);
    func_0x00002410((short)local_1e,uVar4,uVar5);
  }
  return;
}



// Function: FUN_00000518 at 00000518
// Size: 20 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00000518(void)

{
  _DAT_00026512 = _DAT_00026512 + 1;
  return _DAT_00026512;
}



// Function: FUN_0000052c at 0000052c
// Size: 112 bytes

void FUN_0000052c(undefined4 param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int extraout_A0;
  byte *extraout_A0_00;
  undefined1 auStack_104 [256];
  
  FUN_000005fa();
  if (extraout_A0 == 0) {
    func_0x00007328((short)auStack_104,param_1._0_2_);
    pbVar2 = &DAT_00025fa8;
    pbVar3 = extraout_A0_00;
    for (iVar1 = *extraout_A0_00 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pbVar2 = *pbVar3;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    }
    func_0x00001c10();
  }
  else {
    FUN_0000030e((short)extraout_A0);
  }
  return;
}



// Function: FUN_0000059c at 0000059c
// Size: 94 bytes

void FUN_0000059c(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  int extraout_A0;
  
  FUN_0000066a(param_1);
  if (extraout_A0 == 0) {
    iVar1 = *param_1 + 1;
    pbVar2 = &DAT_00025fa8;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pbVar2 = *param_1;
      pbVar2 = pbVar2 + 1;
      param_1 = param_1 + 1;
    }
    func_0x00001c10();
  }
  else {
    FUN_0000030e(extraout_A0);
  }
  return;
}



// Function: FUN_000005fa at 000005fa
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005fa(void)

{
  char cVar1;
  undefined1 auStack_112 [262];
  undefined1 local_c [2];
  undefined2 uStack_a;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_00000132((short)auStack_112,0x5b76);
  cVar1 = (**(code **)(*_DAT_0002650a + 0x8c))
                    (_DAT_0002650a,0xb18,(short)auStack_112,(short)local_c);
  if (cVar1 != '\0') {
    (**(code **)(*_DAT_0002650a + 0x70))((short)_DAT_0002650a,uStack_a,(short)&local_8,1);
  }
  return;
}



// Function: FUN_0000066a at 0000066a
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000066a(undefined2 param_1)

{
  char cVar1;
  undefined1 auStack_112 [262];
  undefined1 local_c [2];
  undefined2 uStack_a;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_00000132((short)auStack_112,param_1);
  cVar1 = (**(code **)(*_DAT_00026506 + 0x8c))
                    (_DAT_00026506,0xb10,(short)auStack_112,(short)local_c);
  if (cVar1 != '\0') {
    (**(code **)(*_DAT_00026506 + 0x70))((short)_DAT_00026506,uStack_a,(short)&local_8,1);
  }
  return;
}



// Function: FUN_000006d6 at 000006d6
// Size: 34 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000006d6(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0x126aa;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000718 at 00000718
// Size: 54 bytes

/* WARNING: Control flow encountered bad instruction data */

int * FUN_00000718(int *param_1,undefined4 param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = 0x126aa;
    if (*param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0 < param_2._0_2_) {
      param_1 = (int *)func_0x000073c8(param_1);
    }
  }
  return param_1;
}



// Function: FUN_00000750 at 00000750
// Size: 16 bytes

undefined4 FUN_00000750(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Function: FUN_00000760 at 00000760
// Size: 46 bytes

void FUN_00000760(void)

{
  return;
}



// Function: FUN_0000078e at 0000078e
// Size: 28 bytes

void FUN_0000078e(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(param_1,param_2);
  return;
}



// Function: FUN_000007aa at 000007aa
// Size: 40 bytes

void FUN_000007aa(int *param_1)

{
  if ((param_1[2] != 0) && (*param_1 != 0)) {
    param_1[2] = param_1[2] + -1;
  }
  return;
}



// Function: FUN_000007d2 at 000007d2
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007d2(int *param_1,undefined4 param_2)

{
  if ((param_1[2] < param_1[1]) && (*param_1 != 0)) {
    *(undefined4 *)(*param_1 + param_1[2] * 4) = param_2;
    param_1[2] = param_1[2] + 1;
    return;
  }
  param_1[1] = param_1[1] + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000844 at 00000844
// Size: 14 bytes

void FUN_00000844(void)

{
  return;
}



// Function: FUN_00000852 at 00000852
// Size: 44 bytes

void FUN_00000852(void)

{
  int extraout_A0;
  
  func_0x000073b0(0x2e);
  if (extraout_A0 != 0) {
    func_0x00005af8(extraout_A0,extraout_A0,extraout_A0);
  }
  return;
}



