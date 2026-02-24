// Warlords II - Decompiled 68k Code
// Segment: CODE_005
// Decompiled by Ghidra 12.0.3

// Function: FUN_00000098 at 00000098
// Size: 32 bytes

undefined1 * FUN_00000098(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return param_1;
}



// Function: FUN_000000b8 at 000000b8
// Size: 56 bytes

int FUN_000000b8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_000010fe(0x76c8,param_1,param_2,&stack0x0000000c);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + iVar1) = 0;
  }
  return iVar1;
}



// Function: FUN_000000f0 at 000000f0
// Size: 98 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000000f0(int param_1)

{
  uint uVar1;
  undefined1 *extraout_A0;
  ushort *unaff_A3;
  byte *unaff_A4;
  int unaff_A5;
  undefined2 *unaff_A6;
  
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = FUN_000006d2();
  *unaff_A4 = *unaff_A4 ^ '\x01' << (uVar1 & 7);
  *extraout_A0 = *extraout_A0;
  *(byte *)(unaff_A5 + -1) = *(byte *)(unaff_A5 + -1) | 0xec;
  *(undefined2 *)(unaff_A4 + (short)((ushort)uVar1 | 0x7d) + 0x59) =
       *(undefined2 *)(unaff_A4 + (short)((ushort)uVar1 | 0x7d) + 0x59);
  *(undefined2 *)(extraout_A0 + -2) = *(undefined2 *)(extraout_A0 + -2);
  *unaff_A3 = *unaff_A3 | 0x124;
  *(ushort *)(unaff_A4 + -1) = *(ushort *)(unaff_A4 + -1) | 0x4e;
  *unaff_A6 = *unaff_A6;
  unaff_A6[-1] = unaff_A6[-1] | 0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000270 at 00000270
// Size: 848 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00000270(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int unaff_A5;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 uStack_5e;
  undefined1 auStack_5d [69];
  
  if ((int)param_1[6] < 1) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar3 = param_1[6];
  }
  param_1[5] = uVar3;
  puVar8 = &uStack_5e;
  param_1[5] = param_1[5] + -1;
  if ((int)param_1[5] < 0) {
    param_1[4] = param_1[4] + 1;
    iVar4 = -1;
  }
  else {
    param_1[4] = param_1[4] + 1;
    iVar4 = (*(code *)*param_1)(param_1[1],0,1);
  }
  iVar6 = 0;
  if ((iVar4 == 0x2b) || (iVar4 == 0x2d)) {
    uStack_5e = (undefined1)iVar4;
    puVar8 = auStack_5d;
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
  }
  bVar2 = false;
  while (iVar4 == 0x30) {
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
    bVar2 = true;
  }
  puVar7 = puVar8;
  if (bVar2) {
    puVar7 = puVar8 + 1;
    *puVar8 = 0x30;
  }
  iVar5 = 0;
  while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar4) & 0x20) != 0) {
    if (iVar5 < 0x24) {
      *puVar7 = (char)iVar4;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
    bVar2 = true;
  }
  puVar8 = puVar7;
  if (iVar4 == (short)**(char **)(unaff_A5 + -0x3b4)) {
    puVar8 = puVar7 + 1;
    *puVar7 = (char)iVar4;
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
  }
  puVar7 = puVar8;
  if (iVar5 == 0) {
    while (iVar4 == 0x30) {
      iVar6 = iVar6 + -1;
      param_1[5] = param_1[5] + -1;
      if ((int)param_1[5] < 0) {
        param_1[4] = param_1[4] + 1;
        iVar4 = -1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        iVar4 = (*(code *)*param_1)(param_1[1],0,1);
      }
      bVar2 = true;
    }
    if (iVar6 < 0) {
      puVar7 = puVar8 + 1;
      *puVar8 = 0x30;
      iVar6 = iVar6 + 1;
    }
  }
  while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar4) & 0x20) != 0) {
    if (iVar5 < 0x24) {
      *puVar7 = (char)iVar4;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
    bVar2 = true;
  }
  if ((bVar2) && ((iVar4 == 0x65 || (iVar4 == 0x45)))) {
    *puVar7 = (char)iVar4;
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
    if ((iVar4 == 0x2b) || (puVar8 = puVar7 + 1, iVar4 == 0x2d)) {
      puVar8 = puVar7 + 2;
      puVar7[1] = (char)iVar4;
      param_1[5] = param_1[5] + -1;
      if ((int)param_1[5] < 0) {
        param_1[4] = param_1[4] + 1;
        iVar4 = -1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        iVar4 = (*(code *)*param_1)(param_1[1],0,1);
      }
    }
    bVar2 = false;
    while (iVar4 == 0x30) {
      param_1[5] = param_1[5] + -1;
      if ((int)param_1[5] < 0) {
        param_1[4] = param_1[4] + 1;
        iVar4 = -1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        iVar4 = (*(code *)*param_1)(param_1[1],0,1);
      }
      bVar2 = true;
    }
    puVar7 = puVar8;
    if (bVar2) {
      puVar7 = puVar8 + 1;
      *puVar8 = 0x30;
    }
    iVar5 = 0;
    while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar4) & 0x20) != 0) {
      puVar8 = puVar7;
      if (iVar5 < 8) {
        puVar8 = puVar7 + 1;
        *puVar7 = (char)iVar4;
        iVar5 = iVar5 + 1;
      }
      param_1[5] = param_1[5] + -1;
      if ((int)param_1[5] < 0) {
        param_1[4] = param_1[4] + 1;
        iVar4 = -1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        iVar4 = (*(code *)*param_1)(param_1[1],0,1);
      }
      bVar2 = true;
      puVar7 = puVar8;
    }
  }
  if (iVar4 == -1) {
    param_1[4] = param_1[4] + -1;
  }
  else {
    param_1[4] = param_1[4] + -1;
    (*(code *)*param_1)(param_1[1],iVar4,0);
  }
  if (bVar2) {
    *puVar7 = 0;
    if (*(char *)(param_1 + 7) == '\0') {
      FUN_00002166(&local_68,&uStack_5e,0,iVar6);
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      if (*(char *)((int)param_1 + 0x1d) == 'l') {
        param_1[2] = param_1[2] + 4;
        puVar1 = *(undefined4 **)(param_1[2] + -4);
        *puVar1 = local_68;
        puVar1[1] = local_64;
        *(undefined2 *)(puVar1 + 2) = local_60;
      }
      else {
        if (*(char *)((int)param_1 + 0x1d) != 'L') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[2] = param_1[2] + 4;
        puVar1 = *(undefined4 **)(param_1[2] + -4);
        *puVar1 = local_68;
        puVar1[1] = local_64;
        *(undefined2 *)(puVar1 + 2) = local_60;
      }
    }
    uVar3 = 1;
  }
  else if ((puVar7 == &uStack_5e) && (iVar4 == -1)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// Function: FUN_0000062e at 0000062e
// Size: 34 bytes

undefined4 FUN_0000062e(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_A0;
  int extraout_A0_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_A5;
  undefined1 auStack_38 [32];
  
  puVar6 = auStack_38;
  if ((int)param_1[6] < 1) {
    uVar2 = 0x7fffffff;
  }
  else {
    uVar2 = param_1[6];
  }
  param_1[5] = uVar2;
  param_1[5] = param_1[5] + -1;
  if ((int)param_1[5] < 0) {
    param_1[4] = param_1[4] + 1;
    iVar3 = -1;
  }
  else {
    param_1[4] = param_1[4] + 1;
    iVar3 = (*(code *)*param_1)(param_1[1],0,1);
  }
  if ((iVar3 == 0x2b) || (iVar3 == 0x2d)) {
    auStack_38[0] = (undefined1)iVar3;
    puVar6 = auStack_38 + 1;
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar3 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar3 = (*(code *)*param_1)(param_1[1],0,1);
    }
  }
  bVar1 = false;
  FUN_00002662(unaff_A5 + -0xfc,(int)(short)*(char *)param_1[3]);
  iVar4 = (int)(short)*(char *)(extraout_A0 + 8);
  if (iVar3 == 0x30) {
    bVar1 = true;
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar3 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar3 = (*(code *)*param_1)(param_1[1],0,1);
    }
    if (((iVar3 == 0x78) || (iVar3 == 0x58)) && ((iVar4 == 0 || (iVar4 == 0x10)))) {
      iVar4 = 0x10;
      param_1[5] = param_1[5] + -1;
      if ((int)param_1[5] < 0) {
        param_1[4] = param_1[4] + 1;
        iVar3 = -1;
      }
      else {
        param_1[4] = param_1[4] + 1;
        iVar3 = (*(code *)*param_1)(param_1[1],0,1);
      }
      bVar1 = false;
    }
    else if (iVar4 == 0) {
      iVar4 = 8;
    }
  }
  if ((iVar4 == 0) || (iVar4 == 10)) {
    uVar2 = 10;
  }
  else if (iVar4 == 8) {
    uVar2 = 8;
  }
  else {
    uVar2 = 0x16;
  }
  while (iVar3 == 0x30) {
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar3 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar3 = (*(code *)*param_1)(param_1[1],0,1);
    }
    bVar1 = true;
  }
  if (bVar1) {
    *puVar6 = 0x30;
    puVar6 = puVar6 + 1;
  }
  while ((iVar3 != -1 && (FUN_00002526(unaff_A5 + -0x114,iVar3,uVar2), extraout_A0_00 != 0))) {
    puVar5 = puVar6;
    if (puVar6 < auStack_38 + 0x1f) {
      puVar5 = puVar6 + 1;
      *puVar6 = (char)iVar3;
    }
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar3 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar3 = (*(code *)*param_1)(param_1[1],0,1);
    }
    bVar1 = true;
    puVar6 = puVar5;
  }
  if (iVar3 == -1) {
    param_1[4] = param_1[4] + -1;
  }
  else {
    param_1[4] = param_1[4] + -1;
    (*(code *)*param_1)(param_1[1],iVar3,0);
  }
  if (bVar1) {
    *puVar6 = 0;
    if (*(char *)(param_1 + 7) == '\0') {
      if ((*(char *)param_1[3] == 'd') || (*(char *)param_1[3] == 'i')) {
        uVar2 = FUN_00001f7c(auStack_38,0,iVar4);
        *(undefined1 *)((int)param_1 + 0x1e) = 1;
        if (*(char *)((int)param_1 + 0x1d) == 'h') {
          param_1[2] = param_1[2] + 4;
          **(undefined2 **)(param_1[2] + -4) = (short)uVar2;
        }
        else if (*(char *)((int)param_1 + 0x1d) == 'l') {
          param_1[2] = param_1[2] + 4;
          **(undefined4 **)(param_1[2] + -4) = uVar2;
        }
        else {
          param_1[2] = param_1[2] + 4;
          **(undefined4 **)(param_1[2] + -4) = uVar2;
        }
      }
      else {
        uVar2 = FUN_0000228a(auStack_38,0,iVar4);
        *(undefined1 *)((int)param_1 + 0x1e) = 1;
        if (*(char *)param_1[3] == 'p') {
          param_1[2] = param_1[2] + 4;
          **(undefined4 **)(param_1[2] + -4) = uVar2;
        }
        else if (*(char *)((int)param_1 + 0x1d) == 'h') {
          param_1[2] = param_1[2] + 4;
          **(undefined2 **)(param_1[2] + -4) = (short)uVar2;
        }
        else if (*(char *)((int)param_1 + 0x1d) == 'l') {
          param_1[2] = param_1[2] + 4;
          **(undefined4 **)(param_1[2] + -4) = uVar2;
        }
        else {
          param_1[2] = param_1[2] + 4;
          **(undefined4 **)(param_1[2] + -4) = uVar2;
        }
      }
    }
    uVar2 = 1;
  }
  else if ((puVar6 == auStack_38) && (iVar3 == -1)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_00000650 at 00000650
// Size: 34 bytes

undefined4 FUN_00000650(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 *unaff_A2;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_A5;
  
  unaff_A2[5] = unaff_A2[5] + -1;
  if ((int)unaff_A2[5] < 0) {
    unaff_A2[4] = unaff_A2[4] + 1;
    iVar2 = -1;
  }
  else {
    unaff_A2[4] = unaff_A2[4] + 1;
    iVar2 = (*(code *)*unaff_A2)(unaff_A2[1],0,1);
  }
  if ((iVar2 == 0x2b) || (puVar6 = (undefined1 *)register0x0000003c, iVar2 == 0x2d)) {
    puVar6 = &stack0x00000001;
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = (*(code *)*unaff_A2)(unaff_A2[1],0,1);
    }
  }
  bVar1 = false;
  FUN_00002662(unaff_A5 + -0xfc,(int)(short)*(char *)unaff_A2[3]);
  iVar3 = (int)(short)*(char *)(extraout_A0 + 8);
  if (iVar2 == 0x30) {
    bVar1 = true;
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = (*(code *)*unaff_A2)(unaff_A2[1],0,1);
    }
    if (((iVar2 == 0x78) || (iVar2 == 0x58)) && ((iVar3 == 0 || (iVar3 == 0x10)))) {
      iVar3 = 0x10;
      unaff_A2[5] = unaff_A2[5] + -1;
      if ((int)unaff_A2[5] < 0) {
        unaff_A2[4] = unaff_A2[4] + 1;
        iVar2 = -1;
      }
      else {
        unaff_A2[4] = unaff_A2[4] + 1;
        iVar2 = (*(code *)*unaff_A2)(unaff_A2[1],0,1);
      }
      bVar1 = false;
    }
    else if (iVar3 == 0) {
      iVar3 = 8;
    }
  }
  if ((iVar3 == 0) || (iVar3 == 10)) {
    uVar4 = 10;
  }
  else if (iVar3 == 8) {
    uVar4 = 8;
  }
  else {
    uVar4 = 0x16;
  }
  while (iVar2 == 0x30) {
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = (*(code *)*unaff_A2)(unaff_A2[1],0,1);
    }
    bVar1 = true;
  }
  if (bVar1) {
    *puVar6 = 0x30;
    puVar6 = puVar6 + 1;
  }
  while ((iVar2 != -1 && (FUN_00002526(unaff_A5 + -0x114,iVar2,uVar4), extraout_A0_00 != 0))) {
    puVar5 = puVar6;
    if (puVar6 < &stack0x0000001f) {
      puVar5 = puVar6 + 1;
      *puVar6 = (char)iVar2;
    }
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar2 = (*(code *)*unaff_A2)(unaff_A2[1],0,1);
    }
    bVar1 = true;
    puVar6 = puVar5;
  }
  if (iVar2 == -1) {
    unaff_A2[4] = unaff_A2[4] + -1;
  }
  else {
    unaff_A2[4] = unaff_A2[4] + -1;
    (*(code *)*unaff_A2)(unaff_A2[1],iVar2,0);
  }
  if (bVar1) {
    *puVar6 = 0;
    if (*(char *)(unaff_A2 + 7) == '\0') {
      if ((*(char *)unaff_A2[3] == 'd') || (*(char *)unaff_A2[3] == 'i')) {
        uVar4 = FUN_00001f7c(&stack0x00000000,0,iVar3);
        *(undefined1 *)((int)unaff_A2 + 0x1e) = 1;
        if (*(char *)((int)unaff_A2 + 0x1d) == 'h') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined2 **)(unaff_A2[2] + -4) = (short)uVar4;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'l') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
        else {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
      }
      else {
        uVar4 = FUN_0000228a(&stack0x00000000,0,iVar3);
        *(undefined1 *)((int)unaff_A2 + 0x1e) = 1;
        if (*(char *)unaff_A2[3] == 'p') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'h') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined2 **)(unaff_A2[2] + -4) = (short)uVar4;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'l') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
        else {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
      }
    }
    uVar4 = 1;
  }
  else if ((puVar6 == &stack0x00000000) && (iVar2 == -1)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// Function: FUN_00000672 at 00000672
// Size: 96 bytes

undefined4 FUN_00000672(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_A0;
  int extraout_A0_00;
  undefined4 *unaff_A2;
  undefined1 *unaff_A3;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  iVar3 = (*(code *)*unaff_A2)();
  if ((iVar3 == 0x2b) || (puVar5 = unaff_A3, iVar3 == 0x2d)) {
    puVar5 = unaff_A3 + 1;
    *unaff_A3 = (char)iVar3;
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = (*(code *)*unaff_A2)();
    }
  }
  bVar2 = false;
  FUN_00002662();
  cVar1 = *(char *)(extraout_A0 + 8);
  if (iVar3 == 0x30) {
    bVar2 = true;
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = (*(code *)*unaff_A2)();
    }
    if (((iVar3 == 0x78) || (iVar3 == 0x58)) && ((cVar1 == '\0' || (cVar1 == '\x10')))) {
      unaff_A2[5] = unaff_A2[5] + -1;
      if ((int)unaff_A2[5] < 0) {
        unaff_A2[4] = unaff_A2[4] + 1;
        iVar3 = -1;
      }
      else {
        unaff_A2[4] = unaff_A2[4] + 1;
        iVar3 = (*(code *)*unaff_A2)();
      }
      bVar2 = false;
    }
  }
  while (iVar3 == 0x30) {
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = (*(code *)*unaff_A2)();
    }
    bVar2 = true;
  }
  if (bVar2) {
    *puVar5 = 0x30;
    puVar5 = puVar5 + 1;
  }
  while ((iVar3 != -1 && (FUN_00002526(), extraout_A0_00 != 0))) {
    puVar6 = puVar5;
    if (puVar5 < &stack0x0000002b) {
      puVar6 = puVar5 + 1;
      *puVar5 = (char)iVar3;
    }
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iVar3 = (*(code *)*unaff_A2)();
    }
    bVar2 = true;
    puVar5 = puVar6;
  }
  if (iVar3 == -1) {
    unaff_A2[4] = unaff_A2[4] + -1;
  }
  else {
    unaff_A2[4] = unaff_A2[4] + -1;
    (*(code *)*unaff_A2)();
  }
  if (bVar2) {
    *puVar5 = 0;
    if (*(char *)(unaff_A2 + 7) == '\0') {
      if ((*(char *)unaff_A2[3] == 'd') || (*(char *)unaff_A2[3] == 'i')) {
        uVar4 = FUN_00001f7c();
        *(undefined1 *)((int)unaff_A2 + 0x1e) = 1;
        if (*(char *)((int)unaff_A2 + 0x1d) == 'h') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined2 **)(unaff_A2[2] + -4) = (short)uVar4;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'l') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
        else {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
      }
      else {
        uVar4 = FUN_0000228a();
        *(undefined1 *)((int)unaff_A2 + 0x1e) = 1;
        if (*(char *)unaff_A2[3] == 'p') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'h') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined2 **)(unaff_A2[2] + -4) = (short)uVar4;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'l') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
        else {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar4;
        }
      }
    }
    uVar4 = 1;
  }
  else if ((puVar5 == &stack0x0000000c) && (iVar3 == -1)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// Function: FUN_000006d2 at 000006d2
// Size: 624 bytes

undefined4 FUN_000006d2(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_D3;
  char unaff_D5b;
  int in_A0;
  int extraout_A0;
  undefined4 *unaff_A2;
  undefined1 *unaff_A3;
  undefined1 *puVar3;
  int unaff_A5;
  int iStack00000004;
  
  iVar1 = (int)(short)*(char *)(unaff_A5 + -0xf4 + in_A0);
  if (unaff_D3 == 0x30) {
    unaff_D5b = '\x01';
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      unaff_D3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iStack00000004 = 1;
      unaff_D3 = (*(code *)*unaff_A2)(unaff_A2[1]);
    }
    if (((unaff_D3 == 0x78) || (unaff_D3 == 0x58)) && ((iVar1 == 0 || (iVar1 == 0x10)))) {
      iVar1 = 0x10;
      unaff_A2[5] = unaff_A2[5] + -1;
      if ((int)unaff_A2[5] < 0) {
        unaff_A2[4] = unaff_A2[4] + 1;
        unaff_D3 = -1;
      }
      else {
        unaff_A2[4] = unaff_A2[4] + 1;
        iStack00000004 = 1;
        unaff_D3 = (*(code *)*unaff_A2)(unaff_A2[1]);
      }
      unaff_D5b = '\0';
    }
    else if (iVar1 == 0) {
      iVar1 = 8;
    }
  }
  if ((iVar1 == 0) || (iVar1 == 10)) {
    uVar2 = 10;
  }
  else if (iVar1 == 8) {
    uVar2 = 8;
  }
  else {
    uVar2 = 0x16;
  }
  while (unaff_D3 == 0x30) {
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      unaff_D3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iStack00000004 = 1;
      unaff_D3 = (*(code *)*unaff_A2)(unaff_A2[1]);
    }
    unaff_D5b = '\x01';
  }
  if (unaff_D5b != '\0') {
    *unaff_A3 = 0x30;
    unaff_A3 = unaff_A3 + 1;
  }
  while ((unaff_D3 != -1 &&
         (iStack00000004 = uVar2, FUN_00002526(unaff_A5 + -0x114), extraout_A0 != 0))) {
    puVar3 = unaff_A3;
    if (unaff_A3 < &stack0x00000027) {
      puVar3 = unaff_A3 + 1;
      *unaff_A3 = (char)unaff_D3;
    }
    unaff_A2[5] = unaff_A2[5] + -1;
    if ((int)unaff_A2[5] < 0) {
      unaff_A2[4] = unaff_A2[4] + 1;
      unaff_D3 = -1;
    }
    else {
      unaff_A2[4] = unaff_A2[4] + 1;
      iStack00000004 = 1;
      unaff_D3 = (*(code *)*unaff_A2)(unaff_A2[1]);
    }
    unaff_D5b = '\x01';
    unaff_A3 = puVar3;
  }
  if (unaff_D3 == -1) {
    unaff_A2[4] = unaff_A2[4] + -1;
  }
  else {
    unaff_A2[4] = unaff_A2[4] + -1;
    iStack00000004 = 0;
    (*(code *)*unaff_A2)(unaff_A2[1]);
  }
  if (unaff_D5b == '\0') {
    if ((unaff_A3 == &stack0x00000008) && (unaff_D3 == -1)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    *unaff_A3 = 0;
    if (*(char *)(unaff_A2 + 7) == '\0') {
      iStack00000004 = iVar1;
      if ((*(char *)unaff_A2[3] == 'd') || (*(char *)unaff_A2[3] == 'i')) {
        uVar2 = FUN_00001f7c(&stack0x00000008);
        *(undefined1 *)((int)unaff_A2 + 0x1e) = 1;
        if (*(char *)((int)unaff_A2 + 0x1d) == 'h') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined2 **)(unaff_A2[2] + -4) = (short)uVar2;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'l') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar2;
        }
        else {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar2;
        }
      }
      else {
        uVar2 = FUN_0000228a(&stack0x00000008);
        *(undefined1 *)((int)unaff_A2 + 0x1e) = 1;
        if (*(char *)unaff_A2[3] == 'p') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar2;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'h') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined2 **)(unaff_A2[2] + -4) = (short)uVar2;
        }
        else if (*(char *)((int)unaff_A2 + 0x1d) == 'l') {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar2;
        }
        else {
          unaff_A2[2] = unaff_A2[2] + 4;
          **(undefined4 **)(unaff_A2[2] + -4) = uVar2;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_00000942 at 00000942
// Size: 82 bytes

undefined4 FUN_00000942(byte *param_1,byte param_2,uint param_3)

{
  while( true ) {
    while( true ) {
      if (param_3 < 3) {
        while( true ) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 == *param_1) break;
          param_1 = param_1 + 1;
          param_3 = param_3 - 1;
        }
        return 1;
      }
      if (param_1[1] == 0x2d) break;
      if (param_2 == *param_1) {
        return 1;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    }
    if ((*param_1 <= param_2) && (param_2 <= param_1[2])) break;
    param_1 = param_1 + 3;
    param_3 = param_3 - 3;
  }
  return 1;
}



