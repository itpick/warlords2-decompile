// Warlords II - Decompiled PPC Code
// Chunk 8 (functions 4000-4499)
// Decompiled by Ghidra 12.0.3

// Function: FUN_100f1d2c at 100f1d2c
// Size: 224 bytes

int FUN_100f1d2c(int *param_1,short param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_3;
  if ((int)uVar3 < 0) {
    uVar3 = (uint)param_3;
  }
  else {
    if (0 < param_3) {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
      iVar4 = 1;
      if (0 < iVar1) {
        do {
          piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),iVar4);
          if (((int)param_2 == (int)*(short *)(piVar2 + 1)) &&
             (uVar3 == (int)*(short *)((int)piVar2 + 6))) {
            return *piVar2;
          }
          iVar4 = iVar4 + 1;
          iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
        } while (iVar4 <= iVar1);
      }
    }
    uVar3 = (int)param_2 << 8 | uVar3;
  }
  return -uVar3;
}



// Function: FUN_100f1e0c at 100f1e0c
// Size: 96 bytes

void FUN_100f1e0c(int *param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int local_8;
  undefined2 local_4;
  undefined2 local_2;
  
  if (0 < param_2) {
    local_8 = param_2;
    local_4 = param_3;
    local_2 = param_4;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_8);
  }
  return;
}



// Function: FUN_100f1e6c at 100f1e6c
// Size: 272 bytes

void FUN_100f1e6c(int *param_1,undefined4 param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  short local_1c;
  short local_1a;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),iVar2,&local_20,1);
      if (local_1c == param_3) {
        if (param_4 <= local_1a) {
          local_1a = local_1a + 1;
          FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,iVar2,&local_20,1);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
    } while (iVar2 <= iVar1);
  }
  local_20 = param_2;
  local_1c = param_3;
  local_1a = param_4;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108),&local_20);
  return;
}



// Function: FUN_100f1f7c at 100f1f7c
// Size: 336 bytes

void FUN_100f1f7c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short local_20;
  short local_1e;
  undefined1 auStack_1c [4];
  short local_18;
  short local_16;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x118),param_2,&local_1e,&local_20);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd8),iVar2,auStack_1c,1);
      if (local_18 == local_1e) {
        if (local_20 < local_16) {
          local_16 = local_16 + -1;
          FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,iVar2,auStack_1c,1);
        }
        else if (local_18 == local_1e) {
          if (local_16 == local_20) {
            FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 200),iVar2,1);
          }
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
    } while (iVar2 <= iVar1);
  }
  return;
}



// Function: FUN_100f210c at 100f210c
// Size: 84 bytes

undefined4 * FUN_100f210c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100ea428(puVar1);
    *puVar1 = &DAT_9421ffc0;
  }
  return puVar1;
}



// Function: FUN_100f2160 at 100f2160
// Size: 36 bytes

void FUN_100f2160(void)

{
  FUN_100ea4b8();
  return;
}



// Function: FUN_100f2184 at 100f2184
// Size: 72 bytes

void FUN_100f2184(int *param_1,undefined2 param_2)

{
  undefined2 uStack0000001e;
  undefined1 auStack_8 [8];
  
  uStack0000001e = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x160),&DAT_28030000,&stack0x0000001e,
               auStack_8);
  return;
}



// Function: FUN_100f2204 at 100f2204
// Size: 16 bytes

void FUN_100f2204(void)

{
  DAT_40820008 = 1;
  return;
}



// Function: FUN_100f2214 at 100f2214
// Size: 92 bytes

int FUN_100f2214(short param_1)

{
  int iVar1;
  int local_2c;
  
  iVar1 = FUN_100003f0((int)param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_100f2184(**(undefined4 **)(local_2c + -0x794),(int)param_1);
  }
  return iVar1;
}



// Function: FUN_100f2270 at 100f2270
// Size: 216 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f2270(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14c;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = (int)param_1;
  local_28 = 0;
  local_24 = 0;
  local_20 = (undefined1 *)0x0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = FUN_100014b8();
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    FUN_10000318((int)**(short **)(local_14c + -0xb4));
    iVar3 = FUN_10001728(0x4d454e55,iVar3);
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10000318(uVar1);
    FUN_100db158((int)local_28,local_24);
  }
  FUN_10000318(uVar1);
  return iVar3;
}



// Function: FUN_100f2348 at 100f2348
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f2348(short param_1)

{
  int iVar1;
  
  FUN_100f19ec(_DAT_73746172,(int)param_1);
  iVar1 = FUN_100f2214();
  if (iVar1 == 0) {
    iVar1 = FUN_100f2270((int)param_1);
  }
  return iVar1;
}



// Function: FUN_100f23ac at 100f23ac
// Size: 152 bytes

void FUN_100f23ac(undefined4 param_1,short param_2,short param_3)

{
  undefined4 *puVar1;
  
  FUN_10002088(param_1,(int)param_3);
  puVar1 = (undefined4 *)FUN_10001728(0x6d637462,(int)param_2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10002598(puVar1);
    FUN_10002f58((int)*(short *)*puVar1,(short *)*puVar1 + 1);
    FUN_10002ad8(puVar1);
    FUN_10001c98(puVar1);
  }
  return;
}



// Function: FUN_100f2454 at 100f2454
// Size: 52 bytes

void FUN_100f2454(void)

{
  FUN_100f2204();
  FUN_10003708();
  return;
}



// Function: FUN_100f24a8 at 100f24a8
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f24a8(short param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_2 != '\0') {
    uVar3 = 0xffffffff;
  }
  piVar1 = (int *)FUN_10001728(0x4d424152,(int)param_1);
  if (piVar1 != (int *)0x0) {
    iVar5 = 0;
    if (0 < *(short *)*piVar1) {
      do {
        iVar4 = (int)*(short *)(*piVar1 + iVar5 * 2 + 2);
        FUN_100f19ec(_DAT_73746172,iVar4);
        iVar2 = FUN_100003f0();
        if (((iVar2 == 0) && (iVar2 = FUN_100f2348(iVar4), iVar2 != 0)) &&
           (FUN_100f23ac(iVar2,iVar4,uVar3), param_2 == '\0')) {
          FUN_100f2454();
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < *(short *)*piVar1);
    }
    FUN_10001c98(piVar1);
  }
  return;
}



// Function: FUN_100f25a8 at 100f25a8
// Size: 16 bytes

void FUN_100f25a8(void)

{
  DAT_40820008 = 0;
  return;
}



// Function: FUN_100f25b8 at 100f25b8
// Size: 12 bytes

undefined1 FUN_100f25b8(void)

{
  return DAT_40820008;
}



// Function: FUN_100f25c4 at 100f25c4
// Size: 16 bytes

void FUN_100f25c4(void)

{
  DAT_609e0000 = 0;
  return;
}



// Function: FUN_100f25d4 at 100f25d4
// Size: 12 bytes

undefined1 FUN_100f25d4(void)

{
  return DAT_609e0000;
}



// Function: FUN_100f25e0 at 100f25e0
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10117884((int)_DAT_607f0000 + (int)*(short *)(*_DAT_607f0000 + 0x118),param_1,param_2,param_3)
  ;
  return;
}



// Function: FUN_100f262c at 100f262c
// Size: 84 bytes

undefined4 FUN_100f262c(undefined4 param_1,short *param_2)

{
  undefined4 uVar1;
  
  FUN_100f25e0(param_1,param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100f2214((int)*param_2);
  }
  return uVar1;
}



// Function: FUN_100f2680 at 100f2680
// Size: 132 bytes

bool FUN_100f2680(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  short local_8;
  undefined1 auStack_6 [2];
  
  piVar1 = (int *)FUN_100f262c(param_1,auStack_6,&local_8);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    uVar3 = (uint)local_8;
    if (((int)uVar3 < 1) || (0x1f < (int)uVar3)) {
      bVar2 = true;
    }
    else {
      bVar2 = (*(int *)(*piVar1 + 10) >> (uVar3 & 0x3f) & 1U) != 0;
    }
  }
  return bVar2;
}



// Function: FUN_100f2704 at 100f2704
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2704(short param_1,short param_2)

{
  FUN_10117884((int)_DAT_607f0000 + (int)*(short *)(*_DAT_607f0000 + 0x120),(int)param_1,
               (int)param_2);
  return;
}



// Function: FUN_100f2758 at 100f2758
// Size: 120 bytes

void FUN_100f2758(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short local_10;
  undefined1 auStack_e [2];
  
  FUN_100b1d90(param_2,0x8001007c);
  iVar1 = FUN_100f262c(param_1,auStack_e,&local_10);
  if (iVar1 != 0) {
    FUN_10001500(iVar1,(int)local_10,param_2);
  }
  return;
}



// Function: FUN_100f27d0 at 100f27d0
// Size: 116 bytes

void FUN_100f27d0(undefined4 param_1,char param_2)

{
  int iVar1;
  short local_10;
  undefined1 auStack_e [6];
  
  iVar1 = FUN_100f262c(param_1,auStack_e,&local_10);
  if (iVar1 != 0) {
    if (param_2 == '\0') {
      FUN_10002358(iVar1,(int)local_10);
    }
    else {
      FUN_10002d60(iVar1,(int)local_10);
    }
  }
  return;
}



// Function: FUN_100f2844 at 100f2844
// Size: 420 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100f2844(undefined4 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  FUN_10001c20(param_1);
  puVar3 = (undefined4 *)FUN_100f15e0();
  FUN_100ef9b8(param_1);
  FUN_100ef9b8(puVar3);
  psVar4 = (short *)FUN_100eecf8(*param_1);
  iVar5 = FUN_100eecf8(*puVar3);
  sVar2 = *psVar4;
  iVar7 = (int)(short)(*(byte *)(psVar4 + 7) + 0xf);
  FUN_10002340(psVar4,iVar5,iVar7);
  pbVar9 = (byte *)(iVar7 + (int)psVar4);
  puVar8 = (undefined1 *)(iVar7 + iVar5);
  iVar5 = FUN_10001c20(param_1);
  pbVar6 = pbVar9 + iVar5;
  iVar5 = 0;
  if (pbVar9 < pbVar6) {
    bVar1 = *(byte *)((int)psVar4 + iVar7);
    while (bVar1 != 0) {
      bVar1 = *pbVar9;
      FUN_10002340(pbVar9,puVar8);
      pbVar10 = pbVar9 + (short)(bVar1 + 5);
      puVar8 = puVar8 + (short)(bVar1 + 5);
      if (((uint)pbVar10 & 1) == 1) {
        pbVar10 = pbVar10 + 1;
      }
      iVar5 = (int)(short)((short)iVar5 + 1);
      FUN_100f1e0c(_DAT_607f0000,*(undefined4 *)pbVar10,(int)sVar2,iVar5);
      pbVar9 = pbVar10 + 4;
      if (pbVar6 <= pbVar9) break;
      bVar1 = pbVar10[4];
    }
  }
  *puVar8 = 0;
  iVar5 = FUN_100eecf8(*puVar3);
  FUN_100f16f8(puVar3,puVar8 + (1 - iVar5));
  FUN_10002ad8(param_1);
  FUN_10002ad8(puVar3);
  return puVar3;
}



// Function: FUN_100f29e8 at 100f29e8
// Size: 108 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29e8(undefined4 *param_1,short param_2)

{
  undefined4 local_2c;
  
  FUN_10117884((int)_DAT_48000064 + (int)*(short *)(*_DAT_48000064 + 0x158),param_1);
  FUN_100f199c(**(undefined4 **)(local_2c + -0x28),(int)param_2,(int)*(short *)*param_1);
  return;
}



// Function: FUN_100f2a54 at 100f2a54
// Size: 716 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2a54(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_16c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [256];
  undefined1 auStack_28 [4];
  short local_24 [2];
  
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = &DAT_7c0803a6;
  }
  _DAT_73746172 = puVar1;
  FUN_100f1940(puVar1);
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100d8824(puVar1);
    *puVar1 = _FUN_101170f4;
  }
  _DAT_607f0000 = puVar1;
  FUN_100f1adc(puVar1);
  puVar1 = (undefined4 *)FUN_100f56e4(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100ea428(puVar1);
    *puVar1 = &DAT_9421ffc0;
  }
  _DAT_48000064 = puVar1;
  FUN_100f2160(puVar1);
  iVar2 = FUN_10001c68(0x434d4e55);
  FUN_100db328();
  iVar8 = 1;
  if (0 < iVar2) {
    do {
      puVar1 = (undefined4 *)FUN_10001c80(0x434d4e55,iVar8);
      FUN_100db2a4(puVar1);
      FUN_10001758(puVar1,local_24,auStack_28,auStack_128);
      if (0 < *(short *)*puVar1) {
        piVar3 = (int *)FUN_100f2844(puVar1);
        uVar4 = FUN_10001728(0x4d444546,(int)*(short *)(*piVar3 + 6));
        *(undefined4 *)(*piVar3 + 6) = uVar4;
        FUN_100f29e8(piVar3,(int)local_24[0]);
      }
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 <= iVar2);
  }
  iVar2 = FUN_10001c68(0x4d454e55);
  FUN_100db328();
  iVar8 = 1;
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_10001c80(0x4d454e55,iVar8);
      if (piVar3 != (int *)0x0) {
        FUN_10001758(piVar3,local_24,auStack_28,auStack_128);
        iVar5 = FUN_100022f8(piVar3);
        iVar6 = FUN_10002310();
        if ((iVar5 != iVar6) && (0 < *(short *)*piVar3)) {
          uVar4 = FUN_10001728(0x4d444546,(int)((short *)*piVar3)[3]);
          *(undefined4 *)(*piVar3 + 6) = uVar4;
          FUN_100f29e8(piVar3,(int)local_24[0]);
        }
      }
      iVar8 = (int)(short)((short)iVar8 + 1);
    } while (iVar8 <= iVar2);
  }
  puVar1 = (undefined4 *)FUN_100f15e0(0x20);
  **(undefined4 **)(local_16c + -0x788) = puVar1;
  puVar7 = *(undefined4 **)(local_16c + -0x784);
  local_148 = *puVar7;
  uStack_144 = puVar7[1];
  uStack_140 = puVar7[2];
  uStack_13c = puVar7[3];
  uStack_138 = puVar7[4];
  uStack_134 = puVar7[5];
  uStack_130 = puVar7[6];
  uStack_12c = puVar7[7];
  FUN_10002340(&local_148,*puVar1,0x20);
  return;
}



// Function: FUN_100f2d20 at 100f2d20
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100f2d20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)_DAT_48000064 + (int)*(short *)(*_DAT_48000064 + 0x148),param_1);
  return iVar1 != 0;
}



// Function: FUN_100f2d70 at 100f2d70
// Size: 36 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2d70(int *param_1)

{
  if (*(int *)(*param_1 + 6) == _DAT_80a2fb5c) {
    *(undefined2 *)(*param_1 + 2) = 0;
  }
  return;
}



// Function: FUN_100f2da4 at 100f2da4
// Size: 160 bytes

undefined4 FUN_100f2da4(undefined4 *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100ef2bc(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    sVar1 = *(short *)*param_1;
    if (sVar1 == 1) {
      uVar3 = 0;
    }
    else if ((param_2 == '\0') || ((-1 < sVar1 && (sVar1 < 0xec)))) {
      if ((sVar1 < 1) || (0x3f < sVar1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// Function: FUN_100f2e44 at 100f2e44
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2e44(int *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short local_18 [4];
  
  iVar1 = FUN_100f2da4(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = (int)*(short *)*param_1;
    *(byte *)(iVar1 + param_3) = (byte)*(undefined4 *)((short *)*param_1 + 5) & 1;
    *(undefined4 *)(*param_1 + 10) = 0;
    *(undefined4 *)(param_3 + iVar1 * 4 + 0x40) = *(undefined4 *)(*param_1 + 6);
    *(undefined4 *)(*param_1 + 6) = _DAT_80a2fb5c;
    iVar1 = FUN_10002bb0(param_1);
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        FUN_10003438(param_1,iVar2,local_18);
        if (local_18[0] != 0x1b) {
          FUN_100037b0(param_1,iVar2,0);
        }
        iVar2 = (int)(short)((short)iVar2 + 1);
      } while (iVar2 <= iVar1);
    }
  }
  return;
}



// Function: FUN_100f2f30 at 100f2f30
// Size: 192 bytes

void FUN_100f2f30(int *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_100f2da4(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*param_1 + 10);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 | 1;
      *(uint *)(*param_1 + 10) = uVar3;
    }
    uVar3 = uVar3 & 1;
    if ((1 - ((1 < uVar3) + 1)) + (uint)(uVar3 != 0 && (uint)(1 < uVar3) <= uVar3 - 1) !=
        (uint)*(byte *)(param_3 + *(short *)*param_1)) {
      FUN_100f2454();
    }
    *(undefined4 *)((short *)*param_1 + 3) =
         *(undefined4 *)(param_3 + *(short *)*param_1 * 4 + 0x40);
    if (*(short *)(*param_1 + 2) == 0) {
      FUN_100036f0(param_1);
    }
  }
  return;
}



// Function: FUN_100f2ff0 at 100f2ff0
// Size: 116 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100f2ff0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    FUN_100ec170(param_1,_DAT_48000064,1);
    *param_1 = 0x80df0008;
  }
  return param_1;
}



// Function: FUN_100f3064 at 100f3064
// Size: 36 bytes

void FUN_100f3064(void)

{
  FUN_100ec2c4();
  return;
}



// Function: FUN_100f3088 at 100f3088
// Size: 36 bytes

void FUN_100f3088(void)

{
  FUN_100ec34c();
  return;
}



// Function: FUN_100f30ac at 100f30ac
// Size: 108 bytes

void FUN_100f30ac(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x80df0008;
    FUN_100ec1e8(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_100f3118 at 100f3118
// Size: 364 bytes

void FUN_100f3118(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3c8 [320];
  undefined1 auStack_288 [312];
  undefined1 auStack_150 [312];
  
  FUN_100f2ff0(auStack_150);
  uVar1 = FUN_100f3064(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    FUN_100f2e44(uVar1,1,auStack_3c8);
    uVar1 = FUN_100f3088(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_100f30ac(auStack_150,2);
  FUN_10117884(param_2);
  FUN_100f2ff0(auStack_288);
  uVar1 = FUN_100f3064(auStack_288);
  iVar2 = FUN_100ebf44(auStack_288);
  while (iVar2 != 0) {
    FUN_100f2f30(uVar1,1,auStack_3c8);
    uVar1 = FUN_100f3088(auStack_288);
    iVar2 = FUN_100ebf44(auStack_288);
  }
  FUN_100f30ac(auStack_288,2);
  iVar2 = FUN_100f25d4();
  if (iVar2 != 0) {
    iVar2 = FUN_100eeff4(0xffffa81d);
    if (iVar2 == 0) {
      FUN_100024f0();
    }
    FUN_100f25c4();
  }
  FUN_100f25a8();
  return;
}



// Function: FUN_100f3284 at 100f3284
// Size: 108 bytes

void FUN_100f3284(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  short local_10;
  undefined1 auStack_e [2];
  
  iVar1 = FUN_100f262c(param_1,auStack_e,&local_10);
  if (iVar1 != 0) {
    uVar2 = FUN_100b1c84(param_2);
    FUN_10001a40(iVar1,(int)local_10,uVar2);
  }
  return;
}



// Function: FUN_100f32f0 at 100f32f0
// Size: 88 bytes

void FUN_100f32f0(undefined4 param_1,short param_2,short param_3)

{
  undefined1 local_108 [256];
  
  local_108[0] = 0;
  FUN_100009d8(local_108,(int)param_2,(int)param_3);
  FUN_100f3284(param_1,local_108);
  return;
}



// Function: FUN_100f3348 at 100f3348
// Size: 64 bytes

void FUN_100f3348(undefined4 param_1,short param_2,short param_3,short param_4,char param_5)

{
  if (param_5 != '\0') {
    param_3 = param_4;
  }
  FUN_100f32f0(param_1,(int)param_2,(int)param_3);
  return;
}



// Function: FUN_100f3388 at 100f3388
// Size: 36 bytes

void FUN_100f3388(void)

{
  FUN_100ec254();
  return;
}



// Function: FUN_100f33ac at 100f33ac
// Size: 144 bytes

void FUN_100f33ac(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_100ebd0c(param_1);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_100f3388(param_1);
    iVar1 = FUN_100003f0((int)*(short *)*puVar2);
    if (iVar1 == 0) {
      FUN_10117884((int)*(short *)(*param_1 + 0x18) + (int)param_1);
    }
  }
  return;
}



// Function: FUN_100f3444 at 100f3444
// Size: 104 bytes

undefined4 * FUN_100f3444(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_90e60038;
  }
  return param_1;
}



// Function: FUN_100f34ac at 100f34ac
// Size: 40 bytes

void FUN_100f34ac(void)

{
  FUN_100f3444(0);
  return;
}



// Function: FUN_100f34d4 at 100f34d4
// Size: 336 bytes

void FUN_100f34d4(int param_1,short param_2)

{
  int iVar1;
  int local_33c;
  undefined1 local_318 [256];
  undefined1 local_218 [256];
  undefined1 local_118 [260];
  
  FUN_100b19f4(local_318,0x80010080);
  FUN_100f5274(param_1);
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  FUN_100f24a8((int)param_2,0);
  FUN_100022c8();
  iVar1 = FUN_100f2348(1);
  if (iVar1 != 0) {
    FUN_10001770(iVar1,0x44525652);
  }
  local_118[0] = 0;
  FUN_100f2758(1,local_118);
  iVar1 = FUN_100b1c18(local_118,local_318,1);
  if (iVar1 != 0) {
    local_218[0] = 0;
    FUN_10117884(**(int **)(local_33c + -0xedc) +
                 (int)*(short *)(*(int *)**(int **)(local_33c + -0xedc) + 0x530),local_218);
    FUN_100b1c88(local_118,iVar1,local_318[0]);
    FUN_100b1900(local_118,local_218,iVar1,0xff);
    FUN_100f3284(1,local_118);
  }
  return;
}



// Function: FUN_100f364c at 100f364c
// Size: 240 bytes

void FUN_100f364c(int param_1)

{
  int local_2c;
  
  if ((*(short *)(param_1 + 4) == *(short *)(param_1 + 6)) || (*(short *)(param_1 + 6) == -1)) {
    if (*(short *)(param_1 + 8) == *(short *)(param_1 + 10)) {
      return;
    }
    if (*(short *)(param_1 + 10) == -1) {
      return;
    }
  }
  FUN_100022c8();
  if (*(short *)(param_1 + 6) == -1) {
    FUN_100f24a8((int)*(short *)(param_1 + 4),0);
  }
  else {
    FUN_100f24a8((int)*(short *)(param_1 + 6),0);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_1 + 6);
  }
  if (*(short *)(param_1 + 10) == -1) {
    FUN_100f24a8((int)*(short *)(param_1 + 8),1);
  }
  else {
    FUN_100f24a8((int)*(short *)(param_1 + 10),1);
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_1 + 10);
  }
  FUN_10117884(**(int **)(local_2c + -0xedc) +
               (int)*(short *)(*(int *)**(int **)(local_2c + -0xedc) + 0x408));
  return;
}



// Function: FUN_100f374c at 100f374c
// Size: 684 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f374c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined **local_55c;
  undefined1 auStack_538 [256];
  undefined1 local_438 [256];
  undefined1 auStack_338 [256];
  undefined1 local_238 [256];
  undefined4 *local_138;
  undefined1 local_134 [256];
  undefined1 auStack_34 [2];
  undefined1 auStack_32 [6];
  
  local_138 = (undefined4 *)0x0;
  FUN_100b19f4(local_438,0x80010084);
  iVar2 = FUN_100b1c18(param_2,local_438,1);
  iVar6 = 9999;
  iVar5 = 0;
  ppuVar1 = &.TVect::OCECToRString;
  if (iVar2 != 0) {
    local_238[0] = 0;
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x530),local_238);
    FUN_100b1c88(param_2,iVar2,local_438[0]);
    FUN_100b1900(param_2,local_238,iVar2,0xff);
    ppuVar1 = local_55c;
  }
  if (ppuVar1[-5][0x22] == '\0') {
    local_138 = (undefined4 *)FUN_100003f0(1);
    if (local_138 != (undefined4 *)0x0) {
      local_134[0] = 0;
      iVar2 = FUN_10002bb0(local_138);
      iVar6 = 1;
      if (0 < iVar2) {
        do {
          FUN_10001500(local_138,iVar6,local_134);
          FUN_100b19f4(auStack_338,local_55c[-0x1f0] + 0x40);
          uVar4 = FUN_100b1c84(auStack_338);
          iVar3 = .glue::FUN_10115b60(local_134,uVar4,0,1);
          if (iVar3 == 0) break;
          iVar3 = .glue::FUN_10115b60(local_134,param_2,0,1);
          if (iVar3 == 0) {
            return;
          }
          iVar6 = (int)(short)((short)iVar6 + 1);
        } while (iVar6 <= iVar2);
      }
    }
  }
  else {
    iVar5 = FUN_10000c18(&local_138);
  }
  if ((iVar5 == 0) && (local_138 != (undefined4 *)0x0)) {
    iVar2 = FUN_10002bb0(local_138);
    if (iVar2 < iVar6) {
      iVar6 = (int)(short)((short)iVar2 + 1);
    }
    FUN_100b19f4(auStack_538,local_55c[-0x1f0] + 0x44);
    uVar4 = FUN_100b1b08(auStack_538);
    FUN_10000c30(local_138,uVar4,(int)(short)((short)iVar6 + -1));
    uVar4 = FUN_100b1c84(param_2);
    FUN_10001a40(local_138,iVar6,uVar4);
    iVar2 = FUN_100f262c(param_3,auStack_34,auStack_32);
    if (iVar2 == 0) {
      FUN_100f1e0c(*(undefined4 *)local_55c[-0x1e3],param_3,(int)*(short *)*local_138,iVar6);
    }
  }
  return;
}



// Function: FUN_100f39f8 at 100f39f8
// Size: 272 bytes

void FUN_100f39f8(undefined4 param_1,char *param_2,short param_3,short param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_3c;
  undefined1 auStack_18 [2];
  undefined1 auStack_16 [2];
  
  puVar1 = (undefined4 *)FUN_100003f0((int)param_3);
  if ((puVar1 != (undefined4 *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_10002bb0(puVar1);
    if (iVar2 < param_4) {
      param_4 = (short)iVar2;
    }
    FUN_10000c48(puVar1,*(int *)(local_3c + -0x7c0) + 0x4c,(int)param_4);
    uVar3 = FUN_100b1c84(param_2);
    FUN_10001a40(puVar1,(int)(short)(param_4 + 1),uVar3);
    iVar2 = FUN_100f262c(param_5,auStack_18,auStack_16);
    if (iVar2 == 0) {
      FUN_100f1e6c(**(undefined4 **)(local_3c + -0x78c),param_5,(int)*(short *)*puVar1,
                   (int)(short)(param_4 + 1));
    }
    FUN_100f2d70(puVar1);
  }
  return;
}



// Function: FUN_100f3b08 at 100f3b08
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3b08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short local_18;
  short local_16 [3];
  
  FUN_10117884((int)_DAT_607f0000 + (int)*(short *)(*_DAT_607f0000 + 0x118),param_2,local_16,
               &local_18);
  if (local_16[0] != 0) {
    iVar1 = FUN_100f2214((int)local_16[0]);
    if (iVar1 != 0) {
      FUN_10003138(iVar1,(int)local_18);
      FUN_100f2d70(iVar1);
    }
    FUN_100f1f7c(_DAT_607f0000,param_2);
  }
  return;
}



// Function: FUN_100f3bb4 at 100f3bb4
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f3bb4(void)

{
  FUN_100c1c8c(&DAT_30210040,_DAT_63e30000,0x20,&DAT_38800000,&DAT_90010008);
  FUN_100c1c8c(&DAT_4e800020,_DAT_4bfff5e9,0x20,0x60000000,&DAT_90010008);
  FUN_100c1c8c(&DAT_90010008,_DAT_57c407bd,0x20,&DAT_41820014,&DAT_3860ffff);
  FUN_100c1c8c(&DAT_80e2fb60,_DAT_807f0008,0xc,&DAT_38800000,0x90c30020);
  return;
}



// Function: FUN_100f3c5c at 100f3c5c
// Size: 52 bytes

int FUN_100f3c5c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10001a88();
  return iVar1 + param_1;
}



// Function: FUN_100f3c98 at 100f3c98
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100f3c98(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x98), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = 0x60000000;
    uVar1 = _DAT_38610003;
    *(undefined4 *)((int)param_1 + 0x8e) = _DAT_3860ffff;
    *(undefined4 *)((int)param_1 + 0x92) = uVar1;
    param_1[0x22] = 0xffffffff;
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
  }
  return param_1;
}



// Function: FUN_100f3d30 at 100f3d30
// Size: 40 bytes

void FUN_100f3d30(void)

{
  FUN_100f3c98(0);
  return;
}



// Function: FUN_100f3d60 at 100f3d60
// Size: 548 bytes

void FUN_100f3d60(int *param_1,ushort param_2,int *param_3,short *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  undefined4 uStack00000028;
  int local_54;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  uStack00000028 = param_5;
  FUN_10000660(&local_30);
  FUN_10000198(*(undefined4 *)(local_54 + -0x24));
  if ((param_2 == 0) || (param_2 == 1)) {
    FUN_10001bf0((int)param_4[1],(int)*param_4);
    uVar1 = FUN_100b08a4(param_4,0);
    uVar2 = FUN_100b08a4(param_4,1);
    FUN_10002b38(uVar2,uVar1);
    psVar3 = (short *)FUN_100b057c(param_4,0);
    local_2c = (int)*psVar3;
    local_28 = (int)psVar3[1];
    param_1[0xb] = local_2c;
    param_1[0xc] = local_28;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar4 != 0) {
    FUN_100b0384(&stack0x00000028);
    FUN_10003318();
    FUN_100b057c(param_4,0);
    FUN_100b0384();
    FUN_10003318();
    FUN_100b057c(param_4,1);
    FUN_100b0384();
    FUN_10003318();
    FUN_10117884((int)*(short *)(*param_1 + 0xd8) + (int)param_1,(*(uint *)(*param_3 + 10) & 1) != 0
                );
    if (param_2 < 4) {
      return;
    }
    FUN_100b057c(param_4,0);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_100b057c(param_4,1);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  }
  FUN_10000198(local_30);
  return;
}



// Function: FUN_100f4310 at 100f4310
// Size: 208 bytes

void FUN_100f4310(int *param_1)

{
  int iVar1;
  int local_3c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x488));
  *(undefined1 *)(param_1 + 0x23) = 0;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (iVar1 == 0) {
    local_18 = 0;
    local_16 = 0;
    local_14 = 0;
    local_12 = 0;
    FUN_10002118(*(int *)(local_3c + -0xb0) + 0xb2);
    FUN_10002130(7);
    FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,&local_18);
    FUN_100b0578(&local_18);
    FUN_10002148();
  }
  return;
}



// Function: FUN_100f43e0 at 100f43e0
// Size: 152 bytes

void FUN_100f43e0(int *param_1,undefined4 param_2,int *param_3)

{
  undefined2 uVar1;
  undefined1 auStack_20 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x390),auStack_20);
  uVar1 = FUN_100e1a3c(auStack_20,1);
  *(undefined2 *)(*param_3 + 2) = uVar1;
  uVar1 = FUN_100e1a3c(auStack_20,0);
  *(undefined2 *)(*param_3 + 4) = uVar1;
  return;
}



// Function: FUN_100f4478 at 100f4478
// Size: 156 bytes

void FUN_100f4478(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack00000028;
  undefined1 auStack_20 [20];
  
  uStack00000028 = param_5;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x390),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,param_4);
  FUN_100b065c(param_4,&stack0x00000028);
  return;
}



// Function: FUN_100f4514 at 100f4514
// Size: 36 bytes

void FUN_100f4514(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100f455c at 100f455c
// Size: 340 bytes

void FUN_100f455c(undefined4 param_1,short param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  short local_98;
  short local_96;
  
  iVar1 = FUN_10000bb8((int)param_2,(int)param_3);
  local_98 = param_2;
  local_96 = param_3;
  if (iVar1 == 0) {
    iVar1 = FUN_10000bb8((int)param_2,0);
    local_96 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_10000bb8(0,0);
      local_98 = 0;
      if (iVar1 == 0) {
        uVar2 = 3;
        goto LAB_100f468c;
      }
    }
  }
  if (local_96 == 0) {
    if (local_98 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
LAB_100f468c:
  if (3 < uVar2) {
    return;
  }
  return;
}



// Function: FUN_100f4c40 at 100f4c40
// Size: 160 bytes

bool FUN_100f4c40(int *param_1)

{
  int iVar1;
  undefined1 auStack_28 [6];
  undefined1 auStack_22 [6];
  undefined1 auStack_1c [6];
  undefined1 auStack_16 [10];
  
  iVar1 = FUN_1010900c(param_1,auStack_1c,auStack_16);
  if (iVar1 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),(int)**(short **)param_1[0x21],1,
                 auStack_28);
    FUN_100f0538(auStack_28);
    FUN_100f03e8(auStack_22);
  }
  return iVar1 != 0;
}



// Function: FUN_100f4ce0 at 100f4ce0
// Size: 56 bytes

uint FUN_100f4ce0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x52);
  }
  else {
    uVar1 = FUN_1010b210();
  }
  return uVar1;
}



// Function: FUN_100f4d20 at 100f4d20
// Size: 92 bytes

undefined4 FUN_100f4d20(int param_1)

{
  undefined4 local_2c;
  
  FUN_10000198(0x74000000);
  FUN_10002028((int)*(short *)(param_1 + 0x56),(int)*(short *)(param_1 + 0x54));
  FUN_10002040(*(int *)(*(int *)(local_2c + -0xb0) + 0xca) + 0x10);
  return 1;
}



// Function: FUN_100f4d84 at 100f4d84
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4d84(void)

{
  FUN_100c1c8c(0x4bffe985,_DAT_41820018,0x98,&DAT_57c407ff,&DAT_80410014);
  return;
}



// Function: FUN_100f4dc8 at 100f4dc8
// Size: 104 bytes

undefined4 * FUN_100f4dc8(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_100f56e4(4);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_41820010;
    }
  }
  else {
    *param_1 = &DAT_41820010;
  }
  return param_1;
}



// Function: FUN_100f4e30 at 100f4e30
// Size: 40 bytes

void FUN_100f4e30(void)

{
  FUN_100f4dc8(0);
  return;
}



// Function: FUN_100f4e74 at 100f4e74
// Size: 136 bytes

undefined4 FUN_100f4e74(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x30),param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x18),param_2);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: FUN_100f4f0c at 100f4f0c
// Size: 120 bytes

void FUN_100f4f0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x48));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xc0) + (int)piVar1,param_1,param_2,param_3);
  }
  return;
}



// Function: FUN_100f4f94 at 100f4f94
// Size: 120 bytes

void FUN_100f4f94(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x48));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xa8) + (int)piVar1,param_1,param_2,0x7ffffffe);
  }
  return;
}



// Function: FUN_100f500c at 100f500c
// Size: 104 bytes

void FUN_100f500c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x48));
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0xb8) + (int)piVar1,param_1);
  }
  return;
}



// Function: FUN_100f5088 at 100f5088
// Size: 56 bytes

void FUN_100f5088(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x98));
  return;
}



// Function: FUN_100f50c0 at 100f50c0
// Size: 64 bytes

void FUN_100f50c0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100ee448();
  return;
}



// Function: FUN_100f5100 at 100f5100
// Size: 4 bytes

void FUN_100f5100(void)

{
  return;
}



// Function: FUN_100f5104 at 100f5104
// Size: 4 bytes

void FUN_100f5104(void)

{
  return;
}



// Function: FUN_100f5108 at 100f5108
// Size: 124 bytes

void FUN_100f5108(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x68));
  if (iVar1 != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x60) + (int)param_1);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa0));
  return;
}



// Function: FUN_100f5184 at 100f5184
// Size: 112 bytes

void FUN_100f5184(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte local_110 [260];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c17e0(uVar1,local_110);
  FUN_100012d8(local_110,param_2,local_110[0] + 1);
  return;
}



// Function: FUN_100f51f4 at 100f51f4
// Size: 64 bytes

void FUN_100f51f4(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c1950();
  return;
}



// Function: FUN_100f5234 at 100f5234
// Size: 64 bytes

void FUN_100f5234(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c1d48();
  return;
}



// Function: FUN_100f5274 at 100f5274
// Size: 4 bytes

void FUN_100f5274(void)

{
  return;
}



// Function: FUN_100f5278 at 100f5278
// Size: 84 bytes

void FUN_100f5278(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 8));
  FUN_100c1d68(uVar1,param_2,0);
  return;
}



// Function: FUN_100f52cc at 100f52cc
// Size: 108 bytes

undefined4 FUN_100f52cc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_100f5234(param_1);
  uVar1 = FUN_100f56e4();
  uVar2 = FUN_100f5234(param_1);
  FUN_10002340(param_1,uVar1,uVar2);
  return uVar1;
}



// Function: FUN_100f5338 at 100f5338
// Size: 36 bytes

void FUN_100f5338(void)

{
  FUN_100f5708();
  return;
}



// Function: FUN_100f535c at 100f535c
// Size: 4 bytes

void FUN_100f535c(void)

{
  return;
}



// Function: FUN_100f5360 at 100f5360
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5360(void)

{
  FUN_100c1c8c(0x90c30020,_DAT_63e30000,4,0x4bfde5a1,0x90c30020);
  return;
}



// Function: FUN_100f53a0 at 100f53a0
// Size: 76 bytes

void FUN_100f53a0(int param_1,short param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100eeefc((int)param_2);
  uVar1 = FUN_100003d8((int)param_2,uVar1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



// Function: FUN_100f53ec at 100f53ec
// Size: 124 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100f53ec(short *param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  FUN_100f53a0(param_1,iVar2);
  *param_1 = param_2;
  *(short **)(param_1 + 6) = _DAT_60000000;
  _DAT_60000000 = param_1;
  uVar1 = FUN_100eeefc(iVar2);
  FUN_10001de8(param_3,iVar2,uVar1);
  return 0;
}



// Function: FUN_100f5468 at 100f5468
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f5468(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_60000000 != param_1) {
    iVar2 = _DAT_60000000;
    if (_DAT_60000000 != 0) {
      iVar1 = *(int *)(_DAT_60000000 + 0xc);
      while ((iVar1 != param_1 && (iVar2 = *(int *)(iVar2 + 0xc), iVar2 != 0))) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
    }
    return iVar2;
  }
  return 0;
}



