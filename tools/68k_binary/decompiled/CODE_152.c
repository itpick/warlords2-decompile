// Warlords II - Decompiled 68k Code
// Segment: CODE_152
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000009e at 0000009e
// Size: 42 bytes

void FUN_0000009e(int *param_1,undefined2 *param_2)

{
  short sVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x70))();
  sVar1 = 0x22;
  piVar2 = param_1 + 1;
  do {
    *(undefined2 *)piVar2 = *param_2;
    sVar1 = sVar1 + -1;
    param_2 = param_2 + 1;
    piVar2 = (int *)((int)piVar2 + 2);
  } while (sVar1 != -1);
  return;
}



// Function: FUN_000000c8 at 000000c8
// Size: 72 bytes

ushort FUN_000000c8(int *param_1,int param_2)

{
  ushort uVar1;
  
  (**(code **)(*param_1 + 0x58))(param_1,param_2 + 6);
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)(param_2 + 0x4c);
  uVar1 = *(ushort *)(param_2 + 0x4e);
  if ((uVar1 & 0x800) != 0) {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  return uVar1 & 0x800;
}



// Function: FUN_00000110 at 00000110
// Size: 120 bytes

undefined4 FUN_00000110(int *param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 auStack_4c [64];
  uint local_c;
  uint local_8;
  
  local_c = 0x40;
  local_8 = *(byte *)(param_2 + 10) + 1;
  if (local_8 < 0x40) {
    puVar5 = &local_8;
  }
  else {
    puVar5 = &local_c;
  }
  puVar2 = auStack_4c;
  puVar3 = (undefined1 *)(param_2 + 10);
  for (uVar1 = *puVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x6c))();
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)(param_2 + 2);
  return uVar4;
}



// Function: FUN_00000188 at 00000188
// Size: 34 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000021a at 0000021a
// Size: 82 bytes

void FUN_0000021a(int *param_1,int param_2)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
  sVar1 = 0x22;
  puVar2 = (undefined2 *)(param_2 + 4);
  puVar3 = auStack_4a;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  (**(code **)(*param_1 + 0x58))(param_1,auStack_4a);
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x4e);
  *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)(param_2 + 0x52);
  *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)(param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x58);
  return;
}



// Function: FUN_0000026c at 0000026c
// Size: 38 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000026c(void)

{
  func_0x00007310();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000002c0 at 000002c0
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000002c0(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
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



// Function: FUN_000002ec at 000002ec
// Size: 124 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000002ec(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_8c [16];
  uint local_4c;
  uint local_48;
  undefined4 local_44 [16];
  
  local_44[0]._0_1_ = 0;
  local_4c = 0x40;
  local_48 = *(byte *)(param_1 + 10) + 1;
  if (local_48 < 0x40) {
    puVar4 = &local_48;
  }
  else {
    puVar4 = &local_4c;
  }
  puVar5 = auStack_8c;
  puVar2 = (undefined1 *)(param_1 + 10);
  for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar5 = *puVar2;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = puVar2 + 1;
  }
  sVar3 = 0xf;
  puVar5 = auStack_8c;
  puVar6 = local_44;
  do {
    *puVar6 = *puVar5;
    sVar3 = sVar3 + -1;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar3 != -1);
  *(undefined4 **)(param_2 + 0x12) = local_44;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000037a at 0000037a
// Size: 40 bytes

undefined4 FUN_0000037a(int *param_1)

{
  short sVar1;
  undefined1 auStack_7e [72];
  undefined4 local_36;
  
  sVar1 = (**(code **)(*param_1 + 0xbc))(param_1,auStack_7e);
  if (sVar1 != 0) {
    local_36 = 0;
  }
  return local_36;
}



// Function: FUN_000003a2 at 000003a2
// Size: 48 bytes

short FUN_000003a2(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined1 auStack_14 [4];
  undefined4 local_10;
  
  sVar1 = (**(code **)(*param_1 + 200))(param_1,auStack_14);
  if (sVar1 == 0) {
    *param_2 = local_10;
  }
  return sVar1;
}



// Function: FUN_000003d2 at 000003d2
// Size: 126 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000003d2(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_8c [16];
  uint local_4c;
  uint local_48;
  undefined4 local_44 [16];
  
  local_44[0]._0_1_ = 0;
  local_4c = 0x40;
  local_48 = *(byte *)(param_1 + 10) + 1;
  if (local_48 < 0x40) {
    puVar4 = &local_48;
  }
  else {
    puVar4 = &local_4c;
  }
  puVar5 = auStack_8c;
  puVar2 = (undefined1 *)(param_1 + 10);
  for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar5 = *puVar2;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = puVar2 + 1;
  }
  sVar3 = 0xf;
  puVar5 = auStack_8c;
  puVar6 = local_44;
  do {
    *puVar6 = *puVar5;
    sVar3 = sVar3 + -1;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar3 != -1);
  *(undefined4 **)(param_2 + 0x12) = local_44;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000462 at 00000462
