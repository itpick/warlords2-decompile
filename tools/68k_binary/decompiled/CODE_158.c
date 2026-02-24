// Warlords II - Decompiled 68k Code
// Segment: CODE_158
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000082 at 00000082
// Size: 44 bytes

void FUN_00000082(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x1287a;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_000000ae at 000000ae
// Size: 124 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000ae(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0000169e(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    func_0x00007310(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(*param_1 + 0x4c))();
  func_0x00001c10();
  return;
}



// Function: FUN_00000168 at 00000168
// Size: 56 bytes

void FUN_00000168(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  func_0x00001d08(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = extraout_A0;
  func_0x00001d08(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = extraout_A0_00;
  FUN_000015d0(param_1);
  return;
}



// Function: FUN_000001a0 at 000001a0
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000001a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000001f2 at 000001f2
// Size: 126 bytes

undefined4 FUN_000001f2(void)

{
  undefined4 uVar1;
  undefined2 local_2e;
  undefined2 local_22;
  
  local_22 = CONCAT11(1,(undefined1)local_22);
  func_0x00007638();
  if (local_22 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_2e = CONCAT11(1,(undefined1)local_2e);
    func_0x00007638();
    if (local_2e == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// Function: FUN_00000270 at 00000270
// Size: 18 bytes

void FUN_00000270(undefined4 param_1)

{
  func_0x00002120(param_1);
  return;
}



// Function: FUN_00000282 at 00000282
// Size: 40 bytes

void FUN_00000282(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0x129b6;
  param_1[1] = 0;
  return;
}



// Function: FUN_000002aa at 000002aa
// Size: 174 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000002aa(int *param_1)

{
  int iVar1;
  int extraout_A0;
  int extraout_A0_00;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0000169e(param_1);
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    func_0x000073b0(0x22);
    iVar1 = 0;
    if (extraout_A0 != 0) {
      func_0x00006f68(extraout_A0);
      iVar1 = extraout_A0_00;
    }
    FUN_00000270(iVar1);
    param_1[1] = iVar1;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00000358 at 00000358
// Size: 40 bytes

void FUN_00000358(int param_1)

{
  undefined4 extraout_A0;
  
  func_0x000020e8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = extraout_A0;
  FUN_000015d0(param_1);
  return;
}



// Function: FUN_00000380 at 00000380
// Size: 42 bytes

void FUN_00000380(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = param_2;
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),0xbc8,&local_8);
  return;
}



// Function: FUN_000003aa at 000003aa
// Size: 190 bytes

void FUN_000003aa(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int extraout_A0;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_68;
  undefined4 local_64;
  
  func_0x000025a0(&local_68,*(undefined4 *)(param_1 + 4));
  (**(code **)(local_68 + 0xc))();
  puVar5 = &stack0xffffff84;
  while( true ) {
    uVar1 = local_64;
    *(int **)(puVar5 + -4) = &local_68;
    *(undefined4 *)(puVar5 + -8) = 0x446;
    cVar3 = func_0x000025d0();
    puVar4 = puVar5;
    if (cVar3 == '\0') break;
    *(undefined4 *)(puVar5 + -4) = uVar1;
    *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(param_1 + 4);
    pcVar2 = *(code **)(**(int **)(puVar5 + -8) + 0x94);
    *(undefined4 *)(puVar5 + -0xc) = 0x3f8;
    (*pcVar2)();
    uVar1 = **(undefined4 **)(extraout_A0 + 8);
    *(undefined4 *)(puVar5 + -0xc) = param_2;
    *(undefined4 *)(puVar5 + -0x10) = uVar1;
    puVar5[-0x12] = 0;
    puVar5[-0x14] = 1;
    *(undefined4 *)(puVar5 + -0x18) = 0x412;
    func_0x00007638();
    puVar4 = puVar5 + -0xc;
    if (*(short *)(puVar5 + -0x14) == 0) break;
    *(int **)(puVar5 + -0x10) = &local_68;
    pcVar2 = *(code **)(**(int **)(puVar5 + -0x10) + 0x10);
    *(undefined4 *)(puVar5 + -0x14) = 0x434;
    (*pcVar2)();
    puVar5 = puVar5 + -0xc;
  }
  *(undefined2 *)(puVar4 + -2) = 0xffff;
  *(int **)(puVar4 + -6) = &local_68;
  *(undefined4 *)(puVar4 + -10) = 0x45c;
  func_0x000025a8();
  return;
}



// Function: FUN_00000468 at 00000468
// Size: 140 bytes

void FUN_00000468(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *extraout_A0;
  int extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  if (extraout_A0 == (int *)0x0) {
    func_0x000073b0(0xc);
    uVar1 = 0;
    if (extraout_A0_00 != 0) {
      FUN_00000082(extraout_A0_00);
      uVar1 = extraout_A0_01;
    }
    FUN_000000ae(uVar1,param_2,param_3);
    (**(code **)(*(int *)param_1[1] + 0xac))((int *)param_1[1],uVar1);
  }
  else {
    (**(code **)(*extraout_A0 + 0x58))(extraout_A0,param_3);
  }
  return;
}



// Function: FUN_000004f4 at 000004f4
// Size: 268 bytes

undefined4 FUN_000004f4(int param_1,undefined4 param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  char cVar5;
  undefined4 uVar4;
  int extraout_A0;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int local_68;
  undefined4 local_64;
  
  func_0x000025a0(&local_68,*(undefined4 *)(param_1 + 4));
  (**(code **)(local_68 + 0xc))();
  puVar8 = &stack0xffffff80;
  while( true ) {
    uVar4 = local_64;
    *(int **)(puVar8 + -4) = &local_68;
    *(undefined4 *)(puVar8 + -8) = 0x594;
    cVar5 = func_0x000025d0();
    iVar6 = 0;
    puVar7 = puVar8;
    if (cVar5 == '\0') break;
    *(undefined4 *)(puVar8 + -4) = uVar4;
    *(undefined4 *)(puVar8 + -8) = *(undefined4 *)(param_1 + 4);
    pcVar1 = *(code **)(**(int **)(puVar8 + -8) + 0x94);
    *(undefined4 *)(puVar8 + -0xc) = 0x546;
    (*pcVar1)();
    uVar4 = **(undefined4 **)(extraout_A0 + 8);
    *(undefined4 *)(puVar8 + -0xc) = param_2;
    *(undefined4 *)(puVar8 + -0x10) = uVar4;
    puVar8[-0x12] = 0;
    puVar8[-0x14] = 1;
    *(undefined4 *)(puVar8 + -0x18) = 0x560;
    func_0x00007638();
    puVar7 = puVar8 + -0xc;
    iVar6 = extraout_A0;
    if (*(short *)(puVar8 + -0x14) == 0) break;
    *(int **)(puVar8 + -0x10) = &local_68;
    pcVar1 = *(code **)(**(int **)(puVar8 + -0x10) + 0x10);
    *(undefined4 *)(puVar8 + -0x14) = 0x582;
    (*pcVar1)();
    puVar8 = puVar8 + -0xc;
  }
  if (iVar6 == 0) {
    *(undefined4 *)(puVar7 + -4) = 0x12a2a;
    *(byte **)(puVar7 + -8) = param_3;
    *(undefined4 *)(puVar7 + -0xc) = 0x5ac;
    func_0x00007350();
    *(undefined2 *)(puVar7 + -10) = 0xffff;
    *(int **)(puVar7 + -0xe) = &local_68;
    *(undefined4 *)(puVar7 + -0x12) = 0x5bc;
    func_0x000025a8();
    uVar4 = 0;
  }
  else {
    pbVar3 = (byte *)**(undefined4 **)(iVar6 + 4);
    for (iVar2 = *(byte *)**(undefined4 **)(iVar6 + 4) + 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      param_3 = param_3 + 1;
    }
    *(undefined2 *)(puVar7 + -2) = 0xffff;
    *(int **)(puVar7 + -6) = &local_68;
    *(undefined4 *)(puVar7 + -10) = 0x5f4;
    func_0x000025a8();
    uVar4 = 1;
  }
  return uVar4;
}



// Function: FUN_00000600 at 00000600
// Size: 78 bytes

undefined4 FUN_00000600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  undefined4 local_8;
  
  local_8 = param_2;
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),0xbc8,&local_8);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc4))(*(int **)(param_1 + 4),extraout_A0);
  }
  return uVar1;
}