// Function: FUN_100f54b4 at 100f54b4
// Size: 76 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_100f54b4(short *param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = (short *)0x0;
  for (psVar2 = _DAT_60000000; (psVar2 != (short *)0x0 && (psVar2 != param_1));
      psVar2 = *(short **)(psVar2 + 6)) {
    if (*psVar2 == *param_1) {
      psVar1 = psVar2;
    }
  }
  return psVar1;
}



// Function: FUN_100f5500 at 100f5500
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5500(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 2) != 0) {
    iVar2 = FUN_100f54b4(param_1);
    if (iVar2 == 0) {
      sVar1 = *param_1;
      uVar3 = FUN_100eeefc();
      FUN_10001de8(*(undefined4 *)(param_1 + 2),(int)sVar1,uVar3);
    }
    else {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 2);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_10000390(*(int *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
    }
    if (param_1 == _DAT_60000000) {
      _DAT_60000000 = *(short **)(param_1 + 6);
    }
    else {
      iVar2 = FUN_100f5468(param_1);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 6);
      }
    }
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}



// Function: FUN_100f55ec at 100f55ec
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f55ec(void)

{
  while (_DAT_60000000 != 0) {
    FUN_100f5500(_DAT_60000000);
  }
  return;
}



// Function: FUN_100f5640 at 100f5640
// Size: 128 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100f5640(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (_DAT_00075f5f == 0) {
    _DAT_00075f5f = FUN_100b1134(0,&DAT_41820010,0x2800,0x1000,4);
    FUN_100b1210();
  }
  uVar1 = FUN_100b0960(_DAT_00075f5f,param_1);
  FUN_100db26c();
  return uVar1;
}



// Function: FUN_100f56c0 at 100f56c0
// Size: 36 bytes

void FUN_100f56c0(void)

{
  FUN_100f5640();
  return;
}



// Function: FUN_100f56e4 at 100f56e4
// Size: 36 bytes

void FUN_100f56e4(void)

{
  FUN_100f5640();
  return;
}



// Function: FUN_100f5708 at 100f5708
// Size: 64 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5708(undefined4 param_1)

{
  if (_DAT_00075f5f != 0) {
    FUN_100b0a18(_DAT_00075f5f,param_1);
  }
  return;
}



// Function: FUN_100f5748 at 100f5748
// Size: 12 bytes

undefined1 FUN_100f5748(void)

{
  return DAT_80010048;
}



// Function: FUN_100f5754 at 100f5754
// Size: 24 bytes

undefined1 FUN_100f5754(undefined1 param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_80010048;
  DAT_80010048 = param_1;
  return uVar1;
}



// Function: FUN_100f576c at 100f576c
// Size: 36 bytes

undefined4 FUN_100f576c(uint param_1)

{
  if ((param_1 != 0) && ((param_1 & 1) != 1)) {
    return 1;
  }
  return 0;
}



// Function: FUN_100f5790 at 100f5790
// Size: 56 bytes

bool FUN_100f5790(void)

{
  int iVar1;
  
  iVar1 = FUN_100f576c();
  return iVar1 != 0;
}



// Function: FUN_100f57c8 at 100f57c8
// Size: 76 bytes

undefined4 FUN_100f57c8(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  return 0;
}



// Function: FUN_100f5814 at 100f5814
// Size: 36 bytes

void FUN_100f5814(void)

{
  FUN_100c2250();
  return;
}



// Function: FUN_100f5838 at 100f5838
// Size: 36 bytes

void FUN_100f5838(void)

{
  FUN_100f576c();
  return;
}



// Function: FUN_100f585c at 100f585c
// Size: 56 bytes

bool FUN_100f585c(void)

{
  int iVar1;
  
  iVar1 = FUN_100f5838();
  return iVar1 != 0;
}



// Function: FUN_100f5894 at 100f5894
// Size: 8 bytes

undefined1 * FUN_100f5894(void)

{
  return &DAT_30210040;
}



// Function: FUN_100f58a4 at 100f58a4
// Size: 164 bytes

undefined4 * FUN_100f58a4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xd8), param_1 != (undefined4 *)0x0)) {
    FUN_100c7d84(param_1);
    *param_1 = &DAT_7c0803a6;
    param_1[0x20] = 0xb;
    *(undefined2 *)((int)param_1 + 0xc2) = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined2 *)((int)param_1 + 0xc6) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    param_1[0x33] = 0x20202020;
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)((int)param_1 + 0xd2) = 0xffff;
    *(undefined2 *)(param_1 + 0x35) = 0xffff;
  }
  return param_1;
}



// Function: FUN_100f5948 at 100f5948
// Size: 40 bytes

void FUN_100f5948(void)

{
  FUN_100f58a4(0);
  return;
}



// Function: FUN_100f5970 at 100f5970
// Size: 164 bytes

void FUN_100f5970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x32) != '\0') &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x860) + (int)param_1), iVar1 != 0)) {
    iVar2 = FUN_10002bb0(iVar1);
    if (*(short *)(param_1 + 0x34) < iVar2) {
      do {
        FUN_10003138(iVar1,iVar2);
        iVar2 = (int)(short)((short)iVar2 + -1);
      } while (*(short *)(param_1 + 0x34) < iVar2);
    }
  }
  FUN_100c8068(param_1);
  return;
}



// Function: FUN_100f5bd8 at 100f5bd8
// Size: 756 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5bd8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar6;
  undefined4 uVar2;
  short sVar7;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_r4;
  int iVar8;
  int local_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  iVar1 = FUN_100003f0();
  uVar6 = 0;
  if ((iVar1 == 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x860) + (int)param_1), iVar1 != 0)) {
    FUN_10002088(iVar1,0xffffffff);
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    uVar6 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8a0));
  }
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5e8));
  if (iVar1 == 0) {
    iVar1 = _DAT_80410014;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),auStack_48);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_48,auStack_50);
  FUN_10000660(&local_54);
  FUN_10000198(iVar1);
  local_64 = param_1[0x26];
  iStack_60 = param_1[0x27];
  iStack_5c = param_1[0x28];
  FUN_100f0788(&local_64);
  FUN_10000030();
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x850));
  sVar7 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x848));
  uVar3 = FUN_100b1c84(param_2);
  uVar4 = FUN_100b0578(auStack_50);
  piVar5 = (int *)FUN_10001068(iVar1,uVar4,uVar3,0,(int)sVar7,(int)*(short *)(param_1 + 0x30),
                               (int)*(short *)((int)param_1 + 0xc2),uVar2);
  FUN_10000198(local_54);
  FUN_100db26c(piVar5);
  FUN_100db26c(*(undefined4 *)(*piVar5 + 0x1c));
  FUN_10003780(piVar5,param_1);
  *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)**(undefined4 **)(iVar1 + 0x8c);
  param_1[0x2a] = (int)piVar5;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),*(undefined1 *)((int)param_1 + 0x85)
               ,0);
  iVar8 = *param_1;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(iVar8 + 0x8a0),extraout_r4,
                       *(undefined4 *)(iVar8 + 0x8a4));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar8 + 0x7d8),param_3,1,uVar2,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),_DAT_80410014 != iVar1);
  if (*(char *)(param_1 + 0x32) != '\0') {
    *(undefined2 *)(param_1 + 0x34) = uVar6;
  }
  return;
}



// Function: FUN_100f5ed8 at 100f5ed8
// Size: 576 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f5ed8(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  undefined1 uVar5;
  undefined1 auStack_238 [256];
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar1 = auStack_238;
  if ((auStack_238 != (undefined1 *)0x0) ||
     (puVar1 = (undefined1 *)FUN_100f56e4(0x100), puVar1 != (undefined1 *)0x0)) {
    FUN_100012d8(&DAT_7c0803a6,puVar1,DAT_7c0803a6 + 1);
  }
  FUN_100c6c9c(param_1,param_2);
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar2 = FUN_10000090(auStack_138);
  if (iVar2 == 0) {
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x30) = uVar4;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)((int)param_1 + 0xc2) = uVar4;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
    *(undefined1 *)(param_1 + 0x31) = uVar5;
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)((int)param_1 + 0xc6) = uVar4;
    uVar5 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)(param_1 + 0x32) = uVar5;
    iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
    param_1[0x33] = iVar2;
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)((int)param_1 + 0xd2) = uVar4;
    uVar4 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x35) = uVar4;
    FUN_10117884((int)*(short *)(*param_1 + 0x868) + (int)param_1,auStack_238);
    FUN_10117884((int)*(short *)(*param_1 + 0x798) + (int)param_1,auStack_238,uVar3,0,0,0);
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100f6118 at 100f6118
// Size: 388 bytes

void FUN_100f6118(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r4;
  int iVar2;
  int iVar3;
  
  FUN_100c6ea0(param_1,param_2);
  iVar2 = *param_2;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar2 + 400),uVar1);
  iVar3 = *param_2;
  iVar2 = *param_1;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x878),extraout_r4,iVar2,
                       *(undefined4 *)(iVar2 + 0x87c));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar3 + 400),uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0xc2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x178),*(undefined1 *)(param_1 + 0x31));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0xc6));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x32));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x33]);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0xd2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x35));
  return;
}



// Function: FUN_100f629c at 100f629c
// Size: 124 bytes

bool FUN_100f629c(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_18 [16];
  
  iVar1 = FUN_100c752c(param_1);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x630),auStack_18);
    iVar1 = FUN_100e1a08(auStack_18);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// Function: FUN_100f6318 at 100f6318
// Size: 36 bytes

void FUN_100f6318(void)

{
  FUN_100c87e0();
  return;
}



// Function: FUN_100f633c at 100f633c
// Size: 136 bytes

void FUN_100f633c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack00000024;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  uStack00000024 = param_4;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (iVar1 == 0) {
    local_20 = param_1[0x26];
    iStack_1c = param_1[0x27];
    iStack_18 = param_1[0x28];
    FUN_100f0788(&local_20);
  }
  FUN_100c8640(param_1,param_2,param_3,uStack00000024);
  return;
}



// Function: FUN_100f63c4 at 100f63c4
// Size: 408 bytes

void FUN_100f63c4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_118 [260];
  
  puVar1 = (undefined4 *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_100f2d20(puVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_100ef2f8(puVar1);
        if (iVar2 == 0) {
          FUN_10002c28(puVar1);
        }
        else {
          FUN_10001c98(puVar1);
        }
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x840),0);
      FUN_100038e8(param_1[0x2a],0,0);
      FUN_10003588(param_1[0x2a]);
      param_1[0x2a] = 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)*param_2;
      local_118[0] = 0;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x868),local_118);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),local_118,1,0,0,0);
      iVar2 = *param_1;
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x8a0));
      FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x7d8),1,1,uVar3,0);
    }
  }
  return;
}



// Function: FUN_100f655c at 100f655c
// Size: 64 bytes

void FUN_100f655c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  FUN_100f2348();
  return;
}



// Function: FUN_100f659c at 100f659c
// Size: 200 bytes

void FUN_100f659c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_110 [260];
  
  if (*(short *)((int)param_1 + 0xd2) == -1) {
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
    if (piVar1 == (int *)0x0) {
      FUN_100012d8(&DAT_7c0803a6,param_2,DAT_7c0803a6 + 1);
    }
    else {
      FUN_100012d8(*piVar1 + 0xe,auStack_110,*(byte *)(*piVar1 + 0xe) + 1);
      FUN_100ef284(auStack_110,param_2);
    }
  }
  else {
    FUN_100009d8(param_2,(int)*(short *)((int)param_1 + 0xd2),(int)*(short *)(param_1 + 0x35));
  }
  return;
}



// Function: FUN_100f6664 at 100f6664
// Size: 108 bytes

void FUN_100f6664(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x880));
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x890));
  FUN_100f2704(uVar2,uVar1);
  return;
}



// Function: FUN_100f66d0 at 100f66d0
// Size: 56 bytes

void FUN_100f66d0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  return;
}



// Function: FUN_100f6708 at 100f6708
// Size: 112 bytes

int FUN_100f6708(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((((int *)param_1[0x2a] == (int *)0x0) ||
      (piVar1 = *(int **)(*(int *)param_1[0x2a] + 0x1c), piVar1 == (int *)0x0)) ||
     (iVar2 = (int)*(short *)(*piVar1 + 8), iVar2 == 0)) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x878));
  }
  return iVar2;
}



// Function: FUN_100f6790 at 100f6790
// Size: 112 bytes

int FUN_100f6790(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((((int *)param_1[0x2a] == (int *)0x0) ||
      (piVar1 = *(int **)(*(int *)param_1[0x2a] + 0x1c), piVar1 == (int *)0x0)) ||
     (iVar2 = (int)*(short *)(*piVar1 + 6), iVar2 == 0)) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x888));
  }
  return iVar2;
}



// Function: FUN_100f6810 at 100f6810
// Size: 136 bytes

void FUN_100f6810(int *param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
  if (iVar1 == 0) {
    FUN_100012d8(&DAT_7c0803a6,param_3,DAT_7c0803a6 + 1);
  }
  else {
    FUN_10001500(iVar1,(int)param_2,param_3);
  }
  return;
}



// Function: FUN_100f6898 at 100f6898
// Size: 116 bytes

void FUN_100f6898(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x860));
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0));
  }
  else {
    FUN_10002bb0(iVar1);
  }
  return;
}



// Function: FUN_100f690c at 100f690c
// Size: 56 bytes

void FUN_100f690c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f0));
  return;
}



// Function: FUN_100f6944 at 100f6944
// Size: 64 bytes

void FUN_100f6944(int *param_1,short param_2,undefined1 param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 2000),(int)param_2,param_3);
  return;
}



// Function: FUN_100f6984 at 100f6984
// Size: 136 bytes

void FUN_100f6984(int *param_1,undefined4 param_2,short param_3,char param_4)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x858));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x8b0),(int)param_3,param_4);
  if (param_4 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_100f6a0c at 100f6a0c
// Size: 60 bytes

void FUN_100f6a0c(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818),param_2,0);
  return;
}



// Function: FUN_100f6a48 at 100f6a48
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6a48(void)

{
  FUN_100c1c8c(&DAT_30210040,_DAT_bbc1fff8,0xd8,&DAT_4e800020,&DAT_2c040000);
  return;
}



// Function: FUN_100f6a84 at 100f6a84
// Size: 248 bytes

undefined4
FUN_100f6a84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            )

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  piVar1 = (int *)FUN_100e1088(&stack0x0000001c,param_5);
  if (*piVar1 == 0) {
    puVar3 = (undefined4 *)FUN_100e1088(&stack0x0000001c,param_5);
    uVar4 = *puVar3;
  }
  else {
    puVar2 = (uint *)FUN_100e1088(&stack0x0000001c,param_5);
    uVar5 = *puVar2;
    piVar1 = (int *)FUN_100e1088(&stack0x0000001c,param_5);
    iVar6 = *piVar1;
    piVar1 = (int *)FUN_100e1088(&stack0x0000001c,param_5);
    iVar7 = *piVar1;
    puVar3 = (undefined4 *)FUN_100e1088(&stack0x0000001c,param_5);
    uVar4 = FUN_100f0334(*puVar3,((int)(param_1 +
                                       ((int)uVar5 >> 1) +
                                       (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0)) / iVar6) * iVar7,
                         param_4);
  }
  return uVar4;
}



// Function: FUN_100f6b7c at 100f6b7c
// Size: 8 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100f6b7c(void)

{
  return _FUN_10117184;
}



// Function: FUN_100f6b8c at 100f6b8c
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100f6b8c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc0), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = FUN_10117184;
    *(undefined1 *)((int)param_1 + 0xa9) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    uVar1 = _DAT_4182001c;
    param_1[0x22] = _DAT_41820018;
    param_1[0x23] = uVar1;
    *(undefined1 *)(param_1 + 0x2f) = 1;
    uVar3 = _DAT_809f0010;
    uVar2 = _DAT_809f000c;
    uVar1 = _DAT_809f0008;
    param_1[0x2b] = _DAT_809f0004;
    param_1[0x2c] = uVar1;
    param_1[0x2d] = uVar2;
    param_1[0x2e] = uVar3;
    param_1[0x27] = 0x20202020;
    param_1[0x26] = 0x20202020;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    uVar1 = _DAT_4182001c;
    param_1[0x20] = _DAT_41820018;
    param_1[0x21] = uVar1;
    param_1[0x28] = 0x10;
    param_1[0x29] = 0x10;
  }
  return param_1;
}



// Function: FUN_100f6c74 at 100f6c74
// Size: 40 bytes

void FUN_100f6c74(void)

{
  FUN_100f6b8c(0);
  return;
}



// Function: FUN_100f6c9c at 100f6c9c
// Size: 460 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6c9c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
                 undefined1 param_6,undefined4 param_7,char param_8)

{
  int iVar1;
  undefined4 uVar2;
  char in_stack_0000003b;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x28);
  }
  FUN_10105b08(param_1,uVar2,param_2,param_3,param_4,param_5,param_6);
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = _DAT_41820010;
  _DAT_41820010 = auStack_140;
  iVar1 = FUN_10000090(auStack_140);
  if (iVar1 == 0) {
    local_148 = 0x10;
    local_144 = 0x10;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),&local_148,0,0);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),param_7,0);
    if (param_8 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1,1);
    }
    if (in_stack_0000003b != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730),0);
    }
    _DAT_41820010 = local_38;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_40,local_3c);
  }
  if ((param_8 != '\0') || (in_stack_0000003b != '\0')) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),0);
  }
  return;
}



// Function: FUN_100f6e68 at 100f6e68
// Size: 304 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f6e68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_138 = FUN_10105d2c(param_1);
  *(undefined4 *)(local_138 + 0x90) = 0;
  *(undefined4 *)(local_138 + 0x94) = 0;
  uVar5 = 0;
  do {
    iVar1 = uVar5 * 4;
    if (*(int *)(param_1 + iVar1 + 0x90) != 0) {
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_2c = _DAT_41820010;
      _DAT_41820010 = auStack_134;
      iVar2 = FUN_10000090(auStack_134);
      if (iVar2 == 0) {
        piVar4 = *(int **)(param_1 + iVar1 + 0x90);
        uVar3 = FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x88));
        *(undefined4 *)(iVar1 + local_138 + 0x90) = uVar3;
        piVar4 = *(int **)(iVar1 + local_138 + 0x90);
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x860));
        _DAT_41820010 = local_2c;
      }
      else {
        local_138 = FUN_100f57c8(local_138);
        FUN_100db158((int)local_34,local_30);
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 2);
  return local_138;
}



// Function: FUN_100f6f98 at 100f6f98
// Size: 84 bytes

void FUN_100f6f98(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100f6ff8 at 100f6ff8
// Size: 500 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6ff8(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 unaff_r23;
  undefined4 unaff_r30;
  uint uVar3;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_1010937c(param_1,param_2);
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = _DAT_41820010;
  _DAT_41820010 = auStack_140;
  iVar1 = FUN_10000090(auStack_140);
  if (iVar1 == 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
      param_1[uVar3 + 0x26] = iVar1;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 2);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x118),auStack_148);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x118),auStack_150);
    unaff_r30 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    unaff_r23 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x128),&local_160);
    param_1[0x2b] = local_160;
    param_1[0x2c] = iStack_15c;
    param_1[0x2d] = iStack_158;
    param_1[0x2e] = iStack_154;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)(param_1 + 0x2f) = uVar2;
    _DAT_41820010 = local_38;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_40,local_3c);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_148,0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),auStack_150,unaff_r23,unaff_r30);
  return;
}



// Function: FUN_100f71ec at 100f71ec
// Size: 292 bytes

void FUN_100f71ec(int param_1,int *param_2)

{
  uint uVar1;
  
  FUN_101097e8(param_1,param_2);
  uVar1 = 0;
  do {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1c8),
                 *(undefined4 *)(param_1 + uVar1 * 4 + 0x98));
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0x80);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0xa0);
  uVar1 = 0;
  do {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),
                 *(undefined1 *)(param_1 + uVar1 + 0xa8));
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),param_1 + 0xac);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xbc));
  return;
}



// Function: FUN_100f7310 at 100f7310
// Size: 492 bytes

void FUN_100f7310(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [312];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_10105d28(param_1);
  bVar1 = false;
  if (param_1[8] != 0) {
    uVar4 = 0;
    do {
      if (((param_1[uVar4 + 0x26] != 0x20202020) && (param_1[uVar4 + 0x24] == 0)) &&
         (piVar2 = (int *)FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x308),
                                       param_1[uVar4 + 0x26]), piVar2 != (int *)0x0)) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x860) + (int)piVar2,param_1);
        bVar1 = true;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 2);
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar2 = (int *)FUN_10105660(auStack_178);
  iVar3 = FUN_100ebf44(auStack_178);
  while (iVar3 != 0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar2 = (int *)FUN_10105684(auStack_178);
    iVar3 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,0);
  if (bVar1) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),0);
  }
  FUN_101055f4(auStack_178,2);
  return;
}



// Function: FUN_100f74fc at 100f74fc
// Size: 336 bytes

void FUN_100f74fc(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [312];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_10106d74(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x338),param_1);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar1 = (int *)FUN_10105660(auStack_178);
  iVar2 = FUN_100ebf44(auStack_178);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar1 = (int *)FUN_10105684(auStack_178);
    iVar2 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,0);
  FUN_101055f4(auStack_178,2);
  return;
}



// Function: FUN_100f764c at 100f764c
// Size: 504 bytes

void FUN_100f764c(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar10 = 0;
  do {
    piVar9 = *(int **)(param_1 + uVar10 * 4 + 0x90);
    if (piVar9 != (int *)0x0) {
      uVar1 = (&DAT_80840006)[uVar10];
      local_40 = *(undefined4 *)(param_1 + 0x2c);
      local_3c = *(undefined4 *)(param_1 + 0x30);
      local_58 = *(undefined4 *)(param_1 + 0x34);
      uStack_54 = *(undefined4 *)(param_1 + 0x38);
      piVar2 = (int *)FUN_100e1088(&local_40,uVar10);
      iVar3 = param_1 + 0xac;
      uVar4 = FUN_100e1580(iVar3,0);
      piVar5 = (int *)FUN_100e1088(uVar4,uVar10);
      *piVar2 = *piVar2 + *piVar5 + -1;
      piVar2 = (int *)FUN_100e1088(&local_40,uVar1);
      piVar5 = (int *)FUN_100e1088(&local_58,uVar1);
      *piVar2 = *piVar2 + *piVar5;
      piVar2 = (int *)FUN_100e1088(&local_58,uVar10);
      iVar8 = *piVar2;
      uVar4 = FUN_100e1580(iVar3,0);
      piVar2 = (int *)FUN_100e1088(uVar4,uVar10);
      iVar7 = *piVar2;
      uVar4 = FUN_100e1580(iVar3,1);
      piVar2 = (int *)FUN_100e1088(uVar4,uVar10);
      iVar3 = *piVar2;
      piVar2 = (int *)FUN_100e1088(&local_58,uVar10);
      *piVar2 = (iVar8 - iVar7) + iVar3 + 2;
      puVar6 = (undefined4 *)FUN_100e1088(&local_58,uVar1);
      *puVar6 = 0x10;
      FUN_100e10b0(&local_60,&local_40,&local_58);
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_60;
      local_44 = local_5c;
      FUN_10117884((int)piVar9 + (int)*(short *)(*piVar9 + 0x350),&local_50,param_2);
    }
    uVar10 = uVar10 + 1 & 0xff;
  } while (uVar10 < 2);
  return;
}



// Function: FUN_100f7848 at 100f7848
// Size: 532 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7848(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_30 [16];
  
  uVar2 = _DAT_4182001c;
  *param_3 = _DAT_41820018;
  param_3[1] = uVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_30);
  bVar5 = 0;
  do {
    piVar1 = (int *)FUN_100e109c(param_2,bVar5);
    iVar4 = *piVar1;
    uVar2 = FUN_100e1580(auStack_30,0);
    piVar1 = (int *)FUN_100e1088(uVar2,bVar5);
    if (iVar4 < *piVar1) {
      puVar3 = (undefined4 *)FUN_100e1088(param_1 + 0xf,bVar5);
      uVar6 = *puVar3;
      uVar2 = FUN_100e1580(auStack_30,0);
      piVar1 = (int *)FUN_100e1088(uVar2,bVar5);
      iVar4 = *piVar1;
      piVar1 = (int *)FUN_100e109c(param_2,bVar5);
      iVar4 = FUN_100f6a84(iVar4 - *piVar1,param_1[0x28],param_1[0x29],uVar6,bVar5);
      piVar1 = (int *)FUN_100e1088(param_3,bVar5);
      *piVar1 = -iVar4;
    }
    else {
      piVar1 = (int *)FUN_100e109c(param_2,bVar5);
      iVar4 = *piVar1;
      uVar2 = FUN_100e1580(auStack_30,1);
      piVar1 = (int *)FUN_100e1088(uVar2,bVar5);
      if (*piVar1 < iVar4) {
        piVar1 = (int *)FUN_100e1088(param_1 + 0x22,bVar5);
        iVar7 = *piVar1;
        piVar1 = (int *)FUN_100e1088(param_1 + 0xf,bVar5);
        iVar8 = *piVar1;
        piVar1 = (int *)FUN_100e109c(param_2,bVar5);
        iVar4 = *piVar1;
        uVar2 = FUN_100e1580(auStack_30,1);
        piVar1 = (int *)FUN_100e1088(uVar2,bVar5);
        uVar2 = FUN_100f6a84(iVar4 - *piVar1,param_1[0x28],param_1[0x29],iVar7 - iVar8,bVar5);
        puVar3 = (undefined4 *)FUN_100e1088(param_3,bVar5);
        *puVar3 = uVar2;
      }
    }
    bVar5 = bVar5 + 1;
  } while (bVar5 < 2);
  return;
}



// Function: FUN_100f7a5c at 100f7a5c
// Size: 128 bytes

void FUN_100f7a5c(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_100ca078(0);
  puVar2 = (undefined4 *)FUN_100e1088(param_1 + 0x88,param_2);
  FUN_100ca110(uVar1,*(undefined4 *)(param_1 + 0x20),&DAT_41820018,&DAT_41820018,4,4,param_2,*puVar2
              );
  return;
}



// Function: FUN_100f7adc at 100f7adc
// Size: 164 bytes

void FUN_100f7adc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x2f) == '\0')) {
    FUN_100da080(param_1,param_2);
  }
  else {
    if ((int)*(short *)(param_2 + 0x24) - 1U < 0xc) {
      return;
    }
    FUN_100da080(param_1,param_2);
  }
  return;
}



// Function: FUN_100f7d30 at 100f7d30
// Size: 548 bytes

void FUN_100f7d30(int *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = *param_2;
  uStack_2c = param_2[1];
  bVar4 = 0;
  do {
    piVar1 = (int *)FUN_100e1088(&local_30,bVar4);
    if (*piVar1 < 0) {
      piVar1 = (int *)FUN_100e1088(&local_30,bVar4);
      local_38 = *piVar1;
      piVar2 = (int *)FUN_100e1088(param_1 + 0xf,bVar4);
      local_40 = -*piVar2;
      piVar1 = &local_40;
      if (-*piVar2 < local_38) {
        piVar1 = &local_38;
      }
      iVar3 = *piVar1;
      piVar1 = (int *)FUN_100e1088(&local_30,bVar4);
      *piVar1 = iVar3;
    }
    else {
      piVar1 = (int *)FUN_100e1088(&local_30,bVar4);
      if (0 < *piVar1) {
        piVar1 = (int *)FUN_100e1088(&local_30,bVar4);
        local_34 = *piVar1;
        piVar1 = (int *)FUN_100e1088(param_1 + 0x22,bVar4);
        iVar3 = *piVar1;
        piVar2 = (int *)FUN_100e1088(param_1 + 0xf,bVar4);
        local_3c = iVar3 - *piVar2;
        piVar1 = &local_3c;
        if (local_34 < iVar3 - *piVar2) {
          piVar1 = &local_34;
        }
        iVar3 = *piVar1;
        piVar1 = (int *)FUN_100e1088(&local_30,bVar4);
        *piVar1 = iVar3;
      }
    }
    piVar1 = (int *)FUN_100e1088(param_1 + 0xf,bVar4);
    piVar2 = (int *)FUN_100e1088(&local_30,bVar4);
    *piVar1 = *piVar1 + *piVar2;
    bVar4 = bVar4 + 1;
  } while (bVar4 < 2);
  iVar3 = FUN_100e11c8(&local_30,&DAT_41820018);
  if (iVar3 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
    if (param_3 != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758),&local_30,1);
    }
  }
  return;
}



// Function: FUN_100f7f54 at 100f7f54
// Size: 128 bytes

void FUN_100f7f54(int param_1)

{
  int *piVar1;
  
  FUN_101091c4(param_1);
  piVar1 = *(int **)(param_1 + 0x94);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x4d0) + (int)piVar1);
  }
  return;
}



// Function: FUN_100f7fec at 100f7fec
// Size: 336 bytes

void FUN_100f7fec(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [312];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x338),0);
  FUN_1010bf10(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar1 = (int *)FUN_10105660(auStack_178);
  iVar2 = FUN_100ebf44(auStack_178);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar1 = (int *)FUN_10105684(auStack_178);
    iVar2 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,0);
  FUN_101055f4(auStack_178,2);
  return;
}



// Function: FUN_100f813c at 100f813c
// Size: 440 bytes

void FUN_100f813c(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_30;
  int iStack_2c;
  char local_28 [12];
  
  uVar3 = 0;
  do {
    piVar2 = (int *)param_1[uVar3 + 0x24];
    if ((piVar2 == (int *)0x0) ||
       (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x3a8) + (int)piVar2), iVar1 == 0)) {
LAB_100f820c:
      local_28[uVar3] = '\0';
    }
    else {
      iVar1 = FUN_10117884(param_1[uVar3 + 0x24] +
                           (int)*(short *)(*(int *)param_1[uVar3 + 0x24] + 0x838));
      if (iVar1 == 0) goto LAB_100f820c;
      local_28[uVar3] = '\x01';
      if (param_3 == '\0') {
        FUN_100002b8(*(undefined4 *)(param_1[uVar3 + 0x24] + 0xa8));
      }
      else {
        FUN_10117884(param_1[uVar3 + 0x24] + (int)*(short *)(*(int *)param_1[uVar3 + 0x24] + 0x840),
                     0);
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
    if (1 < uVar3) {
      local_30 = param_1[0xd];
      iStack_2c = param_1[0xe];
      FUN_1010b818(param_1,param_2,param_3);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x738),param_3);
      iVar1 = FUN_100e11c8(&local_30,param_1 + 0xd);
      if (iVar1 != 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),param_1 + 0x20,0);
      }
      uVar3 = 0;
      do {
        if (local_28[uVar3] != '\0') {
          FUN_10117884(param_1[uVar3 + 0x24] +
                       (int)*(short *)(*(int *)param_1[uVar3 + 0x24] + 0x840),1);
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 2);
      return;
    }
  } while( true );
}



// Function: FUN_100f82f4 at 100f82f4
// Size: 468 bytes

void FUN_100f82f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [8];
  int local_50;
  int local_4c;
  undefined1 auStack_48 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_48);
  bVar5 = 0;
  do {
    local_4c = FUN_100e1a3c(auStack_48,bVar5);
    piVar1 = (int *)FUN_100e109c(param_3,bVar5);
    local_5c = *piVar1;
    piVar3 = &local_5c;
    if (local_4c < *piVar1) {
      piVar3 = &local_4c;
    }
    iVar6 = *piVar3;
    uVar2 = FUN_100e1594(param_2,0);
    piVar3 = (int *)FUN_100e109c(uVar2,bVar5);
    iVar4 = *piVar3;
    uVar2 = FUN_100e1580(auStack_48,1);
    piVar3 = (int *)FUN_100e1088(uVar2,bVar5);
    iVar4 = (iVar6 + iVar4) - *piVar3;
    if (iVar4 < 1) {
      local_50 = 0;
      uVar2 = FUN_100e1594(param_2,1);
      piVar3 = (int *)FUN_100e109c(uVar2,bVar5);
      iVar4 = *piVar3;
      uVar2 = FUN_100e1580(auStack_48,0);
      piVar3 = (int *)FUN_100e1088(uVar2,bVar5);
      local_60 = (iVar4 - iVar6) - *piVar3;
      piVar3 = &local_60;
      if (local_50 < local_60) {
        piVar3 = &local_50;
      }
      iVar4 = *piVar3;
    }
    piVar3 = (int *)FUN_100e1088(auStack_58,bVar5);
    *piVar3 = iVar4;
    bVar5 = bVar5 + 1;
  } while (bVar5 < 2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),auStack_58,param_4);
  FUN_1010c1b0(param_1,param_2,param_3,param_4);
  return;
}



// Function: FUN_100f84c8 at 100f84c8
// Size: 192 bytes

void FUN_100f84c8(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100e11c8(param_2,&DAT_41820018);
  if (iVar1 != 0) {
    piVar2 = (int *)param_1[0x24];
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x848) + (int)piVar2,*param_2);
    }
    piVar2 = (int *)param_1[0x25];
    if (piVar2 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar2 + 0x848) + (int)piVar2,param_2[1]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),param_2,param_3);
  }
  return;
}



// Function: FUN_100f8588 at 100f8588
// Size: 424 bytes

void FUN_100f8588(int *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_148 [276];
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = FUN_100e1a08(param_1 + 0x18);
  if (((iVar2 == 0) &&
      (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x668) + (int)param_1), iVar2 != 0)) &&
     (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar2 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x638) + (int)param_1,auStack_30);
    iVar2 = FUN_100b0870(auStack_30);
    if (iVar2 == 0) {
      local_28 = 0xffff8ad0;
      local_24 = 0xffff8ad0;
      local_20 = 30000;
      local_1c = 30000;
      iVar2 = FUN_100e1aac(&local_28,param_2);
      if (iVar2 == 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x4e0) + (int)param_1,auStack_30);
      }
      else {
        FUN_100ee64c(auStack_148);
        uVar1 = local_34;
        uVar3 = FUN_100b0578(auStack_30);
        FUN_10000f30(uVar3,(int)(short)-(short)param_2[1],(int)(short)-(short)*param_2,uVar1);
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4e8),local_34);
        FUN_100ee77c(auStack_148,2);
      }
      if (param_3 == '\0') {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
      }
    }
  }
  return;
}



// Function: FUN_100f8730 at 100f8730
// Size: 288 bytes

int FUN_100f8730(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  param_2 = param_2 & 0xff;
  local_28 = 0;
  local_24 = 0;
  iVar5 = param_3;
  if ((*(char *)((int)param_1 + param_2 + 0xa8) != '\0') &&
     (piVar1 = (int *)FUN_100e1088(param_1 + 0x22,param_2), param_3 != *piVar1)) {
    piVar1 = param_1 + 0x28;
    puVar2 = (uint *)FUN_100e1088(piVar1,param_2);
    uVar4 = *puVar2;
    piVar3 = (int *)FUN_100e1088(piVar1,param_2);
    iVar5 = *piVar3;
    piVar1 = (int *)FUN_100e1088(piVar1,param_2);
    iVar5 = ((int)(((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0) + param_3) / iVar5
            ) * *piVar1;
  }
  piVar1 = (int *)FUN_100e1088(param_1 + 0xf,param_2);
  iVar6 = *piVar1;
  piVar1 = (int *)FUN_100e1088(&local_28,param_2);
  *piVar1 = iVar5 - iVar6;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),&local_28,1);
  return iVar5 - param_3;
}



// Function: FUN_100f8850 at 100f8850
// Size: 336 bytes

/* WARNING: Type propagation algorithm not settling */

int * FUN_100f8850(int *param_1,uint param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_r31;
  int local_30;
  int local_2c [3];
  
  iVar4 = (int)param_3;
  param_2 = param_2 & 0xff;
  piVar2 = &local_30;
  piVar1 = (int *)FUN_100e1088(param_1 + 0x28,param_2);
  iVar3 = *piVar1;
  if (3 < iVar4 - 0x14U) {
    if ((iVar4 == 0x14) || (iVar4 == 0x16)) {
      unaff_r31 = (int *)-(int)unaff_r31;
    }
    if ((*(char *)((int)param_1 + param_2 + 0xa8) != '\0') && (iVar3 != 0)) {
      local_2c[0] = 0;
      piVar1 = (int *)FUN_100e1088(param_1 + 0xf,param_2);
      local_30 = *piVar1 + (int)unaff_r31;
      if (*piVar1 + (int)unaff_r31 < local_2c[0]) {
        piVar2 = local_2c;
      }
      iVar4 = *piVar2 - (*piVar2 / iVar3) * iVar3;
      if (iVar4 != 0) {
        if ((int)unaff_r31 < 1) {
          unaff_r31 = (int *)((int)unaff_r31 + (iVar3 - iVar4));
        }
        else {
          unaff_r31 = (int *)((int)unaff_r31 - iVar4);
        }
      }
    }
    local_2c[1] = 0;
    local_2c[2] = 0;
    piVar2 = (int *)FUN_100e1088(local_2c + 1,param_2);
    *piVar2 = (int)unaff_r31;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760),local_2c + 1,1);
    return unaff_r31;
  }
  return piVar1;
}



// Function: FUN_100f8a58 at 100f8a58
// Size: 340 bytes

