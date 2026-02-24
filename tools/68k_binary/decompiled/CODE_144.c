// Warlords II - Decompiled 68k Code
// Segment: CODE_144
// Decompiled by Ghidra 12.0.3

// Function: FUN_0000000c at 0000000c
// Size: 88 bytes

uint FUN_0000000c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_1 >> 8 == *param_2 >> 8) {
    uVar1 = (uint)(param_2 < param_1);
  }
  else {
    uVar1 = (uint)CONCAT21((short)(*param_2 >> 0x10),*param_2 >> 8 < *param_1 >> 8);
  }
  return uVar1;
}



// Function: FUN_00000064 at 00000064
// Size: 56 bytes

void FUN_00000064(uint *param_1)

{
  if ((*param_1 & 8) == 0) {
    *(uint **)((int)param_1 + ((*param_1 >> 8) - 4)) = param_1;
  }
  return;
}



// Function: FUN_0000009c at 0000009c
// Size: 70 bytes

void FUN_0000009c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00000a7e(param_1);
  *param_1 = 0x13f84;
  FUN_000005d8(param_1 + 8);
  param_1[6] = param_3;
  param_1[7] = param_2;
  param_1[5] = 0;
  return;
}



// Function: FUN_000000e2 at 000000e2
// Size: 68 bytes

undefined4 FUN_000000e2(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x13f84;
    FUN_00000542(param_1);
    uVar1 = FUN_000009f4((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00000ace(param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00000126 at 00000126
// Size: 26 bytes

void FUN_00000126(int param_1)

{
  FUN_00000578(param_1,*(undefined4 *)(param_1 + 0x1c));
  return;
}



// Function: FUN_00000140 at 00000140
// Size: 92 bytes

void FUN_00000140(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((uint)param_1[7] < param_2) {
    param_1[7] = param_2;
  }
  if ((uint)param_1[6] < param_3) {
    param_1[6] = param_3;
  }
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  if (uVar1 < param_2) {
    FUN_00000578(param_1,param_2);
  }
  else {
    FUN_00000578(param_1,param_3);
  }
  return;
}



// Function: FUN_0000019c at 0000019c
// Size: 44 bytes

int FUN_0000019c(int param_1)

{
  int local_c;
  int local_8;
  
  FUN_000007f0(param_1 + 0x20,&local_8,&local_c);
  return local_8 + local_c * -4;
}



// Function: FUN_000001c8 at 000001c8
// Size: 290 bytes

void FUN_000001c8(int param_1,int param_2,int *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *extraout_A0;
  uint *extraout_A0_00;
  undefined4 extraout_A0_01;
  uint *puVar5;
  
  uVar3 = param_2 + 4;
  if (uVar3 < 0x14) {
    uVar3 = 0x14;
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 + 1;
  }
  FUN_000005a8(param_1,uVar3);
  puVar5 = extraout_A0;
  if ((extraout_A0 == (uint *)0x0) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) < uVar3 + 0x24) {
      iVar4 = uVar3 + 0x24;
    }
    FUN_00000578(param_1,iVar4);
    FUN_000005a8(param_1,uVar3);
    puVar5 = extraout_A0_00;
  }
  *param_3 = 0;
  if (puVar5 != (uint *)0x0) {
    *puVar5 = *puVar5 | 8;
    FUN_0000058e(param_1,puVar5);
    if (0x13 < (*puVar5 >> 8) - uVar3) {
      uVar2 = 0;
      if (uVar3 + (int)puVar5 != 0) {
        func_0x000006fc(uVar3 + (int)puVar5,0,1,(*puVar5 >> 8) - uVar3);
        uVar2 = extraout_A0_01;
      }
      FUN_00000402(param_1,uVar2);
      *puVar5 = *puVar5 & 0xff;
      *puVar5 = uVar3 << 8 | *puVar5;
    }
    puVar1 = (uint *)((int)puVar5 + (*puVar5 >> 8));
    *puVar1 = *puVar1 | 4;
    *param_3 = (*puVar5 >> 8) - 4;
  }
  return;
}



// Function: FUN_000002ea at 000002ea
// Size: 32 bytes

int FUN_000002ea(undefined4 param_1,int param_2)

{
  return (*(uint *)(param_2 + -4) >> 8) - 4;
}



// Function: FUN_0000030a at 0000030a
// Size: 144 bytes

void FUN_0000030a(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int extraout_A0;
  int extraout_A0_00;
  
  puVar2 = (uint *)(param_2 + -4);
  *puVar2 = *puVar2 & 0xfffffff7;
  FUN_00000064(puVar2);
  puVar1 = (uint *)((int)puVar2 + (*puVar2 >> 8));
  *puVar1 = *puVar1 & 0xfffffffb;
  FUN_0000041c(param_1,puVar1);
  if (extraout_A0 != 0) {
    FUN_0000058e(param_1,puVar1);
  }
  FUN_0000041c(param_1,puVar2);
  if (extraout_A0_00 == 0) {
    FUN_00000402(param_1,puVar2);
  }
  else {
    FUN_0000058e(param_1,extraout_A0_00);
    FUN_00000402(param_1,extraout_A0_00);
  }
  return;
}



// Function: FUN_0000039a at 0000039a
// Size: 68 bytes

void FUN_0000039a(int param_1)

{
  undefined4 extraout_A0;
  undefined1 auStack_14 [16];
  
  FUN_00000542(param_1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_000005d8(auStack_14);
  FUN_0000061c(param_1 + 0x20,extraout_A0);
  FUN_00000578(param_1,*(undefined4 *)(param_1 + 0x1c));
  return;
}



// Function: FUN_000003de at 000003de
// Size: 36 bytes

int FUN_000003de(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *(int *)(param_1 + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    iVar1 = *(int *)(iVar2 + 4) + iVar1;
  }
  return iVar1;
}



// Function: FUN_00000402 at 00000402
// Size: 26 bytes

void FUN_00000402(int param_1,undefined4 param_2)

{
  FUN_0000063c(param_1 + 0x20,param_2);
  return;
}



// Function: FUN_0000041c at 0000041c
// Size: 118 bytes

void FUN_0000041c(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*param_2 & 8) == 0) && ((*param_2 & 4) == 0)) {
    puVar1 = (uint *)param_2[-1];
    uVar2 = *param_2;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 & 0xff;
    *puVar1 = ((uVar2 >> 8) + (uVar3 >> 8)) * 0x100 | *puVar1;
    FUN_00000064(puVar1);
  }
  return;
}



// Function: FUN_00000492 at 00000492
// Size: 176 bytes

void FUN_00000492(int *param_1,uint param_2)

{
  int iVar1;
  int *extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  *extraout_A0 = (int)(extraout_A0 + 3);
  extraout_A0[1] = param_2 - 0xc;
  extraout_A0[2] = param_1[5];
  param_1[5] = (int)extraout_A0;
  iVar1 = extraout_A0[1] + *extraout_A0 + -0x10;
  if (iVar1 != 0) {
    func_0x000006fc(iVar1,1,0,0);
  }
  if (*extraout_A0 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000006fc(*extraout_A0,0,1,extraout_A0[1] + -0x10);
    uVar2 = extraout_A0_00;
  }
  FUN_00000402(param_1,uVar2);
  return;
}



// Function: FUN_00000542 at 00000542
// Size: 54 bytes

void FUN_00000542(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[5];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    (**(code **)(*param_1 + 0x48))(param_1,iVar2);
    iVar2 = iVar1;
  }
  return;
}



// Function: FUN_00000578 at 00000578
// Size: 22 bytes

void FUN_00000578(undefined4 param_1,undefined4 param_2)

{
  FUN_00000492(param_1,param_2);
  return;
}



// Function: FUN_0000058e at 0000058e
// Size: 26 bytes

void FUN_0000058e(int param_1,undefined4 param_2)

{
  FUN_0000069c(param_1 + 0x20,param_2);
  return;
}



// Function: FUN_000005a8 at 000005a8
// Size: 48 bytes

void FUN_000005a8(int param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    param_2 = param_2 + 1;
  }
  FUN_00000758(param_1 + 0x20,param_2,0,0);
  return;
}



// Function: FUN_000005d8 at 000005d8
// Size: 68 bytes

void FUN_000005d8(uint *param_1)

