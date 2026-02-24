// Warlords II - Decompiled PPC Code
// Chunk 7 (functions 3500-3999)
// Decompiled by Ghidra 12.0.3

// Function: FUN_100dd708 at 100dd708
// Size: 40 bytes

void FUN_100dd708(int param_1)

{
  FUN_10000f60((int)*(short *)(param_1 + 0x62));
  return;
}



// Function: FUN_100dd730 at 100dd730
// Size: 56 bytes

void FUN_100dd730(int param_1,undefined4 param_2,short param_3)

{
  FUN_10001710((int)*(short *)(param_1 + 0x62),(int)param_3,param_2);
  return;
}



// Function: FUN_100dd768 at 100dd768
// Size: 160 bytes

void FUN_100dd768(int param_1,int param_2)

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
  *(undefined1 **)(param_2 + 0x12) = auStack_50;
  *(undefined2 *)(param_2 + 0x16) = *(undefined2 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
  FUN_10002e20(param_2);
  *(undefined4 *)(param_2 + 0x12) = 0;
  return;
}



// Function: FUN_100dd808 at 100dd808
// Size: 68 bytes

void FUN_100dd808(int param_1,byte *param_2)

{
  FUN_10002340(param_2,param_1 + 10,*param_2 + 1);
  return;
}



// Function: FUN_100dd84c at 100dd84c
// Size: 128 bytes

int FUN_100dd84c(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_80 [92];
  undefined1 local_24;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),auStack_80);
  if (iVar1 == 0) {
    local_24 = param_2;
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x278) + (int)param_1,auStack_80);
  }
  return iVar1;
}



// Function: FUN_100dd8e0 at 100dd8e0
// Size: 48 bytes

void FUN_100dd8e0(int param_1)

{
  FUN_100014e8((int)*(short *)(param_1 + 100));
  FUN_10000678();
  return;
}



// Function: FUN_100dd910 at 100dd910
// Size: 88 bytes

int FUN_100dd910(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100014b8();
  iVar2 = (int)*(short *)(param_1 + 100);
  if ((iVar1 != iVar2) && (iVar2 != -0x7ffe)) {
    FUN_10000318(iVar2);
  }
  return iVar1;
}



// Function: FUN_100dd968 at 100dd968
// Size: 52 bytes

void FUN_100dd968(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10002688((int)*(short *)(param_1 + 0x62),param_3,param_2);
  return;
}



// Function: FUN_100dd99c at 100dd99c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dd99c(void)

{
  FUN_100c1c8c(0x63e40000,_DAT_63a50000,0x68,0x4beec08d,0x90c30020);
  return;
}



// Function: FUN_100dd9e0 at 100dd9e0
// Size: 124 bytes

undefined4 * FUN_100dd9e0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x144), param_1 != (undefined4 *)0x0)) {
    FUN_100d62f4(param_1);
    *param_1 = 0x7f9de011;
    param_1[0x4f] = 0;
    param_1[0x50] = 0x20202020;
  }
  return param_1;
}



// Function: FUN_100dda5c at 100dda5c
// Size: 40 bytes

void FUN_100dda5c(void)

{
  FUN_100dd9e0(0);
  return;
}



// Function: FUN_100dda84 at 100dda84
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dda84(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100d63d4(param_1);
  param_1[0x50] = param_3;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_2 = FUN_10117884((int)*(short *)(*param_1 + 0x348) + (int)param_1,10);
    }
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),param_2);
    param_1[0x4f] = iVar1;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100ddb80 at 100ddb80
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ddb80(void)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x370));
  return;
}



// Function: FUN_100ddbbc at 100ddbbc
// Size: 84 bytes

undefined4 FUN_100ddbbc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100df14c(0);
  FUN_100df1f8(uVar1,param_1,param_2);
  return uVar1;
}



// Function: FUN_100ddc10 at 100ddc10
// Size: 68 bytes

void FUN_100ddc10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x13c));
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  FUN_100d64bc(param_1);
  return;
}



// Function: FUN_100ddc54 at 100ddc54
// Size: 56 bytes

void FUN_100ddc54(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x13c) + (int)*(short *)(**(int **)(param_1 + 0x13c) + 0xa8)
              );
  return;
}



// Function: FUN_100ddc8c at 100ddc8c
// Size: 292 bytes

void FUN_100ddc8c(int param_1,short param_2,short param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_220 [256];
  undefined1 local_120 [260];
  
  local_120[0] = 0;
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x13c) +
                       (int)*(short *)(**(int **)(param_1 + 0x13c) + 0x110),param_4);
  if (iVar1 == -0x4e22) {
    FUN_100012d8(param_1 + 0x20,local_120,*(byte *)(param_1 + 0x20) + 1);
    FUN_100009d8(auStack_220,(int)param_2,(int)param_3);
    uVar2 = FUN_100b1c84(&DAT_7c0803a6);
    uVar3 = FUN_100b1c84(&DAT_7c0803a6);
    FUN_100009f0(local_120,auStack_220,uVar3,uVar2);
    iVar1 = FUN_100d8c9c(0x85,0);
    if (iVar1 == 2) {
      FUN_100db158(0,0x820000);
    }
  }
  else if ((iVar1 != 0) && (param_4 != '\0')) {
    FUN_100db158(iVar1,0);
  }
  return;
}



// Function: FUN_100dddb0 at 100dddb0
// Size: 504 bytes

void FUN_100dddb0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_23c;
  byte local_218 [256];
  byte local_118 [260];
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x4b) != '\0') {
      *param_3 = *param_3 + 0x78;
    }
  }
  else {
    local_118[0] = 0;
    local_218[0] = 0;
    FUN_10117884(**(int **)(local_23c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_23c + -0xedc) + 0x530),local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c8),local_218);
    uVar3 = (uint)local_218[0];
    if ((int)((uVar3 - 1) + (uint)(uVar3 != 0)) < 0) {
      uVar3 = (uint)local_118[0];
      if (-1 < (int)((uVar3 - 1) + (uint)(uVar3 != 0))) {
        *param_4 = uVar3 + *param_4 + 0x19;
      }
    }
    else {
      *param_4 = *param_4 + uVar3 + 0x19;
    }
    if ((*(char *)(param_1 + 0x4b) != '\0') && (param_1[0x4c] != 0)) {
      iVar1 = FUN_10001c20(param_1[0x4c]);
      *param_4 = *param_4 + iVar1 + 0x18;
    }
    if ((*(char *)((int)param_1 + 0x12d) != '\0') &&
       (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f0)), iVar1 != 0)) {
      piVar2 = (int *)FUN_100fb0a4(0);
      FUN_100fb140();
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x1f8),iVar1,0);
      iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8));
      *param_4 = *param_4 + iVar1 + 0x18;
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
    }
  }
  return;
}



// Function: FUN_100ddfa8 at 100ddfa8
// Size: 136 bytes

void FUN_100ddfa8(int *param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + 0x4b) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x370) + (int)param_1,param_2,param_3);
  }
  if (*(char *)((int)param_1 + 0x12d) != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x378) + (int)param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_100de030 at 100de030
// Size: 344 bytes

void FUN_100de030(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_18 [2];
  
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x13c) +
                       (int)*(short *)(**(int **)(param_1 + 0x13c) + 0x118));
  if (iVar1 != 0) {
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
    if (iVar1 == 0) {
      local_18[0] = 0x78;
      if (*(int *)(param_1 + 0x130) == 0) {
        uVar4 = FUN_100f15e0(0x78);
        *(undefined4 *)(param_1 + 0x130) = uVar4;
      }
      uVar4 = FUN_100ef9b8(*(undefined4 *)(param_1 + 0x130));
      FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x260),
                   **(undefined4 **)(param_1 + 0x130),local_18);
      FUN_100db2f4();
      FUN_10001b60(*(undefined4 *)(param_1 + 0x130),uVar4);
    }
    else {
      puVar2 = (undefined4 *)FUN_10001728(0x50524e54,1);
      if (puVar2 != (undefined4 *)0x0) {
        if (*(int *)(param_1 + 0x130) == 0) {
          FUN_10002ce8(puVar2);
          *(undefined4 **)(param_1 + 0x130) = puVar2;
        }
        else {
          puVar3 = *(undefined4 **)(param_1 + 0x130);
          uVar4 = FUN_10001c20();
          FUN_10002340(*puVar2,*puVar3,uVar4);
          FUN_10001c98(puVar2);
        }
      }
    }
  }
  return;
}



// Function: FUN_100de188 at 100de188
// Size: 404 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de188(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_144;
  int *local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = FUN_10003558(0x44455347,1);
  if (((iVar1 != 0) && (param_3 == '\0')) &&
     (iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240)), iVar2 != 0)) {
    local_140 = (int *)0x0;
    local_144 = 0;
    local_140 = (int *)FUN_100fab98(0);
    FUN_100fac48(local_140,iVar1,10);
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = _DAT_41820010;
    _DAT_41820010 = auStack_13c;
    iVar2 = FUN_10000090(auStack_13c);
    if (iVar2 == 0) {
      iVar2 = FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x160),&local_144);
      if (iVar2 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f8),local_144);
      }
      local_140 = (int *)FUN_100f57c8(local_140);
      FUN_10001c98(iVar1);
      _DAT_41820010 = local_34;
    }
    else {
      local_144 = FUN_100f57c8(local_144);
      local_140 = (int *)FUN_100f57c8(local_140);
      FUN_10001c98(iVar1);
      FUN_100db158((int)local_3c,local_38);
    }
  }
  return;
}



// Function: FUN_100de320 at 100de320
// Size: 180 bytes

void FUN_100de320(int *param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x388),param_2,param_3);
  if ((*(char *)(param_1 + 0x4b) != '\0') && (param_1[0x4c] != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x390) + (int)param_1,param_2,param_3);
  }
  if (*(char *)((int)param_1 + 0x12d) != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x398),param_2,param_3);
  }
  return;
}



// Function: FUN_100de3d4 at 100de3d4
// Size: 656 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de3d4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_484;
  byte local_458 [256];
  byte local_358 [256];
  undefined1 auStack_258 [256];
  short local_158;
  undefined4 local_154;
  undefined1 *local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
  if (iVar1 != 0) {
    local_358[0] = 0;
    local_458[0] = 0;
    FUN_10117884(**(int **)(local_484 + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_484 + -0xedc) + 0x530),local_358);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c8),local_458);
    if ((int)((local_458[0] - 1) + (uint)(local_458[0] != 0)) < 0) {
      if (-1 < (int)((local_358[0] - 1) + (uint)(local_358[0] != 0))) {
        uVar2 = FUN_100f1574(1);
        FUN_100b1c84(local_358);
        uVar3 = FUN_10001ae8();
        FUN_100f1574(uVar2);
        FUN_100db26c(uVar3);
        local_40 = 0;
        local_3c = 0;
        local_34 = 0;
        local_30 = 0;
        local_38 = _DAT_41820010;
        _DAT_41820010 = auStack_140;
        iVar1 = FUN_10000090(auStack_140);
        if (iVar1 == 0) {
          uVar2 = FUN_100b1c84(&DAT_7c0803a6);
          FUN_10002568(uVar3,0x53545220,0xffffbff4,uVar2);
          FUN_100db328();
          _DAT_41820010 = local_38;
        }
        else {
          FUN_100ef510(uVar3);
          FUN_100db158((int)local_40,local_3c);
        }
      }
    }
    else {
      uVar2 = FUN_100f1574(1);
      FUN_100b1c84(local_458);
      uVar3 = FUN_10001ae8();
      FUN_100f1574(uVar2);
      FUN_100db26c(uVar3);
      local_158 = 0;
      local_154 = 0;
      local_14c = 0;
      local_148 = 0;
      local_150 = _DAT_41820010;
      _DAT_41820010 = auStack_258;
      iVar1 = FUN_10000090(auStack_258);
      if (iVar1 == 0) {
        uVar2 = FUN_100b1c84(&DAT_7c0803a6);
        FUN_10002568(uVar3,0x53545220,0xffffbff3,uVar2);
        FUN_100db328();
        _DAT_41820010 = local_150;
      }
      else {
        FUN_100ef510(uVar3);
        FUN_100db158((int)local_158,local_154);
      }
    }
  }
  return;
}



// Function: FUN_100de664 at 100de664
// Size: 280 bytes

void FUN_100de664(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_44;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  if (*(int *)(param_1 + 0x130) != 0) {
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240));
    if (iVar1 == 0) {
      local_20 = 0x78;
      uVar2 = FUN_10000360(*(undefined4 *)(param_1 + 0x130));
      FUN_10002598(*(undefined4 *)(param_1 + 0x130));
      uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x2c0),
                           **(undefined4 **)(param_1 + 0x130),&local_20);
      FUN_10001b60(*(undefined4 *)(param_1 + 0x130),uVar2);
      FUN_100db2f4(uVar3);
    }
    else {
      local_1c[0] = *(undefined4 *)(param_1 + 0x130);
      FUN_100f16a0(local_1c);
      uVar2 = FUN_100b1c84(*(undefined4 *)(local_44 + -0xe4c));
      FUN_10002568(local_1c[0],0x50524e54,1,uVar2);
      FUN_100db328();
    }
  }
  return;
}



// Function: FUN_100de77c at 100de77c
// Size: 504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de77c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_27c;
  undefined1 auStack_250 [256];
  short local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2f0));
  if ((iVar1 != 0) &&
     (iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x240)), iVar2 != 0)) {
    uVar3 = FUN_100f15e0(0x32);
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_30 = _DAT_41820010;
    _DAT_41820010 = auStack_138;
    iVar2 = FUN_10000090(auStack_138);
    if (iVar2 == 0) {
      piVar4 = (int *)FUN_100fab98();
      FUN_100fac48(piVar4,uVar3,10);
      local_150 = 0;
      local_14c = 0;
      local_144 = 0;
      local_140 = 0;
      local_148 = _DAT_41820010;
      _DAT_41820010 = auStack_250;
      iVar2 = FUN_10000090(auStack_250);
      if (iVar2 == 0) {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x1f8),iVar1,0);
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x90));
        _DAT_41820010 = local_148;
      }
      else {
        FUN_100f57c8(piVar4);
        FUN_100db158((int)local_150,local_14c);
      }
      uVar5 = FUN_100b1c84(*(undefined4 *)(local_27c + -0xe4c));
      FUN_10002568(uVar3,0x44455347,1,uVar5);
      FUN_100db328();
      _DAT_41820010 = local_30;
    }
    else {
      FUN_100ef510(uVar3);
      FUN_100db158((int)local_38,local_34);
    }
  }
  return;
}



// Function: FUN_100de974 at 100de974
// Size: 56 bytes

void FUN_100de974(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 0x13c) + (int)*(short *)(**(int **)(param_1 + 0x13c) + 0xd8)
              );
  return;
}



// Function: FUN_100de9ac at 100de9ac
// Size: 180 bytes

void FUN_100de9ac(int *param_1,undefined1 param_2)

{
  byte local_50 [64];
  
  local_50[0] = 0;
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x138),local_50);
  FUN_100012d8(local_50,param_1 + 8,local_50[0] + 1);
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xb0),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),0);
  return;
}



// Function: FUN_100dea60 at 100dea60
// Size: 136 bytes

void FUN_100dea60(int *param_1,undefined4 param_2)

{
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xb0),0);
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x130),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),1);
  return;
}



// Function: FUN_100deae8 at 100deae8
// Size: 456 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100deae8(int *param_1)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  int local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b0),0xfa,0xd,1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x238));
    iVar1 = FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x118));
    if (iVar1 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250));
    }
    else {
      FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xb0),0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),0);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    if (local_28 == -0x2b) {
      local_28 = -0x4e21;
    }
    if (local_24 == 0) {
      FUN_100012d8(param_1 + 8,&DAT_609e0000,*(byte *)(param_1 + 8) + 1);
    }
    FUN_100db22c((int)local_28,local_24,0x820003);
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100decb0 at 100decb0
// Size: 292 bytes

void FUN_100decb0(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0x118));
  if ((iVar1 == 0) || ((param_2 != 0x1e && (param_2 != 0x1f)))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  cVar2 = ('!' - ((0x21 < param_2) + '!')) +
          (0x20 < param_2 && (uint)(0x21 < param_2) <= param_2 - 0x21);
  if ((iVar1 == 0) && (cVar2 == '\0')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b0),0xfa,0xc,0);
  }
  if ((*(char *)((int)param_1 + 0x135) != '\0') || (cVar2 == '\0')) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x228));
  }
  FUN_10117884(param_1[0x4f] + (int)*(short *)(*(int *)param_1[0x4f] + 0xf8),param_2,iVar1,iVar3,
               cVar2);
  return;
}



// Function: FUN_100dedd4 at 100dedd4
// Size: 144 bytes

void FUN_100dedd4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2a0),0);
  iVar1 = .glue::FUN_10115b60(param_1 + 8,param_2,0,1);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x318) + (int)param_1,param_2);
  }
  return;
}



// Function: FUN_100dee64 at 100dee64
// Size: 284 bytes

void FUN_100dee64(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5
                 ,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 local_64;
  
  *param_5 = 0xe865;
  uVar1 = FUN_100b0384(param_6);
  FUN_10001098(uVar1,0xffffffff,0xffffffff);
  if ((param_2 == 0x1e) || (param_2 == 0x20)) {
    iVar2 = 1;
  }
  else if (param_2 == 0x21) {
    iVar2 = 2;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    FUN_100b1d90(param_3,*(int *)(local_64 + -0x9a0) + 0x14);
  }
  else {
    FUN_100009d8(param_3,0xfa,iVar2);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x310),param_4);
  *param_7 = 0;
  *param_8 = **(undefined4 **)(local_64 + -0xe20);
  *in_stack_00000038 = 0;
  *in_stack_0000003c = 0;
  *in_stack_00000040 = 0;
  return;
}



// Function: FUN_100df03c at 100df03c
// Size: 156 bytes

void FUN_100df03c(int param_1,byte *param_2)

{
  byte local_50;
  undefined1 auStack_4f [67];
  
  FUN_100d7318(param_1,param_2);
  if (*param_2 < 0x40) {
    local_50 = *param_2;
  }
  else {
    local_50 = 0x3f;
  }
  FUN_100012d8(param_2 + 1,auStack_4f);
  FUN_10117884((int)*(int **)(param_1 + 0x13c) +
               (int)*(short *)(**(int **)(param_1 + 0x13c) + 0x140),&local_50);
  return;
}



// Function: FUN_100df0d8 at 100df0d8
// Size: 48 bytes

void FUN_100df0d8(undefined4 param_1,undefined4 param_2)

{
  FUN_100b1d90(param_2,&DAT_8041002c);
  return;
}



// Function: FUN_100df108 at 100df108
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df108(void)

{
  FUN_100c1c8c(&DAT_80410014,_DAT_7f7fe814,0x144,0x80de000c,&DAT_7c0803a6);
  return;
}



// Function: FUN_100df14c at 100df14c
// Size: 132 bytes

undefined4 * FUN_100df14c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x10), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_41820044;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 1;
  }
  return param_1;
}



// Function: FUN_100df1d0 at 100df1d0
// Size: 40 bytes

void FUN_100df1d0(void)

{
  FUN_100df14c(0);
  return;
}



// Function: FUN_100df1f8 at 100df1f8
// Size: 68 bytes

void FUN_100df1f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100f5274(param_1);
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Function: FUN_100df23c at 100df23c
// Size: 124 bytes

void FUN_100df23c(int *param_1)

{
  if (param_1[2] != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1);
    FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x90));
    param_1[2] = 0;
  }
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100df2b8 at 100df2b8
// Size: 56 bytes

void FUN_100df2b8(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x358));
  return;
}



// Function: FUN_100df2f0 at 100df2f0
// Size: 76 bytes

undefined4 FUN_100df2f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x220));
  }
  return uVar1;
}



// Function: FUN_100df33c at 100df33c
// Size: 72 bytes

void FUN_100df33c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0xd8));
  }
  return;
}



// Function: FUN_100df384 at 100df384
// Size: 128 bytes

void FUN_100df384(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x360),param_1[2],param_2,param_3);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120));
  if (iVar1 != 0) {
    *param_3 = *param_3 + 0x11e;
  }
  return;
}



// Function: FUN_100df404 at 100df404
// Size: 76 bytes

void FUN_100df404(int param_1,undefined1 param_2)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x368),
               *(undefined4 *)(param_1 + 8),param_2);
  return;
}



// Function: FUN_100df450 at 100df450
// Size: 60 bytes

void FUN_100df450(int param_1,undefined4 param_2,undefined1 param_3)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x380),
               param_2,param_3);
  return;
}



// Function: FUN_100df48c at 100df48c
// Size: 196 bytes

int FUN_100df48c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_90 [32];
  int local_70;
  int local_44;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x170),auStack_90);
    if (iVar1 == 0) {
      if ((param_2 == '\0') || (local_70 == *(int *)(*(int *)(param_1 + 8) + 0x50))) {
        iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                             (int)*(short *)(**(int **)(param_1 + 8) + 400));
        if (local_44 != iVar2) {
          iVar1 = -0x4e22;
        }
      }
      else {
        iVar1 = -0x4e24;
      }
    }
  }
  return iVar1;
}



// Function: FUN_100df560 at 100df560
// Size: 92 bytes

void FUN_100df560(int *param_1,int param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  FUN_100f57c8(param_1[2]);
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// Function: FUN_100df5bc at 100df5bc
// Size: 72 bytes

void FUN_100df5bc(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x198));
  }
  return;
}



// Function: FUN_100df604 at 100df604
// Size: 176 bytes

undefined4 FUN_100df604(int param_1,undefined4 param_2,char param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x50);
    *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_3 != '\0') {
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 8) +
                           (int)*(short *)(**(int **)(param_1 + 8) + 0x140),param_4);
      if (iVar2 == 0) {
        uVar1 = 1;
      }
    }
    *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x50);
    *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x54);
  }
  return uVar1;
}



// Function: FUN_100df6b4 at 100df6b4
// Size: 380 bytes

/* WARNING: Removing unreachable block (ram,0x100df7d8) */

void FUN_100df6b4(int param_1,byte *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  undefined **local_19c;
  uint local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  byte local_134;
  undefined1 auStack_133 [255];
  
  local_134 = 0;
  piVar4 = *(int **)(param_1 + 8);
  ppuVar1 = &.TVect::OCECToRString;
  if (piVar4 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar4 + 0x198) + (int)piVar4,&local_134);
    ppuVar1 = local_19c;
  }
  if ((int)((local_134 - 1) + (uint)(local_134 != 0)) < 0) {
    FUN_10117884((int)*(int **)ppuVar1[-0x3b7] + (int)*(short *)(**(int **)ppuVar1[-0x3b7] + 0x530),
                 &local_134);
  }
  bVar3 = local_134;
  if (0x3f < local_134) {
    bVar3 = 0x3f;
  }
  local_174 = CONCAT13(bVar3,local_174._1_3_);
  FUN_100012d8(auStack_133,(int)&local_174 + 1);
  *(undefined4 *)param_2 = local_174;
  *(undefined4 *)(param_2 + 4) = uStack_170;
  *(undefined4 *)(param_2 + 8) = uStack_16c;
  *(undefined4 *)(param_2 + 0xc) = uStack_168;
  *(undefined4 *)(param_2 + 0x10) = uStack_164;
  *(undefined4 *)(param_2 + 0x14) = uStack_160;
  *(undefined4 *)(param_2 + 0x18) = uStack_15c;
  *(undefined4 *)(param_2 + 0x1c) = uStack_158;
  *(undefined4 *)(param_2 + 0x20) = local_154;
  *(undefined4 *)(param_2 + 0x24) = uStack_150;
  *(undefined4 *)(param_2 + 0x28) = uStack_14c;
  *(undefined4 *)(param_2 + 0x2c) = uStack_148;
  *(undefined4 *)(param_2 + 0x30) = uStack_144;
  *(undefined4 *)(param_2 + 0x34) = uStack_140;
  *(undefined4 *)(param_2 + 0x38) = uStack_13c;
  *(undefined4 *)(param_2 + 0x3c) = uStack_138;
  if (0x13 < *param_2) {
    *param_2 = 0x13;
  }
  FUN_10001908(&local_178);
  uVar2 = FUN_10001a88();
  FUN_10000ac8(local_178 ^ uVar2 >> 0x10,&local_134);
  FUN_100b20a8(param_2,&local_134);
  if (0x1f < *param_2) {
    *param_2 = 0x1f;
  }
  return;
}



// Function: FUN_100df830 at 100df830
// Size: 76 bytes

undefined4 FUN_100df830(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 8) +
                         (int)*(short *)(**(int **)(param_1 + 8) + 0x240));
  }
  return uVar1;
}



// Function: FUN_100df87c at 100df87c
// Size: 360 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df87c(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1[2] != 0) {
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = _DAT_41820010;
    _DAT_41820010 = auStack_130;
    iVar1 = FUN_10000090(auStack_130);
    if (iVar1 == 0) {
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x118));
      FUN_100db2f4();
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x288),0,1);
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2);
      _DAT_41820010 = local_28;
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
      FUN_100db158((int)local_30,local_2c);
    }
    FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0xe0));
    FUN_100db2f4();
    FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x250));
  }
  return;
}



// Function: FUN_100df9e4 at 100df9e4
// Size: 752 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100df9e4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack0000001c;
  int local_2f4;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  short local_2b4 [2];
  char local_2b0 [6];
  undefined1 auStack_2aa [82];
  undefined1 auStack_258 [256];
  undefined1 auStack_158 [8];
  undefined1 *local_150;
  undefined1 local_14c [256];
  undefined1 auStack_4c [12];
  
  local_14c[0] = 0;
  uStack0000001c = param_2;
  FUN_100b02d0(auStack_158);
  FUN_100b19f4(auStack_258,0x7cdd3024);
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x3a8),
               uStack0000001c,local_14c,auStack_258,local_2b4,auStack_158,&local_2b8,&local_2bc);
  FUN_100ef088(0xfffffffe,**(undefined4 **)(local_2f4 + -0xe48),
               **(undefined4 **)(local_2f4 + -0xed4));
  FUN_100db2f4();
  if (local_150 == (undefined1 *)0x0) {
    local_150 = (undefined1 *)&stack0x0000001c;
  }
  FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1c8),1);
  uVar1 = FUN_10000a98(local_2b8,4000,1);
  uVar2 = FUN_10000a98(local_2bc,0x3fd0,1);
  uVar3 = FUN_10000a98(local_2c4,0x36c0,1);
  puVar4 = (undefined4 *)FUN_100b0368(auStack_4c,auStack_158);
  uVar5 = FUN_100b1c84(auStack_258);
  uVar6 = FUN_100b1c84(local_14c);
  FUN_10000cc0(uVar6,uVar5,local_2b0,(int)local_2b4[0],*puVar4,uVar1,uVar2,local_2c0);
  FUN_100ef5f0(uVar1);
  FUN_100ef5f0(uVar2);
  FUN_100ef5f0(uVar3);
  FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1f0),1);
  if (local_2b0[0] == '\0') {
    FUN_100db158(0,0x820000);
  }
  else {
    FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0xa8),auStack_2aa);
    piVar7 = (int *)FUN_10117884(**(int **)(local_2f4 + -0xedc) +
                                 (int)*(short *)(*(int *)**(int **)(local_2f4 + -0xedc) + 0x358),
                                 param_4);
    if (piVar7 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar7 + 0x2b0) + (int)piVar7,uStack0000001c,
                   *(undefined4 *)(param_1 + 4));
    }
    iVar8 = FUN_10117884((int)param_4 + (int)*(short *)(*param_4 + 0x110));
    if ((iVar8 != 0) && (iVar8 != -0x2b)) {
      FUN_100db158(iVar8,0);
    }
  }
  return;
}



// Function: FUN_100dfcd4 at 100dfcd4
// Size: 1520 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dfcd4(int *param_1,undefined4 param_2,char param_3,undefined1 param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar9;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cStack00000023;
  char cStack0000002b;
  int local_294;
  undefined1 local_270;
  undefined4 local_26c;
  int local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_25c [256];
  undefined1 auStack_15c [256];
  short local_5c;
  int local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_44;
  
  local_44 = (int *)0x0;
  local_260 = 0;
  local_264 = 0;
  local_25c[0] = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_54 = _DAT_41820010;
  cStack00000023 = param_3;
  cStack0000002b = param_5;
  _DAT_41820010 = auStack_15c;
  iVar2 = FUN_10000090(auStack_15c);
  if (iVar2 == 0) {
    uVar9 = FUN_100f5754(0);
    local_44 = (int *)FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x348),param_2)
    ;
    FUN_100f5754(uVar9);
    if (cStack00000023 == '\0') {
      FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 200),param_1[2]);
    }
    else {
      FUN_10117884((int)*(short *)(*param_1 + 0xf0) + (int)param_1,param_2,cStack0000002b,local_44);
    }
    FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x2a0),3,3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),local_44,param_2,&stack0x0000002b);
    FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1e0),&local_268);
    FUN_100db2f4();
    local_268 = local_268 + -1;
    FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1d8),&local_26c);
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0),&local_260,&local_264);
    iVar2 = FUN_100efcc0(local_264,local_26c);
    iVar3 = FUN_100efcc0(local_260,local_26c);
    if (local_268 < iVar2 + iVar3) {
      iVar4 = FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1a8),&local_260,&local_264)
      ;
      bVar1 = false;
      if (iVar4 == 0) {
        iVar4 = FUN_100efcc0(local_264,local_26c);
        iVar5 = FUN_100efcc0(local_260,local_26c);
        if (iVar2 + iVar3 <= iVar5 + iVar4 + local_268) {
          if ((*(char *)((int)param_1 + 0xd) == '\x01') || (*(char *)((int)param_1 + 0xd) == '\x03')
             ) {
            FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x198),local_25c);
            uVar6 = FUN_100b1c84(&DAT_7c0803a6);
            uVar7 = FUN_100b1c84(&DAT_7c0803a6);
            uVar8 = FUN_100b1c84(&DAT_7c0803a6);
            FUN_100009f0(local_25c,uVar8,uVar7,uVar6);
            iVar2 = FUN_100d8c9c(0x86,0);
            if (iVar2 == 1) {
              bVar1 = true;
            }
            else {
              FUN_100db158(0,0x820000);
            }
          }
          else if (*(char *)((int)param_1 + 0xd) == '\x02') {
            bVar1 = true;
          }
        }
      }
      else if (iVar4 != -0x2b) {
        FUN_100db158(iVar4,0);
      }
      if (bVar1) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),param_2,cStack0000002b,param_4
                     ,local_44);
      }
      else {
        FUN_100db158(0xffffffde,0);
      }
    }
    else if ((*(char *)((int)param_1 + 0xd) == '\x01') || (*(char *)((int)param_1 + 0xd) == '\0')) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),param_2,cStack0000002b,param_4,
                   local_44);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100),param_2,cStack0000002b,param_4,
                   local_44);
    }
    if (cStack0000002b == '\0') {
      FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x198),local_25c);
      FUN_10117884(param_1[1] + (int)*(short *)(*(int *)param_1[1] + 0x3a0),local_25c);
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 200),local_44);
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x250));
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x120));
      FUN_100db2f4();
    }
    _DAT_41820010 = local_54;
  }
  else {
    FUN_100f5754(local_270);
    if (local_44 != (int *)0x0) {
      FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1d0));
      if (local_58 == 0) {
        FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x198),
                     *(undefined4 *)(local_294 + -0xe2c));
      }
      local_44 = (int *)FUN_100f57c8(local_44);
    }
    if (cStack00000023 == '\0') {
      uVar6 = 0x820002;
    }
    else if (cStack0000002b == '\0') {
      uVar6 = 0x820007;
    }
    else {
      uVar6 = 0x820008;
    }
    FUN_100db22c((int)local_5c,local_58,uVar6);
    FUN_100db158((int)local_5c,local_58);
  }
  FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x1d0));
  FUN_10117884((int)local_44 + (int)*(short *)(*local_44 + 0x90));
  return;
}



// Function: FUN_100e02c4 at 100e02c4
// Size: 560 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e02c4(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,int *param_5
                 )

{
  char cVar2;
  int iVar1;
  undefined1 uStack00000023;
  int *piStack00000028;
  undefined1 auStack_1a4 [112];
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uStack00000023 = param_3;
  piStack00000028 = param_5;
  cVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,param_4,auStack_1a4);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  iVar1 = FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x110));
  if ((iVar1 != 0) && (iVar1 != -0x2b)) {
    FUN_100db158(iVar1,0);
  }
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 == 0) {
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xf8));
    FUN_100db2f4();
    if (cVar2 != '\0') {
      FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x278),auStack_1a4);
      FUN_100db2f4();
    }
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x118));
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),piStack00000028,uStack00000023);
    _DAT_41820010 = local_2c;
  }
  else {
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xd8));
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x110));
    FUN_100db158((int)local_34,local_30);
  }
  FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xd8));
  FUN_100db2f4();
  return;
}