void FUN_100f8a58(int *param_1,int *param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  local_30 = param_1[0xf];
  iStack_2c = param_1[0x10];
  iVar3 = param_2[1];
  param_1[0x20] = *param_2;
  param_1[0x21] = iVar3;
  uVar4 = 0;
  do {
    local_24 = 0;
    piVar1 = (int *)FUN_100e109c(param_2,uVar4);
    iVar3 = *piVar1;
    piVar2 = (int *)FUN_100e1088(param_1 + 0xd,uVar4);
    local_28 = iVar3 - *piVar2;
    piVar1 = &local_28;
    if (iVar3 - *piVar2 < local_24) {
      piVar1 = &local_24;
    }
    iVar3 = *piVar1;
    piVar1 = (int *)FUN_100e1088(param_1 + 0x22,uVar4);
    *piVar1 = iVar3;
    piVar1 = (int *)param_1[uVar4 + 0x24];
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x7c0),iVar3,param_3);
    }
    piVar1 = (int *)FUN_100e1088(param_1 + 0xf,uVar4);
    if (iVar3 < *piVar1) {
      piVar1 = (int *)FUN_100e1088(&local_30,uVar4);
      *piVar1 = iVar3;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x298),&local_30,1);
  return;
}



// Function: FUN_100f8bcc at 100f8bcc
// Size: 288 bytes

void FUN_100f8bcc(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [312];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1010556c(auStack_178,param_1);
  piVar1 = (int *)FUN_10105660(auStack_178);
  iVar2 = FUN_100ebf44(auStack_178);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x618),auStack_40);
    FUN_100e18f4(&local_30,&local_188,auStack_40);
    local_30 = local_188;
    local_2c = uStack_184;
    local_28 = uStack_180;
    local_24 = uStack_17c;
    piVar1 = (int *)FUN_10105684(auStack_178);
    iVar2 = FUN_100ebf44(auStack_178);
  }
  FUN_100e1a64(auStack_190,&local_30);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x740),auStack_190,1);
  FUN_101055f4(auStack_178,2);
  return;
}



// Function: FUN_100f8cec at 100f8cec
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8cec(void)

{
  FUN_100c1c8c(&DAT_7c0802a6,_DAT_90010008,0xc0,&DAT_9421ffc0,&DAT_80410014);
  return;
}



// Function: FUN_100f8d30 at 100f8d30
// Size: 112 bytes

undefined4 * FUN_100f8d30(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(8), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = 0x4bffe8cd;
    param_1[1] = 0;
  }
  return param_1;
}



// Function: FUN_100f8da0 at 100f8da0
// Size: 40 bytes

void FUN_100f8da0(void)

{
  FUN_100f8d30(0);
  return;
}



// Function: FUN_100f8dc8 at 100f8dc8
// Size: 180 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8dc8(int *param_1)

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
    iVar1 = FUN_100e9174();
    param_1[1] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100f8e7c at 100f8e7c
// Size: 68 bytes

void FUN_100f8e7c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100f8ec0 at 100f8ec0
// Size: 232 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_100f8ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = (int *)FUN_100f5088(param_1);
  piVar1[1] = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar2 = FUN_10000090(auStack_12c);
  if (iVar2 == 0) {
    iVar2 = FUN_10117884((int)*(int **)(param_1 + 4) +
                         (int)*(short *)(**(int **)(param_1 + 4) + 0x88));
    piVar1[1] = iVar2;
    _DAT_41820010 = local_24;
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
    FUN_100db158((int)local_2c,local_28);
  }
  return piVar1;
}



// Function: FUN_100f8fa8 at 100f8fa8
// Size: 340 bytes

int FUN_100f8fa8(int param_1,int param_2,char param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_158 [4];
  int local_154;
  
  FUN_100ebf7c(auStack_158,*(undefined4 *)(param_1 + 4),1);
  iVar1 = FUN_100ec060(auStack_158);
  iVar2 = FUN_100ebf44(auStack_158);
  while ((iVar3 = 0, iVar2 != 0 && (iVar3 = local_154, param_2 != iVar1))) {
    iVar1 = FUN_100ec0e8(auStack_158);
    iVar2 = FUN_100ebf44(auStack_158);
  }
  if (iVar3 == 0) {
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x1d0),
                 param_2);
    iVar3 = FUN_10117884((int)*(int **)(param_1 + 4) +
                         (int)*(short *)(**(int **)(param_1 + 4) + 0xa8));
    *param_4 = 1;
  }
  else if (param_3 == '\0') {
    *param_4 = 0;
  }
  else {
    FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x1b8),
                 iVar3,param_2);
    *param_4 = 1;
  }
  FUN_100ebff4(auStack_158,2);
  return iVar3;
}



// Function: FUN_100f90fc at 100f90fc
// Size: 56 bytes

void FUN_100f90fc(int param_1)

{
  FUN_10117884((int)*(int **)(param_1 + 4) + (int)*(short *)(**(int **)(param_1 + 4) + 0x120));
  return;
}



// Function: FUN_100f913c at 100f913c
// Size: 124 bytes

undefined4 * FUN_100f913c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x10), param_1 != (undefined4 *)0x0)) {
    FUN_100f4dc8(param_1);
    *param_1 = &DAT_63e30000;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// Function: FUN_100f91b8 at 100f91b8
// Size: 40 bytes

void FUN_100f91b8(void)

{
  FUN_100f913c(0);
  return;
}



// Function: FUN_100f91e0 at 100f91e0
// Size: 184 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f91e0(int *param_1)

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
    param_1[3] = iVar1;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100f9298 at 100f9298
// Size: 116 bytes

bool FUN_100f9298(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  return iVar1 <= iVar2;
}



// Function: FUN_100f930c at 100f930c
// Size: 84 bytes

void FUN_100f930c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_100f5108(param_1);
  return;
}



// Function: FUN_100f93c8 at 100f93c8
// Size: 36 bytes

void FUN_100f93c8(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100f93ec at 100f93ec
// Size: 80 bytes

undefined1 FUN_100f93ec(int *param_1)

{
  undefined1 local_8 [4];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,1);
  return local_8[0];
}



// Function: FUN_100f943c at 100f943c
// Size: 80 bytes

undefined1 FUN_100f943c(int *param_1)

{
  undefined1 local_8 [4];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,1);
  return local_8[0];
}



// Function: FUN_100f948c at 100f948c
// Size: 76 bytes

void FUN_100f948c(int *param_1,undefined2 *param_2)

{
  *param_2 = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),(int)param_2 + 1,1);
  return;
}



// Function: FUN_100f94d8 at 100f94d8
// Size: 80 bytes

int FUN_100f94d8(int *param_1)

{
  short local_8 [2];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),local_8,2);
  return (int)local_8[0];
}



// Function: FUN_100f9528 at 100f9528
// Size: 80 bytes

undefined4 FUN_100f9528(int *param_1)

{
  undefined4 local_8;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),&local_8,4);
  return local_8;
}



// Function: FUN_100f9578 at 100f9578
// Size: 148 bytes

void FUN_100f9578(int *param_1,byte *param_2,short param_3)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,1);
  if ((int)param_3 < (int)(*param_2 + 1)) {
    FUN_100db2f4(0xffffffce);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2 + 1,*param_2);
  }
  return;
}



// Function: FUN_100f960c at 100f960c
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100f960c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108));
  puVar4 = (undefined4 *)0x0;
  if (-1 < iVar1) {
    puVar4 = (undefined4 *)FUN_100f15e0(iVar1);
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = _DAT_41820010;
    _DAT_41820010 = auStack_130;
    iVar2 = FUN_10000090(auStack_130);
    if (iVar2 == 0) {
      uVar3 = FUN_10000360(puVar4);
      FUN_10002598(puVar4);
      FUN_100db1ec();
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),*puVar4,iVar1);
      FUN_10001b60(puVar4,uVar3);
      _DAT_41820010 = local_28;
    }
    else {
      puVar4 = (undefined4 *)FUN_100ef510(puVar4);
      FUN_100db158((int)local_30,local_2c);
    }
  }
  return puVar4;
}



// Function: FUN_100f9734 at 100f9734
// Size: 260 bytes

bool FUN_100f9734(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_118 [256];
  
  local_118[0] = 0;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),local_118,0x100);
  *param_2 = 0;
  iVar4 = FUN_100ee208(uVar1,local_118);
  *param_2 = iVar4;
  if (iVar4 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),iVar2 + iVar3);
  }
  return iVar4 != 0;
}



// Function: FUN_100f9838 at 100f9838
// Size: 392 bytes

bool FUN_100f9838(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_120;
  byte local_11c [260];
  
  local_11c[0] = 0;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),&local_120,4);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x108));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140),local_11c,0x100);
  if ((int)((local_11c[0] - 1) + (uint)(local_11c[0] != 0)) < 0) {
    iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),local_120);
  }
  else {
    FUN_100c2120(local_11c);
    iVar3 = FUN_100c1950();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x210),local_120,iVar3);
  }
  *param_2 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_100c208c((int)(short)iVar3);
    *param_2 = uVar4;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),iVar1 + iVar2);
  }
  return iVar3 != 0 || local_120 == 0;
}



// Function: FUN_100f99c0 at 100f99c0
// Size: 104 bytes

void FUN_100f99c0(undefined4 *param_1,int *param_2)

{
  undefined4 *puStack00000018;
  undefined4 local_10 [2];
  
  puStack00000018 = param_1;
  FUN_100b02d0(local_10);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_10,4);
  *puStack00000018 = local_10[0];
  return;
}



// Function: FUN_100f9a28 at 100f9a28
// Size: 60 bytes

void FUN_100f9a28(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,8);
  return;
}



// Function: FUN_100f9a64 at 100f9a64
// Size: 60 bytes

void FUN_100f9a64(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,8);
  return;
}



// Function: FUN_100f9aa0 at 100f9aa0
// Size: 60 bytes

void FUN_100f9aa0(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,0x10);
  return;
}



// Function: FUN_100f9adc at 100f9adc
// Size: 60 bytes

void FUN_100f9adc(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),param_2,6);
  return;
}



// Function: FUN_100f9b18 at 100f9b18
// Size: 80 bytes

undefined4 FUN_100f9b18(int *param_1)

{
  undefined4 local_8;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),&local_8,4);
  return local_8;
}



// Function: FUN_100f9b68 at 100f9b68
// Size: 528 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f9b68(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  iVar3 = 0;
  if (iVar2 == 0) {
    *param_2 = 0;
    iVar3 = 1;
  }
  else if (iVar2 == 1) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0),&local_13c,4);
    if (piVar1 != (int *)0x0) {
      iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0xb0) + (int)piVar1,local_13c);
      *param_2 = iVar2;
    }
    if (*param_2 != 0) {
      iVar3 = 1;
    }
  }
  else {
    if (iVar2 == 2) {
      iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x150),param_2);
    }
    else if (iVar2 == 3) {
      iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158),param_2);
    }
    if (iVar3 != 0) {
      local_140[0] = 0;
      if (piVar1 != (int *)0x0) {
        local_13c = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8),*param_2,0,local_140)
        ;
      }
      local_38 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_30 = _DAT_41820010;
      _DAT_41820010 = auStack_138;
      iVar2 = FUN_10000090(auStack_138);
      if (iVar2 == 0) {
        param_2 = (int *)*param_2;
        if (param_2 != (int *)0x0) {
          FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x78),param_1);
        }
        _DAT_41820010 = local_30;
      }
      else {
        *param_2 = 0;
        FUN_100db158((int)local_38,local_34);
      }
    }
  }
  return iVar3;
}



// Function: FUN_100f9d78 at 100f9d78
// Size: 108 bytes

void FUN_100f9d78(int *param_1)

{
  uint uVar1;
  undefined1 auStack_8 [4];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if ((uVar1 & 1) != 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1,auStack_8,1);
  }
  return;
}



// Function: FUN_100f9de4 at 100f9de4
// Size: 140 bytes

void FUN_100f9de4(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  
  if (param_2 != 0) {
    sVar1 = *(short *)(param_1 + 8) + 1;
    *(short *)(param_1 + 8) = sVar1;
    FUN_100f16f8(*(undefined4 *)(param_1 + 0xc),(int)sVar1 << 3);
    *(int *)(*(short *)(param_1 + 8) * 8 + **(int **)(param_1 + 0xc) + -8) = param_2;
    *(undefined4 *)(**(int **)(param_1 + 0xc) + *(short *)(param_1 + 8) * 8 + -4) = param_3;
  }
  return;
}



// Function: FUN_100f9e88 at 100f9e88
// Size: 36 bytes

void FUN_100f9e88(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100f9eac at 100f9eac
// Size: 68 bytes

void FUN_100f9eac(int *param_1,undefined1 param_2)

{
  undefined1 uStack0000001f;
  
  uStack0000001f = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&stack0x0000001f,1);
  return;
}



// Function: FUN_100f9ef0 at 100f9ef0
// Size: 68 bytes

void FUN_100f9ef0(int *param_1,undefined1 param_2)

{
  undefined1 uStack0000001f;
  
  uStack0000001f = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&stack0x0000001f,1);
  return;
}



// Function: FUN_100f9f34 at 100f9f34
// Size: 72 bytes

void FUN_100f9f34(int *param_1,undefined2 param_2)

{
  undefined2 uStack0000001e;
  
  uStack0000001e = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),
               (undefined1 *)((int)register0x00000004 + 0x1f),1);
  return;
}



// Function: FUN_100f9f7c at 100f9f7c
// Size: 68 bytes

void FUN_100f9f7c(int *param_1,undefined2 param_2)

{
  undefined2 uStack0000001e;
  
  uStack0000001e = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&stack0x0000001e,2);
  return;
}



// Function: FUN_100f9fc0 at 100f9fc0
// Size: 68 bytes

void FUN_100f9fc0(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&stack0x0000001c,4);
  return;
}



// Function: FUN_100fa004 at 100fa004
// Size: 432 bytes

void FUN_100fa004(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [8];
  
  local_20[0] = '\0';
  iVar2 = 2;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (param_3 != '\0') {
      iVar2 = 3;
    }
    piVar1 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
    if (piVar1 != (int *)0x0) {
      local_28 = FUN_10117884((int)*(short *)(*piVar1 + 0xa8) + (int)piVar1,param_2,0,local_20);
      if (local_20[0] == '\0') {
        iVar2 = 1;
      }
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),iVar2);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1,&local_28,4);
    }
    else {
      if (iVar2 == 2) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e0),param_2,&local_24);
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1e8),param_2,&local_24);
      }
      if (param_2 != (int *)0x0) {
        FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x80),param_1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1f0),local_24);
    }
  }
  return;
}



// Function: FUN_100fa1b4 at 100fa1b4
// Size: 396 bytes

void FUN_100fa1b4(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_13c;
  undefined1 local_118 [260];
  
  local_118[0] = 0;
  if (param_2 == (int *)0x0) {
    iVar1 = 0x20202020;
  }
  else {
    FUN_10117884((int)*(short *)(*param_2 + 8) + (int)param_2);
    iVar1 = FUN_100ee448();
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1c8),iVar1);
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  *param_3 = uVar2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),0x7fffffff);
  if (param_2 == (int *)0x0) {
    FUN_100b1d90(local_118,*(int *)(local_13c + -0x70c) + 0x54);
  }
  else {
    FUN_100f5184(param_2,local_118);
    if ((iVar1 != 0x20202020) && (iVar1 = FUN_100ee0a0(iVar1), iVar1 != 0)) {
      iVar1 = FUN_100c1950(iVar1);
      FUN_100c2120(local_118);
      iVar3 = FUN_100c1950();
      if ((iVar3 != 0) && (iVar1 == iVar3)) {
        FUN_100b1d90(local_118,*(int *)(local_13c + -0x70c) + 0x50);
      }
    }
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0),local_118);
  return;
}



// Function: FUN_100fa340 at 100fa340
// Size: 336 bytes

void FUN_100fa340(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_13c;
  undefined4 local_118;
  undefined1 local_114 [256];
  
  local_114[0] = 0;
  if (param_2 == 0) {
    local_118 = 0;
  }
  else {
    local_118 = FUN_100f51f4(param_2);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&local_118,4);
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  *param_3 = uVar1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),0x7fffffff);
  if (param_2 != 0) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),local_118);
    if (iVar2 == 0) {
      FUN_100f5184(param_2,local_114);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x210),local_118,local_118);
      goto LAB_100fa460;
    }
  }
  FUN_100b1d90(local_114,*(int *)(local_13c + -0x70c) + 0x58);
LAB_100fa460:
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d0),local_114);
  return;
}



// Function: FUN_100fa490 at 100fa490
// Size: 164 bytes

void FUN_100fa490(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),iVar1 - param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),iVar1);
  return;
}



// Function: FUN_100fa534 at 100fa534
// Size: 68 bytes

void FUN_100fa534(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&stack0x0000001c,4);
  return;
}



// Function: FUN_100fa578 at 100fa578
// Size: 60 bytes

void FUN_100fa578(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,8);
  return;
}



// Function: FUN_100fa5b4 at 100fa5b4
// Size: 60 bytes

void FUN_100fa5b4(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,8);
  return;
}



// Function: FUN_100fa5f0 at 100fa5f0
// Size: 60 bytes

void FUN_100fa5f0(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,0x10);
  return;
}



// Function: FUN_100fa62c at 100fa62c
// Size: 60 bytes

void FUN_100fa62c(int *param_1,undefined4 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,6);
  return;
}



// Function: FUN_100fa668 at 100fa668
// Size: 68 bytes

void FUN_100fa668(int *param_1,undefined4 param_2)

{
  undefined4 uStack0000001c;
  
  uStack0000001c = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),&stack0x0000001c,4);
  return;
}



// Function: FUN_100fa6ac at 100fa6ac
// Size: 120 bytes

void FUN_100fa6ac(int *param_1)

{
  uint uVar1;
  undefined1 local_10 [8];
  
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  if ((uVar1 & 1) != 0) {
    local_10[0] = 0;
    FUN_10117884((int)*(short *)(*param_1 + 0x170) + (int)param_1,local_10,1);
  }
  return;
}



// Function: FUN_100fa724 at 100fa724
// Size: 76 bytes

void FUN_100fa724(int *param_1,byte *param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),param_2,*param_2 + 1);
  return;
}



// Function: FUN_100fa770 at 100fa770
// Size: 224 bytes

void FUN_100fa770(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),0xffffffff);
  }
  else {
    uVar1 = FUN_10001c20(param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),uVar1,uVar1);
    uVar2 = FUN_10000360(param_2);
    FUN_10002598(param_2);
    FUN_100db1ec();
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170),*param_2,uVar1);
    FUN_10001b60(param_2,uVar2);
  }
  return;
}



// Function: FUN_100fa850 at 100fa850
// Size: 8 bytes

undefined4 FUN_100fa850(void)

{
  return 0x90bf0004;
}



// Function: FUN_100fa860 at 100fa860
// Size: 112 bytes

undefined4 * FUN_100fa860(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x14), param_1 != (undefined4 *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = &DAT_80010048;
    param_1[4] = 0;
  }
  return param_1;
}



// Function: FUN_100fa8d0 at 100fa8d0
// Size: 40 bytes

void FUN_100fa8d0(void)

{
  FUN_100fa860(0);
  return;
}



// Function: FUN_100fa8f8 at 100fa8f8
// Size: 60 bytes

void FUN_100fa8f8(int param_1,undefined4 param_2)

{
  FUN_100f91e0(param_1);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// Function: FUN_100fa934 at 100fa934
// Size: 100 bytes

undefined4 FUN_100fa934(int param_1)

{
  undefined4 local_10 [2];
  
  FUN_100db26c(*(undefined4 *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x158),
               local_10);
  FUN_100db2f4();
  return local_10[0];
}



// Function: FUN_100fa998 at 100fa998
// Size: 100 bytes

undefined4 FUN_100fa998(int param_1)

{
  undefined4 local_10 [2];
  
  FUN_100db26c(*(undefined4 *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x150),
               local_10);
  FUN_100db2f4();
  return local_10[0];
}



// Function: FUN_100fa9fc at 100fa9fc
// Size: 100 bytes

void FUN_100fa9fc(int param_1,undefined4 param_2)

{
  FUN_100db26c(*(undefined4 *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x288),
               param_2,1);
  FUN_100db2f4();
  return;
}



// Function: FUN_100faa60 at 100faa60
// Size: 96 bytes

void FUN_100faa60(int param_1,undefined4 param_2)

{
  FUN_100db26c(*(undefined4 *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x280),
               param_2);
  FUN_100db2f4();
  return;
}



// Function: FUN_100faac0 at 100faac0
// Size: 104 bytes

void FUN_100faac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  
  uStack00000020 = param_3;
  FUN_100db26c(*(undefined4 *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x260),
               param_2,&stack0x00000020);
  FUN_100db2f4();
  return;
}



// Function: FUN_100fab28 at 100fab28
// Size: 104 bytes

void FUN_100fab28(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  
  uStack00000020 = param_3;
  FUN_100db26c(*(undefined4 *)(param_1 + 0x10));
  FUN_10117884((int)*(int **)(param_1 + 0x10) + (int)*(short *)(**(int **)(param_1 + 0x10) + 0x2c0),
               param_2,&stack0x00000020);
  FUN_100db2f4();
  return;
}



// Function: FUN_100fab98 at 100fab98
// Size: 136 bytes

undefined4 * FUN_100fab98(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x24), param_1 != (undefined4 *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = &DAT_7c0803a6;
    param_1[7] = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[6] = 0;
  }
  return param_1;
}



// Function: FUN_100fac20 at 100fac20
// Size: 40 bytes

void FUN_100fac20(void)

{
  FUN_100fab98(0);
  return;
}



// Function: FUN_100fac48 at 100fac48
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fac48(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100f91e0(param_1);
  param_1[7] = param_3;
  param_1[5] = 0;
  if (param_2 != 0) {
    iVar1 = FUN_100ef2f8(param_2);
    if (iVar1 != 0) {
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = _DAT_41820010;
      _DAT_41820010 = auStack_130;
      iVar1 = FUN_10000090(auStack_130);
      if (iVar1 == 0) {
        FUN_10000b70(param_2);
        FUN_100db328();
        _DAT_41820010 = local_28;
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
        FUN_100db158((int)local_30,local_2c);
      }
    }
    iVar1 = FUN_10001c20(param_2);
    param_1[6] = iVar1;
    uVar2 = FUN_10000360(param_2);
    *(undefined1 *)(param_1 + 8) = uVar2;
    FUN_10000048(param_2);
    param_1[4] = param_2;
  }
  return;
}



// Function: FUN_100fad64 at 100fad64
// Size: 148 bytes

void FUN_100fad64(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[4] != 0) {
    iVar2 = *param_1;
    uVar1 = FUN_10117884((int)*(short *)(iVar2 + 0xa8) + (int)param_1,param_1[4],iVar2,
                         *(undefined4 *)(iVar2 + 0xac));
    FUN_10117884((int)*(short *)(iVar2 + 0xc0) + (int)param_1,uVar1);
    FUN_10001b60(param_1[4],(int)*(char *)(param_1 + 8));
  }
  FUN_100f930c(param_1);
  return;
}



// Function: FUN_100fae08 at 100fae08
// Size: 52 bytes

int FUN_100fae08(int param_1,int param_2)

{
  int *piVar1;
  int local_8;
  int local_4;
  
  piVar1 = &local_8;
  local_4 = *(int *)(param_1 + 0x1c);
  local_8 = param_2;
  if (param_2 < *(int *)(param_1 + 0x1c)) {
    piVar1 = &local_4;
  }
  return *piVar1;
}



// Function: FUN_100fae3c at 100fae3c
// Size: 112 bytes

void FUN_100fae3c(int param_1,int param_2)

{
  undefined4 in_r9;
  
  if (param_2 < 0) {
    FUN_100db2f4(0xffffffd8);
  }
  else if (*(int *)(param_1 + 0x18) < param_2) {
    in_r9 = 0xffffffd9;
    param_2 = *(int *)(param_1 + 0x18);
  }
  else {
    in_r9 = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  FUN_100db2f4(in_r9);
  return;
}



// Function: FUN_100faeac at 100faeac
// Size: 80 bytes

void FUN_100faeac(int param_1,int param_2)

{
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x10),param_2);
  if (param_2 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}



// Function: FUN_100faefc at 100faefc
// Size: 156 bytes

void FUN_100faefc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  uVar2 = 0;
  if (iVar1 < param_3) {
    uVar2 = 0xffffffd9;
    param_3 = iVar1;
  }
  if (param_3 < 1) {
    if (param_3 < 0) {
      uVar2 = 0xffffffce;
    }
  }
  else {
    FUN_10002f88(param_2,**(int **)(param_1 + 0x10) + *(int *)(param_1 + 0x14),param_3);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  }
  FUN_100db2f4(uVar2);
  return;
}



// Function: FUN_100faf98 at 100faf98
// Size: 260 bytes

void FUN_100faf98(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 < 0) {
    FUN_100db2f4(0xffffffce);
  }
  if (param_1[6] - param_1[5] < param_3) {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x218) + (int)param_1,
                         param_3 - (param_1[6] - param_1[5]));
    FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,iVar1 + param_1[6]);
  }
  uVar2 = FUN_10000360(param_1[4]);
  FUN_10002598(param_1[4]);
  FUN_100db1ec();
  FUN_10002f88(*(int *)param_1[4] + param_1[5],param_2,param_3);
  FUN_10001b60(param_1[4],uVar2);
  param_3 = param_3 + param_1[5];
  param_1[5] = param_3;
  if (param_1[6] < param_3) {
    param_1[6] = param_3;
  }
  return;
}



// Function: FUN_100fb0a4 at 100fb0a4
// Size: 116 bytes

undefined4 * FUN_100fb0a4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x18), param_1 != (undefined4 *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = &DAT_4e800020;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return param_1;
}



// Function: FUN_100fb118 at 100fb118
// Size: 40 bytes

void FUN_100fb118(void)

{
  FUN_100fb0a4(0);
  return;
}



// Function: FUN_100fb140 at 100fb140
// Size: 36 bytes

void FUN_100fb140(void)

{
  FUN_100f91e0();
  return;
}



// Function: FUN_100fb16c at 100fb16c
// Size: 112 bytes

void FUN_100fb16c(int param_1,int param_2)

{
  undefined4 in_r9;
  
  if (param_2 < 0) {
    FUN_100db2f4(0xffffffd8);
  }
  else if (*(int *)(param_1 + 0x14) < param_2) {
    in_r9 = 0xffffffd9;
    param_2 = *(int *)(param_1 + 0x14);
  }
  else {
    in_r9 = 0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  FUN_100db2f4(in_r9);
  return;
}



// Function: FUN_100fb1fc at 100fb1fc
// Size: 92 bytes

void FUN_100fb1fc(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 < 0) {
    FUN_100db2f4(0xffffffce);
  }
  param_3 = *(int *)(param_1 + 0x10) + param_3;
  *(int *)(param_1 + 0x10) = param_3;
  if (*(int *)(param_1 + 0x14) < param_3) {
    *(int *)(param_1 + 0x14) = param_3;
  }
  return;
}



// Function: FUN_100fb260 at 100fb260
// Size: 120 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100fb260(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x1c), param_1 != (undefined4 *)0x0)) {
    FUN_100f913c(param_1);
    *param_1 = FUN_101171bc;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1;
}



// Function: FUN_100fb2d8 at 100fb2d8
// Size: 40 bytes

void FUN_100fb2d8(void)

{
  FUN_100fb260(0);
  return;
}



// Function: FUN_100fb300 at 100fb300
// Size: 276 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb300(int *param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_130 [256];
  short local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_100f91e0(param_1);
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 == 0) {
    uVar2 = FUN_10000420();
    FUN_10000438(0);
    iVar1 = FUN_10001728(param_2,(int)param_3);
    param_1[4] = iVar1;
    FUN_10000438(uVar2);
    FUN_100db2a4(param_1[4]);
    iVar1 = FUN_10003888(param_1[4]);
    param_1[6] = iVar1;
    FUN_100db328();
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  return;
}



// Function: FUN_100fb44c at 100fb44c
// Size: 88 bytes

void FUN_100fb44c(int param_1,int param_2)

{
  FUN_100016e0(*(undefined4 *)(param_1 + 0x10),param_2);
  FUN_100db328();
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



// Function: FUN_100fb4a4 at 100fb4a4
// Size: 228 bytes

void FUN_100fb4a4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar1 = iVar1 + param_3;
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8));
  if (iVar2 < iVar1) {
    FUN_10117884((int)*(short *)(*param_1 + 0xc0) + (int)param_1,iVar1);
  }
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10001740(param_1[4],uVar3,param_2,param_3);
  FUN_100db328();
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb0),iVar1);
  return;
}



// Function: FUN_100fb588 at 100fb588
// Size: 268 bytes

void FUN_100fb588(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_20;
  int local_1c;
  
  piVar5 = &local_20;
  local_1c = param_3;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xb8));
  local_20 = iVar2 - iVar1;
  if (local_1c < iVar2 - iVar1) {
    piVar5 = &local_1c;
  }
  iVar2 = *piVar5;
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xa8));
  FUN_10000ba0(param_1[4],uVar3,param_2,iVar2);
  FUN_100db328();
  iVar4 = *param_1;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xa8));
  FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0xb0),iVar2 + iVar1);
  return;
}



// Function: FUN_100fb694 at 100fb694
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb694(void)

{
  FUN_100c1c8c(&DAT_807f0008,_DAT_90010008,8,&DAT_9421ffc0,0x90c30020);
  FUN_100c1c8c(0x60000000,_DAT_609e0000,0x10,&DAT_607f0000,0x90c30020);
  FUN_100c1c8c(0x90bf0004,_DAT_281f0000,0x14,&DAT_40820024,0x60000000);
  FUN_100c1c8c(&DAT_30210040,_DAT_38600044,0x24,0x4bfde4e1,0x60000000);
  FUN_100c1c8c(&DAT_bbe1fffc,_DAT_60000000,0x18,&DAT_607f0000,0x60000000);
  FUN_100c1c8c(&DAT_7c0802a6,_DAT_281f0000,0x1c,&DAT_4082000c,0x60000000);
  return;
}



// Function: FUN_100fb780 at 100fb780
// Size: 112 bytes

undefined4 * FUN_100fb780(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xc4), param_1 != (undefined4 *)0x0)) {
    FUN_100f6b8c(param_1);
    *param_1 = &DAT_289e0000;
    param_1[0x30] = 0;
  }
  return param_1;
}



// Function: FUN_100fb7f0 at 100fb7f0
// Size: 148 bytes

undefined4 * FUN_100fb7f0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(200), param_1 != (undefined4 *)0x0)) {
    FUN_100f6b8c(param_1);
    *param_1 = 0x33df0008;
    FUN_100b02d0(param_1 + 0x31);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  return param_1;
}



// Function: FUN_100fb88c at 100fb88c
// Size: 40 bytes

void FUN_100fb88c(void)

{
  FUN_100fb780(0);
  return;
}



// Function: FUN_100fb8b4 at 100fb8b4
// Size: 196 bytes

void FUN_100fb8b4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_148 [316];
  
  FUN_100ebf7c(auStack_148,param_1[0x30],1);
  uVar1 = FUN_100ec060(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),uVar1);
    uVar1 = FUN_100ec0e8(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_100f6f98(param_1);
  FUN_100ebff4(auStack_148,2);
  return;
}



// Function: FUN_100fb99c at 100fb99c
// Size: 144 bytes

void FUN_100fb99c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 0xc0) = param_1;
    local_10 = param_4;
    local_c = param_3;
    FUN_100e0f78(param_2 + 0xc4,&local_10);
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar1 = FUN_100e9174();
      *(undefined4 *)(param_1 + 0xc0) = uVar1;
    }
    FUN_10117884((int)*(int **)(param_1 + 0xc0) +
                 (int)*(short *)(**(int **)(param_1 + 0xc0) + 0x150),param_2);
  }
  return;
}



// Function: FUN_100fba2c at 100fba2c
// Size: 148 bytes

void FUN_100fba2c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0xc0) = 0;
    piVar3 = *(int **)(param_1 + 0xc0);
    if (piVar3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*piVar3 + 0x180) + (int)piVar3);
      iVar1 = FUN_10117884((int)*(int **)(param_1 + 0xc0) +
                           (int)*(short *)(**(int **)(param_1 + 0xc0) + 0xf0));
      if (iVar1 != 0) {
        uVar2 = FUN_100f57c8(*(undefined4 *)(param_1 + 0xc0));
        *(undefined4 *)(param_1 + 0xc0) = uVar2;
      }
    }
  }
  return;
}



// Function: FUN_100fbac0 at 100fbac0
// Size: 668 bytes

void FUN_100fbac0(int param_1,undefined4 *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  undefined1 auStack_188 [312];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  FUN_100ebf7c(auStack_188,*(undefined4 *)(param_1 + 0xc0),1);
  piVar1 = (int *)FUN_100ec060(auStack_188);
  iVar2 = FUN_100ebf44(auStack_188);
  while (iVar2 != 0) {
    local_40 = *param_2;
    uStack_3c = param_2[1];
    bVar6 = 0;
    do {
      psVar3 = (short *)FUN_100b0388(piVar1 + 0x31,bVar6);
      if (*psVar3 != 0) {
        piVar4 = (int *)FUN_100e1088(&local_40,bVar6);
        if (*piVar4 < 0) {
          piVar4 = (int *)FUN_100e1088(&local_40,bVar6);
          local_48 = *piVar4;
          piVar5 = (int *)FUN_100e1088(piVar1 + 0xf,bVar6);
          local_50 = -*piVar5;
          piVar4 = &local_50;
          if (-*piVar5 < local_48) {
            piVar4 = &local_48;
          }
          iVar2 = *piVar4;
          piVar4 = (int *)FUN_100e1088(&local_40,bVar6);
          *piVar4 = iVar2;
        }
        else {
          piVar4 = (int *)FUN_100e1088(&local_40,bVar6);
          if (0 < *piVar4) {
            piVar4 = (int *)FUN_100e1088(&local_40,bVar6);
            local_44 = *piVar4;
            piVar4 = (int *)FUN_100e1088(piVar1 + 0x22,bVar6);
            iVar2 = *piVar4;
            piVar5 = (int *)FUN_100e1088(piVar1 + 0xf,bVar6);
            local_4c = iVar2 - *piVar5;
            piVar4 = &local_4c;
            if (local_44 < iVar2 - *piVar5) {
              piVar4 = &local_44;
            }
            iVar2 = *piVar4;
            piVar4 = (int *)FUN_100e1088(&local_40,bVar6);
            *piVar4 = iVar2;
          }
        }
        piVar4 = (int *)FUN_100e1088(piVar1 + 0xf,bVar6);
        piVar5 = (int *)FUN_100e1088(&local_40,bVar6);
        *piVar4 = *piVar4 + *piVar5;
      }
      bVar6 = bVar6 + 1;
    } while (bVar6 < 2);
    iVar2 = FUN_100e11c8(&local_40,&DAT_41820018);
    if (iVar2 != 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3b8));
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x3e0));
    }
    piVar1 = (int *)FUN_100ec0e8(auStack_188);
    iVar2 = FUN_100ebf44(auStack_188);
  }
  FUN_100f7d30(param_1,param_2,param_3);
  FUN_100ebff4(auStack_188,2);
  return;
}



// Function: FUN_100fbd5c at 100fbd5c
// Size: 1504 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbd5c(int *param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_654;
  undefined4 local_630;
  undefined1 auStack_62c [8];
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined1 auStack_614 [312];
  undefined1 auStack_4dc [312];
  undefined1 auStack_3a4 [16];
  undefined1 auStack_394 [256];
  short local_294;
  undefined4 local_290;
  undefined1 *local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 auStack_27c [8];
  undefined4 local_274;
  undefined1 auStack_26c [276];
  undefined4 local_158;
  undefined1 auStack_154 [276];
  undefined4 local_40;
  
  iVar2 = FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x678));
  if (iVar2 != 0) {
    local_294 = 0;
    local_290 = 0;
    local_288 = 0;
    local_284 = 0;
    local_28c = _DAT_41820010;
    _DAT_41820010 = auStack_394;
    iVar2 = FUN_10000090(auStack_394);
    if (iVar2 == 0) {
      FUN_100ee64c(auStack_26c);
      FUN_10117884((int)*(short *)(*param_1 + 0x608) + (int)param_1,local_158);
      FUN_10117884((int)*(short *)(*param_1 + 0x2b0) + (int)param_1,local_158);
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x638),auStack_62c);
      local_624 = 0xffff8ad0;
      local_620 = 0xffff8ad0;
      local_61c = 30000;
      local_618 = 30000;
      iVar2 = FUN_100e1aac(&local_624,param_2);
      if (iVar2 == 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
        FUN_100ebf7c(auStack_614,param_1[0x30],1);
        piVar3 = (int *)FUN_100ec060(auStack_614);
        iVar2 = FUN_100ebf44(auStack_614);
        while (iVar2 != 0) {
          iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x668));
          if (iVar2 != 0) {
            if ((*param_2 == 0) || (*(short *)(piVar3 + 0x31) != 1)) {
              if ((param_2[1] != 0) && (*(short *)((int)piVar3 + 0xc6) == 1)) {
                FUN_10117884((int)*(short *)(*piVar3 + 0x4d0) + (int)piVar3);
              }
            }
            else {
              FUN_10117884((int)*(short *)(*piVar3 + 0x4d0) + (int)piVar3);
            }
          }
          piVar3 = (int *)FUN_100ec0e8(auStack_614);
          iVar2 = FUN_100ebf44(auStack_614);
        }
        FUN_100ebff4(auStack_614,2);
      }
      else {
        FUN_100ee64c(auStack_154);
        FUN_100ebf7c(auStack_4dc,param_1[0x30],1);
        piVar3 = (int *)FUN_100ec060(auStack_4dc);
        iVar2 = FUN_100ebf44(auStack_4dc);
        while (iVar2 != 0) {
          iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x668));
          if (iVar2 != 0) {
            local_274 = piVar3[0x31];
            FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x618),auStack_3a4);
            FUN_10117884(piVar3[8] + (int)*(short *)(*(int *)piVar3[8] + 0x288),auStack_3a4,
                         auStack_27c);
            uVar1 = local_40;
            if (param_2[1] == 0) {
LAB_100fc178:
              if ((*param_2 != 0) && (local_274._0_2_ == 1)) {
LAB_100fc190:
                FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x608),local_40);
                FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2b0),local_40);
                FUN_10003060(local_158,local_40,local_158);
              }
            }
            else {
              if (((*param_2 == 0) || (local_274._2_2_ != 0)) || (local_274._0_2_ != 1)) {
                if (param_2[1] == 0) goto LAB_100fc178;
                if (((*param_2 != 0) && (local_274._2_2_ == 1)) && (local_274._0_2_ == 0)) {
                  uVar4 = FUN_100b0578(auStack_27c);
                  FUN_10000f30(uVar4,(int)(short)-(short)param_2[1],0,uVar1);
                  FUN_10117884(piVar3[8] + (int)*(short *)(*(int *)piVar3[8] + 0x4e8),local_40);
                  goto LAB_100fc1e8;
                }
                if ((param_2[1] == 0) || (local_274._2_2_ != 1)) goto LAB_100fc178;
                goto LAB_100fc190;
              }
              uVar4 = FUN_100b0578(auStack_27c);
              FUN_10000f30(uVar4,0,(int)(short)-(short)*param_2,uVar1);
              FUN_10117884(piVar3[8] + (int)*(short *)(*(int *)piVar3[8] + 0x4e8),local_40);
            }
          }