{
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = *param_1 & 0xffffff0f;
  *param_1 = *param_1 | 0x10;
  *param_1 = *param_1 | 8;
  *param_1 = *param_1 | 4;
  *param_1 = *param_1 & 0xff;
  *param_1 = *param_1;
  *param_1 = *param_1 & 0xfffffffc;
  *param_1 = *param_1 | 3;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_0000061c at 0000061c
// Size: 32 bytes

void FUN_0000061c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



// Function: FUN_0000063c at 0000063c
// Size: 96 bytes

void FUN_0000063c(undefined4 param_1,uint *param_2)

{
  char cVar1;
  uint local_8;
  
  FUN_00000758(param_1,*param_2 >> 8,param_2,&local_8);
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = local_8;
  cVar1 = FUN_0000000c(param_2,local_8);
  if (cVar1 == '\0') {
    *(uint **)(local_8 + 8) = param_2;
  }
  else {
    *(uint **)(local_8 + 0xc) = param_2;
  }
  return;
}



// Function: FUN_0000069c at 0000069c
// Size: 187 bytes

int FUN_0000069c(undefined4 param_1,int param_2)

{
  int iVar1;
  int extraout_A0;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
    FUN_00000824(param_1,param_2);
    iVar2 = extraout_A0;
  }
  iVar1 = *(int *)(iVar2 + 4);
  if (*(int *)(iVar2 + 8) == 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  else {
    iVar3 = *(int *)(iVar2 + 8);
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar1;
  }
  if (iVar2 == *(int *)(iVar1 + 8)) {
    *(int *)(iVar1 + 8) = iVar3;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar3;
  }
  if (iVar2 != param_2) {
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(iVar1 + 8) == param_2) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    else {
      *(int *)(iVar1 + 0xc) = iVar2;
    }
    *(int *)(iVar2 + 4) = iVar1;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    if (*(int *)(iVar2 + 8) != 0) {
      *(int *)(*(int *)(iVar2 + 8) + 4) = iVar2;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(int *)(*(int *)(iVar2 + 0xc) + 4) = iVar2;
    }
  }
  return iVar3;
}



// Function: FUN_00000758 at 00000758
// Size: 152 bytes

void FUN_00000758(uint *param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x7fffffff;
  do {
    iVar1 = (*param_1 >> 8) - param_2;
    if ((-1 < iVar1) && (iVar1 < iVar2)) {
      iVar2 = iVar1;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_1;
    }
    if (param_2 < *param_1 >> 8) {
      param_1 = (uint *)param_1[2];
    }
    else if (*param_1 >> 8 < param_2) {
      param_1 = (uint *)param_1[3];
    }
    else if (param_3 == (uint *)0x0) {
      param_1 = (uint *)param_1[2];
    }
    else if (param_1 < param_3) {
      param_1 = (uint *)param_1[3];
    }
    else {
      param_1 = (uint *)param_1[2];
    }
  } while (param_1 != (uint *)0x0);
  return;
}



// Function: FUN_000007f0 at 000007f0
// Size: 52 bytes

void FUN_000007f0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *param_3 = 0;
  *param_2 = 0;
  FUN_00000870(param_1,param_1,param_2,param_3);
  *param_3 = *param_3 + -1;
  return;
}



// Function: FUN_00000824 at 00000824
// Size: 76 bytes

void FUN_00000824(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = *(int *)(param_2 + 4);
    iVar3 = 0;
    while ((iVar2 = iVar1, iVar2 != 0 && (iVar3 == *(int *)(iVar2 + 0xc)))) {
      iVar3 = iVar2;
      iVar1 = *(int *)(iVar2 + 4);
    }
  }
  else {
    for (iVar1 = *(int *)(param_2 + 0xc); *(int *)(iVar1 + 8) != 0; iVar1 = *(int *)(iVar1 + 8)) {
    }
  }
  return;
}



// Function: FUN_00000870 at 00000870
// Size: 92 bytes

void FUN_00000870(undefined4 param_1,uint *param_2,int *param_3,int *param_4)

{
  if (param_2 != (uint *)0x0) {
    FUN_00000870(param_1,param_2[2],param_3,param_4);
    *param_4 = *param_4 + 1;
    *param_3 = (*param_2 >> 8) + *param_3;
    FUN_00000870(param_1,param_2[3],param_3,param_4);
  }
  return;
}



// Function: FUN_000008cc at 000008cc
// Size: 88 bytes

void FUN_000008cc(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *extraout_A0;
  undefined1 *puVar2;
  uint local_8;
  
  (**(code **)(*param_1 + 0x34))(param_1,param_2,&local_8);
  if (extraout_A0 != (undefined1 *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      puVar2 = extraout_A0;
      for (uVar1 = 0; uVar1 < local_8; uVar1 = uVar1 + 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    param_1[3] = local_8 + param_1[3];
    param_1[4] = param_1[4] + 1;
  }
  return;
}



// Function: FUN_00000924 at 00000924
// Size: 16 bytes

undefined4 FUN_00000924(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// Function: FUN_00000934 at 00000934
// Size: 92 bytes

void FUN_00000934(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    if (*(char *)((int)param_1 + 9) != '\0') {
      puVar3 = param_2;
      for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    param_1[3] = param_1[3] - uVar1;
    param_1[4] = param_1[4] + -1;
  }
  return;
}



// Function: FUN_00000990 at 00000990
// Size: 16 bytes

void FUN_00000990(void)

{
  return;
}



// Function: FUN_000009a0 at 000009a0
// Size: 16 bytes

undefined1 FUN_000009a0(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// Function: FUN_000009b0 at 000009b0
// Size: 16 bytes

undefined1 FUN_000009b0(int param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



// Function: FUN_000009c0 at 000009c0
// Size: 16 bytes

undefined4 FUN_000009c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// Function: FUN_000009d0 at 000009d0
// Size: 18 bytes

void FUN_000009d0(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2._0_1_;
  return;
}



// Function: FUN_000009e2 at 000009e2
// Size: 18 bytes

void FUN_000009e2(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2._0_1_;
  return;
}



// Function: FUN_000009f4 at 000009f4
// Size: 138 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000009f4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *extraout_A0;
  int extraout_A0_00;
  int *extraout_A0_01;
  int *piVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    *param_1 = 0x13f2c;
    piVar1 = _DAT_000271e4;
    piVar4 = (int *)0x0;
    while (piVar3 = piVar1, piVar3 != (int *)0x0) {
      if (param_1 == piVar3) {
        if (piVar4 == (int *)0x0) {
          (**(code **)(*piVar3 + 0x10))();
          _DAT_000271e4 = extraout_A0;
        }
        else {
          (**(code **)(*piVar3 + 0x10))();
          piVar4[1] = extraout_A0_00;
        }
        piVar1 = (int *)0x0;
      }
      else {
        (**(code **)(*piVar3 + 0x10))();
        piVar1 = extraout_A0_01;
        piVar4 = piVar3;
      }
    }
    uVar2 = 0;
    if (0 < param_2._0_2_) {
      uVar2 = FUN_00000ace(param_1);
    }
  }
  return uVar2;
}



// Function: FUN_00000a7e at 00000a7e
// Size: 62 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a7e(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0x13f2c;
  *(undefined1 *)((int)param_1 + 10) = param_2._0_1_;
  *(undefined1 *)(param_1 + 2) = param_2._2_1_;
  *(undefined1 *)((int)param_1 + 9) = param_3._0_1_;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = _DAT_000271e4;
  _DAT_000271e4 = param_1;
  return;
}



// Function: FUN_00000abc at 00000abc
// Size: 18 bytes

void FUN_00000abc(undefined4 param_1)

{
  func_0x00001bb0(param_1);
  return;
}



// Function: FUN_00000ace at 00000ace
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000ace(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000adc at 00000adc
// Size: 18 bytes

void FUN_00000adc(undefined4 param_1,undefined4 param_2)

{
  func_0x00001bb0(param_2);
  return;
}



// Function: FUN_00000aee at 00000aee
// Size: 148 bytes

void FUN_00000aee(int *param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *extraout_A0;
  uint *puVar4;
  uint local_8;
  
  local_8 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  (**(code **)(*param_1 + 0x34))(param_1,param_3,param_4);
  if (extraout_A0 != (undefined1 *)0x0) {
    if (local_8 < param_3) {
      puVar4 = &local_8;
    }
    else {
      puVar4 = &param_3;
    }
    puVar2 = extraout_A0;
    puVar3 = param_2;
    for (uVar1 = *puVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
  }
  return;
}



// Function: FUN_00000b82 at 00000b82
// Size: 8 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_00000b82(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00000bea at 00000bea
// Size: 42 bytes

void FUN_00000bea(ushort *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = (ushort)(1 << (param_2 & 0x3f));
  if (param_3._0_1_ == '\0') {
    *param_1 = ~uVar1 & *param_1;
  }
  else {
    *param_1 = uVar1 | *param_1;
  }
  return;
}



// Function: FUN_00000c14 at 00000c14
// Size: 34 bytes

void FUN_00000c14(void)

{
  return;
}



// Function: FUN_00000c36 at 00000c36
// Size: 108 bytes

void FUN_00000c36(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0000009c(param_1,param_2,param_3);
  *param_1 = 0x13ea4;
  *(undefined4 *)((int)param_1 + 0x32) = 0x13f18;
  func_0x000076a0((int)param_1 + 0x36,0x2030,0x60010);
  *(undefined2 *)((int)param_1 + 0x96) = param_4._0_2_;
  *(undefined2 *)(param_1 + 0xc) = 0;
  while (*(int *)(*(int *)((int)param_1 + 0x32) + *(short *)(param_1 + 0xc) * 4) != 0) {
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  }
  return;
}



// Function: FUN_00000ca2 at 00000ca2
// Size: 104 bytes

void FUN_00000ca2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0000009c(param_1,param_3,param_4);
  *param_1 = 0x13ea4;
  *(undefined4 *)((int)param_1 + 0x32) = param_2;
  func_0x000076a0((int)param_1 + 0x36,0x2030,0x60010);
  *(undefined2 *)((int)param_1 + 0x96) = param_5._0_2_;
  *(undefined2 *)(param_1 + 0xc) = 0;
  while (*(int *)(*(int *)((int)param_1 + 0x32) + *(short *)(param_1 + 0xc) * 4) != 0) {
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  }
  return;
}



// Function: FUN_00000d0a at 00000d0a
// Size: 18 bytes

void FUN_00000d0a(undefined4 param_1)

{
  FUN_00000126(param_1);
  return;
}



// Function: FUN_00000d1c at 00000d1c
// Size: 82 bytes

undefined4 FUN_00000d1c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x13ea4;
    func_0x000076a0((int)param_1 + 0x36,0x2038,0x60010);
    uVar1 = FUN_000000e2((short)param_1);
    if (0 < param_2._0_2_) {
      uVar1 = FUN_00000ace(param_1);
    }
  }
  return uVar1;
}



// Function: FUN_00000d6e at 00000d6e
// Size: 106 bytes

void FUN_00000d6e(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (*(uint *)(*(int *)(param_1 + 0x32) + (*(short *)(param_1 + 0x30) + -1) * 4) < param_2 + 2U) {
    FUN_000001c8(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_00001122(param_1,param_2);
    *param_3 = *(int *)(*(int *)(param_1 + 0x32) + iVar1 * 4) + -2;
    FUN_00000ee0(param_1,iVar1);
  }
  return;
}



// Function: FUN_00000dd8 at 00000dd8
// Size: 32 bytes

int FUN_00000dd8(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)(*(ushort *)(param_2 + -2) & 0xf0) >> 4 == 1) {
    iVar1 = FUN_000002ea(param_1,param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x32) +
                    ((int)(*(ushort *)(param_2 + -2) & 0xf000) >> 0xc) * 4) + -2;
  }
  return iVar1;
}