// Function: FUN_0000064e at 0000064e
// Size: 204 bytes

void FUN_0000064e(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int extraout_A0;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int local_68;
  undefined4 local_64;
  
  func_0x000025a0(&local_68,*(undefined4 *)(param_1 + 4));
  (**(code **)(local_68 + 0xc))();
  puVar6 = &stack0xffffff88;
  while( true ) {
    uVar1 = local_64;
    *(int **)(puVar6 + -4) = &local_68;
    *(undefined4 *)(puVar6 + -8) = 0x6e6;
    cVar3 = func_0x000025d0();
    iVar4 = 0;
    puVar5 = puVar6;
    if (cVar3 == '\0') break;
    *(undefined4 *)(puVar6 + -4) = uVar1;
    *(undefined4 *)(puVar6 + -8) = *(undefined4 *)(param_1 + 4);
    pcVar2 = *(code **)(**(int **)(puVar6 + -8) + 0x94);
    *(undefined4 *)(puVar6 + -0xc) = 0x698;
    (*pcVar2)();
    uVar1 = **(undefined4 **)(extraout_A0 + 8);
    *(undefined4 *)(puVar6 + -0xc) = param_2;
    *(undefined4 *)(puVar6 + -0x10) = uVar1;
    puVar6[-0x12] = 0;
    puVar6[-0x14] = 1;
    *(undefined4 *)(puVar6 + -0x18) = 0x6b2;
    func_0x00007638();
    puVar5 = puVar6 + -0xc;
    iVar4 = extraout_A0;
    if (*(short *)(puVar6 + -0x14) == 0) break;
    *(int **)(puVar6 + -0x10) = &local_68;
    pcVar2 = *(code **)(**(int **)(puVar6 + -0x10) + 0x10);
    *(undefined4 *)(puVar6 + -0x14) = 0x6d4;
    (*pcVar2)();
    puVar6 = puVar6 + -0xc;
  }
  if (iVar4 != 0) {
    *(int *)(puVar5 + -4) = iVar4;
    *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(param_1 + 4);
    pcVar2 = *(code **)(**(int **)(puVar5 + -8) + 0xc4);
    *(undefined4 *)(puVar5 + -0xc) = 0x700;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar5 + -2) = 0xffff;
  *(int **)(puVar5 + -6) = &local_68;
  *(undefined4 *)(puVar5 + -10) = 0x710;
  func_0x000025a8();
  return;
}



