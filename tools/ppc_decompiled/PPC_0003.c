// Warlords II - Decompiled PPC Code
// Chunk 3 (functions 1500-1999)
// Decompiled by Ghidra 12.0.3

// Function: FUN_10070578 at 10070578
// Size: 280 bytes

void FUN_10070578(int *param_1,short param_2)

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
      FUN_10000030();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a8),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_30);
      uVar2 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10002598(param_1[0x2b]);
      uVar3 = FUN_100b0578(auStack_30);
      FUN_10002328(uVar3,(int)*(short *)((int)param_1 + 0xaa),(int)param_2,param_1[0x2b]);
      FUN_10001b60(param_1[0x2b],uVar2);
    }
  }
  return;
}



// Function: FUN_10070690 at 10070690
// Size: 60 bytes

void FUN_10070690(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),1);
  return;
}



// Function: FUN_100706cc at 100706cc
// Size: 108 bytes

void FUN_100706cc(int *param_1)

{
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),0);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x7c8) + (int)param_1,0x4000);
  }
  return;
}



// Function: FUN_10070740 at 10070740
// Size: 136 bytes

undefined4 * FUN_10070740(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc0), param_1 != (undefined4 *)0x0)) {
    FUN_1006ffc0(param_1);
    *param_1 = &DAT_3860ffff;
    param_1[0x2d] = 0;
    *(undefined2 *)(param_1 + 0x2f) = 0x20;
    *(undefined2 *)(param_1 + 0x2e) = 1;
    *(undefined1 *)((int)param_1 + 0xba) = 0;
  }
  return param_1;
}



// Function: FUN_100707c8 at 100707c8
// Size: 40 bytes

void FUN_100707c8(void)

{
  FUN_10070740(0);
  return;
}



// Function: FUN_100707f0 at 100707f0
// Size: 248 bytes

void FUN_100707f0(int *param_1)

{
  undefined2 in_r9;
  undefined2 in_stack_0000003a;
  char in_stack_0000003f;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798));
  *(undefined2 *)(param_1 + 0x2f) = in_r9;
  *(undefined2 *)(param_1 + 0x2e) = in_stack_0000003a;
  *(char *)((int)param_1 + 0xba) = in_stack_0000003f;
  param_1[0x20] = 0x44e;
  if (in_stack_0000003f != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x748) + (int)param_1,in_stack_0000003f,1);
  }
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7d8) + (int)param_1);
  }
  return;
}



// Function: FUN_100708e8 at 100708e8
// Size: 96 bytes

void FUN_100708e8(int *param_1)

{
  FUN_10070128(param_1);
  param_1[0x20] = 0x44e;
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7d8) + (int)param_1);
  }
  return;
}



// Function: FUN_10070948 at 10070948
// Size: 156 bytes

void FUN_10070948(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100f56e4(0xc);
  if (piVar1 != (int *)0x0) {
    FUN_100b2578(piVar1);
    *piVar1 = (int)&DAT_48000008;
  }
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe8),1);
  param_1[0x2d] = (int)piVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),piVar1,0,0);
  return;
}



// Function: FUN_100709e4 at 100709e4
// Size: 200 bytes

void FUN_100709e4(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_18 [12];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),param_2);
  FUN_100e1a64(auStack_18,param_2);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),auStack_18);
  uVar2 = (param_2[2] - *param_2) - iVar1;
  iVar3 = *param_2 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  *param_2 = iVar3;
  param_2[2] = iVar3 + iVar1;
  uVar2 = (param_2[3] - param_2[1]) - iVar1;
  iVar3 = param_2[1] + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  param_2[1] = iVar3;
  param_2[3] = iVar3 + iVar1;
  return;
}



// Function: FUN_10070ab4 at 10070ab4
// Size: 120 bytes

void FUN_10070ab4(int *param_1)

{
  undefined1 auStack_18 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  FUN_10117884(param_1[0x2d] + (int)*(short *)(*(int *)param_1[0x2d] + 0xb8),param_1,auStack_18);
  FUN_100706cc(param_1);
  return;
}



// Function: FUN_10070b2c at 10070b2c
// Size: 36 bytes

void FUN_10070b2c(void)

{
  FUN_10070690();
  return;
}



// Function: FUN_10070b50 at 10070b50
// Size: 92 bytes

void FUN_10070b50(int *param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_10070314(param_1,param_2,param_3);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),5,param_3);
  return;
}



// Function: FUN_10070bac at 10070bac
// Size: 96 bytes

void FUN_10070bac(int *param_1,short param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_100703c0(param_1,(int)param_2,param_3,param_4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),5,param_4);
  return;
}



// Function: FUN_10070c0c at 10070c0c
// Size: 216 bytes

void FUN_10070c0c(int *param_1,short param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 in_r9;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
  FUN_100e1a64(auStack_30,auStack_28);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),auStack_30);
  if (iVar1 == 0xc) {
    in_r9 = 0xff0000;
  }
  else if (iVar1 == 0x10) {
    in_r9 = 0xff00;
  }
  else if (iVar1 == 0x20) {
    in_r9 = 0xff;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b0),(int)param_2,in_r9,param_3);
  return;
}



// Function: FUN_10070cec at 10070cec
// Size: 524 bytes

void FUN_10070cec(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar2 == 0) {
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0xba) = *(undefined1 *)(param_1 + 0x21);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar2 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(undefined1 *)((int)param_1 + 0xba),1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar2 != 0)) {
      sVar1 = *(short *)(param_1 + 0x2e);
      if (sVar1 == 1) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
        }
      }
      else if (sVar1 == 2) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(char *)(param_1 + 0x21) == '\0',1);
      }
      else if ((sVar1 == 3) && (*(char *)(param_1 + 0x21) == '\0')) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}



// Function: FUN_10070f00 at 10070f00
// Size: 100 bytes

undefined4 * FUN_10070f00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xb4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100cda40(puVar1);
    *puVar1 = &DAT_809f000c;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    *(undefined2 *)((int)puVar1 + 0xb2) = 0;
  }
  return puVar1;
}



// Function: FUN_10070f64 at 10070f64
// Size: 612 bytes

void FUN_10070f64(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar1 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10000030();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_74);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_74,auStack_5c);
      FUN_100b06d4(auStack_5c,param_1 + 0x2c);
      uVar2 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      FUN_10002598(param_1[0x2b]);
      if (*(char *)((int)param_1 + 0xa9) == '\0') {
        uVar5 = FUN_100b0578(auStack_5c);
        FUN_10001b90(uVar5,param_1[0x2b]);
      }
      else {
        uVar5 = 0;
        if (*(char *)(param_1 + 0x21) == '\0') {
          if (*(char *)((int)param_1 + 0x85) != '\0') {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 1;
        }
        uVar3 = FUN_10001f08();
        FUN_10066d04(auStack_54,auStack_5c);
        iVar1 = FUN_10066e64(auStack_54,auStack_78);
        while (iVar1 != 0) {
          FUN_10001f20(local_4c);
          FUN_100670ec(auStack_64,uVar5);
          FUN_10001f20(uVar3);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
          iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
          if (iVar1 != 0) {
            uVar4 = FUN_100b0578(auStack_5c);
            FUN_100033d8(uVar4,param_1[0x2b]);
          }
          FUN_10001f20(local_4c);
          FUN_10067178(auStack_64,2);
          iVar1 = FUN_10066e64(auStack_54,auStack_78);
        }
        FUN_10001f20(uVar3);
        FUN_10066df4(auStack_54,2);
      }
      FUN_10001b60(param_1[0x2b],uVar2);
    }
  }
  return;
}



// Function: FUN_100711d0 at 100711d0
// Size: 148 bytes

undefined4 * FUN_100711d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100cda40(puVar1);
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    *(undefined2 *)((int)puVar1 + 0xb2) = 0;
    *puVar1 = &DAT_90010008;
    puVar1[0x2d] = 0;
    *(undefined2 *)(puVar1 + 0x2e) = 1;
    *(undefined1 *)((int)puVar1 + 0xba) = 0;
    puVar1[0x2c] = 0x40004;
  }
  return puVar1;
}



// Function: FUN_10071264 at 10071264
// Size: 104 bytes

void FUN_10071264(int *param_1)

{
  FUN_100cf4f8(param_1);
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7b0) + (int)param_1);
  }
  return;
}



// Function: FUN_100712cc at 100712cc
// Size: 88 bytes

void FUN_100712cc(int *param_1)

{
  FUN_10105d28(param_1);
  if (param_1[0x2d] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x7b0) + (int)param_1);
  }
  return;
}



// Function: FUN_10071324 at 10071324
// Size: 148 bytes

void FUN_10071324(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = 0x818a000c;
  }
  FUN_100b2d10(puVar1,0x33646261,1);
  param_1[0x2d] = (int)puVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar1,0,0);
  return;
}



// Function: FUN_100713b8 at 100713b8
// Size: 136 bytes

void FUN_100713b8(int *param_1)

{
  undefined1 auStack_18 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  FUN_10117884(param_1[0x2d] + (int)*(short *)(*(int *)param_1[0x2d] + 0xb8),param_1,auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),auStack_18);
  return;
}



// Function: FUN_10071440 at 10071440
// Size: 92 bytes

void FUN_10071440(int *param_1,char param_2,char param_3)

{
  if ((param_2 != *(char *)((int)param_1 + 0x85)) &&
     (*(char *)((int)param_1 + 0x85) = param_2, param_3 != '\0')) {
    FUN_10117884((int)*(short *)(*param_1 + 0x488) + (int)param_1);
  }
  return;
}



// Function: FUN_1007149c at 1007149c
// Size: 524 bytes

void FUN_1007149c(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758));
  if (iVar2 == 0) {
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0xba) = *(undefined1 *)(param_1 + 0x21);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
    }
    else if (param_2 == '\x01') {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
      if (iVar2 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(undefined1 *)((int)param_1 + 0xba),1);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
    }
    else if ((param_2 == '\x02') &&
            (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5),
            iVar2 != 0)) {
      sVar1 = *(short *)(param_1 + 0x2e);
      if (sVar1 == 1) {
        if (*(char *)(param_1 + 0x21) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),0,1);
        }
      }
      else if (sVar1 == 2) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),
                     *(char *)(param_1 + 0x21) == '\0',1);
      }
      else if ((sVar1 == 3) && (*(char *)(param_1 + 0x21) == '\0')) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),1,1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),param_1[0x20],param_1,0);
    }
  }
  return;
}



// Function: FUN_100716a8 at 100716a8
// Size: 88 bytes

void FUN_100716a8(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_100cf764(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  return;
}



// Function: FUN_10071708 at 10071708
// Size: 68 bytes

undefined4 FUN_10071708(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100f56e4(0xc0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10066234(iVar1);
  }
  return uVar2;
}



// Function: FUN_1007174c at 1007174c
// Size: 88 bytes

void FUN_1007174c(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_100716a8(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  return;
}



// Function: FUN_100717a4 at 100717a4
// Size: 164 bytes

void FUN_100717a4(int *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_100f56e4(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100b2578(puVar2);
    *puVar2 = 0x480017a9;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x2f);
  FUN_100b2d10(puVar2,0x33646261,1);
  *(undefined2 *)(puVar2 + 3) = uVar1;
  param_1[0x2d] = (int)puVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar2,0,0);
  return;
}



// Function: FUN_10071848 at 10071848
// Size: 172 bytes

void FUN_10071848(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,char param_7)

{
  int iVar1;
  
  if (param_1[6] == 0x63656e74) {
    if (param_2 == '\x02') {
      FUN_1003fe04();
    }
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x538),param_5);
    if (((iVar1 != 0) && (param_2 == '\x01')) && (param_7 != '\0')) {
      FUN_100084d0((int)(short)((short)param_1[6] + -0x7230));
    }
  }
  return;
}



// Function: FUN_100718fc at 100718fc
// Size: 40 bytes

void FUN_100718fc(void)

{
  FUN_100667f4(0);
  return;
}



// Function: FUN_10071924 at 10071924
// Size: 148 bytes

void FUN_10071924(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100b2578(puVar1);
    *puVar1 = 0x409a000c;
  }
  FUN_100b2d10(puVar1,0x33646261,1);
  param_1[0x2d] = (int)puVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3f0),puVar1,0,0);
  return;
}



// Function: FUN_100719c0 at 100719c0
// Size: 84 bytes

undefined4 * FUN_100719c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xb4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100cd9a4(puVar1);
    *puVar1 = 0x2f080000;
  }
  return puVar1;
}



// Function: FUN_10071a14 at 10071a14
// Size: 1188 bytes

void FUN_10071a14(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined1 auStack_2b8 [8];
  short local_2b0 [2];
  undefined1 local_2ac;
  short local_1ac;
  short local_1aa;
  int local_1a4;
  int local_1a0;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined1 auStack_194 [8];
  undefined1 local_18c [256];
  undefined4 local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c [4];
  short local_5c;
  short local_5a;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  undefined1 auStack_4c [8];
  
  FUN_100b02d0(&local_5c);
  local_2ac = 0;
  if (param_1[0x2b] != 0) {
    FUN_10000030();
    FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,&local_5c);
    FUN_100031b0((int)local_5a,(int)local_5c);
    FUN_100ef8c8(auStack_194);
    FUN_100ee844(auStack_2b8,*(undefined1 *)((int)param_1 + 0xa6));
    local_2c8 = param_1[0x26];
    iStack_2c4 = param_1[0x27];
    iStack_2c0 = param_1[0x28];
    FUN_100eceb0(&local_2c8,auStack_4c,local_2b0);
    FUN_100ee8e8(auStack_2b8,2);
    local_18c[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x7a0) + (int)param_1,local_18c);
    FUN_100ce568(local_18c);
    iVar2 = (int)local_5a;
    FUN_100b1c84(local_18c);
    iStack_80 = FUN_100006f0();
    iStack_80 = iStack_80 + 0x1a;
    iStack_84 = local_2b0[0] + 1;
    local_7c = 1;
    local_8c = 1;
    iStack_88 = 0xd - iVar2;
    local_78 = 0xd - iVar2;
    local_74 = iStack_84;
    local_70 = iStack_80;
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,local_6c);
    local_19c = 2;
    local_19a = 2;
    FUN_100b039c(&local_1ac,&local_5c,&local_19c);
    local_1a4 = (int)local_1ac;
    local_1a0 = (int)local_1aa;
    FUN_100e16b8(local_6c,&local_1a4);
    local_6c[0] = local_6c[0] + ((int)local_2b0[0] >> 1);
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,local_6c,&local_54);
    FUN_100b2268(0x4086066a);
    FUN_100021c0();
    FUN_100031b0((int)(short)(local_5a + 1),(int)(short)(local_5c + 1));
    FUN_10000270(((int)local_52 - (int)local_5a) + 0xe,(int)local_54);
    FUN_10001d88((int)local_52,(int)local_54);
    FUN_10001d88((int)local_52,(int)local_50);
    FUN_10001d88((int)local_4e,(int)local_50);
    FUN_10001d88((int)local_4e,(int)local_54);
    sVar1 = FUN_100e1a3c(&local_8c,1);
    FUN_10001d88((int)(short)(local_52 + sVar1 + 0xe),(int)local_54);
    FUN_100b2268(&DAT_40860682);
    FUN_100021c0();
    FUN_10000270(((int)local_52 - (int)local_5a) + 0xd,(int)(short)(local_54 + -1));
    FUN_10001d88((int)(short)(local_52 + -1),(int)(short)(local_54 + -1));
    FUN_10001d88((int)(short)(local_52 + -1),(int)(short)(local_50 + -1));
    FUN_10001d88((int)(short)(local_4e + -1),(int)(short)(local_50 + -1));
    FUN_10001d88((int)(short)(local_4e + -1),(int)(short)(local_54 + -1));
    sVar1 = FUN_100e1a3c(&local_8c,1);
    FUN_10001d88((int)(short)(local_52 + sVar1 + 0xd),(int)(short)(local_54 + -1));
    FUN_100f0538(auStack_194);
    FUN_100031b0((int)local_5a,(int)local_5c);
    FUN_10000270(((int)local_52 - (int)local_5a) + 0xe,(int)local_54);
    FUN_10001d88((int)local_52,(int)local_54);
    FUN_10001d88((int)local_52,(int)local_50);
    FUN_10001d88((int)local_4e,(int)local_50);
    FUN_10001d88((int)local_4e,(int)local_54);
    sVar1 = FUN_100e1a3c(&local_8c,1);
    FUN_10001d88((int)(short)(local_52 + sVar1 + 0xe),(int)local_54);
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,param_2);
    FUN_100f0538(auStack_194);
  }
  return;
}



// Function: FUN_10071eb8 at 10071eb8
// Size: 428 bytes

void FUN_10071eb8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18c [16];
  undefined1 auStack_17c [8];
  undefined1 auStack_174 [2];
  short local_172;
  undefined1 auStack_16c [8];
  undefined1 auStack_164 [8];
  undefined4 local_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  undefined4 local_14c;
  int local_148;
  int local_144;
  int local_140;
  undefined1 local_13c [256];
  undefined1 auStack_3c [12];
  
  local_13c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_13c);
  FUN_100ce568(local_13c);
  FUN_100ee844(auStack_17c,*(undefined1 *)((int)param_1 + 0xa6));
  FUN_100b02d0(auStack_174);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),auStack_174);
  FUN_100b1c84(local_13c);
  iVar1 = FUN_100006f0();
  iStack_154 = FUN_100ef96c(auStack_3c);
  iStack_154 = iStack_154 + 1;
  local_14c = 1;
  local_15c = 1;
  iStack_158 = 0x12 - local_172;
  iStack_150 = iVar1 + 0x1a;
  local_148 = 0x12 - local_172;
  local_144 = iStack_154;
  local_140 = iVar1 + 0x1a;
  FUN_100ee8e8(auStack_17c,2);
  FUN_100e17d8(&local_15c,auStack_18c,param_2);
  iVar1 = FUN_100e1a08(auStack_18c);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_15c,auStack_164);
    FUN_100b2264(auStack_16c);
    FUN_10001ad0();
    FUN_100672bc(local_13c,auStack_164,0,1,param_1,auStack_16c);
  }
  return;
}



// Function: FUN_1007206c at 1007206c
// Size: 108 bytes

undefined4 * FUN_1007206c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xec);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10066708(puVar1);
    *puVar1 = 0x40860018;
    *(undefined2 *)(puVar1 + 0x38) = 0xffff;
    puVar1[0x39] = 0;
    *(undefined1 *)(puVar1 + 0x3a) = 1;
  }
  return puVar1;
}



// Function: FUN_100720d8 at 100720d8
// Size: 1392 bytes

void FUN_100720d8(int *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 local_224;
  short local_222;
  undefined2 local_21c;
  undefined2 local_21a;
  undefined2 local_218;
  undefined2 local_216;
  undefined1 auStack_214 [16];
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1ec;
  undefined2 local_1ea;
  int local_1e4;
  undefined2 local_1e0;
  short local_1de;
  undefined1 local_1d8 [256];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined2 local_a0 [4];
  int local_98;
  char local_94;
  int local_90;
  char local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  short local_82;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [12];
  
  local_1d8[0] = 0;
  FUN_10066bf4(auStack_80);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_214);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_214,&local_21c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  puVar4 = *(undefined4 **)param_1[0x39];
  local_d8 = *puVar4;
  uStack_d4 = puVar4[1];
  local_d0 = puVar4[2];
  local_cc = puVar4[3];
  local_c8 = puVar4[4];
  uStack_c4 = puVar4[5];
  uStack_c0 = puVar4[6];
  uStack_bc = puVar4[7];
  local_b8 = puVar4[8];
  uStack_b4 = puVar4[9];
  uStack_b0 = puVar4[10];
  uStack_ac = puVar4[0xb];
  local_a8 = puVar4[0xc] & 0xffff0000;
  FUN_10002598(*(undefined4 *)((int)puVar4 + 0x4e));
  local_d8 = **(undefined4 **)(*(int *)param_1[0x39] + 0x4e);
  local_88 = uStack_d4._2_2_;
  local_86 = local_d0._0_2_;
  local_84 = local_d0._2_2_;
  local_82 = local_cc._0_2_;
  local_1de = (short)param_1[0x34] + 2;
  local_1e0 = 0;
  FUN_100b065c(&local_88,&local_1e0);
  iVar3 = param_1[0x39];
  if (iVar3 != 0) {
    local_90 = iVar3;
    local_8c = FUN_10000360(iVar3);
    FUN_10000048(local_90);
    local_98 = param_1[0x39];
    local_94 = FUN_10000360(local_98);
    FUN_10002598(local_98);
    FUN_10000660(&local_1e4);
    iVar3 = *(int *)param_1[0x39];
    iVar5 = iVar3 + 0x32;
    *(int *)(iVar3 + 0x32) = iVar3 + 0x52;
    puVar1 = local_a0;
    if ((local_a0 != (undefined2 *)0x0) ||
       (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
      *puVar1 = local_88;
      puVar1[1] = local_86;
      puVar1[2] = local_84;
      puVar1[3] = local_82;
    }
    FUN_100b2268(0x4086066a);
    FUN_100021c0();
    local_1ec = 1;
    local_1ea = 1;
    FUN_100b065c(local_a0,&local_1ec);
    uVar2 = FUN_100b0578(local_a0);
    iVar3 = iVar3 + 0x38;
    FUN_100008d0(iVar5,local_1e4 + 2,iVar3,uVar2,1,0);
    local_1f4 = 0;
    local_1f2 = 0xffff;
    FUN_100b065c(local_a0,&local_1f4);
    uVar2 = FUN_100b0578(local_a0);
    FUN_100008d0(iVar5,local_1e4 + 2,iVar3,uVar2,1,0);
    FUN_100b2268(&DAT_40860682);
    FUN_100021c0();
    local_1fc = 0xfffe;
    local_1fa = 0;
    FUN_100b065c(local_a0,&local_1fc);
    uVar2 = FUN_100b0578(local_a0);
    FUN_100008d0(iVar5,local_1e4 + 2,iVar3,uVar2,1,0);
    local_204 = 0;
    local_202 = 0xffff;
    FUN_100b065c(local_a0,&local_204);
    uVar2 = FUN_100b0578(local_a0);
    FUN_100008d0(iVar5,local_1e4 + 2,iVar3,uVar2,1,0);
    if (*(char *)(param_1 + 0x3a) == '\0') {
      uVar2 = FUN_100b0578(&local_88);
      FUN_10001b90(uVar2,param_1[0x39]);
    }
    else {
      uVar2 = 0;
      if (*(char *)(param_1 + 0x21) == '\0') {
        if (*(char *)((int)param_1 + 0x85) != '\0') {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
      FUN_100670ec(auStack_50,uVar2);
      uVar2 = FUN_100b0578(&local_88);
      FUN_100033d8(uVar2,param_1[0x39]);
      FUN_10067178(auStack_50,2);
    }
    if (&stack0x00000000 != (undefined1 *)0x98) {
      FUN_10001b60(local_98,(int)local_94);
    }
    if (&stack0x00000000 != (undefined1 *)0x90) {
      FUN_10001b60(local_90,(int)local_8c);
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_1d8);
  puVar1 = &local_224;
  if ((&local_224 != (undefined2 *)0x0) ||
     (puVar1 = (undefined2 *)FUN_100f56e4(8), puVar1 != (undefined2 *)0x0)) {
    *puVar1 = local_21c;
    puVar1[1] = local_21a;
    puVar1[2] = local_218;
    puVar1[3] = local_216;
  }
  local_222 = local_82 + 2;
  FUN_100672bc(local_1d8,&local_224,0,0xfffffffe,param_1,0x408605e0);
  FUN_10066c80(auStack_80,2);
  return;
}



// Function: FUN_10072660 at 10072660
// Size: 112 bytes

void FUN_10072660(int param_1)

{
  *(undefined2 *)(param_1 + 0xe0) = 0xffff;
  if (*(int *)(param_1 + 0xe4) != 0) {
    if (*(char *)(param_1 + 0xe8) == '\0') {
      FUN_10001f50(*(undefined4 *)(param_1 + 0xe4));
    }
    else {
      FUN_10001f38(*(undefined4 *)(param_1 + 0xe4));
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  return;
}



// Function: FUN_100726d0 at 100726d0
// Size: 272 bytes

void FUN_100726d0(int *param_1,short param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_10072660(param_1);
  *(short *)(param_1 + 0x38) = param_2;
  if (param_2 != -1) {
    iVar1 = FUN_10001728(0x6369636e,(int)param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_10000360(iVar1);
      FUN_10000048(iVar1);
      iVar3 = FUN_10001f68((int)*(short *)(param_1 + 0x38));
      param_1[0x39] = iVar3;
      FUN_10001b60(iVar1,uVar2);
    }
    if (param_1[0x39] == 0) {
      iVar1 = FUN_10001f80((int)*(short *)(param_1 + 0x38));
      param_1[0x39] = iVar1;
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x3a) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x3a) = 1;
    }
    FUN_100db2a4(param_1[0x39]);
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_100727e0 at 100727e0
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100727e0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100d5090(param_1,param_2);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    FUN_100726d0(param_1,uVar2,0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100728c4 at 100728c4
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100728c4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10069b44(param_1);
  piVar1[0x39] = 0;
  *(undefined1 *)(piVar1 + 0x3a) = 1;
  *(undefined2 *)(piVar1 + 0x38) = 0xffff;
  if (*(int *)(param_1 + 0xe4) != 0) {
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = _DAT_41820010;
    _DAT_41820010 = auStack_12c;
    iVar2 = FUN_10000090(auStack_12c);
    if (iVar2 == 0) {
      FUN_100726d0(piVar1,(int)*(short *)(param_1 + 0xe0),0);
      _DAT_41820010 = local_24;
    }
    else {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
      FUN_100db158((int)local_2c,local_28);
    }
  }
  return piVar1;
}



// Function: FUN_100729bc at 100729bc
// Size: 64 bytes

void FUN_100729bc(undefined4 param_1)

{
  FUN_10072660(param_1);
  FUN_100c8068(param_1);
  return;
}



// Function: FUN_100729fc at 100729fc
// Size: 1096 bytes

void FUN_100729fc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int local_234;
  undefined1 auStack_204 [8];
  undefined1 auStack_1fc [48];
  undefined2 local_1cc;
  short local_1ca;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined1 auStack_1bc [16];
  undefined2 local_1ac;
  short local_1aa;
  undefined1 local_1a4 [256];
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint local_74;
  undefined1 auStack_6c [8];
  int local_64;
  char local_60;
  int local_5c;
  char local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  short local_4e;
  
  local_1a4[0] = 0;
  FUN_10066bf4(auStack_1fc);
  FUN_10067270();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_1bc);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_1bc,&local_1c4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x31,auStack_6c);
  FUN_10067270();
  if (*(char *)(param_1 + 0x21) == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  else {
    uVar1 = FUN_100b0574(auStack_6c);
    FUN_10003348(uVar1,1,1);
    FUN_100b0578(auStack_6c);
    FUN_100034e0();
    uVar1 = FUN_100b0574(auStack_6c);
    FUN_10003348(uVar1,1,1);
    FUN_100f03e8((int)param_1 + 0xda);
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x848) + (int)param_1);
    if (iVar2 == 0) {
      FUN_100b0578(auStack_6c);
      FUN_10003390();
    }
    else {
      FUN_10002118(*(int *)(local_234 + -0xb0) + 0xc2);
      FUN_100b0578(auStack_6c);
      FUN_100034e0();
    }
  }
  puVar4 = *(undefined4 **)param_1[0x39];
  local_a4 = *puVar4;
  uStack_a0 = puVar4[1];
  local_9c = puVar4[2];
  local_98 = puVar4[3];
  uStack_94 = puVar4[4];
  uStack_90 = puVar4[5];
  local_8c = puVar4[6];
  uStack_88 = puVar4[7];
  uStack_84 = puVar4[8];
  uStack_80 = puVar4[9];
  uStack_7c = puVar4[10];
  uStack_78 = puVar4[0xb];
  local_74 = puVar4[0xc] & 0xffff0000;
  FUN_10002598(*(undefined4 *)((int)puVar4 + 0x4e));
  local_a4 = **(undefined4 **)(*(int *)param_1[0x39] + 0x4e);
  local_54 = uStack_a0._2_2_;
  local_52 = local_9c._0_2_;
  local_50 = local_9c._2_2_;
  local_4e = local_98._0_2_;
  local_1aa = (short)param_1[0x34] + 2;
  local_1ac = 0;
  FUN_100b065c(&local_54,&local_1ac);
  iVar2 = param_1[0x39];
  if (iVar2 != 0) {
    local_5c = iVar2;
    local_58 = FUN_10000360(iVar2);
    FUN_10000048(local_5c);
    local_64 = param_1[0x39];
    local_60 = FUN_10000360(local_64);
    FUN_10002598(local_64);
    if (*(char *)(param_1 + 0x3a) == '\0') {
      uVar1 = FUN_100b0578(&local_54);
      FUN_10001b90(uVar1,param_1[0x39]);
    }
    else {
      uVar1 = 0;
      if (*(char *)(param_1 + 0x21) == '\0') {
        if (*(char *)((int)param_1 + 0x85) != '\0') {
          uVar1 = 2;
        }
      }
      else {
        uVar1 = 1;
      }
      FUN_100670ec(auStack_204,uVar1);
      uVar1 = FUN_100b0578(&local_54);
      FUN_100033d8(uVar1,param_1[0x39]);
      FUN_10067178(auStack_204,2);
    }
    if (&stack0x00000000 != (undefined1 *)0x64) {
      FUN_10001b60(local_64,(int)local_60);
    }
    if (&stack0x00000000 != (undefined1 *)0x5c) {
      FUN_10001b60(local_5c,(int)local_58);
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0),local_1a4);
  puVar3 = &local_1cc;
  if ((&local_1cc != (undefined2 *)0x0) ||
     (puVar3 = (undefined2 *)FUN_100f56e4(8), puVar3 != (undefined2 *)0x0)) {
    *puVar3 = local_1c4;
    puVar3[1] = local_1c2;
    puVar3[2] = local_1c0;
    puVar3[3] = local_1be;
  }
  local_1ca = local_4e + 2;
  FUN_100672bc(local_1a4,&local_1cc,0,0xfffffffe,param_1,*(int *)(local_234 + -0x1d4) + 0x540,0xff);
  FUN_10066c80(auStack_1fc,2);
  return;
}



// Function: FUN_10072e5c at 10072e5c
// Size: 1012 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072e5c(void)

{
  _DAT_41820010 = 0xeeee0000;
  _DAT_4182000c = 0xeeeeeeee;
  _DAT_2f890004 = 0xdddd0000;
  _DAT_2f890000 = 0xdddddddd;
  _DAT_39200000 = 0xbbaaaaaa;
  _DAT_39200004 = 0xaaaaaa00;
  uRam39200008 = 0;
  _DAT_4800000c = 0x88880000;
  _DAT_48000008 = 0x88888888;
  FUN_100c1c8c(0x809f0018,_DAT_4186001c,0xc,&DAT_80bf0024,&DAT_2c840000);
  FUN_100c1c8c(&DAT_2c090000,_DAT_8185002c,0xc,&DAT_a8650028,&DAT_2c840000);
  FUN_100c1c8c(0x40840014,_DAT_7c7f1814,0xc,0x4800176d,&DAT_2c090000);
  FUN_100c1c8c(&DAT_4800014c,_DAT_80410014,0xc,&DAT_809f0004,&DAT_2c840000);
  FUN_100c1c8c(0x2f050000,_DAT_80bf0020,0xc,&DAT_609e0000,&DAT_2c840000);
  FUN_100c1c8c(&DAT_38a00001,_DAT_309e0001,0xc,0x60be0000,&DAT_2c840000);
  FUN_100c1c8c(&DAT_807f0028,_DAT_30beffff,0xc,&DAT_807f0028,&DAT_2c840000);
  FUN_100c1c8c(0x7c630774,_DAT_4beec4bd,0xc,&DAT_80410014,&DAT_2c840000);
  FUN_100c1c8c(&DAT_80410014,_DAT_60690000,0xe0,&DAT_2c090000,_FUN_10116e14);
  FUN_100c1c8c(0x4800011c,_DAT_4181001c,0xe0,&DAT_38800000,&DAT_90010008);
  FUN_100c1c8c(&DAT_419e0020,_DAT_909f001c,0x1dc,&DAT_909f0014,&DAT_30210040);
  FUN_100c1c8c(0x30df003e,_DAT_909f0018,200,&DAT_3860ffff,&DAT_bbc1fff8);
  FUN_100c1c8c(0xa86a0008,_DAT_4800002c,0xc,&DAT_80bf0004,&DAT_2c840000);
  FUN_100c1c8c(&DAT_7c7f1814,_DAT_30c50001,0x10,0x7ce54814,0xa86a0008);
  FUN_100c1c8c(&DAT_90df0018,_DAT_30e70001,0xc,&DAT_90df001c,0xa86a0008);
  FUN_100c1c8c(&DAT_80410014,_DAT_90df0014,0xc,0x90ff0018,&DAT_2c840000);
  FUN_100c1c8c(&DAT_38600000,_DAT_88650001,0xb4,0x7c630774,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_4082000c,_DAT_5463063e,0xc0,&DAT_80010048,&DAT_38600000);
  FUN_100c1c8c(0x48000098,_DAT_30210040,0xb4,&DAT_7c0803a6,&DAT_39200001);
  FUN_100c1c8c(&DAT_63e30000,_DAT_bbc1fff8,0xbc,&DAT_4e800020,0x48000098);
  FUN_100c1c8c(0x90bf0014,*_FUN_101161a4,0xc0,uRam101161a8,&DAT_63e30000);
  FUN_100c1c8c(0x887f003d,_DAT_90010008,0xbc,0x9421ffb8,&DAT_63e30000);
  FUN_100c1c8c(&DAT_909f001c,_DAT_54be063e,0xb4,&DAT_609d0000,&DAT_2f060000);
  FUN_100c1c8c(0x30bf003d,_DAT_607f0000,0xec,0x80ff0034,0x4800011c);
  return;
}



// Function: FUN_10073250 at 10073250
// Size: 184 bytes

void FUN_10073250(void)

{
  int iVar1;
  uint local_10 [2];
  
  iVar1 = FUN_10000648(0x6f636575,local_10);
  if (iVar1 == 0) {
    if ((local_10[0] == 0) || ((local_10[0] & 0x3fffffff) == 0)) {
      DAT_4082002c = '\0';
    }
    else {
      DAT_4082002c = '\x01';
    }
  }
  if (DAT_4082002c != '\0') {
    iVar1 = FUN_100011b8(0);
    if (iVar1 != 0) {
      DAT_4082002c = '\0';
    }
    if (DAT_4082002c != '\0') {
      FUN_10098814();
      FUN_100db2f4();
    }
  }
  return;
}



// Function: FUN_10073310 at 10073310
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10073310(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x88), param_1 != (undefined4 *)0x0)) {
    FUN_100b74ac(param_1);
    *param_1 = &DAT_807f0028;
    _DAT_38800000 = param_1;
    param_1[0x21] = 0;
  }
  return param_1;
}



// Function: FUN_10073388 at 10073388
// Size: 40 bytes

void FUN_10073388(void)

{
  FUN_10073310(0);
  return;
}



// Function: FUN_100733b0 at 100733b0
// Size: 572 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100733b0(int *param_1,short param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_240 [256];
  int *local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = (int)param_2;
  local_140 = (int *)0x0;
  FUN_10002988(param_1[iVar4 + 0x62],&local_140,*(undefined4 *)(param_1[0x20] + 100));
  FUN_100db2f4();
  if (local_140 != (int *)0x0) {
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = _DAT_41820010;
    _DAT_41820010 = auStack_13c;
    iVar1 = FUN_10000090(auStack_13c);
    if (iVar1 == 0) {
      if (*local_140 != 0) {
        FUN_100d8c9c(2000,0);
        FUN_100db158(0,0x820000);
      }
      pbVar2 = (byte *)FUN_10002c40(local_140[10]);
      FUN_100012d8(pbVar2,auStack_240,*pbVar2 + 1);
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
      FUN_10090e0c(uVar3,iVar4 + 0x61646431,auStack_240,1);
      uVar3 = FUN_100ef580(*(undefined4 *)((int)local_140 + 6));
      *(undefined4 *)((int)local_140 + 6) = uVar3;
      FUN_100ef580(local_140);
      _DAT_41820010 = local_34;
    }
    else {
      uVar3 = FUN_100ef580(*(undefined4 *)((int)local_140 + 6));
      *(undefined4 *)((int)local_140 + 6) = uVar3;
      local_140 = (int *)FUN_100ef580(local_140);
      if (local_3c != 0) {
        FUN_100db158((int)local_3c,local_38);
      }
    }
  }
  if (*(short *)(param_1[0x20] + 0x74) == iVar4) {
    for (; iVar4 < 8; iVar4 = (int)(short)((short)iVar4 + 1)) {
      if ((*(short *)(param_1[0x20] + 0x74) == iVar4) &&
         (((param_1[iVar4 + 0x62] != 0 ||
           (iVar1 = _DAT_4bffe775 + iVar4 * 2, *(short *)(iVar1 + 0xd0) != 0)) ||
          (*(short *)(iVar1 + 0x138) == 0)))) {
        *(short *)(param_1[0x20] + 0x74) = *(short *)(param_1[0x20] + 0x74) + 1;
      }
    }
  }
  return;
}



// Function: FUN_100735ec at 100735ec
// Size: 404 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100735ec(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  param_2 = param_2 & 0x7ff80;
  iVar3 = -1;
  if (param_2 == 0x200) {
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x80) + 0x74);
  }
  else if (param_2 == 0x800) {
    iVar3 = 0;
  }
  else if (param_2 == 0x1000) {
    iVar3 = 1;
  }
  else if (param_2 == 0x2000) {
    iVar3 = 2;
  }
  else if (param_2 == 0x4000) {
    iVar3 = 3;
  }
  else if (param_2 == 0x8000) {
    iVar3 = 4;
  }
  else if (param_2 == 0x10000) {
    iVar3 = 5;
  }
  else if (param_2 == 0x20000) {
    iVar3 = 6;
  }
  else if (param_2 == 0x40000) {
    iVar3 = 7;
  }
  if (iVar3 != -1) {
    iVar2 = param_1 + iVar3 * 4;
    uVar1 = FUN_100ef580(*(undefined4 *)(iVar2 + 0x188));
    *(undefined4 *)(iVar2 + 0x188) = uVar1;
    FUN_10098ed8(*(undefined4 *)(param_1 + 0x80),auStack_18,iVar2 + 0x188);
    FUN_100db2f4();
    FUN_100733b0(param_1,iVar3);
    if (iVar3 == *(short *)(*(int *)(param_1 + 0x80) + 0x74)) {
      do {
        *(short *)(*(int *)(param_1 + 0x80) + 0x74) =
             *(short *)(*(int *)(param_1 + 0x80) + 0x74) + 1;
        iVar3 = (int)*(short *)(*(int *)(param_1 + 0x80) + 0x74);
        if (7 < iVar3) {
          return;
        }
        iVar2 = _DAT_4bffe775 + iVar3 * 2;
      } while (((*(short *)(iVar2 + 0xd0) != 0) || (*(short *)(iVar2 + 0x138) == 0)) ||
              (*(int *)(iVar3 * 4 + param_1 + 0x188) != 0));
    }
  }
  return;
}



// Function: FUN_10073780 at 10073780
// Size: 216 bytes

void FUN_10073780(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint local_18 [2];
  
  bVar3 = true;
  piVar2 = *(int **)(param_1 + 0x84);
  if ((((piVar2 != (int *)0x0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x3a8) + (int)piVar2), iVar1 != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 0x80), iVar1 != 0)) &&
     (iVar1 = FUN_1009a548(iVar1,param_2 + 0x14,local_18), iVar1 == 0)) {
    bVar3 = (local_18[0] & 1) != 0;
    if ((local_18[0] & 0x7ff80) != 0) {
      FUN_100735ec(*(undefined4 *)(param_1 + 0x84),local_18[0]);
    }
  }
  if (bVar3) {
    FUN_100b8f90(param_1,param_2);
  }
  return;
}



// Function: FUN_10073874 at 10073874
// Size: 208 bytes

int FUN_10073874(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_7c [62];
  undefined4 local_3e;
  uint local_14;
  undefined1 auStack_10 [4];
  
  iVar1 = FUN_10000648(0x6f636575,&local_14);
  if (iVar1 == 0) {
    if ((local_14 & 2) == 0) {
      iVar1 = -0x5dc;
    }
    if ((iVar1 == 0) && (iVar1 = FUN_10001938(auStack_7c,0), iVar1 == 0)) {
      *param_2 = local_3e;
      return 0;
    }
  }
  if (iVar1 == -0x619) {
    iVar1 = FUN_10000df8(param_2,0,0,0,0,7,auStack_10,0);
  }
  return iVar1;
}



// Function: FUN_1007394c at 1007394c
// Size: 148 bytes

undefined4 * FUN_1007394c(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1a8), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = 0x4beec079;
    param_1[0x20] = 0;
    iVar1 = 0;
    do {
      param_1[iVar1 + 0x62] = 0;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 8);
  }
  return param_1;
}



// Function: FUN_100739e0 at 100739e0
// Size: 40 bytes

void FUN_100739e0(void)

{
  FUN_1007394c(0);
  return;
}



// Function: FUN_10073a08 at 10073a08
// Size: 460 bytes

void FUN_10073a08(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  int local_184;
  undefined1 auStack_130 [264];
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 auStack_20 [8];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  FUN_10073874(**(undefined4 **)(local_184 + -0x16d0),&local_28);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_20);
  FUN_10001320(*(int *)(local_184 + -0x16dc) + 0x3c,0,auStack_130,0x100);
  iVar2 = FUN_10002928(auStack_130,&local_24);
  if (iVar2 == 0) {
    FUN_10002778(local_24);
    FUN_10002598(local_24);
    uVar4 = FUN_10000ea0(*local_24,param_1 + 0x21,0x40);
    *(undefined2 *)(param_1 + 0x61) = uVar4;
  }
  FUN_100db2f4(iVar2);
  FUN_10002580(1);
  uVar3 = FUN_100b0578(auStack_20);
  FUN_10098b94(param_1 + 0x20,*(undefined4 *)(iVar1 + 0x80),uVar3,1,1,local_28,param_1 + 0x21,
               (int)*(short *)(param_1 + 0x61));
  FUN_100db2f4();
  return;
}



// Function: FUN_10073bd4 at 10073bd4
// Size: 192 bytes

void FUN_10073bd4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  if (param_1[0x20] == 0) {
    FUN_10073a08(param_1);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_130);
    FUN_100ee64c(auStack_128);
    uVar1 = local_14;
    uVar2 = FUN_100b0578(auStack_130);
    FUN_10003150(uVar1,uVar2);
    FUN_1009c544(param_1[0x20],local_14);
    FUN_100ee77c(auStack_128,2);
  }
  return;
}



// Function: FUN_10073c94 at 10073c94
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073c94(int param_1)

{
  FUN_10105d28(param_1);
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_10073a08(param_1);
  }
  *(int *)(_DAT_38800000 + 0x84) = param_1;
  *(undefined1 *)(_DAT_38800000 + 0x31) = 0;
  return;
}



// Function: FUN_10073cf8 at 10073cf8
// Size: 112 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073cf8(int param_1)

{
  *(undefined4 *)(_DAT_38800000 + 0x84) = 0;
  *(undefined1 *)(_DAT_38800000 + 0x31) = 1;
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_100989b0(0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  FUN_10106060(param_1);
  return;
}



// Function: FUN_10073d68 at 10073d68
// Size: 284 bytes

undefined4 FUN_10073d68(int *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_22;
  undefined1 auStack_1e [4];
  short local_1a;
  undefined1 auStack_18 [4];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar1 != 0) {
    local_28 = 0;
    local_26 = 0;
    local_22 = FUN_10001a88();
    FUN_10001518(auStack_1e);
    iVar1 = FUN_100efb60();
    if (iVar1 == 0) {
      sVar4 = 0;
    }
    else {
      sVar4 = 0x100;
    }
    iVar1 = FUN_100efba8();
    if (iVar1 == 0) {
      sVar3 = 0;
    }
    else {
      sVar3 = 0x800;
    }
    iVar1 = FUN_100efbcc();
    if (iVar1 == 0) {
      sVar2 = 0;
    }
    else {
      sVar2 = 0x200;
    }
    iVar1 = FUN_100efb84();
    if (iVar1 == 0) {
      local_1a = 0;
    }
    else {
      local_1a = 0x1000;
    }
    local_1a = sVar4 + sVar3 + sVar2 + local_1a;
    FUN_1009a548(param_1[0x20],&local_28,auStack_18);
    FUN_100db2f4();
  }
  return 0;
}



// Function: FUN_10073e84 at 10073e84
// Size: 64 bytes

void FUN_10073e84(int param_1)

{
  FUN_100d95c8(param_1);
  *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x7e) = 1;
  return;
}



// Function: FUN_10073ec4 at 10073ec4
// Size: 64 bytes

void FUN_10073ec4(int param_1)

{
  FUN_100dabb8(param_1);
  *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x7e) = 0;
  return;
}



// Function: FUN_10073f04 at 10073f04
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073f04(void)

{
  FUN_100c1c8c(&DAT_807f0028,_DAT_80410014,0x88,0x907f0034,0x57c607ff);
  FUN_100c1c8c(&DAT_38a00001,_DAT_2c03ffff,0x1a8,&DAT_4082000c,&DAT_80410014);
  return;
}



// Function: FUN_10073f68 at 10073f68
// Size: 96 bytes

undefined4 * FUN_10073f68(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x1b4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10073310(puVar1);
    *puVar1 = &DAT_bbe1fffc;
    *(undefined1 *)(puVar1 + 0x28) = 0;
  }
  return puVar1;
}



// Function: FUN_10073fc8 at 10073fc8
// Size: 308 bytes

int FUN_10073fc8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar2 = FUN_100ef2f8(*(undefined4 *)(param_1 + 0x94));
    if (iVar2 != 0) {
      FUN_10000b70(*(undefined4 *)(param_1 + 0x94));
    }
    piVar5 = *(int **)(param_1 + 0x94);
    if (*piVar5 != 0) {
      cVar3 = FUN_10000360(piVar5);
      FUN_10002598(piVar5);
      piVar4 = (int *)**(undefined4 **)(param_1 + 0x94);
      iVar2 = 0;
      if (0 < *piVar4) {
        do {
          if (piVar4[iVar2 * 2 + 1] == param_2) {
            sVar1 = *(short *)(piVar4 + iVar2 * 2 + 2);
            if (&stack0x00000000 != (undefined1 *)0x18) {
              FUN_10001b60(piVar5,(int)cVar3);
              return (int)sVar1;
            }
            return (int)sVar1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar4);
      }
      if (&stack0x00000000 != (undefined1 *)0x18) {
        FUN_10001b60(piVar5,(int)cVar3);
      }
    }
  }
  return -1;
}



// Function: FUN_10074114 at 10074114
// Size: 356 bytes

void FUN_10074114(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [80];
  int *local_18;
  char local_14;
  
  uVar1 = FUN_10001728(0x53686f72,2000);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  FUN_100981f8(auStack_68,0x80);
  piVar2 = (int *)FUN_10098320(auStack_68,0x53686f72,1000);
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_10073fc8(param_1,0x643);
    *(undefined2 *)(param_1 + 0x8c) = uVar3;
    uVar3 = FUN_10073fc8(param_1,0x57b);
    *(undefined2 *)(param_1 + 0x8e) = uVar3;
    uVar3 = FUN_10073fc8(param_1,0x640);
    *(undefined2 *)(param_1 + 0x90) = uVar3;
    uVar3 = FUN_10073fc8(param_1,0x76c);
    *(undefined2 *)(param_1 + 0x92) = uVar3;
  }
  else {
    local_18 = piVar2;
    local_14 = FUN_10000360(piVar2);
    FUN_10002598(local_18);
    iVar4 = *piVar2;
    iVar5 = 0;
    do {
      *(undefined2 *)(iVar5 * 2 + param_1 + 0x8c) = *(undefined2 *)(iVar4 + iVar5 * 2);
      iVar5 = (int)(short)((short)iVar5 + 1);
    } while (iVar5 < 4);
    if (&stack0x00000000 != (undefined1 *)0x18) {
      FUN_10001b60(local_18,(int)local_14);
    }
  }
  FUN_100ef510(piVar2);
  FUN_100982e8(auStack_68,2);
  return;
}



// Function: FUN_10074288 at 10074288
// Size: 2500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074288(int *param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char cVar9;
  int iVar7;
  undefined1 *puVar8;
  undefined1 uVar10;
  int local_6f4;
  undefined2 local_6d0;
  undefined4 local_6ce;
  undefined4 local_688;
  undefined1 *local_684;
  undefined2 *local_650;
  short local_648;
  short local_646;
  int local_640;
  int local_63c;
  undefined4 local_638;
  undefined1 *local_634;
  uint local_618;
  undefined1 *local_600;
  undefined1 auStack_5f8 [80];
  short local_5a8;
  short local_5a6;
  undefined1 auStack_5a0 [12];
  undefined4 local_594;
  undefined4 local_58e;
  undefined2 local_58a;
  undefined1 *local_584;
  undefined4 local_570;
  undefined1 local_520 [256];
  undefined1 local_420 [256];
  undefined1 auStack_320 [4];
  byte local_31c;
  byte local_31a;
  undefined4 *local_310;
  char local_30c;
  undefined1 auStack_308 [256];
  undefined2 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  short local_1f0 [2];
  short local_1ec;
  int local_1e8;
  undefined1 auStack_1e4 [72];
  undefined1 auStack_19c [72];
  short local_154;
  undefined2 local_152;
  undefined1 auStack_150 [256];
  undefined1 auStack_50 [2];
  short local_4e;
  short local_4c;
  short local_4a;
  
  FUN_100b763c(param_1,0x57325347,0x57617232);
  local_420[0] = 0;
  local_638 = 0x3c;
  local_600 = auStack_1e4;
  local_634 = local_420;
  FUN_10001bd8(_DAT_28030000 + 0x32,&local_638);
  FUN_100db2f4();
  if (local_618 < 0x300000) {
    *(undefined1 *)(*(int *)(local_6f4 + -0x14) + 0x34) = 0;
  }
  piVar2 = (int *)FUN_10001170();
  sVar1 = *(short *)(**(int **)(*piVar2 + 0x16) + 0x20);
  *(short *)((int)param_1 + 0x1ae) = sVar1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((int)param_1 + 0x1b1) = 0;
  if (sVar1 != 8) {
    uVar3 = FUN_100017b8(piVar2,0);
    iVar4 = FUN_10001188(piVar2,(int)*(short *)((int)param_1 + 0x1ae),1,uVar3);
    *(short *)((int)param_1 + 0x1ae) = (short)iVar4;
    if (iVar4 == 0) {
      *(undefined2 *)((int)param_1 + 0x1ae) = *(undefined2 *)(**(int **)(*piVar2 + 0x16) + 0x20);
    }
    iVar4 = FUN_10001188(piVar2,8,1,1);
    if (iVar4 != 0) {
      *(undefined1 *)((int)param_1 + 0x1b1) = 1;
      uVar5 = FUN_100d8c9c(0x3f2,0);
      cVar9 = ('\x01' - ((1 < uVar5) + '\x01')) + (uVar5 != 0 && (uint)(1 < uVar5) <= uVar5 - 1);
      *(char *)(param_1 + 0x6c) = cVar9;
      if (cVar9 != '\0') {
        FUN_10003870(piVar2,iVar4,0,0);
        FUN_100db2f4();
      }
    }
  }
  local_1e8 = 0;
  if ((*(char *)(*(int *)(local_6f4 + -0x14) + 0x34) != '\0') &&
     (iVar4 = FUN_10000c78(), iVar4 == 0)) {
    local_520[0] = 0;
    local_688 = 0x3c;
    local_684 = local_520;
    local_650 = &local_6d0;
    FUN_10001bd8(**(int **)(local_6f4 + -0xedc) + 0x32,&local_688);
    puVar6 = (undefined4 *)FUN_10001728(0x53545220,0x3e9);
    iVar4 = FUN_10000678();
    if ((iVar4 == 0) && (puVar6 != (undefined4 *)0x0)) {
      FUN_10000b70(puVar6);
      local_310 = puVar6;
      local_30c = FUN_10000360(puVar6);
      FUN_10002598(local_310);
      local_594 = 0;
      local_58e = *puVar6;
      local_58a = local_6d0;
      local_584 = auStack_19c;
      local_570 = local_6ce;
      iVar4 = FUN_100017e8(auStack_5a0);
      if (&stack0x00000000 != (undefined1 *)0x310) {
        FUN_10001b60(local_310,(int)local_30c);
      }
    }
    if ((iVar4 == 0) && (iVar4 = FUN_10001800(auStack_19c,&local_154,1), iVar4 == 0)) {
      local_152 = 0;
      iVar4 = FUN_100023a0(&local_1e8,(int)local_154,&local_152,auStack_150,1,auStack_50);
      FUN_10001830((int)local_154);
      if (iVar4 == 0) goto LAB_100745f4;
    }
    if (local_1e8 != 0) {
      FUN_100038b8(local_1e8);
    }
    local_1e8 = 0;
  }
LAB_100745f4:
  local_4e = FUN_10003900();
  local_208 = 0;
  local_204 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  local_200 = **(undefined4 **)(local_6f4 + -0x530);
  **(undefined4 **)(local_6f4 + -0x530) = auStack_308;
  iVar4 = FUN_10000090(auStack_308);
  if (iVar4 == 0) {
    FUN_100b08d4(&local_5a8,*(int *)(local_6f4 + -0xb0) + 0x56);
    if (local_1e8 == 0) {
      _DAT_60000000 =
           (int *)FUN_10117884(**(int **)(local_6f4 + -0x1e4) +
                               (int)*(short *)(*(int *)**(int **)(local_6f4 + -0x1e4) + 200),1000,0)
      ;
    }
    else {
      .glue::FUN_10115ad0(0);
      FUN_100036c0();
      _DAT_60000000 =
           (int *)FUN_10117884(**(int **)(local_6f4 + -0x1e4) +
                               (int)*(short *)(*(int *)**(int **)(local_6f4 + -0x1e4) + 0xc0),1000,0
                              );
      local_640 = (int)local_5a8;
      local_63c = (int)local_5a6;
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x378),&local_640,0);
    }
    if (_DAT_60000000 != (int *)0x0) {
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 800));
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x4c8));
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x3a8));
    }
    if (local_1e8 != 0) {
      iVar4 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x5e8));
      iVar7 = *(int *)(local_6f4 + -0xb0) + 0x56;
      FUN_10003150(*(undefined4 *)(iVar4 + 0x18));
      iVar4 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x5e8));
      FUN_10003150(*(undefined4 *)(iVar4 + 0x1c),iVar7);
      FUN_10002148(iVar7);
      uVar3 = FUN_100b0574(local_1f0);
      FUN_100033a8(local_1e8,uVar3);
      FUN_100b08d4(&local_4c,local_1f0);
      uVar3 = FUN_100b057c(local_1f0,0);
      FUN_100b0698(local_1f0,uVar3);
      uVar5 = (int)local_5a6 - (int)local_4a;
      local_646 = (short)((int)uVar5 >> 1) + (ushort)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      uVar5 = (int)local_5a8 - (int)local_4c;
      local_648 = (short)((int)uVar5 >> 1) + (ushort)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      FUN_100b065c(local_1f0,&local_648);
      if (local_1f0[0] < 0) {
        local_1ec = local_1ec - local_1f0[0];
        local_1f0[0] = 0;
      }
      uVar3 = FUN_100b0578(local_1f0);
      FUN_10002d30(local_1e8,uVar3);
      uVar3 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x5e8));
      FUN_10002e80(local_1e8,uVar3,0);
      FUN_10003408(local_1e8);
      uVar5 = FUN_100038a0(local_1e8);
      do {
        if (uVar5 != 0) break;
        uVar5 = FUN_10003948();
        if (uVar5 == 0) {
          FUN_10003570(auStack_320);
          uVar5 = (uint)((local_31c & 0x10) != 0);
          if (uVar5 == 0) {
            if ((local_31a & 2) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
          }
        }
        FUN_10003660(local_1e8,0);
        iVar4 = FUN_100038a0(local_1e8);
      } while (iVar4 == 0);
      FUN_100038b8(local_1e8);
      local_1e8 = 0;
      .glue::FUN_10115ad0((int)local_4e);
      FUN_100024f0();
    }
    **(undefined4 **)(local_6f4 + -0x530) = local_200;
  }
  else {
    if (local_1e8 != 0) {
      FUN_100038b8(local_1e8);
      local_1e8 = 0;
    }
    .glue::FUN_10115ad0((int)local_4e);
    FUN_100024f0();
    if (_DAT_60000000 != (int *)0x0) {
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x738));
      _DAT_60000000 = (int *)0x0;
    }
  }
  FUN_100013f8(0x7f7f,0);
  FUN_10002508();
  param_1[0x22] = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 1;
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  FUN_100981f8(auStack_5f8,0x80);
  piVar2 = (int *)FUN_10098320(auStack_5f8,0x536f756e,1000);
  if (piVar2 == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x6a) = 1;
    *(undefined1 *)(param_1 + 0x69) = 1;
    *(undefined1 *)((int)param_1 + 0x1a1) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x1a1) = *(undefined1 *)*piVar2;
    *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(*piVar2 + 2);
    *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(*piVar2 + 4);
    FUN_100ef510(piVar2);
  }
  piVar2 = (int *)FUN_10098320(auStack_5f8,0x566f6c75,1000);
  if (piVar2 == (int *)0x0) {
    *(undefined2 *)((int)param_1 + 0x1a2) = 4;
    *(undefined2 *)((int)param_1 + 0x1a6) = 10;
    *(undefined2 *)((int)param_1 + 0x1aa) = 10;
  }
  else {
    *(undefined2 *)((int)param_1 + 0x1a2) = *(undefined2 *)*piVar2;
    *(undefined2 *)((int)param_1 + 0x1a6) = *(undefined2 *)(*piVar2 + 2);
    *(undefined2 *)((int)param_1 + 0x1aa) = *(undefined2 *)(*piVar2 + 4);
  }
  puVar6 = (undefined4 *)FUN_10098320(auStack_5f8,0x4d61696c,1000);
  if (puVar6 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined1 *)*puVar6;
  }
  *(undefined1 *)(param_1 + 0x6b) = uVar10;
  FUN_100ef510(puVar6);
  puVar6 = (undefined4 *)FUN_10098320(auStack_5f8,0x504d6163,1000);
  if (puVar6 != (undefined4 *)0x0) {
    puVar8 = (undefined1 *)*puVar6;
    **(undefined1 **)(local_6f4 + -0x16ac) = *puVar8;
    **(undefined1 **)(local_6f4 + -0x16a8) = puVar8[1];
    FUN_10000960(puVar6);
  }
  FUN_10009a0c();
  FUN_10052608();
  FUN_1005f478();
  FUN_10093a5c();
  FUN_10003aa4();
  FUN_1005f32c();
  FUN_10008de4();
  FUN_10074114(param_1);
  param_1[3] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800),param_1,1);
  FUN_100982e8(auStack_5f8,2);
  return;
}



// Function: FUN_10074c58 at 10074c58
// Size: 372 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10074c58(undefined4 param_1,uint param_2,int *param_3)

{
  int *piVar1;
  undefined1 auStack_160 [72];
  undefined1 local_118 [260];
  
  piVar1 = (int *)FUN_1007ab7c(0);
  if ((param_2 == 0x14) || (param_2 == 0x16)) {
    FUN_1007ac8c(piVar1,param_3,0x57617232,
                 ('\x14' - ((0x14 < param_2) + '\x14')) +
                 (0x13 < param_2 && (uint)(0x14 < param_2) <= param_2 - 0x14));
  }
  else if (param_2 == 0x15) {
    _DAT_a8650028 = 0;
    FUN_1007ac8c(piVar1,0,0x57617232,1);
    local_118[0] = 0;
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x290),local_118);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x318),local_118);
    FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x178),auStack_160);
    FUN_1007ec7c(piVar1,auStack_160);
    FUN_10117884(piVar1[0x52] + (int)*(short *)(*(int *)piVar1[0x52] + 0x118));
    FUN_1007c714(piVar1,0x3f5);
    FUN_100db158(0,0x820000);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// Function: FUN_10074dcc at 10074dcc
// Size: 372 bytes

void FUN_10074dcc(int param_1)

{
  undefined1 uVar2;
  int *piVar1;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [84];
  
  uVar2 = FUN_100f1574(1);
  piVar1 = (int *)FUN_10001fc8(6);
  uRam00000000 = uVar2;
  if (piVar1 != (int *)0x0) {
    *(undefined1 *)*piVar1 = *(undefined1 *)(param_1 + 0x1a1);
    *(undefined1 *)(*piVar1 + 2) = *(undefined1 *)(param_1 + 0x1a4);
    *(undefined1 *)(*piVar1 + 4) = *(undefined1 *)(param_1 + 0x1a8);
    FUN_100981f8(auStack_70,0x80);
    FUN_100985fc(auStack_70,piVar1,0x536f756e,1000,&DAT_7c0803a6);
    FUN_10000960(piVar1);
    FUN_100982e8(auStack_70,2);
  }
  uVar2 = FUN_100f1574(1);
  piVar1 = (int *)FUN_10001fc8(6);
  uRam00000000 = uVar2;
  if (piVar1 != (int *)0x0) {
    *(undefined2 *)*piVar1 = *(undefined2 *)(param_1 + 0x1a2);
    *(undefined2 *)(*piVar1 + 2) = *(undefined2 *)(param_1 + 0x1a6);
    *(undefined2 *)(*piVar1 + 4) = *(undefined2 *)(param_1 + 0x1aa);
    FUN_100981f8(auStack_c0,0x80);
    FUN_100985fc(auStack_c0,piVar1,0x566f6c75,1000,&DAT_7c0803a6);
    FUN_10000960(piVar1);
    FUN_100982e8(auStack_c0,2);
  }
  return;
}



// Function: FUN_10074f40 at 10074f40
// Size: 892 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074f40(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int local_15c;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_20;
  
  local_20 = (int *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar2 = FUN_10000090(auStack_138);
  if (iVar2 == 0) {
    local_20 = (int *)FUN_10117884(**(int **)(local_15c + -0x1e4) +
                                   (int)*(short *)(*(int *)**(int **)(local_15c + -0x1e4) + 200),
                                   0x7da,0);
    FUN_100db26c();
    piVar3 = (int *)FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x308),0x6d757369);
    if (piVar3 != (int *)0x0) {
      if (*(short *)(piVar3 + 0x35) != *(short *)(param_1 + 0x1a2)) {
        *(short *)(piVar3 + 0x35) = *(short *)(param_1 + 0x1a2);
      }
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738),DAT_7c0903da == '\0',0);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),DAT_7c0903da);
    }
    iVar2 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x308),0x736f756e);
    if ((iVar2 != 0) && (*(short *)(iVar2 + 0xd4) != *(short *)(param_1 + 0x1a6))) {
      *(short *)(iVar2 + 0xd4) = *(short *)(param_1 + 0x1a6);
    }
    iVar2 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x308),0x73706565);
    if ((iVar2 != 0) && (*(short *)(iVar2 + 0xd4) != *(short *)(param_1 + 0x1aa))) {
      *(short *)(iVar2 + 0xd4) = *(short *)(param_1 + 0x1aa);
    }
    FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 800));
    iVar2 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x810));
    if (iVar2 == 0x6f6b2020) {
      iVar2 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x308),0x6d757369);
      if (iVar2 != 0) {
        sVar1 = *(short *)(iVar2 + 0xd4);
        iVar2 = (int)sVar1;
        *(short *)(param_1 + 0x1a2) = sVar1;
        *(bool *)(param_1 + 0x1a1) = iVar2 != 0;
        if (iVar2 != 0) {
          FUN_10092a58(iVar2);
          FUN_10092aa4();
        }
        else {
          FUN_10092ae0();
        }
      }
      iVar2 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x308),0x736f756e);
      if (iVar2 != 0) {
        sVar1 = *(short *)(iVar2 + 0xd4);
        *(short *)(param_1 + 0x1a6) = sVar1;
        *(char *)(param_1 + 0x1a4) = '\x01' - (sVar1 == 0);
      }
      iVar2 = FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x308),0x73706565);
      if (iVar2 != 0) {
        sVar1 = *(short *)(iVar2 + 0xd4);
        *(short *)(param_1 + 0x1aa) = sVar1;
        *(char *)(param_1 + 0x1a8) = '\x01' - (sVar1 == 0);
      }
      FUN_10074dcc(param_1);
    }
    FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x738));
    _DAT_41820010 = local_30;
  }
  else {
    if (local_20 != (int *)0x0) {
      FUN_10117884((int)local_20 + (int)*(short *)(*local_20 + 0x738));
    }
    local_20 = (int *)0x0;
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_10075304 at 10075304
// Size: 392 bytes

/* WARNING: Removing unreachable block (ram,0x10075448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075304(void)

{
  int iVar1;
  int *piVar2;
  int local_14c;
  undefined1 auStack_124 [256];
  short local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = _DAT_41820010;
  _DAT_41820010 = auStack_124;
  iVar1 = FUN_10000090(auStack_124);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10117884(**(int **)(local_14c + -0x1e4) +
                                 (int)*(short *)(*(int *)**(int **)(local_14c + -0x1e4) + 200),2000,
                                 0);
    FUN_100db26c();
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
    iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x810));
    if ((iVar1 == 0x6f6b2020) &&
       (iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7f8)), iVar1 != 0)) {
      FUN_100a1ce8(iVar1);
    }
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738));
    _DAT_41820010 = local_1c;
  }
  else {
    FUN_100db158((int)local_24,local_20);
  }
  return;
}



// Function: FUN_1007548c at 1007548c
// Size: 228 bytes

void FUN_1007548c(int param_1,int param_2)

{
  int *piVar1;
  
  if ((((((param_2 == 0x14) || (param_2 == 0x15)) || (param_2 == 0x16)) ||
       ((param_2 == 0x17 || (param_2 == 0x18)))) ||
      ((param_2 == 0x19 || ((param_2 == 0x1a || (param_2 == 0x1b)))))) ||
     ((param_2 == 0x1c || (param_2 == 0x1d)))) {
    piVar1 = *(int **)(param_1 + 0x88);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2c0));
    }
  }
  else {
    if (param_2 == 0x76e) {
      FUN_10075304(param_1);
      return;
    }
    if (param_2 == 0x774) {
      FUN_10074f40(param_1);
      return;
    }
  }
  FUN_100b993c(param_1,param_2);
  return;
}



// Function: FUN_10075570 at 10075570
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075570(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_100f27d0(param_2,param_3);
  if (_DAT_7c7f1814 != (int *)0x0) {
    piVar1 = (int *)FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),
                                 0x6c62616b);
    piVar2 = (int *)FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),
                                 0x7362616b);
    iVar4 = 0;
    do {
      iVar3 = FUN_10075d94(param_1,(int)*(short *)(param_1 + iVar4 * 2 + 0x8c));
      if (iVar3 == param_2) {
        if ((piVar1 != (int *)0x0) &&
           (piVar1 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                         iVar4 + 0x62757431), piVar1 != (int *)0x0)) {
          FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,param_3 == '\0',1);
        }
        if (piVar2 == (int *)0x0) {
          return;
        }
        piVar1 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),
                                     iVar4 + 0x62757431);
        if (piVar1 == (int *)0x0) {
          return;
        }
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),param_3 == '\0',1);
        return;
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 4);
  }
  return;
}



// Function: FUN_10075714 at 10075714
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075714(int param_1)

{
  int iVar1;
  char cVar2;
  
  FUN_100b9c98(param_1);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x16d) == '\0') {
      cVar2 = '\x01';
    }
    else {
      cVar2 = *(char *)(iVar1 + 0x16c);
    }
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x9a) != '\0') {
        FUN_100f27d0(0x24,0);
      }
    }
  }
  if (*(char *)(_DAT_57c407bd + 0x99) == '\0') {
    FUN_10075570(param_1,0x774,1);
    if ((*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0) &&
       (*(char *)(param_1 + 0x9a) == '\0')) {
      FUN_10075570(param_1,0x76e,1);
    }
  }
  else {
    FUN_100f27d0(1,0);
    iVar1 = 10;
    do {
      FUN_100f27d0(iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
    iVar1 = 0x14;
    do {
      FUN_100f27d0(iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x1e);
  }
  return;
}



// Function: FUN_10075854 at 10075854
// Size: 64 bytes

void FUN_10075854(int param_1,undefined4 param_2)

{
  FUN_100b7a24(param_1,param_2);
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



// Function: FUN_10075894 at 10075894
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075894(int *param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  uVar1 = *(undefined2 *)(_DAT_57c407bd + 0x54);
  *(undefined2 *)(_DAT_57c407bd + 0x54) = 0x40;
  sVar2 = 0;
  do {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x300),0);
    sVar2 = sVar2 + 1;
  } while (sVar2 < 10);
  *(undefined2 *)(_DAT_57c407bd + 0x54) = uVar1;
  return;
}



// Function: FUN_10075918 at 10075918
// Size: 192 bytes

void FUN_10075918(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    iVar1 = *param_1;
    uVar2 = FUN_100f2214(4);
    uVar2 = FUN_1004152c(*(undefined4 *)((int)param_2 + 0x16),(int)*(short *)((int)param_2 + 0x22),
                         uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x478),uVar2);
  }
  else {
    FUN_100b960c(param_1,param_2);
  }
  return;
}



// Function: FUN_100759d8 at 100759d8
// Size: 668 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100759d8(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10002f40();
  iVar2 = FUN_100efb84();
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if (iVar3 != 0) {
    FUN_100929a0();
  }
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x26) == '\0') goto LAB_10075adc;
      iVar1 = FUN_10003750();
      if (iVar1 != 0) {
        FUN_10002fe8();
        FUN_100db2f4();
      }
    }
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
    if ((iVar1 == 0) || (iVar2 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_10003258(uVar5);
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
    *(char *)(param_1 + 0x26) = (char)iVar2;
  }
LAB_10075adc:
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if ((((iVar1 == 0) && (param_1[0x22] != 0)) && (_DAT_80410014 != 0)) &&
     (*(char *)((int)param_1 + 0x9a) != '\0')) {
    uVar4 = FUN_10001a88();
    if ((param_1[0x27] + 0x3cU <= uVar4) &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8)), iVar1 != 0)) {
      *(undefined1 *)((int)param_1 + 0x9a) = 0;
      FUN_1007c714(param_1[0x22],1000);
      goto LAB_10075c08;
    }
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (((iVar1 == 0) && ((param_1[0x22] != 0 && (_DAT_80410014 != 0)))) &&
     (*(char *)((int)param_1 + 0x9b) != '\0')) {
    uVar4 = FUN_10001a88();
    if ((param_1[0x27] + 0x3cU <= uVar4) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x2e8) + (int)param_1), iVar1 != 0)) {
      *(undefined1 *)((int)param_1 + 0x9b) = 0;
      FUN_1007c714(param_1[0x22],0x3ee);
    }
  }
LAB_10075c08:
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (iVar1 != 0) {
    if (_DAT_60690000 != 0) {
      *(undefined2 *)(_DAT_60690000 + 0xbc) = 0xffff;
    }
    if (_DAT_48001681 != 0) {
      *(undefined2 *)(_DAT_48001681 + 0xa0) = 0xffff;
    }
  }
  FUN_100d9fe8(param_1,param_2);
  return;
}



// Function: FUN_10075c74 at 10075c74
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075c74(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_130;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = _DAT_609d0000;
  local_130 = _DAT_609d0000;
  _DAT_609d0000 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800),param_1,0);
    FUN_100b8ac4(param_1);
    _DAT_41820010 = local_24;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 800),param_1,1);
    if (iVar1 != 0) {
      _DAT_609d0000 = iVar1;
    }
    local_130 = 0;
    FUN_100db158((int)local_2c,local_28);
  }
  _DAT_609d0000 = local_130;
  FUN_1002774c();
  _DAT_609d0000 = FUN_100f57c8(local_130);
  return;
}



// Function: FUN_10075d94 at 10075d94
// Size: 308 bytes

int FUN_10075d94(int param_1,short param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar1 = FUN_100ef2f8(*(undefined4 *)(param_1 + 0x94));
    if (iVar1 != 0) {
      FUN_10000b70(*(undefined4 *)(param_1 + 0x94));
    }
    piVar4 = *(int **)(param_1 + 0x94);
    if (*piVar4 != 0) {
      cVar2 = FUN_10000360(piVar4);
      FUN_10002598(piVar4);
      piVar3 = (int *)**(undefined4 **)(param_1 + 0x94);
      iVar1 = 0;
      if (0 < *piVar3) {
        do {
          if (*(short *)(piVar3 + iVar1 * 2 + 2) == param_2) {
            iVar1 = piVar3[iVar1 * 2 + 1];
            if (&stack0x00000000 != (undefined1 *)0x18) {
              FUN_10001b60(piVar4,(int)cVar2);
              return iVar1;
            }
            return iVar1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *piVar3);
      }
      if (&stack0x00000000 != (undefined1 *)0x18) {
        FUN_10001b60(piVar4,(int)cVar2);
      }
    }
  }
  return 0;
}



// Function: FUN_10075ee0 at 10075ee0
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075ee0(int param_1,short param_2,short param_3)

{
  int *piVar1;
  
  *(short *)(param_1 + param_2 * 2 + 0x8c) = param_3;
  if ((_DAT_7c7f1814 != (int *)0x0) &&
     (piVar1 = (int *)FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x308),
                                   param_2 + 0x62757431), piVar1 != (int *)0x0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x7a8) + (int)piVar1,(int)param_3,1);
  }
  return;
}



// Function: FUN_10075f80 at 10075f80
// Size: 308 bytes

void FUN_10075f80(int param_1)

{
  undefined1 uVar2;
  int *piVar1;
  int iVar3;
  int iVar4;
  int local_94;
  undefined1 auStack_70 [80];
  int *local_20;
  char local_1c;
  
  uVar2 = FUN_100f1574(1);
  piVar1 = (int *)FUN_10001fc8(8);
  **(undefined1 **)(local_94 + -0x3c) = uVar2;
  if (piVar1 != (int *)0x0) {
    local_20 = piVar1;
    local_1c = FUN_10000360(piVar1);
    FUN_10002598(local_20);
    iVar3 = *piVar1;
    iVar4 = 0;
    do {
      *(undefined2 *)(iVar4 * 2 + iVar3) = *(undefined2 *)(param_1 + iVar4 * 2 + 0x8c);
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 4);
    if (&stack0x00000000 != (undefined1 *)0x20) {
      FUN_10001b60(local_20,(int)local_1c);
    }
    if (piVar1 != (int *)0x0) {
      FUN_100981f8(auStack_70,0x80);
      FUN_100985fc(auStack_70,piVar1,0x53686f72,1000,*(undefined4 *)(local_94 + -0xe4c));
      FUN_100ef510(piVar1);
      FUN_100982e8(auStack_70,2);
    }
  }
  return;
}



// Function: FUN_100760c0 at 100760c0
// Size: 184 bytes

void FUN_100760c0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *in_stack_00000040;
  
  FUN_100bd9dc(param_1,param_2,param_3,param_4);
  if (param_2 == 0x14) {
    *param_3 = &DAT_2c03ffff;
  }
  else if ((1000 < param_2) && (param_2 < 0x3ee)) {
    *in_stack_00000040 = param_1;
    *param_3 = &DAT_4082000c;
    if (param_2 - 0x3e9U < 5) {
      return;
    }
  }
  return;
}



// Function: FUN_100764ec at 100764ec
// Size: 144 bytes

undefined4 FUN_100764ec(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (iVar1 == 0) {
    piVar3 = (int *)param_1[0x22];
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2c0));
      param_1[0x22] = 0;
    }
    uVar2 = FUN_100bc6ac(param_1,param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1007657c at 1007657c
// Size: 152 bytes

undefined4 FUN_1007657c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
  if (iVar1 == 0) {
    piVar3 = (int *)param_1[0x22];
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2c0));
      param_1[0x22] = 0;
    }
    uVar2 = FUN_100bc87c(param_1,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_10076614 at 10076614
// Size: 92 bytes

void FUN_10076614(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    uVar1 = FUN_10001170();
    FUN_10003870(uVar1,(int)*(short *)(param_1 + 0x1ae),0,0);
    FUN_100db2f4();
  }
  return;
}



// Function: FUN_10076670 at 10076670
// Size: 152 bytes

void FUN_10076670(int param_1)

{
  int iVar1;
  
  FUN_10092ae0();
  FUN_10076614(param_1);
  iVar1 = FUN_10002f40();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x98) != '\0')) {
    iVar1 = FUN_10003750();
    if (iVar1 != 0) {
      FUN_10002fe8();
      FUN_100db2f4();
    }
    FUN_10003258(0);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  FUN_100dac54(param_1);
  return;
}



// Function: FUN_10076708 at 10076708
// Size: 80 bytes

void FUN_10076708(int param_1,int param_2)

{
  FUN_100b8f00(param_1,param_2);
  if (param_2 == *(int *)(param_1 + 0x88)) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}



// Function: FUN_10076758 at 10076758
// Size: 464 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076758(void)

{
  int iVar1;
  int *piVar2;
  int local_154;
  int *local_130;
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
    local_130 = (int *)FUN_10117884(**(int **)(local_154 + -0x1e4) +
                                    (int)*(short *)(*(int *)**(int **)(local_154 + -0x1e4) + 200),
                                    0x410,0);
    FUN_100db26c();
    FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 800));
    piVar2 = (int *)FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x7f8));
    iVar1 = FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x308),0x63726564);
    if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x140) + (int)piVar2,3,iVar1,0);
    }
    _DAT_41820010 = local_24;
  }
  else {
    iVar1 = FUN_100f5790(local_130);
    if (iVar1 != 0) {
      FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x738));
    }
    local_130 = (int *)0x0;
    FUN_100db158((int)local_2c,local_28);
  }
  FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x810));
  FUN_10117884((int)local_130 + (int)*(short *)(*local_130 + 0x738));
  return;
}



// Function: FUN_10076928 at 10076928
// Size: 148 bytes

undefined4 FUN_10076928(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    uVar1 = 0x14;
  }
  else {
    FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x180),&local_8);
    FUN_100db2f4();
    if (local_8 == 0x57325347) {
      uVar1 = 0x14;
    }
    else if (local_8 == 0x57325343) {
      uVar1 = 0x15;
    }
    else {
      uVar1 = 0x16;
    }
  }
  return uVar1;
}



// Function: FUN_100769bc at 100769bc
// Size: 88 bytes

void FUN_100769bc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x3e9) || (0x3ed < param_2)) {
    uVar1 = FUN_100f15e0(0);
    *param_3 = uVar1;
  }
  else {
    FUN_100bdb40(param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_10076a14 at 10076a14
// Size: 296 bytes

undefined4 FUN_10076a14(int param_1)

{
  char cVar1;
  short sVar3;
  char *pcVar2;
  int iVar4;
  undefined4 uVar5;
  int local_74;
  char local_50 [68];
  
  uVar5 = 1;
  if ((*(byte *)(param_1 + 0x1e) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x20) == 0x57325347) || (*(int *)(param_1 + 0x20) == 0x57325343)) {
      uVar5 = 0;
    }
    else {
      FUN_100012d8(*(undefined1 **)(param_1 + 0x12) + 1,local_50,**(undefined1 **)(param_1 + 0x12));
      local_50[**(byte **)(param_1 + 0x12) + 1] = '\0';
      sVar3 = FUN_100012c0(local_50);
      iVar4 = 0;
      if (-1 < sVar3) {
        do {
          cVar1 = local_50[iVar4];
          if (('`' < cVar1) && (cVar1 < '{')) {
            local_50[iVar4] = cVar1 + -0x20;
          }
          iVar4 = (int)(short)((short)iVar4 + 1);
        } while (iVar4 <= sVar3);
      }
      pcVar2 = (char *)FUN_10002958(local_50,*(int *)(local_74 + -0x16b4) + 0x44);
      if ((pcVar2 == local_50) &&
         (iVar4 = FUN_10002958(local_50,*(int *)(local_74 + -0x16b4) + 0x4c), iVar4 != 0)) {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// Function: FUN_10076b3c at 10076b3c
// Size: 340 bytes

void FUN_10076b3c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  undefined4 local_3c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0),
                       *(undefined4 *)(param_2 + 0x16));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8));
  if ((iVar2 != 0) && (iVar1 != 0)) {
    if (iVar1 == **(int **)(local_3c + -0x1698)) {
      piVar3 = (int *)FUN_10001170();
      sVar4 = *(short *)(**(int **)(*piVar3 + 0x16) + 0x20);
      iVar1 = FUN_10001188(piVar3,8,1,1);
      if ((sVar4 == 8) || (iVar1 == 0)) {
        *(undefined1 *)((int)param_1 + 0x1b1) = 0;
      }
      else if (*(char *)((int)param_1 + 0x1b1) == '\0') {
        *(undefined1 *)((int)param_1 + 0x1b1) = 1;
        iVar2 = FUN_100d8c9c(0x3f2,0);
        if (iVar2 == 1) {
          FUN_10003870(piVar3,iVar1,0,0);
          FUN_100db2f4();
          sVar4 = *(short *)(**(int **)(*piVar3 + 0x16) + 0x20);
        }
      }
      if (sVar4 == 8) {
        FUN_1000a4e8();
      }
    }
  }
  FUN_100bb820(param_1,param_2);
  return;
}



// Function: FUN_10076c90 at 10076c90
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076c90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  if (_DAT_60690000 != 0) {
    *(undefined2 *)(_DAT_60690000 + 0xbc) = 0xffff;
  }
  if (_DAT_48001681 != 0) {
    *(undefined2 *)(_DAT_48001681 + 0xa0) = 0xffff;
  }
  uStack0000001c = param_2;
  FUN_100bdc54(param_1,param_2);
  return;
}



// Function: FUN_10076cec at 10076cec
// Size: 580 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076cec(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_25c;
  undefined1 local_234 [256];
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = (int)(short)((uint)param_2 >> 0x10);
  if (iVar4 != 0) {
    iVar1 = FUN_100f2704(iVar4,(int)(short)param_2);
    if ((iVar1 < 0) && (iVar4 == 1)) {
      local_234[0] = 0;
      uVar2 = FUN_100f2214(1);
      FUN_10001500(uVar2,(int)(short)param_2,local_234);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f8),local_234);
    }
    else if ((iVar1 < 0x65) ||
            ((0x6a < iVar1 || (iVar4 = FUN_100015c0((int)(short)((short)iVar1 + -0x65)), iVar4 == 0)
             ))) {
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_2c = _DAT_41820010;
      _DAT_41820010 = auStack_134;
      iVar4 = FUN_10000090(auStack_134);
      if (iVar4 == 0) {
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),1);
        }
        puVar3 = (undefined4 *)FUN_100f56e4(0x34);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_100c3d2c(puVar3);
          *puVar3 = *(undefined4 *)(local_25c + -0x168c);
          puVar3[0xc] = 0;
        }
        FUN_100c3df8(puVar3,0xffffffff,param_1,0,0,0);
        puVar3[0xc] = iVar1;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar3);
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),0);
        }
        _DAT_41820010 = local_2c;
      }
      else {
        if (*(char *)((int)param_1 + 0x56) != '\0') {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x508),0);
        }
        FUN_100db22c((int)local_34,local_30,(int)(short)iVar1);
        FUN_100db158((int)local_34,local_30);
      }
    }
  }
  return;
}



// Function: FUN_10076f30 at 10076f30
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076f30(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0x2b) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x318));
    if (iVar1 != 0) {
      FUN_100d9b64(param_1,0x2b,param_3,param_4);
    }
    if (_DAT_80410014 != (int *)0x0) {
      uVar2 = FUN_100f5754(0);
      uVar3 = FUN_1010ef14(0);
      FUN_100f5754(uVar2);
      FUN_1010efac(uVar3,0x1f,_DAT_80410014);
      FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x208),uVar3);
    }
  }
  FUN_100b941c(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_1007703c at 1007703c
// Size: 84 bytes

void FUN_1007703c(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    FUN_10092a58(0);
  }
  FUN_100b78b4(param_1,param_2);
  return;
}



// Function: FUN_10077090 at 10077090
// Size: 80 bytes

void FUN_10077090(int param_1,undefined1 param_2)

{
  FUN_100bd438(param_1,param_2);
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    FUN_10092a58((int)*(short *)(param_1 + 0x1a2));
  }
  return;
}



// Function: FUN_100770e0 at 100770e0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100770e0(void)

{
  FUN_100c1c8c(&DAT_48000044,_DAT_4800001c,0x1b4,0x63a40000,&DAT_807f0028);
  return;
}



// Function: FUN_10077128 at 10077128
// Size: 84 bytes

undefined4 * FUN_10077128(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(200);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1010f054(puVar1);
    *puVar1 = &DAT_80410014;
  }
  return puVar1;
}



// Function: FUN_1007717c at 1007717c
// Size: 8 bytes

undefined1 * FUN_1007717c(void)

{
  return &DAT_281f0000;
}



// Function: FUN_10077184 at 10077184
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077184(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1010f8cc(param_1,param_2);
  FUN_10003210(param_1[0x20],_DAT_83ea0000,1);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_1007717c();
    iVar3 = FUN_100f5278(piVar1,uVar2);
    if (iVar3 != 0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x1a8) + (int)piVar1,param_2);
    }
  }
  return;
}



// Function: FUN_1007723c at 1007723c
// Size: 384 bytes

void FUN_1007723c(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_100e10b0(&local_58,param_2,param_3);
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = local_58;
  local_34 = local_54;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),&local_40,param_5);
  FUN_100e0f78(&local_60,param_4);
  FUN_100e0f78(&local_68,param_3);
  local_48 = CONCAT22(local_68,local_66);
  local_44 = CONCAT22(local_60,local_5e);
  param_1[0x24] = local_48;
  param_1[0x25] = local_44;
  local_50 = 1;
  local_4e = 1;
  local_4c = 1;
  local_4a = 1;
  FUN_100b0590(param_1 + 0x24,&local_50);
  FUN_10003108(**(undefined4 **)(param_1[0x20] + 0x82),0,0,(int)(short)((short)param_3[1] + 1),
               (int)(short)((short)*param_3 + 1));
  FUN_10003108(**(int **)(param_1[0x20] + 0x82) + 8,0,0,(int)(short)((short)param_4[1] + 1),
               (int)(short)((short)*param_4 + 1));
  return;
}



// Function: FUN_100773bc at 100773bc
// Size: 436 bytes

int FUN_100773bc(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 param_5
                )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [316];
  
  FUN_1010556c(auStack_160,param_2);
  piVar1 = (int *)FUN_10105660(auStack_160);
  iVar2 = FUN_100ebf44(auStack_160);
  iVar3 = 0;
  if (iVar2 == 0) {
LAB_100774b0:
    if ((((iVar3 == 0) &&
         (iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x578)), iVar2 != 0)) &&
        (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x538) + (int)param_2,param_4), iVar2 != 0)
        ) && (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x668) + (int)param_2), iVar2 != 0)) {
      FUN_10117884((int)*(short *)(*param_2 + 0x608) + (int)param_2,param_5);
      *param_3 = (int)param_2;
      iVar3 = 1;
    }
  }
  else {
    do {
      local_168 = *param_4;
      uStack_164 = param_4[1];
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8),&local_168);
      iVar3 = FUN_100773bc(param_1,piVar1,param_3,&local_168,param_5);
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b0),param_5);
      piVar1 = (int *)FUN_10105684(auStack_160);
      iVar2 = FUN_100ebf44(auStack_160);
      if (iVar2 == 0) goto LAB_100774b0;
    } while (iVar3 == 0);
  }
  FUN_101055f4(auStack_160,2);
  return iVar3;
}



// Function: FUN_10077570 at 10077570
// Size: 144 bytes

void FUN_10077570(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_100773bc(param_1,iVar2,param_1 + 0x38,param_2,param_3);
  }
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x38) == iVar2)) {
    FUN_10000138(param_3);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// Function: FUN_10077600 at 10077600
// Size: 1024 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077600(int *param_1,undefined4 param_2,int *param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined **local_2e4;
  undefined4 local_2b8;
  undefined1 auStack_2b4 [8];
  undefined1 auStack_2ac [276];
  undefined4 local_198;
  undefined1 auStack_194 [276];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  short local_70;
  short local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54;
  undefined4 local_4c [2];
  
  ppuVar2 = &.TVect::OCECToRString;
  if (param_1[0xf] != 0) {
    FUN_100019c8(param_1[0xf]);
    param_1[0xf] = 0;
    ppuVar2 = local_2e4;
  }
  piVar6 = (int *)param_1[2];
  if (param_1[0xe] != 0) {
    FUN_10117884((int)*(int **)ppuVar2[-0x3b7] + (int)*(short *)(**(int **)ppuVar2[-0x3b7] + 0x418),
                 1000,1,0,param_4,param_5,param_6,param_7);
    FUN_100b02d0(auStack_2b4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0),
                 *(undefined4 *)(param_1[0xe] + 0x18),auStack_2b4);
    iVar3 = FUN_100b04f0(auStack_2b4,local_2e4[-0x398]);
    if (iVar3 == 0) {
      if ((piVar6 != (int *)0x0) &&
         (iVar3 = FUN_10117884((int)*(short *)(*piVar6 + 0x3a8) + (int)piVar6), iVar3 != 0)) {
        FUN_100ee64c(auStack_194);
        FUN_10001e48(local_80);
        FUN_100ee64c(auStack_2ac);
        uVar1 = local_198;
        local_6c = 0xd8f0;
        local_6a = 0xd8f0;
        local_68 = 10000;
        local_66 = 10000;
        uVar4 = FUN_100b0578(&local_6c);
        FUN_10003150(uVar1,uVar4);
        FUN_10001548(local_198);
        puVar5 = (undefined4 *)local_2e4[-0x59c];
        local_64 = *puVar5;
        uStack_60 = puVar5[1];
        uStack_5c = puVar5[2];
        uStack_58 = puVar5[3];
        local_54 = puVar5[4];
        iVar3 = FUN_1000a12c(&local_64,(int)_DAT_607c0004,(int)_DAT_607c0006,8,0);
        if (iVar3 == 0) {
          FUN_100db26c(0);
        }
        FUN_10000870(&local_2b8,local_4c);
        FUN_10000888(local_54,0);
        FUN_100b2268(local_2e4[-0x75]);
        FUN_100008b8();
        FUN_100b2268(local_2e4[-0x75] + 0x5fa);
        FUN_100021c0();
        if (local_54 != 0) {
          FUN_10009a98(local_54);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),
                     *(undefined4 *)(param_1[0xe] + 0x18));
        if (local_54 != 0) {
          FUN_10009b00(local_54);
        }
        FUN_10000888(local_2b8,local_4c[0]);
        local_6e = _DAT_607c0004;
        local_70 = _DAT_607c0006;
        local_74 = 0;
        local_72 = 0;
        FUN_100b0578(&local_74);
        iVar3 = FUN_100001b0();
        param_1[0xf] = iVar3;
        FUN_10009b48(&local_64,0,0,(int)_DAT_607c0004,(int)_DAT_607c0006,local_2e4[-0x482],0,0);
        FUN_100001c8();
        FUN_1000a094(&local_64);
        FUN_10001548(local_80);
        FUN_100ee77c(auStack_2ac,2);
        FUN_100ee77c(auStack_194,2);
      }
      *param_4 = 5;
      *(int *)(param_4 + 1) = param_1[0xf];
      iVar3 = FUN_10117884(param_1[0xe] + (int)*(short *)(*(int *)param_1[0xe] + 0x3a8));
      if ((iVar3 != 0) && (param_3 != (int *)0x0)) {
        local_7c = *(undefined4 *)(*param_3 + 2);
        local_78 = *(undefined4 *)(*param_3 + 6);
        *param_6 = local_7c;
        param_6[1] = local_78;
        FUN_10117884(param_5,param_1[0xe] + (int)*(short *)(*(int *)param_1[0xe] + 0x280),param_2);
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x3a8));
        }
      }
    }
  }
  return;
}



// Function: FUN_10077a00 at 10077a00
// Size: 228 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,short param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack00000028;
  undefined1 auStack_20 [8];
  
  uStack00000028 = param_5;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_100b0384(&stack0x00000028);
    FUN_10002fd0();
    puVar1 = (undefined4 *)FUN_100b0368(auStack_20,&stack0x00000028);
    iVar2 = FUN_100000f0(param_4,*puVar1,0,0,0x81,(int)param_7,2);
    if (iVar2 != -0x355) {
      FUN_100db2f4(iVar2);
    }
  }
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x18),param_3,param_3);
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_3,param_3);
  return;
}



// Function: FUN_10077af4 at 10077af4
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077af4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short local_260 [2];
  undefined1 auStack_25c [264];
  undefined4 local_154 [2];
  undefined1 auStack_14c [8];
  undefined1 auStack_144 [256];
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 != 0) {
    uVar2 = FUN_1007717c();
    iVar3 = FUN_100f5278(iVar1,uVar2);
    if (iVar3 != 0) {
      FUN_10077570(iVar1,param_2,param_3);
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_3c = _DAT_41820010;
      _DAT_41820010 = auStack_144;
      iVar3 = FUN_10000090(auStack_144);
      if (iVar3 != 0) {
        return;
      }
      FUN_100b02d0(local_154);
      FUN_10077600(iVar1,param_2,param_3,auStack_25c,local_154,auStack_14c,local_260);
      FUN_10077a00(iVar1,param_2,param_3,auStack_25c,local_154[0],auStack_14c,(int)local_260[0]);
      _DAT_41820010 = (undefined1 *)local_3c;
      return;
    }
  }
  FUN_10107f60(param_1,param_2,param_3);
  return;
}



// Function: FUN_10077c7c at 10077c7c
// Size: 368 bytes

void FUN_10077c7c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [316];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x570));
  if (iVar1 != 0) {
    FUN_101054e0(auStack_150,param_1,0);
    piVar2 = (int *)FUN_10105660(auStack_150);
    iVar1 = FUN_100ebf44(auStack_150);
    while (iVar1 != 0) {
      local_158 = *param_2;
      uStack_154 = param_2[1];
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_158);
      iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x538),&local_158);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x568)), iVar1 != 0)) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x588) + (int)piVar2,&local_158,param_3);
        FUN_10117884((int)*(short *)(*piVar2 + 0x2b0) + (int)piVar2,param_3);
        break;
      }
      piVar2 = (int *)FUN_10105684(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  return;
}



// Function: FUN_10077dec at 10077dec
// Size: 96 bytes

void FUN_10077dec(int param_1,int *param_2,undefined1 param_3)

{
  int local_8;
  int local_4;
  
  local_4 = param_2[1];
  if ((int)*(short *)(param_1 + 0x96) < param_2[1]) {
    local_4 = (int)*(short *)(param_1 + 0x96);
  }
  local_8 = *param_2;
  if ((int)*(short *)(param_1 + 0x94) < *param_2) {
    local_8 = (int)*(short *)(param_1 + 0x94);
  }
  FUN_1010bfd4(param_1,&local_8,param_3);
  return;
}



// Function: FUN_10077e4c at 10077e4c
// Size: 276 bytes

void FUN_10077e4c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  
  FUN_10110c38(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818));
  if (iVar1 != 0) {
    piVar2 = (int *)**(undefined4 **)(local_2c + -0x1698);
    if ((piVar2 != (int *)0x0) && (piVar2 != param_1)) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x4c8) + (int)piVar2);
    }
    piVar2 = (int *)**(undefined4 **)(local_2c + -0x1504);
    if ((piVar2 != (int *)0x0) && (piVar2 != param_1)) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
    }
    piVar2 = (int *)**(undefined4 **)(local_2c + -0x18fc);
    if ((piVar2 != (int *)0x0) && (piVar2 != param_1)) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
    }
    piVar2 = (int *)**(undefined4 **)(local_2c + -0x16a0);
    if ((piVar2 != (int *)0x0) && (piVar2 != param_1)) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4c8));
    }
  }
  return;
}



// Function: FUN_10077f68 at 10077f68
// Size: 84 bytes

undefined4 * FUN_10077f68(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(200);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100e0ca0(puVar1);
    *puVar1 = &DAT_30210048;
  }
  return puVar1;
}



// Function: FUN_10077fbc at 10077fbc
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077fbc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_1010f8cc(param_1,param_2);
  FUN_10003210(param_1[0x20],_DAT_83ea0000,1);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_1007717c();
    iVar3 = FUN_100f5278(piVar1,uVar2);
    if (iVar3 != 0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x1a8) + (int)piVar1,param_2);
    }
  }
  return;
}



// Function: FUN_10078074 at 10078074
// Size: 712 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_10078074(int param_1,int *param_2,int *param_3)

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



// Function: FUN_1007833c at 1007833c
// Size: 712 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_1007833c(int param_1,int *param_2,int *param_3)

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
  uVar3 = FUN_100b057c(param_1 + 0x90,0);
  psVar4 = (short *)FUN_100b0388(uVar3,1);
  sVar1 = *psVar4;
  psVar4 = (short *)FUN_100b0388(param_1 + 0xbe,1);
  local_74 = (int)sVar1 + (int)*psVar4;
  if (local_6c[0] < (int)sVar1 + (int)*psVar4) {
    piVar5 = local_6c;
  }
  local_4c = *piVar5;
  local_70 = FUN_100e1a3c(&local_48,0);
  uVar3 = FUN_100b057c(param_1 + 0x90,0);
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



// Function: FUN_10078604 at 10078604
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078604(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short local_260 [2];
  undefined1 auStack_25c [264];
  undefined4 local_154 [2];
  undefined1 auStack_14c [8];
  undefined1 auStack_144 [256];
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if (iVar1 != 0) {
    uVar2 = FUN_1007717c();
    iVar3 = FUN_100f5278(iVar1,uVar2);
    if (iVar3 != 0) {
      FUN_10077570(iVar1,param_2,param_3);
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_3c = _DAT_41820010;
      _DAT_41820010 = auStack_144;
      iVar3 = FUN_10000090(auStack_144);
      if (iVar3 != 0) {
        return;
      }
      FUN_100b02d0(local_154);
      FUN_10077600(iVar1,param_2,param_3,auStack_25c,local_154,auStack_14c,local_260);
      FUN_10077a00(iVar1,param_2,param_3,auStack_25c,local_154[0],auStack_14c,(int)local_260[0]);
      _DAT_41820010 = (undefined1 *)local_3c;
      return;
    }
  }
  FUN_10107f60(param_1,param_2,param_3);
  return;
}



// Function: FUN_1007878c at 1007878c
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007878c(void)

{
  undefined4 uVar1;
  undefined4 in_r6;
  undefined4 uStack00000024;
  
  if (*(char *)(_DAT_57c407bd + 0x99) == '\0') {
    uStack00000024 = in_r6;
    uVar1 = FUN_10111ba8();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100787dc at 100787dc
// Size: 128 bytes

undefined4 * FUN_100787dc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xf8), param_1 != (undefined4 *)0x0)) {
    FUN_100e0ca0(param_1);
    *param_1 = 0xbba1fff4;
    FUN_101175c4(param_1 + 0x32,3,0x10,&DAT_4e800020);
  }
  return param_1;
}



// Function: FUN_1007885c at 1007885c
// Size: 40 bytes

void FUN_1007885c(void)

{
  FUN_100787dc(0);
  return;
}



// Function: FUN_10078884 at 10078884
// Size: 56 bytes

void FUN_10078884(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x838));
  return;
}



// Function: FUN_100788bc at 100788bc
// Size: 252 bytes

void FUN_100788bc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [24];
  
  iVar5 = 0;
  do {
    FUN_100e1a64(auStack_30,param_1 + iVar5 * 0x10 + 200);
    iVar1 = FUN_100e11fc(param_1 + 0x34,auStack_30);
    if (iVar1 != 0) break;
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 3);
  if (iVar5 == 3) {
    iVar5 = 2;
  }
  FUN_100e10b0(&local_38,param_1 + 0x2c,param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  iVar1 = param_1 + iVar5 * 0x10;
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar1 + 0xcc) = uVar2;
  *(undefined4 *)(iVar1 + 0xd0) = local_38;
  *(undefined4 *)(iVar1 + 0xd4) = local_34;
  iVar5 = (int)(short)((short)iVar5 + 1);
  if (iVar5 == 3) {
    iVar5 = 0;
  }
  param_1 = param_1 + iVar5 * 0x10;
  uVar2 = *(undefined4 *)(param_1 + 0xcc);
  uVar3 = *(undefined4 *)(param_1 + 0xd0);
  uVar4 = *(undefined4 *)(param_1 + 0xd4);
  *param_3 = *(undefined4 *)(param_1 + 200);
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  return;
}



// Function: FUN_100789c0 at 100789c0
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100789c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    *puVar1 = _FUN_10116248;
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  return puVar1;
}



// Function: FUN_10078a2c at 10078a2c
// Size: 4 bytes

void FUN_10078a2c(void)

{
  return;
}



// Function: FUN_10078a30 at 10078a30
// Size: 384 bytes

int * FUN_10078a30(int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar3 = (int *)0x0;
  if (param_2 != 0x20202020) {
    piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,param_2);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_10117884(**(int **)(local_4c + -0x1e4) +
                                   (int)*(short *)(*(int *)**(int **)(local_4c + -0x1e4) + 0xd0),
                                   piVar2[10],piVar2,(int)param_3,param_4);
    }
    FUN_100db26c(piVar3);
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0x20202020) {
    if (iVar1 == param_2) goto LAB_10078b94;
    piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),iVar1);
    if (piVar2 != (int *)0x0) {
      local_28 = 0xffff8300;
      local_24 = 0xffff8300;
      FUN_10117884((int)*(short *)(*piVar2 + 0x370) + (int)piVar2,&local_28,0);
    }
  }
  if ((*(int *)(param_1 + 0x34) != param_2) && (piVar3 != (int *)0x0)) {
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x370),param_4,0);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
  }
LAB_10078b94:
  *(int *)(param_1 + 0x34) = param_2;
  return piVar3;
}



// Function: FUN_10078bb0 at 10078bb0
// Size: 84 bytes

void FUN_10078bb0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_100019c8(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_100bf654(param_1);
  return;
}



// Function: FUN_10078c04 at 10078c04
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078c04(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  
  FUN_100462c8(0x1d);
  local_18 = CONCAT22(_DAT_607c0006,_DAT_607c0004);
  *param_3 = local_18;
  return;
}



// Function: FUN_10078c58 at 10078c58
// Size: 32 bytes

void FUN_10078c58(void)

{
  return;
}



// Function: FUN_10078c94 at 10078c94
// Size: 616 bytes

void FUN_10078c94(int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_94;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  piVar4 = *(int **)(param_1 + 8);
  if (param_2 != *(int *)(param_1 + 0x24)) {
    piVar1 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                 *(int *)(param_1 + 0x24));
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x410),0x6f75746c);
    if (iVar2 != 0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x3f8) + (int)piVar1,iVar2,param_3);
      FUN_10117884((int)*(short *)(*piVar1 + 0x780) + (int)piVar1,*(undefined4 *)(local_94 + -0xc64)
                   ,param_3);
      FUN_10117884((int)*(short *)(*piVar1 + 0x618) + (int)piVar1,auStack_50);
      local_58 = 4;
      local_54 = 4;
      FUN_100e16b8(auStack_50,&local_58);
      FUN_10117884((int)*(short *)(*piVar1 + 0x350) + (int)piVar1,auStack_50,param_3);
    }
  }
  *(int *)(param_1 + 0x24) = param_2;
  piVar4 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),param_2);
  if ((piVar4 != (int *)0x0) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar4 + 0x410) + (int)piVar4,0x6f75746c), iVar2 == 0))
  {
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x618),auStack_68);
    local_70 = 0xfffffffc;
    local_6c = 0xfffffffc;
    FUN_100e16b8(auStack_68,&local_70);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x350),auStack_68,param_3);
    local_40 = 4;
    local_3c = 4;
    local_38 = 4;
    local_34 = 4;
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x780),&local_40,param_3);
    uVar3 = FUN_100b2bb4(0);
    FUN_100b444c(uVar3,0x6f75746c,1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x3f0),uVar3,0x7f,param_3);
  }
  return;
}



// Function: FUN_10078efc at 10078efc
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078efc(void)

{
  FUN_100c1c8c(0x4beec029,_DAT_bf61ffec,200,&DAT_90010008,0x33fb0001);
  FUN_100c1c8c(&DAT_80010050,_DAT_9421ffb0,200,0x60bd0000,0x7c7e1814);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_609c0000,0xf8,&DAT_607f0000,&DAT_80010050);
  FUN_100c1c8c(&DAT_281f0000,_DAT_80df0004,0x40,&DAT_2c060000,&DAT_4082000c);
  return;
}



// Function: FUN_10078fa4 at 10078fa4
// Size: 8 bytes

undefined1 * FUN_10078fa4(void)

{
  return &DAT_41820018;
}



// Function: FUN_10078fb4 at 10078fb4
// Size: 104 bytes

undefined4 * FUN_10078fb4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa8), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = 0x88ff0030;
  }
  return param_1;
}



// Function: FUN_1007901c at 1007901c
// Size: 40 bytes

void FUN_1007901c(void)

{
  FUN_10078fb4(0);
  return;
}



// Function: FUN_10079044 at 10079044
// Size: 284 bytes

void FUN_10079044(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_100c7804(param_1,param_2,param_3);
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7f8));
  if (iVar2 != 0) {
    FUN_100e1a64(auStack_28,param_2);
    if ((uint)(local_24 < 0x71) == (int)local_24 >> 0x1f) {
      uVar4 = 0x6c62616b;
      uVar3 = 0x3f0;
    }
    else {
      uVar4 = 0x7362616b;
      uVar3 = 0x3f1;
    }
    local_20 = 0;
    local_1c = 0;
    FUN_10078a30(iVar2,uVar4,uVar3,&local_20,param_3);
    FUN_100db26c();
    FUN_1003f6e8();
  }
  return;
}



// Function: FUN_10079160 at 10079160
// Size: 116 bytes

void FUN_10079160(int *param_1)

{
  undefined1 auStack_18 [16];
  
  FUN_10105d28(param_1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),auStack_18,1);
  return;
}



// Function: FUN_100791dc at 100791dc
// Size: 128 bytes

undefined4 * FUN_100791dc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = &DAT_4182000c;
  }
  return param_1;
}



// Function: FUN_1007925c at 1007925c
// Size: 40 bytes

void FUN_1007925c(void)

{
  FUN_100791dc(0);
  return;
}



// Function: FUN_10079284 at 10079284
// Size: 600 bytes

void FUN_10079284(undefined4 param_1,uint param_2)

{
  if ((param_2 < 0x73637230) || (0x73637237 < param_2)) {
    if (param_2 == 0x64657365) {
      FUN_1009e534(0xb5);
    }
    else {
      if ((int)param_2 < 0x64657366) {
        if (param_2 == 0x62757433) {
          FUN_1009e534(0xb8);
          return;
        }
        if ((int)param_2 < 0x62757434) {
          if (param_2 == 0x62757431) {
            FUN_1009e534(0xb6);
            return;
          }
          if (param_2 == 0x62757432) {
            FUN_1009e534(0xb7);
            return;
          }
        }
        else {
          if (param_2 == 0x63656e74) {
            FUN_1009e534(0xb4);
            return;
          }
          if ((int)param_2 < 0x63656e75) {
            if (param_2 == 0x62757434) {
              FUN_1009e534(0xb9);
              return;
            }
          }
          else if (param_2 == 0x64656c65) {
            FUN_1009e534(0xbe);
            return;
          }
        }
      }
      else {
        if (param_2 == 0x6c656176) {
          FUN_1009e534(0xb2);
          return;
        }
        if ((int)param_2 < 0x6c656177) {
          if (param_2 == 0x67756172) {
            FUN_1009e534(0xb3);
            return;
          }
          if ((int)param_2 < 0x67756173) {
            if (param_2 == 0x6469706c) {
              FUN_1009e534(0xba);
              return;
            }
          }
          else if (param_2 == 0x68656c70) {
            FUN_1009e534(0xbf);
            return;
          }
        }
        else {
          if (param_2 == 0x6e657874) {
            FUN_1009e534(0xb1);
            return;
          }
          if ((int)param_2 < 0x6e657875) {
            if (param_2 == 0x6d6f7665) {
              FUN_1009e534(0xb0);
              return;
            }
          }
          else if (param_2 == 0x70617468) {
            FUN_1009e534(0xbd);
            return;
          }
        }
      }
      FUN_10078c58();
    }
  }
  else {
    FUN_1009e534((int)(short)((short)param_2 + -0x70ed));
  }
  return;
}



// Function: FUN_100794dc at 100794dc
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100794dc(void)

{
  FUN_100c1c8c(&DAT_41820018,_DAT_38600000,0xa8,&DAT_48000064,&DAT_9421ffc0);
  FUN_100c1c8c(0x7ce70775,_DAT_3bc00000,0x40,&DAT_3b600000,&DAT_281f0000);
  return;
}



// Function: FUN_10079538 at 10079538
// Size: 8 bytes

undefined4 FUN_10079538(void)

{
  return 0x2c880000;
}



// Function: FUN_10079548 at 10079548
// Size: 108 bytes

undefined4 * FUN_10079548(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = 0x80bf0018;
  }
  return puVar1;
}



// Function: FUN_100795b4 at 100795b4
// Size: 560 bytes

void FUN_100795b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x696e666f) {
    FUN_10025c68();
    return;
  }
  if (iVar1 < 0x696e6670) {
    if (iVar1 == 0x61726d34) {
LAB_10079720:
      FUN_10047fc8((int)(short)((short)*(undefined4 *)(param_3 + 0x18) + -0x6d31));
      return;
    }
    if (iVar1 < 0x61726d35) {
      if (iVar1 == 0x61726d32) goto LAB_10079720;
      if (iVar1 < 0x61726d33) {
        if (iVar1 == 0x61726d31) goto LAB_10079720;
      }
      else if (iVar1 == 0x61726d33) goto LAB_10079720;
    }
    else {
      if (iVar1 == 0x62757072) {
        FUN_10049930();
        return;
      }
      if (iVar1 < 0x62757073) {
        if (iVar1 == 0x6275696c) {
          FUN_10025d10();
          return;
        }
      }
      else if (iVar1 == 0x64657374) {
        FUN_10048788(1);
        return;
      }
    }
  }
  else {
    if (iVar1 == 0x72656e61) {
      FUN_10025e44();
      return;
    }
    if (iVar1 < 0x72656e62) {
      if (iVar1 == 0x70726f64) {
        FUN_10025ca0();
        return;
      }
      if (iVar1 < 0x70726f65) {
        if (iVar1 == 0x6f766572) {
          FUN_10025d48((ushort)((uint)param_2 >> 8) & 0x7f,(ushort)param_2 & 0xff,1);
          return;
        }
      }
      else if (iVar1 == 0x72617a65) {
        FUN_1004f388();
        return;
      }
    }
    else {
      if (iVar1 == 0x73746f70) {
        FUN_10048054();
        return;
      }
      if (iVar1 < 0x73746f71) {
        if (iVar1 == 0x73656520) {
          FUN_10048788(2);
          return;
        }
      }
      else {
        if (iVar1 == 0x746f2020) {
          FUN_10048788(0);
          return;
        }
        if (iVar1 == 0x76656374) {
          FUN_10025cd8();
          return;
        }
      }
    }
  }
  FUN_100d5934();
  return;
}



// Function: FUN_100797e4 at 100797e4
// Size: 1036 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100797e4(int param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0x6f766572) {
    FUN_1000a9e4(0,0,0);
    if (4 < _DAT_63e30000) {
      return;
    }
    return;
  }
  if (param_2 == 0x70696374) {
    FUN_1000a9e4(0,0,0);
    FUN_1000aaa8(_DAT_4bffe775 + (short)_DAT_63e30000 * 0x42 + 0x1608,0xa91f0060);
    return;
  }
  if (((*(int *)(param_1 + 0x34) == 0x6962616b) && (0x61726d30 < param_2)) && (param_2 < 0x61726d35)
     ) {
    iVar3 = (int)(short)((short)param_2 + -0x6d31);
    iVar2 = _DAT_4bffe775 + (short)_DAT_63e30000 * 0x42;
    if (-1 < *(char *)(iVar2 + iVar3 + 0x161a)) {
      uVar1 = *(undefined2 *)(_DAT_4bffe775 + 0x110);
      *(short *)(_DAT_4bffe775 + 0x110) = (short)*(char *)(iVar2 + 0x1619);
      iVar3 = _DAT_4bffe775 + (short)_DAT_63e30000 * 0x42 + iVar3;
      FUN_1000ba58((int)*(char *)(iVar3 + 0x161a),(int)*(char *)(iVar3 + 0x161e),
                   (int)*(char *)(iVar3 + 0x1622),(int)*(char *)(iVar3 + 0x162a),
                   (int)*(char *)(iVar3 + 0x1626),0,0);
      *(undefined2 *)(_DAT_4bffe775 + 0x110) = uVar1;
      return;
    }
    FUN_1000a9e4(0,0,0);
    FUN_1000aaa8(_DAT_4bffe775 + (short)_DAT_63e30000 * 0x42 + 0x1608,0xa91f0078);
    return;
  }
  if (param_2 == 0x696e666f) {
    FUN_1009e534(0xc4);
    return;
  }
  if ((int)param_2 < 0x696e6670) {
    if (param_2 == 0x61726d34) {
LAB_10079bfc:
      FUN_1009e534((int)(short)((short)param_2 + -0x6c69));
      return;
    }
    if ((int)param_2 < 0x61726d35) {
      if (param_2 == 0x61726d32) goto LAB_10079bfc;
      if ((int)param_2 < 0x61726d33) {
        if (param_2 == 0x61726d31) goto LAB_10079bfc;
      }
      else if (param_2 == 0x61726d33) goto LAB_10079bfc;
    }
    else {
      if (param_2 == 0x62757072) {
        FUN_1009e534(0xcf);
        return;
      }
      if ((int)param_2 < 0x62757073) {
        if (param_2 == 0x6275696c) {
          FUN_1009e534(0xc5);
          return;
        }
      }
      else if (param_2 == 0x64657374) {
        FUN_1009e534(0xd5);
        return;
      }
    }
  }
  else {
    if (param_2 == 0x72656e61) {
      FUN_1009e534(0xce);
      return;
    }
    if ((int)param_2 < 0x72656e62) {
      if (param_2 == 0x70726f64) {
        FUN_1009e534(0xc6);
        return;
      }
      if ((int)param_2 < 0x70726f65) {
        if (param_2 == 0x6f6b2020) {
          FUN_1009e534(0xc3);
          return;
        }
      }
      else if (param_2 == 0x72617a65) {
        FUN_1009e534(0xd0);
        return;
      }
    }
    else {
      if (param_2 == 0x73746f70) {
        FUN_1009e534(0xcd);
        return;
      }
      if ((int)param_2 < 0x73746f71) {
        if (param_2 == 0x73656520) {
          FUN_1009e534(0xd7);
          return;
        }
      }
      else {
        if (param_2 == 0x746f2020) {
          FUN_1009e534(0xd6);
          return;
        }
        if (param_2 == 0x76656374) {
          FUN_1009e534(199);
          return;
        }
      }
    }
  }
  FUN_10078c58();
  return;
}



// Function: FUN_10079d98 at 10079d98
// Size: 8 bytes

undefined1 * FUN_10079d98(void)

{
  return &DAT_57c407ff;
}



// Function: FUN_10079da8 at 10079da8
// Size: 128 bytes

undefined4 * FUN_10079da8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c6b2c(puVar1);
    *puVar1 = &DAT_609e0000;
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((int)puVar1 + 0xaa) = 0;
    *(undefined2 *)(puVar1 + 0x2b) = 0;
    *(undefined2 *)((int)puVar1 + 0xae) = 0;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    *(undefined2 *)((int)puVar1 + 0xb2) = 0;
    *(undefined2 *)(puVar1 + 0x2d) = 1;
    *(undefined2 *)((int)puVar1 + 0xb6) = 0;
    *(undefined2 *)(puVar1 + 0x2e) = 0;
  }
  return puVar1;
}



// Function: FUN_10079e28 at 10079e28
// Size: 188 bytes

void FUN_10079e28(int *param_1)

{
  int local_5c;
  undefined1 auStack_28 [16];
  short local_18;
  short local_16;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,&local_18);
  FUN_1000873c((int)*(short *)(param_1 + 0x2a),(int)*(short *)((int)param_1 + 0xaa),
               *(undefined4 *)(local_5c + -0x1208),(int)local_16,(int)local_18,
               (int)*(short *)(param_1 + 0x2b),(int)*(short *)((int)param_1 + 0xae),
               (int)*(short *)(param_1 + 0x2c));
  FUN_10067270();
  return;
}



// Function: FUN_10079ee8 at 10079ee8
// Size: 128 bytes

void FUN_10079ee8(int *param_1,short param_2,short param_3,char param_4)

{
  if (param_4 == '\0') {
    *(short *)(param_1 + 0x2a) = param_2;
    *(short *)((int)param_1 + 0xaa) = param_3;
  }
  else {
    if ((*(short *)(param_1 + 0x2a) != param_2) || (*(short *)((int)param_1 + 0xaa) != param_3)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0),param_2,param_3,param_4);
    }
    *(short *)(param_1 + 0x2a) = param_2;
    *(short *)((int)param_1 + 0xaa) = param_3;
  }
  return;
}



// Function: FUN_10079f68 at 10079f68
// Size: 176 bytes

void FUN_10079f68(int *param_1,short param_2,short param_3,short param_4,short param_5,char param_6)

{
  if (param_6 == '\0') {
    *(short *)(param_1 + 0x2b) = param_2;
    *(short *)((int)param_1 + 0xae) = param_3;
    *(short *)(param_1 + 0x2c) = param_4;
    *(short *)((int)param_1 + 0xb2) = param_5;
  }
  else {
    if ((((*(short *)(param_1 + 0x2b) != param_2) || (*(short *)((int)param_1 + 0xae) != param_3))
        || (*(short *)(param_1 + 0x2c) != param_4)) || (*(short *)((int)param_1 + 0xb2) != param_5))
    {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    *(short *)(param_1 + 0x2b) = param_2;
    *(short *)((int)param_1 + 0xae) = param_3;
    *(short *)(param_1 + 0x2c) = param_4;
    *(short *)((int)param_1 + 0xb2) = param_5;
  }
  return;
}



// Function: FUN_1007a018 at 1007a018
// Size: 152 bytes

void FUN_1007a018(int *param_1,short param_2,short param_3,short param_4,char param_5)

{
  if (param_5 == '\0') {
    *(short *)(param_1 + 0x2d) = param_2;
    *(short *)((int)param_1 + 0xb6) = param_3;
    *(short *)(param_1 + 0x2e) = param_4;
  }
  else {
    if (((*(short *)(param_1 + 0x2d) != param_2) || (*(short *)((int)param_1 + 0xb6) != param_3)) ||
       (*(short *)(param_1 + 0x2e) != param_4)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    *(short *)(param_1 + 0x2d) = param_2;
    *(short *)((int)param_1 + 0xb6) = param_3;
    *(short *)(param_1 + 0x2e) = param_4;
  }
  return;
}



// Function: FUN_1007a0b0 at 1007a0b0
// Size: 8 bytes

undefined1 * FUN_1007a0b0(void)

{
  return &DAT_4186001c;
}



// Function: FUN_1007a0c0 at 1007a0c0
// Size: 104 bytes

undefined4 * FUN_1007a0c0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb4), param_1 != (undefined4 *)0x0)) {
    FUN_100cdb5c(param_1);
    *param_1 = 0x813f0004;
  }
  return param_1;
}



// Function: FUN_1007a128 at 1007a128
// Size: 40 bytes

void FUN_1007a128(void)

{
  FUN_1007a0c0(0);
  return;
}



// Function: FUN_1007a150 at 1007a150
// Size: 428 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a150(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _FUN_10116698;
  FUN_100d0c54(param_1);
  iVar2 = _DAT_4bffe775 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((uint)*(undefined4 *)
                             (_DAT_38800000 + *(short *)(iVar2 + 0x1606) * 0xe0 +
                             *(short *)(iVar2 + 0x1604) * 2) >> 0x18),uVar1,0x51,0xe);
  iVar2 = _DAT_4bffe775 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((uint)*(undefined4 *)
                             (_DAT_38800000 + *(short *)(iVar2 + 0x1606) * 0xe0 +
                              *(short *)(iVar2 + 0x1604) * 2 + 0xe0) >> 0x18),uVar1,0x51,0x36);
  iVar2 = _DAT_4bffe775 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((uint)*(undefined4 *)
                             (_DAT_38800000 + *(short *)(iVar2 + 0x1606) * 0xe0 +
                              *(short *)(iVar2 + 0x1604) * 2 + 2) >> 0x18),uVar1,0x79,0xe);
  iVar2 = _DAT_4bffe775 + *(short *)(param_1 + 0xb0) * 0x42;
  FUN_1000865c((char)((uint)*(undefined4 *)
                             (_DAT_38800000 + *(short *)(iVar2 + 0x1606) * 0xe0 +
                              *(short *)(iVar2 + 0x1604) * 2 + 0xe2) >> 0x18),uVar1,0x79,0x36);
  return;
}



// Function: FUN_1007a2fc at 1007a2fc
// Size: 136 bytes

void FUN_1007a2fc(undefined4 param_1,short param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_34;
  
  uVar1 = FUN_100014b8();
  piVar2 = *(int **)(*(int *)(**(int **)(local_34 + -0x554) + 0x88) + 0x14c);
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8));
  FUN_100d0e58(param_1,(int)param_2,param_3);
  FUN_10000318(uVar1);
  return;
}



// Function: FUN_1007a384 at 1007a384
// Size: 8 bytes

undefined1 * FUN_1007a384(void)

{
  return &DAT_2f090000;
}



// Function: FUN_1007a394 at 1007a394
// Size: 108 bytes

undefined4 * FUN_1007a394(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = 0x7c85f010;
  }
  return puVar1;
}



// Function: FUN_1007a400 at 1007a400
// Size: 212 bytes

void FUN_1007a400(undefined4 param_1,uint param_2)

{
  if (param_2 == 0x646f6e65) {
    FUN_1009e534(399);
  }
  else if ((param_2 < 0x70726f30) || (0x70726f33 < param_2)) {
    if ((param_2 < 0x61726d30) || (0x61726d43 < param_2)) {
      FUN_10078c58();
    }
    else {
      FUN_1009e534((int)(short)((short)param_2 + -0x6b9c));
    }
  }
  else {
    FUN_1009e534((int)(short)((short)param_2 + -0x6da0));
  }
  return;
}



// Function: FUN_1007a4d4 at 1007a4d4
// Size: 116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a4d4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_18;
  
  if (param_2 == 0x646f6e65) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_18 = CONCAT22(_DAT_607c0006,_DAT_607c0004);
  *param_3 = local_18;
  return;
}



// Function: FUN_1007a548 at 1007a548
// Size: 8 bytes

undefined4 FUN_1007a548(void)

{
  return 0x419a0010;
}



// Function: FUN_1007a558 at 1007a558
// Size: 128 bytes

undefined4 * FUN_1007a558(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c6b2c(puVar1);
    *(undefined2 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((int)puVar1 + 0xaa) = 0;
    *(undefined2 *)(puVar1 + 0x2b) = 0;
    *(undefined2 *)((int)puVar1 + 0xae) = 0;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    *(undefined2 *)((int)puVar1 + 0xb2) = 0;
    *(undefined2 *)(puVar1 + 0x2d) = 1;
    *(undefined2 *)((int)puVar1 + 0xb6) = 0;
    *(undefined2 *)(puVar1 + 0x2e) = 0;
    *puVar1 = &DAT_807f0028;
  }
  return puVar1;
}



// Function: FUN_1007a5d8 at 1007a5d8
// Size: 136 bytes

void FUN_1007a5d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uStack00000024;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uStack00000024 = param_4;
  if ((uVar1 < 0x70726f30) || (0x70726f33 < uVar1)) {
    FUN_10049aec((int)(short)((short)*(undefined4 *)(param_1 + 0x18) + -0x6d30));
  }
  else {
    FUN_10049e34((int)(short)((short)uVar1 + -0x6f30));
  }
  return;
}



// Function: FUN_1007a678 at 1007a678
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a678(void)

{
  FUN_100c1c8c(0x2c880000,_DAT_61230000,0x40,0x4bfdf461,&DAT_281f0000);
  FUN_100c1c8c(&DAT_57c407ff,_DAT_60000000,0xbc,0x93df0004,&DAT_9421ffc0);
  FUN_100c1c8c(&DAT_4186001c,_DAT_7c1ef040,0xb4,0x4081000c,&DAT_419e0020);
  FUN_100c1c8c(&DAT_2f090000,_DAT_7d3ef010,0x40,&DAT_48000008,&DAT_281f0000);
  FUN_100c1c8c(0x419a0010,_DAT_39200000,0xbc,0x913f0020,&DAT_57c407ff);
  return;
}



// Function: FUN_1007a748 at 1007a748
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a748(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  
  _DAT_83ea0000 = FUN_10001218(1000);
  uVar1 = FUN_10001230(1000);
  **(undefined4 **)(local_3c + -0x1cc) = uVar1;
  FUN_10001248(_DAT_83ea0000,uVar1);
  iVar2 = 0;
  do {
    uVar1 = FUN_100b2264(iVar2 * 6 + 0x408600a0);
    FUN_10001278(_DAT_83ea0000,iVar2,uVar1);
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x100);
  _DAT_2c9dffff = FUN_10001218(0x3e9);
  uVar1 = FUN_10001230(0x3e9);
  **(undefined4 **)(local_3c + -0x1c8) = uVar1;
  FUN_10001248(_DAT_2c9dffff,uVar1);
  _DAT_8142fb7c = FUN_10001218(0x3ec);
  uVar1 = FUN_10001230(0x3ec);
  **(undefined4 **)(local_3c + -0x1c4) = uVar1;
  FUN_10001248(_DAT_8142fb7c,uVar1);
  return;
}



// Function: FUN_1007a858 at 1007a858
// Size: 52 bytes

void FUN_1007a858(void)

{
  FUN_101175c4(0x408600a0,0x100,6,0xb37f0000);
  return;
}



// Function: FUN_1007a894 at 1007a894
// Size: 104 bytes

undefined4 * FUN_1007a894(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x30), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = &DAT_63840000;
  }
  return param_1;
}



// Function: FUN_1007a8fc at 1007a8fc
// Size: 40 bytes

void FUN_1007a8fc(void)

{
  FUN_1007a894(0);
  return;
}



// Function: FUN_1007a924 at 1007a924
// Size: 56 bytes

void FUN_1007a924(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x18) + (int)*(short *)(**(int **)(param_1 + 0x18) + 0x90));
  return;
}



// Function: FUN_1007a95c at 1007a95c
// Size: 56 bytes

void FUN_1007a95c(undefined4 param_1,undefined4 param_2)

{
  FUN_100c3df8(param_1,0xffffffff,param_2,0,0,0);
  return;
}



// Function: FUN_1007a99c at 1007a99c
// Size: 92 bytes

undefined4 * FUN_1007a99c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_38800002;
    puVar1[0xc] = 0;
  }
  return puVar1;
}



// Function: FUN_1007a9f8 at 1007a9f8
// Size: 60 bytes

void FUN_1007a9f8(int param_1)

{
  FUN_100da1d0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30));
  return;
}



// Function: FUN_1007aa3c at 1007aa3c
// Size: 92 bytes

undefined4 * FUN_1007aa3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_3860ffff;
    puVar1[0xc] = 0;
  }
  return puVar1;
}



// Function: FUN_1007aa98 at 1007aa98
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007aa98(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  FUN_100da1d0(uVar1,*(undefined4 *)(param_1 + 0x30));
  return;
}



// Function: FUN_1007aaec at 1007aaec
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007aaec(void)

{
  FUN_100c1c8c(&DAT_63e30000,_DAT_60000000,0x30,&DAT_80010058,&DAT_41820070);
  FUN_100c1c8c(&DAT_63a50000,_DAT_30210050,0x34,&DAT_7c0803a6,&DAT_41820070);
  FUN_100c1c8c(0x48000785,_DAT_bb61ffec,0x34,&DAT_4e800020,&DAT_41820070);
  return;
}



// Function: FUN_1007ab7c at 1007ab7c
// Size: 232 bytes

undefined4 * FUN_1007ab7c(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1ec), param_1 != (undefined4 *)0x0)) {
    FUN_100dd9e0(param_1);
    *param_1 = &DAT_9421ffc8;
    *(undefined1 *)(param_1 + 0x51) = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0x5dd;
    param_1[0x5a] = 0x709;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    *(undefined1 *)((int)param_1 + 0x16d) = 1;
    *(undefined1 *)((int)param_1 + 0x16e) = 0;
    *(undefined1 *)((int)param_1 + 0x16f) = 0;
    *(undefined1 *)((int)param_1 + 0x1d6) = 0;
    param_1[0x76] = 0;
    iVar1 = 0;
    do {
      param_1[iVar1 + 0x5c] = 0;
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 8);
    *(undefined2 *)(param_1 + 100) = 0x8000;
  }
  return param_1;
}



// Function: FUN_1007ac64 at 1007ac64
// Size: 40 bytes

void FUN_1007ac64(void)

{
  FUN_1007ab7c(0);
  return;
}



// Function: FUN_1007ac8c at 1007ac8c
// Size: 848 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ac8c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_1a8;
  short local_1a4 [2];
  int local_1a0;
  int local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  undefined1 local_18c [64];
  undefined1 auStack_14c [256];
  short local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  FUN_100dda84(param_1);
  *(undefined1 *)(param_1 + 0x16c) = param_4;
  *(undefined1 *)(param_1 + 0x16d) = 1;
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  local_190 = (int *)0x0;
  local_194 = (int *)0x0;
  local_198 = (int *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_44 = _DAT_41820010;
  _DAT_41820010 = auStack_14c;
  iVar1 = FUN_10000090(auStack_14c);
  if (iVar1 == 0) {
    local_18c[0] = 0;
    local_190 = (int *)FUN_100df14c(0);
    FUN_100df1f8(local_190,param_1,0);
    local_18c[0] = 0;
    FUN_10117884((int)local_190 + (int)*(short *)(*local_190 + 0xe8),local_18c);
    FUN_10001908(&local_1a0);
    FUN_10002b08(0xffff8000,0x74656d70,1,local_1a4,&local_1a8);
    FUN_100db2f4();
    local_194 = (int *)FUN_100db3c8(0);
    FUN_100db49c(local_194,0x20202020,0x20202020,1,2,0,0);
    FUN_10117884((int)local_194 + (int)*(short *)(*local_194 + 0x2a0),3,3);
    FUN_10117884((int)local_194 + (int)*(short *)(*local_194 + 0xd0),(int)local_1a4[0],local_1a8,
                 local_18c);
    FUN_100db2f4();
    FUN_10117884((int)local_194 + (int)*(short *)(*local_194 + 0xf8));
    FUN_100db2f4();
    *(int **)(param_1 + 0x15c) = local_194;
    local_18c[0] = 0;
    do {
      FUN_10001908(&local_19c);
    } while (local_19c == local_1a0);
    FUN_10117884((int)local_190 + (int)*(short *)(*local_190 + 0xe8),local_18c);
    local_190 = (int *)FUN_100f57c8(local_190);
    local_198 = (int *)FUN_100db3c8(0);
    FUN_100db49c(local_198,0x20202020,0x20202020,1,2,0,0);
    FUN_10117884((int)local_198 + (int)*(short *)(*local_198 + 0xd0),(int)local_1a4[0],local_1a8,
                 local_18c);
    FUN_100db2f4();
    FUN_10117884((int)local_198 + (int)*(short *)(*local_198 + 0xf8));
    FUN_100db2f4();
    FUN_10117884((int)local_198 + (int)*(short *)(*local_198 + 0x2a0),3,3);
    *(int **)(param_1 + 0x160) = local_198;
    _DAT_41820010 = local_44;
  }
  else {
    local_190 = (int *)FUN_100f57c8(local_190);
    local_194 = (int *)FUN_100f57c8(local_194);
    *(undefined4 *)(param_1 + 0x15c) = 0;
    local_198 = (int *)FUN_100f57c8(local_198);
    *(undefined4 *)(param_1 + 0x160) = 0;
    FUN_100db158((int)local_4c,local_48);
  }
  return;
}



// Function: FUN_1007afdc at 1007afdc
// Size: 384 bytes

int FUN_1007afdc(short param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar6;
  undefined2 uVar5;
  int iVar4;
  int iVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  int *local_24 [2];
  
  iVar7 = (int)param_1;
  iVar1 = FUN_10000be8(param_2);
  if (iVar1 == 0x73746466) {
    iVar1 = 100;
    if (iVar7 == -1) {
      uVar2 = FUN_100b0574(auStack_2c);
      FUN_10002730(param_2,0xd,auStack_30,local_24,uVar2);
      if (*(char *)(param_3 + 0x16d) == '\0') {
        cVar6 = '\x01';
      }
      else {
        cVar6 = *(char *)(param_3 + 0x16c);
      }
      if (cVar6 == '\0') {
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
      }
      FUN_10001d10(local_24[0],uVar5);
      iVar7 = iVar1;
      if (((*(char *)(param_3 + 0x16d) == '\0') &&
          (*(undefined4 **)(*local_24[0] + 0x1c) != (undefined4 *)0x0)) &&
         (iVar4 = *(int *)**(undefined4 **)(*local_24[0] + 0x1c), iVar4 != 0)) {
        FUN_10002358(iVar4,2);
      }
    }
    else if (iVar7 == 0xd) {
      uVar2 = FUN_100b0574(auStack_2c);
      FUN_10002730(param_2,0xd,auStack_30,local_24,uVar2);
      uVar3 = FUN_10001c50(local_24[0]);
      *(char *)(param_3 + 0x16c) =
           ('\x01' - ((1 < uVar3) + '\x01')) + (uVar3 != 0 && (uint)(1 < uVar3) <= uVar3 - 1);
      iVar7 = iVar1;
    }
  }
  return iVar7;
}



// Function: FUN_1007b15c at 1007b15c
// Size: 120 bytes

void FUN_1007b15c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x16c) == '\0') {
    uVar2 = 0x57324d53;
  }
  else {
    uVar2 = 0x57325347;
  }
  if (*(char *)(param_1 + 0x16c) == '\0') {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  FUN_100db500(uVar2,0x57617232,1,uVar1,0,0);
  return;
}



// Function: FUN_1007b218 at 1007b218
// Size: 468 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b218(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xbd6,
                               param_1);
  FUN_100db26c();
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 800));
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x810));
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x328));
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar3 = FUN_10000090(auStack_12c);
  if (iVar3 == 0) {
    if (iVar2 == 0x646f6e65) {
      iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7f8));
      if (iVar2 != 0) {
        FUN_1008b804(iVar2);
      }
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    _DAT_41820010 = local_24;
  }
  else {
    iVar2 = FUN_100f5790(piVar1);
    if (iVar2 != 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    }
    FUN_100db158((int)local_2c,local_28);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),0x3fa);
  return;
}



// Function: FUN_1007b3ec at 1007b3ec
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b3ec(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  _DAT_7c7f1814 = 0;
  _DAT_90df0010 = 0;
  _DAT_63840000 = 0;
  _DAT_80410014 = 0;
  _DAT_60690000 = 0;
  _DAT_48001681 = 0;
  uVar1 = FUN_100e91b4(*(undefined4 *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_100e91b4(*(undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x154));
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  piVar2 = *(int **)(param_1 + 0x15c);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x110));
  }
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  piVar2 = *(int **)(param_1 + 0x160);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x110));
  }
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x160));
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  FUN_100ddc10(param_1);
  return;
}



// Function: FUN_1007b52c at 1007b52c
// Size: 876 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b52c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar7;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar8;
  int local_1cc;
  undefined4 local_1a8 [2];
  undefined1 auStack_1a0 [80];
  int *local_150;
  char local_14c;
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  puVar8 = local_1a8;
  uVar7 = FUN_100f1574(1);
  piVar4 = (int *)FUN_10001fc8(0x54);
  **(undefined1 **)(local_1cc + -0x3c) = uVar7;
  if (piVar4 != (int *)0x0) {
    local_48 = 0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_40 = _DAT_41820010;
    _DAT_41820010 = auStack_148;
    iVar5 = FUN_10000090(auStack_148);
    if (iVar5 == 0) {
      local_150 = piVar4;
      local_14c = FUN_10000360(piVar4);
      FUN_10002598(local_150);
      piVar6 = (int *)FUN_10001ef0();
      *(bool *)*piVar4 = *(int *)(*piVar6 + 0x1e) == 0;
      FUN_100b08d4(puVar8,*(int *)(local_1cc + -0xb0) + 0x56);
      if (*(char *)*piVar4 == '\0') {
        puVar8 = *(undefined4 **)(local_1cc + -0xe60);
      }
      *(undefined4 *)(*piVar4 + 2) = *puVar8;
      uVar3 = _DAT_809f0010;
      uVar2 = _DAT_809f000c;
      uVar1 = _DAT_809f0008;
      piVar6 = (int *)**(int **)(local_1cc + -0x1698);
      if (piVar6 == (int *)0x0) {
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 8) = _DAT_809f0004;
        *(undefined4 *)(iVar5 + 0xc) = uVar1;
        *(undefined4 *)(iVar5 + 0x10) = uVar2;
        *(undefined4 *)(iVar5 + 0x14) = uVar3;
      }
      else {
        FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x618),*piVar4 + 8);
      }
      uVar3 = _DAT_809f0010;
      uVar2 = _DAT_809f000c;
      uVar1 = _DAT_809f0008;
      if (_DAT_63840000 == (int *)0x0) {
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x18) = _DAT_809f0004;
        *(undefined4 *)(iVar5 + 0x1c) = uVar1;
        *(undefined4 *)(iVar5 + 0x20) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = uVar3;
        *(undefined1 *)(*piVar4 + 0x28) = 1;
      }
      else {
        FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x618),*piVar4 + 0x18);
        uVar7 = FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x668));
        *(undefined1 *)(*piVar4 + 0x28) = uVar7;
      }
      uVar3 = _DAT_809f0010;
      uVar2 = _DAT_809f000c;
      uVar1 = _DAT_809f0008;
      if (_DAT_90df0010 == (int *)0x0) {
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x2c) = _DAT_809f0004;
        *(undefined4 *)(iVar5 + 0x30) = uVar1;
        *(undefined4 *)(iVar5 + 0x34) = uVar2;
        *(undefined4 *)(iVar5 + 0x38) = uVar3;
        *(undefined1 *)(*piVar4 + 0x3c) = 1;
      }
      else {
        FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x618),*piVar4 + 0x2c);
        uVar7 = FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x668));
        *(undefined1 *)(*piVar4 + 0x3c) = uVar7;
      }
      uVar3 = _DAT_809f0010;
      uVar2 = _DAT_809f000c;
      uVar1 = _DAT_809f0008;
      if (_DAT_7c7f1814 == (int *)0x0) {
        iVar5 = *piVar4;
        *(undefined4 *)(iVar5 + 0x40) = _DAT_809f0004;
        *(undefined4 *)(iVar5 + 0x44) = uVar1;
        *(undefined4 *)(iVar5 + 0x48) = uVar2;
        *(undefined4 *)(iVar5 + 0x4c) = uVar3;
        *(undefined1 *)(*piVar4 + 0x50) = 1;
      }
      else {
        FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x618),*piVar4 + 0x40);
        uVar7 = FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x668));
        *(undefined1 *)(*piVar4 + 0x50) = uVar7;
      }
      if (&stack0x00000000 != (undefined1 *)0x150) {
        FUN_10001b60(local_150,(int)local_14c);
      }
      FUN_100981f8(auStack_1a0,0x80);
      FUN_100985fc(auStack_1a0,piVar4,0x57696e64,1000,*(undefined4 *)(local_1cc + -0xe4c));
      FUN_100ef510(piVar4);
      _DAT_41820010 = local_40;
      FUN_100982e8(auStack_1a0,2);
    }
    else {
      FUN_100ef510(piVar4);
      FUN_100db158((int)local_48,local_44);
    }
  }
  return;
}



// Function: FUN_1007b8a4 at 1007b8a4
// Size: 408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b8a4(int param_1)

{
  undefined **ppuVar1;
  undefined **local_3c;
  
  FUN_1007b52c(param_1);
  ppuVar1 = &.TVect::OCECToRString;
  if (_DAT_7c7f1814 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_7c7f1814 + 0x328) + (int)_DAT_7c7f1814);
    FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x90));
    ppuVar1 = local_3c;
  }
  _DAT_7c7f1814 = (int *)0x0;
  if (_DAT_90df0010 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_90df0010 + 0x328) + (int)_DAT_90df0010);
    FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x90));
    ppuVar1 = local_3c;
  }
  _DAT_90df0010 = (int *)0x0;
  if (_DAT_63840000 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_63840000 + 0x328) + (int)_DAT_63840000);
    FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x90));
    ppuVar1 = local_3c;
  }
  _DAT_63840000 = (int *)0x0;
  if (_DAT_80410014 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_80410014 + 0x328) + (int)_DAT_80410014);
    FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x90));
    ppuVar1 = local_3c;
  }
  _DAT_80410014 = (int *)0x0;
  *(undefined4 *)ppuVar1[-0x53d] = 0;
  *(undefined4 *)ppuVar1[-0x5a7] = 0;
  *(undefined1 *)(param_1 + 0x1d6) = 1;
  *(undefined1 *)(_DAT_57c407bd + 0x9a) = 0;
  FUN_100d6e64(param_1);
  return;
}



// Function: FUN_1007ba3c at 1007ba3c
// Size: 1648 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ba3c(int *param_1,char param_2,char param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_2bc;
  undefined1 auStack_298 [80];
  undefined1 auStack_248 [256];
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_30;
  
  local_30 = (int *)0x0;
  if (param_2 != '\0') {
    FUN_100981f8(auStack_298,0x80);
    puVar2 = (undefined4 *)FUN_10098320(auStack_298,0x53657475,1000);
    param_3 = puVar2 == (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      param_3 = *(char *)*puVar2 == '\0';
    }
    FUN_100ef510(puVar2);
    FUN_100982e8(auStack_298,2);
  }
  if (param_3 == '\0') {
    uVar7 = 0xbcc;
  }
  else {
    uVar7 = 0xbd0;
  }
  local_30 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),uVar7,
                                 param_1);
  FUN_100db26c();
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar3 = FUN_10000090(auStack_148);
  if (iVar3 == 0) {
    if (param_2 == '\0') {
      FUN_10057e5c(0xffffffff,0,local_30);
      FUN_100584c8(local_30);
      FUN_100586a0(local_30);
    }
    else {
      **(undefined2 **)(local_2bc + -0x159c) = 0;
      FUN_1005887c(1,1,1,0,local_30);
      FUN_10045170();
      FUN_10045ac8();
    }
    if (*(short *)(_DAT_4bffe775 + 0x12e) == 0) {
      FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 0x7f8));
      FUN_1008a100();
      piVar4 = (int *)FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 0x308),0x67726561);
      if (piVar4 != (int *)0x0) {
        FUN_10117884((int)*(short *)(*piVar4 + 0x850) + (int)piVar4,
                     *(ushort *)(_DAT_4bffe775 + 0x116) & 0xff,0);
      }
      piVar4 = (int *)FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 0x308),0x73696465);
      if (piVar4 != (int *)0x0) {
        bVar1 = false;
        iVar3 = 0;
        do {
          piVar5 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),
                                       iVar3 + 0x73696430);
          if (piVar5 != (int *)0x0) {
            FUN_100b19f4(auStack_248,_DAT_4bffe775 + iVar3 * 0x14);
            FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x818),auStack_248,0);
            FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x738),
                         *(short *)(_DAT_4bffe775 + iVar3 * 2 + 0x138) == 0,0);
          }
          iVar8 = _DAT_4bffe775 + iVar3 * 2;
          if (*(short *)(iVar8 + 0x138) == 0) {
            piVar5 = (int *)FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x308),
                                         iVar3 + 0x73686930);
            if (piVar5 != (int *)0x0) {
              FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x660),0,0);
            }
          }
          else if ((bVar1) || (*(short *)(iVar8 + 0xd0) != 0)) {
            *(undefined2 *)(_DAT_4bffe775 + iVar3 * 2 + 0xd0) = 1;
          }
          else {
            FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),iVar3 + 0x73696430);
            *(undefined2 *)(iVar3 * 2 + _DAT_4bffe775 + 0xd0) = 0;
            bVar1 = true;
          }
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 < 8);
        if (!bVar1) {
          iVar3 = 0;
          do {
            if (*(short *)(_DAT_4bffe775 + iVar3 * 2 + 0x138) != 0) {
              FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),iVar3 + 0x73696430);
              *(undefined2 *)(_DAT_4bffe775 + iVar3 * 2 + 0xd0) = 0;
            }
            iVar3 = (int)(short)((short)iVar3 + 1);
          } while (iVar3 < 8);
        }
      }
      piVar4 = (int *)FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 0x308),0x636f6d70);
      if (piVar4 != (int *)0x0) {
        iVar3 = 0;
        do {
          iVar8 = _DAT_4bffe775 + iVar3 * 2;
          if (((*(short *)(iVar8 + 0x138) != 0) && (*(short *)(iVar8 + 0xd0) == 1)) &&
             (iVar8 = (int)*(short *)(iVar8 + 0xc0), iVar8 != 3)) break;
          iVar3 = (int)(short)((short)iVar3 + 1);
          iVar8 = 0;
        } while (iVar3 < 8);
        iVar3 = 0;
        do {
          iVar6 = _DAT_4bffe775 + iVar3 * 2;
          if ((*(short *)(iVar6 + 0x138) != 0) && (*(short *)(iVar6 + 0xd0) == 1)) {
            *(short *)(iVar6 + 0xc0) = (short)iVar8;
          }
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 < 8);
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),iVar8 + 0x636f6d30);
      }
      FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 800));
      FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 800));
      piVar4 = (int *)FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 0x308),0x706f7075);
      if (piVar4 != (int *)0x0) {
        FUN_10098f74(piVar4[0x2a]);
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x4d0));
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x4c8));
      }
    }
    _DAT_41820010 = local_40;
  }
  else {
    if (local_30 != (int *)0x0) {
      FUN_10117884((int)local_30 + (int)*(short *)(*local_30 + 0x738));
      local_30 = (int *)0x0;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0));
    FUN_100db158((int)local_48,local_44);
  }
  return;
}



// Function: FUN_1007c0ac at 1007c0ac
// Size: 92 bytes

void FUN_1007c0ac(int param_1)

{
  FUN_100d6b74(param_1);
  if (*(char *)(param_1 + 0x1d6) != '\0') {
    FUN_1007ba3c(param_1,1,1);
  }
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  return;
}



// Function: FUN_1007c108 at 1007c108
// Size: 180 bytes

void FUN_1007c108(int *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    puVar1 = (undefined4 *)FUN_100f56e4(0x34);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100c3d2c(puVar1);
      *puVar1 = &DAT_38800002;
      puVar1[0xc] = 0;
    }
    FUN_100c3df8(puVar1,0x3f3,param_1,0,0,0);
    puVar1[0xc] = 0x3f3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
  }
  return;
}



// Function: FUN_1007c1bc at 1007c1bc
// Size: 1116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007c1bc(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_354;
  undefined1 auStack_330 [72];
  undefined1 auStack_2e8 [72];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [72];
  undefined1 auStack_210 [72];
  undefined4 local_1c8;
  undefined1 *local_1c4;
  undefined1 *local_190;
  undefined1 auStack_188 [72];
  undefined1 local_140 [256];
  int local_40 [2];
  
  FUN_100dddb0(param_1,param_2,param_3,param_4);
  *param_3 = *param_3 + 0x19710;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    *param_4 = *param_4 + 0x1a;
    if (*(char *)(param_1 + 0x16e) != '\0') {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + iVar3 * 4 + 0x170);
        if (iVar2 != 0) {
          iVar2 = FUN_10002a60(iVar2);
          *param_4 = *param_4 + iVar2 + 0x10;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 8);
      *param_4 = *param_4 + 0x20;
    }
    if ((*(char *)(_DAT_57c407bd + 0x9a) != '\0') || (*(char *)(_DAT_57c407bd + 0x99) != '\0')) {
      *param_4 = *param_4 + 0x1a;
    }
  }
  piVar1 = (int *)FUN_100522dc(*(undefined4 *)(param_1 + 0x15c),1,0);
  iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb8));
  *param_3 = *param_3 + iVar3 + 4;
  FUN_100523a8(piVar1,1);
  piVar1 = (int *)FUN_100522dc(*(undefined4 *)(param_1 + 0x160),1,0);
  iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb8));
  *param_3 = *param_3 + iVar3 + 4;
  FUN_100523a8(piVar1,1);
  *param_3 = *param_3 + 0x2610;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    *param_4 = *param_4 + 8;
    local_140[0] = 0;
    local_1c8 = 0x3c;
    local_1c4 = local_140;
    local_190 = auStack_188;
    FUN_10001bd8(**(int **)(local_354 + -0xedc) + 0x32,&local_1c8);
    FUN_100db2f4();
    FUN_10117884((int)*(int **)(param_1 + 0x148) +
                 (int)*(short *)(**(int **)(param_1 + 0x148) + 0x178),auStack_210);
    FUN_100006d8(auStack_188,auStack_210,local_40);
    if (local_40[0] != 0) {
      iVar3 = FUN_10001c20(local_40[0]);
      *param_4 = *param_4 + iVar3 + 0x10;
      local_40[0] = FUN_100ef510(local_40[0]);
    }
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x178),auStack_258);
    FUN_100006d8(auStack_188,auStack_258,local_40);
    if (local_40[0] != 0) {
      iVar3 = FUN_10001c20(local_40[0]);
      *param_4 = *param_4 + iVar3 + 0x10;
      local_40[0] = FUN_100ef510(local_40[0]);
    }
    piVar1 = *(int **)(param_1 + 0x150);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1,auStack_2a0);
      FUN_100006d8(auStack_188,auStack_2a0,local_40);
      if (local_40[0] != 0) {
        iVar3 = FUN_10001c20(local_40[0]);
        *param_4 = *param_4 + iVar3 + 0x10;
        local_40[0] = FUN_100ef510(local_40[0]);
      }
    }
    piVar1 = *(int **)(param_1 + 0x154);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1,auStack_2e8);
      FUN_100006d8(auStack_188,auStack_2e8,local_40);
      if (local_40[0] != 0) {
        iVar3 = FUN_10001c20(local_40[0]);
        *param_4 = *param_4 + iVar3 + 0x10;
        local_40[0] = FUN_100ef510(local_40[0]);
      }
    }
    piVar1 = *(int **)(param_1 + 0x158);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar1 + 0x178) + (int)piVar1,auStack_330);
      FUN_100006d8(auStack_188,auStack_330,local_40);
      if (local_40[0] != 0) {
        iVar3 = FUN_10001c20(local_40[0]);
        *param_4 = *param_4 + iVar3 + 0x10;
        FUN_100ef510(local_40[0]);
      }
    }
  }
  return;
}



// Function: FUN_1007c618 at 1007c618
// Size: 192 bytes

void FUN_1007c618(int *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x10c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_90010008;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0xd) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0x42) = 0;
  }
  FUN_100c3df8(puVar1,0x57a,param_1,1,1,param_1);
  puVar1[0xc] = param_1;
  *(undefined2 *)(puVar1 + 0xd) = param_2;
  *(undefined2 *)((int)puVar1 + 0x36) = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
  param_1[0x76] = (int)puVar1;
  return;
}



// Function: FUN_1007c6d8 at 1007c6d8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007c6d8(undefined4 param_1,short param_2)

{
  FUN_10025758((int)(short)(param_2 + -0x6a6),(int)*(short *)(_DAT_4bffe775 + 0x17e),
               (int)*(short *)(_DAT_4bffe775 + 0x180));
  return;
}



// Function: FUN_1007c714 at 1007c714
// Size: 160 bytes

void FUN_1007c714(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_38800002;
    puVar1[0xc] = 0;
  }
  FUN_100c3df8(puVar1,param_2,param_1,0,0,0);
  puVar1[0xc] = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
  return;
}



// Function: FUN_1007c7b4 at 1007c7b4
// Size: 1788 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007c7b4(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_36c;
  undefined1 local_348 [256];
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  short local_190;
  short local_18e;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int iStack_174;
  undefined4 local_170;
  undefined1 *local_16c;
  uint local_150;
  undefined1 *local_138;
  undefined1 auStack_130 [72];
  char local_e8;
  byte local_e7;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_16c = local_348;
  puVar9 = &local_1a0;
  local_348[0] = 0;
  local_170 = 0x3c;
  local_138 = auStack_130;
  FUN_10001bd8(_DAT_28030000 + 0x32);
  FUN_100db2f4();
  local_e8 = local_150 < 0x300000;
  FUN_100b08d4(&local_190,*(int *)(local_36c + -0xb0) + 0x56);
  if (local_150 < 0x300000) {
    if (0x280 < local_18e) {
      local_18e = 0x280;
    }
    if (0x1e0 < local_190) {
      local_190 = 0x1e0;
    }
  }
  uVar8 = (uint)local_18e;
  uVar1 = (uint)(0x27f < uVar8);
  local_e7 = (0x27f < uVar8) - (!CARRY4(uVar8,uVar1) && !CARRY4(uVar8,uVar8 + uVar1)) & 1;
  if (local_e7 == 0) {
    iVar7 = 0xe0;
  }
  else {
    iVar7 = 0x70;
  }
  local_e4 = (local_18e - iVar7) + -3;
  local_198 = 0x9c;
  local_194 = 0x70;
  local_1a0 = 0x138;
  local_19c = 0xe0;
  if (**(int **)(local_36c + -0x1504) != 0) {
    local_e0 = 0x22;
    if ((local_e8 == '\0') && (local_e7 == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    puVar4 = puVar9;
    if (bVar6) {
      puVar4 = &local_198;
    }
    if ((local_e8 == '\0') && (local_e7 == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    puVar5 = &local_198;
    if (bVar6) {
      puVar5 = puVar9;
    }
    local_dc = local_e4;
    FUN_1007723c(**(int **)(local_36c + -0x1504),&local_e0,puVar4,puVar5,1);
  }
  local_d8 = 0x27;
  local_d4 = 0x70;
  local_198 = 0x27;
  local_194 = 0x70;
  local_d0 = 0x72;
  local_cc = 0xe0;
  local_1a0 = 0x72;
  local_19c = 0xe0;
  if (**(int **)(local_36c + -0x16a0) != 0) {
    local_c8 = *(int *)(**(int **)(local_36c + -0x1504) + 0x2c) +
               *(int *)(**(int **)(local_36c + -0x1504) + 0x34) + 0x10;
    local_c4 = local_e4;
    puVar4 = &local_198;
    if (local_190 < 0x1e0) {
      puVar4 = puVar9;
      puVar9 = &local_198;
    }
    FUN_1007723c(**(int **)(local_36c + -0x16a0),&local_c8,puVar9,puVar4,1);
  }
  iVar7 = *(int *)(**(int **)(local_36c + -0x16a0) + 0x2c) +
          *(int *)(**(int **)(local_36c + -0x16a0) + 0x34);
  iVar10 = iVar7 + 0x10;
  local_184 = local_e4;
  local_1e8 = 0x42;
  local_1e4 = 0x168;
  local_1a8 = 0x81;
  local_1a4 = 0xe0;
  local_1b0 = 0x78;
  local_1ac = 0x70;
  local_188 = iVar10;
  if (**(int **)(local_36c + -0x18fc) != 0) {
    if (local_e7 == 0) {
      if (iVar7 + 3 < local_190 + -0x46) {
        FUN_100e10b0(&local_78,&local_188,&local_1a8);
        local_228 = local_188;
        local_224 = local_184;
        local_220 = local_78;
        local_21c = local_74;
        local_180 = local_188;
        local_17c = local_184;
        local_178 = local_78;
        iStack_174 = local_74;
        uVar2 = FUN_100e1580(&local_180,1);
        FUN_100e10f8(&local_70,uVar2,&local_1b0);
        piVar3 = (int *)FUN_100e1580(&local_180,1);
        local_238 = local_70;
        local_234 = local_6c;
        local_230 = *piVar3;
        local_22c = piVar3[1];
        local_1d0 = local_70;
        iStack_1cc = local_6c;
        iStack_1c8 = local_230;
        iStack_1c4 = local_22c;
        uVar2 = FUN_100e1580(&local_180,1);
        FUN_100e10f8(&local_68,uVar2,&local_1e8);
        piVar3 = (int *)FUN_100e1580(&local_180,1);
        local_248 = local_68;
        local_244 = local_64;
        local_240 = *piVar3;
        local_23c = piVar3[1];
        local_1e0 = local_68;
        iStack_1dc = local_64;
        iVar10 = local_190 + 0xd;
        iStack_1d8 = local_240;
        iStack_1d4 = local_23c;
      }
      else {
        iVar10 = local_190 + -0x46;
        local_5c = 2;
        local_184 = 2;
        local_188 = iVar10;
        local_60 = iVar10;
        FUN_100e10b0(&local_58,&local_188,&local_1e8);
        local_1f8 = local_188;
        local_1f4 = local_184;
        local_1f0 = local_58;
        local_1ec = local_54;
        local_180 = local_188;
        local_17c = local_184;
        local_178 = local_58;
        iStack_174 = local_54;
        local_208 = local_58 - local_1a8;
        local_1fc = local_184 + local_1a4;
        local_204 = local_184;
        local_200 = local_58;
        iStack_1cc = local_184;
        iStack_1c8 = local_58;
        local_218 = local_58 - local_1b0;
        local_20c = local_184 + local_1ac;
        local_214 = local_184;
        local_210 = local_58;
        iStack_1dc = local_184;
        iStack_1d8 = local_58;
        local_1e0 = local_218;
        iStack_1d4 = local_20c;
        local_1d0 = local_208;
        iStack_1c4 = local_1fc;
      }
    }
    else {
      FUN_100e10b0(&local_c0,&local_188,&local_1b0);
      local_b8 = local_188;
      local_b4 = local_184;
      local_b0 = local_c0;
      local_ac = local_bc;
      local_180 = local_188;
      local_17c = local_184;
      local_178 = local_c0;
      iStack_174 = local_bc;
      uVar2 = FUN_100e1580(&local_180,1);
      FUN_100e10f8(&local_a8,uVar2,&local_1e8);
      piVar3 = (int *)FUN_100e1580(&local_180,1);
      local_a0 = local_a8;
      local_9c = local_a4;
      iStack_1c8 = *piVar3;
      iStack_1c4 = piVar3[1];
      local_1d0 = local_a8;
      iStack_1cc = local_a4;
      local_98 = iStack_1c8;
      local_94 = iStack_1c4;
      uVar2 = FUN_100e1580(&local_180,1);
      FUN_100e10f8(&local_90,uVar2,&local_1a8);
      piVar3 = (int *)FUN_100e1580(&local_180,1);
      local_88 = local_90;
      local_84 = local_8c;
      iStack_1d8 = *piVar3;
      iStack_1d4 = piVar3[1];
      local_1e0 = local_90;
      iStack_1dc = local_8c;
      iVar10 = local_190 + 0xd;
      local_80 = iStack_1d8;
      local_7c = iStack_1d4;
    }
    piVar3 = (int *)**(undefined4 **)(local_36c + -0x18fc);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x350),&local_180,1);
    piVar3[0x32] = local_180;
    piVar3[0x33] = local_17c;
    piVar3[0x34] = local_178;
    piVar3[0x35] = iStack_174;
    piVar3[0x36] = local_1d0;
    piVar3[0x37] = iStack_1cc;
    piVar3[0x38] = iStack_1c8;
    piVar3[0x39] = iStack_1c4;
    piVar3[0x3a] = local_1e0;
    piVar3[0x3b] = iStack_1dc;
    piVar3[0x3c] = iStack_1d8;
    piVar3[0x3d] = iStack_1d4;
  }
  if (**(int **)(local_36c + -0x1698) != 0) {
    local_1b4 = local_e4 + -6;
    local_1b8 = iVar10 + -0x38;
    local_1c0 = 0;
    local_1bc = 0;
    local_50 = 0x28;
    local_4c = 2;
    FUN_100e1630(&local_1c0);
    FUN_10117884(**(int **)(local_36c + -0x1698) +
                 (int)*(short *)(*(int *)**(int **)(local_36c + -0x1698) + 0x350),&local_1c0,1);
  }
  return;
}



// Function: FUN_1007ceb0 at 1007ceb0
// Size: 696 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ceb0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int local_36c;
  undefined1 auStack_348 [72];
  undefined4 local_300;
  undefined1 auStack_2fc [256];
  int local_1fc;
  undefined1 local_1f8 [64];
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined1 auStack_1b2 [70];
  int local_16c;
  int local_168;
  byte local_160 [256];
  undefined2 local_60;
  undefined1 *local_5e;
  undefined4 local_5a;
  int local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 *local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined1 local_32;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
  FUN_100db26c();
  local_1f8[0] = 0;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x138),local_1f8);
  piVar1 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x128));
  FUN_100db26c();
  uVar2 = FUN_100b1b08(local_1f8);
  FUN_10001320(uVar2,0,auStack_348,0x40);
  FUN_10073874(**(undefined4 **)(local_36c + -0x16d0),&local_300);
  local_1fc = 0;
  FUN_10002988(param_1[*(short *)(_DAT_4bffe775 + 0x110) + 0x5c],&local_1fc,local_300);
  FUN_100db2f4();
  local_1b8 = 0;
  local_1b4 = 0;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x178),auStack_1b2);
  local_16c = piVar1[0x15];
  local_168 = piVar1[0x14];
  local_60 = 0;
  local_5a = local_300;
  local_56 = local_1fc;
  local_52 = 0;
  local_4e = 0;
  local_4a = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 2;
  local_3a = 0;
  local_36 = 0;
  local_32 = 1;
  local_5e = auStack_348;
  local_3e = &local_1b8;
  FUN_10000f90(&local_60);
  FUN_100db2f4();
  FUN_100b19f4(local_160,_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14);
  FUN_100b1fb4(local_160,0xffffffd5);
  if (local_160[(short)(local_160[0] - 1)] != 0x73) {
    FUN_100b1fb4(local_160,0x73);
  }
  pbVar3 = (byte *)FUN_10002c40(*(undefined4 *)(local_1fc + 0x28));
  FUN_100012d8(pbVar3,auStack_2fc,*pbVar3 + 1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0));
  uVar2 = FUN_100b1c84(auStack_2fc);
  uVar4 = FUN_100b1c84(local_160);
  FUN_100009f0(uVar4,uVar2,0,0);
  FUN_100d8c9c(0xbd8,0);
  FUN_100009f0(0,0,0,0);
  return;
}



// Function: FUN_1007d168 at 1007d168
// Size: 3436 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d168(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == 0x57e) goto LAB_1007d654;
  if (param_2 < 0x57f) {
    if (param_2 == 0x401) {
      FUN_1000cc58();
      return;
    }
    if (param_2 < 0x402) {
      if (param_2 == 0x3f6) {
        iVar3 = _DAT_4bffe775 + *(short *)((int)param_1 + 0x1de) * 0x42;
        FUN_10025758(0,(int)*(short *)(iVar3 + 0x1604),(int)*(short *)(iVar3 + 0x1606));
        return;
      }
      if (param_2 < 0x3f7) {
        if (param_2 == 0x3f1) {
          FUN_1002f97c((int)*(short *)(param_1 + 0x78),(int)*(short *)((int)param_1 + 0x1e2),
                       (int)*(short *)(param_1 + 0x79),(int)*(short *)((int)param_1 + 0x1e6));
          return;
        }
        if (param_2 < 0x3f2) {
          if (param_2 == 0x3ee) {
            FUN_10065500((int)*(short *)(_DAT_4bffe775 + 0x110));
            return;
          }
          if (param_2 < 0x3ef) {
            if (param_2 == 1000) {
              if (((*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0)
                  && (*(char *)((int)param_1 + 0x16e) != '\0')) &&
                 (*(char *)((int)param_1 + 0x16f) == '\0')) {
                *(undefined1 *)((int)param_1 + 0x1e9) = 1;
                *(undefined1 *)((int)param_1 + 0x16f) = 1;
                FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),0x1e);
                return;
              }
              *(undefined1 *)((int)param_1 + 0x16f) = 0;
              FUN_100410ec();
              return;
            }
          }
          else {
            if (param_2 == 0x3ef) {
              FUN_10065d24((int)*(short *)(param_1 + 0x77));
              return;
            }
            if (param_2 == 0x3f0) {
              iVar3 = _DAT_4bffe775 + *(short *)((int)param_1 + 0x1de) * 0x42;
              FUN_10025758(2,(int)*(short *)(iVar3 + 0x1604),(int)*(short *)(iVar3 + 0x1606));
              return;
            }
          }
        }
        else {
          if (param_2 == 0x3f3) {
            piVar2 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),
                                         3000,param_1);
            FUN_100db26c();
            FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 800));
            return;
          }
          if (param_2 < 0x3f4) {
            if (param_2 == 0x3f2) {
              FUN_1007ceb0(param_1);
              return;
            }
          }
          else {
            if (param_2 == 0x3f4) {
              FUN_1002fe68();
              return;
            }
            if (param_2 == 0x3f5) {
              FUN_1007ba3c(param_1,1,1);
              return;
            }
          }
        }
      }
      else {
        if (param_2 == 0x3fb) {
          FUN_10095330();
          return;
        }
        if (param_2 < 0x3fc) {
          if (param_2 == 0x3f8) {
            FUN_10055408((int)*(short *)((int)param_1 + 0x1de));
            return;
          }
          if (param_2 < 0x3f9) {
            if (param_2 == 0x3f7) {
              FUN_1002fd74(*(undefined1 *)(param_1 + 0x7a));
              return;
            }
          }
          else {
            if (param_2 == 0x3f9) {
              FUN_1004bd0c();
              return;
            }
            if (param_2 == 0x3fa) {
              FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x4c8));
              FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x4c8));
              FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x4c8));
              FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x4c8));
              return;
            }
          }
        }
        else {
          if (param_2 == 0x3fe) {
            FUN_1000cb54();
            return;
          }
          if (param_2 < 0x3ff) {
            if (param_2 == 0x3fc) {
              FUN_1000c9c8();
              return;
            }
            if (param_2 == 0x3fd) {
              FUN_1000cafc();
              return;
            }
          }
          else {
            if (param_2 == 0x3ff) {
              FUN_1000cbb8();
              return;
            }
            if (param_2 == 0x400) {
              FUN_1000cc08();
              return;
            }
          }
        }
      }
    }
    else {
      if (param_2 == 0x40b) {
        FUN_1000d2e8();
        return;
      }
      if (param_2 < 0x40c) {
        if (param_2 == 0x406) {
          FUN_1000cdf4();
          return;
        }
        if (param_2 < 0x407) {
          if (param_2 == 0x403) {
            FUN_1000ccf8();
            return;
          }
          if (param_2 < 0x404) {
            if (param_2 == 0x402) {
              FUN_1000cca8();
              return;
            }
          }
          else {
            if (param_2 == 0x404) {
              FUN_1000cd54();
              return;
            }
            if (param_2 == 0x405) {
              FUN_1000cda4();
              return;
            }
          }
        }
        else {
          if (param_2 == 0x408) {
            FUN_1000ce88();
            return;
          }
          if (param_2 < 0x409) {
            if (param_2 == 0x407) {
              FUN_1000ce44();
              return;
            }
          }
          else {
            if (param_2 == 0x409) {
              FUN_1000ced8();
              return;
            }
            if (param_2 == 0x40a) {
              FUN_1000cf28();
              return;
            }
          }
        }
      }
      else {
        if (param_2 == 0x578) {
LAB_1007d530:
          puVar1 = (undefined4 *)FUN_100f56e4(0xb4);
          if (puVar1 != (undefined4 *)0x0) {
            FUN_100c3d2c(puVar1);
            *puVar1 = 0x60000000;
            *(undefined2 *)(puVar1 + 0x2c) = 0;
          }
          FUN_100c3df8(puVar1,param_2,param_1,1,1,param_1);
          *(undefined2 *)(puVar1 + 0x2c) = 0;
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
          return;
        }
        if (param_2 < 0x579) {
          if (param_2 == 0x40d) {
            FUN_1000d654();
            return;
          }
          if (param_2 < 0x40e) {
            if (param_2 == 0x40c) {
              FUN_1000d334();
              return;
            }
          }
          else {
            if (param_2 == 0x40e) {
              FUN_1000d7bc();
              return;
            }
            if (param_2 == 0x40f) {
              FUN_1000d808();
              return;
            }
          }
        }
        else {
          if (param_2 == 0x57b) {
            FUN_10041cf8();
            return;
          }
          if (param_2 < 0x57c) {
            if (param_2 == 0x579) goto LAB_1007d530;
            if (param_2 == 0x57a) {
              FUN_1007c618(param_1,(int)*(short *)(_DAT_817f0000 + 0x12),
                           (int)*(short *)(_DAT_817f0000 + 0x14));
              return;
            }
          }
          else {
            if (param_2 == 0x57c) {
              puVar1 = (undefined4 *)FUN_100f56e4(0x108);
              if (puVar1 != (undefined4 *)0x0) {
                FUN_100c3d2c(puVar1);
                *puVar1 = &DAT_40820024;
                *(undefined2 *)(puVar1 + 0xc) = 0xffff;
                *(undefined2 *)((int)puVar1 + 0x32) = 0xffff;
                *(undefined2 *)(puVar1 + 0x41) = 0;
              }
              FUN_100c3df8(puVar1,0x57c,param_1,1,1,param_1);
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
              return;
            }
            if (param_2 == 0x57d) goto LAB_1007d654;
          }
        }
      }
    }
    goto LAB_1007deb0;
  }
  if (param_2 == 0x6a4) {
    FUN_1005ef84();
    return;
  }
  if (param_2 < 0x6a5) {
    if (param_2 == 0x5dd) goto LAB_1007d7b4;
    if (param_2 < 0x5de) {
      if (param_2 == 0x583) {
        FUN_100ae86c();
        return;
      }
      if (param_2 < 0x584) {
        if (param_2 == 0x580) {
LAB_1007d654:
          puVar1 = (undefined4 *)FUN_100f56e4(0x1e0);
          if (puVar1 != (undefined4 *)0x0) {
            FUN_100c3d2c(puVar1);
            *puVar1 = &DAT_607f0000;
            puVar1[0xc] = 0;
            *(undefined2 *)(puVar1 + 0x41) = 0;
            *(undefined2 *)(puVar1 + 0x76) = 0;
            *(undefined2 *)((int)puVar1 + 0x1da) = 0xffff;
            *(undefined2 *)(puVar1 + 0x77) = 0xffff;
          }
          FUN_100c3df8(puVar1,param_2,param_1,1,1,param_1);
          puVar1[0xc] = param_1;
          *(undefined2 *)((int)puVar1 + 0x1da) = 0xffff;
          *(undefined2 *)(puVar1 + 0x77) = 0xffff;
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
          return;
        }
        if (param_2 < 0x581) {
          if (param_2 == 0x57f) goto LAB_1007d654;
        }
        else {
          if (param_2 == 0x581) {
            FUN_1003fe04();
            return;
          }
          if (param_2 == 0x582) {
            if (_DAT_817f0000 == 0) {
              return;
            }
            if (*(short *)(_DAT_817f0000 + 0x12) < 0) {
              return;
            }
            if (*(short *)(_DAT_817f0000 + 0x14) < 0) {
              return;
            }
            FUN_1000848c((int)*(short *)(_DAT_817f0000 + 0x12),(int)*(short *)(_DAT_817f0000 + 0x14)
                        );
            FUN_1003dc28();
            return;
          }
        }
      }
      else {
        if (param_2 == 0x585) {
          FUN_1005bdb8();
          return;
        }
        if (param_2 < 0x586) {
          if (param_2 == 0x584) {
            FUN_1002171c();
            return;
          }
        }
        else {
          if (param_2 == 0x586) {
            FUN_1002b4e0();
            return;
          }
          if (param_2 == 0x5dc) {
            FUN_10050a48((int)(short)((short)param_1[0x59] + -0x5dd));
            return;
          }
        }
      }
    }
    else {
      if (param_2 == 0x5e2) {
        FUN_1002656c();
        return;
      }
      if (param_2 < 0x5e3) {
        if (param_2 == 0x5df) {
LAB_1007d7b4:
          FUN_10050a48((int)(short)((short)param_2 + -0x5dd));
          return;
        }
        if (param_2 < 0x5e0) {
          if (param_2 == 0x5de) goto LAB_1007d7b4;
        }
        else if ((param_2 == 0x5e0) || (param_2 == 0x5e1)) goto LAB_1007d7b4;
      }
      else {
        if (param_2 == 0x641) {
          FUN_10033e7c();
          return;
        }
        if (param_2 < 0x642) {
          if (param_2 == 0x5e3) {
            FUN_1004d0d0();
            return;
          }
          if (param_2 == 0x640) {
            FUN_100950a4();
            return;
          }
        }
        else {
          if (param_2 == 0x642) {
            FUN_100351ec();
            return;
          }
          if (param_2 == 0x643) {
            FUN_1005447c();
            return;
          }
        }
      }
    }
  }
  else {
    if (param_2 == 0x70a) goto LAB_1007d830;
    if (param_2 < 0x70b) {
      if (param_2 == 0x6a9) {
LAB_1007d7f8:
        FUN_1007c6d8(param_1,param_2);
        return;
      }
      if (param_2 < 0x6aa) {
        if (param_2 == 0x6a6) goto LAB_1007d7f8;
        if (param_2 < 0x6a7) {
          if (param_2 == 0x6a5) {
            FUN_1003a5fc();
            return;
          }
        }
        else if ((param_2 == 0x6a7) || (param_2 == 0x6a8)) goto LAB_1007d7f8;
      }
      else {
        if (param_2 == 0x6ab) {
          FUN_1005e858();
          return;
        }
        if (param_2 < 0x6ac) {
          if (param_2 == 0x6aa) goto LAB_1007d7f8;
        }
        else {
          if (param_2 == 0x708) {
            FUN_10037fe4((int)(short)((short)param_1[0x5a] + -0x709));
            return;
          }
          if (param_2 == 0x709) goto LAB_1007d830;
        }
      }
    }
    else {
      if (param_2 == 0x76d) {
        FUN_1007b218(param_1);
        return;
      }
      if (0x76d < param_2) {
        if (param_2 == 0x771) {
          if (_DAT_90df0010 == (int *)0x0) {
            return;
          }
          iVar3 = FUN_10117884((int)*(short *)(*_DAT_90df0010 + 0x668) + (int)_DAT_90df0010);
          if (iVar3 != 0) {
            FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 0x328));
            return;
          }
          FUN_10117884((int)_DAT_90df0010 + (int)*(short *)(*_DAT_90df0010 + 800));
          if (_DAT_80410014 == (int *)0x0) {
            return;
          }
          FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x780));
          FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),
                       _DAT_80410014[0x26]);
          return;
        }
        if (param_2 < 0x772) {
          if (param_2 == 0x76f) {
            if (_DAT_63840000 == (int *)0x0) {
              return;
            }
            iVar3 = FUN_10117884((int)*(short *)(*_DAT_63840000 + 0x668) + (int)_DAT_63840000);
            if (iVar3 != 0) {
              FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x328));
              return;
            }
            FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 800));
            if (_DAT_80410014 == (int *)0x0) {
              return;
            }
            FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x780));
            FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),
                         _DAT_80410014[0x26]);
            return;
          }
          if (param_2 == 0x770) {
            if (_DAT_7c7f1814 == (int *)0x0) {
              return;
            }
            iVar3 = FUN_10117884((int)*(short *)(*_DAT_7c7f1814 + 0x668) + (int)_DAT_7c7f1814);
            if (iVar3 != 0) {
              FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 0x328));
              return;
            }
            FUN_10117884((int)_DAT_7c7f1814 + (int)*(short *)(*_DAT_7c7f1814 + 800));
            if (_DAT_80410014 == (int *)0x0) {
              return;
            }
            FUN_10117884((int)*(short *)(*_DAT_80410014 + 0x780) + (int)_DAT_80410014);
            FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),
                         _DAT_80410014[0x26]);
            return;
          }
        }
        else {
          if (param_2 == 0x772) {
            FUN_1007c7b4(param_1);
            return;
          }
          if (param_2 == 0x773) {
            iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298));
            if (iVar3 != 0) {
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),0x1e);
            }
            FUN_1007c714(param_1,0x76c);
            return;
          }
        }
        goto LAB_1007deb0;
      }
      if (param_2 == 0x70c) {
LAB_1007d830:
        FUN_10037fe4((int)(short)((short)param_2 + -0x709));
        return;
      }
      if (param_2 < 0x70d) {
        if (param_2 == 0x70b) goto LAB_1007d830;
      }
      else {
        if (param_2 == 0x70d) goto LAB_1007d830;
        if (param_2 == 0x76c) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x76c,0);
          FUN_10040fb8();
          return;
        }
      }
    }
  }
LAB_1007deb0:
  FUN_100d6c90(param_1,param_2);
  return;
}



// Function: FUN_1007ded4 at 1007ded4
// Size: 1076 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ded4(int param_1,int *param_2,undefined1 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 auStack_158 [256];
  short local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 *local_3c;
  char local_38;
  
  FUN_100ddfa8(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x144) = 1;
  if (_DAT_4bffe775 == 0) {
    _DAT_4bffe775 = FUN_100f1640(0x2fcc);
  }
  if (_DAT_38800000 == 0) {
    _DAT_38800000 = FUN_100f1640(0x8880);
  }
  if (_DAT_60000000 == 0) {
    _DAT_60000000 = FUN_100f1640(22000);
  }
  if (_DAT_807f0004 == 0) {
    _DAT_807f0004 = FUN_100f1640(0x4440);
  }
  bVar1 = false;
  uVar6 = 1;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    puVar2 = (undefined4 *)FUN_10003558(0x54797065,1000);
    if (puVar2 != (undefined4 *)0x0) {
      if (1 < *(short *)*puVar2) {
        FUN_100d8c9c(0x3fc,0);
        FUN_100db158(0,0x820000);
      }
      FUN_10001c98(puVar2);
    }
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
    puVar2 = (undefined4 *)FUN_10003558(0x5475726e,1000);
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = FUN_10001c20(puVar2);
      iVar5 = _DAT_57c407bd;
      if ((iVar3 != 0) && (*(char *)*puVar2 == '\x01')) {
        bVar1 = true;
      }
      if (!bVar1) {
        *(undefined1 *)(_DAT_57c407bd + 0x9a) = 1;
        uVar4 = FUN_10001a88();
        *(undefined4 *)(iVar5 + 0x9c) = uVar4;
      }
      FUN_10001c98(puVar2);
      uVar6 = 0;
    }
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
    local_40 = 0;
    local_58 = 0;
    local_54 = 0;
    local_4c = 0;
    local_48 = 0;
    local_50 = _DAT_41820010;
    _DAT_41820010 = auStack_158;
    iVar5 = FUN_10000090(auStack_158);
    if (iVar5 == 0) {
      iVar5 = 0;
      do {
        puVar2 = (undefined4 *)FUN_10003558(0x4d61696c,(int)(short)((short)iVar5 + 1000));
        if (puVar2 != (undefined4 *)0x0) {
          uVar4 = FUN_10001c20(puVar2);
          local_40 = FUN_100f1640();
          local_3c = puVar2;
          local_38 = FUN_10000360(puVar2);
          FUN_10002598(local_3c);
          FUN_10002340(*puVar2,local_40,uVar4);
          *(undefined4 *)(param_1 + iVar5 * 4 + 0x170) = local_40;
          local_40 = 0;
          *(undefined1 *)(param_1 + 0x16e) = 1;
          *(undefined1 *)(param_1 + 0x16f) = uVar6;
          if (&stack0x00000000 != (undefined1 *)0x3c) {
            FUN_10001b60(local_3c,(int)local_38);
          }
          if (puVar2 != (undefined4 *)0x0) {
            FUN_10001c98(puVar2);
          }
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 8);
      iVar5 = FUN_10003558(0x4d4b696b,1000);
      *(bool *)(param_1 + 0x16f) = iVar5 != 0;
      if (iVar5 != 0) {
        FUN_10001c98(iVar5);
      }
      _DAT_41820010 = local_50;
    }
    else {
      local_40 = FUN_100ef580(local_40);
      FUN_100db158((int)local_58,local_54);
    }
  }
  FUN_10029ac0(param_2,0,*(undefined1 *)(param_1 + 0x16c),!bVar1);
  if ((*(short *)(_DAT_4bffe775 + 0x124) == 0) && (*(char *)(_DAT_57c407bd + 0x9a) == '\0')) {
    FUN_1000848c((int)*(short *)(_DAT_4bffe775 + 0x17e),(int)*(short *)(_DAT_4bffe775 + 0x180));
  }
  iVar5 = _DAT_57c407bd;
  if (bVar1) {
    FUN_100657bc();
  }
  else if ((*(char *)(param_1 + 0x16e) != '\0') && (*(char *)(_DAT_57c407bd + 0x9a) != '\0')) {
    *(undefined1 *)(_DAT_57c407bd + 0x9a) = 1;
    uVar4 = FUN_10001a88();
    *(undefined4 *)(iVar5 + 0x9c) = uVar4;
  }
  return;
}



// Function: FUN_1007e314 at 1007e314
// Size: 1408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007e314(int param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar7;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_14c;
  undefined1 local_128 [260];
  
  FUN_100d6dd0(param_1);
  if ((*(char *)(param_1 + 0x16c) == '\0') && (*(char *)((int)_DAT_57c407bd + 0x9a) != '\0')) {
    FUN_100f27d0(0x1f,0);
    FUN_100f27d0(0x1e,0);
    FUN_100f27d0(0x20,0);
    FUN_100f27d0(0x21,0);
    FUN_100f27d0(0x24,0);
  }
  if (*(char *)((int)_DAT_57c407bd + 0x99) == '\0') {
    local_128[0] = 0;
    FUN_10075570(_DAT_57c407bd,0x76f,_DAT_63840000 != (int *)0x0);
    if ((_DAT_63840000 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)*(short *)(*_DAT_63840000 + 0x668) + (int)_DAT_63840000),
       iVar2 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar7 = 1;
    }
    else {
      uVar7 = 2;
    }
    FUN_100009d8(local_128,0x7da,uVar7);
    FUN_100f3284(0x76f,local_128);
    FUN_10075570(_DAT_57c407bd,0x770,_DAT_7c7f1814 != (int *)0x0);
    if ((_DAT_7c7f1814 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)*(short *)(*_DAT_7c7f1814 + 0x668) + (int)_DAT_7c7f1814),
       iVar2 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar7 = 3;
    }
    else {
      uVar7 = 4;
    }
    FUN_100009d8(local_128,0x7da,uVar7);
    FUN_100f3284(0x770,local_128);
    FUN_10075570(_DAT_57c407bd,0x771,_DAT_90df0010 != (int *)0x0);
    if ((_DAT_90df0010 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)*(short *)(*_DAT_90df0010 + 0x668) + (int)_DAT_90df0010),
       iVar2 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar7 = 5;
    }
    else {
      uVar7 = 6;
    }
    FUN_100009d8(local_128,0x7da,uVar7);
    FUN_100f3284(0x771,local_128);
    if (*(char *)(param_1 + 0x144) != '\0') {
      FUN_10075570(_DAT_57c407bd,0x772,1);
      FUN_10075570(_DAT_57c407bd,0x76d,1);
      if (((*(short *)(**(int **)(local_14c + -0x544) +
                       *(short *)(**(int **)(local_14c + -0x544) + 0x110) * 2 + 0xd0) == 0) &&
          (*(char *)((int)_DAT_57c407bd + 0x9a) == '\0')) &&
         (iVar2 = FUN_10117884((int)*(short *)(*_DAT_57c407bd + 0x318) + (int)_DAT_57c407bd),
         iVar2 == 0)) {
        FUN_1003f6e8();
        cVar3 = FUN_10056534();
        if (((_DAT_817f0000 == 0) || (*(short *)(_DAT_817f0000 + 0x12) < 0)) ||
           (*(short *)(_DAT_817f0000 + 0x14) < 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        if ((_DAT_817f0000 == 0) || (iVar2 = FUN_1005cd18(), iVar2 != 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        FUN_10075570(_DAT_57c407bd,0x578,uVar6);
        sVar4 = 0;
        iVar2 = 0;
        if (0 < _DAT_281f0000) {
          do {
            if (*(short *)(&DAT_2c090000 + iVar2 * 2) != 0) {
              sVar4 = sVar4 + 1;
            }
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < _DAT_281f0000);
        }
        if ((_DAT_817f0000 == 0) || (sVar4 < 2)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        FUN_10075570(_DAT_57c407bd,0x579,uVar6);
        if ((_DAT_817f0000 == 0) ||
           (**(short **)(local_14c + -0x1a10) <= **(short **)(local_14c + -0x1a04))) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        FUN_10075570(_DAT_57c407bd,0x57a,uVar6);
        FUN_10075570(_DAT_57c407bd,0x57b,1);
        FUN_10075570(_DAT_57c407bd,0x57c,uVar5);
        FUN_10075570(_DAT_57c407bd,0x57d,cVar3);
        if ((_DAT_817f0000 == 0) || (cVar3 == '\0')) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        FUN_10075570(_DAT_57c407bd,0x57e,uVar6);
        FUN_10075570(_DAT_57c407bd,0x57f,_DAT_817f0000 != 0);
        FUN_10075570(_DAT_57c407bd,0x580,_DAT_817f0000 != 0);
        FUN_10075570(_DAT_57c407bd,0x581,_DAT_817f0000 != 0);
        FUN_10075570(_DAT_57c407bd,0x582,uVar5);
      }
    }
  }
  else {
    FUN_100f27d0(0x1f,0);
    FUN_100f27d0(0x1e,*(undefined1 *)(param_1 + 0x16c));
    FUN_100f27d0(0x22,0);
  }
  return;
}



// Function: FUN_1007e894 at 1007e894
// Size: 1000 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007e894(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_250 [256];
  undefined4 *local_150;
  undefined4 *local_14c;
  undefined4 local_148;
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_100de320(param_1,param_2,param_3);
  FUN_100b19f4(auStack_250,_FUN_101162f8 + 0x14);
  if (*(char *)(param_1 + 0x16c) == '\0') {
    FUN_1002a864(param_2);
  }
  else {
    FUN_10029e84(param_2);
    local_14c = (undefined4 *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_3c = _DAT_41820010;
    _DAT_41820010 = auStack_144;
    iVar1 = FUN_10000090(auStack_144);
    if (iVar1 == 0) {
      local_14c = (undefined4 *)FUN_100f15e0(2);
      *(undefined2 *)*local_14c = 1;
      uVar2 = FUN_100b1c84(&DAT_7c0803a6);
      FUN_10002568(local_14c,0x54797065,1000,uVar2);
      FUN_100db328();
      FUN_100002a0(local_14c);
      local_14c = (undefined4 *)0x0;
      _DAT_41820010 = local_3c;
    }
    else {
      local_14c = (undefined4 *)FUN_100ef510(local_14c);
      FUN_100db158((int)local_44,local_40);
    }
    if (*(char *)(param_1 + 0x16e) != '\0') {
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2b8));
      local_148 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_3c = _DAT_41820010;
      _DAT_41820010 = auStack_144;
      iVar1 = FUN_10000090(auStack_144);
      if (iVar1 == 0) {
        iVar1 = 0;
        do {
          iVar4 = *(int *)(param_1 + iVar1 * 4 + 0x170);
          if (iVar4 != 0) {
            uVar2 = FUN_10002a60(iVar4);
            FUN_10001f98(iVar4,&local_148,uVar2);
            FUN_100db2f4();
            uVar2 = FUN_100b1c84(&DAT_7c0803a6);
            FUN_10002568(local_148,0x4d61696c,(int)(short)((short)iVar1 + 1000),uVar2);
            FUN_100db328();
            FUN_100002a0(local_148);
            local_148 = 0;
          }
          iVar1 = (int)(short)((short)iVar1 + 1);
        } while (iVar1 < 8);
        if (*(char *)(param_1 + 0x16f) != '\0') {
          uVar2 = FUN_100f15e0(0);
          local_148 = uVar2;
          uVar3 = FUN_100b1c84(&DAT_7c0803a6);
          FUN_10002568(uVar2,0x4d4b696b,1000,uVar3);
          FUN_100db328();
          FUN_100002a0(local_148);
          local_148 = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        _DAT_41820010 = local_3c;
      }
      else {
        local_148 = FUN_100ef510(local_148);
        FUN_100db158((int)local_44,local_40);
      }
    }
    if ((*(char *)(_DAT_57c407bd + 0x9a) != '\0') || (*(char *)(_DAT_57c407bd + 0x99) != '\0')) {
      local_150 = (undefined4 *)0x0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_3c = _DAT_41820010;
      _DAT_41820010 = auStack_144;
      iVar1 = FUN_10000090(auStack_144);
      if (iVar1 == 0) {
        local_150 = (undefined4 *)FUN_100f15e0(2);
        *(undefined1 *)*local_150 = *(undefined1 *)(_DAT_57c407bd + 0x99);
        uVar2 = FUN_100b1c84(&DAT_7c0803a6);
        FUN_10002568(local_150,0x5475726e,1000,uVar2);
        FUN_100db328();
        FUN_100002a0(local_150);
        _DAT_41820010 = local_3c;
      }
      else {
        local_150 = (undefined4 *)FUN_100ef510(local_150);
        FUN_100db158((int)local_44,local_40);
      }
    }
  }
  return;
}



// Function: FUN_1007ec7c at 1007ec7c
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ec7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  uVar1 = FUN_100db3c8(0);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  FUN_100db49c(uVar1,0x57325343,*(undefined4 *)(_DAT_28030000 + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x148) + (int)*(short *)(**(int **)(param_1 + 0x148) + 0xa8)
               ,param_2);
  return;
}



// Function: FUN_1007ed14 at 1007ed14
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ed14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  uVar1 = FUN_100db3c8(0);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  FUN_100db49c(uVar1,0x57325445,*(undefined4 *)(_DAT_28030000 + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x14c) + (int)*(short *)(**(int **)(param_1 + 0x14c) + 0xa8)
               ,param_2);
  return;
}



// Function: FUN_1007edac at 1007edac
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007edac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar1 = FUN_100db3c8(0);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  FUN_100db49c(uVar1,0x57324152,*(undefined4 *)(_DAT_28030000 + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x150) + (int)*(short *)(**(int **)(param_1 + 0x150) + 0xa8)
               ,param_2);
  return;
}



// Function: FUN_1007ee44 at 1007ee44
// Size: 96 bytes

void FUN_1007ee44(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x2b8));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  }
  return;
}



// Function: FUN_1007eea4 at 1007eea4
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007eea4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x154));
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uVar1 = FUN_100db3c8(0);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  FUN_100db49c(uVar1,0x57324349,*(undefined4 *)(_DAT_28030000 + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x154) + (int)*(short *)(**(int **)(param_1 + 0x154) + 0xa8)
               ,param_2);
  return;
}



// Function: FUN_1007ef3c at 1007ef3c
// Size: 96 bytes

void FUN_1007ef3c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x154);
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x2b8));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  }
  return;
}



// Function: FUN_1007ef9c at 1007ef9c
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ef9c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_100db3c8(0);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  FUN_100db49c(uVar1,0x57325348,*(undefined4 *)(_DAT_28030000 + 0x20),0,0,0,1);
  FUN_10117884((int)*(int **)(param_1 + 0x158) + (int)*(short *)(**(int **)(param_1 + 0x158) + 0xa8)
               ,param_2);
  return;
}



// Function: FUN_1007f034 at 1007f034
// Size: 96 bytes

void FUN_1007f034(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x158);
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)*(int **)(param_1 + 0x14c) +
                 (int)*(short *)(**(int **)(param_1 + 0x14c) + 0x2b8));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2b8));
  }
  return;
}



// Function: FUN_1007f094 at 1007f094
// Size: 16 bytes

void FUN_1007f094(int param_1,short param_2)

{
  *(int *)(param_1 + 0x164) = param_2 + 0x5dd;
  return;
}



// Function: FUN_1007f0a4 at 1007f0a4
// Size: 16 bytes

void FUN_1007f0a4(int param_1,short param_2)

{
  *(int *)(param_1 + 0x168) = param_2 + 0x709;
  return;
}



// Function: FUN_1007f0b4 at 1007f0b4
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f0b4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_1007b52c(param_1);
  uVar4 = _DAT_90df0010;
  uVar3 = _DAT_80410014;
  uVar2 = _DAT_7c7f1814;
  uVar1 = _DAT_63840000;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar5 = FUN_10000090(auStack_148);
  if (iVar5 == 0) {
    _DAT_7c7f1814 = 0;
    _DAT_90df0010 = 0;
    _DAT_63840000 = 0;
    _DAT_80410014 = 0;
    FUN_100d68a8(param_1);
    _DAT_41820010 = local_40;
  }
  else {
    _DAT_63840000 = uVar1;
    _DAT_7c7f1814 = uVar2;
    _DAT_80410014 = uVar3;
    _DAT_90df0010 = uVar4;
    FUN_100db158((int)local_48,local_44);
  }
  *(undefined1 *)(_DAT_57c407bd + 0x9a) = 0;
  return;
}



// Function: FUN_1007f1d4 at 1007f1d4
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007f1d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (((iVar1 = _DAT_4bffe775 + iVar2 * 2, *(short *)(iVar1 + 0xd0) != 0 ||
          (*(short *)(iVar1 + 0x138) == 0)) || (*(int *)(param_1 + iVar2 * 4 + 0x170) != 0))) {
    iVar2 = (int)(short)((short)iVar2 + 1);
    if (7 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_1007f234 at 1007f234
// Size: 788 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f234(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_264;
  undefined1 auStack_23c [256];
  short local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_124 [260];
  
  piVar1 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xbcf,
                               param_1);
  FUN_100db26c();
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x63617461);
  FUN_100db26c(iVar2);
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  local_134 = _DAT_41820010;
  _DAT_41820010 = auStack_23c;
  iVar3 = FUN_10000090(auStack_23c);
  if (iVar3 == 0) {
    iVar3 = 0;
    do {
      iVar4 = _DAT_4bffe775 + iVar3 * 2;
      if ((*(short *)(iVar4 + 0xd0) == 0) && (*(short *)(iVar4 + 0x138) != 0)) {
        iVar4 = *(int *)(param_1 + iVar3 * 4 + 0x170);
        *(int *)(iVar2 + iVar3 * 4 + 0x188) = iVar4;
        if (iVar4 != 0) {
          FUN_100733b0(iVar2,iVar3);
        }
      }
      else {
        local_124[0] = 0;
        iVar4 = _DAT_4bffe775 + iVar3 * 2;
        if ((*(short *)(iVar4 + 0xc0) == 3) || (*(short *)(iVar4 + 0x138) == 0)) {
          FUN_100b1d90(local_124,*(int *)(local_264 + -0x15a8) + 0x30);
        }
        else {
          FUN_100b1d90(local_124,*(int *)(local_264 + -0x15a8) + 0x40);
        }
        FUN_10090e0c(piVar1,iVar3 + 0x61646431,local_124,0);
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x646f6e65);
    if (iVar3 != 0) {
      FUN_10098f74(*(undefined4 *)(iVar3 + 0xa8));
    }
    iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),0x63616e63);
    if (iVar3 != 0) {
      FUN_10098f74(*(undefined4 *)(iVar3 + 0xa8));
    }
    iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x810));
    if (iVar3 == 0x646f6e65) {
      iVar3 = 0;
      do {
        iVar6 = *(int *)(iVar2 + iVar3 * 4 + 0x188);
        iVar5 = param_1 + iVar3 * 4;
        iVar4 = *(int *)(iVar5 + 0x170);
        if (iVar4 != iVar6) {
          FUN_100ef580(iVar4);
          *(int *)(iVar5 + 0x170) = iVar6;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 8);
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    _DAT_41820010 = local_134;
  }
  else {
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738));
    }
    FUN_100db158((int)local_13c,local_138);
  }
  return;
}



// Function: FUN_1007f548 at 1007f548
// Size: 268 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f548(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  bool bVar1;
  int iVar2;
  int *in_stack_00000040;
  
  FUN_100dee64(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar2 = _FUN_101162f8;
  if (param_2 != 0x13) {
    if (((*(char *)(param_1 + 0x16e) == '\0') && (*(char *)(_DAT_57c407bd + 0x9a) == '\0')) &&
       (*(char *)(_DAT_57c407bd + 0x99) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    *(bool *)(param_1 + 0x16d) = bVar1;
    if (!bVar1) {
      *(undefined1 *)(param_1 + 0x16c) = 1;
    }
    *param_5 = 0x5dc;
    *param_7 = &DAT_2c060000;
    *in_stack_00000040 = param_1;
                    /* WARNING: Read-only address (ram,0x101162f8) is written */
    return;
  }
  FUN_100b1d90(param_3,_FUN_101162f8 + 0x50);
  FUN_100b1d90(param_4,iVar2 + 100);
  return;
}



// Function: FUN_1007f654 at 1007f654
// Size: 1460 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f654(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_3 + 0x18);
  if (iVar2 == 0x63686532) goto LAB_1007fb30;
  if (iVar2 < 0x63686533) {
    if (iVar2 != 0x61726d36) {
      if (0x61726d36 < iVar2) {
        if (iVar2 == 0x62757433) {
LAB_1007fa54:
          uVar3 = FUN_10075d94(_DAT_57c407bd,
                               (int)*(short *)(_DAT_57c407bd +
                                               (short)((short)*(undefined4 *)(param_3 + 0x18) +
                                                      -0x7431) * 2 + 0x8c));
          FUN_1007c714(param_1,uVar3);
          return;
        }
        if (iVar2 < 0x62757434) {
          if (iVar2 == 0x62757431) goto LAB_1007fa54;
          if (iVar2 < 0x62757432) {
            if (iVar2 == 0x61726d37) goto LAB_1007faa4;
          }
          else if (iVar2 == 0x62757432) goto LAB_1007fa54;
        }
        else {
          if (iVar2 == 0x63686530) goto LAB_1007fb30;
          if (iVar2 < 0x63686531) {
            if (iVar2 == 0x62757434) goto LAB_1007fa54;
          }
          else if (iVar2 == 0x63686531) goto LAB_1007fb30;
        }
        goto LAB_1007fbe4;
      }
      if (iVar2 != 0x61726d32) {
        if (iVar2 < 0x61726d33) {
          if ((iVar2 != 0x61726d30) && (iVar2 != 0x61726d31)) goto LAB_1007fbe4;
        }
        else if (iVar2 != 0x61726d34) {
          if (iVar2 < 0x61726d35) {
            if (iVar2 != 0x61726d33) goto LAB_1007fbe4;
          }
          else if (iVar2 != 0x61726d35) goto LAB_1007fbe4;
        }
      }
    }
LAB_1007faa4:
    puVar1 = (undefined4 *)FUN_100f56e4(0xb4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100c3d2c(puVar1);
      *puVar1 = 0x60000000;
      *(undefined2 *)(puVar1 + 0x2c) = 0;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x18);
    FUN_100c3df8(puVar1,0x836,param_1,1,1,param_1);
    *(short *)(puVar1 + 0x2c) = (short)uVar3 + -0x6d30;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
    return;
  }
  if (iVar2 == 0x6469706c) {
    FUN_10026df4();
    return;
  }
  if (iVar2 < 0x6469706d) {
    if (iVar2 != 0x63686536) {
      if (0x63686536 < iVar2) {
        if (iVar2 == 0x64656c65) {
          puVar1 = (undefined4 *)FUN_100f56e4(0x108);
          if (puVar1 != (undefined4 *)0x0) {
            FUN_100c3d2c(puVar1);
            *puVar1 = &DAT_40820024;
            *(undefined2 *)(puVar1 + 0xc) = 0xffff;
            *(undefined2 *)((int)puVar1 + 0x32) = 0xffff;
            *(undefined2 *)(puVar1 + 0x41) = 0;
          }
          FUN_100c3df8(puVar1,0x57c,param_1,1,1,param_1);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
          return;
        }
        if (iVar2 < 0x64656c66) {
          if (iVar2 == 0x63686537) goto LAB_1007fb30;
        }
        else if (iVar2 == 0x64657365) goto LAB_1007f8cc;
        goto LAB_1007fbe4;
      }
      if (iVar2 != 0x63686534) {
        if (iVar2 < 0x63686535) {
          if (iVar2 == 0x63686533) goto LAB_1007fb30;
        }
        else if (iVar2 == 0x63686535) goto LAB_1007fb30;
        goto LAB_1007fbe4;
      }
    }
LAB_1007fb30:
    FUN_1005cffc((int)(short)((short)*(undefined4 *)(param_3 + 0x18) + -0x6530));
    return;
  }
  if (iVar2 != 0x6c656176) {
    if (iVar2 < 0x6c656177) {
      if (iVar2 == 0x67756172) goto LAB_1007f8cc;
      if (iVar2 < 0x67756173) {
        if (iVar2 == 0x67726f75) {
          puVar1 = (undefined4 *)FUN_100f56e4(0xb4);
          if (puVar1 != (undefined4 *)0x0) {
            FUN_100c3d2c(puVar1);
            *puVar1 = 0x60000000;
            *(undefined2 *)(puVar1 + 0x2c) = 0;
          }
          iVar2 = FUN_1005cd18();
          if (iVar2 == 0) {
            uVar3 = 0x578;
          }
          else {
            uVar3 = 0x579;
          }
          FUN_100c3df8(puVar1,uVar3,param_1,1,1,param_1);
          *(undefined2 *)(puVar1 + 0x2c) = 0;
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
          return;
        }
      }
      else if (iVar2 == 0x68656c70) {
        FUN_100402e0();
        return;
      }
    }
    else {
      if (iVar2 == 0x6e657874) goto LAB_1007f8cc;
      if (iVar2 < 0x6e657875) {
        if (iVar2 == 0x6d6f7665) {
          FUN_1007c618(param_1,(int)*(short *)(_DAT_817f0000 + 0x12),
                       (int)*(short *)(_DAT_817f0000 + 0x14));
          return;
        }
      }
      else if (iVar2 == 0x70617468) {
        FUN_1003fe94();
        return;
      }
    }
LAB_1007fbe4:
    FUN_100dafe8(param_1,param_2,param_3);
    return;
  }
LAB_1007f8cc:
  iVar2 = *(int *)(param_3 + 0x18);
  if (iVar2 == 0x64657365) {
    param_3 = 0x580;
  }
  else if (iVar2 == 0x67756172) {
    param_3 = 0x57f;
  }
  else if (iVar2 == 0x6c656176) {
    param_3 = 0x57e;
  }
  else if (iVar2 == 0x6e657874) {
    param_3 = 0x57d;
  }
  puVar1 = (undefined4 *)FUN_100f56e4(0x1e0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar1);
    *puVar1 = &DAT_607f0000;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0x41) = 0;
    *(undefined2 *)(puVar1 + 0x76) = 0;
    *(undefined2 *)((int)puVar1 + 0x1da) = 0xffff;
    *(undefined2 *)(puVar1 + 0x77) = 0xffff;
  }
  FUN_100c3df8(puVar1,param_3,param_1,1,1,param_1);
  puVar1[0xc] = param_1;
  *(undefined2 *)((int)puVar1 + 0x1da) = 0xffff;
  *(undefined2 *)(puVar1 + 0x77) = 0xffff;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar1);
  return;
}



// Function: FUN_1007fc08 at 1007fc08
// Size: 356 bytes

void FUN_1007fc08(int *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_1e0 [256];
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined1 auStack_98 [12];
  undefined4 local_8c;
  undefined4 local_86;
  undefined2 local_82;
  undefined2 local_7c;
  short local_54;
  
  FUN_100de9ac(param_1,param_2);
  piVar1 = (int *)FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x128));
  FUN_100db26c();
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x178),&local_e0);
  local_8c = 0;
  local_86 = 0;
  local_82 = local_e0._0_2_;
  local_7c = 0;
  FUN_10000828(auStack_98);
  if (local_54 == 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x348) + (int)param_1,0x14);
    FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x130),uVar2);
    FUN_100012d8((int)&uStack_dc + 2,auStack_1e0,(uStack_dc >> 8 & 0xff) + 1);
    FUN_10117884((int)*(short *)(*param_1 + 0x318) + (int)param_1,auStack_1e0);
    param_1[100] = local_e0;
    param_1[0x65] = uStack_dc;
    param_1[0x66] = iStack_d8;
    param_1[0x67] = iStack_d4;
    param_1[0x68] = iStack_d0;
    param_1[0x69] = iStack_cc;
    param_1[0x6a] = local_c8;
    param_1[0x6b] = iStack_c4;
    param_1[0x6c] = iStack_c0;
    param_1[0x6d] = iStack_bc;
    param_1[0x6e] = iStack_b8;
    param_1[0x6f] = iStack_b4;
    param_1[0x70] = local_b0;
    param_1[0x71] = iStack_ac;
    param_1[0x72] = iStack_a8;
    param_1[0x73] = iStack_a4;
    param_1[0x74] = iStack_a0;
    param_1[0x75] = uStack_9c & 0xffff0000;
  }
  return;
}



// Function: FUN_1007fd6c at 1007fd6c
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fd6c(int param_1,short param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_2f4;
  undefined1 auStack_2d0 [72];
  undefined1 auStack_288 [64];
  undefined1 auStack_248 [200];
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 auStack_178 [256];
  undefined2 local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_60;
  undefined1 *local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined2 local_4a;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined1 local_32;
  
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_68 = 0;
  local_70 = _DAT_41820010;
  _DAT_41820010 = auStack_178;
  iVar1 = FUN_10000090(auStack_178);
  if (iVar1 == 0) {
    FUN_100b1fec(auStack_288,*(int *)(local_2f4 + -0x15a8) + 0x74);
    uVar2 = FUN_100b1b08(auStack_288);
    FUN_10001320(uVar2,0,auStack_2d0,0x40);
    FUN_10073874(**(undefined4 **)(local_2f4 + -0x16d0),&local_17c);
    local_180 = 0;
    FUN_10002988(*(undefined4 *)(param_1 + param_2 * 4 + 0x170),&local_180,local_17c);
    FUN_100db2f4();
    if (param_3 == 8) {
      iVar1 = *(int *)(local_2f4 + -0x15a8) + 0x8c;
    }
    else {
      iVar1 = **(int **)(local_2f4 + -0x544) + param_3 * 0x14;
    }
    FUN_10001dd0(auStack_248,*(int *)(local_2f4 + -0x15a8) + 0x98,iVar1,param_4);
    local_60 = 0;
    local_5a = local_17c;
    local_56 = local_180;
    local_52 = 0;
    local_4e = 0;
    local_4a = 0;
    local_5e = auStack_2d0;
    local_48 = FUN_100012c0(auStack_248);
    local_40 = 1;
    local_3e = 0;
    local_3a = 0;
    local_36 = 0;
    local_32 = 1;
    local_44 = auStack_248;
    FUN_10000f90(&local_60);
    FUN_100db2f4();
    _DAT_41820010 = local_70;
  }
  return;
}



// Function: FUN_1007ff2c at 1007ff2c
// Size: 260 bytes

void FUN_1007ff2c(int *param_1,short param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[0x76];
  if (iVar3 != 0) {
    uVar1 = FUN_100a0920();
    iVar3 = FUN_100f5278(iVar3,uVar1);
    if ((iVar3 != 0) && (*(char *)(param_1[0x76] + 0x10c) == '\0')) {
      FUN_100a0b08(param_1[0x76],(int)param_2);
      return;
    }
  }
  puVar2 = (undefined4 *)FUN_100f56e4(0x118);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100c3d2c(puVar2);
    puVar2[0xc] = 0;
    *(undefined2 *)(puVar2 + 0xd) = 0;
    *(undefined2 *)((int)puVar2 + 0x36) = 0;
    *(undefined2 *)(puVar2 + 0x42) = 0;
    *puVar2 = &DAT_41820014;
    *(undefined1 *)(puVar2 + 0x43) = 0;
    *(undefined2 *)((int)puVar2 + 0x10e) = 0;
  }
  FUN_100a09a8(puVar2,param_1,(int)param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x200),puVar2);
  param_1[0x76] = (int)puVar2;
  return;
}



// Function: FUN_10080030 at 10080030
// Size: 76 bytes

void FUN_10080030(int param_1)

{
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1d8) + 0x1d) = 0;
  }
  return;
}



// Function: FUN_100800d0 at 100800d0
// Size: 476 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100800d0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_138 [256];
  short local_38;
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar1 = false;
  do {
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = _DAT_41820010;
    _DAT_41820010 = auStack_138;
    iVar2 = FUN_10000090(auStack_138);
    if (iVar2 == 0) {
      FUN_100decb0(param_1,param_2);
      bVar1 = true;
      if ((*(char *)(param_1 + 0x16e) != '\0') && (*(char *)(param_1 + 0x1e9) != '\0')) {
        *(undefined1 *)(param_1 + 0x1e9) = 0;
        FUN_1007c714(param_1,0x3f2);
      }
      _DAT_41820010 = local_30;
    }
    else if (((*(char *)(param_1 + 0x16e) == '\0') || (*(char *)(param_1 + 0x1e9) == '\0')) ||
            (local_34 != 0x820000)) {
      FUN_100db158((int)local_38,local_34);
    }
    else {
      piVar3 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0x424,
                                   param_1);
      FUN_100db26c();
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 800));
      iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x810));
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x738));
      if (iVar2 == 0x73617665) {
        bVar1 = false;
      }
      else {
        *(undefined1 *)(param_1 + 0x1e9) = 0;
        *(undefined4 *)(param_1 + 0x128) = 0;
        FUN_10117884((int)_DAT_80410014 + (int)*(short *)(*_DAT_80410014 + 0x110),0x1f);
      }
    }
  } while (!bVar1);
  return;
}



// Function: FUN_100802b0 at 100802b0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100802b0(void)

{
  FUN_100c1c8c(&DAT_90010008,_DAT_80630028,0x1ec,0x4beeb355,&DAT_80410014);
  return;
}



// Function: FUN_100802ec at 100802ec
// Size: 8 bytes

undefined1 * FUN_100802ec(void)

{
  return &DAT_4800000c;
}



// Function: FUN_100802fc at 100802fc
// Size: 128 bytes

undefined4 * FUN_100802fc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x48000b99;
  }
  return param_1;
}



// Function: FUN_1008037c at 1008037c
// Size: 40 bytes

void FUN_1008037c(void)

{
  FUN_100802fc(0);
  return;
}



// Function: FUN_100803a4 at 100803a4
// Size: 160 bytes

void FUN_100803a4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((param_3[6] == 0x6d616c65) || (param_3[6] == 0x66656d61)) {
    uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x138));
    FUN_10034c94(param_3[6] != 0x6d616c65,uVar1);
  }
  else {
    FUN_100d5934(param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_10080444 at 10080444
// Size: 200 bytes

void FUN_10080444(undefined4 param_1,int param_2)

{
  if (param_2 == 0x646f6e74) {
    FUN_1009e534(0x123);
  }
  else if (param_2 == 0x66656d61) {
    FUN_1009e534(0x126);
  }
  else if (param_2 == 0x68697265) {
    FUN_1009e534(0x122);
  }
  else if (param_2 == 0x6d616c65) {
    FUN_1009e534(0x125);
  }
  else if (param_2 == 0x6e616d65) {
    FUN_1009e534(0x124);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_1008050c at 1008050c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008050c(void)

{
  FUN_100c1c8c(&DAT_4800000c,_DAT_60000000,0x40,&DAT_80010040,&DAT_281f0000);
  return;
}



// Function: FUN_10080548 at 10080548
// Size: 8 bytes

undefined1 * FUN_10080548(void)

{
  return &DAT_30210038;
}



// Function: FUN_10080558 at 10080558
// Size: 128 bytes

undefined4 * FUN_10080558(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = &DAT_7c0803a6;
  }
  return param_1;
}



// Function: FUN_100805d8 at 100805d8
// Size: 40 bytes

void FUN_100805d8(void)

{
  FUN_10080558(0);
  return;
}



// Function: FUN_10080600 at 10080600
// Size: 444 bytes

void FUN_10080600(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short sVar2;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 != 0x73696431) {
    if (iVar1 < 0x73696432) {
      if (iVar1 == 0x676f6c64) {
        FUN_100381dc(2);
        return;
      }
      if (iVar1 < 0x676f6c65) {
        if (iVar1 == 0x63697479) {
          FUN_100381dc(0);
          return;
        }
        if (iVar1 == 0x6576656e) {
          FUN_100381dc(1);
          return;
        }
      }
      else {
        if (iVar1 == 0x72696768) {
LAB_1008074c:
          if (*(int *)(param_3 + 0x18) == 0x6c656674) {
            sVar2 = -1;
          }
          else {
            sVar2 = 1;
          }
          FUN_10038288((int)sVar2,&DAT_41820018);
          return;
        }
        if (iVar1 < 0x72696769) {
          if (iVar1 == 0x6c656674) goto LAB_1008074c;
        }
        else if (iVar1 == 0x73696430) goto LAB_10080784;
      }
LAB_100807a4:
      FUN_100d5934();
      return;
    }
    if (iVar1 != 0x73696435) {
      if (iVar1 < 0x73696436) {
        if (iVar1 != 0x73696433) {
          if (iVar1 < 0x73696434) {
            if (iVar1 != 0x73696432) goto LAB_100807a4;
          }
          else if (iVar1 != 0x73696434) goto LAB_100807a4;
        }
      }
      else if (iVar1 != 0x73696437) {
        if (iVar1 < 0x73696438) {
          if (iVar1 == 0x73696436) goto LAB_10080784;
        }
        else if (iVar1 == 0x77696e6e) {
          FUN_100381dc(3);
          return;
        }
        goto LAB_100807a4;
      }
    }
  }
LAB_10080784:
  FUN_10038624((int)(short)((short)*(undefined4 *)(param_3 + 0x18) + -0x6430));
  return;
}



// Function: FUN_100807bc at 100807bc
// Size: 140 bytes

void FUN_100807bc(undefined4 param_1,uint param_2)

{
  if ((param_2 < 0x73696430) || (0x73696437 < param_2)) {
    if (param_2 == 0x646f6e65) {
      FUN_1009e534(0x16a);
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_1009e534((int)(short)((short)param_2 + -0x62c5));
  }
  return;
}



// Function: FUN_10080848 at 10080848
// Size: 8 bytes

undefined1 * FUN_10080848(void)

{
  return &DAT_4e800020;
}



// Function: FUN_10080858 at 10080858
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10080858(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa8), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = _FUN_10116338;
  }
  return param_1;
}



// Function: FUN_100808c0 at 100808c0
// Size: 40 bytes

void FUN_100808c0(void)

{
  FUN_10080858(0);
  return;
}



// Function: FUN_100808e8 at 100808e8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100808e8(void)

{
  undefined4 in_r7;
  
  FUN_10038288(0,in_r7);
  FUN_10075894(_DAT_57c407bd);
  return;
}



// Function: FUN_10080924 at 10080924
// Size: 44 bytes

void FUN_10080924(void)

{
  FUN_100376d8(1,1);
  return;
}



// Function: FUN_1008095c at 1008095c
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008095c(void)

{
  FUN_100c1c8c(&DAT_30210038,_DAT_bf41ffe8,0x40,&DAT_90010008,&DAT_281f0000);
  FUN_100c1c8c(&DAT_4e800020,_DAT_9421ffb0,0xa8,&DAT_607f0000,&DAT_9421ffc0);
  return;
}



// Function: FUN_100809b8 at 100809b8
// Size: 8 bytes

undefined4 FUN_100809b8(void)

{
  return 0x8362fb30;
}



// Function: FUN_100809c8 at 100809c8
// Size: 116 bytes

undefined4 * FUN_100809c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x1b4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c6b2c(puVar1);
    *puVar1 = &DAT_90010008;
    *(undefined1 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2b] = 0;
    FUN_100b19f4(puVar1 + 0x2c,0);
  }
  return puVar1;
}



// Function: FUN_10080a3c at 10080a3c
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10080a3c(void)

{
  short local_10 [4];
  
  if (_DAT_817f0000 == (short *)0x0) {
    FUN_1005cd90();
  }
  else {
    FUN_1002122c((int)*_DAT_817f0000,(int)_DAT_817f0000[1],local_10);
    FUN_10021a3c((int)local_10[0],&DAT_80410014,0);
    if (_DAT_8382fb2c == 0) {
      _DAT_7f8be040 = 1;
      _DAT_409e0034 = _DAT_817f0000;
    }
  }
  return;
}



// Function: FUN_10080ad4 at 10080ad4
// Size: 540 bytes

void FUN_10080ad4(int param_1)

{
  char cVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined **local_54;
  short local_30;
  undefined2 local_2e;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  short local_1c;
  undefined2 local_1a;
  
  piVar5 = *(int **)(param_1 + 0xac);
  ppuVar2 = &.TVect::OCECToRString;
  if ((piVar5 != (int *)0x0) && (*(char *)(param_1 + 0xa8) != '\x01')) {
    iVar3 = FUN_10117884((int)*(short *)(*piVar5 + 0x668) + (int)piVar5);
    ppuVar2 = local_54;
    if (iVar3 != 0) {
      FUN_10117884((int)*(int **)(param_1 + 0xac) +
                   (int)*(short *)(**(int **)(param_1 + 0xac) + 0x660),0,0);
    }
  }
  if ((*(int *)(param_1 + 0x1b0) != 0) && (*(char *)(param_1 + 0xa8) != '\x02')) {
    local_28 = 0;
    local_24 = 0xffff8300;
    FUN_10117884((int)*(int **)(param_1 + 0x1b0) +
                 (int)*(short *)(**(int **)(param_1 + 0x1b0) + 0x370),&local_28,0);
    ppuVar2 = local_54;
  }
  cVar1 = *(char *)(param_1 + 0xa8);
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    piVar5 = (int *)FUN_10000720(0x3e9);
    ppuVar2 = local_54;
    if ((piVar5 != (int *)0x0) && (iVar3 = *piVar5, iVar3 != 0)) {
      local_20 = *(undefined2 *)(iVar3 + 2);
      local_2e = *(undefined2 *)(iVar3 + 4);
      local_1c = *(short *)(iVar3 + 6);
      local_1a = *(undefined2 *)(iVar3 + 8);
      local_30 = local_1c - (short)*(undefined4 *)(param_1 + 0x34);
      local_1e = local_2e;
      FUN_100b0698(&local_20,&local_30);
      uVar4 = FUN_100b0578(&local_20);
      FUN_10000750(piVar5,uVar4);
    }
  }
  cVar1 = *(char *)(param_1 + 0xa8);
  if (cVar1 == '\0') {
LAB_10080ca8:
    if ((*(char *)(param_1 + 0xa8) == '\x02') && (*(int *)ppuVar2[-0x70] == 0)) {
      uVar6 = 1;
      goto LAB_10080cd0;
    }
  }
  else {
    if (cVar1 == '\x01') {
      uVar4 = FUN_100b1b08(param_1 + 0xb0);
      FUN_10032208(2,(int)(short)((short)*(undefined4 *)(param_1 + 0x38) + -4),0xc,uVar4,1);
      goto LAB_10080ca8;
    }
    if (cVar1 == '\x02') {
      FUN_10080a3c(param_1);
      goto LAB_10080ca8;
    }
  }
  uVar6 = 0;
LAB_10080cd0:
  *(undefined1 *)(param_1 + 0x4b) = uVar6;
  *(undefined1 *)(param_1 + 0x4a) = uVar6;
  return;
}



// Function: FUN_10080cf0 at 10080cf0
// Size: 756 bytes

void FUN_10080cf0(int *param_1,short param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  short sVar4;
  short sVar5;
  uint uVar3;
  short sVar6;
  int iVar7;
  int local_84;
  short local_60;
  short local_5e;
  int local_58;
  int local_54;
  short local_50;
  short local_4e;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined2 local_38;
  short local_36;
  undefined2 local_34;
  short local_32;
  undefined2 local_30;
  
  iVar7 = param_1[10];
  FUN_100db26c(iVar7);
  if (*(int *)(iVar7 + 0x158) == 0) {
    sVar4 = 0x754e;
  }
  else {
    sVar4 = 0x3a99;
  }
  if (param_1[0xe] < 0xe1) {
    sVar5 = 0x5a;
  }
  else {
    sVar5 = 0x24;
  }
  if (*(int *)(iVar7 + 0x158) == 0) {
    FUN_10117884((int)*(int **)(iVar7 + 0x14c) + (int)*(short *)(**(int **)(iVar7 + 0x14c) + 0x2b8))
    ;
  }
  else {
    FUN_1007f034(iVar7);
  }
  if (param_1[0x2b] == 0) {
    piVar1 = (int *)FUN_10000720((int)(short)(sVar4 + param_2));
    FUN_100db2a4();
    iVar7 = *piVar1;
    local_38 = *(undefined2 *)(iVar7 + 2);
    local_36 = *(short *)(iVar7 + 4);
    local_34 = *(undefined2 *)(iVar7 + 6);
    local_30 = 0x100;
    uVar3 = (int)(short)((short)param_1[0xe] + -0x43) + 1;
    sVar6 = (short)(((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0)) * 0x20;
    if (0x100 < sVar6) {
      sVar6 = 0x100;
    }
    local_32 = sVar6 + local_36 + 0x40;
    FUN_100b08d4(&local_50,&local_38);
    local_58 = (int)local_50;
    local_54 = (int)local_4e;
    uVar3 = param_1[0xe] - local_54;
    local_3c = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    local_40 = (int)sVar5;
    puVar2 = (undefined4 *)FUN_100f56e4(0xdc);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100cdb5c(puVar2);
      *puVar2 = *(undefined4 *)(local_84 + -0x1948);
      *(undefined2 *)(puVar2 + 0x2c) = 0;
      *(undefined2 *)((int)puVar2 + 0xb2) = 0;
      *(undefined2 *)(puVar2 + 0x2d) = 0;
      puVar2[0x31] = 0;
      *(undefined2 *)(puVar2 + 0x32) = 0;
      puVar2[0x36] = 0;
    }
    FUN_100b08d4(&local_60,&local_38);
    local_48 = (int)local_60;
    local_44 = (int)local_5e;
    FUN_100d08c4(puVar2,param_1,&local_40,&local_48,5,5,(int)(short)(sVar4 + param_2));
    puVar2[6] = 0x70726f67;
    *(undefined2 *)((int)puVar2 + 0xb2) = 100;
    param_1[0x2b] = (int)puVar2;
  }
  else {
    FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x7a8),
                 (int)(short)(sVar4 + param_2),0);
    FUN_100861b8(param_1[0x2b],0,0);
  }
  FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x660),1,0);
  *(undefined1 *)(param_1 + 0x2a) = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x488));
  return;
}



// Function: FUN_10080fe4 at 10080fe4
// Size: 92 bytes

void FUN_10080fe4(int param_1,short param_2)

{
  if (*(int *)(param_1 + 0xac) == 0) {
    FUN_10080cf0(param_1,0);
  }
  FUN_100861b8(*(undefined4 *)(param_1 + 0xac),(int)param_2,1);
  return;
}



// Function: FUN_10081040 at 10081040
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081040(int *param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  FUN_100b1d90(param_1 + 0x2c);
  local_20 = _DAT_41820018;
  local_1c = _DAT_4182001c;
  local_18 = param_1[0xd];
  local_14 = param_1[0xe];
  if (param_1[0x2b] != 0) {
    local_18 = *(int *)(param_1[0x2b] + 0x2c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),&local_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  return;
}



// Function: FUN_100810e8 at 100810e8
// Size: 1992 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100810e8(int *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int local_394;
  uint local_370 [6];
  undefined1 local_358 [256];
  undefined1 local_258 [256];
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_150 [260];
  
  *(undefined1 *)(param_1 + 0x2a) = 2;
  if (DAT_4bfde391 != '\0') {
    FUN_10084ee0();
    FUN_10084ef0(0);
  }
  if (param_1[0x6c] == 0) {
    if (param_1[0xe] < 0x71) {
      uVar8 = 0x3ef;
    }
    else if (param_1[0xe] < 0xe1) {
      uVar8 = 0x3ee;
    }
    else {
      uVar8 = 0x3ed;
    }
    piVar5 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 0xd0),
                                 param_1[10],param_1,uVar8,&DAT_41820018);
    param_1[0x6c] = (int)piVar5;
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x4d0));
  }
  else {
    iVar9 = FUN_100e11c8(param_1[0x6c] + 0x2c,&DAT_41820018);
    if (iVar9 != 0) {
      FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x370),&DAT_41820018,1);
    }
  }
  FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x660),1,0);
  if (**(int **)(local_394 + -0x1c0) == 0) {
    local_158 = 0;
    local_154 = 0xffff8300;
    FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x370),&local_158,0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  else {
    iVar9 = 0;
    do {
      iVar6 = FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),
                           iVar9 + 0x61726d30);
      piVar5 = (int *)FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),
                                   iVar9 + 0x63686530);
      if ((iVar6 != 0) && (piVar5 != (int *)0x0)) {
        if (iVar9 < _DAT_281f0000) {
          uVar7 = (int)*(short *)(_DAT_4bffe775 + 0x110) +
                  (int)*(short *)(&DAT_83bf0004 + iVar9 * 2);
          sVar1 = *(short *)(&DAT_2c090000 + iVar9 * 2);
          FUN_10079ee8(iVar6,(int)*(char *)(*(int *)(&DAT_819f0008 + iVar9 * 4) + 4),
                       (int)*(short *)(_DAT_4bffe775 + 0x110),1);
          FUN_10079f68(iVar6,0,0,(int)*(char *)(*(int *)(&DAT_819f0008 + iVar9 * 4) + 7),
                       (int)*(char *)(*(int *)(&DAT_819f0008 + iVar9 * 4) + 8),1);
          FUN_1007a018(iVar6,(int)(short)((short)uVar7 +
                                          (short)(((int)uVar7 >> 3) +
                                                 (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0)) * -8 +
                                         2),2,sVar1 == 0,1);
          if (param_1[0xe] < 0x71) {
            iVar6 = *(short *)(&DAT_40820010 + iVar9 * 2) * 8 + -0x7c5d04cc;
          }
          else {
            iVar6 = *(short *)(&DAT_40820010 + iVar9 * 2) * 8 + -0x7c3d04c8;
          }
          FUN_100850e8(piVar5,8,iVar6,0x24,0xf,1);
          iVar6 = -(int)*(short *)(&DAT_40820010 + iVar9 * 2) + -1;
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x660),
                       iVar6 + (-(uint)(iVar6 == 0) -
                               (-(int)*(short *)(&DAT_40820010 + iVar9 * 2) + -2)) & 0xff,1);
        }
        else {
          FUN_10079ee8(iVar6,0xffffffff,(int)*(short *)(_DAT_4bffe775 + 0x110),1);
          FUN_10079f68(iVar6,0,0,0,0,1);
          FUN_1007a018(iVar6,1,0,0,1);
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x660),0,1);
        }
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < 8);
    FUN_10042344(&DAT_819f0008,&DAT_2c090000,(int)_DAT_281f0000);
    if (**(int **)(local_394 + -0x1c0) == 0) {
      local_370[0] = *(uint *)(*(int *)(local_394 + -0x1554) + 0x24) & 0xffffff00;
    }
    else {
      FUN_10001dd0(local_370,*(int *)(local_394 + -0x1554) + 0x28,
                   (int)**(short **)(local_394 + -0x1a4));
    }
    piVar5 = (int *)FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),
                                 0x6d6f7665);
    if (piVar5 != (int *)0x0) {
      local_258[0] = 0;
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7a0),local_258);
      FUN_100b19f4(auStack_150,local_370);
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7c8),auStack_150,0);
      local_358[0] = 0;
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7a0),local_358);
      iVar9 = FUN_100ef228(local_358,local_258);
      if (iVar9 != 0) {
        FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x4d0));
      }
    }
    iVar9 = FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),0x67726f75);
    if (iVar9 != 0) {
      iVar6 = FUN_1005cd18();
      FUN_100850e8(iVar9,8,iVar6 * 8 + *(int *)(local_394 + -0x153c),0x24,0xf,1);
    }
    bVar2 = true;
    bVar3 = false;
    bVar4 = false;
    iVar9 = 0;
    if (0 < _DAT_281f0000) {
      do {
        if (*(short *)(&DAT_2c090000 + iVar9 * 2) != 0) {
          if (*(char *)(_DAT_281f0000 + *(char *)(*(int *)(&DAT_819f0008 + iVar9 * 4) + 4) * 6 + 1)
              != '\0') {
            bVar3 = true;
          }
          if (*(char *)(_DAT_281f0000 + *(char *)(*(int *)(&DAT_819f0008 + iVar9 * 4) + 4) * 6 + 2)
              != '\0') {
            bVar4 = true;
          }
          if ((*(ushort *)(*(int *)(&DAT_819f0008 + iVar9 * 4) + 0xc) & 0x1000) == 0) {
            bVar2 = false;
          }
        }
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < _DAT_281f0000);
    }
    iVar9 = FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x308),0x666c7920);
    if (iVar9 != 0) {
      iVar6 = FUN_100421f0(&DAT_819f0008,&DAT_2c090000,(int)_DAT_281f0000);
      if (iVar6 == 0) {
        if (bVar2) {
          FUN_100850e8(iVar9,8,*(undefined4 *)(local_394 + -0x1538),0x24,0xf,1);
        }
        else if (bVar3) {
          if (bVar4) {
            FUN_100850e8(iVar9,8,*(undefined4 *)(local_394 + -0x1330),0x24,0xf,1);
          }
          else {
            FUN_100850e8(iVar9,8,*(undefined4 *)(local_394 + -0x132c),0x24,0xf,1);
          }
        }
        else if (bVar4) {
          FUN_100850e8(iVar9,8,*(undefined4 *)(local_394 + -0x1328),0x24,0xf,1);
        }
        else {
          FUN_100850e8(iVar9,0xffffffff,*(undefined4 *)(local_394 + -0x1334),0x24,0xf,1);
        }
      }
      else {
        FUN_100850e8(iVar9,8,*(undefined4 *)(local_394 + -0x1334),0x24,0xf,1);
      }
    }
  }
  return;
}



// Function: FUN_100818b0 at 100818b0
// Size: 300 bytes

void FUN_100818b0(int *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int local_18;
  int iStack_14;
  
  local_18 = param_1[0xd];
  iStack_14 = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  if (param_1[0x2b] != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x2e8) + (int)param_1,param_1[0x2b]);
    FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x90));
    param_1[0x2b] = 0;
  }
  if (param_1[0x6c] != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e8),param_1[0x6c]);
    FUN_10117884(param_1[0x6c] + (int)*(short *)(*(int *)param_1[0x6c] + 0x90));
    param_1[0x6c] = 0;
  }
  if ((((param_3 != '\0') && (iVar2 = FUN_100e11c8(param_1 + 0xd,&local_18), iVar2 != 0)) &&
      (cVar1 = *(char *)(param_1 + 0x2a), cVar1 != '\0')) &&
     ((cVar1 != '\x01' && (cVar1 == '\x02')))) {
    FUN_100810e8(param_1);
  }
  return;
}



// Function: FUN_100819e4 at 100819e4
// Size: 136 bytes

undefined4 * FUN_100819e4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x44), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x60000000;
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}



// Function: FUN_10081a6c at 10081a6c
// Size: 40 bytes

void FUN_10081a6c(void)

{
  FUN_100819e4(0);
  return;
}



// Function: FUN_10081a94 at 10081a94
// Size: 188 bytes

void FUN_10081a94(int param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if (param_2 == 0x67726f75) {
      FUN_1005d364(0,0,8);
    }
    else if (param_2 == 0x696e666f) {
      FUN_1005d364(0,0,(int)*(short *)(param_1 + 0x40));
    }
    else {
      FUN_10078c58();
    }
  }
  else {
    FUN_1005d364(0,0,(int)(short)((short)param_2 + -0x6d30));
  }
  return;
}



// Function: FUN_10081b50 at 10081b50
// Size: 652 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081b50(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_38;
  short local_30;
  short local_2e;
  
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_38 = CONCAT22(_DAT_607c0006,_DAT_607c0004);
  *param_3 = local_38;
  if (param_2 == 0x696e666f) {
    piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                                 (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x696e666f);
    FUN_100db26c();
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3a8));
    FUN_100b02d0(&local_30);
    FUN_100b0384(&local_30);
    FUN_10001518();
    uVar2 = piVar1[0xe];
    if ((uint)(uVar2 < 0x71) == (int)uVar2 >> 0x1f) {
      if ((uint)(uVar2 < 0xe1) == (int)uVar2 >> 0x1f) {
        if (local_2e < _DAT_7f074044) {
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        else if (local_2e < _DAT_7f074048) {
          *(undefined2 *)(param_1 + 0x40) = 1;
        }
        else if (local_2e < _DAT_7f07404c) {
          *(undefined2 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined2 *)(param_1 + 0x40) = 3;
        }
      }
      else if (local_30 < _DAT_811f001a) {
        if (local_2e < _DAT_811f001c) {
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        else {
          *(undefined2 *)(param_1 + 0x40) = 1;
        }
      }
      else if (local_2e < _DAT_811f001c) {
        *(undefined2 *)(param_1 + 0x40) = 2;
      }
      else {
        *(undefined2 *)(param_1 + 0x40) = 3;
      }
    }
    else if (local_30 < _DAT_80ff0012) {
      *(undefined2 *)(param_1 + 0x40) = 0;
    }
    else if (local_30 < _DAT_80ff0016) {
      *(undefined2 *)(param_1 + 0x40) = 1;
    }
    else if (local_30 < _DAT_80ff001a) {
      *(undefined2 *)(param_1 + 0x40) = 2;
    }
    else {
      *(undefined2 *)(param_1 + 0x40) = 3;
    }
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x3a8));
  }
  return;
}



// Function: FUN_10081ddc at 10081ddc
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081ddc(void)

{
  FUN_100c1c8c(0x8362fb30,_DAT_607f0000,0x1b4,&DAT_281f0000,&DAT_80410014);
  FUN_100c1c8c(0x4bfdf355,_DAT_4082000c,0x44,&DAT_63e30000,&DAT_281f0000);
  return;
}



// Function: FUN_10081e38 at 10081e38
// Size: 8 bytes

undefined4 FUN_10081e38(void)

{
  return 0x480001a0;
}



// Function: FUN_10081e48 at 10081e48
// Size: 192 bytes

undefined4 * FUN_10081e48(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc4), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_809a0000;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined2 *)((int)param_1 + 0x86) = 0;
    FUN_100b0368(param_1 + 0x22,&DAT_63e30000);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    *(undefined2 *)(param_1 + 0x2f) = 0xffff;
    *(undefined1 *)((int)param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0x23) = 0;
    param_1[0x27] = 0;
    *(undefined2 *)(param_1 + 0x28) = 0;
    param_1[0x2c] = 0;
  }
  return param_1;
}



// Function: FUN_10081f08 at 10081f08
// Size: 40 bytes

void FUN_10081f08(void)

{
  FUN_10081e48(0);
  return;
}



// Function: FUN_10081f30 at 10081f30
// Size: 156 bytes

void FUN_10081f30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_10105b08(param_1,param_2);
  *(undefined4 *)(param_1 + 0x80) = param_2;
  FUN_10044d38(param_1 + 0x8c,0x3ea);
  iVar1 = FUN_1000a12c(param_1 + 0xa0,(int)*(short *)(param_1 + 0x90),
                       (int)*(short *)(param_1 + 0x92),8,0,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  return;
}



// Function: FUN_10081fcc at 10081fcc
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081fcc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(char *)((int)param_1 + 0xbe) == '\0') {
    local_28 = 0;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_20 = _DAT_41820010;
    _DAT_41820010 = auStack_128;
    iVar1 = FUN_10000090(auStack_128);
    if (iVar1 == 0) {
      FUN_10007f78();
      _DAT_41820010 = local_20;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xbe) = 1;
      FUN_100db158((int)local_28,local_24);
    }
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_2,auStack_130);
    FUN_10067270();
    FUN_100b0578(auStack_130);
    FUN_10002148();
  }
  return;
}



// Function: FUN_100820ac at 100820ac
// Size: 144 bytes

void FUN_100820ac(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_10105d28(param_1,param_2);
  *(undefined4 *)(param_1 + 0x80) = param_2;
  FUN_10044d38(param_1 + 0x8c,0x3ea);
  iVar1 = FUN_1000a12c(param_1 + 0xa0,(int)*(short *)(param_1 + 0x90),
                       (int)*(short *)(param_1 + 0x92),8,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  return;
}



// Function: FUN_1008213c at 1008213c
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008213c(undefined4 param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*(char *)(_DAT_57c407bd + 0x9a) != '\0') ||
      (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 0)) ||
     (*(char *)(_DAT_57c407bd + 0x99) != '\0')) {
    FUN_100ecc68();
    return;
  }
  iVar4 = (int)(short)(param_2[1] / 0x28);
  iVar3 = (int)(short)(*param_2 / 0x28);
  bVar1 = false;
  if ((1 < *(short *)(param_3 + 0x28)) &&
     ((iVar2 = FUN_1003b4a4(iVar4,iVar3,1), iVar2 == 5 || ((_DAT_817f0000 != 0 && (iVar2 == 0))))))
  {
    FUN_10021524(iVar4,iVar3,0);
    FUN_1005e858();
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  FUN_1000b3d8(iVar4,iVar3,1,1,param_2);
  return;
}



// Function: FUN_10082260 at 10082260
// Size: 192 bytes

void FUN_10082260(int *param_1)

{
  int iVar1;
  int local_34;
  
  if ((*(char *)(param_1 + 0x21) != '\0') &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    FUN_10009b48(param_1 + 0x28,(int)(short)(*(short *)((int)param_1 + 0x86) << 5),0,0x1f,0x1e,
                 *(undefined4 *)(local_34 + -0x1208),
                 (int)(short)(*(short *)((int)param_1 + 0x8a) * 0x28 + 8),
                 (int)(short)(*(short *)(param_1 + 0x22) * 0x28 + 7));
  }
  return;
}



// Function: FUN_10082320 at 10082320
// Size: 112 bytes

undefined4 FUN_10082320(int param_1,char param_2)

{
  short sVar1;
  
  if ((param_2 == '\x01') && (*(char *)(param_1 + 0x84) != '\0')) {
    sVar1 = *(short *)(param_1 + 0x86) + 1;
    *(short *)(param_1 + 0x86) = sVar1;
    if (sVar1 == 4) {
      *(undefined2 *)(param_1 + 0x86) = 0;
    }
    FUN_10082260();
  }
  return 0;
}



// Function: FUN_10082390 at 10082390
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082390(int param_1)

{
  FUN_1000a094(param_1 + 0x8c);
  FUN_1000a094(param_1 + 0xa0);
  FUN_1000a094(&DAT_4800000c);
  _DAT_30840001 = 0;
  _DAT_909a0000 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_100019c8(*(int *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  FUN_10001488();
  FUN_100ef510(*(undefined4 *)(param_1 + 0xb8));
  FUN_10106060(param_1);
  return;
}



// Function: FUN_10082430 at 10082430
// Size: 528 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082430(int param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined2 *)(param_1 + 0x86) = 0;
  *(undefined2 *)(param_1 + 0x8a) = param_2;
  *(undefined2 *)(param_1 + 0x88) = param_3;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10001290(*(int *)(param_1 + 0x9c));
  }
  if (iVar2 != 0) {
    iVar3 = FUN_10001d70(iVar2);
    if (iVar3 != 0) {
      FUN_10003468(iVar2);
      goto LAB_100824d8;
    }
  }
  FUN_10044d38(param_1 + 0x8c,0x3ea);
LAB_100824d8:
  FUN_10009b48(param_1 + 0x8c,0,0,(int)*(short *)(param_1 + 0x90),(int)*(short *)(param_1 + 0x92),
               param_1 + 0xa0,0);
  if ((*(ushort *)(_DAT_817f0000 + 0xc) & 0x1000) == 0) {
    sVar5 = (short)*(char *)(_DAT_817f0000 + 4);
  }
  else {
    sVar5 = 5;
  }
  uVar4 = (uint)sVar5;
  cVar1 = *(char *)(_DAT_817f0000 + 5);
  if ((-1 < cVar1) && (cVar1 < '\t')) {
    FUN_100462c8((int)(short)(cVar1 + 0x10));
    FUN_100451f4((int)(short)(*(char *)(_DAT_817f0000 + 5) + 0x10));
    iVar2 = 0;
    do {
      FUN_10009d38(&DAT_2c850000 + *(char *)(_DAT_817f0000 + 5) * 0x14,
                   (int)(short)((short)(uVar4 + (((int)uVar4 >> 4) +
                                                (uint)((int)uVar4 < 0 && (uVar4 & 0xf) != 0)) *
                                                -0x10) * 0x20),
                   (int)(short)((short)((((int)uVar4 >> 4) +
                                        (uint)((int)uVar4 < 0 && (uVar4 & 0xf) != 0)) * 0xf) * 2),
                   0x20,0x1d,param_1 + 0xa0,(int)(short)(iVar2 << 5),0);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 4);
    FUN_1004530c((int)(short)(*(char *)(_DAT_817f0000 + 5) + 0x10));
  }
  return;
}



// Function: FUN_10082640 at 10082640
// Size: 1200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082640(int *param_1,int *param_2,int *param_3,undefined2 *param_4,short *param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int local_2f4;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined1 auStack_2c0 [8];
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  undefined2 local_2ae;
  short local_2ac;
  short local_2aa;
  undefined2 local_2a8;
  undefined2 local_2a6;
  undefined2 local_2a4;
  undefined2 local_2a2;
  undefined1 auStack_2a0 [276];
  undefined4 local_18c;
  undefined1 auStack_188 [276];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int *local_58;
  undefined4 local_54;
  int local_50;
  
  local_58 = _DAT_28030000;
  iVar5 = *_DAT_28030000;
  uVar6 = *(undefined4 *)(iVar5 + 0x41c);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5b0));
  local_54 = uVar6;
  uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a8));
  local_50 = iVar5;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  FUN_10117884((int)local_58 + (int)*(short *)(local_50 + 0x418),uVar2,uVar6,uVar1,param_4,param_5,
               param_6,param_7);
  if (param_1[0x2d] != 0) {
    FUN_100019c8(param_1[0x2d]);
    param_1[0x2d] = 0;
  }
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  iVar5 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x3a8));
  if (iVar5 != 0) {
    FUN_100ee64c(auStack_188);
    FUN_10001e48(local_74);
    FUN_100ee64c(auStack_2a0);
    uVar1 = local_18c;
    local_2a8 = 0xd8f0;
    local_2a6 = 0xd8f0;
    local_2a4 = 10000;
    local_2a2 = 10000;
    uVar6 = FUN_100b0578(&local_2a8);
    FUN_10003150(uVar1,uVar6);
    FUN_10001548(local_18c);
    FUN_100b02d0(auStack_2c0);
    FUN_1000c4c4((int)(short)(param_2[1] / 0x28),(int)(short)(*param_2 / 0x28),auStack_2c0);
    iVar5 = FUN_100b04f0(auStack_2c0,*(undefined4 *)(local_2f4 + -0xe60));
    if (iVar5 != 0) {
      FUN_10001548(local_74);
      FUN_100ee77c(auStack_2a0,2);
      FUN_100ee77c(auStack_188,2);
      return;
    }
    puVar4 = *(undefined4 **)(local_2f4 + -0x150c);
    local_70 = *puVar4;
    uStack_6c = puVar4[1];
    uStack_68 = puVar4[2];
    uStack_64 = puVar4[3];
    local_60 = puVar4[4];
    iVar5 = FUN_1000a12c(&local_70,(int)_DAT_607c0004,(int)_DAT_607c0006,8,0);
    if (iVar5 == 0) {
      FUN_100db26c(0);
    }
    FUN_10000870(&local_2c4,&local_2c8);
    FUN_10000888(local_60,0);
    FUN_100b2268(*(undefined4 *)(local_2f4 + -0x1d4));
    FUN_100008b8();
    FUN_100b2268(*(int *)(local_2f4 + -0x1d4) + 0x5fa);
    FUN_100021c0();
    if (local_60 != 0) {
      FUN_10009a98(local_60);
    }
    FUN_1000b3d8((int)(short)(param_2[1] / 0x28),(int)(short)(*param_2 / 0x28),2,1,param_2);
    if (local_60 != 0) {
      FUN_10009b00(local_60);
    }
    FUN_10000888(local_2c4,local_2c8);
    local_2aa = _DAT_607c0004;
    local_2ac = _DAT_607c0006;
    local_2b0 = 0;
    local_2ae = 0;
    FUN_100b0578(&local_2b0);
    iVar5 = FUN_100001b0();
    param_1[0x2d] = iVar5;
    FUN_10009b48(&local_70,0,0,(int)_DAT_607c0004,(int)_DAT_607c0006,
                 *(undefined4 *)(local_2f4 + -0x1208),0,0);
    FUN_100001c8();
    FUN_1000a094(&local_70);
    FUN_10001548(local_74);
    FUN_100ee77c(auStack_2a0,2);
    FUN_100ee77c(auStack_188,2);
  }
  *param_4 = 5;
  *(int *)(param_4 + 1) = param_1[0x2d];
  iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if ((iVar5 != 0) && (param_3 != (int *)0x0)) {
    local_2b8 = *(undefined4 *)(*param_3 + 2);
    local_2b4 = *(undefined4 *)(*param_3 + 6);
    *param_6 = local_2b8;
    param_6[1] = local_2b4;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      FUN_10117884(param_5,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    }
  }
  return;
}



// Function: FUN_10082af0 at 10082af0
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082af0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,short param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack00000028;
  undefined1 auStack_20 [8];
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    uStack00000028 = param_5;
    FUN_100b0384(&stack0x00000028);
    FUN_10002fd0();
    puVar1 = (undefined4 *)FUN_100b0368(auStack_20,&stack0x00000028);
    iVar2 = FUN_100000f0(param_4,*puVar1,0,0,0x81,(int)param_7,2);
    if (iVar2 != -0x355) {
      FUN_100db2f4(iVar2);
    }
    FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x18),param_3,param_3);
    FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_3,param_3);
  }
  return;
}



// Function: FUN_10082be8 at 10082be8
// Size: 192 bytes

void FUN_10082be8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_20;
  short local_1e;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  local_18 = 0;
  local_16 = 0;
  local_14 = 0x28;
  local_12 = 0x28;
  local_1e = (short)(param_2[1] / 0x28) * 0x28;
  local_20 = (short)(*param_2 / 0x28) * 0x28;
  FUN_100b065c(&local_18,&local_20);
  uVar1 = FUN_100b0578(&local_18);
  FUN_10003150(param_3,uVar1);
  return;
}



// Function: FUN_10082ca8 at 10082ca8
// Size: 636 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082ca8(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  FUN_1010d2f8(param_1);
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x5f0) + (int)param_1,1);
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x600),&local_38);
    FUN_10117884((int)*(short *)(*param_1 + 0x2c0) + (int)param_1,&local_38);
    iVar3 = FUN_100e1a3c(&local_38,1);
    sVar5 = (short)((iVar3 + 0x27) / 0x28) + 1;
    sVar1 = sVar5 * 0x28;
    iVar3 = FUN_100e1a3c(&local_38,0);
    sVar6 = (short)((iVar3 + 0x27) / 0x28) + 1;
    sVar2 = sVar6 * 0x28;
    *(short *)(_DAT_4bffe775 + 0x17e) = (short)((local_2c + local_34) / 0x50);
    *(short *)(_DAT_4bffe775 + 0x180) = (short)((local_30 + local_38) / 0x50);
    *(short *)(_DAT_4bffe775 + 0x178) = (short)(local_34 / 0x28);
    *(short *)(_DAT_4bffe775 + 0x176) = (short)(local_38 / 0x28);
    local_28 = 0x70;
    sVar5 = *(short *)(_DAT_4bffe775 + 0x178) + sVar5;
    if (0x70 < sVar5) {
      sVar5 = 0x70;
    }
    *(short *)(_DAT_4bffe775 + 0x17c) = sVar5;
    local_26 = 0x9c;
    sVar6 = *(short *)(_DAT_4bffe775 + 0x176) + sVar6;
    if (0x9c < sVar6) {
      sVar6 = 0x9c;
    }
    *(short *)(_DAT_4bffe775 + 0x17a) = sVar6;
    if ((_DAT_909a0000 != sVar1) || (_DAT_30840001 != sVar2)) {
      local_3e = *(undefined2 *)(_DAT_4bffe775 + 0x178);
      local_40 = *(undefined2 *)(_DAT_4bffe775 + 0x176);
      local_3a = *(undefined2 *)(_DAT_4bffe775 + 0x17c);
      local_3c = *(undefined2 *)(_DAT_4bffe775 + 0x17a);
      _DAT_30840001 = sVar2;
      _DAT_909a0000 = sVar1;
      FUN_10009944(&local_40);
      iVar3 = FUN_1000a12c(&DAT_4800000c,(int)_DAT_909a0000,(int)_DAT_30840001,8,1,0);
      if (iVar3 == 0) {
        DAT_40860188 = 0;
      }
      else {
        DAT_40860188 = 1;
      }
    }
  }
  return;
}



// Function: FUN_10082f24 at 10082f24
// Size: 408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082f24(int *param_1,short param_2,short param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),1);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x600),auStack_48);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),auStack_48);
  FUN_100e1a64(&local_50,auStack_48);
  local_38 = _DAT_41820018;
  local_34 = _DAT_4182001c;
  local_30 = local_50;
  local_2c = local_4c;
  uVar2 = 0x28 - local_4c;
  local_54 = param_2 * 0x28 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  uVar2 = 0x28 - local_50;
  local_58 = param_3 * 0x28 + ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  FUN_100e15a8(&local_38,auStack_68,&local_58);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_68,&local_50,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  return;
}



// Function: FUN_100830bc at 100830bc
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100830bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x4d0));
  FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x4c8));
  FUN_1010c5f0(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_10083144 at 10083144
// Size: 456 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083144(int *param_1,int *param_2,undefined4 param_3)

{
  short sVar3;
  undefined4 *puVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar5 = -1;
  if ((*(char *)(_DAT_57c407bd + 0x9a) == '\0') &&
     (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) == 0)) {
    sVar3 = FUN_1003b4a4((int)(short)(param_2[1] / 0x28),(int)(short)(*param_2 / 0x28),1);
    iVar5 = (int)(short)(sVar3 + 1000);
  }
  if (iVar5 != *(short *)(param_1 + 0x2f)) {
    iVar4 = param_1[0x2e];
    param_1[0x2e] = 0;
    if (iVar5 == -1) {
      FUN_100014a0(0x80a2db22);
    }
    else {
      FUN_10117884(auStack_30,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
      puVar1 = (undefined4 *)FUN_100b0368(auStack_28,auStack_30);
      iVar2 = FUN_100033c0(*puVar1,param_3);
      if (iVar2 == 0) {
        FUN_100014a0(0x80a2db22);
      }
      else {
        iVar2 = FUN_10002ac0(iVar5);
        param_1[0x2e] = iVar2;
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)FUN_10001470(iVar5);
          if (puVar1 == (undefined4 *)0x0) {
            FUN_100014a0(0x80a2db22);
          }
          else {
            FUN_100014a0(*puVar1);
          }
        }
        else {
          FUN_10002850(iVar2);
        }
      }
    }
    *(short *)(param_1 + 0x2f) = (short)iVar5;
    if (iVar4 != 0) {
      FUN_100032a0(iVar4);
    }
    if (_DAT_48001681 != 0) {
      *(undefined2 *)(_DAT_48001681 + 0xa0) = 0xffff;
    }
  }
  return;
}



// Function: FUN_1008330c at 1008330c
// Size: 976 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008330c(int param_1,int param_2)

{
  short sVar1;
  
  if ((*(char *)(_DAT_57c407bd + 0x9a) != '\0') ||
     (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0) != 0)) {
    FUN_100da080();
    return;
  }
  sVar1 = *(short *)(param_2 + 0x24);
  if (sVar1 == 0x34) goto LAB_100834d8;
  if (sVar1 < 0x35) {
    if (sVar1 == 0x1c) {
      FUN_100418d8(0x34);
      return;
    }
    if (sVar1 < 0x1d) {
      if (sVar1 == 8) {
LAB_100835e0:
        if ((*(short *)(param_2 + 0x24) == 0x1b) && (*(short *)(param_2 + 0x26) != 0x47)) {
          FUN_10117884((int)*(int **)(param_1 + 0x80) +
                       (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x580);
          return;
        }
        FUN_10117884((int)*(int **)(param_1 + 0x80) +
                     (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57c);
        return;
      }
      if (sVar1 < 9) {
        if (sVar1 == 4) {
          FUN_10117884((int)*(int **)(param_1 + 0x80) +
                       (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57a);
          return;
        }
        if (sVar1 < 5) {
          if (sVar1 == 3) goto LAB_100835bc;
        }
        else if (sVar1 == 5) {
          FUN_100402e0();
          return;
        }
      }
      else {
        if (sVar1 == 0xd) {
LAB_100835bc:
          FUN_10117884((int)*(int **)(param_1 + 0x80) +
                       (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57d);
          return;
        }
        if (sVar1 < 0xe) {
          if (sVar1 == 9) {
            FUN_10117884((int)*(int **)(param_1 + 0x80) +
                         (int)*(short *)(**(int **)(param_1 + 0x80) + 0x110),0x57e);
            return;
          }
        }
        else if (sVar1 == 0x1b) goto LAB_100835e0;
      }
    }
    else {
      if (sVar1 == 0x20) {
        FUN_1003fe94();
        return;
      }
      if (sVar1 < 0x21) {
        if (sVar1 == 0x1e) {
          FUN_100418d8(0x38);
          return;
        }
        if (sVar1 < 0x1f) {
          if (sVar1 == 0x1d) {
            FUN_100418d8(0x36);
            return;
          }
        }
        else if (sVar1 == 0x1f) {
          FUN_100418d8(0x32);
          return;
        }
      }
      else {
        if (sVar1 == 0x32) goto LAB_100834d8;
        if (sVar1 < 0x33) {
          if (sVar1 == 0x31) goto LAB_100834d8;
        }
        else if (sVar1 == 0x33) goto LAB_100834d8;
      }
    }
  }
  else {
    if (sVar1 == 100) {
      FUN_100418d8(0x36);
      return;
    }
    if (sVar1 < 0x65) {
      if (sVar1 == 0x38) {
LAB_100834d8:
        FUN_100418d8((int)(char)*(undefined2 *)(param_2 + 0x24));
        return;
      }
      if (sVar1 < 0x39) {
        if (sVar1 == 0x36) goto LAB_100834d8;
        if (sVar1 < 0x37) {
          if (sVar1 == 0x35) goto LAB_100834d8;
        }
        else if (sVar1 == 0x37) goto LAB_100834d8;
      }
      else {
        if (sVar1 == 0x61) {
          FUN_100418d8(0x34);
          return;
        }
        if (sVar1 < 0x62) {
          if (sVar1 == 0x39) goto LAB_100834d8;
        }
        else if (sVar1 == 99) {
          FUN_100418d8(0x33);
          return;
        }
      }
    }
    else {
      if (sVar1 == 0x77) {
        FUN_100418d8(0x38);
        return;
      }
      if (sVar1 < 0x78) {
        if (sVar1 == 0x71) {
          FUN_100418d8(0x37);
          return;
        }
        if (sVar1 < 0x72) {
          if (sVar1 == 0x65) {
            FUN_100418d8(0x39);
            return;
          }
        }
        else if (sVar1 == 0x73) {
          FUN_100418d8(0x35);
          return;
        }
      }
      else {
        if (sVar1 == 0x7a) {
          FUN_100418d8(0x31);
          return;
        }
        if (sVar1 < 0x7b) {
          if (sVar1 == 0x78) {
            FUN_100418d8(0x32);
            return;
          }
        }
        else if (sVar1 == 0x7f) goto LAB_100835e0;
      }
    }
  }
  if (*(short *)(param_2 + 0x24) == 0x6f) {
    FUN_100da080();
  }
  else {
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 0x100;
    FUN_100d9be4();
  }
  return;
}



// Function: FUN_100836dc at 100836dc
// Size: 740 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100836dc(int *param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_c8 [16];
  int local_b8 [3];
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  
  piVar8 = local_b8;
  piVar7 = local_b8 + 2;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  piVar3 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),1);
  FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x600),auStack_68);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2c0),auStack_68);
  FUN_100e1a64(&local_70,auStack_68);
  local_ac = 0x118;
  local_b8[2] = local_6c;
  if (0x118 < local_6c) {
    piVar7 = &local_ac;
  }
  iVar6 = *piVar7;
  local_b8[1] = 0x118;
  local_b8[0] = local_70;
  if (0x118 < local_70) {
    piVar8 = local_b8 + 1;
  }
  iVar9 = *piVar8;
  local_58 = 0;
  local_54 = 0;
  iVar1 = param_2 * 0x28;
  uVar4 = 0x28 - iVar6;
  local_94 = iVar1 + ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  iVar2 = param_3 * 0x28;
  uVar4 = 0x28 - iVar9;
  local_98 = iVar2 + ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  local_50 = iVar9;
  local_4c = iVar6;
  FUN_100e1630(&local_58,&local_98);
  iVar5 = FUN_100e1af8(auStack_68,&local_58);
  if (iVar5 == 0) {
    local_74 = iVar1 + 0x28;
    local_78 = iVar2 + 0x28;
    local_80 = iVar2;
    local_7c = iVar1;
    iVar5 = FUN_100e1af8(auStack_68,&local_80);
    if (iVar5 == 0) {
      local_90 = _DAT_41820018;
      local_8c = _DAT_4182001c;
      local_88 = local_70;
      local_84 = local_6c;
      uVar4 = 0x28 - local_6c;
      local_a4 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0) + iVar1;
      uVar4 = 0x28 - local_70;
      local_a8 = iVar2 + ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      FUN_100e15a8(&local_90,auStack_c8,&local_a8);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_c8,&local_70,0);
    }
    else {
      local_a0 = iVar9;
      local_9c = iVar6;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),&local_58,&local_a0,0);
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
  return;
}



// Function: FUN_100839c0 at 100839c0
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100839c0(int param_1,undefined1 param_2)

{
  *(undefined2 *)(param_1 + 0xbc) = 0xffff;
  if (_DAT_48001681 != 0) {
    *(undefined2 *)(_DAT_48001681 + 0xa0) = 0xffff;
  }
  FUN_101064d4(param_1,param_2);
  return;
}



// Function: FUN_10083a08 at 10083a08
// Size: 764 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083a08(int param_1,char param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 char param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar9;
  int iVar10;
  int local_4c;
  short sVar8;
  
  sVar5 = (short)(param_5[1] / 0x28);
  iVar9 = (int)sVar5;
  sVar8 = (short)(*param_5 / 0x28);
  iVar7 = (int)sVar8;
  if (param_2 == '\0') {
    _DAT_80ff0008 = sVar8;
    _DAT_90e90008 = sVar5;
    if ((iVar9 == *_DAT_817f0000) && (iVar7 == _DAT_817f0000[1])) {
      DAT_63e30000 = '\0';
    }
    else {
      DAT_63e30000 = '\x01';
    }
  }
  uVar6 = *(uint *)(_DAT_38800000 + iVar7 * 0xe0 + iVar9 * 2);
  cVar1 = *(char *)(_DAT_4bffe775 + (uVar6 >> 0x18) + 0x711);
  if (((cVar1 == '\n') || ((uVar6 >> 0x14 & 1) != 0)) &&
     (((ushort)(uVar6 >> 0x10) & 0xf) != *(ushort *)(_DAT_4bffe775 + 0x110))) {
    sVar5 = 0;
  }
  else {
    iVar10 = FUN_100efb60();
    if (iVar10 == 0) {
      if (_DAT_4beeb891 == 2) {
        sVar5 = 6;
      }
      else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        sVar5 = 2;
      }
      else {
        sVar5 = 6;
      }
    }
    else {
      sVar5 = 0xb;
    }
  }
  sVar5 = sVar5 + 1000;
  iVar10 = (int)sVar5;
  if (iVar10 != *(short *)(param_1 + 0xbc)) {
    FUN_100032a0(*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
    iVar2 = FUN_10002ac0(iVar10);
    *(int *)(param_1 + 0xb8) = iVar2;
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_10001470(iVar10);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_100014a0(*(int *)(local_4c + -0xb0) + 0x5e);
      }
      else {
        FUN_100014a0(*puVar3);
      }
    }
    else {
      FUN_10002850(iVar2);
    }
    *(short *)(param_1 + 0xbc) = sVar5;
  }
  if ((param_2 != '\x02') &&
     (((_DAT_90e90008 != iVar9 || (_DAT_80ff0008 != iVar7)) || (DAT_63e30000 != '\0')))) {
    if ((param_6 != '\0') && (sVar5 != 1000)) {
      if ((iVar9 == *_DAT_817f0000) && (iVar7 == _DAT_817f0000[1])) {
        FUN_1003ffa8();
      }
      else if ((iVar9 != _DAT_817f0000[9]) || (iVar7 != _DAT_817f0000[10])) {
        FUN_100416f4(iVar9,iVar7,0,1);
      }
    }
    DAT_63e30000 = '\x01';
  }
  if (param_2 == '\0') {
    uVar4 = FUN_10001a88();
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
  }
  else if ((param_2 == '\x01') && (uVar6 = FUN_10001a88(), *(int *)(param_1 + 0xc0) + 10U <= uVar6))
  {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 10;
    sVar5 = *(short *)(param_1 + 0x86) + 1;
    *(short *)(param_1 + 0x86) = sVar5;
    if (sVar5 == 4) {
      *(undefined2 *)(param_1 + 0x86) = 0;
    }
    FUN_10082260(param_1);
  }
  return;
}



// Function: FUN_10083d04 at 10083d04
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083d04(void)

{
  FUN_100c1c8c(0x480001a0,_DAT_38600048,0xc4,0x48001219,&DAT_80410014);
  return;
}



// Function: FUN_10083d40 at 10083d40
// Size: 8 bytes

undefined4 FUN_10083d40(void)

{
  return 0x60000000;
}



// Function: FUN_10083d50 at 10083d50
// Size: 136 bytes

undefined4 * FUN_10083d50(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xac);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1010598c(puVar1);
    *puVar1 = &DAT_9421ffc0;
    *(undefined1 *)(puVar1 + 0x25) = 0;
    *(undefined1 *)((int)puVar1 + 0x95) = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    *(undefined2 *)(puVar1 + 0x28) = 0xffff;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    *(undefined2 *)(puVar1 + 0x20) = 0;
    puVar1[0x24] = 0;
  }
  return puVar1;
}



// Function: FUN_10083dd8 at 10083dd8
// Size: 908 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083dd8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_b0 [48];
  undefined4 local_80;
  undefined1 auStack_7c [8];
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  
  if (*(char *)(param_1 + 0x25) == '\0') {
    FUN_10000870(&local_6c,&local_80);
    uVar1 = local_6c;
    iVar10 = param_1[0x24];
    FUN_10000888(local_6c,0);
    uVar2 = FUN_10009a98(iVar10);
    uVar3 = FUN_10009a98(uVar1);
    local_68 = *(undefined2 *)(iVar10 + 0x10);
    local_66 = *(undefined2 *)(iVar10 + 0x12);
    local_64 = *(undefined2 *)(iVar10 + 0x14);
    local_62 = *(undefined2 *)(iVar10 + 0x16);
    local_4a = (undefined2)param_1[0xe];
    local_4c = (undefined2)param_1[0xd];
    local_50 = 0;
    local_4e = 0;
    FUN_100b2268(0x408600a0);
    FUN_100008b8();
    FUN_100b2268(0x4086069a);
    FUN_100021c0();
    uVar4 = FUN_100b0578(&local_50);
    uVar5 = FUN_100b0578(&local_50);
    FUN_100008d0(uVar2,uVar3,uVar5,uVar4,0,0);
    if (*(char *)((int)param_1 + 0x95) != '\0') {
      iVar6 = FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x3a8));
      if (iVar6 != 0) {
        piVar7 = (int *)FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x5f0),1)
        ;
        FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x600),&local_60);
        FUN_10117884((int)_DAT_60690000 + (int)*(short *)(*_DAT_60690000 + 0x2c0),&local_60);
        local_46 = (short)(local_5c / 0x14);
        local_48 = (short)(local_60 / 0x14);
        uVar9 = (local_54 + 0x27) / 0x14;
        local_42 = (short)uVar9;
        uVar8 = (local_58 + 0x27) / 0x14;
        local_44 = (short)uVar8;
        if (param_1[0xe] < 0x71) {
          local_46 = (local_46 >> 1) + (ushort)(local_46 < 0 && (local_5c / 0x14 & 1U) != 0);
          local_48 = (local_48 >> 1) + (ushort)(local_48 < 0 && (local_60 / 0x14 & 1U) != 0);
          local_42 = (local_42 >> 1) + (ushort)(local_42 < 0 && (uVar9 & 1) != 0);
          local_44 = (local_44 >> 1) + (ushort)(local_44 < 0 && (uVar8 & 1) != 0);
        }
        local_74 = 0xfffe;
        local_72 = 0xfffe;
        FUN_100b06d4(&local_48,&local_74);
        iVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
        if (iVar6 != 0) {
          FUN_10066bf4(auStack_b0);
          FUN_10067270();
          FUN_100031b0(2,2);
          FUN_100b2268(0x408600a0);
          FUN_100021c0();
          FUN_100b0578(&local_48);
          FUN_100021d8();
          FUN_10066c80(auStack_b0,2);
        }
      }
    }
    FUN_10009b00(iVar10);
    FUN_10009b00(uVar1);
    FUN_10000888(local_6c,local_80);
  }
  else {
    FUN_10067270();
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_2,auStack_7c);
    FUN_100b2268(0x4086069a);
    FUN_100021c0();
    FUN_100b0578(auStack_7c);
    FUN_10002148();
  }
  return;
}



// Function: FUN_10084164 at 10084164
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084164(int param_1)

{
  int iVar1;
  
  FUN_10105d28(param_1);
  iVar1 = FUN_1000a12c(param_1 + 0x80,(int)(short)*(undefined4 *)(param_1 + 0x38),
                       (int)(short)*(undefined4 *)(param_1 + 0x34),8,0,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  *(int *)(param_1 + 0xa4) = _DAT_28090000;
  if (_DAT_28090000 != 0) {
    *(int *)(_DAT_28090000 + 0xa8) = param_1;
  }
  _DAT_28090000 = param_1;
  if (*(int *)(param_1 + 0xa4) == 0) {
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  return;
}



// Function: FUN_1008421c at 1008421c
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008421c(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  }
  if (param_1 == _DAT_28090000) {
    _DAT_28090000 = *(int *)(param_1 + 0xa4);
  }
  FUN_1000a094(param_1 + 0x80);
  FUN_10106060(param_1);
  return;
}



// Function: FUN_1008429c at 1008429c
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008429c(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  short sVar6;
  int *piVar7;
  
  if (*(char *)(_DAT_57c407bd + 0x99) == '\0') {
    if (param_1[0xe] < 0x71) {
      sVar6 = 1;
    }
    else {
      sVar6 = 2;
    }
    uVar1 = param_2[1] / (int)sVar6 & 0xff;
    uVar2 = *param_2 / (int)sVar6 & 0xff;
    if (param_1[0x29] == 0) {
      iVar3 = FUN_100efb60();
      if (iVar3 == 0) {
        uVar5 = FUN_100c43fc(0);
        FUN_100c4548(uVar5,400,param_1,0,0,0,param_1,0);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),uVar5);
      }
      else {
        piVar7 = *(int **)(_DAT_57c407bd + 0x88);
        puVar4 = (undefined4 *)FUN_100f56e4(0x10c);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_100c3d2c(puVar4);
          *puVar4 = &DAT_41820014;
          *(undefined2 *)(puVar4 + 0xc) = 0xffff;
          *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
          *(undefined2 *)(puVar4 + 0xd) = 0xffff;
          *(undefined2 *)((int)puVar4 + 0x36) = 0xffff;
          *(undefined2 *)(puVar4 + 0x42) = 0;
        }
        FUN_100c3df8(puVar4,0x835,piVar7,1,1,piVar7);
        *(short *)(puVar4 + 0xc) = (short)uVar1;
        *(short *)((int)puVar4 + 0x32) = (short)uVar2;
        FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x200),puVar4);
      }
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),uVar1 * 0x100 + uVar2 + 0x8000,
                   param_1,param_3);
    }
  }
  return;
}



// Function: FUN_1008445c at 1008445c
// Size: 256 bytes

void FUN_1008445c(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_20);
  FUN_1010b818(param_1,param_2,param_3);
  iVar1 = FUN_100e1750(param_2,auStack_20);
  if (iVar1 != 0) {
    if ((param_1[0x29] == 0) &&
       (iVar1 = FUN_1000a12c(param_1 + 0x20,(int)(short)param_1[0xe],(int)(short)param_1[0xd],8,0),
       iVar1 == 0)) {
      FUN_100db26c(0);
    }
    FUN_10060608(1,1,0);
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}



// Function: FUN_1008455c at 1008455c
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008455c(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_28090000 != 0) {
    iVar2 = *(int *)(_DAT_28090000 + 0xa4);
    iVar1 = _DAT_28090000;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0xa4);
      iVar2 = *(int *)(iVar1 + 0xa4);
    }
    if (iVar1 != 0) {
      _DAT_90bf000c = iVar1 + 0x80;
    }
  }
  return;
}



// Function: FUN_100845a0 at 100845a0
// Size: 100 bytes

void FUN_100845a0(int param_1)

{
  int *in_r7;
  char in_r8;
  short sVar1;
  
  if (in_r8 != '\0') {
    if (*(int *)(param_1 + 0x38) < 0x71) {
      sVar1 = 1;
    }
    else {
      sVar1 = 2;
    }
    FUN_1000848c(in_r7[1] / (int)sVar1 & 0xff,*in_r7 / (int)sVar1 & 0xff);
  }
  return;
}



// Function: FUN_10084604 at 10084604
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084604(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,short param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack00000028;
  undefined1 auStack_20 [8];
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    uStack00000028 = param_5;
    FUN_100b0384(&stack0x00000028);
    FUN_10002fd0();
    puVar1 = (undefined4 *)FUN_100b0368(auStack_20,&stack0x00000028);
    iVar2 = FUN_100000f0(param_4,*puVar1,0,0,0x81,(int)param_7,2);
    if (iVar2 != -0x355) {
      FUN_100db2f4(iVar2);
    }
    FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x18),param_3,param_3);
    FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_3,param_3);
  }
  return;
}



// Function: FUN_100846fc at 100846fc
// Size: 208 bytes

void FUN_100846fc(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  short local_20;
  short local_1e;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  if (*(int *)(param_1 + 0x38) < 0x71) {
    local_20 = 1;
  }
  else {
    local_20 = 2;
  }
  iVar2 = (int)local_20;
  local_14 = (short)(iVar2 << 1);
  local_18 = -local_14;
  local_1e = local_20 * (short)(param_2[1] / iVar2);
  local_20 = local_20 * (short)(*param_2 / iVar2);
  local_16 = local_18;
  local_12 = local_14;
  FUN_100b065c(&local_18,&local_20);
  uVar1 = FUN_100b0578(&local_18);
  FUN_10003150(param_3,uVar1);
  return;
}



// Function: FUN_100847cc at 100847cc
// Size: 1264 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100847cc(int *param_1,int *param_2,int *param_3,undefined2 *param_4,short *param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_2ec;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  undefined2 local_2ae;
  short local_2ac;
  short local_2aa;
  undefined2 local_2a8;
  undefined2 local_2a6;
  undefined2 local_2a4;
  undefined2 local_2a2;
  undefined1 auStack_2a0 [276];
  undefined4 local_18c;
  undefined1 auStack_188 [276];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  int *local_58;
  undefined4 local_54;
  
  piVar7 = _DAT_28030000;
  iVar5 = *_DAT_28030000;
  uVar6 = *(undefined4 *)(iVar5 + 0x41c);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5b0));
  local_58 = piVar7;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a8));
  local_54 = uVar6;
  uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  FUN_10117884((int)local_58 + (int)*(short *)(iVar5 + 0x418),uVar6,uVar2,uVar1,param_4,param_5,
               param_6,param_7);
  if (param_1[0x26] != 0) {
    FUN_100019c8(param_1[0x26]);
    param_1[0x26] = 0;
  }
  piVar7 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  iVar5 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x3a8));
  if (iVar5 != 0) {
    piVar7 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x780));
    FUN_100ee64c(auStack_188);
    FUN_10001e48(local_74);
    FUN_100ee64c(auStack_2a0);
    uVar1 = local_18c;
    local_2a8 = 0xd8f0;
    local_2a6 = 0xd8f0;
    local_2a4 = 10000;
    local_2a2 = 10000;
    uVar2 = FUN_100b0578(&local_2a8);
    FUN_10003150(uVar1,uVar2);
    FUN_10001548(local_18c);
    if (param_1[0xe] < 0x71) {
      sVar4 = 1;
    }
    else {
      sVar4 = 2;
    }
    iVar9 = (int)(short)(param_2[1] / (int)sVar4);
    iVar8 = (int)(short)(*param_2 / (int)sVar4);
    uVar1 = FUN_1002bf64(iVar9,iVar8,0xe,1);
    iVar5 = FUN_10009630(1,iVar9,iVar8);
    if (iVar5 == 0) {
      FUN_10001548(local_74);
      FUN_100ee77c(auStack_2a0,2);
      FUN_100ee77c(auStack_188,2);
      return;
    }
    FUN_100462c8(0x1d);
    puVar3 = *(undefined4 **)(local_2ec + -0x14e8);
    local_70 = *puVar3;
    uStack_6c = puVar3[1];
    uStack_68 = puVar3[2];
    uStack_64 = puVar3[3];
    local_60 = puVar3[4];
    iVar5 = FUN_1000a12c(&local_70,(int)_DAT_607c0004,(int)_DAT_607c0006,8,0);
    if (iVar5 == 0) {
      FUN_100db26c(0);
    }
    FUN_10000870(&local_2bc,&local_2c0);
    FUN_10000888(local_60,0);
    FUN_100b2268(*(undefined4 *)(local_2ec + -0x1d4));
    FUN_100008b8();
    FUN_100b2268(*(int *)(local_2ec + -0x1d4) + 0x5fa);
    FUN_100021c0();
    if (local_60 != 0) {
      FUN_10009a98(local_60);
    }
    FUN_1000a9e4(iVar9,iVar8,0);
    FUN_1000acac(uVar1);
    if (local_60 != 0) {
      FUN_10009b00(local_60);
    }
    FUN_10000888(local_2bc,local_2c0);
    local_2aa = _DAT_607c0004;
    local_2ac = _DAT_607c0006;
    local_2b0 = 0;
    local_2ae = 0;
    FUN_100b0578(&local_2b0);
    iVar5 = FUN_100001b0();
    param_1[0x26] = iVar5;
    FUN_10009b48(&local_70,0,0,(int)_DAT_607c0004,(int)_DAT_607c0006,
                 *(undefined4 *)(local_2ec + -0x1208),0,0);
    FUN_100001c8();
    FUN_1000a094(&local_70);
    FUN_10001548(local_74);
    FUN_100ee77c(auStack_2a0,2);
    FUN_100ee77c(auStack_188,2);
  }
  *param_4 = 5;
  *(int *)(param_4 + 1) = param_1[0x26];
  iVar5 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if ((iVar5 != 0) && (param_3 != (int *)0x0)) {
    local_2b8 = *(undefined4 *)(*param_3 + 2);
    local_2b4 = *(undefined4 *)(*param_3 + 6);
    *param_6 = local_2b8;
    param_6[1] = local_2b4;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      FUN_10117884(param_5,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    }
  }
  return;
}



// Function: FUN_10084cbc at 10084cbc
// Size: 416 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084cbc(int *param_1,int *param_2,undefined4 param_3)

{
  short sVar3;
  undefined4 *puVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_1[0xe] < 0x71) {
    sVar3 = 1;
  }
  else {
    sVar3 = 2;
  }
  sVar3 = FUN_1003b4a4((int)(short)(param_2[1] / (int)sVar3),(int)(short)(*param_2 / (int)sVar3),0);
  iVar5 = (int)(short)(sVar3 + 1000);
  if (iVar5 != *(short *)(param_1 + 0x28)) {
    iVar4 = param_1[0x27];
    param_1[0x27] = 0;
    if (iVar5 == -1) {
      FUN_100014a0(0x80a2db22);
    }
    else {
      FUN_10117884(auStack_30,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
      puVar1 = (undefined4 *)FUN_100b0368(auStack_28,auStack_30);
      iVar2 = FUN_100033c0(*puVar1,param_3);
      if (iVar2 == 0) {
        FUN_100014a0(0x80a2db22);
      }
      else {
        iVar2 = FUN_10002ac0(iVar5);
        param_1[0x27] = iVar2;
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)FUN_10001470(iVar5);
          if (puVar1 == (undefined4 *)0x0) {
            FUN_100014a0(0x80a2db22);
          }
          else {
            FUN_100014a0(*puVar1);
          }
        }
        else {
          FUN_10002850(iVar2);
        }
      }
    }
    *(short *)(param_1 + 0x28) = sVar3 + 1000;
    if (iVar4 != 0) {
      FUN_100032a0(iVar4);
    }
    if (_DAT_60690000 != 0) {
      *(undefined2 *)(_DAT_60690000 + 0xbc) = 0xffff;
    }
  }
  return;
}



// Function: FUN_10084e5c at 10084e5c
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084e5c(int param_1,undefined1 param_2)

{
  *(undefined2 *)(param_1 + 0xa0) = 0xffff;
  if (_DAT_60690000 != 0) {
    *(undefined2 *)(_DAT_60690000 + 0xbc) = 0xffff;
  }
  FUN_101064d4(param_1,param_2);
  return;
}



// Function: FUN_10084ea4 at 10084ea4
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084ea4(void)

{
  FUN_100c1c8c(0x60000000,_DAT_38800000,0xac,0x48000c65,&DAT_80410014);
  return;
}



// Function: FUN_10084ee0 at 10084ee0
// Size: 8 bytes

undefined4 FUN_10084ee0(void)

{
  return 0x4bfdf005;
}



// Function: FUN_10084ef0 at 10084ef0
// Size: 148 bytes

undefined4 * FUN_10084ef0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x90), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = 0x60000000;
    *(undefined2 *)(param_1 + 0x20) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0x21) = 0;
    *(undefined2 *)((int)param_1 + 0x86) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined2 *)((int)param_1 + 0x8a) = 0x24;
    *(undefined2 *)(param_1 + 0x23) = 0xf;
  }
  return param_1;
}



// Function: FUN_10084f84 at 10084f84
// Size: 40 bytes

void FUN_10084f84(void)

{
  FUN_10084ef0(0);
  return;
}



// Function: FUN_10084fac at 10084fac
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084fac(int param_1)

{
  if (*(short *)(param_1 + 0x80) != -1) {
    FUN_1004602c((int)*(short *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x82),
                 *(undefined4 *)(param_1 + 0x86),_DAT_63c40000,(int)*(short *)(param_1 + 0x8a),
                 (int)*(short *)(param_1 + 0x8c));
    FUN_10067270();
  }
  return;
}



// Function: FUN_10085018 at 10085018
// Size: 208 bytes

void FUN_10085018(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  FUN_1010937c(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0x80) = uVar1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x120),&local_18);
  *(undefined2 *)(param_1 + 0x82) = local_18;
  *(undefined2 *)(param_1 + 0x84) = local_16;
  *(undefined2 *)(param_1 + 0x86) = local_14;
  *(undefined2 *)(param_1 + 0x88) = local_12;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0x8a) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0x8c) = uVar1;
  return;
}



// Function: FUN_100850e8 at 100850e8
// Size: 244 bytes

void FUN_100850e8(int *param_1,short param_2,short *param_3,short param_4,short param_5,char param_6
                 )

{
  undefined4 uVar1;
  
  if (param_6 != '\0') {
    if ((((*(short *)(param_1 + 0x20) != param_2) || (*(short *)((int)param_1 + 0x82) != *param_3))
        || (*(short *)(param_1 + 0x21) != param_3[1])) ||
       (((*(short *)((int)param_1 + 0x86) != param_3[2] ||
         (*(short *)(param_1 + 0x22) != param_3[3])) ||
        ((*(short *)((int)param_1 + 0x8a) != param_4 || (*(short *)(param_1 + 0x23) != param_5))))))
    {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
    *(short *)(param_1 + 0x20) = param_2;
    uVar1 = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((int)param_1 + 0x82) = *(undefined4 *)param_3;
    *(undefined4 *)((int)param_1 + 0x86) = uVar1;
    *(short *)((int)param_1 + 0x8a) = param_4;
    *(short *)(param_1 + 0x23) = param_5;
    return;
  }
  *(short *)(param_1 + 0x20) = param_2;
  uVar1 = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((int)param_1 + 0x82) = *(undefined4 *)param_3;
  *(undefined4 *)((int)param_1 + 0x86) = uVar1;
  *(short *)((int)param_1 + 0x8a) = param_4;
  *(short *)(param_1 + 0x23) = param_5;
  return;
}



// Function: FUN_100851dc at 100851dc
// Size: 64 bytes

void FUN_100851dc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),10,param_1,0);
  return;
}



// Function: FUN_1008521c at 1008521c
// Size: 96 bytes

void FUN_1008521c(int *param_1)

{
  if (*(short *)(param_1 + 0x20) == -1) {
    *(undefined2 *)(param_1 + 0x20) = 0xffff;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    *(undefined2 *)(param_1 + 0x20) = 0xffff;
  }
  return;
}



// Function: FUN_1008527c at 1008527c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008527c(void)

{
  FUN_100c1c8c(0x4bfdf005,_DAT_38600044,0x90,0x480011ed,&DAT_80410014);
  return;
}



// Function: FUN_100852b8 at 100852b8
// Size: 8 bytes

undefined4 FUN_100852b8(void)

{
  return 0x60000000;
}



// Function: FUN_100852c8 at 100852c8
// Size: 104 bytes

undefined4 * FUN_100852c8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb0), param_1 != (undefined4 *)0x0)) {
    FUN_100cdb5c(param_1);
    *param_1 = &DAT_60690000;
  }
  return param_1;
}



// Function: FUN_10085330 at 10085330
// Size: 40 bytes

void FUN_10085330(void)

{
  FUN_100852c8(0);
  return;
}



// Function: FUN_1008535c at 1008535c
// Size: 560 bytes

void FUN_1008535c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [276];
  undefined4 local_14c;
  undefined1 auStack_148 [276];
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  FUN_100ee64c(auStack_260);
  FUN_10001e48(local_14c);
  FUN_100ee64c(auStack_148);
  FUN_100e12b8(param_2,auStack_280);
  uVar3 = local_34;
  uVar1 = FUN_100b0578(auStack_280);
  FUN_10003150(uVar3,uVar1);
  FUN_10002be0(local_14c,local_34,local_34);
  FUN_10001548(local_34);
  if (param_1[0x2b] != 0) {
    iVar2 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar2 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_270);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_270,auStack_278);
      uVar3 = FUN_10000360(param_1[0x2b]);
      FUN_10000048(param_1[0x2b]);
      iVar2 = *(int *)param_1[0x2b];
      local_30 = *(undefined2 *)(iVar2 + 2);
      local_2e = *(undefined2 *)(iVar2 + 4);
      local_2c = *(undefined2 *)(iVar2 + 6);
      local_2a = *(undefined2 *)(iVar2 + 8);
      uVar1 = FUN_100b057c(&local_30,0);
      FUN_100b0698(&local_30,uVar1);
      uVar1 = FUN_100b057c(auStack_278,0);
      FUN_100b065c(&local_30,uVar1);
      FUN_10000030();
      uVar1 = FUN_100b0578(&local_30);
      FUN_10000750(param_1[0x2b],uVar1);
      FUN_10001b60(param_1[0x2b],uVar3);
    }
  }
  FUN_10001548(local_14c);
  FUN_100ee77c(auStack_148,2);
  FUN_100ee77c(auStack_260,2);
  return;
}



// Function: FUN_1008558c at 1008558c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008558c(void)

{
  FUN_100c1c8c(0x60000000,_DAT_28090000,0xb0,&DAT_41820014,&DAT_419e0020);
  return;
}



// Function: FUN_100855d0 at 100855d0
// Size: 116 bytes

undefined4 * FUN_100855d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xdc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100cdb5c(puVar1);
    *puVar1 = &DAT_48000050;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    *(undefined2 *)((int)puVar1 + 0xb2) = 0;
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    puVar1[0x31] = 0;
    *(undefined2 *)(puVar1 + 0x32) = 0;
    puVar1[0x36] = 0;
  }
  return puVar1;
}



// Function: FUN_10085644 at 10085644
// Size: 956 bytes

void FUN_10085644(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [2];
  short local_b6;
  undefined1 auStack_b0 [48];
  undefined4 local_80;
  undefined1 auStack_7c [16];
  undefined2 local_6c;
  short local_6a;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  short local_5a;
  short local_56;
  int local_54;
  char local_50;
  undefined1 auStack_4c [4];
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_100ef2f8(param_1[0x2b]);
    if (iVar1 != 0) {
      FUN_10000b70(param_1[0x2b]);
    }
    if (*(int *)param_1[0x2b] != 0) {
      local_54 = param_1[0x2b];
      local_50 = FUN_10000360();
      FUN_10002598(local_54);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_7c);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_7c,&local_64);
      FUN_10000870(&local_80,auStack_4c);
      iVar8 = param_1[0x31];
      iVar1 = param_1[0x36];
      uVar2 = FUN_10009a98(iVar8);
      uVar3 = FUN_10009a98(iVar1);
      uVar4 = FUN_10009a98(local_80);
      FUN_10066bf4(auStack_b0);
      FUN_10067270();
      FUN_100b2268(0x408600fa);
      FUN_100008b8();
      puVar5 = &local_5c;
      if ((&local_5c != (undefined2 *)0x0) ||
         (puVar5 = (undefined2 *)FUN_100f56e4(8), puVar5 != (undefined2 *)0x0)) {
        *puVar5 = local_64;
        puVar5[1] = local_62;
        puVar5[2] = local_60;
        puVar5[3] = local_5e;
      }
      FUN_100b08d4(auStack_b8,&local_64);
      local_56 = local_5a +
                 (short)(((int)local_b6 * (int)*(short *)(param_1 + 0x2c)) /
                        (int)*(short *)((int)param_1 + 0xb2));
      uVar6 = FUN_100b057c(&local_5c,0);
      FUN_100b0618(&local_5c,auStack_c0,uVar6);
      uVar6 = FUN_100b0578(auStack_c0);
      uVar7 = FUN_100b0578(&local_5c);
      FUN_100008d0(uVar2,uVar4,uVar7,uVar6,0x24,0);
      FUN_100b2268(0x408600a0);
      FUN_100008b8();
      FUN_100b2268(0x408600fa);
      FUN_100008b8();
      puVar5 = &local_6c;
      if ((&local_6c != (undefined2 *)0x0) ||
         (puVar5 = (undefined2 *)FUN_100f56e4(8), puVar5 != (undefined2 *)0x0)) {
        *puVar5 = local_64;
        puVar5[1] = local_62;
        puVar5[2] = local_60;
        puVar5[3] = local_5e;
      }
      local_6a = local_56;
      uVar2 = FUN_100b057c(&local_5c,0);
      FUN_100b0618(&local_6c,auStack_c8,uVar2);
      uVar2 = FUN_100b0578(auStack_c8);
      uVar6 = FUN_100b0578(&local_6c);
      FUN_100008d0(uVar3,uVar4,uVar6,uVar2,0x24,0);
      FUN_100b2268(0x408600a0);
      FUN_100008b8();
      FUN_10009b00(iVar1);
      FUN_10009b00(iVar8);
      FUN_10009b00(local_80);
      FUN_10066c80(auStack_b0,2);
      if (&stack0x00000000 != (undefined1 *)0x54) {
        FUN_10001b60(local_54,(int)local_50);
      }
    }
  }
  return;
}



// Function: FUN_10085a0c at 10085a0c
// Size: 1512 bytes

void FUN_10085a0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_304;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [2];
  short local_2d6;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [2];
  short local_2c6;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined2 local_2b8;
  undefined2 local_2b6;
  undefined2 local_2b4;
  int local_2b0;
  undefined2 local_2ac;
  undefined2 local_2aa;
  undefined2 local_2a8;
  undefined2 local_2a6;
  undefined1 auStack_2a4 [276];
  undefined4 local_190;
  undefined2 local_18c;
  short local_18a;
  undefined2 local_188;
  short local_186;
  undefined1 auStack_184 [276];
  undefined4 local_70;
  undefined2 local_6c;
  short local_6a;
  undefined2 local_68;
  short local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined1 auStack_54 [12];
  
  iVar1 = FUN_1000a12c(param_1 + 0xb4,(int)(short)*(undefined4 *)(param_1 + 0x38),
                       (int)(short)*(undefined4 *)(param_1 + 0x34),8,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  iVar1 = FUN_10001d70(*(undefined4 *)(*(int *)(param_1 + 0xc4) + 2));
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  FUN_10000870(&local_2bc,&local_2c0);
  FUN_10000888(*(undefined4 *)(param_1 + 0xc4),0);
  FUN_100ee64c(auStack_2a4);
  FUN_10001e48(local_190);
  local_2a6 = (undefined2)*(undefined4 *)(param_1 + 0x38);
  local_2a8 = (undefined2)*(undefined4 *)(param_1 + 0x34);
  local_2ac = 0;
  local_2aa = 0;
  FUN_10000b70(*(undefined4 *)(param_1 + 0xac));
  FUN_10067270();
  iVar1 = **(int **)(param_1 + 0xac);
  local_5c = *(undefined2 *)(iVar1 + 2);
  local_5a = *(undefined2 *)(iVar1 + 4);
  local_58 = *(undefined2 *)(iVar1 + 6);
  local_56 = *(undefined2 *)(iVar1 + 8);
  FUN_100b08d4(auStack_2c8,&local_5c);
  if (local_2c6 == (short)*(undefined4 *)(param_1 + 0x38)) {
    uVar2 = FUN_100b057c(&local_5c,0);
    FUN_100b0618(&local_5c,auStack_2e0,uVar2);
    uVar2 = FUN_100b0578(auStack_2e0);
    FUN_10000750(*(undefined4 *)(param_1 + 0xac),uVar2);
  }
  else {
    FUN_100ee64c(auStack_184);
    uVar2 = local_70;
    local_68 = (undefined2)*(undefined4 *)(param_1 + 0x34);
    local_6c = 0;
    local_6a = 0;
    local_66 = (short)*(undefined4 *)(param_1 + 0x38) + -0x16;
    uVar3 = FUN_100b0578(&local_6c);
    FUN_10003150(uVar2,uVar3);
    FUN_10001548(local_70);
    uVar2 = FUN_100b057c(&local_5c,0);
    FUN_100b0618(&local_5c,auStack_2d0,uVar2);
    uVar2 = FUN_100b0578(auStack_2d0);
    FUN_10000750(*(undefined4 *)(param_1 + 0xac),uVar2);
    uVar2 = local_70;
    local_6a = local_66;
    local_66 = (short)*(undefined4 *)(param_1 + 0x38);
    uVar3 = FUN_100b0578(&local_6c);
    FUN_10003150(uVar2,uVar3);
    FUN_10001548(local_70);
    FUN_100b08d4(auStack_2d8,&local_5c);
    local_186 = (short)*(undefined4 *)(param_1 + 0x38);
    local_18a = local_186 - local_2d6;
    local_188 = (undefined2)*(undefined4 *)(param_1 + 0x34);
    local_18c = 0;
    uVar2 = FUN_100b0578(&local_18c);
    FUN_10000750(*(undefined4 *)(param_1 + 0xac),uVar2);
    FUN_100ee77c(auStack_184,2);
  }
  FUN_10003468(*(undefined4 *)(*(int *)(param_1 + 0xc4) + 2));
  FUN_10001548(local_190);
  FUN_10000888(local_2bc,local_2c0);
  FUN_100ee77c(auStack_2a4,2);
  iVar1 = FUN_1000a12c(param_1 + 200,(int)(short)*(undefined4 *)(param_1 + 0x38),
                       (int)(short)*(undefined4 *)(param_1 + 0x34),8,0);
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  iVar1 = FUN_10001d70(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 2));
  if (iVar1 == 0) {
    FUN_100db26c(0);
  }
  FUN_10000870(&local_2bc,&local_2c0);
  local_5e = (undefined2)*(undefined4 *)(param_1 + 0x38);
  local_60 = (undefined2)*(undefined4 *)(param_1 + 0x34);
  local_64 = 0;
  local_62 = 0;
  uVar2 = FUN_100b0578(&local_64);
  FUN_10001d58(&local_2b0,8,uVar2,**(undefined4 **)(local_304 + -0x1cc),0,0);
  FUN_10002598(*(undefined4 *)(local_2b0 + 2));
  uVar2 = FUN_10009a98(*(undefined4 *)(param_1 + 0xc4));
  FUN_10000888(local_2b0,0);
  FUN_100b2268(0x408600fa);
  FUN_100008b8();
  FUN_100b0578(&local_64);
  FUN_10002c58();
  local_2b8 = 0xf7f7;
  local_2b6 = 0x6f6f;
  local_2b4 = 0xe7e7;
  FUN_100b2268(&local_2b8);
  FUN_100008b8();
  FUN_100670ec(auStack_54,2);
  uVar3 = FUN_100b0578(&local_64);
  uVar4 = FUN_100b0578(&local_64);
  FUN_100008d0(uVar2,local_2b0 + 2,uVar4,uVar3,0x24,0);
  FUN_100b2268(0x408600a0);
  FUN_100008b8();
  FUN_10067178(auStack_54,2);
  FUN_10009b00(*(undefined4 *)(param_1 + 0xc4));
  uVar2 = *(undefined4 *)(param_1 + 0xd8);
  uVar3 = FUN_10001ed8();
  FUN_10000888(uVar2,uVar3);
  uVar2 = FUN_10009a98(*(undefined4 *)(param_1 + 0xd8));
  uVar3 = FUN_100b0578(&local_64);
  uVar4 = FUN_100b0578(&local_64);
  FUN_100008d0(local_2b0 + 2,uVar2,uVar4,uVar3,0,0);
  FUN_10009b00(*(undefined4 *)(param_1 + 0xd8));
  FUN_10000888(local_2bc,local_2c0);
  FUN_100032b8(local_2b0);
  return;
}



// Function: FUN_10085ff4 at 10085ff4
// Size: 104 bytes

void FUN_10085ff4(int *param_1,undefined4 param_2,char param_3)

{
  FUN_100d0db8(param_1,param_2,0);
  FUN_10085a0c(param_1);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_1008605c at 1008605c
// Size: 108 bytes

void FUN_1008605c(int *param_1,short param_2,char param_3)

{
  FUN_100d0e58(param_1,(int)param_2,0);
  FUN_10085a0c(param_1);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_100860c8 at 100860c8
// Size: 76 bytes

void FUN_100860c8(int param_1)

{
  FUN_100d0d64(param_1);
  FUN_1000a094(param_1 + 0xb4);
  FUN_1000a094(param_1 + 200);
  return;
}



// Function: FUN_10086114 at 10086114
// Size: 164 bytes

void FUN_10086114(int *param_1,short param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + param_2;
  if ((param_3 != '\0') &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,auStack_20);
    FUN_10117884((int)*(short *)(*param_1 + 0x480) + (int)param_1,auStack_20);
  }
  return;
}



// Function: FUN_100861b8 at 100861b8
// Size: 288 bytes

void FUN_100861b8(int *param_1,short param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [2];
  short local_16;
  short local_12;
  
  if (param_2 < *(short *)(param_1 + 0x2c)) {
    *(short *)(param_1 + 0x2c) = param_2;
    if ((param_3 != '\0') &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_28,auStack_18);
      local_12 = local_16 +
                 (short)((param_1[0xe] * (int)*(short *)(param_1 + 0x2c)) /
                        (int)*(short *)((int)param_1 + 0xb2));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e0),auStack_18);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
    }
  }
  else {
    FUN_10086114(param_1,(int)(short)(param_2 - *(short *)(param_1 + 0x2c)));
  }
  return;
}



// Function: FUN_100862d8 at 100862d8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862d8(void)

{
  FUN_100c1c8c(&DAT_61230000,_DAT_38800000,0xdc,0x48000dd1,&DAT_419e0020);
  return;
}



// Function: FUN_10086314 at 10086314
// Size: 8 bytes

undefined4 FUN_10086314(void)

{
  return 0x63a40000;
}



// Function: FUN_10086324 at 10086324
// Size: 104 bytes

undefined4 * FUN_10086324(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa8), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_38600044;
  }
  return param_1;
}



// Function: FUN_1008638c at 1008638c
// Size: 40 bytes

void FUN_1008638c(void)

{
  FUN_10086324(0);
  return;
}



// Function: FUN_100863b4 at 100863b4
// Size: 36 bytes

void FUN_100863b4(void)

{
  FUN_1004fbdc();
  return;
}



// Function: FUN_100863d8 at 100863d8
// Size: 8 bytes

undefined4 FUN_100863d8(void)

{
  return 0x480011c1;
}



// Function: FUN_100863e8 at 100863e8
// Size: 104 bytes

undefined4 * FUN_100863e8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb8), param_1 != (undefined4 *)0x0)) {
    FUN_100e1f44(param_1);
    *param_1 = 0x60000000;
  }
  return param_1;
}



// Function: FUN_10086450 at 10086450
// Size: 40 bytes

void FUN_10086450(void)

{
  FUN_100863e8(0);
  return;
}



// Function: FUN_10086478 at 10086478
// Size: 640 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086478(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  short sStack0000001c;
  int local_a4;
  short local_70 [4];
  undefined1 auStack_68 [80];
  undefined1 auStack_18 [2];
  undefined1 auStack_16 [2];
  
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,local_70);
  iVar1 = (int)(short)(sStack0000001c + -1);
  iVar2 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2;
  FUN_1003206c(2,(int)*(short *)(iVar2 + 0xa0),(int)*(short *)(iVar2 + 0xb0),0xf9);
  FUN_1004a2a8();
  FUN_1003206c(2,0xe0,0xff,0xf9);
  FUN_10001dd0(auStack_68,*(int *)(local_a4 + -0x14b0) + 0x3c,iVar1 + 1);
  FUN_1005f1a0(2,(int)(short)(local_70[0] + 6),auStack_68);
  FUN_1000873c((int)*(char *)(_DAT_80410014 + iVar1 + 100),(int)*(short *)(_DAT_4bffe775 + 0x110),
               *(undefined4 *)(local_a4 + -0x1208),0x12,(int)local_70[0],0,0);
  if (*(char *)(_DAT_80410014 + iVar1) == '\0') {
    iVar1 = (int)*(char *)(_DAT_80410014 + iVar1 + 300);
    if (iVar1 < 100) {
      FUN_10001dd0(auStack_68,*(int *)(local_a4 + -0x14b0) + 0x54,
                   _DAT_4bffe775 + iVar1 * 0x42 + 0x1608);
    }
    else {
      FUN_10034074((int)*(short *)(_DAT_4bffe775 + 0x110),auStack_18,auStack_16);
      FUN_10001dd0(auStack_68,*(int *)(local_a4 + -0x14b0) + 0x40,
                   *(int *)(local_a4 + -0x14b0) + 0x48);
    }
  }
  else if (*(char *)(_DAT_80410014 + iVar1) == '\x01') {
    FUN_10001dd0(auStack_68,*(int *)(local_a4 + -0x14b0) + 0x5c,
                 _DAT_4bffe775 + *(char *)(_DAT_80410014 + iVar1 + 200) * 0x42 + 0x1608);
  }
  else {
    FUN_10001e78(auStack_68,_DAT_4bffe775 + *(char *)(_DAT_80410014 + iVar1 + 200) * 0x42 + 0x1608);
  }
  FUN_1003206c(2,0xe0,0xff,0xf9);
  FUN_1005f1a0(0x3a,(int)(short)(local_70[0] + 6),auStack_68);
  FUN_1004a81c();
  return;
}



// Function: FUN_100866f8 at 100866f8
// Size: 8 bytes

undefined1 * FUN_100866f8(void)

{
  return &DAT_60690000;
}



// Function: FUN_10086708 at 10086708
// Size: 128 bytes

undefined4 * FUN_10086708(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = &DAT_28090000;
  }
  return param_1;
}



// Function: FUN_10086788 at 10086788
// Size: 40 bytes

void FUN_10086788(void)

{
  FUN_10086708(0);
  return;
}



// Function: FUN_100867b0 at 100867b0
// Size: 204 bytes

void FUN_100867b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == 0x61726d79) {
    FUN_10050b10(0);
  }
  else if (iVar1 == 0x63697479) {
    FUN_10050b10(1);
  }
  else if (iVar1 == 0x676f6c64) {
    FUN_10050b10(2);
  }
  else if (iVar1 == 0x70726f64) {
    FUN_10050b10(3);
  }
  else if (iVar1 == 0x77696e6e) {
    FUN_10050b10(4);
  }
  else {
    FUN_100d5934();
  }
  return;
}



// Function: FUN_1008687c at 1008687c
// Size: 232 bytes

void FUN_1008687c(undefined4 param_1,int param_2)

{
  if (param_2 == 0x61726d79) {
    FUN_1009e534(0xdd);
  }
  else if (param_2 == 0x63697479) {
    FUN_1009e534(0xde);
  }
  else if (param_2 == 0x646f6e65) {
    FUN_1009e534(0xe2);
  }
  else if (param_2 == 0x676f6c64) {
    FUN_1009e534(0xdf);
  }
  else if (param_2 == 0x70726f64) {
    FUN_1009e534(0xe0);
  }
  else if (param_2 == 0x77696e6e) {
    FUN_1009e534(0xe1);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_10086964 at 10086964
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086964(void)

{
  FUN_100c1c8c(0x63a40000,_DAT_41820014,0xa8,&DAT_61230000,&DAT_9421ffc0);
  FUN_100c1c8c(0x480011c1,_DAT_38800000,0xb8,0x48000da5,&DAT_7c0803a6);
  FUN_100c1c8c(&DAT_60690000,_DAT_60000000,0x40,0x63640000,&DAT_281f0000);
  return;
}



// Function: FUN_100869e0 at 100869e0
// Size: 8 bytes

undefined1 * FUN_100869e0(void)

{
  return &DAT_38600044;
}



// Function: FUN_100869f0 at 100869f0
// Size: 116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100869f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x84);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1010598c(puVar1);
    *puVar1 = 0x60000000;
    *(undefined2 *)(puVar1 + 0x20) = 0;
    *(undefined2 *)((int)puVar1 + 0x82) = 0xffff;
    _DAT_57c407ff = _DAT_57c407ff + 1;
  }
  return puVar1;
}



// Function: FUN_10086a64 at 10086a64
// Size: 1564 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086a64(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int local_e4;
  undefined2 local_c0;
  undefined2 local_be;
  short local_b8 [4];
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  int *local_98;
  char local_94;
  int *local_90;
  char local_8c;
  int *local_88;
  char local_84;
  undefined1 auStack_80 [4];
  int local_7c;
  int local_74;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined1 auStack_54 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_80);
  FUN_10000030();
  if (_DAT_60000010 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,auStack_80,&local_68);
    FUN_10000b70(_DAT_48001195);
    FUN_100db26c(*_DAT_48001195);
    iVar6 = *_DAT_48001195;
    local_70 = *(short *)(iVar6 + 2);
    sVar5 = *(short *)(iVar6 + 4);
    local_6c = *(undefined2 *)(iVar6 + 6);
    local_6a = *(undefined2 *)(iVar6 + 8);
    local_6e = sVar5;
    iVar6 = FUN_100b08a4(&local_70,1);
    local_6a = sVar5 + (short)(iVar6 / 0x14);
    local_6c = FUN_100b08a4(&local_70,0);
    local_6c = local_70 + local_6c;
    local_62 = FUN_100b08a4(&local_70,1);
    local_62 = local_66 + local_62;
    local_64 = FUN_100b08a4(&local_70,0);
    local_64 = local_68 + local_64;
    iVar6 = FUN_100b08a4(&local_70,1);
    local_7c = local_7c + iVar6;
    FUN_10000870(&local_60,auStack_5c);
    uVar1 = FUN_10009a98(_DAT_60000010);
    uVar2 = FUN_10009a98(local_60);
    uVar3 = FUN_100b0578(&local_68);
    uVar4 = FUN_100b0578(&local_70);
    FUN_100008d0(uVar1,uVar2,uVar4,uVar3,0,0);
    FUN_10009b00(_DAT_60000010);
    FUN_10009b00(local_60);
  }
  if (_DAT_41820014 != (int *)0x0) {
    iVar6 = FUN_100ef2f8(_DAT_41820014);
    if (iVar6 != 0) {
      FUN_10000b70(_DAT_41820014);
    }
    if (*_DAT_41820014 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_80,&local_68);
      iVar6 = *_DAT_41820014;
      local_a0 = *(undefined2 *)(iVar6 + 2);
      local_9e = *(undefined2 *)(iVar6 + 4);
      local_9c = *(undefined2 *)(iVar6 + 6);
      local_9a = *(undefined2 *)(iVar6 + 8);
      local_66 = FUN_100b08a4(&local_a0,1);
      local_66 = local_62 - local_66;
      iVar6 = FUN_100b08a4(&local_a0,1);
      local_74 = local_74 - iVar6;
      local_88 = _DAT_41820014;
      local_84 = FUN_10000360(_DAT_41820014);
      FUN_10000048(local_88);
      uVar1 = FUN_100b0578(&local_68);
      FUN_10000750(_DAT_41820014,uVar1);
      if (&stack0x00000000 != (undefined1 *)0x88) {
        FUN_10001b60(local_88,(int)local_84);
      }
    }
  }
  if (_DAT_60690000 != (int *)0x0) {
    iVar6 = FUN_100ef2f8(_DAT_60690000);
    if (iVar6 != 0) {
      FUN_10000b70(_DAT_60690000);
    }
    if (*_DAT_60690000 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_80,&local_68);
      local_90 = _DAT_60690000;
      local_8c = FUN_10000360(_DAT_60690000);
      FUN_10000048(local_90);
      uVar1 = FUN_100b0578(&local_68);
      FUN_10000750(_DAT_60690000,uVar1);
      if (&stack0x00000000 != (undefined1 *)0x90) {
        FUN_10001b60(local_90,(int)local_8c);
      }
    }
  }
  if (_DAT_28090000 != (int *)0x0) {
    iVar6 = FUN_100ef2f8(_DAT_28090000);
    if (iVar6 != 0) {
      FUN_10000b70(_DAT_28090000);
    }
    if (*_DAT_28090000 != 0) {
      FUN_10000870(&local_58,auStack_54);
      sVar5 = FUN_10001c20(_DAT_28090000);
      iVar6 = (int)(short)((uint)(int)sVar5 / 0x102);
      local_98 = _DAT_28090000;
      local_94 = FUN_10000360(_DAT_28090000);
      FUN_10002598(local_98);
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          if (*(short *)(*_DAT_28090000 + iVar7 * 0x102 + 0x100) == *(short *)(param_1 + 0x20)) {
            local_b0 = 2;
            local_ae = 0;
            FUN_100b06d4(&local_68,&local_b0);
            FUN_100b08d4(&local_c0,&local_68);
            local_a8 = **(undefined2 **)(local_e4 + -0xe60);
            local_a6 = (*(undefined2 **)(local_e4 + -0xe60))[1];
            local_a4 = local_c0;
            local_a2 = local_be;
            local_b8[0] = (short)iVar7 * 0x13;
            local_b8[1] = 0;
            FUN_100b065c(&local_a8,local_b8);
            iVar6 = *(int *)(local_e4 + -0x1464);
            uVar1 = FUN_10009a98(*(undefined4 *)(iVar6 + 0x10));
            uVar2 = FUN_10009a98(local_58);
            FUN_100b2268(*(undefined4 *)(local_e4 + -0x1d4));
            FUN_100008b8();
            FUN_100b2268(*(int *)(local_e4 + -0x1d4) + 0x5fa);
            FUN_100021c0();
            uVar3 = FUN_100b0578(&local_68);
            uVar4 = FUN_100b0578(&local_a8);
            FUN_100008d0(uVar1,uVar2,uVar4,uVar3,1,0);
            FUN_10009b00(*(undefined4 *)(iVar6 + 0x10));
            FUN_10009b00(local_58);
            break;
          }
          iVar7 = (int)(short)((short)iVar7 + 1);
        } while (iVar7 < iVar6);
      }
      if (&stack0x00000000 != (undefined1 *)0x98) {
        FUN_10001b60(local_98,(int)local_94);
      }
    }
  }
  return;
}



// Function: FUN_100870a4 at 100870a4
// Size: 116 bytes

void FUN_100870a4(int param_1,int *param_2)

{
  undefined2 uVar1;
  
  FUN_1010937c(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0x82) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0x80) = uVar1;
  return;
}



// Function: FUN_10087118 at 10087118
// Size: 1944 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087118(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar5;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar12;
  undefined4 uStack0000001c;
  int local_cc;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  int *local_60;
  char local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  short sVar11;
  
  uStack0000001c = param_2;
  FUN_10000870(&local_58,&local_54);
  FUN_10105d28(param_1,uStack0000001c);
  local_50 = '\0';
  if (_DAT_48001195 == (int *)0x0) {
    _DAT_48001195 = (int *)FUN_10000720(0xbc7);
    FUN_100db2a4();
  }
  if ((_DAT_48001195 != (int *)0x0) && (_DAT_60000010 == 0)) {
    FUN_10000b70(_DAT_48001195);
    FUN_100db26c(*_DAT_48001195);
    iVar6 = *_DAT_48001195;
    local_70 = *(undefined2 *)(iVar6 + 2);
    local_6e = *(undefined2 *)(iVar6 + 4);
    local_6c = *(undefined2 *)(iVar6 + 6);
    local_6a = *(undefined2 *)(iVar6 + 8);
    uVar1 = FUN_100b08a4(&local_70,1);
    iVar6 = *_DAT_48001195;
    local_78 = *(undefined2 *)(iVar6 + 2);
    local_76 = *(undefined2 *)(iVar6 + 4);
    local_74 = *(undefined2 *)(iVar6 + 6);
    local_72 = *(undefined2 *)(iVar6 + 8);
    uVar2 = FUN_100b08a4(&local_78,0);
    iVar6 = FUN_1000a12c(0x60000000,uVar1,uVar2,8,1,0);
    if ((iVar6 != 0) && (FUN_10000888(_DAT_60000010,0), _DAT_48001195 != (int *)0x0)) {
      iVar6 = FUN_100ef2f8(_DAT_48001195);
      if (iVar6 != 0) {
        FUN_10000b70(_DAT_48001195);
      }
      if (*_DAT_48001195 != 0) {
        FUN_10000750(_DAT_48001195,_DAT_60000010 + 0x10);
      }
    }
  }
  if (_DAT_60690000 == (int *)0x0) {
    _DAT_60690000 = (int *)FUN_10000720(0xbc8);
    FUN_100db2a4();
  }
  if (_DAT_41820014 == (int *)0x0) {
    _DAT_41820014 = (int *)FUN_10000720(0xbc9);
    FUN_100db2a4();
  }
  if ((_DAT_28090000 == (int *)0x0) ||
     (*(short *)(param_1 + 0x82) != **(short **)(local_cc + -0x145c))) {
    _DAT_28090000 = (int *)FUN_10001728(0x526f6c6c,(int)*(short *)(param_1 + 0x82));
    FUN_100db2a4();
    **(undefined2 **)(local_cc + -0x145c) = *(undefined2 *)(param_1 + 0x82);
    local_50 = '\x01';
  }
  FUN_10000b70(_DAT_28090000);
  FUN_100db26c(*_DAT_28090000);
  sVar5 = FUN_10001c20(_DAT_28090000);
  sVar11 = (short)((uint)(int)sVar5 / 0x102);
  iVar10 = (int)sVar11;
  FUN_10000b70(_DAT_48001195);
  FUN_100db26c(*_DAT_48001195);
  iVar6 = *_DAT_48001195;
  local_80 = *(undefined2 *)(iVar6 + 2);
  local_7e = *(undefined2 *)(iVar6 + 4);
  local_7c = *(undefined2 *)(iVar6 + 6);
  local_7a = *(undefined2 *)(iVar6 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  iVar6 = FUN_100b08a4(&local_80,1);
  FUN_10000b70(_DAT_41820014);
  FUN_100db26c(*_DAT_41820014);
  iVar7 = *_DAT_41820014;
  local_88 = *(undefined2 *)(iVar7 + 2);
  local_86 = *(undefined2 *)(iVar7 + 4);
  local_84 = *(undefined2 *)(iVar7 + 6);
  local_82 = *(undefined2 *)(iVar7 + 8);
  sVar5 = FUN_100b08a4(&local_88,1);
  iVar7 = (int)(short)(((short)uVar1 - (short)(iVar6 / 0x14)) - sVar5);
  iVar6 = *(int *)(*(int *)(local_cc + -0x1464) + 0x10);
  if (iVar6 == 0) {
LAB_1008751c:
    iVar6 = FUN_1000a12c(*(undefined4 *)(local_cc + -0x1464),iVar7,
                         (int)(short)(sVar11 * 0x13 + 0x13),8,1,0);
    if (iVar6 != 0) {
      local_50 = '\x01';
    }
  }
  else {
    local_a8 = *(undefined4 *)(iVar6 + 0x10);
    uStack_a4 = *(undefined4 *)(iVar6 + 0x14);
    local_90 = local_a8;
    local_8c = uStack_a4;
    iVar6 = FUN_100b08a4(&local_a8,1);
    if ((iVar6 != iVar7) || (iVar6 = FUN_100b08a4(&local_a8,0), iVar6 != iVar10 * 0x13 + 0x13))
    goto LAB_1008751c;
  }
  iVar6 = FUN_100ef2f8(_DAT_28090000);
  if (iVar6 != 0) {
    FUN_10000b70(_DAT_28090000);
  }
  local_60 = _DAT_28090000;
  local_5c = FUN_10000360(_DAT_28090000);
  FUN_10002598(local_60);
  iVar6 = *_DAT_28090000;
  iVar12 = 0xd;
  if ((local_50 != '\0') && (iVar8 = *(int *)(*(int *)(local_cc + -0x1464) + 0x10), iVar8 != 0)) {
    FUN_10000888(iVar8,0);
    FUN_100b2268(*(undefined4 *)(local_cc + -0x1d4));
    FUN_100008b8();
    FUN_100b2268(*(int *)(local_cc + -0x1d4) + 0x5fa);
    FUN_100021c0();
    iVar8 = 0;
    if (0 < iVar10) {
      do {
        iVar3 = iVar6 + iVar8 * 0x102;
        FUN_100b1c84(iVar3);
        iVar4 = FUN_100006f0();
        uVar9 = iVar7 - iVar4;
        FUN_10000270((int)(short)((short)((int)uVar9 >> 1) +
                                 (ushort)((int)uVar9 < 0 && (uVar9 & 1) != 0)),iVar12);
        FUN_100b1c84(iVar3);
        FUN_10000b88();
        iVar12 = (int)(short)((short)iVar12 + 0x13);
        iVar8 = (int)(short)((short)iVar8 + 1);
      } while (iVar8 < iVar10);
    }
    FUN_100b1c84(iVar6);
    iVar10 = FUN_100006f0();
    uVar9 = iVar7 - iVar10;
    FUN_10000270((int)(short)((short)((int)uVar9 >> 1) +
                             (ushort)((int)uVar9 < 0 && (uVar9 & 1) != 0)),iVar12);
    FUN_100b1c84(iVar6);
    FUN_10000b88();
  }
  if (_DAT_38800010 != 0) {
    local_98 = *(undefined4 *)(_DAT_38800010 + 0x10);
    local_94 = *(undefined4 *)(_DAT_38800010 + 0x14);
    local_68 = local_98;
    uStack_64 = local_94;
    iVar6 = FUN_100b08a4(&local_68,1);
    if ((iVar6 == iVar7) && (iVar6 = FUN_100b08a4(&local_68,0), iVar6 == 0x17)) goto LAB_100877c8;
  }
  iVar6 = FUN_1000a12c(&DAT_38800000,iVar7,0x17,8,1,0);
  if ((iVar6 != 0) && (FUN_10000888(_DAT_38800010,0), _DAT_60690000 != (int *)0x0)) {
    iVar6 = FUN_100ef2f8(_DAT_60690000);
    if (iVar6 != 0) {
      FUN_10000b70(_DAT_60690000);
    }
    if (*_DAT_60690000 != 0) {
      FUN_10000750(_DAT_60690000,_DAT_38800010 + 0x10);
    }
  }
LAB_100877c8:
  iVar6 = *(int *)(*(int *)(local_cc + -0x1458) + 0x10);
  if (iVar6 != 0) {
    local_a0 = *(undefined4 *)(iVar6 + 0x10);
    local_9c = *(undefined4 *)(iVar6 + 0x14);
    local_68 = local_a0;
    uStack_64 = local_9c;
  }
  if (((*(int *)(*(int *)(local_cc + -0x1458) + 0x10) == 0) ||
      (iVar6 = FUN_100b08a4(&local_68,1), iVar6 != iVar7)) ||
     (iVar6 = FUN_100b08a4(&local_68,0), iVar6 != 0x17)) {
    FUN_1000a12c(*(undefined4 *)(local_cc + -0x1458),iVar7,0x17,8,1,0);
  }
  FUN_10000888(local_58,local_54);
  if (&stack0x00000000 != (undefined1 *)0x60) {
    FUN_10001b60(local_60,(int)local_5c);
  }
  return;
}



// Function: FUN_100878bc at 100878bc
// Size: 64 bytes

void FUN_100878bc(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),10,param_1,0);
  return;
}



// Function: FUN_100878fc at 100878fc
// Size: 2884 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100878fc(int *param_1)

{
  int **ppiVar1;
  int iVar2;
  short sVar12;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar13;
  int iVar14;
  int local_11c;
  short local_f8;
  short local_f6;
  short local_f4;
  short local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  short local_da;
  int *local_d8;
  undefined1 local_d4;
  int *local_d0;
  char local_cc;
  int *local_c8;
  char local_c4;
  undefined1 auStack_c0 [4];
  int local_bc;
  int local_b4;
  undefined2 local_b0;
  short local_ae;
  undefined2 local_ac;
  short local_aa;
  short local_a8;
  short local_a6;
  short local_a4;
  short local_a2;
  short local_a0 [2];
  short local_9c;
  undefined2 local_98;
  short local_96;
  undefined2 local_94;
  short local_92;
  short local_90 [2];
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  undefined4 local_80 [2];
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_68 [2];
  short local_60;
  undefined2 local_5e;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  int **local_50;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_c0);
  FUN_10000030();
  if (_DAT_48001195 != (int *)0x0) {
    iVar2 = FUN_100ef2f8(_DAT_48001195);
    if (iVar2 != 0) {
      FUN_10000b70(_DAT_48001195);
    }
    if (*_DAT_48001195 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_c0,&local_b0);
      iVar2 = *_DAT_48001195;
      local_e8 = *(undefined2 *)(iVar2 + 2);
      local_e6 = *(undefined2 *)(iVar2 + 4);
      local_e4 = *(undefined2 *)(iVar2 + 6);
      local_e2 = *(undefined2 *)(iVar2 + 8);
      iVar2 = FUN_100b08a4(&local_e8,1);
      local_aa = local_ae + (short)(iVar2 / 0x14);
      iVar2 = FUN_100b08a4(&local_e8,1);
      local_bc = local_bc + iVar2 / 0x14;
    }
  }
  if (**(int **)(local_11c + -0x1468) != 0) {
    iVar2 = FUN_100ef2f8(**(int **)(local_11c + -0x1468));
    if (iVar2 != 0) {
      FUN_10000b70(**(undefined4 **)(local_11c + -0x1468));
    }
    if (*(int *)**(undefined4 **)(local_11c + -0x1468) != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_c0,&local_b0);
      iVar2 = *(int *)**(undefined4 **)(local_11c + -0x1468);
      local_f0 = *(undefined2 *)(iVar2 + 2);
      local_ee = *(undefined2 *)(iVar2 + 4);
      local_ec = *(undefined2 *)(iVar2 + 6);
      local_ea = *(undefined2 *)(iVar2 + 8);
      local_ae = FUN_100b08a4(&local_f0,1);
      local_ae = local_aa - local_ae;
      iVar2 = FUN_100b08a4(&local_f0,1);
      local_b4 = local_b4 - iVar2;
    }
  }
  sVar12 = FUN_10001c20(_DAT_28090000);
  iVar2 = (int)(short)((uint)(int)sVar12 / 0x102);
  local_c8 = _DAT_28090000;
  local_c4 = FUN_10000360(_DAT_28090000);
  FUN_10002598(local_c8);
  iVar14 = 0;
  if (0 < iVar2) {
    do {
      if (*(short *)(*_DAT_28090000 + iVar14 * 0x102 + 0x100) == *(short *)(param_1 + 0x20)) break;
      iVar14 = (int)(short)((short)iVar14 + 1);
    } while (iVar14 < iVar2);
  }
  if (&stack0x00000000 != (undefined1 *)0xc8) {
    FUN_10001b60(local_c8,(int)local_c4);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_c0,&local_b0);
  psVar3 = &local_a8;
  if ((&local_a8 != (short *)0x0) || (psVar3 = (short *)FUN_100f56e4(8), psVar3 != (short *)0x0)) {
    *psVar3 = local_b0;
    psVar3[1] = local_ae;
    psVar3[2] = local_ac;
    psVar3[3] = local_aa;
  }
  puVar4 = (undefined4 *)FUN_100b057c(&local_a8,0);
  local_80[0] = *puVar4;
  FUN_100b0698(&local_a8,local_80);
  local_78 = 2;
  local_76 = 0;
  FUN_100b06d4(&local_a8);
  psVar3 = &local_f8;
  if ((&local_f8 != (short *)0x0) || (psVar3 = (short *)FUN_100f56e4(8), psVar3 != (short *)0x0)) {
    *psVar3 = local_b0;
    psVar3[1] = local_ae;
    psVar3[2] = local_ac;
    psVar3[3] = local_aa;
  }
  local_70 = 2;
  local_6e = 0;
  FUN_100b06d4(&local_f8);
  psVar3 = local_a0;
  if ((local_a0 != (short *)0x0) || (psVar3 = (short *)FUN_100f56e4(8), psVar3 != (short *)0x0)) {
    *psVar3 = local_f8;
    psVar3[1] = local_f6;
    psVar3[2] = local_f4;
    psVar3[3] = local_f2;
  }
  puVar4 = (undefined4 *)FUN_100b057c(local_a0,0);
  local_68[0] = *puVar4;
  FUN_100b0698(local_a0,local_68);
  local_60 = (short)iVar14 * 0x13;
  local_5e = 0;
  FUN_100b065c(local_a0);
  if ((_DAT_48001195 != (int *)0x0) && (iVar2 = FUN_100ef2f8(_DAT_48001195), iVar2 != 0)) {
    FUN_10000b70(_DAT_48001195);
  }
  local_d0 = _DAT_48001195;
  local_cc = FUN_10000360(_DAT_48001195);
  FUN_10000048(local_d0);
  iVar2 = *_DAT_48001195;
  local_98 = *(undefined2 *)(iVar2 + 2);
  local_96 = *(short *)(iVar2 + 4);
  local_94 = *(undefined2 *)(iVar2 + 6);
  local_92 = *(undefined2 *)(iVar2 + 8);
  iVar2 = FUN_100b08a4(&local_98,1);
  sVar12 = (short)(iVar2 / 0x14);
  local_92 = local_96 + sVar12;
  local_dc = FUN_100b08a4(&local_98,0);
  local_e0 = 0;
  local_de = 0;
  local_da = sVar12;
  if ((_DAT_28090000 != (int *)0x0) && (iVar2 = FUN_100ef2f8(_DAT_28090000), iVar2 != 0)) {
    FUN_10000b70(_DAT_28090000);
  }
  local_d8 = _DAT_28090000;
  local_d4 = FUN_10000360(_DAT_28090000);
  FUN_10000048(local_d8);
  FUN_10000870(&local_58,auStack_54);
  uVar5 = FUN_10009a98(*(undefined4 *)(*(int *)(local_11c + -0x1474) + 0x10));
  uVar6 = FUN_10009a98(*(undefined4 *)(*(int *)(local_11c + -0x1460) + 0x10));
  uVar7 = FUN_10009a98(*(undefined4 *)(*(int *)(local_11c + -0x1458) + 0x10));
  uVar8 = FUN_10009a98(*(undefined4 *)(*(int *)(local_11c + -0x1464) + 0x10));
  uVar9 = FUN_10009a98(local_58);
  sVar13 = 1;
  iVar2 = *(int *)(local_11c + -0x1d4);
  local_50 = &local_d8;
  do {
    uVar10 = FUN_100b0578(&local_a8);
    uVar11 = FUN_100b0578(&local_a8);
    FUN_100008d0(uVar6,uVar7,uVar11,uVar10,0,0);
    local_a0[0] = local_a0[0] + 1;
    local_9c = local_9c + 1;
    FUN_100b2268(iVar2);
    FUN_100008b8();
    FUN_100b2268(iVar2 + 0x5fa);
    FUN_100021c0();
    uVar10 = FUN_100b0578(&local_a8);
    uVar11 = FUN_100b0578(local_a0);
    FUN_100008d0(uVar8,uVar7,uVar11,uVar10,1,0);
    psVar3 = &local_88;
    if ((&local_88 != (short *)0x0) || (psVar3 = (short *)FUN_100f56e4(8), psVar3 != (short *)0x0))
    {
      *psVar3 = local_f8;
      psVar3[1] = local_f6;
      psVar3[2] = local_f4;
      psVar3[3] = local_f2;
    }
    local_86 = local_86 + -2;
    local_82 = local_82 + -4;
    psVar3 = local_90;
    if ((local_90 != (short *)0x0) || (psVar3 = (short *)FUN_100f56e4(8), psVar3 != (short *)0x0)) {
      *psVar3 = local_a8;
      psVar3[1] = local_a6;
      psVar3[2] = local_a4;
      psVar3[3] = local_a2;
    }
    local_8a = local_8a + -2;
    local_84 = local_88 + 2;
    local_8c = local_90[0] + 2;
    uVar10 = FUN_100b0578(&local_88);
    uVar11 = FUN_100b0578(local_90);
    FUN_100008d0(uVar7,uVar9,uVar11,uVar10,0,0);
    local_86 = local_86 + 1;
    local_82 = local_82 + 1;
    local_88 = local_88 + 2;
    local_90[0] = local_90[0] + 2;
    local_84 = local_84 + 2;
    local_8c = local_8c + 2;
    uVar10 = FUN_100b0578(&local_88);
    uVar11 = FUN_100b0578(local_90);
    FUN_100008d0(uVar7,uVar9,uVar11,uVar10,0,0);
    local_86 = local_86 + 1;
    local_82 = local_82 + 1;
    local_88 = local_88 + 2;
    local_90[0] = local_90[0] + 2;
    local_84 = local_84 + 10;
    local_8c = local_8c + 10;
    uVar10 = FUN_100b0578(&local_88);
    uVar11 = FUN_100b0578(local_90);
    FUN_100008d0(uVar7,uVar9,uVar11,uVar10,0,0);
    local_86 = local_86 + -1;
    local_82 = local_82 + -1;
    local_88 = local_88 + 10;
    local_90[0] = local_90[0] + 10;
    local_84 = local_84 + 3;
    local_8c = local_8c + 3;
    uVar10 = FUN_100b0578(&local_88);
    uVar11 = FUN_100b0578(local_90);
    FUN_100008d0(uVar7,uVar9,uVar11,uVar10,0,0);
    local_86 = local_86 + -1;
    local_82 = local_82 + -1;
    local_88 = local_88 + 3;
    local_90[0] = local_90[0] + 3;
    local_84 = local_84 + 2;
    local_8c = local_8c + 2;
    uVar10 = FUN_100b0578(&local_88);
    uVar11 = FUN_100b0578(local_90);
    FUN_100008d0(uVar7,uVar9,uVar11,uVar10,0,0);
    local_96 = local_96 + sVar12;
    local_92 = sVar12 + local_92;
    uVar10 = FUN_100b0578(&local_e0);
    uVar11 = FUN_100b0578(&local_98);
    FUN_100008d0(uVar5,uVar9,uVar11,uVar10,0,0);
    ppiVar1 = local_50;
    sVar13 = sVar13 + 1;
  } while (sVar13 < 0x14);
  FUN_10009b00(*(undefined4 *)(*(int *)(local_11c + -0x1474) + 0x10));
  FUN_10009b00(*(undefined4 *)(*(int *)(local_11c + -0x1460) + 0x10));
  FUN_10009b00(*(undefined4 *)(*(int *)(local_11c + -0x1458) + 0x10));
  FUN_10009b00(*(undefined4 *)(*(int *)(local_11c + -0x1464) + 0x10));
  FUN_10009b00(local_58);
  if (ppiVar1 != (int **)0x0) {
    FUN_10001b60(*ppiVar1,(int)*(char *)(ppiVar1 + 1));
  }
  if (&stack0x00000000 != (undefined1 *)0xd0) {
    FUN_10001b60(local_d0,(int)local_cc);
  }
  return;
}



// Function: FUN_10088464 at 10088464
// Size: 192 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088464(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **local_2c;
  
  _DAT_57c407ff = _DAT_57c407ff + -1;
  if (_DAT_57c407ff == 0) {
    ppuVar1 = &.TVect::OCECToRString;
    if ((_DAT_28090000 != 0) && (iVar2 = FUN_100ef2f8(_DAT_28090000), iVar2 != 0)) {
      FUN_10001c98(_DAT_28090000);
      ppuVar1 = local_2c;
    }
    _DAT_28090000 = 0;
    *(undefined2 *)ppuVar1[-0x517] = 0xffff;
    FUN_1000a094(ppuVar1[-0x519]);
    FUN_1000a094(ppuVar1[-0x518]);
    FUN_1000a094(ppuVar1[-0x516]);
    FUN_1000a094(ppuVar1[-0x51d]);
  }
  FUN_10106060(param_1);
  return;
}



// Function: FUN_10088524 at 10088524
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088524(void)

{
  FUN_100c1c8c(&DAT_38600044,_DAT_38600000,0x84,&DAT_60640000,&DAT_80410014);
  return;
}



// Function: FUN_10088560 at 10088560
// Size: 8 bytes

undefined4 FUN_10088560(void)

{
  return 0x60000000;
}



// Function: FUN_10088570 at 10088570
// Size: 116 bytes

undefined4 * FUN_10088570(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &DAT_807f0004;
    *(undefined2 *)(puVar1 + 0x10) = 0;
  }
  return puVar1;
}



// Function: FUN_100885e4 at 100885e4
// Size: 320 bytes

void FUN_100885e4(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_58 [72];
  
  piVar1 = (int *)FUN_100db500(0x57325343,0x57617232,0,1,0,0);
  piVar2 = (int *)FUN_100df14c(0);
  FUN_100df1f8(piVar2,param_2,piVar1);
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xf0),0x13,0,piVar1);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x178),auStack_58);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xf8));
  FUN_1007ec7c(param_2,auStack_58);
  FUN_10117884((int)*(int **)(param_2 + 0x148) +
               (int)*(short *)(**(int **)(param_2 + 0x148) + 0x2a0),3,3);
  FUN_10117884((int)*(int **)(param_2 + 0x148) +
               (int)*(short *)(**(int **)(param_2 + 0x148) + 0x118));
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
  return;
}



// Function: FUN_10088724 at 10088724
// Size: 2660 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088724(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short sVar8;
  undefined4 *puVar6;
  undefined1 uVar9;
  undefined4 uVar7;
  uint uVar10;
  int iVar11;
  int local_1d4;
  undefined1 auStack_1b0 [80];
  int *local_160;
  undefined1 auStack_15c [256];
  short local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (DAT_4bfde391 != '\0') {
    FUN_1008f648();
    FUN_1008f658(0);
  }
  local_160 = (int *)0x0;
  iVar11 = *(int *)(*(int *)(param_1 + 8) + 0x28);
  local_160 = (int *)FUN_10117884((int)_DAT_609d0000 + (int)*(short *)(*_DAT_609d0000 + 200),0xbc2,
                                  iVar11);
  FUN_100db26c();
  iVar2 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x7f8));
  iVar3 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x810));
  FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x328));
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = _DAT_41820010;
  _DAT_41820010 = auStack_15c;
  iVar4 = FUN_10000090(auStack_15c);
  if (iVar4 == 0) {
    if (iVar3 == 0x6f6b2020) {
      FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x328));
      **(undefined2 **)(local_1d4 + -0x16a4) = 1;
      iVar4 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x77617465);
      if (iVar4 == 0) {
        _DAT_63830000 = 7;
      }
      else if (*(short *)(iVar4 + 0xd4) == -1) {
        _DAT_63830000 = 7;
      }
      else if (*(short *)(iVar4 + 0xd2) < 100) {
        uVar10 = (int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0);
        _DAT_63830000 = (short)((int)uVar10 >> 1) + (ushort)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      }
      else {
        _DAT_63830000 = (short)(((int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0)) / 5)
        ;
      }
      iVar4 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x68696c6c);
      if (iVar4 == 0) {
        _DAT_63830002 = 7;
      }
      else if (*(short *)(iVar4 + 0xd4) == -1) {
        _DAT_63830002 = 7;
      }
      else if (*(short *)(iVar4 + 0xd2) < 100) {
        uVar10 = (int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0);
        _DAT_63830002 = (short)((int)uVar10 >> 1) + (ushort)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      }
      else {
        _DAT_63830002 = (short)(((int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0)) / 5)
        ;
      }
      iVar4 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x63697469);
      if (iVar4 == 0) {
        _DAT_63830004 = 7;
      }
      else if (*(short *)(iVar4 + 0xd4) == -1) {
        _DAT_63830004 = 7;
      }
      else if (*(short *)(iVar4 + 0xd2) < 100) {
        uVar10 = (int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0);
        _DAT_63830004 = (short)((int)uVar10 >> 1) + (ushort)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      }
      else {
        _DAT_63830004 = (short)(((int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0)) / 5)
        ;
      }
      iVar4 = FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x666f7265);
      if (iVar4 == 0) {
        _DAT_63830006 = 7;
      }
      else if (*(short *)(iVar4 + 0xd4) == -1) {
        _DAT_63830006 = 7;
      }
      else if (*(short *)(iVar4 + 0xd2) < 100) {
        uVar10 = (int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0);
        _DAT_63830006 = (short)((int)uVar10 >> 1) + (ushort)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      }
      else {
        _DAT_63830006 = (short)(((int)*(short *)(iVar4 + 0xd4) - (int)*(short *)(iVar4 + 0xd0)) / 5)
        ;
      }
      piVar5 = (int *)FUN_10117884((int)*(int **)(iVar2 + 8) +
                                   (int)*(short *)(**(int **)(iVar2 + 8) + 0x308),0x74657272);
      if (piVar5 == (int *)0x0) {
        sVar8 = 1;
      }
      else {
        sVar8 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x878));
      }
      puVar6 = (undefined4 *)
               FUN_10117884((int)*(int **)(iVar2 + 0x40) +
                            (int)*(short *)(**(int **)(iVar2 + 0x40) + 0xe0));
      _DAT_2c1f0000 = *puVar6;
      _DAT_2c1f0004 = puVar6[1];
      _DAT_2c1f0008 = puVar6[2];
      _DAT_2c1f000c = puVar6[3];
      _DAT_2c1f0010 = puVar6[4];
      _DAT_2c1f0014 = puVar6[5];
      _DAT_2c1f0018 = puVar6[6];
      _DAT_2c1f001c = puVar6[7];
      _DAT_2c1f0020 = puVar6[8];
      _DAT_2c1f0024 = puVar6[9];
      _DAT_2c1f0028 = puVar6[10];
      _DAT_2c1f002c = puVar6[0xb];
      _DAT_2c1f0030 = puVar6[0xc];
      _DAT_2c1f0034 = puVar6[0xd];
      _DAT_2c1f0038 = puVar6[0xe];
      _DAT_2c1f003c = puVar6[0xf];
      _DAT_2c1f0040 = puVar6[0x10];
      _DAT_2c1f0044 = puVar6[0x11] & 0xffff0000;
      **(short **)(local_1d4 + -0x143c) = sVar8 + -1;
      FUN_1007ed14(iVar11,&DAT_2c1f0000);
      FUN_10117884((int)*(int **)(iVar11 + 0x14c) +
                   (int)*(short *)(**(int **)(iVar11 + 0x14c) + 0x118));
      piVar5 = (int *)FUN_10117884((int)*(int **)(iVar2 + 8) +
                                   (int)*(short *)(**(int **)(iVar2 + 8) + 0x308),0x61726d79);
      if (piVar5 == (int *)0x0) {
        sVar8 = 1;
      }
      else {
        sVar8 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x878));
      }
      uVar10 = (uint)sVar8;
      if (2 < (int)uVar10) {
        puVar6 = (undefined4 *)
                 FUN_10117884((int)*(int **)(iVar2 + 0x44) +
                              (int)*(short *)(**(int **)(iVar2 + 0x44) + 0xe0),uVar10 - 2);
        _DAT_83ff0008 = *puVar6;
        _DAT_83ff000c = puVar6[1];
        _DAT_83ff0010 = puVar6[2];
        _DAT_83ff0014 = puVar6[3];
        _DAT_83ff0018 = puVar6[4];
        _DAT_83ff001c = puVar6[5];
        _DAT_83ff0020 = puVar6[6];
        _DAT_83ff0024 = puVar6[7];
        _DAT_83ff0028 = puVar6[8];
        _DAT_83ff002c = puVar6[9];
        _DAT_83ff0030 = puVar6[10];
        _DAT_83ff0034 = puVar6[0xb];
        _DAT_83ff0038 = puVar6[0xc];
        _DAT_83ff003c = puVar6[0xd];
        _DAT_83ff0040 = puVar6[0xe];
        _DAT_83ff0044 = puVar6[0xf];
        _DAT_83ff0048 = puVar6[0x10];
        _DAT_83ff004c = puVar6[0x11] & 0xffff0000;
      }
      uVar1 = (uint)(uVar10 < 3);
      uVar10 = ((uVar10 < 3) + 4) -
               ((uint)(uVar1 < 0xfffffffe && uVar1 + 2 < 0xfffffffe) - ((int)uVar10 >> 0x1f)) & 1;
      **(undefined1 **)(local_1d4 + -0x1438) = (char)uVar10;
      if (uVar10 != 0) {
        FUN_1007edac(iVar11,&DAT_83ff0008);
        FUN_10117884((int)*(int **)(iVar11 + 0x150) +
                     (int)*(short *)(**(int **)(iVar11 + 0x150) + 0x118));
      }
      piVar5 = (int *)FUN_10117884((int)*(int **)(iVar2 + 8) +
                                   (int)*(short *)(**(int **)(iVar2 + 8) + 0x308),0x63697479);
      if (piVar5 == (int *)0x0) {
        sVar8 = 1;
      }
      else {
        sVar8 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x878));
      }
      uVar10 = (uint)sVar8;
      if (2 < (int)uVar10) {
        puVar6 = (undefined4 *)
                 FUN_10117884((int)*(int **)(iVar2 + 0x48) +
                              (int)*(short *)(**(int **)(iVar2 + 0x48) + 0xe0),uVar10 - 2);
        _DAT_63e90000 = *puVar6;
        _DAT_63e90004 = puVar6[1];
        _DAT_63e90008 = puVar6[2];
        _DAT_63e9000c = puVar6[3];
        _DAT_63e90010 = puVar6[4];
        _DAT_63e90014 = puVar6[5];
        _DAT_63e90018 = puVar6[6];
        _DAT_63e9001c = puVar6[7];
        _DAT_63e90020 = puVar6[8];
        _DAT_63e90024 = puVar6[9];
        _DAT_63e90028 = puVar6[10];
        _DAT_63e9002c = puVar6[0xb];
        _DAT_63e90030 = puVar6[0xc];
        _DAT_63e90034 = puVar6[0xd];
        _DAT_63e90038 = puVar6[0xe];
        _DAT_63e9003c = puVar6[0xf];
        _DAT_63e90040 = puVar6[0x10];
        _DAT_63e90044 = puVar6[0x11] & 0xffff0000;
      }
      uVar1 = (uint)(uVar10 < 3);
      **(byte **)(local_1d4 + -0x1434) =
           ((uVar10 < 3) + '\x04') -
           ((uVar1 < 0xfffffffe && uVar1 + 2 < 0xfffffffe) - (char)(sVar8 >> 7)) & 1;
      if (iVar11 != 0) {
        FUN_1007eea4(iVar11,&DAT_63e90000);
        FUN_10117884((int)*(int **)(iVar11 + 0x154) +
                     (int)*(short *)(**(int **)(iVar11 + 0x154) + 0x118));
      }
      piVar5 = (int *)FUN_10117884((int)*(int **)(iVar2 + 8) +
                                   (int)*(short *)(**(int **)(iVar2 + 8) + 0x308),0x73686965);
      if (piVar5 == (int *)0x0) {
        sVar8 = 1;
      }
      else {
        sVar8 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x878));
      }
      uVar10 = (uint)sVar8;
      if (2 < (int)uVar10) {
        puVar6 = (undefined4 *)
                 FUN_10117884((int)*(int **)(iVar2 + 0x4c) +
                              (int)*(short *)(**(int **)(iVar2 + 0x4c) + 0xe0),uVar10 - 2);
        _DAT_48000014 = *puVar6;
        _DAT_48000018 = puVar6[1];
        _DAT_4800001c = puVar6[2];
        _DAT_48000020 = puVar6[3];
        _DAT_48000024 = puVar6[4];
        _DAT_48000028 = puVar6[5];
        _DAT_4800002c = puVar6[6];
        _DAT_48000030 = puVar6[7];
        _DAT_48000034 = puVar6[8];
        _DAT_48000038 = puVar6[9];
        _DAT_4800003c = puVar6[10];
        _DAT_48000040 = puVar6[0xb];
        _DAT_48000044 = puVar6[0xc];
        _DAT_48000048 = puVar6[0xd];
        _DAT_4800004c = puVar6[0xe];
        _DAT_48000050 = puVar6[0xf];
        _DAT_48000054 = puVar6[0x10];
        _DAT_48000058 = puVar6[0x11] & 0xffff0000;
      }
      uVar1 = (uint)(uVar10 < 3);
      uVar10 = ((uVar10 < 3) + 4) -
               ((uint)(uVar1 < 0xfffffffe && uVar1 + 2 < 0xfffffffe) - ((int)uVar10 >> 0x1f)) & 1;
      **(undefined1 **)(local_1d4 + -0x1430) = (char)uVar10;
      if (uVar10 != 0) {
        FUN_1007ef9c(iVar11,&DAT_48000014);
        FUN_10117884((int)*(int **)(iVar11 + 0x158) +
                     (int)*(short *)(**(int **)(iVar11 + 0x158) + 0x118));
      }
      piVar5 = (int *)FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x308),0x616c6c79);
      if (piVar5 == (int *)0x0) {
        _DAT_60640000 = 0;
      }
      else {
        _DAT_60640000 = FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x848));
      }
      FUN_100981f8(auStack_1b0,0x80);
      uVar9 = FUN_100f1574(1);
      piVar5 = (int *)FUN_10001fc8(0x40a);
      **(undefined1 **)(local_1d4 + -0x3c) = uVar9;
      if (piVar5 != (int *)0x0) {
        *(short *)*piVar5 = _DAT_63830000;
        *(short *)(*piVar5 + 2) = _DAT_63830002;
        *(short *)(*piVar5 + 4) = _DAT_63830004;
        *(short *)(*piVar5 + 6) = _DAT_63830006;
        FUN_100012d8(&DAT_2c1f0006,*piVar5 + 8,(_DAT_2c1f0004 >> 8 & 0xff) + 1);
        FUN_100012d8(&DAT_83ff000e,*piVar5 + 0x108,(_DAT_83ff000c >> 8 & 0xff) + 1);
        FUN_100012d8(&DAT_63e90006,*piVar5 + 0x208,(_DAT_63e90004 >> 8 & 0xff) + 1);
        FUN_100012d8(&DAT_4800001a,*piVar5 + 0x308,(_DAT_48000018 >> 8 & 0xff) + 1);
        *(char *)(*piVar5 + 0x408) = (char)_DAT_60640000;
        FUN_100985fc(auStack_1b0,piVar5,0x52616e64,1000,*(undefined4 *)(local_1d4 + -0xe4c));
      }
      FUN_100ef510(piVar5);
      FUN_100982e8(auStack_1b0,2);
    }
    FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x738));
    local_160 = (int *)0x0;
    _DAT_41820010 = local_54;
  }
  else {
    if (local_160 != (int *)0x0) {
      FUN_10117884((int)local_160 + (int)*(short *)(*local_160 + 0x738));
    }
    FUN_100db158((int)local_5c,local_58);
  }
  if (iVar3 == 0x6f6b2020) {
    piVar5 = *(int **)(param_1 + 8);
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x328));
    FUN_100885e4(param_1,iVar11);
    uVar7 = FUN_1007a894(0);
    FUN_1007a95c(uVar7,piVar5);
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x200),uVar7);
    FUN_10092c5c(0);
    FUN_1007c714(iVar11,0x3f5);
  }
  return;
}



// Function: FUN_10089188 at 10089188
// Size: 564 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089188(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar5;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int local_dc;
  undefined1 auStack_b8 [80];
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
  int local_20;
  
  _DAT_a8650028 = 0;
  piVar8 = *(int **)(param_1 + 8);
  iVar7 = piVar8[10];
  piVar1 = (int *)FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x308),0x4c697374);
  if ((piVar1 == (int *)0x0) ||
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x818) + (int)piVar1), iVar2 == 0)) {
    FUN_100db26c(0);
  }
  uVar5 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x908));
  *(undefined2 *)(param_1 + 0x40) = uVar5;
  piVar6 = (int *)piVar1[0x2e];
  uVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x908));
  puVar4 = (undefined4 *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xe0),uVar3);
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  uStack_5c = puVar4[3];
  uStack_58 = puVar4[4];
  uStack_54 = puVar4[5];
  local_50 = puVar4[6];
  uStack_4c = puVar4[7];
  uStack_48 = puVar4[8];
  uStack_44 = puVar4[9];
  uStack_40 = puVar4[10];
  uStack_3c = puVar4[0xb];
  local_38 = puVar4[0xc];
  uStack_34 = puVar4[0xd];
  uStack_30 = puVar4[0xe];
  uStack_2c = puVar4[0xf];
  uStack_28 = puVar4[0x10];
  uStack_24 = puVar4[0x11] & 0xffff0000;
  FUN_1007ec7c(iVar7,&local_68);
  FUN_10117884((int)*(int **)(iVar7 + 0x148) + (int)*(short *)(**(int **)(iVar7 + 0x148) + 0x118));
  uVar3 = FUN_100f1574(1);
  local_20 = FUN_10001ae8((int)&uStack_64 + 2);
  FUN_100f1574(uVar3);
  if (local_20 != 0) {
    FUN_100981f8(auStack_b8,0x80);
    FUN_100985fc(auStack_b8,local_20,0x4c617374,1000,*(undefined4 *)(local_dc + -0xe4c));
    local_20 = FUN_100ef510(local_20);
    FUN_100982e8(auStack_b8,2);
  }
  FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x328));
  uVar3 = FUN_1007a894(0);
  FUN_1007a95c(uVar3,piVar8);
  FUN_10117884((int)piVar8 + (int)*(short *)(*piVar8 + 0x200),uVar3);
  FUN_1007c714(iVar7,0x3f5);
  return;
}



// Function: FUN_100893bc at 100893bc
// Size: 100 bytes

void FUN_100893bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 0x18) == 0x52616e64) {
    FUN_10088724();
  }
  else if (*(int *)(param_3 + 0x18) == 0x53746172) {
    FUN_10089188();
  }
  else {
    FUN_100d5934();
  }
  return;
}



// Function: FUN_10089420 at 10089420
// Size: 148 bytes

void FUN_10089420(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  
  param_1[0x2e] = (int)param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8b0),(int)*(short *)(param_1 + 0x20));
  iVar2 = *param_1;
  sVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x8d8),(int)sVar1);
  return;
}



// Function: FUN_100894b4 at 100894b4
// Size: 740 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100894b4(undefined4 param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int local_4b4;
  undefined1 auStack_464 [4];
  undefined4 local_460;
  undefined1 *local_45c;
  undefined2 *local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  int local_3d8 [4];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  uint uStack_384;
  undefined2 local_380;
  undefined4 local_37e;
  undefined1 local_338 [256];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  undefined2 local_1f0;
  undefined2 uStack_1ee;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  byte local_1a8 [256];
  undefined1 auStack_a8 [12];
  undefined4 local_9c;
  byte *local_96;
  undefined2 local_92;
  short local_8c;
  char local_8a;
  int local_88;
  ushort local_80;
  undefined4 local_78;
  undefined4 local_44;
  
  local_428 = &local_380;
  local_45c = local_338;
  local_9c = 0;
  local_1a8[0] = 0;
  local_338[0] = 0;
  local_460 = 0x3c;
  local_96 = local_1a8;
  FUN_10001bd8(_DAT_28030000 + 0x32,&local_460);
  FUN_100db2f4();
  local_92 = local_380;
  piVar2 = (int *)FUN_100f56e4(0x20);
  if (piVar2 != (int *)0x0) {
    FUN_100d8824(piVar2);
    *piVar2 = *(int *)(local_4b4 + -0x142c);
  }
  FUN_100d88b4(piVar2,0,0x46);
  local_8c = 1;
  local_78 = local_37e;
  iVar3 = FUN_10002058(auStack_a8);
  sVar5 = 1;
  uVar1 = local_1f0;
  local_1f0 = local_92;
  while (local_92 = local_1f0, iVar3 == 0) {
    if (((uint)(int)local_8a >> 4 & 1) != 1) {
      uStack_1ee = (undefined2)((uint)local_44 >> 0x10);
      uStack_1ec = (undefined2)local_44;
      FUN_100012d8(local_1a8,&uStack_1ea,local_1a8[0] + 1);
      FUN_100ef284(local_1a8,&uStack_1ea);
      if ((local_80 & 0x8000) == 0) {
        uVar1 = local_1f0;
        if (local_88 == 0x57325343) {
          local_3c8 = CONCAT22(local_1f0,uStack_1ee);
          uStack_3c4 = CONCAT22(uStack_1ec,uStack_1ea);
          uStack_3c0 = uStack_1e8;
          uStack_3bc = uStack_1e4;
          uStack_3b8 = uStack_1e0;
          uStack_3b4 = uStack_1dc;
          local_3b0 = local_1d8;
          uStack_3ac = uStack_1d4;
          uStack_3a8 = uStack_1d0;
          uStack_3a4 = uStack_1cc;
          uStack_3a0 = uStack_1c8;
          uStack_39c = uStack_1c4;
          uStack_384 = uStack_1ac & 0xffff0000;
          local_398 = local_1c0;
          uStack_394 = uStack_1bc;
          uStack_390 = uStack_1b8;
          uStack_38c = uStack_1b4;
          uStack_388 = uStack_1b0;
          FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x108),&local_3c8);
          uVar1 = local_1f0;
        }
      }
      else {
        uVar4 = FUN_100032d0(&local_1f0,1);
        iVar3 = FUN_10000678();
        uVar1 = local_1f0;
        if (iVar3 == 0) {
          iVar3 = FUN_10003558(0x616c6973,0);
          iVar6 = -0x2b;
          if (iVar3 != 0) {
            iVar6 = FUN_10002070(0,iVar3,&local_238,auStack_464);
          }
          if (((iVar6 == 0) && (iVar3 = FUN_10001530(&local_238,local_3d8), iVar3 == 0)) &&
             (local_3d8[0] == 0x57325343)) {
            local_420 = local_238;
            uStack_41c = uStack_234;
            uStack_418 = uStack_230;
            uStack_414 = uStack_22c;
            uStack_410 = uStack_228;
            uStack_40c = uStack_224;
            local_408 = local_220;
            uStack_404 = uStack_21c;
            uStack_400 = uStack_218;
            uStack_3fc = uStack_214;
            uStack_3f8 = uStack_210;
            uStack_3f4 = uStack_20c;
            uStack_3dc = uStack_1f4 & 0xffff0000;
            local_3f0 = local_208;
            uStack_3ec = uStack_204;
            uStack_3e8 = uStack_200;
            uStack_3e4 = uStack_1fc;
            uStack_3e0 = uStack_1f8;
            FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x108),&local_420);
          }
          FUN_10003300(uVar4);
          uVar1 = local_1f0;
        }
      }
    }
    local_1f0 = uVar1;
    sVar5 = sVar5 + 1;
    local_78 = local_37e;
    local_8c = sVar5;
    iVar3 = FUN_10002058(auStack_a8);
    uVar1 = local_1f0;
    local_1f0 = local_92;
  }
  local_1f0 = uVar1;
  FUN_10089420(param_1,piVar2);
  return;
}



// Function: FUN_10089798 at 10089798
// Size: 1480 bytes

void FUN_10089798(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar10;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int local_404;
  undefined1 auStack_3e0 [256];
  undefined1 auStack_2e0 [256];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 local_198 [28];
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  short local_14c;
  short local_14a;
  short local_148;
  undefined1 local_140 [260];
  
  piVar13 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar13);
  piVar1 = (int *)FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x308),0x4c697374);
  FUN_100db26c(piVar1);
  iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x908));
  if (*(short *)(param_1 + 0x40) != iVar2) {
    uVar10 = FUN_10117884((int)*(short *)(*piVar1 + 0x908) + (int)piVar1);
    *(undefined2 *)(param_1 + 0x40) = uVar10;
    piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar13 + 0x308) + (int)piVar13,0x6e616d65);
    FUN_100db26c(piVar3);
    piVar4 = (int *)FUN_10117884((int)*(short *)(*piVar13 + 0x308) + (int)piVar13,0x64657363);
    FUN_100db26c(piVar4);
    piVar5 = (int *)FUN_10117884((int)*(short *)(*piVar13 + 0x308) + (int)piVar13,0x63697479);
    FUN_100db26c(piVar5);
    piVar6 = (int *)FUN_10117884((int)*(short *)(*piVar13 + 0x308) + (int)piVar13,0x7275696e);
    FUN_100db26c(piVar6);
    piVar7 = (int *)FUN_10117884((int)*(short *)(*piVar13 + 0x308) + (int)piVar13,0x706c6179);
    FUN_100db26c(piVar7);
    iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x818) + (int)piVar1);
    if (iVar2 == 0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),&DAT_7c0803a6,0);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),&DAT_7c0803a6,0);
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7c8),&DAT_7c0803a6,0);
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),&DAT_7c0803a6,0);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),&DAT_7c0803a6,0);
    }
    else {
      piVar11 = (int *)piVar1[0x2e];
      uVar8 = FUN_10117884((int)*(short *)(*piVar1 + 0x908) + (int)piVar1);
      puVar9 = (undefined4 *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0xe0),uVar8);
      local_1e0 = *puVar9;
      uStack_1dc = puVar9[1];
      uStack_1d8 = puVar9[2];
      uStack_1d4 = puVar9[3];
      uStack_1d0 = puVar9[4];
      uStack_1cc = puVar9[5];
      local_1c8 = puVar9[6];
      uStack_1c4 = puVar9[7];
      uStack_1c0 = puVar9[8];
      uStack_1bc = puVar9[9];
      uStack_1b8 = puVar9[10];
      uStack_1b4 = puVar9[0xb];
      local_1b0 = puVar9[0xc];
      uStack_1ac = puVar9[0xd];
      uStack_1a8 = puVar9[0xe];
      uStack_1a4 = puVar9[0xf];
      uStack_1a0 = puVar9[0x10];
      uStack_19c = puVar9[0x11] & 0xffff0000;
      uVar8 = FUN_100032d0(&local_1e0,1);
      FUN_100db328();
      iVar2 = FUN_10003558(0x5343454e,10000);
      if (iVar2 == 0) {
        local_198[0] = 0;
        iVar2 = *(int *)(local_404 + -0x144c);
        local_17c = *(undefined4 *)(iVar2 + 0x120);
        uStack_178 = *(undefined4 *)(iVar2 + 0x124);
        uStack_174 = *(undefined4 *)(iVar2 + 0x128);
        uStack_170 = *(undefined4 *)(iVar2 + 300);
        uStack_16c = *(undefined4 *)(iVar2 + 0x130);
        uStack_168 = *(undefined4 *)(iVar2 + 0x134);
        uStack_164 = *(undefined4 *)(iVar2 + 0x138);
        uStack_160 = *(uint *)(iVar2 + 0x13c) & 0xffff0000;
        local_14c = 0;
        local_14a = 0;
        local_148 = 0;
      }
      else {
        piVar11 = (int *)FUN_100fb260(0);
        FUN_100fb300(piVar11,0x5343454e,10000);
        FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0xe0),local_198,0x54);
        FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x90));
      }
      FUN_10003300(uVar8);
      FUN_100b19f4(auStack_2e0,local_198);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),auStack_2e0,0);
      FUN_100b19f4(auStack_3e0,&local_17c);
      FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x7c8),auStack_3e0,0);
      local_140[0] = 0;
      uVar8 = FUN_100525a0((int)local_14c);
      FUN_10000ac8(uVar8,local_140);
      FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x7c8),local_140,0);
      uVar8 = FUN_100525a0((int)local_14a);
      FUN_10000ac8(uVar8,local_140);
      FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x7c8),local_140,0);
      uVar8 = FUN_100525a0((int)local_148);
      FUN_10000ac8(uVar8,local_140);
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7c8),local_140,0);
    }
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
    FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x4d0));
    FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x4d0));
    FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x4d0));
    FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x4d0));
  }
  piVar13 = (int *)FUN_10117884((int)piVar13 + (int)*(short *)(*piVar13 + 0x308),0x53746172);
  if ((piVar1 != (int *)0x0) && (piVar13 != (int *)0x0)) {
    iVar12 = *piVar13;
    iVar2 = *piVar1;
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(iVar2 + 0x818),iVar2,
                         *(undefined4 *)(iVar2 + 0x81c));
    FUN_10117884((int)piVar13 + (int)*(short *)(iVar12 + 0x738),iVar2 == 0,1);
  }
  return;
}



// Function: FUN_10089d60 at 10089d60
// Size: 448 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089d60(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_170 [80];
  undefined1 local_120 [260];
  
  piVar6 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar6);
  piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x4c697374);
  if (piVar1 != (int *)0x0) {
    FUN_100f4f94(piVar1,piVar6);
    FUN_100894b4(piVar1);
    if (*(short *)(piVar1 + 0x20) < 1) {
      FUN_10089798(param_1);
    }
    else {
      FUN_100981f8(auStack_170,0x80);
      puVar2 = (undefined4 *)FUN_10098320(auStack_170,0x4c617374,1000);
      iVar4 = 1;
      iVar5 = iVar4;
      if (puVar2 != (undefined4 *)0x0) {
        iVar3 = 1;
        if (0 < *(short *)(piVar1 + 0x20)) {
          do {
            iVar5 = iVar3;
            local_120[0] = 0;
            FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x890),iVar5,local_120);
            iVar3 = FUN_100b1c18(local_120,*puVar2,1);
            if (iVar3 == 1) break;
            iVar3 = (int)(short)((short)iVar5 + 1);
            iVar5 = iVar4;
          } while (iVar3 <= *(short *)(piVar1 + 0x20));
        }
        FUN_100ef510(puVar2);
      }
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8f0),iVar5,0,1,1);
      FUN_100982e8(auStack_170,2);
    }
  }
  if (_DAT_60000000 != (int *)0x0) {
    FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x738));
    _DAT_60000000 = (int *)0x0;
  }
  return;
}



// Function: FUN_10089f20 at 10089f20
// Size: 296 bytes

void FUN_10089f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_2 == 8) {
    FUN_10089798(param_1);
  }
  else if (param_2 == 0x21) {
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)FUN_10117884((int)*(short *)(*piVar4 + 0x308) + (int)piVar4,
                                   *(undefined4 *)(param_1 + 0x24));
    }
    if ((piVar1 == (int *)0x0) ||
       (iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0)), iVar2 == 0)) {
      FUN_10089188(param_1);
    }
    else {
      iVar2 = *piVar1;
      uVar3 = FUN_10117884((int)*(short *)(iVar2 + 0x530) + (int)piVar1);
      FUN_10117884((int)*(short *)(iVar2 + 0xd0) + (int)piVar1,uVar3,piVar4,0);
    }
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_1008a048 at 1008a048
// Size: 8 bytes

undefined1 * FUN_1008a048(void)

{
  return &DAT_60640000;
}



// Function: FUN_1008a058 at 1008a058
// Size: 128 bytes

undefined4 * FUN_1008a058(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = &DAT_63c30000;
  }
  return param_1;
}



// Function: FUN_1008a0d8 at 1008a0d8
// Size: 40 bytes

void FUN_1008a0d8(void)

{
  FUN_1008a058(0);
  return;
}



// Function: FUN_1008a100 at 1008a100
// Size: 648 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a100(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar6;
  int iVar4;
  undefined4 uVar5;
  int iVar7;
  int local_44;
  
  piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                               (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x706f7075);
  FUN_100db26c(piVar1);
  uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x860));
  FUN_100db26c(uVar2);
  for (iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8a0)); 3 < iVar3;
      iVar3 = (int)(short)((short)iVar3 + -1)) {
    FUN_10003138(uVar2,iVar3);
  }
  FUN_100db26c(_DAT_60000000);
  sVar6 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
  iVar3 = (int)sVar6;
  if (iVar3 != 0) {
    FUN_10003378(uVar2,*(int *)(local_44 + -0x144c) + 0x140);
    iVar7 = 1;
    if (0 < iVar3) {
      do {
        iVar4 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar7);
        FUN_100db26c();
        FUN_10003378(uVar2,*(int *)(local_44 + -0x144c) + 0x144);
        uVar5 = FUN_100b1c84(iVar4 + 4);
        FUN_10001a40(uVar2,(int)(short)((short)iVar7 + 4),uVar5);
        iVar7 = (int)(short)((short)iVar7 + 1);
      } while (iVar7 <= iVar3);
    }
  }
  if (_DAT_48000f11 < 1) {
    sVar6 = 1 - (short)_DAT_48000f11;
  }
  else {
    sVar6 = (short)_DAT_48000f11 + 4;
  }
  iVar3 = (int)sVar6;
  if (_DAT_4800006c != 0) {
    iVar3 = *(int *)(local_44 + -0x144c);
    FUN_10003378(uVar2,iVar3 + 0x14c);
    FUN_10003378(uVar2,iVar3 + 0x150);
    iVar3 = FUN_10002bb0(uVar2);
    uVar5 = FUN_100b1c84(&DAT_48000070);
    FUN_10001a40(uVar2,iVar3,uVar5);
  }
  uVar2 = FUN_10002bb0(uVar2);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7d8),iVar3,1,uVar2,1);
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x828),iVar3,1,uVar2,1);
  return;
}



// Function: FUN_1008a388 at 1008a388
// Size: 2316 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a388(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 uVar5;
  undefined4 *puVar2;
  int *piVar3;
  short sVar4;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_1 + 8);
  iVar9 = *(int *)(_DAT_57c407bd + 0x88);
  iVar7 = param_3[6];
  if (iVar7 == 0x69636f36) goto LAB_1008a7b0;
  if (0x69636f36 < iVar7) {
    if (iVar7 == 0x726f6c36) goto LAB_1008a69c;
    if (0x726f6c36 < iVar7) {
      if (iVar7 != 0x73696432) {
        if (iVar7 < 0x73696433) {
          if (iVar7 == 0x73656c65) {
            FUN_1005b938(piVar10);
            return;
          }
          if (iVar7 < 0x73656c66) {
            if ((iVar7 == 0x726f6c37) || (iVar7 == 0x726f6c38)) goto LAB_1008a69c;
          }
          else if ((iVar7 == 0x73696430) || (iVar7 == 0x73696431)) goto LAB_1008aae4;
          goto LAB_1008ac70;
        }
        if (iVar7 != 0x73696435) {
          if (iVar7 < 0x73696436) {
            if ((iVar7 == 0x73696433) || (iVar7 == 0x73696434)) goto LAB_1008aae4;
          }
          else if ((iVar7 == 0x73696436) || (iVar7 == 0x73696437)) goto LAB_1008aae4;
          goto LAB_1008ac70;
        }
      }
LAB_1008aae4:
      uVar6 = 0x73696430;
      do {
        *(ushort *)(uVar6 * 2 + _DAT_4bffe775 + 0x192d3870) = (ushort)(param_3[6] != uVar6);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x73696438);
      DAT_38600000 = 1;
      return;
    }
    if (iVar7 == 0x706f7075) {
      sVar4 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x878));
      FUN_1005abf4((int)(short)(sVar4 + -1),piVar10);
      return;
    }
    if (iVar7 < 0x706f7076) {
      if (iVar7 == 0x69636f38) goto LAB_1008a7b0;
      if (iVar7 < 0x69636f39) {
        if (iVar7 == 0x69636f37) goto LAB_1008a7b0;
      }
      else {
        if (iVar7 == 0x6d61696c) {
          piVar3 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x61646472);
          if (piVar3 != (int *)0x0) {
            iVar8 = *piVar3;
            iVar7 = *param_3;
            iVar7 = FUN_10117884((int)param_3 + (int)*(short *)(iVar7 + 0x848),iVar7,
                                 *(undefined4 *)(iVar7 + 0x84c));
            FUN_10117884((int)piVar3 + (int)*(short *)(iVar8 + 0x738),iVar7 == 0,1);
          }
          piVar10 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x676f2020)
          ;
          if (piVar10 != (int *)0x0) {
            iVar7 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
            if ((iVar7 == 0) || (iVar7 = FUN_1007f1d4(iVar9), iVar7 != 0)) {
              uVar1 = 0;
            }
            else {
              uVar1 = 1;
            }
            FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x738),uVar1,1);
          }
          uVar5 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(undefined1 *)(iVar9 + 0x16e) = uVar5;
          return;
        }
        if (iVar7 == 0x6d6f7265) goto LAB_1008ab88;
      }
    }
    else {
      if (iVar7 == 0x726f6c33) {
LAB_1008a69c:
        FUN_10059b7c((int)(short)((short)param_3[6] + -0x6c31),piVar10);
        piVar10 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x676f2020);
        if (piVar10 != (int *)0x0) {
          if ((*(char *)(iVar9 + 0x16e) == '\0') || (iVar7 = FUN_1007f1d4(iVar9), iVar7 != 0)) {
            uVar1 = 0;
          }
          else {
            uVar1 = 1;
          }
          FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x738),uVar1,1);
        }
        DAT_38600000 = 1;
        return;
      }
      if (iVar7 < 0x726f6c34) {
        if ((iVar7 == 0x726f6c31) || (iVar7 == 0x726f6c32)) goto LAB_1008a69c;
      }
      else if ((iVar7 == 0x726f6c34) || (iVar7 == 0x726f6c35)) goto LAB_1008a69c;
    }
    goto LAB_1008ac70;
  }
  if (iVar7 == 0x636f6d31) {
LAB_1008ab3c:
    iVar7 = 0;
    do {
      *(short *)(_DAT_4bffe775 + iVar7 * 2 + 0xc0) = (short)param_3[6] + -0x6d30;
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < 8);
    FUN_100584c8(piVar10);
    DAT_38600000 = 1;
    return;
  }
  if (iVar7 < 0x636f6d32) {
    if (iVar7 != 0x63686134) {
      if (iVar7 < 0x63686135) {
        if (iVar7 != 0x63686131) {
          if (iVar7 < 0x63686132) {
            if (iVar7 == 0x61646472) {
              FUN_1007f234(iVar9);
              piVar10 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),
                                            0x676f2020);
              if (piVar10 == (int *)0x0) {
                return;
              }
              iVar8 = *piVar10;
              iVar7 = FUN_1007f1d4(iVar9);
              FUN_10117884((int)piVar10 + (int)*(short *)(iVar8 + 0x738),iVar7 == 0,1);
              return;
            }
          }
          else if ((iVar7 == 0x63686132) || (iVar7 == 0x63686133)) goto LAB_1008a740;
          goto LAB_1008ac70;
        }
      }
      else if (iVar7 != 0x63686137) {
        if (iVar7 < 0x63686138) {
          if ((iVar7 != 0x63686135) && (iVar7 != 0x63686136)) goto LAB_1008ac70;
        }
        else if (iVar7 != 0x63686138) {
          if (iVar7 == 0x636f6d30) goto LAB_1008ab3c;
          goto LAB_1008ac70;
        }
      }
    }
LAB_1008a740:
    iVar9 = (int)(short)((short)param_3[6] + -0x6131);
    iVar7 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
    if (iVar7 == 0) {
      *(undefined2 *)(_DAT_4bffe775 + iVar9 * 2 + 0xe0) = 0;
      FUN_10057e5c(iVar9,0,piVar10);
    }
    else {
      FUN_1005b62c(iVar9,piVar10);
    }
    return;
  }
  if (iVar7 == 0x67726561) {
    uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
    FUN_1005aac8(uVar1,piVar10);
    DAT_38600000 = 1;
    return;
  }
  if (iVar7 < 0x67726562) {
    if (iVar7 == 0x65646974) {
      FUN_1005a2b0(piVar10);
      FUN_1008a100(param_1);
      piVar3 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x706f7075);
      FUN_100db26c();
      sVar4 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x878));
      FUN_1005abf4((int)(short)(sVar4 + -1),piVar10);
      *(undefined1 *)(piVar3 + 0x76) = 0;
      return;
    }
    if (iVar7 < 0x65646975) {
      if (iVar7 == 0x636f6d32) goto LAB_1008ab3c;
    }
    else {
      if (iVar7 == 0x66657765) {
LAB_1008ab88:
        if ((param_3[6] == 0x6d6f7265) &&
           (piVar3 = (int *)FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x308),0x73696465
                                        ), piVar3 != (int *)0x0)) {
          sVar4 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c0));
          iVar7 = 0;
          do {
            *(ushort *)(_DAT_4bffe775 + iVar7 * 2 + 0xd0) =
                 (ushort)(iVar7 != (short)(sVar4 + -0x6430));
            iVar7 = (int)(short)((short)iVar7 + 1);
          } while (iVar7 < 8);
        }
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x328));
        uVar6 = param_3[6];
        FUN_1007ba3c(iVar9,0,(0x66657764 < uVar6 && (uint)(0x66657765 < uVar6) <= uVar6 + 0x999a889b
                             ) - (0x66657765 < uVar6));
        return;
      }
      if (iVar7 == 0x676f2020) {
        puVar2 = (undefined4 *)FUN_100f56e4(0x34);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_100c3d2c(puVar2);
          *puVar2 = &DAT_38800002;
          puVar2[0xc] = 0;
        }
        FUN_100c3df8(puVar2,3000,piVar10,0,0,0);
        puVar2[0xc] = 3000;
        FUN_10117884((int)piVar10 + (int)*(short *)(*piVar10 + 0x200),puVar2);
        return;
      }
    }
    goto LAB_1008ac70;
  }
  if (iVar7 != 0x69636f33) {
    if (iVar7 < 0x69636f34) {
      if ((iVar7 == 0x69636f31) || (iVar7 == 0x69636f32)) goto LAB_1008a7b0;
    }
    else if ((iVar7 == 0x69636f34) || (iVar7 == 0x69636f35)) goto LAB_1008a7b0;
LAB_1008ac70:
    FUN_100d5934(param_1,param_2,param_3);
    return;
  }
LAB_1008a7b0:
  FUN_1005b62c((int)(short)((short)param_3[6] + -0x6f31),piVar10);
  return;
}



// Function: FUN_1008ac94 at 1008ac94
// Size: 148 bytes

void FUN_1008ac94(int param_1)

{
  int *piVar1;
  undefined4 local_2c;
  
  FUN_10078a2c(param_1);
  piVar1 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                               (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x6d61696c);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x738) + (int)piVar1,
                 **(char **)(local_2c + -0x16d8) == '\0',0);
  }
  return;
}



// Function: FUN_1008ad28 at 1008ad28
// Size: 60 bytes

void FUN_1008ad28(int param_1,int param_2)

{
  if (param_2 == 3000) {
    FUN_1005a6ac(*(undefined4 *)(param_1 + 8));
  }
  else {
    FUN_100bff8c();
  }
  return;
}



// Function: FUN_1008ad64 at 1008ad64
// Size: 8 bytes

undefined4 FUN_1008ad64(void)

{
  return 0x4bfff6cd;
}



// Function: FUN_1008ad74 at 1008ad74
// Size: 128 bytes

undefined4 * FUN_1008ad74(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x44), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x60000000;
  }
  return param_1;
}



// Function: FUN_1008adf4 at 1008adf4
// Size: 40 bytes

void FUN_1008adf4(void)

{
  FUN_1008ad74(0);
  return;
}



// Function: FUN_1008ae1c at 1008ae1c
// Size: 1708 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ae1c(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int local_154;
  undefined1 auStack_130 [260];
  
  piVar11 = *(int **)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x40) =
       *(undefined2 *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0);
  uVar12 = 0;
  do {
    piVar2 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),
                                 uVar12 + 0x636c7531);
    if (piVar2 != (int *)0x0) {
      FUN_100b19f4(auStack_130,_DAT_4bffe775 + uVar12 * 0x14);
      FUN_10117884((int)*(short *)(*piVar2 + 0x7b0) + (int)piVar2,auStack_130,0);
      piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,
                                   uVar12 + 0x69636f31);
      piVar4 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,
                                   uVar12 + 0x68756d31);
      piVar5 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,
                                   uVar12 + 0x656e6831);
      piVar6 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,
                                   uVar12 + 0x6f627331);
      if (*(short *)(_DAT_4bffe775 + uVar12 * 2 + 0x138) == 0) {
        iVar7 = FUN_100001e0(uVar12 * 0x14 + _DAT_4bffe775,*(int *)(local_154 + -0x144c) + 0x158);
        if ((iVar7 != 0) &&
           (piVar2 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0x308) + (int)piVar2,
                                         uVar12 + 0x64656131), piVar2 != (int *)0x0)) {
          FUN_10117884((int)*(short *)(*piVar2 + 0x660) + (int)piVar2,1,0);
        }
        if (piVar3 != (int *)0x0) {
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x660),0,0);
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),0);
        }
        if (piVar4 != (int *)0x0) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x660),0,0);
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0xd8),0);
        }
        if (piVar5 != (int *)0x0) {
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x660),0,0);
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0xd8),0);
        }
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x660),0,0);
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0xd8),0);
        }
      }
      else {
        if (*(short *)(_DAT_4bffe775 + uVar12 * 2 + 0xd0) == 0) {
          sVar8 = 4;
        }
        else {
          sVar8 = *(short *)(_DAT_4bffe775 + uVar12 * 2 + 0xc0);
        }
        iVar7 = _DAT_4bffe775 + uVar12 * 2;
        if ((*(short *)(iVar7 + 0xd0) == 1) && (*(short *)(iVar7 + 0xe0) != 0)) {
          sVar8 = *(short *)(iVar7 + 0xc0) + 7;
        }
        if (sVar8 == 4) {
          if ((uVar12 == 0) ||
             (uVar9 = uVar12 - 1,
             ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0) !=
             ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            sVar8 = 5;
          }
          else {
            sVar8 = 4;
          }
        }
        if (*(short *)(_DAT_4bffe775 + uVar12 * 2 + 0x138) == 0) {
          sVar8 = 6;
        }
        if (piVar3 != (int *)0x0) {
          FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7a8),(int)(short)(sVar8 + 0xbcc),0)
          ;
        }
        if (piVar4 != (int *)0x0) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x850),
                       *(short *)(_DAT_4bffe775 + uVar12 * 2 + 0xd0) == 0,0);
        }
        if (piVar5 != (int *)0x0) {
          FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x850),
                       *(ushort *)(_DAT_4bffe775 + uVar12 * 2 + 0xf0) & 0xff,0);
        }
        if (piVar6 != (int *)0x0) {
          FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x850),
                       *(ushort *)(_DAT_4bffe775 + uVar12 * 2 + 0x148) & 0xff,0);
        }
      }
    }
    uVar12 = (uint)(short)((short)uVar12 + 1);
  } while ((int)uVar12 < 8);
  piVar2 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x61646472);
  if (piVar2 != (int *)0x0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),*(char *)(param_2 + 0x16e) == '\0',0
                );
  }
  if ((*(char *)(param_2 + 0x16e) != '\0') &&
     (piVar2 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x646f6e65),
     piVar2 != (int *)0x0)) {
    iVar10 = *piVar2;
    iVar7 = FUN_1007f1d4(param_2);
    FUN_10117884((int)piVar2 + (int)*(short *)(iVar10 + 0x738),iVar7 == 0,1);
  }
  iVar7 = FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x706d6163);
  if (iVar7 != 0) {
    piVar2 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x68696464);
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x850),
                   **(undefined1 **)(local_154 + -0x16ac),0);
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x738),0,0);
    }
    piVar11 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x73706565);
    if (piVar11 != (int *)0x0) {
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x850),
                   **(undefined1 **)(local_154 + -0x16a8),0);
      FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x738),0,0);
    }
  }
  return;
}



// Function: FUN_1008b4c8 at 1008b4c8
// Size: 828 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b4c8(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  piVar7 = *(int **)(param_1 + 8);
  iVar8 = piVar7[10];
  piVar2 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x646f6e65);
  iVar4 = param_3[6];
  if (iVar4 == 0x61646472) {
    FUN_1007f234(iVar8);
    if (piVar2 != (int *)0x0) {
      iVar6 = *piVar2;
      iVar4 = FUN_1007f1d4(iVar8);
      FUN_10117884((int)piVar2 + (int)*(short *)(iVar6 + 0x738),iVar4 == 0,1);
    }
  }
  else if (((((iVar4 == 0x68756d31) || (iVar4 == 0x68756d32)) || (iVar4 == 0x68756d33)) ||
           ((iVar4 == 0x68756d34 || (iVar4 == 0x68756d35)))) ||
          ((iVar4 == 0x68756d36 || ((iVar4 == 0x68756d37 || (iVar4 == 0x68756d38)))))) {
    iVar4 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
    *(ushort *)(param_3[6] * 2 + _DAT_4bffe775 + 0x2f15266e) = (ushort)(iVar4 == 0);
    uVar9 = (uint)(short)((short)param_3[6] + -0x6d31);
    piVar7 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),uVar9 + 0x69636f31);
    if (*(short *)(_DAT_4bffe775 + uVar9 * 2 + 0xd0) == 0) {
      sVar3 = 4;
    }
    else {
      sVar3 = *(short *)(_DAT_4bffe775 + uVar9 * 2 + 0xc0);
    }
    iVar4 = _DAT_4bffe775 + uVar9 * 2;
    if ((*(short *)(iVar4 + 0xd0) == 1) && (*(short *)(iVar4 + 0xe0) != 0)) {
      sVar3 = *(short *)(iVar4 + 0xc0) + 7;
    }
    if (sVar3 == 4) {
      if ((uVar9 == 0) ||
         (uVar5 = uVar9 - 1,
         ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0) !=
         ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        sVar3 = 5;
      }
      else {
        sVar3 = 4;
      }
    }
    if (*(short *)(_DAT_4bffe775 + uVar9 * 2 + 0x138) == 0) {
      sVar3 = 6;
    }
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x7a8),(int)(short)(sVar3 + 0xbcc),1);
    }
    if ((piVar2 != (int *)0x0) && (*(char *)(iVar8 + 0x16e) != '\0')) {
      iVar6 = *piVar2;
      iVar4 = FUN_1007f1d4(iVar8);
      FUN_10117884((int)piVar2 + (int)*(short *)(iVar6 + 0x738),iVar4 == 0,1);
    }
  }
  else {
    FUN_100d5934(param_1,param_2,param_3,param_4);
  }
  return;
}



// Function: FUN_1008b804 at 1008b804
// Size: 1104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008b804(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar8;
  uint uVar5;
  undefined1 uVar9;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  int local_1b4;
  undefined1 auStack_190 [80];
  undefined1 auStack_140 [260];
  
  piVar11 = *(int **)(param_1 + 8);
  iVar12 = 0;
  do {
    piVar1 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),
                                 iVar12 + 0x636c7531);
    if (piVar1 != (int *)0x0) {
      FUN_100b19f4(auStack_140,_DAT_4bffe775 + iVar12 * 0x14);
      FUN_10117884((int)*(short *)(*piVar1 + 0x7b0) + (int)piVar1,auStack_140,0);
      piVar2 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                   iVar12 + 0x68756d31);
      piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                   iVar12 + 0x656e6831);
      piVar1 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x308) + (int)piVar1,
                                   iVar12 + 0x6f627331);
      if ((*(short *)(_DAT_4bffe775 + iVar12 * 2 + 0x138) != 0) ||
         (iVar4 = FUN_100001e0(_DAT_4bffe775 + iVar12 * 0x14,*(int *)(local_1b4 + -0x144c) + 0x164),
         iVar4 == 0)) {
        if (piVar2 != (int *)0x0) {
          iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x848));
          *(ushort *)(_DAT_4bffe775 + iVar12 * 2 + 0xd0) = (ushort)(iVar4 == 0);
        }
        if (piVar3 != (int *)0x0) {
          uVar8 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x848));
          *(undefined2 *)(_DAT_4bffe775 + iVar12 * 2 + 0xf0) = uVar8;
        }
        if (piVar1 != (int *)0x0) {
          uVar8 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x848));
          *(undefined2 *)(_DAT_4bffe775 + iVar12 * 2 + 0x148) = uVar8;
        }
      }
    }
    iVar12 = (int)(short)((short)iVar12 + 1);
  } while (iVar12 < 8);
  iVar12 = FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x706d6163);
  if (iVar12 != 0) {
    piVar1 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x68696464);
    if ((piVar1 != (int *)0x0) &&
       (uVar5 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x848)), DAT_80bf0024 != uVar5)
       ) {
      iVar12 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x848));
      DAT_80bf0024 = (byte)iVar12;
      if (iVar12 == 0) {
        FUN_100462c8(0x4f);
        FUN_1000a094(&DAT_90010008);
        FUN_10001290(_DAT_9421ffd8);
        FUN_10002c10();
      }
      else {
        FUN_100462c8(0xf);
        FUN_1000a094(&DAT_9421ffc8);
        FUN_10001290(_DAT_90010018);
        FUN_10002c10();
      }
      FUN_100099b4();
      FUN_10007f78();
    }
    piVar11 = (int *)FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x308),0x73706565);
    if (piVar11 != (int *)0x0) {
      DAT_8185002c = FUN_10117884((int)piVar11 + (int)*(short *)(*piVar11 + 0x848));
    }
    uVar9 = FUN_100f1574(1);
    puVar6 = (undefined4 *)FUN_10001fc8(2);
    **(undefined1 **)(local_1b4 + -0x3c) = uVar9;
    if (puVar6 != (undefined4 *)0x0) {
      pbVar10 = (byte *)*puVar6;
      *pbVar10 = DAT_80bf0024;
      pbVar10[1] = DAT_8185002c;
      FUN_100981f8(auStack_190,0x80);
      FUN_100985fc(auStack_190,puVar6,0x504d6163,1000,*(undefined4 *)(local_1b4 + -0xe4c));
      FUN_10000960(puVar6);
      FUN_100982e8(auStack_190,2);
    }
  }
  iVar12 = _DAT_57c407bd;
  if ((*(short *)(param_1 + 0x40) !=
       *(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 2 + 0xd0)) &&
     (*(char *)(_DAT_57c407bd + 0x9a) == '\0')) {
    *(undefined1 *)(_DAT_57c407bd + 0x9b) = 1;
    uVar7 = FUN_10001a88();
    *(undefined4 *)(iVar12 + 0x9c) = uVar7;
  }
  return;
}



// Function: FUN_1008bc5c at 1008bc5c
// Size: 84 bytes

undefined4 * FUN_1008bc5c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = &DAT_809f0004;
  }
  return puVar1;
}



// Function: FUN_1008bcb0 at 1008bcb0
// Size: 88 bytes

void FUN_1008bcb0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100b1c84(param_3 + 4);
  uVar2 = FUN_100b1c84(param_2 + 4);
  .glue::FUN_10115b60(uVar2,uVar1,0,0);
  return;
}



// Function: FUN_1008bd08 at 1008bd08
// Size: 176 bytes

void FUN_1008bd08(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_138 [4];
  undefined1 local_134;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      local_134 = 0;
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),auStack_138,0x11a);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),auStack_138);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  }
  return;
}



// Function: FUN_1008bdb8 at 1008bdb8
// Size: 272 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bdb8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),iVar1);
  uVar2 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe8),1);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar4);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),uVar3,0x11c);
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 <= iVar1);
  }
  FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe8),uVar2);
  return;
}



// Function: FUN_1008bec8 at 1008bec8
// Size: 8 bytes

undefined4 FUN_1008bec8(void)

{
  return 0x63a30000;
}



// Function: FUN_1008bed8 at 1008bed8
// Size: 132 bytes

undefined4 * FUN_1008bed8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x5c), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x48000ef1;
    param_1[0x16] = 0;
  }
  return param_1;
}



// Function: FUN_1008bf5c at 1008bf5c
// Size: 40 bytes

void FUN_1008bf5c(void)

{
  FUN_1008bed8(0);
  return;
}



// Function: FUN_1008bf84 at 1008bf84
// Size: 568 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bf84(int param_1)

{
  bool bVar1;
  int *piVar2;
  short sVar7;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar8;
  int iVar9;
  int local_24c;
  undefined1 local_228 [256];
  undefined1 auStack_128 [256];
  
  if (*(int *)(param_1 + 0x24) != 0x6f6b2020) {
    return;
  }
  piVar2 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                               (int)*(short *)(**(int **)(param_1 + 8) + 0x308),0x6e616d65);
  if (piVar2 != (int *)0x0) {
    sVar7 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
    iVar8 = 1;
    do {
      FUN_100b19f4(auStack_128,*(int *)(local_24c + -0x144c) + 0x170);
      if (1 < iVar8) {
        FUN_100b1fb4(auStack_128,0x20);
        local_228[0] = 0;
        FUN_10000ac8(iVar8,local_228);
        FUN_100b1f6c(auStack_128,local_228);
      }
      bVar1 = true;
      iVar9 = 1;
      if (0 < sVar7) {
        do {
          iVar3 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar9);
          uVar4 = FUN_100b1c84(auStack_128);
          uVar5 = FUN_100b1c84(iVar3 + 4);
          iVar3 = FUN_10001998(uVar5,uVar4,0,0);
          if (iVar3 != 0) {
            bVar1 = false;
            break;
          }
          iVar9 = (int)(short)((short)iVar9 + 1);
        } while (iVar9 <= sVar7);
      }
      if (bVar1) goto code_r0x1008c0fc;
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while( true );
  }
LAB_1008c190:
  FUN_10078c94(param_1,0x6e657720,1);
  return;
code_r0x1008c0fc:
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x7c8),auStack_128,1);
  piVar6 = (int *)FUN_10117884(**(int **)(local_24c + -0xedc) +
                               (int)*(short *)(*(int *)**(int **)(local_24c + -0xedc) + 0x340));
  if ((piVar2 != piVar6) &&
     (iVar8 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x180)), iVar8 != 0)) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 400),1);
  }
  goto LAB_1008c190;
}



// Function: FUN_1008c1bc at 1008c1bc
// Size: 1240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1bc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar6;
  undefined4 uVar4;
  int *piVar5;
  int *piVar7;
  int iVar8;
  int local_3ac;
  undefined1 auStack_388 [312];
  int local_250;
  undefined1 local_24c [256];
  undefined2 local_14c [14];
  byte local_130 [260];
  
  piVar7 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar7);
  piVar1 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x6e616d65);
  FUN_100db26c(piVar1);
  local_130[0] = 0;
  FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7a0),local_130);
  uVar2 = FUN_100b1c84(local_130);
  iVar3 = FUN_10001998(*(int *)(local_3ac + -0x144c) + 0x178,uVar2,0,0);
  iVar8 = -1;
  if (iVar3 == 0) {
    uVar2 = FUN_100b1c84(local_130);
    iVar3 = FUN_10001998(*(int *)(local_3ac + -0x144c) + 0x184,uVar2,0,0);
    if (iVar3 == 0) {
      uVar2 = FUN_100b1c84(local_130);
      iVar3 = FUN_10001998(*(int *)(local_3ac + -0x144c) + 0x194,uVar2,0,0);
      if (iVar3 != 0) {
        iVar8 = 2;
      }
    }
    else {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = 0;
  }
  if (iVar8 == -1) {
    sVar6 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
    iVar3 = 1;
    if (0 < sVar6) {
      do {
        iVar8 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar3);
        uVar2 = FUN_100b1c84(local_130);
        uVar4 = FUN_100b1c84(iVar8 + 4);
        iVar8 = FUN_10001998(uVar4,uVar2,0,0);
        if (iVar8 != 0) {
          _DAT_60000000 = (int *)((uint)_DAT_60000000 & 0xffffff);
          uVar2 = FUN_100b1b08(local_130);
          FUN_10050ffc(*(int *)(local_3ac + -0x144c) + 0x1d4,*(int *)(local_3ac + -0x144c) + 0x1e0,
                       *(int *)(local_3ac + -0x144c) + 0x1f8,uVar2,0,
                       *(undefined4 *)(local_3ac + -0x13f4),0);
          if (DAT_60000000 == '\0') {
            return;
          }
          FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 200),iVar3,1);
          piVar5 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x4c697374);
          if (piVar5 != (int *)0x0) {
            FUN_10117884((int)*(short *)(*piVar5 + 0x8b8) + (int)piVar5,1);
          }
          break;
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 <= sVar6);
    }
    iVar3 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7f8));
    if (iVar3 != 0) {
      local_24c[0] = 0;
      iVar3 = 0;
      do {
        local_14c[iVar3] = *(undefined2 *)(param_1 + iVar3 * 2 + 0x40);
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < 0xb);
      FUN_100012d8(local_130,local_24c,local_130[0] + 1);
      local_250 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
      local_250 = local_250 + 1;
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x108),&local_250);
      sVar6 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
      iVar3 = 1;
      if (0 < sVar6) {
        do {
          piVar1 = (int *)FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),
                                       iVar3);
          if (*piVar1 == local_250) break;
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 <= sVar6);
      }
      piVar1 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x4c697374);
      if (piVar1 != (int *)0x0) {
        *(undefined2 *)(piVar1 + 0x2e) = 0;
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x180));
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8e0),1);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8f0),(int)(short)((short)iVar3 + 3),0
                     ,1,1);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4d0));
      }
      FUN_10078c94(param_1,0x6f6b2020,1);
    }
  }
  else {
    uVar2 = FUN_100b1b08(local_130);
    iVar3 = *(int *)(local_3ac + -0x144c);
    FUN_10001dd0(auStack_388,iVar3 + 0x1a0,uVar2);
    FUN_1003ced4(auStack_388,iVar3 + 0x1bc);
  }
  return;
}



// Function: FUN_1008c6bc at 1008c6bc
// Size: 572 bytes

void FUN_1008c6bc(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int local_284;
  undefined1 auStack_260 [56];
  undefined1 local_228;
  undefined1 local_128 [256];
  short local_28;
  
  piVar3 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar3);
  piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x4c697374);
  FUN_100db26c();
  local_128[0] = 0;
  iVar4 = *piVar3;
  uVar1 = FUN_10117884((int)piVar3 + (int)*(short *)(iVar4 + 0x908),0,iVar4,
                       *(undefined4 *)(iVar4 + 0x90c));
  FUN_10117884((int)piVar3 + (int)*(short *)(iVar4 + 0x890),uVar1,local_128);
  uVar1 = FUN_100b1b08(local_128);
  iVar4 = *(int *)(local_284 + -0x144c);
  FUN_10001dd0(auStack_260,iVar4 + 600,uVar1);
  DAT_60000000 = '\0';
  FUN_10050ffc(iVar4 + 0x25c,iVar4 + 0x26c,iVar4 + 0x284,auStack_260,0,
               *(undefined4 *)(local_284 + -0x13f4),0);
  if (DAT_60000000 != '\0') {
    piVar3 = *(int **)(param_1 + 8);
    FUN_100db26c();
    piVar3 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x308),0x4c697374);
    FUN_100db26c(piVar3);
    local_228 = 0;
    sVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x908));
    FUN_10117884(**(int **)(local_284 + -0x1418) +
                 (int)*(short *)(*(int *)**(int **)(local_284 + -0x1418) + 200),
                 (int)(short)(sVar2 + -3),1);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x8b8),1);
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x4d0));
    iVar4 = (int)*(short *)(piVar3 + 0x20);
    if ((int)sVar2 < (int)*(short *)(piVar3 + 0x20)) {
      iVar4 = (int)sVar2;
    }
    local_28 = sVar2;
    FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x8f0),iVar4,0,1,1);
  }
  return;
}



// Function: FUN_1008c8f8 at 1008c8f8
// Size: 988 bytes

void FUN_1008c8f8(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = param_3[6];
  if (iVar3 == 0x6e657720) {
    FUN_1008c1bc(param_1);
    return;
  }
  if (iVar3 < 0x6e657721) {
    if (iVar3 == 0x696e746e) {
      uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
      *(undefined2 *)(param_1 + 0x4e) = uVar1;
      FUN_1008bf84(param_1);
      return;
    }
    if (iVar3 < 0x696e746f) {
      if (iVar3 == 0x6469706c) {
        uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
        *(undefined2 *)(param_1 + 0x42) = uVar1;
        FUN_1008bf84(param_1);
        return;
      }
      if (iVar3 < 0x6469706d) {
        if (iVar3 == 0x64656c65) {
          FUN_1008c6bc(param_1);
          return;
        }
      }
      else if (iVar3 == 0x68696464) {
        uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
        *(undefined2 *)(param_1 + 0x46) = uVar1;
        FUN_1008bf84(param_1);
        return;
      }
    }
    else {
      if (iVar3 == 0x6e657531) {
LAB_1008ca64:
        *(short *)(param_1 + 0x40) = (short)param_3[6] + -0x7531;
        FUN_1008bf84(param_1);
        return;
      }
      if (iVar3 < 0x6e657532) {
        if (iVar3 == 0x6d696c69) {
          uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(undefined2 *)(param_1 + 0x52) = uVar1;
          FUN_1008bf84(param_1);
          return;
        }
      }
      else if ((iVar3 == 0x6e657532) || (iVar3 == 0x6e657533)) goto LAB_1008ca64;
    }
  }
  else {
    if (iVar3 == 0x72617a31) {
LAB_1008ca88:
      sVar2 = (short)param_3[6] + -0x7a31;
      *(short *)(param_1 + 0x4c) = sVar2;
      if (sVar2 == 2) {
        *(undefined2 *)(param_1 + 0x4c) = 0xf;
      }
      FUN_1008bf84(param_1);
      return;
    }
    if (iVar3 < 0x72617a32) {
      if (iVar3 == 0x71756573) {
        uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
        *(undefined2 *)(param_1 + 0x44) = uVar1;
        FUN_1008bf84(param_1);
        return;
      }
      if (iVar3 < 0x71756574) {
        if (((iVar3 == 0x6f6b2020) && (*(int *)(param_1 + 0x24) != 0x6f6b2020)) &&
           (FUN_1008c1bc(param_1), *(int *)(param_1 + 0x24) != 0x6f6b2020)) {
          return;
        }
      }
      else {
        if (iVar3 == 0x71756963) {
          uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(undefined2 *)(param_1 + 0x50) = uVar1;
          FUN_1008bf84(param_1);
          return;
        }
        if (iVar3 == 0x72616e64) {
          uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(undefined2 *)(param_1 + 0x54) = uVar1;
          FUN_1008bf84(param_1);
          return;
        }
      }
    }
    else {
      if (iVar3 == 0x72617a33) goto LAB_1008ca88;
      if (iVar3 < 0x72617a34) {
        if (iVar3 == 0x72617a32) goto LAB_1008ca88;
      }
      else {
        if (iVar3 == 0x76656e65) {
          uVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(undefined2 *)(param_1 + 0x48) = uVar1;
          FUN_1008bf84(param_1);
          return;
        }
        if (iVar3 == 0x7670726f) {
          iVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x848));
          *(ushort *)(param_1 + 0x4a) = (ushort)(iVar3 == 0);
          FUN_1008bf84(param_1);
          return;
        }
      }
    }
  }
  FUN_100d5934(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_1008ccd4 at 1008ccd4
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ccd4(int param_1)

{
  int *piVar1;
  short sVar3;
  undefined4 uVar2;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar5);
  piVar1 = (int *)FUN_10117884((int)piVar5 + (int)*(short *)(*piVar5 + 0x308),0x4c697374);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x8b0) + (int)piVar1,(int)*(short *)(piVar1 + 0x20));
    iVar4 = *piVar1;
    sVar3 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xa8));
    FUN_10117884((int)*(short *)(iVar4 + 0x8d8) + (int)piVar1,(int)(short)(sVar3 + 3));
    FUN_100f4f94(piVar1,piVar5);
    if (_DAT_48000f11 < 1) {
      sVar3 = 1 - (short)_DAT_48000f11;
    }
    else {
      sVar3 = (short)_DAT_48000f11 + 3;
    }
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8f0),(int)sVar3,0,1,1);
  }
  uVar2 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0x88));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}



// Function: FUN_1008ce28 at 1008ce28
// Size: 1420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ce28(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_120 [260];
  
  piVar6 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar6);
  piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x4c697374);
  FUN_100db26c(piVar1);
  uVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x908));
  if (uVar2 != 0) {
    if ((int)uVar2 < 4) {
      iVar4 = 0;
      do {
        *(undefined2 *)(iVar4 * 2 + param_1 + 0x40) =
             *(undefined2 *)(uVar2 * 0x16 + iVar4 * 2 + 0x4181fff6);
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < 0xb);
    }
    else {
      iVar4 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),uVar2 - 3);
      iVar5 = 0;
      do {
        *(undefined2 *)(iVar5 * 2 + param_1 + 0x40) = *(undefined2 *)(iVar4 + iVar5 * 2 + 0x104);
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 0xb);
    }
    piVar3 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x6e616d65);
    if (piVar3 != (int *)0x0) {
      local_120[0] = 0;
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x890),uVar2,local_120);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7c8),local_120,1);
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x7e0),0,0x7fff,1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x6e657574);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),
                   *(short *)(param_1 + 0x40) + 0x6e657531);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x72617a69);
    if (piVar1 != (int *)0x0) {
      if (*(short *)(param_1 + 0x4c) == 0xf) {
        iVar4 = 2;
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 0x4c);
      }
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c8),iVar4 + 0x72617a31);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x6469706c);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x42),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x71756573);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x44),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x68696464);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x46),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x76656e65);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x48),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x7670726f);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),*(short *)(param_1 + 0x4a) == 0,1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x696e746e);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x4e),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x71756963);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x50),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x6d696c69);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x52),1);
    }
    piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x72616e64);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 2000),(int)*(short *)(param_1 + 0x54),1);
    }
  }
  piVar1 = (int *)FUN_10117884((int)piVar6 + (int)*(short *)(*piVar6 + 0x308),0x64656c65);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x738),
                 (uint)(uVar2 < 4) - ((int)uVar2 >> 0x1f),1);
  }
  return;
}



// Function: FUN_1008d3b4 at 1008d3b4
// Size: 128 bytes

void FUN_1008d3b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_2 == 8) {
    FUN_1008ce28(param_1);
    FUN_10078c94(param_1,0x6f6b2020,1);
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_1008d44c at 1008d44c
// Size: 104 bytes

undefined4 * FUN_1008d44c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(200), param_1 != (undefined4 *)0x0)) {
    FUN_1010f054(param_1);
    *param_1 = 0x4bfff6ad;
  }
  return param_1;
}



// Function: FUN_1008d4b4 at 1008d4b4
// Size: 40 bytes

void FUN_1008d4b4(void)

{
  FUN_1008d44c(0);
  return;
}



// Function: FUN_1008d4dc at 1008d4dc
// Size: 140 bytes

void FUN_1008d4dc(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_100ff0a0();
  iVar2 = FUN_100f5278(param_2,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
    FUN_10078c94(uVar1,0x6e657720,1);
  }
  FUN_100daac8(param_1,param_2);
  return;
}



// Function: FUN_1008d570 at 1008d570
// Size: 112 bytes

undefined4 * FUN_1008d570(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xbc), param_1 != (undefined4 *)0x0)) {
    FUN_100e1f44(param_1);
    *param_1 = &DAT_60640000;
    *(undefined2 *)(param_1 + 0x2e) = 0;
  }
  return param_1;
}



// Function: FUN_1008d5e0 at 1008d5e0
// Size: 40 bytes

void FUN_1008d5e0(void)

{
  FUN_1008d570(0);
  return;
}



// Function: FUN_1008d608 at 1008d608
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d608(undefined4 param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 == 1) {
    FUN_100b1d90(param_3,0x4bfff9e5);
  }
  else if (iVar1 == 2) {
    FUN_100b1d90(param_3,0x4bfff9f1);
  }
  else if (iVar1 == 3) {
    FUN_100b1d90(param_3,0x4bfffa01);
  }
  else {
    iVar1 = FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xe0),iVar1 + -3);
    FUN_100012d8(iVar1 + 4,param_3,*(byte *)(iVar1 + 4) + 1);
  }
  return;
}



// Function: FUN_1008d6e0 at 1008d6e0
// Size: 92 bytes

void FUN_1008d6e0(int *param_1,undefined4 param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}



// Function: FUN_1008d73c at 1008d73c
// Size: 128 bytes

bool FUN_1008d73c(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = FUN_100d96b0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x908) + (int)param_1);
    *(undefined2 *)(param_1 + 0x2e) = uVar2;
    FUN_10117884((int)*(short *)(*param_1 + 0x840) + (int)param_1,1);
  }
  return iVar1 != 0;
}



// Function: FUN_1008d7bc at 1008d7bc
// Size: 396 bytes

void FUN_1008d7bc(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_2 + 9) & 0xff;
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if (((((iVar2 == 0) &&
        (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar2 == 0)) &&
       (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2), iVar2 == 0)) &&
      ((iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xe8) + (int)param_2), iVar2 == 0 &&
       (0x1b < uVar1)))) && (uVar1 < 0x20)) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x908));
    if ((uVar1 == 0x1c) || (uVar1 == 0x1e)) {
      iVar2 = (int)(short)((short)iVar2 + -1);
    }
    else if ((uVar1 == 0x1d) || (uVar1 == 0x1f)) {
      iVar2 = (int)(short)((short)iVar2 + 1);
    }
    if ((iVar2 == 0) || (*(short *)(param_1 + 0x20) < iVar2)) {
      FUN_100ecc68();
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),iVar2,0,1,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
    }
  }
  else {
    FUN_100da080(param_1,param_2);
  }
  return;
}



// Function: FUN_1008d948 at 1008d948
// Size: 132 bytes

undefined4 FUN_1008d948(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d9608(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(param_1 + 0x2e) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x8f0) + (int)param_1,(int)*(short *)(param_1 + 0x2e),0,
                 1,1);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_1008d9cc at 1008d9cc
// Size: 8 bytes

undefined1 * FUN_1008d9cc(void)

{
  return &DAT_63630000;
}



// Function: FUN_1008d9dc at 1008d9dc
// Size: 128 bytes

undefined4 * FUN_1008d9dc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x40), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0x48000ed1;
  }
  return param_1;
}



// Function: FUN_1008da5c at 1008da5c
// Size: 40 bytes

void FUN_1008da5c(void)

{
  FUN_1008d9dc(0);
  return;
}



// Function: FUN_1008da84 at 1008da84
// Size: 160 bytes

void FUN_1008da84(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 local_3c;
  
  if (param_2 == 8) {
    sVar1 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x908));
    *(short *)(**(int **)(local_3c + -0x544) + **(short **)(local_3c + -0x13d8) * 2 + 0xe0) =
         sVar1 + -1;
    FUN_1005af24(*(undefined4 *)(param_1 + 8));
  }
  FUN_100c00b8(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_1008db24 at 1008db24
// Size: 136 bytes

void FUN_1008db24(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  FUN_100db26c(piVar2);
  iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x308),0x4c697374);
  if (iVar1 != 0) {
    FUN_100f4f94(iVar1,piVar2);
  }
  FUN_10078a2c(param_1,param_2);
  return;
}



// Function: FUN_1008dbac at 1008dbac
// Size: 8 bytes

undefined1 * FUN_1008dbac(void)

{
  return &DAT_807d0004;
}



// Function: FUN_1008dbbc at 1008dbbc
// Size: 104 bytes

undefined4 * FUN_1008dbbc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb8), param_1 != (undefined4 *)0x0)) {
    FUN_100e1f44(param_1);
    *param_1 = 0x38802000;
  }
  return param_1;
}



// Function: FUN_1008dc24 at 1008dc24
// Size: 40 bytes

void FUN_1008dc24(void)

{
  FUN_1008dbbc(0);
  return;
}



// Function: FUN_1008dc4c at 1008dc4c
// Size: 192 bytes

void FUN_1008dc4c(int *param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_100b1d90(param_3,*(short *)(param_2 * 2 + 0x4082ffb6) * 0x20 + 0x2c1d0000);
  local_20 = param_1[0x28];
  iStack_1c = param_1[0x29];
  iStack_18 = param_1[0x2a];
  FUN_100b1c84(param_3);
  iVar1 = FUN_100006f0();
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8c8));
  if (iVar2 + -2 < iVar1) {
    local_20 = local_20 | 0x2000;
  }
  FUN_100f0788(&local_20);
  return;
}



// Function: FUN_1008dd0c at 1008dd0c
// Size: 92 bytes

void FUN_1008dd0c(int *param_1,undefined4 param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}



// Function: FUN_1008dd68 at 1008dd68
// Size: 8 bytes

undefined4 FUN_1008dd68(void)

{
  return 0x4bfff519;
}



// Function: FUN_1008dd78 at 1008dd78
// Size: 92 bytes

undefined4 * FUN_1008dd78(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xbc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100e1f44(puVar1);
    *puVar1 = 0x4bffe6bd;
    puVar1[0x2e] = 0;
  }
  return puVar1;
}



// Function: FUN_1008ddd4 at 1008ddd4
// Size: 92 bytes

void FUN_1008ddd4(int *param_1,undefined4 param_2)

{
  FUN_101085d8(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),8,param_2);
  return;
}



// Function: FUN_1008de30 at 1008de30
// Size: 68 bytes

void FUN_1008de30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  FUN_100e2f58(param_1);
  return;
}



// Function: FUN_1008de74 at 1008de74
// Size: 396 bytes

void FUN_1008de74(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_2 + 9) & 0xff;
  iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if (((((iVar2 == 0) &&
        (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar2 == 0)) &&
       (iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2), iVar2 == 0)) &&
      ((iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0xe8) + (int)param_2), iVar2 == 0 &&
       (0x1b < uVar1)))) && (uVar1 < 0x20)) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x908));
    if ((uVar1 == 0x1c) || (uVar1 == 0x1e)) {
      iVar2 = (int)(short)((short)iVar2 + -1);
    }
    else if ((uVar1 == 0x1d) || (uVar1 == 0x1f)) {
      iVar2 = (int)(short)((short)iVar2 + 1);
    }
    if ((iVar2 == 0) || (*(short *)(param_1 + 0x20) < iVar2)) {
      FUN_100ecc68();
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),iVar2,0,1,1);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
    }
  }
  else {
    FUN_100da080(param_1,param_2);
  }
  return;
}



// Function: FUN_1008e000 at 1008e000
// Size: 100 bytes

void FUN_1008e000(int param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 0xb8) +
                       (int)*(short *)(**(int **)(param_1 + 0xb8) + 0xe0),(int)param_2);
  FUN_100012d8(iVar1 + 6,param_3,*(byte *)(iVar1 + 6) + 1);
  return;
}



// Function: FUN_1008e064 at 1008e064
// Size: 232 bytes

void FUN_1008e064(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack0000001c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uStack0000001c = param_2;
  FUN_100e7184(param_1,param_2,param_3);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x10;
  local_1c = 0x10;
  uVar1 = FUN_100e1594(param_3,0);
  FUN_100e1630(&local_28,uVar1);
  local_30 = 0;
  local_2c = 0x11;
  FUN_100e1674(&local_28,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_28,auStack_38);
  uVar1 = FUN_100b0578(auStack_38);
  FUN_10000b40(uVar1,5,0,0x85);
  return;
}



// Function: FUN_1008e14c at 1008e14c
// Size: 92 bytes

void FUN_1008e14c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uStack00000024;
  
  uStack00000024 = param_4;
  if (*(short *)(param_3 + 0x28) == 1) {
    FUN_100e4b48();
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x21);
  }
  return;
}



// Function: FUN_1008e1b0 at 1008e1b0
// Size: 84 bytes

undefined4 * FUN_1008e1b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = 0x4bfff6ed;
  }
  return puVar1;
}



// Function: FUN_1008e204 at 1008e204
// Size: 52 bytes

void FUN_1008e204(undefined4 param_1,int param_2,int param_3)

{
  .glue::FUN_10115b60(param_2 + 6,param_3 + 6,0,0);
  return;
}



// Function: FUN_1008e240 at 1008e240
// Size: 144 bytes

undefined4 * FUN_1008e240(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x50), param_1 != (undefined4 *)0x0)) {
    FUN_100d568c(param_1);
    param_1[0xd] = 0x20202020;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = &DAT_63c40000;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  return param_1;
}



// Function: FUN_1008e2d0 at 1008e2d0
// Size: 40 bytes

void FUN_1008e2d0(void)

{
  FUN_1008e240(0);
  return;
}



// Function: FUN_1008e2f8 at 1008e2f8
// Size: 328 bytes

void FUN_1008e2f8(undefined4 param_1,int param_2)

{
  if (param_2 == 0x616c6c79) {
    FUN_1009e534(0x69);
  }
  else if (param_2 == 0x61726d79) {
    FUN_1009e534(0x72);
  }
  else if (param_2 == 0x63697469) {
    FUN_1009e534(0x6c);
  }
  else if (param_2 == 0x63697479) {
    FUN_1009e534(0x73);
  }
  else if (param_2 == 0x666f7265) {
    FUN_1009e534(0x6d);
  }
  else if (param_2 == 0x68696c6c) {
    FUN_1009e534(0x6b);
  }
  else if (param_2 == 0x73686965) {
    FUN_1009e534(0x73);
  }
  else if (param_2 == 0x74657272) {
    FUN_1009e534(0x68);
  }
  else if (param_2 == 0x77617465) {
    FUN_1009e534(0x6a);
  }
  else {
    FUN_10078c58();
  }
  return;
}



// Function: FUN_1008e440 at 1008e440
// Size: 400 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1008e440(undefined4 param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 local_510;
  undefined1 *local_50c;
  undefined2 *local_4d8;
  undefined2 local_4d0;
  undefined4 local_4ce;
  undefined1 local_488 [256];
  undefined1 local_388 [256];
  undefined1 local_288 [256];
  byte local_188 [256];
  undefined1 auStack_88 [12];
  undefined4 local_7c;
  undefined1 *local_76;
  undefined2 local_72;
  short local_6c;
  char local_6a;
  undefined4 local_58;
  
  local_4d8 = &local_4d0;
  local_50c = local_488;
  local_7c = 0;
  local_288[0] = 0;
  local_488[0] = 0;
  local_510 = 0x3c;
  local_76 = local_288;
  FUN_10001bd8(_DAT_28030000 + 0x32,&local_510);
  FUN_100db2f4();
  local_72 = local_4d0;
  local_388[0] = 0;
  FUN_100009d8(local_388,0x3ea,(param_2 & 0xff) + 1);
  iVar1 = FUN_100b1b08(local_388);
  FUN_100b19f4(local_188,iVar1 + 1);
  if (local_188[local_188[0]] == 0x3a) {
    local_188[0] = local_188[0] - 1;
  }
  local_6c = 1;
  local_58 = local_4ce;
  iVar1 = FUN_10002058(auStack_88);
  sVar4 = 1;
  do {
    if (iVar1 != 0) {
      return 1;
    }
    if (((uint)(int)local_6a >> 4 & 1) == 1) {
      uVar2 = FUN_100b1c84(local_288);
      uVar3 = FUN_100b1c84(local_188);
      iVar1 = FUN_10001998(uVar3,uVar2,0,0);
      if (iVar1 != 0) {
        return local_58;
      }
    }
    sVar4 = sVar4 + 1;
    local_58 = local_4ce;
    local_6c = sVar4;
    iVar1 = FUN_10002058(auStack_88);
  } while( true );
}



// Function: FUN_1008e5d0 at 1008e5d0
// Size: 724 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008e5d0(undefined4 param_1,uint param_2,undefined4 param_3,int *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_4b4 [4];
  undefined2 local_4b0 [36];
  undefined4 local_468;
  undefined1 *local_464;
  undefined2 *local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  uint local_3e0 [4];
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  uint uStack_38c;
  undefined1 local_388 [256];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  uint uStack_244;
  undefined1 auStack_240 [256];
  undefined2 local_140;
  undefined4 local_13e;
  byte local_13a [66];
  undefined2 local_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  byte *local_9e;
  undefined2 local_9a;
  short local_94;
  char local_92;
  uint local_90;
  ushort local_88;
  undefined4 local_80;
  undefined4 local_4c;
  
  param_2 = param_2 & 0xff;
  local_430 = local_4b0;
  local_464 = local_388;
  local_a4 = 0;
  local_9e = local_13a;
  local_388[0] = 0;
  local_468 = 0x3c;
  FUN_10001bd8(_DAT_28030000 + 0x32,&local_468);
  FUN_100db2f4();
  local_9a = local_4b0[0];
  if (4 < param_2) {
    local_140 = local_4b0[0];
    local_94 = 1;
    local_13e = param_3;
    local_80 = param_3;
    iVar2 = FUN_10002058(auStack_b0);
    sVar4 = 1;
    uVar1 = local_f8;
    local_f8 = local_9a;
    while (iVar2 == 0) {
      local_9a = local_f8;
      if (((uint)(int)local_92 >> 4 & 1) != 1) {
        uStack_f6 = (undefined2)((uint)local_4c >> 0x10);
        uStack_f4 = (undefined2)local_4c;
        FUN_100012d8(local_13a,&uStack_f2,local_13a[0] + 1);
        FUN_100012d8(local_13a,auStack_240,local_13a[0] + 1);
        FUN_100ef284(auStack_240,&uStack_f2);
        if ((local_88 & 0x8000) == 0) {
          uVar1 = local_f8;
          if (local_90 == param_2) {
            local_3d0 = CONCAT22(local_f8,uStack_f6);
            uStack_3cc = CONCAT22(uStack_f4,uStack_f2);
            uStack_3c8 = uStack_f0;
            uStack_3c4 = uStack_ec;
            uStack_3c0 = uStack_e8;
            uStack_3bc = uStack_e4;
            local_3b8 = local_e0;
            uStack_3b4 = uStack_dc;
            uStack_3b0 = uStack_d8;
            uStack_3ac = uStack_d4;
            uStack_3a8 = uStack_d0;
            uStack_3a4 = uStack_cc;
            uStack_38c = uStack_b4 & 0xffff0000;
            local_3a0 = local_c8;
            uStack_39c = uStack_c4;
            uStack_398 = uStack_c0;
            uStack_394 = uStack_bc;
            uStack_390 = uStack_b8;
            FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x108),&local_3d0);
            uVar1 = local_f8;
          }
        }
        else {
          uVar3 = FUN_100032d0(&local_f8,1);
          iVar2 = FUN_10000678();
          uVar1 = local_f8;
          if (iVar2 == 0) {
            iVar2 = FUN_10003558(0x616c6973,0);
            iVar5 = -0x2b;
            if (iVar2 != 0) {
              iVar5 = FUN_10002070(0,iVar2,&local_288,auStack_4b4);
            }
            if (((iVar5 == 0) && (iVar2 = FUN_10001530(&local_288,local_3e0), iVar2 == 0)) &&
               (local_3e0[0] == param_2)) {
              local_428 = local_288;
              uStack_424 = uStack_284;
              uStack_420 = uStack_280;
              uStack_41c = uStack_27c;
              uStack_418 = uStack_278;
              uStack_414 = uStack_274;
              local_410 = local_270;
              uStack_40c = uStack_26c;
              uStack_408 = uStack_268;
              uStack_404 = uStack_264;
              uStack_400 = uStack_260;
              uStack_3fc = uStack_25c;
              uStack_3e4 = uStack_244 & 0xffff0000;
              local_3f8 = local_258;
              uStack_3f4 = uStack_254;
              uStack_3f0 = uStack_250;
              uStack_3ec = uStack_24c;
              uStack_3e8 = uStack_248;
              FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x108),&local_428);
            }
            FUN_10003300(uVar3);
            uVar1 = local_f8;
          }
        }
      }
      local_f8 = uVar1;
      sVar4 = sVar4 + 1;
      local_94 = sVar4;
      local_80 = param_3;
      iVar2 = FUN_10002058(auStack_b0);
      uVar1 = local_f8;
      local_f8 = local_9a;
    }
    return;
  }
  return;
}



// Function: FUN_1008e8f4 at 1008e8f4
// Size: 580 bytes

void FUN_1008e8f4(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  short sVar5;
  int iVar3;
  undefined4 uVar4;
  int iVar6;
  short sVar7;
  int iVar8;
  int local_44;
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x860));
    iVar6 = param_2[6];
    for (iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x8a0));
        (short)(ushort)(iVar6 != 0x74657272) < iVar2; iVar2 = (int)(short)((short)iVar2 + -1)) {
      FUN_10003138(uVar1,iVar2);
    }
    sVar5 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xa8));
    iVar2 = (int)sVar5;
    if (iVar2 != 0) {
      if (param_2[6] != 0x74657272) {
        FUN_10003378(uVar1,*(int *)(local_44 + -0x144c) + 0x300);
      }
      iVar6 = 1;
      iVar8 = 1;
      if (0 < iVar2) {
        do {
          iVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xe0),iVar8);
          FUN_10003378(uVar1,iVar3 + 6);
          if (param_4 != 0) {
            uVar4 = FUN_100b1c84(param_4);
            iVar3 = FUN_10001998(uVar4,iVar3 + 6,0,0);
            if (iVar3 != 0) {
              if (param_2[6] == 0x74657272) {
                sVar7 = 0;
              }
              else {
                sVar7 = 2;
              }
              iVar6 = (int)(short)((short)iVar8 + sVar7);
            }
          }
          iVar8 = (int)(short)((short)iVar8 + 1);
        } while (iVar8 <= iVar2);
      }
      if (param_2[6] != 0x74657272) {
        iVar2 = (int)(short)(sVar5 + 2);
      }
      FUN_10003288(param_2[0x2a],1);
      FUN_10001cb0(param_2[0x2a],iVar2);
      FUN_10001d10(param_2[0x2a],iVar6);
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x828),1,iVar2,iVar6,0);
      *(undefined1 *)(param_2 + 0x76) = 0;
    }
  }
  return;
}



// Function: FUN_1008eb38 at 1008eb38
// Size: 1644 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb38(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  short sVar6;
  int *piVar7;
  undefined1 auStack_188 [80];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar7 = *(int **)(param_1 + 8);
  FUN_100981f8(auStack_188,0x80);
  piVar1 = (int *)FUN_10098320(auStack_188,0x52616e64,1000);
  if (piVar1 != (int *)0x0) {
    FUN_10002598(piVar1);
  }
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar2 = FUN_10000090(auStack_138);
  if (iVar2 == 0) {
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x77617465);
      if (iVar2 != 0) {
        if (*(short *)*piVar1 == 7) {
          sVar6 = -1;
        }
        else {
          if (*(short *)(iVar2 + 0xd2) < 100) {
            sVar6 = 2;
          }
          else {
            sVar6 = 5;
          }
          sVar6 = *(short *)(iVar2 + 0xd0) + *(short *)*piVar1 * sVar6;
        }
        if (*(short *)(iVar2 + 0xd4) != sVar6) {
          *(short *)(iVar2 + 0xd4) = sVar6;
        }
      }
      iVar2 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x68696c6c);
      if (iVar2 != 0) {
        if (*(short *)(*piVar1 + 2) == 7) {
          sVar6 = -1;
        }
        else {
          if (*(short *)(iVar2 + 0xd2) < 100) {
            sVar6 = 2;
          }
          else {
            sVar6 = 5;
          }
          sVar6 = *(short *)(iVar2 + 0xd0) + *(short *)(*piVar1 + 2) * sVar6;
        }
        if (*(short *)(iVar2 + 0xd4) != sVar6) {
          *(short *)(iVar2 + 0xd4) = sVar6;
        }
      }
      iVar2 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x63697469);
      if (iVar2 != 0) {
        if (*(short *)(*piVar1 + 4) == 7) {
          sVar6 = -1;
        }
        else {
          if (*(short *)(iVar2 + 0xd2) < 100) {
            sVar6 = 2;
          }
          else {
            sVar6 = 5;
          }
          sVar6 = *(short *)(iVar2 + 0xd0) + *(short *)(*piVar1 + 4) * sVar6;
        }
        if (*(short *)(iVar2 + 0xd4) != sVar6) {
          *(short *)(iVar2 + 0xd4) = sVar6;
        }
      }
      iVar2 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x666f7265);
      if (iVar2 != 0) {
        if (*(short *)(*piVar1 + 6) == 7) {
          sVar6 = -1;
        }
        else {
          if (*(short *)(iVar2 + 0xd2) < 100) {
            sVar6 = 2;
          }
          else {
            sVar6 = 5;
          }
          sVar6 = *(short *)(iVar2 + 0xd0) + *(short *)(*piVar1 + 6) * sVar6;
        }
        if (*(short *)(iVar2 + 0xd4) != sVar6) {
          *(short *)(iVar2 + 0xd4) = sVar6;
        }
      }
      piVar3 = (int *)FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x616c6c79);
      if (piVar3 != (int *)0x0) {
        FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x850),*(undefined1 *)(*piVar1 + 0x408)
                     ,0);
      }
    }
    puVar4 = (undefined4 *)FUN_100f56e4(0x20);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_100d8824(puVar4);
      *puVar4 = 0x4bfff6ed;
    }
    *(undefined4 **)(param_1 + 0x40) = puVar4;
    FUN_100d88b4(puVar4,0,0x46);
    iVar2 = FUN_1008e440(param_1,1);
    if (iVar2 != 1) {
      FUN_1008e5d0(param_1,1,iVar2,*(undefined4 *)(param_1 + 0x40));
      uVar5 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x74657272);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1 + 8;
      }
      FUN_1008e8f4(param_1,uVar5,*(undefined4 *)(param_1 + 0x40),iVar2);
    }
    puVar4 = (undefined4 *)FUN_100f56e4(0x20);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_100d8824(puVar4);
      *puVar4 = 0x4bfff6ed;
    }
    *(undefined4 **)(param_1 + 0x44) = puVar4;
    FUN_100d88b4(puVar4,0,0x46);
    iVar2 = FUN_1008e440(param_1,2);
    if (iVar2 != 1) {
      FUN_1008e5d0(param_1,2,iVar2,*(undefined4 *)(param_1 + 0x44));
      uVar5 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x61726d79);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1 + 0x108;
      }
      FUN_1008e8f4(param_1,uVar5,*(undefined4 *)(param_1 + 0x44),iVar2);
    }
    puVar4 = (undefined4 *)FUN_100f56e4(0x20);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_100d8824(puVar4);
      *puVar4 = 0x4bfff6ed;
    }
    *(undefined4 **)(param_1 + 0x48) = puVar4;
    FUN_100d88b4(puVar4,0,0x46);
    iVar2 = FUN_1008e440(param_1,3);
    if (iVar2 != 1) {
      FUN_1008e5d0(param_1,3,iVar2,*(undefined4 *)(param_1 + 0x48));
      uVar5 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x63697479);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1 + 0x208;
      }
      FUN_1008e8f4(param_1,uVar5,*(undefined4 *)(param_1 + 0x48),iVar2);
    }
    puVar4 = (undefined4 *)FUN_100f56e4(0x20);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_100d8824(puVar4);
      *puVar4 = 0x4bfff6ed;
    }
    *(undefined4 **)(param_1 + 0x4c) = puVar4;
    FUN_100d88b4(puVar4,0,0x46);
    iVar2 = FUN_1008e440(param_1,4);
    if (iVar2 != 1) {
      FUN_1008e5d0(param_1,4,iVar2,*(undefined4 *)(param_1 + 0x4c));
      uVar5 = FUN_10117884((int)piVar7 + (int)*(short *)(*piVar7 + 0x308),0x73686965);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1 + 0x308;
      }
      FUN_1008e8f4(param_1,uVar5,*(undefined4 *)(param_1 + 0x4c),iVar2);
    }
    FUN_100ef510(piVar1);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_100ef510(piVar1);
    FUN_100db158((int)local_38,local_34);
  }
  FUN_100982e8(auStack_188,2);
  return;
}



// Function: FUN_1008f204 at 1008f204
// Size: 432 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f204(void)

{
  FUN_100c1c8c(0x60000000,_DAT_4bfff4f9,0x44,0x60000000,&DAT_281f0000);
  FUN_100c1c8c(&DAT_60640000,_DAT_807d0004,0x40,&DAT_63c40000,&DAT_281f0000);
  FUN_100c1c8c(0x4bfff6cd,_DAT_4bfff4e9,0x44,0x60000000,&DAT_281f0000);
  FUN_100c1c8c(&DAT_60640000,_DAT_807b0004,0x20,&DAT_63c40000,&DAT_90010008);
  FUN_100c1c8c(0x63a30000,_DAT_4bfff4d9,0x5c,0x60000000,&DAT_281f0000);
  FUN_100c1c8c(&DAT_38800002,_DAT_8082fb44,200,0x3b400001,0x4beec029);
  FUN_100c1c8c(0x60000000,_DAT_93440000,0xbc,&DAT_63e30000,&DAT_7c0803a6);
  FUN_100c1c8c(&DAT_63630000,_DAT_48000008,0x40,&DAT_63e30000,&DAT_281f0000);
  FUN_100c1c8c(&DAT_807d0004,_DAT_80010058,0xb8,&DAT_30210050,&DAT_7c0803a6);
  FUN_100c1c8c(0x4bfff519,_DAT_7c0803a6,0xbc,0xbb41ffe8,&DAT_7c0803a6);
  FUN_100c1c8c(0x60000000,_DAT_4e800020,0x20,_FUN_10116538,&DAT_90010008);
  FUN_100c1c8c(0x807c0008,*puRam1011653c,0x50,&DAT_90010008,&DAT_281f0000);
  return;
}



// Function: FUN_1008f3b4 at 1008f3b4
// Size: 8 bytes

undefined1 * FUN_1008f3b4(void)

{
  return &DAT_9421ffc0;
}



// Function: FUN_1008f3c4 at 1008f3c4
// Size: 84 bytes

undefined4 * FUN_1008f3c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x84);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1010598c(puVar1);
    *puVar1 = 0x7cc43014;
  }
  return puVar1;
}



// Function: FUN_1008f418 at 1008f418
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f418(int param_1)

{
  if (*(short *)(param_1 + 0x80) == 0xf) {
    *(undefined2 *)(param_1 + 0x80) = 8;
  }
  FUN_100462c8(5);
  FUN_100462c8(0x26);
  if (*(ushort *)(param_1 + 0x82) < 5) {
    return;
  }
  return;
}



// Function: FUN_1008f648 at 1008f648
// Size: 8 bytes

undefined1 * FUN_1008f648(void)

{
  return &DAT_609e0000;
}



// Function: FUN_1008f658 at 1008f658
// Size: 168 bytes

undefined4 * FUN_1008f658(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xe0), param_1 != (undefined4 *)0x0)) {
    FUN_100c6b2c(param_1);
    *param_1 = &DAT_607f0000;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    param_1[0x2e] = 0;
    *(undefined2 *)(param_1 + 0x2f) = 0;
    param_1[0x33] = 0;
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)((int)param_1 + 0xd2) = 0;
    *(undefined2 *)(param_1 + 0x35) = 0;
    *(undefined2 *)((int)param_1 + 0xd6) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0;
    *(undefined1 *)((int)param_1 + 0xda) = 0;
    *(undefined1 *)((int)param_1 + 0xdb) = 0;
    *(undefined2 *)(param_1 + 0x37) = 0xffff;
  }
  return param_1;
}



// Function: FUN_1008f700 at 1008f700
// Size: 40 bytes

void FUN_1008f700(void)

{
  FUN_1008f658(0);
  return;
}



// Function: FUN_1008f728 at 1008f728
// Size: 284 bytes

void FUN_1008f728(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  
  FUN_100c6c9c(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xd0) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xd2) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xd4) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xd6) = uVar1;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xd8) = uVar1;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 0xda) = uVar2;
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 0xdb) = uVar2;
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  *(undefined2 *)(param_1 + 0xdc) = uVar1;
  return;
}



// Function: FUN_1008f844 at 1008f844
// Size: 444 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f844(int param_1)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int *piVar3;
  short sVar4;
  undefined **local_13c;
  undefined4 local_110;
  uint uStack_10c;
  
  uVar1 = _FUN_10116698;
  ppuVar2 = &.TVect::OCECToRString;
  FUN_10009b48(param_1 + 0xa8,(int)*(short *)(param_1 + 0xa8),(int)*(short *)(param_1 + 0xaa),
               (int)*(short *)(param_1 + 0xac),(int)*(short *)(param_1 + 0xae),_FUN_10116698,0);
  if (*(char *)(param_1 + 0x85) == '\0') {
    if (*(short *)(param_1 + 0xd4) == -1) {
      sVar4 = *(short *)(param_1 + 0xd8) * 0x10 + 0x4b;
    }
    else {
      sVar4 = (short)(((*(short *)(param_1 + 0xd8) * 0x10 + -0x10) *
                      ((int)*(short *)(param_1 + 0xd4) - (int)*(short *)(param_1 + 0xd0))) /
                     ((int)*(short *)(param_1 + 0xd2) - (int)*(short *)(param_1 + 0xd0))) + 0x28;
    }
    if (*(int *)(param_1 + 0xcc) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_10001290(*(int *)(param_1 + 0xcc));
      ppuVar2 = local_13c;
    }
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
      FUN_10044d38(param_1 + 0xbc,0xbc3);
    }
    FUN_10009b48(param_1 + 0xbc,(int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                 (int)*(short *)(param_1 + 0xc0),(int)*(short *)(param_1 + 0xc2),uVar1,(int)sVar4,
                 0xc);
  }
  if (*(char *)(param_1 + 0xdb) == '\0') {
    if (*(short *)(param_1 + 0xd4) == -1) {
      local_110 = *(undefined4 *)(ppuVar2[-0x4d4] + 8);
      uStack_10c = *(uint *)(ppuVar2[-0x4d4] + 0xc) & 0xffff0000;
    }
    else if (*(short *)(param_1 + 0xd2) < 100) {
      FUN_10001dd0(&local_110,ppuVar2[-0x4d4] + 0x18,(int)*(short *)(param_1 + 0xd4));
    }
    else {
      FUN_10001dd0(&local_110,ppuVar2[-0x4d4] + 0x10,(int)*(short *)(param_1 + 0xd4));
    }
    FUN_10032860(3,0xe,&local_110,0xfffffffe);
  }
  return;
}



// Function: FUN_1008fa00 at 1008fa00
// Size: 348 bytes

void FUN_1008fa00(int param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  
  FUN_100b2268(param_4 * 6 + 0x408600a0);
  FUN_100021c0();
  FUN_100031b0(2,2);
  FUN_10000270((int)(short)(param_2 + 0x27),(int)(short)(param_3 + 0x15));
  if (*(char *)(param_1 + 0xda) == '\0') {
    sVar1 = 0;
  }
  else {
    sVar1 = 0x33;
  }
  FUN_10000288((int)(short)(sVar1 + *(short *)(param_1 + 0xd8) * 0x10 + -4),0);
  FUN_100031b0(1,1);
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0xd8)) {
    do {
      FUN_10000270((int)(short)(param_2 + (short)(iVar2 << 4) + 0x2d),(int)(short)(param_3 + 0x13));
      FUN_10000288(0,5);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < *(short *)(param_1 + 0xd8));
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    FUN_10000270((int)(short)(param_2 + *(short *)(param_1 + 0xd8) * 0x10 + 0x50),
                 (int)(short)(param_3 + 0x13));
    FUN_10000288(0,5);
  }
  return;
}



// Function: FUN_1008fb5c at 1008fb5c
// Size: 1044 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008fb5c(int param_1)

{
  undefined1 uVar4;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar5;
  short sVar7;
  uint uVar6;
  int local_bc;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  short local_74;
  short local_72;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  
  FUN_100e0f78(&local_74,param_1 + 0x34);
  local_4c = _DAT_63e30000;
  local_4a = _DAT_63e30002;
  local_48 = local_74;
  local_46 = local_72;
  sVar7 = local_72 - _DAT_63e30002;
  uVar6 = (uint)sVar7;
  sVar5 = local_74 - _DAT_63e30000;
  FUN_10000870(&local_78,&local_7c);
  local_44 = 0;
  local_42 = 0;
  local_40 = sVar5;
  local_3e = sVar7;
  uVar4 = FUN_100f1574(1);
  uVar1 = FUN_100b0578(&local_44);
  iVar2 = FUN_10001d58(&local_80,8,uVar1,**(undefined4 **)(local_bc + -0x1cc),0,0);
  **(undefined1 **)(local_bc + -0x3c) = uVar4;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xb3) = 8;
    FUN_100226b0(param_1 + 0xa8,0,0,uVar6,(int)sVar5);
    *(ushort *)(param_1 + 0xb0) =
         (short)((int)uVar6 >> 1) + (ushort)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    *(undefined1 *)(param_1 + 0xb2) = 0;
    *(undefined4 *)(param_1 + 0xb8) = local_80;
    FUN_100462c8(0x19);
    FUN_10009b48(*(undefined4 *)(*(int *)(local_bc + -0x19bc) + 0x1f8),
                 (int)(short)((short)*(undefined4 *)(param_1 + 0x30) + -7),
                 (int)(short)((short)*(undefined4 *)(param_1 + 0x2c) + -7),
                 (int)(short)*(undefined4 *)(param_1 + 0x38),
                 (int)(short)*(undefined4 *)(param_1 + 0x34),param_1 + 0xa8,0,0);
    FUN_10000870(&local_78,&local_7c);
    FUN_10000888(*(undefined4 *)(param_1 + 0xb8),0);
    local_90 = *(undefined4 *)(param_1 + 0x98);
    uStack_8c = *(undefined4 *)(param_1 + 0x9c);
    uStack_88 = *(undefined4 *)(param_1 + 0xa0);
    FUN_10067270();
    FUN_100f0788(&local_90);
    if (*(char *)(param_1 + 0xdb) == '\0') {
      FUN_100329b0(0x2d,0,(int)*(short *)(param_1 + 0xd0),1);
      FUN_100329b0((int)(short)(*(short *)(param_1 + 0xd8) * 0x10 + 0x1d),0,
                   (int)*(short *)(param_1 + 0xd2),1);
    }
    else {
      puVar3 = (undefined4 *)FUN_100f56e4(0xb4);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_100cda40(puVar3);
        *puVar3 = &DAT_809f000c;
        *(undefined2 *)(puVar3 + 0x2c) = 0;
        *(undefined2 *)((int)puVar3 + 0xb2) = 0;
      }
      local_54 = 0;
      local_50 = 0x25;
      local_5c = 0x10;
      local_58 = 0x10;
      FUN_100cf4f8(puVar3,param_1,&local_54,&local_5c,5,5,(int)*(short *)(param_1 + 0xdc),1);
      puVar3 = (undefined4 *)FUN_100f56e4(0xb4);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_100cda40(puVar3);
        *puVar3 = &DAT_809f000c;
        *(undefined2 *)(puVar3 + 0x2c) = 0;
        *(undefined2 *)((int)puVar3 + 0xb2) = 0;
      }
      local_60 = *(short *)(param_1 + 0xd8) * 0x10 + 0x15;
      local_64 = 0;
      local_6c = 0x10;
      local_68 = 0x10;
      FUN_100cf4f8(puVar3,param_1,&local_64,&local_6c,5,5,
                   (int)(short)(*(short *)(param_1 + 0xdc) + 1),1);
    }
    if (*(char *)(param_1 + 0xda) != '\0') {
      FUN_10032860(0xa3,0,*(int *)(local_bc + -0x1350) + 0x20,0xfffffffe);
    }
    FUN_1008fa00(param_1,1,1,0xf7);
    FUN_1008fa00(param_1,0,1,0xf7);
    FUN_1008fa00(param_1,0,0xffffffff,0xfb);
    FUN_1008fa00(param_1,0xffffffff,0xffffffff,0xfb);
    FUN_1008fa00(param_1,0,0,0xff);
    FUN_10000888(local_78,local_7c);
    FUN_10044d38(param_1 + 0xbc,0xbc3);
  }
  return;
}



// Function: FUN_1008ff70 at 1008ff70
// Size: 64 bytes

void FUN_1008ff70(undefined4 param_1)

{
  FUN_10105d28(param_1);
  FUN_1008fb5c(param_1);
  return;
}



// Function: FUN_1008ffb0 at 1008ffb0
// Size: 76 bytes

void FUN_1008ffb0(int param_1)

{
  FUN_10106060(param_1);
  FUN_1000a094(param_1 + 0xa8);
  FUN_1000a094(param_1 + 0xbc);
  return;
}



// Function: FUN_1008fffc at 1008fffc
// Size: 264 bytes

void FUN_1008fffc(int *param_1)

{
  int in_r7;
  char in_r8;
  short sVar1;
  short sVar2;
  uint uVar3;
  
  if (in_r8 != '\0') {
    sVar2 = *(short *)(param_1 + 0x34);
    uVar3 = (uint)*(short *)((int)param_1 + 0xd6);
    sVar1 = sVar2 + *(short *)((int)param_1 + 0xd6) *
                    (short)((int)(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) +
                                 (int)(short)((int)(short)((*(short *)((int)param_1 + 0xd2) - sVar2)
                                                          * ((short)*(undefined4 *)(in_r7 + 4) +
                                                            -0x28)) /
                                             (*(short *)(param_1 + 0x36) * 0x10 + -0x10))) /
                           (int)uVar3);
    if ((sVar2 <= sVar1) && (sVar2 = sVar1, *(short *)((int)param_1 + 0xd2) < sVar1)) {
      if ((*(char *)((int)param_1 + 0xda) == '\0') ||
         ((short)*(undefined4 *)(in_r7 + 4) < (short)(*(short *)(param_1 + 0x36) * 0x10 + 0x36))) {
        sVar2 = *(short *)((int)param_1 + 0xd2);
      }
      else {
        sVar2 = -1;
      }
    }
    if (*(short *)(param_1 + 0x35) != sVar2) {
      *(short *)(param_1 + 0x35) = sVar2;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
    }
  }
  return;
}



// Function: FUN_10090108 at 10090108
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090108(void)

{
  FUN_100c1c8c(&DAT_609e0000,_DAT_8122fb40,0xe0,0x80a90000,&DAT_9421ffc0);
  return;
}



// Function: FUN_10090144 at 10090144
// Size: 8 bytes

undefined4 FUN_10090144(void)

{
  return 0x90a90000;
}



// Function: FUN_10090154 at 10090154
// Size: 84 bytes

undefined4 * FUN_10090154(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100e1f44(puVar1);
    *puVar1 = &DAT_63e30000;
  }
  return puVar1;
}



// Function: FUN_100901a8 at 100901a8
// Size: 756 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100901a8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short sStack0000001c;
  int local_a4;
  undefined1 auStack_70 [2];
  undefined1 auStack_6e [20];
  short local_5a;
  short local_54;
  undefined4 local_30 [2];
  short local_28;
  short local_26;
  
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,&local_28);
  iVar3 = (int)*(short *)(**(int **)(local_a4 + -0x550) +
                         ((int)**(short **)(local_a4 + -0x170) + (int)(short)(sStack0000001c + -1))
                         * 2);
  FUN_1000873c(iVar3,(int)*(short *)(**(int **)(local_a4 + -0x544) + 0x110),
               *(undefined4 *)(local_a4 + -0x1208),(int)(short)(local_26 + 2),(int)local_28,0,0);
  FUN_10049628(iVar3,auStack_70);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  FUN_1005f1a0((int)(short)(local_26 + 0x2a),(int)(short)(local_28 + 5),auStack_6e);
  iVar2 = *(int *)(local_a4 + -0x133c);
  FUN_10001dd0(&DAT_2c9f0000,iVar2 + 0x3c,(int)local_5a);
  FUN_1005f1a0((int)(short)(local_26 + 0x9a),(int)(short)(local_28 + 5),&DAT_2c9f0000);
  FUN_10001dd0(&DAT_2c9f0000,iVar2 + 0x40,(int)local_54);
  FUN_1005f1a0((int)(short)(local_26 + 0xca),(int)(short)(local_28 + 5),&DAT_2c9f0000);
  FUN_1002269c(local_30,0xe2,(int)(short)(local_28 + 8));
  if (*(char *)(_DAT_281f0000 + iVar3 * 6) == '\0') {
    iVar2 = _DAT_281f0000 + iVar3 * 6;
    if (*(char *)(iVar2 + 1) == '\0') {
      if (*(char *)(_DAT_281f0000 + iVar3 * 6 + 2) != '\0') {
        FUN_1004602c(8,**(undefined4 **)(local_a4 + -0x1328),
                     (*(undefined4 **)(local_a4 + -0x1328))[1],local_30[0],0x24,0xf);
      }
    }
    else if (*(char *)(iVar2 + 2) == '\0') {
      FUN_1004602c(8,**(undefined4 **)(local_a4 + -0x132c),(*(undefined4 **)(local_a4 + -0x132c))[1]
                   ,local_30[0],0x24,0xf);
    }
    else {
      FUN_1004602c(8,**(undefined4 **)(local_a4 + -0x1330),(*(undefined4 **)(local_a4 + -0x1330))[1]
                   ,local_30[0],0x24,0xf);
    }
  }
  else {
    FUN_1004602c(8,**(undefined4 **)(local_a4 + -0x1334),(*(undefined4 **)(local_a4 + -0x1334))[1],
                 local_30[0],0x24,0xf);
  }
  uVar1 = FUN_1005d948(iVar3,0);
  FUN_1005f1a0((int)(short)(local_26 + 0x112),(int)(short)(local_28 + 5),uVar1);
  return;
}



// Function: FUN_1009049c at 1009049c
// Size: 8 bytes

undefined4 FUN_1009049c(void)

{
  return 0x8062fb30;
}



// Function: FUN_100904ac at 100904ac
// Size: 108 bytes

undefined4 * FUN_100904ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &DAT_80010048;
  }
  return puVar1;
}



// Function: FUN_10090518 at 10090518
// Size: 420 bytes

void FUN_10090518(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 != 0x63686530) {
    if (iVar1 < 0x63686531) {
      if (iVar1 != 0x61726d33) {
        if (iVar1 < 0x61726d34) {
          if (iVar1 != 0x61726d31) {
            if (iVar1 < 0x61726d32) {
              if (iVar1 == 0x61726d30) goto LAB_1009064c;
            }
            else if (iVar1 == 0x61726d32) goto LAB_1009064c;
            goto LAB_100906a4;
          }
        }
        else if (iVar1 != 0x61726d35) {
          if (iVar1 < 0x61726d36) {
            if (iVar1 == 0x61726d34) goto LAB_1009064c;
          }
          else if ((iVar1 == 0x61726d36) || (iVar1 == 0x61726d37)) goto LAB_1009064c;
          goto LAB_100906a4;
        }
      }
LAB_1009064c:
      FUN_1005ea7c((int)(short)((short)*(undefined4 *)(param_3 + 0x18) + -0x6d30));
      return;
    }
    if (iVar1 != 0x63686535) {
      if (iVar1 < 0x63686536) {
        if (iVar1 != 0x63686532) {
          if (iVar1 < 0x63686533) {
            if (iVar1 != 0x63686531) goto LAB_100906a4;
          }
          else if ((iVar1 != 0x63686533) && (iVar1 != 0x63686534)) goto LAB_100906a4;
        }
      }
      else if (iVar1 != 0x63686537) {
        if (iVar1 < 0x63686538) {
          if (iVar1 == 0x63686536) goto LAB_1009066c;
        }
        else {
          if (iVar1 == 0x67726f75) {
            FUN_1005ed24();
            return;
          }
          if (iVar1 == 0x756e6772) {
            FUN_1005edf4();
            return;
          }
        }
LAB_100906a4:
        FUN_100d5934();
        return;
      }
    }
  }
LAB_1009066c:
  FUN_1005ec38((int)(short)((short)*(undefined4 *)(param_3 + 0x18) + -0x6530));
  return;
}



// Function: FUN_100906bc at 100906bc
// Size: 308 bytes

void FUN_100906bc(undefined4 param_1,uint param_2)

{
  if ((param_2 < 0x61726d30) || (0x61726d37 < param_2)) {
    if ((param_2 < 0x63686530) || (0x63686537 < param_2)) {
      if (param_2 == 0x63616e63) {
        FUN_1009e534(0x150);
      }
      else if (param_2 == 0x67726f75) {
        FUN_1009e534(0x151);
      }
      else if (param_2 == 0x6f6b2020) {
        FUN_1009e534(0x14f);
      }
      else if (param_2 == 0x756e6772) {
        FUN_1009e534(0x152);
      }
      else {
        FUN_10078c58();
      }
    }
    else {
      FUN_1009e534((int)(short)((short)param_2 + -0x6bd5));
    }
  }
  else {
    FUN_1009e534((int)(short)((short)param_2 + -0x6bdd));
  }
  return;
}



// Function: FUN_100907f0 at 100907f0
// Size: 208 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100907f0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  
  piVar2 = (int *)0x0;
  if ((0x61726d2f < param_2) && (param_2 < 0x61726d38)) {
    piVar2 = (int *)FUN_10117884((int)*(int **)(param_1 + 8) +
                                 (int)*(short *)(**(int **)(param_1 + 8) + 0x308));
  }
  if ((piVar2 == (int *)0x0) ||
     (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0xe0) + (int)piVar2), iVar1 == 0)) {
    FUN_100462c8(0x1d);
  }
  else {
    FUN_100462c8(0x28);
  }
  local_18 = CONCAT22(_DAT_607c0006,_DAT_607c0004);
  *param_3 = local_18;
  return;
}



// Function: FUN_100908c0 at 100908c0
// Size: 8 bytes

undefined4 FUN_100908c0(void)

{
  return 0x48000321;
}



// Function: FUN_100908d0 at 100908d0
// Size: 84 bytes

undefined4 * FUN_100908d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x80);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1010598c(puVar1);
    *puVar1 = &DAT_30210040;
  }
  return puVar1;
}



// Function: FUN_10090924 at 10090924
// Size: 48 bytes

void FUN_10090924(void)

{
  FUN_1005dd84(0,0,0);
  return;
}



// Function: FUN_10090954 at 10090954
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090954(void)

{
  FUN_100c1c8c(0x90a90000,_DAT_60000000,0xb8,0x8062fb34,&DAT_7c0803a6);
  FUN_100c1c8c(0x8062fb30,_DAT_48000315,0x40,0x60000000,&DAT_281f0000);
  FUN_100c1c8c(0x48000321,_DAT_281f0000,0x80,&DAT_41820018,&DAT_80410014);
  return;
}



// Function: FUN_100909d0 at 100909d0
// Size: 8 bytes

undefined1 * FUN_100909d0(void)

{
  return &DAT_57c407ff;
}



// Function: FUN_100909e0 at 100909e0
// Size: 108 bytes

undefined4 * FUN_100909e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d568c(puVar1);
    puVar1[0xd] = 0x20202020;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &DAT_41820010;
  }
  return puVar1;
}



// Function: FUN_10090a4c at 10090a4c
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090a4c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == 0x22) && (*(int *)(param_3 + 0x18) == 0x70696374)) {
    *(undefined1 *)(_DAT_57c407bd + 0x99) = 0;
    iVar1 = *(int *)(_DAT_57c407bd + 0x88);
    *(undefined2 *)(iVar1 + 0x1dc) = 0xffff;
    FUN_1007c714(iVar1,0x3ef);
    FUN_10117884((int)_DAT_48001681 + (int)*(short *)(*_DAT_48001681 + 0x4d0));
    return;
  }
  FUN_100d5934();
  return;
}



// Function: FUN_10090adc at 10090adc
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090adc(void)

{
  FUN_100c1c8c(&DAT_57c407ff,_DAT_63e30000,0x40,0x4bfdf161,&DAT_281f0000);
  return;
}



// Function: FUN_10090b18 at 10090b18
// Size: 8 bytes

undefined4 FUN_10090b18(void)

{
  return 0x60000000;
}



// Function: FUN_10090b28 at 10090b28
// Size: 104 bytes

undefined4 * FUN_10090b28(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb4), param_1 != (undefined4 *)0x0)) {
    FUN_100cdbe4(param_1);
    *param_1 = &DAT_80010048;
  }
  return param_1;
}



// Function: FUN_10090b90 at 10090b90
// Size: 40 bytes

void FUN_10090b90(void)

{
  FUN_10090b28(0);
  return;
}



// Function: FUN_10090bb8 at 10090bb8
// Size: 376 bytes

void FUN_10090bb8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint local_150;
  int iStack_14c;
  int iStack_148;
  undefined1 auStack_140 [16];
  short local_130;
  short local_12e;
  short local_12a;
  undefined1 local_128 [256];
  undefined1 auStack_28 [12];
  
  if (param_1[0x2b] != 0) {
    local_128[0] = 0;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_128);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),local_128);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_140);
    uVar1 = FUN_100b1b08(local_128);
    iVar2 = FUN_100ef96c(auStack_28);
    if (param_1[0xd] + -3 <= iVar2) {
      FUN_100b1c84(local_128);
      iVar2 = FUN_100006f0();
      iVar3 = FUN_100e1a3c(auStack_140,1);
      if (iVar3 + -3 < iVar2) {
        iStack_14c = param_1[0x27];
        iStack_148 = param_1[0x28];
        local_150 = param_1[0x26] | 0x2000;
        FUN_100f0788(&local_150);
      }
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_140,&local_130);
    FUN_10032208((int)local_12e,(int)local_12a,(int)local_130,uVar1,(int)*(short *)(param_1 + 0x2c))
    ;
  }
  return;
}



// Function: FUN_10090d30 at 10090d30
// Size: 220 bytes

void FUN_10090d30(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
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
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
    }
  }
  return;
}



// Function: FUN_10090e0c at 10090e0c
// Size: 128 bytes

void FUN_10090e0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) &&
     (piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x308)),
     piVar1 != (int *)0x0)) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x7c8) + (int)piVar1,param_3,param_4);
  }
  return;
}



// Function: FUN_10090e8c at 10090e8c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10090e8c(void)

{
  FUN_100c1c8c(0x60000000,_DAT_30210040,0xb4,&DAT_7c0803a6,0x8187000c);
  return;
}



// Function: FUN_10090ec8 at 10090ec8
// Size: 8 bytes

undefined1 * FUN_10090ec8(void)

{
  return &DAT_bbc1fff8;
}



// Function: FUN_10090ed8 at 10090ed8
// Size: 84 bytes

undefined4 * FUN_10090ed8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0xa8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c6b2c(puVar1);
    *puVar1 = &DAT_7c0803a6;
  }
  return puVar1;
}



// Function: FUN_10090f2c at 10090f2c
// Size: 236 bytes

void FUN_10090f2c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int local_30 [3];
  
  FUN_100e1a64(auStack_38,param_3);
  FUN_100e1a64(auStack_40,param_2);
  piVar1 = (int *)FUN_100e1088(auStack_38,0);
  iVar2 = *piVar1;
  piVar1 = (int *)FUN_100e1088(auStack_40,0);
  local_30[0] = iVar2 - *piVar1;
  local_30[1] = 0;
  FUN_100e10b0(auStack_48,param_1 + 0xb,local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x370),auStack_48,param_4);
  FUN_1010c5f0(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_10091018 at 10091018
// Size: 60 bytes

void FUN_10091018(void)

{
  FUN_10064850(1,0);
  FUN_10064850(0,0);
  return;
}



// Function: FUN_10091054 at 10091054
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091054(void)

{
  FUN_100c1c8c(&DAT_bbc1fff8,_DAT_4e800020,0xa8,_FUN_101165c4,&DAT_9421ffc0);
  return;
}



// Function: FUN_10091090 at 10091090
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10091090(void)

{
  return FUN_101165c4;
}



// Function: FUN_100910a0 at 100910a0
// Size: 104 bytes

undefined4 * FUN_100910a0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc0), param_1 != (undefined4 *)0x0)) {
    FUN_100f6b8c(param_1);
    *param_1 = &DAT_9421ffc8;
  }
  return param_1;
}



// Function: FUN_10091108 at 10091108
// Size: 40 bytes

void FUN_10091108(void)

{
  FUN_100910a0(0);
  return;
}



// Function: FUN_10091130 at 10091130
// Size: 252 bytes

void FUN_10091130(int *param_1)

{
  int iVar1;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_100e1a08(param_1 + 0x18);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x668) + (int)param_1), iVar1 != 0)) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x638) + (int)param_1,auStack_28);
    iVar1 = FUN_100b0870(auStack_28);
    if (iVar1 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e0),auStack_28);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
    }
  }
  return;
}



// Function: FUN_100912f8 at 100912f8
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100912f8(void)

{
  FUN_100c1c8c(&DAT_90010008,_DAT_8062fff8,0xc0,0x4bfffd65,_FUN_10117184);
  return;
}



// Function: FUN_10091334 at 10091334
// Size: 4 bytes

void FUN_10091334(void)

{
  return;
}



// Function: FUN_10091338 at 10091338
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091338(short param_1,short param_2)

{
  if ((_DAT_8062fb2c != param_1) || (_DAT_60000000 != param_2)) {
    _DAT_60000000 = param_2;
    _DAT_8062fb2c = param_1;
    FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x4d0));
    FUN_10117884((int)_DAT_63840000 + (int)*(short *)(*_DAT_63840000 + 0x4c8));
  }
  return;
}



// Function: FUN_100913cc at 100913cc
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100913cc(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1008455c();
  if ((_DAT_38800000 != 0) && (piVar1 != (int *)0x0)) {
    *(undefined1 *)((int)piVar1 + 0x95) = 0;
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  return;
}



// Function: FUN_1009142c at 1009142c
// Size: 92 bytes

void FUN_1009142c(void)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **local_24;
  
  piVar2 = (int *)FUN_1008455c();
  ppuVar1 = &.TVect::OCECToRString;
  if (piVar2 != (int *)0x0) {
    *(undefined1 *)((int)piVar2 + 0x95) = 1;
    FUN_10117884((int)*(short *)(*piVar2 + 0x4d0) + (int)piVar2);
    ppuVar1 = local_24;
  }
  *(undefined2 *)ppuVar1[-0x4b0] = 1;
  return;
}



// Function: FUN_10091488 at 10091488
// Size: 132 bytes

undefined4 * FUN_10091488(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(8), param_1 != (undefined4 *)0x0)) {
    param_1[1] = 0;
    *param_1 = 0;
    iVar1 = FUN_10002d00(param_1,0,0,0);
    if (iVar1 != 0) {
      *param_1 = 0;
    }
  }
  return param_1;
}



// Function: FUN_1009150c at 1009150c
// Size: 380 bytes

void FUN_1009150c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_188 [12];
  char local_17c;
  undefined1 auStack_170 [316];
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      do {
        iVar1 = FUN_100035b8(*param_1,0x18,auStack_188);
        if (local_17c == '\0') break;
      } while (iVar1 == 0);
      if (*param_1 != 0) {
        FUN_10000900(*param_1,1);
      }
    }
    *param_1 = 0;
    if (param_1[1] != 0) {
      FUN_100ec170(auStack_170,param_1[1],1);
      uVar2 = FUN_100ec2c4(auStack_170);
      iVar1 = FUN_100ebf44(auStack_170);
      while (iVar1 != 0) {
        FUN_10002ad8(uVar2);
        uVar2 = FUN_100ec34c(auStack_170);
        iVar1 = FUN_100ebf44(auStack_170);
      }
      iVar1 = FUN_100f57c8(param_1[1]);
      param_1[1] = iVar1;
      FUN_100ec1e8(auStack_170,2);
    }
    if ((param_1 != (int *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_100917d8 at 100917d8
// Size: 256 bytes

void FUN_100917d8(int *param_1,short param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 local_20;
  short local_1e;
  undefined4 local_1c;
  
  if ((((param_2 != 0) && (*param_1 != 0)) && (iVar1 = FUN_1002771c(), iVar1 != 0)) &&
     (iVar1 = FUN_10001728(0x736e6420,(int)param_2), iVar1 != 0)) {
    local_20 = 3;
    local_1e = 0;
    local_1c = 0;
    FUN_10002178(*param_1,&local_20);
    local_20 = 0x2b;
    local_1e = FUN_1002771c();
    local_1e = local_1e * 0x19;
    local_1c = 0;
    FUN_10002178(*param_1,&local_20);
    FUN_10001638(*param_1,iVar1,param_3);
  }
  return;
}



// Function: FUN_1009191c at 1009191c
// Size: 164 bytes

void FUN_1009191c(int param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10001728(0x736e6420,(int)param_2);
  if (iVar1 != 0) {
    FUN_10000b70(iVar1);
    FUN_10002598(iVar1);
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = FUN_100eab4c(0);
      *(undefined4 *)(param_1 + 4) = uVar2;
      FUN_100eabdc();
    }
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x158),
                 iVar1);
  }
  return;
}



// Function: FUN_100919c0 at 100919c0
// Size: 344 bytes

int FUN_100919c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short local_218 [2];
  undefined1 local_214 [256];
  byte local_114 [256];
  undefined1 auStack_14 [4];
  
  FUN_100b19f4(local_114);
  if (local_114[(short)(local_114[0] - 3)] == 0x2e) {
    local_114[0] = local_114[0] - 4;
  }
  uVar1 = FUN_100b1b90(local_114,0x48000c85,1);
  FUN_100b1c88(local_114,1,uVar1);
  uVar1 = FUN_100b1b90(local_114,0x48000c89,1);
  FUN_100b1c88(local_114,1,uVar1);
  uVar1 = FUN_100b1c84(local_114);
  iVar2 = FUN_10002238(0x736e6420,uVar1);
  if (iVar2 != 0) {
    FUN_10002598(iVar2);
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_100eab4c(0);
    *(undefined4 *)(param_1 + 4) = uVar1;
    FUN_100eabdc();
  }
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x158),iVar2)
  ;
  local_214[0] = 0;
  FUN_10001758(iVar2,local_218,auStack_14,local_214);
  return (int)local_218[0];
}



// Function: FUN_10091b18 at 10091b18
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091b18(void)

{
  if (_DAT_8062fb38 != 0) {
    FUN_10000900(_DAT_8062fb38,1);
  }
  if (_DAT_60000000 != 0) {
    FUN_10002ad8(_DAT_60000000);
  }
  _DAT_60000000 = 0;
  _DAT_8062fb38 = 0;
  return;
}



// Function: FUN_10091b80 at 10091b80
// Size: 132 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_10091b80(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  char local_14;
  
  if (_DAT_8062fb38 == 0) {
    local_14 = '\0';
  }
  else {
    iVar1 = FUN_100035b8(_DAT_8062fb38,0x18,auStack_20);
    if (iVar1 == 0) {
      if (local_14 == '\0') {
        FUN_10091b18();
      }
    }
    else {
      FUN_10091b18();
      local_14 = '\0';
    }
  }
  return local_14;
}



// Function: FUN_10091c04 at 10091c04
// Size: 160 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091c04(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  
  iVar2 = (int)param_1;
  if ((iVar2 != 0) && (_DAT_8062fb38 != 0)) {
    iVar3 = 0;
    if (_DAT_60000000 != 0) {
      FUN_10002598(_DAT_60000000);
      uVar1 = FUN_10001a88();
      **(undefined4 **)(local_2c + -0x16c) = uVar1;
      iVar2 = FUN_10001638(_DAT_8062fb38,_DAT_60000000,1);
      iVar3 = iVar2;
    }
    if (iVar3 != 0) {
      FUN_10091b18(iVar2);
    }
  }
  return;
}



// Function: FUN_10091ca4 at 10091ca4
// Size: 288 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091ca4(short param_1,short param_2)

{
  int iVar1;
  undefined2 local_20;
  short local_1e;
  undefined4 local_1c;
  
  if (param_1 != 0) {
    iVar1 = FUN_10091b80();
    while (iVar1 != 0) {
      iVar1 = FUN_10091b80();
    }
    FUN_10091b18();
    _DAT_60000000 = (int *)FUN_10001728(0x736e6420,(int)param_1);
    if (_DAT_60000000 != (int *)0x0) {
      iVar1 = FUN_10002d00(&DAT_8062fb38,0,0,0);
      if ((iVar1 == 0) && (_DAT_8062fb38 != 0)) {
        FUN_10000b70(_DAT_60000000);
        if (*_DAT_60000000 != 0) {
          FUN_10002598(_DAT_60000000);
          local_20 = 0x2b;
          local_1e = param_2 * 0x19;
          local_1c = 0;
          FUN_10002178(_DAT_8062fb38,&local_20);
        }
      }
      else {
        FUN_10091b18();
      }
    }
  }
  return;
}



// Function: FUN_10091de0 at 10091de0
// Size: 272 bytes

int FUN_10091de0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  short local_218 [2];
  undefined1 local_214 [256];
  byte local_114 [256];
  undefined1 auStack_14 [8];
  
  FUN_100b19f4(local_114,param_1);
  if (local_114[(short)(local_114[0] - 3)] == 0x2e) {
    local_114[0] = local_114[0] - 4;
  }
  uVar1 = FUN_100b1b90(local_114,0x48000cbd,1);
  FUN_100b1c88(local_114,1,uVar1);
  uVar1 = FUN_100b1b90(local_114,0x48000cc1,1);
  FUN_100b1c88(local_114,1,uVar1);
  uVar1 = FUN_100b1c84(local_114);
  iVar2 = FUN_10002238(0x736e6420,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    local_214[0] = 0;
    FUN_10001758(iVar2,local_218,auStack_14,local_214);
    iVar2 = (int)local_218[0];
  }
  return iVar2;
}



// Function: FUN_10091ef0 at 10091ef0
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10091ef0(void)

{
  undefined1 auStack_28 [12];
  short local_1c;
  
  FUN_100032e8(_DAT_38800000,auStack_28);
  return (-1 - local_1c) + (uint)(local_1c == 0) >> 0x1f;
}



// Function: FUN_10091f40 at 10091f40
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091f40(void)

{
  int iVar1;
  short sVar2;
  
  if (_DAT_38800000 != 0) {
    iVar1 = FUN_100276fc();
    for (iVar1 = iVar1 * 0x1800; -1 < iVar1; iVar1 = iVar1 + -0x50) {
      FUN_100026b8(_DAT_38800000,iVar1);
    }
    sVar2 = FUN_10003798(_DAT_38800000,0);
    FUN_100db2f4((int)sVar2);
  }
  return;
}



// Function: FUN_10091fd4 at 10091fd4
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10091fd4(void)

{
  int iVar1;
  
  if (_DAT_38800000 != 0) {
    FUN_100035a0();
  }
  iVar1 = FUN_100ef2f8(_DAT_60000000);
  if (iVar1 != 0) {
    FUN_10002ad8(_DAT_60000000);
    FUN_10001c98(_DAT_60000000);
  }
  iVar1 = FUN_100ef2f8(_DAT_48000bc9);
  if (iVar1 != 0) {
    FUN_10002ad8(_DAT_48000bc9);
    FUN_10001c98(_DAT_48000bc9);
  }
  _DAT_48000bc9 = 0;
  _DAT_60000000 = 0;
  return;
}



// Function: FUN_10092080 at 10092080
// Size: 804 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092080(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int local_474;
  undefined1 auStack_450 [256];
  byte local_350 [256];
  undefined1 auStack_250 [256];
  short local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_144;
  undefined4 local_140;
  byte local_138 [256];
  
  puVar1 = (undefined4 *)FUN_10001470(0x3f4);
  if (puVar1 != (undefined4 *)0x0) {
    if (_DAT_60000000 != (int *)0x0) {
      FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xb0),0);
    }
    if (_DAT_60690000 != 0) {
      *(undefined2 *)(_DAT_60690000 + 0xbc) = 0xffff;
    }
    if (_DAT_48001681 != 0) {
      *(undefined2 *)(_DAT_48001681 + 0xa0) = 0xffff;
    }
    FUN_100014a0(*puVar1);
  }
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  local_140 = 0;
  local_148 = _DAT_41820010;
  _DAT_41820010 = auStack_250;
  iVar2 = FUN_10000090(auStack_250);
  if (iVar2 == 0) {
    if (_DAT_38800000 == 0) {
      _DAT_38800000 = FUN_100020d0(0x74756e65,0);
      FUN_100db26c();
    }
    FUN_100b19f4(local_138,param_2);
    if (local_138[(short)(local_138[0] - 3)] == 0x2e) {
      local_138[0] = local_138[0] - 4;
    }
    FUN_100b19f4(auStack_450,*(int *)(local_474 + -0x12bc) + 0x2b4);
    FUN_100b1ed0(local_350,auStack_450,local_138);
    FUN_100012d8(local_350,local_138,local_350[0] + 1);
    uVar3 = FUN_100b1c84(local_138);
    _DAT_60000000 = (int *)FUN_10002238(0x54756e65,uVar3);
    FUN_100db328();
    FUN_10000b70(_DAT_60000000);
    FUN_100ef9b8(_DAT_60000000);
    uVar3 = FUN_100b1c84(local_138);
    _DAT_48000bc9 = (undefined4 *)FUN_10002238(0x48656164,uVar3);
    FUN_100db328();
    FUN_10000b70(_DAT_48000bc9);
    FUN_100ef9b8(_DAT_48000bc9);
    sVar4 = FUN_10002100(_DAT_38800000,*_DAT_48000bc9);
    FUN_100db2f4((int)sVar4);
    sVar4 = FUN_10003678(_DAT_38800000);
    FUN_100db2f4((int)sVar4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100014a0(0x80a2db22);
      if (_DAT_60000000 != (int *)0x0) {
        FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xb0),1);
      }
      FUN_100014a0(0x80a2db22);
    }
    _DAT_41820010 = local_148;
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100014a0(0x80a2db22);
      if (_DAT_60000000 != (int *)0x0) {
        FUN_10117884((int)_DAT_60000000 + (int)*(short *)(*_DAT_60000000 + 0xb0),1);
      }
      FUN_100014a0(0x80a2db22);
    }
    FUN_100db158((int)local_150,local_14c);
  }
  return;
}



// Function: FUN_100923a4 at 100923a4
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100923a4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  short sVar2;
  int local_34;
  
  if (((_DAT_38800000 != 0) && (_DAT_60000000 != (undefined4 *)0x0)) && (_DAT_48000bc9 != 0)) {
    iVar1 = FUN_100276fc();
    FUN_100026b8(_DAT_38800000,iVar1 * 0x1800);
    **(undefined1 **)(local_34 + -0x12a4) = param_2;
    sVar2 = FUN_10003228(_DAT_38800000,*_DAT_60000000,0x10000,0,0xffffffff,1,0,0);
    FUN_100db2f4((int)sVar2);
    FUN_100026b8(_DAT_38800000,iVar1 * 0x1800);
  }
  return;
}



// Function: FUN_10092484 at 10092484
// Size: 1308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092484(short param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStack_130 [256];
  undefined2 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  sVar1 = param_1;
  if (DAT_7c0903da != '\0') {
    iVar2 = FUN_100276ec();
    sVar1 = param_1;
    if (iVar2 != 0) {
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = _DAT_41820010;
      _DAT_41820010 = auStack_130;
      iVar2 = FUN_10000090(auStack_130);
      sVar1 = _DAT_38800000;
      if (iVar2 == 0) {
        if (param_1 == _DAT_38800000) {
          iVar2 = FUN_10091ef0();
          if (iVar2 != 0) {
            _DAT_41820010 = local_28;
            return;
          }
          FUN_10091fd4();
        }
        _DAT_38800000 = param_1;
        iVar2 = FUN_10091ef0();
        if (iVar2 != 0) {
          FUN_10091f40();
        }
        FUN_10091fd4();
        if (param_1 == 0) {
          uVar3 = FUN_1005f6b0(8,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 3) {
          uVar3 = FUN_1005f6b0(9,0xffffffff);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 1) {
          uVar3 = FUN_1005f6b0(10,0xffffffff);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 2) {
          bVar5 = true;
          iVar2 = 0;
          do {
            iVar6 = _DAT_4bffe775 + iVar2 * 2;
            if ((*(short *)(iVar6 + 0x138) != 0) && (*(short *)(iVar6 + 0xd0) == 0)) {
              bVar5 = false;
              break;
            }
            iVar2 = (int)(short)((short)iVar2 + 1);
          } while (iVar2 < 8);
          if (bVar5) {
            iVar2 = FUN_1005f230(1,100,0);
            if (iVar2 < 6) {
              uVar3 = FUN_1005f6b0(0xc,0xffffffff);
              uVar4 = FUN_1005f6b0(7,0);
              FUN_10092080(uVar4,uVar3);
            }
            else if (iVar2 < 0x35) {
              uVar3 = FUN_1005f6b0(0xb,0xffffffff);
              uVar4 = FUN_1005f6b0(7,0);
              FUN_10092080(uVar4,uVar3);
            }
            else {
              uVar3 = FUN_1005f6b0(10,0xffffffff);
              uVar4 = FUN_1005f6b0(7,0);
              FUN_10092080(uVar4,uVar3);
            }
          }
          else {
            uVar3 = FUN_1005f6b0(0xb,0xffffffff);
            uVar4 = FUN_1005f6b0(7,0);
            FUN_10092080(uVar4,uVar3);
          }
          FUN_100923a4(0,0);
        }
        else if (param_1 == 4) {
          uVar3 = FUN_1005f6b0(0xc,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 5) {
          uVar3 = FUN_1005f6b0(0xd,0xffffffff);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 6) {
          uVar3 = FUN_1005f6b0(0xe,0xffffffff);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 7) {
          uVar3 = FUN_1005f6b0(0xf,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 8) {
          uVar3 = FUN_1005f6b0(0x10,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 9) {
          uVar3 = FUN_1005f6b0(0x11,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 10) {
          uVar3 = FUN_1005f6b0(0x12,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        else if (param_1 == 0xb) {
          uVar3 = FUN_1005f6b0(0x13,0);
          uVar4 = FUN_1005f6b0(7,0);
          FUN_10092080(uVar4,uVar3);
          FUN_100923a4(0,1);
        }
        _DAT_41820010 = local_28;
        sVar1 = _DAT_38800000;
      }
    }
  }
  _DAT_38800000 = sVar1;
  return;
}



// Function: FUN_100929a0 at 100929a0
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100929a0(void)

{
  int iVar1;
  int local_144;
  undefined1 auStack_120 [256];
  undefined2 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (DAT_7c0903da != '\0') {
    FUN_10003660(0,0);
    if ((**(char **)(local_144 + -0x12a4) != '\0') && (iVar1 = FUN_10091ef0(), iVar1 == 0)) {
      local_20 = 0;
      local_1c = 0;
      local_14 = 0;
      local_10 = 0;
      local_18 = _DAT_41820010;
      _DAT_41820010 = auStack_120;
      iVar1 = FUN_10000090(auStack_120);
      if (iVar1 == 0) {
        FUN_100923a4(0,1);
        _DAT_41820010 = local_18;
      }
    }
  }
  return;
}



// Function: FUN_10092a58 at 10092a58
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092a58(short param_1)

{
  if (_DAT_38800000 != 0) {
    FUN_100026b8(_DAT_38800000,param_1 * 0x1800);
  }
  return;
}



// Function: FUN_10092aa4 at 10092aa4
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092aa4(void)

{
  if (_DAT_38800000 != -1) {
    FUN_10092484((int)_DAT_38800000);
  }
  return;
}



// Function: FUN_10092ae0 at 10092ae0
// Size: 48 bytes

void FUN_10092ae0(void)

{
  int iVar1;
  
  iVar1 = FUN_10091ef0();
  if (iVar1 != 0) {
    FUN_10091f40();
  }
  FUN_10091fd4();
  return;
}



// Function: FUN_10092b10 at 10092b10
// Size: 208 bytes

void FUN_10092b10(short param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002770c();
  if (iVar1 != 0) {
    if (param_1 == 0) {
      FUN_1005f6b0(0x25,0);
      iVar1 = FUN_10091de0();
      if (-1 < iVar1) {
        uVar2 = FUN_1002771c();
        FUN_10091ca4(iVar1,uVar2);
        FUN_10091c04(iVar1,0);
      }
    }
    else {
      FUN_1005f6b0(0x25,1);
      iVar1 = FUN_10091de0();
      if (-1 < iVar1) {
        uVar2 = FUN_1002771c();
        FUN_10091ca4(iVar1,uVar2);
        FUN_10091c04(iVar1,0);
      }
    }
  }
  return;
}



// Function: FUN_10092be0 at 10092be0
// Size: 124 bytes

void FUN_10092be0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002770c();
  if (iVar1 != 0) {
    FUN_1005f6b0(0x27,0);
    iVar1 = FUN_10091de0();
    if (-1 < iVar1) {
      uVar2 = FUN_1002771c();
      FUN_10091ca4(iVar1,uVar2);
      FUN_10091c04(iVar1,0);
    }
  }
  return;
}



// Function: FUN_10092c5c at 10092c5c
// Size: 2104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10092c5c(ushort param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  undefined **local_1fc;
  int local_1d8;
  int iStack_1d4;
  undefined1 auStack_1d0 [4];
  short local_1cc;
  undefined1 auStack_1c8 [8];
  int local_1c0;
  undefined1 auStack_1b8 [256];
  undefined2 local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int *local_a0;
  undefined4 local_9c [2];
  undefined1 auStack_94 [80];
  undefined4 local_44;
  undefined4 local_40;
  short local_3c;
  short local_3a;
  
  iVar2 = FUN_1002772c();
  if (iVar2 == 0) {
    return;
  }
  ppuVar1 = &.TVect::OCECToRString;
  if (param_1 != 5) goto LAB_1009324c;
  if (0x27 < *(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2)) {
    return;
  }
  sVar5 = *(short *)(_DAT_4bffe775 + 0x182);
  sVar6 = 0;
  if (sVar5 != 0) {
    do {
      sVar5 = sVar5 + -1;
      iVar2 = _DAT_60000000 + sVar5 * 0x16;
      if ((*(char *)(iVar2 + 4) == '\x1c') &&
         ((int)*(char *)(iVar2 + 5) == (int)*(short *)(_DAT_4bffe775 + 0x110))) {
        sVar6 = sVar6 + 1;
      }
    } while (sVar5 != 0);
  }
  iVar2 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110);
  if (*(char *)(iVar2 + 0x100) == '\x02') {
    if ((int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) <
        (int)*(char *)(iVar2 + 0x108)) goto LAB_10092da4;
LAB_10092f08:
    iVar2 = _DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110);
    if (*(char *)(iVar2 + 0x100) == '\x02') {
      if (*(char *)(iVar2 + 0x108) + 5 <=
          (int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2)) goto LAB_10092f6c;
LAB_100930cc:
      local_3c = *(short *)(_DAT_4bffe775 + 0x136);
      iVar2 = (int)local_3c;
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      if (iVar2 != (iVar2 / 7) * 7) {
        return;
      }
      if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) < 100) {
        uVar3 = FUN_1005f6b0(0x36,0xffffffff);
        FUN_10001e78(auStack_94,uVar3);
      }
      else if (*(short *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) * 0x14 + 0x186) < 0xaf1)
      {
        if (sVar6 < 1) {
          uVar3 = FUN_1005f6b0(0x38,0xffffffff);
          FUN_10001e78(auStack_94,uVar3);
        }
        else if (sVar6 < 5) {
          iVar2 = FUN_1005f230(1,5,0);
          if (iVar2 != 1) {
            return;
          }
          uVar3 = FUN_1005f6b0(0x3a,0xffffffff);
          FUN_10001dd0(auStack_94,uVar3);
        }
        else {
          uVar3 = FUN_1005f6b0(0x39,0xffffffff);
          FUN_10001e78(auStack_94,uVar3);
        }
      }
      else {
        uVar3 = FUN_1005f6b0(0x37,0xffffffff);
        FUN_10001e78(auStack_94,uVar3);
      }
    }
    else {
      if ((int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) <
          *(char *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) + 0x108) + 5)
      goto LAB_100930cc;
LAB_10092f6c:
      sVar5 = (short)((int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) / 5 <<
                     2) +
              (short)((int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) / 5);
      *(undefined1 *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) + 0x100) = 1;
      *(char *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) + 0x108) = (char)sVar5;
      if ((int)sVar5 - 5U < 0x1f) {
        return;
      }
      uVar3 = FUN_1005f6b0(0x2f,0xffffffff);
      FUN_10001e78(auStack_94,uVar3);
    }
  }
  else {
    if ((int)*(char *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) + 0x108) <=
        (int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2)) goto LAB_10092f08;
LAB_10092da4:
    uVar7 = (short)((int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) / 5 << 2)
            + (short)((int)*(short *)(&DAT_8062dac4 + *(short *)(_DAT_4bffe775 + 0x110) * 2) / 5);
    *(undefined1 *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) + 0x100) = 2;
    *(char *)(_DAT_4bffe775 + *(short *)(_DAT_4bffe775 + 0x110) + 0x108) = (char)uVar7;
    if (uVar7 < 0x1f) {
      return;
    }
    uVar3 = FUN_1005f6b0(0x2e,0xffffffff);
    FUN_10001e78(auStack_94,uVar3);
  }
  local_3a = *(short *)(_DAT_4bffe775 + 0x136);
  sVar5 = local_3a;
  if (local_3a < 2) {
    sVar5 = 1;
  }
  ppuVar1 = local_1fc;
  if (sVar5 == 1) {
    return;
  }
LAB_1009324c:
  iVar2 = FUN_10091b80();
  while (iVar2 != 0) {
    iVar2 = FUN_10091b80();
  }
  local_a0 = (int *)0x0;
  local_a0 = (int *)FUN_10117884((int)*(int **)ppuVar1[-0x79] +
                                 (int)*(short *)(**(int **)ppuVar1[-0x79] + 200),0x41a,0);
  local_b8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_b0 = _DAT_41820010;
  _DAT_41820010 = auStack_1b8;
  iVar2 = FUN_10000090(auStack_1b8);
  piVar4 = local_a0;
  if (iVar2 == 0) {
    iVar2 = *local_a0;
    uVar3 = FUN_10117884((int)local_a0 + (int)*(short *)(iVar2 + 0x818),
                         *(undefined4 *)(iVar2 + 0x81c));
    FUN_10117884((int)piVar4 + (int)*(short *)(iVar2 + 0x7b0),*(undefined1 *)((int)piVar4 + 0xad),
                 *(undefined1 *)((int)piVar4 + 0xae),uVar3);
    FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 0x618),auStack_1c8);
    FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 0x7c0),auStack_1d0);
    if (local_1cc < local_1c0) {
      piVar4 = (int *)FUN_100e1580(auStack_1c8,0);
      iStack_1d4 = piVar4[1];
      local_1d8 = *piVar4 - (local_1c0 - local_1cc);
      FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 0x370),&local_1d8,1);
    }
    FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 800));
    FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 0x4c8));
    if (param_1 < 6) {
      return;
    }
    sVar5 = FUN_1005f230(1,0x1e,10);
    iVar2 = FUN_10091b80();
    while (iVar2 != 0) {
      FUN_1005f144(1);
      sVar5 = sVar5 + 1;
      if (0x28 < sVar5) {
        FUN_1002269c(local_9c,0x4e,0xf6);
        FUN_100226b0(&local_44,0,0x2f,0x9e,0x2f);
        FUN_1004602c(0x33,local_44,local_40,local_9c[0],0,0);
        FUN_1005f144(2);
        FUN_100226b0(&local_44,0,0x5e,0x9e,0x2f);
        FUN_1004602c(0x33,local_44,local_40,local_9c[0],0,0);
        FUN_1005f144(2);
        FUN_100226b0(&local_44,0,0x2f,0x9e,0x2f);
        FUN_1004602c(0x33,local_44,local_40,local_9c[0],0,0);
        FUN_1005f144(2);
        FUN_100226b0(&local_44,0,0,0x9e,0x2f);
        FUN_1004602c(0x33,local_44,local_40,local_9c[0],0,0);
        sVar5 = 0;
      }
      iVar2 = FUN_10091b80();
    }
    iVar2 = FUN_10091b80();
    while (iVar2 != 0) {
      iVar2 = FUN_10091b80();
    }
    iVar2 = FUN_1002772c();
    if (iVar2 != 0) {
      FUN_1005f144(6);
    }
    FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 0x738));
    _DAT_41820010 = local_b0;
  }
  else if (local_a0 != (int *)0x0) {
    FUN_10117884((int)local_a0 + (int)*(short *)(*local_a0 + 0x738));
  }
  return;
}



// Function: FUN_10093928 at 10093928
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093928(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002770c();
  if (iVar1 != 0) {
    uVar2 = FUN_1002771c();
    FUN_10091ca4((int)_DAT_81240004,uVar2);
    FUN_10091c04((int)_DAT_81240004,0);
  }
  return;
}



// Function: FUN_10093984 at 10093984
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093984(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002770c();
  if (iVar1 != 0) {
    uVar2 = FUN_1002771c();
    FUN_10091ca4((int)_DAT_81240002,uVar2);
    FUN_10091c04((int)_DAT_81240002,0);
  }
  return;
}



// Function: FUN_100939e0 at 100939e0
// Size: 124 bytes

void FUN_100939e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002770c();
  if (iVar1 != 0) {
    FUN_1005f6b0(0x3f,0);
    iVar1 = FUN_10091de0();
    if (-1 < iVar1) {
      uVar2 = FUN_1002771c();
      FUN_10091ca4(iVar1,uVar2);
      FUN_10091c04(iVar1,0);
    }
  }
  return;
}



// Function: FUN_10093a5c at 10093a5c
// Size: 164 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093a5c(void)

{
  FUN_1005f6b0(0x40,0);
  _DAT_81240000 = FUN_10091de0();
  FUN_1005f6b0(0x40,1);
  _DAT_81240002 = FUN_10091de0();
  FUN_1005f6b0(0x40,2);
  _DAT_81240004 = FUN_10091de0();
  FUN_1005f6b0(0x40,5);
  _DAT_8124000a = FUN_10091de0();
  _DAT_8062fb38 = 0;
  _DAT_60000000 = 0;
  _DAT_8082fffc = 0;
  return;
}



// Function: FUN_10093b00 at 10093b00
// Size: 8 bytes

undefined4 FUN_10093b00(void)

{
  return 0x48000bb9;
}



// Function: FUN_10093b10 at 10093b10
// Size: 132 bytes

undefined4 * FUN_10093b10(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x28), param_1 != (undefined4 *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = 0x60000000;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    *(undefined1 *)((int)param_1 + 0x22) = 0;
    param_1[9] = 0;
  }
  return param_1;
}



// Function: FUN_10093b94 at 10093b94
// Size: 40 bytes

void FUN_10093b94(void)

{
  FUN_10093b10(0);
  return;
}



// Function: FUN_10093bbc at 10093bbc
// Size: 240 bytes

void FUN_10093bbc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x24);
  if (((*(int *)(param_1 + 0x24) != 0) &&
      (iVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                            (int)*(short *)(**(int **)(param_1 + 8) + 0xe0)), iVar1 != 0)) &&
     (iVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0x758)), iVar1 == 0)) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x740));
    piVar2 = *(int **)(param_1 + 8);
    iVar1 = *piVar2;
    uVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(iVar1 + 0x530),iVar1,
                         *(undefined4 *)(iVar1 + 0x534));
    FUN_10117884((int)piVar2 + (int)*(short *)(iVar1 + 0xd0),uVar3,*(undefined4 *)(param_1 + 8),0);
  }
  return;
}



// Function: FUN_10093cac at 10093cac
// Size: 108 bytes

void FUN_10093cac(int param_1,int param_2)

{
  FUN_100bfd04(param_1,param_2);
  if (((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x20)) ||
     ((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x21))) {
    FUN_10093bbc(param_1);
  }
  return;
}



// Function: FUN_10093d18 at 10093d18
// Size: 120 bytes

void FUN_10093d18(int param_1,int param_2)

{
  FUN_100bfe54(param_1,param_2);
  if (*(char *)(param_1 + 0x22) == '\0') {
    if (((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x20)) ||
       ((int)*(short *)(param_2 + 0x24) == (int)*(char *)(param_1 + 0x21))) {
      FUN_10093bbc(param_1);
    }
  }
  return;
}



// Function: FUN_10093d9c at 10093d9c
// Size: 52 bytes

void FUN_10093d9c(int param_1,char param_2)

{
  if (('@' < param_2) && (param_2 < '[')) {
    *(char *)(param_1 + 0x20) = param_2 + ' ';
    *(char *)(param_1 + 0x21) = param_2;
    return;
  }
  *(char *)(param_1 + 0x20) = param_2;
  *(char *)(param_1 + 0x21) = param_2 + -0x20;
  return;
}



// Function: FUN_10093dd0 at 10093dd0
// Size: 144 bytes

void FUN_10093dd0(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_100bf698(param_1,param_2);
  cVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
  uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  FUN_10093d9c(param_1,(int)cVar1);
  *(undefined1 *)(param_1 + 0x22) = uVar2;
  return;
}



// Function: FUN_10093e60 at 10093e60
// Size: 64 bytes

void FUN_10093e60(int param_1,undefined4 param_2)

{
  FUN_100bf864(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// Function: FUN_10093ea0 at 10093ea0
// Size: 124 bytes

void FUN_10093ea0(int param_1,int *param_2)

{
  FUN_100bf728(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*(undefined1 *)(param_1 + 0x20));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x22));
  return;
}



// Function: FUN_10093f1c at 10093f1c
// Size: 8 bytes

undefined4 FUN_10093f1c(void)

{
  return 0x8062fb30;
}



// Function: FUN_10093f2c at 10093f2c
// Size: 84 bytes

undefined4 * FUN_10093f2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100bf518(puVar1);
    *puVar1 = &DAT_80010048;
  }
  return puVar1;
}



// Function: FUN_10093f80 at 10093f80
// Size: 376 bytes

void FUN_10093f80(int *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_158 [316];
  
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)FUN_10117884((int)*(short *)(*piVar2 + 0xe0) + (int)piVar2);
    piVar1 = piVar2;
    while (piVar3 != (int *)0x0) {
      piVar4 = (int *)FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0xe0));
      piVar1 = piVar3;
      piVar3 = piVar4;
    }
    iVar6 = piVar1[2];
    piVar1[2] = 0;
    if (param_3 == '\0') {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x148),param_2);
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x138),param_2);
    }
    piVar1[2] = iVar6;
  }
  FUN_1010556c(auStack_158,param_1);
  uVar5 = FUN_10105660(auStack_158);
  iVar6 = FUN_100ebf44(auStack_158);
  while (iVar6 != 0) {
    FUN_10093f80(uVar5,param_2,param_3);
    uVar5 = FUN_10105684(auStack_158);
    iVar6 = FUN_100ebf44(auStack_158);
  }
  FUN_101055f4(auStack_158,2);
  return;
}



// Function: FUN_100940f8 at 100940f8
// Size: 220 bytes

void FUN_100940f8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_148 [316];
  
  FUN_100bfd04(param_1,param_2);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar1 == 0) {
    FUN_1010556c(auStack_148,*(undefined4 *)(param_1 + 8));
    uVar2 = FUN_10105660(auStack_148);
    iVar1 = FUN_100ebf44(auStack_148);
    while (iVar1 != 0) {
      FUN_10093f80(uVar2,param_2,1);
      uVar2 = FUN_10105684(auStack_148);
      iVar1 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return;
}



// Function: FUN_100941d4 at 100941d4
// Size: 220 bytes

void FUN_100941d4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_148 [316];
  
  FUN_100bfe54(param_1,param_2);
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x110));
  if (iVar1 == 0) {
    FUN_1010556c(auStack_148,*(undefined4 *)(param_1 + 8));
    uVar2 = FUN_10105660(auStack_148);
    iVar1 = FUN_100ebf44(auStack_148);
    while (iVar1 != 0) {
      FUN_10093f80(uVar2,param_2,0);
      uVar2 = FUN_10105684(auStack_148);
      iVar1 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return;
}



// Function: FUN_100942b0 at 100942b0
// Size: 36 bytes

void FUN_100942b0(void)

{
  FUN_100bf5e4();
  return;
}



// Function: FUN_100942d4 at 100942d4
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100942d4(void)

{
  FUN_100c1c8c(0x48000bb9,_DAT_48000ba9,0x28,0x60000000,&DAT_38800000);
  FUN_100c1c8c(0x8062fb30,_DAT_80010040,0x20,&DAT_30210038,&DAT_38800000);
  return;
}



// Function: FUN_1009433c at 1009433c
// Size: 492 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009433c(void)

{
  int *piVar1;
  int iVar2;
  
  _DAT_63830000 = 0;
  _DAT_419a0018 = 0;
  iVar2 = 0;
  if (0 < _DAT_93430000) {
    do {
      if (*(char *)(_DAT_4bffe775 + *(short *)(&DAT_2f090000 + iVar2 * 2) * 0x1e + 0xd28) == '\x03')
      {
        *(short *)(_DAT_419a0018 * 2 + 0x48000139) = *(short *)(&DAT_2f090000 + iVar2 * 2);
        _DAT_419a0018 = _DAT_419a0018 + 1;
      }
      else {
        *(undefined2 *)(&DAT_80410014 + _DAT_63830000 * 2) =
             *(undefined2 *)(&DAT_2f090000 + iVar2 * 2);
        _DAT_63830000 = _DAT_63830000 + 1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < _DAT_93430000);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x63617272);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8b0),(int)*(short *)(piVar1 + 0x20));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8d8),(int)_DAT_419a0018);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x840),1);
  }
  piVar1 = (int *)FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               0x67726f75);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8b0),(int)*(short *)(piVar1 + 0x20));
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x8d8),(int)_DAT_63830000);
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x840),1);
  }
  return;
}



// Function: FUN_10094528 at 10094528
// Size: 1560 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10094528(void)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8bc;
  undefined1 auStack_898 [256];
  undefined1 auStack_798 [256];
  undefined1 auStack_698 [256];
  undefined1 auStack_598 [256];
  short local_498 [2];
  undefined1 auStack_494 [80];
  undefined1 auStack_444 [256];
  undefined1 auStack_344 [256];
  undefined1 auStack_244 [256];
  undefined1 auStack_144 [256];
  
  if (_DAT_4e800020 != (int *)0x0) {
    iVar6 = *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    iVar7 = (int)*(short *)(_DAT_60000000 + iVar6);
    iVar5 = (int)*(short *)(_DAT_60000000 + iVar6 + 2);
    FUN_1002122c(iVar7,iVar5,local_498);
    iVar6 = FUN_1002be50(iVar7,iVar5);
    iVar5 = FUN_1002bf64(iVar7,iVar5,0xe,1);
    FUN_100b19f4(auStack_598,
                 _DAT_4bffe775 +
                 *(char *)(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16 + 10) *
                 0x14 + 0x224);
    FUN_10090e0c(_DAT_4e800020,0x6e616d65,auStack_598,1);
    iVar7 = FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),0x61726d30);
    if (iVar7 != 0) {
      FUN_10079ee8(iVar7,0x1c,(int)*(short *)(_DAT_4bffe775 + 0x110),1);
      FUN_1007a018(iVar7,1,0,0,1);
    }
    iVar8 = 0;
    iVar7 = 1;
    if (0 < local_498[0]) {
      do {
        if (*(int *)(&DAT_80410014 + iVar8 * 4) !=
            _DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16) {
          iVar1 = FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                               iVar7 + 0x61726d30);
          if (iVar1 != 0) {
            FUN_10079ee8(iVar1,(int)*(char *)(*(int *)(&DAT_80410014 + iVar8 * 4) + 4),
                         (int)*(short *)(_DAT_4bffe775 + 0x110),1);
            FUN_1007a018(iVar1,1,0,0,1);
          }
          iVar7 = (int)(short)((short)iVar7 + 1);
        }
        iVar8 = (int)(short)((short)iVar8 + 1);
      } while (iVar8 < local_498[0]);
    }
    for (; iVar7 < 8; iVar7 = (int)(short)((short)iVar7 + 1)) {
      iVar8 = FUN_10117884((int)_DAT_4e800020 + (int)*(short *)(*_DAT_4e800020 + 0x308),
                           iVar7 + 0x61726d30);
      if (iVar8 != 0) {
        FUN_10079ee8(iVar8,0xffffffff,(int)*(short *)(_DAT_4bffe775 + 0x110),1);
        FUN_1007a018(iVar8,1,0,0,1);
      }
    }
    uVar2 = FUN_1005f678(0x84,-1 < iVar6);
    FUN_100b19f4(auStack_698,uVar2);
    FUN_10090e0c(_DAT_4e800020,0x6e746974,auStack_698,1);
    uVar2 = FUN_1005f678(0x84,6);
    FUN_10001dd0(auStack_494,uVar2,_DAT_38800002 + 1,(int)**(short **)(local_8bc + -0x1274));
    FUN_100b19f4(auStack_798,auStack_494);
    FUN_10090e0c(_DAT_4e800020,0x6e756d62,auStack_798,1);
    iVar6 = _DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16;
    sVar3 = FUN_100abe94();
    iVar6 = (int)(short)(*(char *)(iVar6 + 8) + sVar3);
    if (9 < iVar6) {
      iVar6 = 9;
    }
    sVar4 = FUN_100abf8c(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    sVar3 = *(short *)(iVar6 * 2 + *(int *)(local_8bc + -0x1270));
    FUN_100b19f4(auStack_898,_DAT_4bffe775 + iVar5 * 0x42 + 0x1608);
    FUN_10090e0c(_DAT_4e800020,0x6e656172,auStack_898,1);
    uVar2 = FUN_100abe94(_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    FUN_10001dd0(auStack_494,*(undefined4 *)(local_8bc + -0x127c),uVar2);
    FUN_100b19f4(auStack_444,auStack_494);
    FUN_10090e0c(_DAT_4e800020,0x62617474,auStack_444,1);
    iVar6 = *(int *)(local_8bc + -0x127c);
    FUN_10001dd0(auStack_494,iVar6 + 4,(int)(short)(sVar3 + sVar4));
    FUN_100b19f4(auStack_344,auStack_494);
    FUN_10090e0c(_DAT_4e800020,0x636f6d6d,auStack_344,1);
    FUN_10001dd0(auStack_494,iVar6 + 8,
                 (*(uint *)(_DAT_4bffe775 +
                            *(char *)(_DAT_60000000 +
                                      *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16 + 10) +
                           0x5e4) >> 0x18 & 3) + 1);
    FUN_100b19f4(auStack_244,auStack_494);
    FUN_10090e0c(_DAT_4e800020,0x6c657665,auStack_244,1);
    FUN_10001dd0(auStack_494,iVar6 + 0xc,
                 *(uint *)(_DAT_4bffe775 +
                           *(char *)(_DAT_60000000 +
                                     *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16 + 10) + 0x5e4
                          ) >> 0x1a);
    FUN_100b19f4(auStack_144,auStack_494);
    FUN_10090e0c(_DAT_4e800020,0x65787065,auStack_144,1);
    FUN_1003aeb0(6,0,0,_DAT_60000000 + *(short *)(_DAT_38800002 * 2 + 0x612c0000) * 0x16);
    FUN_1009433c();
  }
  return;
}



