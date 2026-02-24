// Warlords II - Decompiled PPC Code
// Chunk 6 (functions 3000-3499)
// Decompiled by Ghidra 12.0.3

// Function: FUN_100ca46c at 100ca46c
// Size: 36 bytes

void FUN_100ca46c(void)

{
  FUN_100c9be0();
  return;
}



// Function: FUN_100ca490 at 100ca490
// Size: 392 bytes

void FUN_100ca490(int *param_1,char param_2)

{
  int iVar1;
  int local_64;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_100c67b4(auStack_40,param_1,1);
  FUN_100c6824(auStack_40);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),param_2);
  }
  else if (param_2 == '\0') {
    FUN_100002b8(param_1[0x2a]);
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
    if (iVar1 != 0) {
      local_28 = *(undefined4 *)(*(int *)param_1[0x2a] + 8);
      uStack_24 = *(undefined4 *)(*(int *)param_1[0x2a] + 0xc);
      local_20 = local_28;
      local_1c = uStack_24;
      FUN_10117884((int)*(short *)(*param_1 + 0x278) + (int)param_1,&local_28,auStack_38);
      FUN_10117884((int)*(short *)(*param_1 + 0x478) + (int)param_1,auStack_38);
      FUN_10117884((int)*(short *)(*param_1 + 0x508) + (int)param_1,
                   *(undefined4 *)(*(int *)(*(int *)(local_64 + -0xb0) + 0xca) + 0x1c));
    }
  }
  else {
    FUN_10002388(param_1[0x2a]);
  }
  FUN_100c68f4(auStack_40);
  return;
}



// Function: FUN_100ca618 at 100ca618
// Size: 200 bytes

void FUN_100ca618(int param_1,int *param_2)

{
  undefined4 local_10;
  
  if (param_2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x18) == 0x20202020) {
      local_10._1_3_ = (undefined3)param_2[6];
      if (*(char *)(param_1 + 0xc0) == '\0') {
        local_10 = CONCAT13(0x76,local_10._1_3_);
      }
      else {
        local_10 = CONCAT13(0x68,local_10._1_3_);
      }
      *(undefined4 *)(param_1 + 0x18) = local_10;
    }
    FUN_10117884((int)*(int **)(param_1 + 0xc4) +
                 (int)*(short *)(**(int **)(param_1 + 0xc4) + 0x150),param_2);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x750),param_1,
                 *(undefined1 *)(param_1 + 0xc0));
  }
  return;
}



// Function: FUN_100ca6e0 at 100ca6e0
// Size: 116 bytes

void FUN_100ca6e0(int *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r4;
  int iVar2;
  
  FUN_100c80ec(param_1);
  iVar2 = *param_1;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x680),extraout_r4,iVar2,
                       *(undefined4 *)(iVar2 + 0x684));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x840),uVar1);
  return;
}



// Function: FUN_100ca754 at 100ca754
// Size: 536 bytes

void FUN_100ca754(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack00000024;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [312];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  uStack00000024 = param_4;
  FUN_10117884(auStack_168,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  puVar1 = (undefined4 *)FUN_100b0368(auStack_28,auStack_168);
  iVar2 = FUN_10001ff8(param_1[0x2a],*puVar1);
  if (iVar2 == 0x81) {
    puVar1 = (undefined4 *)FUN_100b0368(auStack_20,auStack_168);
    iVar2 = FUN_10002010(param_1[0x2a],*puVar1,0);
    if (iVar2 == 0x81) {
      iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7e0) + (int)param_1);
      iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x7f8) + (int)param_1);
      if (iVar3 == iVar2) {
        param_1[0x2c] = param_1[0x2e];
      }
      else {
        iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
        param_1[0x2c] = iVar2 << ((int)*(short *)(param_1 + 0x2b) & 0x3fU);
      }
      FUN_100ebf7c(auStack_160,param_1[0x31],1);
      piVar4 = (int *)FUN_100ec060(auStack_160);
      iVar3 = FUN_100ebf44(auStack_160);
      iVar2 = 0;
      while (iVar3 != 0) {
        iVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x770),
                             *(undefined1 *)(param_1 + 0x30),param_1[0x2c]);
        iVar2 = iVar2 + iVar3;
        piVar4 = (int *)FUN_100ec0e8(auStack_160);
        iVar3 = FUN_100ebf44(auStack_160);
      }
      iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
      if ((iVar3 != 0) && (iVar2 != 0)) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),iVar2 + param_1[0x2c],1);
      }
      FUN_100ebff4(auStack_160,2);
    }
  }
  else {
    FUN_100c9de8(param_1,param_2,param_3,uStack00000024);
  }
  return;
}



// Function: FUN_100ca96c at 100ca96c
// Size: 224 bytes

void FUN_100ca96c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_44;
  undefined1 auStack_20 [8];
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838));
  if (iVar1 == 0) {
    FUN_10000030();
    FUN_100ef824(auStack_20);
    FUN_100f03e8(*(undefined4 *)(local_44 + -0xc38));
    iVar1 = *(int *)param_1[0x2a];
    local_18 = *(undefined2 *)(iVar1 + 8);
    local_16 = *(undefined2 *)(iVar1 + 10);
    local_14 = *(undefined2 *)(iVar1 + 0xc);
    local_12 = *(undefined2 *)(iVar1 + 0xe);
    FUN_100b0578(&local_18);
    FUN_10002c58();
    FUN_100b0578(&local_18);
    FUN_100021d8();
    FUN_100f03e8(auStack_20);
  }
  FUN_100c87e0(param_1,param_2);
  return;
}



// Function: FUN_100caa4c at 100caa4c
// Size: 256 bytes

void FUN_100caa4c(int *param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_150 [316];
  
  FUN_100ebf7c(auStack_150,param_1[0x31],1);
  piVar1 = (int *)FUN_100ec060(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  iVar3 = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x768),
                         *(undefined1 *)(param_1 + 0x30),(int)param_2);
    iVar3 = iVar3 + iVar2;
    piVar1 = (int *)FUN_100ec0e8(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1,iVar3);
  }
  FUN_100ebff4(auStack_150,2);
  return;
}



// Function: FUN_100cab4c at 100cab4c
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cab4c(void)

{
  FUN_100c1c8c(&DAT_bfe1fffc,_DAT_8186000c,0x88,&DAT_a8660008,&DAT_2c090000);
  FUN_100c1c8c(&DAT_9421ffc0,_DAT_7c7f1814,0xa8,0x48000c0d,&DAT_80410014);
  FUN_100c1c8c(&DAT_2c040000,_DAT_48000008,0xc0,&DAT_38600000,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_39200001,_DAT_2c03ffff,0xc4,&DAT_4082000c,&DAT_2c040000);
  FUN_100c1c8c(&DAT_2f090000,_DAT_3860ffff,200,&DAT_48000068,&DAT_39200001);
  return;
}



// Function: FUN_100cac1c at 100cac1c
// Size: 104 bytes

undefined4 * FUN_100cac1c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = 0x809f0018;
  }
  return param_1;
}



// Function: FUN_100cac84 at 100cac84
// Size: 44 bytes

void FUN_100cac84(undefined4 param_1)

{
  FUN_100d88b4(param_1,1,0xc);
  return;
}



// Function: FUN_100cacb0 at 100cacb0
// Size: 64 bytes

undefined4 FUN_100cacb0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100cac1c(0);
  FUN_100cac84();
  return uVar1;
}



// Function: FUN_100cacf8 at 100cacf8
// Size: 104 bytes

undefined4 * FUN_100cacf8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(4), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x41840034;
  }
  return param_1;
}



// Function: FUN_100cad60 at 100cad60
// Size: 40 bytes

void FUN_100cad60(void)

{
  FUN_100cacf8(0);
  return;
}



// Function: FUN_100cad88 at 100cad88
// Size: 36 bytes

void FUN_100cad88(void)

{
  FUN_100f5274();
  return;
}



// Function: FUN_100cadac at 100cadac
// Size: 36 bytes

void FUN_100cadac(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100cadd0 at 100cadd0
// Size: 36 bytes

void FUN_100cadd0(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100cadf4 at 100cadf4
// Size: 36 bytes

void FUN_100cadf4(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100cae18 at 100cae18
// Size: 36 bytes

void FUN_100cae18(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100cae44 at 100cae44
// Size: 116 bytes

undefined4 * FUN_100cae44(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100cacf8(param_1);
    *param_1 = 0x7f094040;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}



// Function: FUN_100caeb8 at 100caeb8
// Size: 40 bytes

void FUN_100caeb8(void)

{
  FUN_100cae44(0);
  return;
}



// Function: FUN_100caee0 at 100caee0
// Size: 36 bytes

void FUN_100caee0(void)

{
  FUN_100cad88();
  return;
}



// Function: FUN_100caf04 at 100caf04
// Size: 84 bytes

void FUN_100caf04(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100caf58 at 100caf58
// Size: 184 bytes

void FUN_100caf58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_100cacb0();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_100cacb0();
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x118),
               param_2,param_3,param_4);
  FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x118),
               param_3,param_2,param_4);
  return;
}



// Function: FUN_100cb010 at 100cb010
// Size: 152 bytes

void FUN_100cb010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128),param_2,param_3,param_4);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128),param_3,param_2,param_4);
  }
  return;
}



// Function: FUN_100cb0a8 at 100cb0a8
// Size: 124 bytes

undefined4 * FUN_100cb0a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x138), param_1 != (undefined4 *)0x0)) {
    FUN_100ebaf8(param_1,param_2,1);
    *param_1 = 0x40980028;
    param_1[0x4d] = param_3;
  }
  return param_1;
}



// Function: FUN_100cb124 at 100cb124
// Size: 140 bytes

undefined4 * FUN_100cb124(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x138), param_1 != (undefined4 *)0x0)) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 4);
    }
    FUN_100cb0a8(param_1,uVar1,param_2);
    *param_1 = &DAT_2f890000;
  }
  return param_1;
}



// Function: FUN_100cb1b0 at 100cb1b0
// Size: 164 bytes

undefined4 FUN_100cb1b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x10) + (int)param_1);
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x148),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100cb254 at 100cb254
// Size: 36 bytes

void FUN_100cb254(void)

{
  FUN_100cb1b0();
  return;
}



// Function: FUN_100cb278 at 100cb278
// Size: 120 bytes

undefined4 FUN_100cb278(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100ebf44(param_1);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x10) +
                           (int)*(short *)(**(int **)(param_1 + 0x10) + 0x140),
                           *(undefined4 *)(param_1 + 4)), iVar1 == *(int *)(param_1 + 0x134))) {
    return 1;
  }
  return 0;
}



// Function: FUN_100cb2f0 at 100cb2f0
// Size: 96 bytes

void FUN_100cb2f0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x148),param_1[1]);
  return;
}



// Function: FUN_100cb350 at 100cb350
// Size: 36 bytes

void FUN_100cb350(void)

{
  FUN_100cb2f0();
  return;
}



// Function: FUN_100cb374 at 100cb374
// Size: 108 bytes

void FUN_100cb374(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x40980028;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100cb3e0 at 100cb3e0
// Size: 108 bytes

void FUN_100cb3e0(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_2f890000;
    FUN_100cb374(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100cb44c at 100cb44c
// Size: 204 bytes

void FUN_100cb44c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_150 [312];
  
  FUN_100cb124(auStack_150,param_2,param_1);
  piVar1 = (int *)FUN_100cb254(auStack_150);
  iVar2 = FUN_100cb278(auStack_150);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x40),param_3,param_2,param_4,param_1);
    piVar1 = (int *)FUN_100cb350(auStack_150);
    iVar2 = FUN_100cb278(auStack_150);
  }
  FUN_100cb3e0(auStack_150,2);
  return;
}



// Function: FUN_100cb518 at 100cb518
// Size: 140 bytes

undefined4 * FUN_100cb518(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x138), param_1 != (undefined4 *)0x0)) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 8);
    }
    FUN_100cb0a8(param_1,uVar1,param_2);
    *param_1 = 0x409e0018;
  }
  return param_1;
}



// Function: FUN_100cb5a4 at 100cb5a4
// Size: 36 bytes

void FUN_100cb5a4(void)

{
  FUN_100cb1b0();
  return;
}



// Function: FUN_100cb5c8 at 100cb5c8
// Size: 36 bytes

void FUN_100cb5c8(void)

{
  FUN_100cb2f0();
  return;
}



// Function: FUN_100cb5ec at 100cb5ec
// Size: 108 bytes

void FUN_100cb5ec(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x409e0018;
    FUN_100cb374(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100cb658 at 100cb658
// Size: 428 bytes

void FUN_100cb658(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_288 [4];
  undefined4 local_284;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  
  FUN_100cb124(auStack_150,param_2,param_1);
  uVar1 = FUN_100cb254(auStack_150);
  iVar2 = FUN_100cb278(auStack_150);
  while (iVar2 != 0) {
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 200),
                 local_14c,1);
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x128),
                 uVar1,param_2,0x7ffffffe);
    uVar1 = FUN_100cb350(auStack_150);
    iVar2 = FUN_100cb278(auStack_150);
  }
  FUN_100cb3e0(auStack_150,2);
  FUN_100cb518(auStack_288,param_2,param_1);
  uVar1 = FUN_100cb5a4(auStack_288);
  iVar2 = FUN_100cb278(auStack_288);
  while (iVar2 != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 200),
                 local_284,1);
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x128),
                 uVar1,param_2,0x7ffffffe);
    uVar1 = FUN_100cb5c8(auStack_288);
    iVar2 = FUN_100cb278(auStack_288);
  }
  FUN_100cb5ec(auStack_288,2);
  return;
}



// Function: FUN_100cb80c at 100cb80c
// Size: 112 bytes

undefined4 * FUN_100cb80c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x10), param_1 != (undefined4 *)0x0)) {
    FUN_100cae44(param_1);
    *param_1 = 0x90bf001c;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return param_1;
}



// Function: FUN_100cb87c at 100cb87c
// Size: 40 bytes

void FUN_100cb87c(void)

{
  FUN_100cb80c(0);
  return;
}



// Function: FUN_100cb8a4 at 100cb8a4
// Size: 176 bytes

void FUN_100cb8a4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 3) = 1;
  if ((param_2 != 0) && (param_3 != -1)) {
    FUN_10117884((int)*(short *)(*param_1 + 200) + (int)param_1,param_2,1);
    FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1,param_3,param_2,param_4);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// Function: FUN_100cb974 at 100cb974
// Size: 168 bytes

void FUN_100cb974(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  if (param_2 != 0) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x138) + (int)piVar2,param_2,&local_10),
       iVar1 != 0)) {
      iVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0xe0),local_10);
      if ((param_3 & 0xff) != *(uint *)(iVar1 + 8) >> 0x1f) {
        *(uint *)(iVar1 + 8) = -*(uint *)(iVar1 + 8);
      }
    }
  }
  return;
}



// Function: FUN_100cba1c at 100cba1c
// Size: 160 bytes

uint FUN_100cba1c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_10 [2];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    piVar3 = *(int **)(param_1 + 8);
    if ((piVar3 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0x138) + (int)piVar3,param_2,local_10),
       iVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0xe0),local_10[0]);
      uVar1 = *(uint *)(iVar2 + 8) >> 0x1f;
    }
  }
  return uVar1;
}



// Function: FUN_100cbabc at 100cbabc
// Size: 264 bytes

void FUN_100cbabc(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_148 [312];
  
  if (param_2 != 0) {
    param_3 = param_3 & 0xff;
    FUN_100cb124(auStack_148,param_2,param_1);
    uVar1 = FUN_100cb254(auStack_148);
    iVar2 = FUN_100cb278(auStack_148);
    while (iVar2 != 0) {
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),uVar1);
      if (param_3 != uVar3) {
        FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,uVar1,param_3);
        FUN_10117884((int)*(short *)(*param_1 + 200) + (int)param_1,uVar1,param_3);
      }
      uVar1 = FUN_100cb350(auStack_148);
      iVar2 = FUN_100cb278(auStack_148);
    }
    FUN_100cb3e0(auStack_148,2);
  }
  return;
}



// Function: FUN_100cbbc4 at 100cbbc4
// Size: 284 bytes

void FUN_100cbbc4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_150 [78];
  
  FUN_100ebaf8(local_150,param_1[2],1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar1 = local_150[1];
  iVar2 = FUN_100ebf44(local_150);
  while (iVar2 != 0) {
    puVar3 = (undefined4 *)
             FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0xe0),iVar1);
    if ((int)puVar3[2] < 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1,*puVar3,param_2,param_3,param_4);
    }
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar1 = local_150[1];
    iVar2 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return;
}



// Function: FUN_100cbce0 at 100cbce0
// Size: 212 bytes

void FUN_100cbce0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),param_2);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_2,0);
    FUN_10117884((int)*(short *)(*param_1 + 0xf0) + (int)param_1,param_2,param_3,param_4,param_5);
    FUN_10117884((int)*(short *)(*param_2 + 0x40) + (int)param_2,param_3,param_4,param_5,param_1);
  }
  return;
}



// Function: FUN_100cbdb4 at 100cbdb4
// Size: 200 bytes

void FUN_100cbdb4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_150 [312];
  
  FUN_100cb518(auStack_150,param_2,param_1);
  uVar1 = FUN_100cb5a4(auStack_150);
  iVar2 = FUN_100cb278(auStack_150);
  while (iVar2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),uVar1,param_3,param_4,param_5);
    uVar1 = FUN_100cb5c8(auStack_150);
    iVar2 = FUN_100cb278(auStack_150);
  }
  FUN_100cb5ec(auStack_150,2);
  return;
}



// Function: FUN_100cbe7c at 100cbe7c
// Size: 120 bytes

void FUN_100cbe7c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_2[1];
  iVar3 = *piVar2;
  uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(iVar3 + 0xe0),param_1,piVar2,iVar3,
                       *(undefined4 *)(iVar3 + 0xe4));
  FUN_10117884((int)piVar2 + (int)*(short *)(iVar3 + 0x100),*param_2,uVar1);
  return;
}



// Function: FUN_100cbef4 at 100cbef4
// Size: 328 bytes

void FUN_100cbef4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_150;
  int local_14c [79];
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    iVar1 = FUN_10117884((int)*(short *)(*piVar3 + 0x138) + (int)piVar3,
                         *(undefined4 *)(param_1 + 0x134),&local_150);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      FUN_100eba50(local_14c,*(undefined4 *)(param_1 + 0x10),1,local_150,0);
      FUN_10117884((int)*(short *)(local_14c[0] + 0x10) + (int)local_14c);
      iVar1 = local_14c[1];
      iVar2 = FUN_100ebf44(local_14c);
      while ((iVar2 != 0 &&
             (iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x10) +
                                   (int)*(short *)(**(int **)(param_1 + 0x10) + 0x140),iVar1),
             iVar2 == *(int *)(param_1 + 0x134)))) {
        local_150 = iVar1;
        FUN_10117884((int)*(short *)(local_14c[0] + 0x18) + (int)local_14c);
        iVar1 = local_14c[1];
        iVar2 = FUN_100ebf44(local_14c);
      }
      *(undefined4 *)(param_1 + 8) = local_150;
      FUN_100ebc68(local_14c,2);
    }
  }
  FUN_100ebf58(param_1);
  return;
}



// Function: FUN_100cc044 at 100cc044
// Size: 40 bytes

void FUN_100cc044(void)

{
  FUN_100cac1c(0);
  return;
}



// Function: FUN_100cc06c at 100cc06c
// Size: 144 bytes

void FUN_100cc06c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),param_2,param_3,param_4,
                       &local_18);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x120) + (int)param_1,local_18,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100cc0fc at 100cc0fc
// Size: 80 bytes

void FUN_100cc0fc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,&local_10,1);
  return;
}



// Function: FUN_100cc14c at 100cc14c
// Size: 96 bytes

void FUN_100cc14c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = &local_10;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),0x911f0018,&local_18,param_5);
  return;
}



// Function: FUN_100cc1ac at 100cc1ac
// Size: 108 bytes

void FUN_100cc1ac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = &local_10;
  local_c = 0;
  local_8 = 0x7ffffffe;
  local_14 = param_1;
  local_10 = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),0x911f0018,&local_18,param_3);
  return;
}



// Function: FUN_100cc218 at 100cc218
// Size: 64 bytes

undefined4 FUN_100cc218(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *puVar1;
}



// Function: FUN_100cc258 at 100cc258
// Size: 60 bytes

undefined4 FUN_100cc258(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return *(undefined4 *)(iVar1 + 4);
}



// Function: FUN_100cc294 at 100cc294
// Size: 112 bytes

void FUN_100cc294(int *param_1)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 200) + (int)param_1,local_10,1);
  }
  return;
}



// Function: FUN_100cc37c at 100cc37c
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cc37c(void)

{
  FUN_100c1c8c(0x7c892040,_DAT_4800000c,4,&DAT_80df000c,0x90c30020);
  FUN_100c1c8c(&DAT_811f000c,_DAT_90df0018,0xc,0x813f0014,0x7c892040);
  FUN_100c1c8c(&DAT_80bf0004,_DAT_80ff0018,0x10,0x7c093840,&DAT_811f000c);
  FUN_100c1c8c(0x90bf0014,_DAT_40800014,0x20,0x88690000,&DAT_90010008);
  return;
}



// Function: FUN_100cc430 at 100cc430
// Size: 104 bytes

undefined4 * FUN_100cc430(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(4), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_5463063e;
  }
  return param_1;
}



// Function: FUN_100cc498 at 100cc498
// Size: 40 bytes

void FUN_100cc498(void)

{
  FUN_100cc430(0);
  return;
}



// Function: FUN_100cc4d0 at 100cc4d0
// Size: 72 bytes

uint FUN_100cc4d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  return iVar1 + -1 + (uint)(iVar1 != 0) >> 0x1f;
}



// Function: FUN_100cc520 at 100cc520
// Size: 116 bytes

undefined4 * FUN_100cc520(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100cc430(param_1);
    *param_1 = &DAT_3860ffff;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}



// Function: FUN_100cc594 at 100cc594
// Size: 40 bytes

void FUN_100cc594(void)

{
  FUN_100cc520(0);
  return;
}



// Function: FUN_100cc5d8 at 100cc5d8
// Size: 116 bytes

void FUN_100cc5d8(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_100f5100(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// Function: FUN_100cc64c at 100cc64c
// Size: 116 bytes

void FUN_100cc64c(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100cc760 at 100cc760
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100cc760(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x14), param_1 != (undefined4 *)0x0)) {
    FUN_100cc430(param_1);
    *param_1 = &DAT_30210040;
    uVar3 = _DAT_809f0010;
    uVar2 = _DAT_809f000c;
    uVar1 = _DAT_809f0008;
    param_1[1] = _DAT_809f0004;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  return param_1;
}



// Function: FUN_100cc7dc at 100cc7dc
// Size: 40 bytes

void FUN_100cc7dc(void)

{
  FUN_100cc760(0);
  return;
}



// Function: FUN_100cc810 at 100cc810
// Size: 84 bytes

int FUN_100cc810(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100e1a3c(param_1 + 4,1);
  iVar2 = FUN_100e1a3c(param_1 + 4,0);
  return iVar2 * iVar1;
}



// Function: FUN_100cc864 at 100cc864
// Size: 104 bytes

void FUN_100cc864(int param_1,int *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_100f5100(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x128),&local_20);
  *(undefined4 *)(param_1 + 4) = local_20;
  *(undefined4 *)(param_1 + 8) = uStack_1c;
  *(undefined4 *)(param_1 + 0xc) = uStack_18;
  *(undefined4 *)(param_1 + 0x10) = uStack_14;
  return;
}



// Function: FUN_100cc8cc at 100cc8cc
// Size: 168 bytes

void FUN_100cc8cc(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 local_20 [5];
  
  FUN_100f5104(param_1,param_2);
  puVar1 = local_20;
  if ((local_20 != (undefined4 *)0x0) ||
     (puVar1 = (undefined4 *)FUN_100f56e4(0x10), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = *(undefined4 *)(param_1 + 4);
    puVar1[1] = *(undefined4 *)(param_1 + 8);
    puVar1[2] = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined4 *)(param_1 + 0x10);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),local_20);
  return;
}



// Function: FUN_100cc974 at 100cc974
// Size: 256 bytes

undefined4 FUN_100cc974(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_30 [16];
  undefined4 local_20 [4];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = local_20;
    if ((local_20 != (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)FUN_100f56e4(0x10), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = *(undefined4 *)(param_2 + 4);
      puVar2[1] = *(undefined4 *)(param_2 + 8);
      puVar2[2] = *(undefined4 *)(param_2 + 0xc);
      puVar2[3] = *(undefined4 *)(param_2 + 0x10);
    }
    iVar3 = FUN_100e16fc(param_1 + 4,local_20);
    if (iVar3 == 0) {
      FUN_100e17d8(param_1 + 4,auStack_30,local_20);
      iVar3 = FUN_100e1a08(auStack_30);
      if (iVar3 == 0) {
        iVar3 = FUN_100e16fc(auStack_30,local_20);
        if (iVar3 == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}



// Function: FUN_100cca7c at 100cca7c
// Size: 120 bytes

undefined4 * FUN_100cca7c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100cc430(param_1);
    *param_1 = &DAT_bbe1fffc;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



// Function: FUN_100ccaf4 at 100ccaf4
// Size: 40 bytes

void FUN_100ccaf4(void)

{
  FUN_100cca7c(0);
  return;
}



// Function: FUN_100ccb1c at 100ccb1c
// Size: 348 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ccb1c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100f5100(param_1,param_2);
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x148) + (int)param_2);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  else {
    uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
    uVar2 = FUN_10000360(*(undefined4 *)(param_1 + 4));
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = _DAT_41820010;
    _DAT_41820010 = auStack_138;
    iVar3 = FUN_10000090(auStack_138);
    if (iVar3 == 0) {
      FUN_100f16f8(*(undefined4 *)(param_1 + 4),uVar1);
      FUN_10002598(*(undefined4 *)(param_1 + 4));
      FUN_100db1ec();
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),**(undefined4 **)(param_1 + 4),
                   uVar1);
      FUN_10001b60(*(undefined4 *)(param_1 + 4),uVar2);
      _DAT_41820010 = local_30;
    }
    else {
      FUN_10001b60(*(undefined4 *)(param_1 + 4),uVar2);
      FUN_100db158((int)local_38,local_34);
    }
  }
  return;
}