// Function: FUN_100e053c at 100e053c
// Size: 1240 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e053c(int *param_1,undefined4 param_2,char param_3,char param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  char cStack00000023;
  int *piStack00000028;
  uint local_3a8;
  undefined1 auStack_3a4 [64];
  undefined4 local_364;
  short local_360 [2];
  undefined1 auStack_35c [112];
  undefined1 auStack_2ec [30];
  byte local_2ce;
  undefined1 local_27c [64];
  short local_23c [3];
  byte local_236 [66];
  undefined1 auStack_1f4 [256];
  short local_f4;
  undefined4 local_f0;
  undefined1 *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_4c [2];
  
  puVar3 = &local_3a8;
  local_27c[0] = 0;
  cStack00000023 = param_3;
  piStack00000028 = param_5;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,param_4,auStack_35c);
  FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x178),local_23c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe8),local_27c);
  FUN_10002b08((int)local_23c[0],0x74656d70,1,local_360,&local_364);
  FUN_100db2f4();
  FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xd0),(int)local_360[0],
               local_364,local_27c);
  FUN_100db2f4();
  local_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_ec = _DAT_41820010;
  _DAT_41820010 = auStack_1f4;
  iVar2 = FUN_10000090(auStack_1f4);
  if (iVar2 == 0) {
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xf8));
    FUN_100db2f4();
    if (iVar1 != 0) {
      FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x278),auStack_35c);
      FUN_100db2f4();
    }
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x118));
    FUN_100db2f4();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),piStack00000028,cStack00000023);
    _DAT_41820010 = local_ec;
  }
  else {
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xd8));
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x110));
    FUN_100db158((int)local_f4,local_f0);
  }
  FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xd8));
  FUN_100db2f4();
  if (cStack00000023 == '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8));
  }
  local_ec = _DAT_41820010;
  _DAT_41820010 = auStack_1f4;
  iVar1 = FUN_10000090(auStack_1f4);
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 3) == '\0') || (param_4 == '\0')) {
      FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 600),local_23c);
      FUN_100db2f4();
    }
    else {
      FUN_100eed08(auStack_2ec,0x6c,0);
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x140),auStack_2ec);
      FUN_100db2f4();
      if ((local_2ce & 1) != 0) {
        FUN_100db2f4(0xffffffd3);
      }
      FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x200),param_1[2]);
      FUN_100db2f4();
      iVar1 = FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x110));
      if ((iVar1 != 0) && (iVar1 != -0x2b)) {
        FUN_100db158(iVar1,0);
      }
    }
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0xa8),local_23c);
    _DAT_41820010 = local_ec;
  }
  else {
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x110));
    if ((*(char *)(param_1 + 3) != '\0') && (cStack00000023 == '\0')) {
      FUN_10117884(param_1[2] + (int)*(short *)(*(int *)param_1[2] + 0x120));
    }
    local_3a8 = local_236[0] + 1;
    local_4c[0] = 0x40;
    if (0x3f < local_236[0] + 1) {
      puVar3 = local_4c;
    }
    FUN_100012d8(local_236,auStack_3a4,*puVar3);
    FUN_10117884((int)piStack00000028 + (int)*(short *)(*piStack00000028 + 0x298),auStack_3a4);
    FUN_100db158((int)local_f4,local_f0);
  }
  return;
}



// Function: FUN_100e0c0c at 100e0c0c
// Size: 72 bytes

void FUN_100e0c0c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x298));
  }
  return;
}



// Function: FUN_100e0c54 at 100e0c54
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0c54(void)

{
  FUN_100c1c8c(0x90de000c,_DAT_80fe0024,0x10,0x81870014,0x90c30020);
  return;
}



// Function: FUN_100e0c90 at 100e0c90
// Size: 8 bytes

undefined4 FUN_100e0c90(void)

{
  return 0x7c7e1814;
}



// Function: FUN_100e0ca0 at 100e0ca0
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100e0ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(200), param_1 != (undefined4 *)0x0)) {
    FUN_1010f054(param_1);
    *param_1 = 0x7d1df8ae;
    uVar1 = _DAT_7d080778;
    param_1[0x24] = _DAT_7d080774;
    param_1[0x25] = uVar1;
    puVar2 = (undefined4 *)FUN_100b057c(param_1 + 0x24,0);
    *puVar2 = _DAT_63e30000;
    *(undefined1 *)((int)param_1 + 0xb7) = 1;
    *(undefined1 *)((int)param_1 + 0xab) = 1;
    *(undefined1 *)((int)param_1 + 0xb6) = 1;
    *(undefined1 *)((int)param_1 + 0xb9) = 0;
  }
  return param_1;
}



// Function: FUN_100e0d4c at 100e0d4c
// Size: 40 bytes

void FUN_100e0d4c(void)

{
  FUN_100e0ca0(0);
  return;
}



// Function: FUN_100e0d80 at 100e0d80
// Size: 64 bytes

void FUN_100e0d80(int param_1)

{
  FUN_1011001c(param_1);
  *(undefined2 *)(*(int *)(param_1 + 0x80) + 0x6c) = 0x80;
  return;
}



// Function: FUN_100e0dc8 at 100e0dc8
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0dc8(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_10110c38();
  piVar1 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x330),0);
  if (((piVar1 != (int *)0x0) &&
      (piVar1 = (int *)FUN_10117884((int)*(short *)(*piVar1 + 0x768) + (int)piVar1),
      piVar1 != (int *)0x0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1), iVar2 != 0)) {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),piVar1);
    FUN_10117884((int)*(short *)(*piVar1 + 400) + (int)piVar1,1);
  }
  return;
}



// Function: FUN_100e0ea8 at 100e0ea8
// Size: 148 bytes

void FUN_100e0ea8(void)

{
  undefined1 auStack_108 [256];
  
  if (DAT_5504063e == '\0') {
    if (DAT_4bfde391 != '\0') {
      FUN_100e0c90();
      FUN_100e0ca0(0);
    }
    FUN_100b19f4(auStack_108,0xa8670020);
    FUN_100ed954(auStack_108,0x66776e64);
    DAT_5504063e = '\x01';
  }
  return;
}



// Function: FUN_100e0f3c at 100e0f3c
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0f3c(void)

{
  FUN_100c1c8c(0x7c7e1814,_DAT_4800094d,200,&DAT_80410014,0x33fb0001);
  return;
}



// Function: FUN_100e0f78 at 100e0f78
// Size: 272 bytes

void FUN_100e0f78(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puStack00000018;
  int local_50;
  int local_4c [3];
  int local_40 [4];
  undefined4 local_30;
  
  piVar3 = local_4c + 1;
  piVar1 = local_40 + 1;
  piVar4 = local_40 + 2;
  piVar2 = local_40 + 3;
  puStack00000018 = param_1;
  FUN_100b02d0(&local_30);
  local_40[1] = 0xffff8000;
  local_40[0] = *param_2;
  local_40[3] = 0x7fff;
  if (-0x8000 < *param_2) {
    piVar1 = local_40;
  }
  local_4c[2] = *piVar1;
  if (*piVar1 < 0x7fff) {
    piVar2 = local_4c + 2;
  }
  local_30 = CONCAT22((short)*piVar2,local_30._2_2_);
  local_4c[1] = 0xffff8000;
  local_4c[0] = param_2[1];
  local_40[2] = 0x7fff;
  if (-0x8000 < param_2[1]) {
    piVar3 = local_4c;
  }
  local_50 = *piVar3;
  if (*piVar3 < 0x7fff) {
    piVar4 = &local_50;
  }
  local_30 = CONCAT22((short)*piVar2,(short)*piVar4);
  *puStack00000018 = local_30;
  return;
}



// Function: FUN_100e1088 at 100e1088
// Size: 20 bytes

int FUN_100e1088(int param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 4;
}



// Function: FUN_100e109c at 100e109c
// Size: 20 bytes

int FUN_100e109c(int param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 4;
}



// Function: FUN_100e10b0 at 100e10b0
// Size: 72 bytes

int * FUN_100e10b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = iVar1 + iVar2;
  return param_1;
}



// Function: FUN_100e10f8 at 100e10f8
// Size: 72 bytes

int * FUN_100e10f8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = iVar1 - iVar2;
  return param_1;
}



// Function: FUN_100e1140 at 100e1140
// Size: 64 bytes

int * FUN_100e1140(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = -*param_2;
  param_1[1] = -iVar1;
  return param_1;
}



// Function: FUN_100e1180 at 100e1180
// Size: 36 bytes

void FUN_100e1180(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  return;
}



// Function: FUN_100e11a4 at 100e11a4
// Size: 36 bytes

void FUN_100e11a4(int *param_1,int *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}



// Function: FUN_100e11c8 at 100e11c8
// Size: 52 bytes

undefined4 FUN_100e11c8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e11fc at 100e11fc
// Size: 52 bytes

undefined4 FUN_100e11fc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100e1230 at 100e1230
// Size: 52 bytes

undefined4 FUN_100e1230(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 < *param_2) && (param_1[1] < param_2[1])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100e1264 at 100e1264
// Size: 84 bytes

void FUN_100e1264(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    *param_1 = *param_2;
  }
  if (param_2[2] < *param_1) {
    *param_1 = param_2[2];
  }
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[3] < param_1[1]) {
    param_1[1] = param_2[3];
  }
  return;
}



// Function: FUN_100e12b8 at 100e12b8
// Size: 400 bytes

void FUN_100e12b8(int *param_1,undefined2 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_70;
  int local_6c [3];
  int local_60;
  int local_5c [3];
  int local_50;
  int local_4c [3];
  int local_40;
  int local_3c [4];
  
  piVar8 = &local_70;
  piVar4 = local_6c + 1;
  piVar7 = &local_60;
  piVar3 = local_5c + 1;
  piVar6 = &local_50;
  piVar2 = local_4c + 1;
  piVar5 = &local_40;
  piVar1 = local_3c + 1;
  local_3c[2] = *param_1;
  local_3c[1] = 0xffff8000;
  if (-0x8000 < *param_1) {
    piVar1 = local_3c + 2;
  }
  local_3c[0] = *piVar1;
  local_40 = 0x7fff;
  if (*piVar1 < 0x7fff) {
    piVar5 = local_3c;
  }
  *param_2 = (short)*piVar5;
  local_4c[2] = param_1[1];
  local_4c[1] = 0xffff8000;
  if (-0x8000 < param_1[1]) {
    piVar2 = local_4c + 2;
  }
  local_4c[0] = *piVar2;
  local_50 = 0x7fff;
  if (*piVar2 < 0x7fff) {
    piVar6 = local_4c;
  }
  param_2[1] = (short)*piVar6;
  local_5c[2] = param_1[2];
  local_5c[1] = 0xffff8000;
  if (-0x8000 < param_1[2]) {
    piVar3 = local_5c + 2;
  }
  local_5c[0] = *piVar3;
  local_60 = 0x7fff;
  if (*piVar3 < 0x7fff) {
    piVar7 = local_5c;
  }
  param_2[2] = (short)*piVar7;
  local_6c[2] = param_1[3];
  local_6c[1] = 0xffff8000;
  if (-0x8000 < param_1[3]) {
    piVar4 = local_6c + 2;
  }
  local_6c[0] = *piVar4;
  local_70 = 0x7fff;
  if (*piVar4 < 0x7fff) {
    piVar8 = local_6c;
  }
  param_2[3] = (short)*piVar8;
  return;
}



// Function: FUN_100e1448 at 100e1448
// Size: 156 bytes

int * FUN_100e1448(int *param_1,short *param_2)

{
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_100f56e4(0x10);
    if (param_1 != (int *)0x0) {
      *param_1 = (int)*param_2;
      param_1[1] = (int)param_2[1];
      param_1[2] = (int)param_2[2];
      param_1[3] = (int)param_2[3];
    }
  }
  else {
    *param_1 = (int)*param_2;
    param_1[1] = (int)param_2[1];
    param_1[2] = (int)param_2[2];
    param_1[3] = (int)param_2[3];
  }
  return param_1;
}



// Function: FUN_100e14e4 at 100e14e4
// Size: 156 bytes

int * FUN_100e14e4(int *param_1,short *param_2)

{
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_100f56e4(0x10);
    if (param_1 != (int *)0x0) {
      *param_1 = (int)*param_2;
      param_1[1] = (int)param_2[1];
      param_1[2] = (int)param_2[2];
      param_1[3] = (int)param_2[3];
    }
  }
  else {
    *param_1 = (int)*param_2;
    param_1[1] = (int)param_2[1];
    param_1[2] = (int)param_2[2];
    param_1[3] = (int)param_2[3];
  }
  return param_1;
}



// Function: FUN_100e1580 at 100e1580
// Size: 20 bytes

int FUN_100e1580(int param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 8;
}



// Function: FUN_100e1594 at 100e1594
// Size: 20 bytes

int FUN_100e1594(int param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1;
  }
  return param_1 + 8;
}



// Function: FUN_100e15a8 at 100e15a8
// Size: 68 bytes

void FUN_100e15a8(int *param_1,int *param_2,int *param_3)

{
  *param_2 = *param_1 + *param_3;
  param_2[1] = param_1[1] + param_3[1];
  param_2[2] = param_1[2] + *param_3;
  param_2[3] = param_1[3] + param_3[1];
  return;
}



// Function: FUN_100e15ec at 100e15ec
// Size: 68 bytes

void FUN_100e15ec(int *param_1,int *param_2,int *param_3)

{
  *param_2 = *param_1 - *param_3;
  param_2[1] = param_1[1] - param_3[1];
  param_2[2] = param_1[2] - *param_3;
  param_2[3] = param_1[3] - param_3[1];
  return;
}



// Function: FUN_100e1630 at 100e1630
// Size: 68 bytes

void FUN_100e1630(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] + *param_2;
  param_1[3] = param_1[3] + param_2[1];
  return;
}



// Function: FUN_100e1674 at 100e1674
// Size: 68 bytes

void FUN_100e1674(int *param_1,int *param_2)

{
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}



// Function: FUN_100e16b8 at 100e16b8
// Size: 68 bytes

void FUN_100e16b8(int *param_1,int *param_2)

{
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + param_2[1];
  param_1[2] = param_1[2] - *param_2;
  param_1[3] = param_1[3] - param_2[1];
  return;
}



// Function: FUN_100e16fc at 100e16fc
// Size: 84 bytes

undefined4 FUN_100e16fc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100e1750 at 100e1750
// Size: 84 bytes

undefined4 FUN_100e1750(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e17a4 at 100e17a4
// Size: 52 bytes

undefined4 FUN_100e17a4(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[3] < param_1[1]) || (param_1[2] < *param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e17d8 at 100e17d8
// Size: 284 bytes

void FUN_100e17d8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  piVar5 = &local_30;
  piVar4 = &local_28;
  piVar3 = &local_20;
  piVar2 = &local_18;
  local_14[0] = *param_1;
  local_18 = *param_3;
  if (*param_3 < *param_1) {
    piVar2 = local_14;
  }
  *param_2 = *piVar2;
  local_1c = param_1[1];
  local_20 = param_3[1];
  if (param_3[1] < param_1[1]) {
    piVar3 = &local_1c;
  }
  param_2[1] = *piVar3;
  local_24 = param_1[2];
  local_28 = param_3[2];
  if (param_1[2] < param_3[2]) {
    piVar4 = &local_24;
  }
  param_2[2] = *piVar4;
  local_2c = param_1[3];
  local_30 = param_3[3];
  if (param_1[3] < param_3[3]) {
    piVar5 = &local_2c;
  }
  param_2[3] = *piVar5;
  iVar1 = FUN_100e17a4(param_2);
  if (iVar1 == 0) {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return;
}



// Function: FUN_100e18f4 at 100e18f4
// Size: 224 bytes

void FUN_100e18f4(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  piVar4 = &local_30;
  piVar3 = &local_28;
  piVar2 = &local_20;
  piVar1 = &local_18;
  local_14[0] = *param_1;
  local_18 = *param_3;
  if (*param_1 < *param_3) {
    piVar1 = local_14;
  }
  *param_2 = *piVar1;
  local_1c = param_1[1];
  local_20 = param_3[1];
  if (param_1[1] < param_3[1]) {
    piVar2 = &local_1c;
  }
  param_2[1] = *piVar2;
  local_24 = param_1[2];
  local_28 = param_3[2];
  if (param_3[2] < param_1[2]) {
    piVar3 = &local_24;
  }
  param_2[2] = *piVar3;
  local_2c = param_1[3];
  local_30 = param_3[3];
  if (param_3[3] < param_1[3]) {
    piVar4 = &local_2c;
  }
  param_2[3] = *piVar4;
  return;
}



// Function: FUN_100e19d4 at 100e19d4
// Size: 52 bytes

void FUN_100e19d4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_1[2] < iVar1) {
    *param_1 = param_1[2];
    param_1[2] = iVar1;
  }
  iVar1 = param_1[1];
  if (param_1[3] < iVar1) {
    param_1[1] = param_1[3];
    param_1[3] = iVar1;
  }
  return;
}



// Function: FUN_100e1a08 at 100e1a08
// Size: 52 bytes

undefined4 FUN_100e1a08(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[1] < param_1[3]) && (*param_1 < param_1[2])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e1a3c at 100e1a3c
// Size: 40 bytes

int FUN_100e1a3c(int *param_1,char param_2)

{
  if (param_2 == '\0') {
    return param_1[2] - *param_1;
  }
  return param_1[3] - param_1[1];
}



// Function: FUN_100e1a64 at 100e1a64
// Size: 72 bytes

int * FUN_100e1a64(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[3];
  iVar2 = param_2[1];
  *param_1 = param_2[2] - *param_2;
  param_1[1] = iVar1 - iVar2;
  return param_1;
}



// Function: FUN_100e1aac at 100e1aac
// Size: 76 bytes

undefined4 FUN_100e1aac(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_2 < *param_1) || (param_1[2] <= *param_2)) || (param_2[1] < param_1[1])) ||
     (param_1[3] <= param_2[1])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e1af8 at 100e1af8
// Size: 84 bytes

undefined4 FUN_100e1af8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_2 < *param_1) || (param_1[2] < param_2[2])) || (param_2[1] < param_1[1])) ||
     (param_1[3] < param_2[3])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e1b4c at 100e1b4c
// Size: 36 bytes

void FUN_100e1b4c(short *param_1,int *param_2)

{
  *param_2 = (int)*param_1;
  param_2[1] = (int)param_1[1];
  param_2[2] = (int)param_1[2];
  param_2[3] = (int)param_1[3];
  return;
}



// Function: FUN_100e1b78 at 100e1b78
// Size: 104 bytes

undefined4 * FUN_100e1b78(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x84), param_1 != (undefined4 *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = &DAT_4082000c;
  }
  return param_1;
}



// Function: FUN_100e1be0 at 100e1be0
// Size: 40 bytes

void FUN_100e1be0(void)

{
  FUN_100e1b78(0);
  return;
}



// Function: FUN_100e1c08 at 100e1c08
// Size: 64 bytes

void FUN_100e1c08(void)

{
  FUN_100c4548();
  return;
}



// Function: FUN_100e1c48 at 100e1c48
// Size: 344 bytes

int FUN_100e1c48(int param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (((param_2 != '\0') && (param_2 == '\x01')) && (param_6 != '\0')) {
    FUN_100e1140(auStack_38,*(int *)(param_1 + 0x40) + 0x3c);
    FUN_100e10f8(&local_40,*(int *)(param_1 + 0x40) + 0x88,*(int *)(param_1 + 0x40) + 0x3c);
    FUN_100e10f8(&local_48,param_3,param_5);
    local_30 = local_48;
    local_2c = local_44;
    local_28 = local_40;
    local_24 = local_3c;
    FUN_100e1264(auStack_38,&local_30);
    iVar1 = FUN_100e11c8(auStack_38,&DAT_41820018);
    if (iVar1 != 0) {
      FUN_10117884((int)*(int **)(param_1 + 0x40) +
                   (int)*(short *)(**(int **)(param_1 + 0x40) + 0x778),auStack_38,1);
      FUN_10117884((int)*(int **)(param_1 + 0x40) +
                   (int)*(short *)(**(int **)(param_1 + 0x40) + 0x4c8));
    }
    FUN_100e1180(param_5,auStack_38);
    uVar2 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = uVar2;
    uVar2 = param_5[1];
    *param_3 = *param_5;
    param_3[1] = uVar2;
  }
  return param_1;
}



// Function: FUN_100e1db0 at 100e1db0
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1db0(void)

{
  FUN_100c1c8c(&DAT_2c03ffff,_DAT_3860ffff,0x84,&DAT_48000010,&DAT_2c090000);
  return;
}



// Function: FUN_100e1dec at 100e1dec
// Size: 8 bytes

undefined4 FUN_100e1dec(void)

{
  return 0x4bffff80;
}



// Function: FUN_100e1df4 at 100e1df4
// Size: 168 bytes

undefined4 * FUN_100e1df4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa0), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = &DAT_63430000;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined2 *)((int)param_1 + 0x82) = 0;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined1 *)((int)param_1 + 0x8d) = 0;
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined2 *)((int)param_1 + 0x92) = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined1 *)((int)param_1 + 0x8e) = 1;
  }
  return param_1;
}



// Function: FUN_100e1e9c at 100e1e9c
// Size: 8 bytes

undefined1 * FUN_100e1e9c(void)

{
  return &DAT_80010058;
}



// Function: FUN_100e1ea4 at 100e1ea4
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100e1ea4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb8), param_1 != (undefined4 *)0x0)) {
    FUN_100e1df4(param_1);
    *param_1 = &DAT_30210050;
    uVar2 = _DAT_8062da50;
    uVar1 = _DAT_8062da4c;
    param_1[0x28] = _DAT_8062da48;
    param_1[0x29] = uVar1;
    param_1[0x2a] = uVar2;
    *(undefined2 *)(param_1 + 0x2b) = 0xffff;
    *(undefined2 *)((int)param_1 + 0xae) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)((int)param_1 + 0xb2) = 0;
    *(undefined2 *)(param_1 + 0x2d) = 0;
  }
  return param_1;
}



// Function: FUN_100e1f3c at 100e1f3c
// Size: 8 bytes

undefined1 * FUN_100e1f3c(void)

{
  return &DAT_7c0803a6;
}



// Function: FUN_100e1f44 at 100e1f44
// Size: 104 bytes

undefined4 * FUN_100e1f44(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xb8), param_1 != (undefined4 *)0x0)) {
    FUN_100e1ea4(param_1);
    *param_1 = 0xbb41ffe8;
  }
  return param_1;
}



// Function: FUN_100e1fac at 100e1fac
// Size: 368 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1fac(void)

{
  undefined1 auStack_310 [256];
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [260];
  
  if (DAT_4bfde391 != '\0') {
    FUN_100e1dec();
    FUN_100e1df4(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100e1e9c();
    FUN_100e1ea4(0);
  }
  if (DAT_4bfde391 != '\0') {
    FUN_100e1f3c();
    FUN_100e1f44(0);
  }
  FUN_100b19f4(auStack_110,0x339d008b);
  FUN_100ed954(auStack_110,0x67726964);
  FUN_100b19f4(auStack_210,0x339d0097);
  FUN_100ed954(auStack_210,0x74787467);
  FUN_100b19f4(auStack_310,0x339d00a7);
  FUN_100ed954(auStack_310,0x6c737467);
  _DAT_80410014 = FUN_100ed918();
  _DAT_2c030000 = FUN_100ed918();
  _DAT_8082da40 = FUN_100ed918();
  _DAT_80640002 = FUN_100ed918();
  _DAT_4082001c = FUN_100ed918();
  DAT_4e800020 = 1;
  return;
}



// Function: FUN_100e2124 at 100e2124
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100e2124(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1c), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = FUN_10116f74;
    param_1[6] = 0;
    *(undefined2 *)((int)param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined2 *)((int)param_1 + 0xe) = 0;
    param_1[4] = 0;
  }
  return param_1;
}



// Function: FUN_100e21b8 at 100e21b8
// Size: 40 bytes

void FUN_100e21b8(void)

{
  FUN_100e2124(0);
  return;
}



// Function: FUN_100e21e0 at 100e21e0
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e21e0(int *param_1)

{
  int iVar1;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100f5274(param_1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar1 = FUN_10000090(auStack_128);
  if (iVar1 == 0) {
    iVar1 = FUN_100f15e0(0);
    param_1[6] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100e2298 at 100e2298
// Size: 68 bytes

void FUN_100e2298(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100e22dc at 100e22dc
// Size: 532 bytes

void FUN_100e22dc(int *param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short local_30 [2];
  undefined4 local_2c;
  short local_28 [2];
  undefined1 auStack_24 [8];
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(int)param_2,local_28,
                       local_30,auStack_24);
  if (iVar2 != 0) {
    sVar4 = 1;
    if (0 < param_3) {
      do {
        param_1[4] = param_1[4] - (int)*(short *)(*(int *)param_1[6] + local_28[0] * 4 + 2);
        iVar2 = *(int *)param_1[6];
        *(short *)(iVar2 + local_28[0] * 4) = *(short *)(iVar2 + local_28[0] * 4) + -1;
        iVar2 = local_28[0] * 4;
        if (*(short *)(*(int *)param_1[6] + iVar2) < local_30[0]) {
          local_30[0] = 1;
          if (*(short *)(*(int *)param_1[6] + iVar2) == 0) {
            local_2c = FUN_100020b8((int *)param_1[6],iVar2,0,4,&local_2c,0);
            FUN_100db1ec();
            sVar1 = *(short *)(param_1 + 5);
            *(short *)(param_1 + 5) = sVar1 + -1;
            iVar5 = (int)local_28[0];
            if ((0 < iVar5) && (iVar5 < (short)(sVar1 + -1))) {
              iVar5 = iVar5 * 4;
              iVar3 = iVar5 + *(int *)param_1[6];
              if (*(short *)(iVar3 + -2) == *(short *)(iVar3 + 2)) {
                local_30[0] = *(short *)(iVar3 + -4) + 1;
                iVar3 = iVar5 + *(int *)param_1[6];
                *(short *)(iVar3 + -4) =
                     *(short *)(iVar3 + -4) + *(short *)(iVar5 + *(int *)param_1[6]);
                local_2c = FUN_100020b8(param_1[6],iVar2,0,4,&local_2c,0);
                FUN_100db1ec();
                local_28[0] = local_28[0] + -1;
                *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + -1;
              }
            }
          }
          else {
            local_28[0] = local_28[0] + 1;
          }
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 <= param_3);
    }
    *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - param_3;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined2 *)((int)param_1 + 6) = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 1;
  }
  return;
}



// Function: FUN_100e24f0 at 100e24f0
// Size: 616 bytes

undefined4 FUN_100e24f0(int param_1,short param_2,short *param_3,short *param_4,int *param_5)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_2;
  if (((*(short *)(param_1 + 0x14) < 1) || (*(short *)(param_1 + 0xe) < iVar6)) || (iVar6 < 1)) {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
    param_2 = 0;
    uVar2 = 0;
  }
  else if (iVar6 == *(short *)(param_1 + 4)) {
    *param_3 = *(short *)(param_1 + 6);
    *param_5 = *(int *)(param_1 + 8);
    *param_4 = *(short *)(param_1 + 0xc);
    uVar2 = 1;
  }
  else {
    sVar3 = FUN_10003768(iVar6 - *(short *)(param_1 + 4));
    if ((sVar3 < iVar6) && (*(short *)**(undefined4 **)(param_1 + 0x18) < iVar6)) {
      if ((*(short *)(param_1 + 0xe) - iVar6) + 1 < (int)sVar3) {
        sVar3 = *(short *)(param_1 + 0x14) + -1;
        *param_3 = sVar3;
        iVar5 = sVar3 * 4;
        sVar3 = *(short *)(**(int **)(param_1 + 0x18) + iVar5);
        *param_5 = *(int *)(param_1 + 0x10) -
                   (int)sVar3 * (int)*(short *)(**(int **)(param_1 + 0x18) + iVar5 + 2);
        iVar5 = (int)(short)(*(short *)(param_1 + 0xe) - sVar3);
      }
      else {
        *param_3 = *(short *)(param_1 + 6);
        *param_5 = *(int *)(param_1 + 8);
        iVar5 = (int)(short)(*(short *)(param_1 + 4) - *(short *)(param_1 + 0xc));
      }
    }
    else {
      *param_3 = 0;
      *param_5 = 0;
      iVar5 = 0;
    }
    if (iVar5 < iVar6) {
      iVar4 = iVar5 + *(short *)(**(int **)(param_1 + 0x18) + *param_3 * 4);
      while (sVar3 = (short)iVar5, iVar4 < iVar6) {
        sVar1 = *(short *)(**(int **)(param_1 + 0x18) + *param_3 * 4);
        *param_5 = *param_5 +
                   (int)sVar1 * (int)*(short *)(**(int **)(param_1 + 0x18) + *param_3 * 4 + 2);
        iVar5 = (int)(short)(sVar1 + sVar3);
        sVar3 = *param_3;
        *param_3 = sVar3 + 1;
        iVar4 = *(short *)(**(int **)(param_1 + 0x18) + (short)(sVar3 + 1) * 4) + iVar5;
      }
    }
    else {
      do {
        sVar3 = *param_3;
        *param_3 = sVar3 + -1;
        iVar4 = (short)(sVar3 + -1) * 4;
        sVar3 = *(short *)(**(int **)(param_1 + 0x18) + iVar4);
        *param_5 = *param_5 - (int)sVar3 * (int)*(short *)(**(int **)(param_1 + 0x18) + iVar4 + 2);
        sVar3 = (short)iVar5 - sVar3;
        iVar5 = (int)sVar3;
      } while (iVar6 <= iVar5);
    }
    *param_4 = param_2 - sVar3;
    uVar2 = 1;
  }
  *(short *)(param_1 + 4) = param_2;
  *(short *)(param_1 + 6) = *param_3;
  *(int *)(param_1 + 8) = *param_5;
  *(short *)(param_1 + 0xc) = *param_4;
  return uVar2;
}



// Function: FUN_100e2758 at 100e2758
// Size: 284 bytes

int FUN_100e2758(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  short local_8;
  short sStack_6;
  
  piVar5 = &local_10;
  iVar4 = 0;
  if (((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x10))) && (0 < *(short *)(param_1 + 0x14)))
  {
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar3 = (int)*(short *)(**(int **)(param_1 + 0x18) + 2);
      if (0 < iVar3) {
        local_c = param_2 / iVar3 + 1;
        local_10 = (int)*(short *)(param_1 + 0xe);
        if (local_c < *(short *)(param_1 + 0xe)) {
          piVar5 = &local_c;
        }
        iVar4 = (int)(short)*piVar5;
      }
    }
    else if (param_2 == 0) {
      iVar4 = 1;
    }
    else {
      param_2 = param_2 + 1;
      sVar1 = 0;
      iVar4 = 0;
      if (-1 < *(short *)(param_1 + 0x14) + -1) {
        do {
          uVar2 = *(undefined4 *)(**(int **)(param_1 + 0x18) + iVar4 * 4);
          sStack_6 = (short)uVar2;
          local_8 = (short)((uint)uVar2 >> 0x10);
          param_2 = param_2 - (int)sStack_6 * (int)local_8;
          sVar1 = local_8 + sVar1;
          if (param_2 < 1) {
            return (int)(short)(sVar1 + (short)(param_2 / (int)sStack_6));
          }
          iVar4 = (int)(short)((short)iVar4 + 1);
        } while (iVar4 <= *(short *)(param_1 + 0x14) + -1);
      }
      iVar4 = (int)*(short *)(param_1 + 0xe);
    }
  }
  return iVar4;
}



// Function: FUN_100e2874 at 100e2874
// Size: 152 bytes

int FUN_100e2874(int *param_1,short param_2)

{
  int iVar1;
  short local_10;
  undefined1 auStack_e [2];
  undefined1 auStack_c [4];
  
  if (*(short *)(param_1 + 5) == 1) {
    iVar1 = (int)*(short *)(*(int *)param_1[6] + 2);
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(int)param_2,&local_10,
                         auStack_e,auStack_c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(short *)(*(int *)param_1[6] + local_10 * 4 + 2);
    }
  }
  return iVar1;
}



// Function: FUN_100e290c at 100e290c
// Size: 652 bytes

