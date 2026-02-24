// Warlords II - Decompiled PPC Code
// Chunk 9 (functions 4500-4716)
// Decompiled by Ghidra 12.0.3

// Function: FUN_1010ad24 at 1010ad24
// Size: 600 bytes

bool FUN_1010ad24(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack00000024;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined1 auStack_158 [312];
  
  uStack00000024 = param_4;
  FUN_101054e0(auStack_158,param_1,0);
  piVar1 = (int *)FUN_10105660(auStack_158);
  iVar2 = FUN_100ebf44(auStack_158);
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
      if (iVar2 == 0) {
        FUN_101055f4(auStack_158,2);
        bVar3 = false;
      }
      else {
        local_168 = *param_2;
        uStack_164 = param_2[1];
        piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
        bVar3 = true;
        if (piVar1 != (int *)0x0) {
          iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1,&local_168,param_3,
                               uStack00000024);
          bVar3 = iVar2 == 0;
        }
        if ((bVar3) &&
           (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0)), iVar2 != 0)) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x558),&local_168,param_3,
                       uStack00000024);
          FUN_101055f4(auStack_158,2);
          bVar3 = true;
        }
        else {
          bVar3 = !bVar3;
          FUN_101055f4(auStack_158,2);
        }
      }
      return bVar3;
    }
    local_160 = *param_2;
    uStack_15c = param_2[1];
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8),&local_160);
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x538),&local_160);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x548) + (int)piVar1,&local_160,param_3,
                             uStack00000024), iVar2 != 0)) break;
    piVar1 = (int *)FUN_10105684(auStack_158);
    iVar2 = FUN_100ebf44(auStack_158);
  }
  FUN_101055f4(auStack_158,2);
  return true;
}



// Function: FUN_1010af7c at 1010af7c
// Size: 76 bytes

undefined4 FUN_1010af7c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x4c0));
  }
  return uVar1;
}



// Function: FUN_1010afc8 at 1010afc8
// Size: 100 bytes

void FUN_1010afc8(int *param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_10);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e0),auStack_10);
  return;
}



// Function: FUN_1010b02c at 1010b02c
// Size: 144 bytes

void FUN_1010b02c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  FUN_100ee64c(auStack_128);
  uVar1 = local_14;
  uVar2 = FUN_100b0578(param_2);
  FUN_10003150(uVar1,uVar2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e8),local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}



// Function: FUN_1010b0bc at 1010b0bc
// Size: 252 bytes

void FUN_1010b0bc(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_1 + 0x18,auStack_138);
    FUN_100ee64c(auStack_130);
    uVar1 = local_1c;
    uVar3 = FUN_100b0578(auStack_138);
    FUN_10003150(uVar1,uVar3);
    FUN_10002be0(param_2,local_1c,local_1c);
    iVar2 = FUN_10000060(local_1c);
    if (iVar2 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x4f0) + (int)param_1,local_1c);
    }
    FUN_100ee77c(auStack_130,2);
  }
  return;
}



// Function: FUN_1010b1b8 at 1010b1b8
// Size: 72 bytes

void FUN_1010b1b8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x4f0));
  }
  return;
}



// Function: FUN_1010b210 at 1010b210
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1010b210(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  
  if ((DAT_4086000c == '\0') || (_DAT_2c850000 != param_1)) {
    piVar3 = *(int **)(param_1 + 0x20);
    if (piVar3 == (int *)0x0) {
      uVar2 = *(undefined1 *)(param_1 + 0x52);
    }
    else if ((*(char *)(param_1 + 0x52) == '\0') ||
            (iVar1 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x668)), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x52);
  }
  return uVar2;
}



// Function: FUN_1010b2a4 at 1010b2a4
// Size: 76 bytes

undefined4 FUN_1010b2a4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x680));
  }
  return uVar1;
}



// Function: FUN_1010b2f0 at 1010b2f0
// Size: 168 bytes

bool FUN_1010b2f0(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar1 == 0) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 == 0)) {
    bVar2 = false;
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x638) + (int)param_1,auStack_10);
    iVar1 = FUN_100b0870(auStack_10);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// Function: FUN_1010b398 at 1010b398
// Size: 188 bytes

bool FUN_1010b398(int *param_1)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar1 == 0) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3c0) + (int)param_1), iVar1 == 0)) {
    iVar1 = FUN_100e1a08(param_1 + 0x18);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x628) + (int)param_1,auStack_10);
    iVar1 = FUN_100b0870(auStack_10);
  }
  return iVar1 == 0;
}



// Function: FUN_1010b454 at 1010b454
// Size: 92 bytes

void FUN_1010b454(int *param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e1180(param_2,auStack_10);
  return;
}



// Function: FUN_1010b4b0 at 1010b4b0
// Size: 92 bytes

void FUN_1010b4b0(int *param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e1630(param_2,auStack_10);
  return;
}



// Function: FUN_1010b50c at 1010b50c
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b50c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  short local_20;
  short local_1e;
  undefined1 auStack_18 [8];
  
  FUN_100b02d0(&local_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x270),_DAT_63e30000,auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),auStack_18);
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    FUN_100e0f78(&local_20,auStack_18);
  }
  else {
    FUN_10117884(&local_20,(int)piVar1 + (int)*(short *)(*piVar1 + 0x280),auStack_18);
  }
  FUN_10001ec0(param_2,(int)local_1e,(int)local_20);
  return;
}



// Function: FUN_1010b5e0 at 1010b5e0
// Size: 124 bytes

void FUN_1010b5e0(int *param_1,undefined4 param_2)

{
  if (param_1[8] != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),param_2);
    FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x2d0),param_2);
  }
  return;
}



// Function: FUN_1010b65c at 1010b65c
// Size: 444 bytes

void FUN_1010b65c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [276];
  undefined4 local_13c;
  undefined1 auStack_138 [276];
  undefined4 local_24;
  
  if (param_1[8] != 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b0));
    if (iVar1 != 0) {
      FUN_100ee64c(auStack_250);
      FUN_100ee64c(auStack_138);
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x288),param_2,auStack_258);
      uVar3 = local_13c;
      uVar2 = FUN_100b0578(auStack_258);
      FUN_10003150(uVar3,uVar2);
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x288),param_3,auStack_260);
      uVar3 = local_24;
      uVar2 = FUN_100b0578(auStack_260);
      FUN_10003150(uVar3,uVar2);
      uVar3 = FUN_100e1594(param_3,0);
      uVar2 = FUN_100e1594(param_2,0);
      iVar1 = FUN_100e11fc(uVar2,uVar3);
      if (iVar1 == 0) {
        FUN_10003060(local_13c,local_24,local_24);
      }
      else {
        FUN_10001fb0(local_13c,local_24,local_24);
      }
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x4e8),local_24);
      FUN_100ee77c(auStack_138,2);
      FUN_100ee77c(auStack_250,2);
    }
  }
  return;
}



// Function: FUN_1010b818 at 1010b818
// Size: 408 bytes

void FUN_1010b818(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int local_4c;
  undefined1 auStack_28 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_28);
  iVar1 = FUN_100e1750(param_2,auStack_28);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100e1594(param_2,0);
    iVar1 = piVar2[1];
    param_1[0xb] = *piVar2;
    param_1[0xc] = iVar1;
    FUN_100e1a64(param_1 + 0xd,param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x3b8) + (int)param_1);
    FUN_10117884((int)*(short *)(*param_1 + 0x3e0) + (int)param_1);
    if (param_3 != '\0') {
      FUN_10117884(**(int **)(local_4c + -0xedc) +
                   (int)*(short *)(*(int *)**(int **)(local_4c + -0xedc) + 0x450));
      FUN_10117884((int)*(short *)(*param_1 + 0x358) + (int)param_1,auStack_28,param_2);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x360),auStack_28,param_2,param_3);
    piVar2 = (int *)param_1[8];
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x3a0) + (int)piVar2,param_1,auStack_28,param_2,param_3
                  );
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x368),auStack_28,param_2,param_3);
  }
  return;
}



// Function: FUN_1010b9b0 at 1010b9b0
// Size: 248 bytes

void FUN_1010b9b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_150 [312];
  
  if (param_1[0x1d] != 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar1 != 0) {
      FUN_100b236c(auStack_150,param_1);
      piVar2 = (int *)FUN_100b2460(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
      while (iVar1 != 0) {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xd8),param_1,param_2,param_3,param_4);
        piVar2 = (int *)FUN_100b24e8(auStack_150);
        iVar1 = FUN_100ebf44(auStack_150);
      }
      FUN_100b23f4(auStack_150,2);
    }
  }
  return;
}



// Function: FUN_1010baa8 at 1010baa8
// Size: 192 bytes

void FUN_1010baa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_150 [316];
  
  FUN_1010556c(auStack_150,param_1);
  piVar1 = (int *)FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x398),param_2,param_3,param_4);
    piVar1 = (int *)FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_101055f4(auStack_150,2);
  return;
}



// Function: FUN_1010bb68 at 1010bb68
// Size: 140 bytes

void FUN_1010bb68(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_100e10b0(&local_30,param_2,param_1 + 0xd);
  local_28 = *param_2;
  local_24 = param_2[1];
  local_20 = local_30;
  local_1c = local_2c;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),&local_28,param_3);
  return;
}



// Function: FUN_1010bbf4 at 1010bbf4
// Size: 192 bytes

void FUN_1010bbf4(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 0x24) +
                                   (int)*(short *)(**(int **)(param_1 + 0x24) + 0x128)),
     piVar1 != param_2)) {
    FUN_10117884((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x180),param_2);
    FUN_10117884((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x1c8),param_2);
    FUN_10117884((int)*(short *)(*param_2 + 0x4d0) + (int)param_2);
  }
  return;
}



// Function: FUN_1010bcb4 at 1010bcb4
// Size: 192 bytes

void FUN_1010bcb4(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 0x24) +
                                   (int)*(short *)(**(int **)(param_1 + 0x24) + 0x130)),
     piVar1 != param_2)) {
    FUN_10117884((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x180),param_2);
    FUN_10117884((int)*(int **)(param_1 + 0x24) +
                 (int)*(short *)(**(int **)(param_1 + 0x24) + 0x1d0),param_2);
    FUN_10117884((int)*(short *)(*param_2 + 0x4d0) + (int)param_2);
  }
  return;
}



// Function: FUN_1010bd74 at 1010bd74
// Size: 168 bytes

void FUN_1010bd74(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_140 [312];
  
  FUN_1010556c(auStack_140,param_1);
  piVar1 = (int *)FUN_10105660(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 800));
    piVar1 = (int *)FUN_10105684(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_101055f4(auStack_140,2);
  return;
}



// Function: FUN_1010be1c at 1010be1c
// Size: 80 bytes

void FUN_1010be1c(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sStack0000001c;
  short sStack0000001e;
  int local_8;
  int local_4;
  
  sStack0000001c = (short)((uint)param_2 >> 0x10);
  local_8 = (int)sStack0000001c;
  sStack0000001e = (short)param_2;
  local_4 = (int)sStack0000001e;
  _sStack0000001c = param_2;
  FUN_100e10b0(param_3,&local_8,param_1 + 0x58);
  return;
}



// Function: FUN_1010be6c at 1010be6c
// Size: 92 bytes

void FUN_1010be6c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  FUN_100e1448(auStack_20);
  FUN_100e15a8(auStack_20,&local_30,param_1 + 0x58);
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  return;
}



// Function: FUN_1010bec8 at 1010bec8
// Size: 72 bytes

void FUN_1010bec8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x718));
  }
  return;
}



// Function: FUN_1010bf10 at 1010bf10
// Size: 196 bytes

void FUN_1010bf10(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[9];
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar2 + 0x180) + (int)piVar2,param_2);
    iVar1 = FUN_10117884(param_1[9] + (int)*(short *)(*(int *)param_1[9] + 0xf0));
    if (iVar1 != 0) {
      iVar1 = FUN_100f57c8(param_1[9]);
      param_1[9] = iVar1;
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x718),param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x720),0);
  return;
}



// Function: FUN_1010bfd4 at 1010bfd4
// Size: 140 bytes

void FUN_1010bfd4(int *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_100e10b0(&local_30,param_1 + 0xb,param_2);
  local_28 = param_1[0xb];
  local_24 = param_1[0xc];
  local_20 = local_30;
  local_1c = local_2c;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),&local_28,param_3);
  return;
}



// Function: FUN_1010c060 at 1010c060
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c060(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x18,auStack_138);
  FUN_100ee64c(auStack_130);
  uVar1 = local_1c;
  uVar2 = FUN_100b0578(auStack_138);
  FUN_10003150(uVar1,uVar2);
  FUN_10002be0(param_2,local_1c,param_2);
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x18),param_2,param_2);
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_2,param_2);
  FUN_100ee77c(auStack_130,2);
  return;
}



// Function: FUN_1010c140 at 1010c140
// Size: 112 bytes

void FUN_1010c140(int *param_1,undefined1 param_2)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = param_1[0xd];
  local_c = param_1[0xe];
  local_8 = param_1[0xd];
  local_4 = param_1[0xe];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),&local_10,&DAT_41820018,param_2);
  return;
}



// Function: FUN_1010c1b0 at 1010c1b0
// Size: 216 bytes

void FUN_1010c1b0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 local_28 [5];
  
  if (param_1[8] != 0) {
    puVar1 = local_28;
    if ((local_28 != (undefined4 *)0x0) ||
       (puVar1 = (undefined4 *)FUN_100f56e4(0x10), puVar1 != (undefined4 *)0x0)) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a8),local_28);
    FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x518),local_28,param_3,param_4);
  }
  return;
}



// Function: FUN_1010c288 at 1010c288
// Size: 76 bytes

void FUN_1010c288(int *param_1,undefined1 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),&DAT_809f0004,&DAT_41820018,param_2)
  ;
  return;
}



// Function: FUN_1010c2d4 at 1010c2d4
// Size: 168 bytes

void FUN_1010c2d4(int *param_1,char param_2,char param_3)

{
  undefined4 local_34;
  
  if (param_2 != *(char *)((int)param_1 + 0x52)) {
    if (param_3 != '\0') {
      *(undefined1 *)((int)param_1 + 0x52) = 1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    FUN_10117884(**(int **)(local_34 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_34 + -0xedc) + 0x450));
    *(char *)((int)param_1 + 0x52) = param_2;
  }
  return;
}



// Function: FUN_1010c37c at 1010c37c
// Size: 220 bytes

void FUN_1010c37c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_140 [312];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  FUN_1010556c(auStack_140,param_1);
  piVar1 = (int *)FUN_10105660(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x348));
    piVar1 = (int *)FUN_10105684(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_101055f4(auStack_140,2);
  return;
}



// Function: FUN_1010c45c at 1010c45c
// Size: 92 bytes

void FUN_1010c45c(int *param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e11a4(param_2,auStack_10);
  return;
}



// Function: FUN_1010c4b8 at 1010c4b8
// Size: 92 bytes

void FUN_1010c4b8(int *param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_10);
  FUN_100e1674(param_2,auStack_10);
  return;
}



// Function: FUN_1010c514 at 1010c514
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010c514(int *param_1,undefined4 param_2)

{
  int *piVar1;
  short local_20;
  short local_1e;
  undefined1 auStack_18 [8];
  
  FUN_100b02d0(&local_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x270),_DAT_63e30000,auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),auStack_18);
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    FUN_100e0f78(&local_20,auStack_18);
  }
  else {
    FUN_10117884(&local_20,(int)piVar1 + (int)*(short *)(*piVar1 + 0x280),auStack_18);
  }
  FUN_10001ec0(param_2,-(int)local_1e,-(int)local_20);
  return;
}



// Function: FUN_1010c5f0 at 1010c5f0
// Size: 444 bytes

void FUN_1010c5f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 local_40 [5];
  
  iVar1 = FUN_100e1750(param_2,param_3);
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),&local_60);
    puVar2 = local_40;
    if ((local_40 != (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)FUN_100f56e4(0x10), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = local_60;
      puVar2[1] = local_5c;
      puVar2[2] = local_58;
      puVar2[3] = local_54;
    }
    uVar6 = 0;
    do {
      if (*(char *)((int)param_1 + uVar6 + 0x44) == '\x01') {
        FUN_100e1a64(auStack_48,param_3);
        FUN_100e1a64(auStack_50,param_2);
        uVar3 = FUN_100e1580(local_40,1);
        piVar4 = (int *)FUN_100e1088(uVar3,uVar6);
        piVar5 = (int *)FUN_100e1088(auStack_48,uVar6);
        iVar1 = *piVar5;
        piVar5 = (int *)FUN_100e1088(auStack_50,uVar6);
        *piVar4 = *piVar4 + (iVar1 - *piVar5);
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x390),local_40);
    iVar1 = FUN_100e1750(&local_60,local_40);
    if (iVar1 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),local_40,param_4);
    }
  }
  return;
}



// Function: FUN_1010c7ac at 1010c7ac
// Size: 48 bytes

bool FUN_1010c7ac(void)

{
  int iVar1;
  
  iVar1 = FUN_10000240();
  return iVar1 == 0;
}



// Function: FUN_1010c7e8 at 1010c7e8
// Size: 180 bytes

void FUN_1010c7e8(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,char param_6)

{
  int local_4c;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_6 != '\0') {
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = *param_5;
    local_14 = param_5[1];
    FUN_100e19d4(&local_20);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_20,auStack_28);
    FUN_10002118(*(int *)(local_4c + -0xb0) + 0xb2);
    FUN_100b0578(auStack_28);
    FUN_100021d8();
  }
  return;
}



// Function: FUN_1010c8a8 at 1010c8a8
// Size: 96 bytes

void FUN_1010c8a8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4c8));
  }
  return;
}



// Function: FUN_1010c908 at 1010c908
// Size: 8 bytes

undefined4 FUN_1010c908(void)

{
  return 0;
}



// Function: FUN_1010c910 at 1010c910
// Size: 112 bytes

bool FUN_1010c910(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x688));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x6a0) + (int)param_1);
  }
  return iVar1 == 0;
}



// Function: FUN_1010c984 at 1010c984
// Size: 256 bytes

int FUN_1010c984(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_148 [316];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x690));
  if (iVar1 != 0) {
    FUN_1010556c(auStack_148,param_1);
    piVar2 = (int *)FUN_10105660(auStack_148);
    iVar3 = FUN_100ebf44(auStack_148);
    while (iVar3 != 0) {
      iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x698));
      if (iVar1 == 0) {
        FUN_101055f4(auStack_148,2);
        return 0;
      }
      piVar2 = (int *)FUN_10105684(auStack_148);
      iVar3 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return iVar1;
}



// Function: FUN_1010ca84 at 1010ca84
// Size: 100 bytes

void FUN_1010ca84(int *param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_10);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x500),auStack_10);
  return;
}



// Function: FUN_1010cae8 at 1010cae8
// Size: 144 bytes

void FUN_1010cae8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  FUN_100ee64c(auStack_128);
  uVar1 = local_14;
  uVar2 = FUN_100b0578(param_2);
  FUN_10003150(uVar1,uVar2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}



// Function: FUN_1010cb78 at 1010cb78
// Size: 252 bytes

void FUN_1010cb78(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_1 + 0x18,auStack_138);
    FUN_100ee64c(auStack_130);
    uVar1 = local_1c;
    uVar3 = FUN_100b0578(auStack_138);
    FUN_10003150(uVar1,uVar3);
    FUN_10002be0(param_2,local_1c,local_1c);
    iVar2 = FUN_10000060(local_1c);
    if (iVar2 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x510) + (int)param_1,local_1c);
    }
    FUN_100ee77c(auStack_130,2);
  }
  return;
}



// Function: FUN_1010cc74 at 1010cc74
// Size: 72 bytes

void FUN_1010cc74(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x510));
  }
  return;
}



// Function: FUN_1010ccbc at 1010ccbc
// Size: 104 bytes