// Function: FUN_00000df8 at 00000df8
// Size: 24 bytes

int FUN_00000df8(void)

{
  short in_D0w;
  int iVar1;
  ushort *unaff_A2;
  int unaff_A4;
  
  if (in_D0w == 1) {
    iVar1 = FUN_000002ea();
  }
  else {
    iVar1 = *(int *)(*(int *)(unaff_A4 + 0x32) + ((int)(*unaff_A2 & 0xf000) >> 0xc) * 4) + -2;
  }
  return iVar1;
}



// Function: FUN_00000e10 at 00000e10
// Size: 34 bytes

int FUN_00000e10(void)

{
  uint in_D0;
  int unaff_A4;
  
  return *(int *)(*(int *)(unaff_A4 + 0x32) + ((int)(in_D0 & 0xf000) >> 0xc) * 4) + -2;
}



// Function: FUN_00000e32 at 00000e32
// Size: 74 bytes

void FUN_00000e32(undefined4 param_1,int param_2)

{
  if ((int)(*(ushort *)(param_2 + -2) & 0xf0) >> 4 == 1) {
    FUN_0000030a(param_1,param_2);
  }
  else {
    FUN_0000101e(param_1,(ushort *)(param_2 + -2));
  }
  return;
}



// Function: FUN_00000e7c at 00000e7c
// Size: 100 bytes

void FUN_00000e7c(int param_1)

{
  int iVar1;
  undefined1 auStack_a [6];
  
  FUN_0000117a(auStack_a);
  for (iVar1 = 0; iVar1 < *(short *)(param_1 + 0x30); iVar1 = iVar1 + 1) {
    FUN_0000119a((short)iVar1 * 6 + (short)param_1 + 0x36,auStack_a);
  }
  FUN_0000039a(param_1);
  FUN_00001248((short)auStack_a);
  return;
}



// Function: FUN_00000ee0 at 00000ee0
// Size: 128 bytes

int FUN_00000ee0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int extraout_A0;
  int extraout_A0_00;
  
  cVar1 = (char)param_2;
  FUN_00001238(cVar1 * '\x06' + (char)param_1 + '6');
  if (extraout_A0 == 0) {
    FUN_00000f60((short)param_1,cVar1);
  }
  FUN_000011b4(cVar1 * '\x06' + (char)param_1 + '6');
  if (extraout_A0_00 == 0) {
    iVar2 = 0;
  }
  else {
    func_0x000072e0((short)extraout_A0_00,
                    (short)*(undefined4 *)(*(int *)(param_1 + 0x32) + param_2 * 4));
    iVar2 = extraout_A0_00 + 2;
  }
  return iVar2;
}



// Function: FUN_00000f60 at 00000f60
// Size: 190 bytes

void FUN_00000f60(int param_1,int param_2)

{
  uint uVar1;
  int extraout_A0;
  int extraout_A0_00;
  int iVar2;
  undefined4 extraout_A0_01;
  undefined2 uVar3;
  undefined1 auStack_8 [4];
  
  FUN_000001c8((short)param_1,
               *(int *)(*(int *)(param_1 + 0x32) + param_2 * 4) * (int)*(short *)(param_1 + 0x96) +
               2,auStack_8);
  if (extraout_A0 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_00000b90((short)extraout_A0);
    iVar2 = extraout_A0_00;
  }
  if (iVar2 != 0) {
    for (uVar1 = 0; uVar1 < (uint)(int)*(short *)(param_1 + 0x96); uVar1 = uVar1 + 1) {
      uVar3 = (undefined2)((uint)iVar2 >> 0x10);
      FUN_00000c14((short)iVar2,uVar1,*(undefined4 *)(*(int *)(param_1 + 0x32) + param_2 * 4));
      func_0x000072e0(extraout_A0_01,(short)*(undefined4 *)(*(int *)(param_1 + 0x32) + param_2 * 4),
                      uVar3);
      FUN_000011d0(param_2 * 6 + param_1 + 0x36,extraout_A0_01);
    }
  }
  return;
}



// Function: FUN_0000101e at 0000101e
// Size: 260 bytes

void FUN_0000101e(int param_1,ushort *param_2)

{
  short *extraout_A0;
  undefined2 uVar1;
  
  uVar1 = SUB42(param_2,0);
  func_0x000072e0(uVar1,(short)*(undefined4 *)
                                (*(int *)(param_1 + 0x32) + ((int)(*param_2 & 0xf000) >> 0xc) * 4));
  FUN_000011d0((short)(((int)(*param_2 & 0xf000) >> 0xc) * 6 + param_1 + 0x36),uVar1);
  func_0x000072d8(uVar1,(short)*(undefined4 *)
                                (*(int *)(param_1 + 0x32) + ((int)(*param_2 & 0xf000) >> 0xc) * 4));
  if (*extraout_A0 == 0) {
    FUN_000011f0((short)(((int)((ushort)extraout_A0[1] & 0xf000) >> 0xc) * 6 + param_1 + 0x36),
                 (short)extraout_A0,
                 (char)*(undefined4 *)
                        (*(int *)(param_1 + 0x32) +
                        ((int)((ushort)extraout_A0[1] & 0xf000) >> 0xc) * 4) *
                 (char)*(undefined2 *)(param_1 + 0x96) + (char)extraout_A0 + '\x02');
    FUN_0000030a((short)param_1,(short)extraout_A0);
  }
  return;
}



// Function: FUN_00001122 at 00001122
// Size: 88 bytes