// Function: FUN_100ccc78 at 100ccc78
// Size: 88 bytes

void FUN_100ccc78(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1d8),*(undefined4 *)(param_1 + 4));
  return;
}



// Function: FUN_100cccd0 at 100cccd0
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100cccd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_130 = FUN_100f5088(param_1);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 == 0) {
    *(undefined4 *)(local_130 + 4) = 0;
    uVar2 = FUN_100ed918();
    *(undefined4 *)(local_130 + 4) = uVar2;
    FUN_100005a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(local_130 + 4));
    _DAT_41820010 = local_24;
  }
  else {
    local_130 = FUN_100f57c8(local_130);
    FUN_100db158((int)local_2c,local_28);
  }
  return local_130;
}



// Function: FUN_100ccdb4 at 100ccdb4
// Size: 172 bytes

int FUN_100ccdb4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_10000060(*(undefined4 *)(param_1 + 4));
    if (iVar2 == 0) {
      iVar2 = **(int **)(param_1 + 4);
      local_10 = *(undefined2 *)(iVar2 + 2);
      local_e = *(undefined2 *)(iVar2 + 4);
      local_c = *(undefined2 *)(iVar2 + 6);
      local_a = *(undefined2 *)(iVar2 + 8);
      iVar2 = FUN_100b08a4(&local_10,1);
      iVar1 = FUN_100b08a4(&local_10,0);
      iVar1 = iVar1 * iVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// Function: FUN_100cce60 at 100cce60
// Size: 252 bytes

undefined4 FUN_100cce60(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
    iVar2 = FUN_10002e38(*(undefined4 *)(param_1 + 4),uVar1);
    if (iVar2 == 0) {
      FUN_100ee64c(auStack_128);
      FUN_10002be0(*(undefined4 *)(param_1 + 4),uVar1,local_14);
      iVar2 = FUN_10000060(local_14);
      if (iVar2 == 0) {
        iVar2 = FUN_10002e38(uVar1,local_14);
        if (iVar2 == 0) {
          FUN_100ee77c(auStack_128,2);
          uVar1 = 1;
        }
        else {
          FUN_100ee77c(auStack_128,2);
          uVar1 = 3;
        }
      }
      else {
        FUN_100ee77c(auStack_128,2);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}



// Function: FUN_100ccf5c at 100ccf5c
// Size: 80 bytes

void FUN_100ccf5c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100ccfb8 at 100ccfb8
// Size: 68 bytes

void FUN_100ccfb8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100b0578(param_2);
  FUN_10003150(*(undefined4 *)(param_1 + 4),uVar1);
  return;
}



// Function: FUN_100ccffc at 100ccffc
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ccffc(void)

{
  FUN_100c1c8c(0x7c630774,_DAT_4e800020,4,&DAT_7c0802a6,0x90c30020);
  FUN_100c1c8c(&DAT_48000008,*puRam10116d14,0xc,&DAT_90010008,0x7c630774);
  FUN_100c1c8c(&DAT_80010048,_DAT_9421ffc0,0x14,0x2c04ffff,0x7c630774);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_4082000c,0xc,&DAT_3860ffff,0x7c630774);
  return;
}



// Function: FUN_100cd0a4 at 100cd0a4
// Size: 96 bytes

uint FUN_100cd0a4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_10000228(0,param_1,auStack_10);
  if (0 < iVar1) {
    *param_2 = param_1;
  }
  return (-1 - iVar1) + (uint)(iVar1 == 0) >> 0x1f;
}



// Function: FUN_100cd104 at 100cd104
// Size: 8 bytes

undefined4 FUN_100cd104(void)

{
  return 0x480000d4;
}



// Function: FUN_100cd114 at 100cd114
// Size: 132 bytes

undefined4 * FUN_100cd114(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x88), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_609e0000;
    param_1[0x21] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)((int)param_1 + 0x81) = 0;
    *(undefined2 *)((int)param_1 + 0x82) = 0;
  }
  return param_1;
}



// Function: FUN_100cd198 at 100cd198
// Size: 40 bytes

void FUN_100cd198(void)

{
  FUN_100cd114(0);
  return;
}



// Function: FUN_100cd1c4 at 100cd1c4
// Size: 72 bytes

void FUN_100cd1c4(int param_1)

{
  int iVar1;
  
  FUN_1010937c(param_1);
  iVar1 = FUN_10002298();
  *(short *)(param_1 + 0x82) = *(short *)(iVar1 + 8) + -1;
  return;
}



// Function: FUN_100cd20c at 100cd20c
// Size: 584 bytes

void FUN_100cd20c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int local_6c;
  int local_48;
  int local_44;
  short local_40;
  short local_3e;
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  piVar5 = &local_48;
  FUN_101074b8(param_1,param_2);
  if (param_1[0x21] != 0) {
    if (*(char *)((int)param_1 + 0x81) == '\0') {
      if (DAT_38a00002 == '\0') {
        iVar1 = *(int *)param_1[0x21];
        local_28 = *(undefined2 *)(iVar1 + 2);
        local_26 = *(undefined2 *)(iVar1 + 4);
        local_24 = *(undefined2 *)(iVar1 + 6);
        local_22 = *(undefined2 *)(iVar1 + 8);
        FUN_100b08d4(&local_40,&local_28);
        local_30 = (int)local_40;
        local_2c = (int)local_3e;
        uVar2 = FUN_100e1580(param_2,0);
        uVar3 = FUN_100e1580(param_2,1);
        FUN_100e10b0(uVar3,uVar2,&local_30);
      }
    }
    else {
      iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
      if (iVar1 != 0) {
        FUN_100f0788(*(undefined4 *)(local_6c + -0x94));
        piVar4 = (int *)param_1[8];
        if (piVar4 != (int *)0x0) {
          FUN_10117884((int)*(short *)(*piVar4 + 0x618) + (int)piVar4,param_2);
          FUN_10117884((int)*(short *)(*param_1 + 0x2c0) + (int)param_1,param_2);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_38);
        iVar1 = FUN_10001c20(param_1[0x21]);
        if (iVar1 < 32000) {
          uVar2 = FUN_100b0578(auStack_38);
          uVar3 = FUN_100b0578(auStack_38);
          piVar4 = (int *)FUN_10000480(uVar3,uVar2);
          FUN_100db26c(piVar4);
          uVar2 = *(undefined4 *)(*piVar4 + 0x3e);
          *(int *)(*piVar4 + 0x3e) = param_1[0x21];
          FUN_10002a90(piVar4);
          local_44 = (int)*(short *)(*piVar4 + 0x5e) * (int)*(short *)(*piVar4 + 0x18);
          local_48 = 30000;
          if (local_44 < 30000) {
            piVar5 = &local_44;
          }
          param_2[2] = *param_2 + *piVar5;
          *(undefined4 *)(*piVar4 + 0x3e) = uVar2;
          FUN_10002700(piVar4);
        }
      }
    }
  }
  return;
}



// Function: FUN_100cd454 at 100cd454
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cd454(int *param_1)

{
  int iVar1;
  undefined1 uVar3;
  undefined4 uVar2;
  undefined4 local_140;
  int local_13c;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_20 [8];
  
  if (*(short *)((int)param_1 + 0x82) != *(short *)(_DAT_a89f0000 + 0x38)) {
    iVar1 = FUN_100ef510(param_1[0x21]);
    param_1[0x21] = iVar1;
    uVar3 = FUN_100cd0a4(0x50494354,&local_140);
    *(undefined1 *)(param_1 + 0x20) = uVar3;
    iVar1 = FUN_100cd0a4(0x54455854,&local_140);
    *(char *)((int)param_1 + 0x81) = (char)iVar1;
    if ((*(char *)(param_1 + 0x20) != '\0') || (iVar1 != 0)) {
      local_13c = 0;
      local_13c = FUN_100f15e0(0);
      local_38 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_30 = _DAT_41820010;
      _DAT_41820010 = auStack_138;
      iVar1 = FUN_10000090(auStack_138);
      if (iVar1 == 0) {
        uVar2 = FUN_100f1574(1);
        iVar1 = FUN_10000228(local_13c,local_140,auStack_20);
        FUN_100f1574(uVar2);
        if (iVar1 < 0) {
          FUN_100db2f4((int)(short)iVar1);
        }
        param_1[0x21] = local_13c;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
        _DAT_41820010 = local_30;
      }
      else {
        local_13c = FUN_100ef510(local_13c);
        param_1[0x21] = 0;
        FUN_100db158((int)local_38,local_34);
      }
    }
  }
  return;
}



// Function: FUN_100cd610 at 100cd610
// Size: 548 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cd610(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_17c;
  undefined1 local_154 [8];
  undefined4 local_14c;
  undefined4 local_144 [2];
  undefined1 auStack_13c [256];
  undefined2 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = _DAT_41820010;
  _DAT_41820010 = auStack_13c;
  iVar1 = FUN_10000090(auStack_13c);
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
    if (*(char *)((int)param_1 + 0x81) == '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        if (**(char **)(local_17c + -0x90) == '\0') {
          FUN_100b08d4(local_154,*(int *)param_1[0x21] + 2);
          local_14c = CONCAT22(_DAT_63e30000,_DAT_63e30002);
          local_144[0] = local_14c;
        }
        else {
          FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,local_144);
        }
        uVar2 = FUN_100b0578(local_144);
        FUN_10000750(param_1[0x21],uVar2);
      }
    }
    else {
      FUN_100f0788(*(undefined4 *)(local_17c + -0x8c));
      FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,local_144);
      uVar2 = FUN_100ef9b8(param_1[0x21]);
      puVar3 = (undefined4 *)param_1[0x21];
      uVar4 = FUN_10001c20();
      FUN_100efdd0(*puVar3,uVar4,local_144,0,1,0,0);
      FUN_10001b60(param_1[0x21],uVar2);
    }
    if (*(short *)((int)param_1 + 0x82) != *(short *)(_DAT_a89f0000 + 0x38)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x500) + (int)param_1,local_144);
      *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)(_DAT_a89f0000 + 0x38);
      *(undefined1 *)(_DAT_a89f0000 + 0x58) = 1;
    }
    _DAT_41820010 = local_34;
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100cd834 at 100cd834
// Size: 168 bytes

void FUN_100cd834(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  FUN_100e1a64(auStack_20);
  FUN_100e1a64(auStack_28,param_3);
  iVar1 = FUN_100e11c8(auStack_20,auStack_28);
  if ((iVar1 != 0) &&
     (FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380)), param_4 != '\0')) {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_100cd8e0 at 100cd8e0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cd8e0(void)

{
  FUN_100c1c8c(0x480000d4,_DAT_607f0000,0x88,&DAT_80bf0004,&DAT_80410014);
  return;
}



// Function: FUN_100cd91c at 100cd91c
// Size: 8 bytes

undefined4 FUN_100cd91c(void)

{
  return 0x40860018;
}



// Function: FUN_100cd924 at 100cd924
// Size: 120 bytes

undefined4 * FUN_100cd924(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x88), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = 0xa8df0002;
    param_1[0x20] = 0x20202020;
    param_1[0x21] = 0x20202020;
  }
  return param_1;
}



// Function: FUN_100cd99c at 100cd99c
// Size: 8 bytes

undefined1 * FUN_100cd99c(void)

{
  return &DAT_2f060000;
}



// Function: FUN_100cd9a4 at 100cd9a4
// Size: 148 bytes

undefined4 * FUN_100cd9a4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb4), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = 0x409a000c;
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xaa) = 0;
    param_1[0x2c] = 0x20202020;
    param_1[0x20] = 5;
  }
  return param_1;
}



// Function: FUN_100cda38 at 100cda38
// Size: 8 bytes

undefined1 * FUN_100cda38(void)

{
  return &DAT_39200001;
}



// Function: FUN_100cda40 at 100cda40
// Size: 140 bytes

undefined4 * FUN_100cda40(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb0), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_48000008;
    param_1[0x2b] = 0;
    *(undefined1 *)((int)param_1 + 0xa9) = 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined2 *)((int)param_1 + 0xaa) = 0xffff;
    param_1[0x20] = 7;
  }
  return param_1;
}



// Function: FUN_100cdacc at 100cdacc
// Size: 8 bytes

undefined1 * FUN_100cdacc(void)

{
  return &DAT_39200000;
}



// Function: FUN_100cdad4 at 100cdad4
// Size: 128 bytes

undefined4 * FUN_100cdad4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb0), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_2f890000;
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0xffff;
    param_1[0x20] = 0x17;
  }
  return param_1;
}



// Function: FUN_100cdb54 at 100cdb54
// Size: 8 bytes

undefined1 * FUN_100cdb54(void)

{
  return &DAT_419e0020;
}



// Function: FUN_100cdb5c at 100cdb5c
// Size: 128 bytes

undefined4 * FUN_100cdb5c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb0), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_80ff0024;
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0xffff;
    param_1[0x20] = 10;
  }
  return param_1;
}



// Function: FUN_100cdbdc at 100cdbdc
// Size: 8 bytes

undefined4 FUN_100cdbdc(void)

{
  return 0x8187000c;
}



// Function: FUN_100cdbe4 at 100cdbe4
// Size: 156 bytes

undefined4 * FUN_100cdbe4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb4), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = 0xa8670008;
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xaa) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((int)param_1 + 0xb2) = 1;
    *(undefined1 *)((int)param_1 + 0xb3) = 0;
    param_1[0x20] = 0xd;
  }
  return param_1;
}



// Function: FUN_100cdc80 at 100cdc80
// Size: 8 bytes

undefined1 * FUN_100cdc80(void)

{
  return &DAT_7c7f1814;
}



// Function: FUN_100cdc88 at 100cdc88
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100cdc88(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) || (param_1 = (int *)FUN_100f56e4(0xc0), param_1 != (int *)0x0)) {
    FUN_100cdbe4(param_1);
    *param_1 = 0x48000b11;
    param_1[0x2e] = 0;
    *(undefined2 *)(param_1 + 0x2d) = 0xff;
    param_1[0x2f] = -0xfffff00;
    iVar2 = _DAT_8062da50;
    iVar1 = _DAT_8062da4c;
    param_1[0x26] = _DAT_8062da48;
    param_1[0x27] = iVar1;
    param_1[0x28] = iVar2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),0x10001);
    *(undefined1 *)((int)param_1 + 0x53) = 1;
    param_1[0x20] = 6;
    *(undefined2 *)(param_1 + 0x13) = 1;
    *(undefined1 *)((int)param_1 + 0x49) = 0;
  }
  return param_1;
}



// Function: FUN_100cdd68 at 100cdd68
// Size: 8 bytes

undefined1 * FUN_100cdd68(void)

{
  return &DAT_80410014;
}



// Function: FUN_100cdd70 at 100cdd70
// Size: 124 bytes

undefined4 * FUN_100cdd70(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(200), param_1 != (undefined4 *)0x0)) {
    FUN_100cdc88(param_1);
    *param_1 = &DAT_48000008;
    param_1[0x31] = 0x7fffffff;
    param_1[0x30] = 0;
  }
  return param_1;
}



// Function: FUN_100cddec at 100cddec
// Size: 8 bytes

undefined1 * FUN_100cddec(void)

{
  return &DAT_38600000;
}



// Function: FUN_100cddf4 at 100cddf4
// Size: 140 bytes

undefined4 * FUN_100cddf4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb0), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_2c03ffff;
    param_1[0x2b] = 0;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined1 *)((int)param_1 + 0xa9) = 1;
    *(undefined2 *)((int)param_1 + 0xaa) = 0xffff;
    param_1[0x20] = 0x13;
  }
  return param_1;
}



// Function: FUN_100cde80 at 100cde80
// Size: 8 bytes

undefined1 * FUN_100cde80(void)

{
  return &DAT_4082000c;
}



// Function: FUN_100cde88 at 100cde88
// Size: 128 bytes

undefined4 * FUN_100cde88(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x84), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_3860ffff;
    param_1[0x20] = 0x20202020;
    *(undefined1 *)((int)param_1 + 0x46) = 1;
    *(undefined1 *)((int)param_1 + 0x47) = 1;
  }
  return param_1;
}



// Function: FUN_100cdf08 at 100cdf08
// Size: 112 bytes

undefined4 * FUN_100cdf08(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(8), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_48000070;
    param_1[1] = 0;
  }
  return param_1;
}



// Function: FUN_100cdf78 at 100cdf78
// Size: 36 bytes

void FUN_100cdf78(void)

{
  FUN_100f5274();
  return;
}



// Function: FUN_100cdf9c at 100cdf9c
// Size: 1324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cdf9c(void)

{
  undefined1 auStack_f40 [256];
  undefined1 auStack_e40 [256];
  undefined1 auStack_d40 [256];
  undefined1 auStack_c40 [256];
  undefined1 auStack_b40 [256];
  undefined1 auStack_a40 [256];
  undefined1 auStack_940 [256];
  undefined1 auStack_840 [256];
  undefined1 auStack_740 [256];
  undefined1 auStack_640 [256];
  undefined1 auStack_540 [256];
  undefined1 auStack_440 [256];
  undefined1 auStack_340 [256];
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [256];
  
  if (DAT_809f0008 == '\0') {
    if (DAT_4bfde391 != '\0') {
      FUN_100cd91c();
      FUN_100cd924(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100c6b1c();
      FUN_100c6b2c(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100d450c();
      FUN_100d451c(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100d48f8();
      FUN_100d4908(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100d4e94();
      FUN_100d4ea4(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cd99c();
      FUN_100cd9a4(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cda38();
      FUN_100cda40(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cdacc();
      FUN_100cdad4(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cdb54();
      FUN_100cdb5c(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100f5894();
      FUN_100f58a4(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cdbdc();
      FUN_100cdbe4(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cdc80();
      FUN_100cdc88(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cdd68();
      FUN_100cdd70(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cddec();
      FUN_100cddf4(0);
    }
    if (DAT_4bfde391 != '\0') {
      FUN_100cde80();
      FUN_100cde88(0);
    }
    FUN_100b19f4(auStack_140,0x2c8500a0);
    FUN_100ed954(auStack_140,0x646c6f67);
    FUN_100b19f4(auStack_240,0x2c8500ac);
    FUN_100ed954(auStack_240,0x636e746c);
    FUN_100b19f4(auStack_340,0x2c8500b8);
    FUN_100ed954(auStack_340,0x6275746e);
    FUN_100b19f4(auStack_440,0x2c8500c0);
    FUN_100ed954(auStack_440,0x63686b62);
    FUN_100b19f4(auStack_540,0x2c8500cc);
    FUN_100ed954(auStack_540,0x72616462);
    FUN_100b19f4(auStack_640,0x2c8500d4);
    FUN_100ed954(auStack_640,0x636c7573);
    FUN_100b19f4(auStack_740,0x2c8500e0);
    FUN_100ed954(auStack_740,0x69636f6e);
    FUN_100b19f4(auStack_840,0x2c8500e8);
    FUN_100ed954(auStack_840,0x7369636e);
    FUN_100b19f4(auStack_940,0x2c8500f4);
    FUN_100ed954(auStack_940,0x70696374);
    FUN_100b19f4(auStack_a40,0x2c850100);
    FUN_100ed954(auStack_a40,0x706f7070);
    FUN_100b19f4(auStack_b40,0x2c850108);
    FUN_100ed954(auStack_b40,0x73746174);
    FUN_100b19f4(auStack_c40,0x2c850114);
    FUN_100ed954(auStack_c40,0x65646974);
    FUN_100b19f4(auStack_d40,0x2c850120);
    FUN_100ed954(auStack_d40,0x6e6d6272);
    FUN_100b19f4(auStack_e40,0x2c85012c);
    FUN_100ed954(auStack_e40,0x7061746e);
    FUN_100b19f4(auStack_f40,0x2c850138);
    FUN_100ed954(auStack_f40,0x74626f72);
    _DAT_8062dac0 = FUN_100cdf08(0);
    FUN_100cdf78();
    _DAT_4bee8875 = FUN_100bece4(0);
    FUN_100bed7c();
    DAT_809f0008 = '\x01';
  }
  return;
}



// Function: FUN_100ce4c8 at 100ce4c8
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ce4c8(void)

{
  undefined4 uVar1;
  
  if (_DAT_8062dac0 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)_DAT_8062dac0 + (int)*(short *)(*_DAT_8062dac0 + 0xa8));
  }
  return uVar1;
}



// Function: FUN_100ce518 at 100ce518
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ce518(undefined4 param_1)

{
  if (_DAT_8062dac0 != (int *)0x0) {
    FUN_10117884((int)_DAT_8062dac0 + (int)*(short *)(*_DAT_8062dac0 + 0xb8),param_1);
  }
  return;
}



// Function: FUN_100ce568 at 100ce568
// Size: 384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ce568(byte *param_1)

{
  int iVar1;
  int iVar2;
  int local_150 [79];
  
  FUN_100ebaf8(local_150,*(undefined4 *)(_DAT_4bee8875 + 4),1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar2 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while (iVar1 != 0) {
    iVar1 = FUN_10117884((int)*(int **)(_DAT_4bee8875 + 4) +
                         (int)*(short *)(**(int **)(_DAT_4bee8875 + 4) + 0x120),iVar2);
    iVar2 = FUN_100b1c18(param_1,**(undefined4 **)(iVar1 + 4),1);
    while (iVar2 != 0) {
      FUN_100b1c88(param_1,iVar2,*(undefined1 *)**(undefined4 **)(iVar1 + 4));
      if ((uint)*param_1 + (uint)*(byte *)**(undefined4 **)(iVar1 + 8) < 0x100) {
        FUN_100b1900(param_1,(byte *)**(undefined4 **)(iVar1 + 8),iVar2,0xff);
      }
      iVar2 = FUN_100b1c18(param_1,**(undefined4 **)(iVar1 + 4),1);
    }
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar2 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return;
}



// Function: FUN_100ce6f0 at 100ce6f0
// Size: 40 bytes

void FUN_100ce6f0(void)

{
  FUN_100cd924(0);
  return;
}



// Function: FUN_100ce718 at 100ce718
// Size: 120 bytes

void FUN_100ce718(int *param_1)

{
  int *piVar1;
  
  FUN_10105d28(param_1);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x808) + (int)piVar1,param_1[0x20],param_1[0x21]);
  }
  return;
}



// Function: FUN_100ce79c at 100ce79c
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ce79c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_1010937c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x138) + (int)param_2);
    param_1[0x20] = iVar1;
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x138) + (int)param_2);
    param_1[0x21] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100ce884 at 100ce884
// Size: 116 bytes

void FUN_100ce884(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 0x80));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 0x84));
  return;
}



// Function: FUN_100ce900 at 100ce900
// Size: 40 bytes

void FUN_100ce900(void)

{
  FUN_100cd9a4(0);
  return;
}



// Function: FUN_100ce928 at 100ce928
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100ce928(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_22c [256];
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10105d2c(param_1);
  piVar1[0x2b] = 0;
  if (param_1[0x2b] != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar2 = FUN_10000090(auStack_12c);
    if (iVar2 == 0) {
      local_22c[0] = 0;
      FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_22c);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7b0),local_22c,0);
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return piVar1;
}



// Function: FUN_100cea44 at 100cea44
// Size: 76 bytes

void FUN_100cea44(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100cea9c at 100cea9c
// Size: 380 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cea9c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  byte *pbVar5;
  int local_25c;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100c6c9c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    pbVar5 = *(byte **)(local_25c + -0xe4c);
    puVar2 = auStack_238;
    if ((auStack_238 != (undefined1 *)0x0) ||
       (puVar2 = (undefined1 *)FUN_100f56e4(0x100), puVar2 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar5,puVar2,*pbVar5 + 1);
    }
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x2a) = uVar4;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xaa) = (short)uVar3;
    if (*(short *)(param_1 + 0x2a) != -1) {
      FUN_100009d8(auStack_238,(int)*(short *)(param_1 + 0x2a),uVar3);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),auStack_238,0);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100cec18 at 100cec18
// Size: 116 bytes

void FUN_100cec18(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xaa));
  return;
}



// Function: FUN_100cec8c at 100cec8c
// Size: 256 bytes

void FUN_100cec8c(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_150 [312];
  
  if ((param_2 == 0xc) && (param_3[8] == param_1)) {
    FUN_1010556c(auStack_150,param_1);
    piVar1 = (int *)FUN_10105660(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      if (piVar1 != param_3) {
        FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,0x20,param_1,0);
      }
      piVar1 = (int *)FUN_10105684(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    *(int *)(param_1 + 0xb0) = param_3[6];
    FUN_101055f4(auStack_150,2);
  }
  FUN_100c73f0(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_100ced8c at 100ced8c
// Size: 712 bytes

void FUN_100ced8c(int *param_1,undefined4 param_2)

{
  short sVar1;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined1 auStack_2b8 [8];
  short local_2b0 [2];
  undefined1 local_2ac;
  short local_1ac;
  short local_1aa;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  undefined1 auStack_194 [8];
  int local_18c;
  int local_188;
  undefined2 local_184;
  undefined2 local_182;
  short local_17c;
  short local_17a;
  undefined1 local_174 [256];
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64 [4];
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  undefined1 auStack_4c [12];
  
  FUN_100b02d0(&local_17c);
  local_2ac = 0;
  if (param_1[0x2b] != 0) {
    FUN_10000030();
    FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,&local_17c);
    FUN_100031b0((int)local_17a,(int)local_17c);
    FUN_100ef8c8(auStack_194);
    FUN_100ee844(auStack_2b8,*(undefined1 *)((int)param_1 + 0xa6));
    local_2c8 = param_1[0x26];
    iStack_2c4 = param_1[0x27];
    iStack_2c0 = param_1[0x28];
    FUN_100eceb0(&local_2c8,auStack_4c,local_2b0);
    FUN_100ee8e8(auStack_2b8,2);
    local_174[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_174);
    FUN_100ce568(local_174);
    FUN_100b1c84(local_174);
    iStack_198 = FUN_100006f0();
    iStack_198 = iStack_198 + 0x18;
    iStack_19c = (int)local_2b0[0];
    local_74 = 0;
    local_70 = 0x10;
    local_1a4 = 0;
    uStack_1a0 = 0x10;
    local_6c = iStack_19c;
    local_68 = iStack_198;
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,local_64);
    local_184 = 1;
    local_182 = 1;
    FUN_100b039c(&local_1ac,&local_17c,&local_184);
    local_18c = (int)local_1ac;
    local_188 = (int)local_1aa;
    FUN_100e16b8(local_64,&local_18c);
    local_64[0] = local_64[0] + ((int)local_2b0[0] >> 1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),local_64,&local_54);
    FUN_10000270((int)(short)(local_52 + 0x10),(int)local_54);
    FUN_10001d88((int)local_52,(int)local_54);
    FUN_10001d88((int)local_52,(int)local_50);
    FUN_10001d88((int)local_4e,(int)local_50);
    FUN_10001d88((int)local_4e,(int)local_54);
    sVar1 = FUN_100e1a3c(&local_1a4,1);
    FUN_10001d88((int)(short)(local_52 + sVar1 + 0x10),(int)local_54);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),param_2);
    FUN_100f0538(auStack_194);
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100cf054 at 100cf054
// Size: 340 bytes

