// Warlords II - Decompiled 68k Code
// Segment: CODE_039
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000034 at 00000034
// Size: 58 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000034(int *param_1,undefined4 param_2)

{
  int *extraout_A0;
  
  (**(code **)(*param_1 + 500))(param_1,param_2);
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3a4))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000070 at 00000070
// Size: 38 bytes

void FUN_00000070(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 0xc4))(*(int **)(param_1 + 0x58),param_2);
  }
  return;
}



// Function: FUN_00000096 at 00000096
// Size: 40 bytes

void FUN_00000096(int param_1)

{
  undefined4 extraout_A0;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x12));
  *(undefined4 *)(param_1 + 0x12) = extraout_A0;
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_000000be at 000000be
// Size: 52 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000be(int *param_1)

{
  if (param_1[0x29] != 0) {
    (**(code **)(*param_1 + 0x424))();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00000bd6((char)param_1);
  return;
}



// Function: FUN_00000100 at 00000100
// Size: 24 bytes

void FUN_00000100(int param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined4 extraout_A0_01;
  int *piVar2;
  int aiStack_68 [25];
  
  func_0x000025e0((short)aiStack_68,(short)*(undefined4 *)(param_1 + 0xba));
  func_0x000025f0(aiStack_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(aiStack_68[0] + 8))();
    if (cVar1 == '\0') break;
    if (param_1 == piVar2[*(char *)(param_1 + 0xb8) + 0x23]) {
      (**(code **)(*piVar2 + 0x3ac))((short)piVar2,0);
    }
    func_0x000025f8((char)aiStack_68);
    piVar2 = extraout_A0_00;
  }
  func_0x000025e8((short)aiStack_68);
  FUN_00000e10((short)*(undefined4 *)(param_1 + 0xba));
  *(undefined4 *)(param_1 + 0xba) = extraout_A0_01;
  FUN_000000be(param_1);
  return;
}



// Function: FUN_00000118 at 00000118
// Size: 146 bytes

void FUN_00000118(void)

{
  int *piVar1;
  char cVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  undefined4 extraout_A0_01;
  int unaff_A2;
  int *piVar3;
  int unaff_A6;
  undefined2 uStack00000004;
  undefined1 uStack00000008;
  undefined1 uStack00000009;
  
  func_0x000025e0();
  func_0x000025f0(unaff_A6 + -100);
  piVar3 = extraout_A0;
  while( true ) {
    piVar1 = (int *)(unaff_A6 + -100);
    uStack00000008 = (undefined1)((uint)piVar1 >> 8);
    uStack00000009 = SUB41(piVar1,0);
    uStack00000004 = 0x174;
    cVar2 = (**(code **)(*piVar1 + 8))();
    if (cVar2 == '\0') break;
    if (unaff_A2 == piVar3[*(char *)(unaff_A2 + 0xb8) + 0x23]) {
      uStack00000008 = *(undefined1 *)(unaff_A2 + 0xb8);
      uStack00000004 = 0;
      (**(code **)(*piVar3 + 0x3ac))();
    }
    uStack00000008 = (undefined1)((uint)(unaff_A6 + -100) >> 8);
    uStack00000009 = (undefined1)(unaff_A6 + -100);
    uStack00000004 = 0x162;
    func_0x000025f8();
    piVar3 = extraout_A0_00;
  }
  uStack00000008 = 0xff;
  uStack00000009 = 0xff;
  uStack00000004 = (undefined2)((uint)(unaff_A6 + -100) >> 0x10);
  func_0x000025e8();
  FUN_00000e10();
  *(undefined4 *)(unaff_A2 + 0xba) = extraout_A0_01;
  FUN_000000be();
  return;
}



// Function: FUN_000001aa at 000001aa
// Size: 32 bytes

void FUN_000001aa(int *param_1)