LAB_100fc1e8:
          piVar3 = (int *)FUN_100ec0e8(auStack_4dc);
          iVar2 = FUN_100ebf44(auStack_4dc);
        }
        FUN_100ebff4(auStack_4dc,2);
        FUN_10002be0(local_158,*(undefined4 *)(*(int *)(*(int *)(local_654 + -0xb0) + 0xca) + 0x1c),
                     local_158);
        FUN_10001e48(local_40);
        FUN_10001548(local_158);
        uVar1 = local_158;
        uVar4 = FUN_100b0578(auStack_62c);
        FUN_10000f30(uVar4,(int)(short)-(short)param_2[1],(int)(short)-(short)*param_2,uVar1);
        FUN_10001548(local_40);
        FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x4e8),local_158);
        FUN_100ee77c(auStack_154,2);
      }
      FUN_100ee77c(auStack_26c,2);
      _DAT_41820010 = local_28c;
    }
    else {
      FUN_100ef5b8(local_630);
      FUN_100db158((int)local_294,local_290);
    }
    if (param_3 == '\0') {
      FUN_10117884(param_1[8] + (int)*(short *)(*(int *)param_1[8] + 0x4c8));
    }
  }
  return;
}



// Function: FUN_100fc344 at 100fc344
// Size: 40 bytes

void FUN_100fc344(void)

{
  FUN_100fb7f0(0);
  return;
}



// Function: FUN_100fc36c at 100fc36c
// Size: 92 bytes

void FUN_100fc36c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc0);
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x790),param_1);
  }
  FUN_100f6f98(param_1);
  return;
}



// Function: FUN_100fc3c8 at 100fc3c8
// Size: 116 bytes

void FUN_100fc3c8(int param_1,int *param_2,undefined1 param_3)

{
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    local_4 = (int)*(short *)(param_1 + 0xc6) * param_2[1];
    local_8 = (int)*(short *)(param_1 + 0xc4) * *param_2;
    FUN_10117884((int)*(int **)(param_1 + 0xc0) +
                 (int)*(short *)(**(int **)(param_1 + 0xc0) + 0x778),&local_8,param_3);
  }
  return;
}



// Function: FUN_100fc43c at 100fc43c
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc43c(void)

{
  undefined4 uVar1;
  
  uVar1 = _FUN_10117184;
  FUN_100c1c8c(0x480000f8,_DAT_63c30000,0xc4,0x4bffe7f5,_FUN_10117184);
  FUN_100c1c8c(&DAT_40860014,_DAT_60000000,200,&DAT_63e30000,uVar1);
  return;
}



// Function: FUN_100fc4ac at 100fc4ac
// Size: 132 bytes

undefined4 * FUN_100fc4ac(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x2c), param_1 != (undefined4 *)0x0)) {
    FUN_100bf518(param_1);
    *param_1 = 0x4bfff581;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return param_1;
}



// Function: FUN_100fc530 at 100fc530
// Size: 40 bytes

void FUN_100fc530(void)

{
  FUN_100fc4ac(0);
  return;
}



// Function: FUN_100fc558 at 100fc558
// Size: 68 bytes

void FUN_100fc558(int param_1,undefined1 param_2)

{
  FUN_100bf5e4(param_1,0x74616262);
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// Function: FUN_100fc59c at 100fc59c
// Size: 88 bytes

void FUN_100fc59c(int param_1,int *param_2)

{
  undefined1 uVar1;
  
  FUN_100bf698(param_1,param_2);
  uVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}



// Function: FUN_100fc5f4 at 100fc5f4
// Size: 88 bytes

void FUN_100fc5f4(int param_1,int *param_2)

{
  FUN_100bf728(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x20));
  return;
}



// Function: FUN_100fc64c at 100fc64c
// Size: 144 bytes

void FUN_100fc64c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == (int *)0x0) || (*(short *)(param_2 + 9) != 9)) {
    FUN_100bfe54(param_1);
  }
  else {
    iVar2 = *param_1;
    uVar1 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x198),uVar1);
  }
  return;
}



// Function: FUN_100fc6dc at 100fc6dc
// Size: 192 bytes

void FUN_100fc6dc(int *param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a0));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0),param_2);
  if (param_1[10] == 0) {
    param_1[10] = param_1[9];
  }
  piVar2 = (int *)param_1[10];
  if ((piVar2 != (int *)0x0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x180) + (int)piVar2), iVar1 != 0)) {
    FUN_10117884(param_1[10] + (int)*(short *)(*(int *)param_1[10] + 400),1);
  }
  return;
}



// Function: FUN_100fc7b4 at 100fc7b4
// Size: 440 bytes

void FUN_100fc7b4(int *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_150 [316];
  
  FUN_101054e0(auStack_150,param_2,param_3 == '\0');
  piVar1 = (int *)FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  do {
    if (iVar2 == 0) {
      FUN_101055f4(auStack_150,2);
      return;
    }
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0));
    if (((iVar2 == 0) ||
        (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x668) + (int)piVar1), iVar2 == 0)) ||
       (iVar2 = FUN_10117884((int)*(short *)(*piVar1 + 0x140) + (int)piVar1), iVar2 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((param_1[9] == 0) && (bVar3)) {
      param_1[9] = (int)piVar1;
    }
    iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x198));
    if (iVar2 == 0) {
      if (((*(char *)((int)param_1 + 0x21) != '\0') && (param_1[10] == 0)) && (bVar3)) {
        param_1[10] = (int)piVar1;
        FUN_101055f4(auStack_150,2);
        return;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x21) = 1;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),piVar1,param_3);
    }
    piVar1 = (int *)FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  } while( true );
}



// Function: FUN_100fc96c at 100fc96c
// Size: 36 bytes

void FUN_100fc96c(void)

{
  FUN_100f535c();
  return;
}



// Function: FUN_100fc998 at 100fc998
// Size: 104 bytes

undefined4 * FUN_100fc998(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x2c), param_1 != (undefined4 *)0x0)) {
    FUN_100fc4ac(param_1);
    *param_1 = 0x80a2fb64;
  }
  return param_1;
}



// Function: FUN_100fca00 at 100fca00
// Size: 40 bytes

void FUN_100fca00(void)

{
  FUN_100fc998(0);
  return;
}



// Function: FUN_100fca28 at 100fca28
// Size: 40 bytes

void FUN_100fca28(undefined4 param_1,undefined1 param_2)

{
  FUN_100fc558(param_1,param_2);
  return;
}



// Function: FUN_100fca50 at 100fca50
// Size: 460 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fca50(int *param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_30 [4];
  
  piVar2 = _DAT_28030000;
  iVar4 = *_DAT_28030000;
  uVar1 = FUN_10001050();
  piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(iVar4 + 0x3e0),uVar1);
  if (piVar2 != (int *)0x0) {
    iVar4 = FUN_10117884((int)*(short *)(*piVar2 + 0x818) + (int)piVar2);
    if (iVar4 == 0) {
      FUN_100ee9e8(local_30,param_2 == '\0');
      FUN_10117884((int)*(short *)(local_30[0] + 0x10) + (int)local_30);
      iVar4 = local_30[1];
      iVar3 = FUN_100eea60(local_30);
      while (iVar3 != 0) {
        piVar2 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x3e0),
                                     iVar4);
        if (((piVar2 != (int *)0x0) &&
            (iVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x668)), iVar4 != 0)) &&
           (iVar4 = FUN_10117884((int)*(short *)(*piVar2 + 0x680) + (int)piVar2), iVar4 != 0)) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),piVar2,param_2);
        }
        FUN_10117884((int)*(short *)(local_30[0] + 0x18) + (int)local_30);
        iVar4 = local_30[1];
        iVar3 = FUN_100eea60(local_30);
      }
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),piVar2,param_2);
    }
  }
  return;
}



// Function: FUN_100fcc6c at 100fcc6c
// Size: 104 bytes

undefined4 * FUN_100fcc6c(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x2c), param_1 != (undefined4 *)0x0)) {
    FUN_100fc4ac(param_1);
    *param_1 = &DAT_80df0004;
  }
  return param_1;
}



// Function: FUN_100fccd4 at 100fccd4
// Size: 40 bytes

void FUN_100fccd4(void)

{
  FUN_100fcc6c(0);
  return;
}



// Function: FUN_100fccfc at 100fccfc
// Size: 72 bytes

void FUN_100fccfc(int *param_1,undefined1 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),param_1[2],param_2);
  return;
}



// Function: FUN_100fcd44 at 100fcd44
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fcd44(void)

{
  FUN_100c1c8c(&DAT_63c40000,_DAT_80e2fb68,0x2c,&DAT_90e60038,&DAT_38800000);
  FUN_100c1c8c(0x60000000,_DAT_8102fb38,0x2c,&DAT_7c1f4040,&DAT_63c40000);
  FUN_100c1c8c(0x90bf0000,_DAT_40820034,0x2c,0x813f0004,&DAT_63c40000);
  return;
}



// Function: FUN_100fcdd4 at 100fcdd4
// Size: 136 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100fcdd4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x38), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = &DAT_554a0630;
    FUN_100b02d0(param_1 + 0xd);
    param_1[0xc] = 0;
    param_1[0xd] = _DAT_63e30000;
  }
  return param_1;
}



// Function: FUN_100fce5c at 100fce5c
// Size: 40 bytes

void FUN_100fce5c(void)

{
  FUN_100fcdd4(0);
  return;
}



// Function: FUN_100fce84 at 100fce84
// Size: 92 bytes

void FUN_100fce84(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000020;
  
  uStack00000020 = param_3;
  FUN_100c3df8(param_1,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = uStack00000020;
  return;
}



// Function: FUN_100fcee0 at 100fcee0
// Size: 236 bytes

void FUN_100fcee0(int param_1)

{
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x660),0,0);
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xb0) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xb5) = 0;
    local_18 = (int)*(short *)(param_1 + 0x34);
    local_14 = (int)*(short *)(param_1 + 0x36);
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x370),&local_18,0);
    FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 800))
    ;
    FUN_10117884((int)*(int **)(param_1 + 0x30) +
                 (int)*(short *)(**(int **)(param_1 + 0x30) + 0x780));
  }
  return;
}



// Function: FUN_100fcfd4 at 100fcfd4
// Size: 104 bytes

undefined4 * FUN_100fcfd4(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x84), param_1 != (undefined4 *)0x0)) {
    FUN_100c43fc(param_1);
    *param_1 = 0x81690010;
  }
  return param_1;
}



// Function: FUN_100fd03c at 100fd03c
// Size: 40 bytes

void FUN_100fd03c(void)

{
  FUN_100fcfd4(0);
  return;
}



// Function: FUN_100fd064 at 100fd064
// Size: 60 bytes

void FUN_100fd064(void)

{
  FUN_100c4548();
  return;
}



// Function: FUN_100fd0a0 at 100fd0a0
// Size: 104 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100fd0a0(int *param_1)

{
  *(short *)(_DAT_28030000 + 0x70) = *(short *)(_DAT_28030000 + 0x70) + 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xd0));
  *(short *)(_DAT_28030000 + 0x70) = *(short *)(_DAT_28030000 + 0x70) + -1;
  return 0;
}



// Function: FUN_100fd110 at 100fd110
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100fd110(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x94), param_1 != (undefined4 *)0x0)) {
    FUN_100fcfd4(param_1);
    *param_1 = &DAT_7d4b5b78;
    FUN_100b02d0((int)param_1 + 0x8e);
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined4 *)((int)param_1 + 0x8e) = _DAT_63e30000;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  return param_1;
}



// Function: FUN_100fd1a4 at 100fd1a4
// Size: 40 bytes

void FUN_100fd1a4(void)

{
  FUN_100fd110(0);
  return;
}



// Function: FUN_100fd1cc at 100fd1cc
// Size: 256 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd1cc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined1 auStack_12c [256];
  short local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uStack0000001c = param_2;
  FUN_100fd064(param_1,0,0,0,0,0,0,0);
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x21] = param_3;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = _DAT_41820010;
  _DAT_41820010 = auStack_12c;
  iVar1 = FUN_10000090(auStack_12c);
  if (iVar1 == 0) {
    iVar1 = FUN_100ed918();
    param_1[0x22] = iVar1;
    _DAT_41820010 = local_24;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_2c,local_28);
  }
  return;
}



// Function: FUN_100fd2cc at 100fd2cc
// Size: 68 bytes

void FUN_100fd2cc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  FUN_100c3e70(param_1);
  return;
}



// Function: FUN_100fd310 at 100fd310
// Size: 188 bytes

void FUN_100fd310(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0xa0);
    uVar1 = FUN_100b057c(**(int **)(param_1 + 0x88) + 2,0);
    FUN_100b039c(local_18,uVar1,iVar2 + 0xba);
    if (iVar2 != 0) {
      uVar1 = FUN_100fcdd4(0);
      FUN_100fce84(uVar1,iVar2,local_18[0]);
      FUN_10117884((int)*(int **)(param_1 + 0x84) +
                   (int)*(short *)(**(int **)(param_1 + 0x84) + 0x208),uVar1);
    }
  }
  return;
}



// Function: FUN_100fd3cc at 100fd3cc
// Size: 104 bytes

void FUN_100fd3cc(int param_1)

{
  int iVar1;
  char in_r8;
  int local_2c;
  
  if ((in_r8 != '\0') && (iVar1 = FUN_10000060(*(undefined4 *)(param_1 + 0x88)), iVar1 == 0)) {
    FUN_10002118(*(int *)(local_2c + -0xb0) + 0xb2);
    FUN_10000588(*(undefined4 *)(param_1 + 0x88));
  }
  return;
}



// Function: FUN_100fd434 at 100fd434
// Size: 440 bytes

int FUN_100fd434(int param_1,char param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5
                )

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  FUN_100e0f78(auStack_28,param_5);
  puVar1 = (undefined4 *)FUN_100b0368(auStack_20,auStack_28);
  iVar2 = FUN_100033c0(*puVar1,*(undefined4 *)(*(int *)(param_1 + 0x84) + 0x98));
  *(bool *)(param_1 + 0x8c) = iVar2 == 0;
  if (param_2 == '\0') {
    piVar6 = *(int **)(*(int *)(param_1 + 0x84) + 0xa0);
    if (piVar6 != (int *)0x0) {
      uVar3 = FUN_10117884((int)*(short *)(*piVar6 + 0x7f0) + (int)piVar6,1);
      FUN_100005a0(*(undefined4 *)(piVar6[0x20] + 0x72),*(undefined4 *)(param_1 + 0x88));
      FUN_10117884((int)*(short *)(*piVar6 + 0x7f0) + (int)piVar6,uVar3);
      iVar2 = **(int **)(param_1 + 0x88);
      FUN_10001ec0(*(int **)(param_1 + 0x88),-(int)*(short *)(iVar2 + 4),-(int)*(short *)(iVar2 + 2)
                  );
      uVar4 = FUN_100b08a4(**(int **)(param_1 + 0x88) + 2,0);
      uVar5 = FUN_100b08a4(**(int **)(param_1 + 0x88) + 2,1);
      FUN_10001ec0(*(undefined4 *)(param_1 + 0x88),
                   (int)(short)((short)param_4[1] -
                               ((short)((int)uVar5 >> 1) +
                               (ushort)((int)uVar5 < 0 && (uVar5 & 1) != 0))),
                   (int)(short)((short)*param_4 -
                               ((short)((int)uVar4 >> 1) +
                               (ushort)((int)uVar4 < 0 && (uVar4 & 1) != 0))));
    }
  }
  else {
    FUN_10001ec0(*(undefined4 *)(param_1 + 0x88),(int)(short)((short)param_5[1] - (short)param_4[1])
                 ,(int)(short)((short)*param_5 - (short)*param_4));
  }
  return param_1;
}



// Function: FUN_100fd5ec at 100fd5ec
// Size: 84 bytes

undefined4 FUN_100fd5ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10000240();
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x8c) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100fd648 at 100fd648
// Size: 120 bytes

undefined4 * FUN_100fd648(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xa4), param_1 != (undefined4 *)0x0)) {
    FUN_100f3c98(param_1);
    *param_1 = &DAT_81890014;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
  }
  return param_1;
}



// Function: FUN_100fd6c0 at 100fd6c0
// Size: 40 bytes

void FUN_100fd6c0(void)

{
  FUN_100fd648(0);
  return;
}



// Function: FUN_100fd6e8 at 100fd6e8
// Size: 84 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd6e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100fd110(0);
  FUN_100fd1cc(uVar1,_DAT_63e30000,param_1);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  return;
}



// Function: FUN_100fd73c at 100fd73c
// Size: 84 bytes

void FUN_100fd73c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100f57c8(*(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_100ef5b8(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  FUN_10106060(param_1);
  return;
}



// Function: FUN_100fd790 at 100fd790
// Size: 692 bytes

void FUN_100fd790(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,short *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short sStack00000028;
  short sStack0000002a;
  int local_84;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 auStack_50 [8];
  undefined2 local_48;
  undefined4 local_46;
  undefined4 local_42;
  undefined1 auStack_3e [4];
  ushort local_3a;
  undefined1 auStack_38 [12];
  
  uVar1 = DAT_281f0000;
  DAT_281f0000 = 1;
  _sStack00000028 = param_5;
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if (iVar2 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x750),(int)*param_6,0);
  }
  else {
    FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_50);
    FUN_100b0590(auStack_50,(int)param_1 + 0x8e);
    iVar2 = FUN_100b0914(auStack_50,&stack0x00000028);
    if (iVar2 == 0) {
      FUN_100b0384(&stack0x00000028);
      FUN_10002fd0();
      uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),param_4);
      puVar4 = (undefined4 *)FUN_100b0368(auStack_38,&stack0x00000028);
      iVar2 = FUN_100033c0(*puVar4,uVar3);
      if (iVar2 != 0) {
        local_58 = (int)sStack00000028;
        local_54 = (int)sStack0000002a;
        iVar2 = param_1[0x27];
        *(int *)(iVar2 + 0x34) = local_58;
        *(int *)(iVar2 + 0x38) = local_54;
        FUN_10117884((int)*(short *)(*param_1 + 0x208) + (int)param_1,param_1[0x27]);
      }
    }
    else {
      local_48 = 1;
      local_46 = 0;
      local_42 = FUN_10001a88();
      FUN_100b0368(auStack_3e,&stack0x00000028);
      local_3a = 0;
      iVar2 = FUN_10003948();
      if (iVar2 != 0) {
        local_3a = local_3a | 0x80;
      }
      iVar2 = FUN_100efb60();
      if (iVar2 != 0) {
        local_3a = local_3a | 0x100;
      }
      iVar2 = FUN_100efba8();
      if (iVar2 != 0) {
        local_3a = local_3a | 0x800;
      }
      uVar3 = FUN_100f5754(0);
      iVar2 = FUN_100d91e8(0);
      FUN_100f5754(uVar3);
      FUN_100d9278(iVar2,0,&local_48);
      *(undefined2 *)(iVar2 + 0x28) = *(undefined2 *)(**(int **)(local_84 + -0xedc) + 0x3e);
      *(undefined1 *)(iVar2 + 0x10) = 0;
      local_60 = (int)sStack00000028;
      local_5c = (int)sStack0000002a;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x540),&local_60,iVar2,
                   **(undefined4 **)(local_84 + -0xe34));
      FUN_100f57c8(iVar2);
    }
  }
  DAT_281f0000 = uVar1;
  *param_6 = 0;
  return;
}



// Function: FUN_100fda44 at 100fda44
// Size: 368 bytes

undefined4 FUN_100fda44(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 local_140;
  undefined2 local_13e;
  undefined1 auStack_138 [276];
  undefined4 local_24;
  undefined2 local_20 [6];
  
  iVar1 = FUN_10000060(*(undefined4 *)(param_1 + 0x98));
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x98);
  }
  else {
    puVar2 = local_20;
    if ((local_20 != (undefined2 *)0x0) ||
       (puVar2 = (undefined2 *)FUN_100f56e4(8), puVar2 != (undefined2 *)0x0)) {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
    }
    FUN_100b057c(local_20,0);
    FUN_100b0384();
    FUN_10002fd0();
    FUN_100b057c(local_20,1);
    FUN_100b0384();
    FUN_10002fd0();
    local_140 = 0xfff6;
    local_13e = 0xfff6;
    FUN_100b06d4(local_20,&local_140);
    FUN_100ee64c(auStack_138);
    uVar4 = local_24;
    uVar3 = FUN_100b0578(local_20);
    FUN_10003150(uVar4,uVar3);
    uVar4 = FUN_100016b0();
    FUN_10000108(uVar4,local_24,*(undefined4 *)(param_1 + 0x98));
    FUN_100005b8(*(undefined4 *)(param_1 + 0x98),4,4);
    FUN_100ee77c(auStack_138,2);
    uVar4 = *(undefined4 *)(param_1 + 0x98);
  }
  return uVar4;
}



// Function: FUN_100fdbb4 at 100fdbb4
// Size: 168 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdbb4(void)

{
  FUN_100c1c8c(&DAT_8149000c,_DAT_558c002e,0x38,0x7d4a6378,&DAT_41820070);
  FUN_100c1c8c(0x9149000c,_DAT_91490014,0x84,0x80a2fb34,&DAT_2c090000);
  FUN_100c1c8c(0x556b002e,_DAT_7c9f2840,0x94,0x40860034,0x9149000c);
  FUN_100c1c8c(&DAT_91690010,_DAT_80ff0004,0xa4,0x80c7000c,0x4bffe985);
  return;
}



// Function: FUN_100fdc64 at 100fdc64
// Size: 164 bytes

undefined4 * FUN_100fdc64(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x5c), param_1 != (undefined4 *)0x0)) {
    FUN_100c3d2c(param_1);
    *param_1 = 0x90c7000c;
    param_1[0xd] = 0;
    *(undefined2 *)((int)param_1 + 0x46) = 0;
    *(undefined2 *)(param_1 + 0x11) = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0xc] = 0;
    *(undefined2 *)(param_1 + 0x15) = 0;
  }
  return param_1;
}



// Function: FUN_100fdd08 at 100fdd08
// Size: 40 bytes

void FUN_100fdd08(void)

{
  FUN_100fdc64(0);
  return;
}



// Function: FUN_100fdd30 at 100fdd30
// Size: 536 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdd30(int *param_1,int *param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_138 [256];
  short local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar4 = 0;
  if (param_2 != (int *)0x0) {
    uVar4 = FUN_10117884((int)*(short *)(*param_2 + 0x218) + (int)param_2,param_3);
  }
  FUN_100c3df8(param_1,param_3,uVar4,1,1,uVar4);
  param_1[0xc] = (int)param_2;
  piVar2 = (int *)param_2[0x20];
  param_1[0xd] = (int)piVar2;
  iVar3 = *piVar2;
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(iVar3 + 0x20);
  *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(iVar3 + 0x22);
  iVar5 = (int)(short)(*(short *)(iVar3 + 0x22) - *(short *)(iVar3 + 0x20));
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_30 = _DAT_41820010;
  _DAT_41820010 = auStack_138;
  iVar3 = FUN_10000090(auStack_138);
  if (iVar3 == 0) {
    if (param_4 != '\0') {
      puVar1 = (undefined4 *)FUN_100f15e0(iVar5);
      if (0 < iVar5) {
        FUN_10002340(**(int **)(*(int *)param_1[0xd] + 0x3e) + (int)*(short *)(param_1 + 0xe),
                     *puVar1,iVar5);
      }
      param_1[0xf] = (int)puVar1;
      *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0xe) - *(short *)((int)param_1 + 0x3a);
      iVar3 = FUN_100f15e0(0);
      param_1[0x14] = iVar3;
    }
    if (*(char *)((int)param_2 + 0xc3) == '\x01') {
      iVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x818),
                           (int)*(short *)(*(int *)param_1[0xd] + 0x20),
                           (int)*(short *)(*(int *)param_1[0xd] + 0x22));
      if (iVar3 != 0) {
        uVar4 = FUN_100f1574(1);
        iVar3 = FUN_10000618(param_1[0xd]);
        param_1[0x10] = iVar3;
        FUN_100f1574(uVar4);
        FUN_100db26c(param_1[0x10]);
        iVar3 = FUN_10001c20(param_1[0x10]);
        param_1[0x16] = iVar3;
      }
    }
    _DAT_41820010 = local_30;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_38,local_34);
  }
  return;
}



// Function: FUN_100fdf48 at 100fdf48
// Size: 132 bytes

void FUN_100fdf48(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_100c3e70(param_1);
  return;
}



// Function: FUN_100fdfcc at 100fdfcc
// Size: 136 bytes

void FUN_100fdfcc(int param_1)

{
  int *piVar1;
  int local_18;
  int local_14 [2];
  
  piVar1 = &local_18;
  if (*(short *)(param_1 + 0x38) < *(short *)(param_1 + 0x3a)) {
    FUN_100015f0(*(undefined4 *)(param_1 + 0x34));
  }
  local_14[0] = -((int)*(short *)(param_1 + 0x54) + *(int *)(param_1 + 0x58));
  local_18 = 0;
  if (0 < local_14[0]) {
    piVar1 = local_14;
  }
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),*piVar1);
  return;
}



// Function: FUN_100fe054 at 100fe054
// Size: 256 bytes

void FUN_100fe054(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(short *)(param_1 + 0x44) < *(short *)(param_1 + 0x46)) {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x84);
    iVar1 = FUN_10001c20(uVar6);
    uVar2 = FUN_100ef9b8(*(undefined4 *)(param_1 + 0x48));
    if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
      puVar3 = *(undefined4 **)(param_1 + 0x48);
      uVar4 = FUN_10001c20();
      FUN_10001608(*puVar3,uVar4,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x34));
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0x48);
      uVar4 = FUN_10001c20();
      FUN_10001620(*puVar3,uVar4,*(undefined4 *)(param_1 + 0x34));
    }
    FUN_10001b60(*(undefined4 *)(param_1 + 0x48),uVar2);
    iVar5 = FUN_10001c20(uVar6);
    if (iVar5 <= iVar1) {
      FUN_100db2f4(0xffffff94);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
  }
  return;
}



// Function: FUN_100fe154 at 100fe154
// Size: 148 bytes

void FUN_100fe154(int param_1)

{
  int *piVar1;
  int local_18;
  int local_14 [2];
  
  piVar1 = &local_18;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_10000840((int)*(short *)(param_1 + 0x44),(int)*(short *)(param_1 + 0x46),
                 *(undefined4 *)(param_1 + 0x34));
    FUN_100015f0(*(undefined4 *)(param_1 + 0x34));
  }
  local_14[0] = (int)*(short *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
  local_18 = 0;
  if (0 < local_14[0]) {
    piVar1 = local_14;
  }
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),*piVar1);
  return;
}



// Function: FUN_100fe1e8 at 100fe1e8
// Size: 64 bytes

void FUN_100fe1e8(int param_1)

{
  FUN_10000840((int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x3a),
               *(undefined4 *)(param_1 + 0x34));
  return;
}



// Function: FUN_100fe228 at 100fe228
// Size: 260 bytes

void FUN_100fe228(int param_1)

{
  short sVar3;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  int iVar5;
  
  FUN_10000840((int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x34));
  sVar3 = FUN_10001c20(*(undefined4 *)(param_1 + 0x3c));
  iVar5 = (int)sVar3;
  if (0 < iVar5) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x84);
    iVar1 = FUN_10001c20(uVar4);
    uVar2 = FUN_100ef9b8(*(undefined4 *)(param_1 + 0x3c));
    if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
      FUN_10001608(**(undefined4 **)(param_1 + 0x3c),iVar5,*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x34));
    }
    else {
      FUN_10001620(**(undefined4 **)(param_1 + 0x3c),iVar5,*(undefined4 *)(param_1 + 0x34));
    }
    FUN_10001b60(*(undefined4 *)(param_1 + 0x3c),uVar2);
    iVar5 = FUN_10001c20(uVar4);
    if (iVar5 <= iVar1) {
      FUN_100db2f4(0xffffff94);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
  }
  return;
}



// Function: FUN_100fe32c at 100fe32c
// Size: 148 bytes

void FUN_100fe32c(int *param_1)

{
  if (param_1[1] != 0x68) {
    FUN_10117884((int)*(short *)(*param_1 + 0x160) + (int)param_1);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168));
  if (param_1[1] != 0x68) {
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  }
  return;
}



// Function: FUN_100fe3c0 at 100fe3c0
// Size: 112 bytes

void FUN_100fe3c0(int *param_1)

{
  int iVar1;
  
  FUN_100c40c4(param_1);
  if ((param_1[0xc] != 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x140) + (int)param_1), iVar1 != 0)) {
    FUN_100f4f94(param_1[0xc],param_1);
  }
  return;
}



// Function: FUN_100fe430 at 100fe430
// Size: 88 bytes

void FUN_100fe430(int param_1,int param_2,int param_3)

{
  if ((param_2 == 0x1c) && (param_3 == *(int *)(param_1 + 0x30))) {
    FUN_10117884((int)*(int **)(param_1 + 0x18) +
                 (int)*(short *)(**(int **)(param_1 + 0x18) + 0x228));
  }
  else {
    FUN_100c4148();
  }
  return;
}



// Function: FUN_100fe488 at 100fe488
// Size: 92 bytes

void FUN_100fe488(int *param_1)

{
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  return;
}



// Function: FUN_100fe4e4 at 100fe4e4
// Size: 220 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe4e4(int *param_1)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),param_1[0xc]);
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x178));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x180));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  if (param_1[1] != 0x68) {
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  }
  return;
}



// Function: FUN_100fe5c0 at 100fe5c0
// Size: 152 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe5c0(int *param_1)

{
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),param_1[0xc]);
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  return;
}



// Function: FUN_100fe660 at 100fe660
// Size: 104 bytes

undefined4 * FUN_100fe660(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x60), param_1 != (undefined4 *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = 0x5508002e;
  }
  return param_1;
}



// Function: FUN_100fe6c8 at 100fe6c8
// Size: 40 bytes

void FUN_100fe6c8(void)

{
  FUN_100fe660(0);
  return;
}



// Function: FUN_100fe6f0 at 100fe6f0
// Size: 100 bytes

void FUN_100fe6f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x5c) = 0;
  FUN_100fdd30(param_1,param_2,param_3,1);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  iVar1 = -param_3 + 0x68;
  *(char *)(param_1 + 0x1e) = (char)iVar1 + (-(iVar1 == 0) - ((char)-param_3 + 'g'));
  return;
}



// Function: FUN_100fe754 at 100fe754
// Size: 56 bytes

void FUN_100fe754(int param_1)

{
  if (*(char *)(param_1 + 0x5c) != '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_100fdf48();
  return;
}



// Function: FUN_100fe78c at 100fe78c
// Size: 588 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe78c(int *param_1)

{
  int iVar1;
  int local_1b4;
  undefined1 auStack_180 [16];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int *local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  FUN_100f083c(auStack_180,1,0,0xc,*(undefined4 *)(local_1b4 + -0x1830));
  local_158 = 0x32;
  local_154 = 100;
  local_160 = 0x32;
  uStack_15c = 100;
  local_150 = 8;
  local_14c = 10;
  local_148 = 0;
  local_144 = 10;
  local_170 = 8;
  uStack_16c = 10;
  uStack_168 = 0;
  uStack_164 = 10;
  local_140 = (int *)FUN_100fff20(0);
  FUN_101001e0(local_140,0,0,*(undefined4 *)(local_1b4 + -0xce0),&local_160,0,4,&local_170);
  *(undefined1 *)((int)local_140 + 0xc2) = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = _DAT_41820010;
  _DAT_41820010 = auStack_13c;
  iVar1 = FUN_10000090(auStack_13c);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x148) + (int)param_1);
    if (iVar1 == 0) {
      FUN_100f12a8();
    }
    _DAT_41820010 = local_34;
  }
  else {
    local_140 = (int *)FUN_100f57c8(local_140);
    FUN_100db158((int)local_3c,local_38);
  }
  FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x828),param_1[0xf]);
  FUN_100f12a8();
  if (*(char *)((int)local_140 + 0xc3) == '\x01') {
    FUN_100015d8(0,0x7fff,param_1[0x10],0,local_140[0x20]);
  }
  FUN_100f12a8();
  *(undefined1 *)((int)local_140 + 0xc5) = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x130),local_140);
  *(undefined1 *)(param_1 + 0x17) = 1;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x170));
  return;
}



// Function: FUN_100fe9d8 at 100fe9d8
// Size: 52 bytes

void FUN_100fe9d8(int param_1)

{
  if (*(int *)(param_1 + 4) == 0x67) {
    FUN_100fe228();
  }
  return;
}



// Function: FUN_100fea14 at 100fea14
// Size: 104 bytes

undefined4 * FUN_100fea14(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x5c), param_1 != (undefined4 *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = 0x91070010;
  }
  return param_1;
}



// Function: FUN_100fea7c at 100fea7c
// Size: 40 bytes

void FUN_100fea7c(void)

{
  FUN_100fea14(0);
  return;
}



// Function: FUN_100feaa4 at 100feaa4
// Size: 644 bytes

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100feaa4(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int local_158;
  int local_154 [4];
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  piVar4 = &local_158;
  local_154[1] = 0x25252525;
  FUN_100fdd30(param_1,param_2,0x69,1);
  local_154[3] = 0;
  local_154[2] = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = _DAT_41820010;
  _DAT_41820010 = auStack_144;
  iVar2 = FUN_10000090(auStack_144);
  if (iVar2 == 0) {
    local_154[2] = FUN_100f15e0(0);
    if (*(char *)(param_2 + 0xc3) == '\x01') {
      local_154[3] = FUN_100f15e0(0);
    }
    sVar3 = FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1a8),local_154[2],
                         local_154 + 1);
    if (sVar3 < 1) {
      local_154[2] = FUN_100ef510(local_154[2]);
      FUN_100ef510(local_154[3]);
    }
    else {
      param_1[0x12] = local_154[2];
      sVar1 = *(short *)(*(int *)param_1[0xd] + 0x20);
      *(short *)(param_1 + 0x11) = sVar1;
      *(short *)((int)param_1 + 0x46) = sVar1 + sVar3;
      *(short *)(param_1 + 0x15) =
           sVar3 - (*(short *)((int)param_1 + 0x3a) - *(short *)(param_1 + 0xe));
      if (*(char *)(param_2 + 0xc3) == '\x01') {
        iVar2 = FUN_10117884(_DAT_a89f0000[0x13] +
                             (int)*(short *)(*(int *)_DAT_a89f0000[0x13] + 0x6c0),local_154[3],
                             0x7374796c);
        if (iVar2 < 1) {
          local_154[3] = FUN_100ef510(local_154[3]);
        }
        else {
          param_1[0x13] = local_154[3];
          param_1[0x16] = iVar2 - param_1[0x16];
        }
      }
      local_154[0] = (int)*(short *)(param_1 + 0x15) + param_1[0x16];
      local_158 = 0;
      if (0 < (int)*(short *)(param_1 + 0x15) + param_1[0x16]) {
        piVar4 = local_154;
      }
      FUN_100f16f8(param_1[0x14],*piVar4);
      FUN_100f12a8();
    }
    _DAT_41820010 = local_3c;
  }
  else {
    if (local_154[2] != param_1[0x12]) {
      local_154[2] = FUN_100ef510(local_154[2]);
    }
    if (local_154[3] != param_1[0x13]) {
      local_154[3] = FUN_100ef510(local_154[3]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_44,local_40);
  }
  return;
}



// Function: FUN_100fed30 at 100fed30
// Size: 104 bytes

undefined4 * FUN_100fed30(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x78), param_1 != (undefined4 *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = 0x5463002e;
  }
  return param_1;
}



// Function: FUN_100fed98 at 100fed98
// Size: 40 bytes

void FUN_100fed98(void)

{
  FUN_100fed30(0);
  return;
}



// Function: FUN_100fedc0 at 100fedc0
// Size: 116 bytes

void FUN_100fedc0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_100fdd30(param_1,param_2,param_4,0);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x62) = uVar1;
  *(undefined4 *)(param_1 + 0x66) = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(undefined4 *)(param_1 + 0x6a) = *param_3;
  *(undefined4 *)(param_1 + 0x6e) = uVar1;
  *(undefined4 *)(param_1 + 0x72) = uVar2;
  *(undefined2 *)(param_1 + 0x5c) = param_5;
  return;
}



// Function: FUN_100fee4c at 100fee4c
// Size: 80 bytes

void FUN_100fee4c(int param_1,undefined4 param_2)

{
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x808),
               (int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x3a),
               (int)*(short *)(param_1 + 0x5c),param_2,1);
  return;
}



// Function: FUN_100fee9c at 100fee9c
// Size: 172 bytes

void FUN_100fee9c(int param_1,undefined4 param_2)

{
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x3a8))
  ;
  FUN_100015d8((int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x3a),param_2,1,
               *(undefined4 *)(param_1 + 0x34));
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x7f8))
  ;
  FUN_10117884((int)*(int **)(param_1 + 0x30) + (int)*(short *)(**(int **)(param_1 + 0x30) + 0x770),
               1);
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
  return;
}



// Function: FUN_100fef48 at 100fef48
// Size: 96 bytes

void FUN_100fef48(int *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = *(undefined4 *)((int)param_1 + 0x6a);
  uStack_14 = *(undefined4 *)((int)param_1 + 0x6e);
  uStack_10 = *(undefined4 *)((int)param_1 + 0x72);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),&local_18);
  *(ushort *)(param_1 + 0x17) = *(ushort *)(param_1 + 0x17) & 0xffdf;
  return;
}