void FUN_1010ccbc(int *param_1,undefined1 param_2,char param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),param_2);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_1010cd24 at 1010cd24
// Size: 84 bytes

void FUN_1010cd24(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uStack00000018;
  undefined1 auStack_10 [12];
  
  uStack00000018 = param_1;
  FUN_100e10f8(auStack_10,param_3,param_2 + 0x58);
  FUN_100e0f78(uStack00000018,auStack_10);
  return;
}



// Function: FUN_1010cd78 at 1010cd78
// Size: 96 bytes

void FUN_1010cd78(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  
  FUN_100e15ec(param_2,auStack_20,param_1 + 0x58);
  FUN_100e12b8(auStack_20,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  return;
}



// Function: FUN_1010cdd8 at 1010cdd8
// Size: 124 bytes

void FUN_1010cdd8(int *param_1,undefined4 param_2)

{
  if (param_1[8] != 0) {
    FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x2d8),param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2b8),param_2);
  }
  return;
}



// Function: FUN_1010ce54 at 1010ce54
// Size: 732 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010ce54(int *param_1)

{
  int iVar1;
  char local_1d0;
  undefined1 auStack_1cc [112];
  undefined4 local_15c;
  undefined1 auStack_158 [8];
  int *local_150;
  undefined1 auStack_14c [256];
  short local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_15c = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5e8));
  local_150 = (int *)0x0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  DAT_4086000c = 1;
  _DAT_2c850000 = param_1;
  FUN_10000180(auStack_1cc);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),auStack_1cc);
  FUN_10000198(auStack_1cc);
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = _DAT_41820010;
  _DAT_41820010 = auStack_14c;
  iVar1 = FUN_10000090(auStack_14c);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar1 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_158);
      FUN_100b0578(auStack_158);
      local_150 = (int *)FUN_100001b0();
      FUN_100db26c();
      FUN_100b0578(auStack_158);
      FUN_10002040();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
      FUN_100001c8();
      iVar1 = FUN_100b0870(*local_150 + 2);
      if (iVar1 != 0) {
        FUN_100db2f4(0xffffff94);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    }
    _DAT_41820010 = local_44;
  }
  else {
    if (local_150 != (int *)0x0) {
      if (local_1d0 != '\0') {
        FUN_100001c8();
      }
      local_150 = (int *)FUN_100ef548(local_150);
    }
    FUN_100001f8(auStack_1cc);
    DAT_4086000c = 0;
    _DAT_2c850000 = (int *)0x0;
    FUN_10000198(local_15c);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),local_15c);
    FUN_100db158((int)local_4c,local_48);
  }
  FUN_100001f8(auStack_1cc);
  DAT_4086000c = 0;
  _DAT_2c850000 = (int *)0x0;
  FUN_10000198(local_15c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),local_15c);
  return local_150;
}



// Function: FUN_1010d160 at 1010d160
// Size: 272 bytes