{
  (**(code **)(*param_1 + 0x3d8))();
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_000001ca at 000001ca
// Size: 32 bytes

void FUN_000001ca(int *param_1)

{
  (**(code **)(*param_1 + 0x3d0))();
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_000001ea at 000001ea
// Size: 32 bytes

void FUN_000001ea(int *param_1)

{
  (**(code **)(*param_1 + 0x3d0))();
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_0000020a at 0000020a
// Size: 32 bytes

void FUN_0000020a(int *param_1)

{
  (**(code **)(*param_1 + 0x3d0))();
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_0000022a at 0000022a
// Size: 66 bytes

void FUN_0000022a(int param_1)

{
  undefined4 extraout_A0;
  
  if (*(int *)(param_1 + 0xd6) != 0) {
    (**(code **)(**(int **)(param_1 + 0xd6) + 0x178))(*(int **)(param_1 + 0xd6),param_1);
    FUN_00000e10(*(undefined4 *)(param_1 + 0xd6));
    *(undefined4 *)(param_1 + 0xd6) = extraout_A0;
  }
  FUN_00000b4e(param_1);
  return;
}



// Function: FUN_0000026c at 0000026c
// Size: 32 bytes

void FUN_0000026c(int *param_1)

{
  (**(code **)(*param_1 + 0x3e0))();
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_0000028c at 0000028c
// Size: 32 bytes

void FUN_0000028c(int *param_1)

{
  (**(code **)(*param_1 + 0x40c))();
  FUN_0000026c(param_1);
  return;
}



// Function: FUN_000002ac at 000002ac
// Size: 48 bytes

void FUN_000002ac(int param_1)

{
  undefined4 extraout_A0;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00000e10(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = extraout_A0;
  }
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_000002dc at 000002dc
// Size: 118 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002dc(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  
  (**(code **)(*_DAT_000266a8 + 0x1e4))(_DAT_000266a8,param_1);
  func_0x000020e8(*(undefined4 *)(param_1 + 0x11e));
  *(undefined4 *)(param_1 + 0x11e) = extraout_A0;
  func_0x000020e8(*(undefined4 *)(param_1 + 0x122));
  *(undefined4 *)(param_1 + 0x122) = extraout_A0_00;
  if (*(char *)(param_1 + 300) == '\0') {
    *(undefined4 *)(param_1 + 0x12e) = 0;
  }
  else {
    func_0x00001d08(*(undefined4 *)(param_1 + 0x12e));
    *(undefined4 *)(param_1 + 0x12e) = extraout_A0_01;
  }
  FUN_00000e10(*(undefined4 *)(param_1 + 0x134));
  *(undefined4 *)(param_1 + 0x134) = extraout_A0_02;
  func_0x000034d0(param_1);
  return;
}



// Function: FUN_00000352 at 00000352
// Size: 130 bytes

short FUN_00000352(undefined2 param_1)

{
  char cVar1;
  short sVar2;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar3;
  int local_68 [25];
  
  sVar2 = 0;
  func_0x00004a50((short)local_68,param_1);
  func_0x00004a58((short)local_68);
  piVar3 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    cVar1 = (**(code **)(*piVar3 + 0x338))();
    if ((cVar1 != '\0') && (*(char *)((int)piVar3 + 0xb2) == '\0')) {
      sVar2 = sVar2 + 1;
    }
    func_0x00004a60((short)local_68);
    piVar3 = extraout_A0_00;
  }
  func_0x00002510((short)local_68);
  return sVar2;
}



// Function: FUN_000003d4 at 000003d4
// Size: 86 bytes

int * FUN_000003d4(int *param_1,int *param_2)

{
  short sVar2;
  int *piVar1;
  
  if ((param_2 != (int *)0x0) && (param_1 == *(int **)((int)param_2 + 0x26))) {
    if ((*(char *)((int)param_2 + 0xb2) == '\0') && (sVar2 = FUN_00000352(param_1), sVar2 < 2)) {
      piVar1 = (int *)(**(code **)(*param_1 + 0x164))();
      return piVar1;
    }
    param_2 = (int *)(**(code **)(*param_2 + 0x3a0))();
  }
  return param_2;
}



// Function: FUN_0000042a at 0000042a
// Size: 244 bytes

void FUN_0000042a(int *param_1)

{
  int iVar1;
  short sVar2;
  char cVar3;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar4;
  undefined2 uVar5;
  int local_68 [25];
  
  sVar2 = 3;
  iVar1 = (**(code **)(*param_1 + 0x150))();
  if (iVar1 != 0) {
    sVar2 = (**(code **)(*param_1 + 0x13c))();
    if (sVar2 == 2) {
      func_0x00001c10(0x82);
    }
  }
  uVar5 = SUB42(param_1,0);
  (**(code **)(*param_1 + 0x20))(uVar5,0x1c,uVar5);
  if (iVar1 != 0) {
    if (sVar2 == 1) {
      (**(code **)(*param_1 + 0x158))(uVar5,0x1f);
    }
    else if (sVar2 == 3) {
      (**(code **)(*param_1 + 0x16c))();
    }
  }
  func_0x00004a50((short)local_68,uVar5);
  func_0x00004a58((short)local_68);
  piVar4 = extraout_A0;
  while( true ) {
    cVar3 = (**(code **)(local_68[0] + 8))();
    if (cVar3 == '\0') break;
    (**(code **)(*piVar4 + 0x3a0))();
    func_0x00004a60((short)local_68);
    piVar4 = extraout_A0_00;
  }
  func_0x00002510((short)local_68);
  return;
}



// Function: FUN_0000051e at 0000051e
// Size: 36 bytes

void FUN_0000051e(int *param_1)

{
  (**(code **)(*param_1 + 0x160))();
  (**(code **)(*param_1 + 0x4c))();
  return;
}



// Function: FUN_00000542 at 00000542
// Size: 68 bytes

void FUN_00000542(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x122) != 0) {
    (**(code **)(**(int **)(param_1 + 0x122) + 0xc4))(*(int **)(param_1 + 0x122),param_2);
  }
  if (*(int *)(param_1 + 0x11e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x11e) + 0xc4))(*(int **)(param_1 + 0x11e),param_2);
  }
  return;
}