// Function: FUN_00000994 at 00000994
// Size: 746 bytes

/* WARNING: Removing unreachable block (ram,0x00000c48) */
/* WARNING: Removing unreachable block (ram,0x00000c52) */
/* WARNING: Removing unreachable block (ram,0x00000c4e) */
/* WARNING: Removing unreachable block (ram,0x00000c54) */

undefined4 FUN_00000994(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int unaff_D5;
  char unaff_D7b;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int unaff_A3;
  int unaff_A5;
  undefined1 *unaff_A6;
  bool bVar6;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  int local_2e;
  undefined1 *local_2a;
  char local_25;
  
  local_25 = '\0';
  bVar5 = 0;
  bVar6 = *(char *)((int)param_1 + 0x1d) != 'l';
  local_30 = *(undefined2 *)(unaff_A5 + -0x6f8);
  if (param_2 < 0) {
    param_1[3] = param_1[3] + 1;
    if (*(char *)param_1[3] == '^') {
      pcVar1 = (char *)param_1[3];
      param_1[3] = param_1[3] + 1;
      unaff_D7b = *pcVar1;
    }
    else {
      unaff_D7b = '\0';
    }
    if (*(char *)param_1[3] == ']') {
      iVar4 = param_1[3] + 1;
    }
    else {
      iVar4 = param_1[3];
    }
    FUN_00002662(iVar4,0x5d);
    if (extraout_A0 == 0) {
      return 0;
    }
    unaff_D5 = extraout_A0 - param_1[3];
    unaff_A3 = extraout_A0;
    if ((2 < unaff_D5) && (FUN_00002526(param_1[3] + 1,0x2d,unaff_D5 + -2), extraout_A0_00 != 0)) {
      local_25 = '\x01';
    }
  }
  if ((int)param_1[6] < 1) {
    if (param_2 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = param_1[6];
  }
  param_1[5] = uVar2;
  if (*(char *)(param_1 + 7) == '\0') {
    if (bVar6) {
      param_1[2] = param_1[2] + 4;
      unaff_A6 = *(undefined1 **)(param_1[2] + -4);
    }
    else {
      param_1[2] = param_1[2] + 4;
      local_2a = *(undefined1 **)(param_1[2] + -4);
    }
  }
  while( true ) {
    param_1[5] = param_1[5] + -1;
    if ((int)param_1[5] < 0) {
      param_1[4] = param_1[4] + 1;
      iVar4 = -1;
    }
    else {
      param_1[4] = param_1[4] + 1;
      iVar4 = (*(code *)*param_1)(param_1[1],0,1);
    }
    if (((iVar4 == -1) ||
        ((0 < param_2 && ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar4) & 0x44) != 0)))) ||
       ((param_2 < 0 &&
        ((((((local_25 == '\0' && (unaff_D7b == '\0')) &&
            (FUN_00002526(param_1[3],iVar4,unaff_D5), extraout_A0_01 == 0)) ||
           (((local_25 == '\0' && (unaff_D7b != '\0')) &&
            (FUN_00002526(param_1[3],iVar4,unaff_D5), extraout_A0_02 != 0)))) ||
          ((unaff_D7b == '\0' && (iVar3 = FUN_00000942(param_1[3],iVar4,unaff_D5), iVar3 == 0)))) ||
         ((unaff_D7b != '\0' && (iVar3 = FUN_00000942(param_1[3],iVar4,unaff_D5), iVar3 != 0))))))))
    break;
    if (bVar6) {
      bVar5 = 2;
      if (*(char *)(param_1 + 7) == '\0') {
        *unaff_A6 = (char)iVar4;
        *(undefined1 *)((int)param_1 + 0x1e) = 1;
        unaff_A6 = unaff_A6 + 1;
      }
    }
    else {
      local_31 = (char)iVar4;
      local_2e = FUN_00002056(&local_32,&local_31,1,&local_30);
      if (local_2e == -2) {
        bVar5 = bVar5 | 1;
      }
      else {
        if (local_2e == -1) {
          if (iVar4 == -1) {
            param_1[4] = param_1[4] + -1;
          }
          else {
            param_1[4] = param_1[4] + -1;
            (*(code *)*param_1)(param_1[1],iVar4,0);
          }
          if (bVar5 == 0) {
            return 0xffffffff;
          }
          return 0;
        }
        if (*(char *)(param_1 + 7) == '\0') {
          *local_2a = local_32;
          *(undefined1 *)((int)param_1 + 0x1e) = 1;
          local_2a = local_2a + 1;
        }
        param_1[6] = param_1[6] + -1;
        bVar5 = 2;
      }
    }
  }
  if (iVar4 == -1) {
    param_1[4] = param_1[4] + -1;
  }
  else {
    param_1[4] = param_1[4] + -1;
    (*(code *)*param_1)(param_1[1],iVar4,0);
  }
  if ((param_2 == 0) || (bVar5 != 2)) {
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 7) == '\0') {
      if (bVar6) {
        *unaff_A6 = 0;
      }
      else {
        *local_2a = 0;
      }
    }
    if (param_2 < 0) {
      param_1[3] = unaff_A3;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_00000c7e at 00000c7e
// Size: 792 bytes

void FUN_00000c7e(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *extraout_A0;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int unaff_A5;
  ushort local_140 [13];
  char local_126 [2];
  short local_124;
  undefined2 local_122;
  undefined1 auStack_120 [256];
  
  local_140[0] = *(ushort *)(param_1 + 2);
  puVar10 = *(undefined1 **)((int)param_1 + 0x12);
  iVar5 = 0;
  bVar2 = false;
  if (*(int *)((int)param_1 + 0x2e) < 0) {
    *(undefined4 *)((int)param_1 + 0x2e) = 6;
  }
  else if ((*(int *)((int)param_1 + 0x2e) == 0) &&
          ((param_2._0_1_ == 'g' || (param_2._0_1_ == 'G')))) {
    *(undefined4 *)((int)param_1 + 0x2e) = 1;
  }
  if (0x13 < *(int *)((int)param_1 + 0x2e)) {
    *(undefined4 *)((int)param_1 + 0x2e) = 0x13;
  }
  local_122 = *(undefined2 *)(param_1 + 0xc);
  FUN_000006d2(*param_1,param_1[1]);
  *extraout_A0 = *extraout_A0;
  *(ushort *)(unaff_A5 + -2) = *(ushort *)(unaff_A5 + -2) | 0xe;
  *(undefined1 *)param_1 = *(undefined1 *)param_1;
  local_124 = local_124 + 1;
  local_126[0] = '\0';
  func_0x00007680(local_126);
  local_140[0] = local_140[0] & 0xff;
  func_0x00007690(local_126,local_140,(int)&local_122 + 1);
  bVar3 = 0xff;
  pcVar11 = (char *)((int)&local_122 + 1);
  do {
    bVar3 = bVar3 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  local_122._0_1_ = bVar3;
  if ((param_2._0_1_ == 'g') || (param_2._0_1_ == 'G')) {
    iVar6 = 0;
    for (pcVar11 = auStack_120 + (short)(ushort)bVar3 + -2;
        ((*pcVar11 != 'e' && (*pcVar11 != '+')) && (*pcVar11 != '-')); pcVar11 = pcVar11 + -1) {
      iVar7 = FUN_000005c0();
      iVar6 = iVar6 * 2 + iVar7;
      FUN_000005c0();
    }
    if (*pcVar11 == '-') {
      iVar6 = -iVar6;
    }
    if ((-5 < iVar6) && (iVar6 < *(int *)((int)param_1 + 0x2e))) {
      local_126[0] = '\x01';
      local_124 = ((short)*(undefined4 *)((int)param_1 + 0x2e) - (short)iVar6) + -1;
      func_0x00007680(local_126);
      local_140[0] = local_140[0] & 0xff;
      func_0x00007690(local_126,local_140,(int)&local_122 + 1);
      local_122._0_1_ = 0xff;
      pcVar11 = (char *)((int)&local_122 + 1);
      do {
        local_122._0_1_ = local_122._0_1_ + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
    }
  }
  iVar6 = (int)(short)((char)local_122 == ' ');
  while (iVar7 = iVar6 + 1, iVar7 <= (int)(uint)local_122._0_1_) {
    if (auStack_120[iVar6 + -1] == 'e') {
      if (((*(ushort *)((int)param_1 + 0x3a) & 8) == 0) &&
         ((param_2._0_1_ == 'G' || (param_2._0_1_ == 'g')))) {
        for (; puVar10[-1] == '0'; puVar10 = puVar10 + -1) {
          iVar5 = iVar5 + -1;
        }
        if (puVar10[-1] == '.') {
          puVar10 = puVar10 + -1;
          iVar5 = iVar5 + -1;
        }
      }
      puVar9 = puVar10;
      if ((*(int *)((int)param_1 + 0x2e) == 0) && ((*(ushort *)((int)param_1 + 0x3a) & 8) != 0)) {
        puVar9 = puVar10 + 1;
        *puVar10 = 0x2e;
        iVar5 = iVar5 + 1;
      }
      if ((param_2._0_1_ == 'G') || (param_2._0_1_ == 'E')) {
        uVar4 = 0x45;
      }
      else {
        uVar4 = 0x65;
      }
      puVar8 = puVar9 + 1;
      *puVar9 = uVar4;
      if ((uint)local_122._0_1_ - iVar7 == 2) {
        iVar7 = iVar6 + 2;
        *puVar8 = auStack_120[iVar6];
        puVar8 = puVar9 + 3;
        puVar9[2] = 0x30;
        iVar5 = iVar5 + 2;
      }
    }
    else {
      if (auStack_120[iVar6 + -1] == '.') {
        bVar2 = true;
      }
      puVar8 = puVar10 + 1;
      *puVar10 = auStack_120[iVar6 + -1];
    }
    iVar5 = iVar5 + 1;
    puVar10 = puVar8;
    iVar6 = iVar7;
  }
  if (((((*(ushort *)((int)param_1 + 0x3a) & 8) == 0) &&
       ((param_2._0_1_ == 'G' || (param_2._0_1_ == 'g')))) && (local_126[0] == '\x01')) && (bVar2))
  {
    if (puVar10[-1] == '.') {
      puVar10 = puVar10 + -1;
      iVar5 = iVar5 + -1;
    }
    else if (puVar10[-1] == '0') {
      for (; puVar10[-1] == '0'; puVar10 = puVar10 + -1) {
        iVar5 = iVar5 + -1;
      }
      if (puVar10[-1] == '.') {
        puVar10 = puVar10 + -1;
        iVar5 = iVar5 + -1;
      }
    }
  }
  if ((((*(int *)((int)param_1 + 0x2e) == 0) || (*(int *)((int)param_1 + 0x2e) == 1)) &&
      ((*(ushort *)((int)param_1 + 0x3a) & 8) != 0)) && ((local_126[0] == '\x01' && (!bVar2)))) {
    *puVar10 = 0x2e;
    iVar5 = iVar5 + 1;
  }
  *(int *)((int)param_1 + 0x1e) = iVar5;
  *(undefined1 *)(*(int *)((int)param_1 + 0x12) + iVar5) = 0;
  if (((*(ushort *)((int)param_1 + 0x3a) & 0x14) == 0x10) &&
     (*(int *)((int)param_1 + 0x1a) =
           (*(int *)((int)param_1 + 0x36) - iVar5) - *(int *)((int)param_1 + 0x16),
     *(int *)((int)param_1 + 0x1a) < 0)) {
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
  }
  return;
}



// Function: FUN_00000f9c at 00000f9c
// Size: 354 bytes

void FUN_00000f9c(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_A5;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  char acStack_30 [24];
  
  if (param_2._0_1_ == 'X') {
    iVar6 = unaff_A5 + -0xda;
  }
  else {
    iVar6 = unaff_A5 + -0xec;
  }
  if (param_2._0_1_ == 'o') {
    iVar3 = 8;
  }
  else if ((param_2._0_1_ == 'x') || (param_2._0_1_ == 'X')) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 10;
  }
  iVar5 = 0x18;
  iVar4 = *param_1;
  if (((param_2._0_1_ == 'd') || (param_2._0_1_ == 'i')) && (*param_1 < 0)) {
    iVar4 = -iVar4;
  }
  if (((iVar4 != 0) || (*(int *)((int)param_1 + 0x2e) != 0)) || (iVar3 == 8)) {
    iVar4 = FUN_00000672();
    iVar5 = 0x17;
    acStack_30[0x17] = *(undefined1 *)(iVar6 + iVar4);
  }
  iVar4 = func_0x000005f2();
  *param_1 = iVar4;
  for (; (0 < *param_1 && (0 < iVar5)); iVar5 = iVar5 + -1) {
    FUN_00001e08(&local_40,*param_1,iVar3);
    local_38 = local_40;
    local_34 = local_3c;
    *param_1 = local_40;
    acStack_30[iVar5 + -1] = *(char *)(iVar6 + local_3c);
  }
  iVar6 = iVar5;
  if (((iVar3 == 8) && ((*(ushort *)((int)param_1 + 0x3a) & 8) != 0)) && (acStack_30[iVar5] != '0'))
  {
    iVar6 = iVar5 + -1;
    acStack_30[iVar5 + -1] = '0';
  }
  *(int *)((int)param_1 + 0x1e) = 0x18 - iVar6;
  pcVar1 = *(char **)((int)param_1 + 0x12);
  pcVar2 = acStack_30 + iVar6;
  for (iVar3 = *(int *)((int)param_1 + 0x1e); iVar3 != 0; iVar3 = iVar3 + -1) {
    *pcVar1 = *pcVar2;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  if (*(int *)((int)param_1 + 0x1e) < *(int *)((int)param_1 + 0x2e)) {
    *(int *)((int)param_1 + 0x1a) = *(int *)((int)param_1 + 0x2e) - *(int *)((int)param_1 + 0x1e);
    *(ushort *)((int)param_1 + 0x3a) = *(ushort *)((int)param_1 + 0x3a) & 0xffef;
  }
  else if (((*(int *)((int)param_1 + 0x2e) < 0) &&
           ((*(ushort *)((int)param_1 + 0x3a) & 0x14) == 0x10)) &&
          (iVar6 = ((*(int *)((int)param_1 + 0x36) - *(int *)((int)param_1 + 0x16)) -
                   *(int *)((int)param_1 + 0x1a)) - *(int *)((int)param_1 + 0x1e), 0 < iVar6)) {
    *(int *)((int)param_1 + 0x1a) = iVar6;
  }
  return;
}



// Function: FUN_000010fe at 000010fe
// Size: 568 bytes

int FUN_000010fe(code *param_1,int param_2,char *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  char *pcVar4;
  int unaff_A5;
  undefined1 auStack_8e [60];
  undefined2 local_52;
  char local_4f;
  undefined1 auStack_4e [10];
  code *local_44;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  ushort local_14;
  char local_12;
  
  local_52 = *(undefined2 *)(unaff_A5 + -0x6f6);
  local_44 = param_1;
  local_40 = param_2;
  local_1c = 0;
  do {
    while( true ) {
      local_4f = '\0';
      iVar2 = FUN_00002056((short)&local_4f,(short)param_3,0xff,&local_52);
      if (iVar2 < 1) {
        iVar2 = -1;
        pcVar4 = param_3;
        do {
          iVar2 = iVar2 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
      }
      iVar3 = iVar2;
      if (local_4f == '%') {
        iVar3 = iVar2 + -1;
      }
      if (0 < iVar3) {
        (*local_44)((short)local_40,(char)param_3,iVar3);
        if (extraout_A0 == 0) {
          return -1;
        }
        local_1c = iVar3 + local_1c;
        local_40 = extraout_A0;
      }
      param_3 = param_3 + iVar2;
      if (local_4f == '%') break;
      if (local_4f == '\0') {
        return local_1c;
      }
    }
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_14 = 0;
    while( true ) {
      FUN_00002662((char)unaff_A5 + '8',(int)(short)*param_3);
      if (extraout_A0_00 == 0) break;
      local_14 = (ushort)*(undefined4 *)(unaff_A5 * -3 + extraout_A0_00 * 4 + 0x25e) | local_14;
      param_3 = param_3 + 1;
    }
    if (*param_3 == '*') {
      local_18 = *param_4;
      if (local_18 < 0) {
        local_18 = -local_18;
        local_14 = local_14 | 4;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    }
    else {
      local_18 = 0;
      while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + (int)(short)*param_3) & 0x20) != 0) {
        if (local_18 < 0x7fffffff) {
          iVar2 = FUN_000005c0();
          local_18 = iVar2 + (short)*param_3 + -0x30;
        }
        param_3 = param_3 + 1;
      }
    }
    if (*param_3 == '.') {
      pcVar4 = param_3 + 1;
      if (*pcVar4 == '*') {
        local_20 = *param_4;
        pcVar4 = param_3 + 2;
        param_4 = param_4 + 1;
      }
      else {
        local_20 = 0;
        while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + (int)(short)*pcVar4) & 0x20) != 0) {
          if (local_20 < 0x7fffffff) {
            iVar2 = FUN_000005c0();
            local_20 = iVar2 + (short)*pcVar4 + -0x30;
          }
          pcVar4 = pcVar4 + 1;
        }
      }
    }
    else {
      local_20 = -1;
      pcVar4 = param_3;
    }
    FUN_00002662((char)unaff_A5 + 'V',(int)(short)*pcVar4);
    if (extraout_A0_01 == 0) {
      local_12 = '\0';
      param_3 = pcVar4;
    }
    else {
      param_3 = pcVar4 + 1;
      local_12 = *pcVar4;
    }
    param_3 = param_3 + 1;
    iVar2 = FUN_00001336((short)auStack_4e,(short)&param_4);
  } while ((iVar2 == 0) && (iVar2 = FUN_00001836((char)auStack_4e,auStack_8e), -1 < iVar2));
  return -1;
}