/* WARNING: Removing unreachable block (ram,0x1010d23c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d160(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_154;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x6b0));
    FUN_100db26c();
    FUN_10117884(**(int **)(local_154 + -0xeac) +
                 (int)*(short *)(*(int *)**(int **)(local_154 + -0xeac) + 0x1c0),0x50494354,uVar2);
    FUN_100db2f4();
    FUN_100ef548(uVar2);
    _DAT_41820010 = local_24;
  }
  else {
    FUN_100db158((int)local_2c,local_28);
  }
  return;
}



// Function: FUN_1010d27c at 1010d27c
// Size: 124 bytes

void FUN_1010d27c(undefined4 param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r31;
  
  iVar1 = (int)param_2;
  iVar2 = (int)param_3;
  uVar3 = 10;
  if (iVar1 + iVar2 == 5) {
    unaff_r31 = 0x80a2db7e;
  }
  else if (iVar1 != iVar2) {
    unaff_r31 = 0x80a2db76;
  }
  if (iVar1 + iVar2 == 6) {
    uVar3 = 0xe;
  }
  FUN_10002130(uVar3);
  FUN_10002118(unaff_r31);
  return;
}



// Function: FUN_1010d2f8 at 1010d2f8
// Size: 940 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d2f8(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int local_254;
  int local_230;
  int iStack_22c;
  int local_228 [2];
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int local_210 [4];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [8];
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  uint local_190;
  uint local_18c;
  undefined1 auStack_188 [312];
  undefined1 auStack_50 [12];
  
  local_228[0] = param_1[0x15];
  local_230 = param_1[0x16];
  iStack_22c = param_1[0x17];
  piVar1 = local_210;
  if ((local_210 != (int *)0x0) || (piVar1 = (int *)FUN_100f56e4(0x10), piVar1 != (int *)0x0)) {
    *piVar1 = param_1[0x18];
    piVar1[1] = param_1[0x19];
    piVar1[2] = param_1[0x1a];
    piVar1[3] = param_1[0x1b];
  }
  iVar2 = _DAT_4182001c;
  if (param_1[8] == 0) {
    param_1[0x16] = _DAT_41820018;
    param_1[0x17] = iVar2;
    param_1[0x15] = _DAT_63e30000;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),&local_1c8);
    param_1[0x18] = local_1c8;
    param_1[0x19] = iStack_1c4;
    param_1[0x1a] = iStack_1c0;
    param_1[0x1b] = iStack_1bc;
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x290) + (int)param_1,auStack_1d0);
    local_1b0 = (int)*(short *)(param_1[8] + 0x54);
    local_1ac = (int)*(short *)(param_1[8] + 0x56);
    FUN_100e10b0(auStack_50,param_1[8] + 0x58,&local_1b0);
    FUN_100e10f8(&local_190,auStack_50,auStack_1d0);
    param_1[0x16] = local_190;
    param_1[0x17] = local_18c;
    FUN_10117884((int)*(short *)(*param_1 + 0x600) + (int)param_1,auStack_1e0);
    local_1a0 = 0xffff8ad0;
    local_19c = 0xffff8ad0;
    local_198 = 30000;
    local_194 = 30000;
    iVar2 = FUN_100e1af8(&local_1a0,auStack_1e0);
    if (iVar2 == 0) {
      sVar4 = (short)local_18c +
              (short)(((int)local_18c >> 10) +
                     (uint)((int)local_18c < 0 && (local_18c & 0x3ff) != 0)) * -0x400;
      local_1b4 = (int)sVar4;
      sVar5 = (short)local_190 +
              (short)(((int)local_190 >> 10) +
                     (uint)((int)local_190 < 0 && (local_190 & 0x3ff) != 0)) * -0x400;
      local_1b8 = (int)sVar5;
      local_1a8 = CONCAT22(sVar5,sVar4);
      FUN_100e10f8(param_1 + 0x16,&local_190,&local_1b8);
      param_1[0x15] = local_1a8;
    }
    else {
      FUN_100e0f78(param_1 + 0x15,&local_190);
      uVar3 = (*(uint **)(local_254 + -0xce0))[1];
      param_1[0x16] = **(uint **)(local_254 + -0xce0);
      param_1[0x17] = uVar3;
    }
    if ((int *)**(undefined4 **)(local_254 + -0xc54) == param_1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),&local_200);
      param_1[0x18] = local_200;
      param_1[0x19] = iStack_1fc;
      param_1[0x1a] = iStack_1f8;
      param_1[0x1b] = iStack_1f4;
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_1f0);
      FUN_100e17d8(auStack_1f0,&local_220,param_1[8] + 0x60);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),&local_220);
      param_1[0x18] = local_220;
      param_1[0x19] = iStack_21c;
      param_1[0x1a] = iStack_218;
      param_1[0x1b] = iStack_214;
    }
  }
  iVar2 = FUN_100b04bc(param_1 + 0x15,local_228);
  if (((iVar2 != 0) || (iVar2 = FUN_100e11c8(param_1 + 0x16,&local_230), iVar2 != 0)) ||
     (iVar2 = FUN_100e1750(param_1 + 0x18,local_210), iVar2 != 0)) {
    FUN_1010556c(auStack_188,param_1);
    piVar1 = (int *)FUN_10105660(auStack_188);
    iVar2 = FUN_100ebf44(auStack_188);
    while (iVar2 != 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3e0));
      piVar1 = (int *)FUN_10105684(auStack_188);
      iVar2 = FUN_100ebf44(auStack_188);
    }
    FUN_101055f4(auStack_188,2);
  }
  return;
}



// Function: FUN_1010d6a8 at 1010d6a8
// Size: 8 bytes

undefined1 * FUN_1010d6a8(void)

{
  return &DAT_7c0803a6;
}



// Function: FUN_1010d6b8 at 1010d6b8
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1010d6b8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(400), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_bbc1fff8;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined2 *)(param_1 + 0x20) = 0xffff;
    uVar1 = _DAT_4182001c;
    param_1[0x21] = _DAT_41820018;
    param_1[0x22] = uVar1;
    FUN_100b1d90(param_1 + 0x23,&DAT_63e3010c);
    *(undefined2 *)(param_1 + 99) = 0x20;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return param_1;
}



// Function: FUN_1010d76c at 1010d76c
// Size: 40 bytes

void FUN_1010d76c(void)

{
  FUN_1010d6b8(0);
  return;
}



// Function: FUN_1010d7a0 at 1010d7a0
// Size: 448 bytes

void FUN_1010d7a0(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int local_164;
  undefined4 local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  byte local_128 [256];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  FUN_10105d28(param_1);
  if (*(short *)(param_1 + 0x20) != -1) {
    if (param_1[8] != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x370) + (int)param_1,&DAT_41820018,0);
      FUN_10117884((int)*(short *)(*param_1 + 0x378) + (int)param_1,param_1[8] + 0x34,0);
    }
    local_128[0] = 0;
    uVar1 = FUN_10001728(0x56696577,(int)*(short *)(param_1 + 0x20));
    FUN_100db2a4();
    FUN_10001758(uVar1,auStack_28,auStack_24,local_128);
    iVar3 = local_128[0] + 1;
    FUN_100012d8(local_128,param_1 + 0x23,iVar3,(uint)local_128[0],iVar3);
    uVar2 = FUN_10002718(uVar1);
    *(undefined2 *)(param_1 + 99) = uVar2;
    iVar3 = FUN_10117884(**(int **)(local_164 + -0x1e4) +
                         (int)*(short *)(*(int *)**(int **)(local_164 + -0x1e4) + 0xd0),param_1[10],
                         param_1,(int)*(short *)(param_1 + 0x20),&DAT_41820018);
    FUN_100db26c();
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(iVar3 + 0x44);
    *(undefined1 *)((int)param_1 + 0x45) = *(undefined1 *)(iVar3 + 0x45);
    FUN_100e10b0(&local_140,param_1 + 0x21,iVar3 + 0x34);
    local_138 = param_1[0x21];
    local_134 = param_1[0x22];
    local_130 = local_140;
    local_12c = local_13c;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a0),iVar3,
                 *(undefined4 *)(local_164 + -0xc64),&local_138,0);
  }
  return;
}



// Function: FUN_1010d960 at 1010d960
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d960(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  int local_138;
  int iStack_134;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_1010937c(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(undefined2 *)(param_1 + 0x20) = uVar2;
    FUN_10117884((int)*(short *)(*param_2 + 0x118) + (int)param_2,&local_138);
    param_1[0x21] = local_138;
    param_1[0x22] = iStack_134;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_1010da58 at 1010da58
// Size: 132 bytes

void FUN_1010da58(int param_1,int *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x80));
  local_18 = *(undefined4 *)(param_1 + 0x84);
  uStack_14 = *(undefined4 *)(param_1 + 0x88);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),&local_18);
  return;
}



// Function: FUN_1010dadc at 1010dadc
// Size: 244 bytes

void FUN_1010dadc(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_13c;
  undefined1 auStack_118 [260];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),0);
  if (*(short *)(param_1 + 0x80) != -1) {
    puVar1 = auStack_118;
    if ((auStack_118 != (undefined1 *)0x0) ||
       (puVar1 = (undefined1 *)FUN_100f56e4(0x100), puVar1 != (undefined1 *)0x0)) {
      FUN_100012d8((byte *)(param_1 + 0x8c),puVar1,*(byte *)(param_1 + 0x8c) + 1);
    }
    piVar3 = (int *)**(int **)(local_13c + -0x1e4);
    iVar4 = *piVar3;
    uVar2 = FUN_10117884((int)*(int **)(param_1 + 0x24) +
                         (int)*(short *)(**(int **)(param_1 + 0x24) + 0x128));
    FUN_10117884((int)piVar3 + (int)*(short *)(iVar4 + 0xe8),uVar2,(int)*(short *)(param_1 + 0x80),
                 auStack_118,(int)*(short *)(param_1 + 0x18c));
  }
  return;
}



// Function: FUN_1010dbd0 at 1010dbd0
// Size: 456 bytes

void FUN_1010dbd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_5c;
  undefined1 auStack_38 [16];
  undefined4 local_28 [5];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_38);
  puVar1 = local_28;
  if ((local_28 != (undefined4 *)0x0) ||
     (puVar1 = (undefined4 *)FUN_100f56e4(0x10), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
  }
  FUN_100e1630(local_28,param_1 + 0xb);
  iVar2 = FUN_100e1750(local_28,auStack_38);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_100e1580(local_28,0);
    iVar2 = piVar3[1];
    param_1[0xb] = *piVar3;
    param_1[0xc] = iVar2;
    FUN_100e1a64(param_1 + 0xd,local_28);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
    FUN_10117884(**(int **)(local_5c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_5c + -0xedc) + 0x450));
    if (param_5 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x358),auStack_38,local_28);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x360),auStack_38,local_28,param_5);
    piVar3 = (int *)param_1[8];
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x3a0),param_1,auStack_38,local_28,
                   param_5);
    }
  }
  return;
}



// Function: FUN_1010dd98 at 1010dd98
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd98(void)

{
  FUN_100c1c8c(&DAT_80410014,_DAT_4e800020,0x80,&DAT_7c0802a6,0x7c1de840);
  FUN_100c1c8c(&DAT_7c0803a6,*puRam10117308,400,&DAT_90010008,&DAT_80410014);
  return;
}



// Function: FUN_1010de08 at 1010de08
// Size: 104 bytes

undefined4 * FUN_1010de08(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(4), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_40820008;
  }
  return param_1;
}



// Function: FUN_1010de70 at 1010de70
// Size: 40 bytes

void FUN_1010de70(void)

{
  FUN_1010de08(0);
  return;
}



// Function: FUN_1010de98 at 1010de98
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010de98(undefined4 param_1)

{
  FUN_100f5274(param_1);
  _DAT_609d0000 = param_1;
  return;
}



// Function: FUN_1010ded4 at 1010ded4
// Size: 48 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ded4(void)

{
  _DAT_609d0000 = 0;
  FUN_100f5108();
  return;
}



// Function: FUN_1010df04 at 1010df04
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010df04(int *param_1,short param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,short param_8)

{
  undefined4 uVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  undefined1 in_stack_0000003b;
  int local_174;
  undefined4 local_150;
  undefined4 uStack_14c;
  int *local_148;
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_148 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),(int)param_2,
                                  param_5);
  uVar1 = FUN_100b057c(local_148 + 0x24,0);
  psVar2 = (short *)FUN_100b0388(uVar1,in_stack_0000003b);
  *psVar2 = *psVar2 + param_8;
  FUN_10117884((int)local_148 + (int)*(short *)(*local_148 + 0x2e0),param_7);
  local_150 = **(undefined4 **)(local_174 + -0xce0);
  uStack_14c = (*(undefined4 **)(local_174 + -0xce0))[1];
  piVar3 = (int *)FUN_100e1088(&local_150,in_stack_0000003b);
  *piVar3 = (int)param_8;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = _DAT_41820010;
  _DAT_41820010 = auStack_144;
  iVar4 = FUN_10000090(auStack_144);
  if (iVar4 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xb8) + (int)param_1,local_148,param_6,param_3,param_4,
                 &local_150);
    _DAT_41820010 = local_3c;
  }
  else {
    local_148 = (int *)FUN_100f57c8(local_148);
    FUN_100db158((int)local_44,local_40);
  }
  return local_148;
}



// Function: FUN_1010e078 at 1010e078
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1010e078(int *param_1,short param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int local_15c;
  undefined4 local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_138 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),(int)param_2,param_5);
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xb8) + (int)param_1,local_138,param_6,param_3,param_4,
                 *(undefined4 *)(local_15c + -0xce0));
    _DAT_41820010 = local_2c;
  }
  else {
    local_138 = FUN_100f57c8(local_138);
    FUN_100db158((int)local_34,local_30);
  }
  return local_138;
}



// Function: FUN_1010e170 at 1010e170
// Size: 508 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e170(undefined4 param_1,int *param_2,undefined4 param_3,char param_4,char param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  short local_54;
  short local_52;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  piVar1 = &local_44;
  piVar2 = (int *)0x0;
  if ((param_4 == '\0') && (param_5 == '\0')) goto LAB_1010e2ac;
  if ((piVar1 != (int *)0x0) || (piVar1 = (int *)FUN_100f56e4(0x10), piVar1 != (int *)0x0)) {
    *piVar1 = _DAT_809f0004;
    piVar1[1] = _DAT_809f0008;
    piVar1[2] = _DAT_809f000c;
    piVar1[3] = _DAT_809f0010;
  }
  local_34 = param_2[0xd];
  local_30 = param_2[0xe];
  FUN_100e11a4(&local_34,param_6);
  if (param_4 == '\0') {
LAB_1010e240:
    if (param_5 != '\0') goto LAB_1010e248;
  }
  else {
    local_34 = local_34 + -0xf;
    if (param_5 == '\0') {
      local_38 = -0xf;
      goto LAB_1010e240;
    }
LAB_1010e248:
    local_30 = local_30 + -0xf;
    if (param_4 == '\0') {
      local_3c = -0xf;
    }
  }
  piVar2 = (int *)FUN_100f6b8c(0);
  FUN_100f6c9c(piVar2,param_2,param_6,&local_34,1,1,&DAT_41820018,param_4);
  piVar2[0x2b] = local_44;
  piVar2[0x2c] = local_40;
  piVar2[0x2d] = local_3c;
  piVar2[0x2e] = local_38;
LAB_1010e2ac:
  if (piVar2 == (int *)0x0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2e0),param_3);
  }
  else {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2e0),param_3);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x760),param_3);
  FUN_100b08d4(&local_54,param_2[0x20] + 0x10);
  local_4c = (int)local_54;
  local_48 = (int)local_52;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x378),&local_4c,0);
  return;
}



// Function: FUN_1010e36c at 1010e36c
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1010e36c(undefined4 param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_140;
  undefined1 local_13f [3];
  undefined4 local_13c;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_13c = 0;
  local_13c = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3d8),0,
                           (int)param_2,local_13f,&local_140);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = FUN_1010f054(0);
    _DAT_41820010 = local_30;
  }
  else {
    local_13c = FUN_100ecdec(local_13c,1);
    FUN_100db158((int)local_38,local_34);
  }
  FUN_1010f288(uVar2,param_3,local_13c,local_13f[0],local_140,1);
  return uVar2;
}



// Function: FUN_1010e488 at 1010e488
// Size: 204 bytes

int * FUN_1010e488(int *param_1,short param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_3,0,
                               (int)param_2,&DAT_41820018);
  piVar3 = (int *)0x0;
  if (((piVar1 != (int *)0x0) && (piVar3 = piVar1, piVar1[0x27] != 0x20202020)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,piVar1[0x27]), iVar2 != 0)
     ) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x760) + (int)piVar1,iVar2);
  }
  return piVar3;
}



// Function: FUN_1010e554 at 1010e554
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1010e554(int *param_1,undefined4 param_2,undefined4 param_3,short param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_26c;
  undefined1 auStack_248 [256];
  undefined4 local_148;
  int *local_144;
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_148 = 0;
  local_144 = (int *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = _DAT_41820010;
  _DAT_41820010 = auStack_140;
  uVar4 = FUN_10000090(auStack_140);
  piVar1 = local_144;
  if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
    local_144 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf8),(int)param_4,0);
    iVar2 = FUN_10117884((int)local_144 + (int)*(short *)(*local_144 + 0x100));
    if (iVar2 == 0x300) {
      local_148 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1,local_144,param_3,
                               param_5);
    }
    else {
      FUN_100b19f4(auStack_248,*(int *)(local_26c + -0x590) + 0xc);
      FUN_100db368(auStack_248);
    }
    _DAT_41820010 = local_38;
  }
  else {
    if (local_144 != (int *)0x0) {
      iVar2 = *local_144;
      uVar3 = FUN_10117884((int)local_144 + (int)*(short *)(iVar2 + 0xb8),(int)uVar4,
                           *(undefined4 *)(iVar2 + 0xbc));
      FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0xb0),uVar3);
    }
    local_144 = (int *)FUN_100f57c8(local_144);
    local_148 = FUN_100f57c8(local_148);
    FUN_100db158((int)local_40,local_3c);
  }
  FUN_100f57c8(local_144);
  return local_148;
}



// Function: FUN_1010e708 at 1010e708
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010e708(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int local_164;
  undefined1 auStack_140 [8];
  int *local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_138 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 == 0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_138);
    if (local_138 != (int *)0x0) {
      if (param_3 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*param_3 + 0x2e0) + (int)param_3,local_138);
      }
      iVar1 = FUN_100e11c8(param_4,*(undefined4 *)(local_164 + -0xce0));
      if (iVar1 != 0) {
        FUN_100e10b0(auStack_140,local_138 + 0xb,param_4);
        FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0x370),auStack_140,0);
      }
    }
    _DAT_41820010 = local_2c;
  }
  else {
    local_138 = (int *)FUN_100f57c8(local_138);
    FUN_100db158((int)local_34,local_30);
  }
  return local_138;
}



// Function: FUN_1010e854 at 1010e854
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010e854(int *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),param_2,param_3,
                               (int)param_4);
  if (piVar1 != (int *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = _DAT_41820010;
    _DAT_41820010 = auStack_128;
    iVar2 = FUN_10000090(auStack_128);
    if (iVar2 == 0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x238) + (int)piVar1,param_2);
      _DAT_41820010 = local_20;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_28,local_24);
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x380));
  }
  return piVar1;
}



// Function: FUN_1010e964 at 1010e964
// Size: 640 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010e964(undefined4 param_1,short param_2,int param_3)

{
  int iVar1;
  int local_164;
  undefined1 auStack_140 [4];
  int *local_13c;
  int *local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_13c = (int *)0x0;
  local_138 = (int *)0x0;
  if (param_3 == 0) {
    param_3 = FUN_10001728(0x56696577,(int)param_2);
    FUN_100db2a4(param_3);
  }
  local_13c = (int *)FUN_100fab98(0);
  FUN_100fac48(local_13c,param_3,4);
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 == 0) {
    local_138 = (int *)FUN_100f8d30(0);
    FUN_100f8dc8();
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xec),0,auStack_140);
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xe8),0,auStack_140);
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xe4),0,auStack_140);
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xe0),0,auStack_140);
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xd4),0,auStack_140);
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xdc),0,auStack_140);
    FUN_10117884((int)local_138 + (int)*(short *)(*local_138 + 0xa8),
                 **(undefined4 **)(local_164 + -0xd8),0,auStack_140);
    _DAT_41820010 = local_2c;
  }
  else {
    local_13c = (int *)FUN_100f57c8(local_13c);
    FUN_100db158((int)local_34,local_30);
  }
  if (local_138 != (int *)0x0) {
    FUN_10117884((int)local_13c + (int)*(short *)(*local_13c + 200),local_138);
  }
  return local_13c;
}



// Function: FUN_1010ebe4 at 1010ebe4
// Size: 300 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ebe4(int *param_1,undefined4 param_2,short param_3,undefined4 param_4,short param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_138 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf0));
  FUN_100db26c();
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 == 0) {
    uVar2 = FUN_100b1c84(param_4);
    FUN_10002568(local_138,0x56696577,(int)param_3,uVar2);
    FUN_100db328();
    _DAT_41820010 = local_2c;
  }
  else {
    local_138 = FUN_100ef510(local_138);
    FUN_100db158((int)local_34,local_30);
  }
  FUN_10000dc8(local_138,(int)param_5);
  FUN_100db328();
  FUN_10000de0(local_138);
  FUN_100db328();
  return;
}



// Function: FUN_1010ed10 at 1010ed10
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1010ed10(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_140;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    local_140 = FUN_100f15e0(0x400);
    piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xf8),0xffffffff,
                                 local_140);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 400),0x300);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x1f8),param_2,1);
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
    _DAT_41820010 = local_30;
  }
  else {
    FUN_100f57c8(0);
    local_140 = FUN_100ef510(0);
    FUN_100db158((int)local_38,local_34);
  }
  return local_140;
}



// Function: FUN_1010ee64 at 1010ee64
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ee64(void)

{
  FUN_100c1c8c(&DAT_28030000,_DAT_48000064,4,&DAT_609e0000,0x90c30020);
  return;
}



// Function: FUN_1010eea0 at 1010eea0
// Size: 108 bytes

int * FUN_1010eea0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_100eecf8();
  if (*piVar1 == 0) {
    FUN_10000b70(piVar1);
    iVar2 = FUN_10000678();
    if (iVar2 != 0) {
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}



// Function: FUN_1010ef14 at 1010ef14
// Size: 112 bytes

undefined4 * FUN_1010ef14(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x34), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x90bf0000;
    param_1[0xc] = 0;
  }
  return param_1;
}



// Function: FUN_1010ef84 at 1010ef84
// Size: 40 bytes

void FUN_1010ef84(void)

{
  FUN_1010ef14(0);
  return;
}



// Function: FUN_1010efac at 1010efac
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010efac(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100c3df8(param_1,param_2,_DAT_28030000,0,0,0);
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}



// Function: FUN_1010effc at 1010effc
// Size: 72 bytes

void FUN_1010effc(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x740));
  }
  return;
}



// Function: FUN_1010f044 at 1010f044
// Size: 8 bytes

undefined4 FUN_1010f044(void)

{
  return 0x33fb0001;
}



// Function: FUN_1010f054 at 1010f054
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1010f054(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(200), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_80df0004;
    FUN_100b02d0((int)param_1 + 0xba);
    FUN_100b02d0((int)param_1 + 0xbe);
    *(undefined1 *)((int)param_1 + 0xb1) = 0;
    *(undefined1 *)((int)param_1 + 0xa9) = 1;
    *(undefined2 *)((int)param_1 + 0xa2) = 0;
    *(undefined4 *)((int)param_1 + 0xbe) = _DAT_63e30000;
    *(undefined4 *)((int)param_1 + 0xba) = _DAT_63e30000;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined1 *)((int)param_1 + 0xab) = 0;
    *(undefined1 *)((int)param_1 + 0xb6) = 0;
    *(undefined1 *)((int)param_1 + 0xb5) = 0;
    *(undefined1 *)((int)param_1 + 0xa7) = 0;
    *(undefined1 *)((int)param_1 + 0xb7) = 0;
    *(undefined1 *)((int)param_1 + 0xb2) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)((int)param_1 + 0xa6) = 1;
    *(undefined1 *)((int)param_1 + 0xa5) = 1;
    uVar1 = _DAT_40820038;
    param_1[0x22] = _DAT_40820034;
    param_1[0x23] = uVar1;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((int)param_1 + 0xad) = 0;
    *(undefined1 *)((int)param_1 + 0xaf) = 0;
    *(undefined1 *)((int)param_1 + 0xae) = 0;
    *(undefined1 *)((int)param_1 + 0xaa) = 1;
    *(undefined2 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x21) = 0;
    uVar1 = _DAT_7d080778;
    param_1[0x24] = _DAT_7d080774;
    param_1[0x25] = uVar1;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    param_1[0x26] = param_1;
    param_1[0x27] = param_1[6];
    *(undefined1 *)((int)param_1 + 0x86) = 0;
    *(undefined1 *)((int)param_1 + 0xb3) = 0;
    *(undefined1 *)(param_1 + 0x2e) = 0;
    param_1[0x20] = 0;
    *(undefined1 *)((int)param_1 + 0xb9) = 1;
    *(undefined2 *)((int)param_1 + 0xc2) = 0xffff;
    *(undefined2 *)(param_1 + 0x31) = 0xffff;
  }
  return param_1;
}



// Function: FUN_1010f1ac at 1010f1ac
// Size: 40 bytes

void FUN_1010f1ac(void)

{
  FUN_1010f054(0);
  return;
}



// Function: FUN_1010f1d4 at 1010f1d4
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f1d4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_18;
  undefined4 local_14;
  
  if (_DAT_80e2fb68 == (int *)0x0) {
    _DAT_80e2fb68 = (int *)FUN_100d7adc(0);
    FUN_100d7ba0(_DAT_80e2fb68,0,8);
  }
  piVar1 = _DAT_80e2fb68;
  local_14 = *(undefined4 *)(param_1 + 0x80);
  iVar3 = *_DAT_80e2fb68;
  local_18 = param_1;
  iVar2 = FUN_10117884((int)_DAT_80e2fb68 + (int)*(short *)(iVar3 + 0xa8),local_14,iVar3,
                       *(undefined4 *)(iVar3 + 0xac));
  FUN_10117884((int)piVar1 + (int)*(short *)(iVar3 + 0xb8),iVar2 + 1,&local_18,1);
  return;
}



// Function: FUN_1010f288 at 1010f288
// Size: 988 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f288(int *param_1,int *param_2,int param_3,char param_4,undefined1 param_5,
                 undefined1 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar5;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iStack00000020;
  undefined1 uStack0000002f;
  int local_3c4;
  undefined2 local_3a0;
  undefined2 local_39e;
  undefined4 local_39c;
  short local_398;
  short local_396;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  undefined4 local_380;
  byte local_378 [256];
  undefined1 auStack_278 [256];
  short local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 auStack_160 [256];
  short local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iStack00000020 = param_3;
  uStack0000002f = param_6;
  FUN_10000660(&local_39c);
  puVar1 = (undefined4 *)FUN_100b057c(iStack00000020 + 0x10,0);
  local_380 = *puVar1;
  FUN_10000198(iStack00000020);
  FUN_100b0384(&local_380);
  FUN_10002fd0();
  FUN_100b08d4(&local_398,iStack00000020 + 0x10);
  local_388 = (int)local_398;
  local_384 = (int)local_396;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  local_58 = _DAT_41820010;
  _DAT_41820010 = auStack_160;
  iVar2 = FUN_10000090(auStack_160);
  if (iVar2 == 0) {
    local_390 = (int)local_380._0_2_;
    local_38c = (int)local_380._2_2_;
    FUN_10105b08(param_1,param_2,0,&local_390,&local_388,4,4);
    _DAT_41820010 = local_58;
  }
  else {
    FUN_10000198(local_39c);
    iStack00000020 = FUN_100ecdec(iStack00000020,uStack0000002f);
    FUN_100db158((int)local_60,local_5c);
  }
  param_1[0x20] = iStack00000020;
  *(undefined1 *)(param_1 + 0x2a) = uStack0000002f;
  uVar5 = FUN_100efbf0(iStack00000020);
  *(undefined2 *)(param_1 + 0x21) = uVar5;
  *(char *)((int)param_1 + 0xa5) = param_4;
  local_178 = 0;
  local_174 = 0;
  local_16c = 0;
  local_168 = 0;
  local_170 = _DAT_41820010;
  _DAT_41820010 = auStack_278;
  iVar2 = FUN_10000090(auStack_278);
  if (iVar2 == 0) {
    if (param_4 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,
                   **(undefined4 **)(local_3c4 + -0xdc),0x7f,0);
    }
    *(undefined1 *)((int)param_1 + 0xa6) = param_5;
    iVar2 = (int)param_1 + (int)*(short *)(*param_1 + 0x7f0);
    uVar3 = FUN_10117884(iVar2,1);
    FUN_10117884(iVar2,uVar3);
    iVar2 = *param_1;
    puVar1 = (undefined4 *)FUN_100b057c(param_1 + 0x24,1);
    puVar4 = (undefined4 *)FUN_100b057c(param_1 + 0x24,0);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x7c8),*puVar4,*puVar1);
    local_378[0] = 0;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),local_378);
    iVar2 = FUN_100ee320(local_378,&local_39e,&local_3a0);
    if (iVar2 != 0) {
      uVar3 = FUN_100b1c84(local_378);
      FUN_10002478(param_1[0x20],uVar3);
    }
    *(undefined2 *)(param_1 + 0x28) = local_39e;
    *(undefined2 *)((int)param_1 + 0xa2) = local_3a0;
    if (param_2 != (int *)0x0) {
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x310),local_378);
      if (-1 < (int)((local_378[0] - 1) + (uint)(local_378[0] != 0))) {
        FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,local_378);
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),
                 **(undefined4 **)(local_3c4 + -0xe4),0,0);
    FUN_1010f1d4(param_1);
    _DAT_41820010 = local_170;
  }
  else {
    FUN_10000198(local_39c);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_178,local_174);
  }
  return;
}



// Function: FUN_1010f698 at 1010f698
// Size: 564 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010f698(int *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 local_250 [4];
  undefined1 local_248 [256];
  undefined1 local_148;
  int *local_144;
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_144 = (int *)FUN_10105d2c(param_1);
  if (local_144[0x20] != 0) {
    local_148 = FUN_100f1574(0);
    local_144[0x20] = 0;
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = _DAT_41820010;
    _DAT_41820010 = auStack_140;
    iVar1 = FUN_10000090(auStack_140);
    if (iVar1 == 0) {
      iVar1 = **(int **)(param_1[0x20] + 0x72);
      puVar2 = local_250;
      if ((local_250 != (undefined2 *)0x0) ||
         (puVar2 = (undefined2 *)FUN_100f56e4(8), puVar2 != (undefined2 *)0x0)) {
        *puVar2 = *(undefined2 *)(iVar1 + 2);
        puVar2[1] = *(undefined2 *)(iVar1 + 4);
        puVar2[2] = *(undefined2 *)(iVar1 + 6);
        puVar2[3] = *(undefined2 *)(iVar1 + 8);
      }
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818));
      if (iVar1 == 0) {
        uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
      }
      else {
        uVar6 = 0xffffffff;
      }
      local_248[0] = 0;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),local_248);
      uVar3 = FUN_10000be8(param_1[0x20]);
      uVar4 = FUN_100b1c84(local_248);
      uVar5 = FUN_100b0578(local_250);
      iVar1 = FUN_10001680(0,uVar5,uVar4,0,(int)*(short *)(param_1 + 0x21),uVar6,
                           *(undefined1 *)((int)param_1 + 0xa6),uVar3);
      local_144[0x20] = iVar1;
      FUN_100db26c();
      FUN_100f1574(local_148);
      _DAT_41820010 = local_38;
    }
    else {
      FUN_10117884((int)local_144 + (int)*(short *)(*local_144 + 0x90));
      local_148 = FUN_100f1574(local_148);
      FUN_100db158((int)local_40,local_3c);
    }
  }
  return local_144;
}



// Function: FUN_1010f8cc at 1010f8cc
// Size: 196 bytes

void FUN_1010f8cc(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_10105d28(param_1);
  iVar4 = *param_1;
  puVar1 = (undefined4 *)FUN_100b057c(param_1 + 0x24,1);
  puVar2 = (undefined4 *)FUN_100b057c(param_1 + 0x24,0);
  FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0x7c8),*puVar2,*puVar1);
  iVar4 = (int)param_1 + (int)*(short *)(*param_1 + 0x7f0);
  uVar3 = FUN_10117884(iVar4,1);
  FUN_10117884(iVar4,uVar3);
  return;
}



// Function: FUN_1010f990 at 1010f990
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1010f990(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_148 [78];
  
  if (_DAT_80e2fb68 != (int *)0x0) {
    FUN_100ebaf8(local_148,_DAT_80e2fb68,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      puVar3 = (undefined4 *)
               FUN_10117884((int)_DAT_80e2fb68 + (int)*(short *)(*_DAT_80e2fb68 + 0xe0),iVar1);
      if (puVar3[1] == param_1) {
        uVar4 = *puVar3;
        FUN_100ebc68(local_148,2);
        return uVar4;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar1 = local_148[1];
      iVar2 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0;
}



// Function: FUN_1010fab8 at 1010fab8
// Size: 132 bytes

char FUN_1010fab8(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  if (param_1 == 0) {
    cVar3 = '\0';
  }
  else if (*(char *)(param_1 + 0x6e) == '\0') {
    cVar3 = '\0';
  }
  else {
    iVar1 = FUN_1010f990(param_1);
    if (iVar1 == 0) {
      uVar2 = (uint)*(short *)(param_1 + 0x6c);
      cVar3 = (-0x80 - ((0x80 < uVar2) + -0x80)) +
              (0x7f < uVar2 && (uint)(0x80 < uVar2) <= uVar2 - 0x80);
    }
    else {
      cVar3 = *(char *)(iVar1 + 0xb6);
    }
  }
  return cVar3;
}



// Function: FUN_1010fb3c at 1010fb3c
// Size: 188 bytes

undefined4 FUN_1010fb3c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [5];
  
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar1 = local_20[1];
  iVar2 = FUN_100eea60(local_20);
  uVar3 = 0;
  while (iVar2 != 0) {
    iVar2 = FUN_1010fab8(iVar1);
    if (iVar2 != 0) {
      uVar3 = iVar1;
    }
    FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
    iVar1 = local_20[1];
    iVar2 = FUN_100eea60(local_20);
  }
  return uVar3;
}



// Function: FUN_1010fbf8 at 1010fbf8
// Size: 56 bytes

int FUN_1010fbf8(void)

{
  int iVar1;
  
  iVar1 = FUN_1010fb3c();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1010fc30 at 1010fc30
// Size: 64 bytes

void FUN_1010fc30(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e0),0x646c6f67);
  return;
}



// Function: FUN_1010fc70 at 1010fc70
// Size: 208 bytes

void FUN_1010fc70(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    if (param_2 != '\0') {
      uVar2 = FUN_100f5754(0);
      uVar3 = FUN_100d568c(0);
      FUN_100f5754(uVar2);
      FUN_100d5740(uVar3,param_2,0x20202020,0x20202020);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),uVar3);
    }
  }
  else {
    *(char *)(iVar1 + 0x20) = param_2;
  }
  return;
}



// Function: FUN_1010fd40 at 1010fd40
// Size: 236 bytes

void FUN_1010fd40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    if ((param_2 != 0x20202020) || (param_3 != 0x20202020)) {
      uVar2 = FUN_100f5754(0);
      uVar3 = FUN_100d568c(0);
      FUN_100f5754(uVar2);
      FUN_100d5740(uVar3,0,param_2,param_3);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),uVar3);
    }
  }
  else {
    *(int *)(iVar1 + 0x24) = param_2;
    *(int *)(iVar1 + 0x28) = param_3;
  }
  return;
}



// Function: FUN_1010fe2c at 1010fe2c
// Size: 308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010fe2c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_148 [78];
  
  if (_DAT_80e2fb68 != (int *)0x0) {
    FUN_100ebaf8(local_148,_DAT_80e2fb68,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      piVar3 = (int *)FUN_10117884((int)_DAT_80e2fb68 + (int)*(short *)(*_DAT_80e2fb68 + 0xe0),iVar1
                                  );
      if (param_1 == *piVar3) {
        FUN_10117884((int)_DAT_80e2fb68 + (int)*(short *)(*_DAT_80e2fb68 + 200),iVar1,1);
        FUN_100ebc68(local_148,2);
        return;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar1 = local_148[1];
      iVar2 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return;
}



// Function: FUN_1010ff60 at 1010ff60
// Size: 176 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ff60(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  FUN_1010fe2c(param_1);
  *(undefined4 *)(param_1 + 0x80) = 0;
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 == (int *)0x0) {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3c8),param_1);
  }
  else {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x340),param_1);
  }
  FUN_10106060(param_1);
  FUN_100ecdec(uVar3,uVar1);
  return;
}



// Function: FUN_1011001c at 1011001c
// Size: 1076 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011001c(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar7;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar8;
  int local_294;
  undefined2 local_270;
  undefined2 local_26e;
  undefined1 auStack_26c [8];
  undefined1 auStack_264 [16];
  undefined1 auStack_254 [256];
  undefined1 auStack_154 [256];
  short local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ushort local_3c [6];
  
  FUN_1010937c(param_1,param_2);
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_4c = _DAT_41820010;
  _DAT_41820010 = auStack_154;
  iVar2 = FUN_10000090(auStack_154);
  if (iVar2 == 0) {
    pbVar8 = *(byte **)(local_294 + -0xe4c);
    puVar3 = auStack_254;
    if ((auStack_254 != (undefined1 *)0x0) ||
       (puVar3 = (undefined1 *)FUN_100f56e4(0x100), puVar3 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar8,puVar3,*pbVar8 + 1);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_264);
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x21) = uVar7;
    iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
    param_1[0x27] = iVar2;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_3c,2);
    uVar7 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)((int)param_1 + 0xc2) = uVar7;
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x31) = (short)uVar4;
    if (*(short *)((int)param_1 + 0xc2) != -1) {
      FUN_100009d8(auStack_254,(int)*(short *)((int)param_1 + 0xc2),uVar4);
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818));
    if (iVar2 == 0) {
      uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
    }
    else {
      uVar4 = 0xffffffff;
    }
    FUN_100e12b8(auStack_264,auStack_26c);
    uVar1 = (uint)local_3c[0];
    uVar5 = FUN_100b1c84(auStack_254);
    uVar6 = FUN_100b0578(auStack_26c);
    iVar2 = FUN_10001680(0,uVar6,uVar5,0,(int)*(short *)(param_1 + 0x21),uVar4,
                         (int)(uVar1 & 0x8000) >> 0xf,param_1);
    param_1[0x20] = iVar2;
    *(char *)((int)param_1 + 0xa5) = (char)((int)(local_3c[0] & 0x4000) >> 0xe);
    *(char *)((int)param_1 + 0xa6) = (char)((int)(local_3c[0] & 0x8000) >> 0xf);
    *(char *)((int)param_1 + 0xab) = (char)((int)(local_3c[0] & 0x2000) >> 0xd);
    *(char *)((int)param_1 + 0xa7) = (char)((int)(local_3c[0] & 0x1000) >> 0xc);
    *(char *)(param_1 + 0x2a) = (char)((int)(local_3c[0] & 0x800) >> 0xb);
    *(char *)((int)param_1 + 0xa9) = (char)((int)(local_3c[0] & 0x400) >> 10);
    *(char *)((int)param_1 + 0xaa) = (char)((int)(local_3c[0] & 0x200) >> 9);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),auStack_254);
    iVar2 = FUN_100ee320(auStack_254,&local_26e,&local_270);
    if (iVar2 != 0) {
      uVar4 = FUN_100b1c84(auStack_254);
      FUN_10002478(param_1[0x20],uVar4);
    }
    *(undefined2 *)(param_1 + 0x28) = local_26e;
    *(undefined2 *)((int)param_1 + 0xa2) = local_270;
    FUN_1010f1d4(param_1);
    _DAT_41820010 = local_4c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_54,local_50);
  }
  *(byte *)(param_1 + 0x2b) = (byte)(local_3c[0] >> 8) & 1;
  *(char *)((int)param_1 + 0xaf) = (char)((int)(local_3c[0] & 0x80) >> 7);
  *(char *)(param_1 + 0x2c) = (char)((int)(local_3c[0] & 0x40) >> 6);
  *(char *)((int)param_1 + 0xad) = (char)((int)(local_3c[0] & 0x10) >> 4);
  *(char *)((int)param_1 + 0xae) = (char)((int)(local_3c[0] & 0x20) >> 5);
  *(char *)((int)param_1 + 0xb6) = (char)((int)(local_3c[0] & 8) >> 3);
  *(char *)((int)param_1 + 0xb7) = (char)((int)(local_3c[0] & 4) >> 2);
  *(char *)((int)param_1 + 0xb9) = (char)((int)(local_3c[0] & 2) >> 1);
  return;
}



// Function: FUN_101104b8 at 101104b8
// Size: 508 bytes

void FUN_101104b8(int param_1,int *param_2)

{
  ushort local_18 [6];
  
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x84));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),*(undefined4 *)(param_1 + 0x9c));
  local_18[0] = (ushort)*(byte *)(param_1 + 0xb9) << 1 |
                (ushort)*(byte *)(param_1 + 0xb7) << 2 |
                (ushort)*(byte *)(param_1 + 0xb6) << 3 |
                (ushort)*(byte *)(param_1 + 0xad) << 4 |
                (ushort)*(byte *)(param_1 + 0xae) << 5 |
                (ushort)*(byte *)(param_1 + 0xb0) << 6 |
                (ushort)*(byte *)(param_1 + 0xaf) << 7 |
                (ushort)*(byte *)(param_1 + 0xac) << 8 |
                (ushort)*(byte *)(param_1 + 0xaa) << 9 |
                (ushort)*(byte *)(param_1 + 0xa9) << 10 |
                (ushort)*(byte *)(param_1 + 0xa8) << 0xb |
                (ushort)*(byte *)(param_1 + 0xa7) << 0xc |
                (ushort)*(byte *)(param_1 + 0xab) << 0xd |
                (ushort)*(byte *)(param_1 + 0xa5) << 0xe | (ushort)*(byte *)(param_1 + 0xa6) << 0xf;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),local_18,2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xc2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xc4));
  return;
}



// Function: FUN_101106b4 at 101106b4
// Size: 440 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101106b4(int *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_28 [5];
  
  uVar1 = (uint)param_2;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x680));
  if (uVar2 != uVar1) {
    if ((uVar1 != 0) && (*(char *)((int)param_1 + 0xb6) == '\0')) {
      FUN_100ee970(local_28);
      FUN_10117884((int)*(short *)(local_28[0] + 0x10) + (int)local_28);
      iVar5 = local_28[1];
      iVar3 = FUN_100eea60(local_28);
      while (iVar3 != 0) {
        piVar4 = (int *)FUN_1010f990(iVar5);
        if (((piVar4 != (int *)0x0) &&
            (iVar3 = FUN_10117884((int)*(short *)(*piVar4 + 0x680) + (int)piVar4), iVar3 != 0)) &&
           (iVar5 = FUN_1010fab8(iVar5), iVar5 == 0)) {
          return;
        }
        FUN_10117884((int)*(short *)(local_28[0] + 0x18) + (int)local_28);
        iVar5 = local_28[1];
        iVar3 = FUN_100eea60(local_28);
      }
    }
    FUN_101064d4(param_1,uVar1);
    *(byte *)(param_1 + 0x29) = param_2;
    if ((*(char *)((int)param_1 + 0xb6) == '\0') || ((int *)param_1[0x26] != param_1)) {
      if (uVar1 == 0) {
        FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338));
      }
      else {
        FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),param_1[0x26]);
      }
    }
    FUN_100f2204();
  }
  return;
}



// Function: FUN_1011086c at 1011086c
// Size: 500 bytes

void FUN_1011086c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_94;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  short local_48;
  short local_46;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  *(undefined1 *)((int)param_1 + 0xb1) = 1;
  FUN_100b08d4(&local_48,0x80a2db1a);
  local_30 = (int)local_48;
  local_2c = (int)local_46;
  local_40 = 0x156;
  local_3c = 0x200;
  FUN_100e11a4(&local_30,&local_40);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_58);
  iVar1 = FUN_100e11c8(&local_30,*(undefined4 *)(local_94 + -0xce0));
  if (iVar1 == 0) {
    uVar2 = FUN_100e1580(auStack_58,1);
    FUN_100e0f78(auStack_60,uVar2);
    iVar1 = FUN_100b0914(0x80a2db1a,auStack_60);
    if (iVar1 != 0) {
      return;
    }
  }
  uVar2 = FUN_100024a8(0x200);
  uVar3 = FUN_100024a8(local_2c + 0x200);
  uVar2 = FUN_100024c0(uVar3,uVar2);
  uVar3 = FUN_100024a8(param_1[0xe]);
  FUN_100024d8(uVar3,uVar2);
  uVar2 = FUN_10000e28();
  uVar3 = FUN_100024a8(0x156);
  uVar4 = FUN_100024a8(local_30 + 0x156);
  uVar3 = FUN_100024c0(uVar4,uVar3);
  uVar4 = FUN_100024a8(param_1[0xd]);
  FUN_100024d8(uVar4,uVar3);
  local_38 = FUN_10000e28();
  local_34 = uVar2;
  FUN_100e1448(auStack_70,param_1 + 0x24);
  FUN_100e1264(&local_38,auStack_70);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x378),&local_38,1);
  return;
}



// Function: FUN_10110a68 at 10110a68
// Size: 464 bytes

void FUN_10110a68(int *param_1,char param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  short local_50;
  short local_4e;
  short local_48;
  short local_46;
  short local_40;
  short local_3e;
  int local_38;
  int local_34;
  
  if (param_1[0x20] != 0) {
    *(char *)((int)param_1 + 0xb2) = param_2;
    *(char *)((int)param_1 + 0xb3) = param_3;
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),1);
    FUN_100b08d4(&local_48,**(int **)(param_1[0x20] + 0x72) + 2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),&local_38);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),&local_40);
    FUN_100b08d4(&local_50,&local_40);
    if (param_2 != '\0') {
      uVar2 = (int)local_4e - (int)local_46;
      local_34 = (int)local_3e + (int)*(short *)(param_1 + 0x2f) +
                 ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    }
    if (param_3 != '\0') {
      if (param_4 == '\0') {
        uVar2 = (int)local_50 - (int)local_48;
        local_38 = (int)local_40 + (int)*(short *)((int)param_1 + 0xba) +
                   ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
      }
      else {
        local_38 = (int)local_40 + (int)*(short *)((int)param_1 + 0xba) +
                   ((int)local_50 - (int)local_48) / 3;
      }
    }
    iVar3 = *param_1;
    uVar1 = FUN_100e1580(&local_38,0);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar3 + 0x370),uVar1,0);
  }
  return;
}



// Function: FUN_10110c38 at 10110c38
// Size: 84 bytes

void FUN_10110c38(int *param_1)

{
  FUN_1010768c(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x660),0,1);
  return;
}



// Function: FUN_10110c8c at 10110c8c
// Size: 100 bytes

void FUN_10110c8c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x328));
  if (*(char *)((int)param_1 + 0xa7) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x90) + (int)param_1);
  }
  return;
}



// Function: FUN_10110cf0 at 10110cf0
// Size: 144 bytes

void FUN_10110cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[10];
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738));
  }
  else if (*(char *)((int)param_1 + 0xa9) == '\0') {
    FUN_10117884(param_1[10] + (int)*(short *)(*(int *)param_1[10] + 0x330),param_1);
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2c0));
  }
  return;
}



// Function: FUN_10110d80 at 10110d80
// Size: 172 bytes

void FUN_10110d80(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x1f) {
    uVar1 = FUN_100f5754(0);
    uVar2 = FUN_1010ef14(0);
    FUN_100f5754(uVar1);
    FUN_1010efac(uVar2,0x1f,param_1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar2);
  }
  else {
    FUN_100c6178(param_1,param_2);
  }
  return;
}



// Function: FUN_10110e2c at 10110e2c
// Size: 100 bytes

void FUN_10110e2c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x820));
  if (iVar1 == 0) {
    FUN_100f27d0(0x1f,*(undefined1 *)((int)param_1 + 0xa6));
    FUN_100da394(param_1);
  }
  return;
}



// Function: FUN_10110e90 at 10110e90
// Size: 112 bytes

undefined4 FUN_10110e90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     ((iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0 &&
      (*(char *)((int)param_1 + 0xab) == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10110f00 at 10110f00
// Size: 112 bytes

undefined4 FUN_10110f00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)param_1 + 0x49) == '\0') ||
     ((iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0 &&
      (*(char *)((int)param_1 + 0xab) == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10110f70 at 10110f70
// Size: 92 bytes

undefined4 FUN_10110f70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)param_1 + 0x4a) == '\0') ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10110fcc at 10110fcc
// Size: 92 bytes

undefined4 FUN_10110fcc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)param_1 + 0x4b) == '\0') ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x680) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10111028 at 10111028
// Size: 404 bytes

void FUN_10111028(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 local_258;
  undefined2 local_256;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [276];
  undefined4 local_134;
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  if (*(char *)((int)param_1 + 0xa5) != '\0') {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar1 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_250);
      local_258 = 0xf;
      local_256 = 0xf;
      uVar2 = FUN_100b057c(auStack_250,1);
      uVar3 = FUN_100b057c(auStack_250,0);
      FUN_100b0408(uVar3,uVar2,&local_258);
      FUN_100ee64c(auStack_248);
      FUN_100ee64c(auStack_130);
      FUN_10001e48(local_134);
      uVar2 = local_1c;
      uVar3 = FUN_100b0578(auStack_250);
      FUN_10003150(uVar2,uVar3);
      FUN_10002be0(local_1c,local_134,local_1c);
      iVar1 = FUN_10000060(local_1c);
      if (iVar1 == 0) {
        FUN_10001548(local_1c);
        FUN_10000030();
        FUN_10002448(param_1[0x20]);
        FUN_10001548(local_134);
      }
      FUN_100ee77c(auStack_130,2);
      FUN_100ee77c(auStack_248,2);
    }
  }
  return;
}



// Function: FUN_101111bc at 101111bc
// Size: 392 bytes

undefined4 FUN_101111bc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_154;
  int local_130;
  undefined1 auStack_12c [276];
  undefined4 local_18;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
  if (iVar1 == 0) {
    if (param_1[0x20] == 0) {
      return 0;
    }
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x5e8) + (int)param_1);
    FUN_10000660(&local_130);
    if (local_130 != iVar1) {
      FUN_10000198(iVar1);
    }
    FUN_10002028((int)*(short *)((int)param_1 + 0x56),(int)*(short *)(param_1 + 0x15));
    **(int **)(local_154 + -0xe30) = (int)param_1;
    uVar3 = *(undefined4 *)(param_1[0x20] + 0x7a);
    iVar2 = FUN_10000060(uVar3);
    if (iVar2 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x2c8) + (int)param_1,uVar3);
      FUN_100ee64c(auStack_12c);
      if (*(char *)((int)param_1 + 0x86) == '\0') {
        FUN_10000108(*(undefined4 *)(iVar1 + 0x18),uVar3,local_18);
      }
      else {
        FUN_10002be0(*(undefined4 *)(iVar1 + 0x18),uVar3,local_18);
      }
      FUN_10001548(local_18);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2b0),uVar3);
      FUN_100ee77c(auStack_12c,2);
    }
    else {
      FUN_10001548(*(undefined4 *)(iVar1 + 0x18));
    }
  }
  return 1;
}



// Function: FUN_1011134c at 1011134c
// Size: 300 bytes

void FUN_1011134c(int *param_1,short *param_2)

{
  undefined1 auStack_40 [16];
  undefined2 local_30;
  undefined2 local_2e;
  short local_28;
  short local_26;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_40);
  FUN_100e12b8(auStack_40,&local_28);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),&local_20);
  local_30 = 4;
  local_2e = 4;
  FUN_100b06d4(&local_20,&local_30);
  if (local_28 < local_20) {
    *param_2 = (local_20 - local_28) + *(short *)((int)param_1 + 0xba);
  }
  else if (local_1c < local_28) {
    *param_2 = (local_1c - local_28) - *(short *)((int)param_1 + 0xba);
  }
  if (local_26 < local_1e) {
    param_2[1] = (local_1e - local_26) + *(short *)(param_1 + 0x2f);
  }
  else if (local_1a < local_26) {
    param_2[1] = (local_1a - local_22) - *(short *)(param_1 + 0x2f);
  }
  return;
}



// Function: FUN_10111478 at 10111478
// Size: 564 bytes

void FUN_10111478(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_2a4;
  undefined1 auStack_280 [8];
  undefined4 local_278 [2];
  short local_270;
  short local_26e;
  int local_268;
  int local_264;
  undefined2 local_260;
  undefined2 local_25e;
  undefined2 local_25c;
  undefined2 local_25a;
  undefined1 auStack_258 [276];
  undefined4 local_144;
  undefined1 auStack_140 [276];
  int *local_2c;
  
  *(undefined1 *)((int)param_1 + 0xb5) = 1;
  FUN_100ee64c(auStack_258);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),1);
  iVar4 = param_1[0x20];
  FUN_10000108(*(undefined4 *)(iVar4 + 0x72),*(undefined4 *)(iVar4 + 0x76),local_144);
  iVar3 = FUN_10000060(local_144);
  if (iVar3 != 0) {
    FUN_100005a0(*(undefined4 *)(iVar4 + 0x72),local_144);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar2);
  FUN_100ee64c(auStack_140);
  piVar1 = local_2c;
  uVar2 = FUN_100016b0();
  FUN_100005a0(uVar2,piVar1);
  FUN_100005b8(local_2c,4,4);
  FUN_10002be0(local_144,local_2c,local_2c);
  local_278[0] = **(undefined4 **)(local_2a4 + -0xe60);
  iVar3 = FUN_10000060(local_2c);
  if (iVar3 == 0) {
    iVar3 = *local_2c;
    local_260 = *(undefined2 *)(iVar3 + 2);
    local_25e = *(undefined2 *)(iVar3 + 4);
    local_25c = *(undefined2 *)(iVar3 + 6);
    local_25a = *(undefined2 *)(iVar3 + 8);
    iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),&local_260);
    if (iVar3 != 0) goto LAB_10111624;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828),local_278);
LAB_10111624:
  FUN_100e0f78(auStack_280,param_1 + 0xb);
  FUN_100b039c(&local_270,auStack_280,local_278);
  local_268 = (int)local_270;
  local_264 = (int)local_26e;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),&local_268,0);
  FUN_100ee77c(auStack_140,2);
  FUN_100ee77c(auStack_258,2);
  return;
}



// Function: FUN_101116ac at 101116ac
// Size: 732 bytes

int * FUN_101116ac(int *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [8];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined2 local_298 [8];
  undefined4 local_288;
  undefined4 local_284;
  undefined1 auStack_278 [276];
  int *local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined1 auStack_40 [8];
  
  iVar7 = 0;
  puVar1 = local_298;
  if ((local_298 != (undefined2 *)0x0) ||
     (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
    *puVar1 = *(undefined2 *)(param_1 + 0x22);
    puVar1[1] = *(undefined2 *)((int)param_1 + 0x8a);
    puVar1[2] = *(undefined2 *)(param_1 + 0x23);
    puVar1[3] = *(undefined2 *)((int)param_1 + 0x8e);
  }
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),1);
  local_2a0 = *(undefined4 *)(**(int **)(param_1[0x20] + 0x72) + 2);
  uStack_29c = *(undefined4 *)(**(int **)(param_1[0x20] + 0x72) + 6);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar2);
  piVar3 = (int *)FUN_10000e58();
  piVar4 = (int *)FUN_10001170();
  for (; piVar3 != (int *)0x0; piVar3 = (int *)FUN_10000e88(piVar3)) {
    iVar5 = FUN_100017b8(piVar3,0xd);
    if ((iVar5 != 0) && (iVar5 = FUN_100017b8(piVar3,0xf), iVar5 != 0)) {
      local_160 = *(undefined4 *)(*piVar3 + 0x22);
      uStack_15c = *(undefined4 *)(*piVar3 + 0x26);
      uVar2 = FUN_100b0578(local_298);
      iVar5 = FUN_10000e70(&local_160,uVar2,auStack_2a8);
      if (iVar5 != 0) {
        uVar2 = FUN_100b0574(auStack_40);
        iVar5 = FUN_10000e70(&local_2a0,&local_160,uVar2);
        if (iVar5 != 0) {
          iVar5 = FUN_100b08a4(auStack_40,0);
          iVar6 = FUN_100b08a4(auStack_40,1);
          if (iVar7 < iVar5 * iVar6) {
            piVar4 = piVar3;
            iVar7 = iVar5 * iVar6;
          }
        }
      }
    }
  }
  piVar3 = (int *)FUN_10001170();
  if (piVar4 == piVar3) {
    FUN_100ee64c(auStack_278);
    local_2b0 = *(undefined4 *)(*piVar4 + 0x22);
    uStack_2ac = *(undefined4 *)(*piVar4 + 0x26);
    FUN_10003150(local_164,&local_2b0);
    piVar3 = local_164;
    uVar2 = FUN_100016b0();
    FUN_10002be0(piVar3,uVar2,piVar3);
    local_288 = *(undefined4 *)(*local_164 + 2);
    local_284 = *(undefined4 *)(*local_164 + 6);
    *param_2 = local_288;
    param_2[1] = local_284;
    FUN_100ee77c(auStack_278,2);
  }
  else {
    uVar2 = *(undefined4 *)(*piVar4 + 0x26);
    *param_2 = *(undefined4 *)(*piVar4 + 0x22);
    param_2[1] = uVar2;
  }
  return piVar4;
}



// Function: FUN_10111a60 at 10111a60
// Size: 76 bytes

void FUN_10111a60(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_100b1d90(param_2,0x607f001c);
  }
  else {
    FUN_10002460(*(int *)(param_1 + 0x80));
  }
  return;
}



// Function: FUN_10111ab0 at 10111ab0
// Size: 248 bytes

void FUN_10111ab0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_20);
  if (*(char *)((int)param_1 + 0xa6) != '\0') {
    FUN_100e0f78(auStack_28,&local_20);
    puVar1 = (undefined4 *)FUN_100b0368(auStack_18,auStack_28);
    iVar2 = FUN_10002df0(param_1[0x20],*puVar1);
    if (iVar2 != 0) {
      uVar3 = FUN_100f5754(0);
      uVar4 = FUN_1010ef14(0);
      FUN_100f5754(uVar3);
      FUN_1010efac(uVar4,0x1f,param_1);
      FUN_10117884((int)*(short *)(*param_1 + 0x208) + (int)param_1,uVar4);
    }
  }
  return;
}



// Function: FUN_10111ba8 at 10111ba8
// Size: 368 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10111ba8(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x650),param_2);
  piVar3 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x330),0);
  piVar4 = (int *)0x1;
  bVar1 = true;
  if (piVar3 != param_1) {
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      piVar3 = (int *)FUN_10001050();
      if ((int *)param_1[0x20] == piVar3) goto LAB_10111cd4;
    }
    if ((piVar2 != (int *)0x4) ||
       (piVar3 = (int *)FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xe8)),
       piVar3 == (int *)0x0)) {
      piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780));
    }
    if (piVar2 == (int *)0x3) {
      if (*(char *)((int)param_1 + 0xab) == '\0') {
        bVar1 = false;
      }
      else {
        FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x310));
        piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x650),param_2);
        piVar2 = piVar3;
      }
    }
  }
LAB_10111cd4:
  if (bVar1) {
    if (piVar2 < (int *)0x9) {
      return piVar3;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  return piVar4;
}



// Function: FUN_10111e2c at 10111e2c
// Size: 160 bytes

undefined4 FUN_10111e2c(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_30;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  
  local_24 = *param_2;
  uStack_20 = param_2[1];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_24);
  FUN_100e0f78(auStack_2c,&local_24);
  puVar1 = (undefined4 *)FUN_100b0368(auStack_1c,auStack_2c);
  uVar2 = FUN_100010e0(*puVar1,&local_30);
  if (local_30 != param_1[0x20]) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_10111ecc at 10111ecc
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111ecc(int *param_1,int *param_2)

{
  int *piVar1;
  byte local_118 [260];
  
  local_118[0] = 0;
  FUN_101070bc(param_1,param_2);
  piVar1 = (int *)param_1[10];
  if ((piVar1 != (int *)0x0) && (param_2 != piVar1)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x340) + (int)piVar1,param_1);
  }
  if (param_2 == (int *)0x0) {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3b8),param_1);
    param_1[1] = (int)_DAT_28030000;
  }
  else {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3c8),param_1);
    FUN_10117884((int)*(short *)(*param_2 + 0x328) + (int)param_2,param_1);
    FUN_10117884((int)*(short *)(*param_2 + 0x310) + (int)param_2,local_118);
    if (-1 < (int)((local_118[0] - 1) + (uint)(local_118[0] != 0))) {
      FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,local_118);
    }
    param_1[1] = (int)param_2;
  }
  return;
}



// Function: FUN_1011201c at 1011201c
// Size: 80 bytes

undefined1 FUN_1011201c(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined1 *)(iVar1 + 0x30);
  }
  return uVar2;
}



// Function: FUN_1011206c at 1011206c
// Size: 116 bytes

void FUN_1011206c(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x198) + (int)piVar1,param_2,param_3);
  }
  return;
}



// Function: FUN_101120e0 at 101120e0
// Size: 508 bytes

undefined4 FUN_101120e0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 local_48;
  
  puVar1 = (undefined4 *)FUN_1010eea0(*(undefined4 *)(param_1[0x20] + 0x7e));
  if (puVar1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar2 = FUN_100ef9b8(puVar1);
    iVar3 = FUN_10000a98(*puVar1,0x3bb0,1);
    FUN_100db26c(iVar3);
    *(undefined1 *)(iVar3 + 0x11) = 0;
    uVar4 = FUN_10117884((int)*(short *)(*param_1 + 0x7f0) + (int)param_1,1);
    uVar5 = FUN_100efbf0(param_1[0x20]);
    uVar7 = param_2[1];
    local_48 = CONCAT22(*(undefined2 *)(param_2 + 1),*(undefined2 *)((int)param_2 + 2));
    local_50 = CONCAT22(*(undefined2 *)param_2,*(undefined2 *)((int)param_2 + 6));
    iVar6 = FUN_10003240(iVar3,0x3bb0,uVar5,param_1[0x20],1,*param_2);
    if ((((iVar6 == 2) ||
         (iVar6 = FUN_10003240(iVar3,0x3bb0,uVar5,param_1[0x20],1,uVar7), iVar6 == 2)) ||
        (iVar6 = FUN_10003240(iVar3,0x3bb0,uVar5,param_1[0x20],1,local_48), iVar6 == 2)) ||
       (iVar6 = FUN_10003240(iVar3,0x3bb0,uVar5,param_1[0x20],1,local_50), iVar6 == 2)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    FUN_100ef5f0(iVar3);
    FUN_10001b60(puVar1,uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),uVar4);
  }
  return uVar7;
}



// Function: FUN_10112308 at 10112308
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10112308(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((_DAT_80a2db8e == param_1[0x20]) &&
      (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668)), iVar1 != 0)) &&
     (iVar1 = FUN_10000060(param_2), iVar1 == 0)) {
    .glue::FUN_101159ec(param_2);
    if (*(char *)((int)param_1 + 0x86) == '\0') {
      FUN_10000108(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_2,
                   *(undefined4 *)(_DAT_80a2db8e + 0x1c));
    }
    else {
      FUN_10003060(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_2,
                   *(undefined4 *)(_DAT_80a2db8e + 0x1c));
    }
  }
  return;
}



// Function: FUN_101123d0 at 101123d0
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101123d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((_DAT_80a2db8e == param_1[0x20]) &&
      (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668)), iVar1 != 0)) &&
     (iVar1 = FUN_10000060(param_2), iVar1 == 0)) {
    FUN_10002370(param_2);
    if (*(char *)((int)param_1 + 0x86) == '\0') {
      FUN_10003060(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_2,
                   *(undefined4 *)(_DAT_80a2db8e + 0x1c));
    }
    else {
      FUN_10000108(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_2,
                   *(undefined4 *)(_DAT_80a2db8e + 0x1c));
    }
  }
  return;
}



// Function: FUN_10112498 at 10112498
// Size: 564 bytes

undefined4 FUN_10112498(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar5 = param_1[0x20];
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar1 == 0) && (iVar1 = FUN_10000060(*(undefined4 *)(iVar5 + 0x72)), iVar1 != 0)) {
    if ((param_2 == '\x01') &&
       (puVar3 = (undefined4 *)FUN_1010eea0(*(undefined4 *)(iVar5 + 0x7e)),
       puVar3 != (undefined4 *)0x0)) {
      uVar2 = FUN_100ef9b8(puVar3);
      iVar1 = FUN_10000a98(*puVar3,0x3bb0,1);
      FUN_100db26c();
      *(undefined1 *)(iVar1 + 0x11) = 0;
      uVar4 = FUN_100efbf0(param_1[0x20]);
      FUN_10003240(iVar1,0x3bb0,uVar4,param_1[0x20],2,0);
      FUN_100ef5f0(iVar1);
      FUN_10001b60(puVar3,uVar2);
      uVar2 = FUN_100b057c(**(int **)(iVar5 + 0x72) + 2,0);
      uVar4 = FUN_100b057c(**(int **)(iVar5 + 0x76) + 2,0);
      FUN_100b0408((int)param_1 + 0xba,uVar4,uVar2);
      iVar1 = **(int **)(iVar5 + 0x72);
      local_30 = *(undefined2 *)(iVar1 + 2);
      local_2e = *(undefined2 *)(iVar1 + 4);
      local_2c = *(undefined2 *)(iVar1 + 6);
      local_2a = *(undefined2 *)(iVar1 + 8);
      iVar1 = **(int **)(iVar5 + 0x76);
      local_38 = *(undefined2 *)(iVar1 + 2);
      local_36 = *(undefined2 *)(iVar1 + 4);
      local_34 = *(undefined2 *)(iVar1 + 6);
      local_32 = *(undefined2 *)(iVar1 + 8);
      FUN_100b08d4(auStack_40,&local_30);
      FUN_100b08d4(auStack_48,&local_38);
      FUN_100b0408((int)param_1 + 0xbe,auStack_40,auStack_48);
    }
    uVar2 = 0;
  }
  else {
    if ((param_2 != '\x01') &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668)), iVar1 == 0)) {
      FUN_10000138(*(undefined4 *)(iVar5 + 0x72));
      FUN_10000138(*(undefined4 *)(iVar5 + 0x76));
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_101126cc at 101126cc
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101126cc(int param_1)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3d0),
               *(undefined4 *)(param_1 + 0x80));
  return;
}



// Function: FUN_10112710 at 10112710
// Size: 172 bytes

undefined4 FUN_10112710(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_1010f990(param_1);
    if (piVar2 == (int *)0x0) {
      iVar3 = FUN_100efbf0(param_1);
      if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 == 5)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x818) + (int)piVar2);
    }
  }
  return uVar1;
}



// Function: FUN_101127bc at 101127bc
// Size: 80 bytes

char FUN_101127bc(uint param_1)

{
  uint uVar1;
  char cVar2;
  
  if (param_1 == 0) {
    cVar2 = '\0';
  }
  else {
    uVar1 = FUN_10003030();
    cVar2 = (uVar1 <= param_1 && (uint)(uVar1 < param_1) <= param_1 - uVar1) - (uVar1 < param_1);
  }
  return cVar2;
}



// Function: FUN_1011280c at 1011280c
// Size: 144 bytes

undefined4 FUN_1011280c(int param_1)

{
  undefined4 uVar1;
  short local_110 [2];
  undefined1 local_10c [256];
  undefined1 auStack_c [4];
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_10c[0] = 0;
    FUN_10001758(*(undefined4 *)(param_1 + 0x7e),local_110,auStack_c,local_10c);
    if (((*(short *)(param_1 + 0x6c) < 0) || (local_110[0] == 0x7d)) || (local_110[0] == 0x7e)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// Function: FUN_1011289c at 1011289c
// Size: 260 bytes

int FUN_1011289c(void)

{
  int iVar1;
  int iVar2;
  int local_18 [4];
  
  FUN_100ee970(local_18);
  FUN_10117884((int)*(short *)(local_18[0] + 0x10) + (int)local_18);
  iVar1 = local_18[1];
  iVar2 = FUN_100eea60(local_18);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1010fab8(iVar1);
    if ((((iVar2 == 0) && (iVar2 = FUN_101127bc(iVar1), iVar2 == 0)) &&
        (iVar2 = FUN_1011280c(iVar1), iVar2 == 0)) &&
       ((iVar2 = FUN_10112710(iVar1), iVar2 == 0 && (*(char *)(iVar1 + 0x6e) != '\0')))) break;
    FUN_10117884((int)*(short *)(local_18[0] + 0x18) + (int)local_18);
    iVar1 = local_18[1];
    iVar2 = FUN_100eea60(local_18);
  }
  return iVar1;
}



// Function: FUN_101129a0 at 101129a0
// Size: 524 bytes

void FUN_101129a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  short sVar6;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uStack0000001c;
  int local_4c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack0000001c = param_2;
  iVar2 = FUN_10002670();
  if (iVar2 != 0) {
    sVar6 = FUN_10000f00();
    uVar7 = *param_3;
    uStack_1c = param_3[1];
    local_20._0_2_ = (short)((uint)uVar7 >> 0x10);
    bVar1 = local_20._0_2_ < (short)(sVar6 + 4);
    local_20 = uVar7;
    if (bVar1) {
      local_20 = CONCAT22(sVar6 + 4,(short)uVar7);
    }
    FUN_10000660(&local_24);
    FUN_10000bd0(&local_28);
    FUN_10000198(local_28);
    FUN_100016b0();
    FUN_10001548();
    iVar2 = FUN_100efb60();
    if ((iVar2 != 0) ||
       ((iVar3 = FUN_1010fab8(param_1), iVar3 == 0 && (iVar3 = FUN_10112710(param_1), iVar3 == 0))))
    {
      if (iVar2 == 0) {
        FUN_1011289c();
        FUN_10002a48();
      }
      else {
        FUN_10002a48(param_1);
      }
    }
    uVar7 = FUN_100019f8();
    FUN_100db26c(uVar7);
    FUN_100005a0(*(undefined4 *)(param_1 + 0x72),uVar7);
    uVar4 = FUN_100b0578(&local_20);
    uVar5 = FUN_100b0578(&local_20);
    iVar3 = FUN_10000fc0(uVar7,uStack0000001c,uVar5,uVar4,0,0);
    FUN_10000198(local_24);
    if (iVar3 != 0) {
      sVar6 = (short)((uint)iVar3 >> 0x10);
      if (sVar6 != -0x8000) {
        .glue::FUN_101159dc(param_1,(int)(short)(*(short *)(**(int **)(param_1 + 0x76) + 4) +
                                                (short)iVar3),
                            (int)(short)(sVar6 + *(short *)(**(int **)(param_1 + 0x76) + 2)),0);
      }
    }
    if (iVar2 == 0) {
      FUN_10117884(**(int **)(local_4c + -0xedc) +
                   (int)*(short *)(*(int *)**(int **)(local_4c + -0xedc) + 0x3d0),param_1);
    }
    FUN_10001a70(uVar7);
  }
  return;
}



// Function: FUN_10112bac at 10112bac
// Size: 352 bytes

void FUN_10112bac(int *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_50 [8];
  undefined2 local_48 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 auStack_28 [12];
  
  local_40 = *param_2;
  uStack_3c = param_2[1];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_40);
  puVar1 = local_48;
  if ((local_48 != (undefined2 *)0x0) ||
     (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
    *puVar1 = *(undefined2 *)(param_1 + 0x22);
    puVar1[1] = *(undefined2 *)((int)param_1 + 0x8a);
    puVar1[2] = *(undefined2 *)(param_1 + 0x23);
    puVar1[3] = *(undefined2 *)((int)param_1 + 0x8e);
  }
  FUN_100e0f78(auStack_50,&local_40);
  puVar2 = (undefined4 *)FUN_100b0368(auStack_28,auStack_50);
  FUN_101129a0(param_1[0x20],*puVar2,local_48);
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)FUN_100b057c(param_1[0x20] + 0x10,0);
    local_30 = *puVar2;
    FUN_100b0384(&local_30);
    FUN_10002fd0();
    local_38 = (int)local_30._0_2_;
    local_34 = (int)local_30._2_2_;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),&local_38,0);
  }
  return;
}



// Function: FUN_10112d0c at 10112d0c
// Size: 616 bytes

void FUN_10112d0c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_4c;
  short local_28;
  short local_26;
  undefined4 local_20;
  int local_18;
  int local_14;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if (iVar1 == 0) {
    FUN_100b08d4(&local_28,param_1[0x20] + 0x10);
    local_18 = (int)local_28;
    local_14 = (int)local_26;
    FUN_10117884((int)*(short *)(*param_1 + 0x378) + (int)param_1,&local_18,0);
    if ((*(char *)(param_1 + 0x2b) != '\0') && (*(char *)((int)param_1 + 0xb1) == '\0')) {
      FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1);
    }
    if (((*(char *)((int)param_1 + 0xad) != '\0') && (*(char *)((int)param_1 + 0xb2) == '\0')) ||
       ((*(char *)((int)param_1 + 0xae) != '\0' && (*(char *)((int)param_1 + 0xb3) == '\0')))) {
      iVar1 = *param_1;
      uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x818));
      FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x7b0),
                   *(undefined1 *)((int)param_1 + 0xad),*(undefined1 *)((int)param_1 + 0xae),uVar2);
    }
    if ((*(char *)((int)param_1 + 0xaf) != '\0') && (*(char *)(param_1 + 0x2d) == '\0')) {
      if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)((int)param_1 + 0xb5) == '\0')) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
        *(undefined1 *)((int)param_1 + 0xb5) = 0;
      }
      local_20 = 0x100010;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),0x100010,
                   *(undefined4 *)(local_4c + -0x568));
    }
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)((int)param_1 + 0xb5) == '\0')) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8));
    }
    iVar1 = FUN_100e1a08(param_1 + 0x18);
    if (iVar1 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
    }
    piVar3 = (int *)param_1[0x26];
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 400),0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x660),1,1);
  }
  FUN_1010bd74(param_1);
  return;
}



// Function: FUN_10112f74 at 10112f74
// Size: 436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10112f74(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_15c;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  iVar4 = 0x20202020;
  if (piVar2 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738));
    FUN_100b1d90(*(undefined4 *)(local_15c + -0xe2c),*(int *)(local_15c + -0x57c) + 0x20);
    FUN_100db158(0xffffb1d8,0);
    iVar4 = 0x20202020;
  }
  else {
    cVar1 = *(char *)(piVar2 + 8);
    if (cVar1 == '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x800) + (int)param_1,1);
    }
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = _DAT_41820010;
    _DAT_41820010 = auStack_138;
    iVar3 = FUN_10000090(auStack_138);
    if (iVar3 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780));
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x1a0));
      iVar4 = piVar2[0xb];
      _DAT_41820010 = local_30;
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738));
      FUN_100db158((int)local_38,local_34);
    }
    if (cVar1 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x800),0);
    }
  }
  return iVar4;
}



// Function: FUN_10113128 at 10113128
// Size: 80 bytes

undefined1 FUN_10113128(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(iVar1 + 0x20);
  }
  return uVar2;
}



// Function: FUN_10113178 at 10113178
// Size: 116 bytes

undefined4 FUN_10113178(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((*(char *)(iVar1 + 0x20) == '\0') || (*(char *)(iVar1 + 0x30) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_101131ec at 101131ec
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101131ec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  do {
    if (iVar1 == 0) {
LAB_10113250:
      iVar1 = *(int *)(param_1 + 0x98);
      while( true ) {
        if (iVar1 == 0) {
          return;
        }
        if (param_2 == iVar1) break;
        iVar1 = *(int *)(iVar1 + 4);
      }
      *(int *)(param_1 + 0x98) = param_1;
      return;
    }
    if (param_2 == iVar1) {
      _DAT_28030000[0x1b] = param_1;
      goto LAB_10113250;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}



// Function: FUN_1011328c at 1011328c
// Size: 832 bytes

void FUN_1011328c(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined1 local_90 [2];
  short sStack_8e;
  undefined1 auStack_88 [6];
  short sStack_82;
  undefined1 auStack_80 [8];
  undefined1 local_78 [2];
  short sStack_76;
  undefined1 auStack_70 [6];
  short sStack_6a;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (param_1[0x20] != 0) {
    FUN_100e1a64(auStack_60,param_2);
    iVar1 = FUN_100e1230(auStack_60,param_1 + 0xd);
    if (iVar1 == 0) {
      uVar2 = FUN_100e1594(param_2,0);
      iVar1 = FUN_100e11c8(uVar2,param_1 + 0xb);
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_100e1594(param_2,0);
        uVar2 = *puVar3;
        iVar1 = FUN_100e1594(param_2,0);
        .glue::FUN_101159dc(param_1[0x20],(int)(short)*(undefined4 *)(iVar1 + 4),(int)(short)uVar2,0
                           );
      }
      FUN_100e1a64(auStack_80,param_2);
      iVar1 = FUN_100e11c8(auStack_80,param_1 + 0xd);
      if (iVar1 != 0) {
        FUN_100e1a64(auStack_88,param_2);
        FUN_100e1a64(local_90,param_2);
        FUN_10002bf8(param_1[0x20],(int)sStack_82,(int)sStack_8e,param_3);
      }
    }
    else {
      FUN_100e1a64(auStack_68,param_2);
      iVar1 = FUN_100e11c8(auStack_68,param_1 + 0xd);
      if (iVar1 != 0) {
        FUN_100e1a64(auStack_70,param_2);
        FUN_100e1a64(local_78,param_2);
        FUN_10002bf8(param_1[0x20],(int)sStack_6a,(int)sStack_76,param_3);
      }
      uVar2 = FUN_100e1594(param_2,0);
      iVar1 = FUN_100e11c8(uVar2,param_1 + 0xb);
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_100e1594(param_2,0);
        uVar2 = *puVar3;
        iVar1 = FUN_100e1594(param_2,0);
        .glue::FUN_101159dc(param_1[0x20],(int)(short)*(undefined4 *)(iVar1 + 4),(int)(short)uVar2,0
                           );
      }
    }
  }
  local_58 = param_1[0xd];
  iStack_54 = param_1[0xe];
  local_50 = 0xfffffff1;
  local_4c = 0xfffffff1;
  local_48 = 0;
  local_44 = 0;
  if ((*(char *)((int)param_1 + 0xa5) != '\0') && (param_3 != '\0')) {
    FUN_100e1a64(auStack_98,param_2);
    iVar1 = FUN_100e11c8(auStack_98,&local_58);
    if (iVar1 != 0) {
      FUN_100e15a8(&local_50,auStack_a8,param_1 + 0xd);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_a8);
    }
  }
  FUN_1010b818(param_1,param_2,param_3);
  if ((*(char *)((int)param_1 + 0xa5) != '\0') && (param_3 != '\0')) {
    iVar1 = FUN_100e11c8(param_1 + 0xd,&local_58);
    if (iVar1 != 0) {
      FUN_100e15a8(&local_50,auStack_b8,param_1 + 0xd);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_b8);
    }
  }
  return;
}



// Function: FUN_101135cc at 101135cc
// Size: 316 bytes

void FUN_101135cc(int *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_40 [8];
  undefined2 local_38 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  undefined1 auStack_20 [8];
  
  if (*(char *)((int)param_1 + 0xa5) != '\0') {
    local_30 = *param_2;
    uStack_2c = param_2[1];
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_30);
    puVar1 = local_38;
    if ((local_38 != (undefined2 *)0x0) ||
       (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
      *puVar1 = *(undefined2 *)(param_1 + 0x24);
      puVar1[1] = *(undefined2 *)((int)param_1 + 0x92);
      puVar1[2] = *(undefined2 *)(param_1 + 0x25);
      puVar1[3] = *(undefined2 *)((int)param_1 + 0x96);
    }
    FUN_100e0f78(auStack_40,&local_30);
    uVar2 = FUN_100b0578(local_38);
    puVar3 = (undefined4 *)FUN_100b0368(auStack_20,auStack_40);
    iVar4 = .glue::FUN_10115a00(param_1[0x20],*puVar3,uVar2);
    if (iVar4 != 0) {
      local_24 = (int)(short)iVar4;
      local_28 = (int)(short)((uint)iVar4 >> 0x10);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x378),&local_28,1);
    }
  }
  return;
}



// Function: FUN_10113708 at 10113708
// Size: 384 bytes

void FUN_10113708(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iStack0000001c;
  short sStack00000020;
  short sStack00000022;
  undefined1 auStack_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  
  piVar4 = &local_38;
  piVar3 = &local_30;
  sStack00000020 = (short)((uint)param_3 >> 0x10);
  sStack00000022 = (short)param_3;
  param_1[0x24] = param_2;
  param_1[0x25] = param_3;
  if ((*(ushort *)(param_1 + 0x21) & 8) != 0) {
    iVar1 = **(int **)(param_1[0x20] + 0x82);
    local_2c = (int)*(short *)(iVar1 + 0xe);
    local_30 = param_1[0xc] + (int)sStack00000022 + -1;
    if (*(short *)(iVar1 + 0xe) < local_30) {
      piVar3 = &local_2c;
    }
    *(short *)(iVar1 + 0xe) = (short)*piVar3;
    local_34 = (int)*(short *)(iVar1 + 0xc);
    local_38 = param_1[0xb] + (int)sStack00000020 + -1;
    if (*(short *)(iVar1 + 0xc) < local_38) {
      piVar4 = &local_34;
    }
    *(short *)(iVar1 + 0xc) = (short)*piVar4;
  }
  local_28 = param_1[0xd];
  iStack_24 = param_1[0xe];
  iStack0000001c = param_2;
  _sStack00000020 = param_3;
  local_20 = param_2;
  local_1c = param_3;
  FUN_100e1448(auStack_48,param_1 + 0x24);
  FUN_100e1264(&local_28,auStack_48);
  iVar1 = *param_1;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x670));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x378),&local_28,uVar2);
  return;
}



// Function: FUN_10113888 at 10113888
// Size: 136 bytes

void FUN_10113888(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0x1a) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x680));
    if (iVar1 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x760) + (int)param_1,param_3);
    }
  }
  else {
    FUN_100dafe8(param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_10113910 at 10113910
// Size: 124 bytes

void FUN_10113910(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    param_2 = param_1;
  }
  piVar1 = (int *)param_1[0x26];
  if (param_2 != piVar1) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x168) + (int)piVar1);
    param_1[0x26] = (int)param_2;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160));
  }
  return;
}



// Function: FUN_1011398c at 1011398c
// Size: 124 bytes

void FUN_1011398c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_110 [260];
  
  local_110[0] = 0;
  FUN_10002460(*(undefined4 *)(param_1 + 0x80),local_110);
  iVar1 = FUN_100ef228(local_110,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_100b1c84(param_2);
    FUN_10002478(*(undefined4 *)(param_1 + 0x80),uVar2);
  }
  return;
}



// Function: FUN_10113a08 at 10113a08
// Size: 160 bytes

void FUN_10113a08(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_110 [260];
  
  local_110[0] = 0;
  if (0 < *(short *)(param_1 + 0x28)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),local_110);
    iVar1 = FUN_100ee588(local_110,param_2,(int)*(short *)(param_1 + 0x28),
                         (int)*(short *)((int)param_1 + 0xa2));
    if (iVar1 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),local_110);
    }
  }
  return;
}



// Function: FUN_10113aa8 at 10113aa8
// Size: 160 bytes

void FUN_10113aa8(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar2 != 0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7d8) + (int)param_1), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
    uVar1 = *(undefined1 *)((int)param_1 + 0xb9);
    *(undefined1 *)((int)param_1 + 0xb9) = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x660) + (int)param_1,0);
    *(undefined1 *)((int)param_1 + 0xb9) = uVar1;
  }
  return;
}



// Function: FUN_10113b48 at 10113b48
// Size: 112 bytes

void FUN_10113b48(int *param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x2e) != '\0') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
    uVar1 = *(undefined1 *)((int)param_1 + 0xb9);
    *(undefined1 *)((int)param_1 + 0xb9) = 0;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x660),1,1);
    *(undefined1 *)((int)param_1 + 0xb9) = uVar1;
  }
  return;
}



// Function: FUN_10113bb8 at 10113bb8
// Size: 160 bytes

void FUN_10113bb8(int param_1,char param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    if (((param_2 != '\0') && (*(char *)(param_1 + 0x6f) == '\0')) ||
       ((param_2 == '\0' && (*(char *)(param_1 + 0x6f) != '\0')))) {
      FUN_10001080(param_1,param_2);
    }
    piVar1 = (int *)FUN_1010f990(param_1);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x318),param_2);
    }
  }
  return;
}



// Function: FUN_10113c58 at 10113c58
// Size: 40 bytes

void FUN_10113c58(undefined4 param_1)

{
  FUN_10113bb8(param_1,0);
  return;
}



// Function: FUN_10113c80 at 10113c80
// Size: 732 bytes

void FUN_10113c80(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [5];
  
  if (*(char *)(param_1 + 0x6e) == '\0') {
    bVar1 = false;
    iVar2 = FUN_1011289c();
    iVar3 = FUN_1010fab8(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_10112710(param_1);
      if (iVar3 == 0) {
        if (iVar2 == 0) {
          bVar1 = true;
        }
        else {
          FUN_100ee970(local_30);
          FUN_10117884((int)*(short *)(local_30[0] + 0x10) + (int)local_30);
          iVar3 = local_30[1];
          iVar4 = FUN_100eea60(local_30);
          iVar6 = 0;
          if (iVar4 != 0) {
            do {
              if (iVar3 == param_1) {
                iVar6 = 1;
              }
              else if (iVar3 == iVar2) {
                iVar6 = 2;
              }
              FUN_10117884((int)*(short *)(local_30[0] + 0x18) + (int)local_30);
              iVar3 = local_30[1];
              iVar4 = FUN_100eea60(local_30);
            } while ((iVar4 != 0) && (iVar6 == 0));
          }
          if (iVar6 == 1) {
            FUN_10113c58(iVar2);
            bVar1 = true;
          }
        }
      }
      else {
        FUN_100ee970(local_40);
        FUN_10117884((int)*(short *)(local_40[0] + 0x10) + (int)local_40);
        iVar3 = local_40[1];
        iVar4 = FUN_100eea60(local_40);
        iVar6 = 0;
        if (iVar4 != 0) {
          do {
            if (iVar3 == param_1) {
              iVar6 = 1;
            }
            else if (*(char *)(iVar3 + 0x6e) != '\0') {
              iVar3 = FUN_10112710(iVar3);
              if (iVar3 == 0) {
                iVar6 = 1;
              }
              else {
                iVar6 = 2;
              }
            }
            FUN_10117884((int)*(short *)(local_40[0] + 0x18) + (int)local_40);
            iVar3 = local_40[1];
            iVar4 = FUN_100eea60(local_40);
          } while ((iVar4 != 0) && (iVar6 == 0));
        }
        if (iVar6 == 1) {
          iVar3 = FUN_10001050();
          bVar1 = true;
          if (iVar3 != 0) {
            iVar4 = FUN_10112710(iVar3);
            if (iVar4 == 0) {
              FUN_10113c58(iVar2);
            }
            else {
              FUN_10113c58(iVar3);
            }
          }
        }
      }
    }
    else {
      FUN_10001050();
      iVar2 = FUN_10112710();
      bVar1 = iVar2 == 0;
    }
    if ((bVar1) || (iVar2 = FUN_1010fab8(param_1), iVar2 != 0)) {
      *(undefined1 *)(param_1 + 0x6f) = 1;
    }
    FUN_10002dd8(param_1,1);
    if ((bVar1) && (piVar5 = (int *)FUN_1010f990(param_1), piVar5 != (int *)0x0)) {
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x318),1);
    }
  }
  return;
}



// Function: FUN_10113f5c at 10113f5c
// Size: 40 bytes

void FUN_10113f5c(undefined4 param_1)

{
  FUN_10113bb8(param_1,1);
  return;
}



// Function: FUN_10113f84 at 10113f84
// Size: 260 bytes

void FUN_10113f84(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x6e) != '\0') {
    if ((*(char *)(param_1 + 0x6f) == '\0') || (iVar2 = FUN_1010fab8(param_1), iVar2 != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    FUN_10113c58(param_1);
    FUN_10002dd8(param_1,0);
    if (bVar4) {
      iVar2 = FUN_10001050();
      if (iVar2 != 0) {
        iVar3 = FUN_1010fab8(iVar2);
        if (iVar3 != 0) goto LAB_10114034;
        cVar1 = *(char *)(iVar2 + 0x6e);
        while (cVar1 == '\0') {
LAB_10114034:
          do {
            iVar2 = *(int *)(iVar2 + 0x90);
            if (iVar2 == 0) goto LAB_10114060;
            iVar3 = FUN_1010fab8(iVar2);
          } while (iVar3 != 0);
          cVar1 = *(char *)(iVar2 + 0x6e);
        }
      }
LAB_10114060:
      if (iVar2 != 0) {
        FUN_10113f5c(iVar2);
      }
    }
  }
  return;
}



// Function: FUN_10114088 at 10114088
// Size: 628 bytes

void FUN_10114088(int *param_1,char param_2,undefined1 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short local_40;
  short local_3e;
  int local_38;
  int local_34;
  int local_30 [5];
  
  if (param_2 != '\0') {
    FUN_100b08d4(&local_40,param_1[0x20] + 0x10);
    local_38 = (int)local_40;
    local_34 = (int)local_3e;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x378),&local_38,param_3);
  }
  if (*(char *)((int)param_1 + 0xb9) == '\0') {
LAB_10114148:
    FUN_10002dd8(param_1[0x20],param_2);
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318),0);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      FUN_10001080(param_1[0x20],param_2);
      goto LAB_10114148;
    }
    if (param_2 == '\0') {
      FUN_10113f84(param_1[0x20]);
    }
    else {
      FUN_10113c80(param_1[0x20]);
    }
  }
  if (param_2 == '\0') {
LAB_10114264:
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318),param_2);
      goto LAB_101142d4;
    }
  }
  else if (*(char *)((int)param_1 + 0xb6) != '\0') {
    FUN_100ee970(local_30);
    FUN_10117884((int)*(short *)(local_30[0] + 0x10) + (int)local_30,0);
    iVar5 = local_30[1];
    iVar4 = FUN_100eea60(local_30);
    bVar2 = false;
    bVar3 = false;
    while (iVar4 != 0) {
      bVar1 = bVar2;
      if (((iVar5 != param_1[0x20]) && (iVar4 = FUN_10112710(iVar5), bVar1 = bVar3, iVar4 == 0)) &&
         (iVar5 = FUN_1010fab8(iVar5), iVar5 == 0)) {
        bVar2 = true;
      }
      FUN_10117884((int)*(short *)(local_30[0] + 0x18) + (int)local_30);
      iVar5 = local_30[1];
      iVar4 = FUN_100eea60(local_30);
      bVar3 = bVar1;
    }
    if (bVar3) {
      FUN_10003000(param_1[0x20]);
    }
    goto LAB_10114264;
  }
  if ((param_2 == '\0') &&
     (iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x680)), iVar5 != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318),0);
  }
LAB_101142d4:
  FUN_1010c2d4(param_1,param_2,param_3);
  return;
}



// Function: FUN_101142fc at 101142fc
// Size: 568 bytes

void FUN_101142fc(int *param_1,int param_2,short *param_3)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short sStack0000001c;
  short sStack0000001e;
  undefined1 auStack_68 [8];
  int local_60;
  undefined1 auStack_5c [8];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  
  piVar5 = &local_60;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_40);
  psVar1 = (short *)FUN_100b057c(param_1 + 0x22,1);
  local_48 = (int)*psVar1;
  local_44 = (int)psVar1[1];
  uVar2 = FUN_100e1580(auStack_40,0);
  FUN_100e10b0(auStack_5c,uVar2,&local_48);
  uVar2 = FUN_100e1580(auStack_40,1);
  uVar3 = FUN_100e1580(auStack_40,1);
  FUN_100e10f8(uVar3,auStack_5c,uVar2);
  if (sStack0000001e < 0) {
    local_34 = (int)*(short *)((int)param_1 + 0x8a);
  }
  if (_sStack0000001c < 0) {
    local_38 = (int)*(short *)(param_1 + 0x22);
  }
  if ((sStack0000001e == 0) || (sStack0000001c == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_100e1a3c(auStack_40,1);
    local_54 = (iVar4 + sStack0000001e + -1) / (int)sStack0000001e;
    iVar4 = FUN_100e1a3c(auStack_40,0);
    local_60 = (iVar4 + sStack0000001c + -1) / (int)sStack0000001c;
    if (local_54 < local_60) {
      piVar5 = &local_54;
    }
    iVar4 = (int)(short)*piVar5;
  }
  if (iVar4 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = (int)(short)(*param_3 - (short)((int)*param_3 / iVar4) * (short)iVar4);
  }
  if (local_50 != 0) {
    local_4c = local_50 * sStack0000001e;
    local_50 = local_50 * sStack0000001c;
    uVar2 = FUN_100e1580(auStack_40,0);
    FUN_100e10b0(auStack_68,uVar2,&local_50);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),auStack_68,0);
  }
  *param_3 = *param_3 + 1;
  return;
}



// Function: FUN_10114534 at 10114534
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114534(int *param_1)

{
  int iVar1;
  undefined1 auStack_148 [16];
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)((int)param_1 + 0x86) == '\0') {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c0));
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0x86) = 1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = _DAT_41820010;
      _DAT_41820010 = auStack_130;
      iVar1 = FUN_10000090(auStack_130);
      if (iVar1 == 0) {
        iVar1 = **(int **)(param_1[0x20] + 0x7a);
        local_138 = *(undefined2 *)(iVar1 + 2);
        local_136 = *(undefined2 *)(iVar1 + 4);
        local_134 = *(undefined2 *)(iVar1 + 6);
        local_132 = *(undefined2 *)(iVar1 + 8);
        FUN_100e1b4c(&local_138,auStack_148);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),auStack_148);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_148);
        _DAT_41820010 = local_28;
      }
      else {
        FUN_10000138(*(undefined4 *)(param_1[0x20] + 0x7a));
        *(undefined1 *)((int)param_1 + 0x86) = 0;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
        FUN_100db158((int)local_30,local_2c);
      }
      *(undefined1 *)((int)param_1 + 0x86) = 0;
      FUN_10000138(*(undefined4 *)(param_1[0x20] + 0x7a));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    }
  }
  return;
}



// Function: FUN_1011472c at 1011472c
// Size: 712 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_1011472c(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  int local_78;
  int local_74;
  int local_70;
  int local_6c [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  piVar6 = &local_78;
  piVar5 = &local_74;
  piVar2 = &local_48;
  if ((&local_48 != (int *)0x0) || (piVar2 = (int *)FUN_100f56e4(0x10), piVar2 != (int *)0x0)) {
    *piVar2 = *param_2;
    piVar2[1] = param_2[1];
    piVar2[2] = param_2[2];
    piVar2[3] = param_2[3];
  }
  local_58 = 2;
  local_54 = 2;
  FUN_100e16b8(&local_48,&local_58);
  local_6c[0] = FUN_100e1a3c(&local_48,1);
  uVar3 = FUN_100b057c(param_1 + 0x90,1);
  psVar4 = (short *)FUN_100b0388(uVar3,1);
  sVar1 = *psVar4;
  psVar4 = (short *)FUN_100b0388(param_1 + 0xbe,1);
  local_74 = (int)sVar1 + (int)*psVar4;
  if (local_6c[0] < (int)sVar1 + (int)*psVar4) {
    piVar5 = local_6c;
  }
  local_4c = *piVar5;
  local_70 = FUN_100e1a3c(&local_48,0);
  uVar3 = FUN_100b057c(param_1 + 0x90,1);
  psVar4 = (short *)FUN_100b0388(uVar3,0);
  sVar1 = *psVar4;
  psVar4 = (short *)FUN_100b0388(param_1 + 0xbe,0);
  local_78 = (int)sVar1 + (int)*psVar4;
  if (local_70 < (int)sVar1 + (int)*psVar4) {
    piVar6 = &local_70;
  }
  local_50 = *piVar6;
  iVar7 = *(int *)(param_1 + 0x2c);
  if (iVar7 < local_48) {
    *param_3 = local_48;
  }
  else if (local_40 < ((iVar7 + local_50) - (int)*(short *)(param_1 + 0xbe)) + -1) {
    *param_3 = (local_40 - local_50) + (int)*(short *)(param_1 + 0xba);
  }
  else {
    *param_3 = iVar7;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (iVar7 < local_44) {
    param_3[1] = local_44;
  }
  else if (local_3c < ((local_4c + iVar7) - (int)*(short *)(param_1 + 0xc0)) + -1) {
    param_3[1] = (local_3c - local_4c) + (int)*(short *)(param_1 + 0xbc);
  }
  else {
    param_3[1] = iVar7;
  }
  local_6c[3] = (int)*(short *)(param_1 + 0xbe);
  local_5c = (int)*(short *)(param_1 + 0xc0);
  uVar3 = FUN_100e1580(param_3,0);
  FUN_100e10b0(auStack_80,uVar3,&local_50);
  local_6c[1] = 1;
  local_6c[2] = 1;
  FUN_100e10f8(auStack_88,auStack_80,local_6c + 3);
  uVar3 = FUN_100e1580(param_3,1);
  FUN_100e10f8(uVar3,auStack_88,local_6c + 1);
  return;
}



// Function: FUN_101149f4 at 101149f4
// Size: 92 bytes

void FUN_101149f4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(ushort *)(param_1 + 0x84) & 8) != 0) {
    FUN_100e14e4(&local_18,**(undefined4 **)(*(int *)(param_1 + 0x80) + 0x82));
    *param_3 = local_18;
    param_3[1] = uStack_14;
    param_3[2] = uStack_10;
    param_3[3] = uStack_c;
  }
  return;
}



// Function: FUN_10114a50 at 10114a50
// Size: 556 bytes

void FUN_10114a50(int *param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),auStack_40);
  FUN_100e1448(auStack_68,auStack_40);
  if (param_2 == 8) {
    FUN_10117884((int)*(short *)(*param_1 + 0x830) + (int)param_1,auStack_68,auStack_38);
    if ((*(ushort *)(param_1 + 0x21) & 8) != 0) {
      FUN_100e12b8(auStack_38,&local_78);
      iVar2 = **(int **)(param_1[0x20] + 0x82);
      *(undefined4 *)(iVar2 + 8) = local_78;
      *(undefined4 *)(iVar2 + 0xc) = uStack_74;
    }
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838),auStack_68,auStack_38);
    if ((*(ushort *)(param_1 + 0x21) & 8) != 0) {
      FUN_100e12b8(auStack_38,&local_70);
      puVar3 = (undefined4 *)**(int **)(param_1[0x20] + 0x82);
      *puVar3 = local_70;
      puVar3[1] = uStack_6c;
    }
  }
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar2 != 0) {
    uVar1 = FUN_100e1580(auStack_38,0);
    iVar2 = FUN_100e11c8(uVar1,param_1 + 0xb);
    if (iVar2 != 0) {
      FUN_100e1a64(auStack_80,auStack_38);
      iVar2 = FUN_100e11c8(auStack_80,param_1 + 0xd);
      if (iVar2 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_50);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_50,auStack_58);
        FUN_100b0578(auStack_58);
        FUN_10002c58();
        if ((*(ushort *)(param_1 + 0x21) & 8) != 0) {
          FUN_10002430(param_1[0x20],(int)param_2,0);
        }
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),auStack_38,1);
  }
  return;
}



// Function: FUN_10114c7c at 10114c7c
// Size: 176 bytes

void FUN_10114c7c(int *param_1,undefined4 *param_2,short param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),&local_20);
  FUN_100e0f78(auStack_28,&local_20);
  puVar1 = (undefined4 *)FUN_100b0368(auStack_18,auStack_28);
  iVar2 = FUN_10002f70(param_1[0x20],*puVar1,(int)param_3);
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x748) + (int)param_1,(int)param_3);
  }
  return;
}



// Function: FUN_10114d2c at 10114d2c
// Size: 196 bytes

int FUN_10114d2c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20 [5];
  
  FUN_100ee970(local_20);
  FUN_10117884((int)*(short *)(local_20[0] + 0x10) + (int)local_20);
  iVar3 = local_20[1];
  iVar1 = FUN_100eea60(local_20);
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_1010fab8(iVar3);
      if (iVar1 != 0) {
        iVar2 = iVar3;
      }
      FUN_10117884((int)*(short *)(local_20[0] + 0x18) + (int)local_20);
      iVar3 = local_20[1];
      iVar1 = FUN_100eea60(local_20);
    } while ((iVar1 != 0) && (iVar2 == 0));
  }
  return iVar2;
}



// Function: FUN_10114df0 at 10114df0
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114df0(void)

{
  FUN_100c1c8c(0x80a2fb64,_DAT_63e30000,0x34,&DAT_38800000,&DAT_41820070,&DAT_7d080774,&DAT_40820034
              );
  FUN_100c1c8c(0x33fb0001,_DAT_4bfff4dd,200,0x60000000,&DAT_80410014);
  return;
}



// Function: FUN_10114e58 at 10114e58
// Size: 2948 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10114e58(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_54;
  
  FUN_100ed640();
  iVar1 = FUN_100ed6d8(0x7c0903a6);
  if (iVar1 == 0) {
    FUN_100d8e3c(0x89);
  }
  else {
    FUN_100ed8b0();
    _DAT_63e30100 = 0;
    _DAT_63e30104 = 0;
    _DAT_63e3010c = 0;
    _DAT_63e30110 = 0;
    _DAT_63e30108 = _DAT_41820010;
    _DAT_41820010 = &DAT_63e30000;
    iVar1 = FUN_10000090(&DAT_63e30000);
    if (iVar1 != 0) {
      if (_DAT_63e30100 != 0) {
        if (_DAT_63e30104 == 0) {
          _DAT_63e30104 = 0x820001;
        }
        FUN_100d8e68((int)_DAT_63e30100,_DAT_63e30104);
      }
      FUN_10000150();
    }
    FUN_100ee070(0x18);
    FUN_1010003c();
    FUN_100cdf9c();
    FUN_100e1fac();
    FUN_100e0ea8();
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100e8cdc();
      FUN_100e8cec(0);
    }
    FUN_100668a4();
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1009d3fc();
      puVar2 = (undefined4 *)FUN_100f56e4(0x44);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x524);
        *(undefined1 *)(puVar2 + 0x10) = 0;
        *(undefined1 *)((int)puVar2 + 0x41) = 0;
      }
    }
    FUN_10073250();
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10078fa4();
      FUN_10078fb4(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10093b00();
      FUN_10093b10(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10093f1c();
      puVar2 = (undefined4 *)FUN_100f56e4(0x20);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100bf518(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x520);
      }
    }
    FUN_1007a748();
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10096ce0();
      puVar2 = (undefined4 *)FUN_100f56e4(0x40);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x51c);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10096fec();
      puVar2 = (undefined4 *)FUN_100f56e4(0x90);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_10084ef0(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x518);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10097108();
      puVar2 = (undefined4 *)FUN_100f56e4(0x80);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_1010598c(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x514);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1009768c();
      FUN_1009769c(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1009db24();
      puVar2 = (undefined4 *)FUN_100f56e4(0x40);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x510);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1009ddb0();
      FUN_1009ddc0(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1009e680();
      FUN_1009e690(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10097964();
      FUN_10097974(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10095c34();
      puVar2 = (undefined4 *)FUN_100f56e4(0x40);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x50c);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10096188();
      puVar2 = (undefined4 *)FUN_100f56e4(0xb8);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100e1f44(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x508);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100809b8();
      puVar2 = (undefined4 *)FUN_100f56e4(0x1b4);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100c6b2c(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x504);
        *(undefined1 *)(puVar2 + 0x2a) = 0;
        puVar2[0x2b] = 0;
        FUN_100b19f4(puVar2 + 0x2c,0);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10097a74();
      FUN_10097a84(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10096bbc();
      FUN_10096bcc(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10081e38();
      FUN_10081e48(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100a18e8();
      FUN_100a18f8(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10083d40();
      puVar2 = (undefined4 *)FUN_100f56e4(0xac);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_1010598c(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x500);
        *(undefined1 *)(puVar2 + 0x25) = 0;
        *(undefined1 *)((int)puVar2 + 0x95) = 0;
        puVar2[0x26] = 0;
        puVar2[0x27] = 0;
        *(undefined2 *)(puVar2 + 0x28) = 0xffff;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        *(undefined2 *)(puVar2 + 0x20) = 0;
        puVar2[0x24] = 0;
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10097db0();
      puVar2 = (undefined4 *)FUN_100f56e4(0x44);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x4fc);
        *(undefined1 *)(puVar2 + 0x10) = 0;
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100866f8();
      FUN_10086708(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10086314();
      FUN_10086324(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100863d8();
      FUN_100863e8(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100965d4();
      FUN_100965e4(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10088560();
      puVar2 = (undefined4 *)FUN_100f56e4(0x44);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x4f8);
        *(undefined2 *)(puVar2 + 0x10) = 0;
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1008a048();
      FUN_1008a058(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1008ad64();
      FUN_1008ad74(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1008bec8();
      FUN_1008bed8(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1008d9cc();
      FUN_1008d9dc(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1008dbac();
      FUN_1008dbbc(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1008dd68();
      puVar2 = (undefined4 *)FUN_100f56e4(0xbc);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100e1f44(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x4f4);
        puVar2[0x2e] = 0;
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100869e0();
      puVar2 = (undefined4 *)FUN_100f56e4(0x84);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_1010598c(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x4f0);
        *(undefined2 *)(puVar2 + 0x20) = 0;
        *(undefined2 *)((int)puVar2 + 0x82) = 0xffff;
        _DAT_57c407ff = _DAT_57c407ff + 1;
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10090144();
      puVar2 = (undefined4 *)FUN_100f56e4(0xb8);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100e1f44(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x4ec);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_1009049c();
      puVar2 = (undefined4 *)FUN_100f56e4(0x40);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100d568c(puVar2);
        puVar2[0xd] = 0x20202020;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        *puVar2 = *(undefined4 *)(local_54 + -0x4e8);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_100908c0();
      puVar2 = (undefined4 *)FUN_100f56e4(0x80);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_1010598c(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x4e4);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10090b18();
      FUN_10090b28(0);
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10090ec8();
      puVar2 = (undefined4 *)FUN_100f56e4(0xa8);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100c6b2c(puVar2);
        *puVar2 = *(undefined4 *)(local_54 + -0x4e0);
      }
    }
    if (**(char **)(local_54 + -0x528) != '\0') {
      FUN_10091090();
      FUN_100910a0(0);
    }
    if (_DAT_41820018 == 0) {
      _DAT_41820018 = FUN_100f1640(0x8880);
    }
    if (_DAT_281f0000 == 0) {
      _DAT_281f0000 = FUN_100f1640(0xae);
    }
    if (_DAT_60000000 == 0) {
      _DAT_60000000 = FUN_100f1640(22000);
    }
    if (_DAT_4bffe775 == 0) {
      _DAT_4bffe775 = FUN_100f1640(0x2fcc);
    }
    if (_DAT_38800000 == 0) {
      _DAT_38800000 = FUN_100f1640(0x8880);
    }
    if (_DAT_807f0004 == 0) {
      _DAT_807f0004 = FUN_100f1640(0x4440);
    }
    if (_DAT_41820014 == 0) {
      _DAT_41820014 = FUN_100f1640(0x3a);
    }
    piVar3 = (int *)FUN_100f56e4(0x1b4);
    if (piVar3 != (int *)0x0) {
      FUN_10073310(piVar3);
      *piVar3 = *(int *)(local_54 + -0x4dc);
      *(undefined1 *)(piVar3 + 0x28) = 0;
    }
    _DAT_57c407bd = piVar3;
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x538));
    FUN_100bd55c(_DAT_57c407bd);
  }
  return;
}



// Function: FUN_101159dc at 101159dc
// Size: 16 bytes

undefined4 FUN_101159dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return uVar1;
}



// Function: FUN_101159ec at 101159ec
// Size: 20 bytes

uint FUN_101159ec(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 | param_2;
  return uVar1;
}



// Function: FUN_10115a00 at 10115a00
// Size: 104 bytes

int FUN_10115a00(int param_1)

{
  if (param_1 == 0) {
    param_1 = FUN_100f56c0(0x3c);
    if (param_1 != 0) {
      *(undefined1 **)(param_1 + 0x38) = &DAT_4e800020;
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x38) = &DAT_4e800020;
  }
  return param_1;
}



// Function: FUN_10115a68 at 10115a68
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115a68(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = param_2;
  param_1[8] = 0;
  param_1[10] = 0x111;
  *(undefined2 *)(param_1 + 0xb) = 6;
  *(undefined1 *)((int)param_1 + 0x2e) = 0x20;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  _DAT_804c0004 = 0x8000;
  _DAT_4e800420 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// Function: FUN_10115ad0 at 10115ad0
// Size: 144 bytes

void FUN_10115ad0(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined1 **)(param_1 + 0x38) = &DAT_4e800020;
    if ((*(int *)(param_1 + 0x20) == 1) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
      FUN_10117884(*(short *)(*(int *)(iVar1 + 0x24) + 0x58) + iVar1,3);
    }
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10115b60 at 10115b60
// Size: 136 bytes

int FUN_10115b60(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56c0(0x40), param_1 != 0)) {
    FUN_101168ec(param_1);
    *(undefined4 *)(param_1 + 0x24) = 0x83c2fb74;
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  }
  return param_1;
}



// Function: FUN_10115be8 at 10115be8
// Size: 220 bytes

int FUN_10115be8(int param_1)

{
  int iVar1;
  int unaff_r29;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    param_1 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    }
    if (iVar1 != 0) {
      unaff_r29 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),0xffffffff);
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar1 = FUN_10001950(uVar2);
    if ((iVar1 == -1) || (unaff_r29 == -1)) {
      param_1 = 0;
    }
  }
  return param_1;
}



// Function: FUN_10115cc4 at 10115cc4
// Size: 120 bytes

void FUN_10115cc4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0x83c2fb74;
    FUN_10115be8(param_1);
    FUN_101169b4(param_1,0);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10115d3c at 10115d3c
// Size: 48 bytes

undefined4 FUN_10115d3c(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return 1;
  }
  return 0;
}



// Function: FUN_10115d6c at 10115d6c
// Size: 224 bytes

int FUN_10115d6c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10115d3c(param_1);
  iVar2 = 0;
  if (iVar1 == 1) {
    iVar1 = FUN_10002250(*(undefined4 *)(param_1 + 0x28),
                         *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18),1);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
    }
  }
  else if ((iVar1 == 2) &&
          (iVar2 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),0xffffffff),
          iVar2 != -1)) {
    iVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return iVar2;
}



// Function: FUN_10115e4c at 10115e4c
// Size: 448 bytes

uint FUN_10115e4c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 local_10 [4];
  
  if (*(short *)(param_1 + 2) == 0) {
    if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == -1) {
      param_2 = 0xffffffff;
    }
    else {
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_10117884(*(short *)(*(int *)(param_1 + 0x24) + 0x28) + param_1);
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar1 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 0xc) = iVar1;
        *(int *)(param_1 + 8) = iVar1;
        *(int *)(param_1 + 0x10) = iVar1 + *(int *)(param_1 + 0x20);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        if ((iVar1 != 0) &&
           (iVar2 = FUN_10001668(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 4),iVar1)
           , iVar2 != iVar1)) {
          return 0xffffffff;
        }
        iVar1 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 0xc) = iVar1;
        *(int *)(param_1 + 8) = iVar1;
        *(int *)(param_1 + 0x10) = iVar1 + *(int *)(param_1 + 0x20);
      }
      if (param_2 != 0xffffffff) {
        if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 0x10)) {
          puVar3 = *(undefined1 **)(param_1 + 0xc);
          *(undefined1 **)(param_1 + 0xc) = puVar3 + 1;
          *puVar3 = (char)param_2;
        }
        else {
          FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),param_2 & 0xff);
        }
      }
      param_2 = param_2 & 0xff;
    }
  }
  else if (param_2 == 0xffffffff) {
    param_2 = 0xff;
  }
  else {
    local_10[0] = (char)param_2;
    iVar1 = FUN_10001668(*(undefined4 *)(param_1 + 0x28),local_10,1);
    if (iVar1 == 1) {
      param_2 = 1;
    }
    else {
      param_2 = 0xffffffff;
    }
  }
  return param_2;
}



// Function: FUN_1011600c at 1011600c
// Size: 408 bytes

uint FUN_1011600c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = *(byte **)(param_1 + 0x14);
  if ((pbVar4 == (byte *)0x0) || (*(byte **)(param_1 + 0x18) <= pbVar4)) {
    if (*(short *)(param_1 + 2) == 0) {
      if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 == -1) {
        uVar2 = 0xffffffff;
      }
      else {
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x28));
        }
        iVar1 = FUN_100025f8(*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 4) + 1,
                             *(int *)(param_1 + 0x20) + -1);
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          uVar2 = 0xffffffff;
        }
        else {
          iVar3 = *(int *)(param_1 + 4);
          *(int *)(param_1 + 0x1c) = iVar3 + 1;
          *(int *)(param_1 + 0x14) = iVar3 + 1;
          *(int *)(param_1 + 0x18) = iVar3 + iVar1 + 1;
          uVar2 = (uint)*(byte *)(iVar3 + 1);
        }
      }
    }
    else {
      iVar1 = FUN_100025f8(*(undefined4 *)(param_1 + 0x28),param_1 + 0x3d,1);
      if (iVar1 == 1) {
        *(int *)(param_1 + 0x1c) = param_1 + 0x3c;
        *(int *)(param_1 + 0x14) = param_1 + 0x3d;
        *(int *)(param_1 + 0x18) = param_1 + 0x3e;
        uVar2 = (uint)*(byte *)(param_1 + 0x3d);
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = (uint)*pbVar4;
  }
  return uVar2;
}



// Function: FUN_101161a4 at 101161a4
// Size: 164 bytes

undefined4 FUN_101161a4(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x34) == -1) {
    iVar1 = FUN_10002250(*(undefined4 *)(param_1 + 0x28),0,1);
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
  iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x28));
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10002250(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  return uVar2;
}



// Function: FUN_10116248 at 10116248
// Size: 176 bytes

/* WARNING: Removing unreachable block (ram,0x101162bc) */