uint FUN_00001122(int param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_A0;
  undefined1 auStack_104 [256];
  
  uVar1 = 0;
  while( true ) {
    if ((uint)(int)*(short *)(param_1 + 0x30) <= uVar1) {
      func_0x00007320(auStack_104,0x13ef0);
      FUN_00001c18(extraout_A0);
      return 0xffffffff;
    }
    if (param_2 + 2U <= *(uint *)(*(int *)(param_1 + 0x32) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



// Function: FUN_0000117a at 0000117a
// Size: 32 bytes

void FUN_0000117a(int param_1)

{
  func_0x000072c8(param_1);
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// Function: FUN_0000119a at 0000119a
// Size: 26 bytes

void FUN_0000119a(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return;
}



// Function: FUN_000011b4 at 000011b4
// Size: 28 bytes

void FUN_000011b4(int param_1)

{
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*(int *)(param_1 + 2) + 2);
  return;
}



// Function: FUN_000011d0 at 000011d0
// Size: 32 bytes

void FUN_000011d0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(int *)(param_1 + 2) = param_2;
  return;
}



// Function: FUN_000011f0 at 000011f0
// Size: 72 bytes

void FUN_000011f0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 2);
  while (uVar2 = uVar1, uVar2 != 0) {
    if ((uVar2 < param_2) || (param_3 < uVar2)) {
      uVar1 = *(uint *)(uVar2 + 2);
      param_1 = uVar2;
    }
    else {
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(uVar2 + 2);
      uVar1 = *(uint *)(uVar2 + 2);
    }
  }
  return;
}



// Function: FUN_00001238 at 00001238
// Size: 16 bytes

void FUN_00001238(void)

{
  return;
}



// Function: FUN_00001248 at 00001248
// Size: 38 bytes

int FUN_00001248(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (0 < param_2._0_2_)) {
    param_1 = func_0x000073c8(param_1);
  }
  return param_1;
}



// Function: FUN_0000126e at 0000126e
// Size: 72 bytes

void FUN_0000126e(undefined4 *param_1)

{
  func_0x00006fe8(param_1);
  *param_1 = 0xc6fe;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 6;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  return;
}



// Function: FUN_000012b6 at 000012b6
// Size: 182 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012b6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00000dd8(param_1);
  param_1[2] = 0;
  *(short *)(param_1 + 3) = param_3._0_2_;
  param_1[5] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  while (0 < param_3._0_2_ + -1 >> ((int)*(short *)((int)param_1 + 0xe) & 0x3fU)) {
    *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + 1;
  }
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x5c))(param_1,param_2);
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_0000136c at 0000136c
// Size: 166 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000136c(int param_1)

{
  int iVar1;
  int *extraout_A0;
  undefined4 local_52;
  int *local_4e;
  undefined1 auStack_4a [52];
  undefined2 local_16;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_000018f0(param_1);
  extraout_A0[1] = 0;
  *(undefined4 *)((int)extraout_A0 + 0x1a) = 0;
  local_16 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = _DAT_00025f52;
  _DAT_00025f52 = auStack_4a;
  local_4e = extraout_A0;
  iVar1 = func_0x000076a8(auStack_4a);
  if (iVar1 == 0) {
    local_52 = *(undefined4 *)(param_1 + 0x1a);
    FUN_00001eb0(&local_52);
    *(undefined4 *)((int)local_4e + 0x1a) = local_52;
    _DAT_00025f52 = local_10;
  }
  else {
    (**(code **)(*local_4e + 0x4c))();
    FUN_00001c10();
  }
  return;
}



// Function: FUN_00001412 at 00001412
// Size: 174 bytes

void FUN_00001412(int *param_1,int param_2,int param_3)

{
  undefined4 extraout_A0;
  uint extraout_A0_00;
  uint extraout_A0_01;
  
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  (**(code **)(*param_1 + 0x74))(param_1,param_3 + param_2);
  (**(code **)(*param_1 + 0x74))(param_1,param_1[2] + 1);
  if (extraout_A0_00 < extraout_A0_01) {
    func_0x000076f8(extraout_A0,extraout_A0_00,extraout_A0_01 - extraout_A0_00);
  }
  (**(code **)(*param_1 + 0x5c))(param_1,param_1[2] - param_3);
  param_1[2] = param_1[2] - param_3;
  if (param_1[1] != 0) {
    FUN_000025c0(param_1[1],param_2,param_3);
  }
  return;
}



// Function: FUN_000014c0 at 000014c0
// Size: 46 bytes

void FUN_000014c0(int *param_1)

{
  if (0 < param_1[2]) {
    (**(code **)(*param_1 + 0x68))(param_1,1,param_1[2]);
  }
  return;
}



// Function: FUN_000014ee at 000014ee
// Size: 88 bytes

void FUN_000014ee(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *extraout_A0;
  
  if (0 < param_4) {
    sVar1 = *(short *)((int)param_1 + 0xe);
    sVar2 = *(short *)(param_1 + 3);
    (**(code **)(*param_1 + 0x74))(param_1,param_2);
    puVar4 = extraout_A0;
    for (iVar3 = (param_4 + -1 << ((int)sVar1 & 0x3fU)) + (int)sVar2; iVar3 != 0; iVar3 = iVar3 + -1
        ) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
  }
  return;
}



// Function: FUN_00001546 at 00001546
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00001546(int param_1,int param_2)

{
  return _DAT_00025b42 &
         (param_2 + -1 << ((int)*(short *)(param_1 + 0xe) & 0x3fU)) + **(int **)(param_1 + 0x1a);
}



// Function: FUN_00001576 at 00001576
// Size: 56 bytes

/* WARNING: Control flow encountered bad instruction data */

char FUN_00001576(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = func_0x00001d70(*(undefined4 *)(param_1 + 0x1a));
  if (cVar1 == param_2._0_1_) {
    return cVar1;
  }
  if (param_2._0_1_ != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000015b4 at 000015b4
// Size: 48 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000015b4(int *param_1)

{
  if (param_1[1] != 0) {
    *(undefined1 *)(param_1 + 6) = 1;
    (**(code **)(*param_1 + 0x6c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000015f0 at 000015f0
// Size: 16 bytes

undefined4 FUN_000015f0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Function: FUN_00001600 at 00001600
// Size: 238 bytes

undefined4 * FUN_00001600(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *extraout_A0;
  undefined4 extraout_A0_00;
  int extraout_A0_01;
  
  if (param_1[5] < param_4 + param_1[2]) {
    (**(code **)(*param_1 + 0x5c))(param_1,param_4 + param_1[2]);
  }
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  (**(code **)(*param_1 + 0x74))(param_1,param_4 + param_2);
  (**(code **)(*param_1 + 0x74))(param_1,param_1[2] + 1);
  iVar3 = param_4 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU);
  if (param_2 <= param_1[2]) {
    func_0x000076f8(extraout_A0_00,extraout_A0,extraout_A0_01 - (int)extraout_A0);
  }
  puVar1 = extraout_A0;
  if (((iVar3 == 4) && (puVar2 = (undefined4 *)0x1, ((uint)param_3 & 1) == 0)) &&
     (((uint)extraout_A0 & 1) == 0)) {
    *extraout_A0 = *param_3;
  }
  else {
    for (; puVar2 = extraout_A0, iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_3;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
  }
  param_1[2] = param_4 + param_1[2];
  if (param_1[1] != 0) {
    puVar2 = (undefined4 *)FUN_000025c8(param_1[1],param_2,param_4);
  }
  return puVar2;
}



// Function: FUN_000016ee at 000016ee
// Size: 22 bytes

bool FUN_000016ee(int param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



// Function: FUN_00001704 at 00001704
// Size: 130 bytes

void FUN_00001704(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_A0;
  
  iVar1 = (**(code **)(*param_2 + 0x58))();
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x58))();
    (**(code **)(*param_1 + 0x5c))(param_1,iVar1 + iVar2);
    (**(code **)(*param_2 + 0x74))(param_2,1,iVar1);
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,extraout_A0);
    (**(code **)(*param_1 + 0x60))(param_1,iVar1 + 1);
  }
  return;
}



// Function: FUN_00001786 at 00001786
// Size: 72 bytes

undefined1 * FUN_00001786(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *extraout_A0;
  
  param_4 = param_4 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU);
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  puVar1 = extraout_A0;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
    param_3 = param_3 + 1;
  }
  return extraout_A0;
}



// Function: FUN_000017ce at 000017ce
// Size: 144 bytes

/* WARNING: Control flow encountered bad instruction data */

void FUN_000017ce(int param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1a) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(int *)(param_1 + 0x14) < param_2) ||
     (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14) - param_2)) {
    if (*(int *)(param_1 + 0x10) != 0) {
      param_2 = (*(int *)(param_1 + 0x10) + param_2) -
                (*(int *)(param_1 + 0x10) + param_2) % *(int *)(param_1 + 0x10);
    }
    if (param_2 != *(int *)(param_1 + 0x14)) {
      cVar1 = FUN_00000df8();
      if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_00001ec0(*(undefined4 *)(param_1 + 0x1a),
                   param_2 << ((int)*(short *)(param_1 + 0xe) & 0x3fU));
    }
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



// Function: FUN_0000186c at 0000186c
// Size: 60 bytes

void FUN_0000186c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 extraout_A0;
  
  (**(code **)(*(int *)param_2[1] + 0x74))((int *)param_2[1],param_1);
  (**(code **)(*(int *)param_2[1] + 0x84))((int *)param_2[1],*(undefined4 *)*param_2,extraout_A0);
  return;
}