// Function: FUN_0000071a at 0000071a
// Size: 118 bytes

undefined4 FUN_0000071a(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int extraout_A0;
  undefined4 local_8;
  
  local_8 = param_2;
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),0xbc8,&local_8);
  if (extraout_A0 == 0) {
    func_0x00007350(param_3,0x12a2a);
    uVar3 = 0;
  }
  else {
    pbVar2 = (byte *)**(undefined4 **)(extraout_A0 + 8);
    for (iVar1 = *(byte *)**(undefined4 **)(extraout_A0 + 8) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      param_3 = param_3 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_00000790 at 00000790
// Size: 66 bytes

undefined4
FUN_00000790(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0xb8))(extraout_A0,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



// Function: FUN_000007d2 at 000007d2
// Size: 62 bytes

void FUN_000007d2(void)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x1e);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    func_0x00006f80(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  FUN_00001274(uVar1);
  return;
}



// Function: FUN_00000810 at 00000810
// Size: 18 bytes

void FUN_00000810(undefined4 param_1)

{
  FUN_0000169e(param_1);
  return;
}



// Function: FUN_00000822 at 00000822
// Size: 18 bytes

void FUN_00000822(undefined4 param_1)

{
  FUN_000016de(param_1);
  return;
}



// Function: FUN_00000834 at 00000834
// Size: 18 bytes

void FUN_00000834(undefined4 param_1)

{
  FUN_000016de(param_1);
  return;
}



// Function: FUN_00000846 at 00000846
// Size: 18 bytes

void FUN_00000846(undefined4 param_1)

{
  FUN_000016de(param_1);
  return;
}



// Function: FUN_00000858 at 00000858
// Size: 18 bytes

void FUN_00000858(undefined4 param_1)

{
  FUN_000016de(param_1);
  return;
}



// Function: FUN_0000086a at 0000086a
// Size: 44 bytes

void FUN_0000086a(undefined4 *param_1)

{
  func_0x00006f78(param_1);
  *param_1 = 0x10a10;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_00000896 at 00000896
// Size: 18 bytes

void FUN_00000896(undefined4 param_1)

{
  FUN_00000810(param_1);
  return;
}



// Function: FUN_000008a8 at 000008a8
// Size: 56 bytes

void FUN_000008a8(int param_1)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  FUN_00001736(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = extraout_A0;
  FUN_00001736(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = extraout_A0_00;
  FUN_000015d0(param_1);
  return;
}



// Function: FUN_000008e0 at 000008e0
// Size: 108 bytes

void FUN_000008e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_000007d2();
    *(undefined4 *)(param_1 + 4) = extraout_A0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_000007d2();
    *(undefined4 *)(param_1 + 8) = extraout_A0_00;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x90))(*(int **)(param_1 + 4),param_2,param_3,param_4);
  (**(code **)(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),param_3,param_2,param_4);
  return;
}