undefined4 FUN_10116248(short *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 2) == 0) || (*(char *)(param_1 + 0x18) == '\0')) {
    if ((*param_1 != 0) && (*(int *)(param_1 + 2) != 0)) {
      FUN_100f5708(*(int *)(param_1 + 2));
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = 0;
    uVar1 = FUN_10116a60(param_1,param_2,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_101162f8 at 101162f8
// Size: 64 bytes

void FUN_101162f8(int param_1)

{
  if (*(short *)(param_1 + 2) == 0) {
    FUN_10116eb8();
  }
  else {
    FUN_10001668(*(undefined4 *)(param_1 + 0x28));
  }
  return;
}



// Function: FUN_10116338 at 10116338
// Size: 512 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10116338(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) || (param_1 = FUN_100f56c0(1), param_1 != 0)) &&
     (_DAT_3be00000 = _DAT_3be00000 + 1, _DAT_3be00000 == 1)) {
    iVar1 = FUN_101175bc(0x48,&DAT_7c0802a6);
    if (iVar1 != 0) {
      FUN_10117024(iVar1,0);
    }
    iVar1 = FUN_101175bc(0x44,&DAT_9421ffc0);
    if (iVar1 != 0) {
      FUN_101171bc(iVar1,0);
    }
    iVar1 = FUN_101175bc(0x44,&DAT_90010008);
    if (iVar1 != 0) {
      FUN_101171bc(iVar1,0);
    }
    iVar1 = FUN_101175bc(0x44,&DAT_bfc1fff8);
    if (iVar1 != 0) {
      FUN_101171bc(iVar1,0);
    }
    uVar2 = FUN_10115b60(0,0);
    FUN_10117184(&DAT_7c0802a6,uVar2);
    uVar2 = FUN_10115b60(0,1);
    FUN_10117394(&DAT_9421ffc0,uVar2);
    uVar2 = FUN_10115b60(0,2);
    FUN_10117394(&DAT_90010008,uVar2);
    uVar2 = FUN_10115b60(0,2);
    FUN_10117394(&DAT_bfc1fff8,uVar2);
    FUN_101159ec(_DAT_9001000c,0x2000);
    FUN_101159dc(_DAT_7c0802ae,&DAT_9421ffc0);
    FUN_101159dc(_DAT_9001000c,&DAT_9421ffc0);
    FUN_101159dc(_DAT_bfc1fffc,&DAT_9421ffc0);
    _DAT_807e0000 = 1;
  }
  return param_1;
}



// Function: FUN_10116538 at 10116538
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116538(int param_1,uint param_2)

{
  if (param_1 != 0) {
    _DAT_3be00000 = _DAT_3be00000 + -1;
    if (_DAT_3be00000 == 0) {
      FUN_101168a0(&DAT_9421ffc0);
      FUN_101168a0(&DAT_bfc1fff8);
      FUN_101168a0(&DAT_90010008);
    }
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_101165c4 at 101165c4
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101165c4(void)

{
  FUN_10116338(_DAT_10117898);
  FUN_10117024(_FUN_101173cc,0);
  FUN_101171bc(&DAT_9421ffc0,0);
  FUN_101171bc(&DAT_90010008,0);
  FUN_101171bc(&DAT_bfc1fff8,0);
  return;
}



// Function: FUN_1011662c at 1011662c
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011662c(void)

{
  FUN_10116538(_DAT_10117898,2);
  FUN_10117304(FUN_101173cc,2);
  FUN_10117304(&DAT_90010008,2);
  FUN_10117304(&DAT_9421ffc0,2);
  FUN_101170f4(_FUN_101173cc,2);
  return;
}



// Function: FUN_10116698 at 10116698
// Size: 132 bytes

int FUN_10116698(int param_1,int param_2)

{
  if ((param_1 != 0) || (param_1 = FUN_100f56c0(0x48), param_1 != 0)) {
    if (param_2 == 0) {
      param_2 = param_1 + 0xc;
      FUN_10115a00(param_2);
    }
    *(int *)(param_1 + 8) = param_2;
    *(undefined1 **)(param_1 + 4) = &DAT_2c030000;
    *(undefined1 **)(param_2 + 0x38) = &DAT_40820020;
  }
  return param_1;
}



// Function: FUN_1011671c at 1011671c
// Size: 128 bytes

void FUN_1011671c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined1 **)(param_1 + 4) = &DAT_2c030000;
    *(undefined1 **)(*(int *)(param_1 + 8) + 0x38) = &DAT_40820020;
    if ((param_2 & 2) != 0) {
      FUN_10115ad0(*(undefined4 *)(param_1 + 8),0);
    }
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_1011679c at 1011679c
// Size: 132 bytes

undefined4 * FUN_1011679c(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56c0(0x44), param_1 != (undefined4 *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = param_1 + 2;
      FUN_10115a00(param_2);
    }
    param_1[1] = param_2;
    *param_1 = &DAT_809e0004;
    param_2[0xe] = &DAT_2c840000;
  }
  return param_1;
}



// Function: FUN_10116820 at 10116820
// Size: 128 bytes

void FUN_10116820(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_809e0004;
    *(undefined1 **)(param_1[1] + 0x38) = &DAT_2c840000;
    if ((param_2 & 2) != 0) {
      FUN_10115ad0(param_1[1],0);
    }
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_101168a0 at 101168a0
// Size: 76 bytes

int FUN_101168a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  FUN_10117884(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x28));
  return param_1;
}