// Function: FUN_000018a8 at 000018a8
// Size: 26 bytes

void FUN_000018a8(undefined4 param_1,undefined4 param_2)

{
  FUN_000012b6(param_1,param_2);
  return;
}



// Function: FUN_000018c2 at 000018c2
// Size: 10 bytes

undefined4 FUN_000018c2(void)

{
  return 0;
}



// Function: FUN_000018cc at 000018cc
// Size: 36 bytes

undefined1 FUN_000018cc(int param_1,code *param_2,undefined1 param_3,int *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [4];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    *param_4 = 1;
  }
  else {
    FUN_000025a0((short)auStack_68,(short)param_1);
    do {
      iStack_64 = iStack_5c + iStack_60 >> 1;
      uVar1 = (*param_2)((short)iStack_64,param_3);
      if (uVar1 < 0x8000) {
        iStack_60 = iStack_64 + 1;
      }
      else {
        iStack_5c = iStack_64 + -1;
      }
    } while ((uVar1 != 0) && (iStack_60 <= iStack_5c));
    if (uVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if (0 < (short)uVar1) {
        iStack_64 = iStack_64 + 1;
      }
    }
    if ((iStack_64 < 1) || (*(int *)(param_1 + 8) + 1 < iStack_64)) {
      *param_4 = 0;
    }
    else {
      *param_4 = iStack_64;
    }
    func_0x000025a8((short)auStack_68);
  }
  return uVar2;
}



// Function: FUN_000018f0 at 000018f0
// Size: 162 bytes

undefined1 FUN_000018f0(void)

{
  ushort uVar1;
  undefined1 unaff_D4b;
  undefined4 *unaff_A2;
  int unaff_A3;
  int unaff_A6;
  
  FUN_000025a0((short)unaff_A6 + -100);
  do {
    *(int *)(unaff_A6 + -0x60) = *(int *)(unaff_A6 + -0x58) + *(int *)(unaff_A6 + -0x5c) >> 1;
    uVar1 = (**(code **)(unaff_A6 + 0xc))((short)*(undefined4 *)(unaff_A6 + -0x60));
    if (uVar1 < 0x8000) {
      *(int *)(unaff_A6 + -0x5c) = *(int *)(unaff_A6 + -0x60) + 1;
    }
    else {
      *(int *)(unaff_A6 + -0x58) = *(int *)(unaff_A6 + -0x60) + -1;
    }
  } while ((uVar1 != 0) && (*(int *)(unaff_A6 + -0x5c) <= *(int *)(unaff_A6 + -0x58)));
  if (uVar1 == 0) {
    unaff_D4b = 1;
  }
  else if (0 < (short)uVar1) {
    *(int *)(unaff_A6 + -0x60) = *(int *)(unaff_A6 + -0x60) + 1;
  }
  if ((*(int *)(unaff_A6 + -0x60) < 1) || (*(int *)(unaff_A3 + 8) + 1 < *(int *)(unaff_A6 + -0x60)))
  {
    *unaff_A2 = 0;
  }
  else {
    *unaff_A2 = *(undefined4 *)(unaff_A6 + -0x60);
  }
  func_0x000025a8((short)unaff_A6 + -100);
  return unaff_D4b;
}



// Function: FUN_00001992 at 00001992
// Size: 82 bytes

void FUN_00001992(int *param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_c = &param_2;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x8c))(param_1,0x20b8,&local_c,&local_10);
  (**(code **)(*param_1 + 0x60))(param_1,local_10,param_2,1);
  return;
}



// Function: FUN_000019e4 at 000019e4
// Size: 62 bytes

void FUN_000019e4(void)

{
  int extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar1;
  
  func_0x000073b0(0x22);
  uVar1 = 0;
  if (extraout_A0 != 0) {
    func_0x00006fb8(extraout_A0);
    uVar1 = extraout_A0_00;
  }
  FUN_00002104(uVar1);
  return;
}



// Function: FUN_00001a22 at 00001a22
// Size: 32 bytes

void FUN_00001a22(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}



// Function: FUN_00001a42 at 00001a42
// Size: 68 bytes

int FUN_00001a42(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = func_0x000076e0(param_2 - param_1);
    iVar2 = func_0x000076e8();
    param_1 = iVar2 % iVar1 + param_1;
  }
  return param_1;
}



// Function: FUN_00001a86 at 00001a86
// Size: 62 bytes

void FUN_00001a86(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *extraout_A0;
  
  (**(code **)(*(int *)param_2[3] + 0x74))((int *)param_2[3],param_1);
  *(undefined4 *)param_2[2] = *extraout_A0;
  (**(code **)*param_2)(*(undefined4 *)param_2[2],*(undefined4 *)param_2[1]);
  return;
}



// Function: FUN_00001ac4 at 00001ac4
// Size: 42 bytes

void FUN_00001ac4(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)param_2[1] + 0xb0))((int *)param_2[1],*(undefined4 *)*param_2,param_1);
  return;
}



// Function: FUN_00001aee at 00001aee
// Size: 30 bytes

void FUN_00001aee(undefined4 param_1,undefined4 param_2,int *param_3)

{
  (**(code **)(*param_3 + 0xb0))(param_3,param_1,param_2);
  return;
}



// Function: FUN_00001b0c at 00001b0c
// Size: 40 bytes

void FUN_00001b0c(undefined4 *param_1)

{
  func_0x00006f88(param_1);
  *param_1 = 0xa2a0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  return;
}



// Function: FUN_00001b34 at 00001b34
// Size: 34 bytes

undefined4 FUN_00001b34(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < param_2) {
    uVar1 = 1;
  }
  else if (param_2 < param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00001b56 at 00001b56
// Size: 34 bytes

void FUN_00001b56(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  (**(code **)(*param_1 + 0xb0))(param_1,*param_2,*param_3);
  return;
}



// Function: FUN_00001b78 at 00001b78
// Size: 24 bytes

void FUN_00001b78(undefined4 param_1)

{
  FUN_000018a8(param_1,0);
  return;
}



// Function: FUN_00001b90 at 00001b90
// Size: 82 bytes

void FUN_00001b90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_14 = (undefined1 *)&param_2;
  local_10 = (undefined1 *)&param_3;
  local_c = local_18;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x8c))(param_1,0x20f0,&local_14,param_4);
  return;
}



// Function: FUN_00001be2 at 00001be2
// Size: 46 bytes

undefined4 FUN_00001be2(int *param_1,int param_2)

{
  int extraout_A0;
  undefined4 uStack_10;
  undefined4 *local_c;
  int *local_8;
  
  local_c = &param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    uStack_10 = 0;
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,0x20f8,&local_c,&uStack_10);
    if (extraout_A0 == 0) {
      uStack_10 = 0;
    }
  }
  return uStack_10;
}



// Function: FUN_00001c10 at 00001c10
// Size: 8 bytes

undefined4 FUN_00001c10(void)

{
  undefined4 uVar1;
  int extraout_A0;
  int unaff_A6;
  int *in_stack_00000000;
  
  (**(code **)(*in_stack_00000000 + 0xa0))();
  if (extraout_A0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_A6 + -0xc);
  }
  return uVar1;
}



// Function: FUN_00001c18 at 00001c18
// Size: 22 bytes

undefined4 FUN_00001c18(void)

{
  undefined4 uVar1;
  int extraout_A0;
  code *in_A1;
  int unaff_A6;
  
  (*in_A1)();
  if (extraout_A0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_A6 + -0xc);
  }
  return uVar1;
}



// Function: FUN_00001c2e at 00001c2e
// Size: 26 bytes

void FUN_00001c2e(int *param_1)

{
  (**(code **)(*param_1 + 0x88))(param_1,&stack0x00000008);
  return;
}



// Function: FUN_00001c48 at 00001c48
// Size: 110 bytes

