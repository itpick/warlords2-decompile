// Warlords II - Decompiled 68k Code
// Segment: CODE_014
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000058 at 00000058
// Size: 64 bytes

undefined4 FUN_00000058(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_A0;
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x00004b60(param_1 + 0x10);
    uVar1 = FUN_00001d20(*(undefined4 *)(param_1 + 0x22));
    *(undefined4 *)(param_1 + 0x22) = extraout_A0;
    if (0 < param_2._0_2_) {
      uVar1 = func_0x000073c8(param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00000098 at 00000098
// Size: 86 bytes

/* WARNING: Control flow encountered bad instruction data */

bool FUN_00000098(int param_1,undefined2 *param_2)

{
  char cVar1;
  
  if (DAT_00025b11 == '\0') {
    *param_2 = 1;
    cVar1 = *(char *)(param_1 + 0x28);
    *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) == '\0';
    return cVar1 == '\0';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000266 at 00000266
// Size: 64 bytes

/* WARNING: Control flow encountered bad instruction data */

char * FUN_00000266(char *param_1,undefined4 param_2)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0 < param_2._0_2_) {
      param_1 = (char *)func_0x000073c8(param_1);
    }
  }
  return param_1;
}



// Function: FUN_000002a8 at 000002a8
// Size: 44 bytes

void FUN_000002a8(undefined4 param_1,ushort *param_2)

{
  *param_2 = *param_2 >> 1;
  param_2[1] = param_2[1] >> 1;
  param_2[2] = param_2[2] >> 1;
  return;
}



// Function: FUN_0000035c at 0000035c
// Size: 318 bytes

int FUN_0000035c(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x3b0))();
  if ((char)iVar2 == '\0') {
    if (param_2._0_1_ == 0) {
      *(undefined1 *)((int)param_1 + 0xb6) = *(undefined1 *)(param_1 + 0x20);
      iVar2 = (**(code **)(*param_1 + 0x3a8))();
    }
    else if (param_2._0_1_ == 1) {
      cVar3 = (**(code **)(*param_1 + 0x2a0))(param_1,param_4._2_4_);
      if (cVar3 == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x3a8))();
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x3a8))();
      }
    }
    else {
      iVar2 = param_2._0_1_ - 2;
      if ((iVar2 == 0) &&
         (iVar2 = (**(code **)(*param_1 + 0x2a0))(param_1,param_4._2_4_), (char)iVar2 != '\0')) {
        sVar1 = *(short *)(param_1 + 0x2d);
        if (sVar1 == 1) {
          if (*(char *)(param_1 + 0x20) != '\0') {
            (**(code **)(*param_1 + 0x3a8))();
          }
        }
        else if (sVar1 == 2) {
          (**(code **)(*param_1 + 0x3a8))();
        }
        else if ((sVar1 == 3) && (*(char *)(param_1 + 0x20) == '\0')) {
          (**(code **)(*param_1 + 0x3a8))();
        }
        iVar2 = (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x1f],param_1,0);
      }
    }
  }
  return iVar2;
}



// Function: FUN_0000049a at 0000049a
// Size: 112 bytes

void FUN_0000049a(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  
  if (param_2 - 0x14U < 0x761) {
    sVar2 = (short)(param_2 - 0x14U);
    if (SBORROW2(sVar2,10) == (int)((uint)(ushort)(sVar2 - 10U) << 0x10) < 0) {
      uVar1 = sVar2 - 0x75a;
      if (SBORROW2(sVar2 - 10U,0x750) == (int)((uint)uVar1 << 0x10) < 0) {
        if (uVar1 == 0) {
          func_0x00005ea8(param_1);
          return;
        }
        if (SBORROW2(uVar1,6) == (int)((uint)(ushort)(sVar2 - 0x760) << 0x10) < 0) {
          func_0x00005e18(param_1);
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 0x80) != 0) {
      (**(code **)(**(int **)(param_1 + 0x80) + 0x164))();
    }
  }
  func_0x00005bc0(param_1,param_2);
  return;
}



// Function: FUN_0000050a at 0000050a
// Size: 234 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000050a(int param_1)

{
  char cVar1;
  int iVar2;
  
  func_0x00005838((char)param_1);
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x80) + 0x167) == '\0') {
      cVar1 = '\x01';
    }
    else {
      cVar1 = *(char *)(*(int *)(param_1 + 0x80) + 0x166);
    }
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x92) != '\0')) {
      FUN_000026b0(0x24);
    }
  }
  if (*(char *)(_DAT_000297f4 + 0x91) == '\0') {
    FUN_0000086c((short)param_1,0x774);
    if ((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
       (*(char *)(param_1 + 0x92) == '\0')) {
      FUN_0000086c((short)param_1,0x76e);
    }
  }
  else {
    FUN_000026b0(1);
    for (iVar2 = 10; iVar2 < 0x14; iVar2 = iVar2 + 1) {
      FUN_000026b0((short)iVar2);
    }
    for (iVar2 = 0x14; iVar2 < 0x1e; iVar2 = iVar2 + 1) {
      FUN_000026b0((short)iVar2);
    }
  }
  return;
}



// Function: FUN_000005f4 at 000005f4
// Size: 74 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000005f4(int *param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  uVar1 = *(undefined2 *)(_DAT_000297f4 + 0x50);
  *(undefined2 *)(_DAT_000297f4 + 0x50) = 0x40;
  for (sVar2 = 0; sVar2 < 10; sVar2 = sVar2 + 1) {
    (**(code **)(*param_1 + 0x184))();
  }
  *(undefined2 *)(_DAT_000297f4 + 0x50) = uVar1;
  return;
}



// Function: FUN_0000063e at 0000063e
// Size: 118 bytes

void FUN_0000063e(int *param_1,int *param_2)

{
  char cVar1;
  undefined2 extraout_A0w;
  undefined2 uVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 0x8c))();
  if (cVar1 == '\0') {
    uVar3 = 0x66c;
    (**(code **)(*param_1 + 0x248))();
    FUN_000026c0(*(undefined2 *)(param_2 + 8),param_2[5],uVar3);
    uVar2 = extraout_A0w;
    func_0x00006ec0(extraout_A0w);
    (**(code **)(*param_1 + 0x240))((short)param_1,uVar2);
  }
  else {
    func_0x00005828(param_1,param_2);
  }
  return;
}