void FUN_100cf054(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [8];
  undefined1 auStack_154 [8];
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined1 local_12c;
  undefined1 auStack_12b [255];
  undefined1 auStack_2c [8];
  
  local_12c = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),&local_12c);
  FUN_100ce568(&local_12c);
  FUN_100ee844(auStack_15c,*(undefined1 *)((int)param_1 + 0xa6));
  FUN_100b1c84(&local_12c);
  iVar1 = FUN_100006f0();
  uStack_144 = FUN_100ef96c(auStack_2c);
  local_13c = 0;
  local_138 = 0x10;
  local_14c = 0;
  uStack_148 = 0x10;
  iStack_140 = iVar1 + 0x18;
  local_134 = uStack_144;
  local_130 = iVar1 + 0x18;
  FUN_100ee8e8(auStack_15c,2);
  FUN_100e17d8(&local_14c,auStack_16c,param_2);
  iVar1 = FUN_100e1a08(auStack_16c);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_14c,auStack_154);
    FUN_100efdd0(auStack_12b,local_12c,auStack_154,1,0,0,0,0);
  }
  return;
}



// Function: FUN_100cf1a8 at 100cf1a8
// Size: 112 bytes

void FUN_100cf1a8(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  if (*(undefined4 **)(param_1 + 0xac) == (undefined4 *)0x0) {
    FUN_100012d8(&DAT_7c0803a6,param_2,DAT_7c0803a6 + 1);
  }
  else {
    pbVar1 = (byte *)**(undefined4 **)(param_1 + 0xac);
    FUN_100012d8(pbVar1,param_2,*pbVar1 + 1);
  }
  return;
}



// Function: FUN_100cf218 at 100cf218
// Size: 56 bytes

void FUN_100cf218(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  return;
}



// Function: FUN_100cf250 at 100cf250
// Size: 176 bytes

void FUN_100cf250(int *param_1,byte *param_2,char param_3)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
  if (-1 < (int)((*param_2 - 1) + (uint)(*param_2 != 0))) {
    FUN_100b1c84(param_2);
    iVar1 = FUN_10001ae8();
    param_1[0x2b] = iVar1;
    iVar1 = FUN_10002b20();
    if (iVar1 != 0) {
      param_1[0x2b] = 0;
    }
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100cf300 at 100cf300
// Size: 204 bytes

void FUN_100cf300(int *param_1,short param_2,undefined2 param_3,char param_4)

{
  undefined1 local_118 [260];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
  *(short *)(param_1 + 0x2a) = param_2;
  *(undefined2 *)((int)param_1 + 0xaa) = param_3;
  if (param_2 != -1) {
    local_118[0] = 0;
    FUN_100009d8(local_118,(int)*(short *)(param_1 + 0x2a),(int)*(short *)((int)param_1 + 0xaa));
    FUN_100db328();
    FUN_10117884((int)*(short *)(*param_1 + 0x7b0) + (int)param_1,local_118,0);
  }
  if (param_4 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100cf3d4 at 100cf3d4
// Size: 244 bytes

void FUN_100cf3d4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [312];
  
  FUN_1010556c(auStack_148,param_1);
  piVar1 = (int *)FUN_10105660(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    if (piVar1[6] == param_2) {
      FUN_10117884((int)*(short *)(*piVar1 + 200) + (int)piVar1,0x1f,param_1,0);
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),0x20,param_1,0);
    }
    piVar1 = (int *)FUN_10105684(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  *(int *)(param_1 + 0xb0) = param_2;
  FUN_101055f4(auStack_148,2);
  return;
}



// Function: FUN_100cf4d0 at 100cf4d0
// Size: 40 bytes

void FUN_100cf4d0(void)

{
  FUN_100cda40(0);
  return;
}



// Function: FUN_100cf4f8 at 100cf4f8
// Size: 260 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cf4f8(int *param_1)

{
  int iVar1;
  short in_r9;
  undefined1 in_r10;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100c6c0c(param_1);
  *(undefined1 *)(param_1 + 0x2a) = in_r10;
  *(undefined1 *)((int)param_1 + 0xa9) = in_r10;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,(int)in_r9,0);
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),0);
  return;
}



// Function: FUN_100cf5fc at 100cf5fc
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100cf5fc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10105d2c(param_1);
  piVar1[0x2b] = 0;
  *(undefined1 *)((int)piVar1 + 0xa9) = 1;
  *(undefined1 *)(piVar1 + 0x2a) = 1;
  *(undefined2 *)((int)piVar1 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar2 = FUN_10000090(auStack_12c);
    if (iVar2 == 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7a8),(int)*(short *)(param_1 + 0xaa),0)
      ;
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return piVar1;
}



// Function: FUN_100cf70c at 100cf70c
// Size: 76 bytes

void FUN_100cf70c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100cf764 at 100cf764
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cf764(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar3;
  undefined4 uVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)(param_1 + 0x2a) = uVar3;
    *(undefined1 *)((int)param_1 + 0xa9) = uVar3;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,uVar2,0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100cf870 at 100cf870
// Size: 116 bytes

void FUN_100cf870(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xaa));
  return;
}



// Function: FUN_100cf8e4 at 100cf8e4
// Size: 508 bytes

void FUN_100cf8e4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_a4;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar1 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10000030();
      FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,auStack_78);
      FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,auStack_78,auStack_68);
      uVar2 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10002598(param_1[0x2b]);
      if (*(char *)((int)param_1 + 0xa9) == '\0') {
        uVar3 = FUN_100b0578(auStack_68);
        FUN_10001b90(uVar3,param_1[0x2b]);
      }
      else {
        puVar5 = *(undefined4 **)param_1[0x2b];
        local_58 = *puVar5;
        uStack_54 = puVar5[1];
        local_50 = puVar5[2];
        local_4c = puVar5[3];
        uStack_48 = puVar5[4];
        uStack_44 = puVar5[5];
        uStack_40 = puVar5[6];
        local_3c = puVar5[7];
        uStack_38 = puVar5[8];
        uStack_34 = puVar5[9];
        uStack_30 = puVar5[10];
        uStack_2c = puVar5[0xb];
        uStack_28 = puVar5[0xc] & 0xffff0000;
        FUN_10002598(*(undefined4 *)(*(int *)param_1[0x2b] + 0x4e));
        local_58 = **(undefined4 **)(*(int *)param_1[0x2b] + 0x4e);
        local_80 = CONCAT22((short)uStack_54,local_50._0_2_);
        uStack_7c = CONCAT22((short)local_50,local_4c._0_2_);
        local_60 = local_80;
        local_5c = uStack_7c;
        uVar3 = FUN_100b0578(auStack_68);
        uVar4 = FUN_100b0578(&local_80);
        FUN_100008d0(&local_58,*(int *)(*(int *)(local_a4 + -0xb0) + 0xca) + 2,uVar4,uVar3,0,0);
        FUN_10002ad8(*(undefined4 *)(*(int *)param_1[0x2b] + 0x4e));
      }
      FUN_10001b60(param_1[0x2b],uVar2);
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100cfae0 at 100cfae0
// Size: 112 bytes

void FUN_100cfae0(int param_1)

{
  *(undefined2 *)(param_1 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      FUN_10001f50(*(undefined4 *)(param_1 + 0xac));
    }
    else {
      FUN_10001f38(*(undefined4 *)(param_1 + 0xac));
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// Function: FUN_100cfb50 at 100cfb50
// Size: 212 bytes

void FUN_100cfb50(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined2 local_118 [2];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [256];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10000b70(param_2);
  FUN_100db328();
  iVar1 = FUN_10001c20(param_2);
  iVar2 = -iVar1 + 0x80;
  *(char *)(param_1 + 0x2a) = (char)iVar2 + (-(iVar2 == 0) - ((char)-iVar1 + '\x7f'));
  param_1[0x2b] = param_2;
  FUN_10001758(param_2,local_118,auStack_114,auStack_110);
  iVar1 = FUN_10000678();
  if (iVar1 == 0) {
    *(undefined2 *)((int)param_1 + 0xaa) = local_118[0];
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100cfc24 at 100cfc24
// Size: 300 bytes

void FUN_100cfc24(int *param_1,short param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)((int)param_1 + 0xaa) = param_2;
  if (param_2 != -1) {
    if ((*(char *)(param_1 + 0x2a) != '\0') &&
       (iVar1 = FUN_10001728(0x6369636e,(int)*(short *)((int)param_1 + 0xaa)), iVar1 != 0)) {
      uVar2 = FUN_10000360(iVar1);
      FUN_10000048(iVar1);
      iVar3 = FUN_10001f68((int)*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar3;
      FUN_10001b60(iVar1,uVar2);
    }
    if (param_1[0x2b] == 0) {
      iVar1 = FUN_10001f80((int)*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar1;
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_1 + 0xa9) = 0;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0xa9) = 1;
    }
    FUN_100db2a4(param_1[0x2b]);
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100cfd68 at 100cfd68
// Size: 40 bytes

void FUN_100cfd68(void)

{
  FUN_100cdad4(0);
  return;
}



// Function: FUN_100cfd90 at 100cfd90
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100cfd90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10105d2c(param_1);
  *(undefined2 *)(piVar1 + 0x2a) = 0xffff;
  piVar1[0x2b] = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar2 = FUN_10000090(auStack_12c);
    if (iVar2 == 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7a0),(int)*(short *)(param_1 + 0xa8),0)
      ;
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return piVar1;
}



// Function: FUN_100cfe98 at 100cfe98
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cfe98(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,uVar2,0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100cff84 at 100cff84
// Size: 88 bytes

void FUN_100cff84(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xa8));
  return;
}



// Function: FUN_100cffdc at 100cffdc
// Size: 356 bytes

void FUN_100cffdc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 auStack_46 [10];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [20];
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar1 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_34);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_34,auStack_3c);
      uVar2 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      local_4c = *(undefined4 *)param_1[0x2b];
      local_48 = 2;
      FUN_10003108(auStack_46,0,0,0x10,0x10);
      FUN_10000660(&local_50);
      uVar3 = FUN_100b0578(auStack_3c);
      FUN_100008d0(&local_4c,local_50 + 2,auStack_46,uVar3,0,0);
      FUN_10001b60(param_1[0x2b],uVar2);
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100d0140 at 100d0140
// Size: 84 bytes

void FUN_100d0140(int param_1)

{
  *(undefined2 *)(param_1 + 0xa8) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10001f50(*(undefined4 *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// Function: FUN_100d0194 at 100d0194
// Size: 148 bytes

void FUN_100d0194(int *param_1,short param_2,char param_3)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)(param_1 + 0x2a) = param_2;
  if (param_2 != -1) {
    iVar1 = FUN_10001728(0x5349434e,(int)param_2);
    param_1[0x2b] = iVar1;
    FUN_100db2a4();
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d0230 at 100d0230
// Size: 40 bytes

void FUN_100d0230(void)

{
  FUN_100cddf4(0);
  return;
}



// Function: FUN_100d0258 at 100d0258
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100d0258(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10105d2c(param_1);
  piVar1[0x2b] = 0;
  *(undefined1 *)(piVar1 + 0x2a) = 1;
  *(undefined1 *)((int)piVar1 + 0xa9) = 1;
  *(undefined2 *)((int)piVar1 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar2 = FUN_10000090(auStack_12c);
    if (iVar2 == 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7a8),(int)*(short *)(param_1 + 0xaa),0)
      ;
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return piVar1;
}



// Function: FUN_100d0368 at 100d0368
// Size: 76 bytes

void FUN_100d0368(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100d03c0 at 100d03c0
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d03c0(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar3;
  undefined4 uVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)(param_1 + 0x2a) = uVar3;
    *(undefined1 *)((int)param_1 + 0xa9) = uVar3;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,uVar2,0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100d04cc at 100d04cc
// Size: 116 bytes

void FUN_100d04cc(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xaa));
  return;
}



// Function: FUN_100d0540 at 100d0540
// Size: 332 bytes

void FUN_100d0540(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_100ef2f8(param_1[0x2b]);
    if ((iVar1 != 0) && (*(char *)((int)param_1 + 0xa9) == '\0')) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10000030();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_18);
      iVar1 = FUN_100efab0(param_1[0x2b]);
      if (iVar1 == 0) {
        FUN_10002598(param_1[0x2b]);
      }
      if (*(char *)((int)param_1 + 0xa9) == '\0') {
        uVar2 = FUN_100b0578(auStack_18);
        FUN_10000af8(uVar2,*(undefined4 *)param_1[0x2b]);
      }
      else {
        uVar2 = FUN_100b0578(auStack_18);
        FUN_10000ae0(uVar2,param_1[0x2b]);
      }
      if (iVar1 == 0) {
        FUN_10002ad8(param_1[0x2b]);
      }
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100d068c at 100d068c
// Size: 112 bytes

void FUN_100d068c(int param_1)

{
  *(undefined2 *)(param_1 + 0xaa) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      FUN_10001f50(*(undefined4 *)(param_1 + 0xac));
    }
    else {
      FUN_10002da8(*(undefined4 *)(param_1 + 0xac));
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// Function: FUN_100d06fc at 100d06fc
// Size: 172 bytes

void FUN_100d06fc(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 local_118 [2];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [256];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  param_1[0x2b] = param_2;
  if (*(char *)((int)param_1 + 0xa9) == '\0') {
    FUN_10001758(param_2,local_118,auStack_114,auStack_110);
    iVar1 = FUN_10000678();
    if (iVar1 == 0) {
      *(undefined2 *)((int)param_1 + 0xaa) = local_118[0];
    }
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d07a8 at 100d07a8
// Size: 220 bytes

void FUN_100d07a8(int *param_1,short param_2,char param_3)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)((int)param_1 + 0xaa) = param_2;
  if (param_2 != -1) {
    if (*(char *)(param_1 + 0x2a) != '\0') {
      iVar1 = FUN_10002208((int)*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar1;
    }
    if (param_1[0x2b] == 0) {
      iVar1 = FUN_100025e0((int)*(short *)((int)param_1 + 0xaa));
      param_1[0x2b] = iVar1;
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_1 + 0xa9) = 0;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0xa9) = 1;
    }
    FUN_100db2a4(param_1[0x2b]);
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d089c at 100d089c
// Size: 40 bytes

void FUN_100d089c(void)

{
  FUN_100cdb5c(0);
  return;
}



// Function: FUN_100d08c4 at 100d08c4
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d08c4(int *param_1)

{
  int iVar1;
  short in_r9;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c6c0c(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,(int)in_r9,0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),0);
  return;
}



// Function: FUN_100d09bc at 100d09bc
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100d09bc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10105d2c(param_1);
  *(undefined2 *)(piVar1 + 0x2a) = 0xffff;
  piVar1[0x2b] = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar2 = FUN_10000090(auStack_12c);
    if (iVar2 == 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7a8),(int)*(short *)(param_1 + 0xa8),0)
      ;
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return piVar1;
}



// Function: FUN_100d0ab8 at 100d0ab8
// Size: 76 bytes

void FUN_100d0ab8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100d0b10 at 100d0b10
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d0b10(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c6c9c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x7a8) + (int)param_1,uVar2,0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100d0bfc at 100d0bfc
// Size: 88 bytes

void FUN_100d0bfc(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xa8));
  return;
}



// Function: FUN_100d0c54 at 100d0c54
// Size: 272 bytes

void FUN_100d0c54(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar1 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_30);
      uVar2 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10000030();
      uVar3 = FUN_100b0578(auStack_30);
      FUN_10000750(param_1[0x2b],uVar3);
      FUN_10001b60(param_1[0x2b],uVar2);
    }
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100d0d64 at 100d0d64
// Size: 84 bytes

void FUN_100d0d64(int param_1)

{
  *(undefined2 *)(param_1 + 0xa8) = 0xffff;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10001f50(*(undefined4 *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// Function: FUN_100d0db8 at 100d0db8
// Size: 160 bytes

void FUN_100d0db8(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 local_118 [2];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [256];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  param_1[0x2b] = param_2;
  FUN_10001758(param_2,local_118,auStack_114,auStack_110);
  iVar1 = FUN_10000678();
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x2a) = local_118[0];
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d0e58 at 100d0e58
// Size: 140 bytes

void FUN_100d0e58(int *param_1,short param_2,char param_3)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(short *)(param_1 + 0x2a) = param_2;
  if (param_2 != -1) {
    iVar1 = FUN_10000720((int)param_2);
    param_1[0x2b] = iVar1;
    FUN_100db2a4();
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d0eec at 100d0eec
// Size: 116 bytes

undefined4 * FUN_100d0eec(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xe0), param_1 != (undefined4 *)0x0)) {
    FUN_100fff20(param_1);
    *param_1 = 0x4186000c;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  return param_1;
}



// Function: FUN_100d0f60 at 100d0f60
// Size: 40 bytes

void FUN_100d0f60(void)

{
  FUN_100d0eec(0);
  return;
}



// Function: FUN_100d0f88 at 100d0f88
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d0f88(int *param_1)

{
  int iVar1;
  int *local_260;
  undefined1 auStack_25c [256];
  short local_15c;
  undefined4 local_158;
  undefined1 *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_260 = (int *)0x0;
  FUN_101001e0(param_1);
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = _DAT_41820010;
  _DAT_41820010 = auStack_144;
  iVar1 = FUN_10000090(auStack_144);
  if (iVar1 == 0) {
    local_260 = (int *)FUN_100f6b8c(0);
    FUN_100f6c9c(local_260,0,&DAT_41820018,&DAT_41820018,1,1,&DAT_41820018);
    local_15c = 0;
    local_158 = 0;
    local_150 = 0;
    local_14c = 0;
    local_154 = _DAT_41820010;
    _DAT_41820010 = auStack_25c;
    iVar1 = FUN_10000090(auStack_25c);
    if (iVar1 == 0) {
      FUN_10117884((int)local_260 + (int)*(short *)(*local_260 + 0x2e0),param_1);
    }
    else {
      local_260 = (int *)FUN_100f57c8(local_260);
      FUN_100db158((int)local_15c,local_158);
    }
    _DAT_41820010 = local_3c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_44,local_40);
  }
  param_1[0x37] = (int)local_260;
  FUN_10000540(2,0,param_1[0x20]);
  return;
}



// Function: FUN_100d1144 at 100d1144
// Size: 384 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100d1144(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_130 = FUN_1010037c(param_1);
  *(undefined4 *)(local_130 + 0xd8) = 0;
  *(undefined4 *)(local_130 + 0xdc) = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      piVar3 = *(int **)(*(int *)(param_1 + 0xdc) + 0x24);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x180),param_1);
      uVar2 = FUN_10117884((int)*(int **)(param_1 + 0xdc) +
                           (int)*(short *)(**(int **)(param_1 + 0xdc) + 0x88));
      *(undefined4 *)(local_130 + 0xdc) = uVar2;
      FUN_10117884((int)*(int **)(local_130 + 0xdc) +
                   (int)*(short *)(**(int **)(local_130 + 0xdc) + 0x2e0),local_130);
      piVar3 = *(int **)(*(int *)(local_130 + 0xdc) + 0x24);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x150),local_130);
      piVar3 = *(int **)(*(int *)(param_1 + 0xdc) + 0x24);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x150),param_1);
    }
    _DAT_41820010 = local_24;
  }
  else {
    local_130 = FUN_100f57c8(local_130);
    FUN_100db158((int)local_2c,local_28);
  }
  return local_130;
}



// Function: FUN_100d12c4 at 100d12c4
// Size: 108 bytes

void FUN_100d12c4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xdc);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x2e8) + (int)piVar2,param_1);
    uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
  }
  FUN_101008dc(param_1);
  return;
}



// Function: FUN_100d1330 at 100d1330
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d1330(int *param_1)

{
  int iVar1;
  int *local_134;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_1010099c(param_1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    local_134 = (int *)FUN_100f6b8c(0);
    FUN_100f6c9c(local_134,0,&DAT_41820018,&DAT_41820018,1,1,&DAT_41820018);
    FUN_10117884((int)local_134 + (int)*(short *)(*local_134 + 0x2e0),param_1);
    _DAT_41820010 = local_28;
  }
  else {
    local_134 = (int *)FUN_100f57c8(0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  param_1[0x37] = (int)local_134;
  FUN_10000540(2,0,param_1[0x20]);
  return;
}



// Function: FUN_100d1470 at 100d1470
// Size: 36 bytes

void FUN_100d1470(void)

{
  FUN_10100bf8();
  return;
}



// Function: FUN_100d1494 at 100d1494
// Size: 848 bytes

void FUN_100d1494(int *param_1,int *param_2,char param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined **local_16c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined1 auStack_128 [16];
  undefined1 local_118 [256];
  
  local_118[0] = 0;
  piVar6 = (int *)param_1[0x36];
  ppuVar1 = &.TVect::OCECToRString;
  if (piVar6 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar6 + 0x2e8) + (int)piVar6,param_1[0x37]);
    param_1[0x36] = 0;
    ppuVar1 = local_16c;
  }
  if (param_2 != (int *)0x0) {
    *(undefined1 *)((int)param_1 + 0xbe) = *(undefined1 *)((int)param_2 + 0xa6);
    param_1[0x33] = param_2[0x2f];
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x2d);
    piVar6 = (int *)ppuVar1[-0x319];
    iVar3 = piVar6[1];
    iVar4 = piVar6[2];
    iVar5 = piVar6[3];
    param_1[0x23] = *piVar6;
    param_1[0x24] = iVar3;
    param_1[0x25] = iVar4;
    param_1[0x26] = iVar5;
    FUN_10117884((int)*(short *)(*param_2 + 0x4c0) + (int)param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x800),(int)*(short *)(param_2 + 0x2c),0)
    ;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),
                 *(undefined1 *)((int)param_2 + 0xb2),0);
    local_148 = param_2[0x26];
    iStack_144 = param_2[0x27];
    iStack_140 = param_2[0x28];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x808),0,0,0xf,&local_148,0);
    FUN_10117884((int)*(short *)(*param_2 + 0x730) + (int)param_2,auStack_128);
    if (*(char *)(param_1 + 0x31) == '\0') {
      *(undefined1 *)((int)param_1 + 0x45) = 4;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
      *(undefined1 *)(param_1 + 0x11) = 4;
    }
    FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x350),auStack_128,0);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x7a0),local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810),local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    *(undefined4 *)(param_1[0x37] + 0x40) = 0;
    iVar3 = FUN_100ef628((int)*(short *)(param_1 + 0x30));
    if (iVar3 + 2U < 4) {
      return;
    }
    if (param_3 == '\0') {
      FUN_101000e4(0,0,param_1[0x20]);
    }
    else {
      FUN_101000e4(0,0x7fff,param_1[0x20]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x338),param_1[0x37]);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2e0),param_1[0x37]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),0);
    iVar3 = *param_1;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),
                         *(undefined4 *)(*param_2 + 0xe4));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0xd8),uVar2);
    piVar6 = (int *)param_1[0x37];
    iVar3 = *piVar6;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),
                         *(undefined4 *)(*param_2 + 0xe4));
    FUN_10117884((int)piVar6 + (int)*(short *)(iVar3 + 0xd8),uVar2);
  }
  param_1[0x36] = (int)param_2;
  return;
}



// Function: FUN_100d19f8 at 100d19f8
// Size: 144 bytes

undefined4 FUN_100d19f8(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1[0x36] == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x218),0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x228));
    uVar1 = FUN_10117884(param_1[0x36] + (int)*(short *)(*(int *)param_1[0x36] + 0x688));
  }
  return uVar1;
}



// Function: FUN_100d1a88 at 100d1a88
// Size: 296 bytes

void FUN_100d1a88(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar1 = &local_28;
  piVar2 = &local_24;
  FUN_101016c0(param_1,param_2);
  if (*(char *)(param_1 + 0xc4) == '\0') {
    if ((*(char *)(param_1 + 0x45) == '\x04') && (*(char *)(param_1 + 0xc3) == '\0')) {
      local_1c = *(int *)(*(int *)(param_1 + 0xdc) + 0x38);
      local_24 = FUN_100e1a3c(param_2,1);
      if (local_24 < local_1c) {
        piVar2 = &local_1c;
      }
      param_2[3] = param_2[1] + *piVar2;
    }
  }
  else if ((*(char *)(param_1 + 0x44) == '\x04') && (*(char *)(param_1 + 0xc3) == '\0')) {
    local_20 = *(int *)(*(int *)(param_1 + 0xdc) + 0x34);
    local_28 = FUN_100e1a3c(param_2,0);
    if (local_28 < local_20) {
      piVar1 = &local_20;
    }
    param_2[2] = *param_2 + *piVar1;
  }
  return;
}



// Function: FUN_100d1bb8 at 100d1bb8
// Size: 40 bytes

void FUN_100d1bb8(void)

{
  FUN_100cdbe4(0);
  return;
}