// Function: FUN_0000094c at 0000094c
// Size: 92 bytes

void FUN_0000094c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x98))(*(int **)(param_1 + 4),param_2,param_3,param_4);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x98))(*(int **)(param_1 + 8),param_3,param_2,param_4);
  }
  return;
}



// Function: FUN_000009a8 at 000009a8
// Size: 132 bytes

void FUN_000009a8(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar2;
  int local_6c [26];
  
  FUN_00001130((short)local_6c,param_2,param_1);
  FUN_000011ae(local_6c);
  piVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_6c[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*piVar2 + 0x24))(piVar2,param_3,param_2,param_4,param_1);
    FUN_000011c0(local_6c);
    piVar2 = extraout_A0_00;
  }
  FUN_00001174((short)local_6c);
  return;
}



// Function: FUN_00000a2c at 00000a2c
// Size: 282 bytes

void FUN_00000a2c(int param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 uVar2;
  int local_d4 [26];
  int local_6c [26];
  
  FUN_00001130((short)local_6c,param_2,(short)param_1);
  FUN_000011ae((short)local_6c);
  uVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_6c[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(**(int **)(param_1 + 4) + 0x68))
              ((short)*(int **)(param_1 + 4),(short)local_6c[1],1);
    (**(code **)(**(int **)(param_1 + 8) + 0x98))
              ((short)*(int **)(param_1 + 8),(short)uVar2,param_2,0xfffe);
    FUN_000011c0(local_6c);
    uVar2 = extraout_A0_00;
  }
  FUN_00001174((short)local_6c);
  FUN_000011d2((short)local_d4,param_2,(short)param_1);
  FUN_00001250((short)local_d4);
  uVar2 = extraout_A0_01;
  while( true ) {
    cVar1 = (**(code **)(local_d4[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(**(int **)(param_1 + 8) + 0x68))
              ((short)*(int **)(param_1 + 8),(short)local_d4[1],1);
    (**(code **)(**(int **)(param_1 + 4) + 0x98))
              ((short)*(int **)(param_1 + 4),(short)uVar2,param_2,0xfffe);
    FUN_00001262(local_d4);
    uVar2 = extraout_A0_02;
  }
  FUN_00001216((short)local_d4);
  return;
}



// Function: FUN_00000b46 at 00000b46
// Size: 18 bytes

void FUN_00000b46(undefined4 *param_1)

{
  FUN_0000086a(param_1);
  *param_1 = 0x10a78;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// Function: FUN_00000b58 at 00000b58
// Size: 22 bytes

void FUN_00000b58(void)

{
  undefined4 *unaff_A2;
  
  *unaff_A2 = 0x10a78;
  *(undefined1 *)(unaff_A2 + 3) = 0;
  return;
}



// Function: FUN_00000b6e at 00000b6e
// Size: 90 bytes

undefined4 FUN_00000b6e(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 1;
  uVar1 = 0;
  if ((param_2 != 0) && (uVar1 = 0xffffffff, param_3 != -1)) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2);
    uVar1 = (**(code **)(*param_1 + 0x74))(param_1,param_3,param_2,param_4);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return uVar1;
}



// Function: FUN_00000bc8 at 00000bc8
// Size: 114 bytes

uint FUN_00000bc8(int param_1,uint param_2,uint param_3)

{
  int extraout_A0;
  undefined4 local_8;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    param_2 = (**(code **)(**(int **)(param_1 + 8) + 0xa0))(*(int **)(param_1 + 8),param_2,&local_8)
    ;
    if ((char)param_2 != '\0') {
      (**(code **)(**(int **)(param_1 + 8) + 0x74))(*(int **)(param_1 + 8),local_8);
      param_2 = (uint)(*(int *)(extraout_A0 + 8) < 0);
      if (param_3 >> 0x18 != param_2) {
        param_2 = -*(int *)(extraout_A0 + 8);
        *(uint *)(extraout_A0 + 8) = param_2;
      }
    }
  }
  return param_2;
}



