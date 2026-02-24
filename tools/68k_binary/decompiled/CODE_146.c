// Warlords II - Decompiled 68k Code
// Segment: CODE_146
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000058 at 00000058
// Size: 540 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000058(int *param_1,int param_2,short *param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  byte *pbVar5;
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar6;
  int *extraout_A0_01;
  undefined4 *puVar7;
  int unaff_A5;
  char local_102;
  byte local_6c;
  byte abStack_6b [31];
  char local_4c;
  char local_4b;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(unaff_A5 + -0x701) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x701) = 1;
    DAT_000267ae = 0;
  }
  local_4b = DAT_000260ac;
  local_4c = 0;
  DAT_000260ac = 1;
  local_102 = (char)((uint)param_4 >> 0x18);
  FUN_00000b12((short)param_4,param_3,param_2);
  local_4c = local_102;
  if (local_102 == '\0') {
    local_16 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = _DAT_00025f52;
    _DAT_00025f52 = auStack_4a;
    iVar2 = func_0x000076a8((char)auStack_4a);
    if (iVar2 == 0) {
      if ((DAT_000260ad == '\0') && (local_4b == '\0')) {
        (**(code **)(*param_1 + 0x280))();
      }
      sVar4 = *param_3;
      if (sVar4 == 3) {
        FUN_00000e00();
        func_0x000073b0(0x28);
        uVar6 = 0;
        if (extraout_A0 != 0) {
          func_0x00006f90((char)extraout_A0);
          uVar6 = extraout_A0_00;
        }
        FUN_00000e00();
        func_0x00003698(uVar6,(short)param_1,(short)param_3);
        (**(code **)(*param_1 + 0x1a4))(param_1,uVar6);
        (**(code **)(*extraout_A0_01 + 0x88))();
        func_0x00007378(0x67ae);
        FUN_00000e10(uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (sVar4 == 6) {
        if (((param_2 != *(int *)(param_3 + 1)) && (DAT_000260ad == '\0')) && (local_4b == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (sVar4 == 8) {
        if (param_2 == *(int *)(param_3 + 1)) {
          local_6c = DAT_00025b76;
          if (0x1f < DAT_00025b76) {
            local_6c = 0x1f;
          }
          pbVar5 = abStack_6b;
          pbVar1 = &DAT_00025b77;
          for (uVar3 = (uint)local_6c; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pbVar5 = *pbVar1;
            pbVar5 = pbVar5 + 1;
            pbVar1 = pbVar1 + 1;
          }
          sVar4 = 7;
          pbVar5 = &local_6c;
          puVar7 = (undefined4 *)&DAT_000267ae;
          do {
            *puVar7 = *(undefined4 *)pbVar5;
            sVar4 = sVar4 + -1;
            pbVar5 = pbVar5 + 4;
            puVar7 = puVar7 + 1;
          } while (sVar4 != -1);
        }
        else if ((DAT_000260ad == '\0') && (local_4b == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if ((DAT_000260ad == '\0') && (local_4b == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_00025f52 = local_10;
    }
  }
  DAT_000260ac = local_4b;
  return local_4c;
}



// Function: FUN_00000476 at 00000476
// Size: 124 bytes

undefined4 FUN_00000476(undefined2 param_1,short *param_2)

{
  int extraout_A0;
  int *extraout_A0_00;
  int *piVar1;
  
  if ((*param_2 == 8) || (*param_2 == 6)) {
    FUN_00000e00();
    func_0x000073b0(0x28);
    piVar1 = (int *)0x0;
    if (extraout_A0 != 0) {
      func_0x00006f90((char)extraout_A0);
      piVar1 = extraout_A0_00;
    }
    FUN_00000e00();
    func_0x00003698(piVar1,param_1,(short)param_2);
    (**(code **)(*piVar1 + 0x6c))();
  }
  return 0;
}



// Function: FUN_000004f2 at 000004f2
// Size: 90 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000004f2(int *param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  int extraout_A0;
  
  (**(code **)(*param_1 + 0x280))();
  sVar1 = *param_3;
  if ((sVar1 == 6) || (sVar1 == 8)) {
    (**(code **)(*param_1 + 500))(param_1,*(undefined4 *)(param_3 + 1));
    if (extraout_A0 != 0) {
      halt_baddata();
    }
  }
  else if ((sVar1 == 0xf) || (sVar1 == 0x17)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_000005b0 at 000005b0
// Size: 20 bytes

void FUN_000005b0(void)

{
  FUN_000005c4();
  return;
}



// Function: FUN_000005c4 at 000005c4
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005c4(void)

{
  FUN_00001674(0xfffffffe,_DAT_00025cd0,_DAT_000267d2);
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_000006be at 000006be
// Size: 38 bytes

void FUN_000006be(void)

{
  if (DAT_00000220 != 0) {
    FUN_0000079e();
  }
  return;
}



// Function: FUN_000006e4 at 000006e4
// Size: 48 bytes

void FUN_000006e4(undefined8 param_1)

{
  if (param_1._2_4_ == 0) {
    FUN_0000079e();
  }
  else {
    FUN_0000079e();
  }
  return;
}



// Function: FUN_00000714 at 00000714
// Size: 28 bytes

void FUN_00000714(int param_1)

{
  if (param_1 == 0) {
    FUN_0000079e();
  }
  return;
}



// Function: FUN_00000730 at 00000730
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000730(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000075e at 0000075e
// Size: 28 bytes

void FUN_0000075e(undefined4 param_1)

{
  if (param_1._0_2_ != 0) {
    FUN_0000079e();
  }
  return;
}



// Function: FUN_0000077a at 0000077a
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000077a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007f8 at 000007f8
// Size: 78 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007f8(undefined4 param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte local_204 [256];
  byte abStack_104 [256];
  
  func_0x00007330(local_204,param_1,0xc4a8);
  pbVar2 = local_204;
  pbVar3 = abStack_104;
  for (iVar1 = local_204[0] + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar3 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  func_0x00007310(abStack_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000852 at 00000852
// Size: 20 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000852(int param_1)

{
  _DAT_00025f52 = *(undefined4 *)(param_1 + 0x3a);
  return;
}



// Function: FUN_00000866 at 00000866
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000866(void)

{
  func_0x00007350();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008a8 at 000008a8
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000008a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008ee at 000008ee
// Size: 348 bytes

undefined4 FUN_000008ee(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar5;
  undefined4 uVar4;
  byte local_164;
  undefined1 auStack_163 [31];
  byte local_144;
  undefined1 auStack_143 [31];
  byte local_124;
  undefined1 auStack_123 [31];
  byte local_104;
  undefined1 auStack_103 [255];
  
  local_104 = 0;
  FUN_00000866(param_1);
  local_124 = local_104;
  if (0x1f < local_104) {
    local_124 = 0x1f;
  }
  puVar1 = auStack_123;
  puVar2 = auStack_103;
  for (uVar3 = (uint)local_124; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  cVar5 = FUN_0000169e(param_2,(short)&local_124);
  if (cVar5 == '\0') {
    FUN_00000866(param_1);
    local_144 = local_104;
    if (0x1f < local_104) {
      local_144 = 0x1f;
    }
    puVar1 = auStack_143;
    puVar2 = auStack_103;
    for (uVar3 = (uint)local_144; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    cVar5 = FUN_0000169e(param_2,(short)&local_144);
    if (cVar5 == '\0') {
      FUN_00000866(param_1);
      local_164 = local_104;
      if (0x1f < local_104) {
        local_164 = 0x1f;
      }
      puVar1 = auStack_163;
      puVar2 = auStack_103;
      for (uVar3 = (uint)local_164; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *puVar2;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      cVar5 = FUN_0000169e(param_2,(short)&local_164);
      if (cVar5 == '\0') {
        uVar4 = 0;
      }
      else {
        *param_3 = 3;
        uVar4 = 1;
      }
    }
    else {
      *param_3 = 2;
      uVar4 = 1;
    }
  }
  else {
    *param_3 = 1;
    uVar4 = 1;
  }
  return uVar4;
}



// Function: FUN_00000a4a at 00000a4a
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000a4a(int param_1)

{
  if (0 < *(short *)(param_1 + 0xa8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00000b12 at 00000b12
// Size: 102 bytes

uint FUN_00000b12(undefined2 *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)param_3;
  if (*param_2 == 3) {
    uVar1 = *(uint *)(param_2 + 1);
    cVar2 = (char)uVar1;
    if ((cVar2 == '\x03') || (cVar2 == '\r')) {
      *param_1 = *(undefined2 *)(param_3 + 0xa8);
      uVar1 = FUN_000008a8(uVar3);
    }
    else if ((((uVar1 & 0xff) == 0x60) || (cVar2 == '\x1b')) ||
            ((uVar1 = uVar1 & 0xff, uVar1 == 0x2e &&
             (uVar1 = param_2[7] & 0x100, (param_2[7] & 0x100) != 0)))) {
      uVar1 = FUN_000008a8(uVar3);
      *param_1 = 2;
    }
  }
  else {
    uVar1 = *param_2 - 6;
    if ((uVar1 == 0) && (param_3 == *(int *)(param_2 + 1))) {
      uVar1 = FUN_00000a4a(uVar3);
    }
  }
  return uVar1;
}



// Function: FUN_00000b78 at 00000b78
// Size: 66 bytes

uint FUN_00000b78(void)

{
  int in_D0;
  uint uVar1;
  int in_D1;
  byte unaff_D3b;
  int unaff_A3;
  undefined2 *unaff_A4;
  
  if (((in_D0 == in_D1) || (unaff_D3b == 0x1b)) ||
     ((uVar1 = (uint)unaff_D3b, uVar1 == 0x2e &&
      (uVar1 = *(ushort *)(unaff_A3 + 0xe) & 0x100, (*(ushort *)(unaff_A3 + 0xe) & 0x100) != 0)))) {
    uVar1 = FUN_000008a8();
    *unaff_A4 = 2;
  }
  return uVar1;
}



// Function: FUN_00000cbe at 00000cbe
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000cbe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000d4c at 00000d4c
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000d4c(void)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = _DAT_00025d24;
  uVar1 = uRam00000904;
  FUN_00000cbe();
  (*pcVar2)();
  return uVar1;
}



// Function: FUN_00000d7a at 00000d7a
// Size: 94 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000d7a(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x6e) != '\0') {
    FUN_000019f8(param_1);
  }
  if (param_2._0_1_ != '\0') {
    if (param_1 == _DAT_fffff8e8) {
      if (_DAT_000266a8 != (int *)0x0) {
        (**(code **)(*_DAT_000266a8 + 0x280))();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000de0 at 00000de0
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000de0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e00 at 00000e00
// Size: 16 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e00(void)

{
  undefined2 uVar1;
  int unaff_A6;
  
  uVar1 = FUN_0000198e();
  **(undefined2 **)(unaff_A6 + 0x10) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e10 at 00000e10
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e16 at 00000e16
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000e16(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000e36 at 00000e36
// Size: 128 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000e36(byte *param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = 0;
  do {
    sVar1 = sVar3 + 1;
    sVar4 = sVar1;
    if (*param_1 != 0) {
      if (param_1[1] == param_2[(short)(sVar3 + 1)]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar4 = 0;
    }
    iVar2 = 0;
  } while ((sVar4 < 1) &&
          (iVar2 = ((uint)*param_2 - (uint)*param_1) + 1, sVar3 = sVar1, sVar1 < iVar2));
  return CONCAT22((short)((uint)iVar2 >> 0x10),sVar4);
}



// Function: FUN_00000ec0 at 00000ec0
// Size: 192 bytes

bool FUN_00000ec0(byte *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined1 auStack_204 [256];
  undefined1 auStack_104 [256];
  
  func_0x00007320(auStack_104,0xa1cc);
  func_0x00007320(auStack_204,0xa1c8);
  if (*param_1 == 0) {
    *param_2 = 1;
    *param_3 = 0;
  }
  else {
    sVar1 = FUN_00000e36(auStack_104,param_1);
    *param_2 = sVar1;
    if (0 < *param_2) {
      func_0x00007318(param_1,CONCAT22(*param_2,3));
      sVar1 = FUN_00000e36(auStack_204,param_1);
      if (sVar1 == 0) {
        *param_3 = *param_2 + -1;
      }
      else {
        func_0x00007318(param_1,CONCAT22(sVar1,3));
        *param_3 = ((ushort)*param_1 - sVar1) + *param_2;
      }
    }
  }
  return 0 < *param_2;
}



// Function: FUN_00000f80 at 00000f80
// Size: 278 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f80(undefined2 param_1,int param_2)

{
  int iVar1;
  char cVar3;
  short sVar2;
  int extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int local_70;
  int local_6c;
  int local_68 [25];
  
  func_0x000025a0((short)local_68,(short)_DAT_00025c9c);
  local_70 = param_2;
  FUN_00000b78(param_1);
  local_6c = extraout_A0;
  if (extraout_A0 == 0) {
    FUN_0000079e(0);
  }
  (**(code **)(local_68[0] + 0xc))();
  while( true ) {
    iVar1 = local_68[1];
    cVar3 = FUN_000025d0((char)local_68);
    if (cVar3 == '\0') break;
    (**(code **)(*_DAT_00025c9c + 0x74))((short)_DAT_00025c9c,(char)iVar1);
    if (param_2 == *extraout_A0_00) break;
    (**(code **)(local_68[0] + 0x10))();
  }
  cVar3 = FUN_000025d0((char)local_68);
  if (cVar3 == '\0') {
    sVar2 = (**(code **)(*_DAT_00025c9c + 0x58))((short)_DAT_00025c9c,(short)&local_70,1);
    (**(code **)(*_DAT_00025c9c + 0x60))((short)_DAT_00025c9c,sVar2 + 1);
  }
  else {
    (**(code **)(*_DAT_00025c9c + 0x74))((short)_DAT_00025c9c,(char)iVar1);
    *extraout_A0_01 = local_70;
    extraout_A0_01[1] = local_6c;
  }
  func_0x000025a8((short)local_68);
  return;
}



// Function: FUN_00001096 at 00001096
// Size: 202 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001096(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int extraout_A0;
  undefined4 *extraout_A0_00;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  int local_68 [25];
  
  if (param_1 != 0) {
    func_0x000025a0((short)local_68,(short)_DAT_00025c9c);
    (**(code **)(local_68[0] + 0xc))();
    while (iVar2 = local_68[1], cVar3 = FUN_000025d0((char)local_68), cVar3 != '\0') {
      uVar6 = (undefined1)iVar2;
      (**(code **)(*_DAT_00025c9c + 0x74))((short)_DAT_00025c9c,uVar6);
      if (param_1 == *(int *)(extraout_A0 + 4)) {
        uVar5 = (undefined2)((uint)iVar2 >> 0x10);
        uVar4 = (undefined2)((uint)_DAT_00025c9c >> 0x10);
        (**(code **)(*_DAT_00025c9c + 0x74))((short)_DAT_00025c9c,uVar6);
        uVar1 = *extraout_A0_00;
        func_0x000025a8((short)local_68,uVar4,uVar5);
        return uVar1;
      }
      (**(code **)(local_68[0] + 0x10))();
    }
    func_0x000025a8((short)local_68);
  }
  return 0x20202020;
}



// Function: FUN_00001160 at 00001160
// Size: 116 bytes

undefined4 FUN_00001160(byte *param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3._0_2_ < 1) {
    uVar2 = 0;
  }
  else {
    if (param_3._2_2_ == 0) {
      iVar1 = *param_2 + 1;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
    }
    else {
      func_0x00007318(param_1,(ushort)*param_1 - param_3._2_2_);
      func_0x000072e8(param_1,param_2,CONCAT22(param_3._0_2_,0xff));
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_000011d4 at 000011d4
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000011d4(int param_1)

{
  undefined4 extraout_A0;
  
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (_DAT_00025ccc == 0) {
    FUN_00000e16();
    *(undefined4 *)(param_1 + 0x46) = extraout_A0;
  }
  else {
    *(int *)(param_1 + 0x46) = _DAT_00025ccc;
    _DAT_00025ccc = 0;
  }
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(int *)(param_1 + 0x3a) = _DAT_00025f52;
  _DAT_00025f52 = param_1;
  *(undefined4 *)(param_1 + 0x3e) = 0x1ca0;
  *(int *)(param_1 + 0x42) = param_1;
  return;
}



// Function: FUN_0000124c at 0000124c
// Size: 56 bytes

undefined4 FUN_0000124c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_00001284(param_1);
    uVar1 = FUN_00000852(param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00002640(param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00001284 at 00001284
// Size: 54 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001284(int param_1)

{
  undefined4 extraout_A0;
  
  if (_DAT_00025ccc == 0) {
    _DAT_00025ccc = *(int *)(param_1 + 0x46);
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  else {
    FUN_0000181c(*(undefined4 *)(param_1 + 0x46));
    *(undefined4 *)(param_1 + 0x46) = extraout_A0;
  }
  return;
}



// Function: FUN_000012ba at 000012ba
// Size: 18 bytes

void FUN_000012ba(undefined4 param_1)

{
  FUN_00001284(param_1);
  return;
}



// Function: FUN_000012cc at 000012cc
// Size: 38 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000012cc(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = param_2._0_1_;
  param_1[1] = 0;
  if (DAT_00025b2d != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000130e at 0000130e
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */

int FUN_0000130e(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    if ((DAT_00025b2d != '\0') && (*(char *)(param_1 + 1) != '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0 < param_2._0_2_) {
      param_1 = func_0x000073c8(param_1);
    }
  }
  return param_1;
}



// Function: FUN_00001350 at 00001350
// Size: 54 bytes

void FUN_00001350(int *param_1)

{
  *param_1 = 0xa8ee;
  *param_1 = 0xa1b2;
  *(undefined1 *)(param_1 + 2) = 1;
  (**(code **)(*param_1 + 0xc))();
  return;
}



// Function: FUN_00001386 at 00001386
// Size: 54 bytes

void FUN_00001386(int *param_1,undefined4 param_2)

{
  *param_1 = 0xa8ee;
  *param_1 = 0xa1b2;
  *(undefined1 *)(param_1 + 2) = param_2._0_1_;
  (**(code **)(*param_1 + 0xc))();
  return;
}



// Function: FUN_000013bc at 000013bc
// Size: 22 bytes

bool FUN_000013bc(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



// Function: FUN_000013d2 at 000013d2
// Size: 52 bytes

void FUN_000013d2(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_000014e8(param_1);
    *(undefined4 *)(param_1 + 4) = extraout_A0_00;
  }
  else {
    FUN_00001448(param_1);
    *(undefined4 *)(param_1 + 4) = extraout_A0;
  }
  return;
}



// Function: FUN_00001406 at 00001406
// Size: 66 bytes

void FUN_00001406(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_000014a0(param_1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = extraout_A0_00;
    }
    else {
      FUN_0000147c(param_1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = extraout_A0;
    }
  }
  return;
}



// Function: FUN_00001448 at 00001448
// Size: 52 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00001448(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = iRam000009d6;
  if ((iRam000009d6 != 0) && (iRam000009d6 == _DAT_00025cc4)) {
    iVar1 = FUN_0000147c(param_1,iRam000009d6);
  }
  return iVar1;
}



// Function: FUN_0000147c at 0000147c
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000147c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_2 + 0x90); (iVar1 != 0 && (iVar1 == _DAT_00025cc4));
      iVar1 = *(int *)(iVar1 + 0x90)) {
  }
  return iVar1;
}



// Function: FUN_000014a0 at 000014a0
// Size: 72 bytes

undefined4 FUN_000014a0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int iVar2;
  
  FUN_00001448(param_1);
  iVar2 = extraout_A0;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_0000147c(param_1,iVar2);
    if (extraout_A0_01 == param_2) break;
    FUN_0000147c(param_1,iVar2);
    iVar2 = extraout_A0_00;
  }
  return uVar1;
}



// Function: FUN_000014e8 at 000014e8
// Size: 70 bytes

undefined4 FUN_000014e8(undefined4 param_1)

{
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int iVar1;
  
  FUN_00001448(param_1);
  iVar1 = extraout_A0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0000147c(param_1,iVar1);
    if (extraout_A0_01 == 0) break;
    FUN_0000147c(param_1,iVar1);
    iVar1 = extraout_A0_00;
  }
  return 0;
}



// Function: FUN_0000152e at 0000152e
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000152e(uint param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)(_DAT_00025b42 & param_1);
  pbVar3 = pbVar2 + param_2;
  pbVar1 = pbVar2 + param_2;
  if (3 < param_2) {
    for (; ((uint)pbVar2 & 3) != 0; pbVar2 = pbVar2 + 1) {
      *pbVar2 = param_3._0_1_;
    }
    for (; pbVar2 < (byte *)((uint)pbVar1 & 0xfffffffc); pbVar2 = pbVar2 + 4) {
      *(uint *)pbVar2 =
           (uint)param_3._0_1_ * 0x10000 + (uint)param_3._0_1_ * 0x1000000 +
           (uint)param_3._0_1_ * 0x100 + (uint)param_3._0_1_;
    }
  }
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    *pbVar2 = param_3._0_1_;
  }
  return;
}



// Function: FUN_000015ae at 000015ae
// Size: 28 bytes

bool FUN_000015ae(uint param_1)

{
  return (param_1 & 0x8000000) != 0;
}



// Function: FUN_000015ca at 000015ca
// Size: 64 bytes

undefined2 FUN_000015ca(void)

{
  undefined2 uVar1;
  undefined4 local_10;
  
  local_10 = CONCAT22(local_10._0_2_,0xaa6e);
  local_10 = CONCAT13(1,local_10._1_3_);
  func_0x000075d8();
  func_0x000075d8();
  if (local_10 == 0x100a86e) {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}



// Function: FUN_0000160a at 0000160a
// Size: 106 bytes

bool FUN_0000160a(undefined4 param_1)

{
  char cVar2;
  short sVar1;
  undefined1 uStack_1b;
  
  cVar2 = FUN_000015ae();
  if (cVar2 == '\x01') {
    param_1._0_2_ = param_1._0_2_ & 0x7ff;
    sVar1 = FUN_000015ca();
    if (sVar1 <= (short)param_1._0_2_) {
      param_1._0_2_ = 0xa89f;
    }
  }
  func_0x000075d8();
  func_0x000075d8();
  return CONCAT22(CONCAT11(cVar2,uStack_1b),param_1._0_2_) != 0x100a89f;
}



// Function: FUN_00001674 at 00001674
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00001674(void)

{
  if (DAT_00025b26 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_0000169e at 0000169e
// Size: 46 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000169e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001774 at 00001774
// Size: 54 bytes

undefined2 FUN_00001774(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x00007310(param_1);
  uVar1 = 0x1792;
  func_0x00007310(param_2,extraout_A0);
  uVar1 = CONCAT13(1,(int3)CONCAT22((short)((uint)uVar1 >> 0x10),CONCAT11(1,(char)uVar1)));
  func_0x00007638(uVar1,extraout_A0_00);
  return (short)((uint)uVar1 >> 0x10);
}



// Function: FUN_000017aa at 000017aa
// Size: 48 bytes

byte * FUN_000017aa(byte *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *param_1 + 1;
  pbVar2 = param_2;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar2 = *param_1;
    param_1 = param_1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  return param_2;
}



// Function: FUN_000017da at 000017da
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000017da(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000017f0 at 000017f0
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000017f0(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001806 at 00001806
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001806(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_0000181c at 0000181c
// Size: 20 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000181c(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001832 at 00001832
// Size: 10 bytes

void FUN_00001832(void)

{
  return;
}



// Function: FUN_0000183c at 0000183c
// Size: 28 bytes

short FUN_0000183c(undefined4 param_1)

{
  if (param_1._0_2_ == 0) {
    param_1._0_2_ = sRam00000bac;
  }
  return param_1._0_2_;
}



// Function: FUN_00001858 at 00001858
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001858(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001888 at 00001888
// Size: 50 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001888(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte local_104 [256];
  
  iVar1 = *param_1 + 1;
  pbVar2 = local_104;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar2 = *param_1;
    pbVar2 = pbVar2 + 1;
    param_1 = param_1 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000195e at 0000195e
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000195e(undefined4 param_1)

{
  func_0x00005760(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001976 at 00001976
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001976(undefined4 param_1)

{
  func_0x00005760(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000198e at 0000198e
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000198e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000019b6 at 000019b6
// Size: 46 bytes

bool FUN_000019b6(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(ushort *)(param_1 + 6) & 0xc000) == 0xc000;
  }
  return bVar1;
}



// Function: FUN_000019e4 at 000019e4
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000019e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000019f8 at 000019f8
// Size: 6 bytes

int FUN_000019f8(void)

{
  char in_D0b;
  
  return (int)in_D0b;
}



// Function: FUN_000019fe at 000019fe
// Size: 50 bytes

bool FUN_000019fe(uint *param_1)

{
  bool bVar1;
  
  if (param_1 == (uint *)0x0) {
    bVar1 = false;
  }
  else if (((uint)param_1 & 1) == 1) {
    bVar1 = false;
  }
  else {
    bVar1 = (*param_1 & 1) == 0;
  }
  return bVar1;
}



// Function: FUN_00001a30 at 00001a30
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001a5c at 00001a5c
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001a5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001a94 at 00001a94
// Size: 18 bytes

void FUN_00001a94(void)

{
  FUN_00001a5c();
  return;
}



// Function: FUN_00001aa6 at 00001aa6
// Size: 18 bytes

void FUN_00001aa6(void)

{
  FUN_00001a5c();
  return;
}



// Function: FUN_00001ab8 at 00001ab8
// Size: 18 bytes

void FUN_00001ab8(void)

{
  FUN_00001a5c();
  return;
}



// Function: FUN_00001aca at 00001aca
// Size: 10 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001aca(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001adc at 00001adc
// Size: 54 bytes

bool FUN_00001adc(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = func_0x000072b0(param_1);
  sVar2 = func_0x000072b0((short)param_1);
  return sVar2 < sVar1;
}



// Function: FUN_00001b12 at 00001b12
// Size: 44 bytes

int FUN_00001b12(undefined4 param_1)

{
  int iVar1;
  
  if ((param_1._0_2_ < 0x41) || (0x5a < param_1._0_2_)) {
    iVar1 = (int)param_1._0_2_;
  }
  else {
    iVar1 = param_1._0_2_ + 0x20;
  }
  return iVar1;
}



// Function: FUN_00001b3e at 00001b3e
// Size: 6 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001b3e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001b5a at 00001b5a
// Size: 10 bytes

void FUN_00001b5a(void)

{
  return;
}



// Function: FUN_00001b64 at 00001b64
// Size: 20 bytes

void FUN_00001b64(undefined4 param_1)

{
  func_0x00007258(param_1);
  return;
}



// Function: FUN_00001c0c at 00001c0c
// Size: 122 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c0c(undefined1 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined1 auStack_66 [16];
  undefined1 auStack_56 [82];
  
  FUN_000012cc((short)auStack_56);
  if (_DAT_00025b46 == 0) {
    FUN_00001b64(param_3);
    if (_DAT_00025b46 == 0) {
      func_0x00007258(param_3,param_2,param_1);
      return;
    }
  }
  FUN_0000198e((char)auStack_66);
  func_0x00007258(param_3,(short)**(undefined4 **)(_DAT_fffff8e8 + 0x1c) + 2);
  return;
}



// Function: FUN_00001f1a at 00001f1a
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001f1a(undefined4 param_1,undefined2 *param_2)

{
  undefined1 auStack_16 [10];
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_c = *param_2;
  local_a = param_2[1];
  local_8 = param_2[2];
  local_6 = param_2[3];
  FUN_000012cc(auStack_16);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002000 at 00002000
// Size: 74 bytes

int FUN_00002000(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_2;
  if (param_1 < param_2) {
    piVar1 = &local_8;
  }
  else {
    piVar1 = &local_c;
  }
  local_14 = param_3;
  local_10 = *piVar1;
  if (*piVar1 < param_3) {
    piVar1 = &local_10;
  }
  else {
    piVar1 = &local_14;
  }
  return *piVar1;
}



// Function: FUN_0000204a at 0000204a
// Size: 18 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000204a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000207c at 0000207c
// Size: 192 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000207c(ushort *param_1)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_000019b6(_DAT_fffff8e8);
  if (cVar1 == '\0') {
    sVar2 = 0;
    if ((*param_1 & 0x8000) != 0) {
      sVar2 = 4;
    }
    if ((param_1[1] & 0x8000) != 0) {
      sVar2 = sVar2 + 2;
    }
    if ((param_1[2] & 0x8000) != 0) {
      sVar2 = sVar2 + 1;
    }
    switch(sVar2) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = func_0x00005770(_DAT_fffff8e8 + 0x2a,param_1);
  if (cVar1 == '\0') {
    return;
  }
  func_0x00005768(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002154 at 00002154
// Size: 192 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002154(ushort *param_1)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_000019b6(_DAT_fffff8e8);
  if (cVar1 == '\0') {
    sVar2 = 0;
    if ((*param_1 & 0x8000) != 0) {
      sVar2 = 4;
    }
    if ((param_1[1] & 0x8000) != 0) {
      sVar2 = sVar2 + 2;
    }
    if ((param_1[2] & 0x8000) != 0) {
      sVar2 = sVar2 + 1;
    }
    switch(sVar2) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = func_0x00005770(_DAT_fffff8e8 + 0x24,param_1);
  if (cVar1 == '\0') {
    return;
  }
  func_0x00005768(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000222c at 0000222c
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000222c(undefined2 *param_1)

{
  *param_1 = *(undefined2 *)(_DAT_fffff8e8 + 0x44);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(_DAT_fffff8e8 + 0x46);
  param_1[2] = *(undefined2 *)(_DAT_fffff8e8 + 0x4a);
  FUN_00001976(param_1 + 3);
  return;
}



// Function: FUN_0000226a at 0000226a
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000226a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000022d8 at 000022d8
// Size: 108 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022d8(short *param_1)

{
  short local_a;
  short local_8;
  short local_6;
  
  if (*(short *)(_DAT_fffff8e8 + 0x44) != *param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(_DAT_fffff8e8 + 0x46) != *(char *)(param_1 + 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(_DAT_fffff8e8 + 0x4a) != param_1[2]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_a = param_1[3];
  local_8 = param_1[4];
  local_6 = param_1[5];
  FUN_00002154(&local_a);
  return;
}



// Function: FUN_00002378 at 00002378
// Size: 30 bytes

void FUN_00002378(undefined4 param_1)

{
  if (param_1._0_1_ == '\0') {
    uRam00000b9e = 0;
  }
  else {
    uRam00000b9e = 0xff;
  }
  return;
}



// Function: FUN_00002396 at 00002396
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002396(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000023ba at 000023ba
// Size: 36 bytes

bool FUN_000023ba(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x000076f0(param_1,param_2,(int)param_3._0_2_);
  return iVar1 == 0;
}



// Function: FUN_000023de at 000023de
// Size: 30 bytes

undefined1 * FUN_000023de(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = 8;
  puVar2 = param_2;
  do {
    *puVar2 = *param_1;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return param_2;
}



// Function: FUN_000023fc at 000023fc
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000023fc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002462 at 00002462
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002462(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_0000249a at 0000249a
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000249a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_000024dc at 000024dc
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000024dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_00002514 at 00002514
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002514(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_00002546 at 00002546
// Size: 24 bytes

void FUN_00002546(void)

{
  FUN_00002462(0x434f4445);
  return;
}



// Function: FUN_0000255e at 0000255e
// Size: 71 bytes

undefined1 FUN_0000255e(int *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    if ((param_1 == DAT_00000330) || (param_1 == DAT_00000328)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// Function: FUN_000025a6 at 000025a6
// Size: 37 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025a6(int param_1,undefined4 param_2)

{
  char cVar2;
  int iVar1;
  int *piVar3;
  int iStack_c;
  int iStack_8;
  
  DAT_00025adc = 1;
  if (DAT_00025ade == '\0') {
    cVar2 = FUN_0000255e(_DAT_00025ad4);
    if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iStack_c = param_1;
    iVar1 = FUN_00002f6e();
    iStack_8 = (_DAT_00025ae0 - iVar1) + -8;
    if (iStack_8 < iStack_c) {
      piVar3 = &iStack_8;
    }
    else {
      piVar3 = &iStack_c;
    }
    iVar1 = *piVar3;
    if (0 < iVar1) {
      cVar2 = FUN_0000255e(_DAT_00025ad8);
      if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_2._0_1_ == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1 < iVar1) {
        DAT_00025adc = 0;
        DAT_00025ade = '\0';
      }
      if (param_2._0_1_ == '\0') {
        if (*_DAT_00025ad4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        cVar2 = FUN_0000255e(_DAT_00025ad4);
        if (cVar2 != '\0') {
          halt_baddata();
        }
      }
      if ((*_DAT_00025ad4 != 0) && (param_2._0_1_ == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}



// Function: FUN_000025d0 at 000025d0
// Size: 216 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025d0(void)

{
  char cVar2;
  int iVar1;
  char unaff_D5b;
  int unaff_D6;
  int *piVar3;
  char *unaff_A4;
  int unaff_A6;
  bool in_NF;
  
  *unaff_A4 = -!in_NF;
  cVar2 = FUN_0000255e();
  if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_A6 + -8) = unaff_D6;
  iVar1 = FUN_00002f6e();
  iVar1 = (_DAT_00025ae0 - iVar1) + -8;
  *(int *)(unaff_A6 + -4) = iVar1;
  if (iVar1 < *(int *)(unaff_A6 + -8)) {
    piVar3 = (int *)(unaff_A6 + -4);
  }
  else {
    piVar3 = (int *)(unaff_A6 + -8);
  }
  iVar1 = *piVar3;
  if (0 < iVar1) {
    cVar2 = FUN_0000255e();
    if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_D5b == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_D6 < iVar1) {
      DAT_00025adc = 0;
      DAT_00025ade = 0;
    }
    if (unaff_D5b == '\0') {
      if (*_DAT_00025ad4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = FUN_0000255e();
      if (cVar2 != '\0') {
        halt_baddata();
      }
    }
    if ((*_DAT_00025ad4 != 0) && (unaff_D5b == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// Function: FUN_00002640 at 00002640
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002640(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026d2 at 000026d2
// Size: 84 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000026d2(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_00025add;
  DAT_00025add = 1;
  FUN_000025a6(0x7fffffff);
  if (*_DAT_00025ad8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_00025add = uVar1;
  return;
}



// Function: FUN_00002728 at 00002728
// Size: 20 bytes

undefined1 FUN_00002728(void)

{
  FUN_000026d2();
  return DAT_00025adc;
}



// Function: FUN_0000273c at 0000273c
// Size: 32 bytes

void FUN_0000273c(void)

{
  char cVar1;
  
  cVar1 = FUN_00002728();
  if (cVar1 == '\0') {
    FUN_0000079e();
  }
  return;
}



// Function: FUN_0000275c at 0000275c
// Size: 32 bytes

void FUN_0000275c(void)

{
  char cVar1;
  
  cVar1 = FUN_00002bda();
  if (cVar1 != '\0') {
    FUN_0000079e();
  }
  return;
}



// Function: FUN_0000277c at 0000277c
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000277c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = _DAT_00025ae0;
  *param_2 = _DAT_00025ae4;
  return;
}



// Function: FUN_00002798 at 00002798
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00002798(undefined4 param_1)

{
  if (param_1._0_2_ < 2) {
    return 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000027fe at 000027fe
// Size: 154 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000027fe(short *param_1)

{
  short sVar1;
  int unaff_A5;
  
  if (*(char *)(unaff_A5 + -0x6ff) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x6ff) = 1;
    _DAT_00025afe = 0;
  }
  if (*(char *)(unaff_A5 + -0x700) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x700) = 1;
    _DAT_00025b02 = 0;
  }
  if (_DAT_00025afe != 0) {
    if ((_DAT_00025afe < (int)param_1) && ((int)param_1 < _DAT_00025b02)) {
      sVar1 = 1;
    }
    else {
      if ((*param_1 == 0x4ef9) &&
         ((_DAT_00025afe < *(int *)(param_1 + 1) && (*(int *)(param_1 + 1) < _DAT_00025b02)))) {
        return 1;
      }
      if ((*param_1 == 0x4ef9) || (*param_1 == -0x5610)) {
        sVar1 = param_1[3];
      }
      else {
        sVar1 = 0;
      }
    }
    return sVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000028c0 at 000028c0
// Size: 334 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000028c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar5;
  int iVar4;
  int iVar6;
  int **ppiVar7;
  undefined1 *puVar8;
  int aiStack_34 [4];
  undefined2 uStack_24;
  undefined1 local_22;
  undefined1 uStack_21;
  int *local_20;
  int local_8;
  
  uVar2 = uRam00000904;
  ppiVar7 = (int **)&stack0xffffffe4;
  iVar6 = 0;
  if (DAT_00025afc == '\0') {
    DAT_00025afc = 1;
    if (DAT_00025add == '\0') {
      local_20 = _DAT_00025ad4;
      uStack_24 = 0;
      local_22 = 0x28;
      uStack_21 = 0xf8;
      cVar5 = FUN_0000255e();
      if (cVar5 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    local_20 = &local_8;
    local_22 = 0;
    uStack_24 = 0x2920;
    iVar4 = FUN_00002f6e();
    uStack_24 = SUB42(_DAT_00025ad4,0);
    cVar5 = FUN_0000255e();
    ppiVar7 = (int **)&stack0xffffffe4;
    if (cVar5 != '\0') {
      uStack_24 = (undefined2)((uint)_DAT_00025ad4 >> 0x10);
      local_22 = (undefined1)((uint)_DAT_00025ad4 >> 8);
      uStack_21 = SUB41(_DAT_00025ad4,0);
      func_0x000075d0();
      iVar1 = CONCAT31(CONCAT21(uStack_24,local_22),uStack_21);
      ppiVar7 = &local_20;
      if (_DAT_00025ae0 < iVar1 + iVar4 + 8) {
        DAT_00025ade = 0;
        local_22 = 1;
        uStack_24 = (undefined2)iVar1;
        FUN_000025a6();
        piVar3 = _DAT_00025ad4;
        if (*_DAT_00025ad4 == 0) {
          iVar6 = 1;
          ppiVar7 = &local_20;
        }
        else {
          func_0x000075d0();
          ppiVar7 = (int **)&uStack_24;
          if ((int)piVar3 < iVar1) {
            iVar6 = 1;
            ppiVar7 = (int **)&uStack_24;
          }
        }
      }
    }
    if (((iVar6 == 0) && (local_8 != 0)) && ((DAT_00025add == '\0' || (*_DAT_00025ad4 == 0)))) {
      puVar8 = (undefined1 *)ppiVar7;
      if (_DAT_00025acc != (code *)0x0) {
        puVar8 = (undefined1 *)((int)ppiVar7 + -4);
        *(int *)((int)ppiVar7 + -4) = local_8;
        *(undefined4 *)((int)ppiVar7 + -8) = 0x29ce;
        (*_DAT_00025acc)();
      }
      *(int *)(puVar8 + -8) = local_8;
      *(undefined4 *)(puVar8 + -0xc) = 0x29da;
      func_0x000075d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar6 == 0) {
      *(undefined4 *)((int)ppiVar7 + -4) = _DAT_00025ad8;
      *(undefined4 *)((int)ppiVar7 + -8) = 0x2a18;
      cVar5 = FUN_0000255e();
      if (cVar5 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    DAT_00025afc = '\0';
  }
  *(int *)((int)ppiVar7 + 0x24) = iVar6;
  return uVar2;
}



// Function: FUN_00002a68 at 00002a68
// Size: 50 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00002a68(void)

{
  int unaff_A5;
  
  if ((unaff_A5 == iRam00000904) && (DAT_00025af8 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_00001b3e();
  }
  return iRam00000904;
}



// Function: FUN_00002a9c at 00002a9c
// Size: 78 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00002a9c(void)

{
  int unaff_A5;
  
  if (unaff_A5 != iRam00000904) {
    DAT_00025af8 = 0;
    return iRam00000904;
  }
  DAT_00025af8 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_00002bda at 00002bda
// Size: 34 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00002bda(void)

{
  FUN_000026d2();
  return *_DAT_00025ad8 == 0;
}



// Function: FUN_00002bfc at 00002bfc
// Size: 16 bytes

void FUN_00002bfc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002c68();
}



// Function: FUN_00002c32 at 00002c32
// Size: 16 bytes

void FUN_00002c32(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002c68();
}



// Function: FUN_00002c68 at 00002c68
// Size: 62 bytes

char FUN_00002c68(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = DAT_00025add;
  if ((param_1._0_1_ != DAT_00025add) && (DAT_00025add = param_1._0_1_, param_1._0_1_ != '\0')) {
    FUN_000025a6(0x7fffffff);
  }
  return cVar1;
}



// Function: FUN_00002ca6 at 00002ca6
// Size: 14 bytes

void FUN_00002ca6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002c68();
}



// Function: FUN_00002cde at 00002cde
// Size: 30 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002cde(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002d20 at 00002d20
// Size: 60 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002d20(void)

{
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_c = &stack0x00000004;
  local_8 = &local_10;
  FUN_00002fbe(&DAT_00001eb8,&local_c);
  if (local_10 == 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002d64 at 00002d64
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002d64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002daa at 00002daa
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002daa(undefined4 param_1,undefined4 param_2)

{
  FUN_00002d64(_DAT_00025abe,param_1,param_2);
  if (_DAT_00025ab4 != 0) {
    FUN_00002d64(_DAT_00025ab4,param_1,param_2);
  }
  FUN_00002d64(_DAT_00025ab0,param_1,param_2);
  if (_DAT_00025ab8 != 0) {
    FUN_00002d64(_DAT_00025ab8,param_1,param_2);
  }
  return;
}



// Function: FUN_00002e22 at 00002e22
// Size: 14 bytes

void FUN_00002e22(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00002c68();
}



// Function: FUN_00002e50 at 00002e50
// Size: 32 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e50(undefined4 param_1,undefined4 param_2)

{
  _DAT_00025ae0 = param_1;
  _DAT_00025ae4 = param_2;
  DAT_00025ade = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002e7c at 00002e7c
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00002e7c(undefined4 param_1)

{
  uint uVar1;
  byte bStack_c;
  
  if (param_1._2_1_ == '\0') {
    uVar1 = (int)param_1._0_2_ - 1;
    *(undefined1 *)(*_DAT_00025ac6 + uVar1) = 0;
  }
  else {
    *(undefined1 *)(*_DAT_00025ac6 + param_1._0_2_ + -1) = 1;
    uVar1 = FUN_00002798();
    if ((char)uVar1 == '\0') {
      bStack_c = (byte)((uint)param_1 >> 0x18);
      FUN_000030e0();
      uVar1 = (uint)bStack_c;
      if (bStack_c == 0) {
        uVar1 = FUN_0000079e(0);
      }
    }
  }
  return uVar1;
}



// Function: FUN_00002ee4 at 00002ee4
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002ee4(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002f6e at 00002f6e
// Size: 80 bytes

undefined4 FUN_00002f6e(undefined8 param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 *local_14 [2];
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_14[0] = &param_1;
  local_c = &local_18;
  local_8 = &local_1c;
  *param_1._2_4_ = 0;
  local_18 = 0;
  local_1c = uRam000002aa;
  FUN_00002daa(&DAT_00001ed8,local_14);
  return local_18;
}



// Function: FUN_00002fbe at 00002fbe
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fbe(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00001b3e();
}



// Function: FUN_00002fea at 00002fea
// Size: 102 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fea(void)

{
  int *piVar1;
  short sVar2;
  
  sVar2 = 0;
  while( true ) {
    if (_DAT_00025afa <= sVar2) {
      return;
    }
    if ((((*(char *)(*_DAT_00025ac6 + (int)sVar2) == '\0') &&
         (*(char *)(*_DAT_00025ac2 + (int)sVar2) != '\0')) &&
        (piVar1 = *(int **)(*_DAT_00025abe + sVar2 * 4), piVar1 != (int *)0x0)) && (*piVar1 != 0))
    break;
    sVar2 = sVar2 + 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003062 at 00003062
// Size: 58 bytes

void FUN_00003062(void)

{
  int unaff_A5;
  int local_8;
  
  if (DAT_00025aca != '\0') {
    local_8 = sRam00000934 + unaff_A5;
    FUN_00002fbe(&LAB_00001ee0,&local_8);
  }
  return;
}



// Function: FUN_0000309c at 0000309c
// Size: 40 bytes

void FUN_0000309c(void)

{
  int in_stack_00000000;
  undefined4 local_22;
  
  DAT_000030ca = *(undefined2 *)(in_stack_00000000 + 4);
  local_22 = (code *)CONCAT22(*(undefined2 *)(in_stack_00000000 + 4),local_22._2_2_);
  FUN_00002a9c();
                    /* WARNING: Could not recover jumptable at 0x000030c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_22)();
  return;
}



// Function: FUN_000030e0 at 000030e0
// Size: 72 bytes

void FUN_000030e0(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_24;
  char local_20;
  
  FUN_00002d20();
  local_20 = (char)((uint)param_1 >> 0x18);
  if (local_20 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0000313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  local_24 = (code *)CONCAT22(param_1._0_2_,0x30f4);
  DAT_00003122 = param_1._0_2_;
  FUN_00002a9c();
                    /* WARNING: Could not recover jumptable at 0x0000311a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_24)();
  return;
}



// Function: FUN_0000318c at 0000318c
// Size: 44 bytes

void FUN_0000318c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 local_c;
  
  local_c = CONCAT22(param_2._0_2_,param_2._0_2_);
  uVar1 = FUN_000015ae();
  local_c = CONCAT13(uVar1,local_c._1_3_);
  func_0x000075d8();
  *(undefined4 *)(param_1 + 2) = local_c;
  return;
}



// Function: FUN_000031b8 at 000031b8
// Size: 46 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031b8(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_00025a12;
  if (_DAT_00025a12 != param_1) {
    for (; (iVar1 != 0 && (*(int *)(iVar1 + 10) != param_1)); iVar1 = *(int *)(iVar1 + 10)) {
    }
  }
  return;
}



// Function: FUN_000031e6 at 000031e6
// Size: 50 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000031e6(int param_1)

{
  int iVar1;
  
  for (iVar1 = _DAT_00025a12; (iVar1 != 0 && (iVar1 != param_1)); iVar1 = *(int *)(iVar1 + 10)) {
  }
  return;
}



// Function: FUN_00003218 at 00003218
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003218(undefined2 *param_1)

{
  undefined1 uVar1;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined2 *local_10;
  
  if (*(int *)(param_1 + 1) != 0) {
    local_10 = param_1;
    local_14 = 0x3232;
    FUN_000031e6();
    puVar2 = (undefined4 *)&stack0xfffffff4;
    if (extraout_A0 == 0) {
      local_10 = *(undefined2 **)(param_1 + 1);
      local_14 = CONCAT22(*param_1,*param_1);
      uVar1 = FUN_000015ae();
      puVar2 = &local_14;
      local_14 = CONCAT13(uVar1,local_14._1_3_);
      func_0x000075e0();
    }
    else {
      *(undefined4 *)(extraout_A0 + 2) = *(undefined4 *)(param_1 + 1);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)(param_1 + 3) != 0) {
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if (param_1 == _DAT_00025a12) {
      _DAT_00025a12 = *(undefined2 **)(param_1 + 5);
    }
    else {
      *(undefined2 **)((int)puVar2 + -4) = param_1;
      *(undefined4 *)((int)puVar2 + -8) = 0x3284;
      FUN_000031b8();
      if (extraout_A0_00 != 0) {
        *(undefined4 *)(extraout_A0_00 + 10) = *(undefined4 *)(param_1 + 5);
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// Function: FUN_000032a0 at 000032a0
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000032a0(void)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = uRam00000904;
  cVar2 = FUN_0000160a();
  if (cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar1;
}



// Function: FUN_000032d0 at 000032d0
// Size: 32 bytes

void FUN_000032d0(undefined2 *param_1,undefined4 param_2)

{
  *param_1 = 0x4ef9;
  *(undefined4 *)(param_1 + 1) = param_2;
  FUN_000032a0();
  return;
}



// Function: FUN_000032f0 at 000032f0
// Size: 32 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000032f0(void)

{
  while (_DAT_00025a12 != 0) {
    FUN_00003218(_DAT_00025a12);
  }
  return;
}



// Function: FUN_00003310 at 00003310
// Size: 56 bytes

void FUN_00003310(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  *param_3 = 0x2f17;
  param_3[1] = 0x2f7c;
  *(undefined4 *)(param_3 + 2) = param_2;
  param_3[4] = 4;
  param_3[5] = 0x4ef9;
  *(undefined4 *)(param_3 + 6) = param_1;
  FUN_000032a0();
  return;
}



// Function: FUN_00003348 at 00003348
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003348(void)

{
  if ((DAT_00025816 == '\0') && (DAT_00025810 == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00003374 at 00003374
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003374(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003390 at 00003390
// Size: 50 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003390(void)

{
  undefined1 auStack_4e [74];
  
  FUN_000011d4(auStack_4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