// Function: FUN_100d1be0 at 100d1be0
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100d1be0(int param_1)

{
  int iVar1;
  int local_138;
  int *local_134;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_134 = (int *)FUN_10105d2c(param_1);
  local_134[0x2b] = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    local_138 = *(int *)(param_1 + 0xac);
    if (local_138 != 0) {
      FUN_100f16a0(&local_138);
    }
    local_134[0x2b] = local_138;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)local_134 + (int)*(short *)(*local_134 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return local_134;
}



// Function: FUN_100d1cc8 at 100d1cc8
// Size: 76 bytes

void FUN_100d1cc8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100d1d20 at 100d1d20
// Size: 464 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d1d20(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar5;
  undefined2 uVar4;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte *pbVar6;
  int local_25c;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100c6c9c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    uVar5 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0xb2) = uVar5;
    uVar5 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0xb3) = uVar5;
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(undefined2 *)(param_1 + 0x2c) = uVar4;
    pbVar6 = *(byte **)(local_25c + -0xe4c);
    puVar2 = auStack_238;
    if ((auStack_238 != (undefined1 *)0x0) ||
       (puVar2 = (undefined1 *)FUN_100f56e4(0x100), puVar2 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar6,puVar2,*pbVar6 + 1);
    }
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x2a) = uVar4;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xaa) = (short)uVar3;
    if (*(short *)(param_1 + 0x2a) != -1) {
      FUN_100009d8(auStack_238,(int)*(short *)(param_1 + 0x2a),uVar3);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),auStack_238,0);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100d1ef0 at 100d1ef0
// Size: 200 bytes

void FUN_100d1ef0(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xb2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xb3));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xb0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xaa));
  return;
}



// Function: FUN_100d1fb8 at 100d1fb8
// Size: 76 bytes

void FUN_100d1fb8(int *param_1,undefined1 param_2,char param_3)

{
  *(undefined1 *)((int)param_1 + 0xb2) = param_2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d2004 at 100d2004
// Size: 40 bytes

void FUN_100d2004(undefined4 param_1,undefined4 param_2)

{
  FUN_100ce568(param_2);
  return;
}



// Function: FUN_100d202c at 100d202c
// Size: 212 bytes

void FUN_100d202c(int *param_1,undefined4 param_2)

{
  undefined1 auStack_120 [16];
  undefined1 local_110;
  undefined1 auStack_10f [255];
  
  if (param_1[0x2b] != 0) {
    local_110 = 0;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),&local_110);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),&local_110);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_120);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8),auStack_10f,local_110,auStack_120,
                 (int)*(short *)(param_1 + 0x2c));
  }
  FUN_101088b0(param_1,param_2);
  return;
}



// Function: FUN_100d2100 at 100d2100
// Size: 100 bytes

void FUN_100d2100(int param_1,undefined4 param_2)

{
  if (*(undefined4 **)(param_1 + 0xac) == (undefined4 *)0x0) {
    FUN_100012d8(&DAT_7c0803a6,param_2,DAT_7c0803a6 + 1);
  }
  else {
    FUN_100ef284(**(undefined4 **)(param_1 + 0xac),param_2);
  }
  return;
}



// Function: FUN_100d2164 at 100d2164
// Size: 136 bytes

void FUN_100d2164(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 short param_5)

{
  undefined1 auStack_1c [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_4,auStack_1c);
  FUN_100efdd0(param_2,param_3,auStack_1c,(int)param_5,*(undefined1 *)((int)param_1 + 0xb2),0,
               *(undefined1 *)((int)param_1 + 0xb3),1);
  return;
}



// Function: FUN_100d21ec at 100d21ec
// Size: 56 bytes

void FUN_100d21ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  return;
}



// Function: FUN_100d2224 at 100d2224
// Size: 76 bytes

void FUN_100d2224(int *param_1,undefined2 param_2,char param_3)

{
  *(undefined2 *)(param_1 + 0x2c) = param_2;
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d2270 at 100d2270
// Size: 320 bytes

void FUN_100d2270(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  if (((undefined4 *)param_1[0x2b] == (undefined4 *)0x0) ||
     (iVar1 = FUN_100ef228(param_2,*(undefined4 *)param_1[0x2b]), iVar1 != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
    FUN_100b1c84(param_2);
    iVar1 = FUN_10001ae8();
    param_1[0x2b] = iVar1;
    iVar1 = FUN_10002b20();
    if (iVar1 != 0) {
      param_1[0x2b] = 0;
    }
    if ((param_3 != '\0') &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x678)), iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_30);
      FUN_100b0578(auStack_30);
      FUN_10002c58();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_28);
    }
  }
  return;
}



// Function: FUN_100d23b0 at 100d23b0
// Size: 204 bytes

void FUN_100d23b0(int *param_1,short param_2,undefined2 param_3,char param_4)

{
  undefined1 local_118 [260];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  *(short *)(param_1 + 0x2a) = param_2;
  *(undefined2 *)((int)param_1 + 0xaa) = param_3;
  if (param_2 != -1) {
    local_118[0] = 0;
    FUN_100009d8(local_118,(int)*(short *)(param_1 + 0x2a),(int)*(short *)((int)param_1 + 0xaa));
    FUN_100db328();
    FUN_10117884((int)*(short *)(*param_1 + 0x7c8) + (int)param_1,local_118,0);
  }
  if (param_4 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100d2484 at 100d2484
// Size: 40 bytes

void FUN_100d2484(void)

{
  FUN_100cdc88(0);
  return;
}



// Function: FUN_100d24ac at 100d24ac
// Size: 76 bytes

void FUN_100d24ac(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810));
  FUN_100d1cc8(param_1);
  return;
}



// Function: FUN_100d2504 at 100d2504
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d2504(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100d1d20(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(undefined2 *)(param_1 + 0x2d) = uVar2;
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x2f] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100d25ec at 100d25ec
// Size: 116 bytes

void FUN_100d25ec(int param_1,int *param_2)

{
  FUN_100d1ef0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xb4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0xbc));
  return;
}



// Function: FUN_100d2660 at 100d2660
// Size: 36 bytes

void FUN_100d2660(void)

{
  FUN_10109a5c();
  return;
}



// Function: FUN_100d2684 at 100d2684
// Size: 116 bytes

bool FUN_100d2684(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  iVar1 = FUN_1010a9cc(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_1[0x20],param_1,0);
  }
  return iVar1 != 0;
}



// Function: FUN_100d26f8 at 100d26f8
// Size: 92 bytes

void FUN_100d26f8(int *param_1)

{
  if (param_1[0x2e] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x808) + (int)param_1,0);
  }
  FUN_100d95c4(param_1);
  return;
}



// Function: FUN_100d2754 at 100d2754
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d2754(int *param_1)

{
  if (param_1[0x2e] == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x808),0);
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),param_1[0x2e]);
  }
  else {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338));
  }
  FUN_100d95c8(param_1);
  return;
}



// Function: FUN_100d27f4 at 100d27f4
// Size: 104 bytes

void FUN_100d27f4(int *param_1,undefined1 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),0,0x7fff,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0));
  return;
}



// Function: FUN_100d285c at 100d285c
// Size: 228 bytes

void FUN_100d285c(int *param_1,int param_2)

{
  byte *pbVar1;
  undefined1 local_110 [260];
  
  if (param_2 != 0) {
    local_110[0] = 0;
    if (param_2 != -1) {
      if ((param_2 < 1) || (5 < param_2)) {
        param_2 = 1;
      }
      FUN_100009d8(local_110,300,(int)(short)param_2);
      FUN_100009f0(local_110,&DAT_7c0803a6,&DAT_7c0803a6,&DAT_7c0803a6);
      FUN_100d8e3c(300);
    }
    if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
      pbVar1 = *(byte **)param_1[0x2b];
      FUN_100012d8(pbVar1,local_110,*pbVar1 + 1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),local_110);
    }
  }
  return;
}



// Function: FUN_100d2940 at 100d2940
// Size: 112 bytes

void FUN_100d2940(int param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  
  FUN_100d1fb8(param_1,param_2,param_3);
  piVar1 = *(int **)(param_1 + 0xb8);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7d8),param_2,param_3);
  }
  return;
}



// Function: FUN_100d29b0 at 100d29b0
// Size: 208 bytes

bool FUN_100d29b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x2e];
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x218),0);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x228));
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x688));
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x6a0));
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x800) + (int)param_1);
  }
  return iVar1 == 0;
}



// Function: FUN_100d2a84 at 100d2a84
// Size: 192 bytes

void FUN_100d2a84(int param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_18;
  int local_14;
  
  piVar2 = &local_18;
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_100d2100(param_1,param_2);
  }
  else {
    puVar1 = (undefined4 *)
             FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                          (int)*(short *)(**(int **)(param_1 + 0xb8) + 0x7f0));
    local_14 = 0xff;
    local_18 = FUN_10001c20(puVar1);
    if (local_14 < local_18) {
      piVar2 = &local_14;
    }
    *param_2 = (char)*piVar2;
    FUN_10002340(*puVar1,param_2 + 1);
  }
  return;
}



// Function: FUN_100d2b44 at 100d2b44
// Size: 148 bytes

void FUN_100d2b44(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,short param_5)

{
  undefined1 auStack_1c [8];
  
  if (-1 < param_3) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_4,auStack_1c);
    FUN_100efdd0(param_2,param_3,auStack_1c,(int)param_5,*(undefined1 *)((int)param_1 + 0xb2),0,
                 *(undefined1 *)((int)param_1 + 0xb3),1);
  }
  return;
}



// Function: FUN_100d2bd8 at 100d2bd8
// Size: 220 bytes

void FUN_100d2bd8(int *param_1,undefined1 param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **local_34;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (param_1[0x2e] == 0) {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x818) + (int)param_1);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x838),param_1,param_2);
    param_1[0x2e] = (int)piVar2;
    ppuVar1 = local_34;
  }
  if (*(char *)((int)param_1 + 0x85) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*(undefined4 *)ppuVar1[-0x3b],0);
    ppuVar1 = local_34;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f8),*(undefined4 *)ppuVar1[-0x38],0);
  }
  return;
}



// Function: FUN_100d2cb4 at 100d2cb4
// Size: 36 bytes

void FUN_100d2cb4(void)

{
  FUN_100ce4c8();
  return;
}



// Function: FUN_100d2cd8 at 100d2cd8
// Size: 60 bytes

void FUN_100d2cd8(int param_1)

{
  FUN_100ce518(*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}



// Function: FUN_100d2d14 at 100d2d14
// Size: 276 bytes

void FUN_100d2d14(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_50;
  int local_4c [3];
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  
  piVar3 = &local_50;
  piVar2 = local_4c + 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_30);
  local_38 = 0xfffffff6;
  local_34 = 0xfffffff6;
  FUN_100e16b8(auStack_30,&local_38);
  local_4c[2] = FUN_100e1a3c(auStack_30,1);
  local_4c[1] = 30000;
  if (local_4c[2] < 30000) {
    piVar2 = local_4c + 2;
  }
  iVar1 = *piVar2;
  local_4c[0] = FUN_100e1a3c(auStack_30,0);
  local_50 = 30000;
  if (local_4c[0] < 30000) {
    piVar3 = local_4c;
  }
  local_40 = *piVar3;
  local_3c = iVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_30,&local_40,1);
  return;
}



// Function: FUN_100d2e28 at 100d2e28
// Size: 216 bytes

void FUN_100d2e28(int *param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **local_2c;
  
  piVar2 = (int *)param_1[0x2e];
  ppuVar1 = &.TVect::OCECToRString;
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x838),0,0);
    FUN_10117884((int)*(short *)(*param_1 + 0x820) + (int)param_1);
    ppuVar1 = local_2c;
  }
  if (*(char *)((int)param_1 + 0x85) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*(undefined4 *)ppuVar1[-0x3b],0x75
                 ,0);
    ppuVar1 = local_2c;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,*(undefined4 *)ppuVar1[-0x38],0x7a
                 ,0);
  }
  return;
}



// Function: FUN_100d2f00 at 100d2f00
// Size: 356 bytes

void FUN_100d2f00(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int local_34;
  
  piVar2 = (int *)param_1[0x2e];
  if ((piVar2 != (int *)0x0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x3a8) + (int)piVar2), iVar1 != 0)) {
    FUN_100b0578(*(undefined4 *)(local_34 + -0xb00));
    FUN_10002040();
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x758),0);
    FUN_10117884((int)*(short *)(*param_1 + 0x7c8) + (int)param_1,param_2,0);
    FUN_10117884((int)*(short *)(*param_1 + 0x7e0) + (int)param_1,0,0x7fff,0);
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x758),1);
    FUN_10117884((int)*(short *)(*param_1 + 0x3b8) + (int)param_1);
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x4d0));
    return;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),param_2,0);
  return;
}



// Function: FUN_100d3064 at 100d3064
// Size: 112 bytes

void FUN_100d3064(int param_1,short param_2,undefined1 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x800),(int)param_2,param_3);
  }
  FUN_100d2224(param_1,(int)param_2,param_3);
  return;
}



// Function: FUN_100d30d4 at 100d30d4
// Size: 160 bytes

void FUN_100d30d4(int param_1,short param_2,short param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    if ((param_4 == '\0') ||
       (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                             (int)*(short *)(**(int **)(param_1 + 0xb8) + 0x678)), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                 (int)*(short *)(**(int **)(param_1 + 0xb8) + 0x7c0),(int)param_2,(int)param_3,uVar2
                );
  }
  return;
}



// Function: FUN_100d3174 at 100d3174
// Size: 568 bytes

void FUN_100d3174(int *param_1,byte *param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [16];
  undefined1 local_220 [256];
  byte local_120 [256];
  
  pbVar1 = local_120;
  if ((local_120 != (byte *)0x0) || (pbVar1 = (byte *)FUN_100f56e4(0x100), pbVar1 != (byte *)0x0)) {
    FUN_100012d8(param_2,pbVar1,*param_2 + 1);
  }
  if (*(short *)(param_1 + 0x2d) < (short)(ushort)local_120[0]) {
    local_120[0] = (byte)*(short *)(param_1 + 0x2d);
  }
  if (param_1[0x2e] == 0) {
    FUN_100d2270(param_1,local_120,param_3);
  }
  else {
    local_220[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_220);
    iVar2 = FUN_100ef228(local_220,local_120);
    if (iVar2 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
      FUN_100b1c84(local_120);
      iVar2 = FUN_10001ae8();
      param_1[0x2b] = iVar2;
      iVar2 = FUN_10002b20();
      if (iVar2 != 0) {
        param_1[0x2b] = 0;
      }
      FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x810),local_120);
      FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x7f8));
      FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x770),0);
      if ((param_3 != '\0') &&
         (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x678) + (int)param_1), iVar2 != 0)) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_230);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_230,auStack_238);
        FUN_100b0578(auStack_238);
        FUN_10002c58();
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_230);
      }
    }
  }
  return;
}



// Function: FUN_100d33ac at 100d33ac
// Size: 104 bytes

void FUN_100d33ac(int *param_1,char param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x180));
  if (param_2 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 400) + (int)param_1,1);
  }
  return;
}



// Function: FUN_100d3414 at 100d3414
// Size: 196 bytes

void FUN_100d3414(int *param_1)

{
  undefined1 local_110 [260];
  
  if (param_1[0x2e] != 0) {
    local_110[0] = 0;
    FUN_10117884(param_1[0x2e] + (int)*(short *)(*(int *)param_1[0x2e] + 0x758),0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_110);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),local_110,0);
  }
  return;
}



// Function: FUN_100d34d8 at 100d34d8
// Size: 120 bytes

int FUN_100d34d8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_1010c908(param_1);
  if (((iVar1 == 0) && (piVar3 = *(int **)(param_1 + 0xb8), piVar3 != (int *)0x0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 2000) + (int)piVar3),
     *(short *)(param_1 + 0xb4) < iVar2)) {
    iVar1 = 5;
  }
  return iVar1;
}



// Function: FUN_100d3550 at 100d3550
// Size: 104 bytes

undefined4 FUN_100d3550(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)((int)param_1 + 0x53) == '\0') || (param_1[0x2e] != 0)) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100d35b8 at 100d35b8
// Size: 36 bytes

void FUN_100d35b8(void)

{
  FUN_100daf30();
  return;
}



// Function: FUN_100d35dc at 100d35dc
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d35dc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  if ((param_1 == iVar1) ||
     ((piVar2 = *(int **)(param_1 + 0xb8), piVar2 != (int *)0x0 &&
      (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x198) + (int)piVar2), iVar1 != 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// Function: FUN_100d3668 at 100d3668
// Size: 144 bytes

void FUN_100d3668(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,auStack_28);
  uVar1 = FUN_100b0578(auStack_28);
  FUN_10003150(param_3,uVar1);
  return;
}



// Function: FUN_100d3700 at 100d3700
// Size: 40 bytes

void FUN_100d3700(void)

{
  FUN_100cdd70(0);
  return;
}



// Function: FUN_100d3734 at 100d3734
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d3734(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100d2504(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x30] = iVar1;
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x31] = iVar1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),uVar2,0);
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100d3860 at 100d3860
// Size: 184 bytes

void FUN_100d3860(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_100d25ec(param_1,param_2);
  iVar2 = *param_2;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar2 + 0x198),uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x30]);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x31]);
  return;
}



// Function: FUN_100d3918 at 100d3918
// Size: 192 bytes

int FUN_100d3918(int *param_1)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_150 [48];
  undefined2 local_120;
  undefined2 local_11e;
  byte local_11c [268];
  
  local_11c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_11c);
  iVar1 = 0;
  if (-1 < (int)((local_11c[0] - 1) + (uint)(local_11c[0] != 0))) {
    FUN_100028e0(local_11c);
    local_11e = 0;
    local_120 = 0;
    FUN_100028f8(local_11c,&local_11e,auStack_150,&local_120);
    dVar2 = (double)FUN_10002190(auStack_150);
    iVar1 = (int)dVar2;
  }
  return iVar1;
}



// Function: FUN_100d39d8 at 100d39d8
// Size: 116 bytes

void FUN_100d39d8(int *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 local_110 [260];
  
  uVar1 = FUN_100f0334(param_1[0x30],param_2,param_1[0x31]);
  local_110[0] = 0;
  FUN_10000ac8(uVar1,local_110);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),local_110,param_3);
  return;
}



// Function: FUN_100d3a4c at 100d3a4c
// Size: 344 bytes

undefined4 FUN_100d3a4c(int *param_1)

{
  uint uVar1;
  double dVar2;
  int local_17c;
  undefined1 auStack_158 [2];
  short local_156;
  short local_128;
  short local_126;
  byte local_124 [268];
  
  local_124[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_124);
  uVar1 = (uint)local_124[0];
  if (-1 < (int)((uVar1 - 1) + (uint)(uVar1 != 0))) {
    FUN_100028e0(local_124);
    local_126 = 0;
    local_128 = 0;
    FUN_100028f8(local_124,&local_126,auStack_158,&local_128);
    if (((local_128 == 0) || (local_126 = local_126 + 1, (int)local_126 <= (int)uVar1)) ||
       (local_156 < 0)) {
      return 4;
    }
    dVar2 = (double)FUN_10002190(auStack_158);
    if (dVar2 < (double)CONCAT44(0x43300000,param_1[0x30] ^ 0x80000000) -
                *(double *)(*(int *)(local_17c + -0xb64) + 0x14c)) {
      return 2;
    }
    if ((double)CONCAT44(0x43300000,param_1[0x31] ^ 0x80000000) -
        *(double *)(*(int *)(local_17c + -0xb64) + 0x14c) < dVar2) {
      return 3;
    }
  }
  return 0;
}



// Function: FUN_100d3bac at 100d3bac
// Size: 40 bytes

void FUN_100d3bac(void)

{
  FUN_100cdf08(0);
  return;
}



// Function: FUN_100d3bd4 at 100d3bd4
// Size: 80 bytes

void FUN_100d3bd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_100f57c8(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100d3c24 at 100d3c24
// Size: 84 bytes

int FUN_100d3c24(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  }
  else {
    param_1[1] = 0;
  }
  return iVar1;
}



// Function: FUN_100d3c78 at 100d3c78
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100d3c78(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **local_3c;
  
  iVar2 = 0;
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_28030000 != 0) {
    iVar2 = FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 0xd0),0,0,300,
                         &DAT_41820018);
    ppuVar1 = local_3c;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_100d0eec(0);
    FUN_100d0f88(iVar2,0,0,&DAT_41820018,&DAT_41820018,1,4,ppuVar1[-0x319]);
  }
  *(undefined2 *)(iVar2 + 0xd0) = 1;
  return iVar2;
}



// Function: FUN_100d3d50 at 100d3d50
// Size: 60 bytes

void FUN_100d3d50(int param_1,undefined4 param_2)

{
  FUN_100f57c8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_100d3d94 at 100d3d94
// Size: 40 bytes

void FUN_100d3d94(void)

{
  FUN_100cde88(0);
  return;
}



// Function: FUN_100d3dc8 at 100d3dc8
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d3dc8(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_1010937c(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x138) + (int)param_2);
    param_1[0x20] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100d3e94 at 100d3e94
// Size: 88 bytes

void FUN_100d3e94(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 0x80));
  return;
}



// Function: FUN_100d3eec at 100d3eec
// Size: 288 bytes

void FUN_100d3eec(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0x1a) {
    if ((param_3 != 0) &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]),
       param_3 == iVar1)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x738) + (int)param_1);
    }
    FUN_100dafe8(param_1,0x1a,param_3,param_4);
  }
  else if (param_2 == 0x1b) {
    if ((param_3 != 0) &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]),
       param_3 == iVar1)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x738) + (int)param_1);
    }
    FUN_100dafe8(param_1,0x1b,param_3,param_4);
  }
  else {
    FUN_100dafe8(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100d400c at 100d400c
// Size: 172 bytes

void FUN_100d400c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1), iVar2 != 0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x180) + (int)piVar1);
  }
  FUN_1010a9cc(param_1,param_2,param_3,uStack00000024);
  return;
}



// Function: FUN_100d40b8 at 100d40b8
// Size: 228 bytes

void FUN_100d40b8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_138 [276];
  undefined4 local_24;
  undefined1 auStack_20 [12];
  
  FUN_100ee64c(auStack_138);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_20);
  uVar1 = FUN_100b0578(auStack_20);
  FUN_10003150(param_2,uVar1);
  uVar1 = FUN_100b0574(auStack_20);
  FUN_10003348(uVar1,2,2);
  uVar1 = local_24;
  uVar2 = FUN_100b0578(auStack_20);
  FUN_10003150(uVar1,uVar2);
  FUN_10000108(param_2,local_24,param_2);
  FUN_100ee77c(auStack_138,2);
  return;
}



// Function: FUN_100d419c at 100d419c
// Size: 128 bytes

void FUN_100d419c(int *param_1)

{
  undefined1 auStack_120 [276];
  undefined4 local_c;
  
  FUN_100ee64c(auStack_120);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),local_c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e8),local_c);
  FUN_100ee77c(auStack_120,2);
  return;
}



// Function: FUN_100d421c at 100d421c
// Size: 188 bytes

void FUN_100d421c(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_14c;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308),param_1[0x20]);
  iVar2 = FUN_10117884(**(int **)(local_14c + -0xedc) +
                       (int)*(short *)(*(int *)**(int **)(local_14c + -0xedc) + 0x340));
  if (iVar2 == iVar1) {
    FUN_100ee64c(auStack_128);
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,local_14);
    FUN_10000b58(local_14);
    FUN_100ee77c(auStack_128,2);
  }
  return;
}



// Function: FUN_100d42d8 at 100d42d8
// Size: 128 bytes

void FUN_100d42d8(int *param_1,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738));
  }
  FUN_1010b818(param_1,param_2,param_3);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x738) + (int)param_1);
  }
  return;
}



// Function: FUN_100d4358 at 100d4358
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4358(void)

{
  FUN_100c1c8c(0x40860018,_DAT_80bf0004,0x88,&DAT_80df0020,&DAT_80410014);
  FUN_100c1c8c(&DAT_2f060000,_DAT_7cc53014,0xb4,&DAT_90bf000c,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_39200001,_DAT_90bf0008,0xb0,&DAT_90df0010,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_39200000,_DAT_7f053040,0xb0,&DAT_41980024,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_38600000,_DAT_80ff0024,0xb0,0x81870014,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_419e0020,_DAT_a8670010,0xb0,&DAT_7c7f1814,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_2c840000,_DAT_57c4063e,0xe0,0x48000aa9,&DAT_80410014);
  FUN_100c1c8c(0x8187000c,_DAT_4800001c,0xb4,&DAT_809f000c,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_7c7f1814,_DAT_30a40001,0xc0,&DAT_90bf000c,0x8187000c);
  FUN_100c1c8c(&DAT_80410014,_DAT_7fc60774,200,0x98c40000,&DAT_7c7f1814);
  FUN_100c1c8c(0x4800005c,_DAT_54c3063e,8,&DAT_80010048,0x90c30020);
  FUN_100c1c8c(&DAT_4082000c,_DAT_30210040,0x84,&DAT_7c0803a6,&DAT_80410014);
  return;
}



// Function: FUN_100d450c at 100d450c
// Size: 8 bytes

undefined1 * FUN_100d450c(void)

{
  return &DAT_bbc1fff8;
}



// Function: FUN_100d451c at 100d451c
// Size: 124 bytes

undefined4 * FUN_100d451c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc4), param_1 != (undefined4 *)0x0)) {
    FUN_100c7d84(param_1);
    *param_1 = &DAT_4e800020;
    param_1[0x20] = 3;
    *(undefined2 *)(param_1 + 0x30) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xc2) = 0xffff;
  }
  return param_1;
}



// Function: FUN_100d4598 at 100d4598
// Size: 40 bytes

void FUN_100d4598(void)

{
  FUN_100d451c(0);
  return;
}



// Function: FUN_100d45c0 at 100d45c0
// Size: 72 bytes

void FUN_100d45c0(void)

{
  FUN_100c7e34();
  return;
}