// Size: 48 bytes

short FUN_00000462(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 local_14 [4];
  
  sVar1 = (**(code **)(*param_1 + 200))(param_1,local_14);
  if (sVar1 == 0) {
    *param_2 = local_14[0];
  }
  return sVar1;
}



// Function: FUN_00000492 at 00000492
// Size: 36 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000492(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 auStack_4a [35];
  
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



// Function: FUN_000004be at 000004be
// Size: 40 bytes

undefined4 FUN_000004be(int *param_1)

{
  short sVar1;
  undefined1 auStack_7e [76];
  undefined4 local_32;
  
  sVar1 = (**(code **)(*param_1 + 0xbc))(param_1,auStack_7e);
  if (sVar1 != 0) {
    local_32 = 0;
  }
  return local_32;
}



// Function: FUN_000004e6 at 000004e6
// Size: 80 bytes

short FUN_000004e6(int *param_1,short *param_2)

{
  short sVar1;
  undefined1 auStack_70 [92];
  char local_14;
  
  func_0x00001ce0(auStack_70,0x6c);
  sVar1 = (**(code **)(*param_1 + 0xa4))(param_1,auStack_70);
  if (sVar1 == 0) {
    *param_2 = (short)local_14;
    *(short *)((int)param_1 + 0x56) = *param_2;
  }
  return sVar1;
}



// Function: FUN_00000536 at 00000536
// Size: 70 bytes

short FUN_00000536(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 auStack_7e [76];
  undefined4 local_32;
  
  sVar1 = (**(code **)(*param_1 + 0xbc))(param_1,auStack_7e);
  if (sVar1 == 0) {
    local_32 = param_2;
    sVar1 = (**(code **)(*param_1 + 0x14c))(param_1,auStack_7e);
  }
  return sVar1;
}



// Function: FUN_0000057c at 0000057c
// Size: 70 bytes

short FUN_0000057c(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 auStack_7e [72];
  undefined4 local_36;
  
  sVar1 = (**(code **)(*param_1 + 0xbc))(param_1,auStack_7e);
  if (sVar1 == 0) {
    local_36 = param_2;
    sVar1 = (**(code **)(*param_1 + 0x14c))(param_1,auStack_7e);
  }
  return sVar1;
}



// Function: FUN_000005c2 at 000005c2
// Size: 80 bytes

short FUN_000005c2(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined1 auStack_7e [32];
  undefined4 uStack_5e;
  undefined4 uStack_5a;
  undefined4 uStack_56;
  undefined4 uStack_52;
  
  sVar1 = (**(code **)(*param_1 + 0xbc))(param_1,auStack_7e);
  if (sVar1 == 0) {
    uStack_5e = *param_2;
    uStack_5a = param_2[1];
    uStack_56 = param_2[2];
    uStack_52 = param_2[3];
    sVar1 = (**(code **)(*param_1 + 0x14c))(param_1,auStack_7e);
  }
  return sVar1;
}



// Function: FUN_00000612 at 00000612
// Size: 44 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000612(void)