// Function: FUN_000006b4 at 000006b4
// Size: 196 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000006b4(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x178))();
  if (cVar1 != '\0') {
    FUN_00003972();
  }
  cVar1 = (**(code **)(*param_1 + 400))();
  if ((((cVar1 == '\0') && (param_1[0x20] != 0)) && (_DAT_00027fb4 != 0)) &&
     (*(char *)((int)param_1 + 0x92) != '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (**(code **)(*param_1 + 400))();
  if (((cVar1 == '\0') && (param_1[0x20] != 0)) &&
     ((_DAT_00027fb4 != 0 && (*(char *)((int)param_1 + 0x93) != '\0')))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (**(code **)(*param_1 + 400))();
  if (cVar1 != '\0') {
    if (_DAT_00027fb8 != 0) {
      *(undefined2 *)(_DAT_00027fb8 + 0xac) = 0xffff;
    }
    if (_DAT_00027fc0 != 0) {
      *(undefined2 *)(_DAT_00027fc0 + 0xa2) = 0xffff;
    }
  }
  FUN_00003770((short)param_1);
  return;
}



// Function: FUN_000007e2 at 000007e2
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000007e2(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    cVar1 = FUN_00001d60(*(undefined4 *)(param_1 + 0x8c));
    if (cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (**(int **)(param_1 + 0x8c) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}



// Function: FUN_0000086c at 0000086c
// Size: 278 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000086c(undefined1 param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  int *extraout_A0_02;
  
  iVar1 = FUN_000026b0((char)param_2);
  if (_DAT_00027fc8 != (int *)0x0) {
    (**(code **)(*_DAT_00027fc8 + 0x188))((short)_DAT_00027fc8,0x6b);
    iVar1 = (**(code **)(*_DAT_00027fc8 + 0x188))(_DAT_00027fc8,0x616b);
    for (sVar2 = 0; sVar2 < 4; sVar2 = sVar2 + 1) {
      iVar1 = FUN_000007e2(param_1);
      if (param_2 == iVar1) {
        if ((extraout_A0 != (int *)0x0) &&
           ((**(code **)(*extraout_A0 + 0x188))((short)extraout_A0,(char)sVar2 + '1'),
           extraout_A0_01 != (int *)0x0)) {
          (**(code **)(*extraout_A0_01 + 0x3a0))();
        }
        if (extraout_A0_00 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*extraout_A0_00 + 0x188))((short)extraout_A0_00,(char)sVar2 + '1');
        if (extraout_A0_02 == (int *)0x0) {
          return 0;
        }
        iVar1 = (**(code **)(*extraout_A0_02 + 0x3a0))();
        return iVar1;
      }
    }
  }
  return iVar1;
}



// Function: FUN_00000982 at 00000982
// Size: 108 bytes

/* WARNING: Control flow encountered bad instruction data */

byte FUN_00000982(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_4a [70];
  
  if ((*(byte *)(param_2 + 0x1e) & 0x10) == 0) {
    puVar2 = *(undefined1 **)(param_2 + 0x12);
    puVar3 = auStack_4a;
    for (iVar1 = **(byte **)(param_2 + 0x12) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(byte *)(param_2 + 0x1e) & 0x10;
}



// Function: FUN_00000cca at 00000cca
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000cca(undefined4 param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 local_8;
  undefined2 local_6;
  
  if (_DAT_00027fb8 != 0) {
    *(undefined2 *)(_DAT_00027fb8 + 0xac) = 0xffff;
  }
  if (_DAT_00027fc0 != 0) {
    *(undefined2 *)(_DAT_00027fc0 + 0xa2) = 0xffff;
  }
  local_8 = *param_2;
  local_6 = param_2[1];
  func_0x000059c8(param_1,&local_8,param_3);
  return;
}



// Function: FUN_00000d22 at 00000d22
// Size: 26 bytes

void FUN_00000d22(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x16) + 0x4c))();
  return;
}



// Function: FUN_00000d3c at 00000d3c
// Size: 32 bytes

void FUN_00000d3c(undefined4 param_1,undefined4 param_2)

{
  func_0x00002430(param_1,0xffffffff,param_2);
  return;
}



// Function: FUN_00000d5c at 00000d5c
// Size: 26 bytes

void FUN_00000d5c(int param_1)

{
  FUN_00003798(*(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x2e));
  return;
}



// Function: FUN_00000d76 at 00000d76
// Size: 42 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000d76(int param_1)

{
  undefined4 extraout_A0;
  
  (**(code **)(*_DAT_000266a8 + 0x1a4))(_DAT_000266a8,*(undefined4 *)(param_1 + 0x2e));
  FUN_00003798(extraout_A0);
  return;
}



// Function: FUN_00000da0 at 00000da0
// Size: 24 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000da0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001862 at 00001862
// Size: 910 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001862(int param_1)

{
  char cVar3;
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  undefined1 local_104 [256];
  
  func_0x00004a68((char)param_1);
  if (*(char *)(_DAT_0002884c + 0x2f8d) != '\0') {
    uVar12 = 0;
    uVar7 = 0x90;
    FUN_000026b0(0x1e);
    uVar2 = 0;
    uVar5 = 0x9c;
    FUN_000026b0(0x20,uVar12);
    uVar12 = 0;
    FUN_000026b0(0x21,uVar2,uVar7);
    FUN_000026b0(0x22,uVar12,uVar5);
  }
  if ((*(char *)(param_1 + 0x166) == '\0') && (*(char *)((int)_DAT_000297f4 + 0x92) != '\0')) {
    uVar2 = 0;
    uVar8 = 0xde;
    FUN_000026b0(0x1f);
    uVar12 = 0;
    uVar7 = 0xea;
    FUN_000026b0(0x1e,uVar2);
    uVar2 = 0;
    uVar5 = 0xf6;
    FUN_000026b0(0x20,uVar12,uVar8);
    uVar12 = 0;
    FUN_000026b0(0x21,uVar2,uVar7);
    FUN_000026b0(0x24,uVar12,uVar5);
  }
  if (*(char *)((int)_DAT_000297f4 + 0x91) == '\0') {
    local_104[0] = 0;
    uVar6 = 0;
    uVar1 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
    FUN_0000086c((char)_DAT_000297f4,0x76f);
    uVar2 = SUB42(local_104,0);
    uVar12 = 0x7da;
    if ((_DAT_00027fbc == (int *)0x0) ||
       (cVar3 = (**(code **)(*_DAT_00027fbc + 0x338))
                          ((short)_DAT_00027fbc,(char)((uint)local_104 >> 0x10),uVar1,uVar6),
       cVar3 == '\0')) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    func_0x00007658(uVar12,uVar2);
    uVar12 = (undefined2)((uint)local_104 >> 0x10);
    uVar8 = 0;
    uVar7 = 0xb0;
    FUN_000026e8(0x76f,(char)local_104);
    uVar2 = 0;
    uVar5 = (undefined1)((uint)_DAT_000297f4 >> 0x10);
    FUN_0000086c((short)_DAT_000297f4,0x770,uVar8,uVar12,uVar1);
    puVar11 = local_104;
    uVar12 = 0x7da;
    if ((_DAT_00027fc8 == (int *)0x0) ||
       (cVar3 = (**(code **)(*_DAT_00027fc8 + 0x338))
                          ((short)_DAT_00027fc8,(short)((uint)puVar11 >> 0x10),uVar5,uVar2,uVar7),
       cVar3 == '\0')) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
    func_0x00007658(uVar12,(short)puVar11);
    uVar9 = (undefined2)((uint)local_104 >> 0x10);
    uVar12 = 0;
    uVar5 = 0x10;
    FUN_000026e8(0x770,(char)local_104);
    uVar6 = 0;
    uVar1 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
    FUN_0000086c((short)_DAT_000297f4,0x71,uVar12,uVar9,uVar2);
    uVar2 = SUB42(local_104,0);
    uVar12 = 0x7da;
    if (_DAT_00027fc4 != (int *)0x0) {
      (**(code **)(*_DAT_00027fc4 + 0x338))
                ((short)_DAT_00027fc4,(char)((uint)local_104 >> 0x10),uVar1,uVar6,uVar5);
    }
    func_0x00007658(uVar12,uVar2);
    FUN_000026e8(0x71,(short)local_104);
    if (*(char *)(param_1 + 0x140) != '\0') {
      uVar2 = 0;
      uVar12 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
      FUN_0000086c((short)_DAT_000297f4,0x72);
      FUN_0000086c((short)_DAT_000297f4,0x76d,uVar12,uVar2);
      if (((*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) &&
          (*(char *)((int)_DAT_000297f4 + 0x92) == '\0')) &&
         (cVar3 = (**(code **)(*_DAT_000297f4 + 400))(), cVar3 == '\0')) {
        func_0x00004978();
        uVar5 = 0xfa;
        func_0x000048b8();
        if (_DAT_000288ac != 0) {
          uVar5 = 0x32;
          func_0x000048d8();
        }
        FUN_0000086c((short)_DAT_000297f4,0x78);
        for (sVar4 = 0; sVar4 < _DAT_00027cc2; sVar4 = sVar4 + 1) {
        }
        uVar6 = 0;
        uVar1 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
        uVar7 = 0x96;
        FUN_0000086c((short)_DAT_000297f4,0x79);
        uVar2 = 0;
        uVar12 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
        uVar10 = 0xc4;
        FUN_0000086c((short)_DAT_000297f4,0x57a,uVar1,uVar6,uVar5);
        uVar1 = 0;
        uVar5 = (undefined1)((uint)_DAT_000297f4 >> 0x10);
        uVar8 = 0xd8;
        FUN_0000086c((short)_DAT_000297f4,0x57b,uVar12,uVar2,uVar7);
        uVar2 = 0;
        uVar12 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
        uVar7 = 0xea;
        FUN_0000086c((short)_DAT_000297f4,0x57c,uVar5,uVar1,uVar10);
        uVar6 = 0;
        uVar1 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
        uVar5 = 0xfc;
        FUN_0000086c((short)_DAT_000297f4,0x57d,uVar12,uVar2,uVar8);
        uVar2 = 0;
        uVar12 = (undefined2)((uint)_DAT_000297f4 >> 0x10);
        FUN_0000086c((short)_DAT_000297f4,0x57e,uVar1,uVar6,uVar7);
        FUN_0000086c(_DAT_000297f4,0x57f,uVar12,uVar2,uVar5);
        FUN_0000086c(_DAT_000297f4,0x580);
        FUN_0000086c(_DAT_000297f4,0x581);
        FUN_0000086c(_DAT_000297f4,0x582);
      }
    }
  }
  else {
    uVar2 = 0;
    uVar5 = 0x2a;
    FUN_000026b0(0x1f);
    uVar12 = 0;
    FUN_000026b0(0x1e,uVar2);
    FUN_000026b0(0x22,uVar12,uVar5);
  }
  return;
}



// Function: FUN_00001bf0 at 00001bf0
// Size: 167 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bf0(void)

{
  FUN_0000086c(_DAT_000297f4);
  FUN_0000086c(_DAT_000297f4,0x57e);
  FUN_0000086c(_DAT_000297f4,0x57f);
  FUN_0000086c(_DAT_000297f4,0x580);
  FUN_0000086c(_DAT_000297f4,0x581);
  FUN_0000086c(_DAT_000297f4,0x582);
  return;
}



// Function: FUN_00001c98 at 00001c98
// Size: 40 bytes

void FUN_00001c98(int param_1)

{
  FUN_00001bf0(*(undefined4 *)(param_1 + 0x14a));
  (**(code **)(**(int **)(param_1 + 0x14a) + 0x160))();
  return;
}



// Function: FUN_00001cc0 at 00001cc0
// Size: 40 bytes

void FUN_00001cc0(int param_1)

{
  FUN_00001bf0(*(undefined4 *)(param_1 + 0x14e));
  (**(code **)(**(int **)(param_1 + 0x14e) + 0x160))();
  return;
}



// Function: FUN_00001ce8 at 00001ce8
// Size: 40 bytes

void FUN_00001ce8(int param_1)

{
  FUN_00001bf0(*(undefined4 *)(param_1 + 0x152));
  (**(code **)(**(int **)(param_1 + 0x152) + 0x160))();
  return;
}



// Function: FUN_00001d10 at 00001d10
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d10(int *param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar2;
  undefined4 unaff_D4;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 *extraout_A0_01;
  undefined4 *extraout_A0_02;
  undefined1 uVar5;
  
  iVar1 = *(int *)(param_3 + 0x16);
  uVar3 = SUB42(param_1,0);
  if (((((iVar1 == 0x61726d30) || (iVar1 == 0x61726d31)) || (iVar1 == 0x61726d32)) ||
      ((iVar1 == 0x61726d33 || (iVar1 == 0x61726d34)))) ||
     ((iVar1 == 0x61726d35 || ((iVar1 == 0x61726d36 || (iVar1 == 0x61726d37)))))) {
    uVar5 = 0xbe;
    func_0x000073b0(0xb0);
    if (extraout_A0_01 != (undefined4 *)0x0) {
      uVar5 = 0xd4;
      FUN_00002428((short)extraout_A0_01);
      *extraout_A0_01 = 0x1b7d2;
      *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x16);
    func_0x00002430(extraout_A0_01,0x836,uVar3,uVar5,uVar3);
    *(short *)((int)extraout_A0_01 + 0xae) = (short)uVar2 + -0x6d30;
    (**(code **)(*param_1 + 0x104))(param_1,extraout_A0_01);
  }
  else if ((((iVar1 == 0x62757431) || (iVar1 == 0x62757432)) || (iVar1 == 0x62757433)) ||
          (iVar1 == 0x62757434)) {
    uVar3 = FUN_000007e2((short)_DAT_000297f4);
    func_0x00003e20((char)param_1,uVar3);
  }
  else if (((((iVar1 == 0x63686530) || (iVar1 == 0x63686531)) ||
            ((iVar1 == 0x63686532 || ((iVar1 == 0x63686533 || (iVar1 == 0x63686534)))))) ||
           (iVar1 == 0x63686535)) || ((iVar1 == 0x63686536 || (iVar1 == 0x63686537)))) {
    func_0x00002f70();
  }
  else if (iVar1 == 0x64656c65) {
    uVar5 = 10;
    func_0x000073b0(0x104);
    if (extraout_A0_00 != (undefined4 *)0x0) {
      uVar5 = 0x20;
      FUN_00002428((short)extraout_A0_00);
      *extraout_A0_00 = 0x1b672;
      *(undefined2 *)((int)extraout_A0_00 + 0x2e) = 0xffff;
      *(undefined2 *)(extraout_A0_00 + 0xc) = 0xffff;
      *(undefined2 *)((int)extraout_A0_00 + 0x102) = 0;
    }
    func_0x00002430(extraout_A0_00,0x57c,uVar3,uVar5,uVar3);
    (**(code **)(*param_1 + 0x104))(param_1,extraout_A0_00);
  }
  else {
    if (iVar1 != 0x64657365) {
      if (iVar1 == 0x6469706c) {
        func_0x00003fb0();
        return;
      }
      if (iVar1 == 0x67726f75) {
        uVar5 = 0x4a;
        func_0x000073b0(0xb0);
        if (extraout_A0_02 != (undefined4 *)0x0) {
          uVar5 = 0x60;
          FUN_00002428((short)extraout_A0_02);
          *extraout_A0_02 = 0x1b7d2;
          *(undefined2 *)((int)extraout_A0_02 + 0xae) = 0;
        }
        sVar4 = func_0x000048d8();
        if (sVar4 == 0) {
          uVar2 = 0x578;
        }
        else {
          uVar2 = 0x579;
        }
        func_0x00002430(extraout_A0_02,uVar2,uVar3,uVar5,uVar3);
        *(undefined2 *)((int)extraout_A0_02 + 0xae) = 0;
        (**(code **)(*param_1 + 0x104))(param_1,extraout_A0_02);
        return;
      }
      if (iVar1 != 0x67756172) {
        if (iVar1 == 0x68656c70) {
          FUN_00003c58();
          return;
        }
        if (iVar1 != 0x6c656176) {
          if (iVar1 == 0x6d6f7665) {
            func_0x00005ec8((char)param_1,*(undefined2 *)(_DAT_000288ac + 0x14));
            return;
          }
          if (iVar1 != 0x6e657874) {
            if (iVar1 != 0x70617468) {
              FUN_00003868(param_1,param_2,(char)param_3,param_4);
              return;
            }
            func_0x000048b0();
            return;
          }
        }
      }
    }
    iVar1 = *(int *)(param_3 + 0x16);
    if (iVar1 == 0x64657365) {
      unaff_D4 = 0x580;
    }
    else if (iVar1 == 0x67756172) {
      unaff_D4 = 0x57f;
    }
    else if (iVar1 == 0x6c656176) {
      unaff_D4 = 0x57e;
    }
    else if (iVar1 == 0x6e657874) {
      unaff_D4 = 0x57d;
    }
    uVar5 = 0x74;
    func_0x000073b0(0x1da);
    if (extraout_A0 != (undefined4 *)0x0) {
      uVar5 = 0x8a;
      FUN_00002428((short)extraout_A0);
      *extraout_A0 = 0x1b5c2;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x102) = 0;
      *(undefined2 *)(extraout_A0 + 0x75) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
      *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    }
    func_0x00002430(extraout_A0,unaff_D4,uVar3,uVar5,uVar3);
    *(int **)((int)extraout_A0 + 0x2e) = param_1;
    *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
    *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    (**(code **)(*param_1 + 0x104))(param_1,extraout_A0);
  }
  return;
}