void FUN_100e290c(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_38 [2];
  short local_34;
  short local_32;
  short local_30;
  undefined2 local_2e;
  short local_2c [2];
  undefined1 auStack_28 [8];
  
  iVar4 = (int)param_4;
  iVar3 = (int)param_2;
  if (((*(short *)((int)param_1 + 0xe) < iVar3) && (0 < *(short *)(param_1 + 5))) &&
     (iVar1 = *(int *)param_1[6] + *(short *)(param_1 + 5) * 4, *(short *)(iVar1 + -2) == iVar4)) {
    *(short *)(iVar1 + -4) = *(short *)(iVar1 + -4) + param_3;
    goto LAB_100e2b4c;
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),iVar3,local_2c,local_38,
                       auStack_28);
  if (iVar1 != 0) {
    iVar2 = *(int *)param_1[6];
    iVar1 = local_2c[0] * 4;
    if (*(short *)(iVar2 + iVar1 + 2) == iVar4) {
      *(short *)(iVar1 + iVar2) = *(short *)(iVar2 + iVar1) + param_3;
      goto LAB_100e2b4c;
    }
  }
  if (((0 < local_2c[0]) && (local_38[0] == 1)) &&
     (iVar1 = local_2c[0] * 4 + *(int *)param_1[6], *(short *)(iVar1 + -2) == iVar4)) {
    *(short *)(iVar1 + -4) = *(short *)(iVar1 + -4) + param_3;
    goto LAB_100e2b4c;
  }
  iVar1 = FUN_10001c20(param_1[6]);
  local_34 = param_3;
  local_32 = param_4;
  if (local_38[0] < 2) {
    if (*(short *)((int)param_1 + 0xe) < iVar3) goto LAB_100e2a60;
LAB_100e2a68:
    FUN_100020b8(param_1[6],(int)local_2c[0] << 2,0,0,&local_34,4);
    FUN_100db1ec();
    *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 1;
  }
  else {
    if (*(short *)((int)param_1 + 0xe) < iVar3) {
LAB_100e2a60:
      local_2c[0] = *(short *)(param_1 + 5);
      goto LAB_100e2a68;
    }
    iVar3 = local_2c[0] * 4;
    local_30 = (*(short *)(*(int *)param_1[6] + iVar3) - local_38[0]) + 1;
    local_2e = *(undefined2 *)(iVar3 + *(int *)param_1[6] + 2);
    *(short *)(iVar3 + *(int *)param_1[6]) = local_38[0] + -1;
    FUN_100020b8(param_1[6],local_2c[0] * 4 + 4,0,0,&local_34,8);
    FUN_100db1ec();
    *(short *)(param_1 + 5) = *(short *)(param_1 + 5) + 2;
  }
  iVar3 = FUN_10001c20(param_1[6]);
  if (iVar3 <= iVar1) {
    FUN_100db158(0xffffff94,0);
  }
LAB_100e2b4c:
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + param_3;
  param_1[4] = param_1[4] + param_3 * iVar4;
  return;
}



// Function: FUN_100e2b98 at 100e2b98
// Size: 396 bytes

int FUN_100e2b98(int *param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  short local_24;
  short local_22;
  
  iVar3 = 0;
  if (*(short *)(param_1 + 5) == 1) {
    iVar3 = (int)param_3 * (int)*(short *)(*(int *)param_1[6] + 2);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(int)param_3,&local_22,
                         &local_24,&local_28);
    if (iVar1 != 0) {
      iVar3 = local_28 + (int)local_24 * (int)*(short *)(*(int *)param_1[6] + local_22 * 4 + 2);
    }
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),(int)param_2,&local_22,
                         &local_24,&local_28);
    if (iVar1 != 0) {
      iVar2 = local_28 + (local_24 + -1) * (int)*(short *)(*(int *)param_1[6] + local_22 * 4 + 2);
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),
                           (int)(short)(param_3 + param_2 + -1),&local_22,&local_24,&local_28);
      if (iVar1 != 0) {
        iVar3 = local_28 +
                ((int)local_24 * (int)*(short *)(*(int *)param_1[6] + local_22 * 4 + 2) - iVar2);
      }
    }
  }
  return iVar3;
}



// Function: FUN_100e2d2c at 100e2d2c
// Size: 40 bytes

void FUN_100e2d2c(void)

{
  FUN_100e1df4(0);
  return;
}



// Function: FUN_100e2d54 at 100e2d54
// Size: 516 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100e2d54(int *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar2 = (int *)FUN_10105d2c(param_1);
  *(undefined2 *)((int)piVar2 + 0x82) = 0;
  *(undefined2 *)(piVar2 + 0x20) = 0;
  piVar2[0x21] = 0;
  piVar2[0x22] = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = _DAT_41820010;
  _DAT_41820010 = auStack_13c;
  iVar3 = FUN_10000090(auStack_13c);
  if (iVar3 == 0) {
    iVar3 = FUN_100e2124(0);
    FUN_100e21e0();
    piVar2[0x21] = iVar3;
    iVar3 = FUN_100e2124(0);
    FUN_100e21e0();
    piVar2[0x22] = iVar3;
    iVar3 = FUN_100ed918();
    piVar2[0x25] = iVar3;
    iVar3 = FUN_100ed918();
    piVar2[0x26] = iVar3;
    iVar3 = FUN_100ed918();
    piVar2[0x27] = iVar3;
    sVar1 = *(short *)((int)param_1 + 0x82);
    if (0 < sVar1) {
      iVar3 = *piVar2;
      iVar5 = *param_1;
      uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(iVar5 + 0x7b8),1,iVar3,iVar5,
                           *(undefined4 *)(iVar5 + 0x7bc));
      FUN_10117884((int)piVar2 + (int)*(short *)(iVar3 + 0x7e0),(int)sVar1,uVar4);
    }
    sVar1 = *(short *)(param_1 + 0x20);
    if (0 < sVar1) {
      iVar3 = *piVar2;
      uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),1);
      FUN_10117884((int)piVar2 + (int)*(short *)(iVar3 + 0x7e8),(int)sVar1,uVar4);
    }
    _DAT_41820010 = local_34;
  }
  else {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
    FUN_100db158((int)local_3c,local_38);
  }
  return piVar2;
}



// Function: FUN_100e2f58 at 100e2f58
// Size: 132 bytes

void FUN_100e2f58(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100e2fe8 at 100e2fe8
// Size: 652 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2fe8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar6;
  undefined1 uVar7;
  int iVar5;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_1010937c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar1 = FUN_10000090(auStack_138);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    iVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    uVar6 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(undefined2 *)(param_1 + 0x24) = uVar6;
    uVar6 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(undefined2 *)((int)param_1 + 0x92) = uVar6;
    uVar7 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)(param_1 + 0x23) = uVar7;
    uVar7 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0x8d) = uVar7;
    uVar7 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0x8e) = uVar7;
    if ((*(ushort *)(param_1 + 0x24) & 1) != 0) {
      *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) + 1;
    }
    if ((*(ushort *)((int)param_1 + 0x92) & 1) != 0) {
      *(ushort *)((int)param_1 + 0x92) = *(ushort *)((int)param_1 + 0x92) + 1;
    }
    iVar5 = FUN_100e2124(0);
    FUN_100e21e0();
    param_1[0x21] = iVar5;
    iVar5 = FUN_100e2124(0);
    FUN_100e21e0();
    param_1[0x22] = iVar5;
    iVar5 = FUN_100ed918();
    param_1[0x25] = iVar5;
    iVar5 = FUN_100ed918();
    param_1[0x26] = iVar5;
    iVar5 = FUN_100ed918();
    param_1[0x27] = iVar5;
    if (0 < iVar2) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),iVar2,uVar4);
    }
    if (0 < iVar1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),iVar1,uVar3);
    }
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100e3274 at 100e3274
// Size: 440 bytes

void FUN_100e3274(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_101097e8(param_1,param_2);
  uVar2 = 0;
  uVar1 = 0;
  if (0 < *(short *)(param_1 + 0x20)) {
    uVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x7c0) + (int)param_1,1);
  }
  if (0 < *(short *)((int)param_1 + 0x82)) {
    uVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7b8) + (int)param_1,1);
  }
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x20));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0x82));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),uVar2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x24));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0x92));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x23));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x8d)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x8e)
              );
  return;
}



// Function: FUN_100e342c at 100e342c
// Size: 196 bytes

void FUN_100e342c(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_18;
  short local_16;
  short local_12;
  
  FUN_10000030();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,&local_18);
  FUN_10000270((int)local_12,(int)local_18);
  uVar1 = FUN_100b08a4(&local_18,0);
  FUN_10000288(0,uVar1);
  if (param_2 == 1) {
    FUN_10000270((int)local_16,(int)local_18);
    uVar1 = FUN_100b08a4(&local_18,0);
    FUN_10000288(0,uVar1);
  }
  return;
}



// Function: FUN_100e34f0 at 100e34f0
// Size: 188 bytes

void FUN_100e34f0(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_18;
  short local_16;
  short local_14;
  
  FUN_10000030();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_3,&local_18);
  FUN_10000270((int)local_16,(int)local_14);
  uVar1 = FUN_100b08a4(&local_18,1);
  FUN_10000288(uVar1,0);
  if (param_2 == 1) {
    FUN_10000270((int)local_16,(int)local_18);
    uVar1 = FUN_100b08a4(&local_18,1);
    FUN_10000288(uVar1,0);
  }
  return;
}



// Function: FUN_100e35ac at 100e35ac
// Size: 144 bytes

void FUN_100e35ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_101074b8(param_1,param_2);
  local_14 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x10);
  local_18 = *(undefined4 *)(*(int *)(param_1 + 0x88) + 0x10);
  uVar1 = FUN_100e1580(param_2,0);
  uVar2 = FUN_100e1580(param_2,1);
  FUN_100e10b0(uVar2,uVar1,&local_18);
  return;
}



// Function: FUN_100e363c at 100e363c
// Size: 76 bytes

undefined4 FUN_100e363c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sStack0000001c;
  short sStack0000001e;
  
  sStack0000001e = (short)param_2;
  if ((((sStack0000001e < 1) ||
       (sStack0000001c = (short)((uint)param_2 >> 0x10), sStack0000001c < 1)) ||
      (*(short *)(param_1 + 0x82) < sStack0000001e)) ||
     (*(short *)(param_1 + 0x80) < sStack0000001c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100e3688 at 100e3688
// Size: 404 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3688(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sStack0000001c;
  short sStack0000001e;
  
  iVar1 = _DAT_809f0010;
  iVar3 = _DAT_809f000c;
  iVar2 = _DAT_809f0008;
  sStack0000001e = (short)param_2;
  if (sStack0000001e < 1) {
    *param_3 = _DAT_809f0004;
    param_3[1] = iVar2;
    param_3[2] = iVar3;
    param_3[3] = iVar1;
  }
  else {
    sStack0000001c = (short)((uint)param_2 >> 0x10);
    if (((sStack0000001c < 1) || (*(short *)(param_1 + 0x82) < sStack0000001e)) ||
       (*(short *)(param_1 + 0x80) < sStack0000001c)) {
      *param_3 = _DAT_809f0004;
      param_3[1] = iVar2;
      param_3[2] = iVar3;
      param_3[3] = iVar1;
    }
    else {
      iVar3 = (int)sStack0000001e;
      _sStack0000001c = param_2;
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                           (int)*(short *)(**(int **)(param_1 + 0x84) + 200),iVar3);
      if (*(short *)(*(int *)(param_1 + 0x84) + 0x14) == 1) {
        param_3[1] = iVar2 * (iVar3 + -1);
      }
      else {
        iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                             (int)*(short *)(**(int **)(param_1 + 0x84) + 0xd0),1,
                             (int)(short)(sStack0000001e + -1));
        param_3[1] = iVar3;
      }
      param_3[3] = param_3[1] + iVar2;
      iVar3 = (int)sStack0000001c;
      iVar2 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                           (int)*(short *)(**(int **)(param_1 + 0x88) + 200),iVar3);
      if (*(short *)(*(int *)(param_1 + 0x88) + 0x14) == 1) {
        *param_3 = iVar2 * (iVar3 + -1);
      }
      else {
        iVar3 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                             (int)*(short *)(**(int **)(param_1 + 0x88) + 0xd0),1,
                             (int)(short)(sStack0000001c + -1));
        *param_3 = iVar3;
      }
      param_3[2] = *param_3 + iVar2;
    }
  }
  return;
}



// Function: FUN_100e381c at 100e381c
// Size: 324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e381c(int *param_1,short param_2,short param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = _DAT_809f0010;
  uVar1 = _DAT_809f000c;
  uVar4 = _DAT_809f0008;
  iVar5 = (int)param_2;
  if (iVar5 < 1) {
    *param_4 = _DAT_809f0004;
    param_4[1] = uVar4;
    param_4[2] = uVar1;
    param_4[3] = uVar2;
  }
  else {
    iVar7 = (int)param_3;
    if ((iVar7 < 1) || ((int)*(short *)((int)param_1 + 0x82) < iVar5 + iVar7 + -1)) {
      *param_4 = _DAT_809f0004;
      param_4[1] = uVar4;
      param_4[2] = uVar1;
      param_4[3] = uVar2;
    }
    else {
      if (*(short *)(param_1[0x21] + 0x14) == 1) {
        iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
        iVar6 = iVar3 * (iVar5 + -1);
        iVar3 = iVar3 * iVar7;
      }
      else {
        iVar6 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                             (int)(short)(param_2 + -1));
        iVar3 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),iVar5,
                             iVar7);
      }
      uVar4 = *(undefined4 *)(param_1[0x22] + 0x10);
      *param_4 = 0;
      param_4[1] = iVar6;
      param_4[2] = uVar4;
      param_4[3] = iVar6 + iVar3;
    }
  }
  return;
}



// Function: FUN_100e3960 at 100e3960
// Size: 680 bytes

void FUN_100e3960(int *param_1,undefined4 param_2,char param_3,undefined2 *param_4,
                 undefined2 param_5,short *param_6,undefined2 param_7,undefined2 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000038;
  int *in_stack_0000003c;
  short *in_stack_00000040;
  undefined1 auStack_158 [8];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [276];
  undefined4 local_2c;
  
  if (param_3 == '\0') {
    local_150 = CONCAT22(*param_4,param_8);
    local_14c = CONCAT22(param_5,param_8);
    *(undefined4 *)param_6 = local_150;
    *(undefined4 *)(param_6 + 2) = local_14c;
  }
  else {
    local_148 = CONCAT22(param_7,*param_4);
    local_144 = CONCAT22(param_7,param_5);
    *(undefined4 *)param_6 = local_148;
    *(undefined4 *)(param_6 + 2) = local_144;
  }
  iVar2 = in_stack_0000003c[1];
  iVar4 = in_stack_0000003c[2];
  iVar5 = in_stack_0000003c[3];
  *in_stack_00000038 = *in_stack_0000003c;
  in_stack_00000038[1] = iVar2;
  in_stack_00000038[2] = iVar4;
  in_stack_00000038[3] = iVar5;
  if (*param_6 != *in_stack_00000040) {
    iVar2 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                         (int)(short)(*param_6 + -1));
    *in_stack_00000038 = iVar2;
  }
  iVar2 = (int)param_6[2];
  if (iVar2 != in_stack_00000040[2]) {
    if (iVar2 == *param_6) {
      iVar2 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 200),iVar2);
      in_stack_00000038[2] = *in_stack_00000038 + iVar2;
    }
    else {
      iVar2 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                           (int)param_6[2]);
      in_stack_00000038[2] = iVar2;
    }
  }
  if (param_6[1] != in_stack_00000040[1]) {
    iVar2 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                         (int)(short)(param_6[1] + -1));
    in_stack_00000038[1] = iVar2;
  }
  iVar2 = (int)param_6[3];
  if (iVar2 != in_stack_00000040[3]) {
    if (iVar2 == param_6[1]) {
      iVar2 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 200),iVar2);
      in_stack_00000038[3] = in_stack_00000038[1] + iVar2;
    }
    else {
      iVar2 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           (int)param_6[3]);
      in_stack_00000038[3] = iVar2;
    }
  }
  iVar2 = in_stack_00000038[1];
  iVar4 = in_stack_00000038[2];
  iVar5 = in_stack_00000038[3];
  *in_stack_0000003c = *in_stack_00000038;
  in_stack_0000003c[1] = iVar2;
  in_stack_0000003c[2] = iVar4;
  in_stack_0000003c[3] = iVar5;
  FUN_100ee64c(auStack_140);
  FUN_10000138(local_2c);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),in_stack_00000038,auStack_158);
  uVar3 = local_2c;
  uVar1 = FUN_100b0578(auStack_158);
  FUN_10003150(uVar3,uVar1);
  FUN_10003060(local_2c,param_2,param_2);
  uVar3 = *(undefined4 *)(param_6 + 2);
  *(undefined4 *)in_stack_00000040 = *(undefined4 *)param_6;
  *(undefined4 *)(in_stack_00000040 + 2) = uVar3;
  *param_4 = 0;
  FUN_100ee77c(auStack_140,2);
  return;
}



// Function: FUN_100e3c08 at 100e3c08
// Size: 1500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3c08(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short sVar10;
  short sVar11;
  undefined2 *puVar12;
  int iVar13;
  int local_104;
  undefined1 auStack_d4 [16];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  short local_b4;
  short local_b2;
  short local_b0;
  short local_ae;
  short local_ac;
  short local_aa;
  short local_a8;
  short local_a6;
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [8];
  undefined2 local_94 [12];
  undefined1 auStack_7c [8];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_54 [4];
  
  puVar5 = local_94;
  FUN_100b02d0(&local_5c);
  FUN_10000138(param_3);
  iVar1 = FUN_10000060(param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    psVar9 = (short *)*param_2;
    if (*psVar9 == 10) {
      local_ac = psVar9[1];
      local_aa = psVar9[2];
      local_a8 = psVar9[3];
      local_a6 = psVar9[4];
      uVar2 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           (int)(short)(local_aa + -1));
      uVar3 = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                           (int)(short)(local_ac + -1));
      uVar4 = FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xd0),1,
                           (int)(short)(local_a6 + -1));
      local_bc = FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xd0),1,
                              (int)(short)(local_a8 + -1));
      local_c4 = uVar3;
      local_c0 = uVar2;
      local_b8 = uVar4;
      local_74 = uVar3;
      uStack_70 = uVar2;
      uStack_6c = local_bc;
      uStack_68 = uVar4;
      FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,&local_74,*param_3 + 2);
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x620),auStack_d4);
      iVar1 = *param_1;
      uVar2 = FUN_100e1580(auStack_d4,0);
      uVar3 = FUN_100b057c(&local_b4,0);
      FUN_10117884(uVar3,(int)param_1 + (int)*(short *)(iVar1 + 0x868),uVar2);
      iVar1 = *param_1;
      uVar2 = FUN_100e1580(auStack_d4,1);
      uVar3 = FUN_100b057c(&local_b4,1);
      FUN_10117884(uVar3,(int)param_1 + (int)*(short *)(iVar1 + 0x868),uVar2);
      FUN_10000600(_DAT_80640002,(int)local_b2,(int)local_b4,(int)(short)(local_ae + 1),
                   (int)(short)(local_b0 + 1));
      FUN_10002be0(param_2,_DAT_80640002,_DAT_80640002);
      iVar1 = *_DAT_80640002;
      local_64 = *(short *)(iVar1 + 2);
      local_62 = *(short *)(iVar1 + 4);
      local_60 = *(short *)(iVar1 + 6);
      local_5e = *(short *)(iVar1 + 8);
      puVar12 = *(undefined2 **)(local_104 + -0xb00);
      if ((puVar5 != (undefined2 *)0x0) ||
         (puVar5 = (undefined2 *)FUN_100f56e4(8), puVar5 != (undefined2 *)0x0)) {
        *puVar5 = *puVar12;
        puVar5[1] = puVar12[1];
        puVar5[2] = puVar12[2];
        puVar5[3] = puVar12[3];
      }
      iVar1 = FUN_100efc14(&local_64);
      if (iVar1 == 0) {
        iVar1 = (int)local_62;
        if (iVar1 < local_5e) {
          do {
            sVar10 = (short)iVar1;
            local_54[0] = 0;
            iVar13 = (int)local_64;
            local_5a = sVar10;
            if (iVar13 < local_60) {
              do {
                sVar11 = (short)iVar13;
                local_5c = sVar11;
                puVar6 = (undefined4 *)FUN_100b0368(auStack_a4,&local_5c);
                iVar7 = FUN_100033c0(*puVar6,_DAT_80640002);
                if (iVar7 == 0) {
                  if (0 < local_54[0]) {
                    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,0,local_54
                                 ,(int)(short)(sVar11 + -1),auStack_7c,iVar13,iVar1);
                  }
                }
                else if (local_54[0] == 0) {
                  local_54[0] = sVar11;
                }
                iVar13 = (int)(short)(sVar11 + 1);
              } while (iVar13 < local_60);
            }
            if (0 < local_54[0]) {
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,0,local_54,
                           (int)(short)(local_60 + -1),auStack_7c,iVar13,iVar1);
            }
            iVar1 = (int)(short)(sVar10 + 1);
          } while (iVar1 < local_5e);
        }
      }
      else {
        iVar13 = (int)local_64;
        if (iVar13 < local_60) {
          do {
            sVar10 = (short)iVar13;
            local_54[0] = 0;
            iVar7 = (int)local_62;
            local_5c = sVar10;
            if (iVar7 < local_5e) {
              do {
                sVar11 = (short)iVar7;
                local_5a = sVar11;
                puVar6 = (undefined4 *)FUN_100b0368(auStack_9c,&local_5c);
                iVar8 = FUN_100033c0(*puVar6,_DAT_80640002);
                if (iVar8 == 0) {
                  if (0 < local_54[0]) {
                    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,iVar1,
                                 local_54,(int)(short)(sVar11 + -1),auStack_7c,iVar13,iVar7);
                  }
                }
                else if (local_54[0] == 0) {
                  local_54[0] = sVar11;
                }
                iVar7 = (int)(short)(sVar11 + 1);
              } while (iVar7 < local_5e);
            }
            if (0 < local_54[0]) {
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x870),param_3,iVar1,local_54,
                           (int)(short)(local_5e + -1),auStack_7c,iVar13,iVar7);
            }
            iVar13 = (int)(short)(sVar10 + 1);
          } while (iVar13 < local_60);
        }
      }
    }
  }
  return;
}



// Function: FUN_100e41e4 at 100e41e4
// Size: 104 bytes

void FUN_100e41e4(int *param_1,char param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_10000060(param_1[0x26]);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x748) + (int)param_1,param_1[0x26],(int)param_2,
                 (int)param_3);
  }
  return;
}



// Function: FUN_100e424c at 100e424c
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e424c(int *param_1,undefined4 param_2,char param_3,char param_4)

{
  int iVar1;
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  if ((int)param_3 != (int)param_4) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar1 != 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,param_2,_DAT_80410014);
      iVar1 = (int)param_3 + (int)param_4;
      if (iVar1 == 3) {
        FUN_10000030();
        FUN_10002130(10);
        FUN_100f08a4();
        FUN_10000588(_DAT_80410014);
      }
      else if (iVar1 == 6) {
        FUN_100ee64c(auStack_130);
        FUN_100005a0(_DAT_80410014,local_1c);
        FUN_100005b8(local_1c,1,1);
        FUN_10000030();
        FUN_100f08a4();
        FUN_100005d0(local_1c);
        FUN_100ee77c(auStack_130,2);
      }
      else if (iVar1 == 5) {
        FUN_10000030();
        FUN_100f08a4();
        FUN_100005d0(_DAT_80410014);
      }
    }
  }
  return;
}



// Function: FUN_100e43a4 at 100e43a4
// Size: 232 bytes

void FUN_100e43a4(int *param_1,int param_2,short param_3,short param_4,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10 [3];
  
  piVar2 = &local_18;
  piVar1 = local_10;
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + 6) = 0xffff;
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *(undefined1 *)((int)param_1 + 10) = 1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  else {
    local_10[1] = 1;
    local_10[0] = (int)param_3;
    if (param_3 < 1) {
      piVar1 = local_10 + 1;
    }
    *(short *)((int)param_1 + 6) = (short)*piVar1;
    local_14 = (int)*(short *)(param_2 + 0x80);
    local_18 = (int)param_4;
    if ((int)*(short *)(param_2 + 0x80) < (int)param_4) {
      piVar2 = &local_14;
    }
    *(short *)(param_1 + 2) = (short)*piVar2;
    *(undefined1 *)((int)param_1 + 10) = param_5;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  return;
}



// Function: FUN_100e448c at 100e448c
// Size: 124 bytes

undefined4 * FUN_100e448c(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &DAT_90010008;
    FUN_100e43a4(param_1,param_2,1,(int)*(short *)(param_2 + 0x80),1);
  }
  return param_1;
}



// Function: FUN_100e4508 at 100e4508
// Size: 232 bytes

void FUN_100e4508(int *param_1,int param_2,short param_3,short param_4,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10 [3];
  
  piVar2 = &local_18;
  piVar1 = local_10;
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + 6) = 0xffff;
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *(undefined1 *)((int)param_1 + 10) = 1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  else {
    local_10[1] = 1;
    local_10[0] = (int)param_3;
    if (param_3 < 1) {
      piVar1 = local_10 + 1;
    }
    *(short *)((int)param_1 + 6) = (short)*piVar1;
    local_14 = (int)*(short *)(param_2 + 0x82);
    local_18 = (int)param_4;
    if ((int)*(short *)(param_2 + 0x82) < (int)param_4) {
      piVar2 = &local_14;
    }
    *(short *)(param_1 + 2) = (short)*piVar2;
    *(undefined1 *)((int)param_1 + 10) = param_5;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  }
  return;
}



// Function: FUN_100e45f0 at 100e45f0
// Size: 124 bytes

undefined4 * FUN_100e45f0(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = &DAT_9421ffb0;
    FUN_100e4508(param_1,param_2,1,(int)*(short *)(param_2 + 0x82),1);
  }
  return param_1;
}



// Function: FUN_100e466c at 100e466c
// Size: 148 bytes

undefined4 * FUN_100e466c(undefined4 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x24), param_1 != (undefined4 *)0x0)) {
    *param_1 = &DAT_60bb0000;
    FUN_100b02d0(param_1 + 1);
    FUN_100e448c(param_1 + 3,param_2);
    FUN_100e45f0(param_1 + 6,param_2);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



// Function: FUN_100e4700 at 100e4700
// Size: 84 bytes

void FUN_100e4700(int *param_1,int *param_2)

{
  int *piStack00000018;
  
  piStack00000018 = param_1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x10));
  *piStack00000018 = param_2[1];
  return;
}



// Function: FUN_100e4754 at 100e4754
// Size: 28 bytes

uint FUN_100e4754(int param_1)

{
  int iVar1;
  
  iVar1 = -(int)*(short *)(param_1 + 4) + -1;
  return iVar1 + (-(uint)(iVar1 == 0) - (-(int)*(short *)(param_1 + 4) + -2)) & 0xff;
}



// Function: FUN_100e4770 at 100e4770
// Size: 28 bytes

uint FUN_100e4770(int param_1)

{
  int iVar1;
  
  iVar1 = -(int)*(short *)(param_1 + 4) + -1;
  return iVar1 + (-(uint)(iVar1 == 0) - (-(int)*(short *)(param_1 + 4) + -2)) & 0xff;
}



// Function: FUN_100e478c at 100e478c
// Size: 96 bytes

undefined4 FUN_100e478c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100e4754(param_1 + 0xc);
  if ((iVar1 == 0) && (iVar1 = FUN_100e4770(param_1 + 0x18), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100e47ec at 100e47ec
// Size: 84 bytes

void FUN_100e47ec(int *param_1,int *param_2)

{
  int *piStack00000018;
  
  piStack00000018 = param_1;
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x18));
  *piStack00000018 = param_2[1];
  return;
}



// Function: FUN_100e4840 at 100e4840
// Size: 240 bytes

void FUN_100e4840(int *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_40 [40];
  undefined4 local_18 [3];
  
  if (param_2 == 0x6e) {
    FUN_100e466c(auStack_40,param_1);
    FUN_100e4700(local_18,auStack_40);
    iVar1 = FUN_100e478c(auStack_40);
    while (iVar1 != 0) {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),local_18[0]);
      if (iVar1 != 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x838) + (int)param_1,local_18[0],1,1,1);
      }
      FUN_100e47ec(local_18,auStack_40);
      iVar1 = FUN_100e478c(auStack_40);
    }
  }
  else {
    FUN_100c6178(param_1);
  }
  return;
}



// Function: FUN_100e4930 at 100e4930
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100e4930(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa0), param_1 != (undefined4 *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = &DAT_609c0000;
    FUN_100b02d0(param_1 + 0x23);
    FUN_100b02d0(param_1 + 0x24);
    param_1[0x23] = _DAT_63e30000;
    *(undefined1 *)((int)param_1 + 0x89) = 0;
    *(undefined1 *)((int)param_1 + 0x8a) = 0;
    param_1[0x27] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0xffffffff;
    param_1[0x26] = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return param_1;
}



// Function: FUN_100e49f8 at 100e49f8
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e49f8(int *param_1,int *param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x5f0),0);
  FUN_100c4548(param_1,0,param_2,0,0,0,param_2,uVar1);
  *(undefined1 *)(param_1 + 0x22) = param_4;
  *(undefined1 *)((int)param_1 + 0x89) = param_5;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0x21] = (int)param_2;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar2 = FUN_10000090(auStack_134);
  if (iVar2 == 0) {
    iVar2 = FUN_100ed918();
    param_1[0x26] = iVar2;
    FUN_100005a0(*(undefined4 *)(param_1[0x21] + 0x94),iVar2);
    iVar2 = *(int *)(param_1[0x21] + 0x98);
    param_1[0x25] = iVar2;
    FUN_10000138(iVar2);
    iVar2 = FUN_100ed918();
    param_1[0x27] = iVar2;
    _DAT_41820010 = local_2c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_34,local_30);
  }
  return;
}



// Function: FUN_100e4b48 at 100e4b48
// Size: 268 bytes

void FUN_100e4b48(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_20 [3];
  
  FUN_100b02d0(local_20);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c8),param_2,local_20);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x740) + (int)param_1,local_20[0]), iVar1 != 0
     )) {
    uVar2 = FUN_100e4930(0);
    uVar3 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xe8));
    uVar4 = FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0xf0));
    FUN_100e49f8(uVar2,param_1,param_2,uVar4,uVar3);
    FUN_10117884((int)*(short *)(*param_1 + 0x208) + (int)param_1,uVar2);
  }
  return;
}



// Function: FUN_100e4c54 at 100e4c54
// Size: 1104 bytes

void FUN_100e4c54(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 local_98;
  int local_90 [4];
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  FUN_100b02d0(&local_60);
  FUN_100b02d0(&local_48);
  piVar1 = local_90;
  if ((local_90 != (int *)0x0) || (piVar1 = (int *)FUN_100f56e4(0x10), piVar1 != (int *)0x0)) {
    *piVar1 = *param_2;
    piVar1[1] = param_2[1];
    piVar1[2] = param_2[2];
    piVar1[3] = param_2[3];
  }
  FUN_100b02d0(&local_98);
  piVar1 = &local_58;
  if ((&local_58 != (int *)0x0) || (piVar1 = (int *)FUN_100f56e4(0x10), piVar1 != (int *)0x0)) {
    *piVar1 = *param_2;
    piVar1[1] = param_2[1];
    piVar1[2] = param_2[2];
    piVar1[3] = param_2[3];
  }
  if ((0 < *(short *)(param_1 + 0x20)) && (0 < *(short *)((int)param_1 + 0x82))) {
    iVar7 = *param_1;
    uVar2 = FUN_100e1580(local_90,0);
    FUN_10117884(&local_60,(int)param_1 + (int)*(short *)(iVar7 + 0x868),uVar2);
    iVar7 = *param_1;
    uVar2 = FUN_100e1580(local_90,1);
    FUN_10117884(&local_48,(int)param_1 + (int)*(short *)(iVar7 + 0x868),uVar2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),local_60,&local_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),local_48,&local_80);
    puVar3 = (undefined4 *)FUN_100e1580(&local_40,0);
    puVar4 = (undefined4 *)FUN_100e1580(&local_80,0);
    uVar2 = puVar3[1];
    *puVar4 = *puVar3;
    puVar4[1] = uVar2;
    local_58 = local_80;
    local_54 = iStack_7c;
    local_50 = iStack_78;
    local_4c = iStack_74;
    local_98 = local_60;
    local_70 = local_80;
    iStack_6c = iStack_7c;
    iStack_68 = iStack_78;
    iStack_64 = iStack_74;
    uVar5 = (uint)*(short *)(param_1 + 0x24);
    if ((int)(local_38 - (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0))) <=
        local_90[0]) {
      local_98._0_2_ = (short)((uint)local_60 >> 0x10);
      local_98 = CONCAT22(local_98._0_2_ + 1,(short)local_60);
      iVar7 = FUN_100e1a3c(&local_40,0);
      local_70 = local_70 + iVar7;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x750),local_98,local_48,&local_70);
    if (*(char *)((int)param_1 + 0x8d) != '\0') {
      local_40 = local_58;
      local_3c = local_54;
      local_38 = local_50;
      local_34 = local_4c;
      uVar5 = (uint)*(short *)(param_1[0x21] + 0x14);
      cVar6 = ('\x01' - ((1 < uVar5) + '\x01')) + (uVar5 != 0 && (uint)(1 < uVar5) <= uVar5 - 1);
      iVar7 = 0;
      if (cVar6 != '\0') {
        iVar7 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
      }
      iVar8 = (int)local_60._2_2_;
      if (iVar8 <= local_48._2_2_) {
        do {
          if (cVar6 == '\0') {
            local_34 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),iVar8);
            local_34 = local_3c + local_34;
          }
          else {
            local_34 = local_3c + iVar7;
          }
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),iVar8,&local_40);
          local_3c = local_34;
          iVar8 = (int)(short)((short)iVar8 + 1);
        } while (iVar8 <= local_48._2_2_);
      }
    }
    if (*(char *)(param_1 + 0x23) != '\0') {
      local_40 = local_58;
      local_3c = local_54;
      local_38 = local_50;
      local_34 = local_4c;
      uVar5 = (uint)*(short *)(param_1[0x22] + 0x14);
      cVar6 = ('\x01' - ((1 < uVar5) + '\x01')) + (uVar5 != 0 && (uint)(1 < uVar5) <= uVar5 - 1);
      iVar7 = 0;
      if (cVar6 != '\0') {
        iVar7 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),1);
      }
      iVar8 = (int)local_60._0_2_;
      if (iVar8 <= local_48._0_2_) {
        do {
          if (cVar6 == '\0') {
            local_38 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),iVar8);
            local_38 = local_40 + local_38;
          }
          else {
            local_38 = local_40 + iVar7;
          }
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),iVar8,&local_40);
          local_40 = local_38;
          iVar8 = (int)(short)((short)iVar8 + 1);
        } while (iVar8 <= local_48._0_2_);
      }
    }
  }
  FUN_101088b0(param_1,&local_58);
  return;
}