// Function: FUN_100d4614 at 100d4614
// Size: 392 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4614(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  byte *pbVar5;
  int local_25c;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100c6c9c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    pbVar5 = *(byte **)(local_25c + -0xe4c);
    puVar2 = auStack_238;
    if ((auStack_238 != (undefined1 *)0x0) ||
       (puVar2 = (undefined1 *)FUN_100f56e4(0x100), puVar2 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar5,puVar2,*pbVar5 + 1);
    }
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x30) = uVar4;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = (short)uVar3;
    if (*(short *)(param_1 + 0x30) != -1) {
      FUN_100009d8(auStack_238,(int)*(short *)(param_1 + 0x30),uVar3);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),auStack_238,0,0,0,8);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100d479c at 100d479c
// Size: 116 bytes

void FUN_100d479c(int param_1,int *param_2)

{
  FUN_100c6ea0(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xc0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xc2));
  return;
}



// Function: FUN_100d4810 at 100d4810
// Size: 232 bytes

void FUN_100d4810(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x530));
  if (((param_2 == iVar1) && (param_3 != param_1)) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1), iVar1 != 0)) {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x758) + (int)param_1);
    if (iVar1 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x740) + (int)param_1);
      FUN_100c73f0(param_1,param_2,param_1,param_4);
    }
  }
  else {
    FUN_100c73f0(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100d48f8 at 100d48f8
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d48f8(void)

{
  return _FUN_10116e14;
}



// Function: FUN_100d4908 at 100d4908
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100d4908(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc4), param_1 != (undefined4 *)0x0)) {
    FUN_100c7d84(param_1);
    *param_1 = FUN_10116e14;
    param_1[0x20] = 4;
    *(undefined2 *)(param_1 + 0x30) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xc2) = 0xffff;
  }
  return param_1;
}



// Function: FUN_100d4984 at 100d4984
// Size: 40 bytes

void FUN_100d4984(void)

{
  FUN_100d4908(0);
  return;
}



// Function: FUN_100d49ac at 100d49ac
// Size: 132 bytes

void FUN_100d49ac(int *param_1)

{
  undefined1 in_r10;
  
  FUN_100c7e34(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850),in_r10,0);
  return;
}



// Function: FUN_100d4a3c at 100d4a3c
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4a3c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 uVar5;
  undefined4 uVar4;
  byte *pbVar6;
  int local_25c;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100c6c9c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    pbVar6 = *(byte **)(local_25c + -0xe4c);
    puVar3 = auStack_238;
    if ((auStack_238 != (undefined1 *)0x0) ||
       (puVar3 = (undefined1 *)FUN_100f56e4(0x100), puVar3 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar6,puVar3,*pbVar6 + 1);
    }
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x30) = uVar5;
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = (short)uVar4;
    if (*(short *)(param_1 + 0x30) != -1) {
      FUN_100009d8(auStack_238,(int)*(short *)(param_1 + 0x30),uVar4);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),auStack_238,uVar2,0,1,9);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100d4be0 at 100d4be0
// Size: 184 bytes

void FUN_100d4be0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_100c6ea0(param_1,param_2);
  iVar2 = *param_2;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar2 + 0x180),uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x30));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0xc2));
  return;
}



// Function: FUN_100d4c98 at 100d4c98
// Size: 112 bytes

void FUN_100d4c98(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 4) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x858),1);
  }
  FUN_100c73f0(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_100d4d08 at 100d4d08
// Size: 68 bytes

bool FUN_100d4d08(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  return iVar1 != 0;
}



// Function: FUN_100d4d4c at 100d4d4c
// Size: 64 bytes

void FUN_100d4d4c(int *param_1,undefined1 param_2,undefined1 param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_3);
  return;
}



// Function: FUN_100d4d8c at 100d4d8c
// Size: 116 bytes

void FUN_100d4d8c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x848),param_2,iVar2,
                       *(undefined4 *)(iVar2 + 0x84c));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 2000),iVar1 == 0,param_2 & 0xff);
  return;
}



// Function: FUN_100d4e00 at 100d4e00
// Size: 148 bytes

void FUN_100d4e00(int *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (uVar1 == (param_2 & 0xff)) {
    iVar3 = *param_1;
    iVar2 = FUN_10117884((int)*(short *)(iVar3 + 0x848) + (int)param_1);
    FUN_10117884((int)*(short *)(iVar3 + 2000) + (int)param_1,iVar2 == 0,param_3);
  }
  return;
}



// Function: FUN_100d4e94 at 100d4e94
// Size: 8 bytes

undefined1 * FUN_100d4e94(void)

{
  return &DAT_90010008;
}



// Function: FUN_100d4ea4 at 100d4ea4
// Size: 124 bytes

undefined4 * FUN_100d4ea4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc4), param_1 != (undefined4 *)0x0)) {
    FUN_100c7d84(param_1);
    *param_1 = &DAT_9421ffc0;
    param_1[0x20] = 0xc;
    *(undefined2 *)(param_1 + 0x30) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xc2) = 0xffff;
  }
  return param_1;
}



// Function: FUN_100d4f20 at 100d4f20
// Size: 40 bytes

void FUN_100d4f20(void)

{
  FUN_100d4ea4(0);
  return;
}



// Function: FUN_100d4f48 at 100d4f48
// Size: 316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d4f48(int *param_1)

{
  int iVar1;
  undefined1 in_r10;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c7e34(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x850) + (int)param_1,in_r10,0);
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1);
    if (iVar1 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_1[0x20],param_1,0);
    }
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100d5090 at 100d5090
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d5090(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 uVar5;
  undefined4 uVar4;
  byte *pbVar6;
  int local_25c;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100c6c9c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    pbVar6 = *(byte **)(local_25c + -0xe4c);
    puVar3 = auStack_238;
    if ((auStack_238 != (undefined1 *)0x0) ||
       (puVar3 = (undefined1 *)FUN_100f56e4(0x100), puVar3 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar6,puVar3,*pbVar6 + 1);
    }
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x30) = uVar5;
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)((int)param_1 + 0xc2) = (short)uVar4;
    if (*(short *)(param_1 + 0x30) != -1) {
      FUN_100009d8(auStack_238,(int)*(short *)(param_1 + 0x30),uVar4);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),auStack_238,uVar2,0,1,10);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100d5234 at 100d5234
// Size: 184 bytes

void FUN_100d5234(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_100c6ea0(param_1,param_2);
  iVar2 = *param_2;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar2 + 0x180),uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x30));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0xc2));
  return;
}



// Function: FUN_100d52ec at 100d52ec
// Size: 120 bytes

void FUN_100d52ec(int *param_1)

{
  int iVar1;
  
  FUN_10105d28(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1,param_1[0x20],param_1,0);
  }
  return;
}



// Function: FUN_100d5364 at 100d5364
// Size: 268 bytes

void FUN_100d5364(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == 0xc) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
    if (iVar1 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x858) + (int)param_1,1);
    }
    FUN_100c73f0(param_1,0xc,param_3,param_4);
  }
  else if (param_2 == 0x1f) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850),1,1);
  }
  else if (param_2 == 0x20) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850),0,1);
  }
  else {
    FUN_100c73f0(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100d5470 at 100d5470
// Size: 68 bytes

bool FUN_100d5470(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8));
  return iVar1 != 0;
}



// Function: FUN_100d54b4 at 100d54b4
// Size: 64 bytes

void FUN_100d54b4(int *param_1,undefined1 param_2,undefined1 param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),param_2,param_3);
  return;
}



// Function: FUN_100d54f4 at 100d54f4
// Size: 116 bytes

void FUN_100d54f4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x848),param_2,iVar2,
                       *(undefined4 *)(iVar2 + 0x84c));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 2000),iVar1 == 0,param_2 & 0xff);
  return;
}



// Function: FUN_100d5568 at 100d5568
// Size: 148 bytes

void FUN_100d5568(int *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  if (uVar1 == (param_2 & 0xff)) {
    iVar3 = *param_1;
    iVar2 = FUN_10117884((int)*(short *)(iVar3 + 0x848) + (int)param_1);
    FUN_10117884((int)*(short *)(iVar3 + 2000) + (int)param_1,iVar2 == 0,param_3);
  }
  return;
}



// Function: FUN_100d55fc at 100d55fc
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d55fc(void)

{
  FUN_100c1c8c(&DAT_bbc1fff8,_DAT_607f0000,0xc4,0x38600400,&DAT_2c040000);
  FUN_100c1c8c(&DAT_7c0802a6,_DAT_4bfde895,0xc4,0x60000000,&DAT_2c040000);
  FUN_100c1c8c(&DAT_90010008,_DAT_907f0004,0xc4,&DAT_2c030000,&DAT_2c040000);
  return;
}



// Function: FUN_100d568c at 100d568c
// Size: 140 bytes

undefined4 * FUN_100d568c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x34), param_1 != (undefined4 *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = &DAT_3860ffff;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[9] = 0x20202020;
    param_1[10] = 0x20202020;
    param_1[0xb] = 0x20202020;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return param_1;
}



// Function: FUN_100d5718 at 100d5718
// Size: 40 bytes

void FUN_100d5718(void)

{
  FUN_100d568c(0);
  return;
}



// Function: FUN_100d5740 at 100d5740
// Size: 84 bytes

void FUN_100d5740(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100bf5e4(param_1,0x646c6f67);
  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  return;
}



// Function: FUN_100d5794 at 100d5794
// Size: 144 bytes

void FUN_100d5794(int param_1,int *param_2)

{
  undefined1 uVar2;
  undefined4 uVar1;
  
  FUN_100bf698(param_1,param_2);
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}



// Function: FUN_100d5824 at 100d5824
// Size: 144 bytes

void FUN_100d5824(int param_1,int *param_2)

{
  FUN_100bf728(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x20));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 0x24));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 0x28));
  return;
}



// Function: FUN_100d58b4 at 100d58b4
// Size: 128 bytes

void FUN_100d58b4(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if (param_3 == '\0') {
      *(undefined4 *)(param_1 + 0x2c) = param_2;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    else {
      iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x698));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = param_2;
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
    }
  }
  return;
}



// Function: FUN_100d5934 at 100d5934
// Size: 104 bytes

void FUN_100d5934(int *param_1,int param_2,int param_3)

{
  if (param_2 == 0x22) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),*(int *)(param_3 + 0x18),
                 param_1[10] != *(int *)(param_3 + 0x18));
  }
  else {
    FUN_100bfda0();
  }
  return;
}



// Function: FUN_100d599c at 100d599c
// Size: 644 bytes

void FUN_100d599c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 8);
  if ((piVar5 == (int *)0x0) ||
     (iVar2 = FUN_10117884((int)*(short *)(*piVar5 + 0xe0) + (int)piVar5), iVar2 == 0)) {
    FUN_100bfe54(param_1,param_2);
  }
  else {
    sVar1 = *(short *)(param_2 + 0x24);
    if (sVar1 == 0x1b) {
      if (*(short *)(param_2 + 0x26) == 0x47) {
        FUN_100bfe54(param_1,param_2);
      }
      else if (*(int *)(param_1 + 0x28) == 0x20202020) {
        FUN_100bfe54(param_1,param_2);
      }
      else {
        piVar3 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),
                                     *(int *)(param_1 + 0x28));
        if (piVar3 == (int *)0x0) {
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd0),0x15,piVar5,0);
        }
        else {
          iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0));
          if (iVar2 != 0) {
            iVar2 = *piVar3;
            uVar4 = FUN_10117884((int)*(short *)(iVar2 + 0x530) + (int)piVar3,
                                 *(undefined4 *)(iVar2 + 0x534));
            FUN_10117884((int)*(short *)(iVar2 + 0xd0) + (int)piVar3,uVar4,piVar5,0);
          }
        }
      }
    }
    else if ((sVar1 == 3) || (sVar1 == 0xd)) {
      if (*(int *)(param_1 + 0x24) == 0x20202020) {
        FUN_100bfe54(param_1,param_2);
      }
      else {
        piVar3 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),
                                     *(int *)(param_1 + 0x24));
        if (piVar3 == (int *)0x0) {
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd0),0x16,piVar5,0);
        }
        else {
          iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0));
          if (iVar2 != 0) {
            iVar2 = *piVar3;
            uVar4 = FUN_10117884((int)piVar3 + (int)*(short *)(iVar2 + 0x530),
                                 *(undefined4 *)(iVar2 + 0x534));
            FUN_10117884((int)piVar3 + (int)*(short *)(iVar2 + 0xd0),uVar4,piVar5,0);
          }
        }
      }
    }
    else {
      FUN_100bfe54(param_1,param_2);
    }
  }
  return;
}



// Function: FUN_100d5c20 at 100d5c20
// Size: 324 bytes

void FUN_100d5c20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  if ((((piVar4 == (int *)0x0) ||
       (iVar1 = FUN_10117884((int)*(short *)(*piVar4 + 0xe0) + (int)piVar4), iVar1 == 0)) ||
      (*(short *)(param_2 + 0x24) != 0x2e)) || (*(int *)(param_1 + 0x28) == 0x20202020)) {
    FUN_100bfd04(param_1,param_2);
  }
  else {
    piVar2 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                 *(int *)(param_1 + 0x28));
    if (piVar2 == (int *)0x0) {
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xd0),0x15,piVar4,0);
    }
    else {
      iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0xe0) + (int)piVar2);
      if (iVar1 != 0) {
        iVar1 = *piVar2;
        uVar3 = FUN_10117884((int)*(short *)(iVar1 + 0x530) + (int)piVar2,
                             *(undefined4 *)(iVar1 + 0x534));
        FUN_10117884((int)*(short *)(iVar1 + 0xd0) + (int)piVar2,uVar3,piVar4,0);
      }
    }
  }
  return;
}



// Function: FUN_100d5d64 at 100d5d64
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d5d64(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x20202020;
  do {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x300),1);
  } while (*(char *)(param_1 + 0x30) == '\0');
  return;
}



// Function: FUN_100d5dd8 at 100d5dd8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d5dd8(void)

{
  FUN_100c1c8c(&DAT_4082000c,_DAT_48000018,0x34,0x38800001,&DAT_38800000);
  return;
}



// Function: FUN_100d5e14 at 100d5e14
// Size: 140 bytes

undefined4 * FUN_100d5e14(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x120);
    }
    FUN_100ebf7c(param_1,uVar1,param_3);
    *param_1 = 0x38a00400;
  }
  return param_1;
}



// Function: FUN_100d5ea0 at 100d5ea0
// Size: 136 bytes

undefined4 * FUN_100d5ea0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x120);
    }
    FUN_100ebf7c(param_1,uVar1,1);
    *param_1 = 0x38a00400;
  }
  return param_1;
}



// Function: FUN_100d5f28 at 100d5f28
// Size: 108 bytes

void FUN_100d5f28(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x38a00400;
    FUN_100ebff4(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100d5f94 at 100d5f94
// Size: 36 bytes

void FUN_100d5f94(void)

{
  FUN_100ec060();
  return;
}



// Function: FUN_100d5fb8 at 100d5fb8
// Size: 36 bytes

void FUN_100d5fb8(void)

{
  FUN_100ec0e8();
  return;
}



// Function: FUN_100d5fe4 at 100d5fe4
// Size: 112 bytes

undefined4 * FUN_100d5fe4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x34), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x38600001;
    param_1[0xc] = 0;
  }
  return param_1;
}



// Function: FUN_100d6054 at 100d6054
// Size: 40 bytes

void FUN_100d6054(void)

{
  FUN_100d5fe4(0);
  return;
}



// Function: FUN_100d607c at 100d607c
// Size: 64 bytes

void FUN_100d607c(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x2a8),
               *(undefined4 *)(param_1 + 4));
  return;
}



// Function: FUN_100d60bc at 100d60bc
// Size: 76 bytes

void FUN_100d60bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100c3df8(param_1,param_2,param_3,0,0,param_3);
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}



// Function: FUN_100d6110 at 100d6110
// Size: 112 bytes

undefined4 * FUN_100d6110(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x34), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = &DAT_30210040;
    param_1[0xc] = 0;
  }
  return param_1;
}



// Function: FUN_100d6180 at 100d6180
// Size: 40 bytes

void FUN_100d6180(void)

{
  FUN_100d6110(0);
  return;
}



// Function: FUN_100d61a8 at 100d61a8
// Size: 248 bytes

void FUN_100d61a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_118 [260];
  
  local_118[0] = 0;
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x310),
               local_118);
  uVar1 = FUN_100b1c84(&DAT_7c0803a6);
  uVar2 = FUN_100b1c84(&DAT_7c0803a6);
  uVar3 = FUN_100b1c84(&DAT_7c0803a6);
  FUN_100009f0(local_118,uVar3,uVar2,uVar1);
  iVar4 = FUN_100d8c9c(0x84,0);
  if (iVar4 == 1) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x2c8));
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x2d8));
  }
  return;
}



// Function: FUN_100d62a0 at 100d62a0
// Size: 76 bytes

void FUN_100d62a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100c3df8(param_1,param_2,param_3,0,0,param_3);
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}



// Function: FUN_100d62f4 at 100d62f4
// Size: 184 bytes

undefined4 * FUN_100d62f4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x13c), param_1 != (undefined4 *)0x0)) {
    FUN_100c604c(param_1);
    *param_1 = &DAT_bbe1fffc;
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_100b1d90(param_1 + 8,0xb09f0030);
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4c] = 0;
    *(undefined1 *)(param_1 + 0x4b) = 1;
    *(undefined1 *)((int)param_1 + 0x12d) = 1;
    *(undefined1 *)((int)param_1 + 0x12e) = 1;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(undefined1 *)((int)param_1 + 0x135) = 1;
    param_1[0x4a] = 0;
    param_1[0x4e] = 0;
  }
  return param_1;
}



// Function: FUN_100d63ac at 100d63ac
// Size: 40 bytes

void FUN_100d63ac(void)

{
  FUN_100d62f4(0);
  return;
}



// Function: FUN_100d63d4 at 100d63d4
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d63d4(int *param_1)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100c60e4(param_1,_DAT_28030000);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3b0),param_1);
    iVar1 = FUN_100e9174();
    param_1[0x48] = iVar1;
    iVar1 = FUN_100e9174();
    param_1[0x49] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100d64bc at 100d64bc
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d64bc(int param_1)

{
  undefined4 uVar1;
  
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3c0),param_1);
  uVar1 = FUN_100e91b4(*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_100e91b4(*(undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  if (*(char *)(param_1 + 0x12e) == '\0') {
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  else {
    uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = uVar1;
  }
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  FUN_100c6134(param_1);
  return;
}



// Function: FUN_100d656c at 100d656c
// Size: 132 bytes

void FUN_100d656c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x124) != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x124) +
                           (int)*(short *)(**(int **)(param_1 + 0x124) + 0x140),param_2), iVar1 == 0
     )) {
    FUN_10117884((int)*(int **)(param_1 + 0x124) +
                 (int)*(short *)(**(int **)(param_1 + 0x124) + 0x150),param_2);
  }
  return;
}



// Function: FUN_100d65f0 at 100d65f0
// Size: 132 bytes

void FUN_100d65f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x120) +
                           (int)*(short *)(**(int **)(param_1 + 0x120) + 0x140),param_2), iVar1 == 0
     )) {
    FUN_10117884((int)*(int **)(param_1 + 0x120) +
                 (int)*(short *)(**(int **)(param_1 + 0x120) + 0x150),param_2);
  }
  return;
}



// Function: FUN_100d667c at 100d667c
// Size: 196 bytes

void FUN_100d667c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c [2];
  
  piVar2 = &local_20;
  if (param_2 == 0x65) {
    param_1[0x4a] = param_1[0x4a] + -1;
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
    local_1c[0] = iVar1 + 1;
    local_20 = 1;
    if (1 < iVar1 + 1) {
      piVar2 = local_1c;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),*piVar2);
  }
  FUN_100f4f0c(param_1,param_2,param_3);
  return;
}



// Function: FUN_100d6740 at 100d6740
// Size: 204 bytes

int FUN_100d6740(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_148 [316];
  
  FUN_100d5ea0(auStack_148,param_1);
  piVar1 = (int *)FUN_100d5f94(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  iVar3 = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x668));
    if ((iVar2 != 0) && (*(char *)((int)piVar1 + 0xb6) == '\0')) {
      iVar3 = (int)(short)((short)iVar3 + 1);
    }
    piVar1 = (int *)FUN_100d5fb8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_100d5f28(auStack_148,2);
  return iVar3;
}



// Function: FUN_100d680c at 100d680c
// Size: 156 bytes

void FUN_100d680c(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 != (int *)0x0) && ((int *)param_2[10] == param_1)) {
    if ((*(char *)((int)param_2 + 0xb6) == '\0') && (iVar1 = FUN_100d6740(param_1), iVar1 < 2)) {
      FUN_10117884((int)*(short *)(*param_1 + 0x2c0) + (int)param_1);
    }
    else {
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x738));
    }
  }
  return;
}



// Function: FUN_100d68a8 at 100d68a8
// Size: 372 bytes

void FUN_100d68a8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r29;
  undefined1 auStack_148 [312];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
  if ((iVar1 != 0) &&
     (unaff_r29 = FUN_10117884((int)*(short *)(*param_1 + 0x270) + (int)param_1), unaff_r29 == 2)) {
    FUN_100db158(0,0x820000);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x1c,param_1);
  if (iVar1 != 0) {
    if (unaff_r29 == 1) {
      FUN_10117884((int)*(short *)(*param_1 + 0x2a8) + (int)param_1,0x1f);
    }
    else if (unaff_r29 == 3) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2d0));
    }
  }
  FUN_100d5ea0(auStack_148,param_1);
  piVar2 = (int *)FUN_100d5f94(auStack_148);
  iVar1 = FUN_100ebf44(auStack_148);
  while (iVar1 != 0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    piVar2 = (int *)FUN_100d5fb8(auStack_148);
    iVar1 = FUN_100ebf44(auStack_148);
  }
  FUN_100d5f28(auStack_148,2);
  return;
}



// Function: FUN_100d6a1c at 100d6a1c
// Size: 88 bytes

void FUN_100d6a1c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2b8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}



// Function: FUN_100d6a74 at 100d6a74
// Size: 128 bytes

void FUN_100d6a74(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  return;
}



// Function: FUN_100d6af4 at 100d6af4
// Size: 128 bytes

void FUN_100d6af4(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  piVar1 = *(int **)(param_1 + 0x124);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180),param_2);
  }
  return;
}



// Function: FUN_100d6b74 at 100d6b74
// Size: 4 bytes

void FUN_100d6b74(void)

{
  return;
}



// Function: FUN_100d6b78 at 100d6b78
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d6b78(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x3e9,param_1);
  }
  else {
    uVar1 = FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 0xd0),param_1,0,0x3ea
                         ,&DAT_41820018);
  }
  FUN_100db26c(uVar1);
  return;
}



// Function: FUN_100d6c08 at 100d6c08
// Size: 136 bytes

void FUN_100d6c08(int *param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288));
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f0));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x308) + (int)param_1,iVar1);
  }
  return;
}



// Function: FUN_100d6c90 at 100d6c90
// Size: 96 bytes

void FUN_100d6c90(undefined4 param_1,int param_2)

{
  if (param_2 - 0x1eU < 5) {
    return;
  }
  FUN_100c6178(param_1,param_2);
  return;
}



// Function: FUN_100d6dd0 at 100d6dd0
// Size: 148 bytes

void FUN_100d6dd0(int *param_1)

{
  int iVar1;
  
  FUN_100da394(param_1);
  FUN_100f27d0(0x20,1);
  FUN_100f27d0(0x21,1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
  if (iVar1 != 0) {
    FUN_100f27d0(0x1e,1);
    FUN_100f27d0(0x22,1);
  }
  return;
}



// Function: FUN_100d6e64 at 100d6e64
// Size: 4 bytes

void FUN_100d6e64(void)

{
  return;
}



// Function: FUN_100d6e68 at 100d6e68
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d6e68(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),
               *(undefined4 *)(_DAT_a89f0000 + 0x54));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}



// Function: FUN_100d6ed4 at 100d6ed4
// Size: 36 bytes

void FUN_100d6ed4(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100d6ef8 at 100d6ef8
// Size: 36 bytes

void FUN_100d6ef8(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100d6f24 at 100d6f24
// Size: 76 bytes

void FUN_100d6f24(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x138)) {
    FUN_100f57c8(*(undefined4 *)(param_1 + 0x138));
    *(int *)(param_1 + 0x138) = param_2;
  }
  return;
}



// Function: FUN_100d6f74 at 100d6f74
// Size: 148 bytes

void FUN_100d6f74(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x120) != 0) &&
      (piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 0x120) +
                                    (int)*(short *)(**(int **)(param_1 + 0x120) + 0x128)),
      piVar1 != (int *)0x0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x680) + (int)piVar1), iVar2 == 0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x780) + (int)piVar1);
  }
  return;
}



// Function: FUN_100d7008 at 100d7008
// Size: 248 bytes

void FUN_100d7008(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_118 [260];
  
  local_118[0] = 0;
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_100012d8(param_1 + 0x20,local_118,*(byte *)(param_1 + 0x20) + 1);
    uVar1 = FUN_100b1c84(&DAT_7c0803a6);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    uVar3 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_100009f0(local_118,uVar3,uVar2,uVar1);
    FUN_100d8e3c(0x87);
  }
  piVar4 = *(int **)(param_1 + 0x120);
  if ((piVar4 != (int *)0x0) &&
     (piVar4 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x128) + (int)piVar4),
     piVar4 != (int *)0x0)) {
    FUN_10117884((int)*(short *)(*piVar4 + 0x780) + (int)piVar4);
  }
  return;
}



// Function: FUN_100d7100 at 100d7100
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d7100(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_33c;
  undefined1 auStack_318 [256];
  undefined1 local_218 [256];
  undefined1 local_118 [260];
  
  local_118[0] = 0;
  local_218[0] = 0;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    if (*(char *)(_DAT_28030000 + 0xf) == '\0') {
      uVar2 = 9;
    }
    else {
      uVar2 = 10;
    }
    FUN_100009d8(auStack_318,0xfa,uVar2);
    FUN_100012d8(param_1 + 8,local_118,*(byte *)(param_1 + 8) + 1);
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x530),local_218);
    uVar2 = FUN_100b1c84(*(undefined4 *)(local_33c + -0xe4c));
    FUN_100009f0(local_118,auStack_318,local_218,uVar2);
    uVar2 = FUN_100d8c9c(0x83,0);
  }
  return uVar2;
}