// Function: FUN_100fefa8 at 100fefa8
// Size: 160 bytes

void FUN_100fefa8(int *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  if (*(char *)(param_1[0xc] + 0xc3) == '\0') {
    local_18 = *(undefined4 *)((int)param_1 + 0x5e);
    uStack_14 = *(undefined4 *)((int)param_1 + 0x62);
    uStack_10 = *(undefined4 *)((int)param_1 + 0x66);
    FUN_10117884((int)*(short *)(*param_1 + 0x188) + (int)param_1,&local_18);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),param_1[0x10]);
  }
  return;
}



// Function: FUN_100ff048 at 100ff048
// Size: 88 bytes

void FUN_100ff048(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x158));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x100));
  return;
}



// Function: FUN_100ff0a0 at 100ff0a0
// Size: 8 bytes

undefined4 FUN_100ff0a0(void)

{
  return 0x7cc61b78;
}



// Function: FUN_100ff0b0 at 100ff0b0
// Size: 104 bytes

undefined4 * FUN_100ff0b0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x60), param_1 != (undefined4 *)0x0)) {
    FUN_100fdc64(param_1);
    *param_1 = 0x90c70014;
  }
  return param_1;
}



// Function: FUN_100ff118 at 100ff118
// Size: 40 bytes

void FUN_100ff118(void)

{
  FUN_100ff0b0(0);
  return;
}



// Function: FUN_100ff140 at 100ff140
// Size: 236 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff140(int *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_128 [256];
  short local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_100fdd30(param_1,param_2,0x78,1);
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = _DAT_41820010;
  _DAT_41820010 = auStack_128;
  iVar2 = FUN_10000090(auStack_128);
  if (iVar2 == 0) {
    uVar1 = *(undefined2 *)(*(int *)param_1[0xd] + 0x20);
    *(undefined2 *)(param_1 + 0x11) = uVar1;
    *(undefined2 *)((int)param_1 + 0x46) = uVar1;
    param_1[0x12] = 0;
    iVar2 = FUN_100f15e0(0);
    param_1[0x12] = iVar2;
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(undefined2 *)((int)param_1 + 0x5e) = param_3;
    _DAT_41820010 = local_20;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_28,local_24);
  }
  return;
}



// Function: FUN_100ff22c at 100ff22c
// Size: 60 bytes

void FUN_100ff22c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x30) + 0xac) == param_1) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xac) = 0;
  }
  FUN_100fdf48();
  return;
}



// Function: FUN_100ff268 at 100ff268
// Size: 200 bytes

void FUN_100ff268(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  short sVar2;
  int *piVar3;
  undefined2 uStack0000001e;
  int local_18;
  int local_14;
  
  piVar3 = &local_18;
  uStack0000001e = param_2;
  uVar1 = FUN_100f1574(1);
  FUN_10001650((undefined1 *)((int)register0x00000004 + 0x1f),*(undefined4 *)(param_1 + 0x48),1);
  FUN_100db2f4();
  FUN_100f1574(uVar1);
  *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
  sVar2 = *(short *)(param_1 + 0x54) + 1;
  *(short *)(param_1 + 0x54) = sVar2;
  local_14 = -(*(int *)(param_1 + 0x58) + (int)sVar2);
  local_18 = 0;
  if (0 < local_14) {
    piVar3 = &local_14;
  }
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),*piVar3);
  return;
}



// Function: FUN_100ff330 at 100ff330
// Size: 544 bytes

void FUN_100ff330(int param_1,int *param_2,short param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 auStack_3c [16];
  undefined1 local_2c [12];
  
  iVar2 = FUN_10001350(*param_2,(int)(short)(param_3 + -1));
  iVar3 = 1;
  while (sVar1 = (short)iVar3, 0 < iVar2) {
    iVar3 = (int)(short)(sVar1 + 1);
    iVar2 = FUN_10001350(*param_2,(int)(short)(param_3 - (sVar1 + 1)));
  }
  param_3 = param_3 - sVar1;
  iVar2 = (int)param_3;
  if (iVar3 == 1) {
    local_2c[0] = *(undefined1 *)(*param_2 + iVar2);
  }
  else {
    FUN_10002340(*param_2 + iVar2,local_2c,iVar3);
  }
  if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
    FUN_10000798(iVar2,auStack_3c,&local_3e,&local_40,*(undefined4 *)(param_1 + 0x34));
    iVar2 = FUN_100f08f4(auStack_3c,**(int **)(param_1 + 0x40) + 10,0xc);
    if (iVar2 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
      iVar2 = FUN_10001c20(*(undefined4 *)(param_1 + 0x40));
      FUN_100f16f8(*(undefined4 *)(param_1 + 0x40),iVar2 + 0x14);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x14;
      FUN_10002340(**(int **)(param_1 + 0x40) + 2,**(int **)(param_1 + 0x40) + 0x16,iVar2 + -2);
      *(short *)**(undefined4 **)(param_1 + 0x40) = *(short *)**(undefined4 **)(param_1 + 0x40) + 1;
      iVar2 = **(int **)(param_1 + 0x40);
      *(undefined2 *)(iVar2 + 6) = local_3e;
      *(undefined2 *)(iVar2 + 8) = local_40;
      FUN_10002340(auStack_3c,iVar2 + 10,0xc);
    }
    *(int *)(**(int **)(param_1 + 0x40) + 2) = *(int *)(**(int **)(param_1 + 0x40) + 2) + -1;
  }
  iVar2 = FUN_10001c20(*(undefined4 *)(param_1 + 0x3c));
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),iVar2 + iVar3 + *(int *)(param_1 + 0x58));
  FUN_100020b8(*(undefined4 *)(param_1 + 0x3c),0,0,0,local_2c,iVar3);
  FUN_100db1ec();
  *(short *)(param_1 + 0x38) = param_3;
  *(short *)(param_1 + 0x44) = param_3;
  *(short *)(param_1 + 0x46) = param_3;
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar1;
  return;
}



// Function: FUN_100ff550 at 100ff550
// Size: 240 bytes

void FUN_100ff550(int param_1,undefined4 *param_2,short param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  piVar4 = &local_20;
  iVar2 = FUN_10001350(*param_2,(int)(short)(param_3 + -1));
  iVar5 = 1;
  while (sVar1 = (short)iVar5, 0 < iVar2) {
    iVar5 = (int)(short)(sVar1 + 1);
    iVar2 = FUN_10001350(*param_2,(int)(short)(param_3 - (sVar1 + 1)));
  }
  local_1c = -((*(short *)(param_1 + 0x54) - iVar5) + *(int *)(param_1 + 0x58));
  local_20 = 0;
  if (0 < local_1c) {
    piVar4 = &local_1c;
  }
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),*piVar4);
  sVar3 = *(short *)(param_1 + 0x46) - sVar1;
  *(short *)(param_1 + 0x46) = sVar3;
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar1;
  FUN_100f16f8(*(undefined4 *)(param_1 + 0x48),(int)sVar3 - (int)*(short *)(param_1 + 0x44));
  return;
}



// Function: FUN_100ff640 at 100ff640
// Size: 732 bytes

void FUN_100ff640(int param_1,int *param_2,short param_3,short param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int local_50;
  int local_4c;
  short local_48;
  short local_46;
  undefined1 auStack_44 [16];
  undefined1 local_34 [8];
  
  iVar7 = (int)param_3;
  piVar5 = &local_50;
  iVar2 = FUN_10001c20(param_2);
  if ((iVar7 == param_4) && (iVar7 < iVar2)) {
    iVar8 = 0;
    sVar4 = 0;
    if (iVar7 <= iVar2) {
      iVar3 = FUN_10001350(*param_2,iVar7);
      while (0 < iVar3) {
        sVar4 = (short)iVar8 + 1;
        iVar8 = (int)sVar4;
        if (iVar2 < iVar7 + iVar8) break;
        iVar3 = FUN_10001350(*param_2,(int)(short)(iVar7 + iVar8));
      }
    }
    sVar4 = sVar4 + 1;
    iVar2 = (int)sVar4;
    if (iVar2 == 1) {
      local_34[0] = *(undefined1 *)(*param_2 + iVar7);
    }
    else {
      FUN_10002340(*param_2 + iVar7,local_34,iVar2);
    }
    if ((iVar7 < *(short *)(param_1 + 0x44)) || (*(short *)(param_1 + 0x46) <= iVar7)) {
      iVar8 = FUN_10001c20(*(undefined4 *)(param_1 + 0x3c));
      if (*(char *)(*(int *)(param_1 + 0x30) + 0xc3) == '\x01') {
        FUN_10000798(iVar7,auStack_44,&local_46,&local_48,*(undefined4 *)(param_1 + 0x34));
        iVar7 = FUN_100f08f4(auStack_44,
                             (short *)**(undefined4 **)(param_1 + 0x40) +
                             *(short *)**(undefined4 **)(param_1 + 0x40) * 10 + -5,0xc);
        if (iVar7 == 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xc6) = 1;
          iVar7 = FUN_10001c20(*(undefined4 *)(param_1 + 0x40));
          FUN_100f16f8(*(undefined4 *)(param_1 + 0x40),iVar7 + 0x14);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x14;
          *(short *)**(undefined4 **)(param_1 + 0x40) =
               *(short *)**(undefined4 **)(param_1 + 0x40) + 1;
          psVar6 = (short *)**(undefined4 **)(param_1 + 0x40);
          sVar1 = *psVar6;
          *(int *)(psVar6 + sVar1 * 10 + -9) = iVar8;
          psVar6[sVar1 * 10 + -7] = local_46;
          psVar6[sVar1 * 10 + -6] = local_48;
          FUN_10002340(auStack_44,psVar6 + sVar1 * 10 + -5,0xc);
        }
      }
      FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),iVar8 + iVar2 + *(int *)(param_1 + 0x58));
      FUN_100020b8(*(undefined4 *)(param_1 + 0x3c),iVar8,0,0,local_34,iVar2);
      FUN_100db1ec();
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar4;
    }
    else {
      local_4c = -((*(short *)(param_1 + 0x54) - iVar2) + *(int *)(param_1 + 0x58));
      local_50 = 0;
      if (0 < local_4c) {
        piVar5 = &local_4c;
      }
      FUN_100f16f8(*(undefined4 *)(param_1 + 0x50),*piVar5);
      *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) - sVar4;
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) - sVar4;
      FUN_100020b8(*(undefined4 *)(param_1 + 0x48),iVar7 - *(short *)(param_1 + 0x44),0,iVar2,
                   local_34,0);
      FUN_100db1ec();
    }
  }
  return;
}



// Function: FUN_100ff91c at 100ff91c
// Size: 644 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff91c(int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_148 [8];
  undefined1 local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = (int)param_2;
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x4c8));
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
  iVar1 = *(int *)param_1[0xd];
  iVar5 = (int)*(short *)(iVar1 + 0x20);
  iVar2 = (int)*(short *)(iVar1 + 0x22);
  uVar3 = *(undefined4 *)(iVar1 + 0x3e);
  FUN_100ee844(auStack_148,*(undefined1 *)(param_1[0xc] + 0xbe));
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = _DAT_41820010;
  _DAT_41820010 = auStack_13c;
  iVar1 = FUN_10000090(auStack_13c);
  if (iVar1 == 0) {
    local_140 = FUN_100f1574(1);
    if (iVar4 == 0x7f) {
      FUN_10117884((int)*(short *)(*param_1 + 0x1a0) + (int)param_1,uVar3,iVar5,iVar2);
    }
    else if (iVar4 == 8) {
      if (((*(short *)(param_1 + 0xe) < iVar5) || (iVar5 < 1)) || (iVar5 != iVar2)) {
        if (*(short *)(param_1 + 0x11) < *(short *)((int)param_1 + 0x46)) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x198),uVar3,iVar5);
        }
      }
      else {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 400),uVar3,iVar5);
      }
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x188),iVar4);
    }
    local_140 = FUN_100f1574(local_140);
    _DAT_41820010 = local_34;
  }
  else {
    local_140 = FUN_100f1574(local_140);
    FUN_100db158((int)local_3c,local_38);
  }
  if (iVar4 == 0x7f) {
    if (iVar5 == iVar2) {
      iVar1 = FUN_10001c20(uVar3);
      if (iVar5 < iVar1) {
        FUN_100029e8(0x1d,param_1[0xd]);
        FUN_100029e8(8,param_1[0xd]);
      }
    }
    else {
      FUN_100015f0(param_1[0xd]);
    }
  }
  else {
    FUN_100029e8(iVar4,param_1[0xd]);
  }
  FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  FUN_100ee8e8(auStack_148,2);
  return;
}



// Function: FUN_100ffba0 at 100ffba0
// Size: 60 bytes

void FUN_100ffba0(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1a8),(int)*(short *)((int)param_1 + 0x5e)
              );
  return;
}



// Function: FUN_100ffbdc at 100ffbdc
// Size: 436 bytes

void FUN_100ffbdc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [16];
  int local_20;
  int local_1c;
  undefined1 auStack_18 [2];
  undefined1 auStack_16 [6];
  
  piVar3 = &local_20;
  iVar2 = FUN_10001c20(param_1[0xf]);
  if ((int)*(short *)((int)param_1 + 0x3a) - (int)*(short *)(param_1 + 0xe) == iVar2) {
    bVar1 = false;
    if ((*(char *)(param_1[0xc] + 0xc3) == '\x01') &&
       ((int)*(short *)((int)param_1 + 0x3a) == (int)*(short *)(param_1 + 0xe))) {
      FUN_10000798((int)*(short *)(param_1 + 0xe),auStack_30,auStack_18,auStack_16,param_1[0xd]);
      iVar2 = FUN_100f08f4(auStack_30,*(int *)param_1[0x10] + 10,0xc);
      bVar1 = iVar2 == 0;
    }
    if (bVar1) {
      param_1[0x13] = param_1[0x10];
    }
    FUN_100fe5c0(param_1);
    if (bVar1) {
      param_1[0x13] = 0;
    }
  }
  else {
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x3a8));
    iVar2 = FUN_10001c20(param_1[0xf]);
    FUN_10000840((int)*(short *)(param_1 + 0xe),*(short *)(param_1 + 0xe) + iVar2,param_1[0xd]);
    FUN_100015f0(param_1[0xd]);
    local_1c = -((int)*(short *)(param_1 + 0x15) + param_1[0x16]);
    local_20 = 0;
    if (0 < -((int)*(short *)(param_1 + 0x15) + param_1[0x16])) {
      piVar3 = &local_1c;
    }
    FUN_100f16f8(param_1[0x14],*piVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x168));
    FUN_10117884(param_1[0xc] + (int)*(short *)(*(int *)param_1[0xc] + 0x770),1);
  }
  return;
}



// Function: FUN_100ffd90 at 100ffd90
// Size: 76 bytes

void FUN_100ffd90(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b0));
  FUN_100fe4e4(param_1);
  return;
}



// Function: FUN_100ffe50 at 100ffe50
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffe50(void)

{
  FUN_100c1c8c(0x54c60630,_DAT_8082fb30,0x5c,0x7f1f2040,&DAT_41820070);
  FUN_100c1c8c(0x81070010,_DAT_409a0034,0x60,0x817f0004,0x54c60630);
  FUN_100c1c8c(0x7cc84378,_DAT_818b000c,0x5c,0x558c0630,0x54c60630);
  FUN_100c1c8c(0x80670014,_DAT_918b000c,0x78,0x814b0010,0x54c60630);
  FUN_100c1c8c(0x7cc61b78,_DAT_554a002e,0x60,0x7d8a5378,0x54c60630);
  return;
}



// Function: FUN_100fff18 at 100fff18
// Size: 8 bytes

undefined1 * FUN_100fff18(void)

{
  return &DAT_80410014;
}



// Function: FUN_100fff20 at 100fff20
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100fff20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0xd8), param_1 != (undefined4 *)0x0)) {
    FUN_1010598c(param_1);
    *param_1 = 0x812b0014;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    uVar3 = _DAT_809f0010;
    uVar2 = _DAT_809f000c;
    uVar1 = _DAT_809f0008;
    param_1[0x23] = _DAT_809f0004;
    param_1[0x24] = uVar1;
    param_1[0x25] = uVar2;
    param_1[0x26] = uVar3;
    param_1[0x27] = 0x78;
    *(undefined2 *)(param_1 + 0x28) = 0x7fff;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    uVar2 = _DAT_8062da50;
    uVar1 = _DAT_8062da4c;
    param_1[0x2c] = _DAT_8062da48;
    param_1[0x2d] = uVar1;
    param_1[0x2e] = uVar2;
    *(undefined2 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((int)param_1 + 0xc2) = 1;
    param_1[0x33] = 0xf0002100;
    *(undefined2 *)(param_1 + 0x34) = 0x60;
    *(undefined1 *)((int)param_1 + 0xc3) = 1;
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(undefined1 *)((int)param_1 + 0xc5) = 1;
    *(undefined1 *)((int)param_1 + 0xc6) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0;
    *(undefined2 *)((int)param_1 + 0xca) = 0;
    *(undefined2 *)((int)param_1 + 0xd2) = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
    *(undefined2 *)(param_1 + 0x13) = 1;
    *(undefined2 *)(param_1 + 0x2f) = 0xffff;
    *(undefined1 *)((int)param_1 + 0xbe) = 0;
    *(undefined1 *)((int)param_1 + 0x53) = 1;
  }
  return param_1;
}



// Function: FUN_1010003c at 1010003c
// Size: 168 bytes

void FUN_1010003c(void)

{
  undefined4 uVar1;
  int local_12c;
  undefined1 auStack_108 [260];
  
  if (DAT_4bfde391 != '\0') {
    FUN_100fff18();
    FUN_100fff20(0);
  }
  FUN_100b19f4(auStack_108,0x914b0018);
  FUN_100ed954(auStack_108,0x74657677);
  uVar1 = FUN_10000a98(0x5529002e,0xf812,1);
  **(undefined4 **)(local_12c + -0x20) = uVar1;
  FUN_100db26c();
  **(undefined1 **)(local_12c + -2000) = 1;
  return;
}



// Function: FUN_101000e4 at 101000e4
// Size: 124 bytes

void FUN_101000e4(short param_1,short param_2,int *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int local_c [2];
  
  piVar3 = &local_10;
  local_c[0] = (int)param_1;
  local_10 = 0;
  if (0 < param_1) {
    piVar3 = local_c;
  }
  iVar2 = *piVar3;
  *(short *)(*param_3 + 0x20) = (short)iVar2;
  uVar1 = FUN_100f0334((int)(short)iVar2,(int)param_2,(int)*(short *)(*param_3 + 0x3c));
  *(undefined2 *)(*param_3 + 0x22) = uVar1;
  return;
}



// Function: FUN_10100160 at 10100160
// Size: 80 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10100160(void)

{
  undefined4 uVar1;
  
  if (*_FUN_10117884 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_10117884(*_FUN_10117884 + (int)*(short *)(*(int *)*_FUN_10117884 + 0x7b0));
  }
  return uVar1;
}



// Function: FUN_101001b8 at 101001b8
// Size: 40 bytes

void FUN_101001b8(void)

{
  FUN_100fff20(0);
  return;
}



// Function: FUN_101001e0 at 101001e0
// Size: 412 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001e0(int *param_1)

{
  int *in_r10;
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000038;
  undefined2 in_stack_0000003e;
  undefined1 in_stack_00000043;
  undefined1 in_stack_00000047;
  int local_16c;
  undefined1 auStack_148 [256];
  short local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_10105b08(param_1);
  iVar1 = in_r10[1];
  iVar2 = in_r10[2];
  iVar3 = in_r10[3];
  param_1[0x23] = *in_r10;
  param_1[0x24] = iVar1;
  param_1[0x25] = iVar2;
  param_1[0x26] = iVar3;
  iVar1 = in_stack_00000038[1];
  iVar2 = in_stack_00000038[2];
  param_1[0x2c] = *in_stack_00000038;
  param_1[0x2d] = iVar1;
  param_1[0x2e] = iVar2;
  *(undefined2 *)(param_1 + 0x30) = in_stack_0000003e;
  *(undefined1 *)((int)param_1 + 0xc3) = in_stack_00000043;
  *(undefined1 *)(param_1 + 0x31) = in_stack_00000047;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_40 = _DAT_41820010;
  _DAT_41820010 = auStack_148;
  iVar1 = FUN_10000090(auStack_148);
  if (iVar1 == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x730) + (int)param_1);
    *(undefined2 *)((int)param_1 + 0xd2) = *(undefined2 *)(*(int *)param_1[0x20] + 0x20);
    *(undefined4 *)(*(int *)param_1[0x20] + 0x2a) = **(undefined4 **)(local_16c + -0x20);
    param_1[0x21] = *(int *)(*(int *)param_1[0x20] + 0x3e);
    FUN_10117884((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
    FUN_10000540(2,1,param_1[0x20]);
    FUN_10117884((int)*(short *)(*param_1 + 0x3f0) + (int)param_1,
                 **(undefined4 **)(local_16c + -0xd8),0x40,0);
    _DAT_41820010 = local_40;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_48,local_44);
  }
  return;
}



// Function: FUN_1010037c at 1010037c
// Size: 1376 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1010037c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_1d4;
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 local_1a0;
  undefined1 auStack_19c [8];
  int local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  int *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  int local_170;
  int *local_16c;
  int *local_168;
  undefined1 auStack_164 [256];
  short local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_4c;
  
  local_4c = (int *)0x0;
  local_168 = (int *)0x0;
  local_180 = 0;
  local_174 = 0;
  local_178 = 0;
  local_16c = (int *)0x0;
  local_170 = 0;
  local_4c = (int *)FUN_10105d2c(param_1);
  local_4c[0x20] = 0;
  local_4c[0x22] = 0;
  local_4c[0x21] = 0;
  local_4c[0x2b] = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_5c = _DAT_41820010;
  _DAT_41820010 = auStack_164;
  iVar1 = FUN_10000090(auStack_164);
  if (iVar1 == 0) {
    if (param_1[0x20] != 0) {
      FUN_100ee844(auStack_19c,*(undefined1 *)((int)param_1 + 0xbe));
      FUN_10000660(&local_1a0);
      FUN_10000198(**(undefined4 **)(local_1d4 + -0x98));
      local_1b0 = param_1[0x2c];
      iStack_1ac = param_1[0x2d];
      iStack_1a8 = param_1[0x2e];
      FUN_100f0788(&local_1b0);
      FUN_10002598(param_1[0x20]);
      local_188 = **(undefined4 **)param_1[0x20];
      uStack_184 = (*(undefined4 **)param_1[0x20])[1];
      local_190 = *(undefined4 *)(*(int *)param_1[0x20] + 8);
      uStack_18c = *(undefined4 *)(*(int *)param_1[0x20] + 0xc);
      if (*(char *)((int)param_1 + 0xc3) == '\x01') {
        iVar1 = FUN_100026a0(&local_188,&local_190);
        local_4c[0x20] = iVar1;
      }
      else {
        iVar1 = FUN_10000480(&local_188,&local_190);
        local_4c[0x20] = iVar1;
      }
      FUN_10000198(local_1a0);
      FUN_100db26c(local_4c[0x20]);
      *(undefined2 *)(*(int *)local_4c[0x20] + 0x3a) = *(undefined2 *)(*(int *)param_1[0x20] + 0x3a)
      ;
      *(undefined2 *)(*(int *)local_4c[0x20] + 0x48) = *(undefined2 *)(*(int *)param_1[0x20] + 0x48)
      ;
      *(undefined4 *)(*(int *)local_4c[0x20] + 0x26) = *(undefined4 *)(*(int *)param_1[0x20] + 0x26)
      ;
      *(undefined4 *)(*(int *)local_4c[0x20] + 0x2a) = *(undefined4 *)(*(int *)param_1[0x20] + 0x2a)
      ;
      iVar1 = *(int *)local_4c[0x20];
      uVar3 = *(undefined4 *)(*(int *)param_1[0x20] + 0x14);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)param_1[0x20] + 0x10);
      *(undefined4 *)(iVar1 + 0x14) = uVar3;
      *(undefined4 *)(*(int *)local_4c[0x20] + 0x1c) = *(undefined4 *)(*(int *)param_1[0x20] + 0x1c)
      ;
      if (*(char *)((int)param_1 + 0xc3) == '\x01') {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e8),&local_17c,&local_180);
        piVar2 = (int *)FUN_10001b78(local_4c[0x20]);
        iVar1 = *piVar2;
        uVar3 = *(undefined4 *)(iVar1 + 4);
        uVar4 = *(undefined4 *)(iVar1 + 8);
        piVar2 = *(int **)(iVar1 + 0x10);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*piVar2 + 4);
        }
        local_168 = local_17c;
        FUN_100f16a0(&local_168);
        local_174 = local_180;
        FUN_100f16a0(&local_174);
        local_178 = *(undefined4 *)(*local_17c + 8);
        FUN_100f16a0(&local_178);
        local_16c = *(int **)(*local_17c + 0x10);
        if ((local_16c != (int *)0x0) && (FUN_100f16a0(&local_16c), iVar1 != 0)) {
          local_194 = iVar1;
          FUN_100f16a0(&local_194);
          *(int *)(*local_16c + 4) = local_194;
        }
        *(int **)(*local_168 + 0x10) = local_16c;
        *(undefined4 *)(*local_168 + 8) = local_178;
        *(undefined4 *)(*local_168 + 4) = local_174;
        local_174 = 0;
        local_178 = 0;
        local_16c = (int *)0x0;
        FUN_100ef510(uVar3);
        FUN_100ef510(uVar4);
        FUN_100ef510(piVar2);
        FUN_100ef510(iVar1);
        FUN_100026e8(local_168,local_4c[0x20]);
        local_168 = (int *)0x0;
      }
      local_4c[0x22] = *(int *)(*(int *)local_4c[0x20] + 0x3e);
      local_170 = param_1[0x21];
      FUN_100f16a0(&local_170);
      *(int *)(*(int *)local_4c[0x20] + 0x3e) = local_170;
      local_4c[0x21] = local_170;
      local_170 = 0;
      *(undefined2 *)(*(int *)local_4c[0x20] + 0x3c) = *(undefined2 *)(*(int *)param_1[0x20] + 0x3c)
      ;
      FUN_10117884((int)local_4c + (int)*(short *)(*local_4c + 0x7c0),
                   (int)*(short *)(*(int *)param_1[0x20] + 0x20),
                   (int)*(short *)(*(int *)param_1[0x20] + 0x22),0);
      FUN_10002ad8(param_1[0x20]);
      FUN_100ee8e8(auStack_19c,2);
    }
    _DAT_41820010 = local_5c;
  }
  else {
    local_174 = FUN_100ef510(local_174);
    local_178 = FUN_100ef510(local_178);
    local_16c = (int *)FUN_100ef510(local_16c);
    local_170 = FUN_100ef510(local_170);
    local_168 = (int *)FUN_100ef510(local_168);
    FUN_10117884((int)local_4c + (int)*(short *)(*local_4c + 0x90));
    FUN_10002ad8(param_1[0x20]);
    FUN_100db158((int)local_64,local_60);
  }
  FUN_10117884((int)local_4c + (int)*(short *)(*local_4c + 0x7f8));
  return local_4c;
}



// Function: FUN_101008dc at 101008dc
// Size: 180 bytes

void FUN_101008dc(int param_1)

{
  undefined2 uVar2;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      *(int *)(**(int **)(param_1 + 0x80) + 0x3e) = *(int *)(param_1 + 0x88);
      uVar2 = FUN_10001c20(*(undefined4 *)(**(int **)(param_1 + 0x80) + 0x3e));
      *(undefined2 *)(**(int **)(param_1 + 0x80) + 0x3c) = uVar2;
      if (*(char *)(param_1 + 0xc5) == '\0') {
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      else {
        uVar1 = FUN_100ef510(*(undefined4 *)(param_1 + 0x84));
        *(undefined4 *)(param_1 + 0x84) = uVar1;
      }
    }
    FUN_10002700(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  FUN_10106060(param_1);
  return;
}



// Function: FUN_1010099c at 1010099c
// Size: 604 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010099c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar3;
  undefined2 uVar2;
  int local_174;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int local_140;
  int iStack_13c;
  int iStack_138;
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
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0xc3) = uVar3;
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)(param_1 + 0x31) = uVar3;
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0xc2) = uVar3;
    uVar3 = FUN_10117884((int)*(short *)(*param_2 + 0xf0) + (int)param_2);
    *(undefined1 *)((int)param_1 + 0xc5) = uVar3;
    iVar1 = FUN_10117884((int)*(short *)(*param_2 + 0x108) + (int)param_2);
    param_1[0x27] = iVar1;
    uVar2 = FUN_10117884((int)*(short *)(*param_2 + 0x100) + (int)param_2);
    *(undefined2 *)(param_1 + 0x28) = uVar2;
    FUN_10117884((int)*(short *)(*param_2 + 0x128) + (int)param_2,&local_140);
    param_1[0x23] = local_140;
    param_1[0x24] = iStack_13c;
    param_1[0x25] = iStack_138;
    param_1[0x26] = iStack_134;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x30) = uVar2;
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(short *)(param_1 + 0x2f) = (short)iVar1;
    if (iVar1 != -1) {
      FUN_100f06dc(iVar1,&local_150);
      param_1[0x2c] = local_150;
      param_1[0x2d] = iStack_14c;
      param_1[0x2e] = iStack_148;
    }
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0xbe) = uVar3;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x730));
    _DAT_41820010 = local_28;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_30,local_2c);
  }
  *(undefined2 *)((int)param_1 + 0xd2) = *(undefined2 *)(*(int *)param_1[0x20] + 0x20);
  *(undefined4 *)(*(int *)param_1[0x20] + 0x2a) = **(undefined4 **)(local_174 + -0x20);
  param_1[0x21] = *(int *)(*(int *)param_1[0x20] + 0x3e);
  FUN_10000540(2,1);
  return;
}



// Function: FUN_10100bf8 at 10100bf8
// Size: 340 bytes

void FUN_10100bf8(int param_1,int *param_2)

{
  FUN_101097e8(param_1,param_2);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xc3));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xc4));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xc2));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xc5));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),*(undefined4 *)(param_1 + 0x9c));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xa0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1b8),param_1 + 0x8c);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xc0));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0xbc));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0xbe));
  return;
}



// Function: FUN_10100d4c at 10100d4c
// Size: 96 bytes

void FUN_10100d4c(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x468),(int)*(char *)((int)param_1 + 0x46),
               4);
  *(undefined1 *)((int)param_1 + 0x46) = 4;
  FUN_100d95c4(param_1);
  return;
}



// Function: FUN_10100dac at 10100dac
// Size: 80 bytes

void FUN_10100dac(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758),1);
  FUN_100d95c8(param_1);
  return;
}



// Function: FUN_10100dfc at 10100dfc
// Size: 772 bytes

undefined4 FUN_10100dfc(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined2 *puVar11;
  int local_74;
  undefined4 local_50 [2];
  undefined1 auStack_48 [8];
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  FUN_100b02d0(local_50);
  iVar3 = FUN_10000240();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),0);
    if ((piVar4 != (int *)0x0) &&
       (iVar3 = FUN_10117884((int)*(short *)(*piVar4 + 0x3a8) + (int)piVar4), iVar3 != 0)) {
      FUN_100b0384(local_50);
      FUN_10001518();
      FUN_10117884((int)*(short *)(*piVar4 + 0x270) + (int)piVar4,local_50[0],auStack_48);
      FUN_10117884((int)*(short *)(*piVar4 + 0x780) + (int)piVar4,auStack_48,auStack_30);
      iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
      if (iVar3 != 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x628) + (int)param_1,auStack_38);
        bVar10 = 0;
        do {
          uVar5 = FUN_100b057c(auStack_38,0);
          psVar6 = (short *)FUN_100b0388(uVar5,bVar10);
          sVar1 = *psVar6;
          puVar7 = (undefined4 *)FUN_100e1088(param_1 + 0xd,bVar10);
          uVar9 = *puVar7;
          uVar5 = FUN_100b057c(auStack_38,1);
          psVar6 = (short *)FUN_100b0388(uVar5,bVar10);
          sVar2 = *psVar6;
          piVar8 = (int *)FUN_100e1088(auStack_30,bVar10);
          if (*piVar8 < 0) {
            puVar7 = (undefined4 *)FUN_100e1088(auStack_30,bVar10);
            uVar5 = FUN_100f0334(-(int)sVar1,*puVar7,0);
            puVar7 = (undefined4 *)FUN_100e1088(auStack_30,bVar10);
            *puVar7 = uVar5;
          }
          else {
            puVar7 = (undefined4 *)FUN_100e1088(auStack_30,bVar10);
            uVar5 = FUN_100f0334(0,*puVar7,(int)(short)((short)uVar9 - sVar2));
            puVar7 = (undefined4 *)FUN_100e1088(auStack_30,bVar10);
            *puVar7 = uVar5;
          }
          bVar10 = bVar10 + 1;
        } while (bVar10 < 2);
        iVar3 = FUN_100e11c8(auStack_30,*(undefined4 *)(local_74 + -0xce0));
        if (iVar3 != 0) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x778),auStack_30,1);
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4c8));
        }
      }
    }
    iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar3 != 0) {
      puVar11 = *(undefined2 **)param_1[0x20];
      local_40 = *puVar11;
      local_3e = puVar11[1];
      local_3c = puVar11[2];
      local_3a = puVar11[3];
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c8),&local_40,
                   **(undefined4 **)(local_74 + -0xe60));
    }
  }
  return 1;
}



// Function: FUN_10101100 at 10101100
// Size: 68 bytes

void FUN_10101100(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_10000810(param_2,*(undefined4 *)(param_1 + 0x80));
  }
  return;
}



// Function: FUN_10101144 at 10101144
// Size: 144 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101144(int *param_1,int param_2)

{
  if ((int *)param_1[0x20] != (int *)0x0) {
    if (param_2 == 0) {
      *(undefined4 *)(*(int *)param_1[0x20] + 0x52) = _DAT_80410014;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x750));
      *(undefined1 *)((int)param_1 + 0xc6) = 1;
    }
    else {
      *(int *)(*(int *)param_1[0x20] + 0x52) = param_2;
    }
  }
  FUN_10106ff0(param_1,param_2);
  return;
}



// Function: FUN_101011d4 at 101011d4
// Size: 164 bytes

void FUN_101011d4(int param_1,int *param_2)

{
  int local_18 [3];
  
  if ((*(int **)(param_1 + 0x80) != (int *)0x0) && (param_2 != (int *)0x0)) {
    local_18[0] = (int)*(short *)(**(int **)(param_1 + 0x80) + 0x18);
    if (local_18[0] < 1) {
      local_18[0] = FUN_10000570();
    }
    local_18[1] = 0x10;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x748),local_18,0,1);
  }
  FUN_10107114(param_1,param_2);
  return;
}



// Function: FUN_10101278 at 10101278
// Size: 244 bytes

void FUN_10101278(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  int local_1c;
  
  FUN_101074b8(param_1,param_2);
  iVar3 = (param_1[0xe] - param_1[0x24]) - param_1[0x26];
  local_20 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760));
  local_1c = iVar3;
  if (((*(char *)((int)param_1 + 0x45) == '\x04') && (*(char *)((int)param_1 + 0xc3) == '\0')) &&
     (*(char *)(param_1 + 0x31) == '\0')) {
    local_1c = param_1[0x2a];
  }
  uVar1 = FUN_100e1580(param_2,0);
  uVar2 = FUN_100e1580(param_2,1);
  FUN_100e10b0(uVar2,uVar1,&local_20);
  return;
}



// Function: FUN_1010136c at 1010136c
// Size: 320 bytes

int FUN_1010136c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_48 [2];
  undefined1 auStack_44 [16];
  undefined2 local_34 [2];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  FUN_100ee844(auStack_30,*(undefined1 *)((int)param_1 + 0xbe));
  iVar2 = *(int *)param_1[0x20];
  iVar4 = 0;
  if ((*(short *)(iVar2 + 0x3c) < 1) ||
     (*(char *)(**(int **)(iVar2 + 0x3e) + (int)*(short *)(iVar2 + 0x3c) + -1) == '\r')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar3 = (int)*(short *)(iVar2 + 0x5e);
  if (*(char *)((int)param_1 + 0xc3) == '\x01') {
    if (0 < iVar3) {
      iVar4 = FUN_10000528(0x7fff,0,param_1[0x20]);
    }
    if (bVar1) {
      local_34[0] = 0xf;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),0x7fff,0x7fff,local_34,
                   auStack_44);
      FUN_100eceb0(auStack_44,auStack_28,local_48);
      iVar4 = iVar4 + local_48[0];
    }
  }
  else {
    if (bVar1) {
      iVar3 = (int)(short)(*(short *)(iVar2 + 0x5e) + 1);
    }
    iVar4 = iVar3 * *(short *)(iVar2 + 0x18);
  }
  FUN_100ee8e8(auStack_30,2);
  return iVar4;
}



// Function: FUN_101014ac at 101014ac
// Size: 372 bytes

int FUN_101014ac(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_28;
  int local_24;
  
  if (*(char *)((int)param_1 + 0xc3) == '\0') {
    iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      local_38 = param_1[0x2c];
      iStack_34 = param_1[0x2d];
      iStack_30 = param_1[0x2e];
      FUN_100f0788(&local_38);
      sVar1 = *(short *)(*(int *)param_1[0x20] + 0x60);
      uVar4 = FUN_100ef9b8(*(undefined4 *)(*(int *)param_1[0x20] + 0x3e));
      iVar3 = 0;
      iVar6 = 1;
      if (0 < *(short *)(*(int *)param_1[0x20] + 0x5e)) {
        do {
          sVar2 = *(short *)(*(int *)param_1[0x20] + iVar6 * 2 + 0x60);
          local_24 = iVar3;
          local_28 = FUN_10000780(**(undefined4 **)(*(int *)param_1[0x20] + 0x3e),(int)sVar1,
                                  (int)(short)(sVar2 - sVar1));
          piVar5 = &local_28;
          if (local_28 < local_24) {
            piVar5 = &local_24;
          }
          iVar3 = (int)(short)*piVar5;
          iVar6 = (int)(short)((short)iVar6 + 1);
          sVar1 = sVar2;
        } while (iVar6 <= *(short *)(*(int *)param_1[0x20] + 0x5e));
      }
      FUN_10001b60(*(undefined4 *)(*(int *)param_1[0x20] + 0x3e),uVar4);
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



// Function: FUN_10101620 at 10101620
// Size: 160 bytes

void FUN_10101620(int *param_1,char param_2,char param_3)

{
  *(char *)(param_1 + 0x31) = param_2;
  if (param_2 == '\0') {
    *(undefined2 *)(*(int *)param_1[0x20] + 0x48) = 0xffff;
  }
  else {
    *(undefined2 *)(*(int *)param_1[0x20] + 0x48) = 0;
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),1);
  }
  return;
}