void FUN_00001c48(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0xdc))(param_1,param_2,param_3,param_4,param_5);
    (**(code **)(*param_1 + 0xd4))(param_1,param_2,iVar1,param_4,param_5);
    (**(code **)(*param_1 + 0xd4))(param_1,iVar1 + 1,param_3,param_4,param_5);
  }
  return;
}



// Function: FUN_00001cb6 at 00001cb6
// Size: 82 bytes

int FUN_00001cb6(int *param_1,int param_2,int param_3,code *param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  if (param_2 < param_3) {
    (**(code **)(*param_1 + 0x94))(param_1,param_2);
    param_2 = param_2 + -1;
    param_3 = param_3 + 1;
    while( true ) {
      do {
        param_3 = param_3 + -1;
        (**(code **)(*param_1 + 0x94))(param_1,param_3);
        sVar1 = (*param_4)(extraout_A0,extraout_A0_00,param_5);
      } while (sVar1 < 0);
      do {
        param_2 = param_2 + 1;
        (**(code **)(*param_1 + 0x94))(param_1,param_2);
        sVar1 = (*param_4)(extraout_A0,extraout_A0_01,param_5);
      } while (0 < sVar1);
      if (param_3 <= param_2) break;
      (**(code **)(*param_1 + 0x94))(param_1,param_2);
      (**(code **)(*param_1 + 0x94))(param_1,param_3);
      (**(code **)(*param_1 + 100))(param_1,param_2,auStack_c,1);
      (**(code **)(*param_1 + 100))(param_1,param_3,auStack_8,1);
    }
  }
  return param_3;
}



// Function: FUN_00001d08 at 00001d08
// Size: 159 bytes

int FUN_00001d08(void)

{
  short sVar1;
  int unaff_D3;
  int unaff_D4;
  code *unaff_D7;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  int *unaff_A2;
  int unaff_A6;
  
  do {
    sVar1 = (*unaff_D7)();
    if (-1 < sVar1) {
      do {
        unaff_D4 = unaff_D4 + 1;
        (**(code **)(*unaff_A2 + 0x94))();
        sVar1 = (*unaff_D7)();
      } while (0 < sVar1);
      if (unaff_D3 <= unaff_D4) {
        return unaff_D3;
      }
      (**(code **)(*unaff_A2 + 0x94))();
      *(undefined4 *)(unaff_A6 + -4) = extraout_A0;
      (**(code **)(*unaff_A2 + 0x94))();
      *(undefined4 *)(unaff_A6 + -8) = extraout_A0_00;
      (**(code **)(*unaff_A2 + 100))();
      (**(code **)(*unaff_A2 + 100))();
    }
    unaff_D3 = unaff_D3 + -1;
    (**(code **)(*unaff_A2 + 0x94))();
  } while( true );
}



// Function: FUN_00001da8 at 00001da8
// Size: 148 bytes

void FUN_00001da8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  uVar1 = FUN_00001a42(param_2,param_3);
  (**(code **)(*param_1 + 0x94))(param_1,param_2);
  (**(code **)(*param_1 + 0x94))(param_1,uVar1);
  (**(code **)(*param_1 + 100))(param_1,param_2,local_c,1);
  (**(code **)(*param_1 + 100))(param_1,uVar1,local_8,1);
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_00001e3c at 00001e3c
// Size: 66 bytes

void FUN_00001e3c(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0xd4))(param_1,1,param_1[2],0x2100,param_1);
  }
  return;
}



// Function: FUN_00001e7e at 00001e7e
// Size: 50 bytes

void FUN_00001e7e(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0xd4))(param_1,1,param_1[2],param_2,param_3);
  }
  return;
}



// Function: FUN_00001eb0 at 00001eb0
// Size: 16 bytes

void FUN_00001eb0(void)

{
  int in_A1;
  
  (**(code **)(in_A1 + 0xd4))();
  return;
}



// Function: FUN_00001ec0 at 00001ec0
// Size: 34 bytes

void FUN_00001ec0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_8 [4];
  
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3,auStack_8);
  return;
}



// Function: FUN_00001ee2 at 00001ee2
// Size: 28 bytes

void FUN_00001ee2(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return;
}



// Function: FUN_00001efe at 00001efe
// Size: 30 bytes

void FUN_00001efe(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x68))(param_1,param_2,1);
  return;
}



// Function: FUN_00001f1c at 00001f1c
// Size: 68 bytes

void FUN_00001f1c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xa4))(param_1,param_2);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0xc0))(param_1,iVar1);
    }
  }
  return;
}



// Function: FUN_00001f60 at 00001f60
// Size: 40 bytes

void FUN_00001f60(int *param_1)

{
  if (0 < param_1[2]) {
    (**(code **)(*param_1 + 0x94))(param_1,1);
  }
  return;
}



// Function: FUN_00001f88 at 00001f88
// Size: 122 bytes

void FUN_00001f88(int *param_1)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int local_68 [25];
  
  FUN_000025e0((short)local_68,(short)param_1);
  FUN_000025f0((short)local_68);
  uVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    FUN_00000e10((char)uVar2);
    FUN_000025f8((short)local_68);
    uVar2 = extraout_A0_00;
  }
  (**(code **)(*param_1 + 0x6c))();
  func_0x000025e8((short)local_68);
  return;
}



// Function: FUN_00002002 at 00002002
// Size: 36 bytes

void FUN_00002002(int *param_1)

{
  (**(code **)(*param_1 + 200))();
  (**(code **)(*param_1 + 0x4c))();
  return;
}



// Function: FUN_00002026 at 00002026
// Size: 178 bytes

undefined4 FUN_00002026(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int extraout_A0;
  int local_68;
  undefined4 local_64;
  
  if (param_2 != 0) {
    FUN_000025a0((short)&local_68,(short)param_1);
    (**(code **)(local_68 + 0xc))();
    while (uVar1 = local_64, cVar2 = FUN_000025d0((char)&local_68), cVar2 != '\0') {
      (**(code **)(*param_1 + 0x94))((short)param_1,(char)uVar1);
      if (extraout_A0 == param_2) {
        func_0x000025a8((short)&local_68);
        return uVar1;
      }
      (**(code **)(local_68 + 0x10))();
    }
    func_0x000025a8((short)&local_68);
  }
  return 0;
}



// Function: FUN_000020d8 at 000020d8
// Size: 44 bytes

void FUN_000020d8(int *param_1)

{
  if (0 < param_1[2]) {
    (**(code **)(*param_1 + 0x94))(param_1,param_1[2]);
  }
  return;
}



// Function: FUN_00002104 at 00002104
// Size: 18 bytes

void FUN_00002104(undefined4 param_1)

{
  FUN_00001b78(param_1);
  return;
}



// Function: FUN_00002116 at 00002116
// Size: 30 bytes

void FUN_00002116(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  *extraout_A0 = param_3;
  return;
}



// Function: FUN_00002134 at 00002134
// Size: 172 bytes

undefined4 FUN_00002134(int param_1,code *param_2,undefined1 param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  int local_68;
  int local_64;
  
  FUN_000025a0((short)&local_68,(short)param_1);
  (**(code **)(local_68 + 0xc))();
  *param_4 = local_64;
  while( true ) {
    cVar2 = FUN_000025d0((char)&local_68);
    if (cVar2 == '\0') {
      *param_4 = *(int *)(param_1 + 8) + 1;
      func_0x000025a8((short)&local_68);
      return 0;
    }
    sVar1 = (*param_2)((short)*param_4,param_3);
    if (sVar1 == 0) break;
    (**(code **)(local_68 + 0x10))();
    *param_4 = local_64;
  }
  func_0x000025a8((short)&local_68);
  return 1;
}



// Function: FUN_000021e0 at 000021e0
// Size: 42 bytes

void FUN_000021e0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_1[2] + 1,param_2,1);
  return;
}



// Function: FUN_0000220a at 0000220a
// Size: 34 bytes

void FUN_0000220a(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_2,&stack0x0000000c,1);
  return;
}



// Function: FUN_0000222c at 0000222c
// Size: 30 bytes

void FUN_0000222c(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xe4))(param_1,1,param_2);
  return;
}



// Function: FUN_0000224a at 0000224a
// Size: 38 bytes

void FUN_0000224a(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xe4))(param_1,param_1[2] + 1,param_2);
  return;
}



// Function: FUN_00002270 at 00002270
// Size: 26 bytes

void FUN_00002270(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xec))(param_1,param_2);
  return;
}



// Function: FUN_0000228a at 0000228a
// Size: 70 bytes

void FUN_0000228a(int *param_1)

{
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x94))(param_1,param_1[2]);
    (**(code **)(*param_1 + 0xc0))(param_1,param_1[2]);
  }
  return;
}