// Function: FUN_00000586 at 00000586
// Size: 68 bytes

void FUN_00000586(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x11e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x11e) + 0xc4))(*(int **)(param_1 + 0x11e),param_2);
  }
  if (*(int *)(param_1 + 0x122) != 0) {
    (**(code **)(**(int **)(param_1 + 0x122) + 0xc4))(*(int **)(param_1 + 0x122),param_2);
  }
  return;
}



// Function: FUN_000005ca at 000005ca
// Size: 164 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000005ca(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined1 auStack_304 [256];
  undefined1 local_204 [256];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  local_204[0] = 0;
  iVar3 = (**(code **)(*param_1 + 0x150))();
  if (iVar3 == 0) {
    return 3;
  }
  if (*(char *)((int)_DAT_000266a8 + 0x3a) == '\0') {
    uVar4 = 9;
  }
  else {
    uVar4 = 10;
  }
  func_0x00007658(CONCAT22(uVar4,0xfa),auStack_304);
  puVar1 = local_104;
  puVar2 = (undefined1 *)((int)param_1 + 0x1e);
  for (iVar3 = *(byte *)((int)param_1 + 0x1e) + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*_DAT_000266a8 + 0x29c))(_DAT_000266a8,local_204);
  func_0x00007310(0x25b76,local_204,auStack_304,local_104);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000682 at 00000682
// Size: 8 bytes

void FUN_00000682(void)

{
  return;
}



// Function: FUN_0000068a at 0000068a
// Size: 154 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000068a(int *param_1)