// Function: FUN_100d720c at 100d720c
// Size: 36 bytes

void FUN_100d720c(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100d7230 at 100d7230
// Size: 36 bytes

void FUN_100d7230(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100d7254 at 100d7254
// Size: 36 bytes

void FUN_100d7254(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100d727c at 100d727c
// Size: 36 bytes

void FUN_100d727c(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100d72a0 at 100d72a0
// Size: 56 bytes

void FUN_100d72a0(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 != param_1) {
    FUN_100db158(0xffffb1dd,0);
  }
  return;
}



// Function: FUN_100d72d8 at 100d72d8
// Size: 64 bytes

void FUN_100d72d8(int param_1,undefined4 param_2)

{
  FUN_100012d8(param_1 + 0x20,param_2,*(byte *)(param_1 + 0x20) + 1);
  return;
}



// Function: FUN_100d7318 at 100d7318
// Size: 212 bytes

void FUN_100d7318(int param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [312];
  
  FUN_100d5ea0(auStack_148,param_1);
  FUN_100012d8(param_2,param_1 + 0x20,*param_2 + 1);
  piVar1 = (int *)FUN_100d5f94(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x798),param_2);
    piVar1 = (int *)FUN_100d5fb8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_100d5f28(auStack_148,2);
  return;
}



// Function: FUN_100d73f4 at 100d73f4
// Size: 168 bytes

void FUN_100d73f4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_140 [312];
  
  FUN_100d5ea0(auStack_140,param_1);
  piVar1 = (int *)FUN_100d5f94(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x348));
    piVar1 = (int *)FUN_100d5fb8(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_100d5f28(auStack_140,2);
  return;
}



// Function: FUN_100d749c at 100d749c
// Size: 184 bytes

void FUN_100d749c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_140 [312];
  
  FUN_100d5e14(auStack_140,param_1,0);
  piVar1 = (int *)FUN_100d5f94(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    if (*(char *)((int)piVar1 + 0xaa) != '\0') {
      FUN_10117884((int)*(short *)(*piVar1 + 800) + (int)piVar1);
    }
    piVar1 = (int *)FUN_100d5fb8(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_100d5f28(auStack_140,2);
  return;
}



// Function: FUN_100d7554 at 100d7554
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d7554(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short local_118;
  short local_116;
  undefined1 local_114 [256];
  
  local_114[0] = 0;
  if (_DAT_4e800020 == 1) {
    FUN_100009d8(param_2,0xfa,0x12);
    _DAT_4e800020 = _DAT_4e800020 + 1;
  }
  else {
    FUN_100009d8(param_2,0xfa,8);
    FUN_10000ac8((int)_DAT_4e800020,local_114);
    iVar1 = FUN_100ee320(param_2,&local_116,&local_118);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_100ee588(param_2,local_114,(int)local_116,(int)local_118), iVar1 != 0)) {
      _DAT_4e800020 = _DAT_4e800020 + 1;
    }
  }
  return;
}



// Function: FUN_100d7630 at 100d7630
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d7630(void)

{
  FUN_100c1c8c(0x90bf0020,_DAT_3860ffff,0x34,&DAT_4e800020,&DAT_41820070);
  FUN_100c1c8c(&DAT_80010048,*_FUN_10116e78,0x34,uRam10116e7c,&DAT_41820070);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_9421ffc8,0x13c,&DAT_80a30024,0x7c1de840);
  return;
}



// Function: FUN_100d76c0 at 100d76c0
// Size: 220 bytes

undefined4 * FUN_100d76c0(undefined4 *param_1)

{
  uint uVar1;
  int local_3c;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x3c), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x60660000;
    FUN_100b02d0(param_1 + 1);
    param_1[1] = 0x10001;
    *(undefined2 *)(param_1 + 2) = 8;
    FUN_10002f88((int)param_1 + 10,0x80a2db7e,8,param_1 + 0xc,(int)param_1 + 0x36);
    uVar1 = (*(undefined4 **)(local_3c + -0x1830))[1];
    *(undefined4 *)((int)param_1 + 0x12) = **(undefined4 **)(local_3c + -0x1830);
    *(uint *)((int)param_1 + 0x16) = uVar1 & 0xffff0000;
    uVar1 = (*(undefined4 **)(local_3c + -0xc38))[1];
    param_1[6] = **(undefined4 **)(local_3c + -0xc38);
    param_1[7] = uVar1 & 0xffff0000;
  }
  return param_1;
}



// Function: FUN_100d779c at 100d779c
// Size: 40 bytes

void FUN_100d779c(void)

{
  FUN_100d76c0(0);
  return;
}



// Function: FUN_100d77c4 at 100d77c4
// Size: 36 bytes

void FUN_100d77c4(void)

{
  FUN_100f5274();
  return;
}



// Function: FUN_100d77e8 at 100d77e8
// Size: 204 bytes

void FUN_100d77e8(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_100f5100(param_1,param_2);
  FUN_10117884(param_1 + 4,(int)param_2 + (int)*(short *)(*param_2 + 0x110));
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 8) = uVar1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),param_1 + 10,8);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x130),param_1 + 0x12);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x130),param_1 + 0x18);
  return;
}



// Function: FUN_100d78b4 at 100d78b4
// Size: 212 bytes

void FUN_100d78b4(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a0),*(undefined4 *)(param_1 + 4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),param_1 + 10,8);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),param_1 + 0x12,6);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),param_1 + 0x18,6);
  return;
}



// Function: FUN_100d7990 at 100d7990
// Size: 76 bytes

void FUN_100d7990(int param_1)

{
  FUN_10000000(param_1 + 0x1e);
  FUN_100ef8c8(param_1 + 0x30);
  FUN_100ef824(param_1 + 0x36);
  return;
}



// Function: FUN_100d79dc at 100d79dc
// Size: 112 bytes

void FUN_100d79dc(int param_1)

{
  FUN_10000030();
  FUN_100031b0((int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 4));
  FUN_10002130((int)*(short *)(param_1 + 8));
  FUN_10002118(param_1 + 10);
  FUN_100f0538(param_1 + 0x12);
  FUN_100f03e8(param_1 + 0x18);
  return;
}



// Function: FUN_100d7a4c at 100d7a4c
// Size: 76 bytes

void FUN_100d7a4c(int param_1)

{
  FUN_100016f8(param_1 + 0x1e);
  FUN_100f0538(param_1 + 0x30);
  FUN_100f03e8(param_1 + 0x36);
  return;
}



// Function: FUN_100d7a98 at 100d7a98
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d7a98(void)

{
  FUN_100c1c8c(0x81850034,_DAT_a8650030,0x3c,0x7c661814,0x90c30020);
  return;
}



// Function: FUN_100d7adc at 100d7adc
// Size: 156 bytes

undefined4 * FUN_100d7adc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x480009e5;
    param_1[1] = 0;
    param_1[5] = 0;
    param_1[4] = 6;
    *(undefined2 *)(param_1 + 3) = 1;
    *(undefined2 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[2] = 0;
    param_1[7] = 0;
  }
  return param_1;
}



// Function: FUN_100d7b78 at 100d7b78
// Size: 40 bytes

void FUN_100d7b78(void)

{
  FUN_100d7adc(0);
  return;
}



// Function: FUN_100d7ba0 at 100d7ba0
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d7ba0(int *param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  short sVar2;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_100f5274(param_1);
  param_1[2] = 0;
  *(short *)(param_1 + 3) = param_3;
  param_1[5] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  iVar1 = param_3 + -1;
  while (0 < iVar1) {
    sVar2 = *(short *)((int)param_1 + 0xe) + 1;
    *(short *)((int)param_1 + 0xe) = sVar2;
    iVar1 = param_3 + -1 >> ((int)sVar2 & 0x3fU);
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),param_2);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100d7d1c at 100d7d1c
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100d7d1c(int param_1)

{
  int iVar1;
  int local_138;
  int *local_134;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_134 = (int *)FUN_100f5088(param_1);
  local_134[1] = 0;
  local_134[7] = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    local_138 = *(int *)(param_1 + 0x1c);
    FUN_100f16a0(&local_138);
    local_134[7] = local_138;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)local_134 + (int)*(short *)(*local_134 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return local_134;
}



// Function: FUN_100d7e04 at 100d7e04
// Size: 144 bytes

void FUN_100d7e04(int param_1,int *param_2)

{
  undefined2 uVar2;
  undefined4 uVar1;
  
  FUN_100f5100(param_1,param_2);
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



// Function: FUN_100d7e94 at 100d7e94
// Size: 144 bytes

void FUN_100d7e94(int param_1,int *param_2)

{
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xc));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xe));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0x10));
  return;
}



// Function: FUN_100d7f24 at 100d7f24
// Size: 260 bytes

void FUN_100d7f24(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_3 + param_2);
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_1[2] + 1);
  if (uVar2 < uVar3) {
    FUN_10002340(uVar2,uVar1,uVar3 - uVar2);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),param_1[2] - param_3);
  param_1[2] = param_1[2] - param_3;
  if (param_1[1] != 0) {
    FUN_100ebd68(param_1[1],param_2,param_3);
  }
  return;
}



// Function: FUN_100d8078 at 100d8078
// Size: 80 bytes

void FUN_100d8078(int *param_1)

{
  if (0 < param_1[2]) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),1,param_1[2]);
  }
  return;
}



// Function: FUN_100d80c8 at 100d80c8
// Size: 132 bytes

void FUN_100d80c8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (0 < param_4) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
    FUN_10002340(uVar1,param_3,
                 (param_4 + -1 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU)) +
                 (int)*(short *)(param_1 + 3));
  }
  return;
}



// Function: FUN_100d81a0 at 100d81a0
// Size: 60 bytes

void FUN_100d81a0(int param_1,int param_2)

{
  FUN_100eecf8(**(int **)(param_1 + 0x1c) +
               (param_2 + -1 << ((int)*(short *)(param_1 + 0xe) & 0x3fU)));
  return;
}



// Function: FUN_100d81dc at 100d81dc
// Size: 108 bytes

uint FUN_100d81dc(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100efab0(*(undefined4 *)(param_1 + 0x1c));
  if (uVar1 != (param_2 & 0xff)) {
    if ((param_2 & 0xff) == 0) {
      FUN_10002ad8(*(undefined4 *)(param_1 + 0x1c));
    }
    else {
      FUN_10002598(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  return uVar1;
}



// Function: FUN_100d8248 at 100d8248
// Size: 112 bytes

void FUN_100d8248(int *param_1)

{
  if (param_1[1] == 0) {
    FUN_10000960(param_1[7]);
    FUN_100f5108(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 6) = 1;
    FUN_10117884((int)*(short *)(*param_1 + 0xd0) + (int)param_1);
  }
  return;
}



// Function: FUN_100d82c0 at 100d82c0
// Size: 356 bytes

void FUN_100d82c0(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[5] < param_1[2] + param_4) {
    FUN_10117884((int)*(short *)(*param_1 + 0xb0) + (int)param_1,param_1[2] + param_4);
  }
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + param_4);
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_1[2] + 1);
  iVar4 = param_4 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU);
  if (param_2 <= param_1[2]) {
    FUN_10002340(puVar1,uVar2,iVar3 - (int)puVar1);
  }
  if (iVar4 == 4) {
    if ((((uint)param_3 & 1) == 0) && (((uint)puVar1 & 1) == 0)) {
      *puVar1 = *param_3;
      goto LAB_100d8438;
    }
  }
  FUN_10002340(param_3,puVar1,iVar4);
LAB_100d8438:
  param_1[2] = param_1[2] + param_4;
  if (param_1[1] != 0) {
    FUN_100ebeb4(param_1[1],param_2,param_4);
  }
  return;
}



// Function: FUN_100d848c at 100d848c
// Size: 252 bytes

void FUN_100d848c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
  if (iVar1 != 0) {
    iVar4 = *param_1;
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xa8),iVar4,
                         *(undefined4 *)(iVar4 + 0xac));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xb0),iVar2 + iVar1);
    iVar4 = *param_1;
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xe0) + (int)param_2,1,
                         *(undefined4 *)(*param_2 + 0xe4));
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xa8));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xb8),iVar2 + 1,uVar3,iVar1);
  }
  return;
}



// Function: FUN_100d85c8 at 100d85c8
// Size: 116 bytes

void FUN_100d85c8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  FUN_10002340(param_3,uVar1,param_4 << ((int)*(short *)((int)param_1 + 0xe) & 0x3fU));
  return;
}



// Function: FUN_100d8690 at 100d8690
// Size: 228 bytes

void FUN_100d8690(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = FUN_10000948(0);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  if ((*(int *)(param_1 + 0x14) < param_2) ||
     (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14) - param_2)) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      param_2 = ((param_2 + iVar2) / iVar2) * iVar2;
    }
    if (param_2 != *(int *)(param_1 + 0x14)) {
      iVar2 = FUN_100f5748();
      if (iVar2 == 0) {
        FUN_10000ab0(*(undefined4 *)(param_1 + 0x1c),
                     param_2 << ((int)*(short *)(param_1 + 0xe) & 0x3fU));
        FUN_100db1ec();
      }
      else {
        FUN_100f16f8(*(undefined4 *)(param_1 + 0x1c),
                     param_2 << ((int)*(short *)(param_1 + 0xe) & 0x3fU));
      }
    }
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



// Function: FUN_100d87a0 at 100d87a0
// Size: 124 bytes

void FUN_100d87a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_2[1];
  iVar3 = *piVar2;
  uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(iVar3 + 0xe0),param_1,piVar2,iVar3,
                       *(undefined4 *)(iVar3 + 0xe4));
  FUN_10117884((int)piVar2 + (int)*(short *)(iVar3 + 0x100),*(undefined4 *)*param_2,uVar1);
  return;
}



// Function: FUN_100d8824 at 100d8824
// Size: 104 bytes

undefined4 * FUN_100d8824(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100d7adc(param_1);
    *param_1 = &DAT_80410014;
  }
  return param_1;
}



// Function: FUN_100d888c at 100d888c
// Size: 40 bytes

void FUN_100d888c(void)

{
  FUN_100d8824(0);
  return;
}



// Function: FUN_100d88b4 at 100d88b4
// Size: 40 bytes

void FUN_100d88b4(undefined4 param_1,undefined4 param_2,short param_3)

{
  FUN_100d7ba0(param_1,param_2,(int)param_3);
  return;
}



// Function: FUN_100d88e4 at 100d88e4
// Size: 312 bytes

undefined4 FUN_100d88e4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_150 [4];
  int local_14c;
  int local_148;
  int local_144;
  
  if (*(int *)(param_1 + 8) == 0) {
    *param_4 = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_100ebaf8(auStack_150,param_1,1);
    do {
      local_14c = local_148 + local_144 >> 1;
      iVar2 = FUN_10117884(local_14c,param_3);
      if (iVar2 < 0) {
        local_144 = local_14c + -1;
      }
      else {
        local_148 = local_14c + 1;
      }
      if (iVar2 == 0) {
        uVar1 = 1;
        goto LAB_100d89c4;
      }
    } while (local_148 <= local_144);
    if (0 < iVar2) {
      local_14c = local_14c + 1;
    }
LAB_100d89c4:
    if ((local_14c < 1) || (*(int *)(param_1 + 8) + 1 < local_14c)) {
      *param_4 = 0;
    }
    else {
      *param_4 = local_14c;
    }
    FUN_100ebc68(auStack_150,2);
  }
  return uVar1;
}



// Function: FUN_100d8a1c at 100d8a1c
// Size: 136 bytes

void FUN_100d8a1c(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  undefined4 local_18;
  undefined1 *local_14;
  int *local_10;
  
  local_14 = (undefined1 *)&stack0x0000001c;
  uStack0000001c = param_2;
  local_10 = param_1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&DAT_80010040,&local_14,&local_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),local_18,uStack0000001c,1);
  return;
}



// Function: FUN_100d8aa4 at 100d8aa4
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d8aa4(void)

{
  FUN_100c1c8c(0x38c00003,_DAT_30210038,0x20,&DAT_7c0803a6,0x90c30020);
  FUN_100c1c8c(&DAT_90010008,_DAT_4e800020,0x20,_FUN_10116eb8,0x38c00003);
  return;
}



// Function: FUN_100d8b0c at 100d8b0c
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d8b0c(short param_1,short param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  
  FUN_100b1d90(param_3,FUN_10116eb8);
  puVar1 = (undefined4 *)FUN_10001728(0x65727273,(int)param_2);
  uVar7 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar2 = FUN_100ef9b8(puVar1);
    psVar8 = (short *)*puVar1;
    uVar3 = FUN_10001c20(puVar1);
    sVar5 = (short)(uVar3 / 6);
    iVar6 = 0;
    sVar4 = 1;
    if (0 < sVar5) {
      do {
        if (*psVar8 == 0) {
          iVar6 = (int)psVar8[2];
        }
        else if ((*psVar8 <= param_1) && (param_1 <= psVar8[1])) {
          if (0 < psVar8[2]) {
            FUN_100009d8(param_3,iVar6,(int)psVar8[2]);
          }
          uVar7 = 1;
          break;
        }
        sVar4 = sVar4 + 1;
        psVar8 = psVar8 + 3;
      } while (sVar4 <= sVar5);
    }
    FUN_10001b60(puVar1,uVar2);
  }
  return uVar7;
}



// Function: FUN_100d8c30 at 100d8c30
// Size: 108 bytes

undefined4 FUN_100d8c30(short param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d8b0c((int)param_1,(int)(short)(param_2 + 1000),param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_100d8b0c((int)param_1,(int)param_2,param_3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100d8c9c at 100d8c9c
// Size: 416 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d8c9c(short param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iStack0000001c;
  int local_3c;
  
  puVar6 = &stack0x0000001c;
  iStack0000001c = param_2;
  FUN_100ef088(0xfffffffe,_DAT_bbc1fff8,_DAT_48000080);
  uVar1 = FUN_100efc78((int)_DAT_90010048);
  FUN_100014a0(0x80a2db22);
  puVar2 = (uint *)FUN_10001728(0x414c5254,(int)param_1);
  if (puVar2 == (uint *)0x0) {
    FUN_10001b00(2);
    FUN_100efc78(uVar1);
    uVar3 = 2;
  }
  else {
    iVar4 = FUN_10001728(0x4449544c,(int)*(short *)(*puVar2 + 8));
    if (iVar4 == 0) {
      FUN_10001b00(2);
      FUN_100efc78(uVar1);
      uVar3 = 2;
    }
    else {
      iVar4 = FUN_100ef9b8(puVar2);
      FUN_100eef18();
      if (iStack0000001c == 0) {
        puVar6 = *(undefined4 **)(local_3c + -0xeb4);
      }
      uVar5 = FUN_10000a98(*puVar6,0xfd0,1);
      uVar3 = FUN_10001b30((int)param_1,uVar5);
      FUN_100ef5f0(uVar5);
      if (*(char *)(*(int *)(local_3c + -0x14) + 0x14) == '\0') {
        *puVar2 = iVar4 << 3 | *puVar2;
      }
      else {
        FUN_10001b60(puVar2,iVar4);
      }
      FUN_100efc78(uVar1);
    }
  }
  return uVar3;
}



// Function: FUN_100d8e3c at 100d8e3c
// Size: 44 bytes

void FUN_100d8e3c(short param_1)

{
  FUN_100d8c9c((int)param_1,0);
  return;
}



// Function: FUN_100d8e68 at 100d8e68
// Size: 324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d8e68(short param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_34c;
  undefined1 local_328 [256];
  undefined1 local_228 [256];
  undefined4 local_128;
  byte local_120 [260];
  
  iVar4 = (int)param_1;
  FUN_100b19f4(local_120,FUN_10116eb8 + 4);
  local_228[0] = 0;
  local_328[0] = 0;
  local_128._0_2_ = (short)((uint)param_2 >> 0x10);
  uVar3 = 0x80;
  if (3 < (int)local_128._0_2_ + 3U) {
    iVar1 = (int)local_128._0_2_;
    local_128._2_2_ = (short)param_2;
    iVar2 = (int)local_128._2_2_;
    local_128 = param_2;
    FUN_100009d8(local_120,iVar1,iVar2);
    FUN_100d8c30(iVar4,0x80,local_228);
    if (local_128._0_2_ == -3) {
      iVar4 = (int)local_128._2_2_;
    }
    FUN_100d8c30(iVar4,0x81,local_328);
    FUN_100009f0(local_228,local_328,local_120,*(undefined4 *)(local_34c + -0xe2c));
    if ((int)((local_120[0] - 1) + (uint)(local_120[0] != 0)) < 0) {
      uVar3 = 0x82;
    }
    FUN_100d8e3c(uVar3);
    **(undefined1 **)(local_34c + -0xe50) = 0;
    FUN_10000a08();
    return;
  }
  return;
}



// Function: FUN_100d9034 at 100d9034
// Size: 136 bytes

undefined4 * FUN_100d9034(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x14), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_90010008;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 0x40;
  }
  return param_1;
}



// Function: FUN_100d90bc at 100d90bc
// Size: 40 bytes

void FUN_100d90bc(void)

{
  FUN_100d9034(0);
  return;
}



// Function: FUN_100d90e4 at 100d90e4
// Size: 76 bytes

void FUN_100d90e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100f5274(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  return;
}



// Function: FUN_100d916c at 100d916c
// Size: 112 bytes

void FUN_100d916c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_1[1],param_1[2],param_1);
  }
  return;
}



// Function: FUN_100d91e8 at 100d91e8
// Size: 104 bytes

undefined4 * FUN_100d91e8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x2c), param_1 != (undefined4 *)0x0)) {
    FUN_100d9034(param_1);
    *param_1 = &DAT_60ba0000;
  }
  return param_1;
}



// Function: FUN_100d9250 at 100d9250
// Size: 40 bytes

void FUN_100d9250(void)

{
  FUN_100d91e8(0);
  return;
}



// Function: FUN_100d9278 at 100d9278
// Size: 112 bytes

void FUN_100d9278(int param_1,undefined4 param_2,short *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_100d90e4(param_1,0,0,param_2);
  *(int *)(param_1 + 4) = (int)*param_3;
  uVar1 = *(undefined4 *)(param_3 + 2);
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// Function: FUN_100d9394 at 100d9394
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d9394(undefined4 param_1)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x2d0),param_1);
  return;
}



// Function: FUN_100d93dc at 100d93dc
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d93dc(void)

{
  FUN_100c1c8c(0x80a30008,_DAT_609f0000,0x14,0x607e0000,0x90c30020);
  FUN_100c1c8c(&DAT_9421ffb0,_DAT_635c0000,0x2c,0x80de0010,0x80a30008);
  return;
}



// Function: FUN_100d9444 at 100d9444
// Size: 20 bytes

bool FUN_100d9444(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// Function: FUN_100d9464 at 100d9464
// Size: 92 bytes

void FUN_100d9464(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0xb0));
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}



// Function: FUN_100d94c8 at 100d94c8
// Size: 152 bytes

undefined4 * FUN_100d94c8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1c), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x80fe000c;
    param_1[1] = 0;
    param_1[3] = 0x7fffffff;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    param_1[2] = 0;
    param_1[6] = 0x20202020;
  }
  return param_1;
}



// Function: FUN_100d9560 at 100d9560
// Size: 40 bytes

void FUN_100d9560(void)

{
  FUN_100d94c8(0);
  return;
}



// Function: FUN_100d9588 at 100d9588
// Size: 60 bytes

void FUN_100d9588(int param_1,undefined4 param_2)

{
  FUN_100f5274(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_100d95c4 at 100d95c4
// Size: 4 bytes

void FUN_100d95c4(void)

{
  return;
}



// Function: FUN_100d95c8 at 100d95c8
// Size: 64 bytes

void FUN_100d95c8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x1a,param_1,0);
  return;
}



// Function: FUN_100d9608 at 100d9608
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d9608(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  if (param_1 == piVar1) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x188) + (int)piVar1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),param_1);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// Function: FUN_100d96b0 at 100d96b0
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100d96b0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x148));
  if (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x158));
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x150) + (int)piVar1);
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338));
  }
  return iVar2 == 0;
}



// Function: FUN_100d9780 at 100d9780
// Size: 12 bytes

void FUN_100d9780(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}



// Function: FUN_100d978c at 100d978c
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d978c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  if (piVar1 == param_1) {
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0xb0) + (int)param_1);
    if (iVar2 == 0) {
      FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338));
    }
    else {
      FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338));
    }
  }
  param_1[1] = 0;
  iVar2 = FUN_100f57c8(param_1[2]);
  param_1[2] = iVar2;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100d9860 at 100d9860
// Size: 440 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100d9860(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_16c;
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  
  piVar3 = (int *)FUN_100f5088(param_1);
  piVar3[2] = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = _DAT_41820010;
  _DAT_41820010 = auStack_144;
  iVar4 = FUN_10000090(auStack_144);
  if (iVar4 == 0) {
    local_2c = *(int *)(local_16c + -0xd80);
    local_28 = (int *)0x0;
    local_24 = (int *)0x0;
    local_20 = 0;
    if ((param_1 != 0) &&
       (local_28 = *(int **)(param_1 + 8), local_24 = local_28, local_28 != (int *)0x0)) {
      local_20 = FUN_10117884((int)*(short *)(*local_28 + 0xd8) + (int)local_28);
    }
    FUN_10117884((int)*(short *)(local_2c + 0x10) + (int)&local_2c);
    piVar1 = local_28;
    iVar4 = FUN_100c0544(&local_2c);
    while (puVar2 = local_3c, iVar4 != 0) {
      uVar5 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x88));
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x1c8),uVar5);
      FUN_10117884((int)*(short *)(local_2c + 0x18) + (int)&local_2c);
      piVar1 = local_24;
      iVar4 = FUN_100c0544(&local_2c);
    }
  }
  else {
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x90));
    FUN_100db158((int)local_44,local_40);
    puVar2 = _DAT_41820010;
  }
  _DAT_41820010 = puVar2;
  return piVar3;
}