// Function: FUN_100e50a4 at 100e50a4
// Size: 740 bytes

void FUN_100e50a4(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_r21;
  int unaff_r25;
  int iVar7;
  int iVar8;
  short sStack0000001c;
  short sStack0000001e;
  short sStack00000020;
  short sStack00000022;
  undefined1 auStack_170 [276];
  undefined4 local_5c;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  piVar2 = &local_48;
  _sStack0000001c = param_2;
  _sStack00000020 = param_3;
  if ((&local_48 != (int *)0x0) || (piVar2 = (int *)FUN_100f56e4(0x10), piVar2 != (int *)0x0)) {
    *piVar2 = *param_4;
    piVar2[1] = param_4[1];
    piVar2[2] = param_4[2];
    piVar2[3] = param_4[3];
  }
  uVar5 = (uint)*(short *)((int)param_1 + 0x92);
  iVar6 = local_44 + ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  uVar5 = (uint)*(short *)(param_1 + 0x24);
  local_48 = local_48 + ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  local_44 = iVar6;
  if (*(short *)(param_1[0x21] + 0x14) == 1) {
    unaff_r25 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
  }
  if (*(short *)(param_1[0x22] + 0x14) == 1) {
    unaff_r21 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),1);
  }
  FUN_100ee64c(auStack_170);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x640),local_5c);
  iVar7 = (int)sStack0000001c;
  if (iVar7 <= sStack00000020) {
    do {
      local_40 = local_48 - *(short *)(param_1 + 0x24);
      if (*(short *)(param_1[0x22] + 0x14) == 1) {
        local_40 = unaff_r21 + local_40;
      }
      else {
        iVar8 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),iVar7);
        local_40 = local_40 + iVar8;
      }
      iVar8 = (int)sStack0000001e;
      local_44 = iVar6;
      if (iVar8 <= sStack00000022) {
        do {
          local_3c = local_44 - *(short *)((int)param_1 + 0x92);
          if (*(short *)(param_1[0x21] + 0x14) == 1) {
            local_3c = unaff_r25 + local_3c;
          }
          else {
            iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),iVar8);
            local_3c = local_3c + iVar4;
          }
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_48,auStack_58);
          uVar1 = local_5c;
          uVar3 = FUN_100b0578(auStack_58);
          iVar4 = FUN_10001e60(uVar3,uVar1);
          if (iVar4 != 0) {
            local_50 = CONCAT22((short)iVar7,(short)iVar8);
            FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758),local_50,&local_48);
          }
          local_44 = local_3c + *(short *)((int)param_1 + 0x92);
          iVar8 = (int)(short)((short)iVar8 + 1);
        } while (iVar8 <= sStack00000022);
      }
      local_48 = local_40 + *(short *)(param_1 + 0x24);
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 <= sStack00000020);
  }
  FUN_100ee77c(auStack_170,2);
  return;
}



// Function: FUN_100e538c at 100e538c
// Size: 348 bytes

void FUN_100e538c(int *param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_38 [3];
  int local_2c;
  undefined1 auStack_28 [20];
  
  iVar3 = (int)param_2;
  if (0 < iVar3) {
    iVar4 = (int)param_3;
    piVar2 = local_38;
    piVar1 = local_38 + 2;
    if ((0 < iVar4) && (iVar3 + iVar4 + -1 <= (int)*(short *)((int)param_1 + 0x82))) {
      local_2c = 1;
      local_38[2] = iVar3;
      if (iVar3 < 1) {
        piVar1 = &local_2c;
      }
      local_38[1] = 1;
      local_38[0] = (*(short *)((int)param_1 + 0x82) - iVar3) + 1;
      if (local_38[0] < 1) {
        piVar2 = local_38 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(int)(short)*piVar1,
                   (int)(short)*piVar2,auStack_28);
      FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xb0),iVar3,iVar4);
      *(short *)((int)param_1 + 0x82) = *(short *)((int)param_1 + 0x82) - param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_28);
    }
  }
  return;
}



// Function: FUN_100e54e8 at 100e54e8
// Size: 348 bytes

void FUN_100e54e8(int *param_1,short param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_38 [3];
  int local_2c;
  undefined1 auStack_28 [20];
  
  iVar3 = (int)param_2;
  if (0 < iVar3) {
    iVar4 = (int)param_3;
    piVar2 = local_38;
    piVar1 = local_38 + 2;
    if ((0 < iVar4) && (iVar3 + iVar4 + -1 <= (int)*(short *)(param_1 + 0x20))) {
      local_2c = 1;
      local_38[2] = iVar3;
      if (iVar3 < 1) {
        piVar1 = &local_2c;
      }
      local_38[1] = 1;
      local_38[0] = (*(short *)(param_1 + 0x20) - iVar3) + 1;
      if (local_38[0] < 1) {
        piVar2 = local_38 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(int)(short)*piVar1,
                   (int)(short)*piVar2,auStack_28);
      FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xb0),iVar3,iVar4);
      *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) - param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_28);
    }
  }
  return;
}



// Function: FUN_100e5644 at 100e5644
// Size: 68 bytes

void FUN_100e5644(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),1,(int)param_2);
  return;
}



// Function: FUN_100e5688 at 100e5688
// Size: 68 bytes

void FUN_100e5688(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),1,(int)param_2);
  return;
}



// Function: FUN_100e56cc at 100e56cc
// Size: 84 bytes

void FUN_100e56cc(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),
               (int)(short)((*(short *)((int)param_1 + 0x82) - param_2) + 1),(int)param_2);
  return;
}



// Function: FUN_100e5720 at 100e5720
// Size: 84 bytes

void FUN_100e5720(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),
               (int)(short)((*(short *)(param_1 + 0x20) - param_2) + 1),(int)param_2);
  return;
}



// Function: FUN_100e5774 at 100e5774
// Size: 408 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e5774(int *param_1,int *param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piStack00000018;
  int local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piStack00000018 = param_1;
  FUN_100b02d0(&local_28);
  FUN_100b02d0(local_48);
  local_48[0] = _DAT_63e30000;
  iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x818));
  if (iVar3 != 0) {
    psVar1 = (short *)(*(int *)param_2[0x25] + 2);
    local_40 = *(undefined4 *)psVar1;
    psVar2 = (short *)(*(int *)param_2[0x25] + 6);
    local_3c = *(undefined4 *)psVar2;
    local_30 = local_40;
    local_2c = local_3c;
    if (**(short **)param_2[0x25] == 10) {
      piVar4 = (int *)FUN_100b057c(&local_30,0);
      local_48[0] = *piVar4;
    }
    else {
      iVar3 = (int)*psVar1;
      if (iVar3 <= *psVar2 + -1) {
        do {
          local_28 = iVar3 << 0x10;
          iVar7 = (int)local_30._2_2_;
          if (iVar7 <= local_2c._2_2_ + -1) {
            do {
              local_28 = CONCAT22(local_28._0_2_,(short)iVar7);
              puVar5 = (undefined4 *)FUN_100b0368(auStack_38,&local_28);
              iVar6 = FUN_100033c0(*puVar5,param_2[0x25]);
              if (iVar6 != 0) {
                *piStack00000018 = local_28;
                return;
              }
              iVar7 = (int)(short)((short)iVar7 + 1);
            } while (iVar7 <= local_2c._2_2_ + -1);
          }
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 <= local_2c._0_2_ + -1);
      }
    }
  }
  *piStack00000018 = local_48[0];
  return;
}



// Function: FUN_100e590c at 100e590c
// Size: 96 bytes

undefined4 FUN_100e590c(int param_1,short param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x82) < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                         (int)*(short *)(**(int **)(param_1 + 0x84) + 200));
  }
  return uVar1;
}



// Function: FUN_100e596c at 100e596c
// Size: 96 bytes

undefined4 FUN_100e596c(int param_1,short param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x80) < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                         (int)*(short *)(**(int **)(param_1 + 0x88) + 200));
  }
  return uVar1;
}



// Function: FUN_100e59cc at 100e59cc
// Size: 108 bytes

void FUN_100e59cc(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  undefined1 auStack_18 [16];
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),param_2,auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_18);
  return;
}



// Function: FUN_100e5a38 at 100e5a38
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e5a38(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x778) + (int)param_1,param_1[0x25],_DAT_4082001c);
    FUN_10117884((int)*(short *)(*param_1 + 0x4e8) + (int)param_1,_DAT_4082001c);
  }
  return;
}



// Function: FUN_100e5ac4 at 100e5ac4
// Size: 412 bytes

int FUN_100e5ac4(int *param_1,int *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_54;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_10117884(param_3,(int)param_1 + (int)*(short *)(*param_1 + 0x860),param_2);
  iVar2 = FUN_100b04bc(param_3,*(undefined4 *)(local_54 + -0xe60));
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x760) + (int)param_1,*(undefined4 *)param_3,&local_28);
    uVar3 = (uint)*(short *)((int)param_1 + 0x92);
    local_2c = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    uVar3 = (uint)*(short *)(param_1 + 0x24);
    local_30 = ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    FUN_100e16b8(&local_28,&local_30);
    iVar4 = 1;
    if (0 < *(short *)((int)param_1 + 0x92)) {
      if (param_2[1] < local_24) {
        iVar4 = 3;
      }
      else if (local_1c <= param_2[1]) {
        sVar1 = param_3[1];
        param_3[1] = sVar1 + 1;
        iVar4 = 3;
        if (*(short *)((int)param_1 + 0x82) < (short)(sVar1 + 1)) {
          iVar4 = 0;
        }
      }
    }
    if (0 < *(short *)(param_1 + 0x24)) {
      if (*param_2 < local_28) {
        if (iVar4 == 3) {
          iVar4 = 4;
        }
        else {
          iVar4 = 2;
        }
      }
      else if (local_20 <= *param_2) {
        if (iVar4 == 3) {
          iVar4 = 4;
        }
        else {
          iVar4 = 2;
        }
        sVar1 = *param_3;
        *param_3 = sVar1 + 1;
        if (*(short *)(param_1 + 0x20) < (short)(sVar1 + 1)) {
          iVar4 = 0;
        }
      }
    }
  }
  return iVar4;
}



// Function: FUN_100e5c60 at 100e5c60
// Size: 332 bytes

void FUN_100e5c60(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_40 [3];
  int local_34;
  undefined1 auStack_30 [16];
  
  iVar1 = (int)param_2;
  if (0 < iVar1) {
    piVar3 = local_40;
    piVar2 = local_40 + 2;
    if (0 < param_3) {
      FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xa8),iVar1,(int)param_3,
                   (int)param_4);
      *(short *)((int)param_1 + 0x82) = *(short *)((int)param_1 + 0x82) + param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      local_34 = 1;
      local_40[2] = iVar1;
      if (iVar1 < 1) {
        piVar2 = &local_34;
      }
      local_40[1] = 1;
      local_40[0] = (*(short *)((int)param_1 + 0x82) - iVar1) + 1;
      if (local_40[0] < 1) {
        piVar3 = local_40 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(int)(short)*piVar2,
                   (int)(short)*piVar3,auStack_30);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_30);
    }
  }
  return;
}



// Function: FUN_100e5dac at 100e5dac
// Size: 332 bytes

void FUN_100e5dac(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_40 [3];
  int local_34;
  undefined1 auStack_30 [16];
  
  iVar1 = (int)param_2;
  if (0 < iVar1) {
    piVar3 = local_40;
    piVar2 = local_40 + 2;
    if (0 < param_3) {
      FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xa8),iVar1,(int)param_3,
                   (int)param_4);
      *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + param_3;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
      local_34 = 1;
      local_40[2] = iVar1;
      if (iVar1 < 1) {
        piVar2 = &local_34;
      }
      local_40[1] = 1;
      local_40[0] = (*(short *)(param_1 + 0x20) - iVar1) + 1;
      if (local_40[0] < 1) {
        piVar3 = local_40 + 1;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(int)(short)*piVar2,
                   (int)(short)*piVar3,auStack_30);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_30);
    }
  }
  return;
}



// Function: FUN_100e5ef8 at 100e5ef8
// Size: 92 bytes

void FUN_100e5ef8(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),
               (int)(short)(*(short *)((int)param_1 + 0x82) + 1),(int)param_2,(int)param_3);
  return;
}



// Function: FUN_100e5f54 at 100e5f54
// Size: 92 bytes

void FUN_100e5f54(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),
               (int)(short)(*(short *)(param_1 + 0x20) + 1),(int)param_2,(int)param_3);
  return;
}



// Function: FUN_100e5fb0 at 100e5fb0
// Size: 80 bytes

void FUN_100e5fb0(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),1,(int)param_2,(int)param_3);
  return;
}



// Function: FUN_100e6000 at 100e6000
// Size: 80 bytes

void FUN_100e6000(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),1,(int)param_2,(int)param_3);
  return;
}



// Function: FUN_100e6050 at 100e6050
// Size: 80 bytes

void FUN_100e6050(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uStack0000001c;
  undefined1 auStack_10 [12];
  
  uStack0000001c = param_2;
  puVar1 = (undefined4 *)FUN_100b0368(auStack_10,&stack0x0000001c);
  FUN_100033c0(*puVar1,*(undefined4 *)(param_1 + 0x94));
  return;
}



// Function: FUN_100e60a0 at 100e60a0
// Size: 52 bytes

bool FUN_100e60a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10000060(*(undefined4 *)(param_1 + 0x94));
  return iVar1 == 0;
}



// Function: FUN_100e60d4 at 100e60d4
// Size: 416 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e60d4(int *param_1,int *param_2)

{
  int iVar1;
  short sVar3;
  undefined4 *puVar2;
  ushort uVar4;
  int *piStack00000018;
  int local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piStack00000018 = param_1;
  FUN_100b02d0(&local_28);
  FUN_100b02d0(local_48);
  local_48[0] = _DAT_63e30000;
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x818));
  if (iVar1 != 0) {
    iVar1 = *(int *)param_2[0x25];
    local_40 = *(undefined4 *)(iVar1 + 2);
    local_3c = *(undefined4 *)(iVar1 + 6);
    local_2c._0_2_ = (short)((uint)local_3c >> 0x10);
    if (**(short **)param_2[0x25] == 10) {
      local_28 = CONCAT22(local_2c._0_2_ + -1,*(short *)(iVar1 + 8) + -1);
      local_48[0] = local_28;
    }
    else {
      uVar4 = local_2c._0_2_ - 1;
      local_30 = local_40;
      local_2c = local_3c;
      if (*(short *)(iVar1 + 2) <= (short)uVar4) {
        do {
          local_28 = (uint)uVar4 << 0x10;
          sVar3 = local_2c._2_2_ + -1;
          if (local_30._2_2_ <= sVar3) {
            do {
              local_28 = CONCAT22(local_28._0_2_,sVar3);
              puVar2 = (undefined4 *)FUN_100b0368(auStack_38,&local_28);
              iVar1 = FUN_100033c0(*puVar2,param_2[0x25]);
              if (iVar1 != 0) {
                *piStack00000018 = local_28;
                return;
              }
              sVar3 = sVar3 + -1;
            } while (local_30._2_2_ <= sVar3);
          }
          uVar4 = uVar4 - 1;
        } while (local_30._0_2_ <= (short)uVar4);
      }
    }
  }
  *piStack00000018 = local_48[0];
  return;
}



// Function: FUN_100e6274 at 100e6274
// Size: 324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e6274(int param_1,short param_2,short param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = _DAT_809f0010;
  iVar1 = _DAT_809f000c;
  iVar5 = _DAT_809f0008;
  iVar3 = (int)param_2;
  if (iVar3 < 1) {
    *param_4 = _DAT_809f0004;
    param_4[1] = iVar5;
    param_4[2] = iVar1;
    param_4[3] = iVar2;
  }
  else {
    iVar6 = (int)param_3;
    if ((iVar6 < 1) || ((int)*(short *)(param_1 + 0x80) < iVar3 + iVar6 + -1)) {
      *param_4 = _DAT_809f0004;
      param_4[1] = iVar5;
      param_4[2] = iVar1;
      param_4[3] = iVar2;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x88);
      if (*(short *)(piVar4 + 5) == 1) {
        iVar1 = FUN_10117884((int)*(short *)(*piVar4 + 200) + (int)piVar4,1);
        iVar5 = iVar1 * (iVar3 + -1);
        iVar1 = iVar1 * iVar6;
      }
      else {
        iVar5 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                             (int)*(short *)(**(int **)(param_1 + 0x88) + 0xd0),1,
                             (int)(short)(param_2 + -1));
        iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x88) +
                             (int)*(short *)(**(int **)(param_1 + 0x88) + 0xd0),iVar3,iVar6);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x10);
      *param_4 = iVar5;
      param_4[1] = 0;
      param_4[2] = iVar5 + iVar1;
      param_4[3] = iVar2;
    }
  }
  return;
}



// Function: FUN_100e63b8 at 100e63b8
// Size: 516 bytes

void FUN_100e63b8(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined2 local_48;
  undefined2 local_46;
  short local_44;
  short local_42;
  
  piVar4 = &local_a8;
  piVar3 = &local_a4;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818));
  if (iVar1 == 0) {
    FUN_10108640(param_1,param_2);
  }
  else {
    iVar1 = *(int *)param_1[0x25];
    local_48 = *(undefined2 *)(iVar1 + 2);
    local_46 = *(undefined2 *)(iVar1 + 4);
    local_44 = *(short *)(iVar1 + 6);
    local_42 = *(short *)(iVar1 + 8);
    iVar1 = *param_1;
    puVar2 = (undefined4 *)FUN_100b057c(&local_48,0);
    FUN_10117884((int)*(short *)(iVar1 + 0x760) + (int)param_1,*puVar2,auStack_58);
    local_70 = CONCAT22(local_44 + -1,local_42 + -1);
    FUN_10117884((int)*(short *)(*param_1 + 0x760) + (int)param_1,local_70,auStack_68);
    FUN_100e18f4(auStack_58,&local_a0,auStack_68);
    local_88 = local_a0;
    uStack_84 = uStack_9c;
    uStack_80 = uStack_98;
    uStack_7c = uStack_94;
    local_8c = FUN_100e1a3c(auStack_58,1);
    local_a4 = FUN_100e1a3c(auStack_68,1);
    if (local_a4 < local_8c) {
      piVar3 = &local_8c;
    }
    iVar1 = *piVar3;
    local_90 = FUN_100e1a3c(auStack_58,0);
    local_a8 = FUN_100e1a3c(auStack_68,0);
    if (local_a8 < local_90) {
      piVar4 = &local_90;
    }
    local_78 = *piVar4;
    local_74 = iVar1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),&local_88,&local_78,param_2);
  }
  return;
}



// Function: FUN_100e65bc at 100e65bc
// Size: 536 bytes

void FUN_100e65bc(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_58 [3];
  int local_4c;
  int local_48 [2];
  undefined1 auStack_40 [20];
  
  iVar5 = (int)param_2;
  piVar4 = local_58;
  piVar3 = local_58 + 2;
  piVar2 = local_48;
  if ((1 < *(short *)(param_1[0x21] + 0x14)) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7b8) + (int)param_1,1), iVar1 != param_4)) {
    local_48[1] = 1;
    local_48[0] = iVar5;
    if (iVar5 < 1) {
      piVar2 = local_48 + 1;
    }
    iVar1 = *piVar2;
    local_4c = 1;
    local_58[2] = (*(short *)((int)param_1 + 0x82) - iVar5) + 1;
    if (local_58[2] < 1) {
      piVar3 = &local_4c;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(int)(short)iVar1,
                 (int)(short)*piVar3,auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xb0),iVar5,(int)param_3);
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0xa8),iVar5,(int)param_3,
                 (int)param_4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    local_58[1] = 1;
    local_58[0] = (*(short *)((int)param_1 + 0x82) - iVar5) + 1;
    if (local_58[0] < 1) {
      piVar4 = local_58 + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768),(int)(short)iVar1,
                 (int)(short)*piVar4,auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
  }
  return;
}



// Function: FUN_100e67d4 at 100e67d4
// Size: 536 bytes

void FUN_100e67d4(int *param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_58 [3];
  int local_4c;
  int local_48 [2];
  undefined1 auStack_40 [20];
  
  iVar5 = (int)param_2;
  piVar4 = local_58;
  piVar3 = local_58 + 2;
  piVar2 = local_48;
  if ((*(short *)(param_1[0x22] + 0x14) != 1) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7c0) + (int)param_1,1), iVar1 != param_4)) {
    local_48[1] = 1;
    local_48[0] = iVar5;
    if (iVar5 < 1) {
      piVar2 = local_48 + 1;
    }
    iVar1 = *piVar2;
    local_4c = 1;
    local_58[2] = (*(short *)(param_1 + 0x20) - iVar5) + 1;
    if (local_58[2] < 1) {
      piVar3 = &local_4c;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(int)(short)iVar1,
                 (int)(short)*piVar3,auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
    FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xb0),iVar5,(int)param_3);
    FUN_10117884(param_1[0x22] + (int)*(short *)(*(int *)param_1[0x22] + 0xa8),iVar5,(int)param_3,
                 (int)param_4);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    local_58[1] = 1;
    local_58[0] = (*(short *)(param_1 + 0x20) - iVar5) + 1;
    if (local_58[0] < 1) {
      piVar4 = local_58 + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),(int)(short)iVar1,
                 (int)(short)*piVar4,auStack_40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d8),auStack_40);
  }
  return;
}



// Function: FUN_100e69ec at 100e69ec
// Size: 108 bytes

void FUN_100e69ec(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined2 uStack0000001c;
  undefined2 uStack0000001e;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  uStack0000001c = (undefined2)((uint)param_2 >> 0x10);
  local_8 = uStack0000001c;
  uStack0000001e = (undefined2)param_2;
  local_6 = uStack0000001e;
  local_4 = uStack0000001c;
  local_2 = uStack0000001e;
  _uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850),&local_8,param_3,param_4,param_5);
  return;
}



// Function: FUN_100e6a58 at 100e6a58
// Size: 96 bytes

void FUN_100e6a58(int *param_1,undefined1 param_2)

{
  FUN_10000138(param_1[0x27]);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),param_1[0x27],0,param_2,1);
  return;
}



// Function: FUN_100e6ab8 at 100e6ab8
// Size: 504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e6ab8(int *param_1,undefined4 param_2,char param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  undefined1 auStack_140 [276];
  undefined4 local_2c;
  
  if (param_4 != '\0') {
    FUN_100005a0(param_1[0x25],_DAT_2c030000);
  }
  FUN_100ee64c(auStack_140);
  FUN_10000600(local_2c,1,1,(int)(short)(*(short *)((int)param_1 + 0x82) + 1),
               (int)(short)(*(short *)(param_1 + 0x20) + 1));
  FUN_10002be0(param_2,local_2c,local_2c);
  if (param_3 == '\0') {
    if (param_5 != '\0') {
      FUN_100005a0(local_2c,param_1[0x25]);
      goto LAB_100e6bbc;
    }
  }
  else if (param_5 != '\0') {
    FUN_10003060(local_2c,param_1[0x25],param_1[0x25]);
    goto LAB_100e6bbc;
  }
  FUN_10000108(param_1[0x25],local_2c,param_1[0x25]);
LAB_100e6bbc:
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b0),param_1);
  FUN_100005a0(param_1[0x25],param_1[0x26]);
  if (param_4 != '\0') {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x470));
    FUN_10000108(_DAT_2c030000,param_1[0x25],_DAT_8082da40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),_DAT_8082da40,uVar1,1);
    FUN_10000108(param_1[0x25],_DAT_2c030000,_DAT_8082da40);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),_DAT_8082da40,1,uVar1);
  }
  FUN_100ee77c(auStack_140,2);
  return;
}



// Function: FUN_100e6cb0 at 100e6cb0
// Size: 184 bytes

void FUN_100e6cb0(int *param_1,short *param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  
  iVar1 = FUN_100b0718(param_2,&DAT_3860ffff);
  if (iVar1 == 0) {
    FUN_10000600(param_1[0x27],(int)param_2[1],(int)*param_2,(int)(short)(param_2[3] + 1),
                 (int)(short)(param_2[2] + 1));
  }
  else {
    FUN_10000138(param_1[0x27]);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848),param_1[0x27],param_3,param_4,
               param_5);
  return;
}



// Function: FUN_100e6d74 at 100e6d74
// Size: 188 bytes

void FUN_100e6d74(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puStack00000018;
  int local_44;
  
  puStack00000018 = param_1;
  iVar1 = FUN_10117884((int)*(int **)(param_2 + 0x84) +
                       (int)*(short *)(**(int **)(param_2 + 0x84) + 0xc0),param_3[1]);
  iVar2 = FUN_10117884((int)*(int **)(param_2 + 0x88) +
                       (int)*(short *)(**(int **)(param_2 + 0x88) + 0xc0),*param_3);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    *puStack00000018 = **(undefined4 **)(local_44 + -0xe60);
  }
  else {
    *puStack00000018 = CONCAT22((short)iVar2,(short)iVar1);
  }
  return;
}



// Function: FUN_100e6e30 at 100e6e30
// Size: 180 bytes

void FUN_100e6e30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 *puStack00000018;
  undefined4 local_18;
  
  puStack00000018 = param_1;
  FUN_100b02d0(&local_18);
  iVar1 = FUN_10117884((int)*(int **)(param_2 + 0x84) +
                       (int)*(short *)(**(int **)(param_2 + 0x84) + 0xc0),param_3[1]);
  uVar2 = (undefined2)iVar1;
  if (iVar1 == 0) {
    uVar2 = *(undefined2 *)(param_2 + 0x82);
  }
  local_18 = CONCAT22(local_18._0_2_,uVar2);
  iVar1 = FUN_10117884((int)*(int **)(param_2 + 0x88) +
                       (int)*(short *)(**(int **)(param_2 + 0x88) + 0xc0),*param_3);
  uVar2 = (undefined2)iVar1;
  if (iVar1 == 0) {
    uVar2 = *(undefined2 *)(param_2 + 0x80);
  }
  local_18 = CONCAT22(uVar2,local_18._2_2_);
  *puStack00000018 = local_18;
  return;
}



// Function: FUN_100e6eec at 100e6eec
// Size: 40 bytes

void FUN_100e6eec(void)

{
  FUN_100e1ea4(0);
  return;
}



// Function: FUN_100e6f20 at 100e6f20
// Size: 496 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e6f20(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int local_140;
  int iStack_13c;
  int iStack_138;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100e2fe8(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(short *)(param_1 + 0x2b) = (short)iVar1;
    if (iVar1 != -1) {
      FUN_100f06dc(iVar1,&local_140);
      param_1[0x28] = local_140;
      param_1[0x29] = iStack_13c;
      param_1[0x2a] = iStack_138;
    }
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)(param_1 + 0x2c) = uVar2;
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x880));
  if ((0 < *(short *)(param_1 + 0x20)) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x7c0) + (int)param_1,1), iVar1 == 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),1,(int)*(short *)(param_1 + 0x20),
                 (int)(short)(*(short *)((int)param_1 + 0xb2) + *(short *)(param_1 + 0x24)));
  }
  if (((*(short *)((int)param_1 + 0x82) == 1) && (*(char *)((int)param_1 + 0x45) != '\x05')) &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1), iVar1 == 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828),1,
                 (int)*(short *)((int)param_1 + 0x82),(int)(short)param_1[0xe]);
  }
  return;
}



// Function: FUN_100e7110 at 100e7110
// Size: 116 bytes

void FUN_100e7110(int param_1,int *param_2)

{
  FUN_100e3274(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xac));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xb0));
  return;
}



// Function: FUN_100e7184 at 100e7184
// Size: 192 bytes

void FUN_100e7184(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined1 auStack_120 [8];
  undefined1 local_118 [260];
  
  local_118[0] = 0;
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878),param_2,local_118);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),(int)uStack0000001c._2_2_);
  if (0 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x288) + (int)param_1,param_3,auStack_120);
    FUN_100f01ac(local_118,auStack_120,(int)*(short *)((int)param_1 + 0xae),
                 *(undefined1 *)(param_1 + 0x2c));
  }
  return;
}



// Function: FUN_100e7244 at 100e7244
// Size: 96 bytes

bool FUN_100e7244(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1010900c(param_1);
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x888) + (int)param_1);
  }
  return iVar1 != 0;
}



// Function: FUN_100e72a4 at 100e72a4
// Size: 188 bytes

void FUN_100e72a4(int *param_1)

{
  undefined2 uVar1;
  int local_4c;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  short local_1c [3];
  ushort local_16;
  
  FUN_10000660(&local_20);
  FUN_10000198(**(undefined4 **)(local_4c + -0x98));
  FUN_100ee844(auStack_28,*(undefined1 *)(param_1 + 0x2c));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  uVar1 = FUN_100ef96c(local_1c);
  *(undefined2 *)((int)param_1 + 0xb2) = uVar1;
  *(ushort *)(param_1 + 0x2d) =
       local_1c[0] + ((short)local_16 >> 1) + (ushort)((short)local_16 < 0 && (local_16 & 1) != 0);
  FUN_100ee8e8(auStack_28,2);
  FUN_10000198(local_20);
  return;
}



// Function: FUN_100e7360 at 100e7360
// Size: 64 bytes

void FUN_100e7360(int param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = *(undefined4 *)(param_1 + 0xa0);
  uStack_c = *(undefined4 *)(param_1 + 0xa4);
  uStack_8 = *(undefined4 *)(param_1 + 0xa8);
  FUN_100f0788(&local_10);
  FUN_10000030();
  return;
}



// Function: FUN_100e73a0 at 100e73a0
// Size: 68 bytes

void FUN_100e73a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100012d8(&DAT_7c0803a6,param_3,DAT_7c0803a6 + 1);
  return;
}



// Function: FUN_100e73ec at 100e73ec
// Size: 40 bytes

void FUN_100e73ec(void)

{
  FUN_100e1f44(0);
  return;
}



// Function: FUN_100e7420 at 100e7420
// Size: 124 bytes

undefined4 FUN_100e7420(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sStack0000001c;
  
  _sStack0000001c = param_2;
  iVar1 = FUN_100e363c(param_1,param_2);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x8a0) + (int)param_1,(int)sStack0000001c),
     iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100e74c8 at 100e74c8
// Size: 64 bytes

void FUN_100e74c8(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),(int)param_2,(int)param_3);
  return;
}



// Function: FUN_100e7508 at 100e7508
// Size: 68 bytes

void FUN_100e7508(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8a8),1,(int)param_2);
  return;
}



// Function: FUN_100e754c at 100e754c
// Size: 84 bytes

void FUN_100e754c(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8a8),
               (int)(short)((*(short *)(param_1 + 0x20) - param_2) + 1),(int)param_2);
  return;
}



// Function: FUN_100e75a0 at 100e75a0
// Size: 340 bytes

void FUN_100e75a0(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte local_118 [256];
  
  local_118[0] = 0;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x898),1);
  iVar3 = 1;
  if (0 < *(short *)(param_1 + 0x20)) {
    do {
      uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x898),iVar3);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x890),uVar1,local_118);
      FUN_100b1c88(local_118,*param_2 + 1,(int)(short)((ushort)local_118[0] - (ushort)*param_2));
      iVar2 = .glue::FUN_10115b60(local_118,param_2,0,1);
      if (-1 < iVar2) break;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 <= *(short *)(param_1 + 0x20));
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),uVar1,0,1,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
  return;
}



// Function: FUN_100e76f4 at 100e76f4
// Size: 76 bytes

int FUN_100e76f4(int *param_1)

{
  short local_10 [4];
  
  FUN_10117884(local_10,(int)param_1 + (int)*(short *)(*param_1 + 0x7b0));
  return (int)local_10[0];
}



// Function: FUN_100e7740 at 100e7740
// Size: 60 bytes

void FUN_100e7740(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),(int)param_2);
  return;
}



// Function: FUN_100e777c at 100e777c
// Size: 60 bytes

void FUN_100e777c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),1);
  return;
}