// Function: FUN_00001336 at 00001336
// Size: 136 bytes

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001336(int param_1,int param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  byte bVar4;
  ushort uVar3;
  byte *extraout_A0;
  ushort *puVar5;
  int unaff_A5;
  undefined1 *unaff_A6;
  undefined6 uVar6;
  
  uVar6 = FUN_000006d2();
  uVar3 = (ushort)((uint6)uVar6 >> 0x20);
  *extraout_A0 = *extraout_A0 & ~('\x01' << ((uint)uVar6 & 7));
  *(undefined1 *)(unaff_A5 + -1) = *(undefined1 *)(unaff_A5 + -1);
  _DAT_00000000 = _DAT_00000000 | 0xf;
  *(byte *)(unaff_A5 + -2) = *(byte *)(unaff_A5 + -2) | 0x88;
  bVar4 = (byte)((uint6)uVar6 >> 0x20);
  pbVar1 = (byte *)(param_1 + (short)(uVar3 | 0x45));
  *pbVar1 = *pbVar1 & ~('\x01' << ((bVar4 | 0x45) & 7));
  puVar5 = (ushort *)(param_2 + -2);
  *puVar5 = *puVar5 | 0x8c;
  *(byte *)puVar5 = *(byte *)puVar5 & ~('\x01' << ((bVar4 | 0x7f) & 7));
  *unaff_A6 = (char)((uint6)uVar6 >> 0x28);
  unaff_A6[2] = bVar4 | 0x7f;
  uVar3 = uVar3 | 0x7f;
  puVar2 = (undefined2 *)(param_2 + 0x6c + (int)(short)uVar3);
  *puVar2 = *puVar2;
  *(undefined1 *)(param_2 + 0x6d + (int)(short)uVar3) = 0;
  extraout_A0[0x73] = 0;
  extraout_A0[0x74] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00001728 at 00001728
// Size: 270 bytes

undefined4 FUN_00001728(int param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *extraout_A0;
  undefined1 *puVar8;
  int unaff_A5;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [64];
  
  if (*(int *)(param_1 + 0x2e) < 0) {
    iVar4 = 0x7fffffff;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2e);
  }
  uVar6 = *(int *)(param_1 + 0x36) + (int)(short)*(char *)(unaff_A5 + -0x196);
  if (((*(ushort *)(param_1 + 0x3a) & 4) == 0) && (0x40 < uVar6)) {
    FUN_00001eea(uVar6);
    puVar8 = extraout_A0;
    if (extraout_A0 == (undefined1 *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    puVar8 = auStack_5c;
    uVar6 = 0x40;
  }
  uVar7 = 0;
  do {
    if (iVar4 < 1) {
LAB_00001804:
      FUN_00001836((char)param_1,puVar8);
      *(undefined4 *)(param_1 + 0x36) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      if (puVar8 != auStack_5c) {
        FUN_00001d3e(puVar8);
      }
      return uVar7;
    }
    iVar5 = FUN_00002404((short)auStack_64);
    if (iVar5 < 1) {
      uVar7 = 0xffffffff;
      goto LAB_00001804;
    }
    if (*param_2 == '\0') {
      iVar5 = iVar5 + -1;
    }
    if (iVar4 < iVar5) goto LAB_00001804;
    if (uVar6 < (uint)(iVar5 + *(int *)(param_1 + 0x16))) {
      *(undefined4 *)(param_1 + 0x36) = 0;
      FUN_00001836((char)param_1,puVar8);
      *(undefined4 *)(param_1 + 0x16) = 0;
    }
    puVar2 = puVar8 + *(int *)(param_1 + 0x16);
    puVar3 = auStack_64;
    for (iVar1 = iVar5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(int *)(param_1 + 0x16) = iVar5 + *(int *)(param_1 + 0x16);
    if (*param_2 == '\0') goto LAB_00001804;
    param_2 = param_2 + 1;
    iVar4 = iVar4 - iVar5;
  } while( true );
}



// Function: FUN_00001836 at 00001836
// Size: 612 bytes

undefined4 FUN_00001836(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int extraout_A0_03;
  int extraout_A0_04;
  int extraout_A0_05;
  int extraout_A0_06;
  int unaff_A5;
  
  uVar3 = (((((*(int *)(param_1 + 0x36) - *(int *)(param_1 + 0x16)) - *(int *)(param_1 + 0x1a)) -
            *(int *)(param_1 + 0x1e)) - *(int *)(param_1 + 0x22)) - *(int *)(param_1 + 0x26)) -
          *(int *)(param_1 + 0x2a);
  if (((*(ushort *)(param_1 + 0x3a) & 4) == 0) && (uVar2 = uVar3, 0 < (int)uVar3)) {
    for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar1) {
      uVar1 = uVar2;
      if (0x20 < uVar2) {
        uVar1 = 0x20;
      }
      if (0 < (int)uVar1) {
        (**(code **)(param_1 + 10))(*(undefined4 *)(param_1 + 0xe),unaff_A5 + -0xa6,uVar1);
        *(int *)(param_1 + 0xe) = extraout_A0;
        if (extraout_A0 == 0) {
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x32) = uVar1 + *(int *)(param_1 + 0x32);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x16)) {
    (**(code **)(param_1 + 10))
              (*(undefined4 *)(param_1 + 0xe),param_2,*(undefined4 *)(param_1 + 0x16));
    *(int *)(param_1 + 0xe) = extraout_A0_00;
    if (extraout_A0_00 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x32) = *(int *)(param_1 + 0x16) + *(int *)(param_1 + 0x32);
  }
  if (0 < *(int *)(param_1 + 0x1a)) {
    for (uVar2 = *(uint *)(param_1 + 0x1a); 0 < (int)uVar2; uVar2 = uVar2 - uVar1) {
      uVar1 = uVar2;
      if (0x20 < uVar2) {
        uVar1 = 0x20;
      }
      if (0 < (int)uVar1) {
        (**(code **)(param_1 + 10))(*(undefined4 *)(param_1 + 0xe),unaff_A5 + -0x84,uVar1);
        *(int *)(param_1 + 0xe) = extraout_A0_01;
        if (extraout_A0_01 == 0) {
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x32) = uVar1 + *(int *)(param_1 + 0x32);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x1e)) {
    (**(code **)(param_1 + 10))
              (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12),
               *(undefined4 *)(param_1 + 0x1e));
    *(int *)(param_1 + 0xe) = extraout_A0_02;
    if (extraout_A0_02 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x32) = *(int *)(param_1 + 0x1e) + *(int *)(param_1 + 0x32);
  }
  if (0 < *(int *)(param_1 + 0x22)) {
    for (uVar2 = *(uint *)(param_1 + 0x22); 0 < (int)uVar2; uVar2 = uVar2 - uVar1) {
      uVar1 = uVar2;
      if (0x20 < uVar2) {
        uVar1 = 0x20;
      }
      if (0 < (int)uVar1) {
        (**(code **)(param_1 + 10))(*(undefined4 *)(param_1 + 0xe),unaff_A5 + -0x84,uVar1);
        *(int *)(param_1 + 0xe) = extraout_A0_03;
        if (extraout_A0_03 == 0) {
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x32) = uVar1 + *(int *)(param_1 + 0x32);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x26)) {
    (**(code **)(param_1 + 10))
              (*(undefined4 *)(param_1 + 0xe),*(int *)(param_1 + 0x12) + *(int *)(param_1 + 0x1e),
               *(undefined4 *)(param_1 + 0x26));
    *(int *)(param_1 + 0xe) = extraout_A0_04;
    if (extraout_A0_04 == 0) {
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x32) = *(int *)(param_1 + 0x26) + *(int *)(param_1 + 0x32);
  }
  if (0 < *(int *)(param_1 + 0x2a)) {
    for (uVar2 = *(uint *)(param_1 + 0x2a); 0 < (int)uVar2; uVar2 = uVar2 - uVar1) {
      uVar1 = uVar2;
      if (0x20 < uVar2) {
        uVar1 = 0x20;
      }
      if (0 < (int)uVar1) {
        (**(code **)(param_1 + 10))(*(undefined4 *)(param_1 + 0xe),unaff_A5 + -0x84,uVar1);
        *(int *)(param_1 + 0xe) = extraout_A0_05;
        if (extraout_A0_05 == 0) {
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x32) = uVar1 + *(int *)(param_1 + 0x32);
      }
    }
  }
  if (((*(ushort *)(param_1 + 0x3a) & 4) != 0) && (0 < (int)uVar3)) {
    for (; 0 < (int)uVar3; uVar3 = uVar3 - uVar2) {
      uVar2 = uVar3;
      if (0x20 < uVar3) {
        uVar2 = 0x20;
      }
      if (0 < (int)uVar2) {
        (**(code **)(param_1 + 10))(*(undefined4 *)(param_1 + 0xe),unaff_A5 + -0xa6,uVar2);
        *(int *)(param_1 + 0xe) = extraout_A0_06;
        if (extraout_A0_06 == 0) {
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x32) = uVar2 + *(int *)(param_1 + 0x32);
      }
    }
  }
  return 0;
}



// Function: FUN_00001a9a at 00001a9a
// Size: 654 bytes

int FUN_00001a9a(code *param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int extraout_A0;
  int extraout_A0_00;
  int unaff_A5;
  undefined2 local_3c;
  char local_39;
  code *local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  int local_28;
  int local_20;
  char local_1c;
  char local_1b;
  char local_1a;
  
  iVar5 = 0;
  local_3c = *(undefined2 *)(unaff_A5 + -0x6f2);
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_4;
  local_28 = 0;
  local_2c = param_3;
  while( true ) {
    while( true ) {
      local_39 = '\0';
      iVar2 = FUN_00002056(&local_39,local_2c,0x7fffffff,&local_3c);
      if (iVar2 < 1) {
        iVar2 = -1;
        pcVar6 = local_2c;
        do {
          iVar2 = iVar2 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_00002804((int)(short)local_39);
      if ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar3) & 0x44) == 0) {
        iVar3 = iVar2;
        pcVar6 = local_2c;
        if (local_39 == '%') {
          iVar3 = iVar2 + -1;
        }
        while (-1 < iVar3 + -1) {
          local_28 = local_28 + 1;
          iVar4 = (*local_38)(local_34,0,1);
          if ((short)*pcVar6 != iVar4) {
            if (iVar4 == -1) {
              return iVar5;
            }
            local_28 = local_28 + -1;
            (*local_38)(local_34,iVar4,0);
            return iVar5;
          }
          iVar3 = iVar3 + -1;
          pcVar6 = pcVar6 + 1;
        }
      }
      else {
        do {
          local_28 = local_28 + 1;
          iVar3 = (*local_38)(local_34,0,1);
        } while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar3) & 0x44) != 0);
        if (iVar3 == -1) {
          local_28 = local_28 + -1;
        }
        else {
          local_28 = local_28 + -1;
          (*local_38)(local_34,iVar3,0);
        }
      }
      local_2c = local_2c + iVar2;
      if (local_39 == '%') break;
      if (local_39 == '\0') {
        return iVar5;
      }
    }
    if (*local_2c == '*') {
      local_1c = *local_2c;
      local_2c = local_2c + 1;
    }
    else {
      local_1c = '\0';
    }
    local_20 = 0;
    while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + (int)(short)*local_2c) & 0x20) != 0) {
      if (local_20 < 0x7fffffff) {
        iVar2 = FUN_000005c0();
        local_20 = iVar2 + (short)*local_2c + -0x30;
      }
      local_2c = local_2c + 1;
    }
    FUN_00002662(unaff_A5 + -0x62,(int)(short)*local_2c);
    if (extraout_A0 == 0) {
      local_1b = '\0';
    }
    else {
      local_1b = *local_2c;
      local_2c = local_2c + 1;
    }
    FUN_00002662(unaff_A5 + -0x5d,(int)(short)*local_2c);
    if (extraout_A0_00 == 0) {
      do {
        local_28 = local_28 + 1;
        iVar2 = (*local_38)(local_34,0,1);
      } while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + iVar2) & 0x44) != 0);
      if (iVar2 == -1) {
        local_28 = local_28 + -1;
      }
      else {
        local_28 = local_28 + -1;
        (*local_38)(local_34,iVar2,0);
      }
    }
    iVar2 = FUN_000000f0(&local_38);
    if (iVar2 < 1) break;
    if (local_1a != '\0') {
      iVar5 = iVar5 + 1;
    }
    local_2c = local_2c + 1;
  }
  if (iVar5 == 0) {
    return iVar2;
  }
  return iVar5;
}