// Function: FUN_00001d20 at 00001d20
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d20(void)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  int unaff_D3;
  undefined4 unaff_D4;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 *extraout_A0_01;
  undefined4 *extraout_A0_02;
  int *unaff_A2;
  int unaff_A6;
  
  iVar1 = *(int *)(unaff_D3 + 0x16);
  if (((((iVar1 == 0x61726d30) || (iVar1 == 0x61726d31)) || (iVar1 == 0x61726d32)) ||
      ((iVar1 == 0x61726d33 || (iVar1 == 0x61726d34)))) ||
     ((iVar1 == 0x61726d35 || ((iVar1 == 0x61726d36 || (iVar1 == 0x61726d37)))))) {
    func_0x000073b0(0xb0);
    if (extraout_A0_01 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0_01;
      FUN_00002428((short)extraout_A0_01);
      *extraout_A0_01 = 0x1b7d2;
      *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
    }
    uVar2 = *(undefined4 *)(unaff_D3 + 0x16);
    func_0x00002430(extraout_A0_01,0x836);
    *(short *)((int)extraout_A0_01 + 0xae) = (short)uVar2 + -0x6d30;
    (**(code **)(*unaff_A2 + 0x104))();
  }
  else if ((((iVar1 == 0x62757431) || (iVar1 == 0x62757432)) || (iVar1 == 0x62757433)) ||
          (iVar1 == 0x62757434)) {
    *(short *)(unaff_A6 + -2) = (short)*(undefined4 *)(unaff_D3 + 0x16) + -0x7431;
    FUN_000007e2((short)_DAT_000297f4);
    func_0x00003e20();
  }
  else if (((((iVar1 == 0x63686530) || (iVar1 == 0x63686531)) ||
            ((iVar1 == 0x63686532 || ((iVar1 == 0x63686533 || (iVar1 == 0x63686534)))))) ||
           (iVar1 == 0x63686535)) || ((iVar1 == 0x63686536 || (iVar1 == 0x63686537)))) {
    func_0x00002f70();
  }
  else if (iVar1 == 0x64656c65) {
    func_0x000073b0(0x104);
    if (extraout_A0_00 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0_00;
      FUN_00002428((short)extraout_A0_00);
      *extraout_A0_00 = 0x1b672;
      *(undefined2 *)((int)extraout_A0_00 + 0x2e) = 0xffff;
      *(undefined2 *)(extraout_A0_00 + 0xc) = 0xffff;
      *(undefined2 *)((int)extraout_A0_00 + 0x102) = 0;
    }
    func_0x00002430(extraout_A0_00,0x57c);
    (**(code **)(*unaff_A2 + 0x104))();
  }
  else {
    if (iVar1 != 0x64657365) {
      if (iVar1 == 0x6469706c) {
        func_0x00003fb0();
        return;
      }
      if (iVar1 == 0x67726f75) {
        func_0x000073b0(0xb0);
        if (extraout_A0_02 != (undefined4 *)0x0) {
          *(undefined4 **)(unaff_A6 + -6) = extraout_A0_02;
          FUN_00002428((short)extraout_A0_02);
          *extraout_A0_02 = 0x1b7d2;
          *(undefined2 *)((int)extraout_A0_02 + 0xae) = 0;
        }
        sVar3 = func_0x000048d8();
        if (sVar3 == 0) {
          uVar2 = 0x578;
        }
        else {
          uVar2 = 0x579;
        }
        func_0x00002430(extraout_A0_02,uVar2);
        *(undefined2 *)((int)extraout_A0_02 + 0xae) = 0;
        (**(code **)(*unaff_A2 + 0x104))();
        return;
      }
      if (iVar1 != 0x67756172) {
        if (iVar1 == 0x68656c70) {
          FUN_00003c58();
          return;
        }
        if (iVar1 != 0x6c656176) {
          if (iVar1 == 0x6d6f7665) {
            func_0x00005ec8();
            return;
          }
          if (iVar1 != 0x6e657874) {
            if (iVar1 != 0x70617468) {
              FUN_00003868();
              return;
            }
            func_0x000048b0();
            return;
          }
        }
      }
    }
    iVar1 = *(int *)(unaff_D3 + 0x16);
    if (iVar1 == 0x64657365) {
      unaff_D4 = 0x580;
    }
    else if (iVar1 == 0x67756172) {
      unaff_D4 = 0x57f;
    }
    else if (iVar1 == 0x6c656176) {
      unaff_D4 = 0x57e;
    }
    else if (iVar1 == 0x6e657874) {
      unaff_D4 = 0x57d;
    }
    func_0x000073b0(0x1da);
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0;
      FUN_00002428((short)extraout_A0);
      *extraout_A0 = 0x1b5c2;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x102) = 0;
      *(undefined2 *)(extraout_A0 + 0x75) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
      *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    }
    func_0x00002430(extraout_A0,unaff_D4);
    *(int **)((int)extraout_A0 + 0x2e) = unaff_A2;
    *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
    *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    (**(code **)(*unaff_A2 + 0x104))();
  }
  return;
}



// Function: FUN_00001d60 at 00001d60
// Size: 31 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d60(void)

{
  int iVar1;
  int in_D0;
  short sVar3;
  undefined4 uVar2;
  int unaff_D3;
  undefined4 unaff_D4;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  bool in_ZF;
  
  if ((((in_ZF) || (in_D0 == 1)) || (in_D0 == 2)) || (in_D0 == 3)) {
    *(short *)(unaff_A6 + -2) = (short)*(undefined4 *)(unaff_D3 + 0x16) + -0x7431;
    FUN_000007e2((short)_DAT_000297f4);
    func_0x00003e20();
  }
  else if (((((in_D0 == 0xf2f0ff) || (in_D0 == 0xf2f100)) ||
            ((in_D0 == 0xf2f101 || ((in_D0 == 0xf2f102 || (in_D0 == 0xf2f103)))))) ||
           (in_D0 == 0xf2f104)) || ((in_D0 == 0xf2f105 || (in_D0 == 0xf2f106)))) {
    func_0x00002f70();
  }
  else if (in_D0 == 0x1eff834) {
    func_0x000073b0(0x104);
    if (extraout_A0_00 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0_00;
      FUN_00002428((short)extraout_A0_00);
      *extraout_A0_00 = 0x1b672;
      *(undefined2 *)((int)extraout_A0_00 + 0x2e) = 0xffff;
      *(undefined2 *)(extraout_A0_00 + 0xc) = 0xffff;
      *(undefined2 *)((int)extraout_A0_00 + 0x102) = 0;
    }
    func_0x00002430(extraout_A0_00,0x57c);
    (**(code **)(*unaff_A2 + 0x104))();
  }
  else {
    if (in_D0 != 0x1efff34) {
      if (in_D0 == 0x1f3fc3b) {
        func_0x00003fb0();
        return;
      }
      if (in_D0 == 0x4fcfb44) {
        func_0x000073b0(0xb0);
        if (extraout_A0_01 != (undefined4 *)0x0) {
          *(undefined4 **)(unaff_A6 + -6) = extraout_A0_01;
          FUN_00002428((short)extraout_A0_01);
          *extraout_A0_01 = 0x1b7d2;
          *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
        }
        sVar3 = func_0x000048d8();
        if (sVar3 == 0) {
          uVar2 = 0x578;
        }
        else {
          uVar2 = 0x579;
        }
        func_0x00002430(extraout_A0_01,uVar2);
        *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
        (**(code **)(*unaff_A2 + 0x104))();
        return;
      }
      if (in_D0 != 0x4ffed41) {
        if (in_D0 == 0x5eff83f) {
          FUN_00003c58();
          return;
        }
        if (in_D0 != 0x9efed45) {
          if (in_D0 == 0xafa0234) {
            func_0x00005ec8();
            return;
          }
          if (in_D0 != 0xbf00443) {
            if (in_D0 != 0xdec0037) {
              FUN_00003868();
              return;
            }
            func_0x000048b0();
            return;
          }
        }
      }
    }
    iVar1 = *(int *)(unaff_D3 + 0x16);
    if (iVar1 == 0x64657365) {
      unaff_D4 = 0x580;
    }
    else if (iVar1 == 0x67756172) {
      unaff_D4 = 0x57f;
    }
    else if (iVar1 == 0x6c656176) {
      unaff_D4 = 0x57e;
    }
    else if (iVar1 == 0x6e657874) {
      unaff_D4 = 0x57d;
    }
    func_0x000073b0(0x1da);
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0;
      FUN_00002428((short)extraout_A0);
      *extraout_A0 = 0x1b5c2;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x102) = 0;
      *(undefined2 *)(extraout_A0 + 0x75) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
      *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    }
    func_0x00002430(extraout_A0,unaff_D4);
    *(int **)((int)extraout_A0 + 0x2e) = unaff_A2;
    *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
    *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    (**(code **)(*unaff_A2 + 0x104))();
  }
  return;
}



// Function: FUN_00001d80 at 00001d80
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d80(void)

{
  int iVar1;
  int in_D0;
  short sVar3;
  undefined4 uVar2;
  int unaff_D3;
  undefined4 unaff_D4;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  
  if ((((in_D0 == 1) || (in_D0 == 2)) || (in_D0 == 3)) ||
     (((in_D0 == 4 || (in_D0 == 5)) || ((in_D0 == 6 || (in_D0 == 7)))))) {
    func_0x00002f70();
  }
  else if (in_D0 == 0xfd0735) {
    func_0x000073b0(0x104);
    if (extraout_A0_00 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0_00;
      FUN_00002428((short)extraout_A0_00);
      *extraout_A0_00 = 0x1b672;
      *(undefined2 *)((int)extraout_A0_00 + 0x2e) = 0xffff;
      *(undefined2 *)(extraout_A0_00 + 0xc) = 0xffff;
      *(undefined2 *)((int)extraout_A0_00 + 0x102) = 0;
    }
    func_0x00002430(extraout_A0_00,0x57c);
    (**(code **)(*unaff_A2 + 0x104))();
  }
  else {
    if (in_D0 != 0xfd0e35) {
      if (in_D0 == 0x1010b3c) {
        func_0x00003fb0();
        return;
      }
      if (in_D0 == 0x40a0a45) {
        func_0x000073b0(0xb0);
        if (extraout_A0_01 != (undefined4 *)0x0) {
          *(undefined4 **)(unaff_A6 + -6) = extraout_A0_01;
          FUN_00002428((short)extraout_A0_01);
          *extraout_A0_01 = 0x1b7d2;
          *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
        }
        sVar3 = func_0x000048d8();
        if (sVar3 == 0) {
          uVar2 = 0x578;
        }
        else {
          uVar2 = 0x579;
        }
        func_0x00002430(extraout_A0_01,uVar2);
        *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
        (**(code **)(*unaff_A2 + 0x104))();
        return;
      }
      if (in_D0 != 0x40cfc42) {
        if (in_D0 == 0x4fd0740) {
          FUN_00003c58();
          return;
        }
        if (in_D0 != 0x8fcfc46) {
          if (in_D0 == 0xa071135) {
            func_0x00005ec8();
            return;
          }
          if (in_D0 != 0xafd1344) {
            if (in_D0 != 0xcf90f38) {
              FUN_00003868();
              return;
            }
            func_0x000048b0();
            return;
          }
        }
      }
    }
    iVar1 = *(int *)(unaff_D3 + 0x16);
    if (iVar1 == 0x64657365) {
      unaff_D4 = 0x580;
    }
    else if (iVar1 == 0x67756172) {
      unaff_D4 = 0x57f;
    }
    else if (iVar1 == 0x6c656176) {
      unaff_D4 = 0x57e;
    }
    else if (iVar1 == 0x6e657874) {
      unaff_D4 = 0x57d;
    }
    func_0x000073b0(0x1da);
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0;
      FUN_00002428((short)extraout_A0);
      *extraout_A0 = 0x1b5c2;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x102) = 0;
      *(undefined2 *)(extraout_A0 + 0x75) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
      *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    }
    func_0x00002430(extraout_A0,unaff_D4);
    *(int **)((int)extraout_A0 + 0x2e) = unaff_A2;
    *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
    *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    (**(code **)(*unaff_A2 + 0x104))();
  }
  return;
}



// Function: FUN_00001d88 at 00001d88
// Size: 674 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d88(void)

{
  int iVar1;
  int in_D0;
  short sVar3;
  undefined4 uVar2;
  int unaff_D3;
  undefined4 unaff_D4;
  undefined4 *extraout_A0;
  undefined4 *extraout_A0_00;
  undefined4 *extraout_A0_01;
  int *unaff_A2;
  int unaff_A6;
  bool in_ZF;
  
  if ((((in_ZF) || (in_D0 == 1)) || (in_D0 == 2)) ||
     (((in_D0 == 3 || (in_D0 == 4)) || (in_D0 == 5)))) {
    func_0x00002f70();
  }
  else if (in_D0 == 0xfd0733) {
    func_0x000073b0(0x104);
    if (extraout_A0_00 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0_00;
      FUN_00002428((short)extraout_A0_00);
      *extraout_A0_00 = 0x1b672;
      *(undefined2 *)((int)extraout_A0_00 + 0x2e) = 0xffff;
      *(undefined2 *)(extraout_A0_00 + 0xc) = 0xffff;
      *(undefined2 *)((int)extraout_A0_00 + 0x102) = 0;
    }
    func_0x00002430(extraout_A0_00,0x57c);
    (**(code **)(*unaff_A2 + 0x104))();
  }
  else {
    if (in_D0 != 0xfd0e33) {
      if (in_D0 == 0x1010b3a) {
        func_0x00003fb0();
        return;
      }
      if (in_D0 == 0x40a0a43) {
        func_0x000073b0(0xb0);
        if (extraout_A0_01 != (undefined4 *)0x0) {
          *(undefined4 **)(unaff_A6 + -6) = extraout_A0_01;
          FUN_00002428((short)extraout_A0_01);
          *extraout_A0_01 = 0x1b7d2;
          *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
        }
        sVar3 = func_0x000048d8();
        if (sVar3 == 0) {
          uVar2 = 0x578;
        }
        else {
          uVar2 = 0x579;
        }
        func_0x00002430(extraout_A0_01,uVar2);
        *(undefined2 *)((int)extraout_A0_01 + 0xae) = 0;
        (**(code **)(*unaff_A2 + 0x104))();
        return;
      }
      if (in_D0 != 0x40cfc40) {
        if (in_D0 == 0x4fd073e) {
          FUN_00003c58();
          return;
        }
        if (in_D0 != 0x8fcfc44) {
          if (in_D0 == 0xa071133) {
            func_0x00005ec8();
            return;
          }
          if (in_D0 != 0xafd1342) {
            if (in_D0 != 0xcf90f36) {
              FUN_00003868();
              return;
            }
            func_0x000048b0();
            return;
          }
        }
      }
    }
    iVar1 = *(int *)(unaff_D3 + 0x16);
    if (iVar1 == 0x64657365) {
      unaff_D4 = 0x580;
    }
    else if (iVar1 == 0x67756172) {
      unaff_D4 = 0x57f;
    }
    else if (iVar1 == 0x6c656176) {
      unaff_D4 = 0x57e;
    }
    else if (iVar1 == 0x6e657874) {
      unaff_D4 = 0x57d;
    }
    func_0x000073b0(0x1da);
    if (extraout_A0 != (undefined4 *)0x0) {
      *(undefined4 **)(unaff_A6 + -6) = extraout_A0;
      FUN_00002428((short)extraout_A0);
      *extraout_A0 = 0x1b5c2;
      *(undefined4 *)((int)extraout_A0 + 0x2e) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x102) = 0;
      *(undefined2 *)(extraout_A0 + 0x75) = 0;
      *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
      *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    }
    func_0x00002430(extraout_A0,unaff_D4);
    *(int **)((int)extraout_A0 + 0x2e) = unaff_A2;
    *(undefined2 *)((int)extraout_A0 + 0x1d6) = 0xffff;
    *(undefined2 *)(extraout_A0 + 0x76) = 0xffff;
    (**(code **)(*unaff_A2 + 0x104))();
  }
  return;
}