// Function: FUN_100e77b8 at 100e77b8
// Size: 68 bytes

void FUN_100e77b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100012d8(&DAT_7c0803a6,param_3,DAT_7c0803a6 + 1);
  return;
}



// Function: FUN_100e7808 at 100e7808
// Size: 64 bytes

void FUN_100e7808(int *param_1,undefined4 param_2)

{
  int iVar1;
  short sStack0000001c;
  
  sStack0000001c = (short)((uint)param_2 >> 0x10);
  iVar1 = (int)sStack0000001c;
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x890),iVar1);
  return;
}



// Function: FUN_100e7848 at 100e7848
// Size: 80 bytes

void FUN_100e7848(int *param_1,short param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),(int)param_2,(int)param_3,
               (int)(short)(*(short *)((int)param_1 + 0xb2) + *(short *)(param_1 + 0x24)));
  return;
}



// Function: FUN_100e7898 at 100e7898
// Size: 68 bytes

void FUN_100e7898(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8d0),1,(int)param_2);
  return;
}



// Function: FUN_100e78dc at 100e78dc
// Size: 80 bytes

void FUN_100e78dc(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8d0),
               (int)(short)(*(short *)(param_1 + 0x20) + 1),(int)param_2);
  return;
}



// Function: FUN_100e792c at 100e792c
// Size: 80 bytes

void FUN_100e792c(int *param_1,undefined2 param_2)

{
  undefined4 local_8;
  
  local_8 = CONCAT22(param_2,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x800),local_8);
  return;
}



// Function: FUN_100e797c at 100e797c
// Size: 80 bytes

void FUN_100e797c(int *param_1,undefined2 param_2)

{
  undefined4 local_8;
  
  local_8 = CONCAT22(param_2,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x810),local_8);
  return;
}



// Function: FUN_100e79cc at 100e79cc
// Size: 76 bytes

int FUN_100e79cc(int *param_1)

{
  short local_10 [4];
  
  FUN_10117884(local_10,(int)param_1 + (int)*(short *)(*param_1 + 0x820));
  return (int)local_10[0];
}



// Function: FUN_100e7a18 at 100e7a18
// Size: 164 bytes

void FUN_100e7a18(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x34);
  uStack_14 = *(undefined4 *)(param_1 + 0x38);
  FUN_1010b818(param_1,param_2,param_3);
  if ((*(short *)(param_1 + 0x82) == 1) &&
     (iVar1 = FUN_100e11c8((undefined4 *)(param_1 + 0x34),&local_18), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x84);
    *(int *)(iVar1 + 0x10) =
         *(int *)(iVar1 + 0x10) +
         (*(int *)(param_1 + 0x38) - (int)*(short *)(**(int **)(iVar1 + 0x18) + 2));
    *(short *)(**(int **)(*(int *)(param_1 + 0x84) + 0x18) + 2) =
         (short)*(undefined4 *)(param_1 + 0x38);
  }
  return;
}



// Function: FUN_100e7abc at 100e7abc
// Size: 76 bytes

void FUN_100e7abc(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int iVar1;
  short sStack0000001c;
  
  sStack0000001c = (short)((uint)param_2 >> 0x10);
  iVar1 = (int)sStack0000001c;
  _sStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8f0),iVar1,param_3,param_4,param_5);
  return;
}



// Function: FUN_100e7b08 at 100e7b08
// Size: 112 bytes

void FUN_100e7b08(undefined4 param_1,short param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  int *piVar1;
  int local_10 [2];
  undefined4 local_8;
  
  piVar1 = local_10;
  local_10[1] = 1;
  local_10[0] = (int)param_2;
  if (1 < param_2) {
    piVar1 = local_10 + 1;
  }
  local_8 = CONCAT22(param_2,(short)*piVar1);
  FUN_100e69ec(param_1,local_8,param_3,param_4,param_5);
  return;
}



// Function: FUN_100e7b78 at 100e7b78
// Size: 68 bytes

void FUN_100e7b78(int *param_1,short param_2,short param_3,short param_4)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),(int)param_2,(int)param_3,
               (int)param_4);
  return;
}



// Function: FUN_100e7bbc at 100e7bbc
// Size: 72 bytes

void FUN_100e7bbc(int *param_1,short param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828),1,1,(int)param_2);
  return;
}



// Function: FUN_100e7c0c at 100e7c0c
// Size: 40 bytes

void FUN_100e7c0c(void)

{
  FUN_100e4930(0);
  return;
}



// Function: FUN_100e7c34 at 100e7c34
// Size: 92 bytes

void FUN_100e7c34(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_100c3e70(param_1);
  return;
}



// Function: FUN_100e7c90 at 100e7c90
// Size: 200 bytes

void FUN_100e7c90(int param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x8c) = *param_2;
  if ((*(char *)(param_1 + 0x88) != '\0') &&
     (iVar3 = FUN_10000060(*(undefined4 *)(param_1 + 0x98)), iVar3 == 0)) {
    iVar3 = **(int **)(param_1 + 0x98);
    sVar1 = *(short *)(iVar3 + 2);
    sVar2 = *(short *)(iVar3 + 6);
    if (*(short *)(param_1 + 0x8e) < *(short *)(iVar3 + 4)) {
      *(short *)(param_1 + 0x8e) = *(short *)(iVar3 + 8) + -1;
    }
    else {
      *(short *)(param_1 + 0x8e) = *(short *)(iVar3 + 4);
    }
    if (*(short *)(param_1 + 0x8c) < sVar1) {
      *(short *)(param_1 + 0x8c) = sVar2 + -1;
    }
    else {
      *(short *)(param_1 + 0x8c) = sVar1;
    }
  }
  return;
}



// Function: FUN_100e7d58 at 100e7d58
// Size: 384 bytes

void FUN_100e7d58(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [4];
  short local_2c;
  short local_2a;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                       (int)*(short *)(**(int **)(param_1 + 0x84) + 0x740),*param_2);
  if (iVar1 != 0) {
    if ((*(char *)(*(int *)(param_1 + 0x84) + 0x8e) == '\0') && (*(char *)(param_1 + 0x88) != '\0'))
    {
      uVar4 = FUN_100b0574(auStack_30);
      puVar2 = (undefined4 *)FUN_100b0368(auStack_28,param_2);
      puVar3 = (undefined4 *)FUN_100b0368(auStack_20,param_1 + 0x8c);
      FUN_10000c00(*puVar3,*puVar2,uVar4);
      local_2a = local_2a + 1;
      local_2c = local_2c + 1;
    }
    else {
      FUN_100b0574(auStack_30);
      FUN_10003108();
    }
    uVar4 = FUN_100b0578(auStack_30);
    FUN_10003150(*(undefined4 *)(param_1 + 0x94),uVar4);
    if ((*(char *)(param_1 + 0x89) != '\0') && (*(char *)(*(int *)(param_1 + 0x84) + 0x8e) == '\0'))
    {
      if (*(char *)(param_1 + 0x8a) == '\0') {
        FUN_10003060(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x94));
      }
      else {
        FUN_10000108(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x94));
      }
    }
  }
  return;
}



// Function: FUN_100e7ed8 at 100e7ed8
// Size: 160 bytes

void FUN_100e7ed8(int param_1)

{
  FUN_10000108(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),
               *(undefined4 *)(param_1 + 0x9c));
  FUN_10117884((int)*(int **)(param_1 + 0x84) + (int)*(short *)(**(int **)(param_1 + 0x84) + 0x748),
               *(undefined4 *)(param_1 + 0x9c),4,1);
  FUN_10000108(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
               *(undefined4 *)(param_1 + 0x9c));
  FUN_10117884((int)*(int **)(param_1 + 0x84) + (int)*(short *)(**(int **)(param_1 + 0x84) + 0x748),
               *(undefined4 *)(param_1 + 0x9c),1,4);
  return;
}



// Function: FUN_100e7f84 at 100e7f84
// Size: 388 bytes

int * FUN_100e7f84(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,char param_6)

{
  undefined4 *puVar1;
  undefined1 uVar3;
  int iVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  int local_30 [2];
  undefined1 auStack_28 [12];
  
  if (param_6 != '\0') {
    FUN_100b02d0(local_30);
    local_48 = *param_5;
    uStack_44 = param_5[1];
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x600),auStack_40);
    FUN_100e1264(&local_48,auStack_40);
    FUN_10117884(local_30,param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x860),&local_48);
    if ((param_2 == '\0') &&
       (FUN_10117884((int)*(short *)(*param_1 + 0x1c8) + (int)param_1,local_30),
       *(char *)((int)param_1 + 0x89) != '\0')) {
      puVar1 = (undefined4 *)FUN_100b0368(auStack_28,param_1 + 0x23);
      uVar3 = FUN_100033c0(*puVar1,*(undefined4 *)(param_1[0x21] + 0x94));
      *(undefined1 *)((int)param_1 + 0x8a) = uVar3;
    }
    iVar2 = FUN_100b04bc(local_30,param_1 + 0x24);
    if (iVar2 != 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0),local_30);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
      FUN_100005a0(param_1[0x25],param_1[0x26]);
      param_1[0x24] = local_30[0];
    }
  }
  return param_1;
}



// Function: FUN_100e8108 at 100e8108
// Size: 180 bytes

void FUN_100e8108(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x84);
  if (*(char *)((int)piVar3 + 0x8e) == '\0') {
    FUN_10117884((int)*(int **)(param_1 + 0x84) +
                 (int)*(short *)(**(int **)(param_1 + 0x84) + 0x848),*(undefined4 *)(param_1 + 0x94)
                 ,0,0,1);
  }
  else {
    iVar2 = *piVar3;
    puVar1 = (undefined4 *)FUN_100b057c(**(int **)(param_1 + 0x94) + 2,0);
    FUN_10117884((int)piVar3 + (int)*(short *)(iVar2 + 0x838),*puVar1,0,0,1);
  }
  return;
}



// Function: FUN_100e81c4 at 100e81c4
// Size: 104 bytes

undefined4 * FUN_100e81c4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa0), param_1 != (undefined4 *)0x0)) {
    FUN_100e4930(param_1);
    *param_1 = 0x80df0018;
  }
  return param_1;
}



// Function: FUN_100e822c at 100e822c
// Size: 40 bytes

void FUN_100e822c(void)

{
  FUN_100e81c4(0);
  return;
}



// Function: FUN_100e8254 at 100e8254
// Size: 376 bytes

void FUN_100e8254(int param_1,short *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x84) +
                       (int)*(short *)(**(int **)(param_1 + 0x84) + 0x740),*(undefined4 *)param_2);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(param_1 + 0x84) + 0x8e) == '\0') {
      uVar4 = FUN_100b0574(&local_30);
      puVar2 = (undefined4 *)FUN_100b0368(auStack_28,param_2);
      puVar3 = (undefined4 *)FUN_100b0368(auStack_20,param_1 + 0x8c);
      FUN_10000c00(*puVar3,*puVar2,uVar4);
      local_2c = CONCAT22(local_2c._0_2_ + 1,local_2c._2_2_ + 1);
    }
    else {
      local_30 = *(undefined4 *)param_2;
      local_34 = CONCAT22(*param_2 + 1,param_2[1] + 1);
      local_2c = local_34;
    }
    uVar4 = FUN_100b0578(&local_30);
    FUN_10003150(*(undefined4 *)(param_1 + 0x94),uVar4);
    if ((*(char *)(param_1 + 0x89) != '\0') && (*(char *)(*(int *)(param_1 + 0x84) + 0x8e) == '\0'))
    {
      if (*(char *)(param_1 + 0x8a) == '\0') {
        FUN_10003060(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x94));
      }
      else {
        FUN_10000108(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x94));
      }
    }
  }
  return;
}



// Function: FUN_100e83cc at 100e83cc
// Size: 484 bytes

int * FUN_100e83cc(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,char param_6)

{
  undefined4 *puVar1;
  undefined1 uVar3;
  int iVar2;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38 [2];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  FUN_100b02d0(local_38);
  if (param_6 != '\0') {
    FUN_10117884(param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x600),auStack_50);
    local_40 = *param_5;
    uStack_3c = param_5[1];
    FUN_100e1264(&local_40,auStack_50);
    FUN_10117884(local_38,param_1[0x21] + (int)*(short *)(*(int *)param_1[0x21] + 0x860),&local_40);
    if ((param_2 == '\0') &&
       (FUN_10117884((int)*(short *)(*param_1 + 0x1c8) + (int)param_1,local_38),
       *(char *)((int)param_1 + 0x89) != '\0')) {
      puVar1 = (undefined4 *)FUN_100b0368(auStack_30,param_1 + 0x23);
      uVar3 = FUN_100033c0(*puVar1,*(undefined4 *)(param_1[0x21] + 0x94));
      *(undefined1 *)((int)param_1 + 0x8a) = uVar3;
    }
    iVar2 = FUN_100b04bc(local_38,param_1 + 0x24);
    if (iVar2 != 0) {
      if (((*(char *)(param_1 + 0x22) == '\0') && (param_2 != '\0')) &&
         (FUN_10117884((int)*(short *)(*param_1 + 0x1c8) + (int)param_1,local_38),
         *(char *)((int)param_1 + 0x89) != '\0')) {
        puVar1 = (undefined4 *)FUN_100b0368(auStack_28,param_1 + 0x23);
        uVar3 = FUN_100033c0(*puVar1,*(undefined4 *)(param_1[0x21] + 0x94));
        *(undefined1 *)((int)param_1 + 0x8a) = uVar3;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0),local_38);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
      FUN_100005a0(param_1[0x25],param_1[0x26]);
      param_1[0x24] = local_38[0];
    }
  }
  return param_1;
}



// Function: FUN_100e85b8 at 100e85b8
// Size: 104 bytes

undefined4 * FUN_100e85b8(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa0), param_1 != (undefined4 *)0x0)) {
    FUN_100e81c4(param_1);
    *param_1 = 0x7fc73010;
  }
  return param_1;
}



// Function: FUN_100e8620 at 100e8620
// Size: 40 bytes

void FUN_100e8620(void)

{
  FUN_100e85b8(0);
  return;
}



// Function: FUN_100e8648 at 100e8648
// Size: 60 bytes

void FUN_100e8648(int param_1)

{
  FUN_100e7c90(param_1);
  *(undefined2 *)(param_1 + 0x8e) = 1;
  return;
}



// Function: FUN_100e8684 at 100e8684
// Size: 48 bytes

void FUN_100e8684(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(*(int *)(param_1 + 0x84) + 0x82);
  FUN_100e8254();
  return;
}



// Function: FUN_100e86bc at 100e86bc
// Size: 104 bytes

undefined4 * FUN_100e86bc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa0), param_1 != (undefined4 *)0x0)) {
    FUN_100e81c4(param_1);
    *param_1 = 0x40810008;
  }
  return param_1;
}



// Function: FUN_100e8724 at 100e8724
// Size: 40 bytes

void FUN_100e8724(void)

{
  FUN_100e86bc(0);
  return;
}



// Function: FUN_100e874c at 100e874c
// Size: 60 bytes

void FUN_100e874c(int param_1)

{
  FUN_100e7c90(param_1);
  *(undefined2 *)(param_1 + 0x8c) = 1;
  return;
}



// Function: FUN_100e8788 at 100e8788
// Size: 48 bytes

void FUN_100e8788(int param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)(*(int *)(param_1 + 0x84) + 0x80);
  FUN_100e8254();
  return;
}



// Function: FUN_100e87b8 at 100e87b8
// Size: 68 bytes

int FUN_100e87b8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  return (int)*(short *)(param_1 + 1);
}



// Function: FUN_100e87fc at 100e87fc
// Size: 108 bytes

int FUN_100e87fc(int *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    sVar1 = *(short *)(param_1 + 1);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x18) + (int)param_1);
    sVar1 = *(short *)(param_1 + 1);
  }
  return (int)sVar1;
}



// Function: FUN_100e8900 at 100e8900
// Size: 68 bytes

int FUN_100e8900(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  return (int)*(short *)(param_1 + 1);
}



// Function: FUN_100e8944 at 100e8944
// Size: 108 bytes

int FUN_100e8944(int *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar2 == 0) {
    sVar1 = *(short *)(param_1 + 1);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x18) + (int)param_1);
    sVar1 = *(short *)(param_1 + 1);
  }
  return (int)sVar1;
}



// Function: FUN_100e8a48 at 100e8a48
// Size: 72 bytes

void FUN_100e8a48(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_100e87b8(param_1 + 0xc);
  *(undefined2 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100e8900(param_1 + 0x18);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}



// Function: FUN_100e8a90 at 100e8a90
// Size: 248 bytes

void FUN_100e8a90(int param_1)

{
  undefined2 uVar2;
  int iVar1;
  int iVar3;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar3 = param_1 + 0xc;
    uVar2 = FUN_100e87fc(iVar3);
    *(undefined2 *)(param_1 + 4) = uVar2;
    iVar1 = FUN_100e4754(iVar3);
    if (iVar1 == 0) {
      uVar2 = FUN_100e8944();
      *(undefined2 *)(param_1 + 6) = uVar2;
      iVar1 = FUN_100e4770(param_1 + 0x18);
      if (iVar1 != 0) {
        uVar2 = FUN_100e87b8(iVar3);
        *(undefined2 *)(param_1 + 4) = uVar2;
      }
    }
  }
  else {
    iVar3 = param_1 + 0x18;
    uVar2 = FUN_100e8944(iVar3);
    *(undefined2 *)(param_1 + 6) = uVar2;
    iVar1 = FUN_100e4770(iVar3);
    if (iVar1 == 0) {
      uVar2 = FUN_100e87fc();
      *(undefined2 *)(param_1 + 4) = uVar2;
      iVar1 = FUN_100e4754(param_1 + 0xc);
      if (iVar1 != 0) {
        uVar2 = FUN_100e8900(iVar3);
        *(undefined2 *)(param_1 + 6) = uVar2;
      }
    }
  }
  return;
}



// Function: FUN_100e8b88 at 100e8b88
// Size: 336 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8b88(void)

{
  FUN_100c1c8c(&DAT_7c0802a6,_DAT_63be0000,0x1c,&DAT_809f0014,0x90c30020);
  FUN_100c1c8c(0x4bffff80,_DAT_63830000,0xa0,0x63c50000,&DAT_80410014);
  FUN_100c1c8c(&DAT_80010058,_DAT_4beebfd1,0xb8,&DAT_80410014,0x4bffff80);
  FUN_100c1c8c(&DAT_7c0803a6,_DAT_7fbee811,0xb8,0x7f9cf014,&DAT_80010058);
  FUN_100c1c8c(&DAT_607f0000,_DAT_809f0014,0xa0,0x7c9e2014,&DAT_2c090000);
  FUN_100c1c8c(0x637d0000,_DAT_909f0014,0xa0,&DAT_41820030,&DAT_607f0000);
  FUN_100c1c8c(&DAT_80ff0014,_DAT_80df0024,0xa0,0x8186001c,0x637d0000);
  FUN_100c1c8c(&DAT_7c1ee800,_DAT_a8660018,0xa0,&DAT_7c7f1814,0x637d0000);
  _DAT_4800089d = 0xffffffff;
  return;
}



// Function: FUN_100e8cdc at 100e8cdc
// Size: 8 bytes

undefined1 * FUN_100e8cdc(void)

{
  return &DAT_2c03ffff;
}



// Function: FUN_100e8cec at 100e8cec
// Size: 200 bytes

undefined4 * FUN_100e8cec(undefined4 *param_1)

{
  int *piVar1;
  int local_18;
  int local_14 [2];
  
  piVar1 = &local_18;
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x128), param_1 != (undefined4 *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = 0x4082ffa0;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[0x49] = 0;
    FUN_100b1d90(param_1 + 8,&DAT_8041002c);
    local_14[0] = FUN_10000eb8();
    local_18 = 0xff;
    if (local_14[0] < 0xff) {
      piVar1 = local_14;
    }
    param_1[0x48] = *piVar1;
  }
  return param_1;
}



// Function: FUN_100e8db4 at 100e8db4
// Size: 40 bytes

void FUN_100e8db4(void)

{
  FUN_100e8cec(0);
  return;
}



// Function: FUN_100e8ddc at 100e8ddc
// Size: 328 bytes

void FUN_100e8ddc(int *param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int local_13c;
  undefined1 auStack_118 [260];
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar1 == 0)) &&
      (0x1f < *(short *)(param_2 + 9))) && (*(short *)(param_2 + 9) < 0x80)) {
    if (param_1[0x48] <= *(int *)((int)param_2 + 0x1a) - param_1[0x49]) {
      FUN_100b1d90(param_1 + 8,*(int *)(local_13c + -0x8b4) + 0x1c);
    }
    pbVar2 = (byte *)(param_1 + 8);
    FUN_100b1fb4(pbVar2,(int)(char)*(undefined2 *)(param_2 + 9));
    puVar3 = auStack_118;
    if ((auStack_118 != (undefined1 *)0x0) ||
       (puVar3 = (undefined1 *)FUN_100f56e4(0x100), puVar3 != (undefined1 *)0x0)) {
      FUN_100012d8(pbVar2,puVar3,*pbVar2 + 1);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),auStack_118);
    param_1[0x49] = *(int *)((int)param_2 + 0x1a);
  }
  else {
    FUN_100bfe54(param_1,param_2);
  }
  return;
}



// Function: FUN_100e8f24 at 100e8f24
// Size: 72 bytes

void FUN_100e8f24(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 8) + (int)*(short *)(**(int **)(param_1 + 8) + 0x1a0));
  }
  return;
}



// Function: FUN_100e8f6c at 100e8f6c
// Size: 156 bytes

void FUN_100e8f6c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2), iVar1 == 0)) &&
      (0x1f < *(short *)(param_2 + 9))) && (*(short *)(param_2 + 9) < 0x80)) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)((int)param_2 + 0x1a);
  }
  else {
    FUN_100bfef0(param_1,param_2);
  }
  return;
}



// Function: FUN_100e9010 at 100e9010
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e9010(void)

{
  FUN_100c1c8c(&DAT_2c03ffff,_DAT_63630000,0x128,0x7c7d1810,&DAT_38800000);
  return;
}



// Function: FUN_100e904c at 100e904c
// Size: 112 bytes

undefined4 * FUN_100e904c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x24), param_1 != (undefined4 *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = &DAT_63630000;
    param_1[8] = 0;
  }
  return param_1;
}



// Function: FUN_100e90bc at 100e90bc
// Size: 104 bytes

undefined4 * FUN_100e90bc(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x24), param_1 != (undefined4 *)0x0)) {
    FUN_100e904c(param_1);
    *param_1 = &DAT_80010058;
  }
  return param_1;
}



// Function: FUN_100e9124 at 100e9124
// Size: 44 bytes

void FUN_100e9124(undefined4 param_1)

{
  FUN_100d88b4(param_1,0,4);
  return;
}



// Function: FUN_100e9150 at 100e9150
// Size: 36 bytes

void FUN_100e9150(void)

{
  FUN_100e9124();
  return;
}



// Function: FUN_100e9174 at 100e9174
// Size: 64 bytes

undefined4 FUN_100e9174(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100e90bc(0);
  FUN_100e9150();
  return uVar1;
}



// Function: FUN_100e91b4 at 100e91b4
// Size: 76 bytes

undefined4 FUN_100e91b4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  }
  return 0;
}



// Function: FUN_100e9200 at 100e9200
// Size: 96 bytes

int FUN_100e9200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = FUN_10003858(param_2 - param_1);
    iVar2 = FUN_100034c8();
    param_1 = param_1 + (iVar2 - (iVar2 / iVar1) * iVar1);
  }
  return param_1;
}



// Function: FUN_100e9260 at 100e9260
// Size: 116 bytes

void FUN_100e9260(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_10117884((int)*(int **)(param_2 + 0xc) +
                        (int)*(short *)(**(int **)(param_2 + 0xc) + 0xe0),param_1);
  **(undefined4 **)(param_2 + 8) = *puVar1;
  FUN_10117884(**(undefined4 **)(param_2 + 8),**(undefined4 **)(param_2 + 4));
  return;
}



// Function: FUN_100e92d4 at 100e92d4
// Size: 72 bytes

void FUN_100e92d4(undefined4 param_1,undefined4 *param_2)

{
  FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0x158),*(undefined4 *)*param_2
               ,param_1);
  return;
}



// Function: FUN_100e931c at 100e931c
// Size: 68 bytes

void FUN_100e931c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  FUN_10117884((int)param_3 + (int)*(short *)(*param_3 + 0x158),param_1,param_2);
  return;
}



// Function: FUN_100e9368 at 100e9368
// Size: 40 bytes

void FUN_100e9368(void)

{
  FUN_100e904c(0);
  return;
}



// Function: FUN_100e93b8 at 100e93b8
// Size: 64 bytes

void FUN_100e93b8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158),*param_2,*param_3);
  return;
}



// Function: FUN_100e93f8 at 100e93f8
// Size: 132 bytes

undefined4 FUN_100e93f8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_10 = (undefined1 *)&stack0x00000020;
  local_14 = (undefined1 *)&stack0x0000001c;
  local_c = &local_18;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  local_8 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&DAT_30210050,&local_14);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  return local_18;
}



// Function: FUN_100e947c at 100e947c
// Size: 140 bytes

undefined4 FUN_100e947c(int *param_1,int param_2)

{
  int iVar1;
  int iStack0000001c;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_c = (undefined1 *)&stack0x0000001c;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    iStack0000001c = param_2;
    local_8 = param_1;
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),&DAT_7c0803a6,&local_c,
                         &local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
  }
  return local_10;
}



// Function: FUN_100e9508 at 100e9508
// Size: 64 bytes

void FUN_100e9508(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&stack0x0000001c);
  return;
}



// Function: FUN_100e9548 at 100e9548
// Size: 196 bytes

void FUN_100e9548(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 < param_3) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0),param_2,param_3,param_4,
                         param_5);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),param_2,iVar1,param_4,param_5);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0),iVar1 + 1,param_3,param_4,param_5)
    ;
  }
  return;
}



// Function: FUN_100e960c at 100e960c
// Size: 408 bytes

int FUN_100e960c(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 < param_3) {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_2);
    param_2 = param_2 + -1;
    param_3 = param_3 + 1;
    while( true ) {
      do {
        param_3 = param_3 + -1;
        uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_3);
        iVar3 = FUN_10117884(uVar1,uVar2,param_5);
      } while (iVar3 < 0);
      do {
        param_2 = param_2 + 1;
        uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_2);
        iVar3 = FUN_10117884(uVar1,uVar2,param_5);
      } while (0 < iVar3);
      if (param_3 <= param_2) break;
      local_24 = FUN_10117884((int)*(short *)(*param_1 + 0x120) + (int)param_1,param_2);
      local_28 = FUN_10117884((int)*(short *)(*param_1 + 0x120) + (int)param_1,param_3);
      FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,param_2,&local_28,1);
      FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,param_3,&local_24,1);
    }
  }
  return param_3;
}



// Function: FUN_100e97a4 at 100e97a4
// Size: 264 bytes

void FUN_100e97a4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = FUN_100e9200(param_2,param_3);
  local_24 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_2);
  local_28 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),uVar1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),param_2,&local_28,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xc0),uVar1,&local_24,1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_100e98ac at 100e98ac
// Size: 112 bytes

void FUN_100e98ac(int *param_1)

{
  int iVar1;
  int local_2c;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if (0 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x1a0) + (int)param_1,1,param_1[2],
                 *(undefined4 *)(local_2c + -0x88c),param_1);
  }
  return;
}



// Function: FUN_100e991c at 100e991c
// Size: 120 bytes

void FUN_100e991c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if (0 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x1a0) + (int)param_1,1,param_1[2],param_2,param_3);
  }
  return;
}



// Function: FUN_100e9994 at 100e9994
// Size: 60 bytes

void FUN_100e9994(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_8 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138),param_2,param_3,auStack_8);
  return;
}



// Function: FUN_100e99d0 at 100e99d0
// Size: 88 bytes

undefined4 FUN_100e99d0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  return *puVar1;
}



// Function: FUN_100e9a8c at 100e9a8c
// Size: 88 bytes

void FUN_100e9a8c(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,1);
  return;
}



// Function: FUN_100e9b38 at 100e9b38
// Size: 116 bytes

void FUN_100e9b38(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140)), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x178) + (int)param_1,iVar1);
  }
  return;
}



// Function: FUN_100e9bac at 100e9bac
// Size: 80 bytes

undefined4 FUN_100e9bac(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),1);
  }
  return uVar1;
}



// Function: FUN_100e9bfc at 100e9bfc
// Size: 188 bytes

void FUN_100e9bfc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_148 [316];
  
  FUN_100ebf7c(auStack_148,param_1,1);
  uVar1 = FUN_100ec060(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_100f57c8(uVar1);
    uVar1 = FUN_100ec0e8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  FUN_100ebff4(auStack_148,2);
  return;
}



// Function: FUN_100e9cb8 at 100e9cb8
// Size: 88 bytes

void FUN_100e9cb8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}



// Function: FUN_100e9d10 at 100e9d10
// Size: 272 bytes

undefined4 FUN_100e9d10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_148 [78];
  
  if (param_2 != 0) {
    FUN_100ebaf8(local_148,param_1,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),iVar1);
      if (iVar2 == param_2) {
        FUN_100ebc68(local_148,2);
        return iVar1;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar1 = local_148[1];
      iVar2 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0;
}



// Function: FUN_100e9e20 at 100e9e20
// Size: 80 bytes

undefined4 FUN_100e9e20(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
  }
  return uVar1;
}



// Function: FUN_100e9e78 at 100e9e78
// Size: 8 bytes

undefined1 * FUN_100e9e78(void)

{
  return &DAT_4e800020;
}



// Function: FUN_100e9e88 at 100e9e88
// Size: 40 bytes

void FUN_100e9e88(void)

{
  FUN_100e90bc(0);
  return;
}



// Function: FUN_100e9eb0 at 100e9eb0
// Size: 88 bytes

void FUN_100e9eb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  *puVar1 = param_3;
  return;
}



// Function: FUN_100e9f6c at 100e9f6c
// Size: 272 bytes

undefined4 FUN_100e9f6c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int local_150 [79];
  
  FUN_100ebaf8(local_150,param_1,1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  *param_4 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while( true ) {
    if (iVar1 == 0) {
      *param_4 = *(int *)(param_1 + 8) + 1;
      FUN_100ebc68(local_150,2);
      return 0;
    }
    iVar1 = FUN_10117884(*param_4,param_3);
    if (iVar1 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    *param_4 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return 1;
}



// Function: FUN_100ea07c at 100ea07c
// Size: 72 bytes

void FUN_100ea07c(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_1[2] + 1,param_2,1);
  return;
}



// Function: FUN_100ea0c4 at 100ea0c4
// Size: 96 bytes

void FUN_100ea0c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  
  uStack00000020 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,&stack0x00000020,1);
  return;
}



// Function: FUN_100ea17c at 100ea17c
// Size: 64 bytes

void FUN_100ea17c(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c0),1,param_2);
  return;
}



// Function: FUN_100ea1bc at 100ea1bc
// Size: 68 bytes

void FUN_100ea1bc(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c0),param_1[2] + 1,param_2);
  return;
}



// Function: FUN_100ea200 at 100ea200
// Size: 56 bytes

void FUN_100ea200(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  return;
}



// Function: FUN_100ea238 at 100ea238
// Size: 124 bytes

undefined4 FUN_100ea238(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),param_1[2]);
  }
  return uVar1;
}



// Function: FUN_100ea2b4 at 100ea2b4
// Size: 56 bytes

void FUN_100ea2b4(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0));
  return;
}



// Function: FUN_100ea2ec at 100ea2ec
// Size: 124 bytes

undefined4 FUN_100ea2ec(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),1);
  }
  return uVar1;
}



// Function: FUN_100ea368 at 100ea368
// Size: 112 bytes

void FUN_100ea368(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)*(int **)(param_2 + 0xc) +
                       (int)*(short *)(**(int **)(param_2 + 0xc) + 0x128),param_1);
  **(undefined4 **)(param_2 + 8) = uVar1;
  FUN_10117884(**(undefined4 **)(param_2 + 8),**(undefined4 **)(param_2 + 4));
  return;
}



// Function: FUN_100ea3d8 at 100ea3d8
// Size: 72 bytes

void FUN_100ea3d8(undefined4 param_1,undefined4 *param_2)

{
  FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0x168),*(undefined4 *)*param_2
               ,param_1);
  return;
}



// Function: FUN_100ea428 at 100ea428
// Size: 104 bytes

undefined4 * FUN_100ea428(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = &DAT_4e800020;
  }
  return param_1;
}



// Function: FUN_100ea490 at 100ea490
// Size: 40 bytes

void FUN_100ea490(void)

{
  FUN_100ea428(0);
  return;
}



// Function: FUN_100ea4b8 at 100ea4b8
// Size: 44 bytes

void FUN_100ea4b8(undefined4 param_1)

{
  FUN_100d88b4(param_1,0,4);
  return;
}



// Function: FUN_100ea4e4 at 100ea4e4
// Size: 188 bytes