// Function: FUN_00001d28 at 00001d28
// Size: 22 bytes

int FUN_00001d28(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



// Function: FUN_00001d3e at 00001d3e
// Size: 180 bytes

void FUN_00001d3e(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int unaff_A5;
  
  if (((param_1 != (uint *)0x0) && (puVar1 = param_1 + -1, 7 < *puVar1)) && ((*puVar1 & 3) == 0)) {
    if ((*(int *)(unaff_A5 + -0x6ec) == 0) || (puVar1 < *(uint **)(unaff_A5 + -0x6ec))) {
      *param_1 = *(uint *)(unaff_A5 + -0x6ec);
      *(uint **)(unaff_A5 + -0x6ec) = puVar1;
    }
    else {
      for (puVar2 = *(uint **)(unaff_A5 + -0x6ec); (puVar2[1] != 0 && ((uint *)puVar2[1] < puVar1));
          puVar2 = (uint *)puVar2[1]) {
      }
      if (puVar1 < (uint *)(*puVar2 + (int)puVar2)) {
        return;
      }
      if ((uint *)(*puVar2 + (int)puVar2) == puVar1) {
        *puVar2 = *puVar1 + *puVar2;
        puVar1 = puVar2;
      }
      else {
        if ((puVar2[1] != 0) && (puVar2[1] < *puVar1 + (int)puVar1)) {
          return;
        }
        *param_1 = puVar2[1];
        puVar2[1] = (uint)puVar1;
      }
    }
    if ((puVar1[1] != 0) && (*puVar1 + (int)puVar1 == puVar1[1])) {
      *(undefined4 *)(unaff_A5 + -0x6f0) = 0;
      *puVar1 = *(int *)puVar1[1] + *puVar1;
      puVar1[1] = *(uint *)(puVar1[1] + 4);
    }
  }
  return;
}



// Function: FUN_00001df2 at 00001df2
// Size: 22 bytes

int FUN_00001df2(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



// Function: FUN_00001e08 at 00001e08
// Size: 56 bytes

void FUN_00001e08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00000650();
  iVar2 = FUN_000005c0();
  *param_1 = uVar1;
  param_1[1] = param_2 - iVar2;
  return;
}



// Function: FUN_00001e40 at 00001e40
// Size: 170 bytes

void FUN_00001e40(uint param_1)

{
  uint uVar1;
  uint *extraout_A0;
  int *piVar2;
  int unaff_A5;
  
  do {
    piVar2 = *(int **)(unaff_A5 + -0x6f0);
    if (piVar2 == (int *)0x0) {
      for (piVar2 = (int *)(unaff_A5 + -0x6ec); *piVar2 != 0; piVar2 = (int *)(*piVar2 + 4)) {
        if (param_1 <= *(uint *)*piVar2) {
          return;
        }
      }
    }
    else {
      for (; *piVar2 != 0; piVar2 = (int *)(*piVar2 + 4)) {
        if (param_1 <= *(uint *)*piVar2) {
          return;
        }
      }
      for (piVar2 = (int *)(unaff_A5 + -0x6ec); **(int **)(unaff_A5 + -0x6f0) != *piVar2;
          piVar2 = (int *)(*piVar2 + 4)) {
        if (param_1 <= *(uint *)*piVar2) {
          return;
        }
      }
    }
    uVar1 = 0x8000;
    while( true ) {
      if (uVar1 < param_1) {
        uVar1 = param_1;
      }
      FUN_00002032(uVar1);
      if (extraout_A0 != (uint *)0x0) break;
      if (uVar1 == param_1) {
        return;
      }
      uVar1 = uVar1 >> 1;
    }
    *extraout_A0 = uVar1;
    FUN_00001d3e(extraout_A0 + 1);
  } while( true );
}



// Function: FUN_00001eea at 00001eea
// Size: 108 bytes

void FUN_00001eea(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *extraout_A0;
  int unaff_A5;
  
  uVar2 = param_1 + 7 & 0xfffffffc;
  if (param_1 < uVar2) {
    if (uVar2 < 8) {
      uVar2 = 8;
    }
    FUN_00001e40(uVar2);
    if (extraout_A0 != (uint *)0x0) {
      puVar1 = (uint *)*extraout_A0;
      if (*puVar1 - 8 < uVar2) {
        *extraout_A0 = puVar1[1];
      }
      else {
        *extraout_A0 = uVar2 + (int)puVar1;
        *(uint *)(*extraout_A0 + 4) = puVar1[1];
        *(uint *)*extraout_A0 = *puVar1 - uVar2;
        *puVar1 = uVar2;
      }
      *(uint **)(unaff_A5 + -0x6f0) = extraout_A0;
    }
  }
  return;
}



// Function: FUN_00001f7c at 00001f7c
// Size: 182 bytes

uint FUN_00001f7c(char *param_1,int *param_2,undefined4 param_3)

{
  char cVar2;
  uint uVar1;
  char *pcVar3;
  char *pcVar4;
  int unaff_A5;
  int local_18;
  
  pcVar3 = param_1;
  if (param_2 == (int *)0x0) {
    param_2 = &local_18;
  }
  while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + (int)(short)*pcVar3) & 0x44) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  if ((*pcVar3 == '-') || (*pcVar3 == '+')) {
    pcVar4 = pcVar3 + 1;
    cVar2 = *pcVar3;
  }
  else {
    cVar2 = '+';
    pcVar4 = pcVar3;
  }
  uVar1 = FUN_0000228a(pcVar4,param_2,param_3);
  if (pcVar4 == (char *)*param_2) {
    *param_2 = (int)param_1;
  }
  if ((((param_1 == (char *)*param_2) && (uVar1 != 0)) || ((cVar2 == '+' && (0x7fffffff < uVar1))))
     || ((cVar2 == '-' && (0x80000000 < uVar1)))) {
    *(undefined4 *)(unaff_A5 + -0x6fe) = 0x22;
    if (cVar2 == '-') {
      uVar1 = 0x80000000;
    }
    else {
      uVar1 = 0x7fffffff;
    }
  }
  else if (cVar2 == '-') {
    uVar1 = -uVar1;
  }
  return uVar1;
}