{
  int *extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  
  if ((_DAT_000266a8 != (int *)0x0) && (param_1 != _DAT_000266a8)) {
    (**(code **)(*_DAT_000266a8 + 0x1a4))();
    if (extraout_A0 == param_1) {
      (**(code **)(*param_1 + 0x5c))();
      if (extraout_A0_00 == 0) {
        (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,_DAT_000266a8);
      }
      else {
        (**(code **)(*_DAT_000266a8 + 0x1a0))(_DAT_000266a8,extraout_A0_00);
      }
    }
  }
  param_1[1] = 0;
  FUN_00000e10(param_1[2]);
  param_1[2] = extraout_A0_01;
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_00000724 at 00000724
// Size: 32 bytes

void FUN_00000724(int *param_1)

{
  (**(code **)(*param_1 + 0x70))();
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_00000744 at 00000744
// Size: 96 bytes

short FUN_00000744(int *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  sVar2 = 0;
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    sVar1 = (**(code **)(*param_1 + 0x78))();
  }
  if (((*(char *)((int)param_1 + 0x5a) != '\x02') &&
      (sVar2 = (**(code **)(*param_1 + 0x7c))(), *(char *)((int)param_1 + 0x5a) == '\x01')) &&
     (sVar2 == -0xc1)) {
    sVar2 = 0;
  }
  if (sVar1 != 0) {
    sVar2 = sVar1;
  }
  return sVar2;
}



// Function: FUN_000007a4 at 000007a4
// Size: 108 bytes

short FUN_000007a4(int *param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  sVar2 = 0;
  if ((*(char *)((int)param_1 + 0x59) != '\0') && (*(char *)((int)param_1 + 0x5d) == '\0')) {
    sVar1 = (**(code **)(*param_1 + 0x78))();
  }
  if ((((*(char *)((int)param_1 + 0x5a) != '\x02') && (*(char *)((int)param_1 + 0x5e) == '\0')) &&
      (sVar2 = (**(code **)(*param_1 + 0x7c))(), *(char *)((int)param_1 + 0x5a) == '\x01')) &&
     (sVar2 == -0xc1)) {
    sVar2 = 0;
  }
  if (sVar1 != 0) {
    sVar2 = sVar1;
  }
  return sVar2;
}



// Function: FUN_00000810 at 00000810
// Size: 54 bytes

undefined2 FUN_00000810(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0x60) != -0x7ffe) {
    uVar1 = *(undefined2 *)(param_1 + 0x60);
    func_0x000075f0();
    *(undefined2 *)(param_1 + 0x60) = 0x8002;
  }
  return uVar1;
}



// Function: FUN_00000846 at 00000846
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined2 FUN_00000846(int param_1)

{
  if (*(short *)(param_1 + 0x62) != -0x7ffe) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// Function: FUN_0000087a at 0000087a
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000087a(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
  *(undefined4 *)(param_1 + 0x4a) = 0;
  sVar1 = 0x22;
  puVar2 = (undefined2 *)(param_1 + 4);
  puVar3 = auStack_4a;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008a6 at 000008a6
// Size: 40 bytes

void FUN_000008a6(int param_1)

{
  undefined4 extraout_A0;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = extraout_A0;
  FUN_000002dc(param_1);
  return;
}



// Function: FUN_000008ce at 000008ce
// Size: 64 bytes

void FUN_000008ce(int *param_1)

{
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x70))();
    (**(code **)(*(int *)param_1[2] + 0x4c))();
    param_1[2] = 0;
  }
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_0000090e at 0000090e
// Size: 130 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000090e(undefined4 param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  
  FUN_00000e98(param_1);
  (**(code **)(*_DAT_000266a8 + 0x19c))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    (**(code **)(*extraout_A0 + 0x3b8))();
    uVar1 = 0;
    if (extraout_A0_00 != (int *)0x0) {
      uVar1 = (**(code **)(*extraout_A0_00 + 0xa4))();
      if ((char)uVar1 != '\0') {
        (**(code **)(*_DAT_000266a8 + 0x1a0))((char)_DAT_000266a8,extraout_A0_00);
        uVar1 = (**(code **)(*extraout_A0_00 + 0xcc))();
      }
    }
  }
  return uVar1;
}