// Function: FUN_00000c3a at 00000c3a
// Size: 96 bytes

bool FUN_00000c3a(int param_1,int param_2)

{
  char cVar1;
  int extraout_A0;
  undefined4 local_8;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xa0))(*(int **)(param_1 + 8),param_2,&local_8)
     , cVar1 != '\0')) {
    (**(code **)(**(int **)(param_1 + 8) + 0x74))(*(int **)(param_1 + 8),local_8);
    return *(int *)(extraout_A0 + 8) < 0;
  }
  return false;
}



// Function: FUN_00000c9a at 00000c9a
// Size: 172 bytes

undefined4 FUN_00000c9a(int *param_1,int param_2,undefined4 param_3)

{
  char cVar2;
  undefined4 uVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_6c [26];
  
  uVar1 = 0;
  if (param_2 != 0) {
    FUN_00001130((short)local_6c,(short)param_2,(char)param_1);
    FUN_000011ae((short)local_6c);
    uVar1 = extraout_A0;
    while( true ) {
      cVar2 = (**(code **)(local_6c[0] + 8))();
      if (cVar2 == '\0') break;
      cVar2 = (**(code **)(*param_1 + 0x70))((short)param_1,(char)uVar1);
      if (param_3._0_1_ != cVar2) {
        uVar4 = (undefined2)((uint)uVar1 >> 0x10);
        uVar3 = (short)((uint)param_1 >> 0x10);
        (**(code **)(*param_1 + 0x6c))((short)param_1,(short)uVar1);
        (**(code **)(*param_1 + 0x68))(param_1,(short)uVar1,uVar3,uVar4);
      }
      FUN_000011c0((char)local_6c);
      uVar1 = extraout_A0_00;
    }
    uVar1 = FUN_00001174((short)local_6c);
  }
  return uVar1;
}



// Function: FUN_00000d46 at 00000d46
// Size: 174 bytes

void FUN_00000d46(int *param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *extraout_A0;
  int local_68 [25];
  
  func_0x000025a0((short)local_68,(short)param_1[2]);
  (**(code **)(local_68[0] + 0xc))();
  while( true ) {
    iVar1 = local_68[1];
    cVar2 = func_0x000025d0((char)local_68);
    if (cVar2 == '\0') break;
    (**(code **)(*(int *)param_1[2] + 0x74))((short)(int *)param_1[2],(char)iVar1);
    if ((int)extraout_A0[2] < 0) {
      (**(code **)(*param_1 + 0x78))((short)param_1,(short)*extraout_A0,param_2,param_3,param_4);
    }
    (**(code **)(local_68[0] + 0x10))();
  }
  func_0x000025a8((short)local_68);
  return;
}



// Function: FUN_00000df4 at 00000df4
// Size: 116 bytes

void FUN_00000df4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x70))((short)param_1,(char)param_2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x6c))((short)param_1,(short)param_2);
    (**(code **)(*param_1 + 0x7c))(param_1,param_2,param_3,param_4,(short)param_5);
    (**(code **)(*param_2 + 0x24))(param_2,param_3,param_4,param_5,param_1);
  }
  return;
}