// Function: FUN_00002032 at 00002032
// Size: 22 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002032(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_00002056 at 00002056
// Size: 272 bytes

uint FUN_00002056(undefined1 *param_1,byte *param_2,int param_3,undefined2 *param_4)

{
  int iVar1;
  ushort uVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  int unaff_A5;
  
  if (param_2 == (byte *)0x0) {
    *param_4 = *(undefined2 *)(unaff_A5 + -0x6e8);
    uVar6 = **(ushort **)(unaff_A5 + -0x194) & 0xf00;
  }
  else {
    uVar4 = (uint)*(byte *)((int)param_4 + 1);
    uVar6 = 0;
    uVar3 = *(undefined1 *)param_4;
    pbVar7 = param_2;
    do {
      cVar5 = (char)uVar4;
      if (param_3 == 0) {
        *(undefined1 *)param_4 = uVar3;
        *(char *)((int)param_4 + 1) = cVar5;
        return 0xfffffffe;
      }
      if (((('\x0f' < cVar5) || (iVar1 = *(int *)(unaff_A5 + -0x194 + (short)cVar5 * 4), iVar1 == 0)
           ) || (uVar6 = uVar6 + 1, 0xfef < uVar6)) ||
         (uVar2 = *(ushort *)(iVar1 + (uint)*pbVar7 * 2), uVar2 == 0)) {
        *(undefined4 *)(unaff_A5 + -0x6fe) = 0x24;
        return 0xffffffff;
      }
      uVar4 = (int)(uVar2 & 0xf00) >> 8;
      if ((uVar2 & 0x8000) != 0) {
        uVar3 = (undefined1)uVar2;
      }
      if (((uVar2 & 0x4000) != 0) && (*pbVar7 != 0)) {
        pbVar7 = pbVar7 + 1;
        param_3 = param_3 + -1;
        uVar6 = 0;
      }
    } while ((uVar2 & 0x2000) == 0);
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = uVar3;
    }
    *(undefined1 *)param_4 = uVar3;
    *(char *)((int)param_4 + 1) = (char)((uVar2 & 0xf00) >> 8);
    uVar6 = (int)pbVar7 - (int)param_2;
  }
  return uVar6;
}