// Function: FUN_101016c0 at 101016c0
// Size: 308 bytes

void FUN_101016c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int local_28 [3];
  
  piVar6 = local_28;
  FUN_10107758(param_1,param_2);
  uVar7 = 0;
  do {
    cVar1 = *(char *)(param_1 + uVar7 + 0x44);
    if (((cVar1 != '\x05') && (cVar1 != '\x01')) &&
       ((cVar1 != '\0' || (*(int *)(param_1 + 0x20) == 0)))) {
      uVar2 = FUN_100e1580(param_1 + 0x8c,0);
      piVar3 = (int *)FUN_100e1088(uVar2,uVar7);
      iVar4 = *piVar3;
      uVar2 = FUN_100e1580(param_1 + 0x8c,1);
      piVar3 = (int *)FUN_100e1088(uVar2,uVar7);
      iVar5 = *piVar3;
      uVar2 = FUN_100e1580(param_2,1);
      piVar3 = (int *)FUN_100e1088(uVar2,uVar7);
      *piVar3 = iVar4 + iVar5 + *piVar3;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 2);
  local_28[1] = 30000;
  local_28[0] = *(int *)(param_2 + 8);
  if (30000 < *(int *)(param_2 + 8)) {
    piVar6 = local_28 + 1;
  }
  *(int *)(param_2 + 8) = *piVar6;
  return;
}



// Function: FUN_101017f4 at 101017f4
// Size: 672 bytes

/* WARNING: Type propagation algorithm not settling */

void FUN_101017f4(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  short local_a0 [2];
  undefined1 auStack_9c [8];
  short local_94 [2];
  undefined1 auStack_90 [16];
  undefined2 local_80;
  undefined2 local_7e;
  short local_78;
  undefined2 local_76;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  
  FUN_100b02d0(&local_58);
  FUN_100ee844(auStack_9c,*(undefined1 *)((int)param_1 + 0xbe));
  iVar3 = *(int *)param_1[0x20];
  iVar7 = (int)*(short *)(iVar3 + 0x3c);
  iVar6 = (int)*(short *)(iVar3 + 0x20);
  sVar1 = *(short *)(iVar3 + 0x22);
  piVar5 = *(int **)(iVar3 + 0x3e);
  if ((sVar1 == iVar6) && (param_1[3] == 0x7fffffff)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
  }
  if (((iVar6 == iVar7) && (0 < iVar7)) && (*(char *)(*piVar5 + iVar7 + -1) == '\r')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  FUN_10000798(iVar6,auStack_90,local_94,auStack_50,param_1[0x20]);
  FUN_10002268(&local_78,iVar6,param_1[0x20]);
  local_58 = CONCAT22(local_78 - local_94[0],local_76);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x270),local_58,&local_60);
  puVar2 = (undefined4 *)FUN_100e1580(param_2,0);
  *puVar2 = local_60;
  puVar2[1] = uStack_5c;
  FUN_10002268(&local_80,(int)sVar1,param_1[0x20]);
  local_70 = CONCAT22(local_80,local_7e);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x270),local_70,&local_60);
  puVar2 = (undefined4 *)FUN_100e1580(param_2,1);
  *puVar2 = local_60;
  puVar2[1] = uStack_5c;
  if (iVar7 < 1) {
    *param_2 = 0;
    param_2[2] = (int)local_94[0];
  }
  if (bVar4) {
    local_a0[1] = 0xf;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7e0),0x7fff,0x7fff,local_a0 + 1,
                 auStack_90);
    FUN_100eceb0(auStack_90,auStack_4c,local_a0);
    *param_2 = param_2[2];
    param_2[2] = param_2[2] + (int)local_a0[0];
  }
  else if (*(short *)(*(int *)param_1[0x20] + 0x22) == *(short *)(*(int *)param_1[0x20] + 0x20)) {
    param_2[1] = param_2[3] + -1;
  }
  FUN_100ee8e8(auStack_9c,2);
  return;
}



// Function: FUN_10101a94 at 10101a94
// Size: 156 bytes

undefined4
FUN_10101a94(int param_1,short param_2,short param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = **(int **)(param_1 + 0x80);
  sVar1 = *(short *)(iVar4 + 0x20);
  sVar2 = *(short *)(iVar4 + 0x22);
  FUN_101000e4((int)param_2,(int)param_3,*(int **)(param_1 + 0x80));
  uVar3 = FUN_10000858(param_4,param_5,*(undefined4 *)(param_1 + 0x80));
  FUN_101000e4((int)sVar1,(int)sVar2,*(undefined4 *)(param_1 + 0x80));
  return uVar3;
}



// Function: FUN_10101b50 at 10101b50
// Size: 348 bytes

undefined4 FUN_10101b50(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  if (param_2 == '\x01') {
    piVar3 = &local_20;
    if ((((int *)param_1[0x20] == (int *)0x0) ||
        (iVar2 = *(int *)param_1[0x20], *(short *)(iVar2 + 0x22) != *(short *)(iVar2 + 0x20))) ||
       (iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1,1), iVar2 == 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),0x7fffffff);
    }
    else {
      if ((*(char *)((int)param_1 + 0xc2) != '\0') &&
         (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x678)), iVar2 != 0)) {
        FUN_100ee844(auStack_18,*(undefined1 *)((int)param_1 + 0xbe));
        FUN_10001bc0(param_1[0x20]);
        FUN_100ee8e8(auStack_18,2);
      }
      uVar1 = FUN_100004f8();
      local_1c = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      local_20 = 1;
      if (1 < local_1c) {
        piVar3 = &local_1c;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),*piVar3);
    }
  }
  return 0;
}



// Function: FUN_10101cac at 10101cac
// Size: 2984 bytes

void FUN_10101cac(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  short sVar5;
  undefined4 uVar3;
  int iVar4;
  char cVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  short local_50;
  short local_4e;
  uint local_4c;
  uint local_48;
  
  puVar9 = &local_70;
  puVar7 = &local_68;
  puVar8 = &local_60;
  uVar12 = (uint)*(short *)(*(int *)param_1[0x20] + 0x20);
  sVar5 = *(short *)(param_2 + 9);
  uVar13 = (int)sVar5 & 0xff;
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  iVar10 = 0;
  bVar1 = false;
  if (iVar2 == 0) goto LAB_1010281c;
  if ((0x1f < uVar13) || ((param_1[0x33] & 1 << ((int)sVar5 & 0x3fU)) != 0)) {
    if (((uVar13 == 0x1c) || (((uVar13 == 0x1d || (uVar13 == 0x1e)) || (uVar13 == 0x1f)))) &&
       (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar2 != 0)) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x750));
      *(undefined1 *)((int)param_1 + 0xc6) = 1;
      if ((uVar13 != 0x1e) && (uVar13 != 0x1f)) {
        *(undefined1 *)(param_1 + 0x35) = 0;
      }
      if ((uVar13 == 0x1c) || (uVar13 == 0x1d)) {
        cVar6 = ('\x1c' - ((0x1c < uVar13) + '\x1c')) +
                (0x1b < uVar13 && (uint)(0x1c < uVar13) <= uVar13 - 0x1c);
        sVar5 = FUN_10002160(0x16);
        iVar2 = FUN_10000510((int)sVar5,6);
        if (iVar2 != 0) {
          cVar6 = cVar6 == '\0';
        }
      }
      else {
        cVar6 = '\0';
      }
      iVar2 = *(int *)param_1[0x20];
      if (*(short *)(iVar2 + 0x20) == *(short *)(iVar2 + 0x22)) {
        *(short *)((int)param_1 + 0xd2) = *(short *)(iVar2 + 0x20);
      }
      if (*(short *)((int)param_1 + 0xd2) < 0) {
        if ((uVar13 == 0x1e) || (cVar6 != '\0')) {
          *(undefined2 *)((int)param_1 + 0xd2) = *(undefined2 *)(iVar2 + 0x22);
        }
        else {
          *(undefined2 *)((int)param_1 + 0xd2) = *(undefined2 *)(iVar2 + 0x20);
        }
      }
      if (*(short *)((int)param_1 + 0xd2) == *(short *)(iVar2 + 0x22)) {
        sVar5 = *(short *)(iVar2 + 0x20);
      }
      else {
        sVar5 = *(short *)(iVar2 + 0x22);
      }
      uVar11 = (uint)sVar5;
      if ((uVar13 == 0x1e) &&
         (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar11), iVar2 == 0)
         ) {
        iVar10 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
        *(undefined1 *)(param_1 + 0x35) = 0;
        bVar1 = true;
        uVar12 = 0;
      }
      else if ((uVar13 == 0x1f) &&
              (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar11),
              iVar2 == *(short *)(*(int *)param_1[0x20] + 0x5e) + -1)) {
        iVar10 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
        uVar12 = (uint)*(short *)(*(int *)param_1[0x20] + 0x3c);
        *(undefined1 *)(param_1 + 0x35) = 0;
        bVar1 = true;
      }
      if (((!bVar1) && (0x1b < uVar13)) && (uVar13 < 0x20)) {
        FUN_10002598(param_1[0x20]);
        iVar10 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
        iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe8));
        if (iVar2 == 0) {
          if ((uVar13 == 0x1e) || (uVar13 == 0x1f)) {
            if (*(char *)(param_1 + 0x35) == '\0') {
              *(undefined1 *)(param_1 + 0x35) = 1;
              FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),uVar11,&local_58);
              *(short *)((int)param_1 + 0xd6) = (short)local_54;
            }
            if (*(short *)(*(int *)param_1[0x20] + 0x18) < 0) {
              uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar11);
              sVar5 = FUN_10000528(uVar3,uVar3,param_1[0x20]);
            }
            else {
              sVar5 = *(short *)(*(int *)param_1[0x20] + 0x18);
            }
            iVar2 = (int)sVar5;
            if (uVar13 == 0x1e) {
              iVar2 = -iVar2;
            }
            FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),uVar11,&local_58);
            local_58 = local_58 + iVar2;
            local_54 = (int)*(short *)((int)param_1 + 0xd6);
            uVar12 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x798),&local_58);
            iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar11);
            if ((uVar13 == 0x1e) &&
               (uVar12 == (int)*(short *)(*(int *)param_1[0x20] + iVar2 * 2 + 0x60))) {
              uVar12 = (uint)(short)((short)uVar12 + -1);
            }
            else if ((uVar13 == 0x1f) &&
                    (iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),uVar12),
                    iVar4 == iVar2 + 2)) {
              uVar12 = (uint)(short)((short)uVar12 + 1);
            }
          }
          else {
            iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
            if (iVar2 == 0) {
              iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
              if ((iVar2 == 0) &&
                 (*(short *)(*(int *)param_1[0x20] + 0x20) !=
                  *(short *)(*(int *)param_1[0x20] + 0x22))) {
                if (cVar6 == '\0') {
                  uVar12 = (uint)*(short *)(*(int *)param_1[0x20] + 0x22);
                }
                else {
                  uVar12 = (uint)*(short *)(*(int *)param_1[0x20] + 0x20);
                }
              }
              else {
                if (cVar6 == '\0') {
                  iVar2 = 1;
                }
                else {
                  iVar2 = -1;
                }
                sVar5 = FUN_100f0334(0,uVar11 + iVar2,(int)*(short *)(*(int *)param_1[0x20] + 0x3c))
                ;
                uVar12 = (uint)sVar5;
              }
            }
            else {
              if (iVar10 == 0) {
                uVar13 = 1;
              }
              else if (cVar6 == '\0') {
                uVar13 = (((int)uVar11 >> 0x1f) - ((int)*(short *)((int)param_1 + 0xd2) >> 0x1f)) +
                         (uint)((uint)(int)*(short *)((int)param_1 + 0xd2) <= uVar11) & 0xff;
              }
              else {
                uVar13 = (((int)*(short *)((int)param_1 + 0xd2) >> 0x1f) - ((int)uVar11 >> 0x1f)) +
                         (uint)(uVar11 <= (uint)(int)*(short *)((int)param_1 + 0xd2)) & 0xff;
              }
              uVar12 = uVar11;
              if (uVar13 == 0) {
                bVar1 = false;
                if (cVar6 == '\0') {
                  local_4e = sVar5;
                  if ((int)uVar11 < (int)*(short *)((int)param_1 + 0xd2)) {
                    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar11,
                                         &local_4e,&local_50);
                    while ((iVar2 == 0 || ((int)local_4e <= (int)uVar11))) {
                      uVar12 = (uint)(short)(local_50 + 1);
                      if ((int)*(short *)((int)param_1 + 0xd2) <= (int)uVar12) goto LAB_101023c4;
                      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar12,
                                           &local_4e,&local_50);
                    }
                    if ((int)uVar12 < (int)*(short *)((int)param_1 + 0xd2)) goto LAB_101023cc;
                  }
LAB_101023c4:
                  uVar12 = (uint)*(short *)((int)param_1 + 0xd2);
                  bVar1 = true;
                }
                else {
                  local_50 = sVar5;
                  if ((int)*(short *)((int)param_1 + 0xd2) < (int)uVar11) {
                    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar11,
                                         &local_4e,&local_50);
                    uVar13 = uVar11;
                    while ((iVar2 == 0 || ((int)uVar11 <= local_50 + 1))) {
                      uVar13 = (uint)(short)(local_4e + -1);
                      if ((int)uVar13 <= (int)*(short *)((int)param_1 + 0xd2)) goto LAB_10102304;
                      iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar13,
                                           &local_4e,&local_50);
                    }
                    if ((int)*(short *)((int)param_1 + 0xd2) < (int)uVar13) {
                      uVar12 = (uint)(short)(local_50 + 1);
                      goto LAB_101023cc;
                    }
                  }
LAB_10102304:
                  uVar12 = (uint)*(short *)((int)param_1 + 0xd2);
                  bVar1 = true;
                }
LAB_101023cc:
                if (!bVar1) goto LAB_101025f8;
              }
              sVar5 = (short)uVar12;
              if (cVar6 == '\0') {
                iVar2 = (int)(short)(*(short *)(*(int *)param_1[0x20] + 0x3c) + -1);
                local_50 = sVar5;
                if ((int)uVar12 < iVar2) {
                  iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),
                                       (int)(short)(sVar5 + 1),&local_4e,&local_50);
                  while (iVar4 == 0) {
                    sVar5 = (short)uVar12;
                    uVar12 = (uint)(short)(sVar5 + 1);
                    if (iVar2 <= (int)uVar12) break;
                    iVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),
                                         (int)(short)(sVar5 + 2),&local_4e,&local_50);
                  }
                }
                local_5c = uVar12;
                local_60 = (int)local_50;
                if ((int)local_50 < (int)uVar12) {
                  puVar8 = &local_5c;
                }
                uVar12 = (uint)(short)((short)*puVar8 + 1);
              }
              else {
                local_64 = uVar12;
                local_4e = sVar5;
                if (0 < (int)uVar12) {
                  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),uVar12,
                                       &local_4e,&local_50);
                  while (((iVar2 == 0 || ((int)uVar12 <= (int)local_4e)) &&
                         (local_64 = (uint)(short)((short)local_64 + -1), 0 < (int)local_64))) {
                    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7a0),local_64,
                                         &local_4e,&local_50);
                  }
                }
                local_68 = (int)local_4e;
                if ((int)local_64 < (int)local_4e) {
                  puVar7 = &local_64;
                }
                uVar12 = (uint)(short)*puVar7;
              }
            }
          }
        }
        else {
          if (uVar13 == 0x1e) {
            uVar12 = 0;
          }
          else if (uVar13 == 0x1f) {
            uVar12 = (uint)*(short *)(*(int *)param_1[0x20] + 0x3c);
          }
          else if (cVar6 == '\0') {
            uVar12 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x790),uVar11);
          }
          else {
            uVar12 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x788),uVar11);
          }
          *(undefined1 *)(param_1 + 0x35) = 0;
        }
LAB_101025f8:
        FUN_10002ad8(param_1[0x20]);
      }
      bVar1 = true;
      if (iVar10 == 0) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),uVar12,uVar12,1);
      }
      else {
        local_6c = uVar12;
        local_70 = (int)*(short *)((int)param_1 + 0xd2);
        if ((int)uVar12 < (int)*(short *)((int)param_1 + 0xd2)) {
          puVar9 = &local_6c;
        }
        local_4c = uVar12;
        local_48 = (int)*(short *)((int)param_1 + 0xd2);
        if ((int)*(short *)((int)param_1 + 0xd2) < (int)uVar12) {
          puVar8 = &local_4c;
        }
        else {
          puVar8 = &local_48;
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),(int)(short)*puVar9,
                     (int)(short)*puVar8,1);
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),1);
    }
    else if ((*(char *)((int)param_1 + 0xc2) != '\0') &&
            (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar2 != 0)) {
      if (((uVar13 != 8) &&
          ((uVar13 != 0x7f &&
           (*(short *)(*(int *)param_1[0x20] + 0x20) == *(short *)(*(int *)param_1[0x20] + 0x22)))))
         && ((iVar2 = FUN_10001c20(param_1[0x21]), *(short *)(param_1 + 0x28) - iVar2 < 1 ||
             (iVar2 = FUN_100f1264(), iVar2 != 0)))) {
        FUN_100d8e3c(0x96);
        return;
      }
      *(undefined1 *)(param_1 + 0x35) = 0;
      if ((param_1[0x2b] == 0) || (*(char *)(param_1[0x2b] + 0x5c) != '\0')) {
        iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x748),uVar13);
        param_1[0x2b] = iVar2;
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x208),iVar2);
      }
      else {
        FUN_10117884(param_1[0x2b] + (int)*(short *)(*(int *)param_1[0x2b] + 0x1a8),uVar13);
        *(undefined1 *)(param_2 + 4) = 0;
      }
      bVar1 = true;
    }
  }
  if (param_1[3] == 0x7fffffff) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1b8),0);
  }
LAB_1010281c:
  if (!bVar1) {
    FUN_100da080(param_1,param_2);
  }
  return;
}



// Function: FUN_10102854 at 10102854
// Size: 568 bytes

void FUN_10102854(int *param_1,short param_2,short param_3,char param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_78 [8];
  int local_70;
  int local_6c [3];
  undefined1 auStack_60 [8];
  int local_58;
  int local_54 [3];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  
  iVar9 = (int)param_3;
  iVar10 = (int)param_2;
  piVar6 = &local_70;
  piVar5 = local_6c + 1;
  piVar8 = &local_58;
  piVar7 = local_54 + 1;
  if ((param_4 == '\0') ||
     (iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar3 == 0)) {
    local_54[2] = iVar10;
    local_54[1] = 0;
    if (0 < iVar10) {
      piVar7 = local_54 + 2;
    }
    local_54[0] = iVar9;
    local_58 = (int)*(short *)(*(int *)param_1[0x20] + 0x3c);
    if (iVar9 < *(short *)(*(int *)param_1[0x20] + 0x3c)) {
      piVar8 = local_54;
    }
    FUN_101000e4((int)(short)*piVar7,(int)(short)*piVar8,param_1[0x20]);
  }
  else {
    sVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
    sVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
    FUN_100ee844(auStack_60,*(undefined1 *)((int)param_1 + 0xbe));
    local_6c[2] = iVar10;
    local_6c[1] = 0;
    if (0 < iVar10) {
      piVar5 = local_6c + 2;
    }
    local_6c[0] = iVar9;
    local_70 = (int)*(short *)(*(int *)param_1[0x20] + 0x3c);
    if (iVar9 < *(short *)(*(int *)param_1[0x20] + 0x3c)) {
      piVar6 = local_6c;
    }
    FUN_10000840(*piVar5,*piVar6,param_1[0x20]);
    if ((iVar10 == iVar9) && ((iVar10 != sVar1 || (iVar9 != sVar2)))) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x778),iVar10,auStack_48);
      FUN_10117884(auStack_78,(int)param_1 + (int)*(short *)(*param_1 + 0x280),auStack_48);
      puVar4 = (undefined4 *)FUN_100b0368(auStack_40,auStack_78);
      FUN_100005e8(*puVar4,0,param_1[0x20]);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),1);
    FUN_100ee8e8(auStack_60,2);
  }
  if (iVar10 == iVar9) {
    *(short *)((int)param_1 + 0xd2) = param_2;
  }
  *(undefined1 *)((int)param_1 + 0xc6) = 1;
  return;
}



// Function: FUN_10102a8c at 10102a8c
// Size: 88 bytes

undefined4 FUN_10102a8c(undefined4 param_1,int param_2)

{
  if (param_2 - 0x67U < 4) {
    return param_1;
  }
  return 0;
}



// Function: FUN_10102bd8 at 10102bd8
// Size: 84 bytes

undefined4 FUN_10102bd8(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100ff0b0(0);
  FUN_100ff140(uVar1,param_1,(int)param_2);
  return uVar1;
}



// Function: FUN_10102c2c at 10102c2c
// Size: 100 bytes

void FUN_10102c2c(undefined4 param_1,int param_2)

{
  if (param_2 - 0x67U < 8) {
    return;
  }
  FUN_100c6178(param_1,param_2);
  return;
}



// Function: FUN_10103038 at 10103038
// Size: 72 bytes

void FUN_10103038(int param_1)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0xac) +
                 (int)*(short *)(**(int **)(param_1 + 0xac) + 0x1b0));
  }
  return;
}



// Function: FUN_10103080 at 10103080
// Size: 312 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10103080(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  FUN_100da394(param_1);
  uVar5 = (uint)*(short *)(**(int **)(param_1 + 0x80) + 0x20);
  uVar3 = (uint)*(short *)(**(int **)(param_1 + 0x80) + 0x22);
  uVar1 = (uint)(uVar3 <= uVar5);
  uVar1 = (uint)(uVar3 <= uVar5) -
          ((uint)(!CARRY4(uVar5,uVar1) && !CARRY4(uVar5,uVar5 + uVar1)) - ((int)uVar3 >> 0x1f)) & 1;
  iVar2 = FUN_100f1264();
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xc2) != '\0') {
      FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1e0),0x54455854);
    }
    FUN_100f27d0(0x68,uVar1);
  }
  iVar2 = (int)*(short *)(**(int **)(param_1 + 0x80) + 0x3c);
  FUN_100f27d0(0x6e,(-1 - iVar2) + (uint)(iVar2 == 0) >> 0x1f);
  if ((uVar1 == 0) || (*(char *)(param_1 + 0xc2) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_100f27d0(0x67,uVar4);
  if ((uVar1 == 0) || (*(char *)(param_1 + 0xc2) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_100f27d0(0x6a,uVar4);
  return;
}



// Function: FUN_101031b8 at 101031b8
// Size: 512 bytes

void FUN_101031b8(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined2 unaff_r23;
  undefined4 unaff_r24;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [276];
  undefined4 local_14c;
  undefined1 auStack_148 [276];
  undefined4 local_34;
  
  FUN_100ee844(auStack_270,*(undefined1 *)((int)param_1 + 0xbe));
  sVar1 = *(short *)(*(int *)param_1[0x20] + 0x24);
  if ((DAT_a8bf0002 == '\0') && (DAT_4086000c == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    unaff_r24 = FUN_10000540(2,0,param_1[0x20]);
    unaff_r23 = *(undefined2 *)(*(int *)param_1[0x20] + 0x38);
    FUN_100ee64c(auStack_148);
    FUN_10001e48(local_34);
    FUN_100b0578(&DAT_3860ffff);
    FUN_10002040();
    FUN_100027a8(param_1[0x20]);
    FUN_10001548(local_34);
    FUN_100ee77c(auStack_148,2);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_2,auStack_268);
  uVar2 = FUN_100b0578(auStack_268);
  FUN_100027c0(uVar2,param_1[0x20]);
  if ((bVar3) && (sVar1 != 0)) {
    FUN_100ee64c(auStack_260);
    FUN_10001e48(local_14c);
    FUN_100b0578(&DAT_3860ffff);
    FUN_10002040();
    FUN_100027d8(param_1[0x20]);
    FUN_10001548(local_14c);
    FUN_100ee77c(auStack_260,2);
    FUN_10000540(2,unaff_r24,param_1[0x20]);
    *(undefined2 *)(*(int *)param_1[0x20] + 0x38) = unaff_r23;
  }
  FUN_101088b0(param_1,param_2);
  FUN_100ee8e8(auStack_270,2);
  return;
}



// Function: FUN_101033b8 at 101033b8
// Size: 72 bytes

void FUN_101033b8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10001b78(*(undefined4 *)(param_1 + 0x80));
  *param_2 = piVar1;
  *param_3 = *(undefined4 *)(*piVar1 + 4);
  return;
}



// Function: FUN_10103408 at 10103408
// Size: 216 bytes

void FUN_10103408(int param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_20 [3];
  
  piVar3 = local_20;
  FUN_100012d8(&DAT_7c0803a6,param_2,DAT_7c0803a6 + 1);
  piVar2 = *(int **)(param_1 + 0x84);
  if ((piVar2 != (int *)0x0) && (*(int **)(param_1 + 0x80) != (int *)0x0)) {
    iVar1 = (int)*(short *)(**(int **)(param_1 + 0x80) + 0x20);
    local_20[1] = 0xff;
    local_20[0] = *(short *)(**(int **)(param_1 + 0x80) + 0x22) - iVar1;
    if (0xff < local_20[0]) {
      piVar3 = local_20 + 1;
    }
    iVar4 = (int)(short)*piVar3;
    if (0 < iVar4) {
      *param_2 = (char)*piVar3;
      FUN_10002340(*piVar2 + iVar1,param_2 + 1,iVar4);
    }
  }
  return;
}



// Function: FUN_101034e0 at 101034e0
// Size: 156 bytes

int FUN_101034e0(int param_1)

{
  int iVar1;
  short sVar3;
  int iVar2;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    puVar4 = *(undefined4 **)(param_1 + 0x84);
    sVar3 = FUN_10001c20(puVar4);
    iVar5 = 0;
    if (0 < sVar3) {
      do {
        iVar2 = FUN_10001350(*puVar4,iVar5);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          iVar1 = (int)(short)((short)iVar1 + 1);
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < sVar3);
    }
  }
  return iVar1;
}



// Function: FUN_1010357c at 1010357c
// Size: 644 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1010357c(int *param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_13c [256];
  short local_3c;
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
  iVar3 = FUN_10000090(auStack_13c);
  uVar7 = 0;
  if (iVar3 == 0) {
    if (param_3 == 0x54455854) {
      uVar7 = FUN_10001c20(param_1[0x21]);
      if (param_2 != (undefined4 *)0x0) {
        FUN_100f16f8(param_2,uVar7);
        FUN_10002340(*(undefined4 *)param_1[0x21],*param_2,uVar7);
      }
    }
    else if (param_3 == 0x7374796c) {
      if (*(char *)((int)param_1 + 0xc3) == '\x01') {
        iVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x818),0,0x7fff);
        if (iVar3 == 0) {
          FUN_100db158(0,0);
        }
        else {
          sVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
          sVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
          FUN_101000e4(0,0x7fff);
          puVar4 = (undefined4 *)FUN_10000618(param_1[0x20]);
          FUN_101000e4((int)sVar1,(int)sVar2,param_1[0x20]);
          if (puVar4 == (undefined4 *)0x0) {
            if (param_2 != (undefined4 *)0x0) {
              FUN_100db158(0x97,0xffff0097);
            }
          }
          else {
            uVar7 = FUN_10001c20(puVar4);
            if (param_2 != (undefined4 *)0x0) {
              uVar5 = FUN_100f1574(1);
              uVar6 = FUN_100ef9b8(puVar4);
              iVar3 = FUN_10000630(*puVar4,param_2,uVar7);
              FUN_10001b60(puVar4,uVar6);
              FUN_100f1574(uVar5);
              if (iVar3 != 0) {
                FUN_100db158(0x97,0xffff0097);
              }
            }
            FUN_100ef510(puVar4);
          }
        }
      }
    }
    else {
      FUN_100db158(0xffffff9a,0);
    }
    FUN_100f12a8();
    _DAT_41820010 = local_34;
  }
  else {
    FUN_100ef510(0);
    FUN_100db158((int)local_3c,local_38);
  }
  return uVar7;
}



// Function: FUN_10103800 at 10103800
// Size: 552 bytes

void FUN_10103800(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_6c;
  int local_48;
  int iStack_44;
  int iStack_40;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  
  FUN_10000660(&local_38);
  FUN_10000198(**(undefined4 **)(local_6c + -0x98));
  local_48 = param_1[0x2c];
  iStack_44 = param_1[0x2d];
  iStack_40 = param_1[0x2e];
  FUN_100f0788(&local_48);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_34);
  uVar1 = FUN_100e1580(param_1 + 0x23,0);
  uVar2 = FUN_100e1580(auStack_34,0);
  FUN_100e1180(uVar2,uVar1);
  uVar1 = FUN_100e1580(param_1 + 0x23,1);
  uVar2 = FUN_100e1580(auStack_34,1);
  FUN_100e11a4(uVar2,uVar1);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_34,auStack_24);
  if (*(char *)((int)param_1 + 0xc3) == '\x01') {
    uVar1 = FUN_100b0578(auStack_24);
    uVar2 = FUN_100b0578(auStack_24);
    piVar3 = (int *)FUN_100026a0(uVar2,uVar1);
  }
  else {
    uVar1 = FUN_100b0578(auStack_24);
    uVar2 = FUN_100b0578(auStack_24);
    piVar3 = (int *)FUN_10000480(uVar2,uVar1);
  }
  FUN_10000198(local_38);
  FUN_100db26c(piVar3);
  param_1[0x20] = (int)piVar3;
  **(undefined4 **)(local_6c + -0x18) = *(undefined4 *)(*piVar3 + 0x2a);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x800),(int)*(short *)(param_1 + 0x30),0);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7d8),*(undefined1 *)(param_1 + 0x31),0);
  FUN_100f1228();
  iVar4 = *param_1;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0x5e8),*(undefined4 *)(iVar4 + 0x5ec))
  ;
  FUN_10117884((int)param_1 + (int)*(short *)(iVar4 + 0x340),uVar1);
  return;
}



// Function: FUN_10103a88 at 10103a88
// Size: 120 bytes

int FUN_10103a88(int *param_1,short param_2)

{
  int iVar1;
  
  if (*(short *)(*(int *)param_1[0x20] + 0x5e) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x780),(int)param_2);
    iVar1 = (int)*(short *)(*(int *)param_1[0x20] + iVar1 * 2 + 0x60);
  }
  return iVar1;
}



// Function: FUN_10103b8c at 10103b8c
// Size: 280 bytes

void FUN_10103b8c(int *param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short local_50;
  short local_4e;
  short local_4c;
  undefined2 local_4a;
  undefined4 local_3c;
  undefined1 auStack_34 [20];
  
  FUN_100b02d0(&local_3c);
  FUN_10000798((int)param_2,auStack_34,&local_50,&local_4e,param_1[0x20]);
  if (*(short *)(*(int *)param_1[0x20] + 0x3c) < 1) {
    uVar1 = FUN_100e1580(param_1 + 0x23,0);
    FUN_100e0f78(&local_3c,uVar1);
    local_3c = CONCAT22(local_3c._0_2_ + local_4e,local_3c._2_2_);
  }
  else {
    FUN_10002268(&local_4c,(int)param_2,param_1[0x20]);
    local_3c = CONCAT22(local_4c + (local_4e - local_50),local_4a);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x270),local_3c,param_3);
  return;
}



// Function: FUN_10103ca4 at 10103ca4
// Size: 128 bytes

void FUN_10103ca4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  
  FUN_100b02d0(auStack_20);
  FUN_10117884(auStack_20,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
  puVar1 = (undefined4 *)FUN_100b0368(auStack_18,auStack_20);
  FUN_100007c8(*puVar1,param_1[0x20]);
  return;
}



// Function: FUN_10103d24 at 10103d24
// Size: 52 bytes

void FUN_10103d24(int param_1)

{
  *(undefined1 *)(param_1 + 0xd4) = 0;
  FUN_10002a90(*(undefined4 *)(param_1 + 0x80));
  return;
}



// Function: FUN_10103d58 at 10103d58
// Size: 96 bytes

void FUN_10103d58(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x468),(int)*(char *)((int)param_1 + 0x46),
               2);
  *(undefined1 *)((int)param_1 + 0x46) = 2;
  FUN_100dab70(param_1);
  return;
}



// Function: FUN_10103db8 at 10103db8
// Size: 80 bytes

void FUN_10103db8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x758),0);
  FUN_100dabb8(param_1);
  return;
}



// Function: FUN_10103e08 at 10103e08
// Size: 388 bytes

void FUN_10103e08(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = param_1 + 0x8c;
  uVar2 = FUN_100e1580(iVar1,1);
  uVar3 = FUN_100e1594(param_2,1);
  FUN_100e10f8(&local_58,uVar3,uVar2);
  uVar2 = FUN_100e1580(iVar1,0);
  uVar3 = FUN_100e1594(param_2,0);
  FUN_100e10b0(&local_60,uVar3,uVar2);
  local_40 = local_60;
  local_3c = local_5c;
  local_38 = local_58;
  local_34 = local_54;
  uVar2 = FUN_100e1580(iVar1,1);
  uVar3 = FUN_100e1594(param_3,1);
  FUN_100e10f8(&local_68,uVar3,uVar2);
  uVar2 = FUN_100e1580(iVar1,0);
  uVar3 = FUN_100e1594(param_3,0);
  FUN_100e10b0(&local_70,uVar3,uVar2);
  local_50 = local_70;
  local_4c = local_6c;
  local_48 = local_68;
  local_44 = local_64;
  FUN_1010b65c(param_1,&local_40,&local_50);
  return;
}



// Function: FUN_10103f8c at 10103f8c
// Size: 576 bytes

void FUN_10103f8c(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_48;
  short local_46;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [8];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  short local_2a;
  
  local_40 = param_1[0xd];
  local_3c = param_1[0xe];
  FUN_1010b818(param_1,param_2,param_3);
  if ((param_1[0x20] != 0) && (iVar1 = FUN_100e11c8(param_1 + 0xd,&local_40), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_38);
    uVar2 = FUN_100e1580(param_1 + 0x23,0);
    FUN_100e0f78(auStack_58,uVar2);
    uVar2 = FUN_100e1580(param_1 + 0x23,1);
    FUN_100e0f78(auStack_60,uVar2);
    uVar2 = FUN_100b057c(auStack_38,1);
    FUN_100b0408(&local_48,uVar2,auStack_60);
    uVar2 = FUN_100b057c(auStack_38,0);
    FUN_100b039c(&local_50,uVar2,auStack_58);
    local_30 = local_50;
    local_2e = local_4e;
    local_2c = local_48;
    local_2a = local_46;
    if ((param_1[0xe] == local_3c) && (local_46 == *(short *)(*(int *)param_1[0x20] + 6))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),&local_30);
    if (bVar4) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),0);
      iVar1 = FUN_100ef628((int)*(short *)(param_1 + 0x30));
      if ((param_3 != '\0') &&
         ((((*(char *)(param_1 + 0x31) != '\0' &&
            (iVar3 = FUN_100e11c8(param_1 + 0xd,&local_40), iVar3 != 0)) || (iVar1 == -1)) ||
          (iVar1 == 1)))) {
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
      }
    }
  }
  return;
}



// Function: FUN_101041cc at 101041cc
// Size: 392 bytes

void FUN_101041cc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  int local_58;
  int iStack_54;
  int local_50 [2];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 auStack_38 [8];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  local_50[0] = param_1[0x15];
  local_58 = param_1[0x16];
  iStack_54 = param_1[0x17];
  FUN_1010d2f8(param_1);
  iVar1 = FUN_100b04bc(param_1 + 0x15,local_50);
  if (((iVar1 != 0) || (iVar1 = FUN_100e11c8(param_1 + 0x16,&local_58), iVar1 != 0)) &&
     (param_1[0x20] != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_38);
    uVar2 = FUN_100e1580(param_1 + 0x23,0);
    FUN_100e0f78(auStack_60,uVar2);
    uVar2 = FUN_100e1580(param_1 + 0x23,1);
    FUN_100e0f78(auStack_68,uVar2);
    uVar2 = FUN_100b057c(auStack_38,1);
    FUN_100b0408(&local_40,uVar2,auStack_68);
    uVar2 = FUN_100b057c(auStack_38,0);
    FUN_100b039c(&local_48,uVar2,auStack_60);
    local_30 = local_48;
    local_2e = local_46;
    local_2c = local_40;
    local_2a = local_3e;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),&local_30);
  }
  return;
}



// Function: FUN_10104354 at 10104354
// Size: 448 bytes

void FUN_10104354(int *param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  int local_68;
  int local_64 [5];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  undefined1 auStack_30 [4];
  int local_2c;
  
  piVar2 = &local_68;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5f0),0);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 == 0)) {
    if ((*(char *)(param_1 + 0x31) == '\0') && (param_1[0x20] != 0)) {
      FUN_100027f0(param_1[0x20]);
    }
  }
  else {
    if (param_1[3] == 0x7fffffff) {
      FUN_10117884((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x620),auStack_50);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7b8),auStack_30);
    iVar1 = FUN_100e1af8(auStack_50,auStack_30);
    if (iVar1 == 0) {
      local_64[0] = (int)*(short *)(param_1 + 0x34);
      local_68 = param_1[0xe] - local_2c;
      if ((int)*(short *)(param_1 + 0x34) < param_1[0xe] - local_2c) {
        piVar2 = local_64;
      }
      iVar1 = *piVar2;
      local_40 = FUN_100e1a3c(auStack_30,0);
      iStack_3c = iVar1;
      local_38 = local_40;
      local_34 = iVar1;
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_30,&local_40,param_2);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
    }
  }
  return;
}