// Function: FUN_000020da at 000020da
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000020da(undefined2 param_1,int *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  short sVar3;
  undefined2 uVar5;
  undefined1 uVar6;
  
  if (((*(char *)(_DAT_000297f4 + 0x92) == '\0') &&
      (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) &&
     (*(char *)(_DAT_000297f4 + 0x91) == '\0')) {
    uVar6 = 0x30;
    cVar4 = (**(code **)(*param_3 + 0x88))();
    if (cVar4 == '\0') {
      iVar1 = param_2[1];
      bVar2 = false;
      uVar5 = (undefined2)(*param_2 / 0x28);
      if (1 < *(short *)((int)param_3 + 0x26)) {
        uVar6 = (undefined1)(iVar1 / 0x28);
        sVar3 = FUN_0000298e();
        if ((sVar3 == 5) || ((_DAT_000288ac != 0 && (sVar3 == 0)))) {
          func_0x00005fd8(CONCAT22((short)(iVar1 / 0x28),uVar5));
          uVar6 = 0x9e;
          FUN_00002f80();
          bVar2 = true;
        }
      }
      if (!bVar2) {
        func_0x00004798(uVar5,uVar6,param_2);
      }
    }
    else {
      func_0x00005310(param_1,(char)param_2,param_3);
    }
  }
  else {
    func_0x00001c40();
  }
  return;
}



// Function: FUN_000021c6 at 000021c6
// Size: 234 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000021c6(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  if (param_3 == 0x834) {
    *(undefined2 *)(param_1 + 0x154) = 0;
    if (_DAT_000288ac != (short *)0x0) {
      sVar4 = 8;
      while (sVar1 = sVar4 + -1, sVar4 != 0) {
        sVar4 = sVar1;
        if (*(int *)(sVar1 * 4 + 0x288b4) != 0) {
          *(undefined4 *)(*(short *)(param_1 + 0x154) * 4 + param_1 + 0x134) =
               *(undefined4 *)(sVar1 * 4 + 0x288b4);
          sVar2 = 10;
          puVar5 = *(undefined2 **)(sVar1 * 4 + 0x288b4);
          puVar6 = (undefined2 *)(*(short *)(param_1 + 0x154) * 0x16 + param_1 + 0x84);
          do {
            *puVar6 = *puVar5;
            sVar2 = sVar2 + -1;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (sVar2 != -1);
          *(short *)(param_1 + 0x154) = *(short *)(param_1 + 0x154) + 1;
        }
      }
    }
    func_0x00005fd8(param_6._2_2_);
  }
  (**(code **)(*param_4 + 0x2fc))();
  FUN_000024a8(param_1,param_3,param_2);
  *(short *)(param_1 + 0x7e) = param_6._0_2_;
  *(short *)(param_1 + 0x80) = param_6._2_2_;
  if ((param_6._0_2_ == *_DAT_000288ac) && (param_6._2_2_ == _DAT_000288ac[1])) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x82) = uVar3;
  return;
}



// Function: FUN_000022b0 at 000022b0
// Size: 70 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000022b0(int *param_1,undefined4 param_2)

{
  short sVar1;
  
  if (param_1[0x2a] != 0) {
    sVar1 = func_0x00001cf8(param_2,*(undefined4 *)param_1[0x2a]);
    if (sVar1 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x3e0))();
  func_0x00007310(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002334 at 00002334
// Size: 68 bytes

void FUN_00002334(int *param_1,undefined1 param_2,undefined2 param_3)

{
  int *extraout_A0;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x188))((short)param_1,param_2);
    if (extraout_A0 != (int *)0x0) {
      (**(code **)(*extraout_A0 + 1000))((short)extraout_A0,param_3);
    }
  }
  return;
}



// Function: FUN_00002378 at 00002378
// Size: 16 bytes