// Function: FUN_00000e68 at 00000e68
// Size: 128 bytes

void FUN_00000e68(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int local_6c [26];
  
  FUN_000011d2((short)local_6c,param_2,(short)param_1);
  FUN_00001250(local_6c);
  uVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_6c[0] + 8))();
    if (cVar1 == '\0') break;
    (**(code **)(*param_1 + 0x78))(param_1,uVar2,param_3,param_4,param_5);
    FUN_00001262(local_6c);
    uVar2 = extraout_A0_00;
  }
  FUN_00001216((short)local_6c);
  return;
}



// Function: FUN_00000ee8 at 00000ee8
// Size: 58 bytes

void FUN_00000ee8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 extraout_A0;
  
  (**(code **)(*(int *)param_2[1] + 0x74))((int *)param_2[1],param_1);
  (**(code **)(*(int *)param_2[1] + 0x84))((int *)param_2[1],*param_2,extraout_A0);
  return;
}



// Function: FUN_00000f22 at 00000f22
// Size: 52 bytes

void FUN_00000f22(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x000025a0(param_1,param_2);
  *param_1 = 0x10af8;
  param_1[0x19] = param_3;
  return;
}



// Function: FUN_00000f56 at 00000f56
// Size: 58 bytes

undefined4 FUN_00000f56(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x10af8;
    uVar1 = func_0x000025a8((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = func_0x00002590((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00000f90 at 00000f90
// Size: 214 bytes

void FUN_00000f90(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int extraout_A0;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0xa0))
                      ((short)*(int **)(param_1 + 0x10),(short)*(undefined4 *)(param_1 + 100),
                       (char)&local_6c);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      func_0x00002598((short)&local_68,(short)*(undefined4 *)(param_1 + 0x10),1,(short)local_6c);
      (**(code **)(local_68 + 0xc))();
      while( true ) {
        uVar1 = local_64;
        cVar2 = func_0x000025d0((char)&local_68);
        if (cVar2 == '\0') break;
        (**(code **)(**(int **)(param_1 + 0x10) + 0xa4))
                  ((short)*(int **)(param_1 + 0x10),(char)uVar1);
        if (extraout_A0 != *(int *)(param_1 + 100)) break;
        local_6c = uVar1;
        (**(code **)(local_68 + 0x10))();
      }
      *(undefined4 *)(param_1 + 8) = local_6c;
      func_0x000025a8((short)&local_68);
    }
  }
  func_0x000025d8((char)param_1);
  return;
}



// Function: FUN_00001066 at 00001066
// Size: 64 bytes

undefined4 FUN_00001066(int param_1)

{
  char cVar1;
  int extraout_A0;
  
  cVar1 = func_0x000025d0(param_1);
  if ((cVar1 != '\0') &&
     ((**(code **)(**(int **)(param_1 + 0x10) + 0xa4))
                (*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 4)),
     extraout_A0 == *(int *)(param_1 + 100))) {
    return 1;
  }
  return 0;
}



// Function: FUN_000010a6 at 000010a6
// Size: 86 bytes

void FUN_000010a6(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xc))();
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xc))();
    (**(code **)(*(int *)param_1[4] + 0xa8))((int *)param_1[4],param_1[1]);
  }
  return;
}



// Function: FUN_000010fc at 000010fc
// Size: 52 bytes

void FUN_000010fc(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*(int *)param_1[4] + 0xa8))((int *)param_1[4],param_1[1]);
  return;
}



// Function: FUN_00001130 at 00001130
// Size: 68 bytes

void FUN_00001130(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  FUN_00000f22(param_1,uVar1,param_2);
  *param_1 = 0x10b10;
  return;
}



// Function: FUN_00001174 at 00001174
// Size: 58 bytes