// Function: FUN_101168ec at 101168ec
// Size: 200 bytes

undefined2 * FUN_101168ec(undefined2 *param_1)

{
  if (param_1 == (undefined2 *)0x0) {
    param_1 = (undefined2 *)FUN_100f56c0(0x28);
    if (param_1 != (undefined2 *)0x0) {
      *(undefined1 **)(param_1 + 0x12) = &DAT_41860048;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x12) = &DAT_41860048;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}



// Function: FUN_101169b4 at 101169b4
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169b4(short *param_1,uint param_2)

{
  if (param_1 != (short *)0x0) {
    *(undefined1 **)(param_1 + 0x12) = &DAT_41860048;
    FUN_10117884((int)param_1 + (int)_DAT_41860070);
    if (*param_1 != 0) {
      FUN_100f5708(*(undefined4 *)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    if ((param_1 != (short *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10116a60 at 10116a60
// Size: 332 bytes

/* WARNING: Removing unreachable block (ram,0x10116ae0) */

short * FUN_10116a60(short *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      FUN_100f5708(*(int *)(param_1 + 2));
      *param_1 = 0;
    }
    if ((*param_1 != 0) && (*(int *)(param_1 + 2) != 0)) {
      FUN_100f5708(*(int *)(param_1 + 2));
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = 0;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((param_2 == 0) || (param_3 < 1)) {
    param_1[1] = 1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    if ((*param_1 != 0) && (*(int *)(param_1 + 2) != 0)) {
      FUN_100f5708(*(int *)(param_1 + 2));
    }
    *(uint *)(param_1 + 2) = param_2;
    if (param_2 < param_2 + param_3) {
      iVar1 = (param_2 + param_3) - param_2;
    }
    else {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar1;
    *param_1 = 0;
    *(uint *)(param_1 + 6) = param_2;
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_2 + param_3;
    param_1[1] = 0;
  }
  return param_1;
}



// Function: FUN_10116bac at 10116bac
// Size: 124 bytes

undefined4 FUN_10116bac(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x14) == 0) || (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14)))
  {
    if ((*(uint *)(param_1 + 0xc) == 0) || (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 8))) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10117884(*(short *)(*(int *)(param_1 + 0x24) + 0x10) + param_1,0xffffffff);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_10116c28 at 10116c28
// Size: 232 bytes

uint FUN_10116c28(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    if ((*(uint *)(param_1 + 0x18) <= uVar2) && (uVar2 < *(uint *)(param_1 + 0xc))) {
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0xc);
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
      }
    }
    if (*(byte **)(param_1 + 0x14) < *(byte **)(param_1 + 0x18)) {
      uVar2 = (uint)**(byte **)(param_1 + 0x14);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// Function: FUN_10116d10 at 10116d10
// Size: 260 bytes

uint FUN_10116d10(int param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0xffffffff;
  }
  else {
    if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 2) == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == -1) {
      param_2 = 0xffffffff;
    }
    else if (*(int *)(param_1 + 8) == 0) {
      uVar3 = *(uint *)(param_1 + 4);
      uVar4 = uVar3 + *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0xc) = uVar3;
      *(uint *)(param_1 + 8) = uVar3;
      *(uint *)(param_1 + 0x10) = uVar4;
      if (uVar3 < uVar4) {
        puVar2 = *(undefined1 **)(param_1 + 0xc);
        *(undefined1 **)(param_1 + 0xc) = puVar2 + 1;
        *puVar2 = (char)param_2;
        param_2 = param_2 & 0xff;
      }
      else {
        param_2 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),param_2 & 0xff)
        ;
      }
    }
    else {
      param_2 = 0xffffffff;
    }
  }
  return param_2;
}