// Function: FUN_00000990 at 00000990
// Size: 40 bytes

void FUN_00000990(int param_1)

{
  undefined4 extraout_A0;
  
  func_0x00001d08(*(undefined4 *)(param_1 + 0x16));
  *(undefined4 *)(param_1 + 0x16) = extraout_A0;
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_000009b8 at 000009b8
// Size: 98 bytes

void FUN_000009b8(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A0_03;
  
  func_0x00001d20(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = extraout_A0;
  func_0x00001d20(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x94) = extraout_A0_00;
  func_0x00001d20(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = extraout_A0_01;
  FUN_00000e10(*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = extraout_A0_02;
  FUN_00000e10(*(undefined4 *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x84) = extraout_A0_03;
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_00000a1a at 00000a1a
// Size: 62 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000a1a(int *param_1)

{
  int extraout_A0;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    (**(code **)(*param_1 + 0x434))();
    if (extraout_A0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  FUN_000000be((short)param_1);
  return;
}



// Function: FUN_00000a6e at 00000a6e
// Size: 56 bytes

void FUN_00000a6e(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = extraout_A0;
  FUN_00000e10(*(undefined4 *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x8c) = extraout_A0_00;
  FUN_00000bd6(param_1);
  return;
}



// Function: FUN_00000aa6 at 00000aa6
// Size: 40 bytes

void FUN_00000aa6(int param_1)

{
  undefined4 extraout_A0;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = extraout_A0;
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_00000ace at 00000ace
// Size: 56 bytes

void FUN_00000ace(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00000e10(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = extraout_A0;
  func_0x00001d08(*(undefined4 *)(param_1 + 10));
  *(undefined4 *)(param_1 + 10) = extraout_A0_00;
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_00000b06 at 00000b06
// Size: 68 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b06(int *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0xe) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x58))();
    (**(code **)(*param_1 + 100))(param_1,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_00000ace(param_1);
  return;
}



// Function: FUN_00000b4e at 00000b4e
// Size: 126 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b4e(int param_1)

{
  undefined4 extraout_A0;
  int *piVar1;
  undefined2 uVar2;
  int local_c;
  
  piVar1 = (int *)&stack0xfffffff8;
  if (param_1 == _DAT_00025850) {
    _DAT_00025850 = 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (*(int *)(param_1 + 0x84) != 0) {
      *(undefined4 *)(**(int **)(param_1 + 0x7c) + 0x3e) = *(undefined4 *)(param_1 + 0x84);
      uVar2 = (undefined2)*(undefined4 *)(**(int **)(param_1 + 0x7c) + 0x3e);
      func_0x000075d0();
      piVar1 = &local_c;
      *(undefined2 *)(**(int **)(param_1 + 0x7c) + 0x3c) = uVar2;
      if (*(char *)(param_1 + 0xbf) == '\0') {
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      else {
        func_0x00001d08(*(undefined4 *)(param_1 + 0x80));
        *(undefined4 *)(param_1 + 0x80) = extraout_A0;
        piVar1 = &local_c;
      }
    }
    *(undefined4 *)((int)piVar1 + -4) = *(undefined4 *)(param_1 + 0x7c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_c = param_1;
  FUN_00000bd6();
  return;
}



// Function: FUN_00000bd6 at 00000bd6
// Size: 386 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000bd6(int *param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *extraout_A0_01;
  undefined4 extraout_A0_02;
  int *extraout_A0_03;
  int *extraout_A0_04;
  undefined4 extraout_A0_05;
  int *piVar2;
  undefined2 uVar3;
  int local_cc [25];
  int local_68 [25];
  
  uVar3 = SUB42(param_1,0);
  func_0x00004b40((short)local_68,uVar3);
  func_0x00004b48((short)local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x4c))();
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  func_0x00002798((short)local_68);
  (**(code **)(*param_1 + 0x1e0))();
  (**(code **)(*_DAT_000266a8 + 0x22c))();
  (**(code **)(*_DAT_000266a8 + 0x1a4))();
  if (param_1 == extraout_A0_01) {
    (**(code **)(*_DAT_000266a8 + 0x1a0))((short)_DAT_000266a8,(short)_DAT_000266a8);
  }
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x1e) + 0x178))
              ((short)*(int **)((int)param_1 + 0x1e),uVar3);
    *(undefined4 *)((int)param_1 + 0x1e) = 0;
  }
  FUN_00000e10((short)*(undefined4 *)((int)param_1 + 0x6e));
  *(undefined4 *)((int)param_1 + 0x6e) = extraout_A0_02;
  if (*(int *)((int)param_1 + 0x72) != 0) {
    func_0x00003360((short)local_cc,uVar3);
    func_0x00003370((short)local_cc);
    piVar2 = extraout_A0_03;
    while( true ) {
      cVar1 = (**(code **)(local_cc[0] + 8))();
      if (cVar1 == '\0') break;
      (**(code **)(*piVar2 + 0x5c))((short)piVar2,uVar3);
      func_0x00003378((short)local_cc);
      piVar2 = extraout_A0_04;
    }
    func_0x00003368((short)local_cc);
  }
  FUN_00000e10((short)*(undefined4 *)((int)param_1 + 0x72));
  *(undefined4 *)((int)param_1 + 0x72) = extraout_A0_05;
  if (*(int *)((int)param_1 + 0x26) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x1a0))
              ((short)*(int **)((int)param_1 + 0x26),uVar3);
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  func_0x000034d0(uVar3);
  return;
}



// Function: FUN_00000d58 at 00000d58
// Size: 96 bytes

void FUN_00000d58(int *param_1)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_68 [25];
  
  (**(code **)(*param_1 + 0x20))((short)param_1,0x1c,(short)param_1);
  func_0x00004b40(local_68,param_1);
  func_0x00004b48(local_68);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x198))();
    func_0x00004b50((short)local_68);
    piVar2 = extraout_A0_00;
  }
  func_0x00002798((short)local_68);
  return;
}



// Function: FUN_00000db8 at 00000db8
// Size: 30 bytes

void FUN_00000db8(void)

{
  char cVar1;
  int *extraout_A0;
  code *in_A1;
  int *unaff_A2;
  int unaff_A6;
  
  while( true ) {
    cVar1 = (*in_A1)();
    if (cVar1 == '\0') break;
    (**(code **)(*unaff_A2 + 0x198))();
    func_0x00004b50((short)unaff_A6 + -100);
    in_A1 = *(code **)(*(int *)(unaff_A6 + -100) + 8);
    unaff_A2 = extraout_A0;
  }
  func_0x00002798();
  return;
}



// Function: FUN_00000dd6 at 00000dd6
// Size: 24 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000dd6(undefined4 param_1)

{
  _DAT_000257ee = 0;
  FUN_00000db8(param_1);
  return;
}



// Function: FUN_00000dee at 00000dee
// Size: 34 bytes

void FUN_00000dee(int param_1)

{
  if (*(int *)(param_1 + 0x2e) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2e) + 0x3a4))();
  }
  return;
}