{
  undefined1 auStack_7e [122];
  
  func_0x00001ce0(auStack_7e,0x7a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000644 at 00000644
// Size: 44 bytes

bool FUN_00000644(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  return iVar1 != *(int *)((int)param_1 + 0x4a);
}



// Function: FUN_00000670 at 00000670
// Size: 64 bytes

short FUN_00000670(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 auStack_7e [38];
  ushort local_58;
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1,auStack_7e);
  if (sVar1 == 0) {
    *(bool *)param_2 = (local_58 & 0x8080) != 0;
  }
  return sVar1;
}



// Function: FUN_000006b0 at 000006b0
// Size: 16 bytes

undefined1 FUN_000006b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



// Function: FUN_000006c0 at 000006c0
// Size: 34 bytes

undefined4 FUN_000006c0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 4) == 0) && (*(int *)(param_1 + 6) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_000006e2 at 000006e2
// Size: 30 bytes

void FUN_000006e2(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xcc))();
  *(undefined4 *)((int)param_1 + 0x4a) = uVar1;
  return;
}



// Function: FUN_00000700 at 00000700
// Size: 98 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000700(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint local_4c;
  uint local_48;
  undefined1 auStack_44 [64];
  
  local_4c = 0x40;
  local_48 = *(byte *)(param_1 + 10) + 1;
  if (local_48 < 0x40) {
    puVar4 = &local_48;
  }
  else {
    puVar4 = &local_4c;
  }
  puVar2 = auStack_44;
  puVar3 = (undefined1 *)(param_1 + 10);
  for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 **)(param_2 + 0x12) = auStack_44;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000774 at 00000774
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000774(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000078c at 0000078c
// Size: 14 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000078c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000007be at 000007be
// Size: 30 bytes

void FUN_000007be(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x138) + 0x58))(*(int **)(param_1 + 0x138),param_2);
  return;
}



// Function: FUN_000007dc at 000007dc
// Size: 166 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000007dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short sVar4;
  undefined4 extraout_A0;
  undefined1 auStack_204 [256];
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  sVar4 = (**(code **)(**(int **)(param_1 + 0x138) + 0x8c))();
  if (sVar4 != -0x4e22) {
    if ((sVar4 != 0) && (param_3._0_1_ != '\0')) {
      func_0x00001c10(0);
    }
    return;
  }
  puVar2 = local_104;
  puVar3 = (undefined1 *)(param_1 + 0x1e);
  for (iVar1 = *(byte *)(param_1 + 0x1e) + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  func_0x00007658(param_2._0_2_,(char)auStack_204);
  func_0x00007310(0x25b76,auStack_204,(short)local_104);
  func_0x00007310(0x25b76,extraout_A0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000008a8 at 000008a8
// Size: 108 bytes

short FUN_000008a8(int param_1,undefined4 param_2)

{
  short sVar2;
  int iVar1;
  undefined1 auStack_7e [32];
  int local_5e;
  int local_32;
  
  sVar2 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    sVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xbc))(*(int **)(param_1 + 8),auStack_7e);
    if (sVar2 == 0) {
      if ((param_2._0_1_ == '\0') || (local_5e == *(int *)(*(int *)(param_1 + 8) + 0x4e))) {
        iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xcc))();
        if (iVar1 != local_32) {
          sVar2 = -0x4e22;
        }
      }
      else {
        sVar2 = -0x4e24;
      }
    }
  }
  return sVar2;
}



// Function: FUN_00000914 at 00000914
// Size: 16 bytes

undefined1 FUN_00000914(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



// Function: FUN_00000924 at 00000924
// Size: 24 bytes

int FUN_00000924(int param_1,int param_2)

{
  return (param_2 + param_1 + -1) / param_2;
}



// Function: FUN_0000093c at 0000093c
// Size: 90 bytes

void FUN_0000093c(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_104 [256];
  
  local_104[0] = 0;
  if (0 < *(short *)(param_1 + 0x27)) {
    (**(code **)(*param_1 + 0x3cc))(param_1,local_104);
    cVar1 = func_0x00001c88(local_104,param_2,param_1[0x27]);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x3c8))(param_1,local_104);
    }
  }
  return;
}