// Function: FUN_10104514 at 10104514
// Size: 352 bytes

void FUN_10104514(int *param_1,short param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 auStack_38 [8];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  FUN_10002aa8((int)param_2,param_1[0x20]);
  *(short *)(param_1 + 0x30) = param_2;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_38);
  uVar1 = FUN_100e1580(param_1 + 0x23,0);
  FUN_100e0f78(auStack_50,uVar1);
  uVar1 = FUN_100e1580(param_1 + 0x23,1);
  FUN_100e0f78(auStack_58,uVar1);
  uVar1 = FUN_100b057c(auStack_38,1);
  FUN_100b0408(&local_40,uVar1,auStack_58);
  uVar1 = FUN_100b057c(auStack_38,0);
  FUN_100b039c(&local_48,uVar1,auStack_50);
  local_30 = local_48;
  local_2e = local_46;
  local_2c = local_40;
  local_2a = local_3e;
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x830),&local_30);
  if (param_3 != '\0') {
    FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
  }
  return;
}



// Function: FUN_10104674 at 10104674
// Size: 656 bytes

void FUN_10104674(int *param_1,short param_2,short param_3,short param_4,int *param_5,char param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 local_58 [2];
  undefined2 local_54 [4];
  undefined1 auStack_4c [8];
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3c;
  short local_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined2 local_32;
  undefined2 uStack_30;
  
  uVar5 = (uint)param_4;
  FUN_100ee844(auStack_4c,*(undefined1 *)((int)param_1 + 0xbe));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
  if (*(char *)((int)param_1 + 0xc3) == '\x01') {
    sVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
    sVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
    FUN_101000e4((int)param_2,(int)param_3);
    FUN_100008a0(uVar5,param_5,param_6,param_1[0x20]);
    FUN_101000e4((int)sVar1,(int)sVar2,param_1[0x20]);
  }
  else {
    if (uVar5 == 0xf) {
      local_3c = *param_5;
      local_38 = (short)((uint)param_5[1] >> 0x10);
      local_36 = (undefined2)param_5[1];
      uStack_34 = (undefined2)((uint)param_5[2] >> 0x10);
      local_32 = (undefined2)param_5[2];
    }
    else {
      local_3c = param_1[0x2c];
      local_38 = (short)((uint)param_1[0x2d] >> 0x10);
      local_36 = (undefined2)param_1[0x2d];
      uStack_34 = (undefined2)((uint)param_1[0x2e] >> 0x10);
      local_32 = (undefined2)param_1[0x2e];
      if ((uVar5 & 1) != 0) {
        local_3c = CONCAT22(*(undefined2 *)param_5,local_3c._2_2_);
        FUN_10000768();
        FUN_10002ee0();
      }
      if ((uVar5 & 2) != 0) {
        local_3c._2_2_ = CONCAT11(*(undefined1 *)((int)param_5 + 2),(undefined1)local_3c);
      }
      if ((uVar5 & 8) != 0) {
        local_32 = (undefined2)((uint)*(undefined4 *)((int)param_5 + 10) >> 0x10);
        local_36 = (undefined2)((uint)*(undefined4 *)((int)param_5 + 6) >> 0x10);
        uStack_34 = (undefined2)*(undefined4 *)((int)param_5 + 6);
        uStack_30 = 0;
      }
      if ((uVar5 & 0x10) == 0) {
        if ((uVar5 & 4) != 0) {
          local_38 = *(short *)(param_5 + 1);
        }
      }
      else {
        local_38 = local_38 + *(short *)(param_5 + 1);
      }
    }
    FUN_100eceb0(&local_3c,local_54,local_58);
    iVar3 = *(int *)param_1[0x20];
    *(short *)(iVar3 + 0x50) = local_38;
    *(undefined2 *)(iVar3 + 0x4a) = local_3c._0_2_;
    *(undefined1 *)(iVar3 + 0x4c) = local_3c._2_1_;
    *(undefined2 *)(iVar3 + 0x1a) = local_54[0];
    *(undefined2 *)(iVar3 + 0x18) = local_58[0];
    local_44 = local_36;
    local_42 = uStack_34;
    local_40 = local_32;
    FUN_100f0538(&local_44);
    param_1[0x2c] = local_3c;
    param_1[0x2d] = CONCAT22(local_38,local_36);
    param_1[0x2e] = CONCAT22(uStack_34,local_32);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  if ((param_6 == '\0') || (*(char *)((int)param_1 + 0xc3) != '\x01')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x770),uVar4);
  if ((param_6 != '\0') && (*(char *)((int)param_1 + 0xc3) == '\0')) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  *(undefined1 *)((int)param_1 + 0xc6) = 1;
  FUN_100ee8e8(auStack_4c,2);
  return;
}



// Function: FUN_10104904 at 10104904
// Size: 292 bytes

void FUN_10104904(int *param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 local_118;
  undefined1 uStack_114;
  undefined1 auStack_113 [255];
  
  if (param_1[0x20] != 0) {
    puVar1 = &uStack_114;
    if ((puVar1 != (undefined1 *)0x0) ||
       (puVar1 = (undefined1 *)FUN_100f56e4(0x100), puVar1 != (undefined1 *)0x0)) {
      FUN_100012d8(param_2,puVar1,*param_2 + 1);
    }
    uVar2 = FUN_100f1574(1);
    uVar3 = FUN_10001f98(auStack_113,&local_118,*param_2);
    FUN_100f1574(uVar2);
    FUN_100db2f4(uVar3);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x828),local_118);
    sVar4 = FUN_10001c20(local_118);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7c0),(int)sVar4,(int)sVar4,0);
  }
  return;
}



// Function: FUN_10104a28 at 10104a28
// Size: 88 bytes

void FUN_10104a28(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_1010c37c(param_1);
  return;
}



// Function: FUN_10104a80 at 10104a80
// Size: 200 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10104a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_130 [256];
  undefined2 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = _DAT_41820010;
  _DAT_41820010 = auStack_130;
  iVar1 = FUN_10000090(auStack_130);
  if (iVar1 != 0) {
    FUN_100d8e3c(0x97);
  }
  else {
    iVar2 = FUN_10002748(param_2,param_3,*(undefined4 *)(param_1 + 0x80));
    FUN_100f15e0(iVar2 * 0x14 + 2);
    FUN_100ef510();
    _DAT_41820010 = local_28;
  }
  return iVar1 == 0;
}



// Function: FUN_10104b48 at 10104b48
// Size: 204 bytes

void FUN_10104b48(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(char *)((int)param_1 + 0xc3) == '\x01') && (param_1[0x20] != 0)) {
    piVar1 = (int *)FUN_10001b78(param_1[0x20]);
    iVar2 = *piVar1;
    uVar3 = *(undefined4 *)(iVar2 + 8);
    piVar1 = *(int **)(iVar2 + 0x10);
    uVar4 = *(undefined4 *)(*piVar1 + 4);
    FUN_100ef510(*(undefined4 *)(iVar2 + 4));
    iVar2 = *param_2;
    *(undefined4 *)(iVar2 + 4) = param_3;
    *(undefined4 *)(iVar2 + 8) = uVar3;
    *(int **)(iVar2 + 0x10) = piVar1;
    *(undefined4 *)(*piVar1 + 4) = uVar4;
    *(int **)(iVar2 + 0xc) = param_1;
    FUN_100026e8(param_2,param_1[0x20]);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
  }
  return;
}



// Function: FUN_10104c14 at 10104c14
// Size: 428 bytes

void FUN_10104c14(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  if (param_1[0x20] != 0) {
    iVar1 = FUN_10001c20(param_2);
    iVar3 = *(int *)param_1[0x20];
    iVar4 = (int)*(short *)(iVar3 + 0x20);
    iVar5 = (int)*(short *)(iVar3 + 0x22);
    sVar6 = (short)iVar1;
    if ((iVar1 <= iVar4) || (*(short *)(iVar3 + 0x3c) <= iVar4)) {
      iVar4 = (int)sVar6;
    }
    if ((iVar1 <= iVar5) || (*(short *)(*(int *)param_1[0x20] + 0x3c) <= iVar5)) {
      iVar5 = (int)sVar6;
    }
    if (*(short *)(param_1 + 0x28) < iVar1) {
      FUN_100db158(0xffff8000,0);
    }
    if (*(char *)((int)param_1 + 0xc3) == '\x01') {
      FUN_101000e4(0,0x7fff,param_1[0x20]);
      local_28 = param_1[0x2c];
      iStack_24 = param_1[0x2d];
      iStack_20 = param_1[0x2e];
      FUN_100008a0(0xf,&local_28,0,param_1[0x20]);
    }
    if ((param_1[0x22] != param_2) && (*(int *)(*(int *)param_1[0x20] + 0x3e) != param_2)) {
      iVar1 = FUN_100ef510(param_1[0x22]);
      param_1[0x22] = iVar1;
      param_1[0x22] = *(int *)(*(int *)param_1[0x20] + 0x3e);
      *(int *)(*(int *)param_1[0x20] + 0x3e) = param_2;
    }
    param_1[0x21] = param_2;
    *(short *)(*(int *)param_1[0x20] + 0x3c) = sVar6;
    if (*(char *)((int)param_1 + 0xc3) == '\x01') {
      piVar2 = (int *)FUN_10001b78(param_1[0x20]);
      *(short *)(*piVar2 + 0x18) = *(short *)(*(int *)param_1[0x20] + 0x3c) + 1;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x7f8));
    FUN_101000e4(iVar4,iVar5,param_1[0x20]);
  }
  return;
}



// Function: FUN_10104dc0 at 10104dc0
// Size: 340 bytes

void FUN_10104dc0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  short local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  
  piVar3 = &local_58;
  FUN_100ee844(auStack_40,*(undefined1 *)(param_1 + 0xbe));
  local_50 = *(undefined4 *)(param_1 + 0xb0);
  uStack_4c = *(undefined4 *)(param_1 + 0xb4);
  uStack_48 = *(undefined4 *)(param_1 + 0xb8);
  FUN_100eceb0(&local_50,auStack_38,auStack_28);
  local_30 = *param_2;
  uStack_2c = param_2[1];
  iVar1 = FUN_100ef628((int)*(short *)(param_1 + 0xc0));
  if ((((*(char *)(param_1 + 0x45) == '\x04') && (iVar1 != 1)) &&
      (*(char *)(param_1 + 0xc3) == '\0')) && (*(char *)(param_1 + 0xc4) == '\0')) {
    if ((iVar1 == 0) || (iVar1 == -2)) {
      uStack_2c = CONCAT22(uStack_2c._0_2_,uStack_2c._2_2_ + local_34);
    }
    else {
      local_30 = CONCAT22(local_30._0_2_,local_30._2_2_ - local_34);
    }
  }
  else {
    local_54 = (int)uStack_2c._2_2_;
    local_58 = (int)local_30._2_2_ + (int)local_34;
    if ((int)local_30._2_2_ + (int)local_34 < (int)uStack_2c._2_2_) {
      piVar3 = &local_54;
    }
    uStack_2c = CONCAT22(uStack_2c._0_2_,(short)*piVar3);
  }
  puVar2 = (undefined4 *)**(int **)(param_1 + 0x80);
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  iVar1 = **(int **)(param_1 + 0x80);
  *(undefined4 *)(iVar1 + 8) = local_30;
  *(undefined4 *)(iVar1 + 0xc) = uStack_2c;
  FUN_100ee8e8(auStack_40,2);
  return;
}



// Function: FUN_10104f14 at 10104f14
// Size: 368 bytes

void FUN_10104f14(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x760));
  if (((*(char *)((int)param_1 + 0x45) == '\x04') && (*(char *)((int)param_1 + 0xc3) == '\0')) &&
     (*(char *)(param_1 + 0x31) == '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  iVar2 = 0;
  if (bVar4) {
    iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x768));
    iVar2 = iVar2 + 2;
  }
  if ((param_1[0x29] != iVar1) || ((bVar4 && (param_1[0x2a] != iVar2)))) {
    if (bVar4) {
      param_1[0x2a] = iVar2;
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x380));
    param_1[0x29] = iVar1;
  }
  if ((param_2 != '\0') &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),param_2);
    iVar1 = *param_1;
    uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x470));
    FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x468),1,uVar3);
  }
  return;
}



// Function: FUN_10105084 at 10105084
// Size: 284 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105084(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1c0),0x54455854,param_1[0x21]
              );
  FUN_100db2f4();
  if ((*(char *)((int)param_1 + 0xc3) == '\x01') &&
     (iVar3 = FUN_10117884((int)*(short *)(*param_1 + 0x818) + (int)param_1,0,0x7fff), iVar3 != 0))
  {
    sVar1 = *(short *)(*(int *)param_1[0x20] + 0x20);
    sVar2 = *(short *)(*(int *)param_1[0x20] + 0x22);
    FUN_101000e4(0,0x7fff);
    uVar4 = FUN_10000618(param_1[0x20]);
    FUN_101000e4((int)sVar1,(int)sVar2,param_1[0x20]);
    FUN_100db26c(uVar4);
    FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x1c0),0x7374796c,uVar4);
    FUN_100db2f4();
  }
  return;
}



// Function: FUN_101051a0 at 101051a0
// Size: 272 bytes

void FUN_101051a0(int *param_1,char param_2)

{
  int iVar1;
  int local_3c;
  undefined1 auStack_18 [12];
  
  FUN_100ee844(auStack_18,*(undefined1 *)((int)param_1 + 0xbe));
  if ((param_1[0x20] != 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 != 0)) {
    if (param_2 == '\0') {
      FUN_100027a8(param_1[0x20]);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x750));
      *(undefined1 *)((int)param_1 + 0xc6) = 1;
    }
    else {
      if (param_1[3] == 0x7fffffff) {
        FUN_10117884((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
      }
      FUN_10000768((int)*(short *)(param_1 + 0x2c));
      FUN_100f038c();
      FUN_100027d8(param_1[0x20]);
      **(int **)(local_3c + -0x1c) = (int)param_1;
    }
  }
  FUN_100ee8e8(auStack_18,2);
  return;
}



// Function: FUN_101052b0 at 101052b0
// Size: 112 bytes

void FUN_101052b0(int *param_1,char param_2)

{
  if ((param_2 != '\0') && (param_1[3] == 0x7fffffff)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x1b8) + (int)param_1,0);
  }
  FUN_100d9780(param_1,param_2);
  return;
}



// Function: FUN_10105320 at 10105320
// Size: 388 bytes

undefined4 FUN_10105320(int param_1,short param_2,short *param_3,short *param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  short local_38;
  short local_36;
  
  piVar7 = &local_48;
  piVar6 = &local_40;
  iVar5 = (int)param_2;
  *param_3 = param_2;
  *param_4 = param_2;
  if (iVar5 < 0) {
    uVar2 = 0;
  }
  else if (*(short *)(**(int **)(param_1 + 0x80) + 0x3c) + -1 < iVar5) {
    uVar2 = 0;
  }
  else {
    do {
      do {
        sVar1 = (short)iVar5;
        iVar5 = (int)(short)(sVar1 + 1);
        iVar3 = FUN_10001350(**(undefined4 **)(param_1 + 0x84));
      } while (iVar3 == -1);
    } while (iVar3 == 2);
    FUN_10002640(**(undefined4 **)(param_1 + 0x84),
                 (int)*(short *)(**(int **)(param_1 + 0x80) + 0x3c),(int)sVar1,1,0,&local_38);
    local_3c = (int)local_38;
    local_40 = local_36 + -1;
    if ((int)local_38 < local_36 + -1) {
      piVar6 = &local_3c;
    }
    *param_3 = (short)*piVar6;
    local_44 = (int)local_38;
    local_48 = local_36 + -1;
    if (local_36 + -1 < (int)local_38) {
      piVar7 = &local_44;
    }
    iVar5 = *piVar7;
    *param_4 = (short)iVar5;
    if (((int)*param_3 < (int)(short)iVar5) ||
       (uVar4 = FUN_100007f8(**(undefined4 **)(param_1 + 0x84),(int)*param_3),
       uVar4 != (((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0)) * 8)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_101054a4 at 101054a4
// Size: 60 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054a4(void)

{
  FUN_100c1c8c(&DAT_80410014,_DAT_7d8c4b78,0xd8,0x918b0014,&DAT_80410014);
  return;
}



// Function: FUN_101054e0 at 101054e0
// Size: 140 bytes

undefined4 * FUN_101054e0(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    FUN_100ebf7c(param_1,uVar1,param_3);
    *param_1 = &DAT_80010048;
  }
  return param_1;
}



// Function: FUN_1010556c at 1010556c
// Size: 136 bytes

undefined4 * FUN_1010556c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100eb910(0x134), param_1 != (undefined4 *)0x0)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    FUN_100ebf7c(param_1,uVar1,1);
    *param_1 = &DAT_80010048;
  }
  return param_1;
}



// Function: FUN_101055f4 at 101055f4
// Size: 108 bytes

void FUN_101055f4(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_80010048;
    FUN_100ebff4(param_1,0);
    if ((param_1 != (undefined4 *)0x0) && ((param_2 & 1) != 0)) {
      FUN_100eb918(param_1);
    }
  }
  return;
}



// Function: FUN_10105660 at 10105660
// Size: 36 bytes

void FUN_10105660(void)

{
  FUN_100ec060();
  return;
}



// Function: FUN_10105684 at 10105684
// Size: 36 bytes

void FUN_10105684(void)

{
  FUN_100ec0e8();
  return;
}



// Function: FUN_101056a8 at 101056a8
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101056a8(undefined4 param_1)

{
  if ((DAT_a8bf0002 == '\0') && (DAT_4086000c == '\0')) {
    FUN_10002be0(param_1,*(undefined4 *)(_DAT_80a2db8e + 0x18),param_1);
  }
  return;
}



// Function: FUN_10105704 at 10105704
// Size: 56 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105704(undefined4 param_1)

{
  FUN_10002be0(param_1,*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_1);
  return;
}



// Function: FUN_1010573c at 1010573c
// Size: 144 bytes

void FUN_1010573c(undefined4 param_1,undefined4 param_2)

{
  short sStack00000018;
  short sStack0000001a;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  _sStack00000018 = param_1;
  FUN_100ee64c(auStack_128);
  FUN_10000600(local_14,(int)sStack0000001a,(int)sStack00000018,(int)(short)(sStack0000001a + 1),
               (int)(short)(sStack00000018 + 1));
  FUN_10003060(local_14,param_2,param_2);
  FUN_100ee77c(auStack_128,2);
  return;
}



// Function: FUN_101057cc at 101057cc
// Size: 100 bytes

void FUN_101057cc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  FUN_10000660(param_1 + 1);
  FUN_10001e48(param_1[2]);
  puVar1 = (undefined4 *)FUN_100b057c(param_1[1] + 0x10,0);
  *param_1 = *puVar1;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



// Function: FUN_10105830 at 10105830
// Size: 100 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105830(undefined1 *param_1)

{
  FUN_101057cc(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = _DAT_60bc0000;
  *param_1 = DAT_a8bf0002;
  param_1[1] = DAT_4086000c;
  *(undefined4 *)(param_1 + 4) = _DAT_2c850000;
  return;
}



// Function: FUN_10105894 at 10105894
// Size: 140 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105894(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_80a2db8e != *(int *)(param_1 + 2)) {
    FUN_10000198(*(int *)(param_1 + 2));
  }
  uVar1 = FUN_100b057c(_DAT_80a2db8e + 0x10,0);
  iVar2 = FUN_100b04bc(uVar1,param_1);
  if (iVar2 != 0) {
    FUN_10002028((int)param_1[1],(int)*param_1);
  }
  FUN_10001548(*(undefined4 *)(param_1 + 4));
  return;
}



// Function: FUN_10105920 at 10105920
// Size: 92 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105920(undefined1 *param_1)

{
  _DAT_60bc0000 = *(undefined4 *)(param_1 + 8);
  DAT_a8bf0002 = *param_1;
  DAT_4086000c = param_1[1];
  _DAT_2c850000 = *(undefined4 *)(param_1 + 4);
  FUN_10105894(param_1 + 0xc);
  return;
}



// Function: FUN_1010597c at 1010597c
// Size: 8 bytes

undefined1 * FUN_1010597c(void)

{
  return &DAT_80410014;
}



// Function: FUN_1010598c at 1010598c
// Size: 340 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1010598c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)FUN_100f56e4(0x80), param_1 != (undefined4 *)0x0)) {
    FUN_100c604c(param_1);
    *param_1 = &DAT_30210040;
    FUN_100b02d0(param_1 + 0x15);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    uVar1 = _DAT_4182001c;
    param_1[0xb] = _DAT_41820018;
    param_1[0xc] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0xd] = _DAT_41820018;
    param_1[0xe] = uVar1;
    uVar1 = _DAT_4182001c;
    param_1[0xf] = _DAT_41820018;
    param_1[0x10] = uVar1;
    *(undefined1 *)((int)param_1 + 0x45) = 4;
    *(undefined1 *)(param_1 + 0x11) = 4;
    *(undefined1 *)((int)param_1 + 0x46) = 4;
    *(undefined1 *)((int)param_1 + 0x47) = 2;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined1 *)((int)param_1 + 0x49) = 1;
    *(undefined1 *)((int)param_1 + 0x4a) = 1;
    *(undefined1 *)((int)param_1 + 0x4b) = 1;
    *(undefined2 *)(param_1 + 0x13) = 0xffff;
    *(undefined2 *)((int)param_1 + 0x4e) = 0xffff;
    *(undefined2 *)(param_1 + 0x14) = 1;
    *(undefined1 *)((int)param_1 + 0x52) = 1;
    *(undefined1 *)((int)param_1 + 0x53) = 0;
    param_1[0x15] = _DAT_63e30000;
    uVar1 = _DAT_4182001c;
    param_1[0x16] = _DAT_41820018;
    param_1[0x17] = uVar1;
    uVar3 = _DAT_809f0010;
    uVar2 = _DAT_809f000c;
    uVar1 = _DAT_809f0008;
    param_1[0x18] = _DAT_809f0004;
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined2 *)(param_1 + 0x1f) = 0x300;
  }
  return param_1;
}



// Function: FUN_10105ae0 at 10105ae0
// Size: 40 bytes

void FUN_10105ae0(void)

{
  FUN_1010598c(0);
  return;
}



// Function: FUN_10105b08 at 10105b08
// Size: 296 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105b08(int *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
                 undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined1 auStack_140 [256];
  short local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_100c60e4(param_1,param_3);
  iVar1 = param_4[1];
  param_1[0xb] = *param_4;
  param_1[0xc] = iVar1;
  iVar1 = param_5[1];
  param_1[0xd] = *param_5;
  param_1[0xe] = iVar1;
  *(undefined1 *)((int)param_1 + 0x45) = param_6;
  *(undefined1 *)(param_1 + 0x11) = param_7;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = _DAT_41820010;
  _DAT_41820010 = auStack_140;
  iVar1 = FUN_10000090(auStack_140);
  if (iVar1 == 0) {
    if (param_3 != (int *)0x0) {
      FUN_10117884((int)*(short *)(*param_3 + 0x2e0) + (int)param_3,param_1);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x330),param_2);
    _DAT_41820010 = local_38;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_40,local_3c);
  }
  return;
}



// Function: FUN_10105c30 at 10105c30
// Size: 248 bytes

void FUN_10105c30(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [312];
  
  if (param_1[10] == 0) {
    FUN_10117884((int)*(short *)(*param_1 + 0x330) + (int)param_1,param_2);
  }
  FUN_1010556c(auStack_148,param_1);
  piVar1 = (int *)FUN_10105660(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x238),param_2);
    piVar1 = (int *)FUN_10105684(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x240),param_2);
  FUN_101055f4(auStack_148,2);
  return;
}



// Function: FUN_10105d28 at 10105d28
// Size: 4 bytes

void FUN_10105d28(void)

{
  return;
}



// Function: FUN_10105d2c at 10105d2c
// Size: 820 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10105d2c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_4c8 [312];
  undefined1 auStack_390 [256];
  short local_290;
  undefined4 local_28c;
  undefined1 *local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 auStack_278 [4];
  undefined4 local_274;
  int *local_140;
  undefined1 auStack_13c [256];
  short local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_140 = (int *)FUN_100c6108(param_1);
  local_140[8] = 0;
  local_140[9] = 0;
  local_140[0x1c] = 0;
  local_140[0x1d] = 0;
  local_140[1] = 0;
  local_140[10] = 0;
  local_290 = 0;
  local_28c = 0;
  local_284 = 0;
  local_280 = 0;
  local_288 = _DAT_41820010;
  _DAT_41820010 = auStack_390;
  iVar1 = FUN_10000090(auStack_390);
  if (iVar1 == 0) {
    FUN_1010556c(auStack_4c8,param_1);
    piVar2 = (int *)FUN_10105660(auStack_4c8);
    iVar1 = FUN_100ebf44(auStack_4c8);
    while (iVar1 != 0) {
      piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x88));
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_34 = _DAT_41820010;
      _DAT_41820010 = auStack_13c;
      iVar1 = FUN_10000090(auStack_13c);
      if (iVar1 == 0) {
        FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x2e0),piVar2);
        _DAT_41820010 = local_34;
      }
      else {
        FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
        FUN_100db158((int)local_3c,local_38);
      }
      piVar2 = (int *)FUN_10105684(auStack_4c8);
      iVar1 = FUN_100ebf44(auStack_4c8);
    }
    FUN_101055f4(auStack_4c8,2);
    piVar2 = *(int **)(param_1 + 0x70);
    if (piVar2 != (int *)0x0) {
      iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x88));
      local_140[0x1c] = iVar1;
    }
    FUN_100b236c(auStack_278,param_1);
    piVar2 = (int *)FUN_100b2460(auStack_278);
    iVar1 = FUN_100ebf44(auStack_278);
    while (iVar1 != 0) {
      uVar3 = FUN_10117884((int)*(int **)(param_1 + 0x74) +
                           (int)*(short *)(**(int **)(param_1 + 0x74) + 0x128),local_274);
      if (*(char *)(piVar2 + 2) == '\0') {
        FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x3f0),piVar2,uVar3,0);
      }
      else {
        uVar4 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x88));
        FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x3f0),uVar4,uVar3,0);
      }
      piVar2 = (int *)FUN_100b24e8(auStack_278);
      iVar1 = FUN_100ebf44(auStack_278);
    }
    FUN_100b23f4(auStack_278,2);
    _DAT_41820010 = local_288;
  }
  else {
    FUN_10117884((int)local_140 + (int)*(short *)(*local_140 + 0x90));
    FUN_100db158((int)local_290,local_28c);
  }
  return local_140;
}



// Function: FUN_10106060 at 10106060
// Size: 584 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106060(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_288 [312];
  undefined1 auStack_150 [316];
  
  FUN_1010556c(auStack_150,param_1);
  piVar1 = (int *)FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x90));
    piVar1 = (int *)FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_101055f4(auStack_150,2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
  FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x450));
  piVar1 = (int *)FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x340));
  if (param_1 == piVar1) {
    FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x338),_DAT_28030000);
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x2e8) + (int)piVar1,param_1);
    param_1[8] = 0;
  }
  iVar2 = FUN_100f57c8(param_1[0x1c]);
  param_1[0x1c] = iVar2;
  if (param_1[0x1d] != 0) {
    FUN_100b236c(auStack_288,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_288);
    iVar2 = FUN_100ebf44(auStack_288);
    while (iVar2 != 0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0),param_1);
      piVar1 = (int *)FUN_100b24e8(auStack_288);
      iVar2 = FUN_100ebf44(auStack_288);
    }
    FUN_100b23f4(auStack_288,2);
  }
  iVar2 = FUN_100f57c8(param_1[0x1d]);
  param_1[0x1d] = iVar2;
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)*(short *)(*piVar1 + 0x338) + (int)piVar1,param_1);
    param_1[10] = 0;
  }
  FUN_100c6134(param_1);
  return;
}



// Function: FUN_101062a8 at 101062a8
// Size: 556 bytes

void FUN_101062a8(undefined4 param_1,undefined4 param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [312];
  undefined1 auStack_158 [312];
  
  iVar4 = (int)param_4;
  iVar3 = (int)param_3;
  FUN_10000030();
  FUN_10000000(auStack_2a8);
  if (((iVar3 == 4) && ((iVar4 == 2 || (iVar4 == 1)))) || ((iVar3 == 2 && (iVar4 == 1)))) {
    FUN_100b22e0(auStack_290,param_1,0);
    piVar1 = (int *)FUN_100b2460(auStack_290);
    iVar2 = FUN_100ebf44(auStack_290);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0),param_1);
      if (iVar2 != 0) {
        FUN_100016f8(auStack_2a8);
        FUN_10117884((int)*(short *)(*piVar1 + 200) + (int)piVar1,param_1,param_2,iVar3,iVar4);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_290);
      iVar2 = FUN_100ebf44(auStack_290);
    }
    FUN_100b23f4(auStack_290,2);
  }
  else if ((((iVar3 == 1) || (iVar3 == 2)) && (iVar4 == 4)) || ((iVar3 == 1 && (iVar4 == 2)))) {
    FUN_100b236c(auStack_158,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_158);
    iVar2 = FUN_100ebf44(auStack_158);
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xe0),param_1);
      if (iVar2 != 0) {
        FUN_100016f8(auStack_2a8);
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 200),param_1,param_2,iVar3,iVar4);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_158);
      iVar2 = FUN_100ebf44(auStack_158);
    }
    FUN_100b23f4(auStack_158,2);
  }
  return;
}



// Function: FUN_101064d4 at 101064d4
// Size: 356 bytes

void FUN_101064d4(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [312];
  
  if ((param_1[0x1d] != 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x678) + (int)param_1), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x630) + (int)param_1,auStack_158);
    if (param_2 == '\0') {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x498),auStack_158,
                   (int)*(char *)((int)param_1 + 0x46),(int)*(char *)((int)param_1 + 0x47));
    }
    else {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x498),auStack_158,
                   (int)*(char *)((int)param_1 + 0x47),(int)*(char *)((int)param_1 + 0x46));
    }
  }
  FUN_1010556c(auStack_148,param_1);
  piVar2 = (int *)FUN_10105660(auStack_148);
  iVar1 = FUN_100ebf44(auStack_148);
  while (iVar1 != 0) {
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x318),param_2);
    piVar2 = (int *)FUN_10105684(auStack_148);
    iVar1 = FUN_100ebf44(auStack_148);
  }
  FUN_101055f4(auStack_148,2);
  return;
}



// Function: FUN_10106638 at 10106638
// Size: 212 bytes

void FUN_10106638(int *param_1,int *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_100f5754(0);
  piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 1000));
  param_1[0x1d] = (int)piVar2;
  FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x118),param_2,(int)param_3);
  FUN_100f5754(uVar1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xa8),param_1);
  if (param_4 != '\0') {
    FUN_10117884((int)*(short *)(*param_2 + 0xd0) + (int)param_2,param_1);
  }
  return;
}



// Function: FUN_1010670c at 1010670c
// Size: 376 bytes

void FUN_1010670c(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_174;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  
  if (param_1[0x1d] != 0) {
    FUN_100b236c(auStack_150,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      if (piVar1 == param_2) {
        if (param_3 != '\0') {
          FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_1);
        }
        FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xb0),param_1);
        FUN_10117884(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 200),local_14c,1);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    iVar2 = FUN_10117884(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 0xa8));
    if ((iVar2 == 1) &&
       (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x408),1),
       iVar2 == **(int **)(local_174 + -0xe8))) {
      iVar2 = FUN_100f57c8(param_1[0x1d]);
      param_1[0x1d] = iVar2;
    }
    FUN_100b23f4(auStack_150,2);
  }
  return;
}



// Function: FUN_10106884 at 10106884
// Size: 380 bytes

void FUN_10106884(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int local_174;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  
  if (param_1[0x1d] != 0) {
    FUN_100b236c(auStack_150,param_1);
    piVar1 = (int *)FUN_100b2460(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      if (piVar1[1] == param_2) {
        if (param_3 != '\0') {
          FUN_10117884((int)*(short *)(*piVar1 + 0xd0) + (int)piVar1,param_1);
        }
        FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0),param_1);
        FUN_10117884(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 200),local_14c,1);
      }
      piVar1 = (int *)FUN_100b24e8(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    iVar2 = FUN_10117884(param_1[0x1d] + (int)*(short *)(*(int *)param_1[0x1d] + 0xa8));
    if ((iVar2 == 1) &&
       (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x408),1),
       iVar2 == **(int **)(local_174 + -0xe8))) {
      iVar2 = FUN_100f57c8(param_1[0x1d]);
      param_1[0x1d] = iVar2;
    }
    FUN_100b23f4(auStack_150,2);
  }
  return;
}



// Function: FUN_10106a00 at 10106a00
// Size: 76 bytes

undefined4 FUN_10106a00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x74) +
                         (int)*(short *)(**(int **)(param_1 + 0x74) + 0x120));
  }
  return uVar1;
}



// Function: FUN_10106a4c at 10106a4c
// Size: 208 bytes

int FUN_10106a4c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_148 [316];
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_100b236c(auStack_148,param_1);
    iVar1 = FUN_100b2460(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      if (*(int *)(iVar1 + 4) == param_2) {
        FUN_100b23f4(auStack_148,2);
        return iVar1;
      }
      iVar1 = FUN_100b24e8(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_100b23f4(auStack_148,2);
  }
  return 0;
}



// Function: FUN_10106b1c at 10106b1c
// Size: 120 bytes

void FUN_10106b1c(int *param_1)

{
  int local_34;
  undefined1 auStack_10 [12];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_10);
  FUN_10002118(*(int *)(local_34 + -0xb0) + 0xb2);
  FUN_10002130(0xb);
  FUN_100b0578(auStack_10);
  FUN_10002148();
  return;
}



// Function: FUN_10106b94 at 10106b94
// Size: 56 bytes

void FUN_10106b94(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600));
  return;
}



// Function: FUN_10106bd4 at 10106bd4
// Size: 92 bytes

void FUN_10106bd4(int *param_1)

{
  undefined1 auStack_10 [12];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_10);
  FUN_100b0578(auStack_10);
  FUN_10001da0();
  return;
}



// Function: FUN_10106c30 at 10106c30
// Size: 252 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10106c30(int param_1)

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
  
  piVar2 = *(int **)(param_1 + 0x74);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_100b4540(0);
    FUN_100b45d0();
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_1c = _DAT_41820010;
    _DAT_41820010 = auStack_124;
    iVar1 = FUN_10000090(auStack_124);
    if (iVar1 == 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x118),
                   **(undefined4 **)(local_14c + -0xe8),0x40);
      _DAT_41820010 = local_1c;
    }
    else {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x90));
      FUN_100db158((int)local_24,local_20);
    }
  }
  return piVar2;
}



// Function: FUN_10106d2c at 10106d2c
// Size: 72 bytes

void FUN_10106d2c(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x710));
  }
  return;
}



// Function: FUN_10106d74 at 10106d74
// Size: 188 bytes

void FUN_10106d74(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    if (param_1[9] == 0) {
      iVar1 = FUN_100e9174();
      param_1[9] = iVar1;
    }
    FUN_10117884(param_1[9] + (int)*(short *)(*(int *)param_1[9] + 0x1d0),param_2);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x720),param_1);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x710),param_2);
  }
  return;
}



// Function: FUN_10106e78 at 10106e78
// Size: 372 bytes

void FUN_10106e78(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_170 [4];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_150 [316];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618),&local_160);
  puVar1 = local_170;
  if ((local_170 != (undefined4 *)0x0) ||
     (puVar1 = (undefined4 *)FUN_100f56e4(0x10), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = local_160;
    puVar1[1] = local_15c;
    puVar1[2] = local_158;
    puVar1[3] = local_154;
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x390),local_170);
  iVar2 = FUN_100e1750(local_170,&local_160);
  if (iVar2 == 0) {
    FUN_1010556c(auStack_150,param_1);
    piVar3 = (int *)FUN_10105660(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x380));
      piVar3 = (int *)FUN_10105684(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x350),local_170,1);
  }
  return;
}



// Function: FUN_10106ff0 at 10106ff0
// Size: 204 bytes

void FUN_10106ff0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [312];
  
  FUN_1010556c(auStack_148,param_1);
  piVar1 = (int *)FUN_10105660(auStack_148);
  iVar2 = FUN_100ebf44(auStack_148);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x340),param_2);
    piVar1 = (int *)FUN_10105684(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3e0));
  FUN_101055f4(auStack_148,2);
  return;
}



// Function: FUN_101070bc at 101070bc
// Size: 88 bytes

void FUN_101070bc(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_2 != *(int **)(param_1 + 0x28))) {
    *(int **)(param_1 + 0x28) = param_2;
    FUN_10117884((int)*(short *)(*param_2 + 800) + (int)param_2,param_1);
  }
  return;
}



// Function: FUN_10107114 at 10107114
// Size: 108 bytes

void FUN_10107114(int param_1,int *param_2)

{
  undefined1 auStack_10 [8];
  
  if (param_2 != (int *)0x0) {
    FUN_100e10b0(auStack_10,param_1 + 0x34,param_1 + 0x2c);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x740),auStack_10,0);
  }
  return;
}



// Function: FUN_10107180 at 10107180
// Size: 228 bytes

void FUN_10107180(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[8] != param_2) {
    iVar2 = param_1[8];
    param_1[8] = param_2;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b8));
    if (param_2 == 0) {
      if (param_1[1] == iVar2) {
        param_1[1] = 0;
      }
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x340),0);
    }
    else {
      if (param_1[1] == 0) {
        param_1[1] = param_2;
      }
      iVar2 = *param_1;
      uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x5e8),
                           *(undefined4 *)(iVar2 + 0x5ec));
      FUN_10117884((int)param_1 + (int)*(short *)(iVar2 + 0x340),uVar1);
    }
  }
  return;
}



// Function: FUN_10107264 at 10107264
// Size: 256 bytes