// Function: FUN_00000e10 at 00000e10
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000e10(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x1f];
  func_0x00001a10(param_1);
  param_1[0x1f] = 0;
  (**(code **)(*param_1 + 0x1a4))((short)param_1,0);
  if (*(int *)((int)param_1 + 0x26) == 0) {
    if (_DAT_000266a8 != (int *)0x0) {
      (**(code **)(*_DAT_000266a8 + 0x1e8))((char)_DAT_000266a8,param_1);
    }
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x1a4))
              ((char)*(int **)((int)param_1 + 0x26),param_1);
  }
  FUN_00000bd6(param_1);
  func_0x00001c58((short)iVar1);
  return;
}



// Function: FUN_00000e98 at 00000e98
// Size: 38 bytes

void FUN_00000e98(int *param_1)

{
  FUN_00000d58(param_1);
  (**(code **)(*param_1 + 0x334))();
  return;
}



// Function: FUN_00000ebe at 00000ebe
// Size: 50 bytes

void FUN_00000ebe(int *param_1)

{
  (**(code **)(*param_1 + 0x198))();
  if (*(char *)((int)param_1 + 0xa3) != '\0') {
    (**(code **)(*param_1 + 0x4c))();
  }
  return;
}



// Function: FUN_00000ef0 at 00000ef0
// Size: 80 bytes