// Function: FUN_000022d0 at 000022d0
// Size: 26 bytes

void FUN_000022d0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xec))(param_1,param_2);
  return;
}



// Function: FUN_000022ea at 000022ea
// Size: 70 bytes

void FUN_000022ea(int *param_1)

{
  if (0 < param_1[2]) {
    (**(code **)(*param_1 + 0x94))(param_1,1);
    (**(code **)(*param_1 + 0xc0))(param_1,1);
  }
  return;
}



// Function: FUN_00002330 at 00002330
// Size: 62 bytes

void FUN_00002330(undefined4 param_1,undefined4 *param_2)

{
  undefined4 extraout_A0;
  
  (**(code **)(*(int *)param_2[3] + 0x98))((int *)param_2[3],param_1);
  *(undefined4 *)param_2[2] = extraout_A0;
  (**(code **)*param_2)(*(undefined4 *)param_2[2],*(undefined4 *)param_2[1]);
  return;
}



// Function: FUN_0000236e at 0000236e
// Size: 42 bytes

void FUN_0000236e(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)param_2[1] + 0xb8))((int *)param_2[1],*(undefined4 *)*param_2,param_1);
  return;
}



// Function: FUN_00002398 at 00002398
// Size: 24 bytes

void FUN_00002398(undefined4 param_1)

{
  FUN_000018a8(param_1,0);
  return;
}



// Function: FUN_000023b0 at 000023b0
// Size: 122 bytes

void FUN_000023b0(int *param_1)

{
  char cVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 uVar2;
  int local_68 [25];
  
  FUN_00002600((short)local_68,(short)param_1);
  func_0x00002610((short)local_68);
  uVar2 = extraout_A0;
  while( true ) {
    cVar1 = (**(code **)(local_68[0] + 8))();
    if (cVar1 == '\0') break;
    FUN_00001d08((char)uVar2);
    FUN_00002618((short)local_68);
    uVar2 = extraout_A0_00;
  }
  (**(code **)(*param_1 + 0x6c))();
  thunk_FUN_00002644((short)local_68);
  return;
}



// Function: FUN_0000242a at 0000242a
// Size: 36 bytes

void FUN_0000242a(int *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  (**(code **)(*param_1 + 0x4c))();
  return;
}



// Function: FUN_0000244e at 0000244e
// Size: 28 bytes

void FUN_0000244e(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return;
}



// Function: FUN_0000246a at 0000246a
// Size: 30 bytes

void FUN_0000246a(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x68))(param_1,param_2,1);
  return;
}



// Function: FUN_00002488 at 00002488
// Size: 68 bytes

void FUN_00002488(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x9c))(param_1,iVar1);
    }
  }
  return;
}



// Function: FUN_000024cc at 000024cc
// Size: 86 bytes

void FUN_000024cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_18 = 0;
  local_14 = (undefined1 *)&param_2;
  local_10 = (undefined1 *)&param_3;
  local_c = &local_18;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x8c))(param_1,0x2200,&local_14,param_4);
  return;
}



// Function: FUN_00002522 at 00002522
// Size: 40 bytes

void FUN_00002522(int *param_1)

{
  if (0 < param_1[2]) {
    (**(code **)(*param_1 + 0x98))(param_1,1);
  }
  return;
}



// Function: FUN_0000254a at 0000254a
// Size: 70 bytes

undefined4 FUN_0000254a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int local_68 [25];
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_000025a0(local_68,param_1);
  (**(code **)(local_68[0] + 0xc))();
  uVar1 = FUN_000025d0();
  return uVar1;
}



// Function: FUN_000025a0 at 000025a0
// Size: 47 bytes

undefined4 FUN_000025a0(void)

{
  char cVar1;
  undefined4 unaff_D3;
  int extraout_A0;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  undefined1 in_ZF;
  short sStack00000004;
  undefined2 uStack00000006;
  
  while( true ) {
    if ((bool)in_ZF) {
      uStack00000006 = 0xffff;
      sStack00000004 = (short)unaff_A6 + -100;
                    /* WARNING: Call to offcut address within same function */
      func_0x000025a8();
      return unaff_D3;
    }
    _sStack00000004 = (int *)(unaff_A6 + -100);
    (**(code **)(*_sStack00000004 + 0x10))();
    unaff_D3 = *(undefined4 *)(unaff_A6 + -0x60);
    _sStack00000004 = (int *)(unaff_A6 + -100);
    cVar1 = FUN_000025d0();
    if (cVar1 == '\0') break;
    sStack00000004 = (short)((uint)unaff_D3 >> 0x10);
    uStack00000006 = (undefined2)unaff_D3;
    (**(code **)(*unaff_A3 + 0x98))();
    in_ZF = extraout_A0 == unaff_A2;
  }
  uStack00000006 = 0xffff;
  sStack00000004 = (short)unaff_A6 + -100;
                    /* WARNING: Call to offcut address within same function */
  func_0x000025a8();
  return 0;
}



// Function: FUN_000025c0 at 000025c0
// Size: 8 bytes

undefined4 FUN_000025c0(void)

{
  undefined4 uVar1;
  char cVar2;
  int extraout_A0;
  int *in_A0;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  
  while( true ) {
    (**(code **)(*in_A0 + 0x10))();
    uVar1 = *(undefined4 *)(unaff_A6 + -0x60);
    cVar2 = FUN_000025d0();
    if (cVar2 == '\0') {
                    /* WARNING: Call to offcut address within same function */
      func_0x000025a8();
      return 0;
    }
    (**(code **)(*unaff_A3 + 0x98))();
    if (extraout_A0 == unaff_A2) break;
    in_A0 = (int *)(unaff_A6 + -100);
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x000025a8();
  return uVar1;
}



// Function: FUN_000025c8 at 000025c8
// Size: 8 bytes

undefined4 FUN_000025c8(void)

{
  undefined4 uVar1;
  char cVar2;
  int extraout_A0;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  
  while( true ) {
    uVar1 = *(undefined4 *)(unaff_A6 + -0x60);
    cVar2 = FUN_000025d0();
    if (cVar2 == '\0') {
                    /* WARNING: Call to offcut address within same function */
      func_0x000025a8();
      return 0;
    }
    (**(code **)(*unaff_A3 + 0x98))();
    if (extraout_A0 == unaff_A2) break;
    (**(code **)(*(int *)(unaff_A6 + -100) + 0x10))();
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x000025a8();
  return uVar1;
}



// Function: FUN_000025d0 at 000025d0
// Size: 16 bytes

undefined4 FUN_000025d0(void)

{
  short sVar1;
  char cVar2;
  undefined4 unaff_D3;
  int extraout_A0;
  int unaff_A2;
  int *unaff_A3;
  int unaff_A6;
  
  while( true ) {
    sVar1 = (short)unaff_A6;
    cVar2 = FUN_000025d0(sVar1 + -100);
    if (cVar2 == '\0') {
                    /* WARNING: Call to offcut address within same function */
      func_0x000025a8(sVar1 + -100);
      return 0;
    }
    (**(code **)(*unaff_A3 + 0x98))();
    if (extraout_A0 == unaff_A2) break;
    (**(code **)(*(int *)(unaff_A6 + -100) + 0x10))();
    unaff_D3 = *(undefined4 *)(unaff_A6 + -0x60);
  }
                    /* WARNING: Call to offcut address within same function */
  func_0x000025a8(sVar1 + -100);
  return unaff_D3;
}



// Function: FUN_000025e0 at 000025e0
// Size: 15 bytes

undefined4 FUN_000025e0(void)

{
  int unaff_A6;
  
  func_0x000025a8(unaff_A6 + -100);
  return 0;
}



// Function: FUN_000025f0 at 000025f0
// Size: 8 bytes

void FUN_000025f0(void)

{
  return;
}



// Function: FUN_000025f8 at 000025f8
// Size: 4 bytes

void FUN_000025f8(void)

{
  return;
}



// Function: FUN_000025fc at 000025fc
// Size: 4 bytes

undefined4 FUN_000025fc(int *param_1,int param_2)

{
  undefined4 uVar1;
  int extraout_A0;
  undefined1 auStack_10 [4];
  undefined4 *puStack_c;
  int *piStack_8;
  
  if (param_2 != 0) {
    puStack_c = &param_2;
    piStack_8 = param_1;
    (**(code **)(*param_1 + 0xb4))(param_1,0x2208,&puStack_c,auStack_10);
    if (extraout_A0 != 0) {
      uVar1 = FUN_00002644();
      return uVar1;
    }
  }
  return 0;
}



// Function: FUN_00002600 at 00002600
// Size: 21 bytes

undefined4 FUN_00002600(void)

{
  undefined4 uVar1;
  int extraout_A0;
  int unaff_A6;
  
  if (*(int *)(unaff_A6 + 0xc) != 0) {
    *(int *)(unaff_A6 + -8) = unaff_A6 + 0xc;
    *(undefined4 *)(unaff_A6 + -4) = *(undefined4 *)(unaff_A6 + 8);
    (**(code **)(**(int **)(unaff_A6 + 8) + 0xb4))
              (*(int **)(unaff_A6 + 8),0x2208,unaff_A6 + -8,unaff_A6 + -0xc);
    if (extraout_A0 != 0) {
      uVar1 = FUN_00002644();
      return uVar1;
    }
  }
  return 0;
}



// Function: thunk_FUN_00002644 at 00002608
// Size: 2 bytes

void thunk_FUN_00002644(void)

{
  return;
}



// Function: FUN_00002618 at 00002618
// Size: 44 bytes

undefined4 FUN_00002618(void)

{
  undefined4 uVar1;
  int extraout_A0;
  int unaff_A6;
  
  (**(code **)(**(int **)(unaff_A6 + 8) + 0xb4))
            (*(int **)(unaff_A6 + 8),0x2208,unaff_A6 + -8,unaff_A6 + -0xc);
  if (extraout_A0 != 0) {
    uVar1 = FUN_00002644();
    return uVar1;
  }
  return 0;
}



// Function: FUN_00002644 at 00002644
// Size: 4 bytes

void FUN_00002644(void)

{
  return;
}



// Function: FUN_00002648 at 00002648
// Size: 26 bytes

void FUN_00002648(int *param_1)

{
  (**(code **)(*param_1 + 0x88))(param_1,&stack0x00000008);
  return;
}



// Function: FUN_00002662 at 00002662
// Size: 34 bytes

undefined4 FUN_00002662(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < param_2) {
    uVar1 = 1;
  }
  else if (param_2 < param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00002684 at 00002684
// Size: 34 bytes

void FUN_00002684(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  (**(code **)(*param_1 + 0xb8))(param_1,*param_2,*param_3);
  return;
}



// Function: FUN_000026a6 at 000026a6
// Size: 44 bytes

void FUN_000026a6(int *param_1)

{
  if (0 < param_1[2]) {
    (**(code **)(*param_1 + 0x98))(param_1,param_1[2]);
  }
  return;
}



// Function: FUN_000026d2 at 000026d2
// Size: 18 bytes

void FUN_000026d2(undefined4 param_1)

{
  FUN_00002398(param_1);
  return;
}



// Function: FUN_000026e4 at 000026e4
// Size: 42 bytes

void FUN_000026e4(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_1[2] + 1,param_2,1);
  return;
}



// Function: FUN_0000270e at 0000270e
// Size: 62 bytes

void FUN_0000270e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)param_2[3] + 0x94))((int *)param_2[3],param_1);
  *(undefined4 *)param_2[2] = uVar1;
  (**(code **)*param_2)(*(undefined4 *)param_2[2],*(undefined4 *)param_2[1]);
  return;
}