undefined4 FUN_00002378(short *param_1,short *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = *(short *)(param_3._0_2_ * 2 + 0x15eea) + *param_1;
  sVar3 = *(short *)(param_3._0_2_ * 2 + 0x15efc) + *param_2;
  if ((((sVar2 < 0) || (sVar3 < 0)) || (sVar2 == 0x70)) || (sVar3 == 0x9c)) {
    uVar1 = 0;
  }
  else {
    *param_1 = sVar2;
    *param_2 = sVar3;
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00002388 at 00002388
// Size: 16 bytes

undefined4 FUN_00002388(void)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short *in_A1;
  short *unaff_A3;
  int unaff_A6;
  
  sVar2 = *(short *)(*(short *)(unaff_A6 + 0x10) * 2 + 0x15eea) + *unaff_A3;
  sVar3 = *(short *)(*(short *)(unaff_A6 + 0x10) * 2 + 0x15efc) + *in_A1;
  if ((((sVar2 < 0) || (sVar3 < 0)) || (sVar2 == 0x70)) || (sVar3 == 0x9c)) {
    uVar1 = 0;
  }
  else {
    *unaff_A3 = sVar2;
    *in_A1 = sVar3;
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00002398 at 00002398
// Size: 62 bytes

undefined4 FUN_00002398(void)

{
  short in_D0w;
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short unaff_D5w;
  short *in_A1;
  short *unaff_A3;
  
  sVar2 = in_D0w + *unaff_A3;
  sVar3 = *(short *)(unaff_D5w * 2 + 0x15efc) + *in_A1;
  if ((((sVar2 < 0) || (sVar3 < 0)) || (sVar2 == 0x70)) || (sVar3 == 0x9c)) {
    uVar1 = 0;
  }
  else {
    *unaff_A3 = sVar2;
    *in_A1 = sVar3;
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_000023d6 at 000023d6
// Size: 42 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000023d6(undefined4 param_1,undefined4 param_2)

{
  func_0x000076d8((int)param_1._0_2_ - (int)param_2._0_2_);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002428 at 00002428
// Size: 25 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002428(void)

{
  int in_D0;
  undefined4 uVar1;
  int in_D1;
  int unaff_A6;
  
  uVar1 = func_0x000076d8(in_D1 - in_D0);
  *(undefined4 *)(unaff_A6 + -0x3e) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000024a8 at 000024a8
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000024a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002542 at 00002542
// Size: 278 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002542(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  if ((char)(&DAT_00001422)[param_1._0_2_ * 0x2c + _DAT_0002884c] < '\x02') {
    pcVar3 = &DAT_00001422 + param_1._0_2_ * 0x2c + _DAT_0002884c;
    uVar2 = (ushort)*pcVar3;
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    iVar5 = param_1._0_2_ * 0x2c + _DAT_0002884c;
    uVar2 = (ushort)((char)(&DAT_00001423)[iVar5] <= (char)(&DAT_00001424)[iVar5]);
    if ((char)(&DAT_00001423)[(int)(short)uVar2 + param_1._0_2_ * 0x2c + _DAT_0002884c] <=
        param_1._2_1_) {
      return;
    }
  }
  (&DAT_00001423)[(int)(short)uVar2 + param_1._0_2_ * 0x2c + _DAT_0002884c] = param_1._2_1_;
  *(undefined2 *)(&DAT_00001426 + (short)uVar2 * 2 + param_1._0_2_ * 0x2c + _DAT_0002884c) =
       param_2._0_2_;
  *(undefined2 *)(&DAT_0000142a + (short)uVar2 * 2 + param_1._0_2_ * 0x2c + _DAT_0002884c) =
       param_2._2_2_;
  if (param_3 == (char *)0x0) {
    pcVar3 = &DAT_0000142e + (short)uVar2 * 0x10 + param_1._0_2_ * 0x2c + _DAT_0002884c;
    pcVar4 = &DAT_00015a5f;
    do {
      cVar1 = *pcVar4;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar3 = &DAT_0000142e + (short)uVar2 * 0x10 + param_1._0_2_ * 0x2c + _DAT_0002884c;
    do {
      cVar1 = *param_3;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
  }
  func_0x00007480();
  return;
}



// Function: FUN_00002658 at 00002658
// Size: 86 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00002658(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  FUN_000026ae(0x20000);
  for (sVar1 = 0; sVar1 < _DAT_000283d8; sVar1 = sVar1 + 1) {
    if (*(char *)(*(short *)(&DAT_00027fda + sVar1 * 2) * 0x1e + _DAT_0002884c + 0xd26) == '\x05') {
      sVar2 = sVar2 + 1;
    }
  }
  return sVar2;
}



// Function: FUN_000026b0 at 000026b0
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000026b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000026c0 at 000026c0
// Size: 590 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_000026c0(void)

{
  char cVar1;
  char *pcVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short unaff_D7w;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined2 *unaff_A4;
  int unaff_A6;
  
  _DAT_000283d8 = 0;
  sVar3 = *(short *)(unaff_A6 + 8);
  pcVar2 = (char *)(int)sVar3;
  if (pcVar2 < (char *)0xb) {
    pcVar2 = (char *)CONCAT22(sVar3 >> 0xf,(&switchD_000026da::switchdataD_000026de)[sVar3]);
    switch(sVar3) {
    case 0:
      _DAT_000283d8 = 0;
      for (sVar3 = 0; sVar3 < 0x1e; sVar3 = sVar3 + 1) {
        *(undefined2 *)(&DAT_00027fda + sVar3 * 2) = 0;
        (&DAT_00028016)[sVar3 * 0x20] = 0;
      }
      pcVar2 = (char *)switchD_000026da::caseD_1();
      return pcVar2;
    case 2:
      sVar3 = *(short *)(_DAT_0002884c + 0x182);
      do {
        sVar5 = sVar3 + -1;
        if (sVar3 == 0) break;
        sVar3 = sVar5;
      } while ((undefined2 *)(sVar5 * 0x16 + _DAT_00028854) != unaff_A4);
      for (sVar3 = 0; sVar3 < 0x16; sVar3 = sVar3 + 1) {
        iVar8 = sVar3 * 0x1e + _DAT_0002884c;
        if ((*(char *)(iVar8 + 0xd28) == '\x03') && (sVar5 == *(short *)(iVar8 + 0xd2a))) {
          *(short *)(&DAT_00027fda + _DAT_000283d8 * 2) = sVar3;
          pcVar2 = &DAT_00028016 + _DAT_000283d8 * 0x20;
          pcVar6 = (char *)(iVar8 + 0xd12);
          do {
            cVar1 = *pcVar6;
            *pcVar2 = cVar1;
            pcVar2 = pcVar2 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          _DAT_000283d8 = _DAT_000283d8 + 1;
        }
      }
      pcVar2 = (char *)switchD_000026da::caseD_1();
      return pcVar2;
    case 3:
      _DAT_000283d8 = 0;
      for (sVar3 = 0; sVar3 < 0x16; sVar3 = sVar3 + 1) {
        iVar8 = sVar3 * 0x1e + _DAT_0002884c;
        pcVar2 = (char *)CONCAT22((short)((uint)(sVar3 * 0x1e) >> 0x10),*(short *)(iVar8 + 0xd2c));
        if (((*(short *)(iVar8 + 0xd2c) == *(short *)(unaff_A6 + 10)) &&
            (unaff_D7w == *(short *)(iVar8 + 0xd2e))) && (*(char *)(iVar8 + 0xd28) == '\x01')) {
          *(short *)(&DAT_00027fda + _DAT_000283d8 * 2) = sVar3;
          pcVar2 = &DAT_00028016 + _DAT_000283d8 * 0x20;
          pcVar6 = pcVar2;
          pcVar7 = (char *)(iVar8 + 0xd12);
          do {
            cVar1 = *pcVar7;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          _DAT_000283d8 = _DAT_000283d8 + 1;
        }
      }
      break;
    case 6:
      sVar3 = *(short *)(_DAT_0002884c + 0x182);
      do {
        sVar5 = sVar3 + -1;
        if (sVar3 == 0) break;
        sVar3 = sVar5;
      } while ((undefined2 *)(sVar5 * 0x16 + _DAT_00028854) != unaff_A4);
      *(undefined2 *)(unaff_A6 + 10) = *unaff_A4;
      sVar3 = unaff_A4[1];
      for (sVar4 = 0; sVar4 < 0x16; sVar4 = sVar4 + 1) {
        iVar8 = sVar4 * 0x1e + _DAT_0002884c;
        if ((*(char *)(iVar8 + 0xd28) == '\x03') && (sVar5 == *(short *)(iVar8 + 0xd2a))) {
          *(short *)(&DAT_00027fda + _DAT_000283d8 * 2) = sVar4;
          pcVar2 = &DAT_00028016 + _DAT_000283d8 * 0x20;
          pcVar6 = (char *)(iVar8 + 0xd12);
          do {
            cVar1 = *pcVar6;
            *pcVar2 = cVar1;
            pcVar2 = pcVar2 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          _DAT_000283d8 = _DAT_000283d8 + 1;
        }
      }
      for (sVar5 = 0; sVar5 < 0x16; sVar5 = sVar5 + 1) {
        iVar8 = sVar5 * 0x1e + _DAT_0002884c;
        if (((*(short *)(iVar8 + 0xd2c) == *(short *)(unaff_A6 + 10)) &&
            (sVar3 == *(short *)(iVar8 + 0xd2e))) && (*(char *)(iVar8 + 0xd28) == '\x01')) {
          *(short *)(&DAT_00027fda + _DAT_000283d8 * 2) = sVar5;
          pcVar2 = &DAT_00028016 + _DAT_000283d8 * 0x20;
          pcVar6 = (char *)(iVar8 + 0xd12);
          do {
            cVar1 = *pcVar6;
            *pcVar2 = cVar1;
            pcVar2 = pcVar2 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          _DAT_000283d8 = _DAT_000283d8 + 1;
        }
      }
      pcVar2 = (char *)switchD_000026da::caseD_1();
      return pcVar2;
    case 8:
      _DAT_000283d8 = 1;
      _DAT_00027fda = 0;
      pcVar2 = &DAT_00028016;
      pcVar6 = &DAT_00015a20;
      do {
        cVar1 = *pcVar6;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)switchD_000026da::caseD_1();
      return pcVar2;
    case 9:
      _DAT_000283d8 = 1;
      _DAT_00027fda = 0;
      pcVar2 = &DAT_00028016;
      pcVar6 = &DAT_00015a2a;
      do {
        cVar1 = *pcVar6;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)switchD_000026da::caseD_1();
      return pcVar2;
    case 10:
      _DAT_000283d8 = 1;
      _DAT_00027fda = 0;
      pcVar2 = &DAT_00028016;
      pcVar6 = &DAT_00015a2a;
      do {
        cVar1 = *pcVar6;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)switchD_000026da::caseD_1();
      return pcVar2;
    }
  }
  return pcVar2;
}



// Function: FUN_000026e8 at 000026e8
// Size: 60 bytes

void FUN_000026e8(void)

{
  short sVar1;
  int in_A0;
  uint *unaff_A2;
  
  *(uint *)(in_A0 + 0x6c) = *(uint *)(in_A0 + 0x6c) & 0xb802a8;
  *unaff_A2 = *unaff_A2 | 0x464279;
  for (sVar1 = 0; sVar1 < 0x1e; sVar1 = sVar1 + 1) {
    *(undefined2 *)(&DAT_00027fda + sVar1 * 2) = 0;
    (&DAT_00028016)[sVar1 * 0x20] = 0;
  }
  switchD_000026da::caseD_1();
  return;
}



// Function: FUN_00002860 at 00002860
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002860(void)

{
  char cVar1;
  short unaff_D3w;
  short unaff_D7w;
  char *pcVar2;
  int iVar3;
  char *unaff_A4;
  int unaff_A6;
  
  do {
    pcVar2 = &DAT_00028016 + _DAT_000283d8 * 0x20;
    do {
      cVar1 = *unaff_A4;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      unaff_A4 = unaff_A4 + 1;
    } while (cVar1 != '\0');
    _DAT_000283d8 = _DAT_000283d8 + 1;
    do {
      unaff_D3w = unaff_D3w + 1;
      if (0x15 < unaff_D3w) {
        switchD_000026da::caseD_1();
        return;
      }
      iVar3 = unaff_D3w * 0x1e + _DAT_0002884c;
    } while (((*(short *)(iVar3 + 0xd2c) != *(short *)(unaff_A6 + 10)) ||
             (unaff_D7w != *(short *)(iVar3 + 0xd2e))) || (*(char *)(iVar3 + 0xd28) != '\x01'));
    *(short *)(&DAT_00027fda + _DAT_000283d8 * 2) = unaff_D3w;
    unaff_A4 = (char *)(iVar3 + 0xd12);
  } while( true );
}



// Function: caseD_1 at 00002986
// Size: 8 bytes

void switchD_000026da::caseD_1(void)

{
  return;
}



// Function: FUN_0000298e at 0000298e
// Size: 185 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000298e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar6;
  uint uVar3;
  short sVar4;
  short sVar5;
  char cVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  
  if (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0) {
    if (_DAT_00028840 == 0) {
      if (param_2._0_1_ == '\0') {
        return 1;
      }
      sVar4 = 0;
      while ((sVar4 < 8 && (*(char *)(sVar4 * 0x14 + _DAT_0002884c + 0x192) != '\0'))) {
        sVar4 = sVar4 + 1;
      }
      sVar4 = func_0x000049e8();
      if (sVar4 == 0) {
        return 4;
      }
      cVar6 = *(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18
                        ) + _DAT_0002884c + 0x711);
      if (cVar6 == '\n') {
        return 3;
      }
      if (cVar6 == '\v') {
        return 7;
      }
      return 4;
    }
    if (param_2._0_1_ == '\0') {
      cVar6 = func_0x00001d78();
      if (cVar6 != '\0') {
        return 0xb;
      }
      return 1;
    }
    if (param_2._0_1_ != '\0') {
      iVar1 = *(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2);
      cVar6 = *(char *)((*(uint *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + param_1._0_2_ * 2) >> 0x18
                        ) + _DAT_0002884c + 0x711);
      if (_DAT_000288ac == (short *)0x0) {
        uVar3 = FUN_00002a48();
        return uVar3;
      }
      sVar4 = FUN_000023d6(param_1._2_2_,*(undefined4 *)_DAT_000288ac);
      if (_DAT_000288ac == (short *)0x0) {
        cVar9 = '\a';
      }
      else {
        cVar9 = *(char *)((*(uint *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + *_DAT_000288ac * 2)
                          >> 0x18) + _DAT_0002884c + 0x711);
      }
      iVar2 = *(int *)(param_1._2_2_ * 0xe0 + _DAT_00028850 + 1 + param_1._0_2_ * 2) << 3;
      sVar5 = func_0x000049e0();
      cVar7 = FUN_00001d88();
      cVar8 = FUN_00001d80();
      if (cVar8 != '\0') {
        return 4;
      }
      if (sVar5 == 0) {
        return 0;
      }
      uVar10 = (ushort)((uint)(iVar1 << 4) >> 0x1c);
      if ((((((_DAT_000288ac != (short *)0x0) && (sVar4 < 2)) &&
            (uVar10 != *(ushort *)(_DAT_0002884c + 0x110))) && ((cVar6 == '\n' || (iVar2 < 0)))) &&
          (((((_DAT_000288ac[6] & 0x1000U) == 0 || ((_DAT_000288fa != 1 || (cVar9 != '\x03')))) ||
            (cVar6 == '\x03')) || (((cVar6 == '\x02' || (cVar6 == '\n')) || (cVar6 == '\x01'))))))
         && ((((((_DAT_000288ac[6] & 0x1000U) != 0 || (_DAT_000288fa != 1)) ||
               ((cVar6 != '\x03' || ((cVar9 == '\x03' || (cVar9 == '\x02')))))) || (cVar9 == '\n'))
             || (cVar9 == '\x01')))) {
        if ((*(short *)(_DAT_0002884c + 0x11c) == 0) || (uVar10 == 0xf)) {
          uVar10 = 8;
        }
        else if ((cVar6 == '\n') &&
                ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 +
                                        _DAT_0002884c + 0x1582 + (int)(short)uVar10) << 6) >> 0x1e)
                 == 2)) {
          uVar10 = 8;
        }
        else if ((cVar6 == '\n') &&
                ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 +
                                        _DAT_0002884c + 0x1582 + (int)(short)uVar10) << 6) >> 0x1e)
                 != 2)) {
          uVar10 = 10;
        }
        else if ((byte)((uint)(*(int *)(*(short *)(_DAT_0002884c + 0x110) * 8 +
                                        _DAT_0002884c + 0x1582 + (int)(short)uVar10) << 6) >> 0x1e)
                 == 0) {
          uVar10 = 10;
        }
        else {
          uVar10 = 8;
        }
        if ((cVar7 != '\0') && (*(short *)(_DAT_0002884c + 300) != 0)) {
          return 9;
        }
        return (uint)uVar10;
      }
      if ((_DAT_000288ac != (short *)0x0) && (cVar9 = func_0x00001d78(), cVar9 != '\0')) {
        if (((cVar6 == '\n') || (iVar2 < 0)) && (uVar10 != *(ushort *)(_DAT_0002884c + 0x110))) {
          return 0;
        }
        return 0xb;
      }
      if ((cVar6 == '\n') && (uVar10 != *(ushort *)(_DAT_0002884c + 0x110))) {
        if (cVar7 == '\0') {
          return 3;
        }
        return 0;
      }
      if ((_DAT_000288ac != (short *)0x0) && (0 < sVar4)) {
        if (cVar7 == '\0') {
          if (_DAT_000288fa == 2) {
            return 6;
          }
          if ((cVar6 != '\x02') && (cVar6 != '\x03')) {
            return 6;
          }
          return 2;
        }
        if ((iVar2 < 0) && (uVar10 == *(ushort *)(_DAT_0002884c + 0x110))) {
          return 5;
        }
        if (cVar6 == '\v') {
          return 7;
        }
        if (cVar6 == '\n') {
          return 3;
        }
        return 0;
      }
      if ((iVar2 < 0) && (uVar10 == *(ushort *)(_DAT_0002884c + 0x110))) {
        if (cVar7 == '\0') {
          return 5;
        }
        return 0;
      }
      if (cVar6 == '\v') {
        if (cVar7 == '\0') {
          return 7;
        }
        return 0;
      }
      if (cVar6 != '\n') {
        return 0;
      }
      if (cVar7 == '\0') {
        return 3;
      }
      return 0;
    }
  }
  return 0;
}



// Function: FUN_00002a48 at 00002a48
// Size: 892 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00002a48(void)