void FUN_100ea4e4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_148 [316];
  
  FUN_100ec170(auStack_148,param_1,1);
  uVar1 = FUN_100ec2c4(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_100ef510(uVar1);
    uVar1 = FUN_100ec34c(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  FUN_100ec1e8(auStack_148,2);
  return;
}



// Function: FUN_100ea5a0 at 100ea5a0
// Size: 88 bytes

void FUN_100ea5a0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  return;
}



// Function: FUN_100ea5f8 at 100ea5f8
// Size: 88 bytes

undefined4 FUN_100ea5f8(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  return *puVar1;
}



// Function: FUN_100ea6b4 at 100ea6b4
// Size: 88 bytes

void FUN_100ea6b4(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,1);
  return;
}



// Function: FUN_100ea760 at 100ea760
// Size: 116 bytes

void FUN_100ea760(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x148)), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x130) + (int)param_1,iVar1);
  }
  return;
}



// Function: FUN_100ea7d4 at 100ea7d4
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ea7d4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_10 = (undefined1 *)&stack0x00000020;
  local_14 = (undefined1 *)&stack0x0000001c;
  local_c = &local_18;
  local_18 = 0;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  local_8 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),_FUN_10117024,&local_14);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  return local_18;
}



// Function: FUN_100ea860 at 100ea860
// Size: 80 bytes

undefined4 FUN_100ea860(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),1);
  }
  return uVar1;
}



// Function: FUN_100ea8b0 at 100ea8b0
// Size: 272 bytes

undefined4 FUN_100ea8b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_148 [78];
  
  if (param_2 != 0) {
    FUN_100ebaf8(local_148,param_1,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),iVar1);
      if (iVar2 == param_2) {
        FUN_100ebc68(local_148,2);
        return iVar1;
      }
      FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
      iVar1 = local_148[1];
      iVar2 = FUN_100ebf44(local_148);
    }
    FUN_100ebc68(local_148,2);
  }
  return 0;
}



// Function: FUN_100ea9c0 at 100ea9c0
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ea9c0(int *param_1,int param_2)

{
  int iVar1;
  int iStack0000001c;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_c = (undefined1 *)&stack0x0000001c;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    iStack0000001c = param_2;
    local_8 = param_1;
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),FUN_10117024,&local_c,
                         &local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
  }
  return local_10;
}



// Function: FUN_100eaa4c at 100eaa4c
// Size: 64 bytes

void FUN_100eaa4c(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&stack0x0000001c);
  return;
}



// Function: FUN_100eaab4 at 100eaab4
// Size: 64 bytes

void FUN_100eaab4(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168),*param_2,*param_3);
  return;
}



// Function: FUN_100eaaf4 at 100eaaf4
// Size: 80 bytes

undefined4 FUN_100eaaf4(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),param_1[2]);
  }
  return uVar1;
}



// Function: FUN_100eab4c at 100eab4c
// Size: 104 bytes

undefined4 * FUN_100eab4c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100ea428(param_1);
    *param_1 = &DAT_9421ffc0;
  }
  return param_1;
}



// Function: FUN_100eabb4 at 100eabb4
// Size: 40 bytes

void FUN_100eabb4(void)

{
  FUN_100eab4c(0);
  return;
}



// Function: FUN_100eabdc at 100eabdc
// Size: 36 bytes

void FUN_100eabdc(void)

{
  FUN_100ea4b8();
  return;
}



// Function: FUN_100eac00 at 100eac00
// Size: 72 bytes

void FUN_100eac00(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_1[2] + 1,param_2,1);
  return;
}



// Function: FUN_100eac48 at 100eac48
// Size: 112 bytes

void FUN_100eac48(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)*(int **)(param_2 + 0xc) +
                       (int)*(short *)(**(int **)(param_2 + 0xc) + 0x120),param_1);
  **(undefined4 **)(param_2 + 8) = uVar1;
  FUN_10117884(**(undefined4 **)(param_2 + 8),**(undefined4 **)(param_2 + 4));
  return;
}



// Function: FUN_100eacb8 at 100eacb8
// Size: 72 bytes

void FUN_100eacb8(undefined4 param_1,undefined4 *param_2)

{
  FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0x158),*(undefined4 *)*param_2
               ,param_1);
  return;
}



// Function: FUN_100ead08 at 100ead08
// Size: 104 bytes

undefined4 * FUN_100ead08(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100d8824(param_1);
    *param_1 = &DAT_607f0000;
  }
  return param_1;
}



// Function: FUN_100ead70 at 100ead70
// Size: 40 bytes

void FUN_100ead70(void)

{
  FUN_100ead08(0);
  return;
}



// Function: FUN_100ead98 at 100ead98
// Size: 44 bytes

void FUN_100ead98(undefined4 param_1)

{
  FUN_100d88b4(param_1,0,4);
  return;
}



// Function: FUN_100eadc4 at 100eadc4
// Size: 88 bytes

undefined4 FUN_100eadc4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  return *puVar1;
}



// Function: FUN_100eae80 at 100eae80
// Size: 88 bytes

void FUN_100eae80(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),param_2,1);
  return;
}



// Function: FUN_100eaf2c at 100eaf2c
// Size: 104 bytes

void FUN_100eaf2c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x148));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x128) + (int)param_1,iVar1);
  }
  return;
}



// Function: FUN_100eaf94 at 100eaf94
// Size: 80 bytes

undefined4 FUN_100eaf94(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),1);
  }
  return uVar1;
}



// Function: FUN_100eafe4 at 100eafe4
// Size: 256 bytes

undefined4 FUN_100eafe4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_148 [78];
  
  FUN_100ebaf8(local_148,param_1,1);
  FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
  iVar1 = local_148[1];
  iVar2 = FUN_100ebf44(local_148);
  while( true ) {
    if (iVar2 == 0) {
      FUN_100ebc68(local_148,2);
      return 0;
    }
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),iVar1);
    if (iVar2 == param_2) break;
    FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
  }
  FUN_100ebc68(local_148,2);
  return iVar1;
}



// Function: FUN_100eb0e4 at 100eb0e4
// Size: 80 bytes

undefined4 FUN_100eb0e4(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
  }
  return uVar1;
}



// Function: FUN_100eb15c at 100eb15c
// Size: 64 bytes

void FUN_100eb15c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158),*param_2,*param_3);
  return;
}



// Function: FUN_100eb19c at 100eb19c
// Size: 112 bytes

void FUN_100eb19c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_10 = (undefined1 *)&stack0x00000020;
  local_14 = (undefined1 *)&stack0x0000001c;
  local_c = &local_18;
  local_18 = 0;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  local_8 = param_1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&DAT_281f0000,&local_14);
  return;
}



// Function: FUN_100eb20c at 100eb20c
// Size: 120 bytes

undefined4 FUN_100eb20c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;
  
  local_c = (undefined1 *)&stack0x0000001c;
  uStack0000001c = param_2;
  local_8 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),&DAT_40820024,&local_c,
                       &local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  return local_10;
}



// Function: FUN_100eb284 at 100eb284
// Size: 64 bytes

void FUN_100eb284(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&stack0x0000001c);
  return;
}



// Function: FUN_100eb2c4 at 100eb2c4
// Size: 92 bytes

undefined4 FUN_100eb2c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),param_2,param_3,&local_8);
  if (iVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_100eb328 at 100eb328
// Size: 104 bytes

undefined4 * FUN_100eb328(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x20), param_1 != (undefined4 *)0x0)) {
    FUN_100ead08(param_1);
    *param_1 = 0x4bfde679;
  }
  return param_1;
}



// Function: FUN_100eb390 at 100eb390
// Size: 40 bytes

void FUN_100eb390(void)

{
  FUN_100eb328(0);
  return;
}



// Function: FUN_100eb3b8 at 100eb3b8
// Size: 272 bytes

undefined4 FUN_100eb3b8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int local_150 [79];
  
  FUN_100ebaf8(local_150,param_1,1);
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  *param_4 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while( true ) {
    if (iVar1 == 0) {
      *param_4 = *(int *)(param_1 + 8) + 1;
      FUN_100ebc68(local_150,2);
      return 0;
    }
    iVar1 = FUN_10117884(*param_4,param_3);
    if (iVar1 == 0) break;
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    *param_4 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  FUN_100ebc68(local_150,2);
  return 1;
}



// Function: FUN_100eb4c8 at 100eb4c8
// Size: 72 bytes

void FUN_100eb4c8(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_1[2] + 1,param_2,1);
  return;
}



// Function: FUN_100eb510 at 100eb510
// Size: 88 bytes

void FUN_100eb510(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2);
  *puVar1 = param_3;
  return;
}



// Function: FUN_100eb5cc at 100eb5cc
// Size: 96 bytes

void FUN_100eb5cc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  
  uStack00000020 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8),param_2,&stack0x00000020,1);
  return;
}



// Function: FUN_100eb684 at 100eb684
// Size: 64 bytes

void FUN_100eb684(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),1,param_2);
  return;
}



// Function: FUN_100eb6c4 at 100eb6c4
// Size: 68 bytes

void FUN_100eb6c4(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178),param_1[2] + 1,param_2);
  return;
}



// Function: FUN_100eb708 at 100eb708
// Size: 56 bytes

void FUN_100eb708(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188));
  return;
}



// Function: FUN_100eb740 at 100eb740
// Size: 124 bytes

undefined4 FUN_100eb740(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x120),param_1[2]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x128),param_1[2]);
  }
  return uVar1;
}



// Function: FUN_100eb7bc at 100eb7bc
// Size: 244 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb7bc(void)

{
  FUN_100c1c8c(&DAT_41860018,_DAT_60000000,0x24,&DAT_607f0000,&DAT_90010008);
  FUN_100c1c8c(&DAT_4e800020,_DAT_281f0000,0x24,&DAT_4082000c,&DAT_41860018);
  FUN_100c1c8c(&DAT_3860ffff,_DAT_63e30000,0x20,&DAT_48000080,&DAT_90010008);
  FUN_100c1c8c(&DAT_90010008,_DAT_289e0000,0x20,&DAT_40860014,&DAT_3860ffff);
  FUN_100c1c8c(&DAT_609e0000,_DAT_33df000c,0x20,&DAT_63c30000,&DAT_90010008);
  FUN_100c1c8c(&DAT_38600048,_DAT_4bffe98d,0x20,0x60000000,&DAT_609e0000);
  return;
}



// Function: FUN_100eb8b0 at 100eb8b0
// Size: 32 bytes

void FUN_100eb8b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x130);
    *(int *)(param_1 + 0x130) = iVar1;
    *(int *)(param_1 + 300) = param_2;
    *(int *)(iVar1 + 300) = param_1;
    *(int *)(param_2 + 0x130) = param_1;
  }
  return;
}



// Function: FUN_100eb8d0 at 100eb8d0
// Size: 64 bytes

undefined4 FUN_100eb8d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x130) == param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x130);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(*(int *)(param_1 + 300) + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = param_1;
  *(int *)(param_1 + 300) = param_1;
  return uVar1;
}



// Function: FUN_100eb910 at 100eb910
// Size: 8 bytes

undefined4 FUN_100eb910(void)

{
  return 0;
}



// Function: FUN_100eb918 at 100eb918
// Size: 4 bytes

void FUN_100eb918(void)

{
  return;
}



// Function: FUN_100eb91c at 100eb91c
// Size: 308 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eb91c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  
  *(int *)(param_1 + 0x130) = param_1;
  *(int *)(param_1 + 300) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(char *)(param_1 + 0x14) = param_5;
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8));
    iVar2 = FUN_100f0334(0,param_4,uVar1);
    *(int *)(param_1 + 0xc) = iVar2;
    iVar2 = FUN_100f0334(1,param_3,iVar2 + 1);
    *(int *)(param_1 + 8) = iVar2;
    if (*(int *)(param_1 + 0xc) < iVar2) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
    }
    else {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
    }
    uVar1 = FUN_100eb8b0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = uVar1;
    *(undefined2 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    uVar1 = *(undefined4 *)(local_3c + -0x824);
    *(int *)(param_1 + 0x120) = _DAT_41820010;
    _DAT_41820010 = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x124) = uVar1;
    *(int *)(param_1 + 0x128) = param_1;
  }
  return;
}



// Function: FUN_100eba50 at 100eba50
// Size: 168 bytes

undefined4 *
FUN_100eba50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    *param_1 = &DAT_63c40000;
    *(undefined2 *)(param_1 + 0x46) = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    FUN_100eb91c(param_1,param_2,param_3,param_4,param_5,param_1 + 6);
  }
  return param_1;
}



// Function: FUN_100ebaf8 at 100ebaf8
// Size: 232 bytes

undefined4 * FUN_100ebaf8(int param_1,int *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_1,param_2);
  if ((param_1 == 0) && (uVar3 = FUN_100eb910(0x134), (int)((ulonglong)uVar3 >> 0x20) == 0)) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
  *puVar2 = &DAT_63c40000;
  *(undefined2 *)(puVar2 + 0x46) = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x4a] = 0;
  if (param_2 == (int *)0x0) {
    FUN_100eb91c(puVar2,0,0,0,param_3);
  }
  else {
    uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8),(int)uVar3,&DAT_63c40000,
                         puVar2 + 6);
    FUN_100eb91c(puVar2,param_2,1,uVar1,param_3);
  }
  return puVar2;
}



// Function: FUN_100ebbe0 at 100ebbe0
// Size: 136 bytes

void FUN_100ebbe0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_100eb8d0(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = uVar1;
    piVar2 = *(int **)(param_1 + 0x10);
    if ((*(char *)(piVar2 + 6) != '\0') && (piVar2[1] == 0)) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x90) + (int)piVar2);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// Function: FUN_100ebc68 at 100ebc68
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebc68(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_63c40000;
    if (param_1[4] != 0) {
      _DAT_41820010 = param_1[0x48];
      FUN_100ebbe0(param_1);
    }
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100ebce8 at 100ebce8
// Size: 36 bytes

void FUN_100ebce8(void)

{
  FUN_100ebbe0();
  return;
}



// Function: FUN_100ebd0c at 100ebd0c
// Size: 92 bytes

void FUN_100ebd0c(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      return;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Function: FUN_100ebd68 at 100ebd68
// Size: 332 bytes

void FUN_100ebd68(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar3 = &local_30;
  piVar4 = &local_28;
  piVar2 = &local_20;
  piVar1 = &local_18;
  if (param_2 < *(int *)(param_1 + 8)) {
    local_14 = *(int *)(param_1 + 8) - param_3;
    local_18 = param_2;
    if (param_2 < local_14) {
      piVar1 = &local_14;
    }
    *(int *)(param_1 + 8) = *piVar1;
  }
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    local_1c = *(int *)(param_1 + 0xc) - param_3;
    local_20 = param_2 + -1;
    if (param_2 + -1 < local_1c) {
      piVar2 = &local_1c;
    }
    *(int *)(param_1 + 0xc) = *piVar2;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (param_2 < *(int *)(param_1 + 4)) {
      local_24 = *(int *)(param_1 + 4) - param_3;
      local_28 = param_2;
      if (param_2 < local_24) {
        piVar4 = &local_24;
      }
      *(int *)(param_1 + 4) = *piVar4;
    }
  }
  else if (param_2 <= *(int *)(param_1 + 4)) {
    local_2c = *(int *)(param_1 + 4) - param_3;
    local_30 = param_2 + -1;
    if (param_2 + -1 < local_2c) {
      piVar3 = &local_2c;
    }
    *(int *)(param_1 + 4) = *piVar3;
  }
  if (*(int *)(param_1 + 0x130) != *(int *)(*(int *)(param_1 + 0x10) + 4)) {
    FUN_100ebd68(*(int *)(param_1 + 0x130));
  }
  return;
}



// Function: FUN_100ebeb4 at 100ebeb4
// Size: 144 bytes

void FUN_100ebeb4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (param_2 <= iVar1) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
    }
    if (param_2 <= *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0xc) = param_3 + *(int *)(param_1 + 0xc);
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      if (param_2 < *(int *)(param_1 + 4)) {
        *(int *)(param_1 + 4) = param_3 + *(int *)(param_1 + 4);
      }
    }
    else if (param_2 <= *(int *)(param_1 + 4)) {
      *(int *)(param_1 + 4) = param_3 + *(int *)(param_1 + 4);
    }
    iVar2 = *(int *)(param_1 + 0x130);
    if (iVar2 == *(int *)(*(int *)(param_1 + 0x10) + 4)) break;
    iVar1 = *(int *)(iVar2 + 8);
    param_1 = iVar2;
  }
  return;
}



// Function: FUN_100ebf44 at 100ebf44
// Size: 20 bytes

bool FUN_100ebf44(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



// Function: FUN_100ebf58 at 100ebf58
// Size: 36 bytes

void FUN_100ebf58(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
    return;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
  return;
}



// Function: FUN_100ebf7c at 100ebf7c
// Size: 120 bytes

undefined4 * FUN_100ebf7c(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    FUN_100ebaf8(param_1,param_2,param_3);
    *param_1 = 0x4bfff615;
  }
  return param_1;
}



// Function: FUN_100ebff4 at 100ebff4
// Size: 108 bytes

void FUN_100ebff4(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x4bfff615;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100ec060 at 100ec060
// Size: 136 bytes

undefined4 FUN_100ec060(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec0e8 at 100ec0e8
// Size: 136 bytes

undefined4 FUN_100ec0e8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec170 at 100ec170
// Size: 120 bytes

undefined4 * FUN_100ec170(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    FUN_100ebaf8(param_1,param_2,param_3);
    *param_1 = 0x60000000;
  }
  return param_1;
}



// Function: FUN_100ec1e8 at 100ec1e8
// Size: 108 bytes

void FUN_100ec1e8(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x60000000;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100ec254 at 100ec254
// Size: 112 bytes

undefined4 FUN_100ec254(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x128),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec2c4 at 100ec2c4
// Size: 136 bytes

undefined4 FUN_100ec2c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x128),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec34c at 100ec34c
// Size: 136 bytes

undefined4 FUN_100ec34c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x128),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec3d4 at 100ec3d4
// Size: 120 bytes

undefined4 * FUN_100ec3d4(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    FUN_100ebaf8(param_1,param_2,param_3);
    *param_1 = &DAT_80a2fb5c;
  }
  return param_1;
}



// Function: FUN_100ec44c at 100ec44c
// Size: 108 bytes

void FUN_100ec44c(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_80a2fb5c;
    FUN_100ebc68(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100ec4b8 at 100ec4b8
// Size: 136 bytes

undefined4 FUN_100ec4b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x10));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec540 at 100ec540
// Size: 136 bytes

undefined4 FUN_100ec540(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18));
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10117884(param_1[4] + (int)*(short *)(*(int *)param_1[4] + 0x120),param_1[1]);
  }
  return uVar2;
}



// Function: FUN_100ec5c8 at 100ec5c8
// Size: 100 bytes

void FUN_100ec5c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eecf8(param_2);
  uVar1 = FUN_10000a98(uVar1,0,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_100db26c();
  FUN_100f53ec(param_1,0xffffa9f4,*(undefined4 *)(param_1 + 8));
  return;
}



// Function: FUN_100ec62c at 100ec62c
// Size: 128 bytes

void FUN_100ec62c(undefined4 param_1,short param_2,undefined4 param_3)

{
  undefined4 local_28;
  short local_24 [2];
  undefined1 auStack_20 [12];
  
  FUN_100b1d90(param_3,0x90bf0004);
  FUN_10002730(param_1,(int)param_2,local_24,&local_28,auStack_20);
  if (local_24[0] == 4) {
    FUN_100038d0(local_28,param_3);
  }
  return;
}



// Function: FUN_100ec6ac at 100ec6ac
// Size: 128 bytes

void FUN_100ec6ac(undefined4 param_1,short param_2)

{
  short local_20 [2];
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  
  FUN_10002730(param_1,(int)param_2,local_20,&local_1c,auStack_18);
  if (local_20[0] == 4) {
    FUN_10003618(local_1c,10);
    FUN_100007e0(8,auStack_10);
    FUN_10003618(local_1c,0);
  }
  return;
}



// Function: FUN_100ec72c at 100ec72c
// Size: 448 bytes

undefined4 FUN_100ec72c(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_180;
  undefined1 auStack_17f [31];
  byte local_160;
  undefined1 auStack_15f [31];
  byte local_140;
  undefined1 auStack_13f [31];
  byte local_120;
  undefined1 auStack_11f [255];
  
  local_120 = 0;
  FUN_100ec62c(param_1,1,&local_120);
  local_140 = local_120;
  if (0x1f < local_120) {
    local_140 = 0x1f;
  }
  FUN_100012d8(auStack_11f,auStack_13f);
  iVar1 = FUN_100ef0e4(param_2,&local_140,0);
  if (iVar1 == 0) {
    FUN_100ec62c(param_1,2,&local_120);
    local_160 = local_120;
    if (0x1f < local_120) {
      local_160 = 0x1f;
    }
    FUN_100012d8(auStack_11f,auStack_15f);
    iVar1 = FUN_100ef0e4(param_2,&local_160,0);
    if (iVar1 == 0) {
      FUN_100ec62c(param_1,3,&local_120);
      local_180 = local_120;
      if (0x1f < local_120) {
        local_180 = 0x1f;
      }
      FUN_100012d8(auStack_11f,auStack_17f);
      iVar1 = FUN_100ef0e4(param_2,&local_180,0);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *param_3 = 3;
        uVar2 = 1;
      }
    }
    else {
      *param_3 = 2;
      uVar2 = 1;
    }
  }
  else {
    *param_3 = 1;
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_100ec8ec at 100ec8ec
// Size: 360 bytes

void FUN_100ec8ec(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_6c;
  undefined1 auStack_48 [24];
  undefined4 local_30;
  int *local_2c;
  short local_28 [2];
  short local_24 [2];
  short local_20;
  
  sVar1 = *(short *)(param_1 + 0xa8);
  if (0 < sVar1) {
    local_28[0] = 0;
    local_2c = (int *)0x0;
    FUN_10000660(&local_30);
    FUN_10000198(param_1);
    uVar2 = FUN_100b0574(local_24);
    FUN_10002730(param_1,(int)sVar1,local_28,&local_2c,uVar2);
    uVar2 = FUN_100b0574(local_24);
    FUN_10003348(uVar2,0xfffffffc,0xfffffffc);
    if (local_28[0] == 4) {
      FUN_10000000(auStack_48);
      FUN_10000030();
      FUN_100031b0(3,3);
      if (*(char *)(*local_2c + 0x11) == -1) {
        FUN_10002118(*(int *)(local_6c + -0xb0) + 0xb2);
      }
      uVar3 = (int)local_20 - (int)local_24[0];
      iVar4 = (int)(short)((short)((int)uVar3 >> 1) + (ushort)((int)uVar3 < 0 && (uVar3 & 1) != 0) +
                          2);
      uVar2 = FUN_100b0578(local_24);
      FUN_10000738(uVar2,iVar4,iVar4);
      FUN_100016f8(auStack_48);
    }
    FUN_10000198(local_30);
  }
  return;
}



// Function: FUN_100eca54 at 100eca54
// Size: 212 bytes

undefined4 FUN_100eca54(int param_1,short *param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_2 == 6) {
    if (*(int *)(param_2 + 1) == param_1) {
      FUN_100ec8ec();
    }
  }
  else if (*param_2 == 3) {
    uVar1 = *(uint *)(param_2 + 1) & 0xff;
    if ((uVar1 == 3) || (uVar1 == 0xd)) {
      *param_3 = *(undefined2 *)(param_1 + 0xa8);
      FUN_100ec6ac();
      uVar2 = 1;
    }
    else if (((uVar1 == 0x60) || (uVar1 == 0x1b)) ||
            ((uVar1 == 0x2e && ((param_2[7] & 0x100U) != 0)))) {
      FUN_100ec6ac(param_1,2);
      *param_3 = 2;
      uVar2 = 1;
    }
  }
  return uVar2;
}



// Function: FUN_100ecb28 at 100ecb28
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecb28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (_DAT_28030000 == (int *)0x0) {
    FUN_100eca54(param_1,param_2,param_3);
  }
  else {
    FUN_10117884((int)*(short *)(*_DAT_28030000 + 0x510) + (int)_DAT_28030000,param_1,param_2);
  }
  return;
}



// Function: FUN_100ecb90 at 100ecb90
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ecb90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (_DAT_28030000 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x518),param_1,
                         param_2,param_3);
  }
  return uVar1;
}



// Function: FUN_100ecbf0 at 100ecbf0
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ecbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (_DAT_28030000 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x520),param_1,
                         param_2,param_3,param_4);
  }
  return uVar1;
}



// Function: FUN_100ecc68 at 100ecc68
// Size: 88 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecc68(void)

{
  if (_DAT_28030000 == (int *)0x0) {
    FUN_10001b00(2);
  }
  else {
    FUN_10117884((int)*(short *)(*_DAT_28030000 + 0x4d0) + (int)_DAT_28030000,2);
  }
  return;
}



// Function: FUN_100eccc0 at 100eccc0
// Size: 188 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eccc0(void)

{
  undefined4 local_34;
  
  FUN_10000438(1);
  FUN_100f5500(*(undefined4 *)(local_34 + -0x80c));
  if (_DAT_28030000 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*_DAT_28030000 + 0xa8) + (int)_DAT_28030000);
  }
  _DAT_60000000 = FUN_100f57c8(_DAT_60000000);
  FUN_10002a78(*(undefined4 *)(local_34 + -0xac));
  if (_DAT_41820010 != 0) {
    _DAT_41820010 = *(int *)(_DAT_41820010 + 0x108);
  }
  FUN_100f55ec();
  _DAT_28030000 = (int *)FUN_100f57c8(_DAT_28030000);
  return;
}



// Function: FUN_100ecd8c at 100ecd8c
// Size: 96 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd8c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10001e18();
  uVar1 = _DAT_80df000c;
  FUN_100eccc0();
  FUN_10003240(uVar1,0);
  FUN_100017a0(uVar2);
  return;
}



// Function: FUN_100ecdec at 100ecdec
// Size: 196 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ecdec(int param_1,char param_2)

{
  undefined **ppuVar1;
  undefined **local_2c;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x6e) != '\0') {
      FUN_10113f84(param_1);
    }
    if (param_2 == '\0') {
      FUN_10000348(param_1);
    }
    else {
      if (param_1 == _DAT_80a2db8e) {
        ppuVar1 = &.TVect::OCECToRString;
        if (_DAT_28030000 != (int *)0x0) {
          FUN_10117884((int)*(short *)(*_DAT_28030000 + 0x4f8) + (int)_DAT_28030000);
          ppuVar1 = local_2c;
        }
        FUN_10000198(*(undefined4 *)ppuVar1[-0x26]);
      }
      FUN_10002550(param_1);
    }
  }
  return 0;
}



// Function: FUN_100eceb0 at 100eceb0
// Size: 120 bytes

void FUN_100eceb0(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int local_3c;
  undefined4 local_18 [2];
  
  FUN_10000660(local_18);
  FUN_10000198(**(undefined4 **)(local_3c + -0x98));
  FUN_100f0788(param_1);
  uVar1 = FUN_100ef96c(param_2);
  *param_3 = uVar1;
  FUN_10000198(local_18[0]);
  return;
}



// Function: FUN_100ecf28 at 100ecf28
// Size: 96 bytes