// Function: FUN_0000274c at 0000274c
// Size: 42 bytes

void FUN_0000274c(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)param_2[1] + 0xb0))((int *)param_2[1],*(undefined4 *)*param_2,param_1);
  return;
}



// Function: FUN_00002776 at 00002776
// Size: 24 bytes

void FUN_00002776(undefined4 param_1)

{
  FUN_000018a8(param_1,0);
  return;
}



// Function: FUN_0000278e at 0000278e
// Size: 28 bytes

undefined4 FUN_0000278e(int *param_1,undefined4 param_2)

{
  undefined4 *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  return *extraout_A0;
}



// Function: FUN_000027aa at 000027aa
// Size: 30 bytes

void FUN_000027aa(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x68))(param_1,param_2,1);
  return;
}



// Function: FUN_000027c8 at 000027c8
// Size: 56 bytes

void FUN_000027c8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x98))(param_1,iVar1);
  }
  return;
}



// Function: FUN_00002800 at 00002800
// Size: 40 bytes

undefined4 FUN_00002800(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x94))(param_1,1);
  }
  return uVar1;
}



// Function: FUN_00002828 at 00002828
// Size: 166 bytes

undefined4 FUN_00002828(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int local_68;
  undefined4 local_64;
  
  FUN_000025a0((short)&local_68,(short)param_1);
  (**(code **)(local_68 + 0xc))();
  while( true ) {
    uVar1 = local_64;
    cVar3 = FUN_000025d0((char)&local_68);
    if (cVar3 == '\0') {
      func_0x000025a8((short)&local_68);
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x94))((short)param_1,(char)uVar1);
    if (iVar2 == param_2) break;
    (**(code **)(local_68 + 0x10))();
  }
  func_0x000025a8((short)&local_68);
  return uVar1;
}



// Function: FUN_000028ce at 000028ce
// Size: 44 bytes

undefined4 FUN_000028ce(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x94))(param_1,param_1[2]);
  }
  return uVar1;
}



// Function: FUN_000028fa at 000028fa
// Size: 38 bytes

undefined4 FUN_000028fa(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < param_2) {
    uVar1 = 1;
  }
  else if (param_2 < param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00002920 at 00002920
// Size: 34 bytes

void FUN_00002920(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  (**(code **)(*param_1 + 0xb0))(param_1,*param_2,*param_3);
  return;
}



// Function: FUN_00002942 at 00002942
// Size: 70 bytes

void FUN_00002942(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_18 = 0;
  local_14 = (undefined1 *)&param_2;
  local_10 = (undefined1 *)&param_3;
  local_c = &local_18;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x8c))(param_1,0x2290,&local_14,param_4);
  return;
}



// Function: FUN_00002988 at 00002988
// Size: 66 bytes

undefined4 FUN_00002988(int *param_1)

{
  char cVar1;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_c = &stack0x00000008;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xb4))(param_1,0x2298,&local_c,&local_10);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  return local_10;
}



// Function: FUN_000029ca at 000029ca
// Size: 26 bytes

void FUN_000029ca(int *param_1)

{
  (**(code **)(*param_1 + 0x88))(param_1,&stack0x00000008);
  return;
}



// Function: FUN_000029e4 at 000029e4
// Size: 50 bytes

undefined4 FUN_000029e4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_8;
  
  cVar1 = (**(code **)(*param_1 + 0xb4))(param_1,param_2,param_3,&local_8);
  if (cVar1 == '\0') {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_00002a16 at 00002a16
// Size: 172 bytes

undefined4 FUN_00002a16(int param_1,code *param_2,undefined1 param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  int local_68;
  int local_64;
  
  FUN_000025a0((short)&local_68,(short)param_1);
  (**(code **)(local_68 + 0xc))();
  *param_4 = local_64;
  while( true ) {
    cVar2 = FUN_000025d0((char)&local_68);
    if (cVar2 == '\0') {
      *param_4 = *(int *)(param_1 + 8) + 1;
      func_0x000025a8((short)&local_68);
      return 0;
    }
    sVar1 = (*param_2)((short)*param_4,param_3);
    if (sVar1 == 0) break;
    (**(code **)(local_68 + 0x10))();
    *param_4 = local_64;
  }
  func_0x000025a8((short)&local_68);
  return 1;
}



// Function: FUN_00002ac2 at 00002ac2
// Size: 42 bytes

void FUN_00002ac2(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_1[2] + 1,param_2,1);
  return;
}



// Function: FUN_00002aec at 00002aec
// Size: 30 bytes

void FUN_00002aec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *extraout_A0;
  
  (**(code **)(*param_1 + 0x74))(param_1,param_2);
  *extraout_A0 = param_3;
  return;
}



// Function: FUN_00002b0a at 00002b0a
// Size: 34 bytes

void FUN_00002b0a(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_1,param_2,&stack0x0000000c,1);
  return;
}



// Function: FUN_00002b2c at 00002b2c
// Size: 30 bytes

void FUN_00002b2c(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xc0))(param_1,1,param_2);
  return;
}



// Function: FUN_00002b4a at 00002b4a
// Size: 38 bytes

void FUN_00002b4a(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xc0))(param_1,param_1[2] + 1,param_2);
  return;
}



// Function: FUN_00002b70 at 00002b70
// Size: 26 bytes

void FUN_00002b70(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 200))(param_1,param_2);
  return;
}



// Function: FUN_00002b8a at 00002b8a
// Size: 70 bytes

undefined4 FUN_00002b8a(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x94))(param_1,param_1[2]);
    (**(code **)(*param_1 + 0x98))(param_1,param_1[2]);
  }
  return uVar1;
}