int * FUN_10107264(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_140 [312];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x140));
  if (iVar1 == 0) {
    FUN_1010556c(auStack_140,param_1);
    piVar2 = (int *)FUN_10105660(auStack_140);
    iVar1 = FUN_100ebf44(auStack_140);
    while (iVar1 != 0) {
      piVar2 = (int *)FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x6a8));
      if (piVar2 != (int *)0x0) {
        FUN_101055f4(auStack_140,2);
        return piVar2;
      }
      piVar2 = (int *)FUN_10105684(auStack_140);
      iVar1 = FUN_100ebf44(auStack_140);
    }
    FUN_101055f4(auStack_140,2);
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Function: FUN_10107364 at 10107364
// Size: 60 bytes

void FUN_10107364(int *param_1,undefined1 param_2)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4b8),param_2);
  return;
}



// Function: FUN_101073a8 at 101073a8
// Size: 272 bytes

undefined4 FUN_101073a8(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [316];
  
  if (param_2 != (int *)0x0) {
    FUN_1010556c(auStack_148,param_1);
    piVar1 = (int *)FUN_10105660(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      if (piVar1 == param_2) {
        FUN_101055f4(auStack_148,2);
        return 1;
      }
      iVar2 = FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x310),param_2);
      if (iVar2 != 0) {
        FUN_101055f4(auStack_148,2);
        return 1;
      }
      piVar1 = (int *)FUN_10105684(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
  }
  return 0;
}



// Function: FUN_101074b8 at 101074b8
// Size: 56 bytes

void FUN_101074b8(int *param_1)

{
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x618));
  return;
}



// Function: FUN_101074f0 at 101074f0
// Size: 208 bytes

void FUN_101074f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sStack00000020;
  short sStack00000022;
  int local_14c;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  _sStack00000020 = param_3;
  FUN_100ee64c(auStack_128);
  uVar1 = local_14;
  uVar2 = FUN_100b0578(param_2);
  FUN_10003150(uVar1,uVar2);
  FUN_10002be0(*(undefined4 *)(*(int *)(*(int *)(local_14c + -0xb0) + 0xca) + 0x1c),local_14,
               local_14);
  iVar3 = FUN_100b04bc(&stack0x00000020,*(undefined4 *)(local_14c + -0xe60));
  if (iVar3 != 0) {
    FUN_10001ec0(local_14,(int)sStack00000022,(int)sStack00000020);
  }
  FUN_10001548(local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}



// Function: FUN_101075c0 at 101075c0
// Size: 204 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101075c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  short sStack00000020;
  short sStack00000022;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  _sStack00000020 = param_3;
  FUN_100ee64c(auStack_128);
  iVar2 = FUN_100b04bc(&stack0x00000020,&DAT_63e30000);
  if (iVar2 != 0) {
    FUN_10001ec0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),(int)sStack00000022,(int)sStack00000020);
  }
  uVar1 = local_14;
  uVar3 = FUN_100b0578(param_2);
  FUN_10003150(uVar1,uVar3);
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),local_14,local_14);
  FUN_10001548(local_14);
  FUN_100ee77c(auStack_128,2);
  return;
}



// Function: FUN_1010768c at 1010768c
// Size: 204 bytes

void FUN_1010768c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_140 [312];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x38),0x1c,param_1);
  FUN_1010556c(auStack_140,param_1);
  piVar1 = (int *)FUN_10105660(auStack_140);
  iVar2 = FUN_100ebf44(auStack_140);
  while (iVar2 != 0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x328));
    piVar1 = (int *)FUN_10105684(auStack_140);
    iVar2 = FUN_100ebf44(auStack_140);
  }
  FUN_101055f4(auStack_140,2);
  return;
}



// Function: FUN_10107758 at 10107758
// Size: 288 bytes

void FUN_10107758(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [16];
  
  bVar1 = false;
  uVar6 = 0;
  do {
    if (*(byte *)((int)param_1 + uVar6 + 0x44) < 6) {
      return;
    }
    if (!bVar1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x388),auStack_48);
      bVar1 = true;
    }
    FUN_100e1a64(auStack_78,auStack_48);
    piVar2 = (int *)FUN_100e1088(auStack_78,uVar6);
    iVar4 = *piVar2;
    uVar3 = FUN_100e1580(param_2,0);
    piVar2 = (int *)FUN_100e1088(uVar3,uVar6);
    iVar5 = *piVar2;
    uVar3 = FUN_100e1580(param_2,1);
    piVar2 = (int *)FUN_100e1088(uVar3,uVar6);
    *piVar2 = iVar5 + iVar4;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 2);
  return;
}



// Function: FUN_10107a94 at 10107a94
// Size: 148 bytes

undefined4 FUN_10107a94(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x668));
  if ((iVar1 == 0) || (iVar1 = FUN_100e1aac(auStack_20,param_2), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10107b28 at 10107b28
// Size: 88 bytes

int FUN_10107b28(int param_1)

{
  int iVar1;
  short sVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = 0;
  }
  else {
    sVar2 = FUN_10117884((int)*(int **)(param_1 + 0x24) +
                         (int)*(short *)(**(int **)(param_1 + 0x24) + 0xa8));
    iVar1 = (int)sVar2;
  }
  return iVar1;
}



// Function: FUN_10107b80 at 10107b80
// Size: 132 bytes

undefined4 FUN_10107b80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0xe0) + (int)param_1), iVar1 == 0)) &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x570)), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10107c04 at 10107c04
// Size: 100 bytes

undefined4 FUN_10107c04(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((*(char *)(param_1 + 0x49) == '\0') ||
      (piVar2 = *(int **)(param_1 + 0x24), piVar2 == (int *)0x0)) ||
     (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0xf0) + (int)piVar2), iVar1 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_10107c68 at 10107c68
// Size: 92 bytes

undefined4 FUN_10107c68(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)param_1 + 0x4a) == '\0') &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x580) + (int)param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10107cc4 at 10107cc4
// Size: 100 bytes

undefined4 FUN_10107cc4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((*(char *)(param_1 + 0x4b) == '\0') ||
      (piVar2 = *(int **)(param_1 + 0x24), piVar2 == (int *)0x0)) ||
     (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0xf0) + (int)piVar2), iVar1 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_10107d2c at 10107d2c
// Size: 92 bytes

int FUN_10107d2c(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x680));
  if (iVar1 == 0) {
    cVar2 = *(char *)((int)param_1 + 0x47);
  }
  else {
    cVar2 = *(char *)((int)param_1 + 0x46);
  }
  return (int)cVar2;
}



// Function: FUN_10107d90 at 10107d90
// Size: 236 bytes

void FUN_10107d90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5b8));
  if (iVar1 == -1) {
    FUN_100014a0(0x80a2db22);
  }
  else {
    FUN_10117884(auStack_28,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
    puVar2 = (undefined4 *)FUN_100b0368(auStack_20,auStack_28);
    iVar3 = FUN_100033c0(*puVar2,param_3);
    if (iVar3 == 0) {
      FUN_100014a0(0x80a2db22);
    }
    else {
      puVar2 = (undefined4 *)FUN_10001470(iVar1);
      FUN_100db2a4();
      FUN_100014a0(*puVar2);
    }
  }
  return;
}



// Function: FUN_10107e7c at 10107e7c
// Size: 212 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107e7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,short param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack00000028;
  undefined1 auStack_20 [8];
  
  uStack00000028 = param_5;
  FUN_100b0384(&stack0x00000028);
  FUN_10002fd0();
  puVar1 = (undefined4 *)FUN_100b0368(auStack_20,&stack0x00000028);
  iVar2 = FUN_100000f0(param_4,*puVar1,0,0,0,(int)param_7,0);
  if (iVar2 != -0x355) {
    FUN_100db2f4(iVar2);
  }
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x18),param_3,param_3);
  FUN_10002be0(*(undefined4 *)(_DAT_80a2db8e + 0x1c),param_3,param_3);
  return;
}



// Function: FUN_10107f60 at 10107f60
// Size: 344 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107f60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  short local_260 [2];
  undefined1 auStack_25c [264];
  undefined4 local_154 [2];
  undefined1 auStack_14c [8];
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_100b02d0(local_154);
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  if (iVar1 != -1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x5e0) + (int)param_1,param_2,param_3);
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_3c = _DAT_41820010;
    _DAT_41820010 = auStack_144;
    iVar1 = FUN_10000090(auStack_144);
    if (iVar1 == 0) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5c0),param_2,param_3,auStack_25c,
                   local_154,auStack_14c,local_260);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5c8),param_2,param_3,auStack_25c,
                   local_154[0],auStack_14c,(int)local_260[0]);
      _DAT_41820010 = local_3c;
    }
    else if (local_44 != -0x359) {
      FUN_100db158((int)local_44,local_40);
    }
  }
  return;
}



// Function: FUN_101080b8 at 101080b8
// Size: 416 bytes

void FUN_101080b8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_268 [312];
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x608),param_3);
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x570));
  if (iVar2 != 0) {
    FUN_100ee64c(auStack_130);
    FUN_1010556c(auStack_268,param_1);
    piVar3 = (int *)FUN_10105660(auStack_268);
    iVar2 = FUN_100ebf44(auStack_268);
    bVar1 = false;
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x568));
      if ((iVar2 != 0) && (!bVar1)) {
        FUN_10117884((int)*(short *)(*piVar3 + 0x608) + (int)piVar3,local_1c);
        FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,local_1c);
        FUN_10000108(param_3,local_1c,param_3);
        iVar2 = FUN_10001c20(param_3);
        if ((0x4000 < iVar2) || (iVar2 = FUN_10002b20(), iVar2 != 0)) {
          FUN_10000138(param_3);
          bVar1 = true;
        }
      }
      piVar3 = (int *)FUN_10105684(auStack_268);
      iVar2 = FUN_100ebf44(auStack_268);
    }
    FUN_101055f4(auStack_268,2);
    FUN_100ee77c(auStack_130,2);
  }
  return;
}



// Function: FUN_10108258 at 10108258
// Size: 416 bytes

void FUN_10108258(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_268 [312];
  undefined1 auStack_130 [276];
  undefined4 local_1c;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x608),param_3);
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x580));
  if (iVar2 != 0) {
    FUN_100ee64c(auStack_130);
    FUN_1010556c(auStack_268,param_1);
    piVar3 = (int *)FUN_10105660(auStack_268);
    iVar2 = FUN_100ebf44(auStack_268);
    bVar1 = false;
    while (iVar2 != 0) {
      iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x578));
      if ((iVar2 != 0) && (!bVar1)) {
        FUN_10117884((int)*(short *)(*piVar3 + 0x608) + (int)piVar3,local_1c);
        FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,local_1c);
        FUN_10000108(param_3,local_1c,param_3);
        iVar2 = FUN_10001c20(param_3);
        if ((0x4000 < iVar2) || (iVar2 = FUN_10002b20(), iVar2 != 0)) {
          FUN_10000138(param_3);
          bVar1 = true;
        }
      }
      piVar3 = (int *)FUN_10105684(auStack_268);
      iVar2 = FUN_100ebf44(auStack_268);
    }
    FUN_101055f4(auStack_268,2);
    FUN_100ee77c(auStack_130,2);
  }
  return;
}



// Function: FUN_101083f8 at 101083f8
// Size: 64 bytes

void FUN_101083f8(int param_1,undefined4 param_2)

{
  FUN_100e10f8(param_2,param_1 + 0x2c,param_1 + 0x3c);
  return;
}



// Function: FUN_10108438 at 10108438
// Size: 200 bytes

void FUN_10108438(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_20 [12];
  
  FUN_100e1140(auStack_20,param_2);
  iVar1 = FUN_100e11c8(param_1 + 0xf,auStack_20);
  if (iVar1 != 0) {
    FUN_100e1140(param_1 + 0xf,param_2);
    FUN_10117884((int)*(short *)(*param_1 + 0x3b8) + (int)param_1);
    FUN_10117884((int)*(short *)(*param_1 + 0x3e0) + (int)param_1);
    if (param_3 != '\0') {
      FUN_10117884((int)*(short *)(*param_1 + 0x4d0) + (int)param_1);
    }
  }
  return;
}



// Function: FUN_10108500 at 10108500
// Size: 112 bytes

undefined4 FUN_10108500(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2f0));
    }
  }
  else {
    uVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x4a0));
  }
  return uVar1;
}



// Function: FUN_10108570 at 10108570
// Size: 104 bytes

void FUN_10108570(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x2f8));
    }
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4a8));
  }
  return;
}



// Function: FUN_101085d8 at 101085d8
// Size: 104 bytes

void FUN_101085d8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x300));
    }
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x4b0));
  }
  return;
}



// Function: FUN_10108640 at 10108640
// Size: 112 bytes

void FUN_10108640(int *param_1,undefined1 param_2)

{
  undefined1 auStack_20 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x518),auStack_20,param_1 + 0xd,param_2);
  return;
}



// Function: FUN_101086b0 at 101086b0
// Size: 64 bytes

undefined4 FUN_101086b0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100d76c0(0);
  FUN_100d77c4();
  return uVar1;
}



// Function: FUN_101086f0 at 101086f0
// Size: 84 bytes

void FUN_101086f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1c] == 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x430));
    param_1[0x1c] = iVar1;
  }
  return;
}



// Function: FUN_10108744 at 10108744
// Size: 108 bytes

void FUN_10108744(int *param_1,int param_2,char param_3)

{
  if (param_1[0x1c] != param_2) {
    FUN_100f57c8(param_1[0x1c]);
    param_1[0x1c] = param_2;
  }
  if (param_3 != '\0') {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x4d0));
  }
  return;
}



// Function: FUN_101087b8 at 101087b8
// Size: 104 bytes

void FUN_101087b8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x1c];
  if (piVar1 != (int *)0x0) {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0xb0));
  }
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x458));
  return;
}



// Function: FUN_10108820 at 10108820
// Size: 72 bytes

void FUN_10108820(int param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x70) + (int)*(short *)(**(int **)(param_1 + 0x70) + 0xb8)
                );
  }
  return;
}



// Function: FUN_10108868 at 10108868
// Size: 72 bytes

void FUN_10108868(int param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x70) + (int)*(short *)(**(int **)(param_1 + 0x70) + 0xc0)
                );
  }
  return;
}



// Function: FUN_101088b0 at 101088b0
// Size: 4 bytes

void FUN_101088b0(void)

{
  return;
}



// Function: FUN_101088b4 at 101088b4
// Size: 100 bytes

void FUN_101088b4(int *param_1)

{
  undefined1 auStack_18 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x480),auStack_18);
  return;
}



// Function: FUN_10108918 at 10108918
// Size: 1172 bytes

void FUN_10108918(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int local_334;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [16];
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 auStack_2c8 [276];
  undefined4 local_1b4;
  undefined1 auStack_1b0 [312];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined1 auStack_48 [20];
  
  FUN_100e17d8(param_2,auStack_300,param_1 + 0x18);
  iVar1 = FUN_100e1a08(auStack_300);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x668) + (int)param_1), iVar1 != 0)) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x630) + (int)param_1,auStack_2e8);
    FUN_100e17d8(param_2,&local_310,auStack_2e8);
    puVar2 = &local_78;
    if ((&local_78 != (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)FUN_100f56e4(0x10), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = local_310;
      puVar2[1] = local_30c;
      puVar2[2] = local_308;
      puVar2[3] = local_304;
    }
    iVar1 = FUN_100e1a08(&local_78);
    if (iVar1 == 0) {
      FUN_100ee64c(auStack_2c8);
      FUN_10001e48(local_1b4);
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),&local_78,auStack_2f0);
      uVar3 = FUN_100b0578(auStack_2f0);
      iVar1 = FUN_10001e60(uVar3,local_1b4);
      FUN_100ee77c(auStack_2c8,2);
      if (iVar1 != 0) {
        FUN_10117884((int)*(short *)(*param_1 + 0x450) + (int)param_1);
        if (param_1[0x1d] == 0) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x478),&local_78);
        }
        else {
          FUN_10117884((int)*(short *)(*param_1 + 0x490) + (int)param_1,&local_78);
        }
        piVar4 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
        if (piVar4 != (int *)0x0) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x180),&local_78);
        }
      }
      FUN_1010556c(auStack_1b0,param_1);
      piVar4 = (int *)FUN_10105660(auStack_1b0);
      iVar5 = FUN_100ebf44(auStack_1b0);
      while (iVar5 != 0) {
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x600),auStack_48);
        puVar2 = local_58;
        if ((local_58 != (undefined4 *)0x0) ||
           (puVar2 = (undefined4 *)FUN_100f56e4(0x10), puVar2 != (undefined4 *)0x0)) {
          *puVar2 = local_78;
          puVar2[1] = local_74;
          puVar2[2] = local_70;
          puVar2[3] = local_6c;
        }
        FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x2c0),local_58);
        FUN_100e17d8(local_58,&local_2d8,auStack_48);
        puVar2 = local_68;
        if ((local_68 != (undefined4 *)0x0) ||
           (puVar2 = (undefined4 *)FUN_100f56e4(0x10), puVar2 != (undefined4 *)0x0)) {
          *puVar2 = local_2d8;
          puVar2[1] = local_2d4;
          puVar2[2] = local_2d0;
          puVar2[3] = local_2cc;
        }
        iVar5 = FUN_100e1a08(local_68);
        if (iVar5 == 0) {
          FUN_10117884((int)piVar4 + (int)*(short *)(*piVar4 + 0x480),local_68);
        }
        piVar4 = (int *)FUN_10105684(auStack_1b0);
        iVar5 = FUN_100ebf44(auStack_1b0);
      }
      FUN_101055f4(auStack_1b0,2);
      if (iVar1 != 0) {
        if ((((**(char **)(local_334 + -0xc58) == '\0') && (**(char **)(local_334 + -0xc50) == '\0')
             ) && (param_1[0x1d] != 0)) &&
           (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
          iVar1 = *param_1;
          uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x470),
                               *(undefined4 *)(iVar1 + 0x474));
          FUN_10117884((int)param_1 + (int)*(short *)(iVar1 + 0x498),&local_78,1,uVar3);
        }
        FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x460));
      }
    }
  }
  return;
}



// Function: FUN_10108dac at 10108dac
// Size: 324 bytes

void FUN_10108dac(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_178 [24];
  undefined4 local_160 [4];
  undefined1 auStack_150 [316];
  
  puVar1 = local_160;
  if ((local_160 != (undefined4 *)0x0) ||
     (puVar1 = (undefined4 *)FUN_100f56e4(0x10), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  FUN_100b236c(auStack_150,param_1);
  FUN_10000000(auStack_178);
  piVar2 = (int *)FUN_100b2460(auStack_150);
  iVar3 = FUN_100ebf44(auStack_150);
  while (iVar3 != 0) {
    iVar3 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xe0),param_1);
    if (iVar3 != 0) {
      FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0xb8),param_1,local_160);
      FUN_100016f8(auStack_178);
    }
    piVar2 = (int *)FUN_100b24e8(auStack_150);
    iVar3 = FUN_100ebf44(auStack_150);
  }
  FUN_100b23f4(auStack_150,2);
  return;
}



// Function: FUN_10108ef0 at 10108ef0
// Size: 284 bytes

int * FUN_10108ef0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_148 [316];
  
  if (param_1[6] != param_2) {
    FUN_1010556c(auStack_148,param_1);
    piVar1 = (int *)FUN_10105660(auStack_148);
    iVar2 = FUN_100ebf44(auStack_148);
    while (iVar2 != 0) {
      if (piVar1[6] == param_2) {
        FUN_101055f4(auStack_148,2);
        return piVar1;
      }
      if ((piVar1[9] != 0) &&
         (piVar1 = (int *)FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x308),param_2),
         piVar1 != (int *)0x0)) {
        FUN_101055f4(auStack_148,2);
        return piVar1;
      }
      piVar1 = (int *)FUN_10105684(auStack_148);
      iVar2 = FUN_100ebf44(auStack_148);
    }
    FUN_101055f4(auStack_148,2);
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Function: FUN_1010900c at 1010900c
// Size: 364 bytes

undefined4 FUN_1010900c(int *param_1)

{
  int iVar1;
  int local_4c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 local_18 [2];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3c0));
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3b0));
    if (iVar1 == 0) {
      return 0;
    }
    FUN_10002028((int)*(short *)((int)param_1 + 0x56),(int)*(short *)(param_1 + 0x15));
    FUN_100b02d0(local_18);
    if (param_1[8] == 0) {
      local_18[0] = **(undefined4 **)(local_4c + -0xe60);
    }
    else {
      FUN_100b0408(local_18,param_1 + 0x15,param_1[8] + 0x54);
    }
    **(int **)(local_4c + -0xe30) = (int)param_1;
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x628),auStack_20);
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3d0),auStack_20,local_18[0]);
  }
  else if ((int *)**(undefined4 **)(local_4c + -0xc54) == param_1) {
    FUN_10117884((int)*(short *)(*param_1 + 0x610) + (int)param_1,auStack_28);
    FUN_10002028((int)*(short *)((int)param_1 + 0x56),(int)*(short *)(param_1 + 0x15));
    FUN_100b0578(auStack_28);
    FUN_10002040();
  }
  return 1;
}



// Function: FUN_10109178 at 10109178
// Size: 76 bytes

undefined4 FUN_10109178(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x3a8));
  }
  return uVar1;
}



// Function: FUN_101091c4 at 101091c4
// Size: 164 bytes

void FUN_101091c4(int *param_1)

{
  int iVar1;
  undefined1 auStack_128 [276];
  undefined4 local_14;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x670));
  if (iVar1 != 0) {
    FUN_100ee64c(auStack_128);
    FUN_10117884((int)*(short *)(*param_1 + 0x608) + (int)param_1,local_14);
    FUN_10117884((int)*(short *)(*param_1 + 0x4e8) + (int)param_1,local_14);
    FUN_100ee77c(auStack_128,2);
  }
  return;
}



// Function: FUN_10109268 at 10109268
// Size: 148 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109268(int *param_1)

{
  int *piVar1;
  
  FUN_10117884((int)_DAT_a89f0000 + (int)*(short *)(*_DAT_a89f0000 + 0x38),0x23,param_1);
  piVar1 = (int *)param_1[10];
  if (piVar1 == (int *)0x0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
  }
  else {
    FUN_10117884((int)piVar1 + (int)*(short *)(*piVar1 + 0x240));
  }
  return;
}



// Function: FUN_10109308 at 10109308
// Size: 116 bytes

void FUN_10109308(int *param_1,undefined4 param_2)

{
  FUN_100dac58(param_1,param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x250),param_2);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 600),param_2);
  return;
}



// Function: FUN_1010937c at 1010937c
// Size: 804 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010937c(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 local_160;
  undefined1 local_15f [3];
  int local_15c;
  int local_158;
  int local_154;
  int iStack_150;
  int local_14c;
  int iStack_148;
  undefined1 auStack_144 [256];
  short local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = _DAT_41820010;
  _DAT_41820010 = auStack_144;
  iVar1 = FUN_10000090(auStack_144);
  if (iVar1 == 0) {
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x1f) = uVar2;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x118),&local_14c);
    param_1[0xb] = local_14c;
    param_1[0xc] = iStack_148;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x118),&local_154);
    param_1[0xd] = local_154;
    param_1[0xe] = iStack_150;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),local_15f,1);
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xe0),&local_160,1);
    *(undefined1 *)((int)param_1 + 0x45) = local_160;
    *(undefined1 *)(param_1 + 0x11) = local_15f[0];
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0x52) = uVar3;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0x53) = uVar3;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)(param_1 + 0x12) = uVar3;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0x49) = uVar3;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x13) = uVar2;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0x4a) = uVar3;
    uVar3 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0xf0));
    *(undefined1 *)((int)param_1 + 0x4b) = uVar3;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)((int)param_1 + 0x4e) = uVar2;
    uVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    *(undefined2 *)(param_1 + 0x14) = uVar2;
    local_158 = 0;
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_158);
    if (iVar1 == 0) {
      param_1[0x1c] = 0;
    }
    else {
      param_1[0x1c] = local_158;
    }
    local_15c = 0;
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_15c);
    if (iVar1 == 0) {
      param_1[0x1d] = 0;
    }
    else {
      param_1[0x1d] = local_15c;
    }
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x108));
    param_1[0x1e] = iVar1;
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x138));
    _DAT_41820010 = local_3c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_44,local_40);
  }
  return;
}



// Function: FUN_101096a0 at 101096a0
// Size: 292 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101096a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_138;
  undefined1 auStack_134 [256];
  short local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = _DAT_41820010;
  _DAT_41820010 = auStack_134;
  iVar1 = FUN_10000090(auStack_134);
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x100));
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        local_138 = 0;
        iVar2 = FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x160),&local_138);
        if (iVar2 != 0) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x2e0),local_138);
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < iVar1);
    }
    _DAT_41820010 = local_2c;
  }
  else {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x90));
    FUN_100db158((int)local_34,local_30);
  }
  return;
}



// Function: FUN_101097c4 at 101097c4
// Size: 36 bytes

void FUN_101097c4(void)

{
  FUN_100dad6c();
  return;
}



// Function: FUN_101097e8 at 101097e8
// Size: 628 bytes

void FUN_101097e8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20;
  undefined1 local_1f [7];
  
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x1f));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0xb);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1a8),param_1 + 0xd);
  local_1f[0] = *(undefined1 *)((int)param_1 + 0x45);
  local_20 = *(undefined1 *)(param_1 + 0x11);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),&local_20,1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x170),local_1f,1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x52)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x53)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)(param_1 + 0x12));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x49)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x13));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x4a)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x180),*(undefined1 *)((int)param_1 + 0x4b)
              );
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)((int)param_1 + 0x4e));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 400),(int)*(short *)(param_1 + 0x14));
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),param_1[0x1c],0);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),param_1[0x1d],1);
  FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x198),param_1[0x1e]);
  iVar2 = *param_2;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x70));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar2 + 0x1c8),uVar1);
  return;
}



// Function: FUN_10109a5c at 10109a5c
// Size: 252 bytes

void FUN_10109a5c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_150 [316];
  
  iVar2 = *param_2;
  uVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x300));
  FUN_10117884((int)param_2 + (int)*(short *)(iVar2 + 400),uVar1);
  FUN_1010556c(auStack_150,param_1);
  uVar1 = FUN_10105660(auStack_150);
  iVar2 = FUN_100ebf44(auStack_150);
  while (iVar2 != 0) {
    FUN_10117884((int)param_2 + (int)*(short *)(*param_2 + 0x1f8),uVar1,1);
    uVar1 = FUN_10105684(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
  }
  FUN_101055f4(auStack_150,2);
  return;
}



// Function: FUN_10109b94 at 10109b94
// Size: 76 bytes

int FUN_10109b94(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[10];
  if (iVar1 == 0) {
    iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x138));
  }
  return iVar1;
}



// Function: FUN_10109be0 at 10109be0
// Size: 172 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109be0(int *param_1,undefined4 *param_2)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x290),auStack_38);
  local_30 = _DAT_41820018;
  local_2c = _DAT_4182001c;
  local_28 = param_1[0xd];
  local_24 = param_1[0xe];
  FUN_100e10f8(auStack_40,auStack_38,param_1 + 0xb);
  FUN_100e15ec(&local_30,&local_50,auStack_40);
  *param_2 = local_50;
  param_2[1] = uStack_4c;
  param_2[2] = uStack_48;
  param_2[3] = uStack_44;
  return;
}



// Function: FUN_10109c8c at 10109c8c
// Size: 108 bytes

void FUN_10109c8c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x610),auStack_10);
  uVar1 = FUN_100b0578(auStack_10);
  FUN_10003150(param_2,uVar1);
  return;
}



// Function: FUN_10109cf8 at 10109cf8
// Size: 116 bytes

void FUN_10109cf8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_100e10b0(&local_30,param_1 + 0x2c,param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  param_2[1] = uVar1;
  param_2[2] = local_30;
  param_2[3] = local_2c;
  return;
}



// Function: FUN_10109d6c at 10109d6c
// Size: 184 bytes

int FUN_10109d6c(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int *piVar3;
  undefined **local_2c;
  
  piVar3 = *(int **)(param_1 + 0x70);
  ppuVar1 = &.TVect::OCECToRString;
  if ((piVar3 == (int *)0x0) ||
     (iVar2 = FUN_10117884((int)*(short *)(*piVar3 + 0xa8) + (int)piVar3), ppuVar1 = local_2c,
     iVar2 == 0)) {
    if ((*ppuVar1[-0x316] == '\0') && (*ppuVar1[-0x314] == '\0')) {
      piVar3 = *(int **)(param_1 + 0x20);
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x5e8));
      }
    }
    else {
      iVar2 = *(int *)(ppuVar1[-0x2c] + 0xca);
    }
  }
  return iVar2;
}



// Function: FUN_10109e24 at 10109e24
// Size: 112 bytes

undefined4 FUN_10109e24(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_18);
  iVar1 = FUN_100e1aac(auStack_18,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



// Function: FUN_10109e94 at 10109e94
// Size: 108 bytes

void FUN_10109e94(int *param_1,undefined4 param_2)

{
  undefined1 auStack_20 [20];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x600),auStack_20);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),auStack_20,param_2);
  return;
}



// Function: FUN_10109f00 at 10109f00
// Size: 132 bytes

int FUN_10109f00(int param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10117884((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x5f0),param_2);
    if ((iVar1 != *(int *)(param_1 + 0x20)) && (param_2 != '\0')) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// Function: FUN_10109f84 at 10109f84
// Size: 108 bytes

void FUN_10109f84(int *param_1,undefined4 param_2)

{
  undefined1 auStack_18 [12];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x628),auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x278),auStack_18,param_2);
  return;
}



// Function: FUN_10109ff0 at 10109ff0
// Size: 160 bytes

void FUN_10109ff0(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_130 [276];
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_100ee64c(auStack_130);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x648),local_1c);
  local_18 = *(undefined4 *)(*local_1c + 2);
  local_14 = *(undefined4 *)(*local_1c + 6);
  *param_2 = local_18;
  param_2[1] = local_14;
  FUN_100ee77c(auStack_130,2);
  return;
}



// Function: FUN_1010a090 at 1010a090
// Size: 164 bytes

void FUN_1010a090(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  
  iVar1 = FUN_100e1a08(param_1 + 0x18);
  if (iVar1 == 0) {
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x288),param_1 + 0x18,auStack_18);
    uVar2 = FUN_100b0578(auStack_18);
    FUN_10003150(param_2,uVar2);
    FUN_101056a8(param_2);
  }
  else {
    FUN_10000138(param_2);
  }
  return;
}



// Function: FUN_1010a134 at 1010a134
// Size: 108 bytes

void FUN_1010a134(int *param_1,undefined4 param_2)

{
  undefined1 auStack_18 [12];
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x638),auStack_18);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x278),auStack_18,param_2);
  return;
}



// Function: FUN_1010a1a0 at 1010a1a0
// Size: 160 bytes

void FUN_1010a1a0(int *param_1,undefined4 *param_2)

{
  undefined1 auStack_130 [276];
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_100ee64c(auStack_130);
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x640),local_1c);
  local_18 = *(undefined4 *)(*local_1c + 2);
  local_14 = *(undefined4 *)(*local_1c + 6);
  *param_2 = local_18;
  param_2[1] = local_14;
  FUN_100ee77c(auStack_130,2);
  return;
}



// Function: FUN_1010a240 at 1010a240
// Size: 104 bytes

void FUN_1010a240(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x648),param_2);
  iVar1 = FUN_10000060(param_2);
  if (iVar1 == 0) {
    FUN_10105704(param_2);
  }
  return;
}



// Function: FUN_1010a2b8 at 1010a2b8
// Size: 76 bytes

bool FUN_1010a2b8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  return iVar1 == 0;
}



// Function: FUN_1010a30c at 1010a30c
// Size: 332 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a30c(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,short *param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = _DAT_28030000;
  iVar5 = *_DAT_28030000;
  uVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5b0));
  uVar3 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a8));
  uVar4 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x5a0));
  FUN_10117884((int)piVar1 + (int)*(short *)(iVar5 + 0x418),uVar4,uVar3,uVar2,param_4,param_5,
               param_6,param_7);
  if (param_3 != (int *)0x0) {
    uVar2 = *(undefined4 *)(*param_3 + 6);
    *param_6 = *(undefined4 *)(*param_3 + 2);
    param_6[1] = uVar2;
    if ((param_5[1] < 0) || (*param_5 < 0)) {
      FUN_10117884(param_5,(int)param_1 + (int)*(short *)(*param_1 + 0x280),param_2);
    }
  }
  return;
}



// Function: FUN_1010a458 at 1010a458
// Size: 72 bytes

void FUN_1010a458(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10117884((int)*(int **)(param_1 + 0x20) +
                 (int)*(short *)(**(int **)(param_1 + 0x20) + 0x5f8));
  }
  return;
}



// Function: FUN_1010a4a0 at 1010a4a0
// Size: 76 bytes

undefined4 FUN_1010a4a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10117884((int)*(int **)(param_1 + 0x20) +
                         (int)*(short *)(**(int **)(param_1 + 0x20) + 0x138));
  }
  return uVar1;
}



// Function: FUN_1010a4ec at 1010a4ec
// Size: 108 bytes

undefined4 FUN_1010a4ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  
  uVar1 = FUN_100f1574(1);
  uVar2 = FUN_10000228(param_2,param_3,auStack_10);
  FUN_100f1574(uVar1);
  return uVar2;
}



// Function: FUN_1010a558 at 1010a558
// Size: 628 bytes

void FUN_1010a558(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [312];
  
  iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x570));
  if (iVar2 != 0) {
    FUN_101054e0(auStack_150,param_1,0);
    piVar3 = (int *)FUN_10105660(auStack_150);
    iVar2 = FUN_100ebf44(auStack_150);
    while (iVar2 != 0) {
      local_158 = *param_2;
      uStack_154 = param_2[1];
      FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x2b8),&local_158);
      iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x538),&local_158);
      if ((iVar2 != 0) &&
         (iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x568)), iVar2 != 0)) {
        FUN_10117884((int)*(short *)(*piVar3 + 0x588) + (int)piVar3,&local_158,param_3);
        FUN_10117884((int)*(short *)(*piVar3 + 0x2b0) + (int)piVar3,param_3);
        break;
      }
      piVar3 = (int *)FUN_10105684(auStack_150);
      iVar2 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  iVar2 = FUN_10000060(param_3);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar2 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x5d8) + (int)param_1,param_2,param_3);
    iVar2 = FUN_10117884((int)*(short *)(*param_1 + 0x1d0) + (int)param_1);
    bVar1 = true;
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_10117884((int)*(short *)(*param_1 + 0x1d0) + (int)param_1);
      iVar2 = FUN_10117884((int)piVar3 + (int)*(short *)(*piVar3 + 0x188),param_2,param_3);
      bVar1 = iVar2 == 0;
    }
    if (bVar1) {
      FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x598),param_2,param_3);
    }
    FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x560),param_3);
  }
  return;
}



// Function: FUN_1010a7cc at 1010a7cc
// Size: 512 bytes

void FUN_1010a7cc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [312];
  
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x580));
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
         (iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x578)), iVar1 != 0)) {
        FUN_10117884((int)*(short *)(*piVar2 + 0x590) + (int)piVar2,&local_158,param_3);
        FUN_10117884((int)*(short *)(*piVar2 + 0x2b0) + (int)piVar2,param_3);
        break;
      }
      piVar2 = (int *)FUN_10105684(auStack_150);
      iVar1 = FUN_100ebf44(auStack_150);
    }
    FUN_101055f4(auStack_150,2);
  }
  iVar1 = FUN_10000060(param_3);
  if (((iVar1 != 0) &&
      (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x578)), iVar1 != 0)) &&
     (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8)), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x5d0) + (int)param_1,param_2,param_3);
    FUN_10117884((int)*(short *)(*param_1 + 0x560) + (int)param_1,param_3);
  }
  return;
}



// Function: FUN_1010a9cc at 1010a9cc
// Size: 856 bytes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1010a9cc(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uStack00000024;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170 [2];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [312];
  
  uStack00000024 = param_4;
  iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_10117884((int)*(short *)(*param_1 + 0x140) + (int)param_1), iVar1 != 0)) {
    FUN_10117884((int)*(short *)(*param_1 + 0x180) + (int)param_1);
  }
  FUN_101054e0(auStack_160,param_1,0);
  piVar2 = (int *)FUN_10105660(auStack_160);
  iVar1 = FUN_100ebf44(auStack_160);
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x3a8));
      if (iVar1 == 0) {
        FUN_101055f4(auStack_160,2);
        bVar3 = false;
      }
      else {
        local_178 = *param_2;
        uStack_174 = param_2[1];
        iVar1 = FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x468));
        if (iVar1 != 0) {
          FUN_100b02d0(local_170);
          FUN_10117884(local_170,(int)*(short *)(*param_1 + 0x280) + (int)param_1,param_2);
          FUN_100b0384(local_170);
          FUN_10002fd0();
          FUN_10117884((int)_DAT_28030000 + (int)*(short *)(*_DAT_28030000 + 0x428),local_170[0]);
          FUN_10117884((int)*(short *)(*param_1 + 0x3a8) + (int)param_1);
        }
        piVar2 = (int *)FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x1d8));
        bVar3 = true;
        if (piVar2 != (int *)0x0) {
          iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x170),&local_178,param_3,
                               uStack00000024);
          bVar3 = iVar1 == 0;
        }
        if ((bVar3) &&
           (iVar1 = FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0xe0)), iVar1 != 0)) {
          FUN_10117884((int)param_1 + (int)*(short *)(*param_1 + 0x550),&local_178,param_3,
                       uStack00000024);
          FUN_101055f4(auStack_160,2);
          bVar3 = true;
        }
        else {
          bVar3 = !bVar3;
          FUN_101055f4(auStack_160,2);
        }
      }
      return bVar3;
    }
    local_168 = *param_2;
    uStack_164 = param_2[1];
    FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x2b8),&local_168);
    iVar1 = FUN_10117884((int)piVar2 + (int)*(short *)(*piVar2 + 0x538),&local_168);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_10117884((int)*(short *)(*piVar2 + 0x540) + (int)piVar2,&local_168,param_3,
                             uStack00000024), iVar1 != 0)) break;
    piVar2 = (int *)FUN_10105684(auStack_160);
    iVar1 = FUN_100ebf44(auStack_160);
  }
  FUN_101055f4(auStack_160,2);
  return true;
}