undefined4 FUN_00001174(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x10b10;
    uVar1 = FUN_00000f56((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = func_0x00002590((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_000011ae at 000011ae
// Size: 18 bytes

void FUN_000011ae(undefined4 param_1)

{
  FUN_000010a6(param_1);
  return;
}



// Function: FUN_000011c0 at 000011c0
// Size: 18 bytes

void FUN_000011c0(undefined4 param_1)

{
  FUN_000010fc(param_1);
  return;
}



// Function: FUN_000011d2 at 000011d2
// Size: 68 bytes

void FUN_000011d2(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 8);
  }
  FUN_00000f22(param_1,uVar1,param_2);
  *param_1 = 0x10b28;
  return;
}



// Function: FUN_00001216 at 00001216
// Size: 58 bytes

undefined4 FUN_00001216(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x10b28;
    uVar1 = FUN_00000f56((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = func_0x00002590((short)param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00001250 at 00001250
// Size: 18 bytes

void FUN_00001250(undefined4 param_1)

{
  FUN_000010a6(param_1);
  return;
}



// Function: FUN_00001262 at 00001262
// Size: 18 bytes

void FUN_00001262(undefined4 param_1)

{
  FUN_000010fc(param_1);
  return;
}



// Function: FUN_00001274 at 00001274
// Size: 26 bytes

void FUN_00001274(undefined4 param_1)

{
  func_0x000020c0(param_1,1);
  return;
}



// Function: FUN_0000128e at 0000128e
// Size: 88 bytes

void FUN_0000128e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x9c))(param_1,param_2,param_3,param_4,&local_8);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))(param_1,local_8,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_000012e6 at 000012e6
// Size: 52 bytes

void FUN_000012e6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  (**(code **)(*param_1 + 0x60))(param_1,param_2,&local_10,1);
  return;
}



// Function: FUN_0000131a at 0000131a
// Size: 68 bytes

void FUN_0000131a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  local_18 = &local_10;
  local_14 = param_1;
  (**(code **)(*param_1 + 0x8c))(param_1,0xce0,&local_18,param_5);
  return;
}



// Function: FUN_0000135e at 0000135e
// Size: 68 bytes

void FUN_0000135e(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = 0x7ffffffe;
  local_18 = &local_10;
  local_14 = param_1;
  (**(code **)(*param_1 + 0x8c))(param_1,0xce0,&local_18,param_3);
  return;
}



// Function: FUN_000013a2 at 000013a2
// Size: 28 bytes

void FUN_000013a2(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return;
}



// Function: FUN_000013be at 000013be
// Size: 30 bytes

void FUN_000013be(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return;
}



// Function: FUN_000013dc at 000013dc
// Size: 72 bytes

void FUN_000013dc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x9c))(param_1,param_2,param_3,param_4,&local_8);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,local_8,1);
  }
  return;
}



// Function: FUN_00001424 at 00001424
// Size: 82 bytes

undefined4 FUN_00001424(undefined4 param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 < *param_2) {
    uVar1 = 1;
  }
  else if (*param_2 < *param_3) {
    uVar1 = 0xffffffff;
  }
  else if (((param_2[1] == 0) || (param_3[1] == 0)) || (param_2[1] == param_3[1])) {
    uVar1 = 0;
  }
  else if (param_2[1] < param_3[1]) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00001476 at 00001476
// Size: 22 bytes

bool FUN_00001476(int param_1,int param_2)

{
  return param_1 == param_2;
}



// Function: FUN_0000148c at 0000148c
// Size: 10 bytes

undefined4 FUN_0000148c(void)

{
  return 0;
}



// Function: FUN_00001496 at 00001496
// Size: 66 bytes

undefined4 FUN_00001496(int *param_1,undefined4 param_2)

{
  char cVar2;
  undefined4 uVar1;
  
  cVar2 = (**(code **)(*param_1 + 0x1c))(param_1,param_2);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
    if (cVar2 == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_000014d8 at 000014d8
// Size: 10 bytes

undefined4 FUN_000014d8(void)

{
  return 0;
}



// Function: FUN_000014e2 at 000014e2
// Size: 10 bytes

undefined4 FUN_000014e2(void)

{
  return 0;
}



// Function: FUN_000014ec at 000014ec
// Size: 62 bytes

undefined4 FUN_000014ec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x28))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 100))(extraout_A0,param_1,param_2,param_3);
  }
  return uVar1;
}



// Function: FUN_0000152a at 0000152a
// Size: 8 bytes

void FUN_0000152a(void)