// Function: FUN_100d9a18 at 100d9a18
// Size: 76 bytes

int FUN_100d9a18(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
  }
  else {
    FUN_100d9a18(*(undefined4 *)(param_1 + 4));
  }
  return param_1;
}



// Function: FUN_100d9a64 at 100d9a64
// Size: 88 bytes

int FUN_100d9a64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_2;
  while (iVar2 != 0) {
    if (iVar2 == param_1) {
      if (iVar1 == 0) {
        param_2 = *(int *)(param_1 + 4);
      }
      else {
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      iVar2 = 0;
    }
    else {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return param_2;
}



// Function: FUN_100d9abc at 100d9abc
// Size: 168 bytes

void FUN_100d9abc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),param_2,param_3,param_4);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x130) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100d9b64 at 100d9b64
// Size: 128 bytes

void FUN_100d9b64(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (iVar1 == 0) {
    FUN_100db2f4(0xfffff954);
  }
  else {
    FUN_100d9abc(iVar1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100d9be4 at 100d9be4
// Size: 144 bytes

void FUN_100d9be4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x138) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100d9c74 at 100d9c74
// Size: 96 bytes

void FUN_100d9c74(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (iVar1 != 0) {
    FUN_100d9be4(iVar1,param_2);
  }
  return;
}



// Function: FUN_100d9cdc at 100d9cdc
// Size: 116 bytes

void FUN_100d9cdc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x130) + (int)piVar1,param_2,param_3);
  }
  return;
}



// Function: FUN_100d9d50 at 100d9d50
// Size: 412 bytes

int FUN_100d9d50(int *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **local_54;
  int local_30;
  int local_2c;
  int *local_28 [4];
  
  ppuVar1 = &.TVect::OCECToRString;
  if ((param_1[3] == 0x7fffffff) ||
     (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1), ppuVar1 = local_54,
     iVar2 == 0)) {
    local_54 = ppuVar1;
    iVar2 = 0x7fffffff;
  }
  else if (param_1[4] == 0) {
    iVar2 = FUN_10001a88();
  }
  else {
    iVar2 = param_1[4] + param_1[3];
  }
  local_28[0] = (int *)local_54[-0x360];
  local_28[1] = (int *)0x0;
  local_28[2] = (int *)0x0;
  local_28[3] = (int *)0x0;
  if ((param_1 != (int *)0x0) &&
     (local_28[1] = (int *)param_1[2], local_28[2] = local_28[1], local_28[1] != (int *)0x0)) {
    local_28[3] = (int *)FUN_10117884((int)*(short *)(*local_28[1] + 0xd8) + (int)local_28[1]);
  }
  FUN_10117884((int)*(short *)(local_28[0] + 4) + (int)local_28);
  piVar4 = local_28[1];
  iVar3 = FUN_100c0544(local_28);
  local_2c = iVar2;
  while (iVar3 != 0) {
    local_30 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xb0));
    piVar4 = &local_30;
    if (local_2c < local_30) {
      piVar4 = &local_2c;
    }
    iVar2 = *piVar4;
    FUN_10117884((int)*(short *)(local_28[0] + 6) + (int)local_28);
    piVar4 = local_28[2];
    iVar3 = FUN_100c0544(local_28);
    local_2c = iVar2;
  }
  return local_2c;
}



// Function: FUN_100d9eec at 100d9eec
// Size: 252 bytes

void FUN_100d9eec(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1,param_2);
  }
  if ((((param_1[3] != 0x7fffffff) &&
       (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0)), iVar2 != 0)) &&
      ((param_2 != '\x01' ||
       (iVar2 = FUN_10001a88(), (uint)param_1[3] <= (uint)(iVar2 - param_1[4]))))) &&
     ((iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2), iVar2 == 0 &&
      (param_2 == '\x01')))) {
    iVar2 = FUN_10001a88();
    param_1[4] = iVar2;
  }
  return;
}



// Function: FUN_100d9fe8 at 100d9fe8
// Size: 8 bytes

undefined4 FUN_100d9fe8(void)

{
  return 0;
}



// Function: FUN_100d9ff0 at 100d9ff0
// Size: 144 bytes

void FUN_100d9ff0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x148) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100da080 at 100da080
// Size: 96 bytes

void FUN_100da080(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (iVar1 != 0) {
    FUN_100d9ff0(iVar1,param_2);
  }
  return;
}



// Function: FUN_100da0e0 at 100da0e0
// Size: 144 bytes

void FUN_100da0e0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf8),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x150) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100da170 at 100da170
// Size: 96 bytes

void FUN_100da170(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (iVar1 != 0) {
    FUN_100da0e0(iVar1,param_2);
  }
  return;
}



// Function: FUN_100da1d0 at 100da1d0
// Size: 144 bytes

void FUN_100da1d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),param_2);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x158) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100da260 at 100da260
// Size: 96 bytes

void FUN_100da260(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (iVar1 != 0) {
    FUN_100da1d0(iVar1,param_2);
  }
  return;
}



// Function: FUN_100da2c0 at 100da2c0
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100da2c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  short sStack0000001c;
  short sStack0000001e;
  short sStack00000020;
  short sStack00000022;
  
  _sStack0000001c = param_2;
  _sStack00000020 = param_3;
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 == (int *)0x0) {
    iVar3 = FUN_10003768((int)sStack0000001e - (int)sStack00000022);
    if (iVar3 <= _DAT_9421ffb2) {
      iVar3 = FUN_10003768((int)sStack0000001c - (int)sStack00000020);
      if (iVar3 <= _DAT_9421ffb0) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0xe8) + (int)piVar1,_sStack0000001c,
                         _sStack00000020);
  }
  return uVar2;
}



// Function: FUN_100da394 at 100da394
// Size: 92 bytes

void FUN_100da394(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x120) + (int)piVar1);
  }
  return;
}



// Function: FUN_100da3f0 at 100da3f0
// Size: 132 bytes

void FUN_100da3f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x160) + (int)piVar1);
  }
  return;
}



// Function: FUN_100da474 at 100da474
// Size: 132 bytes

void FUN_100da474(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x168) + (int)piVar1,param_2,param_3,param_4,param_5);
  }
  return;
}



// Function: FUN_100da500 at 100da500
// Size: 100 bytes

undefined4 FUN_100da500(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x1f8) + (int)piVar1);
  }
  return uVar2;
}



// Function: FUN_100da564 at 100da564
// Size: 36 bytes

void FUN_100da564(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100da5a0 at 100da5a0
// Size: 276 bytes

void FUN_100da5a0(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int **)(param_1 + 8) == param_2) {
      piVar1 = (int *)FUN_10117884((int)*(short *)(*param_2 + 0xd8) + (int)param_2);
      *(int **)(param_1 + 8) = piVar1;
      if (piVar1 != (int *)0x0) {
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0),0);
      }
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 200),0);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xd0),0);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8),0);
    }
    else {
      FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x128),
                   param_2);
    }
  }
  return;
}



// Function: FUN_100da6b4 at 100da6b4
// Size: 136 bytes

void FUN_100da6b4(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8),param_1);
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 == (int *)0x0) {
      *(int **)(param_1 + 8) = param_2;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x120),param_2);
    }
  }
  return;
}



// Function: FUN_100da744 at 100da744
// Size: 132 bytes

undefined4 FUN_100da744(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x100));
    if (iVar2 == 0) {
      uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0xe0));
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 8);
    }
  }
  return uVar1;
}



// Function: FUN_100da7c8 at 100da7c8
// Size: 252 bytes

int * FUN_100da7c8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *local_20 [5];
  
  local_20[0] = (int *)&DAT_90df000c;
  local_20[1] = (int *)0x0;
  local_20[2] = (int *)0x0;
  local_20[3] = (int *)0x0;
  if ((param_1 != 0) &&
     (local_20[1] = *(int **)(param_1 + 8), local_20[2] = local_20[1], local_20[1] != (int *)0x0)) {
    local_20[3] = (int *)FUN_10117884((int)*(short *)(*local_20[1] + 0xd8) + (int)local_20[1]);
  }
  FUN_10117884((int)*(short *)(local_20[0] + 4) + (int)local_20);
  piVar1 = local_20[1];
  iVar2 = FUN_100c0544(local_20);
  while( true ) {
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    if (piVar1[1] == param_2) break;
    FUN_10117884((int)*(short *)(local_20[0] + 6) + (int)local_20);
    piVar1 = local_20[2];
    iVar2 = FUN_100c0544(local_20);
  }
  return piVar1;
}



// Function: FUN_100da8c4 at 100da8c4
// Size: 260 bytes

void FUN_100da8c4(int param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  int *local_20 [4];
  
  local_20[0] = (int *)&DAT_90df000c;
  local_20[1] = (int *)0x0;
  local_20[2] = (int *)0x0;
  local_20[3] = (int *)0x0;
  if ((param_1 != 0) &&
     (local_20[1] = *(int **)(param_1 + 8), local_20[2] = local_20[1], local_20[1] != (int *)0x0)) {
    local_20[3] = (int *)FUN_10117884((int)*(short *)(*local_20[1] + 0xd8) + (int)local_20[1]);
  }
  FUN_10117884((int)*(short *)(local_20[0] + 4) + (int)local_20);
  piVar1 = local_20[1];
  iVar2 = FUN_100c0544(local_20);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8),param_2);
    FUN_10117884((int)*(short *)(local_20[0] + 6) + (int)local_20);
    piVar1 = local_20[2];
    iVar2 = FUN_100c0544(local_20);
  }
  return;
}



// Function: FUN_100da9c8 at 100da9c8
// Size: 100 bytes

undefined4 FUN_100da9c8(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0xf0) + (int)piVar1);
  }
  return uVar2;
}



// Function: FUN_100daa2c at 100daa2c
// Size: 156 bytes

void FUN_100daa2c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    if (iVar2 != 0) {
      FUN_100f57c8(param_2);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x200) + (int)piVar1,param_2);
  }
  return;
}



// Function: FUN_100daac8 at 100daac8
// Size: 168 bytes

void FUN_100daac8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
    if (piVar1 == (int *)0x0) {
      iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
      if (iVar2 != 0) {
        FUN_100f57c8(param_2);
      }
    }
    else {
      FUN_10117884((int)*(short *)(*piVar1 + 0x208) + (int)piVar1,param_2);
    }
  }
  return;
}



// Function: FUN_100dab70 at 100dab70
// Size: 64 bytes

void FUN_100dab70(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x19,param_1,0);
  return;
}



// Function: FUN_100dabb8 at 100dabb8
// Size: 64 bytes

void FUN_100dabb8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),0x1b,param_1,0);
  return;
}



// Function: FUN_100dabfc at 100dabfc
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_100dabfc(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  return (uVar1 <= param_1 && (uint)(uVar1 < param_1) <= param_1 - uVar1) - (uVar1 < param_1);
}



// Function: FUN_100dac54 at 100dac54
// Size: 4 bytes

void FUN_100dac54(void)

{
  return;
}



// Function: FUN_100dac58 at 100dac58
// Size: 276 bytes

void FUN_100dac58(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar3;
  int iVar2;
  int iVar4;
  undefined4 local_18;
  
  FUN_100f5100(param_1,param_2);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
  param_1[6] = iVar1;
  uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 5) = uVar3;
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  param_1[3] = iVar1;
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      local_18 = 0;
      iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_18);
      if (iVar2 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),local_18);
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < iVar1);
  }
  return;
}



// Function: FUN_100dad6c at 100dad6c
// Size: 444 bytes

void FUN_100dad6c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_100f5104(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),param_1[6]);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 5));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[3]);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),0);
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  iVar4 = 0;
  for (; piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8))) {
    iVar4 = (int)(short)((short)iVar4 + 1);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),piVar2,1);
  }
  if (iVar4 != 0) {
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0),uVar1);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),iVar4);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0),uVar3);
  }
  return;
}



// Function: FUN_100daf30 at 100daf30
// Size: 8 bytes

undefined4 FUN_100daf30(void)

{
  return 0;
}



// Function: FUN_100daf38 at 100daf38
// Size: 168 bytes

void FUN_100daf38(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar2 == (int *)0x0) {
    sVar1 = *(short *)(param_2 + 0x14);
    if (((sVar1 == 3) || (sVar1 == 4)) || (sVar1 == 5)) {
      *(ushort *)(param_2 + 0x24) = (ushort)*(undefined4 *)(param_2 + 0x16) & 0xff;
      *(ushort *)(param_2 + 0x26) = (ushort)((uint)*(undefined4 *)(param_2 + 0x16) >> 8) & 0xff;
    }
  }
  else {
    FUN_10117884((int)*(short *)(*piVar2 + 0x108) + (int)piVar2,param_2);
  }
  return;
}



// Function: FUN_100dafe8 at 100dafe8
// Size: 124 bytes

void FUN_100dafe8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100db064 at 100db064
// Size: 168 bytes

void FUN_100db064(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,param_3,param_4);
  }
  else {
    FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_100db10c at 100db10c
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100db10c(void)

{
  _DAT_9421ffb0 = 4;
  _DAT_9421ffb2 = 4;
  FUN_100c1c8c(_FUN_10116c28,_DAT_7fa73010,0x1c,0x7c1de000,0x90c30020);
  return;
}



// Function: FUN_100db158 at 100db158
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100db158(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_41820010;
  if (_DAT_41820010 == 0) {
    FUN_10000150();
  }
  else {
    do {
      _DAT_41820010 = *(int *)(iVar1 + 0x108);
      *(undefined2 *)(iVar1 + 0x100) = param_1;
      *(undefined4 *)(iVar1 + 0x104) = param_2;
      if (*(int *)(iVar1 + 0x10c) == 0) {
        FUN_10001d28(iVar1,0);
      }
      else {
        FUN_10117884(*(undefined4 *)(iVar1 + 0x110));
      }
      iVar1 = _DAT_41820010;
    } while (_DAT_41820010 != 0);
  }
  return;
}



// Function: FUN_100db1ec at 100db1ec
// Size: 64 bytes

void FUN_100db1ec(void)

{
  int iVar1;
  
  iVar1 = FUN_10002b20();
  if (iVar1 != 0) {
    FUN_100db158(iVar1,0);
  }
  return;
}



// Function: FUN_100db22c at 100db22c
// Size: 64 bytes

void FUN_100db22c(short param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    FUN_100db158((int)param_1,param_3);
  }
  else {
    FUN_100db158((int)param_1);
  }
  return;
}



// Function: FUN_100db26c at 100db26c
// Size: 56 bytes

void FUN_100db26c(int param_1)

{
  if (param_1 == 0) {
    FUN_100db158(0xffffff94,0);
  }
  return;
}



// Function: FUN_100db2a4 at 100db2a4
// Size: 80 bytes

void FUN_100db2a4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_10000678();
    if (iVar1 == 0) {
      iVar1 = -0xc0;
    }
    FUN_100db158(iVar1,0);
  }
  return;
}



// Function: FUN_100db2f4 at 100db2f4
// Size: 52 bytes

void FUN_100db2f4(short param_1)

{
  if (param_1 != 0) {
    FUN_100db158((int)param_1,0);
  }
  return;
}



// Function: FUN_100db328 at 100db328
// Size: 64 bytes

void FUN_100db328(void)

{
  int iVar1;
  
  iVar1 = FUN_10000678();
  if (iVar1 != 0) {
    FUN_100db158(iVar1,0);
  }
  return;
}



// Function: FUN_100db368 at 100db368
// Size: 80 bytes

void FUN_100db368(undefined4 param_1)

{
  undefined1 auStack_108 [260];
  
  FUN_100b1e10(auStack_108,param_1,0x40810008);
  FUN_100b1c84(auStack_108);
  FUN_100023b8();
  return;
}



// Function: FUN_100db3b8 at 100db3b8
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100db3b8(int param_1)

{
  _DAT_41820010 = *(undefined4 *)(param_1 + 0x108);
  return;
}



// Function: FUN_100db3c8 at 100db3c8
// Size: 212 bytes

undefined4 * FUN_100db3c8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x68), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x807e000c;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 10) = 0;
    param_1[0x13] = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
    param_1[0x14] = 0x54455854;
    param_1[0x15] = 0x3f3f3f3f;
    *(undefined2 *)(param_1 + 0x16) = 0xffff;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    *(undefined1 *)(param_1 + 0x17) = 2;
    *(undefined1 *)((int)param_1 + 0x5d) = 1;
    *(undefined1 *)((int)param_1 + 0x5e) = 1;
    *(undefined1 *)((int)param_1 + 0x5f) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined2 *)((int)param_1 + 0x62) = 0x8002;
    *(undefined2 *)(param_1 + 0x19) = 0x8002;
  }
  return param_1;
}



// Function: FUN_100db49c at 100db49c
// Size: 100 bytes

void FUN_100db49c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  FUN_100f5274(param_1);
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(undefined1 *)(param_1 + 0x5b) = param_4;
  *(undefined1 *)(param_1 + 0x5c) = param_5;
  *(undefined1 *)(param_1 + 0x5f) = param_6;
  *(undefined1 *)(param_1 + 0x60) = param_7;
  return;
}



// Function: FUN_100db500 at 100db500
// Size: 116 bytes

undefined4
FUN_100db500(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100db3c8(0);
  FUN_100db49c(uVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}



// Function: FUN_100db57c at 100db57c
// Size: 40 bytes

void FUN_100db57c(void)

{
  FUN_100db3c8(0);
  return;
}



// Function: FUN_100db5a4 at 100db5a4
// Size: 76 bytes

void FUN_100db5a4(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100db5f0 at 100db5f0
// Size: 112 bytes

void FUN_100db5f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  param_1[1] = *param_2;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  param_1[4] = iVar3;
  param_1[5] = iVar4;
  param_1[6] = iVar5;
  iVar1 = param_2[7];
  iVar2 = param_2[8];
  iVar3 = param_2[9];
  iVar4 = param_2[10];
  iVar5 = param_2[0xb];
  param_1[7] = param_2[6];
  param_1[8] = iVar1;
  param_1[9] = iVar2;
  param_1[10] = iVar3;
  param_1[0xb] = iVar4;
  param_1[0xc] = iVar5;
  iVar1 = param_2[0xd];
  iVar2 = param_2[0xe];
  iVar3 = param_2[0xf];
  iVar4 = param_2[0x10];
  uVar6 = param_2[0x11];
  param_1[0xd] = param_2[0xc];
  param_1[0xe] = iVar1;
  param_1[0xf] = iVar2;
  param_1[0x10] = iVar3;
  param_1[0x11] = iVar4;
  param_1[0x12] = uVar6 & 0xffff0000;
  return;
}



// Function: FUN_100db660 at 100db660
// Size: 108 bytes

void FUN_100db660(int *param_1,int param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),param_2 + 6);
  param_1[0x14] = *(int *)(param_2 + 2);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x4c);
  if ((*(ushort *)(param_2 + 0x4e) & 0x800) != 0) {
    *(undefined1 *)((int)param_1 + 0x5a) = 1;
  }
  return;
}



// Function: FUN_100db6cc at 100db6cc
// Size: 164 bytes

void FUN_100db6cc(int *param_1,int param_2)

{
  uint *puVar1;
  uint local_58;
  uint local_54;
  undefined1 auStack_50 [64];
  
  puVar1 = &local_58;
  local_54 = *(byte *)(param_2 + 10) + 1;
  local_58 = 0x40;
  if (local_54 < 0x40) {
    puVar1 = &local_54;
  }
  FUN_100012d8((byte *)(param_2 + 10),auStack_50,*puVar1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),(int)*(short *)(param_2 + 6),0,
               auStack_50);
  param_1[0x14] = *(int *)(param_2 + 2);
  return;
}



// Function: FUN_100db770 at 100db770
// Size: 228 bytes

int FUN_100db770(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_70 [72];
  int local_28;
  int local_24;
  ushort local_20;
  undefined1 auStack_18 [8];
  
  iVar1 = FUN_10002070(0,param_2,auStack_70,auStack_18);
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),auStack_70);
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),&local_28);
    if (iVar2 == 0) {
      param_1[0x14] = local_28;
      param_1[0x15] = local_24;
      if ((local_20 & 0x800) != 0) {
        *(undefined1 *)((int)param_1 + 0x5a) = 1;
      }
    }
    else {
      param_1[0x14] = 0x54455854;
      param_1[0x15] = 0x3f3f3f3f;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
    }
  }
  return iVar1;
}



// Function: FUN_100db864 at 100db864
// Size: 168 bytes

void FUN_100db864(int *param_1,int param_2)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)(param_2 + 8);
  uStack_60 = *(undefined4 *)(param_2 + 0xc);
  uStack_5c = *(undefined4 *)(param_2 + 0x10);
  uStack_58 = *(undefined4 *)(param_2 + 0x14);
  uStack_54 = *(undefined4 *)(param_2 + 0x18);
  local_50 = *(undefined4 *)(param_2 + 0x1c);
  uStack_4c = *(undefined4 *)(param_2 + 0x20);
  uStack_48 = *(undefined4 *)(param_2 + 0x24);
  uStack_44 = *(undefined4 *)(param_2 + 0x28);
  uStack_40 = *(undefined4 *)(param_2 + 0x2c);
  uStack_3c = *(undefined4 *)(param_2 + 0x30);
  local_38 = *(undefined4 *)(param_2 + 0x34);
  uStack_34 = *(undefined4 *)(param_2 + 0x38);
  uStack_30 = *(undefined4 *)(param_2 + 0x3c);
  uStack_2c = *(undefined4 *)(param_2 + 0x40);
  uStack_28 = *(undefined4 *)(param_2 + 0x44);
  uStack_24 = *(uint *)(param_2 + 0x48) & 0xffff0000;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),&local_68);
  param_1[0x14] = *(int *)(param_2 + 0x50);
  param_1[0x15] = *(int *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x58);
  *(undefined1 *)((int)param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  return;
}



// Function: FUN_100db90c at 100db90c
// Size: 172 bytes

int FUN_100db90c(int *param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_68 [76];
  
  uVar1 = FUN_100b1c84(param_4);
  iVar2 = FUN_10001848((int)param_2,param_3,uVar1,auStack_68);
  if (iVar2 == -0x2b) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8),auStack_68);
  }
  return iVar2;
}



// Function: FUN_100dba30 at 100dba30
// Size: 172 bytes

int FUN_100dba30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  }
  if (((*(char *)(param_1 + 0x17) != '\x02') &&
      (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0xf0) + (int)param_1),
      *(char *)(param_1 + 0x17) == '\x01')) && (iVar2 == -0xc1)) {
    iVar2 = 0;
  }
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// Function: FUN_100dbadc at 100dbadc
// Size: 196 bytes

int FUN_100dbadc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if ((*(char *)((int)param_1 + 0x5b) != '\0') && (*(char *)((int)param_1 + 0x5f) == '\0')) {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe8) + (int)param_1);
  }
  if ((((*(char *)(param_1 + 0x17) != '\x02') && (*(char *)(param_1 + 0x18) == '\0')) &&
      (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0)),
      *(char *)(param_1 + 0x17) == '\x01')) && (iVar2 == -0xc1)) {
    iVar2 = 0;
  }
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// Function: FUN_100dbba0 at 100dbba0
// Size: 80 bytes

undefined4 FUN_100dbba0(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x62) == -0x7ffe) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10001878((int)*(short *)(param_1 + 0x62));
    *(undefined2 *)(param_1 + 0x62) = 0x8002;
  }
  return uVar1;
}



// Function: FUN_100dbbf0 at 100dbbf0
// Size: 88 bytes

undefined4 FUN_100dbbf0(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 100) == -0x7ffe) {
    uVar1 = 0;
  }
  else {
    FUN_10003300((int)*(short *)(param_1 + 100));
    uVar1 = FUN_10000678();
    *(undefined2 *)(param_1 + 100) = 0x8002;
  }
  return uVar1;
}



// Function: FUN_100dbc48 at 100dbc48
// Size: 148 bytes

int FUN_100dbc48(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x100) + (int)param_1);
  }
  if (*(char *)(param_1 + 0x17) != '\x02') {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x108) + (int)param_1);
  }
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// Function: FUN_100dbcdc at 100dbcdc
// Size: 148 bytes

void FUN_100dbcdc(int param_1)

{
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [72];
  
  local_b0 = *(undefined4 *)(param_1 + 4);
  uStack_ac = *(undefined4 *)(param_1 + 8);
  uStack_a8 = *(undefined4 *)(param_1 + 0xc);
  uStack_a4 = *(undefined4 *)(param_1 + 0x10);
  uStack_a0 = *(undefined4 *)(param_1 + 0x14);
  uStack_9c = *(undefined4 *)(param_1 + 0x18);
  local_98 = *(undefined4 *)(param_1 + 0x1c);
  uStack_94 = *(undefined4 *)(param_1 + 0x20);
  uStack_90 = *(undefined4 *)(param_1 + 0x24);
  uStack_8c = *(undefined4 *)(param_1 + 0x28);
  uStack_88 = *(undefined4 *)(param_1 + 0x2c);
  uStack_84 = *(undefined4 *)(param_1 + 0x30);
  local_80 = *(undefined4 *)(param_1 + 0x34);
  uStack_7c = *(undefined4 *)(param_1 + 0x38);
  uStack_78 = *(undefined4 *)(param_1 + 0x3c);
  uStack_74 = *(undefined4 *)(param_1 + 0x40);
  uStack_70 = *(undefined4 *)(param_1 + 0x44);
  uStack_6c = *(uint *)(param_1 + 0x48) & 0xffff0000;
  FUN_10001890(&local_b0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50),
               (int)*(short *)(param_1 + 0x58),auStack_68,&local_b0,auStack_64);
  return;
}



// Function: FUN_100dbde8 at 100dbde8
// Size: 160 bytes

void FUN_100dbde8(int param_1)