undefined4 FUN_100ecf28(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_10 [2];
  
  iVar1 = FUN_10000648(param_1,local_10);
  if ((iVar1 == 0) && ((local_10[0] >> ((int)param_2 & 0x3fU) & 1U) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100ecf88 at 100ecf88
// Size: 1436 bytes

void FUN_100ecf88(undefined2 *param_1)

{
  undefined1 uVar2;
  int iVar1;
  short sVar3;
  uint uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_40;
  undefined4 local_20;
  int local_18 [2];
  
  FUN_10000648(0x76657273,local_18);
  *param_1 = (short)local_18[0];
  FUN_10000648(0x6d616368,local_18);
  sVar3 = (short)local_18[0];
  param_1[1] = sVar3;
  uVar4 = ((int)sVar3 >> 0x1f) + (uint)(2 < (uint)(int)sVar3);
  *(char *)(param_1 + 10) = (char)uVar4;
  if ((uVar4 & 0xff) == 0) {
    iVar1 = FUN_10001020();
    *(byte *)((int)param_1 + 0x15) = (byte)((-1 - iVar1) + (uint)(iVar1 == 0) >> 0x1f);
  }
  else {
    *(undefined1 *)((int)param_1 + 0x15) = 1;
  }
  FUN_10000648(0x73797376,local_18);
  param_1[2] = (short)local_18[0];
  FUN_10000648(0x70726f63,local_18);
  param_1[3] = (short)local_18[0];
  FUN_10000648(0x66707520,local_18);
  *(bool *)(param_1 + 4) = local_18[0] != 0;
  FUN_10000648(0x71642020,local_18);
  *(bool *)((int)param_1 + 9) = local_18[0] != 0;
  FUN_10000648(0x71642020,local_18);
  if ((*(char *)((int)param_1 + 9) == '\0') || (local_18[0] == 0x100)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1f) = uVar2;
  FUN_10000648(0x6b626420,local_18);
  param_1[5] = (short)local_18[0];
  FUN_10000648(0x61746c6b,local_18);
  param_1[6] = (short)local_18[0];
  uVar2 = FUN_100ecf28(0x68647772,7);
  *(undefined1 *)((int)param_1 + 0x1b) = uVar2;
  FUN_10000648(0x612f7578,local_18);
  *(bool *)((int)param_1 + 0x1d) = local_18[0] != 0;
  FUN_10000648(0x73637269,local_18);
  if ((*(char *)(param_1 + 10) == '\0') || (local_18[0] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x17) = uVar2;
  uVar2 = FUN_100ecf28(0x6f732020,4);
  *(undefined1 *)(param_1 + 0xf) = uVar2;
  FUN_10000648(0x74652020,local_18);
  *(int *)(param_1 + 8) = local_18[0];
  uVar4 = FUN_10001ba8();
  *(byte *)(param_1 + 0xe) = (byte)((-1 - (uVar4 & 0x400)) + (uint)((uVar4 & 0x400) == 0) >> 0x1f);
  if ((*(char *)(param_1 + 10) == '\0') || (iVar1 = FUN_100eeff4(0xffffa80b), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  *(char *)(param_1 + 0xc) = (char)((short)param_1[2] >> 7) + (0x5ff < (ushort)param_1[2]);
  if ((*(char *)(param_1 + 10) == '\0') || (iVar1 = FUN_100eeff4(0xffffa803), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x19) = uVar2;
  if ((*(char *)(param_1 + 10) == '\0') || (iVar1 = FUN_100eeff4(0xffffa860), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  uVar2 = FUN_100ecf28(0x65766e74,0);
  *(undefined1 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_100ecf28(0x6564746e,0);
  *(undefined1 *)((int)param_1 + 0x21) = uVar2;
  uVar2 = FUN_100ecf28(0x68656c70,0);
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  uVar2 = FUN_100ecf28(0x616c6973,0);
  *(undefined1 *)((int)param_1 + 0x23) = uVar2;
  uVar2 = FUN_100ecf28(0x666f6c64,0);
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  uVar2 = FUN_100ecf28(0x706f7021,0);
  *(undefined1 *)(param_1 + 0x13) = uVar2;
  uVar2 = FUN_100ecf28(0x666f6e74,0);
  *(undefined1 *)((int)param_1 + 0x27) = uVar2;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  iVar1 = FUN_100ecf28(0x6f732020,3);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    local_60 = 0;
    local_5c = 2;
    local_58 = 0x3c;
    local_54 = 0;
    local_20 = 0;
    iVar1 = FUN_10001bd8(&local_60,&local_58);
    if (iVar1 == 0) {
      *(bool *)(param_1 + 0x14) = (local_40 & 0x400) != 0;
      *(bool *)((int)param_1 + 0x29) = (local_40 & 0x40) != 0;
    }
  }
  uVar2 = FUN_100ecf28(0x64726167,0);
  *(undefined1 *)(param_1 + 0x15) = uVar2;
  uVar2 = FUN_100ecf28(0x74686473,0);
  *(undefined1 *)((int)param_1 + 0x2b) = uVar2;
  uVar2 = FUN_100ecf28(0x6f636575,0);
  *(undefined1 *)(param_1 + 0x16) = uVar2;
  uVar2 = FUN_100ecf28(0x67726678,0);
  *(undefined1 *)((int)param_1 + 0x2d) = uVar2;
  uVar2 = FUN_100ecf28(0x706d6772,0);
  *(undefined1 *)(param_1 + 0x17) = uVar2;
  uVar2 = FUN_100ecf28(0x61736c6d,0);
  *(undefined1 *)((int)param_1 + 0x2f) = uVar2;
  uVar2 = FUN_100ecf28(0x63667267,0);
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_100ecf28(0x786c6174,0);
  *(undefined1 *)((int)param_1 + 0x31) = uVar2;
  uVar2 = FUN_100ecf28(0x74747363,0);
  *(undefined1 *)(param_1 + 0x19) = uVar2;
  uVar2 = FUN_100ecf28(0x73746466,0);
  *(undefined1 *)((int)param_1 + 0x33) = uVar2;
  iVar1 = FUN_10000648(0x7174696d,local_18);
  *(bool *)(param_1 + 0x1a) = iVar1 == 0;
  iVar1 = FUN_10000648(0x74736d76,local_18);
  *(bool *)((int)param_1 + 0x35) = iVar1 == 0;
  return;
}



// Function: FUN_100ed524 at 100ed524
// Size: 248 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed524(void)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int local_2c;
  
  _DAT_80e2fb60 = 0xffffffff;
  FUN_100ecf88(0x7c0903a6);
  if (DAT_7c0903ce == '\0') {
    FUN_100013b0(&DAT_80a2db8e);
    FUN_100013c8();
    FUN_100013e0();
    FUN_100013f8(0x7f7f,0);
    FUN_10001410(0xffffffff);
    FUN_10001428();
    FUN_10001440();
    FUN_10001458(0);
    puVar1 = (undefined4 *)FUN_10001470(4);
    FUN_10001488();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_100014a0(*puVar1);
    }
    uVar2 = FUN_100014b8();
    **(undefined2 **)(local_2c + -0xb4) = uVar2;
    **(undefined1 **)(local_2c + -0x804) = 1;
  }
  else {
    FUN_10000150();
  }
  return;
}



// Function: FUN_100ed61c at 100ed61c
// Size: 36 bytes

void FUN_100ed61c(void)

{
  FUN_10000150();
  return;
}



// Function: FUN_100ed640 at 100ed640
// Size: 152 bytes

void FUN_100ed640(void)

{
  int iVar1;
  undefined4 local_10;
  int local_c [2];
  
  local_c[0] = 0;
  local_10 = 0;
  FUN_10000918(local_c,&local_10);
  if (local_c[0] < 0x400) {
    iVar1 = FUN_10000948(0x400);
    if (iVar1 == 0) {
      FUN_100ed61c();
    }
    else {
      FUN_10000960(iVar1);
      FUN_100ed524();
    }
  }
  else {
    FUN_100ed524();
  }
  return;
}



// Function: FUN_100ed6d8 at 100ed6d8
// Size: 472 bytes

uint FUN_100ed6d8(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    uVar1 = (uint)*(short *)(param_1 + 4);
    uVar1 = ((int)uVar1 >> 0x1f) + (uint)(0x6ff < uVar1) &
            ((int)uVar1 >> 0x1f) + (uint)(0x604 < uVar1) &
            *(byte *)(param_1 + 0x14) & 1 & (uint)*(byte *)(param_1 + 0x17) &
            (uint)*(byte *)(param_1 + 0x16) & (uint)*(byte *)(param_1 + 0x18) &
            (uint)*(byte *)(param_1 + 0x1a) & (uint)*(byte *)(param_1 + 9) &
            (uint)*(byte *)(param_1 + 0x20) & (uint)*(byte *)(param_1 + 0x21) &
            (uint)*(byte *)(param_1 + 0x22) & (uint)*(byte *)(param_1 + 0x23) &
            (uint)*(byte *)(param_1 + 0x24) & (uint)*(byte *)(param_1 + 0x25);
  }
  else {
    uVar1 = (uint)*(short *)(param_1 + 4);
    uVar1 = ((int)uVar1 >> 0x1f) + (uint)(0x6ff < uVar1) &
            ((int)uVar1 >> 0x1f) + (uint)(0x604 < uVar1) &
            *(byte *)(param_1 + 0x14) & 1 & (uint)*(byte *)(param_1 + 0x17) &
            (uint)*(byte *)(param_1 + 0x16) & (uint)*(byte *)(param_1 + 0x18) &
            (uint)*(byte *)(param_1 + 0x1a) & (uint)*(byte *)(param_1 + 9) &
            (uint)*(byte *)(param_1 + 0x20) & (uint)*(byte *)(param_1 + 0x21) &
            (uint)*(byte *)(param_1 + 0x22) & (uint)*(byte *)(param_1 + 0x23) &
            (uint)*(byte *)(param_1 + 0x24) & (uint)*(byte *)(param_1 + 0x25);
    FUN_100eef18();
  }
  return uVar1;
}



// Function: FUN_100ed8b0 at 100ed8b0
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed8b0(void)

{
  int iVar1;
  
  if (DAT_90e60038 == '\0') {
    FUN_100ed640();
  }
  _DAT_48000e99 = 0x8102fb2c;
  iVar1 = FUN_100ed6d8(0x7c0903a6);
  if (iVar1 == 0) {
    FUN_100d8e3c(0x89);
    FUN_10000150();
  }
  return;
}



// Function: FUN_100ed918 at 100ed918
// Size: 60 bytes

undefined4 FUN_100ed918(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100019f8();
  FUN_100db26c();
  return uVar1;
}



// Function: FUN_100ed954 at 100ed954
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed954(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_158;
  int local_154;
  int local_150 [79];
  
  FUN_100ebaf8(local_150,_DAT_80a4000a,1);
  local_158 = param_2;
  local_154 = FUN_100c2120(param_1);
  if (local_154 == 0) {
    FUN_100db158(0xffff8000,0);
  }
  FUN_10117884((int)*(short *)(local_150[0] + 0x10) + (int)local_150);
  iVar3 = local_150[1];
  iVar1 = FUN_100ebf44(local_150);
  while ((iVar1 != 0 &&
         (piVar2 = (int *)FUN_10117884((int)_DAT_80a4000a + (int)*(short *)(*_DAT_80a4000a + 0xe0),
                                       iVar3), *piVar2 != param_2))) {
    FUN_10117884((int)*(short *)(local_150[0] + 0x18) + (int)local_150);
    iVar3 = local_150[1];
    iVar1 = FUN_100ebf44(local_150);
  }
  iVar1 = FUN_100ebf44(local_150);
  piVar2 = _DAT_80a4000a;
  if (iVar1 == 0) {
    iVar1 = *_DAT_80a4000a;
    iVar3 = FUN_10117884((int)_DAT_80a4000a + (int)*(short *)(iVar1 + 0xa8));
    FUN_10117884((int)piVar2 + (int)*(short *)(iVar1 + 0xb8),iVar3 + 1,&local_158,1);
  }
  else {
    piVar2 = (int *)FUN_10117884((int)_DAT_80a4000a + (int)*(short *)(*_DAT_80a4000a + 0xe0),iVar3);
    *piVar2 = local_158;
    piVar2[1] = local_154;
  }
  FUN_100ebc68(local_150,2);
  return;
}



// Function: FUN_100edaf8 at 100edaf8
// Size: 1304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100edaf8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_9a4;
  undefined1 auStack_980 [256];
  undefined1 auStack_880 [256];
  undefined4 local_780;
  undefined4 local_77c;
  short local_778;
  undefined2 local_776;
  undefined2 local_770;
  undefined2 local_76e;
  undefined2 local_768;
  undefined2 local_766;
  undefined4 local_760;
  undefined2 local_758;
  undefined2 local_756;
  undefined4 local_750;
  undefined4 local_74c;
  undefined1 auStack_748 [256];
  undefined1 auStack_648 [256];
  undefined1 auStack_548 [256];
  undefined1 auStack_448 [256];
  undefined1 auStack_348 [256];
  undefined1 auStack_248 [256];
  undefined1 auStack_148 [256];
  undefined4 local_48;
  
  FUN_100f5814();
  DAT_80840006 = 1;
  DAT_80840007 = 0;
  FUN_100b1d90(&DAT_609e0000,&DAT_90bf0008);
  FUN_100f06dc(0x80,&DAT_8062da48);
  FUN_100f06dc(0x82,&DAT_90a30000);
  FUN_100f06dc(0x81,0x4bffd61d);
  FUN_100ec5c8(0x80df0008,&DAT_813f0008);
  _DAT_8149000c = FUN_100ed918();
  uVar1 = FUN_100b1c84(&DAT_7c0803a6);
  uVar2 = FUN_100b0578(&DAT_3860ffff);
  _DAT_80410014 = FUN_10001680(0,uVar2,uVar1,0,0,0,0,0);
  piVar3 = (int *)FUN_100016b0();
  local_750 = *(undefined4 *)(*piVar3 + 2);
  local_74c = *(undefined4 *)(*piVar3 + 6);
  local_768 = 4;
  local_766 = 4;
  _DAT_40820034 = local_750;
  _DAT_40820038 = local_74c;
  FUN_100b06d4(&DAT_40820034,&local_768);
  local_758 = 0x50;
  local_756 = 0x50;
  FUN_100b08d4(&local_778,&local_750);
  local_760 = CONCAT22(local_758,local_756);
  _DAT_7d080774 = local_760;
  _DAT_7d080778 = CONCAT22(local_778 + -8,local_776);
  _DAT_7c1f4040 = local_750;
  _DAT_7c1f4044 = local_74c;
  local_770 = 0x10;
  local_76e = 0x10;
  FUN_100b06d4(&DAT_7c1f4040,&local_770);
  FUN_100c0f10();
  uVar1 = FUN_100d7adc(0);
  **(undefined4 **)(local_9a4 + -0x6c) = uVar1;
  FUN_100d7ba0(uVar1,0,8);
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_1010597c();
    FUN_1010598c(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_1010d6a8();
    FUN_1010d6b8(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_1010f044();
    FUN_1010f054(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_100c9950();
    FUN_100c9960(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_100ca068();
    FUN_100ca078(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_100f6b7c();
    FUN_100f6b8c(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_100c43ec();
    FUN_100c43fc(0);
  }
  if (**(char **)(local_9a4 + -0x528) != '\0') {
    FUN_100e9e78();
    FUN_100e90bc(0);
  }
  iVar4 = *(int *)(local_9a4 + -0x810);
  FUN_100b19f4(auStack_880,iVar4 + 8);
  FUN_100ed954(auStack_880,0x76696577);
  FUN_100b19f4(auStack_980,iVar4 + 0x10);
  FUN_100ed954(auStack_980,0x64666c74);
  FUN_100b19f4(auStack_748,iVar4 + 0x18);
  FUN_100ed954(auStack_748,0x696e6340);
  FUN_100b19f4(auStack_648,iVar4 + 0x28);
  FUN_100ed954(auStack_648,0x77696e64);
  FUN_100b19f4(auStack_548,iVar4 + 0x30);
  FUN_100ed954(auStack_548,0x73626172);
  FUN_100b19f4(auStack_448,iVar4 + 0x3c);
  FUN_100ed954(auStack_448,0x73736272);
  FUN_100b19f4(auStack_348,iVar4 + 0x50);
  FUN_100ed954(auStack_348,0x7363726c);
  FUN_100b19f4(auStack_248,iVar4 + 0x5c);
  FUN_100ed954(auStack_248,0x7472616b);
  FUN_100b19f4(auStack_148,iVar4 + 0x68);
  FUN_100ed954(auStack_148,0x6c697374);
  FUN_100b2e74();
  FUN_100f2a54();
  FUN_100c3c94();
  FUN_100b4c68();
  local_780 = 0;
  local_77c = 2;
  FUN_100018f0(0x70736e20,&local_780,8,*(undefined4 *)(local_9a4 + -0xac));
  FUN_100db2f4();
  FUN_10001908(&local_48);
  FUN_10001920(local_48);
  return;
}



// Function: FUN_100ee070 at 100ee070
// Size: 48 bytes

void FUN_100ee070(short param_1)

{
  FUN_100f1430((int)param_1);
  FUN_100edaf8();
  return;
}



// Function: FUN_100ee0a0 at 100ee0a0
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100ee0a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_148 [78];
  
  FUN_100ebaf8(local_148,_DAT_80a4000a,1);
  FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
  iVar3 = local_148[1];
  iVar1 = FUN_100ebf44(local_148);
  while( true ) {
    if (iVar1 == 0) {
      FUN_100ebc68(local_148,2);
      return 0;
    }
    piVar2 = (int *)FUN_10117884((int)_DAT_80a4000a + (int)*(short *)(*_DAT_80a4000a + 0xe0),iVar3);
    if (*piVar2 == param_1) break;
    FUN_10117884((int)*(short *)(local_148[0] + 0x18) + (int)local_148);
    iVar3 = local_148[1];
    iVar1 = FUN_100ebf44(local_148);
  }
  iVar3 = piVar2[1];
  FUN_100ebc68(local_148,2);
  return iVar3;
}



// Function: FUN_100ee1b4 at 100ee1b4
// Size: 84 bytes

undefined4 FUN_100ee1b4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100ee0a0();
  if (iVar1 == 0) {
    FUN_100db158(0xffffb1d7,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c1d0c(iVar1);
  }
  return uVar2;
}



// Function: FUN_100ee208 at 100ee208
// Size: 76 bytes

void FUN_100ee208(undefined4 param_1,byte *param_2)

{
  if ((int)((*param_2 - 1) + (uint)(*param_2 != 0)) < 0) {
    FUN_100ee1b4();
  }
  else {
    FUN_100c21d0(param_2);
  }
  return;
}



// Function: FUN_100ee254 at 100ee254
// Size: 204 bytes

int FUN_100ee254(byte *param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
    sVar3 = (short)iVar5 + 1;
    iVar5 = (int)sVar3;
    iVar6 = 1;
    iVar4 = iVar5;
    if (*param_1 != 0) {
      do {
        sVar1 = sVar3 + (short)iVar6;
        if ((param_2[(short)(sVar1 + -1)] != param_1[iVar6]) ||
           (iVar2 = FUN_10001350(param_2,(int)sVar1), iVar2 != 0)) {
          iVar4 = 0;
          break;
        }
        iVar6 = (int)(short)((short)iVar6 + 1);
      } while (iVar6 <= (int)(uint)*param_1);
    }
    if ((0 < iVar4) || ((int)(((uint)*param_2 - (uint)*param_1) + 1) <= iVar5)) {
      return iVar4;
    }
  } while( true );
}



// Function: FUN_100ee320 at 100ee320
// Size: 296 bytes

uint FUN_100ee320(byte *param_1,short *param_2,short *param_3)

{
  int iVar1;
  undefined1 auStack_218 [256];
  undefined1 auStack_118 [260];
  
  FUN_100b19f4(auStack_118,0x90bf0074);
  FUN_100b19f4(auStack_218,0x90bf0078);
  if ((int)((*param_1 - 1) + (uint)(*param_1 != 0)) < 0) {
    *param_2 = 1;
    *param_3 = 0;
  }
  else {
    iVar1 = FUN_100ee254(auStack_118,param_1);
    *param_2 = (short)iVar1;
    if (0 < iVar1) {
      FUN_100b1c88(param_1,iVar1,3);
      iVar1 = FUN_100ee254(auStack_218,param_1);
      if (iVar1 == 0) {
        *param_3 = *param_2 + -1;
      }
      else {
        FUN_100b1c88(param_1,iVar1,3);
        *param_3 = ((ushort)*param_1 - (short)iVar1) + *param_2;
      }
    }
  }
  return (-1 - *param_2) + (uint)(*param_2 == 0) >> 0x1f;
}



// Function: FUN_100ee448 at 100ee448
// Size: 320 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ee448(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_148 [78];
  
  if (param_1 != 0) {
    FUN_100ebaf8(local_148,_DAT_80a4000a,1);
    FUN_10117884((int)*(short *)(local_148[0] + 0x10) + (int)local_148);
    iVar1 = local_148[1];
    iVar2 = FUN_100ebf44(local_148);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)_DAT_80a4000a + (int)*(short *)(*_DAT_80a4000a + 0xe0),iVar1);
      if (*(int *)(iVar2 + 4) == param_1) {
        puVar3 = (undefined4 *)
                 FUN_10117884((int)_DAT_80a4000a + (int)*(short *)(*_DAT_80a4000a + 0xe0),iVar1);
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
  return 0x20202020;
}



// Function: FUN_100ee588 at 100ee588
// Size: 156 bytes

undefined4 FUN_100ee588(byte *param_1,byte *param_2,short param_3,short param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if (iVar2 < 1) {
    uVar1 = 0;
  }
  else {
    if (param_4 == 0) {
      FUN_100012d8(param_2,param_1,*param_2 + 1);
    }
    else {
      FUN_100b1c88(param_1,iVar2,(int)(short)((ushort)*param_1 - param_4));
      FUN_100b1900(param_1,param_2,iVar2,0xff);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100ee624 at 100ee624
// Size: 36 bytes

void FUN_100ee624(void)

{
  FUN_100f56e4();
  return;
}



// Function: FUN_100ee648 at 100ee648
// Size: 4 bytes

void FUN_100ee648(void)

{
  return;
}



// Function: FUN_100ee64c at 100ee64c
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100ee64c(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (param_1 = FUN_100ee624(0x118), param_1 != 0)) {
    *(undefined2 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    if (_DAT_554a0630 == 0) {
      uVar1 = FUN_100ed918();
      *(undefined4 *)(param_1 + 0x114) = uVar1;
    }
    else {
      *(int *)(param_1 + 0x114) = _DAT_554a0630;
      _DAT_554a0630 = 0;
    }
    *(undefined2 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(int *)(param_1 + 0x108) = _DAT_41820010;
    _DAT_41820010 = param_1;
    *(undefined4 *)(param_1 + 0x10c) = 0x9149000c;
    *(int *)(param_1 + 0x110) = param_1;
  }
  return param_1;
}



// Function: FUN_100ee720 at 100ee720
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee720(int param_1)

{
  undefined4 uVar1;
  
  if (_DAT_554a0630 == 0) {
    _DAT_554a0630 = *(int *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x114) = uVar1;
  }
  return;
}



// Function: FUN_100ee77c at 100ee77c
// Size: 108 bytes

void FUN_100ee77c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_100ee720(param_1);
    FUN_100db3b8(param_1);
    if ((param_1 != 0) && ((param_2 & 1) != 0)) {
      FUN_100ee648(param_1);
    }
  }
  return;
}



// Function: FUN_100ee7e8 at 100ee7e8
// Size: 36 bytes

void FUN_100ee7e8(void)

{
  FUN_100ee720();
  return;
}



// Function: FUN_100ee844 at 100ee844
// Size: 164 bytes

byte * FUN_100ee844(byte *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != (byte *)0x0) || (param_1 = (byte *)FUN_100f56e4(2), param_1 != (byte *)0x0)) {
    *param_1 = param_2;
    param_1[1] = 0;
    if (DAT_7c0903cd != '\0') {
      uVar2 = (uint)*param_1;
      uVar1 = FUN_100031f8();
      param_1[1] = uVar2 != uVar1;
      if (uVar2 != uVar1) {
        FUN_10001b48(uVar2);
      }
    }
  }
  return param_1;
}



// Function: FUN_100ee8e8 at 100ee8e8
// Size: 136 bytes

void FUN_100ee8e8(char *param_1,uint param_2)

{
  if (param_1 != (char *)0x0) {
    if ((DAT_7c0903cd != '\0') && (param_1[1] != '\0')) {
      FUN_10001b48(*param_1 == '\0');
    }
    if ((param_1 != (char *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100f5708(param_1);
    }
  }
  return;
}



// Function: FUN_100ee970 at 100ee970
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100ee970(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0x556b002e;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_10117884((int)param_1 + (int)_DAT_556b003e);
  }
  return param_1;
}



// Function: FUN_100ee9e8 at 100ee9e8
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100ee9e8(undefined4 *param_1,undefined1 param_2)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0x556b002e;
    *(undefined1 *)(param_1 + 2) = param_2;
    FUN_10117884((int)param_1 + (int)_DAT_556b003e);
  }
  return param_1;
}



// Function: FUN_100eea60 at 100eea60
// Size: 20 bytes

bool FUN_100eea60(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



// Function: FUN_100eea74 at 100eea74
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eea74(undefined4 param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_2 + 0x90); (iVar1 != 0 && (iVar1 == _DAT_80410014));
      iVar1 = *(int *)(iVar1 + 0x90)) {
  }
  return;
}



// Function: FUN_100eeaac at 100eeaac
// Size: 96 bytes

int FUN_100eeaac(undefined4 param_1)

{
  int iVar1;
  undefined4 local_2c;
  
  iVar1 = FUN_10001d40();
  if (iVar1 != 0) {
    if (iVar1 == **(int **)(local_2c + -0x98)) {
      iVar1 = FUN_100eea74(param_1);
    }
  }
  return iVar1;
}



// Function: FUN_100eeb0c at 100eeb0c
// Size: 144 bytes

int FUN_100eeb0c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100eeaac(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_100eea74(param_1,iVar1);
    while ((iVar2 != 0 && (iVar1 = FUN_100eea74(param_1,iVar1), iVar1 != 0))) {
      iVar2 = FUN_100eea74(param_1,iVar1);
    }
  }
  return iVar1;
}



// Function: FUN_100eeb9c at 100eeb9c
// Size: 88 bytes

void FUN_100eeb9c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_100eeb0c(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  else {
    uVar1 = FUN_100eeaac(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}



// Function: FUN_100eebf4 at 100eebf4
// Size: 148 bytes

int FUN_100eebf4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100eeaac(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_100eea74(param_1,iVar1);
    while ((iVar2 != param_2 && (iVar1 = FUN_100eea74(param_1,iVar1), iVar1 != 0))) {
      iVar2 = FUN_100eea74(param_1,iVar1);
    }
  }
  return iVar1;
}



// Function: FUN_100eec88 at 100eec88
// Size: 112 bytes

void FUN_100eec88(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      uVar1 = FUN_100eebf4(param_1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
    else {
      uVar1 = FUN_100eea74(param_1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}



// Function: FUN_100eecf8 at 100eecf8
// Size: 16 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100eecf8(uint param_1)

{
  return param_1 & _DAT_80e2fb60;
}



// Function: FUN_100eed08 at 100eed08
// Size: 172 bytes

void FUN_100eed08(undefined4 param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)FUN_100eecf8();
  pbVar2 = pbVar1 + param_2;
  if (3 < param_2) {
    for (; ((uint)pbVar1 & 3) != 0; pbVar1 = pbVar1 + 1) {
      *pbVar1 = param_3;
    }
    for (; pbVar1 < (byte *)((uint)pbVar2 & 0xfffffffc); pbVar1 = pbVar1 + 4) {
      *(uint *)pbVar1 = (uint)param_3 * 0x1010101;
    }
  }
  for (; pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
    *pbVar1 = param_3;
  }
  return;
}



// Function: FUN_100eedb4 at 100eedb4
// Size: 328 bytes

void FUN_100eedb4(short *param_1,char param_2,char param_3,char param_4)

{
  short sVar3;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_38;
  int local_34;
  short local_30;
  short local_2e;
  short local_28;
  short local_26;
  
  piVar5 = &local_38;
  FUN_100b08d4(&local_30,param_1);
  FUN_100b08d4(&local_28,0x80a2db1a);
  sVar3 = FUN_10000f00();
  local_28 = local_28 - sVar3;
  if (param_2 != '\0') {
    uVar4 = (int)local_26 - (int)local_2e;
    param_1[1] = (short)((int)uVar4 >> 1) + (ushort)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  }
  if (param_3 != '\0') {
    if (param_4 == '\0') {
      uVar4 = (int)local_28 - (int)local_30;
      *param_1 = (short)((int)uVar4 >> 1) + (ushort)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    }
    else {
      local_34 = (int)(short)(((int)local_28 - (int)local_30) / 5);
      local_38 = 10;
      if (10 < local_34) {
        piVar5 = &local_34;
      }
      iVar6 = *piVar5;
      sVar3 = FUN_10000f00();
      *param_1 = (short)iVar6 + sVar3;
    }
  }
  uVar1 = FUN_100b057c(param_1,0);
  uVar2 = FUN_100b057c(param_1,1);
  FUN_100b039c(uVar2,uVar1,&local_30);
  return;
}



// Function: FUN_100eeefc at 100eeefc
// Size: 28 bytes

undefined4 FUN_100eeefc(ushort param_1)

{
  if ((param_1 & 0x800) == 0) {
    return 0;
  }
  return 1;
}



// Function: FUN_100eef18 at 100eef18
// Size: 80 bytes

void FUN_100eef18(void)

{
  short sVar1;
  undefined1 auStack_18 [16];
  
  sVar1 = 1;
  do {
    FUN_100014d0(0xffffffff,auStack_18);
    sVar1 = sVar1 + 1;
  } while (sVar1 < 4);
  return;
}



// Function: FUN_100eef6c at 100eef6c
// Size: 40 bytes

void FUN_100eef6c(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



// Function: FUN_100eef94 at 100eef94
// Size: 96 bytes

undefined4 FUN_100eef94(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100003d8(0xffffaa6e,1);
  iVar2 = FUN_100003d8(0xffffa86e,1);
  if (iVar2 == iVar1) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x400;
  }
  return uVar3;
}



// Function: FUN_100eeff4 at 100eeff4
// Size: 148 bytes

bool FUN_100eeff4(ushort param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(short)param_1;
  iVar1 = FUN_100eeefc(iVar3);
  if (iVar1 == 1) {
    iVar3 = (int)(short)(param_1 & 0x7ff);
    iVar2 = FUN_100eef94();
    if (iVar2 <= iVar3) {
      iVar3 = -0x5761;
    }
  }
  iVar1 = FUN_100003d8(iVar3,iVar1);
  iVar3 = FUN_100003d8(0xffffa89f,1);
  return iVar1 != iVar3;
}



// Function: FUN_100ef088 at 100ef088
// Size: 60 bytes

undefined4 FUN_100ef088(void)

{
  undefined4 uVar1;
  
  if (DAT_7c0903c6 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10000300();
  }
  return uVar1;
}



// Function: FUN_100ef0e4 at 100ef0e4
// Size: 168 bytes

/* WARNING: Removing unreachable block (ram,0x100ef1fc) */

int FUN_100ef0e4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_20 [4];
  
  iVar2 = 0;
  do {
    iVar2 = (int)(short)((short)iVar2 + 1);
    local_20[0] = *(undefined1 *)(param_1 + iVar2);
    iVar1 = FUN_10001350(local_20,0);
  } while (3 < iVar1 + 1U);
  return iVar1;
}



// Function: FUN_100ef228 at 100ef228
// Size: 92 bytes

void FUN_100ef228(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100b1c84(param_2);
  uVar2 = FUN_100b1c84(param_1);
  .glue::FUN_10115b60(uVar2,uVar1,1,1);
  return;
}



// Function: FUN_100ef284 at 100ef284
// Size: 56 bytes

void FUN_100ef284(byte *param_1,undefined4 param_2)

{
  FUN_10002340(param_1,param_2,*param_1 + 1);
  return;
}



// Function: FUN_100ef2bc at 100ef2bc
// Size: 60 bytes

bool FUN_100ef2bc(uint *param_1)

{
  if (param_1 == (uint *)0x0) {
    return false;
  }
  if (((uint)param_1 & 1) == 1) {
    return false;
  }
  return (*param_1 & 1) == 0;
}



// Function: FUN_100ef2f8 at 100ef2f8
// Size: 56 bytes

uint FUN_100ef2f8(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10000468();
  iVar2 = -iVar1 + -1;
  return iVar2 + (-(uint)(iVar2 == 0) - (-iVar1 + -2)) & 0xff;
}



// Function: FUN_100ef330 at 100ef330
// Size: 92 bytes

undefined4 FUN_100ef330(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10001590();
  piVar2 = *(int **)(iVar1 + 8);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (piVar2 == (int *)param_1) break;
    piVar2 = (int *)*piVar2;
  }
  return 1;
}



// Function: FUN_100ef38c at 100ef38c
// Size: 388 bytes

undefined4 FUN_100ef38c(uint *param_1)

{
  int iVar1;
  
  if (((uint)param_1 & 1) == 0) {
    if (param_1 == (uint *)0x67726772) {
      FUN_10002bc8(0x63e30030,0x81690188);
    }
    else if (param_1 == (uint *)0x0) {
      FUN_10002bc8(0x63e30030,0x816901c4);
    }
    else if ((*param_1 & 1) == 0) {
      iVar1 = FUN_100ef330();
      if (iVar1 == 0) {
        return 1;
      }
      FUN_10002bc8(0x63e30030,0x816901fc);
    }
    else {
      FUN_10002bc8(0x63e30030,0x816901dc);
    }
  }
  else if (param_1 == (uint *)0x72677267) {
    FUN_10002bc8(0x63e30030,0x81690060);
  }
  else if (param_1 == (uint *)0xf3f3f3f3) {
    FUN_10002bc8(0x63e30030,0x8169009c);
  }
  else if (param_1 == (uint *)0xf5f5f5f5) {
    FUN_10002bc8(0x63e30030,0x816900e4);
  }
  else if (param_1 == (uint *)0xf1f1f1f1) {
    FUN_10002bc8(0x63e30030,0x8169012c);
  }
  else {
    FUN_10002bc8(0x63e30030,0x81690170);
  }
  return 0;
}



// Function: FUN_100ef510 at 100ef510
// Size: 56 bytes

undefined4 FUN_100ef510(int param_1)

{
  if (param_1 != 0) {
    FUN_10000960();
  }
  return 0;
}



// Function: FUN_100ef548 at 100ef548
// Size: 56 bytes

undefined4 FUN_100ef548(int param_1)

{
  if (param_1 != 0) {
    FUN_100019c8();
  }
  return 0;
}



// Function: FUN_100ef580 at 100ef580
// Size: 56 bytes

undefined4 FUN_100ef580(int param_1)

{
  if (param_1 != 0) {
    FUN_100025b0();
  }
  return 0;
}



// Function: FUN_100ef5b8 at 100ef5b8
// Size: 56 bytes

undefined4 FUN_100ef5b8(int param_1)

{
  if (param_1 != 0) {
    FUN_10001a70();
  }
  return 0;
}



// Function: FUN_100ef5f0 at 100ef5f0
// Size: 56 bytes

undefined4 FUN_100ef5f0(int param_1)

{
  if (param_1 != 0) {
    FUN_10000390();
  }
  return 0;
}



// Function: FUN_100ef628 at 100ef628
// Size: 48 bytes

void FUN_100ef628(short param_1)

{
  if (param_1 == 0) {
    FUN_10002220();
  }
  return;
}



// Function: FUN_100ef658 at 100ef658
// Size: 104 bytes

void FUN_100ef658(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10001170();
  FUN_10003150(param_1,*piVar1 + 0x22);
  uVar2 = FUN_100016b0();
  FUN_10003060(uVar2,param_1,param_1);
  return;
}



// Function: FUN_100ef6e4 at 100ef6e4
// Size: 320 bytes

int FUN_100ef6e4(byte *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_344;
  undefined1 auStack_320 [256];
  undefined1 auStack_220 [256];
  short local_120 [2];
  undefined1 local_11c;
  undefined1 auStack_11b [259];
  
  puVar1 = &local_11c;
  if ((&local_11c != (undefined1 *)0x0) ||
     (puVar1 = (undefined1 *)FUN_100f56e4(0x100,0), puVar1 != (undefined1 *)0x0)) {
    FUN_100012d8(param_1,puVar1,*param_1 + 1);
  }
  FUN_10000690(auStack_11b,local_11c);
  FUN_100b19f4(auStack_220,**(undefined4 **)(local_344 + -0x1038));
  iVar2 = .glue::FUN_10115b60(&local_11c,auStack_220,0,1);
  if (iVar2 == 0) {
    local_120[0] = .glue::FUN_10115a68();
  }
  else {
    FUN_100b19f4(auStack_320,**(undefined4 **)(local_344 + -0x1034));
    iVar2 = .glue::FUN_10115b60(&local_11c,auStack_320,0,1);
    if (iVar2 == 0) {
      local_120[0] = FUN_10002538();
    }
    else {
      uVar3 = FUN_100b1c84(param_1);
      FUN_10002910(uVar3,local_120);
    }
  }
  return (int)local_120[0];
}



// Function: FUN_100ef824 at 100ef824
// Size: 52 bytes

void FUN_100ef824(void)

{
  FUN_100b2264();
  FUN_10003930();
  return;
}



// Function: FUN_100ef8c8 at 100ef8c8
// Size: 52 bytes

void FUN_100ef8c8(void)

{
  FUN_100b2264();
  FUN_10001ad0();
  return;
}



// Function: FUN_100ef96c at 100ef96c
// Size: 76 bytes

int FUN_100ef96c(short *param_1)

{
  FUN_10001b18(param_1);
  return (int)(short)(*param_1 + param_1[1] + param_1[3]);
}



// Function: FUN_100ef9b8 at 100ef9b8
// Size: 132 bytes

int FUN_100ef9b8(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    if (DAT_7c0903ba == '\0') {
      iVar1 = (int)(char)(*param_1 >> 3);
    }
    else {
      iVar1 = FUN_10000360(param_1);
    }
    FUN_10000378(param_1);
  }
  return iVar1;
}



// Function: FUN_100efa80 at 100efa80
// Size: 48 bytes

char FUN_100efa80(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (int)*(short *)(param_1 + 6) & 0xffffc000;
    return (0xffffbfff < uVar1 && (uint)(0xffffc000 < uVar1) <= uVar1 + 0x4000) -
           (0xffffc000 < uVar1);
  }
  return '\0';
}



// Function: FUN_100efab0 at 100efab0
// Size: 80 bytes

uint FUN_100efab0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_10000360();
  iVar2 = FUN_10002b20();
  if (iVar2 == 0) {
    uVar1 = uVar1 & 0x80;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100efb00 at 100efb00
// Size: 96 bytes

bool FUN_100efb00(short param_1)

{
  byte abStack_1018 [4040];
  byte abStack_18 [16];
  
  FUN_10003570(abStack_18);
  return ((uint)abStack_18[(int)param_1 >> 3] & 1 << ((int)param_1 & 7U)) != 0;
}



// Function: FUN_100efb60 at 100efb60
// Size: 36 bytes

void FUN_100efb60(void)

{
  FUN_100efb00(0x37);
  return;
}



// Function: FUN_100efb84 at 100efb84
// Size: 36 bytes

void FUN_100efb84(void)

{
  FUN_100efb00(0x3b);
  return;
}



// Function: FUN_100efba8 at 100efba8
// Size: 36 bytes

void FUN_100efba8(void)

{
  FUN_100efb00(0x3a);
  return;
}



// Function: FUN_100efbcc at 100efbcc
// Size: 36 bytes

void FUN_100efbcc(void)

{
  FUN_100efb00(0x38);
  return;
}



// Function: FUN_100efbf0 at 100efbf0
// Size: 36 bytes

void FUN_100efbf0(void)

{
  FUN_10003690();
  return;
}



// Function: FUN_100efc14 at 100efc14
// Size: 100 bytes

bool FUN_100efc14(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100b08a4(param_1,1);
  iVar2 = FUN_100b08a4(param_1,0);
  return iVar2 < iVar1;
}



// Function: FUN_100efc78 at 100efc78
// Size: 72 bytes

undefined4 FUN_100efc78(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100014b8();
  FUN_10000318((int)param_1);
  return uVar1;
}



// Function: FUN_100efcc0 at 100efcc0
// Size: 16 bytes

int FUN_100efcc0(int param_1,int param_2)

{
  return (param_1 + param_2 + -1) / param_2;
}



// Function: FUN_100efcd4 at 100efcd4
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efcd4(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  
  uVar1 = FUN_100b0578(param_1);
  uVar2 = FUN_100b0578(param_1);
  piVar3 = (int *)FUN_10000480(uVar2,uVar1);
  _DAT_909f000c = piVar3;
  if (piVar3 != (int *)0x0) {
    **(undefined4 **)(local_34 + -0x1a88) = *(undefined4 *)(*piVar3 + 0x26);
    **(undefined4 **)(local_34 + -0x378) = *(undefined4 *)(*piVar3 + 0x3e);
    iVar4 = FUN_10001338(((int)param_2 + 7U & 0xfffffff8) + 0x148);
    if (iVar4 != 0) {
      iVar5 = FUN_10002a60(iVar4);
      FUN_10003120(0,2,iVar4 + iVar5,iVar4);
      uVar1 = FUN_10000948((int)param_2);
      **(undefined4 **)(local_34 + -0x1a84) = uVar1;
      FUN_10001590();
      FUN_10002fb8();
    }
  }
  return;
}



// Function: FUN_100efdd0 at 100efdd0
// Size: 988 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efdd0(undefined4 param_1,int param_2,undefined4 *param_3,short param_4,char param_5,
                 int param_6,char param_7,char param_8)

{
  undefined2 uVar4;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 in_stack_0000003b;
  int local_d4;
  int local_b0;
  undefined2 local_ac [4];
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [8];
  undefined4 local_94;
  int local_4c [2];
  
  piVar6 = &local_b0;
  puVar9 = auStack_9c;
  FUN_100ee844(auStack_a4,in_stack_0000003b);
  uVar8 = 0;
  if ((_DAT_909f000c == (int *)0x0) && (FUN_100efcd4(param_3,0x100), _DAT_909f000c == (int *)0x0)) {
    uVar8 = FUN_100b0578(param_3);
    FUN_100036d8(param_1,param_2,uVar8,(int)param_4);
    FUN_100ee8e8(auStack_a4,2);
  }
  else {
    uVar4 = FUN_100ef96c(local_ac);
    uVar1 = FUN_100b0578(param_3);
    FUN_10000e70(**(int **)(_DAT_80a2db8e + 0x1c) + 2,uVar1,*_DAT_909f000c + 8);
    puVar5 = (undefined4 *)*_DAT_909f000c;
    uVar1 = param_3[1];
    *puVar5 = *param_3;
    puVar5[1] = uVar1;
    if (param_8 == '\0') {
      *(short *)(*_DAT_909f000c + 2) = *(short *)(*_DAT_909f000c + 2) + -1;
      *(short *)(*_DAT_909f000c + 6) = *(short *)(*_DAT_909f000c + 6) + 1;
    }
    *(int *)(*_DAT_909f000c + 0x52) = _DAT_80a2db8e;
    *(undefined2 *)(*_DAT_909f000c + 0x50) = *(undefined2 *)(_DAT_80a2db8e + 0x4a);
    *(undefined2 *)(*_DAT_909f000c + 0x4a) = *(undefined2 *)(_DAT_80a2db8e + 0x44);
    *(undefined1 *)(*_DAT_909f000c + 0x4c) = *(undefined1 *)(_DAT_80a2db8e + 0x46);
    *(undefined2 *)(*_DAT_909f000c + 0x1a) = local_ac[0];
    *(undefined2 *)(*_DAT_909f000c + 0x18) = uVar4;
    *(short *)(*_DAT_909f000c + 0x3a) = param_4;
    if (param_5 == '\0') {
      *(undefined2 *)(*_DAT_909f000c + 0x48) = 0xffff;
    }
    else {
      *(undefined2 *)(*_DAT_909f000c + 0x48) = 0;
    }
    *(undefined4 *)(*_DAT_909f000c + 0x26) = **(undefined4 **)(local_d4 + -0x1a88);
    if (param_6 != 0) {
      uVar8 = FUN_10000a98(param_6,0x29c82,1);
      FUN_100db26c(uVar8);
      *(undefined4 *)(*_DAT_909f000c + 0x26) = uVar8;
    }
    if (_DAT_909f0010 != 0) {
      if (param_2 < 0x101) {
        *(int *)(*_DAT_909f000c + 0x3e) = _DAT_909f0010;
      }
      else {
        *(undefined4 *)(*_DAT_909f000c + 0x3e) = **(undefined4 **)(local_d4 + -0x378);
      }
    }
    local_b0 = param_2;
    local_4c[0] = 32000;
    if (31999 < param_2) {
      piVar6 = local_4c;
    }
    FUN_100030d8(param_1,*piVar6,_DAT_909f000c);
    if (param_7 == '\0') {
      iVar7 = *(int *)(_DAT_80a2db8e + 0x68);
      uVar1 = FUN_10000a98(*(undefined4 *)(local_d4 + -0x1a80),0x340,1);
      FUN_100db26c(uVar1);
      if (iVar7 == 0) {
        iVar2 = FUN_100efa80(_DAT_80a2db8e);
        local_94 = uVar1;
        if (iVar2 == 0) {
          FUN_10002e98(puVar9);
          *(undefined1 **)(_DAT_80a2db8e + 0x68) = puVar9;
        }
        else {
          FUN_10002820(puVar9);
          *(undefined1 **)(_DAT_80a2db8e + 0x68) = puVar9;
        }
      }
      else {
        puVar9 = *(undefined1 **)(*(int *)(_DAT_80a2db8e + 0x68) + 8);
        *(undefined4 *)(*(int *)(_DAT_80a2db8e + 0x68) + 8) = uVar1;
      }
      uVar3 = FUN_100b0578(param_3);
      FUN_100027c0(uVar3,_DAT_909f000c);
      if (iVar7 == 0) {
        *(undefined4 *)(_DAT_80a2db8e + 0x68) = 0;
      }
      else {
        *(undefined1 **)(*(int *)(_DAT_80a2db8e + 0x68) + 8) = puVar9;
      }
      FUN_100ef5f0(uVar1);
    }
    else {
      uVar1 = FUN_100b0578(param_3);
      FUN_100027c0(uVar1,_DAT_909f000c);
    }
    FUN_100ef5f0(uVar8);
    FUN_100ee8e8(auStack_a4,2);
  }
  return;
}



// Function: FUN_100f01ac at 100f01ac
// Size: 328 bytes

void FUN_100f01ac(undefined4 param_1,short *param_2,short param_3,undefined1 param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short local_38 [4];
  undefined1 auStack_30 [8];
  short local_28;
  short local_26;
  
  psVar1 = &local_28;
  if ((&local_28 != (short *)0x0) || (psVar1 = (short *)FUN_100f56e4(8), psVar1 != (short *)0x0)) {
    *psVar1 = *param_2;
    psVar1[1] = param_2[1];
    psVar1[2] = param_2[2];
    psVar1[3] = param_2[3];
  }
  FUN_100ee844(auStack_30,param_4);
  FUN_10001b18(local_38);
  FUN_100b1c84(param_1);
  iVar2 = FUN_100006f0();
  iVar3 = FUN_100b08a4(&local_28,1);
  if ((iVar2 < iVar3) && (iVar2 = FUN_100ef628((int)param_3), iVar2 + 2U < 4)) {
    return;
  }
  FUN_10000270((int)local_26,(int)(short)(local_28 + local_38[0]));
  FUN_100b1c84(param_1);
  FUN_10000b88();
  FUN_100ee8e8(auStack_30,2);
  return;
}



// Function: FUN_100f0334 at 100f0334
// Size: 88 bytes

int FUN_100f0334(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = &local_10;
  piVar1 = &local_8;
  local_4 = param_2;
  local_8 = param_1;
  if (param_1 < param_2) {
    piVar1 = &local_4;
  }
  local_c = *piVar1;
  local_10 = param_3;
  if (*piVar1 < param_3) {
    piVar2 = &local_c;
  }
  return *piVar2;
}



// Function: FUN_100f038c at 100f038c
// Size: 92 bytes

int FUN_100f038c(short param_1)

{
  short sVar1;
  
  sVar1 = FUN_10002160(0x16);
  if ((int)sVar1 != (int)param_1) {
    FUN_10002ee0((int)param_1);
  }
  return (int)sVar1;
}



// Function: FUN_100f03e8 at 100f03e8
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f03e8(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_100efa80(_DAT_80a2db8e);
  if (iVar1 == 0) {
    uVar2 = 0;
    if ((*param_1 & 0x8000) != 0) {
      uVar2 = 4;
    }
    if ((param_1[1] & 0x8000) != 0) {
      uVar2 = uVar2 + 2;
    }
    if ((param_1[2] & 0x8000) != 0) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 < 8) {
      return;
    }
    FUN_100028c8(uVar2);
  }
  else {
    iVar1 = FUN_100b22b0(_DAT_80a2db8e + 0x2a,param_1);
    if (iVar1 != 0) {
      FUN_100b2268(param_1);
      FUN_100008b8();
    }
  }
  return;
}



// Function: FUN_100f0538 at 100f0538
// Size: 224 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0538(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_100efa80(_DAT_80a2db8e);
  if (iVar1 == 0) {
    uVar2 = 0;
    if ((*param_1 & 0x8000) != 0) {
      uVar2 = 4;
    }
    if ((param_1[1] & 0x8000) != 0) {
      uVar2 = uVar2 + 2;
    }
    if ((param_1[2] & 0x8000) != 0) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 < 8) {
      return;
    }
    FUN_10000708(uVar2);
  }
  else {
    iVar1 = FUN_100b22b0(_DAT_80a2db8e + 0x24,param_1);
    if (iVar1 != 0) {
      FUN_100b2268(param_1);
      FUN_100021c0();
    }
  }
  return;
}