{
  return;
}



// Function: FUN_00001532 at 00001532
// Size: 14 bytes

void FUN_00001532(void)

{
  return;
}



// Function: FUN_00001540 at 00001540
// Size: 64 bytes

undefined4 FUN_00001540(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x28))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x58))(extraout_A0,param_1,param_2,0x7ffffffe);
  }
  return uVar1;
}



// Function: FUN_00001580 at 00001580
// Size: 52 bytes

undefined4 FUN_00001580(int *param_1)

{
  undefined4 uVar1;
  int *extraout_A0;
  
  (**(code **)(*param_1 + 0x28))();
  uVar1 = 0;
  if (extraout_A0 != (int *)0x0) {
    uVar1 = (**(code **)(*extraout_A0 + 0x60))(extraout_A0,param_1);
  }
  return uVar1;
}



// Function: FUN_000015b4 at 000015b4
// Size: 10 bytes

undefined4 FUN_000015b4(void)

{
  return 1;
}



// Function: FUN_000015be at 000015be
// Size: 10 bytes

undefined4 FUN_000015be(void)

{
  return 0;
}



// Function: FUN_000015c8 at 000015c8
// Size: 8 bytes

void FUN_000015c8(void)

{
  return;
}



// Function: FUN_000015d0 at 000015d0
// Size: 62 bytes

void FUN_000015d0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x34))();
  }
  (**(code **)(*param_1 + 0x54))();
  return;
}



// Function: FUN_0000160e at 0000160e
// Size: 80 bytes

byte * FUN_0000160e(int *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 extraout_A0;
  byte local_104 [256];
  
  (**(code **)(*param_1 + 8))(param_1,local_104);
  func_0x00000b38(extraout_A0);
  pbVar2 = local_104;
  pbVar3 = param_2;
  for (iVar1 = local_104[0] + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pbVar3 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  return param_2;
}



// Function: FUN_0000165e at 0000165e
// Size: 32 bytes

void FUN_0000165e(int *param_1)

{
  undefined4 extraout_A0;
  
  (**(code **)(*param_1 + 8))();
  func_0x00000b40(extraout_A0);
  return;
}



// Function: FUN_0000167e at 0000167e
// Size: 32 bytes

void FUN_0000167e(int *param_1)

{
  undefined4 extraout_A0;
  
  (**(code **)(*param_1 + 8))();
  FUN_00000b46(extraout_A0);
  return;
}



// Function: FUN_0000169e at 0000169e
// Size: 8 bytes

void FUN_0000169e(void)

{
  return;
}



// Function: FUN_000016a6 at 000016a6
// Size: 38 bytes

void FUN_000016a6(int *param_1,undefined4 param_2)

{
  undefined4 extraout_A0;
  
  (**(code **)(*param_1 + 8))(param_1,param_2);
  FUN_00000b58(extraout_A0);
  return;
}



// Function: FUN_000016cc at 000016cc
// Size: 18 bytes

void FUN_000016cc(undefined4 param_1)

{
  func_0x000073b8(param_1);
  return;
}



// Function: FUN_000016de at 000016de
// Size: 8 bytes

void FUN_000016de(void)

{
  return;
}



// Function: FUN_000016e6 at 000016e6
// Size: 14 bytes

undefined1 FUN_000016e6(void)

{
  return DAT_00009e76;
}



// Function: FUN_000016f4 at 000016f4
// Size: 28 bytes

undefined1 FUN_000016f4(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_00009e76;
  DAT_00009e76 = param_1._0_1_;
  return uVar1;
}



// Function: FUN_00001710 at 00001710
// Size: 38 bytes

void FUN_00001710(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00001774(param_1);
  if (cVar1 == '\0') {
    func_0x00001c10();
  }
  return;
}



// Function: FUN_00001736 at 00001736
// Size: 32 bytes

void FUN_00001736(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x4c))();
  }
  return;
}



// Function: FUN_00001756 at 00001756
// Size: 30 bytes

undefined4 FUN_00001756(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || ((param_1 & 1) == 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_00001774 at 00001774
// Size: 30 bytes

bool FUN_00001774(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00001756(param_1);
  return cVar1 != '\0';
}