{
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [200];
  
  local_130 = *(undefined4 *)(param_1 + 4);
  uStack_12c = *(undefined4 *)(param_1 + 8);
  uStack_128 = *(undefined4 *)(param_1 + 0xc);
  uStack_124 = *(undefined4 *)(param_1 + 0x10);
  uStack_120 = *(undefined4 *)(param_1 + 0x14);
  uStack_11c = *(undefined4 *)(param_1 + 0x18);
  local_118 = *(undefined4 *)(param_1 + 0x1c);
  uStack_114 = *(undefined4 *)(param_1 + 0x20);
  uStack_110 = *(undefined4 *)(param_1 + 0x24);
  uStack_10c = *(undefined4 *)(param_1 + 0x28);
  uStack_108 = *(undefined4 *)(param_1 + 0x2c);
  uStack_104 = *(undefined4 *)(param_1 + 0x30);
  local_100 = *(undefined4 *)(param_1 + 0x34);
  uStack_fc = *(undefined4 *)(param_1 + 0x38);
  uStack_f8 = *(undefined4 *)(param_1 + 0x3c);
  uStack_f4 = *(undefined4 *)(param_1 + 0x40);
  uStack_f0 = *(undefined4 *)(param_1 + 0x44);
  uStack_ec = *(uint *)(param_1 + 0x48) & 0xffff0000;
  FUN_10002b68(&local_130,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50),
               (int)*(short *)(param_1 + 0x58),auStack_e8,&local_130,auStack_e4);
  FUN_10000678();
  return;
}



// Function: FUN_100dbf50 at 100dbf50
// Size: 144 bytes

void FUN_100dbf50(int param_1)

{
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  local_b0 = *(undefined4 *)(param_1 + 4);
  uStack_ac = *(undefined4 *)(param_1 + 8);
  uStack_a8 = *(undefined4 *)(param_1 + 0xc);
  uStack_a4 = *(undefined4 *)(param_1 + 0x10);
  uStack_a0 = *(undefined4 *)(param_1 + 0x14);
  uStack_9c = *(undefined4 *)(param_1 + 0x18);
  local_98 = *(undefined4 *)(param_1 + 0x1c);
  uStack_94 = *(undefined4 *)(param_1 + 0x20);
  uStack_90 = *(undefined4 *)(param_1 + 0x24);
  uStack_8c = *(undefined4 *)(param_1 + 0x28);
  uStack_88 = *(undefined4 *)(param_1 + 0x2c);
  uStack_84 = *(undefined4 *)(param_1 + 0x30);
  local_80 = *(undefined4 *)(param_1 + 0x34);
  uStack_7c = *(undefined4 *)(param_1 + 0x38);
  uStack_78 = *(undefined4 *)(param_1 + 0x3c);
  uStack_74 = *(undefined4 *)(param_1 + 0x40);
  uStack_70 = *(undefined4 *)(param_1 + 0x44);
  uStack_6c = *(uint *)(param_1 + 0x48) & 0xffff0000;
  FUN_100018d8(&local_b0);
  return;
}



// Function: FUN_100dc050 at 100dc050
// Size: 188 bytes

int FUN_100dc050(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x128) + (int)param_1,
                         (int)*(char *)((int)param_1 + 0x5d));
  }
  if (((*(char *)(param_1 + 0x17) != '\x02') &&
      (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x130) + (int)param_1,
                            (int)*(char *)((int)param_1 + 0x5e)),
      *(char *)(param_1 + 0x17) == '\x01')) && (iVar2 != 0)) {
    iVar2 = 0;
  }
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// Function: FUN_100dc10c at 100dc10c
// Size: 212 bytes

int FUN_100dc10c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if ((*(char *)((int)param_1 + 0x5b) != '\0') && (*(char *)((int)param_1 + 0x5f) != '\0')) {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x128) + (int)param_1,
                         (int)*(char *)((int)param_1 + 0x5d));
  }
  if ((((*(char *)(param_1 + 0x17) != '\x02') && (*(char *)(param_1 + 0x18) != '\0')) &&
      (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),
                            (int)*(char *)((int)param_1 + 0x5e)),
      *(char *)(param_1 + 0x17) == '\x01')) && (iVar2 != 0)) {
    iVar2 = 0;
  }
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// Function: FUN_100dc1e0 at 100dc1e0
// Size: 300 bytes

int FUN_100dc1e0(int param_1,byte param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_e0;
  uint local_dc;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [18];
  undefined1 *local_86;
  undefined2 local_82;
  undefined2 local_80;
  ushort local_7e;
  undefined4 local_68;
  
  if (*(short *)(param_1 + 0x62) == -0x7ffe) {
    puVar2 = &local_e0;
    local_dc = *(byte *)(param_1 + 10) + 1;
    local_e0 = 0x40;
    if (local_dc < 0x40) {
      puVar2 = &local_dc;
    }
    FUN_100012d8((byte *)(param_1 + 10),auStack_d8,*puVar2);
    iVar1 = FUN_100eed08(auStack_98,0x7a,0);
    local_82 = *(undefined2 *)(param_1 + 4);
    local_68 = *(undefined4 *)(param_1 + 6);
    if (param_2 < 5) {
      return iVar1;
    }
    local_7e = 0x21;
    local_86 = auStack_d8;
    iVar1 = FUN_10002d78(auStack_98);
    if ((iVar1 == -0x32) || (iVar1 == -0x2c)) {
      local_7e = CONCAT11(local_7e._0_1_,param_2) & 0xff03;
      iVar1 = FUN_10002ec8(auStack_98);
    }
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0x62) = local_80;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Function: FUN_100dc49c at 100dc49c
// Size: 172 bytes

void FUN_100dc49c(int param_1,int param_2)

{
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  local_60 = *(undefined4 *)(param_1 + 4);
  uStack_5c = *(undefined4 *)(param_1 + 8);
  uStack_58 = *(undefined4 *)(param_1 + 0xc);
  uStack_54 = *(undefined4 *)(param_1 + 0x10);
  uStack_50 = *(undefined4 *)(param_1 + 0x14);
  uStack_4c = *(undefined4 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x1c);
  uStack_44 = *(undefined4 *)(param_1 + 0x20);
  uStack_40 = *(undefined4 *)(param_1 + 0x24);
  uStack_3c = *(undefined4 *)(param_1 + 0x28);
  uStack_38 = *(undefined4 *)(param_1 + 0x2c);
  uStack_34 = *(undefined4 *)(param_1 + 0x30);
  local_30 = *(undefined4 *)(param_1 + 0x34);
  uStack_2c = *(undefined4 *)(param_1 + 0x38);
  uStack_28 = *(undefined4 *)(param_1 + 0x3c);
  uStack_24 = *(undefined4 *)(param_1 + 0x40);
  uStack_20 = *(undefined4 *)(param_1 + 0x44);
  uStack_1c = *(uint *)(param_1 + 0x48) & 0xffff0000;
  local_a8 = *(undefined4 *)(param_2 + 4);
  uStack_a4 = *(undefined4 *)(param_2 + 8);
  uStack_a0 = *(undefined4 *)(param_2 + 0xc);
  uStack_9c = *(undefined4 *)(param_2 + 0x10);
  uStack_98 = *(undefined4 *)(param_2 + 0x14);
  uStack_94 = *(undefined4 *)(param_2 + 0x18);
  local_90 = *(undefined4 *)(param_2 + 0x1c);
  uStack_8c = *(undefined4 *)(param_2 + 0x20);
  uStack_88 = *(undefined4 *)(param_2 + 0x24);
  uStack_84 = *(undefined4 *)(param_2 + 0x28);
  uStack_80 = *(undefined4 *)(param_2 + 0x2c);
  uStack_7c = *(undefined4 *)(param_2 + 0x30);
  local_78 = *(undefined4 *)(param_2 + 0x34);
  uStack_74 = *(undefined4 *)(param_2 + 0x38);
  uStack_70 = *(undefined4 *)(param_2 + 0x3c);
  uStack_6c = *(undefined4 *)(param_2 + 0x40);
  uStack_68 = *(undefined4 *)(param_2 + 0x44);
  uStack_64 = *(uint *)(param_2 + 0x48) & 0xffff0000;
  FUN_10001a10(&local_60,&local_a8);
  return;
}



// Function: FUN_100dc55c at 100dc55c
// Size: 120 bytes

void FUN_100dc55c(int param_1)

{
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  local_60 = *(undefined4 *)(param_1 + 4);
  uStack_5c = *(undefined4 *)(param_1 + 8);
  uStack_58 = *(undefined4 *)(param_1 + 0xc);
  uStack_54 = *(undefined4 *)(param_1 + 0x10);
  uStack_50 = *(undefined4 *)(param_1 + 0x14);
  uStack_4c = *(undefined4 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x1c);
  uStack_44 = *(undefined4 *)(param_1 + 0x20);
  uStack_40 = *(undefined4 *)(param_1 + 0x24);
  uStack_3c = *(undefined4 *)(param_1 + 0x28);
  uStack_38 = *(undefined4 *)(param_1 + 0x2c);
  uStack_34 = *(undefined4 *)(param_1 + 0x30);
  local_30 = *(undefined4 *)(param_1 + 0x34);
  uStack_2c = *(undefined4 *)(param_1 + 0x38);
  uStack_28 = *(undefined4 *)(param_1 + 0x3c);
  uStack_24 = *(undefined4 *)(param_1 + 0x40);
  uStack_20 = *(undefined4 *)(param_1 + 0x44);
  uStack_1c = *(uint *)(param_1 + 0x48) & 0xffff0000;
  FUN_10002ef8(&local_60);
  return;
}



// Function: FUN_100dc5e8 at 100dc5e8
// Size: 220 bytes

void FUN_100dc5e8(int param_1,int param_2)

{
  uint *puVar1;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = &local_a0;
  local_58 = (uint)local_58._1_3_;
  local_9c = *(byte *)(param_1 + 10) + 1;
  local_a0 = 0x40;
  if (local_9c < 0x40) {
    puVar1 = &local_9c;
  }
  FUN_100012d8((byte *)(param_1 + 10),&local_98,*puVar1);
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uStack_28 = uStack_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  *(uint **)(param_2 + 0x12) = &local_58;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
  FUN_10002058(param_2);
  *(undefined4 *)(param_2 + 0x12) = 0;
  return;
}



// Function: FUN_100dc6c4 at 100dc6c4
// Size: 92 bytes

undefined4 FUN_100dc6c4(int *param_1)

{
  int iVar1;
  undefined1 auStack_88 [72];
  undefined4 local_40;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_88);
  if (iVar1 != 0) {
    local_40 = 0;
  }
  return local_40;
}



// Function: FUN_100dc720 at 100dc720
// Size: 40 bytes

void FUN_100dc720(int param_1)

{
  FUN_10001968((int)*(short *)(param_1 + 0x62));
  return;
}



// Function: FUN_100dc748 at 100dc748
// Size: 40 bytes

void FUN_100dc748(int param_1)

{
  FUN_10001980((int)*(short *)(param_1 + 0x62));
  return;
}



// Function: FUN_100dc778 at 100dc778
// Size: 100 bytes

int FUN_100dc778(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),auStack_18);
  if (iVar1 == 0) {
    *param_2 = local_14;
  }
  return iVar1;
}



// Function: FUN_100dc7dc at 100dc7dc
// Size: 228 bytes

void FUN_100dc7dc(int param_1,int param_2)

{
  uint *puVar1;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = &local_a0;
  local_58 = (uint)local_58._1_3_;
  local_9c = *(byte *)(param_1 + 10) + 1;
  local_a0 = 0x40;
  if (local_9c < 0x40) {
    puVar1 = &local_9c;
  }
  FUN_100012d8((byte *)(param_1 + 10),&local_98,*puVar1);
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  uStack_48 = uStack_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uStack_28 = uStack_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  *(uint **)(param_2 + 0x12) = &local_58;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  FUN_10000e40(param_2);
  *(undefined4 *)(param_2 + 0x12) = 0;
  return;
}



// Function: FUN_100dc8c0 at 100dc8c0
// Size: 100 bytes

int FUN_100dc8c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [4];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),local_18);
  if (iVar1 == 0) {
    *param_2 = local_18[0];
  }
  return iVar1;
}



// Function: FUN_100dc954 at 100dc954
// Size: 144 bytes

void FUN_100dc954(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [68];
  
  local_b0 = *(undefined4 *)(param_1 + 4);
  uStack_ac = *(undefined4 *)(param_1 + 8);
  uStack_a8 = *(undefined4 *)(param_1 + 0xc);
  uStack_a4 = *(undefined4 *)(param_1 + 0x10);
  uStack_a0 = *(undefined4 *)(param_1 + 0x14);
  uStack_9c = *(undefined4 *)(param_1 + 0x18);
  local_98 = *(undefined4 *)(param_1 + 0x1c);
  uStack_94 = *(undefined4 *)(param_1 + 0x20);
  uStack_90 = *(undefined4 *)(param_1 + 0x24);
  uStack_8c = *(undefined4 *)(param_1 + 0x28);
  uStack_88 = *(undefined4 *)(param_1 + 0x2c);
  uStack_84 = *(undefined4 *)(param_1 + 0x30);
  local_80 = *(undefined4 *)(param_1 + 0x34);
  uStack_7c = *(undefined4 *)(param_1 + 0x38);
  uStack_78 = *(undefined4 *)(param_1 + 0x3c);
  uStack_74 = *(undefined4 *)(param_1 + 0x40);
  uStack_70 = *(undefined4 *)(param_1 + 0x44);
  uStack_6c = *(uint *)(param_1 + 0x48) & 0xffff0000;
  FUN_10001530(&local_b0,param_2,param_3,param_4,auStack_68,&local_b0,auStack_64);
  return;
}



// Function: FUN_100dca58 at 100dca58
// Size: 92 bytes

undefined4 FUN_100dca58(int *param_1)

{
  int iVar1;
  undefined1 auStack_88 [76];
  undefined4 local_3c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_88);
  if (iVar1 != 0) {
    local_3c = 0;
  }
  return local_3c;
}



// Function: FUN_100dcab4 at 100dcab4
// Size: 156 bytes

void FUN_100dcab4(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = &local_70;
  local_6c = *(byte *)(param_1 + 10) + 1;
  local_70 = 0x40;
  if (local_6c < 0x40) {
    puVar1 = &local_6c;
  }
  FUN_100012d8((byte *)(param_1 + 10),&local_68,*puVar1);
  *param_2 = local_68;
  param_2[1] = uStack_64;
  param_2[2] = uStack_60;
  param_2[3] = uStack_5c;
  param_2[4] = uStack_58;
  param_2[5] = uStack_54;
  param_2[6] = uStack_50;
  param_2[7] = uStack_4c;
  param_2[8] = local_48;
  param_2[9] = uStack_44;
  param_2[10] = uStack_40;
  param_2[0xb] = uStack_3c;
  param_2[0xc] = uStack_38;
  param_2[0xd] = uStack_34;
  param_2[0xe] = uStack_30;
  param_2[0xf] = uStack_2c;
  return;
}



// Function: FUN_100dcb50 at 100dcb50
// Size: 404 bytes

int FUN_100dcb50(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_2b4;
  uint local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  uint uStack_270;
  uint local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined1 auStack_240 [64];
  uint local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  uint uStack_1e0;
  undefined1 auStack_1d8 [256];
  undefined1 auStack_d8 [18];
  undefined1 *local_c6;
  undefined2 local_c2;
  undefined2 local_bc;
  int local_a8;
  int local_74;
  undefined1 auStack_68 [68];
  
  FUN_100b1fec(auStack_240,0x639d0008);
  FUN_100b1fec(auStack_68,0x639d000c);
  local_200 = local_200 & 0xffffff;
  FUN_100b1d90(param_2,0x639d0010);
  if (DAT_7c0903c3 == '\0') {
    FUN_100b20f0(&local_268,0x639d0018);
    local_200 = local_268;
    uStack_1fc = uStack_264;
    uStack_1f8 = uStack_260;
    uStack_1f4 = uStack_25c;
    uStack_1f0 = uStack_258;
    local_1ec = local_254;
    uStack_1e8 = uStack_250;
    uStack_1e4 = uStack_24c;
    uStack_270 = uStack_248;
  }
  else {
    FUN_100b20f0(&local_290,0x639d0014);
    local_200 = local_290;
    uStack_1fc = uStack_28c;
    uStack_1f8 = uStack_288;
    uStack_1f4 = uStack_284;
    uStack_1f0 = uStack_280;
    local_1ec = local_27c;
    uStack_1e8 = uStack_278;
    uStack_1e4 = uStack_274;
  }
  uStack_1e0 = uStack_270 & 0xff000000;
  local_bc = 0xffff;
  local_c2 = *(undefined2 *)(param_1 + 4);
  local_a8 = *(int *)(param_1 + 6);
  local_c6 = auStack_240;
  do {
    iVar1 = FUN_10002058(auStack_d8);
    FUN_100b1ed0(auStack_1d8,auStack_240,&local_200);
    FUN_100b1900(param_2,auStack_1d8,1,0xff);
    if (local_a8 == 2) break;
    local_a8 = local_74;
  } while (iVar1 == 0);
  if (DAT_7c0903c3 != '\0') {
    FUN_100b1ab0(param_2,*(int *)(local_2b4 + -0x9b4) + 0x1c,1,0xff);
  }
  return iVar1;
}



// Function: FUN_100dcce4 at 100dcce4
// Size: 112 bytes

int FUN_100dcce4(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_90 [58];
  undefined4 local_56;
  undefined4 local_4c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if (iVar1 == 0) {
    *param_2 = local_56;
    *param_3 = local_4c;
  }
  return iVar1;
}



// Function: FUN_100dcd54 at 100dcd54
// Size: 128 bytes

int FUN_100dcd54(int *param_1,short *param_2)

{
  int iVar1;
  undefined1 auStack_80 [92];
  char local_24;
  
  FUN_100eed08(auStack_80,0x6c,0);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),auStack_80);
  if (iVar1 == 0) {
    *param_2 = (short)local_24;
    *(short *)(param_1 + 0x16) = (short)local_24;
  }
  return iVar1;
}



// Function: FUN_100dcdd4 at 100dcdd4
// Size: 128 bytes

int FUN_100dcdd4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_90 [76];
  undefined4 local_44;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if (iVar1 == 0) {
    local_44 = param_2;
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_90);
  }
  return iVar1;
}



// Function: FUN_100dce54 at 100dce54
// Size: 128 bytes

int FUN_100dce54(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_90 [72];
  undefined4 local_48;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if (iVar1 == 0) {
    local_48 = param_2;
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_90);
  }
  return iVar1;
}



// Function: FUN_100dced4 at 100dced4
// Size: 136 bytes

int FUN_100dced4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_90 [32];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),auStack_90);
  if (iVar1 == 0) {
    local_70 = *param_2;
    uStack_6c = param_2[1];
    uStack_68 = param_2[2];
    uStack_64 = param_2[3];
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_90);
  }
  return iVar1;
}



// Function: FUN_100dcf5c at 100dcf5c
// Size: 44 bytes

void FUN_100dcf5c(int param_1)

{
  FUN_10002d18(0,(int)*(short *)(param_1 + 4));
  return;
}



// Function: FUN_100dcf88 at 100dcf88
// Size: 132 bytes

int FUN_100dcf88(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  
  FUN_100eed08(auStack_90,0x7a,0);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),auStack_90);
  if (iVar1 == 0) {
    *param_2 = local_60;
  }
  else {
    *param_2 = 0;
  }
  return iVar1;
}



// Function: FUN_100dd00c at 100dd00c
// Size: 132 bytes

int FUN_100dd00c(int *param_1,uint *param_2)

{
  int iVar1;
  undefined1 auStack_90 [62];
  ushort local_52;
  
  FUN_100eed08(auStack_90,0x7a,0);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),auStack_90);
  if (iVar1 == 0) {
    *param_2 = (uint)local_52;
  }
  else {
    *param_2 = 0;
  }
  return iVar1;
}



// Function: FUN_100dd090 at 100dd090
// Size: 68 bytes

void FUN_100dd090(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(param_2 + 0x1c) = 0xffff;
  FUN_10000828(param_2);
  return;
}



// Function: FUN_100dd0d4 at 100dd0d4
// Size: 100 bytes

void FUN_100dd0d4(int param_1,undefined4 param_2)

{
  undefined1 auStack_90 [18];
  undefined4 local_7e;
  undefined2 local_7a;
  undefined2 local_74;
  
  FUN_100eed08(auStack_90,0x7a,0);
  local_7a = *(undefined2 *)(param_1 + 4);
  local_74 = 0;
  local_7e = param_2;
  FUN_10000828(auStack_90);
  return;
}



// Function: FUN_100dd178 at 100dd178
// Size: 224 bytes

undefined4 FUN_100dd178(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_50 [68];
  
  local_50[0] = 0;
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8));
  if ((*(short *)(param_1 + 4) == iVar1) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x160) + (int)param_2),
     *(int *)(param_1 + 6) == iVar1)) {
    FUN_10117884((int)*(short *)(*param_2 + 0x198) + (int)param_2,local_50);
    uVar2 = FUN_100b1c84(local_50);
    uVar3 = FUN_100b1c84(param_1 + 10);
    iVar1 = FUN_10001998(uVar3,uVar2,0,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100dd260 at 100dd260
// Size: 88 bytes

bool FUN_100dd260(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400));
  return iVar1 != param_1[0x13];
}



// Function: FUN_100dd2b8 at 100dd2b8
// Size: 112 bytes

int FUN_100dd2b8(int *param_1,char *param_2)

{
  int iVar1;
  undefined1 auStack_88 [38];
  short local_62;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),auStack_88);
  if (iVar1 == 0) {
    *param_2 = '\x01' - (((int)local_62 & 0x8080U) == 0);
  }
  return iVar1;
}



// Function: FUN_100dd378 at 100dd378
// Size: 68 bytes

void FUN_100dd378(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400));
  param_1[0x13] = iVar1;
  return;
}



// Function: FUN_100dd3bc at 100dd3bc
// Size: 280 bytes

int FUN_100dd3bc(int param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_200 [18];
  undefined1 *local_1ee;
  undefined2 local_1ea;
  undefined1 *local_1e4;
  undefined4 local_1dc;
  undefined4 local_1d0;
  undefined1 auStack_1c8 [18];
  undefined1 *local_1b6;
  short local_1b2;
  undefined2 local_1ac;
  undefined4 local_198;
  undefined4 local_164;
  undefined1 local_158 [64];
  undefined1 local_118 [256];
  
  local_118[0] = 0;
  local_158[0] = 0;
  local_1b2 = *param_2;
  local_198 = *(undefined4 *)(param_2 + 1);
  local_1ac = 0xffff;
  local_1b6 = local_158;
  iVar1 = FUN_10002058(auStack_1c8);
  if (iVar1 == 0) {
    FUN_100012d8(param_1 + 10,local_118,*(byte *)(param_1 + 10) + 1);
    local_1ea = *(undefined2 *)(param_1 + 4);
    local_1d0 = *(undefined4 *)(param_1 + 6);
    local_1dc = local_164;
    local_1ee = local_118;
    local_1e4 = local_158;
    iVar1 = FUN_10001a28(auStack_200);
    if (iVar1 == 0) {
      uVar2 = FUN_100b1c84(param_2 + 3);
      uVar3 = FUN_100b1c84(local_118);
      iVar1 = FUN_10000ee8((int)*param_2,*(undefined4 *)(param_2 + 1),uVar3,uVar2);
    }
  }
  return iVar1;
}



// Function: FUN_100dd4d4 at 100dd4d4
// Size: 52 bytes

void FUN_100dd4d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10001a58((int)*(short *)(param_1 + 0x62),param_3,param_2);
  return;
}



// Function: FUN_100dd508 at 100dd508
// Size: 128 bytes

undefined4 FUN_100dd508(int param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined2 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c;
  
  if (*(short *)(param_1 + 0x62) == -0x7ffe) {
    uVar1 = 0;
  }
  else {
    local_4c = 0;
    local_40 = *(undefined2 *)(param_1 + 0x62);
    local_34 = *param_3;
    local_2c = (short)param_4 << 8 | 0x80;
    local_38 = param_2;
    uVar1 = FUN_10000f18(auStack_58);
    *param_3 = local_30;
  }
  return uVar1;
}



// Function: FUN_100dd588 at 100dd588
// Size: 136 bytes

void FUN_100dd588(int param_1,undefined4 param_2)

{
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  
  local_170 = *(undefined4 *)(param_1 + 4);
  uStack_16c = *(undefined4 *)(param_1 + 8);
  uStack_168 = *(undefined4 *)(param_1 + 0xc);
  uStack_164 = *(undefined4 *)(param_1 + 0x10);
  uStack_160 = *(undefined4 *)(param_1 + 0x14);
  uStack_15c = *(undefined4 *)(param_1 + 0x18);
  local_158 = *(undefined4 *)(param_1 + 0x1c);
  uStack_154 = *(undefined4 *)(param_1 + 0x20);
  uStack_150 = *(undefined4 *)(param_1 + 0x24);
  uStack_14c = *(undefined4 *)(param_1 + 0x28);
  uStack_148 = *(undefined4 *)(param_1 + 0x2c);
  uStack_144 = *(undefined4 *)(param_1 + 0x30);
  local_140 = *(undefined4 *)(param_1 + 0x34);
  uStack_13c = *(undefined4 *)(param_1 + 0x38);
  uStack_138 = *(undefined4 *)(param_1 + 0x3c);
  uStack_134 = *(undefined4 *)(param_1 + 0x40);
  uStack_130 = *(undefined4 *)(param_1 + 0x44);
  uStack_12c = *(uint *)(param_1 + 0x48) & 0xffff0000;
  FUN_10001ab8(&local_170,param_2);
  return;
}



// Function: FUN_100dd660 at 100dd660
// Size: 168 bytes

void FUN_100dd660(int param_1,int param_2)

{
  uint *puVar1;
  uint local_58;
  uint local_54;
  undefined1 auStack_50 [64];
  
  puVar1 = &local_58;
  local_54 = *(byte *)(param_1 + 10) + 1;
  local_58 = 0x40;
  if (local_54 < 0x40) {
    puVar1 = &local_54;
  }
  FUN_100012d8((byte *)(param_1 + 10),auStack_50,*puVar1);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 **)(param_2 + 0x12) = auStack_50;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
  FUN_10001aa0(param_2);
  *(undefined4 *)(param_2 + 0x12) = 0;
  return;
}