// Function: FUN_100f0688 at 100f0688
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0688(undefined2 *param_1)

{
  *param_1 = *(undefined2 *)(_DAT_80a2db8e + 0x44);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(_DAT_80a2db8e + 0x46);
  param_1[2] = *(undefined2 *)(_DAT_80a2db8e + 0x4a);
  FUN_100ef8c8(param_1 + 3);
  return;
}



// Function: FUN_100f06dc at 100f06dc
// Size: 172 bytes

void FUN_100f06dc(short param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 local_110 [260];
  
  local_110[0] = 0;
  piVar1 = (int *)FUN_10001728(0x54785374,(int)param_1);
  FUN_100db2a4();
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)*piVar1;
  param_2[2] = *(undefined2 *)(*piVar1 + 2);
  uVar3 = *(uint *)(*piVar1 + 8);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(*piVar1 + 4);
  *(uint *)(param_2 + 5) = uVar3 & 0xffff0000;
  FUN_100ef284(*piVar1 + 10,local_110);
  uVar2 = FUN_100ef6e4(local_110);
  *param_2 = uVar2;
  return;
}



// Function: FUN_100f0788 at 100f0788
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0788(short *param_1)

{
  short local_18;
  short local_16;
  short local_14;
  
  if ((int)*(short *)(_DAT_80a2db8e + 0x44) != (int)*param_1) {
    FUN_100026d0((int)*param_1);
  }
  if (*(char *)(_DAT_80a2db8e + 0x46) != *(char *)(param_1 + 1)) {
    FUN_10002d48(*(char *)(param_1 + 1));
  }
  if ((int)*(short *)(_DAT_80a2db8e + 0x4a) != (int)param_1[2]) {
    FUN_10002eb0((int)param_1[2]);
  }
  local_18 = param_1[3];
  local_16 = param_1[4];
  local_14 = param_1[5];
  FUN_100f0538(&local_18);
  return;
}



// Function: FUN_100f083c at 100f083c
// Size: 40 bytes

void FUN_100f083c(undefined2 *param_1,undefined2 param_2,undefined1 param_3,undefined2 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  uVar1 = param_5[1];
  *(undefined4 *)(param_1 + 3) = *param_5;
  *(uint *)(param_1 + 5) = uVar1 & 0xffff0000;
  return;
}



// Function: FUN_100f0864 at 100f0864
// Size: 64 bytes

void FUN_100f0864(char param_1)

{
  if (param_1 == '\0') {
    FUN_100020a0(0);
  }
  else {
    FUN_100020a0(0xff);
  }
  return;
}



// Function: FUN_100f08a4 at 100f08a4
// Size: 80 bytes

void FUN_100f08a4(void)

{
  undefined1 local_8 [4];
  
  local_8[0] = FUN_10002280();
  FUN_10002e08(local_8,0);
  FUN_100031e0(local_8[0]);
  return;
}



// Function: FUN_100f08f4 at 100f08f4
// Size: 52 bytes

bool FUN_100f08f4(undefined4 param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  
  iVar1 = FUN_10002490(param_1,param_2,(int)param_3);
  return iVar1 == 0;
}



// Function: FUN_100f0928 at 100f0928
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0928(void)

{
  _DAT_3860ffff = 0;
  _DAT_38610001 = 0;
  _DAT_38610003 = 0;
  _DAT_38610005 = 0;
  _DAT_63e30000 = 0;
  _DAT_63e30002 = 0;
  _DAT_41820018 = 0;
  _DAT_4182001c = 0;
  _DAT_809f0004 = 0;
  _DAT_809f0008 = 0;
  _DAT_809f000c = 0;
  _DAT_809f0010 = 0;
  FUN_100b19f4(&DAT_7c0803a6,0x81690474);
  _DAT_3860ffff = 0;
  _DAT_38610001 = 0;
  _DAT_38610003 = 0;
  _DAT_80df0024 = 0xffff;
  _DAT_80df0026 = 0xffff;
  _DAT_80df0028 = 0xffff;
  _DAT_81890014 = 0xffff;
  _DAT_81890016 = 0;
  _DAT_81890018 = 0;
  _DAT_91690010 = 0;
  _DAT_91690012 = 0xffff;
  _DAT_91690014 = 0;
  _DAT_7d4b5b78 = 0;
  _DAT_7d4b5b7a = 0;
  _DAT_7d4b5b7c = 0xffff;
  return;
}



// Function: FUN_100f0a04 at 100f0a04
// Size: 72 bytes

void FUN_100f0a04(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000018;
  
  uStack00000018 = param_1;
  FUN_100020b8(param_2,0,0,0,&stack0x00000018,4);
  FUN_100db1ec();
  return;
}



// Function: FUN_100f0a4c at 100f0a4c
// Size: 260 bytes

void FUN_100f0a4c(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar5;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  undefined1 auStack_130 [256];
  undefined1 auStack_30 [4];
  short local_2c [4];
  
  uVar5 = FUN_10000420();
  FUN_10000438(0);
  iVar1 = FUN_10001c68(param_1);
  iVar6 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_10001c80(param_1,iVar6);
      FUN_10001758(uVar2,local_2c,auStack_30,auStack_130);
      FUN_100f0864(0);
      iVar3 = FUN_10001728(param_1,(int)local_2c[0]);
      FUN_100f0864(1);
      if ((iVar3 != 0) && (iVar4 = FUN_10000468(iVar3), iVar4 != 1)) {
        FUN_100f0a04(iVar3,param_2);
      }
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 <= iVar1);
  }
  FUN_10000438(uVar5);
  return;
}



// Function: FUN_100f0b50 at 100f0b50
// Size: 132 bytes

undefined4 FUN_100f0b50(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_10002b80();
    if ((param_1 == piVar2) || (piVar2 = (int *)FUN_10002b98(), param_1 == piVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// Function: FUN_100f0bd4 at 100f0bd4
// Size: 104 bytes

void FUN_100f0bd4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  uVar1 = FUN_10001c20();
  for (sVar2 = (short)(uVar1 >> 2); 0 < sVar2; sVar2 = sVar2 + -1) {
    FUN_10117884(*puVar3,param_3);
    puVar3 = puVar3 + 1;
  }
  return;
}



// Function: FUN_100f0c3c at 100f0c3c
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0c3c(undefined4 param_1,undefined4 param_2)

{
  if (_DAT_4bee887d != 0) {
    FUN_100f0bd4(_DAT_4bee887d,param_1,param_2);
  }
  FUN_100f0bd4(_DAT_80410014,param_1,param_2);
  if (_DAT_81810048 != 0) {
    FUN_100f0bd4(_DAT_81810048,param_1,param_2);
  }
  return;
}



// Function: FUN_100f0cc8 at 100f0cc8
// Size: 116 bytes

undefined4 FUN_100f0cc8(undefined1 param_1,undefined4 *param_2)

{
  undefined1 uStack0000001b;
  int local_4c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_20 = &stack0x0000001b;
  local_14 = &local_28;
  local_18 = &local_24;
  *param_2 = 0;
  local_24 = 0;
  uStack0000001b = param_1;
  local_1c = param_2;
  local_28 = FUN_10001590();
  FUN_100f0c3c(*(undefined4 *)(local_4c + -0x7cc),&local_20);
  return local_24;
}



// Function: FUN_100f0d3c at 100f0d3c
// Size: 312 bytes

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0d3c(int param_1,char param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **local_54;
  int local_30;
  int local_2c [2];
  
  piVar4 = &local_30;
  local_2c[1] = 0;
  DAT_80630000 = 1;
  if (DAT_30210040 == '\0') {
    iVar2 = FUN_100f0b50(_DAT_7d8803a6);
    ppuVar1 = &.TVect::OCECToRString;
    if (iVar2 != 0) {
      FUN_100011a0(_DAT_7d8803a6);
      DAT_30210040 = '\0';
      ppuVar1 = local_54;
    }
    iVar2 = FUN_100f0cc8(0,local_2c + 1);
    local_2c[0] = (*(int *)ppuVar1[-0x10] - iVar2) + -8;
    local_30 = param_1;
    if (local_2c[0] < param_1) {
      piVar4 = local_2c;
    }
    iVar2 = *piVar4;
    if (0 < iVar2) {
      iVar3 = FUN_100f0b50(_DAT_8062da4c);
      if (iVar3 != 0) {
        FUN_100011a0(_DAT_8062da4c);
      }
      if (param_2 == '\0') {
        FUN_100002d0(iVar2);
        param_1 = FUN_100002e8(iVar2);
      }
      if (param_1 < iVar2) {
        DAT_80630000 = 0;
        DAT_30210040 = '\0';
      }
    }
  }
  return;
}



// Function: FUN_100f0e74 at 100f0e74
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0e74(void)

{
  undefined1 uVar1;
  
  uVar1 = uRam00000000;
  uRam00000000 = 1;
  FUN_100f0d3c(0x7fffffff,0);
  if (*_DAT_8062da4c == 0) {
    FUN_100004e0(_DAT_8062da4c,_DAT_00002041);
  }
  uRam00000000 = uVar1;
  return;
}



// Function: FUN_100f0eec at 100f0eec
// Size: 44 bytes

undefined1 FUN_100f0eec(void)

{
  FUN_100f0e74();
  return DAT_80630000;
}



// Function: FUN_100f0f18 at 100f0f18
// Size: 96 bytes

void FUN_100f0f18(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 & 1) != 0) {
    param_1 = param_1 + 1;
  }
  iVar1 = FUN_10000498();
  iVar2 = FUN_100004b0();
  if ((int)(iVar1 - param_1) < iVar2) {
    FUN_100004c8(iVar1 - param_1);
  }
  return;
}



// Function: FUN_100f0f78 at 100f0f78
// Size: 688 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0f78(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined2 uVar4;
  int iVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  int local_44;
  
  uRam00000000 = 0;
  uVar1 = FUN_10000948(0);
  **(undefined4 **)(local_44 + -0x50) = uVar1;
  FUN_100db26c();
  **(undefined4 **)(local_44 + -0x38) = 0;
  uVar1 = FUN_10000948(0);
  **(undefined4 **)(local_44 + -0x4c) = uVar1;
  FUN_100db26c();
  **(undefined4 **)(local_44 + -0x40) = 0;
  **(undefined4 **)(local_44 + -0x34) = 0;
  **(undefined1 **)(local_44 + -0x48) = 1;
  **(undefined1 **)(local_44 + -0x44) = 0;
  uVar4 = FUN_10001c38();
  **(undefined2 **)(local_44 + -0x60) = uVar4;
  _DAT_80410014 = FUN_10000948(0);
  FUN_100db26c();
  FUN_100f0a4c(0x4c444546,_DAT_80410014);
  FUN_100f0a4c(0x43444546,_DAT_80410014);
  FUN_100f0a4c(0x4d444546,_DAT_80410014);
  FUN_100f0a4c(0x57444546,_DAT_80410014);
  FUN_100f0a4c(0x5041434b,_DAT_80410014);
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = FUN_10001c68(0x6d656d21);
  iVar5 = 0;
  iVar6 = 1;
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_10001c80(0x6d656d21,iVar6);
      piVar3 = (int *)*piVar3;
      *param_1 = *param_1 + *piVar3;
      *param_2 = *param_2 + piVar3[1];
      *param_3 = *param_3 + piVar3[2];
      *param_4 = *param_4 + piVar3[3];
      iVar5 = iVar5 + piVar3[4];
      FUN_10001c98();
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 <= iVar2);
  }
  iVar2 = FUN_10001c68(0x70706321);
  iVar6 = 1;
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_10001c80(0x70706321,iVar6);
      piVar3 = (int *)*piVar3;
      *param_1 = *param_1 + *piVar3;
      *param_2 = *param_2 + piVar3[1];
      *param_3 = *param_3 + piVar3[2];
      *param_4 = *param_4 + piVar3[3];
      iVar5 = iVar5 + piVar3[4];
      FUN_10001c98();
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 <= iVar2);
  }
  FUN_100f0f18(iVar5);
  FUN_10001cc8();
  **(undefined4 **)(local_44 + -0x5c) = 0;
  **(undefined4 **)(local_44 + -0x54) = 0;
  return;
}



// Function: FUN_100f1228 at 100f1228
// Size: 60 bytes

void FUN_100f1228(void)

{
  int iVar1;
  
  iVar1 = FUN_100f0eec();
  if (iVar1 == 0) {
    FUN_100db158(0xffffff94,0);
  }
  return;
}



// Function: FUN_100f1264 at 100f1264
// Size: 68 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100f1264(void)

{
  FUN_100f0e74();
  return *_DAT_8062da4c == 0;
}



// Function: FUN_100f12a8 at 100f12a8
// Size: 60 bytes

void FUN_100f12a8(void)

{
  int iVar1;
  
  iVar1 = FUN_100f1264();
  if (iVar1 != 0) {
    FUN_100db158(0xffffff94,0);
  }
  return;
}



// Function: FUN_100f12e4 at 100f12e4
// Size: 28 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f12e4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = _DAT_4e800020;
  *param_2 = _DAT_00002041;
  return;
}



// Function: FUN_100f1300 at 100f1300
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100f1300(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = FUN_10001e18();
  bVar3 = false;
  if (DAT_00000080 == '\0') {
    DAT_00000080 = 1;
    iVar2 = FUN_100f0b50(_DAT_8062da4c);
    bVar3 = iVar2 != 0;
    if (bVar3) {
      FUN_100011a0(_DAT_8062da4c);
    }
    DAT_00000080 = '\0';
  }
  FUN_100017a0(uVar1);
  return bVar3;
}



// Function: FUN_100f138c at 100f138c
// Size: 92 bytes

void FUN_100f138c(void)

{
  undefined4 uVar1;
  
  DAT_00000080 = 0;
  uVar1 = FUN_10000a98(&DAT_91490014,0xf0,1);
  FUN_100db26c();
  FUN_10001ce0(uVar1);
  return;
}



// Function: FUN_100f13e8 at 100f13e8
// Size: 72 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f13e8(undefined4 param_1,undefined4 param_2)

{
  DAT_30210040 = 0;
  _DAT_00002041 = param_2;
  FUN_100011a0(_DAT_8062da4c);
  FUN_100f0e74();
  return;
}



// Function: FUN_100f1430 at 100f1430
// Size: 324 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1430(short param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_64;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c [2];
  
  local_34 = 0;
  FUN_100f0f78(&local_38,&local_3c,&local_40,&local_34);
  FUN_100f138c();
  FUN_100f13e8(local_40,local_34);
  if (DAT_80630000 == '\0') {
    FUN_100db158(0xffffff94,0);
  }
  iVar2 = FUN_10001590();
  sVar1 = *(short *)(iVar2 + 0x14);
  iVar4 = (int)sVar1 * (int)param_1;
  do {
    local_2c[0] = iVar4;
    local_30 = 0x7fff;
    piVar3 = &local_30;
    if (iVar4 < 0x7fff) {
      piVar3 = local_2c;
    }
    *(short *)(iVar2 + 0x14) = (short)*piVar3;
    FUN_100015a8();
    iVar4 = iVar4 - *(short *)(iVar2 + 0x14);
  } while (0 < iVar4);
  *(short *)(iVar2 + 0x14) = sVar1;
  **(undefined1 **)(local_64 + -0x1014) = 1;
  if (_DAT_00075f5f == 0) {
    _DAT_00075f5f = FUN_100b1058(0,local_38,local_3c,4);
    FUN_100b1210();
  }
  else {
    FUN_100afb5c(_DAT_00075f5f,local_38,local_3c);
  }
  return;
}



// Function: FUN_100f1574 at 100f1574
// Size: 108 bytes

char FUN_100f1574(char param_1)

{
  char cVar1;
  
  cVar1 = cRam00000000;
  if ((param_1 != cRam00000000) && (cRam00000000 = param_1, param_1 != '\0')) {
    FUN_100f0d3c(0x7fffffff,0);
  }
  return cVar1;
}



// Function: FUN_100f15e0 at 100f15e0
// Size: 96 bytes

undefined4 FUN_100f15e0(undefined4 param_1)

{
  undefined1 uVar2;
  undefined4 uVar1;
  undefined4 local_2c;
  
  uVar2 = FUN_100f1574(1);
  uVar1 = FUN_10000948(param_1);
  **(undefined1 **)(local_2c + -0x3c) = uVar2;
  FUN_100db26c();
  return uVar1;
}



// Function: FUN_100f1640 at 100f1640
// Size: 96 bytes

undefined4 FUN_100f1640(undefined4 param_1)

{
  undefined1 uVar2;
  undefined4 uVar1;
  undefined4 local_2c;
  
  uVar2 = FUN_100f1574(1);
  uVar1 = FUN_10001338(param_1);
  **(undefined1 **)(local_2c + -0x3c) = uVar2;
  FUN_100db26c();
  return uVar1;
}



// Function: FUN_100f16a0 at 100f16a0
// Size: 88 bytes

void FUN_100f16a0(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 local_2c;
  
  uVar1 = FUN_100f1574(1);
  FUN_10002b50(param_1);
  **(undefined1 **)(local_2c + -0x3c) = uVar1;
  FUN_100db2f4();
  return;
}



// Function: FUN_100f16f8 at 100f16f8
// Size: 96 bytes

void FUN_100f16f8(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 local_34;
  
  uVar1 = FUN_100f1574(1);
  FUN_10000ab0(param_1,param_2);
  **(undefined1 **)(local_34 + -0x3c) = uVar1;
  FUN_100db1ec();
  return;
}



// Function: FUN_100f1758 at 100f1758
// Size: 232 bytes

void FUN_100f1758(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_100022f8(param_1), iVar1 == *(int *)param_2[3])) {
    iVar1 = FUN_100efab0(param_1);
    if ((*(char *)*param_2 == '\0') || (iVar1 != 0)) {
      iVar2 = FUN_10001c20(param_1);
      *(int *)param_2[2] = *(int *)param_2[2] + iVar2 + 8;
      if (iVar1 != 0) {
        return;
      }
    }
    if ((*(int *)param_2[1] == 0) && (iVar1 = FUN_100f0b50(param_1), iVar1 != 0)) {
      *(int **)param_2[1] = param_1;
    }
  }
  return;
}



// Function: FUN_100f1860 at 100f1860
// Size: 132 bytes

undefined4 FUN_100f1860(undefined4 param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  
  psVar1 = (short *)FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0xe0),
                                 param_1);
  if (*(short *)*param_2 < *psVar1) {
    uVar2 = 0xffffffff;
  }
  else if (*psVar1 < *(short *)*param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100f18ec at 100f18ec
// Size: 84 bytes

undefined4 * FUN_100f18ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = &DAT_7c0803a6;
  }
  return puVar1;
}



// Function: FUN_100f1940 at 100f1940
// Size: 44 bytes

void FUN_100f1940(undefined4 param_1)

{
  FUN_100d88b4(param_1,0,4);
  return;
}



// Function: FUN_100f199c at 100f199c
// Size: 80 bytes

void FUN_100f199c(int *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = param_2;
  local_6 = param_3;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_8);
  return;
}



// Function: FUN_100f19ec at 100f19ec
// Size: 148 bytes

int FUN_100f19ec(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uStack0000001e;
  undefined4 local_18;
  undefined1 *local_14;
  int *local_10;
  
  local_14 = (undefined1 *)&stack0x0000001e;
  uStack0000001e = param_2;
  local_10 = param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),&DAT_bbc1fff8,&local_14,
                       &local_18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_18);
    iVar1 = (int)*(short *)(iVar1 + 2);
  }
  return iVar1;
}



// Function: FUN_100f1a88 at 100f1a88
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100f1a88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = _FUN_101170f4;
  }
  return puVar1;
}



// Function: FUN_100f1adc at 100f1adc
// Size: 44 bytes

void FUN_100f1adc(undefined4 param_1)

{
  FUN_100d88b4(param_1,0,8);
  return;
}



// Function: FUN_100f1b38 at 100f1b38
// Size: 132 bytes

undefined4 FUN_100f1b38(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_10117884((int)param_2[1] + (int)*(short *)(*(int *)param_2[1] + 0xe0),param_1)
  ;
  if (*(int *)*param_2 < *piVar1) {
    uVar2 = 0xffffffff;
  }
  else if (*piVar1 < *(int *)*param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100f1bbc at 100f1bbc
// Size: 368 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1bbc(int *param_1,int param_2,short *param_3,ushort *param_4)

{
  int iVar1;
  int *piVar2;
  int iStack0000001c;
  undefined1 *local_28;
  int *local_24;
  int local_20 [2];
  
  local_28 = (undefined1 *)&stack0x0000001c;
  local_20[0] = 0;
  if (param_2 < 0) {
    *param_3 = (short)((uint)-param_2 >> 8);
    *param_4 = -(short)param_2 & 0xff;
  }
  else {
    iStack0000001c = param_2;
    local_24 = param_1;
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x110),FUN_101170f4,&local_28,
                         local_20);
    if (iVar1 == 0) {
      *param_3 = 0;
      *param_4 = 0;
    }
    else {
      do {
        local_20[0] = local_20[0] + -1;
        if (local_20[0] == 0) break;
        piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_20[0]);
      } while (*piVar2 == iStack0000001c);
      do {
        local_20[0] = local_20[0] + 1;
        piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_20[0]);
        if (*piVar2 == iStack0000001c) {
          *param_3 = *(short *)(piVar2 + 1);
          *param_4 = *(ushort *)((int)piVar2 + 6);
          iVar1 = FUN_100003f0((int)*param_3);
          if (iVar1 != 0) {
            return;
          }
        }
      } while (*piVar2 == iStack0000001c);
    }
  }
  return;
}