// Function: FUN_10116e14 at 10116e14
// Size: 92 bytes

undefined4 FUN_10116e14(undefined2 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100f56c0(0x400);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_1 = 1;
    *(undefined4 *)(param_1 + 0x10) = 0x400;
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10116e78 at 10116e78
// Size: 64 bytes

void FUN_10116e78(int param_1,undefined4 param_2)

{
  FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x30),param_2,0,3);
  return;
}



// Function: FUN_10116eb8 at 10116eb8
// Size: 188 bytes

int FUN_10116eb8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    FUN_10002f88(*(undefined4 *)(param_1 + 0xc),param_2,iVar3);
    *(int *)(param_1 + 0xc) = iVar3 + *(int *)(param_1 + 0xc);
    if (iVar2 - iVar3 == 0) break;
    iVar1 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x10),
                         *(undefined1 *)(iVar3 + param_2));
    param_2 = param_2 + iVar3 + 1;
    if (iVar1 == -1) {
      return -1;
    }
    iVar2 = (iVar2 - iVar3) + -1;
  }
  return param_3;
}



// Function: FUN_10116f74 at 10116f74
// Size: 168 bytes

int FUN_10116f74(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    FUN_10002f88(param_2,*(undefined4 *)(param_1 + 0x14),iVar2);
    iVar1 = iVar1 - iVar2;
    param_2 = param_2 + iVar2;
    *(int *)(param_1 + 0x14) = iVar2 + *(int *)(param_1 + 0x14);
    if (iVar1 == 0) break;
    iVar2 = FUN_10117884(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 0x18));
    if (iVar2 == -1) {
      return param_3 - iVar1;
    }
  }
  return param_3;
}