// Function: FUN_00002166 at 00002166
// Size: 142 bytes

/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_00002166(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  int unaff_A5;
  undefined1 auStack_44 [6];
  undefined1 auStack_3e [36];
  short local_1a;
  
  local_1a = 0;
  pcVar1 = param_2;
  while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + (int)(short)*pcVar1) & 0x44) != 0) {
    pcVar1 = pcVar1 + 1;
  }
  func_0x00007698(pcVar1,&local_1a,auStack_3e,auStack_44);
  if (local_1a == 0) {
    *(undefined4 *)(unaff_A5 + -0x6fe) = 0x22;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    return param_3;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = pcVar1 + local_1a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0000228a at 0000228a
// Size: 378 bytes

uint FUN_0000228a(char *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_D5;
  char cVar4;
  int extraout_A0;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_A5;
  uint local_2c;
  
  pcVar6 = param_1;
  while ((*(byte *)(*(int *)(unaff_A5 + -0x562) + (int)(short)*pcVar6) & 0x44) != 0) {
    pcVar6 = pcVar6 + 1;
  }
  if ((*pcVar6 == '-') || (*pcVar6 == '+')) {
    pcVar7 = pcVar6 + 1;
    cVar4 = *pcVar6;
  }
  else {
    cVar4 = '+';
    pcVar7 = pcVar6;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    uVar1 = 0;
  }
  else {
    pcVar6 = pcVar7;
    if (param_3 < 1) {
      if (*pcVar7 == '0') {
        if ((pcVar7[1] == 'x') || (pcVar7[1] == 'X')) {
          param_3 = 0x10;
          pcVar7 = pcVar7 + 2;
          pcVar6 = pcVar7;
        }
        else {
          param_3 = 8;
        }
      }
      else {
        param_3 = 10;
      }
    }
    else if (((param_3 == 0x10) && (*pcVar7 == '0')) && ((pcVar7[1] == 'x' || (pcVar7[1] == 'X'))))
    {
      pcVar7 = pcVar7 + 2;
      pcVar6 = pcVar7;
    }
    for (; *pcVar7 == '0'; pcVar7 = pcVar7 + 1) {
    }
    uVar3 = 0;
    pcVar8 = pcVar7;
    while (uVar1 = uVar3,
          FUN_00002526(unaff_A5 + -0x54,
                       (int)(short)*(char *)(*(int *)(unaff_A5 + -0x3de) + (int)(short)*pcVar8),
                       param_3), extraout_A0 != 0) {
      unaff_D5 = extraout_A0 - (unaff_A5 + -0x54);
      iVar2 = FUN_000005c0();
      pcVar8 = pcVar8 + 1;
      uVar3 = iVar2 + (short)(char)unaff_D5;
      local_2c = uVar1;
    }
    if (pcVar6 == pcVar8) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = param_1;
      }
      uVar1 = 0;
    }
    else {
      iVar2 = (int)(short)*(char *)(unaff_A5 + -0x2e + param_3);
      iVar5 = ((int)pcVar8 - (int)pcVar7) - iVar2;
      if ((-1 < iVar5) &&
         ((((int)pcVar8 - (int)pcVar7 != iVar2 && -1 < iVar5 ||
           (uVar1 < uVar1 - (int)(short)(char)unaff_D5)) ||
          (uVar3 = func_0x000005f2(), uVar3 != local_2c)))) {
        *(undefined4 *)(unaff_A5 + -0x6fe) = 0x22;
        uVar1 = 0xffffffff;
        cVar4 = '+';
        pcVar8 = param_1;
      }
      if (cVar4 == '-') {
        uVar1 = -uVar1;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = pcVar8;
      }
    }
  }
  return uVar1;
}