{
  undefined2 in_D0w;
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  short unaff_D6w;
  int iVar5;
  int unaff_A6;
  
  *(undefined2 *)(unaff_A6 + -4) = in_D0w;
  if (_DAT_000288ac == (short *)0x0) {
    cVar4 = '\a';
  }
  else {
    cVar4 = *(char *)((*(uint *)(_DAT_000288ac[1] * 0xe0 + _DAT_00028850 + *_DAT_000288ac * 2) >>
                      0x18) + _DAT_0002884c + 0x711);
  }
  *(ushort *)(unaff_A6 + -2) =
       (ushort)((uint)(*(int *)(unaff_D5w * 0xe0 + _DAT_00028850 + 1 + unaff_D6w * 2) << 3) >> 0x1f)
  ;
  uVar1 = func_0x000049e0();
  *(undefined2 *)(unaff_A6 + -8) = uVar1;
  if ((_DAT_000288ac == (short *)0x0) || (_DAT_000288fa == 2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined2 *)(unaff_D3w * 2 + 0x15cbe);
  }
  *(undefined2 *)(unaff_A6 + -6) = uVar1;
  if (*(short *)(unaff_D3w * 2 + 0x15cbe) == 7) {
    *(undefined2 *)(unaff_A6 + -6) = 0;
  }
  if ((uint)(*(int *)(unaff_D5w * 0x70 + _DAT_00028858 + (int)unaff_D6w) << 3) >> 0x1b != 0) {
    *(undefined2 *)(unaff_A6 + -6) = 1;
  }
  cVar2 = FUN_00001d88();
  cVar3 = FUN_00001d80();
  iVar5 = _DAT_0002884c;
  if (cVar3 != '\0') {
    return 4;
  }
  if (*(short *)(unaff_A6 + -8) == 0) {
    return 0;
  }
  if ((((((_DAT_000288ac == (short *)0x0) || (1 < *(short *)(unaff_A6 + -4))) ||
        (unaff_D4w == *(short *)(_DAT_0002884c + 0x110))) ||
       ((unaff_D3w != 10 && (*(short *)(unaff_A6 + -2) == 0)))) ||
      (((((_DAT_000288ac[6] & 0x1000U) != 0 && ((_DAT_000288fa == 1 && (cVar4 == '\x03')))) &&
        (unaff_D3w != 3)) && (((unaff_D3w != 2 && (unaff_D3w != 10)) && (unaff_D3w != 1)))))) ||
     (((((_DAT_000288ac[6] & 0x1000U) == 0 && (_DAT_000288fa == 1)) &&
       ((unaff_D3w == 3 && ((cVar4 != '\x03' && (cVar4 != '\x02')))))) &&
      ((cVar4 != '\n' && (cVar4 != '\x01')))))) {
    if ((_DAT_000288ac != (short *)0x0) && (cVar4 = func_0x00001d78(), cVar4 != '\0')) {
      if (((unaff_D3w == 10) || (*(short *)(unaff_A6 + -2) != 0)) &&
         (unaff_D4w != *(short *)(_DAT_0002884c + 0x110))) {
        return 0;
      }
      return 0xb;
    }
    if ((unaff_D3w == 10) && (unaff_D4w != *(short *)(_DAT_0002884c + 0x110))) {
      if (cVar2 == '\0') {
        return 3;
      }
      return 0;
    }
    if ((_DAT_000288ac != (short *)0x0) && (0 < *(short *)(unaff_A6 + -4))) {
      if (cVar2 == '\0') {
        if (_DAT_000288fa == 2) {
          return 6;
        }
        if ((unaff_D3w != 2) && (unaff_D3w != 3)) {
          return 6;
        }
        return 2;
      }
      if ((*(short *)(unaff_A6 + -2) != 0) && (unaff_D4w == *(short *)(_DAT_0002884c + 0x110))) {
        return 5;
      }
      if (unaff_D3w == 0xb) {
        return 7;
      }
      if (unaff_D3w == 10) {
        return 3;
      }
      return 0;
    }
    if ((*(short *)(unaff_A6 + -2) != 0) && (unaff_D4w == *(short *)(_DAT_0002884c + 0x110))) {
      if (cVar2 == '\0') {
        return 5;
      }
      return 0;
    }
    if (unaff_D3w == 0xb) {
      if (cVar2 == '\0') {
        return 7;
      }
      return 0;
    }
    if (unaff_D3w != 10) {
      return 0;
    }
    if (cVar2 == '\0') {
      return 3;
    }
    return 0;
  }
  if ((*(short *)(_DAT_0002884c + 0x11c) == 0) || (unaff_D4w == 0xf)) {
    uVar1 = 8;
  }
  else if ((unaff_D3w == 10) &&
          (*(undefined2 *)(unaff_A6 + -0xc) = *(undefined2 *)(_DAT_0002884c + 0x110),
          (byte)((uint)(*(int *)(*(short *)(unaff_A6 + -0xc) * 8 + iVar5 + 0x1582 + (int)unaff_D4w)
                       << 6) >> 0x1e) == 2)) {
    uVar1 = 8;
  }
  else {
    iVar5 = _DAT_0002884c;
    if (unaff_D3w == 10) {
      *(undefined2 *)(unaff_A6 + -0x12) = *(undefined2 *)(_DAT_0002884c + 0x110);
      *(int *)(unaff_A6 + -0x10) = iVar5 + 0x1582;
      iVar5 = *(short *)(unaff_A6 + -0x12) * 8 + *(int *)(unaff_A6 + -0x10);
      *(int *)(unaff_A6 + -0x16) = iVar5;
      if ((byte)((uint)(*(int *)(iVar5 + unaff_D4w) << 6) >> 0x1e) != 2) {
        uVar1 = 10;
        goto LAB_00002c8e;
      }
    }
    iVar5 = _DAT_0002884c;
    *(undefined2 *)(unaff_A6 + -0x1c) = *(undefined2 *)(_DAT_0002884c + 0x110);
    *(int *)(unaff_A6 + -0x1a) = iVar5 + 0x1582;
    iVar5 = *(short *)(unaff_A6 + -0x1c) * 8 + *(int *)(unaff_A6 + -0x1a);
    *(int *)(unaff_A6 + -0x20) = iVar5;
    if ((byte)((uint)(*(int *)(iVar5 + unaff_D4w) << 6) >> 0x1e) == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = 8;
    }
  }
LAB_00002c8e:
  if ((cVar2 != '\0') && (*(short *)(_DAT_0002884c + 300) != 0)) {
    uVar1 = 9;
  }
  return uVar1;
}