// Function: FUN_10117024 at 10117024
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10117024(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != (undefined1 *)0x0) ||
     (param_1 = (undefined1 *)FUN_100f56c0(0x48), param_1 != (undefined1 *)0x0)) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = param_1 + 0xc;
      FUN_10115a00(param_2);
    }
    FUN_10116698(param_1,param_2);
    *(undefined4 *)(param_1 + 4) = 0x57e51838;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x38) = 0x7cc5f02e;
    iVar2 = _DAT_7c0802ae;
    if (param_1 == &DAT_7c0802a6) {
      uVar1 = *(uint *)(_DAT_7c0802ae + 0xc) & 0x80;
      *(uint *)(_DAT_7c0802ae + 0xc) = uVar1;
      *(uint *)(iVar2 + 0x10) = uVar1 | *(uint *)(iVar2 + 0x10) & 0xffffff00;
      *(uint *)(iVar2 + 0x14) = uVar1 | *(uint *)(iVar2 + 0x14) & 0xffffff00;
    }
  }
  return param_1;
}



// Function: FUN_101170f4 at 101170f4
// Size: 144 bytes

void FUN_101170f4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0x57e51838;
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x38) = 0x7cc5f02e;
    FUN_1011671c(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_10115ad0(*(undefined4 *)(param_1 + 8),0);
    }
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10117184 at 10117184
// Size: 56 bytes