// Function: FUN_00002526 at 00002526
// Size: 32 bytes

void FUN_00002526(char *param_1,char param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return;
}



// Function: FUN_00002546 at 00002546
// Size: 56 bytes

undefined4 FUN_00002546(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  if (*param_2 <= *param_1) {
    return 1;
  }
  return 0xffffffff;
}



// Function: FUN_0000257e at 0000257e
// Size: 12 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000257e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00002592 at 00002592
// Size: 170 bytes

void FUN_00002592(char *param_1,char param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    if (param_2 != '\0') {
      uVar3 = CONCAT11(param_2,param_2);
      uVar2 = CONCAT22(uVar3,uVar3);
    }
    for (; (param_3 != 0 && (((uint)param_1 & 3) != 0)); param_1 = param_1 + 1) {
      param_3 = param_3 - 1;
      *param_1 = param_2;
    }
    for (uVar1 = param_3 >> 5; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)(param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 8) = uVar2;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      param_1 = param_1 + 0x20;
    }
    for (uVar1 = (param_3 & 0x1f) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = uVar2;
      param_1 = param_1 + 4;
    }
    if ((param_3 & 2) != 0) {
      *(undefined2 *)param_1 = uVar3;
      param_1 = param_1 + 2;
    }
    if ((param_3 & 1) != 0) {
      *param_1 = param_2;
    }
  }
  return;
}