// Function: FUN_00002e46 at 00002e46
// Size: 308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00002e46(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  char cVar8;
  undefined2 uVar9;
  int *extraout_A0;
  int unaff_A5;
  uint local_3c;
  uint local_38;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  short sStack_24;
  short sStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  short sStack_14;
  short sStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(unaff_A5 + -0x70a) == '\0') {
    *(undefined1 *)(unaff_A5 + -0x70a) = 1;
    _DAT_00027720 = 0;
  }
  if ((((*(short *)(_DAT_0002884c + 0x124) == 0) ||
       (iVar6 = *(short *)(_DAT_0002884c + 0x110) * 2, *(short *)(iVar6 + _DAT_0002884c + 0xd0) == 0
       )) || (*(short *)(_DAT_0002884c + 0x15a) != 0)) || (_DAT_000273a6 != 0)) {
    if (((*(short *)(_DAT_0002884c + 0x124) == 0) ||
        (*(short *)(*(short *)(_DAT_0002884c + 0x110) * 2 + _DAT_0002884c + 0xd0) == 0)) ||
       ((*(short *)(_DAT_0002884c + 0x15a) == 0 ||
        ((_DAT_000276e4 == 0 || (param_2 == (uint *)0x0)))))) {
      if (((param_2 == (uint *)0x0) || (8 < *(short *)(param_2 + 1))) ||
         (8 < *(short *)((int)param_2 + 6))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (param_2 == (uint *)0x0) {
        local_c = _DAT_00015a18;
        local_8 = _DAT_00015a1c;
        iVar6 = FUN_00002a48((short)&local_3c,0,0x9c);
      }
      else {
        local_3c = *param_2;
        local_38 = param_2[1];
        local_c = CONCAT22((short)((int)(short)(*(short *)param_2 * 2) / 0x10 << 4),
                           (short)*param_2 * 2);
        iVar6 = (((short)(*(short *)(param_2 + 1) * 2) + -1) / 0x10 + 1) * 0x10;
        local_8 = CONCAT22((short)iVar6,*(short *)((int)param_2 + 6) * 2);
        if (bVar3) {
          uVar1 = *param_2;
          _DAT_000276fc = (short)(uVar1 >> 0x10);
          sVar7 = (short)(((int)_DAT_000276fc >> 2) << 2);
          _DAT_000276fe = (short)uVar1;
          _DAT_000276fc = CONCAT22(sVar7,_DAT_000276fe);
          _DAT_00027700 = (short)(param_2[1] >> 0x10);
          _DAT_00027702 = (short)param_2[1];
          _DAT_00027700 = CONCAT22(((short)(_DAT_00027700 + -1 >> 3) + 1) * 8,_DAT_00027702);
          if (sVar7 < 0) {
            _DAT_000276fc = uVar1 & 0xffff;
            _DAT_00027700 = CONCAT22(8,_DAT_00027702);
          }
          if (_DAT_000276fe < 0) {
            _DAT_000276fc = _DAT_000276fc & 0xffff0000;
            _DAT_00027700 = CONCAT22(_DAT_00027700,8);
          }
          if (0x70 < (int)_DAT_00027700 + (int)_DAT_000276fc) {
            _DAT_000276fc = CONCAT22(0x68,_DAT_000276fe);
            _DAT_00027700 = CONCAT22(8,_DAT_00027702);
          }
          if (0x9c < (int)_DAT_00027702 + (int)_DAT_000276fe) {
            _DAT_000276fc = CONCAT22(_DAT_000276fc,0x94);
            _DAT_00027700 = CONCAT22(_DAT_00027700,8);
          }
          _DAT_00027704 = (short)(_DAT_000276fc >> 0x10);
          _DAT_00027704 = _DAT_00027704 + -4;
          _DAT_00027706 = (short)_DAT_000276fc;
          sVar7 = _DAT_00027706;
          uVar2 = _DAT_00027706 - 4;
          _DAT_00027704 = CONCAT22(_DAT_00027704,uVar2);
          _DAT_00027708 = (short)((uint)_DAT_00027700 >> 0x10);
          _DAT_00027708 = _DAT_00027708 + 8;
          _DAT_0002770a = (short)_DAT_00027700;
          sVar5 = _DAT_0002770a;
          _DAT_0002770a = _DAT_0002770a + 8;
          if (_DAT_00027704 < 0) {
            _DAT_00027704 = (uint)uVar2;
          }
          if (_DAT_00027706 < 0) {
            _DAT_00027704 = _DAT_00027704 & 0xffff0000;
          }
          if (0x70 < (int)_DAT_00027708 + (int)_DAT_00027704) {
            _DAT_00027704 = CONCAT22(0x60,_DAT_00027706);
            _DAT_00027708 = CONCAT22(0x10,_DAT_0002770a);
          }
          if (0x9c < (int)_DAT_0002770a + (int)_DAT_00027706) {
            _DAT_00027704 = CONCAT22(_DAT_00027704,0x8c);
            _DAT_00027708 = CONCAT22(_DAT_00027708,0x10);
          }
          FUN_00002a48(0x770c,sVar7 * 2,sVar5 * 2);
          FUN_00002a48(&DAT_00027714,CONCAT22(_DAT_00027704 * 2,_DAT_00027706 * 2),
                       CONCAT22(_DAT_00027708 * 2,_DAT_0002770a * 2));
          func_0x00002a40(0x2771c,CONCAT22(_DAT_0002770c,_DAT_0002770e));
          FUN_00002a48(0x276ec,0,CONCAT22(_DAT_00027718,_DAT_0002771a));
          iVar6 = FUN_00002a48(0x276f4,_DAT_0002770e - _DAT_00027716,
                               CONCAT22(_DAT_00027710,_DAT_00027712));
        }
      }
      if (*(short *)(_DAT_0002884c + 0x124) != 0) {
        param_1._2_2_ = 1;
      }
      if (((param_1._0_2_ == 0) || (_DAT_00027720 == 0)) || (param_1._2_2_ != 0)) {
        if (_DAT_00028cce == (int *)0x0) {
          cVar8 = '\0';
        }
        else {
          _DAT_000273a2 = _DAT_00028cce + 0x1f;
          cVar8 = (**(code **)(*_DAT_00028cce + 0x1d8))();
        }
        if (cVar8 != '\0') {
          if ((_DAT_00028cce[0x29] == 0) && (*(int *)(_DAT_00027fc0 + 0x36) < 0x71)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          sStack_34 = (short)((uint)local_c >> 0x10);
          sStack_32 = (short)local_c;
          _sStack_34 = CONCAT22(sStack_34 / 2,sStack_32 / 2);
          sStack_30 = (short)((uint)local_8 >> 0x10);
          sStack_2e = (short)local_8;
          _sStack_30 = CONCAT22(sStack_30 / 2,sStack_2e / 2);
          if (bVar3) {
            uStack_10 = (undefined2)((int)_DAT_00027716 + (int)_DAT_0002771a);
            uStack_e = (undefined2)((int)_DAT_00027718 + (int)_DAT_00027714);
            sStack_14 = _DAT_00027716;
            sStack_12 = _DAT_00027714;
            uStack_20 = (undefined2)(((int)_DAT_00027716 + (int)_DAT_0002771a) / 2);
            uStack_1e = (undefined2)(((int)_DAT_00027718 + (int)_DAT_00027714) / 2);
            sStack_24 = _DAT_00027716 / 2;
            sStack_22 = _DAT_00027714 / 2;
            if (bVar4) {
              uVar9 = SUB42(&sStack_24,0);
            }
            else {
              uVar9 = SUB42(&sStack_14,0);
            }
            FUN_00002388(0x140d0,&sStack_14,(short)_DAT_000273a2,uVar9,0);
            if (*(short *)(_DAT_0002884c + 0x124) != 0) {
              if (bVar4) {
                uVar9 = SUB42(&sStack_24,0);
              }
              else {
                uVar9 = SUB42(&sStack_14,0);
              }
              FUN_00002388(0x140ec,&sStack_14,(short)_DAT_000273a2,uVar9,0x24);
            }
          }
          else {
            uStack_1c = 0;
            uStack_1a = 0;
            uStack_18 = 0x138;
            uStack_16 = 0xe0;
            uStack_2c = 0;
            uStack_2a = 0;
            uStack_28 = 0x9c;
            uStack_26 = 0x70;
            if (bVar4) {
              uVar9 = SUB42(&uStack_2c,0);
            }
            else {
              uVar9 = SUB42(&uStack_1c,0);
            }
            FUN_00002388(0x140d0,&uStack_1c,(short)_DAT_000273a2,uVar9,0);
            if (*(short *)(_DAT_0002884c + 0x124) != 0) {
              if (bVar4) {
                uVar9 = SUB42(&uStack_2c,0);
              }
              else {
                uVar9 = SUB42(&uStack_1c,0);
              }
              FUN_00002388(0x140ec,&uStack_1c,(short)_DAT_000273a2,uVar9,0x24);
            }
          }
          if ((param_1._0_2_ == 0) || ((_DAT_00027720 != 0 && (param_1._2_2_ == 0)))) {
            _DAT_00027720 = 0;
          }
          else {
            FUN_00003652((short)&local_3c);
            _DAT_00027720 = 1;
          }
        }
        iVar6 = (int)(_DAT_00028cce[0x29] == 0);
        if (_DAT_00028cce[0x29] == 0) {
          (**(code **)(*_DAT_00027fbc + 0x188))((short)_DAT_00027fbc,0x6572);
          iVar6 = 0;
          if (extraout_A0 != (int *)0x0) {
            *(undefined1 *)(extraout_A0 + 0x26) = 0;
            (**(code **)(*extraout_A0 + 0x26c))();
            iVar6 = (**(code **)(*extraout_A0 + 0x268))();
          }
        }
      }
    }
    else {
      iVar6 = FUN_00003ad0();
    }
  }
  return iVar6;
}



// Function: FUN_00002f80 at 00002f80
// Size: 1368 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00002f80(void)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int in_D0;
  int iVar4;
  short sVar5;
  char cVar7;
  undefined2 uVar6;
  short unaff_D4w;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  byte *in_A0;
  short sVar13;
  int *extraout_A0;
  uint *unaff_A2;
  int unaff_A6;
  
  *in_A0 = *in_A0 | 0x80;
  iVar4 = in_D0 << 4;
  *(short *)(unaff_A6 + -4) = (short)iVar4;
  if (unaff_D4w != 0) {
    uVar1 = *unaff_A2;
    _DAT_000276fc = (short)(uVar1 >> 0x10);
    sVar5 = (short)(((int)_DAT_000276fc >> 2) << 2);
    _DAT_000276fe = (short)uVar1;
    _DAT_000276fc = CONCAT22(sVar5,_DAT_000276fe);
    _DAT_00027700 = (short)(unaff_A2[1] >> 0x10);
    _DAT_00027702 = (short)unaff_A2[1];
    _DAT_00027700 = CONCAT22(((short)(_DAT_00027700 + -1 >> 3) + 1) * 8,_DAT_00027702);
    if (sVar5 < 0) {
      _DAT_000276fc = uVar1 & 0xffff;
      _DAT_00027700 = CONCAT22(8,_DAT_00027702);
    }
    if (_DAT_000276fe < 0) {
      _DAT_000276fc = _DAT_000276fc & 0xffff0000;
      _DAT_00027700 = CONCAT22(_DAT_00027700,8);
    }
    if (0x70 < (int)_DAT_00027700 + (int)_DAT_000276fc) {
      _DAT_000276fc = CONCAT22(0x68,_DAT_000276fe);
      _DAT_00027700 = CONCAT22(8,_DAT_00027702);
    }
    if (0x9c < (int)_DAT_00027702 + (int)_DAT_000276fe) {
      _DAT_000276fc = CONCAT22(_DAT_000276fc,0x94);
      _DAT_00027700 = CONCAT22(_DAT_00027700,8);
    }
    _DAT_00027704 = (short)(_DAT_000276fc >> 0x10);
    _DAT_00027704 = _DAT_00027704 + -4;
    _DAT_00027706 = (short)_DAT_000276fc;
    sVar5 = _DAT_00027706;
    uVar2 = _DAT_00027706 - 4;
    _DAT_00027704 = CONCAT22(_DAT_00027704,uVar2);
    _DAT_00027708 = (short)((uint)_DAT_00027700 >> 0x10);
    _DAT_00027708 = _DAT_00027708 + 8;
    _DAT_0002770a = (short)_DAT_00027700;
    sVar13 = _DAT_0002770a;
    _DAT_0002770a = _DAT_0002770a + 8;
    if (_DAT_00027704 < 0) {
      _DAT_00027704 = (uint)uVar2;
    }
    if (_DAT_00027706 < 0) {
      _DAT_00027704 = _DAT_00027704 & 0xffff0000;
    }
    if (0x70 < (int)_DAT_00027708 + (int)_DAT_00027704) {
      _DAT_00027704 = CONCAT22(0x60,_DAT_00027706);
      _DAT_00027708 = CONCAT22(0x10,_DAT_0002770a);
    }
    if (0x9c < (int)_DAT_0002770a + (int)_DAT_00027706) {
      _DAT_00027704 = CONCAT22(_DAT_00027704,0x8c);
      _DAT_00027708 = CONCAT22(_DAT_00027708,0x10);
    }
    FUN_00002a48(0x770c,sVar5 * 2,sVar13 * 2);
    FUN_00002a48(&DAT_00027714,CONCAT22(_DAT_00027704 * 2,_DAT_00027706 * 2),
                 CONCAT22(_DAT_00027708 * 2,_DAT_0002770a * 2));
    func_0x00002a40(0x2771c,CONCAT22(_DAT_0002770c,_DAT_0002770e));
    FUN_00002a48(0x276ec,0,CONCAT22(_DAT_00027718,_DAT_0002771a));
    iVar4 = FUN_00002a48(0x276f4,_DAT_0002770e - _DAT_00027716,CONCAT22(_DAT_00027710,_DAT_00027712)
                        );
  }
  if (*(short *)(_DAT_0002884c + 0x124) != 0) {
    *(undefined2 *)(unaff_A6 + 10) = 1;
  }
  if (((*(short *)(unaff_A6 + 8) == 0) || (_DAT_00027720 == 0)) || (*(short *)(unaff_A6 + 10) != 0))
  {
    if (_DAT_00028cce == (int *)0x0) {
      cVar7 = '\0';
    }
    else {
      _DAT_000273a2 = _DAT_00028cce + 0x1f;
      cVar7 = (**(code **)(*_DAT_00028cce + 0x1d8))();
    }
    if (cVar7 != '\0') {
      if ((_DAT_00028cce[0x29] == 0) && (*(int *)(_DAT_00027fc0 + 0x36) < 0x71)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      *(undefined4 *)(unaff_A6 + -0x30) = *(undefined4 *)(unaff_A6 + -8);
      *(undefined4 *)(unaff_A6 + -0x2c) = *(undefined4 *)(unaff_A6 + -4);
      *(short *)(unaff_A6 + -0x30) = *(short *)(unaff_A6 + -0x30) / 2;
      *(short *)(unaff_A6 + -0x2e) = *(short *)(unaff_A6 + -0x2e) / 2;
      *(short *)(unaff_A6 + -0x2c) = *(short *)(unaff_A6 + -0x2c) / 2;
      *(short *)(unaff_A6 + -0x2a) = *(short *)(unaff_A6 + -0x2a) / 2;
      sVar13 = _DAT_00027716;
      sVar5 = (short)unaff_A6;
      if (unaff_D4w == 0) {
        *(undefined2 *)(unaff_A6 + -0x18) = 0;
        *(undefined2 *)(unaff_A6 + -0x16) = 0;
        *(undefined2 *)(unaff_A6 + -0x14) = 0x138;
        *(undefined2 *)(unaff_A6 + -0x12) = 0xe0;
        *(undefined2 *)(unaff_A6 + -0x28) = 0;
        *(undefined2 *)(unaff_A6 + -0x26) = 0;
        *(undefined2 *)(unaff_A6 + -0x24) = 0x9c;
        *(undefined2 *)(unaff_A6 + -0x22) = 0x70;
        if (bVar3) {
          sVar13 = sVar5 + -0x28;
        }
        else {
          sVar13 = sVar5 + -0x18;
        }
        FUN_00002388(0x140d0,unaff_A6 + -0x18,(short)_DAT_000273a2,sVar13,0);
        if (*(short *)(_DAT_0002884c + 0x124) != 0) {
          if (bVar3) {
            sVar13 = sVar5 + -0x28;
          }
          else {
            sVar13 = sVar5 + -0x18;
          }
          FUN_00002388(0x140ec,unaff_A6 + -0x18,(short)_DAT_000273a2,sVar13,0x24);
        }
      }
      else {
        iVar12 = (int)_DAT_00027716;
        iVar9 = (int)_DAT_0002771a;
        uVar6 = (undefined2)(iVar12 + iVar9);
        *(undefined2 *)(unaff_A6 + -0x3e) = uVar6;
        iVar4 = (int)_DAT_00027718;
        iVar10 = (int)_DAT_00027714;
        uVar11 = (undefined2)(iVar4 + iVar10);
        *(undefined2 *)(unaff_A6 + -0x3c) = uVar11;
        *(short *)(unaff_A6 + -0x3a) = _DAT_00027716;
        sVar8 = _DAT_00027714;
        *(undefined2 *)(unaff_A6 + -0x10) = *(undefined2 *)(unaff_A6 + -0x3a);
        *(short *)(unaff_A6 + -0xe) = sVar8;
        *(undefined2 *)(unaff_A6 + -0xc) = uVar6;
        *(undefined2 *)(unaff_A6 + -10) = uVar11;
        *(short *)(unaff_A6 + -0x42) = (short)((iVar12 + iVar9) / 2);
        uVar6 = (undefined2)((iVar4 + iVar10) / 2);
        *(undefined2 *)(unaff_A6 + -0x40) = uVar6;
        sVar8 = _DAT_00027714 / 2;
        *(short *)(unaff_A6 + -0x20) = sVar13 / 2;
        *(short *)(unaff_A6 + -0x1e) = sVar8;
        *(undefined2 *)(unaff_A6 + -0x1c) = *(undefined2 *)(unaff_A6 + -0x42);
        *(undefined2 *)(unaff_A6 + -0x1a) = uVar6;
        if (bVar3) {
          sVar13 = sVar5 + -0x20;
        }
        else {
          sVar13 = sVar5 + -0x10;
        }
        FUN_00002388(0x140d0,unaff_A6 + -0x10,(short)_DAT_000273a2,sVar13,0);
        if (*(short *)(_DAT_0002884c + 0x124) != 0) {
          if (bVar3) {
            sVar13 = sVar5 + -0x20;
          }
          else {
            sVar13 = sVar5 + -0x10;
          }
          FUN_00002388(0x140ec,unaff_A6 + -0x10,(short)_DAT_000273a2,sVar13,0x24);
        }
      }
      if ((*(short *)(unaff_A6 + 8) == 0) ||
         ((_DAT_00027720 != 0 && (*(short *)(unaff_A6 + 10) == 0)))) {
        _DAT_00027720 = 0;
      }
      else {
        FUN_00003652(sVar5 + -0x38);
        _DAT_00027720 = 1;
      }
    }
    iVar4 = (int)(_DAT_00028cce[0x29] == 0);
    if (_DAT_00028cce[0x29] == 0) {
      (**(code **)(*_DAT_00027fbc + 0x188))((short)_DAT_00027fbc,0x6572);
      iVar4 = 0;
      if (extraout_A0 != (int *)0x0) {
        *(undefined1 *)(extraout_A0 + 0x26) = 0;
        (**(code **)(*extraout_A0 + 0x26c))();
        iVar4 = (**(code **)(*extraout_A0 + 0x268))();
      }
    }
  }
  return iVar4;
}



// Function: FUN_000034d8 at 000034d8
// Size: 378 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000034d8(short *param_1)

{
  char cVar1;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
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
  
  if (_DAT_00028cce == (int *)0x0) {
    cVar1 = '\0';
  }
  else {
    _DAT_000273a2 = _DAT_00028cce + 0x1f;
    cVar1 = (**(code **)(*_DAT_00028cce + 0x1d8))();
  }
  if (cVar1 != '\0') {
    if (param_1 == (short *)0x0) {
      local_c = _DAT_00015a18;
      local_8 = _DAT_00015a1c;
    }
    else {
      local_c = CONCAT22(*param_1 * 2,param_1[1] * 2);
      local_8 = CONCAT22(param_1[2] * 2,param_1[3] * 2);
    }
    if (_DAT_00028cce[0x29] == 0) {
      local_24 = local_c._2_2_;
      local_22 = local_c._0_2_;
      local_1c = local_c._2_2_;
      local_1a = local_c._0_2_;
      local_18 = local_8._2_2_ + local_c._2_2_;
      local_16 = local_8._0_2_ + local_c._0_2_;
      FUN_00002378(_DAT_000273a2,&local_1c,&local_24,0);
      FUN_00003ad0();
    }
    else {
      local_20 = local_c._2_2_;
      local_1e = local_c._0_2_;
      local_14 = local_c._2_2_;
      local_12 = local_c._0_2_;
      local_10 = local_8._2_2_ + local_c._2_2_;
      local_e = local_8._0_2_ + local_c._0_2_;
      FUN_00002378(_DAT_000273a2,&local_14,&local_20,0);
    }
  }
  return;
}



// Function: FUN_00003652 at 00003652
// Size: 286 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003652(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  bool bVar2;
  char cVar5;
  short sVar3;
  short sVar4;
  short sVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  
  if ((((*(short *)(_DAT_0002884c + 0x124) == 0) ||
       (*(short *)(_DAT_00028846 * 2 + _DAT_0002884c + 0xd0) == 0)) ||
      (*(short *)(_DAT_0002884c + 0x15a) != 0)) || (_DAT_000273a6 != 0)) {
    if (_DAT_00028cce == (int *)0x0) {
      cVar5 = '\0';
    }
    else {
      _DAT_000273a2 = _DAT_00028cce + 0x1f;
      cVar5 = (**(code **)(*_DAT_00028cce + 0x1d8))();
    }
    if (cVar5 != '\0') {
      if ((_DAT_00028cce[0x29] == 0) && (*(int *)(_DAT_00027fc0 + 0x36) < 0x71)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      for (sVar6 = 0; sVar6 < *(short *)(&DAT_000015c2 + _DAT_0002884c); sVar6 = sVar6 + 1) {
        iVar7 = sVar6 * 0x42 + _DAT_0002884c;
        sVar4 = *(short *)(&DAT_000015c4 + iVar7);
        sVar1 = *(short *)(&DAT_000015c6 + iVar7);
        if ((*(short *)(_DAT_0002884c + 0x124) == 0) ||
           (sVar3 = FUN_00002860(*(undefined4 *)(&DAT_000015c4 + iVar7),0x20002), sVar3 != 0)) {
          if (!bVar2) {
            sVar4 = sVar4 * 2;
          }
          if (!bVar2) {
            sVar1 = sVar1 * 2;
          }
          if (*(char *)((*(uint *)(*(short *)(&DAT_000015c6 + sVar6 * 0x42 + _DAT_0002884c) * 0xe0 +
                                   _DAT_00028850 +
                                  *(short *)(&DAT_000015c4 + sVar6 * 0x42 + _DAT_0002884c) * 2) >>
                        0x18) + _DAT_0002884c + 0x711) == '\n') {
            if ((&DAT_000015d9)[sVar6 * 0x42 + _DAT_0002884c] == '\x0f') {
              cVar5 = '\b';
            }
            else {
              cVar5 = (&DAT_000015d9)[sVar6 * 0x42 + _DAT_0002884c];
            }
          }
          else {
            cVar5 = -1;
          }
          if (-1 < cVar5) {
            if (bVar2) {
              cVar5 = -1;
            }
            else {
              cVar5 = '\0';
            }
            FUN_00003b18((short)cVar5,_DAT_000273a2,CONCAT22(sVar4 + -1,sVar1 + -1));
          }
          if (sVar6 == param_2._0_2_) {
            iVar7 = (uint)(ushort)(sVar1 - 2) << 0x10;
            uVar9 = CONCAT22(sVar1 + -2,sVar4 + 7);
            sVar4 = sVar4 + -2;
            uVar8 = (undefined2)((uint)_DAT_000273a2 >> 0x10);
            FUN_00002398((short)_DAT_000273a2);
            FUN_00002398(_DAT_000273a2,sVar1 + 7,sVar1 + 7,uVar8,sVar4,uVar9,iVar7);
            FUN_00002398(_DAT_000273a2,sVar1 + -2);
            FUN_00002398(_DAT_000273a2,sVar1 + -2);
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_00003770 at 00003770
// Size: 40 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003770(void)

{
  undefined4 uVar1;
  char cVar3;
  short sVar2;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  char unaff_D7b;
  int iVar4;
  int unaff_A6;
  undefined2 uVar5;
  undefined4 uVar6;
  
  do {
    if (unaff_D7b == '\0') {
      unaff_D3w = unaff_D3w * 2;
    }
    if (unaff_D7b == '\0') {
      unaff_D4w = unaff_D4w * 2;
    }
    *(undefined2 *)(unaff_A6 + -0xe) = 0;
    if (*(char *)((*(uint *)(*(short *)(&DAT_000015c6 + unaff_D5w * 0x42 + _DAT_0002884c) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(&DAT_000015c4 + unaff_D5w * 0x42 + _DAT_0002884c) * 2) >>
                  0x18) + _DAT_0002884c + 0x711) == '\n') {
      if ((&DAT_000015d9)[unaff_D5w * 0x42 + _DAT_0002884c] == '\x0f') {
        cVar3 = '\b';
      }
      else {
        cVar3 = (&DAT_000015d9)[unaff_D5w * 0x42 + _DAT_0002884c];
      }
    }
    else {
      cVar3 = -1;
    }
    if (-1 < cVar3) {
      if (unaff_D7b == '\0') {
        cVar3 = '\0';
      }
      else {
        cVar3 = -1;
      }
      FUN_00003b18((short)cVar3,_DAT_000273a2,CONCAT22(unaff_D3w + -1,unaff_D4w + -1));
    }
    uVar1 = _DAT_000273a2;
    if (unaff_D5w == *(short *)(unaff_A6 + 0xc)) {
      sVar2 = *(short *)(unaff_A6 + -0xe) + unaff_D3w + -1;
      *(short *)(unaff_A6 + -10) = sVar2 + 8;
      iVar4 = (uint)(ushort)(unaff_D4w - 2) << 0x10;
      uVar6 = CONCAT22(unaff_D4w + -2,*(undefined2 *)(unaff_A6 + -10));
      sVar2 = sVar2 + -1;
      uVar5 = (undefined2)((uint)uVar1 >> 0x10);
      FUN_00002398((short)uVar1);
      FUN_00002398(_DAT_000273a2,unaff_D4w + 7,unaff_D4w + 7,uVar5,sVar2,uVar6,iVar4);
      uVar1 = _DAT_000273a2;
      *(short *)(unaff_A6 + -0xc) = unaff_D4w + 7;
      FUN_00002398(uVar1,unaff_D4w + -2);
      FUN_00002398(_DAT_000273a2,unaff_D4w + -2);
    }
    do {
      unaff_D5w = unaff_D5w + 1;
      if (*(short *)(&DAT_000015c2 + _DAT_0002884c) <= unaff_D5w) {
        return;
      }
      iVar4 = unaff_D5w * 0x42 + _DAT_0002884c;
      unaff_D3w = *(short *)(&DAT_000015c4 + iVar4);
      unaff_D4w = *(short *)(&DAT_000015c6 + iVar4);
    } while ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
            (sVar2 = FUN_00002860(*(undefined4 *)(&DAT_000015c4 + iVar4),0x20002), sVar2 == 0));
  } while( true );
}



// Function: FUN_00003798 at 00003798
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003798(void)

{
  undefined4 uVar1;
  short sVar2;
  short in_D0w;
  char cVar4;
  short sVar3;
  short unaff_D3w;
  short unaff_D5w;
  char unaff_D7b;
  int iVar5;
  int unaff_A6;
  undefined2 uVar6;
  undefined4 uVar7;
  
  do {
    *(undefined2 *)(unaff_A6 + -0xe) = 0;
    if (*(char *)((*(uint *)(*(short *)(&DAT_000015c6 + unaff_D5w * 0x42 + _DAT_0002884c) * 0xe0 +
                             _DAT_00028850 +
                            *(short *)(&DAT_000015c4 + unaff_D5w * 0x42 + _DAT_0002884c) * 2) >>
                  0x18) + _DAT_0002884c + 0x711) == '\n') {
      if ((&DAT_000015d9)[unaff_D5w * 0x42 + _DAT_0002884c] == '\x0f') {
        cVar4 = '\b';
      }
      else {
        cVar4 = (&DAT_000015d9)[unaff_D5w * 0x42 + _DAT_0002884c];
      }
    }
    else {
      cVar4 = -1;
    }
    if (-1 < cVar4) {
      if (unaff_D7b == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = -1;
      }
      FUN_00003b18((short)cVar4,_DAT_000273a2,CONCAT22(unaff_D3w,in_D0w + -1));
    }
    uVar1 = _DAT_000273a2;
    if (unaff_D5w == *(short *)(unaff_A6 + 0xc)) {
      sVar3 = *(short *)(unaff_A6 + -0xe) + unaff_D3w;
      *(short *)(unaff_A6 + -10) = sVar3 + 8;
      iVar5 = (uint)(ushort)(in_D0w - 2) << 0x10;
      uVar7 = CONCAT22(in_D0w + -2,*(undefined2 *)(unaff_A6 + -10));
      sVar3 = sVar3 + -1;
      uVar6 = (undefined2)((uint)uVar1 >> 0x10);
      FUN_00002398((short)uVar1);
      FUN_00002398(_DAT_000273a2,in_D0w + 7,in_D0w + 7,uVar6,sVar3,uVar7,iVar5);
      uVar1 = _DAT_000273a2;
      *(short *)(unaff_A6 + -0xc) = in_D0w + 7;
      FUN_00002398(uVar1,in_D0w + -2);
      FUN_00002398(_DAT_000273a2,in_D0w + -2);
    }
    do {
      unaff_D5w = unaff_D5w + 1;
      if (*(short *)(&DAT_000015c2 + _DAT_0002884c) <= unaff_D5w) {
        return;
      }
      iVar5 = unaff_D5w * 0x42 + _DAT_0002884c;
      sVar3 = *(short *)(&DAT_000015c4 + iVar5);
      in_D0w = *(short *)(&DAT_000015c6 + iVar5);
    } while ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
            (sVar2 = FUN_00002860(*(undefined4 *)(&DAT_000015c4 + iVar5),0x20002), sVar2 == 0));
    if (unaff_D7b == '\0') {
      sVar3 = sVar3 * 2;
    }
    unaff_D3w = sVar3 + -1;
    if (unaff_D7b == '\0') {
      in_D0w = in_D0w * 2;
    }
  } while( true );
}



// Function: FUN_00003868 at 00003868
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003868(void)

{
  short sVar1;
  short sVar2;
  char cVar4;
  short sVar3;
  short unaff_D3w;
  short unaff_D4w;
  short unaff_D5w;
  char unaff_D7b;
  int iVar5;
  undefined4 unaff_A3;
  int unaff_A6;
  undefined2 uVar6;
  undefined4 uVar7;
  
  do {
    uVar7 = CONCAT22(unaff_D4w + -1,*(undefined2 *)(unaff_A6 + -10));
    sVar3 = unaff_D3w + -1;
    uVar6 = (undefined2)((uint)unaff_A3 >> 0x10);
    FUN_00002398((short)unaff_A3);
    FUN_00002398(_DAT_000273a2,unaff_D4w + 8,unaff_D4w + 8,uVar6,sVar3,uVar7);
    uVar7 = _DAT_000273a2;
    *(short *)(unaff_A6 + -0xc) = unaff_D4w + 8;
    FUN_00002398(uVar7,unaff_D4w + -1);
    FUN_00002398(_DAT_000273a2,unaff_D4w + -1);
    do {
      do {
        unaff_D5w = unaff_D5w + 1;
        if (*(short *)(&DAT_000015c2 + _DAT_0002884c) <= unaff_D5w) {
          return;
        }
        iVar5 = unaff_D5w * 0x42 + _DAT_0002884c;
        sVar3 = *(short *)(&DAT_000015c4 + iVar5);
        sVar1 = *(short *)(&DAT_000015c6 + iVar5);
      } while ((*(short *)(_DAT_0002884c + 0x124) != 0) &&
              (sVar2 = FUN_00002860(*(undefined4 *)(&DAT_000015c4 + iVar5)), sVar2 == 0));
      if (unaff_D7b == '\0') {
        sVar3 = sVar3 * 2;
      }
      if (unaff_D7b == '\0') {
        sVar1 = sVar1 * 2;
      }
      unaff_D4w = sVar1 + -1;
      *(undefined2 *)(unaff_A6 + -0xe) = 0;
      if (*(char *)((*(uint *)(*(short *)(&DAT_000015c6 + unaff_D5w * 0x42 + _DAT_0002884c) * 0xe0 +
                               _DAT_00028850 +
                              *(short *)(&DAT_000015c4 + unaff_D5w * 0x42 + _DAT_0002884c) * 2) >>
                    0x18) + _DAT_0002884c + 0x711) == '\n') {
        if ((&DAT_000015d9)[unaff_D5w * 0x42 + _DAT_0002884c] == '\x0f') {
          cVar4 = '\b';
        }
        else {
          cVar4 = (&DAT_000015d9)[unaff_D5w * 0x42 + _DAT_0002884c];
        }
      }
      else {
        cVar4 = -1;
      }
      if (-1 < cVar4) {
        if (unaff_D7b == '\0') {
          cVar4 = '\0';
        }
        else {
          cVar4 = -1;
        }
        FUN_00003b18((short)cVar4,_DAT_000273a2);
      }
      unaff_A3 = _DAT_000273a2;
    } while (unaff_D5w != *(short *)(unaff_A6 + 0xc));
    unaff_D3w = *(short *)(unaff_A6 + -0xe) + sVar3 + -1;
    *(short *)(unaff_A6 + -10) = unaff_D3w + 8;
  } while( true );
}



// Function: FUN_0000393c at 0000393c
// Size: 40 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000393c(void)

{
  if (_DAT_00027338 == 0) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003972 at 00003972
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003972(void)

{
  if (DAT_00025b39 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_000039e8 at 000039e8
// Size: 28 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000039e8(void)

{
  if (_DAT_00027274 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00003ad0 at 00003ad0
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003ad0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003b18 at 00003b18
// Size: 1 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003b18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00003c58 at 00003c58
// Size: 4 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003c58(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