int FUN_10117184(int param_1)

{
  FUN_10115a68(*(undefined4 *)(param_1 + 8));
  return param_1;
}



// Function: FUN_101171bc at 101171bc
// Size: 328 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_101171bc(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56c0(0x44), param_1 != (undefined4 *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = param_1 + 2;
      FUN_10115a00(param_2);
    }
    FUN_1011679c(param_1,param_2);
    *param_1 = &DAT_2f060000;
    *(undefined4 *)(param_1[1] + 0x38) = 0x419a0014;
    iVar2 = _DAT_9421ffc4;
    if (param_1 == (undefined4 *)&DAT_9421ffc0) {
      uVar1 = *(uint *)(_DAT_9421ffc4 + 0xc) & 0x80;
      *(uint *)(_DAT_9421ffc4 + 0xc) = uVar1;
      *(uint *)(iVar2 + 0x10) = uVar1 | *(uint *)(iVar2 + 0x10) & 0xffffff00;
      *(uint *)(iVar2 + 0x14) = uVar1 | *(uint *)(iVar2 + 0x14) & 0xffffff00;
    }
    iVar2 = _DAT_9001000c;
    if (param_1 == (undefined4 *)&DAT_90010008) {
      uVar1 = *(uint *)(_DAT_9001000c + 0xc) & 0x80;
      *(uint *)(_DAT_9001000c + 0xc) = uVar1;
      *(uint *)(iVar2 + 0x10) = uVar1 | *(uint *)(iVar2 + 0x10) & 0xffffff00;
      *(uint *)(iVar2 + 0x14) = uVar1 | *(uint *)(iVar2 + 0x14) & 0xffffff00;
    }
    iVar2 = _DAT_bfc1fffc;
    if (param_1 == (undefined4 *)&DAT_bfc1fff8) {
      uVar1 = *(uint *)(_DAT_bfc1fffc + 0xc) & 0x80;
      *(uint *)(_DAT_bfc1fffc + 0xc) = uVar1;
      *(uint *)(iVar2 + 0x10) = uVar1 | *(uint *)(iVar2 + 0x10) & 0xffffff00;
      *(uint *)(iVar2 + 0x14) = uVar1 | *(uint *)(iVar2 + 0x14) & 0xffffff00;
    }
  }
  return param_1;
}



// Function: FUN_10117304 at 10117304
// Size: 144 bytes

void FUN_10117304(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_2f060000;
    *(undefined4 *)(param_1[1] + 0x38) = 0x419a0014;
    FUN_10116820(param_1,0);
    if ((param_2 & 2) != 0) {
      FUN_10115ad0(param_1[1],0);
    }
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_10117394 at 10117394
// Size: 56 bytes

int FUN_10117394(int param_1)

{
  FUN_10115a68(*(undefined4 *)(param_1 + 4));
  return param_1;
}



// Function: FUN_101173cc at 101173cc
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173cc(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _DAT_48000475;
  if (_DAT_48000471 != 0) goto LAB_1011740c;
  for (; iVar1 != 0; iVar1 = *(int *)(&DAT_4800047d + iVar1)) {
    if (*(int *)(&DAT_48000471 + iVar2 * 8) == 0) goto LAB_1011741c;
LAB_1011740c:
    do {
      FUN_10117884();
LAB_1011741c:
      iVar1 = iVar2 * 8;
      iVar2 = iVar2 + 1;
    } while (*(int *)(&DAT_48000479 + iVar1) != 0);
  }
  return;
}



// Function: FUN_10117454 at 10117454
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117454(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _DAT_48000475;
  if (_DAT_48000471 != 0) goto LAB_10117488;
joined_r0x10117480:
  if (iVar1 == 0) {
    return;
  }
  do {
    FUN_10117884();
    do {
      iVar1 = iVar2 * 8;
      iVar2 = iVar2 + 1;
      if (*(int *)(&DAT_48000479 + iVar1) == 0) {
        iVar1 = *(int *)(&DAT_4800047d + iVar1);
        goto joined_r0x10117480;
      }
LAB_10117488:
    } while (*(int *)(&DAT_48000475 + iVar2 * 8) == 0);
  } while( true );
}



// Function: FUN_101174e8 at 101174e8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174e8(void)

{
  if (_DAT_2c050000 != 0) {
    FUN_10000018(&DAT_57e71838);
  }
  FUN_10117454();
  return;
}



// Function: FUN_10117524 at 10117524
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117524(void)

{
  undefined **ppuVar1;
  undefined **local_24;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_2c050000 != 0) {
    FUN_10000018(0x57e71840);
    ppuVar1 = local_24;
  }
  FUN_101173cc();
  FUN_10000078(ppuVar1[-0x124]);
  return;
}



// Function: FUN_10117570 at 10117570
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117570(void)

{
  if (_DAT_2c050000 != 0) {
    FUN_10000018(0x57e7184c);
  }
  FUN_10117524();
  .debug::__start();
  return;
}



// Function: FUN_101175bc at 101175bc
// Size: 8 bytes

undefined4 FUN_101175bc(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



// Function: FUN_101175c4 at 101175c4
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_101175c4(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    param_1 = FUN_100f56c0(param_2 * param_3);
    piVar1 = (int *)FUN_10000558(0xc);
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = (int)_DAT_57e31838;
    _DAT_57e31838 = piVar1;
  }
  if ((param_4 != 0) && (iVar2 = 0, iVar3 = param_1, 0 < param_2)) {
    do {
      FUN_10117884(iVar3,0,0,0,0,0,0);
      iVar3 = iVar3 + param_3;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return param_1;
}



// Function: FUN_10117690 at 10117690
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10117690(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  undefined **local_44;
  
  if (param_1 != 0) {
    if (param_2 == -1) {
      piVar3 = _DAT_57e31838;
      piVar2 = (int *)0x0;
      while (piVar1 = piVar3, ppuVar4 = &.TVect::OCECToRString, piVar1 != (int *)0x0) {
        if (*piVar1 == param_1) {
          param_2 = piVar1[1];
          if (piVar2 == (int *)0x0) {
            _DAT_57e31838 = (int *)piVar1[2];
          }
          else {
            piVar2[2] = piVar1[2];
          }
          FUN_10002fa0(piVar1);
          ppuVar4 = local_44;
          break;
        }
        piVar2 = piVar1;
        piVar3 = (int *)piVar1[2];
      }
      if (piVar1 == (int *)0x0) {
        if (*(int *)ppuVar4[-1] != 0) {
          param_2 = FUN_10117884(param_1);
          ppuVar4 = local_44;
        }
        if (param_2 < 0) {
          FUN_10001008(ppuVar4[-0x122]);
        }
      }
    }
    if (param_4 != 0) {
      iVar6 = param_1 + (param_2 + -1) * param_3;
      iVar5 = 0;
      if (0 < param_2) {
        do {
          FUN_10117884(iVar6,0);
          iVar6 = iVar6 - param_3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_2);
      }
    }
    if (param_5 != 0) {
      FUN_100f5708(param_1);
    }
  }
  return 0;
}



// Function: __start at 101177e4
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 .debug::__start(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined **local_2c;
  
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_2c050000 != 0) {
    FUN_10000018(&DAT_7d23f014);
    ppuVar1 = local_2c;
  }
  *(undefined4 *)ppuVar1[-0x96e] = 2;
  iVar2 = FUN_10000090(ppuVar1[-0x950]);
  puVar3 = local_2c[-0x970];
  if (iVar2 == 0) {
    FUN_10114e58(*(undefined4 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 6),
                 *(undefined4 *)(puVar3 + 10));
    FUN_100000c0();
  }
  return *(undefined4 *)local_2c[-0x96d];
}



// Function: FUN_10117884 at 10117884
// Size: 20 bytes

void FUN_10117884(void)

{
  undefined4 *in_r12;
  undefined **ppuStack00000014;
  
  ppuStack00000014 = &.TVect::OCECToRString;
                    /* WARNING: Could not recover jumptable at 0x10117894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_r12)();
  return;
}