void FUN_00000ef0(int *param_1)

{
  if (*(int *)((int)param_1 + 0x26) == 0) {
    (**(code **)(*param_1 + 0x3a0))();
  }
  else if (*(char *)((int)param_1 + 0xa5) == '\0') {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x19c))(*(int **)((int)param_1 + 0x26),param_1);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x26) + 0x164))();
  }
  return;
}



// Function: FUN_00000f40 at 00000f40
// Size: 102 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000f40(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_14 [4];
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *param_2;
  local_8 = param_2[1];
  (**(code **)(*param_1 + 0x154))((short)param_1,(short)&local_c);
  if (*(char *)((int)param_1 + 0xa2) != '\0') {
    func_0x000038a0(&local_c,(short)auStack_14,(short)local_10,(short)param_1[0x1f]);
    func_0x00007210((short)auStack_14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00001004 at 00001004
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001004(int *param_1)

{
  char cVar1;
  
  FUN_00000e98(param_1);
  cVar1 = (**(code **)(*param_1 + 0x410))();
  if (cVar1 != '\0') {
    if ((_DAT_00027fb4 != (int *)0x0) && (param_1 != _DAT_00027fb4)) {
      (**(code **)(*_DAT_00027fb4 + 0x268))();
    }
    if ((_DAT_00027fbc != (int *)0x0) && (param_1 != _DAT_00027fbc)) {
      (**(code **)(*_DAT_00027fbc + 0x268))();
    }
    if ((_DAT_00027fc4 != (int *)0x0) && (param_1 != _DAT_00027fc4)) {
      (**(code **)(*_DAT_00027fc4 + 0x268))();
    }
    if ((_DAT_00027fc8 != (int *)0x0) && (param_1 != _DAT_00027fc8)) {
      (**(code **)(*_DAT_00027fc8 + 0x268))();
    }
  }
  return;
}



// Function: FUN_000010b8 at 000010b8
// Size: 108 bytes

void FUN_000010b8(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  
  sVar2 = (short)param_1;
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    func_0x000046f8(sVar2,sVar2 + 0x13);
    *(undefined2 *)((int)param_1 + 0x92) = 0;
    FUN_00000118(param_1,param_1[0x26]);
    func_0x00004280(param_1,param_1 + 0x25,4);
    uVar1 = (**(code **)(*param_1 + 0x60))();
    FUN_00000118(param_1,uVar1);
  }
  FUN_00000ace(sVar2);
  return;
}



// Function: FUN_00001124 at 00001124
// Size: 82 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001124(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  }
  if (param_1 == _DAT_00028cce) {
    _DAT_00028cce = *(int *)(param_1 + 0xa4);
  }
  FUN_00000d58(param_1);
  return;
}



// Function: FUN_00001176 at 00001176
// Size: 64 bytes

void FUN_00001176(int param_1)

{
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(short *)(param_1 + 0x814) != 0)) {
    func_0x00004280(param_1,param_1 + 0x13,(int)*(short *)(param_1 + 0x814));
    *(undefined2 *)(param_1 + 0x814) = 0;
  }
  FUN_00000ace(param_1);
  return;
}