// Function: FUN_00002662 at 00002662
// Size: 38 bytes

void FUN_00002662(char *param_1,char param_2)

{
  while( true ) {
    if (*param_1 == param_2) {
      return;
    }
    if (*param_1 == '\0') break;
    param_1 = param_1 + 1;
  }
  return;
}



// Function: FUN_00002688 at 00002688
// Size: 50 bytes

undefined4 FUN_00002688(byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  
  while( true ) {
    if (*param_1 != *param_2) {
      if (*param_1 < *param_2) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 1;
      }
      return uVar1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}



// Function: FUN_000026ba at 000026ba
// Size: 56 bytes

int FUN_000026ba(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  for (pcVar1 = param_1; pcVar2 = param_2, *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
      if (*pcVar1 == *pcVar2) goto LAB_000026ec;
    }
  }
LAB_000026ec:
  return (int)pcVar1 - (int)param_1;
}



// Function: FUN_00002720 at 00002720
// Size: 56 bytes

int FUN_00002720(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  for (pcVar1 = param_1; pcVar2 = param_2, *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    while( true ) {
      if (*pcVar2 == '\0') goto LAB_00002752;
      if (*pcVar1 == *pcVar2) break;
      pcVar2 = pcVar2 + 1;
    }
  }
LAB_00002752:
  return (int)pcVar1 - (int)param_1;
}



// Function: FUN_00002758 at 00002758
// Size: 78 bytes

void FUN_00002758(char *param_1,char *param_2)

{
  char *extraout_A0;
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    while (FUN_00002662(param_1,(int)(short)*param_2), pcVar1 = param_2, pcVar2 = extraout_A0,
          extraout_A0 != (char *)0x0) {
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar1 == '\0') {
          return;
        }
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == *pcVar1);
      param_1 = extraout_A0 + 1;
    }
  }
  return;
}



// Function: FUN_000027a6 at 000027a6
// Size: 94 bytes

void FUN_000027a6(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int unaff_A5;
  
  if (param_1 == 0) {
    param_1 = *(int *)(unaff_A5 + -6);
  }
  iVar1 = FUN_00002720(param_1,param_2);
  pcVar2 = (char *)(iVar1 + param_1);
  if (*pcVar2 == '\0') {
    *(int *)(unaff_A5 + -6) = unaff_A5 + -7;
  }
  else {
    iVar1 = FUN_000026ba(pcVar2,param_2);
    pcVar2 = pcVar2 + iVar1;
    pcVar3 = pcVar2;
    if (*pcVar2 != '\0') {
      pcVar3 = pcVar2 + 1;
      *pcVar2 = '\0';
    }
    *(char **)(unaff_A5 + -6) = pcVar3;
  }
  return;
}



// Function: FUN_00002804 at 00002804
// Size: 60 bytes

uint FUN_00002804(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_8 [8];
  
  if (param_1 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_00002404(local_8);
    if (iVar2 == 1) {
      uVar1 = (uint)local_8[0];
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



